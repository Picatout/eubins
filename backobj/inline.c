// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _66advance(object _pc_52912, object _code_52913)
{
    object _27041 = NOVALUE; // 52917 27041
// skipping _27040  name type: 0
    object _27039 = NOVALUE; // 52915 27039
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg advance pc: 1 op: INTEGER_CHECK (96)
    // SubProg advance pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg advance pc: 5 op: STARTLINE (58)

    /** inline.e:63		prev_pc = pc*/
    // SubProg advance pc: 7 op: ASSIGN_I (113)
    _66prev_pc_52895 = _pc_52912;
    // SubProg advance pc: 10 op: STARTLINE (58)

    /** inline.e:64		if pc > length( code ) then*/
    // SubProg advance pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_code_52913)){
            _27039 = SEQ_PTR(_code_52913)->length;
    }
    else {
        _27039 = 1;
    }
    // SubProg advance pc: 15 op: GREATER_IFW_I (124)
    if (_pc_52912 <= _27039)
    goto L1; // [15] 26
    // SubProg advance pc: 19 op: STARTLINE (58)

    /** inline.e:65			return pc*/
    // SubProg advance pc: 21 op: RETURNF (28)

// Exiting block BLOCK: advance

// block var code_52913
    DeRefDS(_code_52913);
    return _pc_52912;
    // SubProg advance pc: 25 op: NOP1 (159)
L1: // addr: 26 pc: 25 sub: 52910 op: 159
    // SubProg advance pc: 26 op: STARTLINE (58)

    /** inline.e:67		return shift:advance( pc, code )*/
    // SubProg advance pc: 28 op: PROC (27)
    RefDS(_code_52913);
    _27041 = _65advance(_pc_52912, _code_52913);
    // SubProg advance pc: 33 op: RETURNF (28)

// Exiting block BLOCK: advance

// block var pc_52912

// block var code_52913
    DeRefDS(_code_52913);
    return _27041;
    // SubProg advance pc: 37 op: BADRETURNF (43)
    ;
}


void _66shift(object _start_52920, object _amount_52921, object _bound_52922)
{
    object _temp_LineTable_52923 = NOVALUE;
    object _temp_Code_52925 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift pc: 1 op: INTEGER_CHECK (96)
    // SubProg shift pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_amount_52921)) {
        _1 = (object)(DBL_PTR(_amount_52921)->dbl);
        DeRefDS(_amount_52921);
        _amount_52921 = _1;
    }
    // SubProg shift pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift pc: 7 op: STARTLINE (58)

    /** inline.e:72			temp_LineTable = LineTable,*/
    // SubProg shift pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 11 op: ASSIGN (18)
    RefDS(_34LineTable_15277);
    DeRef(_temp_LineTable_52923);
    _temp_LineTable_52923 = _34LineTable_15277;
    // SubProg shift pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 16 op: STARTLINE (58)

    /** inline.e:73			temp_Code = Code*/
    // SubProg shift pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 20 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRef(_temp_Code_52925);
    _temp_Code_52925 = _34Code_15276;
    // SubProg shift pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 25 op: STARTLINE (58)

    /** inline.e:74		LineTable = {}*/
    // SubProg shift pc: 27 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_34LineTable_15277);
    _34LineTable_15277 = _21936;
    // SubProg shift pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 32 op: STARTLINE (58)

    /** inline.e:75		Code = inline_code*/
    // SubProg shift pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 36 op: ASSIGN (18)
    RefDS(_66inline_code_52887);
    DeRefDS(_34Code_15276);
    _34Code_15276 = _66inline_code_52887;
    // SubProg shift pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 41 op: STARTLINE (58)

    /** inline.e:76		inline_code = {}*/
    // SubProg shift pc: 43 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_66inline_code_52887);
    _66inline_code_52887 = _21936;
    // SubProg shift pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 48 op: STARTLINE (58)

    /** inline.e:78		shift:shift( start, amount, bound )*/
    // SubProg shift pc: 50 op: PROC (27)
    _65shift(_start_52920, _amount_52921, _bound_52922);
    // SubProg shift pc: 55 op: STARTLINE (58)

    /** inline.e:80		LineTable = temp_LineTable*/
    // SubProg shift pc: 57 op: ASSIGN (18)
    RefDS(_temp_LineTable_52923);
    DeRefDS(_34LineTable_15277);
    _34LineTable_15277 = _temp_LineTable_52923;
    // SubProg shift pc: 60 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 62 op: STARTLINE (58)

    /** inline.e:81		inline_code = Code*/
    // SubProg shift pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 66 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRefDS(_66inline_code_52887);
    _66inline_code_52887 = _34Code_15276;
    // SubProg shift pc: 69 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 71 op: STARTLINE (58)

    /** inline.e:82		Code = temp_Code*/
    // SubProg shift pc: 73 op: ASSIGN (18)
    RefDS(_temp_Code_52925);
    DeRefDS(_34Code_15276);
    _34Code_15276 = _temp_Code_52925;
    // SubProg shift pc: 76 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 78 op: STARTLINE (58)

    /** inline.e:83	end procedure*/
    // SubProg shift pc: 80 op: RETURNP (29)

// Exiting block BLOCK: shift

// block var start_52920

// block var amount_52921

// block var bound_52922

// block var temp_LineTable_52923
    DeRefDS(_temp_LineTable_52923);

// block var temp_Code_52925
    DeRefDS(_temp_Code_52925);
    return;
    // SubProg shift pc: 83 op: BADRETURNF (43)
    ;
}


void _66replace_code(object _code_52940, object _start_52941, object _finish_52942)
{
    object _27048 = NOVALUE; // 52947 27048
    object _27047 = NOVALUE; // 52946 27047
    object _27046 = NOVALUE; // 52945 27046
    object _27045 = NOVALUE; // 52944 27045
// skipping _27044  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_code pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg replace_code pc: 3 op: INTEGER_CHECK (96)
    // SubProg replace_code pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_finish_52942)) {
        _1 = (object)(DBL_PTR(_finish_52942)->dbl);
        DeRefDS(_finish_52942);
        _finish_52942 = _1;
    }
    // SubProg replace_code pc: 7 op: STARTLINE (58)

    /** inline.e:92		inline_code = replace( inline_code, code, start, finish )*/
    // SubProg replace_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_code pc: 11 op: REPLACE (201)
    {
        intptr_t p1 = _66inline_code_52887;
        intptr_t p2 = _code_52940;
        intptr_t p3 = _start_52941;
        intptr_t p4 = _finish_52942;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_66inline_code_52887;
        Replace( &replace_params );
    }
    // SubProg replace_code pc: 17 op: STARTLINE (58)

    /** inline.e:93		shift( start , length( code ) - (finish - start + 1), finish )*/
    // SubProg replace_code pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_code_52940)){
            _27045 = SEQ_PTR(_code_52940)->length;
    }
    else {
        _27045 = 1;
    }
    // SubProg replace_code pc: 22 op: MINUS (10)
    _27046 = _finish_52942 - _start_52941;
    if ((object)((uintptr_t)_27046 +(uintptr_t) HIGH_BITS) >= 0){
        _27046 = NewDouble((eudouble)_27046);
    }
    // SubProg replace_code pc: 26 op: PLUS1 (93)
    if (IS_ATOM_INT(_27046)) {
        _27047 = _27046 + 1;
        if (_27047 > MAXINT){
            _27047 = NewDouble((eudouble)_27047);
        }
    }
    else
    _27047 = binary_op(PLUS, 1, _27046);
    DeRef(_27046);
    _27046 = NOVALUE;
    // SubProg replace_code pc: 30 op: MINUS (10)
    if (IS_ATOM_INT(_27047)) {
        _27048 = _27045 - _27047;
        if ((object)((uintptr_t)_27048 +(uintptr_t) HIGH_BITS) >= 0){
            _27048 = NewDouble((eudouble)_27048);
        }
    }
    else {
        _27048 = NewDouble((eudouble)_27045 - DBL_PTR(_27047)->dbl);
    }
    _27045 = NOVALUE;
    DeRef(_27047);
    _27047 = NOVALUE;
    // SubProg replace_code pc: 34 op: PROC (27)
    _66shift(_start_52941, _27048, _finish_52942);
    _27048 = NOVALUE;
    // SubProg replace_code pc: 39 op: STARTLINE (58)

    /** inline.e:94	end procedure*/
    // SubProg replace_code pc: 41 op: RETURNP (29)

// Exiting block BLOCK: replace_code

// block var code_52940
    DeRefDS(_code_52940);

// block var start_52941

// block var finish_52942
    return;
    // SubProg replace_code pc: 44 op: BADRETURNF (43)
    ;
}


void _66defer()
{
    object _dx_52950 = NOVALUE;
// skipping _27052  name type: 0
// skipping _27051  name type: 0
// skipping _27050  name type: 0
// skipping _27049  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defer pc: 1 op: STARTLINE (58)

    /** inline.e:101		integer dx = find( inline_sub, deferred_inline_decisions )*/
    // SubProg defer pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 7 op: FIND_FROM (176)
    _dx_52950 = find_from(_66inline_sub_52901, _66deferred_inline_decisions_52903, 1);
    // SubProg defer pc: 12 op: STARTLINE (58)

    /** inline.e:102		if not dx then*/
    // SubProg defer pc: 14 op: NOT_IFW (108)
    if (_dx_52950 != 0)
    goto L1; // [14] 36
    // SubProg defer pc: 17 op: STARTLINE (58)

    /** inline.e:103			deferred_inline_decisions &= inline_sub*/
    // SubProg defer pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 23 op: CONCAT (15)
    Append(&_66deferred_inline_decisions_52903, _66deferred_inline_decisions_52903, _66inline_sub_52901);
    // SubProg defer pc: 27 op: STARTLINE (58)

    /** inline.e:104			deferred_inline_calls = append( deferred_inline_calls, {} )*/
    // SubProg defer pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 31 op: APPEND (35)
    RefDS(_21936);
    Append(&_66deferred_inline_calls_52904, _66deferred_inline_calls_52904, _21936);
    // SubProg defer pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 52948 op: 159
    // SubProg defer pc: 36 op: STARTLINE (58)

    /** inline.e:106	end procedure*/
    // SubProg defer pc: 38 op: RETURNP (29)

// Exiting block BLOCK: defer

// block var dx_52950
    return;
    // SubProg defer pc: 41 op: BADRETURNF (43)
    ;
}


object _66new_inline_temp(object _sym_52959)
{
    object _27054 = NOVALUE; // 52961 27054
// skipping _27053  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_inline_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_inline_temp pc: 3 op: STARTLINE (58)

    /** inline.e:110		inline_temps &= sym*/
    // SubProg new_inline_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_temp pc: 7 op: CONCAT (15)
    Append(&_66inline_temps_52889, _66inline_temps_52889, _sym_52959);
    // SubProg new_inline_temp pc: 11 op: STARTLINE (58)

    /** inline.e:111		return length( inline_temps )*/
    // SubProg new_inline_temp pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_temp pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_temps_52889)){
            _27054 = SEQ_PTR(_66inline_temps_52889)->length;
    }
    else {
        _27054 = 1;
    }
    // SubProg new_inline_temp pc: 18 op: RETURNF (28)

// Exiting block BLOCK: new_inline_temp

// block var sym_52959
    return _27054;
    // SubProg new_inline_temp pc: 22 op: BADRETURNF (43)
    ;
}


object _66get_inline_temp(object _sym_52965)
{
    object _temp_num_52966 = NOVALUE;
    object _27058 = NOVALUE; // 52973 27058
// skipping _27057  name type: 0
// skipping _27056  name type: 0
// skipping _27055  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_inline_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_inline_temp pc: 3 op: STARTLINE (58)

    /** inline.e:117		integer temp_num = find( sym, inline_params )*/
    // SubProg get_inline_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 7 op: FIND_FROM (176)
    _temp_num_52966 = find_from(_sym_52965, _66inline_params_52892, 1);
    // SubProg get_inline_temp pc: 12 op: STARTLINE (58)

    /** inline.e:118		if temp_num then*/
    // SubProg get_inline_temp pc: 14 op: IF (20)
    if (_temp_num_52966 == 0)
    {
        goto L1; // [14] 24
    }
    else{
    }
    // SubProg get_inline_temp pc: 17 op: STARTLINE (58)

    /** inline.e:119			return temp_num*/
    // SubProg get_inline_temp pc: 19 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52965
    return _temp_num_52966;
    // SubProg get_inline_temp pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 52962 op: 159
    // SubProg get_inline_temp pc: 24 op: STARTLINE (58)

    /** inline.e:122		temp_num = find( sym, proc_vars )*/
    // SubProg get_inline_temp pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 28 op: FIND_FROM (176)
    _temp_num_52966 = find_from(_sym_52965, _66proc_vars_52888, 1);
    // SubProg get_inline_temp pc: 33 op: STARTLINE (58)

    /** inline.e:123		if temp_num then*/
    // SubProg get_inline_temp pc: 35 op: IF (20)
    if (_temp_num_52966 == 0)
    {
        goto L2; // [35] 45
    }
    else{
    }
    // SubProg get_inline_temp pc: 38 op: STARTLINE (58)

    /** inline.e:124			return temp_num*/
    // SubProg get_inline_temp pc: 40 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52965
    return _temp_num_52966;
    // SubProg get_inline_temp pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 52962 op: 159
    // SubProg get_inline_temp pc: 45 op: STARTLINE (58)

    /** inline.e:127		temp_num = find( sym, inline_temps )*/
    // SubProg get_inline_temp pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 49 op: FIND_FROM (176)
    _temp_num_52966 = find_from(_sym_52965, _66inline_temps_52889, 1);
    // SubProg get_inline_temp pc: 54 op: STARTLINE (58)

    /** inline.e:128		if temp_num then*/
    // SubProg get_inline_temp pc: 56 op: IF (20)
    if (_temp_num_52966 == 0)
    {
        goto L3; // [56] 66
    }
    else{
    }
    // SubProg get_inline_temp pc: 59 op: STARTLINE (58)

    /** inline.e:129			return temp_num*/
    // SubProg get_inline_temp pc: 61 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52965
    return _temp_num_52966;
    // SubProg get_inline_temp pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 52962 op: 159
    // SubProg get_inline_temp pc: 66 op: STARTLINE (58)

    /** inline.e:132		return new_inline_temp( sym )*/
    // SubProg get_inline_temp pc: 68 op: PROC (27)
    _27058 = _66new_inline_temp(_sym_52965);
    // SubProg get_inline_temp pc: 72 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52965

// block var temp_num_52966
    return _27058;
    // SubProg get_inline_temp pc: 76 op: BADRETURNF (43)
    ;
}


object _66generic_symbol(object _sym_52977)
{
    object _inline_type_52978 = NOVALUE;
    object _px_52979 = NOVALUE;
    object _eentry_52986 = NOVALUE;
    object _27067 = NOVALUE; // 52998 27067
    object _27066 = NOVALUE; // 52997 27066
    object _27065 = NOVALUE; // 52996 27065
    object _27064 = NOVALUE; // 52994 27064
// skipping _27063  name type: 0
    object _27062 = NOVALUE; // 52991 27062
// skipping _27061  name type: 0
// skipping _27060  name type: 0
// skipping _27059  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg generic_symbol pc: 1 op: INTEGER_CHECK (96)
    // SubProg generic_symbol pc: 3 op: STARTLINE (58)

    /** inline.e:137		integer px = find( sym, inline_params )*/
    // SubProg generic_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 7 op: FIND_FROM (176)
    _px_52979 = find_from(_sym_52977, _66inline_params_52892, 1);
    // SubProg generic_symbol pc: 12 op: STARTLINE (58)

    /** inline.e:138		if px then*/
    // SubProg generic_symbol pc: 14 op: IF (20)
    if (_px_52979 == 0)
    {
        goto L1; // [14] 25
    }
    else{
    }
    // SubProg generic_symbol pc: 17 op: STARTLINE (58)

    /** inline.e:139			inline_type = INLINE_PARAM*/
    // SubProg generic_symbol pc: 19 op: ASSIGN_I (113)
    _inline_type_52978 = 1;
    // SubProg generic_symbol pc: 22 op: ELSE (23)
    goto L2; // [22] 100
    // SubProg generic_symbol pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 52974 op: 159
    // SubProg generic_symbol pc: 25 op: STARTLINE (58)

    /** inline.e:141			px = find( sym, proc_vars )*/
    // SubProg generic_symbol pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 29 op: FIND_FROM (176)
    _px_52979 = find_from(_sym_52977, _66proc_vars_52888, 1);
    // SubProg generic_symbol pc: 34 op: STARTLINE (58)

    /** inline.e:142			if px then*/
    // SubProg generic_symbol pc: 36 op: IF (20)
    if (_px_52979 == 0)
    {
        goto L3; // [36] 47
    }
    else{
    }
    // SubProg generic_symbol pc: 39 op: STARTLINE (58)

    /** inline.e:143				inline_type = INLINE_VAR*/
    // SubProg generic_symbol pc: 41 op: ASSIGN_I (113)
    _inline_type_52978 = 6;
    // SubProg generic_symbol pc: 44 op: ELSE (23)
    goto L4; // [44] 99
    // SubProg generic_symbol pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 52974 op: 159
    // SubProg generic_symbol pc: 47 op: STARTLINE (58)

    /** inline.e:145				sequence eentry = SymTab[sym]*/
    // SubProg generic_symbol pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 51 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_52986);
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _eentry_52986 = (object)*(((s1_ptr)_2)->base + _sym_52977);
    Ref(_eentry_52986);
    // SubProg generic_symbol pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg generic_symbol pc: 57 op: STARTLINE (58)

    /** inline.e:146				if is_literal( sym ) or eentry[S_SCOPE] > SC_PRIVATE then*/
    // SubProg generic_symbol pc: 59 op: PROC (27)
    _27062 = _66is_literal(_sym_52977);
    // SubProg generic_symbol pc: 63 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_27062)) {
        if (_27062 != 0) {
            goto L5; // [63] 84
        }
    }
    else {
        if (DBL_PTR(_27062)->dbl != 0.0) {
            goto L5; // [63] 84
        }
    }
    // SubProg generic_symbol pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 69 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_52986);
    _27064 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg generic_symbol pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 75 op: GREATER (6)
    if (IS_ATOM_INT(_27064)) {
        _27065 = (_27064 > 3);
    }
    else {
        _27065 = binary_op(GREATER, _27064, 3);
    }
    _27064 = NOVALUE;
    // SubProg generic_symbol pc: 79 op: NOP1 (159)
    // SubProg generic_symbol pc: 80 op: IF (20)
    if (_27065 == 0) {
        DeRef(_27065);
        _27065 = NOVALUE;
        goto L6; // [80] 91
    }
    else {
        if (!IS_ATOM_INT(_27065) && DBL_PTR(_27065)->dbl == 0.0){
            DeRef(_27065);
            _27065 = NOVALUE;
            goto L6; // [80] 91
        }
        DeRef(_27065);
        _27065 = NOVALUE;
    }
    DeRef(_27065);
    _27065 = NOVALUE;
    // SubProg generic_symbol pc: 83 op: NOP1 (159)
L5: // addr: 84 pc: 83 sub: 52974 op: 159
    // SubProg generic_symbol pc: 84 op: STARTLINE (58)

    /** inline.e:147					return sym*/
    // SubProg generic_symbol pc: 86 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var eentry_52986
    DeRef(_eentry_52986);

// Exiting block BLOCK: IF-

// Exiting block BLOCK: generic_symbol

// block var inline_type_52978

// block var px_52979
    DeRef(_27062);
    _27062 = NOVALUE;
    return _sym_52977;
    // SubProg generic_symbol pc: 90 op: NOP1 (159)
L6: // addr: 91 pc: 90 sub: 52974 op: 159
    // SubProg generic_symbol pc: 91 op: STARTLINE (58)

    /** inline.e:149				inline_type = INLINE_TEMP*/
    // SubProg generic_symbol pc: 93 op: ASSIGN_I (113)
    _inline_type_52978 = 2;
    // SubProg generic_symbol pc: 96 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var eentry_52986
    DeRef(_eentry_52986);
    _eentry_52986 = NOVALUE;
    // SubProg generic_symbol pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 52974 op: 159
    // SubProg generic_symbol pc: 99 op: NOP1 (159)
L2: // addr: 100 pc: 99 sub: 52974 op: 159
    // SubProg generic_symbol pc: 100 op: STARTLINE (58)

    /** inline.e:153		return { inline_type, get_inline_temp( sym ) }*/
    // SubProg generic_symbol pc: 102 op: PRIVATE_INIT_CHECK (30)
    // SubProg generic_symbol pc: 104 op: PROC (27)
    _27066 = _66get_inline_temp(_sym_52977);
    // SubProg generic_symbol pc: 108 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _inline_type_52978;
    ((intptr_t *)_2)[2] = _27066;
    _27067 = MAKE_SEQ(_1);
    _27066 = NOVALUE;
    // SubProg generic_symbol pc: 112 op: RETURNF (28)

// Exiting block BLOCK: generic_symbol

// block var sym_52977

// block var inline_type_52978

// block var px_52979
    DeRef(_27062);
    _27062 = NOVALUE;
    return _27067;
    // SubProg generic_symbol pc: 116 op: BADRETURNF (43)
    ;
}


object _66adjust_symbol(object _pc_53001)
{
    object _sym_53003 = NOVALUE;
    object _eentry_53009 = NOVALUE;
    object _27075 = NOVALUE; // 53020 27075
// skipping _27074  name type: 0
    object _27073 = NOVALUE; // 53017 27073
    object _27072 = NOVALUE; // 53014 27072
// skipping _27071  name type: 0
// skipping _27070  name type: 0
// skipping _27069  name type: 0
// skipping _27068  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_symbol pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53001)) {
        _1 = (object)(DBL_PTR(_pc_53001)->dbl);
        DeRefDS(_pc_53001);
        _pc_53001 = _1;
    }
    // SubProg adjust_symbol pc: 3 op: STARTLINE (58)

    /** inline.e:160		symtab_index sym = inline_code[pc]*/
    // SubProg adjust_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _sym_53003 = (object)*(((s1_ptr)_2)->base + _pc_53001);
    if (!IS_ATOM_INT(_sym_53003)){
        _sym_53003 = (object)DBL_PTR(_sym_53003)->dbl;
    }
    // SubProg adjust_symbol pc: 13 op: STARTLINE (58)

    /** inline.e:161		if sym < 0 then*/
    // SubProg adjust_symbol pc: 15 op: LESS_IFW (102)
    if (_sym_53003 >= 0)
    goto L1; // [15] 28
    // SubProg adjust_symbol pc: 19 op: STARTLINE (58)

    /** inline.e:162			return 0*/
    // SubProg adjust_symbol pc: 21 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53001

// block var sym_53003

// block var eentry_53009
    DeRef(_eentry_53009);
    return 0;
    // SubProg adjust_symbol pc: 25 op: ELSE (23)
    goto L2; // [25] 41
    // SubProg adjust_symbol pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 52999 op: 159
    // SubProg adjust_symbol pc: 28 op: STARTLINE (58)

    /** inline.e:163		elsif not sym then*/
    // SubProg adjust_symbol pc: 30 op: NOT_IFW (108)
    if (_sym_53003 != 0)
    goto L3; // [30] 40
    // SubProg adjust_symbol pc: 33 op: STARTLINE (58)

    /** inline.e:165			return 1*/
    // SubProg adjust_symbol pc: 35 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53001

// block var sym_53003

// block var eentry_53009
    DeRef(_eentry_53009);
    return 1;
    // SubProg adjust_symbol pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 52999 op: 159
    // SubProg adjust_symbol pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 52999 op: 159
    // SubProg adjust_symbol pc: 41 op: STARTLINE (58)

    /** inline.e:168		sequence eentry = SymTab[sym]*/
    // SubProg adjust_symbol pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_53009);
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _eentry_53009 = (object)*(((s1_ptr)_2)->base + _sym_53003);
    Ref(_eentry_53009);
    // SubProg adjust_symbol pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg adjust_symbol pc: 51 op: STARTLINE (58)

    /** inline.e:169		if is_literal( sym ) then*/
    // SubProg adjust_symbol pc: 53 op: PROC (27)
    _27072 = _66is_literal(_sym_53003);
    // SubProg adjust_symbol pc: 57 op: IF (20)
    if (_27072 == 0) {
        DeRef(_27072);
        _27072 = NOVALUE;
        goto L4; // [57] 69
    }
    else {
        if (!IS_ATOM_INT(_27072) && DBL_PTR(_27072)->dbl == 0.0){
            DeRef(_27072);
            _27072 = NOVALUE;
            goto L4; // [57] 69
        }
        DeRef(_27072);
        _27072 = NOVALUE;
    }
    DeRef(_27072);
    _27072 = NOVALUE;
    // SubProg adjust_symbol pc: 60 op: STARTLINE (58)

    /** inline.e:170			return 1*/
    // SubProg adjust_symbol pc: 62 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53001

// block var sym_53003

// block var eentry_53009
    DeRefDS(_eentry_53009);
    return 1;
    // SubProg adjust_symbol pc: 66 op: ELSE (23)
    goto L5; // [66] 95
    // SubProg adjust_symbol pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 52999 op: 159
    // SubProg adjust_symbol pc: 69 op: STARTLINE (58)

    /** inline.e:172		elsif eentry[S_SCOPE] = SC_UNDEFINED then*/
    // SubProg adjust_symbol pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 73 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_53009);
    _27073 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg adjust_symbol pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 79 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27073, 9)){
        _27073 = NOVALUE;
        goto L6; // [79] 94
    }
    _27073 = NOVALUE;
    // SubProg adjust_symbol pc: 83 op: STARTLINE (58)

    /** inline.e:173			defer()*/
    // SubProg adjust_symbol pc: 85 op: PROC (27)
    _66defer();
    // SubProg adjust_symbol pc: 87 op: STARTLINE (58)

    /** inline.e:174			return 0*/
    // SubProg adjust_symbol pc: 89 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53001

// block var sym_53003

// block var eentry_53009
    DeRefDS(_eentry_53009);
    return 0;
    // SubProg adjust_symbol pc: 93 op: NOP1 (159)
L6: // addr: 94 pc: 93 sub: 52999 op: 159
    // SubProg adjust_symbol pc: 94 op: NOP1 (159)
L5: // addr: 95 pc: 94 sub: 52999 op: 159
    // SubProg adjust_symbol pc: 95 op: STARTLINE (58)

    /** inline.e:177		inline_code[pc] = generic_symbol( sym )*/
    // SubProg adjust_symbol pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 99 op: PROC (27)
    _27075 = _66generic_symbol(_sym_53003);
    // SubProg adjust_symbol pc: 103 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53001);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27075;
    if( _1 != _27075 ){
        DeRef(_1);
    }
    _27075 = NOVALUE;
    // SubProg adjust_symbol pc: 107 op: STARTLINE (58)

    /** inline.e:178		return 1*/
    // SubProg adjust_symbol pc: 109 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53001

// block var sym_53003

// block var eentry_53009
    DeRef(_eentry_53009);
    return 1;
    // SubProg adjust_symbol pc: 113 op: BADRETURNF (43)
    ;
}


object _66check_for_param(object _pc_53023)
{
    object _px_53024 = NOVALUE;
// skipping _27080  name type: 0
// skipping _27079  name type: 0
    object _27078 = NOVALUE; // 53029 27078
// skipping _27077  name type: 0
    object _27076 = NOVALUE; // 53025 27076
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_param pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53023)) {
        _1 = (object)(DBL_PTR(_pc_53023)->dbl);
        DeRefDS(_pc_53023);
        _pc_53023 = _1;
    }
    // SubProg check_for_param pc: 3 op: STARTLINE (58)

    /** inline.e:182		integer px = find( inline_code[pc], inline_params )*/
    // SubProg check_for_param pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27076 = (object)*(((s1_ptr)_2)->base + _pc_53023);
    // SubProg check_for_param pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 13 op: FIND_FROM (176)
    _px_53024 = find_from(_27076, _66inline_params_52892, 1);
    _27076 = NOVALUE;
    // SubProg check_for_param pc: 18 op: STARTLINE (58)

    /** inline.e:183		if px then*/
    // SubProg check_for_param pc: 20 op: IF (20)
    if (_px_53024 == 0)
    {
        goto L1; // [20] 51
    }
    else{
    }
    // SubProg check_for_param pc: 23 op: STARTLINE (58)

    /** inline.e:184			if not find( px, assigned_params ) then*/
    // SubProg check_for_param pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 27 op: FIND_FROM (176)
    _27078 = find_from(_px_53024, _66assigned_params_52893, 1);
    // SubProg check_for_param pc: 32 op: NOT_IFW (108)
    if (_27078 != 0)
    goto L2; // [32] 44
    _27078 = NOVALUE;
    // SubProg check_for_param pc: 35 op: STARTLINE (58)

    /** inline.e:185				assigned_params &= px*/
    // SubProg check_for_param pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 39 op: CONCAT (15)
    Append(&_66assigned_params_52893, _66assigned_params_52893, _px_53024);
    // SubProg check_for_param pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 53021 op: 159
    // SubProg check_for_param pc: 44 op: STARTLINE (58)

    /** inline.e:187			return 1*/
    // SubProg check_for_param pc: 46 op: RETURNF (28)

// Exiting block BLOCK: check_for_param

// block var pc_53023

// block var px_53024
    return 1;
    // SubProg check_for_param pc: 50 op: NOP1 (159)
L1: // addr: 51 pc: 50 sub: 53021 op: 159
    // SubProg check_for_param pc: 51 op: STARTLINE (58)

    /** inline.e:189		return 0*/
    // SubProg check_for_param pc: 53 op: RETURNF (28)

// Exiting block BLOCK: check_for_param

// block var pc_53023

// block var px_53024
    return 0;
    // SubProg check_for_param pc: 57 op: BADRETURNF (43)
    ;
}


void _66check_target(object _pc_53034, object _op_53035)
{
    object _targets_53036 = NOVALUE;
    object _27087 = NOVALUE; // 53049 27087
    object _27086 = NOVALUE; // 53048 27086
    object _27085 = NOVALUE; // 53047 27085
    object _27084 = NOVALUE; // 53045 27084
    object _27083 = NOVALUE; // 53042 27083
// skipping _27082  name type: 0
    object _27081 = NOVALUE; // 53038 27081
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_target pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_target pc: 3 op: INTEGER_CHECK (96)
    // SubProg check_target pc: 5 op: STARTLINE (58)

    /** inline.e:194		sequence targets = op_info[op][OP_TARGET]*/
    // SubProg check_target pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_target pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_65op_info_23872);
    _27081 = (object)*(((s1_ptr)_2)->base + _op_53035);
    // SubProg check_target pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_target pc: 15 op: RHS_SUBS_CHECK (92)
    DeRef(_targets_53036);
    _2 = (object)SEQ_PTR(_27081);
    _targets_53036 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_targets_53036);
    _27081 = NOVALUE;
    // SubProg check_target pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg check_target pc: 21 op: STARTLINE (58)

    /** inline.e:196		if length( targets ) then*/
    // SubProg check_target pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_targets_53036)){
            _27083 = SEQ_PTR(_targets_53036)->length;
    }
    else {
        _27083 = 1;
    }
    // SubProg check_target pc: 26 op: IF (20)
    if (_27083 == 0)
    {
        _27083 = NOVALUE;
        goto L1; // [26] 72
    }
    else{
        _27083 = NOVALUE;
    }
    // SubProg check_target pc: 29 op: STARTLINE (58)

    /** inline.e:197		for i = 1 to length( targets ) do*/
    // SubProg check_target pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_targets_53036)){
            _27084 = SEQ_PTR(_targets_53036)->length;
    }
    else {
        _27084 = 1;
    }
    // SubProg check_target pc: 34 op: FOR_I (125)
    {
        object _i_53044;
        _i_53044 = 1;
L2: // addr: 41 pc: 34 sub: 53032 op: 125
        if (_i_53044 > _27084){
            goto L3; // [34] 71
        }
        // SubProg check_target pc: 41 op: STARTLINE (58)

        /** inline.e:198				if check_for_param( pc + targets[i] ) then*/
        // SubProg check_target pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_targets_53036);
        _27085 = (object)*(((s1_ptr)_2)->base + _i_53044);
        // SubProg check_target pc: 47 op: PLUS (11)
        if (IS_ATOM_INT(_27085)) {
            _27086 = _pc_53034 + _27085;
            if ((object)((uintptr_t)_27086 + (uintptr_t)HIGH_BITS) >= 0){
                _27086 = NewDouble((eudouble)_27086);
            }
        }
        else {
            _27086 = binary_op(PLUS, _pc_53034, _27085);
        }
        _27085 = NOVALUE;
        // SubProg check_target pc: 51 op: PROC (27)
        _27087 = _66check_for_param(_27086);
        _27086 = NOVALUE;
        // SubProg check_target pc: 55 op: IF (20)
        if (_27087 == 0) {
            DeRef(_27087);
            _27087 = NOVALUE;
            goto L4; // [55] 64
        }
        else {
            if (!IS_ATOM_INT(_27087) && DBL_PTR(_27087)->dbl == 0.0){
                DeRef(_27087);
                _27087 = NOVALUE;
                goto L4; // [55] 64
            }
            DeRef(_27087);
            _27087 = NOVALUE;
        }
        DeRef(_27087);
        _27087 = NOVALUE;
        // SubProg check_target pc: 58 op: STARTLINE (58)

        /** inline.e:199					return*/
        // SubProg check_target pc: 60 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_target

// block var pc_53034

// block var op_53035

// block var targets_53036
        DeRefDS(_targets_53036);
        return;
        // SubProg check_target pc: 63 op: NOP1 (159)
L4: // addr: 64 pc: 63 sub: 53032 op: 159
        // SubProg check_target pc: 64 op: STARTLINE (58)

        /** inline.e:201			end for*/
        // SubProg check_target pc: 66 op: ENDFOR_INT_UP1 (54)
        _i_53044 = _i_53044 + 1;
        goto L2; // [66] 41
L3: // addr: 71 pc: 66 sub: 53032 op: 54
        ;
    }
    // SubProg check_target pc: 71 op: NOP1 (159)
L1: // addr: 72 pc: 71 sub: 53032 op: 159
    // SubProg check_target pc: 72 op: STARTLINE (58)

    /** inline.e:203	end procedure*/
    // SubProg check_target pc: 74 op: RETURNP (29)

// Exiting block BLOCK: check_target

// block var pc_53034

// block var op_53035

// block var targets_53036
    DeRef(_targets_53036);
    return;
    // SubProg check_target pc: 77 op: BADRETURNF (43)
    ;
}


object _66adjust_il(object _pc_53052, object _op_53053)
{
    object _addr_53061 = NOVALUE;
    object _sub_53067 = NOVALUE;
// skipping _27113  name type: 0
    object _27112 = NOVALUE; // 53097 27112
    object _27111 = NOVALUE; // 53096 27111
    object _27110 = NOVALUE; // 53094 27110
    object _27109 = NOVALUE; // 53092 27109
    object _27108 = NOVALUE; // 53091 27108
    object _27107 = NOVALUE; // 53089 27107
    object _27106 = NOVALUE; // 53088 27106
    object _27104 = NOVALUE; // 53083 27104
    object _27103 = NOVALUE; // 53081 27103
    object _27102 = NOVALUE; // 53080 27102
    object _27101 = NOVALUE; // 53079 27101
    object _27100 = NOVALUE; // 53078 27100
    object _27099 = NOVALUE; // 53077 27099
    object _27098 = NOVALUE; // 53076 27098
    object _27097 = NOVALUE; // 53075 27097
// skipping _27096  name type: 0
    object _27095 = NOVALUE; // 53071 27095
    object _27094 = NOVALUE; // 53069 27094
// skipping _27093  name type: 0
    object _27092 = NOVALUE; // 53065 27092
    object _27091 = NOVALUE; // 53063 27091
    object _27090 = NOVALUE; // 53060 27090
    object _27089 = NOVALUE; // 53059 27089
    object _27088 = NOVALUE; // 53057 27088
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_il pc: 1 op: INTEGER_CHECK (96)
    // SubProg adjust_il pc: 3 op: INTEGER_CHECK (96)
    // SubProg adjust_il pc: 5 op: STARTLINE (58)

