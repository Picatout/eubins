// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _68advance(object _pc_52913, object _code_52914)
{
    object _27033 = NOVALUE;
    object _27031 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:63		prev_pc = pc*/
    _68prev_pc_52896 = _pc_52913;

    /** inline.e:64		if pc > length( code ) then*/
    if (IS_SEQUENCE(_code_52914)){
            _27031 = SEQ_PTR(_code_52914)->length;
    }
    else {
        _27031 = 1;
    }
    if (_pc_52913 <= _27031)
    goto L1; // [15] 26

    /** inline.e:65			return pc*/
    DeRefDS(_code_52914);
    return _pc_52913;
L1: 

    /** inline.e:67		return shift:advance( pc, code )*/
    RefDS(_code_52914);
    _27033 = _67advance(_pc_52913, _code_52914);
    DeRefDS(_code_52914);
    return _27033;
    ;
}


void _68shift(object _start_52921, object _amount_52922, object _bound_52923)
{
    object _temp_LineTable_52924 = NOVALUE;
    object _temp_Code_52926 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_amount_52922)) {
        _1 = (object)(DBL_PTR(_amount_52922)->dbl);
        DeRefDS(_amount_52922);
        _amount_52922 = _1;
    }

    /** inline.e:72			temp_LineTable = LineTable,*/
    RefDS(_39LineTable_16904);
    DeRef(_temp_LineTable_52924);
    _temp_LineTable_52924 = _39LineTable_16904;

    /** inline.e:73			temp_Code = Code*/
    RefDS(_39Code_16903);
    DeRef(_temp_Code_52926);
    _temp_Code_52926 = _39Code_16903;

    /** inline.e:74		LineTable = {}*/
    RefDS(_21928);
    DeRefDS(_39LineTable_16904);
    _39LineTable_16904 = _21928;

    /** inline.e:75		Code = inline_code*/
    RefDS(_68inline_code_52888);
    DeRefDS(_39Code_16903);
    _39Code_16903 = _68inline_code_52888;

    /** inline.e:76		inline_code = {}*/
    RefDS(_21928);
    DeRefDS(_68inline_code_52888);
    _68inline_code_52888 = _21928;

    /** inline.e:78		shift:shift( start, amount, bound )*/
    _67shift(_start_52921, _amount_52922, _bound_52923);

    /** inline.e:80		LineTable = temp_LineTable*/
    RefDS(_temp_LineTable_52924);
    DeRefDS(_39LineTable_16904);
    _39LineTable_16904 = _temp_LineTable_52924;

    /** inline.e:81		inline_code = Code*/
    RefDS(_39Code_16903);
    DeRefDS(_68inline_code_52888);
    _68inline_code_52888 = _39Code_16903;

    /** inline.e:82		Code = temp_Code*/
    RefDS(_temp_Code_52926);
    DeRefDS(_39Code_16903);
    _39Code_16903 = _temp_Code_52926;

    /** inline.e:83	end procedure*/
    DeRefDS(_temp_LineTable_52924);
    DeRefDS(_temp_Code_52926);
    return;
    ;
}


void _68replace_code(object _code_52941, object _start_52942, object _finish_52943)
{
    object _27040 = NOVALUE;
    object _27039 = NOVALUE;
    object _27038 = NOVALUE;
    object _27037 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_finish_52943)) {
        _1 = (object)(DBL_PTR(_finish_52943)->dbl);
        DeRefDS(_finish_52943);
        _finish_52943 = _1;
    }

    /** inline.e:92		inline_code = replace( inline_code, code, start, finish )*/
    {
        intptr_t p1 = _68inline_code_52888;
        intptr_t p2 = _code_52941;
        intptr_t p3 = _start_52942;
        intptr_t p4 = _finish_52943;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_68inline_code_52888;
        Replace( &replace_params );
    }

    /** inline.e:93		shift( start , length( code ) - (finish - start + 1), finish )*/
    if (IS_SEQUENCE(_code_52941)){
            _27037 = SEQ_PTR(_code_52941)->length;
    }
    else {
        _27037 = 1;
    }
    _27038 = _finish_52943 - _start_52942;
    if ((object)((uintptr_t)_27038 +(uintptr_t) HIGH_BITS) >= 0){
        _27038 = NewDouble((eudouble)_27038);
    }
    if (IS_ATOM_INT(_27038)) {
        _27039 = _27038 + 1;
        if (_27039 > MAXINT){
            _27039 = NewDouble((eudouble)_27039);
        }
    }
    else
    _27039 = binary_op(PLUS, 1, _27038);
    DeRef(_27038);
    _27038 = NOVALUE;
    if (IS_ATOM_INT(_27039)) {
        _27040 = _27037 - _27039;
        if ((object)((uintptr_t)_27040 +(uintptr_t) HIGH_BITS) >= 0){
            _27040 = NewDouble((eudouble)_27040);
        }
    }
    else {
        _27040 = NewDouble((eudouble)_27037 - DBL_PTR(_27039)->dbl);
    }
    _27037 = NOVALUE;
    DeRef(_27039);
    _27039 = NOVALUE;
    _68shift(_start_52942, _27040, _finish_52943);
    _27040 = NOVALUE;

    /** inline.e:94	end procedure*/
    DeRefDS(_code_52941);
    return;
    ;
}


void _68defer()
{
    object _dx_52951 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:101		integer dx = find( inline_sub, deferred_inline_decisions )*/
    _dx_52951 = find_from(_68inline_sub_52902, _68deferred_inline_decisions_52904, 1);

    /** inline.e:102		if not dx then*/
    if (_dx_52951 != 0)
    goto L1; // [14] 36

    /** inline.e:103			deferred_inline_decisions &= inline_sub*/
    Append(&_68deferred_inline_decisions_52904, _68deferred_inline_decisions_52904, _68inline_sub_52902);

    /** inline.e:104			deferred_inline_calls = append( deferred_inline_calls, {} )*/
    RefDS(_21928);
    Append(&_68deferred_inline_calls_52905, _68deferred_inline_calls_52905, _21928);
L1: 

    /** inline.e:106	end procedure*/
    return;
    ;
}


object _68new_inline_temp(object _sym_52960)
{
    object _27046 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:110		inline_temps &= sym*/
    Append(&_68inline_temps_52890, _68inline_temps_52890, _sym_52960);

    /** inline.e:111		return length( inline_temps )*/
    if (IS_SEQUENCE(_68inline_temps_52890)){
            _27046 = SEQ_PTR(_68inline_temps_52890)->length;
    }
    else {
        _27046 = 1;
    }
    return _27046;
    ;
}


object _68get_inline_temp(object _sym_52966)
{
    object _temp_num_52967 = NOVALUE;
    object _27050 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:117		integer temp_num = find( sym, inline_params )*/
    _temp_num_52967 = find_from(_sym_52966, _68inline_params_52893, 1);

    /** inline.e:118		if temp_num then*/
    if (_temp_num_52967 == 0)
    {
        goto L1; // [14] 24
    }
    else{
    }

    /** inline.e:119			return temp_num*/
    return _temp_num_52967;
L1: 

    /** inline.e:122		temp_num = find( sym, proc_vars )*/
    _temp_num_52967 = find_from(_sym_52966, _68proc_vars_52889, 1);

    /** inline.e:123		if temp_num then*/
    if (_temp_num_52967 == 0)
    {
        goto L2; // [35] 45
    }
    else{
    }

    /** inline.e:124			return temp_num*/
    return _temp_num_52967;
L2: 

    /** inline.e:127		temp_num = find( sym, inline_temps )*/
    _temp_num_52967 = find_from(_sym_52966, _68inline_temps_52890, 1);

    /** inline.e:128		if temp_num then*/
    if (_temp_num_52967 == 0)
    {
        goto L3; // [56] 66
    }
    else{
    }

    /** inline.e:129			return temp_num*/
    return _temp_num_52967;
L3: 

    /** inline.e:132		return new_inline_temp( sym )*/
    _27050 = _68new_inline_temp(_sym_52966);
    return _27050;
    ;
}


object _68generic_symbol(object _sym_52978)
{
    object _inline_type_52979 = NOVALUE;
    object _px_52980 = NOVALUE;
    object _eentry_52987 = NOVALUE;
    object _27059 = NOVALUE;
    object _27058 = NOVALUE;
    object _27057 = NOVALUE;
    object _27056 = NOVALUE;
    object _27054 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:137		integer px = find( sym, inline_params )*/
    _px_52980 = find_from(_sym_52978, _68inline_params_52893, 1);

    /** inline.e:138		if px then*/
    if (_px_52980 == 0)
    {
        goto L1; // [14] 25
    }
    else{
    }

    /** inline.e:139			inline_type = INLINE_PARAM*/
    _inline_type_52979 = 1;
    goto L2; // [22] 100
L1: 

    /** inline.e:141			px = find( sym, proc_vars )*/
    _px_52980 = find_from(_sym_52978, _68proc_vars_52889, 1);

    /** inline.e:142			if px then*/
    if (_px_52980 == 0)
    {
        goto L3; // [36] 47
    }
    else{
    }

    /** inline.e:143				inline_type = INLINE_VAR*/
    _inline_type_52979 = 6;
    goto L4; // [44] 99
L3: 

    /** inline.e:145				sequence eentry = SymTab[sym]*/
    DeRef(_eentry_52987);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _eentry_52987 = (object)*(((s1_ptr)_2)->base + _sym_52978);
    Ref(_eentry_52987);

    /** inline.e:146				if is_literal( sym ) or eentry[S_SCOPE] > SC_PRIVATE then*/
    _27054 = _68is_literal(_sym_52978);
    if (IS_ATOM_INT(_27054)) {
        if (_27054 != 0) {
            goto L5; // [63] 84
        }
    }
    else {
        if (DBL_PTR(_27054)->dbl != 0.0) {
            goto L5; // [63] 84
        }
    }
    _2 = (object)SEQ_PTR(_eentry_52987);
    _27056 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_27056)) {
        _27057 = (_27056 > 3);
    }
    else {
        _27057 = binary_op(GREATER, _27056, 3);
    }
    _27056 = NOVALUE;
    if (_27057 == 0) {
        DeRef(_27057);
        _27057 = NOVALUE;
        goto L6; // [80] 91
    }
    else {
        if (!IS_ATOM_INT(_27057) && DBL_PTR(_27057)->dbl == 0.0){
            DeRef(_27057);
            _27057 = NOVALUE;
            goto L6; // [80] 91
        }
        DeRef(_27057);
        _27057 = NOVALUE;
    }
    DeRef(_27057);
    _27057 = NOVALUE;
L5: 

    /** inline.e:147					return sym*/
    DeRef(_eentry_52987);
    DeRef(_27054);
    _27054 = NOVALUE;
    return _sym_52978;
L6: 

    /** inline.e:149				inline_type = INLINE_TEMP*/
    _inline_type_52979 = 2;
    DeRef(_eentry_52987);
    _eentry_52987 = NOVALUE;
L4: 
L2: 

    /** inline.e:153		return { inline_type, get_inline_temp( sym ) }*/
    _27058 = _68get_inline_temp(_sym_52978);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _inline_type_52979;
    ((intptr_t *)_2)[2] = _27058;
    _27059 = MAKE_SEQ(_1);
    _27058 = NOVALUE;
    DeRef(_27054);
    _27054 = NOVALUE;
    return _27059;
    ;
}


object _68adjust_symbol(object _pc_53002)
{
    object _sym_53004 = NOVALUE;
    object _eentry_53010 = NOVALUE;
    object _27067 = NOVALUE;
    object _27065 = NOVALUE;
    object _27064 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_pc_53002)) {
        _1 = (object)(DBL_PTR(_pc_53002)->dbl);
        DeRefDS(_pc_53002);
        _pc_53002 = _1;
    }

    /** inline.e:160		symtab_index sym = inline_code[pc]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _sym_53004 = (object)*(((s1_ptr)_2)->base + _pc_53002);
    if (!IS_ATOM_INT(_sym_53004)){
        _sym_53004 = (object)DBL_PTR(_sym_53004)->dbl;
    }

    /** inline.e:161		if sym < 0 then*/
    if (_sym_53004 >= 0)
    goto L1; // [15] 28

    /** inline.e:162			return 0*/
    DeRef(_eentry_53010);
    return 0;
    goto L2; // [25] 41
L1: 

    /** inline.e:163		elsif not sym then*/
    if (_sym_53004 != 0)
    goto L3; // [30] 40

    /** inline.e:165			return 1*/
    DeRef(_eentry_53010);
    return 1;
L3: 
L2: 

    /** inline.e:168		sequence eentry = SymTab[sym]*/
    DeRef(_eentry_53010);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _eentry_53010 = (object)*(((s1_ptr)_2)->base + _sym_53004);
    Ref(_eentry_53010);

    /** inline.e:169		if is_literal( sym ) then*/
    _27064 = _68is_literal(_sym_53004);
    if (_27064 == 0) {
        DeRef(_27064);
        _27064 = NOVALUE;
        goto L4; // [57] 69
    }
    else {
        if (!IS_ATOM_INT(_27064) && DBL_PTR(_27064)->dbl == 0.0){
            DeRef(_27064);
            _27064 = NOVALUE;
            goto L4; // [57] 69
        }
        DeRef(_27064);
        _27064 = NOVALUE;
    }
    DeRef(_27064);
    _27064 = NOVALUE;

    /** inline.e:170			return 1*/
    DeRefDS(_eentry_53010);
    return 1;
    goto L5; // [66] 95
L4: 

    /** inline.e:172		elsif eentry[S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_eentry_53010);
    _27065 = (object)*(((s1_ptr)_2)->base + 4);
    if (binary_op_a(NOTEQ, _27065, 9)){
        _27065 = NOVALUE;
        goto L6; // [79] 94
    }
    _27065 = NOVALUE;

    /** inline.e:173			defer()*/
    _68defer();

    /** inline.e:174			return 0*/
    DeRefDS(_eentry_53010);
    return 0;
L6: 
L5: 

    /** inline.e:177		inline_code[pc] = generic_symbol( sym )*/
    _27067 = _68generic_symbol(_sym_53004);
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53002);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27067;
    if( _1 != _27067 ){
        DeRef(_1);
    }
    _27067 = NOVALUE;

    /** inline.e:178		return 1*/
    DeRef(_eentry_53010);
    return 1;
    ;
}


object _68check_for_param(object _pc_53024)
{
    object _px_53025 = NOVALUE;
    object _27070 = NOVALUE;
    object _27068 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_pc_53024)) {
        _1 = (object)(DBL_PTR(_pc_53024)->dbl);
        DeRefDS(_pc_53024);
        _pc_53024 = _1;
    }

    /** inline.e:182		integer px = find( inline_code[pc], inline_params )*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27068 = (object)*(((s1_ptr)_2)->base + _pc_53024);
    _px_53025 = find_from(_27068, _68inline_params_52893, 1);
    _27068 = NOVALUE;

    /** inline.e:183		if px then*/
    if (_px_53025 == 0)
    {
        goto L1; // [20] 51
    }
    else{
    }

    /** inline.e:184			if not find( px, assigned_params ) then*/
    _27070 = find_from(_px_53025, _68assigned_params_52894, 1);
    if (_27070 != 0)
    goto L2; // [32] 44
    _27070 = NOVALUE;

    /** inline.e:185				assigned_params &= px*/
    Append(&_68assigned_params_52894, _68assigned_params_52894, _px_53025);
L2: 

    /** inline.e:187			return 1*/
    return 1;
L1: 

    /** inline.e:189		return 0*/
    return 0;
    ;
}


void _68check_target(object _pc_53035, object _op_53036)
{
    object _targets_53037 = NOVALUE;
    object _27079 = NOVALUE;
    object _27078 = NOVALUE;
    object _27077 = NOVALUE;
    object _27076 = NOVALUE;
    object _27075 = NOVALUE;
    object _27073 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:194		sequence targets = op_info[op][OP_TARGET]*/
    _2 = (object)SEQ_PTR(_67op_info_23871);
    _27073 = (object)*(((s1_ptr)_2)->base + _op_53036);
    DeRef(_targets_53037);
    _2 = (object)SEQ_PTR(_27073);
    _targets_53037 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_targets_53037);
    _27073 = NOVALUE;

    /** inline.e:196		if length( targets ) then*/
    if (IS_SEQUENCE(_targets_53037)){
            _27075 = SEQ_PTR(_targets_53037)->length;
    }
    else {
        _27075 = 1;
    }
    if (_27075 == 0)
    {
        _27075 = NOVALUE;
        goto L1; // [26] 72
    }
    else{
        _27075 = NOVALUE;
    }

    /** inline.e:197		for i = 1 to length( targets ) do*/
    if (IS_SEQUENCE(_targets_53037)){
            _27076 = SEQ_PTR(_targets_53037)->length;
    }
    else {
        _27076 = 1;
    }
    {
        object _i_53045;
        _i_53045 = 1;
L2: 
        if (_i_53045 > _27076){
            goto L3; // [34] 71
        }

        /** inline.e:198				if check_for_param( pc + targets[i] ) then*/
        _2 = (object)SEQ_PTR(_targets_53037);
        _27077 = (object)*(((s1_ptr)_2)->base + _i_53045);
        if (IS_ATOM_INT(_27077)) {
            _27078 = _pc_53035 + _27077;
            if ((object)((uintptr_t)_27078 + (uintptr_t)HIGH_BITS) >= 0){
                _27078 = NewDouble((eudouble)_27078);
            }
        }
        else {
            _27078 = binary_op(PLUS, _pc_53035, _27077);
        }
        _27077 = NOVALUE;
        _27079 = _68check_for_param(_27078);
        _27078 = NOVALUE;
        if (_27079 == 0) {
            DeRef(_27079);
            _27079 = NOVALUE;
            goto L4; // [55] 64
        }
        else {
            if (!IS_ATOM_INT(_27079) && DBL_PTR(_27079)->dbl == 0.0){
                DeRef(_27079);
                _27079 = NOVALUE;
                goto L4; // [55] 64
            }
            DeRef(_27079);
            _27079 = NOVALUE;
        }
        DeRef(_27079);
        _27079 = NOVALUE;

        /** inline.e:199					return*/
        DeRefDS(_targets_53037);
        return;
L4: 

        /** inline.e:201			end for*/
        _i_53045 = _i_53045 + 1;
        goto L2; // [66] 41
L3: 
        ;
    }
L1: 

    /** inline.e:203	end procedure*/
    DeRef(_targets_53037);
    return;
    ;
}


object _68adjust_il(object _pc_53053, object _op_53054)
{
    object _addr_53062 = NOVALUE;
    object _sub_53068 = NOVALUE;
    object _27104 = NOVALUE;
    object _27103 = NOVALUE;
    object _27102 = NOVALUE;
    object _27101 = NOVALUE;
    object _27100 = NOVALUE;
    object _27099 = NOVALUE;
    object _27098 = NOVALUE;
    object _27096 = NOVALUE;
    object _27095 = NOVALUE;
    object _27094 = NOVALUE;
    object _27093 = NOVALUE;
    object _27092 = NOVALUE;
    object _27091 = NOVALUE;
    object _27090 = NOVALUE;
    object _27089 = NOVALUE;
    object _27087 = NOVALUE;
    object _27086 = NOVALUE;
    object _27084 = NOVALUE;
    object _27083 = NOVALUE;
    object _27082 = NOVALUE;
    object _27081 = NOVALUE;
    object _27080 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:208		for i = 1 to op_info[op][OP_SIZE] - 1 do*/
    _2 = (object)SEQ_PTR(_67op_info_23871);
    _27080 = (object)*(((s1_ptr)_2)->base + _op_53054);
    _2 = (object)SEQ_PTR(_27080);
    _27081 = (object)*(((s1_ptr)_2)->base + 2);
    _27080 = NOVALUE;
    if (IS_ATOM_INT(_27081)) {
        _27082 = _27081 - 1;
        if ((object)((uintptr_t)_27082 +(uintptr_t) HIGH_BITS) >= 0){
            _27082 = NewDouble((eudouble)_27082);
        }
    }
    else {
        _27082 = binary_op(MINUS, _27081, 1);
    }
    _27081 = NOVALUE;
    {
        object _i_53056;
        _i_53056 = 1;
L1: 
        if (binary_op_a(GREATER, _i_53056, _27082)){
            goto L2; // [23] 214
        }

        /** inline.e:210			integer addr = find( i, op_info[op][OP_ADDR] )*/
        _2 = (object)SEQ_PTR(_67op_info_23871);
        _27083 = (object)*(((s1_ptr)_2)->base + _op_53054);
        _2 = (object)SEQ_PTR(_27083);
        _27084 = (object)*(((s1_ptr)_2)->base + 3);
        _27083 = NOVALUE;
        _addr_53062 = find_from(_i_53056, _27084, 1);
        _27084 = NOVALUE;

        /** inline.e:211			integer sub  = find( i, op_info[op][OP_SUB] )*/
        _2 = (object)SEQ_PTR(_67op_info_23871);
        _27086 = (object)*(((s1_ptr)_2)->base + _op_53054);
        _2 = (object)SEQ_PTR(_27086);
        _27087 = (object)*(((s1_ptr)_2)->base + 5);
        _27086 = NOVALUE;
        _sub_53068 = find_from(_i_53056, _27087, 1);
        _27087 = NOVALUE;

        /** inline.e:212			if addr then*/
        if (_addr_53062 == 0)
        {
            goto L3; // [70] 121
        }
        else{
        }

        /** inline.e:213				if integer( inline_code[pc+i] ) then*/
        if (IS_ATOM_INT(_i_53056)) {
            _27089 = _pc_53053 + _i_53056;
        }
        else {
            _27089 = NewDouble((eudouble)_pc_53053 + DBL_PTR(_i_53056)->dbl);
        }
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        if (!IS_ATOM_INT(_27089)){
            _27090 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27089)->dbl));
        }
        else{
            _27090 = (object)*(((s1_ptr)_2)->base + _27089);
        }
        if (IS_ATOM_INT(_27090))
        _27091 = 1;
        else if (IS_ATOM_DBL(_27090))
        _27091 = IS_ATOM_INT(DoubleToInt(_27090));
        else
        _27091 = 0;
        _27090 = NOVALUE;
        if (_27091 == 0)
        {
            _27091 = NOVALUE;
            goto L4; // [88] 205
        }
        else{
            _27091 = NOVALUE;
        }

        /** inline.e:214					inline_code[pc + i] = { INLINE_ADDR, inline_code[pc + i] }*/
        if (IS_ATOM_INT(_i_53056)) {
            _27092 = _pc_53053 + _i_53056;
            if ((object)((uintptr_t)_27092 + (uintptr_t)HIGH_BITS) >= 0){
                _27092 = NewDouble((eudouble)_27092);
            }
        }
        else {
            _27092 = NewDouble((eudouble)_pc_53053 + DBL_PTR(_i_53056)->dbl);
        }
        if (IS_ATOM_INT(_i_53056)) {
            _27093 = _pc_53053 + _i_53056;
        }
        else {
            _27093 = NewDouble((eudouble)_pc_53053 + DBL_PTR(_i_53056)->dbl);
        }
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        if (!IS_ATOM_INT(_27093)){
            _27094 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27093)->dbl));
        }
        else{
            _27094 = (object)*(((s1_ptr)_2)->base + _27093);
        }
        Ref(_27094);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 4;
        ((intptr_t *)_2)[2] = _27094;
        _27095 = MAKE_SEQ(_1);
        _27094 = NOVALUE;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _68inline_code_52888 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27092))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27092)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27092);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27095;
        if( _1 != _27095 ){
            DeRef(_1);
        }
        _27095 = NOVALUE;
        goto L4; // [118] 205
L3: 

        /** inline.e:217			elsif sub then*/
        if (_sub_53068 == 0)
        {
            goto L5; // [123] 141
        }
        else{
        }

        /** inline.e:218				inline_code[pc+i] = {INLINE_SUB}*/
        if (IS_ATOM_INT(_i_53056)) {
            _27096 = _pc_53053 + _i_53056;
        }
        else {
            _27096 = NewDouble((eudouble)_pc_53053 + DBL_PTR(_i_53056)->dbl);
        }
        RefDS(_27097);
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _68inline_code_52888 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27096))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27096)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27096);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27097;
        DeRef(_1);
        goto L4; // [138] 205
L5: 

        /** inline.e:220				if op != STARTLINE and op != COVERAGE_LINE and op != COVERAGE_ROUTINE then*/
        _27098 = (_op_53054 != 58);
        if (_27098 == 0) {
            _27099 = 0;
            goto L6; // [149] 163
        }
        _27100 = (_op_53054 != 210);
        _27099 = (_27100 != 0);
