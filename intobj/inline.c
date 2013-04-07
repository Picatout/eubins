// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _66advance(object _pc_52994, object _code_52995)
{
    object _27117 = NOVALUE; // 52999 27117
// skipping _27116  name type: 0
    object _27115 = NOVALUE; // 52997 27115
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg advance pc: 1 op: INTEGER_CHECK (96)
    // SubProg advance pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg advance pc: 5 op: STARTLINE (58)

    /** inline.e:63		prev_pc = pc*/
    // SubProg advance pc: 7 op: ASSIGN_I (113)
    _66prev_pc_52977 = _pc_52994;
    // SubProg advance pc: 10 op: STARTLINE (58)

    /** inline.e:64		if pc > length( code ) then*/
    // SubProg advance pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_code_52995)){
            _27115 = SEQ_PTR(_code_52995)->length;
    }
    else {
        _27115 = 1;
    }
    // SubProg advance pc: 15 op: GREATER_IFW_I (124)
    if (_pc_52994 <= _27115)
    goto L1; // [15] 26
    // SubProg advance pc: 19 op: STARTLINE (58)

    /** inline.e:65			return pc*/
    // SubProg advance pc: 21 op: RETURNF (28)

// Exiting block BLOCK: advance

// block var code_52995
    DeRefDS(_code_52995);
    return _pc_52994;
    // SubProg advance pc: 25 op: NOP1 (159)
L1: // addr: 26 pc: 25 sub: 52992 op: 159
    // SubProg advance pc: 26 op: STARTLINE (58)

    /** inline.e:67		return shift:advance( pc, code )*/
    // SubProg advance pc: 28 op: PROC (27)
    RefDS(_code_52995);
    _27117 = _65advance(_pc_52994, _code_52995);
    // SubProg advance pc: 33 op: RETURNF (28)

// Exiting block BLOCK: advance

// block var pc_52994

// block var code_52995
    DeRefDS(_code_52995);
    return _27117;
    // SubProg advance pc: 37 op: BADRETURNF (43)
    ;
}


void _66shift(object _start_53002, object _amount_53003, object _bound_53004)
{
    object _temp_LineTable_53005 = NOVALUE;
    object _temp_Code_53007 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift pc: 1 op: INTEGER_CHECK (96)
    // SubProg shift pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_amount_53003)) {
        _1 = (object)(DBL_PTR(_amount_53003)->dbl);
        DeRefDS(_amount_53003);
        _amount_53003 = _1;
    }
    // SubProg shift pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift pc: 7 op: STARTLINE (58)

    /** inline.e:72			temp_LineTable = LineTable,*/
    // SubProg shift pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 11 op: ASSIGN (18)
    RefDS(_5LineTable_12567);
    DeRef(_temp_LineTable_53005);
    _temp_LineTable_53005 = _5LineTable_12567;
    // SubProg shift pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 16 op: STARTLINE (58)

    /** inline.e:73			temp_Code = Code*/
    // SubProg shift pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 20 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRef(_temp_Code_53007);
    _temp_Code_53007 = _5Code_12566;
    // SubProg shift pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 25 op: STARTLINE (58)

    /** inline.e:74		LineTable = {}*/
    // SubProg shift pc: 27 op: ASSIGN (18)
    RefDS(_21958);
    DeRefDS(_5LineTable_12567);
    _5LineTable_12567 = _21958;
    // SubProg shift pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 32 op: STARTLINE (58)

    /** inline.e:75		Code = inline_code*/
    // SubProg shift pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 36 op: ASSIGN (18)
    RefDS(_66inline_code_52969);
    DeRefDS(_5Code_12566);
    _5Code_12566 = _66inline_code_52969;
    // SubProg shift pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 41 op: STARTLINE (58)

    /** inline.e:76		inline_code = {}*/
    // SubProg shift pc: 43 op: ASSIGN (18)
    RefDS(_21958);
    DeRefDS(_66inline_code_52969);
    _66inline_code_52969 = _21958;
    // SubProg shift pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 48 op: STARTLINE (58)

    /** inline.e:78		shift:shift( start, amount, bound )*/
    // SubProg shift pc: 50 op: PROC (27)
    _65shift(_start_53002, _amount_53003, _bound_53004);
    // SubProg shift pc: 55 op: STARTLINE (58)

    /** inline.e:80		LineTable = temp_LineTable*/
    // SubProg shift pc: 57 op: ASSIGN (18)
    RefDS(_temp_LineTable_53005);
    DeRefDS(_5LineTable_12567);
    _5LineTable_12567 = _temp_LineTable_53005;
    // SubProg shift pc: 60 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 62 op: STARTLINE (58)

    /** inline.e:81		inline_code = Code*/
    // SubProg shift pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift pc: 66 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRefDS(_66inline_code_52969);
    _66inline_code_52969 = _5Code_12566;
    // SubProg shift pc: 69 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 71 op: STARTLINE (58)

    /** inline.e:82		Code = temp_Code*/
    // SubProg shift pc: 73 op: ASSIGN (18)
    RefDS(_temp_Code_53007);
    DeRefDS(_5Code_12566);
    _5Code_12566 = _temp_Code_53007;
    // SubProg shift pc: 76 op: SEQUENCE_CHECK (97)
    // SubProg shift pc: 78 op: STARTLINE (58)

    /** inline.e:83	end procedure*/
    // SubProg shift pc: 80 op: RETURNP (29)

// Exiting block BLOCK: shift

// block var start_53002

// block var amount_53003

// block var bound_53004

// block var temp_LineTable_53005
    DeRefDS(_temp_LineTable_53005);

// block var temp_Code_53007
    DeRefDS(_temp_Code_53007);
    return;
    // SubProg shift pc: 83 op: BADRETURNF (43)
    ;
}


void _66replace_code(object _code_53022, object _start_53023, object _finish_53024)
{
    object _27124 = NOVALUE; // 53029 27124
    object _27123 = NOVALUE; // 53028 27123
    object _27122 = NOVALUE; // 53027 27122
    object _27121 = NOVALUE; // 53026 27121
// skipping _27120  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_code pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg replace_code pc: 3 op: INTEGER_CHECK (96)
    // SubProg replace_code pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_finish_53024)) {
        _1 = (object)(DBL_PTR(_finish_53024)->dbl);
        DeRefDS(_finish_53024);
        _finish_53024 = _1;
    }
    // SubProg replace_code pc: 7 op: STARTLINE (58)

    /** inline.e:92		inline_code = replace( inline_code, code, start, finish )*/
    // SubProg replace_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_code pc: 11 op: REPLACE (201)
    {
        intptr_t p1 = _66inline_code_52969;
        intptr_t p2 = _code_53022;
        intptr_t p3 = _start_53023;
        intptr_t p4 = _finish_53024;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_66inline_code_52969;
        Replace( &replace_params );
    }
    // SubProg replace_code pc: 17 op: STARTLINE (58)

    /** inline.e:93		shift( start , length( code ) - (finish - start + 1), finish )*/
    // SubProg replace_code pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_code_53022)){
            _27121 = SEQ_PTR(_code_53022)->length;
    }
    else {
        _27121 = 1;
    }
    // SubProg replace_code pc: 22 op: MINUS (10)
    _27122 = _finish_53024 - _start_53023;
    if ((object)((uintptr_t)_27122 +(uintptr_t) HIGH_BITS) >= 0){
        _27122 = NewDouble((eudouble)_27122);
    }
    // SubProg replace_code pc: 26 op: PLUS1 (93)
    if (IS_ATOM_INT(_27122)) {
        _27123 = _27122 + 1;
        if (_27123 > MAXINT){
            _27123 = NewDouble((eudouble)_27123);
        }
    }
    else
    _27123 = binary_op(PLUS, 1, _27122);
    DeRef(_27122);
    _27122 = NOVALUE;
    // SubProg replace_code pc: 30 op: MINUS (10)
    if (IS_ATOM_INT(_27123)) {
        _27124 = _27121 - _27123;
        if ((object)((uintptr_t)_27124 +(uintptr_t) HIGH_BITS) >= 0){
            _27124 = NewDouble((eudouble)_27124);
        }
    }
    else {
        _27124 = NewDouble((eudouble)_27121 - DBL_PTR(_27123)->dbl);
    }
    _27121 = NOVALUE;
    DeRef(_27123);
    _27123 = NOVALUE;
    // SubProg replace_code pc: 34 op: PROC (27)
    _66shift(_start_53023, _27124, _finish_53024);
    _27124 = NOVALUE;
    // SubProg replace_code pc: 39 op: STARTLINE (58)

    /** inline.e:94	end procedure*/
    // SubProg replace_code pc: 41 op: RETURNP (29)

// Exiting block BLOCK: replace_code

// block var code_53022
    DeRefDS(_code_53022);

// block var start_53023

// block var finish_53024
    return;
    // SubProg replace_code pc: 44 op: BADRETURNF (43)
    ;
}


void _66defer()
{
    object _dx_53032 = NOVALUE;
// skipping _27128  name type: 0
// skipping _27127  name type: 0
// skipping _27126  name type: 0
// skipping _27125  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defer pc: 1 op: STARTLINE (58)

    /** inline.e:101		integer dx = find( inline_sub, deferred_inline_decisions )*/
    // SubProg defer pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 7 op: FIND_FROM (176)
    _dx_53032 = find_from(_66inline_sub_52983, _66deferred_inline_decisions_52985, 1);
    // SubProg defer pc: 12 op: STARTLINE (58)

    /** inline.e:102		if not dx then*/
    // SubProg defer pc: 14 op: NOT_IFW (108)
    if (_dx_53032 != 0)
    goto L1; // [14] 36
    // SubProg defer pc: 17 op: STARTLINE (58)

    /** inline.e:103			deferred_inline_decisions &= inline_sub*/
    // SubProg defer pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 23 op: CONCAT (15)
    Append(&_66deferred_inline_decisions_52985, _66deferred_inline_decisions_52985, _66inline_sub_52983);
    // SubProg defer pc: 27 op: STARTLINE (58)

    /** inline.e:104			deferred_inline_calls = append( deferred_inline_calls, {} )*/
    // SubProg defer pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer pc: 31 op: APPEND (35)
    RefDS(_21958);
    Append(&_66deferred_inline_calls_52986, _66deferred_inline_calls_52986, _21958);
    // SubProg defer pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 53030 op: 159
    // SubProg defer pc: 36 op: STARTLINE (58)

    /** inline.e:106	end procedure*/
    // SubProg defer pc: 38 op: RETURNP (29)

// Exiting block BLOCK: defer

// block var dx_53032
    return;
    // SubProg defer pc: 41 op: BADRETURNF (43)
    ;
}


object _66new_inline_temp(object _sym_53041)
{
    object _27130 = NOVALUE; // 53043 27130
// skipping _27129  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_inline_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_inline_temp pc: 3 op: STARTLINE (58)

    /** inline.e:110		inline_temps &= sym*/
    // SubProg new_inline_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_temp pc: 7 op: CONCAT (15)
    Append(&_66inline_temps_52971, _66inline_temps_52971, _sym_53041);
    // SubProg new_inline_temp pc: 11 op: STARTLINE (58)

    /** inline.e:111		return length( inline_temps )*/
    // SubProg new_inline_temp pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_temp pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_temps_52971)){
            _27130 = SEQ_PTR(_66inline_temps_52971)->length;
    }
    else {
        _27130 = 1;
    }
    // SubProg new_inline_temp pc: 18 op: RETURNF (28)

// Exiting block BLOCK: new_inline_temp

// block var sym_53041
    return _27130;
    // SubProg new_inline_temp pc: 22 op: BADRETURNF (43)
    ;
}


object _66get_inline_temp(object _sym_53047)
{
    object _temp_num_53048 = NOVALUE;
    object _27134 = NOVALUE; // 53055 27134
// skipping _27133  name type: 0
// skipping _27132  name type: 0
// skipping _27131  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_inline_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_inline_temp pc: 3 op: STARTLINE (58)

    /** inline.e:117		integer temp_num = find( sym, inline_params )*/
    // SubProg get_inline_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 7 op: FIND_FROM (176)
    _temp_num_53048 = find_from(_sym_53047, _66inline_params_52974, 1);
    // SubProg get_inline_temp pc: 12 op: STARTLINE (58)

    /** inline.e:118		if temp_num then*/
    // SubProg get_inline_temp pc: 14 op: IF (20)
    if (_temp_num_53048 == 0)
    {
        goto L1; // [14] 24
    }
    else{
    }
    // SubProg get_inline_temp pc: 17 op: STARTLINE (58)

    /** inline.e:119			return temp_num*/
    // SubProg get_inline_temp pc: 19 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_53047
    return _temp_num_53048;
    // SubProg get_inline_temp pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 53044 op: 159
    // SubProg get_inline_temp pc: 24 op: STARTLINE (58)

    /** inline.e:122		temp_num = find( sym, proc_vars )*/
    // SubProg get_inline_temp pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 28 op: FIND_FROM (176)
    _temp_num_53048 = find_from(_sym_53047, _66proc_vars_52970, 1);
    // SubProg get_inline_temp pc: 33 op: STARTLINE (58)

    /** inline.e:123		if temp_num then*/
    // SubProg get_inline_temp pc: 35 op: IF (20)
    if (_temp_num_53048 == 0)
    {
        goto L2; // [35] 45
    }
    else{
    }
    // SubProg get_inline_temp pc: 38 op: STARTLINE (58)

    /** inline.e:124			return temp_num*/
    // SubProg get_inline_temp pc: 40 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_53047
    return _temp_num_53048;
    // SubProg get_inline_temp pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 53044 op: 159
    // SubProg get_inline_temp pc: 45 op: STARTLINE (58)

    /** inline.e:127		temp_num = find( sym, inline_temps )*/
    // SubProg get_inline_temp pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inline_temp pc: 49 op: FIND_FROM (176)
    _temp_num_53048 = find_from(_sym_53047, _66inline_temps_52971, 1);
    // SubProg get_inline_temp pc: 54 op: STARTLINE (58)

    /** inline.e:128		if temp_num then*/
    // SubProg get_inline_temp pc: 56 op: IF (20)
    if (_temp_num_53048 == 0)
    {
        goto L3; // [56] 66
    }
    else{
    }
    // SubProg get_inline_temp pc: 59 op: STARTLINE (58)

    /** inline.e:129			return temp_num*/
    // SubProg get_inline_temp pc: 61 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_53047
    return _temp_num_53048;
    // SubProg get_inline_temp pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 53044 op: 159
    // SubProg get_inline_temp pc: 66 op: STARTLINE (58)

    /** inline.e:132		return new_inline_temp( sym )*/
    // SubProg get_inline_temp pc: 68 op: PROC (27)
    _27134 = _66new_inline_temp(_sym_53047);
    // SubProg get_inline_temp pc: 72 op: RETURNF (28)

// Exiting block BLOCK: get_inline_temp

// block var sym_53047

// block var temp_num_53048
    return _27134;
    // SubProg get_inline_temp pc: 76 op: BADRETURNF (43)
    ;
}


object _66generic_symbol(object _sym_53059)
{
    object _inline_type_53060 = NOVALUE;
    object _px_53061 = NOVALUE;
    object _eentry_53068 = NOVALUE;
    object _27143 = NOVALUE; // 53080 27143
    object _27142 = NOVALUE; // 53079 27142
    object _27141 = NOVALUE; // 53078 27141
    object _27140 = NOVALUE; // 53076 27140
// skipping _27139  name type: 0
    object _27138 = NOVALUE; // 53073 27138
// skipping _27137  name type: 0
// skipping _27136  name type: 0
// skipping _27135  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg generic_symbol pc: 1 op: INTEGER_CHECK (96)
    // SubProg generic_symbol pc: 3 op: STARTLINE (58)

    /** inline.e:137		integer px = find( sym, inline_params )*/
    // SubProg generic_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 7 op: FIND_FROM (176)
    _px_53061 = find_from(_sym_53059, _66inline_params_52974, 1);
    // SubProg generic_symbol pc: 12 op: STARTLINE (58)

    /** inline.e:138		if px then*/
    // SubProg generic_symbol pc: 14 op: IF (20)
    if (_px_53061 == 0)
    {
        goto L1; // [14] 25
    }
    else{
    }
    // SubProg generic_symbol pc: 17 op: STARTLINE (58)

    /** inline.e:139			inline_type = INLINE_PARAM*/
    // SubProg generic_symbol pc: 19 op: ASSIGN_I (113)
    _inline_type_53060 = 1;
    // SubProg generic_symbol pc: 22 op: ELSE (23)
    goto L2; // [22] 100
    // SubProg generic_symbol pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 53056 op: 159
    // SubProg generic_symbol pc: 25 op: STARTLINE (58)

    /** inline.e:141			px = find( sym, proc_vars )*/
    // SubProg generic_symbol pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 29 op: FIND_FROM (176)
    _px_53061 = find_from(_sym_53059, _66proc_vars_52970, 1);
    // SubProg generic_symbol pc: 34 op: STARTLINE (58)

    /** inline.e:142			if px then*/
    // SubProg generic_symbol pc: 36 op: IF (20)
    if (_px_53061 == 0)
    {
        goto L3; // [36] 47
    }
    else{
    }
    // SubProg generic_symbol pc: 39 op: STARTLINE (58)

    /** inline.e:143				inline_type = INLINE_VAR*/
    // SubProg generic_symbol pc: 41 op: ASSIGN_I (113)
    _inline_type_53060 = 6;
    // SubProg generic_symbol pc: 44 op: ELSE (23)
    goto L4; // [44] 99
    // SubProg generic_symbol pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 53056 op: 159
    // SubProg generic_symbol pc: 47 op: STARTLINE (58)

    /** inline.e:145				sequence eentry = SymTab[sym]*/
    // SubProg generic_symbol pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 51 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_53068);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _eentry_53068 = (object)*(((s1_ptr)_2)->base + _sym_53059);
    Ref(_eentry_53068);
    // SubProg generic_symbol pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg generic_symbol pc: 57 op: STARTLINE (58)

    /** inline.e:146				if is_literal( sym ) or eentry[S_SCOPE] > SC_PRIVATE then*/
    // SubProg generic_symbol pc: 59 op: PROC (27)
    _27138 = _66is_literal(_sym_53059);
    // SubProg generic_symbol pc: 63 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_27138)) {
        if (_27138 != 0) {
            goto L5; // [63] 84
        }
    }
    else {
        if (DBL_PTR(_27138)->dbl != 0.0) {
            goto L5; // [63] 84
        }
    }
    // SubProg generic_symbol pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 69 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_53068);
    _27140 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg generic_symbol pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg generic_symbol pc: 75 op: GREATER (6)
    if (IS_ATOM_INT(_27140)) {
        _27141 = (_27140 > 3);
    }
    else {
        _27141 = binary_op(GREATER, _27140, 3);
    }
    _27140 = NOVALUE;
    // SubProg generic_symbol pc: 79 op: NOP1 (159)
    // SubProg generic_symbol pc: 80 op: IF (20)
    if (_27141 == 0) {
        DeRef(_27141);
        _27141 = NOVALUE;
        goto L6; // [80] 91
    }
    else {
        if (!IS_ATOM_INT(_27141) && DBL_PTR(_27141)->dbl == 0.0){
            DeRef(_27141);
            _27141 = NOVALUE;
            goto L6; // [80] 91
        }
        DeRef(_27141);
        _27141 = NOVALUE;
    }
    DeRef(_27141);
    _27141 = NOVALUE;
    // SubProg generic_symbol pc: 83 op: NOP1 (159)
L5: // addr: 84 pc: 83 sub: 53056 op: 159
    // SubProg generic_symbol pc: 84 op: STARTLINE (58)

    /** inline.e:147					return sym*/
    // SubProg generic_symbol pc: 86 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var eentry_53068
    DeRef(_eentry_53068);

// Exiting block BLOCK: IF-

// Exiting block BLOCK: generic_symbol

// block var inline_type_53060

// block var px_53061
    DeRef(_27138);
    _27138 = NOVALUE;
    return _sym_53059;
    // SubProg generic_symbol pc: 90 op: NOP1 (159)
L6: // addr: 91 pc: 90 sub: 53056 op: 159
    // SubProg generic_symbol pc: 91 op: STARTLINE (58)

    /** inline.e:149				inline_type = INLINE_TEMP*/
    // SubProg generic_symbol pc: 93 op: ASSIGN_I (113)
    _inline_type_53060 = 2;
    // SubProg generic_symbol pc: 96 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var eentry_53068
    DeRef(_eentry_53068);
    _eentry_53068 = NOVALUE;
    // SubProg generic_symbol pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 53056 op: 159
    // SubProg generic_symbol pc: 99 op: NOP1 (159)
L2: // addr: 100 pc: 99 sub: 53056 op: 159
    // SubProg generic_symbol pc: 100 op: STARTLINE (58)

    /** inline.e:153		return { inline_type, get_inline_temp( sym ) }*/
    // SubProg generic_symbol pc: 102 op: PRIVATE_INIT_CHECK (30)
    // SubProg generic_symbol pc: 104 op: PROC (27)
    _27142 = _66get_inline_temp(_sym_53059);
    // SubProg generic_symbol pc: 108 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _inline_type_53060;
    ((intptr_t *)_2)[2] = _27142;
    _27143 = MAKE_SEQ(_1);
    _27142 = NOVALUE;
    // SubProg generic_symbol pc: 112 op: RETURNF (28)

// Exiting block BLOCK: generic_symbol

// block var sym_53059

// block var inline_type_53060

// block var px_53061
    DeRef(_27138);
    _27138 = NOVALUE;
    return _27143;
    // SubProg generic_symbol pc: 116 op: BADRETURNF (43)
    ;
}


object _66adjust_symbol(object _pc_53083)
{
    object _sym_53085 = NOVALUE;
    object _eentry_53091 = NOVALUE;
    object _27151 = NOVALUE; // 53102 27151
// skipping _27150  name type: 0
    object _27149 = NOVALUE; // 53099 27149
    object _27148 = NOVALUE; // 53096 27148
// skipping _27147  name type: 0
// skipping _27146  name type: 0
// skipping _27145  name type: 0
// skipping _27144  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_symbol pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53083)) {
        _1 = (object)(DBL_PTR(_pc_53083)->dbl);
        DeRefDS(_pc_53083);
        _pc_53083 = _1;
    }
    // SubProg adjust_symbol pc: 3 op: STARTLINE (58)

    /** inline.e:160		symtab_index sym = inline_code[pc]*/
    // SubProg adjust_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _sym_53085 = (object)*(((s1_ptr)_2)->base + _pc_53083);
    if (!IS_ATOM_INT(_sym_53085)){
        _sym_53085 = (object)DBL_PTR(_sym_53085)->dbl;
    }
    // SubProg adjust_symbol pc: 13 op: STARTLINE (58)

    /** inline.e:161		if sym < 0 then*/
    // SubProg adjust_symbol pc: 15 op: LESS_IFW (102)
    if (_sym_53085 >= 0)
    goto L1; // [15] 28
    // SubProg adjust_symbol pc: 19 op: STARTLINE (58)

    /** inline.e:162			return 0*/
    // SubProg adjust_symbol pc: 21 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53083

// block var sym_53085

// block var eentry_53091
    DeRef(_eentry_53091);
    return 0;
    // SubProg adjust_symbol pc: 25 op: ELSE (23)
    goto L2; // [25] 41
    // SubProg adjust_symbol pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 53081 op: 159
    // SubProg adjust_symbol pc: 28 op: STARTLINE (58)

    /** inline.e:163		elsif not sym then*/
    // SubProg adjust_symbol pc: 30 op: NOT_IFW (108)
    if (_sym_53085 != 0)
    goto L3; // [30] 40
    // SubProg adjust_symbol pc: 33 op: STARTLINE (58)

    /** inline.e:165			return 1*/
    // SubProg adjust_symbol pc: 35 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53083

// block var sym_53085

// block var eentry_53091
    DeRef(_eentry_53091);
    return 1;
    // SubProg adjust_symbol pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 53081 op: 159
    // SubProg adjust_symbol pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 53081 op: 159
    // SubProg adjust_symbol pc: 41 op: STARTLINE (58)

    /** inline.e:168		sequence eentry = SymTab[sym]*/
    // SubProg adjust_symbol pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_53091);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _eentry_53091 = (object)*(((s1_ptr)_2)->base + _sym_53085);
    Ref(_eentry_53091);
    // SubProg adjust_symbol pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg adjust_symbol pc: 51 op: STARTLINE (58)

    /** inline.e:169		if is_literal( sym ) then*/
    // SubProg adjust_symbol pc: 53 op: PROC (27)
    _27148 = _66is_literal(_sym_53085);
    // SubProg adjust_symbol pc: 57 op: IF (20)
    if (_27148 == 0) {
        DeRef(_27148);
        _27148 = NOVALUE;
        goto L4; // [57] 69
    }
    else {
        if (!IS_ATOM_INT(_27148) && DBL_PTR(_27148)->dbl == 0.0){
            DeRef(_27148);
            _27148 = NOVALUE;
            goto L4; // [57] 69
        }
        DeRef(_27148);
        _27148 = NOVALUE;
    }
    DeRef(_27148);
    _27148 = NOVALUE;
    // SubProg adjust_symbol pc: 60 op: STARTLINE (58)

    /** inline.e:170			return 1*/
    // SubProg adjust_symbol pc: 62 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53083

// block var sym_53085

// block var eentry_53091
    DeRefDS(_eentry_53091);
    return 1;
    // SubProg adjust_symbol pc: 66 op: ELSE (23)
    goto L5; // [66] 95
    // SubProg adjust_symbol pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 53081 op: 159
    // SubProg adjust_symbol pc: 69 op: STARTLINE (58)

    /** inline.e:172		elsif eentry[S_SCOPE] = SC_UNDEFINED then*/
    // SubProg adjust_symbol pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 73 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_53091);
    _27149 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg adjust_symbol pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 79 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27149, 9)){
        _27149 = NOVALUE;
        goto L6; // [79] 94
    }
    _27149 = NOVALUE;
    // SubProg adjust_symbol pc: 83 op: STARTLINE (58)

    /** inline.e:173			defer()*/
    // SubProg adjust_symbol pc: 85 op: PROC (27)
    _66defer();
    // SubProg adjust_symbol pc: 87 op: STARTLINE (58)

    /** inline.e:174			return 0*/
    // SubProg adjust_symbol pc: 89 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53083

// block var sym_53085

// block var eentry_53091
    DeRefDS(_eentry_53091);
    return 0;
    // SubProg adjust_symbol pc: 93 op: NOP1 (159)
L6: // addr: 94 pc: 93 sub: 53081 op: 159
    // SubProg adjust_symbol pc: 94 op: NOP1 (159)
L5: // addr: 95 pc: 94 sub: 53081 op: 159
    // SubProg adjust_symbol pc: 95 op: STARTLINE (58)

    /** inline.e:177		inline_code[pc] = generic_symbol( sym )*/
    // SubProg adjust_symbol pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_symbol pc: 99 op: PROC (27)
    _27151 = _66generic_symbol(_sym_53085);
    // SubProg adjust_symbol pc: 103 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53083);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27151;
    if( _1 != _27151 ){
        DeRef(_1);
    }
    _27151 = NOVALUE;
    // SubProg adjust_symbol pc: 107 op: STARTLINE (58)

    /** inline.e:178		return 1*/
    // SubProg adjust_symbol pc: 109 op: RETURNF (28)

// Exiting block BLOCK: adjust_symbol

// block var pc_53083

// block var sym_53085

// block var eentry_53091
    DeRef(_eentry_53091);
    return 1;
    // SubProg adjust_symbol pc: 113 op: BADRETURNF (43)
    ;
}


object _66check_for_param(object _pc_53105)
{
    object _px_53106 = NOVALUE;
// skipping _27156  name type: 0
// skipping _27155  name type: 0
    object _27154 = NOVALUE; // 53111 27154
// skipping _27153  name type: 0
    object _27152 = NOVALUE; // 53107 27152
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_param pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53105)) {
        _1 = (object)(DBL_PTR(_pc_53105)->dbl);
        DeRefDS(_pc_53105);
        _pc_53105 = _1;
    }
    // SubProg check_for_param pc: 3 op: STARTLINE (58)

    /** inline.e:182		integer px = find( inline_code[pc], inline_params )*/
    // SubProg check_for_param pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27152 = (object)*(((s1_ptr)_2)->base + _pc_53105);
    // SubProg check_for_param pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 13 op: FIND_FROM (176)
    _px_53106 = find_from(_27152, _66inline_params_52974, 1);
    _27152 = NOVALUE;
    // SubProg check_for_param pc: 18 op: STARTLINE (58)

    /** inline.e:183		if px then*/
    // SubProg check_for_param pc: 20 op: IF (20)
    if (_px_53106 == 0)
    {
        goto L1; // [20] 51
    }
    else{
    }
    // SubProg check_for_param pc: 23 op: STARTLINE (58)

    /** inline.e:184			if not find( px, assigned_params ) then*/
    // SubProg check_for_param pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 27 op: FIND_FROM (176)
    _27154 = find_from(_px_53106, _66assigned_params_52975, 1);
    // SubProg check_for_param pc: 32 op: NOT_IFW (108)
    if (_27154 != 0)
    goto L2; // [32] 44
    _27154 = NOVALUE;
    // SubProg check_for_param pc: 35 op: STARTLINE (58)

    /** inline.e:185				assigned_params &= px*/
    // SubProg check_for_param pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_param pc: 39 op: CONCAT (15)
    Append(&_66assigned_params_52975, _66assigned_params_52975, _px_53106);
    // SubProg check_for_param pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 53103 op: 159
    // SubProg check_for_param pc: 44 op: STARTLINE (58)

    /** inline.e:187			return 1*/
    // SubProg check_for_param pc: 46 op: RETURNF (28)

// Exiting block BLOCK: check_for_param

// block var pc_53105

// block var px_53106
    return 1;
    // SubProg check_for_param pc: 50 op: NOP1 (159)
L1: // addr: 51 pc: 50 sub: 53103 op: 159
    // SubProg check_for_param pc: 51 op: STARTLINE (58)

    /** inline.e:189		return 0*/
    // SubProg check_for_param pc: 53 op: RETURNF (28)

// Exiting block BLOCK: check_for_param

// block var pc_53105

// block var px_53106
    return 0;
    // SubProg check_for_param pc: 57 op: BADRETURNF (43)
    ;
}


void _66check_target(object _pc_53116, object _op_53117)
{
    object _targets_53118 = NOVALUE;
    object _27163 = NOVALUE; // 53131 27163
    object _27162 = NOVALUE; // 53130 27162
    object _27161 = NOVALUE; // 53129 27161
    object _27160 = NOVALUE; // 53127 27160
    object _27159 = NOVALUE; // 53124 27159
// skipping _27158  name type: 0
    object _27157 = NOVALUE; // 53120 27157
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_target pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_target pc: 3 op: INTEGER_CHECK (96)
    // SubProg check_target pc: 5 op: STARTLINE (58)

    /** inline.e:194		sequence targets = op_info[op][OP_TARGET]*/
    // SubProg check_target pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_target pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_65op_info_23893);
    _27157 = (object)*(((s1_ptr)_2)->base + _op_53117);
    // SubProg check_target pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_target pc: 15 op: RHS_SUBS_CHECK (92)
    DeRef(_targets_53118);
    _2 = (object)SEQ_PTR(_27157);
    _targets_53118 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_targets_53118);
    _27157 = NOVALUE;
    // SubProg check_target pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg check_target pc: 21 op: STARTLINE (58)

    /** inline.e:196		if length( targets ) then*/
    // SubProg check_target pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_targets_53118)){
            _27159 = SEQ_PTR(_targets_53118)->length;
    }
    else {
        _27159 = 1;
    }
    // SubProg check_target pc: 26 op: IF (20)
    if (_27159 == 0)
    {
        _27159 = NOVALUE;
        goto L1; // [26] 72
    }
    else{
        _27159 = NOVALUE;
    }
    // SubProg check_target pc: 29 op: STARTLINE (58)

    /** inline.e:197		for i = 1 to length( targets ) do*/
    // SubProg check_target pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_targets_53118)){
            _27160 = SEQ_PTR(_targets_53118)->length;
    }
    else {
        _27160 = 1;
    }
    // SubProg check_target pc: 34 op: FOR_I (125)
    {
        object _i_53126;
        _i_53126 = 1;
L2: // addr: 41 pc: 34 sub: 53114 op: 125
        if (_i_53126 > _27160){
            goto L3; // [34] 71
        }
        // SubProg check_target pc: 41 op: STARTLINE (58)

        /** inline.e:198				if check_for_param( pc + targets[i] ) then*/
        // SubProg check_target pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_targets_53118);
        _27161 = (object)*(((s1_ptr)_2)->base + _i_53126);
        // SubProg check_target pc: 47 op: PLUS (11)
        if (IS_ATOM_INT(_27161)) {
            _27162 = _pc_53116 + _27161;
            if ((object)((uintptr_t)_27162 + (uintptr_t)HIGH_BITS) >= 0){
                _27162 = NewDouble((eudouble)_27162);
            }
        }
        else {
            _27162 = binary_op(PLUS, _pc_53116, _27161);
        }
        _27161 = NOVALUE;
        // SubProg check_target pc: 51 op: PROC (27)
        _27163 = _66check_for_param(_27162);
        _27162 = NOVALUE;
        // SubProg check_target pc: 55 op: IF (20)
        if (_27163 == 0) {
            DeRef(_27163);
            _27163 = NOVALUE;
            goto L4; // [55] 64
        }
        else {
            if (!IS_ATOM_INT(_27163) && DBL_PTR(_27163)->dbl == 0.0){
                DeRef(_27163);
                _27163 = NOVALUE;
                goto L4; // [55] 64
            }
            DeRef(_27163);
            _27163 = NOVALUE;
        }
        DeRef(_27163);
        _27163 = NOVALUE;
        // SubProg check_target pc: 58 op: STARTLINE (58)

        /** inline.e:199					return*/
        // SubProg check_target pc: 60 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_target

// block var pc_53116

// block var op_53117

// block var targets_53118
        DeRefDS(_targets_53118);
        return;
        // SubProg check_target pc: 63 op: NOP1 (159)
L4: // addr: 64 pc: 63 sub: 53114 op: 159
        // SubProg check_target pc: 64 op: STARTLINE (58)

        /** inline.e:201			end for*/
        // SubProg check_target pc: 66 op: ENDFOR_INT_UP1 (54)
        _i_53126 = _i_53126 + 1;
        goto L2; // [66] 41
L3: // addr: 71 pc: 66 sub: 53114 op: 54
        ;
    }
    // SubProg check_target pc: 71 op: NOP1 (159)
L1: // addr: 72 pc: 71 sub: 53114 op: 159
    // SubProg check_target pc: 72 op: STARTLINE (58)

    /** inline.e:203	end procedure*/
    // SubProg check_target pc: 74 op: RETURNP (29)

// Exiting block BLOCK: check_target

// block var pc_53116

// block var op_53117

// block var targets_53118
    DeRef(_targets_53118);
    return;
    // SubProg check_target pc: 77 op: BADRETURNF (43)
    ;
}


object _66adjust_il(object _pc_53134, object _op_53135)
{
    object _addr_53143 = NOVALUE;
    object _sub_53149 = NOVALUE;
// skipping _27189  name type: 0
    object _27188 = NOVALUE; // 53179 27188
    object _27187 = NOVALUE; // 53178 27187
    object _27186 = NOVALUE; // 53176 27186
    object _27185 = NOVALUE; // 53174 27185
    object _27184 = NOVALUE; // 53173 27184
    object _27183 = NOVALUE; // 53171 27183
    object _27182 = NOVALUE; // 53170 27182
    object _27180 = NOVALUE; // 53165 27180
    object _27179 = NOVALUE; // 53163 27179
    object _27178 = NOVALUE; // 53162 27178
    object _27177 = NOVALUE; // 53161 27177
    object _27176 = NOVALUE; // 53160 27176
    object _27175 = NOVALUE; // 53159 27175
    object _27174 = NOVALUE; // 53158 27174
    object _27173 = NOVALUE; // 53157 27173
// skipping _27172  name type: 0
    object _27171 = NOVALUE; // 53153 27171
    object _27170 = NOVALUE; // 53151 27170
// skipping _27169  name type: 0
    object _27168 = NOVALUE; // 53147 27168
    object _27167 = NOVALUE; // 53145 27167
    object _27166 = NOVALUE; // 53142 27166
    object _27165 = NOVALUE; // 53141 27165
    object _27164 = NOVALUE; // 53139 27164
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_il pc: 1 op: INTEGER_CHECK (96)
    // SubProg adjust_il pc: 3 op: INTEGER_CHECK (96)
    // SubProg adjust_il pc: 5 op: STARTLINE (58)

    /** inline.e:208		for i = 1 to op_info[op][OP_SIZE] - 1 do*/
    // SubProg adjust_il pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_il pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_65op_info_23893);
    _27164 = (object)*(((s1_ptr)_2)->base + _op_53135);
    // SubProg adjust_il pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_il pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27164);
    _27165 = (object)*(((s1_ptr)_2)->base + 2);
    _27164 = NOVALUE;
    // SubProg adjust_il pc: 19 op: MINUS (10)
    if (IS_ATOM_INT(_27165)) {
        _27166 = _27165 - 1;
        if ((object)((uintptr_t)_27166 +(uintptr_t) HIGH_BITS) >= 0){
            _27166 = NewDouble((eudouble)_27166);
        }
    }
    else {
        _27166 = binary_op(MINUS, _27165, 1);
    }
    _27165 = NOVALUE;
    // SubProg adjust_il pc: 23 op: FOR (21)
    {
        object _i_53137;
        _i_53137 = 1;
L1: // addr: 30 pc: 23 sub: 53132 op: 21
        if (binary_op_a(GREATER, _i_53137, _27166)){
            goto L2; // [23] 214
        }
        // SubProg adjust_il pc: 30 op: STARTLINE (58)

        /** inline.e:210			integer addr = find( i, op_info[op][OP_ADDR] )*/
        // SubProg adjust_il pc: 32 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_65op_info_23893);
        _27167 = (object)*(((s1_ptr)_2)->base + _op_53135);
        // SubProg adjust_il pc: 38 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 40 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27167);
        _27168 = (object)*(((s1_ptr)_2)->base + 3);
        _27167 = NOVALUE;
        // SubProg adjust_il pc: 44 op: FIND_FROM (176)
        _addr_53143 = find_from(_i_53137, _27168, 1);
        _27168 = NOVALUE;
        // SubProg adjust_il pc: 49 op: STARTLINE (58)

        /** inline.e:211			integer sub  = find( i, op_info[op][OP_SUB] )*/
        // SubProg adjust_il pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 53 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_65op_info_23893);
        _27170 = (object)*(((s1_ptr)_2)->base + _op_53135);
        // SubProg adjust_il pc: 57 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 59 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27170);
        _27171 = (object)*(((s1_ptr)_2)->base + 5);
        _27170 = NOVALUE;
        // SubProg adjust_il pc: 63 op: FIND_FROM (176)
        _sub_53149 = find_from(_i_53137, _27171, 1);
        _27171 = NOVALUE;
        // SubProg adjust_il pc: 68 op: STARTLINE (58)

        /** inline.e:212			if addr then*/
        // SubProg adjust_il pc: 70 op: IF (20)
        if (_addr_53143 == 0)
        {
            goto L3; // [70] 121
        }
        else{
        }
        // SubProg adjust_il pc: 73 op: STARTLINE (58)

        /** inline.e:213				if integer( inline_code[pc+i] ) then*/
        // SubProg adjust_il pc: 75 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 77 op: PLUS (11)
        if (IS_ATOM_INT(_i_53137)) {
            _27173 = _pc_53134 + _i_53137;
        }
        else {
            _27173 = NewDouble((eudouble)_pc_53134 + DBL_PTR(_i_53137)->dbl);
        }
        // SubProg adjust_il pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        if (!IS_ATOM_INT(_27173)){
            _27174 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27173)->dbl));
        }
        else{
            _27174 = (object)*(((s1_ptr)_2)->base + _27173);
        }
        // SubProg adjust_il pc: 85 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_27174))
        _27175 = 1;
        else if (IS_ATOM_DBL(_27174))
        _27175 = IS_ATOM_INT(DoubleToInt(_27174));
        else
        _27175 = 0;
        _27174 = NOVALUE;
        // SubProg adjust_il pc: 88 op: IF (20)
        if (_27175 == 0)
        {
            _27175 = NOVALUE;
            goto L4; // [88] 205
        }
        else{
            _27175 = NOVALUE;
        }
        // SubProg adjust_il pc: 91 op: STARTLINE (58)

        /** inline.e:214					inline_code[pc + i] = { INLINE_ADDR, inline_code[pc + i] }*/
        // SubProg adjust_il pc: 93 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 95 op: PLUS (11)
        if (IS_ATOM_INT(_i_53137)) {
            _27176 = _pc_53134 + _i_53137;
            if ((object)((uintptr_t)_27176 + (uintptr_t)HIGH_BITS) >= 0){
                _27176 = NewDouble((eudouble)_27176);
            }
        }
        else {
            _27176 = NewDouble((eudouble)_pc_53134 + DBL_PTR(_i_53137)->dbl);
        }
        // SubProg adjust_il pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 101 op: PLUS (11)
        if (IS_ATOM_INT(_i_53137)) {
            _27177 = _pc_53134 + _i_53137;
        }
        else {
            _27177 = NewDouble((eudouble)_pc_53134 + DBL_PTR(_i_53137)->dbl);
        }
        // SubProg adjust_il pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        if (!IS_ATOM_INT(_27177)){
            _27178 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27177)->dbl));
        }
        else{
            _27178 = (object)*(((s1_ptr)_2)->base + _27177);
        }
        // SubProg adjust_il pc: 109 op: RIGHT_BRACE_2 (85)
        Ref(_27178);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 4;
        ((intptr_t *)_2)[2] = _27178;
        _27179 = MAKE_SEQ(_1);
        _27178 = NOVALUE;
        // SubProg adjust_il pc: 113 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52969 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27176))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27176)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27176);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27179;
        if( _1 != _27179 ){
            DeRef(_1);
        }
        _27179 = NOVALUE;
        // SubProg adjust_il pc: 117 op: NOP1 (159)
        // SubProg adjust_il pc: 118 op: ELSE (23)
        goto L4; // [118] 205
        // SubProg adjust_il pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 53132 op: 159
        // SubProg adjust_il pc: 121 op: STARTLINE (58)

        /** inline.e:217			elsif sub then*/
        // SubProg adjust_il pc: 123 op: IF (20)
        if (_sub_53149 == 0)
        {
            goto L5; // [123] 141
        }
        else{
        }
        // SubProg adjust_il pc: 126 op: STARTLINE (58)

        /** inline.e:218				inline_code[pc+i] = {INLINE_SUB}*/
        // SubProg adjust_il pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 130 op: PLUS (11)
        if (IS_ATOM_INT(_i_53137)) {
            _27180 = _pc_53134 + _i_53137;
        }
        else {
            _27180 = NewDouble((eudouble)_pc_53134 + DBL_PTR(_i_53137)->dbl);
        }
        // SubProg adjust_il pc: 134 op: ASSIGN_SUBS (16)
        RefDS(_27181);
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52969 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_27180))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27180)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _27180);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27181;
        DeRef(_1);
        // SubProg adjust_il pc: 138 op: ELSE (23)
        goto L4; // [138] 205
        // SubProg adjust_il pc: 140 op: NOP1 (159)
L5: // addr: 141 pc: 140 sub: 53132 op: 159
        // SubProg adjust_il pc: 141 op: STARTLINE (58)

        /** inline.e:220				if op != STARTLINE and op != COVERAGE_LINE and op != COVERAGE_ROUTINE then*/
        // SubProg adjust_il pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 145 op: NOTEQ (4)
        _27182 = (_op_53135 != 58);
        // SubProg adjust_il pc: 149 op: SC1_AND (141)
        if (_27182 == 0) {
            _27183 = 0;
            goto L6; // [149] 163
        }
        // SubProg adjust_il pc: 153 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 155 op: NOTEQ (4)
        _27184 = (_op_53135 != 210);
        // SubProg adjust_il pc: 159 op: SC2_AND (142)
        _27183 = (_27184 != 0);
        // SubProg adjust_il pc: 162 op: NOP1 (159)
L6: // addr: 163 pc: 162 sub: 53132 op: 159
        // SubProg adjust_il pc: 163 op: SC1_AND_IF (146)
        if (_27183 == 0) {
            goto L7; // [163] 204
        }
        // SubProg adjust_il pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg adjust_il pc: 169 op: NOTEQ (4)
        _27186 = (_op_53135 != 211);
        // SubProg adjust_il pc: 173 op: NOP1 (159)
        // SubProg adjust_il pc: 174 op: IF (20)
        if (_27186 == 0)
        {
            DeRef(_27186);
            _27186 = NOVALUE;
            goto L7; // [174] 204
        }
        else{
            DeRef(_27186);
            _27186 = NOVALUE;
        }
        // SubProg adjust_il pc: 177 op: STARTLINE (58)

        /** inline.e:221					check_target( pc, op )*/
        // SubProg adjust_il pc: 179 op: PROC (27)
        _66check_target(_pc_53134, _op_53135);
        // SubProg adjust_il pc: 183 op: STARTLINE (58)

        /** inline.e:222					if not adjust_symbol( pc + i ) then*/
        // SubProg adjust_il pc: 185 op: PLUS (11)
        if (IS_ATOM_INT(_i_53137)) {
            _27187 = _pc_53134 + _i_53137;
            if ((object)((uintptr_t)_27187 + (uintptr_t)HIGH_BITS) >= 0){
                _27187 = NewDouble((eudouble)_27187);
            }
        }
        else {
            _27187 = NewDouble((eudouble)_pc_53134 + DBL_PTR(_i_53137)->dbl);
        }
        // SubProg adjust_il pc: 189 op: PROC (27)
        _27188 = _66adjust_symbol(_27187);
        _27187 = NOVALUE;
        // SubProg adjust_il pc: 193 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27188)) {
            if (_27188 != 0){
                DeRef(_27188);
                _27188 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        else {
            if (DBL_PTR(_27188)->dbl != 0.0){
                DeRef(_27188);
                _27188 = NOVALUE;
                goto L8; // [193] 203
            }
        }
        DeRef(_27188);
        _27188 = NOVALUE;
        // SubProg adjust_il pc: 196 op: STARTLINE (58)

        /** inline.e:223						return 0*/
        // SubProg adjust_il pc: 198 op: RETURNF (28)
        DeRef(_i_53137);

// Exiting block BLOCK: FOR-

// block var addr_53143

// block var sub_53149

// Exiting block BLOCK: adjust_il

// block var pc_53134

// block var op_53135
        DeRef(_27177);
        _27177 = NOVALUE;
        DeRef(_27166);
        _27166 = NOVALUE;
        DeRef(_27176);
        _27176 = NOVALUE;
        DeRef(_27173);
        _27173 = NOVALUE;
        DeRef(_27182);
        _27182 = NOVALUE;
        DeRef(_27184);
        _27184 = NOVALUE;
        DeRef(_27180);
        _27180 = NOVALUE;
        return 0;
        // SubProg adjust_il pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 53132 op: 159
        // SubProg adjust_il pc: 203 op: NOP1 (159)
L7: // addr: 204 pc: 203 sub: 53132 op: 159
        // SubProg adjust_il pc: 204 op: NOP1 (159)
L4: // addr: 205 pc: 204 sub: 53132 op: 159
        // SubProg adjust_il pc: 205 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var addr_53143

// block var sub_53149
        // SubProg adjust_il pc: 207 op: STARTLINE (58)

        /** inline.e:227		end for*/
        // SubProg adjust_il pc: 209 op: ENDFOR_INT_UP1 (54)
        _0 = _i_53137;
        if (IS_ATOM_INT(_i_53137)) {
            _i_53137 = _i_53137 + 1;
            if ((object)((uintptr_t)_i_53137 +(uintptr_t) HIGH_BITS) >= 0){
                _i_53137 = NewDouble((eudouble)_i_53137);
            }
        }
        else {
            _i_53137 = binary_op_a(PLUS, _i_53137, 1);
        }
        DeRef(_0);
        goto L1; // [209] 30
L2: // addr: 214 pc: 209 sub: 53132 op: 54
        ;
        DeRef(_i_53137);
    }
    // SubProg adjust_il pc: 214 op: STARTLINE (58)

    /** inline.e:228		return 1*/
    // SubProg adjust_il pc: 216 op: RETURNF (28)

// Exiting block BLOCK: adjust_il

// block var pc_53134

// block var op_53135
    DeRef(_27177);
    _27177 = NOVALUE;
    DeRef(_27166);
    _27166 = NOVALUE;
    DeRef(_27176);
    _27176 = NOVALUE;
    DeRef(_27173);
    _27173 = NOVALUE;
    DeRef(_27182);
    _27182 = NOVALUE;
    DeRef(_27184);
    _27184 = NOVALUE;
    DeRef(_27180);
    _27180 = NOVALUE;
    return 1;
    // SubProg adjust_il pc: 220 op: BADRETURNF (43)
    ;
}


object _66is_temp(object _sym_53184)
{
    object _27199 = NOVALUE; // 53202 27199
    object _27198 = NOVALUE; // 53201 27198
    object _27197 = NOVALUE; // 53200 27197
    object _27196 = NOVALUE; // 53199 27196
    object _27195 = NOVALUE; // 53197 27195
    object _27194 = NOVALUE; // 53194 27194
    object _27193 = NOVALUE; // 53192 27193
    object _27192 = NOVALUE; // 53190 27192
    object _27191 = NOVALUE; // 53188 27191
// skipping _27190  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_temp pc: 3 op: STARTLINE (58)

    /** inline.e:232		if sym <= 0 then*/
    // SubProg is_temp pc: 5 op: LESSEQ_IFW (106)
    if (_sym_53184 > 0)
    goto L1; // [5] 16
    // SubProg is_temp pc: 9 op: STARTLINE (58)

    /** inline.e:233			return 0*/
    // SubProg is_temp pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_temp

// block var sym_53184
    return 0;
    // SubProg is_temp pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 53181 op: 159
    // SubProg is_temp pc: 16 op: STARTLINE (58)

    /** inline.e:236		return (SymTab[sym][S_MODE] = M_TEMP) and (not TRANSLATE or equal( NOVALUE, SymTab[sym][S_OBJ]) )*/
    // SubProg is_temp pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27191 = (object)*(((s1_ptr)_2)->base + _sym_53184);
    // SubProg is_temp pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27191);
    _27192 = (object)*(((s1_ptr)_2)->base + 3);
    _27191 = NOVALUE;
    // SubProg is_temp pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 32 op: EQUALS (3)
    if (IS_ATOM_INT(_27192)) {
        _27193 = (_27192 == 3);
    }
    else {
        _27193 = binary_op(EQUALS, _27192, 3);
    }
    _27192 = NOVALUE;
    // SubProg is_temp pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 38 op: NOT (7)
    _27194 = (_5TRANSLATE_12097 == 0);
    // SubProg is_temp pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27195 = (object)*(((s1_ptr)_2)->base + _sym_53184);
    // SubProg is_temp pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_temp pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27195);
    _27196 = (object)*(((s1_ptr)_2)->base + 1);
    _27195 = NOVALUE;
    // SubProg is_temp pc: 55 op: EQUAL (153)
    if (_5NOVALUE_12331 == _27196)
    _27197 = 1;
    else if (IS_ATOM_INT(_5NOVALUE_12331) && IS_ATOM_INT(_27196))
    _27197 = 0;
    else
    _27197 = (compare(_5NOVALUE_12331, _27196) == 0);
    _27196 = NOVALUE;
    // SubProg is_temp pc: 59 op: OR (9)
    _27198 = (_27194 != 0 || _27197 != 0);
    _27194 = NOVALUE;
    _27197 = NOVALUE;
    // SubProg is_temp pc: 63 op: AND (8)
    if (IS_ATOM_INT(_27193)) {
        _27199 = (_27193 != 0 && _27198 != 0);
    }
    else {
        _27199 = binary_op(AND, _27193, _27198);
    }
    DeRef(_27193);
    _27193 = NOVALUE;
    _27198 = NOVALUE;
    // SubProg is_temp pc: 67 op: RETURNF (28)

// Exiting block BLOCK: is_temp

// block var sym_53184
    return _27199;
    // SubProg is_temp pc: 71 op: BADRETURNF (43)
    ;
}


object _66is_literal(object _sym_53206)
{
    object _mode_53209 = NOVALUE;
    object _27214 = NOVALUE; // 53235 27214
    object _27213 = NOVALUE; // 53233 27213
    object _27212 = NOVALUE; // 53231 27212
    object _27211 = NOVALUE; // 53229 27211
    object _27210 = NOVALUE; // 53228 27210
    object _27209 = NOVALUE; // 53226 27209
// skipping _27208  name type: 0
    object _27207 = NOVALUE; // 53223 27207
    object _27206 = NOVALUE; // 53222 27206
    object _27205 = NOVALUE; // 53220 27205
    object _27204 = NOVALUE; // 53217 27204
    object _27203 = NOVALUE; // 53216 27203
// skipping _27202  name type: 0
    object _27201 = NOVALUE; // 53211 27201
// skipping _27200  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_literal pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_literal pc: 3 op: STARTLINE (58)

    /** inline.e:240		if sym <= 0 then*/
    // SubProg is_literal pc: 5 op: LESSEQ_IFW (106)
    if (_sym_53206 > 0)
    goto L1; // [5] 16
    // SubProg is_literal pc: 9 op: STARTLINE (58)

    /** inline.e:241			return 0*/
    // SubProg is_literal pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53206

// block var mode_53209
    return 0;
    // SubProg is_literal pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 53203 op: 159
    // SubProg is_literal pc: 16 op: STARTLINE (58)

    /** inline.e:244		integer mode = SymTab[sym][S_MODE]*/
    // SubProg is_literal pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27201 = (object)*(((s1_ptr)_2)->base + _sym_53206);
    // SubProg is_literal pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27201);
    _mode_53209 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_53209)){
        _mode_53209 = (object)DBL_PTR(_mode_53209)->dbl;
    }
    _27201 = NOVALUE;
    // SubProg is_literal pc: 32 op: STARTLINE (58)

    /** inline.e:245		if (mode = M_CONSTANT and eu:compare( NOVALUE, SymTab[sym][S_OBJ]) ) */
    // SubProg is_literal pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 36 op: EQUALS (3)
    _27203 = (_mode_53209 == 2);
    // SubProg is_literal pc: 40 op: SC1_AND (141)
    if (_27203 == 0) {
        _27204 = 0;
        goto L2; // [40] 66
    }
    // SubProg is_literal pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27205 = (object)*(((s1_ptr)_2)->base + _sym_53206);
    // SubProg is_literal pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27205);
    _27206 = (object)*(((s1_ptr)_2)->base + 1);
    _27205 = NOVALUE;
    // SubProg is_literal pc: 58 op: COMPARE (76)
    if (IS_ATOM_INT(_5NOVALUE_12331) && IS_ATOM_INT(_27206)){
        _27207 = (_5NOVALUE_12331 < _27206) ? -1 : (_5NOVALUE_12331 > _27206);
    }
    else{
        _27207 = compare(_5NOVALUE_12331, _27206);
    }
    _27206 = NOVALUE;
    // SubProg is_literal pc: 62 op: SC2_AND (142)
    _27204 = (_27207 != 0);
    // SubProg is_literal pc: 65 op: NOP1 (159)
L2: // addr: 66 pc: 65 sub: 53203 op: 159
    // SubProg is_literal pc: 66 op: SC1_OR_IF (147)
    if (_27204 != 0) {
        goto L3; // [66] 117
    }
    // SubProg is_literal pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 72 op: SC1_AND (141)
    if (_5TRANSLATE_12097 == 0) {
        _27209 = 0;
        goto L4; // [72] 86
    }
    // SubProg is_literal pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 78 op: EQUALS (3)
    _27210 = (_mode_53209 == 3);
    // SubProg is_literal pc: 82 op: SC2_AND (142)
    _27209 = (_27210 != 0);
    // SubProg is_literal pc: 85 op: NOP1 (159)
L4: // addr: 86 pc: 85 sub: 53203 op: 159
    // SubProg is_literal pc: 86 op: SC1_AND (141)
    if (_27209 == 0) {
        DeRef(_27211);
        _27211 = 0;
        goto L5; // [86] 112
    }
    // SubProg is_literal pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 92 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27212 = (object)*(((s1_ptr)_2)->base + _sym_53206);
    // SubProg is_literal pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27212);
    _27213 = (object)*(((s1_ptr)_2)->base + 1);
    _27212 = NOVALUE;
    // SubProg is_literal pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_literal pc: 104 op: COMPARE (76)
    if (IS_ATOM_INT(_27213) && IS_ATOM_INT(_5NOVALUE_12331)){
        _27214 = (_27213 < _5NOVALUE_12331) ? -1 : (_27213 > _5NOVALUE_12331);
    }
    else{
        _27214 = compare(_27213, _5NOVALUE_12331);
    }
    _27213 = NOVALUE;
    // SubProg is_literal pc: 108 op: SC2_AND (142)
    _27211 = (_27214 != 0);
    // SubProg is_literal pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 53203 op: 159
    // SubProg is_literal pc: 112 op: NOP1 (159)
    // SubProg is_literal pc: 113 op: IF (20)
    if (_27211 == 0)
    {
        _27211 = NOVALUE;
        goto L6; // [113] 126
    }
    else{
        _27211 = NOVALUE;
    }
    // SubProg is_literal pc: 116 op: NOP1 (159)
L3: // addr: 117 pc: 116 sub: 53203 op: 159
    // SubProg is_literal pc: 117 op: STARTLINE (58)

    /** inline.e:247			return 1*/
    // SubProg is_literal pc: 119 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53206

// block var mode_53209
    DeRef(_27210);
    _27210 = NOVALUE;
    DeRef(_27203);
    _27203 = NOVALUE;
    return 1;
    // SubProg is_literal pc: 123 op: ELSE (23)
    goto L7; // [123] 133
    // SubProg is_literal pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 53203 op: 159
    // SubProg is_literal pc: 126 op: STARTLINE (58)

    /** inline.e:249			return 0*/
    // SubProg is_literal pc: 128 op: RETURNF (28)

// Exiting block BLOCK: is_literal

// block var sym_53206

// block var mode_53209
    DeRef(_27210);
    _27210 = NOVALUE;
    DeRef(_27203);
    _27203 = NOVALUE;
    return 0;
    // SubProg is_literal pc: 132 op: NOP1 (159)
L7: // addr: 133 pc: 132 sub: 53203 op: 159
    // SubProg is_literal pc: 133 op: BADRETURNF (43)
    ;
}


object _66returnf(object _pc_53256)
{
    object _retsym_53258 = NOVALUE;
    object _code_53291 = NOVALUE;
    object _ret_pc_53292 = NOVALUE;
    object _code_53337 = NOVALUE;
    object _ret_pc_53351 = NOVALUE;
    object _27287 = NOVALUE; // 53358 27287
    object _27286 = NOVALUE; // 53357 27286
// skipping _27285  name type: 0
    object _27284 = NOVALUE; // 53355 27284
// skipping _27283  name type: 0
    object _27282 = NOVALUE; // 53352 27282
    object _27281 = NOVALUE; // 53350 27281
// skipping _27280  name type: 0
    object _27279 = NOVALUE; // 53348 27279
    object _27278 = NOVALUE; // 53347 27278
// skipping _27277  name type: 0
    object _27276 = NOVALUE; // 53344 27276
    object _27275 = NOVALUE; // 53343 27275
    object _27274 = NOVALUE; // 53341 27274
// skipping _27273  name type: 0
    object _27272 = NOVALUE; // 53335 27272
    object _27271 = NOVALUE; // 53334 27271
// skipping _27270  name type: 0
    object _27269 = NOVALUE; // 53332 27269
// skipping _27268  name type: 0
    object _27267 = NOVALUE; // 53329 27267
    object _27266 = NOVALUE; // 53328 27266
// skipping _27265  name type: 0
    object _27264 = NOVALUE; // 53326 27264
    object _27263 = NOVALUE; // 53325 27263
// skipping _27262  name type: 0
    object _27261 = NOVALUE; // 53322 27261
    object _27260 = NOVALUE; // 53321 27260
    object _27259 = NOVALUE; // 53319 27259
// skipping _27258  name type: 0
    object _27257 = NOVALUE; // 53316 27257
    object _27256 = NOVALUE; // 53313 27256
    object _27255 = NOVALUE; // 53312 27255
    object _27254 = NOVALUE; // 53310 27254
    object _27253 = NOVALUE; // 53309 27253
    object _27251 = NOVALUE; // 53306 27251
    object _27250 = NOVALUE; // 53304 27250
    object _27249 = NOVALUE; // 53303 27249
    object _27248 = NOVALUE; // 53302 27248
// skipping _27247  name type: 0
    object _27246 = NOVALUE; // 53299 27246
// skipping _27245  name type: 0
    object _27244 = NOVALUE; // 53296 27244
    object _27243 = NOVALUE; // 53295 27243
    object _27242 = NOVALUE; // 53294 27242
    object _27241 = NOVALUE; // 53290 27241
    object _27240 = NOVALUE; // 53288 27240
    object _27239 = NOVALUE; // 53286 27239
    object _27238 = NOVALUE; // 53284 27238
    object _27237 = NOVALUE; // 53283 27237
    object _27236 = NOVALUE; // 53282 27236
// skipping _27235  name type: 0
    object _27234 = NOVALUE; // 53280 27234
    object _27233 = NOVALUE; // 53278 27233
    object _27232 = NOVALUE; // 53277 27232
// skipping _27231  name type: 0
    object _27230 = NOVALUE; // 53274 27230
    object _27229 = NOVALUE; // 53272 27229
    object _27228 = NOVALUE; // 53268 27228
    object _27227 = NOVALUE; // 53265 27227
    object _27226 = NOVALUE; // 53263 27226
    object _27225 = NOVALUE; // 53262 27225
// skipping _27224  name type: 0
    object _27223 = NOVALUE; // 53259 27223
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg returnf pc: 1 op: INTEGER_CHECK (96)
    // SubProg returnf pc: 3 op: STARTLINE (58)

    /** inline.e:259		symtab_index retsym = inline_code[pc+3]*/
    // SubProg returnf pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 7 op: PLUS (11)
    _27223 = _pc_53256 + 3;
    // SubProg returnf pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _retsym_53258 = (object)*(((s1_ptr)_2)->base + _27223);
    if (!IS_ATOM_INT(_retsym_53258)){
        _retsym_53258 = (object)DBL_PTR(_retsym_53258)->dbl;
    }
    // SubProg returnf pc: 17 op: STARTLINE (58)

    /** inline.e:260		if equal( inline_code[$], BADRETURNF ) then*/
    // SubProg returnf pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27225 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27225 = 1;
    }
    // SubProg returnf pc: 24 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27226 = (object)*(((s1_ptr)_2)->base + _27225);
    // SubProg returnf pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 30 op: EQUAL (153)
    if (_27226 == 43)
    _27227 = 1;
    else if (IS_ATOM_INT(_27226) && IS_ATOM_INT(43))
    _27227 = 0;
    else
    _27227 = (compare(_27226, 43) == 0);
    _27226 = NOVALUE;
    // SubProg returnf pc: 34 op: IF (20)
    if (_27227 == 0)
    {
        _27227 = NOVALUE;
        goto L1; // [34] 102
    }
    else{
        _27227 = NOVALUE;
    }
    // SubProg returnf pc: 37 op: STARTLINE (58)

    /** inline.e:261			if TRANSLATE then*/
    // SubProg returnf pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 41 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L2; // [41] 60
    }
    else{
    }
    // SubProg returnf pc: 44 op: STARTLINE (58)

    /** inline.e:262				inline_code[$] = NOP1*/
    // SubProg returnf pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 48 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27228 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27228 = 1;
    }
    // SubProg returnf pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 53 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27228);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg returnf pc: 57 op: ELSE (23)
    goto L3; // [57] 101
    // SubProg returnf pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 53254 op: 159
    // SubProg returnf pc: 60 op: STARTLINE (58)

    /** inline.e:263			elsif SymTab[inline_sub][S_TOKEN] = PROC then*/
    // SubProg returnf pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 66 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27229 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52983);
    // SubProg returnf pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 72 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27229);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _27230 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _27230 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _27229 = NOVALUE;
    // SubProg returnf pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 78 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27230, 27)){
        _27230 = NOVALUE;
        goto L4; // [78] 100
    }
    _27230 = NOVALUE;
    // SubProg returnf pc: 82 op: STARTLINE (58)

    /** inline.e:264				replace_code( {}, length(inline_code), length(inline_code) )*/
    // SubProg returnf pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27232 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27232 = 1;
    }
    // SubProg returnf pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27233 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27233 = 1;
    }
    // SubProg returnf pc: 94 op: PROC (27)
    RefDS(_21958);
    _66replace_code(_21958, _27232, _27233);
    _27232 = NOVALUE;
    _27233 = NOVALUE;
    // SubProg returnf pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 53254 op: 159
    // SubProg returnf pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 53254 op: 159
    // SubProg returnf pc: 101 op: NOP1 (159)
L1: // addr: 102 pc: 101 sub: 53254 op: 159
    // SubProg returnf pc: 102 op: STARTLINE (58)

    /** inline.e:270		if is_temp( retsym ) */
    // SubProg returnf pc: 104 op: PROC (27)
    _27234 = _66is_temp(_retsym_53258);
    // SubProg returnf pc: 108 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_27234)) {
        if (_27234 != 0) {
            goto L5; // [108] 150
        }
    }
    else {
        if (DBL_PTR(_27234)->dbl != 0.0) {
            goto L5; // [108] 150
        }
    }
    // SubProg returnf pc: 112 op: PROC (27)
    _27236 = _66is_literal(_retsym_53258);
    // SubProg returnf pc: 116 op: NOT (7)
    if (IS_ATOM_INT(_27236)) {
        _27237 = (_27236 == 0);
    }
    else {
        _27237 = unary_op(NOT, _27236);
    }
    DeRef(_27236);
    _27236 = NOVALUE;
    // SubProg returnf pc: 119 op: SC1_AND (141)
    if (IS_ATOM_INT(_27237)) {
        if (_27237 == 0) {
            DeRef(_27238);
            _27238 = 0;
            goto L6; // [119] 145
        }
    }
    else {
        if (DBL_PTR(_27237)->dbl == 0.0) {
            DeRef(_27238);
            _27238 = 0;
            goto L6; // [119] 145
        }
    }
    // SubProg returnf pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 125 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27239 = (object)*(((s1_ptr)_2)->base + _retsym_53258);
    // SubProg returnf pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 131 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27239);
    _27240 = (object)*(((s1_ptr)_2)->base + 4);
    _27239 = NOVALUE;
    // SubProg returnf pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 137 op: LESSEQ (5)
    if (IS_ATOM_INT(_27240)) {
        _27241 = (_27240 <= 3);
    }
    else {
        _27241 = binary_op(LESSEQ, _27240, 3);
    }
    _27240 = NOVALUE;
    // SubProg returnf pc: 141 op: SC2_AND (142)
    DeRef(_27238);
    if (IS_ATOM_INT(_27241))
    _27238 = (_27241 != 0);
    else
    _27238 = DBL_PTR(_27241)->dbl != 0.0;
    // SubProg returnf pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 53254 op: 159
    // SubProg returnf pc: 145 op: NOP1 (159)
    // SubProg returnf pc: 146 op: IF (20)
    if (_27238 == 0)
    {
        _27238 = NOVALUE;
        goto L7; // [146] 393
    }
    else{
        _27238 = NOVALUE;
    }
    // SubProg returnf pc: 149 op: NOP1 (159)
L5: // addr: 150 pc: 149 sub: 53254 op: 159
    // SubProg returnf pc: 150 op: STARTLINE (58)

    /** inline.e:272			sequence code = {}*/
    // SubProg returnf pc: 152 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_code_53291);
    _code_53291 = _21958;
    // SubProg returnf pc: 155 op: SEQUENCE_CHECK (97)
    // SubProg returnf pc: 157 op: STARTLINE (58)

    /** inline.e:274			integer ret_pc = 0*/
    // SubProg returnf pc: 159 op: ASSIGN_I (113)
    _ret_pc_53292 = 0;
    // SubProg returnf pc: 162 op: STARTLINE (58)

    /** inline.e:276			if not (find( retsym, inline_params ) or find( retsym, proc_vars )) then*/
    // SubProg returnf pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 166 op: FIND_FROM (176)
    _27242 = find_from(_retsym_53258, _66inline_params_52974, 1);
    // SubProg returnf pc: 171 op: SC1_OR (143)
    if (_27242 != 0) {
        DeRef(_27243);
        _27243 = 1;
        goto L8; // [171] 186
    }
    // SubProg returnf pc: 175 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 177 op: FIND_FROM (176)
    _27244 = find_from(_retsym_53258, _66proc_vars_52970, 1);
    // SubProg returnf pc: 182 op: SC2_OR (144)
    _27243 = (_27244 != 0);
    // SubProg returnf pc: 185 op: NOP1 (159)
L8: // addr: 186 pc: 185 sub: 53254 op: 159
    // SubProg returnf pc: 186 op: NOT_IFW (108)
    if (_27243 != 0)
    goto L9; // [186] 206
    _27243 = NOVALUE;
    // SubProg returnf pc: 189 op: STARTLINE (58)

    /** inline.e:277				ret_pc = rfind( generic_symbol( retsym ), inline_code, pc )*/
    // SubProg returnf pc: 191 op: PROC (27)
    _27246 = _66generic_symbol(_retsym_53258);
    // SubProg returnf pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 197 op: PROC (27)
    RefDS(_66inline_code_52969);
    _ret_pc_53292 = _22rfind(_27246, _66inline_code_52969, _pc_53256);
    _27246 = NOVALUE;
    // SubProg returnf pc: 203 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ret_pc_53292)) {
        _1 = (object)(DBL_PTR(_ret_pc_53292)->dbl);
        DeRefDS(_ret_pc_53292);
        _ret_pc_53292 = _1;
    }
    // SubProg returnf pc: 205 op: NOP1 (159)
L9: // addr: 206 pc: 205 sub: 53254 op: 159
    // SubProg returnf pc: 206 op: STARTLINE (58)

    /** inline.e:281			if ret_pc and eu:compare( inline_code[ret_pc-1], PRIVATE_INIT_CHECK ) then*/
    // SubProg returnf pc: 208 op: SC1_AND_IF (146)
    if (_ret_pc_53292 == 0) {
        goto LA; // [208] 277
    }
    // SubProg returnf pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 214 op: MINUS (10)
    _27249 = _ret_pc_53292 - 1;
    // SubProg returnf pc: 218 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27250 = (object)*(((s1_ptr)_2)->base + _27249);
    // SubProg returnf pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 224 op: COMPARE (76)
    if (IS_ATOM_INT(_27250) && IS_ATOM_INT(30)){
        _27251 = (_27250 < 30) ? -1 : (_27250 > 30);
    }
    else{
        _27251 = compare(_27250, 30);
    }
    _27250 = NOVALUE;
    // SubProg returnf pc: 228 op: NOP1 (159)
    // SubProg returnf pc: 229 op: IF (20)
    if (_27251 == 0)
    {
        _27251 = NOVALUE;
        goto LA; // [229] 277
    }
    else{
        _27251 = NOVALUE;
    }
    // SubProg returnf pc: 232 op: STARTLINE (58)

    /** inline.e:282				inline_code[ret_pc] = {INLINE_TARGET}*/
    // SubProg returnf pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 236 op: ASSIGN_SUBS (16)
    RefDS(_27252);
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ret_pc_53292);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27252;
    DeRef(_1);
    // SubProg returnf pc: 240 op: STARTLINE (58)

    /** inline.e:284				if equal( inline_code[ret_pc-1], REF_TEMP ) then*/
    // SubProg returnf pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 244 op: MINUS (10)
    _27253 = _ret_pc_53292 - 1;
    // SubProg returnf pc: 248 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27254 = (object)*(((s1_ptr)_2)->base + _27253);
    // SubProg returnf pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 254 op: EQUAL (153)
    if (_27254 == 207)
    _27255 = 1;
    else if (IS_ATOM_INT(_27254) && IS_ATOM_INT(207))
    _27255 = 0;
    else
    _27255 = (compare(_27254, 207) == 0);
    _27254 = NOVALUE;
    // SubProg returnf pc: 258 op: IF (20)
    if (_27255 == 0)
    {
        _27255 = NOVALUE;
        goto LB; // [258] 292
    }
    else{
        _27255 = NOVALUE;
    }
    // SubProg returnf pc: 261 op: STARTLINE (58)

    /** inline.e:287					inline_code[ret_pc-2] = {INLINE_TARGET}*/
    // SubProg returnf pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 265 op: MINUS (10)
    _27256 = _ret_pc_53292 - 2;
    // SubProg returnf pc: 269 op: ASSIGN_SUBS (16)
    RefDS(_27252);
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27256);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27252;
    DeRef(_1);
    // SubProg returnf pc: 273 op: NOP1 (159)
    // SubProg returnf pc: 274 op: ELSE (23)
    goto LB; // [274] 292
    // SubProg returnf pc: 276 op: NOP1 (159)
LA: // addr: 277 pc: 276 sub: 53254 op: 159
    // SubProg returnf pc: 277 op: STARTLINE (58)

    /** inline.e:290				code = {ASSIGN, generic_symbol( retsym ), {INLINE_TARGET}}*/
    // SubProg returnf pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 281 op: PROC (27)
    _27257 = _66generic_symbol(_retsym_53258);
    // SubProg returnf pc: 285 op: RIGHT_BRACE_N (31)
    _0 = _code_53291;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _27257;
    RefDS(_27252);
    ((intptr_t*)_2)[3] = _27252;
    _code_53291 = MAKE_SEQ(_1);
    DeRef(_0);
    _27257 = NOVALUE;
    // SubProg returnf pc: 291 op: NOP1 (159)
LB: // addr: 292 pc: 291 sub: 53254 op: 159
    // SubProg returnf pc: 292 op: STARTLINE (58)

    /** inline.e:293			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    // SubProg returnf pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 296 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27259 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27259 = 1;
    }
    // SubProg returnf pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 301 op: PLUS (11)
    _27260 = 3 + _5TRANSLATE_12097;
    // SubProg returnf pc: 305 op: MINUS (10)
    _27261 = _27259 - _27260;
    _27259 = NOVALUE;
    _27260 = NOVALUE;
    // SubProg returnf pc: 309 op: NOTEQ_IFW (105)
    if (_pc_53256 == _27261)
    goto LC; // [309] 330
    // SubProg returnf pc: 313 op: STARTLINE (58)

    /** inline.e:294				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    // SubProg returnf pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 317 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27263 = MAKE_SEQ(_1);
    // SubProg returnf pc: 321 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27263;
    _27264 = MAKE_SEQ(_1);
    _27263 = NOVALUE;
    // SubProg returnf pc: 325 op: CONCAT (15)
    Concat((object_ptr)&_code_53291, _code_53291, _27264);
    DeRefDS(_27264);
    _27264 = NOVALUE;
    // SubProg returnf pc: 329 op: NOP1 (159)
LC: // addr: 330 pc: 329 sub: 53254 op: 159
    // SubProg returnf pc: 330 op: STARTLINE (58)

    /** inline.e:298			replace_code( code, pc, pc + 3 )*/
    // SubProg returnf pc: 332 op: PLUS (11)
    _27266 = _pc_53256 + 3;
    if ((object)((uintptr_t)_27266 + (uintptr_t)HIGH_BITS) >= 0){
        _27266 = NewDouble((eudouble)_27266);
    }
    // SubProg returnf pc: 336 op: PROC (27)
    RefDS(_code_53291);
    _66replace_code(_code_53291, _pc_53256, _27266);
    _27266 = NOVALUE;
    // SubProg returnf pc: 341 op: STARTLINE (58)

    /** inline.e:299			ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    // SubProg returnf pc: 343 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27267 = MAKE_SEQ(_1);
    // SubProg returnf pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 349 op: FIND_FROM (176)
    _ret_pc_53292 = find_from(_27267, _66inline_code_52969, _pc_53256);
    DeRefDS(_27267);
    _27267 = NOVALUE;
    // SubProg returnf pc: 354 op: STARTLINE (58)

    /** inline.e:300			if ret_pc then*/
    // SubProg returnf pc: 356 op: IF (20)
    if (_ret_pc_53292 == 0)
    {
        goto LD; // [356] 382
    }
    else{
    }
    // SubProg returnf pc: 359 op: STARTLINE (58)

    /** inline.e:301				inline_code[ret_pc][2] = length(inline_code) + 1*/
    // SubProg returnf pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 363 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53292 + ((s1_ptr)_2)->base);
    // SubProg returnf pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 370 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27271 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27271 = 1;
    }
    // SubProg returnf pc: 373 op: PLUS1 (93)
    _27272 = _27271 + 1;
    _27271 = NOVALUE;
    // SubProg returnf pc: 377 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27272;
    if( _1 != _27272 ){
        DeRef(_1);
    }
    _27272 = NOVALUE;
    _27269 = NOVALUE;
    // SubProg returnf pc: 381 op: NOP1 (159)
LD: // addr: 382 pc: 381 sub: 53254 op: 159
    // SubProg returnf pc: 382 op: STARTLINE (58)

    /** inline.e:303			return 1*/
    // SubProg returnf pc: 384 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var code_53291
    DeRef(_code_53291);

// block var ret_pc_53292

// Exiting block BLOCK: returnf

// block var pc_53256

// block var retsym_53258
    DeRef(_27253);
    _27253 = NOVALUE;
    DeRef(_27223);
    _27223 = NOVALUE;
    DeRef(_27256);
    _27256 = NOVALUE;
    DeRef(_27234);
    _27234 = NOVALUE;
    DeRef(_27237);
    _27237 = NOVALUE;
    DeRef(_27249);
    _27249 = NOVALUE;
    DeRef(_27261);
    _27261 = NOVALUE;
    DeRef(_27241);
    _27241 = NOVALUE;
    return 1;
    // SubProg returnf pc: 388 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53291

// block var ret_pc_53292
    // SubProg returnf pc: 390 op: ELSE (23)
    goto LE; // [390] 502
    // SubProg returnf pc: 392 op: NOP1 (159)
L7: // addr: 393 pc: 392 sub: 53254 op: 159
    // SubProg returnf pc: 393 op: STARTLINE (58)

    /** inline.e:306			sequence code = {ASSIGN, retsym, {INLINE_TARGET}}*/
    // SubProg returnf pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 397 op: RIGHT_BRACE_N (31)
    _0 = _code_53337;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    ((intptr_t*)_2)[2] = _retsym_53258;
    RefDS(_27252);
    ((intptr_t*)_2)[3] = _27252;
    _code_53337 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg returnf pc: 403 op: STARTLINE (58)

    /** inline.e:307			if pc != length( inline_code ) - ( 3 + TRANSLATE ) then*/
    // SubProg returnf pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 407 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27274 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27274 = 1;
    }
    // SubProg returnf pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 412 op: PLUS (11)
    _27275 = 3 + _5TRANSLATE_12097;
    // SubProg returnf pc: 416 op: MINUS (10)
    _27276 = _27274 - _27275;
    _27274 = NOVALUE;
    _27275 = NOVALUE;
    // SubProg returnf pc: 420 op: NOTEQ_IFW (105)
    if (_pc_53256 == _27276)
    goto LF; // [420] 441
    // SubProg returnf pc: 424 op: STARTLINE (58)

    /** inline.e:308				code &= { ELSE, {INLINE_ADDR, -1 }}*/
    // SubProg returnf pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 428 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27278 = MAKE_SEQ(_1);
    // SubProg returnf pc: 432 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27278;
    _27279 = MAKE_SEQ(_1);
    _27278 = NOVALUE;
    // SubProg returnf pc: 436 op: CONCAT (15)
    Concat((object_ptr)&_code_53337, _code_53337, _27279);
    DeRefDS(_27279);
    _27279 = NOVALUE;
    // SubProg returnf pc: 440 op: NOP1 (159)
LF: // addr: 441 pc: 440 sub: 53254 op: 159
    // SubProg returnf pc: 441 op: STARTLINE (58)

    /** inline.e:312			replace_code( code, pc, pc + 3 )*/
    // SubProg returnf pc: 443 op: PLUS (11)
    _27281 = _pc_53256 + 3;
    if ((object)((uintptr_t)_27281 + (uintptr_t)HIGH_BITS) >= 0){
        _27281 = NewDouble((eudouble)_27281);
    }
    // SubProg returnf pc: 447 op: PROC (27)
    RefDS(_code_53337);
    _66replace_code(_code_53337, _pc_53256, _27281);
    _27281 = NOVALUE;
    // SubProg returnf pc: 452 op: STARTLINE (58)

    /** inline.e:313			integer ret_pc = find( { INLINE_ADDR, -1 }, inline_code, pc )*/
    // SubProg returnf pc: 454 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = -1;
    _27282 = MAKE_SEQ(_1);
    // SubProg returnf pc: 458 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 460 op: FIND_FROM (176)
    _ret_pc_53351 = find_from(_27282, _66inline_code_52969, _pc_53256);
    DeRefDS(_27282);
    _27282 = NOVALUE;
    // SubProg returnf pc: 465 op: STARTLINE (58)

    /** inline.e:314			if ret_pc then*/
    // SubProg returnf pc: 467 op: IF (20)
    if (_ret_pc_53351 == 0)
    {
        goto L10; // [467] 493
    }
    else{
    }
    // SubProg returnf pc: 470 op: STARTLINE (58)

    /** inline.e:315				inline_code[ret_pc][2] = length(inline_code) + 1*/
    // SubProg returnf pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 474 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ret_pc_53351 + ((s1_ptr)_2)->base);
    // SubProg returnf pc: 479 op: GLOBAL_INIT_CHECK (109)
    // SubProg returnf pc: 481 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27286 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27286 = 1;
    }
    // SubProg returnf pc: 484 op: PLUS1 (93)
    _27287 = _27286 + 1;
    _27286 = NOVALUE;
    // SubProg returnf pc: 488 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27287;
    if( _1 != _27287 ){
        DeRef(_1);
    }
    _27287 = NOVALUE;
    _27284 = NOVALUE;
    // SubProg returnf pc: 492 op: NOP1 (159)
L10: // addr: 493 pc: 492 sub: 53254 op: 159
    // SubProg returnf pc: 493 op: STARTLINE (58)

    /** inline.e:317			return 1*/
    // SubProg returnf pc: 495 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var code_53337
    DeRef(_code_53337);

// block var ret_pc_53351

// Exiting block BLOCK: returnf

// block var pc_53256

// block var retsym_53258
    DeRef(_27253);
    _27253 = NOVALUE;
    DeRef(_27223);
    _27223 = NOVALUE;
    DeRef(_27276);
    _27276 = NOVALUE;
    DeRef(_27256);
    _27256 = NOVALUE;
    DeRef(_27234);
    _27234 = NOVALUE;
    DeRef(_27237);
    _27237 = NOVALUE;
    DeRef(_27249);
    _27249 = NOVALUE;
    DeRef(_27261);
    _27261 = NOVALUE;
    DeRef(_27241);
    _27241 = NOVALUE;
    return 1;
    // SubProg returnf pc: 499 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53337

// block var ret_pc_53351
    // SubProg returnf pc: 501 op: NOP1 (159)
LE: // addr: 502 pc: 501 sub: 53254 op: 159
    // SubProg returnf pc: 502 op: STARTLINE (58)

    /** inline.e:319		return 0*/
    // SubProg returnf pc: 504 op: RETURNF (28)

// Exiting block BLOCK: returnf

// block var pc_53256

// block var retsym_53258
    DeRef(_27253);
    _27253 = NOVALUE;
    DeRef(_27223);
    _27223 = NOVALUE;
    DeRef(_27276);
    _27276 = NOVALUE;
    DeRef(_27256);
    _27256 = NOVALUE;
    DeRef(_27234);
    _27234 = NOVALUE;
    DeRef(_27237);
    _27237 = NOVALUE;
    DeRef(_27249);
    _27249 = NOVALUE;
    DeRef(_27261);
    _27261 = NOVALUE;
    DeRef(_27241);
    _27241 = NOVALUE;
    return 0;
    // SubProg returnf pc: 508 op: BADRETURNF (43)
    ;
}


object _66inline_op(object _pc_53361)
{
    object _op_53362 = NOVALUE;
    object _code_53367 = NOVALUE;
    object _stlen_53400 = NOVALUE;
    object _file_53405 = NOVALUE;
    object _ok_53410 = NOVALUE;
    object _original_table_53433 = NOVALUE;
    object _jump_table_53437 = NOVALUE;
// skipping _27349  name type: 0
    object _27348 = NOVALUE; // 53476 27348
    object _27347 = NOVALUE; // 53474 27347
    object _27346 = NOVALUE; // 53473 27346
    object _27345 = NOVALUE; // 53472 27345
    object _27344 = NOVALUE; // 53471 27344
    object _27343 = NOVALUE; // 53470 27343
    object _27342 = NOVALUE; // 53467 27342
    object _27341 = NOVALUE; // 53466 27341
    object _27340 = NOVALUE; // 53465 27340
    object _27339 = NOVALUE; // 53464 27339
    object _27338 = NOVALUE; // 53463 27338
    object _27337 = NOVALUE; // 53458 27337
    object _27334 = NOVALUE; // 53452 27334
    object _27333 = NOVALUE; // 53451 27333
    object _27332 = NOVALUE; // 53450 27332
    object _27331 = NOVALUE; // 53448 27331
// skipping _27330  name type: 0
    object _27329 = NOVALUE; // 53444 27329
// skipping _27328  name type: 0
    object _27327 = NOVALUE; // 53441 27327
    object _27326 = NOVALUE; // 53440 27326
// skipping _27325  name type: 0
    object _27324 = NOVALUE; // 53434 27324
// skipping _27321  name type: 0
    object _27320 = NOVALUE; // 53422 27320
    object _27319 = NOVALUE; // 53420 27319
    object _27318 = NOVALUE; // 53417 27318
    object _27317 = NOVALUE; // 53415 27317
    object _27316 = NOVALUE; // 53414 27316
    object _27315 = NOVALUE; // 53412 27315
// skipping _27314  name type: 0
// skipping _27313  name type: 0
    object _27312 = NOVALUE; // 53408 27312
    object _27311 = NOVALUE; // 53406 27311
// skipping _27310  name type: 0
    object _27309 = NOVALUE; // 53403 27309
    object _27308 = NOVALUE; // 53401 27308
// skipping _27307  name type: 0
    object _27306 = NOVALUE; // 53396 27306
// skipping _27305  name type: 0
    object _27304 = NOVALUE; // 53392 27304
    object _27303 = NOVALUE; // 53390 27303
    object _27302 = NOVALUE; // 53389 27302
    object _27301 = NOVALUE; // 53387 27301
    object _27300 = NOVALUE; // 53386 27300
    object _27299 = NOVALUE; // 53385 27299
    object _27298 = NOVALUE; // 53381 27298
// skipping _27297  name type: 0
    object _27296 = NOVALUE; // 53377 27296
    object _27295 = NOVALUE; // 53376 27295
    object _27294 = NOVALUE; // 53375 27294
// skipping _27293  name type: 0
    object _27292 = NOVALUE; // 53372 27292
    object _27291 = NOVALUE; // 53370 27291
    object _27290 = NOVALUE; // 53369 27290
// skipping _27289  name type: 0
// skipping _27288  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg inline_op pc: 1 op: INTEGER_CHECK (96)
    // SubProg inline_op pc: 3 op: STARTLINE (58)

    /** inline.e:324		integer op = inline_code[pc]*/
    // SubProg inline_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _op_53362 = (object)*(((s1_ptr)_2)->base + _pc_53361);
    if (!IS_ATOM_INT(_op_53362))
    _op_53362 = (object)DBL_PTR(_op_53362)->dbl;
    // SubProg inline_op pc: 11 op: STARTLINE (58)

    /** inline.e:326		if op = RETURNP then*/
    // SubProg inline_op pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 15 op: EQUALS_IFW (104)
    if (_op_53362 != 29)
    goto L1; // [15] 150
    // SubProg inline_op pc: 19 op: STARTLINE (58)

    /** inline.e:333			sequence code = ""*/
    // SubProg inline_op pc: 21 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_code_53367);
    _code_53367 = _21958;
    // SubProg inline_op pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg inline_op pc: 26 op: STARTLINE (58)

    /** inline.e:335			if pc != length( inline_code ) - 1 - TRANSLATE then*/
    // SubProg inline_op pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27290 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27290 = 1;
    }
    // SubProg inline_op pc: 33 op: MINUS (10)
    _27291 = _27290 - 1;
    _27290 = NOVALUE;
    // SubProg inline_op pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 39 op: MINUS (10)
    _27292 = _27291 - _5TRANSLATE_12097;
    _27291 = NOVALUE;
    // SubProg inline_op pc: 43 op: NOTEQ_IFW (105)
    if (_pc_53361 == _27292)
    goto L2; // [43] 92
    // SubProg inline_op pc: 47 op: STARTLINE (58)

    /** inline.e:336				code = { ELSE, {INLINE_ADDR, length( inline_code ) + 1 }}*/
    // SubProg inline_op pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27294 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27294 = 1;
    }
    // SubProg inline_op pc: 56 op: PLUS1 (93)
    _27295 = _27294 + 1;
    _27294 = NOVALUE;
    // SubProg inline_op pc: 60 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = _27295;
    _27296 = MAKE_SEQ(_1);
    _27295 = NOVALUE;
    // SubProg inline_op pc: 64 op: RIGHT_BRACE_2 (85)
    DeRefDS(_code_53367);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 23;
    ((intptr_t *)_2)[2] = _27296;
    _code_53367 = MAKE_SEQ(_1);
    _27296 = NOVALUE;
    // SubProg inline_op pc: 68 op: STARTLINE (58)

    /** inline.e:337				if TRANSLATE then*/
    // SubProg inline_op pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 72 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L3; // [72] 134
    }
    else{
    }
    // SubProg inline_op pc: 75 op: STARTLINE (58)

    /** inline.e:338					inline_code[$] = NOP1*/
    // SubProg inline_op pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27298 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27298 = 1;
    }
    // SubProg inline_op pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 84 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27298);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg inline_op pc: 88 op: NOP1 (159)
    // SubProg inline_op pc: 89 op: ELSE (23)
    goto L3; // [89] 134
    // SubProg inline_op pc: 91 op: NOP1 (159)
L2: // addr: 92 pc: 91 sub: 53359 op: 159
    // SubProg inline_op pc: 92 op: STARTLINE (58)

    /** inline.e:341			elsif TRANSLATE and inline_code[$] = BADRETURNF then*/
    // SubProg inline_op pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 96 op: SC1_AND_IF (146)
    if (_5TRANSLATE_12097 == 0) {
        goto L4; // [96] 133
    }
    // SubProg inline_op pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 102 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27300 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27300 = 1;
    }
    // SubProg inline_op pc: 105 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27301 = (object)*(((s1_ptr)_2)->base + _27300);
    // SubProg inline_op pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 111 op: EQUALS (3)
    if (IS_ATOM_INT(_27301)) {
        _27302 = (_27301 == 43);
    }
    else {
        _27302 = binary_op(EQUALS, _27301, 43);
    }
    _27301 = NOVALUE;
    // SubProg inline_op pc: 115 op: NOP1 (159)
    // SubProg inline_op pc: 116 op: IF (20)
    if (_27302 == 0) {
        DeRef(_27302);
        _27302 = NOVALUE;
        goto L4; // [116] 133
    }
    else {
        if (!IS_ATOM_INT(_27302) && DBL_PTR(_27302)->dbl == 0.0){
            DeRef(_27302);
            _27302 = NOVALUE;
            goto L4; // [116] 133
        }
        DeRef(_27302);
        _27302 = NOVALUE;
    }
    DeRef(_27302);
    _27302 = NOVALUE;
    // SubProg inline_op pc: 119 op: STARTLINE (58)

    /** inline.e:342				inline_code[$] = NOP1*/
    // SubProg inline_op pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 123 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27303 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27303 = 1;
    }
    // SubProg inline_op pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 128 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27303);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 159;
    DeRef(_1);
    // SubProg inline_op pc: 132 op: NOP1 (159)
L4: // addr: 133 pc: 132 sub: 53359 op: 159
    // SubProg inline_op pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 53359 op: 159
    // SubProg inline_op pc: 134 op: STARTLINE (58)

    /** inline.e:344			replace_code( code, pc, pc + 2 )*/
    // SubProg inline_op pc: 136 op: PLUS (11)
    _27304 = _pc_53361 + 2;
    if ((object)((uintptr_t)_27304 + (uintptr_t)HIGH_BITS) >= 0){
        _27304 = NewDouble((eudouble)_27304);
    }
    // SubProg inline_op pc: 140 op: PROC (27)
    RefDS(_code_53367);
    _66replace_code(_code_53367, _pc_53361, _27304);
    _27304 = NOVALUE;
    // SubProg inline_op pc: 145 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var code_53367
    DeRefDS(_code_53367);
    _code_53367 = NOVALUE;
    // SubProg inline_op pc: 147 op: ELSE (23)
    goto L5; // [147] 526
    // SubProg inline_op pc: 149 op: NOP1 (159)
L1: // addr: 150 pc: 149 sub: 53359 op: 159
    // SubProg inline_op pc: 150 op: STARTLINE (58)

    /** inline.e:346		elsif op = RETURNF then*/
    // SubProg inline_op pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 154 op: EQUALS_IFW (104)
    if (_op_53362 != 28)
    goto L6; // [154] 171
    // SubProg inline_op pc: 158 op: STARTLINE (58)

    /** inline.e:347			return returnf( pc )*/
    // SubProg inline_op pc: 160 op: PROC (27)
    _27306 = _66returnf(_pc_53361);
    // SubProg inline_op pc: 164 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53361

// block var op_53362
    DeRef(_27292);
    _27292 = NOVALUE;
    return _27306;
    // SubProg inline_op pc: 168 op: ELSE (23)
    goto L5; // [168] 526
    // SubProg inline_op pc: 170 op: NOP1 (159)
L6: // addr: 171 pc: 170 sub: 53359 op: 159
    // SubProg inline_op pc: 171 op: STARTLINE (58)

    /** inline.e:349		elsif op = ROUTINE_ID then*/
    // SubProg inline_op pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 175 op: EQUALS_IFW (104)
    if (_op_53362 != 134)
    goto L7; // [175] 273
    // SubProg inline_op pc: 179 op: STARTLINE (58)

    /** inline.e:351			integer*/
    // SubProg inline_op pc: 181 op: STARTLINE (58)

    /** inline.e:352				stlen = inline_code[pc+2+TRANSLATE],*/
    // SubProg inline_op pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 185 op: PLUS (11)
    _27308 = _pc_53361 + 2;
    if ((object)((uintptr_t)_27308 + (uintptr_t)HIGH_BITS) >= 0){
        _27308 = NewDouble((eudouble)_27308);
    }
    // SubProg inline_op pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 191 op: PLUS (11)
    if (IS_ATOM_INT(_27308)) {
        _27309 = _27308 + _5TRANSLATE_12097;
    }
    else {
        _27309 = NewDouble(DBL_PTR(_27308)->dbl + (eudouble)_5TRANSLATE_12097);
    }
    DeRef(_27308);
    _27308 = NOVALUE;
    // SubProg inline_op pc: 195 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!IS_ATOM_INT(_27309)){
        _stlen_53400 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27309)->dbl));
    }
    else{
        _stlen_53400 = (object)*(((s1_ptr)_2)->base + _27309);
    }
    if (!IS_ATOM_INT(_stlen_53400))
    _stlen_53400 = (object)DBL_PTR(_stlen_53400)->dbl;
    // SubProg inline_op pc: 199 op: STARTLINE (58)

    /** inline.e:353				file  = inline_code[pc+4+TRANSLATE],*/
    // SubProg inline_op pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 203 op: PLUS (11)
    _27311 = _pc_53361 + 4;
    if ((object)((uintptr_t)_27311 + (uintptr_t)HIGH_BITS) >= 0){
        _27311 = NewDouble((eudouble)_27311);
    }
    // SubProg inline_op pc: 207 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 209 op: PLUS (11)
    if (IS_ATOM_INT(_27311)) {
        _27312 = _27311 + _5TRANSLATE_12097;
    }
    else {
        _27312 = NewDouble(DBL_PTR(_27311)->dbl + (eudouble)_5TRANSLATE_12097);
    }
    DeRef(_27311);
    _27311 = NOVALUE;
    // SubProg inline_op pc: 213 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!IS_ATOM_INT(_27312)){
        _file_53405 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27312)->dbl));
    }
    else{
        _file_53405 = (object)*(((s1_ptr)_2)->base + _27312);
    }
    if (!IS_ATOM_INT(_file_53405))
    _file_53405 = (object)DBL_PTR(_file_53405)->dbl;
    // SubProg inline_op pc: 217 op: STARTLINE (58)

    /** inline.e:354				ok    = adjust_il( pc, op )*/
    // SubProg inline_op pc: 219 op: PROC (27)
    _ok_53410 = _66adjust_il(_pc_53361, _op_53362);
    // SubProg inline_op pc: 224 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ok_53410)) {
        _1 = (object)(DBL_PTR(_ok_53410)->dbl);
        DeRefDS(_ok_53410);
        _ok_53410 = _1;
    }
    // SubProg inline_op pc: 226 op: STARTLINE (58)

    /** inline.e:355			inline_code[pc+2+TRANSLATE] = stlen*/
    // SubProg inline_op pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 230 op: PLUS (11)
    _27315 = _pc_53361 + 2;
    if ((object)((uintptr_t)_27315 + (uintptr_t)HIGH_BITS) >= 0){
        _27315 = NewDouble((eudouble)_27315);
    }
    // SubProg inline_op pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 236 op: PLUS (11)
    if (IS_ATOM_INT(_27315)) {
        _27316 = _27315 + _5TRANSLATE_12097;
    }
    else {
        _27316 = NewDouble(DBL_PTR(_27315)->dbl + (eudouble)_5TRANSLATE_12097);
    }
    DeRef(_27315);
    _27315 = NOVALUE;
    // SubProg inline_op pc: 240 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27316))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27316)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27316);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _stlen_53400;
    DeRef(_1);
    // SubProg inline_op pc: 244 op: STARTLINE (58)

    /** inline.e:356			inline_code[pc+4+TRANSLATE] = file*/
    // SubProg inline_op pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 248 op: PLUS (11)
    _27317 = _pc_53361 + 4;
    if ((object)((uintptr_t)_27317 + (uintptr_t)HIGH_BITS) >= 0){
        _27317 = NewDouble((eudouble)_27317);
    }
    // SubProg inline_op pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 254 op: PLUS (11)
    if (IS_ATOM_INT(_27317)) {
        _27318 = _27317 + _5TRANSLATE_12097;
    }
    else {
        _27318 = NewDouble(DBL_PTR(_27317)->dbl + (eudouble)_5TRANSLATE_12097);
    }
    DeRef(_27317);
    _27317 = NOVALUE;
    // SubProg inline_op pc: 258 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_27318))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_27318)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _27318);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _file_53405;
    DeRef(_1);
    // SubProg inline_op pc: 262 op: STARTLINE (58)

    /** inline.e:358			return ok*/
    // SubProg inline_op pc: 264 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var stlen_53400

// block var file_53405

// Exiting block BLOCK: inline_op

// block var pc_53361

// block var op_53362
    DeRef(_27316);
    _27316 = NOVALUE;
    DeRef(_27292);
    _27292 = NOVALUE;
    DeRef(_27318);
    _27318 = NOVALUE;
    DeRef(_27309);
    _27309 = NOVALUE;
    DeRef(_27306);
    _27306 = NOVALUE;
    DeRef(_27312);
    _27312 = NOVALUE;
    return _ok_53410;
    // SubProg inline_op pc: 268 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var stlen_53400

// block var file_53405

// block var ok_53410
    // SubProg inline_op pc: 270 op: ELSE (23)
    goto L5; // [270] 526
    // SubProg inline_op pc: 272 op: NOP1 (159)
L7: // addr: 273 pc: 272 sub: 53359 op: 159
    // SubProg inline_op pc: 273 op: STARTLINE (58)

    /** inline.e:360		elsif op_info[op][OP_SIZE_TYPE] = FIXED_SIZE then*/
    // SubProg inline_op pc: 275 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 277 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_65op_info_23893);
    _27319 = (object)*(((s1_ptr)_2)->base + _op_53362);
    // SubProg inline_op pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 283 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27319);
    _27320 = (object)*(((s1_ptr)_2)->base + 1);
    _27319 = NOVALUE;
    // SubProg inline_op pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_op pc: 289 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _27320, 1)){
        _27320 = NOVALUE;
        goto L8; // [289] 397
    }
    _27320 = NOVALUE;
    // SubProg inline_op pc: 293 op: STARTLINE (58)

    /** inline.e:361			switch op do*/
    // SubProg inline_op pc: 295 op: SWITCH_I (193)
    _0 = _op_53362;
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
        _27324 = _pc_53361 + 3;
        // SubProg inline_op pc: 318 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _original_table_53433 = (object)*(((s1_ptr)_2)->base + _27324);
        if (!IS_ATOM_INT(_original_table_53433)){
            _original_table_53433 = (object)DBL_PTR(_original_table_53433)->dbl;
        }
        // SubProg inline_op pc: 324 op: STARTLINE (58)

        /** inline.e:365					symtab_index jump_table = NewStringSym( {-2, length(SymTab) } )*/
        // SubProg inline_op pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 328 op: LENGTH (42)
        if (IS_SEQUENCE(_7SymTab_11389)){
                _27326 = SEQ_PTR(_7SymTab_11389)->length;
        }
        else {
            _27326 = 1;
        }
        // SubProg inline_op pc: 331 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = _27326;
        _27327 = MAKE_SEQ(_1);
        _27326 = NOVALUE;
        // SubProg inline_op pc: 335 op: PROC (27)
        _jump_table_53437 = _53NewStringSym(_27327);
        _27327 = NOVALUE;
        // SubProg inline_op pc: 339 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_jump_table_53437)) {
            _1 = (object)(DBL_PTR(_jump_table_53437)->dbl);
            DeRefDS(_jump_table_53437);
            _jump_table_53437 = _1;
        }
        // SubProg inline_op pc: 341 op: STARTLINE (58)

        /** inline.e:366					SymTab[jump_table][S_OBJ] = SymTab[original_table][S_OBJ]*/
        // SubProg inline_op pc: 343 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 345 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_jump_table_53437 + ((s1_ptr)_2)->base);
        // SubProg inline_op pc: 350 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 352 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 354 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27331 = (object)*(((s1_ptr)_2)->base + _original_table_53433);
        // SubProg inline_op pc: 358 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 360 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27331);
        _27332 = (object)*(((s1_ptr)_2)->base + 1);
        _27331 = NOVALUE;
        // SubProg inline_op pc: 364 op: PASSIGN_SUBS (162)
        Ref(_27332);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27332;
        if( _1 != _27332 ){
            DeRef(_1);
        }
        _27332 = NOVALUE;
        _27329 = NOVALUE;
        // SubProg inline_op pc: 368 op: STARTLINE (58)

        /** inline.e:367					inline_code[pc+3] = jump_table*/
        // SubProg inline_op pc: 370 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 372 op: PLUS (11)
        _27333 = _pc_53361 + 3;
        // SubProg inline_op pc: 376 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52969 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27333);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _jump_table_53437;
        DeRef(_1);
        // SubProg inline_op pc: 380 op: NOPSWITCH (187)
    ;}    // SubProg inline_op pc: 381 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var original_table_53433

// block var jump_table_53437
    // SubProg inline_op pc: 383 op: STARTLINE (58)

    /** inline.e:369			return adjust_il( pc, op )*/
    // SubProg inline_op pc: 385 op: PROC (27)
    _27334 = _66adjust_il(_pc_53361, _op_53362);
    // SubProg inline_op pc: 390 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53361

// block var op_53362
    DeRef(_27316);
    _27316 = NOVALUE;
    DeRef(_27292);
    _27292 = NOVALUE;
    DeRef(_27318);
    _27318 = NOVALUE;
    DeRef(_27309);
    _27309 = NOVALUE;
    DeRef(_27333);
    _27333 = NOVALUE;
    DeRef(_27306);
    _27306 = NOVALUE;
    DeRef(_27324);
    _27324 = NOVALUE;
    DeRef(_27312);
    _27312 = NOVALUE;
    return _27334;
    // SubProg inline_op pc: 394 op: ELSE (23)
    goto L5; // [394] 526
    // SubProg inline_op pc: 396 op: NOP1 (159)
L8: // addr: 397 pc: 396 sub: 53359 op: 159
    // SubProg inline_op pc: 397 op: STARTLINE (58)

    /** inline.e:372			switch op with fallthru do*/
    // SubProg inline_op pc: 399 op: SWITCH_I (193)
    _0 = _op_53362;
    switch ( _0 ){ 
        // SubProg inline_op pc: 404 op: STARTLINE (58)

        /** inline.e:373				case REF_TEMP then*/
        // SubProg inline_op pc: 406 op: CASE (186)
        case 207:
        // SubProg inline_op pc: 408 op: STARTLINE (58)

        /** inline.e:374					inline_code[pc+1] = {INLINE_TARGET}*/
        // SubProg inline_op pc: 410 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 412 op: PLUS1 (93)
        _27337 = _pc_53361 + 1;
        // SubProg inline_op pc: 416 op: ASSIGN_SUBS (16)
        RefDS(_27252);
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66inline_code_52969 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _27337);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27252;
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
        _27338 = _pc_53361 + 2;
        if ((object)((uintptr_t)_27338 + (uintptr_t)HIGH_BITS) >= 0){
            _27338 = NewDouble((eudouble)_27338);
        }
        // SubProg inline_op pc: 432 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 434 op: PLUS1 (93)
        _27339 = _pc_53361 + 1;
        // SubProg inline_op pc: 438 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27340 = (object)*(((s1_ptr)_2)->base + _27339);
        // SubProg inline_op pc: 442 op: PLUS (11)
        if (IS_ATOM_INT(_27338) && IS_ATOM_INT(_27340)) {
            _27341 = _27338 + _27340;
            if ((object)((uintptr_t)_27341 + (uintptr_t)HIGH_BITS) >= 0){
                _27341 = NewDouble((eudouble)_27341);
            }
        }
        else {
            _27341 = binary_op(PLUS, _27338, _27340);
        }
        DeRef(_27338);
        _27338 = NOVALUE;
        _27340 = NOVALUE;
        // SubProg inline_op pc: 446 op: PROC (27)
        _27342 = _66check_for_param(_27341);
        _27341 = NOVALUE;
        // SubProg inline_op pc: 450 op: IF (20)
        if (_27342 == 0) {
            DeRef(_27342);
            _27342 = NOVALUE;
            goto L9; // [450] 454
        }
        else {
            if (!IS_ATOM_INT(_27342) && DBL_PTR(_27342)->dbl == 0.0){
                DeRef(_27342);
                _27342 = NOVALUE;
                goto L9; // [450] 454
            }
            DeRef(_27342);
            _27342 = NOVALUE;
        }
        DeRef(_27342);
        _27342 = NOVALUE;
        // SubProg inline_op pc: 453 op: NOP1 (159)
L9: // addr: 454 pc: 453 sub: 53359 op: 159
        // SubProg inline_op pc: 454 op: STARTLINE (58)

        /** inline.e:383					for i = pc + 2 to pc + 2 + inline_code[pc+1] do*/
        // SubProg inline_op pc: 456 op: PLUS (11)
        _27343 = _pc_53361 + 2;
        if ((object)((uintptr_t)_27343 + (uintptr_t)HIGH_BITS) >= 0){
            _27343 = NewDouble((eudouble)_27343);
        }
        // SubProg inline_op pc: 460 op: PLUS (11)
        _27344 = _pc_53361 + 2;
        if ((object)((uintptr_t)_27344 + (uintptr_t)HIGH_BITS) >= 0){
            _27344 = NewDouble((eudouble)_27344);
        }
        // SubProg inline_op pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_op pc: 466 op: PLUS1 (93)
        _27345 = _pc_53361 + 1;
        // SubProg inline_op pc: 470 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27346 = (object)*(((s1_ptr)_2)->base + _27345);
        // SubProg inline_op pc: 474 op: PLUS (11)
        if (IS_ATOM_INT(_27344) && IS_ATOM_INT(_27346)) {
            _27347 = _27344 + _27346;
            if ((object)((uintptr_t)_27347 + (uintptr_t)HIGH_BITS) >= 0){
                _27347 = NewDouble((eudouble)_27347);
            }
        }
        else {
            _27347 = binary_op(PLUS, _27344, _27346);
        }
        DeRef(_27344);
        _27344 = NOVALUE;
        _27346 = NOVALUE;
        // SubProg inline_op pc: 478 op: FOR (21)
        {
            object _i_53469;
            Ref(_27343);
            _i_53469 = _27343;
LA: // addr: 485 pc: 478 sub: 53359 op: 21
            if (binary_op_a(GREATER, _i_53469, _27347)){
                goto LB; // [478] 508
            }
            // SubProg inline_op pc: 485 op: STARTLINE (58)

            /** inline.e:384						if not adjust_symbol( i ) then*/
            // SubProg inline_op pc: 487 op: PROC (27)
            Ref(_i_53469);
            _27348 = _66adjust_symbol(_i_53469);
            // SubProg inline_op pc: 491 op: NOT_IFW (108)
            if (IS_ATOM_INT(_27348)) {
                if (_27348 != 0){
                    DeRef(_27348);
                    _27348 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            else {
                if (DBL_PTR(_27348)->dbl != 0.0){
                    DeRef(_27348);
                    _27348 = NOVALUE;
                    goto LC; // [491] 501
                }
            }
            DeRef(_27348);
            _27348 = NOVALUE;
            // SubProg inline_op pc: 494 op: STARTLINE (58)

            /** inline.e:385							return 0*/
            // SubProg inline_op pc: 496 op: RETURNF (28)
            DeRef(_i_53469);

// Exiting block BLOCK: inline_op

// block var pc_53361

// block var op_53362
            DeRef(_27347);
            _27347 = NOVALUE;
            DeRef(_27345);
            _27345 = NOVALUE;
            DeRef(_27316);
            _27316 = NOVALUE;
            DeRef(_27292);
            _27292 = NOVALUE;
            DeRef(_27334);
            _27334 = NOVALUE;
            DeRef(_27337);
            _27337 = NOVALUE;
            DeRef(_27318);
            _27318 = NOVALUE;
            DeRef(_27309);
            _27309 = NOVALUE;
            DeRef(_27339);
            _27339 = NOVALUE;
            DeRef(_27333);
            _27333 = NOVALUE;
            DeRef(_27306);
            _27306 = NOVALUE;
            DeRef(_27324);
            _27324 = NOVALUE;
            DeRef(_27343);
            _27343 = NOVALUE;
            DeRef(_27312);
            _27312 = NOVALUE;
            return 0;
            // SubProg inline_op pc: 500 op: NOP1 (159)
LC: // addr: 501 pc: 500 sub: 53359 op: 159
            // SubProg inline_op pc: 501 op: STARTLINE (58)

            /** inline.e:388					end for*/
            // SubProg inline_op pc: 503 op: ENDFOR_INT_UP1 (54)
            _0 = _i_53469;
            if (IS_ATOM_INT(_i_53469)) {
                _i_53469 = _i_53469 + 1;
                if ((object)((uintptr_t)_i_53469 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53469 = NewDouble((eudouble)_i_53469);
                }
            }
            else {
                _i_53469 = binary_op_a(PLUS, _i_53469, 1);
            }
            DeRef(_0);
            goto LA; // [503] 485
LB: // addr: 508 pc: 503 sub: 53359 op: 54
            ;
            DeRef(_i_53469);
        }
        // SubProg inline_op pc: 508 op: STARTLINE (58)

        /** inline.e:389					return 1*/
        // SubProg inline_op pc: 510 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53361

// block var op_53362
        DeRef(_27347);
        _27347 = NOVALUE;
        DeRef(_27345);
        _27345 = NOVALUE;
        DeRef(_27316);
        _27316 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        DeRef(_27334);
        _27334 = NOVALUE;
        DeRef(_27337);
        _27337 = NOVALUE;
        DeRef(_27318);
        _27318 = NOVALUE;
        DeRef(_27309);
        _27309 = NOVALUE;
        DeRef(_27339);
        _27339 = NOVALUE;
        DeRef(_27333);
        _27333 = NOVALUE;
        DeRef(_27306);
        _27306 = NOVALUE;
        DeRef(_27324);
        _27324 = NOVALUE;
        DeRef(_27343);
        _27343 = NOVALUE;
        DeRef(_27312);
        _27312 = NOVALUE;
        return 1;
        // SubProg inline_op pc: 514 op: STARTLINE (58)

        /** inline.e:390				case else*/
        // SubProg inline_op pc: 516 op: CASE (186)
        default:
        // SubProg inline_op pc: 518 op: STARTLINE (58)

        /** inline.e:391					return 0*/
        // SubProg inline_op pc: 520 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53361

// block var op_53362
        DeRef(_27347);
        _27347 = NOVALUE;
        DeRef(_27345);
        _27345 = NOVALUE;
        DeRef(_27316);
        _27316 = NOVALUE;
        DeRef(_27292);
        _27292 = NOVALUE;
        DeRef(_27334);
        _27334 = NOVALUE;
        DeRef(_27337);
        _27337 = NOVALUE;
        DeRef(_27318);
        _27318 = NOVALUE;
        DeRef(_27309);
        _27309 = NOVALUE;
        DeRef(_27339);
        _27339 = NOVALUE;
        DeRef(_27333);
        _27333 = NOVALUE;
        DeRef(_27306);
        _27306 = NOVALUE;
        DeRef(_27324);
        _27324 = NOVALUE;
        DeRef(_27343);
        _27343 = NOVALUE;
        DeRef(_27312);
        _27312 = NOVALUE;
        return 0;
        // SubProg inline_op pc: 524 op: NOPSWITCH (187)
    ;}    // SubProg inline_op pc: 525 op: NOP1 (159)
L5: // addr: 526 pc: 525 sub: 53359 op: 159
    // SubProg inline_op pc: 526 op: STARTLINE (58)

    /** inline.e:394		return 1*/
    // SubProg inline_op pc: 528 op: RETURNF (28)

// Exiting block BLOCK: inline_op

// block var pc_53361

// block var op_53362
    DeRef(_27347);
    _27347 = NOVALUE;
    DeRef(_27345);
    _27345 = NOVALUE;
    DeRef(_27316);
    _27316 = NOVALUE;
    DeRef(_27292);
    _27292 = NOVALUE;
    DeRef(_27334);
    _27334 = NOVALUE;
    DeRef(_27337);
    _27337 = NOVALUE;
    DeRef(_27318);
    _27318 = NOVALUE;
    DeRef(_27309);
    _27309 = NOVALUE;
    DeRef(_27339);
    _27339 = NOVALUE;
    DeRef(_27333);
    _27333 = NOVALUE;
    DeRef(_27306);
    _27306 = NOVALUE;
    DeRef(_27324);
    _27324 = NOVALUE;
    DeRef(_27343);
    _27343 = NOVALUE;
    DeRef(_27312);
    _27312 = NOVALUE;
    return 1;
    // SubProg inline_op pc: 532 op: BADRETURNF (43)
    ;
}


void _66restore_code()
{
    object _27350 = NOVALUE; // 53483 27350
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg restore_code pc: 1 op: STARTLINE (58)

    /** inline.e:399		if length( temp_code ) then*/
    // SubProg restore_code pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg restore_code pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_66temp_code_53479)){
            _27350 = SEQ_PTR(_66temp_code_53479)->length;
    }
    else {
        _27350 = 1;
    }
    // SubProg restore_code pc: 8 op: IF (20)
    if (_27350 == 0)
    {
        _27350 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _27350 = NOVALUE;
    }
    // SubProg restore_code pc: 11 op: STARTLINE (58)

    /** inline.e:400			Code = temp_code*/
    // SubProg restore_code pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg restore_code pc: 15 op: ASSIGN (18)
    RefDS(_66temp_code_53479);
    DeRef(_5Code_12566);
    _5Code_12566 = _66temp_code_53479;
    // SubProg restore_code pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg restore_code pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 53480 op: 159
    // SubProg restore_code pc: 21 op: STARTLINE (58)

    /** inline.e:402	end procedure*/
    // SubProg restore_code pc: 23 op: RETURNP (29)

// Exiting block BLOCK: restore_code
    return;
    // SubProg restore_code pc: 26 op: BADRETURNF (43)
    ;
}


void _66check_inline(object _sub_53488)
{
    object _pc_53517 = NOVALUE;
    object _s_53519 = NOVALUE;
    object _backpatch_op_53557 = NOVALUE;
    object _op_53561 = NOVALUE;
    object _rtn_idx_53572 = NOVALUE;
    object _args_53577 = NOVALUE;
    object _args_53609 = NOVALUE;
    object _values_53638 = NOVALUE;
    object _27437 = NOVALUE; // 53663 27437
    object _27436 = NOVALUE; // 53662 27436
// skipping _27435  name type: 0
    object _27434 = NOVALUE; // 53658 27434
// skipping _27433  name type: 0
// skipping _27432  name type: 0
    object _27431 = NOVALUE; // 53654 27431
// skipping _27430  name type: 0
    object _27429 = NOVALUE; // 53650 27429
    object _27428 = NOVALUE; // 53649 27428
    object _27427 = NOVALUE; // 53647 27427
// skipping _27426  name type: 0
    object _27425 = NOVALUE; // 53642 27425
    object _27424 = NOVALUE; // 53641 27424
    object _27423 = NOVALUE; // 53640 27423
    object _27422 = NOVALUE; // 53635 27422
    object _27421 = NOVALUE; // 53632 27421
    object _27420 = NOVALUE; // 53631 27420
    object _27419 = NOVALUE; // 53630 27419
    object _27418 = NOVALUE; // 53629 27418
    object _27417 = NOVALUE; // 53628 27417
    object _27415 = NOVALUE; // 53623 27415
    object _27414 = NOVALUE; // 53622 27414
    object _27413 = NOVALUE; // 53621 27413
    object _27412 = NOVALUE; // 53619 27412
    object _27411 = NOVALUE; // 53618 27411
// skipping _27410  name type: 0
    object _27409 = NOVALUE; // 53614 27409
    object _27408 = NOVALUE; // 53613 27408
    object _27407 = NOVALUE; // 53612 27407
    object _27406 = NOVALUE; // 53611 27406
    object _27405 = NOVALUE; // 53610 27405
// skipping _27404  name type: 0
    object _27403 = NOVALUE; // 53605 27403
    object _27402 = NOVALUE; // 53604 27402
    object _27401 = NOVALUE; // 53602 27401
    object _27400 = NOVALUE; // 53601 27400
    object _27399 = NOVALUE; // 53599 27399
    object _27398 = NOVALUE; // 53597 27398
    object _27397 = NOVALUE; // 53595 27397
    object _27396 = NOVALUE; // 53592 27396
    object _27395 = NOVALUE; // 53591 27395
    object _27394 = NOVALUE; // 53590 27394
    object _27393 = NOVALUE; // 53589 27393
    object _27392 = NOVALUE; // 53588 27392
    object _27391 = NOVALUE; // 53586 27391
    object _27390 = NOVALUE; // 53584 27390
// skipping _27389  name type: 0
    object _27388 = NOVALUE; // 53579 27388
// skipping _27387  name type: 0
// skipping _27386  name type: 0
    object _27385 = NOVALUE; // 53573 27385
// skipping _27382  name type: 0
// skipping _27381  name type: 0
    object _27380 = NOVALUE; // 53559 27380
// skipping _27379  name type: 0
    object _27378 = NOVALUE; // 53554 27378
// skipping _27377  name type: 0
// skipping _27376  name type: 0
    object _27375 = NOVALUE; // 53549 27375
    object _27374 = NOVALUE; // 53546 27374
    object _27373 = NOVALUE; // 53544 27373
    object _27372 = NOVALUE; // 53542 27372
    object _27371 = NOVALUE; // 53541 27371
    object _27370 = NOVALUE; // 53539 27370
    object _27369 = NOVALUE; // 53537 27369
    object _27368 = NOVALUE; // 53536 27368
// skipping _27367  name type: 0
    object _27366 = NOVALUE; // 53532 27366
// skipping _27365  name type: 0
    object _27364 = NOVALUE; // 53529 27364
    object _27363 = NOVALUE; // 53527 27363
// skipping _27362  name type: 0
    object _27361 = NOVALUE; // 53521 27361
// skipping _27360  name type: 0
    object _27359 = NOVALUE; // 53513 27359
// skipping _27358  name type: 0
    object _27357 = NOVALUE; // 53506 27357
// skipping _27356  name type: 0
    object _27355 = NOVALUE; // 53500 27355
    object _27354 = NOVALUE; // 53497 27354
    object _27353 = NOVALUE; // 53495 27353
    object _27352 = NOVALUE; // 53493 27352
// skipping _27351  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg check_inline pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_inline pc: 3 op: STARTLINE (58)

    /** inline.e:411		if OpTrace or SymTab[sub][S_TOKEN] = TYPE then*/
    // SubProg check_inline pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 7 op: SC1_OR_IF (147)
    if (_5OpTrace_12547 != 0) {
        goto L1; // [7] 34
    }
    // SubProg check_inline pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27352 = (object)*(((s1_ptr)_2)->base + _sub_53488);
    // SubProg check_inline pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27352);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _27353 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _27353 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _27352 = NOVALUE;
    // SubProg check_inline pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 25 op: EQUALS (3)
    if (IS_ATOM_INT(_27353)) {
        _27354 = (_27353 == 504);
    }
    else {
        _27354 = binary_op(EQUALS, _27353, 504);
    }
    _27353 = NOVALUE;
    // SubProg check_inline pc: 29 op: NOP1 (159)
    // SubProg check_inline pc: 30 op: IF (20)
    if (_27354 == 0) {
        DeRef(_27354);
        _27354 = NOVALUE;
        goto L2; // [30] 40
    }
    else {
        if (!IS_ATOM_INT(_27354) && DBL_PTR(_27354)->dbl == 0.0){
            DeRef(_27354);
            _27354 = NOVALUE;
            goto L2; // [30] 40
        }
        DeRef(_27354);
        _27354 = NOVALUE;
    }
    DeRef(_27354);
    _27354 = NOVALUE;
    // SubProg check_inline pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53485 op: 159
    // SubProg check_inline pc: 34 op: STARTLINE (58)

    /** inline.e:412			return*/
    // SubProg check_inline pc: 36 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
    DeRefi(_backpatch_op_53557);
    return;
    // SubProg check_inline pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 53485 op: 159
    // SubProg check_inline pc: 40 op: STARTLINE (58)

    /** inline.e:414		inline_sub      = sub*/
    // SubProg check_inline pc: 42 op: ASSIGN (18)
    _66inline_sub_52983 = _sub_53488;
    // SubProg check_inline pc: 45 op: INTEGER_CHECK (96)
    // SubProg check_inline pc: 47 op: STARTLINE (58)

    /** inline.e:415		if get_fwdref_count() then*/
    // SubProg check_inline pc: 49 op: PROC (27)
    _27355 = _30get_fwdref_count();
    // SubProg check_inline pc: 52 op: IF (20)
    if (_27355 == 0) {
        DeRef(_27355);
        _27355 = NOVALUE;
        goto L3; // [52] 65
    }
    else {
        if (!IS_ATOM_INT(_27355) && DBL_PTR(_27355)->dbl == 0.0){
            DeRef(_27355);
            _27355 = NOVALUE;
            goto L3; // [52] 65
        }
        DeRef(_27355);
        _27355 = NOVALUE;
    }
    DeRef(_27355);
    _27355 = NOVALUE;
    // SubProg check_inline pc: 55 op: STARTLINE (58)

    /** inline.e:416			defer()*/
    // SubProg check_inline pc: 57 op: PROC (27)
    _66defer();
    // SubProg check_inline pc: 59 op: STARTLINE (58)

    /** inline.e:417			return*/
    // SubProg check_inline pc: 61 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
    DeRefi(_backpatch_op_53557);
    return;
    // SubProg check_inline pc: 64 op: NOP1 (159)
L3: // addr: 65 pc: 64 sub: 53485 op: 159
    // SubProg check_inline pc: 65 op: STARTLINE (58)

    /** inline.e:419		temp_code = ""*/
    // SubProg check_inline pc: 67 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_66temp_code_53479);
    _66temp_code_53479 = _21958;
    // SubProg check_inline pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 72 op: STARTLINE (58)

    /** inline.e:420		if sub != CurrentSub then*/
    // SubProg check_inline pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 76 op: NOTEQ_IFW (105)
    if (_sub_53488 == _5CurrentSub_12485)
    goto L4; // [76] 99
    // SubProg check_inline pc: 80 op: STARTLINE (58)

    /** inline.e:421			Code = SymTab[sub][S_CODE]*/
    // SubProg check_inline pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27357 = (object)*(((s1_ptr)_2)->base + _sub_53488);
    // SubProg check_inline pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 90 op: RHS_SUBS_CHECK (92)
    DeRef(_5Code_12566);
    _2 = (object)SEQ_PTR(_27357);
    if (!IS_ATOM_INT(_5S_CODE_12144)){
        _5Code_12566 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    }
    else{
        _5Code_12566 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
    }
    Ref(_5Code_12566);
    _27357 = NOVALUE;
    // SubProg check_inline pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 96 op: ELSE (23)
    goto L5; // [96] 109
    // SubProg check_inline pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 53485 op: 159
    // SubProg check_inline pc: 99 op: STARTLINE (58)

    /** inline.e:423			temp_code = Code*/
    // SubProg check_inline pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 103 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRef(_66temp_code_53479);
    _66temp_code_53479 = _5Code_12566;
    // SubProg check_inline pc: 106 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 108 op: NOP1 (159)
L5: // addr: 109 pc: 108 sub: 53485 op: 159
    // SubProg check_inline pc: 109 op: STARTLINE (58)

    /** inline.e:426		if length(Code) > OpInline then*/
    // SubProg check_inline pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_5Code_12566)){
            _27359 = SEQ_PTR(_5Code_12566)->length;
    }
    else {
        _27359 = 1;
    }
    // SubProg check_inline pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 118 op: GREATER_IFW (107)
    if (_27359 <= _5OpInline_12552)
    goto L6; // [118] 128
    // SubProg check_inline pc: 122 op: STARTLINE (58)

    /** inline.e:427			return*/
    // SubProg check_inline pc: 124 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
    DeRefi(_backpatch_op_53557);
    return;
    // SubProg check_inline pc: 127 op: NOP1 (159)
L6: // addr: 128 pc: 127 sub: 53485 op: 159
    // SubProg check_inline pc: 128 op: STARTLINE (58)

    /** inline.e:430		inline_code     = Code*/
    // SubProg check_inline pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 132 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRef(_66inline_code_52969);
    _66inline_code_52969 = _5Code_12566;
    // SubProg check_inline pc: 135 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 137 op: STARTLINE (58)

    /** inline.e:431		return_gotos    = 0*/
    // SubProg check_inline pc: 139 op: ASSIGN_I (113)
    _66return_gotos_52978 = 0;
    // SubProg check_inline pc: 142 op: STARTLINE (58)

    /** inline.e:432		prev_pc         = 1*/
    // SubProg check_inline pc: 144 op: ASSIGN_I (113)
    _66prev_pc_52977 = 1;
    // SubProg check_inline pc: 147 op: STARTLINE (58)

    /** inline.e:433		proc_vars       = {}*/
    // SubProg check_inline pc: 149 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_66proc_vars_52970);
    _66proc_vars_52970 = _21958;
    // SubProg check_inline pc: 152 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 154 op: STARTLINE (58)

    /** inline.e:434		inline_temps    = {}*/
    // SubProg check_inline pc: 156 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_66inline_temps_52971);
    _66inline_temps_52971 = _21958;
    // SubProg check_inline pc: 159 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 161 op: STARTLINE (58)

    /** inline.e:435		inline_params   = {}*/
    // SubProg check_inline pc: 163 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_66inline_params_52974);
    _66inline_params_52974 = _21958;
    // SubProg check_inline pc: 166 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 168 op: STARTLINE (58)

    /** inline.e:436		assigned_params = {}*/
    // SubProg check_inline pc: 170 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_66assigned_params_52975);
    _66assigned_params_52975 = _21958;
    // SubProg check_inline pc: 173 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 175 op: STARTLINE (58)

    /** inline.e:438		integer pc = 1*/
    // SubProg check_inline pc: 177 op: ASSIGN_I (113)
    _pc_53517 = 1;
    // SubProg check_inline pc: 180 op: STARTLINE (58)

    /** inline.e:439		symtab_index s = SymTab[sub][S_NEXT]*/
    // SubProg check_inline pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 184 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27361 = (object)*(((s1_ptr)_2)->base + _sub_53488);
    // SubProg check_inline pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 190 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27361);
    _s_53519 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53519)){
        _s_53519 = (object)DBL_PTR(_s_53519)->dbl;
    }
    _27361 = NOVALUE;
    // SubProg check_inline pc: 196 op: STARTLINE (58)

    /** inline.e:440		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    // SubProg check_inline pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 200 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27363 = (object)*(((s1_ptr)_2)->base + _sub_53488);
    // SubProg check_inline pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 206 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27363);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _27364 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _27364 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _27363 = NOVALUE;
    // SubProg check_inline pc: 210 op: FOR (21)
    {
        object _p_53525;
        _p_53525 = 1;
L7: // addr: 217 pc: 210 sub: 53485 op: 21
        if (binary_op_a(GREATER, _p_53525, _27364)){
            goto L8; // [210] 248
        }
        // SubProg check_inline pc: 217 op: STARTLINE (58)

        /** inline.e:441			inline_params &= s*/
        // SubProg check_inline pc: 219 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 221 op: CONCAT (15)
        Append(&_66inline_params_52974, _66inline_params_52974, _s_53519);
        // SubProg check_inline pc: 225 op: STARTLINE (58)

        /** inline.e:442			s = SymTab[s][S_NEXT]*/
        // SubProg check_inline pc: 227 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 229 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27366 = (object)*(((s1_ptr)_2)->base + _s_53519);
        // SubProg check_inline pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 235 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27366);
        _s_53519 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53519)){
            _s_53519 = (object)DBL_PTR(_s_53519)->dbl;
        }
        _27366 = NOVALUE;
        // SubProg check_inline pc: 241 op: STARTLINE (58)

        /** inline.e:443		end for*/
        // SubProg check_inline pc: 243 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53525;
        if (IS_ATOM_INT(_p_53525)) {
            _p_53525 = _p_53525 + 1;
            if ((object)((uintptr_t)_p_53525 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53525 = NewDouble((eudouble)_p_53525);
            }
        }
        else {
            _p_53525 = binary_op_a(PLUS, _p_53525, 1);
        }
        DeRef(_0);
        goto L7; // [243] 217
L8: // addr: 248 pc: 243 sub: 53485 op: 54
        ;
        DeRef(_p_53525);
    }
    // SubProg check_inline pc: 248 op: STARTLINE (58)

    /** inline.e:445		while s != 0 and */
    // SubProg check_inline pc: 250 op: NOP2 (110)
    // SubProg check_inline pc: 252 op: NOPWHILE (158)
L9: // addr: 253 pc: 252 sub: 53485 op: 158
    // SubProg check_inline pc: 253 op: NOTEQ (4)
    _27368 = (_s_53519 != 0);
    // SubProg check_inline pc: 257 op: SC1_AND_IF (146)
    if (_27368 == 0) {
        goto LA; // [257] 335
    }
    // SubProg check_inline pc: 261 op: PROC (27)
    _27370 = _53sym_scope(_s_53519);
    // SubProg check_inline pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 267 op: LESSEQ (5)
    if (IS_ATOM_INT(_27370)) {
        _27371 = (_27370 <= 3);
    }
    else {
        _27371 = binary_op(LESSEQ, _27370, 3);
    }
    DeRef(_27370);
    _27370 = NOVALUE;
    // SubProg check_inline pc: 271 op: SC1_OR (143)
    if (IS_ATOM_INT(_27371)) {
        if (_27371 != 0) {
            DeRef(_27372);
            _27372 = 1;
            goto LB; // [271] 289
        }
    }
    else {
        if (DBL_PTR(_27371)->dbl != 0.0) {
            DeRef(_27372);
            _27372 = 1;
            goto LB; // [271] 289
        }
    }
    // SubProg check_inline pc: 275 op: PROC (27)
    _27373 = _53sym_scope(_s_53519);
    // SubProg check_inline pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 281 op: EQUALS (3)
    if (IS_ATOM_INT(_27373)) {
        _27374 = (_27373 == 9);
    }
    else {
        _27374 = binary_op(EQUALS, _27373, 9);
    }
    DeRef(_27373);
    _27373 = NOVALUE;
    // SubProg check_inline pc: 285 op: SC2_OR (144)
    DeRef(_27372);
    if (IS_ATOM_INT(_27374))
    _27372 = (_27374 != 0);
    else
    _27372 = DBL_PTR(_27374)->dbl != 0.0;
    // SubProg check_inline pc: 288 op: NOP1 (159)
LB: // addr: 289 pc: 288 sub: 53485 op: 159
    // SubProg check_inline pc: 289 op: NOP1 (159)
    // SubProg check_inline pc: 290 op: WHILE (47)
    if (_27372 == 0)
    {
        _27372 = NOVALUE;
        goto LA; // [290] 335
    }
    else{
        _27372 = NOVALUE;
    }
    // SubProg check_inline pc: 293 op: STARTLINE (58)

    /** inline.e:447			if sym_scope( s ) != SC_UNDEFINED then*/
    // SubProg check_inline pc: 295 op: PROC (27)
    _27375 = _53sym_scope(_s_53519);
    // SubProg check_inline pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 301 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _27375, 9)){
        DeRef(_27375);
        _27375 = NOVALUE;
        goto LC; // [301] 314
    }
    DeRef(_27375);
    _27375 = NOVALUE;
    // SubProg check_inline pc: 305 op: STARTLINE (58)

    /** inline.e:448				proc_vars &= s*/
    // SubProg check_inline pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 309 op: CONCAT (15)
    Append(&_66proc_vars_52970, _66proc_vars_52970, _s_53519);
    // SubProg check_inline pc: 313 op: NOP1 (159)
LC: // addr: 314 pc: 313 sub: 53485 op: 159
    // SubProg check_inline pc: 314 op: STARTLINE (58)

    /** inline.e:451			s = SymTab[s][S_NEXT]*/
    // SubProg check_inline pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 318 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27378 = (object)*(((s1_ptr)_2)->base + _s_53519);
    // SubProg check_inline pc: 322 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 324 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27378);
    _s_53519 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53519)){
        _s_53519 = (object)DBL_PTR(_s_53519)->dbl;
    }
    _27378 = NOVALUE;
    // SubProg check_inline pc: 330 op: STARTLINE (58)

    /** inline.e:452		end while*/
    // SubProg check_inline pc: 332 op: ENDWHILE (22)
    goto L9; // [332] 253
    // SubProg check_inline pc: 334 op: NOP1 (159)
LA: // addr: 335 pc: 334 sub: 53485 op: 159
    // SubProg check_inline pc: 335 op: STARTLINE (58)

    /** inline.e:453		sequence backpatch_op = {}*/
    // SubProg check_inline pc: 337 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_backpatch_op_53557);
    _backpatch_op_53557 = _21958;
    // SubProg check_inline pc: 340 op: SEQUENCE_CHECK (97)
    // SubProg check_inline pc: 342 op: STARTLINE (58)

    /** inline.e:454		while pc < length( inline_code ) do*/
    // SubProg check_inline pc: 344 op: NOP2 (110)
    // SubProg check_inline pc: 346 op: NOPWHILE (158)
LD: // addr: 347 pc: 346 sub: 53485 op: 158
    // SubProg check_inline pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 349 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27380 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27380 = 1;
    }
    // SubProg check_inline pc: 352 op: LESS_IFW_I (119)
    if (_pc_53517 >= _27380)
    goto LE; // [352] 869
    // SubProg check_inline pc: 356 op: STARTLINE (58)

    /** inline.e:456			integer op = inline_code[pc]*/
    // SubProg check_inline pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 360 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _op_53561 = (object)*(((s1_ptr)_2)->base + _pc_53517);
    if (!IS_ATOM_INT(_op_53561))
    _op_53561 = (object)DBL_PTR(_op_53561)->dbl;
    // SubProg check_inline pc: 364 op: STARTLINE (58)

    /** inline.e:457			switch op do*/
    // SubProg check_inline pc: 366 op: SWITCH_I (193)
    _0 = _op_53561;
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

// block var op_53561

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
        DeRefi(_backpatch_op_53557);
        DeRef(_27371);
        _27371 = NOVALUE;
        _27364 = NOVALUE;
        DeRef(_27374);
        _27374 = NOVALUE;
        DeRef(_27368);
        _27368 = NOVALUE;
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
        _27385 = _pc_53517 + 1;
        // SubProg check_inline pc: 406 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _rtn_idx_53572 = (object)*(((s1_ptr)_2)->base + _27385);
        if (!IS_ATOM_INT(_rtn_idx_53572)){
            _rtn_idx_53572 = (object)DBL_PTR(_rtn_idx_53572)->dbl;
        }
        // SubProg check_inline pc: 412 op: STARTLINE (58)

        /** inline.e:465					if rtn_idx = sub then*/
        // SubProg check_inline pc: 414 op: EQUALS_IFW (104)
        if (_rtn_idx_53572 != _sub_53488)
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

// block var rtn_idx_53572

// block var args_53577

// Exiting block BLOCK: WHILE-

// block var op_53561

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
        DeRefi(_backpatch_op_53557);
        DeRef(_27371);
        _27371 = NOVALUE;
        _27364 = NOVALUE;
        DeRef(_27374);
        _27374 = NOVALUE;
        DeRef(_27368);
        _27368 = NOVALUE;
        _27385 = NOVALUE;
        return;
        // SubProg check_inline pc: 427 op: NOP1 (159)
L10: // addr: 428 pc: 427 sub: 53485 op: 159
        // SubProg check_inline pc: 428 op: STARTLINE (58)

        /** inline.e:471					integer args = SymTab[rtn_idx][S_NUM_ARGS]*/
        // SubProg check_inline pc: 430 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27388 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53572);
        // SubProg check_inline pc: 436 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 438 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27388);
        if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
            _args_53577 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
        }
        else{
            _args_53577 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
        }
        if (!IS_ATOM_INT(_args_53577)){
            _args_53577 = (object)DBL_PTR(_args_53577)->dbl;
        }
        _27388 = NOVALUE;
        // SubProg check_inline pc: 444 op: STARTLINE (58)

        /** inline.e:472					if SymTab[rtn_idx][S_TOKEN] != PROC and check_for_param( pc + args + 2 ) then*/
        // SubProg check_inline pc: 446 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 448 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27390 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53572);
        // SubProg check_inline pc: 452 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 454 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27390);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _27391 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _27391 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        _27390 = NOVALUE;
        // SubProg check_inline pc: 458 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 460 op: NOTEQ (4)
        if (IS_ATOM_INT(_27391)) {
            _27392 = (_27391 != 27);
        }
        else {
            _27392 = binary_op(NOTEQ, _27391, 27);
        }
        _27391 = NOVALUE;
        // SubProg check_inline pc: 464 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_27392)) {
            if (_27392 == 0) {
                goto L11; // [464] 485
            }
        }
        else {
            if (DBL_PTR(_27392)->dbl == 0.0) {
                goto L11; // [464] 485
            }
        }
        // SubProg check_inline pc: 468 op: PLUS (11)
        _27394 = _pc_53517 + _args_53577;
        if ((object)((uintptr_t)_27394 + (uintptr_t)HIGH_BITS) >= 0){
            _27394 = NewDouble((eudouble)_27394);
        }
        // SubProg check_inline pc: 472 op: PLUS (11)
        if (IS_ATOM_INT(_27394)) {
            _27395 = _27394 + 2;
            if ((object)((uintptr_t)_27395 + (uintptr_t)HIGH_BITS) >= 0){
                _27395 = NewDouble((eudouble)_27395);
            }
        }
        else {
            _27395 = NewDouble(DBL_PTR(_27394)->dbl + (eudouble)2);
        }
        DeRef(_27394);
        _27394 = NOVALUE;
        // SubProg check_inline pc: 476 op: PROC (27)
        _27396 = _66check_for_param(_27395);
        _27395 = NOVALUE;
        // SubProg check_inline pc: 480 op: NOP1 (159)
        // SubProg check_inline pc: 481 op: IF (20)
        if (_27396 == 0) {
            DeRef(_27396);
            _27396 = NOVALUE;
            goto L11; // [481] 485
        }
        else {
            if (!IS_ATOM_INT(_27396) && DBL_PTR(_27396)->dbl == 0.0){
                DeRef(_27396);
                _27396 = NOVALUE;
                goto L11; // [481] 485
            }
            DeRef(_27396);
            _27396 = NOVALUE;
        }
        DeRef(_27396);
        _27396 = NOVALUE;
        // SubProg check_inline pc: 484 op: NOP1 (159)
L11: // addr: 485 pc: 484 sub: 53485 op: 159
        // SubProg check_inline pc: 485 op: STARTLINE (58)

        /** inline.e:475					for i = 2 to args + 1 + (SymTab[rtn_idx][S_TOKEN] != PROC) do*/
        // SubProg check_inline pc: 487 op: PLUS1 (93)
        _27397 = _args_53577 + 1;
        if (_27397 > MAXINT){
            _27397 = NewDouble((eudouble)_27397);
        }
        // SubProg check_inline pc: 491 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 493 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27398 = (object)*(((s1_ptr)_2)->base + _rtn_idx_53572);
        // SubProg check_inline pc: 497 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 499 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27398);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _27399 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _27399 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        _27398 = NOVALUE;
        // SubProg check_inline pc: 503 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 505 op: NOTEQ (4)
        if (IS_ATOM_INT(_27399)) {
            _27400 = (_27399 != 27);
        }
        else {
            _27400 = binary_op(NOTEQ, _27399, 27);
        }
        _27399 = NOVALUE;
        // SubProg check_inline pc: 509 op: PLUS (11)
        if (IS_ATOM_INT(_27397) && IS_ATOM_INT(_27400)) {
            _27401 = _27397 + _27400;
            if ((object)((uintptr_t)_27401 + (uintptr_t)HIGH_BITS) >= 0){
                _27401 = NewDouble((eudouble)_27401);
            }
        }
        else {
            _27401 = binary_op(PLUS, _27397, _27400);
        }
        DeRef(_27397);
        _27397 = NOVALUE;
        DeRef(_27400);
        _27400 = NOVALUE;
        // SubProg check_inline pc: 513 op: FOR (21)
        {
            object _i_53594;
            _i_53594 = 2;
L12: // addr: 520 pc: 513 sub: 53485 op: 21
            if (binary_op_a(GREATER, _i_53594, _27401)){
                goto L13; // [513] 550
            }
            // SubProg check_inline pc: 520 op: STARTLINE (58)

            /** inline.e:476						if not adjust_symbol( pc + i ) then */
            // SubProg check_inline pc: 522 op: PLUS (11)
            if (IS_ATOM_INT(_i_53594)) {
                _27402 = _pc_53517 + _i_53594;
                if ((object)((uintptr_t)_27402 + (uintptr_t)HIGH_BITS) >= 0){
                    _27402 = NewDouble((eudouble)_27402);
                }
            }
            else {
                _27402 = NewDouble((eudouble)_pc_53517 + DBL_PTR(_i_53594)->dbl);
            }
            // SubProg check_inline pc: 526 op: PROC (27)
            _27403 = _66adjust_symbol(_27402);
            _27402 = NOVALUE;
            // SubProg check_inline pc: 530 op: NOT_IFW (108)
            if (IS_ATOM_INT(_27403)) {
                if (_27403 != 0){
                    DeRef(_27403);
                    _27403 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            else {
                if (DBL_PTR(_27403)->dbl != 0.0){
                    DeRef(_27403);
                    _27403 = NOVALUE;
                    goto L14; // [530] 543
                }
            }
            DeRef(_27403);
            _27403 = NOVALUE;
            // SubProg check_inline pc: 533 op: STARTLINE (58)

            /** inline.e:477							defer()*/
            // SubProg check_inline pc: 535 op: PROC (27)
            _66defer();
            // SubProg check_inline pc: 537 op: STARTLINE (58)

            /** inline.e:478							return*/
            // SubProg check_inline pc: 539 op: RETURNP (29)
            DeRef(_i_53594);

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: CASE-

// block var rtn_idx_53572

// block var args_53577

// Exiting block BLOCK: WHILE-

// block var op_53561

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
            DeRefi(_backpatch_op_53557);
            DeRef(_27371);
            _27371 = NOVALUE;
            _27364 = NOVALUE;
            DeRef(_27374);
            _27374 = NOVALUE;
            DeRef(_27368);
            _27368 = NOVALUE;
            DeRef(_27385);
            _27385 = NOVALUE;
            DeRef(_27392);
            _27392 = NOVALUE;
            DeRef(_27401);
            _27401 = NOVALUE;
            return;
            // SubProg check_inline pc: 542 op: NOP1 (159)
L14: // addr: 543 pc: 542 sub: 53485 op: 159
            // SubProg check_inline pc: 543 op: STARTLINE (58)

            /** inline.e:480					end for*/
            // SubProg check_inline pc: 545 op: ENDFOR_INT_UP1 (54)
            _0 = _i_53594;
            if (IS_ATOM_INT(_i_53594)) {
                _i_53594 = _i_53594 + 1;
                if ((object)((uintptr_t)_i_53594 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_53594 = NewDouble((eudouble)_i_53594);
                }
            }
            else {
                _i_53594 = binary_op_a(PLUS, _i_53594, 1);
            }
            DeRef(_0);
            goto L12; // [545] 520
L13: // addr: 550 pc: 545 sub: 53485 op: 54
            ;
            DeRef(_i_53594);
        }
        // SubProg check_inline pc: 550 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var rtn_idx_53572

// block var args_53577
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
        _27405 = _pc_53517 + 2;
        if ((object)((uintptr_t)_27405 + (uintptr_t)HIGH_BITS) >= 0){
            _27405 = NewDouble((eudouble)_27405);
        }
        // SubProg check_inline pc: 566 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 568 op: PLUS1 (93)
        _27406 = _pc_53517 + 1;
        // SubProg check_inline pc: 572 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27407 = (object)*(((s1_ptr)_2)->base + _27406);
        // SubProg check_inline pc: 576 op: PLUS (11)
        if (IS_ATOM_INT(_27407)) {
            _27408 = _27407 + _pc_53517;
            if ((object)((uintptr_t)_27408 + (uintptr_t)HIGH_BITS) >= 0){
                _27408 = NewDouble((eudouble)_27408);
            }
        }
        else {
            _27408 = binary_op(PLUS, _27407, _pc_53517);
        }
        _27407 = NOVALUE;
        // SubProg check_inline pc: 580 op: PLUS1 (93)
        if (IS_ATOM_INT(_27408)) {
            _27409 = _27408 + 1;
        }
        else
        _27409 = binary_op(PLUS, 1, _27408);
        DeRef(_27408);
        _27408 = NOVALUE;
        // SubProg check_inline pc: 584 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_args_53609;
        RHS_Slice(_66inline_code_52969, _27405, _27409);
        // SubProg check_inline pc: 589 op: STARTLINE (58)

        /** inline.e:486					for i = 1 to length(args) - 1 do*/
        // SubProg check_inline pc: 591 op: LENGTH (42)
        if (IS_SEQUENCE(_args_53609)){
                _27411 = SEQ_PTR(_args_53609)->length;
        }
        else {
            _27411 = 1;
        }
        // SubProg check_inline pc: 594 op: MINUS (10)
        _27412 = _27411 - 1;
        _27411 = NOVALUE;
        // SubProg check_inline pc: 598 op: FOR (21)
        {
            object _i_53617;
            _i_53617 = 1;
L15: // addr: 605 pc: 598 sub: 53485 op: 21
            if (_i_53617 > _27412){
                goto L16; // [598] 644
            }
            // SubProg check_inline pc: 605 op: STARTLINE (58)

            /** inline.e:487						if find( args[i], args, i + 1 ) then*/
            // SubProg check_inline pc: 607 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_args_53609);
            _27413 = (object)*(((s1_ptr)_2)->base + _i_53617);
            // SubProg check_inline pc: 611 op: PLUS1 (93)
            _27414 = _i_53617 + 1;
            // SubProg check_inline pc: 615 op: FIND_FROM (176)
            _27415 = find_from(_27413, _args_53609, _27414);
            _27413 = NOVALUE;
            _27414 = NOVALUE;
            // SubProg check_inline pc: 620 op: IF (20)
            if (_27415 == 0)
            {
                _27415 = NOVALUE;
                goto L17; // [620] 637
            }
            else{
                _27415 = NOVALUE;
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

// block var args_53609
            DeRefDS(_args_53609);

// Exiting block BLOCK: WHILE-

// block var op_53561

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
            DeRefi(_backpatch_op_53557);
            DeRef(_27405);
            _27405 = NOVALUE;
            DeRef(_27371);
            _27371 = NOVALUE;
            DeRef(_27409);
            _27409 = NOVALUE;
            DeRef(_27412);
            _27412 = NOVALUE;
            _27364 = NOVALUE;
            DeRef(_27374);
            _27374 = NOVALUE;
            DeRef(_27368);
            _27368 = NOVALUE;
            DeRef(_27385);
            _27385 = NOVALUE;
            DeRef(_27392);
            _27392 = NOVALUE;
            DeRef(_27401);
            _27401 = NOVALUE;
            DeRef(_27406);
            _27406 = NOVALUE;
            return;
            // SubProg check_inline pc: 636 op: NOP1 (159)
L17: // addr: 637 pc: 636 sub: 53485 op: 159
            // SubProg check_inline pc: 637 op: STARTLINE (58)

            /** inline.e:492					end for*/
            // SubProg check_inline pc: 639 op: ENDFOR_INT_UP1 (54)
            _i_53617 = _i_53617 + 1;
            goto L15; // [639] 605
L16: // addr: 644 pc: 639 sub: 53485 op: 54
            ;
        }
        // SubProg check_inline pc: 644 op: STARTLINE (58)

        /** inline.e:493					goto "inline op"*/
        // SubProg check_inline pc: 646 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var args_53609
        DeRef(_args_53609);
        _args_53609 = NOVALUE;
        // SubProg check_inline pc: 648 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53561
        // SubProg check_inline pc: 650 op: GOTO (188)
        goto G18;
        // SubProg check_inline pc: 652 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var args_53609
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
        _27417 = _pc_53517 + 1;
        // SubProg check_inline pc: 668 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27418 = (object)*(((s1_ptr)_2)->base + _27417);
        // SubProg check_inline pc: 672 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 674 op: PLUS (11)
        _27419 = _pc_53517 + 2;
        // SubProg check_inline pc: 678 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27420 = (object)*(((s1_ptr)_2)->base + _27419);
        // SubProg check_inline pc: 682 op: EQUAL (153)
        if (_27418 == _27420)
        _27421 = 1;
        else if (IS_ATOM_INT(_27418) && IS_ATOM_INT(_27420))
        _27421 = 0;
        else
        _27421 = (compare(_27418, _27420) == 0);
        _27418 = NOVALUE;
        _27420 = NOVALUE;
        // SubProg check_inline pc: 686 op: IF (20)
        if (_27421 == 0)
        {
            _27421 = NOVALUE;
            goto L19; // [686] 703
        }
        else{
            _27421 = NOVALUE;
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

// block var op_53561

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
        DeRefi(_backpatch_op_53557);
        DeRef(_27405);
        _27405 = NOVALUE;
        _27419 = NOVALUE;
        DeRef(_27371);
        _27371 = NOVALUE;
        DeRef(_27409);
        _27409 = NOVALUE;
        _27417 = NOVALUE;
        DeRef(_27412);
        _27412 = NOVALUE;
        _27364 = NOVALUE;
        DeRef(_27374);
        _27374 = NOVALUE;
        DeRef(_27368);
        _27368 = NOVALUE;
        DeRef(_27385);
        _27385 = NOVALUE;
        DeRef(_27392);
        _27392 = NOVALUE;
        DeRef(_27401);
        _27401 = NOVALUE;
        DeRef(_27406);
        _27406 = NOVALUE;
        return;
        // SubProg check_inline pc: 702 op: NOP1 (159)
L19: // addr: 703 pc: 702 sub: 53485 op: 159
        // SubProg check_inline pc: 703 op: STARTLINE (58)

        /** inline.e:501					goto "inline op"*/
        // SubProg check_inline pc: 705 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-
        // SubProg check_inline pc: 707 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53561
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
        _27422 = _pc_53517 + 1;
        if (_27422 > MAXINT){
            _27422 = NewDouble((eudouble)_27422);
        }
        // SubProg check_inline pc: 723 op: PROC (27)
        RefDS(_21958);
        _66replace_code(_21958, _pc_53517, _27422);
        _27422 = NOVALUE;
        // SubProg check_inline pc: 728 op: STARTLINE (58)

        /** inline.e:505					continue*/
        // SubProg check_inline pc: 730 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53561
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
        _27423 = _pc_53517 + 2;
        // SubProg check_inline pc: 750 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27424 = (object)*(((s1_ptr)_2)->base + _27423);
        // SubProg check_inline pc: 754 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!IS_ATOM_INT(_27424)){
            _27425 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27424)->dbl));
        }
        else{
            _27425 = (object)*(((s1_ptr)_2)->base + _27424);
        }
        // SubProg check_inline pc: 758 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_inline pc: 760 op: RHS_SUBS_CHECK (92)
        DeRef(_values_53638);
        _2 = (object)SEQ_PTR(_27425);
        _values_53638 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_values_53638);
        _27425 = NOVALUE;
        // SubProg check_inline pc: 764 op: SEQUENCE_CHECK (97)
        // SubProg check_inline pc: 766 op: STARTLINE (58)

        /** inline.e:509					for i = 1 to length( values ) do*/
        // SubProg check_inline pc: 768 op: LENGTH (42)
        if (IS_SEQUENCE(_values_53638)){
                _27427 = SEQ_PTR(_values_53638)->length;
        }
        else {
            _27427 = 1;
        }
        // SubProg check_inline pc: 771 op: FOR_I (125)
        {
            object _i_53646;
            _i_53646 = 1;
L1A: // addr: 778 pc: 771 sub: 53485 op: 125
            if (_i_53646 > _27427){
                goto L1B; // [771] 811
            }
            // SubProg check_inline pc: 778 op: STARTLINE (58)

            /** inline.e:510						if sequence( values[i] ) then*/
            // SubProg check_inline pc: 780 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_values_53638);
            _27428 = (object)*(((s1_ptr)_2)->base + _i_53646);
            // SubProg check_inline pc: 784 op: IS_A_SEQUENCE (68)
            _27429 = IS_SEQUENCE(_27428);
            _27428 = NOVALUE;
            // SubProg check_inline pc: 787 op: IF (20)
            if (_27429 == 0)
            {
                _27429 = NOVALUE;
                goto L1C; // [787] 804
            }
            else{
                _27429 = NOVALUE;
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

// block var values_53638
            DeRefDS(_values_53638);

// Exiting block BLOCK: WHILE-

// block var op_53561

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
            DeRefi(_backpatch_op_53557);
            DeRef(_27405);
            _27405 = NOVALUE;
            DeRef(_27419);
            _27419 = NOVALUE;
            DeRef(_27371);
            _27371 = NOVALUE;
            DeRef(_27409);
            _27409 = NOVALUE;
            DeRef(_27417);
            _27417 = NOVALUE;
            _27424 = NOVALUE;
            DeRef(_27412);
            _27412 = NOVALUE;
            _27364 = NOVALUE;
            DeRef(_27374);
            _27374 = NOVALUE;
            DeRef(_27368);
            _27368 = NOVALUE;
            DeRef(_27385);
            _27385 = NOVALUE;
            DeRef(_27423);
            _27423 = NOVALUE;
            DeRef(_27392);
            _27392 = NOVALUE;
            DeRef(_27401);
            _27401 = NOVALUE;
            DeRef(_27406);
            _27406 = NOVALUE;
            return;
            // SubProg check_inline pc: 803 op: NOP1 (159)
L1C: // addr: 804 pc: 803 sub: 53485 op: 159
            // SubProg check_inline pc: 804 op: STARTLINE (58)

            /** inline.e:516					end for*/
            // SubProg check_inline pc: 806 op: ENDFOR_INT_UP1 (54)
            _i_53646 = _i_53646 + 1;
            goto L1A; // [806] 778
L1B: // addr: 811 pc: 806 sub: 53485 op: 54
            ;
        }
        // SubProg check_inline pc: 811 op: STARTLINE (58)

        /** inline.e:517					backpatch_op = append( backpatch_op, pc )*/
        // SubProg check_inline pc: 813 op: APPEND (35)
        Append(&_backpatch_op_53557, _backpatch_op_53557, _pc_53517);
        // SubProg check_inline pc: 817 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var values_53638
        DeRef(_values_53638);
        _values_53638 = NOVALUE;
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
        _27431 = _66inline_op(_pc_53517);
        // SubProg check_inline pc: 833 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27431)) {
            if (_27431 != 0){
                DeRef(_27431);
                _27431 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        else {
            if (DBL_PTR(_27431)->dbl != 0.0){
                DeRef(_27431);
                _27431 = NOVALUE;
                goto L1D; // [833] 850
            }
        }
        DeRef(_27431);
        _27431 = NOVALUE;
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

// block var op_53561

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
        DeRefi(_backpatch_op_53557);
        DeRef(_27405);
        _27405 = NOVALUE;
        DeRef(_27419);
        _27419 = NOVALUE;
        DeRef(_27371);
        _27371 = NOVALUE;
        DeRef(_27409);
        _27409 = NOVALUE;
        DeRef(_27417);
        _27417 = NOVALUE;
        _27424 = NOVALUE;
        DeRef(_27412);
        _27412 = NOVALUE;
        _27364 = NOVALUE;
        DeRef(_27374);
        _27374 = NOVALUE;
        DeRef(_27368);
        _27368 = NOVALUE;
        DeRef(_27385);
        _27385 = NOVALUE;
        DeRef(_27423);
        _27423 = NOVALUE;
        DeRef(_27392);
        _27392 = NOVALUE;
        DeRef(_27401);
        _27401 = NOVALUE;
        DeRef(_27406);
        _27406 = NOVALUE;
        return;
        // SubProg check_inline pc: 849 op: NOP1 (159)
L1D: // addr: 850 pc: 849 sub: 53485 op: 159
        // SubProg check_inline pc: 850 op: NOPSWITCH (187)
    ;}LF: // addr: 851 pc: 850 sub: 53485 op: 187
    // SubProg check_inline pc: 851 op: STARTLINE (58)

    /** inline.e:530			pc = advance( pc, inline_code )*/
    // SubProg check_inline pc: 853 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 855 op: PROC (27)
    RefDS(_66inline_code_52969);
    _pc_53517 = _66advance(_pc_53517, _66inline_code_52969);
    // SubProg check_inline pc: 860 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53517)) {
        _1 = (object)(DBL_PTR(_pc_53517)->dbl);
        DeRefDS(_pc_53517);
        _pc_53517 = _1;
    }
    // SubProg check_inline pc: 862 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_53561
    // SubProg check_inline pc: 864 op: STARTLINE (58)

    /** inline.e:532		end while*/
    // SubProg check_inline pc: 866 op: ENDWHILE (22)
    goto LD; // [866] 347
    // SubProg check_inline pc: 868 op: NOP1 (159)
LE: // addr: 869 pc: 868 sub: 53485 op: 159
    // SubProg check_inline pc: 869 op: STARTLINE (58)

    /** inline.e:534		SymTab[sub][S_INLINE] = { sort( assigned_params ), inline_code, backpatch_op }*/
    // SubProg check_inline pc: 871 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 873 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sub_53488 + ((s1_ptr)_2)->base);
    // SubProg check_inline pc: 878 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 880 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 882 op: PROC (27)
    RefDS(_66assigned_params_52975);
    _27436 = _25sort(_66assigned_params_52975, 1);
    // SubProg check_inline pc: 887 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_inline pc: 889 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _27436;
    RefDS(_66inline_code_52969);
    ((intptr_t*)_2)[2] = _66inline_code_52969;
    RefDS(_backpatch_op_53557);
    ((intptr_t*)_2)[3] = _backpatch_op_53557;
    _27437 = MAKE_SEQ(_1);
    _27436 = NOVALUE;
    // SubProg check_inline pc: 895 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 29);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27437;
    if( _1 != _27437 ){
        DeRef(_1);
    }
    _27437 = NOVALUE;
    _27434 = NOVALUE;
    // SubProg check_inline pc: 899 op: STARTLINE (58)

    /** inline.e:535		restore_code()*/
    // SubProg check_inline pc: 901 op: PROC (27)
    _66restore_code();
    // SubProg check_inline pc: 903 op: STARTLINE (58)

    /** inline.e:536	end procedure*/
    // SubProg check_inline pc: 905 op: RETURNP (29)

// Exiting block BLOCK: check_inline

// block var sub_53488

// block var pc_53517

// block var s_53519

// block var backpatch_op_53557
    DeRefDSi(_backpatch_op_53557);
    DeRef(_27405);
    _27405 = NOVALUE;
    DeRef(_27419);
    _27419 = NOVALUE;
    DeRef(_27371);
    _27371 = NOVALUE;
    DeRef(_27409);
    _27409 = NOVALUE;
    DeRef(_27417);
    _27417 = NOVALUE;
    _27424 = NOVALUE;
    DeRef(_27412);
    _27412 = NOVALUE;
    _27364 = NOVALUE;
    DeRef(_27374);
    _27374 = NOVALUE;
    DeRef(_27368);
    _27368 = NOVALUE;
    DeRef(_27385);
    _27385 = NOVALUE;
    DeRef(_27423);
    _27423 = NOVALUE;
    DeRef(_27392);
    _27392 = NOVALUE;
    DeRef(_27401);
    _27401 = NOVALUE;
    DeRef(_27406);
    _27406 = NOVALUE;
    return;
    // SubProg check_inline pc: 908 op: BADRETURNF (43)
    ;
}


void _66replace_temp(object _pc_53666)
{
    object _temp_num_53667 = NOVALUE;
    object _needed_53670 = NOVALUE;
    object _27450 = NOVALUE; // 53689 27450
    object _27449 = NOVALUE; // 53688 27449
    object _27448 = NOVALUE; // 53684 27448
    object _27447 = NOVALUE; // 53683 27447
// skipping _27446  name type: 0
    object _27445 = NOVALUE; // 53678 27445
// skipping _27444  name type: 0
    object _27443 = NOVALUE; // 53675 27443
// skipping _27442  name type: 0
// skipping _27441  name type: 0
    object _27440 = NOVALUE; // 53671 27440
// skipping _27439  name type: 0
    object _27438 = NOVALUE; // 53668 27438
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg replace_temp pc: 3 op: STARTLINE (58)

    /** inline.e:539		integer temp_num = inline_code[pc][2]*/
    // SubProg replace_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27438 = (object)*(((s1_ptr)_2)->base + _pc_53666);
    // SubProg replace_temp pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27438);
    _temp_num_53667 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_temp_num_53667)){
        _temp_num_53667 = (object)DBL_PTR(_temp_num_53667)->dbl;
    }
    _27438 = NOVALUE;
    // SubProg replace_temp pc: 17 op: STARTLINE (58)

    /** inline.e:540		integer needed = temp_num - length( inline_temps )*/
    // SubProg replace_temp pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_temps_52971)){
            _27440 = SEQ_PTR(_66inline_temps_52971)->length;
    }
    else {
        _27440 = 1;
    }
    // SubProg replace_temp pc: 24 op: MINUS_I (116)
    _needed_53670 = _temp_num_53667 - _27440;
    _27440 = NOVALUE;
    // SubProg replace_temp pc: 28 op: STARTLINE (58)

    /** inline.e:541		if needed > 0 then*/
    // SubProg replace_temp pc: 30 op: GREATER_IFW_I (124)
    if (_needed_53670 <= 0)
    goto L1; // [30] 47
    // SubProg replace_temp pc: 34 op: STARTLINE (58)

    /** inline.e:542			inline_temps &= repeat( 0, needed )*/
    // SubProg replace_temp pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 38 op: REPEAT (32)
    _27443 = Repeat(0, _needed_53670);
    // SubProg replace_temp pc: 42 op: CONCAT (15)
    Concat((object_ptr)&_66inline_temps_52971, _66inline_temps_52971, _27443);
    DeRefDS(_27443);
    _27443 = NOVALUE;
    // SubProg replace_temp pc: 46 op: NOP1 (159)
L1: // addr: 47 pc: 46 sub: 53664 op: 159
    // SubProg replace_temp pc: 47 op: STARTLINE (58)

    /** inline.e:545		if not inline_temps[temp_num] then*/
    // SubProg replace_temp pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_temps_52971);
    _27445 = (object)*(((s1_ptr)_2)->base + _temp_num_53667);
    // SubProg replace_temp pc: 55 op: NOT_IFW (108)
    if (IS_ATOM_INT(_27445)) {
        if (_27445 != 0){
            _27445 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    else {
        if (DBL_PTR(_27445)->dbl != 0.0){
            _27445 = NOVALUE;
            goto L2; // [55] 100
        }
    }
    _27445 = NOVALUE;
    // SubProg replace_temp pc: 58 op: STARTLINE (58)

    /** inline.e:546			if TRANSLATE then*/
    // SubProg replace_temp pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 62 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L3; // [62] 84
    }
    else{
    }
    // SubProg replace_temp pc: 65 op: STARTLINE (58)

    /** inline.e:547				inline_temps[temp_num] = new_inline_var( -temp_num, 0 )*/
    // SubProg replace_temp pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 69 op: UMINUS (12)
    if ((uintptr_t)_temp_num_53667 == (uintptr_t)HIGH_BITS){
        _27447 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27447 = - _temp_num_53667;
    }
    // SubProg replace_temp pc: 72 op: PROC (27)
    _27448 = _66new_inline_var(_27447, 0);
    _27447 = NOVALUE;
    // SubProg replace_temp pc: 77 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_temps_52971);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_temps_52971 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53667);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27448;
    if( _1 != _27448 ){
        DeRef(_1);
    }
    _27448 = NOVALUE;
    // SubProg replace_temp pc: 81 op: ELSE (23)
    goto L4; // [81] 99
    // SubProg replace_temp pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 53664 op: 159
    // SubProg replace_temp pc: 84 op: STARTLINE (58)

    /** inline.e:549				inline_temps[temp_num] = NewTempSym( TRUE )*/
    // SubProg replace_temp pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 90 op: PROC (27)
    _27449 = _53NewTempSym(_6TRUE_365);
    // SubProg replace_temp pc: 94 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_temps_52971);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_temps_52971 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp_num_53667);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27449;
    if( _1 != _27449 ){
        DeRef(_1);
    }
    _27449 = NOVALUE;
    // SubProg replace_temp pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 53664 op: 159
    // SubProg replace_temp pc: 99 op: NOP1 (159)
L2: // addr: 100 pc: 99 sub: 53664 op: 159
    // SubProg replace_temp pc: 100 op: STARTLINE (58)

    /** inline.e:554		inline_code[pc] = inline_temps[temp_num]*/
    // SubProg replace_temp pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_temp pc: 106 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_temps_52971);
    _27450 = (object)*(((s1_ptr)_2)->base + _temp_num_53667);
    // SubProg replace_temp pc: 110 op: ASSIGN_SUBS (16)
    Ref(_27450);
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53666);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27450;
    if( _1 != _27450 ){
        DeRef(_1);
    }
    _27450 = NOVALUE;
    // SubProg replace_temp pc: 114 op: STARTLINE (58)

    /** inline.e:555	end procedure*/
    // SubProg replace_temp pc: 116 op: RETURNP (29)

// Exiting block BLOCK: replace_temp

// block var pc_53666

// block var temp_num_53667

// block var needed_53670
    return;
    // SubProg replace_temp pc: 119 op: BADRETURNF (43)
    ;
}


object _66get_param_sym(object _pc_53692)
{
    object _il_53693 = NOVALUE;
    object _px_53701 = NOVALUE;
    object _27457 = NOVALUE; // 53703 27457
// skipping _27456  name type: 0
// skipping _27455  name type: 0
    object _27454 = NOVALUE; // 53699 27454
    object _27453 = NOVALUE; // 53697 27453
    object _27452 = NOVALUE; // 53696 27452
// skipping _27451  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_param_sym pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_param_sym pc: 3 op: STARTLINE (58)

    /** inline.e:558		object il = inline_code[pc]*/
    // SubProg get_param_sym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 7 op: RHS_SUBS (25)
    DeRef(_il_53693);
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _il_53693 = (object)*(((s1_ptr)_2)->base + _pc_53692);
    Ref(_il_53693);
    // SubProg get_param_sym pc: 11 op: STARTLINE (58)

    /** inline.e:559		if integer( il ) then*/
    // SubProg get_param_sym pc: 13 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_il_53693))
    _27452 = 1;
    else if (IS_ATOM_DBL(_il_53693))
    _27452 = IS_ATOM_INT(DoubleToInt(_il_53693));
    else
    _27452 = 0;
    // SubProg get_param_sym pc: 16 op: IF (20)
    if (_27452 == 0)
    {
        _27452 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27452 = NOVALUE;
    }
    // SubProg get_param_sym pc: 19 op: STARTLINE (58)

    /** inline.e:560			return inline_code[pc]*/
    // SubProg get_param_sym pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27453 = (object)*(((s1_ptr)_2)->base + _pc_53692);
    // SubProg get_param_sym pc: 27 op: RETURNF (28)
    Ref(_27453);

// Exiting block BLOCK: get_param_sym

// block var pc_53692

// block var il_53693
    DeRef(_il_53693);

// block var px_53701
    return _27453;
    // SubProg get_param_sym pc: 31 op: ELSE (23)
    goto L2; // [31] 53
    // SubProg get_param_sym pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53690 op: 159
    // SubProg get_param_sym pc: 34 op: STARTLINE (58)

    /** inline.e:562		elsif length( il ) = 1 then*/
    // SubProg get_param_sym pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_il_53693)){
            _27454 = SEQ_PTR(_il_53693)->length;
    }
    else {
        _27454 = 1;
    }
    // SubProg get_param_sym pc: 39 op: EQUALS_IFW_I (121)
    if (_27454 != 1)
    goto L3; // [39] 52
    // SubProg get_param_sym pc: 43 op: STARTLINE (58)

    /** inline.e:563			return inline_target*/
    // SubProg get_param_sym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_param_sym

// block var pc_53692

// block var il_53693
    DeRef(_il_53693);

// block var px_53701
    _27453 = NOVALUE;
    return _66inline_target_52976;
    // SubProg get_param_sym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 53690 op: 159
    // SubProg get_param_sym pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 53690 op: 159
    // SubProg get_param_sym pc: 53 op: STARTLINE (58)

    /** inline.e:567		integer px = il[2]*/
    // SubProg get_param_sym pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_il_53693);
    _px_53701 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53701)){
        _px_53701 = (object)DBL_PTR(_px_53701)->dbl;
    }
    // SubProg get_param_sym pc: 61 op: STARTLINE (58)

    /** inline.e:568		return passed_params[px]*/
    // SubProg get_param_sym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_param_sym pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66passed_params_52972);
    _27457 = (object)*(((s1_ptr)_2)->base + _px_53701);
    // SubProg get_param_sym pc: 69 op: RETURNF (28)
    Ref(_27457);

// Exiting block BLOCK: get_param_sym

// block var pc_53692

// block var il_53693
    DeRef(_il_53693);

// block var px_53701
    _27453 = NOVALUE;
    return _27457;
    // SubProg get_param_sym pc: 73 op: BADRETURNF (43)
    ;
}


object _66get_original_sym(object _pc_53706)
{
    object _il_53707 = NOVALUE;
    object _px_53715 = NOVALUE;
    object _27464 = NOVALUE; // 53717 27464
// skipping _27463  name type: 0
// skipping _27462  name type: 0
    object _27461 = NOVALUE; // 53713 27461
    object _27460 = NOVALUE; // 53711 27460
    object _27459 = NOVALUE; // 53710 27459
// skipping _27458  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_original_sym pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53706)) {
        _1 = (object)(DBL_PTR(_pc_53706)->dbl);
        DeRefDS(_pc_53706);
        _pc_53706 = _1;
    }
    // SubProg get_original_sym pc: 3 op: STARTLINE (58)

    /** inline.e:572		object il = inline_code[pc]*/
    // SubProg get_original_sym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 7 op: RHS_SUBS (25)
    DeRef(_il_53707);
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _il_53707 = (object)*(((s1_ptr)_2)->base + _pc_53706);
    Ref(_il_53707);
    // SubProg get_original_sym pc: 11 op: STARTLINE (58)

    /** inline.e:573		if integer( il ) then*/
    // SubProg get_original_sym pc: 13 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_il_53707))
    _27459 = 1;
    else if (IS_ATOM_DBL(_il_53707))
    _27459 = IS_ATOM_INT(DoubleToInt(_il_53707));
    else
    _27459 = 0;
    // SubProg get_original_sym pc: 16 op: IF (20)
    if (_27459 == 0)
    {
        _27459 = NOVALUE;
        goto L1; // [16] 34
    }
    else{
        _27459 = NOVALUE;
    }
    // SubProg get_original_sym pc: 19 op: STARTLINE (58)

    /** inline.e:574			return inline_code[pc]*/
    // SubProg get_original_sym pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27460 = (object)*(((s1_ptr)_2)->base + _pc_53706);
    // SubProg get_original_sym pc: 27 op: RETURNF (28)
    Ref(_27460);

// Exiting block BLOCK: get_original_sym

// block var pc_53706

// block var il_53707
    DeRef(_il_53707);

// block var px_53715
    return _27460;
    // SubProg get_original_sym pc: 31 op: ELSE (23)
    goto L2; // [31] 53
    // SubProg get_original_sym pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 53704 op: 159
    // SubProg get_original_sym pc: 34 op: STARTLINE (58)

    /** inline.e:576		elsif length( il ) = 1 then*/
    // SubProg get_original_sym pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_il_53707)){
            _27461 = SEQ_PTR(_il_53707)->length;
    }
    else {
        _27461 = 1;
    }
    // SubProg get_original_sym pc: 39 op: EQUALS_IFW_I (121)
    if (_27461 != 1)
    goto L3; // [39] 52
    // SubProg get_original_sym pc: 43 op: STARTLINE (58)

    /** inline.e:577			return inline_target*/
    // SubProg get_original_sym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_original_sym

// block var pc_53706

// block var il_53707
    DeRef(_il_53707);

// block var px_53715
    _27460 = NOVALUE;
    return _66inline_target_52976;
    // SubProg get_original_sym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 53704 op: 159
    // SubProg get_original_sym pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 53704 op: 159
    // SubProg get_original_sym pc: 53 op: STARTLINE (58)

    /** inline.e:581		integer px = il[2]*/
    // SubProg get_original_sym pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_il_53707);
    _px_53715 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_px_53715)){
        _px_53715 = (object)DBL_PTR(_px_53715)->dbl;
    }
    // SubProg get_original_sym pc: 61 op: STARTLINE (58)

    /** inline.e:582		return original_params[px]*/
    // SubProg get_original_sym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_original_sym pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66original_params_52973);
    _27464 = (object)*(((s1_ptr)_2)->base + _px_53715);
    // SubProg get_original_sym pc: 69 op: RETURNF (28)
    Ref(_27464);

// Exiting block BLOCK: get_original_sym

// block var pc_53706

// block var il_53707
    DeRef(_il_53707);

// block var px_53715
    _27460 = NOVALUE;
    return _27464;
    // SubProg get_original_sym pc: 73 op: BADRETURNF (43)
    ;
}


void _66replace_var(object _pc_53724)
{
    object _27468 = NOVALUE; // 53727 27468
    object _27467 = NOVALUE; // 53726 27467
    object _27466 = NOVALUE; // 53725 27466
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_var pc: 1 op: INTEGER_CHECK (96)
    // SubProg replace_var pc: 3 op: STARTLINE (58)

    /** inline.e:590		inline_code[pc] = proc_vars[inline_code[pc][2]]*/
    // SubProg replace_var pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg replace_var pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27466 = (object)*(((s1_ptr)_2)->base + _pc_53724);
    // SubProg replace_var pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27466);
    _27467 = (object)*(((s1_ptr)_2)->base + 2);
    _27466 = NOVALUE;
    // SubProg replace_var pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66proc_vars_52970);
    if (!IS_ATOM_INT(_27467)){
        _27468 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27467)->dbl));
    }
    else{
        _27468 = (object)*(((s1_ptr)_2)->base + _27467);
    }
    // SubProg replace_var pc: 23 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pc_53724);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27468;
    if( _1 != _27468 ){
        DeRef(_1);
    }
    _27468 = NOVALUE;
    // SubProg replace_var pc: 27 op: STARTLINE (58)

    /** inline.e:591	end procedure*/
    // SubProg replace_var pc: 29 op: RETURNP (29)

// Exiting block BLOCK: replace_var

// block var pc_53724
    _27467 = NOVALUE;
    return;
    // SubProg replace_var pc: 32 op: BADRETURNF (43)
    ;
}


void _66fix_switch_rt(object _pc_53730)
{
    object _value_table_53732 = NOVALUE;
    object _jump_table_53739 = NOVALUE;
    object _27488 = NOVALUE; // 53766 27488
    object _27487 = NOVALUE; // 53765 27487
    object _27486 = NOVALUE; // 53764 27486
    object _27485 = NOVALUE; // 53762 27485
    object _27484 = NOVALUE; // 53761 27484
    object _27483 = NOVALUE; // 53760 27483
// skipping _27482  name type: 0
    object _27481 = NOVALUE; // 53756 27481
    object _27480 = NOVALUE; // 53754 27480
    object _27479 = NOVALUE; // 53752 27479
    object _27478 = NOVALUE; // 53751 27478
    object _27477 = NOVALUE; // 53750 27477
// skipping _27476  name type: 0
    object _27475 = NOVALUE; // 53746 27475
// skipping _27474  name type: 0
    object _27473 = NOVALUE; // 53743 27473
    object _27472 = NOVALUE; // 53742 27472
// skipping _27471  name type: 0
    object _27470 = NOVALUE; // 53736 27470
    object _27469 = NOVALUE; // 53735 27469
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg fix_switch_rt pc: 1 op: INTEGER_CHECK (96)
    // SubProg fix_switch_rt pc: 3 op: STARTLINE (58)

    /** inline.e:594		symtab_index value_table = NewStringSym( {-1, length(SymTab)} )*/
    // SubProg fix_switch_rt pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _27469 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _27469 = 1;
    }
    // SubProg fix_switch_rt pc: 10 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27469;
    _27470 = MAKE_SEQ(_1);
    _27469 = NOVALUE;
    // SubProg fix_switch_rt pc: 14 op: PROC (27)
    _value_table_53732 = _53NewStringSym(_27470);
    _27470 = NOVALUE;
    // SubProg fix_switch_rt pc: 18 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_value_table_53732)) {
        _1 = (object)(DBL_PTR(_value_table_53732)->dbl);
        DeRefDS(_value_table_53732);
        _value_table_53732 = _1;
    }
    // SubProg fix_switch_rt pc: 20 op: STARTLINE (58)

    /** inline.e:595		symtab_index jump_table  = NewStringSym( {-1, length(SymTab)} )*/
    // SubProg fix_switch_rt pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _27472 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _27472 = 1;
    }
    // SubProg fix_switch_rt pc: 27 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _27472;
    _27473 = MAKE_SEQ(_1);
    _27472 = NOVALUE;
    // SubProg fix_switch_rt pc: 31 op: PROC (27)
    _jump_table_53739 = _53NewStringSym(_27473);
    _27473 = NOVALUE;
    // SubProg fix_switch_rt pc: 35 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_jump_table_53739)) {
        _1 = (object)(DBL_PTR(_jump_table_53739)->dbl);
        DeRefDS(_jump_table_53739);
        _jump_table_53739 = _1;
    }
    // SubProg fix_switch_rt pc: 37 op: STARTLINE (58)

    /** inline.e:597		SymTab[value_table][S_OBJ] = SymTab[inline_code[pc+2]][S_OBJ]*/
    // SubProg fix_switch_rt pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 41 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_value_table_53732 + ((s1_ptr)_2)->base);
    // SubProg fix_switch_rt pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 52 op: PLUS (11)
    _27477 = _pc_53730 + 2;
    // SubProg fix_switch_rt pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27478 = (object)*(((s1_ptr)_2)->base + _27477);
    // SubProg fix_switch_rt pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_27478)){
        _27479 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27478)->dbl));
    }
    else{
        _27479 = (object)*(((s1_ptr)_2)->base + _27478);
    }
    // SubProg fix_switch_rt pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 66 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27479);
    _27480 = (object)*(((s1_ptr)_2)->base + 1);
    _27479 = NOVALUE;
    // SubProg fix_switch_rt pc: 70 op: PASSIGN_SUBS (162)
    Ref(_27480);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27480;
    if( _1 != _27480 ){
        DeRef(_1);
    }
    _27480 = NOVALUE;
    _27475 = NOVALUE;
    // SubProg fix_switch_rt pc: 74 op: STARTLINE (58)

    /** inline.e:598		SymTab[jump_table][S_OBJ]  = SymTab[inline_code[pc+3]][S_OBJ]*/
    // SubProg fix_switch_rt pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 78 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_jump_table_53739 + ((s1_ptr)_2)->base);
    // SubProg fix_switch_rt pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 89 op: PLUS (11)
    _27483 = _pc_53730 + 3;
    // SubProg fix_switch_rt pc: 93 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _27484 = (object)*(((s1_ptr)_2)->base + _27483);
    // SubProg fix_switch_rt pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_27484)){
        _27485 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27484)->dbl));
    }
    else{
        _27485 = (object)*(((s1_ptr)_2)->base + _27484);
    }
    // SubProg fix_switch_rt pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27485);
    _27486 = (object)*(((s1_ptr)_2)->base + 1);
    _27485 = NOVALUE;
    // SubProg fix_switch_rt pc: 107 op: PASSIGN_SUBS (162)
    Ref(_27486);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27486;
    if( _1 != _27486 ){
        DeRef(_1);
    }
    _27486 = NOVALUE;
    _27481 = NOVALUE;
    // SubProg fix_switch_rt pc: 111 op: STARTLINE (58)

    /** inline.e:600		inline_code[pc+2] = value_table*/
    // SubProg fix_switch_rt pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 115 op: PLUS (11)
    _27487 = _pc_53730 + 2;
    // SubProg fix_switch_rt pc: 119 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27487);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _value_table_53732;
    DeRef(_1);
    // SubProg fix_switch_rt pc: 123 op: STARTLINE (58)

    /** inline.e:601		inline_code[pc+3] = jump_table*/
    // SubProg fix_switch_rt pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg fix_switch_rt pc: 127 op: PLUS (11)
    _27488 = _pc_53730 + 3;
    // SubProg fix_switch_rt pc: 131 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66inline_code_52969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27488);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _jump_table_53739;
    DeRef(_1);
    // SubProg fix_switch_rt pc: 135 op: STARTLINE (58)

    /** inline.e:603	end procedure*/
    // SubProg fix_switch_rt pc: 137 op: RETURNP (29)

// Exiting block BLOCK: fix_switch_rt

// block var pc_53730

// block var value_table_53732

// block var jump_table_53739
    _27488 = NOVALUE;
    _27487 = NOVALUE;
    _27483 = NOVALUE;
    _27478 = NOVALUE;
    _27477 = NOVALUE;
    _27484 = NOVALUE;
    return;
    // SubProg fix_switch_rt pc: 140 op: BADRETURNF (43)
    ;
}


void _66fixup_special_op(object _pc_53769)
{
    object _op_53770 = NOVALUE;
// skipping _27489  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fixup_special_op pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_53769)) {
        _1 = (object)(DBL_PTR(_pc_53769)->dbl);
        DeRefDS(_pc_53769);
        _pc_53769 = _1;
    }
    // SubProg fixup_special_op pc: 3 op: STARTLINE (58)

    /** inline.e:606		integer op = inline_code[pc]*/
    // SubProg fixup_special_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg fixup_special_op pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _op_53770 = (object)*(((s1_ptr)_2)->base + _pc_53769);
    if (!IS_ATOM_INT(_op_53770))
    _op_53770 = (object)DBL_PTR(_op_53770)->dbl;
    // SubProg fixup_special_op pc: 11 op: STARTLINE (58)

    /** inline.e:607		switch op with fallthru do*/
    // SubProg fixup_special_op pc: 13 op: SWITCH_I (193)
    _0 = _op_53770;
    switch ( _0 ){ 
        // SubProg fixup_special_op pc: 18 op: STARTLINE (58)

        /** inline.e:608			case SWITCH_RT then*/
        // SubProg fixup_special_op pc: 20 op: CASE (186)
        case 202:
        // SubProg fixup_special_op pc: 22 op: STARTLINE (58)

        /** inline.e:609				fix_switch_rt( pc )*/
        // SubProg fixup_special_op pc: 24 op: PROC (27)
        _66fix_switch_rt(_pc_53769);
        // SubProg fixup_special_op pc: 27 op: STARTLINE (58)

        /** inline.e:610				break*/
        // SubProg fixup_special_op pc: 29 op: ELSE (23)
        goto L1; // [29] 32
        // SubProg fixup_special_op pc: 31 op: NOPSWITCH (187)
    ;}L1: // addr: 32 pc: 31 sub: 53767 op: 187
    // SubProg fixup_special_op pc: 32 op: STARTLINE (58)

    /** inline.e:612	end procedure*/
    // SubProg fixup_special_op pc: 34 op: RETURNP (29)

// Exiting block BLOCK: fixup_special_op

// block var pc_53769

// block var op_53770
    return;
    // SubProg fixup_special_op pc: 37 op: BADRETURNF (43)
    ;
}


object _66new_inline_var(object _ps_53781, object _reuse_53782)
{
    object _var_53784 = NOVALUE;
    object _vtype_53785 = NOVALUE;
    object _name_53786 = NOVALUE;
    object _s_53788 = NOVALUE;
    object _27551 = NOVALUE; // 53914 27551
    object _27550 = NOVALUE; // 53908 27550
// skipping _27549  name type: 0
    object _27548 = NOVALUE; // 53902 27548
// skipping _27547  name type: 0
// skipping _27546  name type: 0
    object _27545 = NOVALUE; // 53894 27545
    object _27544 = NOVALUE; // 53893 27544
// skipping _27543  name type: 0
    object _27542 = NOVALUE; // 53890 27542
// skipping _27541  name type: 0
// skipping _27540  name type: 0
    object _27539 = NOVALUE; // 53880 27539
    object _27538 = NOVALUE; // 53878 27538
    object _27537 = NOVALUE; // 53876 27537
// skipping _27536  name type: 0
    object _27535 = NOVALUE; // 53872 27535
// skipping _27534  name type: 0
// skipping _27533  name type: 0
// skipping _27532  name type: 0
// skipping _27531  name type: 0
    object _27530 = NOVALUE; // 53855 27530
// skipping _27528  name type: 0
// skipping _27526  name type: 0
    object _27525 = NOVALUE; // 53848 27525
    object _27524 = NOVALUE; // 53847 27524
    object _27523 = NOVALUE; // 53846 27523
    object _27522 = NOVALUE; // 53844 27522
// skipping _27520  name type: 0
    object _27519 = NOVALUE; // 53838 27519
// skipping _27518  name type: 0
    object _27517 = NOVALUE; // 53835 27517
// skipping _27515  name type: 0
    object _27514 = NOVALUE; // 53831 27514
// skipping _27512  name type: 0
// skipping _27511  name type: 0
// skipping _27510  name type: 0
    object _27509 = NOVALUE; // 53820 27509
    object _27508 = NOVALUE; // 53819 27508
    object _27507 = NOVALUE; // 53817 27507
    object _27506 = NOVALUE; // 53815 27506
    object _27505 = NOVALUE; // 53813 27505
// skipping _27503  name type: 0
    object _27502 = NOVALUE; // 53808 27502
    object _27501 = NOVALUE; // 53807 27501
    object _27500 = NOVALUE; // 53805 27500
    object _27499 = NOVALUE; // 53803 27499
    object _27498 = NOVALUE; // 53801 27498
// skipping _27496  name type: 0
// skipping _27495  name type: 0
// skipping _27494  name type: 0
// skipping _27493  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg new_inline_var pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ps_53781)) {
        _1 = (object)(DBL_PTR(_ps_53781)->dbl);
        DeRefDS(_ps_53781);
        _ps_53781 = _1;
    }
    // SubProg new_inline_var pc: 3 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 5 op: STARTLINE (58)

    /** inline.e:622			var = 0, */
    // SubProg new_inline_var pc: 7 op: ASSIGN (18)
    _var_53784 = 0;
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
    if (_ps_53781 <= 0)
    goto L1; // [45] 222
    // SubProg new_inline_var pc: 49 op: STARTLINE (58)

    /** inline.e:633				s = ps*/
    // SubProg new_inline_var pc: 51 op: ASSIGN (18)
    _s_53788 = _ps_53781;
    // SubProg new_inline_var pc: 54 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 56 op: STARTLINE (58)

    /** inline.e:634				if TRANSLATE then*/
    // SubProg new_inline_var pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 60 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L2; // [60] 102
    }
    else{
    }
    // SubProg new_inline_var pc: 63 op: STARTLINE (58)

    /** inline.e:635					name = sprintf( "%s_inlined_%s", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    // SubProg new_inline_var pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27498 = (object)*(((s1_ptr)_2)->base + _s_53788);
    // SubProg new_inline_var pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 73 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27498);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27499 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27499 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27498 = NOVALUE;
    // SubProg new_inline_var pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27500 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52983);
    // SubProg new_inline_var pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27500);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27501 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27501 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27500 = NOVALUE;
    // SubProg new_inline_var pc: 91 op: RIGHT_BRACE_2 (85)
    Ref(_27501);
    Ref(_27499);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27499;
    ((intptr_t *)_2)[2] = _27501;
    _27502 = MAKE_SEQ(_1);
    _27501 = NOVALUE;
    _27499 = NOVALUE;
    // SubProg new_inline_var pc: 95 op: SPRINTF (53)
    DeRefi(_name_53786);
    _name_53786 = EPrintf(-9999999, _27497, _27502);
    DeRefDS(_27502);
    _27502 = NOVALUE;
    // SubProg new_inline_var pc: 99 op: ELSE (23)
    goto L3; // [99] 139
    // SubProg new_inline_var pc: 101 op: NOP1 (159)
L2: // addr: 102 pc: 101 sub: 53779 op: 159
    // SubProg new_inline_var pc: 102 op: STARTLINE (58)

    /** inline.e:637					name = sprintf( "%s (from inlined routine '%s'", {SymTab[s][S_NAME], SymTab[inline_sub][S_NAME] })*/
    // SubProg new_inline_var pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27505 = (object)*(((s1_ptr)_2)->base + _s_53788);
    // SubProg new_inline_var pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27505);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27506 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27506 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27505 = NOVALUE;
    // SubProg new_inline_var pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27507 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52983);
    // SubProg new_inline_var pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27507);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27508 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27508 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27507 = NOVALUE;
    // SubProg new_inline_var pc: 130 op: RIGHT_BRACE_2 (85)
    Ref(_27508);
    Ref(_27506);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27506;
    ((intptr_t *)_2)[2] = _27508;
    _27509 = MAKE_SEQ(_1);
    _27508 = NOVALUE;
    _27506 = NOVALUE;
    // SubProg new_inline_var pc: 134 op: SPRINTF (53)
    DeRefi(_name_53786);
    _name_53786 = EPrintf(-9999999, _27504, _27509);
    DeRefDS(_27509);
    _27509 = NOVALUE;
    // SubProg new_inline_var pc: 138 op: NOP1 (159)
L3: // addr: 139 pc: 138 sub: 53779 op: 159
    // SubProg new_inline_var pc: 139 op: STARTLINE (58)

    /** inline.e:640				if reuse then*/
    // SubProg new_inline_var pc: 141 op: IF (20)
    if (_reuse_53782 == 0)
    {
        goto L4; // [141] 163
    }
    else{
    }
    // SubProg new_inline_var pc: 144 op: STARTLINE (58)

    /** inline.e:641					if not TRANSLATE then*/
    // SubProg new_inline_var pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 148 op: NOT_IFW (108)
    if (_5TRANSLATE_12097 != 0)
    goto L5; // [148] 203
    // SubProg new_inline_var pc: 151 op: STARTLINE (58)

    /** inline.e:642						name &= ")"*/
    // SubProg new_inline_var pc: 153 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 155 op: CONCAT (15)
    Concat((object_ptr)&_name_53786, _name_53786, _26272);
    // SubProg new_inline_var pc: 159 op: NOP1 (159)
    // SubProg new_inline_var pc: 160 op: ELSE (23)
    goto L5; // [160] 203
    // SubProg new_inline_var pc: 162 op: NOP1 (159)
L4: // addr: 163 pc: 162 sub: 53779 op: 159
    // SubProg new_inline_var pc: 163 op: STARTLINE (58)

    /** inline.e:645					if TRANSLATE then*/
    // SubProg new_inline_var pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 167 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
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
    _27514 = EPrintf(-9999999, _27513, _66inline_start_52981);
    // SubProg new_inline_var pc: 180 op: CONCAT (15)
    Concat((object_ptr)&_name_53786, _name_53786, _27514);
    DeRefDS(_27514);
    _27514 = NOVALUE;
    // SubProg new_inline_var pc: 184 op: ELSE (23)
    goto L7; // [184] 202
    // SubProg new_inline_var pc: 186 op: NOP1 (159)
L6: // addr: 187 pc: 186 sub: 53779 op: 159
    // SubProg new_inline_var pc: 187 op: STARTLINE (58)

    /** inline.e:648						name &= sprintf( " at %d)", inline_start)*/
    // SubProg new_inline_var pc: 189 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 193 op: SPRINTF (53)
    _27517 = EPrintf(-9999999, _27516, _66inline_start_52981);
    // SubProg new_inline_var pc: 197 op: CONCAT (15)
    Concat((object_ptr)&_name_53786, _name_53786, _27517);
    DeRefDS(_27517);
    _27517 = NOVALUE;
    // SubProg new_inline_var pc: 201 op: NOP1 (159)
L7: // addr: 202 pc: 201 sub: 53779 op: 159
    // SubProg new_inline_var pc: 202 op: NOP1 (159)
L5: // addr: 203 pc: 202 sub: 53779 op: 159
    // SubProg new_inline_var pc: 203 op: STARTLINE (58)

    /** inline.e:652				vtype = SymTab[s][S_VTYPE]*/
    // SubProg new_inline_var pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 207 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27519 = (object)*(((s1_ptr)_2)->base + _s_53788);
    // SubProg new_inline_var pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27519);
    _vtype_53785 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_vtype_53785)){
        _vtype_53785 = (object)DBL_PTR(_vtype_53785)->dbl;
    }
    _27519 = NOVALUE;
    // SubProg new_inline_var pc: 219 op: ELSE (23)
    goto L8; // [219] 286
    // SubProg new_inline_var pc: 221 op: NOP1 (159)
L1: // addr: 222 pc: 221 sub: 53779 op: 159
    // SubProg new_inline_var pc: 222 op: STARTLINE (58)

    /** inline.e:654				name = sprintf( "%s_%d", {SymTab[inline_sub][S_NAME], -ps})*/
    // SubProg new_inline_var pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 228 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27522 = (object)*(((s1_ptr)_2)->base + _66inline_sub_52983);
    // SubProg new_inline_var pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 234 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27522);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27523 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27523 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27522 = NOVALUE;
    // SubProg new_inline_var pc: 238 op: UMINUS (12)
    if ((uintptr_t)_ps_53781 == (uintptr_t)HIGH_BITS){
        _27524 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _27524 = - _ps_53781;
    }
    // SubProg new_inline_var pc: 241 op: RIGHT_BRACE_2 (85)
    Ref(_27523);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _27523;
    ((intptr_t *)_2)[2] = _27524;
    _27525 = MAKE_SEQ(_1);
    _27524 = NOVALUE;
    _27523 = NOVALUE;
    // SubProg new_inline_var pc: 245 op: SPRINTF (53)
    DeRefi(_name_53786);
    _name_53786 = EPrintf(-9999999, _27521, _27525);
    DeRefDS(_27525);
    _27525 = NOVALUE;
    // SubProg new_inline_var pc: 249 op: STARTLINE (58)

    /** inline.e:655				if reuse then*/
    // SubProg new_inline_var pc: 251 op: IF (20)
    if (_reuse_53782 == 0)
    {
        goto L9; // [251] 263
    }
    else{
    }
    // SubProg new_inline_var pc: 254 op: STARTLINE (58)

    /** inline.e:656					name &= "__tmp"*/
    // SubProg new_inline_var pc: 256 op: CONCAT (15)
    Concat((object_ptr)&_name_53786, _name_53786, _27527);
    // SubProg new_inline_var pc: 260 op: ELSE (23)
    goto LA; // [260] 276
    // SubProg new_inline_var pc: 262 op: NOP1 (159)
L9: // addr: 263 pc: 262 sub: 53779 op: 159
    // SubProg new_inline_var pc: 263 op: STARTLINE (58)

    /** inline.e:658					name &= sprintf( "__tmp_at%d", inline_start)*/
    // SubProg new_inline_var pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 267 op: SPRINTF (53)
    _27530 = EPrintf(-9999999, _27529, _66inline_start_52981);
    // SubProg new_inline_var pc: 271 op: CONCAT (15)
    Concat((object_ptr)&_name_53786, _name_53786, _27530);
    DeRefDS(_27530);
    _27530 = NOVALUE;
    // SubProg new_inline_var pc: 275 op: NOP1 (159)
LA: // addr: 276 pc: 275 sub: 53779 op: 159
    // SubProg new_inline_var pc: 276 op: STARTLINE (58)

    /** inline.e:660				vtype = object_type*/
    // SubProg new_inline_var pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 280 op: ASSIGN (18)
    _vtype_53785 = _53object_type_46324;
    // SubProg new_inline_var pc: 283 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 285 op: NOP1 (159)
L8: // addr: 286 pc: 285 sub: 53779 op: 159
    // SubProg new_inline_var pc: 286 op: STARTLINE (58)

    /** inline.e:662			if CurrentSub = TopLevelSub then*/
    // SubProg new_inline_var pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 292 op: EQUALS_IFW (104)
    if (_5CurrentSub_12485 != _5TopLevelSub_12484)
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
    RefDS(_name_53786);
    _var_53784 = _53NewEntry(_name_53786, _66varnum_52980, 5, -100, 2004, 0, _vtype_53785);
    // SubProg new_inline_var pc: 320 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53784)) {
        _1 = (object)(DBL_PTR(_var_53784)->dbl);
        DeRefDS(_var_53784);
        _var_53784 = _1;
    }
    // SubProg new_inline_var pc: 322 op: ELSE (23)
    goto LC; // [322] 416
    // SubProg new_inline_var pc: 324 op: NOP1 (159)
LB: // addr: 325 pc: 324 sub: 53779 op: 159
    // SubProg new_inline_var pc: 325 op: STARTLINE (58)

    /** inline.e:666				var = NewBasicEntry( name, varnum, SC_PRIVATE, VARIABLE, INLINE_HASHVAL, 0, vtype )*/
    // SubProg new_inline_var pc: 327 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 331 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 337 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_inline_var pc: 339 op: PROC (27)
    RefDS(_name_53786);
    _var_53784 = _53NewBasicEntry(_name_53786, _66varnum_52980, 3, -100, 2004, 0, _vtype_53785);
    // SubProg new_inline_var pc: 349 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_53784)) {
        _1 = (object)(DBL_PTR(_var_53784)->dbl);
        DeRefDS(_var_53784);
        _var_53784 = _1;
    }
    // SubProg new_inline_var pc: 351 op: STARTLINE (58)

    /** inline.e:667				SymTab[var][S_NEXT] = SymTab[last_param][S_NEXT]*/
    // SubProg new_inline_var pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 355 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53784 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 360 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 366 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27537 = (object)*(((s1_ptr)_2)->base + _66last_param_52984);
    // SubProg new_inline_var pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 372 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27537);
    _27538 = (object)*(((s1_ptr)_2)->base + 2);
    _27537 = NOVALUE;
    // SubProg new_inline_var pc: 376 op: PASSIGN_SUBS (162)
    Ref(_27538);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27538;
    if( _1 != _27538 ){
        DeRef(_1);
    }
    _27538 = NOVALUE;
    _27535 = NOVALUE;
    // SubProg new_inline_var pc: 380 op: STARTLINE (58)

    /** inline.e:668				SymTab[last_param][S_NEXT] = var*/
    // SubProg new_inline_var pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 386 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66last_param_52984 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 393 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _var_53784;
    DeRef(_1);
    _27539 = NOVALUE;
    // SubProg new_inline_var pc: 397 op: STARTLINE (58)

    /** inline.e:669				if last_param = last_sym then*/
    // SubProg new_inline_var pc: 399 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 401 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 403 op: EQUALS_IFW (104)
    if (_66last_param_52984 != _53last_sym_46333)
    goto LD; // [403] 415
    // SubProg new_inline_var pc: 407 op: STARTLINE (58)

    /** inline.e:670					last_sym = var*/
    // SubProg new_inline_var pc: 409 op: ASSIGN (18)
    _53last_sym_46333 = _var_53784;
    // SubProg new_inline_var pc: 412 op: INTEGER_CHECK (96)
    // SubProg new_inline_var pc: 414 op: NOP1 (159)
LD: // addr: 415 pc: 414 sub: 53779 op: 159
    // SubProg new_inline_var pc: 415 op: NOP1 (159)
LC: // addr: 416 pc: 415 sub: 53779 op: 159
    // SubProg new_inline_var pc: 416 op: STARTLINE (58)

    /** inline.e:673			if deferred_inlining then*/
    // SubProg new_inline_var pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 420 op: IF (20)
    if (_66deferred_inlining_52979 == 0)
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
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5CurrentSub_12485 + ((s1_ptr)_2)->base);
    // SubProg new_inline_var pc: 434 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 436 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192)){
        _27544 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    }
    else{
        _27544 = (object)*(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    }
    _27542 = NOVALUE;
    // SubProg new_inline_var pc: 440 op: PLUS1 (93)
    if (IS_ATOM_INT(_27544)) {
        _27545 = _27544 + 1;
        if (_27545 > MAXINT){
            _27545 = NewDouble((eudouble)_27545);
        }
    }
    else
    _27545 = binary_op(PLUS, 1, _27544);
    _27544 = NOVALUE;
    // SubProg new_inline_var pc: 444 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27545;
    if( _1 != _27545 ){
        DeRef(_1);
    }
    _27545 = NOVALUE;
    _27542 = NOVALUE;
    // SubProg new_inline_var pc: 448 op: ELSE (23)
    goto LF; // [448] 471
    // SubProg new_inline_var pc: 450 op: NOP1 (159)
LE: // addr: 451 pc: 450 sub: 53779 op: 159
    // SubProg new_inline_var pc: 451 op: STARTLINE (58)

    /** inline.e:676				if param_num != -1 then*/
    // SubProg new_inline_var pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 455 op: NOTEQ_IFW (105)
    if (_31param_num_54453 == -1)
    goto L10; // [455] 470
    // SubProg new_inline_var pc: 459 op: STARTLINE (58)

    /** inline.e:677					param_num += 1*/
    // SubProg new_inline_var pc: 461 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 463 op: PLUS (11)
    _31param_num_54453 = _31param_num_54453 + 1;
    // SubProg new_inline_var pc: 469 op: NOP1 (159)
L10: // addr: 470 pc: 469 sub: 53779 op: 159
    // SubProg new_inline_var pc: 470 op: NOP1 (159)
LF: // addr: 471 pc: 470 sub: 53779 op: 159
    // SubProg new_inline_var pc: 471 op: STARTLINE (58)

    /** inline.e:680			SymTab[var][S_USAGE] = U_USED*/
    // SubProg new_inline_var pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 475 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_var_53784 + ((s1_ptr)_2)->base);
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
    _27548 = NOVALUE;
    // SubProg new_inline_var pc: 488 op: STARTLINE (58)

    /** inline.e:681			if reuse then*/
    // SubProg new_inline_var pc: 490 op: IF (20)
    if (_reuse_53782 == 0)
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
    ((intptr_t *)_2)[1] = _5CurrentSub_12485;
    ((intptr_t *)_2)[2] = _ps_53781;
    _27550 = MAKE_SEQ(_1);
    // SubProg new_inline_var pc: 503 op: PROC (27)
    Ref(_66inline_var_map_52988);
    _33nested_put(_66inline_var_map_52988, _27550, _var_53784, 1, 0);
    _27550 = NOVALUE;
    // SubProg new_inline_var pc: 510 op: NOP1 (159)
L11: // addr: 511 pc: 510 sub: 53779 op: 159
    // SubProg new_inline_var pc: 511 op: NOP1 (159)
    // SubProg new_inline_var pc: 512 op: STARTLINE (58)

    /** inline.e:686		Block_var( var )*/
    // SubProg new_inline_var pc: 514 op: PROC (27)
    _64Block_var(_var_53784);
    // SubProg new_inline_var pc: 517 op: STARTLINE (58)

    /** inline.e:687		if BIND then*/
    // SubProg new_inline_var pc: 519 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_inline_var pc: 521 op: IF (20)
    if (_5BIND_12100 == 0)
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
    ((intptr_t *)_2)[2] = _var_53784;
    _27551 = MAKE_SEQ(_1);
    // SubProg new_inline_var pc: 532 op: PROC (27)
    _53add_ref(_27551);
    _27551 = NOVALUE;
    // SubProg new_inline_var pc: 535 op: NOP1 (159)
L12: // addr: 536 pc: 535 sub: 53779 op: 159
    // SubProg new_inline_var pc: 536 op: STARTLINE (58)

    /** inline.e:690		return var*/
    // SubProg new_inline_var pc: 538 op: RETURNF (28)

// Exiting block BLOCK: new_inline_var

// block var ps_53781

// block var reuse_53782

// block var vtype_53785

// block var name_53786
    DeRefi(_name_53786);

// block var s_53788
    return _var_53784;
    // SubProg new_inline_var pc: 542 op: BADRETURNF (43)
    ;
}


object _66get_inlined_code(object _sub_53918, object _start_53919, object _deferred_53920)
{
    object _is_proc_53921 = NOVALUE;
    object _backpatches_53939 = NOVALUE;
    object _prolog_53945 = NOVALUE;
    object _epilog_53946 = NOVALUE;
    object _s_53962 = NOVALUE;
    object _last_sym_53985 = NOVALUE;
    object _int_sym_54012 = NOVALUE;
    object _param_54020 = NOVALUE;
    object _ax_54023 = NOVALUE;
    object _var_54030 = NOVALUE;
    object _final_target_54045 = NOVALUE;
    object _var_54064 = NOVALUE;
    object _create_target_var_54077 = NOVALUE;
    object _check_pc_54100 = NOVALUE;
    object _op_54104 = NOVALUE;
    object _sym_54113 = NOVALUE;
    object _check_result_54118 = NOVALUE;
    object _inline_type_54196 = NOVALUE;
    object _replace_param_1__tmp_at1341_54207 = NOVALUE;
    object _27706 = NOVALUE; // 54256 27706
    object _27705 = NOVALUE; // 54255 27705
    object _27704 = NOVALUE; // 54254 27704
    object _27703 = NOVALUE; // 54253 27703
    object _27702 = NOVALUE; // 54252 27702
    object _27701 = NOVALUE; // 54251 27701
    object _27700 = NOVALUE; // 54250 27700
    object _27699 = NOVALUE; // 54249 27699
// skipping _27698  name type: 0
    object _27697 = NOVALUE; // 54247 27697
// skipping _27696  name type: 0
// skipping _27695  name type: 0
    object _27694 = NOVALUE; // 54235 27694
// skipping _27693  name type: 0
// skipping _27692  name type: 0
    object _27691 = NOVALUE; // 54224 27691
    object _27690 = NOVALUE; // 54221 27690
    object _27689 = NOVALUE; // 54220 27689
    object _27688 = NOVALUE; // 54217 27688
    object _27687 = NOVALUE; // 54214 27687
    object _27686 = NOVALUE; // 54211 27686
    object _27685 = NOVALUE; // 54210 27685
    object _27684 = NOVALUE; // 54209 27684
// skipping _27681  name type: 0
    object _27680 = NOVALUE; // 54197 27680
    object _27679 = NOVALUE; // 54195 27679
    object _27678 = NOVALUE; // 54194 27678
    object _27677 = NOVALUE; // 54192 27677
// skipping _27676  name type: 0
// skipping _27675  name type: 0
// skipping _27674  name type: 0
    object _27673 = NOVALUE; // 54181 27673
    object _27672 = NOVALUE; // 54180 27672
    object _27671 = NOVALUE; // 54179 27671
    object _27670 = NOVALUE; // 54176 27670
    object _27669 = NOVALUE; // 54174 27669
    object _27668 = NOVALUE; // 54172 27668
    object _27667 = NOVALUE; // 54171 27667
// skipping _27666  name type: 0
    object _27665 = NOVALUE; // 54168 27665
    object _27664 = NOVALUE; // 54166 27664
    object _27663 = NOVALUE; // 54164 27663
    object _27662 = NOVALUE; // 54162 27662
    object _27661 = NOVALUE; // 54161 27661
    object _27660 = NOVALUE; // 54159 27660
    object _27659 = NOVALUE; // 54158 27659
    object _27658 = NOVALUE; // 54156 27658
    object _27657 = NOVALUE; // 54154 27657
    object _27656 = NOVALUE; // 54152 27656
    object _27655 = NOVALUE; // 54151 27655
// skipping _27654  name type: 0
    object _27653 = NOVALUE; // 54147 27653
    object _27651 = NOVALUE; // 54142 27651
// skipping _27650  name type: 0
    object _27649 = NOVALUE; // 54139 27649
    object _27648 = NOVALUE; // 54137 27648
// skipping _27647  name type: 0
    object _27646 = NOVALUE; // 54133 27646
    object _27645 = NOVALUE; // 54131 27645
// skipping _27644  name type: 0
// skipping _27643  name type: 0
    object _27642 = NOVALUE; // 54125 27642
    object _27641 = NOVALUE; // 54123 27641
// skipping _27640  name type: 0
    object _27639 = NOVALUE; // 54117 27639
// skipping _27638  name type: 0
    object _27637 = NOVALUE; // 54114 27637
// skipping _27634  name type: 0
// skipping _27633  name type: 0
    object _27632 = NOVALUE; // 54102 27632
// skipping _27631  name type: 0
// skipping _27630  name type: 0
// skipping _27629  name type: 0
    object _27628 = NOVALUE; // 54090 27628
// skipping _27627  name type: 0
// skipping _27626  name type: 0
    object _27625 = NOVALUE; // 54082 27625
// skipping _27624  name type: 0
// skipping _27623  name type: 0
// skipping _27622  name type: 0
    object _27621 = NOVALUE; // 54072 27621
// skipping _27620  name type: 0
// skipping _27619  name type: 0
// skipping _27618  name type: 0
// skipping _27617  name type: 0
// skipping _27616  name type: 0
// skipping _27615  name type: 0
    object _27614 = NOVALUE; // 54059 27614
    object _27613 = NOVALUE; // 54056 27613
    object _27612 = NOVALUE; // 54054 27612
    object _27611 = NOVALUE; // 54052 27611
    object _27610 = NOVALUE; // 54051 27610
    object _27609 = NOVALUE; // 54049 27609
    object _27608 = NOVALUE; // 54047 27608
// skipping _27607  name type: 0
    object _27606 = NOVALUE; // 54041 27606
// skipping _27605  name type: 0
// skipping _27604  name type: 0
// skipping _27603  name type: 0
// skipping _27602  name type: 0
    object _27601 = NOVALUE; // 54033 27601
// skipping _27600  name type: 0
// skipping _27599  name type: 0
    object _27598 = NOVALUE; // 54027 27598
// skipping _27597  name type: 0
// skipping _27596  name type: 0
// skipping _27595  name type: 0
// skipping _27594  name type: 0
    object _27593 = NOVALUE; // 54018 27593
    object _27592 = NOVALUE; // 54016 27592
// skipping _27591  name type: 0
    object _27590 = NOVALUE; // 54009 27590
    object _27589 = NOVALUE; // 54007 27589
    object _27588 = NOVALUE; // 54005 27588
// skipping _27587  name type: 0
// skipping _27586  name type: 0
    object _27585 = NOVALUE; // 53998 27585
    object _27584 = NOVALUE; // 53996 27584
    object _27583 = NOVALUE; // 53994 27583
    object _27582 = NOVALUE; // 53992 27582
    object _27581 = NOVALUE; // 53991 27581
    object _27580 = NOVALUE; // 53989 27580
    object _27579 = NOVALUE; // 53987 27579
// skipping _27578  name type: 0
    object _27577 = NOVALUE; // 53981 27577
    object _27576 = NOVALUE; // 53979 27576
    object _27575 = NOVALUE; // 53977 27575
// skipping _27574  name type: 0
    object _27573 = NOVALUE; // 53969 27573
// skipping _27572  name type: 0
    object _27571 = NOVALUE; // 53964 27571
    object _27570 = NOVALUE; // 53960 27570
    object _27569 = NOVALUE; // 53959 27569
    object _27568 = NOVALUE; // 53958 27568
    object _27567 = NOVALUE; // 53956 27567
    object _27566 = NOVALUE; // 53953 27566
    object _27565 = NOVALUE; // 53951 27565
// skipping _27563  name type: 0
    object _27562 = NOVALUE; // 53943 27562
    object _27561 = NOVALUE; // 53941 27561
// skipping _27560  name type: 0
    object _27559 = NOVALUE; // 53937 27559
    object _27558 = NOVALUE; // 53935 27558
// skipping _27557  name type: 0
    object _27556 = NOVALUE; // 53932 27556
    object _27555 = NOVALUE; // 53930 27555
// skipping _27554  name type: 0
    object _27553 = NOVALUE; // 53925 27553
    object _27552 = NOVALUE; // 53923 27552
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg get_inlined_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_start_53919)) {
        _1 = (object)(DBL_PTR(_start_53919)->dbl);
        DeRefDS(_start_53919);
        _start_53919 = _1;
    }
    // SubProg get_inlined_code pc: 5 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 7 op: STARTLINE (58)

    /** inline.e:694		integer is_proc = SymTab[sub][S_TOKEN] = PROC*/
    // SubProg get_inlined_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27552 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27552);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _27553 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _27553 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _27552 = NOVALUE;
    // SubProg get_inlined_code pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 23 op: EQUALS (3)
    if (IS_ATOM_INT(_27553)) {
        _is_proc_53921 = (_27553 == 27);
    }
    else {
        _is_proc_53921 = binary_op(EQUALS, _27553, 27);
    }
    _27553 = NOVALUE;
    // SubProg get_inlined_code pc: 27 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_proc_53921)) {
        _1 = (object)(DBL_PTR(_is_proc_53921)->dbl);
        DeRefDS(_is_proc_53921);
        _is_proc_53921 = _1;
    }
    // SubProg get_inlined_code pc: 29 op: STARTLINE (58)

    /** inline.e:695		clear_inline_targets()*/
    // SubProg get_inlined_code pc: 31 op: PROC (27)
    _45clear_inline_targets();
    // SubProg get_inlined_code pc: 33 op: STARTLINE (58)

    /** inline.e:697		inline_temps = {}*/
    // SubProg get_inlined_code pc: 35 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_66inline_temps_52971);
    _66inline_temps_52971 = _21958;
    // SubProg get_inlined_code pc: 38 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 40 op: STARTLINE (58)

    /** inline.e:698		inline_params = {}*/
    // SubProg get_inlined_code pc: 42 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_66inline_params_52974);
    _66inline_params_52974 = _21958;
    // SubProg get_inlined_code pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 47 op: STARTLINE (58)

    /** inline.e:699		assigned_params      = SymTab[sub][S_INLINE][1]*/
    // SubProg get_inlined_code pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27555 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27555);
    _27556 = (object)*(((s1_ptr)_2)->base + 29);
    _27555 = NOVALUE;
    // SubProg get_inlined_code pc: 61 op: RHS_SUBS_CHECK (92)
    DeRef(_66assigned_params_52975);
    _2 = (object)SEQ_PTR(_27556);
    _66assigned_params_52975 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_66assigned_params_52975);
    _27556 = NOVALUE;
    // SubProg get_inlined_code pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 67 op: STARTLINE (58)

    /** inline.e:700		inline_code          = SymTab[sub][S_INLINE][2]*/
    // SubProg get_inlined_code pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27558 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27558);
    _27559 = (object)*(((s1_ptr)_2)->base + 29);
    _27558 = NOVALUE;
    // SubProg get_inlined_code pc: 81 op: RHS_SUBS_CHECK (92)
    DeRef(_66inline_code_52969);
    _2 = (object)SEQ_PTR(_27559);
    _66inline_code_52969 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_66inline_code_52969);
    _27559 = NOVALUE;
    // SubProg get_inlined_code pc: 85 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 87 op: STARTLINE (58)

    /** inline.e:701		sequence backpatches = SymTab[sub][S_INLINE][3]*/
    // SubProg get_inlined_code pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27561 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27561);
    _27562 = (object)*(((s1_ptr)_2)->base + 29);
    _27561 = NOVALUE;
    // SubProg get_inlined_code pc: 101 op: RHS_SUBS_CHECK (92)
    DeRef(_backpatches_53939);
    _2 = (object)SEQ_PTR(_27562);
    _backpatches_53939 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_backpatches_53939);
    _27562 = NOVALUE;
    // SubProg get_inlined_code pc: 105 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 107 op: STARTLINE (58)

    /** inline.e:703		passed_params = {}*/
    // SubProg get_inlined_code pc: 109 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_66passed_params_52972);
    _66passed_params_52972 = _21958;
    // SubProg get_inlined_code pc: 112 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 114 op: STARTLINE (58)

    /** inline.e:704		original_params = {}*/
    // SubProg get_inlined_code pc: 116 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_66original_params_52973);
    _66original_params_52973 = _21958;
    // SubProg get_inlined_code pc: 119 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 121 op: STARTLINE (58)

    /** inline.e:705		proc_vars = {}*/
    // SubProg get_inlined_code pc: 123 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_66proc_vars_52970);
    _66proc_vars_52970 = _21958;
    // SubProg get_inlined_code pc: 126 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 128 op: STARTLINE (58)

    /** inline.e:706		sequence prolog = {}*/
    // SubProg get_inlined_code pc: 130 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_prolog_53945);
    _prolog_53945 = _21958;
    // SubProg get_inlined_code pc: 133 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 135 op: STARTLINE (58)

    /** inline.e:707		sequence epilog = {}*/
    // SubProg get_inlined_code pc: 137 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_epilog_53946);
    _epilog_53946 = _21958;
    // SubProg get_inlined_code pc: 140 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 142 op: STARTLINE (58)

    /** inline.e:709		Start_block( EXIT_BLOCK, sprintf("Inline-%s from %s @ %d", */
    // SubProg get_inlined_code pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27565 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27565);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27566 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27566 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27565 = NOVALUE;
    // SubProg get_inlined_code pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 162 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27567 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg get_inlined_code pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 168 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27567);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27568 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27568 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27567 = NOVALUE;
    // SubProg get_inlined_code pc: 172 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27566);
    ((intptr_t*)_2)[1] = _27566;
    Ref(_27568);
    ((intptr_t*)_2)[2] = _27568;
    ((intptr_t*)_2)[3] = _start_53919;
    _27569 = MAKE_SEQ(_1);
    _27568 = NOVALUE;
    _27566 = NOVALUE;
    // SubProg get_inlined_code pc: 178 op: SPRINTF (53)
    _27570 = EPrintf(-9999999, _27564, _27569);
    DeRefDS(_27569);
    _27569 = NOVALUE;
    // SubProg get_inlined_code pc: 182 op: PROC (27)
    _64Start_block(206, _27570);
    _27570 = NOVALUE;
    // SubProg get_inlined_code pc: 186 op: STARTLINE (58)

    /** inline.e:712		symtab_index s = SymTab[sub][S_NEXT]*/
    // SubProg get_inlined_code pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 190 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27571 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 196 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27571);
    _s_53962 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53962)){
        _s_53962 = (object)DBL_PTR(_s_53962)->dbl;
    }
    _27571 = NOVALUE;
    // SubProg get_inlined_code pc: 202 op: STARTLINE (58)

    /** inline.e:714		varnum = SymTab[CurrentSub][S_NUM_ARGS]*/
    // SubProg get_inlined_code pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 208 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27573 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg get_inlined_code pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 214 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27573);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _66varnum_52980 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _66varnum_52980 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    if (!IS_ATOM_INT(_66varnum_52980)){
        _66varnum_52980 = (object)DBL_PTR(_66varnum_52980)->dbl;
    }
    _27573 = NOVALUE;
    // SubProg get_inlined_code pc: 220 op: STARTLINE (58)

    /** inline.e:715		inline_start = start*/
    // SubProg get_inlined_code pc: 222 op: ASSIGN_I (113)
    _66inline_start_52981 = _start_53919;
    // SubProg get_inlined_code pc: 225 op: STARTLINE (58)

    /** inline.e:717		last_param = CurrentSub*/
    // SubProg get_inlined_code pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 229 op: ASSIGN (18)
    _66last_param_52984 = _5CurrentSub_12485;
    // SubProg get_inlined_code pc: 232 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 234 op: STARTLINE (58)

    /** inline.e:718		for p = 1 to SymTab[CurrentSub][S_NUM_ARGS] do*/
    // SubProg get_inlined_code pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27575 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg get_inlined_code pc: 244 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 246 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27575);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _27576 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _27576 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _27575 = NOVALUE;
    // SubProg get_inlined_code pc: 250 op: FOR (21)
    {
        object _p_53974;
        _p_53974 = 1;
L1: // addr: 257 pc: 250 sub: 53915 op: 21
        if (binary_op_a(GREATER, _p_53974, _27576)){
            goto L2; // [250] 282
        }
        // SubProg get_inlined_code pc: 257 op: STARTLINE (58)

        /** inline.e:719			last_param = SymTab[last_param][S_NEXT]*/
        // SubProg get_inlined_code pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 261 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 263 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27577 = (object)*(((s1_ptr)_2)->base + _66last_param_52984);
        // SubProg get_inlined_code pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 269 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27577);
        _66last_param_52984 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_66last_param_52984)){
            _66last_param_52984 = (object)DBL_PTR(_66last_param_52984)->dbl;
        }
        _27577 = NOVALUE;
        // SubProg get_inlined_code pc: 275 op: STARTLINE (58)

        /** inline.e:720		end for*/
        // SubProg get_inlined_code pc: 277 op: ENDFOR_INT_UP1 (54)
        _0 = _p_53974;
        if (IS_ATOM_INT(_p_53974)) {
            _p_53974 = _p_53974 + 1;
            if ((object)((uintptr_t)_p_53974 +(uintptr_t) HIGH_BITS) >= 0){
                _p_53974 = NewDouble((eudouble)_p_53974);
            }
        }
        else {
            _p_53974 = binary_op_a(PLUS, _p_53974, 1);
        }
        DeRef(_0);
        goto L1; // [277] 257
L2: // addr: 282 pc: 277 sub: 53915 op: 54
        ;
        DeRef(_p_53974);
    }
    // SubProg get_inlined_code pc: 282 op: STARTLINE (58)

    /** inline.e:722		symtab_index last_sym = last_param*/
    // SubProg get_inlined_code pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 286 op: ASSIGN (18)
    _last_sym_53985 = _66last_param_52984;
    // SubProg get_inlined_code pc: 289 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 291 op: STARTLINE (58)

    /** inline.e:723		while last_sym and */
    // SubProg get_inlined_code pc: 293 op: NOP2 (110)
    // SubProg get_inlined_code pc: 295 op: NOPWHILE (158)
L3: // addr: 296 pc: 295 sub: 53915 op: 158
    // SubProg get_inlined_code pc: 296 op: SC1_AND_IF (146)
    if (_last_sym_53985 == 0) {
        goto L4; // [296] 368
    }
    // SubProg get_inlined_code pc: 300 op: PROC (27)
    _27580 = _53sym_scope(_last_sym_53985);
    // SubProg get_inlined_code pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 306 op: LESSEQ (5)
    if (IS_ATOM_INT(_27580)) {
        _27581 = (_27580 <= 3);
    }
    else {
        _27581 = binary_op(LESSEQ, _27580, 3);
    }
    DeRef(_27580);
    _27580 = NOVALUE;
    // SubProg get_inlined_code pc: 310 op: SC1_OR (143)
    if (IS_ATOM_INT(_27581)) {
        if (_27581 != 0) {
            DeRef(_27582);
            _27582 = 1;
            goto L5; // [310] 328
        }
    }
    else {
        if (DBL_PTR(_27581)->dbl != 0.0) {
            DeRef(_27582);
            _27582 = 1;
            goto L5; // [310] 328
        }
    }
    // SubProg get_inlined_code pc: 314 op: PROC (27)
    _27583 = _53sym_scope(_last_sym_53985);
    // SubProg get_inlined_code pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 320 op: EQUALS (3)
    if (IS_ATOM_INT(_27583)) {
        _27584 = (_27583 == 9);
    }
    else {
        _27584 = binary_op(EQUALS, _27583, 9);
    }
    DeRef(_27583);
    _27583 = NOVALUE;
    // SubProg get_inlined_code pc: 324 op: SC2_OR (144)
    DeRef(_27582);
    if (IS_ATOM_INT(_27584))
    _27582 = (_27584 != 0);
    else
    _27582 = DBL_PTR(_27584)->dbl != 0.0;
    // SubProg get_inlined_code pc: 327 op: NOP1 (159)
L5: // addr: 328 pc: 327 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 328 op: NOP1 (159)
    // SubProg get_inlined_code pc: 329 op: WHILE (47)
    if (_27582 == 0)
    {
        _27582 = NOVALUE;
        goto L4; // [329] 368
    }
    else{
        _27582 = NOVALUE;
    }
    // SubProg get_inlined_code pc: 332 op: STARTLINE (58)

    /** inline.e:725			last_param = last_sym*/
    // SubProg get_inlined_code pc: 334 op: ASSIGN (18)
    _66last_param_52984 = _last_sym_53985;
    // SubProg get_inlined_code pc: 337 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 339 op: STARTLINE (58)

    /** inline.e:726			last_sym = SymTab[last_sym][S_NEXT]*/
    // SubProg get_inlined_code pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27585 = (object)*(((s1_ptr)_2)->base + _last_sym_53985);
    // SubProg get_inlined_code pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 349 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27585);
    _last_sym_53985 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_last_sym_53985)){
        _last_sym_53985 = (object)DBL_PTR(_last_sym_53985)->dbl;
    }
    _27585 = NOVALUE;
    // SubProg get_inlined_code pc: 355 op: STARTLINE (58)

    /** inline.e:727			varnum += 1*/
    // SubProg get_inlined_code pc: 357 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 359 op: PLUS1_I (117)
    _66varnum_52980 = _66varnum_52980 + 1;
    // SubProg get_inlined_code pc: 363 op: STARTLINE (58)

    /** inline.e:728		end while*/
    // SubProg get_inlined_code pc: 365 op: ENDWHILE (22)
    goto L3; // [365] 296
    // SubProg get_inlined_code pc: 367 op: NOP1 (159)
L4: // addr: 368 pc: 367 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 368 op: STARTLINE (58)

    /** inline.e:729		for p = SymTab[sub][S_NUM_ARGS] to 1 by -1 do*/
    // SubProg get_inlined_code pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 372 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27588 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 376 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 378 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27588);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _27589 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _27589 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _27588 = NOVALUE;
    // SubProg get_inlined_code pc: 382 op: FOR (21)
    {
        object _p_54003;
        Ref(_27589);
        _p_54003 = _27589;
L6: // addr: 389 pc: 382 sub: 53915 op: 21
        if (binary_op_a(LESS, _p_54003, 1)){
            goto L7; // [382] 407
        }
        // SubProg get_inlined_code pc: 389 op: STARTLINE (58)

        /** inline.e:730			passed_params = prepend( passed_params, Pop() )*/
        // SubProg get_inlined_code pc: 391 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 393 op: PROC (27)
        _27590 = _45Pop();
        // SubProg get_inlined_code pc: 396 op: PREPEND (57)
        Ref(_27590);
        Prepend(&_66passed_params_52972, _66passed_params_52972, _27590);
        DeRef(_27590);
        _27590 = NOVALUE;
        // SubProg get_inlined_code pc: 400 op: STARTLINE (58)

        /** inline.e:731		end for*/
        // SubProg get_inlined_code pc: 402 op: ENDFOR_GENERAL (39)
        _0 = _p_54003;
        if (IS_ATOM_INT(_p_54003)) {
            _p_54003 = _p_54003 + -1;
            if ((object)((uintptr_t)_p_54003 +(uintptr_t) HIGH_BITS) >= 0){
                _p_54003 = NewDouble((eudouble)_p_54003);
            }
        }
        else {
            _p_54003 = binary_op_a(PLUS, _p_54003, -1);
        }
        DeRef(_0);
        goto L6; // [402] 389
L7: // addr: 407 pc: 402 sub: 53915 op: 39
        ;
        DeRef(_p_54003);
    }
    // SubProg get_inlined_code pc: 407 op: STARTLINE (58)

    /** inline.e:733		original_params = passed_params*/
    // SubProg get_inlined_code pc: 409 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 411 op: ASSIGN (18)
    RefDS(_66passed_params_52972);
    DeRef(_66original_params_52973);
    _66original_params_52973 = _66passed_params_52972;
    // SubProg get_inlined_code pc: 414 op: SEQUENCE_CHECK (97)
    // SubProg get_inlined_code pc: 416 op: STARTLINE (58)

    /** inline.e:735		symtab_index int_sym = 0*/
    // SubProg get_inlined_code pc: 418 op: ASSIGN (18)
    _int_sym_54012 = 0;
    // SubProg get_inlined_code pc: 421 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 423 op: STARTLINE (58)

    /** inline.e:736		for p = 1 to SymTab[sub][S_NUM_ARGS] do*/
    // SubProg get_inlined_code pc: 425 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 427 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27592 = (object)*(((s1_ptr)_2)->base + _sub_53918);
    // SubProg get_inlined_code pc: 431 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 433 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27592);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _27593 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _27593 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _27592 = NOVALUE;
    // SubProg get_inlined_code pc: 437 op: FOR (21)
    {
        object _p_54014;
        _p_54014 = 1;
L8: // addr: 444 pc: 437 sub: 53915 op: 21
        if (binary_op_a(GREATER, _p_54014, _27593)){
            goto L9; // [437] 575
        }
        // SubProg get_inlined_code pc: 444 op: STARTLINE (58)

        /** inline.e:737			symtab_index param = passed_params[p]*/
        // SubProg get_inlined_code pc: 446 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 448 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66passed_params_52972);
        if (!IS_ATOM_INT(_p_54014)){
            _param_54020 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_54014)->dbl));
        }
        else{
            _param_54020 = (object)*(((s1_ptr)_2)->base + _p_54014);
        }
        if (!IS_ATOM_INT(_param_54020)){
            _param_54020 = (object)DBL_PTR(_param_54020)->dbl;
        }
        // SubProg get_inlined_code pc: 454 op: STARTLINE (58)

        /** inline.e:738			inline_params &= s*/
        // SubProg get_inlined_code pc: 456 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 458 op: CONCAT (15)
        Append(&_66inline_params_52974, _66inline_params_52974, _s_53962);
        // SubProg get_inlined_code pc: 462 op: STARTLINE (58)

        /** inline.e:739			integer ax = find( p, assigned_params )*/
        // SubProg get_inlined_code pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 466 op: FIND_FROM (176)
        _ax_54023 = find_from(_p_54014, _66assigned_params_52975, 1);
        // SubProg get_inlined_code pc: 471 op: STARTLINE (58)

        /** inline.e:740			if ax or is_temp( param ) then*/
        // SubProg get_inlined_code pc: 473 op: SC1_OR_IF (147)
        if (_ax_54023 != 0) {
            goto LA; // [473] 486
        }
        // SubProg get_inlined_code pc: 477 op: PROC (27)
        _27598 = _66is_temp(_param_54020);
        // SubProg get_inlined_code pc: 481 op: NOP1 (159)
        // SubProg get_inlined_code pc: 482 op: IF (20)
        if (_27598 == 0) {
            DeRef(_27598);
            _27598 = NOVALUE;
            goto LB; // [482] 548
        }
        else {
            if (!IS_ATOM_INT(_27598) && DBL_PTR(_27598)->dbl == 0.0){
                DeRef(_27598);
                _27598 = NOVALUE;
                goto LB; // [482] 548
            }
            DeRef(_27598);
            _27598 = NOVALUE;
        }
        DeRef(_27598);
        _27598 = NOVALUE;
        // SubProg get_inlined_code pc: 485 op: NOP1 (159)
LA: // addr: 486 pc: 485 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 486 op: STARTLINE (58)

        /** inline.e:743				varnum += 1*/
        // SubProg get_inlined_code pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 490 op: PLUS1_I (117)
        _66varnum_52980 = _66varnum_52980 + 1;
        // SubProg get_inlined_code pc: 494 op: STARTLINE (58)

        /** inline.e:744				symtab_index var = new_inline_var( s, 0 )*/
        // SubProg get_inlined_code pc: 496 op: PROC (27)
        _var_54030 = _66new_inline_var(_s_53962, 0);
        // SubProg get_inlined_code pc: 501 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_var_54030)) {
            _1 = (object)(DBL_PTR(_var_54030)->dbl);
            DeRefDS(_var_54030);
            _var_54030 = _1;
        }
        // SubProg get_inlined_code pc: 503 op: STARTLINE (58)

        /** inline.e:745				prolog &= {ASSIGN, param, var}*/
        // SubProg get_inlined_code pc: 505 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 507 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 18;
        ((intptr_t*)_2)[2] = _param_54020;
        ((intptr_t*)_2)[3] = _var_54030;
        _27601 = MAKE_SEQ(_1);
        // SubProg get_inlined_code pc: 513 op: CONCAT (15)
        Concat((object_ptr)&_prolog_53945, _prolog_53945, _27601);
        DeRefDS(_27601);
        _27601 = NOVALUE;
        // SubProg get_inlined_code pc: 517 op: STARTLINE (58)

        /** inline.e:746				if not int_sym then*/
        // SubProg get_inlined_code pc: 519 op: NOT_IFW (108)
        if (_int_sym_54012 != 0)
        goto LC; // [519] 531
        // SubProg get_inlined_code pc: 522 op: STARTLINE (58)

        /** inline.e:747					int_sym = NewIntSym( 0 )*/
        // SubProg get_inlined_code pc: 524 op: PROC (27)
        _int_sym_54012 = _53NewIntSym(0);
        // SubProg get_inlined_code pc: 528 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_int_sym_54012)) {
            _1 = (object)(DBL_PTR(_int_sym_54012)->dbl);
            DeRefDS(_int_sym_54012);
            _int_sym_54012 = _1;
        }
        // SubProg get_inlined_code pc: 530 op: NOP1 (159)
LC: // addr: 531 pc: 530 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 531 op: STARTLINE (58)

        /** inline.e:750				inline_start += 3*/
        // SubProg get_inlined_code pc: 533 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 535 op: PLUS_I (115)
        _66inline_start_52981 = _66inline_start_52981 + 3;
        // SubProg get_inlined_code pc: 539 op: STARTLINE (58)

        /** inline.e:751				passed_params[p] = var*/
        // SubProg get_inlined_code pc: 541 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 543 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_66passed_params_52972);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _66passed_params_52972 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_p_54014))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_p_54014)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _p_54014);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _var_54030;
        DeRef(_1);
        // SubProg get_inlined_code pc: 547 op: NOP1 (159)
LB: // addr: 548 pc: 547 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 548 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var var_54030
        // SubProg get_inlined_code pc: 550 op: STARTLINE (58)

        /** inline.e:753			s = SymTab[s][S_NEXT]*/
        // SubProg get_inlined_code pc: 552 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 554 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27606 = (object)*(((s1_ptr)_2)->base + _s_53962);
        // SubProg get_inlined_code pc: 558 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 560 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27606);
        _s_53962 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_53962)){
            _s_53962 = (object)DBL_PTR(_s_53962)->dbl;
        }
        _27606 = NOVALUE;
        // SubProg get_inlined_code pc: 566 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var param_54020

// block var ax_54023
        // SubProg get_inlined_code pc: 568 op: STARTLINE (58)

        /** inline.e:755		end for*/
        // SubProg get_inlined_code pc: 570 op: ENDFOR_INT_UP1 (54)
        _0 = _p_54014;
        if (IS_ATOM_INT(_p_54014)) {
            _p_54014 = _p_54014 + 1;
            if ((object)((uintptr_t)_p_54014 +(uintptr_t) HIGH_BITS) >= 0){
                _p_54014 = NewDouble((eudouble)_p_54014);
            }
        }
        else {
            _p_54014 = binary_op_a(PLUS, _p_54014, 1);
        }
        DeRef(_0);
        goto L8; // [570] 444
L9: // addr: 575 pc: 570 sub: 53915 op: 54
        ;
        DeRef(_p_54014);
    }
    // SubProg get_inlined_code pc: 575 op: STARTLINE (58)

    /** inline.e:757		symtab_index final_target = 0*/
    // SubProg get_inlined_code pc: 577 op: ASSIGN (18)
    _final_target_54045 = 0;
    // SubProg get_inlined_code pc: 580 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 582 op: STARTLINE (58)

    /** inline.e:758		while s and */
    // SubProg get_inlined_code pc: 584 op: NOP2 (110)
    // SubProg get_inlined_code pc: 586 op: NOPWHILE (158)
LD: // addr: 587 pc: 586 sub: 53915 op: 158
    // SubProg get_inlined_code pc: 587 op: SC1_AND_IF (146)
    if (_s_53962 == 0) {
        goto LE; // [587] 699
    }
    // SubProg get_inlined_code pc: 591 op: PROC (27)
    _27609 = _53sym_scope(_s_53962);
    // SubProg get_inlined_code pc: 595 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 597 op: LESSEQ (5)
    if (IS_ATOM_INT(_27609)) {
        _27610 = (_27609 <= 3);
    }
    else {
        _27610 = binary_op(LESSEQ, _27609, 3);
    }
    DeRef(_27609);
    _27609 = NOVALUE;
    // SubProg get_inlined_code pc: 601 op: SC1_OR (143)
    if (IS_ATOM_INT(_27610)) {
        if (_27610 != 0) {
            DeRef(_27611);
            _27611 = 1;
            goto LF; // [601] 619
        }
    }
    else {
        if (DBL_PTR(_27610)->dbl != 0.0) {
            DeRef(_27611);
            _27611 = 1;
            goto LF; // [601] 619
        }
    }
    // SubProg get_inlined_code pc: 605 op: PROC (27)
    _27612 = _53sym_scope(_s_53962);
    // SubProg get_inlined_code pc: 609 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 611 op: EQUALS (3)
    if (IS_ATOM_INT(_27612)) {
        _27613 = (_27612 == 9);
    }
    else {
        _27613 = binary_op(EQUALS, _27612, 9);
    }
    DeRef(_27612);
    _27612 = NOVALUE;
    // SubProg get_inlined_code pc: 615 op: SC2_OR (144)
    DeRef(_27611);
    if (IS_ATOM_INT(_27613))
    _27611 = (_27613 != 0);
    else
    _27611 = DBL_PTR(_27613)->dbl != 0.0;
    // SubProg get_inlined_code pc: 618 op: NOP1 (159)
LF: // addr: 619 pc: 618 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 619 op: NOP1 (159)
    // SubProg get_inlined_code pc: 620 op: WHILE (47)
    if (_27611 == 0)
    {
        _27611 = NOVALUE;
        goto LE; // [620] 699
    }
    else{
        _27611 = NOVALUE;
    }
    // SubProg get_inlined_code pc: 623 op: STARTLINE (58)

    /** inline.e:760			if sym_scope( s ) != SC_UNDEFINED then*/
    // SubProg get_inlined_code pc: 625 op: PROC (27)
    _27614 = _53sym_scope(_s_53962);
    // SubProg get_inlined_code pc: 629 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 631 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _27614, 9)){
        DeRef(_27614);
        _27614 = NOVALUE;
        goto L10; // [631] 676
    }
    DeRef(_27614);
    _27614 = NOVALUE;
    // SubProg get_inlined_code pc: 635 op: STARTLINE (58)

    /** inline.e:763				varnum += 1*/
    // SubProg get_inlined_code pc: 637 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 639 op: PLUS1_I (117)
    _66varnum_52980 = _66varnum_52980 + 1;
    // SubProg get_inlined_code pc: 643 op: STARTLINE (58)

    /** inline.e:764				symtab_index var = new_inline_var( s, 0 )*/
    // SubProg get_inlined_code pc: 645 op: PROC (27)
    _var_54064 = _66new_inline_var(_s_53962, 0);
    // SubProg get_inlined_code pc: 650 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_var_54064)) {
        _1 = (object)(DBL_PTR(_var_54064)->dbl);
        DeRefDS(_var_54064);
        _var_54064 = _1;
    }
    // SubProg get_inlined_code pc: 652 op: STARTLINE (58)

    /** inline.e:765				proc_vars &= var*/
    // SubProg get_inlined_code pc: 654 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 656 op: CONCAT (15)
    Append(&_66proc_vars_52970, _66proc_vars_52970, _var_54064);
    // SubProg get_inlined_code pc: 660 op: STARTLINE (58)

    /** inline.e:766				if int_sym = 0 then*/
    // SubProg get_inlined_code pc: 662 op: EQUALS_IFW (104)
    if (_int_sym_54012 != 0)
    goto L11; // [662] 675
    // SubProg get_inlined_code pc: 666 op: STARTLINE (58)

    /** inline.e:767					int_sym = NewIntSym( 0 )*/
    // SubProg get_inlined_code pc: 668 op: PROC (27)
    _int_sym_54012 = _53NewIntSym(0);
    // SubProg get_inlined_code pc: 672 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_int_sym_54012)) {
        _1 = (object)(DBL_PTR(_int_sym_54012)->dbl);
        DeRefDS(_int_sym_54012);
        _int_sym_54012 = _1;
    }
    // SubProg get_inlined_code pc: 674 op: NOP1 (159)
L11: // addr: 675 pc: 674 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 675 op: NOP1 (159)
L10: // addr: 676 pc: 675 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 676 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var var_54064
    // SubProg get_inlined_code pc: 678 op: STARTLINE (58)

    /** inline.e:770			s = SymTab[s][S_NEXT]*/
    // SubProg get_inlined_code pc: 680 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 682 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27621 = (object)*(((s1_ptr)_2)->base + _s_53962);
    // SubProg get_inlined_code pc: 686 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 688 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27621);
    _s_53962 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_53962)){
        _s_53962 = (object)DBL_PTR(_s_53962)->dbl;
    }
    _27621 = NOVALUE;
    // SubProg get_inlined_code pc: 694 op: STARTLINE (58)

    /** inline.e:771		end while*/
    // SubProg get_inlined_code pc: 696 op: ENDWHILE (22)
    goto LD; // [696] 587
    // SubProg get_inlined_code pc: 698 op: NOP1 (159)
LE: // addr: 699 pc: 698 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 699 op: STARTLINE (58)

    /** inline.e:773		if not is_proc then*/
    // SubProg get_inlined_code pc: 701 op: NOT_IFW (108)
    if (_is_proc_53921 != 0)
    goto L12; // [701] 831
    // SubProg get_inlined_code pc: 704 op: STARTLINE (58)

    /** inline.e:774			integer create_target_var = 1*/
    // SubProg get_inlined_code pc: 706 op: ASSIGN_I (113)
    _create_target_var_54077 = 1;
    // SubProg get_inlined_code pc: 709 op: STARTLINE (58)

    /** inline.e:775			if deferred then*/
    // SubProg get_inlined_code pc: 711 op: IF (20)
    if (_deferred_53920 == 0)
    {
        goto L13; // [711] 751
    }
    else{
    }
    // SubProg get_inlined_code pc: 714 op: STARTLINE (58)

    /** inline.e:776				inline_target = Pop()*/
    // SubProg get_inlined_code pc: 716 op: PROC (27)
    _0 = _45Pop();
    _66inline_target_52976 = _0;
    // SubProg get_inlined_code pc: 719 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_66inline_target_52976)) {
        _1 = (object)(DBL_PTR(_66inline_target_52976)->dbl);
        DeRefDS(_66inline_target_52976);
        _66inline_target_52976 = _1;
    }
    // SubProg get_inlined_code pc: 721 op: STARTLINE (58)

    /** inline.e:777				if is_temp( inline_target ) then*/
    // SubProg get_inlined_code pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 725 op: PROC (27)
    _27625 = _66is_temp(_66inline_target_52976);
    // SubProg get_inlined_code pc: 729 op: IF (20)
    if (_27625 == 0) {
        DeRef(_27625);
        _27625 = NOVALUE;
        goto L14; // [729] 744
    }
    else {
        if (!IS_ATOM_INT(_27625) && DBL_PTR(_27625)->dbl == 0.0){
            DeRef(_27625);
            _27625 = NOVALUE;
            goto L14; // [729] 744
        }
        DeRef(_27625);
        _27625 = NOVALUE;
    }
    DeRef(_27625);
    _27625 = NOVALUE;
    // SubProg get_inlined_code pc: 732 op: STARTLINE (58)

    /** inline.e:778					final_target = inline_target*/
    // SubProg get_inlined_code pc: 734 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 736 op: ASSIGN (18)
    _final_target_54045 = _66inline_target_52976;
    // SubProg get_inlined_code pc: 739 op: INTEGER_CHECK (96)
    // SubProg get_inlined_code pc: 741 op: ELSE (23)
    goto L15; // [741] 750
    // SubProg get_inlined_code pc: 743 op: NOP1 (159)
L14: // addr: 744 pc: 743 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 744 op: STARTLINE (58)

    /** inline.e:780					create_target_var = 0*/
    // SubProg get_inlined_code pc: 746 op: ASSIGN_I (113)
    _create_target_var_54077 = 0;
    // SubProg get_inlined_code pc: 749 op: NOP1 (159)
L15: // addr: 750 pc: 749 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 750 op: NOP1 (159)
L13: // addr: 751 pc: 750 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 751 op: STARTLINE (58)

    /** inline.e:784			if create_target_var then*/
    // SubProg get_inlined_code pc: 753 op: IF (20)
    if (_create_target_var_54077 == 0)
    {
        goto L16; // [753] 816
    }
    else{
    }
    // SubProg get_inlined_code pc: 756 op: STARTLINE (58)

    /** inline.e:785				varnum += 1*/
    // SubProg get_inlined_code pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 760 op: PLUS1_I (117)
    _66varnum_52980 = _66varnum_52980 + 1;
    // SubProg get_inlined_code pc: 764 op: STARTLINE (58)

    /** inline.e:786				if TRANSLATE then*/
    // SubProg get_inlined_code pc: 766 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 768 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L17; // [768] 806
    }
    else{
    }
    // SubProg get_inlined_code pc: 771 op: STARTLINE (58)

    /** inline.e:787					inline_target = new_inline_var( sub, 0 )*/
    // SubProg get_inlined_code pc: 773 op: PROC (27)
    _0 = _66new_inline_var(_sub_53918, 0);
    _66inline_target_52976 = _0;
    // SubProg get_inlined_code pc: 778 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_66inline_target_52976)) {
        _1 = (object)(DBL_PTR(_66inline_target_52976)->dbl);
        DeRefDS(_66inline_target_52976);
        _66inline_target_52976 = _1;
    }
    // SubProg get_inlined_code pc: 780 op: STARTLINE (58)

    /** inline.e:788					SymTab[inline_target][S_VTYPE] = object_type*/
    // SubProg get_inlined_code pc: 782 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 784 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 786 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66inline_target_52976 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _53object_type_46324;
    DeRef(_1);
    _27628 = NOVALUE;
    // SubProg get_inlined_code pc: 799 op: STARTLINE (58)

    /** inline.e:789					Pop_block_var()*/
    // SubProg get_inlined_code pc: 801 op: PROC (27)
    _64Pop_block_var();
    // SubProg get_inlined_code pc: 803 op: ELSE (23)
    goto L18; // [803] 815
    // SubProg get_inlined_code pc: 805 op: NOP1 (159)
L17: // addr: 806 pc: 805 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 806 op: STARTLINE (58)

    /** inline.e:791					inline_target = NewTempSym()*/
    // SubProg get_inlined_code pc: 808 op: PROC (27)
    _0 = _53NewTempSym(0);
    _66inline_target_52976 = _0;
    // SubProg get_inlined_code pc: 812 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_66inline_target_52976)) {
        _1 = (object)(DBL_PTR(_66inline_target_52976)->dbl);
        DeRefDS(_66inline_target_52976);
        _66inline_target_52976 = _1;
    }
    // SubProg get_inlined_code pc: 814 op: NOP1 (159)
L18: // addr: 815 pc: 814 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 815 op: NOP1 (159)
L16: // addr: 816 pc: 815 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 816 op: STARTLINE (58)

    /** inline.e:794			proc_vars &= inline_target*/
    // SubProg get_inlined_code pc: 818 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 820 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 822 op: CONCAT (15)
    Append(&_66proc_vars_52970, _66proc_vars_52970, _66inline_target_52976);
    // SubProg get_inlined_code pc: 826 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var create_target_var_54077
    // SubProg get_inlined_code pc: 828 op: ELSE (23)
    goto L19; // [828] 837
    // SubProg get_inlined_code pc: 830 op: NOP1 (159)
L12: // addr: 831 pc: 830 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 831 op: STARTLINE (58)

    /** inline.e:796			inline_target = 0*/
    // SubProg get_inlined_code pc: 833 op: ASSIGN_I (113)
    _66inline_target_52976 = 0;
    // SubProg get_inlined_code pc: 836 op: NOP1 (159)
L19: // addr: 837 pc: 836 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 837 op: STARTLINE (58)

    /** inline.e:800		integer check_pc = 1*/
    // SubProg get_inlined_code pc: 839 op: ASSIGN_I (113)
    _check_pc_54100 = 1;
    // SubProg get_inlined_code pc: 842 op: STARTLINE (58)

    /** inline.e:802		while length(inline_code) > check_pc do*/
    // SubProg get_inlined_code pc: 844 op: NOP2 (110)
    // SubProg get_inlined_code pc: 846 op: NOPWHILE (158)
L1A: // addr: 847 pc: 846 sub: 53915 op: 158
    // SubProg get_inlined_code pc: 847 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 849 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27632 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27632 = 1;
    }
    // SubProg get_inlined_code pc: 852 op: GREATER_IFW_I (124)
    if (_27632 <= _check_pc_54100)
    goto L1B; // [852] 1216
    // SubProg get_inlined_code pc: 856 op: STARTLINE (58)

    /** inline.e:803			integer op = inline_code[check_pc]*/
    // SubProg get_inlined_code pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 860 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_66inline_code_52969);
    _op_54104 = (object)*(((s1_ptr)_2)->base + _check_pc_54100);
    if (!IS_ATOM_INT(_op_54104))
    _op_54104 = (object)DBL_PTR(_op_54104)->dbl;
    // SubProg get_inlined_code pc: 864 op: STARTLINE (58)

    /** inline.e:805			switch op with fallthru do*/
    // SubProg get_inlined_code pc: 866 op: SWITCH_I (193)
    _0 = _op_54104;
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
        _27637 = _check_pc_54100 + 1;
        if (_27637 > MAXINT){
            _27637 = NewDouble((eudouble)_27637);
        }
        // SubProg get_inlined_code pc: 885 op: PROC (27)
        _sym_54113 = _66get_original_sym(_27637);
        _27637 = NOVALUE;
        // SubProg get_inlined_code pc: 889 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_sym_54113)) {
            _1 = (object)(DBL_PTR(_sym_54113)->dbl);
            DeRefDS(_sym_54113);
            _sym_54113 = _1;
        }
        // SubProg get_inlined_code pc: 891 op: STARTLINE (58)

        /** inline.e:810					if is_literal( sym ) then*/
        // SubProg get_inlined_code pc: 893 op: PROC (27)
        _27639 = _66is_literal(_sym_54113);
        // SubProg get_inlined_code pc: 897 op: IF (20)
        if (_27639 == 0) {
            DeRef(_27639);
            _27639 = NOVALUE;
            goto L1C; // [897] 1010
        }
        else {
            if (!IS_ATOM_INT(_27639) && DBL_PTR(_27639)->dbl == 0.0){
                DeRef(_27639);
                _27639 = NOVALUE;
                goto L1C; // [897] 1010
            }
            DeRef(_27639);
            _27639 = NOVALUE;
        }
        DeRef(_27639);
        _27639 = NOVALUE;
        // SubProg get_inlined_code pc: 900 op: STARTLINE (58)

        /** inline.e:811						integer check_result*/
        // SubProg get_inlined_code pc: 902 op: STARTLINE (58)

        /** inline.e:813						if op = INTEGER_CHECK then*/
        // SubProg get_inlined_code pc: 904 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 906 op: EQUALS_IFW (104)
        if (_op_54104 != 96)
        goto L1D; // [906] 930
        // SubProg get_inlined_code pc: 910 op: STARTLINE (58)

        /** inline.e:814							check_result = integer( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 912 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 914 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27641 = (object)*(((s1_ptr)_2)->base + _sym_54113);
        // SubProg get_inlined_code pc: 918 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 920 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27641);
        _27642 = (object)*(((s1_ptr)_2)->base + 1);
        _27641 = NOVALUE;
        // SubProg get_inlined_code pc: 924 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_27642))
        _check_result_54118 = 1;
        else if (IS_ATOM_DBL(_27642))
        _check_result_54118 = IS_ATOM_INT(DoubleToInt(_27642));
        else
        _check_result_54118 = 0;
        _27642 = NOVALUE;
        // SubProg get_inlined_code pc: 927 op: ELSE (23)
        goto L1E; // [927] 976
        // SubProg get_inlined_code pc: 929 op: NOP1 (159)
L1D: // addr: 930 pc: 929 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 930 op: STARTLINE (58)

        /** inline.e:815						elsif op = SEQUENCE_CHECK then*/
        // SubProg get_inlined_code pc: 932 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 934 op: EQUALS_IFW (104)
        if (_op_54104 != 97)
        goto L1F; // [934] 958
        // SubProg get_inlined_code pc: 938 op: STARTLINE (58)

        /** inline.e:816							check_result = sequence( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 940 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 942 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27645 = (object)*(((s1_ptr)_2)->base + _sym_54113);
        // SubProg get_inlined_code pc: 946 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 948 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27645);
        _27646 = (object)*(((s1_ptr)_2)->base + 1);
        _27645 = NOVALUE;
        // SubProg get_inlined_code pc: 952 op: IS_A_SEQUENCE (68)
        _check_result_54118 = IS_SEQUENCE(_27646);
        _27646 = NOVALUE;
        // SubProg get_inlined_code pc: 955 op: ELSE (23)
        goto L1E; // [955] 976
        // SubProg get_inlined_code pc: 957 op: NOP1 (159)
L1F: // addr: 958 pc: 957 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 958 op: STARTLINE (58)

        /** inline.e:818							check_result = atom( SymTab[sym][S_OBJ] )*/
        // SubProg get_inlined_code pc: 960 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 962 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27648 = (object)*(((s1_ptr)_2)->base + _sym_54113);
        // SubProg get_inlined_code pc: 966 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 968 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27648);
        _27649 = (object)*(((s1_ptr)_2)->base + 1);
        _27648 = NOVALUE;
        // SubProg get_inlined_code pc: 972 op: IS_AN_ATOM (67)
        _check_result_54118 = IS_ATOM(_27649);
        _27649 = NOVALUE;
        // SubProg get_inlined_code pc: 975 op: NOP1 (159)
L1E: // addr: 976 pc: 975 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 976 op: STARTLINE (58)

        /** inline.e:821						if check_result then*/
        // SubProg get_inlined_code pc: 978 op: PRIVATE_INIT_CHECK (30)
        // SubProg get_inlined_code pc: 980 op: IF (20)
        if (_check_result_54118 == 0)
        {
            goto L20; // [980] 997
        }
        else{
        }
        // SubProg get_inlined_code pc: 983 op: STARTLINE (58)

        /** inline.e:822							replace_code( {}, check_pc, check_pc+1 )*/
        // SubProg get_inlined_code pc: 985 op: PLUS1 (93)
        _27651 = _check_pc_54100 + 1;
        if (_27651 > MAXINT){
            _27651 = NewDouble((eudouble)_27651);
        }
        // SubProg get_inlined_code pc: 989 op: PROC (27)
        RefDS(_21958);
        _66replace_code(_21958, _check_pc_54100, _27651);
        _27651 = NOVALUE;
        // SubProg get_inlined_code pc: 994 op: ELSE (23)
        goto L21; // [994] 1005
        // SubProg get_inlined_code pc: 996 op: NOP1 (159)
L20: // addr: 997 pc: 996 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 997 op: STARTLINE (58)

        /** inline.e:826							CompileErr(146)*/
        // SubProg get_inlined_code pc: 999 op: PROC (27)
        RefDS(_21958);
        _49CompileErr(146, _21958, 0);
        // SubProg get_inlined_code pc: 1004 op: NOP1 (159)
L21: // addr: 1005 pc: 1004 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1005 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var check_result_54118
        // SubProg get_inlined_code pc: 1007 op: ELSE (23)
        goto L22; // [1007] 1172
        // SubProg get_inlined_code pc: 1009 op: NOP1 (159)
L1C: // addr: 1010 pc: 1009 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1010 op: STARTLINE (58)

        /** inline.e:829					elsif not is_temp( sym ) then*/
        // SubProg get_inlined_code pc: 1012 op: PROC (27)
        _27653 = _66is_temp(_sym_54113);
        // SubProg get_inlined_code pc: 1016 op: NOT_IFW (108)
        if (IS_ATOM_INT(_27653)) {
            if (_27653 != 0){
                DeRef(_27653);
                _27653 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        else {
            if (DBL_PTR(_27653)->dbl != 0.0){
                DeRef(_27653);
                _27653 = NOVALUE;
                goto L23; // [1016] 1165
            }
        }
        DeRef(_27653);
        _27653 = NOVALUE;
        // SubProg get_inlined_code pc: 1019 op: STARTLINE (58)

        /** inline.e:831						if (op = INTEGER_CHECK and SymTab[sym][S_VTYPE] = integer_type )*/
        // SubProg get_inlined_code pc: 1021 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1023 op: EQUALS (3)
        _27655 = (_op_54104 == 96);
        // SubProg get_inlined_code pc: 1027 op: SC1_AND (141)
        if (_27655 == 0) {
            _27656 = 0;
            goto L24; // [1027] 1053
        }
        // SubProg get_inlined_code pc: 1031 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1033 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27657 = (object)*(((s1_ptr)_2)->base + _sym_54113);
        // SubProg get_inlined_code pc: 1037 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1039 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27657);
        _27658 = (object)*(((s1_ptr)_2)->base + 15);
        _27657 = NOVALUE;
        // SubProg get_inlined_code pc: 1043 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1045 op: EQUALS (3)
        if (IS_ATOM_INT(_27658)) {
            _27659 = (_27658 == _53integer_type_46330);
        }
        else {
            _27659 = binary_op(EQUALS, _27658, _53integer_type_46330);
        }
        _27658 = NOVALUE;
        // SubProg get_inlined_code pc: 1049 op: SC2_AND (142)
        if (IS_ATOM_INT(_27659))
        _27656 = (_27659 != 0);
        else
        _27656 = DBL_PTR(_27659)->dbl != 0.0;
        // SubProg get_inlined_code pc: 1052 op: NOP1 (159)
L24: // addr: 1053 pc: 1052 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1053 op: SC1_OR (143)
        if (_27656 != 0) {
            _27660 = 1;
            goto L25; // [1053] 1093
        }
        // SubProg get_inlined_code pc: 1057 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1059 op: EQUALS (3)
        _27661 = (_op_54104 == 97);
        // SubProg get_inlined_code pc: 1063 op: SC1_AND (141)
        if (_27661 == 0) {
            _27662 = 0;
            goto L26; // [1063] 1089
        }
        // SubProg get_inlined_code pc: 1067 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1069 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27663 = (object)*(((s1_ptr)_2)->base + _sym_54113);
        // SubProg get_inlined_code pc: 1073 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1075 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27663);
        _27664 = (object)*(((s1_ptr)_2)->base + 15);
        _27663 = NOVALUE;
        // SubProg get_inlined_code pc: 1079 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1081 op: EQUALS (3)
        if (IS_ATOM_INT(_27664)) {
            _27665 = (_27664 == _53sequence_type_46328);
        }
        else {
            _27665 = binary_op(EQUALS, _27664, _53sequence_type_46328);
        }
        _27664 = NOVALUE;
        // SubProg get_inlined_code pc: 1085 op: SC2_AND (142)
        if (IS_ATOM_INT(_27665))
        _27662 = (_27665 != 0);
        else
        _27662 = DBL_PTR(_27665)->dbl != 0.0;
        // SubProg get_inlined_code pc: 1088 op: NOP1 (159)
L26: // addr: 1089 pc: 1088 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1089 op: SC2_OR (144)
        _27660 = (_27662 != 0);
        // SubProg get_inlined_code pc: 1092 op: NOP1 (159)
L25: // addr: 1093 pc: 1092 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1093 op: SC1_OR_IF (147)
        if (_27660 != 0) {
            goto L27; // [1093] 1141
        }
        // SubProg get_inlined_code pc: 1097 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1099 op: EQUALS (3)
        _27667 = (_op_54104 == 101);
        // SubProg get_inlined_code pc: 1103 op: SC1_AND (141)
        if (_27667 == 0) {
            DeRef(_27668);
            _27668 = 0;
            goto L28; // [1103] 1136
        }
        // SubProg get_inlined_code pc: 1107 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27669 = (object)*(((s1_ptr)_2)->base + _sym_54113);
        // SubProg get_inlined_code pc: 1113 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1115 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27669);
        _27670 = (object)*(((s1_ptr)_2)->base + 15);
        _27669 = NOVALUE;
        // SubProg get_inlined_code pc: 1119 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1121 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1123 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _53integer_type_46330;
        ((intptr_t *)_2)[2] = _53atom_type_46326;
        _27671 = MAKE_SEQ(_1);
        // SubProg get_inlined_code pc: 1127 op: FIND_FROM (176)
        _27672 = find_from(_27670, _27671, 1);
        _27670 = NOVALUE;
        DeRefDS(_27671);
        _27671 = NOVALUE;
        // SubProg get_inlined_code pc: 1132 op: SC2_AND (142)
        _27668 = (_27672 != 0);
        // SubProg get_inlined_code pc: 1135 op: NOP1 (159)
L28: // addr: 1136 pc: 1135 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1136 op: NOP1 (159)
        // SubProg get_inlined_code pc: 1137 op: IF (20)
        if (_27668 == 0)
        {
            _27668 = NOVALUE;
            goto L29; // [1137] 1155
        }
        else{
            _27668 = NOVALUE;
        }
        // SubProg get_inlined_code pc: 1140 op: NOP1 (159)
L27: // addr: 1141 pc: 1140 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1141 op: STARTLINE (58)

        /** inline.e:834							replace_code( {}, check_pc, check_pc+1 )*/
        // SubProg get_inlined_code pc: 1143 op: PLUS1 (93)
        _27673 = _check_pc_54100 + 1;
        if (_27673 > MAXINT){
            _27673 = NewDouble((eudouble)_27673);
        }
        // SubProg get_inlined_code pc: 1147 op: PROC (27)
        RefDS(_21958);
        _66replace_code(_21958, _check_pc_54100, _27673);
        _27673 = NOVALUE;
        // SubProg get_inlined_code pc: 1152 op: ELSE (23)
        goto L22; // [1152] 1172
        // SubProg get_inlined_code pc: 1154 op: NOP1 (159)
L29: // addr: 1155 pc: 1154 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1155 op: STARTLINE (58)

        /** inline.e:837							check_pc += 2*/
        // SubProg get_inlined_code pc: 1157 op: PLUS_I (115)
        _check_pc_54100 = _check_pc_54100 + 2;
        // SubProg get_inlined_code pc: 1161 op: NOP1 (159)
        // SubProg get_inlined_code pc: 1162 op: ELSE (23)
        goto L22; // [1162] 1172
        // SubProg get_inlined_code pc: 1164 op: NOP1 (159)
L23: // addr: 1165 pc: 1164 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1165 op: STARTLINE (58)

        /** inline.e:841						check_pc += 2*/
        // SubProg get_inlined_code pc: 1167 op: PLUS_I (115)
        _check_pc_54100 = _check_pc_54100 + 2;
        // SubProg get_inlined_code pc: 1171 op: NOP1 (159)
L22: // addr: 1172 pc: 1171 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1172 op: STARTLINE (58)

        /** inline.e:843					continue*/
        // SubProg get_inlined_code pc: 1174 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sym_54113
        // SubProg get_inlined_code pc: 1176 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54104
        // SubProg get_inlined_code pc: 1178 op: ELSE (23)
        goto L1A; // [1178] 847
        // SubProg get_inlined_code pc: 1180 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sym_54113
        // SubProg get_inlined_code pc: 1182 op: STARTLINE (58)

        /** inline.e:844				case STARTLINE then*/
        // SubProg get_inlined_code pc: 1184 op: CASE (186)
        case 58:
        // SubProg get_inlined_code pc: 1186 op: STARTLINE (58)

        /** inline.e:845					check_pc += 2*/
        // SubProg get_inlined_code pc: 1188 op: PLUS_I (115)
        _check_pc_54100 = _check_pc_54100 + 2;
        // SubProg get_inlined_code pc: 1192 op: STARTLINE (58)

        /** inline.e:846					continue*/
        // SubProg get_inlined_code pc: 1194 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54104
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

// block var op_54104
        // SubProg get_inlined_code pc: 1206 op: EXIT (61)
        goto L1B; // [1206] 1216
        // SubProg get_inlined_code pc: 1208 op: NOPSWITCH (187)
    ;}    // SubProg get_inlined_code pc: 1209 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var op_54104
    // SubProg get_inlined_code pc: 1211 op: STARTLINE (58)

    /** inline.e:851		end while*/
    // SubProg get_inlined_code pc: 1213 op: ENDWHILE (22)
    goto L1A; // [1213] 847
    // SubProg get_inlined_code pc: 1215 op: NOP1 (159)
L1B: // addr: 1216 pc: 1215 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 1216 op: STARTLINE (58)

    /** inline.e:853		for pc = 1 to length( inline_code ) do*/
    // SubProg get_inlined_code pc: 1218 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1220 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27677 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27677 = 1;
    }
    // SubProg get_inlined_code pc: 1223 op: FOR_I (125)
    {
        object _pc_54191;
        _pc_54191 = 1;
L2A: // addr: 1230 pc: 1223 sub: 53915 op: 125
        if (_pc_54191 > _27677){
            goto L2B; // [1223] 1420
        }
        // SubProg get_inlined_code pc: 1230 op: STARTLINE (58)

        /** inline.e:854			if sequence( inline_code[pc] ) then*/
        // SubProg get_inlined_code pc: 1232 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1234 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27678 = (object)*(((s1_ptr)_2)->base + _pc_54191);
        // SubProg get_inlined_code pc: 1238 op: IS_A_SEQUENCE (68)
        _27679 = IS_SEQUENCE(_27678);
        _27678 = NOVALUE;
        // SubProg get_inlined_code pc: 1241 op: IF (20)
        if (_27679 == 0)
        {
            _27679 = NOVALUE;
            goto L2C; // [1241] 1411
        }
        else{
            _27679 = NOVALUE;
        }
        // SubProg get_inlined_code pc: 1244 op: STARTLINE (58)

        /** inline.e:855				integer inline_type = inline_code[pc][1]*/
        // SubProg get_inlined_code pc: 1246 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_inlined_code pc: 1248 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66inline_code_52969);
        _27680 = (object)*(((s1_ptr)_2)->base + _pc_54191);
        // SubProg get_inlined_code pc: 1252 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27680);
        _inline_type_54196 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_inline_type_54196)){
            _inline_type_54196 = (object)DBL_PTR(_inline_type_54196)->dbl;
        }
        _27680 = NOVALUE;
        // SubProg get_inlined_code pc: 1258 op: STARTLINE (58)

        /** inline.e:856				switch inline_type do*/
        // SubProg get_inlined_code pc: 1260 op: SWITCH_I (193)
        _0 = _inline_type_54196;
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
            _2 = (object)SEQ_PTR(_66inline_code_52969);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52969 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54191);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5CurrentSub_12485;
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
            _66replace_var(_pc_54191);
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
            _66replace_temp(_pc_54191);
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
            _0 = _replace_param_1__tmp_at1341_54207;
            _replace_param_1__tmp_at1341_54207 = _66get_param_sym(_pc_54191);
            DeRef(_0);
            // SubProg get_inlined_code pc: 1321 op: ASSIGN_SUBS (16)
            Ref(_replace_param_1__tmp_at1341_54207);
            _2 = (object)SEQ_PTR(_66inline_code_52969);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52969 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54191);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _replace_param_1__tmp_at1341_54207;
            DeRef(_1);
            // SubProg get_inlined_code pc: 1325 op: STARTLINE (58)

            /** inline.e:587	end procedure*/
            // SubProg get_inlined_code pc: 1327 op: ELSE (23)
            goto L2E; // [1327] 1330
            // SubProg get_inlined_code pc: 1329 op: NOP1 (159)
L2E: // addr: 1330 pc: 1329 sub: 53915 op: 159
            // SubProg get_inlined_code pc: 1330 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-replace_param from get_inlined_code @ 1341

// block var replace_param_1__tmp_at1341_54207
            DeRef(_replace_param_1__tmp_at1341_54207);
            _replace_param_1__tmp_at1341_54207 = NOVALUE;
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
            _2 = (object)SEQ_PTR(_66inline_code_52969);
            _27684 = (object)*(((s1_ptr)_2)->base + _pc_54191);
            // SubProg get_inlined_code pc: 1350 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_27684);
            _27685 = (object)*(((s1_ptr)_2)->base + 2);
            _27684 = NOVALUE;
            // SubProg get_inlined_code pc: 1354 op: PLUS (11)
            if (IS_ATOM_INT(_27685)) {
                _27686 = _66inline_start_52981 + _27685;
                if ((object)((uintptr_t)_27686 + (uintptr_t)HIGH_BITS) >= 0){
                    _27686 = NewDouble((eudouble)_27686);
                }
            }
            else {
                _27686 = binary_op(PLUS, _66inline_start_52981, _27685);
            }
            _27685 = NOVALUE;
            // SubProg get_inlined_code pc: 1358 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_66inline_code_52969);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52969 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54191);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _27686;
            if( _1 != _27686 ){
                DeRef(_1);
            }
            _27686 = NOVALUE;
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
            _2 = (object)SEQ_PTR(_66inline_code_52969);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _66inline_code_52969 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _pc_54191);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _66inline_target_52976;
            DeRef(_1);
            // SubProg get_inlined_code pc: 1378 op: STARTLINE (58)

            /** inline.e:874						add_inline_target( pc + inline_start )*/
            // SubProg get_inlined_code pc: 1380 op: GLOBAL_INIT_CHECK (109)
            // SubProg get_inlined_code pc: 1382 op: PLUS (11)
            _27687 = _pc_54191 + _66inline_start_52981;
            if ((object)((uintptr_t)_27687 + (uintptr_t)HIGH_BITS) >= 0){
                _27687 = NewDouble((eudouble)_27687);
            }
            // SubProg get_inlined_code pc: 1386 op: PROC (27)
            _45add_inline_target(_27687);
            _27687 = NOVALUE;
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
            ((intptr_t*)_2)[1] = _inline_type_54196;
            _27688 = MAKE_SEQ(_1);
            // SubProg get_inlined_code pc: 1405 op: PROC (27)
            _49InternalErr(265, _27688);
            _27688 = NOVALUE;
            // SubProg get_inlined_code pc: 1409 op: NOPSWITCH (187)
        ;}L2D: // addr: 1410 pc: 1409 sub: 53915 op: 187
        // SubProg get_inlined_code pc: 1410 op: NOP1 (159)
L2C: // addr: 1411 pc: 1410 sub: 53915 op: 159
        // SubProg get_inlined_code pc: 1411 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var inline_type_54196
        // SubProg get_inlined_code pc: 1413 op: STARTLINE (58)

        /** inline.e:881		end for*/
        // SubProg get_inlined_code pc: 1415 op: ENDFOR_INT_UP1 (54)
        _pc_54191 = _pc_54191 + 1;
        goto L2A; // [1415] 1230
L2B: // addr: 1420 pc: 1415 sub: 53915 op: 54
        ;
    }
    // SubProg get_inlined_code pc: 1420 op: STARTLINE (58)

    /** inline.e:883		for i = 1 to length(backpatches) do*/
    // SubProg get_inlined_code pc: 1422 op: LENGTH (42)
    if (IS_SEQUENCE(_backpatches_53939)){
            _27689 = SEQ_PTR(_backpatches_53939)->length;
    }
    else {
        _27689 = 1;
    }
    // SubProg get_inlined_code pc: 1425 op: FOR_I (125)
    {
        object _i_54219;
        _i_54219 = 1;
L2F: // addr: 1432 pc: 1425 sub: 53915 op: 125
        if (_i_54219 > _27689){
            goto L30; // [1425] 1448
        }
        // SubProg get_inlined_code pc: 1432 op: STARTLINE (58)

        /** inline.e:884			fixup_special_op( backpatches[i] )*/
        // SubProg get_inlined_code pc: 1434 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_backpatches_53939);
        _27690 = (object)*(((s1_ptr)_2)->base + _i_54219);
        // SubProg get_inlined_code pc: 1438 op: PROC (27)
        Ref(_27690);
        _66fixup_special_op(_27690);
        _27690 = NOVALUE;
        // SubProg get_inlined_code pc: 1441 op: STARTLINE (58)

        /** inline.e:885		end for*/
        // SubProg get_inlined_code pc: 1443 op: ENDFOR_INT_UP1 (54)
        _i_54219 = _i_54219 + 1;
        goto L2F; // [1443] 1432
L30: // addr: 1448 pc: 1443 sub: 53915 op: 54
        ;
    }
    // SubProg get_inlined_code pc: 1448 op: STARTLINE (58)

    /** inline.e:887		epilog &= End_inline_block( EXIT_BLOCK )*/
    // SubProg get_inlined_code pc: 1450 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1452 op: PROC (27)
    _27691 = _64End_inline_block(206);
    // SubProg get_inlined_code pc: 1456 op: CONCAT (15)
    if (IS_SEQUENCE(_epilog_53946) && IS_ATOM(_27691)) {
        Ref(_27691);
        Append(&_epilog_53946, _epilog_53946, _27691);
    }
    else if (IS_ATOM(_epilog_53946) && IS_SEQUENCE(_27691)) {
    }
    else {
        Concat((object_ptr)&_epilog_53946, _epilog_53946, _27691);
    }
    DeRef(_27691);
    _27691 = NOVALUE;
    // SubProg get_inlined_code pc: 1460 op: STARTLINE (58)

    /** inline.e:889		if is_proc then*/
    // SubProg get_inlined_code pc: 1462 op: IF (20)
    if (_is_proc_53921 == 0)
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
L31: // addr: 1472 pc: 1471 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 1472 op: STARTLINE (58)

    /** inline.e:892			if not deferred then*/
    // SubProg get_inlined_code pc: 1474 op: NOT_IFW (108)
    if (_deferred_53920 != 0)
    goto L33; // [1474] 1489
    // SubProg get_inlined_code pc: 1477 op: STARTLINE (58)

    /** inline.e:893				Push( inline_target )*/
    // SubProg get_inlined_code pc: 1479 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1481 op: PROC (27)
    _45Push(_66inline_target_52976);
    // SubProg get_inlined_code pc: 1484 op: STARTLINE (58)

    /** inline.e:894				inlined_function()*/
    // SubProg get_inlined_code pc: 1486 op: PROC (27)
    _45inlined_function();
    // SubProg get_inlined_code pc: 1488 op: NOP1 (159)
L33: // addr: 1489 pc: 1488 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 1489 op: STARTLINE (58)

    /** inline.e:897			if final_target then*/
    // SubProg get_inlined_code pc: 1491 op: IF (20)
    if (_final_target_54045 == 0)
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
    ((intptr_t*)_2)[2] = _66inline_target_52976;
    ((intptr_t*)_2)[3] = _final_target_54045;
    _27694 = MAKE_SEQ(_1);
    // SubProg get_inlined_code pc: 1506 op: CONCAT (15)
    Concat((object_ptr)&_epilog_53946, _epilog_53946, _27694);
    DeRefDS(_27694);
    _27694 = NOVALUE;
    // SubProg get_inlined_code pc: 1510 op: STARTLINE (58)

    /** inline.e:899				emit_temp( final_target, NEW_REFERENCE )*/
    // SubProg get_inlined_code pc: 1512 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1514 op: PROC (27)
    _45emit_temp(_final_target_54045, 1);
    // SubProg get_inlined_code pc: 1518 op: ELSE (23)
    goto L35; // [1518] 1594
    // SubProg get_inlined_code pc: 1520 op: NOP1 (159)
L34: // addr: 1521 pc: 1520 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 1521 op: STARTLINE (58)

    /** inline.e:905				emit_temp( inline_target, NEW_REFERENCE )*/
    // SubProg get_inlined_code pc: 1523 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1525 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1527 op: PROC (27)
    _45emit_temp(_66inline_target_52976, 1);
    // SubProg get_inlined_code pc: 1531 op: STARTLINE (58)

    /** inline.e:906				if not TRANSLATE then*/
    // SubProg get_inlined_code pc: 1533 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1535 op: NOT_IFW (108)
    if (_5TRANSLATE_12097 != 0)
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
    ((intptr_t*)_2)[4] = _66inline_target_52976;
    _27697 = MAKE_SEQ(_1);
    // SubProg get_inlined_code pc: 1553 op: CONCAT (15)
    Concat((object_ptr)&_epilog_53946, _epilog_53946, _27697);
    DeRefDS(_27697);
    _27697 = NOVALUE;
    // SubProg get_inlined_code pc: 1557 op: STARTLINE (58)

    /** inline.e:908					epilog[$-2] = length(inline_code) + length(epilog) + inline_start + 1*/
    // SubProg get_inlined_code pc: 1559 op: LENGTH (42)
    if (IS_SEQUENCE(_epilog_53946)){
            _27699 = SEQ_PTR(_epilog_53946)->length;
    }
    else {
        _27699 = 1;
    }
    // SubProg get_inlined_code pc: 1562 op: MINUS (10)
    _27700 = _27699 - 2;
    _27699 = NOVALUE;
    // SubProg get_inlined_code pc: 1566 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1568 op: LENGTH (42)
    if (IS_SEQUENCE(_66inline_code_52969)){
            _27701 = SEQ_PTR(_66inline_code_52969)->length;
    }
    else {
        _27701 = 1;
    }
    // SubProg get_inlined_code pc: 1571 op: LENGTH (42)
    if (IS_SEQUENCE(_epilog_53946)){
            _27702 = SEQ_PTR(_epilog_53946)->length;
    }
    else {
        _27702 = 1;
    }
    // SubProg get_inlined_code pc: 1574 op: PLUS (11)
    _27703 = _27701 + _27702;
    if ((object)((uintptr_t)_27703 + (uintptr_t)HIGH_BITS) >= 0){
        _27703 = NewDouble((eudouble)_27703);
    }
    _27701 = NOVALUE;
    _27702 = NOVALUE;
    // SubProg get_inlined_code pc: 1578 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1580 op: PLUS (11)
    if (IS_ATOM_INT(_27703)) {
        _27704 = _27703 + _66inline_start_52981;
        if ((object)((uintptr_t)_27704 + (uintptr_t)HIGH_BITS) >= 0){
            _27704 = NewDouble((eudouble)_27704);
        }
    }
    else {
        _27704 = NewDouble(DBL_PTR(_27703)->dbl + (eudouble)_66inline_start_52981);
    }
    DeRef(_27703);
    _27703 = NOVALUE;
    // SubProg get_inlined_code pc: 1584 op: PLUS1 (93)
    if (IS_ATOM_INT(_27704)) {
        _27705 = _27704 + 1;
        if (_27705 > MAXINT){
            _27705 = NewDouble((eudouble)_27705);
        }
    }
    else
    _27705 = binary_op(PLUS, 1, _27704);
    DeRef(_27704);
    _27704 = NOVALUE;
    // SubProg get_inlined_code pc: 1588 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_epilog_53946);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _epilog_53946 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _27700);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27705;
    if( _1 != _27705 ){
        DeRef(_1);
    }
    _27705 = NOVALUE;
    // SubProg get_inlined_code pc: 1592 op: NOP1 (159)
L36: // addr: 1593 pc: 1592 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 1593 op: NOP1 (159)
L35: // addr: 1594 pc: 1593 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 1594 op: NOP1 (159)
L32: // addr: 1595 pc: 1594 sub: 53915 op: 159
    // SubProg get_inlined_code pc: 1595 op: STARTLINE (58)

    /** inline.e:914		return prolog & inline_code & epilog*/
    // SubProg get_inlined_code pc: 1597 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_inlined_code pc: 1599 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _epilog_53946;
        concat_list[1] = _66inline_code_52969;
        concat_list[2] = _prolog_53945;
        Concat_N((object_ptr)&_27706, concat_list, 3);
    }
    // SubProg get_inlined_code pc: 1605 op: RETURNF (28)

// Exiting block BLOCK: get_inlined_code

// block var sub_53918

// block var start_53919

// block var deferred_53920

// block var is_proc_53921

// block var backpatches_53939
    DeRef(_backpatches_53939);

// block var prolog_53945
    DeRefDSi(_prolog_53945);

// block var epilog_53946
    DeRefDS(_epilog_53946);

// block var s_53962

// block var last_sym_53985

// block var int_sym_54012

// block var final_target_54045

// block var check_pc_54100
    DeRef(_27659);
    _27659 = NOVALUE;
    DeRef(_27581);
    _27581 = NOVALUE;
    _27589 = NOVALUE;
    DeRef(_27665);
    _27665 = NOVALUE;
    _27593 = NOVALUE;
    DeRef(_27661);
    _27661 = NOVALUE;
    DeRef(_27610);
    _27610 = NOVALUE;
    _27576 = NOVALUE;
    DeRef(_27667);
    _27667 = NOVALUE;
    DeRef(_27655);
    _27655 = NOVALUE;
    DeRef(_27700);
    _27700 = NOVALUE;
    DeRef(_27613);
    _27613 = NOVALUE;
    DeRef(_27584);
    _27584 = NOVALUE;
    return _27706;
    // SubProg get_inlined_code pc: 1609 op: BADRETURNF (43)
    ;
}


void _66defer_call()
{
    object _defer_54259 = NOVALUE;
    object _27709 = NOVALUE; // 54264 27709
    object _27708 = NOVALUE; // 54263 27708
// skipping _27707  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defer_call pc: 1 op: STARTLINE (58)

    /** inline.e:918		integer defer = find( inline_sub, deferred_inline_decisions )*/
    // SubProg defer_call pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg defer_call pc: 7 op: FIND_FROM (176)
    _defer_54259 = find_from(_66inline_sub_52983, _66deferred_inline_decisions_52985, 1);
    // SubProg defer_call pc: 12 op: STARTLINE (58)

    /** inline.e:919		if defer then*/
    // SubProg defer_call pc: 14 op: IF (20)
    if (_defer_54259 == 0)
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
    _2 = (object)SEQ_PTR(_66deferred_inline_calls_52986);
    _27708 = (object)*(((s1_ptr)_2)->base + _defer_54259);
    // SubProg defer_call pc: 27 op: CONCAT (15)
    if (IS_SEQUENCE(_27708) && IS_ATOM(_5CurrentSub_12485)) {
        Append(&_27709, _27708, _5CurrentSub_12485);
    }
    else if (IS_ATOM(_27708) && IS_SEQUENCE(_5CurrentSub_12485)) {
    }
    else {
        Concat((object_ptr)&_27709, _27708, _5CurrentSub_12485);
        _27708 = NOVALUE;
    }
    _27708 = NOVALUE;
    // SubProg defer_call pc: 31 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_66deferred_inline_calls_52986);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66deferred_inline_calls_52986 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _defer_54259);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _27709;
    if( _1 != _27709 ){
        DeRef(_1);
    }
    _27709 = NOVALUE;
    // SubProg defer_call pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 54257 op: 159
    // SubProg defer_call pc: 36 op: STARTLINE (58)

    /** inline.e:923	end procedure*/
    // SubProg defer_call pc: 38 op: RETURNP (29)

// Exiting block BLOCK: defer_call

// block var defer_54259
    return;
    // SubProg defer_call pc: 41 op: BADRETURNF (43)
    ;
}


void _66emit_or_inline()
{
    object _sub_54268 = NOVALUE;
    object _code_54299 = NOVALUE;
// skipping _27722  name type: 0
    object _27721 = NOVALUE; // 54301 27721
    object _27720 = NOVALUE; // 54296 27720
// skipping _27719  name type: 0
    object _27718 = NOVALUE; // 54293 27718
    object _27717 = NOVALUE; // 54292 27717
    object _27716 = NOVALUE; // 54290 27716
// skipping _27715  name type: 0
    object _27714 = NOVALUE; // 54281 27714
    object _27713 = NOVALUE; // 54280 27713
    object _27712 = NOVALUE; // 54278 27712
    object _27711 = NOVALUE; // 54274 27711
    object _27710 = NOVALUE; // 54272 27710
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_or_inline pc: 1 op: STARTLINE (58)

    /** inline.e:928		symtab_index sub = op_info1*/
    // SubProg emit_or_inline pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 5 op: ASSIGN (18)
    _sub_54268 = _45op_info1_50451;
    // SubProg emit_or_inline pc: 8 op: INTEGER_CHECK (96)
    // SubProg emit_or_inline pc: 10 op: STARTLINE (58)

    /** inline.e:929		inline_sub = sub*/
    // SubProg emit_or_inline pc: 12 op: ASSIGN (18)
    _66inline_sub_52983 = _sub_54268;
    // SubProg emit_or_inline pc: 15 op: INTEGER_CHECK (96)
    // SubProg emit_or_inline pc: 17 op: STARTLINE (58)

    /** inline.e:931		if SymTab[sub][S_DEPRECATED] then*/
    // SubProg emit_or_inline pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27710 = (object)*(((s1_ptr)_2)->base + _sub_54268);
    // SubProg emit_or_inline pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27710);
    _27711 = (object)*(((s1_ptr)_2)->base + 30);
    _27710 = NOVALUE;
    // SubProg emit_or_inline pc: 31 op: IF (20)
    if (_27711 == 0) {
        _27711 = NOVALUE;
        goto L1; // [31] 60
    }
    else {
        if (!IS_ATOM_INT(_27711) && DBL_PTR(_27711)->dbl == 0.0){
            _27711 = NOVALUE;
            goto L1; // [31] 60
        }
        _27711 = NOVALUE;
    }
    _27711 = NOVALUE;
    // SubProg emit_or_inline pc: 34 op: STARTLINE (58)

    /** inline.e:932			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    // SubProg emit_or_inline pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 40 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27712 = (object)*(((s1_ptr)_2)->base + _sub_54268);
    // SubProg emit_or_inline pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 46 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27712);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _27713 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _27713 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _27712 = NOVALUE;
    // SubProg emit_or_inline pc: 50 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_27713);
    ((intptr_t*)_2)[1] = _27713;
    _27714 = MAKE_SEQ(_1);
    _27713 = NOVALUE;
    // SubProg emit_or_inline pc: 54 op: PROC (27)
    _49Warning(327, 16384, _27714);
    _27714 = NOVALUE;
    // SubProg emit_or_inline pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 54265 op: 159
    // SubProg emit_or_inline pc: 60 op: STARTLINE (58)

    /** inline.e:935		if Parser_mode != PAM_NORMAL then*/
    // SubProg emit_or_inline pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 66 op: NOTEQ_IFW (105)
    if (_5Parser_mode_12583 == 0)
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

// block var sub_54268

// block var code_54299
    DeRef(_code_54299);
    return;
    // SubProg emit_or_inline pc: 82 op: ELSE (23)
    goto L3; // [82] 133
    // SubProg emit_or_inline pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 54265 op: 159
    // SubProg emit_or_inline pc: 85 op: STARTLINE (58)

    /** inline.e:941		elsif atom( SymTab[sub][S_INLINE] ) or has_forward_params(sub) then*/
    // SubProg emit_or_inline pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _27716 = (object)*(((s1_ptr)_2)->base + _sub_54268);
    // SubProg emit_or_inline pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27716);
    _27717 = (object)*(((s1_ptr)_2)->base + 29);
    _27716 = NOVALUE;
    // SubProg emit_or_inline pc: 99 op: IS_AN_ATOM (67)
    _27718 = IS_ATOM(_27717);
    _27717 = NOVALUE;
    // SubProg emit_or_inline pc: 102 op: SC1_OR_IF (147)
    if (_27718 != 0) {
        goto L4; // [102] 115
    }
    // SubProg emit_or_inline pc: 106 op: PROC (27)
    _27720 = _45has_forward_params(_sub_54268);
    // SubProg emit_or_inline pc: 110 op: NOP1 (159)
    // SubProg emit_or_inline pc: 111 op: IF (20)
    if (_27720 == 0) {
        DeRef(_27720);
        _27720 = NOVALUE;
        goto L5; // [111] 132
    }
    else {
        if (!IS_ATOM_INT(_27720) && DBL_PTR(_27720)->dbl == 0.0){
            DeRef(_27720);
            _27720 = NOVALUE;
            goto L5; // [111] 132
        }
        DeRef(_27720);
        _27720 = NOVALUE;
    }
    DeRef(_27720);
    _27720 = NOVALUE;
    // SubProg emit_or_inline pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 54265 op: 159
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

// block var sub_54268

// block var code_54299
    DeRef(_code_54299);
    return;
    // SubProg emit_or_inline pc: 131 op: NOP1 (159)
L5: // addr: 132 pc: 131 sub: 54265 op: 159
    // SubProg emit_or_inline pc: 132 op: NOP1 (159)
L3: // addr: 133 pc: 132 sub: 54265 op: 159
    // SubProg emit_or_inline pc: 133 op: STARTLINE (58)

    /** inline.e:947		sequence code = get_inlined_code( sub, length(Code) )*/
    // SubProg emit_or_inline pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_or_inline pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_5Code_12566)){
            _27721 = SEQ_PTR(_5Code_12566)->length;
    }
    else {
        _27721 = 1;
    }
    // SubProg emit_or_inline pc: 140 op: PROC (27)
    _0 = _code_54299;
    _code_54299 = _66get_inlined_code(_sub_54268, _27721, 0);
    DeRef(_0);
    _27721 = NOVALUE;
    // SubProg emit_or_inline pc: 146 op: SEQUENCE_CHECK (97)
    // SubProg emit_or_inline pc: 148 op: STARTLINE (58)

    /** inline.e:948		emit_inline( code )*/
    // SubProg emit_or_inline pc: 150 op: PROC (27)
    RefDS(_code_54299);
    _45emit_inline(_code_54299);
    // SubProg emit_or_inline pc: 153 op: STARTLINE (58)

    /** inline.e:949		clear_last()*/
    // SubProg emit_or_inline pc: 155 op: PROC (27)
    _45clear_last();
    // SubProg emit_or_inline pc: 157 op: STARTLINE (58)

    /** inline.e:951	end procedure*/
    // SubProg emit_or_inline pc: 159 op: RETURNP (29)

// Exiting block BLOCK: emit_or_inline

// block var sub_54268

// block var code_54299
    DeRefDS(_code_54299);
    return;
    // SubProg emit_or_inline pc: 162 op: BADRETURNF (43)
    ;
}


void _66inline_deferred_calls()
{
    object _sub_54313 = NOVALUE;
    object _ix_54325 = NOVALUE;
    object _calling_sub_54327 = NOVALUE;
    object _code_54349 = NOVALUE;
    object _calls_54350 = NOVALUE;
    object _is_func_54354 = NOVALUE;
    object _offset_54361 = NOVALUE;
    object _op_54372 = NOVALUE;
    object _size_54375 = NOVALUE;
// skipping _27784  name type: 0
    object _27783 = NOVALUE; // 54416 27783
// skipping _27782  name type: 0
    object _27781 = NOVALUE; // 54411 27781
// skipping _27780  name type: 0
    object _27779 = NOVALUE; // 54408 27779
    object _27778 = NOVALUE; // 54407 27778
    object _27777 = NOVALUE; // 54406 27777
// skipping _27776  name type: 0
    object _27775 = NOVALUE; // 54404 27775
    object _27774 = NOVALUE; // 54403 27774
    object _27773 = NOVALUE; // 54402 27773
    object _27772 = NOVALUE; // 54401 27772
    object _27771 = NOVALUE; // 54400 27771
    object _27770 = NOVALUE; // 54397 27770
    object _27769 = NOVALUE; // 54396 27769
    object _27768 = NOVALUE; // 54395 27768
    object _27767 = NOVALUE; // 54394 27767
    object _27766 = NOVALUE; // 54393 27766
// skipping _27765  name type: 0
    object _27764 = NOVALUE; // 54390 27764
    object _27763 = NOVALUE; // 54389 27763
    object _27762 = NOVALUE; // 54388 27762
    object _27761 = NOVALUE; // 54386 27761
// skipping _27760  name type: 0
    object _27759 = NOVALUE; // 54382 27759
    object _27758 = NOVALUE; // 54381 27758
    object _27757 = NOVALUE; // 54380 27757
// skipping _27756  name type: 0
    object _27755 = NOVALUE; // 54376 27755
// skipping _27754  name type: 0
    object _27753 = NOVALUE; // 54373 27753
// skipping _27752  name type: 0
    object _27751 = NOVALUE; // 54370 27751
// skipping _27750  name type: 0
    object _27749 = NOVALUE; // 54368 27749
    object _27748 = NOVALUE; // 54367 27748
    object _27747 = NOVALUE; // 54366 27747
    object _27746 = NOVALUE; // 54364 27746
// skipping _27745  name type: 0
    object _27744 = NOVALUE; // 54358 27744
    object _27743 = NOVALUE; // 54356 27743
// skipping _27742  name type: 0
// skipping _27741  name type: 0
    object _27740 = NOVALUE; // 54346 27740
// skipping _27739  name type: 0
    object _27738 = NOVALUE; // 54342 27738
// skipping _27737  name type: 0
    object _27736 = NOVALUE; // 54338 27736
// skipping _27735  name type: 0
    object _27734 = NOVALUE; // 54333 27734
// skipping _27733  name type: 0
    object _27732 = NOVALUE; // 54328 27732
    object _27731 = NOVALUE; // 54324 27731
    object _27730 = NOVALUE; // 54323 27730
    object _27729 = NOVALUE; // 54320 27729
    object _27728 = NOVALUE; // 54319 27728
    object _27727 = NOVALUE; // 54317 27727
// skipping _27726  name type: 0
    object _27725 = NOVALUE; // 54312 27725
    object _27724 = NOVALUE; // 54311 27724
    object _27723 = NOVALUE; // 54309 27723
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg inline_deferred_calls pc: 1 op: STARTLINE (58)

    /** inline.e:957		deferred_inlining = 1*/
    // SubProg inline_deferred_calls pc: 3 op: ASSIGN_I (113)
    _66deferred_inlining_52979 = 1;
    // SubProg inline_deferred_calls pc: 6 op: STARTLINE (58)

    /** inline.e:958		for i = 1 to length( deferred_inline_decisions ) do*/
    // SubProg inline_deferred_calls pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg inline_deferred_calls pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_66deferred_inline_decisions_52985)){
            _27723 = SEQ_PTR(_66deferred_inline_decisions_52985)->length;
    }
    else {
        _27723 = 1;
    }
    // SubProg inline_deferred_calls pc: 13 op: FOR_I (125)
    {
        object _i_54308;
        _i_54308 = 1;
L1: // addr: 20 pc: 13 sub: 54305 op: 125
        if (_i_54308 > _27723){
            goto L2; // [13] 506
        }
        // SubProg inline_deferred_calls pc: 20 op: STARTLINE (58)

        /** inline.e:960			if length( deferred_inline_calls[i] ) then*/
        // SubProg inline_deferred_calls pc: 22 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66deferred_inline_calls_52986);
        _27724 = (object)*(((s1_ptr)_2)->base + _i_54308);
        // SubProg inline_deferred_calls pc: 28 op: LENGTH (42)
        if (IS_SEQUENCE(_27724)){
                _27725 = SEQ_PTR(_27724)->length;
        }
        else {
            _27725 = 1;
        }
        _27724 = NOVALUE;
        // SubProg inline_deferred_calls pc: 31 op: IF (20)
        if (_27725 == 0)
        {
            _27725 = NOVALUE;
            goto L3; // [31] 497
        }
        else{
            _27725 = NOVALUE;
        }
        // SubProg inline_deferred_calls pc: 34 op: STARTLINE (58)

        /** inline.e:962				integer sub = deferred_inline_decisions[i]*/
        // SubProg inline_deferred_calls pc: 36 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 38 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_66deferred_inline_decisions_52985);
        _sub_54313 = (object)*(((s1_ptr)_2)->base + _i_54308);
        // SubProg inline_deferred_calls pc: 42 op: STARTLINE (58)

        /** inline.e:963				check_inline( sub )*/
        // SubProg inline_deferred_calls pc: 44 op: PROC (27)
        _66check_inline(_sub_54313);
        // SubProg inline_deferred_calls pc: 47 op: STARTLINE (58)

        /** inline.e:964				if atom( SymTab[sub][S_INLINE] ) then*/
        // SubProg inline_deferred_calls pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 51 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _27727 = (object)*(((s1_ptr)_2)->base + _sub_54313);
        // SubProg inline_deferred_calls pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_27727);
        _27728 = (object)*(((s1_ptr)_2)->base + 29);
        _27727 = NOVALUE;
        // SubProg inline_deferred_calls pc: 61 op: IS_AN_ATOM (67)
        _27729 = IS_ATOM(_27728);
        _27728 = NOVALUE;
        // SubProg inline_deferred_calls pc: 64 op: IF (20)
        if (_27729 == 0)
        {
            _27729 = NOVALUE;
            goto L4; // [64] 74
        }
        else{
            _27729 = NOVALUE;
        }
        // SubProg inline_deferred_calls pc: 67 op: STARTLINE (58)

        /** inline.e:965					continue*/
        // SubProg inline_deferred_calls pc: 69 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sub_54313
        // SubProg inline_deferred_calls pc: 71 op: ELSE (23)
        goto L5; // [71] 501
        // SubProg inline_deferred_calls pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 54305 op: 159
        // SubProg inline_deferred_calls pc: 74 op: STARTLINE (58)

        /** inline.e:967				for cx = 1 to length( deferred_inline_calls[i] ) do*/
        // SubProg inline_deferred_calls pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg inline_deferred_calls pc: 78 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_66deferred_inline_calls_52986);
        _27730 = (object)*(((s1_ptr)_2)->base + _i_54308);
        // SubProg inline_deferred_calls pc: 82 op: LENGTH (42)
        if (IS_SEQUENCE(_27730)){
                _27731 = SEQ_PTR(_27730)->length;
        }
        else {
            _27731 = 1;
        }
        _27730 = NOVALUE;
        // SubProg inline_deferred_calls pc: 85 op: FOR_I (125)
        {
            object _cx_54322;
            _cx_54322 = 1;
L6: // addr: 92 pc: 85 sub: 54305 op: 125
            if (_cx_54322 > _27731){
                goto L7; // [85] 496
            }
            // SubProg inline_deferred_calls pc: 92 op: STARTLINE (58)

            /** inline.e:968					integer ix = 1*/
            // SubProg inline_deferred_calls pc: 94 op: ASSIGN_I (113)
            _ix_54325 = 1;
            // SubProg inline_deferred_calls pc: 97 op: STARTLINE (58)

            /** inline.e:969					symtab_index calling_sub = deferred_inline_calls[i][cx]*/
            // SubProg inline_deferred_calls pc: 99 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 101 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_66deferred_inline_calls_52986);
            _27732 = (object)*(((s1_ptr)_2)->base + _i_54308);
            // SubProg inline_deferred_calls pc: 105 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_27732);
            _calling_sub_54327 = (object)*(((s1_ptr)_2)->base + _cx_54322);
            if (!IS_ATOM_INT(_calling_sub_54327)){
                _calling_sub_54327 = (object)DBL_PTR(_calling_sub_54327)->dbl;
            }
            _27732 = NOVALUE;
            // SubProg inline_deferred_calls pc: 111 op: STARTLINE (58)

            /** inline.e:970					CurrentSub = calling_sub*/
            // SubProg inline_deferred_calls pc: 113 op: ASSIGN (18)
            _5CurrentSub_12485 = _calling_sub_54327;
            // SubProg inline_deferred_calls pc: 116 op: INTEGER_CHECK (96)
            // SubProg inline_deferred_calls pc: 118 op: STARTLINE (58)

            /** inline.e:971					Code = SymTab[calling_sub][S_CODE]*/
            // SubProg inline_deferred_calls pc: 120 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 122 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _27734 = (object)*(((s1_ptr)_2)->base + _calling_sub_54327);
            // SubProg inline_deferred_calls pc: 126 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 128 op: RHS_SUBS_CHECK (92)
            DeRef(_5Code_12566);
            _2 = (object)SEQ_PTR(_27734);
            if (!IS_ATOM_INT(_5S_CODE_12144)){
                _5Code_12566 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
            }
            else{
                _5Code_12566 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
            }
            Ref(_5Code_12566);
            _27734 = NOVALUE;
            // SubProg inline_deferred_calls pc: 132 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 134 op: STARTLINE (58)

            /** inline.e:972					LineTable = SymTab[calling_sub][S_LINETAB]*/
            // SubProg inline_deferred_calls pc: 136 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 138 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _27736 = (object)*(((s1_ptr)_2)->base + _calling_sub_54327);
            // SubProg inline_deferred_calls pc: 142 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 144 op: RHS_SUBS_CHECK (92)
            DeRef(_5LineTable_12567);
            _2 = (object)SEQ_PTR(_27736);
            if (!IS_ATOM_INT(_5S_LINETAB_12167)){
                _5LineTable_12567 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
            }
            else{
                _5LineTable_12567 = (object)*(((s1_ptr)_2)->base + _5S_LINETAB_12167);
            }
            Ref(_5LineTable_12567);
            _27736 = NOVALUE;
            // SubProg inline_deferred_calls pc: 148 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 150 op: STARTLINE (58)

            /** inline.e:973					SymTab[calling_sub][S_CODE] = 0*/
            // SubProg inline_deferred_calls pc: 152 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 154 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _7SymTab_11389 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54327 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 159 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 161 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_5S_CODE_12144))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _5S_CODE_12144);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 0;
            DeRef(_1);
            _27738 = NOVALUE;
            // SubProg inline_deferred_calls pc: 165 op: STARTLINE (58)

            /** inline.e:974					SymTab[calling_sub][S_LINETAB] = 0*/
            // SubProg inline_deferred_calls pc: 167 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 169 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _7SymTab_11389 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54327 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 174 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 176 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_5S_LINETAB_12167))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _5S_LINETAB_12167);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 0;
            DeRef(_1);
            _27740 = NOVALUE;
            // SubProg inline_deferred_calls pc: 180 op: STARTLINE (58)

            /** inline.e:975					sequence code = {}*/
            // SubProg inline_deferred_calls pc: 182 op: ASSIGN (18)
            RefDS(_21958);
            DeRef(_code_54349);
            _code_54349 = _21958;
            // SubProg inline_deferred_calls pc: 185 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 187 op: STARTLINE (58)

            /** inline.e:977					sequence calls = find_ops( 1, PROC )*/
            // SubProg inline_deferred_calls pc: 189 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 191 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 193 op: PROC (27)
            RefDS(_5Code_12566);
            _0 = _calls_54350;
            _calls_54350 = _65find_ops(1, 27, _5Code_12566);
            DeRef(_0);
            // SubProg inline_deferred_calls pc: 199 op: SEQUENCE_CHECK (97)
            // SubProg inline_deferred_calls pc: 201 op: STARTLINE (58)

            /** inline.e:978					integer is_func = SymTab[sub][S_TOKEN] != PROC */
            // SubProg inline_deferred_calls pc: 203 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 205 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _27743 = (object)*(((s1_ptr)_2)->base + _sub_54313);
            // SubProg inline_deferred_calls pc: 209 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 211 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_27743);
            if (!IS_ATOM_INT(_5S_TOKEN_12137)){
                _27744 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
            }
            else{
                _27744 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
            }
            _27743 = NOVALUE;
            // SubProg inline_deferred_calls pc: 215 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 217 op: NOTEQ (4)
            if (IS_ATOM_INT(_27744)) {
                _is_func_54354 = (_27744 != 27);
            }
            else {
                _is_func_54354 = binary_op(NOTEQ, _27744, 27);
            }
            _27744 = NOVALUE;
            // SubProg inline_deferred_calls pc: 221 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_is_func_54354)) {
                _1 = (object)(DBL_PTR(_is_func_54354)->dbl);
                DeRefDS(_is_func_54354);
                _is_func_54354 = _1;
            }
            // SubProg inline_deferred_calls pc: 223 op: STARTLINE (58)

            /** inline.e:979					integer offset = 0*/
            // SubProg inline_deferred_calls pc: 225 op: ASSIGN_I (113)
            _offset_54361 = 0;
            // SubProg inline_deferred_calls pc: 228 op: STARTLINE (58)

            /** inline.e:980					for o = 1 to length( calls ) do*/
            // SubProg inline_deferred_calls pc: 230 op: LENGTH (42)
            if (IS_SEQUENCE(_calls_54350)){
                    _27746 = SEQ_PTR(_calls_54350)->length;
            }
            else {
                _27746 = 1;
            }
            // SubProg inline_deferred_calls pc: 233 op: FOR_I (125)
            {
                object _o_54363;
                _o_54363 = 1;
L8: // addr: 240 pc: 233 sub: 54305 op: 125
                if (_o_54363 > _27746){
                    goto L9; // [233] 453
                }
                // SubProg inline_deferred_calls pc: 240 op: STARTLINE (58)

                /** inline.e:981						if calls[o][2][2] = sub then*/
                // SubProg inline_deferred_calls pc: 242 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_calls_54350);
                _27747 = (object)*(((s1_ptr)_2)->base + _o_54363);
                // SubProg inline_deferred_calls pc: 246 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_27747);
                _27748 = (object)*(((s1_ptr)_2)->base + 2);
                _27747 = NOVALUE;
                // SubProg inline_deferred_calls pc: 250 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_27748);
                _27749 = (object)*(((s1_ptr)_2)->base + 2);
                _27748 = NOVALUE;
                // SubProg inline_deferred_calls pc: 254 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _27749, _sub_54313)){
                    _27749 = NOVALUE;
                    goto LA; // [254] 444
                }
                _27749 = NOVALUE;
                // SubProg inline_deferred_calls pc: 258 op: STARTLINE (58)

                /** inline.e:982							ix = calls[o][1]*/
                // SubProg inline_deferred_calls pc: 260 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_calls_54350);
                _27751 = (object)*(((s1_ptr)_2)->base + _o_54363);
                // SubProg inline_deferred_calls pc: 264 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_27751);
                _ix_54325 = (object)*(((s1_ptr)_2)->base + 1);
                if (!IS_ATOM_INT(_ix_54325)){
                    _ix_54325 = (object)DBL_PTR(_ix_54325)->dbl;
                }
                _27751 = NOVALUE;
                // SubProg inline_deferred_calls pc: 270 op: STARTLINE (58)

                /** inline.e:983							sequence op = calls[o][2]*/
                // SubProg inline_deferred_calls pc: 272 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_calls_54350);
                _27753 = (object)*(((s1_ptr)_2)->base + _o_54363);
                // SubProg inline_deferred_calls pc: 276 op: RHS_SUBS_CHECK (92)
                DeRef(_op_54372);
                _2 = (object)SEQ_PTR(_27753);
                _op_54372 = (object)*(((s1_ptr)_2)->base + 2);
                Ref(_op_54372);
                _27753 = NOVALUE;
                // SubProg inline_deferred_calls pc: 280 op: SEQUENCE_CHECK (97)
                // SubProg inline_deferred_calls pc: 282 op: STARTLINE (58)

                /** inline.e:984							integer size = length( op ) - 1*/
                // SubProg inline_deferred_calls pc: 284 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54372)){
                        _27755 = SEQ_PTR(_op_54372)->length;
                }
                else {
                    _27755 = 1;
                }
                // SubProg inline_deferred_calls pc: 287 op: MINUS_I (116)
                _size_54375 = _27755 - 1;
                _27755 = NOVALUE;
                // SubProg inline_deferred_calls pc: 291 op: STARTLINE (58)

                /** inline.e:985							if is_func then*/
                // SubProg inline_deferred_calls pc: 293 op: IF (20)
                if (_is_func_54354 == 0)
                {
                    goto LB; // [293] 319
                }
                else{
                }
                // SubProg inline_deferred_calls pc: 296 op: STARTLINE (58)

                /** inline.e:987								Push( op[$] )*/
                // SubProg inline_deferred_calls pc: 298 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54372)){
                        _27757 = SEQ_PTR(_op_54372)->length;
                }
                else {
                    _27757 = 1;
                }
                // SubProg inline_deferred_calls pc: 301 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_op_54372);
                _27758 = (object)*(((s1_ptr)_2)->base + _27757);
                // SubProg inline_deferred_calls pc: 305 op: PROC (27)
                Ref(_27758);
                _45Push(_27758);
                _27758 = NOVALUE;
                // SubProg inline_deferred_calls pc: 308 op: STARTLINE (58)

                /** inline.e:988								op = remove( op, length(op) )*/
                // SubProg inline_deferred_calls pc: 310 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54372)){
                        _27759 = SEQ_PTR(_op_54372)->length;
                }
                else {
                    _27759 = 1;
                }
                // SubProg inline_deferred_calls pc: 313 op: REMOVE (200)
                {
                    s1_ptr assign_space = SEQ_PTR(_op_54372);
                    int len = assign_space->length;
                    int start = (IS_ATOM_INT(_27759)) ? _27759 : (object)(DBL_PTR(_27759)->dbl);
                    int stop = (IS_ATOM_INT(_27759)) ? _27759 : (object)(DBL_PTR(_27759)->dbl);
                    if (stop > len){
                        stop = len;
                    }
                    if (start > len || start > stop || stop<0) {
                    }
                    else if (start < 2) {
                        if (stop >= len) {
                            Head( SEQ_PTR(_op_54372), start, &_op_54372 );
                        }
                        else Tail(SEQ_PTR(_op_54372), stop+1, &_op_54372);
                    }
                    else if (stop >= len){
                        Head(SEQ_PTR(_op_54372), start, &_op_54372);
                    }
                    else {
                        assign_slice_seq = &assign_space;
                        _op_54372 = Remove_elements(start, stop, (SEQ_PTR(_op_54372)->ref == 1));
                    }
                }
                _27759 = NOVALUE;
                _27759 = NOVALUE;
                // SubProg inline_deferred_calls pc: 318 op: NOP1 (159)
LB: // addr: 319 pc: 318 sub: 54305 op: 159
                // SubProg inline_deferred_calls pc: 319 op: STARTLINE (58)

                /** inline.e:992							for p = 3 to length( op ) do*/
                // SubProg inline_deferred_calls pc: 321 op: LENGTH (42)
                if (IS_SEQUENCE(_op_54372)){
                        _27761 = SEQ_PTR(_op_54372)->length;
                }
                else {
                    _27761 = 1;
                }
                // SubProg inline_deferred_calls pc: 324 op: FOR_I (125)
                {
                    object _p_54385;
                    _p_54385 = 3;
LC: // addr: 331 pc: 324 sub: 54305 op: 125
                    if (_p_54385 > _27761){
                        goto LD; // [324] 347
                    }
                    // SubProg inline_deferred_calls pc: 331 op: STARTLINE (58)

                    /** inline.e:993								Push( op[p] )*/
                    // SubProg inline_deferred_calls pc: 333 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_op_54372);
                    _27762 = (object)*(((s1_ptr)_2)->base + _p_54385);
                    // SubProg inline_deferred_calls pc: 337 op: PROC (27)
                    Ref(_27762);
                    _45Push(_27762);
                    _27762 = NOVALUE;
                    // SubProg inline_deferred_calls pc: 340 op: STARTLINE (58)

                    /** inline.e:994							end for*/
                    // SubProg inline_deferred_calls pc: 342 op: ENDFOR_INT_UP1 (54)
                    _p_54385 = _p_54385 + 1;
                    goto LC; // [342] 331
LD: // addr: 347 pc: 342 sub: 54305 op: 54
                    ;
                }
                // SubProg inline_deferred_calls pc: 347 op: STARTLINE (58)

                /** inline.e:995							code = get_inlined_code( sub, ix + offset - 1, 1 )*/
                // SubProg inline_deferred_calls pc: 349 op: PLUS (11)
                _27763 = _ix_54325 + _offset_54361;
                if ((object)((uintptr_t)_27763 + (uintptr_t)HIGH_BITS) >= 0){
                    _27763 = NewDouble((eudouble)_27763);
                }
                // SubProg inline_deferred_calls pc: 353 op: MINUS (10)
                if (IS_ATOM_INT(_27763)) {
                    _27764 = _27763 - 1;
                    if ((object)((uintptr_t)_27764 +(uintptr_t) HIGH_BITS) >= 0){
                        _27764 = NewDouble((eudouble)_27764);
                    }
                }
                else {
                    _27764 = NewDouble(DBL_PTR(_27763)->dbl - (eudouble)1);
                }
                DeRef(_27763);
                _27763 = NOVALUE;
                // SubProg inline_deferred_calls pc: 357 op: PROC (27)
                _0 = _code_54349;
                _code_54349 = _66get_inlined_code(_sub_54313, _27764, 1);
                DeRef(_0);
                _27764 = NOVALUE;
                // SubProg inline_deferred_calls pc: 363 op: SEQUENCE_CHECK (97)
                // SubProg inline_deferred_calls pc: 365 op: STARTLINE (58)

                /** inline.e:996							shift:replace_code( repeat( NOP1, length(code) ), ix + offset, ix + offset + size )*/
                // SubProg inline_deferred_calls pc: 367 op: GLOBAL_INIT_CHECK (109)
                // SubProg inline_deferred_calls pc: 369 op: LENGTH (42)
                if (IS_SEQUENCE(_code_54349)){
                        _27766 = SEQ_PTR(_code_54349)->length;
                }
                else {
                    _27766 = 1;
                }
                // SubProg inline_deferred_calls pc: 372 op: REPEAT (32)
                _27767 = Repeat(159, _27766);
                _27766 = NOVALUE;
                // SubProg inline_deferred_calls pc: 376 op: PLUS (11)
                _27768 = _ix_54325 + _offset_54361;
                if ((object)((uintptr_t)_27768 + (uintptr_t)HIGH_BITS) >= 0){
                    _27768 = NewDouble((eudouble)_27768);
                }
                // SubProg inline_deferred_calls pc: 380 op: PLUS (11)
                _27769 = _ix_54325 + _offset_54361;
                if ((object)((uintptr_t)_27769 + (uintptr_t)HIGH_BITS) >= 0){
                    _27769 = NewDouble((eudouble)_27769);
                }
                // SubProg inline_deferred_calls pc: 384 op: PLUS (11)
                if (IS_ATOM_INT(_27769)) {
                    _27770 = _27769 + _size_54375;
                    if ((object)((uintptr_t)_27770 + (uintptr_t)HIGH_BITS) >= 0){
                        _27770 = NewDouble((eudouble)_27770);
                    }
                }
                else {
                    _27770 = NewDouble(DBL_PTR(_27769)->dbl + (eudouble)_size_54375);
                }
                DeRef(_27769);
                _27769 = NOVALUE;
                // SubProg inline_deferred_calls pc: 388 op: PROC (27)
                _65replace_code(_27767, _27768, _27770);
                _27767 = NOVALUE;
                _27768 = NOVALUE;
                _27770 = NOVALUE;
                // SubProg inline_deferred_calls pc: 393 op: STARTLINE (58)

                /** inline.e:999							Code = eu:replace( Code, code, ix + offset, ix + offset + length( code ) -1 )*/
                // SubProg inline_deferred_calls pc: 395 op: GLOBAL_INIT_CHECK (109)
                // SubProg inline_deferred_calls pc: 397 op: PLUS (11)
                _27771 = _ix_54325 + _offset_54361;
                if ((object)((uintptr_t)_27771 + (uintptr_t)HIGH_BITS) >= 0){
                    _27771 = NewDouble((eudouble)_27771);
                }
                // SubProg inline_deferred_calls pc: 401 op: PLUS (11)
                _27772 = _ix_54325 + _offset_54361;
                if ((object)((uintptr_t)_27772 + (uintptr_t)HIGH_BITS) >= 0){
                    _27772 = NewDouble((eudouble)_27772);
                }
                // SubProg inline_deferred_calls pc: 405 op: LENGTH (42)
                if (IS_SEQUENCE(_code_54349)){
                        _27773 = SEQ_PTR(_code_54349)->length;
                }
                else {
                    _27773 = 1;
                }
                // SubProg inline_deferred_calls pc: 408 op: PLUS (11)
                if (IS_ATOM_INT(_27772)) {
                    _27774 = _27772 + _27773;
                    if ((object)((uintptr_t)_27774 + (uintptr_t)HIGH_BITS) >= 0){
                        _27774 = NewDouble((eudouble)_27774);
                    }
                }
                else {
                    _27774 = NewDouble(DBL_PTR(_27772)->dbl + (eudouble)_27773);
                }
                DeRef(_27772);
                _27772 = NOVALUE;
                _27773 = NOVALUE;
                // SubProg inline_deferred_calls pc: 412 op: MINUS (10)
                if (IS_ATOM_INT(_27774)) {
                    _27775 = _27774 - 1;
                    if ((object)((uintptr_t)_27775 +(uintptr_t) HIGH_BITS) >= 0){
                        _27775 = NewDouble((eudouble)_27775);
                    }
                }
                else {
                    _27775 = NewDouble(DBL_PTR(_27774)->dbl - (eudouble)1);
                }
                DeRef(_27774);
                _27774 = NOVALUE;
                // SubProg inline_deferred_calls pc: 416 op: REPLACE (201)
                {
                    intptr_t p1 = _5Code_12566;
                    intptr_t p2 = _code_54349;
                    intptr_t p3 = _27771;
                    intptr_t p4 = _27775;
                    struct replace_block replace_params;
                    replace_params.copy_to   = &p1;
                    replace_params.copy_from = &p2;
                    replace_params.start     = &p3;
                    replace_params.stop      = &p4;
                    replace_params.target    = &_5Code_12566;
                    Replace( &replace_params );
                }
                DeRef(_27771);
                _27771 = NOVALUE;
                DeRef(_27775);
                _27775 = NOVALUE;
                // SubProg inline_deferred_calls pc: 422 op: SEQUENCE_CHECK (97)
                // SubProg inline_deferred_calls pc: 424 op: STARTLINE (58)

                /** inline.e:1000							offset += length(code) - size - 1*/
                // SubProg inline_deferred_calls pc: 426 op: LENGTH (42)
                if (IS_SEQUENCE(_code_54349)){
                        _27777 = SEQ_PTR(_code_54349)->length;
                }
                else {
                    _27777 = 1;
                }
                // SubProg inline_deferred_calls pc: 429 op: MINUS (10)
                _27778 = _27777 - _size_54375;
                if ((object)((uintptr_t)_27778 +(uintptr_t) HIGH_BITS) >= 0){
                    _27778 = NewDouble((eudouble)_27778);
                }
                _27777 = NOVALUE;
                // SubProg inline_deferred_calls pc: 433 op: MINUS (10)
                if (IS_ATOM_INT(_27778)) {
                    _27779 = _27778 - 1;
                    if ((object)((uintptr_t)_27779 +(uintptr_t) HIGH_BITS) >= 0){
                        _27779 = NewDouble((eudouble)_27779);
                    }
                }
                else {
                    _27779 = NewDouble(DBL_PTR(_27778)->dbl - (eudouble)1);
                }
                DeRef(_27778);
                _27778 = NOVALUE;
                // SubProg inline_deferred_calls pc: 437 op: PLUS (11)
                if (IS_ATOM_INT(_27779)) {
                    _offset_54361 = _offset_54361 + _27779;
                }
                else {
                    _offset_54361 = NewDouble((eudouble)_offset_54361 + DBL_PTR(_27779)->dbl);
                }
                DeRef(_27779);
                _27779 = NOVALUE;
                // SubProg inline_deferred_calls pc: 441 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_offset_54361)) {
                    _1 = (object)(DBL_PTR(_offset_54361)->dbl);
                    DeRefDS(_offset_54361);
                    _offset_54361 = _1;
                }
                // SubProg inline_deferred_calls pc: 443 op: NOP1 (159)
LA: // addr: 444 pc: 443 sub: 54305 op: 159
                // SubProg inline_deferred_calls pc: 444 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var op_54372
                DeRef(_op_54372);
                _op_54372 = NOVALUE;

// block var size_54375
                // SubProg inline_deferred_calls pc: 446 op: STARTLINE (58)

                /** inline.e:1003					end for*/
                // SubProg inline_deferred_calls pc: 448 op: ENDFOR_INT_UP1 (54)
                _o_54363 = _o_54363 + 1;
                goto L8; // [448] 240
L9: // addr: 453 pc: 448 sub: 54305 op: 54
                ;
            }
            // SubProg inline_deferred_calls pc: 453 op: STARTLINE (58)

            /** inline.e:1004					SymTab[calling_sub][S_CODE] = Code*/
            // SubProg inline_deferred_calls pc: 455 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 457 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _7SymTab_11389 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54327 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 462 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 464 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 466 op: PASSIGN_SUBS (162)
            RefDS(_5Code_12566);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_5S_CODE_12144))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _5S_CODE_12144);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5Code_12566;
            DeRef(_1);
            _27781 = NOVALUE;
            // SubProg inline_deferred_calls pc: 470 op: STARTLINE (58)

            /** inline.e:1005					SymTab[calling_sub][S_LINETAB] = LineTable*/
            // SubProg inline_deferred_calls pc: 472 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 474 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _7SymTab_11389 = MAKE_SEQ(_2);
            }
            _3 = (object)(_calling_sub_54327 + ((s1_ptr)_2)->base);
            // SubProg inline_deferred_calls pc: 479 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 481 op: GLOBAL_INIT_CHECK (109)
            // SubProg inline_deferred_calls pc: 483 op: PASSIGN_SUBS (162)
            RefDS(_5LineTable_12567);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_5S_LINETAB_12167))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _5S_LINETAB_12167);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5LineTable_12567;
            DeRef(_1);
            _27783 = NOVALUE;
            // SubProg inline_deferred_calls pc: 487 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ix_54325

// block var calling_sub_54327

// block var code_54349
            DeRef(_code_54349);
            _code_54349 = NOVALUE;

// block var calls_54350
            DeRef(_calls_54350);
            _calls_54350 = NOVALUE;

// block var is_func_54354

// block var offset_54361
            // SubProg inline_deferred_calls pc: 489 op: STARTLINE (58)

            /** inline.e:1006				end for*/
            // SubProg inline_deferred_calls pc: 491 op: ENDFOR_INT_UP1 (54)
            _cx_54322 = _cx_54322 + 1;
            goto L6; // [491] 92
L7: // addr: 496 pc: 491 sub: 54305 op: 54
            ;
        }
        // SubProg inline_deferred_calls pc: 496 op: NOP1 (159)
L3: // addr: 497 pc: 496 sub: 54305 op: 159
        // SubProg inline_deferred_calls pc: 497 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sub_54313
        // SubProg inline_deferred_calls pc: 499 op: STARTLINE (58)

        /** inline.e:1008		end for*/
        // SubProg inline_deferred_calls pc: 501 op: ENDFOR_INT_UP1 (54)
L5: // addr: 501 pc: 501 sub: 54305 op: 54
        _i_54308 = _i_54308 + 1;
        goto L1; // [501] 20
L2: // addr: 506 pc: 501 sub: 54305 op: 54
        ;
    }
    // SubProg inline_deferred_calls pc: 506 op: STARTLINE (58)

    /** inline.e:1009	end procedure*/
    // SubProg inline_deferred_calls pc: 508 op: RETURNP (29)

// Exiting block BLOCK: inline_deferred_calls
    _27730 = NOVALUE;
    _27724 = NOVALUE;
    return;
    // SubProg inline_deferred_calls pc: 511 op: BADRETURNF (43)
    ;
}



// 0xD85A8491