    /** inline.e:208		for i = 1 to op_info[op][OP_SIZE] - 1 do*/
    // SubProg adjust_il pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_il pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_65op_info_23872);
    _27088 = (object)*(((s1_ptr)_2)->base + _op_53053);
    // SubProg adjust_il pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_il pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27088);
    _27089 = (object)*(((s1_ptr)_2)->base + 2);
    _27088 = NOVALUE;
    // SubProg adjust_il pc: 19 op: MINUS (10)
    if (IS_ATOM_INT(_27089)) {
        _27090 = _27089 - 1;
        if ((object)((uintptr_t)_27090 +(uintptr_t) HIGH_BITS) >= 0){
            _27090 = NewDouble((eudouble)_27090);
        }
    }
    else {
        _27090 = binary_op(MINUS, _27089, 1);
    }
    _27089 = NOVALUE;
    // SubProg adjust_il pc: 23 op: FOR (21)
    {
        object _i_53055;
        _i_53055 = 1;
L1: // addr: 30 pc: 23 sub: 53050 op: 21
        if (binary_op_a(GREATER, _i_53055, _27090)){
            goto L2; // [23] 214
        }
        // SubProg adjust_il pc: 30 op: STARTLINE (58)

        /** inline.e:210			integer addr = find( i, op_info[op][OP_ADDR] )*/
        // SubProg adjust_il pc: 32 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_65op_info_23872);
        _27091 = (object)*(((s1_ptr)_2)->base + _op_53053);
        // SubProg adjust_il pc: 38 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 40 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27091);
        _27092 = (object)*(((s1_ptr)_2)->base + 3);
        _27091 = NOVALUE;
        // SubProg adjust_il pc: 44 op: FIND_FROM (176)
        _addr_53061 = find_from(_i_53055, _27092, 1);
        _27092 = NOVALUE;
        // SubProg adjust_il pc: 49 op: STARTLINE (58)

        /** inline.e:211			integer sub  = find( i, op_info[op][OP_SUB] )*/
        // SubProg adjust_il pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 53 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_65op_info_23872);
        _27094 = (object)*(((s1_ptr)_2)->base + _op_53053);
        // SubProg adjust_il pc: 57 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 59 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27094);
        _27095 = (object)*(((s1_ptr)_2)->base + 5);
        _27094 = NOVALUE;
        // SubProg adjust_il pc: 63 op: FIND_FROM (176)
        _sub_53067 = find_from(_i_53055, _27095, 1);
        _27095 = NOVALUE;
        // SubProg adjust_il pc: 68 op: STARTLINE (58)

        /** inline.e:212			if addr then*/
        // SubProg adjust_il pc: 70 op: IF (20)
        if (_addr_53061 == 0)
        {
            goto L3; // [70] 121
        }
        else{
        }
        // SubProg adjust_il pc: 73 op: STARTLINE (58)

        /** inline.e:213				if integer( inline_code[pc+i] ) then*/
        // SubProg adjust_il pc: 75 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 77 op: PLUS (11)
        if (IS_ATOM_INT(_i_53055)) {
            _27097 = _pc_53052 + _i_53055;
        }
        else {
            _27097 = NewDouble((eudouble)_pc_53052 + DBL_PTR(_i_53055)->dbl);
        }
        // SubProg adjust_il pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        if (!IS_ATOM_INT(_27097)){
            _27098 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27097)->dbl));
        }
        else{
            _27098 = (object)*(((s1_ptr)_2)->base + _27097);
        }
        // SubProg adjust_il pc: 85 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_27098))
        _27099 = 1;
        else if (IS_ATOM_DBL(_27098))
        _27099 = IS_ATOM_INT(DoubleToInt(_27098));
        else
        _27099 = 0;
        _27098 = NOVALUE;
        // SubProg adjust_il pc: 88 op: IF (20)
        if (_27099 == 0)
        {
            _27099 = NOVALUE;
            goto L4; // [88] 205
        }
        else{
            _27099 = NOVALUE;
        }
        // SubProg adjust_il pc: 91 op: STARTLINE (58)

        /** inline.e:214					inline_code[pc + i] = { INLINE_ADDR, inline_code[pc + i] }*/
        // SubProg adjust_il pc: 93 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 95 op: PLUS (11)
        if (IS_ATOM_INT(_i_53055)) {
            _27100 = _pc_53052 + _i_53055;
            if ((object)((uintptr_t)_27100 + (uintptr_t)HIGH_BITS) >= 0){
                _27100 = NewDouble((eudouble)_27100);
            }
        }
        else {
            _27100 = NewDouble((eudouble)_pc_53052 + DBL_PTR(_i_53055)->dbl);
        }
        // SubProg adjust_il pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 101 op: PLUS (11)
        if (IS_ATOM_INT(_i_53055)) {
            _27101 = _pc_53052 + _i_53055;
        }
        else {
            _27101 = NewDouble((eudouble)_pc_53052 + DBL_PTR(_i_53055)->dbl);
        }
        // SubProg adjust_il pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        if (!IS_ATOM_INT(_27101)){
            _27102 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27101)->dbl));
        }
        else{
            _27102 = (object)*(((s1_ptr)_2)->base + _27101);
        }
        // SubProg adjust_il pc: 109 op: RIGHT_BRACE_2 (85)
        Ref(_27102);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 4;
        ((intptr_t *)_2)[2] = _27102;
        _27103 = MAKE_SEQ(_1);
        _27102 = NOVALUE;
        // SubProg adjust_il pc: 113 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52887 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27100))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27100)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27100);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27103;
        if( _1 != _27103 ){
            DeRef(_1);
        }
        _27103 = NOVALUE;
        // SubProg adjust_il pc: 117 op: NOP1 (159)
        // SubProg adjust_il pc: 118 op: ELSE (23)
        goto L4; // [118] 205
        // SubProg adjust_il pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 53050 op: 159
        // SubProg adjust_il pc: 121 op: STARTLINE (58)

        /** inline.e:217			elsif sub then*/
        // SubProg adjust_il pc: 123 op: IF (20)
        if (_sub_53067 == 0)
        {
            goto L5; // [123] 141
        }
        else{
        }
        // SubProg adjust_il pc: 126 op: STARTLINE (58)

        /** inline.e:218				inline_code[pc+i] = {INLINE_SUB}*/
        // SubProg adjust_il pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 130 op: PLUS (11)
        if (IS_ATOM_INT(_i_53055)) {
            _27104 = _pc_53052 + _i_53055;
        }
        else {
            _27104 = NewDouble((eudouble)_pc_53052 + DBL_PTR(_i_53055)->dbl);
        }
        // SubProg adjust_il pc: 134 op: ASSIGN_SUBS (16)
        RefDS(_27105);
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52887 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27104))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27104)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27104);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27105;
        DeRef(_1);
        // SubProg adjust_il pc: 138 op: ELSE (23)
        goto L4; // [138] 205
        // SubProg adjust_il pc: 140 op: NOP1 (159)
L5: // addr: 141 pc: 140 sub: 53050 op: 159
        // SubProg adjust_il pc: 141 op: STARTLINE (58)

        /** inline.e:220				if op != STARTLINE and op != COVERAGE_LINE and op != COVERAGE_ROUTINE then*/
        // SubProg adjust_il pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 145 op: NOTEQ (4)
        _27106 = (_op_53053 != 58);
        // SubProg adjust_il pc: 149 op: SC1_AND (141)
        if (_27106 == 0) {
            _27107 = 0;
            goto L6; // [149] 163
        }
        // SubProg adjust_il pc: 153 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 155 op: NOTEQ (4)
        _27108 = (_op_53053 != 210);
        // SubProg adjust_il pc: 159 op: SC2_AND (142)
        _27107 = (_27108 != 0);
        // SubProg adjust_il pc: 162 op: NOP1 (159)
L6: // addr: 163 pc: 162 sub: 53050 op: 159
        // SubProg adjust_il pc: 163 op: SC1_AND_IF (146)
        if (_27107 == 0) {
            goto L7; // [163] 204
        }
        // SubProg adjust_il pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 169 op: NOTEQ (4)
        _27110 = (_op_53053 != 211);
        // SubProg adjust_il pc: 173 op: NOP1 (159)
        // SubProg adjust_il pc: 174 op: IF (20)
        if (_27110 == 0)
        {
            DeRef(_27110);
            _27110 = NOVALUE;
            goto L7; // [174] 204
        }
        else{
            DeRef(_27110);
            _27110 = NOVALUE;
        }
        // SubProg adjust_il pc: 177 op: STARTLINE (58)

        /** inline.e:221					check_target( pc, op )*/
        // SubProg adjust_il pc: 179 op: PROC (27)
        _66check_target(_pc_53052, _op_53053);
        // SubProg adjust_il pc: 183 op: STARTLINE (58)

        /** inline.e:222					if not adjust_symbol( pc + i ) then*/
        // SubProg adjust_il pc: 185 op: PLUS (11)
        if (IS_ATOM_INT(_i_53055)) {
            _27111 = _pc_53052 + _i_53055;
            if ((object)((uintptr_t)_27111 + (uintptr_t)HIGH_BITS) >= 0){
                _27111 = NewDouble((eudouble)_27111);
            }
        }
        else {
            _27111 = NewDouble((eudouble)_pc_53052 + DBL_PTR(_i_53055)->dbl);
        }
        // SubProg adjust_il pc: 189 op: PROC (27)
        _27112 = _66adjust_symbol(_27111);
        _27111 = NOVALUE;
        // SubProg adjust_il pc: 193 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27112)) {
            if (_27112 != 0){
                DeRef(_27112);
                _27112 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        else {
            if (DBL_PTR(_27112)->dbl != 0.0){
                DeRef(_27112);
                _27112 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        DeRef(_27112);
        _27112 = NOVALUE;
        // SubProg adjust_il pc: 196 op: STARTLINE (58)

        /** inline.e:223						return 0*/
        // SubProg adjust_il pc: 198 op: RETURNF (28)
        DeRef(_i_53055);

// Exiting block BLOCK: FOR-

// block var addr_53061

// block var sub_53067

// Exiting block BLOCK: adjust_il

// block var pc_53052

// block var op_53053
        DeRef(_27108);
        _27108 = NOVALUE;
        DeRef(_27097);
        _27097 = NOVALUE;
        DeRef(_27090);
        _27090 = NOVALUE;
        DeRef(_27100);
        _27100 = NOVALUE;
        DeRef(_27104);
        _27104 = NOVALUE;
        DeRef(_27106);
        _27106 = NOVALUE;
        DeRef(_27101);
        _27101 = NOVALUE;
        return 0;
        // SubProg adjust_il pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 53050 op: 159
        // SubProg adjust_il pc: 203 op: NOP1 (159)
L7: // addr: 204 pc: 203 sub: 53050 op: 159
        // SubProg adjust_il pc: 204 op: NOP1 (159)
L4: // addr: 205 pc: 204 sub: 53050 op: 159
        // SubProg adjust_il pc: 205 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var addr_53061

// block var sub_53067
        // SubProg adjust_il pc: 207 op: STARTLINE (58)

        /** inline.e:227		end for*/
        // SubProg adjust_il pc: 209 op: ENDFOR_INT_UP1 (54)
        _0 = _i_53055;
        if (IS_ATOM_INT(_i_53055)) {
            _i_53055 = _i_53055 + 1;
            if ((object)((uintptr_t)_i_53055 +(uintptr_t) HIGH_BITS) >= 0){
                _i_53055 = NewDouble((eudouble)_i_53055);
            }
        }
        else {
            _i_53055 = binary_op_a(PLUS, _i_53055, 1);
        }
        DeRef(_0);
        goto L1; // [209] 30
L2: // addr: 214 pc: 209 sub: 53050 op: 54
        ;
        DeRef(_i_53055);
    }
    // SubProg adjust_il pc: 214 op: STARTLINE (58)

    /** inline.e:228		return 1*/
    // SubProg adjust_il pc: 216 op: RETURNF (28)

// Exiting block BLOCK: adjust_il

// block var pc_53052

// block var op_53053
    DeRef(_27108);
    _27108 = NOVALUE;
    DeRef(_27097);
    _27097 = NOVALUE;
    DeRef(_27090);
    _27090 = NOVALUE;
    DeRef(_27100);
    _27100 = NOVALUE;
    DeRef(_27104);
    _27104 = NOVALUE;
    DeRef(_27106);
    _27106 = NOVALUE;
    DeRef(_27101);
    _27101 = NOVALUE;
    return 1;
    // SubProg adjust_il pc: 220 op: BADRETURNF (43)
    ;
}


object _66is_temp(object _sym_53102)
{
    object _27123 = NOVALUE; // 53120 27123
    object _27122 = NOVALUE; // 53119 27122
    object _27121 = NOVALUE; // 53118 27121
    object _27120 = NOVALUE; // 53117 27120
    object _27119 = NOVALUE; // 53115 27119
    object _27118 = NOVALUE; // 53112 27118
    object _27117 = NOVALUE; // 53110 27117
    object _27116 = NOVALUE; // 53108 27116
    object _27115 = NOVALUE; // 53106 27115
// skipping _27114  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_temp pc: 3 op: STARTLINE (58)

    /** inline.e:232		if sym <= 0 then*/
    // SubProg is_temp pc: 5 op: LESSEQ_IFW (106)
    if (_sym_53102 > 0)
    goto L1; // [5] 16
    // SubProg is_temp pc: 9 op: STARTLINE (58)

    /** inline.e:233			return 0*/
    // SubProg is_temp pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_temp

// block var sym_53102
    return 0;
    // SubProg is_temp pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 53099 op: 159
    // SubProg is_temp pc: 16 op: STARTLINE (58)

    /** inline.e:236		return (SymTab[sym][S_MODE] = M_TEMP) and (not TRANSLATE or equal( NOVALUE, SymTab[sym][S_OBJ]) )*/
    // SubProg is_temp pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27115 = (object)*(((s1_ptr)_2)->base + _sym_53102);
    // SubProg is_temp pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27115);
    _27116 = (object)*(((s1_ptr)_2)->base + 3);
    _27115 = NOVALUE;
    // SubProg is_temp pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 32 op: EQUALS (3)
    if (IS_ATOM_INT(_27116)) {
        _27117 = (_27116 == 3);
    }
    else {
        _27117 = binary_op(EQUALS, _27116, 3);
    }
    _27116 = NOVALUE;
    // SubProg is_temp pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 38 op: NOT (7)
    _27118 = (_34TRANSLATE_14813 == 0);
    // SubProg is_temp pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27119 = (object)*(((s1_ptr)_2)->base + _sym_53102);
    // SubProg is_temp pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27119);
    _27120 = (object)*(((s1_ptr)_2)->base + 1);
    _27119 = NOVALUE;
    // SubProg is_temp pc: 55 op: EQUAL (153)
    if (_34NOVALUE_15043 == _27120)
    _27121 = 1;
    else if (IS_ATOM_INT(_34NOVALUE_15043) && IS_ATOM_INT(_27120))
    _27121 = 0;
    else
    _27121 = (compare(_34NOVALUE_15043, _27120) == 0);
    _27120 = NOVALUE;
    // SubProg is_temp pc: 59 op: OR (9)
    _27122 = (_27118 != 0 || _27121 != 0);
    _27118 = NOVALUE;
    _27121 = NOVALUE;
    // SubProg is_temp pc: 63 op: AND (8)
    if (IS_ATOM_INT(_27117)) {
        _27123 = (_27117 != 0 && _27122 != 0);
    }
    else {
        _27123 = binary_op(AND, _27117, _27122);
    }
    DeRef(_27117);
    _27117 = NOVALUE;
    _27122 = NOVALUE;
    // SubProg is_temp pc: 67 op: RETURNF (28)

// Exiting block BLOCK: is_temp

// block var sym_53102
    return _27123;
    // SubProg is_temp pc: 71 op: BADRETURNF (43)
    ;
}


object _66is_literal(object _sym_53124)
{
    object _mode_53127 = NOVALUE;
    object _27138 = NOVALUE; // 53153 27138
    object _27137 = NOVALUE; // 53151 27137
    object _27136 = NOVALUE; // 53149 27136
    object _27135 = NOVALUE; // 53147 27135
    object _27134 = NOVALUE; // 53146 27134
    object _27133 = NOVALUE; // 53144 27133
// skipping _27132  name type: 0
    object _27131 = NOVALUE; // 53141 27131
    object _27130 = NOVALUE; // 53140 27130
    object _27129 = NOVALUE; // 53138 27129
    object _27128 = NOVALUE; // 53135 27128
    object _27127 = NOVALUE; // 53134 27127
// skipping _27126  name type: 0
    object _27125 = NOVALUE; // 53129 27125
// skipping _27124  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_literal pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_literal pc: 3 op: STARTLINE (58)

    /** inline.e:240		if sym <= 0 then*/
    // SubProg is_literal pc: 5 op: LESSEQ_IFW (106)
    if (_sym_53124 > 0)
    goto L1; // [5] 16
    // SubProg is_literal pc: 9 op: STARTLINE (58)

    /** inline.e:241			return 0*/
    // SubProg is_literal pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53124

// block var mode_53127
    return 0;
    // SubProg is_literal pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 53121 op: 159
    // SubProg is_literal pc: 16 op: STARTLINE (58)

    /** inline.e:244		integer mode = SymTab[sym][S_MODE]*/
    // SubProg is_literal pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27125 = (object)*(((s1_ptr)_2)->base + _sym_53124);
    // SubProg is_literal pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27125);
    _mode_53127 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_53127)){
        _mode_53127 = (object)DBL_PTR(_mode_53127)->dbl;
    }
    _27125 = NOVALUE;
    // SubProg is_literal pc: 32 op: STARTLINE (58)

    /** inline.e:245		if (mode = M_CONSTANT and eu:compare( NOVALUE, SymTab[sym][S_OBJ]) ) */
    // SubProg is_literal pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 36 op: EQUALS (3)
    _27127 = (_mode_53127 == 2);
    // SubProg is_literal pc: 40 op: SC1_AND (141)
    if (_27127 == 0) {
        _27128 = 0;
        goto L2; // [40] 66
    }
    // SubProg is_literal pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27129 = (object)*(((s1_ptr)_2)->base + _sym_53124);
    // SubProg is_literal pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27129);
    _27130 = (object)*(((s1_ptr)_2)->base + 1);
    _27129 = NOVALUE;
    // SubProg is_literal pc: 58 op: COMPARE (76)
    if (IS_ATOM_INT(_34NOVALUE_15043) && IS_ATOM_INT(_27130)){
        _27131 = (_34NOVALUE_15043 < _27130) ? -1 : (_34NOVALUE_15043 > _27130);
    }
    else{
        _27131 = compare(_34NOVALUE_15043, _27130);
    }
    _27130 = NOVALUE;
    // SubProg is_literal pc: 62 op: SC2_AND (142)
    _27128 = (_27131 != 0);
    // SubProg is_literal pc: 65 op: NOP1 (159)
L2: // addr: 66 pc: 65 sub: 53121 op: 159
    // SubProg is_literal pc: 66 op: SC1_OR_IF (147)
    if (_27128 != 0) {
        goto L3; // [66] 117
    }
    // SubProg is_literal pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 72 op: SC1_AND (141)
    if (_34TRANSLATE_14813 == 0) {
        _27133 = 0;
        goto L4; // [72] 86
    }
    // SubProg is_literal pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 78 op: EQUALS (3)
    _27134 = (_mode_53127 == 3);
    // SubProg is_literal pc: 82 op: SC2_AND (142)
    _27133 = (_27134 != 0);
    // SubProg is_literal pc: 85 op: NOP1 (159)
L4: // addr: 86 pc: 85 sub: 53121 op: 159
    // SubProg is_literal pc: 86 op: SC1_AND (141)
    if (_27133 == 0) {
        DeRef(_27135);
        _27135 = 0;
        goto L5; // [86] 112
    }
    // SubProg is_literal pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 92 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27136 = (object)*(((s1_ptr)_2)->base + _sym_53124);
    // SubProg is_literal pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27136);
    _27137 = (object)*(((s1_ptr)_2)->base + 1);
    _27136 = NOVALUE;
    // SubProg is_literal pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 104 op: COMPARE (76)
    if (IS_ATOM_INT(_27137) && IS_ATOM_INT(_34NOVALUE_15043)){
        _27138 = (_27137 < _34NOVALUE_15043) ? -1 : (_27137 > _34NOVALUE_15043);
    }
    else{
        _27138 = compare(_27137, _34NOVALUE_15043);
    }
    _27137 = NOVALUE;
    // SubProg is_literal pc: 108 op: SC2_AND (142)
    _27135 = (_27138 != 0);
    // SubProg is_literal pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 53121 op: 159
    // SubProg is_literal pc: 112 op: NOP1 (159)
    // SubProg is_literal pc: 113 op: IF (20)
    if (_27135 == 0)
    {
        _27135 = NOVALUE;
        goto L6; // [113] 126
    }
    else{
        _27135 = NOVALUE;
    }
    // SubProg is_literal pc: 116 op: NOP1 (159)
L3: // addr: 117 pc: 116 sub: 53121 op: 159
    // SubProg is_literal pc: 117 op: STARTLINE (58)

    /** inline.e:247			return 1*/
    // SubProg is_literal pc: 119 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53124

// block var mode_53127
    DeRef(_27127);
    _27127 = NOVALUE;
    DeRef(_27134);
    _27134 = NOVALUE;
    return 1;
    // SubProg is_literal pc: 123 op: ELSE (23)
    goto L7; // [123] 133
    // SubProg is_literal pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 53121 op: 159
    // SubProg is_literal pc: 126 op: STARTLINE (58)

    /** inline.e:249			return 0*/
    // SubProg is_literal pc: 128 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53124

// block var mode_53127
    DeRef(_27127);
    _27127 = NOVALUE;
    DeRef(_27134);
    _27134 = NOVALUE;
    return 0;
    // SubProg is_literal pc: 132 op: NOP1 (159)
L7: // addr: 133 pc: 132 sub: 53121 op: 159
    // SubProg is_literal pc: 133 op: BADRETURNF (43)
    ;
}


object _66returnf(object _pc_53174)
{
    object _retsym_53176 = NOVALUE;
    object _code_53209 = NOVALUE;
    object _ret_pc_53210 = NOVALUE;
    object _code_53255 = NOVALUE;
    object _ret_pc_53269 = NOVALUE;
    object _27211 = NOVALUE; // 53276 27211
    object _27210 = NOVALUE; // 53275 27210
// skipping _27209  name type: 0
    object _27208 = NOVALUE; // 53273 27208
// skipping _27207  name type: 0
    object _27206 = NOVALUE; // 53270 27206
    object _27205 = NOVALUE; // 53268 27205
// skipping _27204  name type: 0
    object _27203 = NOVALUE; // 53266 27203
    object _27202 = NOVALUE; // 53265 27202
// skipping _27201  name type: 0
    object _27200 = NOVALUE; // 53262 27200
    object _27199 = NOVALUE; // 53261 27199
    object _27198 = NOVALUE; // 53259 27198
// skipping _27197  name type: 0
    object _27196 = NOVALUE; // 53253 27196
    object _27195 = NOVALUE; // 53252 27195
// skipping _27194  name type: 0
    object _27193 = NOVALUE; // 53250 27193
// skipping _27192  name type: 0
    object _27191 = NOVALUE; // 53247 27191
    object _27190 = NOVALUE; // 53246 27190
// skipping _27189  name type: 0
    object _27188 = NOVALUE; // 53244 27188
    object _27187 = NOVALUE; // 53243 27187
// skipping _27186  name type: 0
    object _27185 = NOVALUE; // 53240 27185
    object _27184 = NOVALUE; // 53239 27184
    object _27183 = NOVALUE; // 53237 27183
// skipping _27182  name type: 0
    object _27181 = NOVALUE; // 53234 27181
    object _27180 = NOVALUE; // 53231 27180
    object _27179 = NOVALUE; // 53230 27179
    object _27178 = NOVALUE; // 53228 27178
    object _27177 = NOVALUE; // 53227 27177
    object _27175 = NOVALUE; // 53224 27175
    object _27174 = NOVALUE; // 53222 27174
    object _27173 = NOVALUE; // 53221 27173
    object _27172 = NOVALUE; // 53220 27172
// skipping _27171  name type: 0
    object _27170 = NOVALUE; // 53217 27170
// skipping _27169  name type: 0
    object _27168 = NOVALUE; // 53214 27168
    object _27167 = NOVALUE; // 53213 27167
    object _27166 = NOVALUE; // 53212 27166
    object _27165 = NOVALUE; // 53208 27165
    object _27164 = NOVALUE; // 53206 27164
    object _27163 = NOVALUE; // 53204 27163
    object _27162 = NOVALUE; // 53202 27162
    object _27161 = NOVALUE; // 53201 27161
    object _27160 = NOVALUE; // 53200 27160
// skipping _27159  name type: 0
    object _27158 = NOVALUE; // 53198 27158
    object _27157 = NOVALUE; // 53196 27157
    object _27156 = NOVALUE; // 53195 27156
// skipping _27155  name type: 0
    object _27154 = NOVALUE; // 53192 27154
    object _27153 = NOVALUE; // 53190 27153
    object _27152 = NOVALUE; // 53186 27152
    object _27151 = NOVALUE; // 53183 27151
    object _27150 = NOVALUE; // 53181 27150
    object _27149 = NOVALUE; // 53180 27149
// skipping _27148  name type: 0
    object _27147 = NOVALUE; // 53177 27147
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg returnf pc: 1 op: INTEGER_CHECK (96)
    // SubProg returnf pc: 3 op: STARTLINE (58)

    /** inline.e:259		symtab_index retsym = inline_code[pc+3]*/
    // SubProg returnf pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 7 op: PLUS (11)
    _27147 = _pc_53174 + 3;
    // SubProg returnf pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _retsym_53176 = (object)*(((s1_ptr)_2)->base + _27147);
    if (!IS_ATOM_INT(_retsym_53176)){
        _retsym_53176 = (object)DBL_PTR(_retsym_53176)->dbl;
    }
    // SubProg returnf pc: 17 op: STARTLINE (58)

    /** inline.e:260		if equal( inline_code[$], BADRETURNF ) then*/
    // SubProg returnf pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27149 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27149 = 1;
    }
    // SubProg returnf pc: 24 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27150 = (object)*(((s1_ptr)_2)->base + _27149);
    // SubProg returnf pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 30 op: EQUAL (153)
    if (_27150 == 43)
    _27151 = 1;
    else if (IS_ATOM_INT(_27150) && IS_ATOM_INT(43))
    _27151 = 0;
    else
    _27151 = (compare(_27150, 43) == 0);
    _27150 = NOVALUE;
    // SubProg returnf pc: 34 op: IF (20)
    if (_27151 == 0)
    {
        _27151 = NOVALUE;
        goto L1; // [34] 102
    }
    else{
        _27151 = NOVALUE;
    }
    // SubProg returnf pc: 37 op: STARTLINE (58)

    /** inline.e:261			if TRANSLATE then*/
    // SubProg returnf pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 41 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L2; // [41] 60
    }
    else{
    }
    // SubProg returnf pc: 44 op: STARTLINE (58)

    /** inline.e:262				inline_code[$] = NOP1*/
    // SubProg returnf pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 48 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27152 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27152 = 1;
    }
    // SubProg returnf pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 53 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27152);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg returnf pc: 57 op: ELSE (23)
    goto L3; // [57] 101
    // SubProg returnf pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 53172 op: 159
    // SubProg returnf pc: 60 op: STARTLINE (58)

    /** inline.e:263			elsif SymTab[inline_sub][S_TOKEN] = PROC then*/
    // SubProg returnf pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 66 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27153 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52901);
    // SubProg returnf pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 72 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27153);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _27154 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _27154 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _27153 = NOVALUE;
    // SubProg returnf pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 78 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27154, 27)){
        _27154 = NOVALUE;
        goto L4; // [78] 100
    }
    _27154 = NOVALUE;
    // SubProg returnf pc: 82 op: STARTLINE (58)

    /** inline.e:264				replace_code( {}, length(inline_code), length(inline_code) )*/
    // SubProg returnf pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27156 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27156 = 1;
    }
    // SubProg returnf pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27157 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27157 = 1;
    }
    // SubProg returnf pc: 94 op: PROC (27)
    RefDS(_21936);
    _66replace_code(_21936, _27156, _27157);
    _27156 = NOVALUE;
    _27157 = NOVALUE;
    // SubProg returnf pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 53172 op: 159
    // SubProg returnf pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 53172 op: 159
    // SubProg returnf pc: 101 op: NOP1 (159)
L1: // addr: 102 pc: 101 sub: 53172 op: 159
    // SubProg returnf pc: 102 op: STARTLINE (58)

    /** inline.e:270		if is_temp( retsym ) */
    // SubProg returnf pc: 104 op: PROC (27)
    _27158 = _66is_temp(_retsym_53176);
    // SubProg returnf pc: 108 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_27158)) {
        if (_27158 != 0) {
            goto L5; // [108] 150
        }
    }
    else {
        if (DBL_PTR(_27158)->dbl != 0.0) {
            goto L5; // [108] 150
        }
    }
    // SubProg returnf pc: 112 op: PROC (27)
    _27160 = _66is_literal(_retsym_53176);
    // SubProg returnf pc: 116 op: NOT (7)
    if (IS_ATOM_INT(_27160)) {
        _27161 = (_27160 == 0);
    }
    else {
        _27161 = unary_op(NOT, _27160);
    }
    DeRef(_27160);
    _27160 = NOVALUE;
    // SubProg returnf pc: 119 op: SC1_AND (141)
    if (IS_ATOM_INT(_27161)) {
        if (_27161 == 0) {
            DeRef(_27162);
            _27162 = 0;
            goto L6; // [119] 145
        }
    }
    else {
        if (DBL_PTR(_27161)->dbl == 0.0) {
            DeRef(_27162);
            _27162 = 0;
            goto L6; // [119] 145
        }
    }
    // SubProg returnf pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 125 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27163 = (object)*(((s1_ptr)_2)->base + _retsym_53176);
    // SubProg returnf pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 131 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27163);
    _27164 = (object)*(((s1_ptr)_2)->base + 4);
    _27163 = NOVALUE;
    // SubProg returnf pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 137 op: LESSEQ (5)
    if (IS_ATOM_INT(_27164)) {
        _27165 = (_27164 <= 3);
    }
    else {
        _27165 = binary_op(LESSEQ, _27164, 3);
    }
    _27164 = NOVALUE;
    // SubProg returnf pc: 141 op: SC2_AND (142)
    DeRef(_27162);
    if (IS_ATOM_INT(_27165))
    _27162 = (_27165 != 0);
    else
    _27162 = DBL_PTR(_27165)->dbl != 0.0;
    // SubProg returnf pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 53172 op: 159
    // SubProg returnf pc: 145 op: NOP1 (159)
    // SubProg returnf pc: 146 op: IF (20)
    if (_27162 == 0)
    {
        _27162 = NOVALUE;
        goto L7; // [146] 393
    }
    else{
        _27162 = NOVALUE;
    }
    // SubProg returnf pc: 149 op: NOP1 (159)
L5: // addr: 150 pc: 149 sub: 53172 op: 159
    // SubProg returnf pc: 150 op: STARTLINE (58)

    /** inline.e:272			sequence code = {}*/
    // SubProg returnf pc: 152 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_code_53209);
    _code_53209 = _21936;
    // SubProg returnf pc: 155 op: SEQUENCE_CHECK (97)
    // SubProg returnf pc: 157 op: STARTLINE (58)

    /** inline.e:274			integer ret_pc = 0*/
    // SubProg returnf pc: 159 op: ASSIGN_I (113)
    _ret_pc_53210 = 0;
    // SubProg returnf pc: 162 op: STARTLINE (58)

    /** inline.e:276			if not (find( retsym, inline_params ) or find( retsym, proc_vars )) then*/
    // SubProg returnf pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 166 op: FIND_FROM (176)
    _27166 = find_from(_retsym_53176, _66inline_params_52892, 1);
    // SubProg returnf pc: 171 op: SC1_OR (143)
    if (_27166 != 0) {
        DeRef(_27167);
        _27167 = 1;
        goto L8; // [171] 186
    }
    // SubProg returnf pc: 175 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 177 op: FIND_FROM (176)
    _27168 = find_from(_retsym_53176, _66proc_vars_52888, 1);
    // SubProg returnf pc: 182 op: SC2_OR (144)
    _27167 = (_27168 != 0);
    // SubProg returnf pc: 185 op: NOP1 (159)
L8: // addr: 186 pc: 185 sub: 53172 op: 159
    // SubProg returnf pc: 186 op: NOT_IFW (108)
    if (_27167 != 0)
    goto L9; // [186] 206
    _27167 = NOVALUE;
    // SubProg returnf pc: 189 op: STARTLINE (58)

    /** inline.e:277				ret_pc = rfind( generic_symbol( retsym ), inline_code, pc )*/
    // SubProg returnf pc: 191 op: PROC (27)
    _27170 = _66generic_symbol(_retsym_53176);
    // SubProg returnf pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 197 op: PROC (27)
    RefDS(_66inline_code_52887);
    _ret_pc_53210 = _17rfind(_27170, _66inline_code_52887, _pc_53174);
    _27170 = NOVALUE;
    // SubProg returnf pc: 203 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ret_pc_53210)) {
        _1 = (object)(DBL_PTR(_ret_pc_53210)->dbl);
        DeRefDS(_ret_pc_53210);
        _ret_pc_53210 = _1;
    }
    // SubProg returnf pc: 205 op: NOP1 (159)
L9: // addr: 206 pc: 205 sub: 53172 op: 159
    // SubProg returnf pc: 206 op: STARTLINE (58)

    /** inline.e:281			if ret_pc and eu:compare( inline_code[ret_pc-1], PRIVATE_INIT_CHECK ) then*/
    // SubProg returnf pc: 208 op: SC1_AND_IF (146)
    if (_ret_pc_53210 == 0) {
        goto LA; // [208] 277
    }
    // SubProg returnf pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 214 op: MINUS (10)
    _27173 = _ret_pc_53210 - 1;
    // SubProg returnf pc: 218 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27174 = (object)*(((s1_ptr)_2)->base + _27173);
    // SubProg returnf pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 224 op: COMPARE (76)
    if (IS_ATOM_INT(_27174) && IS_ATOM_INT(30)){
        _27175 = (_27174 < 30) ? -1 : (_27174 > 30);
    }
    else{
        _27175 = compare(_27174, 30);
    }
    _27174 = NOVALUE;
    // SubProg returnf pc: 228 op: NOP1 (159)
    // SubProg returnf pc: 229 op: IF (20)
    if (_27175 == 0)
    {
        _27175 = NOVALUE;
        goto LA; // [229] 277
    }
    else{
        _27175 = NOVALUE;
    }
    // SubProg returnf pc: 232 op: STARTLINE (58)

    /** inline.e:282				inline_code[ret_pc] = {INLINE_TARGET}*/
    // SubProg returnf pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 236 op: ASSIGN_SUBS (16)
    RefDS(_27176);
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ret_pc_53210);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27176;
    DeRef(_1);
    // SubProg returnf pc: 240 op: STARTLINE (58)

    /** inline.e:284				if equal( inline_code[ret_pc-1], REF_TEMP ) then*/
    // SubProg returnf pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 244 op: MINUS (10)
    _27177 = _ret_pc_53210 - 1;
    // SubProg returnf pc: 248 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27178 = (object)*(((s1_ptr)_2)->base + _27177);
    // SubProg returnf pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 254 op: EQUAL (153)
    if (_27178 == 207)
    _27179 = 1;
    else if (IS_ATOM_INT(_27178) && IS_ATOM_INT(207))
    _27179 = 0;
    else
    _27179 = (compare(_27178, 207) == 0);
    _27178 = NOVALUE;
    // SubProg returnf pc: 258 op: IF (20)
    if (_27179 == 0)
    {
        _27179 = NOVALUE;
        goto LB; // [258] 292
    }
    else{
        _27179 = NOVALUE;
    }
    // SubProg returnf pc: 261 op: STARTLINE (58)

    /** inline.e:287					inline_code[ret_pc-2] = {INLINE_TARGET}*/
    // SubProg returnf pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 265 op: MINUS (10)
    _27180 = _ret_pc_53210 - 2;
    // SubProg returnf pc: 269 op: ASSIGN_SUBS (16)
    RefDS(_27176);
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27176;
    DeRef(_1);
    // SubProg returnf pc: 273 op: NOP1 (159)
    // SubProg returnf pc: 274 op: ELSE (23)
    goto LB; // [274] 292
    // SubProg returnf pc: 276 op: NOP1 (159)
LA: // addr: 277 pc: 276 sub: 53172 op: 159
    // SubProg returnf pc: 277 op: STARTLINE (58)

    /** inline.e:290				code = {ASSIGN, generic_symbol( retsym ), {INLINE_TARGET}}*/
    // SubProg returnf pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 281 op: PROC (27)
    _27181 = _66generic_symbol(_retsym_53176);
    // SubProg returnf pc: 285 op: RIGHT_BRACE_N (31)
    _0 = _code_53209;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _27181;
    RefDS(_27176);
    ((intptr_t*)_2)[3] = _27176;
    _code_53209 = MAKE_SEQ(_1);
    DeRef(_0);
    _27181 = NOVALUE;
    // SubProg returnf pc: 291 op: NOP1 (159)
LB: // addr: 292 pc: 291 sub: 53172 op: 159
    // SubProg returnf pc: 292 op: STARTLINE (58)

    /** inline.e:293			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    // SubProg returnf pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 296 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27183 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27183 = 1;
    }
    // SubProg returnf pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 301 op: PLUS (11)
    _27184 = 3 + _34TRANSLATE_14813;
    // SubProg returnf pc: 305 op: MINUS (10)
    _27185 = _27183 - _27184;
    _27183 = NOVALUE;
    _27184 = NOVALUE;
    // SubProg returnf pc: 309 op: NOTEQ_IFW (105)
    if (_pc_53174 == _27185)
    goto LC; // [309] 330
    // SubProg returnf pc: 313 op: STARTLINE (58)

    /** inline.e:294				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    // SubProg returnf pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 317 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27187 = MAKE_SEQ(_1);
    // SubProg returnf pc: 321 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27187;
    _27188 = MAKE_SEQ(_1);
    _27187 = NOVALUE;
    // SubProg returnf pc: 325 op: CONCAT (15)
    Concat((object_ptr)&_code_53209, _code_53209, _27188);
    DeRefDS(_27188);
    _27188 = NOVALUE;
    // SubProg returnf pc: 329 op: NOP1 (159)
LC: // addr: 330 pc: 329 sub: 53172 op: 159
    // SubProg returnf pc: 330 op: STARTLINE (58)

    /** inline.e:298			replace_code( code, pc, pc + 3 )*/
    // SubProg returnf pc: 332 op: PLUS (11)
    _27190 = _pc_53174 + 3;
    if ((object)((uintptr_t)_27190 + (uintptr_t)HIGH_BITS) >= 0){
        _27190 = NewDouble((eudouble)_27190);
    }
    // SubProg returnf pc: 336 op: PROC (27)
    RefDS(_code_53209);
    _66replace_code(_code_53209, _pc_53174, _27190);
    _27190 = NOVALUE;
    // SubProg returnf pc: 341 op: STARTLINE (58)

    /** inline.e:299			ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    // SubProg returnf pc: 343 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27191 = MAKE_SEQ(_1);
    // SubProg returnf pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 349 op: FIND_FROM (176)
    _ret_pc_53210 = find_from(_27191, _66inline_code_52887, _pc_53174);
    DeRefDS(_27191);
    _27191 = NOVALUE;
    // SubProg returnf pc: 354 op: STARTLINE (58)

    /** inline.e:300			if ret_pc then*/
    // SubProg returnf pc: 356 op: IF (20)
    if (_ret_pc_53210 == 0)
    {
        goto LD; // [356] 382
    }
    else{
    }
    // SubProg returnf pc: 359 op: STARTLINE (58)

    /** inline.e:301				inline_code[ret_pc][2] = length(inline_code) + 1*/
    // SubProg returnf pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 363 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53210 + ((s1_ptr)_2)->base);
    // SubProg returnf pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 370 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27195 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27195 = 1;
    }
    // SubProg returnf pc: 373 op: PLUS1 (93)
    _27196 = _27195 + 1;
    _27195 = NOVALUE;
    // SubProg returnf pc: 377 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27196;
    if( _1 != _27196 ){
        DeRef(_1);
    }
    _27196 = NOVALUE;
    _27193 = NOVALUE;
    // SubProg returnf pc: 381 op: NOP1 (159)