L6: 
        if (_27099 == 0) {
            goto L7; // [163] 204
        }
        _27102 = (_op_53054 != 211);
        if (_27102 == 0)
        {
            DeRef(_27102);
            _27102 = NOVALUE;
            goto L7; // [174] 204
        }
        else{
            DeRef(_27102);
            _27102 = NOVALUE;
        }

        /** inline.e:221					check_target( pc, op )*/
        _68check_target(_pc_53053, _op_53054);

        /** inline.e:222					if not adjust_symbol( pc + i ) then*/
        if (IS_ATOM_INT(_i_53056)) {
            _27103 = _pc_53053 + _i_53056;
            if ((object)((uintptr_t)_27103 + (uintptr_t)HIGH_BITS) >= 0){
                _27103 = NewDouble((eudouble)_27103);
            }
        }
        else {
            _27103 = NewDouble((eudouble)_pc_53053 + DBL_PTR(_i_53056)->dbl);
        }
        _27104 = _68adjust_symbol(_27103);
        _27103 = NOVALUE;
        if (IS_ATOM_INT(_27104)) {
            if (_27104 != 0){
                DeRef(_27104);
                _27104 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        else {
            if (DBL_PTR(_27104)->dbl != 0.0){
                DeRef(_27104);
                _27104 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        DeRef(_27104);
        _27104 = NOVALUE;

        /** inline.e:223						return 0*/
        DeRef(_i_53056);
        DeRef(_27096);
        _27096 = NOVALUE;
        DeRef(_27100);
        _27100 = NOVALUE;
        DeRef(_27098);
        _27098 = NOVALUE;
        DeRef(_27082);
        _27082 = NOVALUE;
        DeRef(_27093);
        _27093 = NOVALUE;
        DeRef(_27089);
        _27089 = NOVALUE;
        DeRef(_27092);
        _27092 = NOVALUE;
        return 0;
L8: 
L7: 
L4: 

        /** inline.e:227		end for*/
        _0 = _i_53056;
        if (IS_ATOM_INT(_i_53056)) {
            _i_53056 = _i_53056 + 1;
            if ((object)((uintptr_t)_i_53056 +(uintptr_t) HIGH_BITS) >= 0){
                _i_53056 = NewDouble((eudouble)_i_53056);
            }
        }
        else {
            _i_53056 = binary_op_a(PLUS, _i_53056, 1);
        }
        DeRef(_0);
        goto L1; // [209] 30
L2: 
        ;
        DeRef(_i_53056);
    }

    /** inline.e:228		return 1*/
    DeRef(_27096);
    _27096 = NOVALUE;
    DeRef(_27100);
    _27100 = NOVALUE;
    DeRef(_27098);
    _27098 = NOVALUE;
    DeRef(_27082);
    _27082 = NOVALUE;
    DeRef(_27093);
    _27093 = NOVALUE;
    DeRef(_27089);
    _27089 = NOVALUE;
    DeRef(_27092);
    _27092 = NOVALUE;
    return 1;
    ;
}


object _68is_temp(object _sym_53103)
{
    object _27115 = NOVALUE;
    object _27114 = NOVALUE;
    object _27113 = NOVALUE;
    object _27112 = NOVALUE;
    object _27111 = NOVALUE;
    object _27110 = NOVALUE;
    object _27109 = NOVALUE;
    object _27108 = NOVALUE;
    object _27107 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:232		if sym <= 0 then*/
    if (_sym_53103 > 0)
    goto L1; // [5] 16

    /** inline.e:233			return 0*/
    return 0;
L1: 

    /** inline.e:236		return (SymTab[sym][S_MODE] = M_TEMP) and (not TRANSLATE or equal( NOVALUE, SymTab[sym][S_OBJ]) )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27107 = (object)*(((s1_ptr)_2)->base + _sym_53103);
    _2 = (object)SEQ_PTR(_27107);
    _27108 = (object)*(((s1_ptr)_2)->base + 3);
    _27107 = NOVALUE;
    if (IS_ATOM_INT(_27108)) {
        _27109 = (_27108 == 3);
    }
    else {
        _27109 = binary_op(EQUALS, _27108, 3);
    }
    _27108 = NOVALUE;
    _27110 = (_39TRANSLATE_16440 == 0);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27111 = (object)*(((s1_ptr)_2)->base + _sym_53103);
    _2 = (object)SEQ_PTR(_27111);
    _27112 = (object)*(((s1_ptr)_2)->base + 1);
    _27111 = NOVALUE;
    if (_39NOVALUE_16670 == _27112)
    _27113 = 1;
    else if (IS_ATOM_INT(_39NOVALUE_16670) && IS_ATOM_INT(_27112))
    _27113 = 0;
    else
    _27113 = (compare(_39NOVALUE_16670, _27112) == 0);
    _27112 = NOVALUE;
    _27114 = (_27110 != 0 || _27113 != 0);
    _27110 = NOVALUE;
    _27113 = NOVALUE;
    if (IS_ATOM_INT(_27109)) {
        _27115 = (_27109 != 0 && _27114 != 0);
    }
    else {
        _27115 = binary_op(AND, _27109, _27114);
    }
    DeRef(_27109);
    _27109 = NOVALUE;
    _27114 = NOVALUE;
    return _27115;
    ;
}


object _68is_literal(object _sym_53125)
{
    object _mode_53128 = NOVALUE;
    object _27130 = NOVALUE;
    object _27129 = NOVALUE;
    object _27128 = NOVALUE;
    object _27127 = NOVALUE;
    object _27126 = NOVALUE;
    object _27125 = NOVALUE;
    object _27123 = NOVALUE;
    object _27122 = NOVALUE;
    object _27121 = NOVALUE;
    object _27120 = NOVALUE;
    object _27119 = NOVALUE;
    object _27117 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:240		if sym <= 0 then*/
    if (_sym_53125 > 0)
    goto L1; // [5] 16

    /** inline.e:241			return 0*/
    return 0;
L1: 

    /** inline.e:244		integer mode = SymTab[sym][S_MODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27117 = (object)*(((s1_ptr)_2)->base + _sym_53125);
    _2 = (object)SEQ_PTR(_27117);
    _mode_53128 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_53128)){
        _mode_53128 = (object)DBL_PTR(_mode_53128)->dbl;
    }
    _27117 = NOVALUE;

    /** inline.e:245		if (mode = M_CONSTANT and eu:compare( NOVALUE, SymTab[sym][S_OBJ]) ) */
    _27119 = (_mode_53128 == 2);
    if (_27119 == 0) {
        _27120 = 0;
        goto L2; // [40] 66
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27121 = (object)*(((s1_ptr)_2)->base + _sym_53125);
    _2 = (object)SEQ_PTR(_27121);
    _27122 = (object)*(((s1_ptr)_2)->base + 1);
    _27121 = NOVALUE;
    if (IS_ATOM_INT(_39NOVALUE_16670) && IS_ATOM_INT(_27122)){
        _27123 = (_39NOVALUE_16670 < _27122) ? -1 : (_39NOVALUE_16670 > _27122);
    }
    else{
        _27123 = compare(_39NOVALUE_16670, _27122);
    }
    _27122 = NOVALUE;
    _27120 = (_27123 != 0);
L2: 
    if (_27120 != 0) {
        goto L3; // [66] 117
    }
    if (_39TRANSLATE_16440 == 0) {
        _27125 = 0;
        goto L4; // [72] 86
    }
    _27126 = (_mode_53128 == 3);
    _27125 = (_27126 != 0);
L4: 
    if (_27125 == 0) {
        DeRef(_27127);
        _27127 = 0;
        goto L5; // [86] 112
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27128 = (object)*(((s1_ptr)_2)->base + _sym_53125);
    _2 = (object)SEQ_PTR(_27128);
    _27129 = (object)*(((s1_ptr)_2)->base + 1);
    _27128 = NOVALUE;
    if (IS_ATOM_INT(_27129) && IS_ATOM_INT(_39NOVALUE_16670)){
        _27130 = (_27129 < _39NOVALUE_16670) ? -1 : (_27129 > _39NOVALUE_16670);
    }
    else{
        _27130 = compare(_27129, _39NOVALUE_16670);
    }
    _27129 = NOVALUE;
    _27127 = (_27130 != 0);
L5: 
    if (_27127 == 0)
    {
        _27127 = NOVALUE;
        goto L6; // [113] 126
    }
    else{
        _27127 = NOVALUE;
    }
L3: 

    /** inline.e:247			return 1*/
    DeRef(_27126);
    _27126 = NOVALUE;
    DeRef(_27119);
    _27119 = NOVALUE;
    return 1;
    goto L7; // [123] 133
L6: 

    /** inline.e:249			return 0*/
    DeRef(_27126);
    _27126 = NOVALUE;
    DeRef(_27119);
    _27119 = NOVALUE;
    return 0;
L7: 
    ;
}


object _68returnf(object _pc_53175)
{
    object _retsym_53177 = NOVALUE;
    object _code_53210 = NOVALUE;
    object _ret_pc_53211 = NOVALUE;
    object _code_53256 = NOVALUE;
    object _ret_pc_53270 = NOVALUE;
    object _27203 = NOVALUE;
    object _27202 = NOVALUE;
    object _27200 = NOVALUE;
    object _27198 = NOVALUE;
    object _27197 = NOVALUE;
    object _27195 = NOVALUE;
    object _27194 = NOVALUE;
    object _27192 = NOVALUE;
    object _27191 = NOVALUE;
    object _27190 = NOVALUE;
    object _27188 = NOVALUE;
    object _27187 = NOVALUE;
    object _27185 = NOVALUE;
    object _27183 = NOVALUE;
    object _27182 = NOVALUE;
    object _27180 = NOVALUE;
    object _27179 = NOVALUE;
    object _27177 = NOVALUE;
    object _27176 = NOVALUE;
    object _27175 = NOVALUE;
    object _27173 = NOVALUE;
    object _27172 = NOVALUE;
    object _27171 = NOVALUE;
    object _27170 = NOVALUE;
    object _27169 = NOVALUE;
    object _27167 = NOVALUE;
    object _27166 = NOVALUE;
    object _27165 = NOVALUE;
    object _27164 = NOVALUE;
    object _27162 = NOVALUE;
    object _27160 = NOVALUE;
    object _27159 = NOVALUE;
    object _27158 = NOVALUE;
    object _27157 = NOVALUE;
    object _27156 = NOVALUE;
    object _27155 = NOVALUE;
    object _27154 = NOVALUE;
    object _27153 = NOVALUE;
    object _27152 = NOVALUE;
    object _27150 = NOVALUE;
    object _27149 = NOVALUE;
    object _27148 = NOVALUE;
    object _27146 = NOVALUE;
    object _27145 = NOVALUE;
    object _27144 = NOVALUE;
    object _27143 = NOVALUE;
    object _27142 = NOVALUE;
    object _27141 = NOVALUE;
    object _27139 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** inline.e:259		symtab_index retsym = inline_code[pc+3]*/
    _27139 = _pc_53175 + 3;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _retsym_53177 = (object)*(((s1_ptr)_2)->base + _27139);
    if (!IS_ATOM_INT(_retsym_53177)){
        _retsym_53177 = (object)DBL_PTR(_retsym_53177)->dbl;
    }

    /** inline.e:260		if equal( inline_code[$], BADRETURNF ) then*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27141 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27141 = 1;
    }
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27142 = (object)*(((s1_ptr)_2)->base + _27141);
    if (_27142 == 43)
    _27143 = 1;
    else if (IS_ATOM_INT(_27142) && IS_ATOM_INT(43))
    _27143 = 0;
    else
    _27143 = (compare(_27142, 43) == 0);
    _27142 = NOVALUE;
    if (_27143 == 0)
    {
        _27143 = NOVALUE;
        goto L1; // [34] 102
    }
    else{
        _27143 = NOVALUE;
    }

    /** inline.e:261			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L2; // [41] 60
    }
    else{
    }

    /** inline.e:262				inline_code[$] = NOP1*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27144 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27144 = 1;
    }
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27144);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    goto L3; // [57] 101
L2: 

    /** inline.e:263			elsif SymTab[inline_sub][S_TOKEN] = PROC then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27145 = (object)*(((s1_ptr)_2)->base + _68inline_sub_52902);
    _2 = (object)SEQ_PTR(_27145);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _27146 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _27146 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _27145 = NOVALUE;
    if (binary_op_a(NOTEQ, _27146, 27)){
        _27146 = NOVALUE;
        goto L4; // [78] 100
    }
    _27146 = NOVALUE;

    /** inline.e:264				replace_code( {}, length(inline_code), length(inline_code) )*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27148 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27148 = 1;
    }
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27149 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27149 = 1;
    }
    RefDS(_21928);
    _68replace_code(_21928, _27148, _27149);
    _27148 = NOVALUE;
    _27149 = NOVALUE;
L4: 
L3: 
L1: 

    /** inline.e:270		if is_temp( retsym ) */
    _27150 = _68is_temp(_retsym_53177);
    if (IS_ATOM_INT(_27150)) {
        if (_27150 != 0) {
            goto L5; // [108] 150
        }
    }
    else {
        if (DBL_PTR(_27150)->dbl != 0.0) {
            goto L5; // [108] 150
        }
    }
    _27152 = _68is_literal(_retsym_53177);
    if (IS_ATOM_INT(_27152)) {
        _27153 = (_27152 == 0);
    }
    else {
        _27153 = unary_op(NOT, _27152);
    }
    DeRef(_27152);
    _27152 = NOVALUE;
    if (IS_ATOM_INT(_27153)) {
        if (_27153 == 0) {
            DeRef(_27154);
            _27154 = 0;
            goto L6; // [119] 145
        }
    }
    else {
        if (DBL_PTR(_27153)->dbl == 0.0) {
            DeRef(_27154);
            _27154 = 0;
            goto L6; // [119] 145
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27155 = (object)*(((s1_ptr)_2)->base + _retsym_53177);
    _2 = (object)SEQ_PTR(_27155);
    _27156 = (object)*(((s1_ptr)_2)->base + 4);
    _27155 = NOVALUE;
    if (IS_ATOM_INT(_27156)) {
        _27157 = (_27156 <= 3);
    }
    else {
        _27157 = binary_op(LESSEQ, _27156, 3);
    }
    _27156 = NOVALUE;
    DeRef(_27154);
    if (IS_ATOM_INT(_27157))
    _27154 = (_27157 != 0);
    else
    _27154 = DBL_PTR(_27157)->dbl != 0.0;
L6: 
    if (_27154 == 0)
    {
        _27154 = NOVALUE;
        goto L7; // [146] 393
    }
    else{
        _27154 = NOVALUE;
    }
L5: 

    /** inline.e:272			sequence code = {}*/
    RefDS(_21928);
    DeRef(_code_53210);
    _code_53210 = _21928;

    /** inline.e:274			integer ret_pc = 0*/
    _ret_pc_53211 = 0;

    /** inline.e:276			if not (find( retsym, inline_params ) or find( retsym, proc_vars )) then*/
    _27158 = find_from(_retsym_53177, _68inline_params_52893, 1);
    if (_27158 != 0) {
        DeRef(_27159);
        _27159 = 1;
        goto L8; // [171] 186
    }
    _27160 = find_from(_retsym_53177, _68proc_vars_52889, 1);
    _27159 = (_27160 != 0);
L8: 
    if (_27159 != 0)
    goto L9; // [186] 206
    _27159 = NOVALUE;

    /** inline.e:277				ret_pc = rfind( generic_symbol( retsym ), inline_code, pc )*/
    _27162 = _68generic_symbol(_retsym_53177);
    RefDS(_68inline_code_52888);
    _ret_pc_53211 = _15rfind(_27162, _68inline_code_52888, _pc_53175);
    _27162 = NOVALUE;
    if (!IS_ATOM_INT(_ret_pc_53211)) {
        _1 = (object)(DBL_PTR(_ret_pc_53211)->dbl);
        DeRefDS(_ret_pc_53211);
        _ret_pc_53211 = _1;
    }
L9: 

    /** inline.e:281			if ret_pc and eu:compare( inline_code[ret_pc-1], PRIVATE_INIT_CHECK ) then*/
    if (_ret_pc_53211 == 0) {
        goto LA; // [208] 277
    }
    _27165 = _ret_pc_53211 - 1;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27166 = (object)*(((s1_ptr)_2)->base + _27165);
    if (IS_ATOM_INT(_27166) && IS_ATOM_INT(30)){
        _27167 = (_27166 < 30) ? -1 : (_27166 > 30);
    }
    else{
        _27167 = compare(_27166, 30);
    }
    _27166 = NOVALUE;
    if (_27167 == 0)
    {
        _27167 = NOVALUE;
        goto LA; // [229] 277
    }
    else{
        _27167 = NOVALUE;
    }

    /** inline.e:282				inline_code[ret_pc] = {INLINE_TARGET}*/
    RefDS(_27168);
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ret_pc_53211);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27168;
    DeRef(_1);

    /** inline.e:284				if equal( inline_code[ret_pc-1], REF_TEMP ) then*/
    _27169 = _ret_pc_53211 - 1;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27170 = (object)*(((s1_ptr)_2)->base + _27169);
    if (_27170 == 207)
    _27171 = 1;
    else if (IS_ATOM_INT(_27170) && IS_ATOM_INT(207))
    _27171 = 0;
    else
    _27171 = (compare(_27170, 207) == 0);
    _27170 = NOVALUE;
    if (_27171 == 0)
    {
        _27171 = NOVALUE;
        goto LB; // [258] 292
    }
    else{
        _27171 = NOVALUE;
    }

    /** inline.e:287					inline_code[ret_pc-2] = {INLINE_TARGET}*/
    _27172 = _ret_pc_53211 - 2;
    RefDS(_27168);
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27172);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27168;
    DeRef(_1);
    goto LB; // [274] 292
LA: 

    /** inline.e:290				code = {ASSIGN, generic_symbol( retsym ), {INLINE_TARGET}}*/
    _27173 = _68generic_symbol(_retsym_53177);
    _0 = _code_53210;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _27173;
    RefDS(_27168);
    ((intptr_t*)_2)[3] = _27168;
    _code_53210 = MAKE_SEQ(_1);
    DeRef(_0);
    _27173 = NOVALUE;
LB: 

    /** inline.e:293			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27175 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27175 = 1;
    }
    _27176 = 3 + _39TRANSLATE_16440;
    _27177 = _27175 - _27176;
    _27175 = NOVALUE;
    _27176 = NOVALUE;
    if (_pc_53175 == _27177)
    goto LC; // [309] 330

    /** inline.e:294				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27179 = MAKE_SEQ(_1);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27179;
    _27180 = MAKE_SEQ(_1);
    _27179 = NOVALUE;
    Concat((object_ptr)&_code_53210, _code_53210, _27180);
    DeRefDS(_27180);
    _27180 = NOVALUE;
LC: 

    /** inline.e:298			replace_code( code, pc, pc + 3 )*/
    _27182 = _pc_53175 + 3;
    if ((object)((uintptr_t)_27182 + (uintptr_t)HIGH_BITS) >= 0){
        _27182 = NewDouble((eudouble)_27182);
    }
    RefDS(_code_53210);
    _68replace_code(_code_53210, _pc_53175, _27182);
    _27182 = NOVALUE;

    /** inline.e:299			ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27183 = MAKE_SEQ(_1);
    _ret_pc_53211 = find_from(_27183, _68inline_code_52888, _pc_53175);
    DeRefDS(_27183);
    _27183 = NOVALUE;

    /** inline.e:300			if ret_pc then*/
    if (_ret_pc_53211 == 0)
    {
        goto LD; // [356] 382
    }
    else{
    }

    /** inline.e:301				inline_code[ret_pc][2] = length(inline_code) + 1*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53211 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27187 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27187 = 1;
    }
    _27188 = _27187 + 1;
    _27187 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27188;
    if( _1 != _27188 ){
        DeRef(_1);
    }
    _27188 = NOVALUE;
    _27185 = NOVALUE;
LD: 

    /** inline.e:303			return 1*/
    DeRef(_code_53210);
    DeRef(_27139);
    _27139 = NOVALUE;
    DeRef(_27150);
    _27150 = NOVALUE;
    DeRef(_27157);
    _27157 = NOVALUE;
    DeRef(_27169);
    _27169 = NOVALUE;
    DeRef(_27165);
    _27165 = NOVALUE;
    DeRef(_27172);
    _27172 = NOVALUE;
    DeRef(_27153);
    _27153 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    return 1;
    goto LE; // [390] 502
L7: 

    /** inline.e:306			sequence code = {ASSIGN, retsym, {INLINE_TARGET}}*/
    _0 = _code_53256;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _retsym_53177;
    RefDS(_27168);
    ((intptr_t*)_2)[3] = _27168;
    _code_53256 = MAKE_SEQ(_1);
    DeRef(_0);

    /** inline.e:307			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27190 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27190 = 1;
    }
    _27191 = 3 + _39TRANSLATE_16440;
    _27192 = _27190 - _27191;
    _27190 = NOVALUE;
    _27191 = NOVALUE;
    if (_pc_53175 == _27192)
    goto LF; // [420] 441

    /** inline.e:308				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27194 = MAKE_SEQ(_1);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27194;
    _27195 = MAKE_SEQ(_1);
    _27194 = NOVALUE;
    Concat((object_ptr)&_code_53256, _code_53256, _27195);
    DeRefDS(_27195);
    _27195 = NOVALUE;
LF: 

    /** inline.e:312			replace_code( code, pc, pc + 3 )*/
    _27197 = _pc_53175 + 3;
    if ((object)((uintptr_t)_27197 + (uintptr_t)HIGH_BITS) >= 0){
        _27197 = NewDouble((eudouble)_27197);
    }
    RefDS(_code_53256);
    _68replace_code(_code_53256, _pc_53175, _27197);
    _27197 = NOVALUE;

    /** inline.e:313			integer ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27198 = MAKE_SEQ(_1);
    _ret_pc_53270 = find_from(_27198, _68inline_code_52888, _pc_53175);
    DeRefDS(_27198);
    _27198 = NOVALUE;

    /** inline.e:314			if ret_pc then*/
    if (_ret_pc_53270 == 0)
    {
        goto L10; // [467] 493
    }
    else{
    }

    /** inline.e:315				inline_code[ret_pc][2] = length(inline_code) + 1*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53270 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27202 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27202 = 1;
    }
    _27203 = _27202 + 1;
    _27202 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27203;
    if( _1 != _27203 ){
        DeRef(_1);
    }
    _27203 = NOVALUE;
    _27200 = NOVALUE;
L10: 

    /** inline.e:317			return 1*/
    DeRef(_code_53256);
    DeRef(_27139);
    _27139 = NOVALUE;
    DeRef(_27150);
    _27150 = NOVALUE;
    DeRef(_27157);
    _27157 = NOVALUE;
    DeRef(_27169);
    _27169 = NOVALUE;
    DeRef(_27165);
    _27165 = NOVALUE;
    DeRef(_27192);
    _27192 = NOVALUE;
    DeRef(_27172);
    _27172 = NOVALUE;
    DeRef(_27153);
    _27153 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    return 1;
LE: 

    /** inline.e:319		return 0*/
    DeRef(_27139);
    _27139 = NOVALUE;
    DeRef(_27150);
    _27150 = NOVALUE;
    DeRef(_27157);
    _27157 = NOVALUE;
    DeRef(_27169);
    _27169 = NOVALUE;
    DeRef(_27165);
    _27165 = NOVALUE;
    DeRef(_27192);
    _27192 = NOVALUE;
    DeRef(_27172);
    _27172 = NOVALUE;
    DeRef(_27153);
    _27153 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    return 0;
    ;
}


object _68inline_op(object _pc_53280)
{
    object _op_53281 = NOVALUE;
    object _code_53286 = NOVALUE;
    object _stlen_53319 = NOVALUE;
    object _file_53324 = NOVALUE;
    object _ok_53329 = NOVALUE;
    object _original_table_53352 = NOVALUE;
    object _jump_table_53356 = NOVALUE;
    object _27264 = NOVALUE;
    object _27263 = NOVALUE;
    object _27262 = NOVALUE;
    object _27261 = NOVALUE;
    object _27260 = NOVALUE;
    object _27259 = NOVALUE;
    object _27258 = NOVALUE;
    object _27257 = NOVALUE;
    object _27256 = NOVALUE;
    object _27255 = NOVALUE;
    object _27254 = NOVALUE;
    object _27253 = NOVALUE;
    object _27250 = NOVALUE;
    object _27249 = NOVALUE;
    object _27248 = NOVALUE;
    object _27247 = NOVALUE;
    object _27245 = NOVALUE;
    object _27243 = NOVALUE;
    object _27242 = NOVALUE;
    object _27240 = NOVALUE;
    object _27236 = NOVALUE;
    object _27235 = NOVALUE;
    object _27234 = NOVALUE;
    object _27233 = NOVALUE;
    object _27232 = NOVALUE;
    object _27231 = NOVALUE;
    object _27228 = NOVALUE;
    object _27227 = NOVALUE;
    object _27225 = NOVALUE;
    object _27224 = NOVALUE;
    object _27222 = NOVALUE;
    object _27220 = NOVALUE;
    object _27219 = NOVALUE;
    object _27218 = NOVALUE;
    object _27217 = NOVALUE;
    object _27216 = NOVALUE;
    object _27215 = NOVALUE;
    object _27214 = NOVALUE;
    object _27212 = NOVALUE;
    object _27211 = NOVALUE;
    object _27210 = NOVALUE;
    object _27208 = NOVALUE;
    object _27207 = NOVALUE;
    object _27206 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** inline.e:324		integer op = inline_code[pc]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _op_53281 = (object)*(((s1_ptr)_2)->base + _pc_53280);
    if (!IS_ATOM_INT(_op_53281))
    _op_53281 = (object)DBL_PTR(_op_53281)->dbl;

    /** inline.e:326		if op = RETURNP then*/
    if (_op_53281 != 29)
    goto L1; // [15] 150

    /** inline.e:333			sequence code = ""*/
    RefDS(_21928);
    DeRef(_code_53286);
    _code_53286 = _21928;

    /** inline.e:335			if pc != length( inline_code ) - 1 - TRANSLATE then*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27206 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27206 = 1;
    }
    _27207 = _27206 - 1;
    _27206 = NOVALUE;
    _27208 = _27207 - _39TRANSLATE_16440;
    _27207 = NOVALUE;
    if (_pc_53280 == _27208)
    goto L2; // [43] 92

    /** inline.e:336				code = { ELSE, {INLINE_ADDR, length( inline_code ) + 1 }}*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27210 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27210 = 1;
    }
    _27211 = _27210 + 1;
    _27210 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = _27211;
    _27212 = MAKE_SEQ(_1);
    _27211 = NOVALUE;
    DeRefDS(_code_53286);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27212;
    _code_53286 = MAKE_SEQ(_1);
    _27212 = NOVALUE;

    /** inline.e:337				if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L3; // [72] 134
    }
    else{
    }

    /** inline.e:338					inline_code[$] = NOP1*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27214 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27214 = 1;
    }
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27214);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    goto L3; // [89] 134
L2: 

    /** inline.e:341			elsif TRANSLATE and inline_code[$] = BADRETURNF then*/
    if (_39TRANSLATE_16440 == 0) {
        goto L4; // [96] 133
    }
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27216 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27216 = 1;
    }
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27217 = (object)*(((s1_ptr)_2)->base + _27216);
    if (IS_ATOM_INT(_27217)) {
        _27218 = (_27217 == 43);
    }
    else {
        _27218 = binary_op(EQUALS, _27217, 43);
    }
    _27217 = NOVALUE;
    if (_27218 == 0) {
        DeRef(_27218);
        _27218 = NOVALUE;
        goto L4; // [116] 133
    }
    else {
        if (!IS_ATOM_INT(_27218) && DBL_PTR(_27218)->dbl == 0.0){
            DeRef(_27218);
            _27218 = NOVALUE;
            goto L4; // [116] 133
        }
        DeRef(_27218);
        _27218 = NOVALUE;
    }
    DeRef(_27218);
    _27218 = NOVALUE;

    /** inline.e:342				inline_code[$] = NOP1*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27219 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27219 = 1;
    }
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27219);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
L4: 
L3: 

    /** inline.e:344			replace_code( code, pc, pc + 2 )*/
    _27220 = _pc_53280 + 2;
    if ((object)((uintptr_t)_27220 + (uintptr_t)HIGH_BITS) >= 0){
        _27220 = NewDouble((eudouble)_27220);
    }
    RefDS(_code_53286);
    _68replace_code(_code_53286, _pc_53280, _27220);
    _27220 = NOVALUE;
    DeRefDS(_code_53286);
    _code_53286 = NOVALUE;
    goto L5; // [147] 526
L1: 

    /** inline.e:346		elsif op = RETURNF then*/
    if (_op_53281 != 28)
    goto L6; // [154] 171

    /** inline.e:347			return returnf( pc )*/
    _27222 = _68returnf(_pc_53280);
    DeRef(_27208);
    _27208 = NOVALUE;
    return _27222;
    goto L5; // [168] 526
L6: 

    /** inline.e:349		elsif op = ROUTINE_ID then*/
    if (_op_53281 != 134)
    goto L7; // [175] 273

    /** inline.e:351			integer*/

    /** inline.e:352				stlen = inline_code[pc+2+TRANSLATE],*/
    _27224 = _pc_53280 + 2;
    if ((object)((uintptr_t)_27224 + (uintptr_t)HIGH_BITS) >= 0){
        _27224 = NewDouble((eudouble)_27224);
    }
    if (IS_ATOM_INT(_27224)) {
        _27225 = _27224 + _39TRANSLATE_16440;
    }
    else {
        _27225 = NewDouble(DBL_PTR(_27224)->dbl + (eudouble)_39TRANSLATE_16440);
    }
    DeRef(_27224);
    _27224 = NOVALUE;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!IS_ATOM_INT(_27225)){
        _stlen_53319 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27225)->dbl));
    }
    else{
        _stlen_53319 = (object)*(((s1_ptr)_2)->base + _27225);
    }
    if (!IS_ATOM_INT(_stlen_53319))
    _stlen_53319 = (object)DBL_PTR(_stlen_53319)->dbl;

    /** inline.e:353				file  = inline_code[pc+4+TRANSLATE],*/
    _27227 = _pc_53280 + 4;
    if ((object)((uintptr_t)_27227 + (uintptr_t)HIGH_BITS) >= 0){
        _27227 = NewDouble((eudouble)_27227);
    }
    if (IS_ATOM_INT(_27227)) {
        _27228 = _27227 + _39TRANSLATE_16440;
    }
    else {
        _27228 = NewDouble(DBL_PTR(_27227)->dbl + (eudouble)_39TRANSLATE_16440);
    }
    DeRef(_27227);
    _27227 = NOVALUE;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!IS_ATOM_INT(_27228)){
        _file_53324 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27228)->dbl));
    }
    else{
        _file_53324 = (object)*(((s1_ptr)_2)->base + _27228);
    }
    if (!IS_ATOM_INT(_file_53324))
    _file_53324 = (object)DBL_PTR(_file_53324)->dbl;

    /** inline.e:354				ok    = adjust_il( pc, op )*/
    _ok_53329 = _68adjust_il(_pc_53280, _op_53281);
    if (!IS_ATOM_INT(_ok_53329)) {
        _1 = (object)(DBL_PTR(_ok_53329)->dbl);
        DeRefDS(_ok_53329);
        _ok_53329 = _1;
    }

    /** inline.e:355			inline_code[pc+2+TRANSLATE] = stlen*/
    _27231 = _pc_53280 + 2;
    if ((object)((uintptr_t)_27231 + (uintptr_t)HIGH_BITS) >= 0){
        _27231 = NewDouble((eudouble)_27231);
    }
    if (IS_ATOM_INT(_27231)) {
        _27232 = _27231 + _39TRANSLATE_16440;
    }
    else {
        _27232 = NewDouble(DBL_PTR(_27231)->dbl + (eudouble)_39TRANSLATE_16440);
    }
    DeRef(_27231);
    _27231 = NOVALUE;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27232))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27232)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27232);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _stlen_53319;
    DeRef(_1);

    /** inline.e:356			inline_code[pc+4+TRANSLATE] = file*/
    _27233 = _pc_53280 + 4;
    if ((object)((uintptr_t)_27233 + (uintptr_t)HIGH_BITS) >= 0){
        _27233 = NewDouble((eudouble)_27233);
    }
    if (IS_ATOM_INT(_27233)) {
        _27234 = _27233 + _39TRANSLATE_16440;
    }
    else {
        _27234 = NewDouble(DBL_PTR(_27233)->dbl + (eudouble)_39TRANSLATE_16440);
    }
    DeRef(_27233);
    _27233 = NOVALUE;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27234))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27234)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27234);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _file_53324;
    DeRef(_1);

    /** inline.e:358			return ok*/
    DeRef(_27232);
    _27232 = NOVALUE;
    DeRef(_27208);
    _27208 = NOVALUE;
    DeRef(_27228);
    _27228 = NOVALUE;
    DeRef(_27234);
    _27234 = NOVALUE;
    DeRef(_27222);
    _27222 = NOVALUE;
    DeRef(_27225);
    _27225 = NOVALUE;
    return _ok_53329;
    goto L5; // [270] 526
