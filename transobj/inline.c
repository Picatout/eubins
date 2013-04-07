// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _67advance(object _pc_52910, object _code_52911)
{
    object _27038 = NOVALUE; // 52915 27038
// skipping _27037  name type: 0
    object _27036 = NOVALUE; // 52913 27036
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg advance pc: 1 op: INTEGER_CHECK (96)
    // SubProg advance pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg advance pc: 5 op: STARTLINE (58)

    /** inline.e:63		prev_pc = pc*/
    // SubProg advance pc: 7 op: ASSIGN_I (113)
    _67prev_pc_52893 = _pc_52910;
    // SubProg advance pc: 10 op: STARTLINE (58)

    /** inline.e:64		if pc > length( code ) then*/
    // SubProg advance pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_code_52911)){
            _27036 = SEQ_PTR(_code_52911)->length;
    }
    else {
        _27036 = 1;
    }
    // SubProg advance pc: 15 op: GREATER_IFW_I (124)
    if (_pc_52910 <= _27036)
    goto L1; // [15] 26
    // SubProg advance pc: 19 op: STARTLINE (58)

    /** inline.e:65			return pc*/
    // SubProg advance pc: 21 op: RETURNF (28)

// Exiting block BLOCK: advance

// block var code_52911
    DeRefDS(_code_52911);
    return _pc_52910;
    // SubProg advance pc: 25 op: NOP1 (159)
L1: // addr: 26 pc: 25 sub: 52908 op: 159
    // SubProg advance pc: 26 op: STARTLINE (58)

    /** inline.e:67		return shift:advance( pc, code )*/
    // SubProg advance pc: 28 op: PROC (27)
    RefDS(_code_52911);
    _27038 = _66advance(_pc_52910, _code_52911);
    // SubProg advance pc: 33 op: RETURNF (28)

// Exiting block BLOCK: advance

// block var pc_52910

// block var code_52911
    DeRefDS(_code_52911);
    return _27038;
    // SubProg advance pc: 37 op: BADRETURNF (43)
    ;
}


void _67shift(object _start_52918, object _amount_52919, object _bound_52920)
{
    object _temp_LineTable_52921 = NOVALUE;
    object _temp_Code_52923 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift pc: 1 op: INTEGER_CHECK (96)
    // SubProg shift pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_amount_52919)) {
        _1 = (object)(DBL_PTR(_amount_52919)->dbl);
        DeRefDS(_amount_52919);
        _amount_52919 = _1;
    }
    // SubProg shift pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift pc: 7 op: STARTLINE (58)

    /** inline.e:72			temp_LineTable = LineTable,*/
    // SubProg shift pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 11 op: ASSIGN (18)
    RefDS(_36LineTable_16525);
    DeRef(_temp_LineTable_52921);
    _temp_LineTable_52921 = _36LineTable_16525;
    // SubProg shift pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 16 op: STARTLINE (58)

    /** inline.e:73			temp_Code = Code*/
    // SubProg shift pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 20 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRef(_temp_Code_52923);
    _temp_Code_52923 = _36Code_16524;
    // SubProg shift pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 25 op: STARTLINE (58)

    /** inline.e:74		LineTable = {}*/
    // SubProg shift pc: 27 op: ASSIGN (18)
    RefDS(_21933);
    DeRefDS(_36LineTable_16525);
    _36LineTable_16525 = _21933;
    // SubProg shift pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 32 op: STARTLINE (58)

    /** inline.e:75		Code = inline_code*/
    // SubProg shift pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 36 op: ASSIGN (18)
    RefDS(_67inline_code_52885);
    DeRefDS(_36Code_16524);
    _36Code_16524 = _67inline_code_52885;
    // SubProg shift pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 41 op: STARTLINE (58)

    /** inline.e:76		inline_code = {}*/
    // SubProg shift pc: 43 op: ASSIGN (18)
    RefDS(_21933);
    DeRefDS(_67inline_code_52885);
    _67inline_code_52885 = _21933;
    // SubProg shift pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 48 op: STARTLINE (58)

    /** inline.e:78		shift:shift( start, amount, bound )*/
    // SubProg shift pc: 50 op: PROC (27)
    _66shift(_start_52918, _amount_52919, _bound_52920);
    // SubProg shift pc: 55 op: STARTLINE (58)

    /** inline.e:80		LineTable = temp_LineTable*/
    // SubProg shift pc: 57 op: ASSIGN (18)
    RefDS(_temp_LineTable_52921);
    DeRefDS(_36LineTable_16525);
    _36LineTable_16525 = _temp_LineTable_52921;
    // SubProg shift pc: 60 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 62 op: STARTLINE (58)

    /** inline.e:81		inline_code = Code*/
    // SubProg shift pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 66 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRefDS(_67inline_code_52885);
    _67inline_code_52885 = _36Code_16524;
    // SubProg shift pc: 69 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 71 op: STARTLINE (58)

    /** inline.e:82		Code = temp_Code*/
    // SubProg shift pc: 73 op: ASSIGN (18)
    RefDS(_temp_Code_52923);
    DeRefDS(_36Code_16524);
    _36Code_16524 = _temp_Code_52923;
    // SubProg shift pc: 76 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 78 op: STARTLINE (58)

    /** inline.e:83	end procedure*/
    // SubProg shift pc: 80 op: RETURNP (29)

// Exiting block BLOCK: shift

// block var start_52918

// block var amount_52919

// block var bound_52920

// block var temp_LineTable_52921
    DeRefDS(_temp_LineTable_52921);

// block var temp_Code_52923
    DeRefDS(_temp_Code_52923);
    return;
    // SubProg shift pc: 83 op: BADRETURNF (43)
    ;
}


void _67replace_code(object _code_52938, object _start_52939, object _finish_52940)
{
    object _27045 = NOVALUE; // 52945 27045
    object _27044 = NOVALUE; // 52944 27044
    object _27043 = NOVALUE; // 52943 27043
    object _27042 = NOVALUE; // 52942 27042
// skipping _27041  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_code pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg replace_code pc: 3 op: INTEGER_CHECK (96)
    // SubProg replace_code pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_finish_52940)) {
        _1 = (object)(DBL_PTR(_finish_52940)->dbl);
        DeRefDS(_finish_52940);
        _finish_52940 = _1;
    }
    // SubProg replace_code pc: 7 op: STARTLINE (58)

    /** inline.e:92		inline_code = replace( inline_code, code, start, finish )*/
    // SubProg replace_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_code pc: 11 op: REPLACE (201)
    {
        intptr_t p1 = _67inline_code_52885;
        intptr_t p2 = _code_52938;
        intptr_t p3 = _start_52939;
        intptr_t p4 = _finish_52940;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_67inline_code_52885;
        Replace( &replace_params );
    }
    // SubProg replace_code pc: 17 op: STARTLINE (58)

    /** inline.e:93		shift( start , length( code ) - (finish - start + 1), finish )*/
    // SubProg replace_code pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_code_52938)){
            _27042 = SEQ_PTR(_code_52938)->length;
    }
    else {
        _27042 = 1;
    }
    // SubProg replace_code pc: 22 op: MINUS (10)
    _27043 = _finish_52940 - _start_52939;
    if ((object)((uintptr_t)_27043 +(uintptr_t) HIGH_BITS) >= 0){
        _27043 = NewDouble((eudouble)_27043);
    }
    // SubProg replace_code pc: 26 op: PLUS1 (93)
    if (IS_ATOM_INT(_27043)) {
        _27044 = _27043 + 1;
        if (_27044 > MAXINT){
            _27044 = NewDouble((eudouble)_27044);
        }
    }
    else
    _27044 = binary_op(PLUS, 1, _27043);
    DeRef(_27043);
    _27043 = NOVALUE;
    // SubProg replace_code pc: 30 op: MINUS (10)
    if (IS_ATOM_INT(_27044)) {
        _27045 = _27042 - _27044;
        if ((object)((uintptr_t)_27045 +(uintptr_t) HIGH_BITS) >= 0){
            _27045 = NewDouble((eudouble)_27045);
        }
    }
    else {
        _27045 = NewDouble((eudouble)_27042 - DBL_PTR(_27044)->dbl);
    }
    _27042 = NOVALUE;
    DeRef(_27044);
    _27044 = NOVALUE;
    // SubProg replace_code pc: 34 op: PROC (27)
    _67shift(_start_52939, _27045, _finish_52940);
    _27045 = NOVALUE;
    // SubProg replace_code pc: 39 op: STARTLINE (58)

    /** inline.e:94	end procedure*/
    // SubProg replace_code pc: 41 op: RETURNP (29)

// Exiting block BLOCK: replace_code

// block var code_52938
    DeRefDS(_code_52938);

// block var start_52939

// block var finish_52940
    return;
    // SubProg replace_code pc: 44 op: BADRETURNF (43)
    ;
}


void _67defer()
{
    object _dx_52948 = NOVALUE;
// skipping _27049  name type: 0
// skipping _27048  name type: 0
// skipping _27047  name type: 0
// skipping _27046  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defer pc: 1 op: STARTLINE (58)

    /** inline.e:101		integer dx = find( inline_sub, deferred_inline_decisions )*/
    // SubProg defer pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 7 op: FIND_FROM (176)
    _dx_52948 = find_from(_67inline_sub_52899, _67deferred_inline_decisions_52901, 1);
    // SubProg defer pc: 12 op: STARTLINE (58)

    /** inline.e:102		if not dx then*/
    // SubProg defer pc: 14 op: NOT_IFW (108)
    if (_dx_52948 != 0)
    goto L1; // [14] 36
    // SubProg defer pc: 17 op: STARTLINE (58)

    /** inline.e:103			deferred_inline_decisions &= inline_sub*/
    // SubProg defer pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 23 op: CONCAT (15)
    Append(&_67deferred_inline_decisions_52901, _67deferred_inline_decisions_52901, _67inline_sub_52899);
    // SubProg defer pc: 27 op: STARTLINE (58)

    /** inline.e:104			deferred_inline_calls = append( deferred_inline_calls, {} )*/
    // SubProg defer pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 31 op: APPEND (35)
    RefDS(_21933);
    Append(&_67deferred_inline_calls_52902, _67deferred_inline_calls_52902, _21933);
    // SubProg defer pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 52946 op: 159
    // SubProg defer pc: 36 op: STARTLINE (58)

    /** inline.e:106	end procedure*/
    // SubProg defer pc: 38 op: RETURNP (29)

// Exiting block BLOCK: defer

// block var dx_52948
    return;
    // SubProg defer pc: 41 op: BADRETURNF (43)
    ;
}


object _67new_inline_temp(object _sym_52957)
{
    object _27051 = NOVALUE; // 52959 27051
// skipping _27050  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_inline_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_inline_temp pc: 3 op: STARTLINE (58)

    /** inline.e:110		inline_temps &= sym*/
    // SubProg new_inline_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_temp pc: 7 op: CONCAT (15)
    Append(&_67inline_temps_52887, _67inline_temps_52887, _sym_52957);
    // SubProg new_inline_temp pc: 11 op: STARTLINE (58)

    /** inline.e:111		return length( inline_temps )*/
    // SubProg new_inline_temp pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_temp pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_temps_52887)){
            _27051 = SEQ_PTR(_67inline_temps_52887)->length;
    }
    else {
        _27051 = 1;
    }
    // SubProg new_inline_temp pc: 18 op: RETURNF (28)

// Exiting block BLOCK: new_inline_temp

// block var sym_52957
    return _27051;
    // SubProg new_inline_temp pc: 22 op: BADRETURNF (43)
    ;
}


object _67get_inline_temp(object _sym_52963)
{
    object _temp_num_52964 = NOVALUE;
    object _27055 = NOVALUE; // 52971 27055
// skipping _27054  name type: 0
// skipping _27053  name type: 0
// skipping _27052  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_inline_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_inline_temp pc: 3 op: STARTLINE (58)

    /** inline.e:117		integer temp_num = find( sym, inline_params )*/
    // SubProg get_inline_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 7 op: FIND_FROM (176)
    _temp_num_52964 = find_from(_sym_52963, _67inline_params_52890, 1);
    // SubProg get_inline_temp pc: 12 op: STARTLINE (58)

    /** inline.e:118		if temp_num then*/
    // SubProg get_inline_temp pc: 14 op: IF (20)
    if (_temp_num_52964 == 0)
    {
        goto L1; // [14] 24
    }
    else{
    }
    // SubProg get_inline_temp pc: 17 op: STARTLINE (58)

    /** inline.e:119			return temp_num*/
    // SubProg get_inline_temp pc: 19 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52963
    return _temp_num_52964;
    // SubProg get_inline_temp pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 52960 op: 159
    // SubProg get_inline_temp pc: 24 op: STARTLINE (58)

    /** inline.e:122		temp_num = find( sym, proc_vars )*/
    // SubProg get_inline_temp pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 28 op: FIND_FROM (176)
    _temp_num_52964 = find_from(_sym_52963, _67proc_vars_52886, 1);
    // SubProg get_inline_temp pc: 33 op: STARTLINE (58)

    /** inline.e:123		if temp_num then*/
    // SubProg get_inline_temp pc: 35 op: IF (20)
    if (_temp_num_52964 == 0)
    {
        goto L2; // [35] 45
    }
    else{
    }
    // SubProg get_inline_temp pc: 38 op: STARTLINE (58)

    /** inline.e:124			return temp_num*/
    // SubProg get_inline_temp pc: 40 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52963
    return _temp_num_52964;
    // SubProg get_inline_temp pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 52960 op: 159
    // SubProg get_inline_temp pc: 45 op: STARTLINE (58)

    /** inline.e:127		temp_num = find( sym, inline_temps )*/
    // SubProg get_inline_temp pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 49 op: FIND_FROM (176)
    _temp_num_52964 = find_from(_sym_52963, _67inline_temps_52887, 1);
    // SubProg get_inline_temp pc: 54 op: STARTLINE (58)

    /** inline.e:128		if temp_num then*/
    // SubProg get_inline_temp pc: 56 op: IF (20)
    if (_temp_num_52964 == 0)
    {
        goto L3; // [56] 66
    }
    else{
    }
    // SubProg get_inline_temp pc: 59 op: STARTLINE (58)

    /** inline.e:129			return temp_num*/
    // SubProg get_inline_temp pc: 61 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52963
    return _temp_num_52964;
    // SubProg get_inline_temp pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 52960 op: 159
    // SubProg get_inline_temp pc: 66 op: STARTLINE (58)

    /** inline.e:132		return new_inline_temp( sym )*/
    // SubProg get_inline_temp pc: 68 op: PROC (27)
    _27055 = _67new_inline_temp(_sym_52963);
    // SubProg get_inline_temp pc: 72 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_52963

// block var temp_num_52964
    return _27055;
    // SubProg get_inline_temp pc: 76 op: BADRETURNF (43)
    ;
}


object _67generic_symbol(object _sym_52975)
{
    object _inline_type_52976 = NOVALUE;
    object _px_52977 = NOVALUE;
    object _eentry_52984 = NOVALUE;
    object _27064 = NOVALUE; // 52996 27064
    object _27063 = NOVALUE; // 52995 27063
    object _27062 = NOVALUE; // 52994 27062
    object _27061 = NOVALUE; // 52992 27061
// skipping _27060  name type: 0
    object _27059 = NOVALUE; // 52989 27059
// skipping _27058  name type: 0
// skipping _27057  name type: 0
// skipping _27056  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg generic_symbol pc: 1 op: INTEGER_CHECK (96)
    // SubProg generic_symbol pc: 3 op: STARTLINE (58)

    /** inline.e:137		integer px = find( sym, inline_params )*/
    // SubProg generic_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 7 op: FIND_FROM (176)
    _px_52977 = find_from(_sym_52975, _67inline_params_52890, 1);
    // SubProg generic_symbol pc: 12 op: STARTLINE (58)

    /** inline.e:138		if px then*/
    // SubProg generic_symbol pc: 14 op: IF (20)
    if (_px_52977 == 0)
    {
        goto L1; // [14] 25
    }
    else{
    }
    // SubProg generic_symbol pc: 17 op: STARTLINE (58)

    /** inline.e:139			inline_type = INLINE_PARAM*/
    // SubProg generic_symbol pc: 19 op: ASSIGN_I (113)
    _inline_type_52976 = 1;
    // SubProg generic_symbol pc: 22 op: ELSE (23)
    goto L2; // [22] 100
    // SubProg generic_symbol pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 52972 op: 159
    // SubProg generic_symbol pc: 25 op: STARTLINE (58)

    /** inline.e:141			px = find( sym, proc_vars )*/
    // SubProg generic_symbol pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 29 op: FIND_FROM (176)
    _px_52977 = find_from(_sym_52975, _67proc_vars_52886, 1);
    // SubProg generic_symbol pc: 34 op: STARTLINE (58)

    /** inline.e:142			if px then*/
    // SubProg generic_symbol pc: 36 op: IF (20)
    if (_px_52977 == 0)
    {
        goto L3; // [36] 47
    }
    else{
    }
    // SubProg generic_symbol pc: 39 op: STARTLINE (58)

    /** inline.e:143				inline_type = INLINE_VAR*/
    // SubProg generic_symbol pc: 41 op: ASSIGN_I (113)
    _inline_type_52976 = 6;
    // SubProg generic_symbol pc: 44 op: ELSE (23)
    goto L4; // [44] 99
    // SubProg generic_symbol pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 52972 op: 159
    // SubProg generic_symbol pc: 47 op: STARTLINE (58)

    /** inline.e:145				sequence eentry = SymTab[sym]*/
    // SubProg generic_symbol pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 51 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_52984);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _eentry_52984 = (object)*(((s1_ptr)_2)->base + _sym_52975);
    Ref(_eentry_52984);
    // SubProg generic_symbol pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg generic_symbol pc: 57 op: STARTLINE (58)

    /** inline.e:146				if is_literal( sym ) or eentry[S_SCOPE] > SC_PRIVATE then*/
    // SubProg generic_symbol pc: 59 op: PROC (27)
    _27059 = _67is_literal(_sym_52975);
    // SubProg generic_symbol pc: 63 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_27059)) {
        if (_27059 != 0) {
            goto L5; // [63] 84
        }
    }
    else {
        if (DBL_PTR(_27059)->dbl != 0.0) {
            goto L5; // [63] 84
        }
    }
    // SubProg generic_symbol pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 69 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_52984);
    _27061 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg generic_symbol pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 75 op: GREATER (6)
    if (IS_ATOM_INT(_27061)) {
        _27062 = (_27061 > 3);
    }
    else {
        _27062 = binary_op(GREATER, _27061, 3);
    }
    _27061 = NOVALUE;
    // SubProg generic_symbol pc: 79 op: NOP1 (159)
    // SubProg generic_symbol pc: 80 op: IF (20)
    if (_27062 == 0) {
        DeRef(_27062);
        _27062 = NOVALUE;
        goto L6; // [80] 91
    }
    else {
        if (!IS_ATOM_INT(_27062) && DBL_PTR(_27062)->dbl == 0.0){
            DeRef(_27062);
            _27062 = NOVALUE;
            goto L6; // [80] 91
        }
        DeRef(_27062);
        _27062 = NOVALUE;
    }
    DeRef(_27062);
    _27062 = NOVALUE;
    // SubProg generic_symbol pc: 83 op: NOP1 (159)
L5: // addr: 84 pc: 83 sub: 52972 op: 159
    // SubProg generic_symbol pc: 84 op: STARTLINE (58)

    /** inline.e:147					return sym*/
    // SubProg generic_symbol pc: 86 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var eentry_52984
    DeRef(_eentry_52984);

// Exiting block BLOCK: IF-

// Exiting block BLOCK: generic_symbol

// block var inline_type_52976

// block var px_52977
    DeRef(_27059);
    _27059 = NOVALUE;
    return _sym_52975;
    // SubProg generic_symbol pc: 90 op: NOP1 (159)
L6: // addr: 91 pc: 90 sub: 52972 op: 159
    // SubProg generic_symbol pc: 91 op: STARTLINE (58)

    /** inline.e:149				inline_type = INLINE_TEMP*/
    // SubProg generic_symbol pc: 93 op: ASSIGN_I (113)
    _inline_type_52976 = 2;
    // SubProg generic_symbol pc: 96 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var eentry_52984
    DeRef(_eentry_52984);
    _eentry_52984 = NOVALUE;
    // SubProg generic_symbol pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 52972 op: 159
    // SubProg generic_symbol pc: 99 op: NOP1 (159)
L2: // addr: 100 pc: 99 sub: 52972 op: 159
    // SubProg generic_symbol pc: 100 op: STARTLINE (58)

    /** inline.e:153		return { inline_type, get_inline_temp( sym ) }*/
    // SubProg generic_symbol pc: 102 op: PRIVATE_INIT_CHECK (30)
    // SubProg generic_symbol pc: 104 op: PROC (27)
    _27063 = _67get_inline_temp(_sym_52975);
    // SubProg generic_symbol pc: 108 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _inline_type_52976;
    ((intptr_t *)_2)[2] = _27063;
    _27064 = MAKE_SEQ(_1);
    _27063 = NOVALUE;
    // SubProg generic_symbol pc: 112 op: RETURNF (28)

// Exiting block BLOCK: generic_symbol

// block var sym_52975

// block var inline_type_52976

// block var px_52977
    DeRef(_27059);
    _27059 = NOVALUE;
    return _27064;
    // SubProg generic_symbol pc: 116 op: BADRETURNF (43)
    ;
}


object _67adjust_symbol(object _pc_52999)
{
    object _sym_53001 = NOVALUE;
    object _eentry_53007 = NOVALUE;
    object _27072 = NOVALUE; // 53018 27072
// skipping _27071  name type: 0
    object _27070 = NOVALUE; // 53015 27070
    object _27069 = NOVALUE; // 53012 27069
// skipping _27068  name type: 0
// skipping _27067  name type: 0
// skipping _27066  name type: 0
// skipping _27065  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_symbol pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_52999)) {
        _1 = (object)(DBL_PTR(_pc_52999)->dbl);
        DeRefDS(_pc_52999);
        _pc_52999 = _1;
    }
    // SubProg adjust_symbol pc: 3 op: STARTLINE (58)

    /** inline.e:160		symtab_index sym = inline_code[pc]*/
    // SubProg adjust_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _sym_53001 = (object)*(((s1_ptr)_2)->base + _pc_52999);
    if (!IS_ATOM_INT(_sym_53001)){
        _sym_53001 = (object)DBL_PTR(_sym_53001)->dbl;
    }
    // SubProg adjust_symbol pc: 13 op: STARTLINE (58)

    /** inline.e:161		if sym < 0 then*/
    // SubProg adjust_symbol pc: 15 op: LESS_IFW (102)
    if (_sym_53001 >= 0)
    goto L1; // [15] 28
    // SubProg adjust_symbol pc: 19 op: STARTLINE (58)

    /** inline.e:162			return 0*/
    // SubProg adjust_symbol pc: 21 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_52999

// block var sym_53001

// block var eentry_53007
    DeRef(_eentry_53007);
    return 0;
    // SubProg adjust_symbol pc: 25 op: ELSE (23)
    goto L2; // [25] 41
    // SubProg adjust_symbol pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 52997 op: 159
    // SubProg adjust_symbol pc: 28 op: STARTLINE (58)

    /** inline.e:163		elsif not sym then*/
    // SubProg adjust_symbol pc: 30 op: NOT_IFW (108)
    if (_sym_53001 != 0)
    goto L3; // [30] 40
    // SubProg adjust_symbol pc: 33 op: STARTLINE (58)

    /** inline.e:165			return 1*/
    // SubProg adjust_symbol pc: 35 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_52999

// block var sym_53001

// block var eentry_53007
    DeRef(_eentry_53007);
    return 1;
    // SubProg adjust_symbol pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 52997 op: 159
    // SubProg adjust_symbol pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 52997 op: 159
    // SubProg adjust_symbol pc: 41 op: STARTLINE (58)

    /** inline.e:168		sequence eentry = SymTab[sym]*/
    // SubProg adjust_symbol pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_53007);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _eentry_53007 = (object)*(((s1_ptr)_2)->base + _sym_53001);
    Ref(_eentry_53007);
    // SubProg adjust_symbol pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg adjust_symbol pc: 51 op: STARTLINE (58)

    /** inline.e:169		if is_literal( sym ) then*/
    // SubProg adjust_symbol pc: 53 op: PROC (27)
    _27069 = _67is_literal(_sym_53001);
    // SubProg adjust_symbol pc: 57 op: IF (20)
    if (_27069 == 0) {
        DeRef(_27069);
        _27069 = NOVALUE;
        goto L4; // [57] 69
    }
    else {
        if (!IS_ATOM_INT(_27069) && DBL_PTR(_27069)->dbl == 0.0){
            DeRef(_27069);
            _27069 = NOVALUE;
            goto L4; // [57] 69
        }
        DeRef(_27069);
        _27069 = NOVALUE;
    }
    DeRef(_27069);
    _27069 = NOVALUE;
    // SubProg adjust_symbol pc: 60 op: STARTLINE (58)

    /** inline.e:170			return 1*/
    // SubProg adjust_symbol pc: 62 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_52999

// block var sym_53001

// block var eentry_53007
    DeRefDS(_eentry_53007);
    return 1;
    // SubProg adjust_symbol pc: 66 op: ELSE (23)
    goto L5; // [66] 95
    // SubProg adjust_symbol pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 52997 op: 159
    // SubProg adjust_symbol pc: 69 op: STARTLINE (58)

    /** inline.e:172		elsif eentry[S_SCOPE] = SC_UNDEFINED then*/
    // SubProg adjust_symbol pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 73 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_53007);
    _27070 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg adjust_symbol pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 79 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27070, 9)){
        _27070 = NOVALUE;
        goto L6; // [79] 94
    }
    _27070 = NOVALUE;
    // SubProg adjust_symbol pc: 83 op: STARTLINE (58)

    /** inline.e:173			defer()*/
    // SubProg adjust_symbol pc: 85 op: PROC (27)
    _67defer();
    // SubProg adjust_symbol pc: 87 op: STARTLINE (58)

    /** inline.e:174			return 0*/
    // SubProg adjust_symbol pc: 89 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_52999

// block var sym_53001

// block var eentry_53007
    DeRefDS(_eentry_53007);
    return 0;
    // SubProg adjust_symbol pc: 93 op: NOP1 (159)
L6: // addr: 94 pc: 93 sub: 52997 op: 159
    // SubProg adjust_symbol pc: 94 op: NOP1 (159)
L5: // addr: 95 pc: 94 sub: 52997 op: 159
    // SubProg adjust_symbol pc: 95 op: STARTLINE (58)

    /** inline.e:177		inline_code[pc] = generic_symbol( sym )*/
    // SubProg adjust_symbol pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 99 op: PROC (27)
    _27072 = _67generic_symbol(_sym_53001);
    // SubProg adjust_symbol pc: 103 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_52999);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27072;
    if( _1 != _27072 ){
        DeRef(_1);
    }
    _27072 = NOVALUE;
    // SubProg adjust_symbol pc: 107 op: STARTLINE (58)

    /** inline.e:178		return 1*/
    // SubProg adjust_symbol pc: 109 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_52999

// block var sym_53001

// block var eentry_53007
    DeRef(_eentry_53007);
    return 1;
    // SubProg adjust_symbol pc: 113 op: BADRETURNF (43)
    ;
}


object _67check_for_param(object _pc_53021)
{
    object _px_53022 = NOVALUE;
// skipping _27077  name type: 0
// skipping _27076  name type: 0
    object _27075 = NOVALUE; // 53027 27075
// skipping _27074  name type: 0
    object _27073 = NOVALUE; // 53023 27073
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_param pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53021)) {
        _1 = (object)(DBL_PTR(_pc_53021)->dbl);
        DeRefDS(_pc_53021);
        _pc_53021 = _1;
    }
    // SubProg check_for_param pc: 3 op: STARTLINE (58)

    /** inline.e:182		integer px = find( inline_code[pc], inline_params )*/
    // SubProg check_for_param pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27073 = (object)*(((s1_ptr)_2)->base + _pc_53021);
    // SubProg check_for_param pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 13 op: FIND_FROM (176)
    _px_53022 = find_from(_27073, _67inline_params_52890, 1);
    _27073 = NOVALUE;
    // SubProg check_for_param pc: 18 op: STARTLINE (58)

    /** inline.e:183		if px then*/
    // SubProg check_for_param pc: 20 op: IF (20)
    if (_px_53022 == 0)
    {
        goto L1; // [20] 51
    }
    else{
    }
    // SubProg check_for_param pc: 23 op: STARTLINE (58)

    /** inline.e:184			if not find( px, assigned_params ) then*/
    // SubProg check_for_param pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 27 op: FIND_FROM (176)
    _27075 = find_from(_px_53022, _67assigned_params_52891, 1);
    // SubProg check_for_param pc: 32 op: NOT_IFW (108)
    if (_27075 != 0)
    goto L2; // [32] 44
    _27075 = NOVALUE;
    // SubProg check_for_param pc: 35 op: STARTLINE (58)

    /** inline.e:185				assigned_params &= px*/
    // SubProg check_for_param pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 39 op: CONCAT (15)
    Append(&_67assigned_params_52891, _67assigned_params_52891, _px_53022);
    // SubProg check_for_param pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 53019 op: 159
    // SubProg check_for_param pc: 44 op: STARTLINE (58)

    /** inline.e:187			return 1*/
    // SubProg check_for_param pc: 46 op: RETURNF (28)

// Exiting block BLOCK: check_for_param

// block var pc_53021

// block var px_53022
    return 1;
    // SubProg check_for_param pc: 50 op: NOP1 (159)
L1: // addr: 51 pc: 50 sub: 53019 op: 159
    // SubProg check_for_param pc: 51 op: STARTLINE (58)

    /** inline.e:189		return 0*/
    // SubProg check_for_param pc: 53 op: RETURNF (28)

// Exiting block BLOCK: check_for_param

// block var pc_53021

// block var px_53022
    return 0;
    // SubProg check_for_param pc: 57 op: BADRETURNF (43)
    ;
}


void _67check_target(object _pc_53032, object _op_53033)
{
    object _targets_53034 = NOVALUE;
    object _27084 = NOVALUE; // 53047 27084
    object _27083 = NOVALUE; // 53046 27083
    object _27082 = NOVALUE; // 53045 27082
    object _27081 = NOVALUE; // 53043 27081
    object _27080 = NOVALUE; // 53040 27080
// skipping _27079  name type: 0
    object _27078 = NOVALUE; // 53036 27078
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_target pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_target pc: 3 op: INTEGER_CHECK (96)
    // SubProg check_target pc: 5 op: STARTLINE (58)

    /** inline.e:194		sequence targets = op_info[op][OP_TARGET]*/
    // SubProg check_target pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_target pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_66op_info_23869);
    _27078 = (object)*(((s1_ptr)_2)->base + _op_53033);
    // SubProg check_target pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_target pc: 15 op: RHS_SUBS_CHECK (92)
    DeRef(_targets_53034);
    _2 = (object)SEQ_PTR(_27078);
    _targets_53034 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_targets_53034);
    _27078 = NOVALUE;
    // SubProg check_target pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg check_target pc: 21 op: STARTLINE (58)

    /** inline.e:196		if length( targets ) then*/
    // SubProg check_target pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_targets_53034)){
            _27080 = SEQ_PTR(_targets_53034)->length;
    }
    else {
        _27080 = 1;
    }
    // SubProg check_target pc: 26 op: IF (20)
    if (_27080 == 0)
    {
        _27080 = NOVALUE;
        goto L1; // [26] 72
    }
    else{
        _27080 = NOVALUE;
    }
    // SubProg check_target pc: 29 op: STARTLINE (58)

    /** inline.e:197		for i = 1 to length( targets ) do*/
    // SubProg check_target pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_targets_53034)){
            _27081 = SEQ_PTR(_targets_53034)->length;
    }
    else {
        _27081 = 1;
    }
    // SubProg check_target pc: 34 op: FOR_I (125)
    {
        object _i_53042;
        _i_53042 = 1;
L2: // addr: 41 pc: 34 sub: 53030 op: 125
        if (_i_53042 > _27081){
            goto L3; // [34] 71
        }
        // SubProg check_target pc: 41 op: STARTLINE (58)

        /** inline.e:198				if check_for_param( pc + targets[i] ) then*/
        // SubProg check_target pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_targets_53034);
        _27082 = (object)*(((s1_ptr)_2)->base + _i_53042);
        // SubProg check_target pc: 47 op: PLUS (11)
        if (IS_ATOM_INT(_27082)) {
            _27083 = _pc_53032 + _27082;
            if ((object)((uintptr_t)_27083 + (uintptr_t)HIGH_BITS) >= 0){
                _27083 = NewDouble((eudouble)_27083);
            }
        }
        else {
            _27083 = binary_op(PLUS, _pc_53032, _27082);
        }
        _27082 = NOVALUE;
        // SubProg check_target pc: 51 op: PROC (27)
        _27084 = _67check_for_param(_27083);
        _27083 = NOVALUE;
        // SubProg check_target pc: 55 op: IF (20)
        if (_27084 == 0) {
            DeRef(_27084);
            _27084 = NOVALUE;
            goto L4; // [55] 64
        }
        else {
            if (!IS_ATOM_INT(_27084) && DBL_PTR(_27084)->dbl == 0.0){
                DeRef(_27084);
                _27084 = NOVALUE;
                goto L4; // [55] 64
            }
            DeRef(_27084);
            _27084 = NOVALUE;
        }
        DeRef(_27084);
        _27084 = NOVALUE;
        // SubProg check_target pc: 58 op: STARTLINE (58)

        /** inline.e:199					return*/
        // SubProg check_target pc: 60 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_target

// block var pc_53032

// block var op_53033

// block var targets_53034
        DeRefDS(_targets_53034);
        return;
        // SubProg check_target pc: 63 op: NOP1 (159)
L4: // addr: 64 pc: 63 sub: 53030 op: 159
        // SubProg check_target pc: 64 op: STARTLINE (58)

        /** inline.e:201			end for*/
        // SubProg check_target pc: 66 op: ENDFOR_INT_UP1 (54)
        _i_53042 = _i_53042 + 1;
        goto L2; // [66] 41
L3: // addr: 71 pc: 66 sub: 53030 op: 54
        ;
    }
    // SubProg check_target pc: 71 op: NOP1 (159)
L1: // addr: 72 pc: 71 sub: 53030 op: 159
    // SubProg check_target pc: 72 op: STARTLINE (58)

    /** inline.e:203	end procedure*/
    // SubProg check_target pc: 74 op: RETURNP (29)

// Exiting block BLOCK: check_target

// block var pc_53032

// block var op_53033

// block var targets_53034
    DeRef(_targets_53034);
    return;
    // SubProg check_target pc: 77 op: BADRETURNF (43)
    ;
}


object _67adjust_il(object _pc_53050, object _op_53051)
{
    object _addr_53059 = NOVALUE;
    object _sub_53065 = NOVALUE;
// skipping _27110  name type: 0
    object _27109 = NOVALUE; // 53095 27109
    object _27108 = NOVALUE; // 53094 27108
    object _27107 = NOVALUE; // 53092 27107
    object _27106 = NOVALUE; // 53090 27106
    object _27105 = NOVALUE; // 53089 27105
    object _27104 = NOVALUE; // 53087 27104
    object _27103 = NOVALUE; // 53086 27103
    object _27101 = NOVALUE; // 53081 27101
    object _27100 = NOVALUE; // 53079 27100
    object _27099 = NOVALUE; // 53078 27099
    object _27098 = NOVALUE; // 53077 27098
    object _27097 = NOVALUE; // 53076 27097
    object _27096 = NOVALUE; // 53075 27096
    object _27095 = NOVALUE; // 53074 27095
    object _27094 = NOVALUE; // 53073 27094
// skipping _27093  name type: 0
    object _27092 = NOVALUE; // 53069 27092
    object _27091 = NOVALUE; // 53067 27091
// skipping _27090  name type: 0
    object _27089 = NOVALUE; // 53063 27089
    object _27088 = NOVALUE; // 53061 27088
    object _27087 = NOVALUE; // 53058 27087
    object _27086 = NOVALUE; // 53057 27086
    object _27085 = NOVALUE; // 53055 27085
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_il pc: 1 op: INTEGER_CHECK (96)
    // SubProg adjust_il pc: 3 op: INTEGER_CHECK (96)
    // SubProg adjust_il pc: 5 op: STARTLINE (58)

    /** inline.e:208		for i = 1 to op_info[op][OP_SIZE] - 1 do*/
    // SubProg adjust_il pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_il pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_66op_info_23869);
    _27085 = (object)*(((s1_ptr)_2)->base + _op_53051);
    // SubProg adjust_il pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_il pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27085);
    _27086 = (object)*(((s1_ptr)_2)->base + 2);
    _27085 = NOVALUE;
    // SubProg adjust_il pc: 19 op: MINUS (10)
    if (IS_ATOM_INT(_27086)) {
        _27087 = _27086 - 1;
        if ((object)((uintptr_t)_27087 +(uintptr_t) HIGH_BITS) >= 0){
            _27087 = NewDouble((eudouble)_27087);
        }
    }
    else {
        _27087 = binary_op(MINUS, _27086, 1);
    }
    _27086 = NOVALUE;
    // SubProg adjust_il pc: 23 op: FOR (21)
    {
        object _i_53053;
        _i_53053 = 1;
L1: // addr: 30 pc: 23 sub: 53048 op: 21
        if (binary_op_a(GREATER, _i_53053, _27087)){
            goto L2; // [23] 214
        }
        // SubProg adjust_il pc: 30 op: STARTLINE (58)

        /** inline.e:210			integer addr = find( i, op_info[op][OP_ADDR] )*/
        // SubProg adjust_il pc: 32 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_66op_info_23869);
        _27088 = (object)*(((s1_ptr)_2)->base + _op_53051);
        // SubProg adjust_il pc: 38 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 40 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27088);
        _27089 = (object)*(((s1_ptr)_2)->base + 3);
        _27088 = NOVALUE;
        // SubProg adjust_il pc: 44 op: FIND_FROM (176)
        _addr_53059 = find_from(_i_53053, _27089, 1);
        _27089 = NOVALUE;
        // SubProg adjust_il pc: 49 op: STARTLINE (58)

        /** inline.e:211			integer sub  = find( i, op_info[op][OP_SUB] )*/
        // SubProg adjust_il pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 53 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_66op_info_23869);
        _27091 = (object)*(((s1_ptr)_2)->base + _op_53051);
        // SubProg adjust_il pc: 57 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 59 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27091);
        _27092 = (object)*(((s1_ptr)_2)->base + 5);
        _27091 = NOVALUE;
        // SubProg adjust_il pc: 63 op: FIND_FROM (176)
        _sub_53065 = find_from(_i_53053, _27092, 1);
        _27092 = NOVALUE;
        // SubProg adjust_il pc: 68 op: STARTLINE (58)

        /** inline.e:212			if addr then*/
        // SubProg adjust_il pc: 70 op: IF (20)
        if (_addr_53059 == 0)
        {
            goto L3; // [70] 121
        }
        else{
        }
        // SubProg adjust_il pc: 73 op: STARTLINE (58)

        /** inline.e:213				if integer( inline_code[pc+i] ) then*/
        // SubProg adjust_il pc: 75 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 77 op: PLUS (11)
        if (IS_ATOM_INT(_i_53053)) {
            _27094 = _pc_53050 + _i_53053;
        }
        else {
            _27094 = NewDouble((eudouble)_pc_53050 + DBL_PTR(_i_53053)->dbl);
        }
        // SubProg adjust_il pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        if (!IS_ATOM_INT(_27094)){
            _27095 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27094)->dbl));
        }
        else{
            _27095 = (object)*(((s1_ptr)_2)->base + _27094);
        }
        // SubProg adjust_il pc: 85 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_27095))
        _27096 = 1;
        else if (IS_ATOM_DBL(_27095))
        _27096 = IS_ATOM_INT(DoubleToInt(_27095));
        else
        _27096 = 0;
        _27095 = NOVALUE;
        // SubProg adjust_il pc: 88 op: IF (20)
        if (_27096 == 0)
        {
            _27096 = NOVALUE;
            goto L4; // [88] 205
        }
        else{
            _27096 = NOVALUE;
        }
        // SubProg adjust_il pc: 91 op: STARTLINE (58)

        /** inline.e:214					inline_code[pc + i] = { INLINE_ADDR, inline_code[pc + i] }*/
        // SubProg adjust_il pc: 93 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 95 op: PLUS (11)
        if (IS_ATOM_INT(_i_53053)) {
            _27097 = _pc_53050 + _i_53053;
            if ((object)((uintptr_t)_27097 + (uintptr_t)HIGH_BITS) >= 0){
                _27097 = NewDouble((eudouble)_27097);
            }
        }
        else {
            _27097 = NewDouble((eudouble)_pc_53050 + DBL_PTR(_i_53053)->dbl);
        }
        // SubProg adjust_il pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 101 op: PLUS (11)
        if (IS_ATOM_INT(_i_53053)) {
            _27098 = _pc_53050 + _i_53053;
        }
        else {
            _27098 = NewDouble((eudouble)_pc_53050 + DBL_PTR(_i_53053)->dbl);
        }
        // SubProg adjust_il pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        if (!IS_ATOM_INT(_27098)){
            _27099 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27098)->dbl));
        }
        else{
            _27099 = (object)*(((s1_ptr)_2)->base + _27098);
        }
        // SubProg adjust_il pc: 109 op: RIGHT_BRACE_2 (85)
        Ref(_27099);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 4;
        ((intptr_t *)_2)[2] = _27099;
        _27100 = MAKE_SEQ(_1);
        _27099 = NOVALUE;
        // SubProg adjust_il pc: 113 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _67inline_code_52885 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27097))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27097)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27097);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27100;
        if( _1 != _27100 ){
            DeRef(_1);
        }
        _27100 = NOVALUE;
        // SubProg adjust_il pc: 117 op: NOP1 (159)
        // SubProg adjust_il pc: 118 op: ELSE (23)
        goto L4; // [118] 205
        // SubProg adjust_il pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 53048 op: 159
        // SubProg adjust_il pc: 121 op: STARTLINE (58)

        /** inline.e:217			elsif sub then*/
        // SubProg adjust_il pc: 123 op: IF (20)
        if (_sub_53065 == 0)
        {
            goto L5; // [123] 141
        }
        else{
        }
        // SubProg adjust_il pc: 126 op: STARTLINE (58)

        /** inline.e:218				inline_code[pc+i] = {INLINE_SUB}*/
        // SubProg adjust_il pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 130 op: PLUS (11)
        if (IS_ATOM_INT(_i_53053)) {
            _27101 = _pc_53050 + _i_53053;
        }
        else {
            _27101 = NewDouble((eudouble)_pc_53050 + DBL_PTR(_i_53053)->dbl);
        }
        // SubProg adjust_il pc: 134 op: ASSIGN_SUBS (16)
        RefDS(_27102);
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _67inline_code_52885 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27101))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27101)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27101);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27102;
        DeRef(_1);
        // SubProg adjust_il pc: 138 op: ELSE (23)
        goto L4; // [138] 205
        // SubProg adjust_il pc: 140 op: NOP1 (159)
L5: // addr: 141 pc: 140 sub: 53048 op: 159
        // SubProg adjust_il pc: 141 op: STARTLINE (58)

        /** inline.e:220				if op != STARTLINE and op != COVERAGE_LINE and op != COVERAGE_ROUTINE then*/
        // SubProg adjust_il pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 145 op: NOTEQ (4)
        _27103 = (_op_53051 != 58);
        // SubProg adjust_il pc: 149 op: SC1_AND (141)
        if (_27103 == 0) {
            _27104 = 0;
            goto L6; // [149] 163
        }
        // SubProg adjust_il pc: 153 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 155 op: NOTEQ (4)
        _27105 = (_op_53051 != 210);
        // SubProg adjust_il pc: 159 op: SC2_AND (142)
        _27104 = (_27105 != 0);
        // SubProg adjust_il pc: 162 op: NOP1 (159)
L6: // addr: 163 pc: 162 sub: 53048 op: 159
        // SubProg adjust_il pc: 163 op: SC1_AND_IF (146)
        if (_27104 == 0) {
            goto L7; // [163] 204
        }
        // SubProg adjust_il pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 169 op: NOTEQ (4)
        _27107 = (_op_53051 != 211);
        // SubProg adjust_il pc: 173 op: NOP1 (159)
        // SubProg adjust_il pc: 174 op: IF (20)
        if (_27107 == 0)
        {
            DeRef(_27107);
            _27107 = NOVALUE;
            goto L7; // [174] 204
        }
        else{
            DeRef(_27107);
            _27107 = NOVALUE;
        }
        // SubProg adjust_il pc: 177 op: STARTLINE (58)

        /** inline.e:221					check_target( pc, op )*/
        // SubProg adjust_il pc: 179 op: PROC (27)
        _67check_target(_pc_53050, _op_53051);
        // SubProg adjust_il pc: 183 op: STARTLINE (58)

        /** inline.e:222					if not adjust_symbol( pc + i ) then*/
        // SubProg adjust_il pc: 185 op: PLUS (11)
        if (IS_ATOM_INT(_i_53053)) {
            _27108 = _pc_53050 + _i_53053;
            if ((object)((uintptr_t)_27108 + (uintptr_t)HIGH_BITS) >= 0){
                _27108 = NewDouble((eudouble)_27108);
            }
        }
        else {
            _27108 = NewDouble((eudouble)_pc_53050 + DBL_PTR(_i_53053)->dbl);
        }
        // SubProg adjust_il pc: 189 op: PROC (27)
        _27109 = _67adjust_symbol(_27108);
        _27108 = NOVALUE;
        // SubProg adjust_il pc: 193 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27109)) {
            if (_27109 != 0){
                DeRef(_27109);
                _27109 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        else {
            if (DBL_PTR(_27109)->dbl != 0.0){
                DeRef(_27109);
                _27109 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        DeRef(_27109);
        _27109 = NOVALUE;
        // SubProg adjust_il pc: 196 op: STARTLINE (58)

        /** inline.e:223						return 0*/
        // SubProg adjust_il pc: 198 op: RETURNF (28)
        DeRef(_i_53053);

// Exiting block BLOCK: FOR-

// block var addr_53059

// block var sub_53065

// Exiting block BLOCK: adjust_il

// block var pc_53050

// block var op_53051
        DeRef(_27098);
        _27098 = NOVALUE;
        DeRef(_27094);
        _27094 = NOVALUE;
        DeRef(_27101);
        _27101 = NOVALUE;
        DeRef(_27103);
        _27103 = NOVALUE;
        DeRef(_27087);
        _27087 = NOVALUE;
        DeRef(_27105);
        _27105 = NOVALUE;
        DeRef(_27097);
        _27097 = NOVALUE;
        return 0;
        // SubProg adjust_il pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 53048 op: 159
        // SubProg adjust_il pc: 203 op: NOP1 (159)
L7: // addr: 204 pc: 203 sub: 53048 op: 159
        // SubProg adjust_il pc: 204 op: NOP1 (159)
L4: // addr: 205 pc: 204 sub: 53048 op: 159
        // SubProg adjust_il pc: 205 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var addr_53059

// block var sub_53065
        // SubProg adjust_il pc: 207 op: STARTLINE (58)

        /** inline.e:227		end for*/
        // SubProg adjust_il pc: 209 op: ENDFOR_INT_UP1 (54)
        _0 = _i_53053;
        if (IS_ATOM_INT(_i_53053)) {
            _i_53053 = _i_53053 + 1;
            if ((object)((uintptr_t)_i_53053 +(uintptr_t) HIGH_BITS) >= 0){
                _i_53053 = NewDouble((eudouble)_i_53053);
            }
        }
        else {
            _i_53053 = binary_op_a(PLUS, _i_53053, 1);
        }
        DeRef(_0);
        goto L1; // [209] 30
L2: // addr: 214 pc: 209 sub: 53048 op: 54
        ;
        DeRef(_i_53053);
    }
    // SubProg adjust_il pc: 214 op: STARTLINE (58)

    /** inline.e:228		return 1*/
    // SubProg adjust_il pc: 216 op: RETURNF (28)

// Exiting block BLOCK: adjust_il

// block var pc_53050

// block var op_53051
    DeRef(_27098);
    _27098 = NOVALUE;
    DeRef(_27094);
    _27094 = NOVALUE;
    DeRef(_27101);
    _27101 = NOVALUE;
    DeRef(_27103);
    _27103 = NOVALUE;
    DeRef(_27087);
    _27087 = NOVALUE;
    DeRef(_27105);
    _27105 = NOVALUE;
    DeRef(_27097);
    _27097 = NOVALUE;
    return 1;
    // SubProg adjust_il pc: 220 op: BADRETURNF (43)
    ;
}


object _67is_temp(object _sym_53100)
{
    object _27120 = NOVALUE; // 53118 27120
    object _27119 = NOVALUE; // 53117 27119
    object _27118 = NOVALUE; // 53116 27118
    object _27117 = NOVALUE; // 53115 27117
    object _27116 = NOVALUE; // 53113 27116
    object _27115 = NOVALUE; // 53110 27115
    object _27114 = NOVALUE; // 53108 27114
    object _27113 = NOVALUE; // 53106 27113
    object _27112 = NOVALUE; // 53104 27112
// skipping _27111  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_temp pc: 3 op: STARTLINE (58)

    /** inline.e:232		if sym <= 0 then*/
    // SubProg is_temp pc: 5 op: LESSEQ_IFW (106)
    if (_sym_53100 > 0)
    goto L1; // [5] 16
    // SubProg is_temp pc: 9 op: STARTLINE (58)

    /** inline.e:233			return 0*/
    // SubProg is_temp pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_temp

// block var sym_53100
    return 0;
    // SubProg is_temp pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 53097 op: 159
    // SubProg is_temp pc: 16 op: STARTLINE (58)

    /** inline.e:236		return (SymTab[sym][S_MODE] = M_TEMP) and (not TRANSLATE or equal( NOVALUE, SymTab[sym][S_OBJ]) )*/
    // SubProg is_temp pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27112 = (object)*(((s1_ptr)_2)->base + _sym_53100);
    // SubProg is_temp pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27112);
    _27113 = (object)*(((s1_ptr)_2)->base + 3);
    _27112 = NOVALUE;
    // SubProg is_temp pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 32 op: EQUALS (3)
    if (IS_ATOM_INT(_27113)) {
        _27114 = (_27113 == 3);
    }
    else {
        _27114 = binary_op(EQUALS, _27113, 3);
    }
    _27113 = NOVALUE;
    // SubProg is_temp pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 38 op: NOT (7)
    _27115 = (_36TRANSLATE_16061 == 0);
    // SubProg is_temp pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27116 = (object)*(((s1_ptr)_2)->base + _sym_53100);
    // SubProg is_temp pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27116);
    _27117 = (object)*(((s1_ptr)_2)->base + 1);
    _27116 = NOVALUE;
    // SubProg is_temp pc: 55 op: EQUAL (153)
    if (_36NOVALUE_16291 == _27117)
    _27118 = 1;
    else if (IS_ATOM_INT(_36NOVALUE_16291) && IS_ATOM_INT(_27117))
    _27118 = 0;
    else
    _27118 = (compare(_36NOVALUE_16291, _27117) == 0);
    _27117 = NOVALUE;
    // SubProg is_temp pc: 59 op: OR (9)
    _27119 = (_27115 != 0 || _27118 != 0);
    _27115 = NOVALUE;
    _27118 = NOVALUE;
    // SubProg is_temp pc: 63 op: AND (8)
    if (IS_ATOM_INT(_27114)) {
        _27120 = (_27114 != 0 && _27119 != 0);
    }
    else {
        _27120 = binary_op(AND, _27114, _27119);
    }
    DeRef(_27114);
    _27114 = NOVALUE;
    _27119 = NOVALUE;
    // SubProg is_temp pc: 67 op: RETURNF (28)

// Exiting block BLOCK: is_temp

// block var sym_53100
    return _27120;
    // SubProg is_temp pc: 71 op: BADRETURNF (43)
    ;
}


object _67is_literal(object _sym_53122)
{
    object _mode_53125 = NOVALUE;
    object _27135 = NOVALUE; // 53151 27135
    object _27134 = NOVALUE; // 53149 27134
    object _27133 = NOVALUE; // 53147 27133
    object _27132 = NOVALUE; // 53145 27132
    object _27131 = NOVALUE; // 53144 27131
    object _27130 = NOVALUE; // 53142 27130
// skipping _27129  name type: 0
    object _27128 = NOVALUE; // 53139 27128
    object _27127 = NOVALUE; // 53138 27127
    object _27126 = NOVALUE; // 53136 27126
    object _27125 = NOVALUE; // 53133 27125
    object _27124 = NOVALUE; // 53132 27124
// skipping _27123  name type: 0
    object _27122 = NOVALUE; // 53127 27122
// skipping _27121  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_literal pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_literal pc: 3 op: STARTLINE (58)

    /** inline.e:240		if sym <= 0 then*/
    // SubProg is_literal pc: 5 op: LESSEQ_IFW (106)
    if (_sym_53122 > 0)
    goto L1; // [5] 16
    // SubProg is_literal pc: 9 op: STARTLINE (58)

    /** inline.e:241			return 0*/
    // SubProg is_literal pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53122

// block var mode_53125
    return 0;
    // SubProg is_literal pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 53119 op: 159
    // SubProg is_literal pc: 16 op: STARTLINE (58)

    /** inline.e:244		integer mode = SymTab[sym][S_MODE]*/
    // SubProg is_literal pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27122 = (object)*(((s1_ptr)_2)->base + _sym_53122);
    // SubProg is_literal pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27122);
    _mode_53125 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_53125)){
        _mode_53125 = (object)DBL_PTR(_mode_53125)->dbl;
    }
    _27122 = NOVALUE;
    // SubProg is_literal pc: 32 op: STARTLINE (58)

    /** inline.e:245		if (mode = M_CONSTANT and eu:compare( NOVALUE, SymTab[sym][S_OBJ]) ) */
    // SubProg is_literal pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 36 op: EQUALS (3)
    _27124 = (_mode_53125 == 2);
    // SubProg is_literal pc: 40 op: SC1_AND (141)
    if (_27124 == 0) {
        _27125 = 0;
        goto L2; // [40] 66
    }
    // SubProg is_literal pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27126 = (object)*(((s1_ptr)_2)->base + _sym_53122);
    // SubProg is_literal pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27126);
    _27127 = (object)*(((s1_ptr)_2)->base + 1);
    _27126 = NOVALUE;
    // SubProg is_literal pc: 58 op: COMPARE (76)
    if (IS_ATOM_INT(_36NOVALUE_16291) && IS_ATOM_INT(_27127)){
        _27128 = (_36NOVALUE_16291 < _27127) ? -1 : (_36NOVALUE_16291 > _27127);
    }
    else{
        _27128 = compare(_36NOVALUE_16291, _27127);
    }
    _27127 = NOVALUE;
    // SubProg is_literal pc: 62 op: SC2_AND (142)
    _27125 = (_27128 != 0);
    // SubProg is_literal pc: 65 op: NOP1 (159)
L2: // addr: 66 pc: 65 sub: 53119 op: 159
    // SubProg is_literal pc: 66 op: SC1_OR_IF (147)
    if (_27125 != 0) {
        goto L3; // [66] 117
    }
    // SubProg is_literal pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 72 op: SC1_AND (141)
    if (_36TRANSLATE_16061 == 0) {
        _27130 = 0;
        goto L4; // [72] 86
    }
    // SubProg is_literal pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 78 op: EQUALS (3)
    _27131 = (_mode_53125 == 3);
    // SubProg is_literal pc: 82 op: SC2_AND (142)
    _27130 = (_27131 != 0);
    // SubProg is_literal pc: 85 op: NOP1 (159)
L4: // addr: 86 pc: 85 sub: 53119 op: 159
    // SubProg is_literal pc: 86 op: SC1_AND (141)
    if (_27130 == 0) {
        DeRef(_27132);
        _27132 = 0;
        goto L5; // [86] 112
    }
    // SubProg is_literal pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 92 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27133 = (object)*(((s1_ptr)_2)->base + _sym_53122);
    // SubProg is_literal pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27133);
    _27134 = (object)*(((s1_ptr)_2)->base + 1);
    _27133 = NOVALUE;
    // SubProg is_literal pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 104 op: COMPARE (76)
    if (IS_ATOM_INT(_27134) && IS_ATOM_INT(_36NOVALUE_16291)){
        _27135 = (_27134 < _36NOVALUE_16291) ? -1 : (_27134 > _36NOVALUE_16291);
    }
    else{
        _27135 = compare(_27134, _36NOVALUE_16291);
    }
    _27134 = NOVALUE;
    // SubProg is_literal pc: 108 op: SC2_AND (142)
    _27132 = (_27135 != 0);
    // SubProg is_literal pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 53119 op: 159
    // SubProg is_literal pc: 112 op: NOP1 (159)
    // SubProg is_literal pc: 113 op: IF (20)
    if (_27132 == 0)
    {
        _27132 = NOVALUE;
        goto L6; // [113] 126
    }
    else{
        _27132 = NOVALUE;
    }
    // SubProg is_literal pc: 116 op: NOP1 (159)
L3: // addr: 117 pc: 116 sub: 53119 op: 159
    // SubProg is_literal pc: 117 op: STARTLINE (58)

    /** inline.e:247			return 1*/
    // SubProg is_literal pc: 119 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53122

// block var mode_53125
    DeRef(_27131);
    _27131 = NOVALUE;
    DeRef(_27124);
    _27124 = NOVALUE;
    return 1;
    // SubProg is_literal pc: 123 op: ELSE (23)
    goto L7; // [123] 133
    // SubProg is_literal pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 53119 op: 159
    // SubProg is_literal pc: 126 op: STARTLINE (58)

    /** inline.e:249			return 0*/
    // SubProg is_literal pc: 128 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53122

// block var mode_53125
    DeRef(_27131);
    _27131 = NOVALUE;
    DeRef(_27124);
    _27124 = NOVALUE;
    return 0;
    // SubProg is_literal pc: 132 op: NOP1 (159)
L7: // addr: 133 pc: 132 sub: 53119 op: 159
    // SubProg is_literal pc: 133 op: BADRETURNF (43)
    ;
}


object _67returnf(object _pc_53172)
{
    object _retsym_53174 = NOVALUE;
    object _code_53207 = NOVALUE;
    object _ret_pc_53208 = NOVALUE;
    object _code_53253 = NOVALUE;
    object _ret_pc_53267 = NOVALUE;
    object _27208 = NOVALUE; // 53274 27208
    object _27207 = NOVALUE; // 53273 27207
// skipping _27206  name type: 0
    object _27205 = NOVALUE; // 53271 27205
// skipping _27204  name type: 0
    object _27203 = NOVALUE; // 53268 27203
    object _27202 = NOVALUE; // 53266 27202
// skipping _27201  name type: 0
    object _27200 = NOVALUE; // 53264 27200
    object _27199 = NOVALUE; // 53263 27199
// skipping _27198  name type: 0
    object _27197 = NOVALUE; // 53260 27197
    object _27196 = NOVALUE; // 53259 27196
    object _27195 = NOVALUE; // 53257 27195
// skipping _27194  name type: 0
    object _27193 = NOVALUE; // 53251 27193
    object _27192 = NOVALUE; // 53250 27192
// skipping _27191  name type: 0
    object _27190 = NOVALUE; // 53248 27190
// skipping _27189  name type: 0
    object _27188 = NOVALUE; // 53245 27188
    object _27187 = NOVALUE; // 53244 27187
// skipping _27186  name type: 0
    object _27185 = NOVALUE; // 53242 27185
    object _27184 = NOVALUE; // 53241 27184
// skipping _27183  name type: 0
    object _27182 = NOVALUE; // 53238 27182
    object _27181 = NOVALUE; // 53237 27181
    object _27180 = NOVALUE; // 53235 27180
// skipping _27179  name type: 0
    object _27178 = NOVALUE; // 53232 27178
    object _27177 = NOVALUE; // 53229 27177
    object _27176 = NOVALUE; // 53228 27176
    object _27175 = NOVALUE; // 53226 27175
    object _27174 = NOVALUE; // 53225 27174
    object _27172 = NOVALUE; // 53222 27172
    object _27171 = NOVALUE; // 53220 27171
    object _27170 = NOVALUE; // 53219 27170
    object _27169 = NOVALUE; // 53218 27169
// skipping _27168  name type: 0
    object _27167 = NOVALUE; // 53215 27167
// skipping _27166  name type: 0
    object _27165 = NOVALUE; // 53212 27165
    object _27164 = NOVALUE; // 53211 27164
    object _27163 = NOVALUE; // 53210 27163
    object _27162 = NOVALUE; // 53206 27162
    object _27161 = NOVALUE; // 53204 27161
    object _27160 = NOVALUE; // 53202 27160
    object _27159 = NOVALUE; // 53200 27159
    object _27158 = NOVALUE; // 53199 27158
    object _27157 = NOVALUE; // 53198 27157
// skipping _27156  name type: 0
    object _27155 = NOVALUE; // 53196 27155
    object _27154 = NOVALUE; // 53194 27154
    object _27153 = NOVALUE; // 53193 27153
// skipping _27152  name type: 0
    object _27151 = NOVALUE; // 53190 27151
    object _27150 = NOVALUE; // 53188 27150
    object _27149 = NOVALUE; // 53184 27149
    object _27148 = NOVALUE; // 53181 27148
    object _27147 = NOVALUE; // 53179 27147
    object _27146 = NOVALUE; // 53178 27146
// skipping _27145  name type: 0
    object _27144 = NOVALUE; // 53175 27144
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg returnf pc: 1 op: INTEGER_CHECK (96)
    // SubProg returnf pc: 3 op: STARTLINE (58)

    /** inline.e:259		symtab_index retsym = inline_code[pc+3]*/
    // SubProg returnf pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 7 op: PLUS (11)
    _27144 = _pc_53172 + 3;
    // SubProg returnf pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _retsym_53174 = (object)*(((s1_ptr)_2)->base + _27144);
    if (!IS_ATOM_INT(_retsym_53174)){
        _retsym_53174 = (object)DBL_PTR(_retsym_53174)->dbl;
    }
    // SubProg returnf pc: 17 op: STARTLINE (58)

    /** inline.e:260		if equal( inline_code[$], BADRETURNF ) then*/
    // SubProg returnf pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27146 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27146 = 1;
    }
    // SubProg returnf pc: 24 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27147 = (object)*(((s1_ptr)_2)->base + _27146);
    // SubProg returnf pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 30 op: EQUAL (153)
    if (_27147 == 43)
    _27148 = 1;
    else if (IS_ATOM_INT(_27147) && IS_ATOM_INT(43))
    _27148 = 0;
    else
    _27148 = (compare(_27147, 43) == 0);
    _27147 = NOVALUE;
    // SubProg returnf pc: 34 op: IF (20)
    if (_27148 == 0)
    {
        _27148 = NOVALUE;
        goto L1; // [34] 102
    }
    else{
        _27148 = NOVALUE;
    }
    // SubProg returnf pc: 37 op: STARTLINE (58)

    /** inline.e:261			if TRANSLATE then*/
    // SubProg returnf pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 41 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L2; // [41] 60
    }
    else{
    }
    // SubProg returnf pc: 44 op: STARTLINE (58)

    /** inline.e:262				inline_code[$] = NOP1*/
    // SubProg returnf pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 48 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27149 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27149 = 1;
    }
    // SubProg returnf pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 53 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27149);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg returnf pc: 57 op: ELSE (23)
    goto L3; // [57] 101
    // SubProg returnf pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 53170 op: 159
    // SubProg returnf pc: 60 op: STARTLINE (58)

    /** inline.e:263			elsif SymTab[inline_sub][S_TOKEN] = PROC then*/
    // SubProg returnf pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 66 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27150 = (object)*(((s1_ptr)_2)->base + _67inline_sub_52899);
    // SubProg returnf pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 72 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27150);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _27151 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _27151 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _27150 = NOVALUE;
    // SubProg returnf pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 78 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27151, 27)){
        _27151 = NOVALUE;
        goto L4; // [78] 100
    }
    _27151 = NOVALUE;
    // SubProg returnf pc: 82 op: STARTLINE (58)

    /** inline.e:264				replace_code( {}, length(inline_code), length(inline_code) )*/
    // SubProg returnf pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27153 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27153 = 1;
    }
    // SubProg returnf pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27154 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27154 = 1;
    }
    // SubProg returnf pc: 94 op: PROC (27)
    RefDS(_21933);
    _67replace_code(_21933, _27153, _27154);
    _27153 = NOVALUE;
    _27154 = NOVALUE;
    // SubProg returnf pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 53170 op: 159
    // SubProg returnf pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 53170 op: 159
    // SubProg returnf pc: 101 op: NOP1 (159)
L1: // addr: 102 pc: 101 sub: 53170 op: 159
    // SubProg returnf pc: 102 op: STARTLINE (58)

    /** inline.e:270		if is_temp( retsym ) */
    // SubProg returnf pc: 104 op: PROC (27)
    _27155 = _67is_temp(_retsym_53174);
    // SubProg returnf pc: 108 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_27155)) {
        if (_27155 != 0) {
            goto L5; // [108] 150
        }
    }
    else {
        if (DBL_PTR(_27155)->dbl != 0.0) {
            goto L5; // [108] 150
        }
    }
    // SubProg returnf pc: 112 op: PROC (27)
    _27157 = _67is_literal(_retsym_53174);
    // SubProg returnf pc: 116 op: NOT (7)
    if (IS_ATOM_INT(_27157)) {
        _27158 = (_27157 == 0);
    }
    else {
        _27158 = unary_op(NOT, _27157);
    }
    DeRef(_27157);
    _27157 = NOVALUE;
    // SubProg returnf pc: 119 op: SC1_AND (141)
    if (IS_ATOM_INT(_27158)) {
        if (_27158 == 0) {
            DeRef(_27159);
            _27159 = 0;
            goto L6; // [119] 145
        }
    }
    else {
        if (DBL_PTR(_27158)->dbl == 0.0) {
            DeRef(_27159);
            _27159 = 0;
            goto L6; // [119] 145
        }
    }
    // SubProg returnf pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 125 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27160 = (object)*(((s1_ptr)_2)->base + _retsym_53174);
    // SubProg returnf pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 131 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27160);
    _27161 = (object)*(((s1_ptr)_2)->base + 4);
    _27160 = NOVALUE;
    // SubProg returnf pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 137 op: LESSEQ (5)
    if (IS_ATOM_INT(_27161)) {
        _27162 = (_27161 <= 3);
    }
    else {
        _27162 = binary_op(LESSEQ, _27161, 3);
    }
    _27161 = NOVALUE;
    // SubProg returnf pc: 141 op: SC2_AND (142)
    DeRef(_27159);
    if (IS_ATOM_INT(_27162))
    _27159 = (_27162 != 0);
    else
    _27159 = DBL_PTR(_27162)->dbl != 0.0;
    // SubProg returnf pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 53170 op: 159
    // SubProg returnf pc: 145 op: NOP1 (159)
    // SubProg returnf pc: 146 op: IF (20)
    if (_27159 == 0)
    {
        _27159 = NOVALUE;
        goto L7; // [146] 393
    }
    else{
        _27159 = NOVALUE;
    }
    // SubProg returnf pc: 149 op: NOP1 (159)
L5: // addr: 150 pc: 149 sub: 53170 op: 159
    // SubProg returnf pc: 150 op: STARTLINE (58)

    /** inline.e:272			sequence code = {}*/
    // SubProg returnf pc: 152 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_code_53207);
    _code_53207 = _21933;
    // SubProg returnf pc: 155 op: SEQUENCE_CHECK (97)
    // SubProg returnf pc: 157 op: STARTLINE (58)

    /** inline.e:274			integer ret_pc = 0*/
    // SubProg returnf pc: 159 op: ASSIGN_I (113)
    _ret_pc_53208 = 0;
    // SubProg returnf pc: 162 op: STARTLINE (58)

    /** inline.e:276			if not (find( retsym, inline_params ) or find( retsym, proc_vars )) then*/
    // SubProg returnf pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 166 op: FIND_FROM (176)
    _27163 = find_from(_retsym_53174, _67inline_params_52890, 1);
    // SubProg returnf pc: 171 op: SC1_OR (143)
    if (_27163 != 0) {
        DeRef(_27164);
        _27164 = 1;
        goto L8; // [171] 186
    }
    // SubProg returnf pc: 175 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 177 op: FIND_FROM (176)
    _27165 = find_from(_retsym_53174, _67proc_vars_52886, 1);
    // SubProg returnf pc: 182 op: SC2_OR (144)
    _27164 = (_27165 != 0);
    // SubProg returnf pc: 185 op: NOP1 (159)
L8: // addr: 186 pc: 185 sub: 53170 op: 159
    // SubProg returnf pc: 186 op: NOT_IFW (108)
    if (_27164 != 0)
    goto L9; // [186] 206
    _27164 = NOVALUE;
    // SubProg returnf pc: 189 op: STARTLINE (58)

    /** inline.e:277				ret_pc = rfind( generic_symbol( retsym ), inline_code, pc )*/
    // SubProg returnf pc: 191 op: PROC (27)
    _27167 = _67generic_symbol(_retsym_53174);
    // SubProg returnf pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 197 op: PROC (27)
    RefDS(_67inline_code_52885);
    _ret_pc_53208 = _19rfind(_27167, _67inline_code_52885, _pc_53172);
    _27167 = NOVALUE;
    // SubProg returnf pc: 203 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ret_pc_53208)) {
        _1 = (object)(DBL_PTR(_ret_pc_53208)->dbl);
        DeRefDS(_ret_pc_53208);
        _ret_pc_53208 = _1;
    }
    // SubProg returnf pc: 205 op: NOP1 (159)
L9: // addr: 206 pc: 205 sub: 53170 op: 159
    // SubProg returnf pc: 206 op: STARTLINE (58)

    /** inline.e:281			if ret_pc and eu:compare( inline_code[ret_pc-1], PRIVATE_INIT_CHECK ) then*/
    // SubProg returnf pc: 208 op: SC1_AND_IF (146)
    if (_ret_pc_53208 == 0) {
        goto LA; // [208] 277
    }
    // SubProg returnf pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 214 op: MINUS (10)
    _27170 = _ret_pc_53208 - 1;
    // SubProg returnf pc: 218 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27171 = (object)*(((s1_ptr)_2)->base + _27170);
    // SubProg returnf pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 224 op: COMPARE (76)
    if (IS_ATOM_INT(_27171) && IS_ATOM_INT(30)){
        _27172 = (_27171 < 30) ? -1 : (_27171 > 30);
    }
    else{
        _27172 = compare(_27171, 30);
    }
    _27171 = NOVALUE;
    // SubProg returnf pc: 228 op: NOP1 (159)
    // SubProg returnf pc: 229 op: IF (20)
    if (_27172 == 0)
    {
        _27172 = NOVALUE;
        goto LA; // [229] 277
    }
    else{
        _27172 = NOVALUE;
    }
    // SubProg returnf pc: 232 op: STARTLINE (58)

    /** inline.e:282				inline_code[ret_pc] = {INLINE_TARGET}*/
    // SubProg returnf pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 236 op: ASSIGN_SUBS (16)
    RefDS(_27173);
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ret_pc_53208);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27173;
    DeRef(_1);
    // SubProg returnf pc: 240 op: STARTLINE (58)

    /** inline.e:284				if equal( inline_code[ret_pc-1], REF_TEMP ) then*/
    // SubProg returnf pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 244 op: MINUS (10)
    _27174 = _ret_pc_53208 - 1;
    // SubProg returnf pc: 248 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27175 = (object)*(((s1_ptr)_2)->base + _27174);
    // SubProg returnf pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 254 op: EQUAL (153)
    if (_27175 == 207)
    _27176 = 1;
    else if (IS_ATOM_INT(_27175) && IS_ATOM_INT(207))
    _27176 = 0;
    else
    _27176 = (compare(_27175, 207) == 0);
    _27175 = NOVALUE;
    // SubProg returnf pc: 258 op: IF (20)
    if (_27176 == 0)
    {
        _27176 = NOVALUE;
        goto LB; // [258] 292
    }
    else{
        _27176 = NOVALUE;
    }
    // SubProg returnf pc: 261 op: STARTLINE (58)

    /** inline.e:287					inline_code[ret_pc-2] = {INLINE_TARGET}*/
    // SubProg returnf pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 265 op: MINUS (10)
    _27177 = _ret_pc_53208 - 2;
    // SubProg returnf pc: 269 op: ASSIGN_SUBS (16)
    RefDS(_27173);
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27177);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27173;
    DeRef(_1);
    // SubProg returnf pc: 273 op: NOP1 (159)
    // SubProg returnf pc: 274 op: ELSE (23)
    goto LB; // [274] 292
    // SubProg returnf pc: 276 op: NOP1 (159)
LA: // addr: 277 pc: 276 sub: 53170 op: 159
    // SubProg returnf pc: 277 op: STARTLINE (58)

    /** inline.e:290				code = {ASSIGN, generic_symbol( retsym ), {INLINE_TARGET}}*/
    // SubProg returnf pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 281 op: PROC (27)
    _27178 = _67generic_symbol(_retsym_53174);
    // SubProg returnf pc: 285 op: RIGHT_BRACE_N (31)
    _0 = _code_53207;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _27178;
    RefDS(_27173);
    ((intptr_t*)_2)[3] = _27173;
    _code_53207 = MAKE_SEQ(_1);
    DeRef(_0);
    _27178 = NOVALUE;
    // SubProg returnf pc: 291 op: NOP1 (159)
LB: // addr: 292 pc: 291 sub: 53170 op: 159
    // SubProg returnf pc: 292 op: STARTLINE (58)

    /** inline.e:293			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    // SubProg returnf pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 296 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27180 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27180 = 1;
    }
    // SubProg returnf pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 301 op: PLUS (11)
    _27181 = 3 + _36TRANSLATE_16061;
    // SubProg returnf pc: 305 op: MINUS (10)
    _27182 = _27180 - _27181;
    _27180 = NOVALUE;
    _27181 = NOVALUE;
    // SubProg returnf pc: 309 op: NOTEQ_IFW (105)
    if (_pc_53172 == _27182)
    goto LC; // [309] 330
    // SubProg returnf pc: 313 op: STARTLINE (58)

    /** inline.e:294				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    // SubProg returnf pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 317 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27184 = MAKE_SEQ(_1);
    // SubProg returnf pc: 321 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27184;
    _27185 = MAKE_SEQ(_1);
    _27184 = NOVALUE;
    // SubProg returnf pc: 325 op: CONCAT (15)
    Concat((object_ptr)&_code_53207, _code_53207, _27185);
    DeRefDS(_27185);
    _27185 = NOVALUE;
    // SubProg returnf pc: 329 op: NOP1 (159)
LC: // addr: 330 pc: 329 sub: 53170 op: 159
    // SubProg returnf pc: 330 op: STARTLINE (58)

    /** inline.e:298			replace_code( code, pc, pc + 3 )*/
    // SubProg returnf pc: 332 op: PLUS (11)
    _27187 = _pc_53172 + 3;
    if ((object)((uintptr_t)_27187 + (uintptr_t)HIGH_BITS) >= 0){
        _27187 = NewDouble((eudouble)_27187);
    }
    // SubProg returnf pc: 336 op: PROC (27)
    RefDS(_code_53207);
    _67replace_code(_code_53207, _pc_53172, _27187);
    _27187 = NOVALUE;
    // SubProg returnf pc: 341 op: STARTLINE (58)

    /** inline.e:299			ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    // SubProg returnf pc: 343 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27188 = MAKE_SEQ(_1);
    // SubProg returnf pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 349 op: FIND_FROM (176)
    _ret_pc_53208 = find_from(_27188, _67inline_code_52885, _pc_53172);
    DeRefDS(_27188);
    _27188 = NOVALUE;
    // SubProg returnf pc: 354 op: STARTLINE (58)

    /** inline.e:300			if ret_pc then*/
    // SubProg returnf pc: 356 op: IF (20)
    if (_ret_pc_53208 == 0)
    {
        goto LD; // [356] 382
    }
    else{
    }
    // SubProg returnf pc: 359 op: STARTLINE (58)

    /** inline.e:301				inline_code[ret_pc][2] = length(inline_code) + 1*/
    // SubProg returnf pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 363 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53208 + ((s1_ptr)_2)->base);
    // SubProg returnf pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 370 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27192 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27192 = 1;
    }
    // SubProg returnf pc: 373 op: PLUS1 (93)
    _27193 = _27192 + 1;
    _27192 = NOVALUE;
    // SubProg returnf pc: 377 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27193;
    if( _1 != _27193 ){
        DeRef(_1);
    }
    _27193 = NOVALUE;
    _27190 = NOVALUE;
    // SubProg returnf pc: 381 op: NOP1 (159)
LD: // addr: 382 pc: 381 sub: 53170 op: 159
    // SubProg returnf pc: 382 op: STARTLINE (58)

    /** inline.e:303			return 1*/
    // SubProg returnf pc: 384 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var code_53207
    DeRef(_code_53207);

// block var ret_pc_53208

// Exiting block BLOCK: returnf

// block var pc_53172

// block var retsym_53174
    DeRef(_27158);
    _27158 = NOVALUE;
    DeRef(_27155);
    _27155 = NOVALUE;
    DeRef(_27144);
    _27144 = NOVALUE;
    DeRef(_27182);
    _27182 = NOVALUE;
    DeRef(_27174);
    _27174 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    DeRef(_27162);
    _27162 = NOVALUE;
    DeRef(_27170);
    _27170 = NOVALUE;
    return 1;
    // SubProg returnf pc: 388 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53207

// block var ret_pc_53208
    // SubProg returnf pc: 390 op: ELSE (23)
    goto LE; // [390] 502
    // SubProg returnf pc: 392 op: NOP1 (159)
L7: // addr: 393 pc: 392 sub: 53170 op: 159
    // SubProg returnf pc: 393 op: STARTLINE (58)

    /** inline.e:306			sequence code = {ASSIGN, retsym, {INLINE_TARGET}}*/
    // SubProg returnf pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 397 op: RIGHT_BRACE_N (31)
    _0 = _code_53253;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _retsym_53174;
    RefDS(_27173);
    ((intptr_t*)_2)[3] = _27173;
    _code_53253 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg returnf pc: 403 op: STARTLINE (58)

    /** inline.e:307			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    // SubProg returnf pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 407 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27195 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27195 = 1;
    }
    // SubProg returnf pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 412 op: PLUS (11)
    _27196 = 3 + _36TRANSLATE_16061;
    // SubProg returnf pc: 416 op: MINUS (10)
    _27197 = _27195 - _27196;
    _27195 = NOVALUE;
    _27196 = NOVALUE;
    // SubProg returnf pc: 420 op: NOTEQ_IFW (105)
    if (_pc_53172 == _27197)
    goto LF; // [420] 441
    // SubProg returnf pc: 424 op: STARTLINE (58)

    /** inline.e:308				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    // SubProg returnf pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 428 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27199 = MAKE_SEQ(_1);
    // SubProg returnf pc: 432 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27199;
    _27200 = MAKE_SEQ(_1);
    _27199 = NOVALUE;
    // SubProg returnf pc: 436 op: CONCAT (15)
    Concat((object_ptr)&_code_53253, _code_53253, _27200);
    DeRefDS(_27200);
    _27200 = NOVALUE;
    // SubProg returnf pc: 440 op: NOP1 (159)
LF: // addr: 441 pc: 440 sub: 53170 op: 159
    // SubProg returnf pc: 441 op: STARTLINE (58)

    /** inline.e:312			replace_code( code, pc, pc + 3 )*/
    // SubProg returnf pc: 443 op: PLUS (11)
    _27202 = _pc_53172 + 3;
    if ((object)((uintptr_t)_27202 + (uintptr_t)HIGH_BITS) >= 0){
        _27202 = NewDouble((eudouble)_27202);
    }
    // SubProg returnf pc: 447 op: PROC (27)
    RefDS(_code_53253);
    _67replace_code(_code_53253, _pc_53172, _27202);
    _27202 = NOVALUE;
    // SubProg returnf pc: 452 op: STARTLINE (58)

    /** inline.e:313			integer ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    // SubProg returnf pc: 454 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27203 = MAKE_SEQ(_1);
    // SubProg returnf pc: 458 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 460 op: FIND_FROM (176)
    _ret_pc_53267 = find_from(_27203, _67inline_code_52885, _pc_53172);
    DeRefDS(_27203);
    _27203 = NOVALUE;
    // SubProg returnf pc: 465 op: STARTLINE (58)

    /** inline.e:314			if ret_pc then*/
    // SubProg returnf pc: 467 op: IF (20)
    if (_ret_pc_53267 == 0)
    {
        goto L10; // [467] 493
    }
    else{
    }
    // SubProg returnf pc: 470 op: STARTLINE (58)

    /** inline.e:315				inline_code[ret_pc][2] = length(inline_code) + 1*/
    // SubProg returnf pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 474 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53267 + ((s1_ptr)_2)->base);
    // SubProg returnf pc: 479 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 481 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27207 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27207 = 1;
    }
    // SubProg returnf pc: 484 op: PLUS1 (93)
    _27208 = _27207 + 1;
    _27207 = NOVALUE;
    // SubProg returnf pc: 488 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27208;
    if( _1 != _27208 ){
        DeRef(_1);
    }
    _27208 = NOVALUE;
    _27205 = NOVALUE;
    // SubProg returnf pc: 492 op: NOP1 (159)
L10: // addr: 493 pc: 492 sub: 53170 op: 159
    // SubProg returnf pc: 493 op: STARTLINE (58)

    /** inline.e:317			return 1*/
    // SubProg returnf pc: 495 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var code_53253
    DeRef(_code_53253);

// block var ret_pc_53267

// Exiting block BLOCK: returnf

// block var pc_53172

// block var retsym_53174
    DeRef(_27158);
    _27158 = NOVALUE;
    DeRef(_27155);
    _27155 = NOVALUE;
    DeRef(_27144);
    _27144 = NOVALUE;
    DeRef(_27182);
    _27182 = NOVALUE;
    DeRef(_27174);
    _27174 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    DeRef(_27162);
    _27162 = NOVALUE;
    DeRef(_27170);
    _27170 = NOVALUE;
    DeRef(_27197);
    _27197 = NOVALUE;
    return 1;
    // SubProg returnf pc: 499 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53253

// block var ret_pc_53267
    // SubProg returnf pc: 501 op: NOP1 (159)
LE: // addr: 502 pc: 501 sub: 53170 op: 159
    // SubProg returnf pc: 502 op: STARTLINE (58)

    /** inline.e:319		return 0*/
    // SubProg returnf pc: 504 op: RETURNF (28)

// Exiting block BLOCK: returnf

// block var pc_53172

// block var retsym_53174
    DeRef(_27158);
    _27158 = NOVALUE;
    DeRef(_27155);
    _27155 = NOVALUE;
    DeRef(_27144);
    _27144 = NOVALUE;
    DeRef(_27182);
    _27182 = NOVALUE;
    DeRef(_27174);
    _27174 = NOVALUE;
    DeRef(_27177);
    _27177 = NOVALUE;
    DeRef(_27162);
    _27162 = NOVALUE;
    DeRef(_27170);
    _27170 = NOVALUE;
    DeRef(_27197);
    _27197 = NOVALUE;
    return 0;
    // SubProg returnf pc: 508 op: BADRETURNF (43)
    ;
}


object _67inline_op(object _pc_53277)
{
    object _op_53278 = NOVALUE;
    object _code_53283 = NOVALUE;
    object _stlen_53316 = NOVALUE;
    object _file_53321 = NOVALUE;
    object _ok_53326 = NOVALUE;
    object _original_table_53349 = NOVALUE;
    object _jump_table_53353 = NOVALUE;
// skipping _27270  name type: 0
    object _27269 = NOVALUE; // 53392 27269
    object _27268 = NOVALUE; // 53390 27268
    object _27267 = NOVALUE; // 53389 27267
    object _27266 = NOVALUE; // 53388 27266
    object _27265 = NOVALUE; // 53387 27265
    object _27264 = NOVALUE; // 53386 27264
    object _27263 = NOVALUE; // 53383 27263
    object _27262 = NOVALUE; // 53382 27262
    object _27261 = NOVALUE; // 53381 27261
    object _27260 = NOVALUE; // 53380 27260
    object _27259 = NOVALUE; // 53379 27259
    object _27258 = NOVALUE; // 53374 27258
    object _27255 = NOVALUE; // 53368 27255
    object _27254 = NOVALUE; // 53367 27254
    object _27253 = NOVALUE; // 53366 27253
    object _27252 = NOVALUE; // 53364 27252
// skipping _27251  name type: 0
    object _27250 = NOVALUE; // 53360 27250
// skipping _27249  name type: 0
    object _27248 = NOVALUE; // 53357 27248
    object _27247 = NOVALUE; // 53356 27247
// skipping _27246  name type: 0
    object _27245 = NOVALUE; // 53350 27245
// skipping _27242  name type: 0
    object _27241 = NOVALUE; // 53338 27241
    object _27240 = NOVALUE; // 53336 27240
    object _27239 = NOVALUE; // 53333 27239
    object _27238 = NOVALUE; // 53331 27238
    object _27237 = NOVALUE; // 53330 27237
    object _27236 = NOVALUE; // 53328 27236
// skipping _27235  name type: 0
// skipping _27234  name type: 0
    object _27233 = NOVALUE; // 53324 27233
    object _27232 = NOVALUE; // 53322 27232
// skipping _27231  name type: 0
    object _27230 = NOVALUE; // 53319 27230
    object _27229 = NOVALUE; // 53317 27229
// skipping _27228  name type: 0
    object _27227 = NOVALUE; // 53312 27227
// skipping _27226  name type: 0
    object _27225 = NOVALUE; // 53308 27225
    object _27224 = NOVALUE; // 53306 27224
    object _27223 = NOVALUE; // 53305 27223
    object _27222 = NOVALUE; // 53303 27222
    object _27221 = NOVALUE; // 53302 27221
    object _27220 = NOVALUE; // 53301 27220
    object _27219 = NOVALUE; // 53297 27219
// skipping _27218  name type: 0
    object _27217 = NOVALUE; // 53293 27217
    object _27216 = NOVALUE; // 53292 27216
    object _27215 = NOVALUE; // 53291 27215
// skipping _27214  name type: 0
    object _27213 = NOVALUE; // 53288 27213
    object _27212 = NOVALUE; // 53286 27212
    object _27211 = NOVALUE; // 53285 27211
// skipping _27210  name type: 0
// skipping _27209  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg inline_op pc: 1 op: INTEGER_CHECK (96)
    // SubProg inline_op pc: 3 op: STARTLINE (58)

    /** inline.e:324		integer op = inline_code[pc]*/
    // SubProg inline_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _op_53278 = (object)*(((s1_ptr)_2)->base + _pc_53277);
    if (!IS_ATOM_INT(_op_53278))
    _op_53278 = (object)DBL_PTR(_op_53278)->dbl;
    // SubProg inline_op pc: 11 op: STARTLINE (58)

    /** inline.e:326		if op = RETURNP then*/
    // SubProg inline_op pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 15 op: EQUALS_IFW (104)
    if (_op_53278 != 29)
    goto L1; // [15] 150
    // SubProg inline_op pc: 19 op: STARTLINE (58)

    /** inline.e:333			sequence code = ""*/
    // SubProg inline_op pc: 21 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_code_53283);
    _code_53283 = _21933;
    // SubProg inline_op pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg inline_op pc: 26 op: STARTLINE (58)

    /** inline.e:335			if pc != length( inline_code ) - 1 - TRANSLATE then*/
    // SubProg inline_op pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27211 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27211 = 1;
    }
    // SubProg inline_op pc: 33 op: MINUS (10)
    _27212 = _27211 - 1;
    _27211 = NOVALUE;
    // SubProg inline_op pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 39 op: MINUS (10)
    _27213 = _27212 - _36TRANSLATE_16061;
    _27212 = NOVALUE;
    // SubProg inline_op pc: 43 op: NOTEQ_IFW (105)
    if (_pc_53277 == _27213)
    goto L2; // [43] 92
    // SubProg inline_op pc: 47 op: STARTLINE (58)

    /** inline.e:336				code = { ELSE, {INLINE_ADDR, length( inline_code ) + 1 }}*/
    // SubProg inline_op pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27215 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27215 = 1;
    }
    // SubProg inline_op pc: 56 op: PLUS1 (93)
    _27216 = _27215 + 1;
    _27215 = NOVALUE;
    // SubProg inline_op pc: 60 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = _27216;
    _27217 = MAKE_SEQ(_1);
    _27216 = NOVALUE;
    // SubProg inline_op pc: 64 op: RIGHT_BRACE_2 (85)
    DeRefDS(_code_53283);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27217;
    _code_53283 = MAKE_SEQ(_1);
    _27217 = NOVALUE;
    // SubProg inline_op pc: 68 op: STARTLINE (58)

    /** inline.e:337				if TRANSLATE then*/
    // SubProg inline_op pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 72 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L3; // [72] 134
    }
    else{
    }
    // SubProg inline_op pc: 75 op: STARTLINE (58)

    /** inline.e:338					inline_code[$] = NOP1*/
    // SubProg inline_op pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27219 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27219 = 1;
    }
    // SubProg inline_op pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 84 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27219);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg inline_op pc: 88 op: NOP1 (159)
    // SubProg inline_op pc: 89 op: ELSE (23)
    goto L3; // [89] 134
    // SubProg inline_op pc: 91 op: NOP1 (159)
L2: // addr: 92 pc: 91 sub: 53275 op: 159
    // SubProg inline_op pc: 92 op: STARTLINE (58)

    /** inline.e:341			elsif TRANSLATE and inline_code[$] = BADRETURNF then*/
    // SubProg inline_op pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 96 op: SC1_AND_IF (146)
    if (_36TRANSLATE_16061 == 0) {
        goto L4; // [96] 133
    }
    // SubProg inline_op pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 102 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27221 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27221 = 1;
    }
    // SubProg inline_op pc: 105 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27222 = (object)*(((s1_ptr)_2)->base + _27221);
    // SubProg inline_op pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 111 op: EQUALS (3)
    if (IS_ATOM_INT(_27222)) {
        _27223 = (_27222 == 43);
    }
    else {
        _27223 = binary_op(EQUALS, _27222, 43);
    }
    _27222 = NOVALUE;
    // SubProg inline_op pc: 115 op: NOP1 (159)
    // SubProg inline_op pc: 116 op: IF (20)
    if (_27223 == 0) {
        DeRef(_27223);
        _27223 = NOVALUE;
        goto L4; // [116] 133
    }
    else {
        if (!IS_ATOM_INT(_27223) && DBL_PTR(_27223)->dbl == 0.0){
            DeRef(_27223);
            _27223 = NOVALUE;
            goto L4; // [116] 133
        }
        DeRef(_27223);
        _27223 = NOVALUE;
    }
    DeRef(_27223);
    _27223 = NOVALUE;
    // SubProg inline_op pc: 119 op: STARTLINE (58)

    /** inline.e:342				inline_code[$] = NOP1*/
    // SubProg inline_op pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 123 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27224 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27224 = 1;
    }
    // SubProg inline_op pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 128 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27224);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg inline_op pc: 132 op: NOP1 (159)
L4: // addr: 133 pc: 132 sub: 53275 op: 159
    // SubProg inline_op pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 53275 op: 159
    // SubProg inline_op pc: 134 op: STARTLINE (58)

    /** inline.e:344			replace_code( code, pc, pc + 2 )*/
    // SubProg inline_op pc: 136 op: PLUS (11)
    _27225 = _pc_53277 + 2;
    if ((object)((uintptr_t)_27225 + (uintptr_t)HIGH_BITS) >= 0){
        _27225 = NewDouble((eudouble)_27225);
    }
    // SubProg inline_op pc: 140 op: PROC (27)
    RefDS(_code_53283);
    _67replace_code(_code_53283, _pc_53277, _27225);
    _27225 = NOVALUE;
    // SubProg inline_op pc: 145 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53283
    DeRefDS(_code_53283);
    _code_53283 = NOVALUE;
    // SubProg inline_op pc: 147 op: ELSE (23)
    goto L5; // [147] 526
    // SubProg inline_op pc: 149 op: NOP1 (159)
L1: // addr: 150 pc: 149 sub: 53275 op: 159
    // SubProg inline_op pc: 150 op: STARTLINE (58)

    /** inline.e:346		elsif op = RETURNF then*/
    // SubProg inline_op pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 154 op: EQUALS_IFW (104)
    if (_op_53278 != 28)
    goto L6; // [154] 171
    // SubProg inline_op pc: 158 op: STARTLINE (58)

    /** inline.e:347			return returnf( pc )*/
    // SubProg inline_op pc: 160 op: PROC (27)
    _27227 = _67returnf(_pc_53277);
    // SubProg inline_op pc: 164 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53277

// block var op_53278
    DeRef(_27213);
    _27213 = NOVALUE;
    return _27227;
    // SubProg inline_op pc: 168 op: ELSE (23)
    goto L5; // [168] 526
    // SubProg inline_op pc: 170 op: NOP1 (159)
L6: // addr: 171 pc: 170 sub: 53275 op: 159
    // SubProg inline_op pc: 171 op: STARTLINE (58)

    /** inline.e:349		elsif op = ROUTINE_ID then*/
    // SubProg inline_op pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 175 op: EQUALS_IFW (104)
    if (_op_53278 != 134)
    goto L7; // [175] 273
    // SubProg inline_op pc: 179 op: STARTLINE (58)

    /** inline.e:351			integer*/
    // SubProg inline_op pc: 181 op: STARTLINE (58)

    /** inline.e:352				stlen = inline_code[pc+2+TRANSLATE],*/
    // SubProg inline_op pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 185 op: PLUS (11)
    _27229 = _pc_53277 + 2;
    if ((object)((uintptr_t)_27229 + (uintptr_t)HIGH_BITS) >= 0){
        _27229 = NewDouble((eudouble)_27229);
    }
    // SubProg inline_op pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 191 op: PLUS (11)
    if (IS_ATOM_INT(_27229)) {
        _27230 = _27229 + _36TRANSLATE_16061;
    }
    else {
        _27230 = NewDouble(DBL_PTR(_27229)->dbl + (eudouble)_36TRANSLATE_16061);
    }
    DeRef(_27229);
    _27229 = NOVALUE;
    // SubProg inline_op pc: 195 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!IS_ATOM_INT(_27230)){
        _stlen_53316 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27230)->dbl));
    }
    else{
        _stlen_53316 = (object)*(((s1_ptr)_2)->base + _27230);
    }
    if (!IS_ATOM_INT(_stlen_53316))
    _stlen_53316 = (object)DBL_PTR(_stlen_53316)->dbl;
    // SubProg inline_op pc: 199 op: STARTLINE (58)

    /** inline.e:353				file  = inline_code[pc+4+TRANSLATE],*/
    // SubProg inline_op pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 203 op: PLUS (11)
    _27232 = _pc_53277 + 4;
    if ((object)((uintptr_t)_27232 + (uintptr_t)HIGH_BITS) >= 0){
        _27232 = NewDouble((eudouble)_27232);
    }
    // SubProg inline_op pc: 207 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 209 op: PLUS (11)
    if (IS_ATOM_INT(_27232)) {
        _27233 = _27232 + _36TRANSLATE_16061;
    }
    else {
        _27233 = NewDouble(DBL_PTR(_27232)->dbl + (eudouble)_36TRANSLATE_16061);
    }
    DeRef(_27232);
    _27232 = NOVALUE;
    // SubProg inline_op pc: 213 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!IS_ATOM_INT(_27233)){
        _file_53321 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27233)->dbl));
    }
    else{
        _file_53321 = (object)*(((s1_ptr)_2)->base + _27233);
    }
    if (!IS_ATOM_INT(_file_53321))
    _file_53321 = (object)DBL_PTR(_file_53321)->dbl;
    // SubProg inline_op pc: 217 op: STARTLINE (58)

    /** inline.e:354				ok    = adjust_il( pc, op )*/
    // SubProg inline_op pc: 219 op: PROC (27)
    _ok_53326 = _67adjust_il(_pc_53277, _op_53278);
    // SubProg inline_op pc: 224 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ok_53326)) {
        _1 = (object)(DBL_PTR(_ok_53326)->dbl);
        DeRefDS(_ok_53326);
        _ok_53326 = _1;
    }
    // SubProg inline_op pc: 226 op: STARTLINE (58)

    /** inline.e:355			inline_code[pc+2+TRANSLATE] = stlen*/
    // SubProg inline_op pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 230 op: PLUS (11)
    _27236 = _pc_53277 + 2;
    if ((object)((uintptr_t)_27236 + (uintptr_t)HIGH_BITS) >= 0){
        _27236 = NewDouble((eudouble)_27236);
    }
    // SubProg inline_op pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 236 op: PLUS (11)
    if (IS_ATOM_INT(_27236)) {
        _27237 = _27236 + _36TRANSLATE_16061;
    }
    else {
        _27237 = NewDouble(DBL_PTR(_27236)->dbl + (eudouble)_36TRANSLATE_16061);
    }
    DeRef(_27236);
    _27236 = NOVALUE;
    // SubProg inline_op pc: 240 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27237))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27237)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27237);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _stlen_53316;
    DeRef(_1);
    // SubProg inline_op pc: 244 op: STARTLINE (58)

    /** inline.e:356			inline_code[pc+4+TRANSLATE] = file*/
    // SubProg inline_op pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 248 op: PLUS (11)
    _27238 = _pc_53277 + 4;
    if ((object)((uintptr_t)_27238 + (uintptr_t)HIGH_BITS) >= 0){
        _27238 = NewDouble((eudouble)_27238);
    }
    // SubProg inline_op pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 254 op: PLUS (11)
    if (IS_ATOM_INT(_27238)) {
        _27239 = _27238 + _36TRANSLATE_16061;
    }
    else {
        _27239 = NewDouble(DBL_PTR(_27238)->dbl + (eudouble)_36TRANSLATE_16061);
    }
    DeRef(_27238);
    _27238 = NOVALUE;
    // SubProg inline_op pc: 258 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27239))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27239)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27239);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _file_53321;
    DeRef(_1);
    // SubProg inline_op pc: 262 op: STARTLINE (58)

    /** inline.e:358			return ok*/
    // SubProg inline_op pc: 264 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var stlen_53316

// block var file_53321

// Exiting block BLOCK: inline_op

// block var pc_53277

// block var op_53278
    DeRef(_27239);
    _27239 = NOVALUE;
    DeRef(_27233);
    _27233 = NOVALUE;
    DeRef(_27237);
    _27237 = NOVALUE;
    DeRef(_27213);
    _27213 = NOVALUE;
    DeRef(_27227);
    _27227 = NOVALUE;
    DeRef(_27230);
    _27230 = NOVALUE;
    return _ok_53326;
    // SubProg inline_op pc: 268 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var stlen_53316

// block var file_53321

// block var ok_53326
    // SubProg inline_op pc: 270 op: ELSE (23)
    goto L5; // [270] 526
    // SubProg inline_op pc: 272 op: NOP1 (159)
L7: // addr: 273 pc: 272 sub: 53275 op: 159
    // SubProg inline_op pc: 273 op: STARTLINE (58)

    /** inline.e:360		elsif op_info[op][OP_SIZE_TYPE] = FIXED_SIZE then*/
    // SubProg inline_op pc: 275 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 277 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_66op_info_23869);
    _27240 = (object)*(((s1_ptr)_2)->base + _op_53278);
    // SubProg inline_op pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 283 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27240);
    _27241 = (object)*(((s1_ptr)_2)->base + 1);
    _27240 = NOVALUE;
    // SubProg inline_op pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 289 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27241, 1)){
        _27241 = NOVALUE;
        goto L8; // [289] 397
    }
    _27241 = NOVALUE;
    // SubProg inline_op pc: 293 op: STARTLINE (58)

    /** inline.e:361			switch op do*/
    // SubProg inline_op pc: 295 op: SWITCH_I (193)
    _0 = _op_53278;
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
        _27245 = _pc_53277 + 3;
        // SubProg inline_op pc: 318 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _original_table_53349 = (object)*(((s1_ptr)_2)->base + _27245);
        if (!IS_ATOM_INT(_original_table_53349)){
            _original_table_53349 = (object)DBL_PTR(_original_table_53349)->dbl;
        }
        // SubProg inline_op pc: 324 op: STARTLINE (58)

        /** inline.e:365					symtab_index jump_table = NewStringSym( {-2, length(SymTab) } )*/
        // SubProg inline_op pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 328 op: LENGTH (42)
        if (IS_SEQUENCE(_37SymTab_15405)){
                _27247 = SEQ_PTR(_37SymTab_15405)->length;
        }
        else {
            _27247 = 1;
        }
        // SubProg inline_op pc: 331 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = _27247;
        _27248 = MAKE_SEQ(_1);
        _27247 = NOVALUE;
        // SubProg inline_op pc: 335 op: PROC (27)
        _jump_table_53353 = _54NewStringSym(_27248);
        _27248 = NOVALUE;
        // SubProg inline_op pc: 339 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_jump_table_53353)) {
            _1 = (object)(DBL_PTR(_jump_table_53353)->dbl);
            DeRefDS(_jump_table_53353);
            _jump_table_53353 = _1;
        }
        // SubProg inline_op pc: 341 op: STARTLINE (58)

        /** inline.e:366					SymTab[jump_table][S_OBJ] = SymTab[original_table][S_OBJ]*/
        // SubProg inline_op pc: 343 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 345 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_jump_table_53353 + ((s1_ptr)_2)->base);
        // SubProg inline_op pc: 350 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 352 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 354 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27252 = (object)*(((s1_ptr)_2)->base + _original_table_53349);
        // SubProg inline_op pc: 358 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 360 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27252);
        _27253 = (object)*(((s1_ptr)_2)->base + 1);
        _27252 = NOVALUE;
        // SubProg inline_op pc: 364 op: PASSIGN_SUBS (162)
        Ref(_27253);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27253;
        if( _1 != _27253 ){
            DeRef(_1);
        }
        _27253 = NOVALUE;
        _27250 = NOVALUE;
        // SubProg inline_op pc: 368 op: STARTLINE (58)

        /** inline.e:367					inline_code[pc+3] = jump_table*/
        // SubProg inline_op pc: 370 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 372 op: PLUS (11)
        _27254 = _pc_53277 + 3;
        // SubProg inline_op pc: 376 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _67inline_code_52885 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27254);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _jump_table_53353;
        DeRef(_1);
        // SubProg inline_op pc: 380 op: NOPSWITCH (187)
    ;}    // SubProg inline_op pc: 381 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var original_table_53349

// block var jump_table_53353
    // SubProg inline_op pc: 383 op: STARTLINE (58)

    /** inline.e:369			return adjust_il( pc, op )*/
    // SubProg inline_op pc: 385 op: PROC (27)
    _27255 = _67adjust_il(_pc_53277, _op_53278);
    // SubProg inline_op pc: 390 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53277

// block var op_53278
    DeRef(_27239);
    _27239 = NOVALUE;
    DeRef(_27233);
    _27233 = NOVALUE;
    DeRef(_27245);
    _27245 = NOVALUE;
    DeRef(_27237);
    _27237 = NOVALUE;
    DeRef(_27213);
    _27213 = NOVALUE;
    DeRef(_27227);
    _27227 = NOVALUE;
    DeRef(_27254);
    _27254 = NOVALUE;
    DeRef(_27230);
    _27230 = NOVALUE;
    return _27255;
    // SubProg inline_op pc: 394 op: ELSE (23)
    goto L5; // [394] 526
    // SubProg inline_op pc: 396 op: NOP1 (159)
L8: // addr: 397 pc: 396 sub: 53275 op: 159
    // SubProg inline_op pc: 397 op: STARTLINE (58)

    /** inline.e:372			switch op with fallthru do*/
    // SubProg inline_op pc: 399 op: SWITCH_I (193)
    _0 = _op_53278;
    switch ( _0 ){ 
        // SubProg inline_op pc: 404 op: STARTLINE (58)

        /** inline.e:373				case REF_TEMP then*/
        // SubProg inline_op pc: 406 op: CASE (186)
        case 207:
        // SubProg inline_op pc: 408 op: STARTLINE (58)

        /** inline.e:374					inline_code[pc+1] = {INLINE_TARGET}*/
        // SubProg inline_op pc: 410 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 412 op: PLUS1 (93)
        _27258 = _pc_53277 + 1;
        // SubProg inline_op pc: 416 op: ASSIGN_SUBS (16)
        RefDS(_27173);
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _67inline_code_52885 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27258);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27173;
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
        _27259 = _pc_53277 + 2;
        if ((object)((uintptr_t)_27259 + (uintptr_t)HIGH_BITS) >= 0){
            _27259 = NewDouble((eudouble)_27259);
        }
        // SubProg inline_op pc: 432 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 434 op: PLUS1 (93)
        _27260 = _pc_53277 + 1;
        // SubProg inline_op pc: 438 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27261 = (object)*(((s1_ptr)_2)->base + _27260);
        // SubProg inline_op pc: 442 op: PLUS (11)
        if (IS_ATOM_INT(_27259) && IS_ATOM_INT(_27261)) {
            _27262 = _27259 + _27261;
            if ((object)((uintptr_t)_27262 + (uintptr_t)HIGH_BITS) >= 0){
                _27262 = NewDouble((eudouble)_27262);
            }
        }
        else {
            _27262 = binary_op(PLUS, _27259, _27261);
        }
        DeRef(_27259);
        _27259 = NOVALUE;
        _27261 = NOVALUE;
        // SubProg inline_op pc: 446 op: PROC (27)
        _27263 = _67check_for_param(_27262);
        _27262 = NOVALUE;
        // SubProg inline_op pc: 450 op: IF (20)
        if (_27263 == 0) {
            DeRef(_27263);
            _27263 = NOVALUE;
            goto L9; // [450] 454
        }
        else {
            if (!IS_ATOM_INT(_27263) && DBL_PTR(_27263)->dbl == 0.0){
                DeRef(_27263);
                _27263 = NOVALUE;
                goto L9; // [450] 454
            }
            DeRef(_27263);
            _27263 = NOVALUE;
        }
        DeRef(_27263);
        _27263 = NOVALUE;
        // SubProg inline_op pc: 453 op: NOP1 (159)
L9: // addr: 454 pc: 453 sub: 53275 op: 159
        // SubProg inline_op pc: 454 op: STARTLINE (58)

        /** inline.e:383					for i = pc + 2 to pc + 2 + inline_code[pc+1] do*/
        // SubProg inline_op pc: 456 op: PLUS (11)
        _27264 = _pc_53277 + 2;
        if ((object)((uintptr_t)_27264 + (uintptr_t)HIGH_BITS) >= 0){
            _27264 = NewDouble((eudouble)_27264);
        }
        // SubProg inline_op pc: 460 op: PLUS (11)
        _27265 = _pc_53277 + 2;
        if ((object)((uintptr_t)_27265 + (uintptr_t)HIGH_BITS) >= 0){
            _27265 = NewDouble((eudouble)_27265);
        }
        // SubProg inline_op pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 466 op: PLUS1 (93)
        _27266 = _pc_53277 + 1;
        // SubProg inline_op pc: 470 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27267 = (object)*(((s1_ptr)_2)->base + _27266);
        // SubProg inline_op pc: 474 op: PLUS (11)
        if (IS_ATOM_INT(_27265) && IS_ATOM_INT(_27267)) {
            _27268 = _27265 + _27267;
            if ((object)((uintptr_t)_27268 + (uintptr_t)HIGH_BITS) >= 0){
                _27268 = NewDouble((eudouble)_27268);
            }
        }
        else {
            _27268 = binary_op(PLUS, _27265, _27267);
        }
        DeRef(_27265);
        _27265 = NOVALUE;
        _27267 = NOVALUE;
        // SubProg inline_op pc: 478 op: FOR (21)
        {
            object _i_53385;
            Ref(_27264);
            _i_53385 = _27264;
LA: // addr: 485 pc: 478 sub: 53275 op: 21
            if (binary_op_a(GREATER, _i_53385, _27268)){
                goto LB; // [478] 508
            }
            // SubProg inline_op pc: 485 op: STARTLINE (58)

            /** inline.e:384						if not adjust_symbol( i ) then*/
            // SubProg inline_op pc: 487 op: PROC (27)
            Ref(_i_53385);
            _27269 = _67adjust_symbol(_i_53385);
            // SubProg inline_op pc: 491 op: NOT_IFW (108)
            if (IS_ATOM_INT(_27269)) {
                if (_27269 != 0){
                    DeRef(_27269);
                    _27269 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            else {
                if (DBL_PTR(_27269)->dbl != 0.0){
                    DeRef(_27269);
                    _27269 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            DeRef(_27269);
            _27269 = NOVALUE;
            // SubProg inline_op pc: 494 op: STARTLINE (58)

            /** inline.e:385							return 0*/
            // SubProg inline_op pc: 496 op: RETURNF (28)
            DeRef(_i_53385);

// Exiting block BLOCK: inline_op

// block var pc_53277

// block var op_53278
            DeRef(_27268);
            _27268 = NOVALUE;
            DeRef(_27239);
            _27239 = NOVALUE;
            DeRef(_27266);
            _27266 = NOVALUE;
            DeRef(_27233);
            _27233 = NOVALUE;
            DeRef(_27258);
            _27258 = NOVALUE;
            DeRef(_27245);
            _27245 = NOVALUE;
            DeRef(_27237);
            _27237 = NOVALUE;
            DeRef(_27264);
            _27264 = NOVALUE;
            DeRef(_27255);
            _27255 = NOVALUE;
            DeRef(_27213);
            _27213 = NOVALUE;
            DeRef(_27260);
            _27260 = NOVALUE;
            DeRef(_27227);
            _27227 = NOVALUE;
            DeRef(_27254);
            _27254 = NOVALUE;
            DeRef(_27230);
            _27230 = NOVALUE;
            return 0;
            // SubProg inline_op pc: 500 op: NOP1 (159)
LC: // addr: 501 pc: 500 sub: 53275 op: 159
            // SubProg inline_op pc: 501 op: STARTLINE (58)

            /** inline.e:388					end for*/
            // SubProg inline_op pc: 503 op: ENDFOR_INT_UP1 (54)
            _0 = _i_53385;
            if (IS_ATOM_INT(_i_53385)) {
                _i_53385 = _i_53385 + 1;
                if ((object)((uintptr_t)_i_53385 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53385 = NewDouble((eudouble)_i_53385);
                }
            }
            else {
                _i_53385 = binary_op_a(PLUS, _i_53385, 1);
            }
            DeRef(_0);
            goto LA; // [503] 485
LB: // addr: 508 pc: 503 sub: 53275 op: 54
            ;
            DeRef(_i_53385);
        }
        // SubProg inline_op pc: 508 op: STARTLINE (58)

        /** inline.e:389					return 1*/
        // SubProg inline_op pc: 510 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53277

// block var op_53278
        DeRef(_27268);
        _27268 = NOVALUE;
        DeRef(_27239);
        _27239 = NOVALUE;
        DeRef(_27266);
        _27266 = NOVALUE;
        DeRef(_27233);
        _27233 = NOVALUE;
        DeRef(_27258);
        _27258 = NOVALUE;
        DeRef(_27245);
        _27245 = NOVALUE;
        DeRef(_27237);
        _27237 = NOVALUE;
        DeRef(_27264);
        _27264 = NOVALUE;
        DeRef(_27255);
        _27255 = NOVALUE;
        DeRef(_27213);
        _27213 = NOVALUE;
        DeRef(_27260);
        _27260 = NOVALUE;
        DeRef(_27227);
        _27227 = NOVALUE;
        DeRef(_27254);
        _27254 = NOVALUE;
        DeRef(_27230);
        _27230 = NOVALUE;
        return 1;
        // SubProg inline_op pc: 514 op: STARTLINE (58)

        /** inline.e:390				case else*/
        // SubProg inline_op pc: 516 op: CASE (186)
        default:
        // SubProg inline_op pc: 518 op: STARTLINE (58)

        /** inline.e:391					return 0*/
        // SubProg inline_op pc: 520 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53277

// block var op_53278
        DeRef(_27268);
        _27268 = NOVALUE;
        DeRef(_27239);
        _27239 = NOVALUE;
        DeRef(_27266);
        _27266 = NOVALUE;
        DeRef(_27233);
        _27233 = NOVALUE;
        DeRef(_27258);
        _27258 = NOVALUE;
        DeRef(_27245);
        _27245 = NOVALUE;
        DeRef(_27237);
        _27237 = NOVALUE;
        DeRef(_27264);
        _27264 = NOVALUE;
        DeRef(_27255);
        _27255 = NOVALUE;
        DeRef(_27213);
        _27213 = NOVALUE;
        DeRef(_27260);
        _27260 = NOVALUE;
        DeRef(_27227);
        _27227 = NOVALUE;
        DeRef(_27254);
        _27254 = NOVALUE;
        DeRef(_27230);
        _27230 = NOVALUE;
        return 0;
        // SubProg inline_op pc: 524 op: NOPSWITCH (187)
    ;}    // SubProg inline_op pc: 525 op: NOP1 (159)
L5: // addr: 526 pc: 525 sub: 53275 op: 159
    // SubProg inline_op pc: 526 op: STARTLINE (58)

    /** inline.e:394		return 1*/
    // SubProg inline_op pc: 528 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53277

// block var op_53278
    DeRef(_27268);
    _27268 = NOVALUE;
    DeRef(_27239);
    _27239 = NOVALUE;
    DeRef(_27266);
    _27266 = NOVALUE;
    DeRef(_27233);
    _27233 = NOVALUE;
    DeRef(_27258);
    _27258 = NOVALUE;
    DeRef(_27245);
    _27245 = NOVALUE;
    DeRef(_27237);
    _27237 = NOVALUE;
    DeRef(_27264);
    _27264 = NOVALUE;
    DeRef(_27255);
    _27255 = NOVALUE;
    DeRef(_27213);
    _27213 = NOVALUE;
    DeRef(_27260);
    _27260 = NOVALUE;
    DeRef(_27227);
    _27227 = NOVALUE;
    DeRef(_27254);
    _27254 = NOVALUE;
    DeRef(_27230);
    _27230 = NOVALUE;
    return 1;
    // SubProg inline_op pc: 532 op: BADRETURNF (43)
    ;
}


void _67restore_code()
{
    object _27271 = NOVALUE; // 53399 27271
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg restore_code pc: 1 op: STARTLINE (58)

    /** inline.e:399		if length( temp_code ) then*/
    // SubProg restore_code pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg restore_code pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_67temp_code_53395)){
            _27271 = SEQ_PTR(_67temp_code_53395)->length;
    }
    else {
        _27271 = 1;
    }
    // SubProg restore_code pc: 8 op: IF (20)
    if (_27271 == 0)
    {
        _27271 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _27271 = NOVALUE;
    }
    // SubProg restore_code pc: 11 op: STARTLINE (58)

    /** inline.e:400			Code = temp_code*/
    // SubProg restore_code pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg restore_code pc: 15 op: ASSIGN (18)
    RefDS(_67temp_code_53395);
    DeRef(_36Code_16524);
    _36Code_16524 = _67temp_code_53395;
    // SubProg restore_code pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg restore_code pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 53396 op: 159
    // SubProg restore_code pc: 21 op: STARTLINE (58)

    /** inline.e:402	end procedure*/
    // SubProg restore_code pc: 23 op: RETURNP (29)

// Exiting block BLOCK: restore_code
    return;
    // SubProg restore_code pc: 26 op: BADRETURNF (43)
    ;
}


void _67check_inline(object _sub_53404)
{
    object _pc_53433 = NOVALUE;
    object _s_53435 = NOVALUE;
    object _backpatch_op_53473 = NOVALUE;
    object _op_53477 = NOVALUE;
    object _rtn_idx_53488 = NOVALUE;
    object _args_53493 = NOVALUE;
    object _args_53525 = NOVALUE;
    object _values_53554 = NOVALUE;
    object _27358 = NOVALUE; // 53579 27358
    object _27357 = NOVALUE; // 53578 27357
// skipping _27356  name type: 0
    object _27355 = NOVALUE; // 53574 27355
// skipping _27354  name type: 0
// skipping _27353  name type: 0
    object _27352 = NOVALUE; // 53570 27352
// skipping _27351  name type: 0
    object _27350 = NOVALUE; // 53566 27350
    object _27349 = NOVALUE; // 53565 27349
    object _27348 = NOVALUE; // 53563 27348
// skipping _27347  name type: 0
    object _27346 = NOVALUE; // 53558 27346
    object _27345 = NOVALUE; // 53557 27345
    object _27344 = NOVALUE; // 53556 27344
    object _27343 = NOVALUE; // 53551 27343
    object _27342 = NOVALUE; // 53548 27342
    object _27341 = NOVALUE; // 53547 27341
    object _27340 = NOVALUE; // 53546 27340
    object _27339 = NOVALUE; // 53545 27339
    object _27338 = NOVALUE; // 53544 27338
    object _27336 = NOVALUE; // 53539 27336
    object _27335 = NOVALUE; // 53538 27335
    object _27334 = NOVALUE; // 53537 27334
    object _27333 = NOVALUE; // 53535 27333
    object _27332 = NOVALUE; // 53534 27332
// skipping _27331  name type: 0
    object _27330 = NOVALUE; // 53530 27330
    object _27329 = NOVALUE; // 53529 27329
    object _27328 = NOVALUE; // 53528 27328
    object _27327 = NOVALUE; // 53527 27327
    object _27326 = NOVALUE; // 53526 27326
// skipping _27325  name type: 0
    object _27324 = NOVALUE; // 53521 27324
    object _27323 = NOVALUE; // 53520 27323
    object _27322 = NOVALUE; // 53518 27322
    object _27321 = NOVALUE; // 53517 27321
    object _27320 = NOVALUE; // 53515 27320
    object _27319 = NOVALUE; // 53513 27319
    object _27318 = NOVALUE; // 53511 27318
    object _27317 = NOVALUE; // 53508 27317
    object _27316 = NOVALUE; // 53507 27316
    object _27315 = NOVALUE; // 53506 27315
    object _27314 = NOVALUE; // 53505 27314
    object _27313 = NOVALUE; // 53504 27313
    object _27312 = NOVALUE; // 53502 27312
    object _27311 = NOVALUE; // 53500 27311
// skipping _27310  name type: 0
    object _27309 = NOVALUE; // 53495 27309
// skipping _27308  name type: 0
// skipping _27307  name type: 0
    object _27306 = NOVALUE; // 53489 27306
// skipping _27303  name type: 0
// skipping _27302  name type: 0
    object _27301 = NOVALUE; // 53475 27301
// skipping _27300  name type: 0
    object _27299 = NOVALUE; // 53470 27299
// skipping _27298  name type: 0
// skipping _27297  name type: 0
    object _27296 = NOVALUE; // 53465 27296
    object _27295 = NOVALUE; // 53462 27295
    object _27294 = NOVALUE; // 53460 27294
    object _27293 = NOVALUE; // 53458 27293
    object _27292 = NOVALUE; // 53457 27292
    object _27291 = NOVALUE; // 53455 27291
    object _27290 = NOVALUE; // 53453 27290
    object _27289 = NOVALUE; // 53452 27289
// skipping _27288  name type: 0
    object _27287 = NOVALUE; // 53448 27287
// skipping _27286  name type: 0
    object _27285 = NOVALUE; // 53445 27285
    object _27284 = NOVALUE; // 53443 27284
// skipping _27283  name type: 0
    object _27282 = NOVALUE; // 53437 27282
// skipping _27281  name type: 0
    object _27280 = NOVALUE; // 53429 27280
// skipping _27279  name type: 0
    object _27278 = NOVALUE; // 53422 27278
// skipping _27277  name type: 0
    object _27276 = NOVALUE; // 53416 27276
    object _27275 = NOVALUE; // 53413 27275
    object _27274 = NOVALUE; // 53411 27274
    object _27273 = NOVALUE; // 53409 27273
// skipping _27272  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg check_inline pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_inline pc: 3 op: STARTLINE (58)

    /** inline.e:411		if OpTrace or SymTab[sub][S_TOKEN] = TYPE then*/
    // SubProg check_inline pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 7 op: SC1_OR_IF (147)
    if (_36OpTrace_16505 != 0) {
        goto L1; // [7] 34
    }
    // SubProg check_inline pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27273 = (object)*(((s1_ptr)_2)->base + _sub_53404);
    // SubProg check_inline pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27273);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _27274 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _27274 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _27273 = NOVALUE;
    // SubProg check_inline pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 25 op: EQUALS (3)
    if (IS_ATOM_INT(_27274)) {
        _27275 = (_27274 == 504);
    }
    else {
        _27275 = binary_op(EQUALS, _27274, 504);
    }
    _27274 = NOVALUE;
    // SubProg check_inline pc: 29 op: NOP1 (159)
    // SubProg check_inline pc: 30 op: IF (20)
    if (_27275 == 0) {
        DeRef(_27275);
        _27275 = NOVALUE;
        goto L2; // [30] 40
    }
    else {
        if (!IS_ATOM_INT(_27275) && DBL_PTR(_27275)->dbl == 0.0){
            DeRef(_27275);
            _27275 = NOVALUE;
            goto L2; // [30] 40
        }
        DeRef(_27275);
        _27275 = NOVALUE;
    }
    DeRef(_27275);
    _27275 = NOVALUE;
    // SubProg check_inline pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53401 op: 159
    // SubProg check_inline pc: 34 op: STARTLINE (58)

    /** inline.e:412			return*/
    // SubProg check_inline pc: 36 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
    DeRefi(_backpatch_op_53473);
    return;
    // SubProg check_inline pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 53401 op: 159
    // SubProg check_inline pc: 40 op: STARTLINE (58)

    /** inline.e:414		inline_sub      = sub*/
    // SubProg check_inline pc: 42 op: ASSIGN (18)
    _67inline_sub_52899 = _sub_53404;
    // SubProg check_inline pc: 45 op: INTEGER_CHECK (96)
    // SubProg check_inline pc: 47 op: STARTLINE (58)

    /** inline.e:415		if get_fwdref_count() then*/
    // SubProg check_inline pc: 49 op: PROC (27)
    _27276 = _39get_fwdref_count();
    // SubProg check_inline pc: 52 op: IF (20)
    if (_27276 == 0) {
        DeRef(_27276);
        _27276 = NOVALUE;
        goto L3; // [52] 65
    }
    else {
        if (!IS_ATOM_INT(_27276) && DBL_PTR(_27276)->dbl == 0.0){
            DeRef(_27276);
            _27276 = NOVALUE;
            goto L3; // [52] 65
        }
        DeRef(_27276);
        _27276 = NOVALUE;
    }
    DeRef(_27276);
    _27276 = NOVALUE;
    // SubProg check_inline pc: 55 op: STARTLINE (58)

    /** inline.e:416			defer()*/
    // SubProg check_inline pc: 57 op: PROC (27)
    _67defer();
    // SubProg check_inline pc: 59 op: STARTLINE (58)

    /** inline.e:417			return*/
    // SubProg check_inline pc: 61 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
    DeRefi(_backpatch_op_53473);
    return;
    // SubProg check_inline pc: 64 op: NOP1 (159)
L3: // addr: 65 pc: 64 sub: 53401 op: 159
    // SubProg check_inline pc: 65 op: STARTLINE (58)

    /** inline.e:419		temp_code = ""*/
    // SubProg check_inline pc: 67 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_67temp_code_53395);
    _67temp_code_53395 = _21933;
    // SubProg check_inline pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 72 op: STARTLINE (58)

    /** inline.e:420		if sub != CurrentSub then*/
    // SubProg check_inline pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 76 op: NOTEQ_IFW (105)
    if (_sub_53404 == _36CurrentSub_16444)
    goto L4; // [76] 99
    // SubProg check_inline pc: 80 op: STARTLINE (58)

    /** inline.e:421			Code = SymTab[sub][S_CODE]*/
    // SubProg check_inline pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27278 = (object)*(((s1_ptr)_2)->base + _sub_53404);
    // SubProg check_inline pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 90 op: RHS_SUBS_CHECK (92)
    DeRef(_36Code_16524);
    _2 = (object)SEQ_PTR(_27278);
    if (!IS_ATOM_INT(_36S_CODE_16103)){
        _36Code_16524 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    }
    else{
        _36Code_16524 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
    }
    Ref(_36Code_16524);
    _27278 = NOVALUE;
    // SubProg check_inline pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 96 op: ELSE (23)
    goto L5; // [96] 109
    // SubProg check_inline pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 53401 op: 159
    // SubProg check_inline pc: 99 op: STARTLINE (58)

    /** inline.e:423			temp_code = Code*/
    // SubProg check_inline pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 103 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRef(_67temp_code_53395);
    _67temp_code_53395 = _36Code_16524;
    // SubProg check_inline pc: 106 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 108 op: NOP1 (159)
L5: // addr: 109 pc: 108 sub: 53401 op: 159
    // SubProg check_inline pc: 109 op: STARTLINE (58)

    /** inline.e:426		if length(Code) > OpInline then*/
    // SubProg check_inline pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_36Code_16524)){
            _27280 = SEQ_PTR(_36Code_16524)->length;
    }
    else {
        _27280 = 1;
    }
    // SubProg check_inline pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 118 op: GREATER_IFW (107)
    if (_27280 <= _36OpInline_16510)
    goto L6; // [118] 128
    // SubProg check_inline pc: 122 op: STARTLINE (58)

    /** inline.e:427			return*/
    // SubProg check_inline pc: 124 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
    DeRefi(_backpatch_op_53473);
    return;
    // SubProg check_inline pc: 127 op: NOP1 (159)
L6: // addr: 128 pc: 127 sub: 53401 op: 159
    // SubProg check_inline pc: 128 op: STARTLINE (58)

    /** inline.e:430		inline_code     = Code*/
    // SubProg check_inline pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 132 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRef(_67inline_code_52885);
    _67inline_code_52885 = _36Code_16524;
    // SubProg check_inline pc: 135 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 137 op: STARTLINE (58)

    /** inline.e:431		return_gotos    = 0*/
    // SubProg check_inline pc: 139 op: ASSIGN_I (113)
    _67return_gotos_52894 = 0;
    // SubProg check_inline pc: 142 op: STARTLINE (58)

    /** inline.e:432		prev_pc         = 1*/
    // SubProg check_inline pc: 144 op: ASSIGN_I (113)
    _67prev_pc_52893 = 1;
    // SubProg check_inline pc: 147 op: STARTLINE (58)

    /** inline.e:433		proc_vars       = {}*/
    // SubProg check_inline pc: 149 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_67proc_vars_52886);
    _67proc_vars_52886 = _21933;
    // SubProg check_inline pc: 152 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 154 op: STARTLINE (58)

    /** inline.e:434		inline_temps    = {}*/
    // SubProg check_inline pc: 156 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_67inline_temps_52887);
    _67inline_temps_52887 = _21933;
    // SubProg check_inline pc: 159 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 161 op: STARTLINE (58)

    /** inline.e:435		inline_params   = {}*/
    // SubProg check_inline pc: 163 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_67inline_params_52890);
    _67inline_params_52890 = _21933;
    // SubProg check_inline pc: 166 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 168 op: STARTLINE (58)

    /** inline.e:436		assigned_params = {}*/
    // SubProg check_inline pc: 170 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_67assigned_params_52891);
    _67assigned_params_52891 = _21933;
    // SubProg check_inline pc: 173 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 175 op: STARTLINE (58)

    /** inline.e:438		integer pc = 1*/
    // SubProg check_inline pc: 177 op: ASSIGN_I (113)
    _pc_53433 = 1;
    // SubProg check_inline pc: 180 op: STARTLINE (58)

    /** inline.e:439		symtab_index s = SymTab[sub][S_NEXT]*/
    // SubProg check_inline pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 184 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27282 = (object)*(((s1_ptr)_2)->base + _sub_53404);
    // SubProg check_inline pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 190 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27282);
    _s_53435 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53435)){
        _s_53435 = (object)DBL_PTR(_s_53435)->dbl;
    }
    _27282 = NOVALUE;
    // SubProg check_inline pc: 196 op: STARTLINE (58)

    /** inline.e:440		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    // SubProg check_inline pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 200 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27284 = (object)*(((s1_ptr)_2)->base + _sub_53404);
    // SubProg check_inline pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 206 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27284);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _27285 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _27285 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _27284 = NOVALUE;
    // SubProg check_inline pc: 210 op: FOR (21)
    {
        object _p_53441;
        _p_53441 = 1;
L7: // addr: 217 pc: 210 sub: 53401 op: 21
        if (binary_op_a(GREATER, _p_53441, _27285)){
            goto L8; // [210] 248
        }
        // SubProg check_inline pc: 217 op: STARTLINE (58)

        /** inline.e:441			inline_params &= s*/
        // SubProg check_inline pc: 219 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 221 op: CONCAT (15)
        Append(&_67inline_params_52890, _67inline_params_52890, _s_53435);
        // SubProg check_inline pc: 225 op: STARTLINE (58)

        /** inline.e:442			s = SymTab[s][S_NEXT]*/
        // SubProg check_inline pc: 227 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 229 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27287 = (object)*(((s1_ptr)_2)->base + _s_53435);
        // SubProg check_inline pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 235 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27287);
        _s_53435 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53435)){
            _s_53435 = (object)DBL_PTR(_s_53435)->dbl;
        }
        _27287 = NOVALUE;
        // SubProg check_inline pc: 241 op: STARTLINE (58)

        /** inline.e:443		end for*/
        // SubProg check_inline pc: 243 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53441;
        if (IS_ATOM_INT(_p_53441)) {
            _p_53441 = _p_53441 + 1;
            if ((object)((uintptr_t)_p_53441 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53441 = NewDouble((eudouble)_p_53441);
            }
        }
        else {
            _p_53441 = binary_op_a(PLUS, _p_53441, 1);
        }
        DeRef(_0);
        goto L7; // [243] 217
L8: // addr: 248 pc: 243 sub: 53401 op: 54
        ;
        DeRef(_p_53441);
    }
    // SubProg check_inline pc: 248 op: STARTLINE (58)

    /** inline.e:445		while s != 0 and */
    // SubProg check_inline pc: 250 op: NOP2 (110)
    // SubProg check_inline pc: 252 op: NOPWHILE (158)
L9: // addr: 253 pc: 252 sub: 53401 op: 158
    // SubProg check_inline pc: 253 op: NOTEQ (4)
    _27289 = (_s_53435 != 0);
    // SubProg check_inline pc: 257 op: SC1_AND_IF (146)
    if (_27289 == 0) {
        goto LA; // [257] 335
    }
    // SubProg check_inline pc: 261 op: PROC (27)
    _27291 = _54sym_scope(_s_53435);
    // SubProg check_inline pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 267 op: LESSEQ (5)
    if (IS_ATOM_INT(_27291)) {
        _27292 = (_27291 <= 3);
    }
    else {
        _27292 = binary_op(LESSEQ, _27291, 3);
    }
    DeRef(_27291);
    _27291 = NOVALUE;
    // SubProg check_inline pc: 271 op: SC1_OR (143)
    if (IS_ATOM_INT(_27292)) {
        if (_27292 != 0) {
            DeRef(_27293);
            _27293 = 1;
            goto LB; // [271] 289
        }
    }
    else {
        if (DBL_PTR(_27292)->dbl != 0.0) {
            DeRef(_27293);
            _27293 = 1;
            goto LB; // [271] 289
        }
    }
    // SubProg check_inline pc: 275 op: PROC (27)
    _27294 = _54sym_scope(_s_53435);
    // SubProg check_inline pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 281 op: EQUALS (3)
    if (IS_ATOM_INT(_27294)) {
        _27295 = (_27294 == 9);
    }
    else {
        _27295 = binary_op(EQUALS, _27294, 9);
    }
    DeRef(_27294);
    _27294 = NOVALUE;
    // SubProg check_inline pc: 285 op: SC2_OR (144)
    DeRef(_27293);
    if (IS_ATOM_INT(_27295))
    _27293 = (_27295 != 0);
    else
    _27293 = DBL_PTR(_27295)->dbl != 0.0;
    // SubProg check_inline pc: 288 op: NOP1 (159)
LB: // addr: 289 pc: 288 sub: 53401 op: 159
    // SubProg check_inline pc: 289 op: NOP1 (159)
    // SubProg check_inline pc: 290 op: WHILE (47)
    if (_27293 == 0)
    {
        _27293 = NOVALUE;
        goto LA; // [290] 335
    }
    else{
        _27293 = NOVALUE;
    }
    // SubProg check_inline pc: 293 op: STARTLINE (58)

    /** inline.e:447			if sym_scope( s ) != SC_UNDEFINED then*/
    // SubProg check_inline pc: 295 op: PROC (27)
    _27296 = _54sym_scope(_s_53435);
    // SubProg check_inline pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 301 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _27296, 9)){
        DeRef(_27296);
        _27296 = NOVALUE;
        goto LC; // [301] 314
    }
    DeRef(_27296);
    _27296 = NOVALUE;
    // SubProg check_inline pc: 305 op: STARTLINE (58)

    /** inline.e:448				proc_vars &= s*/
    // SubProg check_inline pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 309 op: CONCAT (15)
    Append(&_67proc_vars_52886, _67proc_vars_52886, _s_53435);
    // SubProg check_inline pc: 313 op: NOP1 (159)
LC: // addr: 314 pc: 313 sub: 53401 op: 159
    // SubProg check_inline pc: 314 op: STARTLINE (58)

    /** inline.e:451			s = SymTab[s][S_NEXT]*/
    // SubProg check_inline pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 318 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27299 = (object)*(((s1_ptr)_2)->base + _s_53435);
    // SubProg check_inline pc: 322 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 324 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27299);
    _s_53435 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53435)){
        _s_53435 = (object)DBL_PTR(_s_53435)->dbl;
    }
    _27299 = NOVALUE;
    // SubProg check_inline pc: 330 op: STARTLINE (58)

    /** inline.e:452		end while*/
    // SubProg check_inline pc: 332 op: ENDWHILE (22)
    goto L9; // [332] 253
    // SubProg check_inline pc: 334 op: NOP1 (159)
LA: // addr: 335 pc: 334 sub: 53401 op: 159
    // SubProg check_inline pc: 335 op: STARTLINE (58)

    /** inline.e:453		sequence backpatch_op = {}*/
    // SubProg check_inline pc: 337 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_backpatch_op_53473);
    _backpatch_op_53473 = _21933;
    // SubProg check_inline pc: 340 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 342 op: STARTLINE (58)

    /** inline.e:454		while pc < length( inline_code ) do*/
    // SubProg check_inline pc: 344 op: NOP2 (110)
    // SubProg check_inline pc: 346 op: NOPWHILE (158)
LD: // addr: 347 pc: 346 sub: 53401 op: 158
    // SubProg check_inline pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 349 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27301 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27301 = 1;
    }
    // SubProg check_inline pc: 352 op: LESS_IFW_I (119)
    if (_pc_53433 >= _27301)
    goto LE; // [352] 869
    // SubProg check_inline pc: 356 op: STARTLINE (58)

    /** inline.e:456			integer op = inline_code[pc]*/
    // SubProg check_inline pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 360 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _op_53477 = (object)*(((s1_ptr)_2)->base + _pc_53433);
    if (!IS_ATOM_INT(_op_53477))
    _op_53477 = (object)DBL_PTR(_op_53477)->dbl;
    // SubProg check_inline pc: 364 op: STARTLINE (58)

    /** inline.e:457			switch op do*/
    // SubProg check_inline pc: 366 op: SWITCH_I (193)
    _0 = _op_53477;
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
        _67defer();
        // SubProg check_inline pc: 381 op: STARTLINE (58)

        /** inline.e:460					restore_code()*/
        // SubProg check_inline pc: 383 op: PROC (27)
        _67restore_code();
        // SubProg check_inline pc: 385 op: STARTLINE (58)

        /** inline.e:461					return*/
        // SubProg check_inline pc: 387 op: RETURNP (29)

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: WHILE-

// block var op_53477

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
        DeRefi(_backpatch_op_53473);
        DeRef(_27292);
        _27292 = NOVALUE;
        DeRef(_27289);
        _27289 = NOVALUE;
        _27285 = NOVALUE;
        DeRef(_27295);
        _27295 = NOVALUE;
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
        _27306 = _pc_53433 + 1;
        // SubProg check_inline pc: 406 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _rtn_idx_53488 = (object)*(((s1_ptr)_2)->base + _27306);
        if (!IS_ATOM_INT(_rtn_idx_53488)){
            _rtn_idx_53488 = (object)DBL_PTR(_rtn_idx_53488)->dbl;
        }
        // SubProg check_inline pc: 412 op: STARTLINE (58)

        /** inline.e:465					if rtn_idx = sub then*/
        // SubProg check_inline pc: 414 op: EQUALS_IFW (104)
        if (_rtn_idx_53488 != _sub_53404)
        goto L10; // [414] 428
        // SubProg check_inline pc: 418 op: STARTLINE (58)

        /** inline.e:467						restore_code()*/
        // SubProg check_inline pc: 420 op: PROC (27)
        _67restore_code();
        // SubProg check_inline pc: 422 op: STARTLINE (58)

        /** inline.e:468						return*/
        // SubProg check_inline pc: 424 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: CASE-

// block var rtn_idx_53488

// block var args_53493

// Exiting block BLOCK: WHILE-

// block var op_53477

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
        DeRefi(_backpatch_op_53473);
        DeRef(_27292);
        _27292 = NOVALUE;
        DeRef(_27289);
        _27289 = NOVALUE;
        _27285 = NOVALUE;
        _27306 = NOVALUE;
        DeRef(_27295);
        _27295 = NOVALUE;
        return;
        // SubProg check_inline pc: 427 op: NOP1 (159)
L10: // addr: 428 pc: 427 sub: 53401 op: 159
        // SubProg check_inline pc: 428 op: STARTLINE (58)

        /** inline.e:471					integer args = SymTab[rtn_idx][S_NUM_ARGS]*/
        // SubProg check_inline pc: 430 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27309 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53488);
        // SubProg check_inline pc: 436 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 438 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27309);
        if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
            _args_53493 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
        }
        else{
            _args_53493 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
        }
        if (!IS_ATOM_INT(_args_53493)){
            _args_53493 = (object)DBL_PTR(_args_53493)->dbl;
        }
        _27309 = NOVALUE;
        // SubProg check_inline pc: 444 op: STARTLINE (58)

        /** inline.e:472					if SymTab[rtn_idx][S_TOKEN] != PROC and check_for_param( pc + args + 2 ) then*/
        // SubProg check_inline pc: 446 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 448 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27311 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53488);
        // SubProg check_inline pc: 452 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 454 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27311);
        if (!IS_ATOM_INT(_36S_TOKEN_16096)){
            _27312 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
        }
        else{
            _27312 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
        }
        _27311 = NOVALUE;
        // SubProg check_inline pc: 458 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 460 op: NOTEQ (4)
        if (IS_ATOM_INT(_27312)) {
            _27313 = (_27312 != 27);
        }
        else {
            _27313 = binary_op(NOTEQ, _27312, 27);
        }
        _27312 = NOVALUE;
        // SubProg check_inline pc: 464 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_27313)) {
            if (_27313 == 0) {
                goto L11; // [464] 485
            }
        }
        else {
            if (DBL_PTR(_27313)->dbl == 0.0) {
                goto L11; // [464] 485
            }
        }
        // SubProg check_inline pc: 468 op: PLUS (11)
        _27315 = _pc_53433 + _args_53493;
        if ((object)((uintptr_t)_27315 + (uintptr_t)HIGH_BITS) >= 0){
            _27315 = NewDouble((eudouble)_27315);
        }
        // SubProg check_inline pc: 472 op: PLUS (11)
        if (IS_ATOM_INT(_27315)) {
            _27316 = _27315 + 2;
            if ((object)((uintptr_t)_27316 + (uintptr_t)HIGH_BITS) >= 0){
                _27316 = NewDouble((eudouble)_27316);
            }
        }
        else {
            _27316 = NewDouble(DBL_PTR(_27315)->dbl + (eudouble)2);
        }
        DeRef(_27315);
        _27315 = NOVALUE;
        // SubProg check_inline pc: 476 op: PROC (27)
        _27317 = _67check_for_param(_27316);
        _27316 = NOVALUE;
        // SubProg check_inline pc: 480 op: NOP1 (159)
        // SubProg check_inline pc: 481 op: IF (20)
        if (_27317 == 0) {
            DeRef(_27317);
            _27317 = NOVALUE;
            goto L11; // [481] 485
        }
        else {
            if (!IS_ATOM_INT(_27317) && DBL_PTR(_27317)->dbl == 0.0){
                DeRef(_27317);
                _27317 = NOVALUE;
                goto L11; // [481] 485
            }
            DeRef(_27317);
            _27317 = NOVALUE;
        }
        DeRef(_27317);
        _27317 = NOVALUE;
        // SubProg check_inline pc: 484 op: NOP1 (159)
L11: // addr: 485 pc: 484 sub: 53401 op: 159
        // SubProg check_inline pc: 485 op: STARTLINE (58)

        /** inline.e:475					for i = 2 to args + 1 + (SymTab[rtn_idx][S_TOKEN] != PROC) do*/
        // SubProg check_inline pc: 487 op: PLUS1 (93)
        _27318 = _args_53493 + 1;
        if (_27318 > MAXINT){
            _27318 = NewDouble((eudouble)_27318);
        }
        // SubProg check_inline pc: 491 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 493 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27319 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53488);
        // SubProg check_inline pc: 497 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 499 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27319);
        if (!IS_ATOM_INT(_36S_TOKEN_16096)){
            _27320 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
        }
        else{
            _27320 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
        }
        _27319 = NOVALUE;
        // SubProg check_inline pc: 503 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 505 op: NOTEQ (4)
        if (IS_ATOM_INT(_27320)) {
            _27321 = (_27320 != 27);
        }
        else {
            _27321 = binary_op(NOTEQ, _27320, 27);
        }
        _27320 = NOVALUE;
        // SubProg check_inline pc: 509 op: PLUS (11)
        if (IS_ATOM_INT(_27318) && IS_ATOM_INT(_27321)) {
            _27322 = _27318 + _27321;
            if ((object)((uintptr_t)_27322 + (uintptr_t)HIGH_BITS) >= 0){
                _27322 = NewDouble((eudouble)_27322);
            }
        }
        else {
            _27322 = binary_op(PLUS, _27318, _27321);
        }
        DeRef(_27318);
        _27318 = NOVALUE;
        DeRef(_27321);
        _27321 = NOVALUE;
        // SubProg check_inline pc: 513 op: FOR (21)
        {
            object _i_53510;
            _i_53510 = 2;
L12: // addr: 520 pc: 513 sub: 53401 op: 21
            if (binary_op_a(GREATER, _i_53510, _27322)){
                goto L13; // [513] 550
            }
            // SubProg check_inline pc: 520 op: STARTLINE (58)

            /** inline.e:476						if not adjust_symbol( pc + i ) then */
            // SubProg check_inline pc: 522 op: PLUS (11)
            if (IS_ATOM_INT(_i_53510)) {
                _27323 = _pc_53433 + _i_53510;
                if ((object)((uintptr_t)_27323 + (uintptr_t)HIGH_BITS) >= 0){
                    _27323 = NewDouble((eudouble)_27323);
                }
            }
            else {
                _27323 = NewDouble((eudouble)_pc_53433 + DBL_PTR(_i_53510)->dbl);
            }
            // SubProg check_inline pc: 526 op: PROC (27)
            _27324 = _67adjust_symbol(_27323);
            _27323 = NOVALUE;
            // SubProg check_inline pc: 530 op: NOT_IFW (108)
            if (IS_ATOM_INT(_27324)) {
                if (_27324 != 0){
                    DeRef(_27324);
                    _27324 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            else {
                if (DBL_PTR(_27324)->dbl != 0.0){
                    DeRef(_27324);
                    _27324 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            DeRef(_27324);
            _27324 = NOVALUE;
            // SubProg check_inline pc: 533 op: STARTLINE (58)

            /** inline.e:477							defer()*/
            // SubProg check_inline pc: 535 op: PROC (27)
            _67defer();
            // SubProg check_inline pc: 537 op: STARTLINE (58)

            /** inline.e:478							return*/
            // SubProg check_inline pc: 539 op: RETURNP (29)
            DeRef(_i_53510);

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: CASE-

// block var rtn_idx_53488

// block var args_53493

// Exiting block BLOCK: WHILE-

// block var op_53477

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
            DeRefi(_backpatch_op_53473);
            DeRef(_27292);
            _27292 = NOVALUE;
            DeRef(_27289);
            _27289 = NOVALUE;
            _27285 = NOVALUE;
            DeRef(_27306);
            _27306 = NOVALUE;
            DeRef(_27322);
            _27322 = NOVALUE;
            DeRef(_27295);
            _27295 = NOVALUE;
            DeRef(_27313);
            _27313 = NOVALUE;
            return;
            // SubProg check_inline pc: 542 op: NOP1 (159)
L14: // addr: 543 pc: 542 sub: 53401 op: 159
            // SubProg check_inline pc: 543 op: STARTLINE (58)

            /** inline.e:480					end for*/
            // SubProg check_inline pc: 545 op: ENDFOR_INT_UP1 (54)
            _0 = _i_53510;
            if (IS_ATOM_INT(_i_53510)) {
                _i_53510 = _i_53510 + 1;
                if ((object)((uintptr_t)_i_53510 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53510 = NewDouble((eudouble)_i_53510);
                }
            }
            else {
                _i_53510 = binary_op_a(PLUS, _i_53510, 1);
            }
            DeRef(_0);
            goto L12; // [545] 520
L13: // addr: 550 pc: 545 sub: 53401 op: 54
            ;
            DeRef(_i_53510);
        }
        // SubProg check_inline pc: 550 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var rtn_idx_53488

// block var args_53493
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
        _27326 = _pc_53433 + 2;
        if ((object)((uintptr_t)_27326 + (uintptr_t)HIGH_BITS) >= 0){
            _27326 = NewDouble((eudouble)_27326);
        }
        // SubProg check_inline pc: 566 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 568 op: PLUS1 (93)
        _27327 = _pc_53433 + 1;
        // SubProg check_inline pc: 572 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27328 = (object)*(((s1_ptr)_2)->base + _27327);
        // SubProg check_inline pc: 576 op: PLUS (11)
        if (IS_ATOM_INT(_27328)) {
            _27329 = _27328 + _pc_53433;
            if ((object)((uintptr_t)_27329 + (uintptr_t)HIGH_BITS) >= 0){
                _27329 = NewDouble((eudouble)_27329);
            }
        }
        else {
            _27329 = binary_op(PLUS, _27328, _pc_53433);
        }
        _27328 = NOVALUE;
        // SubProg check_inline pc: 580 op: PLUS1 (93)
        if (IS_ATOM_INT(_27329)) {
            _27330 = _27329 + 1;
        }
        else
        _27330 = binary_op(PLUS, 1, _27329);
        DeRef(_27329);
        _27329 = NOVALUE;
        // SubProg check_inline pc: 584 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_args_53525;
        RHS_Slice(_67inline_code_52885, _27326, _27330);
        // SubProg check_inline pc: 589 op: STARTLINE (58)

        /** inline.e:486					for i = 1 to length(args) - 1 do*/
        // SubProg check_inline pc: 591 op: LENGTH (42)
        if (IS_SEQUENCE(_args_53525)){
                _27332 = SEQ_PTR(_args_53525)->length;
        }
        else {
            _27332 = 1;
        }
        // SubProg check_inline pc: 594 op: MINUS (10)
        _27333 = _27332 - 1;
        _27332 = NOVALUE;
        // SubProg check_inline pc: 598 op: FOR (21)
        {
            object _i_53533;
            _i_53533 = 1;
L15: // addr: 605 pc: 598 sub: 53401 op: 21
            if (_i_53533 > _27333){
                goto L16; // [598] 644
            }
            // SubProg check_inline pc: 605 op: STARTLINE (58)

            /** inline.e:487						if find( args[i], args, i + 1 ) then*/
            // SubProg check_inline pc: 607 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_args_53525);
            _27334 = (object)*(((s1_ptr)_2)->base + _i_53533);
            // SubProg check_inline pc: 611 op: PLUS1 (93)
            _27335 = _i_53533 + 1;
            // SubProg check_inline pc: 615 op: FIND_FROM (176)
            _27336 = find_from(_27334, _args_53525, _27335);
            _27334 = NOVALUE;
            _27335 = NOVALUE;
            // SubProg check_inline pc: 620 op: IF (20)
            if (_27336 == 0)
            {
                _27336 = NOVALUE;
                goto L17; // [620] 637
            }
            else{
                _27336 = NOVALUE;
            }
            // SubProg check_inline pc: 623 op: STARTLINE (58)

            /** inline.e:488							defer()*/
            // SubProg check_inline pc: 625 op: PROC (27)
            _67defer();
            // SubProg check_inline pc: 627 op: STARTLINE (58)

            /** inline.e:489							restore_code()*/
            // SubProg check_inline pc: 629 op: PROC (27)
            _67restore_code();
            // SubProg check_inline pc: 631 op: STARTLINE (58)

            /** inline.e:490							return*/
            // SubProg check_inline pc: 633 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: CASE-

// block var args_53525
            DeRefDS(_args_53525);

// Exiting block BLOCK: WHILE-

// block var op_53477

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
            DeRefi(_backpatch_op_53473);
            DeRef(_27330);
            _27330 = NOVALUE;
            DeRef(_27292);
            _27292 = NOVALUE;
            DeRef(_27289);
            _27289 = NOVALUE;
            DeRef(_27327);
            _27327 = NOVALUE;
            _27285 = NOVALUE;
            DeRef(_27306);
            _27306 = NOVALUE;
            DeRef(_27322);
            _27322 = NOVALUE;
            DeRef(_27295);
            _27295 = NOVALUE;
            DeRef(_27313);
            _27313 = NOVALUE;
            DeRef(_27326);
            _27326 = NOVALUE;
            DeRef(_27333);
            _27333 = NOVALUE;
            return;
            // SubProg check_inline pc: 636 op: NOP1 (159)
L17: // addr: 637 pc: 636 sub: 53401 op: 159
            // SubProg check_inline pc: 637 op: STARTLINE (58)

            /** inline.e:492					end for*/
            // SubProg check_inline pc: 639 op: ENDFOR_INT_UP1 (54)
            _i_53533 = _i_53533 + 1;
            goto L15; // [639] 605
L16: // addr: 644 pc: 639 sub: 53401 op: 54
            ;
        }
        // SubProg check_inline pc: 644 op: STARTLINE (58)

        /** inline.e:493					goto "inline op"*/
        // SubProg check_inline pc: 646 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var args_53525
        DeRef(_args_53525);
        _args_53525 = NOVALUE;
        // SubProg check_inline pc: 648 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53477
        // SubProg check_inline pc: 650 op: GOTO (188)
        goto G18;
        // SubProg check_inline pc: 652 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var args_53525
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
        _27338 = _pc_53433 + 1;
        // SubProg check_inline pc: 668 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27339 = (object)*(((s1_ptr)_2)->base + _27338);
        // SubProg check_inline pc: 672 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 674 op: PLUS (11)
        _27340 = _pc_53433 + 2;
        // SubProg check_inline pc: 678 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27341 = (object)*(((s1_ptr)_2)->base + _27340);
        // SubProg check_inline pc: 682 op: EQUAL (153)
        if (_27339 == _27341)
        _27342 = 1;
        else if (IS_ATOM_INT(_27339) && IS_ATOM_INT(_27341))
        _27342 = 0;
        else
        _27342 = (compare(_27339, _27341) == 0);
        _27339 = NOVALUE;
        _27341 = NOVALUE;
        // SubProg check_inline pc: 686 op: IF (20)
        if (_27342 == 0)
        {
            _27342 = NOVALUE;
            goto L19; // [686] 703
        }
        else{
            _27342 = NOVALUE;
        }
        // SubProg check_inline pc: 689 op: STARTLINE (58)

        /** inline.e:497						defer()*/
        // SubProg check_inline pc: 691 op: PROC (27)
        _67defer();
        // SubProg check_inline pc: 693 op: STARTLINE (58)

        /** inline.e:498						restore_code()*/
        // SubProg check_inline pc: 695 op: PROC (27)
        _67restore_code();
        // SubProg check_inline pc: 697 op: STARTLINE (58)

        /** inline.e:499						return*/
        // SubProg check_inline pc: 699 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: WHILE-

// block var op_53477

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
        DeRefi(_backpatch_op_53473);
        DeRef(_27330);
        _27330 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        DeRef(_27289);
        _27289 = NOVALUE;
        DeRef(_27327);
        _27327 = NOVALUE;
        _27340 = NOVALUE;
        _27285 = NOVALUE;
        DeRef(_27306);
        _27306 = NOVALUE;
        _27338 = NOVALUE;
        DeRef(_27322);
        _27322 = NOVALUE;
        DeRef(_27295);
        _27295 = NOVALUE;
        DeRef(_27313);
        _27313 = NOVALUE;
        DeRef(_27326);
        _27326 = NOVALUE;
        DeRef(_27333);
        _27333 = NOVALUE;
        return;
        // SubProg check_inline pc: 702 op: NOP1 (159)
L19: // addr: 703 pc: 702 sub: 53401 op: 159
        // SubProg check_inline pc: 703 op: STARTLINE (58)

        /** inline.e:501					goto "inline op"*/
        // SubProg check_inline pc: 705 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-
        // SubProg check_inline pc: 707 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53477
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
        _27343 = _pc_53433 + 1;
        if (_27343 > MAXINT){
            _27343 = NewDouble((eudouble)_27343);
        }
        // SubProg check_inline pc: 723 op: PROC (27)
        RefDS(_21933);
        _67replace_code(_21933, _pc_53433, _27343);
        _27343 = NOVALUE;
        // SubProg check_inline pc: 728 op: STARTLINE (58)

        /** inline.e:505					continue*/
        // SubProg check_inline pc: 730 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53477
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
        _27344 = _pc_53433 + 2;
        // SubProg check_inline pc: 750 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27345 = (object)*(((s1_ptr)_2)->base + _27344);
        // SubProg check_inline pc: 754 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_27345)){
            _27346 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27345)->dbl));
        }
        else{
            _27346 = (object)*(((s1_ptr)_2)->base + _27345);
        }
        // SubProg check_inline pc: 758 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 760 op: RHS_SUBS_CHECK (92)
        DeRef(_values_53554);
        _2 = (object)SEQ_PTR(_27346);
        _values_53554 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_values_53554);
        _27346 = NOVALUE;
        // SubProg check_inline pc: 764 op: SEQUENCE_CHECK (97)
        // SubProg check_inline pc: 766 op: STARTLINE (58)

        /** inline.e:509					for i = 1 to length( values ) do*/
        // SubProg check_inline pc: 768 op: LENGTH (42)
        if (IS_SEQUENCE(_values_53554)){
                _27348 = SEQ_PTR(_values_53554)->length;
        }
        else {
            _27348 = 1;
        }
        // SubProg check_inline pc: 771 op: FOR_I (125)
        {
            object _i_53562;
            _i_53562 = 1;
L1A: // addr: 778 pc: 771 sub: 53401 op: 125
            if (_i_53562 > _27348){
                goto L1B; // [771] 811
            }
            // SubProg check_inline pc: 778 op: STARTLINE (58)

            /** inline.e:510						if sequence( values[i] ) then*/
            // SubProg check_inline pc: 780 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_values_53554);
            _27349 = (object)*(((s1_ptr)_2)->base + _i_53562);
            // SubProg check_inline pc: 784 op: IS_A_SEQUENCE (68)
            _27350 = IS_SEQUENCE(_27349);
            _27349 = NOVALUE;
            // SubProg check_inline pc: 787 op: IF (20)
            if (_27350 == 0)
            {
                _27350 = NOVALUE;
                goto L1C; // [787] 804
            }
            else{
                _27350 = NOVALUE;
            }
            // SubProg check_inline pc: 790 op: STARTLINE (58)

            /** inline.e:512							defer()*/
            // SubProg check_inline pc: 792 op: PROC (27)
            _67defer();
            // SubProg check_inline pc: 794 op: STARTLINE (58)

            /** inline.e:513							restore_code()*/
            // SubProg check_inline pc: 796 op: PROC (27)
            _67restore_code();
            // SubProg check_inline pc: 798 op: STARTLINE (58)

            /** inline.e:514							return*/
            // SubProg check_inline pc: 800 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: CASE-

// block var values_53554
            DeRefDS(_values_53554);

// Exiting block BLOCK: WHILE-

// block var op_53477

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
            DeRefi(_backpatch_op_53473);
            DeRef(_27330);
            _27330 = NOVALUE;
            DeRef(_27292);
            _27292 = NOVALUE;
            DeRef(_27289);
            _27289 = NOVALUE;
            DeRef(_27327);
            _27327 = NOVALUE;
            DeRef(_27340);
            _27340 = NOVALUE;
            _27285 = NOVALUE;
            _27345 = NOVALUE;
            DeRef(_27306);
            _27306 = NOVALUE;
            DeRef(_27338);
            _27338 = NOVALUE;
            DeRef(_27322);
            _27322 = NOVALUE;
            DeRef(_27295);
            _27295 = NOVALUE;
            DeRef(_27313);
            _27313 = NOVALUE;
            DeRef(_27344);
            _27344 = NOVALUE;
            DeRef(_27326);
            _27326 = NOVALUE;
            DeRef(_27333);
            _27333 = NOVALUE;
            return;
            // SubProg check_inline pc: 803 op: NOP1 (159)
L1C: // addr: 804 pc: 803 sub: 53401 op: 159
            // SubProg check_inline pc: 804 op: STARTLINE (58)

            /** inline.e:516					end for*/
            // SubProg check_inline pc: 806 op: ENDFOR_INT_UP1 (54)
            _i_53562 = _i_53562 + 1;
            goto L1A; // [806] 778
L1B: // addr: 811 pc: 806 sub: 53401 op: 54
            ;
        }
        // SubProg check_inline pc: 811 op: STARTLINE (58)

        /** inline.e:517					backpatch_op = append( backpatch_op, pc )*/
        // SubProg check_inline pc: 813 op: APPEND (35)
        Append(&_backpatch_op_53473, _backpatch_op_53473, _pc_53433);
        // SubProg check_inline pc: 817 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var values_53554
        DeRef(_values_53554);
        _values_53554 = NOVALUE;
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
        _27352 = _67inline_op(_pc_53433);
        // SubProg check_inline pc: 833 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27352)) {
            if (_27352 != 0){
                DeRef(_27352);
                _27352 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        else {
            if (DBL_PTR(_27352)->dbl != 0.0){
                DeRef(_27352);
                _27352 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        DeRef(_27352);
        _27352 = NOVALUE;
        // SubProg check_inline pc: 836 op: STARTLINE (58)

        /** inline.e:524						defer()*/
        // SubProg check_inline pc: 838 op: PROC (27)
        _67defer();
        // SubProg check_inline pc: 840 op: STARTLINE (58)

        /** inline.e:525						restore_code()*/
        // SubProg check_inline pc: 842 op: PROC (27)
        _67restore_code();
        // SubProg check_inline pc: 844 op: STARTLINE (58)

        /** inline.e:526						return*/
        // SubProg check_inline pc: 846 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: WHILE-

// block var op_53477

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
        DeRefi(_backpatch_op_53473);
        DeRef(_27330);
        _27330 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        DeRef(_27289);
        _27289 = NOVALUE;
        DeRef(_27327);
        _27327 = NOVALUE;
        DeRef(_27340);
        _27340 = NOVALUE;
        _27285 = NOVALUE;
        _27345 = NOVALUE;
        DeRef(_27306);
        _27306 = NOVALUE;
        DeRef(_27338);
        _27338 = NOVALUE;
        DeRef(_27322);
        _27322 = NOVALUE;
        DeRef(_27295);
        _27295 = NOVALUE;
        DeRef(_27313);
        _27313 = NOVALUE;
        DeRef(_27344);
        _27344 = NOVALUE;
        DeRef(_27326);
        _27326 = NOVALUE;
        DeRef(_27333);
        _27333 = NOVALUE;
        return;
        // SubProg check_inline pc: 849 op: NOP1 (159)
L1D: // addr: 850 pc: 849 sub: 53401 op: 159
        // SubProg check_inline pc: 850 op: NOPSWITCH (187)
    ;}LF: // addr: 851 pc: 850 sub: 53401 op: 187
    // SubProg check_inline pc: 851 op: STARTLINE (58)

    /** inline.e:530			pc = advance( pc, inline_code )*/
    // SubProg check_inline pc: 853 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 855 op: PROC (27)
    RefDS(_67inline_code_52885);
    _pc_53433 = _67advance(_pc_53433, _67inline_code_52885);
    // SubProg check_inline pc: 860 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53433)) {
        _1 = (object)(DBL_PTR(_pc_53433)->dbl);
        DeRefDS(_pc_53433);
        _pc_53433 = _1;
    }
    // SubProg check_inline pc: 862 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53477
    // SubProg check_inline pc: 864 op: STARTLINE (58)

    /** inline.e:532		end while*/
    // SubProg check_inline pc: 866 op: ENDWHILE (22)
    goto LD; // [866] 347
    // SubProg check_inline pc: 868 op: NOP1 (159)
LE: // addr: 869 pc: 868 sub: 53401 op: 159
    // SubProg check_inline pc: 869 op: STARTLINE (58)

    /** inline.e:534		SymTab[sub][S_INLINE] = { sort( assigned_params ), inline_code, backpatch_op }*/
    // SubProg check_inline pc: 871 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 873 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sub_53404 + ((s1_ptr)_2)->base);
    // SubProg check_inline pc: 878 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 880 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 882 op: PROC (27)
    RefDS(_67assigned_params_52891);
    _27357 = _24sort(_67assigned_params_52891, 1);
    // SubProg check_inline pc: 887 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 889 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _27357;
    RefDS(_67inline_code_52885);
    ((intptr_t*)_2)[2] = _67inline_code_52885;
    RefDS(_backpatch_op_53473);
    ((intptr_t*)_2)[3] = _backpatch_op_53473;
    _27358 = MAKE_SEQ(_1);
    _27357 = NOVALUE;
    // SubProg check_inline pc: 895 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 29);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27358;
    if( _1 != _27358 ){
        DeRef(_1);
    }
    _27358 = NOVALUE;
    _27355 = NOVALUE;
    // SubProg check_inline pc: 899 op: STARTLINE (58)

    /** inline.e:535		restore_code()*/
    // SubProg check_inline pc: 901 op: PROC (27)
    _67restore_code();
    // SubProg check_inline pc: 903 op: STARTLINE (58)

    /** inline.e:536	end procedure*/
    // SubProg check_inline pc: 905 op: RETURNP (29)

// Exiting block BLOCK: check_inline

// block var sub_53404

// block var pc_53433

// block var s_53435

// block var backpatch_op_53473
    DeRefDSi(_backpatch_op_53473);
    DeRef(_27330);
    _27330 = NOVALUE;
    DeRef(_27292);
    _27292 = NOVALUE;
    DeRef(_27289);
    _27289 = NOVALUE;
    DeRef(_27327);
    _27327 = NOVALUE;
    DeRef(_27340);
    _27340 = NOVALUE;
    _27285 = NOVALUE;
    _27345 = NOVALUE;
    DeRef(_27306);
    _27306 = NOVALUE;
    DeRef(_27338);
    _27338 = NOVALUE;
    DeRef(_27322);
    _27322 = NOVALUE;
    DeRef(_27295);
    _27295 = NOVALUE;
    DeRef(_27313);
    _27313 = NOVALUE;
    DeRef(_27344);
    _27344 = NOVALUE;
    DeRef(_27326);
    _27326 = NOVALUE;
    DeRef(_27333);
    _27333 = NOVALUE;
    return;
    // SubProg check_inline pc: 908 op: BADRETURNF (43)
    ;
}


void _67replace_temp(object _pc_53582)
{
    object _temp_num_53583 = NOVALUE;
    object _needed_53586 = NOVALUE;
    object _27371 = NOVALUE; // 53605 27371
    object _27370 = NOVALUE; // 53604 27370
    object _27369 = NOVALUE; // 53600 27369
    object _27368 = NOVALUE; // 53599 27368
// skipping _27367  name type: 0
    object _27366 = NOVALUE; // 53594 27366
// skipping _27365  name type: 0
    object _27364 = NOVALUE; // 53591 27364
// skipping _27363  name type: 0
// skipping _27362  name type: 0
    object _27361 = NOVALUE; // 53587 27361
// skipping _27360  name type: 0
    object _27359 = NOVALUE; // 53584 27359
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg replace_temp pc: 3 op: STARTLINE (58)

    /** inline.e:539		integer temp_num = inline_code[pc][2]*/
    // SubProg replace_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27359 = (object)*(((s1_ptr)_2)->base + _pc_53582);
    // SubProg replace_temp pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27359);
    _temp_num_53583 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_temp_num_53583)){
        _temp_num_53583 = (object)DBL_PTR(_temp_num_53583)->dbl;
    }
    _27359 = NOVALUE;
    // SubProg replace_temp pc: 17 op: STARTLINE (58)

    /** inline.e:540		integer needed = temp_num - length( inline_temps )*/
    // SubProg replace_temp pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_temps_52887)){
            _27361 = SEQ_PTR(_67inline_temps_52887)->length;
    }
    else {
        _27361 = 1;
    }
    // SubProg replace_temp pc: 24 op: MINUS_I (116)
    _needed_53586 = _temp_num_53583 - _27361;
    _27361 = NOVALUE;
    // SubProg replace_temp pc: 28 op: STARTLINE (58)

    /** inline.e:541		if needed > 0 then*/
    // SubProg replace_temp pc: 30 op: GREATER_IFW_I (124)
    if (_needed_53586 <= 0)
    goto L1; // [30] 47
    // SubProg replace_temp pc: 34 op: STARTLINE (58)

    /** inline.e:542			inline_temps &= repeat( 0, needed )*/
    // SubProg replace_temp pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 38 op: REPEAT (32)
    _27364 = Repeat(0, _needed_53586);
    // SubProg replace_temp pc: 42 op: CONCAT (15)
    Concat((object_ptr)&_67inline_temps_52887, _67inline_temps_52887, _27364);
    DeRefDS(_27364);
    _27364 = NOVALUE;
    // SubProg replace_temp pc: 46 op: NOP1 (159)
L1: // addr: 47 pc: 46 sub: 53580 op: 159
    // SubProg replace_temp pc: 47 op: STARTLINE (58)

    /** inline.e:545		if not inline_temps[temp_num] then*/
    // SubProg replace_temp pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_temps_52887);
    _27366 = (object)*(((s1_ptr)_2)->base + _temp_num_53583);
    // SubProg replace_temp pc: 55 op: NOT_IFW (108)
    if (IS_ATOM_INT(_27366)) {
        if (_27366 != 0){
            _27366 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    else {
        if (DBL_PTR(_27366)->dbl != 0.0){
            _27366 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    _27366 = NOVALUE;
    // SubProg replace_temp pc: 58 op: STARTLINE (58)

    /** inline.e:546			if TRANSLATE then*/
    // SubProg replace_temp pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 62 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L3; // [62] 84
    }
    else{
    }
    // SubProg replace_temp pc: 65 op: STARTLINE (58)

    /** inline.e:547				inline_temps[temp_num] = new_inline_var( -temp_num, 0 )*/
    // SubProg replace_temp pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 69 op: UMINUS (12)
    if ((uintptr_t)_temp_num_53583 == (uintptr_t)HIGH_BITS){
        _27368 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27368 = - _temp_num_53583;
    }
    // SubProg replace_temp pc: 72 op: PROC (27)
    _27369 = _67new_inline_var(_27368, 0);
    _27368 = NOVALUE;
    // SubProg replace_temp pc: 77 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_temps_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_temps_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53583);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27369;
    if( _1 != _27369 ){
        DeRef(_1);
    }
    _27369 = NOVALUE;
    // SubProg replace_temp pc: 81 op: ELSE (23)
    goto L4; // [81] 99
    // SubProg replace_temp pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 53580 op: 159
    // SubProg replace_temp pc: 84 op: STARTLINE (58)

    /** inline.e:549				inline_temps[temp_num] = NewTempSym( TRUE )*/
    // SubProg replace_temp pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 90 op: PROC (27)
    _27370 = _54NewTempSym(_13TRUE_452);
    // SubProg replace_temp pc: 94 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_temps_52887);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_temps_52887 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53583);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27370;
    if( _1 != _27370 ){
        DeRef(_1);
    }
    _27370 = NOVALUE;
    // SubProg replace_temp pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 53580 op: 159
    // SubProg replace_temp pc: 99 op: NOP1 (159)
L2: // addr: 100 pc: 99 sub: 53580 op: 159
    // SubProg replace_temp pc: 100 op: STARTLINE (58)

    /** inline.e:554		inline_code[pc] = inline_temps[temp_num]*/
    // SubProg replace_temp pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 106 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_temps_52887);
    _27371 = (object)*(((s1_ptr)_2)->base + _temp_num_53583);
    // SubProg replace_temp pc: 110 op: ASSIGN_SUBS (16)
    Ref(_27371);
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53582);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27371;
    if( _1 != _27371 ){
        DeRef(_1);
    }
    _27371 = NOVALUE;
    // SubProg replace_temp pc: 114 op: STARTLINE (58)

    /** inline.e:555	end procedure*/
    // SubProg replace_temp pc: 116 op: RETURNP (29)

// Exiting block BLOCK: replace_temp

// block var pc_53582

// block var temp_num_53583

// block var needed_53586
    return;
    // SubProg replace_temp pc: 119 op: BADRETURNF (43)
    ;
}


object _67get_param_sym(object _pc_53608)
{
    object _il_53609 = NOVALUE;
    object _px_53617 = NOVALUE;
    object _27378 = NOVALUE; // 53619 27378
// skipping _27377  name type: 0
// skipping _27376  name type: 0
    object _27375 = NOVALUE; // 53615 27375
    object _27374 = NOVALUE; // 53613 27374
    object _27373 = NOVALUE; // 53612 27373
// skipping _27372  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_param_sym pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_param_sym pc: 3 op: STARTLINE (58)

    /** inline.e:558		object il = inline_code[pc]*/
    // SubProg get_param_sym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 7 op: RHS_SUBS (25)
    DeRef(_il_53609);
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _il_53609 = (object)*(((s1_ptr)_2)->base + _pc_53608);
    Ref(_il_53609);
    // SubProg get_param_sym pc: 11 op: STARTLINE (58)

    /** inline.e:559		if integer( il ) then*/
    // SubProg get_param_sym pc: 13 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_il_53609))
    _27373 = 1;
    else if (IS_ATOM_DBL(_il_53609))
    _27373 = IS_ATOM_INT(DoubleToInt(_il_53609));
    else
    _27373 = 0;
    // SubProg get_param_sym pc: 16 op: IF (20)
    if (_27373 == 0)
    {
        _27373 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27373 = NOVALUE;
    }
    // SubProg get_param_sym pc: 19 op: STARTLINE (58)

    /** inline.e:560			return inline_code[pc]*/
    // SubProg get_param_sym pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27374 = (object)*(((s1_ptr)_2)->base + _pc_53608);
    // SubProg get_param_sym pc: 27 op: RETURNF (28)
    Ref(_27374);

// Exiting block BLOCK: get_param_sym

// block var pc_53608

// block var il_53609
    DeRef(_il_53609);

// block var px_53617
    return _27374;
    // SubProg get_param_sym pc: 31 op: ELSE (23)
    goto L2; // [31] 53
    // SubProg get_param_sym pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53606 op: 159
    // SubProg get_param_sym pc: 34 op: STARTLINE (58)

    /** inline.e:562		elsif length( il ) = 1 then*/
    // SubProg get_param_sym pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_il_53609)){
            _27375 = SEQ_PTR(_il_53609)->length;
    }
    else {
        _27375 = 1;
    }
    // SubProg get_param_sym pc: 39 op: EQUALS_IFW_I (121)
    if (_27375 != 1)
    goto L3; // [39] 52
    // SubProg get_param_sym pc: 43 op: STARTLINE (58)

    /** inline.e:563			return inline_target*/
    // SubProg get_param_sym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_param_sym

// block var pc_53608

// block var il_53609
    DeRef(_il_53609);

// block var px_53617
    _27374 = NOVALUE;
    return _67inline_target_52892;
    // SubProg get_param_sym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 53606 op: 159
    // SubProg get_param_sym pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 53606 op: 159
    // SubProg get_param_sym pc: 53 op: STARTLINE (58)

    /** inline.e:567		integer px = il[2]*/
    // SubProg get_param_sym pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_il_53609);
    _px_53617 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53617)){
        _px_53617 = (object)DBL_PTR(_px_53617)->dbl;
    }
    // SubProg get_param_sym pc: 61 op: STARTLINE (58)

    /** inline.e:568		return passed_params[px]*/
    // SubProg get_param_sym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67passed_params_52888);
    _27378 = (object)*(((s1_ptr)_2)->base + _px_53617);
    // SubProg get_param_sym pc: 69 op: RETURNF (28)
    Ref(_27378);

// Exiting block BLOCK: get_param_sym

// block var pc_53608

// block var il_53609
    DeRef(_il_53609);

// block var px_53617
    _27374 = NOVALUE;
    return _27378;
    // SubProg get_param_sym pc: 73 op: BADRETURNF (43)
    ;
}


object _67get_original_sym(object _pc_53622)
{
    object _il_53623 = NOVALUE;
    object _px_53631 = NOVALUE;
    object _27385 = NOVALUE; // 53633 27385
// skipping _27384  name type: 0
// skipping _27383  name type: 0
    object _27382 = NOVALUE; // 53629 27382
    object _27381 = NOVALUE; // 53627 27381
    object _27380 = NOVALUE; // 53626 27380
// skipping _27379  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_original_sym pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53622)) {
        _1 = (object)(DBL_PTR(_pc_53622)->dbl);
        DeRefDS(_pc_53622);
        _pc_53622 = _1;
    }
    // SubProg get_original_sym pc: 3 op: STARTLINE (58)

    /** inline.e:572		object il = inline_code[pc]*/
    // SubProg get_original_sym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 7 op: RHS_SUBS (25)
    DeRef(_il_53623);
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _il_53623 = (object)*(((s1_ptr)_2)->base + _pc_53622);
    Ref(_il_53623);
    // SubProg get_original_sym pc: 11 op: STARTLINE (58)

    /** inline.e:573		if integer( il ) then*/
    // SubProg get_original_sym pc: 13 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_il_53623))
    _27380 = 1;
    else if (IS_ATOM_DBL(_il_53623))
    _27380 = IS_ATOM_INT(DoubleToInt(_il_53623));
    else
    _27380 = 0;
    // SubProg get_original_sym pc: 16 op: IF (20)
    if (_27380 == 0)
    {
        _27380 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27380 = NOVALUE;
    }
    // SubProg get_original_sym pc: 19 op: STARTLINE (58)

    /** inline.e:574			return inline_code[pc]*/
    // SubProg get_original_sym pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27381 = (object)*(((s1_ptr)_2)->base + _pc_53622);
    // SubProg get_original_sym pc: 27 op: RETURNF (28)
    Ref(_27381);

// Exiting block BLOCK: get_original_sym

// block var pc_53622

// block var il_53623
    DeRef(_il_53623);

// block var px_53631
    return _27381;
    // SubProg get_original_sym pc: 31 op: ELSE (23)
    goto L2; // [31] 53
    // SubProg get_original_sym pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53620 op: 159
    // SubProg get_original_sym pc: 34 op: STARTLINE (58)

    /** inline.e:576		elsif length( il ) = 1 then*/
    // SubProg get_original_sym pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_il_53623)){
            _27382 = SEQ_PTR(_il_53623)->length;
    }
    else {
        _27382 = 1;
    }
    // SubProg get_original_sym pc: 39 op: EQUALS_IFW_I (121)
    if (_27382 != 1)
    goto L3; // [39] 52
    // SubProg get_original_sym pc: 43 op: STARTLINE (58)

    /** inline.e:577			return inline_target*/
    // SubProg get_original_sym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_original_sym

// block var pc_53622

// block var il_53623
    DeRef(_il_53623);

// block var px_53631
    _27381 = NOVALUE;
    return _67inline_target_52892;
    // SubProg get_original_sym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 53620 op: 159
    // SubProg get_original_sym pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 53620 op: 159
    // SubProg get_original_sym pc: 53 op: STARTLINE (58)

    /** inline.e:581		integer px = il[2]*/
    // SubProg get_original_sym pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_il_53623);
    _px_53631 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53631)){
        _px_53631 = (object)DBL_PTR(_px_53631)->dbl;
    }
    // SubProg get_original_sym pc: 61 op: STARTLINE (58)

    /** inline.e:582		return original_params[px]*/
    // SubProg get_original_sym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67original_params_52889);
    _27385 = (object)*(((s1_ptr)_2)->base + _px_53631);
    // SubProg get_original_sym pc: 69 op: RETURNF (28)
    Ref(_27385);

// Exiting block BLOCK: get_original_sym

// block var pc_53622

// block var il_53623
    DeRef(_il_53623);

// block var px_53631
    _27381 = NOVALUE;
    return _27385;
    // SubProg get_original_sym pc: 73 op: BADRETURNF (43)
    ;
}


void _67replace_var(object _pc_53640)
{
    object _27389 = NOVALUE; // 53643 27389
    object _27388 = NOVALUE; // 53642 27388
    object _27387 = NOVALUE; // 53641 27387
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_var pc: 1 op: INTEGER_CHECK (96)
    // SubProg replace_var pc: 3 op: STARTLINE (58)

    /** inline.e:590		inline_code[pc] = proc_vars[inline_code[pc][2]]*/
    // SubProg replace_var pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27387 = (object)*(((s1_ptr)_2)->base + _pc_53640);
    // SubProg replace_var pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27387);
    _27388 = (object)*(((s1_ptr)_2)->base + 2);
    _27387 = NOVALUE;
    // SubProg replace_var pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67proc_vars_52886);
    if (!IS_ATOM_INT(_27388)){
        _27389 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27388)->dbl));
    }
    else{
        _27389 = (object)*(((s1_ptr)_2)->base + _27388);
    }
    // SubProg replace_var pc: 23 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53640);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27389;
    if( _1 != _27389 ){
        DeRef(_1);
    }
    _27389 = NOVALUE;
    // SubProg replace_var pc: 27 op: STARTLINE (58)

    /** inline.e:591	end procedure*/
    // SubProg replace_var pc: 29 op: RETURNP (29)

// Exiting block BLOCK: replace_var

// block var pc_53640
    _27388 = NOVALUE;
    return;
    // SubProg replace_var pc: 32 op: BADRETURNF (43)
    ;
}


void _67fix_switch_rt(object _pc_53646)
{
    object _value_table_53648 = NOVALUE;
    object _jump_table_53655 = NOVALUE;
    object _27409 = NOVALUE; // 53682 27409
    object _27408 = NOVALUE; // 53681 27408
    object _27407 = NOVALUE; // 53680 27407
    object _27406 = NOVALUE; // 53678 27406
    object _27405 = NOVALUE; // 53677 27405
    object _27404 = NOVALUE; // 53676 27404
// skipping _27403  name type: 0
    object _27402 = NOVALUE; // 53672 27402
    object _27401 = NOVALUE; // 53670 27401
    object _27400 = NOVALUE; // 53668 27400
    object _27399 = NOVALUE; // 53667 27399
    object _27398 = NOVALUE; // 53666 27398
// skipping _27397  name type: 0
    object _27396 = NOVALUE; // 53662 27396
// skipping _27395  name type: 0
    object _27394 = NOVALUE; // 53659 27394
    object _27393 = NOVALUE; // 53658 27393
// skipping _27392  name type: 0
    object _27391 = NOVALUE; // 53652 27391
    object _27390 = NOVALUE; // 53651 27390
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg fix_switch_rt pc: 1 op: INTEGER_CHECK (96)
    // SubProg fix_switch_rt pc: 3 op: STARTLINE (58)

    /** inline.e:594		symtab_index value_table = NewStringSym( {-1, length(SymTab)} )*/
    // SubProg fix_switch_rt pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _27390 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _27390 = 1;
    }
    // SubProg fix_switch_rt pc: 10 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27390;
    _27391 = MAKE_SEQ(_1);
    _27390 = NOVALUE;
    // SubProg fix_switch_rt pc: 14 op: PROC (27)
    _value_table_53648 = _54NewStringSym(_27391);
    _27391 = NOVALUE;
    // SubProg fix_switch_rt pc: 18 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_value_table_53648)) {
        _1 = (object)(DBL_PTR(_value_table_53648)->dbl);
        DeRefDS(_value_table_53648);
        _value_table_53648 = _1;
    }
    // SubProg fix_switch_rt pc: 20 op: STARTLINE (58)

    /** inline.e:595		symtab_index jump_table  = NewStringSym( {-1, length(SymTab)} )*/
    // SubProg fix_switch_rt pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _27393 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _27393 = 1;
    }
    // SubProg fix_switch_rt pc: 27 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27393;
    _27394 = MAKE_SEQ(_1);
    _27393 = NOVALUE;
    // SubProg fix_switch_rt pc: 31 op: PROC (27)
    _jump_table_53655 = _54NewStringSym(_27394);
    _27394 = NOVALUE;
    // SubProg fix_switch_rt pc: 35 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_jump_table_53655)) {
        _1 = (object)(DBL_PTR(_jump_table_53655)->dbl);
        DeRefDS(_jump_table_53655);
        _jump_table_53655 = _1;
    }
    // SubProg fix_switch_rt pc: 37 op: STARTLINE (58)

    /** inline.e:597		SymTab[value_table][S_OBJ] = SymTab[inline_code[pc+2]][S_OBJ]*/
    // SubProg fix_switch_rt pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 41 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_value_table_53648 + ((s1_ptr)_2)->base);
    // SubProg fix_switch_rt pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 52 op: PLUS (11)
    _27398 = _pc_53646 + 2;
    // SubProg fix_switch_rt pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27399 = (object)*(((s1_ptr)_2)->base + _27398);
    // SubProg fix_switch_rt pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_27399)){
        _27400 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27399)->dbl));
    }
    else{
        _27400 = (object)*(((s1_ptr)_2)->base + _27399);
    }
    // SubProg fix_switch_rt pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 66 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27400);
    _27401 = (object)*(((s1_ptr)_2)->base + 1);
    _27400 = NOVALUE;
    // SubProg fix_switch_rt pc: 70 op: PASSIGN_SUBS (162)
    Ref(_27401);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27401;
    if( _1 != _27401 ){
        DeRef(_1);
    }
    _27401 = NOVALUE;
    _27396 = NOVALUE;
    // SubProg fix_switch_rt pc: 74 op: STARTLINE (58)

    /** inline.e:598		SymTab[jump_table][S_OBJ]  = SymTab[inline_code[pc+3]][S_OBJ]*/
    // SubProg fix_switch_rt pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 78 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_jump_table_53655 + ((s1_ptr)_2)->base);
    // SubProg fix_switch_rt pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 89 op: PLUS (11)
    _27404 = _pc_53646 + 3;
    // SubProg fix_switch_rt pc: 93 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _27405 = (object)*(((s1_ptr)_2)->base + _27404);
    // SubProg fix_switch_rt pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_27405)){
        _27406 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27405)->dbl));
    }
    else{
        _27406 = (object)*(((s1_ptr)_2)->base + _27405);
    }
    // SubProg fix_switch_rt pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27406);
    _27407 = (object)*(((s1_ptr)_2)->base + 1);
    _27406 = NOVALUE;
    // SubProg fix_switch_rt pc: 107 op: PASSIGN_SUBS (162)
    Ref(_27407);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27407;
    if( _1 != _27407 ){
        DeRef(_1);
    }
    _27407 = NOVALUE;
    _27402 = NOVALUE;
    // SubProg fix_switch_rt pc: 111 op: STARTLINE (58)

    /** inline.e:600		inline_code[pc+2] = value_table*/
    // SubProg fix_switch_rt pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 115 op: PLUS (11)
    _27408 = _pc_53646 + 2;
    // SubProg fix_switch_rt pc: 119 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27408);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _value_table_53648;
    DeRef(_1);
    // SubProg fix_switch_rt pc: 123 op: STARTLINE (58)

    /** inline.e:601		inline_code[pc+3] = jump_table*/
    // SubProg fix_switch_rt pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 127 op: PLUS (11)
    _27409 = _pc_53646 + 3;
    // SubProg fix_switch_rt pc: 131 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67inline_code_52885 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27409);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _jump_table_53655;
    DeRef(_1);
    // SubProg fix_switch_rt pc: 135 op: STARTLINE (58)

    /** inline.e:603	end procedure*/
    // SubProg fix_switch_rt pc: 137 op: RETURNP (29)

// Exiting block BLOCK: fix_switch_rt

// block var pc_53646

// block var value_table_53648

// block var jump_table_53655
    _27404 = NOVALUE;
    _27399 = NOVALUE;
    _27409 = NOVALUE;
    _27408 = NOVALUE;
    _27405 = NOVALUE;
    _27398 = NOVALUE;
    return;
    // SubProg fix_switch_rt pc: 140 op: BADRETURNF (43)
    ;
}


void _67fixup_special_op(object _pc_53685)
{
    object _op_53686 = NOVALUE;
// skipping _27410  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fixup_special_op pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53685)) {
        _1 = (object)(DBL_PTR(_pc_53685)->dbl);
        DeRefDS(_pc_53685);
        _pc_53685 = _1;
    }
    // SubProg fixup_special_op pc: 3 op: STARTLINE (58)

    /** inline.e:606		integer op = inline_code[pc]*/
    // SubProg fixup_special_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg fixup_special_op pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _op_53686 = (object)*(((s1_ptr)_2)->base + _pc_53685);
    if (!IS_ATOM_INT(_op_53686))
    _op_53686 = (object)DBL_PTR(_op_53686)->dbl;
    // SubProg fixup_special_op pc: 11 op: STARTLINE (58)

    /** inline.e:607		switch op with fallthru do*/
    // SubProg fixup_special_op pc: 13 op: SWITCH_I (193)
    _0 = _op_53686;
    switch ( _0 ){ 
        // SubProg fixup_special_op pc: 18 op: STARTLINE (58)

        /** inline.e:608			case SWITCH_RT then*/
        // SubProg fixup_special_op pc: 20 op: CASE (186)
        case 202:
        // SubProg fixup_special_op pc: 22 op: STARTLINE (58)

        /** inline.e:609				fix_switch_rt( pc )*/
        // SubProg fixup_special_op pc: 24 op: PROC (27)
        _67fix_switch_rt(_pc_53685);
        // SubProg fixup_special_op pc: 27 op: STARTLINE (58)

        /** inline.e:610				break*/
        // SubProg fixup_special_op pc: 29 op: ELSE (23)
        goto L1; // [29] 32
        // SubProg fixup_special_op pc: 31 op: NOPSWITCH (187)
    ;}L1: // addr: 32 pc: 31 sub: 53683 op: 187
    // SubProg fixup_special_op pc: 32 op: STARTLINE (58)

    /** inline.e:612	end procedure*/
    // SubProg fixup_special_op pc: 34 op: RETURNP (29)

// Exiting block BLOCK: fixup_special_op

// block var pc_53685

// block var op_53686
    return;
    // SubProg fixup_special_op pc: 37 op: BADRETURNF (43)
    ;
}


object _67new_inline_var(object _ps_53697, object _reuse_53698)
{
    object _var_53700 = NOVALUE;
    object _vtype_53701 = NOVALUE;
    object _name_53702 = NOVALUE;
    object _s_53704 = NOVALUE;
    object _27472 = NOVALUE; // 53830 27472
    object _27471 = NOVALUE; // 53824 27471
// skipping _27470  name type: 0
    object _27469 = NOVALUE; // 53818 27469
// skipping _27468  name type: 0
// skipping _27467  name type: 0
    object _27466 = NOVALUE; // 53810 27466
    object _27465 = NOVALUE; // 53809 27465
// skipping _27464  name type: 0
    object _27463 = NOVALUE; // 53806 27463
// skipping _27462  name type: 0
// skipping _27461  name type: 0
    object _27460 = NOVALUE; // 53796 27460
    object _27459 = NOVALUE; // 53794 27459
    object _27458 = NOVALUE; // 53792 27458
// skipping _27457  name type: 0
    object _27456 = NOVALUE; // 53788 27456
// skipping _27455  name type: 0
// skipping _27454  name type: 0
// skipping _27453  name type: 0
// skipping _27452  name type: 0
    object _27451 = NOVALUE; // 53771 27451
// skipping _27449  name type: 0
// skipping _27447  name type: 0
    object _27446 = NOVALUE; // 53764 27446
    object _27445 = NOVALUE; // 53763 27445
    object _27444 = NOVALUE; // 53762 27444
    object _27443 = NOVALUE; // 53760 27443
// skipping _27441  name type: 0
    object _27440 = NOVALUE; // 53754 27440
// skipping _27439  name type: 0
    object _27438 = NOVALUE; // 53751 27438
// skipping _27436  name type: 0
    object _27435 = NOVALUE; // 53747 27435
// skipping _27433  name type: 0
// skipping _27432  name type: 0
// skipping _27431  name type: 0
    object _27430 = NOVALUE; // 53736 27430
    object _27429 = NOVALUE; // 53735 27429
    object _27428 = NOVALUE; // 53733 27428
    object _27427 = NOVALUE; // 53731 27427
    object _27426 = NOVALUE; // 53729 27426
// skipping _27424  name type: 0
    object _27423 = NOVALUE; // 53724 27423
    object _27422 = NOVALUE; // 53723 27422
    object _27421 = NOVALUE; // 53721 27421
    object _27420 = NOVALUE; // 53719 27420
    object _27419 = NOVALUE; // 53717 27419
// skipping _27417  name type: 0
// skipping _27416  name type: 0
// skipping _27415  name type: 0
// skipping _27414  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg new_inline_var pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ps_53697)) {
        _1 = (object)(DBL_PTR(_ps_53697)->dbl);
        DeRefDS(_ps_53697);
        _ps_53697 = _1;
    }
    // SubProg new_inline_var pc: 3 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 5 op: STARTLINE (58)

    /** inline.e:622			var = 0, */
    // SubProg new_inline_var pc: 7 op: ASSIGN (18)
    _var_53700 = 0;
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
    if (_ps_53697 <= 0)
    goto L1; // [45] 222
    // SubProg new_inline_var pc: 49 op: STARTLINE (58)

    /** inline.e:633				s = ps*/
    // SubProg new_inline_var pc: 51 op: ASSIGN (18)
    _s_53704 = _ps_53697;
    // SubProg new_inline_var pc: 54 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 56 op: STARTLINE (58)

    /** inline.e:634				if TRANSLATE then*/
    // SubProg new_inline_var pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 60 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L2; // [60] 102
    }
    else{
    }
    // SubProg new_inline_var pc: 63 op: STARTLINE (58)

    /** inline.e:635					name = sprintf( "%s_inlined_%s", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    // SubProg new_inline_var pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27419 = (object)*(((s1_ptr)_2)->base + _s_53704);
    // SubProg new_inline_var pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 73 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27419);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27420 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27420 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27419 = NOVALUE;
    // SubProg new_inline_var pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27421 = (object)*(((s1_ptr)_2)->base + _67inline_sub_52899);
    // SubProg new_inline_var pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27421);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27422 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27422 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27421 = NOVALUE;
    // SubProg new_inline_var pc: 91 op: RIGHT_BRACE_2 (85)
    Ref(_27422);
    Ref(_27420);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27420;
    ((intptr_t *)_2)[2] = _27422;
    _27423 = MAKE_SEQ(_1);
    _27422 = NOVALUE;
    _27420 = NOVALUE;
    // SubProg new_inline_var pc: 95 op: SPRINTF (53)
    DeRefi(_name_53702);
    _name_53702 = EPrintf(-9999999, _27418, _27423);
    DeRefDS(_27423);
    _27423 = NOVALUE;
    // SubProg new_inline_var pc: 99 op: ELSE (23)
    goto L3; // [99] 139
    // SubProg new_inline_var pc: 101 op: NOP1 (159)
L2: // addr: 102 pc: 101 sub: 53695 op: 159
    // SubProg new_inline_var pc: 102 op: STARTLINE (58)

    /** inline.e:637					name = sprintf( "%s (from inlined routine '%s'", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    // SubProg new_inline_var pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27426 = (object)*(((s1_ptr)_2)->base + _s_53704);
    // SubProg new_inline_var pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27426);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27427 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27427 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27426 = NOVALUE;
    // SubProg new_inline_var pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27428 = (object)*(((s1_ptr)_2)->base + _67inline_sub_52899);
    // SubProg new_inline_var pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27428);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27429 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27429 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27428 = NOVALUE;
    // SubProg new_inline_var pc: 130 op: RIGHT_BRACE_2 (85)
    Ref(_27429);
    Ref(_27427);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27427;
    ((intptr_t *)_2)[2] = _27429;
    _27430 = MAKE_SEQ(_1);
    _27429 = NOVALUE;
    _27427 = NOVALUE;
    // SubProg new_inline_var pc: 134 op: SPRINTF (53)
    DeRefi(_name_53702);
    _name_53702 = EPrintf(-9999999, _27425, _27430);
    DeRefDS(_27430);
    _27430 = NOVALUE;
    // SubProg new_inline_var pc: 138 op: NOP1 (159)
L3: // addr: 139 pc: 138 sub: 53695 op: 159
    // SubProg new_inline_var pc: 139 op: STARTLINE (58)

    /** inline.e:640				if reuse then*/
    // SubProg new_inline_var pc: 141 op: IF (20)
    if (_reuse_53698 == 0)
    {
        goto L4; // [141] 163
    }
    else{
    }
    // SubProg new_inline_var pc: 144 op: STARTLINE (58)

    /** inline.e:641					if not TRANSLATE then*/
    // SubProg new_inline_var pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 148 op: NOT_IFW (108)
    if (_36TRANSLATE_16061 != 0)
    goto L5; // [148] 203
    // SubProg new_inline_var pc: 151 op: STARTLINE (58)

    /** inline.e:642						name &= ")"*/
    // SubProg new_inline_var pc: 153 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 155 op: CONCAT (15)
    Concat((object_ptr)&_name_53702, _name_53702, _26195);
    // SubProg new_inline_var pc: 159 op: NOP1 (159)
    // SubProg new_inline_var pc: 160 op: ELSE (23)
    goto L5; // [160] 203
    // SubProg new_inline_var pc: 162 op: NOP1 (159)
L4: // addr: 163 pc: 162 sub: 53695 op: 159
    // SubProg new_inline_var pc: 163 op: STARTLINE (58)

    /** inline.e:645					if TRANSLATE then*/
    // SubProg new_inline_var pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 167 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
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
    _27435 = EPrintf(-9999999, _27434, _67inline_start_52897);
    // SubProg new_inline_var pc: 180 op: CONCAT (15)
    Concat((object_ptr)&_name_53702, _name_53702, _27435);
    DeRefDS(_27435);
    _27435 = NOVALUE;
    // SubProg new_inline_var pc: 184 op: ELSE (23)
    goto L7; // [184] 202
    // SubProg new_inline_var pc: 186 op: NOP1 (159)
L6: // addr: 187 pc: 186 sub: 53695 op: 159
    // SubProg new_inline_var pc: 187 op: STARTLINE (58)

    /** inline.e:648						name &= sprintf( " at %d)", inline_start)*/
    // SubProg new_inline_var pc: 189 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 193 op: SPRINTF (53)
    _27438 = EPrintf(-9999999, _27437, _67inline_start_52897);
    // SubProg new_inline_var pc: 197 op: CONCAT (15)
    Concat((object_ptr)&_name_53702, _name_53702, _27438);
    DeRefDS(_27438);
    _27438 = NOVALUE;
    // SubProg new_inline_var pc: 201 op: NOP1 (159)
L7: // addr: 202 pc: 201 sub: 53695 op: 159
    // SubProg new_inline_var pc: 202 op: NOP1 (159)
L5: // addr: 203 pc: 202 sub: 53695 op: 159
    // SubProg new_inline_var pc: 203 op: STARTLINE (58)

    /** inline.e:652				vtype = SymTab[s][S_VTYPE]*/
    // SubProg new_inline_var pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 207 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27440 = (object)*(((s1_ptr)_2)->base + _s_53704);
    // SubProg new_inline_var pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27440);
    _vtype_53701 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_vtype_53701)){
        _vtype_53701 = (object)DBL_PTR(_vtype_53701)->dbl;
    }
    _27440 = NOVALUE;
    // SubProg new_inline_var pc: 219 op: ELSE (23)
    goto L8; // [219] 286
    // SubProg new_inline_var pc: 221 op: NOP1 (159)
L1: // addr: 222 pc: 221 sub: 53695 op: 159
    // SubProg new_inline_var pc: 222 op: STARTLINE (58)

    /** inline.e:654				name = sprintf( "%s_%d", {SymTab[inline_sub][S_NAME], -ps})*/
    // SubProg new_inline_var pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 228 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27443 = (object)*(((s1_ptr)_2)->base + _67inline_sub_52899);
    // SubProg new_inline_var pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 234 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27443);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27444 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27444 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27443 = NOVALUE;
    // SubProg new_inline_var pc: 238 op: UMINUS (12)
    if ((uintptr_t)_ps_53697 == (uintptr_t)HIGH_BITS){
        _27445 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27445 = - _ps_53697;
    }
    // SubProg new_inline_var pc: 241 op: RIGHT_BRACE_2 (85)
    Ref(_27444);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27444;
    ((intptr_t *)_2)[2] = _27445;
    _27446 = MAKE_SEQ(_1);
    _27445 = NOVALUE;
    _27444 = NOVALUE;
    // SubProg new_inline_var pc: 245 op: SPRINTF (53)
    DeRefi(_name_53702);
    _name_53702 = EPrintf(-9999999, _27442, _27446);
    DeRefDS(_27446);
    _27446 = NOVALUE;
    // SubProg new_inline_var pc: 249 op: STARTLINE (58)

    /** inline.e:655				if reuse then*/
    // SubProg new_inline_var pc: 251 op: IF (20)
    if (_reuse_53698 == 0)
    {
        goto L9; // [251] 263
    }
    else{
    }
    // SubProg new_inline_var pc: 254 op: STARTLINE (58)

    /** inline.e:656					name &= "__tmp"*/
    // SubProg new_inline_var pc: 256 op: CONCAT (15)
    Concat((object_ptr)&_name_53702, _name_53702, _27448);
    // SubProg new_inline_var pc: 260 op: ELSE (23)
    goto LA; // [260] 276
    // SubProg new_inline_var pc: 262 op: NOP1 (159)
L9: // addr: 263 pc: 262 sub: 53695 op: 159
    // SubProg new_inline_var pc: 263 op: STARTLINE (58)

    /** inline.e:658					name &= sprintf( "__tmp_at%d", inline_start)*/
    // SubProg new_inline_var pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 267 op: SPRINTF (53)
    _27451 = EPrintf(-9999999, _27450, _67inline_start_52897);
    // SubProg new_inline_var pc: 271 op: CONCAT (15)
    Concat((object_ptr)&_name_53702, _name_53702, _27451);
    DeRefDS(_27451);
    _27451 = NOVALUE;
    // SubProg new_inline_var pc: 275 op: NOP1 (159)
LA: // addr: 276 pc: 275 sub: 53695 op: 159
    // SubProg new_inline_var pc: 276 op: STARTLINE (58)

    /** inline.e:660				vtype = object_type*/
    // SubProg new_inline_var pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 280 op: ASSIGN (18)
    _vtype_53701 = _54object_type_46255;
    // SubProg new_inline_var pc: 283 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 285 op: NOP1 (159)
L8: // addr: 286 pc: 285 sub: 53695 op: 159
    // SubProg new_inline_var pc: 286 op: STARTLINE (58)

    /** inline.e:662			if CurrentSub = TopLevelSub then*/
    // SubProg new_inline_var pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 292 op: EQUALS_IFW (104)
    if (_36CurrentSub_16444 != _36TopLevelSub_16443)
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
    RefDS(_name_53702);
    _var_53700 = _54NewEntry(_name_53702, _67varnum_52896, 5, -100, 2004, 0, _vtype_53701);
    // SubProg new_inline_var pc: 320 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53700)) {
        _1 = (object)(DBL_PTR(_var_53700)->dbl);
        DeRefDS(_var_53700);
        _var_53700 = _1;
    }
    // SubProg new_inline_var pc: 322 op: ELSE (23)
    goto LC; // [322] 416
    // SubProg new_inline_var pc: 324 op: NOP1 (159)
LB: // addr: 325 pc: 324 sub: 53695 op: 159
    // SubProg new_inline_var pc: 325 op: STARTLINE (58)

    /** inline.e:666				var = NewBasicEntry( name, varnum, SC_PRIVATE, VARIABLE, INLINE_HASHVAL, 0, vtype )*/
    // SubProg new_inline_var pc: 327 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 331 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 337 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 339 op: PROC (27)
    RefDS(_name_53702);
    _var_53700 = _54NewBasicEntry(_name_53702, _67varnum_52896, 3, -100, 2004, 0, _vtype_53701);
    // SubProg new_inline_var pc: 349 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53700)) {
        _1 = (object)(DBL_PTR(_var_53700)->dbl);
        DeRefDS(_var_53700);
        _var_53700 = _1;
    }
    // SubProg new_inline_var pc: 351 op: STARTLINE (58)

    /** inline.e:667				SymTab[var][S_NEXT] = SymTab[last_param][S_NEXT]*/
    // SubProg new_inline_var pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 355 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53700 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 360 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 366 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27458 = (object)*(((s1_ptr)_2)->base + _67last_param_52900);
    // SubProg new_inline_var pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 372 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27458);
    _27459 = (object)*(((s1_ptr)_2)->base + 2);
    _27458 = NOVALUE;
    // SubProg new_inline_var pc: 376 op: PASSIGN_SUBS (162)
    Ref(_27459);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27459;
    if( _1 != _27459 ){
        DeRef(_1);
    }
    _27459 = NOVALUE;
    _27456 = NOVALUE;
    // SubProg new_inline_var pc: 380 op: STARTLINE (58)

    /** inline.e:668				SymTab[last_param][S_NEXT] = var*/
    // SubProg new_inline_var pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 386 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_67last_param_52900 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 393 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _var_53700;
    DeRef(_1);
    _27460 = NOVALUE;
    // SubProg new_inline_var pc: 397 op: STARTLINE (58)

    /** inline.e:669				if last_param = last_sym then*/
    // SubProg new_inline_var pc: 399 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 401 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 403 op: EQUALS_IFW (104)
    if (_67last_param_52900 != _54last_sym_46264)
    goto LD; // [403] 415
    // SubProg new_inline_var pc: 407 op: STARTLINE (58)

    /** inline.e:670					last_sym = var*/
    // SubProg new_inline_var pc: 409 op: ASSIGN (18)
    _54last_sym_46264 = _var_53700;
    // SubProg new_inline_var pc: 412 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 414 op: NOP1 (159)
LD: // addr: 415 pc: 414 sub: 53695 op: 159
    // SubProg new_inline_var pc: 415 op: NOP1 (159)
LC: // addr: 416 pc: 415 sub: 53695 op: 159
    // SubProg new_inline_var pc: 416 op: STARTLINE (58)

    /** inline.e:673			if deferred_inlining then*/
    // SubProg new_inline_var pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 420 op: IF (20)
    if (_67deferred_inlining_52895 == 0)
    {
        goto LE; // [420] 451
    }
    else{
    }
    // SubProg new_inline_var pc: 423 op: STARTLINE (58)

    /** inline.e:674				SymTab[CurrentSub][S_STACK_SPACE] += 1*/
    // SubProg new_inline_var pc: 425 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 427 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 429 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36CurrentSub_16444 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 434 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 436 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151)){
        _27465 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    }
    else{
        _27465 = (object)*(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    }
    _27463 = NOVALUE;
    // SubProg new_inline_var pc: 440 op: PLUS1 (93)
    if (IS_ATOM_INT(_27465)) {
        _27466 = _27465 + 1;
        if (_27466 > MAXINT){
            _27466 = NewDouble((eudouble)_27466);
        }
    }
    else
    _27466 = binary_op(PLUS, 1, _27465);
    _27465 = NOVALUE;
    // SubProg new_inline_var pc: 444 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27466;
    if( _1 != _27466 ){
        DeRef(_1);
    }
    _27466 = NOVALUE;
    _27463 = NOVALUE;
    // SubProg new_inline_var pc: 448 op: ELSE (23)
    goto LF; // [448] 471
    // SubProg new_inline_var pc: 450 op: NOP1 (159)
LE: // addr: 451 pc: 450 sub: 53695 op: 159
    // SubProg new_inline_var pc: 451 op: STARTLINE (58)

    /** inline.e:676				if param_num != -1 then*/
    // SubProg new_inline_var pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 455 op: NOTEQ_IFW (105)
    if (_40param_num_54369 == -1)
    goto L10; // [455] 470
    // SubProg new_inline_var pc: 459 op: STARTLINE (58)

    /** inline.e:677					param_num += 1*/
    // SubProg new_inline_var pc: 461 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 463 op: PLUS (11)
    _40param_num_54369 = _40param_num_54369 + 1;
    // SubProg new_inline_var pc: 469 op: NOP1 (159)
L10: // addr: 470 pc: 469 sub: 53695 op: 159
    // SubProg new_inline_var pc: 470 op: NOP1 (159)
LF: // addr: 471 pc: 470 sub: 53695 op: 159
    // SubProg new_inline_var pc: 471 op: STARTLINE (58)

    /** inline.e:680			SymTab[var][S_USAGE] = U_USED*/
    // SubProg new_inline_var pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 475 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53700 + ((s1_ptr)_2)->base);
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
    _27469 = NOVALUE;
    // SubProg new_inline_var pc: 488 op: STARTLINE (58)

    /** inline.e:681			if reuse then*/
    // SubProg new_inline_var pc: 490 op: IF (20)
    if (_reuse_53698 == 0)
    {
        goto L11; // [490] 511
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
    ((intptr_t *)_2)[1] = _36CurrentSub_16444;
    ((intptr_t *)_2)[2] = _ps_53697;
    _27471 = MAKE_SEQ(_1);
    // SubProg new_inline_var pc: 503 op: PROC (27)
    Ref(_67inline_var_map_52904);
    _29nested_put(_67inline_var_map_52904, _27471, _var_53700, 1, 0);
    _27471 = NOVALUE;
    // SubProg new_inline_var pc: 510 op: NOP1 (159)
L11: // addr: 511 pc: 510 sub: 53695 op: 159
    // SubProg new_inline_var pc: 511 op: NOP1 (159)
    // SubProg new_inline_var pc: 512 op: STARTLINE (58)

    /** inline.e:686		Block_var( var )*/
    // SubProg new_inline_var pc: 514 op: PROC (27)
    _65Block_var(_var_53700);
    // SubProg new_inline_var pc: 517 op: STARTLINE (58)

    /** inline.e:687		if BIND then*/
    // SubProg new_inline_var pc: 519 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 521 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L12; // [521] 536
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
    ((intptr_t *)_2)[2] = _var_53700;
    _27472 = MAKE_SEQ(_1);
    // SubProg new_inline_var pc: 532 op: PROC (27)
    _54add_ref(_27472);
    _27472 = NOVALUE;
    // SubProg new_inline_var pc: 535 op: NOP1 (159)
L12: // addr: 536 pc: 535 sub: 53695 op: 159
    // SubProg new_inline_var pc: 536 op: STARTLINE (58)

    /** inline.e:690		return var*/
    // SubProg new_inline_var pc: 538 op: RETURNF (28)

// Exiting block BLOCK: new_inline_var

// block var ps_53697

// block var reuse_53698

// block var vtype_53701

// block var name_53702
    DeRefi(_name_53702);

// block var s_53704
    return _var_53700;
    // SubProg new_inline_var pc: 542 op: BADRETURNF (43)
    ;
}


object _67get_inlined_code(object _sub_53834, object _start_53835, object _deferred_53836)
{
    object _is_proc_53837 = NOVALUE;
    object _backpatches_53855 = NOVALUE;
    object _prolog_53861 = NOVALUE;
    object _epilog_53862 = NOVALUE;
    object _s_53878 = NOVALUE;
    object _last_sym_53901 = NOVALUE;
    object _int_sym_53928 = NOVALUE;
    object _param_53936 = NOVALUE;
    object _ax_53939 = NOVALUE;
    object _var_53946 = NOVALUE;
    object _final_target_53961 = NOVALUE;
    object _var_53980 = NOVALUE;
    object _create_target_var_53993 = NOVALUE;
    object _check_pc_54016 = NOVALUE;
    object _op_54020 = NOVALUE;
    object _sym_54029 = NOVALUE;
    object _check_result_54034 = NOVALUE;
    object _inline_type_54112 = NOVALUE;
    object _replace_param_1__tmp_at1341_54123 = NOVALUE;
    object _27627 = NOVALUE; // 54172 27627
    object _27626 = NOVALUE; // 54171 27626
    object _27625 = NOVALUE; // 54170 27625
    object _27624 = NOVALUE; // 54169 27624
    object _27623 = NOVALUE; // 54168 27623
    object _27622 = NOVALUE; // 54167 27622
    object _27621 = NOVALUE; // 54166 27621
    object _27620 = NOVALUE; // 54165 27620
// skipping _27619  name type: 0
    object _27618 = NOVALUE; // 54163 27618
// skipping _27617  name type: 0
// skipping _27616  name type: 0
    object _27615 = NOVALUE; // 54151 27615
// skipping _27614  name type: 0
// skipping _27613  name type: 0
    object _27612 = NOVALUE; // 54140 27612
    object _27611 = NOVALUE; // 54137 27611
    object _27610 = NOVALUE; // 54136 27610
    object _27609 = NOVALUE; // 54133 27609
    object _27608 = NOVALUE; // 54130 27608
    object _27607 = NOVALUE; // 54127 27607
    object _27606 = NOVALUE; // 54126 27606
    object _27605 = NOVALUE; // 54125 27605
// skipping _27602  name type: 0
    object _27601 = NOVALUE; // 54113 27601
    object _27600 = NOVALUE; // 54111 27600
    object _27599 = NOVALUE; // 54110 27599
    object _27598 = NOVALUE; // 54108 27598
// skipping _27597  name type: 0
// skipping _27596  name type: 0
// skipping _27595  name type: 0
    object _27594 = NOVALUE; // 54097 27594
    object _27593 = NOVALUE; // 54096 27593
    object _27592 = NOVALUE; // 54095 27592
    object _27591 = NOVALUE; // 54092 27591
    object _27590 = NOVALUE; // 54090 27590
    object _27589 = NOVALUE; // 54088 27589
    object _27588 = NOVALUE; // 54087 27588
// skipping _27587  name type: 0
    object _27586 = NOVALUE; // 54084 27586
    object _27585 = NOVALUE; // 54082 27585
    object _27584 = NOVALUE; // 54080 27584
    object _27583 = NOVALUE; // 54078 27583
    object _27582 = NOVALUE; // 54077 27582
    object _27581 = NOVALUE; // 54075 27581
    object _27580 = NOVALUE; // 54074 27580
    object _27579 = NOVALUE; // 54072 27579
    object _27578 = NOVALUE; // 54070 27578
    object _27577 = NOVALUE; // 54068 27577
    object _27576 = NOVALUE; // 54067 27576
// skipping _27575  name type: 0
    object _27574 = NOVALUE; // 54063 27574
    object _27572 = NOVALUE; // 54058 27572
// skipping _27571  name type: 0
    object _27570 = NOVALUE; // 54055 27570
    object _27569 = NOVALUE; // 54053 27569
// skipping _27568  name type: 0
    object _27567 = NOVALUE; // 54049 27567
    object _27566 = NOVALUE; // 54047 27566
// skipping _27565  name type: 0
// skipping _27564  name type: 0
    object _27563 = NOVALUE; // 54041 27563
    object _27562 = NOVALUE; // 54039 27562
// skipping _27561  name type: 0
    object _27560 = NOVALUE; // 54033 27560
// skipping _27559  name type: 0
    object _27558 = NOVALUE; // 54030 27558
// skipping _27555  name type: 0
// skipping _27554  name type: 0
    object _27553 = NOVALUE; // 54018 27553
// skipping _27552  name type: 0
// skipping _27551  name type: 0
// skipping _27550  name type: 0
    object _27549 = NOVALUE; // 54006 27549
// skipping _27548  name type: 0
// skipping _27547  name type: 0
    object _27546 = NOVALUE; // 53998 27546
// skipping _27545  name type: 0
// skipping _27544  name type: 0
// skipping _27543  name type: 0
    object _27542 = NOVALUE; // 53988 27542
// skipping _27541  name type: 0
// skipping _27540  name type: 0
// skipping _27539  name type: 0
// skipping _27538  name type: 0
// skipping _27537  name type: 0
// skipping _27536  name type: 0
    object _27535 = NOVALUE; // 53975 27535
    object _27534 = NOVALUE; // 53972 27534
    object _27533 = NOVALUE; // 53970 27533
    object _27532 = NOVALUE; // 53968 27532
    object _27531 = NOVALUE; // 53967 27531
    object _27530 = NOVALUE; // 53965 27530
    object _27529 = NOVALUE; // 53963 27529
// skipping _27528  name type: 0
    object _27527 = NOVALUE; // 53957 27527
// skipping _27526  name type: 0
// skipping _27525  name type: 0
// skipping _27524  name type: 0
// skipping _27523  name type: 0
    object _27522 = NOVALUE; // 53949 27522
// skipping _27521  name type: 0
// skipping _27520  name type: 0
    object _27519 = NOVALUE; // 53943 27519
// skipping _27518  name type: 0
// skipping _27517  name type: 0
// skipping _27516  name type: 0
// skipping _27515  name type: 0
    object _27514 = NOVALUE; // 53934 27514
    object _27513 = NOVALUE; // 53932 27513
// skipping _27512  name type: 0
    object _27511 = NOVALUE; // 53925 27511
    object _27510 = NOVALUE; // 53923 27510
    object _27509 = NOVALUE; // 53921 27509
// skipping _27508  name type: 0
// skipping _27507  name type: 0
    object _27506 = NOVALUE; // 53914 27506
    object _27505 = NOVALUE; // 53912 27505
    object _27504 = NOVALUE; // 53910 27504
    object _27503 = NOVALUE; // 53908 27503
    object _27502 = NOVALUE; // 53907 27502
    object _27501 = NOVALUE; // 53905 27501
    object _27500 = NOVALUE; // 53903 27500
// skipping _27499  name type: 0
    object _27498 = NOVALUE; // 53897 27498
    object _27497 = NOVALUE; // 53895 27497
    object _27496 = NOVALUE; // 53893 27496
// skipping _27495  name type: 0
    object _27494 = NOVALUE; // 53885 27494
// skipping _27493  name type: 0
    object _27492 = NOVALUE; // 53880 27492
    object _27491 = NOVALUE; // 53876 27491
    object _27490 = NOVALUE; // 53875 27490
    object _27489 = NOVALUE; // 53874 27489
    object _27488 = NOVALUE; // 53872 27488
    object _27487 = NOVALUE; // 53869 27487
    object _27486 = NOVALUE; // 53867 27486
// skipping _27484  name type: 0
    object _27483 = NOVALUE; // 53859 27483
    object _27482 = NOVALUE; // 53857 27482
// skipping _27481  name type: 0
    object _27480 = NOVALUE; // 53853 27480
    object _27479 = NOVALUE; // 53851 27479
// skipping _27478  name type: 0
    object _27477 = NOVALUE; // 53848 27477
    object _27476 = NOVALUE; // 53846 27476
// skipping _27475  name type: 0
    object _27474 = NOVALUE; // 53841 27474
    object _27473 = NOVALUE; // 53839 27473
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg get_inlined_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_start_53835)) {
        _1 = (object)(DBL_PTR(_start_53835)->dbl);
        DeRefDS(_start_53835);
        _start_53835 = _1;
    }
    // SubProg get_inlined_code pc: 5 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 7 op: STARTLINE (58)

    /** inline.e:694		integer is_proc = SymTab[sub][S_TOKEN] = PROC*/
    // SubProg get_inlined_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27473 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27473);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _27474 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _27474 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _27473 = NOVALUE;
    // SubProg get_inlined_code pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 23 op: EQUALS (3)
    if (IS_ATOM_INT(_27474)) {
        _is_proc_53837 = (_27474 == 27);
    }
    else {
        _is_proc_53837 = binary_op(EQUALS, _27474, 27);
    }
    _27474 = NOVALUE;
    // SubProg get_inlined_code pc: 27 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_proc_53837)) {
        _1 = (object)(DBL_PTR(_is_proc_53837)->dbl);
        DeRefDS(_is_proc_53837);
        _is_proc_53837 = _1;
    }
    // SubProg get_inlined_code pc: 29 op: STARTLINE (58)

    /** inline.e:695		clear_inline_targets()*/
    // SubProg get_inlined_code pc: 31 op: PROC (27)
    _47clear_inline_targets();
    // SubProg get_inlined_code pc: 33 op: STARTLINE (58)

    /** inline.e:697		inline_temps = {}*/
    // SubProg get_inlined_code pc: 35 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_67inline_temps_52887);
    _67inline_temps_52887 = _21933;
    // SubProg get_inlined_code pc: 38 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 40 op: STARTLINE (58)

    /** inline.e:698		inline_params = {}*/
    // SubProg get_inlined_code pc: 42 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_67inline_params_52890);
    _67inline_params_52890 = _21933;
    // SubProg get_inlined_code pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 47 op: STARTLINE (58)

    /** inline.e:699		assigned_params      = SymTab[sub][S_INLINE][1]*/
    // SubProg get_inlined_code pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27476 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27476);
    _27477 = (object)*(((s1_ptr)_2)->base + 29);
    _27476 = NOVALUE;
    // SubProg get_inlined_code pc: 61 op: RHS_SUBS_CHECK (92)
    DeRef(_67assigned_params_52891);
    _2 = (object)SEQ_PTR(_27477);
    _67assigned_params_52891 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_67assigned_params_52891);
    _27477 = NOVALUE;
    // SubProg get_inlined_code pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 67 op: STARTLINE (58)

    /** inline.e:700		inline_code          = SymTab[sub][S_INLINE][2]*/
    // SubProg get_inlined_code pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27479 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27479);
    _27480 = (object)*(((s1_ptr)_2)->base + 29);
    _27479 = NOVALUE;
    // SubProg get_inlined_code pc: 81 op: RHS_SUBS_CHECK (92)
    DeRef(_67inline_code_52885);
    _2 = (object)SEQ_PTR(_27480);
    _67inline_code_52885 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_67inline_code_52885);
    _27480 = NOVALUE;
    // SubProg get_inlined_code pc: 85 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 87 op: STARTLINE (58)

    /** inline.e:701		sequence backpatches = SymTab[sub][S_INLINE][3]*/
    // SubProg get_inlined_code pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27482 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27482);
    _27483 = (object)*(((s1_ptr)_2)->base + 29);
    _27482 = NOVALUE;
    // SubProg get_inlined_code pc: 101 op: RHS_SUBS_CHECK (92)
    DeRef(_backpatches_53855);
    _2 = (object)SEQ_PTR(_27483);
    _backpatches_53855 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_backpatches_53855);
    _27483 = NOVALUE;
    // SubProg get_inlined_code pc: 105 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 107 op: STARTLINE (58)

    /** inline.e:703		passed_params = {}*/
    // SubProg get_inlined_code pc: 109 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_67passed_params_52888);
    _67passed_params_52888 = _21933;
    // SubProg get_inlined_code pc: 112 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 114 op: STARTLINE (58)

    /** inline.e:704		original_params = {}*/
    // SubProg get_inlined_code pc: 116 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_67original_params_52889);
    _67original_params_52889 = _21933;
    // SubProg get_inlined_code pc: 119 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 121 op: STARTLINE (58)

    /** inline.e:705		proc_vars = {}*/
    // SubProg get_inlined_code pc: 123 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_67proc_vars_52886);
    _67proc_vars_52886 = _21933;
    // SubProg get_inlined_code pc: 126 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 128 op: STARTLINE (58)

    /** inline.e:706		sequence prolog = {}*/
    // SubProg get_inlined_code pc: 130 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_prolog_53861);
    _prolog_53861 = _21933;
    // SubProg get_inlined_code pc: 133 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 135 op: STARTLINE (58)

    /** inline.e:707		sequence epilog = {}*/
    // SubProg get_inlined_code pc: 137 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_epilog_53862);
    _epilog_53862 = _21933;
    // SubProg get_inlined_code pc: 140 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 142 op: STARTLINE (58)

    /** inline.e:709		Start_block( EXIT_BLOCK, sprintf("Inline-%s from %s @ %d", */
    // SubProg get_inlined_code pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27486 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27486);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27487 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27487 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27486 = NOVALUE;
    // SubProg get_inlined_code pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 162 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27488 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg get_inlined_code pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 168 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27488);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27489 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27489 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27488 = NOVALUE;
    // SubProg get_inlined_code pc: 172 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27487);
    ((intptr_t*)_2)[1] = _27487;
    Ref(_27489);
    ((intptr_t*)_2)[2] = _27489;
    ((intptr_t*)_2)[3] = _start_53835;
    _27490 = MAKE_SEQ(_1);
    _27489 = NOVALUE;
    _27487 = NOVALUE;
    // SubProg get_inlined_code pc: 178 op: SPRINTF (53)
    _27491 = EPrintf(-9999999, _27485, _27490);
    DeRefDS(_27490);
    _27490 = NOVALUE;
    // SubProg get_inlined_code pc: 182 op: PROC (27)
    _65Start_block(206, _27491);
    _27491 = NOVALUE;
    // SubProg get_inlined_code pc: 186 op: STARTLINE (58)

    /** inline.e:712		symtab_index s = SymTab[sub][S_NEXT]*/
    // SubProg get_inlined_code pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 190 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27492 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 196 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27492);
    _s_53878 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53878)){
        _s_53878 = (object)DBL_PTR(_s_53878)->dbl;
    }
    _27492 = NOVALUE;
    // SubProg get_inlined_code pc: 202 op: STARTLINE (58)

    /** inline.e:714		varnum = SymTab[CurrentSub][S_NUM_ARGS]*/
    // SubProg get_inlined_code pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 208 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27494 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg get_inlined_code pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 214 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27494);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _67varnum_52896 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _67varnum_52896 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    if (!IS_ATOM_INT(_67varnum_52896)){
        _67varnum_52896 = (object)DBL_PTR(_67varnum_52896)->dbl;
    }
    _27494 = NOVALUE;
    // SubProg get_inlined_code pc: 220 op: STARTLINE (58)

    /** inline.e:715		inline_start = start*/
    // SubProg get_inlined_code pc: 222 op: ASSIGN_I (113)
    _67inline_start_52897 = _start_53835;
    // SubProg get_inlined_code pc: 225 op: STARTLINE (58)

    /** inline.e:717		last_param = CurrentSub*/
    // SubProg get_inlined_code pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 229 op: ASSIGN (18)
    _67last_param_52900 = _36CurrentSub_16444;
    // SubProg get_inlined_code pc: 232 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 234 op: STARTLINE (58)

    /** inline.e:718		for p = 1 to SymTab[CurrentSub][S_NUM_ARGS] do*/
    // SubProg get_inlined_code pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27496 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg get_inlined_code pc: 244 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 246 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27496);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _27497 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _27497 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _27496 = NOVALUE;
    // SubProg get_inlined_code pc: 250 op: FOR (21)
    {
        object _p_53890;
        _p_53890 = 1;
L1: // addr: 257 pc: 250 sub: 53831 op: 21
        if (binary_op_a(GREATER, _p_53890, _27497)){
            goto L2; // [250] 282
        }
        // SubProg get_inlined_code pc: 257 op: STARTLINE (58)

        /** inline.e:719			last_param = SymTab[last_param][S_NEXT]*/
        // SubProg get_inlined_code pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 261 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 263 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27498 = (object)*(((s1_ptr)_2)->base + _67last_param_52900);
        // SubProg get_inlined_code pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 269 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27498);
        _67last_param_52900 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_67last_param_52900)){
            _67last_param_52900 = (object)DBL_PTR(_67last_param_52900)->dbl;
        }
        _27498 = NOVALUE;
        // SubProg get_inlined_code pc: 275 op: STARTLINE (58)

        /** inline.e:720		end for*/
        // SubProg get_inlined_code pc: 277 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53890;
        if (IS_ATOM_INT(_p_53890)) {
            _p_53890 = _p_53890 + 1;
            if ((object)((uintptr_t)_p_53890 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53890 = NewDouble((eudouble)_p_53890);
            }
        }
        else {
            _p_53890 = binary_op_a(PLUS, _p_53890, 1);
        }
        DeRef(_0);
        goto L1; // [277] 257
L2: // addr: 282 pc: 277 sub: 53831 op: 54
        ;
        DeRef(_p_53890);
    }
    // SubProg get_inlined_code pc: 282 op: STARTLINE (58)

    /** inline.e:722		symtab_index last_sym = last_param*/
    // SubProg get_inlined_code pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 286 op: ASSIGN (18)
    _last_sym_53901 = _67last_param_52900;
    // SubProg get_inlined_code pc: 289 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 291 op: STARTLINE (58)

    /** inline.e:723		while last_sym and */
    // SubProg get_inlined_code pc: 293 op: NOP2 (110)
    // SubProg get_inlined_code pc: 295 op: NOPWHILE (158)
L3: // addr: 296 pc: 295 sub: 53831 op: 158
    // SubProg get_inlined_code pc: 296 op: SC1_AND_IF (146)
    if (_last_sym_53901 == 0) {
        goto L4; // [296] 368
    }
    // SubProg get_inlined_code pc: 300 op: PROC (27)
    _27501 = _54sym_scope(_last_sym_53901);
    // SubProg get_inlined_code pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 306 op: LESSEQ (5)
    if (IS_ATOM_INT(_27501)) {
        _27502 = (_27501 <= 3);
    }
    else {
        _27502 = binary_op(LESSEQ, _27501, 3);
    }
    DeRef(_27501);
    _27501 = NOVALUE;
    // SubProg get_inlined_code pc: 310 op: SC1_OR (143)
    if (IS_ATOM_INT(_27502)) {
        if (_27502 != 0) {
            DeRef(_27503);
            _27503 = 1;
            goto L5; // [310] 328
        }
    }
    else {
        if (DBL_PTR(_27502)->dbl != 0.0) {
            DeRef(_27503);
            _27503 = 1;
            goto L5; // [310] 328
        }
    }
    // SubProg get_inlined_code pc: 314 op: PROC (27)
    _27504 = _54sym_scope(_last_sym_53901);
    // SubProg get_inlined_code pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 320 op: EQUALS (3)
    if (IS_ATOM_INT(_27504)) {
        _27505 = (_27504 == 9);
    }
    else {
        _27505 = binary_op(EQUALS, _27504, 9);
    }
    DeRef(_27504);
    _27504 = NOVALUE;
    // SubProg get_inlined_code pc: 324 op: SC2_OR (144)
    DeRef(_27503);
    if (IS_ATOM_INT(_27505))
    _27503 = (_27505 != 0);
    else
    _27503 = DBL_PTR(_27505)->dbl != 0.0;
    // SubProg get_inlined_code pc: 327 op: NOP1 (159)
L5: // addr: 328 pc: 327 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 328 op: NOP1 (159)
    // SubProg get_inlined_code pc: 329 op: WHILE (47)
    if (_27503 == 0)
    {
        _27503 = NOVALUE;
        goto L4; // [329] 368
    }
    else{
        _27503 = NOVALUE;
    }
    // SubProg get_inlined_code pc: 332 op: STARTLINE (58)

    /** inline.e:725			last_param = last_sym*/
    // SubProg get_inlined_code pc: 334 op: ASSIGN (18)
    _67last_param_52900 = _last_sym_53901;
    // SubProg get_inlined_code pc: 337 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 339 op: STARTLINE (58)

    /** inline.e:726			last_sym = SymTab[last_sym][S_NEXT]*/
    // SubProg get_inlined_code pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27506 = (object)*(((s1_ptr)_2)->base + _last_sym_53901);
    // SubProg get_inlined_code pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 349 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27506);
    _last_sym_53901 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_last_sym_53901)){
        _last_sym_53901 = (object)DBL_PTR(_last_sym_53901)->dbl;
    }
    _27506 = NOVALUE;
    // SubProg get_inlined_code pc: 355 op: STARTLINE (58)

    /** inline.e:727			varnum += 1*/
    // SubProg get_inlined_code pc: 357 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 359 op: PLUS1_I (117)
    _67varnum_52896 = _67varnum_52896 + 1;
    // SubProg get_inlined_code pc: 363 op: STARTLINE (58)

    /** inline.e:728		end while*/
    // SubProg get_inlined_code pc: 365 op: ENDWHILE (22)
    goto L3; // [365] 296
    // SubProg get_inlined_code pc: 367 op: NOP1 (159)
L4: // addr: 368 pc: 367 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 368 op: STARTLINE (58)

    /** inline.e:729		for p = SymTab[sub][S_NUM_ARGS] to 1 by -1 do*/
    // SubProg get_inlined_code pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 372 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27509 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 376 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 378 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27509);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _27510 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _27510 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _27509 = NOVALUE;
    // SubProg get_inlined_code pc: 382 op: FOR (21)
    {
        object _p_53919;
        Ref(_27510);
        _p_53919 = _27510;
L6: // addr: 389 pc: 382 sub: 53831 op: 21
        if (binary_op_a(LESS, _p_53919, 1)){
            goto L7; // [382] 407
        }
        // SubProg get_inlined_code pc: 389 op: STARTLINE (58)

        /** inline.e:730			passed_params = prepend( passed_params, Pop() )*/
        // SubProg get_inlined_code pc: 391 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 393 op: PROC (27)
        _27511 = _47Pop();
        // SubProg get_inlined_code pc: 396 op: PREPEND (57)
        Ref(_27511);
        Prepend(&_67passed_params_52888, _67passed_params_52888, _27511);
        DeRef(_27511);
        _27511 = NOVALUE;
        // SubProg get_inlined_code pc: 400 op: STARTLINE (58)

        /** inline.e:731		end for*/
        // SubProg get_inlined_code pc: 402 op: ENDFOR_GENERAL (39)
        _0 = _p_53919;
        if (IS_ATOM_INT(_p_53919)) {
            _p_53919 = _p_53919 + -1;
            if ((object)((uintptr_t)_p_53919 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53919 = NewDouble((eudouble)_p_53919);
            }
        }
        else {
            _p_53919 = binary_op_a(PLUS, _p_53919, -1);
        }
        DeRef(_0);
        goto L6; // [402] 389
L7: // addr: 407 pc: 402 sub: 53831 op: 39
        ;
        DeRef(_p_53919);
    }
    // SubProg get_inlined_code pc: 407 op: STARTLINE (58)

    /** inline.e:733		original_params = passed_params*/
    // SubProg get_inlined_code pc: 409 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 411 op: ASSIGN (18)
    RefDS(_67passed_params_52888);
    DeRef(_67original_params_52889);
    _67original_params_52889 = _67passed_params_52888;
    // SubProg get_inlined_code pc: 414 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 416 op: STARTLINE (58)

    /** inline.e:735		symtab_index int_sym = 0*/
    // SubProg get_inlined_code pc: 418 op: ASSIGN (18)
    _int_sym_53928 = 0;
    // SubProg get_inlined_code pc: 421 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 423 op: STARTLINE (58)

    /** inline.e:736		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    // SubProg get_inlined_code pc: 425 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 427 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27513 = (object)*(((s1_ptr)_2)->base + _sub_53834);
    // SubProg get_inlined_code pc: 431 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 433 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27513);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _27514 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _27514 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _27513 = NOVALUE;
    // SubProg get_inlined_code pc: 437 op: FOR (21)
    {
        object _p_53930;
        _p_53930 = 1;
L8: // addr: 444 pc: 437 sub: 53831 op: 21
        if (binary_op_a(GREATER, _p_53930, _27514)){
            goto L9; // [437] 575
        }
        // SubProg get_inlined_code pc: 444 op: STARTLINE (58)

        /** inline.e:737			symtab_index param = passed_params[p]*/
        // SubProg get_inlined_code pc: 446 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 448 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67passed_params_52888);
        if (!IS_ATOM_INT(_p_53930)){
            _param_53936 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_53930)->dbl));
        }
        else{
            _param_53936 = (object)*(((s1_ptr)_2)->base + _p_53930);
        }
        if (!IS_ATOM_INT(_param_53936)){
            _param_53936 = (object)DBL_PTR(_param_53936)->dbl;
        }
        // SubProg get_inlined_code pc: 454 op: STARTLINE (58)

        /** inline.e:738			inline_params &= s*/
        // SubProg get_inlined_code pc: 456 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 458 op: CONCAT (15)
        Append(&_67inline_params_52890, _67inline_params_52890, _s_53878);
        // SubProg get_inlined_code pc: 462 op: STARTLINE (58)

        /** inline.e:739			integer ax = find( p, assigned_params )*/
        // SubProg get_inlined_code pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 466 op: FIND_FROM (176)
        _ax_53939 = find_from(_p_53930, _67assigned_params_52891, 1);
        // SubProg get_inlined_code pc: 471 op: STARTLINE (58)

        /** inline.e:740			if ax or is_temp( param ) then*/
        // SubProg get_inlined_code pc: 473 op: SC1_OR_IF (147)
        if (_ax_53939 != 0) {
            goto LA; // [473] 486
        }
        // SubProg get_inlined_code pc: 477 op: PROC (27)
        _27519 = _67is_temp(_param_53936);
        // SubProg get_inlined_code pc: 481 op: NOP1 (159)
        // SubProg get_inlined_code pc: 482 op: IF (20)
        if (_27519 == 0) {
            DeRef(_27519);
            _27519 = NOVALUE;
            goto LB; // [482] 548
        }
        else {
            if (!IS_ATOM_INT(_27519) && DBL_PTR(_27519)->dbl == 0.0){
                DeRef(_27519);
                _27519 = NOVALUE;
                goto LB; // [482] 548
            }
            DeRef(_27519);
            _27519 = NOVALUE;
        }
        DeRef(_27519);
        _27519 = NOVALUE;
        // SubProg get_inlined_code pc: 485 op: NOP1 (159)
LA: // addr: 486 pc: 485 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 486 op: STARTLINE (58)

        /** inline.e:743				varnum += 1*/
        // SubProg get_inlined_code pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 490 op: PLUS1_I (117)
        _67varnum_52896 = _67varnum_52896 + 1;
        // SubProg get_inlined_code pc: 494 op: STARTLINE (58)

        /** inline.e:744				symtab_index var = new_inline_var( s, 0 )*/
        // SubProg get_inlined_code pc: 496 op: PROC (27)
        _var_53946 = _67new_inline_var(_s_53878, 0);
        // SubProg get_inlined_code pc: 501 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_var_53946)) {
            _1 = (object)(DBL_PTR(_var_53946)->dbl);
            DeRefDS(_var_53946);
            _var_53946 = _1;
        }
        // SubProg get_inlined_code pc: 503 op: STARTLINE (58)

        /** inline.e:745				prolog &= {ASSIGN, param, var}*/
        // SubProg get_inlined_code pc: 505 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 507 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 18;
        ((intptr_t*)_2)[2] = _param_53936;
        ((intptr_t*)_2)[3] = _var_53946;
        _27522 = MAKE_SEQ(_1);
        // SubProg get_inlined_code pc: 513 op: CONCAT (15)
        Concat((object_ptr)&_prolog_53861, _prolog_53861, _27522);
        DeRefDS(_27522);
        _27522 = NOVALUE;
        // SubProg get_inlined_code pc: 517 op: STARTLINE (58)

        /** inline.e:746				if not int_sym then*/
        // SubProg get_inlined_code pc: 519 op: NOT_IFW (108)
        if (_int_sym_53928 != 0)
        goto LC; // [519] 531
        // SubProg get_inlined_code pc: 522 op: STARTLINE (58)

        /** inline.e:747					int_sym = NewIntSym( 0 )*/
        // SubProg get_inlined_code pc: 524 op: PROC (27)
        _int_sym_53928 = _54NewIntSym(0);
        // SubProg get_inlined_code pc: 528 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_int_sym_53928)) {
            _1 = (object)(DBL_PTR(_int_sym_53928)->dbl);
            DeRefDS(_int_sym_53928);
            _int_sym_53928 = _1;
        }
        // SubProg get_inlined_code pc: 530 op: NOP1 (159)
LC: // addr: 531 pc: 530 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 531 op: STARTLINE (58)

        /** inline.e:750				inline_start += 3*/
        // SubProg get_inlined_code pc: 533 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 535 op: PLUS_I (115)
        _67inline_start_52897 = _67inline_start_52897 + 3;
        // SubProg get_inlined_code pc: 539 op: STARTLINE (58)

        /** inline.e:751				passed_params[p] = var*/
        // SubProg get_inlined_code pc: 541 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 543 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_67passed_params_52888);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _67passed_params_52888 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_p_53930))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_53930)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _p_53930);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _var_53946;
        DeRef(_1);
        // SubProg get_inlined_code pc: 547 op: NOP1 (159)
LB: // addr: 548 pc: 547 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 548 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var var_53946
        // SubProg get_inlined_code pc: 550 op: STARTLINE (58)

        /** inline.e:753			s = SymTab[s][S_NEXT]*/
        // SubProg get_inlined_code pc: 552 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 554 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27527 = (object)*(((s1_ptr)_2)->base + _s_53878);
        // SubProg get_inlined_code pc: 558 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 560 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27527);
        _s_53878 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53878)){
            _s_53878 = (object)DBL_PTR(_s_53878)->dbl;
        }
        _27527 = NOVALUE;
        // SubProg get_inlined_code pc: 566 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var param_53936

// block var ax_53939
        // SubProg get_inlined_code pc: 568 op: STARTLINE (58)

        /** inline.e:755		end for*/
        // SubProg get_inlined_code pc: 570 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53930;
        if (IS_ATOM_INT(_p_53930)) {
            _p_53930 = _p_53930 + 1;
            if ((object)((uintptr_t)_p_53930 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53930 = NewDouble((eudouble)_p_53930);
            }
        }
        else {
            _p_53930 = binary_op_a(PLUS, _p_53930, 1);
        }
        DeRef(_0);
        goto L8; // [570] 444
L9: // addr: 575 pc: 570 sub: 53831 op: 54
        ;
        DeRef(_p_53930);
    }
    // SubProg get_inlined_code pc: 575 op: STARTLINE (58)

    /** inline.e:757		symtab_index final_target = 0*/
    // SubProg get_inlined_code pc: 577 op: ASSIGN (18)
    _final_target_53961 = 0;
    // SubProg get_inlined_code pc: 580 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 582 op: STARTLINE (58)

    /** inline.e:758		while s and */
    // SubProg get_inlined_code pc: 584 op: NOP2 (110)
    // SubProg get_inlined_code pc: 586 op: NOPWHILE (158)
LD: // addr: 587 pc: 586 sub: 53831 op: 158
    // SubProg get_inlined_code pc: 587 op: SC1_AND_IF (146)
    if (_s_53878 == 0) {
        goto LE; // [587] 699
    }
    // SubProg get_inlined_code pc: 591 op: PROC (27)
    _27530 = _54sym_scope(_s_53878);
    // SubProg get_inlined_code pc: 595 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 597 op: LESSEQ (5)
    if (IS_ATOM_INT(_27530)) {
        _27531 = (_27530 <= 3);
    }
    else {
        _27531 = binary_op(LESSEQ, _27530, 3);
    }
    DeRef(_27530);
    _27530 = NOVALUE;
    // SubProg get_inlined_code pc: 601 op: SC1_OR (143)
    if (IS_ATOM_INT(_27531)) {
        if (_27531 != 0) {
            DeRef(_27532);
            _27532 = 1;
            goto LF; // [601] 619
        }
    }
    else {
        if (DBL_PTR(_27531)->dbl != 0.0) {
            DeRef(_27532);
            _27532 = 1;
            goto LF; // [601] 619
        }
    }
    // SubProg get_inlined_code pc: 605 op: PROC (27)
    _27533 = _54sym_scope(_s_53878);
    // SubProg get_inlined_code pc: 609 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 611 op: EQUALS (3)
    if (IS_ATOM_INT(_27533)) {
        _27534 = (_27533 == 9);
    }
    else {
        _27534 = binary_op(EQUALS, _27533, 9);
    }
    DeRef(_27533);
    _27533 = NOVALUE;
    // SubProg get_inlined_code pc: 615 op: SC2_OR (144)
    DeRef(_27532);
    if (IS_ATOM_INT(_27534))
    _27532 = (_27534 != 0);
    else
    _27532 = DBL_PTR(_27534)->dbl != 0.0;
    // SubProg get_inlined_code pc: 618 op: NOP1 (159)
LF: // addr: 619 pc: 618 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 619 op: NOP1 (159)
    // SubProg get_inlined_code pc: 620 op: WHILE (47)
    if (_27532 == 0)
    {
        _27532 = NOVALUE;
        goto LE; // [620] 699
    }
    else{
        _27532 = NOVALUE;
    }
    // SubProg get_inlined_code pc: 623 op: STARTLINE (58)

    /** inline.e:760			if sym_scope( s ) != SC_UNDEFINED then*/
    // SubProg get_inlined_code pc: 625 op: PROC (27)
    _27535 = _54sym_scope(_s_53878);
    // SubProg get_inlined_code pc: 629 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 631 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _27535, 9)){
        DeRef(_27535);
        _27535 = NOVALUE;
        goto L10; // [631] 676
    }
    DeRef(_27535);
    _27535 = NOVALUE;
    // SubProg get_inlined_code pc: 635 op: STARTLINE (58)

    /** inline.e:763				varnum += 1*/
    // SubProg get_inlined_code pc: 637 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 639 op: PLUS1_I (117)
    _67varnum_52896 = _67varnum_52896 + 1;
    // SubProg get_inlined_code pc: 643 op: STARTLINE (58)

    /** inline.e:764				symtab_index var = new_inline_var( s, 0 )*/
    // SubProg get_inlined_code pc: 645 op: PROC (27)
    _var_53980 = _67new_inline_var(_s_53878, 0);
    // SubProg get_inlined_code pc: 650 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53980)) {
        _1 = (object)(DBL_PTR(_var_53980)->dbl);
        DeRefDS(_var_53980);
        _var_53980 = _1;
    }
    // SubProg get_inlined_code pc: 652 op: STARTLINE (58)

    /** inline.e:765				proc_vars &= var*/
    // SubProg get_inlined_code pc: 654 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 656 op: CONCAT (15)
    Append(&_67proc_vars_52886, _67proc_vars_52886, _var_53980);
    // SubProg get_inlined_code pc: 660 op: STARTLINE (58)

    /** inline.e:766				if int_sym = 0 then*/
    // SubProg get_inlined_code pc: 662 op: EQUALS_IFW (104)
    if (_int_sym_53928 != 0)
    goto L11; // [662] 675
    // SubProg get_inlined_code pc: 666 op: STARTLINE (58)

    /** inline.e:767					int_sym = NewIntSym( 0 )*/
    // SubProg get_inlined_code pc: 668 op: PROC (27)
    _int_sym_53928 = _54NewIntSym(0);
    // SubProg get_inlined_code pc: 672 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_int_sym_53928)) {
        _1 = (object)(DBL_PTR(_int_sym_53928)->dbl);
        DeRefDS(_int_sym_53928);
        _int_sym_53928 = _1;
    }
    // SubProg get_inlined_code pc: 674 op: NOP1 (159)
L11: // addr: 675 pc: 674 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 675 op: NOP1 (159)
L10: // addr: 676 pc: 675 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 676 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var var_53980
    // SubProg get_inlined_code pc: 678 op: STARTLINE (58)

    /** inline.e:770			s = SymTab[s][S_NEXT]*/
    // SubProg get_inlined_code pc: 680 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 682 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27542 = (object)*(((s1_ptr)_2)->base + _s_53878);
    // SubProg get_inlined_code pc: 686 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 688 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27542);
    _s_53878 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53878)){
        _s_53878 = (object)DBL_PTR(_s_53878)->dbl;
    }
    _27542 = NOVALUE;
    // SubProg get_inlined_code pc: 694 op: STARTLINE (58)

    /** inline.e:771		end while*/
    // SubProg get_inlined_code pc: 696 op: ENDWHILE (22)
    goto LD; // [696] 587
    // SubProg get_inlined_code pc: 698 op: NOP1 (159)
LE: // addr: 699 pc: 698 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 699 op: STARTLINE (58)

    /** inline.e:773		if not is_proc then*/
    // SubProg get_inlined_code pc: 701 op: NOT_IFW (108)
    if (_is_proc_53837 != 0)
    goto L12; // [701] 831
    // SubProg get_inlined_code pc: 704 op: STARTLINE (58)

    /** inline.e:774			integer create_target_var = 1*/
    // SubProg get_inlined_code pc: 706 op: ASSIGN_I (113)
    _create_target_var_53993 = 1;
    // SubProg get_inlined_code pc: 709 op: STARTLINE (58)

    /** inline.e:775			if deferred then*/
    // SubProg get_inlined_code pc: 711 op: IF (20)
    if (_deferred_53836 == 0)
    {
        goto L13; // [711] 751
    }
    else{
    }
    // SubProg get_inlined_code pc: 714 op: STARTLINE (58)

    /** inline.e:776				inline_target = Pop()*/
    // SubProg get_inlined_code pc: 716 op: PROC (27)
    _0 = _47Pop();
    _67inline_target_52892 = _0;
    // SubProg get_inlined_code pc: 719 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_67inline_target_52892)) {
        _1 = (object)(DBL_PTR(_67inline_target_52892)->dbl);
        DeRefDS(_67inline_target_52892);
        _67inline_target_52892 = _1;
    }
    // SubProg get_inlined_code pc: 721 op: STARTLINE (58)

    /** inline.e:777				if is_temp( inline_target ) then*/
    // SubProg get_inlined_code pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 725 op: PROC (27)
    _27546 = _67is_temp(_67inline_target_52892);
    // SubProg get_inlined_code pc: 729 op: IF (20)
    if (_27546 == 0) {
        DeRef(_27546);
        _27546 = NOVALUE;
        goto L14; // [729] 744
    }
    else {
        if (!IS_ATOM_INT(_27546) && DBL_PTR(_27546)->dbl == 0.0){
            DeRef(_27546);
            _27546 = NOVALUE;
            goto L14; // [729] 744
        }
        DeRef(_27546);
        _27546 = NOVALUE;
    }
    DeRef(_27546);
    _27546 = NOVALUE;
    // SubProg get_inlined_code pc: 732 op: STARTLINE (58)

    /** inline.e:778					final_target = inline_target*/
    // SubProg get_inlined_code pc: 734 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 736 op: ASSIGN (18)
    _final_target_53961 = _67inline_target_52892;
    // SubProg get_inlined_code pc: 739 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 741 op: ELSE (23)
    goto L15; // [741] 750
    // SubProg get_inlined_code pc: 743 op: NOP1 (159)
L14: // addr: 744 pc: 743 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 744 op: STARTLINE (58)

    /** inline.e:780					create_target_var = 0*/
    // SubProg get_inlined_code pc: 746 op: ASSIGN_I (113)
    _create_target_var_53993 = 0;
    // SubProg get_inlined_code pc: 749 op: NOP1 (159)
L15: // addr: 750 pc: 749 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 750 op: NOP1 (159)
L13: // addr: 751 pc: 750 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 751 op: STARTLINE (58)

    /** inline.e:784			if create_target_var then*/
    // SubProg get_inlined_code pc: 753 op: IF (20)
    if (_create_target_var_53993 == 0)
    {
        goto L16; // [753] 816
    }
    else{
    }
    // SubProg get_inlined_code pc: 756 op: STARTLINE (58)

    /** inline.e:785				varnum += 1*/
    // SubProg get_inlined_code pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 760 op: PLUS1_I (117)
    _67varnum_52896 = _67varnum_52896 + 1;
    // SubProg get_inlined_code pc: 764 op: STARTLINE (58)

    /** inline.e:786				if TRANSLATE then*/
    // SubProg get_inlined_code pc: 766 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 768 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L17; // [768] 806
    }
    else{
    }
    // SubProg get_inlined_code pc: 771 op: STARTLINE (58)

    /** inline.e:787					inline_target = new_inline_var( sub, 0 )*/
    // SubProg get_inlined_code pc: 773 op: PROC (27)
    _0 = _67new_inline_var(_sub_53834, 0);
    _67inline_target_52892 = _0;
    // SubProg get_inlined_code pc: 778 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_67inline_target_52892)) {
        _1 = (object)(DBL_PTR(_67inline_target_52892)->dbl);
        DeRefDS(_67inline_target_52892);
        _67inline_target_52892 = _1;
    }
    // SubProg get_inlined_code pc: 780 op: STARTLINE (58)

    /** inline.e:788					SymTab[inline_target][S_VTYPE] = object_type*/
    // SubProg get_inlined_code pc: 782 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 784 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 786 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_67inline_target_52892 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _54object_type_46255;
    DeRef(_1);
    _27549 = NOVALUE;
    // SubProg get_inlined_code pc: 799 op: STARTLINE (58)

    /** inline.e:789					Pop_block_var()*/
    // SubProg get_inlined_code pc: 801 op: PROC (27)
    _65Pop_block_var();
    // SubProg get_inlined_code pc: 803 op: ELSE (23)
    goto L18; // [803] 815
    // SubProg get_inlined_code pc: 805 op: NOP1 (159)
L17: // addr: 806 pc: 805 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 806 op: STARTLINE (58)

    /** inline.e:791					inline_target = NewTempSym()*/
    // SubProg get_inlined_code pc: 808 op: PROC (27)
    _0 = _54NewTempSym(0);
    _67inline_target_52892 = _0;
    // SubProg get_inlined_code pc: 812 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_67inline_target_52892)) {
        _1 = (object)(DBL_PTR(_67inline_target_52892)->dbl);
        DeRefDS(_67inline_target_52892);
        _67inline_target_52892 = _1;
    }
    // SubProg get_inlined_code pc: 814 op: NOP1 (159)
L18: // addr: 815 pc: 814 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 815 op: NOP1 (159)
L16: // addr: 816 pc: 815 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 816 op: STARTLINE (58)

    /** inline.e:794			proc_vars &= inline_target*/
    // SubProg get_inlined_code pc: 818 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 820 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 822 op: CONCAT (15)
    Append(&_67proc_vars_52886, _67proc_vars_52886, _67inline_target_52892);
    // SubProg get_inlined_code pc: 826 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var create_target_var_53993
    // SubProg get_inlined_code pc: 828 op: ELSE (23)
    goto L19; // [828] 837
    // SubProg get_inlined_code pc: 830 op: NOP1 (159)
L12: // addr: 831 pc: 830 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 831 op: STARTLINE (58)

    /** inline.e:796			inline_target = 0*/
    // SubProg get_inlined_code pc: 833 op: ASSIGN_I (113)
    _67inline_target_52892 = 0;
    // SubProg get_inlined_code pc: 836 op: NOP1 (159)
L19: // addr: 837 pc: 836 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 837 op: STARTLINE (58)

    /** inline.e:800		integer check_pc = 1*/
    // SubProg get_inlined_code pc: 839 op: ASSIGN_I (113)
    _check_pc_54016 = 1;
    // SubProg get_inlined_code pc: 842 op: STARTLINE (58)

    /** inline.e:802		while length(inline_code) > check_pc do*/
    // SubProg get_inlined_code pc: 844 op: NOP2 (110)
    // SubProg get_inlined_code pc: 846 op: NOPWHILE (158)
L1A: // addr: 847 pc: 846 sub: 53831 op: 158
    // SubProg get_inlined_code pc: 847 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 849 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27553 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27553 = 1;
    }
    // SubProg get_inlined_code pc: 852 op: GREATER_IFW_I (124)
    if (_27553 <= _check_pc_54016)
    goto L1B; // [852] 1216
    // SubProg get_inlined_code pc: 856 op: STARTLINE (58)

    /** inline.e:803			integer op = inline_code[check_pc]*/
    // SubProg get_inlined_code pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 860 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_67inline_code_52885);
    _op_54020 = (object)*(((s1_ptr)_2)->base + _check_pc_54016);
    if (!IS_ATOM_INT(_op_54020))
    _op_54020 = (object)DBL_PTR(_op_54020)->dbl;
    // SubProg get_inlined_code pc: 864 op: STARTLINE (58)

    /** inline.e:805			switch op with fallthru do*/
    // SubProg get_inlined_code pc: 866 op: SWITCH_I (193)
    _0 = _op_54020;
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
        _27558 = _check_pc_54016 + 1;
        if (_27558 > MAXINT){
            _27558 = NewDouble((eudouble)_27558);
        }
        // SubProg get_inlined_code pc: 885 op: PROC (27)
        _sym_54029 = _67get_original_sym(_27558);
        _27558 = NOVALUE;
        // SubProg get_inlined_code pc: 889 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_sym_54029)) {
            _1 = (object)(DBL_PTR(_sym_54029)->dbl);
            DeRefDS(_sym_54029);
            _sym_54029 = _1;
        }
        // SubProg get_inlined_code pc: 891 op: STARTLINE (58)

        /** inline.e:810					if is_literal( sym ) then*/
        // SubProg get_inlined_code pc: 893 op: PROC (27)
        _27560 = _67is_literal(_sym_54029);
        // SubProg get_inlined_code pc: 897 op: IF (20)
        if (_27560 == 0) {
            DeRef(_27560);
            _27560 = NOVALUE;
            goto L1C; // [897] 1010
        }
        else {
            if (!IS_ATOM_INT(_27560) && DBL_PTR(_27560)->dbl == 0.0){
                DeRef(_27560);
                _27560 = NOVALUE;
                goto L1C; // [897] 1010
            }
            DeRef(_27560);
            _27560 = NOVALUE;
        }
        DeRef(_27560);
        _27560 = NOVALUE;
        // SubProg get_inlined_code pc: 900 op: STARTLINE (58)

        /** inline.e:811						integer check_result*/
        // SubProg get_inlined_code pc: 902 op: STARTLINE (58)

        /** inline.e:813						if op = INTEGER_CHECK then*/
        // SubProg get_inlined_code pc: 904 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 906 op: EQUALS_IFW (104)
        if (_op_54020 != 96)
        goto L1D; // [906] 930
        // SubProg get_inlined_code pc: 910 op: STARTLINE (58)

        /** inline.e:814							check_result = integer( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 912 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 914 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27562 = (object)*(((s1_ptr)_2)->base + _sym_54029);
        // SubProg get_inlined_code pc: 918 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 920 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27562);
        _27563 = (object)*(((s1_ptr)_2)->base + 1);
        _27562 = NOVALUE;
        // SubProg get_inlined_code pc: 924 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_27563))
        _check_result_54034 = 1;
        else if (IS_ATOM_DBL(_27563))
        _check_result_54034 = IS_ATOM_INT(DoubleToInt(_27563));
        else
        _check_result_54034 = 0;
        _27563 = NOVALUE;
        // SubProg get_inlined_code pc: 927 op: ELSE (23)
        goto L1E; // [927] 976
        // SubProg get_inlined_code pc: 929 op: NOP1 (159)
L1D: // addr: 930 pc: 929 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 930 op: STARTLINE (58)

        /** inline.e:815						elsif op = SEQUENCE_CHECK then*/
        // SubProg get_inlined_code pc: 932 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 934 op: EQUALS_IFW (104)
        if (_op_54020 != 97)
        goto L1F; // [934] 958
        // SubProg get_inlined_code pc: 938 op: STARTLINE (58)

        /** inline.e:816							check_result = sequence( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 940 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 942 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27566 = (object)*(((s1_ptr)_2)->base + _sym_54029);
        // SubProg get_inlined_code pc: 946 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 948 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27566);
        _27567 = (object)*(((s1_ptr)_2)->base + 1);
        _27566 = NOVALUE;
        // SubProg get_inlined_code pc: 952 op: IS_A_SEQUENCE (68)
        _check_result_54034 = IS_SEQUENCE(_27567);
        _27567 = NOVALUE;
        // SubProg get_inlined_code pc: 955 op: ELSE (23)
        goto L1E; // [955] 976
        // SubProg get_inlined_code pc: 957 op: NOP1 (159)
L1F: // addr: 958 pc: 957 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 958 op: STARTLINE (58)

        /** inline.e:818							check_result = atom( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 960 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 962 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27569 = (object)*(((s1_ptr)_2)->base + _sym_54029);
        // SubProg get_inlined_code pc: 966 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 968 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27569);
        _27570 = (object)*(((s1_ptr)_2)->base + 1);
        _27569 = NOVALUE;
        // SubProg get_inlined_code pc: 972 op: IS_AN_ATOM (67)
        _check_result_54034 = IS_ATOM(_27570);
        _27570 = NOVALUE;
        // SubProg get_inlined_code pc: 975 op: NOP1 (159)
L1E: // addr: 976 pc: 975 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 976 op: STARTLINE (58)

        /** inline.e:821						if check_result then*/
        // SubProg get_inlined_code pc: 978 op: PRIVATE_INIT_CHECK (30)
        // SubProg get_inlined_code pc: 980 op: IF (20)
        if (_check_result_54034 == 0)
        {
            goto L20; // [980] 997
        }
        else{
        }
        // SubProg get_inlined_code pc: 983 op: STARTLINE (58)

        /** inline.e:822							replace_code( {}, check_pc, check_pc+1 )*/
        // SubProg get_inlined_code pc: 985 op: PLUS1 (93)
        _27572 = _check_pc_54016 + 1;
        if (_27572 > MAXINT){
            _27572 = NewDouble((eudouble)_27572);
        }
        // SubProg get_inlined_code pc: 989 op: PROC (27)
        RefDS(_21933);
        _67replace_code(_21933, _check_pc_54016, _27572);
        _27572 = NOVALUE;
        // SubProg get_inlined_code pc: 994 op: ELSE (23)
        goto L21; // [994] 1005
        // SubProg get_inlined_code pc: 996 op: NOP1 (159)
L20: // addr: 997 pc: 996 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 997 op: STARTLINE (58)

        /** inline.e:826							CompileErr(146)*/
        // SubProg get_inlined_code pc: 999 op: PROC (27)
        RefDS(_21933);
        _50CompileErr(146, _21933, 0);
        // SubProg get_inlined_code pc: 1004 op: NOP1 (159)
L21: // addr: 1005 pc: 1004 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1005 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var check_result_54034
        // SubProg get_inlined_code pc: 1007 op: ELSE (23)
        goto L22; // [1007] 1172
        // SubProg get_inlined_code pc: 1009 op: NOP1 (159)
L1C: // addr: 1010 pc: 1009 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1010 op: STARTLINE (58)

        /** inline.e:829					elsif not is_temp( sym ) then*/
        // SubProg get_inlined_code pc: 1012 op: PROC (27)
        _27574 = _67is_temp(_sym_54029);
        // SubProg get_inlined_code pc: 1016 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27574)) {
            if (_27574 != 0){
                DeRef(_27574);
                _27574 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        else {
            if (DBL_PTR(_27574)->dbl != 0.0){
                DeRef(_27574);
                _27574 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        DeRef(_27574);
        _27574 = NOVALUE;
        // SubProg get_inlined_code pc: 1019 op: STARTLINE (58)

        /** inline.e:831						if (op = INTEGER_CHECK and SymTab[sym][S_VTYPE] = integer_type )*/
        // SubProg get_inlined_code pc: 1021 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1023 op: EQUALS (3)
        _27576 = (_op_54020 == 96);
        // SubProg get_inlined_code pc: 1027 op: SC1_AND (141)
        if (_27576 == 0) {
            _27577 = 0;
            goto L24; // [1027] 1053
        }
        // SubProg get_inlined_code pc: 1031 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1033 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27578 = (object)*(((s1_ptr)_2)->base + _sym_54029);
        // SubProg get_inlined_code pc: 1037 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1039 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27578);
        _27579 = (object)*(((s1_ptr)_2)->base + 15);
        _27578 = NOVALUE;
        // SubProg get_inlined_code pc: 1043 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1045 op: EQUALS (3)
        if (IS_ATOM_INT(_27579)) {
            _27580 = (_27579 == _54integer_type_46261);
        }
        else {
            _27580 = binary_op(EQUALS, _27579, _54integer_type_46261);
        }
        _27579 = NOVALUE;
        // SubProg get_inlined_code pc: 1049 op: SC2_AND (142)
        if (IS_ATOM_INT(_27580))
        _27577 = (_27580 != 0);
        else
        _27577 = DBL_PTR(_27580)->dbl != 0.0;
        // SubProg get_inlined_code pc: 1052 op: NOP1 (159)
L24: // addr: 1053 pc: 1052 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1053 op: SC1_OR (143)
        if (_27577 != 0) {
            _27581 = 1;
            goto L25; // [1053] 1093
        }
        // SubProg get_inlined_code pc: 1057 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1059 op: EQUALS (3)
        _27582 = (_op_54020 == 97);
        // SubProg get_inlined_code pc: 1063 op: SC1_AND (141)
        if (_27582 == 0) {
            _27583 = 0;
            goto L26; // [1063] 1089
        }
        // SubProg get_inlined_code pc: 1067 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1069 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27584 = (object)*(((s1_ptr)_2)->base + _sym_54029);
        // SubProg get_inlined_code pc: 1073 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1075 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27584);
        _27585 = (object)*(((s1_ptr)_2)->base + 15);
        _27584 = NOVALUE;
        // SubProg get_inlined_code pc: 1079 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1081 op: EQUALS (3)
        if (IS_ATOM_INT(_27585)) {
            _27586 = (_27585 == _54sequence_type_46259);
        }
        else {
            _27586 = binary_op(EQUALS, _27585, _54sequence_type_46259);
        }
        _27585 = NOVALUE;
        // SubProg get_inlined_code pc: 1085 op: SC2_AND (142)
        if (IS_ATOM_INT(_27586))
        _27583 = (_27586 != 0);
        else
        _27583 = DBL_PTR(_27586)->dbl != 0.0;
        // SubProg get_inlined_code pc: 1088 op: NOP1 (159)
L26: // addr: 1089 pc: 1088 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1089 op: SC2_OR (144)
        _27581 = (_27583 != 0);
        // SubProg get_inlined_code pc: 1092 op: NOP1 (159)
L25: // addr: 1093 pc: 1092 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1093 op: SC1_OR_IF (147)
        if (_27581 != 0) {
            goto L27; // [1093] 1141
        }
        // SubProg get_inlined_code pc: 1097 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1099 op: EQUALS (3)
        _27588 = (_op_54020 == 101);
        // SubProg get_inlined_code pc: 1103 op: SC1_AND (141)
        if (_27588 == 0) {
            DeRef(_27589);
            _27589 = 0;
            goto L28; // [1103] 1136
        }
        // SubProg get_inlined_code pc: 1107 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27590 = (object)*(((s1_ptr)_2)->base + _sym_54029);
        // SubProg get_inlined_code pc: 1113 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1115 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27590);
        _27591 = (object)*(((s1_ptr)_2)->base + 15);
        _27590 = NOVALUE;
        // SubProg get_inlined_code pc: 1119 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1121 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1123 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _54integer_type_46261;
        ((intptr_t *)_2)[2] = _54atom_type_46257;
        _27592 = MAKE_SEQ(_1);
        // SubProg get_inlined_code pc: 1127 op: FIND_FROM (176)
        _27593 = find_from(_27591, _27592, 1);
        _27591 = NOVALUE;
        DeRefDS(_27592);
        _27592 = NOVALUE;
        // SubProg get_inlined_code pc: 1132 op: SC2_AND (142)
        _27589 = (_27593 != 0);
        // SubProg get_inlined_code pc: 1135 op: NOP1 (159)
L28: // addr: 1136 pc: 1135 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1136 op: NOP1 (159)
        // SubProg get_inlined_code pc: 1137 op: IF (20)
        if (_27589 == 0)
        {
            _27589 = NOVALUE;
            goto L29; // [1137] 1155
        }
        else{
            _27589 = NOVALUE;
        }
        // SubProg get_inlined_code pc: 1140 op: NOP1 (159)
L27: // addr: 1141 pc: 1140 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1141 op: STARTLINE (58)

        /** inline.e:834							replace_code( {}, check_pc, check_pc+1 )*/
        // SubProg get_inlined_code pc: 1143 op: PLUS1 (93)
        _27594 = _check_pc_54016 + 1;
        if (_27594 > MAXINT){
            _27594 = NewDouble((eudouble)_27594);
        }
        // SubProg get_inlined_code pc: 1147 op: PROC (27)
        RefDS(_21933);
        _67replace_code(_21933, _check_pc_54016, _27594);
        _27594 = NOVALUE;
        // SubProg get_inlined_code pc: 1152 op: ELSE (23)
        goto L22; // [1152] 1172
        // SubProg get_inlined_code pc: 1154 op: NOP1 (159)
L29: // addr: 1155 pc: 1154 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1155 op: STARTLINE (58)

        /** inline.e:837							check_pc += 2*/
        // SubProg get_inlined_code pc: 1157 op: PLUS_I (115)
        _check_pc_54016 = _check_pc_54016 + 2;
        // SubProg get_inlined_code pc: 1161 op: NOP1 (159)
        // SubProg get_inlined_code pc: 1162 op: ELSE (23)
        goto L22; // [1162] 1172
        // SubProg get_inlined_code pc: 1164 op: NOP1 (159)
L23: // addr: 1165 pc: 1164 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1165 op: STARTLINE (58)

        /** inline.e:841						check_pc += 2*/
        // SubProg get_inlined_code pc: 1167 op: PLUS_I (115)
        _check_pc_54016 = _check_pc_54016 + 2;
        // SubProg get_inlined_code pc: 1171 op: NOP1 (159)
L22: // addr: 1172 pc: 1171 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1172 op: STARTLINE (58)

        /** inline.e:843					continue*/
        // SubProg get_inlined_code pc: 1174 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sym_54029
        // SubProg get_inlined_code pc: 1176 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54020
        // SubProg get_inlined_code pc: 1178 op: ELSE (23)
        goto L1A; // [1178] 847
        // SubProg get_inlined_code pc: 1180 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sym_54029
        // SubProg get_inlined_code pc: 1182 op: STARTLINE (58)

        /** inline.e:844				case STARTLINE then*/
        // SubProg get_inlined_code pc: 1184 op: CASE (186)
        case 58:
        // SubProg get_inlined_code pc: 1186 op: STARTLINE (58)

        /** inline.e:845					check_pc += 2*/
        // SubProg get_inlined_code pc: 1188 op: PLUS_I (115)
        _check_pc_54016 = _check_pc_54016 + 2;
        // SubProg get_inlined_code pc: 1192 op: STARTLINE (58)

        /** inline.e:846					continue*/
        // SubProg get_inlined_code pc: 1194 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54020
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

// block var op_54020
        // SubProg get_inlined_code pc: 1206 op: EXIT (61)
        goto L1B; // [1206] 1216
        // SubProg get_inlined_code pc: 1208 op: NOPSWITCH (187)
    ;}    // SubProg get_inlined_code pc: 1209 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54020
    // SubProg get_inlined_code pc: 1211 op: STARTLINE (58)

    /** inline.e:851		end while*/
    // SubProg get_inlined_code pc: 1213 op: ENDWHILE (22)
    goto L1A; // [1213] 847
    // SubProg get_inlined_code pc: 1215 op: NOP1 (159)
L1B: // addr: 1216 pc: 1215 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 1216 op: STARTLINE (58)

    /** inline.e:853		for pc = 1 to length( inline_code ) do*/
    // SubProg get_inlined_code pc: 1218 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1220 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27598 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27598 = 1;
    }
    // SubProg get_inlined_code pc: 1223 op: FOR_I (125)
    {
        object _pc_54107;
        _pc_54107 = 1;
L2A: // addr: 1230 pc: 1223 sub: 53831 op: 125
        if (_pc_54107 > _27598){
            goto L2B; // [1223] 1420
        }
        // SubProg get_inlined_code pc: 1230 op: STARTLINE (58)

        /** inline.e:854			if sequence( inline_code[pc] ) then*/
        // SubProg get_inlined_code pc: 1232 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1234 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27599 = (object)*(((s1_ptr)_2)->base + _pc_54107);
        // SubProg get_inlined_code pc: 1238 op: IS_A_SEQUENCE (68)
        _27600 = IS_SEQUENCE(_27599);
        _27599 = NOVALUE;
        // SubProg get_inlined_code pc: 1241 op: IF (20)
        if (_27600 == 0)
        {
            _27600 = NOVALUE;
            goto L2C; // [1241] 1411
        }
        else{
            _27600 = NOVALUE;
        }
        // SubProg get_inlined_code pc: 1244 op: STARTLINE (58)

        /** inline.e:855				integer inline_type = inline_code[pc][1]*/
        // SubProg get_inlined_code pc: 1246 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1248 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67inline_code_52885);
        _27601 = (object)*(((s1_ptr)_2)->base + _pc_54107);
        // SubProg get_inlined_code pc: 1252 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27601);
        _inline_type_54112 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_inline_type_54112)){
            _inline_type_54112 = (object)DBL_PTR(_inline_type_54112)->dbl;
        }
        _27601 = NOVALUE;
        // SubProg get_inlined_code pc: 1258 op: STARTLINE (58)

        /** inline.e:856				switch inline_type do*/
        // SubProg get_inlined_code pc: 1260 op: SWITCH_I (193)
        _0 = _inline_type_54112;
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
            _2 = (object)SEQ_PTR(_67inline_code_52885);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _67inline_code_52885 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54107);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _36CurrentSub_16444;
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
            _67replace_var(_pc_54107);
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
            _67replace_temp(_pc_54107);
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
            _0 = _replace_param_1__tmp_at1341_54123;
            _replace_param_1__tmp_at1341_54123 = _67get_param_sym(_pc_54107);
            DeRef(_0);
            // SubProg get_inlined_code pc: 1321 op: ASSIGN_SUBS (16)
            Ref(_replace_param_1__tmp_at1341_54123);
            _2 = (object)SEQ_PTR(_67inline_code_52885);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _67inline_code_52885 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54107);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _replace_param_1__tmp_at1341_54123;
            DeRef(_1);
            // SubProg get_inlined_code pc: 1325 op: STARTLINE (58)

            /** inline.e:587	end procedure*/
            // SubProg get_inlined_code pc: 1327 op: ELSE (23)
            goto L2E; // [1327] 1330
            // SubProg get_inlined_code pc: 1329 op: NOP1 (159)
L2E: // addr: 1330 pc: 1329 sub: 53831 op: 159
            // SubProg get_inlined_code pc: 1330 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-replace_param from get_inlined_code @ 1341

// block var replace_param_1__tmp_at1341_54123
            DeRef(_replace_param_1__tmp_at1341_54123);
            _replace_param_1__tmp_at1341_54123 = NOVALUE;
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
            _2 = (object)SEQ_PTR(_67inline_code_52885);
            _27605 = (object)*(((s1_ptr)_2)->base + _pc_54107);
            // SubProg get_inlined_code pc: 1350 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_27605);
            _27606 = (object)*(((s1_ptr)_2)->base + 2);
            _27605 = NOVALUE;
            // SubProg get_inlined_code pc: 1354 op: PLUS (11)
            if (IS_ATOM_INT(_27606)) {
                _27607 = _67inline_start_52897 + _27606;
                if ((object)((uintptr_t)_27607 + (uintptr_t)HIGH_BITS) >= 0){
                    _27607 = NewDouble((eudouble)_27607);
                }
            }
            else {
                _27607 = binary_op(PLUS, _67inline_start_52897, _27606);
            }
            _27606 = NOVALUE;
            // SubProg get_inlined_code pc: 1358 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_67inline_code_52885);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _67inline_code_52885 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54107);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _27607;
            if( _1 != _27607 ){
                DeRef(_1);
            }
            _27607 = NOVALUE;
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
            _2 = (object)SEQ_PTR(_67inline_code_52885);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _67inline_code_52885 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54107);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _67inline_target_52892;
            DeRef(_1);
            // SubProg get_inlined_code pc: 1378 op: STARTLINE (58)

            /** inline.e:874						add_inline_target( pc + inline_start )*/
            // SubProg get_inlined_code pc: 1380 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1382 op: PLUS (11)
            _27608 = _pc_54107 + _67inline_start_52897;
            if ((object)((uintptr_t)_27608 + (uintptr_t)HIGH_BITS) >= 0){
                _27608 = NewDouble((eudouble)_27608);
            }
            // SubProg get_inlined_code pc: 1386 op: PROC (27)
            _47add_inline_target(_27608);
            _27608 = NOVALUE;
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
            ((intptr_t*)_2)[1] = _inline_type_54112;
            _27609 = MAKE_SEQ(_1);
            // SubProg get_inlined_code pc: 1405 op: PROC (27)
            _50InternalErr(265, _27609);
            _27609 = NOVALUE;
            // SubProg get_inlined_code pc: 1409 op: NOPSWITCH (187)
        ;}L2D: // addr: 1410 pc: 1409 sub: 53831 op: 187
        // SubProg get_inlined_code pc: 1410 op: NOP1 (159)
L2C: // addr: 1411 pc: 1410 sub: 53831 op: 159
        // SubProg get_inlined_code pc: 1411 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var inline_type_54112
        // SubProg get_inlined_code pc: 1413 op: STARTLINE (58)

        /** inline.e:881		end for*/
        // SubProg get_inlined_code pc: 1415 op: ENDFOR_INT_UP1 (54)
        _pc_54107 = _pc_54107 + 1;
        goto L2A; // [1415] 1230
L2B: // addr: 1420 pc: 1415 sub: 53831 op: 54
        ;
    }
    // SubProg get_inlined_code pc: 1420 op: STARTLINE (58)

    /** inline.e:883		for i = 1 to length(backpatches) do*/
    // SubProg get_inlined_code pc: 1422 op: LENGTH (42)
    if (IS_SEQUENCE(_backpatches_53855)){
            _27610 = SEQ_PTR(_backpatches_53855)->length;
    }
    else {
        _27610 = 1;
    }
    // SubProg get_inlined_code pc: 1425 op: FOR_I (125)
    {
        object _i_54135;
        _i_54135 = 1;
L2F: // addr: 1432 pc: 1425 sub: 53831 op: 125
        if (_i_54135 > _27610){
            goto L30; // [1425] 1448
        }
        // SubProg get_inlined_code pc: 1432 op: STARTLINE (58)

        /** inline.e:884			fixup_special_op( backpatches[i] )*/
        // SubProg get_inlined_code pc: 1434 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_backpatches_53855);
        _27611 = (object)*(((s1_ptr)_2)->base + _i_54135);
        // SubProg get_inlined_code pc: 1438 op: PROC (27)
        Ref(_27611);
        _67fixup_special_op(_27611);
        _27611 = NOVALUE;
        // SubProg get_inlined_code pc: 1441 op: STARTLINE (58)

        /** inline.e:885		end for*/
        // SubProg get_inlined_code pc: 1443 op: ENDFOR_INT_UP1 (54)
        _i_54135 = _i_54135 + 1;
        goto L2F; // [1443] 1432
L30: // addr: 1448 pc: 1443 sub: 53831 op: 54
        ;
    }
    // SubProg get_inlined_code pc: 1448 op: STARTLINE (58)

    /** inline.e:887		epilog &= End_inline_block( EXIT_BLOCK )*/
    // SubProg get_inlined_code pc: 1450 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1452 op: PROC (27)
    _27612 = _65End_inline_block(206);
    // SubProg get_inlined_code pc: 1456 op: CONCAT (15)
    if (IS_SEQUENCE(_epilog_53862) && IS_ATOM(_27612)) {
        Ref(_27612);
        Append(&_epilog_53862, _epilog_53862, _27612);
    }
    else if (IS_ATOM(_epilog_53862) && IS_SEQUENCE(_27612)) {
    }
    else {
        Concat((object_ptr)&_epilog_53862, _epilog_53862, _27612);
    }
    DeRef(_27612);
    _27612 = NOVALUE;
    // SubProg get_inlined_code pc: 1460 op: STARTLINE (58)

    /** inline.e:889		if is_proc then*/
    // SubProg get_inlined_code pc: 1462 op: IF (20)
    if (_is_proc_53837 == 0)
    {
        goto L31; // [1462] 1472
    }
    else{
    }
    // SubProg get_inlined_code pc: 1465 op: STARTLINE (58)

    /** inline.e:890			clear_op()*/
    // SubProg get_inlined_code pc: 1467 op: PROC (27)
    _47clear_op();
    // SubProg get_inlined_code pc: 1469 op: ELSE (23)
    goto L32; // [1469] 1595
    // SubProg get_inlined_code pc: 1471 op: NOP1 (159)
L31: // addr: 1472 pc: 1471 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 1472 op: STARTLINE (58)

    /** inline.e:892			if not deferred then*/
    // SubProg get_inlined_code pc: 1474 op: NOT_IFW (108)
    if (_deferred_53836 != 0)
    goto L33; // [1474] 1489
    // SubProg get_inlined_code pc: 1477 op: STARTLINE (58)

    /** inline.e:893				Push( inline_target )*/
    // SubProg get_inlined_code pc: 1479 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1481 op: PROC (27)
    _47Push(_67inline_target_52892);
    // SubProg get_inlined_code pc: 1484 op: STARTLINE (58)

    /** inline.e:894				inlined_function()*/
    // SubProg get_inlined_code pc: 1486 op: PROC (27)
    _47inlined_function();
    // SubProg get_inlined_code pc: 1488 op: NOP1 (159)
L33: // addr: 1489 pc: 1488 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 1489 op: STARTLINE (58)

    /** inline.e:897			if final_target then*/
    // SubProg get_inlined_code pc: 1491 op: IF (20)
    if (_final_target_53961 == 0)
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
    ((intptr_t*)_2)[2] = _67inline_target_52892;
    ((intptr_t*)_2)[3] = _final_target_53961;
    _27615 = MAKE_SEQ(_1);
    // SubProg get_inlined_code pc: 1506 op: CONCAT (15)
    Concat((object_ptr)&_epilog_53862, _epilog_53862, _27615);
    DeRefDS(_27615);
    _27615 = NOVALUE;
    // SubProg get_inlined_code pc: 1510 op: STARTLINE (58)

    /** inline.e:899				emit_temp( final_target, NEW_REFERENCE )*/
    // SubProg get_inlined_code pc: 1512 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1514 op: PROC (27)
    _47emit_temp(_final_target_53961, 1);
    // SubProg get_inlined_code pc: 1518 op: ELSE (23)
    goto L35; // [1518] 1594
    // SubProg get_inlined_code pc: 1520 op: NOP1 (159)
L34: // addr: 1521 pc: 1520 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 1521 op: STARTLINE (58)

    /** inline.e:905				emit_temp( inline_target, NEW_REFERENCE )*/
    // SubProg get_inlined_code pc: 1523 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1525 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1527 op: PROC (27)
    _47emit_temp(_67inline_target_52892, 1);
    // SubProg get_inlined_code pc: 1531 op: STARTLINE (58)

    /** inline.e:906				if not TRANSLATE then*/
    // SubProg get_inlined_code pc: 1533 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1535 op: NOT_IFW (108)
    if (_36TRANSLATE_16061 != 0)
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
    ((intptr_t*)_2)[4] = _67inline_target_52892;
    _27618 = MAKE_SEQ(_1);
    // SubProg get_inlined_code pc: 1553 op: CONCAT (15)
    Concat((object_ptr)&_epilog_53862, _epilog_53862, _27618);
    DeRefDS(_27618);
    _27618 = NOVALUE;
    // SubProg get_inlined_code pc: 1557 op: STARTLINE (58)

    /** inline.e:908					epilog[$-2] = length(inline_code) + length(epilog) + inline_start + 1*/
    // SubProg get_inlined_code pc: 1559 op: LENGTH (42)
    if (IS_SEQUENCE(_epilog_53862)){
            _27620 = SEQ_PTR(_epilog_53862)->length;
    }
    else {
        _27620 = 1;
    }
    // SubProg get_inlined_code pc: 1562 op: MINUS (10)
    _27621 = _27620 - 2;
    _27620 = NOVALUE;
    // SubProg get_inlined_code pc: 1566 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1568 op: LENGTH (42)
    if (IS_SEQUENCE(_67inline_code_52885)){
            _27622 = SEQ_PTR(_67inline_code_52885)->length;
    }
    else {
        _27622 = 1;
    }
    // SubProg get_inlined_code pc: 1571 op: LENGTH (42)
    if (IS_SEQUENCE(_epilog_53862)){
            _27623 = SEQ_PTR(_epilog_53862)->length;
    }
    else {
        _27623 = 1;
    }
    // SubProg get_inlined_code pc: 1574 op: PLUS (11)
    _27624 = _27622 + _27623;
    if ((object)((uintptr_t)_27624 + (uintptr_t)HIGH_BITS) >= 0){
        _27624 = NewDouble((eudouble)_27624);
    }
    _27622 = NOVALUE;
    _27623 = NOVALUE;
    // SubProg get_inlined_code pc: 1578 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1580 op: PLUS (11)
    if (IS_ATOM_INT(_27624)) {
        _27625 = _27624 + _67inline_start_52897;
        if ((object)((uintptr_t)_27625 + (uintptr_t)HIGH_BITS) >= 0){
            _27625 = NewDouble((eudouble)_27625);
        }
    }
    else {
        _27625 = NewDouble(DBL_PTR(_27624)->dbl + (eudouble)_67inline_start_52897);
    }
    DeRef(_27624);
    _27624 = NOVALUE;
    // SubProg get_inlined_code pc: 1584 op: PLUS1 (93)
    if (IS_ATOM_INT(_27625)) {
        _27626 = _27625 + 1;
        if (_27626 > MAXINT){
            _27626 = NewDouble((eudouble)_27626);
        }
    }
    else
    _27626 = binary_op(PLUS, 1, _27625);
    DeRef(_27625);
    _27625 = NOVALUE;
    // SubProg get_inlined_code pc: 1588 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_epilog_53862);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _epilog_53862 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27621);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27626;
    if( _1 != _27626 ){
        DeRef(_1);
    }
    _27626 = NOVALUE;
    // SubProg get_inlined_code pc: 1592 op: NOP1 (159)
L36: // addr: 1593 pc: 1592 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 1593 op: NOP1 (159)
L35: // addr: 1594 pc: 1593 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 1594 op: NOP1 (159)
L32: // addr: 1595 pc: 1594 sub: 53831 op: 159
    // SubProg get_inlined_code pc: 1595 op: STARTLINE (58)

    /** inline.e:914		return prolog & inline_code & epilog*/
    // SubProg get_inlined_code pc: 1597 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1599 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _epilog_53862;
        concat_list[1] = _67inline_code_52885;
        concat_list[2] = _prolog_53861;
        Concat_N((object_ptr)&_27627, concat_list, 3);
    }
    // SubProg get_inlined_code pc: 1605 op: RETURNF (28)

// Exiting block BLOCK: get_inlined_code

// block var sub_53834

// block var start_53835

// block var deferred_53836

// block var is_proc_53837

// block var backpatches_53855
    DeRef(_backpatches_53855);

// block var prolog_53861
    DeRefDSi(_prolog_53861);

// block var epilog_53862
    DeRefDS(_epilog_53862);

// block var s_53878

// block var last_sym_53901

// block var int_sym_53928

// block var final_target_53961

// block var check_pc_54016
    DeRef(_27582);
    _27582 = NOVALUE;
    DeRef(_27502);
    _27502 = NOVALUE;
    DeRef(_27586);
    _27586 = NOVALUE;
    DeRef(_27534);
    _27534 = NOVALUE;
    _27514 = NOVALUE;
    DeRef(_27505);
    _27505 = NOVALUE;
    DeRef(_27531);
    _27531 = NOVALUE;
    _27497 = NOVALUE;
    DeRef(_27576);
    _27576 = NOVALUE;
    DeRef(_27588);
    _27588 = NOVALUE;
    DeRef(_27621);
    _27621 = NOVALUE;
    DeRef(_27580);
    _27580 = NOVALUE;
    _27510 = NOVALUE;
    return _27627;
    // SubProg get_inlined_code pc: 1609 op: BADRETURNF (43)
    ;
}


void _67defer_call()
{
    object _defer_54175 = NOVALUE;
    object _27630 = NOVALUE; // 54180 27630
    object _27629 = NOVALUE; // 54179 27629
// skipping _27628  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defer_call pc: 1 op: STARTLINE (58)

    /** inline.e:918		integer defer = find( inline_sub, deferred_inline_decisions )*/
    // SubProg defer_call pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 7 op: FIND_FROM (176)
    _defer_54175 = find_from(_67inline_sub_52899, _67deferred_inline_decisions_52901, 1);
    // SubProg defer_call pc: 12 op: STARTLINE (58)

    /** inline.e:919		if defer then*/
    // SubProg defer_call pc: 14 op: IF (20)
    if (_defer_54175 == 0)
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
    _2 = (object)SEQ_PTR(_67deferred_inline_calls_52902);
    _27629 = (object)*(((s1_ptr)_2)->base + _defer_54175);
    // SubProg defer_call pc: 27 op: CONCAT (15)
    if (IS_SEQUENCE(_27629) && IS_ATOM(_36CurrentSub_16444)) {
        Append(&_27630, _27629, _36CurrentSub_16444);
    }
    else if (IS_ATOM(_27629) && IS_SEQUENCE(_36CurrentSub_16444)) {
    }
    else {
        Concat((object_ptr)&_27630, _27629, _36CurrentSub_16444);
        _27629 = NOVALUE;
    }
    _27629 = NOVALUE;
    // SubProg defer_call pc: 31 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_67deferred_inline_calls_52902);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _67deferred_inline_calls_52902 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _defer_54175);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27630;
    if( _1 != _27630 ){
        DeRef(_1);
    }
    _27630 = NOVALUE;
    // SubProg defer_call pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 54173 op: 159
    // SubProg defer_call pc: 36 op: STARTLINE (58)

    /** inline.e:923	end procedure*/
    // SubProg defer_call pc: 38 op: RETURNP (29)

// Exiting block BLOCK: defer_call

// block var defer_54175
    return;
    // SubProg defer_call pc: 41 op: BADRETURNF (43)
    ;
}


void _67emit_or_inline()
{
    object _sub_54184 = NOVALUE;
    object _code_54215 = NOVALUE;
// skipping _27643  name type: 0
    object _27642 = NOVALUE; // 54217 27642
    object _27641 = NOVALUE; // 54212 27641
// skipping _27640  name type: 0
    object _27639 = NOVALUE; // 54209 27639
    object _27638 = NOVALUE; // 54208 27638
    object _27637 = NOVALUE; // 54206 27637
// skipping _27636  name type: 0
    object _27635 = NOVALUE; // 54197 27635
    object _27634 = NOVALUE; // 54196 27634
    object _27633 = NOVALUE; // 54194 27633
    object _27632 = NOVALUE; // 54190 27632
    object _27631 = NOVALUE; // 54188 27631
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_or_inline pc: 1 op: STARTLINE (58)

    /** inline.e:928		symtab_index sub = op_info1*/
    // SubProg emit_or_inline pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 5 op: ASSIGN (18)
    _sub_54184 = _47op_info1_50369;
    // SubProg emit_or_inline pc: 8 op: INTEGER_CHECK (96)
    // SubProg emit_or_inline pc: 10 op: STARTLINE (58)

    /** inline.e:929		inline_sub = sub*/
    // SubProg emit_or_inline pc: 12 op: ASSIGN (18)
    _67inline_sub_52899 = _sub_54184;
    // SubProg emit_or_inline pc: 15 op: INTEGER_CHECK (96)
    // SubProg emit_or_inline pc: 17 op: STARTLINE (58)

    /** inline.e:931		if SymTab[sub][S_DEPRECATED] then*/
    // SubProg emit_or_inline pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27631 = (object)*(((s1_ptr)_2)->base + _sub_54184);
    // SubProg emit_or_inline pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27631);
    _27632 = (object)*(((s1_ptr)_2)->base + 30);
    _27631 = NOVALUE;
    // SubProg emit_or_inline pc: 31 op: IF (20)
    if (_27632 == 0) {
        _27632 = NOVALUE;
        goto L1; // [31] 60
    }
    else {
        if (!IS_ATOM_INT(_27632) && DBL_PTR(_27632)->dbl == 0.0){
            _27632 = NOVALUE;
            goto L1; // [31] 60
        }
        _27632 = NOVALUE;
    }
    _27632 = NOVALUE;
    // SubProg emit_or_inline pc: 34 op: STARTLINE (58)

    /** inline.e:932			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    // SubProg emit_or_inline pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 40 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27633 = (object)*(((s1_ptr)_2)->base + _sub_54184);
    // SubProg emit_or_inline pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 46 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27633);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _27634 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _27634 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _27633 = NOVALUE;
    // SubProg emit_or_inline pc: 50 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27634);
    ((intptr_t*)_2)[1] = _27634;
    _27635 = MAKE_SEQ(_1);
    _27634 = NOVALUE;
    // SubProg emit_or_inline pc: 54 op: PROC (27)
    _50Warning(327, 16384, _27635);
    _27635 = NOVALUE;
    // SubProg emit_or_inline pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 54181 op: 159
    // SubProg emit_or_inline pc: 60 op: STARTLINE (58)

    /** inline.e:935		if Parser_mode != PAM_NORMAL then*/
    // SubProg emit_or_inline pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 66 op: NOTEQ_IFW (105)
    if (_36Parser_mode_16541 == 0)
    goto L2; // [66] 85
    // SubProg emit_or_inline pc: 70 op: STARTLINE (58)

    /** inline.e:938			emit_op( PROC )*/
    // SubProg emit_or_inline pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 74 op: PROC (27)
    _47emit_op(27);
    // SubProg emit_or_inline pc: 77 op: STARTLINE (58)

    /** inline.e:939			return*/
    // SubProg emit_or_inline pc: 79 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: emit_or_inline

// block var sub_54184

// block var code_54215
    DeRef(_code_54215);
    return;
    // SubProg emit_or_inline pc: 82 op: ELSE (23)
    goto L3; // [82] 133
    // SubProg emit_or_inline pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 54181 op: 159
    // SubProg emit_or_inline pc: 85 op: STARTLINE (58)

    /** inline.e:941		elsif atom( SymTab[sub][S_INLINE] ) or has_forward_params(sub) then*/
    // SubProg emit_or_inline pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27637 = (object)*(((s1_ptr)_2)->base + _sub_54184);
    // SubProg emit_or_inline pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27637);
    _27638 = (object)*(((s1_ptr)_2)->base + 29);
    _27637 = NOVALUE;
    // SubProg emit_or_inline pc: 99 op: IS_AN_ATOM (67)
    _27639 = IS_ATOM(_27638);
    _27638 = NOVALUE;
    // SubProg emit_or_inline pc: 102 op: SC1_OR_IF (147)
    if (_27639 != 0) {
        goto L4; // [102] 115
    }
    // SubProg emit_or_inline pc: 106 op: PROC (27)
    _27641 = _47has_forward_params(_sub_54184);
    // SubProg emit_or_inline pc: 110 op: NOP1 (159)
    // SubProg emit_or_inline pc: 111 op: IF (20)
    if (_27641 == 0) {
        DeRef(_27641);
        _27641 = NOVALUE;
        goto L5; // [111] 132
    }
    else {
        if (!IS_ATOM_INT(_27641) && DBL_PTR(_27641)->dbl == 0.0){
            DeRef(_27641);
            _27641 = NOVALUE;
            goto L5; // [111] 132
        }
        DeRef(_27641);
        _27641 = NOVALUE;
    }
    DeRef(_27641);
    _27641 = NOVALUE;
    // SubProg emit_or_inline pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 54181 op: 159
    // SubProg emit_or_inline pc: 115 op: STARTLINE (58)

    /** inline.e:942			defer_call()*/
    // SubProg emit_or_inline pc: 117 op: PROC (27)
    _67defer_call();
    // SubProg emit_or_inline pc: 119 op: STARTLINE (58)

    /** inline.e:943			emit_op( PROC )*/
    // SubProg emit_or_inline pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 123 op: PROC (27)
    _47emit_op(27);
    // SubProg emit_or_inline pc: 126 op: STARTLINE (58)

    /** inline.e:944			return*/
    // SubProg emit_or_inline pc: 128 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: emit_or_inline

// block var sub_54184

// block var code_54215
    DeRef(_code_54215);
    return;
    // SubProg emit_or_inline pc: 131 op: NOP1 (159)
L5: // addr: 132 pc: 131 sub: 54181 op: 159
    // SubProg emit_or_inline pc: 132 op: NOP1 (159)
L3: // addr: 133 pc: 132 sub: 54181 op: 159
    // SubProg emit_or_inline pc: 133 op: STARTLINE (58)

    /** inline.e:947		sequence code = get_inlined_code( sub, length(Code) )*/
    // SubProg emit_or_inline pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_36Code_16524)){
            _27642 = SEQ_PTR(_36Code_16524)->length;
    }
    else {
        _27642 = 1;
    }
    // SubProg emit_or_inline pc: 140 op: PROC (27)
    _0 = _code_54215;
    _code_54215 = _67get_inlined_code(_sub_54184, _27642, 0);
    DeRef(_0);
    _27642 = NOVALUE;
    // SubProg emit_or_inline pc: 146 op: SEQUENCE_CHECK (97)
    // SubProg emit_or_inline pc: 148 op: STARTLINE (58)

    /** inline.e:948		emit_inline( code )*/
    // SubProg emit_or_inline pc: 150 op: PROC (27)
    RefDS(_code_54215);
    _47emit_inline(_code_54215);
    // SubProg emit_or_inline pc: 153 op: STARTLINE (58)

    /** inline.e:949		clear_last()*/
    // SubProg emit_or_inline pc: 155 op: PROC (27)
    _47clear_last();
    // SubProg emit_or_inline pc: 157 op: STARTLINE (58)

    /** inline.e:951	end procedure*/
    // SubProg emit_or_inline pc: 159 op: RETURNP (29)

// Exiting block BLOCK: emit_or_inline

// block var sub_54184

// block var code_54215
    DeRefDS(_code_54215);
    return;
    // SubProg emit_or_inline pc: 162 op: BADRETURNF (43)
    ;
}


void _67inline_deferred_calls()
{
    object _sub_54229 = NOVALUE;
    object _ix_54241 = NOVALUE;
    object _calling_sub_54243 = NOVALUE;
    object _code_54265 = NOVALUE;
    object _calls_54266 = NOVALUE;
    object _is_func_54270 = NOVALUE;
    object _offset_54277 = NOVALUE;
    object _op_54288 = NOVALUE;
    object _size_54291 = NOVALUE;
// skipping _27705  name type: 0
    object _27704 = NOVALUE; // 54332 27704
// skipping _27703  name type: 0
    object _27702 = NOVALUE; // 54327 27702
// skipping _27701  name type: 0
    object _27700 = NOVALUE; // 54324 27700
    object _27699 = NOVALUE; // 54323 27699
    object _27698 = NOVALUE; // 54322 27698
// skipping _27697  name type: 0
    object _27696 = NOVALUE; // 54320 27696
    object _27695 = NOVALUE; // 54319 27695
    object _27694 = NOVALUE; // 54318 27694
    object _27693 = NOVALUE; // 54317 27693
    object _27692 = NOVALUE; // 54316 27692
    object _27691 = NOVALUE; // 54313 27691
    object _27690 = NOVALUE; // 54312 27690
    object _27689 = NOVALUE; // 54311 27689
    object _27688 = NOVALUE; // 54310 27688
    object _27687 = NOVALUE; // 54309 27687
// skipping _27686  name type: 0
    object _27685 = NOVALUE; // 54306 27685
    object _27684 = NOVALUE; // 54305 27684
    object _27683 = NOVALUE; // 54304 27683
    object _27682 = NOVALUE; // 54302 27682
// skipping _27681  name type: 0
    object _27680 = NOVALUE; // 54298 27680
    object _27679 = NOVALUE; // 54297 27679
    object _27678 = NOVALUE; // 54296 27678
// skipping _27677  name type: 0
    object _27676 = NOVALUE; // 54292 27676
// skipping _27675  name type: 0
    object _27674 = NOVALUE; // 54289 27674
// skipping _27673  name type: 0
    object _27672 = NOVALUE; // 54286 27672
// skipping _27671  name type: 0
    object _27670 = NOVALUE; // 54284 27670
    object _27669 = NOVALUE; // 54283 27669
    object _27668 = NOVALUE; // 54282 27668
    object _27667 = NOVALUE; // 54280 27667
// skipping _27666  name type: 0
    object _27665 = NOVALUE; // 54274 27665
    object _27664 = NOVALUE; // 54272 27664
// skipping _27663  name type: 0
// skipping _27662  name type: 0
    object _27661 = NOVALUE; // 54262 27661
// skipping _27660  name type: 0
    object _27659 = NOVALUE; // 54258 27659
// skipping _27658  name type: 0
    object _27657 = NOVALUE; // 54254 27657
// skipping _27656  name type: 0
    object _27655 = NOVALUE; // 54249 27655
// skipping _27654  name type: 0
    object _27653 = NOVALUE; // 54244 27653
    object _27652 = NOVALUE; // 54240 27652
    object _27651 = NOVALUE; // 54239 27651
    object _27650 = NOVALUE; // 54236 27650
    object _27649 = NOVALUE; // 54235 27649
    object _27648 = NOVALUE; // 54233 27648
// skipping _27647  name type: 0
    object _27646 = NOVALUE; // 54228 27646
    object _27645 = NOVALUE; // 54227 27645
    object _27644 = NOVALUE; // 54225 27644
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg inline_deferred_calls pc: 1 op: STARTLINE (58)

    /** inline.e:957		deferred_inlining = 1*/
    // SubProg inline_deferred_calls pc: 3 op: ASSIGN_I (113)
    _67deferred_inlining_52895 = 1;
    // SubProg inline_deferred_calls pc: 6 op: STARTLINE (58)

    /** inline.e:958		for i = 1 to length( deferred_inline_decisions ) do*/
    // SubProg inline_deferred_calls pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_deferred_calls pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_67deferred_inline_decisions_52901)){
            _27644 = SEQ_PTR(_67deferred_inline_decisions_52901)->length;
    }
    else {
        _27644 = 1;
    }
    // SubProg inline_deferred_calls pc: 13 op: FOR_I (125)
    {
        object _i_54224;
        _i_54224 = 1;
L1: // addr: 20 pc: 13 sub: 54221 op: 125
        if (_i_54224 > _27644){
            goto L2; // [13] 506
        }
        // SubProg inline_deferred_calls pc: 20 op: STARTLINE (58)

        /** inline.e:960			if length( deferred_inline_calls[i] ) then*/
        // SubProg inline_deferred_calls pc: 22 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67deferred_inline_calls_52902);
        _27645 = (object)*(((s1_ptr)_2)->base + _i_54224);
        // SubProg inline_deferred_calls pc: 28 op: LENGTH (42)
        if (IS_SEQUENCE(_27645)){
                _27646 = SEQ_PTR(_27645)->length;
        }
        else {
            _27646 = 1;
        }
        _27645 = NOVALUE;
        // SubProg inline_deferred_calls pc: 31 op: IF (20)
        if (_27646 == 0)
        {
            _27646 = NOVALUE;
            goto L3; // [31] 497
        }
        else{
            _27646 = NOVALUE;
        }
        // SubProg inline_deferred_calls pc: 34 op: STARTLINE (58)

        /** inline.e:962				integer sub = deferred_inline_decisions[i]*/
        // SubProg inline_deferred_calls pc: 36 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 38 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_67deferred_inline_decisions_52901);
        _sub_54229 = (object)*(((s1_ptr)_2)->base + _i_54224);
        // SubProg inline_deferred_calls pc: 42 op: STARTLINE (58)

        /** inline.e:963				check_inline( sub )*/
        // SubProg inline_deferred_calls pc: 44 op: PROC (27)
        _67check_inline(_sub_54229);
        // SubProg inline_deferred_calls pc: 47 op: STARTLINE (58)

        /** inline.e:964				if atom( SymTab[sub][S_INLINE] ) then*/
        // SubProg inline_deferred_calls pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 51 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _27648 = (object)*(((s1_ptr)_2)->base + _sub_54229);
        // SubProg inline_deferred_calls pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27648);
        _27649 = (object)*(((s1_ptr)_2)->base + 29);
        _27648 = NOVALUE;
        // SubProg inline_deferred_calls pc: 61 op: IS_AN_ATOM (67)
        _27650 = IS_ATOM(_27649);
        _27649 = NOVALUE;
        // SubProg inline_deferred_calls pc: 64 op: IF (20)
        if (_27650 == 0)
        {
            _27650 = NOVALUE;
            goto L4; // [64] 74
        }
        else{
            _27650 = NOVALUE;
        }
        // SubProg inline_deferred_calls pc: 67 op: STARTLINE (58)

        /** inline.e:965					continue*/
        // SubProg inline_deferred_calls pc: 69 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sub_54229
        // SubProg inline_deferred_calls pc: 71 op: ELSE (23)
        goto L5; // [71] 501
        // SubProg inline_deferred_calls pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 54221 op: 159
        // SubProg inline_deferred_calls pc: 74 op: STARTLINE (58)

        /** inline.e:967				for cx = 1 to length( deferred_inline_calls[i] ) do*/
        // SubProg inline_deferred_calls pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 78 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_67deferred_inline_calls_52902);
        _27651 = (object)*(((s1_ptr)_2)->base + _i_54224);
        // SubProg inline_deferred_calls pc: 82 op: LENGTH (42)
        if (IS_SEQUENCE(_27651)){
                _27652 = SEQ_PTR(_27651)->length;
        }
        else {
            _27652 = 1;
        }
        _27651 = NOVALUE;
        // SubProg inline_deferred_calls pc: 85 op: FOR_I (125)
        {
            object _cx_54238;
            _cx_54238 = 1;
L6: // addr: 92 pc: 85 sub: 54221 op: 125
            if (_cx_54238 > _27652){
                goto L7; // [85] 496
            }
            // SubProg inline_deferred_calls pc: 92 op: STARTLINE (58)

            /** inline.e:968					integer ix = 1*/
            // SubProg inline_deferred_calls pc: 94 op: ASSIGN_I (113)
            _ix_54241 = 1;
            // SubProg inline_deferred_calls pc: 97 op: STARTLINE (58)

            /** inline.e:969					symtab_index calling_sub = deferred_inline_calls[i][cx]*/
            // SubProg inline_deferred_calls pc: 99 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 101 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_67deferred_inline_calls_52902);
            _27653 = (object)*(((s1_ptr)_2)->base + _i_54224);
            // SubProg inline_deferred_calls pc: 105 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_27653);
            _calling_sub_54243 = (object)*(((s1_ptr)_2)->base + _cx_54238);
            if (!IS_ATOM_INT(_calling_sub_54243)){
                _calling_sub_54243 = (object)DBL_PTR(_calling_sub_54243)->dbl;
            }
            _27653 = NOVALUE;
            // SubProg inline_deferred_calls pc: 111 op: STARTLINE (58)

            /** inline.e:970					CurrentSub = calling_sub*/
            // SubProg inline_deferred_calls pc: 113 op: ASSIGN (18)
            _36CurrentSub_16444 = _calling_sub_54243;
            // SubProg inline_deferred_calls pc: 116 op: INTEGER_CHECK (96)
            // SubProg inline_deferred_calls pc: 118 op: STARTLINE (58)

            /** inline.e:971					Code = SymTab[calling_sub][S_CODE]*/
            // SubProg inline_deferred_calls pc: 120 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 122 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _27655 = (object)*(((s1_ptr)_2)->base + _calling_sub_54243);
            // SubProg inline_deferred_calls pc: 126 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 128 op: RHS_SUBS_CHECK (92)
            DeRef(_36Code_16524);
            _2 = (object)SEQ_PTR(_27655);
            if (!IS_ATOM_INT(_36S_CODE_16103)){
                _36Code_16524 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
            }
            else{
                _36Code_16524 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
            }
            Ref(_36Code_16524);
            _27655 = NOVALUE;
            // SubProg inline_deferred_calls pc: 132 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 134 op: STARTLINE (58)

            /** inline.e:972					LineTable = SymTab[calling_sub][S_LINETAB]*/
            // SubProg inline_deferred_calls pc: 136 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 138 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _27657 = (object)*(((s1_ptr)_2)->base + _calling_sub_54243);
            // SubProg inline_deferred_calls pc: 142 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 144 op: RHS_SUBS_CHECK (92)
            DeRef(_36LineTable_16525);
            _2 = (object)SEQ_PTR(_27657);
            if (!IS_ATOM_INT(_36S_LINETAB_16126)){
                _36LineTable_16525 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LINETAB_16126)->dbl));
            }
            else{
                _36LineTable_16525 = (object)*(((s1_ptr)_2)->base + _36S_LINETAB_16126);
            }
            Ref(_36LineTable_16525);
            _27657 = NOVALUE;
            // SubProg inline_deferred_calls pc: 148 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 150 op: STARTLINE (58)

            /** inline.e:973					SymTab[calling_sub][S_CODE] = 0*/
            // SubProg inline_deferred_calls pc: 152 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 154 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _37SymTab_15405 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54243 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 159 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 161 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_36S_CODE_16103))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _36S_CODE_16103);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 0;
            DeRef(_1);
            _27659 = NOVALUE;
            // SubProg inline_deferred_calls pc: 165 op: STARTLINE (58)

            /** inline.e:974					SymTab[calling_sub][S_LINETAB] = 0*/
            // SubProg inline_deferred_calls pc: 167 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 169 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _37SymTab_15405 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54243 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 174 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 176 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_36S_LINETAB_16126))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LINETAB_16126)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _36S_LINETAB_16126);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 0;
            DeRef(_1);
            _27661 = NOVALUE;
            // SubProg inline_deferred_calls pc: 180 op: STARTLINE (58)

            /** inline.e:975					sequence code = {}*/
            // SubProg inline_deferred_calls pc: 182 op: ASSIGN (18)
            RefDS(_21933);
            DeRef(_code_54265);
            _code_54265 = _21933;
            // SubProg inline_deferred_calls pc: 185 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 187 op: STARTLINE (58)

            /** inline.e:977					sequence calls = find_ops( 1, PROC )*/
            // SubProg inline_deferred_calls pc: 189 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 191 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 193 op: PROC (27)
            RefDS(_36Code_16524);
            _0 = _calls_54266;
            _calls_54266 = _66find_ops(1, 27, _36Code_16524);
            DeRef(_0);
            // SubProg inline_deferred_calls pc: 199 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 201 op: STARTLINE (58)

            /** inline.e:978					integer is_func = SymTab[sub][S_TOKEN] != PROC */
            // SubProg inline_deferred_calls pc: 203 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 205 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _27664 = (object)*(((s1_ptr)_2)->base + _sub_54229);
            // SubProg inline_deferred_calls pc: 209 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 211 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_27664);
            if (!IS_ATOM_INT(_36S_TOKEN_16096)){
                _27665 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
            }
            else{
                _27665 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
            }
            _27664 = NOVALUE;
            // SubProg inline_deferred_calls pc: 215 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 217 op: NOTEQ (4)
            if (IS_ATOM_INT(_27665)) {
                _is_func_54270 = (_27665 != 27);
            }
            else {
                _is_func_54270 = binary_op(NOTEQ, _27665, 27);
            }
            _27665 = NOVALUE;
            // SubProg inline_deferred_calls pc: 221 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_is_func_54270)) {
                _1 = (object)(DBL_PTR(_is_func_54270)->dbl);
                DeRefDS(_is_func_54270);
                _is_func_54270 = _1;
            }
            // SubProg inline_deferred_calls pc: 223 op: STARTLINE (58)

            /** inline.e:979					integer offset = 0*/
            // SubProg inline_deferred_calls pc: 225 op: ASSIGN_I (113)
            _offset_54277 = 0;
            // SubProg inline_deferred_calls pc: 228 op: STARTLINE (58)

            /** inline.e:980					for o = 1 to length( calls ) do*/
            // SubProg inline_deferred_calls pc: 230 op: LENGTH (42)
            if (IS_SEQUENCE(_calls_54266)){
                    _27667 = SEQ_PTR(_calls_54266)->length;
            }
            else {
                _27667 = 1;
            }
            // SubProg inline_deferred_calls pc: 233 op: FOR_I (125)
            {
                object _o_54279;
                _o_54279 = 1;
L8: // addr: 240 pc: 233 sub: 54221 op: 125
                if (_o_54279 > _27667){
                    goto L9; // [233] 453
                }
                // SubProg inline_deferred_calls pc: 240 op: STARTLINE (58)

                /** inline.e:981						if calls[o][2][2] = sub then*/
                // SubProg inline_deferred_calls pc: 242 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_calls_54266);
                _27668 = (object)*(((s1_ptr)_2)->base + _o_54279);
                // SubProg inline_deferred_calls pc: 246 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_27668);
                _27669 = (object)*(((s1_ptr)_2)->base + 2);
                _27668 = NOVALUE;
                // SubProg inline_deferred_calls pc: 250 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_27669);
                _27670 = (object)*(((s1_ptr)_2)->base + 2);
                _27669 = NOVALUE;
                // SubProg inline_deferred_calls pc: 254 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _27670, _sub_54229)){
                    _27670 = NOVALUE;
                    goto LA; // [254] 444
                }
                _27670 = NOVALUE;
                // SubProg inline_deferred_calls pc: 258 op: STARTLINE (58)

                /** inline.e:982							ix = calls[o][1]*/
                // SubProg inline_deferred_calls pc: 260 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_calls_54266);
                _27672 = (object)*(((s1_ptr)_2)->base + _o_54279);
                // SubProg inline_deferred_calls pc: 264 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_27672);
                _ix_54241 = (object)*(((s1_ptr)_2)->base + 1);
                if (!IS_ATOM_INT(_ix_54241)){
                    _ix_54241 = (object)DBL_PTR(_ix_54241)->dbl;
                }
                _27672 = NOVALUE;
                // SubProg inline_deferred_calls pc: 270 op: STARTLINE (58)

                /** inline.e:983							sequence op = calls[o][2]*/
                // SubProg inline_deferred_calls pc: 272 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_calls_54266);
                _27674 = (object)*(((s1_ptr)_2)->base + _o_54279);
                // SubProg inline_deferred_calls pc: 276 op: RHS_SUBS_CHECK (92)
                DeRef(_op_54288);
                _2 = (object)SEQ_PTR(_27674);
                _op_54288 = (object)*(((s1_ptr)_2)->base + 2);
                Ref(_op_54288);
                _27674 = NOVALUE;
                // SubProg inline_deferred_calls pc: 280 op: SEQUENCE_CHECK (97)
                // SubProg inline_deferred_calls pc: 282 op: STARTLINE (58)

                /** inline.e:984							integer size = length( op ) - 1*/
                // SubProg inline_deferred_calls pc: 284 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54288)){
                        _27676 = SEQ_PTR(_op_54288)->length;
                }
                else {
                    _27676 = 1;
                }
                // SubProg inline_deferred_calls pc: 287 op: MINUS_I (116)
                _size_54291 = _27676 - 1;
                _27676 = NOVALUE;
                // SubProg inline_deferred_calls pc: 291 op: STARTLINE (58)

                /** inline.e:985							if is_func then*/
                // SubProg inline_deferred_calls pc: 293 op: IF (20)
                if (_is_func_54270 == 0)
                {
                    goto LB; // [293] 319
                }
                else{
                }
                // SubProg inline_deferred_calls pc: 296 op: STARTLINE (58)

                /** inline.e:987								Push( op[$] )*/
                // SubProg inline_deferred_calls pc: 298 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54288)){
                        _27678 = SEQ_PTR(_op_54288)->length;
                }
                else {
                    _27678 = 1;
                }
                // SubProg inline_deferred_calls pc: 301 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_op_54288);
                _27679 = (object)*(((s1_ptr)_2)->base + _27678);
                // SubProg inline_deferred_calls pc: 305 op: PROC (27)
                Ref(_27679);
                _47Push(_27679);
                _27679 = NOVALUE;
                // SubProg inline_deferred_calls pc: 308 op: STARTLINE (58)

                /** inline.e:988								op = remove( op, length(op) )*/
                // SubProg inline_deferred_calls pc: 310 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54288)){
                        _27680 = SEQ_PTR(_op_54288)->length;
                }
                else {
                    _27680 = 1;
                }
                // SubProg inline_deferred_calls pc: 313 op: REMOVE (200)
                {
                    s1_ptr assign_space = SEQ_PTR(_op_54288);
                    int len = assign_space->length;
                    int start = (IS_ATOM_INT(_27680)) ? _27680 : (object)(DBL_PTR(_27680)->dbl);
                    int stop = (IS_ATOM_INT(_27680)) ? _27680 : (object)(DBL_PTR(_27680)->dbl);
                    if (stop > len){
                        stop = len;
                    }
                    if (start > len || start > stop || stop<0) {
                    }
                    else if (start < 2) {
                        if (stop >= len) {
                            Head( SEQ_PTR(_op_54288), start, &_op_54288 );
                        }
                        else Tail(SEQ_PTR(_op_54288), stop+1, &_op_54288);
                    }
                    else if (stop >= len){
                        Head(SEQ_PTR(_op_54288), start, &_op_54288);
                    }
                    else {
                        assign_slice_seq = &assign_space;
                        _op_54288 = Remove_elements(start, stop, (SEQ_PTR(_op_54288)->ref == 1));
                    }
                }
                _27680 = NOVALUE;
                _27680 = NOVALUE;
                // SubProg inline_deferred_calls pc: 318 op: NOP1 (159)
LB: // addr: 319 pc: 318 sub: 54221 op: 159
                // SubProg inline_deferred_calls pc: 319 op: STARTLINE (58)

                /** inline.e:992							for p = 3 to length( op ) do*/
                // SubProg inline_deferred_calls pc: 321 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54288)){
                        _27682 = SEQ_PTR(_op_54288)->length;
                }
                else {
                    _27682 = 1;
                }
                // SubProg inline_deferred_calls pc: 324 op: FOR_I (125)
                {
                    object _p_54301;
                    _p_54301 = 3;
LC: // addr: 331 pc: 324 sub: 54221 op: 125
                    if (_p_54301 > _27682){
                        goto LD; // [324] 347
                    }
                    // SubProg inline_deferred_calls pc: 331 op: STARTLINE (58)

                    /** inline.e:993								Push( op[p] )*/
                    // SubProg inline_deferred_calls pc: 333 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_op_54288);
                    _27683 = (object)*(((s1_ptr)_2)->base + _p_54301);
                    // SubProg inline_deferred_calls pc: 337 op: PROC (27)
                    Ref(_27683);
                    _47Push(_27683);
                    _27683 = NOVALUE;
                    // SubProg inline_deferred_calls pc: 340 op: STARTLINE (58)

                    /** inline.e:994							end for*/
                    // SubProg inline_deferred_calls pc: 342 op: ENDFOR_INT_UP1 (54)
                    _p_54301 = _p_54301 + 1;
                    goto LC; // [342] 331
LD: // addr: 347 pc: 342 sub: 54221 op: 54
                    ;
                }
                // SubProg inline_deferred_calls pc: 347 op: STARTLINE (58)

                /** inline.e:995							code = get_inlined_code( sub, ix + offset - 1, 1 )*/
                // SubProg inline_deferred_calls pc: 349 op: PLUS (11)
                _27684 = _ix_54241 + _offset_54277;
                if ((object)((uintptr_t)_27684 + (uintptr_t)HIGH_BITS) >= 0){
                    _27684 = NewDouble((eudouble)_27684);
                }
                // SubProg inline_deferred_calls pc: 353 op: MINUS (10)
                if (IS_ATOM_INT(_27684)) {
                    _27685 = _27684 - 1;
                    if ((object)((uintptr_t)_27685 +(uintptr_t) HIGH_BITS) >= 0){
                        _27685 = NewDouble((eudouble)_27685);
                    }
                }
                else {
                    _27685 = NewDouble(DBL_PTR(_27684)->dbl - (eudouble)1);
                }
                DeRef(_27684);
                _27684 = NOVALUE;
                // SubProg inline_deferred_calls pc: 357 op: PROC (27)
                _0 = _code_54265;
                _code_54265 = _67get_inlined_code(_sub_54229, _27685, 1);
                DeRef(_0);
                _27685 = NOVALUE;
                // SubProg inline_deferred_calls pc: 363 op: SEQUENCE_CHECK (97)
                // SubProg inline_deferred_calls pc: 365 op: STARTLINE (58)

                /** inline.e:996							shift:replace_code( repeat( NOP1, length(code) ), ix + offset, ix + offset + size )*/
                // SubProg inline_deferred_calls pc: 367 op: GLOBAL_INIT_CHECK (109)
                // SubProg inline_deferred_calls pc: 369 op: LENGTH (42)
                if (IS_SEQUENCE(_code_54265)){
                        _27687 = SEQ_PTR(_code_54265)->length;
                }
                else {
                    _27687 = 1;
                }
                // SubProg inline_deferred_calls pc: 372 op: REPEAT (32)
                _27688 = Repeat(159, _27687);
                _27687 = NOVALUE;
                // SubProg inline_deferred_calls pc: 376 op: PLUS (11)
                _27689 = _ix_54241 + _offset_54277;
                if ((object)((uintptr_t)_27689 + (uintptr_t)HIGH_BITS) >= 0){
                    _27689 = NewDouble((eudouble)_27689);
                }
                // SubProg inline_deferred_calls pc: 380 op: PLUS (11)
                _27690 = _ix_54241 + _offset_54277;
                if ((object)((uintptr_t)_27690 + (uintptr_t)HIGH_BITS) >= 0){
                    _27690 = NewDouble((eudouble)_27690);
                }
                // SubProg inline_deferred_calls pc: 384 op: PLUS (11)
                if (IS_ATOM_INT(_27690)) {
                    _27691 = _27690 + _size_54291;
                    if ((object)((uintptr_t)_27691 + (uintptr_t)HIGH_BITS) >= 0){
                        _27691 = NewDouble((eudouble)_27691);
                    }
                }
                else {
                    _27691 = NewDouble(DBL_PTR(_27690)->dbl + (eudouble)_size_54291);
                }
                DeRef(_27690);
                _27690 = NOVALUE;
                // SubProg inline_deferred_calls pc: 388 op: PROC (27)
                _66replace_code(_27688, _27689, _27691);
                _27688 = NOVALUE;
                _27689 = NOVALUE;
                _27691 = NOVALUE;
                // SubProg inline_deferred_calls pc: 393 op: STARTLINE (58)

                /** inline.e:999							Code = eu:replace( Code, code, ix + offset, ix + offset + length( code ) -1 )*/
                // SubProg inline_deferred_calls pc: 395 op: GLOBAL_INIT_CHECK (109)
                // SubProg inline_deferred_calls pc: 397 op: PLUS (11)
                _27692 = _ix_54241 + _offset_54277;
                if ((object)((uintptr_t)_27692 + (uintptr_t)HIGH_BITS) >= 0){
                    _27692 = NewDouble((eudouble)_27692);
                }
                // SubProg inline_deferred_calls pc: 401 op: PLUS (11)
                _27693 = _ix_54241 + _offset_54277;
                if ((object)((uintptr_t)_27693 + (uintptr_t)HIGH_BITS) >= 0){
                    _27693 = NewDouble((eudouble)_27693);
                }
                // SubProg inline_deferred_calls pc: 405 op: LENGTH (42)
                if (IS_SEQUENCE(_code_54265)){
                        _27694 = SEQ_PTR(_code_54265)->length;
                }
                else {
                    _27694 = 1;
                }
                // SubProg inline_deferred_calls pc: 408 op: PLUS (11)
                if (IS_ATOM_INT(_27693)) {
                    _27695 = _27693 + _27694;
                    if ((object)((uintptr_t)_27695 + (uintptr_t)HIGH_BITS) >= 0){
                        _27695 = NewDouble((eudouble)_27695);
                    }
                }
                else {
                    _27695 = NewDouble(DBL_PTR(_27693)->dbl + (eudouble)_27694);
                }
                DeRef(_27693);
                _27693 = NOVALUE;
                _27694 = NOVALUE;
                // SubProg inline_deferred_calls pc: 412 op: MINUS (10)
                if (IS_ATOM_INT(_27695)) {
                    _27696 = _27695 - 1;
                    if ((object)((uintptr_t)_27696 +(uintptr_t) HIGH_BITS) >= 0){
                        _27696 = NewDouble((eudouble)_27696);
                    }
                }
                else {
                    _27696 = NewDouble(DBL_PTR(_27695)->dbl - (eudouble)1);
                }
                DeRef(_27695);
                _27695 = NOVALUE;
                // SubProg inline_deferred_calls pc: 416 op: REPLACE (201)
                {
                    intptr_t p1 = _36Code_16524;
                    intptr_t p2 = _code_54265;
                    intptr_t p3 = _27692;
                    intptr_t p4 = _27696;
                    struct replace_block replace_params;
                    replace_params.copy_to   = &p1;
                    replace_params.copy_from = &p2;
                    replace_params.start     = &p3;
                    replace_params.stop      = &p4;
                    replace_params.target    = &_36Code_16524;
                    Replace( &replace_params );
                }
                DeRef(_27692);
                _27692 = NOVALUE;
                DeRef(_27696);
                _27696 = NOVALUE;
                // SubProg inline_deferred_calls pc: 422 op: SEQUENCE_CHECK (97)
                // SubProg inline_deferred_calls pc: 424 op: STARTLINE (58)

                /** inline.e:1000							offset += length(code) - size - 1*/
                // SubProg inline_deferred_calls pc: 426 op: LENGTH (42)
                if (IS_SEQUENCE(_code_54265)){
                        _27698 = SEQ_PTR(_code_54265)->length;
                }
                else {
                    _27698 = 1;
                }
                // SubProg inline_deferred_calls pc: 429 op: MINUS (10)
                _27699 = _27698 - _size_54291;
                if ((object)((uintptr_t)_27699 +(uintptr_t) HIGH_BITS) >= 0){
                    _27699 = NewDouble((eudouble)_27699);
                }
                _27698 = NOVALUE;
                // SubProg inline_deferred_calls pc: 433 op: MINUS (10)
                if (IS_ATOM_INT(_27699)) {
                    _27700 = _27699 - 1;
                    if ((object)((uintptr_t)_27700 +(uintptr_t) HIGH_BITS) >= 0){
                        _27700 = NewDouble((eudouble)_27700);
                    }
                }
                else {
                    _27700 = NewDouble(DBL_PTR(_27699)->dbl - (eudouble)1);
                }
                DeRef(_27699);
                _27699 = NOVALUE;
                // SubProg inline_deferred_calls pc: 437 op: PLUS (11)
                if (IS_ATOM_INT(_27700)) {
                    _offset_54277 = _offset_54277 + _27700;
                }
                else {
                    _offset_54277 = NewDouble((eudouble)_offset_54277 + DBL_PTR(_27700)->dbl);
                }
                DeRef(_27700);
                _27700 = NOVALUE;
                // SubProg inline_deferred_calls pc: 441 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_offset_54277)) {
                    _1 = (object)(DBL_PTR(_offset_54277)->dbl);
                    DeRefDS(_offset_54277);
                    _offset_54277 = _1;
                }
                // SubProg inline_deferred_calls pc: 443 op: NOP1 (159)
LA: // addr: 444 pc: 443 sub: 54221 op: 159
                // SubProg inline_deferred_calls pc: 444 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var op_54288
                DeRef(_op_54288);
                _op_54288 = NOVALUE;

// block var size_54291
                // SubProg inline_deferred_calls pc: 446 op: STARTLINE (58)

                /** inline.e:1003					end for*/
                // SubProg inline_deferred_calls pc: 448 op: ENDFOR_INT_UP1 (54)
                _o_54279 = _o_54279 + 1;
                goto L8; // [448] 240
L9: // addr: 453 pc: 448 sub: 54221 op: 54
                ;
            }
            // SubProg inline_deferred_calls pc: 453 op: STARTLINE (58)

            /** inline.e:1004					SymTab[calling_sub][S_CODE] = Code*/
            // SubProg inline_deferred_calls pc: 455 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 457 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _37SymTab_15405 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54243 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 462 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 464 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 466 op: PASSIGN_SUBS (162)
            RefDS(_36Code_16524);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_36S_CODE_16103))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _36S_CODE_16103);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _36Code_16524;
            DeRef(_1);
            _27702 = NOVALUE;
            // SubProg inline_deferred_calls pc: 470 op: STARTLINE (58)

            /** inline.e:1005					SymTab[calling_sub][S_LINETAB] = LineTable*/
            // SubProg inline_deferred_calls pc: 472 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 474 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _37SymTab_15405 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54243 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 479 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 481 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 483 op: PASSIGN_SUBS (162)
            RefDS(_36LineTable_16525);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_36S_LINETAB_16126))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LINETAB_16126)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _36S_LINETAB_16126);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _36LineTable_16525;
            DeRef(_1);
            _27704 = NOVALUE;
            // SubProg inline_deferred_calls pc: 487 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ix_54241

// block var calling_sub_54243

// block var code_54265
            DeRef(_code_54265);
            _code_54265 = NOVALUE;

// block var calls_54266
            DeRef(_calls_54266);
            _calls_54266 = NOVALUE;

// block var is_func_54270

// block var offset_54277
            // SubProg inline_deferred_calls pc: 489 op: STARTLINE (58)

            /** inline.e:1006				end for*/
            // SubProg inline_deferred_calls pc: 491 op: ENDFOR_INT_UP1 (54)
            _cx_54238 = _cx_54238 + 1;
            goto L6; // [491] 92
L7: // addr: 496 pc: 491 sub: 54221 op: 54
            ;
        }
        // SubProg inline_deferred_calls pc: 496 op: NOP1 (159)
L3: // addr: 497 pc: 496 sub: 54221 op: 159
        // SubProg inline_deferred_calls pc: 497 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sub_54229
        // SubProg inline_deferred_calls pc: 499 op: STARTLINE (58)

        /** inline.e:1008		end for*/
        // SubProg inline_deferred_calls pc: 501 op: ENDFOR_INT_UP1 (54)
L5: // addr: 501 pc: 501 sub: 54221 op: 54
        _i_54224 = _i_54224 + 1;
        goto L1; // [501] 20
L2: // addr: 506 pc: 501 sub: 54221 op: 54
        ;
    }
    // SubProg inline_deferred_calls pc: 506 op: STARTLINE (58)

    /** inline.e:1009	end procedure*/
    // SubProg inline_deferred_calls pc: 508 op: RETURNP (29)

// Exiting block BLOCK: inline_deferred_calls
    _27645 = NOVALUE;
    _27651 = NOVALUE;
    return;
    // SubProg inline_deferred_calls pc: 511 op: BADRETURNF (43)
    ;
}



// 0xD0D61697