LD: // addr: 382 pc: 381 sub: 53172 op: 159
    // SubProg returnf pc: 382 op: STARTLINE (58)

    /** inline.e:303			return 1*/
    // SubProg returnf pc: 384 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var code_53209
    DeRef(_code_53209);

// block var ret_pc_53210

// Exiting block BLOCK: returnf

// block var pc_53174

// block var retsym_53176
    DeRef(_27158);
    _27158 = NOVALUE;
    DeRef(_27180);
    _27180 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    DeRef(_27147);
    _27147 = NOVALUE;
    DeRef(_27185);
    _27185 = NOVALUE;
    DeRef(_27173);
    _27173 = NOVALUE;
    DeRef(_27161);
    _27161 = NOVALUE;
    DeRef(_27165);
    _27165 = NOVALUE;
    return 1;
    // SubProg returnf pc: 388 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53209

// block var ret_pc_53210
    // SubProg returnf pc: 390 op: ELSE (23)
    goto LE; // [390] 502
    // SubProg returnf pc: 392 op: NOP1 (159)
L7: // addr: 393 pc: 392 sub: 53172 op: 159
    // SubProg returnf pc: 393 op: STARTLINE (58)

    /** inline.e:306			sequence code = {ASSIGN, retsym, {INLINE_TARGET}}*/
    // SubProg returnf pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 397 op: RIGHT_BRACE_N (31)
    _0 = _code_53255;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _retsym_53176;
    RefDS(_27176);
    ((intptr_t*)_2)[3] = _27176;
    _code_53255 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg returnf pc: 403 op: STARTLINE (58)

    /** inline.e:307			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    // SubProg returnf pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 407 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27198 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27198 = 1;
    }
    // SubProg returnf pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 412 op: PLUS (11)
    _27199 = 3 + _34TRANSLATE_14813;
    // SubProg returnf pc: 416 op: MINUS (10)
    _27200 = _27198 - _27199;
    _27198 = NOVALUE;
    _27199 = NOVALUE;
    // SubProg returnf pc: 420 op: NOTEQ_IFW (105)
    if (_pc_53174 == _27200)
    goto LF; // [420] 441
    // SubProg returnf pc: 424 op: STARTLINE (58)

    /** inline.e:308				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    // SubProg returnf pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 428 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27202 = MAKE_SEQ(_1);
    // SubProg returnf pc: 432 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27202;
    _27203 = MAKE_SEQ(_1);
    _27202 = NOVALUE;
    // SubProg returnf pc: 436 op: CONCAT (15)
    Concat((object_ptr)&_code_53255, _code_53255, _27203);
    DeRefDS(_27203);
    _27203 = NOVALUE;
    // SubProg returnf pc: 440 op: NOP1 (159)
LF: // addr: 441 pc: 440 sub: 53172 op: 159
    // SubProg returnf pc: 441 op: STARTLINE (58)

    /** inline.e:312			replace_code( code, pc, pc + 3 )*/
    // SubProg returnf pc: 443 op: PLUS (11)
    _27205 = _pc_53174 + 3;
    if ((object)((uintptr_t)_27205 + (uintptr_t)HIGH_BITS) >= 0){
        _27205 = NewDouble((eudouble)_27205);
    }
    // SubProg returnf pc: 447 op: PROC (27)
    RefDS(_code_53255);
    _66replace_code(_code_53255, _pc_53174, _27205);
    _27205 = NOVALUE;
    // SubProg returnf pc: 452 op: STARTLINE (58)

    /** inline.e:313			integer ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    // SubProg returnf pc: 454 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27206 = MAKE_SEQ(_1);
    // SubProg returnf pc: 458 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 460 op: FIND_FROM (176)
    _ret_pc_53269 = find_from(_27206, _66inline_code_52887, _pc_53174);
    DeRefDS(_27206);
    _27206 = NOVALUE;
    // SubProg returnf pc: 465 op: STARTLINE (58)

    /** inline.e:314			if ret_pc then*/
    // SubProg returnf pc: 467 op: IF (20)
    if (_ret_pc_53269 == 0)
    {
        goto L10; // [467] 493
    }
    else{
    }
    // SubProg returnf pc: 470 op: STARTLINE (58)

    /** inline.e:315				inline_code[ret_pc][2] = length(inline_code) + 1*/
    // SubProg returnf pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 474 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53269 + ((s1_ptr)_2)->base);
    // SubProg returnf pc: 479 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 481 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27210 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27210 = 1;
    }
    // SubProg returnf pc: 484 op: PLUS1 (93)
    _27211 = _27210 + 1;
    _27210 = NOVALUE;
    // SubProg returnf pc: 488 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27211;
    if( _1 != _27211 ){
        DeRef(_1);
    }
    _27211 = NOVALUE;
    _27208 = NOVALUE;
    // SubProg returnf pc: 492 op: NOP1 (159)
L10: // addr: 493 pc: 492 sub: 53172 op: 159
    // SubProg returnf pc: 493 op: STARTLINE (58)

    /** inline.e:317			return 1*/
    // SubProg returnf pc: 495 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var code_53255
    DeRef(_code_53255);

// block var ret_pc_53269

// Exiting block BLOCK: returnf

// block var pc_53174

// block var retsym_53176
    DeRef(_27158);
    _27158 = NOVALUE;
    DeRef(_27200);
    _27200 = NOVALUE;
    DeRef(_27180);
    _27180 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    DeRef(_27147);
    _27147 = NOVALUE;
    DeRef(_27185);
    _27185 = NOVALUE;
    DeRef(_27173);
    _27173 = NOVALUE;
    DeRef(_27161);
    _27161 = NOVALUE;
    DeRef(_27165);
    _27165 = NOVALUE;
    return 1;
    // SubProg returnf pc: 499 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53255

// block var ret_pc_53269
    // SubProg returnf pc: 501 op: NOP1 (159)
LE: // addr: 502 pc: 501 sub: 53172 op: 159
    // SubProg returnf pc: 502 op: STARTLINE (58)

    /** inline.e:319		return 0*/
    // SubProg returnf pc: 504 op: RETURNF (28)

// Exiting block BLOCK: returnf

// block var pc_53174

// block var retsym_53176
    DeRef(_27158);
    _27158 = NOVALUE;
    DeRef(_27200);
    _27200 = NOVALUE;
    DeRef(_27180);
    _27180 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    DeRef(_27147);
    _27147 = NOVALUE;
    DeRef(_27185);
    _27185 = NOVALUE;
    DeRef(_27173);
    _27173 = NOVALUE;
    DeRef(_27161);
    _27161 = NOVALUE;
    DeRef(_27165);
    _27165 = NOVALUE;
    return 0;
    // SubProg returnf pc: 508 op: BADRETURNF (43)
    ;
}


object _66inline_op(object _pc_53279)
{
    object _op_53280 = NOVALUE;
    object _code_53285 = NOVALUE;
    object _stlen_53318 = NOVALUE;
    object _file_53323 = NOVALUE;
    object _ok_53328 = NOVALUE;
    object _original_table_53351 = NOVALUE;
    object _jump_table_53355 = NOVALUE;
// skipping _27273  name type: 0
    object _27272 = NOVALUE; // 53394 27272
    object _27271 = NOVALUE; // 53392 27271
    object _27270 = NOVALUE; // 53391 27270
    object _27269 = NOVALUE; // 53390 27269
    object _27268 = NOVALUE; // 53389 27268
    object _27267 = NOVALUE; // 53388 27267
    object _27266 = NOVALUE; // 53385 27266
    object _27265 = NOVALUE; // 53384 27265
    object _27264 = NOVALUE; // 53383 27264
    object _27263 = NOVALUE; // 53382 27263
    object _27262 = NOVALUE; // 53381 27262
    object _27261 = NOVALUE; // 53376 27261
    object _27258 = NOVALUE; // 53370 27258
    object _27257 = NOVALUE; // 53369 27257
    object _27256 = NOVALUE; // 53368 27256
    object _27255 = NOVALUE; // 53366 27255
// skipping _27254  name type: 0
    object _27253 = NOVALUE; // 53362 27253
// skipping _27252  name type: 0
    object _27251 = NOVALUE; // 53359 27251
    object _27250 = NOVALUE; // 53358 27250
// skipping _27249  name type: 0
    object _27248 = NOVALUE; // 53352 27248
// skipping _27245  name type: 0
    object _27244 = NOVALUE; // 53340 27244
    object _27243 = NOVALUE; // 53338 27243
    object _27242 = NOVALUE; // 53335 27242
    object _27241 = NOVALUE; // 53333 27241
    object _27240 = NOVALUE; // 53332 27240
    object _27239 = NOVALUE; // 53330 27239
// skipping _27238  name type: 0
// skipping _27237  name type: 0
    object _27236 = NOVALUE; // 53326 27236
    object _27235 = NOVALUE; // 53324 27235
// skipping _27234  name type: 0
    object _27233 = NOVALUE; // 53321 27233
    object _27232 = NOVALUE; // 53319 27232
// skipping _27231  name type: 0
    object _27230 = NOVALUE; // 53314 27230
// skipping _27229  name type: 0
    object _27228 = NOVALUE; // 53310 27228
    object _27227 = NOVALUE; // 53308 27227
    object _27226 = NOVALUE; // 53307 27226
    object _27225 = NOVALUE; // 53305 27225
    object _27224 = NOVALUE; // 53304 27224
    object _27223 = NOVALUE; // 53303 27223
    object _27222 = NOVALUE; // 53299 27222
// skipping _27221  name type: 0
    object _27220 = NOVALUE; // 53295 27220
    object _27219 = NOVALUE; // 53294 27219
    object _27218 = NOVALUE; // 53293 27218
// skipping _27217  name type: 0
    object _27216 = NOVALUE; // 53290 27216
    object _27215 = NOVALUE; // 53288 27215
    object _27214 = NOVALUE; // 53287 27214
// skipping _27213  name type: 0
// skipping _27212  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg inline_op pc: 1 op: INTEGER_CHECK (96)
    // SubProg inline_op pc: 3 op: STARTLINE (58)

    /** inline.e:324		integer op = inline_code[pc]*/
    // SubProg inline_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _op_53280 = (object)*(((s1_ptr)_2)->base + _pc_53279);
    if (!IS_ATOM_INT(_op_53280))
    _op_53280 = (object)DBL_PTR(_op_53280)->dbl;
    // SubProg inline_op pc: 11 op: STARTLINE (58)

    /** inline.e:326		if op = RETURNP then*/
    // SubProg inline_op pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 15 op: EQUALS_IFW (104)
    if (_op_53280 != 29)
    goto L1; // [15] 150
    // SubProg inline_op pc: 19 op: STARTLINE (58)

    /** inline.e:333			sequence code = ""*/
    // SubProg inline_op pc: 21 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_code_53285);
    _code_53285 = _21936;
    // SubProg inline_op pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg inline_op pc: 26 op: STARTLINE (58)

    /** inline.e:335			if pc != length( inline_code ) - 1 - TRANSLATE then*/
    // SubProg inline_op pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27214 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27214 = 1;
    }
    // SubProg inline_op pc: 33 op: MINUS (10)
    _27215 = _27214 - 1;
    _27214 = NOVALUE;
    // SubProg inline_op pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 39 op: MINUS (10)
    _27216 = _27215 - _34TRANSLATE_14813;
    _27215 = NOVALUE;
    // SubProg inline_op pc: 43 op: NOTEQ_IFW (105)
    if (_pc_53279 == _27216)
    goto L2; // [43] 92
    // SubProg inline_op pc: 47 op: STARTLINE (58)

    /** inline.e:336				code = { ELSE, {INLINE_ADDR, length( inline_code ) + 1 }}*/
    // SubProg inline_op pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27218 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27218 = 1;
    }
    // SubProg inline_op pc: 56 op: PLUS1 (93)
    _27219 = _27218 + 1;
    _27218 = NOVALUE;
    // SubProg inline_op pc: 60 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = _27219;
    _27220 = MAKE_SEQ(_1);
    _27219 = NOVALUE;
    // SubProg inline_op pc: 64 op: RIGHT_BRACE_2 (85)
    DeRefDS(_code_53285);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27220;
    _code_53285 = MAKE_SEQ(_1);
    _27220 = NOVALUE;
    // SubProg inline_op pc: 68 op: STARTLINE (58)

    /** inline.e:337				if TRANSLATE then*/
    // SubProg inline_op pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 72 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L3; // [72] 134
    }
    else{
    }
    // SubProg inline_op pc: 75 op: STARTLINE (58)

    /** inline.e:338					inline_code[$] = NOP1*/
    // SubProg inline_op pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27222 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27222 = 1;
    }
    // SubProg inline_op pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 84 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27222);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg inline_op pc: 88 op: NOP1 (159)
    // SubProg inline_op pc: 89 op: ELSE (23)
    goto L3; // [89] 134
    // SubProg inline_op pc: 91 op: NOP1 (159)
L2: // addr: 92 pc: 91 sub: 53277 op: 159
    // SubProg inline_op pc: 92 op: STARTLINE (58)

    /** inline.e:341			elsif TRANSLATE and inline_code[$] = BADRETURNF then*/
    // SubProg inline_op pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 96 op: SC1_AND_IF (146)
    if (_34TRANSLATE_14813 == 0) {
        goto L4; // [96] 133
    }
    // SubProg inline_op pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 102 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27224 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27224 = 1;
    }
    // SubProg inline_op pc: 105 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27225 = (object)*(((s1_ptr)_2)->base + _27224);
    // SubProg inline_op pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 111 op: EQUALS (3)
    if (IS_ATOM_INT(_27225)) {
        _27226 = (_27225 == 43);
    }
    else {
        _27226 = binary_op(EQUALS, _27225, 43);
    }
    _27225 = NOVALUE;
    // SubProg inline_op pc: 115 op: NOP1 (159)
    // SubProg inline_op pc: 116 op: IF (20)
    if (_27226 == 0) {
        DeRef(_27226);
        _27226 = NOVALUE;
        goto L4; // [116] 133
    }
    else {
        if (!IS_ATOM_INT(_27226) && DBL_PTR(_27226)->dbl == 0.0){
            DeRef(_27226);
            _27226 = NOVALUE;
            goto L4; // [116] 133
        }
        DeRef(_27226);
        _27226 = NOVALUE;
    }
    DeRef(_27226);
    _27226 = NOVALUE;
    // SubProg inline_op pc: 119 op: STARTLINE (58)

    /** inline.e:342				inline_code[$] = NOP1*/
    // SubProg inline_op pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 123 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27227 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27227 = 1;
    }
    // SubProg inline_op pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 128 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27227);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg inline_op pc: 132 op: NOP1 (159)
L4: // addr: 133 pc: 132 sub: 53277 op: 159
    // SubProg inline_op pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 53277 op: 159
    // SubProg inline_op pc: 134 op: STARTLINE (58)

    /** inline.e:344			replace_code( code, pc, pc + 2 )*/
    // SubProg inline_op pc: 136 op: PLUS (11)
    _27228 = _pc_53279 + 2;
    if ((object)((uintptr_t)_27228 + (uintptr_t)HIGH_BITS) >= 0){
        _27228 = NewDouble((eudouble)_27228);
    }
    // SubProg inline_op pc: 140 op: PROC (27)
    RefDS(_code_53285);
    _66replace_code(_code_53285, _pc_53279, _27228);
    _27228 = NOVALUE;
    // SubProg inline_op pc: 145 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53285
    DeRefDS(_code_53285);
    _code_53285 = NOVALUE;
    // SubProg inline_op pc: 147 op: ELSE (23)
    goto L5; // [147] 526
    // SubProg inline_op pc: 149 op: NOP1 (159)
L1: // addr: 150 pc: 149 sub: 53277 op: 159
    // SubProg inline_op pc: 150 op: STARTLINE (58)

    /** inline.e:346		elsif op = RETURNF then*/
    // SubProg inline_op pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 154 op: EQUALS_IFW (104)
    if (_op_53280 != 28)
    goto L6; // [154] 171
    // SubProg inline_op pc: 158 op: STARTLINE (58)

    /** inline.e:347			return returnf( pc )*/
    // SubProg inline_op pc: 160 op: PROC (27)
    _27230 = _66returnf(_pc_53279);
    // SubProg inline_op pc: 164 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53279

// block var op_53280
    DeRef(_27216);
    _27216 = NOVALUE;
    return _27230;
    // SubProg inline_op pc: 168 op: ELSE (23)
    goto L5; // [168] 526
    // SubProg inline_op pc: 170 op: NOP1 (159)
L6: // addr: 171 pc: 170 sub: 53277 op: 159
    // SubProg inline_op pc: 171 op: STARTLINE (58)

    /** inline.e:349		elsif op = ROUTINE_ID then*/
    // SubProg inline_op pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 175 op: EQUALS_IFW (104)
    if (_op_53280 != 134)
    goto L7; // [175] 273
    // SubProg inline_op pc: 179 op: STARTLINE (58)

    /** inline.e:351			integer*/
    // SubProg inline_op pc: 181 op: STARTLINE (58)

    /** inline.e:352				stlen = inline_code[pc+2+TRANSLATE],*/
    // SubProg inline_op pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 185 op: PLUS (11)
    _27232 = _pc_53279 + 2;
    if ((object)((uintptr_t)_27232 + (uintptr_t)HIGH_BITS) >= 0){
        _27232 = NewDouble((eudouble)_27232);
    }
    // SubProg inline_op pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 191 op: PLUS (11)
    if (IS_ATOM_INT(_27232)) {
        _27233 = _27232 + _34TRANSLATE_14813;
    }
    else {
        _27233 = NewDouble(DBL_PTR(_27232)->dbl + (eudouble)_34TRANSLATE_14813);
    }
    DeRef(_27232);
    _27232 = NOVALUE;
    // SubProg inline_op pc: 195 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!IS_ATOM_INT(_27233)){
        _stlen_53318 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27233)->dbl));
    }
    else{
        _stlen_53318 = (object)*(((s1_ptr)_2)->base + _27233);
    }
    if (!IS_ATOM_INT(_stlen_53318))
    _stlen_53318 = (object)DBL_PTR(_stlen_53318)->dbl;
    // SubProg inline_op pc: 199 op: STARTLINE (58)

    /** inline.e:353				file  = inline_code[pc+4+TRANSLATE],*/
    // SubProg inline_op pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 203 op: PLUS (11)
    _27235 = _pc_53279 + 4;
    if ((object)((uintptr_t)_27235 + (uintptr_t)HIGH_BITS) >= 0){
        _27235 = NewDouble((eudouble)_27235);
    }
    // SubProg inline_op pc: 207 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 209 op: PLUS (11)
    if (IS_ATOM_INT(_27235)) {
        _27236 = _27235 + _34TRANSLATE_14813;
    }
    else {
        _27236 = NewDouble(DBL_PTR(_27235)->dbl + (eudouble)_34TRANSLATE_14813);
    }
    DeRef(_27235);
    _27235 = NOVALUE;
    // SubProg inline_op pc: 213 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!IS_ATOM_INT(_27236)){
        _file_53323 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27236)->dbl));
    }
    else{
        _file_53323 = (object)*(((s1_ptr)_2)->base + _27236);
    }
    if (!IS_ATOM_INT(_file_53323))
    _file_53323 = (object)DBL_PTR(_file_53323)->dbl;
    // SubProg inline_op pc: 217 op: STARTLINE (58)

    /** inline.e:354				ok    = adjust_il( pc, op )*/
    // SubProg inline_op pc: 219 op: PROC (27)
    _ok_53328 = _66adjust_il(_pc_53279, _op_53280);
    // SubProg inline_op pc: 224 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ok_53328)) {
        _1 = (object)(DBL_PTR(_ok_53328)->dbl);
        DeRefDS(_ok_53328);
        _ok_53328 = _1;
    }
    // SubProg inline_op pc: 226 op: STARTLINE (58)

    /** inline.e:355			inline_code[pc+2+TRANSLATE] = stlen*/
    // SubProg inline_op pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 230 op: PLUS (11)
    _27239 = _pc_53279 + 2;
    if ((object)((uintptr_t)_27239 + (uintptr_t)HIGH_BITS) >= 0){
        _27239 = NewDouble((eudouble)_27239);
    }
    // SubProg inline_op pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 236 op: PLUS (11)
    if (IS_ATOM_INT(_27239)) {
        _27240 = _27239 + _34TRANSLATE_14813;
    }
    else {
        _27240 = NewDouble(DBL_PTR(_27239)->dbl + (eudouble)_34TRANSLATE_14813);
    }
    DeRef(_27239);
    _27239 = NOVALUE;
    // SubProg inline_op pc: 240 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27240))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27240)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27240);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _stlen_53318;
    DeRef(_1);
    // SubProg inline_op pc: 244 op: STARTLINE (58)

    /** inline.e:356			inline_code[pc+4+TRANSLATE] = file*/
    // SubProg inline_op pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 248 op: PLUS (11)
    _27241 = _pc_53279 + 4;
    if ((object)((uintptr_t)_27241 + (uintptr_t)HIGH_BITS) >= 0){
        _27241 = NewDouble((eudouble)_27241);
    }
    // SubProg inline_op pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 254 op: PLUS (11)
    if (IS_ATOM_INT(_27241)) {
        _27242 = _27241 + _34TRANSLATE_14813;
    }
    else {
        _27242 = NewDouble(DBL_PTR(_27241)->dbl + (eudouble)_34TRANSLATE_14813);
    }
    DeRef(_27241);
    _27241 = NOVALUE;
    // SubProg inline_op pc: 258 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27242))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27242)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27242);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _file_53323;
    DeRef(_1);
    // SubProg inline_op pc: 262 op: STARTLINE (58)

    /** inline.e:358			return ok*/
    // SubProg inline_op pc: 264 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var stlen_53318

// block var file_53323

// Exiting block BLOCK: inline_op

// block var pc_53279

// block var op_53280
    DeRef(_27230);
    _27230 = NOVALUE;
    DeRef(_27240);
    _27240 = NOVALUE;
    DeRef(_27242);
    _27242 = NOVALUE;
    DeRef(_27233);
    _27233 = NOVALUE;
    DeRef(_27236);
    _27236 = NOVALUE;
    DeRef(_27216);
    _27216 = NOVALUE;
    return _ok_53328;
    // SubProg inline_op pc: 268 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var stlen_53318

// block var file_53323

// block var ok_53328
    // SubProg inline_op pc: 270 op: ELSE (23)
    goto L5; // [270] 526
    // SubProg inline_op pc: 272 op: NOP1 (159)
L7: // addr: 273 pc: 272 sub: 53277 op: 159
    // SubProg inline_op pc: 273 op: STARTLINE (58)

    /** inline.e:360		elsif op_info[op][OP_SIZE_TYPE] = FIXED_SIZE then*/
    // SubProg inline_op pc: 275 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 277 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_65op_info_23872);
    _27243 = (object)*(((s1_ptr)_2)->base + _op_53280);
    // SubProg inline_op pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 283 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27243);
    _27244 = (object)*(((s1_ptr)_2)->base + 1);
    _27243 = NOVALUE;
    // SubProg inline_op pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 289 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27244, 1)){
        _27244 = NOVALUE;
        goto L8; // [289] 397
    }
    _27244 = NOVALUE;
    // SubProg inline_op pc: 293 op: STARTLINE (58)

    /** inline.e:361			switch op do*/
    // SubProg inline_op pc: 295 op: SWITCH_I (193)
    _0 = _op_53280;
    switch ( _0 ){ 
        // SubProg inline_op pc: 300 op: STARTLINE (58)

        /** inline.e:362				case SWITCH, SWITCH_RT, SWITCH_I, SWITCH_SPI then*/
        // SubProg inline_op pc: 302 op: CASE (186)
        case 185:
        // SubProg inline_op pc: 304 op: CASE (186)
        case 202:
        // SubProg inline_op pc: 306 op: CASE (186)
        case 193:
        // SubProg inline_op pc: 308 op: CASE (186)
        case 192:
        // SubProg inline_op pc: 310 op: STARTLINE (58)

        /** inline.e:364					symtab_index original_table = inline_code[pc + 3]*/
        // SubProg inline_op pc: 312 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 314 op: PLUS (11)
        _27248 = _pc_53279 + 3;
        // SubProg inline_op pc: 318 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _original_table_53351 = (object)*(((s1_ptr)_2)->base + _27248);
        if (!IS_ATOM_INT(_original_table_53351)){
            _original_table_53351 = (object)DBL_PTR(_original_table_53351)->dbl;
        }
        // SubProg inline_op pc: 324 op: STARTLINE (58)

        /** inline.e:365					symtab_index jump_table = NewStringSym( {-2, length(SymTab) } )*/
        // SubProg inline_op pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 328 op: LENGTH (42)
        if (IS_SEQUENCE(_35SymTab_14156)){
                _27250 = SEQ_PTR(_35SymTab_14156)->length;
        }
        else {
            _27250 = 1;
        }
        // SubProg inline_op pc: 331 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = _27250;
        _27251 = MAKE_SEQ(_1);
        _27250 = NOVALUE;
        // SubProg inline_op pc: 335 op: PROC (27)
        _jump_table_53355 = _53NewStringSym(_27251);
        _27251 = NOVALUE;
        // SubProg inline_op pc: 339 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_jump_table_53355)) {
            _1 = (object)(DBL_PTR(_jump_table_53355)->dbl);
            DeRefDS(_jump_table_53355);
            _jump_table_53355 = _1;
        }
        // SubProg inline_op pc: 341 op: STARTLINE (58)

        /** inline.e:366					SymTab[jump_table][S_OBJ] = SymTab[original_table][S_OBJ]*/
        // SubProg inline_op pc: 343 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 345 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        _3 = (object)(_jump_table_53355 + ((s1_ptr)_2)->base);
        // SubProg inline_op pc: 350 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 352 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 354 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27255 = (object)*(((s1_ptr)_2)->base + _original_table_53351);
        // SubProg inline_op pc: 358 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 360 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27255);
        _27256 = (object)*(((s1_ptr)_2)->base + 1);
        _27255 = NOVALUE;
        // SubProg inline_op pc: 364 op: PASSIGN_SUBS (162)
        Ref(_27256);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27256;
        if( _1 != _27256 ){
            DeRef(_1);
        }
        _27256 = NOVALUE;
        _27253 = NOVALUE;
        // SubProg inline_op pc: 368 op: STARTLINE (58)

        /** inline.e:367					inline_code[pc+3] = jump_table*/
        // SubProg inline_op pc: 370 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 372 op: PLUS (11)
        _27257 = _pc_53279 + 3;
        // SubProg inline_op pc: 376 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52887 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27257);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _jump_table_53355;
        DeRef(_1);
        // SubProg inline_op pc: 380 op: NOPSWITCH (187)
    ;}    // SubProg inline_op pc: 381 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var original_table_53351

// block var jump_table_53355
    // SubProg inline_op pc: 383 op: STARTLINE (58)

    /** inline.e:369			return adjust_il( pc, op )*/
    // SubProg inline_op pc: 385 op: PROC (27)
    _27258 = _66adjust_il(_pc_53279, _op_53280);
    // SubProg inline_op pc: 390 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53279

// block var op_53280
    DeRef(_27230);
    _27230 = NOVALUE;
    DeRef(_27240);
    _27240 = NOVALUE;
    DeRef(_27242);
    _27242 = NOVALUE;
    DeRef(_27233);
    _27233 = NOVALUE;
    DeRef(_27236);
    _27236 = NOVALUE;
    DeRef(_27257);
    _27257 = NOVALUE;
    DeRef(_27248);
    _27248 = NOVALUE;
    DeRef(_27216);
    _27216 = NOVALUE;
    return _27258;
    // SubProg inline_op pc: 394 op: ELSE (23)
    goto L5; // [394] 526
    // SubProg inline_op pc: 396 op: NOP1 (159)
L8: // addr: 397 pc: 396 sub: 53277 op: 159
    // SubProg inline_op pc: 397 op: STARTLINE (58)

    /** inline.e:372			switch op with fallthru do*/
    // SubProg inline_op pc: 399 op: SWITCH_I (193)
    _0 = _op_53280;
    switch ( _0 ){ 
        // SubProg inline_op pc: 404 op: STARTLINE (58)

        /** inline.e:373				case REF_TEMP then*/
        // SubProg inline_op pc: 406 op: CASE (186)
        case 207:
        // SubProg inline_op pc: 408 op: STARTLINE (58)

        /** inline.e:374					inline_code[pc+1] = {INLINE_TARGET}*/
        // SubProg inline_op pc: 410 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 412 op: PLUS1 (93)
        _27261 = _pc_53279 + 1;
        // SubProg inline_op pc: 416 op: ASSIGN_SUBS (16)
        RefDS(_27176);
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52887 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27261);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27176;
        DeRef(_1);
        // SubProg inline_op pc: 420 op: STARTLINE (58)

        /** inline.e:376				case CONCAT_N then*/
        // SubProg inline_op pc: 422 op: CASE (186)
        case 157:
        // SubProg inline_op pc: 424 op: CASE (186)
        case 31:
        // SubProg inline_op pc: 426 op: STARTLINE (58)

        /** inline.e:379					if check_for_param( pc + 2 + inline_code[pc+1] ) then*/
        // SubProg inline_op pc: 428 op: PLUS (11)
        _27262 = _pc_53279 + 2;
        if ((object)((uintptr_t)_27262 + (uintptr_t)HIGH_BITS) >= 0){
            _27262 = NewDouble((eudouble)_27262);
        }
        // SubProg inline_op pc: 432 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 434 op: PLUS1 (93)
        _27263 = _pc_53279 + 1;
        // SubProg inline_op pc: 438 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27264 = (object)*(((s1_ptr)_2)->base + _27263);
        // SubProg inline_op pc: 442 op: PLUS (11)
        if (IS_ATOM_INT(_27262) && IS_ATOM_INT(_27264)) {
            _27265 = _27262 + _27264;
            if ((object)((uintptr_t)_27265 + (uintptr_t)HIGH_BITS) >= 0){
                _27265 = NewDouble((eudouble)_27265);
            }
        }
        else {
            _27265 = binary_op(PLUS, _27262, _27264);
        }
        DeRef(_27262);
        _27262 = NOVALUE;
        _27264 = NOVALUE;
        // SubProg inline_op pc: 446 op: PROC (27)
        _27266 = _66check_for_param(_27265);
        _27265 = NOVALUE;
        // SubProg inline_op pc: 450 op: IF (20)
        if (_27266 == 0) {
            DeRef(_27266);
            _27266 = NOVALUE;
            goto L9; // [450] 454
        }
        else {
            if (!IS_ATOM_INT(_27266) && DBL_PTR(_27266)->dbl == 0.0){
                DeRef(_27266);
                _27266 = NOVALUE;
                goto L9; // [450] 454
            }
            DeRef(_27266);
            _27266 = NOVALUE;
        }
        DeRef(_27266);
        _27266 = NOVALUE;
        // SubProg inline_op pc: 453 op: NOP1 (159)