L7: 

    /** inline.e:360		elsif op_info[op][OP_SIZE_TYPE] = FIXED_SIZE then*/
    _2 = (object)SEQ_PTR(_67op_info_23871);
    _27235 = (object)*(((s1_ptr)_2)->base + _op_53281);
    _2 = (object)SEQ_PTR(_27235);
    _27236 = (object)*(((s1_ptr)_2)->base + 1);
    _27235 = NOVALUE;
    if (binary_op_a(NOTEQ, _27236, 1)){
        _27236 = NOVALUE;
        goto L8; // [289] 397
    }
    _27236 = NOVALUE;

    /** inline.e:361			switch op do*/
    _0 = _op_53281;
    switch ( _0 ){ 

        /** inline.e:362				case SWITCH, SWITCH_RT, SWITCH_I, SWITCH_SPI then*/
        case 185:
        case 202:
        case 193:
        case 192:

        /** inline.e:364					symtab_index original_table = inline_code[pc + 3]*/
        _27240 = _pc_53280 + 3;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _original_table_53352 = (object)*(((s1_ptr)_2)->base + _27240);
        if (!IS_ATOM_INT(_original_table_53352)){
            _original_table_53352 = (object)DBL_PTR(_original_table_53352)->dbl;
        }

        /** inline.e:365					symtab_index jump_table = NewStringSym( {-2, length(SymTab) } )*/
        if (IS_SEQUENCE(_36SymTab_15404)){
                _27242 = SEQ_PTR(_36SymTab_15404)->length;
        }
        else {
            _27242 = 1;
        }
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = _27242;
        _27243 = MAKE_SEQ(_1);
        _27242 = NOVALUE;
        _jump_table_53356 = _56NewStringSym(_27243);
        _27243 = NOVALUE;
        if (!IS_ATOM_INT(_jump_table_53356)) {
            _1 = (object)(DBL_PTR(_jump_table_53356)->dbl);
            DeRefDS(_jump_table_53356);
            _jump_table_53356 = _1;
        }

        /** inline.e:366					SymTab[jump_table][S_OBJ] = SymTab[original_table][S_OBJ]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_jump_table_53356 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27247 = (object)*(((s1_ptr)_2)->base + _original_table_53352);
        _2 = (object)SEQ_PTR(_27247);
        _27248 = (object)*(((s1_ptr)_2)->base + 1);
        _27247 = NOVALUE;
        Ref(_27248);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27248;
        if( _1 != _27248 ){
            DeRef(_1);
        }
        _27248 = NOVALUE;
        _27245 = NOVALUE;

        /** inline.e:367					inline_code[pc+3] = jump_table*/
        _27249 = _pc_53280 + 3;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _68inline_code_52888 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27249);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _jump_table_53356;
        DeRef(_1);
    ;}
    /** inline.e:369			return adjust_il( pc, op )*/
    _27250 = _68adjust_il(_pc_53280, _op_53281);
    DeRef(_27232);
    _27232 = NOVALUE;
    DeRef(_27249);
    _27249 = NOVALUE;
    DeRef(_27208);
    _27208 = NOVALUE;
    DeRef(_27228);
    _27228 = NOVALUE;
    DeRef(_27234);
    _27234 = NOVALUE;
    DeRef(_27240);
    _27240 = NOVALUE;
    DeRef(_27222);
    _27222 = NOVALUE;
    DeRef(_27225);
    _27225 = NOVALUE;
    return _27250;
    goto L5; // [394] 526
L8: 

    /** inline.e:372			switch op with fallthru do*/
    _0 = _op_53281;
    switch ( _0 ){ 

        /** inline.e:373				case REF_TEMP then*/
        case 207:

        /** inline.e:374					inline_code[pc+1] = {INLINE_TARGET}*/
        _27253 = _pc_53280 + 1;
        RefDS(_27168);
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _68inline_code_52888 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27253);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27168;
        DeRef(_1);

        /** inline.e:376				case CONCAT_N then*/
        case 157:
        case 31:

        /** inline.e:379					if check_for_param( pc + 2 + inline_code[pc+1] ) then*/
        _27254 = _pc_53280 + 2;
        if ((object)((uintptr_t)_27254 + (uintptr_t)HIGH_BITS) >= 0){
            _27254 = NewDouble((eudouble)_27254);
        }
        _27255 = _pc_53280 + 1;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27256 = (object)*(((s1_ptr)_2)->base + _27255);
        if (IS_ATOM_INT(_27254) && IS_ATOM_INT(_27256)) {
            _27257 = _27254 + _27256;
            if ((object)((uintptr_t)_27257 + (uintptr_t)HIGH_BITS) >= 0){
                _27257 = NewDouble((eudouble)_27257);
            }
        }
        else {
            _27257 = binary_op(PLUS, _27254, _27256);
        }
        DeRef(_27254);
        _27254 = NOVALUE;
        _27256 = NOVALUE;
        _27258 = _68check_for_param(_27257);
        _27257 = NOVALUE;
        if (_27258 == 0) {
            DeRef(_27258);
            _27258 = NOVALUE;
            goto L9; // [450] 454
        }
        else {
            if (!IS_ATOM_INT(_27258) && DBL_PTR(_27258)->dbl == 0.0){
                DeRef(_27258);
                _27258 = NOVALUE;
                goto L9; // [450] 454
            }
            DeRef(_27258);
            _27258 = NOVALUE;
        }
        DeRef(_27258);
        _27258 = NOVALUE;
