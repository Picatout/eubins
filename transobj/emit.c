// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _47Push(object _x_50624)
{
// skipping _26230  name type: 0
    object _26229 = NOVALUE; // 50629 26229
// skipping _26228  name type: 0
    object _26227 = NOVALUE; // 50627 26227
// skipping _26226  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Push pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_50624)) {
        _1 = (object)(DBL_PTR(_x_50624)->dbl);
        DeRefDS(_x_50624);
        _x_50624 = _1;
    }
    // SubProg Push pc: 3 op: STARTLINE (58)

    /** emit.e:135		cgi += 1*/
    // SubProg Push pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 7 op: PLUS1_I (117)
    _47cgi_50385 = _47cgi_50385 + 1;
    // SubProg Push pc: 11 op: STARTLINE (58)

    /** emit.e:136		if cgi > length(cg_stack) then*/
    // SubProg Push pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_47cg_stack_50384)){
            _26227 = SEQ_PTR(_47cg_stack_50384)->length;
    }
    else {
        _26227 = 1;
    }
    // SubProg Push pc: 20 op: GREATER_IFW_I (124)
    if (_47cgi_50385 <= _26227)
    goto L1; // [20] 37
    // SubProg Push pc: 24 op: STARTLINE (58)

    /** emit.e:137			cg_stack &= repeat(0, 400)*/
    // SubProg Push pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 28 op: REPEAT (32)
    _26229 = Repeat(0, 400);
    // SubProg Push pc: 32 op: CONCAT (15)
    Concat((object_ptr)&_47cg_stack_50384, _47cg_stack_50384, _26229);
    DeRefDS(_26229);
    _26229 = NOVALUE;
    // SubProg Push pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 50621 op: 159
    // SubProg Push pc: 37 op: STARTLINE (58)

    /** emit.e:139		cg_stack[cgi] = x*/
    // SubProg Push pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 43 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_47cg_stack_50384);
    _2 = (object)(((s1_ptr)_2)->base + _47cgi_50385);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _x_50624;
    DeRef(_1);
    // SubProg Push pc: 47 op: STARTLINE (58)

    /** emit.e:141	end procedure*/
    // SubProg Push pc: 49 op: RETURNP (29)

// Exiting block BLOCK: Push

// block var x_50624
    return;
    // SubProg Push pc: 52 op: BADRETURNF (43)
    ;
}


object _47Top()
{
    object _26231 = NOVALUE; // 50633 26231
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Top pc: 1 op: STARTLINE (58)

    /** emit.e:145		return cg_stack[cgi]*/
    // SubProg Top pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Top pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Top pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_47cg_stack_50384);
    _26231 = (object)*(((s1_ptr)_2)->base + _47cgi_50385);
    // SubProg Top pc: 11 op: RETURNF (28)
    Ref(_26231);

// Exiting block BLOCK: Top
    return _26231;
    // SubProg Top pc: 15 op: BADRETURNF (43)
    ;
}


object _47Pop()
{
    object _t_50637 = NOVALUE;
    object _s_50643 = NOVALUE;
// skipping _26244  name type: 0
    object _26243 = NOVALUE; // 50664 26243
// skipping _26242  name type: 0
    object _26241 = NOVALUE; // 50661 26241
// skipping _26240  name type: 0
    object _26239 = NOVALUE; // 50655 26239
// skipping _26238  name type: 0
// skipping _26237  name type: 0
    object _26236 = NOVALUE; // 50648 26236
    object _26235 = NOVALUE; // 50646 26235
// skipping _26234  name type: 0
// skipping _26233  name type: 0
// skipping _26232  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Pop pc: 1 op: STARTLINE (58)

    /** emit.e:153		t = cg_stack[cgi]*/
    // SubProg Pop pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_47cg_stack_50384);
    _t_50637 = (object)*(((s1_ptr)_2)->base + _47cgi_50385);
    if (!IS_ATOM_INT(_t_50637)){
        _t_50637 = (object)DBL_PTR(_t_50637)->dbl;
    }
    // SubProg Pop pc: 13 op: STARTLINE (58)

    /** emit.e:154		cgi -= 1*/
    // SubProg Pop pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 17 op: MINUS_I (116)
    _47cgi_50385 = _47cgi_50385 - 1;
    // SubProg Pop pc: 21 op: STARTLINE (58)

    /** emit.e:155		if t > 0 then*/
    // SubProg Pop pc: 23 op: GREATER_IFW (107)
    if (_t_50637 <= 0)
    goto L1; // [23] 116
    // SubProg Pop pc: 27 op: STARTLINE (58)

    /** emit.e:156			symtab_index s = t -- for type checking*/
    // SubProg Pop pc: 29 op: ASSIGN (18)
    _s_50643 = _t_50637;
    // SubProg Pop pc: 32 op: INTEGER_CHECK (96)
    // SubProg Pop pc: 34 op: STARTLINE (58)

    /** emit.e:157			if SymTab[t][S_MODE] = M_TEMP then*/
    // SubProg Pop pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26235 = (object)*(((s1_ptr)_2)->base + _t_50637);
    // SubProg Pop pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26235);
    _26236 = (object)*(((s1_ptr)_2)->base + 3);
    _26235 = NOVALUE;
    // SubProg Pop pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _26236, 3)){
        _26236 = NOVALUE;
        goto L2; // [50] 115
    }
    _26236 = NOVALUE;
    // SubProg Pop pc: 54 op: STARTLINE (58)

    /** emit.e:158				if use_private_list = 0 then  -- no problem with reusing the temp*/
    // SubProg Pop pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 58 op: EQUALS_IFW (104)
    if (_36use_private_list_16549 != 0)
    goto L3; // [58] 82
    // SubProg Pop pc: 62 op: STARTLINE (58)

    /** emit.e:159					SymTab[t][S_SCOPE] = FREE -- mark it as being free*/
    // SubProg Pop pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 66 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_t_50637 + ((s1_ptr)_2)->base);
    // SubProg Pop pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 75 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _26239 = NOVALUE;
    // SubProg Pop pc: 79 op: ELSE (23)
    goto L4; // [79] 114
    // SubProg Pop pc: 81 op: NOP1 (159)
L3: // addr: 82 pc: 81 sub: 50634 op: 159
    // SubProg Pop pc: 82 op: STARTLINE (58)

    /** emit.e:163				elsif find(t, private_sym) = 0 then*/
    // SubProg Pop pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 86 op: FIND_FROM (176)
    _26241 = find_from(_t_50637, _36private_sym_16548, 1);
    // SubProg Pop pc: 91 op: EQUALS_IFW_I (121)
    if (_26241 != 0)
    goto L5; // [91] 113
    // SubProg Pop pc: 95 op: STARTLINE (58)

    /** emit.e:165					SymTab[t][S_SCOPE] = FREE -- mark it as being free*/
    // SubProg Pop pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 99 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_t_50637 + ((s1_ptr)_2)->base);
    // SubProg Pop pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 108 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _26243 = NOVALUE;
    // SubProg Pop pc: 112 op: NOP1 (159)
L5: // addr: 113 pc: 112 sub: 50634 op: 159
    // SubProg Pop pc: 113 op: NOP1 (159)
L4: // addr: 114 pc: 113 sub: 50634 op: 159
    // SubProg Pop pc: 114 op: NOP1 (159)
L2: // addr: 115 pc: 114 sub: 50634 op: 159
    // SubProg Pop pc: 115 op: NOP1 (159)
L1: // addr: 116 pc: 115 sub: 50634 op: 159
    // SubProg Pop pc: 116 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var s_50643
    // SubProg Pop pc: 118 op: STARTLINE (58)

    /** emit.e:169		return t*/
    // SubProg Pop pc: 120 op: RETURNF (28)

// Exiting block BLOCK: Pop
    return _t_50637;
    // SubProg Pop pc: 124 op: BADRETURNF (43)
    ;
}


void _47TempKeep(object _x_50671)
{
// skipping _26251  name type: 0
    object _26250 = NOVALUE; // 50682 26250
    object _26249 = NOVALUE; // 50680 26249
    object _26248 = NOVALUE; // 50678 26248
    object _26247 = NOVALUE; // 50676 26247
    object _26246 = NOVALUE; // 50674 26246
    object _26245 = NOVALUE; // 50673 26245
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg TempKeep pc: 1 op: INTEGER_CHECK (96)
    // SubProg TempKeep pc: 3 op: STARTLINE (58)

    /** emit.e:173		if x > 0 and SymTab[x][S_MODE] = M_TEMP then*/
    // SubProg TempKeep pc: 5 op: GREATER (6)
    _26245 = (_x_50671 > 0);
    // SubProg TempKeep pc: 9 op: SC1_AND_IF (146)
    if (_26245 == 0) {
        goto L1; // [9] 53
    }
    // SubProg TempKeep pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26247 = (object)*(((s1_ptr)_2)->base + _x_50671);
    // SubProg TempKeep pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26247);
    _26248 = (object)*(((s1_ptr)_2)->base + 3);
    _26247 = NOVALUE;
    // SubProg TempKeep pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 27 op: EQUALS (3)
    if (IS_ATOM_INT(_26248)) {
        _26249 = (_26248 == 3);
    }
    else {
        _26249 = binary_op(EQUALS, _26248, 3);
    }
    _26248 = NOVALUE;
    // SubProg TempKeep pc: 31 op: NOP1 (159)
    // SubProg TempKeep pc: 32 op: IF (20)
    if (_26249 == 0) {
        DeRef(_26249);
        _26249 = NOVALUE;
        goto L1; // [32] 53
    }
    else {
        if (!IS_ATOM_INT(_26249) && DBL_PTR(_26249)->dbl == 0.0){
            DeRef(_26249);
            _26249 = NOVALUE;
            goto L1; // [32] 53
        }
        DeRef(_26249);
        _26249 = NOVALUE;
    }
    DeRef(_26249);
    _26249 = NOVALUE;
    // SubProg TempKeep pc: 35 op: STARTLINE (58)

    /** emit.e:174			SymTab[x][S_SCOPE] = IN_USE*/
    // SubProg TempKeep pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 39 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50671 + ((s1_ptr)_2)->base);
    // SubProg TempKeep pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 48 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _26250 = NOVALUE;
    // SubProg TempKeep pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 50668 op: 159
    // SubProg TempKeep pc: 53 op: STARTLINE (58)

    /** emit.e:176	end procedure*/
    // SubProg TempKeep pc: 55 op: RETURNP (29)

// Exiting block BLOCK: TempKeep

// block var x_50671
    DeRef(_26245);
    _26245 = NOVALUE;
    return;
    // SubProg TempKeep pc: 58 op: BADRETURNF (43)
    ;
}


void _47TempFree(object _x_50689)
{
// skipping _26257  name type: 0
    object _26256 = NOVALUE; // 50700 26256
// skipping _26255  name type: 0
    object _26254 = NOVALUE; // 50696 26254
    object _26253 = NOVALUE; // 50694 26253
// skipping _26252  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg TempFree pc: 1 op: INTEGER_CHECK (96)
    // SubProg TempFree pc: 3 op: STARTLINE (58)

    /** emit.e:179		if x > 0 then*/
    // SubProg TempFree pc: 5 op: GREATER_IFW (107)
    if (_x_50689 <= 0)
    goto L1; // [5] 53
    // SubProg TempFree pc: 9 op: STARTLINE (58)

    /** emit.e:180			if SymTab[x][S_MODE] = M_TEMP then*/
    // SubProg TempFree pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26253 = (object)*(((s1_ptr)_2)->base + _x_50689);
    // SubProg TempFree pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26253);
    _26254 = (object)*(((s1_ptr)_2)->base + 3);
    _26253 = NOVALUE;
    // SubProg TempFree pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 25 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _26254, 3)){
        _26254 = NOVALUE;
        goto L2; // [25] 52
    }
    _26254 = NOVALUE;
    // SubProg TempFree pc: 29 op: STARTLINE (58)

    /** emit.e:181				SymTab[x][S_SCOPE] = FREE*/
    // SubProg TempFree pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 33 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50689 + ((s1_ptr)_2)->base);
    // SubProg TempFree pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 42 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _26256 = NOVALUE;
    // SubProg TempFree pc: 46 op: STARTLINE (58)

    /** emit.e:182				clear_temp( x )*/
    // SubProg TempFree pc: 48 op: PROC (27)
    _47clear_temp(_x_50689);
    // SubProg TempFree pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 50686 op: 159
    // SubProg TempFree pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 50686 op: 159
    // SubProg TempFree pc: 53 op: STARTLINE (58)

    /** emit.e:185	end procedure*/
    // SubProg TempFree pc: 55 op: RETURNP (29)

// Exiting block BLOCK: TempFree

// block var x_50689
    return;
    // SubProg TempFree pc: 58 op: BADRETURNF (43)
    ;
}


void _47TempInteger(object _x_50708)
{
// skipping _26264  name type: 0
    object _26263 = NOVALUE; // 50719 26263
    object _26262 = NOVALUE; // 50717 26262
    object _26261 = NOVALUE; // 50715 26261
    object _26260 = NOVALUE; // 50713 26260
    object _26259 = NOVALUE; // 50711 26259
    object _26258 = NOVALUE; // 50710 26258
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg TempInteger pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_50708)) {
        _1 = (object)(DBL_PTR(_x_50708)->dbl);
        DeRefDS(_x_50708);
        _x_50708 = _1;
    }
    // SubProg TempInteger pc: 3 op: STARTLINE (58)

    /** emit.e:188		if x > 0 and SymTab[x][S_MODE] = M_TEMP then*/
    // SubProg TempInteger pc: 5 op: GREATER (6)
    _26258 = (_x_50708 > 0);
    // SubProg TempInteger pc: 9 op: SC1_AND_IF (146)
    if (_26258 == 0) {
        goto L1; // [9] 53
    }
    // SubProg TempInteger pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26260 = (object)*(((s1_ptr)_2)->base + _x_50708);
    // SubProg TempInteger pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26260);
    _26261 = (object)*(((s1_ptr)_2)->base + 3);
    _26260 = NOVALUE;
    // SubProg TempInteger pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 27 op: EQUALS (3)
    if (IS_ATOM_INT(_26261)) {
        _26262 = (_26261 == 3);
    }
    else {
        _26262 = binary_op(EQUALS, _26261, 3);
    }
    _26261 = NOVALUE;
    // SubProg TempInteger pc: 31 op: NOP1 (159)
    // SubProg TempInteger pc: 32 op: IF (20)
    if (_26262 == 0) {
        DeRef(_26262);
        _26262 = NOVALUE;
        goto L1; // [32] 53
    }
    else {
        if (!IS_ATOM_INT(_26262) && DBL_PTR(_26262)->dbl == 0.0){
            DeRef(_26262);
            _26262 = NOVALUE;
            goto L1; // [32] 53
        }
        DeRef(_26262);
        _26262 = NOVALUE;
    }
    DeRef(_26262);
    _26262 = NOVALUE;
    // SubProg TempInteger pc: 35 op: STARTLINE (58)

    /** emit.e:189			SymTab[x][S_USAGE] = T_INTEGER*/
    // SubProg TempInteger pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 39 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50708 + ((s1_ptr)_2)->base);
    // SubProg TempInteger pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 48 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _26263 = NOVALUE;
    // SubProg TempInteger pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 50705 op: 159
    // SubProg TempInteger pc: 53 op: STARTLINE (58)

    /** emit.e:191	end procedure*/
    // SubProg TempInteger pc: 55 op: RETURNP (29)

// Exiting block BLOCK: TempInteger

// block var x_50708
    DeRef(_26258);
    _26258 = NOVALUE;
    return;
    // SubProg TempInteger pc: 58 op: BADRETURNF (43)
    ;
}


object _47LexName(object _t_50725, object _defname_50726)
{
    object _name_50728 = NOVALUE;
// skipping _26275  name type: 0
// skipping _26273  name type: 0
    object _26272 = NOVALUE; // 50739 26272
// skipping _26271  name type: 0
    object _26270 = NOVALUE; // 50736 26270
// skipping _26269  name type: 0
    object _26268 = NOVALUE; // 50734 26268
    object _26267 = NOVALUE; // 50733 26267
    object _26266 = NOVALUE; // 50731 26266
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg LexName pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t_50725)) {
        _1 = (object)(DBL_PTR(_t_50725)->dbl);
        DeRefDS(_t_50725);
        _t_50725 = _1;
    }
    // SubProg LexName pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg LexName pc: 5 op: STARTLINE (58)

    /** emit.e:197		for i = 1 to length(token_name) do*/
    // SubProg LexName pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg LexName pc: 9 op: LENGTH (42)
    // Known sequence length:
    _26266 = 80;
    // SubProg LexName pc: 12 op: FOR_I (125)
    {
        object _i_50730;
        _i_50730 = 1;
L1: // addr: 19 pc: 12 sub: 50723 op: 125
        if (_i_50730 > 80){
            goto L2; // [12] 82
        }
        // SubProg LexName pc: 19 op: STARTLINE (58)

        /** emit.e:198			if t = token_name[i][LEX_NUMBER] then*/
        // SubProg LexName pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg LexName pc: 23 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_47token_name_50392);
        _26267 = (object)*(((s1_ptr)_2)->base + _i_50730);
        // SubProg LexName pc: 27 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26267);
        _26268 = (object)*(((s1_ptr)_2)->base + 1);
        _26267 = NOVALUE;
        // SubProg LexName pc: 31 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _t_50725, _26268)){
            _26268 = NOVALUE;
            goto L3; // [31] 75
        }
        _26268 = NOVALUE;
        // SubProg LexName pc: 35 op: STARTLINE (58)

        /** emit.e:199				name = token_name[i][LEX_NAME]*/
        // SubProg LexName pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg LexName pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_47token_name_50392);
        _26270 = (object)*(((s1_ptr)_2)->base + _i_50730);
        // SubProg LexName pc: 43 op: RHS_SUBS_CHECK (92)
        DeRef(_name_50728);
        _2 = (object)SEQ_PTR(_26270);
        _name_50728 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_name_50728);
        _26270 = NOVALUE;
        // SubProg LexName pc: 47 op: SEQUENCE_CHECK (97)
        // SubProg LexName pc: 49 op: STARTLINE (58)

        /** emit.e:200				if not find(' ', name) then*/
        // SubProg LexName pc: 51 op: FIND_FROM (176)
        _26272 = find_from(32, _name_50728, 1);
        // SubProg LexName pc: 56 op: NOT_IFW (108)
        if (_26272 != 0)
        goto L4; // [56] 68
        _26272 = NOVALUE;
        // SubProg LexName pc: 59 op: STARTLINE (58)

        /** emit.e:201					name = "'" & name & "'"*/
        // SubProg LexName pc: 61 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _26274;
            concat_list[1] = _name_50728;
            concat_list[2] = _26274;
            Concat_N((object_ptr)&_name_50728, concat_list, 3);
        }
        // SubProg LexName pc: 67 op: NOP1 (159)
L4: // addr: 68 pc: 67 sub: 50723 op: 159
        // SubProg LexName pc: 68 op: STARTLINE (58)

        /** emit.e:203				return name*/
        // SubProg LexName pc: 70 op: RETURNF (28)

// Exiting block BLOCK: LexName

// block var t_50725

// block var defname_50726
        DeRefDSi(_defname_50726);
        return _name_50728;
        // SubProg LexName pc: 74 op: NOP1 (159)
L3: // addr: 75 pc: 74 sub: 50723 op: 159
        // SubProg LexName pc: 75 op: STARTLINE (58)

        /** emit.e:205		end for*/
        // SubProg LexName pc: 77 op: ENDFOR_INT_UP1 (54)
        _i_50730 = _i_50730 + 1;
        goto L1; // [77] 19
L2: // addr: 82 pc: 77 sub: 50723 op: 54
        ;
    }
    // SubProg LexName pc: 82 op: STARTLINE (58)

    /** emit.e:206		return defname -- try to avoid this case*/
    // SubProg LexName pc: 84 op: RETURNF (28)

// Exiting block BLOCK: LexName

// block var t_50725

// block var name_50728
    DeRef(_name_50728);
    return _defname_50726;
    // SubProg LexName pc: 88 op: BADRETURNF (43)
    ;
}


void _47InitEmit()
{
// skipping _26276  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InitEmit pc: 1 op: STARTLINE (58)

    /** emit.e:212		cg_stack = repeat(0, 400)*/
    // SubProg InitEmit pc: 3 op: REPEAT (32)
    DeRef(_47cg_stack_50384);
    _47cg_stack_50384 = Repeat(0, 400);
    // SubProg InitEmit pc: 7 op: STARTLINE (58)

    /** emit.e:213		cgi = 0*/
    // SubProg InitEmit pc: 9 op: ASSIGN_I (113)
    _47cgi_50385 = 0;
    // SubProg InitEmit pc: 12 op: STARTLINE (58)

    /** emit.e:214	end procedure*/
    // SubProg InitEmit pc: 14 op: RETURNP (29)

// Exiting block BLOCK: InitEmit
    return;
    // SubProg InitEmit pc: 17 op: BADRETURNF (43)
    ;
}


object _47IsInteger(object _sym_50749)
{
    object _mode_50750 = NOVALUE;
    object _t_50752 = NOVALUE;
    object _pt_50753 = NOVALUE;
// skipping _26298  name type: 0
    object _26297 = NOVALUE; // 50803 26297
    object _26296 = NOVALUE; // 50801 26296
// skipping _26295  name type: 0
    object _26294 = NOVALUE; // 50794 26294
    object _26293 = NOVALUE; // 50793 26293
    object _26292 = NOVALUE; // 50791 26292
// skipping _26291  name type: 0
    object _26290 = NOVALUE; // 50784 26290
    object _26289 = NOVALUE; // 50782 26289
    object _26288 = NOVALUE; // 50780 26288
    object _26287 = NOVALUE; // 50778 26287
// skipping _26286  name type: 0
    object _26285 = NOVALUE; // 50774 26285
// skipping _26284  name type: 0
// skipping _26283  name type: 0
// skipping _26282  name type: 0
    object _26281 = NOVALUE; // 50764 26281
// skipping _26280  name type: 0
// skipping _26279  name type: 0
    object _26278 = NOVALUE; // 50757 26278
// skipping _26277  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg IsInteger pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_50749)) {
        _1 = (object)(DBL_PTR(_sym_50749)->dbl);
        DeRefDS(_sym_50749);
        _sym_50749 = _1;
    }
    // SubProg IsInteger pc: 3 op: STARTLINE (58)

    /** emit.e:221		if sym < 1 then*/
    // SubProg IsInteger pc: 5 op: LESS_IFW (102)
    if (_sym_50749 >= 1)
    goto L1; // [5] 16
    // SubProg IsInteger pc: 9 op: STARTLINE (58)

    /** emit.e:223			return 0*/
    // SubProg IsInteger pc: 11 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50749

// block var mode_50750

// block var t_50752

// block var pt_50753
    return 0;
    // SubProg IsInteger pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 50746 op: 159
    // SubProg IsInteger pc: 16 op: STARTLINE (58)

    /** emit.e:226		mode = SymTab[sym][S_MODE]*/
    // SubProg IsInteger pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26278 = (object)*(((s1_ptr)_2)->base + _sym_50749);
    // SubProg IsInteger pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26278);
    _mode_50750 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_50750)){
        _mode_50750 = (object)DBL_PTR(_mode_50750)->dbl;
    }
    _26278 = NOVALUE;
    // SubProg IsInteger pc: 32 op: STARTLINE (58)

    /** emit.e:227		if mode = M_NORMAL then*/
    // SubProg IsInteger pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 36 op: EQUALS_IFW (104)
    if (_mode_50750 != 1)
    goto L2; // [36] 136
    // SubProg IsInteger pc: 40 op: STARTLINE (58)

    /** emit.e:228			t = SymTab[sym][S_VTYPE]*/
    // SubProg IsInteger pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26281 = (object)*(((s1_ptr)_2)->base + _sym_50749);
    // SubProg IsInteger pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 50 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26281);
    _t_50752 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_t_50752)){
        _t_50752 = (object)DBL_PTR(_t_50752)->dbl;
    }
    _26281 = NOVALUE;
    // SubProg IsInteger pc: 56 op: STARTLINE (58)

    /** emit.e:229			if t = integer_type then*/
    // SubProg IsInteger pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 60 op: EQUALS_IFW (104)
    if (_t_50752 != _54integer_type_46261)
    goto L3; // [60] 73
    // SubProg IsInteger pc: 64 op: STARTLINE (58)

    /** emit.e:230				return TRUE*/
    // SubProg IsInteger pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 68 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50749

// block var mode_50750

// block var t_50752

// block var pt_50753
    return _13TRUE_452;
    // SubProg IsInteger pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 50746 op: 159
    // SubProg IsInteger pc: 73 op: STARTLINE (58)

    /** emit.e:232			if t > 0 then*/
    // SubProg IsInteger pc: 75 op: GREATER_IFW (107)
    if (_t_50752 <= 0)
    goto L4; // [75] 215
    // SubProg IsInteger pc: 79 op: STARTLINE (58)

    /** emit.e:233				pt = SymTab[t][S_NEXT]*/
    // SubProg IsInteger pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 83 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26285 = (object)*(((s1_ptr)_2)->base + _t_50752);
    // SubProg IsInteger pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26285);
    _pt_50753 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_pt_50753)){
        _pt_50753 = (object)DBL_PTR(_pt_50753)->dbl;
    }
    _26285 = NOVALUE;
    // SubProg IsInteger pc: 95 op: STARTLINE (58)

    /** emit.e:234				if pt and SymTab[pt][S_VTYPE] = integer_type then*/
    // SubProg IsInteger pc: 97 op: SC1_AND_IF (146)
    if (_pt_50753 == 0) {
        goto L4; // [97] 215
    }
    // SubProg IsInteger pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26288 = (object)*(((s1_ptr)_2)->base + _pt_50753);
    // SubProg IsInteger pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 109 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26288);
    _26289 = (object)*(((s1_ptr)_2)->base + 15);
    _26288 = NOVALUE;
    // SubProg IsInteger pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 115 op: EQUALS (3)
    if (IS_ATOM_INT(_26289)) {
        _26290 = (_26289 == _54integer_type_46261);
    }
    else {
        _26290 = binary_op(EQUALS, _26289, _54integer_type_46261);
    }
    _26289 = NOVALUE;
    // SubProg IsInteger pc: 119 op: NOP1 (159)
    // SubProg IsInteger pc: 120 op: IF (20)
    if (_26290 == 0) {
        DeRef(_26290);
        _26290 = NOVALUE;
        goto L4; // [120] 215
    }
    else {
        if (!IS_ATOM_INT(_26290) && DBL_PTR(_26290)->dbl == 0.0){
            DeRef(_26290);
            _26290 = NOVALUE;
            goto L4; // [120] 215
        }
        DeRef(_26290);
        _26290 = NOVALUE;
    }
    DeRef(_26290);
    _26290 = NOVALUE;
    // SubProg IsInteger pc: 123 op: STARTLINE (58)

    /** emit.e:235					return TRUE   -- usertype(integer x)*/
    // SubProg IsInteger pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 127 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50749

// block var mode_50750

// block var t_50752

// block var pt_50753
    return _13TRUE_452;
    // SubProg IsInteger pc: 131 op: NOP1 (159)
    // SubProg IsInteger pc: 132 op: NOP1 (159)
    // SubProg IsInteger pc: 133 op: ELSE (23)
    goto L4; // [133] 215
    // SubProg IsInteger pc: 135 op: NOP1 (159)
L2: // addr: 136 pc: 135 sub: 50746 op: 159
    // SubProg IsInteger pc: 136 op: STARTLINE (58)

    /** emit.e:239		elsif mode = M_CONSTANT then*/
    // SubProg IsInteger pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 140 op: EQUALS_IFW (104)
    if (_mode_50750 != 2)
    goto L5; // [140] 176
    // SubProg IsInteger pc: 144 op: STARTLINE (58)

    /** emit.e:240			if integer(SymTab[sym][S_OBJ]) then  -- bug fixed: can't allow PLUS1_I op*/
    // SubProg IsInteger pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26292 = (object)*(((s1_ptr)_2)->base + _sym_50749);
    // SubProg IsInteger pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26292);
    _26293 = (object)*(((s1_ptr)_2)->base + 1);
    _26292 = NOVALUE;
    // SubProg IsInteger pc: 158 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_26293))
    _26294 = 1;
    else if (IS_ATOM_DBL(_26293))
    _26294 = IS_ATOM_INT(DoubleToInt(_26293));
    else
    _26294 = 0;
    _26293 = NOVALUE;
    // SubProg IsInteger pc: 161 op: IF (20)
    if (_26294 == 0)
    {
        _26294 = NOVALUE;
        goto L4; // [161] 215
    }
    else{
        _26294 = NOVALUE;
    }
    // SubProg IsInteger pc: 164 op: STARTLINE (58)

    /** emit.e:241				return TRUE*/
    // SubProg IsInteger pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 168 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50749

// block var mode_50750

// block var t_50752

// block var pt_50753
    return _13TRUE_452;
    // SubProg IsInteger pc: 172 op: NOP1 (159)
    // SubProg IsInteger pc: 173 op: ELSE (23)
    goto L4; // [173] 215
    // SubProg IsInteger pc: 175 op: NOP1 (159)
L5: // addr: 176 pc: 175 sub: 50746 op: 159
    // SubProg IsInteger pc: 176 op: STARTLINE (58)

    /** emit.e:244		elsif mode = M_TEMP then*/
    // SubProg IsInteger pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 180 op: EQUALS_IFW (104)
    if (_mode_50750 != 3)
    goto L6; // [180] 214
    // SubProg IsInteger pc: 184 op: STARTLINE (58)

    /** emit.e:245			if SymTab[sym][S_USAGE] = T_INTEGER then*/
    // SubProg IsInteger pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 188 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _26296 = (object)*(((s1_ptr)_2)->base + _sym_50749);
    // SubProg IsInteger pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 194 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26296);
    _26297 = (object)*(((s1_ptr)_2)->base + 5);
    _26296 = NOVALUE;
    // SubProg IsInteger pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 200 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _26297, 1)){
        _26297 = NOVALUE;
        goto L7; // [200] 213
    }
    _26297 = NOVALUE;
    // SubProg IsInteger pc: 204 op: STARTLINE (58)

    /** emit.e:246				return TRUE*/
    // SubProg IsInteger pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 208 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50749

// block var mode_50750

// block var t_50752

// block var pt_50753
    return _13TRUE_452;
    // SubProg IsInteger pc: 212 op: NOP1 (159)
L7: // addr: 213 pc: 212 sub: 50746 op: 159
    // SubProg IsInteger pc: 213 op: NOP1 (159)
L6: // addr: 214 pc: 213 sub: 50746 op: 159
    // SubProg IsInteger pc: 214 op: NOP1 (159)
L4: // addr: 215 pc: 214 sub: 50746 op: 159
    // SubProg IsInteger pc: 215 op: STARTLINE (58)

    /** emit.e:250		return FALSE*/
    // SubProg IsInteger pc: 217 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 219 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50749

// block var mode_50750

// block var t_50752

// block var pt_50753
    return _13FALSE_450;
    // SubProg IsInteger pc: 223 op: BADRETURNF (43)
    ;
}


void _47emit(object _val_50810)
{
// skipping _26299  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_val_50810)) {
        _1 = (object)(DBL_PTR(_val_50810)->dbl);
        DeRefDS(_val_50810);
        _val_50810 = _1;
    }
    // SubProg emit pc: 3 op: STARTLINE (58)

    /** emit.e:260		Code = append(Code, val)*/
    // SubProg emit pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit pc: 7 op: APPEND (35)
    Append(&_36Code_16524, _36Code_16524, _val_50810);
    // SubProg emit pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg emit pc: 13 op: STARTLINE (58)

    /** emit.e:261	end procedure*/
    // SubProg emit pc: 15 op: RETURNP (29)

// Exiting block BLOCK: emit

// block var val_50810
    return;
    // SubProg emit pc: 18 op: BADRETURNF (43)
    ;
}


void _47emit_opnd(object _opnd_50817)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_opnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_opnd_50817)) {
        _1 = (object)(DBL_PTR(_opnd_50817)->dbl);
        DeRefDS(_opnd_50817);
        _opnd_50817 = _1;
    }
    // SubProg emit_opnd pc: 3 op: STARTLINE (58)

    /** emit.e:271			Push(opnd)*/
    // SubProg emit_opnd pc: 5 op: PROC (27)
    _47Push(_opnd_50817);
    // SubProg emit_opnd pc: 8 op: STARTLINE (58)

    /** emit.e:272			previous_op = -1  -- N.B.*/
    // SubProg emit_opnd pc: 10 op: ASSIGN (18)
    _36previous_op_16534 = -1;
    // SubProg emit_opnd pc: 13 op: INTEGER_CHECK (96)
    // SubProg emit_opnd pc: 15 op: STARTLINE (58)

    /** emit.e:273	end procedure*/
    // SubProg emit_opnd pc: 17 op: RETURNP (29)

// Exiting block BLOCK: emit_opnd

// block var opnd_50817
    return;
    // SubProg emit_opnd pc: 20 op: BADRETURNF (43)
    ;
}


void _47emit_addr(object _x_50821)
{
// skipping _26300  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_addr pc: 1 op: STARTLINE (58)

    /** emit.e:277			Code = append(Code, x)*/
    // SubProg emit_addr pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_addr pc: 5 op: APPEND (35)
    Ref(_x_50821);
    Append(&_36Code_16524, _36Code_16524, _x_50821);
    // SubProg emit_addr pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg emit_addr pc: 11 op: STARTLINE (58)

    /** emit.e:278	end procedure*/
    // SubProg emit_addr pc: 13 op: RETURNP (29)

// Exiting block BLOCK: emit_addr

// block var x_50821
    DeRef(_x_50821);
    return;
    // SubProg emit_addr pc: 16 op: BADRETURNF (43)
    ;
}


void _47emit_opcode(object _op_50827)
{
// skipping _26301  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_opcode pc: 1 op: INTEGER_CHECK (96)
    // SubProg emit_opcode pc: 3 op: STARTLINE (58)

    /** emit.e:282		Code = append(Code, op)*/
    // SubProg emit_opcode pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_opcode pc: 7 op: APPEND (35)
    Append(&_36Code_16524, _36Code_16524, _op_50827);
    // SubProg emit_opcode pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg emit_opcode pc: 13 op: STARTLINE (58)

    /** emit.e:283	end procedure*/
    // SubProg emit_opcode pc: 15 op: RETURNP (29)

// Exiting block BLOCK: emit_opcode

// block var op_50827
    return;
    // SubProg emit_opcode pc: 18 op: BADRETURNF (43)
    ;
}


void _47emit_temp(object _tempsym_50861, object _referenced_50862)
{
// skipping _26330  name type: 0
// skipping _26329  name type: 0
    object _26328 = NOVALUE; // 50885 26328
    object _26327 = NOVALUE; // 50884 26327
    object _26326 = NOVALUE; // 50883 26326
    object _26325 = NOVALUE; // 50882 26325
    object _26324 = NOVALUE; // 50881 26324
    object _26323 = NOVALUE; // 50880 26323
    object _26322 = NOVALUE; // 50879 26322
    object _26321 = NOVALUE; // 50877 26321
    object _26320 = NOVALUE; // 50875 26320
    object _26319 = NOVALUE; // 50874 26319
    object _26318 = NOVALUE; // 50872 26318
    object _26317 = NOVALUE; // 50871 26317
    object _26316 = NOVALUE; // 50870 26316
    object _26315 = NOVALUE; // 50867 26315
// skipping _26314  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg emit_temp pc: 3 op: STARTLINE (58)

    /** emit.e:307		if not TRANSLATE  then -- translator has its own way of handling temps*/
    // SubProg emit_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 7 op: NOT_IFW (108)
    if (_36TRANSLATE_16061 != 0)
    goto L1; // [7] 129
    // SubProg emit_temp pc: 10 op: STARTLINE (58)

    /** emit.e:308			if sequence(tempsym) then*/
    // SubProg emit_temp pc: 12 op: IS_A_SEQUENCE (68)
    _26315 = IS_SEQUENCE(_tempsym_50861);
    // SubProg emit_temp pc: 15 op: IF (20)
    if (_26315 == 0)
    {
        _26315 = NOVALUE;
        goto L2; // [15] 53
    }
    else{
        _26315 = NOVALUE;
    }
    // SubProg emit_temp pc: 18 op: STARTLINE (58)

    /** emit.e:309				for i = 1 to length(tempsym) do*/
    // SubProg emit_temp pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_tempsym_50861)){
            _26316 = SEQ_PTR(_tempsym_50861)->length;
    }
    else {
        _26316 = 1;
    }
    // SubProg emit_temp pc: 23 op: FOR_I (125)
    {
        object _i_50869;
        _i_50869 = 1;
L3: // addr: 30 pc: 23 sub: 50859 op: 125
        if (_i_50869 > _26316){
            goto L4; // [23] 50
        }
        // SubProg emit_temp pc: 30 op: STARTLINE (58)

        /** emit.e:310					emit_temp( tempsym[i], referenced )*/
        // SubProg emit_temp pc: 32 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tempsym_50861);
        _26317 = (object)*(((s1_ptr)_2)->base + _i_50869);
        // SubProg emit_temp pc: 36 op: ASSIGN (18)
        DeRef(_26318);
        _26318 = _referenced_50862;
        // SubProg emit_temp pc: 39 op: PROC (27)
        Ref(_26317);
        _47emit_temp(_26317, _26318);
        _26317 = NOVALUE;
        _26318 = NOVALUE;
        // SubProg emit_temp pc: 43 op: STARTLINE (58)

        /** emit.e:311				end for*/
        // SubProg emit_temp pc: 45 op: ENDFOR_INT_UP1 (54)
        _i_50869 = _i_50869 + 1;
        goto L3; // [45] 30
L4: // addr: 50 pc: 45 sub: 50859 op: 54
        ;
    }
    // SubProg emit_temp pc: 50 op: ELSE (23)
    goto L5; // [50] 128
    // SubProg emit_temp pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 50859 op: 159
    // SubProg emit_temp pc: 53 op: STARTLINE (58)

    /** emit.e:313			elsif tempsym > 0*/
    // SubProg emit_temp pc: 55 op: GREATER (6)
    if (IS_ATOM_INT(_tempsym_50861)) {
        _26319 = (_tempsym_50861 > 0);
    }
    else {
        _26319 = binary_op(GREATER, _tempsym_50861, 0);
    }
    // SubProg emit_temp pc: 59 op: SC1_AND (141)
    if (IS_ATOM_INT(_26319)) {
        if (_26319 == 0) {
            DeRef(_26320);
            _26320 = 0;
            goto L6; // [59] 77
        }
    }
    else {
        if (DBL_PTR(_26319)->dbl == 0.0) {
            DeRef(_26320);
            _26320 = 0;
            goto L6; // [59] 77
        }
    }
    // SubProg emit_temp pc: 63 op: PROC (27)
    Ref(_tempsym_50861);
    _26321 = _54sym_mode(_tempsym_50861);
    // SubProg emit_temp pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 69 op: EQUALS (3)
    if (IS_ATOM_INT(_26321)) {
        _26322 = (_26321 == 3);
    }
    else {
        _26322 = binary_op(EQUALS, _26321, 3);
    }
    DeRef(_26321);
    _26321 = NOVALUE;
    // SubProg emit_temp pc: 73 op: SC2_AND (142)
    DeRef(_26320);
    if (IS_ATOM_INT(_26322))
    _26320 = (_26322 != 0);
    else
    _26320 = DBL_PTR(_26322)->dbl != 0.0;
    // SubProg emit_temp pc: 76 op: NOP1 (159)
L6: // addr: 77 pc: 76 sub: 50859 op: 159
    // SubProg emit_temp pc: 77 op: SC1_AND (141)
    if (_26320 == 0) {
        _26323 = 0;
        goto L7; // [77] 92
    }
    // SubProg emit_temp pc: 81 op: PROC (27)
    Ref(_tempsym_50861);
    _26324 = _47IsInteger(_tempsym_50861);
    // SubProg emit_temp pc: 85 op: NOT (7)
    if (IS_ATOM_INT(_26324)) {
        _26325 = (_26324 == 0);
    }
    else {
        _26325 = unary_op(NOT, _26324);
    }
    DeRef(_26324);
    _26324 = NOVALUE;
    // SubProg emit_temp pc: 88 op: SC2_AND (142)
    if (IS_ATOM_INT(_26325))
    _26323 = (_26325 != 0);
    else
    _26323 = DBL_PTR(_26325)->dbl != 0.0;
    // SubProg emit_temp pc: 91 op: NOP1 (159)
L7: // addr: 92 pc: 91 sub: 50859 op: 159
    // SubProg emit_temp pc: 92 op: SC1_AND_IF (146)
    if (_26323 == 0) {
        goto L8; // [92] 127
    }
    // SubProg emit_temp pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 98 op: FIND_FROM (176)
    _26327 = find_from(_tempsym_50861, _47emitted_temps_50857, 1);
    // SubProg emit_temp pc: 103 op: NOT (7)
    _26328 = (_26327 == 0);
    _26327 = NOVALUE;
    // SubProg emit_temp pc: 106 op: NOP1 (159)
    // SubProg emit_temp pc: 107 op: IF (20)
    if (_26328 == 0)
    {
        DeRef(_26328);
        _26328 = NOVALUE;
        goto L8; // [107] 127
    }
    else{
        DeRef(_26328);
        _26328 = NOVALUE;
    }
    // SubProg emit_temp pc: 110 op: STARTLINE (58)

    /** emit.e:319				emitted_temps &= tempsym*/
    // SubProg emit_temp pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 114 op: CONCAT (15)
    if (IS_SEQUENCE(_47emitted_temps_50857) && IS_ATOM(_tempsym_50861)) {
        Ref(_tempsym_50861);
        Append(&_47emitted_temps_50857, _47emitted_temps_50857, _tempsym_50861);
    }
    else if (IS_ATOM(_47emitted_temps_50857) && IS_SEQUENCE(_tempsym_50861)) {
    }
    else {
        Concat((object_ptr)&_47emitted_temps_50857, _47emitted_temps_50857, _tempsym_50861);
    }
    // SubProg emit_temp pc: 118 op: STARTLINE (58)

    /** emit.e:320				emitted_temp_referenced &= referenced*/
    // SubProg emit_temp pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 122 op: CONCAT (15)
    Append(&_47emitted_temp_referenced_50858, _47emitted_temp_referenced_50858, _referenced_50862);
    // SubProg emit_temp pc: 126 op: NOP1 (159)
L8: // addr: 127 pc: 126 sub: 50859 op: 159
    // SubProg emit_temp pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 50859 op: 159
    // SubProg emit_temp pc: 128 op: NOP1 (159)
L1: // addr: 129 pc: 128 sub: 50859 op: 159
    // SubProg emit_temp pc: 129 op: STARTLINE (58)

    /** emit.e:323	end procedure*/
    // SubProg emit_temp pc: 131 op: RETURNP (29)

// Exiting block BLOCK: emit_temp

// block var tempsym_50861
    DeRef(_tempsym_50861);

// block var referenced_50862
    DeRef(_26322);
    _26322 = NOVALUE;
    DeRef(_26325);
    _26325 = NOVALUE;
    DeRef(_26319);
    _26319 = NOVALUE;
    return;
    // SubProg emit_temp pc: 134 op: BADRETURNF (43)
    ;
}


void _47flush_temps(object _except_for_50891)
{
    object _refs_50894 = NOVALUE;
    object _novalues_50895 = NOVALUE;
    object _sym_50900 = NOVALUE;
    object _26343 = NOVALUE; // 50923 26343
    object _26342 = NOVALUE; // 50921 26342
    object _26341 = NOVALUE; // 50918 26341
    object _26340 = NOVALUE; // 50916 26340
// skipping _26339  name type: 0
    object _26338 = NOVALUE; // 50911 26338
// skipping _26337  name type: 0
// skipping _26336  name type: 0
// skipping _26335  name type: 0
    object _26334 = NOVALUE; // 50905 26334
    object _26333 = NOVALUE; // 50903 26333
// skipping _26332  name type: 0
    object _26331 = NOVALUE; // 50898 26331
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg flush_temps pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 3 op: STARTLINE (58)

    /** emit.e:332		if TRANSLATE then*/
    // SubProg flush_temps pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temps pc: 7 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L1; // [7] 16
    }
    else{
    }
    // SubProg flush_temps pc: 10 op: STARTLINE (58)

    /** emit.e:333			return*/
    // SubProg flush_temps pc: 12 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: flush_temps

// block var except_for_50891
    DeRefDS(_except_for_50891);

// block var refs_50894
    DeRef(_refs_50894);

// block var novalues_50895
    DeRefi(_novalues_50895);
    return;
    // SubProg flush_temps pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 50889 op: 159
    // SubProg flush_temps pc: 16 op: STARTLINE (58)

    /** emit.e:336		sequence*/
    // SubProg flush_temps pc: 18 op: STARTLINE (58)

    /** emit.e:337			refs = {},*/
    // SubProg flush_temps pc: 20 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_refs_50894);
    _refs_50894 = _21933;
    // SubProg flush_temps pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 25 op: STARTLINE (58)

    /** emit.e:338			novalues = {}*/
    // SubProg flush_temps pc: 27 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_novalues_50895);
    _novalues_50895 = _21933;
    // SubProg flush_temps pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 32 op: STARTLINE (58)

    /** emit.e:340		derefs = {}*/
    // SubProg flush_temps pc: 34 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_47derefs_50888);
    _47derefs_50888 = _21933;
    // SubProg flush_temps pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 39 op: STARTLINE (58)

    /** emit.e:341		for i = 1 to length( emitted_temps ) do*/
    // SubProg flush_temps pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temps pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_47emitted_temps_50857)){
            _26331 = SEQ_PTR(_47emitted_temps_50857)->length;
    }
    else {
        _26331 = 1;
    }
    // SubProg flush_temps pc: 46 op: FOR_I (125)
    {
        object _i_50897;
        _i_50897 = 1;
L2: // addr: 53 pc: 46 sub: 50889 op: 125
        if (_i_50897 > _26331){
            goto L3; // [46] 119
        }
        // SubProg flush_temps pc: 53 op: STARTLINE (58)

        /** emit.e:342			symtab_index sym = emitted_temps[i]*/
        // SubProg flush_temps pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_47emitted_temps_50857);
        _sym_50900 = (object)*(((s1_ptr)_2)->base + _i_50897);
        if (!IS_ATOM_INT(_sym_50900)){
            _sym_50900 = (object)DBL_PTR(_sym_50900)->dbl;
        }
        // SubProg flush_temps pc: 63 op: STARTLINE (58)

        /** emit.e:344			if find( sym, except_for ) then*/
        // SubProg flush_temps pc: 65 op: FIND_FROM (176)
        _26333 = find_from(_sym_50900, _except_for_50891, 1);
        // SubProg flush_temps pc: 70 op: IF (20)
        if (_26333 == 0)
        {
            _26333 = NOVALUE;
            goto L4; // [70] 80
        }
        else{
            _26333 = NOVALUE;
        }
        // SubProg flush_temps pc: 73 op: STARTLINE (58)

        /** emit.e:345				continue*/
        // SubProg flush_temps pc: 75 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var sym_50900
        // SubProg flush_temps pc: 77 op: ELSE (23)
        goto L5; // [77] 114
        // SubProg flush_temps pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 50889 op: 159
        // SubProg flush_temps pc: 80 op: STARTLINE (58)

        /** emit.e:348			if emitted_temp_referenced[i] = NEW_REFERENCE then*/
        // SubProg flush_temps pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 84 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47emitted_temp_referenced_50858);
        _26334 = (object)*(((s1_ptr)_2)->base + _i_50897);
        // SubProg flush_temps pc: 88 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26334, 1)){
            _26334 = NOVALUE;
            goto L6; // [88] 103
        }
        _26334 = NOVALUE;
        // SubProg flush_temps pc: 92 op: STARTLINE (58)

        /** emit.e:349				derefs &= sym*/
        // SubProg flush_temps pc: 94 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 96 op: CONCAT (15)
        Append(&_47derefs_50888, _47derefs_50888, _sym_50900);
        // SubProg flush_temps pc: 100 op: ELSE (23)
        goto L7; // [100] 110
        // SubProg flush_temps pc: 102 op: NOP1 (159)
L6: // addr: 103 pc: 102 sub: 50889 op: 159
        // SubProg flush_temps pc: 103 op: STARTLINE (58)

        /** emit.e:351				novalues &= sym*/
        // SubProg flush_temps pc: 105 op: CONCAT (15)
        Append(&_novalues_50895, _novalues_50895, _sym_50900);
        // SubProg flush_temps pc: 109 op: NOP1 (159)
L7: // addr: 110 pc: 109 sub: 50889 op: 159
        // SubProg flush_temps pc: 110 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var sym_50900
        // SubProg flush_temps pc: 112 op: STARTLINE (58)

        /** emit.e:353		end for*/
        // SubProg flush_temps pc: 114 op: ENDFOR_INT_UP1 (54)
L5: // addr: 114 pc: 114 sub: 50889 op: 54
        _i_50897 = _i_50897 + 1;
        goto L2; // [114] 53
L3: // addr: 119 pc: 114 sub: 50889 op: 54
        ;
    }
    // SubProg flush_temps pc: 119 op: STARTLINE (58)

    /** emit.e:355		if not length( except_for ) then*/
    // SubProg flush_temps pc: 121 op: LENGTH (42)
    if (IS_SEQUENCE(_except_for_50891)){
            _26338 = SEQ_PTR(_except_for_50891)->length;
    }
    else {
        _26338 = 1;
    }
    // SubProg flush_temps pc: 124 op: NOT_IFW (108)
    if (_26338 != 0)
    goto L8; // [124] 132
    _26338 = NOVALUE;
    // SubProg flush_temps pc: 127 op: STARTLINE (58)

    /** emit.e:356			clear_last()*/
    // SubProg flush_temps pc: 129 op: PROC (27)
    _47clear_last();
    // SubProg flush_temps pc: 131 op: NOP1 (159)
L8: // addr: 132 pc: 131 sub: 50889 op: 159
    // SubProg flush_temps pc: 132 op: STARTLINE (58)

    /** emit.e:359		for i = 1 to length( derefs ) do*/
    // SubProg flush_temps pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temps pc: 136 op: LENGTH (42)
    if (IS_SEQUENCE(_47derefs_50888)){
            _26340 = SEQ_PTR(_47derefs_50888)->length;
    }
    else {
        _26340 = 1;
    }
    // SubProg flush_temps pc: 139 op: FOR_I (125)
    {
        object _i_50915;
        _i_50915 = 1;
L9: // addr: 146 pc: 139 sub: 50889 op: 125
        if (_i_50915 > _26340){
            goto LA; // [139] 171
        }
        // SubProg flush_temps pc: 146 op: STARTLINE (58)

        /** emit.e:360			emit( DEREF_TEMP )*/
        // SubProg flush_temps pc: 148 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 150 op: PROC (27)
        _47emit(208);
        // SubProg flush_temps pc: 153 op: STARTLINE (58)

        /** emit.e:361			emit( derefs[i] )*/
        // SubProg flush_temps pc: 155 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47derefs_50888);
        _26341 = (object)*(((s1_ptr)_2)->base + _i_50915);
        // SubProg flush_temps pc: 161 op: PROC (27)
        _47emit(_26341);
        _26341 = NOVALUE;
        // SubProg flush_temps pc: 164 op: STARTLINE (58)

        /** emit.e:362		end for*/
        // SubProg flush_temps pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_50915 = _i_50915 + 1;
        goto L9; // [166] 146
LA: // addr: 171 pc: 166 sub: 50889 op: 54
        ;
    }
    // SubProg flush_temps pc: 171 op: STARTLINE (58)

    /** emit.e:364		for i = 1 to length( novalues ) do*/
    // SubProg flush_temps pc: 173 op: LENGTH (42)
    if (IS_SEQUENCE(_novalues_50895)){
            _26342 = SEQ_PTR(_novalues_50895)->length;
    }
    else {
        _26342 = 1;
    }
    // SubProg flush_temps pc: 176 op: FOR_I (125)
    {
        object _i_50920;
        _i_50920 = 1;
LB: // addr: 183 pc: 176 sub: 50889 op: 125
        if (_i_50920 > _26342){
            goto LC; // [176] 206
        }
        // SubProg flush_temps pc: 183 op: STARTLINE (58)

        /** emit.e:365			emit( NOVALUE_TEMP )*/
        // SubProg flush_temps pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 187 op: PROC (27)
        _47emit(209);
        // SubProg flush_temps pc: 190 op: STARTLINE (58)

        /** emit.e:366			emit( novalues[i] )*/
        // SubProg flush_temps pc: 192 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_novalues_50895);
        _26343 = (object)*(((s1_ptr)_2)->base + _i_50920);
        // SubProg flush_temps pc: 196 op: PROC (27)
        _47emit(_26343);
        _26343 = NOVALUE;
        // SubProg flush_temps pc: 199 op: STARTLINE (58)

        /** emit.e:367		end for*/
        // SubProg flush_temps pc: 201 op: ENDFOR_INT_UP1 (54)
        _i_50920 = _i_50920 + 1;
        goto LB; // [201] 183
LC: // addr: 206 pc: 201 sub: 50889 op: 54
        ;
    }
    // SubProg flush_temps pc: 206 op: STARTLINE (58)

    /** emit.e:369		emitted_temps = {}*/
    // SubProg flush_temps pc: 208 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_47emitted_temps_50857);
    _47emitted_temps_50857 = _21933;
    // SubProg flush_temps pc: 211 op: STARTLINE (58)

    /** emit.e:370		emitted_temp_referenced = {}*/
    // SubProg flush_temps pc: 213 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_47emitted_temp_referenced_50858);
    _47emitted_temp_referenced_50858 = _21933;
    // SubProg flush_temps pc: 216 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 218 op: STARTLINE (58)

    /** emit.e:371	end procedure*/
    // SubProg flush_temps pc: 220 op: RETURNP (29)

// Exiting block BLOCK: flush_temps

// block var except_for_50891
    DeRefDS(_except_for_50891);

// block var refs_50894
    DeRef(_refs_50894);

// block var novalues_50895
    DeRefi(_novalues_50895);
    return;
    // SubProg flush_temps pc: 223 op: BADRETURNF (43)
    ;
}


void _47flush_temp(object _temp_50927)
{
    object _except_for_50928 = NOVALUE;
    object _ix_50929 = NOVALUE;
    object _26345 = NOVALUE; // 50932 26345
// skipping _26344  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg flush_temp pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_temp_50927)) {
        _1 = (object)(DBL_PTR(_temp_50927)->dbl);
        DeRefDS(_temp_50927);
        _temp_50927 = _1;
    }
    // SubProg flush_temp pc: 3 op: STARTLINE (58)

    /** emit.e:374		sequence except_for = emitted_temps*/
    // SubProg flush_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temp pc: 7 op: ASSIGN (18)
    RefDS(_47emitted_temps_50857);
    DeRef(_except_for_50928);
    _except_for_50928 = _47emitted_temps_50857;
    // SubProg flush_temp pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg flush_temp pc: 12 op: STARTLINE (58)

    /** emit.e:375		integer ix = find( temp, emitted_temps )*/
    // SubProg flush_temp pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temp pc: 16 op: FIND_FROM (176)
    _ix_50929 = find_from(_temp_50927, _47emitted_temps_50857, 1);
    // SubProg flush_temp pc: 21 op: STARTLINE (58)

    /** emit.e:376		if ix then*/
    // SubProg flush_temp pc: 23 op: IF (20)
    if (_ix_50929 == 0)
    {
        goto L1; // [23] 37
    }
    else{
    }
    // SubProg flush_temp pc: 26 op: STARTLINE (58)

    /** emit.e:377			flush_temps( remove( except_for, ix ) )*/
    // SubProg flush_temp pc: 28 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_except_for_50928);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50929)) ? _ix_50929 : (object)(DBL_PTR(_ix_50929)->dbl);
        int stop = (IS_ATOM_INT(_ix_50929)) ? _ix_50929 : (object)(DBL_PTR(_ix_50929)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
            RefDS(_except_for_50928);
            DeRef(_26345);
            _26345 = _except_for_50928;
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_except_for_50928), start, &_26345 );
            }
            else Tail(SEQ_PTR(_except_for_50928), stop+1, &_26345);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_except_for_50928), start, &_26345);
        }
        else {
            assign_slice_seq = &assign_space;
            _1 = Remove_elements(start, stop, 0);
            DeRef(_26345);
            _26345 = _1;
        }
    }
    // SubProg flush_temp pc: 33 op: PROC (27)
    _47flush_temps(_26345);
    _26345 = NOVALUE;
    // SubProg flush_temp pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 50924 op: 159
    // SubProg flush_temp pc: 37 op: STARTLINE (58)

    /** emit.e:379	end procedure*/
    // SubProg flush_temp pc: 39 op: RETURNP (29)

// Exiting block BLOCK: flush_temp

// block var temp_50927

// block var except_for_50928
    DeRef(_except_for_50928);

// block var ix_50929
    return;
    // SubProg flush_temp pc: 42 op: BADRETURNF (43)
    ;
}


void _47check_for_temps()
{
    object _26352 = NOVALUE; // 50950 26352
    object _26351 = NOVALUE; // 50947 26351
    object _26350 = NOVALUE; // 50946 26350
    object _26349 = NOVALUE; // 50942 26349
// skipping _26348  name type: 0
    object _26347 = NOVALUE; // 50939 26347
    object _26346 = NOVALUE; // 50937 26346
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_temps pc: 1 op: STARTLINE (58)

    /** emit.e:382		if TRANSLATE or last_op < 1 or last_pc < 1 then*/
    // SubProg check_for_temps pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 5 op: SC1_OR (143)
    if (_36TRANSLATE_16061 != 0) {
        _26346 = 1;
        goto L1; // [5] 19
    }
    // SubProg check_for_temps pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 11 op: LESS (1)
    _26347 = (_47last_op_51266 < 1);
    // SubProg check_for_temps pc: 15 op: SC2_OR (144)
    _26346 = (_26347 != 0);
    // SubProg check_for_temps pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 50933 op: 159
    // SubProg check_for_temps pc: 19 op: SC1_OR_IF (147)
    if (_26346 != 0) {
        goto L2; // [19] 34
    }
    // SubProg check_for_temps pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 25 op: LESS (1)
    _26349 = (_47last_pc_51267 < 1);
    // SubProg check_for_temps pc: 29 op: NOP1 (159)
    // SubProg check_for_temps pc: 30 op: IF (20)
    if (_26349 == 0)
    {
        DeRef(_26349);
        _26349 = NOVALUE;
        goto L3; // [30] 40
    }
    else{
        DeRef(_26349);
        _26349 = NOVALUE;
    }
    // SubProg check_for_temps pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 50933 op: 159
    // SubProg check_for_temps pc: 34 op: STARTLINE (58)

    /** emit.e:383			return*/
    // SubProg check_for_temps pc: 36 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_for_temps
    DeRef(_26347);
    _26347 = NOVALUE;
    return;
    // SubProg check_for_temps pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 50933 op: 159
    // SubProg check_for_temps pc: 40 op: STARTLINE (58)

    /** emit.e:386		emit_temp( get_target_sym( current_op( last_pc ) ), op_temp_ref[last_op] )*/
    // SubProg check_for_temps pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 46 op: PROC (27)
    RefDS(_36Code_16524);
    _26350 = _66current_op(_47last_pc_51267, _36Code_16524);
    // SubProg check_for_temps pc: 51 op: PROC (27)
    _26351 = _66get_target_sym(_26350);
    _26350 = NOVALUE;
    // SubProg check_for_temps pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 59 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_47op_temp_ref_51079);
    _26352 = (object)*(((s1_ptr)_2)->base + _47last_op_51266);
    // SubProg check_for_temps pc: 63 op: PROC (27)
    _47emit_temp(_26351, _26352);
    _26351 = NOVALUE;
    _26352 = NOVALUE;
    // SubProg check_for_temps pc: 67 op: STARTLINE (58)

    /** emit.e:388	end procedure*/
    // SubProg check_for_temps pc: 69 op: RETURNP (29)

// Exiting block BLOCK: check_for_temps
    DeRef(_26347);
    _26347 = NOVALUE;
    return;
    // SubProg check_for_temps pc: 72 op: BADRETURNF (43)
    ;
}


void _47clear_temp(object _tempsym_50954)
{
    object _ix_50955 = NOVALUE;
// skipping _26355  name type: 0
// skipping _26354  name type: 0
// skipping _26353  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_temp pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tempsym_50954)) {
        _1 = (object)(DBL_PTR(_tempsym_50954)->dbl);
        DeRefDS(_tempsym_50954);
        _tempsym_50954 = _1;
    }
    // SubProg clear_temp pc: 3 op: STARTLINE (58)

    /** emit.e:391		integer ix = find( tempsym, emitted_temps )*/
    // SubProg clear_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear_temp pc: 7 op: FIND_FROM (176)
    _ix_50955 = find_from(_tempsym_50954, _47emitted_temps_50857, 1);
    // SubProg clear_temp pc: 12 op: STARTLINE (58)

    /** emit.e:392		if ix then*/
    // SubProg clear_temp pc: 14 op: IF (20)
    if (_ix_50955 == 0)
    {
        goto L1; // [14] 36
    }
    else{
    }
    // SubProg clear_temp pc: 17 op: STARTLINE (58)

    /** emit.e:393			emitted_temps = remove( emitted_temps, ix )*/
    // SubProg clear_temp pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear_temp pc: 21 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_47emitted_temps_50857);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50955)) ? _ix_50955 : (object)(DBL_PTR(_ix_50955)->dbl);
        int stop = (IS_ATOM_INT(_ix_50955)) ? _ix_50955 : (object)(DBL_PTR(_ix_50955)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_47emitted_temps_50857), start, &_47emitted_temps_50857 );
            }
            else Tail(SEQ_PTR(_47emitted_temps_50857), stop+1, &_47emitted_temps_50857);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_47emitted_temps_50857), start, &_47emitted_temps_50857);
        }
        else {
            assign_slice_seq = &assign_space;
            _47emitted_temps_50857 = Remove_elements(start, stop, (SEQ_PTR(_47emitted_temps_50857)->ref == 1));
        }
    }
    // SubProg clear_temp pc: 26 op: STARTLINE (58)

    /** emit.e:394			emitted_temp_referenced = remove( emitted_temp_referenced, ix )*/
    // SubProg clear_temp pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear_temp pc: 30 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_47emitted_temp_referenced_50858);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50955)) ? _ix_50955 : (object)(DBL_PTR(_ix_50955)->dbl);
        int stop = (IS_ATOM_INT(_ix_50955)) ? _ix_50955 : (object)(DBL_PTR(_ix_50955)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_47emitted_temp_referenced_50858), start, &_47emitted_temp_referenced_50858 );
            }
            else Tail(SEQ_PTR(_47emitted_temp_referenced_50858), stop+1, &_47emitted_temp_referenced_50858);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_47emitted_temp_referenced_50858), start, &_47emitted_temp_referenced_50858);
        }
        else {
            assign_slice_seq = &assign_space;
            _47emitted_temp_referenced_50858 = Remove_elements(start, stop, (SEQ_PTR(_47emitted_temp_referenced_50858)->ref == 1));
        }
    }
    // SubProg clear_temp pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 50951 op: 159
    // SubProg clear_temp pc: 36 op: STARTLINE (58)

    /** emit.e:396	end procedure*/
    // SubProg clear_temp pc: 38 op: RETURNP (29)

// Exiting block BLOCK: clear_temp

// block var tempsym_50954

// block var ix_50955
    return;
    // SubProg clear_temp pc: 41 op: BADRETURNF (43)
    ;
}


object _47pop_temps()
{
    object _new_emitted_50962 = NOVALUE;
    object _new_referenced_50963 = NOVALUE;
    object _26356 = NOVALUE; // 50964 26356
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pop_temps pc: 1 op: STARTLINE (58)

    /** emit.e:402		sequence new_emitted  = emitted_temps*/
    // SubProg pop_temps pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_temps pc: 5 op: ASSIGN (18)
    RefDS(_47emitted_temps_50857);
    DeRef(_new_emitted_50962);
    _new_emitted_50962 = _47emitted_temps_50857;
    // SubProg pop_temps pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg pop_temps pc: 10 op: STARTLINE (58)

    /** emit.e:403		sequence new_referenced = emitted_temp_referenced*/
    // SubProg pop_temps pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_temps pc: 14 op: ASSIGN (18)
    RefDS(_47emitted_temp_referenced_50858);
    DeRef(_new_referenced_50963);
    _new_referenced_50963 = _47emitted_temp_referenced_50858;
    // SubProg pop_temps pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg pop_temps pc: 19 op: STARTLINE (58)

    /** emit.e:405		emitted_temps  = {}*/
    // SubProg pop_temps pc: 21 op: ASSIGN (18)
    RefDS(_21933);
    DeRefDS(_47emitted_temps_50857);
    _47emitted_temps_50857 = _21933;
    // SubProg pop_temps pc: 24 op: STARTLINE (58)

    /** emit.e:406		emitted_temp_referenced = {}*/
    // SubProg pop_temps pc: 26 op: ASSIGN (18)
    RefDS(_21933);
    DeRefDS(_47emitted_temp_referenced_50858);
    _47emitted_temp_referenced_50858 = _21933;
    // SubProg pop_temps pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg pop_temps pc: 31 op: STARTLINE (58)

    /** emit.e:407		return { new_emitted, new_referenced }*/
    // SubProg pop_temps pc: 33 op: RIGHT_BRACE_2 (85)
    RefDS(_new_referenced_50963);
    RefDS(_new_emitted_50962);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _new_emitted_50962;
    ((intptr_t *)_2)[2] = _new_referenced_50963;
    _26356 = MAKE_SEQ(_1);
    // SubProg pop_temps pc: 37 op: RETURNF (28)

// Exiting block BLOCK: pop_temps

// block var new_emitted_50962
    DeRefDS(_new_emitted_50962);

// block var new_referenced_50963
    DeRefDS(_new_referenced_50963);
    return _26356;
    // SubProg pop_temps pc: 41 op: BADRETURNF (43)
    ;
}


object _47get_temps(object _add_to_50967)
{
    object _26361 = NOVALUE; // 50972 26361
    object _26360 = NOVALUE; // 50971 26360
    object _26359 = NOVALUE; // 50970 26359
    object _26358 = NOVALUE; // 50969 26358
// skipping _26357  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_temps pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_temps pc: 3 op: STARTLINE (58)

    /** emit.e:416		add_to[1] &= emitted_temps*/
    // SubProg get_temps pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_temps pc: 7 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_add_to_50967);
    _26358 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg get_temps pc: 11 op: CONCAT (15)
    if (IS_SEQUENCE(_26358) && IS_ATOM(_47emitted_temps_50857)) {
    }
    else if (IS_ATOM(_26358) && IS_SEQUENCE(_47emitted_temps_50857)) {
        Ref(_26358);
        Prepend(&_26359, _47emitted_temps_50857, _26358);
    }
    else {
        Concat((object_ptr)&_26359, _26358, _47emitted_temps_50857);
        _26358 = NOVALUE;
    }
    _26358 = NOVALUE;
    // SubProg get_temps pc: 15 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_add_to_50967);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _add_to_50967 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _26359;
    if( _1 != _26359 ){
        DeRef(_1);
    }
    _26359 = NOVALUE;
    // SubProg get_temps pc: 19 op: STARTLINE (58)

    /** emit.e:417		add_to[2] &= emitted_temp_referenced*/
    // SubProg get_temps pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_temps pc: 23 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_add_to_50967);
    _26360 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg get_temps pc: 27 op: CONCAT (15)
    if (IS_SEQUENCE(_26360) && IS_ATOM(_47emitted_temp_referenced_50858)) {
    }
    else if (IS_ATOM(_26360) && IS_SEQUENCE(_47emitted_temp_referenced_50858)) {
        Ref(_26360);
        Prepend(&_26361, _47emitted_temp_referenced_50858, _26360);
    }
    else {
        Concat((object_ptr)&_26361, _26360, _47emitted_temp_referenced_50858);
        _26360 = NOVALUE;
    }
    _26360 = NOVALUE;
    // SubProg get_temps pc: 31 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_add_to_50967);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _add_to_50967 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _26361;
    if( _1 != _26361 ){
        DeRef(_1);
    }
    _26361 = NOVALUE;
    // SubProg get_temps pc: 35 op: STARTLINE (58)

    /** emit.e:418		return add_to*/
    // SubProg get_temps pc: 37 op: RETURNF (28)

// Exiting block BLOCK: get_temps
    return _add_to_50967;
    // SubProg get_temps pc: 41 op: BADRETURNF (43)
    ;
}


void _47push_temps(object _temps_50975)
{
// skipping _26365  name type: 0
    object _26364 = NOVALUE; // 50978 26364
// skipping _26363  name type: 0
    object _26362 = NOVALUE; // 50976 26362
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg push_temps pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg push_temps pc: 3 op: STARTLINE (58)

    /** emit.e:426		emitted_temps &= temps[1]*/
    // SubProg push_temps pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg push_temps pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_temps_50975);
    _26362 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg push_temps pc: 11 op: CONCAT (15)
    if (IS_SEQUENCE(_47emitted_temps_50857) && IS_ATOM(_26362)) {
        Ref(_26362);
        Append(&_47emitted_temps_50857, _47emitted_temps_50857, _26362);
    }
    else if (IS_ATOM(_47emitted_temps_50857) && IS_SEQUENCE(_26362)) {
    }
    else {
        Concat((object_ptr)&_47emitted_temps_50857, _47emitted_temps_50857, _26362);
    }
    _26362 = NOVALUE;
    // SubProg push_temps pc: 15 op: STARTLINE (58)

    /** emit.e:427		emitted_temp_referenced &= temps[2]*/
    // SubProg push_temps pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg push_temps pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_temps_50975);
    _26364 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg push_temps pc: 23 op: CONCAT (15)
    if (IS_SEQUENCE(_47emitted_temp_referenced_50858) && IS_ATOM(_26364)) {
        Ref(_26364);
        Append(&_47emitted_temp_referenced_50858, _47emitted_temp_referenced_50858, _26364);
    }
    else if (IS_ATOM(_47emitted_temp_referenced_50858) && IS_SEQUENCE(_26364)) {
    }
    else {
        Concat((object_ptr)&_47emitted_temp_referenced_50858, _47emitted_temp_referenced_50858, _26364);
    }
    _26364 = NOVALUE;
    // SubProg push_temps pc: 27 op: STARTLINE (58)

    /** emit.e:428		flush_temps()*/
    // SubProg push_temps pc: 29 op: PROC (27)
    RefDS(_21933);
    _47flush_temps(_21933);
    // SubProg push_temps pc: 32 op: STARTLINE (58)

    /** emit.e:429	end procedure*/
    // SubProg push_temps pc: 34 op: RETURNP (29)

// Exiting block BLOCK: push_temps

// block var temps_50975
    DeRefDS(_temps_50975);
    return;
    // SubProg push_temps pc: 37 op: BADRETURNF (43)
    ;
}


void _47backpatch(object _index_50982, object _val_50983)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg backpatch pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_50982)) {
        _1 = (object)(DBL_PTR(_index_50982)->dbl);
        DeRefDS(_index_50982);
        _index_50982 = _1;
    }
    // SubProg backpatch pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_val_50983)) {
        _1 = (object)(DBL_PTR(_val_50983)->dbl);
        DeRefDS(_val_50983);
        _val_50983 = _1;
    }
    // SubProg backpatch pc: 5 op: STARTLINE (58)

    /** emit.e:433			Code[index] = val*/
    // SubProg backpatch pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg backpatch pc: 9 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_36Code_16524);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36Code_16524 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _index_50982);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _val_50983;
    DeRef(_1);
    // SubProg backpatch pc: 13 op: STARTLINE (58)

    /** emit.e:434	end procedure*/
    // SubProg backpatch pc: 15 op: RETURNP (29)

// Exiting block BLOCK: backpatch

// block var index_50982

// block var val_50983
    return;
    // SubProg backpatch pc: 18 op: BADRETURNF (43)
    ;
}


void _47cont11ii(object _op_51167, object _ii_51169)
{
    object _t_51170 = NOVALUE;
    object _source_51171 = NOVALUE;
    object _c_51172 = NOVALUE;
// skipping _26375  name type: 0
// skipping _26374  name type: 0
    object _26373 = NOVALUE; // 51181 26373
    object _26372 = NOVALUE; // 51180 26372
// skipping _26371  name type: 0
    object _26370 = NOVALUE; // 51178 26370
// skipping _26369  name type: 0
// skipping _26368  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cont11ii pc: 1 op: INTEGER_CHECK (96)
    // SubProg cont11ii pc: 3 op: STARTLINE (58)

    /** emit.e:580		emit_opcode(op)*/
    // SubProg cont11ii pc: 5 op: PROC (27)
    _47emit_opcode(_op_51167);
    // SubProg cont11ii pc: 8 op: STARTLINE (58)

    /** emit.e:581		source = Pop()*/
    // SubProg cont11ii pc: 10 op: PROC (27)
    _source_51171 = _47Pop();
    // SubProg cont11ii pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_source_51171)) {
        _1 = (object)(DBL_PTR(_source_51171)->dbl);
        DeRefDS(_source_51171);
        _source_51171 = _1;
    }
    // SubProg cont11ii pc: 15 op: STARTLINE (58)

    /** emit.e:582		emit_addr(source)*/
    // SubProg cont11ii pc: 17 op: PROC (27)
    _47emit_addr(_source_51171);
    // SubProg cont11ii pc: 20 op: STARTLINE (58)

    /** emit.e:583		assignable = TRUE*/
    // SubProg cont11ii pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont11ii pc: 24 op: ASSIGN (18)
    _47assignable_50387 = _13TRUE_452;
    // SubProg cont11ii pc: 27 op: STARTLINE (58)

    /** emit.e:584		t = op_result[op]*/
    // SubProg cont11ii pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont11ii pc: 31 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_47op_result_50985);
    _t_51170 = (object)*(((s1_ptr)_2)->base + _op_51167);
    // SubProg cont11ii pc: 35 op: STARTLINE (58)

    /** emit.e:587		if t = T_INTEGER or (ii and IsInteger(source)) then*/
    // SubProg cont11ii pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont11ii pc: 39 op: EQUALS (3)
    _26370 = (_t_51170 == 1);
    // SubProg cont11ii pc: 43 op: SC1_OR_IF (147)
    if (_26370 != 0) {
        goto L1; // [43] 64
    }
    // SubProg cont11ii pc: 47 op: SC1_AND (141)
    if (_ii_51169 == 0) {
        _26372 = 0;
        goto L2; // [47] 59
    }
    // SubProg cont11ii pc: 51 op: PROC (27)
    _26373 = _47IsInteger(_source_51171);
    // SubProg cont11ii pc: 55 op: SC2_AND (142)
    if (IS_ATOM_INT(_26373))
    _26372 = (_26373 != 0);
    else
    _26372 = DBL_PTR(_26373)->dbl != 0.0;
    // SubProg cont11ii pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 51165 op: 159
    // SubProg cont11ii pc: 59 op: NOP1 (159)
    // SubProg cont11ii pc: 60 op: IF (20)
    if (_26372 == 0)
    {
        _26372 = NOVALUE;
        goto L3; // [60] 80
    }
    else{
        _26372 = NOVALUE;
    }
    // SubProg cont11ii pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 51165 op: 159
    // SubProg cont11ii pc: 64 op: STARTLINE (58)

    /** emit.e:588			c = NewTempSym()*/
    // SubProg cont11ii pc: 66 op: PROC (27)
    _c_51172 = _54NewTempSym(0);
    // SubProg cont11ii pc: 70 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51172)) {
        _1 = (object)(DBL_PTR(_c_51172)->dbl);
        DeRefDS(_c_51172);
        _c_51172 = _1;
    }
    // SubProg cont11ii pc: 72 op: STARTLINE (58)

    /** emit.e:589			TempInteger(c)*/
    // SubProg cont11ii pc: 74 op: PROC (27)
    _47TempInteger(_c_51172);
    // SubProg cont11ii pc: 77 op: ELSE (23)
    goto L4; // [77] 95
    // SubProg cont11ii pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 51165 op: 159
    // SubProg cont11ii pc: 80 op: STARTLINE (58)

    /** emit.e:591			c = NewTempSym() -- allocate *after* checking opnd type*/
    // SubProg cont11ii pc: 82 op: PROC (27)
    _c_51172 = _54NewTempSym(0);
    // SubProg cont11ii pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51172)) {
        _1 = (object)(DBL_PTR(_c_51172)->dbl);
        DeRefDS(_c_51172);
        _c_51172 = _1;
    }
    // SubProg cont11ii pc: 88 op: STARTLINE (58)

    /** emit.e:592			emit_temp( c, NEW_REFERENCE )*/
    // SubProg cont11ii pc: 90 op: PROC (27)
    _47emit_temp(_c_51172, 1);
    // SubProg cont11ii pc: 94 op: NOP1 (159)
L4: // addr: 95 pc: 94 sub: 51165 op: 159
    // SubProg cont11ii pc: 95 op: STARTLINE (58)

    /** emit.e:595		Push(c)*/
    // SubProg cont11ii pc: 97 op: PRIVATE_INIT_CHECK (30)
    // SubProg cont11ii pc: 99 op: PROC (27)
    _47Push(_c_51172);
    // SubProg cont11ii pc: 102 op: STARTLINE (58)

    /** emit.e:596		emit_addr(c)*/
    // SubProg cont11ii pc: 104 op: PROC (27)
    _47emit_addr(_c_51172);
    // SubProg cont11ii pc: 107 op: STARTLINE (58)

    /** emit.e:597	end procedure*/
    // SubProg cont11ii pc: 109 op: RETURNP (29)

// Exiting block BLOCK: cont11ii

// block var op_51167

// block var ii_51169

// block var t_51170

// block var source_51171

// block var c_51172
    DeRef(_26370);
    _26370 = NOVALUE;
    DeRef(_26373);
    _26373 = NOVALUE;
    return;
    // SubProg cont11ii pc: 112 op: BADRETURNF (43)
    ;
}


void _47cont21d(object _op_51189, object _a_51190, object _b_51191, object _ii_51193)
{
    object _c_51194 = NOVALUE;
    object _t_51195 = NOVALUE;
// skipping _26385  name type: 0
// skipping _26384  name type: 0
    object _26383 = NOVALUE; // 51209 26383
    object _26382 = NOVALUE; // 51208 26382
    object _26381 = NOVALUE; // 51207 26381
    object _26380 = NOVALUE; // 51206 26380
// skipping _26379  name type: 0
    object _26378 = NOVALUE; // 51204 26378
// skipping _26377  name type: 0
// skipping _26376  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cont21d pc: 1 op: INTEGER_CHECK (96)
    // SubProg cont21d pc: 3 op: INTEGER_CHECK (96)
    // SubProg cont21d pc: 5 op: INTEGER_CHECK (96)
    // SubProg cont21d pc: 7 op: STARTLINE (58)

    /** emit.e:602		assignable = TRUE*/
    // SubProg cont21d pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 11 op: ASSIGN (18)
    _47assignable_50387 = _13TRUE_452;
    // SubProg cont21d pc: 14 op: STARTLINE (58)

    /** emit.e:603		t = op_result[op]*/
    // SubProg cont21d pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 18 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_47op_result_50985);
    _t_51195 = (object)*(((s1_ptr)_2)->base + _op_51189);
    // SubProg cont21d pc: 22 op: STARTLINE (58)

    /** emit.e:604		if op = C_FUNC then*/
    // SubProg cont21d pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 26 op: EQUALS_IFW (104)
    if (_op_51189 != 133)
    goto L1; // [26] 38
    // SubProg cont21d pc: 30 op: STARTLINE (58)

    /** emit.e:605			emit_addr(CurrentSub)*/
    // SubProg cont21d pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 34 op: PROC (27)
    _47emit_addr(_36CurrentSub_16444);
    // SubProg cont21d pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 51187 op: 159
    // SubProg cont21d pc: 38 op: STARTLINE (58)

    /** emit.e:607		if t = T_INTEGER or (ii and IsInteger(a) and IsInteger(b)) then*/
    // SubProg cont21d pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 42 op: EQUALS (3)
    _26378 = (_t_51195 == 1);
    // SubProg cont21d pc: 46 op: SC1_OR_IF (147)
    if (_26378 != 0) {
        goto L2; // [46] 79
    }
    // SubProg cont21d pc: 50 op: SC1_AND (141)
    if (_ii_51193 == 0) {
        _26380 = 0;
        goto L3; // [50] 62
    }
    // SubProg cont21d pc: 54 op: PROC (27)
    _26381 = _47IsInteger(_a_51190);
    // SubProg cont21d pc: 58 op: SC2_AND (142)
    if (IS_ATOM_INT(_26381))
    _26380 = (_26381 != 0);
    else
    _26380 = DBL_PTR(_26381)->dbl != 0.0;
    // SubProg cont21d pc: 61 op: NOP1 (159)
L3: // addr: 62 pc: 61 sub: 51187 op: 159
    // SubProg cont21d pc: 62 op: SC1_AND (141)
    if (_26380 == 0) {
        DeRef(_26382);
        _26382 = 0;
        goto L4; // [62] 74
    }
    // SubProg cont21d pc: 66 op: PROC (27)
    _26383 = _47IsInteger(_b_51191);
    // SubProg cont21d pc: 70 op: SC2_AND (142)
    if (IS_ATOM_INT(_26383))
    _26382 = (_26383 != 0);
    else
    _26382 = DBL_PTR(_26383)->dbl != 0.0;
    // SubProg cont21d pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 51187 op: 159
    // SubProg cont21d pc: 74 op: NOP1 (159)
    // SubProg cont21d pc: 75 op: IF (20)
    if (_26382 == 0)
    {
        _26382 = NOVALUE;
        goto L5; // [75] 95
    }
    else{
        _26382 = NOVALUE;
    }
    // SubProg cont21d pc: 78 op: NOP1 (159)
L2: // addr: 79 pc: 78 sub: 51187 op: 159
    // SubProg cont21d pc: 79 op: STARTLINE (58)

    /** emit.e:608			c = NewTempSym()*/
    // SubProg cont21d pc: 81 op: PROC (27)
    _c_51194 = _54NewTempSym(0);
    // SubProg cont21d pc: 85 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51194)) {
        _1 = (object)(DBL_PTR(_c_51194)->dbl);
        DeRefDS(_c_51194);
        _c_51194 = _1;
    }
    // SubProg cont21d pc: 87 op: STARTLINE (58)

    /** emit.e:609			TempInteger(c)*/
    // SubProg cont21d pc: 89 op: PROC (27)
    _47TempInteger(_c_51194);
    // SubProg cont21d pc: 92 op: ELSE (23)
    goto L6; // [92] 110
    // SubProg cont21d pc: 94 op: NOP1 (159)
L5: // addr: 95 pc: 94 sub: 51187 op: 159
    // SubProg cont21d pc: 95 op: STARTLINE (58)

    /** emit.e:611			c = NewTempSym() -- allocate *after* checking opnd types*/
    // SubProg cont21d pc: 97 op: PROC (27)
    _c_51194 = _54NewTempSym(0);
    // SubProg cont21d pc: 101 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51194)) {
        _1 = (object)(DBL_PTR(_c_51194)->dbl);
        DeRefDS(_c_51194);
        _c_51194 = _1;
    }
    // SubProg cont21d pc: 103 op: STARTLINE (58)

    /** emit.e:612			emit_temp( c, NEW_REFERENCE )*/
    // SubProg cont21d pc: 105 op: PROC (27)
    _47emit_temp(_c_51194, 1);
    // SubProg cont21d pc: 109 op: NOP1 (159)
L6: // addr: 110 pc: 109 sub: 51187 op: 159
    // SubProg cont21d pc: 110 op: STARTLINE (58)

    /** emit.e:614		Push(c)*/
    // SubProg cont21d pc: 112 op: PRIVATE_INIT_CHECK (30)
    // SubProg cont21d pc: 114 op: PROC (27)
    _47Push(_c_51194);
    // SubProg cont21d pc: 117 op: STARTLINE (58)

    /** emit.e:615		emit_addr(c)*/
    // SubProg cont21d pc: 119 op: PROC (27)
    _47emit_addr(_c_51194);
    // SubProg cont21d pc: 122 op: STARTLINE (58)

    /** emit.e:616	end procedure*/
    // SubProg cont21d pc: 124 op: RETURNP (29)

// Exiting block BLOCK: cont21d

// block var op_51189

// block var a_51190

// block var b_51191

// block var ii_51193

// block var c_51194

// block var t_51195
    DeRef(_26383);
    _26383 = NOVALUE;
    DeRef(_26381);
    _26381 = NOVALUE;
    DeRef(_26378);
    _26378 = NOVALUE;
    return;
    // SubProg cont21d pc: 127 op: BADRETURNF (43)
    ;
}


void _47cont21ii(object _op_51217, object _ii_51219)
{
    object _a_51220 = NOVALUE;
    object _b_51221 = NOVALUE;
// skipping _26387  name type: 0
// skipping _26386  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cont21ii pc: 1 op: INTEGER_CHECK (96)
    // SubProg cont21ii pc: 3 op: STARTLINE (58)

    /** emit.e:621		b = Pop()*/
    // SubProg cont21ii pc: 5 op: PROC (27)
    _b_51221 = _47Pop();
    // SubProg cont21ii pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_b_51221)) {
        _1 = (object)(DBL_PTR(_b_51221)->dbl);
        DeRefDS(_b_51221);
        _b_51221 = _1;
    }
    // SubProg cont21ii pc: 10 op: STARTLINE (58)

    /** emit.e:622		emit_opcode(op)*/
    // SubProg cont21ii pc: 12 op: PROC (27)
    _47emit_opcode(_op_51217);
    // SubProg cont21ii pc: 15 op: STARTLINE (58)

    /** emit.e:623		a = Pop()*/
    // SubProg cont21ii pc: 17 op: PROC (27)
    _a_51220 = _47Pop();
    // SubProg cont21ii pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_a_51220)) {
        _1 = (object)(DBL_PTR(_a_51220)->dbl);
        DeRefDS(_a_51220);
        _a_51220 = _1;
    }
    // SubProg cont21ii pc: 22 op: STARTLINE (58)

    /** emit.e:624		emit_addr(a)*/
    // SubProg cont21ii pc: 24 op: PROC (27)
    _47emit_addr(_a_51220);
    // SubProg cont21ii pc: 27 op: STARTLINE (58)

    /** emit.e:625		emit_addr(b)*/
    // SubProg cont21ii pc: 29 op: PROC (27)
    _47emit_addr(_b_51221);
    // SubProg cont21ii pc: 32 op: STARTLINE (58)

    /** emit.e:626		cont21d(op, a, b, ii)*/
    // SubProg cont21ii pc: 34 op: PROC (27)
    _47cont21d(_op_51217, _a_51220, _b_51221, _ii_51219);
    // SubProg cont21ii pc: 40 op: STARTLINE (58)

    /** emit.e:627	end procedure*/
    // SubProg cont21ii pc: 42 op: RETURNP (29)

// Exiting block BLOCK: cont21ii

// block var op_51217

// block var ii_51219

// block var a_51220

// block var b_51221
    return;
    // SubProg cont21ii pc: 45 op: BADRETURNF (43)
    ;
}


object _47good_string(object _elements_51226)
{
    object _obj_51227 = NOVALUE;
    object _ep_51229 = NOVALUE;
    object _e_51231 = NOVALUE;
    object _element_vals_51232 = NOVALUE;
// skipping _26407  name type: 0
    object _26406 = NOVALUE; // 51263 26406
    object _26405 = NOVALUE; // 51262 26405
    object _26404 = NOVALUE; // 51261 26404
    object _26403 = NOVALUE; // 51260 26403
    object _26402 = NOVALUE; // 51259 26402
    object _26401 = NOVALUE; // 51257 26401
    object _26400 = NOVALUE; // 51256 26400
    object _26399 = NOVALUE; // 51255 26399
    object _26398 = NOVALUE; // 51254 26398
    object _26397 = NOVALUE; // 51252 26397
    object _26396 = NOVALUE; // 51250 26396
// skipping _26395  name type: 0
    object _26394 = NOVALUE; // 51245 26394
// skipping _26393  name type: 0
// skipping _26392  name type: 0
    object _26391 = NOVALUE; // 51240 26391
    object _26390 = NOVALUE; // 51237 26390
    object _26389 = NOVALUE; // 51236 26389
    object _26388 = NOVALUE; // 51235 26388
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg good_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg good_string pc: 3 op: STARTLINE (58)

    /** emit.e:634		sequence element_vals*/
    // SubProg good_string pc: 5 op: STARTLINE (58)

    /** emit.e:636		if TRANSLATE and length(elements) > 10000 then*/
    // SubProg good_string pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg good_string pc: 9 op: SC1_AND_IF (146)
    if (_36TRANSLATE_16061 == 0) {
        goto L1; // [9] 31
    }
    // SubProg good_string pc: 13 op: LENGTH (42)
    if (IS_SEQUENCE(_elements_51226)){
            _26389 = SEQ_PTR(_elements_51226)->length;
    }
    else {
        _26389 = 1;
    }
    // SubProg good_string pc: 16 op: GREATER (6)
    _26390 = (_26389 > 10000);
    _26389 = NOVALUE;
    // SubProg good_string pc: 20 op: NOP1 (159)
    // SubProg good_string pc: 21 op: IF (20)
    if (_26390 == 0)
    {
        DeRef(_26390);
        _26390 = NOVALUE;
        goto L1; // [21] 31
    }
    else{
        DeRef(_26390);
        _26390 = NOVALUE;
    }
    // SubProg good_string pc: 24 op: STARTLINE (58)

    /** emit.e:637			return -1 -- A huge string might upset the C compiler.*/
    // SubProg good_string pc: 26 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51226
    DeRefDS(_elements_51226);

// block var obj_51227
    DeRef(_obj_51227);

// block var ep_51229

// block var e_51231

// block var element_vals_51232
    DeRef(_element_vals_51232);
    return -1;
    // SubProg good_string pc: 30 op: NOP1 (159)
L1: // addr: 31 pc: 30 sub: 51224 op: 159
    // SubProg good_string pc: 31 op: STARTLINE (58)

    /** emit.e:639		element_vals = {}*/
    // SubProg good_string pc: 33 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_element_vals_51232);
    _element_vals_51232 = _21933;
    // SubProg good_string pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg good_string pc: 38 op: STARTLINE (58)

    /** emit.e:640		for i = 1 to length(elements) do*/
    // SubProg good_string pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_elements_51226)){
            _26391 = SEQ_PTR(_elements_51226)->length;
    }
    else {
        _26391 = 1;
    }
    // SubProg good_string pc: 43 op: FOR_I (125)
    {
        object _i_51239;
        _i_51239 = 1;
L2: // addr: 50 pc: 43 sub: 51224 op: 125
        if (_i_51239 > _26391){
            goto L3; // [43] 183
        }
        // SubProg good_string pc: 50 op: STARTLINE (58)

        /** emit.e:641			ep = elements[i]*/
        // SubProg good_string pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_elements_51226);
        _ep_51229 = (object)*(((s1_ptr)_2)->base + _i_51239);
        if (!IS_ATOM_INT(_ep_51229)){
            _ep_51229 = (object)DBL_PTR(_ep_51229)->dbl;
        }
        // SubProg good_string pc: 58 op: STARTLINE (58)

        /** emit.e:642			if ep < 1 then*/
        // SubProg good_string pc: 60 op: LESS_IFW (102)
        if (_ep_51229 >= 1)
        goto L4; // [60] 71
        // SubProg good_string pc: 64 op: STARTLINE (58)

        /** emit.e:644				return -1*/
        // SubProg good_string pc: 66 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51226
        DeRefDS(_elements_51226);

// block var obj_51227
        DeRef(_obj_51227);

// block var ep_51229

// block var e_51231

// block var element_vals_51232
        DeRef(_element_vals_51232);
        return -1;
        // SubProg good_string pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 51224 op: 159
        // SubProg good_string pc: 71 op: STARTLINE (58)

        /** emit.e:646			e = ep*/
        // SubProg good_string pc: 73 op: ASSIGN (18)
        _e_51231 = _ep_51229;
        // SubProg good_string pc: 76 op: INTEGER_CHECK (96)
        // SubProg good_string pc: 78 op: STARTLINE (58)

        /** emit.e:647			obj = SymTab[e][S_OBJ]*/
        // SubProg good_string pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26394 = (object)*(((s1_ptr)_2)->base + _e_51231);
        // SubProg good_string pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 88 op: RHS_SUBS_CHECK (92)
        DeRef(_obj_51227);
        _2 = (object)SEQ_PTR(_26394);
        _obj_51227 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_obj_51227);
        _26394 = NOVALUE;
        // SubProg good_string pc: 92 op: STARTLINE (58)

        /** emit.e:648			if SymTab[e][S_MODE] = M_CONSTANT and*/
        // SubProg good_string pc: 94 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 96 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26396 = (object)*(((s1_ptr)_2)->base + _e_51231);
        // SubProg good_string pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 102 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26396);
        _26397 = (object)*(((s1_ptr)_2)->base + 3);
        _26396 = NOVALUE;
        // SubProg good_string pc: 106 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 108 op: EQUALS (3)
        if (IS_ATOM_INT(_26397)) {
            _26398 = (_26397 == 2);
        }
        else {
            _26398 = binary_op(EQUALS, _26397, 2);
        }
        _26397 = NOVALUE;
        // SubProg good_string pc: 112 op: SC1_AND (141)
        if (IS_ATOM_INT(_26398)) {
            if (_26398 == 0) {
                DeRef(_26399);
                _26399 = 0;
                goto L5; // [112] 123
            }
        }
        else {
            if (DBL_PTR(_26398)->dbl == 0.0) {
                DeRef(_26399);
                _26399 = 0;
                goto L5; // [112] 123
            }
        }
        // SubProg good_string pc: 116 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_obj_51227))
        _26400 = 1;
        else if (IS_ATOM_DBL(_obj_51227))
        _26400 = IS_ATOM_INT(DoubleToInt(_obj_51227));
        else
        _26400 = 0;
        // SubProg good_string pc: 119 op: SC2_AND (142)
        DeRef(_26399);
        _26399 = (_26400 != 0);
        // SubProg good_string pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 51224 op: 159
        // SubProg good_string pc: 123 op: SC1_AND_IF (146)
        if (_26399 == 0) {
            goto L6; // [123] 169
        }
        // SubProg good_string pc: 127 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 129 op: NOT (7)
        _26402 = (_36TRANSLATE_16061 == 0);
        // SubProg good_string pc: 132 op: SC1_OR (143)
        if (_26402 != 0) {
            DeRef(_26403);
            _26403 = 1;
            goto L7; // [132] 156
        }
        // SubProg good_string pc: 136 op: GREATEREQ (2)
        if (IS_ATOM_INT(_obj_51227)) {
            _26404 = (_obj_51227 >= 1);
        }
        else {
            _26404 = binary_op(GREATEREQ, _obj_51227, 1);
        }
        // SubProg good_string pc: 140 op: SC1_AND (141)
        if (IS_ATOM_INT(_26404)) {
            if (_26404 == 0) {
                DeRef(_26405);
                _26405 = 0;
                goto L8; // [140] 152
            }
        }
        else {
            if (DBL_PTR(_26404)->dbl == 0.0) {
                DeRef(_26405);
                _26405 = 0;
                goto L8; // [140] 152
            }
        }
        // SubProg good_string pc: 144 op: LESSEQ (5)
        if (IS_ATOM_INT(_obj_51227)) {
            _26406 = (_obj_51227 <= 255);
        }
        else {
            _26406 = binary_op(LESSEQ, _obj_51227, 255);
        }
        // SubProg good_string pc: 148 op: SC2_AND (142)
        DeRef(_26405);
        if (IS_ATOM_INT(_26406))
        _26405 = (_26406 != 0);
        else
        _26405 = DBL_PTR(_26406)->dbl != 0.0;
        // SubProg good_string pc: 151 op: NOP1 (159)
L8: // addr: 152 pc: 151 sub: 51224 op: 159
        // SubProg good_string pc: 152 op: SC2_OR (144)
        DeRef(_26403);
        _26403 = (_26405 != 0);
        // SubProg good_string pc: 155 op: NOP1 (159)
L7: // addr: 156 pc: 155 sub: 51224 op: 159
        // SubProg good_string pc: 156 op: NOP1 (159)
        // SubProg good_string pc: 157 op: IF (20)
        if (_26403 == 0)
        {
            _26403 = NOVALUE;
            goto L6; // [157] 169
        }
        else{
            _26403 = NOVALUE;
        }
        // SubProg good_string pc: 160 op: STARTLINE (58)

        /** emit.e:653				element_vals = prepend(element_vals, obj)*/
        // SubProg good_string pc: 162 op: PREPEND (57)
        Ref(_obj_51227);
        Prepend(&_element_vals_51232, _element_vals_51232, _obj_51227);
        // SubProg good_string pc: 166 op: ELSE (23)
        goto L9; // [166] 176
        // SubProg good_string pc: 168 op: NOP1 (159)
L6: // addr: 169 pc: 168 sub: 51224 op: 159
        // SubProg good_string pc: 169 op: STARTLINE (58)

        /** emit.e:655				return -1*/
        // SubProg good_string pc: 171 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51226
        DeRefDS(_elements_51226);

// block var obj_51227
        DeRef(_obj_51227);

// block var ep_51229

// block var e_51231

// block var element_vals_51232
        DeRef(_element_vals_51232);
        DeRef(_26406);
        _26406 = NOVALUE;
        DeRef(_26402);
        _26402 = NOVALUE;
        DeRef(_26404);
        _26404 = NOVALUE;
        DeRef(_26398);
        _26398 = NOVALUE;
        return -1;
        // SubProg good_string pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 51224 op: 159
        // SubProg good_string pc: 176 op: STARTLINE (58)

        /** emit.e:657		end for*/
        // SubProg good_string pc: 178 op: ENDFOR_INT_UP1 (54)
        _i_51239 = _i_51239 + 1;
        goto L2; // [178] 50
L3: // addr: 183 pc: 178 sub: 51224 op: 54
        ;
    }
    // SubProg good_string pc: 183 op: STARTLINE (58)

    /** emit.e:658		return element_vals*/
    // SubProg good_string pc: 185 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51226
    DeRefDS(_elements_51226);

// block var obj_51227
    DeRef(_obj_51227);

// block var ep_51229

// block var e_51231
    DeRef(_26406);
    _26406 = NOVALUE;
    DeRef(_26402);
    _26402 = NOVALUE;
    DeRef(_26404);
    _26404 = NOVALUE;
    DeRef(_26398);
    _26398 = NOVALUE;
    return _element_vals_51232;
    // SubProg good_string pc: 189 op: BADRETURNF (43)
    ;
}


object _47Last_op()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Last_op pc: 1 op: STARTLINE (58)

    /** emit.e:664		return last_op*/
    // SubProg Last_op pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Last_op pc: 5 op: RETURNF (28)

// Exiting block BLOCK: Last_op
    return _47last_op_51266;
    // SubProg Last_op pc: 9 op: BADRETURNF (43)
    ;
}


object _47Last_pc()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Last_pc pc: 1 op: STARTLINE (58)

    /** emit.e:668		return last_pc*/
    // SubProg Last_pc pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Last_pc pc: 5 op: RETURNF (28)

// Exiting block BLOCK: Last_pc
    return _47last_pc_51267;
    // SubProg Last_pc pc: 9 op: BADRETURNF (43)
    ;
}


void _47move_last_pc(object _amount_51274)
{
// skipping _26409  name type: 0
// skipping _26408  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg move_last_pc pc: 1 op: INTEGER_CHECK (96)
    // SubProg move_last_pc pc: 3 op: STARTLINE (58)

    /** emit.e:672		if last_pc > 0 then*/
    // SubProg move_last_pc pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg move_last_pc pc: 7 op: GREATER_IFW_I (124)
    if (_47last_pc_51267 <= 0)
    goto L1; // [7] 20
    // SubProg move_last_pc pc: 11 op: STARTLINE (58)

    /** emit.e:673			last_pc += amount*/
    // SubProg move_last_pc pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg move_last_pc pc: 15 op: PLUS_I (115)
    _47last_pc_51267 = _47last_pc_51267 + _amount_51274;
    // SubProg move_last_pc pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 51272 op: 159
    // SubProg move_last_pc pc: 20 op: STARTLINE (58)

    /** emit.e:675	end procedure*/
    // SubProg move_last_pc pc: 22 op: RETURNP (29)

// Exiting block BLOCK: move_last_pc

// block var amount_51274
    return;
    // SubProg move_last_pc pc: 25 op: BADRETURNF (43)
    ;
}


void _47clear_last()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_last pc: 1 op: STARTLINE (58)

    /** emit.e:678		last_op = 0*/
    // SubProg clear_last pc: 3 op: ASSIGN_I (113)
    _47last_op_51266 = 0;
    // SubProg clear_last pc: 6 op: STARTLINE (58)

    /** emit.e:679		last_pc = 0*/
    // SubProg clear_last pc: 8 op: ASSIGN_I (113)
    _47last_pc_51267 = 0;
    // SubProg clear_last pc: 11 op: STARTLINE (58)

    /** emit.e:680	end procedure*/
    // SubProg clear_last pc: 13 op: RETURNP (29)

// Exiting block BLOCK: clear_last
    return;
    // SubProg clear_last pc: 16 op: BADRETURNF (43)
    ;
}


void _47clear_op()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_op pc: 1 op: STARTLINE (58)

    /** emit.e:683		previous_op = -1*/
    // SubProg clear_op pc: 3 op: ASSIGN (18)
    _36previous_op_16534 = -1;
    // SubProg clear_op pc: 6 op: INTEGER_CHECK (96)
    // SubProg clear_op pc: 8 op: STARTLINE (58)

    /** emit.e:684		assignable = FALSE*/
    // SubProg clear_op pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear_op pc: 12 op: ASSIGN (18)
    _47assignable_50387 = _13FALSE_450;
    // SubProg clear_op pc: 15 op: STARTLINE (58)

    /** emit.e:685	end procedure*/
    // SubProg clear_op pc: 17 op: RETURNP (29)

// Exiting block BLOCK: clear_op
    return;
    // SubProg clear_op pc: 20 op: BADRETURNF (43)
    ;
}


void _47inlined_function()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg inlined_function pc: 1 op: STARTLINE (58)

    /** emit.e:689		previous_op = PROC*/
    // SubProg inlined_function pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg inlined_function pc: 5 op: ASSIGN (18)
    _36previous_op_16534 = 27;
    // SubProg inlined_function pc: 8 op: INTEGER_CHECK (96)
    // SubProg inlined_function pc: 10 op: STARTLINE (58)

    /** emit.e:690		assignable = TRUE*/
    // SubProg inlined_function pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg inlined_function pc: 14 op: ASSIGN (18)
    _47assignable_50387 = _13TRUE_452;
    // SubProg inlined_function pc: 17 op: STARTLINE (58)

    /** emit.e:691		inlined = TRUE*/
    // SubProg inlined_function pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg inlined_function pc: 21 op: ASSIGN (18)
    _47inlined_51285 = _13TRUE_452;
    // SubProg inlined_function pc: 24 op: STARTLINE (58)

    /** emit.e:692	end procedure*/
    // SubProg inlined_function pc: 26 op: RETURNP (29)

// Exiting block BLOCK: inlined_function
    return;
    // SubProg inlined_function pc: 29 op: BADRETURNF (43)
    ;
}


void _47add_inline_target(object _pc_51296)
{
// skipping _26410  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_inline_target pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_51296)) {
        _1 = (object)(DBL_PTR(_pc_51296)->dbl);
        DeRefDS(_pc_51296);
        _pc_51296 = _1;
    }
    // SubProg add_inline_target pc: 3 op: STARTLINE (58)

    /** emit.e:696		inlined_targets &= pc*/
    // SubProg add_inline_target pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_inline_target pc: 7 op: CONCAT (15)
    Append(&_47inlined_targets_51293, _47inlined_targets_51293, _pc_51296);
    // SubProg add_inline_target pc: 11 op: STARTLINE (58)

    /** emit.e:697	end procedure*/
    // SubProg add_inline_target pc: 13 op: RETURNP (29)

// Exiting block BLOCK: add_inline_target

// block var pc_51296
    return;
    // SubProg add_inline_target pc: 16 op: BADRETURNF (43)
    ;
}


void _47clear_inline_targets()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_inline_targets pc: 1 op: STARTLINE (58)

    /** emit.e:700		inlined_targets = {}*/
    // SubProg clear_inline_targets pc: 3 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_47inlined_targets_51293);
    _47inlined_targets_51293 = _21933;
    // SubProg clear_inline_targets pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg clear_inline_targets pc: 8 op: STARTLINE (58)

    /** emit.e:701	end procedure*/
    // SubProg clear_inline_targets pc: 10 op: RETURNP (29)

// Exiting block BLOCK: clear_inline_targets
    return;
    // SubProg clear_inline_targets pc: 13 op: BADRETURNF (43)
    ;
}


void _47emit_inline(object _code_51302)
{
// skipping _26411  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_inline pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg emit_inline pc: 3 op: STARTLINE (58)

    /** emit.e:704		last_pc = 0*/
    // SubProg emit_inline pc: 5 op: ASSIGN_I (113)
    _47last_pc_51267 = 0;
    // SubProg emit_inline pc: 8 op: STARTLINE (58)

    /** emit.e:705		last_op = 0*/
    // SubProg emit_inline pc: 10 op: ASSIGN_I (113)
    _47last_op_51266 = 0;
    // SubProg emit_inline pc: 13 op: STARTLINE (58)

    /** emit.e:706		Code &= code*/
    // SubProg emit_inline pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_inline pc: 17 op: CONCAT (15)
    Concat((object_ptr)&_36Code_16524, _36Code_16524, _code_51302);
    // SubProg emit_inline pc: 21 op: SEQUENCE_CHECK (97)
    // SubProg emit_inline pc: 23 op: STARTLINE (58)

    /** emit.e:707	end procedure*/
    // SubProg emit_inline pc: 25 op: RETURNP (29)

// Exiting block BLOCK: emit_inline

// block var code_51302
    DeRefDS(_code_51302);
    return;
    // SubProg emit_inline pc: 28 op: BADRETURNF (43)
    ;
}


void _47emit_op(object _op_51307)
{
    object _a_51309 = NOVALUE;
    object _b_51310 = NOVALUE;
    object _c_51311 = NOVALUE;
    object _d_51312 = NOVALUE;
    object _source_51313 = NOVALUE;
    object _target_51314 = NOVALUE;
    object _subsym_51315 = NOVALUE;
    object _lhs_var_51317 = NOVALUE;
    object _ib_51318 = NOVALUE;
    object _ic_51319 = NOVALUE;
    object _n_51320 = NOVALUE;
    object _obj_51321 = NOVALUE;
    object _elements_51322 = NOVALUE;
    object _element_vals_51323 = NOVALUE;
    object _last_pc_backup_51324 = NOVALUE;
    object _last_op_backup_51325 = NOVALUE;
    object _temp_51334 = NOVALUE;
    object _real_op_51634 = NOVALUE;
    object _ref_51641 = NOVALUE;
    object _paths_51671 = NOVALUE;
    object _if_code_51751 = NOVALUE;
    object _if_code_51790 = NOVALUE;
    object _Top_inlined_Top_at_5480_52408 = NOVALUE;
    object _element_52479 = NOVALUE;
    object _Top_inlined_Top_at_7035_52626 = NOVALUE;
    object _31694 = NOVALUE; // 63902 31694
    object _31693 = NOVALUE; // 63901 31693
    object _27006 = NOVALUE; // 52781 27006
    object _27005 = NOVALUE; // 52778 27005
    object _27004 = NOVALUE; // 52774 27004
// skipping _27003  name type: 0
// skipping _27002  name type: 0
// skipping _27001  name type: 0
    object _27000 = NOVALUE; // 52752 27000
// skipping _26999  name type: 0
// skipping _26998  name type: 0
    object _26997 = NOVALUE; // 52743 26997
// skipping _26996  name type: 0
    object _26995 = NOVALUE; // 52737 26995
// skipping _26994  name type: 0
// skipping _26993  name type: 0
// skipping _26992  name type: 0
// skipping _26991  name type: 0
// skipping _26990  name type: 0
    object _26989 = NOVALUE; // 52717 26989
    object _26988 = NOVALUE; // 52716 26988
    object _26987 = NOVALUE; // 52715 26987
// skipping _26986  name type: 0
    object _26985 = NOVALUE; // 52712 26985
// skipping _26984  name type: 0
    object _26983 = NOVALUE; // 52709 26983
    object _26982 = NOVALUE; // 52708 26982
    object _26981 = NOVALUE; // 52707 26981
    object _26980 = NOVALUE; // 52701 26980
    object _26979 = NOVALUE; // 52700 26979
    object _26978 = NOVALUE; // 52699 26978
    object _26977 = NOVALUE; // 52697 26977
    object _26976 = NOVALUE; // 52695 26976
    object _26975 = NOVALUE; // 52693 26975
    object _26974 = NOVALUE; // 52692 26974
    object _26973 = NOVALUE; // 52691 26973
// skipping _26972  name type: 0
    object _26971 = NOVALUE; // 52688 26971
    object _26970 = NOVALUE; // 52687 26970
    object _26969 = NOVALUE; // 52686 26969
// skipping _26968  name type: 0
    object _26967 = NOVALUE; // 52675 26967
    object _26966 = NOVALUE; // 52674 26966
    object _26965 = NOVALUE; // 52672 26965
    object _26964 = NOVALUE; // 52670 26964
    object _26963 = NOVALUE; // 52669 26963
    object _26962 = NOVALUE; // 52667 26962
    object _26961 = NOVALUE; // 52665 26961
    object _26960 = NOVALUE; // 52663 26960
    object _26959 = NOVALUE; // 52662 26959
// skipping _26958  name type: 0
// skipping _26957  name type: 0
    object _26956 = NOVALUE; // 52655 26956
// skipping _26955  name type: 0
// skipping _26954  name type: 0
    object _26953 = NOVALUE; // 52630 26953
    object _26952 = NOVALUE; // 52629 26952
    object _26951 = NOVALUE; // 52621 26951
    object _26950 = NOVALUE; // 52615 26950
// skipping _26949  name type: 0
    object _26948 = NOVALUE; // 52609 26948
// skipping _26947  name type: 0
    object _26946 = NOVALUE; // 52604 26946
// skipping _26945  name type: 0
// skipping _26944  name type: 0
// skipping _26943  name type: 0
// skipping _26942  name type: 0
// skipping _26941  name type: 0
// skipping _26940  name type: 0
// skipping _26939  name type: 0
// skipping _26938  name type: 0
// skipping _26937  name type: 0
// skipping _26936  name type: 0
// skipping _26935  name type: 0
    object _26934 = NOVALUE; // 52580 26934
// skipping _26933  name type: 0
// skipping _26932  name type: 0
// skipping _26931  name type: 0
// skipping _26930  name type: 0
// skipping _26929  name type: 0
// skipping _26928  name type: 0
// skipping _26927  name type: 0
    object _26926 = NOVALUE; // 52563 26926
// skipping _26925  name type: 0
// skipping _26924  name type: 0
    object _26923 = NOVALUE; // 52550 26923
    object _26922 = NOVALUE; // 52548 26922
    object _26921 = NOVALUE; // 52547 26921
    object _26920 = NOVALUE; // 52546 26920
// skipping _26919  name type: 0
// skipping _26918  name type: 0
    object _26917 = NOVALUE; // 52539 26917
    object _26916 = NOVALUE; // 52537 26916
    object _26915 = NOVALUE; // 52535 26915
    object _26914 = NOVALUE; // 52533 26914
    object _26913 = NOVALUE; // 52532 26913
    object _26912 = NOVALUE; // 52530 26912
    object _26911 = NOVALUE; // 52528 26911
    object _26910 = NOVALUE; // 52526 26910
    object _26909 = NOVALUE; // 52525 26909
    object _26908 = NOVALUE; // 52523 26908
    object _26907 = NOVALUE; // 52521 26907
// skipping _26906  name type: 0
    object _26905 = NOVALUE; // 52518 26905
// skipping _26904  name type: 0
// skipping _26903  name type: 0
// skipping _26902  name type: 0
    object _26901 = NOVALUE; // 52510 26901
    object _26900 = NOVALUE; // 52508 26900
    object _26899 = NOVALUE; // 52506 26899
    object _26898 = NOVALUE; // 52504 26898
    object _26897 = NOVALUE; // 52503 26897
    object _26896 = NOVALUE; // 52501 26896
    object _26895 = NOVALUE; // 52499 26895
    object _26894 = NOVALUE; // 52497 26894
    object _26893 = NOVALUE; // 52496 26893
    object _26892 = NOVALUE; // 52494 26892
    object _26891 = NOVALUE; // 52492 26891
// skipping _26890  name type: 0
    object _26889 = NOVALUE; // 52489 26889
// skipping _26888  name type: 0
// skipping _26887  name type: 0
// skipping _26886  name type: 0
// skipping _26885  name type: 0
    object _26884 = NOVALUE; // 52477 26884
    object _26883 = NOVALUE; // 52469 26883
// skipping _26882  name type: 0
    object _26881 = NOVALUE; // 52466 26881
    object _26880 = NOVALUE; // 52464 26880
    object _26879 = NOVALUE; // 52463 26879
// skipping _26878  name type: 0
    object _26877 = NOVALUE; // 52458 26877
// skipping _26876  name type: 0
// skipping _26875  name type: 0
    object _26874 = NOVALUE; // 52444 26874
// skipping _26873  name type: 0
// skipping _26872  name type: 0
// skipping _26871  name type: 0
    object _26870 = NOVALUE; // 52435 26870
// skipping _26869  name type: 0
// skipping _26868  name type: 0
    object _26867 = NOVALUE; // 52406 26867
    object _26866 = NOVALUE; // 52405 26866
    object _26865 = NOVALUE; // 52404 26865
    object _26864 = NOVALUE; // 52403 26864
    object _26863 = NOVALUE; // 52399 26863
    object _26862 = NOVALUE; // 52398 26862
// skipping _26861  name type: 0
    object _26860 = NOVALUE; // 52390 26860
    object _26859 = NOVALUE; // 52389 26859
// skipping _26858  name type: 0
    object _26857 = NOVALUE; // 52378 26857
    object _26856 = NOVALUE; // 52376 26856
    object _26855 = NOVALUE; // 52375 26855
    object _26854 = NOVALUE; // 52373 26854
    object _26853 = NOVALUE; // 52371 26853
    object _26852 = NOVALUE; // 52370 26852
    object _26851 = NOVALUE; // 52368 26851
    object _26850 = NOVALUE; // 52366 26850
    object _26849 = NOVALUE; // 52364 26849
    object _26848 = NOVALUE; // 52363 26848
// skipping _26847  name type: 0
    object _26846 = NOVALUE; // 52355 26846
    object _26845 = NOVALUE; // 52354 26845
    object _26844 = NOVALUE; // 52352 26844
    object _26843 = NOVALUE; // 52350 26843
    object _26842 = NOVALUE; // 52349 26842
    object _26841 = NOVALUE; // 52347 26841
    object _26840 = NOVALUE; // 52345 26840
    object _26839 = NOVALUE; // 52340 26839
    object _26838 = NOVALUE; // 52339 26838
    object _26837 = NOVALUE; // 52337 26837
    object _26836 = NOVALUE; // 52335 26836
    object _26835 = NOVALUE; // 52334 26835
    object _26834 = NOVALUE; // 52332 26834
    object _26833 = NOVALUE; // 52330 26833
    object _26832 = NOVALUE; // 52326 26832
// skipping _26831  name type: 0
    object _26830 = NOVALUE; // 52324 26830
// skipping _26829  name type: 0
// skipping _26828  name type: 0
    object _26827 = NOVALUE; // 52315 26827
    object _26826 = NOVALUE; // 52314 26826
    object _26825 = NOVALUE; // 52312 26825
    object _26824 = NOVALUE; // 52310 26824
    object _26823 = NOVALUE; // 52309 26823
    object _26822 = NOVALUE; // 52307 26822
    object _26821 = NOVALUE; // 52305 26821
    object _26820 = NOVALUE; // 52300 26820
    object _26819 = NOVALUE; // 52299 26819
    object _26818 = NOVALUE; // 52297 26818
    object _26817 = NOVALUE; // 52295 26817
    object _26816 = NOVALUE; // 52294 26816
    object _26815 = NOVALUE; // 52292 26815
    object _26814 = NOVALUE; // 52290 26814
    object _26813 = NOVALUE; // 52286 26813
// skipping _26812  name type: 0
    object _26811 = NOVALUE; // 52284 26811
// skipping _26810  name type: 0
// skipping _26809  name type: 0
// skipping _26808  name type: 0
    object _26807 = NOVALUE; // 52258 26807
// skipping _26806  name type: 0
    object _26805 = NOVALUE; // 52239 26805
    object _26804 = NOVALUE; // 52237 26804
// skipping _26803  name type: 0
    object _26802 = NOVALUE; // 52233 26802
// skipping _26801  name type: 0
    object _26800 = NOVALUE; // 52225 26800
// skipping _26799  name type: 0
    object _26798 = NOVALUE; // 52213 26798
    object _26797 = NOVALUE; // 52206 26797
// skipping _26796  name type: 0
    object _26795 = NOVALUE; // 52177 26795
    object _26794 = NOVALUE; // 52176 26794
    object _26793 = NOVALUE; // 52174 26793
    object _26792 = NOVALUE; // 52172 26792
    object _26791 = NOVALUE; // 52170 26791
    object _26790 = NOVALUE; // 52168 26790
    object _26789 = NOVALUE; // 52167 26789
    object _26788 = NOVALUE; // 52165 26788
    object _26787 = NOVALUE; // 52163 26787
    object _26786 = NOVALUE; // 52161 26786
    object _26785 = NOVALUE; // 52156 26785
    object _26784 = NOVALUE; // 52155 26784
    object _26783 = NOVALUE; // 52153 26783
    object _26782 = NOVALUE; // 52151 26782
    object _26781 = NOVALUE; // 52150 26781
    object _26780 = NOVALUE; // 52148 26780
    object _26779 = NOVALUE; // 52147 26779
    object _26778 = NOVALUE; // 52144 26778
    object _26777 = NOVALUE; // 52143 26777
// skipping _26776  name type: 0
    object _26775 = NOVALUE; // 52137 26775
// skipping _26774  name type: 0
    object _26773 = NOVALUE; // 52132 26773
    object _26772 = NOVALUE; // 52130 26772
// skipping _26771  name type: 0
    object _26770 = NOVALUE; // 52125 26770
// skipping _26769  name type: 0
// skipping _26768  name type: 0
    object _26767 = NOVALUE; // 52097 26767
    object _26766 = NOVALUE; // 52095 26766
// skipping _26765  name type: 0
    object _26764 = NOVALUE; // 52091 26764
    object _26763 = NOVALUE; // 52082 26763
    object _26762 = NOVALUE; // 52080 26762
// skipping _26761  name type: 0
    object _26760 = NOVALUE; // 52076 26760
// skipping _26759  name type: 0
// skipping _26758  name type: 0
// skipping _26757  name type: 0
// skipping _26756  name type: 0
// skipping _26755  name type: 0
// skipping _26754  name type: 0
// skipping _26753  name type: 0
    object _26752 = NOVALUE; // 52047 26752
    object _26751 = NOVALUE; // 52043 26751
    object _26750 = NOVALUE; // 52041 26750
    object _26749 = NOVALUE; // 52039 26749
    object _26748 = NOVALUE; // 52038 26748
    object _26747 = NOVALUE; // 52036 26747
    object _26746 = NOVALUE; // 52035 26746
    object _26745 = NOVALUE; // 52033 26745
    object _26744 = NOVALUE; // 52029 26744
    object _26743 = NOVALUE; // 52028 26743
    object _26742 = NOVALUE; // 52027 26742
    object _26741 = NOVALUE; // 52025 26741
    object _26740 = NOVALUE; // 52023 26740
    object _26739 = NOVALUE; // 52022 26739
    object _26738 = NOVALUE; // 52020 26738
    object _26737 = NOVALUE; // 52018 26737
    object _26736 = NOVALUE; // 52016 26736
    object _26735 = NOVALUE; // 52015 26735
    object _26734 = NOVALUE; // 52013 26734
    object _26733 = NOVALUE; // 52011 26733
    object _26732 = NOVALUE; // 52009 26732
    object _26731 = NOVALUE; // 52008 26731
    object _26730 = NOVALUE; // 52007 26730
    object _26729 = NOVALUE; // 52006 26729
// skipping _26728  name type: 0
// skipping _26727  name type: 0
// skipping _26726  name type: 0
// skipping _26725  name type: 0
// skipping _26724  name type: 0
    object _26723 = NOVALUE; // 51989 26723
    object _26722 = NOVALUE; // 51988 26722
// skipping _26721  name type: 0
// skipping _26720  name type: 0
    object _26719 = NOVALUE; // 51976 26719
// skipping _26718  name type: 0
// skipping _26717  name type: 0
    object _26716 = NOVALUE; // 51972 26716
    object _26715 = NOVALUE; // 51971 26715
    object _26714 = NOVALUE; // 51966 26714
    object _26713 = NOVALUE; // 51965 26713
    object _26712 = NOVALUE; // 51964 26712
    object _26711 = NOVALUE; // 51961 26711
    object _26710 = NOVALUE; // 51959 26710
    object _26709 = NOVALUE; // 51957 26709
    object _26708 = NOVALUE; // 51956 26708
    object _26707 = NOVALUE; // 51954 26707
// skipping _26706  name type: 0
    object _26705 = NOVALUE; // 51951 26705
    object _26704 = NOVALUE; // 51947 26704
    object _26703 = NOVALUE; // 51946 26703
// skipping _26702  name type: 0
    object _26701 = NOVALUE; // 51944 26701
// skipping _26700  name type: 0
    object _26699 = NOVALUE; // 51939 26699
    object _26698 = NOVALUE; // 51937 26698
    object _26697 = NOVALUE; // 51929 26697
    object _26696 = NOVALUE; // 51928 26696
    object _26695 = NOVALUE; // 51926 26695
    object _26694 = NOVALUE; // 51923 26694
    object _26693 = NOVALUE; // 51921 26693
    object _26692 = NOVALUE; // 51919 26692
    object _26691 = NOVALUE; // 51917 26691
    object _26690 = NOVALUE; // 51916 26690
// skipping _26689  name type: 0
    object _26688 = NOVALUE; // 51913 26688
    object _26687 = NOVALUE; // 51912 26687
// skipping _26686  name type: 0
    object _26685 = NOVALUE; // 51902 26685
    object _26684 = NOVALUE; // 51901 26684
    object _26683 = NOVALUE; // 51900 26683
    object _26682 = NOVALUE; // 51898 26682
    object _26681 = NOVALUE; // 51896 26681
// skipping _26680  name type: 0
    object _26679 = NOVALUE; // 51893 26679
    object _26678 = NOVALUE; // 51889 26678
    object _26677 = NOVALUE; // 51888 26677
    object _26676 = NOVALUE; // 51887 26676
    object _26675 = NOVALUE; // 51885 26675
    object _26674 = NOVALUE; // 51884 26674
    object _26673 = NOVALUE; // 51883 26673
    object _26672 = NOVALUE; // 51881 26672
// skipping _26671  name type: 0
    object _26670 = NOVALUE; // 51878 26670
    object _26669 = NOVALUE; // 51876 26669
    object _26668 = NOVALUE; // 51874 26668
    object _26667 = NOVALUE; // 51872 26667
    object _26666 = NOVALUE; // 51871 26666
// skipping _26665  name type: 0
    object _26664 = NOVALUE; // 51868 26664
    object _26663 = NOVALUE; // 51867 26663
// skipping _26662  name type: 0
    object _26661 = NOVALUE; // 51858 26661
    object _26660 = NOVALUE; // 51857 26660
    object _26659 = NOVALUE; // 51856 26659
    object _26658 = NOVALUE; // 51853 26658
    object _26657 = NOVALUE; // 51851 26657
// skipping _26656  name type: 0
    object _26655 = NOVALUE; // 51848 26655
// skipping _26654  name type: 0
    object _26653 = NOVALUE; // 51843 26653
// skipping _26652  name type: 0
    object _26651 = NOVALUE; // 51840 26651
    object _26650 = NOVALUE; // 51839 26650
// skipping _26649  name type: 0
    object _26648 = NOVALUE; // 51830 26648
    object _26647 = NOVALUE; // 51827 26647
    object _26646 = NOVALUE; // 51826 26646
    object _26645 = NOVALUE; // 51825 26645
    object _26644 = NOVALUE; // 51823 26644
    object _26643 = NOVALUE; // 51821 26643
    object _26642 = NOVALUE; // 51820 26642
    object _26641 = NOVALUE; // 51819 26641
    object _26640 = NOVALUE; // 51817 26640
    object _26639 = NOVALUE; // 51815 26639
    object _26638 = NOVALUE; // 51814 26638
    object _26637 = NOVALUE; // 51812 26637
    object _26636 = NOVALUE; // 51810 26636
    object _26635 = NOVALUE; // 51808 26635
    object _26634 = NOVALUE; // 51807 26634
    object _26633 = NOVALUE; // 51806 26633
    object _26632 = NOVALUE; // 51805 26632
// skipping _26631  name type: 0
// skipping _26630  name type: 0
    object _26629 = NOVALUE; // 51799 26629
    object _26628 = NOVALUE; // 51798 26628
// skipping _26627  name type: 0
    object _26626 = NOVALUE; // 51794 26626
    object _26625 = NOVALUE; // 51793 26625
    object _26624 = NOVALUE; // 51792 26624
    object _26623 = NOVALUE; // 51789 26623
    object _26622 = NOVALUE; // 51788 26622
// skipping _26621  name type: 0
    object _26620 = NOVALUE; // 51784 26620
// skipping _26619  name type: 0
    object _26618 = NOVALUE; // 51778 26618
    object _26617 = NOVALUE; // 51775 26617
    object _26616 = NOVALUE; // 51774 26616
    object _26615 = NOVALUE; // 51773 26615
    object _26614 = NOVALUE; // 51771 26614
    object _26613 = NOVALUE; // 51770 26613
    object _26612 = NOVALUE; // 51769 26612
    object _26611 = NOVALUE; // 51768 26611
    object _26610 = NOVALUE; // 51767 26610
// skipping _26609  name type: 0
// skipping _26608  name type: 0
    object _26607 = NOVALUE; // 51760 26607
    object _26606 = NOVALUE; // 51759 26606
// skipping _26605  name type: 0
    object _26604 = NOVALUE; // 51755 26604
    object _26603 = NOVALUE; // 51754 26603
    object _26602 = NOVALUE; // 51753 26602
    object _26601 = NOVALUE; // 51750 26601
    object _26600 = NOVALUE; // 51749 26600
// skipping _26599  name type: 0
// skipping _26598  name type: 0
    object _26597 = NOVALUE; // 51741 26597
    object _26596 = NOVALUE; // 51740 26596
    object _26595 = NOVALUE; // 51737 26595
    object _26594 = NOVALUE; // 51736 26594
    object _26593 = NOVALUE; // 51734 26593
    object _26592 = NOVALUE; // 51731 26592
    object _26591 = NOVALUE; // 51730 26591
// skipping _26590  name type: 0
// skipping _26589  name type: 0
// skipping _26588  name type: 0
// skipping _26587  name type: 0
    object _26586 = NOVALUE; // 51686 26586
    object _26585 = NOVALUE; // 51684 26585
    object _26584 = NOVALUE; // 51681 26584
// skipping _26583  name type: 0
    object _26582 = NOVALUE; // 51679 26582
    object _26581 = NOVALUE; // 51677 26581
// skipping _26580  name type: 0
    object _26579 = NOVALUE; // 51667 26579
    object _26578 = NOVALUE; // 51665 26578
// skipping _26577  name type: 0
// skipping _26576  name type: 0
// skipping _26575  name type: 0
// skipping _26574  name type: 0
    object _26573 = NOVALUE; // 51651 26573
    object _26572 = NOVALUE; // 51650 26572
    object _26571 = NOVALUE; // 51649 26571
    object _26570 = NOVALUE; // 51648 26570
    object _26569 = NOVALUE; // 51647 26569
// skipping _26568  name type: 0
// skipping _26567  name type: 0
// skipping _26566  name type: 0
// skipping _26565  name type: 0
// skipping _26564  name type: 0
    object _26563 = NOVALUE; // 51624 26563
    object _26562 = NOVALUE; // 51622 26562
// skipping _26561  name type: 0
    object _26560 = NOVALUE; // 51618 26560
    object _26559 = NOVALUE; // 51617 26559
    object _26558 = NOVALUE; // 51616 26558
    object _26557 = NOVALUE; // 51615 26557
    object _26556 = NOVALUE; // 51614 26556
    object _26555 = NOVALUE; // 51611 26555
    object _26554 = NOVALUE; // 51610 26554
    object _26553 = NOVALUE; // 51608 26553
    object _26552 = NOVALUE; // 51604 26552
    object _26551 = NOVALUE; // 51602 26551
    object _26550 = NOVALUE; // 51599 26550
// skipping _26549  name type: 0
    object _26548 = NOVALUE; // 51596 26548
    object _26547 = NOVALUE; // 51595 26547
    object _26546 = NOVALUE; // 51592 26546
    object _26545 = NOVALUE; // 51591 26545
    object _26544 = NOVALUE; // 51589 26544
    object _26543 = NOVALUE; // 51587 26543
    object _26542 = NOVALUE; // 51586 26542
    object _26541 = NOVALUE; // 51584 26541
    object _26540 = NOVALUE; // 51583 26540
    object _26539 = NOVALUE; // 51581 26539
    object _26538 = NOVALUE; // 51580 26538
    object _26537 = NOVALUE; // 51578 26537
    object _26536 = NOVALUE; // 51576 26536
    object _26535 = NOVALUE; // 51575 26535
// skipping _26534  name type: 0
    object _26533 = NOVALUE; // 51571 26533
    object _26532 = NOVALUE; // 51569 26532
    object _26531 = NOVALUE; // 51568 26531
    object _26530 = NOVALUE; // 51567 26530
// skipping _26529  name type: 0
// skipping _26528  name type: 0
    object _26527 = NOVALUE; // 51559 26527
    object _26526 = NOVALUE; // 51554 26526
    object _26525 = NOVALUE; // 51553 26525
    object _26524 = NOVALUE; // 51552 26524
// skipping _26523  name type: 0
    object _26522 = NOVALUE; // 51547 26522
    object _26521 = NOVALUE; // 51546 26521
    object _26520 = NOVALUE; // 51545 26520
    object _26519 = NOVALUE; // 51543 26519
// skipping _26518  name type: 0
    object _26517 = NOVALUE; // 51540 26517
    object _26516 = NOVALUE; // 51538 26516
    object _26515 = NOVALUE; // 51536 26515
    object _26514 = NOVALUE; // 51532 26514
    object _26513 = NOVALUE; // 51530 26513
    object _26512 = NOVALUE; // 51528 26512
    object _26511 = NOVALUE; // 51527 26511
    object _26510 = NOVALUE; // 51525 26510
    object _26509 = NOVALUE; // 51524 26509
    object _26508 = NOVALUE; // 51522 26508
    object _26507 = NOVALUE; // 51518 26507
    object _26506 = NOVALUE; // 51517 26506
    object _26505 = NOVALUE; // 51515 26505
    object _26504 = NOVALUE; // 51513 26504
// skipping _26503  name type: 0
    object _26502 = NOVALUE; // 51508 26502
    object _26501 = NOVALUE; // 51506 26501
    object _26500 = NOVALUE; // 51502 26500
    object _26499 = NOVALUE; // 51501 26499
    object _26498 = NOVALUE; // 51499 26498
// skipping _26497  name type: 0
    object _26496 = NOVALUE; // 51496 26496
    object _26495 = NOVALUE; // 51494 26495
    object _26494 = NOVALUE; // 51493 26494
    object _26493 = NOVALUE; // 51491 26493
    object _26492 = NOVALUE; // 51490 26492
// skipping _26491  name type: 0
// skipping _26490  name type: 0
// skipping _26489  name type: 0
    object _26488 = NOVALUE; // 51482 26488
    object _26487 = NOVALUE; // 51481 26487
    object _26486 = NOVALUE; // 51478 26486
    object _26485 = NOVALUE; // 51475 26485
    object _26484 = NOVALUE; // 51473 26484
// skipping _26483  name type: 0
    object _26482 = NOVALUE; // 51469 26482
    object _26481 = NOVALUE; // 51467 26481
    object _26480 = NOVALUE; // 51465 26480
    object _26479 = NOVALUE; // 51463 26479
    object _26478 = NOVALUE; // 51461 26478
    object _26477 = NOVALUE; // 51460 26477
    object _26476 = NOVALUE; // 51458 26476
    object _26475 = NOVALUE; // 51456 26475
    object _26474 = NOVALUE; // 51454 26474
    object _26473 = NOVALUE; // 51453 26473
    object _26472 = NOVALUE; // 51452 26472
    object _26471 = NOVALUE; // 51451 26471
    object _26470 = NOVALUE; // 51448 26470
    object _26469 = NOVALUE; // 51447 26469
    object _26468 = NOVALUE; // 51446 26468
    object _26467 = NOVALUE; // 51442 26467
    object _26466 = NOVALUE; // 51439 26466
    object _26465 = NOVALUE; // 51438 26465
// skipping _26464  name type: 0
    object _26463 = NOVALUE; // 51429 26463
    object _26462 = NOVALUE; // 51428 26462
    object _26461 = NOVALUE; // 51427 26461
    object _26460 = NOVALUE; // 51426 26460
    object _26459 = NOVALUE; // 51424 26459
    object _26458 = NOVALUE; // 51423 26458
    object _26457 = NOVALUE; // 51422 26457
    object _26456 = NOVALUE; // 51421 26456
    object _26455 = NOVALUE; // 51418 26455
// skipping _26454  name type: 0
    object _26453 = NOVALUE; // 51414 26453
    object _26452 = NOVALUE; // 51410 26452
    object _26451 = NOVALUE; // 51409 26451
// skipping _26450  name type: 0
    object _26449 = NOVALUE; // 51402 26449
    object _26448 = NOVALUE; // 51401 26448
// skipping _26447  name type: 0
    object _26446 = NOVALUE; // 51394 26446
// skipping _26445  name type: 0
    object _26444 = NOVALUE; // 51390 26444
    object _26443 = NOVALUE; // 51386 26443
    object _26442 = NOVALUE; // 51385 26442
    object _26441 = NOVALUE; // 51380 26441
    object _26440 = NOVALUE; // 51378 26440
    object _26439 = NOVALUE; // 51375 26439
// skipping _26438  name type: 0
// skipping _26437  name type: 0
// skipping _26436  name type: 0
    object _26435 = NOVALUE; // 51368 26435
    object _26434 = NOVALUE; // 51366 26434
    object _26433 = NOVALUE; // 51365 26433
// skipping _26432  name type: 0
    object _26431 = NOVALUE; // 51360 26431
    object _26430 = NOVALUE; // 51359 26430
    object _26429 = NOVALUE; // 51357 26429
    object _26428 = NOVALUE; // 51356 26428
    object _26427 = NOVALUE; // 51355 26427
    object _26426 = NOVALUE; // 51353 26426
    object _26425 = NOVALUE; // 51352 26425
    object _26424 = NOVALUE; // 51350 26424
    object _26423 = NOVALUE; // 51349 26423
    object _26422 = NOVALUE; // 51348 26422
    object _26421 = NOVALUE; // 51345 26421
    object _26420 = NOVALUE; // 51342 26420
    object _26419 = NOVALUE; // 51341 26419
    object _26418 = NOVALUE; // 51338 26418
    object _26417 = NOVALUE; // 51337 26417
// skipping _26413  name type: 0
    object _26412 = NOVALUE; // 51327 26412
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg emit_op pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_op_51307)) {
        _1 = (object)(DBL_PTR(_op_51307)->dbl);
        DeRefDS(_op_51307);
        _op_51307 = _1;
    }
    // SubProg emit_op pc: 3 op: STARTLINE (58)

    /** emit.e:717		integer ib, ic, n*/
    // SubProg emit_op pc: 5 op: STARTLINE (58)

    /** emit.e:718		object obj*/
    // SubProg emit_op pc: 7 op: STARTLINE (58)

    /** emit.e:719		sequence elements*/
    // SubProg emit_op pc: 9 op: STARTLINE (58)

    /** emit.e:720		object element_vals*/
    // SubProg emit_op pc: 11 op: STARTLINE (58)

    /** emit.e:722		check_for_temps()*/
    // SubProg emit_op pc: 13 op: PROC (27)
    _47check_for_temps();
    // SubProg emit_op pc: 15 op: STARTLINE (58)

    /** emit.e:723		integer last_pc_backup = last_pc*/
    // SubProg emit_op pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_op pc: 19 op: ASSIGN_I (113)
    _last_pc_backup_51324 = _47last_pc_51267;
    // SubProg emit_op pc: 22 op: STARTLINE (58)

    /** emit.e:724		integer last_op_backup = last_op*/
    // SubProg emit_op pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_op pc: 26 op: ASSIGN_I (113)
    _last_op_backup_51325 = _47last_op_51266;
    // SubProg emit_op pc: 29 op: STARTLINE (58)

    /** emit.e:726		last_op = op*/
    // SubProg emit_op pc: 31 op: ASSIGN_I (113)
    _47last_op_51266 = _op_51307;
    // SubProg emit_op pc: 34 op: STARTLINE (58)

    /** emit.e:727		last_pc = length(Code) + 1*/
    // SubProg emit_op pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_op pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_36Code_16524)){
            _26412 = SEQ_PTR(_36Code_16524)->length;
    }
    else {
        _26412 = 1;
    }
    // SubProg emit_op pc: 41 op: PLUS1_I (117)
    _47last_pc_51267 = _26412 + 1;
    _26412 = NOVALUE;
    // SubProg emit_op pc: 45 op: STARTLINE (58)

    /** emit.e:729		switch op label "EMIT" do*/
    // SubProg emit_op pc: 47 op: SWITCH_I (193)
    _0 = _op_51307;
    switch ( _0 ){ 
        // SubProg emit_op pc: 52 op: STARTLINE (58)

        /** emit.e:730		case ASSIGN then*/
        // SubProg emit_op pc: 54 op: CASE (186)
        case 18:
        // SubProg emit_op pc: 56 op: STARTLINE (58)

        /** emit.e:731			sequence temp = {}*/
        // SubProg emit_op pc: 58 op: ASSIGN (18)
        RefDS(_21933);
        DeRef(_temp_51334);
        _temp_51334 = _21933;
        // SubProg emit_op pc: 61 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 63 op: STARTLINE (58)

        /** emit.e:732			if not TRANSLATE and*/
        // SubProg emit_op pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 67 op: NOT (7)
        _26417 = (_36TRANSLATE_16061 == 0);
        // SubProg emit_op pc: 70 op: SC1_AND_IF (146)
        if (_26417 == 0) {
            goto L1; // [70] 202
        }
        // SubProg emit_op pc: 74 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 78 op: EQUALS (3)
        _26419 = (_36previous_op_16534 == 92);
        // SubProg emit_op pc: 82 op: SC1_OR (143)
        if (_26419 != 0) {
            DeRef(_26420);
            _26420 = 1;
            goto L2; // [82] 98
        }
        // SubProg emit_op pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 88 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 90 op: EQUALS (3)
        _26421 = (_36previous_op_16534 == 25);
        // SubProg emit_op pc: 94 op: SC2_OR (144)
        _26420 = (_26421 != 0);
        // SubProg emit_op pc: 97 op: NOP1 (159)
L2: // addr: 98 pc: 97 sub: 51305 op: 159
        // SubProg emit_op pc: 98 op: NOP1 (159)
        // SubProg emit_op pc: 99 op: IF (20)
        if (_26420 == 0)
        {
            _26420 = NOVALUE;
            goto L1; // [99] 202
        }
        else{
            _26420 = NOVALUE;
        }
        // SubProg emit_op pc: 102 op: STARTLINE (58)

        /** emit.e:736				while Code[$-1] = DEREF_TEMP and find( Code[$], derefs ) do*/
        // SubProg emit_op pc: 104 op: NOP2 (110)
        // SubProg emit_op pc: 106 op: NOPWHILE (158)
L3: // addr: 107 pc: 106 sub: 51305 op: 158
        // SubProg emit_op pc: 107 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 109 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26422 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26422 = 1;
        }
        // SubProg emit_op pc: 112 op: MINUS (10)
        _26423 = _26422 - 1;
        _26422 = NOVALUE;
        // SubProg emit_op pc: 116 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26424 = (object)*(((s1_ptr)_2)->base + _26423);
        // SubProg emit_op pc: 120 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 122 op: EQUALS (3)
        if (IS_ATOM_INT(_26424)) {
            _26425 = (_26424 == 208);
        }
        else {
            _26425 = binary_op(EQUALS, _26424, 208);
        }
        _26424 = NOVALUE;
        // SubProg emit_op pc: 126 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26425)) {
            if (_26425 == 0) {
                goto L4; // [126] 201
            }
        }
        else {
            if (DBL_PTR(_26425)->dbl == 0.0) {
                goto L4; // [126] 201
            }
        }
        // SubProg emit_op pc: 130 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 132 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26427 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26427 = 1;
        }
        // SubProg emit_op pc: 135 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26428 = (object)*(((s1_ptr)_2)->base + _26427);
        // SubProg emit_op pc: 139 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 141 op: FIND_FROM (176)
        _26429 = find_from(_26428, _47derefs_50888, 1);
        _26428 = NOVALUE;
        // SubProg emit_op pc: 146 op: NOP1 (159)
        // SubProg emit_op pc: 147 op: WHILE (47)
        if (_26429 == 0)
        {
            _26429 = NOVALUE;
            goto L4; // [147] 201
        }
        else{
            _26429 = NOVALUE;
        }
        // SubProg emit_op pc: 150 op: STARTLINE (58)

        /** emit.e:739					temp &= Code[$]*/
        // SubProg emit_op pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 154 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26430 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26430 = 1;
        }
        // SubProg emit_op pc: 157 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26431 = (object)*(((s1_ptr)_2)->base + _26430);
        // SubProg emit_op pc: 161 op: CONCAT (15)
        if (IS_SEQUENCE(_temp_51334) && IS_ATOM(_26431)) {
            Ref(_26431);
            Append(&_temp_51334, _temp_51334, _26431);
        }
        else if (IS_ATOM(_temp_51334) && IS_SEQUENCE(_26431)) {
        }
        else {
            Concat((object_ptr)&_temp_51334, _temp_51334, _26431);
        }
        _26431 = NOVALUE;
        // SubProg emit_op pc: 165 op: STARTLINE (58)

        /** emit.e:740					Code = remove( Code, length(Code)-1, length(Code) )*/
        // SubProg emit_op pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 169 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 171 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26433 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26433 = 1;
        }
        // SubProg emit_op pc: 174 op: MINUS (10)
        _26434 = _26433 - 1;
        _26433 = NOVALUE;
        // SubProg emit_op pc: 178 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 180 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26435 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26435 = 1;
        }
        // SubProg emit_op pc: 183 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_36Code_16524);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_26434)) ? _26434 : (object)(DBL_PTR(_26434)->dbl);
            int stop = (IS_ATOM_INT(_26435)) ? _26435 : (object)(DBL_PTR(_26435)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_36Code_16524), start, &_36Code_16524 );
                }
                else Tail(SEQ_PTR(_36Code_16524), stop+1, &_36Code_16524);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_36Code_16524), start, &_36Code_16524);
            }
            else {
                assign_slice_seq = &assign_space;
                _36Code_16524 = Remove_elements(start, stop, (SEQ_PTR(_36Code_16524)->ref == 1));
            }
        }
        _26434 = NOVALUE;
        _26435 = NOVALUE;
        // SubProg emit_op pc: 188 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 190 op: STARTLINE (58)

        /** emit.e:741					emit_temp( temp, NEW_REFERENCE )*/
        // SubProg emit_op pc: 192 op: PROC (27)
        RefDS(_temp_51334);
        _47emit_temp(_temp_51334, 1);
        // SubProg emit_op pc: 196 op: STARTLINE (58)

        /** emit.e:742				end while*/
        // SubProg emit_op pc: 198 op: ENDWHILE (22)
        goto L3; // [198] 107
        // SubProg emit_op pc: 200 op: NOP1 (159)
L4: // addr: 201 pc: 200 sub: 51305 op: 159
        // SubProg emit_op pc: 201 op: NOP1 (159)
L1: // addr: 202 pc: 201 sub: 51305 op: 159
        // SubProg emit_op pc: 202 op: STARTLINE (58)

        /** emit.e:746			source = Pop()*/
        // SubProg emit_op pc: 204 op: PROC (27)
        _source_51313 = _47Pop();
        // SubProg emit_op pc: 207 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_source_51313)) {
            _1 = (object)(DBL_PTR(_source_51313)->dbl);
            DeRefDS(_source_51313);
            _source_51313 = _1;
        }
        // SubProg emit_op pc: 209 op: STARTLINE (58)

        /** emit.e:747			target = Pop()*/
        // SubProg emit_op pc: 211 op: PROC (27)
        _target_51314 = _47Pop();
        // SubProg emit_op pc: 214 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_target_51314)) {
            _1 = (object)(DBL_PTR(_target_51314)->dbl);
            DeRefDS(_target_51314);
            _target_51314 = _1;
        }
        // SubProg emit_op pc: 216 op: STARTLINE (58)

        /** emit.e:748			if assignable then*/
        // SubProg emit_op pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 220 op: IF (20)
        if (_47assignable_50387 == 0)
        {
            goto L5; // [220] 601
        }
        else{
        }
        // SubProg emit_op pc: 223 op: STARTLINE (58)

        /** emit.e:750				if inlined then*/
        // SubProg emit_op pc: 225 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 227 op: IF (20)
        if (_47inlined_51285 == 0)
        {
            goto L6; // [227] 326
        }
        else{
        }
        // SubProg emit_op pc: 230 op: STARTLINE (58)

        /** emit.e:751					inlined = 0*/
        // SubProg emit_op pc: 232 op: ASSIGN (18)
        _47inlined_51285 = 0;
        // SubProg emit_op pc: 235 op: STARTLINE (58)

        /** emit.e:752					if length( inlined_targets ) then*/
        // SubProg emit_op pc: 237 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 239 op: LENGTH (42)
        if (IS_SEQUENCE(_47inlined_targets_51293)){
                _26439 = SEQ_PTR(_47inlined_targets_51293)->length;
        }
        else {
            _26439 = 1;
        }
        // SubProg emit_op pc: 242 op: IF (20)
        if (_26439 == 0)
        {
            _26439 = NOVALUE;
            goto L7; // [242] 295
        }
        else{
            _26439 = NOVALUE;
        }
        // SubProg emit_op pc: 245 op: STARTLINE (58)

        /** emit.e:753						for i = 1 to length( inlined_targets ) do*/
        // SubProg emit_op pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 249 op: LENGTH (42)
        if (IS_SEQUENCE(_47inlined_targets_51293)){
                _26440 = SEQ_PTR(_47inlined_targets_51293)->length;
        }
        else {
            _26440 = 1;
        }
        // SubProg emit_op pc: 252 op: FOR_I (125)
        {
            object _i_51377;
            _i_51377 = 1;
L8: // addr: 259 pc: 252 sub: 51305 op: 125
            if (_i_51377 > _26440){
                goto L9; // [252] 280
            }
            // SubProg emit_op pc: 259 op: STARTLINE (58)

            /** emit.e:754							Code[inlined_targets[i]] = target*/
            // SubProg emit_op pc: 261 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 263 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 265 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47inlined_targets_51293);
            _26441 = (object)*(((s1_ptr)_2)->base + _i_51377);
            // SubProg emit_op pc: 269 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_36Code_16524);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36Code_16524 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _26441);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _target_51314;
            DeRef(_1);
            // SubProg emit_op pc: 273 op: STARTLINE (58)

            /** emit.e:755						end for*/
            // SubProg emit_op pc: 275 op: ENDFOR_INT_UP1 (54)
            _i_51377 = _i_51377 + 1;
            goto L8; // [275] 259
L9: // addr: 280 pc: 275 sub: 51305 op: 54
            ;
        }
        // SubProg emit_op pc: 280 op: STARTLINE (58)

        /** emit.e:756						clear_inline_targets()*/
        // SubProg emit_op pc: 282 op: STARTLINE (58)

        /** emit.e:700		inlined_targets = {}*/
        // SubProg emit_op pc: 284 op: ASSIGN (18)
        RefDS(_21933);
        DeRefi(_47inlined_targets_51293);
        _47inlined_targets_51293 = _21933;
        // SubProg emit_op pc: 287 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 289 op: STARTLINE (58)

        /** emit.e:701	end procedure*/
        // SubProg emit_op pc: 291 op: ELSE (23)
        goto LA; // [291] 294
        // SubProg emit_op pc: 293 op: NOP1 (159)
LA: // addr: 294 pc: 293 sub: 51305 op: 159
        // SubProg emit_op pc: 294 op: NOP1 (159)
L7: // addr: 295 pc: 294 sub: 51305 op: 159
        // SubProg emit_op pc: 295 op: STARTLINE (58)

        /** emit.e:759					assignable = FALSE*/
        // SubProg emit_op pc: 297 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 299 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 302 op: STARTLINE (58)

        /** emit.e:760					clear_last()*/
        // SubProg emit_op pc: 304 op: STARTLINE (58)

        /** emit.e:678		last_op = 0*/
        // SubProg emit_op pc: 306 op: ASSIGN_I (113)
        _47last_op_51266 = 0;
        // SubProg emit_op pc: 309 op: STARTLINE (58)

        /** emit.e:679		last_pc = 0*/
        // SubProg emit_op pc: 311 op: ASSIGN_I (113)
        _47last_pc_51267 = 0;
        // SubProg emit_op pc: 314 op: STARTLINE (58)

        /** emit.e:680	end procedure*/
        // SubProg emit_op pc: 316 op: ELSE (23)
        goto LB; // [316] 319
        // SubProg emit_op pc: 318 op: NOP1 (159)
LB: // addr: 319 pc: 318 sub: 51305 op: 159
        // SubProg emit_op pc: 319 op: STARTLINE (58)

        /** emit.e:761					break "EMIT"*/
        // SubProg emit_op pc: 321 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var temp_51334
        DeRef(_temp_51334);
        _temp_51334 = NOVALUE;
        // SubProg emit_op pc: 323 op: ELSE (23)
        goto LC; // [323] 7737
        // SubProg emit_op pc: 325 op: NOP1 (159)
L6: // addr: 326 pc: 325 sub: 51305 op: 159
        // SubProg emit_op pc: 326 op: NOP1 (159)
        // SubProg emit_op pc: 327 op: STARTLINE (58)

        /** emit.e:764				clear_temp( Code[$] )*/
        // SubProg emit_op pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 331 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26442 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26442 = 1;
        }
        // SubProg emit_op pc: 334 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26443 = (object)*(((s1_ptr)_2)->base + _26442);
        // SubProg emit_op pc: 338 op: PROC (27)
        Ref(_26443);
        _47clear_temp(_26443);
        _26443 = NOVALUE;
        // SubProg emit_op pc: 341 op: STARTLINE (58)

        /** emit.e:765				Code = remove( Code, length( Code ) ) -- drop previous target*/
        // SubProg emit_op pc: 343 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 345 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 347 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26444 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26444 = 1;
        }
        // SubProg emit_op pc: 350 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_36Code_16524);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_26444)) ? _26444 : (object)(DBL_PTR(_26444)->dbl);
            int stop = (IS_ATOM_INT(_26444)) ? _26444 : (object)(DBL_PTR(_26444)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_36Code_16524), start, &_36Code_16524 );
                }
                else Tail(SEQ_PTR(_36Code_16524), stop+1, &_36Code_16524);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_36Code_16524), start, &_36Code_16524);
            }
            else {
                assign_slice_seq = &assign_space;
                _36Code_16524 = Remove_elements(start, stop, (SEQ_PTR(_36Code_16524)->ref == 1));
            }
        }
        _26444 = NOVALUE;
        _26444 = NOVALUE;
        // SubProg emit_op pc: 355 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 357 op: STARTLINE (58)

        /** emit.e:766				op = previous_op -- keep same previous op*/
        // SubProg emit_op pc: 359 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 361 op: ASSIGN (18)
        _op_51307 = _36previous_op_16534;
        // SubProg emit_op pc: 364 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 366 op: STARTLINE (58)

        /** emit.e:767				if IsInteger(target) then*/
        // SubProg emit_op pc: 368 op: PROC (27)
        _26446 = _47IsInteger(_target_51314);
        // SubProg emit_op pc: 372 op: IF (20)
        if (_26446 == 0) {
            DeRef(_26446);
            _26446 = NOVALUE;
            goto LD; // [372] 588
        }
        else {
            if (!IS_ATOM_INT(_26446) && DBL_PTR(_26446)->dbl == 0.0){
                DeRef(_26446);
                _26446 = NOVALUE;
                goto LD; // [372] 588
            }
            DeRef(_26446);
            _26446 = NOVALUE;
        }
        DeRef(_26446);
        _26446 = NOVALUE;
        // SubProg emit_op pc: 375 op: STARTLINE (58)

        /** emit.e:768					if previous_op = RHS_SUBS then*/
        // SubProg emit_op pc: 377 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 379 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 381 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 25)
        goto LE; // [381] 412
        // SubProg emit_op pc: 385 op: STARTLINE (58)

        /** emit.e:769						op = RHS_SUBS_I*/
        // SubProg emit_op pc: 387 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 389 op: ASSIGN (18)
        _op_51307 = 114;
        // SubProg emit_op pc: 392 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 394 op: STARTLINE (58)

        /** emit.e:770						backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 396 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 398 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26448 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26448 = 1;
        }
        // SubProg emit_op pc: 401 op: MINUS (10)
        _26449 = _26448 - 2;
        _26448 = NOVALUE;
        // SubProg emit_op pc: 405 op: PROC (27)
        _47backpatch(_26449, 114);
        _26449 = NOVALUE;
        // SubProg emit_op pc: 409 op: ELSE (23)
        goto LF; // [409] 587
        // SubProg emit_op pc: 411 op: NOP1 (159)
LE: // addr: 412 pc: 411 sub: 51305 op: 159
        // SubProg emit_op pc: 412 op: STARTLINE (58)

        /** emit.e:772					elsif previous_op = PLUS1 then*/
        // SubProg emit_op pc: 414 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 416 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 418 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 93)
        goto L10; // [418] 449
        // SubProg emit_op pc: 422 op: STARTLINE (58)

        /** emit.e:773						op = PLUS1_I*/
        // SubProg emit_op pc: 424 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 426 op: ASSIGN (18)
        _op_51307 = 117;
        // SubProg emit_op pc: 429 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 431 op: STARTLINE (58)

        /** emit.e:774						backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 433 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 435 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26451 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26451 = 1;
        }
        // SubProg emit_op pc: 438 op: MINUS (10)
        _26452 = _26451 - 2;
        _26451 = NOVALUE;
        // SubProg emit_op pc: 442 op: PROC (27)
        _47backpatch(_26452, 117);
        _26452 = NOVALUE;
        // SubProg emit_op pc: 446 op: ELSE (23)
        goto LF; // [446] 587
        // SubProg emit_op pc: 448 op: NOP1 (159)
L10: // addr: 449 pc: 448 sub: 51305 op: 159
        // SubProg emit_op pc: 449 op: STARTLINE (58)

        /** emit.e:776					elsif previous_op = PLUS or previous_op = MINUS then*/
        // SubProg emit_op pc: 451 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 453 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 455 op: EQUALS (3)
        _26453 = (_36previous_op_16534 == 11);
        // SubProg emit_op pc: 459 op: SC1_OR_IF (147)
        if (_26453 != 0) {
            goto L11; // [459] 476
        }
        // SubProg emit_op pc: 463 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 465 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 467 op: EQUALS (3)
        _26455 = (_36previous_op_16534 == 10);
        // SubProg emit_op pc: 471 op: NOP1 (159)
        // SubProg emit_op pc: 472 op: IF (20)
        if (_26455 == 0)
        {
            DeRef(_26455);
            _26455 = NOVALUE;
            goto L12; // [472] 567
        }
        else{
            DeRef(_26455);
            _26455 = NOVALUE;
        }
        // SubProg emit_op pc: 475 op: NOP1 (159)
L11: // addr: 476 pc: 475 sub: 51305 op: 159
        // SubProg emit_op pc: 476 op: STARTLINE (58)

        /** emit.e:777						if IsInteger(Code[$]) and*/
        // SubProg emit_op pc: 478 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 480 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26456 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26456 = 1;
        }
        // SubProg emit_op pc: 483 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26457 = (object)*(((s1_ptr)_2)->base + _26456);
        // SubProg emit_op pc: 487 op: PROC (27)
        Ref(_26457);
        _26458 = _47IsInteger(_26457);
        _26457 = NOVALUE;
        // SubProg emit_op pc: 491 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26458)) {
            if (_26458 == 0) {
                goto LF; // [491] 587
            }
        }
        else {
            if (DBL_PTR(_26458)->dbl == 0.0) {
                goto LF; // [491] 587
            }
        }
        // SubProg emit_op pc: 495 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 497 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26460 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26460 = 1;
        }
        // SubProg emit_op pc: 500 op: MINUS (10)
        _26461 = _26460 - 1;
        _26460 = NOVALUE;
        // SubProg emit_op pc: 504 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26462 = (object)*(((s1_ptr)_2)->base + _26461);
        // SubProg emit_op pc: 508 op: PROC (27)
        Ref(_26462);
        _26463 = _47IsInteger(_26462);
        _26462 = NOVALUE;
        // SubProg emit_op pc: 512 op: NOP1 (159)
        // SubProg emit_op pc: 513 op: IF (20)
        if (_26463 == 0) {
            DeRef(_26463);
            _26463 = NOVALUE;
            goto LF; // [513] 587
        }
        else {
            if (!IS_ATOM_INT(_26463) && DBL_PTR(_26463)->dbl == 0.0){
                DeRef(_26463);
                _26463 = NOVALUE;
                goto LF; // [513] 587
            }
            DeRef(_26463);
            _26463 = NOVALUE;
        }
        DeRef(_26463);
        _26463 = NOVALUE;
        // SubProg emit_op pc: 516 op: STARTLINE (58)

        /** emit.e:779							if previous_op = PLUS then*/
        // SubProg emit_op pc: 518 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 520 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 522 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 11)
        goto L13; // [522] 538
        // SubProg emit_op pc: 526 op: STARTLINE (58)

        /** emit.e:780								op = PLUS_I*/
        // SubProg emit_op pc: 528 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 530 op: ASSIGN (18)
        _op_51307 = 115;
        // SubProg emit_op pc: 533 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 535 op: ELSE (23)
        goto L14; // [535] 548
        // SubProg emit_op pc: 537 op: NOP1 (159)
L13: // addr: 538 pc: 537 sub: 51305 op: 159
        // SubProg emit_op pc: 538 op: STARTLINE (58)

        /** emit.e:782								op = MINUS_I*/
        // SubProg emit_op pc: 540 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 542 op: ASSIGN (18)
        _op_51307 = 116;
        // SubProg emit_op pc: 545 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 547 op: NOP1 (159)
L14: // addr: 548 pc: 547 sub: 51305 op: 159
        // SubProg emit_op pc: 548 op: STARTLINE (58)

        /** emit.e:784							backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 550 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 552 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26465 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26465 = 1;
        }
        // SubProg emit_op pc: 555 op: MINUS (10)
        _26466 = _26465 - 2;
        _26465 = NOVALUE;
        // SubProg emit_op pc: 559 op: PROC (27)
        _47backpatch(_26466, _op_51307);
        _26466 = NOVALUE;
        // SubProg emit_op pc: 563 op: NOP1 (159)
        // SubProg emit_op pc: 564 op: ELSE (23)
        goto LF; // [564] 587
        // SubProg emit_op pc: 566 op: NOP1 (159)
L12: // addr: 567 pc: 566 sub: 51305 op: 159
        // SubProg emit_op pc: 567 op: STARTLINE (58)

        /** emit.e:790						if IsInteger(source) then*/
        // SubProg emit_op pc: 569 op: PROC (27)
        _26467 = _47IsInteger(_source_51313);
        // SubProg emit_op pc: 573 op: IF (20)
        if (_26467 == 0) {
            DeRef(_26467);
            _26467 = NOVALUE;
            goto L15; // [573] 586
        }
        else {
            if (!IS_ATOM_INT(_26467) && DBL_PTR(_26467)->dbl == 0.0){
                DeRef(_26467);
                _26467 = NOVALUE;
                goto L15; // [573] 586
            }
            DeRef(_26467);
            _26467 = NOVALUE;
        }
        DeRef(_26467);
        _26467 = NOVALUE;
        // SubProg emit_op pc: 576 op: STARTLINE (58)

        /** emit.e:791							op = ASSIGN_I -- fake to avoid subsequent check*/
        // SubProg emit_op pc: 578 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 580 op: ASSIGN (18)
        _op_51307 = 113;
        // SubProg emit_op pc: 583 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 585 op: NOP1 (159)
L15: // addr: 586 pc: 585 sub: 51305 op: 159
        // SubProg emit_op pc: 586 op: NOP1 (159)
LF: // addr: 587 pc: 586 sub: 51305 op: 159
        // SubProg emit_op pc: 587 op: NOP1 (159)
LD: // addr: 588 pc: 587 sub: 51305 op: 159
        // SubProg emit_op pc: 588 op: STARTLINE (58)

        /** emit.e:795				last_op = last_op_backup*/
        // SubProg emit_op pc: 590 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 593 op: STARTLINE (58)

        /** emit.e:796				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 595 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 598 op: ELSE (23)
        goto L16; // [598] 743
        // SubProg emit_op pc: 600 op: NOP1 (159)
L5: // addr: 601 pc: 600 sub: 51305 op: 159
        // SubProg emit_op pc: 601 op: STARTLINE (58)

        /** emit.e:798				if IsInteger(source) and IsInteger(target) then*/
        // SubProg emit_op pc: 603 op: PROC (27)
        _26468 = _47IsInteger(_source_51313);
        // SubProg emit_op pc: 607 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26468)) {
            if (_26468 == 0) {
                goto L17; // [607] 629
            }
        }
        else {
            if (DBL_PTR(_26468)->dbl == 0.0) {
                goto L17; // [607] 629
            }
        }
        // SubProg emit_op pc: 611 op: PROC (27)
        _26470 = _47IsInteger(_target_51314);
        // SubProg emit_op pc: 615 op: NOP1 (159)
        // SubProg emit_op pc: 616 op: IF (20)
        if (_26470 == 0) {
            DeRef(_26470);
            _26470 = NOVALUE;
            goto L17; // [616] 629
        }
        else {
            if (!IS_ATOM_INT(_26470) && DBL_PTR(_26470)->dbl == 0.0){
                DeRef(_26470);
                _26470 = NOVALUE;
                goto L17; // [616] 629
            }
            DeRef(_26470);
            _26470 = NOVALUE;
        }
        DeRef(_26470);
        _26470 = NOVALUE;
        // SubProg emit_op pc: 619 op: STARTLINE (58)

        /** emit.e:799					op = ASSIGN_I*/
        // SubProg emit_op pc: 621 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 623 op: ASSIGN (18)
        _op_51307 = 113;
        // SubProg emit_op pc: 626 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 628 op: NOP1 (159)
L17: // addr: 629 pc: 628 sub: 51305 op: 159
        // SubProg emit_op pc: 629 op: STARTLINE (58)

        /** emit.e:801				if source > 0 and target > 0 and*/
        // SubProg emit_op pc: 631 op: GREATER (6)
        _26471 = (_source_51313 > 0);
        // SubProg emit_op pc: 635 op: SC1_AND (141)
        if (_26471 == 0) {
            _26472 = 0;
            goto L18; // [635] 647
        }
        // SubProg emit_op pc: 639 op: GREATER (6)
        _26473 = (_target_51314 > 0);
        // SubProg emit_op pc: 643 op: SC2_AND (142)
        _26472 = (_26473 != 0);
        // SubProg emit_op pc: 646 op: NOP1 (159)
L18: // addr: 647 pc: 646 sub: 51305 op: 159
        // SubProg emit_op pc: 647 op: SC1_AND (141)
        if (_26472 == 0) {
            _26474 = 0;
            goto L19; // [647] 673
        }
        // SubProg emit_op pc: 651 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 653 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26475 = (object)*(((s1_ptr)_2)->base + _source_51313);
        // SubProg emit_op pc: 657 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 659 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26475);
        _26476 = (object)*(((s1_ptr)_2)->base + 3);
        _26475 = NOVALUE;
        // SubProg emit_op pc: 663 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 665 op: EQUALS (3)
        if (IS_ATOM_INT(_26476)) {
            _26477 = (_26476 == 2);
        }
        else {
            _26477 = binary_op(EQUALS, _26476, 2);
        }
        _26476 = NOVALUE;
        // SubProg emit_op pc: 669 op: SC2_AND (142)
        if (IS_ATOM_INT(_26477))
        _26474 = (_26477 != 0);
        else
        _26474 = DBL_PTR(_26477)->dbl != 0.0;
        // SubProg emit_op pc: 672 op: NOP1 (159)
L19: // addr: 673 pc: 672 sub: 51305 op: 159
        // SubProg emit_op pc: 673 op: SC1_AND_IF (146)
        if (_26474 == 0) {
            goto L1A; // [673] 727
        }
        // SubProg emit_op pc: 677 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 679 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26479 = (object)*(((s1_ptr)_2)->base + _target_51314);
        // SubProg emit_op pc: 683 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 685 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26479);
        _26480 = (object)*(((s1_ptr)_2)->base + 3);
        _26479 = NOVALUE;
        // SubProg emit_op pc: 689 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 691 op: EQUALS (3)
        if (IS_ATOM_INT(_26480)) {
            _26481 = (_26480 == 2);
        }
        else {
            _26481 = binary_op(EQUALS, _26480, 2);
        }
        _26480 = NOVALUE;
        // SubProg emit_op pc: 695 op: NOP1 (159)
        // SubProg emit_op pc: 696 op: IF (20)
        if (_26481 == 0) {
            DeRef(_26481);
            _26481 = NOVALUE;
            goto L1A; // [696] 727
        }
        else {
            if (!IS_ATOM_INT(_26481) && DBL_PTR(_26481)->dbl == 0.0){
                DeRef(_26481);
                _26481 = NOVALUE;
                goto L1A; // [696] 727
            }
            DeRef(_26481);
            _26481 = NOVALUE;
        }
        DeRef(_26481);
        _26481 = NOVALUE;
        // SubProg emit_op pc: 699 op: STARTLINE (58)

        /** emit.e:806					SymTab[target][S_OBJ] = SymTab[source][S_OBJ]*/
        // SubProg emit_op pc: 701 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 703 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_target_51314 + ((s1_ptr)_2)->base);
        // SubProg emit_op pc: 708 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 710 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 712 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26484 = (object)*(((s1_ptr)_2)->base + _source_51313);
        // SubProg emit_op pc: 716 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 718 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26484);
        _26485 = (object)*(((s1_ptr)_2)->base + 1);
        _26484 = NOVALUE;
        // SubProg emit_op pc: 722 op: PASSIGN_SUBS (162)
        Ref(_26485);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26485;
        if( _1 != _26485 ){
            DeRef(_1);
        }
        _26485 = NOVALUE;
        _26482 = NOVALUE;
        // SubProg emit_op pc: 726 op: NOP1 (159)
L1A: // addr: 727 pc: 726 sub: 51305 op: 159
        // SubProg emit_op pc: 727 op: STARTLINE (58)

        /** emit.e:809				emit_opcode(op)*/
        // SubProg emit_op pc: 729 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 732 op: STARTLINE (58)

        /** emit.e:810				emit_addr(source)*/
        // SubProg emit_op pc: 734 op: PROC (27)
        _47emit_addr(_source_51313);
        // SubProg emit_op pc: 737 op: STARTLINE (58)

        /** emit.e:811				last_op = op*/
        // SubProg emit_op pc: 739 op: ASSIGN_I (113)
        _47last_op_51266 = _op_51307;
        // SubProg emit_op pc: 742 op: NOP1 (159)
L16: // addr: 743 pc: 742 sub: 51305 op: 159
        // SubProg emit_op pc: 743 op: STARTLINE (58)

        /** emit.e:814			assignable = FALSE*/
        // SubProg emit_op pc: 745 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 747 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 750 op: STARTLINE (58)

        /** emit.e:815			emit_addr(target)*/
        // SubProg emit_op pc: 752 op: PROC (27)
        _47emit_addr(_target_51314);
        // SubProg emit_op pc: 755 op: STARTLINE (58)

        /** emit.e:817			if length(temp) then*/
        // SubProg emit_op pc: 757 op: LENGTH (42)
        if (IS_SEQUENCE(_temp_51334)){
                _26486 = SEQ_PTR(_temp_51334)->length;
        }
        else {
            _26486 = 1;
        }
        // SubProg emit_op pc: 760 op: IF (20)
        if (_26486 == 0)
        {
            _26486 = NOVALUE;
            goto L1B; // [760] 792
        }
        else{
            _26486 = NOVALUE;
        }
        // SubProg emit_op pc: 763 op: STARTLINE (58)

        /** emit.e:819				for i = 1 to length( temp ) do*/
        // SubProg emit_op pc: 765 op: LENGTH (42)
        if (IS_SEQUENCE(_temp_51334)){
                _26487 = SEQ_PTR(_temp_51334)->length;
        }
        else {
            _26487 = 1;
        }
        // SubProg emit_op pc: 768 op: FOR_I (125)
        {
            object _i_51480;
            _i_51480 = 1;
L1C: // addr: 775 pc: 768 sub: 51305 op: 125
            if (_i_51480 > _26487){
                goto L1D; // [768] 791
            }
            // SubProg emit_op pc: 775 op: STARTLINE (58)

            /** emit.e:820					flush_temp( temp[i] )*/
            // SubProg emit_op pc: 777 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_temp_51334);
            _26488 = (object)*(((s1_ptr)_2)->base + _i_51480);
            // SubProg emit_op pc: 781 op: PROC (27)
            Ref(_26488);
            _47flush_temp(_26488);
            _26488 = NOVALUE;
            // SubProg emit_op pc: 784 op: STARTLINE (58)

            /** emit.e:821				end for*/
            // SubProg emit_op pc: 786 op: ENDFOR_INT_UP1 (54)
            _i_51480 = _i_51480 + 1;
            goto L1C; // [786] 775
L1D: // addr: 791 pc: 786 sub: 51305 op: 54
            ;
        }
        // SubProg emit_op pc: 791 op: NOP1 (159)
L1B: // addr: 792 pc: 791 sub: 51305 op: 159
        // SubProg emit_op pc: 792 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var temp_51334
        DeRef(_temp_51334);
        _temp_51334 = NOVALUE;
        // SubProg emit_op pc: 794 op: ELSE (23)
        goto LC; // [794] 7737
        // SubProg emit_op pc: 796 op: STARTLINE (58)

        /** emit.e:824		case RHS_SUBS then*/
        // SubProg emit_op pc: 798 op: CASE (186)
        case 25:
        // SubProg emit_op pc: 800 op: STARTLINE (58)

        /** emit.e:825			b = Pop() -- subscript*/
        // SubProg emit_op pc: 802 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 805 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 807 op: STARTLINE (58)

        /** emit.e:826			c = Pop() -- sequence*/
        // SubProg emit_op pc: 809 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 812 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 814 op: STARTLINE (58)

        /** emit.e:827			target = NewTempSym() -- target*/
        // SubProg emit_op pc: 816 op: PROC (27)
        _target_51314 = _54NewTempSym(0);
        // SubProg emit_op pc: 820 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_target_51314)) {
            _1 = (object)(DBL_PTR(_target_51314)->dbl);
            DeRefDS(_target_51314);
            _target_51314 = _1;
        }
        // SubProg emit_op pc: 822 op: STARTLINE (58)

        /** emit.e:828			if c < 0 or length(SymTab[c]) < S_VTYPE or SymTab[c][S_VTYPE] < 0 then -- forward reference*/
        // SubProg emit_op pc: 824 op: LESS (1)
        _26492 = (_c_51311 < 0);
        // SubProg emit_op pc: 828 op: SC1_OR (143)
        if (_26492 != 0) {
            _26493 = 1;
            goto L1E; // [828] 851
        }
        // SubProg emit_op pc: 832 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 834 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26494 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 838 op: LENGTH (42)
        if (IS_SEQUENCE(_26494)){
                _26495 = SEQ_PTR(_26494)->length;
        }
        else {
            _26495 = 1;
        }
        _26494 = NOVALUE;
        // SubProg emit_op pc: 841 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 843 op: LESS (1)
        _26496 = (_26495 < 15);
        _26495 = NOVALUE;
        // SubProg emit_op pc: 847 op: SC2_OR (144)
        _26493 = (_26496 != 0);
        // SubProg emit_op pc: 850 op: NOP1 (159)
L1E: // addr: 851 pc: 850 sub: 51305 op: 159
        // SubProg emit_op pc: 851 op: SC1_OR_IF (147)
        if (_26493 != 0) {
            goto L1F; // [851] 876
        }
        // SubProg emit_op pc: 855 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 857 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26498 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 861 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 863 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26498);
        _26499 = (object)*(((s1_ptr)_2)->base + 15);
        _26498 = NOVALUE;
        // SubProg emit_op pc: 867 op: LESS (1)
        if (IS_ATOM_INT(_26499)) {
            _26500 = (_26499 < 0);
        }
        else {
            _26500 = binary_op(LESS, _26499, 0);
        }
        _26499 = NOVALUE;
        // SubProg emit_op pc: 871 op: NOP1 (159)
        // SubProg emit_op pc: 872 op: IF (20)
        if (_26500 == 0) {
            DeRef(_26500);
            _26500 = NOVALUE;
            goto L20; // [872] 888
        }
        else {
            if (!IS_ATOM_INT(_26500) && DBL_PTR(_26500)->dbl == 0.0){
                DeRef(_26500);
                _26500 = NOVALUE;
                goto L20; // [872] 888
            }
            DeRef(_26500);
            _26500 = NOVALUE;
        }
        DeRef(_26500);
        _26500 = NOVALUE;
        // SubProg emit_op pc: 875 op: NOP1 (159)
L1F: // addr: 876 pc: 875 sub: 51305 op: 159
        // SubProg emit_op pc: 876 op: STARTLINE (58)

        /** emit.e:830				op = RHS_SUBS_CHECK*/
        // SubProg emit_op pc: 878 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 880 op: ASSIGN (18)
        _op_51307 = 92;
        // SubProg emit_op pc: 883 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 885 op: ELSE (23)
        goto L21; // [885] 1049
        // SubProg emit_op pc: 887 op: NOP1 (159)
L20: // addr: 888 pc: 887 sub: 51305 op: 159
        // SubProg emit_op pc: 888 op: STARTLINE (58)

        /** emit.e:831			elsif SymTab[c][S_MODE] = M_NORMAL then*/
        // SubProg emit_op pc: 890 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 892 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26501 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 896 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 898 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26501);
        _26502 = (object)*(((s1_ptr)_2)->base + 3);
        _26501 = NOVALUE;
        // SubProg emit_op pc: 902 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 904 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26502, 1)){
            _26502 = NOVALUE;
            goto L22; // [904] 991
        }
        _26502 = NOVALUE;
        // SubProg emit_op pc: 908 op: STARTLINE (58)

        /** emit.e:832				if SymTab[c][S_VTYPE] != sequence_type and*/
        // SubProg emit_op pc: 910 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 912 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26504 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 916 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 918 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26504);
        _26505 = (object)*(((s1_ptr)_2)->base + 15);
        _26504 = NOVALUE;
        // SubProg emit_op pc: 922 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 924 op: NOTEQ (4)
        if (IS_ATOM_INT(_26505)) {
            _26506 = (_26505 != _54sequence_type_46259);
        }
        else {
            _26506 = binary_op(NOTEQ, _26505, _54sequence_type_46259);
        }
        _26505 = NOVALUE;
        // SubProg emit_op pc: 928 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26506)) {
            if (_26506 == 0) {
                goto L21; // [928] 1049
            }
        }
        else {
            if (DBL_PTR(_26506)->dbl == 0.0) {
                goto L21; // [928] 1049
            }
        }
        // SubProg emit_op pc: 932 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 934 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 936 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 938 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26508 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 942 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 944 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26508);
        _26509 = (object)*(((s1_ptr)_2)->base + 15);
        _26508 = NOVALUE;
        // SubProg emit_op pc: 948 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_26509)){
            _26510 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26509)->dbl));
        }
        else{
            _26510 = (object)*(((s1_ptr)_2)->base + _26509);
        }
        // SubProg emit_op pc: 952 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 954 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26510);
        _26511 = (object)*(((s1_ptr)_2)->base + 2);
        _26510 = NOVALUE;
        // SubProg emit_op pc: 958 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_26511)){
            _26512 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26511)->dbl));
        }
        else{
            _26512 = (object)*(((s1_ptr)_2)->base + _26511);
        }
        // SubProg emit_op pc: 962 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 964 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26512);
        _26513 = (object)*(((s1_ptr)_2)->base + 15);
        _26512 = NOVALUE;
        // SubProg emit_op pc: 968 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 970 op: NOTEQ (4)
        if (IS_ATOM_INT(_26513)) {
            _26514 = (_26513 != _54sequence_type_46259);
        }
        else {
            _26514 = binary_op(NOTEQ, _26513, _54sequence_type_46259);
        }
        _26513 = NOVALUE;
        // SubProg emit_op pc: 974 op: NOP1 (159)
        // SubProg emit_op pc: 975 op: IF (20)
        if (_26514 == 0) {
            DeRef(_26514);
            _26514 = NOVALUE;
            goto L21; // [975] 1049
        }
        else {
            if (!IS_ATOM_INT(_26514) && DBL_PTR(_26514)->dbl == 0.0){
                DeRef(_26514);
                _26514 = NOVALUE;
                goto L21; // [975] 1049
            }
            DeRef(_26514);
            _26514 = NOVALUE;
        }
        DeRef(_26514);
        _26514 = NOVALUE;
        // SubProg emit_op pc: 978 op: STARTLINE (58)

        /** emit.e:835					op = RHS_SUBS_CHECK*/
        // SubProg emit_op pc: 980 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 982 op: ASSIGN (18)
        _op_51307 = 92;
        // SubProg emit_op pc: 985 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 987 op: NOP1 (159)
        // SubProg emit_op pc: 988 op: ELSE (23)
        goto L21; // [988] 1049
        // SubProg emit_op pc: 990 op: NOP1 (159)
L22: // addr: 991 pc: 990 sub: 51305 op: 159
        // SubProg emit_op pc: 991 op: STARTLINE (58)

        /** emit.e:837			elsif SymTab[c][S_MODE] != M_CONSTANT or*/
        // SubProg emit_op pc: 993 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 995 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26515 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 999 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1001 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26515);
        _26516 = (object)*(((s1_ptr)_2)->base + 3);
        _26515 = NOVALUE;
        // SubProg emit_op pc: 1005 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1007 op: NOTEQ (4)
        if (IS_ATOM_INT(_26516)) {
            _26517 = (_26516 != 2);
        }
        else {
            _26517 = binary_op(NOTEQ, _26516, 2);
        }
        _26516 = NOVALUE;
        // SubProg emit_op pc: 1011 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_26517)) {
            if (_26517 != 0) {
                goto L23; // [1011] 1038
            }
        }
        else {
            if (DBL_PTR(_26517)->dbl != 0.0) {
                goto L23; // [1011] 1038
            }
        }
        // SubProg emit_op pc: 1015 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1017 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26519 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 1021 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1023 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26519);
        _26520 = (object)*(((s1_ptr)_2)->base + 1);
        _26519 = NOVALUE;
        // SubProg emit_op pc: 1027 op: IS_A_SEQUENCE (68)
        _26521 = IS_SEQUENCE(_26520);
        _26520 = NOVALUE;
        // SubProg emit_op pc: 1030 op: NOT (7)
        _26522 = (_26521 == 0);
        _26521 = NOVALUE;
        // SubProg emit_op pc: 1033 op: NOP1 (159)
        // SubProg emit_op pc: 1034 op: IF (20)
        if (_26522 == 0)
        {
            DeRef(_26522);
            _26522 = NOVALUE;
            goto L24; // [1034] 1048
        }
        else{
            DeRef(_26522);
            _26522 = NOVALUE;
        }
        // SubProg emit_op pc: 1037 op: NOP1 (159)
L23: // addr: 1038 pc: 1037 sub: 51305 op: 159
        // SubProg emit_op pc: 1038 op: STARTLINE (58)

        /** emit.e:839				op = RHS_SUBS_CHECK*/
        // SubProg emit_op pc: 1040 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1042 op: ASSIGN (18)
        _op_51307 = 92;
        // SubProg emit_op pc: 1045 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1047 op: NOP1 (159)
L24: // addr: 1048 pc: 1047 sub: 51305 op: 159
        // SubProg emit_op pc: 1048 op: NOP1 (159)
L21: // addr: 1049 pc: 1048 sub: 51305 op: 159
        // SubProg emit_op pc: 1049 op: STARTLINE (58)

        /** emit.e:841			emit_opcode(op)*/
        // SubProg emit_op pc: 1051 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 1054 op: STARTLINE (58)

        /** emit.e:842			emit_addr(c)*/
        // SubProg emit_op pc: 1056 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 1059 op: STARTLINE (58)

        /** emit.e:843			emit_addr(b)*/
        // SubProg emit_op pc: 1061 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 1064 op: STARTLINE (58)

        /** emit.e:844			assignable = TRUE*/
        // SubProg emit_op pc: 1066 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1068 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 1071 op: STARTLINE (58)

        /** emit.e:845			Push(target)*/
        // SubProg emit_op pc: 1073 op: PROC (27)
        _47Push(_target_51314);
        // SubProg emit_op pc: 1076 op: STARTLINE (58)

        /** emit.e:846			emit_addr(target)*/
        // SubProg emit_op pc: 1078 op: PROC (27)
        _47emit_addr(_target_51314);
        // SubProg emit_op pc: 1081 op: STARTLINE (58)

        /** emit.e:847			emit_temp(target, NEW_REFERENCE)*/
        // SubProg emit_op pc: 1083 op: PROC (27)
        _47emit_temp(_target_51314, 1);
        // SubProg emit_op pc: 1087 op: STARTLINE (58)

        /** emit.e:848			current_sequence = append(current_sequence, target)*/
        // SubProg emit_op pc: 1089 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1091 op: APPEND (35)
        Append(&_47current_sequence_50377, _47current_sequence_50377, _target_51314);
        // SubProg emit_op pc: 1095 op: STARTLINE (58)

        /** emit.e:849			flush_temp( Code[$-2] )*/
        // SubProg emit_op pc: 1097 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1099 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26524 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26524 = 1;
        }
        // SubProg emit_op pc: 1102 op: MINUS (10)
        _26525 = _26524 - 2;
        _26524 = NOVALUE;
        // SubProg emit_op pc: 1106 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26526 = (object)*(((s1_ptr)_2)->base + _26525);
        // SubProg emit_op pc: 1110 op: PROC (27)
        Ref(_26526);
        _47flush_temp(_26526);
        _26526 = NOVALUE;
        // SubProg emit_op pc: 1113 op: ELSE (23)
        goto LC; // [1113] 7737
        // SubProg emit_op pc: 1115 op: STARTLINE (58)

        /** emit.e:851		case PROC then -- procedure, function and type calls*/
        // SubProg emit_op pc: 1117 op: CASE (186)
        case 27:
        // SubProg emit_op pc: 1119 op: STARTLINE (58)

        /** emit.e:853			assignable = FALSE -- assume for now*/
        // SubProg emit_op pc: 1121 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1123 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 1126 op: STARTLINE (58)

        /** emit.e:854			subsym = op_info1*/
        // SubProg emit_op pc: 1128 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1130 op: ASSIGN (18)
        _subsym_51315 = _47op_info1_50369;
        // SubProg emit_op pc: 1133 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1135 op: STARTLINE (58)

        /** emit.e:855			n = SymTab[subsym][S_NUM_ARGS]*/
        // SubProg emit_op pc: 1137 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1139 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26527 = (object)*(((s1_ptr)_2)->base + _subsym_51315);
        // SubProg emit_op pc: 1143 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26527);
        if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
            _n_51320 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
        }
        else{
            _n_51320 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
        }
        if (!IS_ATOM_INT(_n_51320)){
            _n_51320 = (object)DBL_PTR(_n_51320)->dbl;
        }
        _26527 = NOVALUE;
        // SubProg emit_op pc: 1151 op: STARTLINE (58)

        /** emit.e:857			if subsym = CurrentSub then*/
        // SubProg emit_op pc: 1153 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1155 op: EQUALS_IFW (104)
        if (_subsym_51315 != _36CurrentSub_16444)
        goto L25; // [1155] 1340
        // SubProg emit_op pc: 1159 op: STARTLINE (58)

        /** emit.e:860				for i = cgi-n+1 to cgi do*/
        // SubProg emit_op pc: 1161 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1163 op: MINUS (10)
        _26530 = _47cgi_50385 - _n_51320;
        if ((object)((uintptr_t)_26530 +(uintptr_t) HIGH_BITS) >= 0){
            _26530 = NewDouble((eudouble)_26530);
        }
        // SubProg emit_op pc: 1167 op: PLUS1 (93)
        if (IS_ATOM_INT(_26530)) {
            _26531 = _26530 + 1;
            if (_26531 > MAXINT){
                _26531 = NewDouble((eudouble)_26531);
            }
        }
        else
        _26531 = binary_op(PLUS, 1, _26530);
        DeRef(_26530);
        _26530 = NOVALUE;
        // SubProg emit_op pc: 1171 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1173 op: ASSIGN (18)
        _26532 = _47cgi_50385;
        // SubProg emit_op pc: 1176 op: FOR (21)
        {
            object _i_51566;
            Ref(_26531);
            _i_51566 = _26531;
L26: // addr: 1183 pc: 1176 sub: 51305 op: 21
            if (binary_op_a(GREATER, _i_51566, _26532)){
                goto L27; // [1176] 1339
            }
            // SubProg emit_op pc: 1183 op: STARTLINE (58)

            /** emit.e:861					if cg_stack[i] > 0 then -- if it's a forward reference, it's not a private*/
            // SubProg emit_op pc: 1185 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1187 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566)){
                _26533 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            }
            else{
                _26533 = (object)*(((s1_ptr)_2)->base + _i_51566);
            }
            // SubProg emit_op pc: 1191 op: GREATER_IFW (107)
            if (binary_op_a(LESSEQ, _26533, 0)){
                _26533 = NOVALUE;
                goto L28; // [1191] 1332
            }
            _26533 = NOVALUE;
            // SubProg emit_op pc: 1195 op: STARTLINE (58)

            /** emit.e:862						if SymTab[cg_stack[i]][S_SCOPE] = SC_PRIVATE and*/
            // SubProg emit_op pc: 1197 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1199 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1201 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566)){
                _26535 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            }
            else{
                _26535 = (object)*(((s1_ptr)_2)->base + _i_51566);
            }
            // SubProg emit_op pc: 1205 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!IS_ATOM_INT(_26535)){
                _26536 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26535)->dbl));
            }
            else{
                _26536 = (object)*(((s1_ptr)_2)->base + _26535);
            }
            // SubProg emit_op pc: 1209 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1211 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_26536);
            _26537 = (object)*(((s1_ptr)_2)->base + 4);
            _26536 = NOVALUE;
            // SubProg emit_op pc: 1215 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1217 op: EQUALS (3)
            if (IS_ATOM_INT(_26537)) {
                _26538 = (_26537 == 3);
            }
            else {
                _26538 = binary_op(EQUALS, _26537, 3);
            }
            _26537 = NOVALUE;
            // SubProg emit_op pc: 1221 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_26538)) {
                if (_26538 == 0) {
                    goto L29; // [1221] 1299
                }
            }
            else {
                if (DBL_PTR(_26538)->dbl == 0.0) {
                    goto L29; // [1221] 1299
                }
            }
            // SubProg emit_op pc: 1225 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1227 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566)){
                _26540 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            }
            else{
                _26540 = (object)*(((s1_ptr)_2)->base + _i_51566);
            }
            // SubProg emit_op pc: 1233 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!IS_ATOM_INT(_26540)){
                _26541 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26540)->dbl));
            }
            else{
                _26541 = (object)*(((s1_ptr)_2)->base + _26540);
            }
            // SubProg emit_op pc: 1237 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1239 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_26541);
            _26542 = (object)*(((s1_ptr)_2)->base + 16);
            _26541 = NOVALUE;
            // SubProg emit_op pc: 1243 op: LESS (1)
            if (IS_ATOM_INT(_26542) && IS_ATOM_INT(_i_51566)) {
                _26543 = (_26542 < _i_51566);
            }
            else {
                _26543 = binary_op(LESS, _26542, _i_51566);
            }
            _26542 = NOVALUE;
            // SubProg emit_op pc: 1247 op: NOP1 (159)
            // SubProg emit_op pc: 1248 op: IF (20)
            if (_26543 == 0) {
                DeRef(_26543);
                _26543 = NOVALUE;
                goto L29; // [1248] 1299
            }
            else {
                if (!IS_ATOM_INT(_26543) && DBL_PTR(_26543)->dbl == 0.0){
                    DeRef(_26543);
                    _26543 = NOVALUE;
                    goto L29; // [1248] 1299
                }
                DeRef(_26543);
                _26543 = NOVALUE;
            }
            DeRef(_26543);
            _26543 = NOVALUE;
            // SubProg emit_op pc: 1251 op: STARTLINE (58)

            /** emit.e:865							emit_opcode(ASSIGN)*/
            // SubProg emit_op pc: 1253 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1255 op: PROC (27)
            _47emit_opcode(18);
            // SubProg emit_op pc: 1258 op: STARTLINE (58)

            /** emit.e:866							emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1260 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1262 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566)){
                _26544 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            }
            else{
                _26544 = (object)*(((s1_ptr)_2)->base + _i_51566);
            }
            // SubProg emit_op pc: 1266 op: PROC (27)
            Ref(_26544);
            _47emit_addr(_26544);
            _26544 = NOVALUE;
            // SubProg emit_op pc: 1269 op: STARTLINE (58)

            /** emit.e:867							cg_stack[i] = NewTempSym()*/
            // SubProg emit_op pc: 1271 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1273 op: PROC (27)
            _26545 = _54NewTempSym(0);
            // SubProg emit_op pc: 1277 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _i_51566);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _26545;
            if( _1 != _26545 ){
                DeRef(_1);
            }
            _26545 = NOVALUE;
            // SubProg emit_op pc: 1281 op: STARTLINE (58)

            /** emit.e:868							emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1283 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1285 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566)){
                _26546 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            }
            else{
                _26546 = (object)*(((s1_ptr)_2)->base + _i_51566);
            }
            // SubProg emit_op pc: 1289 op: PROC (27)
            Ref(_26546);
            _47emit_addr(_26546);
            _26546 = NOVALUE;
            // SubProg emit_op pc: 1292 op: STARTLINE (58)

            /** emit.e:869							check_for_temps()*/
            // SubProg emit_op pc: 1294 op: PROC (27)
            _47check_for_temps();
            // SubProg emit_op pc: 1296 op: ELSE (23)
            goto L2A; // [1296] 1331
            // SubProg emit_op pc: 1298 op: NOP1 (159)
L29: // addr: 1299 pc: 1298 sub: 51305 op: 159
            // SubProg emit_op pc: 1299 op: STARTLINE (58)

            /** emit.e:870						elsif sym_mode( cg_stack[i] ) = M_TEMP then*/
            // SubProg emit_op pc: 1301 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1303 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566)){
                _26547 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            }
            else{
                _26547 = (object)*(((s1_ptr)_2)->base + _i_51566);
            }
            // SubProg emit_op pc: 1307 op: PROC (27)
            Ref(_26547);
            _26548 = _54sym_mode(_26547);
            _26547 = NOVALUE;
            // SubProg emit_op pc: 1311 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1313 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _26548, 3)){
                DeRef(_26548);
                _26548 = NOVALUE;
                goto L2B; // [1313] 1330
            }
            DeRef(_26548);
            _26548 = NOVALUE;
            // SubProg emit_op pc: 1317 op: STARTLINE (58)

            /** emit.e:871							emit_temp( cg_stack[i], NEW_REFERENCE )*/
            // SubProg emit_op pc: 1319 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1321 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51566)){
                _26550 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51566)->dbl));
            }
            else{
                _26550 = (object)*(((s1_ptr)_2)->base + _i_51566);
            }
            // SubProg emit_op pc: 1325 op: PROC (27)
            Ref(_26550);
            _47emit_temp(_26550, 1);
            _26550 = NOVALUE;
            // SubProg emit_op pc: 1329 op: NOP1 (159)
L2B: // addr: 1330 pc: 1329 sub: 51305 op: 159
            // SubProg emit_op pc: 1330 op: NOP1 (159)
L2A: // addr: 1331 pc: 1330 sub: 51305 op: 159
            // SubProg emit_op pc: 1331 op: NOP1 (159)
L28: // addr: 1332 pc: 1331 sub: 51305 op: 159
            // SubProg emit_op pc: 1332 op: STARTLINE (58)

            /** emit.e:874				end for*/
            // SubProg emit_op pc: 1334 op: ENDFOR_INT_UP1 (54)
            _0 = _i_51566;
            if (IS_ATOM_INT(_i_51566)) {
                _i_51566 = _i_51566 + 1;
                if ((object)((uintptr_t)_i_51566 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51566 = NewDouble((eudouble)_i_51566);
                }
            }
            else {
                _i_51566 = binary_op_a(PLUS, _i_51566, 1);
            }
            DeRef(_0);
            goto L26; // [1334] 1183
L27: // addr: 1339 pc: 1334 sub: 51305 op: 54
            ;
            DeRef(_i_51566);
        }
        // SubProg emit_op pc: 1339 op: NOP1 (159)
L25: // addr: 1340 pc: 1339 sub: 51305 op: 159
        // SubProg emit_op pc: 1340 op: STARTLINE (58)

        /** emit.e:877			if SymTab[subsym][S_DEPRECATED] then*/
        // SubProg emit_op pc: 1342 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1344 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26551 = (object)*(((s1_ptr)_2)->base + _subsym_51315);
        // SubProg emit_op pc: 1348 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1350 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26551);
        _26552 = (object)*(((s1_ptr)_2)->base + 30);
        _26551 = NOVALUE;
        // SubProg emit_op pc: 1354 op: IF (20)
        if (_26552 == 0) {
            _26552 = NOVALUE;
            goto L2C; // [1354] 1383
        }
        else {
            if (!IS_ATOM_INT(_26552) && DBL_PTR(_26552)->dbl == 0.0){
                _26552 = NOVALUE;
                goto L2C; // [1354] 1383
            }
            _26552 = NOVALUE;
        }
        _26552 = NOVALUE;
        // SubProg emit_op pc: 1357 op: STARTLINE (58)

        /** emit.e:878				Warning(327, deprecated_warning_flag, { SymTab[subsym][S_NAME] })*/
        // SubProg emit_op pc: 1359 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1361 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1363 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26553 = (object)*(((s1_ptr)_2)->base + _subsym_51315);
        // SubProg emit_op pc: 1367 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26553);
        if (!IS_ATOM_INT(_36S_NAME_16091)){
            _26554 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
        }
        else{
            _26554 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
        }
        _26553 = NOVALUE;
        // SubProg emit_op pc: 1373 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_26554);
        ((intptr_t*)_2)[1] = _26554;
        _26555 = MAKE_SEQ(_1);
        _26554 = NOVALUE;
        // SubProg emit_op pc: 1377 op: PROC (27)
        _50Warning(327, 16384, _26555);
        _26555 = NOVALUE;
        // SubProg emit_op pc: 1382 op: NOP1 (159)
L2C: // addr: 1383 pc: 1382 sub: 51305 op: 159
        // SubProg emit_op pc: 1383 op: STARTLINE (58)

        /** emit.e:881			emit_opcode(op)*/
        // SubProg emit_op pc: 1385 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 1388 op: STARTLINE (58)

        /** emit.e:882			emit_addr(subsym)*/
        // SubProg emit_op pc: 1390 op: PROC (27)
        _47emit_addr(_subsym_51315);
        // SubProg emit_op pc: 1393 op: STARTLINE (58)

        /** emit.e:883			for i = cgi-n+1 to cgi do*/
        // SubProg emit_op pc: 1395 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1397 op: MINUS (10)
        _26556 = _47cgi_50385 - _n_51320;
        if ((object)((uintptr_t)_26556 +(uintptr_t) HIGH_BITS) >= 0){
            _26556 = NewDouble((eudouble)_26556);
        }
        // SubProg emit_op pc: 1401 op: PLUS1 (93)
        if (IS_ATOM_INT(_26556)) {
            _26557 = _26556 + 1;
            if (_26557 > MAXINT){
                _26557 = NewDouble((eudouble)_26557);
            }
        }
        else
        _26557 = binary_op(PLUS, 1, _26556);
        DeRef(_26556);
        _26556 = NOVALUE;
        // SubProg emit_op pc: 1405 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1407 op: ASSIGN (18)
        _26558 = _47cgi_50385;
        // SubProg emit_op pc: 1410 op: FOR (21)
        {
            object _i_51613;
            Ref(_26557);
            _i_51613 = _26557;
L2D: // addr: 1417 pc: 1410 sub: 51305 op: 21
            if (binary_op_a(GREATER, _i_51613, _26558)){
                goto L2E; // [1410] 1447
            }
            // SubProg emit_op pc: 1417 op: STARTLINE (58)

            /** emit.e:884				emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1419 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1421 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51613)){
                _26559 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51613)->dbl));
            }
            else{
                _26559 = (object)*(((s1_ptr)_2)->base + _i_51613);
            }
            // SubProg emit_op pc: 1425 op: PROC (27)
            Ref(_26559);
            _47emit_addr(_26559);
            _26559 = NOVALUE;
            // SubProg emit_op pc: 1428 op: STARTLINE (58)

            /** emit.e:885				emit_temp( cg_stack[i], NEW_REFERENCE )*/
            // SubProg emit_op pc: 1430 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1432 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51613)){
                _26560 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51613)->dbl));
            }
            else{
                _26560 = (object)*(((s1_ptr)_2)->base + _i_51613);
            }
            // SubProg emit_op pc: 1436 op: PROC (27)
            Ref(_26560);
            _47emit_temp(_26560, 1);
            _26560 = NOVALUE;
            // SubProg emit_op pc: 1440 op: STARTLINE (58)

            /** emit.e:886			end for*/
            // SubProg emit_op pc: 1442 op: ENDFOR_INT_UP1 (54)
            _0 = _i_51613;
            if (IS_ATOM_INT(_i_51613)) {
                _i_51613 = _i_51613 + 1;
                if ((object)((uintptr_t)_i_51613 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51613 = NewDouble((eudouble)_i_51613);
                }
            }
            else {
                _i_51613 = binary_op_a(PLUS, _i_51613, 1);
            }
            DeRef(_0);
            goto L2D; // [1442] 1417
L2E: // addr: 1447 pc: 1442 sub: 51305 op: 54
            ;
            DeRef(_i_51613);
        }
        // SubProg emit_op pc: 1447 op: STARTLINE (58)

        /** emit.e:888			cgi -= n*/
        // SubProg emit_op pc: 1449 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1451 op: MINUS_I (116)
        _47cgi_50385 = _47cgi_50385 - _n_51320;
        // SubProg emit_op pc: 1455 op: STARTLINE (58)

        /** emit.e:890			if SymTab[subsym][S_TOKEN] != PROC then*/
        // SubProg emit_op pc: 1457 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1459 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26562 = (object)*(((s1_ptr)_2)->base + _subsym_51315);
        // SubProg emit_op pc: 1463 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1465 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26562);
        if (!IS_ATOM_INT(_36S_TOKEN_16096)){
            _26563 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
        }
        else{
            _26563 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
        }
        _26562 = NOVALUE;
        // SubProg emit_op pc: 1469 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1471 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _26563, 27)){
            _26563 = NOVALUE;
            goto LC; // [1471] 7737
        }
        _26563 = NOVALUE;
        // SubProg emit_op pc: 1475 op: STARTLINE (58)

        /** emit.e:891				assignable = TRUE*/
        // SubProg emit_op pc: 1477 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1479 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 1482 op: STARTLINE (58)

        /** emit.e:892				c = NewTempSym() -- put final result in temp*/
        // SubProg emit_op pc: 1484 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 1488 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 1490 op: STARTLINE (58)

        /** emit.e:893				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 1492 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 1496 op: STARTLINE (58)

        /** emit.e:894				Push(c)*/
        // SubProg emit_op pc: 1498 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 1501 op: STARTLINE (58)

        /** emit.e:896				emit_addr(c)*/
        // SubProg emit_op pc: 1503 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 1506 op: NOP1 (159)
        // SubProg emit_op pc: 1507 op: ELSE (23)
        goto LC; // [1507] 7737
        // SubProg emit_op pc: 1509 op: STARTLINE (58)

        /** emit.e:900		case PROC_FORWARD, FUNC_FORWARD then*/
        // SubProg emit_op pc: 1511 op: CASE (186)
        case 195:
        // SubProg emit_op pc: 1513 op: CASE (186)
        case 196:
        // SubProg emit_op pc: 1515 op: STARTLINE (58)

        /** emit.e:901			assignable = FALSE -- assume for now*/
        // SubProg emit_op pc: 1517 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1519 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 1522 op: STARTLINE (58)

        /** emit.e:902			integer real_op*/
        // SubProg emit_op pc: 1524 op: STARTLINE (58)

        /** emit.e:903			if op = PROC_FORWARD then*/
        // SubProg emit_op pc: 1526 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1528 op: EQUALS_IFW (104)
        if (_op_51307 != 195)
        goto L2F; // [1528] 1544
        // SubProg emit_op pc: 1532 op: STARTLINE (58)

        /** emit.e:904				real_op = PROC*/
        // SubProg emit_op pc: 1534 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1536 op: ASSIGN (18)
        _real_op_51634 = 27;
        // SubProg emit_op pc: 1539 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1541 op: ELSE (23)
        goto L30; // [1541] 1554
        // SubProg emit_op pc: 1543 op: NOP1 (159)
L2F: // addr: 1544 pc: 1543 sub: 51305 op: 159
        // SubProg emit_op pc: 1544 op: STARTLINE (58)

        /** emit.e:906				real_op = FUNC*/
        // SubProg emit_op pc: 1546 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1548 op: ASSIGN (18)
        _real_op_51634 = 501;
        // SubProg emit_op pc: 1551 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1553 op: NOP1 (159)
L30: // addr: 1554 pc: 1553 sub: 51305 op: 159
        // SubProg emit_op pc: 1554 op: STARTLINE (58)

        /** emit.e:908			integer ref*/
        // SubProg emit_op pc: 1556 op: STARTLINE (58)

        /** emit.e:909			ref = new_forward_reference( real_op, op_info1, real_op )*/
        // SubProg emit_op pc: 1558 op: PRIVATE_INIT_CHECK (30)
        // SubProg emit_op pc: 1560 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1562 op: PROC (27)
        _ref_51641 = _39new_forward_reference(_real_op_51634, _47op_info1_50369, _real_op_51634);
        // SubProg emit_op pc: 1568 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ref_51641)) {
            _1 = (object)(DBL_PTR(_ref_51641)->dbl);
            DeRefDS(_ref_51641);
            _ref_51641 = _1;
        }
        // SubProg emit_op pc: 1570 op: STARTLINE (58)

        /** emit.e:910			n = Pop() -- number of known args*/
        // SubProg emit_op pc: 1572 op: PROC (27)
        _n_51320 = _47Pop();
        // SubProg emit_op pc: 1575 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_n_51320)) {
            _1 = (object)(DBL_PTR(_n_51320)->dbl);
            DeRefDS(_n_51320);
            _n_51320 = _1;
        }
        // SubProg emit_op pc: 1577 op: STARTLINE (58)

        /** emit.e:912			emit_opcode(op)*/
        // SubProg emit_op pc: 1579 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 1582 op: STARTLINE (58)

        /** emit.e:913			emit_addr(ref)*/
        // SubProg emit_op pc: 1584 op: PROC (27)
        _47emit_addr(_ref_51641);
        // SubProg emit_op pc: 1587 op: STARTLINE (58)

        /** emit.e:914			emit_addr( n ) -- this changes to be the "next" instruction*/
        // SubProg emit_op pc: 1589 op: PROC (27)
        _47emit_addr(_n_51320);
        // SubProg emit_op pc: 1592 op: STARTLINE (58)

        /** emit.e:915			for i = cgi-n+1 to cgi do*/
        // SubProg emit_op pc: 1594 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1596 op: MINUS (10)
        _26569 = _47cgi_50385 - _n_51320;
        if ((object)((uintptr_t)_26569 +(uintptr_t) HIGH_BITS) >= 0){
            _26569 = NewDouble((eudouble)_26569);
        }
        // SubProg emit_op pc: 1600 op: PLUS1 (93)
        if (IS_ATOM_INT(_26569)) {
            _26570 = _26569 + 1;
            if (_26570 > MAXINT){
                _26570 = NewDouble((eudouble)_26570);
            }
        }
        else
        _26570 = binary_op(PLUS, 1, _26569);
        DeRef(_26569);
        _26569 = NOVALUE;
        // SubProg emit_op pc: 1604 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1606 op: ASSIGN (18)
        _26571 = _47cgi_50385;
        // SubProg emit_op pc: 1609 op: FOR (21)
        {
            object _i_51646;
            Ref(_26570);
            _i_51646 = _26570;
L31: // addr: 1616 pc: 1609 sub: 51305 op: 21
            if (binary_op_a(GREATER, _i_51646, _26571)){
                goto L32; // [1609] 1646
            }
            // SubProg emit_op pc: 1616 op: STARTLINE (58)

            /** emit.e:916				emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1618 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1620 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51646)){
                _26572 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51646)->dbl));
            }
            else{
                _26572 = (object)*(((s1_ptr)_2)->base + _i_51646);
            }
            // SubProg emit_op pc: 1624 op: PROC (27)
            Ref(_26572);
            _47emit_addr(_26572);
            _26572 = NOVALUE;
            // SubProg emit_op pc: 1627 op: STARTLINE (58)

            /** emit.e:917				emit_temp( cg_stack[i], NEW_REFERENCE )*/
            // SubProg emit_op pc: 1629 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1631 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_47cg_stack_50384);
            if (!IS_ATOM_INT(_i_51646)){
                _26573 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51646)->dbl));
            }
            else{
                _26573 = (object)*(((s1_ptr)_2)->base + _i_51646);
            }
            // SubProg emit_op pc: 1635 op: PROC (27)
            Ref(_26573);
            _47emit_temp(_26573, 1);
            _26573 = NOVALUE;
            // SubProg emit_op pc: 1639 op: STARTLINE (58)

            /** emit.e:918			end for*/
            // SubProg emit_op pc: 1641 op: ENDFOR_INT_UP1 (54)
            _0 = _i_51646;
            if (IS_ATOM_INT(_i_51646)) {
                _i_51646 = _i_51646 + 1;
                if ((object)((uintptr_t)_i_51646 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51646 = NewDouble((eudouble)_i_51646);
                }
            }
            else {
                _i_51646 = binary_op_a(PLUS, _i_51646, 1);
            }
            DeRef(_0);
            goto L31; // [1641] 1616
L32: // addr: 1646 pc: 1641 sub: 51305 op: 54
            ;
            DeRef(_i_51646);
        }
        // SubProg emit_op pc: 1646 op: STARTLINE (58)

        /** emit.e:919			cgi -= n*/
        // SubProg emit_op pc: 1648 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1650 op: MINUS_I (116)
        _47cgi_50385 = _47cgi_50385 - _n_51320;
        // SubProg emit_op pc: 1654 op: STARTLINE (58)

        /** emit.e:921			if op != PROC_FORWARD then*/
        // SubProg emit_op pc: 1656 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1658 op: NOTEQ_IFW (105)
        if (_op_51307 == 195)
        goto L33; // [1658] 1694
        // SubProg emit_op pc: 1662 op: STARTLINE (58)

        /** emit.e:922				assignable = TRUE*/
        // SubProg emit_op pc: 1664 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1666 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 1669 op: STARTLINE (58)

        /** emit.e:923				c = NewTempSym() -- put final result in temp*/
        // SubProg emit_op pc: 1671 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 1675 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 1677 op: STARTLINE (58)

        /** emit.e:924				Push(c)*/
        // SubProg emit_op pc: 1679 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 1682 op: STARTLINE (58)

        /** emit.e:926				emit_addr(c)*/
        // SubProg emit_op pc: 1684 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 1687 op: STARTLINE (58)

        /** emit.e:927				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 1689 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 1693 op: NOP1 (159)
L33: // addr: 1694 pc: 1693 sub: 51305 op: 159
        // SubProg emit_op pc: 1694 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var real_op_51634

// block var ref_51641
        // SubProg emit_op pc: 1696 op: ELSE (23)
        goto LC; // [1696] 7737
        // SubProg emit_op pc: 1698 op: STARTLINE (58)

        /** emit.e:930		case WARNING then*/
        // SubProg emit_op pc: 1700 op: CASE (186)
        case 506:
        // SubProg emit_op pc: 1702 op: STARTLINE (58)

        /** emit.e:931			assignable = FALSE*/
        // SubProg emit_op pc: 1704 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1706 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 1709 op: STARTLINE (58)

        /** emit.e:932		    a = Pop()*/
        // SubProg emit_op pc: 1711 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 1714 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 1716 op: STARTLINE (58)

        /** emit.e:933			Warning(SymTab[a][S_OBJ], custom_warning_flag,"")*/
        // SubProg emit_op pc: 1718 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1720 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26578 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 1724 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1726 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26578);
        _26579 = (object)*(((s1_ptr)_2)->base + 1);
        _26578 = NOVALUE;
        // SubProg emit_op pc: 1730 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1732 op: PROC (27)
        Ref(_26579);
        RefDS(_21933);
        _50Warning(_26579, 64, _21933);
        _26579 = NOVALUE;
        // SubProg emit_op pc: 1737 op: ELSE (23)
        goto LC; // [1737] 7737
        // SubProg emit_op pc: 1739 op: STARTLINE (58)

        /** emit.e:935		case INCLUDE_PATHS then*/
        // SubProg emit_op pc: 1741 op: CASE (186)
        case 507:
        // SubProg emit_op pc: 1743 op: STARTLINE (58)

        /** emit.e:936			sequence paths*/
        // SubProg emit_op pc: 1745 op: STARTLINE (58)

        /** emit.e:938			assignable = TRUE*/
        // SubProg emit_op pc: 1747 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1749 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 1752 op: STARTLINE (58)

        /** emit.e:939		    a = Pop()*/
        // SubProg emit_op pc: 1754 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 1757 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 1759 op: STARTLINE (58)

        /** emit.e:940		    emit_opcode(RIGHT_BRACE_N)*/
        // SubProg emit_op pc: 1761 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1763 op: PROC (27)
        _47emit_opcode(31);
        // SubProg emit_op pc: 1766 op: STARTLINE (58)

        /** emit.e:941		    paths = Include_paths(SymTab[a][S_OBJ])*/
        // SubProg emit_op pc: 1768 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1770 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26581 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 1774 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1776 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26581);
        _26582 = (object)*(((s1_ptr)_2)->base + 1);
        _26581 = NOVALUE;
        // SubProg emit_op pc: 1780 op: PROC (27)
        Ref(_26582);
        _0 = _paths_51671;
        _paths_51671 = _48Include_paths(_26582);
        DeRef(_0);
        _26582 = NOVALUE;
        // SubProg emit_op pc: 1784 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 1786 op: STARTLINE (58)

        /** emit.e:942		    emit(length(paths))*/
        // SubProg emit_op pc: 1788 op: LENGTH (42)
        if (IS_SEQUENCE(_paths_51671)){
                _26584 = SEQ_PTR(_paths_51671)->length;
        }
        else {
            _26584 = 1;
        }
        // SubProg emit_op pc: 1791 op: PROC (27)
        _47emit(_26584);
        _26584 = NOVALUE;
        // SubProg emit_op pc: 1794 op: STARTLINE (58)

        /** emit.e:943		    for i=length(paths) to 1 by -1 do*/
        // SubProg emit_op pc: 1796 op: LENGTH (42)
        if (IS_SEQUENCE(_paths_51671)){
                _26585 = SEQ_PTR(_paths_51671)->length;
        }
        else {
            _26585 = 1;
        }
        // SubProg emit_op pc: 1799 op: FOR_I (125)
        {
            object _i_51683;
            _i_51683 = _26585;
L34: // addr: 1806 pc: 1799 sub: 51305 op: 125
            if (_i_51683 < 1){
                goto L35; // [1799] 1830
            }
            // SubProg emit_op pc: 1806 op: STARTLINE (58)

            /** emit.e:944		        c = NewStringSym(paths[i])*/
            // SubProg emit_op pc: 1808 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_paths_51671);
            _26586 = (object)*(((s1_ptr)_2)->base + _i_51683);
            // SubProg emit_op pc: 1812 op: PROC (27)
            Ref(_26586);
            _c_51311 = _54NewStringSym(_26586);
            _26586 = NOVALUE;
            // SubProg emit_op pc: 1816 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_c_51311)) {
                _1 = (object)(DBL_PTR(_c_51311)->dbl);
                DeRefDS(_c_51311);
                _c_51311 = _1;
            }
            // SubProg emit_op pc: 1818 op: STARTLINE (58)

            /** emit.e:945		        emit_addr(c)*/
            // SubProg emit_op pc: 1820 op: PROC (27)
            _47emit_addr(_c_51311);
            // SubProg emit_op pc: 1823 op: STARTLINE (58)

            /** emit.e:946		    end for*/
            // SubProg emit_op pc: 1825 op: ENDFOR_GENERAL (39)
            _i_51683 = _i_51683 + -1;
            goto L34; // [1825] 1806
L35: // addr: 1830 pc: 1825 sub: 51305 op: 39
            ;
        }
        // SubProg emit_op pc: 1830 op: STARTLINE (58)

        /** emit.e:947		    b = NewTempSym()*/
        // SubProg emit_op pc: 1832 op: PROC (27)
        _b_51310 = _54NewTempSym(0);
        // SubProg emit_op pc: 1836 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 1838 op: STARTLINE (58)

        /** emit.e:948			emit_temp(b, NEW_REFERENCE)*/
        // SubProg emit_op pc: 1840 op: PROC (27)
        _47emit_temp(_b_51310, 1);
        // SubProg emit_op pc: 1844 op: STARTLINE (58)

        /** emit.e:949		    Push(b)*/
        // SubProg emit_op pc: 1846 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 1849 op: STARTLINE (58)

        /** emit.e:950		    emit_addr(b)*/
        // SubProg emit_op pc: 1851 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 1854 op: STARTLINE (58)

        /** emit.e:951			last_op = RIGHT_BRACE_N*/
        // SubProg emit_op pc: 1856 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1858 op: ASSIGN (18)
        _47last_op_51266 = 31;
        // SubProg emit_op pc: 1861 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1863 op: STARTLINE (58)

        /** emit.e:952			op = last_op*/
        // SubProg emit_op pc: 1865 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1867 op: ASSIGN_I (113)
        _op_51307 = 31;
        // SubProg emit_op pc: 1870 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var paths_51671
        DeRef(_paths_51671);
        _paths_51671 = NOVALUE;
        // SubProg emit_op pc: 1872 op: ELSE (23)
        goto LC; // [1872] 7737
        // SubProg emit_op pc: 1874 op: STARTLINE (58)

        /** emit.e:955		case NOP1, NOP2, NOPWHILE, PRIVATE_INIT_CHECK, GLOBAL_INIT_CHECK,*/
        // SubProg emit_op pc: 1876 op: CASE (186)
        case 159:
        // SubProg emit_op pc: 1878 op: CASE (186)
        case 110:
        // SubProg emit_op pc: 1880 op: CASE (186)
        case 158:
        // SubProg emit_op pc: 1882 op: CASE (186)
        case 30:
        // SubProg emit_op pc: 1884 op: CASE (186)
        case 109:
        // SubProg emit_op pc: 1886 op: CASE (186)
        case 58:
        // SubProg emit_op pc: 1888 op: CASE (186)
        case 59:
        // SubProg emit_op pc: 1890 op: CASE (186)
        case 61:
        // SubProg emit_op pc: 1892 op: CASE (186)
        case 184:
        // SubProg emit_op pc: 1894 op: CASE (186)
        case 22:
        // SubProg emit_op pc: 1896 op: CASE (186)
        case 23:
        // SubProg emit_op pc: 1898 op: CASE (186)
        case 188:
        // SubProg emit_op pc: 1900 op: CASE (186)
        case 189:
        // SubProg emit_op pc: 1902 op: CASE (186)
        case 88:
        // SubProg emit_op pc: 1904 op: CASE (186)
        case 43:
        // SubProg emit_op pc: 1906 op: CASE (186)
        case 90:
        // SubProg emit_op pc: 1908 op: CASE (186)
        case 89:
        // SubProg emit_op pc: 1910 op: CASE (186)
        case 87:
        // SubProg emit_op pc: 1912 op: CASE (186)
        case 135:
        // SubProg emit_op pc: 1914 op: CASE (186)
        case 156:
        // SubProg emit_op pc: 1916 op: CASE (186)
        case 169:
        // SubProg emit_op pc: 1918 op: CASE (186)
        case 175:
        // SubProg emit_op pc: 1920 op: CASE (186)
        case 174:
        // SubProg emit_op pc: 1922 op: CASE (186)
        case 187:
        // SubProg emit_op pc: 1924 op: CASE (186)
        case 210:
        // SubProg emit_op pc: 1926 op: CASE (186)
        case 211:
        // SubProg emit_op pc: 1928 op: STARTLINE (58)

        /** emit.e:961			emit_opcode(op)*/
        // SubProg emit_op pc: 1930 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 1933 op: STARTLINE (58)

        /** emit.e:962			assignable = FALSE*/
        // SubProg emit_op pc: 1935 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1937 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 1940 op: STARTLINE (58)

        /** emit.e:963			if op = UPDATE_GLOBALS then*/
        // SubProg emit_op pc: 1942 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1944 op: EQUALS_IFW (104)
        if (_op_51307 != 89)
        goto LC; // [1944] 7737
        // SubProg emit_op pc: 1948 op: STARTLINE (58)

        /** emit.e:964				last_op = last_op_backup*/
        // SubProg emit_op pc: 1950 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 1953 op: STARTLINE (58)

        /** emit.e:965				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 1955 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 1958 op: NOP1 (159)
        // SubProg emit_op pc: 1959 op: ELSE (23)
        goto LC; // [1959] 7737
        // SubProg emit_op pc: 1961 op: STARTLINE (58)

        /** emit.e:969		case IF, WHILE then*/
        // SubProg emit_op pc: 1963 op: CASE (186)
        case 20:
        // SubProg emit_op pc: 1965 op: CASE (186)
        case 47:
        // SubProg emit_op pc: 1967 op: STARTLINE (58)

        /** emit.e:970			a = Pop()*/
        // SubProg emit_op pc: 1969 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 1972 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 1974 op: STARTLINE (58)

        /** emit.e:971			assignable = FALSE*/
        // SubProg emit_op pc: 1976 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1978 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 1981 op: STARTLINE (58)

        /** emit.e:973			if previous_op >= LESS and previous_op <= NOT then*/
        // SubProg emit_op pc: 1983 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1985 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1987 op: GREATEREQ (2)
        _26591 = (_36previous_op_16534 >= 1);
        // SubProg emit_op pc: 1991 op: SC1_AND_IF (146)
        if (_26591 == 0) {
            goto L36; // [1991] 2283
        }
        // SubProg emit_op pc: 1995 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1997 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1999 op: LESSEQ (5)
        _26593 = (_36previous_op_16534 <= 7);
        // SubProg emit_op pc: 2003 op: NOP1 (159)
        // SubProg emit_op pc: 2004 op: IF (20)
        if (_26593 == 0)
        {
            DeRef(_26593);
            _26593 = NOVALUE;
            goto L36; // [2004] 2283
        }
        else{
            DeRef(_26593);
            _26593 = NOVALUE;
        }
        // SubProg emit_op pc: 2007 op: STARTLINE (58)

        /** emit.e:974				clear_temp( Code[$] )*/
        // SubProg emit_op pc: 2009 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2011 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26594 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26594 = 1;
        }
        // SubProg emit_op pc: 2014 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26595 = (object)*(((s1_ptr)_2)->base + _26594);
        // SubProg emit_op pc: 2018 op: PROC (27)
        Ref(_26595);
        _47clear_temp(_26595);
        _26595 = NOVALUE;
        // SubProg emit_op pc: 2021 op: STARTLINE (58)

        /** emit.e:975				Code = Code[1..$-1]*/
        // SubProg emit_op pc: 2023 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2025 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26596 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26596 = 1;
        }
        // SubProg emit_op pc: 2028 op: MINUS (10)
        _26597 = _26596 - 1;
        _26596 = NOVALUE;
        // SubProg emit_op pc: 2032 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_36Code_16524;
        RHS_Slice(_36Code_16524, 1, _26597);
        // SubProg emit_op pc: 2037 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2039 op: STARTLINE (58)

        /** emit.e:976				if previous_op = NOT then*/
        // SubProg emit_op pc: 2041 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2043 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2045 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 7)
        goto L37; // [2045] 2125
        // SubProg emit_op pc: 2049 op: STARTLINE (58)

        /** emit.e:977					op = NOT_IFW*/
        // SubProg emit_op pc: 2051 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2053 op: ASSIGN (18)
        _op_51307 = 108;
        // SubProg emit_op pc: 2056 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 2058 op: STARTLINE (58)

        /** emit.e:978					backpatch(length(Code) - 1, op)*/
        // SubProg emit_op pc: 2060 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2062 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26600 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26600 = 1;
        }
        // SubProg emit_op pc: 2065 op: MINUS (10)
        _26601 = _26600 - 1;
        _26600 = NOVALUE;
        // SubProg emit_op pc: 2069 op: PROC (27)
        _47backpatch(_26601, 108);
        _26601 = NOVALUE;
        // SubProg emit_op pc: 2073 op: STARTLINE (58)

        /** emit.e:979					sequence if_code = Code[$-1..$]*/
        // SubProg emit_op pc: 2075 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2077 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26602 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26602 = 1;
        }
        // SubProg emit_op pc: 2080 op: MINUS (10)
        _26603 = _26602 - 1;
        _26602 = NOVALUE;
        // SubProg emit_op pc: 2084 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26604 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26604 = 1;
        }
        // SubProg emit_op pc: 2087 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_if_code_51751;
        RHS_Slice(_36Code_16524, _26603, _26604);
        // SubProg emit_op pc: 2092 op: STARTLINE (58)

        /** emit.e:980					Code = Code[1..$-2]*/
        // SubProg emit_op pc: 2094 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2096 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26606 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26606 = 1;
        }
        // SubProg emit_op pc: 2099 op: MINUS (10)
        _26607 = _26606 - 2;
        _26606 = NOVALUE;
        // SubProg emit_op pc: 2103 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_36Code_16524;
        RHS_Slice(_36Code_16524, 1, _26607);
        // SubProg emit_op pc: 2108 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2110 op: STARTLINE (58)

        /** emit.e:981					Code &= if_code*/
        // SubProg emit_op pc: 2112 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2114 op: CONCAT (15)
        Concat((object_ptr)&_36Code_16524, _36Code_16524, _if_code_51751);
        // SubProg emit_op pc: 2118 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2120 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var if_code_51751
        DeRefDS(_if_code_51751);
        _if_code_51751 = NOVALUE;
        // SubProg emit_op pc: 2122 op: ELSE (23)
        goto L38; // [2122] 2270
        // SubProg emit_op pc: 2124 op: NOP1 (159)
L37: // addr: 2125 pc: 2124 sub: 51305 op: 159
        // SubProg emit_op pc: 2125 op: STARTLINE (58)

        /** emit.e:983					if IsInteger(Code[$-1]) and IsInteger(Code[$]) then*/
        // SubProg emit_op pc: 2127 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2129 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26610 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26610 = 1;
        }
        // SubProg emit_op pc: 2132 op: MINUS (10)
        _26611 = _26610 - 1;
        _26610 = NOVALUE;
        // SubProg emit_op pc: 2136 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26612 = (object)*(((s1_ptr)_2)->base + _26611);
        // SubProg emit_op pc: 2140 op: PROC (27)
        Ref(_26612);
        _26613 = _47IsInteger(_26612);
        _26612 = NOVALUE;
        // SubProg emit_op pc: 2144 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26613)) {
            if (_26613 == 0) {
                goto L39; // [2144] 2186
            }
        }
        else {
            if (DBL_PTR(_26613)->dbl == 0.0) {
                goto L39; // [2144] 2186
            }
        }
        // SubProg emit_op pc: 2148 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2150 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26615 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26615 = 1;
        }
        // SubProg emit_op pc: 2153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26616 = (object)*(((s1_ptr)_2)->base + _26615);
        // SubProg emit_op pc: 2157 op: PROC (27)
        Ref(_26616);
        _26617 = _47IsInteger(_26616);
        _26616 = NOVALUE;
        // SubProg emit_op pc: 2161 op: NOP1 (159)
        // SubProg emit_op pc: 2162 op: IF (20)
        if (_26617 == 0) {
            DeRef(_26617);
            _26617 = NOVALUE;
            goto L39; // [2162] 2186
        }
        else {
            if (!IS_ATOM_INT(_26617) && DBL_PTR(_26617)->dbl == 0.0){
                DeRef(_26617);
                _26617 = NOVALUE;
                goto L39; // [2162] 2186
            }
            DeRef(_26617);
            _26617 = NOVALUE;
        }
        DeRef(_26617);
        _26617 = NOVALUE;
        // SubProg emit_op pc: 2165 op: STARTLINE (58)

        /** emit.e:984						op = previous_op + LESS_IFW_I - LESS*/
        // SubProg emit_op pc: 2167 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2169 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2171 op: PLUS (11)
        _26618 = _36previous_op_16534 + 119;
        if ((object)((uintptr_t)_26618 + (uintptr_t)HIGH_BITS) >= 0){
            _26618 = NewDouble((eudouble)_26618);
        }
        // SubProg emit_op pc: 2175 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2177 op: MINUS (10)
        if (IS_ATOM_INT(_26618)) {
            _op_51307 = _26618 - 1;
        }
        else {
            _op_51307 = NewDouble(DBL_PTR(_26618)->dbl - (eudouble)1);
        }
        DeRef(_26618);
        _26618 = NOVALUE;
        // SubProg emit_op pc: 2181 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_op_51307)) {
            _1 = (object)(DBL_PTR(_op_51307)->dbl);
            DeRefDS(_op_51307);
            _op_51307 = _1;
        }
        // SubProg emit_op pc: 2183 op: ELSE (23)
        goto L3A; // [2183] 2205
        // SubProg emit_op pc: 2185 op: NOP1 (159)
L39: // addr: 2186 pc: 2185 sub: 51305 op: 159
        // SubProg emit_op pc: 2186 op: STARTLINE (58)

        /** emit.e:986						op = previous_op + LESS_IFW - LESS*/
        // SubProg emit_op pc: 2188 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2190 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2192 op: PLUS (11)
        _26620 = _36previous_op_16534 + 102;
        if ((object)((uintptr_t)_26620 + (uintptr_t)HIGH_BITS) >= 0){
            _26620 = NewDouble((eudouble)_26620);
        }
        // SubProg emit_op pc: 2196 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2198 op: MINUS (10)
        if (IS_ATOM_INT(_26620)) {
            _op_51307 = _26620 - 1;
        }
        else {
            _op_51307 = NewDouble(DBL_PTR(_26620)->dbl - (eudouble)1);
        }
        DeRef(_26620);
        _26620 = NOVALUE;
        // SubProg emit_op pc: 2202 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_op_51307)) {
            _1 = (object)(DBL_PTR(_op_51307)->dbl);
            DeRefDS(_op_51307);
            _op_51307 = _1;
        }
        // SubProg emit_op pc: 2204 op: NOP1 (159)
L3A: // addr: 2205 pc: 2204 sub: 51305 op: 159
        // SubProg emit_op pc: 2205 op: STARTLINE (58)

        /** emit.e:989					backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 2207 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2209 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26622 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26622 = 1;
        }
        // SubProg emit_op pc: 2212 op: MINUS (10)
        _26623 = _26622 - 2;
        _26622 = NOVALUE;
        // SubProg emit_op pc: 2216 op: PROC (27)
        _47backpatch(_26623, _op_51307);
        _26623 = NOVALUE;
        // SubProg emit_op pc: 2220 op: STARTLINE (58)

        /** emit.e:991					sequence if_code = Code[$-2..$]*/
        // SubProg emit_op pc: 2222 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2224 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26624 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26624 = 1;
        }
        // SubProg emit_op pc: 2227 op: MINUS (10)
        _26625 = _26624 - 2;
        _26624 = NOVALUE;
        // SubProg emit_op pc: 2231 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26626 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26626 = 1;
        }
        // SubProg emit_op pc: 2234 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_if_code_51790;
        RHS_Slice(_36Code_16524, _26625, _26626);
        // SubProg emit_op pc: 2239 op: STARTLINE (58)

        /** emit.e:992					Code = Code[1..$-3]*/
        // SubProg emit_op pc: 2241 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2243 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26628 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26628 = 1;
        }
        // SubProg emit_op pc: 2246 op: MINUS (10)
        _26629 = _26628 - 3;
        _26628 = NOVALUE;
        // SubProg emit_op pc: 2250 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_36Code_16524;
        RHS_Slice(_36Code_16524, 1, _26629);
        // SubProg emit_op pc: 2255 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2257 op: STARTLINE (58)

        /** emit.e:993					Code &= if_code*/
        // SubProg emit_op pc: 2259 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2261 op: CONCAT (15)
        Concat((object_ptr)&_36Code_16524, _36Code_16524, _if_code_51790);
        // SubProg emit_op pc: 2265 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2267 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var if_code_51790
        DeRefDS(_if_code_51790);
        _if_code_51790 = NOVALUE;
        // SubProg emit_op pc: 2269 op: NOP1 (159)
L38: // addr: 2270 pc: 2269 sub: 51305 op: 159
        // SubProg emit_op pc: 2270 op: STARTLINE (58)

        /** emit.e:997				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2272 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 2275 op: STARTLINE (58)

        /** emit.e:998				last_op = op*/
        // SubProg emit_op pc: 2277 op: ASSIGN_I (113)
        _47last_op_51266 = _op_51307;
        // SubProg emit_op pc: 2280 op: ELSE (23)
        goto LC; // [2280] 7737
        // SubProg emit_op pc: 2282 op: NOP1 (159)
L36: // addr: 2283 pc: 2282 sub: 51305 op: 159
        // SubProg emit_op pc: 2283 op: STARTLINE (58)

        /** emit.e:1000			elsif op = WHILE and*/
        // SubProg emit_op pc: 2285 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2287 op: EQUALS (3)
        _26632 = (_op_51307 == 47);
        // SubProg emit_op pc: 2291 op: SC1_AND (141)
        if (_26632 == 0) {
            _26633 = 0;
            goto L3B; // [2291] 2303
        }
        // SubProg emit_op pc: 2295 op: GREATER (6)
        _26634 = (_a_51309 > 0);
        // SubProg emit_op pc: 2299 op: SC2_AND (142)
        _26633 = (_26634 != 0);
        // SubProg emit_op pc: 2302 op: NOP1 (159)
L3B: // addr: 2303 pc: 2302 sub: 51305 op: 159
        // SubProg emit_op pc: 2303 op: SC1_AND (141)
        if (_26633 == 0) {
            _26635 = 0;
            goto L3C; // [2303] 2329
        }
        // SubProg emit_op pc: 2307 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2309 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26636 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 2313 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2315 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26636);
        _26637 = (object)*(((s1_ptr)_2)->base + 3);
        _26636 = NOVALUE;
        // SubProg emit_op pc: 2319 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2321 op: EQUALS (3)
        if (IS_ATOM_INT(_26637)) {
            _26638 = (_26637 == 2);
        }
        else {
            _26638 = binary_op(EQUALS, _26637, 2);
        }
        _26637 = NOVALUE;
        // SubProg emit_op pc: 2325 op: SC2_AND (142)
        if (IS_ATOM_INT(_26638))
        _26635 = (_26638 != 0);
        else
        _26635 = DBL_PTR(_26638)->dbl != 0.0;
        // SubProg emit_op pc: 2328 op: NOP1 (159)
L3C: // addr: 2329 pc: 2328 sub: 51305 op: 159
        // SubProg emit_op pc: 2329 op: SC1_AND (141)
        if (_26635 == 0) {
            _26639 = 0;
            goto L3D; // [2329] 2352
        }
        // SubProg emit_op pc: 2333 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2335 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26640 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 2339 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2341 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26640);
        _26641 = (object)*(((s1_ptr)_2)->base + 1);
        _26640 = NOVALUE;
        // SubProg emit_op pc: 2345 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_26641))
        _26642 = 1;
        else if (IS_ATOM_DBL(_26641))
        _26642 = IS_ATOM_INT(DoubleToInt(_26641));
        else
        _26642 = 0;
        _26641 = NOVALUE;
        // SubProg emit_op pc: 2348 op: SC2_AND (142)
        _26639 = (_26642 != 0);
        // SubProg emit_op pc: 2351 op: NOP1 (159)
L3D: // addr: 2352 pc: 2351 sub: 51305 op: 159
        // SubProg emit_op pc: 2352 op: SC1_AND_IF (146)
        if (_26639 == 0) {
            goto L3E; // [2352] 2401
        }
        // SubProg emit_op pc: 2356 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2358 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26644 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 2362 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2364 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26644);
        _26645 = (object)*(((s1_ptr)_2)->base + 1);
        _26644 = NOVALUE;
        // SubProg emit_op pc: 2368 op: EQUAL (153)
        if (_26645 == 0)
        _26646 = 1;
        else if (IS_ATOM_INT(_26645) && IS_ATOM_INT(0))
        _26646 = 0;
        else
        _26646 = (compare(_26645, 0) == 0);
        _26645 = NOVALUE;
        // SubProg emit_op pc: 2372 op: NOT (7)
        _26647 = (_26646 == 0);
        _26646 = NOVALUE;
        // SubProg emit_op pc: 2375 op: NOP1 (159)
        // SubProg emit_op pc: 2376 op: IF (20)
        if (_26647 == 0)
        {
            DeRef(_26647);
            _26647 = NOVALUE;
            goto L3E; // [2376] 2401
        }
        else{
            DeRef(_26647);
            _26647 = NOVALUE;
        }
        // SubProg emit_op pc: 2379 op: STARTLINE (58)

        /** emit.e:1005				optimized_while = TRUE   -- while TRUE ... emit nothing*/
        // SubProg emit_op pc: 2381 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2383 op: ASSIGN (18)
        _47optimized_while_50371 = _13TRUE_452;
        // SubProg emit_op pc: 2386 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 2388 op: STARTLINE (58)

        /** emit.e:1006				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2390 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 2393 op: STARTLINE (58)

        /** emit.e:1007				last_op = last_op_backup*/
        // SubProg emit_op pc: 2395 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 2398 op: ELSE (23)
        goto LC; // [2398] 7737
        // SubProg emit_op pc: 2400 op: NOP1 (159)
L3E: // addr: 2401 pc: 2400 sub: 51305 op: 159
        // SubProg emit_op pc: 2401 op: STARTLINE (58)

        /** emit.e:1009				flush_temps( {a} )*/
        // SubProg emit_op pc: 2403 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _a_51309;
        _26648 = MAKE_SEQ(_1);
        // SubProg emit_op pc: 2407 op: PROC (27)
        _47flush_temps(_26648);
        _26648 = NOVALUE;
        // SubProg emit_op pc: 2410 op: STARTLINE (58)

        /** emit.e:1010				emit_opcode(op)*/
        // SubProg emit_op pc: 2412 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 2415 op: STARTLINE (58)

        /** emit.e:1011				emit_addr(a)*/
        // SubProg emit_op pc: 2417 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 2420 op: NOP1 (159)
        // SubProg emit_op pc: 2421 op: ELSE (23)
        goto LC; // [2421] 7737
        // SubProg emit_op pc: 2423 op: STARTLINE (58)

        /** emit.e:1016		case INTEGER_CHECK then*/
        // SubProg emit_op pc: 2425 op: CASE (186)
        case 96:
        // SubProg emit_op pc: 2427 op: STARTLINE (58)

        /** emit.e:1017			assignable = FALSE*/
        // SubProg emit_op pc: 2429 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2431 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 2434 op: STARTLINE (58)

        /** emit.e:1018			if previous_op = ASSIGN then*/
        // SubProg emit_op pc: 2436 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2438 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2440 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 18)
        goto L3F; // [2440] 2499
        // SubProg emit_op pc: 2444 op: STARTLINE (58)

        /** emit.e:1019				c = Code[$-1]*/
        // SubProg emit_op pc: 2446 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2448 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26650 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26650 = 1;
        }
        // SubProg emit_op pc: 2451 op: MINUS (10)
        _26651 = _26650 - 1;
        _26650 = NOVALUE;
        // SubProg emit_op pc: 2455 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _c_51311 = (object)*(((s1_ptr)_2)->base + _26651);
        if (!IS_ATOM_INT(_c_51311)){
            _c_51311 = (object)DBL_PTR(_c_51311)->dbl;
        }
        // SubProg emit_op pc: 2461 op: STARTLINE (58)

        /** emit.e:1020				if not IsInteger(c) then*/
        // SubProg emit_op pc: 2463 op: PROC (27)
        _26653 = _47IsInteger(_c_51311);
        // SubProg emit_op pc: 2467 op: NOT_IFW (108)
        if (IS_ATOM_INT(_26653)) {
            if (_26653 != 0){
                DeRef(_26653);
                _26653 = NOVALUE;
                goto L40; // [2467] 2485
            }
        }
        else {
            if (DBL_PTR(_26653)->dbl != 0.0){
                DeRef(_26653);
                _26653 = NOVALUE;
                goto L40; // [2467] 2485
            }
        }
        DeRef(_26653);
        _26653 = NOVALUE;
        // SubProg emit_op pc: 2470 op: STARTLINE (58)

        /** emit.e:1021					emit_opcode(op)*/
        // SubProg emit_op pc: 2472 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 2475 op: STARTLINE (58)

        /** emit.e:1022					emit_addr(op_info1)*/
        // SubProg emit_op pc: 2477 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2479 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 2482 op: ELSE (23)
        goto L41; // [2482] 2556
        // SubProg emit_op pc: 2484 op: NOP1 (159)
L40: // addr: 2485 pc: 2484 sub: 51305 op: 159
        // SubProg emit_op pc: 2485 op: STARTLINE (58)

        /** emit.e:1024					last_op = last_op_backup*/
        // SubProg emit_op pc: 2487 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 2490 op: STARTLINE (58)

        /** emit.e:1025					last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2492 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 2495 op: NOP1 (159)
        // SubProg emit_op pc: 2496 op: ELSE (23)
        goto L41; // [2496] 2556
        // SubProg emit_op pc: 2498 op: NOP1 (159)
L3F: // addr: 2499 pc: 2498 sub: 51305 op: 159
        // SubProg emit_op pc: 2499 op: STARTLINE (58)

        /** emit.e:1027			elsif previous_op = -1 or*/
        // SubProg emit_op pc: 2501 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2503 op: EQUALS (3)
        _26655 = (_36previous_op_16534 == -1);
        // SubProg emit_op pc: 2507 op: SC1_OR_IF (147)
        if (_26655 != 0) {
            goto L42; // [2507] 2530
        }
        // SubProg emit_op pc: 2511 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2513 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2515 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47op_result_50985);
        _26657 = (object)*(((s1_ptr)_2)->base + _36previous_op_16534);
        // SubProg emit_op pc: 2519 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2521 op: NOTEQ (4)
        _26658 = (_26657 != 1);
        _26657 = NOVALUE;
        // SubProg emit_op pc: 2525 op: NOP1 (159)
        // SubProg emit_op pc: 2526 op: IF (20)
        if (_26658 == 0)
        {
            DeRef(_26658);
            _26658 = NOVALUE;
            goto L43; // [2526] 2545
        }
        else{
            DeRef(_26658);
            _26658 = NOVALUE;
        }
        // SubProg emit_op pc: 2529 op: NOP1 (159)
L42: // addr: 2530 pc: 2529 sub: 51305 op: 159
        // SubProg emit_op pc: 2530 op: STARTLINE (58)

        /** emit.e:1029				emit_opcode(op)*/
        // SubProg emit_op pc: 2532 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 2535 op: STARTLINE (58)

        /** emit.e:1030				emit_addr(op_info1)*/
        // SubProg emit_op pc: 2537 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2539 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 2542 op: ELSE (23)
        goto L41; // [2542] 2556
        // SubProg emit_op pc: 2544 op: NOP1 (159)
L43: // addr: 2545 pc: 2544 sub: 51305 op: 159
        // SubProg emit_op pc: 2545 op: STARTLINE (58)

        /** emit.e:1032				last_op = last_op_backup*/
        // SubProg emit_op pc: 2547 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 2550 op: STARTLINE (58)

        /** emit.e:1033				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2552 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 2555 op: NOP1 (159)
L41: // addr: 2556 pc: 2555 sub: 51305 op: 159
        // SubProg emit_op pc: 2556 op: STARTLINE (58)

        /** emit.e:1035			clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 2558 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2560 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26659 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26659 = 1;
        }
        // SubProg emit_op pc: 2563 op: MINUS (10)
        _26660 = _26659 - 1;
        _26659 = NOVALUE;
        // SubProg emit_op pc: 2567 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26661 = (object)*(((s1_ptr)_2)->base + _26660);
        // SubProg emit_op pc: 2571 op: PROC (27)
        Ref(_26661);
        _47clear_temp(_26661);
        _26661 = NOVALUE;
        // SubProg emit_op pc: 2574 op: ELSE (23)
        goto LC; // [2574] 7737
        // SubProg emit_op pc: 2576 op: STARTLINE (58)

        /** emit.e:1037		case SEQUENCE_CHECK then*/
        // SubProg emit_op pc: 2578 op: CASE (186)
        case 97:
        // SubProg emit_op pc: 2580 op: STARTLINE (58)

        /** emit.e:1038			assignable = FALSE*/
        // SubProg emit_op pc: 2582 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2584 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 2587 op: STARTLINE (58)

        /** emit.e:1039			if previous_op = ASSIGN then*/
        // SubProg emit_op pc: 2589 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2591 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2593 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 18)
        goto L44; // [2593] 2720
        // SubProg emit_op pc: 2597 op: STARTLINE (58)

        /** emit.e:1040				c = Code[$-1]*/
        // SubProg emit_op pc: 2599 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2601 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26663 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26663 = 1;
        }
        // SubProg emit_op pc: 2604 op: MINUS (10)
        _26664 = _26663 - 1;
        _26663 = NOVALUE;
        // SubProg emit_op pc: 2608 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _c_51311 = (object)*(((s1_ptr)_2)->base + _26664);
        if (!IS_ATOM_INT(_c_51311)){
            _c_51311 = (object)DBL_PTR(_c_51311)->dbl;
        }
        // SubProg emit_op pc: 2614 op: STARTLINE (58)

        /** emit.e:1041				if c < 1 or*/
        // SubProg emit_op pc: 2616 op: LESS (1)
        _26666 = (_c_51311 < 1);
        // SubProg emit_op pc: 2620 op: SC1_OR (143)
        if (_26666 != 0) {
            _26667 = 1;
            goto L45; // [2620] 2646
        }
        // SubProg emit_op pc: 2624 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2626 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26668 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 2630 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2632 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26668);
        _26669 = (object)*(((s1_ptr)_2)->base + 3);
        _26668 = NOVALUE;
        // SubProg emit_op pc: 2636 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2638 op: NOTEQ (4)
        if (IS_ATOM_INT(_26669)) {
            _26670 = (_26669 != 2);
        }
        else {
            _26670 = binary_op(NOTEQ, _26669, 2);
        }
        _26669 = NOVALUE;
        // SubProg emit_op pc: 2642 op: SC2_OR (144)
        if (IS_ATOM_INT(_26670))
        _26667 = (_26670 != 0);
        else
        _26667 = DBL_PTR(_26670)->dbl != 0.0;
        // SubProg emit_op pc: 2645 op: NOP1 (159)
L45: // addr: 2646 pc: 2645 sub: 51305 op: 159
        // SubProg emit_op pc: 2646 op: SC1_OR_IF (147)
        if (_26667 != 0) {
            goto L46; // [2646] 2673
        }
        // SubProg emit_op pc: 2650 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2652 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26672 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 2656 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2658 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26672);
        _26673 = (object)*(((s1_ptr)_2)->base + 1);
        _26672 = NOVALUE;
        // SubProg emit_op pc: 2662 op: IS_A_SEQUENCE (68)
        _26674 = IS_SEQUENCE(_26673);
        _26673 = NOVALUE;
        // SubProg emit_op pc: 2665 op: NOT (7)
        _26675 = (_26674 == 0);
        _26674 = NOVALUE;
        // SubProg emit_op pc: 2668 op: NOP1 (159)
        // SubProg emit_op pc: 2669 op: IF (20)
        if (_26675 == 0)
        {
            DeRef(_26675);
            _26675 = NOVALUE;
            goto L47; // [2669] 2706
        }
        else{
            DeRef(_26675);
            _26675 = NOVALUE;
        }
        // SubProg emit_op pc: 2672 op: NOP1 (159)
L46: // addr: 2673 pc: 2672 sub: 51305 op: 159
        // SubProg emit_op pc: 2673 op: STARTLINE (58)

        /** emit.e:1044					emit_opcode(op)*/
        // SubProg emit_op pc: 2675 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 2678 op: STARTLINE (58)

        /** emit.e:1045					emit_addr(op_info1)*/
        // SubProg emit_op pc: 2680 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2682 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 2685 op: STARTLINE (58)

        /** emit.e:1046					clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 2687 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2689 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26676 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26676 = 1;
        }
        // SubProg emit_op pc: 2692 op: MINUS (10)
        _26677 = _26676 - 1;
        _26676 = NOVALUE;
        // SubProg emit_op pc: 2696 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26678 = (object)*(((s1_ptr)_2)->base + _26677);
        // SubProg emit_op pc: 2700 op: PROC (27)
        Ref(_26678);
        _47clear_temp(_26678);
        _26678 = NOVALUE;
        // SubProg emit_op pc: 2703 op: ELSE (23)
        goto LC; // [2703] 7737
        // SubProg emit_op pc: 2705 op: NOP1 (159)
L47: // addr: 2706 pc: 2705 sub: 51305 op: 159
        // SubProg emit_op pc: 2706 op: STARTLINE (58)

        /** emit.e:1048					last_op = last_op_backup*/
        // SubProg emit_op pc: 2708 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 2711 op: STARTLINE (58)

        /** emit.e:1049					last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2713 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 2716 op: NOP1 (159)
        // SubProg emit_op pc: 2717 op: ELSE (23)
        goto LC; // [2717] 7737
        // SubProg emit_op pc: 2719 op: NOP1 (159)
L44: // addr: 2720 pc: 2719 sub: 51305 op: 159
        // SubProg emit_op pc: 2720 op: STARTLINE (58)

        /** emit.e:1051			elsif previous_op = -1 or op_result[previous_op] != T_SEQUENCE then*/
        // SubProg emit_op pc: 2722 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2724 op: EQUALS (3)
        _26679 = (_36previous_op_16534 == -1);
        // SubProg emit_op pc: 2728 op: SC1_OR_IF (147)
        if (_26679 != 0) {
            goto L48; // [2728] 2751
        }
        // SubProg emit_op pc: 2732 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2734 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2736 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47op_result_50985);
        _26681 = (object)*(((s1_ptr)_2)->base + _36previous_op_16534);
        // SubProg emit_op pc: 2740 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2742 op: NOTEQ (4)
        _26682 = (_26681 != 2);
        _26681 = NOVALUE;
        // SubProg emit_op pc: 2746 op: NOP1 (159)
        // SubProg emit_op pc: 2747 op: IF (20)
        if (_26682 == 0)
        {
            DeRef(_26682);
            _26682 = NOVALUE;
            goto L49; // [2747] 2784
        }
        else{
            DeRef(_26682);
            _26682 = NOVALUE;
        }
        // SubProg emit_op pc: 2750 op: NOP1 (159)
L48: // addr: 2751 pc: 2750 sub: 51305 op: 159
        // SubProg emit_op pc: 2751 op: STARTLINE (58)

        /** emit.e:1052				emit_opcode(op)*/
        // SubProg emit_op pc: 2753 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 2756 op: STARTLINE (58)

        /** emit.e:1053				emit_addr(op_info1)*/
        // SubProg emit_op pc: 2758 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2760 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 2763 op: STARTLINE (58)

        /** emit.e:1054				clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 2765 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2767 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26683 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26683 = 1;
        }
        // SubProg emit_op pc: 2770 op: MINUS (10)
        _26684 = _26683 - 1;
        _26683 = NOVALUE;
        // SubProg emit_op pc: 2774 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26685 = (object)*(((s1_ptr)_2)->base + _26684);
        // SubProg emit_op pc: 2778 op: PROC (27)
        Ref(_26685);
        _47clear_temp(_26685);
        _26685 = NOVALUE;
        // SubProg emit_op pc: 2781 op: ELSE (23)
        goto LC; // [2781] 7737
        // SubProg emit_op pc: 2783 op: NOP1 (159)
L49: // addr: 2784 pc: 2783 sub: 51305 op: 159
        // SubProg emit_op pc: 2784 op: STARTLINE (58)

        /** emit.e:1056				last_op = last_op_backup*/
        // SubProg emit_op pc: 2786 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 2789 op: STARTLINE (58)

        /** emit.e:1057				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2791 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 2794 op: NOP1 (159)
        // SubProg emit_op pc: 2795 op: ELSE (23)
        goto LC; // [2795] 7737
        // SubProg emit_op pc: 2797 op: STARTLINE (58)

        /** emit.e:1061		case ATOM_CHECK then*/
        // SubProg emit_op pc: 2799 op: CASE (186)
        case 101:
        // SubProg emit_op pc: 2801 op: STARTLINE (58)

        /** emit.e:1062			assignable = FALSE*/
        // SubProg emit_op pc: 2803 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2805 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 2808 op: STARTLINE (58)

        /** emit.e:1063			if previous_op = ASSIGN then*/
        // SubProg emit_op pc: 2810 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2812 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2814 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 18)
        goto L4A; // [2814] 3013
        // SubProg emit_op pc: 2818 op: STARTLINE (58)

        /** emit.e:1064				c = Code[$-1]*/
        // SubProg emit_op pc: 2820 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2822 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26687 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26687 = 1;
        }
        // SubProg emit_op pc: 2825 op: MINUS (10)
        _26688 = _26687 - 1;
        _26687 = NOVALUE;
        // SubProg emit_op pc: 2829 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _c_51311 = (object)*(((s1_ptr)_2)->base + _26688);
        if (!IS_ATOM_INT(_c_51311)){
            _c_51311 = (object)DBL_PTR(_c_51311)->dbl;
        }
        // SubProg emit_op pc: 2835 op: STARTLINE (58)

        /** emit.e:1065				if c > 1*/
        // SubProg emit_op pc: 2837 op: GREATER (6)
        _26690 = (_c_51311 > 1);
        // SubProg emit_op pc: 2841 op: SC1_AND_IF (146)
        if (_26690 == 0) {
            goto L4B; // [2841] 2962
        }
        // SubProg emit_op pc: 2845 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2847 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26692 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 2851 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2853 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26692);
        _26693 = (object)*(((s1_ptr)_2)->base + 3);
        _26692 = NOVALUE;
        // SubProg emit_op pc: 2857 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2859 op: EQUALS (3)
        if (IS_ATOM_INT(_26693)) {
            _26694 = (_26693 == 2);
        }
        else {
            _26694 = binary_op(EQUALS, _26693, 2);
        }
        _26693 = NOVALUE;
        // SubProg emit_op pc: 2863 op: NOP1 (159)
        // SubProg emit_op pc: 2864 op: IF (20)
        if (_26694 == 0) {
            DeRef(_26694);
            _26694 = NOVALUE;
            goto L4B; // [2864] 2962
        }
        else {
            if (!IS_ATOM_INT(_26694) && DBL_PTR(_26694)->dbl == 0.0){
                DeRef(_26694);
                _26694 = NOVALUE;
                goto L4B; // [2864] 2962
            }
            DeRef(_26694);
            _26694 = NOVALUE;
        }
        DeRef(_26694);
        _26694 = NOVALUE;
        // SubProg emit_op pc: 2867 op: STARTLINE (58)

        /** emit.e:1068					if sequence( SymTab[c][S_OBJ] ) then*/
        // SubProg emit_op pc: 2869 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2871 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26695 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 2875 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2877 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26695);
        _26696 = (object)*(((s1_ptr)_2)->base + 1);
        _26695 = NOVALUE;
        // SubProg emit_op pc: 2881 op: IS_A_SEQUENCE (68)
        _26697 = IS_SEQUENCE(_26696);
        _26696 = NOVALUE;
        // SubProg emit_op pc: 2884 op: IF (20)
        if (_26697 == 0)
        {
            _26697 = NOVALUE;
            goto L4C; // [2884] 2913
        }
        else{
            _26697 = NOVALUE;
        }
        // SubProg emit_op pc: 2887 op: STARTLINE (58)

        /** emit.e:1070						ThisLine = ExprLine*/
        // SubProg emit_op pc: 2889 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2891 op: ASSIGN (18)
        RefDS(_40ExprLine_56465);
        DeRef(_50ThisLine_48707);
        _50ThisLine_48707 = _40ExprLine_56465;
        // SubProg emit_op pc: 2894 op: STARTLINE (58)

        /** emit.e:1071						bp = expr_bp*/
        // SubProg emit_op pc: 2896 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2898 op: ASSIGN (18)
        _50bp_48711 = _40expr_bp_56466;
        // SubProg emit_op pc: 2901 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 2903 op: STARTLINE (58)

        /** emit.e:1072						CompileErr( 346 )*/
        // SubProg emit_op pc: 2905 op: PROC (27)
        RefDS(_21933);
        _50CompileErr(346, _21933, 0);
        // SubProg emit_op pc: 2910 op: ELSE (23)
        goto L4D; // [2910] 3092
        // SubProg emit_op pc: 2912 op: NOP1 (159)
L4C: // addr: 2913 pc: 2912 sub: 51305 op: 159
        // SubProg emit_op pc: 2913 op: STARTLINE (58)

        /** emit.e:1074					elsif SymTab[c][S_OBJ] = NOVALUE then*/
        // SubProg emit_op pc: 2915 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2917 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26698 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 2921 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2923 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26698);
        _26699 = (object)*(((s1_ptr)_2)->base + 1);
        _26698 = NOVALUE;
        // SubProg emit_op pc: 2927 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2929 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26699, _36NOVALUE_16291)){
            _26699 = NOVALUE;
            goto L4E; // [2929] 2948
        }
        _26699 = NOVALUE;
        // SubProg emit_op pc: 2933 op: STARTLINE (58)

        /** emit.e:1075						emit_opcode(op)*/
        // SubProg emit_op pc: 2935 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 2938 op: STARTLINE (58)

        /** emit.e:1076						emit_addr(op_info1)*/
        // SubProg emit_op pc: 2940 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2942 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 2945 op: ELSE (23)
        goto L4D; // [2945] 3092
        // SubProg emit_op pc: 2947 op: NOP1 (159)
L4E: // addr: 2948 pc: 2947 sub: 51305 op: 159
        // SubProg emit_op pc: 2948 op: STARTLINE (58)

        /** emit.e:1078						last_op = last_op_backup*/
        // SubProg emit_op pc: 2950 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 2953 op: STARTLINE (58)

        /** emit.e:1079						last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2955 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 2958 op: NOP1 (159)
        // SubProg emit_op pc: 2959 op: ELSE (23)
        goto L4D; // [2959] 3092
        // SubProg emit_op pc: 2961 op: NOP1 (159)
L4B: // addr: 2962 pc: 2961 sub: 51305 op: 159
        // SubProg emit_op pc: 2962 op: STARTLINE (58)

        /** emit.e:1082				elsif c < 1 */
        // SubProg emit_op pc: 2964 op: LESS (1)
        _26701 = (_c_51311 < 1);
        // SubProg emit_op pc: 2968 op: SC1_OR_IF (147)
        if (_26701 != 0) {
            goto L4F; // [2968] 2984
        }
        // SubProg emit_op pc: 2972 op: PROC (27)
        _26703 = _47IsInteger(_c_51311);
        // SubProg emit_op pc: 2976 op: NOT (7)
        if (IS_ATOM_INT(_26703)) {
            _26704 = (_26703 == 0);
        }
        else {
            _26704 = unary_op(NOT, _26703);
        }
        DeRef(_26703);
        _26703 = NOVALUE;
        // SubProg emit_op pc: 2979 op: NOP1 (159)
        // SubProg emit_op pc: 2980 op: IF (20)
        if (_26704 == 0) {
            DeRef(_26704);
            _26704 = NOVALUE;
            goto L50; // [2980] 2999
        }
        else {
            if (!IS_ATOM_INT(_26704) && DBL_PTR(_26704)->dbl == 0.0){
                DeRef(_26704);
                _26704 = NOVALUE;
                goto L50; // [2980] 2999
            }
            DeRef(_26704);
            _26704 = NOVALUE;
        }
        DeRef(_26704);
        _26704 = NOVALUE;
        // SubProg emit_op pc: 2983 op: NOP1 (159)
L4F: // addr: 2984 pc: 2983 sub: 51305 op: 159
        // SubProg emit_op pc: 2984 op: STARTLINE (58)

        /** emit.e:1085					emit_opcode(op)*/
        // SubProg emit_op pc: 2986 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 2989 op: STARTLINE (58)

        /** emit.e:1086					emit_addr(op_info1)*/
        // SubProg emit_op pc: 2991 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2993 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 2996 op: ELSE (23)
        goto L4D; // [2996] 3092
        // SubProg emit_op pc: 2998 op: NOP1 (159)
L50: // addr: 2999 pc: 2998 sub: 51305 op: 159
        // SubProg emit_op pc: 2999 op: STARTLINE (58)

        /** emit.e:1089					last_op = last_op_backup*/
        // SubProg emit_op pc: 3001 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 3004 op: STARTLINE (58)

        /** emit.e:1090					last_pc = last_pc_backup*/
        // SubProg emit_op pc: 3006 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 3009 op: NOP1 (159)
        // SubProg emit_op pc: 3010 op: ELSE (23)
        goto L4D; // [3010] 3092
        // SubProg emit_op pc: 3012 op: NOP1 (159)
L4A: // addr: 3013 pc: 3012 sub: 51305 op: 159
        // SubProg emit_op pc: 3013 op: STARTLINE (58)

        /** emit.e:1092			elsif previous_op = -1 or*/
        // SubProg emit_op pc: 3015 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3017 op: EQUALS (3)
        _26705 = (_36previous_op_16534 == -1);
        // SubProg emit_op pc: 3021 op: SC1_OR_IF (147)
        if (_26705 != 0) {
            goto L51; // [3021] 3066
        }
        // SubProg emit_op pc: 3025 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3027 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3029 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47op_result_50985);
        _26707 = (object)*(((s1_ptr)_2)->base + _36previous_op_16534);
        // SubProg emit_op pc: 3033 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3035 op: NOTEQ (4)
        _26708 = (_26707 != 1);
        _26707 = NOVALUE;
        // SubProg emit_op pc: 3039 op: SC1_AND (141)
        if (_26708 == 0) {
            DeRef(_26709);
            _26709 = 0;
            goto L52; // [3039] 3061
        }
        // SubProg emit_op pc: 3043 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3045 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3047 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47op_result_50985);
        _26710 = (object)*(((s1_ptr)_2)->base + _36previous_op_16534);
        // SubProg emit_op pc: 3051 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3053 op: NOTEQ (4)
        _26711 = (_26710 != 3);
        _26710 = NOVALUE;
        // SubProg emit_op pc: 3057 op: SC2_AND (142)
        _26709 = (_26711 != 0);
        // SubProg emit_op pc: 3060 op: NOP1 (159)
L52: // addr: 3061 pc: 3060 sub: 51305 op: 159
        // SubProg emit_op pc: 3061 op: NOP1 (159)
        // SubProg emit_op pc: 3062 op: IF (20)
        if (_26709 == 0)
        {
            _26709 = NOVALUE;
            goto L53; // [3062] 3081
        }
        else{
            _26709 = NOVALUE;
        }
        // SubProg emit_op pc: 3065 op: NOP1 (159)
L51: // addr: 3066 pc: 3065 sub: 51305 op: 159
        // SubProg emit_op pc: 3066 op: STARTLINE (58)

        /** emit.e:1095				emit_opcode(op)*/
        // SubProg emit_op pc: 3068 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 3071 op: STARTLINE (58)

        /** emit.e:1096				emit_addr(op_info1)*/
        // SubProg emit_op pc: 3073 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3075 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 3078 op: ELSE (23)
        goto L4D; // [3078] 3092
        // SubProg emit_op pc: 3080 op: NOP1 (159)
L53: // addr: 3081 pc: 3080 sub: 51305 op: 159
        // SubProg emit_op pc: 3081 op: STARTLINE (58)

        /** emit.e:1098				last_op = last_op_backup*/
        // SubProg emit_op pc: 3083 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 3086 op: STARTLINE (58)

        /** emit.e:1099				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 3088 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 3091 op: NOP1 (159)
L4D: // addr: 3092 pc: 3091 sub: 51305 op: 159
        // SubProg emit_op pc: 3092 op: STARTLINE (58)

        /** emit.e:1101			clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 3094 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3096 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26712 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26712 = 1;
        }
        // SubProg emit_op pc: 3099 op: MINUS (10)
        _26713 = _26712 - 1;
        _26712 = NOVALUE;
        // SubProg emit_op pc: 3103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26714 = (object)*(((s1_ptr)_2)->base + _26713);
        // SubProg emit_op pc: 3107 op: PROC (27)
        Ref(_26714);
        _47clear_temp(_26714);
        _26714 = NOVALUE;
        // SubProg emit_op pc: 3110 op: ELSE (23)
        goto LC; // [3110] 7737
        // SubProg emit_op pc: 3112 op: STARTLINE (58)

        /** emit.e:1103		case RIGHT_BRACE_N then*/
        // SubProg emit_op pc: 3114 op: CASE (186)
        case 31:
        // SubProg emit_op pc: 3116 op: STARTLINE (58)

        /** emit.e:1105			n = op_info1*/
        // SubProg emit_op pc: 3118 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3120 op: ASSIGN_I (113)
        _n_51320 = _47op_info1_50369;
        // SubProg emit_op pc: 3123 op: STARTLINE (58)

        /** emit.e:1107			elements = {}*/
        // SubProg emit_op pc: 3125 op: ASSIGN (18)
        RefDS(_21933);
        DeRef(_elements_51322);
        _elements_51322 = _21933;
        // SubProg emit_op pc: 3128 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 3130 op: STARTLINE (58)

        /** emit.e:1108			for i = 1 to n do*/
        // SubProg emit_op pc: 3132 op: ASSIGN (18)
        _26715 = _n_51320;
        // SubProg emit_op pc: 3135 op: FOR_I (125)
        {
            object _i_51970;
            _i_51970 = 1;
L54: // addr: 3142 pc: 3135 sub: 51305 op: 125
            if (_i_51970 > _26715){
                goto L55; // [3135] 3158
            }
            // SubProg emit_op pc: 3142 op: STARTLINE (58)

            /** emit.e:1109				elements = append(elements, Pop())*/
            // SubProg emit_op pc: 3144 op: PROC (27)
            _26716 = _47Pop();
            // SubProg emit_op pc: 3147 op: APPEND (35)
            Ref(_26716);
            Append(&_elements_51322, _elements_51322, _26716);
            DeRef(_26716);
            _26716 = NOVALUE;
            // SubProg emit_op pc: 3151 op: STARTLINE (58)

            /** emit.e:1110			end for*/
            // SubProg emit_op pc: 3153 op: ENDFOR_INT_UP1 (54)
            _i_51970 = _i_51970 + 1;
            goto L54; // [3153] 3142
L55: // addr: 3158 pc: 3153 sub: 51305 op: 54
            ;
        }
        // SubProg emit_op pc: 3158 op: STARTLINE (58)

        /** emit.e:1111			element_vals = good_string(elements)*/
        // SubProg emit_op pc: 3160 op: PROC (27)
        RefDS(_elements_51322);
        _0 = _element_vals_51323;
        _element_vals_51323 = _47good_string(_elements_51322);
        DeRef(_0);
        // SubProg emit_op pc: 3164 op: STARTLINE (58)

        /** emit.e:1113			if sequence(element_vals) then*/
        // SubProg emit_op pc: 3166 op: IS_A_SEQUENCE (68)
        _26719 = IS_SEQUENCE(_element_vals_51323);
        // SubProg emit_op pc: 3169 op: IF (20)
        if (_26719 == 0)
        {
            _26719 = NOVALUE;
            goto L56; // [3169] 3200
        }
        else{
            _26719 = NOVALUE;
        }
        // SubProg emit_op pc: 3172 op: STARTLINE (58)

        /** emit.e:1114				c = NewStringSym(element_vals)  -- make a string literal*/
        // SubProg emit_op pc: 3174 op: PROC (27)
        Ref(_element_vals_51323);
        _c_51311 = _54NewStringSym(_element_vals_51323);
        // SubProg emit_op pc: 3178 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 3180 op: STARTLINE (58)

        /** emit.e:1115				assignable = FALSE*/
        // SubProg emit_op pc: 3182 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3184 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 3187 op: STARTLINE (58)

        /** emit.e:1116				last_op = last_op_backup*/
        // SubProg emit_op pc: 3189 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 3192 op: STARTLINE (58)

        /** emit.e:1117				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 3194 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 3197 op: ELSE (23)
        goto L57; // [3197] 3291
        // SubProg emit_op pc: 3199 op: NOP1 (159)
L56: // addr: 3200 pc: 3199 sub: 51305 op: 159
        // SubProg emit_op pc: 3200 op: STARTLINE (58)

        /** emit.e:1119				if n = 2 then*/
        // SubProg emit_op pc: 3202 op: EQUALS_IFW_I (121)
        if (_n_51320 != 2)
        goto L58; // [3202] 3225
        // SubProg emit_op pc: 3206 op: STARTLINE (58)

        /** emit.e:1120					emit_opcode(RIGHT_BRACE_2) -- faster op for two items*/
        // SubProg emit_op pc: 3208 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3210 op: PROC (27)
        _47emit_opcode(85);
        // SubProg emit_op pc: 3213 op: STARTLINE (58)

        /** emit.e:1121					last_op = RIGHT_BRACE_2*/
        // SubProg emit_op pc: 3215 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3217 op: ASSIGN (18)
        _47last_op_51266 = 85;
        // SubProg emit_op pc: 3220 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3222 op: ELSE (23)
        goto L59; // [3222] 3236
        // SubProg emit_op pc: 3224 op: NOP1 (159)
L58: // addr: 3225 pc: 3224 sub: 51305 op: 159
        // SubProg emit_op pc: 3225 op: STARTLINE (58)

        /** emit.e:1123					emit_opcode(op)*/
        // SubProg emit_op pc: 3227 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 3230 op: STARTLINE (58)

        /** emit.e:1124					emit(n)*/
        // SubProg emit_op pc: 3232 op: PROC (27)
        _47emit(_n_51320);
        // SubProg emit_op pc: 3235 op: NOP1 (159)
L59: // addr: 3236 pc: 3235 sub: 51305 op: 159
        // SubProg emit_op pc: 3236 op: STARTLINE (58)

        /** emit.e:1127				for i = 1 to n do*/
        // SubProg emit_op pc: 3238 op: ASSIGN (18)
        _26722 = _n_51320;
        // SubProg emit_op pc: 3241 op: FOR_I (125)
        {
            object _i_51987;
            _i_51987 = 1;
L5A: // addr: 3248 pc: 3241 sub: 51305 op: 125
            if (_i_51987 > _26722){
                goto L5B; // [3241] 3264
            }
            // SubProg emit_op pc: 3248 op: STARTLINE (58)

            /** emit.e:1128					emit_addr(elements[i])*/
            // SubProg emit_op pc: 3250 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_elements_51322);
            _26723 = (object)*(((s1_ptr)_2)->base + _i_51987);
            // SubProg emit_op pc: 3254 op: PROC (27)
            Ref(_26723);
            _47emit_addr(_26723);
            _26723 = NOVALUE;
            // SubProg emit_op pc: 3257 op: STARTLINE (58)

            /** emit.e:1129				end for*/
            // SubProg emit_op pc: 3259 op: ENDFOR_INT_UP1 (54)
            _i_51987 = _i_51987 + 1;
            goto L5A; // [3259] 3248
L5B: // addr: 3264 pc: 3259 sub: 51305 op: 54
            ;
        }
        // SubProg emit_op pc: 3264 op: STARTLINE (58)

        /** emit.e:1130				c = NewTempSym()*/
        // SubProg emit_op pc: 3266 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 3270 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 3272 op: STARTLINE (58)

        /** emit.e:1131				emit_addr(c)*/
        // SubProg emit_op pc: 3274 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 3277 op: STARTLINE (58)

        /** emit.e:1132				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 3279 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 3283 op: STARTLINE (58)

        /** emit.e:1133				assignable = TRUE*/
        // SubProg emit_op pc: 3285 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3287 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 3290 op: NOP1 (159)
L57: // addr: 3291 pc: 3290 sub: 51305 op: 159
        // SubProg emit_op pc: 3291 op: STARTLINE (58)

        /** emit.e:1135			Push(c)*/
        // SubProg emit_op pc: 3293 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 3296 op: ELSE (23)
        goto LC; // [3296] 7737
        // SubProg emit_op pc: 3298 op: STARTLINE (58)

        /** emit.e:1138		case ASSIGN_SUBS2,      -- can't change the op*/
        // SubProg emit_op pc: 3300 op: CASE (186)
        case 148:
        // SubProg emit_op pc: 3302 op: CASE (186)
        case 16:
        // SubProg emit_op pc: 3304 op: CASE (186)
        case 162:
        // SubProg emit_op pc: 3306 op: STARTLINE (58)

        /** emit.e:1141			b = Pop() -- rhs value*/
        // SubProg emit_op pc: 3308 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 3311 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 3313 op: STARTLINE (58)

        /** emit.e:1142			a = Pop() -- subscript*/
        // SubProg emit_op pc: 3315 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 3318 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 3320 op: STARTLINE (58)

        /** emit.e:1143			c = Pop() -- sequence*/
        // SubProg emit_op pc: 3322 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 3325 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 3327 op: STARTLINE (58)

        /** emit.e:1144			if op = ASSIGN_SUBS then*/
        // SubProg emit_op pc: 3329 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3331 op: EQUALS_IFW (104)
        if (_op_51307 != 16)
        goto L5C; // [3331] 3523
        // SubProg emit_op pc: 3335 op: STARTLINE (58)

        /** emit.e:1146				if (previous_op != LHS_SUBS) and*/
        // SubProg emit_op pc: 3337 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3339 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3341 op: NOTEQ (4)
        _26729 = (_36previous_op_16534 != 95);
        // SubProg emit_op pc: 3345 op: SC1_AND (141)
        if (_26729 == 0) {
            _26730 = 0;
            goto L5D; // [3345] 3357
        }
        // SubProg emit_op pc: 3349 op: GREATER (6)
        _26731 = (_c_51311 > 0);
        // SubProg emit_op pc: 3353 op: SC2_AND (142)
        _26730 = (_26731 != 0);
        // SubProg emit_op pc: 3356 op: NOP1 (159)
L5D: // addr: 3357 pc: 3356 sub: 51305 op: 159
        // SubProg emit_op pc: 3357 op: SC1_AND_IF (146)
        if (_26730 == 0) {
            goto L5E; // [3357] 3495
        }
        // SubProg emit_op pc: 3361 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3363 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26733 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 3367 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26733);
        _26734 = (object)*(((s1_ptr)_2)->base + 3);
        _26733 = NOVALUE;
        // SubProg emit_op pc: 3373 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3375 op: NOTEQ (4)
        if (IS_ATOM_INT(_26734)) {
            _26735 = (_26734 != 1);
        }
        else {
            _26735 = binary_op(NOTEQ, _26734, 1);
        }
        _26734 = NOVALUE;
        // SubProg emit_op pc: 3379 op: SC1_OR (143)
        if (IS_ATOM_INT(_26735)) {
            if (_26735 != 0) {
                DeRef(_26736);
                _26736 = 1;
                goto L5F; // [3379] 3479
            }
        }
        else {
            if (DBL_PTR(_26735)->dbl != 0.0) {
                DeRef(_26736);
                _26736 = 1;
                goto L5F; // [3379] 3479
            }
        }
        // SubProg emit_op pc: 3383 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3385 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26737 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 3389 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3391 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26737);
        _26738 = (object)*(((s1_ptr)_2)->base + 15);
        _26737 = NOVALUE;
        // SubProg emit_op pc: 3395 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3397 op: NOTEQ (4)
        if (IS_ATOM_INT(_26738)) {
            _26739 = (_26738 != _54sequence_type_46259);
        }
        else {
            _26739 = binary_op(NOTEQ, _26738, _54sequence_type_46259);
        }
        _26738 = NOVALUE;
        // SubProg emit_op pc: 3401 op: SC1_AND (141)
        if (IS_ATOM_INT(_26739)) {
            if (_26739 == 0) {
                DeRef(_26740);
                _26740 = 0;
                goto L60; // [3401] 3475
            }
        }
        else {
            if (DBL_PTR(_26739)->dbl == 0.0) {
                DeRef(_26740);
                _26740 = 0;
                goto L60; // [3401] 3475
            }
        }
        // SubProg emit_op pc: 3405 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3407 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26741 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 3411 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3413 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26741);
        _26742 = (object)*(((s1_ptr)_2)->base + 15);
        _26741 = NOVALUE;
        // SubProg emit_op pc: 3417 op: GREATER (6)
        if (IS_ATOM_INT(_26742)) {
            _26743 = (_26742 > 0);
        }
        else {
            _26743 = binary_op(GREATER, _26742, 0);
        }
        _26742 = NOVALUE;
        // SubProg emit_op pc: 3421 op: SC1_AND (141)
        if (IS_ATOM_INT(_26743)) {
            if (_26743 == 0) {
                DeRef(_26744);
                _26744 = 0;
                goto L61; // [3421] 3471
            }
        }
        else {
            if (DBL_PTR(_26743)->dbl == 0.0) {
                DeRef(_26744);
                _26744 = 0;
                goto L61; // [3421] 3471
            }
        }
        // SubProg emit_op pc: 3425 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3427 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3429 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3431 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26745 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 3435 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3437 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26745);
        _26746 = (object)*(((s1_ptr)_2)->base + 15);
        _26745 = NOVALUE;
        // SubProg emit_op pc: 3441 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_26746)){
            _26747 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26746)->dbl));
        }
        else{
            _26747 = (object)*(((s1_ptr)_2)->base + _26746);
        }
        // SubProg emit_op pc: 3445 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3447 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26747);
        _26748 = (object)*(((s1_ptr)_2)->base + 2);
        _26747 = NOVALUE;
        // SubProg emit_op pc: 3451 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_26748)){
            _26749 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26748)->dbl));
        }
        else{
            _26749 = (object)*(((s1_ptr)_2)->base + _26748);
        }
        // SubProg emit_op pc: 3455 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3457 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26749);
        _26750 = (object)*(((s1_ptr)_2)->base + 15);
        _26749 = NOVALUE;
        // SubProg emit_op pc: 3461 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3463 op: NOTEQ (4)
        if (IS_ATOM_INT(_26750)) {
            _26751 = (_26750 != _54sequence_type_46259);
        }
        else {
            _26751 = binary_op(NOTEQ, _26750, _54sequence_type_46259);
        }
        _26750 = NOVALUE;
        // SubProg emit_op pc: 3467 op: SC2_AND (142)
        DeRef(_26744);
        if (IS_ATOM_INT(_26751))
        _26744 = (_26751 != 0);
        else
        _26744 = DBL_PTR(_26751)->dbl != 0.0;
        // SubProg emit_op pc: 3470 op: NOP1 (159)
L61: // addr: 3471 pc: 3470 sub: 51305 op: 159
        // SubProg emit_op pc: 3471 op: SC2_AND (142)
        DeRef(_26740);
        _26740 = (_26744 != 0);
        // SubProg emit_op pc: 3474 op: NOP1 (159)
L60: // addr: 3475 pc: 3474 sub: 51305 op: 159
        // SubProg emit_op pc: 3475 op: SC2_OR (144)
        DeRef(_26736);
        _26736 = (_26740 != 0);
        // SubProg emit_op pc: 3478 op: NOP1 (159)
L5F: // addr: 3479 pc: 3478 sub: 51305 op: 159
        // SubProg emit_op pc: 3479 op: NOP1 (159)
        // SubProg emit_op pc: 3480 op: IF (20)
        if (_26736 == 0)
        {
            _26736 = NOVALUE;
            goto L5E; // [3480] 3495
        }
        else{
            _26736 = NOVALUE;
        }
        // SubProg emit_op pc: 3483 op: STARTLINE (58)

        /** emit.e:1153					op = ASSIGN_SUBS_CHECK*/
        // SubProg emit_op pc: 3485 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3487 op: ASSIGN (18)
        _op_51307 = 84;
        // SubProg emit_op pc: 3490 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3492 op: ELSE (23)
        goto L62; // [3492] 3515
        // SubProg emit_op pc: 3494 op: NOP1 (159)
L5E: // addr: 3495 pc: 3494 sub: 51305 op: 159
        // SubProg emit_op pc: 3495 op: STARTLINE (58)

        /** emit.e:1155					if IsInteger(b) then*/
        // SubProg emit_op pc: 3497 op: PROC (27)
        _26752 = _47IsInteger(_b_51310);
        // SubProg emit_op pc: 3501 op: IF (20)
        if (_26752 == 0) {
            DeRef(_26752);
            _26752 = NOVALUE;
            goto L63; // [3501] 3514
        }
        else {
            if (!IS_ATOM_INT(_26752) && DBL_PTR(_26752)->dbl == 0.0){
                DeRef(_26752);
                _26752 = NOVALUE;
                goto L63; // [3501] 3514
            }
            DeRef(_26752);
            _26752 = NOVALUE;
        }
        DeRef(_26752);
        _26752 = NOVALUE;
        // SubProg emit_op pc: 3504 op: STARTLINE (58)

        /** emit.e:1156						op = ASSIGN_SUBS_I*/
        // SubProg emit_op pc: 3506 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3508 op: ASSIGN (18)
        _op_51307 = 118;
        // SubProg emit_op pc: 3511 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3513 op: NOP1 (159)
L63: // addr: 3514 pc: 3513 sub: 51305 op: 159
        // SubProg emit_op pc: 3514 op: NOP1 (159)
L62: // addr: 3515 pc: 3514 sub: 51305 op: 159
        // SubProg emit_op pc: 3515 op: STARTLINE (58)

        /** emit.e:1159				emit_opcode(op)*/
        // SubProg emit_op pc: 3517 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 3520 op: ELSE (23)
        goto L64; // [3520] 3549
        // SubProg emit_op pc: 3522 op: NOP1 (159)
L5C: // addr: 3523 pc: 3522 sub: 51305 op: 159
        // SubProg emit_op pc: 3523 op: STARTLINE (58)

        /** emit.e:1161			elsif op = PASSIGN_SUBS then*/
        // SubProg emit_op pc: 3525 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3527 op: EQUALS_IFW (104)
        if (_op_51307 != 162)
        goto L65; // [3527] 3541
        // SubProg emit_op pc: 3531 op: STARTLINE (58)

        /** emit.e:1162				emit_opcode(PASSIGN_SUBS) -- always*/
        // SubProg emit_op pc: 3533 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3535 op: PROC (27)
        _47emit_opcode(162);
        // SubProg emit_op pc: 3538 op: ELSE (23)
        goto L64; // [3538] 3549
        // SubProg emit_op pc: 3540 op: NOP1 (159)
L65: // addr: 3541 pc: 3540 sub: 51305 op: 159
        // SubProg emit_op pc: 3541 op: STARTLINE (58)

        /** emit.e:1165				emit_opcode(ASSIGN_SUBS) -- always*/
        // SubProg emit_op pc: 3543 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3545 op: PROC (27)
        _47emit_opcode(16);
        // SubProg emit_op pc: 3548 op: NOP1 (159)
L64: // addr: 3549 pc: 3548 sub: 51305 op: 159
        // SubProg emit_op pc: 3549 op: STARTLINE (58)

        /** emit.e:1169			emit_addr(c) -- sequence*/
        // SubProg emit_op pc: 3551 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 3554 op: STARTLINE (58)

        /** emit.e:1170			emit_addr(a) -- subscript*/
        // SubProg emit_op pc: 3556 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 3559 op: STARTLINE (58)

        /** emit.e:1171			emit_addr(b) -- rhs value*/
        // SubProg emit_op pc: 3561 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 3564 op: STARTLINE (58)

        /** emit.e:1172			assignable = FALSE*/
        // SubProg emit_op pc: 3566 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3568 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 3571 op: ELSE (23)
        goto LC; // [3571] 7737
        // SubProg emit_op pc: 3573 op: STARTLINE (58)

        /** emit.e:1174		case LHS_SUBS, LHS_SUBS1, LHS_SUBS1_COPY then*/
        // SubProg emit_op pc: 3575 op: CASE (186)
        case 95:
        // SubProg emit_op pc: 3577 op: CASE (186)
        case 161:
        // SubProg emit_op pc: 3579 op: CASE (186)
        case 166:
        // SubProg emit_op pc: 3581 op: STARTLINE (58)

        /** emit.e:1176			a = Pop() -- subs*/
        // SubProg emit_op pc: 3583 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 3586 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 3588 op: STARTLINE (58)

        /** emit.e:1177			lhs_var = Pop() -- sequence*/
        // SubProg emit_op pc: 3590 op: PROC (27)
        _lhs_var_51317 = _47Pop();
        // SubProg emit_op pc: 3593 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_lhs_var_51317)) {
            _1 = (object)(DBL_PTR(_lhs_var_51317)->dbl);
            DeRefDS(_lhs_var_51317);
            _lhs_var_51317 = _1;
        }
        // SubProg emit_op pc: 3595 op: STARTLINE (58)

        /** emit.e:1178			emit_opcode(op)*/
        // SubProg emit_op pc: 3597 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 3600 op: STARTLINE (58)

        /** emit.e:1179			emit_addr(lhs_var)*/
        // SubProg emit_op pc: 3602 op: PROC (27)
        _47emit_addr(_lhs_var_51317);
        // SubProg emit_op pc: 3605 op: STARTLINE (58)

        /** emit.e:1180			emit_addr(a)*/
        // SubProg emit_op pc: 3607 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 3610 op: STARTLINE (58)

        /** emit.e:1181			if op = LHS_SUBS then*/
        // SubProg emit_op pc: 3612 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3614 op: EQUALS_IFW (104)
        if (_op_51307 != 95)
        goto L66; // [3614] 3645
        // SubProg emit_op pc: 3618 op: STARTLINE (58)

        /** emit.e:1182				TempKeep(lhs_var) -- should be lhs_target_temp*/
        // SubProg emit_op pc: 3620 op: PROC (27)
        _47TempKeep(_lhs_var_51317);
        // SubProg emit_op pc: 3623 op: STARTLINE (58)

        /** emit.e:1183				emit_addr(lhs_target_temp)*/
        // SubProg emit_op pc: 3625 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3627 op: PROC (27)
        _47emit_addr(_47lhs_target_temp_50383);
        // SubProg emit_op pc: 3630 op: STARTLINE (58)

        /** emit.e:1184				Push(lhs_target_temp)*/
        // SubProg emit_op pc: 3632 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3634 op: PROC (27)
        _47Push(_47lhs_target_temp_50383);
        // SubProg emit_op pc: 3637 op: STARTLINE (58)

        /** emit.e:1185				emit_addr(0) -- place holder*/
        // SubProg emit_op pc: 3639 op: PROC (27)
        _47emit_addr(0);
        // SubProg emit_op pc: 3642 op: ELSE (23)
        goto L67; // [3642] 3699
        // SubProg emit_op pc: 3644 op: NOP1 (159)
L66: // addr: 3645 pc: 3644 sub: 51305 op: 159
        // SubProg emit_op pc: 3645 op: STARTLINE (58)

        /** emit.e:1189				lhs_target_temp = NewTempSym() -- use same temp for all subscripts*/
        // SubProg emit_op pc: 3647 op: PROC (27)
        _0 = _54NewTempSym(0);
        _47lhs_target_temp_50383 = _0;
        // SubProg emit_op pc: 3651 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_47lhs_target_temp_50383)) {
            _1 = (object)(DBL_PTR(_47lhs_target_temp_50383)->dbl);
            DeRefDS(_47lhs_target_temp_50383);
            _47lhs_target_temp_50383 = _1;
        }
        // SubProg emit_op pc: 3653 op: STARTLINE (58)

        /** emit.e:1190				emit_addr(lhs_target_temp) -- target temp holds pointer to sequence*/
        // SubProg emit_op pc: 3655 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3657 op: PROC (27)
        _47emit_addr(_47lhs_target_temp_50383);
        // SubProg emit_op pc: 3660 op: STARTLINE (58)

        /** emit.e:1191				emit_temp(lhs_target_temp, NEW_REFERENCE )*/
        // SubProg emit_op pc: 3662 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3664 op: PROC (27)
        _47emit_temp(_47lhs_target_temp_50383, 1);
        // SubProg emit_op pc: 3668 op: STARTLINE (58)

        /** emit.e:1192				Push(lhs_target_temp)*/
        // SubProg emit_op pc: 3670 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3672 op: PROC (27)
        _47Push(_47lhs_target_temp_50383);
        // SubProg emit_op pc: 3675 op: STARTLINE (58)

        /** emit.e:1193				lhs_subs1_copy_temp = NewTempSym() -- place to copy (may be ignored)*/
        // SubProg emit_op pc: 3677 op: PROC (27)
        _0 = _54NewTempSym(0);
        _47lhs_subs1_copy_temp_50382 = _0;
        // SubProg emit_op pc: 3681 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_47lhs_subs1_copy_temp_50382)) {
            _1 = (object)(DBL_PTR(_47lhs_subs1_copy_temp_50382)->dbl);
            DeRefDS(_47lhs_subs1_copy_temp_50382);
            _47lhs_subs1_copy_temp_50382 = _1;
        }
        // SubProg emit_op pc: 3683 op: STARTLINE (58)

        /** emit.e:1194				emit_addr(lhs_subs1_copy_temp)*/
        // SubProg emit_op pc: 3685 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3687 op: PROC (27)
        _47emit_addr(_47lhs_subs1_copy_temp_50382);
        // SubProg emit_op pc: 3690 op: STARTLINE (58)

        /** emit.e:1195				emit_temp( lhs_subs1_copy_temp, NEW_REFERENCE )*/
        // SubProg emit_op pc: 3692 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3694 op: PROC (27)
        _47emit_temp(_47lhs_subs1_copy_temp_50382, 1);
        // SubProg emit_op pc: 3698 op: NOP1 (159)
L67: // addr: 3699 pc: 3698 sub: 51305 op: 159
        // SubProg emit_op pc: 3699 op: STARTLINE (58)

        /** emit.e:1198			current_sequence = append(current_sequence, lhs_target_temp)*/
        // SubProg emit_op pc: 3701 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3703 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3705 op: APPEND (35)
        Append(&_47current_sequence_50377, _47current_sequence_50377, _47lhs_target_temp_50383);
        // SubProg emit_op pc: 3709 op: STARTLINE (58)

        /** emit.e:1199			assignable = FALSE  -- need to update current_sequence like in RHS_SUBS*/
        // SubProg emit_op pc: 3711 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3713 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 3716 op: ELSE (23)
        goto LC; // [3716] 7737
        // SubProg emit_op pc: 3718 op: STARTLINE (58)

        /** emit.e:1201		case PEEK_LONGS then*/
        // SubProg emit_op pc: 3720 op: CASE (186)
        case 436:
        // SubProg emit_op pc: 3722 op: STARTLINE (58)

        /** emit.e:1202			if IWINDOWS or TWINDOWS or not (IX86_64 or TX86_64) then*/
        // SubProg emit_op pc: 3724 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3726 op: SC1_OR (143)
        if (_41IWINDOWS_21209 != 0) {
            _26760 = 1;
            goto L68; // [3726] 3736
        }
        // SubProg emit_op pc: 3730 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3732 op: SC2_OR (144)
        _26760 = (_41TWINDOWS_21210 != 0);
        // SubProg emit_op pc: 3735 op: NOP1 (159)
L68: // addr: 3736 pc: 3735 sub: 51305 op: 159
        // SubProg emit_op pc: 3736 op: SC1_OR_IF (147)
        if (_26760 != 0) {
            goto L69; // [3736] 3760
        }
        // SubProg emit_op pc: 3740 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3742 op: SC1_OR (143)
        if (_41IX86_64_21225 != 0) {
            DeRef(_26762);
            _26762 = 1;
            goto L6A; // [3742] 3752
        }
        // SubProg emit_op pc: 3746 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3748 op: SC2_OR (144)
        _26762 = (_41TX86_64_21226 != 0);
        // SubProg emit_op pc: 3751 op: NOP1 (159)
L6A: // addr: 3752 pc: 3751 sub: 51305 op: 159
        // SubProg emit_op pc: 3752 op: NOT (7)
        _26763 = (_26762 == 0);
        _26762 = NOVALUE;
        // SubProg emit_op pc: 3755 op: NOP1 (159)
        // SubProg emit_op pc: 3756 op: IF (20)
        if (_26763 == 0)
        {
            DeRef(_26763);
            _26763 = NOVALUE;
            goto L6B; // [3756] 3772
        }
        else{
            DeRef(_26763);
            _26763 = NOVALUE;
        }
        // SubProg emit_op pc: 3759 op: NOP1 (159)
L69: // addr: 3760 pc: 3759 sub: 51305 op: 159
        // SubProg emit_op pc: 3760 op: STARTLINE (58)

        /** emit.e:1203				op = PEEK4S*/
        // SubProg emit_op pc: 3762 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3764 op: ASSIGN (18)
        _op_51307 = 139;
        // SubProg emit_op pc: 3767 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3769 op: ELSE (23)
        goto L6C; // [3769] 3782
        // SubProg emit_op pc: 3771 op: NOP1 (159)
L6B: // addr: 3772 pc: 3771 sub: 51305 op: 159
        // SubProg emit_op pc: 3772 op: STARTLINE (58)

        /** emit.e:1205				op = PEEK8S*/
        // SubProg emit_op pc: 3774 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3776 op: ASSIGN (18)
        _op_51307 = 213;
        // SubProg emit_op pc: 3779 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3781 op: NOP1 (159)
L6C: // addr: 3782 pc: 3781 sub: 51305 op: 159
        // SubProg emit_op pc: 3782 op: STARTLINE (58)

        /** emit.e:1207			last_op = op*/
        // SubProg emit_op pc: 3784 op: ASSIGN_I (113)
        _47last_op_51266 = _op_51307;
        // SubProg emit_op pc: 3787 op: STARTLINE (58)

        /** emit.e:1208			cont11ii(op, TRUE )*/
        // SubProg emit_op pc: 3789 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3791 op: PROC (27)
        _47cont11ii(_op_51307, _13TRUE_452);
        // SubProg emit_op pc: 3795 op: ELSE (23)
        goto LC; // [3795] 7737
        // SubProg emit_op pc: 3797 op: STARTLINE (58)

        /** emit.e:1210		case PEEK_LONGU then*/
        // SubProg emit_op pc: 3799 op: CASE (186)
        case 435:
        // SubProg emit_op pc: 3801 op: STARTLINE (58)

        /** emit.e:1211			if IWINDOWS or TWINDOWS or not (IX86_64 or TX86_64) then*/
        // SubProg emit_op pc: 3803 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3805 op: SC1_OR (143)
        if (_41IWINDOWS_21209 != 0) {
            _26764 = 1;
            goto L6D; // [3805] 3815
        }
        // SubProg emit_op pc: 3809 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3811 op: SC2_OR (144)
        _26764 = (_41TWINDOWS_21210 != 0);
        // SubProg emit_op pc: 3814 op: NOP1 (159)
L6D: // addr: 3815 pc: 3814 sub: 51305 op: 159
        // SubProg emit_op pc: 3815 op: SC1_OR_IF (147)
        if (_26764 != 0) {
            goto L6E; // [3815] 3839
        }
        // SubProg emit_op pc: 3819 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3821 op: SC1_OR (143)
        if (_41IX86_64_21225 != 0) {
            DeRef(_26766);
            _26766 = 1;
            goto L6F; // [3821] 3831
        }
        // SubProg emit_op pc: 3825 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3827 op: SC2_OR (144)
        _26766 = (_41TX86_64_21226 != 0);
        // SubProg emit_op pc: 3830 op: NOP1 (159)
L6F: // addr: 3831 pc: 3830 sub: 51305 op: 159
        // SubProg emit_op pc: 3831 op: NOT (7)
        _26767 = (_26766 == 0);
        _26766 = NOVALUE;
        // SubProg emit_op pc: 3834 op: NOP1 (159)
        // SubProg emit_op pc: 3835 op: IF (20)
        if (_26767 == 0)
        {
            DeRef(_26767);
            _26767 = NOVALUE;
            goto L70; // [3835] 3851
        }
        else{
            DeRef(_26767);
            _26767 = NOVALUE;
        }
        // SubProg emit_op pc: 3838 op: NOP1 (159)
L6E: // addr: 3839 pc: 3838 sub: 51305 op: 159
        // SubProg emit_op pc: 3839 op: STARTLINE (58)

        /** emit.e:1212				op = PEEK4U*/
        // SubProg emit_op pc: 3841 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3843 op: ASSIGN (18)
        _op_51307 = 140;
        // SubProg emit_op pc: 3846 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3848 op: ELSE (23)
        goto L71; // [3848] 3861
        // SubProg emit_op pc: 3850 op: NOP1 (159)
L70: // addr: 3851 pc: 3850 sub: 51305 op: 159
        // SubProg emit_op pc: 3851 op: STARTLINE (58)

        /** emit.e:1214				op = PEEK8U*/
        // SubProg emit_op pc: 3853 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3855 op: ASSIGN (18)
        _op_51307 = 214;
        // SubProg emit_op pc: 3858 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3860 op: NOP1 (159)
L71: // addr: 3861 pc: 3860 sub: 51305 op: 159
        // SubProg emit_op pc: 3861 op: STARTLINE (58)

        /** emit.e:1216			last_op = op*/
        // SubProg emit_op pc: 3863 op: ASSIGN_I (113)
        _47last_op_51266 = _op_51307;
        // SubProg emit_op pc: 3866 op: STARTLINE (58)

        /** emit.e:1217			cont11ii(op, TRUE )*/
        // SubProg emit_op pc: 3868 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3870 op: PROC (27)
        _47cont11ii(_op_51307, _13TRUE_452);
        // SubProg emit_op pc: 3874 op: ELSE (23)
        goto LC; // [3874] 7737
        // SubProg emit_op pc: 3876 op: STARTLINE (58)

        /** emit.e:1220		case RAND, PEEK, PEEK4S, PEEK4U, NOT_BITS, NOT, PEEK8U, PEEK8S, SIZEOF,*/
        // SubProg emit_op pc: 3878 op: CASE (186)
        case 62:
        // SubProg emit_op pc: 3880 op: CASE (186)
        case 127:
        // SubProg emit_op pc: 3882 op: CASE (186)
        case 139:
        // SubProg emit_op pc: 3884 op: CASE (186)
        case 140:
        // SubProg emit_op pc: 3886 op: CASE (186)
        case 51:
        // SubProg emit_op pc: 3888 op: CASE (186)
        case 7:
        // SubProg emit_op pc: 3890 op: CASE (186)
        case 214:
        // SubProg emit_op pc: 3892 op: CASE (186)
        case 213:
        // SubProg emit_op pc: 3894 op: CASE (186)
        case 217:
        // SubProg emit_op pc: 3896 op: CASE (186)
        case 173:
        // SubProg emit_op pc: 3898 op: CASE (186)
        case 180:
        // SubProg emit_op pc: 3900 op: CASE (186)
        case 179:
        // SubProg emit_op pc: 3902 op: CASE (186)
        case 181:
        // SubProg emit_op pc: 3904 op: CASE (186)
        case 182:
        // SubProg emit_op pc: 3906 op: CASE (186)
        case 216:
        // SubProg emit_op pc: 3908 op: STARTLINE (58)

        /** emit.e:1222			cont11ii(op, TRUE)*/
        // SubProg emit_op pc: 3910 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3912 op: PROC (27)
        _47cont11ii(_op_51307, _13TRUE_452);
        // SubProg emit_op pc: 3916 op: ELSE (23)
        goto LC; // [3916] 7737
        // SubProg emit_op pc: 3918 op: STARTLINE (58)

        /** emit.e:1224		case UMINUS then*/
        // SubProg emit_op pc: 3920 op: CASE (186)
        case 12:
        // SubProg emit_op pc: 3922 op: STARTLINE (58)

        /** emit.e:1226			a = Pop()*/
        // SubProg emit_op pc: 3924 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 3927 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 3929 op: STARTLINE (58)

        /** emit.e:1228			if a > 0 then*/
        // SubProg emit_op pc: 3931 op: GREATER_IFW (107)
        if (_a_51309 <= 0)
        goto L72; // [3931] 4178
        // SubProg emit_op pc: 3935 op: STARTLINE (58)

        /** emit.e:1229				obj = SymTab[a][S_OBJ]*/
        // SubProg emit_op pc: 3937 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3939 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26770 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 3943 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3945 op: RHS_SUBS_CHECK (92)
        DeRef(_obj_51321);
        _2 = (object)SEQ_PTR(_26770);
        _obj_51321 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_obj_51321);
        _26770 = NOVALUE;
        // SubProg emit_op pc: 3949 op: STARTLINE (58)

        /** emit.e:1230				if SymTab[a][S_MODE] = M_CONSTANT then*/
        // SubProg emit_op pc: 3951 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3953 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26772 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 3957 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3959 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26772);
        _26773 = (object)*(((s1_ptr)_2)->base + 3);
        _26772 = NOVALUE;
        // SubProg emit_op pc: 3963 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3965 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26773, 2)){
            _26773 = NOVALUE;
            goto L73; // [3965] 4090
        }
        _26773 = NOVALUE;
        // SubProg emit_op pc: 3969 op: STARTLINE (58)

        /** emit.e:1231					if is_integer(obj) then*/
        // SubProg emit_op pc: 3971 op: PROC (27)
        Ref(_obj_51321);
        _26775 = _36is_integer(_obj_51321);
        // SubProg emit_op pc: 3975 op: IF (20)
        if (_26775 == 0) {
            DeRef(_26775);
            _26775 = NOVALUE;
            goto L74; // [3975] 4029
        }
        else {
            if (!IS_ATOM_INT(_26775) && DBL_PTR(_26775)->dbl == 0.0){
                DeRef(_26775);
                _26775 = NOVALUE;
                goto L74; // [3975] 4029
            }
            DeRef(_26775);
            _26775 = NOVALUE;
        }
        DeRef(_26775);
        _26775 = NOVALUE;
        // SubProg emit_op pc: 3978 op: STARTLINE (58)

        /** emit.e:1232						if obj = MININT then*/
        // SubProg emit_op pc: 3980 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3982 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _obj_51321, -1073741824)){
            goto L75; // [3982] 4003
        }
        // SubProg emit_op pc: 3986 op: STARTLINE (58)

        /** emit.e:1233							Push(NewDoubleSym(-MININT))*/
        // SubProg emit_op pc: 3988 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3990 op: UMINUS (12)
        if ((uintptr_t)-1073741824 == (uintptr_t)HIGH_BITS){
            _26777 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _26777 = - -1073741824;
        }
        // SubProg emit_op pc: 3993 op: PROC (27)
        _26778 = _54NewDoubleSym(_26777);
        _26777 = NOVALUE;
        // SubProg emit_op pc: 3997 op: PROC (27)
        _47Push(_26778);
        _26778 = NOVALUE;
        // SubProg emit_op pc: 4000 op: ELSE (23)
        goto L76; // [4000] 4016
        // SubProg emit_op pc: 4002 op: NOP1 (159)
L75: // addr: 4003 pc: 4002 sub: 51305 op: 159
        // SubProg emit_op pc: 4003 op: STARTLINE (58)

        /** emit.e:1235							Push(NewIntSym(-obj))*/
        // SubProg emit_op pc: 4005 op: UMINUS (12)
        if (IS_ATOM_INT(_obj_51321)) {
            if ((uintptr_t)_obj_51321 == (uintptr_t)HIGH_BITS){
                _26779 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26779 = - _obj_51321;
            }
        }
        else {
            _26779 = unary_op(UMINUS, _obj_51321);
        }
        // SubProg emit_op pc: 4008 op: PROC (27)
        _26780 = _54NewIntSym(_26779);
        _26779 = NOVALUE;
        // SubProg emit_op pc: 4012 op: PROC (27)
        _47Push(_26780);
        _26780 = NOVALUE;
        // SubProg emit_op pc: 4015 op: NOP1 (159)
L76: // addr: 4016 pc: 4015 sub: 51305 op: 159
        // SubProg emit_op pc: 4016 op: STARTLINE (58)

        /** emit.e:1237						last_pc = last_pc_backup*/
        // SubProg emit_op pc: 4018 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 4021 op: STARTLINE (58)

        /** emit.e:1238						last_op = last_op_backup*/
        // SubProg emit_op pc: 4023 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 4026 op: ELSE (23)
        goto LC; // [4026] 7737
        // SubProg emit_op pc: 4028 op: NOP1 (159)
L74: // addr: 4029 pc: 4028 sub: 51305 op: 159
        // SubProg emit_op pc: 4029 op: STARTLINE (58)

        /** emit.e:1240					elsif atom(obj) and obj != NOVALUE then*/
        // SubProg emit_op pc: 4031 op: IS_AN_ATOM (67)
        _26781 = IS_ATOM(_obj_51321);
        // SubProg emit_op pc: 4034 op: SC1_AND_IF (146)
        if (_26781 == 0) {
            goto L77; // [4034] 4073
        }
        // SubProg emit_op pc: 4038 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4040 op: NOTEQ (4)
        if (IS_ATOM_INT(_obj_51321) && IS_ATOM_INT(_36NOVALUE_16291)) {
            _26783 = (_obj_51321 != _36NOVALUE_16291);
        }
        else {
            _26783 = binary_op(NOTEQ, _obj_51321, _36NOVALUE_16291);
        }
        // SubProg emit_op pc: 4044 op: NOP1 (159)
        // SubProg emit_op pc: 4045 op: IF (20)
        if (_26783 == 0) {
            DeRef(_26783);
            _26783 = NOVALUE;
            goto L77; // [4045] 4073
        }
        else {
            if (!IS_ATOM_INT(_26783) && DBL_PTR(_26783)->dbl == 0.0){
                DeRef(_26783);
                _26783 = NOVALUE;
                goto L77; // [4045] 4073
            }
            DeRef(_26783);
            _26783 = NOVALUE;
        }
        DeRef(_26783);
        _26783 = NOVALUE;
        // SubProg emit_op pc: 4048 op: STARTLINE (58)

        /** emit.e:1245						Push(NewDoubleSym(-obj))*/
        // SubProg emit_op pc: 4050 op: UMINUS (12)
        if (IS_ATOM_INT(_obj_51321)) {
            if ((uintptr_t)_obj_51321 == (uintptr_t)HIGH_BITS){
                _26784 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26784 = - _obj_51321;
            }
        }
        else {
            _26784 = unary_op(UMINUS, _obj_51321);
        }
        // SubProg emit_op pc: 4053 op: PROC (27)
        _26785 = _54NewDoubleSym(_26784);
        _26784 = NOVALUE;
        // SubProg emit_op pc: 4057 op: PROC (27)
        _47Push(_26785);
        _26785 = NOVALUE;
        // SubProg emit_op pc: 4060 op: STARTLINE (58)

        /** emit.e:1246						last_pc = last_pc_backup*/
        // SubProg emit_op pc: 4062 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 4065 op: STARTLINE (58)

        /** emit.e:1247						last_op = last_op_backup*/
        // SubProg emit_op pc: 4067 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 4070 op: ELSE (23)
        goto LC; // [4070] 7737
        // SubProg emit_op pc: 4072 op: NOP1 (159)
L77: // addr: 4073 pc: 4072 sub: 51305 op: 159
        // SubProg emit_op pc: 4073 op: STARTLINE (58)

        /** emit.e:1250						Push(a)*/
        // SubProg emit_op pc: 4075 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 4078 op: STARTLINE (58)

        /** emit.e:1251						cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4080 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4082 op: PROC (27)
        _47cont11ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4086 op: NOP1 (159)
        // SubProg emit_op pc: 4087 op: ELSE (23)
        goto LC; // [4087] 7737
        // SubProg emit_op pc: 4089 op: NOP1 (159)
L73: // addr: 4090 pc: 4089 sub: 51305 op: 159
        // SubProg emit_op pc: 4090 op: STARTLINE (58)

        /** emit.e:1254				elsif TRANSLATE and SymTab[a][S_MODE] = M_TEMP and*/
        // SubProg emit_op pc: 4092 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4094 op: SC1_AND (141)
        if (_36TRANSLATE_16061 == 0) {
            _26786 = 0;
            goto L78; // [4094] 4120
        }
        // SubProg emit_op pc: 4098 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4100 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26787 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 4104 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4106 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26787);
        _26788 = (object)*(((s1_ptr)_2)->base + 3);
        _26787 = NOVALUE;
        // SubProg emit_op pc: 4110 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4112 op: EQUALS (3)
        if (IS_ATOM_INT(_26788)) {
            _26789 = (_26788 == 3);
        }
        else {
            _26789 = binary_op(EQUALS, _26788, 3);
        }
        _26788 = NOVALUE;
        // SubProg emit_op pc: 4116 op: SC2_AND (142)
        if (IS_ATOM_INT(_26789))
        _26786 = (_26789 != 0);
        else
        _26786 = DBL_PTR(_26789)->dbl != 0.0;
        // SubProg emit_op pc: 4119 op: NOP1 (159)
L78: // addr: 4120 pc: 4119 sub: 51305 op: 159
        // SubProg emit_op pc: 4120 op: SC1_AND_IF (146)
        if (_26786 == 0) {
            goto L79; // [4120] 4161
        }
        // SubProg emit_op pc: 4124 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4126 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26791 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 4130 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4132 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26791);
        _26792 = (object)*(((s1_ptr)_2)->base + 36);
        _26791 = NOVALUE;
        // SubProg emit_op pc: 4136 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4138 op: EQUALS (3)
        if (IS_ATOM_INT(_26792)) {
            _26793 = (_26792 == 2);
        }
        else {
            _26793 = binary_op(EQUALS, _26792, 2);
        }
        _26792 = NOVALUE;
        // SubProg emit_op pc: 4142 op: NOP1 (159)
        // SubProg emit_op pc: 4143 op: IF (20)
        if (_26793 == 0) {
            DeRef(_26793);
            _26793 = NOVALUE;
            goto L79; // [4143] 4161
        }
        else {
            if (!IS_ATOM_INT(_26793) && DBL_PTR(_26793)->dbl == 0.0){
                DeRef(_26793);
                _26793 = NOVALUE;
                goto L79; // [4143] 4161
            }
            DeRef(_26793);
            _26793 = NOVALUE;
        }
        DeRef(_26793);
        _26793 = NOVALUE;
        // SubProg emit_op pc: 4146 op: STARTLINE (58)

        /** emit.e:1256					Push(NewDoubleSym(-obj))*/
        // SubProg emit_op pc: 4148 op: UMINUS (12)
        if (IS_ATOM_INT(_obj_51321)) {
            if ((uintptr_t)_obj_51321 == (uintptr_t)HIGH_BITS){
                _26794 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26794 = - _obj_51321;
            }
        }
        else {
            _26794 = unary_op(UMINUS, _obj_51321);
        }
        // SubProg emit_op pc: 4151 op: PROC (27)
        _26795 = _54NewDoubleSym(_26794);
        _26794 = NOVALUE;
        // SubProg emit_op pc: 4155 op: PROC (27)
        _47Push(_26795);
        _26795 = NOVALUE;
        // SubProg emit_op pc: 4158 op: ELSE (23)
        goto LC; // [4158] 7737
        // SubProg emit_op pc: 4160 op: NOP1 (159)
L79: // addr: 4161 pc: 4160 sub: 51305 op: 159
        // SubProg emit_op pc: 4161 op: STARTLINE (58)

        /** emit.e:1259					Push(a)*/
        // SubProg emit_op pc: 4163 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 4166 op: STARTLINE (58)

        /** emit.e:1260					cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4168 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4170 op: PROC (27)
        _47cont11ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4174 op: NOP1 (159)
        // SubProg emit_op pc: 4175 op: ELSE (23)
        goto LC; // [4175] 7737
        // SubProg emit_op pc: 4177 op: NOP1 (159)
L72: // addr: 4178 pc: 4177 sub: 51305 op: 159
        // SubProg emit_op pc: 4178 op: STARTLINE (58)

        /** emit.e:1263				Push(a)*/
        // SubProg emit_op pc: 4180 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 4183 op: STARTLINE (58)

        /** emit.e:1264				cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4185 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4187 op: PROC (27)
        _47cont11ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4191 op: NOP1 (159)
        // SubProg emit_op pc: 4192 op: ELSE (23)
        goto LC; // [4192] 7737
        // SubProg emit_op pc: 4194 op: STARTLINE (58)

        /** emit.e:1267		case LENGTH, GETC, SQRT, SIN, COS, TAN, ARCTAN, LOG, GETS, GETENV then*/
        // SubProg emit_op pc: 4196 op: CASE (186)
        case 42:
        // SubProg emit_op pc: 4198 op: CASE (186)
        case 33:
        // SubProg emit_op pc: 4200 op: CASE (186)
        case 41:
        // SubProg emit_op pc: 4202 op: CASE (186)
        case 80:
        // SubProg emit_op pc: 4204 op: CASE (186)
        case 81:
        // SubProg emit_op pc: 4206 op: CASE (186)
        case 82:
        // SubProg emit_op pc: 4208 op: CASE (186)
        case 73:
        // SubProg emit_op pc: 4210 op: CASE (186)
        case 74:
        // SubProg emit_op pc: 4212 op: CASE (186)
        case 17:
        // SubProg emit_op pc: 4214 op: CASE (186)
        case 91:
        // SubProg emit_op pc: 4216 op: STARTLINE (58)

        /** emit.e:1268			cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4218 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4220 op: PROC (27)
        _47cont11ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4224 op: ELSE (23)
        goto LC; // [4224] 7737
        // SubProg emit_op pc: 4226 op: STARTLINE (58)

        /** emit.e:1270		case IS_AN_INTEGER, IS_AN_ATOM, IS_A_SEQUENCE, IS_AN_OBJECT then*/
        // SubProg emit_op pc: 4228 op: CASE (186)
        case 94:
        // SubProg emit_op pc: 4230 op: CASE (186)
        case 67:
        // SubProg emit_op pc: 4232 op: CASE (186)
        case 68:
        // SubProg emit_op pc: 4234 op: CASE (186)
        case 40:
        // SubProg emit_op pc: 4236 op: STARTLINE (58)

        /** emit.e:1271			cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4238 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4240 op: PROC (27)
        _47cont11ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4244 op: ELSE (23)
        goto LC; // [4244] 7737
        // SubProg emit_op pc: 4246 op: STARTLINE (58)

        /** emit.e:1275		case ROUTINE_ID then*/
        // SubProg emit_op pc: 4248 op: CASE (186)
        case 134:
        // SubProg emit_op pc: 4250 op: STARTLINE (58)

        /** emit.e:1276			emit_opcode(op)*/
        // SubProg emit_op pc: 4252 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 4255 op: STARTLINE (58)

        /** emit.e:1277			source = Pop()*/
        // SubProg emit_op pc: 4257 op: PROC (27)
        _source_51313 = _47Pop();
        // SubProg emit_op pc: 4260 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_source_51313)) {
            _1 = (object)(DBL_PTR(_source_51313)->dbl);
            DeRefDS(_source_51313);
            _source_51313 = _1;
        }
        // SubProg emit_op pc: 4262 op: STARTLINE (58)

        /** emit.e:1278			if TRANSLATE then*/
        // SubProg emit_op pc: 4264 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4266 op: IF (20)
        if (_36TRANSLATE_16061 == 0)
        {
            goto L7A; // [4266] 4310
        }
        else{
        }
        // SubProg emit_op pc: 4269 op: STARTLINE (58)

        /** emit.e:1279				emit_addr(num_routines-1)*/
        // SubProg emit_op pc: 4271 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4273 op: MINUS (10)
        _26797 = _36num_routines_16445 - 1;
        if ((object)((uintptr_t)_26797 +(uintptr_t) HIGH_BITS) >= 0){
            _26797 = NewDouble((eudouble)_26797);
        }
        // SubProg emit_op pc: 4277 op: PROC (27)
        _47emit_addr(_26797);
        _26797 = NOVALUE;
        // SubProg emit_op pc: 4280 op: STARTLINE (58)

        /** emit.e:1280				last_routine_id = num_routines*/
        // SubProg emit_op pc: 4282 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4284 op: ASSIGN (18)
        _47last_routine_id_50374 = _36num_routines_16445;
        // SubProg emit_op pc: 4287 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4289 op: STARTLINE (58)

        /** emit.e:1281				last_max_params = max_params*/
        // SubProg emit_op pc: 4291 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4293 op: ASSIGN_I (113)
        _47last_max_params_50376 = _47max_params_50375;
        // SubProg emit_op pc: 4296 op: STARTLINE (58)

        /** emit.e:1282				MarkTargets(source, S_RI_TARGET)*/
        // SubProg emit_op pc: 4298 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4300 op: PROC (27)
        _31694 = _54MarkTargets(_source_51313, 53);
        // SubProg emit_op pc: 4305 op: DEREF_TEMP (208)
        DeRef(_31694);
        _31694 = NOVALUE;
        // SubProg emit_op pc: 4307 op: ELSE (23)
        goto L7B; // [4307] 4347
        // SubProg emit_op pc: 4309 op: NOP1 (159)
L7A: // addr: 4310 pc: 4309 sub: 51305 op: 159
        // SubProg emit_op pc: 4310 op: STARTLINE (58)

        /** emit.e:1285				emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 4312 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4314 op: PROC (27)
        _47emit_addr(_36CurrentSub_16444);
        // SubProg emit_op pc: 4317 op: STARTLINE (58)

        /** emit.e:1286				emit_addr(length(SymTab))*/
        // SubProg emit_op pc: 4319 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4321 op: LENGTH (42)
        if (IS_SEQUENCE(_37SymTab_15405)){
                _26798 = SEQ_PTR(_37SymTab_15405)->length;
        }
        else {
            _26798 = 1;
        }
        // SubProg emit_op pc: 4324 op: PROC (27)
        _47emit_addr(_26798);
        _26798 = NOVALUE;
        // SubProg emit_op pc: 4327 op: STARTLINE (58)

        /** emit.e:1288				if BIND then*/
        // SubProg emit_op pc: 4329 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4331 op: IF (20)
        if (_36BIND_16064 == 0)
        {
            goto L7C; // [4331] 4346
        }
        else{
        }
        // SubProg emit_op pc: 4334 op: STARTLINE (58)

        /** emit.e:1290					MarkTargets(source, S_NREFS)*/
        // SubProg emit_op pc: 4336 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4338 op: PROC (27)
        _31693 = _54MarkTargets(_source_51313, 12);
        // SubProg emit_op pc: 4343 op: DEREF_TEMP (208)
        DeRef(_31693);
        _31693 = NOVALUE;
        // SubProg emit_op pc: 4345 op: NOP1 (159)
L7C: // addr: 4346 pc: 4345 sub: 51305 op: 159
        // SubProg emit_op pc: 4346 op: NOP1 (159)
L7B: // addr: 4347 pc: 4346 sub: 51305 op: 159
        // SubProg emit_op pc: 4347 op: STARTLINE (58)

        /** emit.e:1294			emit_addr(source)*/
        // SubProg emit_op pc: 4349 op: PROC (27)
        _47emit_addr(_source_51313);
        // SubProg emit_op pc: 4352 op: STARTLINE (58)

        /** emit.e:1295			emit_addr(current_file_no)  -- necessary at top level*/
        // SubProg emit_op pc: 4354 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4356 op: PROC (27)
        _47emit_addr(_36current_file_no_16436);
        // SubProg emit_op pc: 4359 op: STARTLINE (58)

        /** emit.e:1296			assignable = TRUE*/
        // SubProg emit_op pc: 4361 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4363 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 4366 op: STARTLINE (58)

        /** emit.e:1297			c = NewTempSym()*/
        // SubProg emit_op pc: 4368 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 4372 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 4374 op: STARTLINE (58)

        /** emit.e:1298			TempInteger(c) -- result will always be an integer*/
        // SubProg emit_op pc: 4376 op: PROC (27)
        _47TempInteger(_c_51311);
        // SubProg emit_op pc: 4379 op: STARTLINE (58)

        /** emit.e:1299			Push(c)*/
        // SubProg emit_op pc: 4381 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 4384 op: STARTLINE (58)

        /** emit.e:1300			emit_addr(c)*/
        // SubProg emit_op pc: 4386 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 4389 op: ELSE (23)
        goto LC; // [4389] 7737
        // SubProg emit_op pc: 4391 op: STARTLINE (58)

        /** emit.e:1305		case SC1_OR, SC1_AND then*/
        // SubProg emit_op pc: 4393 op: CASE (186)
        case 143:
        // SubProg emit_op pc: 4395 op: CASE (186)
        case 141:
        // SubProg emit_op pc: 4397 op: STARTLINE (58)

        /** emit.e:1306			emit_opcode(op)*/
        // SubProg emit_op pc: 4399 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 4402 op: STARTLINE (58)

        /** emit.e:1307			emit_addr(Pop())*/
        // SubProg emit_op pc: 4404 op: PROC (27)
        _26800 = _47Pop();
        // SubProg emit_op pc: 4407 op: PROC (27)
        _47emit_addr(_26800);
        _26800 = NOVALUE;
        // SubProg emit_op pc: 4410 op: STARTLINE (58)

        /** emit.e:1308			c = NewTempSym()*/
        // SubProg emit_op pc: 4412 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 4416 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 4418 op: STARTLINE (58)

        /** emit.e:1309			Push(c)*/
        // SubProg emit_op pc: 4420 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 4423 op: STARTLINE (58)

        /** emit.e:1310			emit_addr(c)*/
        // SubProg emit_op pc: 4425 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 4428 op: STARTLINE (58)

        /** emit.e:1311			assignable = FALSE*/
        // SubProg emit_op pc: 4430 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4432 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 4435 op: ELSE (23)
        goto LC; // [4435] 7737
        // SubProg emit_op pc: 4437 op: STARTLINE (58)

        /** emit.e:1315		case POKE_LONG then*/
        // SubProg emit_op pc: 4439 op: CASE (186)
        case 434:
        // SubProg emit_op pc: 4441 op: STARTLINE (58)

        /** emit.e:1316			if IWINDOWS or TWINDOWS or not (IX86_64 or TX86_64) then*/
        // SubProg emit_op pc: 4443 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4445 op: SC1_OR (143)
        if (_41IWINDOWS_21209 != 0) {
            _26802 = 1;
            goto L7D; // [4445] 4455
        }
        // SubProg emit_op pc: 4449 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4451 op: SC2_OR (144)
        _26802 = (_41TWINDOWS_21210 != 0);
        // SubProg emit_op pc: 4454 op: NOP1 (159)
L7D: // addr: 4455 pc: 4454 sub: 51305 op: 159
        // SubProg emit_op pc: 4455 op: SC1_OR_IF (147)
        if (_26802 != 0) {
            goto L7E; // [4455] 4479
        }
        // SubProg emit_op pc: 4459 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4461 op: SC1_OR (143)
        if (_41IX86_64_21225 != 0) {
            DeRef(_26804);
            _26804 = 1;
            goto L7F; // [4461] 4471
        }
        // SubProg emit_op pc: 4465 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4467 op: SC2_OR (144)
        _26804 = (_41TX86_64_21226 != 0);
        // SubProg emit_op pc: 4470 op: NOP1 (159)
L7F: // addr: 4471 pc: 4470 sub: 51305 op: 159
        // SubProg emit_op pc: 4471 op: NOT (7)
        _26805 = (_26804 == 0);
        _26804 = NOVALUE;
        // SubProg emit_op pc: 4474 op: NOP1 (159)
        // SubProg emit_op pc: 4475 op: IF (20)
        if (_26805 == 0)
        {
            DeRef(_26805);
            _26805 = NOVALUE;
            goto L80; // [4475] 4491
        }
        else{
            DeRef(_26805);
            _26805 = NOVALUE;
        }
        // SubProg emit_op pc: 4478 op: NOP1 (159)
L7E: // addr: 4479 pc: 4478 sub: 51305 op: 159
        // SubProg emit_op pc: 4479 op: STARTLINE (58)

        /** emit.e:1317				op = POKE4*/
        // SubProg emit_op pc: 4481 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4483 op: ASSIGN (18)
        _op_51307 = 138;
        // SubProg emit_op pc: 4486 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4488 op: ELSE (23)
        goto L81; // [4488] 4501
        // SubProg emit_op pc: 4490 op: NOP1 (159)
L80: // addr: 4491 pc: 4490 sub: 51305 op: 159
        // SubProg emit_op pc: 4491 op: STARTLINE (58)

        /** emit.e:1319				op = POKE8*/
        // SubProg emit_op pc: 4493 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4495 op: ASSIGN (18)
        _op_51307 = 212;
        // SubProg emit_op pc: 4498 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4500 op: NOP1 (159)
L81: // addr: 4501 pc: 4500 sub: 51305 op: 159
        // SubProg emit_op pc: 4501 op: STARTLINE (58)

        /** emit.e:1321			last_op = op*/
        // SubProg emit_op pc: 4503 op: ASSIGN_I (113)
        _47last_op_51266 = _op_51307;
        // SubProg emit_op pc: 4506 op: STARTLINE (58)

        /** emit.e:1324		case SYSTEM, PUTS, PRINT, QPRINT, POSITION, MACHINE_PROC,*/
        // SubProg emit_op pc: 4508 op: CASE (186)
        case 99:
        // SubProg emit_op pc: 4510 op: CASE (186)
        case 44:
        // SubProg emit_op pc: 4512 op: CASE (186)
        case 19:
        // SubProg emit_op pc: 4514 op: CASE (186)
        case 36:
        // SubProg emit_op pc: 4516 op: CASE (186)
        case 60:
        // SubProg emit_op pc: 4518 op: CASE (186)
        case 112:
        // SubProg emit_op pc: 4520 op: CASE (186)
        case 132:
        // SubProg emit_op pc: 4522 op: CASE (186)
        case 128:
        // SubProg emit_op pc: 4524 op: CASE (186)
        case 138:
        // SubProg emit_op pc: 4526 op: CASE (186)
        case 168:
        // SubProg emit_op pc: 4528 op: CASE (186)
        case 178:
        // SubProg emit_op pc: 4530 op: CASE (186)
        case 212:
        // SubProg emit_op pc: 4532 op: CASE (186)
        case 215:
        // SubProg emit_op pc: 4534 op: STARTLINE (58)

        /** emit.e:1326			emit_opcode(op)*/
        // SubProg emit_op pc: 4536 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 4539 op: STARTLINE (58)

        /** emit.e:1328			b = Pop()*/
        // SubProg emit_op pc: 4541 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 4544 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 4546 op: STARTLINE (58)

        /** emit.e:1329			emit_addr(Pop())*/
        // SubProg emit_op pc: 4548 op: PROC (27)
        _26807 = _47Pop();
        // SubProg emit_op pc: 4551 op: PROC (27)
        _47emit_addr(_26807);
        _26807 = NOVALUE;
        // SubProg emit_op pc: 4554 op: STARTLINE (58)

        /** emit.e:1330			emit_addr(b)*/
        // SubProg emit_op pc: 4556 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 4559 op: STARTLINE (58)

        /** emit.e:1331			if op = C_PROC then*/
        // SubProg emit_op pc: 4561 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4563 op: EQUALS_IFW (104)
        if (_op_51307 != 132)
        goto L82; // [4563] 4575
        // SubProg emit_op pc: 4567 op: STARTLINE (58)

        /** emit.e:1332				emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 4569 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4571 op: PROC (27)
        _47emit_addr(_36CurrentSub_16444);
        // SubProg emit_op pc: 4574 op: NOP1 (159)
L82: // addr: 4575 pc: 4574 sub: 51305 op: 159
        // SubProg emit_op pc: 4575 op: STARTLINE (58)

        /** emit.e:1334			assignable = FALSE*/
        // SubProg emit_op pc: 4577 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4579 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 4582 op: ELSE (23)
        goto LC; // [4582] 7737
        // SubProg emit_op pc: 4584 op: STARTLINE (58)

        /** emit.e:1337		case EQUALS, LESS, GREATER, NOTEQ, LESSEQ, GREATEREQ,*/
        // SubProg emit_op pc: 4586 op: CASE (186)
        case 3:
        // SubProg emit_op pc: 4588 op: CASE (186)
        case 1:
        // SubProg emit_op pc: 4590 op: CASE (186)
        case 6:
        // SubProg emit_op pc: 4592 op: CASE (186)
        case 4:
        // SubProg emit_op pc: 4594 op: CASE (186)
        case 5:
        // SubProg emit_op pc: 4596 op: CASE (186)
        case 2:
        // SubProg emit_op pc: 4598 op: CASE (186)
        case 8:
        // SubProg emit_op pc: 4600 op: CASE (186)
        case 9:
        // SubProg emit_op pc: 4602 op: CASE (186)
        case 152:
        // SubProg emit_op pc: 4604 op: CASE (186)
        case 71:
        // SubProg emit_op pc: 4606 op: CASE (186)
        case 56:
        // SubProg emit_op pc: 4608 op: CASE (186)
        case 24:
        // SubProg emit_op pc: 4610 op: CASE (186)
        case 26:
        // SubProg emit_op pc: 4612 op: STARTLINE (58)

        /** emit.e:1339			cont21ii(op, TRUE)  -- both integer args => integer result*/
        // SubProg emit_op pc: 4614 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4616 op: PROC (27)
        _47cont21ii(_op_51307, _13TRUE_452);
        // SubProg emit_op pc: 4620 op: ELSE (23)
        goto LC; // [4620] 7737
        // SubProg emit_op pc: 4622 op: STARTLINE (58)

        /** emit.e:1341		case PLUS then -- elsif op = PLUS then*/
        // SubProg emit_op pc: 4624 op: CASE (186)
        case 11:
        // SubProg emit_op pc: 4626 op: STARTLINE (58)

        /** emit.e:1343			b = Pop()*/
        // SubProg emit_op pc: 4628 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 4631 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 4633 op: STARTLINE (58)

        /** emit.e:1344			a = Pop()*/
        // SubProg emit_op pc: 4635 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 4638 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 4640 op: STARTLINE (58)

        /** emit.e:1346			if b < 1 or a < 1 then*/
        // SubProg emit_op pc: 4642 op: LESS (1)
        _26811 = (_b_51310 < 1);
        // SubProg emit_op pc: 4646 op: SC1_OR_IF (147)
        if (_26811 != 0) {
            goto L83; // [4646] 4659
        }
        // SubProg emit_op pc: 4650 op: LESS (1)
        _26813 = (_a_51309 < 1);
        // SubProg emit_op pc: 4654 op: NOP1 (159)
        // SubProg emit_op pc: 4655 op: IF (20)
        if (_26813 == 0)
        {
            DeRef(_26813);
            _26813 = NOVALUE;
            goto L84; // [4655] 4680
        }
        else{
            DeRef(_26813);
            _26813 = NOVALUE;
        }
        // SubProg emit_op pc: 4658 op: NOP1 (159)
L83: // addr: 4659 pc: 4658 sub: 51305 op: 159
        // SubProg emit_op pc: 4659 op: STARTLINE (58)

        /** emit.e:1347				Push(a)*/
        // SubProg emit_op pc: 4661 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 4664 op: STARTLINE (58)

        /** emit.e:1348				Push(b)*/
        // SubProg emit_op pc: 4666 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 4669 op: STARTLINE (58)

        /** emit.e:1349				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 4671 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4673 op: PROC (27)
        _47cont21ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4677 op: ELSE (23)
        goto LC; // [4677] 7737
        // SubProg emit_op pc: 4679 op: NOP1 (159)
L84: // addr: 4680 pc: 4679 sub: 51305 op: 159
        // SubProg emit_op pc: 4680 op: STARTLINE (58)

        /** emit.e:1350			elsif SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 1) then*/
        // SubProg emit_op pc: 4682 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4684 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26814 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 4688 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4690 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26814);
        _26815 = (object)*(((s1_ptr)_2)->base + 3);
        _26814 = NOVALUE;
        // SubProg emit_op pc: 4694 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4696 op: EQUALS (3)
        if (IS_ATOM_INT(_26815)) {
            _26816 = (_26815 == 2);
        }
        else {
            _26816 = binary_op(EQUALS, _26815, 2);
        }
        _26815 = NOVALUE;
        // SubProg emit_op pc: 4700 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26816)) {
            if (_26816 == 0) {
                goto L85; // [4700] 4761
            }
        }
        else {
            if (DBL_PTR(_26816)->dbl == 0.0) {
                goto L85; // [4700] 4761
            }
        }
        // SubProg emit_op pc: 4704 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4706 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26818 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 4710 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4712 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26818);
        _26819 = (object)*(((s1_ptr)_2)->base + 1);
        _26818 = NOVALUE;
        // SubProg emit_op pc: 4716 op: EQUAL (153)
        if (_26819 == 1)
        _26820 = 1;
        else if (IS_ATOM_INT(_26819) && IS_ATOM_INT(1))
        _26820 = 0;
        else
        _26820 = (compare(_26819, 1) == 0);
        _26819 = NOVALUE;
        // SubProg emit_op pc: 4720 op: NOP1 (159)
        // SubProg emit_op pc: 4721 op: IF (20)
        if (_26820 == 0)
        {
            _26820 = NOVALUE;
            goto L85; // [4721] 4761
        }
        else{
            _26820 = NOVALUE;
        }
        // SubProg emit_op pc: 4724 op: STARTLINE (58)

        /** emit.e:1351				op = PLUS1*/
        // SubProg emit_op pc: 4726 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4728 op: ASSIGN (18)
        _op_51307 = 93;
        // SubProg emit_op pc: 4731 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4733 op: STARTLINE (58)

        /** emit.e:1352				emit_opcode(op)*/
        // SubProg emit_op pc: 4735 op: PROC (27)
        _47emit_opcode(93);
        // SubProg emit_op pc: 4738 op: STARTLINE (58)

        /** emit.e:1353				emit_addr(a)*/
        // SubProg emit_op pc: 4740 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 4743 op: STARTLINE (58)

        /** emit.e:1354				emit_addr(0)*/
        // SubProg emit_op pc: 4745 op: PROC (27)
        _47emit_addr(0);
        // SubProg emit_op pc: 4748 op: STARTLINE (58)

        /** emit.e:1355				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 4750 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4752 op: PROC (27)
        _47cont21d(93, _a_51309, _b_51310, _13FALSE_450);
        // SubProg emit_op pc: 4758 op: ELSE (23)
        goto LC; // [4758] 7737
        // SubProg emit_op pc: 4760 op: NOP1 (159)
L85: // addr: 4761 pc: 4760 sub: 51305 op: 159
        // SubProg emit_op pc: 4761 op: STARTLINE (58)

        /** emit.e:1356			elsif SymTab[a][S_MODE] = M_CONSTANT and equal(SymTab[a][S_OBJ], 1) then*/
        // SubProg emit_op pc: 4763 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4765 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26821 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 4769 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4771 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26821);
        _26822 = (object)*(((s1_ptr)_2)->base + 3);
        _26821 = NOVALUE;
        // SubProg emit_op pc: 4775 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4777 op: EQUALS (3)
        if (IS_ATOM_INT(_26822)) {
            _26823 = (_26822 == 2);
        }
        else {
            _26823 = binary_op(EQUALS, _26822, 2);
        }
        _26822 = NOVALUE;
        // SubProg emit_op pc: 4781 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26823)) {
            if (_26823 == 0) {
                goto L86; // [4781] 4842
            }
        }
        else {
            if (DBL_PTR(_26823)->dbl == 0.0) {
                goto L86; // [4781] 4842
            }
        }
        // SubProg emit_op pc: 4785 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4787 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26825 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 4791 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4793 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26825);
        _26826 = (object)*(((s1_ptr)_2)->base + 1);
        _26825 = NOVALUE;
        // SubProg emit_op pc: 4797 op: EQUAL (153)
        if (_26826 == 1)
        _26827 = 1;
        else if (IS_ATOM_INT(_26826) && IS_ATOM_INT(1))
        _26827 = 0;
        else
        _26827 = (compare(_26826, 1) == 0);
        _26826 = NOVALUE;
        // SubProg emit_op pc: 4801 op: NOP1 (159)
        // SubProg emit_op pc: 4802 op: IF (20)
        if (_26827 == 0)
        {
            _26827 = NOVALUE;
            goto L86; // [4802] 4842
        }
        else{
            _26827 = NOVALUE;
        }
        // SubProg emit_op pc: 4805 op: STARTLINE (58)

        /** emit.e:1357				op = PLUS1*/
        // SubProg emit_op pc: 4807 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4809 op: ASSIGN (18)
        _op_51307 = 93;
        // SubProg emit_op pc: 4812 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4814 op: STARTLINE (58)

        /** emit.e:1358				emit_opcode(op)*/
        // SubProg emit_op pc: 4816 op: PROC (27)
        _47emit_opcode(93);
        // SubProg emit_op pc: 4819 op: STARTLINE (58)

        /** emit.e:1359				emit_addr(b)*/
        // SubProg emit_op pc: 4821 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 4824 op: STARTLINE (58)

        /** emit.e:1360				emit_addr(0)*/
        // SubProg emit_op pc: 4826 op: PROC (27)
        _47emit_addr(0);
        // SubProg emit_op pc: 4829 op: STARTLINE (58)

        /** emit.e:1361				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 4831 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4833 op: PROC (27)
        _47cont21d(93, _a_51309, _b_51310, _13FALSE_450);
        // SubProg emit_op pc: 4839 op: ELSE (23)
        goto LC; // [4839] 7737
        // SubProg emit_op pc: 4841 op: NOP1 (159)
L86: // addr: 4842 pc: 4841 sub: 51305 op: 159
        // SubProg emit_op pc: 4842 op: STARTLINE (58)

        /** emit.e:1363				Push(a)*/
        // SubProg emit_op pc: 4844 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 4847 op: STARTLINE (58)

        /** emit.e:1364				Push(b)*/
        // SubProg emit_op pc: 4849 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 4852 op: STARTLINE (58)

        /** emit.e:1365				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 4854 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4856 op: PROC (27)
        _47cont21ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4860 op: NOP1 (159)
        // SubProg emit_op pc: 4861 op: ELSE (23)
        goto LC; // [4861] 7737
        // SubProg emit_op pc: 4863 op: STARTLINE (58)

        /** emit.e:1368		case rw:MULTIPLY then*/
        // SubProg emit_op pc: 4865 op: CASE (186)
        case 13:
        // SubProg emit_op pc: 4867 op: STARTLINE (58)

        /** emit.e:1370			b = Pop()*/
        // SubProg emit_op pc: 4869 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 4872 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 4874 op: STARTLINE (58)

        /** emit.e:1371			a = Pop()*/
        // SubProg emit_op pc: 4876 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 4879 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 4881 op: STARTLINE (58)

        /** emit.e:1372			if a < 1 or b < 1 then*/
        // SubProg emit_op pc: 4883 op: LESS (1)
        _26830 = (_a_51309 < 1);
        // SubProg emit_op pc: 4887 op: SC1_OR_IF (147)
        if (_26830 != 0) {
            goto L87; // [4887] 4900
        }
        // SubProg emit_op pc: 4891 op: LESS (1)
        _26832 = (_b_51310 < 1);
        // SubProg emit_op pc: 4895 op: NOP1 (159)
        // SubProg emit_op pc: 4896 op: IF (20)
        if (_26832 == 0)
        {
            DeRef(_26832);
            _26832 = NOVALUE;
            goto L88; // [4896] 4921
        }
        else{
            DeRef(_26832);
            _26832 = NOVALUE;
        }
        // SubProg emit_op pc: 4899 op: NOP1 (159)
L87: // addr: 4900 pc: 4899 sub: 51305 op: 159
        // SubProg emit_op pc: 4900 op: STARTLINE (58)

        /** emit.e:1373				Push(a)*/
        // SubProg emit_op pc: 4902 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 4905 op: STARTLINE (58)

        /** emit.e:1374				Push(b)*/
        // SubProg emit_op pc: 4907 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 4910 op: STARTLINE (58)

        /** emit.e:1375				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 4912 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4914 op: PROC (27)
        _47cont21ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 4918 op: ELSE (23)
        goto LC; // [4918] 7737
        // SubProg emit_op pc: 4920 op: NOP1 (159)
L88: // addr: 4921 pc: 4920 sub: 51305 op: 159
        // SubProg emit_op pc: 4921 op: STARTLINE (58)

        /** emit.e:1377			elsif SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        // SubProg emit_op pc: 4923 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4925 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26833 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 4929 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4931 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26833);
        _26834 = (object)*(((s1_ptr)_2)->base + 3);
        _26833 = NOVALUE;
        // SubProg emit_op pc: 4935 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4937 op: EQUALS (3)
        if (IS_ATOM_INT(_26834)) {
            _26835 = (_26834 == 2);
        }
        else {
            _26835 = binary_op(EQUALS, _26834, 2);
        }
        _26834 = NOVALUE;
        // SubProg emit_op pc: 4941 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26835)) {
            if (_26835 == 0) {
                goto L89; // [4941] 5002
            }
        }
        else {
            if (DBL_PTR(_26835)->dbl == 0.0) {
                goto L89; // [4941] 5002
            }
        }
        // SubProg emit_op pc: 4945 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4947 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26837 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 4951 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4953 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26837);
        _26838 = (object)*(((s1_ptr)_2)->base + 1);
        _26837 = NOVALUE;
        // SubProg emit_op pc: 4957 op: EQUAL (153)
        if (_26838 == 2)
        _26839 = 1;
        else if (IS_ATOM_INT(_26838) && IS_ATOM_INT(2))
        _26839 = 0;
        else
        _26839 = (compare(_26838, 2) == 0);
        _26838 = NOVALUE;
        // SubProg emit_op pc: 4961 op: NOP1 (159)
        // SubProg emit_op pc: 4962 op: IF (20)
        if (_26839 == 0)
        {
            _26839 = NOVALUE;
            goto L89; // [4962] 5002
        }
        else{
            _26839 = NOVALUE;
        }
        // SubProg emit_op pc: 4965 op: STARTLINE (58)

        /** emit.e:1379				op = PLUS*/
        // SubProg emit_op pc: 4967 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4969 op: ASSIGN (18)
        _op_51307 = 11;
        // SubProg emit_op pc: 4972 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4974 op: STARTLINE (58)

        /** emit.e:1380				emit_opcode(op)*/
        // SubProg emit_op pc: 4976 op: PROC (27)
        _47emit_opcode(11);
        // SubProg emit_op pc: 4979 op: STARTLINE (58)

        /** emit.e:1381				emit_addr(a)*/
        // SubProg emit_op pc: 4981 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 4984 op: STARTLINE (58)

        /** emit.e:1382				emit_addr(a)*/
        // SubProg emit_op pc: 4986 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 4989 op: STARTLINE (58)

        /** emit.e:1383				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 4991 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4993 op: PROC (27)
        _47cont21d(11, _a_51309, _b_51310, _13FALSE_450);
        // SubProg emit_op pc: 4999 op: ELSE (23)
        goto LC; // [4999] 7737
        // SubProg emit_op pc: 5001 op: NOP1 (159)
L89: // addr: 5002 pc: 5001 sub: 51305 op: 159
        // SubProg emit_op pc: 5002 op: STARTLINE (58)

        /** emit.e:1385			elsif SymTab[a][S_MODE] = M_CONSTANT and equal(SymTab[a][S_OBJ], 2) then*/
        // SubProg emit_op pc: 5004 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5006 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26840 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 5010 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5012 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26840);
        _26841 = (object)*(((s1_ptr)_2)->base + 3);
        _26840 = NOVALUE;
        // SubProg emit_op pc: 5016 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5018 op: EQUALS (3)
        if (IS_ATOM_INT(_26841)) {
            _26842 = (_26841 == 2);
        }
        else {
            _26842 = binary_op(EQUALS, _26841, 2);
        }
        _26841 = NOVALUE;
        // SubProg emit_op pc: 5022 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26842)) {
            if (_26842 == 0) {
                goto L8A; // [5022] 5083
            }
        }
        else {
            if (DBL_PTR(_26842)->dbl == 0.0) {
                goto L8A; // [5022] 5083
            }
        }
        // SubProg emit_op pc: 5026 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5028 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26844 = (object)*(((s1_ptr)_2)->base + _a_51309);
        // SubProg emit_op pc: 5032 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5034 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26844);
        _26845 = (object)*(((s1_ptr)_2)->base + 1);
        _26844 = NOVALUE;
        // SubProg emit_op pc: 5038 op: EQUAL (153)
        if (_26845 == 2)
        _26846 = 1;
        else if (IS_ATOM_INT(_26845) && IS_ATOM_INT(2))
        _26846 = 0;
        else
        _26846 = (compare(_26845, 2) == 0);
        _26845 = NOVALUE;
        // SubProg emit_op pc: 5042 op: NOP1 (159)
        // SubProg emit_op pc: 5043 op: IF (20)
        if (_26846 == 0)
        {
            _26846 = NOVALUE;
            goto L8A; // [5043] 5083
        }
        else{
            _26846 = NOVALUE;
        }
        // SubProg emit_op pc: 5046 op: STARTLINE (58)

        /** emit.e:1386				op = PLUS*/
        // SubProg emit_op pc: 5048 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5050 op: ASSIGN (18)
        _op_51307 = 11;
        // SubProg emit_op pc: 5053 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5055 op: STARTLINE (58)

        /** emit.e:1387				emit_opcode(op)*/
        // SubProg emit_op pc: 5057 op: PROC (27)
        _47emit_opcode(11);
        // SubProg emit_op pc: 5060 op: STARTLINE (58)

        /** emit.e:1388				emit_addr(b)*/
        // SubProg emit_op pc: 5062 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 5065 op: STARTLINE (58)

        /** emit.e:1389				emit_addr(b)*/
        // SubProg emit_op pc: 5067 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 5070 op: STARTLINE (58)

        /** emit.e:1390				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 5072 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5074 op: PROC (27)
        _47cont21d(11, _a_51309, _b_51310, _13FALSE_450);
        // SubProg emit_op pc: 5080 op: ELSE (23)
        goto LC; // [5080] 7737
        // SubProg emit_op pc: 5082 op: NOP1 (159)
L8A: // addr: 5083 pc: 5082 sub: 51305 op: 159
        // SubProg emit_op pc: 5083 op: STARTLINE (58)

        /** emit.e:1393				Push(a)*/
        // SubProg emit_op pc: 5085 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 5088 op: STARTLINE (58)

        /** emit.e:1394				Push(b)*/
        // SubProg emit_op pc: 5090 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 5093 op: STARTLINE (58)

        /** emit.e:1395				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 5095 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5097 op: PROC (27)
        _47cont21ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 5101 op: NOP1 (159)
        // SubProg emit_op pc: 5102 op: ELSE (23)
        goto LC; // [5102] 7737
        // SubProg emit_op pc: 5104 op: STARTLINE (58)

        /** emit.e:1399		case rw:DIVIDE then*/
        // SubProg emit_op pc: 5106 op: CASE (186)
        case 14:
        // SubProg emit_op pc: 5108 op: STARTLINE (58)

        /** emit.e:1400			b = Pop()*/
        // SubProg emit_op pc: 5110 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 5113 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 5115 op: STARTLINE (58)

        /** emit.e:1401			if b > 0 and SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        // SubProg emit_op pc: 5117 op: GREATER (6)
        _26848 = (_b_51310 > 0);
        // SubProg emit_op pc: 5121 op: SC1_AND (141)
        if (_26848 == 0) {
            _26849 = 0;
            goto L8B; // [5121] 5147
        }
        // SubProg emit_op pc: 5125 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5127 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26850 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 5131 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5133 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26850);
        _26851 = (object)*(((s1_ptr)_2)->base + 3);
        _26850 = NOVALUE;
        // SubProg emit_op pc: 5137 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5139 op: EQUALS (3)
        if (IS_ATOM_INT(_26851)) {
            _26852 = (_26851 == 2);
        }
        else {
            _26852 = binary_op(EQUALS, _26851, 2);
        }
        _26851 = NOVALUE;
        // SubProg emit_op pc: 5143 op: SC2_AND (142)
        if (IS_ATOM_INT(_26852))
        _26849 = (_26852 != 0);
        else
        _26849 = DBL_PTR(_26852)->dbl != 0.0;
        // SubProg emit_op pc: 5146 op: NOP1 (159)
L8B: // addr: 5147 pc: 5146 sub: 51305 op: 159
        // SubProg emit_op pc: 5147 op: SC1_AND_IF (146)
        if (_26849 == 0) {
            goto L8C; // [5147] 5218
        }
        // SubProg emit_op pc: 5151 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26854 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 5157 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26854);
        _26855 = (object)*(((s1_ptr)_2)->base + 1);
        _26854 = NOVALUE;
        // SubProg emit_op pc: 5163 op: EQUAL (153)
        if (_26855 == 2)
        _26856 = 1;
        else if (IS_ATOM_INT(_26855) && IS_ATOM_INT(2))
        _26856 = 0;
        else
        _26856 = (compare(_26855, 2) == 0);
        _26855 = NOVALUE;
        // SubProg emit_op pc: 5167 op: NOP1 (159)
        // SubProg emit_op pc: 5168 op: IF (20)
        if (_26856 == 0)
        {
            _26856 = NOVALUE;
            goto L8C; // [5168] 5218
        }
        else{
            _26856 = NOVALUE;
        }
        // SubProg emit_op pc: 5171 op: STARTLINE (58)

        /** emit.e:1402				op = DIV2*/
        // SubProg emit_op pc: 5173 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5175 op: ASSIGN (18)
        _op_51307 = 98;
        // SubProg emit_op pc: 5178 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5180 op: STARTLINE (58)

        /** emit.e:1403				emit_opcode(op)*/
        // SubProg emit_op pc: 5182 op: PROC (27)
        _47emit_opcode(98);
        // SubProg emit_op pc: 5185 op: STARTLINE (58)

        /** emit.e:1404				emit_addr(Pop()) -- n.b. "a" hasn't been set*/
        // SubProg emit_op pc: 5187 op: PROC (27)
        _26857 = _47Pop();
        // SubProg emit_op pc: 5190 op: PROC (27)
        _47emit_addr(_26857);
        _26857 = NOVALUE;
        // SubProg emit_op pc: 5193 op: STARTLINE (58)

        /** emit.e:1405				a = 0*/
        // SubProg emit_op pc: 5195 op: ASSIGN (18)
        _a_51309 = 0;
        // SubProg emit_op pc: 5198 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5200 op: STARTLINE (58)

        /** emit.e:1406				emit_addr(0)*/
        // SubProg emit_op pc: 5202 op: PROC (27)
        _47emit_addr(0);
        // SubProg emit_op pc: 5205 op: STARTLINE (58)

        /** emit.e:1407				cont21d(op, a, b, FALSE)  -- could have fractional result*/
        // SubProg emit_op pc: 5207 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5209 op: PROC (27)
        _47cont21d(98, 0, _b_51310, _13FALSE_450);
        // SubProg emit_op pc: 5215 op: ELSE (23)
        goto LC; // [5215] 7737
        // SubProg emit_op pc: 5217 op: NOP1 (159)
L8C: // addr: 5218 pc: 5217 sub: 51305 op: 159
        // SubProg emit_op pc: 5218 op: STARTLINE (58)

        /** emit.e:1409				Push(b)*/
        // SubProg emit_op pc: 5220 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 5223 op: STARTLINE (58)

        /** emit.e:1410				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 5225 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5227 op: PROC (27)
        _47cont21ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 5231 op: NOP1 (159)
        // SubProg emit_op pc: 5232 op: ELSE (23)
        goto LC; // [5232] 7737
        // SubProg emit_op pc: 5234 op: STARTLINE (58)

        /** emit.e:1413		case FLOOR then*/
        // SubProg emit_op pc: 5236 op: CASE (186)
        case 83:
        // SubProg emit_op pc: 5238 op: STARTLINE (58)

        /** emit.e:1414			if previous_op = rw:DIVIDE then*/
        // SubProg emit_op pc: 5240 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5242 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 14)
        goto L8D; // [5242] 5290
        // SubProg emit_op pc: 5246 op: STARTLINE (58)

        /** emit.e:1415				op = FLOOR_DIV*/
        // SubProg emit_op pc: 5248 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5250 op: ASSIGN (18)
        _op_51307 = 63;
        // SubProg emit_op pc: 5253 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5255 op: STARTLINE (58)

        /** emit.e:1416				backpatch(length(Code) - 3, op)*/
        // SubProg emit_op pc: 5257 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5259 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26859 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26859 = 1;
        }
        // SubProg emit_op pc: 5262 op: MINUS (10)
        _26860 = _26859 - 3;
        _26859 = NOVALUE;
        // SubProg emit_op pc: 5266 op: PROC (27)
        _47backpatch(_26860, 63);
        _26860 = NOVALUE;
        // SubProg emit_op pc: 5270 op: STARTLINE (58)

        /** emit.e:1417				assignable = TRUE*/
        // SubProg emit_op pc: 5272 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5274 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 5277 op: STARTLINE (58)

        /** emit.e:1418				last_op = op*/
        // SubProg emit_op pc: 5279 op: ASSIGN_I (113)
        _47last_op_51266 = 63;
        // SubProg emit_op pc: 5282 op: STARTLINE (58)

        /** emit.e:1419				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 5284 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 5287 op: ELSE (23)
        goto LC; // [5287] 7737
        // SubProg emit_op pc: 5289 op: NOP1 (159)
L8D: // addr: 5290 pc: 5289 sub: 51305 op: 159
        // SubProg emit_op pc: 5290 op: STARTLINE (58)

        /** emit.e:1421			elsif previous_op = DIV2 then*/
        // SubProg emit_op pc: 5292 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5294 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5296 op: EQUALS_IFW (104)
        if (_36previous_op_16534 != 98)
        goto L8E; // [5296] 5383
        // SubProg emit_op pc: 5300 op: STARTLINE (58)

        /** emit.e:1422				op = FLOOR_DIV2*/
        // SubProg emit_op pc: 5302 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5304 op: ASSIGN (18)
        _op_51307 = 66;
        // SubProg emit_op pc: 5307 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5309 op: STARTLINE (58)

        /** emit.e:1423				backpatch(length(Code) - 3, op)*/
        // SubProg emit_op pc: 5311 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5313 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26862 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26862 = 1;
        }
        // SubProg emit_op pc: 5316 op: MINUS (10)
        _26863 = _26862 - 3;
        _26862 = NOVALUE;
        // SubProg emit_op pc: 5320 op: PROC (27)
        _47backpatch(_26863, 66);
        _26863 = NOVALUE;
        // SubProg emit_op pc: 5324 op: STARTLINE (58)

        /** emit.e:1424				assignable = TRUE*/
        // SubProg emit_op pc: 5326 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5328 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 5331 op: STARTLINE (58)

        /** emit.e:1425				if IsInteger(Code[$-2]) then*/
        // SubProg emit_op pc: 5333 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5335 op: LENGTH (42)
        if (IS_SEQUENCE(_36Code_16524)){
                _26864 = SEQ_PTR(_36Code_16524)->length;
        }
        else {
            _26864 = 1;
        }
        // SubProg emit_op pc: 5338 op: MINUS (10)
        _26865 = _26864 - 2;
        _26864 = NOVALUE;
        // SubProg emit_op pc: 5342 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36Code_16524);
        _26866 = (object)*(((s1_ptr)_2)->base + _26865);
        // SubProg emit_op pc: 5346 op: PROC (27)
        Ref(_26866);
        _26867 = _47IsInteger(_26866);
        _26866 = NOVALUE;
        // SubProg emit_op pc: 5350 op: IF (20)
        if (_26867 == 0) {
            DeRef(_26867);
            _26867 = NOVALUE;
            goto L8F; // [5350] 5370
        }
        else {
            if (!IS_ATOM_INT(_26867) && DBL_PTR(_26867)->dbl == 0.0){
                DeRef(_26867);
                _26867 = NOVALUE;
                goto L8F; // [5350] 5370
            }
            DeRef(_26867);
            _26867 = NOVALUE;
        }
        DeRef(_26867);
        _26867 = NOVALUE;
        // SubProg emit_op pc: 5353 op: STARTLINE (58)

        /** emit.e:1426					TempInteger(Top()) --mark temp as integer type*/
        // SubProg emit_op pc: 5355 op: STARTLINE (58)

        /** emit.e:145		return cg_stack[cgi]*/
        // SubProg emit_op pc: 5357 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5359 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5361 op: RHS_SUBS (25)
        DeRef(_Top_inlined_Top_at_5480_52408);
        _2 = (object)SEQ_PTR(_47cg_stack_50384);
        _Top_inlined_Top_at_5480_52408 = (object)*(((s1_ptr)_2)->base + _47cgi_50385);
        Ref(_Top_inlined_Top_at_5480_52408);
        // SubProg emit_op pc: 5365 op: NOP1 (159)
        // SubProg emit_op pc: 5366 op: PROC (27)
        Ref(_Top_inlined_Top_at_5480_52408);
        _47TempInteger(_Top_inlined_Top_at_5480_52408);
        // SubProg emit_op pc: 5369 op: NOP1 (159)
L8F: // addr: 5370 pc: 5369 sub: 51305 op: 159
        // SubProg emit_op pc: 5370 op: STARTLINE (58)

        /** emit.e:1428				last_op = op*/
        // SubProg emit_op pc: 5372 op: ASSIGN_I (113)
        _47last_op_51266 = _op_51307;
        // SubProg emit_op pc: 5375 op: STARTLINE (58)

        /** emit.e:1429				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 5377 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 5380 op: ELSE (23)
        goto LC; // [5380] 7737
        // SubProg emit_op pc: 5382 op: NOP1 (159)
L8E: // addr: 5383 pc: 5382 sub: 51305 op: 159
        // SubProg emit_op pc: 5383 op: STARTLINE (58)

        /** emit.e:1431				cont11ii(op, TRUE)*/
        // SubProg emit_op pc: 5385 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5387 op: PROC (27)
        _47cont11ii(_op_51307, _13TRUE_452);
        // SubProg emit_op pc: 5391 op: NOP1 (159)
        // SubProg emit_op pc: 5392 op: ELSE (23)
        goto LC; // [5392] 7737
        // SubProg emit_op pc: 5394 op: STARTLINE (58)

        /** emit.e:1437		case MINUS, rw:APPEND, PREPEND, COMPARE, EQUAL,*/
        // SubProg emit_op pc: 5396 op: CASE (186)
        case 10:
        // SubProg emit_op pc: 5398 op: CASE (186)
        case 35:
        // SubProg emit_op pc: 5400 op: CASE (186)
        case 57:
        // SubProg emit_op pc: 5402 op: CASE (186)
        case 76:
        // SubProg emit_op pc: 5404 op: CASE (186)
        case 153:
        // SubProg emit_op pc: 5406 op: CASE (186)
        case 154:
        // SubProg emit_op pc: 5408 op: CASE (186)
        case 15:
        // SubProg emit_op pc: 5410 op: CASE (186)
        case 32:
        // SubProg emit_op pc: 5412 op: CASE (186)
        case 111:
        // SubProg emit_op pc: 5414 op: CASE (186)
        case 133:
        // SubProg emit_op pc: 5416 op: CASE (186)
        case 53:
        // SubProg emit_op pc: 5418 op: CASE (186)
        case 167:
        // SubProg emit_op pc: 5420 op: CASE (186)
        case 194:
        // SubProg emit_op pc: 5422 op: CASE (186)
        case 198:
        // SubProg emit_op pc: 5424 op: CASE (186)
        case 199:
        // SubProg emit_op pc: 5426 op: CASE (186)
        case 204:
        // SubProg emit_op pc: 5428 op: STARTLINE (58)

        /** emit.e:1440			cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 5430 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5432 op: PROC (27)
        _47cont21ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 5436 op: ELSE (23)
        goto LC; // [5436] 7737
        // SubProg emit_op pc: 5438 op: STARTLINE (58)

        /** emit.e:1442		case SC2_NULL then  -- correct the stack - we aren't emitting anything*/
        // SubProg emit_op pc: 5440 op: CASE (186)
        case 145:
        // SubProg emit_op pc: 5442 op: STARTLINE (58)

        /** emit.e:1443			c = Pop()*/
        // SubProg emit_op pc: 5444 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 5447 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5449 op: STARTLINE (58)

        /** emit.e:1444			TempKeep(c)*/
        // SubProg emit_op pc: 5451 op: PROC (27)
        _47TempKeep(_c_51311);
        // SubProg emit_op pc: 5454 op: STARTLINE (58)

        /** emit.e:1445			b = Pop()  -- remove SC1's temp*/
        // SubProg emit_op pc: 5456 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 5459 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 5461 op: STARTLINE (58)

        /** emit.e:1446			Push(c)*/
        // SubProg emit_op pc: 5463 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 5466 op: STARTLINE (58)

        /** emit.e:1447			assignable = FALSE*/
        // SubProg emit_op pc: 5468 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5470 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 5473 op: STARTLINE (58)

        /** emit.e:1448			last_op = last_op_backup*/
        // SubProg emit_op pc: 5475 op: ASSIGN_I (113)
        _47last_op_51266 = _last_op_backup_51325;
        // SubProg emit_op pc: 5478 op: STARTLINE (58)

        /** emit.e:1449			last_pc = last_pc_backup*/
        // SubProg emit_op pc: 5480 op: ASSIGN_I (113)
        _47last_pc_51267 = _last_pc_backup_51324;
        // SubProg emit_op pc: 5483 op: ELSE (23)
        goto LC; // [5483] 7737
        // SubProg emit_op pc: 5485 op: STARTLINE (58)

        /** emit.e:1452		case SC2_AND, SC2_OR then*/
        // SubProg emit_op pc: 5487 op: CASE (186)
        case 142:
        // SubProg emit_op pc: 5489 op: CASE (186)
        case 144:
        // SubProg emit_op pc: 5491 op: STARTLINE (58)

        /** emit.e:1453			emit_opcode(op)*/
        // SubProg emit_op pc: 5493 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 5496 op: STARTLINE (58)

        /** emit.e:1454			emit_addr(Pop())*/
        // SubProg emit_op pc: 5498 op: PROC (27)
        _26870 = _47Pop();
        // SubProg emit_op pc: 5501 op: PROC (27)
        _47emit_addr(_26870);
        _26870 = NOVALUE;
        // SubProg emit_op pc: 5504 op: STARTLINE (58)

        /** emit.e:1455			c = Pop()*/
        // SubProg emit_op pc: 5506 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 5509 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5511 op: STARTLINE (58)

        /** emit.e:1456			TempKeep(c)*/
        // SubProg emit_op pc: 5513 op: PROC (27)
        _47TempKeep(_c_51311);
        // SubProg emit_op pc: 5516 op: STARTLINE (58)

        /** emit.e:1457			emit_addr(c) -- target*/
        // SubProg emit_op pc: 5518 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 5521 op: STARTLINE (58)

        /** emit.e:1458			TempInteger(c)*/
        // SubProg emit_op pc: 5523 op: PROC (27)
        _47TempInteger(_c_51311);
        // SubProg emit_op pc: 5526 op: STARTLINE (58)

        /** emit.e:1459			Push(c)*/
        // SubProg emit_op pc: 5528 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 5531 op: STARTLINE (58)

        /** emit.e:1460			assignable = FALSE*/
        // SubProg emit_op pc: 5533 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5535 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 5538 op: ELSE (23)
        goto LC; // [5538] 7737
        // SubProg emit_op pc: 5540 op: STARTLINE (58)

        /** emit.e:1463		case MEM_COPY, MEM_SET, PRINTF then*/
        // SubProg emit_op pc: 5542 op: CASE (186)
        case 130:
        // SubProg emit_op pc: 5544 op: CASE (186)
        case 131:
        // SubProg emit_op pc: 5546 op: CASE (186)
        case 38:
        // SubProg emit_op pc: 5548 op: STARTLINE (58)

        /** emit.e:1464			emit_opcode(op)*/
        // SubProg emit_op pc: 5550 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 5553 op: STARTLINE (58)

        /** emit.e:1465			c = Pop()*/
        // SubProg emit_op pc: 5555 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 5558 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5560 op: STARTLINE (58)

        /** emit.e:1466			b = Pop()*/
        // SubProg emit_op pc: 5562 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 5565 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 5567 op: STARTLINE (58)

        /** emit.e:1467			emit_addr(Pop())*/
        // SubProg emit_op pc: 5569 op: PROC (27)
        _26874 = _47Pop();
        // SubProg emit_op pc: 5572 op: PROC (27)
        _47emit_addr(_26874);
        _26874 = NOVALUE;
        // SubProg emit_op pc: 5575 op: STARTLINE (58)

        /** emit.e:1468			emit_addr(b)*/
        // SubProg emit_op pc: 5577 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 5580 op: STARTLINE (58)

        /** emit.e:1469			emit_addr(c)*/
        // SubProg emit_op pc: 5582 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 5585 op: STARTLINE (58)

        /** emit.e:1470			assignable = FALSE*/
        // SubProg emit_op pc: 5587 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5589 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 5592 op: ELSE (23)
        goto LC; // [5592] 7737
        // SubProg emit_op pc: 5594 op: STARTLINE (58)

        /** emit.e:1473		case RHS_SLICE, FIND, MATCH, FIND_FROM, MATCH_FROM, SPLICE, INSERT, REMOVE, OPEN then*/
        // SubProg emit_op pc: 5596 op: CASE (186)
        case 46:
        // SubProg emit_op pc: 5598 op: CASE (186)
        case 77:
        // SubProg emit_op pc: 5600 op: CASE (186)
        case 78:
        // SubProg emit_op pc: 5602 op: CASE (186)
        case 176:
        // SubProg emit_op pc: 5604 op: CASE (186)
        case 177:
        // SubProg emit_op pc: 5606 op: CASE (186)
        case 190:
        // SubProg emit_op pc: 5608 op: CASE (186)
        case 191:
        // SubProg emit_op pc: 5610 op: CASE (186)
        case 200:
        // SubProg emit_op pc: 5612 op: CASE (186)
        case 37:
        // SubProg emit_op pc: 5614 op: STARTLINE (58)

        /** emit.e:1474			emit_opcode(op)*/
        // SubProg emit_op pc: 5616 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 5619 op: STARTLINE (58)

        /** emit.e:1475			c = Pop()*/
        // SubProg emit_op pc: 5621 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 5624 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5626 op: STARTLINE (58)

        /** emit.e:1476			b = Pop()*/
        // SubProg emit_op pc: 5628 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 5631 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 5633 op: STARTLINE (58)

        /** emit.e:1477			emit_addr(Pop())*/
        // SubProg emit_op pc: 5635 op: PROC (27)
        _26877 = _47Pop();
        // SubProg emit_op pc: 5638 op: PROC (27)
        _47emit_addr(_26877);
        _26877 = NOVALUE;
        // SubProg emit_op pc: 5641 op: STARTLINE (58)

        /** emit.e:1478			emit_addr(b)*/
        // SubProg emit_op pc: 5643 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 5646 op: STARTLINE (58)

        /** emit.e:1479			emit_addr(c)*/
        // SubProg emit_op pc: 5648 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 5651 op: STARTLINE (58)

        /** emit.e:1480			c = NewTempSym()*/
        // SubProg emit_op pc: 5653 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 5657 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5659 op: STARTLINE (58)

        /** emit.e:1481			if op = FIND or op = FIND_FROM or op = OPEN then*/
        // SubProg emit_op pc: 5661 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5663 op: EQUALS (3)
        _26879 = (_op_51307 == 77);
        // SubProg emit_op pc: 5667 op: SC1_OR (143)
        if (_26879 != 0) {
            _26880 = 1;
            goto L90; // [5667] 5681
        }
        // SubProg emit_op pc: 5671 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5673 op: EQUALS (3)
        _26881 = (_op_51307 == 176);
        // SubProg emit_op pc: 5677 op: SC2_OR (144)
        _26880 = (_26881 != 0);
        // SubProg emit_op pc: 5680 op: NOP1 (159)
L90: // addr: 5681 pc: 5680 sub: 51305 op: 159
        // SubProg emit_op pc: 5681 op: SC1_OR_IF (147)
        if (_26880 != 0) {
            goto L91; // [5681] 5696
        }
        // SubProg emit_op pc: 5685 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5687 op: EQUALS (3)
        _26883 = (_op_51307 == 37);
        // SubProg emit_op pc: 5691 op: NOP1 (159)
        // SubProg emit_op pc: 5692 op: IF (20)
        if (_26883 == 0)
        {
            DeRef(_26883);
            _26883 = NOVALUE;
            goto L92; // [5692] 5704
        }
        else{
            DeRef(_26883);
            _26883 = NOVALUE;
        }
        // SubProg emit_op pc: 5695 op: NOP1 (159)
L91: // addr: 5696 pc: 5695 sub: 51305 op: 159
        // SubProg emit_op pc: 5696 op: STARTLINE (58)

        /** emit.e:1482				TempInteger( c )*/
        // SubProg emit_op pc: 5698 op: PROC (27)
        _47TempInteger(_c_51311);
        // SubProg emit_op pc: 5701 op: ELSE (23)
        goto L93; // [5701] 5711
        // SubProg emit_op pc: 5703 op: NOP1 (159)
L92: // addr: 5704 pc: 5703 sub: 51305 op: 159
        // SubProg emit_op pc: 5704 op: STARTLINE (58)

        /** emit.e:1484				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 5706 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 5710 op: NOP1 (159)
L93: // addr: 5711 pc: 5710 sub: 51305 op: 159
        // SubProg emit_op pc: 5711 op: STARTLINE (58)

        /** emit.e:1486			assignable = TRUE*/
        // SubProg emit_op pc: 5713 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5715 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 5718 op: STARTLINE (58)

        /** emit.e:1487			Push(c)*/
        // SubProg emit_op pc: 5720 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 5723 op: STARTLINE (58)

        /** emit.e:1488			emit_addr(c)*/
        // SubProg emit_op pc: 5725 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 5728 op: ELSE (23)
        goto LC; // [5728] 7737
        // SubProg emit_op pc: 5730 op: STARTLINE (58)

        /** emit.e:1491		case CONCAT_N then     -- concatenate 3 or more items*/
        // SubProg emit_op pc: 5732 op: CASE (186)
        case 157:
        // SubProg emit_op pc: 5734 op: STARTLINE (58)

        /** emit.e:1492			n = op_info1  -- number of items to concatenate*/
        // SubProg emit_op pc: 5736 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5738 op: ASSIGN_I (113)
        _n_51320 = _47op_info1_50369;
        // SubProg emit_op pc: 5741 op: STARTLINE (58)

        /** emit.e:1493			emit_opcode(CONCAT_N)*/
        // SubProg emit_op pc: 5743 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5745 op: PROC (27)
        _47emit_opcode(157);
        // SubProg emit_op pc: 5748 op: STARTLINE (58)

        /** emit.e:1494			emit(n)*/
        // SubProg emit_op pc: 5750 op: PROC (27)
        _47emit(_n_51320);
        // SubProg emit_op pc: 5753 op: STARTLINE (58)

        /** emit.e:1495			for i = 1 to n do*/
        // SubProg emit_op pc: 5755 op: ASSIGN (18)
        _26884 = _n_51320;
        // SubProg emit_op pc: 5758 op: FOR_I (125)
        {
            object _i_52476;
            _i_52476 = 1;
L94: // addr: 5765 pc: 5758 sub: 51305 op: 125
            if (_i_52476 > _26884){
                goto L95; // [5758] 5786
            }
            // SubProg emit_op pc: 5765 op: STARTLINE (58)

            /** emit.e:1496				symtab_index element = Pop()*/
            // SubProg emit_op pc: 5767 op: PROC (27)
            _element_52479 = _47Pop();
            // SubProg emit_op pc: 5770 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_element_52479)) {
                _1 = (object)(DBL_PTR(_element_52479)->dbl);
                DeRefDS(_element_52479);
                _element_52479 = _1;
            }
            // SubProg emit_op pc: 5772 op: STARTLINE (58)

            /** emit.e:1497				emit_addr( element )  -- reverse order*/
            // SubProg emit_op pc: 5774 op: PROC (27)
            _47emit_addr(_element_52479);
            // SubProg emit_op pc: 5777 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var element_52479
            // SubProg emit_op pc: 5779 op: STARTLINE (58)

            /** emit.e:1498			end for*/
            // SubProg emit_op pc: 5781 op: ENDFOR_INT_UP1 (54)
            _i_52476 = _i_52476 + 1;
            goto L94; // [5781] 5765
L95: // addr: 5786 pc: 5781 sub: 51305 op: 54
            ;
        }
        // SubProg emit_op pc: 5786 op: STARTLINE (58)

        /** emit.e:1499			c = NewTempSym()*/
        // SubProg emit_op pc: 5788 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 5792 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5794 op: STARTLINE (58)

        /** emit.e:1500			emit_addr(c)*/
        // SubProg emit_op pc: 5796 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 5799 op: STARTLINE (58)

        /** emit.e:1501			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 5801 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 5805 op: STARTLINE (58)

        /** emit.e:1502			assignable = TRUE*/
        // SubProg emit_op pc: 5807 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5809 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 5812 op: STARTLINE (58)

        /** emit.e:1503			Push(c)*/
        // SubProg emit_op pc: 5814 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 5817 op: ELSE (23)
        goto LC; // [5817] 7737
        // SubProg emit_op pc: 5819 op: STARTLINE (58)

        /** emit.e:1505		case FOR then*/
        // SubProg emit_op pc: 5821 op: CASE (186)
        case 21:
        // SubProg emit_op pc: 5823 op: STARTLINE (58)

        /** emit.e:1506			c = Pop() -- increment*/
        // SubProg emit_op pc: 5825 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 5828 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5830 op: STARTLINE (58)

        /** emit.e:1507			TempKeep(c)*/
        // SubProg emit_op pc: 5832 op: PROC (27)
        _47TempKeep(_c_51311);
        // SubProg emit_op pc: 5835 op: STARTLINE (58)

        /** emit.e:1508			ic = IsInteger(c)*/
        // SubProg emit_op pc: 5837 op: PROC (27)
        _ic_51319 = _47IsInteger(_c_51311);
        // SubProg emit_op pc: 5841 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ic_51319)) {
            _1 = (object)(DBL_PTR(_ic_51319)->dbl);
            DeRefDS(_ic_51319);
            _ic_51319 = _1;
        }
        // SubProg emit_op pc: 5843 op: STARTLINE (58)

        /** emit.e:1509			if c < 1 or*/
        // SubProg emit_op pc: 5845 op: LESS (1)
        _26889 = (_c_51311 < 1);
        // SubProg emit_op pc: 5849 op: SC1_OR_IF (147)
        if (_26889 != 0) {
            goto L96; // [5849] 5928
        }
        // SubProg emit_op pc: 5853 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5855 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26891 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 5859 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5861 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26891);
        _26892 = (object)*(((s1_ptr)_2)->base + 3);
        _26891 = NOVALUE;
        // SubProg emit_op pc: 5865 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5867 op: EQUALS (3)
        if (IS_ATOM_INT(_26892)) {
            _26893 = (_26892 == 1);
        }
        else {
            _26893 = binary_op(EQUALS, _26892, 1);
        }
        _26892 = NOVALUE;
        // SubProg emit_op pc: 5871 op: SC1_AND (141)
        if (IS_ATOM_INT(_26893)) {
            if (_26893 == 0) {
                DeRef(_26894);
                _26894 = 0;
                goto L97; // [5871] 5897
            }
        }
        else {
            if (DBL_PTR(_26893)->dbl == 0.0) {
                DeRef(_26894);
                _26894 = 0;
                goto L97; // [5871] 5897
            }
        }
        // SubProg emit_op pc: 5875 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5877 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26895 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 5881 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5883 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26895);
        _26896 = (object)*(((s1_ptr)_2)->base + 4);
        _26895 = NOVALUE;
        // SubProg emit_op pc: 5887 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5889 op: NOTEQ (4)
        if (IS_ATOM_INT(_26896)) {
            _26897 = (_26896 != 2);
        }
        else {
            _26897 = binary_op(NOTEQ, _26896, 2);
        }
        _26896 = NOVALUE;
        // SubProg emit_op pc: 5893 op: SC2_AND (142)
        DeRef(_26894);
        if (IS_ATOM_INT(_26897))
        _26894 = (_26897 != 0);
        else
        _26894 = DBL_PTR(_26897)->dbl != 0.0;
        // SubProg emit_op pc: 5896 op: NOP1 (159)
L97: // addr: 5897 pc: 5896 sub: 51305 op: 159
        // SubProg emit_op pc: 5897 op: SC1_AND (141)
        if (_26894 == 0) {
            DeRef(_26898);
            _26898 = 0;
            goto L98; // [5897] 5923
        }
        // SubProg emit_op pc: 5901 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5903 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26899 = (object)*(((s1_ptr)_2)->base + _c_51311);
        // SubProg emit_op pc: 5907 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5909 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26899);
        _26900 = (object)*(((s1_ptr)_2)->base + 4);
        _26899 = NOVALUE;
        // SubProg emit_op pc: 5913 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5915 op: NOTEQ (4)
        if (IS_ATOM_INT(_26900)) {
            _26901 = (_26900 != 4);
        }
        else {
            _26901 = binary_op(NOTEQ, _26900, 4);
        }
        _26900 = NOVALUE;
        // SubProg emit_op pc: 5919 op: SC2_AND (142)
        if (IS_ATOM_INT(_26901))
        _26898 = (_26901 != 0);
        else
        _26898 = DBL_PTR(_26901)->dbl != 0.0;
        // SubProg emit_op pc: 5922 op: NOP1 (159)
L98: // addr: 5923 pc: 5922 sub: 51305 op: 159
        // SubProg emit_op pc: 5923 op: NOP1 (159)
        // SubProg emit_op pc: 5924 op: IF (20)
        if (_26898 == 0)
        {
            _26898 = NOVALUE;
            goto L99; // [5924] 5965
        }
        else{
            _26898 = NOVALUE;
        }
        // SubProg emit_op pc: 5927 op: NOP1 (159)
L96: // addr: 5928 pc: 5927 sub: 51305 op: 159
        // SubProg emit_op pc: 5928 op: STARTLINE (58)

        /** emit.e:1514				emit_opcode(ASSIGN)*/
        // SubProg emit_op pc: 5930 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5932 op: PROC (27)
        _47emit_opcode(18);
        // SubProg emit_op pc: 5935 op: STARTLINE (58)

        /** emit.e:1515				emit_addr(c)*/
        // SubProg emit_op pc: 5937 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 5940 op: STARTLINE (58)

        /** emit.e:1516				c = NewTempSym()*/
        // SubProg emit_op pc: 5942 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 5946 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 5948 op: STARTLINE (58)

        /** emit.e:1517				if ic then*/
        // SubProg emit_op pc: 5950 op: IF (20)
        if (_ic_51319 == 0)
        {
            goto L9A; // [5950] 5959
        }
        else{
        }
        // SubProg emit_op pc: 5953 op: STARTLINE (58)

        /** emit.e:1518					TempInteger( c )*/
        // SubProg emit_op pc: 5955 op: PROC (27)
        _47TempInteger(_c_51311);
        // SubProg emit_op pc: 5958 op: NOP1 (159)
L9A: // addr: 5959 pc: 5958 sub: 51305 op: 159
        // SubProg emit_op pc: 5959 op: STARTLINE (58)

        /** emit.e:1520				emit_addr(c)*/
        // SubProg emit_op pc: 5961 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 5964 op: NOP1 (159)
L99: // addr: 5965 pc: 5964 sub: 51305 op: 159
        // SubProg emit_op pc: 5965 op: STARTLINE (58)

        /** emit.e:1522			b = Pop() -- limit*/
        // SubProg emit_op pc: 5967 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 5970 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 5972 op: STARTLINE (58)

        /** emit.e:1523			TempKeep(b)*/
        // SubProg emit_op pc: 5974 op: PROC (27)
        _47TempKeep(_b_51310);
        // SubProg emit_op pc: 5977 op: STARTLINE (58)

        /** emit.e:1524			ib = IsInteger(b)*/
        // SubProg emit_op pc: 5979 op: PROC (27)
        _ib_51318 = _47IsInteger(_b_51310);
        // SubProg emit_op pc: 5983 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ib_51318)) {
            _1 = (object)(DBL_PTR(_ib_51318)->dbl);
            DeRefDS(_ib_51318);
            _ib_51318 = _1;
        }
        // SubProg emit_op pc: 5985 op: STARTLINE (58)

        /** emit.e:1525			if b < 1 or*/
        // SubProg emit_op pc: 5987 op: LESS (1)
        _26905 = (_b_51310 < 1);
        // SubProg emit_op pc: 5991 op: SC1_OR_IF (147)
        if (_26905 != 0) {
            goto L9B; // [5991] 6070
        }
        // SubProg emit_op pc: 5995 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5997 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26907 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 6001 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6003 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26907);
        _26908 = (object)*(((s1_ptr)_2)->base + 3);
        _26907 = NOVALUE;
        // SubProg emit_op pc: 6007 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6009 op: EQUALS (3)
        if (IS_ATOM_INT(_26908)) {
            _26909 = (_26908 == 1);
        }
        else {
            _26909 = binary_op(EQUALS, _26908, 1);
        }
        _26908 = NOVALUE;
        // SubProg emit_op pc: 6013 op: SC1_AND (141)
        if (IS_ATOM_INT(_26909)) {
            if (_26909 == 0) {
                DeRef(_26910);
                _26910 = 0;
                goto L9C; // [6013] 6039
            }
        }
        else {
            if (DBL_PTR(_26909)->dbl == 0.0) {
                DeRef(_26910);
                _26910 = 0;
                goto L9C; // [6013] 6039
            }
        }
        // SubProg emit_op pc: 6017 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6019 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26911 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 6023 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6025 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26911);
        _26912 = (object)*(((s1_ptr)_2)->base + 4);
        _26911 = NOVALUE;
        // SubProg emit_op pc: 6029 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6031 op: NOTEQ (4)
        if (IS_ATOM_INT(_26912)) {
            _26913 = (_26912 != 2);
        }
        else {
            _26913 = binary_op(NOTEQ, _26912, 2);
        }
        _26912 = NOVALUE;
        // SubProg emit_op pc: 6035 op: SC2_AND (142)
        DeRef(_26910);
        if (IS_ATOM_INT(_26913))
        _26910 = (_26913 != 0);
        else
        _26910 = DBL_PTR(_26913)->dbl != 0.0;
        // SubProg emit_op pc: 6038 op: NOP1 (159)
L9C: // addr: 6039 pc: 6038 sub: 51305 op: 159
        // SubProg emit_op pc: 6039 op: SC1_AND (141)
        if (_26910 == 0) {
            DeRef(_26914);
            _26914 = 0;
            goto L9D; // [6039] 6065
        }
        // SubProg emit_op pc: 6043 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6045 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26915 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 6049 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6051 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26915);
        _26916 = (object)*(((s1_ptr)_2)->base + 4);
        _26915 = NOVALUE;
        // SubProg emit_op pc: 6055 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6057 op: NOTEQ (4)
        if (IS_ATOM_INT(_26916)) {
            _26917 = (_26916 != 4);
        }
        else {
            _26917 = binary_op(NOTEQ, _26916, 4);
        }
        _26916 = NOVALUE;
        // SubProg emit_op pc: 6061 op: SC2_AND (142)
        if (IS_ATOM_INT(_26917))
        _26914 = (_26917 != 0);
        else
        _26914 = DBL_PTR(_26917)->dbl != 0.0;
        // SubProg emit_op pc: 6064 op: NOP1 (159)
L9D: // addr: 6065 pc: 6064 sub: 51305 op: 159
        // SubProg emit_op pc: 6065 op: NOP1 (159)
        // SubProg emit_op pc: 6066 op: IF (20)
        if (_26914 == 0)
        {
            _26914 = NOVALUE;
            goto L9E; // [6066] 6107
        }
        else{
            _26914 = NOVALUE;
        }
        // SubProg emit_op pc: 6069 op: NOP1 (159)
L9B: // addr: 6070 pc: 6069 sub: 51305 op: 159
        // SubProg emit_op pc: 6070 op: STARTLINE (58)

        /** emit.e:1530				emit_opcode(ASSIGN)*/
        // SubProg emit_op pc: 6072 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6074 op: PROC (27)
        _47emit_opcode(18);
        // SubProg emit_op pc: 6077 op: STARTLINE (58)

        /** emit.e:1531				emit_addr(b)*/
        // SubProg emit_op pc: 6079 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 6082 op: STARTLINE (58)

        /** emit.e:1532				b = NewTempSym()*/
        // SubProg emit_op pc: 6084 op: PROC (27)
        _b_51310 = _54NewTempSym(0);
        // SubProg emit_op pc: 6088 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 6090 op: STARTLINE (58)

        /** emit.e:1533				if ib then*/
        // SubProg emit_op pc: 6092 op: IF (20)
        if (_ib_51318 == 0)
        {
            goto L9F; // [6092] 6101
        }
        else{
        }
        // SubProg emit_op pc: 6095 op: STARTLINE (58)

        /** emit.e:1534					TempInteger( b )*/
        // SubProg emit_op pc: 6097 op: PROC (27)
        _47TempInteger(_b_51310);
        // SubProg emit_op pc: 6100 op: NOP1 (159)
L9F: // addr: 6101 pc: 6100 sub: 51305 op: 159
        // SubProg emit_op pc: 6101 op: STARTLINE (58)

        /** emit.e:1536				emit_addr(b)*/
        // SubProg emit_op pc: 6103 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 6106 op: NOP1 (159)
L9E: // addr: 6107 pc: 6106 sub: 51305 op: 159
        // SubProg emit_op pc: 6107 op: STARTLINE (58)

        /** emit.e:1538			a = Pop() -- initial value*/
        // SubProg emit_op pc: 6109 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 6112 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 6114 op: STARTLINE (58)

        /** emit.e:1539			if IsInteger(a) and ib and ic then*/
        // SubProg emit_op pc: 6116 op: PROC (27)
        _26920 = _47IsInteger(_a_51309);
        // SubProg emit_op pc: 6120 op: SC1_AND (141)
        if (IS_ATOM_INT(_26920)) {
            if (_26920 == 0) {
                DeRef(_26921);
                _26921 = 0;
                goto LA0; // [6120] 6128
            }
        }
        else {
            if (DBL_PTR(_26920)->dbl == 0.0) {
                DeRef(_26921);
                _26921 = 0;
                goto LA0; // [6120] 6128
            }
        }
        // SubProg emit_op pc: 6124 op: SC2_AND (142)
        DeRef(_26921);
        _26921 = (_ib_51318 != 0);
        // SubProg emit_op pc: 6127 op: NOP1 (159)
LA0: // addr: 6128 pc: 6127 sub: 51305 op: 159
        // SubProg emit_op pc: 6128 op: SC1_AND_IF (146)
        if (_26921 == 0) {
            goto LA1; // [6128] 6167
        }
        // SubProg emit_op pc: 6132 op: NOP1 (159)
        // SubProg emit_op pc: 6133 op: IF (20)
        if (_ic_51319 == 0)
        {
            goto LA1; // [6133] 6167
        }
        else{
        }
        // SubProg emit_op pc: 6136 op: STARTLINE (58)

        /** emit.e:1540				SymTab[op_info1][S_VTYPE] = integer_type*/
        // SubProg emit_op pc: 6138 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6140 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6142 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_47op_info1_50369 + ((s1_ptr)_2)->base);
        // SubProg emit_op pc: 6147 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6149 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6151 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 15);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _54integer_type_46261;
        DeRef(_1);
        _26923 = NOVALUE;
        // SubProg emit_op pc: 6155 op: STARTLINE (58)

        /** emit.e:1541				op = FOR_I*/
        // SubProg emit_op pc: 6157 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6159 op: ASSIGN (18)
        _op_51307 = 125;
        // SubProg emit_op pc: 6162 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 6164 op: ELSE (23)
        goto LA2; // [6164] 6177
        // SubProg emit_op pc: 6166 op: NOP1 (159)
LA1: // addr: 6167 pc: 6166 sub: 51305 op: 159
        // SubProg emit_op pc: 6167 op: STARTLINE (58)

        /** emit.e:1543				op = FOR*/
        // SubProg emit_op pc: 6169 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6171 op: ASSIGN (18)
        _op_51307 = 21;
        // SubProg emit_op pc: 6174 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 6176 op: NOP1 (159)
LA2: // addr: 6177 pc: 6176 sub: 51305 op: 159
        // SubProg emit_op pc: 6177 op: STARTLINE (58)

        /** emit.e:1545			emit_opcode(op)*/
        // SubProg emit_op pc: 6179 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6182 op: STARTLINE (58)

        /** emit.e:1546			emit_addr(c)*/
        // SubProg emit_op pc: 6184 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6187 op: STARTLINE (58)

        /** emit.e:1547			emit_addr(b)*/
        // SubProg emit_op pc: 6189 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 6192 op: STARTLINE (58)

        /** emit.e:1548			emit_addr(a)*/
        // SubProg emit_op pc: 6194 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 6197 op: STARTLINE (58)

        /** emit.e:1549			emit_addr(CurrentSub) -- in case recursion check is needed*/
        // SubProg emit_op pc: 6199 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6201 op: PROC (27)
        _47emit_addr(_36CurrentSub_16444);
        // SubProg emit_op pc: 6204 op: STARTLINE (58)

        /** emit.e:1550			Push(b)*/
        // SubProg emit_op pc: 6206 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 6209 op: STARTLINE (58)

        /** emit.e:1551			Push(c)*/
        // SubProg emit_op pc: 6211 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 6214 op: STARTLINE (58)

        /** emit.e:1552			assignable = FALSE*/
        // SubProg emit_op pc: 6216 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6218 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6221 op: ELSE (23)
        goto LC; // [6221] 7737
        // SubProg emit_op pc: 6223 op: STARTLINE (58)

        /** emit.e:1555		case ENDFOR_GENERAL, ENDFOR_INT_UP1 then  -- all ENDFORs*/
        // SubProg emit_op pc: 6225 op: CASE (186)
        case 39:
        // SubProg emit_op pc: 6227 op: CASE (186)
        case 54:
        // SubProg emit_op pc: 6229 op: STARTLINE (58)

        /** emit.e:1556			emit_opcode(op) -- will be patched at runtime*/
        // SubProg emit_op pc: 6231 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6234 op: STARTLINE (58)

        /** emit.e:1557			a = Pop()*/
        // SubProg emit_op pc: 6236 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 6239 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 6241 op: STARTLINE (58)

        /** emit.e:1558			emit_addr(op_info2) -- address of top of loop*/
        // SubProg emit_op pc: 6243 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6245 op: PROC (27)
        _47emit_addr(_47op_info2_50370);
        // SubProg emit_op pc: 6248 op: STARTLINE (58)

        /** emit.e:1559			emit_addr(Pop())    -- limit*/
        // SubProg emit_op pc: 6250 op: PROC (27)
        _26926 = _47Pop();
        // SubProg emit_op pc: 6253 op: PROC (27)
        _47emit_addr(_26926);
        _26926 = NOVALUE;
        // SubProg emit_op pc: 6256 op: STARTLINE (58)

        /** emit.e:1560			emit_addr(op_info1) -- loop var*/
        // SubProg emit_op pc: 6258 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6260 op: PROC (27)
        _47emit_addr(_47op_info1_50369);
        // SubProg emit_op pc: 6263 op: STARTLINE (58)

        /** emit.e:1561			emit_addr(a)        -- increment - not always used -*/
        // SubProg emit_op pc: 6265 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 6268 op: STARTLINE (58)

        /** emit.e:1563			assignable = FALSE*/
        // SubProg emit_op pc: 6270 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6272 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6275 op: ELSE (23)
        goto LC; // [6275] 7737
        // SubProg emit_op pc: 6277 op: STARTLINE (58)

        /** emit.e:1566		case ASSIGN_OP_SUBS, PASSIGN_OP_SUBS then*/
        // SubProg emit_op pc: 6279 op: CASE (186)
        case 149:
        // SubProg emit_op pc: 6281 op: CASE (186)
        case 164:
        // SubProg emit_op pc: 6283 op: STARTLINE (58)

        /** emit.e:1568			b = Pop()      -- rhs value, keep on stack*/
        // SubProg emit_op pc: 6285 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 6288 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 6290 op: STARTLINE (58)

        /** emit.e:1569			TempKeep(b)*/
        // SubProg emit_op pc: 6292 op: PROC (27)
        _47TempKeep(_b_51310);
        // SubProg emit_op pc: 6295 op: STARTLINE (58)

        /** emit.e:1571			a = Pop()      -- subscript, keep on stack*/
        // SubProg emit_op pc: 6297 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 6300 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 6302 op: STARTLINE (58)

        /** emit.e:1572			TempKeep(a)*/
        // SubProg emit_op pc: 6304 op: PROC (27)
        _47TempKeep(_a_51309);
        // SubProg emit_op pc: 6307 op: STARTLINE (58)

        /** emit.e:1574			c = Pop()      -- lhs sequence, keep on stack*/
        // SubProg emit_op pc: 6309 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 6312 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6314 op: STARTLINE (58)

        /** emit.e:1575			TempKeep(c)*/
        // SubProg emit_op pc: 6316 op: PROC (27)
        _47TempKeep(_c_51311);
        // SubProg emit_op pc: 6319 op: STARTLINE (58)

        /** emit.e:1577			emit_opcode(op)*/
        // SubProg emit_op pc: 6321 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6324 op: STARTLINE (58)

        /** emit.e:1578			emit_addr(c)*/
        // SubProg emit_op pc: 6326 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6329 op: STARTLINE (58)

        /** emit.e:1579			emit_addr(a)*/
        // SubProg emit_op pc: 6331 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 6334 op: STARTLINE (58)

        /** emit.e:1581			d = NewTempSym()*/
        // SubProg emit_op pc: 6336 op: PROC (27)
        _d_51312 = _54NewTempSym(0);
        // SubProg emit_op pc: 6340 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_51312)) {
            _1 = (object)(DBL_PTR(_d_51312)->dbl);
            DeRefDS(_d_51312);
            _d_51312 = _1;
        }
        // SubProg emit_op pc: 6342 op: STARTLINE (58)

        /** emit.e:1582			emit_addr(d)   -- place to store result*/
        // SubProg emit_op pc: 6344 op: PROC (27)
        _47emit_addr(_d_51312);
        // SubProg emit_op pc: 6347 op: STARTLINE (58)

        /** emit.e:1583			emit_temp( d, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6349 op: PROC (27)
        _47emit_temp(_d_51312, 1);
        // SubProg emit_op pc: 6353 op: STARTLINE (58)

        /** emit.e:1585			Push(c)*/
        // SubProg emit_op pc: 6355 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 6358 op: STARTLINE (58)

        /** emit.e:1586			Push(a)*/
        // SubProg emit_op pc: 6360 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 6363 op: STARTLINE (58)

        /** emit.e:1587			Push(d)*/
        // SubProg emit_op pc: 6365 op: PROC (27)
        _47Push(_d_51312);
        // SubProg emit_op pc: 6368 op: STARTLINE (58)

        /** emit.e:1588			Push(b)*/
        // SubProg emit_op pc: 6370 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 6373 op: STARTLINE (58)

        /** emit.e:1589			assignable = FALSE*/
        // SubProg emit_op pc: 6375 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6377 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6380 op: ELSE (23)
        goto LC; // [6380] 7737
        // SubProg emit_op pc: 6382 op: STARTLINE (58)

        /** emit.e:1592		case ASSIGN_SLICE, PASSIGN_SLICE then*/
        // SubProg emit_op pc: 6384 op: CASE (186)
        case 45:
        // SubProg emit_op pc: 6386 op: CASE (186)
        case 163:
        // SubProg emit_op pc: 6388 op: STARTLINE (58)

        /** emit.e:1593			emit_opcode(op)*/
        // SubProg emit_op pc: 6390 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6393 op: STARTLINE (58)

        /** emit.e:1594			b = Pop() -- rhs value*/
        // SubProg emit_op pc: 6395 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 6398 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 6400 op: STARTLINE (58)

        /** emit.e:1595			a = Pop() -- 2nd subs*/
        // SubProg emit_op pc: 6402 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 6405 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 6407 op: STARTLINE (58)

        /** emit.e:1596			c = Pop() -- 1st subs*/
        // SubProg emit_op pc: 6409 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 6412 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6414 op: STARTLINE (58)

        /** emit.e:1597			emit_addr(Pop()) -- sequence*/
        // SubProg emit_op pc: 6416 op: PROC (27)
        _26934 = _47Pop();
        // SubProg emit_op pc: 6419 op: PROC (27)
        _47emit_addr(_26934);
        _26934 = NOVALUE;
        // SubProg emit_op pc: 6422 op: STARTLINE (58)

        /** emit.e:1598			emit_addr(c)*/
        // SubProg emit_op pc: 6424 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6427 op: STARTLINE (58)

        /** emit.e:1599			emit_addr(a)*/
        // SubProg emit_op pc: 6429 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 6432 op: STARTLINE (58)

        /** emit.e:1600			emit_addr(b)*/
        // SubProg emit_op pc: 6434 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 6437 op: STARTLINE (58)

        /** emit.e:1601			assignable = FALSE*/
        // SubProg emit_op pc: 6439 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6441 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6444 op: ELSE (23)
        goto LC; // [6444] 7737
        // SubProg emit_op pc: 6446 op: STARTLINE (58)

        /** emit.e:1604		case REPLACE then*/
        // SubProg emit_op pc: 6448 op: CASE (186)
        case 201:
        // SubProg emit_op pc: 6450 op: STARTLINE (58)

        /** emit.e:1605			emit_opcode(op)*/
        // SubProg emit_op pc: 6452 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6455 op: STARTLINE (58)

        /** emit.e:1607			b = Pop()  -- source*/
        // SubProg emit_op pc: 6457 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 6460 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 6462 op: STARTLINE (58)

        /** emit.e:1608			a = Pop()  -- replacement*/
        // SubProg emit_op pc: 6464 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 6467 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 6469 op: STARTLINE (58)

        /** emit.e:1609			c = Pop()  -- start of replaced slice*/
        // SubProg emit_op pc: 6471 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 6474 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6476 op: STARTLINE (58)

        /** emit.e:1610			d = Pop()  -- end of replaced slice*/
        // SubProg emit_op pc: 6478 op: PROC (27)
        _d_51312 = _47Pop();
        // SubProg emit_op pc: 6481 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_51312)) {
            _1 = (object)(DBL_PTR(_d_51312)->dbl);
            DeRefDS(_d_51312);
            _d_51312 = _1;
        }
        // SubProg emit_op pc: 6483 op: STARTLINE (58)

        /** emit.e:1611			emit_addr(d)*/
        // SubProg emit_op pc: 6485 op: PROC (27)
        _47emit_addr(_d_51312);
        // SubProg emit_op pc: 6488 op: STARTLINE (58)

        /** emit.e:1612			emit_addr(c)*/
        // SubProg emit_op pc: 6490 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6493 op: STARTLINE (58)

        /** emit.e:1613			emit_addr(a)*/
        // SubProg emit_op pc: 6495 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 6498 op: STARTLINE (58)

        /** emit.e:1614			emit_addr(b)*/
        // SubProg emit_op pc: 6500 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 6503 op: STARTLINE (58)

        /** emit.e:1616			c = NewTempSym()*/
        // SubProg emit_op pc: 6505 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 6509 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6511 op: STARTLINE (58)

        /** emit.e:1617			Push(c)*/
        // SubProg emit_op pc: 6513 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 6516 op: STARTLINE (58)

        /** emit.e:1618			emit_addr(c)     -- place to store result*/
        // SubProg emit_op pc: 6518 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6521 op: STARTLINE (58)

        /** emit.e:1619			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6523 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 6527 op: STARTLINE (58)

        /** emit.e:1620			assignable = TRUE*/
        // SubProg emit_op pc: 6529 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6531 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 6534 op: ELSE (23)
        goto LC; // [6534] 7737
        // SubProg emit_op pc: 6536 op: STARTLINE (58)

        /** emit.e:1623		case ASSIGN_OP_SLICE, PASSIGN_OP_SLICE then*/
        // SubProg emit_op pc: 6538 op: CASE (186)
        case 150:
        // SubProg emit_op pc: 6540 op: CASE (186)
        case 165:
        // SubProg emit_op pc: 6542 op: STARTLINE (58)

        /** emit.e:1625			emit_opcode(op)*/
        // SubProg emit_op pc: 6544 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6547 op: STARTLINE (58)

        /** emit.e:1627			b = Pop()        -- rhs value not used*/
        // SubProg emit_op pc: 6549 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 6552 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 6554 op: STARTLINE (58)

        /** emit.e:1628			TempKeep(b)*/
        // SubProg emit_op pc: 6556 op: PROC (27)
        _47TempKeep(_b_51310);
        // SubProg emit_op pc: 6559 op: STARTLINE (58)

        /** emit.e:1630			a = Pop()        -- 2nd subs*/
        // SubProg emit_op pc: 6561 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 6564 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 6566 op: STARTLINE (58)

        /** emit.e:1631			TempKeep(a)*/
        // SubProg emit_op pc: 6568 op: PROC (27)
        _47TempKeep(_a_51309);
        // SubProg emit_op pc: 6571 op: STARTLINE (58)

        /** emit.e:1633			c = Pop()        -- 1st subs*/
        // SubProg emit_op pc: 6573 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 6576 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6578 op: STARTLINE (58)

        /** emit.e:1634			TempKeep(c)*/
        // SubProg emit_op pc: 6580 op: PROC (27)
        _47TempKeep(_c_51311);
        // SubProg emit_op pc: 6583 op: STARTLINE (58)

        /** emit.e:1636			d = Pop()*/
        // SubProg emit_op pc: 6585 op: PROC (27)
        _d_51312 = _47Pop();
        // SubProg emit_op pc: 6588 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_51312)) {
            _1 = (object)(DBL_PTR(_d_51312)->dbl);
            DeRefDS(_d_51312);
            _d_51312 = _1;
        }
        // SubProg emit_op pc: 6590 op: STARTLINE (58)

        /** emit.e:1637			TempKeep(d)      -- sequence*/
        // SubProg emit_op pc: 6592 op: PROC (27)
        _47TempKeep(_d_51312);
        // SubProg emit_op pc: 6595 op: STARTLINE (58)

        /** emit.e:1639			emit_addr(d)*/
        // SubProg emit_op pc: 6597 op: PROC (27)
        _47emit_addr(_d_51312);
        // SubProg emit_op pc: 6600 op: STARTLINE (58)

        /** emit.e:1640			Push(d)*/
        // SubProg emit_op pc: 6602 op: PROC (27)
        _47Push(_d_51312);
        // SubProg emit_op pc: 6605 op: STARTLINE (58)

        /** emit.e:1642			emit_addr(c)*/
        // SubProg emit_op pc: 6607 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6610 op: STARTLINE (58)

        /** emit.e:1643			Push(c)*/
        // SubProg emit_op pc: 6612 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 6615 op: STARTLINE (58)

        /** emit.e:1645			emit_addr(a)*/
        // SubProg emit_op pc: 6617 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 6620 op: STARTLINE (58)

        /** emit.e:1646			Push(a)*/
        // SubProg emit_op pc: 6622 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 6625 op: STARTLINE (58)

        /** emit.e:1648			c = NewTempSym()*/
        // SubProg emit_op pc: 6627 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 6631 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6633 op: STARTLINE (58)

        /** emit.e:1649			Push(c)*/
        // SubProg emit_op pc: 6635 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 6638 op: STARTLINE (58)

        /** emit.e:1650			emit_addr(c)     -- place to store result*/
        // SubProg emit_op pc: 6640 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6643 op: STARTLINE (58)

        /** emit.e:1651			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6645 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 6649 op: STARTLINE (58)

        /** emit.e:1653			Push(b)*/
        // SubProg emit_op pc: 6651 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 6654 op: STARTLINE (58)

        /** emit.e:1654			assignable = FALSE*/
        // SubProg emit_op pc: 6656 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6658 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6661 op: ELSE (23)
        goto LC; // [6661] 7737
        // SubProg emit_op pc: 6663 op: STARTLINE (58)

        /** emit.e:1657		case CALL_PROC then*/
        // SubProg emit_op pc: 6665 op: CASE (186)
        case 136:
        // SubProg emit_op pc: 6667 op: STARTLINE (58)

        /** emit.e:1658			emit_opcode(op)*/
        // SubProg emit_op pc: 6669 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6672 op: STARTLINE (58)

        /** emit.e:1659			b = Pop()*/
        // SubProg emit_op pc: 6674 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 6677 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 6679 op: STARTLINE (58)

        /** emit.e:1660			emit_addr(Pop())*/
        // SubProg emit_op pc: 6681 op: PROC (27)
        _26946 = _47Pop();
        // SubProg emit_op pc: 6684 op: PROC (27)
        _47emit_addr(_26946);
        _26946 = NOVALUE;
        // SubProg emit_op pc: 6687 op: STARTLINE (58)

        /** emit.e:1661			emit_addr(b)*/
        // SubProg emit_op pc: 6689 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 6692 op: STARTLINE (58)

        /** emit.e:1662			assignable = FALSE*/
        // SubProg emit_op pc: 6694 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6696 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6699 op: ELSE (23)
        goto LC; // [6699] 7737
        // SubProg emit_op pc: 6701 op: STARTLINE (58)

        /** emit.e:1664		case CALL_FUNC then*/
        // SubProg emit_op pc: 6703 op: CASE (186)
        case 137:
        // SubProg emit_op pc: 6705 op: STARTLINE (58)

        /** emit.e:1665			emit_opcode(op)*/
        // SubProg emit_op pc: 6707 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6710 op: STARTLINE (58)

        /** emit.e:1666			b = Pop()*/
        // SubProg emit_op pc: 6712 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 6715 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 6717 op: STARTLINE (58)

        /** emit.e:1667			emit_addr(Pop())*/
        // SubProg emit_op pc: 6719 op: PROC (27)
        _26948 = _47Pop();
        // SubProg emit_op pc: 6722 op: PROC (27)
        _47emit_addr(_26948);
        _26948 = NOVALUE;
        // SubProg emit_op pc: 6725 op: STARTLINE (58)

        /** emit.e:1668			emit_addr(b)*/
        // SubProg emit_op pc: 6727 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 6730 op: STARTLINE (58)

        /** emit.e:1669			assignable = TRUE*/
        // SubProg emit_op pc: 6732 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6734 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 6737 op: STARTLINE (58)

        /** emit.e:1670			c = NewTempSym()*/
        // SubProg emit_op pc: 6739 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 6743 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6745 op: STARTLINE (58)

        /** emit.e:1671			Push(c)*/
        // SubProg emit_op pc: 6747 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 6750 op: STARTLINE (58)

        /** emit.e:1672			emit_addr(c)*/
        // SubProg emit_op pc: 6752 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6755 op: STARTLINE (58)

        /** emit.e:1673			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6757 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 6761 op: ELSE (23)
        goto LC; // [6761] 7737
        // SubProg emit_op pc: 6763 op: STARTLINE (58)

        /** emit.e:1675		case EXIT_BLOCK then*/
        // SubProg emit_op pc: 6765 op: CASE (186)
        case 206:
        // SubProg emit_op pc: 6767 op: STARTLINE (58)

        /** emit.e:1676			emit_opcode( op )*/
        // SubProg emit_op pc: 6769 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6772 op: STARTLINE (58)

        /** emit.e:1677			emit_addr( Pop() )*/
        // SubProg emit_op pc: 6774 op: PROC (27)
        _26950 = _47Pop();
        // SubProg emit_op pc: 6777 op: PROC (27)
        _47emit_addr(_26950);
        _26950 = NOVALUE;
        // SubProg emit_op pc: 6780 op: STARTLINE (58)

        /** emit.e:1678			assignable = FALSE*/
        // SubProg emit_op pc: 6782 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6784 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6787 op: ELSE (23)
        goto LC; // [6787] 7737
        // SubProg emit_op pc: 6789 op: STARTLINE (58)

        /** emit.e:1680		case RETURNP then*/
        // SubProg emit_op pc: 6791 op: CASE (186)
        case 29:
        // SubProg emit_op pc: 6793 op: STARTLINE (58)

        /** emit.e:1681			emit_opcode(op)*/
        // SubProg emit_op pc: 6795 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6798 op: STARTLINE (58)

        /** emit.e:1682			emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 6800 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6802 op: PROC (27)
        _47emit_addr(_36CurrentSub_16444);
        // SubProg emit_op pc: 6805 op: STARTLINE (58)

        /** emit.e:1683			emit_addr(top_block())*/
        // SubProg emit_op pc: 6807 op: PROC (27)
        _26951 = _65top_block(0);
        // SubProg emit_op pc: 6811 op: PROC (27)
        _47emit_addr(_26951);
        _26951 = NOVALUE;
        // SubProg emit_op pc: 6814 op: STARTLINE (58)

        /** emit.e:1684			assignable = FALSE*/
        // SubProg emit_op pc: 6816 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6818 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6821 op: ELSE (23)
        goto LC; // [6821] 7737
        // SubProg emit_op pc: 6823 op: STARTLINE (58)

        /** emit.e:1686		case RETURNF then*/
        // SubProg emit_op pc: 6825 op: CASE (186)
        case 28:
        // SubProg emit_op pc: 6827 op: STARTLINE (58)

        /** emit.e:1687			clear_temp( Top() )*/
        // SubProg emit_op pc: 6829 op: STARTLINE (58)

        /** emit.e:145		return cg_stack[cgi]*/
        // SubProg emit_op pc: 6831 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6833 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6835 op: RHS_SUBS (25)
        DeRef(_Top_inlined_Top_at_7035_52626);
        _2 = (object)SEQ_PTR(_47cg_stack_50384);
        _Top_inlined_Top_at_7035_52626 = (object)*(((s1_ptr)_2)->base + _47cgi_50385);
        Ref(_Top_inlined_Top_at_7035_52626);
        // SubProg emit_op pc: 6839 op: NOP1 (159)
        // SubProg emit_op pc: 6840 op: PROC (27)
        Ref(_Top_inlined_Top_at_7035_52626);
        _47clear_temp(_Top_inlined_Top_at_7035_52626);
        // SubProg emit_op pc: 6843 op: STARTLINE (58)

        /** emit.e:1688			flush_temps()*/
        // SubProg emit_op pc: 6845 op: PROC (27)
        RefDS(_21933);
        _47flush_temps(_21933);
        // SubProg emit_op pc: 6848 op: STARTLINE (58)

        /** emit.e:1689			emit_opcode(op)*/
        // SubProg emit_op pc: 6850 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6853 op: STARTLINE (58)

        /** emit.e:1690			emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 6855 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6857 op: PROC (27)
        _47emit_addr(_36CurrentSub_16444);
        // SubProg emit_op pc: 6860 op: STARTLINE (58)

        /** emit.e:1691			emit_addr(Least_block())*/
        // SubProg emit_op pc: 6862 op: PROC (27)
        _26952 = _65Least_block();
        // SubProg emit_op pc: 6865 op: PROC (27)
        _47emit_addr(_26952);
        _26952 = NOVALUE;
        // SubProg emit_op pc: 6868 op: STARTLINE (58)

        /** emit.e:1692			emit_addr(Pop())*/
        // SubProg emit_op pc: 6870 op: PROC (27)
        _26953 = _47Pop();
        // SubProg emit_op pc: 6873 op: PROC (27)
        _47emit_addr(_26953);
        _26953 = NOVALUE;
        // SubProg emit_op pc: 6876 op: STARTLINE (58)

        /** emit.e:1693			assignable = FALSE*/
        // SubProg emit_op pc: 6878 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6880 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6883 op: ELSE (23)
        goto LC; // [6883] 7737
        // SubProg emit_op pc: 6885 op: STARTLINE (58)

        /** emit.e:1695		case RETURNT then*/
        // SubProg emit_op pc: 6887 op: CASE (186)
        case 34:
        // SubProg emit_op pc: 6889 op: STARTLINE (58)

        /** emit.e:1696			emit_opcode(op)*/
        // SubProg emit_op pc: 6891 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6894 op: STARTLINE (58)

        /** emit.e:1697			assignable = FALSE*/
        // SubProg emit_op pc: 6896 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6898 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 6901 op: ELSE (23)
        goto LC; // [6901] 7737
        // SubProg emit_op pc: 6903 op: STARTLINE (58)

        /** emit.e:1699		case DATE, TIME, SPACE_USED, GET_KEY, TASK_LIST,*/
        // SubProg emit_op pc: 6905 op: CASE (186)
        case 69:
        // SubProg emit_op pc: 6907 op: CASE (186)
        case 70:
        // SubProg emit_op pc: 6909 op: CASE (186)
        case 75:
        // SubProg emit_op pc: 6911 op: CASE (186)
        case 79:
        // SubProg emit_op pc: 6913 op: CASE (186)
        case 172:
        // SubProg emit_op pc: 6915 op: CASE (186)
        case 100:
        // SubProg emit_op pc: 6917 op: CASE (186)
        case 183:
        // SubProg emit_op pc: 6919 op: STARTLINE (58)

        /** emit.e:1701			emit_opcode(op)*/
        // SubProg emit_op pc: 6921 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6924 op: STARTLINE (58)

        /** emit.e:1702			c = NewTempSym()*/
        // SubProg emit_op pc: 6926 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 6930 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 6932 op: STARTLINE (58)

        /** emit.e:1703			assignable = TRUE*/
        // SubProg emit_op pc: 6934 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6936 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 6939 op: STARTLINE (58)

        /** emit.e:1704			if op = GET_KEY then  -- it's in op_result as integer*/
        // SubProg emit_op pc: 6941 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6943 op: EQUALS_IFW (104)
        if (_op_51307 != 79)
        goto LA3; // [6943] 6955
        // SubProg emit_op pc: 6947 op: STARTLINE (58)

        /** emit.e:1705				TempInteger(c)*/
        // SubProg emit_op pc: 6949 op: PROC (27)
        _47TempInteger(_c_51311);
        // SubProg emit_op pc: 6952 op: ELSE (23)
        goto LA4; // [6952] 6962
        // SubProg emit_op pc: 6954 op: NOP1 (159)
LA3: // addr: 6955 pc: 6954 sub: 51305 op: 159
        // SubProg emit_op pc: 6955 op: STARTLINE (58)

        /** emit.e:1707				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6957 op: PROC (27)
        _47emit_temp(_c_51311, 1);
        // SubProg emit_op pc: 6961 op: NOP1 (159)
LA4: // addr: 6962 pc: 6961 sub: 51305 op: 159
        // SubProg emit_op pc: 6962 op: STARTLINE (58)

        /** emit.e:1709			Push(c)*/
        // SubProg emit_op pc: 6964 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 6967 op: STARTLINE (58)

        /** emit.e:1710			emit_addr(c)*/
        // SubProg emit_op pc: 6969 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 6972 op: ELSE (23)
        goto LC; // [6972] 7737
        // SubProg emit_op pc: 6974 op: STARTLINE (58)

        /** emit.e:1712		case CLOSE, ABORT, CALL, DELETE_OBJECT then*/
        // SubProg emit_op pc: 6976 op: CASE (186)
        case 86:
        // SubProg emit_op pc: 6978 op: CASE (186)
        case 126:
        // SubProg emit_op pc: 6980 op: CASE (186)
        case 129:
        // SubProg emit_op pc: 6982 op: CASE (186)
        case 205:
        // SubProg emit_op pc: 6984 op: STARTLINE (58)

        /** emit.e:1713			emit_opcode(op)*/
        // SubProg emit_op pc: 6986 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 6989 op: STARTLINE (58)

        /** emit.e:1714			emit_addr(Pop())*/
        // SubProg emit_op pc: 6991 op: PROC (27)
        _26956 = _47Pop();
        // SubProg emit_op pc: 6994 op: PROC (27)
        _47emit_addr(_26956);
        _26956 = NOVALUE;
        // SubProg emit_op pc: 6997 op: STARTLINE (58)

        /** emit.e:1715			assignable = FALSE*/
        // SubProg emit_op pc: 6999 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7001 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 7004 op: ELSE (23)
        goto LC; // [7004] 7737
        // SubProg emit_op pc: 7006 op: STARTLINE (58)

        /** emit.e:1717		case POWER then*/
        // SubProg emit_op pc: 7008 op: CASE (186)
        case 72:
        // SubProg emit_op pc: 7010 op: STARTLINE (58)

        /** emit.e:1719			b = Pop()*/
        // SubProg emit_op pc: 7012 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 7015 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 7017 op: STARTLINE (58)

        /** emit.e:1720			a = Pop()*/
        // SubProg emit_op pc: 7019 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 7022 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 7024 op: STARTLINE (58)

        /** emit.e:1721			if b > 0 and SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        // SubProg emit_op pc: 7026 op: GREATER (6)
        _26959 = (_b_51310 > 0);
        // SubProg emit_op pc: 7030 op: SC1_AND (141)
        if (_26959 == 0) {
            _26960 = 0;
            goto LA5; // [7030] 7056
        }
        // SubProg emit_op pc: 7034 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7036 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26961 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 7040 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7042 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26961);
        _26962 = (object)*(((s1_ptr)_2)->base + 3);
        _26961 = NOVALUE;
        // SubProg emit_op pc: 7046 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7048 op: EQUALS (3)
        if (IS_ATOM_INT(_26962)) {
            _26963 = (_26962 == 2);
        }
        else {
            _26963 = binary_op(EQUALS, _26962, 2);
        }
        _26962 = NOVALUE;
        // SubProg emit_op pc: 7052 op: SC2_AND (142)
        if (IS_ATOM_INT(_26963))
        _26960 = (_26963 != 0);
        else
        _26960 = DBL_PTR(_26963)->dbl != 0.0;
        // SubProg emit_op pc: 7055 op: NOP1 (159)
LA5: // addr: 7056 pc: 7055 sub: 51305 op: 159
        // SubProg emit_op pc: 7056 op: SC1_AND_IF (146)
        if (_26960 == 0) {
            goto LA6; // [7056] 7113
        }
        // SubProg emit_op pc: 7060 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7062 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _26965 = (object)*(((s1_ptr)_2)->base + _b_51310);
        // SubProg emit_op pc: 7066 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7068 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26965);
        _26966 = (object)*(((s1_ptr)_2)->base + 1);
        _26965 = NOVALUE;
        // SubProg emit_op pc: 7072 op: EQUAL (153)
        if (_26966 == 2)
        _26967 = 1;
        else if (IS_ATOM_INT(_26966) && IS_ATOM_INT(2))
        _26967 = 0;
        else
        _26967 = (compare(_26966, 2) == 0);
        _26966 = NOVALUE;
        // SubProg emit_op pc: 7076 op: NOP1 (159)
        // SubProg emit_op pc: 7077 op: IF (20)
        if (_26967 == 0)
        {
            _26967 = NOVALUE;
            goto LA6; // [7077] 7113
        }
        else{
            _26967 = NOVALUE;
        }
        // SubProg emit_op pc: 7080 op: STARTLINE (58)

        /** emit.e:1723				op = rw:MULTIPLY*/
        // SubProg emit_op pc: 7082 op: ASSIGN_I (113)
        _op_51307 = 13;
        // SubProg emit_op pc: 7085 op: STARTLINE (58)

        /** emit.e:1724				emit_opcode(op)*/
        // SubProg emit_op pc: 7087 op: PROC (27)
        _47emit_opcode(13);
        // SubProg emit_op pc: 7090 op: STARTLINE (58)

        /** emit.e:1725				emit_addr(a)*/
        // SubProg emit_op pc: 7092 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 7095 op: STARTLINE (58)

        /** emit.e:1726				emit_addr(a)*/
        // SubProg emit_op pc: 7097 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 7100 op: STARTLINE (58)

        /** emit.e:1727				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 7102 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7104 op: PROC (27)
        _47cont21d(13, _a_51309, _b_51310, _13FALSE_450);
        // SubProg emit_op pc: 7110 op: ELSE (23)
        goto LC; // [7110] 7737
        // SubProg emit_op pc: 7112 op: NOP1 (159)
LA6: // addr: 7113 pc: 7112 sub: 51305 op: 159
        // SubProg emit_op pc: 7113 op: STARTLINE (58)

        /** emit.e:1729				Push(a)*/
        // SubProg emit_op pc: 7115 op: PROC (27)
        _47Push(_a_51309);
        // SubProg emit_op pc: 7118 op: STARTLINE (58)

        /** emit.e:1730				Push(b)*/
        // SubProg emit_op pc: 7120 op: PROC (27)
        _47Push(_b_51310);
        // SubProg emit_op pc: 7123 op: STARTLINE (58)

        /** emit.e:1731				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 7125 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7127 op: PROC (27)
        _47cont21ii(_op_51307, _13FALSE_450);
        // SubProg emit_op pc: 7131 op: NOP1 (159)
        // SubProg emit_op pc: 7132 op: ELSE (23)
        goto LC; // [7132] 7737
        // SubProg emit_op pc: 7134 op: STARTLINE (58)

        /** emit.e:1735		case TYPE_CHECK then*/
        // SubProg emit_op pc: 7136 op: CASE (186)
        case 65:
        // SubProg emit_op pc: 7138 op: STARTLINE (58)

        /** emit.e:1736			emit_opcode(op)*/
        // SubProg emit_op pc: 7140 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 7143 op: STARTLINE (58)

        /** emit.e:1737			c = Pop()*/
        // SubProg emit_op pc: 7145 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 7148 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 7150 op: STARTLINE (58)

        /** emit.e:1738			assignable = FALSE*/
        // SubProg emit_op pc: 7152 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7154 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 7157 op: ELSE (23)
        goto LC; // [7157] 7737
        // SubProg emit_op pc: 7159 op: STARTLINE (58)

        /** emit.e:1741		case DOLLAR then*/
        // SubProg emit_op pc: 7161 op: CASE (186)
        case -22:
        // SubProg emit_op pc: 7163 op: STARTLINE (58)

        /** emit.e:1742			if current_sequence[$] < 0 or SymTab[current_sequence[$]][S_SCOPE] = SC_UNDEFINED then*/
        // SubProg emit_op pc: 7165 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7167 op: LENGTH (42)
        if (IS_SEQUENCE(_47current_sequence_50377)){
                _26969 = SEQ_PTR(_47current_sequence_50377)->length;
        }
        else {
            _26969 = 1;
        }
        // SubProg emit_op pc: 7170 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47current_sequence_50377);
        _26970 = (object)*(((s1_ptr)_2)->base + _26969);
        // SubProg emit_op pc: 7174 op: LESS (1)
        if (IS_ATOM_INT(_26970)) {
            _26971 = (_26970 < 0);
        }
        else {
            _26971 = binary_op(LESS, _26970, 0);
        }
        _26970 = NOVALUE;
        // SubProg emit_op pc: 7178 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_26971)) {
            if (_26971 != 0) {
                goto LA7; // [7178] 7214
            }
        }
        else {
            if (DBL_PTR(_26971)->dbl != 0.0) {
                goto LA7; // [7178] 7214
            }
        }
        // SubProg emit_op pc: 7182 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7184 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7186 op: LENGTH (42)
        if (IS_SEQUENCE(_47current_sequence_50377)){
                _26973 = SEQ_PTR(_47current_sequence_50377)->length;
        }
        else {
            _26973 = 1;
        }
        // SubProg emit_op pc: 7189 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47current_sequence_50377);
        _26974 = (object)*(((s1_ptr)_2)->base + _26973);
        // SubProg emit_op pc: 7193 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_26974)){
            _26975 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26974)->dbl));
        }
        else{
            _26975 = (object)*(((s1_ptr)_2)->base + _26974);
        }
        // SubProg emit_op pc: 7197 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7199 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26975);
        _26976 = (object)*(((s1_ptr)_2)->base + 4);
        _26975 = NOVALUE;
        // SubProg emit_op pc: 7203 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7205 op: EQUALS (3)
        if (IS_ATOM_INT(_26976)) {
            _26977 = (_26976 == 9);
        }
        else {
            _26977 = binary_op(EQUALS, _26976, 9);
        }
        _26976 = NOVALUE;
        // SubProg emit_op pc: 7209 op: NOP1 (159)
        // SubProg emit_op pc: 7210 op: IF (20)
        if (_26977 == 0) {
            DeRef(_26977);
            _26977 = NOVALUE;
            goto LA8; // [7210] 7284
        }
        else {
            if (!IS_ATOM_INT(_26977) && DBL_PTR(_26977)->dbl == 0.0){
                DeRef(_26977);
                _26977 = NOVALUE;
                goto LA8; // [7210] 7284
            }
            DeRef(_26977);
            _26977 = NOVALUE;
        }
        DeRef(_26977);
        _26977 = NOVALUE;
        // SubProg emit_op pc: 7213 op: NOP1 (159)
LA7: // addr: 7214 pc: 7213 sub: 51305 op: 159
        // SubProg emit_op pc: 7214 op: STARTLINE (58)

        /** emit.e:1743				if lhs_ptr and length(current_sequence) = 1 then*/
        // SubProg emit_op pc: 7216 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7218 op: SC1_AND_IF (146)
        if (_47lhs_ptr_50379 == 0) {
            goto LA9; // [7218] 7247
        }
        // SubProg emit_op pc: 7222 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7224 op: LENGTH (42)
        if (IS_SEQUENCE(_47current_sequence_50377)){
                _26979 = SEQ_PTR(_47current_sequence_50377)->length;
        }
        else {
            _26979 = 1;
        }
        // SubProg emit_op pc: 7227 op: EQUALS (3)
        _26980 = (_26979 == 1);
        _26979 = NOVALUE;
        // SubProg emit_op pc: 7231 op: NOP1 (159)
        // SubProg emit_op pc: 7232 op: IF (20)
        if (_26980 == 0)
        {
            DeRef(_26980);
            _26980 = NOVALUE;
            goto LA9; // [7232] 7247
        }
        else{
            DeRef(_26980);
            _26980 = NOVALUE;
        }
        // SubProg emit_op pc: 7235 op: STARTLINE (58)

        /** emit.e:1744					c = PLENGTH*/
        // SubProg emit_op pc: 7237 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7239 op: ASSIGN (18)
        _c_51311 = 160;
        // SubProg emit_op pc: 7242 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 7244 op: ELSE (23)
        goto LAA; // [7244] 7257
        // SubProg emit_op pc: 7246 op: NOP1 (159)
LA9: // addr: 7247 pc: 7246 sub: 51305 op: 159
        // SubProg emit_op pc: 7247 op: STARTLINE (58)

        /** emit.e:1746					c = LENGTH*/
        // SubProg emit_op pc: 7249 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7251 op: ASSIGN (18)
        _c_51311 = 42;
        // SubProg emit_op pc: 7254 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 7256 op: NOP1 (159)
LAA: // addr: 7257 pc: 7256 sub: 51305 op: 159
        // SubProg emit_op pc: 7257 op: STARTLINE (58)

        /** emit.e:1748				c = - new_forward_reference( VARIABLE, current_sequence[$], c )*/
        // SubProg emit_op pc: 7259 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7261 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7263 op: LENGTH (42)
        if (IS_SEQUENCE(_47current_sequence_50377)){
                _26981 = SEQ_PTR(_47current_sequence_50377)->length;
        }
        else {
            _26981 = 1;
        }
        // SubProg emit_op pc: 7266 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47current_sequence_50377);
        _26982 = (object)*(((s1_ptr)_2)->base + _26981);
        // SubProg emit_op pc: 7270 op: PROC (27)
        Ref(_26982);
        _26983 = _39new_forward_reference(-100, _26982, _c_51311);
        _26982 = NOVALUE;
        // SubProg emit_op pc: 7276 op: UMINUS (12)
        if (IS_ATOM_INT(_26983)) {
            if ((uintptr_t)_26983 == (uintptr_t)HIGH_BITS){
                _c_51311 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _c_51311 = - _26983;
            }
        }
        else {
            _c_51311 = unary_op(UMINUS, _26983);
        }
        DeRef(_26983);
        _26983 = NOVALUE;
        // SubProg emit_op pc: 7279 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 7281 op: ELSE (23)
        goto LAB; // [7281] 7298
        // SubProg emit_op pc: 7283 op: NOP1 (159)
LA8: // addr: 7284 pc: 7283 sub: 51305 op: 159
        // SubProg emit_op pc: 7284 op: STARTLINE (58)

        /** emit.e:1750				c = current_sequence[$]*/
        // SubProg emit_op pc: 7286 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7288 op: LENGTH (42)
        if (IS_SEQUENCE(_47current_sequence_50377)){
                _26985 = SEQ_PTR(_47current_sequence_50377)->length;
        }
        else {
            _26985 = 1;
        }
        // SubProg emit_op pc: 7291 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47current_sequence_50377);
        _c_51311 = (object)*(((s1_ptr)_2)->base + _26985);
        if (!IS_ATOM_INT(_c_51311)){
            _c_51311 = (object)DBL_PTR(_c_51311)->dbl;
        }
        // SubProg emit_op pc: 7297 op: NOP1 (159)
LAB: // addr: 7298 pc: 7297 sub: 51305 op: 159
        // SubProg emit_op pc: 7298 op: STARTLINE (58)

        /** emit.e:1754			if lhs_ptr and length(current_sequence) = 1 then*/
        // SubProg emit_op pc: 7300 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7302 op: SC1_AND_IF (146)
        if (_47lhs_ptr_50379 == 0) {
            goto LAC; // [7302] 7329
        }
        // SubProg emit_op pc: 7306 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7308 op: LENGTH (42)
        if (IS_SEQUENCE(_47current_sequence_50377)){
                _26988 = SEQ_PTR(_47current_sequence_50377)->length;
        }
        else {
            _26988 = 1;
        }
        // SubProg emit_op pc: 7311 op: EQUALS (3)
        _26989 = (_26988 == 1);
        _26988 = NOVALUE;
        // SubProg emit_op pc: 7315 op: NOP1 (159)
        // SubProg emit_op pc: 7316 op: IF (20)
        if (_26989 == 0)
        {
            DeRef(_26989);
            _26989 = NOVALUE;
            goto LAC; // [7316] 7329
        }
        else{
            DeRef(_26989);
            _26989 = NOVALUE;
        }
        // SubProg emit_op pc: 7319 op: STARTLINE (58)

        /** emit.e:1755				emit_opcode(PLENGTH)*/
        // SubProg emit_op pc: 7321 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7323 op: PROC (27)
        _47emit_opcode(160);
        // SubProg emit_op pc: 7326 op: ELSE (23)
        goto LAD; // [7326] 7337
        // SubProg emit_op pc: 7328 op: NOP1 (159)
LAC: // addr: 7329 pc: 7328 sub: 51305 op: 159
        // SubProg emit_op pc: 7329 op: STARTLINE (58)

        /** emit.e:1757				emit_opcode(LENGTH)*/
        // SubProg emit_op pc: 7331 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7333 op: PROC (27)
        _47emit_opcode(42);
        // SubProg emit_op pc: 7336 op: NOP1 (159)
LAD: // addr: 7337 pc: 7336 sub: 51305 op: 159
        // SubProg emit_op pc: 7337 op: STARTLINE (58)

        /** emit.e:1760			emit_addr( c )*/
        // SubProg emit_op pc: 7339 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 7342 op: STARTLINE (58)

        /** emit.e:1762			c = NewTempSym()*/
        // SubProg emit_op pc: 7344 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 7348 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 7350 op: STARTLINE (58)

        /** emit.e:1763			TempInteger(c)*/
        // SubProg emit_op pc: 7352 op: PROC (27)
        _47TempInteger(_c_51311);
        // SubProg emit_op pc: 7355 op: STARTLINE (58)

        /** emit.e:1764			Push(c)*/
        // SubProg emit_op pc: 7357 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 7360 op: STARTLINE (58)

        /** emit.e:1765			emit_addr(c)*/
        // SubProg emit_op pc: 7362 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 7365 op: STARTLINE (58)

        /** emit.e:1766			assignable = FALSE -- it wouldn't be assigned anyway*/
        // SubProg emit_op pc: 7367 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7369 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 7372 op: ELSE (23)
        goto LC; // [7372] 7737
        // SubProg emit_op pc: 7374 op: STARTLINE (58)

        /** emit.e:1769		case TASK_SELF then*/
        // SubProg emit_op pc: 7376 op: CASE (186)
        case 170:
        // SubProg emit_op pc: 7378 op: STARTLINE (58)

        /** emit.e:1770			c = NewTempSym()*/
        // SubProg emit_op pc: 7380 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 7384 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 7386 op: STARTLINE (58)

        /** emit.e:1771			Push(c)*/
        // SubProg emit_op pc: 7388 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 7391 op: STARTLINE (58)

        /** emit.e:1772			emit_opcode(op)*/
        // SubProg emit_op pc: 7393 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 7396 op: STARTLINE (58)

        /** emit.e:1773			emit_addr(c)*/
        // SubProg emit_op pc: 7398 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 7401 op: STARTLINE (58)

        /** emit.e:1774			assignable = TRUE*/
        // SubProg emit_op pc: 7403 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7405 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 7408 op: ELSE (23)
        goto LC; // [7408] 7737
        // SubProg emit_op pc: 7410 op: STARTLINE (58)

        /** emit.e:1776		case SWITCH then*/
        // SubProg emit_op pc: 7412 op: CASE (186)
        case 185:
        // SubProg emit_op pc: 7414 op: STARTLINE (58)

        /** emit.e:1777			emit_opcode( op )*/
        // SubProg emit_op pc: 7416 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 7419 op: STARTLINE (58)

        /** emit.e:1778			c = Pop()*/
        // SubProg emit_op pc: 7421 op: PROC (27)
        _c_51311 = _47Pop();
        // SubProg emit_op pc: 7424 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 7426 op: STARTLINE (58)

        /** emit.e:1779			b = Pop()*/
        // SubProg emit_op pc: 7428 op: PROC (27)
        _b_51310 = _47Pop();
        // SubProg emit_op pc: 7431 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51310)) {
            _1 = (object)(DBL_PTR(_b_51310)->dbl);
            DeRefDS(_b_51310);
            _b_51310 = _1;
        }
        // SubProg emit_op pc: 7433 op: STARTLINE (58)

        /** emit.e:1780			a = Pop()*/
        // SubProg emit_op pc: 7435 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 7438 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 7440 op: STARTLINE (58)

        /** emit.e:1781			emit_addr( a ) -- Switch Expr*/
        // SubProg emit_op pc: 7442 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 7445 op: STARTLINE (58)

        /** emit.e:1782			emit_addr( b ) -- Case values*/
        // SubProg emit_op pc: 7447 op: PROC (27)
        _47emit_addr(_b_51310);
        // SubProg emit_op pc: 7450 op: STARTLINE (58)

        /** emit.e:1783			emit_addr( c ) -- Jump table*/
        // SubProg emit_op pc: 7452 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 7455 op: STARTLINE (58)

        /** emit.e:1785			assignable = FALSE*/
        // SubProg emit_op pc: 7457 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7459 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 7462 op: ELSE (23)
        goto LC; // [7462] 7737
        // SubProg emit_op pc: 7464 op: STARTLINE (58)

        /** emit.e:1787		case CASE then*/
        // SubProg emit_op pc: 7466 op: CASE (186)
        case 186:
        // SubProg emit_op pc: 7468 op: STARTLINE (58)

        /** emit.e:1789			emit_opcode( op )*/
        // SubProg emit_op pc: 7470 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 7473 op: STARTLINE (58)

        /** emit.e:1790			emit( cg_stack[cgi] )  -- the case index*/
        // SubProg emit_op pc: 7475 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7477 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7479 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47cg_stack_50384);
        _26995 = (object)*(((s1_ptr)_2)->base + _47cgi_50385);
        // SubProg emit_op pc: 7483 op: PROC (27)
        Ref(_26995);
        _47emit(_26995);
        _26995 = NOVALUE;
        // SubProg emit_op pc: 7486 op: STARTLINE (58)

        /** emit.e:1791			cgi -= 1*/
        // SubProg emit_op pc: 7488 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7490 op: MINUS_I (116)
        _47cgi_50385 = _47cgi_50385 - 1;
        // SubProg emit_op pc: 7494 op: ELSE (23)
        goto LC; // [7494] 7737
        // SubProg emit_op pc: 7496 op: STARTLINE (58)

        /** emit.e:1794		case PLATFORM then*/
        // SubProg emit_op pc: 7498 op: CASE (186)
        case 155:
        // SubProg emit_op pc: 7500 op: STARTLINE (58)

        /** emit.e:1795			if BIND and shroud_only then*/
        // SubProg emit_op pc: 7502 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7504 op: SC1_AND_IF (146)
        if (_36BIND_16064 == 0) {
            goto LAE; // [7504] 7552
        }
        // SubProg emit_op pc: 7508 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7510 op: NOP1 (159)
        // SubProg emit_op pc: 7511 op: IF (20)
        if (_36shroud_only_16434 == 0)
        {
            goto LAE; // [7511] 7552
        }
        else{
        }
        // SubProg emit_op pc: 7514 op: STARTLINE (58)

        /** emit.e:1797				c = NewTempSym()*/
        // SubProg emit_op pc: 7516 op: PROC (27)
        _c_51311 = _54NewTempSym(0);
        // SubProg emit_op pc: 7520 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51311)) {
            _1 = (object)(DBL_PTR(_c_51311)->dbl);
            DeRefDS(_c_51311);
            _c_51311 = _1;
        }
        // SubProg emit_op pc: 7522 op: STARTLINE (58)

        /** emit.e:1798				TempInteger(c)*/
        // SubProg emit_op pc: 7524 op: PROC (27)
        _47TempInteger(_c_51311);
        // SubProg emit_op pc: 7527 op: STARTLINE (58)

        /** emit.e:1799				Push(c)*/
        // SubProg emit_op pc: 7529 op: PROC (27)
        _47Push(_c_51311);
        // SubProg emit_op pc: 7532 op: STARTLINE (58)

        /** emit.e:1800				emit_opcode(op)*/
        // SubProg emit_op pc: 7534 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 7537 op: STARTLINE (58)

        /** emit.e:1801				emit_addr(c)*/
        // SubProg emit_op pc: 7539 op: PROC (27)
        _47emit_addr(_c_51311);
        // SubProg emit_op pc: 7542 op: STARTLINE (58)

        /** emit.e:1802				assignable = TRUE*/
        // SubProg emit_op pc: 7544 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7546 op: ASSIGN (18)
        _47assignable_50387 = _13TRUE_452;
        // SubProg emit_op pc: 7549 op: ELSE (23)
        goto LC; // [7549] 7737
        // SubProg emit_op pc: 7551 op: NOP1 (159)
LAE: // addr: 7552 pc: 7551 sub: 51305 op: 159
        // SubProg emit_op pc: 7552 op: STARTLINE (58)

        /** emit.e:1806				n = host_platform()*/
        // SubProg emit_op pc: 7554 op: PROC (27)
        _n_51320 = _41host_platform();
        // SubProg emit_op pc: 7557 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_n_51320)) {
            _1 = (object)(DBL_PTR(_n_51320)->dbl);
            DeRefDS(_n_51320);
            _n_51320 = _1;
        }
        // SubProg emit_op pc: 7559 op: STARTLINE (58)

        /** emit.e:1807				Push(NewIntSym(n))*/
        // SubProg emit_op pc: 7561 op: PROC (27)
        _27000 = _54NewIntSym(_n_51320);
        // SubProg emit_op pc: 7565 op: PROC (27)
        _47Push(_27000);
        _27000 = NOVALUE;
        // SubProg emit_op pc: 7568 op: STARTLINE (58)

        /** emit.e:1808				assignable = FALSE*/
        // SubProg emit_op pc: 7570 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7572 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 7575 op: NOP1 (159)
        // SubProg emit_op pc: 7576 op: ELSE (23)
        goto LC; // [7576] 7737
        // SubProg emit_op pc: 7578 op: STARTLINE (58)

        /** emit.e:1812		case PROFILE, TASK_SUSPEND then*/
        // SubProg emit_op pc: 7580 op: CASE (186)
        case 151:
        // SubProg emit_op pc: 7582 op: CASE (186)
        case 171:
        // SubProg emit_op pc: 7584 op: STARTLINE (58)

        /** emit.e:1813			a = Pop()*/
        // SubProg emit_op pc: 7586 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 7589 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 7591 op: STARTLINE (58)

        /** emit.e:1814			emit_opcode(op)*/
        // SubProg emit_op pc: 7593 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 7596 op: STARTLINE (58)

        /** emit.e:1815			emit_addr(a)*/
        // SubProg emit_op pc: 7598 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 7601 op: STARTLINE (58)

        /** emit.e:1816			assignable = FALSE*/
        // SubProg emit_op pc: 7603 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7605 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 7608 op: ELSE (23)
        goto LC; // [7608] 7737
        // SubProg emit_op pc: 7610 op: STARTLINE (58)

        /** emit.e:1818		case TRACE then*/
        // SubProg emit_op pc: 7612 op: CASE (186)
        case 64:
        // SubProg emit_op pc: 7614 op: STARTLINE (58)

        /** emit.e:1819			a = Pop()*/
        // SubProg emit_op pc: 7616 op: PROC (27)
        _a_51309 = _47Pop();
        // SubProg emit_op pc: 7619 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51309)) {
            _1 = (object)(DBL_PTR(_a_51309)->dbl);
            DeRefDS(_a_51309);
            _a_51309 = _1;
        }
        // SubProg emit_op pc: 7621 op: STARTLINE (58)

        /** emit.e:1820			if OpTrace then*/
        // SubProg emit_op pc: 7623 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7625 op: IF (20)
        if (_36OpTrace_16505 == 0)
        {
            goto LAF; // [7625] 7671
        }
        else{
        }
        // SubProg emit_op pc: 7628 op: STARTLINE (58)

        /** emit.e:1822				emit_opcode(op)*/
        // SubProg emit_op pc: 7630 op: PROC (27)
        _47emit_opcode(_op_51307);
        // SubProg emit_op pc: 7633 op: STARTLINE (58)

        /** emit.e:1823				emit_addr(a)*/
        // SubProg emit_op pc: 7635 op: PROC (27)
        _47emit_addr(_a_51309);
        // SubProg emit_op pc: 7638 op: STARTLINE (58)

        /** emit.e:1824				if TRANSLATE then*/
        // SubProg emit_op pc: 7640 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7642 op: IF (20)
        if (_36TRANSLATE_16061 == 0)
        {
            goto LB0; // [7642] 7670
        }
        else{
        }
        // SubProg emit_op pc: 7645 op: STARTLINE (58)

        /** emit.e:1825					if not trace_called then*/
        // SubProg emit_op pc: 7647 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7649 op: NOT_IFW (108)
        if (_47trace_called_50372 != 0)
        goto LB1; // [7649] 7660
        // SubProg emit_op pc: 7652 op: STARTLINE (58)

        /** emit.e:1826						Warning(217,0)*/
        // SubProg emit_op pc: 7654 op: PROC (27)
        RefDS(_21933);
        _50Warning(217, 0, _21933);
        // SubProg emit_op pc: 7659 op: NOP1 (159)
LB1: // addr: 7660 pc: 7659 sub: 51305 op: 159
        // SubProg emit_op pc: 7660 op: STARTLINE (58)

        /** emit.e:1828					trace_called = TRUE*/
        // SubProg emit_op pc: 7662 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7664 op: ASSIGN (18)
        _47trace_called_50372 = _13TRUE_452;
        // SubProg emit_op pc: 7667 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 7669 op: NOP1 (159)
LB0: // addr: 7670 pc: 7669 sub: 51305 op: 159
        // SubProg emit_op pc: 7670 op: NOP1 (159)
LAF: // addr: 7671 pc: 7670 sub: 51305 op: 159
        // SubProg emit_op pc: 7671 op: STARTLINE (58)

        /** emit.e:1831			assignable = FALSE*/
        // SubProg emit_op pc: 7673 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7675 op: ASSIGN (18)
        _47assignable_50387 = _13FALSE_450;
        // SubProg emit_op pc: 7678 op: ELSE (23)
        goto LC; // [7678] 7737
        // SubProg emit_op pc: 7680 op: STARTLINE (58)

        /** emit.e:1833		case REF_TEMP then*/
        // SubProg emit_op pc: 7682 op: CASE (186)
        case 207:
        // SubProg emit_op pc: 7684 op: STARTLINE (58)

        /** emit.e:1835			emit_opcode( REF_TEMP )*/
        // SubProg emit_op pc: 7686 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7688 op: PROC (27)
        _47emit_opcode(207);
        // SubProg emit_op pc: 7691 op: STARTLINE (58)

        /** emit.e:1836			emit_addr( Pop() )*/
        // SubProg emit_op pc: 7693 op: PROC (27)
        _27004 = _47Pop();
        // SubProg emit_op pc: 7696 op: PROC (27)
        _47emit_addr(_27004);
        _27004 = NOVALUE;
        // SubProg emit_op pc: 7699 op: ELSE (23)
        goto LC; // [7699] 7737
        // SubProg emit_op pc: 7701 op: STARTLINE (58)

        /** emit.e:1838		case DEREF_TEMP then*/
        // SubProg emit_op pc: 7703 op: CASE (186)
        case 208:
        // SubProg emit_op pc: 7705 op: STARTLINE (58)

        /** emit.e:1839			emit_opcode( DEREF_TEMP )*/
        // SubProg emit_op pc: 7707 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7709 op: PROC (27)
        _47emit_opcode(208);
        // SubProg emit_op pc: 7712 op: STARTLINE (58)

        /** emit.e:1840			emit_addr( Pop() )*/
        // SubProg emit_op pc: 7714 op: PROC (27)
        _27005 = _47Pop();
        // SubProg emit_op pc: 7717 op: PROC (27)
        _47emit_addr(_27005);
        _27005 = NOVALUE;
        // SubProg emit_op pc: 7720 op: ELSE (23)
        goto LC; // [7720] 7737
        // SubProg emit_op pc: 7722 op: STARTLINE (58)

        /** emit.e:1842		case else*/
        // SubProg emit_op pc: 7724 op: CASE (186)
        default:
        // SubProg emit_op pc: 7726 op: STARTLINE (58)

        /** emit.e:1843			InternalErr(259, {op})*/
        // SubProg emit_op pc: 7728 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _op_51307;
        _27006 = MAKE_SEQ(_1);
        // SubProg emit_op pc: 7732 op: PROC (27)
        _50InternalErr(259, _27006);
        _27006 = NOVALUE;
        // SubProg emit_op pc: 7736 op: NOPSWITCH (187)
    ;}LC: // addr: 7737 pc: 7736 sub: 51305 op: 187
    // SubProg emit_op pc: 7737 op: STARTLINE (58)

    /** emit.e:1847		previous_op = op*/
    // SubProg emit_op pc: 7739 op: ASSIGN (18)
    _36previous_op_16534 = _op_51307;
    // SubProg emit_op pc: 7742 op: INTEGER_CHECK (96)
    // SubProg emit_op pc: 7744 op: STARTLINE (58)

    /** emit.e:1848		inlined = 0*/
    // SubProg emit_op pc: 7746 op: ASSIGN (18)
    _47inlined_51285 = 0;
    // SubProg emit_op pc: 7749 op: STARTLINE (58)

    /** emit.e:1850	end procedure*/
    // SubProg emit_op pc: 7751 op: RETURNP (29)

// Exiting block BLOCK: PROC-EMIT

// block var op_51307

// block var a_51309

// block var b_51310

// block var c_51311

// block var d_51312

// block var source_51313

// block var target_51314

// block var subsym_51315

// block var lhs_var_51317

// block var ib_51318

// block var ic_51319

// block var n_51320

// block var obj_51321
    DeRef(_obj_51321);

// block var elements_51322
    DeRef(_elements_51322);

// block var element_vals_51323
    DeRef(_element_vals_51323);

// block var last_pc_backup_51324

// block var last_op_backup_51325
    DeRef(_26909);
    _26909 = NOVALUE;
    DeRef(_26959);
    _26959 = NOVALUE;
    DeRef(_26651);
    _26651 = NOVALUE;
    DeRef(_26743);
    _26743 = NOVALUE;
    DeRef(_26963);
    _26963 = NOVALUE;
    DeRef(_26889);
    _26889 = NOVALUE;
    DeRef(_26557);
    _26557 = NOVALUE;
    DeRef(_26842);
    _26842 = NOVALUE;
    DeRef(_26684);
    _26684 = NOVALUE;
    DeRef(_26613);
    _26613 = NOVALUE;
    DeRef(_26496);
    _26496 = NOVALUE;
    DeRef(_26917);
    _26917 = NOVALUE;
    _26748 = NOVALUE;
    DeRef(_26629);
    _26629 = NOVALUE;
    DeRef(_26458);
    _26458 = NOVALUE;
    DeRef(_26477);
    _26477 = NOVALUE;
    DeRef(_26591);
    _26591 = NOVALUE;
    DeRef(_26713);
    _26713 = NOVALUE;
    DeRef(_26666);
    _26666 = NOVALUE;
    DeRef(_26632);
    _26632 = NOVALUE;
    DeRef(_26893);
    _26893 = NOVALUE;
    DeRef(_26816);
    _26816 = NOVALUE;
    DeRef(_26611);
    _26611 = NOVALUE;
    DeRef(_26425);
    _26425 = NOVALUE;
    DeRef(_26531);
    _26531 = NOVALUE;
    _26746 = NOVALUE;
    DeRef(_26625);
    _26625 = NOVALUE;
    DeRef(_26421);
    _26421 = NOVALUE;
    DeRef(_26711);
    _26711 = NOVALUE;
    _26540 = NOVALUE;
    DeRef(_26729);
    _26729 = NOVALUE;
    _26494 = NOVALUE;
    DeRef(_26607);
    _26607 = NOVALUE;
    DeRef(_26597);
    _26597 = NOVALUE;
    DeRef(_26492);
    _26492 = NOVALUE;
    DeRef(_26881);
    _26881 = NOVALUE;
    DeRef(_26679);
    _26679 = NOVALUE;
    DeRef(_26525);
    _26525 = NOVALUE;
    DeRef(_26920);
    _26920 = NOVALUE;
    DeRef(_26690);
    _26690 = NOVALUE;
    _26441 = NOVALUE;
    DeRef(_26570);
    _26570 = NOVALUE;
    DeRef(_26506);
    _26506 = NOVALUE;
    DeRef(_26423);
    _26423 = NOVALUE;
    DeRef(_26731);
    _26731 = NOVALUE;
    DeRef(_26735);
    _26735 = NOVALUE;
    DeRef(_26971);
    _26971 = NOVALUE;
    DeRef(_26739);
    _26739 = NOVALUE;
    DeRef(_26419);
    _26419 = NOVALUE;
    DeRef(_26664);
    _26664 = NOVALUE;
    _26535 = NOVALUE;
    DeRef(_26823);
    _26823 = NOVALUE;
    DeRef(_26701);
    _26701 = NOVALUE;
    DeRef(_26471);
    _26471 = NOVALUE;
    DeRef(_26901);
    _26901 = NOVALUE;
    DeRef(_26468);
    _26468 = NOVALUE;
    DeRef(_26688);
    _26688 = NOVALUE;
    DeRef(_26638);
    _26638 = NOVALUE;
    DeRef(_26751);
    _26751 = NOVALUE;
    DeRef(_26461);
    _26461 = NOVALUE;
    DeRef(_26453);
    _26453 = NOVALUE;
    DeRef(_26417);
    _26417 = NOVALUE;
    DeRef(_26655);
    _26655 = NOVALUE;
    DeRef(_26670);
    _26670 = NOVALUE;
    DeRef(_26913);
    _26913 = NOVALUE;
    DeRef(_26789);
    _26789 = NOVALUE;
    DeRef(_26879);
    _26879 = NOVALUE;
    DeRef(_26708);
    _26708 = NOVALUE;
    DeRef(_26811);
    _26811 = NOVALUE;
    _26509 = NOVALUE;
    DeRef(_26830);
    _26830 = NOVALUE;
    DeRef(_26660);
    _26660 = NOVALUE;
    DeRef(_26865);
    _26865 = NOVALUE;
    DeRef(_26897);
    _26897 = NOVALUE;
    DeRef(_26538);
    _26538 = NOVALUE;
    _26511 = NOVALUE;
    DeRef(_26634);
    _26634 = NOVALUE;
    DeRef(_26835);
    _26835 = NOVALUE;
    DeRef(_26603);
    _26603 = NOVALUE;
    DeRef(_26677);
    _26677 = NOVALUE;
    DeRef(_26852);
    _26852 = NOVALUE;
    DeRef(_26848);
    _26848 = NOVALUE;
    DeRef(_26473);
    _26473 = NOVALUE;
    _26974 = NOVALUE;
    DeRef(_26905);
    _26905 = NOVALUE;
    DeRef(_26705);
    _26705 = NOVALUE;
    DeRef(_26517);
    _26517 = NOVALUE;
    return;
    // SubProg emit_op pc: 7754 op: BADRETURNF (43)
    ;
}


void _47emit_assign_op(object _op_52785)
{
// skipping _27011  name type: 0
// skipping _27010  name type: 0
// skipping _27009  name type: 0
// skipping _27008  name type: 0
// skipping _27007  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_assign_op pc: 1 op: INTEGER_CHECK (96)
    // SubProg emit_assign_op pc: 3 op: STARTLINE (58)

    /** emit.e:1854		if op = PLUS_EQUALS then*/
    // SubProg emit_assign_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 7 op: EQUALS_IFW (104)
    if (_op_52785 != 515)
    goto L1; // [7] 21
    // SubProg emit_assign_op pc: 11 op: STARTLINE (58)

    /** emit.e:1855			emit_op(PLUS)*/
    // SubProg emit_assign_op pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 15 op: PROC (27)
    _47emit_op(11);
    // SubProg emit_assign_op pc: 18 op: ELSE (23)
    goto L2; // [18] 86
    // SubProg emit_assign_op pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 52783 op: 159
    // SubProg emit_assign_op pc: 21 op: STARTLINE (58)

    /** emit.e:1856		elsif op = MINUS_EQUALS then*/
    // SubProg emit_assign_op pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 25 op: EQUALS_IFW (104)
    if (_op_52785 != 516)
    goto L3; // [25] 39
    // SubProg emit_assign_op pc: 29 op: STARTLINE (58)

    /** emit.e:1857			emit_op(MINUS)*/
    // SubProg emit_assign_op pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 33 op: PROC (27)
    _47emit_op(10);
    // SubProg emit_assign_op pc: 36 op: ELSE (23)
    goto L2; // [36] 86
    // SubProg emit_assign_op pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 52783 op: 159
    // SubProg emit_assign_op pc: 39 op: STARTLINE (58)

    /** emit.e:1858		elsif op = MULTIPLY_EQUALS then*/
    // SubProg emit_assign_op pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 43 op: EQUALS_IFW (104)
    if (_op_52785 != 517)
    goto L4; // [43] 55
    // SubProg emit_assign_op pc: 47 op: STARTLINE (58)

    /** emit.e:1859			emit_op(rw:MULTIPLY)*/
    // SubProg emit_assign_op pc: 49 op: PROC (27)
    _47emit_op(13);
    // SubProg emit_assign_op pc: 52 op: ELSE (23)
    goto L2; // [52] 86
    // SubProg emit_assign_op pc: 54 op: NOP1 (159)
L4: // addr: 55 pc: 54 sub: 52783 op: 159
    // SubProg emit_assign_op pc: 55 op: STARTLINE (58)

    /** emit.e:1860		elsif op = DIVIDE_EQUALS then*/
    // SubProg emit_assign_op pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 59 op: EQUALS_IFW (104)
    if (_op_52785 != 518)
    goto L5; // [59] 71
    // SubProg emit_assign_op pc: 63 op: STARTLINE (58)

    /** emit.e:1861			emit_op(rw:DIVIDE)*/
    // SubProg emit_assign_op pc: 65 op: PROC (27)
    _47emit_op(14);
    // SubProg emit_assign_op pc: 68 op: ELSE (23)
    goto L2; // [68] 86
    // SubProg emit_assign_op pc: 70 op: NOP1 (159)
L5: // addr: 71 pc: 70 sub: 52783 op: 159
    // SubProg emit_assign_op pc: 71 op: STARTLINE (58)

    /** emit.e:1862		elsif op = CONCAT_EQUALS then*/
    // SubProg emit_assign_op pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 75 op: EQUALS_IFW (104)
    if (_op_52785 != 519)
    goto L6; // [75] 85
    // SubProg emit_assign_op pc: 79 op: STARTLINE (58)

    /** emit.e:1863			emit_op(rw:CONCAT)*/
    // SubProg emit_assign_op pc: 81 op: PROC (27)
    _47emit_op(15);
    // SubProg emit_assign_op pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 52783 op: 159
    // SubProg emit_assign_op pc: 85 op: NOP1 (159)
L2: // addr: 86 pc: 85 sub: 52783 op: 159
    // SubProg emit_assign_op pc: 86 op: STARTLINE (58)

    /** emit.e:1865	end procedure*/
    // SubProg emit_assign_op pc: 88 op: RETURNP (29)

// Exiting block BLOCK: emit_assign_op

// block var op_52785
    return;
    // SubProg emit_assign_op pc: 91 op: BADRETURNF (43)
    ;
}


void _47StartSourceLine(object _sl_52805, object _dup_ok_52806, object _emit_coverage_52807)
{
    object _line_span_52810 = NOVALUE;
    object _27028 = NOVALUE; // 52859 27028
// skipping _27027  name type: 0
    object _27026 = NOVALUE; // 52856 27026
    object _27025 = NOVALUE; // 52854 27025
    object _27024 = NOVALUE; // 52849 27024
    object _27023 = NOVALUE; // 52847 27023
    object _27022 = NOVALUE; // 52845 27022
// skipping _27021  name type: 0
    object _27020 = NOVALUE; // 52842 27020
// skipping _27019  name type: 0
// skipping _27018  name type: 0
    object _27017 = NOVALUE; // 52834 27017
// skipping _27016  name type: 0
    object _27015 = NOVALUE; // 52830 27015
    object _27014 = NOVALUE; // 52828 27014
    object _27013 = NOVALUE; // 52817 27013
// skipping _27012  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg StartSourceLine pc: 1 op: INTEGER_CHECK (96)
    // SubProg StartSourceLine pc: 3 op: INTEGER_CHECK (96)
    // SubProg StartSourceLine pc: 5 op: INTEGER_CHECK (96)
    // SubProg StartSourceLine pc: 7 op: STARTLINE (58)

    /** emit.e:1873		if gline_number = LastLineNumber then*/
    // SubProg StartSourceLine pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 13 op: EQUALS_IFW (104)
    if (_36gline_number_16441 != _62LastLineNumber_25183)
    goto L1; // [13] 66
    // SubProg StartSourceLine pc: 17 op: STARTLINE (58)

    /** emit.e:1874			if length(LineTable) then*/
    // SubProg StartSourceLine pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_36LineTable_16525)){
            _27013 = SEQ_PTR(_36LineTable_16525)->length;
    }
    else {
        _27013 = 1;
    }
    // SubProg StartSourceLine pc: 24 op: IF (20)
    if (_27013 == 0)
    {
        _27013 = NOVALUE;
        goto L2; // [24] 55
    }
    else{
        _27013 = NOVALUE;
    }
    // SubProg StartSourceLine pc: 27 op: STARTLINE (58)

    /** emit.e:1875				if dup_ok then*/
    // SubProg StartSourceLine pc: 29 op: IF (20)
    if (_dup_ok_52806 == 0)
    {
        goto L3; // [29] 47
    }
    else{
    }
    // SubProg StartSourceLine pc: 32 op: STARTLINE (58)

    /** emit.e:1876					emit_op( STARTLINE )*/
    // SubProg StartSourceLine pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 36 op: PROC (27)
    _47emit_op(58);
    // SubProg StartSourceLine pc: 39 op: STARTLINE (58)

    /** emit.e:1877					emit_addr( gline_number )*/
    // SubProg StartSourceLine pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 43 op: PROC (27)
    _47emit_addr(_36gline_number_16441);
    // SubProg StartSourceLine pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 47 op: STARTLINE (58)

    /** emit.e:1879				return -- ignore duplicates*/
    // SubProg StartSourceLine pc: 49 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: StartSourceLine

// block var sl_52805

// block var dup_ok_52806

// block var emit_coverage_52807

// block var line_span_52810
    return;
    // SubProg StartSourceLine pc: 52 op: ELSE (23)
    goto L4; // [52] 65
    // SubProg StartSourceLine pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 55 op: STARTLINE (58)

    /** emit.e:1882				sl = FALSE -- top-level new statement to execute on same line*/
    // SubProg StartSourceLine pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 59 op: ASSIGN (18)
    _sl_52805 = _13FALSE_450;
    // SubProg StartSourceLine pc: 62 op: INTEGER_CHECK (96)
    // SubProg StartSourceLine pc: 64 op: NOP1 (159)
L4: // addr: 65 pc: 64 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 65 op: NOP1 (159)
L1: // addr: 66 pc: 65 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 66 op: STARTLINE (58)

    /** emit.e:1885		LastLineNumber = gline_number*/
    // SubProg StartSourceLine pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 70 op: ASSIGN (18)
    _62LastLineNumber_25183 = _36gline_number_16441;
    // SubProg StartSourceLine pc: 73 op: INTEGER_CHECK (96)
    // SubProg StartSourceLine pc: 75 op: STARTLINE (58)

    /** emit.e:1888		line_span = gline_number - SymTab[CurrentSub][S_FIRSTLINE]*/
    // SubProg StartSourceLine pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 83 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27014 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg StartSourceLine pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27014);
    if (!IS_ATOM_INT(_36S_FIRSTLINE_16131)){
        _27015 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FIRSTLINE_16131)->dbl));
    }
    else{
        _27015 = (object)*(((s1_ptr)_2)->base + _36S_FIRSTLINE_16131);
    }
    _27014 = NOVALUE;
    // SubProg StartSourceLine pc: 93 op: MINUS (10)
    if (IS_ATOM_INT(_27015)) {
        _line_span_52810 = _36gline_number_16441 - _27015;
    }
    else {
        _line_span_52810 = binary_op(MINUS, _36gline_number_16441, _27015);
    }
    _27015 = NOVALUE;
    // SubProg StartSourceLine pc: 97 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_line_span_52810)) {
        _1 = (object)(DBL_PTR(_line_span_52810)->dbl);
        DeRefDS(_line_span_52810);
        _line_span_52810 = _1;
    }
    // SubProg StartSourceLine pc: 99 op: STARTLINE (58)

    /** emit.e:1889		while length(LineTable) < line_span do*/
    // SubProg StartSourceLine pc: 101 op: NOP2 (110)
    // SubProg StartSourceLine pc: 103 op: NOPWHILE (158)
L5: // addr: 104 pc: 103 sub: 52803 op: 158
    // SubProg StartSourceLine pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 106 op: LENGTH (42)
    if (IS_SEQUENCE(_36LineTable_16525)){
            _27017 = SEQ_PTR(_36LineTable_16525)->length;
    }
    else {
        _27017 = 1;
    }
    // SubProg StartSourceLine pc: 109 op: LESS_IFW_I (119)
    if (_27017 >= _line_span_52810)
    goto L6; // [109] 128
    // SubProg StartSourceLine pc: 113 op: STARTLINE (58)

    /** emit.e:1890			LineTable = append(LineTable, -1) -- filler*/
    // SubProg StartSourceLine pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 117 op: APPEND (35)
    Append(&_36LineTable_16525, _36LineTable_16525, -1);
    // SubProg StartSourceLine pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg StartSourceLine pc: 123 op: STARTLINE (58)

    /** emit.e:1891		end while*/
    // SubProg StartSourceLine pc: 125 op: ENDWHILE (22)
    goto L5; // [125] 104
    // SubProg StartSourceLine pc: 127 op: NOP1 (159)
L6: // addr: 128 pc: 127 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 128 op: STARTLINE (58)

    /** emit.e:1892		LineTable = append(LineTable, length(Code))*/
    // SubProg StartSourceLine pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 134 op: LENGTH (42)
    if (IS_SEQUENCE(_36Code_16524)){
            _27020 = SEQ_PTR(_36Code_16524)->length;
    }
    else {
        _27020 = 1;
    }
    // SubProg StartSourceLine pc: 137 op: APPEND (35)
    Append(&_36LineTable_16525, _36LineTable_16525, _27020);
    _27020 = NOVALUE;
    // SubProg StartSourceLine pc: 141 op: SEQUENCE_CHECK (97)
    // SubProg StartSourceLine pc: 143 op: STARTLINE (58)

    /** emit.e:1894		if sl and (TRANSLATE or (OpTrace or OpProfileStatement)) then*/
    // SubProg StartSourceLine pc: 145 op: SC1_AND_IF (146)
    if (_sl_52805 == 0) {
        goto L7; // [145] 190
    }
    // SubProg StartSourceLine pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 151 op: SC1_OR (143)
    if (_36TRANSLATE_16061 != 0) {
        DeRef(_27023);
        _27023 = 1;
        goto L8; // [151] 171
    }
    // SubProg StartSourceLine pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 157 op: SC1_OR (143)
    if (_36OpTrace_16505 != 0) {
        _27024 = 1;
        goto L9; // [157] 167
    }
    // SubProg StartSourceLine pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 163 op: SC2_OR (144)
    _27024 = (_36OpProfileStatement_16507 != 0);
    // SubProg StartSourceLine pc: 166 op: NOP1 (159)
L9: // addr: 167 pc: 166 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 167 op: SC2_OR (144)
    DeRef(_27023);
    _27023 = (_27024 != 0);
    // SubProg StartSourceLine pc: 170 op: NOP1 (159)
L8: // addr: 171 pc: 170 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 171 op: NOP1 (159)
    // SubProg StartSourceLine pc: 172 op: IF (20)
    if (_27023 == 0)
    {
        _27023 = NOVALUE;
        goto L7; // [172] 190
    }
    else{
        _27023 = NOVALUE;
    }
    // SubProg StartSourceLine pc: 175 op: STARTLINE (58)

    /** emit.e:1896			emit_op(STARTLINE)*/
    // SubProg StartSourceLine pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 179 op: PROC (27)
    _47emit_op(58);
    // SubProg StartSourceLine pc: 182 op: STARTLINE (58)

    /** emit.e:1897			emit_addr(gline_number)*/
    // SubProg StartSourceLine pc: 184 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 186 op: PROC (27)
    _47emit_addr(_36gline_number_16441);
    // SubProg StartSourceLine pc: 189 op: NOP1 (159)
L7: // addr: 190 pc: 189 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 190 op: STARTLINE (58)

    /** emit.e:1901		if (sl and emit_coverage = COVERAGE_INCLUDE) or emit_coverage = COVERAGE_OVERRIDE then*/
    // SubProg StartSourceLine pc: 192 op: SC1_AND (141)
    if (_sl_52805 == 0) {
        _27025 = 0;
        goto LA; // [192] 206
    }
    // SubProg StartSourceLine pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 198 op: EQUALS (3)
    _27026 = (_emit_coverage_52807 == 2);
    // SubProg StartSourceLine pc: 202 op: SC2_AND (142)
    _27025 = (_27026 != 0);
    // SubProg StartSourceLine pc: 205 op: NOP1 (159)
LA: // addr: 206 pc: 205 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 206 op: SC1_OR_IF (147)
    if (_27025 != 0) {
        goto LB; // [206] 221
    }
    // SubProg StartSourceLine pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 212 op: EQUALS (3)
    _27028 = (_emit_coverage_52807 == 3);
    // SubProg StartSourceLine pc: 216 op: NOP1 (159)
    // SubProg StartSourceLine pc: 217 op: IF (20)
    if (_27028 == 0)
    {
        DeRef(_27028);
        _27028 = NOVALUE;
        goto LC; // [217] 229
    }
    else{
        DeRef(_27028);
        _27028 = NOVALUE;
    }
    // SubProg StartSourceLine pc: 220 op: NOP1 (159)
LB: // addr: 221 pc: 220 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 221 op: STARTLINE (58)

    /** emit.e:1902			include_line( gline_number )*/
    // SubProg StartSourceLine pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 225 op: PROC (27)
    _51include_line(_36gline_number_16441);
    // SubProg StartSourceLine pc: 228 op: NOP1 (159)
LC: // addr: 229 pc: 228 sub: 52803 op: 159
    // SubProg StartSourceLine pc: 229 op: STARTLINE (58)

    /** emit.e:1905	end procedure*/
    // SubProg StartSourceLine pc: 231 op: RETURNP (29)

// Exiting block BLOCK: StartSourceLine

// block var sl_52805

// block var dup_ok_52806

// block var emit_coverage_52807

// block var line_span_52810
    DeRef(_27026);
    _27026 = NOVALUE;
    return;
    // SubProg StartSourceLine pc: 234 op: BADRETURNF (43)
    ;
}


object _47has_forward_params(object _sym_52864)
{
// skipping _27035  name type: 0
    object _27034 = NOVALUE; // 52875 27034
    object _27033 = NOVALUE; // 52873 27033
    object _27032 = NOVALUE; // 52872 27032
    object _27031 = NOVALUE; // 52871 27031
    object _27030 = NOVALUE; // 52870 27030
    object _27029 = NOVALUE; // 52868 27029
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_forward_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg has_forward_params pc: 3 op: STARTLINE (58)

    /** emit.e:1908		for i = cgi - (SymTab[sym][S_NUM_ARGS]-1) to cgi do*/
    // SubProg has_forward_params pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _27029 = (object)*(((s1_ptr)_2)->base + _sym_52864);
    // SubProg has_forward_params pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27029);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _27030 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _27030 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _27029 = NOVALUE;
    // SubProg has_forward_params pc: 19 op: MINUS (10)
    if (IS_ATOM_INT(_27030)) {
        _27031 = _27030 - 1;
        if ((object)((uintptr_t)_27031 +(uintptr_t) HIGH_BITS) >= 0){
            _27031 = NewDouble((eudouble)_27031);
        }
    }
    else {
        _27031 = binary_op(MINUS, _27030, 1);
    }
    _27030 = NOVALUE;
    // SubProg has_forward_params pc: 23 op: MINUS (10)
    if (IS_ATOM_INT(_27031)) {
        _27032 = _47cgi_50385 - _27031;
        if ((object)((uintptr_t)_27032 +(uintptr_t) HIGH_BITS) >= 0){
            _27032 = NewDouble((eudouble)_27032);
        }
    }
    else {
        _27032 = binary_op(MINUS, _47cgi_50385, _27031);
    }
    DeRef(_27031);
    _27031 = NOVALUE;
    // SubProg has_forward_params pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 29 op: ASSIGN (18)
    _27033 = _47cgi_50385;
    // SubProg has_forward_params pc: 32 op: FOR (21)
    {
        object _i_52866;
        Ref(_27032);
        _i_52866 = _27032;
L1: // addr: 39 pc: 32 sub: 52862 op: 21
        if (binary_op_a(GREATER, _i_52866, _27033)){
            goto L2; // [32] 65
        }
        // SubProg has_forward_params pc: 39 op: STARTLINE (58)

        /** emit.e:1909			if cg_stack[i] < 0 then*/
        // SubProg has_forward_params pc: 41 op: GLOBAL_INIT_CHECK (109)
        // SubProg has_forward_params pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_47cg_stack_50384);
        if (!IS_ATOM_INT(_i_52866)){
            _27034 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_52866)->dbl));
        }
        else{
            _27034 = (object)*(((s1_ptr)_2)->base + _i_52866);
        }
        // SubProg has_forward_params pc: 47 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _27034, 0)){
            _27034 = NOVALUE;
            goto L3; // [47] 58
        }
        _27034 = NOVALUE;
        // SubProg has_forward_params pc: 51 op: STARTLINE (58)

        /** emit.e:1910				return 1*/
        // SubProg has_forward_params pc: 53 op: RETURNF (28)
        DeRef(_i_52866);

// Exiting block BLOCK: has_forward_params

// block var sym_52864
        DeRef(_27032);
        _27032 = NOVALUE;
        return 1;
        // SubProg has_forward_params pc: 57 op: NOP1 (159)
L3: // addr: 58 pc: 57 sub: 52862 op: 159
        // SubProg has_forward_params pc: 58 op: STARTLINE (58)

        /** emit.e:1912		end for*/
        // SubProg has_forward_params pc: 60 op: ENDFOR_INT_UP1 (54)
        _0 = _i_52866;
        if (IS_ATOM_INT(_i_52866)) {
            _i_52866 = _i_52866 + 1;
            if ((object)((uintptr_t)_i_52866 +(uintptr_t) HIGH_BITS) >= 0){
                _i_52866 = NewDouble((eudouble)_i_52866);
            }
        }
        else {
            _i_52866 = binary_op_a(PLUS, _i_52866, 1);
        }
        DeRef(_0);
        goto L1; // [60] 39
L2: // addr: 65 pc: 60 sub: 52862 op: 54
        ;
        DeRef(_i_52866);
    }
    // SubProg has_forward_params pc: 65 op: STARTLINE (58)

    /** emit.e:1913		return 0*/
    // SubProg has_forward_params pc: 67 op: RETURNF (28)

// Exiting block BLOCK: has_forward_params

// block var sym_52864
    DeRef(_27032);
    _27032 = NOVALUE;
    return 0;
    // SubProg has_forward_params pc: 71 op: BADRETURNF (43)
    ;
}



// 0x1B2225BE