L9: // addr: 454 pc: 453 sub: 53277 op: 159
        // SubProg inline_op pc: 454 op: STARTLINE (58)

        /** inline.e:383					for i = pc + 2 to pc + 2 + inline_code[pc+1] do*/
        // SubProg inline_op pc: 456 op: PLUS (11)
        _27267 = _pc_53279 + 2;
        if ((object)((uintptr_t)_27267 + (uintptr_t)HIGH_BITS) >= 0){
            _27267 = NewDouble((eudouble)_27267);
        }
        // SubProg inline_op pc: 460 op: PLUS (11)
        _27268 = _pc_53279 + 2;
        if ((object)((uintptr_t)_27268 + (uintptr_t)HIGH_BITS) >= 0){
            _27268 = NewDouble((eudouble)_27268);
        }
        // SubProg inline_op pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 466 op: PLUS1 (93)
        _27269 = _pc_53279 + 1;
        // SubProg inline_op pc: 470 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27270 = (object)*(((s1_ptr)_2)->base + _27269);
        // SubProg inline_op pc: 474 op: PLUS (11)
        if (IS_ATOM_INT(_27268) && IS_ATOM_INT(_27270)) {
            _27271 = _27268 + _27270;
            if ((object)((uintptr_t)_27271 + (uintptr_t)HIGH_BITS) >= 0){
                _27271 = NewDouble((eudouble)_27271);
            }
        }
        else {
            _27271 = binary_op(PLUS, _27268, _27270);
        }
        DeRef(_27268);
        _27268 = NOVALUE;
        _27270 = NOVALUE;
        // SubProg inline_op pc: 478 op: FOR (21)
        {
            object _i_53387;
            Ref(_27267);
            _i_53387 = _27267;
LA: // addr: 485 pc: 478 sub: 53277 op: 21
            if (binary_op_a(GREATER, _i_53387, _27271)){
                goto LB; // [478] 508
            }
            // SubProg inline_op pc: 485 op: STARTLINE (58)

            /** inline.e:384						if not adjust_symbol( i ) then*/
            // SubProg inline_op pc: 487 op: PROC (27)
            Ref(_i_53387);
            _27272 = _66adjust_symbol(_i_53387);
            // SubProg inline_op pc: 491 op: NOT_IFW (108)
            if (IS_ATOM_INT(_27272)) {
                if (_27272 != 0){
                    DeRef(_27272);
                    _27272 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            else {
                if (DBL_PTR(_27272)->dbl != 0.0){
                    DeRef(_27272);
                    _27272 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            DeRef(_27272);
            _27272 = NOVALUE;
            // SubProg inline_op pc: 494 op: STARTLINE (58)

            /** inline.e:385							return 0*/
            // SubProg inline_op pc: 496 op: RETURNF (28)
            DeRef(_i_53387);

// Exiting block BLOCK: inline_op

// block var pc_53279

// block var op_53280
            DeRef(_27263);
            _27263 = NOVALUE;
            DeRef(_27230);
            _27230 = NOVALUE;
            DeRef(_27267);
            _27267 = NOVALUE;
            DeRef(_27269);
            _27269 = NOVALUE;
            DeRef(_27258);
            _27258 = NOVALUE;
            DeRef(_27271);
            _27271 = NOVALUE;
            DeRef(_27261);
            _27261 = NOVALUE;
            DeRef(_27240);
            _27240 = NOVALUE;
            DeRef(_27242);
            _27242 = NOVALUE;
            DeRef(_27233);
            _27233 = NOVALUE;
            DeRef(_27236);
            _27236 = NOVALUE;
            DeRef(_27257);
            _27257 = NOVALUE;
            DeRef(_27248);
            _27248 = NOVALUE;
            DeRef(_27216);
            _27216 = NOVALUE;
            return 0;
            // SubProg inline_op pc: 500 op: NOP1 (159)
LC: // addr: 501 pc: 500 sub: 53277 op: 159
            // SubProg inline_op pc: 501 op: STARTLINE (58)

            /** inline.e:388					end for*/
            // SubProg inline_op pc: 503 op: ENDFOR_INT_UP1 (54)
            _0 = _i_53387;
            if (IS_ATOM_INT(_i_53387)) {
                _i_53387 = _i_53387 + 1;
                if ((object)((uintptr_t)_i_53387 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53387 = NewDouble((eudouble)_i_53387);
                }
            }
            else {
                _i_53387 = binary_op_a(PLUS, _i_53387, 1);
            }
            DeRef(_0);
            goto LA; // [503] 485
LB: // addr: 508 pc: 503 sub: 53277 op: 54
            ;
            DeRef(_i_53387);
        }
        // SubProg inline_op pc: 508 op: STARTLINE (58)

        /** inline.e:389					return 1*/
        // SubProg inline_op pc: 510 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53279

// block var op_53280
        DeRef(_27263);
        _27263 = NOVALUE;
        DeRef(_27230);
        _27230 = NOVALUE;
        DeRef(_27267);
        _27267 = NOVALUE;
        DeRef(_27269);
        _27269 = NOVALUE;
        DeRef(_27258);
        _27258 = NOVALUE;
        DeRef(_27271);
        _27271 = NOVALUE;
        DeRef(_27261);
        _27261 = NOVALUE;
        DeRef(_27240);
        _27240 = NOVALUE;
        DeRef(_27242);
        _27242 = NOVALUE;
        DeRef(_27233);
        _27233 = NOVALUE;
        DeRef(_27236);
        _27236 = NOVALUE;
        DeRef(_27257);
        _27257 = NOVALUE;
        DeRef(_27248);
        _27248 = NOVALUE;
        DeRef(_27216);
        _27216 = NOVALUE;
        return 1;
        // SubProg inline_op pc: 514 op: STARTLINE (58)

        /** inline.e:390				case else*/
        // SubProg inline_op pc: 516 op: CASE (186)
        default:
        // SubProg inline_op pc: 518 op: STARTLINE (58)

        /** inline.e:391					return 0*/
        // SubProg inline_op pc: 520 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53279

// block var op_53280
        DeRef(_27263);
        _27263 = NOVALUE;
        DeRef(_27230);
        _27230 = NOVALUE;
        DeRef(_27267);
        _27267 = NOVALUE;
        DeRef(_27269);
        _27269 = NOVALUE;
        DeRef(_27258);
        _27258 = NOVALUE;
        DeRef(_27271);
        _27271 = NOVALUE;
        DeRef(_27261);
        _27261 = NOVALUE;
        DeRef(_27240);
        _27240 = NOVALUE;
        DeRef(_27242);
        _27242 = NOVALUE;
        DeRef(_27233);
        _27233 = NOVALUE;
        DeRef(_27236);
        _27236 = NOVALUE;
        DeRef(_27257);
        _27257 = NOVALUE;
        DeRef(_27248);
        _27248 = NOVALUE;
        DeRef(_27216);
        _27216 = NOVALUE;
        return 0;
        // SubProg inline_op pc: 524 op: NOPSWITCH (187)
    ;}    // SubProg inline_op pc: 525 op: NOP1 (159)
L5: // addr: 526 pc: 525 sub: 53277 op: 159
    // SubProg inline_op pc: 526 op: STARTLINE (58)

    /** inline.e:394		return 1*/
    // SubProg inline_op pc: 528 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53279

// block var op_53280
    DeRef(_27263);
    _27263 = NOVALUE;
    DeRef(_27230);
    _27230 = NOVALUE;
    DeRef(_27267);
    _27267 = NOVALUE;
    DeRef(_27269);
    _27269 = NOVALUE;
    DeRef(_27258);
    _27258 = NOVALUE;
    DeRef(_27271);
    _27271 = NOVALUE;
    DeRef(_27261);
    _27261 = NOVALUE;
    DeRef(_27240);
    _27240 = NOVALUE;
    DeRef(_27242);
    _27242 = NOVALUE;
    DeRef(_27233);
    _27233 = NOVALUE;
    DeRef(_27236);
    _27236 = NOVALUE;
    DeRef(_27257);
    _27257 = NOVALUE;
    DeRef(_27248);
    _27248 = NOVALUE;
    DeRef(_27216);
    _27216 = NOVALUE;
    return 1;
    // SubProg inline_op pc: 532 op: BADRETURNF (43)
    ;
}


void _66restore_code()
{
    object _27274 = NOVALUE; // 53401 27274
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg restore_code pc: 1 op: STARTLINE (58)

    /** inline.e:399		if length( temp_code ) then*/
    // SubProg restore_code pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg restore_code pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_66temp_code_53397)){
            _27274 = SEQ_PTR(_66temp_code_53397)->length;
    }
    else {
        _27274 = 1;
    }
    // SubProg restore_code pc: 8 op: IF (20)
    if (_27274 == 0)
    {
        _27274 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _27274 = NOVALUE;
    }
    // SubProg restore_code pc: 11 op: STARTLINE (58)

    /** inline.e:400			Code = temp_code*/
    // SubProg restore_code pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg restore_code pc: 15 op: ASSIGN (18)
    RefDS(_66temp_code_53397);
    DeRef(_34Code_15276);
    _34Code_15276 = _66temp_code_53397;
    // SubProg restore_code pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg restore_code pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 53398 op: 159
    // SubProg restore_code pc: 21 op: STARTLINE (58)

    /** inline.e:402	end procedure*/
    // SubProg restore_code pc: 23 op: RETURNP (29)

// Exiting block BLOCK: restore_code
    return;
    // SubProg restore_code pc: 26 op: BADRETURNF (43)
    ;
}


void _66check_inline(object _sub_53406)
{
    object _pc_53435 = NOVALUE;
    object _s_53437 = NOVALUE;
    object _backpatch_op_53475 = NOVALUE;
    object _op_53479 = NOVALUE;
    object _rtn_idx_53490 = NOVALUE;
    object _args_53495 = NOVALUE;
    object _args_53527 = NOVALUE;
    object _values_53556 = NOVALUE;
    object _27361 = NOVALUE; // 53581 27361
    object _27360 = NOVALUE; // 53580 27360
// skipping _27359  name type: 0
    object _27358 = NOVALUE; // 53576 27358
// skipping _27357  name type: 0
// skipping _27356  name type: 0
    object _27355 = NOVALUE; // 53572 27355
// skipping _27354  name type: 0
    object _27353 = NOVALUE; // 53568 27353
    object _27352 = NOVALUE; // 53567 27352
    object _27351 = NOVALUE; // 53565 27351
// skipping _27350  name type: 0
    object _27349 = NOVALUE; // 53560 27349
    object _27348 = NOVALUE; // 53559 27348
    object _27347 = NOVALUE; // 53558 27347
    object _27346 = NOVALUE; // 53553 27346
    object _27345 = NOVALUE; // 53550 27345
    object _27344 = NOVALUE; // 53549 27344
    object _27343 = NOVALUE; // 53548 27343
    object _27342 = NOVALUE; // 53547 27342
    object _27341 = NOVALUE; // 53546 27341
    object _27339 = NOVALUE; // 53541 27339
    object _27338 = NOVALUE; // 53540 27338
    object _27337 = NOVALUE; // 53539 27337
    object _27336 = NOVALUE; // 53537 27336
    object _27335 = NOVALUE; // 53536 27335
// skipping _27334  name type: 0
    object _27333 = NOVALUE; // 53532 27333
    object _27332 = NOVALUE; // 53531 27332
    object _27331 = NOVALUE; // 53530 27331
    object _27330 = NOVALUE; // 53529 27330
    object _27329 = NOVALUE; // 53528 27329
// skipping _27328  name type: 0
    object _27327 = NOVALUE; // 53523 27327
    object _27326 = NOVALUE; // 53522 27326
    object _27325 = NOVALUE; // 53520 27325
    object _27324 = NOVALUE; // 53519 27324
    object _27323 = NOVALUE; // 53517 27323
    object _27322 = NOVALUE; // 53515 27322
    object _27321 = NOVALUE; // 53513 27321
    object _27320 = NOVALUE; // 53510 27320
    object _27319 = NOVALUE; // 53509 27319
    object _27318 = NOVALUE; // 53508 27318
    object _27317 = NOVALUE; // 53507 27317
    object _27316 = NOVALUE; // 53506 27316
    object _27315 = NOVALUE; // 53504 27315
    object _27314 = NOVALUE; // 53502 27314
// skipping _27313  name type: 0
    object _27312 = NOVALUE; // 53497 27312
// skipping _27311  name type: 0
// skipping _27310  name type: 0
    object _27309 = NOVALUE; // 53491 27309
// skipping _27306  name type: 0
// skipping _27305  name type: 0
    object _27304 = NOVALUE; // 53477 27304
// skipping _27303  name type: 0
    object _27302 = NOVALUE; // 53472 27302
// skipping _27301  name type: 0
// skipping _27300  name type: 0
    object _27299 = NOVALUE; // 53467 27299
    object _27298 = NOVALUE; // 53464 27298
    object _27297 = NOVALUE; // 53462 27297
    object _27296 = NOVALUE; // 53460 27296
    object _27295 = NOVALUE; // 53459 27295
    object _27294 = NOVALUE; // 53457 27294
    object _27293 = NOVALUE; // 53455 27293
    object _27292 = NOVALUE; // 53454 27292
// skipping _27291  name type: 0
    object _27290 = NOVALUE; // 53450 27290
// skipping _27289  name type: 0
    object _27288 = NOVALUE; // 53447 27288
    object _27287 = NOVALUE; // 53445 27287
// skipping _27286  name type: 0
    object _27285 = NOVALUE; // 53439 27285
// skipping _27284  name type: 0
    object _27283 = NOVALUE; // 53431 27283
// skipping _27282  name type: 0
    object _27281 = NOVALUE; // 53424 27281
// skipping _27280  name type: 0
    object _27279 = NOVALUE; // 53418 27279
    object _27278 = NOVALUE; // 53415 27278
    object _27277 = NOVALUE; // 53413 27277
    object _27276 = NOVALUE; // 53411 27276
// skipping _27275  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg check_inline pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_inline pc: 3 op: STARTLINE (58)

    /** inline.e:411		if OpTrace or SymTab[sub][S_TOKEN] = TYPE then*/
    // SubProg check_inline pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 7 op: SC1_OR_IF (147)
    if (_34OpTrace_15257 != 0) {
        goto L1; // [7] 34
    }
    // SubProg check_inline pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27276 = (object)*(((s1_ptr)_2)->base + _sub_53406);
    // SubProg check_inline pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27276);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _27277 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _27277 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _27276 = NOVALUE;
    // SubProg check_inline pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 25 op: EQUALS (3)
    if (IS_ATOM_INT(_27277)) {
        _27278 = (_27277 == 504);
    }
    else {
        _27278 = binary_op(EQUALS, _27277, 504);
    }
    _27277 = NOVALUE;
    // SubProg check_inline pc: 29 op: NOP1 (159)
    // SubProg check_inline pc: 30 op: IF (20)
    if (_27278 == 0) {
        DeRef(_27278);
        _27278 = NOVALUE;
        goto L2; // [30] 40
    }
    else {
        if (!IS_ATOM_INT(_27278) && DBL_PTR(_27278)->dbl == 0.0){
            DeRef(_27278);
            _27278 = NOVALUE;
            goto L2; // [30] 40
        }
        DeRef(_27278);
        _27278 = NOVALUE;
    }
    DeRef(_27278);
    _27278 = NOVALUE;
    // SubProg check_inline pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53403 op: 159
    // SubProg check_inline pc: 34 op: STARTLINE (58)

    /** inline.e:412			return*/
    // SubProg check_inline pc: 36 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
    DeRefi(_backpatch_op_53475);
    return;
    // SubProg check_inline pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 53403 op: 159
    // SubProg check_inline pc: 40 op: STARTLINE (58)

    /** inline.e:414		inline_sub      = sub*/
    // SubProg check_inline pc: 42 op: ASSIGN (18)
    _66inline_sub_52901 = _sub_53406;
    // SubProg check_inline pc: 45 op: INTEGER_CHECK (96)
    // SubProg check_inline pc: 47 op: STARTLINE (58)

    /** inline.e:415		if get_fwdref_count() then*/
    // SubProg check_inline pc: 49 op: PROC (27)
    _27279 = _37get_fwdref_count();
    // SubProg check_inline pc: 52 op: IF (20)
    if (_27279 == 0) {
        DeRef(_27279);
        _27279 = NOVALUE;
        goto L3; // [52] 65
    }
    else {
        if (!IS_ATOM_INT(_27279) && DBL_PTR(_27279)->dbl == 0.0){
            DeRef(_27279);
            _27279 = NOVALUE;
            goto L3; // [52] 65
        }
        DeRef(_27279);
        _27279 = NOVALUE;
    }
    DeRef(_27279);
    _27279 = NOVALUE;
    // SubProg check_inline pc: 55 op: STARTLINE (58)

    /** inline.e:416			defer()*/
    // SubProg check_inline pc: 57 op: PROC (27)
    _66defer();
    // SubProg check_inline pc: 59 op: STARTLINE (58)

    /** inline.e:417			return*/
    // SubProg check_inline pc: 61 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
    DeRefi(_backpatch_op_53475);
    return;
    // SubProg check_inline pc: 64 op: NOP1 (159)
L3: // addr: 65 pc: 64 sub: 53403 op: 159
    // SubProg check_inline pc: 65 op: STARTLINE (58)

    /** inline.e:419		temp_code = ""*/
    // SubProg check_inline pc: 67 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_66temp_code_53397);
    _66temp_code_53397 = _21936;
    // SubProg check_inline pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 72 op: STARTLINE (58)

    /** inline.e:420		if sub != CurrentSub then*/
    // SubProg check_inline pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 76 op: NOTEQ_IFW (105)
    if (_sub_53406 == _34CurrentSub_15196)
    goto L4; // [76] 99
    // SubProg check_inline pc: 80 op: STARTLINE (58)

    /** inline.e:421			Code = SymTab[sub][S_CODE]*/
    // SubProg check_inline pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27281 = (object)*(((s1_ptr)_2)->base + _sub_53406);
    // SubProg check_inline pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 90 op: RHS_SUBS_CHECK (92)
    DeRef(_34Code_15276);
    _2 = (object)SEQ_PTR(_27281);
    if (!IS_ATOM_INT(_34S_CODE_14855)){
        _34Code_15276 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    }
    else{
        _34Code_15276 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
    }
    Ref(_34Code_15276);
    _27281 = NOVALUE;
    // SubProg check_inline pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 96 op: ELSE (23)
    goto L5; // [96] 109
    // SubProg check_inline pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 53403 op: 159
    // SubProg check_inline pc: 99 op: STARTLINE (58)

    /** inline.e:423			temp_code = Code*/
    // SubProg check_inline pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 103 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRef(_66temp_code_53397);
    _66temp_code_53397 = _34Code_15276;
    // SubProg check_inline pc: 106 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 108 op: NOP1 (159)
L5: // addr: 109 pc: 108 sub: 53403 op: 159
    // SubProg check_inline pc: 109 op: STARTLINE (58)

    /** inline.e:426		if length(Code) > OpInline then*/
    // SubProg check_inline pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_34Code_15276)){
            _27283 = SEQ_PTR(_34Code_15276)->length;
    }
    else {
        _27283 = 1;
    }
    // SubProg check_inline pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 118 op: GREATER_IFW (107)
    if (_27283 <= _34OpInline_15262)
    goto L6; // [118] 128
    // SubProg check_inline pc: 122 op: STARTLINE (58)

    /** inline.e:427			return*/
    // SubProg check_inline pc: 124 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
    DeRefi(_backpatch_op_53475);
    return;
    // SubProg check_inline pc: 127 op: NOP1 (159)
L6: // addr: 128 pc: 127 sub: 53403 op: 159
    // SubProg check_inline pc: 128 op: STARTLINE (58)

    /** inline.e:430		inline_code     = Code*/
    // SubProg check_inline pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 132 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRef(_66inline_code_52887);
    _66inline_code_52887 = _34Code_15276;
    // SubProg check_inline pc: 135 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 137 op: STARTLINE (58)

    /** inline.e:431		return_gotos    = 0*/
    // SubProg check_inline pc: 139 op: ASSIGN_I (113)
    _66return_gotos_52896 = 0;
    // SubProg check_inline pc: 142 op: STARTLINE (58)

    /** inline.e:432		prev_pc         = 1*/
    // SubProg check_inline pc: 144 op: ASSIGN_I (113)
    _66prev_pc_52895 = 1;
    // SubProg check_inline pc: 147 op: STARTLINE (58)

    /** inline.e:433		proc_vars       = {}*/
    // SubProg check_inline pc: 149 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_66proc_vars_52888);
    _66proc_vars_52888 = _21936;
    // SubProg check_inline pc: 152 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 154 op: STARTLINE (58)

    /** inline.e:434		inline_temps    = {}*/
    // SubProg check_inline pc: 156 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_66inline_temps_52889);
    _66inline_temps_52889 = _21936;
    // SubProg check_inline pc: 159 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 161 op: STARTLINE (58)

    /** inline.e:435		inline_params   = {}*/
    // SubProg check_inline pc: 163 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_66inline_params_52892);
    _66inline_params_52892 = _21936;
    // SubProg check_inline pc: 166 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 168 op: STARTLINE (58)

    /** inline.e:436		assigned_params = {}*/
    // SubProg check_inline pc: 170 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_66assigned_params_52893);
    _66assigned_params_52893 = _21936;
    // SubProg check_inline pc: 173 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 175 op: STARTLINE (58)

    /** inline.e:438		integer pc = 1*/
    // SubProg check_inline pc: 177 op: ASSIGN_I (113)
    _pc_53435 = 1;
    // SubProg check_inline pc: 180 op: STARTLINE (58)

    /** inline.e:439		symtab_index s = SymTab[sub][S_NEXT]*/
    // SubProg check_inline pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 184 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27285 = (object)*(((s1_ptr)_2)->base + _sub_53406);
    // SubProg check_inline pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 190 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27285);
    _s_53437 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53437)){
        _s_53437 = (object)DBL_PTR(_s_53437)->dbl;
    }
    _27285 = NOVALUE;
    // SubProg check_inline pc: 196 op: STARTLINE (58)

    /** inline.e:440		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    // SubProg check_inline pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 200 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27287 = (object)*(((s1_ptr)_2)->base + _sub_53406);
    // SubProg check_inline pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 206 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27287);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _27288 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _27288 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _27287 = NOVALUE;
    // SubProg check_inline pc: 210 op: FOR (21)
    {
        object _p_53443;
        _p_53443 = 1;
L7: // addr: 217 pc: 210 sub: 53403 op: 21
        if (binary_op_a(GREATER, _p_53443, _27288)){
            goto L8; // [210] 248
        }
        // SubProg check_inline pc: 217 op: STARTLINE (58)

        /** inline.e:441			inline_params &= s*/
        // SubProg check_inline pc: 219 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 221 op: CONCAT (15)
        Append(&_66inline_params_52892, _66inline_params_52892, _s_53437);
        // SubProg check_inline pc: 225 op: STARTLINE (58)

        /** inline.e:442			s = SymTab[s][S_NEXT]*/
        // SubProg check_inline pc: 227 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 229 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27290 = (object)*(((s1_ptr)_2)->base + _s_53437);
        // SubProg check_inline pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 235 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27290);
        _s_53437 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53437)){
            _s_53437 = (object)DBL_PTR(_s_53437)->dbl;
        }
        _27290 = NOVALUE;
        // SubProg check_inline pc: 241 op: STARTLINE (58)

        /** inline.e:443		end for*/
        // SubProg check_inline pc: 243 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53443;
        if (IS_ATOM_INT(_p_53443)) {
            _p_53443 = _p_53443 + 1;
            if ((object)((uintptr_t)_p_53443 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53443 = NewDouble((eudouble)_p_53443);
            }
        }
        else {
            _p_53443 = binary_op_a(PLUS, _p_53443, 1);
        }
        DeRef(_0);
        goto L7; // [243] 217
L8: // addr: 248 pc: 243 sub: 53403 op: 54
        ;
        DeRef(_p_53443);
    }
    // SubProg check_inline pc: 248 op: STARTLINE (58)

    /** inline.e:445		while s != 0 and */
    // SubProg check_inline pc: 250 op: NOP2 (110)
    // SubProg check_inline pc: 252 op: NOPWHILE (158)
L9: // addr: 253 pc: 252 sub: 53403 op: 158
    // SubProg check_inline pc: 253 op: NOTEQ (4)
    _27292 = (_s_53437 != 0);
    // SubProg check_inline pc: 257 op: SC1_AND_IF (146)
    if (_27292 == 0) {
        goto LA; // [257] 335
    }
    // SubProg check_inline pc: 261 op: PROC (27)
    _27294 = _53sym_scope(_s_53437);
    // SubProg check_inline pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 267 op: LESSEQ (5)
    if (IS_ATOM_INT(_27294)) {
        _27295 = (_27294 <= 3);
    }
    else {
        _27295 = binary_op(LESSEQ, _27294, 3);
    }
    DeRef(_27294);
    _27294 = NOVALUE;
    // SubProg check_inline pc: 271 op: SC1_OR (143)
    if (IS_ATOM_INT(_27295)) {
        if (_27295 != 0) {
            DeRef(_27296);
            _27296 = 1;
            goto LB; // [271] 289
        }
    }
    else {
        if (DBL_PTR(_27295)->dbl != 0.0) {
            DeRef(_27296);
            _27296 = 1;
            goto LB; // [271] 289
        }
    }
    // SubProg check_inline pc: 275 op: PROC (27)
    _27297 = _53sym_scope(_s_53437);
    // SubProg check_inline pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 281 op: EQUALS (3)
    if (IS_ATOM_INT(_27297)) {
        _27298 = (_27297 == 9);
    }
    else {
        _27298 = binary_op(EQUALS, _27297, 9);
    }
    DeRef(_27297);
    _27297 = NOVALUE;
    // SubProg check_inline pc: 285 op: SC2_OR (144)
    DeRef(_27296);
    if (IS_ATOM_INT(_27298))
    _27296 = (_27298 != 0);
    else
    _27296 = DBL_PTR(_27298)->dbl != 0.0;
    // SubProg check_inline pc: 288 op: NOP1 (159)
LB: // addr: 289 pc: 288 sub: 53403 op: 159
    // SubProg check_inline pc: 289 op: NOP1 (159)
    // SubProg check_inline pc: 290 op: WHILE (47)
    if (_27296 == 0)
    {
        _27296 = NOVALUE;
        goto LA; // [290] 335
    }
    else{
        _27296 = NOVALUE;
    }
    // SubProg check_inline pc: 293 op: STARTLINE (58)

    /** inline.e:447			if sym_scope( s ) != SC_UNDEFINED then*/
    // SubProg check_inline pc: 295 op: PROC (27)
    _27299 = _53sym_scope(_s_53437);
    // SubProg check_inline pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 301 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _27299, 9)){
        DeRef(_27299);
        _27299 = NOVALUE;
        goto LC; // [301] 314
    }
    DeRef(_27299);
    _27299 = NOVALUE;
    // SubProg check_inline pc: 305 op: STARTLINE (58)

    /** inline.e:448				proc_vars &= s*/
    // SubProg check_inline pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 309 op: CONCAT (15)
    Append(&_66proc_vars_52888, _66proc_vars_52888, _s_53437);
    // SubProg check_inline pc: 313 op: NOP1 (159)
LC: // addr: 314 pc: 313 sub: 53403 op: 159
    // SubProg check_inline pc: 314 op: STARTLINE (58)

    /** inline.e:451			s = SymTab[s][S_NEXT]*/
    // SubProg check_inline pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 318 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27302 = (object)*(((s1_ptr)_2)->base + _s_53437);
    // SubProg check_inline pc: 322 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 324 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27302);
    _s_53437 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53437)){
        _s_53437 = (object)DBL_PTR(_s_53437)->dbl;
    }
    _27302 = NOVALUE;
    // SubProg check_inline pc: 330 op: STARTLINE (58)

    /** inline.e:452		end while*/
    // SubProg check_inline pc: 332 op: ENDWHILE (22)
    goto L9; // [332] 253
    // SubProg check_inline pc: 334 op: NOP1 (159)
LA: // addr: 335 pc: 334 sub: 53403 op: 159
    // SubProg check_inline pc: 335 op: STARTLINE (58)

    /** inline.e:453		sequence backpatch_op = {}*/
    // SubProg check_inline pc: 337 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_backpatch_op_53475);
    _backpatch_op_53475 = _21936;
    // SubProg check_inline pc: 340 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 342 op: STARTLINE (58)

    /** inline.e:454		while pc < length( inline_code ) do*/
    // SubProg check_inline pc: 344 op: NOP2 (110)
    // SubProg check_inline pc: 346 op: NOPWHILE (158)
LD: // addr: 347 pc: 346 sub: 53403 op: 158
    // SubProg check_inline pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 349 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27304 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27304 = 1;
    }
    // SubProg check_inline pc: 352 op: LESS_IFW_I (119)
    if (_pc_53435 >= _27304)
    goto LE; // [352] 869
    // SubProg check_inline pc: 356 op: STARTLINE (58)

    /** inline.e:456			integer op = inline_code[pc]*/
    // SubProg check_inline pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 360 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _op_53479 = (object)*(((s1_ptr)_2)->base + _pc_53435);
    if (!IS_ATOM_INT(_op_53479))
    _op_53479 = (object)DBL_PTR(_op_53479)->dbl;
    // SubProg check_inline pc: 364 op: STARTLINE (58)

    /** inline.e:457			switch op do*/
    // SubProg check_inline pc: 366 op: SWITCH_I (193)
    _0 = _op_53479;
    switch ( _0 ){ 
        // SubProg check_inline pc: 371 op: STARTLINE (58)

        /** inline.e:458				case PROC_FORWARD, FUNC_FORWARD then*/
        // SubProg check_inline pc: 373 op: CASE (186)
        case 195:
        // SubProg check_inline pc: 375 op: CASE (186)
        case 196:
        // SubProg check_inline pc: 377 op: STARTLINE (58)

        /** inline.e:459					defer()*/
        // SubProg check_inline pc: 379 op: PROC (27)
        _66defer();
        // SubProg check_inline pc: 381 op: STARTLINE (58)

        /** inline.e:460					restore_code()*/
        // SubProg check_inline pc: 383 op: PROC (27)
        _66restore_code();
        // SubProg check_inline pc: 385 op: STARTLINE (58)

        /** inline.e:461					return*/
        // SubProg check_inline pc: 387 op: RETURNP (29)

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: WHILE-

// block var op_53479

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
        DeRefi(_backpatch_op_53475);
        DeRef(_27295);
        _27295 = NOVALUE;
        DeRef(_27298);
        _27298 = NOVALUE;
        _27288 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        return;
        // SubProg check_inline pc: 390 op: ELSE (23)
        goto LF; // [390] 851
        // SubProg check_inline pc: 392 op: STARTLINE (58)

        /** inline.e:463				case PROC, FUNC then*/
        // SubProg check_inline pc: 394 op: CASE (186)
        case 27:
        // SubProg check_inline pc: 396 op: CASE (186)
        case 501:
        // SubProg check_inline pc: 398 op: STARTLINE (58)

        /** inline.e:464					symtab_index rtn_idx = inline_code[pc+1]*/
        // SubProg check_inline pc: 400 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 402 op: PLUS1 (93)
        _27309 = _pc_53435 + 1;
        // SubProg check_inline pc: 406 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _rtn_idx_53490 = (object)*(((s1_ptr)_2)->base + _27309);
        if (!IS_ATOM_INT(_rtn_idx_53490)){
            _rtn_idx_53490 = (object)DBL_PTR(_rtn_idx_53490)->dbl;
        }
        // SubProg check_inline pc: 412 op: STARTLINE (58)

        /** inline.e:465					if rtn_idx = sub then*/
        // SubProg check_inline pc: 414 op: EQUALS_IFW (104)
        if (_rtn_idx_53490 != _sub_53406)
        goto L10; // [414] 428
        // SubProg check_inline pc: 418 op: STARTLINE (58)

        /** inline.e:467						restore_code()*/
        // SubProg check_inline pc: 420 op: PROC (27)
        _66restore_code();
        // SubProg check_inline pc: 422 op: STARTLINE (58)

        /** inline.e:468						return*/
        // SubProg check_inline pc: 424 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: CASE-

// block var rtn_idx_53490

// block var args_53495

// Exiting block BLOCK: WHILE-

// block var op_53479

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
        DeRefi(_backpatch_op_53475);
        _27309 = NOVALUE;
        DeRef(_27295);
        _27295 = NOVALUE;
        DeRef(_27298);
        _27298 = NOVALUE;
        _27288 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        return;
        // SubProg check_inline pc: 427 op: NOP1 (159)
L10: // addr: 428 pc: 427 sub: 53403 op: 159
        // SubProg check_inline pc: 428 op: STARTLINE (58)

        /** inline.e:471					integer args = SymTab[rtn_idx][S_NUM_ARGS]*/
        // SubProg check_inline pc: 430 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27312 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53490);
        // SubProg check_inline pc: 436 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 438 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27312);
        if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
            _args_53495 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
        }
        else{
            _args_53495 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
        }
        if (!IS_ATOM_INT(_args_53495)){
            _args_53495 = (object)DBL_PTR(_args_53495)->dbl;
        }
        _27312 = NOVALUE;
        // SubProg check_inline pc: 444 op: STARTLINE (58)

        /** inline.e:472					if SymTab[rtn_idx][S_TOKEN] != PROC and check_for_param( pc + args + 2 ) then*/
        // SubProg check_inline pc: 446 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 448 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27314 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53490);
        // SubProg check_inline pc: 452 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 454 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27314);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _27315 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _27315 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        _27314 = NOVALUE;
        // SubProg check_inline pc: 458 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 460 op: NOTEQ (4)
        if (IS_ATOM_INT(_27315)) {
            _27316 = (_27315 != 27);
        }
        else {
            _27316 = binary_op(NOTEQ, _27315, 27);
        }
        _27315 = NOVALUE;
        // SubProg check_inline pc: 464 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_27316)) {
            if (_27316 == 0) {
                goto L11; // [464] 485
            }
        }
        else {
            if (DBL_PTR(_27316)->dbl == 0.0) {
                goto L11; // [464] 485
            }
        }
        // SubProg check_inline pc: 468 op: PLUS (11)
        _27318 = _pc_53435 + _args_53495;
        if ((object)((uintptr_t)_27318 + (uintptr_t)HIGH_BITS) >= 0){
            _27318 = NewDouble((eudouble)_27318);
        }
        // SubProg check_inline pc: 472 op: PLUS (11)
        if (IS_ATOM_INT(_27318)) {
            _27319 = _27318 + 2;
            if ((object)((uintptr_t)_27319 + (uintptr_t)HIGH_BITS) >= 0){
                _27319 = NewDouble((eudouble)_27319);
            }
        }
        else {
            _27319 = NewDouble(DBL_PTR(_27318)->dbl + (eudouble)2);
        }
        DeRef(_27318);
        _27318 = NOVALUE;
        // SubProg check_inline pc: 476 op: PROC (27)
        _27320 = _66check_for_param(_27319);
        _27319 = NOVALUE;
        // SubProg check_inline pc: 480 op: NOP1 (159)
        // SubProg check_inline pc: 481 op: IF (20)
        if (_27320 == 0) {
            DeRef(_27320);
            _27320 = NOVALUE;
            goto L11; // [481] 485
        }
        else {
            if (!IS_ATOM_INT(_27320) && DBL_PTR(_27320)->dbl == 0.0){
                DeRef(_27320);
                _27320 = NOVALUE;
                goto L11; // [481] 485
            }
            DeRef(_27320);
            _27320 = NOVALUE;
        }
        DeRef(_27320);
        _27320 = NOVALUE;
        // SubProg check_inline pc: 484 op: NOP1 (159)