L9: 

        /** inline.e:383					for i = pc + 2 to pc + 2 + inline_code[pc+1] do*/
        _27259 = _pc_53280 + 2;
        if ((object)((uintptr_t)_27259 + (uintptr_t)HIGH_BITS) >= 0){
            _27259 = NewDouble((eudouble)_27259);
        }
        _27260 = _pc_53280 + 2;
        if ((object)((uintptr_t)_27260 + (uintptr_t)HIGH_BITS) >= 0){
            _27260 = NewDouble((eudouble)_27260);
        }
        _27261 = _pc_53280 + 1;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27262 = (object)*(((s1_ptr)_2)->base + _27261);
        if (IS_ATOM_INT(_27260) && IS_ATOM_INT(_27262)) {
            _27263 = _27260 + _27262;
            if ((object)((uintptr_t)_27263 + (uintptr_t)HIGH_BITS) >= 0){
                _27263 = NewDouble((eudouble)_27263);
            }
        }
        else {
            _27263 = binary_op(PLUS, _27260, _27262);
        }
        DeRef(_27260);
        _27260 = NOVALUE;
        _27262 = NOVALUE;
        {
            object _i_53388;
            Ref(_27259);
            _i_53388 = _27259;
LA: 
            if (binary_op_a(GREATER, _i_53388, _27263)){
                goto LB; // [478] 508
            }

            /** inline.e:384						if not adjust_symbol( i ) then*/
            Ref(_i_53388);
            _27264 = _68adjust_symbol(_i_53388);
            if (IS_ATOM_INT(_27264)) {
                if (_27264 != 0){
                    DeRef(_27264);
                    _27264 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            else {
                if (DBL_PTR(_27264)->dbl != 0.0){
                    DeRef(_27264);
                    _27264 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            DeRef(_27264);
            _27264 = NOVALUE;

            /** inline.e:385							return 0*/
            DeRef(_i_53388);
            DeRef(_27232);
            _27232 = NOVALUE;
            DeRef(_27250);
            _27250 = NOVALUE;
            DeRef(_27249);
            _27249 = NOVALUE;
            DeRef(_27208);
            _27208 = NOVALUE;
            DeRef(_27263);
            _27263 = NOVALUE;
            DeRef(_27228);
            _27228 = NOVALUE;
            DeRef(_27253);
            _27253 = NOVALUE;
            DeRef(_27234);
            _27234 = NOVALUE;
            DeRef(_27255);
            _27255 = NOVALUE;
            DeRef(_27261);
            _27261 = NOVALUE;
            DeRef(_27240);
            _27240 = NOVALUE;
            DeRef(_27259);
            _27259 = NOVALUE;
            DeRef(_27222);
            _27222 = NOVALUE;
            DeRef(_27225);
            _27225 = NOVALUE;
            return 0;
LC: 

            /** inline.e:388					end for*/
            _0 = _i_53388;
            if (IS_ATOM_INT(_i_53388)) {
                _i_53388 = _i_53388 + 1;
                if ((object)((uintptr_t)_i_53388 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53388 = NewDouble((eudouble)_i_53388);
                }
            }
            else {
                _i_53388 = binary_op_a(PLUS, _i_53388, 1);
            }
            DeRef(_0);
            goto LA; // [503] 485
LB: 
            ;
            DeRef(_i_53388);
        }

        /** inline.e:389					return 1*/
        DeRef(_27232);
        _27232 = NOVALUE;
        DeRef(_27250);
        _27250 = NOVALUE;
        DeRef(_27249);
        _27249 = NOVALUE;
        DeRef(_27208);
        _27208 = NOVALUE;
        DeRef(_27263);
        _27263 = NOVALUE;
        DeRef(_27228);
        _27228 = NOVALUE;
        DeRef(_27253);
        _27253 = NOVALUE;
        DeRef(_27234);
        _27234 = NOVALUE;
        DeRef(_27255);
        _27255 = NOVALUE;
        DeRef(_27261);
        _27261 = NOVALUE;
        DeRef(_27240);
        _27240 = NOVALUE;
        DeRef(_27259);
        _27259 = NOVALUE;
        DeRef(_27222);
        _27222 = NOVALUE;
        DeRef(_27225);
        _27225 = NOVALUE;
        return 1;

        /** inline.e:390				case else*/
        default:

        /** inline.e:391					return 0*/
        DeRef(_27232);
        _27232 = NOVALUE;
        DeRef(_27250);
        _27250 = NOVALUE;
        DeRef(_27249);
        _27249 = NOVALUE;
        DeRef(_27208);
        _27208 = NOVALUE;
        DeRef(_27263);
        _27263 = NOVALUE;
        DeRef(_27228);
        _27228 = NOVALUE;
        DeRef(_27253);
        _27253 = NOVALUE;
        DeRef(_27234);
        _27234 = NOVALUE;
        DeRef(_27255);
        _27255 = NOVALUE;
        DeRef(_27261);
        _27261 = NOVALUE;
        DeRef(_27240);
        _27240 = NOVALUE;
        DeRef(_27259);
        _27259 = NOVALUE;
        DeRef(_27222);
        _27222 = NOVALUE;
        DeRef(_27225);
        _27225 = NOVALUE;
        return 0;
    ;}L5: 

    /** inline.e:394		return 1*/
    DeRef(_27232);
    _27232 = NOVALUE;
    DeRef(_27250);
    _27250 = NOVALUE;
    DeRef(_27249);
    _27249 = NOVALUE;
    DeRef(_27208);
    _27208 = NOVALUE;
    DeRef(_27263);
    _27263 = NOVALUE;
    DeRef(_27228);
    _27228 = NOVALUE;
    DeRef(_27253);
    _27253 = NOVALUE;
    DeRef(_27234);
    _27234 = NOVALUE;
    DeRef(_27255);
    _27255 = NOVALUE;
    DeRef(_27261);
    _27261 = NOVALUE;
    DeRef(_27240);
    _27240 = NOVALUE;
    DeRef(_27259);
    _27259 = NOVALUE;
    DeRef(_27222);
    _27222 = NOVALUE;
    DeRef(_27225);
    _27225 = NOVALUE;
    return 1;
    ;
}


void _68restore_code()
{
    object _27266 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:399		if length( temp_code ) then*/
    if (IS_SEQUENCE(_68temp_code_53398)){
            _27266 = SEQ_PTR(_68temp_code_53398)->length;
    }
    else {
        _27266 = 1;
    }
    if (_27266 == 0)
    {
        _27266 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _27266 = NOVALUE;
    }

    /** inline.e:400			Code = temp_code*/
    RefDS(_68temp_code_53398);
    DeRef(_39Code_16903);
    _39Code_16903 = _68temp_code_53398;
L1: 

    /** inline.e:402	end procedure*/
    return;
    ;
}


void _68check_inline(object _sub_53407)
{
    object _pc_53436 = NOVALUE;
    object _s_53438 = NOVALUE;
    object _backpatch_op_53476 = NOVALUE;
    object _op_53480 = NOVALUE;
    object _rtn_idx_53491 = NOVALUE;
    object _args_53496 = NOVALUE;
    object _args_53528 = NOVALUE;
    object _values_53557 = NOVALUE;
    object _27353 = NOVALUE;
    object _27352 = NOVALUE;
    object _27350 = NOVALUE;
    object _27347 = NOVALUE;
    object _27345 = NOVALUE;
    object _27344 = NOVALUE;
    object _27343 = NOVALUE;
    object _27341 = NOVALUE;
    object _27340 = NOVALUE;
    object _27339 = NOVALUE;
    object _27338 = NOVALUE;
    object _27337 = NOVALUE;
    object _27336 = NOVALUE;
    object _27335 = NOVALUE;
    object _27334 = NOVALUE;
    object _27333 = NOVALUE;
    object _27331 = NOVALUE;
    object _27330 = NOVALUE;
    object _27329 = NOVALUE;
    object _27328 = NOVALUE;
    object _27327 = NOVALUE;
    object _27325 = NOVALUE;
    object _27324 = NOVALUE;
    object _27323 = NOVALUE;
    object _27322 = NOVALUE;
    object _27321 = NOVALUE;
    object _27319 = NOVALUE;
    object _27318 = NOVALUE;
    object _27317 = NOVALUE;
    object _27316 = NOVALUE;
    object _27315 = NOVALUE;
    object _27314 = NOVALUE;
    object _27313 = NOVALUE;
    object _27312 = NOVALUE;
    object _27311 = NOVALUE;
    object _27310 = NOVALUE;
    object _27309 = NOVALUE;
    object _27308 = NOVALUE;
    object _27307 = NOVALUE;
    object _27306 = NOVALUE;
    object _27304 = NOVALUE;
    object _27301 = NOVALUE;
    object _27296 = NOVALUE;
    object _27294 = NOVALUE;
    object _27291 = NOVALUE;
    object _27290 = NOVALUE;
    object _27289 = NOVALUE;
    object _27288 = NOVALUE;
    object _27287 = NOVALUE;
    object _27286 = NOVALUE;
    object _27285 = NOVALUE;
    object _27284 = NOVALUE;
    object _27282 = NOVALUE;
    object _27280 = NOVALUE;
    object _27279 = NOVALUE;
    object _27277 = NOVALUE;
    object _27275 = NOVALUE;
    object _27273 = NOVALUE;
    object _27271 = NOVALUE;
    object _27270 = NOVALUE;
    object _27269 = NOVALUE;
    object _27268 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** inline.e:411		if OpTrace or SymTab[sub][S_TOKEN] = TYPE then*/
    if (_39OpTrace_16884 != 0) {
        goto L1; // [7] 34
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27268 = (object)*(((s1_ptr)_2)->base + _sub_53407);
    _2 = (object)SEQ_PTR(_27268);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _27269 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _27269 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _27268 = NOVALUE;
    if (IS_ATOM_INT(_27269)) {
        _27270 = (_27269 == 504);
    }
    else {
        _27270 = binary_op(EQUALS, _27269, 504);
    }
    _27269 = NOVALUE;
    if (_27270 == 0) {
        DeRef(_27270);
        _27270 = NOVALUE;
        goto L2; // [30] 40
    }
    else {
        if (!IS_ATOM_INT(_27270) && DBL_PTR(_27270)->dbl == 0.0){
            DeRef(_27270);
            _27270 = NOVALUE;
            goto L2; // [30] 40
        }
        DeRef(_27270);
        _27270 = NOVALUE;
    }
    DeRef(_27270);
    _27270 = NOVALUE;
L1: 

    /** inline.e:412			return*/
    DeRefi(_backpatch_op_53476);
    return;
L2: 

    /** inline.e:414		inline_sub      = sub*/
    _68inline_sub_52902 = _sub_53407;

    /** inline.e:415		if get_fwdref_count() then*/
    _27271 = _41get_fwdref_count();
    if (_27271 == 0) {
        DeRef(_27271);
        _27271 = NOVALUE;
        goto L3; // [52] 65
    }
    else {
        if (!IS_ATOM_INT(_27271) && DBL_PTR(_27271)->dbl == 0.0){
            DeRef(_27271);
            _27271 = NOVALUE;
            goto L3; // [52] 65
        }
        DeRef(_27271);
        _27271 = NOVALUE;
    }
    DeRef(_27271);
    _27271 = NOVALUE;

    /** inline.e:416			defer()*/
    _68defer();

    /** inline.e:417			return*/
    DeRefi(_backpatch_op_53476);
    return;
L3: 

    /** inline.e:419		temp_code = ""*/
    RefDS(_21928);
    DeRef(_68temp_code_53398);
    _68temp_code_53398 = _21928;

    /** inline.e:420		if sub != CurrentSub then*/
    if (_sub_53407 == _39CurrentSub_16823)
    goto L4; // [76] 99

    /** inline.e:421			Code = SymTab[sub][S_CODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27273 = (object)*(((s1_ptr)_2)->base + _sub_53407);
    DeRef(_39Code_16903);
    _2 = (object)SEQ_PTR(_27273);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _39Code_16903 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _39Code_16903 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    Ref(_39Code_16903);
    _27273 = NOVALUE;
    goto L5; // [96] 109
L4: 

    /** inline.e:423			temp_code = Code*/
    RefDS(_39Code_16903);
    DeRef(_68temp_code_53398);
    _68temp_code_53398 = _39Code_16903;
L5: 

    /** inline.e:426		if length(Code) > OpInline then*/
    if (IS_SEQUENCE(_39Code_16903)){
            _27275 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _27275 = 1;
    }
    if (_27275 <= _39OpInline_16889)
    goto L6; // [118] 128

    /** inline.e:427			return*/
    DeRefi(_backpatch_op_53476);
    return;
L6: 

    /** inline.e:430		inline_code     = Code*/
    RefDS(_39Code_16903);
    DeRef(_68inline_code_52888);
    _68inline_code_52888 = _39Code_16903;

    /** inline.e:431		return_gotos    = 0*/
    _68return_gotos_52897 = 0;

    /** inline.e:432		prev_pc         = 1*/
    _68prev_pc_52896 = 1;

    /** inline.e:433		proc_vars       = {}*/
    RefDS(_21928);
    DeRefi(_68proc_vars_52889);
    _68proc_vars_52889 = _21928;

    /** inline.e:434		inline_temps    = {}*/
    RefDS(_21928);
    DeRef(_68inline_temps_52890);
    _68inline_temps_52890 = _21928;

    /** inline.e:435		inline_params   = {}*/
    RefDS(_21928);
    DeRefi(_68inline_params_52893);
    _68inline_params_52893 = _21928;

    /** inline.e:436		assigned_params = {}*/
    RefDS(_21928);
    DeRef(_68assigned_params_52894);
    _68assigned_params_52894 = _21928;

    /** inline.e:438		integer pc = 1*/
    _pc_53436 = 1;

    /** inline.e:439		symtab_index s = SymTab[sub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27277 = (object)*(((s1_ptr)_2)->base + _sub_53407);
    _2 = (object)SEQ_PTR(_27277);
    _s_53438 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53438)){
        _s_53438 = (object)DBL_PTR(_s_53438)->dbl;
    }
    _27277 = NOVALUE;

    /** inline.e:440		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27279 = (object)*(((s1_ptr)_2)->base + _sub_53407);
    _2 = (object)SEQ_PTR(_27279);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _27280 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _27280 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _27279 = NOVALUE;
    {
        object _p_53444;
        _p_53444 = 1;
L7: 
        if (binary_op_a(GREATER, _p_53444, _27280)){
            goto L8; // [210] 248
        }

        /** inline.e:441			inline_params &= s*/
        Append(&_68inline_params_52893, _68inline_params_52893, _s_53438);

        /** inline.e:442			s = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27282 = (object)*(((s1_ptr)_2)->base + _s_53438);
        _2 = (object)SEQ_PTR(_27282);
        _s_53438 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53438)){
            _s_53438 = (object)DBL_PTR(_s_53438)->dbl;
        }
        _27282 = NOVALUE;

        /** inline.e:443		end for*/
        _0 = _p_53444;
        if (IS_ATOM_INT(_p_53444)) {
            _p_53444 = _p_53444 + 1;
            if ((object)((uintptr_t)_p_53444 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53444 = NewDouble((eudouble)_p_53444);
            }
        }
        else {
            _p_53444 = binary_op_a(PLUS, _p_53444, 1);
        }
        DeRef(_0);
        goto L7; // [243] 217
L8: 
        ;
        DeRef(_p_53444);
    }

    /** inline.e:445		while s != 0 and */
L9: 
    _27284 = (_s_53438 != 0);
    if (_27284 == 0) {
        goto LA; // [257] 335
    }
    _27286 = _56sym_scope(_s_53438);
    if (IS_ATOM_INT(_27286)) {
        _27287 = (_27286 <= 3);
    }
    else {
        _27287 = binary_op(LESSEQ, _27286, 3);
    }
    DeRef(_27286);
    _27286 = NOVALUE;
    if (IS_ATOM_INT(_27287)) {
        if (_27287 != 0) {
            DeRef(_27288);
            _27288 = 1;
            goto LB; // [271] 289
        }
    }
    else {
        if (DBL_PTR(_27287)->dbl != 0.0) {
            DeRef(_27288);
            _27288 = 1;
            goto LB; // [271] 289
        }
    }
    _27289 = _56sym_scope(_s_53438);
    if (IS_ATOM_INT(_27289)) {
        _27290 = (_27289 == 9);
    }
    else {
        _27290 = binary_op(EQUALS, _27289, 9);
    }
    DeRef(_27289);
    _27289 = NOVALUE;
    DeRef(_27288);
    if (IS_ATOM_INT(_27290))
    _27288 = (_27290 != 0);
    else
    _27288 = DBL_PTR(_27290)->dbl != 0.0;
LB: 
    if (_27288 == 0)
    {
        _27288 = NOVALUE;
        goto LA; // [290] 335
    }
    else{
        _27288 = NOVALUE;
    }

    /** inline.e:447			if sym_scope( s ) != SC_UNDEFINED then*/
    _27291 = _56sym_scope(_s_53438);
    if (binary_op_a(EQUALS, _27291, 9)){
        DeRef(_27291);
        _27291 = NOVALUE;
        goto LC; // [301] 314
    }
    DeRef(_27291);
    _27291 = NOVALUE;

    /** inline.e:448				proc_vars &= s*/
    Append(&_68proc_vars_52889, _68proc_vars_52889, _s_53438);
LC: 

    /** inline.e:451			s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27294 = (object)*(((s1_ptr)_2)->base + _s_53438);
    _2 = (object)SEQ_PTR(_27294);
    _s_53438 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53438)){
        _s_53438 = (object)DBL_PTR(_s_53438)->dbl;
    }
    _27294 = NOVALUE;

    /** inline.e:452		end while*/
    goto L9; // [332] 253
LA: 

    /** inline.e:453		sequence backpatch_op = {}*/
    RefDS(_21928);
    DeRefi(_backpatch_op_53476);
    _backpatch_op_53476 = _21928;

    /** inline.e:454		while pc < length( inline_code ) do*/
LD: 
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27296 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27296 = 1;
    }
    if (_pc_53436 >= _27296)
    goto LE; // [352] 869

    /** inline.e:456			integer op = inline_code[pc]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _op_53480 = (object)*(((s1_ptr)_2)->base + _pc_53436);
    if (!IS_ATOM_INT(_op_53480))
    _op_53480 = (object)DBL_PTR(_op_53480)->dbl;

    /** inline.e:457			switch op do*/
    _0 = _op_53480;
    switch ( _0 ){ 

        /** inline.e:458				case PROC_FORWARD, FUNC_FORWARD then*/
        case 195:
        case 196:

        /** inline.e:459					defer()*/
        _68defer();

        /** inline.e:460					restore_code()*/
        _68restore_code();

        /** inline.e:461					return*/
        DeRefi(_backpatch_op_53476);
        _27280 = NOVALUE;
        DeRef(_27290);
        _27290 = NOVALUE;
        DeRef(_27284);
        _27284 = NOVALUE;
        DeRef(_27287);
        _27287 = NOVALUE;
        return;
        goto LF; // [390] 851

        /** inline.e:463				case PROC, FUNC then*/
        case 27:
        case 501:

        /** inline.e:464					symtab_index rtn_idx = inline_code[pc+1]*/
        _27301 = _pc_53436 + 1;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _rtn_idx_53491 = (object)*(((s1_ptr)_2)->base + _27301);
        if (!IS_ATOM_INT(_rtn_idx_53491)){
            _rtn_idx_53491 = (object)DBL_PTR(_rtn_idx_53491)->dbl;
        }

        /** inline.e:465					if rtn_idx = sub then*/
        if (_rtn_idx_53491 != _sub_53407)
        goto L10; // [414] 428

        /** inline.e:467						restore_code()*/
        _68restore_code();

        /** inline.e:468						return*/
        DeRefi(_backpatch_op_53476);
        _27280 = NOVALUE;
        DeRef(_27290);
        _27290 = NOVALUE;
        DeRef(_27284);
        _27284 = NOVALUE;
        DeRef(_27287);
        _27287 = NOVALUE;
        _27301 = NOVALUE;
        return;
L10: 

        /** inline.e:471					integer args = SymTab[rtn_idx][S_NUM_ARGS]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27304 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53491);
        _2 = (object)SEQ_PTR(_27304);
        if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
            _args_53496 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
        }
        else{
            _args_53496 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
        }
        if (!IS_ATOM_INT(_args_53496)){
            _args_53496 = (object)DBL_PTR(_args_53496)->dbl;
        }
        _27304 = NOVALUE;

        /** inline.e:472					if SymTab[rtn_idx][S_TOKEN] != PROC and check_for_param( pc + args + 2 ) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27306 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53491);
        _2 = (object)SEQ_PTR(_27306);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _27307 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _27307 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _27306 = NOVALUE;
        if (IS_ATOM_INT(_27307)) {
            _27308 = (_27307 != 27);
        }
        else {
            _27308 = binary_op(NOTEQ, _27307, 27);
        }
        _27307 = NOVALUE;
        if (IS_ATOM_INT(_27308)) {
            if (_27308 == 0) {
                goto L11; // [464] 485
            }
        }
        else {
            if (DBL_PTR(_27308)->dbl == 0.0) {
                goto L11; // [464] 485
            }
        }
        _27310 = _pc_53436 + _args_53496;
        if ((object)((uintptr_t)_27310 + (uintptr_t)HIGH_BITS) >= 0){
            _27310 = NewDouble((eudouble)_27310);
        }
        if (IS_ATOM_INT(_27310)) {
            _27311 = _27310 + 2;
            if ((object)((uintptr_t)_27311 + (uintptr_t)HIGH_BITS) >= 0){
                _27311 = NewDouble((eudouble)_27311);
            }
        }
        else {
            _27311 = NewDouble(DBL_PTR(_27310)->dbl + (eudouble)2);
        }
        DeRef(_27310);
        _27310 = NOVALUE;
        _27312 = _68check_for_param(_27311);
        _27311 = NOVALUE;
        if (_27312 == 0) {
            DeRef(_27312);
            _27312 = NOVALUE;
            goto L11; // [481] 485
        }
        else {
            if (!IS_ATOM_INT(_27312) && DBL_PTR(_27312)->dbl == 0.0){
                DeRef(_27312);
                _27312 = NOVALUE;
                goto L11; // [481] 485
            }
            DeRef(_27312);
            _27312 = NOVALUE;
        }
        DeRef(_27312);
        _27312 = NOVALUE;
L11: 

        /** inline.e:475					for i = 2 to args + 1 + (SymTab[rtn_idx][S_TOKEN] != PROC) do*/
        _27313 = _args_53496 + 1;
        if (_27313 > MAXINT){
            _27313 = NewDouble((eudouble)_27313);
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27314 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53491);
        _2 = (object)SEQ_PTR(_27314);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _27315 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _27315 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _27314 = NOVALUE;
        if (IS_ATOM_INT(_27315)) {
            _27316 = (_27315 != 27);
        }
        else {
            _27316 = binary_op(NOTEQ, _27315, 27);
        }
        _27315 = NOVALUE;
        if (IS_ATOM_INT(_27313) && IS_ATOM_INT(_27316)) {
            _27317 = _27313 + _27316;
            if ((object)((uintptr_t)_27317 + (uintptr_t)HIGH_BITS) >= 0){
                _27317 = NewDouble((eudouble)_27317);
            }
        }
        else {
            _27317 = binary_op(PLUS, _27313, _27316);
        }
        DeRef(_27313);
        _27313 = NOVALUE;
        DeRef(_27316);
        _27316 = NOVALUE;
        {
            object _i_53513;
            _i_53513 = 2;
L12: 
            if (binary_op_a(GREATER, _i_53513, _27317)){
                goto L13; // [513] 550
            }

            /** inline.e:476						if not adjust_symbol( pc + i ) then */
            if (IS_ATOM_INT(_i_53513)) {
                _27318 = _pc_53436 + _i_53513;
                if ((object)((uintptr_t)_27318 + (uintptr_t)HIGH_BITS) >= 0){
                    _27318 = NewDouble((eudouble)_27318);
                }
            }
            else {
                _27318 = NewDouble((eudouble)_pc_53436 + DBL_PTR(_i_53513)->dbl);
            }
            _27319 = _68adjust_symbol(_27318);
            _27318 = NOVALUE;
            if (IS_ATOM_INT(_27319)) {
                if (_27319 != 0){
                    DeRef(_27319);
                    _27319 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            else {
                if (DBL_PTR(_27319)->dbl != 0.0){
                    DeRef(_27319);
                    _27319 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            DeRef(_27319);
            _27319 = NOVALUE;

            /** inline.e:477							defer()*/
            _68defer();

            /** inline.e:478							return*/
            DeRef(_i_53513);
            DeRefi(_backpatch_op_53476);
            DeRef(_27308);
            _27308 = NOVALUE;
            _27280 = NOVALUE;
            DeRef(_27290);
            _27290 = NOVALUE;
            DeRef(_27284);
            _27284 = NOVALUE;
            DeRef(_27287);
            _27287 = NOVALUE;
            DeRef(_27301);
            _27301 = NOVALUE;
            DeRef(_27317);
            _27317 = NOVALUE;
            return;
L14: 

            /** inline.e:480					end for*/
            _0 = _i_53513;
            if (IS_ATOM_INT(_i_53513)) {
                _i_53513 = _i_53513 + 1;
                if ((object)((uintptr_t)_i_53513 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53513 = NewDouble((eudouble)_i_53513);
                }
            }
            else {
                _i_53513 = binary_op_a(PLUS, _i_53513, 1);
            }
            DeRef(_0);
            goto L12; // [545] 520
L13: 
            ;
            DeRef(_i_53513);
        }
        goto LF; // [552] 851

        /** inline.e:482				case RIGHT_BRACE_N then*/
        case 31:

        /** inline.e:484					sequence args = inline_code[pc+2..inline_code[pc+1] + pc + 1]*/
        _27321 = _pc_53436 + 2;
        if ((object)((uintptr_t)_27321 + (uintptr_t)HIGH_BITS) >= 0){
            _27321 = NewDouble((eudouble)_27321);
        }
        _27322 = _pc_53436 + 1;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27323 = (object)*(((s1_ptr)_2)->base + _27322);
        if (IS_ATOM_INT(_27323)) {
            _27324 = _27323 + _pc_53436;
            if ((object)((uintptr_t)_27324 + (uintptr_t)HIGH_BITS) >= 0){
                _27324 = NewDouble((eudouble)_27324);
            }
        }
        else {
            _27324 = binary_op(PLUS, _27323, _pc_53436);
        }
        _27323 = NOVALUE;
        if (IS_ATOM_INT(_27324)) {
            _27325 = _27324 + 1;
        }
        else
        _27325 = binary_op(PLUS, 1, _27324);
        DeRef(_27324);
        _27324 = NOVALUE;
        rhs_slice_target = (object_ptr)&_args_53528;
        RHS_Slice(_68inline_code_52888, _27321, _27325);

        /** inline.e:486					for i = 1 to length(args) - 1 do*/
        if (IS_SEQUENCE(_args_53528)){
                _27327 = SEQ_PTR(_args_53528)->length;
        }
        else {
            _27327 = 1;
        }
        _27328 = _27327 - 1;
        _27327 = NOVALUE;
        {
            object _i_53536;
            _i_53536 = 1;
L15: 
            if (_i_53536 > _27328){
                goto L16; // [598] 644
            }

            /** inline.e:487						if find( args[i], args, i + 1 ) then*/
            _2 = (object)SEQ_PTR(_args_53528);
            _27329 = (object)*(((s1_ptr)_2)->base + _i_53536);
            _27330 = _i_53536 + 1;
            _27331 = find_from(_27329, _args_53528, _27330);
            _27329 = NOVALUE;
            _27330 = NOVALUE;
            if (_27331 == 0)
            {
                _27331 = NOVALUE;
                goto L17; // [620] 637
            }
            else{
                _27331 = NOVALUE;
            }

            /** inline.e:488							defer()*/
            _68defer();

            /** inline.e:489							restore_code()*/
            _68restore_code();

            /** inline.e:490							return*/
            DeRefDS(_args_53528);
            DeRefi(_backpatch_op_53476);
            DeRef(_27308);
            _27308 = NOVALUE;
            _27280 = NOVALUE;
            DeRef(_27322);
            _27322 = NOVALUE;
            DeRef(_27321);
            _27321 = NOVALUE;
            DeRef(_27290);
            _27290 = NOVALUE;
            DeRef(_27284);
            _27284 = NOVALUE;
            DeRef(_27287);
            _27287 = NOVALUE;
            DeRef(_27325);
            _27325 = NOVALUE;
            DeRef(_27301);
            _27301 = NOVALUE;
            DeRef(_27328);
            _27328 = NOVALUE;
            DeRef(_27317);
            _27317 = NOVALUE;
            return;
L17: 

            /** inline.e:492					end for*/
            _i_53536 = _i_53536 + 1;
            goto L15; // [639] 605
L16: 
            ;
        }

        /** inline.e:493					goto "inline op"*/
        DeRef(_args_53528);
        _args_53528 = NOVALUE;
        goto G18;
        goto LF; // [654] 851

        /** inline.e:495				case RIGHT_BRACE_2 then*/
        case 85:

        /** inline.e:496					if equal( inline_code[pc+1], inline_code[pc+2] ) then*/
        _27333 = _pc_53436 + 1;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27334 = (object)*(((s1_ptr)_2)->base + _27333);
        _27335 = _pc_53436 + 2;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27336 = (object)*(((s1_ptr)_2)->base + _27335);
        if (_27334 == _27336)
        _27337 = 1;
        else if (IS_ATOM_INT(_27334) && IS_ATOM_INT(_27336))
        _27337 = 0;
        else
        _27337 = (compare(_27334, _27336) == 0);
        _27334 = NOVALUE;
        _27336 = NOVALUE;
        if (_27337 == 0)
        {
            _27337 = NOVALUE;
            goto L19; // [686] 703
        }
        else{
            _27337 = NOVALUE;
        }

        /** inline.e:497						defer()*/
        _68defer();

        /** inline.e:498						restore_code()*/
        _68restore_code();

        /** inline.e:499						return*/
        DeRefi(_backpatch_op_53476);
        DeRef(_27308);
        _27308 = NOVALUE;
        _27335 = NOVALUE;
        _27280 = NOVALUE;
        DeRef(_27322);
        _27322 = NOVALUE;
        DeRef(_27321);
        _27321 = NOVALUE;
        _27333 = NOVALUE;
        DeRef(_27290);
        _27290 = NOVALUE;
        DeRef(_27284);
        _27284 = NOVALUE;
        DeRef(_27287);
        _27287 = NOVALUE;
        DeRef(_27325);
        _27325 = NOVALUE;
        DeRef(_27301);
        _27301 = NOVALUE;
        DeRef(_27328);
        _27328 = NOVALUE;
        DeRef(_27317);
        _27317 = NOVALUE;
        return;
L19: 

        /** inline.e:501					goto "inline op"*/
        goto G18;
        goto LF; // [711] 851

        /** inline.e:503				case EXIT_BLOCK then*/
        case 206:

        /** inline.e:504					replace_code( "", pc, pc + 1 )*/
        _27338 = _pc_53436 + 1;
        if (_27338 > MAXINT){
            _27338 = NewDouble((eudouble)_27338);
        }
        RefDS(_21928);
        _68replace_code(_21928, _pc_53436, _27338);
        _27338 = NOVALUE;

        /** inline.e:505					continue*/
        goto LD; // [732] 347
        goto LF; // [734] 851

        /** inline.e:507				case SWITCH_RT then*/
        case 202:

        /** inline.e:508					sequence values = SymTab[inline_code[pc+2]][S_OBJ]*/
        _27339 = _pc_53436 + 2;
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27340 = (object)*(((s1_ptr)_2)->base + _27339);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_27340)){
            _27341 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27340)->dbl));
        }
        else{
            _27341 = (object)*(((s1_ptr)_2)->base + _27340);
        }
        DeRef(_values_53557);
        _2 = (object)SEQ_PTR(_27341);
        _values_53557 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_values_53557);
        _27341 = NOVALUE;

        /** inline.e:509					for i = 1 to length( values ) do*/
        if (IS_SEQUENCE(_values_53557)){
                _27343 = SEQ_PTR(_values_53557)->length;
        }
        else {
            _27343 = 1;
        }
        {
            object _i_53565;
            _i_53565 = 1;
L1A: 
            if (_i_53565 > _27343){
                goto L1B; // [771] 811
            }

            /** inline.e:510						if sequence( values[i] ) then*/
            _2 = (object)SEQ_PTR(_values_53557);
            _27344 = (object)*(((s1_ptr)_2)->base + _i_53565);
            _27345 = IS_SEQUENCE(_27344);
            _27344 = NOVALUE;
            if (_27345 == 0)
            {
                _27345 = NOVALUE;
                goto L1C; // [787] 804
            }
            else{
                _27345 = NOVALUE;
            }

            /** inline.e:512							defer()*/
            _68defer();

            /** inline.e:513							restore_code()*/
            _68restore_code();

            /** inline.e:514							return*/
            DeRefDS(_values_53557);
            DeRefi(_backpatch_op_53476);
            DeRef(_27308);
            _27308 = NOVALUE;
            DeRef(_27335);
            _27335 = NOVALUE;
            _27280 = NOVALUE;
            _27340 = NOVALUE;
            DeRef(_27339);
            _27339 = NOVALUE;
            DeRef(_27322);
            _27322 = NOVALUE;
            DeRef(_27321);
            _27321 = NOVALUE;
            DeRef(_27333);
            _27333 = NOVALUE;
            DeRef(_27290);
            _27290 = NOVALUE;
            DeRef(_27284);
            _27284 = NOVALUE;
            DeRef(_27287);
            _27287 = NOVALUE;
            DeRef(_27325);
            _27325 = NOVALUE;
            DeRef(_27301);
            _27301 = NOVALUE;
            DeRef(_27328);
            _27328 = NOVALUE;
            DeRef(_27317);
            _27317 = NOVALUE;
            return;
L1C: 

            /** inline.e:516					end for*/
            _i_53565 = _i_53565 + 1;
            goto L1A; // [806] 778
L1B: 
            ;
        }

        /** inline.e:517					backpatch_op = append( backpatch_op, pc )*/
        Append(&_backpatch_op_53476, _backpatch_op_53476, _pc_53436);
        DeRef(_values_53557);
        _values_53557 = NOVALUE;

        /** inline.e:520				case else*/
        default:

        /** inline.e:521				label "inline op"*/
G18:

        /** inline.e:522					if not inline_op( pc ) then*/
        _27347 = _68inline_op(_pc_53436);
        if (IS_ATOM_INT(_27347)) {
            if (_27347 != 0){
                DeRef(_27347);
                _27347 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        else {
            if (DBL_PTR(_27347)->dbl != 0.0){
                DeRef(_27347);
                _27347 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        DeRef(_27347);
        _27347 = NOVALUE;

        /** inline.e:524						defer()*/
        _68defer();

        /** inline.e:525						restore_code()*/
        _68restore_code();

        /** inline.e:526						return*/
        DeRefi(_backpatch_op_53476);
        DeRef(_27308);
        _27308 = NOVALUE;
        DeRef(_27335);
        _27335 = NOVALUE;
        _27280 = NOVALUE;
        _27340 = NOVALUE;
        DeRef(_27339);
        _27339 = NOVALUE;
        DeRef(_27322);
        _27322 = NOVALUE;
        DeRef(_27321);
        _27321 = NOVALUE;
        DeRef(_27333);
        _27333 = NOVALUE;
        DeRef(_27290);
        _27290 = NOVALUE;
        DeRef(_27284);
        _27284 = NOVALUE;
        DeRef(_27287);
        _27287 = NOVALUE;
        DeRef(_27325);
        _27325 = NOVALUE;
        DeRef(_27301);
        _27301 = NOVALUE;
        DeRef(_27328);
        _27328 = NOVALUE;
        DeRef(_27317);
        _27317 = NOVALUE;
        return;
L1D: 
    ;}LF: 

    /** inline.e:530			pc = advance( pc, inline_code )*/
    RefDS(_68inline_code_52888);
    _pc_53436 = _68advance(_pc_53436, _68inline_code_52888);
    if (!IS_ATOM_INT(_pc_53436)) {
        _1 = (object)(DBL_PTR(_pc_53436)->dbl);
        DeRefDS(_pc_53436);
        _pc_53436 = _1;
    }

    /** inline.e:532		end while*/
    goto LD; // [866] 347
LE: 

    /** inline.e:534		SymTab[sub][S_INLINE] = { sort( assigned_params ), inline_code, backpatch_op }*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sub_53407 + ((s1_ptr)_2)->base);
    RefDS(_68assigned_params_52894);
    _27352 = _23sort(_68assigned_params_52894, 1);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _27352;
    RefDS(_68inline_code_52888);
    ((intptr_t*)_2)[2] = _68inline_code_52888;
    RefDS(_backpatch_op_53476);
    ((intptr_t*)_2)[3] = _backpatch_op_53476;
    _27353 = MAKE_SEQ(_1);
    _27352 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 29);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27353;
    if( _1 != _27353 ){
        DeRef(_1);
    }
    _27353 = NOVALUE;
    _27350 = NOVALUE;

    /** inline.e:535		restore_code()*/
    _68restore_code();

    /** inline.e:536	end procedure*/
    DeRefDSi(_backpatch_op_53476);
    DeRef(_27308);
    _27308 = NOVALUE;
    DeRef(_27335);
    _27335 = NOVALUE;
    _27280 = NOVALUE;
    _27340 = NOVALUE;
    DeRef(_27339);
    _27339 = NOVALUE;
    DeRef(_27322);
    _27322 = NOVALUE;
    DeRef(_27321);
    _27321 = NOVALUE;
    DeRef(_27333);
    _27333 = NOVALUE;
    DeRef(_27290);
    _27290 = NOVALUE;
    DeRef(_27284);
    _27284 = NOVALUE;
    DeRef(_27287);
    _27287 = NOVALUE;
    DeRef(_27325);
    _27325 = NOVALUE;
    DeRef(_27301);
    _27301 = NOVALUE;
    DeRef(_27328);
    _27328 = NOVALUE;
    DeRef(_27317);
    _27317 = NOVALUE;
    return;
    ;
}


void _68replace_temp(object _pc_53585)
{
    object _temp_num_53586 = NOVALUE;
    object _needed_53589 = NOVALUE;
    object _27366 = NOVALUE;
    object _27365 = NOVALUE;
    object _27364 = NOVALUE;
    object _27363 = NOVALUE;
    object _27361 = NOVALUE;
    object _27359 = NOVALUE;
    object _27356 = NOVALUE;
    object _27354 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:539		integer temp_num = inline_code[pc][2]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27354 = (object)*(((s1_ptr)_2)->base + _pc_53585);
    _2 = (object)SEQ_PTR(_27354);
    _temp_num_53586 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_temp_num_53586)){
        _temp_num_53586 = (object)DBL_PTR(_temp_num_53586)->dbl;
    }
    _27354 = NOVALUE;

    /** inline.e:540		integer needed = temp_num - length( inline_temps )*/
    if (IS_SEQUENCE(_68inline_temps_52890)){
            _27356 = SEQ_PTR(_68inline_temps_52890)->length;
    }
    else {
        _27356 = 1;
    }
    _needed_53589 = _temp_num_53586 - _27356;
    _27356 = NOVALUE;

    /** inline.e:541		if needed > 0 then*/
    if (_needed_53589 <= 0)
    goto L1; // [30] 47

    /** inline.e:542			inline_temps &= repeat( 0, needed )*/
    _27359 = Repeat(0, _needed_53589);
    Concat((object_ptr)&_68inline_temps_52890, _68inline_temps_52890, _27359);
    DeRefDS(_27359);
    _27359 = NOVALUE;
L1: 

    /** inline.e:545		if not inline_temps[temp_num] then*/
    _2 = (object)SEQ_PTR(_68inline_temps_52890);
    _27361 = (object)*(((s1_ptr)_2)->base + _temp_num_53586);
    if (IS_ATOM_INT(_27361)) {
        if (_27361 != 0){
            _27361 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    else {
        if (DBL_PTR(_27361)->dbl != 0.0){
            _27361 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    _27361 = NOVALUE;

    /** inline.e:546			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L3; // [62] 84
    }
    else{
    }

    /** inline.e:547				inline_temps[temp_num] = new_inline_var( -temp_num, 0 )*/
    if ((uintptr_t)_temp_num_53586 == (uintptr_t)HIGH_BITS){
        _27363 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27363 = - _temp_num_53586;
    }
    _27364 = _68new_inline_var(_27363, 0);
    _27363 = NOVALUE;
    _2 = (object)SEQ_PTR(_68inline_temps_52890);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_temps_52890 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53586);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27364;
    if( _1 != _27364 ){
        DeRef(_1);
    }
    _27364 = NOVALUE;
    goto L4; // [81] 99
L3: 

    /** inline.e:549				inline_temps[temp_num] = NewTempSym( TRUE )*/
    _27365 = _56NewTempSym(_9TRUE_444);
    _2 = (object)SEQ_PTR(_68inline_temps_52890);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_temps_52890 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53586);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27365;
    if( _1 != _27365 ){
        DeRef(_1);
    }
    _27365 = NOVALUE;
L4: 
L2: 

    /** inline.e:554		inline_code[pc] = inline_temps[temp_num]*/
    _2 = (object)SEQ_PTR(_68inline_temps_52890);
    _27366 = (object)*(((s1_ptr)_2)->base + _temp_num_53586);
    Ref(_27366);
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53585);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27366;
    if( _1 != _27366 ){
        DeRef(_1);
    }
    _27366 = NOVALUE;

    /** inline.e:555	end procedure*/
    return;
    ;
}


object _68get_param_sym(object _pc_53611)
{
    object _il_53612 = NOVALUE;
    object _px_53620 = NOVALUE;
    object _27373 = NOVALUE;
    object _27370 = NOVALUE;
    object _27369 = NOVALUE;
    object _27368 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:558		object il = inline_code[pc]*/
    DeRef(_il_53612);
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _il_53612 = (object)*(((s1_ptr)_2)->base + _pc_53611);
    Ref(_il_53612);

    /** inline.e:559		if integer( il ) then*/
    if (IS_ATOM_INT(_il_53612))
    _27368 = 1;
    else if (IS_ATOM_DBL(_il_53612))
    _27368 = IS_ATOM_INT(DoubleToInt(_il_53612));
    else
    _27368 = 0;
    if (_27368 == 0)
    {
        _27368 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27368 = NOVALUE;
    }

    /** inline.e:560			return inline_code[pc]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27369 = (object)*(((s1_ptr)_2)->base + _pc_53611);
    Ref(_27369);
    DeRef(_il_53612);
    return _27369;
    goto L2; // [31] 53
L1: 

    /** inline.e:562		elsif length( il ) = 1 then*/
    if (IS_SEQUENCE(_il_53612)){
            _27370 = SEQ_PTR(_il_53612)->length;
    }
    else {
        _27370 = 1;
    }
    if (_27370 != 1)
    goto L3; // [39] 52

    /** inline.e:563			return inline_target*/
    DeRef(_il_53612);
    _27369 = NOVALUE;
    return _68inline_target_52895;
L3: 
L2: 

    /** inline.e:567		integer px = il[2]*/
    _2 = (object)SEQ_PTR(_il_53612);
    _px_53620 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53620)){
        _px_53620 = (object)DBL_PTR(_px_53620)->dbl;
    }

    /** inline.e:568		return passed_params[px]*/
    _2 = (object)SEQ_PTR(_68passed_params_52891);
    _27373 = (object)*(((s1_ptr)_2)->base + _px_53620);
    Ref(_27373);
    DeRef(_il_53612);
    _27369 = NOVALUE;
    return _27373;
    ;
}


object _68get_original_sym(object _pc_53625)
{
    object _il_53626 = NOVALUE;
    object _px_53634 = NOVALUE;
    object _27380 = NOVALUE;
    object _27377 = NOVALUE;
    object _27376 = NOVALUE;
    object _27375 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_pc_53625)) {
        _1 = (object)(DBL_PTR(_pc_53625)->dbl);
        DeRefDS(_pc_53625);
        _pc_53625 = _1;
    }

    /** inline.e:572		object il = inline_code[pc]*/
    DeRef(_il_53626);
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _il_53626 = (object)*(((s1_ptr)_2)->base + _pc_53625);
    Ref(_il_53626);

    /** inline.e:573		if integer( il ) then*/
    if (IS_ATOM_INT(_il_53626))
    _27375 = 1;
    else if (IS_ATOM_DBL(_il_53626))
    _27375 = IS_ATOM_INT(DoubleToInt(_il_53626));
    else
    _27375 = 0;
    if (_27375 == 0)
    {
        _27375 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27375 = NOVALUE;
    }

    /** inline.e:574			return inline_code[pc]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27376 = (object)*(((s1_ptr)_2)->base + _pc_53625);
    Ref(_27376);
    DeRef(_il_53626);
    return _27376;
    goto L2; // [31] 53
L1: 

    /** inline.e:576		elsif length( il ) = 1 then*/
    if (IS_SEQUENCE(_il_53626)){
            _27377 = SEQ_PTR(_il_53626)->length;
    }
    else {
        _27377 = 1;
    }
    if (_27377 != 1)
    goto L3; // [39] 52

    /** inline.e:577			return inline_target*/
    DeRef(_il_53626);
    _27376 = NOVALUE;
    return _68inline_target_52895;
L3: 
L2: 

    /** inline.e:581		integer px = il[2]*/
    _2 = (object)SEQ_PTR(_il_53626);
    _px_53634 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53634)){
        _px_53634 = (object)DBL_PTR(_px_53634)->dbl;
    }

    /** inline.e:582		return original_params[px]*/
    _2 = (object)SEQ_PTR(_68original_params_52892);
    _27380 = (object)*(((s1_ptr)_2)->base + _px_53634);
    Ref(_27380);
    DeRef(_il_53626);
    _27376 = NOVALUE;
    return _27380;
    ;
}


void _68replace_var(object _pc_53643)
{
    object _27384 = NOVALUE;
    object _27383 = NOVALUE;
    object _27382 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:590		inline_code[pc] = proc_vars[inline_code[pc][2]]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27382 = (object)*(((s1_ptr)_2)->base + _pc_53643);
    _2 = (object)SEQ_PTR(_27382);
    _27383 = (object)*(((s1_ptr)_2)->base + 2);
    _27382 = NOVALUE;
    _2 = (object)SEQ_PTR(_68proc_vars_52889);
    if (!IS_ATOM_INT(_27383)){
        _27384 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27383)->dbl));
    }
    else{
        _27384 = (object)*(((s1_ptr)_2)->base + _27383);
    }
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53643);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27384;
    if( _1 != _27384 ){
        DeRef(_1);
    }
    _27384 = NOVALUE;

    /** inline.e:591	end procedure*/
    _27383 = NOVALUE;
    return;
    ;
}


void _68fix_switch_rt(object _pc_53649)
{
    object _value_table_53651 = NOVALUE;
    object _jump_table_53658 = NOVALUE;
    object _27404 = NOVALUE;
    object _27403 = NOVALUE;
    object _27402 = NOVALUE;
    object _27401 = NOVALUE;
    object _27400 = NOVALUE;
    object _27399 = NOVALUE;
    object _27397 = NOVALUE;
    object _27396 = NOVALUE;
    object _27395 = NOVALUE;
    object _27394 = NOVALUE;
    object _27393 = NOVALUE;
    object _27391 = NOVALUE;
    object _27389 = NOVALUE;
    object _27388 = NOVALUE;
    object _27386 = NOVALUE;
    object _27385 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** inline.e:594		symtab_index value_table = NewStringSym( {-1, length(SymTab)} )*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _27385 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _27385 = 1;
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27385;
    _27386 = MAKE_SEQ(_1);
    _27385 = NOVALUE;
    _value_table_53651 = _56NewStringSym(_27386);
    _27386 = NOVALUE;
    if (!IS_ATOM_INT(_value_table_53651)) {
        _1 = (object)(DBL_PTR(_value_table_53651)->dbl);
        DeRefDS(_value_table_53651);
        _value_table_53651 = _1;
    }

    /** inline.e:595		symtab_index jump_table  = NewStringSym( {-1, length(SymTab)} )*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _27388 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _27388 = 1;
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27388;
    _27389 = MAKE_SEQ(_1);
    _27388 = NOVALUE;
    _jump_table_53658 = _56NewStringSym(_27389);
    _27389 = NOVALUE;
    if (!IS_ATOM_INT(_jump_table_53658)) {
        _1 = (object)(DBL_PTR(_jump_table_53658)->dbl);
        DeRefDS(_jump_table_53658);
        _jump_table_53658 = _1;
    }

    /** inline.e:597		SymTab[value_table][S_OBJ] = SymTab[inline_code[pc+2]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_value_table_53651 + ((s1_ptr)_2)->base);
    _27393 = _pc_53649 + 2;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27394 = (object)*(((s1_ptr)_2)->base + _27393);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_27394)){
        _27395 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27394)->dbl));
    }
    else{
        _27395 = (object)*(((s1_ptr)_2)->base + _27394);
    }
    _2 = (object)SEQ_PTR(_27395);
    _27396 = (object)*(((s1_ptr)_2)->base + 1);
    _27395 = NOVALUE;
    Ref(_27396);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27396;
    if( _1 != _27396 ){
        DeRef(_1);
    }
    _27396 = NOVALUE;
    _27391 = NOVALUE;

    /** inline.e:598		SymTab[jump_table][S_OBJ]  = SymTab[inline_code[pc+3]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_jump_table_53658 + ((s1_ptr)_2)->base);
    _27399 = _pc_53649 + 3;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _27400 = (object)*(((s1_ptr)_2)->base + _27399);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_27400)){
        _27401 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27400)->dbl));
    }
    else{
        _27401 = (object)*(((s1_ptr)_2)->base + _27400);
    }
    _2 = (object)SEQ_PTR(_27401);
    _27402 = (object)*(((s1_ptr)_2)->base + 1);
    _27401 = NOVALUE;
    Ref(_27402);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27402;
    if( _1 != _27402 ){
        DeRef(_1);
    }
    _27402 = NOVALUE;
    _27397 = NOVALUE;

    /** inline.e:600		inline_code[pc+2] = value_table*/
    _27403 = _pc_53649 + 2;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27403);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _value_table_53651;
    DeRef(_1);

    /** inline.e:601		inline_code[pc+3] = jump_table*/
    _27404 = _pc_53649 + 3;
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68inline_code_52888 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27404);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _jump_table_53658;
    DeRef(_1);

    /** inline.e:603	end procedure*/
    _27400 = NOVALUE;
    _27394 = NOVALUE;
    _27393 = NOVALUE;
    _27404 = NOVALUE;
    _27399 = NOVALUE;
    _27403 = NOVALUE;
    return;
    ;
}


void _68fixup_special_op(object _pc_53688)
{
    object _op_53689 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_pc_53688)) {
        _1 = (object)(DBL_PTR(_pc_53688)->dbl);
        DeRefDS(_pc_53688);
        _pc_53688 = _1;
    }

    /** inline.e:606		integer op = inline_code[pc]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _op_53689 = (object)*(((s1_ptr)_2)->base + _pc_53688);
    if (!IS_ATOM_INT(_op_53689))
    _op_53689 = (object)DBL_PTR(_op_53689)->dbl;

    /** inline.e:607		switch op with fallthru do*/
    _0 = _op_53689;
    switch ( _0 ){ 

        /** inline.e:608			case SWITCH_RT then*/
        case 202:

        /** inline.e:609				fix_switch_rt( pc )*/
        _68fix_switch_rt(_pc_53688);

        /** inline.e:610				break*/
        goto L1; // [29] 32
    ;}L1: 

    /** inline.e:612	end procedure*/
    return;
    ;
}


object _68new_inline_var(object _ps_53700, object _reuse_53701)
{
    object _var_53703 = NOVALUE;
    object _vtype_53704 = NOVALUE;
    object _name_53705 = NOVALUE;
    object _s_53707 = NOVALUE;
    object _27467 = NOVALUE;
    object _27466 = NOVALUE;
    object _27464 = NOVALUE;
    object _27461 = NOVALUE;
    object _27460 = NOVALUE;
    object _27458 = NOVALUE;
    object _27455 = NOVALUE;
    object _27454 = NOVALUE;
    object _27453 = NOVALUE;
    object _27451 = NOVALUE;
    object _27446 = NOVALUE;
    object _27441 = NOVALUE;
    object _27440 = NOVALUE;
    object _27439 = NOVALUE;
    object _27438 = NOVALUE;
    object _27435 = NOVALUE;
    object _27433 = NOVALUE;
    object _27430 = NOVALUE;
    object _27425 = NOVALUE;
    object _27424 = NOVALUE;
    object _27423 = NOVALUE;
    object _27422 = NOVALUE;
    object _27421 = NOVALUE;
    object _27418 = NOVALUE;
    object _27417 = NOVALUE;
    object _27416 = NOVALUE;
    object _27415 = NOVALUE;
    object _27414 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_ps_53700)) {
        _1 = (object)(DBL_PTR(_ps_53700)->dbl);
        DeRefDS(_ps_53700);
        _ps_53700 = _1;
    }

    /** inline.e:622			var = 0, */
    _var_53703 = 0;

    /** inline.e:624		sequence name*/

    /** inline.e:627		if reuse then*/

    /** inline.e:631		if not var then*/

    /** inline.e:632			if ps > 0 then*/
    if (_ps_53700 <= 0)
    goto L1; // [45] 222

    /** inline.e:633				s = ps*/
    _s_53707 = _ps_53700;

    /** inline.e:634				if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L2; // [60] 102
    }
    else{
    }

    /** inline.e:635					name = sprintf( "%s_inlined_%s", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27414 = (object)*(((s1_ptr)_2)->base + _s_53707);
    _2 = (object)SEQ_PTR(_27414);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27415 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27415 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27414 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27416 = (object)*(((s1_ptr)_2)->base + _68inline_sub_52902);
    _2 = (object)SEQ_PTR(_27416);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27417 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27417 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27416 = NOVALUE;
    Ref(_27417);
    Ref(_27415);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27415;
    ((intptr_t *)_2)[2] = _27417;
    _27418 = MAKE_SEQ(_1);
    _27417 = NOVALUE;
    _27415 = NOVALUE;
    DeRefi(_name_53705);
    _name_53705 = EPrintf(-9999999, _27413, _27418);
    DeRefDS(_27418);
    _27418 = NOVALUE;
    goto L3; // [99] 139
L2: 

    /** inline.e:637					name = sprintf( "%s (from inlined routine '%s'", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27421 = (object)*(((s1_ptr)_2)->base + _s_53707);
    _2 = (object)SEQ_PTR(_27421);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27422 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27422 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27421 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27423 = (object)*(((s1_ptr)_2)->base + _68inline_sub_52902);
    _2 = (object)SEQ_PTR(_27423);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27424 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27424 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27423 = NOVALUE;
    Ref(_27424);
    Ref(_27422);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27422;
    ((intptr_t *)_2)[2] = _27424;
    _27425 = MAKE_SEQ(_1);
    _27424 = NOVALUE;
    _27422 = NOVALUE;
    DeRefi(_name_53705);
    _name_53705 = EPrintf(-9999999, _27420, _27425);
    DeRefDS(_27425);
    _27425 = NOVALUE;
L3: 

    /** inline.e:640				if reuse then*/
    if (_reuse_53701 == 0)
    {
        goto L4; // [141] 163
    }
    else{
    }

    /** inline.e:641					if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L5; // [148] 203

    /** inline.e:642						name &= ")"*/
    Concat((object_ptr)&_name_53705, _name_53705, _26190);
    goto L5; // [160] 203
L4: 

    /** inline.e:645					if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L6; // [167] 187
    }
    else{
    }

    /** inline.e:646						name &= sprintf( "_at_%d", inline_start)*/
    _27430 = EPrintf(-9999999, _27429, _68inline_start_52900);
    Concat((object_ptr)&_name_53705, _name_53705, _27430);
    DeRefDS(_27430);
    _27430 = NOVALUE;
    goto L7; // [184] 202
L6: 

    /** inline.e:648						name &= sprintf( " at %d)", inline_start)*/
    _27433 = EPrintf(-9999999, _27432, _68inline_start_52900);
    Concat((object_ptr)&_name_53705, _name_53705, _27433);
    DeRefDS(_27433);
    _27433 = NOVALUE;
L7: 
L5: 

    /** inline.e:652				vtype = SymTab[s][S_VTYPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27435 = (object)*(((s1_ptr)_2)->base + _s_53707);
    _2 = (object)SEQ_PTR(_27435);
    _vtype_53704 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_vtype_53704)){
        _vtype_53704 = (object)DBL_PTR(_vtype_53704)->dbl;
    }
    _27435 = NOVALUE;
    goto L8; // [219] 286
L1: 

    /** inline.e:654				name = sprintf( "%s_%d", {SymTab[inline_sub][S_NAME], -ps})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27438 = (object)*(((s1_ptr)_2)->base + _68inline_sub_52902);
    _2 = (object)SEQ_PTR(_27438);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27439 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27439 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27438 = NOVALUE;
    if ((uintptr_t)_ps_53700 == (uintptr_t)HIGH_BITS){
        _27440 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27440 = - _ps_53700;
    }
    Ref(_27439);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27439;
    ((intptr_t *)_2)[2] = _27440;
    _27441 = MAKE_SEQ(_1);
    _27440 = NOVALUE;
    _27439 = NOVALUE;
    DeRefi(_name_53705);
    _name_53705 = EPrintf(-9999999, _27437, _27441);
    DeRefDS(_27441);
    _27441 = NOVALUE;

    /** inline.e:655				if reuse then*/
    if (_reuse_53701 == 0)
    {
        goto L9; // [251] 263
    }
    else{
    }

    /** inline.e:656					name &= "__tmp"*/
    Concat((object_ptr)&_name_53705, _name_53705, _27443);
    goto LA; // [260] 276
L9: 

    /** inline.e:658					name &= sprintf( "__tmp_at%d", inline_start)*/
    _27446 = EPrintf(-9999999, _27445, _68inline_start_52900);
    Concat((object_ptr)&_name_53705, _name_53705, _27446);
    DeRefDS(_27446);
    _27446 = NOVALUE;
LA: 

    /** inline.e:660				vtype = object_type*/
    _vtype_53704 = _56object_type_46258;
L8: 

    /** inline.e:662			if CurrentSub = TopLevelSub then*/
    if (_39CurrentSub_16823 != _39TopLevelSub_16822)
    goto LB; // [292] 325

    /** inline.e:663				var = NewEntry( name, varnum, SC_LOCAL, VARIABLE, INLINE_HASHVAL, 0, vtype )*/
    RefDS(_name_53705);
    _var_53703 = _56NewEntry(_name_53705, _68varnum_52899, 5, -100, 2004, 0, _vtype_53704);
    if (!IS_ATOM_INT(_var_53703)) {
        _1 = (object)(DBL_PTR(_var_53703)->dbl);
        DeRefDS(_var_53703);
        _var_53703 = _1;
    }
    goto LC; // [322] 416
LB: 

    /** inline.e:666				var = NewBasicEntry( name, varnum, SC_PRIVATE, VARIABLE, INLINE_HASHVAL, 0, vtype )*/
    RefDS(_name_53705);
    _var_53703 = _56NewBasicEntry(_name_53705, _68varnum_52899, 3, -100, 2004, 0, _vtype_53704);
    if (!IS_ATOM_INT(_var_53703)) {
        _1 = (object)(DBL_PTR(_var_53703)->dbl);
        DeRefDS(_var_53703);
        _var_53703 = _1;
    }

    /** inline.e:667				SymTab[var][S_NEXT] = SymTab[last_param][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53703 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27453 = (object)*(((s1_ptr)_2)->base + _68last_param_52903);
    _2 = (object)SEQ_PTR(_27453);
    _27454 = (object)*(((s1_ptr)_2)->base + 2);
    _27453 = NOVALUE;
    Ref(_27454);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27454;
    if( _1 != _27454 ){
        DeRef(_1);
    }
    _27454 = NOVALUE;
    _27451 = NOVALUE;

    /** inline.e:668				SymTab[last_param][S_NEXT] = var*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_68last_param_52903 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _var_53703;
    DeRef(_1);
    _27455 = NOVALUE;

    /** inline.e:669				if last_param = last_sym then*/
    if (_68last_param_52903 != _56last_sym_46267)
    goto LD; // [403] 415

    /** inline.e:670					last_sym = var*/
    _56last_sym_46267 = _var_53703;