L11: // addr: 485 pc: 484 sub: 53403 op: 159
        // SubProg check_inline pc: 485 op: STARTLINE (58)

        /** inline.e:475					for i = 2 to args + 1 + (SymTab[rtn_idx][S_TOKEN] != PROC) do*/
        // SubProg check_inline pc: 487 op: PLUS1 (93)
        _27321 = _args_53495 + 1;
        if (_27321 > MAXINT){
            _27321 = NewDouble((eudouble)_27321);
        }
        // SubProg check_inline pc: 491 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 493 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27322 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53490);
        // SubProg check_inline pc: 497 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 499 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27322);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _27323 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _27323 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        _27322 = NOVALUE;
        // SubProg check_inline pc: 503 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 505 op: NOTEQ (4)
        if (IS_ATOM_INT(_27323)) {
            _27324 = (_27323 != 27);
        }
        else {
            _27324 = binary_op(NOTEQ, _27323, 27);
        }
        _27323 = NOVALUE;
        // SubProg check_inline pc: 509 op: PLUS (11)
        if (IS_ATOM_INT(_27321) && IS_ATOM_INT(_27324)) {
            _27325 = _27321 + _27324;
            if ((object)((uintptr_t)_27325 + (uintptr_t)HIGH_BITS) >= 0){
                _27325 = NewDouble((eudouble)_27325);
            }
        }
        else {
            _27325 = binary_op(PLUS, _27321, _27324);
        }
        DeRef(_27321);
        _27321 = NOVALUE;
        DeRef(_27324);
        _27324 = NOVALUE;
        // SubProg check_inline pc: 513 op: FOR (21)
        {
            object _i_53512;
            _i_53512 = 2;
L12: // addr: 520 pc: 513 sub: 53403 op: 21
            if (binary_op_a(GREATER, _i_53512, _27325)){
                goto L13; // [513] 550
            }
            // SubProg check_inline pc: 520 op: STARTLINE (58)

            /** inline.e:476						if not adjust_symbol( pc + i ) then */
            // SubProg check_inline pc: 522 op: PLUS (11)
            if (IS_ATOM_INT(_i_53512)) {
                _27326 = _pc_53435 + _i_53512;
                if ((object)((uintptr_t)_27326 + (uintptr_t)HIGH_BITS) >= 0){
                    _27326 = NewDouble((eudouble)_27326);
                }
            }
            else {
                _27326 = NewDouble((eudouble)_pc_53435 + DBL_PTR(_i_53512)->dbl);
            }
            // SubProg check_inline pc: 526 op: PROC (27)
            _27327 = _66adjust_symbol(_27326);
            _27326 = NOVALUE;
            // SubProg check_inline pc: 530 op: NOT_IFW (108)
            if (IS_ATOM_INT(_27327)) {
                if (_27327 != 0){
                    DeRef(_27327);
                    _27327 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            else {
                if (DBL_PTR(_27327)->dbl != 0.0){
                    DeRef(_27327);
                    _27327 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            DeRef(_27327);
            _27327 = NOVALUE;
            // SubProg check_inline pc: 533 op: STARTLINE (58)

            /** inline.e:477							defer()*/
            // SubProg check_inline pc: 535 op: PROC (27)
            _66defer();
            // SubProg check_inline pc: 537 op: STARTLINE (58)

            /** inline.e:478							return*/
            // SubProg check_inline pc: 539 op: RETURNP (29)
            DeRef(_i_53512);

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: CASE-

// block var rtn_idx_53490

// block var args_53495

// Exiting block BLOCK: WHILE-

// block var op_53479

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
            DeRefi(_backpatch_op_53475);
            DeRef(_27309);
            _27309 = NOVALUE;
            DeRef(_27325);
            _27325 = NOVALUE;
            DeRef(_27295);
            _27295 = NOVALUE;
            DeRef(_27298);
            _27298 = NOVALUE;
            _27288 = NOVALUE;
            DeRef(_27316);
            _27316 = NOVALUE;
            DeRef(_27292);
            _27292 = NOVALUE;
            return;
            // SubProg check_inline pc: 542 op: NOP1 (159)
L14: // addr: 543 pc: 542 sub: 53403 op: 159
            // SubProg check_inline pc: 543 op: STARTLINE (58)

            /** inline.e:480					end for*/
            // SubProg check_inline pc: 545 op: ENDFOR_INT_UP1 (54)
            _0 = _i_53512;
            if (IS_ATOM_INT(_i_53512)) {
                _i_53512 = _i_53512 + 1;
                if ((object)((uintptr_t)_i_53512 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53512 = NewDouble((eudouble)_i_53512);
                }
            }
            else {
                _i_53512 = binary_op_a(PLUS, _i_53512, 1);
            }
            DeRef(_0);
            goto L12; // [545] 520
L13: // addr: 550 pc: 545 sub: 53403 op: 54
            ;
            DeRef(_i_53512);
        }
        // SubProg check_inline pc: 550 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var rtn_idx_53490

// block var args_53495
        // SubProg check_inline pc: 552 op: ELSE (23)
        goto LF; // [552] 851
        // SubProg check_inline pc: 554 op: STARTLINE (58)

        /** inline.e:482				case RIGHT_BRACE_N then*/
        // SubProg check_inline pc: 556 op: CASE (186)
        case 31:
        // SubProg check_inline pc: 558 op: STARTLINE (58)

        /** inline.e:484					sequence args = inline_code[pc+2..inline_code[pc+1] + pc + 1]*/
        // SubProg check_inline pc: 560 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 562 op: PLUS (11)
        _27329 = _pc_53435 + 2;
        if ((object)((uintptr_t)_27329 + (uintptr_t)HIGH_BITS) >= 0){
            _27329 = NewDouble((eudouble)_27329);
        }
        // SubProg check_inline pc: 566 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 568 op: PLUS1 (93)
        _27330 = _pc_53435 + 1;
        // SubProg check_inline pc: 572 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27331 = (object)*(((s1_ptr)_2)->base + _27330);
        // SubProg check_inline pc: 576 op: PLUS (11)
        if (IS_ATOM_INT(_27331)) {
            _27332 = _27331 + _pc_53435;
            if ((object)((uintptr_t)_27332 + (uintptr_t)HIGH_BITS) >= 0){
                _27332 = NewDouble((eudouble)_27332);
            }
        }
        else {
            _27332 = binary_op(PLUS, _27331, _pc_53435);
        }
        _27331 = NOVALUE;
        // SubProg check_inline pc: 580 op: PLUS1 (93)
        if (IS_ATOM_INT(_27332)) {
            _27333 = _27332 + 1;
        }
        else
        _27333 = binary_op(PLUS, 1, _27332);
        DeRef(_27332);
        _27332 = NOVALUE;
        // SubProg check_inline pc: 584 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_args_53527;
        RHS_Slice(_66inline_code_52887, _27329, _27333);
        // SubProg check_inline pc: 589 op: STARTLINE (58)

        /** inline.e:486					for i = 1 to length(args) - 1 do*/
        // SubProg check_inline pc: 591 op: LENGTH (42)
        if (IS_SEQUENCE(_args_53527)){
                _27335 = SEQ_PTR(_args_53527)->length;
        }
        else {
            _27335 = 1;
        }
        // SubProg check_inline pc: 594 op: MINUS (10)
        _27336 = _27335 - 1;
        _27335 = NOVALUE;
        // SubProg check_inline pc: 598 op: FOR (21)
        {
            object _i_53535;
            _i_53535 = 1;
L15: // addr: 605 pc: 598 sub: 53403 op: 21
            if (_i_53535 > _27336){
                goto L16; // [598] 644
            }
            // SubProg check_inline pc: 605 op: STARTLINE (58)

            /** inline.e:487						if find( args[i], args, i + 1 ) then*/
            // SubProg check_inline pc: 607 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_args_53527);
            _27337 = (object)*(((s1_ptr)_2)->base + _i_53535);
            // SubProg check_inline pc: 611 op: PLUS1 (93)
            _27338 = _i_53535 + 1;
            // SubProg check_inline pc: 615 op: FIND_FROM (176)
            _27339 = find_from(_27337, _args_53527, _27338);
            _27337 = NOVALUE;
            _27338 = NOVALUE;
            // SubProg check_inline pc: 620 op: IF (20)
            if (_27339 == 0)
            {
                _27339 = NOVALUE;
                goto L17; // [620] 637
            }
            else{
                _27339 = NOVALUE;
            }
            // SubProg check_inline pc: 623 op: STARTLINE (58)

            /** inline.e:488							defer()*/
            // SubProg check_inline pc: 625 op: PROC (27)
            _66defer();
            // SubProg check_inline pc: 627 op: STARTLINE (58)

            /** inline.e:489							restore_code()*/
            // SubProg check_inline pc: 629 op: PROC (27)
            _66restore_code();
            // SubProg check_inline pc: 631 op: STARTLINE (58)

            /** inline.e:490							return*/
            // SubProg check_inline pc: 633 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: CASE-

// block var args_53527
            DeRefDS(_args_53527);

// Exiting block BLOCK: WHILE-

// block var op_53479

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
            DeRefi(_backpatch_op_53475);
            DeRef(_27329);
            _27329 = NOVALUE;
            DeRef(_27309);
            _27309 = NOVALUE;
            DeRef(_27325);
            _27325 = NOVALUE;
            DeRef(_27295);
            _27295 = NOVALUE;
            DeRef(_27330);
            _27330 = NOVALUE;
            DeRef(_27333);
            _27333 = NOVALUE;
            DeRef(_27298);
            _27298 = NOVALUE;
            _27288 = NOVALUE;
            DeRef(_27316);
            _27316 = NOVALUE;
            DeRef(_27336);
            _27336 = NOVALUE;
            DeRef(_27292);
            _27292 = NOVALUE;
            return;
            // SubProg check_inline pc: 636 op: NOP1 (159)
L17: // addr: 637 pc: 636 sub: 53403 op: 159
            // SubProg check_inline pc: 637 op: STARTLINE (58)

            /** inline.e:492					end for*/
            // SubProg check_inline pc: 639 op: ENDFOR_INT_UP1 (54)
            _i_53535 = _i_53535 + 1;
            goto L15; // [639] 605
L16: // addr: 644 pc: 639 sub: 53403 op: 54
            ;
        }
        // SubProg check_inline pc: 644 op: STARTLINE (58)

        /** inline.e:493					goto "inline op"*/
        // SubProg check_inline pc: 646 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var args_53527
        DeRef(_args_53527);
        _args_53527 = NOVALUE;
        // SubProg check_inline pc: 648 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53479
        // SubProg check_inline pc: 650 op: GOTO (188)
        goto G18;
        // SubProg check_inline pc: 652 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var args_53527
        // SubProg check_inline pc: 654 op: ELSE (23)
        goto LF; // [654] 851
        // SubProg check_inline pc: 656 op: STARTLINE (58)

        /** inline.e:495				case RIGHT_BRACE_2 then*/
        // SubProg check_inline pc: 658 op: CASE (186)
        case 85:
        // SubProg check_inline pc: 660 op: STARTLINE (58)

        /** inline.e:496					if equal( inline_code[pc+1], inline_code[pc+2] ) then*/
        // SubProg check_inline pc: 662 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 664 op: PLUS1 (93)
        _27341 = _pc_53435 + 1;
        // SubProg check_inline pc: 668 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27342 = (object)*(((s1_ptr)_2)->base + _27341);
        // SubProg check_inline pc: 672 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 674 op: PLUS (11)
        _27343 = _pc_53435 + 2;
        // SubProg check_inline pc: 678 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27344 = (object)*(((s1_ptr)_2)->base + _27343);
        // SubProg check_inline pc: 682 op: EQUAL (153)
        if (_27342 == _27344)
        _27345 = 1;
        else if (IS_ATOM_INT(_27342) && IS_ATOM_INT(_27344))
        _27345 = 0;
        else
        _27345 = (compare(_27342, _27344) == 0);
        _27342 = NOVALUE;
        _27344 = NOVALUE;
        // SubProg check_inline pc: 686 op: IF (20)
        if (_27345 == 0)
        {
            _27345 = NOVALUE;
            goto L19; // [686] 703
        }
        else{
            _27345 = NOVALUE;
        }
        // SubProg check_inline pc: 689 op: STARTLINE (58)

        /** inline.e:497						defer()*/
        // SubProg check_inline pc: 691 op: PROC (27)
        _66defer();
        // SubProg check_inline pc: 693 op: STARTLINE (58)

        /** inline.e:498						restore_code()*/
        // SubProg check_inline pc: 695 op: PROC (27)
        _66restore_code();
        // SubProg check_inline pc: 697 op: STARTLINE (58)

        /** inline.e:499						return*/
        // SubProg check_inline pc: 699 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: WHILE-

// block var op_53479

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
        DeRefi(_backpatch_op_53475);
        DeRef(_27329);
        _27329 = NOVALUE;
        DeRef(_27309);
        _27309 = NOVALUE;
        DeRef(_27325);
        _27325 = NOVALUE;
        DeRef(_27295);
        _27295 = NOVALUE;
        DeRef(_27330);
        _27330 = NOVALUE;
        _27343 = NOVALUE;
        DeRef(_27333);
        _27333 = NOVALUE;
        DeRef(_27298);
        _27298 = NOVALUE;
        _27288 = NOVALUE;
        _27341 = NOVALUE;
        DeRef(_27316);
        _27316 = NOVALUE;
        DeRef(_27336);
        _27336 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        return;
        // SubProg check_inline pc: 702 op: NOP1 (159)
L19: // addr: 703 pc: 702 sub: 53403 op: 159
        // SubProg check_inline pc: 703 op: STARTLINE (58)

        /** inline.e:501					goto "inline op"*/
        // SubProg check_inline pc: 705 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-
        // SubProg check_inline pc: 707 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53479
        // SubProg check_inline pc: 709 op: GOTO (188)
        goto G18;
        // SubProg check_inline pc: 711 op: ELSE (23)
        goto LF; // [711] 851
        // SubProg check_inline pc: 713 op: STARTLINE (58)

        /** inline.e:503				case EXIT_BLOCK then*/
        // SubProg check_inline pc: 715 op: CASE (186)
        case 206:
        // SubProg check_inline pc: 717 op: STARTLINE (58)

        /** inline.e:504					replace_code( "", pc, pc + 1 )*/
        // SubProg check_inline pc: 719 op: PLUS1 (93)
        _27346 = _pc_53435 + 1;
        if (_27346 > MAXINT){
            _27346 = NewDouble((eudouble)_27346);
        }
        // SubProg check_inline pc: 723 op: PROC (27)
        RefDS(_21936);
        _66replace_code(_21936, _pc_53435, _27346);
        _27346 = NOVALUE;
        // SubProg check_inline pc: 728 op: STARTLINE (58)

        /** inline.e:505					continue*/
        // SubProg check_inline pc: 730 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53479
        // SubProg check_inline pc: 732 op: ELSE (23)
        goto LD; // [732] 347
        // SubProg check_inline pc: 734 op: ELSE (23)
        goto LF; // [734] 851
        // SubProg check_inline pc: 736 op: STARTLINE (58)

        /** inline.e:507				case SWITCH_RT then*/
        // SubProg check_inline pc: 738 op: CASE (186)
        case 202:
        // SubProg check_inline pc: 740 op: STARTLINE (58)

        /** inline.e:508					sequence values = SymTab[inline_code[pc+2]][S_OBJ]*/
        // SubProg check_inline pc: 742 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 744 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 746 op: PLUS (11)
        _27347 = _pc_53435 + 2;
        // SubProg check_inline pc: 750 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27348 = (object)*(((s1_ptr)_2)->base + _27347);
        // SubProg check_inline pc: 754 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_27348)){
            _27349 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27348)->dbl));
        }
        else{
            _27349 = (object)*(((s1_ptr)_2)->base + _27348);
        }
        // SubProg check_inline pc: 758 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 760 op: RHS_SUBS_CHECK (92)
        DeRef(_values_53556);
        _2 = (object)SEQ_PTR(_27349);
        _values_53556 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_values_53556);
        _27349 = NOVALUE;
        // SubProg check_inline pc: 764 op: SEQUENCE_CHECK (97)
        // SubProg check_inline pc: 766 op: STARTLINE (58)

        /** inline.e:509					for i = 1 to length( values ) do*/
        // SubProg check_inline pc: 768 op: LENGTH (42)
        if (IS_SEQUENCE(_values_53556)){
                _27351 = SEQ_PTR(_values_53556)->length;
        }
        else {
            _27351 = 1;
        }
        // SubProg check_inline pc: 771 op: FOR_I (125)
        {
            object _i_53564;
            _i_53564 = 1;
L1A: // addr: 778 pc: 771 sub: 53403 op: 125
            if (_i_53564 > _27351){
                goto L1B; // [771] 811
            }
            // SubProg check_inline pc: 778 op: STARTLINE (58)

            /** inline.e:510						if sequence( values[i] ) then*/
            // SubProg check_inline pc: 780 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_values_53556);
            _27352 = (object)*(((s1_ptr)_2)->base + _i_53564);
            // SubProg check_inline pc: 784 op: IS_A_SEQUENCE (68)
            _27353 = IS_SEQUENCE(_27352);
            _27352 = NOVALUE;
            // SubProg check_inline pc: 787 op: IF (20)
            if (_27353 == 0)
            {
                _27353 = NOVALUE;
                goto L1C; // [787] 804
            }
            else{
                _27353 = NOVALUE;
            }
            // SubProg check_inline pc: 790 op: STARTLINE (58)

            /** inline.e:512							defer()*/
            // SubProg check_inline pc: 792 op: PROC (27)
            _66defer();
            // SubProg check_inline pc: 794 op: STARTLINE (58)

            /** inline.e:513							restore_code()*/
            // SubProg check_inline pc: 796 op: PROC (27)
            _66restore_code();
            // SubProg check_inline pc: 798 op: STARTLINE (58)

            /** inline.e:514							return*/
            // SubProg check_inline pc: 800 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: CASE-

// block var values_53556
            DeRefDS(_values_53556);

// Exiting block BLOCK: WHILE-

// block var op_53479

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
            DeRefi(_backpatch_op_53475);
            DeRef(_27329);
            _27329 = NOVALUE;
            DeRef(_27309);
            _27309 = NOVALUE;
            DeRef(_27325);
            _27325 = NOVALUE;
            DeRef(_27295);
            _27295 = NOVALUE;
            _27348 = NOVALUE;
            DeRef(_27330);
            _27330 = NOVALUE;
            DeRef(_27343);
            _27343 = NOVALUE;
            DeRef(_27333);
            _27333 = NOVALUE;
            DeRef(_27298);
            _27298 = NOVALUE;
            _27288 = NOVALUE;
            DeRef(_27341);
            _27341 = NOVALUE;
            DeRef(_27316);
            _27316 = NOVALUE;
            DeRef(_27336);
            _27336 = NOVALUE;
            DeRef(_27292);
            _27292 = NOVALUE;
            DeRef(_27347);
            _27347 = NOVALUE;
            return;
            // SubProg check_inline pc: 803 op: NOP1 (159)
L1C: // addr: 804 pc: 803 sub: 53403 op: 159
            // SubProg check_inline pc: 804 op: STARTLINE (58)

            /** inline.e:516					end for*/
            // SubProg check_inline pc: 806 op: ENDFOR_INT_UP1 (54)
            _i_53564 = _i_53564 + 1;
            goto L1A; // [806] 778
L1B: // addr: 811 pc: 806 sub: 53403 op: 54
            ;
        }
        // SubProg check_inline pc: 811 op: STARTLINE (58)

        /** inline.e:517					backpatch_op = append( backpatch_op, pc )*/
        // SubProg check_inline pc: 813 op: APPEND (35)
        Append(&_backpatch_op_53475, _backpatch_op_53475, _pc_53435);
        // SubProg check_inline pc: 817 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var values_53556
        DeRef(_values_53556);
        _values_53556 = NOVALUE;
        // SubProg check_inline pc: 819 op: STARTLINE (58)

        /** inline.e:520				case else*/
        // SubProg check_inline pc: 821 op: CASE (186)
        default:
        // SubProg check_inline pc: 823 op: STARTLINE (58)

        /** inline.e:521				label "inline op"*/
        // SubProg check_inline pc: 825 op: GLABEL (189)
G18:
        // SubProg check_inline pc: 827 op: STARTLINE (58)

        /** inline.e:522					if not inline_op( pc ) then*/
        // SubProg check_inline pc: 829 op: PROC (27)
        _27355 = _66inline_op(_pc_53435);
        // SubProg check_inline pc: 833 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27355)) {
            if (_27355 != 0){
                DeRef(_27355);
                _27355 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        else {
            if (DBL_PTR(_27355)->dbl != 0.0){
                DeRef(_27355);
                _27355 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        DeRef(_27355);
        _27355 = NOVALUE;
        // SubProg check_inline pc: 836 op: STARTLINE (58)

        /** inline.e:524						defer()*/
        // SubProg check_inline pc: 838 op: PROC (27)
        _66defer();
        // SubProg check_inline pc: 840 op: STARTLINE (58)

        /** inline.e:525						restore_code()*/
        // SubProg check_inline pc: 842 op: PROC (27)
        _66restore_code();
        // SubProg check_inline pc: 844 op: STARTLINE (58)

        /** inline.e:526						return*/
        // SubProg check_inline pc: 846 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: WHILE-

// block var op_53479

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
        DeRefi(_backpatch_op_53475);
        DeRef(_27329);
        _27329 = NOVALUE;
        DeRef(_27309);
        _27309 = NOVALUE;
        DeRef(_27325);
        _27325 = NOVALUE;
        DeRef(_27295);
        _27295 = NOVALUE;
        _27348 = NOVALUE;
        DeRef(_27330);
        _27330 = NOVALUE;
        DeRef(_27343);
        _27343 = NOVALUE;
        DeRef(_27333);
        _27333 = NOVALUE;
        DeRef(_27298);
        _27298 = NOVALUE;
        _27288 = NOVALUE;
        DeRef(_27341);
        _27341 = NOVALUE;
        DeRef(_27316);
        _27316 = NOVALUE;
        DeRef(_27336);
        _27336 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        DeRef(_27347);
        _27347 = NOVALUE;
        return;
        // SubProg check_inline pc: 849 op: NOP1 (159)
L1D: // addr: 850 pc: 849 sub: 53403 op: 159
        // SubProg check_inline pc: 850 op: NOPSWITCH (187)
    ;}LF: // addr: 851 pc: 850 sub: 53403 op: 187
    // SubProg check_inline pc: 851 op: STARTLINE (58)

    /** inline.e:530			pc = advance( pc, inline_code )*/
    // SubProg check_inline pc: 853 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 855 op: PROC (27)
    RefDS(_66inline_code_52887);
    _pc_53435 = _66advance(_pc_53435, _66inline_code_52887);
    // SubProg check_inline pc: 860 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53435)) {
        _1 = (object)(DBL_PTR(_pc_53435)->dbl);
        DeRefDS(_pc_53435);
        _pc_53435 = _1;
    }
    // SubProg check_inline pc: 862 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53479
    // SubProg check_inline pc: 864 op: STARTLINE (58)

    /** inline.e:532		end while*/
    // SubProg check_inline pc: 866 op: ENDWHILE (22)
    goto LD; // [866] 347
    // SubProg check_inline pc: 868 op: NOP1 (159)
LE: // addr: 869 pc: 868 sub: 53403 op: 159
    // SubProg check_inline pc: 869 op: STARTLINE (58)

    /** inline.e:534		SymTab[sub][S_INLINE] = { sort( assigned_params ), inline_code, backpatch_op }*/
    // SubProg check_inline pc: 871 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 873 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sub_53406 + ((s1_ptr)_2)->base);
    // SubProg check_inline pc: 878 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 880 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 882 op: PROC (27)
    RefDS(_66assigned_params_52893);
    _27360 = _24sort(_66assigned_params_52893, 1);
    // SubProg check_inline pc: 887 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 889 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _27360;
    RefDS(_66inline_code_52887);
    ((intptr_t*)_2)[2] = _66inline_code_52887;
    RefDS(_backpatch_op_53475);
    ((intptr_t*)_2)[3] = _backpatch_op_53475;
    _27361 = MAKE_SEQ(_1);
    _27360 = NOVALUE;
    // SubProg check_inline pc: 895 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 29);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27361;
    if( _1 != _27361 ){
        DeRef(_1);
    }
    _27361 = NOVALUE;
    _27358 = NOVALUE;
    // SubProg check_inline pc: 899 op: STARTLINE (58)

    /** inline.e:535		restore_code()*/
    // SubProg check_inline pc: 901 op: PROC (27)
    _66restore_code();
    // SubProg check_inline pc: 903 op: STARTLINE (58)

    /** inline.e:536	end procedure*/
    // SubProg check_inline pc: 905 op: RETURNP (29)

// Exiting block BLOCK: check_inline

// block var sub_53406

// block var pc_53435

// block var s_53437

// block var backpatch_op_53475
    DeRefDSi(_backpatch_op_53475);
    DeRef(_27329);
    _27329 = NOVALUE;
    DeRef(_27309);
    _27309 = NOVALUE;
    DeRef(_27325);
    _27325 = NOVALUE;
    DeRef(_27295);
    _27295 = NOVALUE;
    _27348 = NOVALUE;
    DeRef(_27330);
    _27330 = NOVALUE;
    DeRef(_27343);
    _27343 = NOVALUE;
    DeRef(_27333);
    _27333 = NOVALUE;
    DeRef(_27298);
    _27298 = NOVALUE;
    _27288 = NOVALUE;
    DeRef(_27341);
    _27341 = NOVALUE;
    DeRef(_27316);
    _27316 = NOVALUE;
    DeRef(_27336);
    _27336 = NOVALUE;
    DeRef(_27292);
    _27292 = NOVALUE;
    DeRef(_27347);
    _27347 = NOVALUE;
    return;
    // SubProg check_inline pc: 908 op: BADRETURNF (43)
    ;
}


void _66replace_temp(object _pc_53584)
{
    object _temp_num_53585 = NOVALUE;
    object _needed_53588 = NOVALUE;
    object _27374 = NOVALUE; // 53607 27374
    object _27373 = NOVALUE; // 53606 27373
    object _27372 = NOVALUE; // 53602 27372
    object _27371 = NOVALUE; // 53601 27371
// skipping _27370  name type: 0
    object _27369 = NOVALUE; // 53596 27369
// skipping _27368  name type: 0
    object _27367 = NOVALUE; // 53593 27367
// skipping _27366  name type: 0
// skipping _27365  name type: 0
    object _27364 = NOVALUE; // 53589 27364
// skipping _27363  name type: 0
    object _27362 = NOVALUE; // 53586 27362
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg replace_temp pc: 3 op: STARTLINE (58)

    /** inline.e:539		integer temp_num = inline_code[pc][2]*/
    // SubProg replace_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27362 = (object)*(((s1_ptr)_2)->base + _pc_53584);
    // SubProg replace_temp pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27362);
    _temp_num_53585 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_temp_num_53585)){
        _temp_num_53585 = (object)DBL_PTR(_temp_num_53585)->dbl;
    }
    _27362 = NOVALUE;
    // SubProg replace_temp pc: 17 op: STARTLINE (58)

    /** inline.e:540		integer needed = temp_num - length( inline_temps )*/
    // SubProg replace_temp pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_temps_52889)){
            _27364 = SEQ_PTR(_66inline_temps_52889)->length;
    }
    else {
        _27364 = 1;
    }
    // SubProg replace_temp pc: 24 op: MINUS_I (116)
    _needed_53588 = _temp_num_53585 - _27364;
    _27364 = NOVALUE;
    // SubProg replace_temp pc: 28 op: STARTLINE (58)

    /** inline.e:541		if needed > 0 then*/
    // SubProg replace_temp pc: 30 op: GREATER_IFW_I (124)
    if (_needed_53588 <= 0)
    goto L1; // [30] 47
    // SubProg replace_temp pc: 34 op: STARTLINE (58)

    /** inline.e:542			inline_temps &= repeat( 0, needed )*/
    // SubProg replace_temp pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 38 op: REPEAT (32)
    _27367 = Repeat(0, _needed_53588);
    // SubProg replace_temp pc: 42 op: CONCAT (15)
    Concat((object_ptr)&_66inline_temps_52889, _66inline_temps_52889, _27367);
    DeRefDS(_27367);
    _27367 = NOVALUE;
    // SubProg replace_temp pc: 46 op: NOP1 (159)
L1: // addr: 47 pc: 46 sub: 53582 op: 159
    // SubProg replace_temp pc: 47 op: STARTLINE (58)

    /** inline.e:545		if not inline_temps[temp_num] then*/
    // SubProg replace_temp pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_temps_52889);
    _27369 = (object)*(((s1_ptr)_2)->base + _temp_num_53585);
    // SubProg replace_temp pc: 55 op: NOT_IFW (108)
    if (IS_ATOM_INT(_27369)) {
        if (_27369 != 0){
            _27369 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    else {
        if (DBL_PTR(_27369)->dbl != 0.0){
            _27369 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    _27369 = NOVALUE;
    // SubProg replace_temp pc: 58 op: STARTLINE (58)

    /** inline.e:546			if TRANSLATE then*/
    // SubProg replace_temp pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 62 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L3; // [62] 84
    }
    else{
    }
    // SubProg replace_temp pc: 65 op: STARTLINE (58)

    /** inline.e:547				inline_temps[temp_num] = new_inline_var( -temp_num, 0 )*/
    // SubProg replace_temp pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 69 op: UMINUS (12)
    if ((uintptr_t)_temp_num_53585 == (uintptr_t)HIGH_BITS){
        _27371 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27371 = - _temp_num_53585;
    }
    // SubProg replace_temp pc: 72 op: PROC (27)
    _27372 = _66new_inline_var(_27371, 0);
    _27371 = NOVALUE;
    // SubProg replace_temp pc: 77 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_temps_52889);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_temps_52889 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53585);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27372;
    if( _1 != _27372 ){
        DeRef(_1);
    }
    _27372 = NOVALUE;
    // SubProg replace_temp pc: 81 op: ELSE (23)
    goto L4; // [81] 99
    // SubProg replace_temp pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 53582 op: 159
    // SubProg replace_temp pc: 84 op: STARTLINE (58)

    /** inline.e:549				inline_temps[temp_num] = NewTempSym( TRUE )*/
    // SubProg replace_temp pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 90 op: PROC (27)
    _27373 = _53NewTempSym(_8TRUE_444);
    // SubProg replace_temp pc: 94 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_temps_52889);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_temps_52889 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53585);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27373;
    if( _1 != _27373 ){
        DeRef(_1);
    }
    _27373 = NOVALUE;
    // SubProg replace_temp pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 53582 op: 159
    // SubProg replace_temp pc: 99 op: NOP1 (159)
L2: // addr: 100 pc: 99 sub: 53582 op: 159
    // SubProg replace_temp pc: 100 op: STARTLINE (58)

    /** inline.e:554		inline_code[pc] = inline_temps[temp_num]*/
    // SubProg replace_temp pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 106 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_temps_52889);
    _27374 = (object)*(((s1_ptr)_2)->base + _temp_num_53585);
    // SubProg replace_temp pc: 110 op: ASSIGN_SUBS (16)
    Ref(_27374);
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53584);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27374;
    if( _1 != _27374 ){
        DeRef(_1);
    }
    _27374 = NOVALUE;
    // SubProg replace_temp pc: 114 op: STARTLINE (58)

    /** inline.e:555	end procedure*/
    // SubProg replace_temp pc: 116 op: RETURNP (29)

// Exiting block BLOCK: replace_temp

// block var pc_53584

// block var temp_num_53585

// block var needed_53588
    return;
    // SubProg replace_temp pc: 119 op: BADRETURNF (43)
    ;
}


object _66get_param_sym(object _pc_53610)
{
    object _il_53611 = NOVALUE;
    object _px_53619 = NOVALUE;
    object _27381 = NOVALUE; // 53621 27381
// skipping _27380  name type: 0
// skipping _27379  name type: 0
    object _27378 = NOVALUE; // 53617 27378
    object _27377 = NOVALUE; // 53615 27377
    object _27376 = NOVALUE; // 53614 27376
// skipping _27375  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_param_sym pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_param_sym pc: 3 op: STARTLINE (58)

    /** inline.e:558		object il = inline_code[pc]*/
    // SubProg get_param_sym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 7 op: RHS_SUBS (25)
    DeRef(_il_53611);
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _il_53611 = (object)*(((s1_ptr)_2)->base + _pc_53610);
    Ref(_il_53611);
    // SubProg get_param_sym pc: 11 op: STARTLINE (58)

    /** inline.e:559		if integer( il ) then*/
    // SubProg get_param_sym pc: 13 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_il_53611))
    _27376 = 1;
    else if (IS_ATOM_DBL(_il_53611))
    _27376 = IS_ATOM_INT(DoubleToInt(_il_53611));
    else
    _27376 = 0;
    // SubProg get_param_sym pc: 16 op: IF (20)
    if (_27376 == 0)
    {
        _27376 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27376 = NOVALUE;
    }
    // SubProg get_param_sym pc: 19 op: STARTLINE (58)

    /** inline.e:560			return inline_code[pc]*/
    // SubProg get_param_sym pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27377 = (object)*(((s1_ptr)_2)->base + _pc_53610);
    // SubProg get_param_sym pc: 27 op: RETURNF (28)
    Ref(_27377);

// Exiting block BLOCK: get_param_sym

// block var pc_53610

// block var il_53611
    DeRef(_il_53611);

// block var px_53619
    return _27377;
    // SubProg get_param_sym pc: 31 op: ELSE (23)
    goto L2; // [31] 53
    // SubProg get_param_sym pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53608 op: 159
    // SubProg get_param_sym pc: 34 op: STARTLINE (58)

    /** inline.e:562		elsif length( il ) = 1 then*/
    // SubProg get_param_sym pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_il_53611)){
            _27378 = SEQ_PTR(_il_53611)->length;
    }
    else {
        _27378 = 1;
    }
    // SubProg get_param_sym pc: 39 op: EQUALS_IFW_I (121)
    if (_27378 != 1)
    goto L3; // [39] 52
    // SubProg get_param_sym pc: 43 op: STARTLINE (58)

    /** inline.e:563			return inline_target*/
    // SubProg get_param_sym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_param_sym

// block var pc_53610

// block var il_53611
    DeRef(_il_53611);

// block var px_53619
    _27377 = NOVALUE;
    return _66inline_target_52894;
    // SubProg get_param_sym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 53608 op: 159
    // SubProg get_param_sym pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 53608 op: 159
    // SubProg get_param_sym pc: 53 op: STARTLINE (58)

    /** inline.e:567		integer px = il[2]*/
    // SubProg get_param_sym pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_il_53611);
    _px_53619 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53619)){
        _px_53619 = (object)DBL_PTR(_px_53619)->dbl;
    }
    // SubProg get_param_sym pc: 61 op: STARTLINE (58)

    /** inline.e:568		return passed_params[px]*/
    // SubProg get_param_sym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66passed_params_52890);
    _27381 = (object)*(((s1_ptr)_2)->base + _px_53619);
    // SubProg get_param_sym pc: 69 op: RETURNF (28)
    Ref(_27381);

// Exiting block BLOCK: get_param_sym

// block var pc_53610

// block var il_53611
    DeRef(_il_53611);

// block var px_53619
    _27377 = NOVALUE;
    return _27381;
    // SubProg get_param_sym pc: 73 op: BADRETURNF (43)
    ;
}


object _66get_original_sym(object _pc_53624)
{
    object _il_53625 = NOVALUE;
    object _px_53633 = NOVALUE;
    object _27388 = NOVALUE; // 53635 27388
// skipping _27387  name type: 0
// skipping _27386  name type: 0
    object _27385 = NOVALUE; // 53631 27385
    object _27384 = NOVALUE; // 53629 27384
    object _27383 = NOVALUE; // 53628 27383
// skipping _27382  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_original_sym pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53624)) {
        _1 = (object)(DBL_PTR(_pc_53624)->dbl);
        DeRefDS(_pc_53624);
        _pc_53624 = _1;
    }
    // SubProg get_original_sym pc: 3 op: STARTLINE (58)

    /** inline.e:572		object il = inline_code[pc]*/
    // SubProg get_original_sym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 7 op: RHS_SUBS (25)
    DeRef(_il_53625);
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _il_53625 = (object)*(((s1_ptr)_2)->base + _pc_53624);
    Ref(_il_53625);
    // SubProg get_original_sym pc: 11 op: STARTLINE (58)

    /** inline.e:573		if integer( il ) then*/
    // SubProg get_original_sym pc: 13 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_il_53625))
    _27383 = 1;
    else if (IS_ATOM_DBL(_il_53625))
    _27383 = IS_ATOM_INT(DoubleToInt(_il_53625));
    else
    _27383 = 0;
    // SubProg get_original_sym pc: 16 op: IF (20)
    if (_27383 == 0)
    {
        _27383 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27383 = NOVALUE;
    }
    // SubProg get_original_sym pc: 19 op: STARTLINE (58)

    /** inline.e:574			return inline_code[pc]*/
    // SubProg get_original_sym pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27384 = (object)*(((s1_ptr)_2)->base + _pc_53624);
    // SubProg get_original_sym pc: 27 op: RETURNF (28)
    Ref(_27384);

// Exiting block BLOCK: get_original_sym

// block var pc_53624

// block var il_53625
    DeRef(_il_53625);

// block var px_53633
    return _27384;
    // SubProg get_original_sym pc: 31 op: ELSE (23)
    goto L2; // [31] 53
    // SubProg get_original_sym pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53622 op: 159
    // SubProg get_original_sym pc: 34 op: STARTLINE (58)

    /** inline.e:576		elsif length( il ) = 1 then*/
    // SubProg get_original_sym pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_il_53625)){
            _27385 = SEQ_PTR(_il_53625)->length;
    }
    else {
        _27385 = 1;
    }
    // SubProg get_original_sym pc: 39 op: EQUALS_IFW_I (121)
    if (_27385 != 1)
    goto L3; // [39] 52
    // SubProg get_original_sym pc: 43 op: STARTLINE (58)

    /** inline.e:577			return inline_target*/
    // SubProg get_original_sym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_original_sym

// block var pc_53624

// block var il_53625
    DeRef(_il_53625);

// block var px_53633
    _27384 = NOVALUE;
    return _66inline_target_52894;
    // SubProg get_original_sym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 53622 op: 159
    // SubProg get_original_sym pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 53622 op: 159
    // SubProg get_original_sym pc: 53 op: STARTLINE (58)

    /** inline.e:581		integer px = il[2]*/
    // SubProg get_original_sym pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_il_53625);
    _px_53633 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53633)){
        _px_53633 = (object)DBL_PTR(_px_53633)->dbl;
    }
    // SubProg get_original_sym pc: 61 op: STARTLINE (58)

    /** inline.e:582		return original_params[px]*/
    // SubProg get_original_sym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66original_params_52891);
    _27388 = (object)*(((s1_ptr)_2)->base + _px_53633);
    // SubProg get_original_sym pc: 69 op: RETURNF (28)
    Ref(_27388);

// Exiting block BLOCK: get_original_sym

// block var pc_53624

// block var il_53625
    DeRef(_il_53625);

// block var px_53633
    _27384 = NOVALUE;
    return _27388;
    // SubProg get_original_sym pc: 73 op: BADRETURNF (43)
    ;
}


void _66replace_var(object _pc_53642)
{
    object _27392 = NOVALUE; // 53645 27392
    object _27391 = NOVALUE; // 53644 27391
    object _27390 = NOVALUE; // 53643 27390
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_var pc: 1 op: INTEGER_CHECK (96)
    // SubProg replace_var pc: 3 op: STARTLINE (58)

    /** inline.e:590		inline_code[pc] = proc_vars[inline_code[pc][2]]*/
    // SubProg replace_var pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27390 = (object)*(((s1_ptr)_2)->base + _pc_53642);
    // SubProg replace_var pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27390);
    _27391 = (object)*(((s1_ptr)_2)->base + 2);
    _27390 = NOVALUE;
    // SubProg replace_var pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66proc_vars_52888);
    if (!IS_ATOM_INT(_27391)){
        _27392 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27391)->dbl));
    }
    else{
        _27392 = (object)*(((s1_ptr)_2)->base + _27391);
    }
    // SubProg replace_var pc: 23 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53642);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27392;
    if( _1 != _27392 ){
        DeRef(_1);
    }
    _27392 = NOVALUE;
    // SubProg replace_var pc: 27 op: STARTLINE (58)

    /** inline.e:591	end procedure*/
    // SubProg replace_var pc: 29 op: RETURNP (29)

// Exiting block BLOCK: replace_var

// block var pc_53642
    _27391 = NOVALUE;
    return;
    // SubProg replace_var pc: 32 op: BADRETURNF (43)
    ;
}


void _66fix_switch_rt(object _pc_53648)
{
    object _value_table_53650 = NOVALUE;
    object _jump_table_53657 = NOVALUE;
    object _27412 = NOVALUE; // 53684 27412
    object _27411 = NOVALUE; // 53683 27411
    object _27410 = NOVALUE; // 53682 27410
    object _27409 = NOVALUE; // 53680 27409
    object _27408 = NOVALUE; // 53679 27408
    object _27407 = NOVALUE; // 53678 27407
// skipping _27406  name type: 0
    object _27405 = NOVALUE; // 53674 27405
    object _27404 = NOVALUE; // 53672 27404
    object _27403 = NOVALUE; // 53670 27403
    object _27402 = NOVALUE; // 53669 27402
    object _27401 = NOVALUE; // 53668 27401
// skipping _27400  name type: 0
    object _27399 = NOVALUE; // 53664 27399
// skipping _27398  name type: 0
    object _27397 = NOVALUE; // 53661 27397
    object _27396 = NOVALUE; // 53660 27396
// skipping _27395  name type: 0
    object _27394 = NOVALUE; // 53654 27394
    object _27393 = NOVALUE; // 53653 27393
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg fix_switch_rt pc: 1 op: INTEGER_CHECK (96)
    // SubProg fix_switch_rt pc: 3 op: STARTLINE (58)

    /** inline.e:594		symtab_index value_table = NewStringSym( {-1, length(SymTab)} )*/
    // SubProg fix_switch_rt pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _27393 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _27393 = 1;
    }
    // SubProg fix_switch_rt pc: 10 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27393;
    _27394 = MAKE_SEQ(_1);
    _27393 = NOVALUE;
    // SubProg fix_switch_rt pc: 14 op: PROC (27)
    _value_table_53650 = _53NewStringSym(_27394);
    _27394 = NOVALUE;
    // SubProg fix_switch_rt pc: 18 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_value_table_53650)) {
        _1 = (object)(DBL_PTR(_value_table_53650)->dbl);
        DeRefDS(_value_table_53650);
        _value_table_53650 = _1;
    }
    // SubProg fix_switch_rt pc: 20 op: STARTLINE (58)

    /** inline.e:595		symtab_index jump_table  = NewStringSym( {-1, length(SymTab)} )*/
    // SubProg fix_switch_rt pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _27396 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _27396 = 1;
    }
    // SubProg fix_switch_rt pc: 27 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27396;
    _27397 = MAKE_SEQ(_1);
    _27396 = NOVALUE;
    // SubProg fix_switch_rt pc: 31 op: PROC (27)
    _jump_table_53657 = _53NewStringSym(_27397);
    _27397 = NOVALUE;
    // SubProg fix_switch_rt pc: 35 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_jump_table_53657)) {
        _1 = (object)(DBL_PTR(_jump_table_53657)->dbl);
        DeRefDS(_jump_table_53657);
        _jump_table_53657 = _1;
    }
    // SubProg fix_switch_rt pc: 37 op: STARTLINE (58)

    /** inline.e:597		SymTab[value_table][S_OBJ] = SymTab[inline_code[pc+2]][S_OBJ]*/
    // SubProg fix_switch_rt pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 41 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_value_table_53650 + ((s1_ptr)_2)->base);
    // SubProg fix_switch_rt pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 52 op: PLUS (11)
    _27401 = _pc_53648 + 2;
    // SubProg fix_switch_rt pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27402 = (object)*(((s1_ptr)_2)->base + _27401);
    // SubProg fix_switch_rt pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_27402)){
        _27403 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27402)->dbl));
    }
    else{
        _27403 = (object)*(((s1_ptr)_2)->base + _27402);
    }
    // SubProg fix_switch_rt pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 66 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27403);
    _27404 = (object)*(((s1_ptr)_2)->base + 1);
    _27403 = NOVALUE;
    // SubProg fix_switch_rt pc: 70 op: PASSIGN_SUBS (162)
    Ref(_27404);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27404;
    if( _1 != _27404 ){
        DeRef(_1);
    }
    _27404 = NOVALUE;
    _27399 = NOVALUE;
    // SubProg fix_switch_rt pc: 74 op: STARTLINE (58)

    /** inline.e:598		SymTab[jump_table][S_OBJ]  = SymTab[inline_code[pc+3]][S_OBJ]*/
    // SubProg fix_switch_rt pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 78 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_jump_table_53657 + ((s1_ptr)_2)->base);
    // SubProg fix_switch_rt pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 89 op: PLUS (11)
    _27407 = _pc_53648 + 3;
    // SubProg fix_switch_rt pc: 93 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _27408 = (object)*(((s1_ptr)_2)->base + _27407);
    // SubProg fix_switch_rt pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_27408)){
        _27409 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27408)->dbl));
    }
    else{
        _27409 = (object)*(((s1_ptr)_2)->base + _27408);
    }
    // SubProg fix_switch_rt pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27409);
    _27410 = (object)*(((s1_ptr)_2)->base + 1);
    _27409 = NOVALUE;
    // SubProg fix_switch_rt pc: 107 op: PASSIGN_SUBS (162)
    Ref(_27410);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27410;
    if( _1 != _27410 ){
        DeRef(_1);
    }
    _27410 = NOVALUE;
    _27405 = NOVALUE;
    // SubProg fix_switch_rt pc: 111 op: STARTLINE (58)

    /** inline.e:600		inline_code[pc+2] = value_table*/
    // SubProg fix_switch_rt pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 115 op: PLUS (11)
    _27411 = _pc_53648 + 2;
    // SubProg fix_switch_rt pc: 119 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27411);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _value_table_53650;
    DeRef(_1);
    // SubProg fix_switch_rt pc: 123 op: STARTLINE (58)

    /** inline.e:601		inline_code[pc+3] = jump_table*/
    // SubProg fix_switch_rt pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 127 op: PLUS (11)
    _27412 = _pc_53648 + 3;
    // SubProg fix_switch_rt pc: 131 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27412);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _jump_table_53657;
    DeRef(_1);
    // SubProg fix_switch_rt pc: 135 op: STARTLINE (58)

    /** inline.e:603	end procedure*/
    // SubProg fix_switch_rt pc: 137 op: RETURNP (29)

// Exiting block BLOCK: fix_switch_rt

// block var pc_53648

// block var value_table_53650

// block var jump_table_53657
    _27401 = NOVALUE;
    _27402 = NOVALUE;
    _27408 = NOVALUE;
    _27407 = NOVALUE;
    _27411 = NOVALUE;
    _27412 = NOVALUE;
    return;
    // SubProg fix_switch_rt pc: 140 op: BADRETURNF (43)
    ;
}