LD: 
LC: 

    /** inline.e:673			if deferred_inlining then*/
    if (_68deferred_inlining_52898 == 0)
    {
        goto LE; // [420] 451
    }
    else{
    }

    /** inline.e:674				SymTab[CurrentSub][S_STACK_SPACE] += 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530)){
        _27460 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    }
    else{
        _27460 = (object)*(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    }
    _27458 = NOVALUE;
    if (IS_ATOM_INT(_27460)) {
        _27461 = _27460 + 1;
        if (_27461 > MAXINT){
            _27461 = NewDouble((eudouble)_27461);
        }
    }
    else
    _27461 = binary_op(PLUS, 1, _27460);
    _27460 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27461;
    if( _1 != _27461 ){
        DeRef(_1);
    }
    _27461 = NOVALUE;
    _27458 = NOVALUE;
    goto LF; // [448] 471
LE: 

    /** inline.e:676				if param_num != -1 then*/
    if (_42param_num_54372 == -1)
    goto L10; // [455] 470

    /** inline.e:677					param_num += 1*/
    _42param_num_54372 = _42param_num_54372 + 1;
L10: 
LF: 

    /** inline.e:680			SymTab[var][S_USAGE] = U_USED*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53703 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _27464 = NOVALUE;

    /** inline.e:681			if reuse then*/
    if (_reuse_53701 == 0)
    {
        goto L11; // [490] 511
    }
    else{
    }

    /** inline.e:682				map:nested_put( inline_var_map, {CurrentSub, ps }, var )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _39CurrentSub_16823;
    ((intptr_t *)_2)[2] = _ps_53700;
    _27466 = MAKE_SEQ(_1);
    Ref(_68inline_var_map_52907);
    _30nested_put(_68inline_var_map_52907, _27466, _var_53703, 1, 0);
    _27466 = NOVALUE;
L11: 

    /** inline.e:686		Block_var( var )*/
    _66Block_var(_var_53703);

    /** inline.e:687		if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L12; // [521] 536
    }
    else{
    }

    /** inline.e:688			add_ref( {VARIABLE, var} )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _var_53703;
    _27467 = MAKE_SEQ(_1);
    _56add_ref(_27467);
    _27467 = NOVALUE;
L12: 

    /** inline.e:690		return var*/
    DeRefi(_name_53705);
    return _var_53703;
    ;
}


object _68get_inlined_code(object _sub_53837, object _start_53838, object _deferred_53839)
{
    object _is_proc_53840 = NOVALUE;
    object _backpatches_53858 = NOVALUE;
    object _prolog_53864 = NOVALUE;
    object _epilog_53865 = NOVALUE;
    object _s_53881 = NOVALUE;
    object _last_sym_53904 = NOVALUE;
    object _int_sym_53931 = NOVALUE;
    object _param_53939 = NOVALUE;
    object _ax_53942 = NOVALUE;
    object _var_53949 = NOVALUE;
    object _final_target_53964 = NOVALUE;
    object _var_53983 = NOVALUE;
    object _create_target_var_53996 = NOVALUE;
    object _check_pc_54019 = NOVALUE;
    object _op_54023 = NOVALUE;
    object _sym_54032 = NOVALUE;
    object _check_result_54037 = NOVALUE;
    object _inline_type_54115 = NOVALUE;
    object _replace_param_1__tmp_at1341_54126 = NOVALUE;
    object _27622 = NOVALUE;
    object _27621 = NOVALUE;
    object _27620 = NOVALUE;
    object _27619 = NOVALUE;
    object _27618 = NOVALUE;
    object _27617 = NOVALUE;
    object _27616 = NOVALUE;
    object _27615 = NOVALUE;
    object _27613 = NOVALUE;
    object _27610 = NOVALUE;
    object _27607 = NOVALUE;
    object _27606 = NOVALUE;
    object _27605 = NOVALUE;
    object _27604 = NOVALUE;
    object _27603 = NOVALUE;
    object _27602 = NOVALUE;
    object _27601 = NOVALUE;
    object _27600 = NOVALUE;
    object _27596 = NOVALUE;
    object _27595 = NOVALUE;
    object _27594 = NOVALUE;
    object _27593 = NOVALUE;
    object _27589 = NOVALUE;
    object _27588 = NOVALUE;
    object _27587 = NOVALUE;
    object _27586 = NOVALUE;
    object _27585 = NOVALUE;
    object _27584 = NOVALUE;
    object _27583 = NOVALUE;
    object _27581 = NOVALUE;
    object _27580 = NOVALUE;
    object _27579 = NOVALUE;
    object _27578 = NOVALUE;
    object _27577 = NOVALUE;
    object _27576 = NOVALUE;
    object _27575 = NOVALUE;
    object _27574 = NOVALUE;
    object _27573 = NOVALUE;
    object _27572 = NOVALUE;
    object _27571 = NOVALUE;
    object _27569 = NOVALUE;
    object _27567 = NOVALUE;
    object _27565 = NOVALUE;
    object _27564 = NOVALUE;
    object _27562 = NOVALUE;
    object _27561 = NOVALUE;
    object _27558 = NOVALUE;
    object _27557 = NOVALUE;
    object _27555 = NOVALUE;
    object _27553 = NOVALUE;
    object _27548 = NOVALUE;
    object _27544 = NOVALUE;
    object _27541 = NOVALUE;
    object _27537 = NOVALUE;
    object _27530 = NOVALUE;
    object _27529 = NOVALUE;
    object _27528 = NOVALUE;
    object _27527 = NOVALUE;
    object _27526 = NOVALUE;
    object _27525 = NOVALUE;
    object _27524 = NOVALUE;
    object _27522 = NOVALUE;
    object _27517 = NOVALUE;
    object _27514 = NOVALUE;
    object _27509 = NOVALUE;
    object _27508 = NOVALUE;
    object _27506 = NOVALUE;
    object _27505 = NOVALUE;
    object _27504 = NOVALUE;
    object _27501 = NOVALUE;
    object _27500 = NOVALUE;
    object _27499 = NOVALUE;
    object _27498 = NOVALUE;
    object _27497 = NOVALUE;
    object _27496 = NOVALUE;
    object _27495 = NOVALUE;
    object _27493 = NOVALUE;
    object _27492 = NOVALUE;
    object _27491 = NOVALUE;
    object _27489 = NOVALUE;
    object _27487 = NOVALUE;
    object _27486 = NOVALUE;
    object _27485 = NOVALUE;
    object _27484 = NOVALUE;
    object _27483 = NOVALUE;
    object _27482 = NOVALUE;
    object _27481 = NOVALUE;
    object _27478 = NOVALUE;
    object _27477 = NOVALUE;
    object _27475 = NOVALUE;
    object _27474 = NOVALUE;
    object _27472 = NOVALUE;
    object _27471 = NOVALUE;
    object _27469 = NOVALUE;
    object _27468 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_start_53838)) {
        _1 = (object)(DBL_PTR(_start_53838)->dbl);
        DeRefDS(_start_53838);
        _start_53838 = _1;
    }

    /** inline.e:694		integer is_proc = SymTab[sub][S_TOKEN] = PROC*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27468 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27468);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _27469 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _27469 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _27468 = NOVALUE;
    if (IS_ATOM_INT(_27469)) {
        _is_proc_53840 = (_27469 == 27);
    }
    else {
        _is_proc_53840 = binary_op(EQUALS, _27469, 27);
    }
    _27469 = NOVALUE;
    if (!IS_ATOM_INT(_is_proc_53840)) {
        _1 = (object)(DBL_PTR(_is_proc_53840)->dbl);
        DeRefDS(_is_proc_53840);
        _is_proc_53840 = _1;
    }

    /** inline.e:695		clear_inline_targets()*/
    _49clear_inline_targets();

    /** inline.e:697		inline_temps = {}*/
    RefDS(_21928);
    DeRef(_68inline_temps_52890);
    _68inline_temps_52890 = _21928;

    /** inline.e:698		inline_params = {}*/
    RefDS(_21928);
    DeRefi(_68inline_params_52893);
    _68inline_params_52893 = _21928;

    /** inline.e:699		assigned_params      = SymTab[sub][S_INLINE][1]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27471 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27471);
    _27472 = (object)*(((s1_ptr)_2)->base + 29);
    _27471 = NOVALUE;
    DeRef(_68assigned_params_52894);
    _2 = (object)SEQ_PTR(_27472);
    _68assigned_params_52894 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_68assigned_params_52894);
    _27472 = NOVALUE;

    /** inline.e:700		inline_code          = SymTab[sub][S_INLINE][2]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27474 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27474);
    _27475 = (object)*(((s1_ptr)_2)->base + 29);
    _27474 = NOVALUE;
    DeRef(_68inline_code_52888);
    _2 = (object)SEQ_PTR(_27475);
    _68inline_code_52888 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_68inline_code_52888);
    _27475 = NOVALUE;

    /** inline.e:701		sequence backpatches = SymTab[sub][S_INLINE][3]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27477 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27477);
    _27478 = (object)*(((s1_ptr)_2)->base + 29);
    _27477 = NOVALUE;
    DeRef(_backpatches_53858);
    _2 = (object)SEQ_PTR(_27478);
    _backpatches_53858 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_backpatches_53858);
    _27478 = NOVALUE;

    /** inline.e:703		passed_params = {}*/
    RefDS(_21928);
    DeRef(_68passed_params_52891);
    _68passed_params_52891 = _21928;

    /** inline.e:704		original_params = {}*/
    RefDS(_21928);
    DeRef(_68original_params_52892);
    _68original_params_52892 = _21928;

    /** inline.e:705		proc_vars = {}*/
    RefDS(_21928);
    DeRefi(_68proc_vars_52889);
    _68proc_vars_52889 = _21928;

    /** inline.e:706		sequence prolog = {}*/
    RefDS(_21928);
    DeRefi(_prolog_53864);
    _prolog_53864 = _21928;

    /** inline.e:707		sequence epilog = {}*/
    RefDS(_21928);
    DeRef(_epilog_53865);
    _epilog_53865 = _21928;

    /** inline.e:709		Start_block( EXIT_BLOCK, sprintf("Inline-%s from %s @ %d", */
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27481 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27481);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27482 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27482 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27481 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27483 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_27483);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27484 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27484 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27483 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27482);
    ((intptr_t*)_2)[1] = _27482;
    Ref(_27484);
    ((intptr_t*)_2)[2] = _27484;
    ((intptr_t*)_2)[3] = _start_53838;
    _27485 = MAKE_SEQ(_1);
    _27484 = NOVALUE;
    _27482 = NOVALUE;
    _27486 = EPrintf(-9999999, _27480, _27485);
    DeRefDS(_27485);
    _27485 = NOVALUE;
    _66Start_block(206, _27486);
    _27486 = NOVALUE;

    /** inline.e:712		symtab_index s = SymTab[sub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27487 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27487);
    _s_53881 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53881)){
        _s_53881 = (object)DBL_PTR(_s_53881)->dbl;
    }
    _27487 = NOVALUE;

    /** inline.e:714		varnum = SymTab[CurrentSub][S_NUM_ARGS]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27489 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_27489);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _68varnum_52899 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _68varnum_52899 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    if (!IS_ATOM_INT(_68varnum_52899)){
        _68varnum_52899 = (object)DBL_PTR(_68varnum_52899)->dbl;
    }
    _27489 = NOVALUE;

    /** inline.e:715		inline_start = start*/
    _68inline_start_52900 = _start_53838;

    /** inline.e:717		last_param = CurrentSub*/
    _68last_param_52903 = _39CurrentSub_16823;

    /** inline.e:718		for p = 1 to SymTab[CurrentSub][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27491 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_27491);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _27492 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _27492 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _27491 = NOVALUE;
    {
        object _p_53893;
        _p_53893 = 1;
L1: 
        if (binary_op_a(GREATER, _p_53893, _27492)){
            goto L2; // [250] 282
        }

        /** inline.e:719			last_param = SymTab[last_param][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27493 = (object)*(((s1_ptr)_2)->base + _68last_param_52903);
        _2 = (object)SEQ_PTR(_27493);
        _68last_param_52903 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_68last_param_52903)){
            _68last_param_52903 = (object)DBL_PTR(_68last_param_52903)->dbl;
        }
        _27493 = NOVALUE;

        /** inline.e:720		end for*/
        _0 = _p_53893;
        if (IS_ATOM_INT(_p_53893)) {
            _p_53893 = _p_53893 + 1;
            if ((object)((uintptr_t)_p_53893 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53893 = NewDouble((eudouble)_p_53893);
            }
        }
        else {
            _p_53893 = binary_op_a(PLUS, _p_53893, 1);
        }
        DeRef(_0);
        goto L1; // [277] 257
L2: 
        ;
        DeRef(_p_53893);
    }

    /** inline.e:722		symtab_index last_sym = last_param*/
    _last_sym_53904 = _68last_param_52903;

    /** inline.e:723		while last_sym and */
L3: 
    if (_last_sym_53904 == 0) {
        goto L4; // [296] 368
    }
    _27496 = _56sym_scope(_last_sym_53904);
    if (IS_ATOM_INT(_27496)) {
        _27497 = (_27496 <= 3);
    }
    else {
        _27497 = binary_op(LESSEQ, _27496, 3);
    }
    DeRef(_27496);
    _27496 = NOVALUE;
    if (IS_ATOM_INT(_27497)) {
        if (_27497 != 0) {
            DeRef(_27498);
            _27498 = 1;
            goto L5; // [310] 328
        }
    }
    else {
        if (DBL_PTR(_27497)->dbl != 0.0) {
            DeRef(_27498);
            _27498 = 1;
            goto L5; // [310] 328
        }
    }
    _27499 = _56sym_scope(_last_sym_53904);
    if (IS_ATOM_INT(_27499)) {
        _27500 = (_27499 == 9);
    }
    else {
        _27500 = binary_op(EQUALS, _27499, 9);
    }
    DeRef(_27499);
    _27499 = NOVALUE;
    DeRef(_27498);
    if (IS_ATOM_INT(_27500))
    _27498 = (_27500 != 0);
    else
    _27498 = DBL_PTR(_27500)->dbl != 0.0;
L5: 
    if (_27498 == 0)
    {
        _27498 = NOVALUE;
        goto L4; // [329] 368
    }
    else{
        _27498 = NOVALUE;
    }

    /** inline.e:725			last_param = last_sym*/
    _68last_param_52903 = _last_sym_53904;

    /** inline.e:726			last_sym = SymTab[last_sym][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27501 = (object)*(((s1_ptr)_2)->base + _last_sym_53904);
    _2 = (object)SEQ_PTR(_27501);
    _last_sym_53904 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_last_sym_53904)){
        _last_sym_53904 = (object)DBL_PTR(_last_sym_53904)->dbl;
    }
    _27501 = NOVALUE;

    /** inline.e:727			varnum += 1*/
    _68varnum_52899 = _68varnum_52899 + 1;

    /** inline.e:728		end while*/
    goto L3; // [365] 296
L4: 

    /** inline.e:729		for p = SymTab[sub][S_NUM_ARGS] to 1 by -1 do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27504 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27504);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _27505 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _27505 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _27504 = NOVALUE;
    {
        object _p_53922;
        Ref(_27505);
        _p_53922 = _27505;
L6: 
        if (binary_op_a(LESS, _p_53922, 1)){
            goto L7; // [382] 407
        }

        /** inline.e:730			passed_params = prepend( passed_params, Pop() )*/
        _27506 = _49Pop();
        Ref(_27506);
        Prepend(&_68passed_params_52891, _68passed_params_52891, _27506);
        DeRef(_27506);
        _27506 = NOVALUE;

        /** inline.e:731		end for*/
        _0 = _p_53922;
        if (IS_ATOM_INT(_p_53922)) {
            _p_53922 = _p_53922 + -1;
            if ((object)((uintptr_t)_p_53922 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53922 = NewDouble((eudouble)_p_53922);
            }
        }
        else {
            _p_53922 = binary_op_a(PLUS, _p_53922, -1);
        }
        DeRef(_0);
        goto L6; // [402] 389
L7: 
        ;
        DeRef(_p_53922);
    }

    /** inline.e:733		original_params = passed_params*/
    RefDS(_68passed_params_52891);
    DeRef(_68original_params_52892);
    _68original_params_52892 = _68passed_params_52891;

    /** inline.e:735		symtab_index int_sym = 0*/
    _int_sym_53931 = 0;

    /** inline.e:736		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27508 = (object)*(((s1_ptr)_2)->base + _sub_53837);
    _2 = (object)SEQ_PTR(_27508);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _27509 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _27509 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _27508 = NOVALUE;
    {
        object _p_53933;
        _p_53933 = 1;
L8: 
        if (binary_op_a(GREATER, _p_53933, _27509)){
            goto L9; // [437] 575
        }

        /** inline.e:737			symtab_index param = passed_params[p]*/
        _2 = (object)SEQ_PTR(_68passed_params_52891);
        if (!IS_ATOM_INT(_p_53933)){
            _param_53939 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_53933)->dbl));
        }
        else{
            _param_53939 = (object)*(((s1_ptr)_2)->base + _p_53933);
        }
        if (!IS_ATOM_INT(_param_53939)){
            _param_53939 = (object)DBL_PTR(_param_53939)->dbl;
        }

        /** inline.e:738			inline_params &= s*/
        Append(&_68inline_params_52893, _68inline_params_52893, _s_53881);

        /** inline.e:739			integer ax = find( p, assigned_params )*/
        _ax_53942 = find_from(_p_53933, _68assigned_params_52894, 1);

        /** inline.e:740			if ax or is_temp( param ) then*/
        if (_ax_53942 != 0) {
            goto LA; // [473] 486
        }
        _27514 = _68is_temp(_param_53939);
        if (_27514 == 0) {
            DeRef(_27514);
            _27514 = NOVALUE;
            goto LB; // [482] 548
        }
        else {
            if (!IS_ATOM_INT(_27514) && DBL_PTR(_27514)->dbl == 0.0){
                DeRef(_27514);
                _27514 = NOVALUE;
                goto LB; // [482] 548
            }
            DeRef(_27514);
            _27514 = NOVALUE;
        }
        DeRef(_27514);
        _27514 = NOVALUE;
LA: 

        /** inline.e:743				varnum += 1*/
        _68varnum_52899 = _68varnum_52899 + 1;

        /** inline.e:744				symtab_index var = new_inline_var( s, 0 )*/
        _var_53949 = _68new_inline_var(_s_53881, 0);
        if (!IS_ATOM_INT(_var_53949)) {
            _1 = (object)(DBL_PTR(_var_53949)->dbl);
            DeRefDS(_var_53949);
            _var_53949 = _1;
        }

        /** inline.e:745				prolog &= {ASSIGN, param, var}*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 18;
        ((intptr_t*)_2)[2] = _param_53939;
        ((intptr_t*)_2)[3] = _var_53949;
        _27517 = MAKE_SEQ(_1);
        Concat((object_ptr)&_prolog_53864, _prolog_53864, _27517);
        DeRefDS(_27517);
        _27517 = NOVALUE;

        /** inline.e:746				if not int_sym then*/
        if (_int_sym_53931 != 0)
        goto LC; // [519] 531

        /** inline.e:747					int_sym = NewIntSym( 0 )*/
        _int_sym_53931 = _56NewIntSym(0);
        if (!IS_ATOM_INT(_int_sym_53931)) {
            _1 = (object)(DBL_PTR(_int_sym_53931)->dbl);
            DeRefDS(_int_sym_53931);
            _int_sym_53931 = _1;
        }
LC: 

        /** inline.e:750				inline_start += 3*/
        _68inline_start_52900 = _68inline_start_52900 + 3;

        /** inline.e:751				passed_params[p] = var*/
        _2 = (object)SEQ_PTR(_68passed_params_52891);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _68passed_params_52891 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_p_53933))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_53933)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _p_53933);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _var_53949;
        DeRef(_1);
LB: 

        /** inline.e:753			s = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27522 = (object)*(((s1_ptr)_2)->base + _s_53881);
        _2 = (object)SEQ_PTR(_27522);
        _s_53881 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53881)){
            _s_53881 = (object)DBL_PTR(_s_53881)->dbl;
        }
        _27522 = NOVALUE;

        /** inline.e:755		end for*/
        _0 = _p_53933;
        if (IS_ATOM_INT(_p_53933)) {
            _p_53933 = _p_53933 + 1;
            if ((object)((uintptr_t)_p_53933 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53933 = NewDouble((eudouble)_p_53933);
            }
        }
        else {
            _p_53933 = binary_op_a(PLUS, _p_53933, 1);
        }
        DeRef(_0);
        goto L8; // [570] 444
L9: 
        ;
        DeRef(_p_53933);
    }

    /** inline.e:757		symtab_index final_target = 0*/
    _final_target_53964 = 0;

    /** inline.e:758		while s and */
LD: 
    if (_s_53881 == 0) {
        goto LE; // [587] 699
    }
    _27525 = _56sym_scope(_s_53881);
    if (IS_ATOM_INT(_27525)) {
        _27526 = (_27525 <= 3);
    }
    else {
        _27526 = binary_op(LESSEQ, _27525, 3);
    }
    DeRef(_27525);
    _27525 = NOVALUE;
    if (IS_ATOM_INT(_27526)) {
        if (_27526 != 0) {
            DeRef(_27527);
            _27527 = 1;
            goto LF; // [601] 619
        }
    }
    else {
        if (DBL_PTR(_27526)->dbl != 0.0) {
            DeRef(_27527);
            _27527 = 1;
            goto LF; // [601] 619
        }
    }
    _27528 = _56sym_scope(_s_53881);
    if (IS_ATOM_INT(_27528)) {
        _27529 = (_27528 == 9);
    }
    else {
        _27529 = binary_op(EQUALS, _27528, 9);
    }
    DeRef(_27528);
    _27528 = NOVALUE;
    DeRef(_27527);
    if (IS_ATOM_INT(_27529))
    _27527 = (_27529 != 0);
    else
    _27527 = DBL_PTR(_27529)->dbl != 0.0;
LF: 
    if (_27527 == 0)
    {
        _27527 = NOVALUE;
        goto LE; // [620] 699
    }
    else{
        _27527 = NOVALUE;
    }

    /** inline.e:760			if sym_scope( s ) != SC_UNDEFINED then*/
    _27530 = _56sym_scope(_s_53881);
    if (binary_op_a(EQUALS, _27530, 9)){
        DeRef(_27530);
        _27530 = NOVALUE;
        goto L10; // [631] 676
    }
    DeRef(_27530);
    _27530 = NOVALUE;

    /** inline.e:763				varnum += 1*/
    _68varnum_52899 = _68varnum_52899 + 1;

    /** inline.e:764				symtab_index var = new_inline_var( s, 0 )*/
    _var_53983 = _68new_inline_var(_s_53881, 0);
    if (!IS_ATOM_INT(_var_53983)) {
        _1 = (object)(DBL_PTR(_var_53983)->dbl);
        DeRefDS(_var_53983);
        _var_53983 = _1;
    }

    /** inline.e:765				proc_vars &= var*/
    Append(&_68proc_vars_52889, _68proc_vars_52889, _var_53983);

    /** inline.e:766				if int_sym = 0 then*/
    if (_int_sym_53931 != 0)
    goto L11; // [662] 675

    /** inline.e:767					int_sym = NewIntSym( 0 )*/
    _int_sym_53931 = _56NewIntSym(0);
    if (!IS_ATOM_INT(_int_sym_53931)) {
        _1 = (object)(DBL_PTR(_int_sym_53931)->dbl);
        DeRefDS(_int_sym_53931);
        _int_sym_53931 = _1;
    }
L11: 
L10: 

    /** inline.e:770			s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27537 = (object)*(((s1_ptr)_2)->base + _s_53881);
    _2 = (object)SEQ_PTR(_27537);
    _s_53881 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53881)){
        _s_53881 = (object)DBL_PTR(_s_53881)->dbl;
    }
    _27537 = NOVALUE;

    /** inline.e:771		end while*/
    goto LD; // [696] 587
LE: 

    /** inline.e:773		if not is_proc then*/
    if (_is_proc_53840 != 0)
    goto L12; // [701] 831

    /** inline.e:774			integer create_target_var = 1*/
    _create_target_var_53996 = 1;

    /** inline.e:775			if deferred then*/
    if (_deferred_53839 == 0)
    {
        goto L13; // [711] 751
    }
    else{
    }

    /** inline.e:776				inline_target = Pop()*/
    _0 = _49Pop();
    _68inline_target_52895 = _0;
    if (!IS_ATOM_INT(_68inline_target_52895)) {
        _1 = (object)(DBL_PTR(_68inline_target_52895)->dbl);
        DeRefDS(_68inline_target_52895);
        _68inline_target_52895 = _1;
    }

    /** inline.e:777				if is_temp( inline_target ) then*/
    _27541 = _68is_temp(_68inline_target_52895);
    if (_27541 == 0) {
        DeRef(_27541);
        _27541 = NOVALUE;
        goto L14; // [729] 744
    }
    else {
        if (!IS_ATOM_INT(_27541) && DBL_PTR(_27541)->dbl == 0.0){
            DeRef(_27541);
            _27541 = NOVALUE;
            goto L14; // [729] 744
        }
        DeRef(_27541);
        _27541 = NOVALUE;
    }
    DeRef(_27541);
    _27541 = NOVALUE;

    /** inline.e:778					final_target = inline_target*/
    _final_target_53964 = _68inline_target_52895;
    goto L15; // [741] 750
L14: 

    /** inline.e:780					create_target_var = 0*/
    _create_target_var_53996 = 0;
L15: 
L13: 

    /** inline.e:784			if create_target_var then*/
    if (_create_target_var_53996 == 0)
    {
        goto L16; // [753] 816
    }
    else{
    }

    /** inline.e:785				varnum += 1*/
    _68varnum_52899 = _68varnum_52899 + 1;

    /** inline.e:786				if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L17; // [768] 806
    }
    else{
    }

    /** inline.e:787					inline_target = new_inline_var( sub, 0 )*/
    _0 = _68new_inline_var(_sub_53837, 0);
    _68inline_target_52895 = _0;
    if (!IS_ATOM_INT(_68inline_target_52895)) {
        _1 = (object)(DBL_PTR(_68inline_target_52895)->dbl);
        DeRefDS(_68inline_target_52895);
        _68inline_target_52895 = _1;
    }

    /** inline.e:788					SymTab[inline_target][S_VTYPE] = object_type*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_68inline_target_52895 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _56object_type_46258;
    DeRef(_1);
    _27544 = NOVALUE;

    /** inline.e:789					Pop_block_var()*/
    _66Pop_block_var();
    goto L18; // [803] 815
L17: 

    /** inline.e:791					inline_target = NewTempSym()*/
    _0 = _56NewTempSym(0);
    _68inline_target_52895 = _0;
    if (!IS_ATOM_INT(_68inline_target_52895)) {
        _1 = (object)(DBL_PTR(_68inline_target_52895)->dbl);
        DeRefDS(_68inline_target_52895);
        _68inline_target_52895 = _1;
    }
L18: 
L16: 

    /** inline.e:794			proc_vars &= inline_target*/
    Append(&_68proc_vars_52889, _68proc_vars_52889, _68inline_target_52895);
    goto L19; // [828] 837
L12: 

    /** inline.e:796			inline_target = 0*/
    _68inline_target_52895 = 0;
L19: 

    /** inline.e:800		integer check_pc = 1*/
    _check_pc_54019 = 1;

    /** inline.e:802		while length(inline_code) > check_pc do*/
L1A: 
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27548 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27548 = 1;
    }
    if (_27548 <= _check_pc_54019)
    goto L1B; // [852] 1216

    /** inline.e:803			integer op = inline_code[check_pc]*/
    _2 = (object)SEQ_PTR(_68inline_code_52888);
    _op_54023 = (object)*(((s1_ptr)_2)->base + _check_pc_54019);
    if (!IS_ATOM_INT(_op_54023))
    _op_54023 = (object)DBL_PTR(_op_54023)->dbl;

    /** inline.e:805			switch op with fallthru do*/
    _0 = _op_54023;
    switch ( _0 ){ 

        /** inline.e:806				case ATOM_CHECK then*/
        case 101:
        case 97:
        case 96:

        /** inline.e:809					symtab_index sym = get_original_sym( check_pc + 1 )*/
        _27553 = _check_pc_54019 + 1;
        if (_27553 > MAXINT){
            _27553 = NewDouble((eudouble)_27553);
        }
        _sym_54032 = _68get_original_sym(_27553);
        _27553 = NOVALUE;
        if (!IS_ATOM_INT(_sym_54032)) {
            _1 = (object)(DBL_PTR(_sym_54032)->dbl);
            DeRefDS(_sym_54032);
            _sym_54032 = _1;
        }

        /** inline.e:810					if is_literal( sym ) then*/
        _27555 = _68is_literal(_sym_54032);
        if (_27555 == 0) {
            DeRef(_27555);
            _27555 = NOVALUE;
            goto L1C; // [897] 1010
        }
        else {
            if (!IS_ATOM_INT(_27555) && DBL_PTR(_27555)->dbl == 0.0){
                DeRef(_27555);
                _27555 = NOVALUE;
                goto L1C; // [897] 1010
            }
            DeRef(_27555);
            _27555 = NOVALUE;
        }
        DeRef(_27555);
        _27555 = NOVALUE;

        /** inline.e:811						integer check_result*/

        /** inline.e:813						if op = INTEGER_CHECK then*/
        if (_op_54023 != 96)
        goto L1D; // [906] 930

        /** inline.e:814							check_result = integer( SymTab[sym][S_OBJ] )*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27557 = (object)*(((s1_ptr)_2)->base + _sym_54032);
        _2 = (object)SEQ_PTR(_27557);
        _27558 = (object)*(((s1_ptr)_2)->base + 1);
        _27557 = NOVALUE;
        if (IS_ATOM_INT(_27558))
        _check_result_54037 = 1;
        else if (IS_ATOM_DBL(_27558))
        _check_result_54037 = IS_ATOM_INT(DoubleToInt(_27558));
        else
        _check_result_54037 = 0;
        _27558 = NOVALUE;
        goto L1E; // [927] 976
L1D: 

        /** inline.e:815						elsif op = SEQUENCE_CHECK then*/
        if (_op_54023 != 97)
        goto L1F; // [934] 958

        /** inline.e:816							check_result = sequence( SymTab[sym][S_OBJ] )*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27561 = (object)*(((s1_ptr)_2)->base + _sym_54032);
        _2 = (object)SEQ_PTR(_27561);
        _27562 = (object)*(((s1_ptr)_2)->base + 1);
        _27561 = NOVALUE;
        _check_result_54037 = IS_SEQUENCE(_27562);
        _27562 = NOVALUE;
        goto L1E; // [955] 976
L1F: 

        /** inline.e:818							check_result = atom( SymTab[sym][S_OBJ] )*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27564 = (object)*(((s1_ptr)_2)->base + _sym_54032);
        _2 = (object)SEQ_PTR(_27564);
        _27565 = (object)*(((s1_ptr)_2)->base + 1);
        _27564 = NOVALUE;
        _check_result_54037 = IS_ATOM(_27565);
        _27565 = NOVALUE;
L1E: 

        /** inline.e:821						if check_result then*/
        if (_check_result_54037 == 0)
        {
            goto L20; // [980] 997
        }
        else{
        }

        /** inline.e:822							replace_code( {}, check_pc, check_pc+1 )*/
        _27567 = _check_pc_54019 + 1;
        if (_27567 > MAXINT){
            _27567 = NewDouble((eudouble)_27567);
        }
        RefDS(_21928);
        _68replace_code(_21928, _check_pc_54019, _27567);
        _27567 = NOVALUE;
        goto L21; // [994] 1005
L20: 

        /** inline.e:826							CompileErr(146)*/
        RefDS(_21928);
        _52CompileErr(146, _21928, 0);
L21: 
        goto L22; // [1007] 1172
L1C: 

        /** inline.e:829					elsif not is_temp( sym ) then*/
        _27569 = _68is_temp(_sym_54032);
        if (IS_ATOM_INT(_27569)) {
            if (_27569 != 0){
                DeRef(_27569);
                _27569 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        else {
            if (DBL_PTR(_27569)->dbl != 0.0){
                DeRef(_27569);
                _27569 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        DeRef(_27569);
        _27569 = NOVALUE;

        /** inline.e:831						if (op = INTEGER_CHECK and SymTab[sym][S_VTYPE] = integer_type )*/
        _27571 = (_op_54023 == 96);
        if (_27571 == 0) {
            _27572 = 0;
            goto L24; // [1027] 1053
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27573 = (object)*(((s1_ptr)_2)->base + _sym_54032);
        _2 = (object)SEQ_PTR(_27573);
        _27574 = (object)*(((s1_ptr)_2)->base + 15);
        _27573 = NOVALUE;
        if (IS_ATOM_INT(_27574)) {
            _27575 = (_27574 == _56integer_type_46264);
        }
        else {
            _27575 = binary_op(EQUALS, _27574, _56integer_type_46264);
        }
        _27574 = NOVALUE;
        if (IS_ATOM_INT(_27575))
        _27572 = (_27575 != 0);
        else
        _27572 = DBL_PTR(_27575)->dbl != 0.0;
L24: 
        if (_27572 != 0) {
            _27576 = 1;
            goto L25; // [1053] 1093
        }
        _27577 = (_op_54023 == 97);
        if (_27577 == 0) {
            _27578 = 0;
            goto L26; // [1063] 1089
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27579 = (object)*(((s1_ptr)_2)->base + _sym_54032);
        _2 = (object)SEQ_PTR(_27579);
        _27580 = (object)*(((s1_ptr)_2)->base + 15);
        _27579 = NOVALUE;
        if (IS_ATOM_INT(_27580)) {
            _27581 = (_27580 == _56sequence_type_46262);
        }
        else {
            _27581 = binary_op(EQUALS, _27580, _56sequence_type_46262);
        }
        _27580 = NOVALUE;
        if (IS_ATOM_INT(_27581))
        _27578 = (_27581 != 0);
        else
        _27578 = DBL_PTR(_27581)->dbl != 0.0;
L26: 
        _27576 = (_27578 != 0);
L25: 
        if (_27576 != 0) {
            goto L27; // [1093] 1141
        }
        _27583 = (_op_54023 == 101);
        if (_27583 == 0) {
            DeRef(_27584);
            _27584 = 0;
            goto L28; // [1103] 1136
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27585 = (object)*(((s1_ptr)_2)->base + _sym_54032);
        _2 = (object)SEQ_PTR(_27585);
        _27586 = (object)*(((s1_ptr)_2)->base + 15);
        _27585 = NOVALUE;
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _56integer_type_46264;
        ((intptr_t *)_2)[2] = _56atom_type_46260;
        _27587 = MAKE_SEQ(_1);
        _27588 = find_from(_27586, _27587, 1);
        _27586 = NOVALUE;
        DeRefDS(_27587);
        _27587 = NOVALUE;
        _27584 = (_27588 != 0);
L28: 
        if (_27584 == 0)
        {
            _27584 = NOVALUE;
            goto L29; // [1137] 1155
        }
        else{
            _27584 = NOVALUE;
        }
L27: 

        /** inline.e:834							replace_code( {}, check_pc, check_pc+1 )*/
        _27589 = _check_pc_54019 + 1;
        if (_27589 > MAXINT){
            _27589 = NewDouble((eudouble)_27589);
        }
        RefDS(_21928);
        _68replace_code(_21928, _check_pc_54019, _27589);
        _27589 = NOVALUE;
        goto L22; // [1152] 1172
L29: 

        /** inline.e:837							check_pc += 2*/
        _check_pc_54019 = _check_pc_54019 + 2;
        goto L22; // [1162] 1172
L23: 

        /** inline.e:841						check_pc += 2*/
        _check_pc_54019 = _check_pc_54019 + 2;
L22: 

        /** inline.e:843					continue*/
        goto L1A; // [1178] 847

        /** inline.e:844				case STARTLINE then*/
        case 58:

        /** inline.e:845					check_pc += 2*/
        _check_pc_54019 = _check_pc_54019 + 2;

        /** inline.e:846					continue*/
        goto L1A; // [1196] 847

        /** inline.e:848				case else*/
        default:

        /** inline.e:849					exit*/
        goto L1B; // [1206] 1216
    ;}
    /** inline.e:851		end while*/
    goto L1A; // [1213] 847
L1B: 

    /** inline.e:853		for pc = 1 to length( inline_code ) do*/
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27593 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27593 = 1;
    }
    {
        object _pc_54110;
        _pc_54110 = 1;
L2A: 
        if (_pc_54110 > _27593){
            goto L2B; // [1223] 1420
        }

        /** inline.e:854			if sequence( inline_code[pc] ) then*/
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27594 = (object)*(((s1_ptr)_2)->base + _pc_54110);
        _27595 = IS_SEQUENCE(_27594);
        _27594 = NOVALUE;
        if (_27595 == 0)
        {
            _27595 = NOVALUE;
            goto L2C; // [1241] 1411
        }
        else{
            _27595 = NOVALUE;
        }

        /** inline.e:855				integer inline_type = inline_code[pc][1]*/
        _2 = (object)SEQ_PTR(_68inline_code_52888);
        _27596 = (object)*(((s1_ptr)_2)->base + _pc_54110);
        _2 = (object)SEQ_PTR(_27596);
        _inline_type_54115 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_inline_type_54115)){
            _inline_type_54115 = (object)DBL_PTR(_inline_type_54115)->dbl;
        }
        _27596 = NOVALUE;

        /** inline.e:856				switch inline_type do*/
        _0 = _inline_type_54115;
        switch ( _0 ){ 

            /** inline.e:857					case INLINE_SUB then*/
            case 5:

            /** inline.e:858						inline_code[pc] = CurrentSub*/
            _2 = (object)SEQ_PTR(_68inline_code_52888);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _68inline_code_52888 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54110);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _39CurrentSub_16823;
            DeRef(_1);
            goto L2D; // [1279] 1410

            /** inline.e:860					case INLINE_VAR then*/
            case 6:

            /** inline.e:861						replace_var( pc )*/
            _68replace_var(_pc_54110);

            /** inline.e:862						break*/
            goto L2D; // [1292] 1410
            goto L2D; // [1294] 1410

            /** inline.e:863					case INLINE_TEMP then*/
            case 2:

            /** inline.e:864						replace_temp( pc )*/
            _68replace_temp(_pc_54110);
            goto L2D; // [1305] 1410

            /** inline.e:866					case INLINE_PARAM then*/
            case 1:

            /** inline.e:867						replace_param( pc )*/

            /** inline.e:586		inline_code[pc] = get_param_sym( pc )*/
            _0 = _replace_param_1__tmp_at1341_54126;
            _replace_param_1__tmp_at1341_54126 = _68get_param_sym(_pc_54110);
            DeRef(_0);
            Ref(_replace_param_1__tmp_at1341_54126);
            _2 = (object)SEQ_PTR(_68inline_code_52888);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _68inline_code_52888 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54110);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _replace_param_1__tmp_at1341_54126;
            DeRef(_1);

            /** inline.e:587	end procedure*/
            goto L2E; // [1327] 1330
L2E: 
            DeRef(_replace_param_1__tmp_at1341_54126);
            _replace_param_1__tmp_at1341_54126 = NOVALUE;
            goto L2D; // [1332] 1410

            /** inline.e:869					case INLINE_ADDR then*/
            case 4:

            /** inline.e:870						inline_code[pc] = inline_start + inline_code[pc][2]*/
            _2 = (object)SEQ_PTR(_68inline_code_52888);
            _27600 = (object)*(((s1_ptr)_2)->base + _pc_54110);
            _2 = (object)SEQ_PTR(_27600);
            _27601 = (object)*(((s1_ptr)_2)->base + 2);
            _27600 = NOVALUE;
            if (IS_ATOM_INT(_27601)) {
                _27602 = _68inline_start_52900 + _27601;
                if ((object)((uintptr_t)_27602 + (uintptr_t)HIGH_BITS) >= 0){
                    _27602 = NewDouble((eudouble)_27602);
                }
            }
            else {
                _27602 = binary_op(PLUS, _68inline_start_52900, _27601);
            }
            _27601 = NOVALUE;
            _2 = (object)SEQ_PTR(_68inline_code_52888);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _68inline_code_52888 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54110);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _27602;
            if( _1 != _27602 ){
                DeRef(_1);
            }
            _27602 = NOVALUE;
            goto L2D; // [1362] 1410

            /** inline.e:872					case INLINE_TARGET then*/
            case 3:

            /** inline.e:873						inline_code[pc] = inline_target*/
            _2 = (object)SEQ_PTR(_68inline_code_52888);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _68inline_code_52888 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54110);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _68inline_target_52895;
            DeRef(_1);

            /** inline.e:874						add_inline_target( pc + inline_start )*/
            _27603 = _pc_54110 + _68inline_start_52900;
            if ((object)((uintptr_t)_27603 + (uintptr_t)HIGH_BITS) >= 0){
                _27603 = NewDouble((eudouble)_27603);
            }
            _49add_inline_target(_27603);
            _27603 = NOVALUE;

            /** inline.e:875						break*/
            goto L2D; // [1391] 1410
            goto L2D; // [1393] 1410

            /** inline.e:877					case else*/
            default:

            /** inline.e:878						InternalErr( 265, {inline_type} )*/
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t*)_2)[1] = _inline_type_54115;
            _27604 = MAKE_SEQ(_1);
            _52InternalErr(265, _27604);
            _27604 = NOVALUE;
        ;}L2D: 
L2C: 

        /** inline.e:881		end for*/
        _pc_54110 = _pc_54110 + 1;
        goto L2A; // [1415] 1230
L2B: 
        ;
    }

    /** inline.e:883		for i = 1 to length(backpatches) do*/
    if (IS_SEQUENCE(_backpatches_53858)){
            _27605 = SEQ_PTR(_backpatches_53858)->length;
    }
    else {
        _27605 = 1;
    }
    {
        object _i_54138;
        _i_54138 = 1;
L2F: 
        if (_i_54138 > _27605){
            goto L30; // [1425] 1448
        }

        /** inline.e:884			fixup_special_op( backpatches[i] )*/
        _2 = (object)SEQ_PTR(_backpatches_53858);
        _27606 = (object)*(((s1_ptr)_2)->base + _i_54138);
        Ref(_27606);
        _68fixup_special_op(_27606);
        _27606 = NOVALUE;

        /** inline.e:885		end for*/
        _i_54138 = _i_54138 + 1;
        goto L2F; // [1443] 1432
L30: 
        ;
    }

    /** inline.e:887		epilog &= End_inline_block( EXIT_BLOCK )*/
    _27607 = _66End_inline_block(206);
    if (IS_SEQUENCE(_epilog_53865) && IS_ATOM(_27607)) {
        Ref(_27607);
        Append(&_epilog_53865, _epilog_53865, _27607);
    }
    else if (IS_ATOM(_epilog_53865) && IS_SEQUENCE(_27607)) {
    }
    else {
        Concat((object_ptr)&_epilog_53865, _epilog_53865, _27607);
    }
    DeRef(_27607);
    _27607 = NOVALUE;

    /** inline.e:889		if is_proc then*/
    if (_is_proc_53840 == 0)
    {
        goto L31; // [1462] 1472
    }
    else{
    }

    /** inline.e:890			clear_op()*/
    _49clear_op();
    goto L32; // [1469] 1595
L31: 

    /** inline.e:892			if not deferred then*/
    if (_deferred_53839 != 0)
    goto L33; // [1474] 1489

    /** inline.e:893				Push( inline_target )*/
    _49Push(_68inline_target_52895);

    /** inline.e:894				inlined_function()*/
    _49inlined_function();
L33: 

    /** inline.e:897			if final_target then*/
    if (_final_target_53964 == 0)
    {
        goto L34; // [1491] 1521
    }
    else{
    }

    /** inline.e:898				epilog &= { ASSIGN, inline_target, final_target }*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _68inline_target_52895;
    ((intptr_t*)_2)[3] = _final_target_53964;
    _27610 = MAKE_SEQ(_1);
    Concat((object_ptr)&_epilog_53865, _epilog_53865, _27610);
    DeRefDS(_27610);
    _27610 = NOVALUE;

    /** inline.e:899				emit_temp( final_target, NEW_REFERENCE )*/
    _49emit_temp(_final_target_53964, 1);
    goto L35; // [1518] 1594
L34: 

    /** inline.e:905				emit_temp( inline_target, NEW_REFERENCE )*/
    _49emit_temp(_68inline_target_52895, 1);

    /** inline.e:906				if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L36; // [1535] 1593

    /** inline.e:907					epilog &= { ELSE, 0, PRIVATE_INIT_CHECK, inline_target }*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 23;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 30;
    ((intptr_t*)_2)[4] = _68inline_target_52895;
    _27613 = MAKE_SEQ(_1);
    Concat((object_ptr)&_epilog_53865, _epilog_53865, _27613);
    DeRefDS(_27613);
    _27613 = NOVALUE;

    /** inline.e:908					epilog[$-2] = length(inline_code) + length(epilog) + inline_start + 1*/
    if (IS_SEQUENCE(_epilog_53865)){
            _27615 = SEQ_PTR(_epilog_53865)->length;
    }
    else {
        _27615 = 1;
    }
    _27616 = _27615 - 2;
    _27615 = NOVALUE;
    if (IS_SEQUENCE(_68inline_code_52888)){
            _27617 = SEQ_PTR(_68inline_code_52888)->length;
    }
    else {
        _27617 = 1;
    }
    if (IS_SEQUENCE(_epilog_53865)){
            _27618 = SEQ_PTR(_epilog_53865)->length;
    }
    else {
        _27618 = 1;
    }
    _27619 = _27617 + _27618;
    if ((object)((uintptr_t)_27619 + (uintptr_t)HIGH_BITS) >= 0){
        _27619 = NewDouble((eudouble)_27619);
    }
    _27617 = NOVALUE;
    _27618 = NOVALUE;
    if (IS_ATOM_INT(_27619)) {
        _27620 = _27619 + _68inline_start_52900;
        if ((object)((uintptr_t)_27620 + (uintptr_t)HIGH_BITS) >= 0){
            _27620 = NewDouble((eudouble)_27620);
        }
    }
    else {
        _27620 = NewDouble(DBL_PTR(_27619)->dbl + (eudouble)_68inline_start_52900);
    }
    DeRef(_27619);
    _27619 = NOVALUE;
    if (IS_ATOM_INT(_27620)) {
        _27621 = _27620 + 1;
        if (_27621 > MAXINT){
            _27621 = NewDouble((eudouble)_27621);
        }
    }
    else
    _27621 = binary_op(PLUS, 1, _27620);
    DeRef(_27620);
    _27620 = NOVALUE;
    _2 = (object)SEQ_PTR(_epilog_53865);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _epilog_53865 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27616);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27621;
    if( _1 != _27621 ){
        DeRef(_1);
    }
    _27621 = NOVALUE;
L36: 
L35: 
L32: 

    /** inline.e:914		return prolog & inline_code & epilog*/
    {
        object concat_list[3];

        concat_list[0] = _epilog_53865;
        concat_list[1] = _68inline_code_52888;
        concat_list[2] = _prolog_53864;
        Concat_N((object_ptr)&_27622, concat_list, 3);
    }
    DeRef(_backpatches_53858);
    DeRefDSi(_prolog_53864);
    DeRefDS(_epilog_53865);
    _27492 = NOVALUE;
    DeRef(_27616);
    _27616 = NOVALUE;
    DeRef(_27583);
    _27583 = NOVALUE;
    DeRef(_27575);
    _27575 = NOVALUE;
    _27505 = NOVALUE;
    DeRef(_27529);
    _27529 = NOVALUE;
    DeRef(_27526);
    _27526 = NOVALUE;
    DeRef(_27577);
    _27577 = NOVALUE;
    _27509 = NOVALUE;
    DeRef(_27500);
    _27500 = NOVALUE;
    DeRef(_27497);
    _27497 = NOVALUE;
    DeRef(_27581);
    _27581 = NOVALUE;
    DeRef(_27571);
    _27571 = NOVALUE;
    return _27622;
    ;
}


void _68defer_call()
{
    object _defer_54178 = NOVALUE;
    object _27625 = NOVALUE;
    object _27624 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:918		integer defer = find( inline_sub, deferred_inline_decisions )*/
    _defer_54178 = find_from(_68inline_sub_52902, _68deferred_inline_decisions_52904, 1);

    /** inline.e:919		if defer then*/
    if (_defer_54178 == 0)
    {
        goto L1; // [14] 36
    }
    else{
    }

    /** inline.e:921			deferred_inline_calls[defer] &= CurrentSub*/
    _2 = (object)SEQ_PTR(_68deferred_inline_calls_52905);
    _27624 = (object)*(((s1_ptr)_2)->base + _defer_54178);
    if (IS_SEQUENCE(_27624) && IS_ATOM(_39CurrentSub_16823)) {
        Append(&_27625, _27624, _39CurrentSub_16823);
    }
    else if (IS_ATOM(_27624) && IS_SEQUENCE(_39CurrentSub_16823)) {
    }
    else {
        Concat((object_ptr)&_27625, _27624, _39CurrentSub_16823);
        _27624 = NOVALUE;
    }
    _27624 = NOVALUE;
    _2 = (object)SEQ_PTR(_68deferred_inline_calls_52905);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _68deferred_inline_calls_52905 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _defer_54178);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27625;
    if( _1 != _27625 ){
        DeRef(_1);
    }
    _27625 = NOVALUE;
L1: 

    /** inline.e:923	end procedure*/
    return;
    ;
}