void _66fixup_special_op(object _pc_53687)
{
    object _op_53688 = NOVALUE;
// skipping _27413  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fixup_special_op pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53687)) {
        _1 = (object)(DBL_PTR(_pc_53687)->dbl);
        DeRefDS(_pc_53687);
        _pc_53687 = _1;
    }
    // SubProg fixup_special_op pc: 3 op: STARTLINE (58)

    /** inline.e:606		integer op = inline_code[pc]*/
    // SubProg fixup_special_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg fixup_special_op pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _op_53688 = (object)*(((s1_ptr)_2)->base + _pc_53687);
    if (!IS_ATOM_INT(_op_53688))
    _op_53688 = (object)DBL_PTR(_op_53688)->dbl;
    // SubProg fixup_special_op pc: 11 op: STARTLINE (58)

    /** inline.e:607		switch op with fallthru do*/
    // SubProg fixup_special_op pc: 13 op: SWITCH_I (193)
    _0 = _op_53688;
    switch ( _0 ){ 
        // SubProg fixup_special_op pc: 18 op: STARTLINE (58)

        /** inline.e:608			case SWITCH_RT then*/
        // SubProg fixup_special_op pc: 20 op: CASE (186)
        case 202:
        // SubProg fixup_special_op pc: 22 op: STARTLINE (58)

        /** inline.e:609				fix_switch_rt( pc )*/
        // SubProg fixup_special_op pc: 24 op: PROC (27)
        _66fix_switch_rt(_pc_53687);
        // SubProg fixup_special_op pc: 27 op: STARTLINE (58)

        /** inline.e:610				break*/
        // SubProg fixup_special_op pc: 29 op: ELSE (23)
        goto L1; // [29] 32
        // SubProg fixup_special_op pc: 31 op: NOPSWITCH (187)
    ;}L1: // addr: 32 pc: 31 sub: 53685 op: 187
    // SubProg fixup_special_op pc: 32 op: STARTLINE (58)

    /** inline.e:612	end procedure*/
    // SubProg fixup_special_op pc: 34 op: RETURNP (29)

// Exiting block BLOCK: fixup_special_op

// block var pc_53687

// block var op_53688
    return;
    // SubProg fixup_special_op pc: 37 op: BADRETURNF (43)
    ;
}


object _66new_inline_var(object _ps_53699, object _reuse_53700)
{
    object _var_53702 = NOVALUE;
    object _vtype_53703 = NOVALUE;
    object _name_53704 = NOVALUE;
    object _s_53706 = NOVALUE;
    object _27475 = NOVALUE; // 53832 27475
    object _27474 = NOVALUE; // 53826 27474
// skipping _27473  name type: 0
    object _27472 = NOVALUE; // 53820 27472
// skipping _27471  name type: 0
// skipping _27470  name type: 0
// skipping _27469  name type: 0
// skipping _27468  name type: 0
// skipping _27467  name type: 0
// skipping _27466  name type: 0
// skipping _27465  name type: 0
// skipping _27464  name type: 0
    object _27463 = NOVALUE; // 53798 27463
    object _27462 = NOVALUE; // 53796 27462
    object _27461 = NOVALUE; // 53794 27461
// skipping _27460  name type: 0
    object _27459 = NOVALUE; // 53790 27459
// skipping _27458  name type: 0
// skipping _27457  name type: 0
// skipping _27456  name type: 0
// skipping _27455  name type: 0
    object _27454 = NOVALUE; // 53773 27454
// skipping _27452  name type: 0
// skipping _27450  name type: 0
    object _27449 = NOVALUE; // 53766 27449
    object _27448 = NOVALUE; // 53765 27448
    object _27447 = NOVALUE; // 53764 27447
    object _27446 = NOVALUE; // 53762 27446
// skipping _27444  name type: 0
    object _27443 = NOVALUE; // 53756 27443
// skipping _27442  name type: 0
    object _27441 = NOVALUE; // 53753 27441
// skipping _27439  name type: 0
    object _27438 = NOVALUE; // 53749 27438
// skipping _27436  name type: 0
// skipping _27435  name type: 0
// skipping _27434  name type: 0
    object _27433 = NOVALUE; // 53738 27433
    object _27432 = NOVALUE; // 53737 27432
    object _27431 = NOVALUE; // 53735 27431
    object _27430 = NOVALUE; // 53733 27430
    object _27429 = NOVALUE; // 53731 27429
// skipping _27427  name type: 0
    object _27426 = NOVALUE; // 53726 27426
    object _27425 = NOVALUE; // 53725 27425
    object _27424 = NOVALUE; // 53723 27424
    object _27423 = NOVALUE; // 53721 27423
    object _27422 = NOVALUE; // 53719 27422
// skipping _27420  name type: 0
// skipping _27419  name type: 0
// skipping _27418  name type: 0
// skipping _27417  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg new_inline_var pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ps_53699)) {
        _1 = (object)(DBL_PTR(_ps_53699)->dbl);
        DeRefDS(_ps_53699);
        _ps_53699 = _1;
    }
    // SubProg new_inline_var pc: 3 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 5 op: STARTLINE (58)

    /** inline.e:622			var = 0, */
    // SubProg new_inline_var pc: 7 op: ASSIGN (18)
    _var_53702 = 0;
    // SubProg new_inline_var pc: 10 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 12 op: STARTLINE (58)

    /** inline.e:624		sequence name*/
    // SubProg new_inline_var pc: 14 op: STARTLINE (58)

    /** inline.e:627		if reuse then*/
    // SubProg new_inline_var pc: 16 op: IF (20)
    // SubProg new_inline_var pc: 38 op: STARTLINE (58)

    /** inline.e:631		if not var then*/
    // SubProg new_inline_var pc: 40 op: NOT_IFW (108)
    // SubProg new_inline_var pc: 43 op: STARTLINE (58)

    /** inline.e:632			if ps > 0 then*/
    // SubProg new_inline_var pc: 45 op: GREATER_IFW_I (124)
    if (_ps_53699 <= 0)
    goto L1; // [45] 222
    // SubProg new_inline_var pc: 49 op: STARTLINE (58)

    /** inline.e:633				s = ps*/
    // SubProg new_inline_var pc: 51 op: ASSIGN (18)
    _s_53706 = _ps_53699;
    // SubProg new_inline_var pc: 54 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 56 op: STARTLINE (58)

    /** inline.e:634				if TRANSLATE then*/
    // SubProg new_inline_var pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 60 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L2; // [60] 102
    }
    else{
    }
    // SubProg new_inline_var pc: 63 op: STARTLINE (58)

    /** inline.e:635					name = sprintf( "%s_inlined_%s", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    // SubProg new_inline_var pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27422 = (object)*(((s1_ptr)_2)->base + _s_53706);
    // SubProg new_inline_var pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 73 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27422);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27423 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27423 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27422 = NOVALUE;
    // SubProg new_inline_var pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27424 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52901);
    // SubProg new_inline_var pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27424);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27425 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27425 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27424 = NOVALUE;
    // SubProg new_inline_var pc: 91 op: RIGHT_BRACE_2 (85)
    Ref(_27425);
    Ref(_27423);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27423;
    ((intptr_t *)_2)[2] = _27425;
    _27426 = MAKE_SEQ(_1);
    _27425 = NOVALUE;
    _27423 = NOVALUE;
    // SubProg new_inline_var pc: 95 op: SPRINTF (53)
    DeRefi(_name_53704);
    _name_53704 = EPrintf(-9999999, _27421, _27426);
    DeRefDS(_27426);
    _27426 = NOVALUE;
    // SubProg new_inline_var pc: 99 op: ELSE (23)
    goto L3; // [99] 139
    // SubProg new_inline_var pc: 101 op: NOP1 (159)
L2: // addr: 102 pc: 101 sub: 53697 op: 159
    // SubProg new_inline_var pc: 102 op: STARTLINE (58)

    /** inline.e:637					name = sprintf( "%s (from inlined routine '%s'", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    // SubProg new_inline_var pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27429 = (object)*(((s1_ptr)_2)->base + _s_53706);
    // SubProg new_inline_var pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27429);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27430 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27430 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27429 = NOVALUE;
    // SubProg new_inline_var pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27431 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52901);
    // SubProg new_inline_var pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27431);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27432 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27432 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27431 = NOVALUE;
    // SubProg new_inline_var pc: 130 op: RIGHT_BRACE_2 (85)
    Ref(_27432);
    Ref(_27430);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27430;
    ((intptr_t *)_2)[2] = _27432;
    _27433 = MAKE_SEQ(_1);
    _27432 = NOVALUE;
    _27430 = NOVALUE;
    // SubProg new_inline_var pc: 134 op: SPRINTF (53)
    DeRefi(_name_53704);
    _name_53704 = EPrintf(-9999999, _27428, _27433);
    DeRefDS(_27433);
    _27433 = NOVALUE;
    // SubProg new_inline_var pc: 138 op: NOP1 (159)
L3: // addr: 139 pc: 138 sub: 53697 op: 159
    // SubProg new_inline_var pc: 139 op: STARTLINE (58)

    /** inline.e:640				if reuse then*/
    // SubProg new_inline_var pc: 141 op: IF (20)
    if (_reuse_53700 == 0)
    {
        goto L4; // [141] 163
    }
    else{
    }
    // SubProg new_inline_var pc: 144 op: STARTLINE (58)

    /** inline.e:641					if not TRANSLATE then*/
    // SubProg new_inline_var pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 148 op: NOT_IFW (108)
    if (_34TRANSLATE_14813 != 0)
    goto L5; // [148] 203
    // SubProg new_inline_var pc: 151 op: STARTLINE (58)

    /** inline.e:642						name &= ")"*/
    // SubProg new_inline_var pc: 153 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 155 op: CONCAT (15)
    Concat((object_ptr)&_name_53704, _name_53704, _26198);
    // SubProg new_inline_var pc: 159 op: NOP1 (159)
    // SubProg new_inline_var pc: 160 op: ELSE (23)
    goto L5; // [160] 203
    // SubProg new_inline_var pc: 162 op: NOP1 (159)
L4: // addr: 163 pc: 162 sub: 53697 op: 159
    // SubProg new_inline_var pc: 163 op: STARTLINE (58)

    /** inline.e:645					if TRANSLATE then*/
    // SubProg new_inline_var pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 167 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L6; // [167] 187
    }
    else{
    }
    // SubProg new_inline_var pc: 170 op: STARTLINE (58)

    /** inline.e:646						name &= sprintf( "_at_%d", inline_start)*/
    // SubProg new_inline_var pc: 172 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 176 op: SPRINTF (53)
    _27438 = EPrintf(-9999999, _27437, _66inline_start_52899);
    // SubProg new_inline_var pc: 180 op: CONCAT (15)
    Concat((object_ptr)&_name_53704, _name_53704, _27438);
    DeRefDS(_27438);
    _27438 = NOVALUE;
    // SubProg new_inline_var pc: 184 op: ELSE (23)
    goto L7; // [184] 202
    // SubProg new_inline_var pc: 186 op: NOP1 (159)
L6: // addr: 187 pc: 186 sub: 53697 op: 159
    // SubProg new_inline_var pc: 187 op: STARTLINE (58)

    /** inline.e:648						name &= sprintf( " at %d)", inline_start)*/
    // SubProg new_inline_var pc: 189 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 193 op: SPRINTF (53)
    _27441 = EPrintf(-9999999, _27440, _66inline_start_52899);
    // SubProg new_inline_var pc: 197 op: CONCAT (15)
    Concat((object_ptr)&_name_53704, _name_53704, _27441);
    DeRefDS(_27441);
    _27441 = NOVALUE;
    // SubProg new_inline_var pc: 201 op: NOP1 (159)
L7: // addr: 202 pc: 201 sub: 53697 op: 159
    // SubProg new_inline_var pc: 202 op: NOP1 (159)
L5: // addr: 203 pc: 202 sub: 53697 op: 159
    // SubProg new_inline_var pc: 203 op: STARTLINE (58)

    /** inline.e:652				vtype = SymTab[s][S_VTYPE]*/
    // SubProg new_inline_var pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 207 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27443 = (object)*(((s1_ptr)_2)->base + _s_53706);
    // SubProg new_inline_var pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27443);
    _vtype_53703 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_vtype_53703)){
        _vtype_53703 = (object)DBL_PTR(_vtype_53703)->dbl;
    }
    _27443 = NOVALUE;
    // SubProg new_inline_var pc: 219 op: ELSE (23)
    goto L8; // [219] 286
    // SubProg new_inline_var pc: 221 op: NOP1 (159)
L1: // addr: 222 pc: 221 sub: 53697 op: 159
    // SubProg new_inline_var pc: 222 op: STARTLINE (58)

    /** inline.e:654				name = sprintf( "%s_%d", {SymTab[inline_sub][S_NAME], -ps})*/
    // SubProg new_inline_var pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 228 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27446 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52901);
    // SubProg new_inline_var pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 234 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27446);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27447 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27447 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27446 = NOVALUE;
    // SubProg new_inline_var pc: 238 op: UMINUS (12)
    if ((uintptr_t)_ps_53699 == (uintptr_t)HIGH_BITS){
        _27448 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27448 = - _ps_53699;
    }
    // SubProg new_inline_var pc: 241 op: RIGHT_BRACE_2 (85)
    Ref(_27447);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27447;
    ((intptr_t *)_2)[2] = _27448;
    _27449 = MAKE_SEQ(_1);
    _27448 = NOVALUE;
    _27447 = NOVALUE;
    // SubProg new_inline_var pc: 245 op: SPRINTF (53)
    DeRefi(_name_53704);
    _name_53704 = EPrintf(-9999999, _27445, _27449);
    DeRefDS(_27449);
    _27449 = NOVALUE;
    // SubProg new_inline_var pc: 249 op: STARTLINE (58)

    /** inline.e:655				if reuse then*/
    // SubProg new_inline_var pc: 251 op: IF (20)
    if (_reuse_53700 == 0)
    {
        goto L9; // [251] 263
    }
    else{
    }
    // SubProg new_inline_var pc: 254 op: STARTLINE (58)

    /** inline.e:656					name &= "__tmp"*/
    // SubProg new_inline_var pc: 256 op: CONCAT (15)
    Concat((object_ptr)&_name_53704, _name_53704, _27451);
    // SubProg new_inline_var pc: 260 op: ELSE (23)
    goto LA; // [260] 276
    // SubProg new_inline_var pc: 262 op: NOP1 (159)
L9: // addr: 263 pc: 262 sub: 53697 op: 159
    // SubProg new_inline_var pc: 263 op: STARTLINE (58)

    /** inline.e:658					name &= sprintf( "__tmp_at%d", inline_start)*/
    // SubProg new_inline_var pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 267 op: SPRINTF (53)
    _27454 = EPrintf(-9999999, _27453, _66inline_start_52899);
    // SubProg new_inline_var pc: 271 op: CONCAT (15)
    Concat((object_ptr)&_name_53704, _name_53704, _27454);
    DeRefDS(_27454);
    _27454 = NOVALUE;
    // SubProg new_inline_var pc: 275 op: NOP1 (159)
LA: // addr: 276 pc: 275 sub: 53697 op: 159
    // SubProg new_inline_var pc: 276 op: STARTLINE (58)

    /** inline.e:660				vtype = object_type*/
    // SubProg new_inline_var pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 280 op: ASSIGN (18)
    _vtype_53703 = _53object_type_46257;
    // SubProg new_inline_var pc: 283 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 285 op: NOP1 (159)
L8: // addr: 286 pc: 285 sub: 53697 op: 159
    // SubProg new_inline_var pc: 286 op: STARTLINE (58)

    /** inline.e:662			if CurrentSub = TopLevelSub then*/
    // SubProg new_inline_var pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 292 op: EQUALS_IFW (104)
    if (_34CurrentSub_15196 != _34TopLevelSub_15195)
    goto LB; // [292] 325
    // SubProg new_inline_var pc: 296 op: STARTLINE (58)

    /** inline.e:663				var = NewEntry( name, varnum, SC_LOCAL, VARIABLE, INLINE_HASHVAL, 0, vtype )*/
    // SubProg new_inline_var pc: 298 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 300 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 308 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 310 op: PROC (27)
    RefDS(_name_53704);
    _var_53702 = _53NewEntry(_name_53704, _66varnum_52898, 5, -100, 2004, 0, _vtype_53703);
    // SubProg new_inline_var pc: 320 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53702)) {
        _1 = (object)(DBL_PTR(_var_53702)->dbl);
        DeRefDS(_var_53702);
        _var_53702 = _1;
    }
    // SubProg new_inline_var pc: 322 op: ELSE (23)
    goto LC; // [322] 416
    // SubProg new_inline_var pc: 324 op: NOP1 (159)
LB: // addr: 325 pc: 324 sub: 53697 op: 159
    // SubProg new_inline_var pc: 325 op: STARTLINE (58)

    /** inline.e:666				var = NewBasicEntry( name, varnum, SC_PRIVATE, VARIABLE, INLINE_HASHVAL, 0, vtype )*/
    // SubProg new_inline_var pc: 327 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 331 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 337 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 339 op: PROC (27)
    RefDS(_name_53704);
    _var_53702 = _53NewBasicEntry(_name_53704, _66varnum_52898, 3, -100, 2004, 0, _vtype_53703);
    // SubProg new_inline_var pc: 349 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53702)) {
        _1 = (object)(DBL_PTR(_var_53702)->dbl);
        DeRefDS(_var_53702);
        _var_53702 = _1;
    }
    // SubProg new_inline_var pc: 351 op: STARTLINE (58)

    /** inline.e:667				SymTab[var][S_NEXT] = SymTab[last_param][S_NEXT]*/
    // SubProg new_inline_var pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 355 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53702 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 360 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 366 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27461 = (object)*(((s1_ptr)_2)->base + _66last_param_52902);
    // SubProg new_inline_var pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 372 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27461);
    _27462 = (object)*(((s1_ptr)_2)->base + 2);
    _27461 = NOVALUE;
    // SubProg new_inline_var pc: 376 op: PASSIGN_SUBS (162)
    Ref(_27462);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27462;
    if( _1 != _27462 ){
        DeRef(_1);
    }
    _27462 = NOVALUE;
    _27459 = NOVALUE;
    // SubProg new_inline_var pc: 380 op: STARTLINE (58)

    /** inline.e:668				SymTab[last_param][S_NEXT] = var*/
    // SubProg new_inline_var pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 386 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66last_param_52902 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 393 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _var_53702;
    DeRef(_1);
    _27463 = NOVALUE;
    // SubProg new_inline_var pc: 397 op: STARTLINE (58)

    /** inline.e:669				if last_param = last_sym then*/
    // SubProg new_inline_var pc: 399 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 401 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 403 op: EQUALS_IFW (104)
    if (_66last_param_52902 != _53last_sym_46266)
    goto LD; // [403] 415
    // SubProg new_inline_var pc: 407 op: STARTLINE (58)

    /** inline.e:670					last_sym = var*/
    // SubProg new_inline_var pc: 409 op: ASSIGN (18)
    _53last_sym_46266 = _var_53702;
    // SubProg new_inline_var pc: 412 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 414 op: NOP1 (159)
LD: // addr: 415 pc: 414 sub: 53697 op: 159
    // SubProg new_inline_var pc: 415 op: NOP1 (159)
LC: // addr: 416 pc: 415 sub: 53697 op: 159
    // SubProg new_inline_var pc: 416 op: STARTLINE (58)

    /** inline.e:673			if deferred_inlining then*/
    // SubProg new_inline_var pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 420 op: IF (20)
    // SubProg new_inline_var pc: 451 op: STARTLINE (58)

    /** inline.e:676				if param_num != -1 then*/
    // SubProg new_inline_var pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 455 op: NOTEQ_IFW (105)
    if (_38param_num_54371 == -1)
    goto LE; // [455] 470
    // SubProg new_inline_var pc: 459 op: STARTLINE (58)

    /** inline.e:677					param_num += 1*/
    // SubProg new_inline_var pc: 461 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 463 op: PLUS (11)
    _38param_num_54371 = _38param_num_54371 + 1;
    // SubProg new_inline_var pc: 469 op: NOP1 (159)
LE: // addr: 470 pc: 469 sub: 53697 op: 159
    // SubProg new_inline_var pc: 470 op: NOP1 (159)
    // SubProg new_inline_var pc: 471 op: STARTLINE (58)

    /** inline.e:680			SymTab[var][S_USAGE] = U_USED*/
    // SubProg new_inline_var pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 475 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53702 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 480 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 482 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 484 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _27472 = NOVALUE;
    // SubProg new_inline_var pc: 488 op: STARTLINE (58)

    /** inline.e:681			if reuse then*/
    // SubProg new_inline_var pc: 490 op: IF (20)
    if (_reuse_53700 == 0)
    {
        goto LF; // [490] 511
    }
    else{
    }
    // SubProg new_inline_var pc: 493 op: STARTLINE (58)

    /** inline.e:682				map:nested_put( inline_var_map, {CurrentSub, ps }, var )*/
    // SubProg new_inline_var pc: 495 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 497 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 499 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _34CurrentSub_15196;
    ((intptr_t *)_2)[2] = _ps_53699;
    _27474 = MAKE_SEQ(_1);
    // SubProg new_inline_var pc: 503 op: PROC (27)
    Ref(_66inline_var_map_52906);
    _28nested_put(_66inline_var_map_52906, _27474, _var_53702, 1, 0);
    _27474 = NOVALUE;
    // SubProg new_inline_var pc: 510 op: NOP1 (159)
LF: // addr: 511 pc: 510 sub: 53697 op: 159
    // SubProg new_inline_var pc: 511 op: NOP1 (159)
    // SubProg new_inline_var pc: 512 op: STARTLINE (58)

    /** inline.e:686		Block_var( var )*/
    // SubProg new_inline_var pc: 514 op: PROC (27)
    _64Block_var(_var_53702);
    // SubProg new_inline_var pc: 517 op: STARTLINE (58)

    /** inline.e:687		if BIND then*/
    // SubProg new_inline_var pc: 519 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 521 op: IF (20)
    if (_34BIND_14816 == 0)
    {
        goto L10; // [521] 536
    }
    else{
    }
    // SubProg new_inline_var pc: 524 op: STARTLINE (58)

    /** inline.e:688			add_ref( {VARIABLE, var} )*/
    // SubProg new_inline_var pc: 526 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 528 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _var_53702;
    _27475 = MAKE_SEQ(_1);
    // SubProg new_inline_var pc: 532 op: PROC (27)
    _53add_ref(_27475);
    _27475 = NOVALUE;
    // SubProg new_inline_var pc: 535 op: NOP1 (159)
L10: // addr: 536 pc: 535 sub: 53697 op: 159
    // SubProg new_inline_var pc: 536 op: STARTLINE (58)

    /** inline.e:690		return var*/
    // SubProg new_inline_var pc: 538 op: RETURNF (28)

// Exiting block BLOCK: new_inline_var

// block var ps_53699

// block var reuse_53700

// block var vtype_53703

// block var name_53704
    DeRefi(_name_53704);

// block var s_53706
    return _var_53702;
    // SubProg new_inline_var pc: 542 op: BADRETURNF (43)
    ;
}


object _66get_inlined_code(object _sub_53836, object _start_53837, object _deferred_53838)
{
    object _is_proc_53839 = NOVALUE;
    object _backpatches_53857 = NOVALUE;
    object _prolog_53863 = NOVALUE;
    object _epilog_53864 = NOVALUE;
    object _s_53880 = NOVALUE;
    object _last_sym_53903 = NOVALUE;
    object _int_sym_53930 = NOVALUE;
    object _param_53938 = NOVALUE;
    object _ax_53941 = NOVALUE;
    object _var_53948 = NOVALUE;
    object _final_target_53963 = NOVALUE;
    object _var_53982 = NOVALUE;
    object _create_target_var_53995 = NOVALUE;
    object _check_pc_54018 = NOVALUE;
    object _op_54022 = NOVALUE;
    object _sym_54031 = NOVALUE;
    object _check_result_54036 = NOVALUE;
    object _inline_type_54114 = NOVALUE;
    object _replace_param_1__tmp_at1341_54125 = NOVALUE;
    object _27630 = NOVALUE; // 54174 27630
    object _27629 = NOVALUE; // 54173 27629
    object _27628 = NOVALUE; // 54172 27628
    object _27627 = NOVALUE; // 54171 27627
    object _27626 = NOVALUE; // 54170 27626
    object _27625 = NOVALUE; // 54169 27625
    object _27624 = NOVALUE; // 54168 27624
    object _27623 = NOVALUE; // 54167 27623
// skipping _27622  name type: 0
    object _27621 = NOVALUE; // 54165 27621
// skipping _27620  name type: 0
// skipping _27619  name type: 0
    object _27618 = NOVALUE; // 54153 27618
// skipping _27617  name type: 0
// skipping _27616  name type: 0
    object _27615 = NOVALUE; // 54142 27615
    object _27614 = NOVALUE; // 54139 27614
    object _27613 = NOVALUE; // 54138 27613
    object _27612 = NOVALUE; // 54135 27612
    object _27611 = NOVALUE; // 54132 27611
    object _27610 = NOVALUE; // 54129 27610
    object _27609 = NOVALUE; // 54128 27609
    object _27608 = NOVALUE; // 54127 27608
// skipping _27605  name type: 0
    object _27604 = NOVALUE; // 54115 27604
    object _27603 = NOVALUE; // 54113 27603
    object _27602 = NOVALUE; // 54112 27602
    object _27601 = NOVALUE; // 54110 27601
// skipping _27600  name type: 0
// skipping _27599  name type: 0
// skipping _27598  name type: 0
    object _27597 = NOVALUE; // 54099 27597
    object _27596 = NOVALUE; // 54098 27596
    object _27595 = NOVALUE; // 54097 27595
    object _27594 = NOVALUE; // 54094 27594
    object _27593 = NOVALUE; // 54092 27593
    object _27592 = NOVALUE; // 54090 27592
    object _27591 = NOVALUE; // 54089 27591
// skipping _27590  name type: 0
    object _27589 = NOVALUE; // 54086 27589
    object _27588 = NOVALUE; // 54084 27588
    object _27587 = NOVALUE; // 54082 27587
    object _27586 = NOVALUE; // 54080 27586
    object _27585 = NOVALUE; // 54079 27585
    object _27584 = NOVALUE; // 54077 27584
    object _27583 = NOVALUE; // 54076 27583
    object _27582 = NOVALUE; // 54074 27582
    object _27581 = NOVALUE; // 54072 27581
    object _27580 = NOVALUE; // 54070 27580
    object _27579 = NOVALUE; // 54069 27579
// skipping _27578  name type: 0
    object _27577 = NOVALUE; // 54065 27577
    object _27575 = NOVALUE; // 54060 27575
// skipping _27574  name type: 0
    object _27573 = NOVALUE; // 54057 27573
    object _27572 = NOVALUE; // 54055 27572
// skipping _27571  name type: 0
    object _27570 = NOVALUE; // 54051 27570
    object _27569 = NOVALUE; // 54049 27569
// skipping _27568  name type: 0
// skipping _27567  name type: 0
    object _27566 = NOVALUE; // 54043 27566
    object _27565 = NOVALUE; // 54041 27565
// skipping _27564  name type: 0
    object _27563 = NOVALUE; // 54035 27563
// skipping _27562  name type: 0
    object _27561 = NOVALUE; // 54032 27561
// skipping _27558  name type: 0
// skipping _27557  name type: 0
    object _27556 = NOVALUE; // 54020 27556
// skipping _27555  name type: 0
// skipping _27554  name type: 0
// skipping _27553  name type: 0
    object _27552 = NOVALUE; // 54008 27552
// skipping _27551  name type: 0
// skipping _27550  name type: 0
    object _27549 = NOVALUE; // 54000 27549
// skipping _27548  name type: 0
// skipping _27547  name type: 0
// skipping _27546  name type: 0
    object _27545 = NOVALUE; // 53990 27545
// skipping _27544  name type: 0
// skipping _27543  name type: 0
// skipping _27542  name type: 0
// skipping _27541  name type: 0
// skipping _27540  name type: 0
// skipping _27539  name type: 0
    object _27538 = NOVALUE; // 53977 27538
    object _27537 = NOVALUE; // 53974 27537
    object _27536 = NOVALUE; // 53972 27536
    object _27535 = NOVALUE; // 53970 27535
    object _27534 = NOVALUE; // 53969 27534
    object _27533 = NOVALUE; // 53967 27533
    object _27532 = NOVALUE; // 53965 27532
// skipping _27531  name type: 0
    object _27530 = NOVALUE; // 53959 27530
// skipping _27529  name type: 0
// skipping _27528  name type: 0
// skipping _27527  name type: 0
// skipping _27526  name type: 0
    object _27525 = NOVALUE; // 53951 27525
// skipping _27524  name type: 0
// skipping _27523  name type: 0
    object _27522 = NOVALUE; // 53945 27522
// skipping _27521  name type: 0
// skipping _27520  name type: 0
// skipping _27519  name type: 0
// skipping _27518  name type: 0
    object _27517 = NOVALUE; // 53936 27517
    object _27516 = NOVALUE; // 53934 27516
// skipping _27515  name type: 0
    object _27514 = NOVALUE; // 53927 27514
    object _27513 = NOVALUE; // 53925 27513
    object _27512 = NOVALUE; // 53923 27512
// skipping _27511  name type: 0
// skipping _27510  name type: 0
    object _27509 = NOVALUE; // 53916 27509
    object _27508 = NOVALUE; // 53914 27508
    object _27507 = NOVALUE; // 53912 27507
    object _27506 = NOVALUE; // 53910 27506
    object _27505 = NOVALUE; // 53909 27505
    object _27504 = NOVALUE; // 53907 27504
    object _27503 = NOVALUE; // 53905 27503
// skipping _27502  name type: 0
    object _27501 = NOVALUE; // 53899 27501
    object _27500 = NOVALUE; // 53897 27500
    object _27499 = NOVALUE; // 53895 27499
// skipping _27498  name type: 0
    object _27497 = NOVALUE; // 53887 27497
// skipping _27496  name type: 0
    object _27495 = NOVALUE; // 53882 27495
    object _27494 = NOVALUE; // 53878 27494
    object _27493 = NOVALUE; // 53877 27493
    object _27492 = NOVALUE; // 53876 27492
    object _27491 = NOVALUE; // 53874 27491
    object _27490 = NOVALUE; // 53871 27490
    object _27489 = NOVALUE; // 53869 27489
// skipping _27487  name type: 0
    object _27486 = NOVALUE; // 53861 27486
    object _27485 = NOVALUE; // 53859 27485
// skipping _27484  name type: 0
    object _27483 = NOVALUE; // 53855 27483
    object _27482 = NOVALUE; // 53853 27482
// skipping _27481  name type: 0
    object _27480 = NOVALUE; // 53850 27480
    object _27479 = NOVALUE; // 53848 27479
// skipping _27478  name type: 0
    object _27477 = NOVALUE; // 53843 27477
    object _27476 = NOVALUE; // 53841 27476
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg get_inlined_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 3 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 5 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 7 op: STARTLINE (58)

    /** inline.e:694		integer is_proc = SymTab[sub][S_TOKEN] = PROC*/
    // SubProg get_inlined_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27476 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27476);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _27477 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _27477 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _27476 = NOVALUE;
    // SubProg get_inlined_code pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 23 op: EQUALS (3)
    if (IS_ATOM_INT(_27477)) {
        _is_proc_53839 = (_27477 == 27);
    }
    else {
        _is_proc_53839 = binary_op(EQUALS, _27477, 27);
    }
    _27477 = NOVALUE;
    // SubProg get_inlined_code pc: 27 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_proc_53839)) {
        _1 = (object)(DBL_PTR(_is_proc_53839)->dbl);
        DeRefDS(_is_proc_53839);
        _is_proc_53839 = _1;
    }
    // SubProg get_inlined_code pc: 29 op: STARTLINE (58)

    /** inline.e:695		clear_inline_targets()*/
    // SubProg get_inlined_code pc: 31 op: PROC (27)
    _45clear_inline_targets();
    // SubProg get_inlined_code pc: 33 op: STARTLINE (58)

    /** inline.e:697		inline_temps = {}*/
    // SubProg get_inlined_code pc: 35 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_66inline_temps_52889);
    _66inline_temps_52889 = _21936;
    // SubProg get_inlined_code pc: 38 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 40 op: STARTLINE (58)

    /** inline.e:698		inline_params = {}*/
    // SubProg get_inlined_code pc: 42 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_66inline_params_52892);
    _66inline_params_52892 = _21936;
    // SubProg get_inlined_code pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 47 op: STARTLINE (58)

    /** inline.e:699		assigned_params      = SymTab[sub][S_INLINE][1]*/
    // SubProg get_inlined_code pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27479 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27479);
    _27480 = (object)*(((s1_ptr)_2)->base + 29);
    _27479 = NOVALUE;
    // SubProg get_inlined_code pc: 61 op: RHS_SUBS_CHECK (92)
    DeRef(_66assigned_params_52893);
    _2 = (object)SEQ_PTR(_27480);
    _66assigned_params_52893 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_66assigned_params_52893);
    _27480 = NOVALUE;
    // SubProg get_inlined_code pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 67 op: STARTLINE (58)

    /** inline.e:700		inline_code          = SymTab[sub][S_INLINE][2]*/
    // SubProg get_inlined_code pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27482 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27482);
    _27483 = (object)*(((s1_ptr)_2)->base + 29);
    _27482 = NOVALUE;
    // SubProg get_inlined_code pc: 81 op: RHS_SUBS_CHECK (92)
    DeRef(_66inline_code_52887);
    _2 = (object)SEQ_PTR(_27483);
    _66inline_code_52887 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_66inline_code_52887);
    _27483 = NOVALUE;
    // SubProg get_inlined_code pc: 85 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 87 op: STARTLINE (58)

    /** inline.e:701		sequence backpatches = SymTab[sub][S_INLINE][3]*/
    // SubProg get_inlined_code pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27485 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27485);
    _27486 = (object)*(((s1_ptr)_2)->base + 29);
    _27485 = NOVALUE;
    // SubProg get_inlined_code pc: 101 op: RHS_SUBS_CHECK (92)
    DeRef(_backpatches_53857);
    _2 = (object)SEQ_PTR(_27486);
    _backpatches_53857 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_backpatches_53857);
    _27486 = NOVALUE;
    // SubProg get_inlined_code pc: 105 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 107 op: STARTLINE (58)

    /** inline.e:703		passed_params = {}*/
    // SubProg get_inlined_code pc: 109 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_66passed_params_52890);
    _66passed_params_52890 = _21936;
    // SubProg get_inlined_code pc: 112 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 114 op: STARTLINE (58)

    /** inline.e:704		original_params = {}*/
    // SubProg get_inlined_code pc: 116 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_66original_params_52891);
    _66original_params_52891 = _21936;
    // SubProg get_inlined_code pc: 119 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 121 op: STARTLINE (58)

    /** inline.e:705		proc_vars = {}*/
    // SubProg get_inlined_code pc: 123 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_66proc_vars_52888);
    _66proc_vars_52888 = _21936;
    // SubProg get_inlined_code pc: 126 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 128 op: STARTLINE (58)

    /** inline.e:706		sequence prolog = {}*/
    // SubProg get_inlined_code pc: 130 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_prolog_53863);
    _prolog_53863 = _21936;
    // SubProg get_inlined_code pc: 133 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 135 op: STARTLINE (58)

    /** inline.e:707		sequence epilog = {}*/
    // SubProg get_inlined_code pc: 137 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_epilog_53864);
    _epilog_53864 = _21936;
    // SubProg get_inlined_code pc: 140 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 142 op: STARTLINE (58)

    /** inline.e:709		Start_block( EXIT_BLOCK, sprintf("Inline-%s from %s @ %d", */
    // SubProg get_inlined_code pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27489 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27489);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27490 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27490 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27489 = NOVALUE;
    // SubProg get_inlined_code pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 162 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27491 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg get_inlined_code pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 168 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27491);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27492 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27492 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27491 = NOVALUE;
    // SubProg get_inlined_code pc: 172 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27490);
    ((intptr_t*)_2)[1] = _27490;
    Ref(_27492);
    ((intptr_t*)_2)[2] = _27492;
    ((intptr_t*)_2)[3] = _start_53837;
    _27493 = MAKE_SEQ(_1);
    _27492 = NOVALUE;
    _27490 = NOVALUE;
    // SubProg get_inlined_code pc: 178 op: SPRINTF (53)
    _27494 = EPrintf(-9999999, _27488, _27493);
    DeRefDS(_27493);
    _27493 = NOVALUE;
    // SubProg get_inlined_code pc: 182 op: PROC (27)
    _64Start_block(206, _27494);
    _27494 = NOVALUE;
    // SubProg get_inlined_code pc: 186 op: STARTLINE (58)

    /** inline.e:712		symtab_index s = SymTab[sub][S_NEXT]*/
    // SubProg get_inlined_code pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 190 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27495 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 196 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27495);
    _s_53880 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53880)){
        _s_53880 = (object)DBL_PTR(_s_53880)->dbl;
    }
    _27495 = NOVALUE;
    // SubProg get_inlined_code pc: 202 op: STARTLINE (58)

    /** inline.e:714		varnum = SymTab[CurrentSub][S_NUM_ARGS]*/
    // SubProg get_inlined_code pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 208 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27497 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg get_inlined_code pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 214 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27497);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _66varnum_52898 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _66varnum_52898 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    if (!IS_ATOM_INT(_66varnum_52898)){
        _66varnum_52898 = (object)DBL_PTR(_66varnum_52898)->dbl;
    }
    _27497 = NOVALUE;
    // SubProg get_inlined_code pc: 220 op: STARTLINE (58)

    /** inline.e:715		inline_start = start*/
    // SubProg get_inlined_code pc: 222 op: ASSIGN_I (113)
    _66inline_start_52899 = _start_53837;
    // SubProg get_inlined_code pc: 225 op: STARTLINE (58)

    /** inline.e:717		last_param = CurrentSub*/
    // SubProg get_inlined_code pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 229 op: ASSIGN (18)
    _66last_param_52902 = _34CurrentSub_15196;
    // SubProg get_inlined_code pc: 232 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 234 op: STARTLINE (58)

    /** inline.e:718		for p = 1 to SymTab[CurrentSub][S_NUM_ARGS] do*/
    // SubProg get_inlined_code pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27499 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg get_inlined_code pc: 244 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 246 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27499);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _27500 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _27500 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _27499 = NOVALUE;
    // SubProg get_inlined_code pc: 250 op: FOR (21)
    {
        object _p_53892;
        _p_53892 = 1;
L1: // addr: 257 pc: 250 sub: 53833 op: 21
        if (binary_op_a(GREATER, _p_53892, _27500)){
            goto L2; // [250] 282
        }
        // SubProg get_inlined_code pc: 257 op: STARTLINE (58)

        /** inline.e:719			last_param = SymTab[last_param][S_NEXT]*/
        // SubProg get_inlined_code pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 261 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 263 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27501 = (object)*(((s1_ptr)_2)->base + _66last_param_52902);
        // SubProg get_inlined_code pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 269 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27501);
        _66last_param_52902 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_66last_param_52902)){
            _66last_param_52902 = (object)DBL_PTR(_66last_param_52902)->dbl;
        }
        _27501 = NOVALUE;
        // SubProg get_inlined_code pc: 275 op: STARTLINE (58)

        /** inline.e:720		end for*/
        // SubProg get_inlined_code pc: 277 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53892;
        if (IS_ATOM_INT(_p_53892)) {
            _p_53892 = _p_53892 + 1;
            if ((object)((uintptr_t)_p_53892 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53892 = NewDouble((eudouble)_p_53892);
            }
        }
        else {
            _p_53892 = binary_op_a(PLUS, _p_53892, 1);
        }
        DeRef(_0);
        goto L1; // [277] 257
L2: // addr: 282 pc: 277 sub: 53833 op: 54
        ;
        DeRef(_p_53892);
    }
    // SubProg get_inlined_code pc: 282 op: STARTLINE (58)

    /** inline.e:722		symtab_index last_sym = last_param*/
    // SubProg get_inlined_code pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 286 op: ASSIGN (18)
    _last_sym_53903 = _66last_param_52902;
    // SubProg get_inlined_code pc: 289 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 291 op: STARTLINE (58)

    /** inline.e:723		while last_sym and */
    // SubProg get_inlined_code pc: 293 op: NOP2 (110)
    // SubProg get_inlined_code pc: 295 op: NOPWHILE (158)