void _68emit_or_inline()
{
    object _sub_54187 = NOVALUE;
    object _code_54218 = NOVALUE;
    object _27637 = NOVALUE;
    object _27636 = NOVALUE;
    object _27634 = NOVALUE;
    object _27633 = NOVALUE;
    object _27632 = NOVALUE;
    object _27630 = NOVALUE;
    object _27629 = NOVALUE;
    object _27628 = NOVALUE;
    object _27627 = NOVALUE;
    object _27626 = NOVALUE;
    object _0, _1, _2;
    

    /** inline.e:928		symtab_index sub = op_info1*/
    _sub_54187 = _49op_info1_50372;

    /** inline.e:929		inline_sub = sub*/
    _68inline_sub_52902 = _sub_54187;

    /** inline.e:931		if SymTab[sub][S_DEPRECATED] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27626 = (object)*(((s1_ptr)_2)->base + _sub_54187);
    _2 = (object)SEQ_PTR(_27626);
    _27627 = (object)*(((s1_ptr)_2)->base + 30);
    _27626 = NOVALUE;
    if (_27627 == 0) {
        _27627 = NOVALUE;
        goto L1; // [31] 60
    }
    else {
        if (!IS_ATOM_INT(_27627) && DBL_PTR(_27627)->dbl == 0.0){
            _27627 = NOVALUE;
            goto L1; // [31] 60
        }
        _27627 = NOVALUE;
    }
    _27627 = NOVALUE;

    /** inline.e:932			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27628 = (object)*(((s1_ptr)_2)->base + _sub_54187);
    _2 = (object)SEQ_PTR(_27628);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _27629 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _27629 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _27628 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27629);
    ((intptr_t*)_2)[1] = _27629;
    _27630 = MAKE_SEQ(_1);
    _27629 = NOVALUE;
    _52Warning(327, 16384, _27630);
    _27630 = NOVALUE;
L1: 

    /** inline.e:935		if Parser_mode != PAM_NORMAL then*/
    if (_39Parser_mode_16920 == 0)
    goto L2; // [66] 85

    /** inline.e:938			emit_op( PROC )*/
    _49emit_op(27);

    /** inline.e:939			return*/
    DeRef(_code_54218);
    return;
    goto L3; // [82] 133
L2: 

    /** inline.e:941		elsif atom( SymTab[sub][S_INLINE] ) or has_forward_params(sub) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27632 = (object)*(((s1_ptr)_2)->base + _sub_54187);
    _2 = (object)SEQ_PTR(_27632);
    _27633 = (object)*(((s1_ptr)_2)->base + 29);
    _27632 = NOVALUE;
    _27634 = IS_ATOM(_27633);
    _27633 = NOVALUE;
    if (_27634 != 0) {
        goto L4; // [102] 115
    }
    _27636 = _49has_forward_params(_sub_54187);
    if (_27636 == 0) {
        DeRef(_27636);
        _27636 = NOVALUE;
        goto L5; // [111] 132
    }
    else {
        if (!IS_ATOM_INT(_27636) && DBL_PTR(_27636)->dbl == 0.0){
            DeRef(_27636);
            _27636 = NOVALUE;
            goto L5; // [111] 132
        }
        DeRef(_27636);
        _27636 = NOVALUE;
    }
    DeRef(_27636);
    _27636 = NOVALUE;
L4: 

    /** inline.e:942			defer_call()*/
    _68defer_call();

    /** inline.e:943			emit_op( PROC )*/
    _49emit_op(27);

    /** inline.e:944			return*/
    DeRef(_code_54218);
    return;
L5: 
L3: 

    /** inline.e:947		sequence code = get_inlined_code( sub, length(Code) )*/
    if (IS_SEQUENCE(_39Code_16903)){
            _27637 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _27637 = 1;
    }
    _0 = _code_54218;
    _code_54218 = _68get_inlined_code(_sub_54187, _27637, 0);
    DeRef(_0);
    _27637 = NOVALUE;

    /** inline.e:948		emit_inline( code )*/
    RefDS(_code_54218);
    _49emit_inline(_code_54218);

    /** inline.e:949		clear_last()*/
    _49clear_last();

    /** inline.e:951	end procedure*/
    DeRefDS(_code_54218);
    return;
    ;
}


void _68inline_deferred_calls()
{
    object _sub_54232 = NOVALUE;
    object _ix_54244 = NOVALUE;
    object _calling_sub_54246 = NOVALUE;
    object _code_54268 = NOVALUE;
    object _calls_54269 = NOVALUE;
    object _is_func_54273 = NOVALUE;
    object _offset_54280 = NOVALUE;
    object _op_54291 = NOVALUE;
    object _size_54294 = NOVALUE;
    object _27699 = NOVALUE;
    object _27697 = NOVALUE;
    object _27695 = NOVALUE;
    object _27694 = NOVALUE;
    object _27693 = NOVALUE;
    object _27691 = NOVALUE;
    object _27690 = NOVALUE;
    object _27689 = NOVALUE;
    object _27688 = NOVALUE;
    object _27687 = NOVALUE;
    object _27686 = NOVALUE;
    object _27685 = NOVALUE;
    object _27684 = NOVALUE;
    object _27683 = NOVALUE;
    object _27682 = NOVALUE;
    object _27680 = NOVALUE;
    object _27679 = NOVALUE;
    object _27678 = NOVALUE;
    object _27677 = NOVALUE;
    object _27675 = NOVALUE;
    object _27674 = NOVALUE;
    object _27673 = NOVALUE;
    object _27671 = NOVALUE;
    object _27669 = NOVALUE;
    object _27667 = NOVALUE;
    object _27665 = NOVALUE;
    object _27664 = NOVALUE;
    object _27663 = NOVALUE;
    object _27662 = NOVALUE;
    object _27660 = NOVALUE;
    object _27659 = NOVALUE;
    object _27656 = NOVALUE;
    object _27654 = NOVALUE;
    object _27652 = NOVALUE;
    object _27650 = NOVALUE;
    object _27648 = NOVALUE;
    object _27647 = NOVALUE;
    object _27646 = NOVALUE;
    object _27645 = NOVALUE;
    object _27644 = NOVALUE;
    object _27643 = NOVALUE;
    object _27641 = NOVALUE;
    object _27640 = NOVALUE;
    object _27639 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** inline.e:957		deferred_inlining = 1*/
    _68deferred_inlining_52898 = 1;

    /** inline.e:958		for i = 1 to length( deferred_inline_decisions ) do*/
    if (IS_SEQUENCE(_68deferred_inline_decisions_52904)){
            _27639 = SEQ_PTR(_68deferred_inline_decisions_52904)->length;
    }
    else {
        _27639 = 1;
    }
    {
        object _i_54227;
        _i_54227 = 1;
L1: 
        if (_i_54227 > _27639){
            goto L2; // [13] 506
        }

        /** inline.e:960			if length( deferred_inline_calls[i] ) then*/
        _2 = (object)SEQ_PTR(_68deferred_inline_calls_52905);
        _27640 = (object)*(((s1_ptr)_2)->base + _i_54227);
        if (IS_SEQUENCE(_27640)){
                _27641 = SEQ_PTR(_27640)->length;
        }
        else {
            _27641 = 1;
        }
        _27640 = NOVALUE;
        if (_27641 == 0)
        {
            _27641 = NOVALUE;
            goto L3; // [31] 497
        }
        else{
            _27641 = NOVALUE;
        }

        /** inline.e:962				integer sub = deferred_inline_decisions[i]*/
        _2 = (object)SEQ_PTR(_68deferred_inline_decisions_52904);
        _sub_54232 = (object)*(((s1_ptr)_2)->base + _i_54227);

        /** inline.e:963				check_inline( sub )*/
        _68check_inline(_sub_54232);

        /** inline.e:964				if atom( SymTab[sub][S_INLINE] ) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _27643 = (object)*(((s1_ptr)_2)->base + _sub_54232);
        _2 = (object)SEQ_PTR(_27643);
        _27644 = (object)*(((s1_ptr)_2)->base + 29);
        _27643 = NOVALUE;
        _27645 = IS_ATOM(_27644);
        _27644 = NOVALUE;
        if (_27645 == 0)
        {
            _27645 = NOVALUE;
            goto L4; // [64] 74
        }
        else{
            _27645 = NOVALUE;
        }

        /** inline.e:965					continue*/
        goto L5; // [71] 501
L4: 

        /** inline.e:967				for cx = 1 to length( deferred_inline_calls[i] ) do*/
        _2 = (object)SEQ_PTR(_68deferred_inline_calls_52905);
        _27646 = (object)*(((s1_ptr)_2)->base + _i_54227);
        if (IS_SEQUENCE(_27646)){
                _27647 = SEQ_PTR(_27646)->length;
        }
        else {
            _27647 = 1;
        }
        _27646 = NOVALUE;
        {
            object _cx_54241;
            _cx_54241 = 1;
L6: 
            if (_cx_54241 > _27647){
                goto L7; // [85] 496
            }

            /** inline.e:968					integer ix = 1*/
            _ix_54244 = 1;

            /** inline.e:969					symtab_index calling_sub = deferred_inline_calls[i][cx]*/
            _2 = (object)SEQ_PTR(_68deferred_inline_calls_52905);
            _27648 = (object)*(((s1_ptr)_2)->base + _i_54227);
            _2 = (object)SEQ_PTR(_27648);
            _calling_sub_54246 = (object)*(((s1_ptr)_2)->base + _cx_54241);
            if (!IS_ATOM_INT(_calling_sub_54246)){
                _calling_sub_54246 = (object)DBL_PTR(_calling_sub_54246)->dbl;
            }
            _27648 = NOVALUE;

            /** inline.e:970					CurrentSub = calling_sub*/
            _39CurrentSub_16823 = _calling_sub_54246;

            /** inline.e:971					Code = SymTab[calling_sub][S_CODE]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _27650 = (object)*(((s1_ptr)_2)->base + _calling_sub_54246);
            DeRef(_39Code_16903);
            _2 = (object)SEQ_PTR(_27650);
            if (!IS_ATOM_INT(_39S_CODE_16482)){
                _39Code_16903 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
            }
            else{
                _39Code_16903 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
            }
            Ref(_39Code_16903);
            _27650 = NOVALUE;

            /** inline.e:972					LineTable = SymTab[calling_sub][S_LINETAB]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _27652 = (object)*(((s1_ptr)_2)->base + _calling_sub_54246);
            DeRef(_39LineTable_16904);
            _2 = (object)SEQ_PTR(_27652);
            if (!IS_ATOM_INT(_39S_LINETAB_16505)){
                _39LineTable_16904 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
            }
            else{
                _39LineTable_16904 = (object)*(((s1_ptr)_2)->base + _39S_LINETAB_16505);
            }
            Ref(_39LineTable_16904);
            _27652 = NOVALUE;

            /** inline.e:973					SymTab[calling_sub][S_CODE] = 0*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54246 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_39S_CODE_16482))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 0;
            DeRef(_1);
            _27654 = NOVALUE;

            /** inline.e:974					SymTab[calling_sub][S_LINETAB] = 0*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54246 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_39S_LINETAB_16505))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 0;
            DeRef(_1);
            _27656 = NOVALUE;

            /** inline.e:975					sequence code = {}*/
            RefDS(_21928);
            DeRef(_code_54268);
            _code_54268 = _21928;

            /** inline.e:977					sequence calls = find_ops( 1, PROC )*/
            RefDS(_39Code_16903);
            _0 = _calls_54269;
            _calls_54269 = _67find_ops(1, 27, _39Code_16903);
            DeRef(_0);

            /** inline.e:978					integer is_func = SymTab[sub][S_TOKEN] != PROC */
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _27659 = (object)*(((s1_ptr)_2)->base + _sub_54232);
            _2 = (object)SEQ_PTR(_27659);
            if (!IS_ATOM_INT(_39S_TOKEN_16475)){
                _27660 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
            }
            else{
                _27660 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
            }
            _27659 = NOVALUE;
            if (IS_ATOM_INT(_27660)) {
                _is_func_54273 = (_27660 != 27);
            }
            else {
                _is_func_54273 = binary_op(NOTEQ, _27660, 27);
            }
            _27660 = NOVALUE;
            if (!IS_ATOM_INT(_is_func_54273)) {
                _1 = (object)(DBL_PTR(_is_func_54273)->dbl);
                DeRefDS(_is_func_54273);
                _is_func_54273 = _1;
            }

            /** inline.e:979					integer offset = 0*/
            _offset_54280 = 0;

            /** inline.e:980					for o = 1 to length( calls ) do*/
            if (IS_SEQUENCE(_calls_54269)){
                    _27662 = SEQ_PTR(_calls_54269)->length;
            }
            else {
                _27662 = 1;
            }
            {
                object _o_54282;
                _o_54282 = 1;
L8: 
                if (_o_54282 > _27662){
                    goto L9; // [233] 453
                }

                /** inline.e:981						if calls[o][2][2] = sub then*/
                _2 = (object)SEQ_PTR(_calls_54269);
                _27663 = (object)*(((s1_ptr)_2)->base + _o_54282);
                _2 = (object)SEQ_PTR(_27663);
                _27664 = (object)*(((s1_ptr)_2)->base + 2);
                _27663 = NOVALUE;
                _2 = (object)SEQ_PTR(_27664);
                _27665 = (object)*(((s1_ptr)_2)->base + 2);
                _27664 = NOVALUE;
                if (binary_op_a(NOTEQ, _27665, _sub_54232)){
                    _27665 = NOVALUE;
                    goto LA; // [254] 444
                }
                _27665 = NOVALUE;

                /** inline.e:982							ix = calls[o][1]*/
                _2 = (object)SEQ_PTR(_calls_54269);
                _27667 = (object)*(((s1_ptr)_2)->base + _o_54282);
                _2 = (object)SEQ_PTR(_27667);
                _ix_54244 = (object)*(((s1_ptr)_2)->base + 1);
                if (!IS_ATOM_INT(_ix_54244)){
                    _ix_54244 = (object)DBL_PTR(_ix_54244)->dbl;
                }
                _27667 = NOVALUE;

                /** inline.e:983							sequence op = calls[o][2]*/
                _2 = (object)SEQ_PTR(_calls_54269);
                _27669 = (object)*(((s1_ptr)_2)->base + _o_54282);
                DeRef(_op_54291);
                _2 = (object)SEQ_PTR(_27669);
                _op_54291 = (object)*(((s1_ptr)_2)->base + 2);
                Ref(_op_54291);
                _27669 = NOVALUE;

                /** inline.e:984							integer size = length( op ) - 1*/
                if (IS_SEQUENCE(_op_54291)){
                        _27671 = SEQ_PTR(_op_54291)->length;
                }
                else {
                    _27671 = 1;
                }
                _size_54294 = _27671 - 1;
                _27671 = NOVALUE;

                /** inline.e:985							if is_func then*/
                if (_is_func_54273 == 0)
                {
                    goto LB; // [293] 319
                }
                else{
                }

                /** inline.e:987								Push( op[$] )*/
                if (IS_SEQUENCE(_op_54291)){
                        _27673 = SEQ_PTR(_op_54291)->length;
                }
                else {
                    _27673 = 1;
                }
                _2 = (object)SEQ_PTR(_op_54291);
                _27674 = (object)*(((s1_ptr)_2)->base + _27673);
                Ref(_27674);
                _49Push(_27674);
                _27674 = NOVALUE;

                /** inline.e:988								op = remove( op, length(op) )*/
                if (IS_SEQUENCE(_op_54291)){
                        _27675 = SEQ_PTR(_op_54291)->length;
                }
                else {
                    _27675 = 1;
                }
                {
                    s1_ptr assign_space = SEQ_PTR(_op_54291);
                    int len = assign_space->length;
                    int start = (IS_ATOM_INT(_27675)) ? _27675 : (object)(DBL_PTR(_27675)->dbl);
                    int stop = (IS_ATOM_INT(_27675)) ? _27675 : (object)(DBL_PTR(_27675)->dbl);
                    if (stop > len){
                        stop = len;
                    }
                    if (start > len || start > stop || stop<0) {
                    }
                    else if (start < 2) {
                        if (stop >= len) {
                            Head( SEQ_PTR(_op_54291), start, &_op_54291 );
                        }
                        else Tail(SEQ_PTR(_op_54291), stop+1, &_op_54291);
                    }
                    else if (stop >= len){
                        Head(SEQ_PTR(_op_54291), start, &_op_54291);
                    }
                    else {
                        assign_slice_seq = &assign_space;
                        _op_54291 = Remove_elements(start, stop, (SEQ_PTR(_op_54291)->ref == 1));
                    }
                }
                _27675 = NOVALUE;
                _27675 = NOVALUE;
LB: 

                /** inline.e:992							for p = 3 to length( op ) do*/
                if (IS_SEQUENCE(_op_54291)){
                        _27677 = SEQ_PTR(_op_54291)->length;
                }
                else {
                    _27677 = 1;
                }
                {
                    object _p_54304;
                    _p_54304 = 3;
LC: 
                    if (_p_54304 > _27677){
                        goto LD; // [324] 347
                    }

                    /** inline.e:993								Push( op[p] )*/
                    _2 = (object)SEQ_PTR(_op_54291);
                    _27678 = (object)*(((s1_ptr)_2)->base + _p_54304);
                    Ref(_27678);
                    _49Push(_27678);
                    _27678 = NOVALUE;

                    /** inline.e:994							end for*/
                    _p_54304 = _p_54304 + 1;
                    goto LC; // [342] 331
LD: 
                    ;
                }

                /** inline.e:995							code = get_inlined_code( sub, ix + offset - 1, 1 )*/
                _27679 = _ix_54244 + _offset_54280;
                if ((object)((uintptr_t)_27679 + (uintptr_t)HIGH_BITS) >= 0){
                    _27679 = NewDouble((eudouble)_27679);
                }
                if (IS_ATOM_INT(_27679)) {
                    _27680 = _27679 - 1;
                    if ((object)((uintptr_t)_27680 +(uintptr_t) HIGH_BITS) >= 0){
                        _27680 = NewDouble((eudouble)_27680);
                    }
                }
                else {
                    _27680 = NewDouble(DBL_PTR(_27679)->dbl - (eudouble)1);
                }
                DeRef(_27679);
                _27679 = NOVALUE;
                _0 = _code_54268;
                _code_54268 = _68get_inlined_code(_sub_54232, _27680, 1);
                DeRef(_0);
                _27680 = NOVALUE;

                /** inline.e:996							shift:replace_code( repeat( NOP1, length(code) ), ix + offset, ix + offset + size )*/
                if (IS_SEQUENCE(_code_54268)){
                        _27682 = SEQ_PTR(_code_54268)->length;
                }
                else {
                    _27682 = 1;
                }
                _27683 = Repeat(159, _27682);
                _27682 = NOVALUE;
                _27684 = _ix_54244 + _offset_54280;
                if ((object)((uintptr_t)_27684 + (uintptr_t)HIGH_BITS) >= 0){
                    _27684 = NewDouble((eudouble)_27684);
                }
                _27685 = _ix_54244 + _offset_54280;
                if ((object)((uintptr_t)_27685 + (uintptr_t)HIGH_BITS) >= 0){
                    _27685 = NewDouble((eudouble)_27685);
                }
                if (IS_ATOM_INT(_27685)) {
                    _27686 = _27685 + _size_54294;
                    if ((object)((uintptr_t)_27686 + (uintptr_t)HIGH_BITS) >= 0){
                        _27686 = NewDouble((eudouble)_27686);
                    }
                }
                else {
                    _27686 = NewDouble(DBL_PTR(_27685)->dbl + (eudouble)_size_54294);
                }
                DeRef(_27685);
                _27685 = NOVALUE;
                _67replace_code(_27683, _27684, _27686);
                _27683 = NOVALUE;
                _27684 = NOVALUE;
                _27686 = NOVALUE;

                /** inline.e:999							Code = eu:replace( Code, code, ix + offset, ix + offset + length( code ) -1 )*/
                _27687 = _ix_54244 + _offset_54280;
                if ((object)((uintptr_t)_27687 + (uintptr_t)HIGH_BITS) >= 0){
                    _27687 = NewDouble((eudouble)_27687);
                }
                _27688 = _ix_54244 + _offset_54280;
                if ((object)((uintptr_t)_27688 + (uintptr_t)HIGH_BITS) >= 0){
                    _27688 = NewDouble((eudouble)_27688);
                }
                if (IS_SEQUENCE(_code_54268)){
                        _27689 = SEQ_PTR(_code_54268)->length;
                }
                else {
                    _27689 = 1;
                }
                if (IS_ATOM_INT(_27688)) {
                    _27690 = _27688 + _27689;
                    if ((object)((uintptr_t)_27690 + (uintptr_t)HIGH_BITS) >= 0){
                        _27690 = NewDouble((eudouble)_27690);
                    }
                }
                else {
                    _27690 = NewDouble(DBL_PTR(_27688)->dbl + (eudouble)_27689);
                }
                DeRef(_27688);
                _27688 = NOVALUE;
                _27689 = NOVALUE;
                if (IS_ATOM_INT(_27690)) {
                    _27691 = _27690 - 1;
                    if ((object)((uintptr_t)_27691 +(uintptr_t) HIGH_BITS) >= 0){
                        _27691 = NewDouble((eudouble)_27691);
                    }
                }
                else {
                    _27691 = NewDouble(DBL_PTR(_27690)->dbl - (eudouble)1);
                }
                DeRef(_27690);
                _27690 = NOVALUE;
                {
                    intptr_t p1 = _39Code_16903;
                    intptr_t p2 = _code_54268;
                    intptr_t p3 = _27687;
                    intptr_t p4 = _27691;
                    struct replace_block replace_params;
                    replace_params.copy_to   = &p1;
                    replace_params.copy_from = &p2;
                    replace_params.start     = &p3;
                    replace_params.stop      = &p4;
                    replace_params.target    = &_39Code_16903;
                    Replace( &replace_params );
                }
                DeRef(_27687);
                _27687 = NOVALUE;
                DeRef(_27691);
                _27691 = NOVALUE;

                /** inline.e:1000							offset += length(code) - size - 1*/
                if (IS_SEQUENCE(_code_54268)){
                        _27693 = SEQ_PTR(_code_54268)->length;
                }
                else {
                    _27693 = 1;
                }
                _27694 = _27693 - _size_54294;
                if ((object)((uintptr_t)_27694 +(uintptr_t) HIGH_BITS) >= 0){
                    _27694 = NewDouble((eudouble)_27694);
                }
                _27693 = NOVALUE;
                if (IS_ATOM_INT(_27694)) {
                    _27695 = _27694 - 1;
                    if ((object)((uintptr_t)_27695 +(uintptr_t) HIGH_BITS) >= 0){
                        _27695 = NewDouble((eudouble)_27695);
                    }
                }
                else {
                    _27695 = NewDouble(DBL_PTR(_27694)->dbl - (eudouble)1);
                }
                DeRef(_27694);
                _27694 = NOVALUE;
                if (IS_ATOM_INT(_27695)) {
                    _offset_54280 = _offset_54280 + _27695;
                }
                else {
                    _offset_54280 = NewDouble((eudouble)_offset_54280 + DBL_PTR(_27695)->dbl);
                }
                DeRef(_27695);
                _27695 = NOVALUE;
                if (!IS_ATOM_INT(_offset_54280)) {
                    _1 = (object)(DBL_PTR(_offset_54280)->dbl);
                    DeRefDS(_offset_54280);
                    _offset_54280 = _1;
                }
LA: 
                DeRef(_op_54291);
                _op_54291 = NOVALUE;

                /** inline.e:1003					end for*/
                _o_54282 = _o_54282 + 1;
                goto L8; // [448] 240
L9: 
                ;
            }

            /** inline.e:1004					SymTab[calling_sub][S_CODE] = Code*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54246 + ((s1_ptr)_2)->base);
            RefDS(_39Code_16903);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_39S_CODE_16482))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _39Code_16903;
            DeRef(_1);
            _27697 = NOVALUE;

            /** inline.e:1005					SymTab[calling_sub][S_LINETAB] = LineTable*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54246 + ((s1_ptr)_2)->base);
            RefDS(_39LineTable_16904);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_39S_LINETAB_16505))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _39LineTable_16904;
            DeRef(_1);
            _27699 = NOVALUE;
            DeRef(_code_54268);
            _code_54268 = NOVALUE;
            DeRef(_calls_54269);
            _calls_54269 = NOVALUE;

            /** inline.e:1006				end for*/
            _cx_54241 = _cx_54241 + 1;
            goto L6; // [491] 92
L7: 
            ;
        }
L3: 

        /** inline.e:1008		end for*/
L5: 
        _i_54227 = _i_54227 + 1;
        goto L1; // [501] 20
L2: 
        ;
    }

    /** inline.e:1009	end procedure*/
    _27646 = NOVALUE;
    _27640 = NOVALUE;
    return;
    ;
}



// 0x7401D1CC