L3: // addr: 296 pc: 295 sub: 53833 op: 158
    // SubProg get_inlined_code pc: 296 op: SC1_AND_IF (146)
    if (_last_sym_53903 == 0) {
        goto L4; // [296] 368
    }
    // SubProg get_inlined_code pc: 300 op: PROC (27)
    _27504 = _53sym_scope(_last_sym_53903);
    // SubProg get_inlined_code pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 306 op: LESSEQ (5)
    if (IS_ATOM_INT(_27504)) {
        _27505 = (_27504 <= 3);
    }
    else {
        _27505 = binary_op(LESSEQ, _27504, 3);
    }
    DeRef(_27504);
    _27504 = NOVALUE;
    // SubProg get_inlined_code pc: 310 op: SC1_OR (143)
    if (IS_ATOM_INT(_27505)) {
        if (_27505 != 0) {
            DeRef(_27506);
            _27506 = 1;
            goto L5; // [310] 328
        }
    }
    else {
        if (DBL_PTR(_27505)->dbl != 0.0) {
            DeRef(_27506);
            _27506 = 1;
            goto L5; // [310] 328
        }
    }
    // SubProg get_inlined_code pc: 314 op: PROC (27)
    _27507 = _53sym_scope(_last_sym_53903);
    // SubProg get_inlined_code pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 320 op: EQUALS (3)
    if (IS_ATOM_INT(_27507)) {
        _27508 = (_27507 == 9);
    }
    else {
        _27508 = binary_op(EQUALS, _27507, 9);
    }
    DeRef(_27507);
    _27507 = NOVALUE;
    // SubProg get_inlined_code pc: 324 op: SC2_OR (144)
    DeRef(_27506);
    if (IS_ATOM_INT(_27508))
    _27506 = (_27508 != 0);
    else
    _27506 = DBL_PTR(_27508)->dbl != 0.0;
    // SubProg get_inlined_code pc: 327 op: NOP1 (159)
L5: // addr: 328 pc: 327 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 328 op: NOP1 (159)
    // SubProg get_inlined_code pc: 329 op: WHILE (47)
    if (_27506 == 0)
    {
        _27506 = NOVALUE;
        goto L4; // [329] 368
    }
    else{
        _27506 = NOVALUE;
    }
    // SubProg get_inlined_code pc: 332 op: STARTLINE (58)

    /** inline.e:725			last_param = last_sym*/
    // SubProg get_inlined_code pc: 334 op: ASSIGN (18)
    _66last_param_52902 = _last_sym_53903;
    // SubProg get_inlined_code pc: 337 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 339 op: STARTLINE (58)

    /** inline.e:726			last_sym = SymTab[last_sym][S_NEXT]*/
    // SubProg get_inlined_code pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27509 = (object)*(((s1_ptr)_2)->base + _last_sym_53903);
    // SubProg get_inlined_code pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 349 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27509);
    _last_sym_53903 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_last_sym_53903)){
        _last_sym_53903 = (object)DBL_PTR(_last_sym_53903)->dbl;
    }
    _27509 = NOVALUE;
    // SubProg get_inlined_code pc: 355 op: STARTLINE (58)

    /** inline.e:727			varnum += 1*/
    // SubProg get_inlined_code pc: 357 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 359 op: PLUS1_I (117)
    _66varnum_52898 = _66varnum_52898 + 1;
    // SubProg get_inlined_code pc: 363 op: STARTLINE (58)

    /** inline.e:728		end while*/
    // SubProg get_inlined_code pc: 365 op: ENDWHILE (22)
    goto L3; // [365] 296
    // SubProg get_inlined_code pc: 367 op: NOP1 (159)
L4: // addr: 368 pc: 367 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 368 op: STARTLINE (58)

    /** inline.e:729		for p = SymTab[sub][S_NUM_ARGS] to 1 by -1 do*/
    // SubProg get_inlined_code pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 372 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27512 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 376 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 378 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27512);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _27513 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _27513 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _27512 = NOVALUE;
    // SubProg get_inlined_code pc: 382 op: FOR (21)
    {
        object _p_53921;
        Ref(_27513);
        _p_53921 = _27513;
L6: // addr: 389 pc: 382 sub: 53833 op: 21
        if (binary_op_a(LESS, _p_53921, 1)){
            goto L7; // [382] 407
        }
        // SubProg get_inlined_code pc: 389 op: STARTLINE (58)

        /** inline.e:730			passed_params = prepend( passed_params, Pop() )*/
        // SubProg get_inlined_code pc: 391 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 393 op: PROC (27)
        _27514 = _45Pop();
        // SubProg get_inlined_code pc: 396 op: PREPEND (57)
        Ref(_27514);
        Prepend(&_66passed_params_52890, _66passed_params_52890, _27514);
        DeRef(_27514);
        _27514 = NOVALUE;
        // SubProg get_inlined_code pc: 400 op: STARTLINE (58)

        /** inline.e:731		end for*/
        // SubProg get_inlined_code pc: 402 op: ENDFOR_GENERAL (39)
        _0 = _p_53921;
        if (IS_ATOM_INT(_p_53921)) {
            _p_53921 = _p_53921 + -1;
            if ((object)((uintptr_t)_p_53921 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53921 = NewDouble((eudouble)_p_53921);
            }
        }
        else {
            _p_53921 = binary_op_a(PLUS, _p_53921, -1);
        }
        DeRef(_0);
        goto L6; // [402] 389
L7: // addr: 407 pc: 402 sub: 53833 op: 39
        ;
        DeRef(_p_53921);
    }
    // SubProg get_inlined_code pc: 407 op: STARTLINE (58)

    /** inline.e:733		original_params = passed_params*/
    // SubProg get_inlined_code pc: 409 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 411 op: ASSIGN (18)
    RefDS(_66passed_params_52890);
    DeRef(_66original_params_52891);
    _66original_params_52891 = _66passed_params_52890;
    // SubProg get_inlined_code pc: 414 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 416 op: STARTLINE (58)

    /** inline.e:735		symtab_index int_sym = 0*/
    // SubProg get_inlined_code pc: 418 op: ASSIGN (18)
    _int_sym_53930 = 0;
    // SubProg get_inlined_code pc: 421 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 423 op: STARTLINE (58)

    /** inline.e:736		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    // SubProg get_inlined_code pc: 425 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 427 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27516 = (object)*(((s1_ptr)_2)->base + _sub_53836);
    // SubProg get_inlined_code pc: 431 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 433 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27516);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _27517 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _27517 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _27516 = NOVALUE;
    // SubProg get_inlined_code pc: 437 op: FOR (21)
    {
        object _p_53932;
        _p_53932 = 1;
L8: // addr: 444 pc: 437 sub: 53833 op: 21
        if (binary_op_a(GREATER, _p_53932, _27517)){
            goto L9; // [437] 575
        }
        // SubProg get_inlined_code pc: 444 op: STARTLINE (58)

        /** inline.e:737			symtab_index param = passed_params[p]*/
        // SubProg get_inlined_code pc: 446 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 448 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66passed_params_52890);
        if (!IS_ATOM_INT(_p_53932)){
            _param_53938 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_53932)->dbl));
        }
        else{
            _param_53938 = (object)*(((s1_ptr)_2)->base + _p_53932);
        }
        if (!IS_ATOM_INT(_param_53938)){
            _param_53938 = (object)DBL_PTR(_param_53938)->dbl;
        }
        // SubProg get_inlined_code pc: 454 op: STARTLINE (58)

        /** inline.e:738			inline_params &= s*/
        // SubProg get_inlined_code pc: 456 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 458 op: CONCAT (15)
        Append(&_66inline_params_52892, _66inline_params_52892, _s_53880);
        // SubProg get_inlined_code pc: 462 op: STARTLINE (58)

        /** inline.e:739			integer ax = find( p, assigned_params )*/
        // SubProg get_inlined_code pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 466 op: FIND_FROM (176)
        _ax_53941 = find_from(_p_53932, _66assigned_params_52893, 1);
        // SubProg get_inlined_code pc: 471 op: STARTLINE (58)

        /** inline.e:740			if ax or is_temp( param ) then*/
        // SubProg get_inlined_code pc: 473 op: SC1_OR_IF (147)
        if (_ax_53941 != 0) {
            goto LA; // [473] 486
        }
        // SubProg get_inlined_code pc: 477 op: PROC (27)
        _27522 = _66is_temp(_param_53938);
        // SubProg get_inlined_code pc: 481 op: NOP1 (159)
        // SubProg get_inlined_code pc: 482 op: IF (20)
        if (_27522 == 0) {
            DeRef(_27522);
            _27522 = NOVALUE;
            goto LB; // [482] 548
        }
        else {
            if (!IS_ATOM_INT(_27522) && DBL_PTR(_27522)->dbl == 0.0){
                DeRef(_27522);
                _27522 = NOVALUE;
                goto LB; // [482] 548
            }
            DeRef(_27522);
            _27522 = NOVALUE;
        }
        DeRef(_27522);
        _27522 = NOVALUE;
        // SubProg get_inlined_code pc: 485 op: NOP1 (159)
LA: // addr: 486 pc: 485 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 486 op: STARTLINE (58)

        /** inline.e:743				varnum += 1*/
        // SubProg get_inlined_code pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 490 op: PLUS1_I (117)
        _66varnum_52898 = _66varnum_52898 + 1;
        // SubProg get_inlined_code pc: 494 op: STARTLINE (58)

        /** inline.e:744				symtab_index var = new_inline_var( s, 0 )*/
        // SubProg get_inlined_code pc: 496 op: PROC (27)
        _var_53948 = _66new_inline_var(_s_53880, 0);
        // SubProg get_inlined_code pc: 501 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_var_53948)) {
            _1 = (object)(DBL_PTR(_var_53948)->dbl);
            DeRefDS(_var_53948);
            _var_53948 = _1;
        }
        // SubProg get_inlined_code pc: 503 op: STARTLINE (58)

        /** inline.e:745				prolog &= {ASSIGN, param, var}*/
        // SubProg get_inlined_code pc: 505 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 507 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 18;
        ((intptr_t*)_2)[2] = _param_53938;
        ((intptr_t*)_2)[3] = _var_53948;
        _27525 = MAKE_SEQ(_1);
        // SubProg get_inlined_code pc: 513 op: CONCAT (15)
        Concat((object_ptr)&_prolog_53863, _prolog_53863, _27525);
        DeRefDS(_27525);
        _27525 = NOVALUE;
        // SubProg get_inlined_code pc: 517 op: STARTLINE (58)

        /** inline.e:746				if not int_sym then*/
        // SubProg get_inlined_code pc: 519 op: NOT_IFW (108)
        if (_int_sym_53930 != 0)
        goto LC; // [519] 531
        // SubProg get_inlined_code pc: 522 op: STARTLINE (58)

        /** inline.e:747					int_sym = NewIntSym( 0 )*/
        // SubProg get_inlined_code pc: 524 op: PROC (27)
        _int_sym_53930 = _53NewIntSym(0);
        // SubProg get_inlined_code pc: 528 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_int_sym_53930)) {
            _1 = (object)(DBL_PTR(_int_sym_53930)->dbl);
            DeRefDS(_int_sym_53930);
            _int_sym_53930 = _1;
        }
        // SubProg get_inlined_code pc: 530 op: NOP1 (159)
LC: // addr: 531 pc: 530 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 531 op: STARTLINE (58)

        /** inline.e:750				inline_start += 3*/
        // SubProg get_inlined_code pc: 533 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 535 op: PLUS_I (115)
        _66inline_start_52899 = _66inline_start_52899 + 3;
        // SubProg get_inlined_code pc: 539 op: STARTLINE (58)

        /** inline.e:751				passed_params[p] = var*/
        // SubProg get_inlined_code pc: 541 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 543 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_66passed_params_52890);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66passed_params_52890 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_p_53932))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_53932)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _p_53932);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _var_53948;
        DeRef(_1);
        // SubProg get_inlined_code pc: 547 op: NOP1 (159)
LB: // addr: 548 pc: 547 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 548 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var var_53948
        // SubProg get_inlined_code pc: 550 op: STARTLINE (58)

        /** inline.e:753			s = SymTab[s][S_NEXT]*/
        // SubProg get_inlined_code pc: 552 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 554 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27530 = (object)*(((s1_ptr)_2)->base + _s_53880);
        // SubProg get_inlined_code pc: 558 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 560 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27530);
        _s_53880 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53880)){
            _s_53880 = (object)DBL_PTR(_s_53880)->dbl;
        }
        _27530 = NOVALUE;
        // SubProg get_inlined_code pc: 566 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var param_53938

// block var ax_53941
        // SubProg get_inlined_code pc: 568 op: STARTLINE (58)

        /** inline.e:755		end for*/
        // SubProg get_inlined_code pc: 570 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53932;
        if (IS_ATOM_INT(_p_53932)) {
            _p_53932 = _p_53932 + 1;
            if ((object)((uintptr_t)_p_53932 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53932 = NewDouble((eudouble)_p_53932);
            }
        }
        else {
            _p_53932 = binary_op_a(PLUS, _p_53932, 1);
        }
        DeRef(_0);
        goto L8; // [570] 444
L9: // addr: 575 pc: 570 sub: 53833 op: 54
        ;
        DeRef(_p_53932);
    }
    // SubProg get_inlined_code pc: 575 op: STARTLINE (58)

    /** inline.e:757		symtab_index final_target = 0*/
    // SubProg get_inlined_code pc: 577 op: ASSIGN (18)
    _final_target_53963 = 0;
    // SubProg get_inlined_code pc: 580 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 582 op: STARTLINE (58)

    /** inline.e:758		while s and */
    // SubProg get_inlined_code pc: 584 op: NOP2 (110)
    // SubProg get_inlined_code pc: 586 op: NOPWHILE (158)
LD: // addr: 587 pc: 586 sub: 53833 op: 158
    // SubProg get_inlined_code pc: 587 op: SC1_AND_IF (146)
    if (_s_53880 == 0) {
        goto LE; // [587] 699
    }
    // SubProg get_inlined_code pc: 591 op: PROC (27)
    _27533 = _53sym_scope(_s_53880);
    // SubProg get_inlined_code pc: 595 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 597 op: LESSEQ (5)
    if (IS_ATOM_INT(_27533)) {
        _27534 = (_27533 <= 3);
    }
    else {
        _27534 = binary_op(LESSEQ, _27533, 3);
    }
    DeRef(_27533);
    _27533 = NOVALUE;
    // SubProg get_inlined_code pc: 601 op: SC1_OR (143)
    if (IS_ATOM_INT(_27534)) {
        if (_27534 != 0) {
            DeRef(_27535);
            _27535 = 1;
            goto LF; // [601] 619
        }
    }
    else {
        if (DBL_PTR(_27534)->dbl != 0.0) {
            DeRef(_27535);
            _27535 = 1;
            goto LF; // [601] 619
        }
    }
    // SubProg get_inlined_code pc: 605 op: PROC (27)
    _27536 = _53sym_scope(_s_53880);
    // SubProg get_inlined_code pc: 609 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 611 op: EQUALS (3)
    if (IS_ATOM_INT(_27536)) {
        _27537 = (_27536 == 9);
    }
    else {
        _27537 = binary_op(EQUALS, _27536, 9);
    }
    DeRef(_27536);
    _27536 = NOVALUE;
    // SubProg get_inlined_code pc: 615 op: SC2_OR (144)
    DeRef(_27535);
    if (IS_ATOM_INT(_27537))
    _27535 = (_27537 != 0);
    else
    _27535 = DBL_PTR(_27537)->dbl != 0.0;
    // SubProg get_inlined_code pc: 618 op: NOP1 (159)
LF: // addr: 619 pc: 618 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 619 op: NOP1 (159)
    // SubProg get_inlined_code pc: 620 op: WHILE (47)
    if (_27535 == 0)
    {
        _27535 = NOVALUE;
        goto LE; // [620] 699
    }
    else{
        _27535 = NOVALUE;
    }
    // SubProg get_inlined_code pc: 623 op: STARTLINE (58)

    /** inline.e:760			if sym_scope( s ) != SC_UNDEFINED then*/
    // SubProg get_inlined_code pc: 625 op: PROC (27)
    _27538 = _53sym_scope(_s_53880);
    // SubProg get_inlined_code pc: 629 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 631 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _27538, 9)){
        DeRef(_27538);
        _27538 = NOVALUE;
        goto L10; // [631] 676
    }
    DeRef(_27538);
    _27538 = NOVALUE;
    // SubProg get_inlined_code pc: 635 op: STARTLINE (58)

    /** inline.e:763				varnum += 1*/
    // SubProg get_inlined_code pc: 637 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 639 op: PLUS1_I (117)
    _66varnum_52898 = _66varnum_52898 + 1;
    // SubProg get_inlined_code pc: 643 op: STARTLINE (58)

    /** inline.e:764				symtab_index var = new_inline_var( s, 0 )*/
    // SubProg get_inlined_code pc: 645 op: PROC (27)
    _var_53982 = _66new_inline_var(_s_53880, 0);
    // SubProg get_inlined_code pc: 650 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53982)) {
        _1 = (object)(DBL_PTR(_var_53982)->dbl);
        DeRefDS(_var_53982);
        _var_53982 = _1;
    }
    // SubProg get_inlined_code pc: 652 op: STARTLINE (58)

    /** inline.e:765				proc_vars &= var*/
    // SubProg get_inlined_code pc: 654 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 656 op: CONCAT (15)
    Append(&_66proc_vars_52888, _66proc_vars_52888, _var_53982);
    // SubProg get_inlined_code pc: 660 op: STARTLINE (58)

    /** inline.e:766				if int_sym = 0 then*/
    // SubProg get_inlined_code pc: 662 op: EQUALS_IFW (104)
    if (_int_sym_53930 != 0)
    goto L11; // [662] 675
    // SubProg get_inlined_code pc: 666 op: STARTLINE (58)

    /** inline.e:767					int_sym = NewIntSym( 0 )*/
    // SubProg get_inlined_code pc: 668 op: PROC (27)
    _int_sym_53930 = _53NewIntSym(0);
    // SubProg get_inlined_code pc: 672 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_int_sym_53930)) {
        _1 = (object)(DBL_PTR(_int_sym_53930)->dbl);
        DeRefDS(_int_sym_53930);
        _int_sym_53930 = _1;
    }
    // SubProg get_inlined_code pc: 674 op: NOP1 (159)
L11: // addr: 675 pc: 674 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 675 op: NOP1 (159)
L10: // addr: 676 pc: 675 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 676 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var var_53982
    // SubProg get_inlined_code pc: 678 op: STARTLINE (58)

    /** inline.e:770			s = SymTab[s][S_NEXT]*/
    // SubProg get_inlined_code pc: 680 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 682 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27545 = (object)*(((s1_ptr)_2)->base + _s_53880);
    // SubProg get_inlined_code pc: 686 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 688 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27545);
    _s_53880 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53880)){
        _s_53880 = (object)DBL_PTR(_s_53880)->dbl;
    }
    _27545 = NOVALUE;
    // SubProg get_inlined_code pc: 694 op: STARTLINE (58)

    /** inline.e:771		end while*/
    // SubProg get_inlined_code pc: 696 op: ENDWHILE (22)
    goto LD; // [696] 587
    // SubProg get_inlined_code pc: 698 op: NOP1 (159)
LE: // addr: 699 pc: 698 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 699 op: STARTLINE (58)

    /** inline.e:773		if not is_proc then*/
    // SubProg get_inlined_code pc: 701 op: NOT_IFW (108)
    if (_is_proc_53839 != 0)
    goto L12; // [701] 831
    // SubProg get_inlined_code pc: 704 op: STARTLINE (58)

    /** inline.e:774			integer create_target_var = 1*/
    // SubProg get_inlined_code pc: 706 op: ASSIGN_I (113)
    _create_target_var_53995 = 1;
    // SubProg get_inlined_code pc: 709 op: STARTLINE (58)

    /** inline.e:775			if deferred then*/
    // SubProg get_inlined_code pc: 711 op: IF (20)
    if (_deferred_53838 == 0)
    {
        goto L13; // [711] 751
    }
    else{
    }
    // SubProg get_inlined_code pc: 714 op: STARTLINE (58)

    /** inline.e:776				inline_target = Pop()*/
    // SubProg get_inlined_code pc: 716 op: PROC (27)
    _0 = _45Pop();
    _66inline_target_52894 = _0;
    // SubProg get_inlined_code pc: 719 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_66inline_target_52894)) {
        _1 = (object)(DBL_PTR(_66inline_target_52894)->dbl);
        DeRefDS(_66inline_target_52894);
        _66inline_target_52894 = _1;
    }
    // SubProg get_inlined_code pc: 721 op: STARTLINE (58)

    /** inline.e:777				if is_temp( inline_target ) then*/
    // SubProg get_inlined_code pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 725 op: PROC (27)
    _27549 = _66is_temp(_66inline_target_52894);
    // SubProg get_inlined_code pc: 729 op: IF (20)
    if (_27549 == 0) {
        DeRef(_27549);
        _27549 = NOVALUE;
        goto L14; // [729] 744
    }
    else {
        if (!IS_ATOM_INT(_27549) && DBL_PTR(_27549)->dbl == 0.0){
            DeRef(_27549);
            _27549 = NOVALUE;
            goto L14; // [729] 744
        }
        DeRef(_27549);
        _27549 = NOVALUE;
    }
    DeRef(_27549);
    _27549 = NOVALUE;
    // SubProg get_inlined_code pc: 732 op: STARTLINE (58)

    /** inline.e:778					final_target = inline_target*/
    // SubProg get_inlined_code pc: 734 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 736 op: ASSIGN (18)
    _final_target_53963 = _66inline_target_52894;
    // SubProg get_inlined_code pc: 739 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 741 op: ELSE (23)
    goto L15; // [741] 750
    // SubProg get_inlined_code pc: 743 op: NOP1 (159)
L14: // addr: 744 pc: 743 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 744 op: STARTLINE (58)

    /** inline.e:780					create_target_var = 0*/
    // SubProg get_inlined_code pc: 746 op: ASSIGN_I (113)
    _create_target_var_53995 = 0;
    // SubProg get_inlined_code pc: 749 op: NOP1 (159)
L15: // addr: 750 pc: 749 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 750 op: NOP1 (159)
L13: // addr: 751 pc: 750 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 751 op: STARTLINE (58)

    /** inline.e:784			if create_target_var then*/
    // SubProg get_inlined_code pc: 753 op: IF (20)
    if (_create_target_var_53995 == 0)
    {
        goto L16; // [753] 816
    }
    else{
    }
    // SubProg get_inlined_code pc: 756 op: STARTLINE (58)

    /** inline.e:785				varnum += 1*/
    // SubProg get_inlined_code pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 760 op: PLUS1_I (117)
    _66varnum_52898 = _66varnum_52898 + 1;
    // SubProg get_inlined_code pc: 764 op: STARTLINE (58)

    /** inline.e:786				if TRANSLATE then*/
    // SubProg get_inlined_code pc: 766 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 768 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L17; // [768] 806
    }
    else{
    }
    // SubProg get_inlined_code pc: 771 op: STARTLINE (58)

    /** inline.e:787					inline_target = new_inline_var( sub, 0 )*/
    // SubProg get_inlined_code pc: 773 op: PROC (27)
    _0 = _66new_inline_var(_sub_53836, 0);
    _66inline_target_52894 = _0;
    // SubProg get_inlined_code pc: 778 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_66inline_target_52894)) {
        _1 = (object)(DBL_PTR(_66inline_target_52894)->dbl);
        DeRefDS(_66inline_target_52894);
        _66inline_target_52894 = _1;
    }
    // SubProg get_inlined_code pc: 780 op: STARTLINE (58)

    /** inline.e:788					SymTab[inline_target][S_VTYPE] = object_type*/
    // SubProg get_inlined_code pc: 782 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 784 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 786 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66inline_target_52894 + ((s1_ptr)_2)->base);
    // SubProg get_inlined_code pc: 791 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 793 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 795 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _53object_type_46257;
    DeRef(_1);
    _27552 = NOVALUE;
    // SubProg get_inlined_code pc: 799 op: STARTLINE (58)

    /** inline.e:789					Pop_block_var()*/
    // SubProg get_inlined_code pc: 801 op: PROC (27)
    _64Pop_block_var();
    // SubProg get_inlined_code pc: 803 op: ELSE (23)
    goto L18; // [803] 815
    // SubProg get_inlined_code pc: 805 op: NOP1 (159)
L17: // addr: 806 pc: 805 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 806 op: STARTLINE (58)

    /** inline.e:791					inline_target = NewTempSym()*/
    // SubProg get_inlined_code pc: 808 op: PROC (27)
    _0 = _53NewTempSym(0);
    _66inline_target_52894 = _0;
    // SubProg get_inlined_code pc: 812 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_66inline_target_52894)) {
        _1 = (object)(DBL_PTR(_66inline_target_52894)->dbl);
        DeRefDS(_66inline_target_52894);
        _66inline_target_52894 = _1;
    }
    // SubProg get_inlined_code pc: 814 op: NOP1 (159)
L18: // addr: 815 pc: 814 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 815 op: NOP1 (159)
L16: // addr: 816 pc: 815 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 816 op: STARTLINE (58)

    /** inline.e:794			proc_vars &= inline_target*/
    // SubProg get_inlined_code pc: 818 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 820 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 822 op: CONCAT (15)
    Append(&_66proc_vars_52888, _66proc_vars_52888, _66inline_target_52894);
    // SubProg get_inlined_code pc: 826 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var create_target_var_53995
    // SubProg get_inlined_code pc: 828 op: ELSE (23)
    goto L19; // [828] 837
    // SubProg get_inlined_code pc: 830 op: NOP1 (159)
L12: // addr: 831 pc: 830 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 831 op: STARTLINE (58)

    /** inline.e:796			inline_target = 0*/
    // SubProg get_inlined_code pc: 833 op: ASSIGN_I (113)
    _66inline_target_52894 = 0;
    // SubProg get_inlined_code pc: 836 op: NOP1 (159)
L19: // addr: 837 pc: 836 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 837 op: STARTLINE (58)

    /** inline.e:800		integer check_pc = 1*/
    // SubProg get_inlined_code pc: 839 op: ASSIGN_I (113)
    _check_pc_54018 = 1;
    // SubProg get_inlined_code pc: 842 op: STARTLINE (58)

    /** inline.e:802		while length(inline_code) > check_pc do*/
    // SubProg get_inlined_code pc: 844 op: NOP2 (110)
    // SubProg get_inlined_code pc: 846 op: NOPWHILE (158)
L1A: // addr: 847 pc: 846 sub: 53833 op: 158
    // SubProg get_inlined_code pc: 847 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 849 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27556 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27556 = 1;
    }
    // SubProg get_inlined_code pc: 852 op: GREATER_IFW_I (124)
    if (_27556 <= _check_pc_54018)
    goto L1B; // [852] 1216
    // SubProg get_inlined_code pc: 856 op: STARTLINE (58)

    /** inline.e:803			integer op = inline_code[check_pc]*/
    // SubProg get_inlined_code pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 860 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52887);
    _op_54022 = (object)*(((s1_ptr)_2)->base + _check_pc_54018);
    if (!IS_ATOM_INT(_op_54022))
    _op_54022 = (object)DBL_PTR(_op_54022)->dbl;
    // SubProg get_inlined_code pc: 864 op: STARTLINE (58)

    /** inline.e:805			switch op with fallthru do*/
    // SubProg get_inlined_code pc: 866 op: SWITCH_I (193)
    _0 = _op_54022;
    switch ( _0 ){ 
        // SubProg get_inlined_code pc: 871 op: STARTLINE (58)

        /** inline.e:806				case ATOM_CHECK then*/
        // SubProg get_inlined_code pc: 873 op: CASE (186)
        case 101:
        // SubProg get_inlined_code pc: 875 op: CASE (186)
        case 97:
        // SubProg get_inlined_code pc: 877 op: CASE (186)
        case 96:
        // SubProg get_inlined_code pc: 879 op: STARTLINE (58)

        /** inline.e:809					symtab_index sym = get_original_sym( check_pc + 1 )*/
        // SubProg get_inlined_code pc: 881 op: PLUS1 (93)
        _27561 = _check_pc_54018 + 1;
        if (_27561 > MAXINT){
            _27561 = NewDouble((eudouble)_27561);
        }
        // SubProg get_inlined_code pc: 885 op: PROC (27)
        _sym_54031 = _66get_original_sym(_27561);
        _27561 = NOVALUE;
        // SubProg get_inlined_code pc: 889 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_sym_54031)) {
            _1 = (object)(DBL_PTR(_sym_54031)->dbl);
            DeRefDS(_sym_54031);
            _sym_54031 = _1;
        }
        // SubProg get_inlined_code pc: 891 op: STARTLINE (58)

        /** inline.e:810					if is_literal( sym ) then*/
        // SubProg get_inlined_code pc: 893 op: PROC (27)
        _27563 = _66is_literal(_sym_54031);
        // SubProg get_inlined_code pc: 897 op: IF (20)
        if (_27563 == 0) {
            DeRef(_27563);
            _27563 = NOVALUE;
            goto L1C; // [897] 1010
        }
        else {
            if (!IS_ATOM_INT(_27563) && DBL_PTR(_27563)->dbl == 0.0){
                DeRef(_27563);
                _27563 = NOVALUE;
                goto L1C; // [897] 1010
            }
            DeRef(_27563);
            _27563 = NOVALUE;
        }
        DeRef(_27563);
        _27563 = NOVALUE;
        // SubProg get_inlined_code pc: 900 op: STARTLINE (58)

        /** inline.e:811						integer check_result*/
        // SubProg get_inlined_code pc: 902 op: STARTLINE (58)

        /** inline.e:813						if op = INTEGER_CHECK then*/
        // SubProg get_inlined_code pc: 904 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 906 op: EQUALS_IFW (104)
        if (_op_54022 != 96)
        goto L1D; // [906] 930
        // SubProg get_inlined_code pc: 910 op: STARTLINE (58)

        /** inline.e:814							check_result = integer( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 912 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 914 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27565 = (object)*(((s1_ptr)_2)->base + _sym_54031);
        // SubProg get_inlined_code pc: 918 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 920 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27565);
        _27566 = (object)*(((s1_ptr)_2)->base + 1);
        _27565 = NOVALUE;
        // SubProg get_inlined_code pc: 924 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_27566))
        _check_result_54036 = 1;
        else if (IS_ATOM_DBL(_27566))
        _check_result_54036 = IS_ATOM_INT(DoubleToInt(_27566));
        else
        _check_result_54036 = 0;
        _27566 = NOVALUE;
        // SubProg get_inlined_code pc: 927 op: ELSE (23)
        goto L1E; // [927] 976
        // SubProg get_inlined_code pc: 929 op: NOP1 (159)
L1D: // addr: 930 pc: 929 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 930 op: STARTLINE (58)

        /** inline.e:815						elsif op = SEQUENCE_CHECK then*/
        // SubProg get_inlined_code pc: 932 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 934 op: EQUALS_IFW (104)
        if (_op_54022 != 97)
        goto L1F; // [934] 958
        // SubProg get_inlined_code pc: 938 op: STARTLINE (58)

        /** inline.e:816							check_result = sequence( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 940 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 942 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27569 = (object)*(((s1_ptr)_2)->base + _sym_54031);
        // SubProg get_inlined_code pc: 946 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 948 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27569);
        _27570 = (object)*(((s1_ptr)_2)->base + 1);
        _27569 = NOVALUE;
        // SubProg get_inlined_code pc: 952 op: IS_A_SEQUENCE (68)
        _check_result_54036 = IS_SEQUENCE(_27570);
        _27570 = NOVALUE;
        // SubProg get_inlined_code pc: 955 op: ELSE (23)
        goto L1E; // [955] 976
        // SubProg get_inlined_code pc: 957 op: NOP1 (159)
L1F: // addr: 958 pc: 957 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 958 op: STARTLINE (58)

        /** inline.e:818							check_result = atom( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 960 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 962 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27572 = (object)*(((s1_ptr)_2)->base + _sym_54031);
        // SubProg get_inlined_code pc: 966 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 968 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27572);
        _27573 = (object)*(((s1_ptr)_2)->base + 1);
        _27572 = NOVALUE;
        // SubProg get_inlined_code pc: 972 op: IS_AN_ATOM (67)
        _check_result_54036 = IS_ATOM(_27573);
        _27573 = NOVALUE;
        // SubProg get_inlined_code pc: 975 op: NOP1 (159)
L1E: // addr: 976 pc: 975 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 976 op: STARTLINE (58)

        /** inline.e:821						if check_result then*/
        // SubProg get_inlined_code pc: 978 op: PRIVATE_INIT_CHECK (30)
        // SubProg get_inlined_code pc: 980 op: IF (20)
        if (_check_result_54036 == 0)
        {
            goto L20; // [980] 997
        }
        else{
        }
        // SubProg get_inlined_code pc: 983 op: STARTLINE (58)

        /** inline.e:822							replace_code( {}, check_pc, check_pc+1 )*/
        // SubProg get_inlined_code pc: 985 op: PLUS1 (93)
        _27575 = _check_pc_54018 + 1;
        if (_27575 > MAXINT){
            _27575 = NewDouble((eudouble)_27575);
        }
        // SubProg get_inlined_code pc: 989 op: PROC (27)
        RefDS(_21936);
        _66replace_code(_21936, _check_pc_54018, _27575);
        _27575 = NOVALUE;
        // SubProg get_inlined_code pc: 994 op: ELSE (23)
        goto L21; // [994] 1005
        // SubProg get_inlined_code pc: 996 op: NOP1 (159)
L20: // addr: 997 pc: 996 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 997 op: STARTLINE (58)

        /** inline.e:826							CompileErr(146)*/
        // SubProg get_inlined_code pc: 999 op: PROC (27)
        RefDS(_21936);
        _49CompileErr(146, _21936, 0);
        // SubProg get_inlined_code pc: 1004 op: NOP1 (159)
L21: // addr: 1005 pc: 1004 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1005 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var check_result_54036
        // SubProg get_inlined_code pc: 1007 op: ELSE (23)
        goto L22; // [1007] 1172
        // SubProg get_inlined_code pc: 1009 op: NOP1 (159)
L1C: // addr: 1010 pc: 1009 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1010 op: STARTLINE (58)

        /** inline.e:829					elsif not is_temp( sym ) then*/
        // SubProg get_inlined_code pc: 1012 op: PROC (27)
        _27577 = _66is_temp(_sym_54031);
        // SubProg get_inlined_code pc: 1016 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27577)) {
            if (_27577 != 0){
                DeRef(_27577);
                _27577 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        else {
            if (DBL_PTR(_27577)->dbl != 0.0){
                DeRef(_27577);
                _27577 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        DeRef(_27577);
        _27577 = NOVALUE;
        // SubProg get_inlined_code pc: 1019 op: STARTLINE (58)

        /** inline.e:831						if (op = INTEGER_CHECK and SymTab[sym][S_VTYPE] = integer_type )*/
        // SubProg get_inlined_code pc: 1021 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1023 op: EQUALS (3)
        _27579 = (_op_54022 == 96);
        // SubProg get_inlined_code pc: 1027 op: SC1_AND (141)
        if (_27579 == 0) {
            _27580 = 0;
            goto L24; // [1027] 1053
        }
        // SubProg get_inlined_code pc: 1031 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1033 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27581 = (object)*(((s1_ptr)_2)->base + _sym_54031);
        // SubProg get_inlined_code pc: 1037 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1039 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27581);
        _27582 = (object)*(((s1_ptr)_2)->base + 15);
        _27581 = NOVALUE;
        // SubProg get_inlined_code pc: 1043 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1045 op: EQUALS (3)
        if (IS_ATOM_INT(_27582)) {
            _27583 = (_27582 == _53integer_type_46263);
        }
        else {
            _27583 = binary_op(EQUALS, _27582, _53integer_type_46263);
        }
        _27582 = NOVALUE;
        // SubProg get_inlined_code pc: 1049 op: SC2_AND (142)
        if (IS_ATOM_INT(_27583))
        _27580 = (_27583 != 0);
        else
        _27580 = DBL_PTR(_27583)->dbl != 0.0;
        // SubProg get_inlined_code pc: 1052 op: NOP1 (159)
L24: // addr: 1053 pc: 1052 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1053 op: SC1_OR (143)
        if (_27580 != 0) {
            _27584 = 1;
            goto L25; // [1053] 1093
        }
        // SubProg get_inlined_code pc: 1057 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1059 op: EQUALS (3)
        _27585 = (_op_54022 == 97);
        // SubProg get_inlined_code pc: 1063 op: SC1_AND (141)
        if (_27585 == 0) {
            _27586 = 0;
            goto L26; // [1063] 1089
        }
        // SubProg get_inlined_code pc: 1067 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1069 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27587 = (object)*(((s1_ptr)_2)->base + _sym_54031);
        // SubProg get_inlined_code pc: 1073 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1075 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27587);
        _27588 = (object)*(((s1_ptr)_2)->base + 15);
        _27587 = NOVALUE;
        // SubProg get_inlined_code pc: 1079 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1081 op: EQUALS (3)
        if (IS_ATOM_INT(_27588)) {
            _27589 = (_27588 == _53sequence_type_46261);
        }
        else {
            _27589 = binary_op(EQUALS, _27588, _53sequence_type_46261);
        }
        _27588 = NOVALUE;
        // SubProg get_inlined_code pc: 1085 op: SC2_AND (142)
        if (IS_ATOM_INT(_27589))
        _27586 = (_27589 != 0);
        else
        _27586 = DBL_PTR(_27589)->dbl != 0.0;
        // SubProg get_inlined_code pc: 1088 op: NOP1 (159)
L26: // addr: 1089 pc: 1088 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1089 op: SC2_OR (144)
        _27584 = (_27586 != 0);
        // SubProg get_inlined_code pc: 1092 op: NOP1 (159)
L25: // addr: 1093 pc: 1092 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1093 op: SC1_OR_IF (147)
        if (_27584 != 0) {
            goto L27; // [1093] 1141
        }
        // SubProg get_inlined_code pc: 1097 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1099 op: EQUALS (3)
        _27591 = (_op_54022 == 101);
        // SubProg get_inlined_code pc: 1103 op: SC1_AND (141)
        if (_27591 == 0) {
            DeRef(_27592);
            _27592 = 0;
            goto L28; // [1103] 1136
        }
        // SubProg get_inlined_code pc: 1107 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _27593 = (object)*(((s1_ptr)_2)->base + _sym_54031);
        // SubProg get_inlined_code pc: 1113 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1115 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27593);
        _27594 = (object)*(((s1_ptr)_2)->base + 15);
        _27593 = NOVALUE;
        // SubProg get_inlined_code pc: 1119 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1121 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1123 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _53integer_type_46263;
        ((intptr_t *)_2)[2] = _53atom_type_46259;
        _27595 = MAKE_SEQ(_1);
        // SubProg get_inlined_code pc: 1127 op: FIND_FROM (176)
        _27596 = find_from(_27594, _27595, 1);
        _27594 = NOVALUE;
        DeRefDS(_27595);
        _27595 = NOVALUE;
        // SubProg get_inlined_code pc: 1132 op: SC2_AND (142)
        _27592 = (_27596 != 0);
        // SubProg get_inlined_code pc: 1135 op: NOP1 (159)
L28: // addr: 1136 pc: 1135 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1136 op: NOP1 (159)
        // SubProg get_inlined_code pc: 1137 op: IF (20)
        if (_27592 == 0)
        {
            _27592 = NOVALUE;
            goto L29; // [1137] 1155
        }
        else{
            _27592 = NOVALUE;
        }
        // SubProg get_inlined_code pc: 1140 op: NOP1 (159)
L27: // addr: 1141 pc: 1140 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1141 op: STARTLINE (58)

        /** inline.e:834							replace_code( {}, check_pc, check_pc+1 )*/
        // SubProg get_inlined_code pc: 1143 op: PLUS1 (93)
        _27597 = _check_pc_54018 + 1;
        if (_27597 > MAXINT){
            _27597 = NewDouble((eudouble)_27597);
        }
        // SubProg get_inlined_code pc: 1147 op: PROC (27)
        RefDS(_21936);
        _66replace_code(_21936, _check_pc_54018, _27597);
        _27597 = NOVALUE;
        // SubProg get_inlined_code pc: 1152 op: ELSE (23)
        goto L22; // [1152] 1172
        // SubProg get_inlined_code pc: 1154 op: NOP1 (159)
L29: // addr: 1155 pc: 1154 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1155 op: STARTLINE (58)

        /** inline.e:837							check_pc += 2*/
        // SubProg get_inlined_code pc: 1157 op: PLUS_I (115)
        _check_pc_54018 = _check_pc_54018 + 2;
        // SubProg get_inlined_code pc: 1161 op: NOP1 (159)
        // SubProg get_inlined_code pc: 1162 op: ELSE (23)
        goto L22; // [1162] 1172
        // SubProg get_inlined_code pc: 1164 op: NOP1 (159)
L23: // addr: 1165 pc: 1164 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1165 op: STARTLINE (58)

        /** inline.e:841						check_pc += 2*/
        // SubProg get_inlined_code pc: 1167 op: PLUS_I (115)
        _check_pc_54018 = _check_pc_54018 + 2;
        // SubProg get_inlined_code pc: 1171 op: NOP1 (159)
L22: // addr: 1172 pc: 1171 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1172 op: STARTLINE (58)

        /** inline.e:843					continue*/
        // SubProg get_inlined_code pc: 1174 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sym_54031
        // SubProg get_inlined_code pc: 1176 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54022
        // SubProg get_inlined_code pc: 1178 op: ELSE (23)
        goto L1A; // [1178] 847
        // SubProg get_inlined_code pc: 1180 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sym_54031
        // SubProg get_inlined_code pc: 1182 op: STARTLINE (58)

        /** inline.e:844				case STARTLINE then*/
        // SubProg get_inlined_code pc: 1184 op: CASE (186)
        case 58:
        // SubProg get_inlined_code pc: 1186 op: STARTLINE (58)

        /** inline.e:845					check_pc += 2*/
        // SubProg get_inlined_code pc: 1188 op: PLUS_I (115)
        _check_pc_54018 = _check_pc_54018 + 2;
        // SubProg get_inlined_code pc: 1192 op: STARTLINE (58)

        /** inline.e:846					continue*/
        // SubProg get_inlined_code pc: 1194 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54022
        // SubProg get_inlined_code pc: 1196 op: ELSE (23)
        goto L1A; // [1196] 847
        // SubProg get_inlined_code pc: 1198 op: STARTLINE (58)

        /** inline.e:848				case else*/
        // SubProg get_inlined_code pc: 1200 op: CASE (186)
        default:
        // SubProg get_inlined_code pc: 1202 op: STARTLINE (58)

        /** inline.e:849					exit*/
        // SubProg get_inlined_code pc: 1204 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54022
        // SubProg get_inlined_code pc: 1206 op: EXIT (61)
        goto L1B; // [1206] 1216
        // SubProg get_inlined_code pc: 1208 op: NOPSWITCH (187)
    ;}    // SubProg get_inlined_code pc: 1209 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54022
    // SubProg get_inlined_code pc: 1211 op: STARTLINE (58)

    /** inline.e:851		end while*/
    // SubProg get_inlined_code pc: 1213 op: ENDWHILE (22)
    goto L1A; // [1213] 847
    // SubProg get_inlined_code pc: 1215 op: NOP1 (159)
L1B: // addr: 1216 pc: 1215 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 1216 op: STARTLINE (58)

    /** inline.e:853		for pc = 1 to length( inline_code ) do*/
    // SubProg get_inlined_code pc: 1218 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1220 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27601 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27601 = 1;
    }
    // SubProg get_inlined_code pc: 1223 op: FOR_I (125)
    {
        object _pc_54109;
        _pc_54109 = 1;
L2A: // addr: 1230 pc: 1223 sub: 53833 op: 125
        if (_pc_54109 > _27601){
            goto L2B; // [1223] 1420
        }
        // SubProg get_inlined_code pc: 1230 op: STARTLINE (58)

        /** inline.e:854			if sequence( inline_code[pc] ) then*/
        // SubProg get_inlined_code pc: 1232 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1234 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27602 = (object)*(((s1_ptr)_2)->base + _pc_54109);
        // SubProg get_inlined_code pc: 1238 op: IS_A_SEQUENCE (68)
        _27603 = IS_SEQUENCE(_27602);
        _27602 = NOVALUE;
        // SubProg get_inlined_code pc: 1241 op: IF (20)
        if (_27603 == 0)
        {
            _27603 = NOVALUE;
            goto L2C; // [1241] 1411
        }
        else{
            _27603 = NOVALUE;
        }
        // SubProg get_inlined_code pc: 1244 op: STARTLINE (58)

        /** inline.e:855				integer inline_type = inline_code[pc][1]*/
        // SubProg get_inlined_code pc: 1246 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1248 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52887);
        _27604 = (object)*(((s1_ptr)_2)->base + _pc_54109);
        // SubProg get_inlined_code pc: 1252 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27604);
        _inline_type_54114 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_inline_type_54114)){
            _inline_type_54114 = (object)DBL_PTR(_inline_type_54114)->dbl;
        }
        _27604 = NOVALUE;
        // SubProg get_inlined_code pc: 1258 op: STARTLINE (58)

        /** inline.e:856				switch inline_type do*/
        // SubProg get_inlined_code pc: 1260 op: SWITCH_I (193)
        _0 = _inline_type_54114;
        switch ( _0 ){ 
            // SubProg get_inlined_code pc: 1265 op: STARTLINE (58)

            /** inline.e:857					case INLINE_SUB then*/
            // SubProg get_inlined_code pc: 1267 op: CASE (186)
            case 5:
            // SubProg get_inlined_code pc: 1269 op: STARTLINE (58)

            /** inline.e:858						inline_code[pc] = CurrentSub*/
            // SubProg get_inlined_code pc: 1271 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1273 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1275 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_66inline_code_52887);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52887 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54109);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _34CurrentSub_15196;
            DeRef(_1);
            // SubProg get_inlined_code pc: 1279 op: ELSE (23)
            goto L2D; // [1279] 1410
            // SubProg get_inlined_code pc: 1281 op: STARTLINE (58)

            /** inline.e:860					case INLINE_VAR then*/
            // SubProg get_inlined_code pc: 1283 op: CASE (186)
            case 6:
            // SubProg get_inlined_code pc: 1285 op: STARTLINE (58)

            /** inline.e:861						replace_var( pc )*/
            // SubProg get_inlined_code pc: 1287 op: PROC (27)
            _66replace_var(_pc_54109);
            // SubProg get_inlined_code pc: 1290 op: STARTLINE (58)

            /** inline.e:862						break*/
            // SubProg get_inlined_code pc: 1292 op: ELSE (23)
            goto L2D; // [1292] 1410
            // SubProg get_inlined_code pc: 1294 op: ELSE (23)
            goto L2D; // [1294] 1410
            // SubProg get_inlined_code pc: 1296 op: STARTLINE (58)

            /** inline.e:863					case INLINE_TEMP then*/
            // SubProg get_inlined_code pc: 1298 op: CASE (186)
            case 2:
            // SubProg get_inlined_code pc: 1300 op: STARTLINE (58)

            /** inline.e:864						replace_temp( pc )*/
            // SubProg get_inlined_code pc: 1302 op: PROC (27)
            _66replace_temp(_pc_54109);
            // SubProg get_inlined_code pc: 1305 op: ELSE (23)
            goto L2D; // [1305] 1410
            // SubProg get_inlined_code pc: 1307 op: STARTLINE (58)

            /** inline.e:866					case INLINE_PARAM then*/
            // SubProg get_inlined_code pc: 1309 op: CASE (186)
            case 1:
            // SubProg get_inlined_code pc: 1311 op: STARTLINE (58)

            /** inline.e:867						replace_param( pc )*/
            // SubProg get_inlined_code pc: 1313 op: STARTLINE (58)

            /** inline.e:586		inline_code[pc] = get_param_sym( pc )*/
            // SubProg get_inlined_code pc: 1315 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1317 op: PROC (27)
            _0 = _replace_param_1__tmp_at1341_54125;
            _replace_param_1__tmp_at1341_54125 = _66get_param_sym(_pc_54109);
            DeRef(_0);
            // SubProg get_inlined_code pc: 1321 op: ASSIGN_SUBS (16)
            Ref(_replace_param_1__tmp_at1341_54125);
            _2 = (object)SEQ_PTR(_66inline_code_52887);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52887 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54109);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _replace_param_1__tmp_at1341_54125;
            DeRef(_1);
            // SubProg get_inlined_code pc: 1325 op: STARTLINE (58)

            /** inline.e:587	end procedure*/
            // SubProg get_inlined_code pc: 1327 op: ELSE (23)
            goto L2E; // [1327] 1330
            // SubProg get_inlined_code pc: 1329 op: NOP1 (159)
L2E: // addr: 1330 pc: 1329 sub: 53833 op: 159
            // SubProg get_inlined_code pc: 1330 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-replace_param from get_inlined_code @ 1341

// block var replace_param_1__tmp_at1341_54125
            DeRef(_replace_param_1__tmp_at1341_54125);
            _replace_param_1__tmp_at1341_54125 = NOVALUE;
            // SubProg get_inlined_code pc: 1332 op: ELSE (23)
            goto L2D; // [1332] 1410
            // SubProg get_inlined_code pc: 1334 op: STARTLINE (58)

            /** inline.e:869					case INLINE_ADDR then*/
            // SubProg get_inlined_code pc: 1336 op: CASE (186)
            case 4:
            // SubProg get_inlined_code pc: 1338 op: STARTLINE (58)

            /** inline.e:870						inline_code[pc] = inline_start + inline_code[pc][2]*/
            // SubProg get_inlined_code pc: 1340 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1342 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1344 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1346 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_66inline_code_52887);
            _27608 = (object)*(((s1_ptr)_2)->base + _pc_54109);
            // SubProg get_inlined_code pc: 1350 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_27608);
            _27609 = (object)*(((s1_ptr)_2)->base + 2);
            _27608 = NOVALUE;
            // SubProg get_inlined_code pc: 1354 op: PLUS (11)
            if (IS_ATOM_INT(_27609)) {
                _27610 = _66inline_start_52899 + _27609;
                if ((object)((uintptr_t)_27610 + (uintptr_t)HIGH_BITS) >= 0){
                    _27610 = NewDouble((eudouble)_27610);
                }
            }
            else {
                _27610 = binary_op(PLUS, _66inline_start_52899, _27609);
            }
            _27609 = NOVALUE;
            // SubProg get_inlined_code pc: 1358 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_66inline_code_52887);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52887 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54109);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _27610;
            if( _1 != _27610 ){
                DeRef(_1);
            }
            _27610 = NOVALUE;
            // SubProg get_inlined_code pc: 1362 op: ELSE (23)
            goto L2D; // [1362] 1410
            // SubProg get_inlined_code pc: 1364 op: STARTLINE (58)

            /** inline.e:872					case INLINE_TARGET then*/
            // SubProg get_inlined_code pc: 1366 op: CASE (186)
            case 3:
            // SubProg get_inlined_code pc: 1368 op: STARTLINE (58)

            /** inline.e:873						inline_code[pc] = inline_target*/
            // SubProg get_inlined_code pc: 1370 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1372 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1374 op: ASSIGN_SUBS_I (118)
            _2 = (object)SEQ_PTR(_66inline_code_52887);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52887 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54109);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _66inline_target_52894;
            DeRef(_1);
            // SubProg get_inlined_code pc: 1378 op: STARTLINE (58)

            /** inline.e:874						add_inline_target( pc + inline_start )*/
            // SubProg get_inlined_code pc: 1380 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1382 op: PLUS (11)
            _27611 = _pc_54109 + _66inline_start_52899;
            if ((object)((uintptr_t)_27611 + (uintptr_t)HIGH_BITS) >= 0){
                _27611 = NewDouble((eudouble)_27611);
            }
            // SubProg get_inlined_code pc: 1386 op: PROC (27)
            _45add_inline_target(_27611);
            _27611 = NOVALUE;
            // SubProg get_inlined_code pc: 1389 op: STARTLINE (58)

            /** inline.e:875						break*/
            // SubProg get_inlined_code pc: 1391 op: ELSE (23)
            goto L2D; // [1391] 1410
            // SubProg get_inlined_code pc: 1393 op: ELSE (23)
            goto L2D; // [1393] 1410
            // SubProg get_inlined_code pc: 1395 op: STARTLINE (58)

            /** inline.e:877					case else*/
            // SubProg get_inlined_code pc: 1397 op: CASE (186)
            default:
            // SubProg get_inlined_code pc: 1399 op: STARTLINE (58)

            /** inline.e:878						InternalErr( 265, {inline_type} )*/
            // SubProg get_inlined_code pc: 1401 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t*)_2)[1] = _inline_type_54114;
            _27612 = MAKE_SEQ(_1);
            // SubProg get_inlined_code pc: 1405 op: PROC (27)
            _49InternalErr(265, _27612);
            _27612 = NOVALUE;
            // SubProg get_inlined_code pc: 1409 op: NOPSWITCH (187)
        ;}L2D: // addr: 1410 pc: 1409 sub: 53833 op: 187
        // SubProg get_inlined_code pc: 1410 op: NOP1 (159)
L2C: // addr: 1411 pc: 1410 sub: 53833 op: 159
        // SubProg get_inlined_code pc: 1411 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var inline_type_54114
        // SubProg get_inlined_code pc: 1413 op: STARTLINE (58)

        /** inline.e:881		end for*/
        // SubProg get_inlined_code pc: 1415 op: ENDFOR_INT_UP1 (54)
        _pc_54109 = _pc_54109 + 1;
        goto L2A; // [1415] 1230
L2B: // addr: 1420 pc: 1415 sub: 53833 op: 54
        ;
    }
    // SubProg get_inlined_code pc: 1420 op: STARTLINE (58)

    /** inline.e:883		for i = 1 to length(backpatches) do*/
    // SubProg get_inlined_code pc: 1422 op: LENGTH (42)
    if (IS_SEQUENCE(_backpatches_53857)){
            _27613 = SEQ_PTR(_backpatches_53857)->length;
    }
    else {
        _27613 = 1;
    }
    // SubProg get_inlined_code pc: 1425 op: FOR_I (125)
    {
        object _i_54137;
        _i_54137 = 1;
L2F: // addr: 1432 pc: 1425 sub: 53833 op: 125
        if (_i_54137 > _27613){
            goto L30; // [1425] 1448
        }
        // SubProg get_inlined_code pc: 1432 op: STARTLINE (58)

        /** inline.e:884			fixup_special_op( backpatches[i] )*/
        // SubProg get_inlined_code pc: 1434 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_backpatches_53857);
        _27614 = (object)*(((s1_ptr)_2)->base + _i_54137);
        // SubProg get_inlined_code pc: 1438 op: PROC (27)
        Ref(_27614);
        _66fixup_special_op(_27614);
        _27614 = NOVALUE;
        // SubProg get_inlined_code pc: 1441 op: STARTLINE (58)

        /** inline.e:885		end for*/
        // SubProg get_inlined_code pc: 1443 op: ENDFOR_INT_UP1 (54)
        _i_54137 = _i_54137 + 1;
        goto L2F; // [1443] 1432
L30: // addr: 1448 pc: 1443 sub: 53833 op: 54
        ;
    }
    // SubProg get_inlined_code pc: 1448 op: STARTLINE (58)

    /** inline.e:887		epilog &= End_inline_block( EXIT_BLOCK )*/
    // SubProg get_inlined_code pc: 1450 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1452 op: PROC (27)
    _27615 = _64End_inline_block(206);
    // SubProg get_inlined_code pc: 1456 op: CONCAT (15)
    if (IS_SEQUENCE(_epilog_53864) && IS_ATOM(_27615)) {
        Ref(_27615);
        Append(&_epilog_53864, _epilog_53864, _27615);
    }
    else if (IS_ATOM(_epilog_53864) && IS_SEQUENCE(_27615)) {
    }
    else {
        Concat((object_ptr)&_epilog_53864, _epilog_53864, _27615);
    }
    DeRef(_27615);
    _27615 = NOVALUE;
    // SubProg get_inlined_code pc: 1460 op: STARTLINE (58)

    /** inline.e:889		if is_proc then*/
    // SubProg get_inlined_code pc: 1462 op: IF (20)
    if (_is_proc_53839 == 0)
    {
        goto L31; // [1462] 1472
    }
    else{
    }
    // SubProg get_inlined_code pc: 1465 op: STARTLINE (58)

    /** inline.e:890			clear_op()*/
    // SubProg get_inlined_code pc: 1467 op: PROC (27)
    _45clear_op();
    // SubProg get_inlined_code pc: 1469 op: ELSE (23)
    goto L32; // [1469] 1595
    // SubProg get_inlined_code pc: 1471 op: NOP1 (159)
L31: // addr: 1472 pc: 1471 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 1472 op: STARTLINE (58)

    /** inline.e:892			if not deferred then*/
    // SubProg get_inlined_code pc: 1474 op: NOT_IFW (108)
    if (_deferred_53838 != 0)
    goto L33; // [1474] 1489
    // SubProg get_inlined_code pc: 1477 op: STARTLINE (58)

    /** inline.e:893				Push( inline_target )*/
    // SubProg get_inlined_code pc: 1479 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1481 op: PROC (27)
    _45Push(_66inline_target_52894);
    // SubProg get_inlined_code pc: 1484 op: STARTLINE (58)

    /** inline.e:894				inlined_function()*/
    // SubProg get_inlined_code pc: 1486 op: PROC (27)
    _45inlined_function();
    // SubProg get_inlined_code pc: 1488 op: NOP1 (159)
L33: // addr: 1489 pc: 1488 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 1489 op: STARTLINE (58)

    /** inline.e:897			if final_target then*/
    // SubProg get_inlined_code pc: 1491 op: IF (20)
    if (_final_target_53963 == 0)
    {
        goto L34; // [1491] 1521
    }
    else{
    }
    // SubProg get_inlined_code pc: 1494 op: STARTLINE (58)

    /** inline.e:898				epilog &= { ASSIGN, inline_target, final_target }*/
    // SubProg get_inlined_code pc: 1496 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1498 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1500 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _66inline_target_52894;
    ((intptr_t*)_2)[3] = _final_target_53963;
    _27618 = MAKE_SEQ(_1);
    // SubProg get_inlined_code pc: 1506 op: CONCAT (15)
    Concat((object_ptr)&_epilog_53864, _epilog_53864, _27618);
    DeRefDS(_27618);
    _27618 = NOVALUE;
    // SubProg get_inlined_code pc: 1510 op: STARTLINE (58)

    /** inline.e:899				emit_temp( final_target, NEW_REFERENCE )*/
    // SubProg get_inlined_code pc: 1512 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1514 op: PROC (27)
    _45emit_temp(_final_target_53963, 1);
    // SubProg get_inlined_code pc: 1518 op: ELSE (23)
    goto L35; // [1518] 1594
    // SubProg get_inlined_code pc: 1520 op: NOP1 (159)
L34: // addr: 1521 pc: 1520 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 1521 op: STARTLINE (58)

    /** inline.e:905				emit_temp( inline_target, NEW_REFERENCE )*/
    // SubProg get_inlined_code pc: 1523 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1525 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1527 op: PROC (27)
    _45emit_temp(_66inline_target_52894, 1);
    // SubProg get_inlined_code pc: 1531 op: STARTLINE (58)

    /** inline.e:906				if not TRANSLATE then*/
    // SubProg get_inlined_code pc: 1533 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1535 op: NOT_IFW (108)
    if (_34TRANSLATE_14813 != 0)
    goto L36; // [1535] 1593
    // SubProg get_inlined_code pc: 1538 op: STARTLINE (58)

    /** inline.e:907					epilog &= { ELSE, 0, PRIVATE_INIT_CHECK, inline_target }*/
    // SubProg get_inlined_code pc: 1540 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1542 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1544 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1546 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 23;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 30;
    ((intptr_t*)_2)[4] = _66inline_target_52894;
    _27621 = MAKE_SEQ(_1);
    // SubProg get_inlined_code pc: 1553 op: CONCAT (15)
    Concat((object_ptr)&_epilog_53864, _epilog_53864, _27621);
    DeRefDS(_27621);
    _27621 = NOVALUE;
    // SubProg get_inlined_code pc: 1557 op: STARTLINE (58)

    /** inline.e:908					epilog[$-2] = length(inline_code) + length(epilog) + inline_start + 1*/
    // SubProg get_inlined_code pc: 1559 op: LENGTH (42)
    if (IS_SEQUENCE(_epilog_53864)){
            _27623 = SEQ_PTR(_epilog_53864)->length;
    }
    else {
        _27623 = 1;
    }
    // SubProg get_inlined_code pc: 1562 op: MINUS (10)
    _27624 = _27623 - 2;
    _27623 = NOVALUE;
    // SubProg get_inlined_code pc: 1566 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1568 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52887)){
            _27625 = SEQ_PTR(_66inline_code_52887)->length;
    }
    else {
        _27625 = 1;
    }
    // SubProg get_inlined_code pc: 1571 op: LENGTH (42)
    if (IS_SEQUENCE(_epilog_53864)){
            _27626 = SEQ_PTR(_epilog_53864)->length;
    }
    else {
        _27626 = 1;
    }
    // SubProg get_inlined_code pc: 1574 op: PLUS (11)
    _27627 = _27625 + _27626;
    if ((object)((uintptr_t)_27627 + (uintptr_t)HIGH_BITS) >= 0){
        _27627 = NewDouble((eudouble)_27627);
    }
    _27625 = NOVALUE;
    _27626 = NOVALUE;
    // SubProg get_inlined_code pc: 1578 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1580 op: PLUS (11)
    if (IS_ATOM_INT(_27627)) {
        _27628 = _27627 + _66inline_start_52899;
        if ((object)((uintptr_t)_27628 + (uintptr_t)HIGH_BITS) >= 0){
            _27628 = NewDouble((eudouble)_27628);
        }
    }
    else {
        _27628 = NewDouble(DBL_PTR(_27627)->dbl + (eudouble)_66inline_start_52899);
    }
    DeRef(_27627);
    _27627 = NOVALUE;
    // SubProg get_inlined_code pc: 1584 op: PLUS1 (93)
    if (IS_ATOM_INT(_27628)) {
        _27629 = _27628 + 1;
        if (_27629 > MAXINT){
            _27629 = NewDouble((eudouble)_27629);
        }
    }
    else
    _27629 = binary_op(PLUS, 1, _27628);
    DeRef(_27628);
    _27628 = NOVALUE;
    // SubProg get_inlined_code pc: 1588 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_epilog_53864);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _epilog_53864 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27624);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27629;
    if( _1 != _27629 ){
        DeRef(_1);
    }
    _27629 = NOVALUE;
    // SubProg get_inlined_code pc: 1592 op: NOP1 (159)
L36: // addr: 1593 pc: 1592 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 1593 op: NOP1 (159)
L35: // addr: 1594 pc: 1593 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 1594 op: NOP1 (159)
L32: // addr: 1595 pc: 1594 sub: 53833 op: 159
    // SubProg get_inlined_code pc: 1595 op: STARTLINE (58)

    /** inline.e:914		return prolog & inline_code & epilog*/
    // SubProg get_inlined_code pc: 1597 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1599 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _epilog_53864;
        concat_list[1] = _66inline_code_52887;
        concat_list[2] = _prolog_53863;
        Concat_N((object_ptr)&_27630, concat_list, 3);
    }
    // SubProg get_inlined_code pc: 1605 op: RETURNF (28)

// Exiting block BLOCK: get_inlined_code

// block var sub_53836

// block var start_53837

// block var deferred_53838

// block var is_proc_53839

// block var backpatches_53857
    DeRef(_backpatches_53857);

// block var prolog_53863
    DeRefDSi(_prolog_53863);

// block var epilog_53864
    DeRefDS(_epilog_53864);

// block var s_53880

// block var last_sym_53903

// block var int_sym_53930

// block var final_target_53963

// block var check_pc_54018
    _27513 = NOVALUE;
    DeRef(_27583);
    _27583 = NOVALUE;
    DeRef(_27534);
    _27534 = NOVALUE;
    DeRef(_27505);
    _27505 = NOVALUE;
    DeRef(_27624);
    _27624 = NOVALUE;
    DeRef(_27579);
    _27579 = NOVALUE;
    DeRef(_27591);
    _27591 = NOVALUE;
    _27500 = NOVALUE;
    DeRef(_27537);
    _27537 = NOVALUE;
    DeRef(_27589);
    _27589 = NOVALUE;
    DeRef(_27508);
    _27508 = NOVALUE;
    _27517 = NOVALUE;
    DeRef(_27585);
    _27585 = NOVALUE;
    return _27630;
    // SubProg get_inlined_code pc: 1609 op: BADRETURNF (43)
    ;
}


void _66defer_call()
{
    object _defer_54177 = NOVALUE;
    object _27633 = NOVALUE; // 54182 27633
    object _27632 = NOVALUE; // 54181 27632
// skipping _27631  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defer_call pc: 1 op: STARTLINE (58)

    /** inline.e:918		integer defer = find( inline_sub, deferred_inline_decisions )*/
    // SubProg defer_call pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 7 op: FIND_FROM (176)
    _defer_54177 = find_from(_66inline_sub_52901, _66deferred_inline_decisions_52903, 1);
    // SubProg defer_call pc: 12 op: STARTLINE (58)

    /** inline.e:919		if defer then*/
    // SubProg defer_call pc: 14 op: IF (20)
    if (_defer_54177 == 0)
    {
        goto L1; // [14] 36
    }
    else{
    }
    // SubProg defer_call pc: 17 op: STARTLINE (58)

    /** inline.e:921			deferred_inline_calls[defer] &= CurrentSub*/
    // SubProg defer_call pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 23 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_66deferred_inline_calls_52904);
    _27632 = (object)*(((s1_ptr)_2)->base + _defer_54177);
    // SubProg defer_call pc: 27 op: CONCAT (15)
    if (IS_SEQUENCE(_27632) && IS_ATOM(_34CurrentSub_15196)) {
        Append(&_27633, _27632, _34CurrentSub_15196);
    }
    else if (IS_ATOM(_27632) && IS_SEQUENCE(_34CurrentSub_15196)) {
    }
    else {
        Concat((object_ptr)&_27633, _27632, _34CurrentSub_15196);
        _27632 = NOVALUE;
    }
    _27632 = NOVALUE;
    // SubProg defer_call pc: 31 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66deferred_inline_calls_52904);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66deferred_inline_calls_52904 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _defer_54177);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27633;
    if( _1 != _27633 ){
        DeRef(_1);
    }
    _27633 = NOVALUE;
    // SubProg defer_call pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 54175 op: 159
    // SubProg defer_call pc: 36 op: STARTLINE (58)

    /** inline.e:923	end procedure*/
    // SubProg defer_call pc: 38 op: RETURNP (29)

// Exiting block BLOCK: defer_call

// block var defer_54177
    return;
    // SubProg defer_call pc: 41 op: BADRETURNF (43)
    ;
}


void _66emit_or_inline()
{
    object _sub_54186 = NOVALUE;
    object _code_54217 = NOVALUE;
// skipping _27646  name type: 0
    object _27645 = NOVALUE; // 54219 27645
    object _27644 = NOVALUE; // 54214 27644
// skipping _27643  name type: 0
    object _27642 = NOVALUE; // 54211 27642
    object _27641 = NOVALUE; // 54210 27641
    object _27640 = NOVALUE; // 54208 27640
// skipping _27639  name type: 0
    object _27638 = NOVALUE; // 54199 27638
    object _27637 = NOVALUE; // 54198 27637
    object _27636 = NOVALUE; // 54196 27636
    object _27635 = NOVALUE; // 54192 27635
    object _27634 = NOVALUE; // 54190 27634
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_or_inline pc: 1 op: STARTLINE (58)

    /** inline.e:928		symtab_index sub = op_info1*/
    // SubProg emit_or_inline pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 5 op: ASSIGN (18)
    _sub_54186 = _45op_info1_50371;
    // SubProg emit_or_inline pc: 8 op: INTEGER_CHECK (96)
    // SubProg emit_or_inline pc: 10 op: STARTLINE (58)

    /** inline.e:929		inline_sub = sub*/
    // SubProg emit_or_inline pc: 12 op: ASSIGN (18)
    _66inline_sub_52901 = _sub_54186;
    // SubProg emit_or_inline pc: 15 op: INTEGER_CHECK (96)
    // SubProg emit_or_inline pc: 17 op: STARTLINE (58)

    /** inline.e:931		if SymTab[sub][S_DEPRECATED] then*/
    // SubProg emit_or_inline pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27634 = (object)*(((s1_ptr)_2)->base + _sub_54186);
    // SubProg emit_or_inline pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27634);
    _27635 = (object)*(((s1_ptr)_2)->base + 30);
    _27634 = NOVALUE;
    // SubProg emit_or_inline pc: 31 op: IF (20)
    if (_27635 == 0) {
        _27635 = NOVALUE;
        goto L1; // [31] 60
    }
    else {
        if (!IS_ATOM_INT(_27635) && DBL_PTR(_27635)->dbl == 0.0){
            _27635 = NOVALUE;
            goto L1; // [31] 60
        }
        _27635 = NOVALUE;
    }
    _27635 = NOVALUE;
    // SubProg emit_or_inline pc: 34 op: STARTLINE (58)

    /** inline.e:932			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    // SubProg emit_or_inline pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 40 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27636 = (object)*(((s1_ptr)_2)->base + _sub_54186);
    // SubProg emit_or_inline pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 46 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27636);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _27637 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _27637 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _27636 = NOVALUE;
    // SubProg emit_or_inline pc: 50 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27637);
    ((intptr_t*)_2)[1] = _27637;
    _27638 = MAKE_SEQ(_1);
    _27637 = NOVALUE;
    // SubProg emit_or_inline pc: 54 op: PROC (27)
    _49Warning(327, 16384, _27638);
    _27638 = NOVALUE;
    // SubProg emit_or_inline pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 54183 op: 159
    // SubProg emit_or_inline pc: 60 op: STARTLINE (58)

    /** inline.e:935		if Parser_mode != PAM_NORMAL then*/
    // SubProg emit_or_inline pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 66 op: NOTEQ_IFW (105)
    if (_34Parser_mode_15293 == 0)
    goto L2; // [66] 85
    // SubProg emit_or_inline pc: 70 op: STARTLINE (58)

    /** inline.e:938			emit_op( PROC )*/
    // SubProg emit_or_inline pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 74 op: PROC (27)
    _45emit_op(27);
    // SubProg emit_or_inline pc: 77 op: STARTLINE (58)

    /** inline.e:939			return*/
    // SubProg emit_or_inline pc: 79 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: emit_or_inline

// block var sub_54186

// block var code_54217
    DeRef(_code_54217);
    return;
    // SubProg emit_or_inline pc: 82 op: ELSE (23)
    goto L3; // [82] 133
    // SubProg emit_or_inline pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 54183 op: 159
    // SubProg emit_or_inline pc: 85 op: STARTLINE (58)

    /** inline.e:941		elsif atom( SymTab[sub][S_INLINE] ) or has_forward_params(sub) then*/
    // SubProg emit_or_inline pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27640 = (object)*(((s1_ptr)_2)->base + _sub_54186);
    // SubProg emit_or_inline pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27640);
    _27641 = (object)*(((s1_ptr)_2)->base + 29);
    _27640 = NOVALUE;
    // SubProg emit_or_inline pc: 99 op: IS_AN_ATOM (67)
    _27642 = IS_ATOM(_27641);
    _27641 = NOVALUE;
    // SubProg emit_or_inline pc: 102 op: SC1_OR_IF (147)
    if (_27642 != 0) {
        goto L4; // [102] 115
    }
    // SubProg emit_or_inline pc: 106 op: PROC (27)
    _27644 = _45has_forward_params(_sub_54186);
    // SubProg emit_or_inline pc: 110 op: NOP1 (159)
    // SubProg emit_or_inline pc: 111 op: IF (20)
    if (_27644 == 0) {
        DeRef(_27644);
        _27644 = NOVALUE;
        goto L5; // [111] 132
    }
    else {
        if (!IS_ATOM_INT(_27644) && DBL_PTR(_27644)->dbl == 0.0){
            DeRef(_27644);
            _27644 = NOVALUE;
            goto L5; // [111] 132
        }
        DeRef(_27644);
        _27644 = NOVALUE;
    }
    DeRef(_27644);
    _27644 = NOVALUE;
    // SubProg emit_or_inline pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 54183 op: 159
    // SubProg emit_or_inline pc: 115 op: STARTLINE (58)

    /** inline.e:942			defer_call()*/
    // SubProg emit_or_inline pc: 117 op: PROC (27)
    _66defer_call();
    // SubProg emit_or_inline pc: 119 op: STARTLINE (58)

    /** inline.e:943			emit_op( PROC )*/
    // SubProg emit_or_inline pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 123 op: PROC (27)
    _45emit_op(27);
    // SubProg emit_or_inline pc: 126 op: STARTLINE (58)

    /** inline.e:944			return*/
    // SubProg emit_or_inline pc: 128 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: emit_or_inline

// block var sub_54186

// block var code_54217
    DeRef(_code_54217);
    return;
    // SubProg emit_or_inline pc: 131 op: NOP1 (159)
L5: // addr: 132 pc: 131 sub: 54183 op: 159
    // SubProg emit_or_inline pc: 132 op: NOP1 (159)
L3: // addr: 133 pc: 132 sub: 54183 op: 159
    // SubProg emit_or_inline pc: 133 op: STARTLINE (58)

    /** inline.e:947		sequence code = get_inlined_code( sub, length(Code) )*/
    // SubProg emit_or_inline pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_34Code_15276)){
            _27645 = SEQ_PTR(_34Code_15276)->length;
    }
    else {
        _27645 = 1;
    }
    // SubProg emit_or_inline pc: 140 op: PROC (27)
    _0 = _code_54217;
    _code_54217 = _66get_inlined_code(_sub_54186, _27645, 0);
    DeRef(_0);
    _27645 = NOVALUE;
    // SubProg emit_or_inline pc: 146 op: SEQUENCE_CHECK (97)
    // SubProg emit_or_inline pc: 148 op: STARTLINE (58)

    /** inline.e:948		emit_inline( code )*/
    // SubProg emit_or_inline pc: 150 op: PROC (27)
    RefDS(_code_54217);
    _45emit_inline(_code_54217);
    // SubProg emit_or_inline pc: 153 op: STARTLINE (58)

    /** inline.e:949		clear_last()*/
    // SubProg emit_or_inline pc: 155 op: PROC (27)
    _45clear_last();
    // SubProg emit_or_inline pc: 157 op: STARTLINE (58)

    /** inline.e:951	end procedure*/
    // SubProg emit_or_inline pc: 159 op: RETURNP (29)

// Exiting block BLOCK: emit_or_inline

// block var sub_54186

// block var code_54217
    DeRefDS(_code_54217);
    return;
    // SubProg emit_or_inline pc: 162 op: BADRETURNF (43)
    ;
}



// 0xA30708F1
