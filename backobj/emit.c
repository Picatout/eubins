// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _45Push(object _x_50626)
{
// skipping _26233  name type: 0
    object _26232 = NOVALUE; // 50631 26232
// skipping _26231  name type: 0
    object _26230 = NOVALUE; // 50629 26230
// skipping _26229  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Push pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_50626)) {
        _1 = (object)(DBL_PTR(_x_50626)->dbl);
        DeRefDS(_x_50626);
        _x_50626 = _1;
    }
    // SubProg Push pc: 3 op: STARTLINE (58)

    /** emit.e:135		cgi += 1*/
    // SubProg Push pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 7 op: PLUS1_I (117)
    _45cgi_50387 = _45cgi_50387 + 1;
    // SubProg Push pc: 11 op: STARTLINE (58)

    /** emit.e:136		if cgi > length(cg_stack) then*/
    // SubProg Push pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_45cg_stack_50386)){
            _26230 = SEQ_PTR(_45cg_stack_50386)->length;
    }
    else {
        _26230 = 1;
    }
    // SubProg Push pc: 20 op: GREATER_IFW_I (124)
    if (_45cgi_50387 <= _26230)
    goto L1; // [20] 37
    // SubProg Push pc: 24 op: STARTLINE (58)

    /** emit.e:137			cg_stack &= repeat(0, 400)*/
    // SubProg Push pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 28 op: REPEAT (32)
    _26232 = Repeat(0, 400);
    // SubProg Push pc: 32 op: CONCAT (15)
    Concat((object_ptr)&_45cg_stack_50386, _45cg_stack_50386, _26232);
    DeRefDS(_26232);
    _26232 = NOVALUE;
    // SubProg Push pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 50623 op: 159
    // SubProg Push pc: 37 op: STARTLINE (58)

    /** emit.e:139		cg_stack[cgi] = x*/
    // SubProg Push pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg Push pc: 43 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_45cg_stack_50386);
    _2 = (object)(((s1_ptr)_2)->base + _45cgi_50387);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _x_50626;
    DeRef(_1);
    // SubProg Push pc: 47 op: STARTLINE (58)

    /** emit.e:141	end procedure*/
    // SubProg Push pc: 49 op: RETURNP (29)

// Exiting block BLOCK: Push

// block var x_50626
    return;
    // SubProg Push pc: 52 op: BADRETURNF (43)
    ;
}


object _45Top()
{
    object _26234 = NOVALUE; // 50635 26234
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Top pc: 1 op: STARTLINE (58)

    /** emit.e:145		return cg_stack[cgi]*/
    // SubProg Top pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Top pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Top pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_45cg_stack_50386);
    _26234 = (object)*(((s1_ptr)_2)->base + _45cgi_50387);
    // SubProg Top pc: 11 op: RETURNF (28)
    Ref(_26234);

// Exiting block BLOCK: Top
    return _26234;
    // SubProg Top pc: 15 op: BADRETURNF (43)
    ;
}


object _45Pop()
{
    object _t_50639 = NOVALUE;
    object _s_50645 = NOVALUE;
// skipping _26247  name type: 0
    object _26246 = NOVALUE; // 50666 26246
// skipping _26245  name type: 0
    object _26244 = NOVALUE; // 50663 26244
// skipping _26243  name type: 0
    object _26242 = NOVALUE; // 50657 26242
// skipping _26241  name type: 0
// skipping _26240  name type: 0
    object _26239 = NOVALUE; // 50650 26239
    object _26238 = NOVALUE; // 50648 26238
// skipping _26237  name type: 0
// skipping _26236  name type: 0
// skipping _26235  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Pop pc: 1 op: STARTLINE (58)

    /** emit.e:153		t = cg_stack[cgi]*/
    // SubProg Pop pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_45cg_stack_50386);
    _t_50639 = (object)*(((s1_ptr)_2)->base + _45cgi_50387);
    if (!IS_ATOM_INT(_t_50639)){
        _t_50639 = (object)DBL_PTR(_t_50639)->dbl;
    }
    // SubProg Pop pc: 13 op: STARTLINE (58)

    /** emit.e:154		cgi -= 1*/
    // SubProg Pop pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 17 op: MINUS_I (116)
    _45cgi_50387 = _45cgi_50387 - 1;
    // SubProg Pop pc: 21 op: STARTLINE (58)

    /** emit.e:155		if t > 0 then*/
    // SubProg Pop pc: 23 op: GREATER_IFW (107)
    if (_t_50639 <= 0)
    goto L1; // [23] 116
    // SubProg Pop pc: 27 op: STARTLINE (58)

    /** emit.e:156			symtab_index s = t -- for type checking*/
    // SubProg Pop pc: 29 op: ASSIGN (18)
    _s_50645 = _t_50639;
    // SubProg Pop pc: 32 op: INTEGER_CHECK (96)
    // SubProg Pop pc: 34 op: STARTLINE (58)

    /** emit.e:157			if SymTab[t][S_MODE] = M_TEMP then*/
    // SubProg Pop pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26238 = (object)*(((s1_ptr)_2)->base + _t_50639);
    // SubProg Pop pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26238);
    _26239 = (object)*(((s1_ptr)_2)->base + 3);
    _26238 = NOVALUE;
    // SubProg Pop pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _26239, 3)){
        _26239 = NOVALUE;
        goto L2; // [50] 115
    }
    _26239 = NOVALUE;
    // SubProg Pop pc: 54 op: STARTLINE (58)

    /** emit.e:158				if use_private_list = 0 then  -- no problem with reusing the temp*/
    // SubProg Pop pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 58 op: EQUALS_IFW (104)
    if (_34use_private_list_15301 != 0)
    goto L3; // [58] 82
    // SubProg Pop pc: 62 op: STARTLINE (58)

    /** emit.e:159					SymTab[t][S_SCOPE] = FREE -- mark it as being free*/
    // SubProg Pop pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 66 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_t_50639 + ((s1_ptr)_2)->base);
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
    _26242 = NOVALUE;
    // SubProg Pop pc: 79 op: ELSE (23)
    goto L4; // [79] 114
    // SubProg Pop pc: 81 op: NOP1 (159)
L3: // addr: 82 pc: 81 sub: 50636 op: 159
    // SubProg Pop pc: 82 op: STARTLINE (58)

    /** emit.e:163				elsif find(t, private_sym) = 0 then*/
    // SubProg Pop pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 86 op: FIND_FROM (176)
    _26244 = find_from(_t_50639, _34private_sym_15300, 1);
    // SubProg Pop pc: 91 op: EQUALS_IFW_I (121)
    if (_26244 != 0)
    goto L5; // [91] 113
    // SubProg Pop pc: 95 op: STARTLINE (58)

    /** emit.e:165					SymTab[t][S_SCOPE] = FREE -- mark it as being free*/
    // SubProg Pop pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop pc: 99 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_t_50639 + ((s1_ptr)_2)->base);
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
    _26246 = NOVALUE;
    // SubProg Pop pc: 112 op: NOP1 (159)
L5: // addr: 113 pc: 112 sub: 50636 op: 159
    // SubProg Pop pc: 113 op: NOP1 (159)
L4: // addr: 114 pc: 113 sub: 50636 op: 159
    // SubProg Pop pc: 114 op: NOP1 (159)
L2: // addr: 115 pc: 114 sub: 50636 op: 159
    // SubProg Pop pc: 115 op: NOP1 (159)
L1: // addr: 116 pc: 115 sub: 50636 op: 159
    // SubProg Pop pc: 116 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var s_50645
    // SubProg Pop pc: 118 op: STARTLINE (58)

    /** emit.e:169		return t*/
    // SubProg Pop pc: 120 op: RETURNF (28)

// Exiting block BLOCK: Pop
    return _t_50639;
    // SubProg Pop pc: 124 op: BADRETURNF (43)
    ;
}


void _45TempKeep(object _x_50673)
{
// skipping _26254  name type: 0
    object _26253 = NOVALUE; // 50684 26253
    object _26252 = NOVALUE; // 50682 26252
    object _26251 = NOVALUE; // 50680 26251
    object _26250 = NOVALUE; // 50678 26250
    object _26249 = NOVALUE; // 50676 26249
    object _26248 = NOVALUE; // 50675 26248
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg TempKeep pc: 1 op: INTEGER_CHECK (96)
    // SubProg TempKeep pc: 3 op: STARTLINE (58)

    /** emit.e:173		if x > 0 and SymTab[x][S_MODE] = M_TEMP then*/
    // SubProg TempKeep pc: 5 op: GREATER (6)
    _26248 = (_x_50673 > 0);
    // SubProg TempKeep pc: 9 op: SC1_AND_IF (146)
    if (_26248 == 0) {
        goto L1; // [9] 53
    }
    // SubProg TempKeep pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26250 = (object)*(((s1_ptr)_2)->base + _x_50673);
    // SubProg TempKeep pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26250);
    _26251 = (object)*(((s1_ptr)_2)->base + 3);
    _26250 = NOVALUE;
    // SubProg TempKeep pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 27 op: EQUALS (3)
    if (IS_ATOM_INT(_26251)) {
        _26252 = (_26251 == 3);
    }
    else {
        _26252 = binary_op(EQUALS, _26251, 3);
    }
    _26251 = NOVALUE;
    // SubProg TempKeep pc: 31 op: NOP1 (159)
    // SubProg TempKeep pc: 32 op: IF (20)
    if (_26252 == 0) {
        DeRef(_26252);
        _26252 = NOVALUE;
        goto L1; // [32] 53
    }
    else {
        if (!IS_ATOM_INT(_26252) && DBL_PTR(_26252)->dbl == 0.0){
            DeRef(_26252);
            _26252 = NOVALUE;
            goto L1; // [32] 53
        }
        DeRef(_26252);
        _26252 = NOVALUE;
    }
    DeRef(_26252);
    _26252 = NOVALUE;
    // SubProg TempKeep pc: 35 op: STARTLINE (58)

    /** emit.e:174			SymTab[x][S_SCOPE] = IN_USE*/
    // SubProg TempKeep pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempKeep pc: 39 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50673 + ((s1_ptr)_2)->base);
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
    _26253 = NOVALUE;
    // SubProg TempKeep pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 50670 op: 159
    // SubProg TempKeep pc: 53 op: STARTLINE (58)

    /** emit.e:176	end procedure*/
    // SubProg TempKeep pc: 55 op: RETURNP (29)

// Exiting block BLOCK: TempKeep

// block var x_50673
    DeRef(_26248);
    _26248 = NOVALUE;
    return;
    // SubProg TempKeep pc: 58 op: BADRETURNF (43)
    ;
}


void _45TempFree(object _x_50691)
{
// skipping _26260  name type: 0
    object _26259 = NOVALUE; // 50702 26259
// skipping _26258  name type: 0
    object _26257 = NOVALUE; // 50698 26257
    object _26256 = NOVALUE; // 50696 26256
// skipping _26255  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg TempFree pc: 1 op: INTEGER_CHECK (96)
    // SubProg TempFree pc: 3 op: STARTLINE (58)

    /** emit.e:179		if x > 0 then*/
    // SubProg TempFree pc: 5 op: GREATER_IFW (107)
    if (_x_50691 <= 0)
    goto L1; // [5] 53
    // SubProg TempFree pc: 9 op: STARTLINE (58)

    /** emit.e:180			if SymTab[x][S_MODE] = M_TEMP then*/
    // SubProg TempFree pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26256 = (object)*(((s1_ptr)_2)->base + _x_50691);
    // SubProg TempFree pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26256);
    _26257 = (object)*(((s1_ptr)_2)->base + 3);
    _26256 = NOVALUE;
    // SubProg TempFree pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 25 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _26257, 3)){
        _26257 = NOVALUE;
        goto L2; // [25] 52
    }
    _26257 = NOVALUE;
    // SubProg TempFree pc: 29 op: STARTLINE (58)

    /** emit.e:181				SymTab[x][S_SCOPE] = FREE*/
    // SubProg TempFree pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempFree pc: 33 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50691 + ((s1_ptr)_2)->base);
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
    _26259 = NOVALUE;
    // SubProg TempFree pc: 46 op: STARTLINE (58)

    /** emit.e:182				clear_temp( x )*/
    // SubProg TempFree pc: 48 op: PROC (27)
    _45clear_temp(_x_50691);
    // SubProg TempFree pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 50688 op: 159
    // SubProg TempFree pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 50688 op: 159
    // SubProg TempFree pc: 53 op: STARTLINE (58)

    /** emit.e:185	end procedure*/
    // SubProg TempFree pc: 55 op: RETURNP (29)

// Exiting block BLOCK: TempFree

// block var x_50691
    return;
    // SubProg TempFree pc: 58 op: BADRETURNF (43)
    ;
}


void _45TempInteger(object _x_50710)
{
// skipping _26267  name type: 0
    object _26266 = NOVALUE; // 50721 26266
    object _26265 = NOVALUE; // 50719 26265
    object _26264 = NOVALUE; // 50717 26264
    object _26263 = NOVALUE; // 50715 26263
    object _26262 = NOVALUE; // 50713 26262
    object _26261 = NOVALUE; // 50712 26261
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg TempInteger pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_50710)) {
        _1 = (object)(DBL_PTR(_x_50710)->dbl);
        DeRefDS(_x_50710);
        _x_50710 = _1;
    }
    // SubProg TempInteger pc: 3 op: STARTLINE (58)

    /** emit.e:188		if x > 0 and SymTab[x][S_MODE] = M_TEMP then*/
    // SubProg TempInteger pc: 5 op: GREATER (6)
    _26261 = (_x_50710 > 0);
    // SubProg TempInteger pc: 9 op: SC1_AND_IF (146)
    if (_26261 == 0) {
        goto L1; // [9] 53
    }
    // SubProg TempInteger pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26263 = (object)*(((s1_ptr)_2)->base + _x_50710);
    // SubProg TempInteger pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26263);
    _26264 = (object)*(((s1_ptr)_2)->base + 3);
    _26263 = NOVALUE;
    // SubProg TempInteger pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 27 op: EQUALS (3)
    if (IS_ATOM_INT(_26264)) {
        _26265 = (_26264 == 3);
    }
    else {
        _26265 = binary_op(EQUALS, _26264, 3);
    }
    _26264 = NOVALUE;
    // SubProg TempInteger pc: 31 op: NOP1 (159)
    // SubProg TempInteger pc: 32 op: IF (20)
    if (_26265 == 0) {
        DeRef(_26265);
        _26265 = NOVALUE;
        goto L1; // [32] 53
    }
    else {
        if (!IS_ATOM_INT(_26265) && DBL_PTR(_26265)->dbl == 0.0){
            DeRef(_26265);
            _26265 = NOVALUE;
            goto L1; // [32] 53
        }
        DeRef(_26265);
        _26265 = NOVALUE;
    }
    DeRef(_26265);
    _26265 = NOVALUE;
    // SubProg TempInteger pc: 35 op: STARTLINE (58)

    /** emit.e:189			SymTab[x][S_USAGE] = T_INTEGER*/
    // SubProg TempInteger pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg TempInteger pc: 39 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50710 + ((s1_ptr)_2)->base);
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
    _26266 = NOVALUE;
    // SubProg TempInteger pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 50707 op: 159
    // SubProg TempInteger pc: 53 op: STARTLINE (58)

    /** emit.e:191	end procedure*/
    // SubProg TempInteger pc: 55 op: RETURNP (29)

// Exiting block BLOCK: TempInteger

// block var x_50710
    DeRef(_26261);
    _26261 = NOVALUE;
    return;
    // SubProg TempInteger pc: 58 op: BADRETURNF (43)
    ;
}


object _45LexName(object _t_50727, object _defname_50728)
{
    object _name_50730 = NOVALUE;
// skipping _26278  name type: 0
// skipping _26276  name type: 0
    object _26275 = NOVALUE; // 50741 26275
// skipping _26274  name type: 0
    object _26273 = NOVALUE; // 50738 26273
// skipping _26272  name type: 0
    object _26271 = NOVALUE; // 50736 26271
    object _26270 = NOVALUE; // 50735 26270
    object _26269 = NOVALUE; // 50733 26269
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg LexName pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t_50727)) {
        _1 = (object)(DBL_PTR(_t_50727)->dbl);
        DeRefDS(_t_50727);
        _t_50727 = _1;
    }
    // SubProg LexName pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg LexName pc: 5 op: STARTLINE (58)

    /** emit.e:197		for i = 1 to length(token_name) do*/
    // SubProg LexName pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg LexName pc: 9 op: LENGTH (42)
    // Known sequence length:
    _26269 = 80;
    // SubProg LexName pc: 12 op: FOR_I (125)
    {
        object _i_50732;
        _i_50732 = 1;
L1: // addr: 19 pc: 12 sub: 50725 op: 125
        if (_i_50732 > 80){
            goto L2; // [12] 82
        }
        // SubProg LexName pc: 19 op: STARTLINE (58)

        /** emit.e:198			if t = token_name[i][LEX_NUMBER] then*/
        // SubProg LexName pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg LexName pc: 23 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_45token_name_50394);
        _26270 = (object)*(((s1_ptr)_2)->base + _i_50732);
        // SubProg LexName pc: 27 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26270);
        _26271 = (object)*(((s1_ptr)_2)->base + 1);
        _26270 = NOVALUE;
        // SubProg LexName pc: 31 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _t_50727, _26271)){
            _26271 = NOVALUE;
            goto L3; // [31] 75
        }
        _26271 = NOVALUE;
        // SubProg LexName pc: 35 op: STARTLINE (58)

        /** emit.e:199				name = token_name[i][LEX_NAME]*/
        // SubProg LexName pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg LexName pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_45token_name_50394);
        _26273 = (object)*(((s1_ptr)_2)->base + _i_50732);
        // SubProg LexName pc: 43 op: RHS_SUBS_CHECK (92)
        DeRef(_name_50730);
        _2 = (object)SEQ_PTR(_26273);
        _name_50730 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_name_50730);
        _26273 = NOVALUE;
        // SubProg LexName pc: 47 op: SEQUENCE_CHECK (97)
        // SubProg LexName pc: 49 op: STARTLINE (58)

        /** emit.e:200				if not find(' ', name) then*/
        // SubProg LexName pc: 51 op: FIND_FROM (176)
        _26275 = find_from(32, _name_50730, 1);
        // SubProg LexName pc: 56 op: NOT_IFW (108)
        if (_26275 != 0)
        goto L4; // [56] 68
        _26275 = NOVALUE;
        // SubProg LexName pc: 59 op: STARTLINE (58)

        /** emit.e:201					name = "'" & name & "'"*/
        // SubProg LexName pc: 61 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _26277;
            concat_list[1] = _name_50730;
            concat_list[2] = _26277;
            Concat_N((object_ptr)&_name_50730, concat_list, 3);
        }
        // SubProg LexName pc: 67 op: NOP1 (159)
L4: // addr: 68 pc: 67 sub: 50725 op: 159
        // SubProg LexName pc: 68 op: STARTLINE (58)

        /** emit.e:203				return name*/
        // SubProg LexName pc: 70 op: RETURNF (28)

// Exiting block BLOCK: LexName

// block var t_50727

// block var defname_50728
        DeRefDSi(_defname_50728);
        return _name_50730;
        // SubProg LexName pc: 74 op: NOP1 (159)
L3: // addr: 75 pc: 74 sub: 50725 op: 159
        // SubProg LexName pc: 75 op: STARTLINE (58)

        /** emit.e:205		end for*/
        // SubProg LexName pc: 77 op: ENDFOR_INT_UP1 (54)
        _i_50732 = _i_50732 + 1;
        goto L1; // [77] 19
L2: // addr: 82 pc: 77 sub: 50725 op: 54
        ;
    }
    // SubProg LexName pc: 82 op: STARTLINE (58)

    /** emit.e:206		return defname -- try to avoid this case*/
    // SubProg LexName pc: 84 op: RETURNF (28)

// Exiting block BLOCK: LexName

// block var t_50727

// block var name_50730
    DeRef(_name_50730);
    return _defname_50728;
    // SubProg LexName pc: 88 op: BADRETURNF (43)
    ;
}


object _45IsInteger(object _sym_50751)
{
    object _mode_50752 = NOVALUE;
    object _t_50754 = NOVALUE;
    object _pt_50755 = NOVALUE;
// skipping _26301  name type: 0
    object _26300 = NOVALUE; // 50805 26300
    object _26299 = NOVALUE; // 50803 26299
// skipping _26298  name type: 0
    object _26297 = NOVALUE; // 50796 26297
    object _26296 = NOVALUE; // 50795 26296
    object _26295 = NOVALUE; // 50793 26295
// skipping _26294  name type: 0
    object _26293 = NOVALUE; // 50786 26293
    object _26292 = NOVALUE; // 50784 26292
    object _26291 = NOVALUE; // 50782 26291
    object _26290 = NOVALUE; // 50780 26290
// skipping _26289  name type: 0
    object _26288 = NOVALUE; // 50776 26288
// skipping _26287  name type: 0
// skipping _26286  name type: 0
// skipping _26285  name type: 0
    object _26284 = NOVALUE; // 50766 26284
// skipping _26283  name type: 0
// skipping _26282  name type: 0
    object _26281 = NOVALUE; // 50759 26281
// skipping _26280  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg IsInteger pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_50751)) {
        _1 = (object)(DBL_PTR(_sym_50751)->dbl);
        DeRefDS(_sym_50751);
        _sym_50751 = _1;
    }
    // SubProg IsInteger pc: 3 op: STARTLINE (58)

    /** emit.e:221		if sym < 1 then*/
    // SubProg IsInteger pc: 5 op: LESS_IFW (102)
    if (_sym_50751 >= 1)
    goto L1; // [5] 16
    // SubProg IsInteger pc: 9 op: STARTLINE (58)

    /** emit.e:223			return 0*/
    // SubProg IsInteger pc: 11 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50751

// block var mode_50752

// block var t_50754

// block var pt_50755
    return 0;
    // SubProg IsInteger pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 50748 op: 159
    // SubProg IsInteger pc: 16 op: STARTLINE (58)

    /** emit.e:226		mode = SymTab[sym][S_MODE]*/
    // SubProg IsInteger pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26281 = (object)*(((s1_ptr)_2)->base + _sym_50751);
    // SubProg IsInteger pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26281);
    _mode_50752 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_50752)){
        _mode_50752 = (object)DBL_PTR(_mode_50752)->dbl;
    }
    _26281 = NOVALUE;
    // SubProg IsInteger pc: 32 op: STARTLINE (58)

    /** emit.e:227		if mode = M_NORMAL then*/
    // SubProg IsInteger pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 36 op: EQUALS_IFW (104)
    if (_mode_50752 != 1)
    goto L2; // [36] 136
    // SubProg IsInteger pc: 40 op: STARTLINE (58)

    /** emit.e:228			t = SymTab[sym][S_VTYPE]*/
    // SubProg IsInteger pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26284 = (object)*(((s1_ptr)_2)->base + _sym_50751);
    // SubProg IsInteger pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 50 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26284);
    _t_50754 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_t_50754)){
        _t_50754 = (object)DBL_PTR(_t_50754)->dbl;
    }
    _26284 = NOVALUE;
    // SubProg IsInteger pc: 56 op: STARTLINE (58)

    /** emit.e:229			if t = integer_type then*/
    // SubProg IsInteger pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 60 op: EQUALS_IFW (104)
    if (_t_50754 != _53integer_type_46263)
    goto L3; // [60] 73
    // SubProg IsInteger pc: 64 op: STARTLINE (58)

    /** emit.e:230				return TRUE*/
    // SubProg IsInteger pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 68 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50751

// block var mode_50752

// block var t_50754

// block var pt_50755
    return _8TRUE_444;
    // SubProg IsInteger pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 50748 op: 159
    // SubProg IsInteger pc: 73 op: STARTLINE (58)

    /** emit.e:232			if t > 0 then*/
    // SubProg IsInteger pc: 75 op: GREATER_IFW (107)
    if (_t_50754 <= 0)
    goto L4; // [75] 215
    // SubProg IsInteger pc: 79 op: STARTLINE (58)

    /** emit.e:233				pt = SymTab[t][S_NEXT]*/
    // SubProg IsInteger pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 83 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26288 = (object)*(((s1_ptr)_2)->base + _t_50754);
    // SubProg IsInteger pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26288);
    _pt_50755 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_pt_50755)){
        _pt_50755 = (object)DBL_PTR(_pt_50755)->dbl;
    }
    _26288 = NOVALUE;
    // SubProg IsInteger pc: 95 op: STARTLINE (58)

    /** emit.e:234				if pt and SymTab[pt][S_VTYPE] = integer_type then*/
    // SubProg IsInteger pc: 97 op: SC1_AND_IF (146)
    if (_pt_50755 == 0) {
        goto L4; // [97] 215
    }
    // SubProg IsInteger pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26291 = (object)*(((s1_ptr)_2)->base + _pt_50755);
    // SubProg IsInteger pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 109 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26291);
    _26292 = (object)*(((s1_ptr)_2)->base + 15);
    _26291 = NOVALUE;
    // SubProg IsInteger pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 115 op: EQUALS (3)
    if (IS_ATOM_INT(_26292)) {
        _26293 = (_26292 == _53integer_type_46263);
    }
    else {
        _26293 = binary_op(EQUALS, _26292, _53integer_type_46263);
    }
    _26292 = NOVALUE;
    // SubProg IsInteger pc: 119 op: NOP1 (159)
    // SubProg IsInteger pc: 120 op: IF (20)
    if (_26293 == 0) {
        DeRef(_26293);
        _26293 = NOVALUE;
        goto L4; // [120] 215
    }
    else {
        if (!IS_ATOM_INT(_26293) && DBL_PTR(_26293)->dbl == 0.0){
            DeRef(_26293);
            _26293 = NOVALUE;
            goto L4; // [120] 215
        }
        DeRef(_26293);
        _26293 = NOVALUE;
    }
    DeRef(_26293);
    _26293 = NOVALUE;
    // SubProg IsInteger pc: 123 op: STARTLINE (58)

    /** emit.e:235					return TRUE   -- usertype(integer x)*/
    // SubProg IsInteger pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 127 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50751

// block var mode_50752

// block var t_50754

// block var pt_50755
    return _8TRUE_444;
    // SubProg IsInteger pc: 131 op: NOP1 (159)
    // SubProg IsInteger pc: 132 op: NOP1 (159)
    // SubProg IsInteger pc: 133 op: ELSE (23)
    goto L4; // [133] 215
    // SubProg IsInteger pc: 135 op: NOP1 (159)
L2: // addr: 136 pc: 135 sub: 50748 op: 159
    // SubProg IsInteger pc: 136 op: STARTLINE (58)

    /** emit.e:239		elsif mode = M_CONSTANT then*/
    // SubProg IsInteger pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 140 op: EQUALS_IFW (104)
    if (_mode_50752 != 2)
    goto L5; // [140] 176
    // SubProg IsInteger pc: 144 op: STARTLINE (58)

    /** emit.e:240			if integer(SymTab[sym][S_OBJ]) then  -- bug fixed: can't allow PLUS1_I op*/
    // SubProg IsInteger pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26295 = (object)*(((s1_ptr)_2)->base + _sym_50751);
    // SubProg IsInteger pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26295);
    _26296 = (object)*(((s1_ptr)_2)->base + 1);
    _26295 = NOVALUE;
    // SubProg IsInteger pc: 158 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_26296))
    _26297 = 1;
    else if (IS_ATOM_DBL(_26296))
    _26297 = IS_ATOM_INT(DoubleToInt(_26296));
    else
    _26297 = 0;
    _26296 = NOVALUE;
    // SubProg IsInteger pc: 161 op: IF (20)
    if (_26297 == 0)
    {
        _26297 = NOVALUE;
        goto L4; // [161] 215
    }
    else{
        _26297 = NOVALUE;
    }
    // SubProg IsInteger pc: 164 op: STARTLINE (58)

    /** emit.e:241				return TRUE*/
    // SubProg IsInteger pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 168 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50751

// block var mode_50752

// block var t_50754

// block var pt_50755
    return _8TRUE_444;
    // SubProg IsInteger pc: 172 op: NOP1 (159)
    // SubProg IsInteger pc: 173 op: ELSE (23)
    goto L4; // [173] 215
    // SubProg IsInteger pc: 175 op: NOP1 (159)
L5: // addr: 176 pc: 175 sub: 50748 op: 159
    // SubProg IsInteger pc: 176 op: STARTLINE (58)

    /** emit.e:244		elsif mode = M_TEMP then*/
    // SubProg IsInteger pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 180 op: EQUALS_IFW (104)
    if (_mode_50752 != 3)
    goto L6; // [180] 214
    // SubProg IsInteger pc: 184 op: STARTLINE (58)

    /** emit.e:245			if SymTab[sym][S_USAGE] = T_INTEGER then*/
    // SubProg IsInteger pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 188 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _26299 = (object)*(((s1_ptr)_2)->base + _sym_50751);
    // SubProg IsInteger pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 194 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_26299);
    _26300 = (object)*(((s1_ptr)_2)->base + 5);
    _26299 = NOVALUE;
    // SubProg IsInteger pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 200 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _26300, 1)){
        _26300 = NOVALUE;
        goto L7; // [200] 213
    }
    _26300 = NOVALUE;
    // SubProg IsInteger pc: 204 op: STARTLINE (58)

    /** emit.e:246				return TRUE*/
    // SubProg IsInteger pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 208 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50751

// block var mode_50752

// block var t_50754

// block var pt_50755
    return _8TRUE_444;
    // SubProg IsInteger pc: 212 op: NOP1 (159)
L7: // addr: 213 pc: 212 sub: 50748 op: 159
    // SubProg IsInteger pc: 213 op: NOP1 (159)
L6: // addr: 214 pc: 213 sub: 50748 op: 159
    // SubProg IsInteger pc: 214 op: NOP1 (159)
L4: // addr: 215 pc: 214 sub: 50748 op: 159
    // SubProg IsInteger pc: 215 op: STARTLINE (58)

    /** emit.e:250		return FALSE*/
    // SubProg IsInteger pc: 217 op: GLOBAL_INIT_CHECK (109)
    // SubProg IsInteger pc: 219 op: RETURNF (28)

// Exiting block BLOCK: IsInteger

// block var sym_50751

// block var mode_50752

// block var t_50754

// block var pt_50755
    return _8FALSE_442;
    // SubProg IsInteger pc: 223 op: BADRETURNF (43)
    ;
}


void _45emit(object _val_50812)
{
// skipping _26302  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_val_50812)) {
        _1 = (object)(DBL_PTR(_val_50812)->dbl);
        DeRefDS(_val_50812);
        _val_50812 = _1;
    }
    // SubProg emit pc: 3 op: STARTLINE (58)

    /** emit.e:260		Code = append(Code, val)*/
    // SubProg emit pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit pc: 7 op: APPEND (35)
    Append(&_34Code_15276, _34Code_15276, _val_50812);
    // SubProg emit pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg emit pc: 13 op: STARTLINE (58)

    /** emit.e:261	end procedure*/
    // SubProg emit pc: 15 op: RETURNP (29)

// Exiting block BLOCK: emit

// block var val_50812
    return;
    // SubProg emit pc: 18 op: BADRETURNF (43)
    ;
}


void _45emit_opnd(object _opnd_50819)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_opnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_opnd_50819)) {
        _1 = (object)(DBL_PTR(_opnd_50819)->dbl);
        DeRefDS(_opnd_50819);
        _opnd_50819 = _1;
    }
    // SubProg emit_opnd pc: 3 op: STARTLINE (58)

    /** emit.e:271			Push(opnd)*/
    // SubProg emit_opnd pc: 5 op: PROC (27)
    _45Push(_opnd_50819);
    // SubProg emit_opnd pc: 8 op: STARTLINE (58)

    /** emit.e:272			previous_op = -1  -- N.B.*/
    // SubProg emit_opnd pc: 10 op: ASSIGN (18)
    _34previous_op_15286 = -1;
    // SubProg emit_opnd pc: 13 op: INTEGER_CHECK (96)
    // SubProg emit_opnd pc: 15 op: STARTLINE (58)

    /** emit.e:273	end procedure*/
    // SubProg emit_opnd pc: 17 op: RETURNP (29)

// Exiting block BLOCK: emit_opnd

// block var opnd_50819
    return;
    // SubProg emit_opnd pc: 20 op: BADRETURNF (43)
    ;
}


void _45emit_addr(object _x_50823)
{
// skipping _26303  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_addr pc: 1 op: STARTLINE (58)

    /** emit.e:277			Code = append(Code, x)*/
    // SubProg emit_addr pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_addr pc: 5 op: APPEND (35)
    Ref(_x_50823);
    Append(&_34Code_15276, _34Code_15276, _x_50823);
    // SubProg emit_addr pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg emit_addr pc: 11 op: STARTLINE (58)

    /** emit.e:278	end procedure*/
    // SubProg emit_addr pc: 13 op: RETURNP (29)

// Exiting block BLOCK: emit_addr

// block var x_50823
    DeRef(_x_50823);
    return;
    // SubProg emit_addr pc: 16 op: BADRETURNF (43)
    ;
}


void _45emit_opcode(object _op_50829)
{
// skipping _26304  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_opcode pc: 1 op: INTEGER_CHECK (96)
    // SubProg emit_opcode pc: 3 op: STARTLINE (58)

    /** emit.e:282		Code = append(Code, op)*/
    // SubProg emit_opcode pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_opcode pc: 7 op: APPEND (35)
    Append(&_34Code_15276, _34Code_15276, _op_50829);
    // SubProg emit_opcode pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg emit_opcode pc: 13 op: STARTLINE (58)

    /** emit.e:283	end procedure*/
    // SubProg emit_opcode pc: 15 op: RETURNP (29)

// Exiting block BLOCK: emit_opcode

// block var op_50829
    return;
    // SubProg emit_opcode pc: 18 op: BADRETURNF (43)
    ;
}


void _45emit_temp(object _tempsym_50863, object _referenced_50864)
{
// skipping _26333  name type: 0
// skipping _26332  name type: 0
    object _26331 = NOVALUE; // 50887 26331
    object _26330 = NOVALUE; // 50886 26330
    object _26329 = NOVALUE; // 50885 26329
    object _26328 = NOVALUE; // 50884 26328
    object _26327 = NOVALUE; // 50883 26327
    object _26326 = NOVALUE; // 50882 26326
    object _26325 = NOVALUE; // 50881 26325
    object _26324 = NOVALUE; // 50879 26324
    object _26323 = NOVALUE; // 50877 26323
    object _26322 = NOVALUE; // 50876 26322
    object _26321 = NOVALUE; // 50874 26321
    object _26320 = NOVALUE; // 50873 26320
    object _26319 = NOVALUE; // 50872 26319
    object _26318 = NOVALUE; // 50869 26318
// skipping _26317  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_temp pc: 1 op: INTEGER_CHECK (96)
    // SubProg emit_temp pc: 3 op: STARTLINE (58)

    /** emit.e:307		if not TRANSLATE  then -- translator has its own way of handling temps*/
    // SubProg emit_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 7 op: NOT_IFW (108)
    if (_34TRANSLATE_14813 != 0)
    goto L1; // [7] 129
    // SubProg emit_temp pc: 10 op: STARTLINE (58)

    /** emit.e:308			if sequence(tempsym) then*/
    // SubProg emit_temp pc: 12 op: IS_A_SEQUENCE (68)
    _26318 = IS_SEQUENCE(_tempsym_50863);
    // SubProg emit_temp pc: 15 op: IF (20)
    if (_26318 == 0)
    {
        _26318 = NOVALUE;
        goto L2; // [15] 53
    }
    else{
        _26318 = NOVALUE;
    }
    // SubProg emit_temp pc: 18 op: STARTLINE (58)

    /** emit.e:309				for i = 1 to length(tempsym) do*/
    // SubProg emit_temp pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_tempsym_50863)){
            _26319 = SEQ_PTR(_tempsym_50863)->length;
    }
    else {
        _26319 = 1;
    }
    // SubProg emit_temp pc: 23 op: FOR_I (125)
    {
        object _i_50871;
        _i_50871 = 1;
L3: // addr: 30 pc: 23 sub: 50861 op: 125
        if (_i_50871 > _26319){
            goto L4; // [23] 50
        }
        // SubProg emit_temp pc: 30 op: STARTLINE (58)

        /** emit.e:310					emit_temp( tempsym[i], referenced )*/
        // SubProg emit_temp pc: 32 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tempsym_50863);
        _26320 = (object)*(((s1_ptr)_2)->base + _i_50871);
        // SubProg emit_temp pc: 36 op: ASSIGN (18)
        DeRef(_26321);
        _26321 = _referenced_50864;
        // SubProg emit_temp pc: 39 op: PROC (27)
        Ref(_26320);
        _45emit_temp(_26320, _26321);
        _26320 = NOVALUE;
        _26321 = NOVALUE;
        // SubProg emit_temp pc: 43 op: STARTLINE (58)

        /** emit.e:311				end for*/
        // SubProg emit_temp pc: 45 op: ENDFOR_INT_UP1 (54)
        _i_50871 = _i_50871 + 1;
        goto L3; // [45] 30
L4: // addr: 50 pc: 45 sub: 50861 op: 54
        ;
    }
    // SubProg emit_temp pc: 50 op: ELSE (23)
    goto L5; // [50] 128
    // SubProg emit_temp pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 50861 op: 159
    // SubProg emit_temp pc: 53 op: STARTLINE (58)

    /** emit.e:313			elsif tempsym > 0*/
    // SubProg emit_temp pc: 55 op: GREATER (6)
    if (IS_ATOM_INT(_tempsym_50863)) {
        _26322 = (_tempsym_50863 > 0);
    }
    else {
        _26322 = binary_op(GREATER, _tempsym_50863, 0);
    }
    // SubProg emit_temp pc: 59 op: SC1_AND (141)
    if (IS_ATOM_INT(_26322)) {
        if (_26322 == 0) {
            DeRef(_26323);
            _26323 = 0;
            goto L6; // [59] 77
        }
    }
    else {
        if (DBL_PTR(_26322)->dbl == 0.0) {
            DeRef(_26323);
            _26323 = 0;
            goto L6; // [59] 77
        }
    }
    // SubProg emit_temp pc: 63 op: PROC (27)
    Ref(_tempsym_50863);
    _26324 = _53sym_mode(_tempsym_50863);
    // SubProg emit_temp pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 69 op: EQUALS (3)
    if (IS_ATOM_INT(_26324)) {
        _26325 = (_26324 == 3);
    }
    else {
        _26325 = binary_op(EQUALS, _26324, 3);
    }
    DeRef(_26324);
    _26324 = NOVALUE;
    // SubProg emit_temp pc: 73 op: SC2_AND (142)
    DeRef(_26323);
    if (IS_ATOM_INT(_26325))
    _26323 = (_26325 != 0);
    else
    _26323 = DBL_PTR(_26325)->dbl != 0.0;
    // SubProg emit_temp pc: 76 op: NOP1 (159)
L6: // addr: 77 pc: 76 sub: 50861 op: 159
    // SubProg emit_temp pc: 77 op: SC1_AND (141)
    if (_26323 == 0) {
        _26326 = 0;
        goto L7; // [77] 92
    }
    // SubProg emit_temp pc: 81 op: PROC (27)
    Ref(_tempsym_50863);
    _26327 = _45IsInteger(_tempsym_50863);
    // SubProg emit_temp pc: 85 op: NOT (7)
    if (IS_ATOM_INT(_26327)) {
        _26328 = (_26327 == 0);
    }
    else {
        _26328 = unary_op(NOT, _26327);
    }
    DeRef(_26327);
    _26327 = NOVALUE;
    // SubProg emit_temp pc: 88 op: SC2_AND (142)
    if (IS_ATOM_INT(_26328))
    _26326 = (_26328 != 0);
    else
    _26326 = DBL_PTR(_26328)->dbl != 0.0;
    // SubProg emit_temp pc: 91 op: NOP1 (159)
L7: // addr: 92 pc: 91 sub: 50861 op: 159
    // SubProg emit_temp pc: 92 op: SC1_AND_IF (146)
    if (_26326 == 0) {
        goto L8; // [92] 127
    }
    // SubProg emit_temp pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 98 op: FIND_FROM (176)
    _26330 = find_from(_tempsym_50863, _45emitted_temps_50859, 1);
    // SubProg emit_temp pc: 103 op: NOT (7)
    _26331 = (_26330 == 0);
    _26330 = NOVALUE;
    // SubProg emit_temp pc: 106 op: NOP1 (159)
    // SubProg emit_temp pc: 107 op: IF (20)
    if (_26331 == 0)
    {
        DeRef(_26331);
        _26331 = NOVALUE;
        goto L8; // [107] 127
    }
    else{
        DeRef(_26331);
        _26331 = NOVALUE;
    }
    // SubProg emit_temp pc: 110 op: STARTLINE (58)

    /** emit.e:319				emitted_temps &= tempsym*/
    // SubProg emit_temp pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 114 op: CONCAT (15)
    if (IS_SEQUENCE(_45emitted_temps_50859) && IS_ATOM(_tempsym_50863)) {
        Ref(_tempsym_50863);
        Append(&_45emitted_temps_50859, _45emitted_temps_50859, _tempsym_50863);
    }
    else if (IS_ATOM(_45emitted_temps_50859) && IS_SEQUENCE(_tempsym_50863)) {
    }
    else {
        Concat((object_ptr)&_45emitted_temps_50859, _45emitted_temps_50859, _tempsym_50863);
    }
    // SubProg emit_temp pc: 118 op: STARTLINE (58)

    /** emit.e:320				emitted_temp_referenced &= referenced*/
    // SubProg emit_temp pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_temp pc: 122 op: CONCAT (15)
    Append(&_45emitted_temp_referenced_50860, _45emitted_temp_referenced_50860, _referenced_50864);
    // SubProg emit_temp pc: 126 op: NOP1 (159)
L8: // addr: 127 pc: 126 sub: 50861 op: 159
    // SubProg emit_temp pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 50861 op: 159
    // SubProg emit_temp pc: 128 op: NOP1 (159)
L1: // addr: 129 pc: 128 sub: 50861 op: 159
    // SubProg emit_temp pc: 129 op: STARTLINE (58)

    /** emit.e:323	end procedure*/
    // SubProg emit_temp pc: 131 op: RETURNP (29)

// Exiting block BLOCK: emit_temp

// block var tempsym_50863
    DeRef(_tempsym_50863);

// block var referenced_50864
    DeRef(_26322);
    _26322 = NOVALUE;
    DeRef(_26325);
    _26325 = NOVALUE;
    DeRef(_26328);
    _26328 = NOVALUE;
    return;
    // SubProg emit_temp pc: 134 op: BADRETURNF (43)
    ;
}


void _45flush_temps(object _except_for_50893)
{
    object _refs_50896 = NOVALUE;
    object _novalues_50897 = NOVALUE;
    object _sym_50902 = NOVALUE;
    object _26346 = NOVALUE; // 50925 26346
    object _26345 = NOVALUE; // 50923 26345
    object _26344 = NOVALUE; // 50920 26344
    object _26343 = NOVALUE; // 50918 26343
// skipping _26342  name type: 0
    object _26341 = NOVALUE; // 50913 26341
// skipping _26340  name type: 0
// skipping _26339  name type: 0
// skipping _26338  name type: 0
    object _26337 = NOVALUE; // 50907 26337
    object _26336 = NOVALUE; // 50905 26336
// skipping _26335  name type: 0
    object _26334 = NOVALUE; // 50900 26334
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg flush_temps pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 3 op: STARTLINE (58)

    /** emit.e:332		if TRANSLATE then*/
    // SubProg flush_temps pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temps pc: 7 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
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

// block var except_for_50893
    DeRefDS(_except_for_50893);

// block var refs_50896
    DeRef(_refs_50896);

// block var novalues_50897
    DeRefi(_novalues_50897);
    return;
    // SubProg flush_temps pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 50891 op: 159
    // SubProg flush_temps pc: 16 op: STARTLINE (58)

    /** emit.e:336		sequence*/
    // SubProg flush_temps pc: 18 op: STARTLINE (58)

    /** emit.e:337			refs = {},*/
    // SubProg flush_temps pc: 20 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_refs_50896);
    _refs_50896 = _21936;
    // SubProg flush_temps pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 25 op: STARTLINE (58)

    /** emit.e:338			novalues = {}*/
    // SubProg flush_temps pc: 27 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_novalues_50897);
    _novalues_50897 = _21936;
    // SubProg flush_temps pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 32 op: STARTLINE (58)

    /** emit.e:340		derefs = {}*/
    // SubProg flush_temps pc: 34 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_45derefs_50890);
    _45derefs_50890 = _21936;
    // SubProg flush_temps pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 39 op: STARTLINE (58)

    /** emit.e:341		for i = 1 to length( emitted_temps ) do*/
    // SubProg flush_temps pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temps pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_45emitted_temps_50859)){
            _26334 = SEQ_PTR(_45emitted_temps_50859)->length;
    }
    else {
        _26334 = 1;
    }
    // SubProg flush_temps pc: 46 op: FOR_I (125)
    {
        object _i_50899;
        _i_50899 = 1;
L2: // addr: 53 pc: 46 sub: 50891 op: 125
        if (_i_50899 > _26334){
            goto L3; // [46] 119
        }
        // SubProg flush_temps pc: 53 op: STARTLINE (58)

        /** emit.e:342			symtab_index sym = emitted_temps[i]*/
        // SubProg flush_temps pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_45emitted_temps_50859);
        _sym_50902 = (object)*(((s1_ptr)_2)->base + _i_50899);
        if (!IS_ATOM_INT(_sym_50902)){
            _sym_50902 = (object)DBL_PTR(_sym_50902)->dbl;
        }
        // SubProg flush_temps pc: 63 op: STARTLINE (58)

        /** emit.e:344			if find( sym, except_for ) then*/
        // SubProg flush_temps pc: 65 op: FIND_FROM (176)
        _26336 = find_from(_sym_50902, _except_for_50893, 1);
        // SubProg flush_temps pc: 70 op: IF (20)
        if (_26336 == 0)
        {
            _26336 = NOVALUE;
            goto L4; // [70] 80
        }
        else{
            _26336 = NOVALUE;
        }
        // SubProg flush_temps pc: 73 op: STARTLINE (58)

        /** emit.e:345				continue*/
        // SubProg flush_temps pc: 75 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var sym_50902
        // SubProg flush_temps pc: 77 op: ELSE (23)
        goto L5; // [77] 114
        // SubProg flush_temps pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 50891 op: 159
        // SubProg flush_temps pc: 80 op: STARTLINE (58)

        /** emit.e:348			if emitted_temp_referenced[i] = NEW_REFERENCE then*/
        // SubProg flush_temps pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 84 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45emitted_temp_referenced_50860);
        _26337 = (object)*(((s1_ptr)_2)->base + _i_50899);
        // SubProg flush_temps pc: 88 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26337, 1)){
            _26337 = NOVALUE;
            goto L6; // [88] 103
        }
        _26337 = NOVALUE;
        // SubProg flush_temps pc: 92 op: STARTLINE (58)

        /** emit.e:349				derefs &= sym*/
        // SubProg flush_temps pc: 94 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 96 op: CONCAT (15)
        Append(&_45derefs_50890, _45derefs_50890, _sym_50902);
        // SubProg flush_temps pc: 100 op: ELSE (23)
        goto L7; // [100] 110
        // SubProg flush_temps pc: 102 op: NOP1 (159)
L6: // addr: 103 pc: 102 sub: 50891 op: 159
        // SubProg flush_temps pc: 103 op: STARTLINE (58)

        /** emit.e:351				novalues &= sym*/
        // SubProg flush_temps pc: 105 op: CONCAT (15)
        Append(&_novalues_50897, _novalues_50897, _sym_50902);
        // SubProg flush_temps pc: 109 op: NOP1 (159)
L7: // addr: 110 pc: 109 sub: 50891 op: 159
        // SubProg flush_temps pc: 110 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var sym_50902
        // SubProg flush_temps pc: 112 op: STARTLINE (58)

        /** emit.e:353		end for*/
        // SubProg flush_temps pc: 114 op: ENDFOR_INT_UP1 (54)
L5: // addr: 114 pc: 114 sub: 50891 op: 54
        _i_50899 = _i_50899 + 1;
        goto L2; // [114] 53
L3: // addr: 119 pc: 114 sub: 50891 op: 54
        ;
    }
    // SubProg flush_temps pc: 119 op: STARTLINE (58)

    /** emit.e:355		if not length( except_for ) then*/
    // SubProg flush_temps pc: 121 op: LENGTH (42)
    if (IS_SEQUENCE(_except_for_50893)){
            _26341 = SEQ_PTR(_except_for_50893)->length;
    }
    else {
        _26341 = 1;
    }
    // SubProg flush_temps pc: 124 op: NOT_IFW (108)
    if (_26341 != 0)
    goto L8; // [124] 132
    _26341 = NOVALUE;
    // SubProg flush_temps pc: 127 op: STARTLINE (58)

    /** emit.e:356			clear_last()*/
    // SubProg flush_temps pc: 129 op: PROC (27)
    _45clear_last();
    // SubProg flush_temps pc: 131 op: NOP1 (159)
L8: // addr: 132 pc: 131 sub: 50891 op: 159
    // SubProg flush_temps pc: 132 op: STARTLINE (58)

    /** emit.e:359		for i = 1 to length( derefs ) do*/
    // SubProg flush_temps pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temps pc: 136 op: LENGTH (42)
    if (IS_SEQUENCE(_45derefs_50890)){
            _26343 = SEQ_PTR(_45derefs_50890)->length;
    }
    else {
        _26343 = 1;
    }
    // SubProg flush_temps pc: 139 op: FOR_I (125)
    {
        object _i_50917;
        _i_50917 = 1;
L9: // addr: 146 pc: 139 sub: 50891 op: 125
        if (_i_50917 > _26343){
            goto LA; // [139] 171
        }
        // SubProg flush_temps pc: 146 op: STARTLINE (58)

        /** emit.e:360			emit( DEREF_TEMP )*/
        // SubProg flush_temps pc: 148 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 150 op: PROC (27)
        _45emit(208);
        // SubProg flush_temps pc: 153 op: STARTLINE (58)

        /** emit.e:361			emit( derefs[i] )*/
        // SubProg flush_temps pc: 155 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45derefs_50890);
        _26344 = (object)*(((s1_ptr)_2)->base + _i_50917);
        // SubProg flush_temps pc: 161 op: PROC (27)
        _45emit(_26344);
        _26344 = NOVALUE;
        // SubProg flush_temps pc: 164 op: STARTLINE (58)

        /** emit.e:362		end for*/
        // SubProg flush_temps pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_50917 = _i_50917 + 1;
        goto L9; // [166] 146
LA: // addr: 171 pc: 166 sub: 50891 op: 54
        ;
    }
    // SubProg flush_temps pc: 171 op: STARTLINE (58)

    /** emit.e:364		for i = 1 to length( novalues ) do*/
    // SubProg flush_temps pc: 173 op: LENGTH (42)
    if (IS_SEQUENCE(_novalues_50897)){
            _26345 = SEQ_PTR(_novalues_50897)->length;
    }
    else {
        _26345 = 1;
    }
    // SubProg flush_temps pc: 176 op: FOR_I (125)
    {
        object _i_50922;
        _i_50922 = 1;
LB: // addr: 183 pc: 176 sub: 50891 op: 125
        if (_i_50922 > _26345){
            goto LC; // [176] 206
        }
        // SubProg flush_temps pc: 183 op: STARTLINE (58)

        /** emit.e:365			emit( NOVALUE_TEMP )*/
        // SubProg flush_temps pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg flush_temps pc: 187 op: PROC (27)
        _45emit(209);
        // SubProg flush_temps pc: 190 op: STARTLINE (58)

        /** emit.e:366			emit( novalues[i] )*/
        // SubProg flush_temps pc: 192 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_novalues_50897);
        _26346 = (object)*(((s1_ptr)_2)->base + _i_50922);
        // SubProg flush_temps pc: 196 op: PROC (27)
        _45emit(_26346);
        _26346 = NOVALUE;
        // SubProg flush_temps pc: 199 op: STARTLINE (58)

        /** emit.e:367		end for*/
        // SubProg flush_temps pc: 201 op: ENDFOR_INT_UP1 (54)
        _i_50922 = _i_50922 + 1;
        goto LB; // [201] 183
LC: // addr: 206 pc: 201 sub: 50891 op: 54
        ;
    }
    // SubProg flush_temps pc: 206 op: STARTLINE (58)

    /** emit.e:369		emitted_temps = {}*/
    // SubProg flush_temps pc: 208 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_45emitted_temps_50859);
    _45emitted_temps_50859 = _21936;
    // SubProg flush_temps pc: 211 op: STARTLINE (58)

    /** emit.e:370		emitted_temp_referenced = {}*/
    // SubProg flush_temps pc: 213 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_45emitted_temp_referenced_50860);
    _45emitted_temp_referenced_50860 = _21936;
    // SubProg flush_temps pc: 216 op: SEQUENCE_CHECK (97)
    // SubProg flush_temps pc: 218 op: STARTLINE (58)

    /** emit.e:371	end procedure*/
    // SubProg flush_temps pc: 220 op: RETURNP (29)

// Exiting block BLOCK: flush_temps

// block var except_for_50893
    DeRefDS(_except_for_50893);

// block var refs_50896
    DeRef(_refs_50896);

// block var novalues_50897
    DeRefi(_novalues_50897);
    return;
    // SubProg flush_temps pc: 223 op: BADRETURNF (43)
    ;
}


void _45flush_temp(object _temp_50929)
{
    object _except_for_50930 = NOVALUE;
    object _ix_50931 = NOVALUE;
    object _26348 = NOVALUE; // 50934 26348
// skipping _26347  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg flush_temp pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_temp_50929)) {
        _1 = (object)(DBL_PTR(_temp_50929)->dbl);
        DeRefDS(_temp_50929);
        _temp_50929 = _1;
    }
    // SubProg flush_temp pc: 3 op: STARTLINE (58)

    /** emit.e:374		sequence except_for = emitted_temps*/
    // SubProg flush_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temp pc: 7 op: ASSIGN (18)
    RefDS(_45emitted_temps_50859);
    DeRef(_except_for_50930);
    _except_for_50930 = _45emitted_temps_50859;
    // SubProg flush_temp pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg flush_temp pc: 12 op: STARTLINE (58)

    /** emit.e:375		integer ix = find( temp, emitted_temps )*/
    // SubProg flush_temp pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg flush_temp pc: 16 op: FIND_FROM (176)
    _ix_50931 = find_from(_temp_50929, _45emitted_temps_50859, 1);
    // SubProg flush_temp pc: 21 op: STARTLINE (58)

    /** emit.e:376		if ix then*/
    // SubProg flush_temp pc: 23 op: IF (20)
    if (_ix_50931 == 0)
    {
        goto L1; // [23] 37
    }
    else{
    }
    // SubProg flush_temp pc: 26 op: STARTLINE (58)

    /** emit.e:377			flush_temps( remove( except_for, ix ) )*/
    // SubProg flush_temp pc: 28 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_except_for_50930);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50931)) ? _ix_50931 : (object)(DBL_PTR(_ix_50931)->dbl);
        int stop = (IS_ATOM_INT(_ix_50931)) ? _ix_50931 : (object)(DBL_PTR(_ix_50931)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
            RefDS(_except_for_50930);
            DeRef(_26348);
            _26348 = _except_for_50930;
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_except_for_50930), start, &_26348 );
            }
            else Tail(SEQ_PTR(_except_for_50930), stop+1, &_26348);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_except_for_50930), start, &_26348);
        }
        else {
            assign_slice_seq = &assign_space;
            _1 = Remove_elements(start, stop, 0);
            DeRef(_26348);
            _26348 = _1;
        }
    }
    // SubProg flush_temp pc: 33 op: PROC (27)
    _45flush_temps(_26348);
    _26348 = NOVALUE;
    // SubProg flush_temp pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 50926 op: 159
    // SubProg flush_temp pc: 37 op: STARTLINE (58)

    /** emit.e:379	end procedure*/
    // SubProg flush_temp pc: 39 op: RETURNP (29)

// Exiting block BLOCK: flush_temp

// block var temp_50929

// block var except_for_50930
    DeRef(_except_for_50930);

// block var ix_50931
    return;
    // SubProg flush_temp pc: 42 op: BADRETURNF (43)
    ;
}


void _45check_for_temps()
{
    object _26355 = NOVALUE; // 50952 26355
    object _26354 = NOVALUE; // 50949 26354
    object _26353 = NOVALUE; // 50948 26353
    object _26352 = NOVALUE; // 50944 26352
// skipping _26351  name type: 0
    object _26350 = NOVALUE; // 50941 26350
    object _26349 = NOVALUE; // 50939 26349
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_temps pc: 1 op: STARTLINE (58)

    /** emit.e:382		if TRANSLATE or last_op < 1 or last_pc < 1 then*/
    // SubProg check_for_temps pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 5 op: SC1_OR (143)
    if (_34TRANSLATE_14813 != 0) {
        _26349 = 1;
        goto L1; // [5] 19
    }
    // SubProg check_for_temps pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 11 op: LESS (1)
    _26350 = (_45last_op_51268 < 1);
    // SubProg check_for_temps pc: 15 op: SC2_OR (144)
    _26349 = (_26350 != 0);
    // SubProg check_for_temps pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 50935 op: 159
    // SubProg check_for_temps pc: 19 op: SC1_OR_IF (147)
    if (_26349 != 0) {
        goto L2; // [19] 34
    }
    // SubProg check_for_temps pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 25 op: LESS (1)
    _26352 = (_45last_pc_51269 < 1);
    // SubProg check_for_temps pc: 29 op: NOP1 (159)
    // SubProg check_for_temps pc: 30 op: IF (20)
    if (_26352 == 0)
    {
        DeRef(_26352);
        _26352 = NOVALUE;
        goto L3; // [30] 40
    }
    else{
        DeRef(_26352);
        _26352 = NOVALUE;
    }
    // SubProg check_for_temps pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 50935 op: 159
    // SubProg check_for_temps pc: 34 op: STARTLINE (58)

    /** emit.e:383			return*/
    // SubProg check_for_temps pc: 36 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: check_for_temps
    DeRef(_26350);
    _26350 = NOVALUE;
    return;
    // SubProg check_for_temps pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 50935 op: 159
    // SubProg check_for_temps pc: 40 op: STARTLINE (58)

    /** emit.e:386		emit_temp( get_target_sym( current_op( last_pc ) ), op_temp_ref[last_op] )*/
    // SubProg check_for_temps pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 46 op: PROC (27)
    RefDS(_34Code_15276);
    _26353 = _65current_op(_45last_pc_51269, _34Code_15276);
    // SubProg check_for_temps pc: 51 op: PROC (27)
    _26354 = _65get_target_sym(_26353);
    _26353 = NOVALUE;
    // SubProg check_for_temps pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_for_temps pc: 59 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_45op_temp_ref_51081);
    _26355 = (object)*(((s1_ptr)_2)->base + _45last_op_51268);
    // SubProg check_for_temps pc: 63 op: PROC (27)
    _45emit_temp(_26354, _26355);
    _26354 = NOVALUE;
    _26355 = NOVALUE;
    // SubProg check_for_temps pc: 67 op: STARTLINE (58)

    /** emit.e:388	end procedure*/
    // SubProg check_for_temps pc: 69 op: RETURNP (29)

// Exiting block BLOCK: check_for_temps
    DeRef(_26350);
    _26350 = NOVALUE;
    return;
    // SubProg check_for_temps pc: 72 op: BADRETURNF (43)
    ;
}


void _45clear_temp(object _tempsym_50956)
{
    object _ix_50957 = NOVALUE;
// skipping _26358  name type: 0
// skipping _26357  name type: 0
// skipping _26356  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_temp pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tempsym_50956)) {
        _1 = (object)(DBL_PTR(_tempsym_50956)->dbl);
        DeRefDS(_tempsym_50956);
        _tempsym_50956 = _1;
    }
    // SubProg clear_temp pc: 3 op: STARTLINE (58)

    /** emit.e:391		integer ix = find( tempsym, emitted_temps )*/
    // SubProg clear_temp pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear_temp pc: 7 op: FIND_FROM (176)
    _ix_50957 = find_from(_tempsym_50956, _45emitted_temps_50859, 1);
    // SubProg clear_temp pc: 12 op: STARTLINE (58)

    /** emit.e:392		if ix then*/
    // SubProg clear_temp pc: 14 op: IF (20)
    if (_ix_50957 == 0)
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
        s1_ptr assign_space = SEQ_PTR(_45emitted_temps_50859);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50957)) ? _ix_50957 : (object)(DBL_PTR(_ix_50957)->dbl);
        int stop = (IS_ATOM_INT(_ix_50957)) ? _ix_50957 : (object)(DBL_PTR(_ix_50957)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_45emitted_temps_50859), start, &_45emitted_temps_50859 );
            }
            else Tail(SEQ_PTR(_45emitted_temps_50859), stop+1, &_45emitted_temps_50859);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_45emitted_temps_50859), start, &_45emitted_temps_50859);
        }
        else {
            assign_slice_seq = &assign_space;
            _45emitted_temps_50859 = Remove_elements(start, stop, (SEQ_PTR(_45emitted_temps_50859)->ref == 1));
        }
    }
    // SubProg clear_temp pc: 26 op: STARTLINE (58)

    /** emit.e:394			emitted_temp_referenced = remove( emitted_temp_referenced, ix )*/
    // SubProg clear_temp pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear_temp pc: 30 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_45emitted_temp_referenced_50860);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50957)) ? _ix_50957 : (object)(DBL_PTR(_ix_50957)->dbl);
        int stop = (IS_ATOM_INT(_ix_50957)) ? _ix_50957 : (object)(DBL_PTR(_ix_50957)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_45emitted_temp_referenced_50860), start, &_45emitted_temp_referenced_50860 );
            }
            else Tail(SEQ_PTR(_45emitted_temp_referenced_50860), stop+1, &_45emitted_temp_referenced_50860);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_45emitted_temp_referenced_50860), start, &_45emitted_temp_referenced_50860);
        }
        else {
            assign_slice_seq = &assign_space;
            _45emitted_temp_referenced_50860 = Remove_elements(start, stop, (SEQ_PTR(_45emitted_temp_referenced_50860)->ref == 1));
        }
    }
    // SubProg clear_temp pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 50953 op: 159
    // SubProg clear_temp pc: 36 op: STARTLINE (58)

    /** emit.e:396	end procedure*/
    // SubProg clear_temp pc: 38 op: RETURNP (29)

// Exiting block BLOCK: clear_temp

// block var tempsym_50956

// block var ix_50957
    return;
    // SubProg clear_temp pc: 41 op: BADRETURNF (43)
    ;
}


object _45pop_temps()
{
    object _new_emitted_50964 = NOVALUE;
    object _new_referenced_50965 = NOVALUE;
    object _26359 = NOVALUE; // 50966 26359
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pop_temps pc: 1 op: STARTLINE (58)

    /** emit.e:402		sequence new_emitted  = emitted_temps*/
    // SubProg pop_temps pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_temps pc: 5 op: ASSIGN (18)
    RefDS(_45emitted_temps_50859);
    DeRef(_new_emitted_50964);
    _new_emitted_50964 = _45emitted_temps_50859;
    // SubProg pop_temps pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg pop_temps pc: 10 op: STARTLINE (58)

    /** emit.e:403		sequence new_referenced = emitted_temp_referenced*/
    // SubProg pop_temps pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_temps pc: 14 op: ASSIGN (18)
    RefDS(_45emitted_temp_referenced_50860);
    DeRef(_new_referenced_50965);
    _new_referenced_50965 = _45emitted_temp_referenced_50860;
    // SubProg pop_temps pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg pop_temps pc: 19 op: STARTLINE (58)

    /** emit.e:405		emitted_temps  = {}*/
    // SubProg pop_temps pc: 21 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_45emitted_temps_50859);
    _45emitted_temps_50859 = _21936;
    // SubProg pop_temps pc: 24 op: STARTLINE (58)

    /** emit.e:406		emitted_temp_referenced = {}*/
    // SubProg pop_temps pc: 26 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_45emitted_temp_referenced_50860);
    _45emitted_temp_referenced_50860 = _21936;
    // SubProg pop_temps pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg pop_temps pc: 31 op: STARTLINE (58)

    /** emit.e:407		return { new_emitted, new_referenced }*/
    // SubProg pop_temps pc: 33 op: RIGHT_BRACE_2 (85)
    RefDS(_new_referenced_50965);
    RefDS(_new_emitted_50964);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _new_emitted_50964;
    ((intptr_t *)_2)[2] = _new_referenced_50965;
    _26359 = MAKE_SEQ(_1);
    // SubProg pop_temps pc: 37 op: RETURNF (28)

// Exiting block BLOCK: pop_temps

// block var new_emitted_50964
    DeRefDS(_new_emitted_50964);

// block var new_referenced_50965
    DeRefDS(_new_referenced_50965);
    return _26359;
    // SubProg pop_temps pc: 41 op: BADRETURNF (43)
    ;
}


object _45get_temps(object _add_to_50969)
{
    object _26364 = NOVALUE; // 50974 26364
    object _26363 = NOVALUE; // 50973 26363
    object _26362 = NOVALUE; // 50972 26362
    object _26361 = NOVALUE; // 50971 26361
// skipping _26360  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_temps pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_temps pc: 3 op: STARTLINE (58)

    /** emit.e:416		add_to[1] &= emitted_temps*/
    // SubProg get_temps pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_temps pc: 7 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_add_to_50969);
    _26361 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg get_temps pc: 11 op: CONCAT (15)
    if (IS_SEQUENCE(_26361) && IS_ATOM(_45emitted_temps_50859)) {
    }
    else if (IS_ATOM(_26361) && IS_SEQUENCE(_45emitted_temps_50859)) {
        Ref(_26361);
        Prepend(&_26362, _45emitted_temps_50859, _26361);
    }
    else {
        Concat((object_ptr)&_26362, _26361, _45emitted_temps_50859);
        _26361 = NOVALUE;
    }
    _26361 = NOVALUE;
    // SubProg get_temps pc: 15 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_add_to_50969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _add_to_50969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _26362;
    if( _1 != _26362 ){
        DeRef(_1);
    }
    _26362 = NOVALUE;
    // SubProg get_temps pc: 19 op: STARTLINE (58)

    /** emit.e:417		add_to[2] &= emitted_temp_referenced*/
    // SubProg get_temps pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_temps pc: 23 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_add_to_50969);
    _26363 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg get_temps pc: 27 op: CONCAT (15)
    if (IS_SEQUENCE(_26363) && IS_ATOM(_45emitted_temp_referenced_50860)) {
    }
    else if (IS_ATOM(_26363) && IS_SEQUENCE(_45emitted_temp_referenced_50860)) {
        Ref(_26363);
        Prepend(&_26364, _45emitted_temp_referenced_50860, _26363);
    }
    else {
        Concat((object_ptr)&_26364, _26363, _45emitted_temp_referenced_50860);
        _26363 = NOVALUE;
    }
    _26363 = NOVALUE;
    // SubProg get_temps pc: 31 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_add_to_50969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _add_to_50969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _26364;
    if( _1 != _26364 ){
        DeRef(_1);
    }
    _26364 = NOVALUE;
    // SubProg get_temps pc: 35 op: STARTLINE (58)

    /** emit.e:418		return add_to*/
    // SubProg get_temps pc: 37 op: RETURNF (28)

// Exiting block BLOCK: get_temps
    return _add_to_50969;
    // SubProg get_temps pc: 41 op: BADRETURNF (43)
    ;
}


void _45push_temps(object _temps_50977)
{
// skipping _26368  name type: 0
    object _26367 = NOVALUE; // 50980 26367
// skipping _26366  name type: 0
    object _26365 = NOVALUE; // 50978 26365
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg push_temps pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg push_temps pc: 3 op: STARTLINE (58)

    /** emit.e:426		emitted_temps &= temps[1]*/
    // SubProg push_temps pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg push_temps pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_temps_50977);
    _26365 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg push_temps pc: 11 op: CONCAT (15)
    if (IS_SEQUENCE(_45emitted_temps_50859) && IS_ATOM(_26365)) {
        Ref(_26365);
        Append(&_45emitted_temps_50859, _45emitted_temps_50859, _26365);
    }
    else if (IS_ATOM(_45emitted_temps_50859) && IS_SEQUENCE(_26365)) {
    }
    else {
        Concat((object_ptr)&_45emitted_temps_50859, _45emitted_temps_50859, _26365);
    }
    _26365 = NOVALUE;
    // SubProg push_temps pc: 15 op: STARTLINE (58)

    /** emit.e:427		emitted_temp_referenced &= temps[2]*/
    // SubProg push_temps pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg push_temps pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_temps_50977);
    _26367 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg push_temps pc: 23 op: CONCAT (15)
    if (IS_SEQUENCE(_45emitted_temp_referenced_50860) && IS_ATOM(_26367)) {
        Ref(_26367);
        Append(&_45emitted_temp_referenced_50860, _45emitted_temp_referenced_50860, _26367);
    }
    else if (IS_ATOM(_45emitted_temp_referenced_50860) && IS_SEQUENCE(_26367)) {
    }
    else {
        Concat((object_ptr)&_45emitted_temp_referenced_50860, _45emitted_temp_referenced_50860, _26367);
    }
    _26367 = NOVALUE;
    // SubProg push_temps pc: 27 op: STARTLINE (58)

    /** emit.e:428		flush_temps()*/
    // SubProg push_temps pc: 29 op: PROC (27)
    RefDS(_21936);
    _45flush_temps(_21936);
    // SubProg push_temps pc: 32 op: STARTLINE (58)

    /** emit.e:429	end procedure*/
    // SubProg push_temps pc: 34 op: RETURNP (29)

// Exiting block BLOCK: push_temps

// block var temps_50977
    DeRefDS(_temps_50977);
    return;
    // SubProg push_temps pc: 37 op: BADRETURNF (43)
    ;
}


void _45backpatch(object _index_50984, object _val_50985)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg backpatch pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_50984)) {
        _1 = (object)(DBL_PTR(_index_50984)->dbl);
        DeRefDS(_index_50984);
        _index_50984 = _1;
    }
    // SubProg backpatch pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_val_50985)) {
        _1 = (object)(DBL_PTR(_val_50985)->dbl);
        DeRefDS(_val_50985);
        _val_50985 = _1;
    }
    // SubProg backpatch pc: 5 op: STARTLINE (58)

    /** emit.e:433			Code[index] = val*/
    // SubProg backpatch pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg backpatch pc: 9 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_34Code_15276);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34Code_15276 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _index_50984);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _val_50985;
    DeRef(_1);
    // SubProg backpatch pc: 13 op: STARTLINE (58)

    /** emit.e:434	end procedure*/
    // SubProg backpatch pc: 15 op: RETURNP (29)

// Exiting block BLOCK: backpatch

// block var index_50984

// block var val_50985
    return;
    // SubProg backpatch pc: 18 op: BADRETURNF (43)
    ;
}


void _45cont11ii(object _op_51169, object _ii_51171)
{
    object _t_51172 = NOVALUE;
    object _source_51173 = NOVALUE;
    object _c_51174 = NOVALUE;
// skipping _26378  name type: 0
// skipping _26377  name type: 0
    object _26376 = NOVALUE; // 51183 26376
    object _26375 = NOVALUE; // 51182 26375
// skipping _26374  name type: 0
    object _26373 = NOVALUE; // 51180 26373
// skipping _26372  name type: 0
// skipping _26371  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cont11ii pc: 1 op: INTEGER_CHECK (96)
    // SubProg cont11ii pc: 3 op: STARTLINE (58)

    /** emit.e:580		emit_opcode(op)*/
    // SubProg cont11ii pc: 5 op: PROC (27)
    _45emit_opcode(_op_51169);
    // SubProg cont11ii pc: 8 op: STARTLINE (58)

    /** emit.e:581		source = Pop()*/
    // SubProg cont11ii pc: 10 op: PROC (27)
    _source_51173 = _45Pop();
    // SubProg cont11ii pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_source_51173)) {
        _1 = (object)(DBL_PTR(_source_51173)->dbl);
        DeRefDS(_source_51173);
        _source_51173 = _1;
    }
    // SubProg cont11ii pc: 15 op: STARTLINE (58)

    /** emit.e:582		emit_addr(source)*/
    // SubProg cont11ii pc: 17 op: PROC (27)
    _45emit_addr(_source_51173);
    // SubProg cont11ii pc: 20 op: STARTLINE (58)

    /** emit.e:583		assignable = TRUE*/
    // SubProg cont11ii pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont11ii pc: 24 op: ASSIGN (18)
    _45assignable_50389 = _8TRUE_444;
    // SubProg cont11ii pc: 27 op: STARTLINE (58)

    /** emit.e:584		t = op_result[op]*/
    // SubProg cont11ii pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont11ii pc: 31 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_45op_result_50987);
    _t_51172 = (object)*(((s1_ptr)_2)->base + _op_51169);
    // SubProg cont11ii pc: 35 op: STARTLINE (58)

    /** emit.e:587		if t = T_INTEGER or (ii and IsInteger(source)) then*/
    // SubProg cont11ii pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont11ii pc: 39 op: EQUALS (3)
    _26373 = (_t_51172 == 1);
    // SubProg cont11ii pc: 43 op: SC1_OR_IF (147)
    if (_26373 != 0) {
        goto L1; // [43] 64
    }
    // SubProg cont11ii pc: 47 op: SC1_AND (141)
    if (_ii_51171 == 0) {
        _26375 = 0;
        goto L2; // [47] 59
    }
    // SubProg cont11ii pc: 51 op: PROC (27)
    _26376 = _45IsInteger(_source_51173);
    // SubProg cont11ii pc: 55 op: SC2_AND (142)
    if (IS_ATOM_INT(_26376))
    _26375 = (_26376 != 0);
    else
    _26375 = DBL_PTR(_26376)->dbl != 0.0;
    // SubProg cont11ii pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 51167 op: 159
    // SubProg cont11ii pc: 59 op: NOP1 (159)
    // SubProg cont11ii pc: 60 op: IF (20)
    if (_26375 == 0)
    {
        _26375 = NOVALUE;
        goto L3; // [60] 80
    }
    else{
        _26375 = NOVALUE;
    }
    // SubProg cont11ii pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 51167 op: 159
    // SubProg cont11ii pc: 64 op: STARTLINE (58)

    /** emit.e:588			c = NewTempSym()*/
    // SubProg cont11ii pc: 66 op: PROC (27)
    _c_51174 = _53NewTempSym(0);
    // SubProg cont11ii pc: 70 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51174)) {
        _1 = (object)(DBL_PTR(_c_51174)->dbl);
        DeRefDS(_c_51174);
        _c_51174 = _1;
    }
    // SubProg cont11ii pc: 72 op: STARTLINE (58)

    /** emit.e:589			TempInteger(c)*/
    // SubProg cont11ii pc: 74 op: PROC (27)
    _45TempInteger(_c_51174);
    // SubProg cont11ii pc: 77 op: ELSE (23)
    goto L4; // [77] 95
    // SubProg cont11ii pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 51167 op: 159
    // SubProg cont11ii pc: 80 op: STARTLINE (58)

    /** emit.e:591			c = NewTempSym() -- allocate *after* checking opnd type*/
    // SubProg cont11ii pc: 82 op: PROC (27)
    _c_51174 = _53NewTempSym(0);
    // SubProg cont11ii pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51174)) {
        _1 = (object)(DBL_PTR(_c_51174)->dbl);
        DeRefDS(_c_51174);
        _c_51174 = _1;
    }
    // SubProg cont11ii pc: 88 op: STARTLINE (58)

    /** emit.e:592			emit_temp( c, NEW_REFERENCE )*/
    // SubProg cont11ii pc: 90 op: PROC (27)
    _45emit_temp(_c_51174, 1);
    // SubProg cont11ii pc: 94 op: NOP1 (159)
L4: // addr: 95 pc: 94 sub: 51167 op: 159
    // SubProg cont11ii pc: 95 op: STARTLINE (58)

    /** emit.e:595		Push(c)*/
    // SubProg cont11ii pc: 97 op: PRIVATE_INIT_CHECK (30)
    // SubProg cont11ii pc: 99 op: PROC (27)
    _45Push(_c_51174);
    // SubProg cont11ii pc: 102 op: STARTLINE (58)

    /** emit.e:596		emit_addr(c)*/
    // SubProg cont11ii pc: 104 op: PROC (27)
    _45emit_addr(_c_51174);
    // SubProg cont11ii pc: 107 op: STARTLINE (58)

    /** emit.e:597	end procedure*/
    // SubProg cont11ii pc: 109 op: RETURNP (29)

// Exiting block BLOCK: cont11ii

// block var op_51169

// block var ii_51171

// block var t_51172

// block var source_51173

// block var c_51174
    DeRef(_26376);
    _26376 = NOVALUE;
    DeRef(_26373);
    _26373 = NOVALUE;
    return;
    // SubProg cont11ii pc: 112 op: BADRETURNF (43)
    ;
}


void _45cont21d(object _op_51191, object _a_51192, object _b_51193, object _ii_51195)
{
    object _c_51196 = NOVALUE;
    object _t_51197 = NOVALUE;
// skipping _26388  name type: 0
// skipping _26387  name type: 0
    object _26386 = NOVALUE; // 51211 26386
    object _26385 = NOVALUE; // 51210 26385
    object _26384 = NOVALUE; // 51209 26384
    object _26383 = NOVALUE; // 51208 26383
// skipping _26382  name type: 0
    object _26381 = NOVALUE; // 51206 26381
// skipping _26380  name type: 0
// skipping _26379  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cont21d pc: 1 op: INTEGER_CHECK (96)
    // SubProg cont21d pc: 3 op: INTEGER_CHECK (96)
    // SubProg cont21d pc: 5 op: INTEGER_CHECK (96)
    // SubProg cont21d pc: 7 op: STARTLINE (58)

    /** emit.e:602		assignable = TRUE*/
    // SubProg cont21d pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 11 op: ASSIGN (18)
    _45assignable_50389 = _8TRUE_444;
    // SubProg cont21d pc: 14 op: STARTLINE (58)

    /** emit.e:603		t = op_result[op]*/
    // SubProg cont21d pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 18 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_45op_result_50987);
    _t_51197 = (object)*(((s1_ptr)_2)->base + _op_51191);
    // SubProg cont21d pc: 22 op: STARTLINE (58)

    /** emit.e:604		if op = C_FUNC then*/
    // SubProg cont21d pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 26 op: EQUALS_IFW (104)
    if (_op_51191 != 133)
    goto L1; // [26] 38
    // SubProg cont21d pc: 30 op: STARTLINE (58)

    /** emit.e:605			emit_addr(CurrentSub)*/
    // SubProg cont21d pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 34 op: PROC (27)
    _45emit_addr(_34CurrentSub_15196);
    // SubProg cont21d pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 51189 op: 159
    // SubProg cont21d pc: 38 op: STARTLINE (58)

    /** emit.e:607		if t = T_INTEGER or (ii and IsInteger(a) and IsInteger(b)) then*/
    // SubProg cont21d pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg cont21d pc: 42 op: EQUALS (3)
    _26381 = (_t_51197 == 1);
    // SubProg cont21d pc: 46 op: SC1_OR_IF (147)
    if (_26381 != 0) {
        goto L2; // [46] 79
    }
    // SubProg cont21d pc: 50 op: SC1_AND (141)
    if (_ii_51195 == 0) {
        _26383 = 0;
        goto L3; // [50] 62
    }
    // SubProg cont21d pc: 54 op: PROC (27)
    _26384 = _45IsInteger(_a_51192);
    // SubProg cont21d pc: 58 op: SC2_AND (142)
    if (IS_ATOM_INT(_26384))
    _26383 = (_26384 != 0);
    else
    _26383 = DBL_PTR(_26384)->dbl != 0.0;
    // SubProg cont21d pc: 61 op: NOP1 (159)
L3: // addr: 62 pc: 61 sub: 51189 op: 159
    // SubProg cont21d pc: 62 op: SC1_AND (141)
    if (_26383 == 0) {
        DeRef(_26385);
        _26385 = 0;
        goto L4; // [62] 74
    }
    // SubProg cont21d pc: 66 op: PROC (27)
    _26386 = _45IsInteger(_b_51193);
    // SubProg cont21d pc: 70 op: SC2_AND (142)
    if (IS_ATOM_INT(_26386))
    _26385 = (_26386 != 0);
    else
    _26385 = DBL_PTR(_26386)->dbl != 0.0;
    // SubProg cont21d pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 51189 op: 159
    // SubProg cont21d pc: 74 op: NOP1 (159)
    // SubProg cont21d pc: 75 op: IF (20)
    if (_26385 == 0)
    {
        _26385 = NOVALUE;
        goto L5; // [75] 95
    }
    else{
        _26385 = NOVALUE;
    }
    // SubProg cont21d pc: 78 op: NOP1 (159)
L2: // addr: 79 pc: 78 sub: 51189 op: 159
    // SubProg cont21d pc: 79 op: STARTLINE (58)

    /** emit.e:608			c = NewTempSym()*/
    // SubProg cont21d pc: 81 op: PROC (27)
    _c_51196 = _53NewTempSym(0);
    // SubProg cont21d pc: 85 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51196)) {
        _1 = (object)(DBL_PTR(_c_51196)->dbl);
        DeRefDS(_c_51196);
        _c_51196 = _1;
    }
    // SubProg cont21d pc: 87 op: STARTLINE (58)

    /** emit.e:609			TempInteger(c)*/
    // SubProg cont21d pc: 89 op: PROC (27)
    _45TempInteger(_c_51196);
    // SubProg cont21d pc: 92 op: ELSE (23)
    goto L6; // [92] 110
    // SubProg cont21d pc: 94 op: NOP1 (159)
L5: // addr: 95 pc: 94 sub: 51189 op: 159
    // SubProg cont21d pc: 95 op: STARTLINE (58)

    /** emit.e:611			c = NewTempSym() -- allocate *after* checking opnd types*/
    // SubProg cont21d pc: 97 op: PROC (27)
    _c_51196 = _53NewTempSym(0);
    // SubProg cont21d pc: 101 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_51196)) {
        _1 = (object)(DBL_PTR(_c_51196)->dbl);
        DeRefDS(_c_51196);
        _c_51196 = _1;
    }
    // SubProg cont21d pc: 103 op: STARTLINE (58)

    /** emit.e:612			emit_temp( c, NEW_REFERENCE )*/
    // SubProg cont21d pc: 105 op: PROC (27)
    _45emit_temp(_c_51196, 1);
    // SubProg cont21d pc: 109 op: NOP1 (159)
L6: // addr: 110 pc: 109 sub: 51189 op: 159
    // SubProg cont21d pc: 110 op: STARTLINE (58)

    /** emit.e:614		Push(c)*/
    // SubProg cont21d pc: 112 op: PRIVATE_INIT_CHECK (30)
    // SubProg cont21d pc: 114 op: PROC (27)
    _45Push(_c_51196);
    // SubProg cont21d pc: 117 op: STARTLINE (58)

    /** emit.e:615		emit_addr(c)*/
    // SubProg cont21d pc: 119 op: PROC (27)
    _45emit_addr(_c_51196);
    // SubProg cont21d pc: 122 op: STARTLINE (58)

    /** emit.e:616	end procedure*/
    // SubProg cont21d pc: 124 op: RETURNP (29)

// Exiting block BLOCK: cont21d

// block var op_51191

// block var a_51192

// block var b_51193

// block var ii_51195

// block var c_51196

// block var t_51197
    DeRef(_26381);
    _26381 = NOVALUE;
    DeRef(_26386);
    _26386 = NOVALUE;
    DeRef(_26384);
    _26384 = NOVALUE;
    return;
    // SubProg cont21d pc: 127 op: BADRETURNF (43)
    ;
}


void _45cont21ii(object _op_51219, object _ii_51221)
{
    object _a_51222 = NOVALUE;
    object _b_51223 = NOVALUE;
// skipping _26390  name type: 0
// skipping _26389  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cont21ii pc: 1 op: INTEGER_CHECK (96)
    // SubProg cont21ii pc: 3 op: STARTLINE (58)

    /** emit.e:621		b = Pop()*/
    // SubProg cont21ii pc: 5 op: PROC (27)
    _b_51223 = _45Pop();
    // SubProg cont21ii pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_b_51223)) {
        _1 = (object)(DBL_PTR(_b_51223)->dbl);
        DeRefDS(_b_51223);
        _b_51223 = _1;
    }
    // SubProg cont21ii pc: 10 op: STARTLINE (58)

    /** emit.e:622		emit_opcode(op)*/
    // SubProg cont21ii pc: 12 op: PROC (27)
    _45emit_opcode(_op_51219);
    // SubProg cont21ii pc: 15 op: STARTLINE (58)

    /** emit.e:623		a = Pop()*/
    // SubProg cont21ii pc: 17 op: PROC (27)
    _a_51222 = _45Pop();
    // SubProg cont21ii pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_a_51222)) {
        _1 = (object)(DBL_PTR(_a_51222)->dbl);
        DeRefDS(_a_51222);
        _a_51222 = _1;
    }
    // SubProg cont21ii pc: 22 op: STARTLINE (58)

    /** emit.e:624		emit_addr(a)*/
    // SubProg cont21ii pc: 24 op: PROC (27)
    _45emit_addr(_a_51222);
    // SubProg cont21ii pc: 27 op: STARTLINE (58)

    /** emit.e:625		emit_addr(b)*/
    // SubProg cont21ii pc: 29 op: PROC (27)
    _45emit_addr(_b_51223);
    // SubProg cont21ii pc: 32 op: STARTLINE (58)

    /** emit.e:626		cont21d(op, a, b, ii)*/
    // SubProg cont21ii pc: 34 op: PROC (27)
    _45cont21d(_op_51219, _a_51222, _b_51223, _ii_51221);
    // SubProg cont21ii pc: 40 op: STARTLINE (58)

    /** emit.e:627	end procedure*/
    // SubProg cont21ii pc: 42 op: RETURNP (29)

// Exiting block BLOCK: cont21ii

// block var op_51219

// block var ii_51221

// block var a_51222

// block var b_51223
    return;
    // SubProg cont21ii pc: 45 op: BADRETURNF (43)
    ;
}


object _45good_string(object _elements_51228)
{
    object _obj_51229 = NOVALUE;
    object _ep_51231 = NOVALUE;
    object _e_51233 = NOVALUE;
    object _element_vals_51234 = NOVALUE;
// skipping _26410  name type: 0
    object _26409 = NOVALUE; // 51265 26409
    object _26408 = NOVALUE; // 51264 26408
    object _26407 = NOVALUE; // 51263 26407
    object _26406 = NOVALUE; // 51262 26406
    object _26405 = NOVALUE; // 51261 26405
    object _26404 = NOVALUE; // 51259 26404
    object _26403 = NOVALUE; // 51258 26403
    object _26402 = NOVALUE; // 51257 26402
    object _26401 = NOVALUE; // 51256 26401
    object _26400 = NOVALUE; // 51254 26400
    object _26399 = NOVALUE; // 51252 26399
// skipping _26398  name type: 0
    object _26397 = NOVALUE; // 51247 26397
// skipping _26396  name type: 0
// skipping _26395  name type: 0
    object _26394 = NOVALUE; // 51242 26394
    object _26393 = NOVALUE; // 51239 26393
    object _26392 = NOVALUE; // 51238 26392
    object _26391 = NOVALUE; // 51237 26391
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg good_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg good_string pc: 3 op: STARTLINE (58)

    /** emit.e:634		sequence element_vals*/
    // SubProg good_string pc: 5 op: STARTLINE (58)

    /** emit.e:636		if TRANSLATE and length(elements) > 10000 then*/
    // SubProg good_string pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg good_string pc: 9 op: SC1_AND_IF (146)
    if (_34TRANSLATE_14813 == 0) {
        goto L1; // [9] 31
    }
    // SubProg good_string pc: 13 op: LENGTH (42)
    if (IS_SEQUENCE(_elements_51228)){
            _26392 = SEQ_PTR(_elements_51228)->length;
    }
    else {
        _26392 = 1;
    }
    // SubProg good_string pc: 16 op: GREATER (6)
    _26393 = (_26392 > 10000);
    _26392 = NOVALUE;
    // SubProg good_string pc: 20 op: NOP1 (159)
    // SubProg good_string pc: 21 op: IF (20)
    if (_26393 == 0)
    {
        DeRef(_26393);
        _26393 = NOVALUE;
        goto L1; // [21] 31
    }
    else{
        DeRef(_26393);
        _26393 = NOVALUE;
    }
    // SubProg good_string pc: 24 op: STARTLINE (58)

    /** emit.e:637			return -1 -- A huge string might upset the C compiler.*/
    // SubProg good_string pc: 26 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51228
    DeRefDS(_elements_51228);

// block var obj_51229
    DeRef(_obj_51229);

// block var ep_51231

// block var e_51233

// block var element_vals_51234
    DeRef(_element_vals_51234);
    return -1;
    // SubProg good_string pc: 30 op: NOP1 (159)
L1: // addr: 31 pc: 30 sub: 51226 op: 159
    // SubProg good_string pc: 31 op: STARTLINE (58)

    /** emit.e:639		element_vals = {}*/
    // SubProg good_string pc: 33 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_element_vals_51234);
    _element_vals_51234 = _21936;
    // SubProg good_string pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg good_string pc: 38 op: STARTLINE (58)

    /** emit.e:640		for i = 1 to length(elements) do*/
    // SubProg good_string pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_elements_51228)){
            _26394 = SEQ_PTR(_elements_51228)->length;
    }
    else {
        _26394 = 1;
    }
    // SubProg good_string pc: 43 op: FOR_I (125)
    {
        object _i_51241;
        _i_51241 = 1;
L2: // addr: 50 pc: 43 sub: 51226 op: 125
        if (_i_51241 > _26394){
            goto L3; // [43] 183
        }
        // SubProg good_string pc: 50 op: STARTLINE (58)

        /** emit.e:641			ep = elements[i]*/
        // SubProg good_string pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_elements_51228);
        _ep_51231 = (object)*(((s1_ptr)_2)->base + _i_51241);
        if (!IS_ATOM_INT(_ep_51231)){
            _ep_51231 = (object)DBL_PTR(_ep_51231)->dbl;
        }
        // SubProg good_string pc: 58 op: STARTLINE (58)

        /** emit.e:642			if ep < 1 then*/
        // SubProg good_string pc: 60 op: LESS_IFW (102)
        if (_ep_51231 >= 1)
        goto L4; // [60] 71
        // SubProg good_string pc: 64 op: STARTLINE (58)

        /** emit.e:644				return -1*/
        // SubProg good_string pc: 66 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51228
        DeRefDS(_elements_51228);

// block var obj_51229
        DeRef(_obj_51229);

// block var ep_51231

// block var e_51233

// block var element_vals_51234
        DeRef(_element_vals_51234);
        return -1;
        // SubProg good_string pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 51226 op: 159
        // SubProg good_string pc: 71 op: STARTLINE (58)

        /** emit.e:646			e = ep*/
        // SubProg good_string pc: 73 op: ASSIGN (18)
        _e_51233 = _ep_51231;
        // SubProg good_string pc: 76 op: INTEGER_CHECK (96)
        // SubProg good_string pc: 78 op: STARTLINE (58)

        /** emit.e:647			obj = SymTab[e][S_OBJ]*/
        // SubProg good_string pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26397 = (object)*(((s1_ptr)_2)->base + _e_51233);
        // SubProg good_string pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 88 op: RHS_SUBS_CHECK (92)
        DeRef(_obj_51229);
        _2 = (object)SEQ_PTR(_26397);
        _obj_51229 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_obj_51229);
        _26397 = NOVALUE;
        // SubProg good_string pc: 92 op: STARTLINE (58)

        /** emit.e:648			if SymTab[e][S_MODE] = M_CONSTANT and*/
        // SubProg good_string pc: 94 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 96 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26399 = (object)*(((s1_ptr)_2)->base + _e_51233);
        // SubProg good_string pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 102 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26399);
        _26400 = (object)*(((s1_ptr)_2)->base + 3);
        _26399 = NOVALUE;
        // SubProg good_string pc: 106 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 108 op: EQUALS (3)
        if (IS_ATOM_INT(_26400)) {
            _26401 = (_26400 == 2);
        }
        else {
            _26401 = binary_op(EQUALS, _26400, 2);
        }
        _26400 = NOVALUE;
        // SubProg good_string pc: 112 op: SC1_AND (141)
        if (IS_ATOM_INT(_26401)) {
            if (_26401 == 0) {
                DeRef(_26402);
                _26402 = 0;
                goto L5; // [112] 123
            }
        }
        else {
            if (DBL_PTR(_26401)->dbl == 0.0) {
                DeRef(_26402);
                _26402 = 0;
                goto L5; // [112] 123
            }
        }
        // SubProg good_string pc: 116 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_obj_51229))
        _26403 = 1;
        else if (IS_ATOM_DBL(_obj_51229))
        _26403 = IS_ATOM_INT(DoubleToInt(_obj_51229));
        else
        _26403 = 0;
        // SubProg good_string pc: 119 op: SC2_AND (142)
        DeRef(_26402);
        _26402 = (_26403 != 0);
        // SubProg good_string pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 51226 op: 159
        // SubProg good_string pc: 123 op: SC1_AND_IF (146)
        if (_26402 == 0) {
            goto L6; // [123] 169
        }
        // SubProg good_string pc: 127 op: GLOBAL_INIT_CHECK (109)
        // SubProg good_string pc: 129 op: NOT (7)
        _26405 = (_34TRANSLATE_14813 == 0);
        // SubProg good_string pc: 132 op: SC1_OR (143)
        if (_26405 != 0) {
            DeRef(_26406);
            _26406 = 1;
            goto L7; // [132] 156
        }
        // SubProg good_string pc: 136 op: GREATEREQ (2)
        if (IS_ATOM_INT(_obj_51229)) {
            _26407 = (_obj_51229 >= 1);
        }
        else {
            _26407 = binary_op(GREATEREQ, _obj_51229, 1);
        }
        // SubProg good_string pc: 140 op: SC1_AND (141)
        if (IS_ATOM_INT(_26407)) {
            if (_26407 == 0) {
                DeRef(_26408);
                _26408 = 0;
                goto L8; // [140] 152
            }
        }
        else {
            if (DBL_PTR(_26407)->dbl == 0.0) {
                DeRef(_26408);
                _26408 = 0;
                goto L8; // [140] 152
            }
        }
        // SubProg good_string pc: 144 op: LESSEQ (5)
        if (IS_ATOM_INT(_obj_51229)) {
            _26409 = (_obj_51229 <= 255);
        }
        else {
            _26409 = binary_op(LESSEQ, _obj_51229, 255);
        }
        // SubProg good_string pc: 148 op: SC2_AND (142)
        DeRef(_26408);
        if (IS_ATOM_INT(_26409))
        _26408 = (_26409 != 0);
        else
        _26408 = DBL_PTR(_26409)->dbl != 0.0;
        // SubProg good_string pc: 151 op: NOP1 (159)
L8: // addr: 152 pc: 151 sub: 51226 op: 159
        // SubProg good_string pc: 152 op: SC2_OR (144)
        DeRef(_26406);
        _26406 = (_26408 != 0);
        // SubProg good_string pc: 155 op: NOP1 (159)
L7: // addr: 156 pc: 155 sub: 51226 op: 159
        // SubProg good_string pc: 156 op: NOP1 (159)
        // SubProg good_string pc: 157 op: IF (20)
        if (_26406 == 0)
        {
            _26406 = NOVALUE;
            goto L6; // [157] 169
        }
        else{
            _26406 = NOVALUE;
        }
        // SubProg good_string pc: 160 op: STARTLINE (58)

        /** emit.e:653				element_vals = prepend(element_vals, obj)*/
        // SubProg good_string pc: 162 op: PREPEND (57)
        Ref(_obj_51229);
        Prepend(&_element_vals_51234, _element_vals_51234, _obj_51229);
        // SubProg good_string pc: 166 op: ELSE (23)
        goto L9; // [166] 176
        // SubProg good_string pc: 168 op: NOP1 (159)
L6: // addr: 169 pc: 168 sub: 51226 op: 159
        // SubProg good_string pc: 169 op: STARTLINE (58)

        /** emit.e:655				return -1*/
        // SubProg good_string pc: 171 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51228
        DeRefDS(_elements_51228);

// block var obj_51229
        DeRef(_obj_51229);

// block var ep_51231

// block var e_51233

// block var element_vals_51234
        DeRef(_element_vals_51234);
        DeRef(_26407);
        _26407 = NOVALUE;
        DeRef(_26401);
        _26401 = NOVALUE;
        DeRef(_26409);
        _26409 = NOVALUE;
        DeRef(_26405);
        _26405 = NOVALUE;
        return -1;
        // SubProg good_string pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 51226 op: 159
        // SubProg good_string pc: 176 op: STARTLINE (58)

        /** emit.e:657		end for*/
        // SubProg good_string pc: 178 op: ENDFOR_INT_UP1 (54)
        _i_51241 = _i_51241 + 1;
        goto L2; // [178] 50
L3: // addr: 183 pc: 178 sub: 51226 op: 54
        ;
    }
    // SubProg good_string pc: 183 op: STARTLINE (58)

    /** emit.e:658		return element_vals*/
    // SubProg good_string pc: 185 op: RETURNF (28)

// Exiting block BLOCK: good_string

// block var elements_51228
    DeRefDS(_elements_51228);

// block var obj_51229
    DeRef(_obj_51229);

// block var ep_51231

// block var e_51233
    DeRef(_26407);
    _26407 = NOVALUE;
    DeRef(_26401);
    _26401 = NOVALUE;
    DeRef(_26409);
    _26409 = NOVALUE;
    DeRef(_26405);
    _26405 = NOVALUE;
    return _element_vals_51234;
    // SubProg good_string pc: 189 op: BADRETURNF (43)
    ;
}


object _45Last_op()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Last_op pc: 1 op: STARTLINE (58)

    /** emit.e:664		return last_op*/
    // SubProg Last_op pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Last_op pc: 5 op: RETURNF (28)

// Exiting block BLOCK: Last_op
    return _45last_op_51268;
    // SubProg Last_op pc: 9 op: BADRETURNF (43)
    ;
}


object _45Last_pc()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Last_pc pc: 1 op: STARTLINE (58)

    /** emit.e:668		return last_pc*/
    // SubProg Last_pc pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Last_pc pc: 5 op: RETURNF (28)

// Exiting block BLOCK: Last_pc
    return _45last_pc_51269;
    // SubProg Last_pc pc: 9 op: BADRETURNF (43)
    ;
}


void _45move_last_pc(object _amount_51276)
{
// skipping _26412  name type: 0
// skipping _26411  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg move_last_pc pc: 1 op: INTEGER_CHECK (96)
    // SubProg move_last_pc pc: 3 op: STARTLINE (58)

    /** emit.e:672		if last_pc > 0 then*/
    // SubProg move_last_pc pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg move_last_pc pc: 7 op: GREATER_IFW_I (124)
    if (_45last_pc_51269 <= 0)
    goto L1; // [7] 20
    // SubProg move_last_pc pc: 11 op: STARTLINE (58)

    /** emit.e:673			last_pc += amount*/
    // SubProg move_last_pc pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg move_last_pc pc: 15 op: PLUS_I (115)
    _45last_pc_51269 = _45last_pc_51269 + _amount_51276;
    // SubProg move_last_pc pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 51274 op: 159
    // SubProg move_last_pc pc: 20 op: STARTLINE (58)

    /** emit.e:675	end procedure*/
    // SubProg move_last_pc pc: 22 op: RETURNP (29)

// Exiting block BLOCK: move_last_pc

// block var amount_51276
    return;
    // SubProg move_last_pc pc: 25 op: BADRETURNF (43)
    ;
}


void _45clear_last()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_last pc: 1 op: STARTLINE (58)

    /** emit.e:678		last_op = 0*/
    // SubProg clear_last pc: 3 op: ASSIGN_I (113)
    _45last_op_51268 = 0;
    // SubProg clear_last pc: 6 op: STARTLINE (58)

    /** emit.e:679		last_pc = 0*/
    // SubProg clear_last pc: 8 op: ASSIGN_I (113)
    _45last_pc_51269 = 0;
    // SubProg clear_last pc: 11 op: STARTLINE (58)

    /** emit.e:680	end procedure*/
    // SubProg clear_last pc: 13 op: RETURNP (29)

// Exiting block BLOCK: clear_last
    return;
    // SubProg clear_last pc: 16 op: BADRETURNF (43)
    ;
}


void _45clear_op()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_op pc: 1 op: STARTLINE (58)

    /** emit.e:683		previous_op = -1*/
    // SubProg clear_op pc: 3 op: ASSIGN (18)
    _34previous_op_15286 = -1;
    // SubProg clear_op pc: 6 op: INTEGER_CHECK (96)
    // SubProg clear_op pc: 8 op: STARTLINE (58)

    /** emit.e:684		assignable = FALSE*/
    // SubProg clear_op pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear_op pc: 12 op: ASSIGN (18)
    _45assignable_50389 = _8FALSE_442;
    // SubProg clear_op pc: 15 op: STARTLINE (58)

    /** emit.e:685	end procedure*/
    // SubProg clear_op pc: 17 op: RETURNP (29)

// Exiting block BLOCK: clear_op
    return;
    // SubProg clear_op pc: 20 op: BADRETURNF (43)
    ;
}


void _45inlined_function()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg inlined_function pc: 1 op: STARTLINE (58)

    /** emit.e:689		previous_op = PROC*/
    // SubProg inlined_function pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg inlined_function pc: 5 op: ASSIGN (18)
    _34previous_op_15286 = 27;
    // SubProg inlined_function pc: 8 op: INTEGER_CHECK (96)
    // SubProg inlined_function pc: 10 op: STARTLINE (58)

    /** emit.e:690		assignable = TRUE*/
    // SubProg inlined_function pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg inlined_function pc: 14 op: ASSIGN (18)
    _45assignable_50389 = _8TRUE_444;
    // SubProg inlined_function pc: 17 op: STARTLINE (58)

    /** emit.e:691		inlined = TRUE*/
    // SubProg inlined_function pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg inlined_function pc: 21 op: ASSIGN (18)
    _45inlined_51287 = _8TRUE_444;
    // SubProg inlined_function pc: 24 op: STARTLINE (58)

    /** emit.e:692	end procedure*/
    // SubProg inlined_function pc: 26 op: RETURNP (29)

// Exiting block BLOCK: inlined_function
    return;
    // SubProg inlined_function pc: 29 op: BADRETURNF (43)
    ;
}


void _45add_inline_target(object _pc_51298)
{
// skipping _26413  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_inline_target pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_51298)) {
        _1 = (object)(DBL_PTR(_pc_51298)->dbl);
        DeRefDS(_pc_51298);
        _pc_51298 = _1;
    }
    // SubProg add_inline_target pc: 3 op: STARTLINE (58)

    /** emit.e:696		inlined_targets &= pc*/
    // SubProg add_inline_target pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_inline_target pc: 7 op: CONCAT (15)
    Append(&_45inlined_targets_51295, _45inlined_targets_51295, _pc_51298);
    // SubProg add_inline_target pc: 11 op: STARTLINE (58)

    /** emit.e:697	end procedure*/
    // SubProg add_inline_target pc: 13 op: RETURNP (29)

// Exiting block BLOCK: add_inline_target

// block var pc_51298
    return;
    // SubProg add_inline_target pc: 16 op: BADRETURNF (43)
    ;
}


void _45clear_inline_targets()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_inline_targets pc: 1 op: STARTLINE (58)

    /** emit.e:700		inlined_targets = {}*/
    // SubProg clear_inline_targets pc: 3 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_45inlined_targets_51295);
    _45inlined_targets_51295 = _21936;
    // SubProg clear_inline_targets pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg clear_inline_targets pc: 8 op: STARTLINE (58)

    /** emit.e:701	end procedure*/
    // SubProg clear_inline_targets pc: 10 op: RETURNP (29)

// Exiting block BLOCK: clear_inline_targets
    return;
    // SubProg clear_inline_targets pc: 13 op: BADRETURNF (43)
    ;
}


void _45emit_inline(object _code_51304)
{
// skipping _26414  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_inline pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg emit_inline pc: 3 op: STARTLINE (58)

    /** emit.e:704		last_pc = 0*/
    // SubProg emit_inline pc: 5 op: ASSIGN_I (113)
    _45last_pc_51269 = 0;
    // SubProg emit_inline pc: 8 op: STARTLINE (58)

    /** emit.e:705		last_op = 0*/
    // SubProg emit_inline pc: 10 op: ASSIGN_I (113)
    _45last_op_51268 = 0;
    // SubProg emit_inline pc: 13 op: STARTLINE (58)

    /** emit.e:706		Code &= code*/
    // SubProg emit_inline pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_inline pc: 17 op: CONCAT (15)
    Concat((object_ptr)&_34Code_15276, _34Code_15276, _code_51304);
    // SubProg emit_inline pc: 21 op: SEQUENCE_CHECK (97)
    // SubProg emit_inline pc: 23 op: STARTLINE (58)

    /** emit.e:707	end procedure*/
    // SubProg emit_inline pc: 25 op: RETURNP (29)

// Exiting block BLOCK: emit_inline

// block var code_51304
    DeRefDS(_code_51304);
    return;
    // SubProg emit_inline pc: 28 op: BADRETURNF (43)
    ;
}


void _45emit_op(object _op_51309)
{
    object _a_51311 = NOVALUE;
    object _b_51312 = NOVALUE;
    object _c_51313 = NOVALUE;
    object _d_51314 = NOVALUE;
    object _source_51315 = NOVALUE;
    object _target_51316 = NOVALUE;
    object _subsym_51317 = NOVALUE;
    object _lhs_var_51319 = NOVALUE;
    object _ib_51320 = NOVALUE;
    object _ic_51321 = NOVALUE;
    object _n_51322 = NOVALUE;
    object _obj_51323 = NOVALUE;
    object _elements_51324 = NOVALUE;
    object _element_vals_51325 = NOVALUE;
    object _last_pc_backup_51326 = NOVALUE;
    object _last_op_backup_51327 = NOVALUE;
    object _temp_51336 = NOVALUE;
    object _real_op_51636 = NOVALUE;
    object _ref_51643 = NOVALUE;
    object _paths_51673 = NOVALUE;
    object _if_code_51753 = NOVALUE;
    object _if_code_51792 = NOVALUE;
    object _Top_inlined_Top_at_5480_52410 = NOVALUE;
    object _element_52481 = NOVALUE;
    object _Top_inlined_Top_at_7035_52628 = NOVALUE;
    object _31697 = NOVALUE; // 63904 31697
    object _31696 = NOVALUE; // 63903 31696
    object _27009 = NOVALUE; // 52783 27009
    object _27008 = NOVALUE; // 52780 27008
    object _27007 = NOVALUE; // 52776 27007
// skipping _27006  name type: 0
// skipping _27005  name type: 0
// skipping _27004  name type: 0
    object _27003 = NOVALUE; // 52754 27003
// skipping _27002  name type: 0
// skipping _27001  name type: 0
    object _27000 = NOVALUE; // 52745 27000
// skipping _26999  name type: 0
    object _26998 = NOVALUE; // 52739 26998
// skipping _26997  name type: 0
// skipping _26996  name type: 0
// skipping _26995  name type: 0
// skipping _26994  name type: 0
// skipping _26993  name type: 0
    object _26992 = NOVALUE; // 52719 26992
    object _26991 = NOVALUE; // 52718 26991
    object _26990 = NOVALUE; // 52717 26990
// skipping _26989  name type: 0
    object _26988 = NOVALUE; // 52714 26988
// skipping _26987  name type: 0
    object _26986 = NOVALUE; // 52711 26986
    object _26985 = NOVALUE; // 52710 26985
    object _26984 = NOVALUE; // 52709 26984
    object _26983 = NOVALUE; // 52703 26983
    object _26982 = NOVALUE; // 52702 26982
    object _26981 = NOVALUE; // 52701 26981
    object _26980 = NOVALUE; // 52699 26980
    object _26979 = NOVALUE; // 52697 26979
    object _26978 = NOVALUE; // 52695 26978
    object _26977 = NOVALUE; // 52694 26977
    object _26976 = NOVALUE; // 52693 26976
// skipping _26975  name type: 0
    object _26974 = NOVALUE; // 52690 26974
    object _26973 = NOVALUE; // 52689 26973
    object _26972 = NOVALUE; // 52688 26972
// skipping _26971  name type: 0
    object _26970 = NOVALUE; // 52677 26970
    object _26969 = NOVALUE; // 52676 26969
    object _26968 = NOVALUE; // 52674 26968
    object _26967 = NOVALUE; // 52672 26967
    object _26966 = NOVALUE; // 52671 26966
    object _26965 = NOVALUE; // 52669 26965
    object _26964 = NOVALUE; // 52667 26964
    object _26963 = NOVALUE; // 52665 26963
    object _26962 = NOVALUE; // 52664 26962
// skipping _26961  name type: 0
// skipping _26960  name type: 0
    object _26959 = NOVALUE; // 52657 26959
// skipping _26958  name type: 0
// skipping _26957  name type: 0
    object _26956 = NOVALUE; // 52632 26956
    object _26955 = NOVALUE; // 52631 26955
    object _26954 = NOVALUE; // 52623 26954
    object _26953 = NOVALUE; // 52617 26953
// skipping _26952  name type: 0
    object _26951 = NOVALUE; // 52611 26951
// skipping _26950  name type: 0
    object _26949 = NOVALUE; // 52606 26949
// skipping _26948  name type: 0
// skipping _26947  name type: 0
// skipping _26946  name type: 0
// skipping _26945  name type: 0
// skipping _26944  name type: 0
// skipping _26943  name type: 0
// skipping _26942  name type: 0
// skipping _26941  name type: 0
// skipping _26940  name type: 0
// skipping _26939  name type: 0
// skipping _26938  name type: 0
    object _26937 = NOVALUE; // 52582 26937
// skipping _26936  name type: 0
// skipping _26935  name type: 0
// skipping _26934  name type: 0
// skipping _26933  name type: 0
// skipping _26932  name type: 0
// skipping _26931  name type: 0
// skipping _26930  name type: 0
    object _26929 = NOVALUE; // 52565 26929
// skipping _26928  name type: 0
// skipping _26927  name type: 0
    object _26926 = NOVALUE; // 52552 26926
    object _26925 = NOVALUE; // 52550 26925
    object _26924 = NOVALUE; // 52549 26924
    object _26923 = NOVALUE; // 52548 26923
// skipping _26922  name type: 0
// skipping _26921  name type: 0
    object _26920 = NOVALUE; // 52541 26920
    object _26919 = NOVALUE; // 52539 26919
    object _26918 = NOVALUE; // 52537 26918
    object _26917 = NOVALUE; // 52535 26917
    object _26916 = NOVALUE; // 52534 26916
    object _26915 = NOVALUE; // 52532 26915
    object _26914 = NOVALUE; // 52530 26914
    object _26913 = NOVALUE; // 52528 26913
    object _26912 = NOVALUE; // 52527 26912
    object _26911 = NOVALUE; // 52525 26911
    object _26910 = NOVALUE; // 52523 26910
// skipping _26909  name type: 0
    object _26908 = NOVALUE; // 52520 26908
// skipping _26907  name type: 0
// skipping _26906  name type: 0
// skipping _26905  name type: 0
    object _26904 = NOVALUE; // 52512 26904
    object _26903 = NOVALUE; // 52510 26903
    object _26902 = NOVALUE; // 52508 26902
    object _26901 = NOVALUE; // 52506 26901
    object _26900 = NOVALUE; // 52505 26900
    object _26899 = NOVALUE; // 52503 26899
    object _26898 = NOVALUE; // 52501 26898
    object _26897 = NOVALUE; // 52499 26897
    object _26896 = NOVALUE; // 52498 26896
    object _26895 = NOVALUE; // 52496 26895
    object _26894 = NOVALUE; // 52494 26894
// skipping _26893  name type: 0
    object _26892 = NOVALUE; // 52491 26892
// skipping _26891  name type: 0
// skipping _26890  name type: 0
// skipping _26889  name type: 0
// skipping _26888  name type: 0
    object _26887 = NOVALUE; // 52479 26887
    object _26886 = NOVALUE; // 52471 26886
// skipping _26885  name type: 0
    object _26884 = NOVALUE; // 52468 26884
    object _26883 = NOVALUE; // 52466 26883
    object _26882 = NOVALUE; // 52465 26882
// skipping _26881  name type: 0
    object _26880 = NOVALUE; // 52460 26880
// skipping _26879  name type: 0
// skipping _26878  name type: 0
    object _26877 = NOVALUE; // 52446 26877
// skipping _26876  name type: 0
// skipping _26875  name type: 0
// skipping _26874  name type: 0
    object _26873 = NOVALUE; // 52437 26873
// skipping _26872  name type: 0
// skipping _26871  name type: 0
    object _26870 = NOVALUE; // 52408 26870
    object _26869 = NOVALUE; // 52407 26869
    object _26868 = NOVALUE; // 52406 26868
    object _26867 = NOVALUE; // 52405 26867
    object _26866 = NOVALUE; // 52401 26866
    object _26865 = NOVALUE; // 52400 26865
// skipping _26864  name type: 0
    object _26863 = NOVALUE; // 52392 26863
    object _26862 = NOVALUE; // 52391 26862
// skipping _26861  name type: 0
    object _26860 = NOVALUE; // 52380 26860
    object _26859 = NOVALUE; // 52378 26859
    object _26858 = NOVALUE; // 52377 26858
    object _26857 = NOVALUE; // 52375 26857
    object _26856 = NOVALUE; // 52373 26856
    object _26855 = NOVALUE; // 52372 26855
    object _26854 = NOVALUE; // 52370 26854
    object _26853 = NOVALUE; // 52368 26853
    object _26852 = NOVALUE; // 52366 26852
    object _26851 = NOVALUE; // 52365 26851
// skipping _26850  name type: 0
    object _26849 = NOVALUE; // 52357 26849
    object _26848 = NOVALUE; // 52356 26848
    object _26847 = NOVALUE; // 52354 26847
    object _26846 = NOVALUE; // 52352 26846
    object _26845 = NOVALUE; // 52351 26845
    object _26844 = NOVALUE; // 52349 26844
    object _26843 = NOVALUE; // 52347 26843
    object _26842 = NOVALUE; // 52342 26842
    object _26841 = NOVALUE; // 52341 26841
    object _26840 = NOVALUE; // 52339 26840
    object _26839 = NOVALUE; // 52337 26839
    object _26838 = NOVALUE; // 52336 26838
    object _26837 = NOVALUE; // 52334 26837
    object _26836 = NOVALUE; // 52332 26836
    object _26835 = NOVALUE; // 52328 26835
// skipping _26834  name type: 0
    object _26833 = NOVALUE; // 52326 26833
// skipping _26832  name type: 0
// skipping _26831  name type: 0
    object _26830 = NOVALUE; // 52317 26830
    object _26829 = NOVALUE; // 52316 26829
    object _26828 = NOVALUE; // 52314 26828
    object _26827 = NOVALUE; // 52312 26827
    object _26826 = NOVALUE; // 52311 26826
    object _26825 = NOVALUE; // 52309 26825
    object _26824 = NOVALUE; // 52307 26824
    object _26823 = NOVALUE; // 52302 26823
    object _26822 = NOVALUE; // 52301 26822
    object _26821 = NOVALUE; // 52299 26821
    object _26820 = NOVALUE; // 52297 26820
    object _26819 = NOVALUE; // 52296 26819
    object _26818 = NOVALUE; // 52294 26818
    object _26817 = NOVALUE; // 52292 26817
    object _26816 = NOVALUE; // 52288 26816
// skipping _26815  name type: 0
    object _26814 = NOVALUE; // 52286 26814
// skipping _26813  name type: 0
// skipping _26812  name type: 0
// skipping _26811  name type: 0
    object _26810 = NOVALUE; // 52260 26810
// skipping _26809  name type: 0
    object _26808 = NOVALUE; // 52241 26808
    object _26807 = NOVALUE; // 52239 26807
// skipping _26806  name type: 0
    object _26805 = NOVALUE; // 52235 26805
// skipping _26804  name type: 0
    object _26803 = NOVALUE; // 52227 26803
// skipping _26802  name type: 0
    object _26801 = NOVALUE; // 52215 26801
    object _26800 = NOVALUE; // 52208 26800
// skipping _26799  name type: 0
    object _26798 = NOVALUE; // 52179 26798
    object _26797 = NOVALUE; // 52178 26797
    object _26796 = NOVALUE; // 52176 26796
    object _26795 = NOVALUE; // 52174 26795
    object _26794 = NOVALUE; // 52172 26794
    object _26793 = NOVALUE; // 52170 26793
    object _26792 = NOVALUE; // 52169 26792
    object _26791 = NOVALUE; // 52167 26791
    object _26790 = NOVALUE; // 52165 26790
    object _26789 = NOVALUE; // 52163 26789
    object _26788 = NOVALUE; // 52158 26788
    object _26787 = NOVALUE; // 52157 26787
    object _26786 = NOVALUE; // 52155 26786
    object _26785 = NOVALUE; // 52153 26785
    object _26784 = NOVALUE; // 52152 26784
    object _26783 = NOVALUE; // 52150 26783
    object _26782 = NOVALUE; // 52149 26782
    object _26781 = NOVALUE; // 52146 26781
    object _26780 = NOVALUE; // 52145 26780
// skipping _26779  name type: 0
    object _26778 = NOVALUE; // 52139 26778
// skipping _26777  name type: 0
    object _26776 = NOVALUE; // 52134 26776
    object _26775 = NOVALUE; // 52132 26775
// skipping _26774  name type: 0
    object _26773 = NOVALUE; // 52127 26773
// skipping _26772  name type: 0
// skipping _26771  name type: 0
    object _26770 = NOVALUE; // 52099 26770
    object _26769 = NOVALUE; // 52097 26769
// skipping _26768  name type: 0
    object _26767 = NOVALUE; // 52093 26767
    object _26766 = NOVALUE; // 52084 26766
    object _26765 = NOVALUE; // 52082 26765
// skipping _26764  name type: 0
    object _26763 = NOVALUE; // 52078 26763
// skipping _26762  name type: 0
// skipping _26761  name type: 0
// skipping _26760  name type: 0
// skipping _26759  name type: 0
// skipping _26758  name type: 0
// skipping _26757  name type: 0
// skipping _26756  name type: 0
    object _26755 = NOVALUE; // 52049 26755
    object _26754 = NOVALUE; // 52045 26754
    object _26753 = NOVALUE; // 52043 26753
    object _26752 = NOVALUE; // 52041 26752
    object _26751 = NOVALUE; // 52040 26751
    object _26750 = NOVALUE; // 52038 26750
    object _26749 = NOVALUE; // 52037 26749
    object _26748 = NOVALUE; // 52035 26748
    object _26747 = NOVALUE; // 52031 26747
    object _26746 = NOVALUE; // 52030 26746
    object _26745 = NOVALUE; // 52029 26745
    object _26744 = NOVALUE; // 52027 26744
    object _26743 = NOVALUE; // 52025 26743
    object _26742 = NOVALUE; // 52024 26742
    object _26741 = NOVALUE; // 52022 26741
    object _26740 = NOVALUE; // 52020 26740
    object _26739 = NOVALUE; // 52018 26739
    object _26738 = NOVALUE; // 52017 26738
    object _26737 = NOVALUE; // 52015 26737
    object _26736 = NOVALUE; // 52013 26736
    object _26735 = NOVALUE; // 52011 26735
    object _26734 = NOVALUE; // 52010 26734
    object _26733 = NOVALUE; // 52009 26733
    object _26732 = NOVALUE; // 52008 26732
// skipping _26731  name type: 0
// skipping _26730  name type: 0
// skipping _26729  name type: 0
// skipping _26728  name type: 0
// skipping _26727  name type: 0
    object _26726 = NOVALUE; // 51991 26726
    object _26725 = NOVALUE; // 51990 26725
// skipping _26724  name type: 0
// skipping _26723  name type: 0
    object _26722 = NOVALUE; // 51978 26722
// skipping _26721  name type: 0
// skipping _26720  name type: 0
    object _26719 = NOVALUE; // 51974 26719
    object _26718 = NOVALUE; // 51973 26718
    object _26717 = NOVALUE; // 51968 26717
    object _26716 = NOVALUE; // 51967 26716
    object _26715 = NOVALUE; // 51966 26715
    object _26714 = NOVALUE; // 51963 26714
    object _26713 = NOVALUE; // 51961 26713
    object _26712 = NOVALUE; // 51959 26712
    object _26711 = NOVALUE; // 51958 26711
    object _26710 = NOVALUE; // 51956 26710
// skipping _26709  name type: 0
    object _26708 = NOVALUE; // 51953 26708
    object _26707 = NOVALUE; // 51949 26707
    object _26706 = NOVALUE; // 51948 26706
// skipping _26705  name type: 0
    object _26704 = NOVALUE; // 51946 26704
// skipping _26703  name type: 0
    object _26702 = NOVALUE; // 51941 26702
    object _26701 = NOVALUE; // 51939 26701
    object _26700 = NOVALUE; // 51931 26700
    object _26699 = NOVALUE; // 51930 26699
    object _26698 = NOVALUE; // 51928 26698
    object _26697 = NOVALUE; // 51925 26697
    object _26696 = NOVALUE; // 51923 26696
    object _26695 = NOVALUE; // 51921 26695
    object _26694 = NOVALUE; // 51919 26694
    object _26693 = NOVALUE; // 51918 26693
// skipping _26692  name type: 0
    object _26691 = NOVALUE; // 51915 26691
    object _26690 = NOVALUE; // 51914 26690
// skipping _26689  name type: 0
    object _26688 = NOVALUE; // 51904 26688
    object _26687 = NOVALUE; // 51903 26687
    object _26686 = NOVALUE; // 51902 26686
    object _26685 = NOVALUE; // 51900 26685
    object _26684 = NOVALUE; // 51898 26684
// skipping _26683  name type: 0
    object _26682 = NOVALUE; // 51895 26682
    object _26681 = NOVALUE; // 51891 26681
    object _26680 = NOVALUE; // 51890 26680
    object _26679 = NOVALUE; // 51889 26679
    object _26678 = NOVALUE; // 51887 26678
    object _26677 = NOVALUE; // 51886 26677
    object _26676 = NOVALUE; // 51885 26676
    object _26675 = NOVALUE; // 51883 26675
// skipping _26674  name type: 0
    object _26673 = NOVALUE; // 51880 26673
    object _26672 = NOVALUE; // 51878 26672
    object _26671 = NOVALUE; // 51876 26671
    object _26670 = NOVALUE; // 51874 26670
    object _26669 = NOVALUE; // 51873 26669
// skipping _26668  name type: 0
    object _26667 = NOVALUE; // 51870 26667
    object _26666 = NOVALUE; // 51869 26666
// skipping _26665  name type: 0
    object _26664 = NOVALUE; // 51860 26664
    object _26663 = NOVALUE; // 51859 26663
    object _26662 = NOVALUE; // 51858 26662
    object _26661 = NOVALUE; // 51855 26661
    object _26660 = NOVALUE; // 51853 26660
// skipping _26659  name type: 0
    object _26658 = NOVALUE; // 51850 26658
// skipping _26657  name type: 0
    object _26656 = NOVALUE; // 51845 26656
// skipping _26655  name type: 0
    object _26654 = NOVALUE; // 51842 26654
    object _26653 = NOVALUE; // 51841 26653
// skipping _26652  name type: 0
    object _26651 = NOVALUE; // 51832 26651
    object _26650 = NOVALUE; // 51829 26650
    object _26649 = NOVALUE; // 51828 26649
    object _26648 = NOVALUE; // 51827 26648
    object _26647 = NOVALUE; // 51825 26647
    object _26646 = NOVALUE; // 51823 26646
    object _26645 = NOVALUE; // 51822 26645
    object _26644 = NOVALUE; // 51821 26644
    object _26643 = NOVALUE; // 51819 26643
    object _26642 = NOVALUE; // 51817 26642
    object _26641 = NOVALUE; // 51816 26641
    object _26640 = NOVALUE; // 51814 26640
    object _26639 = NOVALUE; // 51812 26639
    object _26638 = NOVALUE; // 51810 26638
    object _26637 = NOVALUE; // 51809 26637
    object _26636 = NOVALUE; // 51808 26636
    object _26635 = NOVALUE; // 51807 26635
// skipping _26634  name type: 0
// skipping _26633  name type: 0
    object _26632 = NOVALUE; // 51801 26632
    object _26631 = NOVALUE; // 51800 26631
// skipping _26630  name type: 0
    object _26629 = NOVALUE; // 51796 26629
    object _26628 = NOVALUE; // 51795 26628
    object _26627 = NOVALUE; // 51794 26627
    object _26626 = NOVALUE; // 51791 26626
    object _26625 = NOVALUE; // 51790 26625
// skipping _26624  name type: 0
    object _26623 = NOVALUE; // 51786 26623
// skipping _26622  name type: 0
    object _26621 = NOVALUE; // 51780 26621
    object _26620 = NOVALUE; // 51777 26620
    object _26619 = NOVALUE; // 51776 26619
    object _26618 = NOVALUE; // 51775 26618
    object _26617 = NOVALUE; // 51773 26617
    object _26616 = NOVALUE; // 51772 26616
    object _26615 = NOVALUE; // 51771 26615
    object _26614 = NOVALUE; // 51770 26614
    object _26613 = NOVALUE; // 51769 26613
// skipping _26612  name type: 0
// skipping _26611  name type: 0
    object _26610 = NOVALUE; // 51762 26610
    object _26609 = NOVALUE; // 51761 26609
// skipping _26608  name type: 0
    object _26607 = NOVALUE; // 51757 26607
    object _26606 = NOVALUE; // 51756 26606
    object _26605 = NOVALUE; // 51755 26605
    object _26604 = NOVALUE; // 51752 26604
    object _26603 = NOVALUE; // 51751 26603
// skipping _26602  name type: 0
// skipping _26601  name type: 0
    object _26600 = NOVALUE; // 51743 26600
    object _26599 = NOVALUE; // 51742 26599
    object _26598 = NOVALUE; // 51739 26598
    object _26597 = NOVALUE; // 51738 26597
    object _26596 = NOVALUE; // 51736 26596
    object _26595 = NOVALUE; // 51733 26595
    object _26594 = NOVALUE; // 51732 26594
// skipping _26593  name type: 0
// skipping _26592  name type: 0
// skipping _26591  name type: 0
// skipping _26590  name type: 0
    object _26589 = NOVALUE; // 51688 26589
    object _26588 = NOVALUE; // 51686 26588
    object _26587 = NOVALUE; // 51683 26587
// skipping _26586  name type: 0
    object _26585 = NOVALUE; // 51681 26585
    object _26584 = NOVALUE; // 51679 26584
// skipping _26583  name type: 0
    object _26582 = NOVALUE; // 51669 26582
    object _26581 = NOVALUE; // 51667 26581
// skipping _26580  name type: 0
// skipping _26579  name type: 0
// skipping _26578  name type: 0
// skipping _26577  name type: 0
    object _26576 = NOVALUE; // 51653 26576
    object _26575 = NOVALUE; // 51652 26575
    object _26574 = NOVALUE; // 51651 26574
    object _26573 = NOVALUE; // 51650 26573
    object _26572 = NOVALUE; // 51649 26572
// skipping _26571  name type: 0
// skipping _26570  name type: 0
// skipping _26569  name type: 0
// skipping _26568  name type: 0
// skipping _26567  name type: 0
    object _26566 = NOVALUE; // 51626 26566
    object _26565 = NOVALUE; // 51624 26565
// skipping _26564  name type: 0
    object _26563 = NOVALUE; // 51620 26563
    object _26562 = NOVALUE; // 51619 26562
    object _26561 = NOVALUE; // 51618 26561
    object _26560 = NOVALUE; // 51617 26560
    object _26559 = NOVALUE; // 51616 26559
    object _26558 = NOVALUE; // 51613 26558
    object _26557 = NOVALUE; // 51612 26557
    object _26556 = NOVALUE; // 51610 26556
    object _26555 = NOVALUE; // 51606 26555
    object _26554 = NOVALUE; // 51604 26554
    object _26553 = NOVALUE; // 51601 26553
// skipping _26552  name type: 0
    object _26551 = NOVALUE; // 51598 26551
    object _26550 = NOVALUE; // 51597 26550
    object _26549 = NOVALUE; // 51594 26549
    object _26548 = NOVALUE; // 51593 26548
    object _26547 = NOVALUE; // 51591 26547
    object _26546 = NOVALUE; // 51589 26546
    object _26545 = NOVALUE; // 51588 26545
    object _26544 = NOVALUE; // 51586 26544
    object _26543 = NOVALUE; // 51585 26543
    object _26542 = NOVALUE; // 51583 26542
    object _26541 = NOVALUE; // 51582 26541
    object _26540 = NOVALUE; // 51580 26540
    object _26539 = NOVALUE; // 51578 26539
    object _26538 = NOVALUE; // 51577 26538
// skipping _26537  name type: 0
    object _26536 = NOVALUE; // 51573 26536
    object _26535 = NOVALUE; // 51571 26535
    object _26534 = NOVALUE; // 51570 26534
    object _26533 = NOVALUE; // 51569 26533
// skipping _26532  name type: 0
// skipping _26531  name type: 0
    object _26530 = NOVALUE; // 51561 26530
    object _26529 = NOVALUE; // 51556 26529
    object _26528 = NOVALUE; // 51555 26528
    object _26527 = NOVALUE; // 51554 26527
// skipping _26526  name type: 0
    object _26525 = NOVALUE; // 51549 26525
    object _26524 = NOVALUE; // 51548 26524
    object _26523 = NOVALUE; // 51547 26523
    object _26522 = NOVALUE; // 51545 26522
// skipping _26521  name type: 0
    object _26520 = NOVALUE; // 51542 26520
    object _26519 = NOVALUE; // 51540 26519
    object _26518 = NOVALUE; // 51538 26518
    object _26517 = NOVALUE; // 51534 26517
    object _26516 = NOVALUE; // 51532 26516
    object _26515 = NOVALUE; // 51530 26515
    object _26514 = NOVALUE; // 51529 26514
    object _26513 = NOVALUE; // 51527 26513
    object _26512 = NOVALUE; // 51526 26512
    object _26511 = NOVALUE; // 51524 26511
    object _26510 = NOVALUE; // 51520 26510
    object _26509 = NOVALUE; // 51519 26509
    object _26508 = NOVALUE; // 51517 26508
    object _26507 = NOVALUE; // 51515 26507
// skipping _26506  name type: 0
    object _26505 = NOVALUE; // 51510 26505
    object _26504 = NOVALUE; // 51508 26504
    object _26503 = NOVALUE; // 51504 26503
    object _26502 = NOVALUE; // 51503 26502
    object _26501 = NOVALUE; // 51501 26501
// skipping _26500  name type: 0
    object _26499 = NOVALUE; // 51498 26499
    object _26498 = NOVALUE; // 51496 26498
    object _26497 = NOVALUE; // 51495 26497
    object _26496 = NOVALUE; // 51493 26496
    object _26495 = NOVALUE; // 51492 26495
// skipping _26494  name type: 0
// skipping _26493  name type: 0
// skipping _26492  name type: 0
    object _26491 = NOVALUE; // 51484 26491
    object _26490 = NOVALUE; // 51483 26490
    object _26489 = NOVALUE; // 51480 26489
    object _26488 = NOVALUE; // 51477 26488
    object _26487 = NOVALUE; // 51475 26487
// skipping _26486  name type: 0
    object _26485 = NOVALUE; // 51471 26485
    object _26484 = NOVALUE; // 51469 26484
    object _26483 = NOVALUE; // 51467 26483
    object _26482 = NOVALUE; // 51465 26482
    object _26481 = NOVALUE; // 51463 26481
    object _26480 = NOVALUE; // 51462 26480
    object _26479 = NOVALUE; // 51460 26479
    object _26478 = NOVALUE; // 51458 26478
    object _26477 = NOVALUE; // 51456 26477
    object _26476 = NOVALUE; // 51455 26476
    object _26475 = NOVALUE; // 51454 26475
    object _26474 = NOVALUE; // 51453 26474
    object _26473 = NOVALUE; // 51450 26473
    object _26472 = NOVALUE; // 51449 26472
    object _26471 = NOVALUE; // 51448 26471
    object _26470 = NOVALUE; // 51444 26470
    object _26469 = NOVALUE; // 51441 26469
    object _26468 = NOVALUE; // 51440 26468
// skipping _26467  name type: 0
    object _26466 = NOVALUE; // 51431 26466
    object _26465 = NOVALUE; // 51430 26465
    object _26464 = NOVALUE; // 51429 26464
    object _26463 = NOVALUE; // 51428 26463
    object _26462 = NOVALUE; // 51426 26462
    object _26461 = NOVALUE; // 51425 26461
    object _26460 = NOVALUE; // 51424 26460
    object _26459 = NOVALUE; // 51423 26459
    object _26458 = NOVALUE; // 51420 26458
// skipping _26457  name type: 0
    object _26456 = NOVALUE; // 51416 26456
    object _26455 = NOVALUE; // 51412 26455
    object _26454 = NOVALUE; // 51411 26454
// skipping _26453  name type: 0
    object _26452 = NOVALUE; // 51404 26452
    object _26451 = NOVALUE; // 51403 26451
// skipping _26450  name type: 0
    object _26449 = NOVALUE; // 51396 26449
// skipping _26448  name type: 0
    object _26447 = NOVALUE; // 51392 26447
    object _26446 = NOVALUE; // 51388 26446
    object _26445 = NOVALUE; // 51387 26445
    object _26444 = NOVALUE; // 51382 26444
    object _26443 = NOVALUE; // 51380 26443
    object _26442 = NOVALUE; // 51377 26442
// skipping _26441  name type: 0
// skipping _26440  name type: 0
// skipping _26439  name type: 0
    object _26438 = NOVALUE; // 51370 26438
    object _26437 = NOVALUE; // 51368 26437
    object _26436 = NOVALUE; // 51367 26436
// skipping _26435  name type: 0
    object _26434 = NOVALUE; // 51362 26434
    object _26433 = NOVALUE; // 51361 26433
    object _26432 = NOVALUE; // 51359 26432
    object _26431 = NOVALUE; // 51358 26431
    object _26430 = NOVALUE; // 51357 26430
    object _26429 = NOVALUE; // 51355 26429
    object _26428 = NOVALUE; // 51354 26428
    object _26427 = NOVALUE; // 51352 26427
    object _26426 = NOVALUE; // 51351 26426
    object _26425 = NOVALUE; // 51350 26425
    object _26424 = NOVALUE; // 51347 26424
    object _26423 = NOVALUE; // 51344 26423
    object _26422 = NOVALUE; // 51343 26422
    object _26421 = NOVALUE; // 51340 26421
    object _26420 = NOVALUE; // 51339 26420
// skipping _26416  name type: 0
    object _26415 = NOVALUE; // 51329 26415
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg emit_op pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_op_51309)) {
        _1 = (object)(DBL_PTR(_op_51309)->dbl);
        DeRefDS(_op_51309);
        _op_51309 = _1;
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
    _45check_for_temps();
    // SubProg emit_op pc: 15 op: STARTLINE (58)

    /** emit.e:723		integer last_pc_backup = last_pc*/
    // SubProg emit_op pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_op pc: 19 op: ASSIGN_I (113)
    _last_pc_backup_51326 = _45last_pc_51269;
    // SubProg emit_op pc: 22 op: STARTLINE (58)

    /** emit.e:724		integer last_op_backup = last_op*/
    // SubProg emit_op pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_op pc: 26 op: ASSIGN_I (113)
    _last_op_backup_51327 = _45last_op_51268;
    // SubProg emit_op pc: 29 op: STARTLINE (58)

    /** emit.e:726		last_op = op*/
    // SubProg emit_op pc: 31 op: ASSIGN_I (113)
    _45last_op_51268 = _op_51309;
    // SubProg emit_op pc: 34 op: STARTLINE (58)

    /** emit.e:727		last_pc = length(Code) + 1*/
    // SubProg emit_op pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_op pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_34Code_15276)){
            _26415 = SEQ_PTR(_34Code_15276)->length;
    }
    else {
        _26415 = 1;
    }
    // SubProg emit_op pc: 41 op: PLUS1_I (117)
    _45last_pc_51269 = _26415 + 1;
    _26415 = NOVALUE;
    // SubProg emit_op pc: 45 op: STARTLINE (58)

    /** emit.e:729		switch op label "EMIT" do*/
    // SubProg emit_op pc: 47 op: SWITCH_I (193)
    _0 = _op_51309;
    switch ( _0 ){ 
        // SubProg emit_op pc: 52 op: STARTLINE (58)

        /** emit.e:730		case ASSIGN then*/
        // SubProg emit_op pc: 54 op: CASE (186)
        case 18:
        // SubProg emit_op pc: 56 op: STARTLINE (58)

        /** emit.e:731			sequence temp = {}*/
        // SubProg emit_op pc: 58 op: ASSIGN (18)
        RefDS(_21936);
        DeRef(_temp_51336);
        _temp_51336 = _21936;
        // SubProg emit_op pc: 61 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 63 op: STARTLINE (58)

        /** emit.e:732			if not TRANSLATE and*/
        // SubProg emit_op pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 67 op: NOT (7)
        _26420 = (_34TRANSLATE_14813 == 0);
        // SubProg emit_op pc: 70 op: SC1_AND_IF (146)
        if (_26420 == 0) {
            goto L1; // [70] 202
        }
        // SubProg emit_op pc: 74 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 78 op: EQUALS (3)
        _26422 = (_34previous_op_15286 == 92);
        // SubProg emit_op pc: 82 op: SC1_OR (143)
        if (_26422 != 0) {
            DeRef(_26423);
            _26423 = 1;
            goto L2; // [82] 98
        }
        // SubProg emit_op pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 88 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 90 op: EQUALS (3)
        _26424 = (_34previous_op_15286 == 25);
        // SubProg emit_op pc: 94 op: SC2_OR (144)
        _26423 = (_26424 != 0);
        // SubProg emit_op pc: 97 op: NOP1 (159)
L2: // addr: 98 pc: 97 sub: 51307 op: 159
        // SubProg emit_op pc: 98 op: NOP1 (159)
        // SubProg emit_op pc: 99 op: IF (20)
        if (_26423 == 0)
        {
            _26423 = NOVALUE;
            goto L1; // [99] 202
        }
        else{
            _26423 = NOVALUE;
        }
        // SubProg emit_op pc: 102 op: STARTLINE (58)

        /** emit.e:736				while Code[$-1] = DEREF_TEMP and find( Code[$], derefs ) do*/
        // SubProg emit_op pc: 104 op: NOP2 (110)
        // SubProg emit_op pc: 106 op: NOPWHILE (158)
L3: // addr: 107 pc: 106 sub: 51307 op: 158
        // SubProg emit_op pc: 107 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 109 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26425 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26425 = 1;
        }
        // SubProg emit_op pc: 112 op: MINUS (10)
        _26426 = _26425 - 1;
        _26425 = NOVALUE;
        // SubProg emit_op pc: 116 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26427 = (object)*(((s1_ptr)_2)->base + _26426);
        // SubProg emit_op pc: 120 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 122 op: EQUALS (3)
        if (IS_ATOM_INT(_26427)) {
            _26428 = (_26427 == 208);
        }
        else {
            _26428 = binary_op(EQUALS, _26427, 208);
        }
        _26427 = NOVALUE;
        // SubProg emit_op pc: 126 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26428)) {
            if (_26428 == 0) {
                goto L4; // [126] 201
            }
        }
        else {
            if (DBL_PTR(_26428)->dbl == 0.0) {
                goto L4; // [126] 201
            }
        }
        // SubProg emit_op pc: 130 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 132 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26430 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26430 = 1;
        }
        // SubProg emit_op pc: 135 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26431 = (object)*(((s1_ptr)_2)->base + _26430);
        // SubProg emit_op pc: 139 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 141 op: FIND_FROM (176)
        _26432 = find_from(_26431, _45derefs_50890, 1);
        _26431 = NOVALUE;
        // SubProg emit_op pc: 146 op: NOP1 (159)
        // SubProg emit_op pc: 147 op: WHILE (47)
        if (_26432 == 0)
        {
            _26432 = NOVALUE;
            goto L4; // [147] 201
        }
        else{
            _26432 = NOVALUE;
        }
        // SubProg emit_op pc: 150 op: STARTLINE (58)

        /** emit.e:739					temp &= Code[$]*/
        // SubProg emit_op pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 154 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26433 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26433 = 1;
        }
        // SubProg emit_op pc: 157 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26434 = (object)*(((s1_ptr)_2)->base + _26433);
        // SubProg emit_op pc: 161 op: CONCAT (15)
        if (IS_SEQUENCE(_temp_51336) && IS_ATOM(_26434)) {
            Ref(_26434);
            Append(&_temp_51336, _temp_51336, _26434);
        }
        else if (IS_ATOM(_temp_51336) && IS_SEQUENCE(_26434)) {
        }
        else {
            Concat((object_ptr)&_temp_51336, _temp_51336, _26434);
        }
        _26434 = NOVALUE;
        // SubProg emit_op pc: 165 op: STARTLINE (58)

        /** emit.e:740					Code = remove( Code, length(Code)-1, length(Code) )*/
        // SubProg emit_op pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 169 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 171 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26436 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26436 = 1;
        }
        // SubProg emit_op pc: 174 op: MINUS (10)
        _26437 = _26436 - 1;
        _26436 = NOVALUE;
        // SubProg emit_op pc: 178 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 180 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26438 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26438 = 1;
        }
        // SubProg emit_op pc: 183 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_34Code_15276);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_26437)) ? _26437 : (object)(DBL_PTR(_26437)->dbl);
            int stop = (IS_ATOM_INT(_26438)) ? _26438 : (object)(DBL_PTR(_26438)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_34Code_15276), start, &_34Code_15276 );
                }
                else Tail(SEQ_PTR(_34Code_15276), stop+1, &_34Code_15276);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_34Code_15276), start, &_34Code_15276);
            }
            else {
                assign_slice_seq = &assign_space;
                _34Code_15276 = Remove_elements(start, stop, (SEQ_PTR(_34Code_15276)->ref == 1));
            }
        }
        _26437 = NOVALUE;
        _26438 = NOVALUE;
        // SubProg emit_op pc: 188 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 190 op: STARTLINE (58)

        /** emit.e:741					emit_temp( temp, NEW_REFERENCE )*/
        // SubProg emit_op pc: 192 op: PROC (27)
        RefDS(_temp_51336);
        _45emit_temp(_temp_51336, 1);
        // SubProg emit_op pc: 196 op: STARTLINE (58)

        /** emit.e:742				end while*/
        // SubProg emit_op pc: 198 op: ENDWHILE (22)
        goto L3; // [198] 107
        // SubProg emit_op pc: 200 op: NOP1 (159)
L4: // addr: 201 pc: 200 sub: 51307 op: 159
        // SubProg emit_op pc: 201 op: NOP1 (159)
L1: // addr: 202 pc: 201 sub: 51307 op: 159
        // SubProg emit_op pc: 202 op: STARTLINE (58)

        /** emit.e:746			source = Pop()*/
        // SubProg emit_op pc: 204 op: PROC (27)
        _source_51315 = _45Pop();
        // SubProg emit_op pc: 207 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_source_51315)) {
            _1 = (object)(DBL_PTR(_source_51315)->dbl);
            DeRefDS(_source_51315);
            _source_51315 = _1;
        }
        // SubProg emit_op pc: 209 op: STARTLINE (58)

        /** emit.e:747			target = Pop()*/
        // SubProg emit_op pc: 211 op: PROC (27)
        _target_51316 = _45Pop();
        // SubProg emit_op pc: 214 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_target_51316)) {
            _1 = (object)(DBL_PTR(_target_51316)->dbl);
            DeRefDS(_target_51316);
            _target_51316 = _1;
        }
        // SubProg emit_op pc: 216 op: STARTLINE (58)

        /** emit.e:748			if assignable then*/
        // SubProg emit_op pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 220 op: IF (20)
        if (_45assignable_50389 == 0)
        {
            goto L5; // [220] 601
        }
        else{
        }
        // SubProg emit_op pc: 223 op: STARTLINE (58)

        /** emit.e:750				if inlined then*/
        // SubProg emit_op pc: 225 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 227 op: IF (20)
        if (_45inlined_51287 == 0)
        {
            goto L6; // [227] 326
        }
        else{
        }
        // SubProg emit_op pc: 230 op: STARTLINE (58)

        /** emit.e:751					inlined = 0*/
        // SubProg emit_op pc: 232 op: ASSIGN (18)
        _45inlined_51287 = 0;
        // SubProg emit_op pc: 235 op: STARTLINE (58)

        /** emit.e:752					if length( inlined_targets ) then*/
        // SubProg emit_op pc: 237 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 239 op: LENGTH (42)
        if (IS_SEQUENCE(_45inlined_targets_51295)){
                _26442 = SEQ_PTR(_45inlined_targets_51295)->length;
        }
        else {
            _26442 = 1;
        }
        // SubProg emit_op pc: 242 op: IF (20)
        if (_26442 == 0)
        {
            _26442 = NOVALUE;
            goto L7; // [242] 295
        }
        else{
            _26442 = NOVALUE;
        }
        // SubProg emit_op pc: 245 op: STARTLINE (58)

        /** emit.e:753						for i = 1 to length( inlined_targets ) do*/
        // SubProg emit_op pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 249 op: LENGTH (42)
        if (IS_SEQUENCE(_45inlined_targets_51295)){
                _26443 = SEQ_PTR(_45inlined_targets_51295)->length;
        }
        else {
            _26443 = 1;
        }
        // SubProg emit_op pc: 252 op: FOR_I (125)
        {
            object _i_51379;
            _i_51379 = 1;
L8: // addr: 259 pc: 252 sub: 51307 op: 125
            if (_i_51379 > _26443){
                goto L9; // [252] 280
            }
            // SubProg emit_op pc: 259 op: STARTLINE (58)

            /** emit.e:754							Code[inlined_targets[i]] = target*/
            // SubProg emit_op pc: 261 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 263 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 265 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45inlined_targets_51295);
            _26444 = (object)*(((s1_ptr)_2)->base + _i_51379);
            // SubProg emit_op pc: 269 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_34Code_15276);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _34Code_15276 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _26444);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _target_51316;
            DeRef(_1);
            // SubProg emit_op pc: 273 op: STARTLINE (58)

            /** emit.e:755						end for*/
            // SubProg emit_op pc: 275 op: ENDFOR_INT_UP1 (54)
            _i_51379 = _i_51379 + 1;
            goto L8; // [275] 259
L9: // addr: 280 pc: 275 sub: 51307 op: 54
            ;
        }
        // SubProg emit_op pc: 280 op: STARTLINE (58)

        /** emit.e:756						clear_inline_targets()*/
        // SubProg emit_op pc: 282 op: STARTLINE (58)

        /** emit.e:700		inlined_targets = {}*/
        // SubProg emit_op pc: 284 op: ASSIGN (18)
        RefDS(_21936);
        DeRefi(_45inlined_targets_51295);
        _45inlined_targets_51295 = _21936;
        // SubProg emit_op pc: 287 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 289 op: STARTLINE (58)

        /** emit.e:701	end procedure*/
        // SubProg emit_op pc: 291 op: ELSE (23)
        goto LA; // [291] 294
        // SubProg emit_op pc: 293 op: NOP1 (159)
LA: // addr: 294 pc: 293 sub: 51307 op: 159
        // SubProg emit_op pc: 294 op: NOP1 (159)
L7: // addr: 295 pc: 294 sub: 51307 op: 159
        // SubProg emit_op pc: 295 op: STARTLINE (58)

        /** emit.e:759					assignable = FALSE*/
        // SubProg emit_op pc: 297 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 299 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 302 op: STARTLINE (58)

        /** emit.e:760					clear_last()*/
        // SubProg emit_op pc: 304 op: STARTLINE (58)

        /** emit.e:678		last_op = 0*/
        // SubProg emit_op pc: 306 op: ASSIGN_I (113)
        _45last_op_51268 = 0;
        // SubProg emit_op pc: 309 op: STARTLINE (58)

        /** emit.e:679		last_pc = 0*/
        // SubProg emit_op pc: 311 op: ASSIGN_I (113)
        _45last_pc_51269 = 0;
        // SubProg emit_op pc: 314 op: STARTLINE (58)

        /** emit.e:680	end procedure*/
        // SubProg emit_op pc: 316 op: ELSE (23)
        goto LB; // [316] 319
        // SubProg emit_op pc: 318 op: NOP1 (159)
LB: // addr: 319 pc: 318 sub: 51307 op: 159
        // SubProg emit_op pc: 319 op: STARTLINE (58)

        /** emit.e:761					break "EMIT"*/
        // SubProg emit_op pc: 321 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var temp_51336
        DeRef(_temp_51336);
        _temp_51336 = NOVALUE;
        // SubProg emit_op pc: 323 op: ELSE (23)
        goto LC; // [323] 7737
        // SubProg emit_op pc: 325 op: NOP1 (159)
L6: // addr: 326 pc: 325 sub: 51307 op: 159
        // SubProg emit_op pc: 326 op: NOP1 (159)
        // SubProg emit_op pc: 327 op: STARTLINE (58)

        /** emit.e:764				clear_temp( Code[$] )*/
        // SubProg emit_op pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 331 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26445 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26445 = 1;
        }
        // SubProg emit_op pc: 334 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26446 = (object)*(((s1_ptr)_2)->base + _26445);
        // SubProg emit_op pc: 338 op: PROC (27)
        Ref(_26446);
        _45clear_temp(_26446);
        _26446 = NOVALUE;
        // SubProg emit_op pc: 341 op: STARTLINE (58)

        /** emit.e:765				Code = remove( Code, length( Code ) ) -- drop previous target*/
        // SubProg emit_op pc: 343 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 345 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 347 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26447 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26447 = 1;
        }
        // SubProg emit_op pc: 350 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_34Code_15276);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_26447)) ? _26447 : (object)(DBL_PTR(_26447)->dbl);
            int stop = (IS_ATOM_INT(_26447)) ? _26447 : (object)(DBL_PTR(_26447)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_34Code_15276), start, &_34Code_15276 );
                }
                else Tail(SEQ_PTR(_34Code_15276), stop+1, &_34Code_15276);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_34Code_15276), start, &_34Code_15276);
            }
            else {
                assign_slice_seq = &assign_space;
                _34Code_15276 = Remove_elements(start, stop, (SEQ_PTR(_34Code_15276)->ref == 1));
            }
        }
        _26447 = NOVALUE;
        _26447 = NOVALUE;
        // SubProg emit_op pc: 355 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 357 op: STARTLINE (58)

        /** emit.e:766				op = previous_op -- keep same previous op*/
        // SubProg emit_op pc: 359 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 361 op: ASSIGN (18)
        _op_51309 = _34previous_op_15286;
        // SubProg emit_op pc: 364 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 366 op: STARTLINE (58)

        /** emit.e:767				if IsInteger(target) then*/
        // SubProg emit_op pc: 368 op: PROC (27)
        _26449 = _45IsInteger(_target_51316);
        // SubProg emit_op pc: 372 op: IF (20)
        if (_26449 == 0) {
            DeRef(_26449);
            _26449 = NOVALUE;
            goto LD; // [372] 588
        }
        else {
            if (!IS_ATOM_INT(_26449) && DBL_PTR(_26449)->dbl == 0.0){
                DeRef(_26449);
                _26449 = NOVALUE;
                goto LD; // [372] 588
            }
            DeRef(_26449);
            _26449 = NOVALUE;
        }
        DeRef(_26449);
        _26449 = NOVALUE;
        // SubProg emit_op pc: 375 op: STARTLINE (58)

        /** emit.e:768					if previous_op = RHS_SUBS then*/
        // SubProg emit_op pc: 377 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 379 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 381 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 25)
        goto LE; // [381] 412
        // SubProg emit_op pc: 385 op: STARTLINE (58)

        /** emit.e:769						op = RHS_SUBS_I*/
        // SubProg emit_op pc: 387 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 389 op: ASSIGN (18)
        _op_51309 = 114;
        // SubProg emit_op pc: 392 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 394 op: STARTLINE (58)

        /** emit.e:770						backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 396 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 398 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26451 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26451 = 1;
        }
        // SubProg emit_op pc: 401 op: MINUS (10)
        _26452 = _26451 - 2;
        _26451 = NOVALUE;
        // SubProg emit_op pc: 405 op: PROC (27)
        _45backpatch(_26452, 114);
        _26452 = NOVALUE;
        // SubProg emit_op pc: 409 op: ELSE (23)
        goto LF; // [409] 587
        // SubProg emit_op pc: 411 op: NOP1 (159)
LE: // addr: 412 pc: 411 sub: 51307 op: 159
        // SubProg emit_op pc: 412 op: STARTLINE (58)

        /** emit.e:772					elsif previous_op = PLUS1 then*/
        // SubProg emit_op pc: 414 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 416 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 418 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 93)
        goto L10; // [418] 449
        // SubProg emit_op pc: 422 op: STARTLINE (58)

        /** emit.e:773						op = PLUS1_I*/
        // SubProg emit_op pc: 424 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 426 op: ASSIGN (18)
        _op_51309 = 117;
        // SubProg emit_op pc: 429 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 431 op: STARTLINE (58)

        /** emit.e:774						backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 433 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 435 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26454 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26454 = 1;
        }
        // SubProg emit_op pc: 438 op: MINUS (10)
        _26455 = _26454 - 2;
        _26454 = NOVALUE;
        // SubProg emit_op pc: 442 op: PROC (27)
        _45backpatch(_26455, 117);
        _26455 = NOVALUE;
        // SubProg emit_op pc: 446 op: ELSE (23)
        goto LF; // [446] 587
        // SubProg emit_op pc: 448 op: NOP1 (159)
L10: // addr: 449 pc: 448 sub: 51307 op: 159
        // SubProg emit_op pc: 449 op: STARTLINE (58)

        /** emit.e:776					elsif previous_op = PLUS or previous_op = MINUS then*/
        // SubProg emit_op pc: 451 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 453 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 455 op: EQUALS (3)
        _26456 = (_34previous_op_15286 == 11);
        // SubProg emit_op pc: 459 op: SC1_OR_IF (147)
        if (_26456 != 0) {
            goto L11; // [459] 476
        }
        // SubProg emit_op pc: 463 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 465 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 467 op: EQUALS (3)
        _26458 = (_34previous_op_15286 == 10);
        // SubProg emit_op pc: 471 op: NOP1 (159)
        // SubProg emit_op pc: 472 op: IF (20)
        if (_26458 == 0)
        {
            DeRef(_26458);
            _26458 = NOVALUE;
            goto L12; // [472] 567
        }
        else{
            DeRef(_26458);
            _26458 = NOVALUE;
        }
        // SubProg emit_op pc: 475 op: NOP1 (159)
L11: // addr: 476 pc: 475 sub: 51307 op: 159
        // SubProg emit_op pc: 476 op: STARTLINE (58)

        /** emit.e:777						if IsInteger(Code[$]) and*/
        // SubProg emit_op pc: 478 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 480 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26459 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26459 = 1;
        }
        // SubProg emit_op pc: 483 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26460 = (object)*(((s1_ptr)_2)->base + _26459);
        // SubProg emit_op pc: 487 op: PROC (27)
        Ref(_26460);
        _26461 = _45IsInteger(_26460);
        _26460 = NOVALUE;
        // SubProg emit_op pc: 491 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26461)) {
            if (_26461 == 0) {
                goto LF; // [491] 587
            }
        }
        else {
            if (DBL_PTR(_26461)->dbl == 0.0) {
                goto LF; // [491] 587
            }
        }
        // SubProg emit_op pc: 495 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 497 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26463 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26463 = 1;
        }
        // SubProg emit_op pc: 500 op: MINUS (10)
        _26464 = _26463 - 1;
        _26463 = NOVALUE;
        // SubProg emit_op pc: 504 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26465 = (object)*(((s1_ptr)_2)->base + _26464);
        // SubProg emit_op pc: 508 op: PROC (27)
        Ref(_26465);
        _26466 = _45IsInteger(_26465);
        _26465 = NOVALUE;
        // SubProg emit_op pc: 512 op: NOP1 (159)
        // SubProg emit_op pc: 513 op: IF (20)
        if (_26466 == 0) {
            DeRef(_26466);
            _26466 = NOVALUE;
            goto LF; // [513] 587
        }
        else {
            if (!IS_ATOM_INT(_26466) && DBL_PTR(_26466)->dbl == 0.0){
                DeRef(_26466);
                _26466 = NOVALUE;
                goto LF; // [513] 587
            }
            DeRef(_26466);
            _26466 = NOVALUE;
        }
        DeRef(_26466);
        _26466 = NOVALUE;
        // SubProg emit_op pc: 516 op: STARTLINE (58)

        /** emit.e:779							if previous_op = PLUS then*/
        // SubProg emit_op pc: 518 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 520 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 522 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 11)
        goto L13; // [522] 538
        // SubProg emit_op pc: 526 op: STARTLINE (58)

        /** emit.e:780								op = PLUS_I*/
        // SubProg emit_op pc: 528 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 530 op: ASSIGN (18)
        _op_51309 = 115;
        // SubProg emit_op pc: 533 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 535 op: ELSE (23)
        goto L14; // [535] 548
        // SubProg emit_op pc: 537 op: NOP1 (159)
L13: // addr: 538 pc: 537 sub: 51307 op: 159
        // SubProg emit_op pc: 538 op: STARTLINE (58)

        /** emit.e:782								op = MINUS_I*/
        // SubProg emit_op pc: 540 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 542 op: ASSIGN (18)
        _op_51309 = 116;
        // SubProg emit_op pc: 545 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 547 op: NOP1 (159)
L14: // addr: 548 pc: 547 sub: 51307 op: 159
        // SubProg emit_op pc: 548 op: STARTLINE (58)

        /** emit.e:784							backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 550 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 552 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26468 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26468 = 1;
        }
        // SubProg emit_op pc: 555 op: MINUS (10)
        _26469 = _26468 - 2;
        _26468 = NOVALUE;
        // SubProg emit_op pc: 559 op: PROC (27)
        _45backpatch(_26469, _op_51309);
        _26469 = NOVALUE;
        // SubProg emit_op pc: 563 op: NOP1 (159)
        // SubProg emit_op pc: 564 op: ELSE (23)
        goto LF; // [564] 587
        // SubProg emit_op pc: 566 op: NOP1 (159)
L12: // addr: 567 pc: 566 sub: 51307 op: 159
        // SubProg emit_op pc: 567 op: STARTLINE (58)

        /** emit.e:790						if IsInteger(source) then*/
        // SubProg emit_op pc: 569 op: PROC (27)
        _26470 = _45IsInteger(_source_51315);
        // SubProg emit_op pc: 573 op: IF (20)
        if (_26470 == 0) {
            DeRef(_26470);
            _26470 = NOVALUE;
            goto L15; // [573] 586
        }
        else {
            if (!IS_ATOM_INT(_26470) && DBL_PTR(_26470)->dbl == 0.0){
                DeRef(_26470);
                _26470 = NOVALUE;
                goto L15; // [573] 586
            }
            DeRef(_26470);
            _26470 = NOVALUE;
        }
        DeRef(_26470);
        _26470 = NOVALUE;
        // SubProg emit_op pc: 576 op: STARTLINE (58)

        /** emit.e:791							op = ASSIGN_I -- fake to avoid subsequent check*/
        // SubProg emit_op pc: 578 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 580 op: ASSIGN (18)
        _op_51309 = 113;
        // SubProg emit_op pc: 583 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 585 op: NOP1 (159)
L15: // addr: 586 pc: 585 sub: 51307 op: 159
        // SubProg emit_op pc: 586 op: NOP1 (159)
LF: // addr: 587 pc: 586 sub: 51307 op: 159
        // SubProg emit_op pc: 587 op: NOP1 (159)
LD: // addr: 588 pc: 587 sub: 51307 op: 159
        // SubProg emit_op pc: 588 op: STARTLINE (58)

        /** emit.e:795				last_op = last_op_backup*/
        // SubProg emit_op pc: 590 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 593 op: STARTLINE (58)

        /** emit.e:796				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 595 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 598 op: ELSE (23)
        goto L16; // [598] 743
        // SubProg emit_op pc: 600 op: NOP1 (159)
L5: // addr: 601 pc: 600 sub: 51307 op: 159
        // SubProg emit_op pc: 601 op: STARTLINE (58)

        /** emit.e:798				if IsInteger(source) and IsInteger(target) then*/
        // SubProg emit_op pc: 603 op: PROC (27)
        _26471 = _45IsInteger(_source_51315);
        // SubProg emit_op pc: 607 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26471)) {
            if (_26471 == 0) {
                goto L17; // [607] 629
            }
        }
        else {
            if (DBL_PTR(_26471)->dbl == 0.0) {
                goto L17; // [607] 629
            }
        }
        // SubProg emit_op pc: 611 op: PROC (27)
        _26473 = _45IsInteger(_target_51316);
        // SubProg emit_op pc: 615 op: NOP1 (159)
        // SubProg emit_op pc: 616 op: IF (20)
        if (_26473 == 0) {
            DeRef(_26473);
            _26473 = NOVALUE;
            goto L17; // [616] 629
        }
        else {
            if (!IS_ATOM_INT(_26473) && DBL_PTR(_26473)->dbl == 0.0){
                DeRef(_26473);
                _26473 = NOVALUE;
                goto L17; // [616] 629
            }
            DeRef(_26473);
            _26473 = NOVALUE;
        }
        DeRef(_26473);
        _26473 = NOVALUE;
        // SubProg emit_op pc: 619 op: STARTLINE (58)

        /** emit.e:799					op = ASSIGN_I*/
        // SubProg emit_op pc: 621 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 623 op: ASSIGN (18)
        _op_51309 = 113;
        // SubProg emit_op pc: 626 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 628 op: NOP1 (159)
L17: // addr: 629 pc: 628 sub: 51307 op: 159
        // SubProg emit_op pc: 629 op: STARTLINE (58)

        /** emit.e:801				if source > 0 and target > 0 and*/
        // SubProg emit_op pc: 631 op: GREATER (6)
        _26474 = (_source_51315 > 0);
        // SubProg emit_op pc: 635 op: SC1_AND (141)
        if (_26474 == 0) {
            _26475 = 0;
            goto L18; // [635] 647
        }
        // SubProg emit_op pc: 639 op: GREATER (6)
        _26476 = (_target_51316 > 0);
        // SubProg emit_op pc: 643 op: SC2_AND (142)
        _26475 = (_26476 != 0);
        // SubProg emit_op pc: 646 op: NOP1 (159)
L18: // addr: 647 pc: 646 sub: 51307 op: 159
        // SubProg emit_op pc: 647 op: SC1_AND (141)
        if (_26475 == 0) {
            _26477 = 0;
            goto L19; // [647] 673
        }
        // SubProg emit_op pc: 651 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 653 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26478 = (object)*(((s1_ptr)_2)->base + _source_51315);
        // SubProg emit_op pc: 657 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 659 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26478);
        _26479 = (object)*(((s1_ptr)_2)->base + 3);
        _26478 = NOVALUE;
        // SubProg emit_op pc: 663 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 665 op: EQUALS (3)
        if (IS_ATOM_INT(_26479)) {
            _26480 = (_26479 == 2);
        }
        else {
            _26480 = binary_op(EQUALS, _26479, 2);
        }
        _26479 = NOVALUE;
        // SubProg emit_op pc: 669 op: SC2_AND (142)
        if (IS_ATOM_INT(_26480))
        _26477 = (_26480 != 0);
        else
        _26477 = DBL_PTR(_26480)->dbl != 0.0;
        // SubProg emit_op pc: 672 op: NOP1 (159)
L19: // addr: 673 pc: 672 sub: 51307 op: 159
        // SubProg emit_op pc: 673 op: SC1_AND_IF (146)
        if (_26477 == 0) {
            goto L1A; // [673] 727
        }
        // SubProg emit_op pc: 677 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 679 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26482 = (object)*(((s1_ptr)_2)->base + _target_51316);
        // SubProg emit_op pc: 683 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 685 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26482);
        _26483 = (object)*(((s1_ptr)_2)->base + 3);
        _26482 = NOVALUE;
        // SubProg emit_op pc: 689 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 691 op: EQUALS (3)
        if (IS_ATOM_INT(_26483)) {
            _26484 = (_26483 == 2);
        }
        else {
            _26484 = binary_op(EQUALS, _26483, 2);
        }
        _26483 = NOVALUE;
        // SubProg emit_op pc: 695 op: NOP1 (159)
        // SubProg emit_op pc: 696 op: IF (20)
        if (_26484 == 0) {
            DeRef(_26484);
            _26484 = NOVALUE;
            goto L1A; // [696] 727
        }
        else {
            if (!IS_ATOM_INT(_26484) && DBL_PTR(_26484)->dbl == 0.0){
                DeRef(_26484);
                _26484 = NOVALUE;
                goto L1A; // [696] 727
            }
            DeRef(_26484);
            _26484 = NOVALUE;
        }
        DeRef(_26484);
        _26484 = NOVALUE;
        // SubProg emit_op pc: 699 op: STARTLINE (58)

        /** emit.e:806					SymTab[target][S_OBJ] = SymTab[source][S_OBJ]*/
        // SubProg emit_op pc: 701 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 703 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        _3 = (object)(_target_51316 + ((s1_ptr)_2)->base);
        // SubProg emit_op pc: 708 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 710 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 712 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26487 = (object)*(((s1_ptr)_2)->base + _source_51315);
        // SubProg emit_op pc: 716 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 718 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26487);
        _26488 = (object)*(((s1_ptr)_2)->base + 1);
        _26487 = NOVALUE;
        // SubProg emit_op pc: 722 op: PASSIGN_SUBS (162)
        Ref(_26488);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26488;
        if( _1 != _26488 ){
            DeRef(_1);
        }
        _26488 = NOVALUE;
        _26485 = NOVALUE;
        // SubProg emit_op pc: 726 op: NOP1 (159)
L1A: // addr: 727 pc: 726 sub: 51307 op: 159
        // SubProg emit_op pc: 727 op: STARTLINE (58)

        /** emit.e:809				emit_opcode(op)*/
        // SubProg emit_op pc: 729 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 732 op: STARTLINE (58)

        /** emit.e:810				emit_addr(source)*/
        // SubProg emit_op pc: 734 op: PROC (27)
        _45emit_addr(_source_51315);
        // SubProg emit_op pc: 737 op: STARTLINE (58)

        /** emit.e:811				last_op = op*/
        // SubProg emit_op pc: 739 op: ASSIGN_I (113)
        _45last_op_51268 = _op_51309;
        // SubProg emit_op pc: 742 op: NOP1 (159)
L16: // addr: 743 pc: 742 sub: 51307 op: 159
        // SubProg emit_op pc: 743 op: STARTLINE (58)

        /** emit.e:814			assignable = FALSE*/
        // SubProg emit_op pc: 745 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 747 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 750 op: STARTLINE (58)

        /** emit.e:815			emit_addr(target)*/
        // SubProg emit_op pc: 752 op: PROC (27)
        _45emit_addr(_target_51316);
        // SubProg emit_op pc: 755 op: STARTLINE (58)

        /** emit.e:817			if length(temp) then*/
        // SubProg emit_op pc: 757 op: LENGTH (42)
        if (IS_SEQUENCE(_temp_51336)){
                _26489 = SEQ_PTR(_temp_51336)->length;
        }
        else {
            _26489 = 1;
        }
        // SubProg emit_op pc: 760 op: IF (20)
        if (_26489 == 0)
        {
            _26489 = NOVALUE;
            goto L1B; // [760] 792
        }
        else{
            _26489 = NOVALUE;
        }
        // SubProg emit_op pc: 763 op: STARTLINE (58)

        /** emit.e:819				for i = 1 to length( temp ) do*/
        // SubProg emit_op pc: 765 op: LENGTH (42)
        if (IS_SEQUENCE(_temp_51336)){
                _26490 = SEQ_PTR(_temp_51336)->length;
        }
        else {
            _26490 = 1;
        }
        // SubProg emit_op pc: 768 op: FOR_I (125)
        {
            object _i_51482;
            _i_51482 = 1;
L1C: // addr: 775 pc: 768 sub: 51307 op: 125
            if (_i_51482 > _26490){
                goto L1D; // [768] 791
            }
            // SubProg emit_op pc: 775 op: STARTLINE (58)

            /** emit.e:820					flush_temp( temp[i] )*/
            // SubProg emit_op pc: 777 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_temp_51336);
            _26491 = (object)*(((s1_ptr)_2)->base + _i_51482);
            // SubProg emit_op pc: 781 op: PROC (27)
            Ref(_26491);
            _45flush_temp(_26491);
            _26491 = NOVALUE;
            // SubProg emit_op pc: 784 op: STARTLINE (58)

            /** emit.e:821				end for*/
            // SubProg emit_op pc: 786 op: ENDFOR_INT_UP1 (54)
            _i_51482 = _i_51482 + 1;
            goto L1C; // [786] 775
L1D: // addr: 791 pc: 786 sub: 51307 op: 54
            ;
        }
        // SubProg emit_op pc: 791 op: NOP1 (159)
L1B: // addr: 792 pc: 791 sub: 51307 op: 159
        // SubProg emit_op pc: 792 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var temp_51336
        DeRef(_temp_51336);
        _temp_51336 = NOVALUE;
        // SubProg emit_op pc: 794 op: ELSE (23)
        goto LC; // [794] 7737
        // SubProg emit_op pc: 796 op: STARTLINE (58)

        /** emit.e:824		case RHS_SUBS then*/
        // SubProg emit_op pc: 798 op: CASE (186)
        case 25:
        // SubProg emit_op pc: 800 op: STARTLINE (58)

        /** emit.e:825			b = Pop() -- subscript*/
        // SubProg emit_op pc: 802 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 805 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 807 op: STARTLINE (58)

        /** emit.e:826			c = Pop() -- sequence*/
        // SubProg emit_op pc: 809 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 812 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 814 op: STARTLINE (58)

        /** emit.e:827			target = NewTempSym() -- target*/
        // SubProg emit_op pc: 816 op: PROC (27)
        _target_51316 = _53NewTempSym(0);
        // SubProg emit_op pc: 820 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_target_51316)) {
            _1 = (object)(DBL_PTR(_target_51316)->dbl);
            DeRefDS(_target_51316);
            _target_51316 = _1;
        }
        // SubProg emit_op pc: 822 op: STARTLINE (58)

        /** emit.e:828			if c < 0 or length(SymTab[c]) < S_VTYPE or SymTab[c][S_VTYPE] < 0 then -- forward reference*/
        // SubProg emit_op pc: 824 op: LESS (1)
        _26495 = (_c_51313 < 0);
        // SubProg emit_op pc: 828 op: SC1_OR (143)
        if (_26495 != 0) {
            _26496 = 1;
            goto L1E; // [828] 851
        }
        // SubProg emit_op pc: 832 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 834 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26497 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 838 op: LENGTH (42)
        if (IS_SEQUENCE(_26497)){
                _26498 = SEQ_PTR(_26497)->length;
        }
        else {
            _26498 = 1;
        }
        _26497 = NOVALUE;
        // SubProg emit_op pc: 841 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 843 op: LESS (1)
        _26499 = (_26498 < 15);
        _26498 = NOVALUE;
        // SubProg emit_op pc: 847 op: SC2_OR (144)
        _26496 = (_26499 != 0);
        // SubProg emit_op pc: 850 op: NOP1 (159)
L1E: // addr: 851 pc: 850 sub: 51307 op: 159
        // SubProg emit_op pc: 851 op: SC1_OR_IF (147)
        if (_26496 != 0) {
            goto L1F; // [851] 876
        }
        // SubProg emit_op pc: 855 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 857 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26501 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 861 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 863 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26501);
        _26502 = (object)*(((s1_ptr)_2)->base + 15);
        _26501 = NOVALUE;
        // SubProg emit_op pc: 867 op: LESS (1)
        if (IS_ATOM_INT(_26502)) {
            _26503 = (_26502 < 0);
        }
        else {
            _26503 = binary_op(LESS, _26502, 0);
        }
        _26502 = NOVALUE;
        // SubProg emit_op pc: 871 op: NOP1 (159)
        // SubProg emit_op pc: 872 op: IF (20)
        if (_26503 == 0) {
            DeRef(_26503);
            _26503 = NOVALUE;
            goto L20; // [872] 888
        }
        else {
            if (!IS_ATOM_INT(_26503) && DBL_PTR(_26503)->dbl == 0.0){
                DeRef(_26503);
                _26503 = NOVALUE;
                goto L20; // [872] 888
            }
            DeRef(_26503);
            _26503 = NOVALUE;
        }
        DeRef(_26503);
        _26503 = NOVALUE;
        // SubProg emit_op pc: 875 op: NOP1 (159)
L1F: // addr: 876 pc: 875 sub: 51307 op: 159
        // SubProg emit_op pc: 876 op: STARTLINE (58)

        /** emit.e:830				op = RHS_SUBS_CHECK*/
        // SubProg emit_op pc: 878 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 880 op: ASSIGN (18)
        _op_51309 = 92;
        // SubProg emit_op pc: 883 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 885 op: ELSE (23)
        goto L21; // [885] 1049
        // SubProg emit_op pc: 887 op: NOP1 (159)
L20: // addr: 888 pc: 887 sub: 51307 op: 159
        // SubProg emit_op pc: 888 op: STARTLINE (58)

        /** emit.e:831			elsif SymTab[c][S_MODE] = M_NORMAL then*/
        // SubProg emit_op pc: 890 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 892 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26504 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 896 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 898 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26504);
        _26505 = (object)*(((s1_ptr)_2)->base + 3);
        _26504 = NOVALUE;
        // SubProg emit_op pc: 902 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 904 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26505, 1)){
            _26505 = NOVALUE;
            goto L22; // [904] 991
        }
        _26505 = NOVALUE;
        // SubProg emit_op pc: 908 op: STARTLINE (58)

        /** emit.e:832				if SymTab[c][S_VTYPE] != sequence_type and*/
        // SubProg emit_op pc: 910 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 912 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26507 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 916 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 918 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26507);
        _26508 = (object)*(((s1_ptr)_2)->base + 15);
        _26507 = NOVALUE;
        // SubProg emit_op pc: 922 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 924 op: NOTEQ (4)
        if (IS_ATOM_INT(_26508)) {
            _26509 = (_26508 != _53sequence_type_46261);
        }
        else {
            _26509 = binary_op(NOTEQ, _26508, _53sequence_type_46261);
        }
        _26508 = NOVALUE;
        // SubProg emit_op pc: 928 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26509)) {
            if (_26509 == 0) {
                goto L21; // [928] 1049
            }
        }
        else {
            if (DBL_PTR(_26509)->dbl == 0.0) {
                goto L21; // [928] 1049
            }
        }
        // SubProg emit_op pc: 932 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 934 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 936 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 938 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26511 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 942 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 944 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26511);
        _26512 = (object)*(((s1_ptr)_2)->base + 15);
        _26511 = NOVALUE;
        // SubProg emit_op pc: 948 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_26512)){
            _26513 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26512)->dbl));
        }
        else{
            _26513 = (object)*(((s1_ptr)_2)->base + _26512);
        }
        // SubProg emit_op pc: 952 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 954 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26513);
        _26514 = (object)*(((s1_ptr)_2)->base + 2);
        _26513 = NOVALUE;
        // SubProg emit_op pc: 958 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_26514)){
            _26515 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26514)->dbl));
        }
        else{
            _26515 = (object)*(((s1_ptr)_2)->base + _26514);
        }
        // SubProg emit_op pc: 962 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 964 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26515);
        _26516 = (object)*(((s1_ptr)_2)->base + 15);
        _26515 = NOVALUE;
        // SubProg emit_op pc: 968 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 970 op: NOTEQ (4)
        if (IS_ATOM_INT(_26516)) {
            _26517 = (_26516 != _53sequence_type_46261);
        }
        else {
            _26517 = binary_op(NOTEQ, _26516, _53sequence_type_46261);
        }
        _26516 = NOVALUE;
        // SubProg emit_op pc: 974 op: NOP1 (159)
        // SubProg emit_op pc: 975 op: IF (20)
        if (_26517 == 0) {
            DeRef(_26517);
            _26517 = NOVALUE;
            goto L21; // [975] 1049
        }
        else {
            if (!IS_ATOM_INT(_26517) && DBL_PTR(_26517)->dbl == 0.0){
                DeRef(_26517);
                _26517 = NOVALUE;
                goto L21; // [975] 1049
            }
            DeRef(_26517);
            _26517 = NOVALUE;
        }
        DeRef(_26517);
        _26517 = NOVALUE;
        // SubProg emit_op pc: 978 op: STARTLINE (58)

        /** emit.e:835					op = RHS_SUBS_CHECK*/
        // SubProg emit_op pc: 980 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 982 op: ASSIGN (18)
        _op_51309 = 92;
        // SubProg emit_op pc: 985 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 987 op: NOP1 (159)
        // SubProg emit_op pc: 988 op: ELSE (23)
        goto L21; // [988] 1049
        // SubProg emit_op pc: 990 op: NOP1 (159)
L22: // addr: 991 pc: 990 sub: 51307 op: 159
        // SubProg emit_op pc: 991 op: STARTLINE (58)

        /** emit.e:837			elsif SymTab[c][S_MODE] != M_CONSTANT or*/
        // SubProg emit_op pc: 993 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 995 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26518 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 999 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1001 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26518);
        _26519 = (object)*(((s1_ptr)_2)->base + 3);
        _26518 = NOVALUE;
        // SubProg emit_op pc: 1005 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1007 op: NOTEQ (4)
        if (IS_ATOM_INT(_26519)) {
            _26520 = (_26519 != 2);
        }
        else {
            _26520 = binary_op(NOTEQ, _26519, 2);
        }
        _26519 = NOVALUE;
        // SubProg emit_op pc: 1011 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_26520)) {
            if (_26520 != 0) {
                goto L23; // [1011] 1038
            }
        }
        else {
            if (DBL_PTR(_26520)->dbl != 0.0) {
                goto L23; // [1011] 1038
            }
        }
        // SubProg emit_op pc: 1015 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1017 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26522 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 1021 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1023 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26522);
        _26523 = (object)*(((s1_ptr)_2)->base + 1);
        _26522 = NOVALUE;
        // SubProg emit_op pc: 1027 op: IS_A_SEQUENCE (68)
        _26524 = IS_SEQUENCE(_26523);
        _26523 = NOVALUE;
        // SubProg emit_op pc: 1030 op: NOT (7)
        _26525 = (_26524 == 0);
        _26524 = NOVALUE;
        // SubProg emit_op pc: 1033 op: NOP1 (159)
        // SubProg emit_op pc: 1034 op: IF (20)
        if (_26525 == 0)
        {
            DeRef(_26525);
            _26525 = NOVALUE;
            goto L24; // [1034] 1048
        }
        else{
            DeRef(_26525);
            _26525 = NOVALUE;
        }
        // SubProg emit_op pc: 1037 op: NOP1 (159)
L23: // addr: 1038 pc: 1037 sub: 51307 op: 159
        // SubProg emit_op pc: 1038 op: STARTLINE (58)

        /** emit.e:839				op = RHS_SUBS_CHECK*/
        // SubProg emit_op pc: 1040 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1042 op: ASSIGN (18)
        _op_51309 = 92;
        // SubProg emit_op pc: 1045 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1047 op: NOP1 (159)
L24: // addr: 1048 pc: 1047 sub: 51307 op: 159
        // SubProg emit_op pc: 1048 op: NOP1 (159)
L21: // addr: 1049 pc: 1048 sub: 51307 op: 159
        // SubProg emit_op pc: 1049 op: STARTLINE (58)

        /** emit.e:841			emit_opcode(op)*/
        // SubProg emit_op pc: 1051 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 1054 op: STARTLINE (58)

        /** emit.e:842			emit_addr(c)*/
        // SubProg emit_op pc: 1056 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 1059 op: STARTLINE (58)

        /** emit.e:843			emit_addr(b)*/
        // SubProg emit_op pc: 1061 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 1064 op: STARTLINE (58)

        /** emit.e:844			assignable = TRUE*/
        // SubProg emit_op pc: 1066 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1068 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 1071 op: STARTLINE (58)

        /** emit.e:845			Push(target)*/
        // SubProg emit_op pc: 1073 op: PROC (27)
        _45Push(_target_51316);
        // SubProg emit_op pc: 1076 op: STARTLINE (58)

        /** emit.e:846			emit_addr(target)*/
        // SubProg emit_op pc: 1078 op: PROC (27)
        _45emit_addr(_target_51316);
        // SubProg emit_op pc: 1081 op: STARTLINE (58)

        /** emit.e:847			emit_temp(target, NEW_REFERENCE)*/
        // SubProg emit_op pc: 1083 op: PROC (27)
        _45emit_temp(_target_51316, 1);
        // SubProg emit_op pc: 1087 op: STARTLINE (58)

        /** emit.e:848			current_sequence = append(current_sequence, target)*/
        // SubProg emit_op pc: 1089 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1091 op: APPEND (35)
        Append(&_45current_sequence_50379, _45current_sequence_50379, _target_51316);
        // SubProg emit_op pc: 1095 op: STARTLINE (58)

        /** emit.e:849			flush_temp( Code[$-2] )*/
        // SubProg emit_op pc: 1097 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1099 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26527 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26527 = 1;
        }
        // SubProg emit_op pc: 1102 op: MINUS (10)
        _26528 = _26527 - 2;
        _26527 = NOVALUE;
        // SubProg emit_op pc: 1106 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26529 = (object)*(((s1_ptr)_2)->base + _26528);
        // SubProg emit_op pc: 1110 op: PROC (27)
        Ref(_26529);
        _45flush_temp(_26529);
        _26529 = NOVALUE;
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
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 1126 op: STARTLINE (58)

        /** emit.e:854			subsym = op_info1*/
        // SubProg emit_op pc: 1128 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1130 op: ASSIGN (18)
        _subsym_51317 = _45op_info1_50371;
        // SubProg emit_op pc: 1133 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1135 op: STARTLINE (58)

        /** emit.e:855			n = SymTab[subsym][S_NUM_ARGS]*/
        // SubProg emit_op pc: 1137 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1139 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26530 = (object)*(((s1_ptr)_2)->base + _subsym_51317);
        // SubProg emit_op pc: 1143 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26530);
        if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
            _n_51322 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
        }
        else{
            _n_51322 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
        }
        if (!IS_ATOM_INT(_n_51322)){
            _n_51322 = (object)DBL_PTR(_n_51322)->dbl;
        }
        _26530 = NOVALUE;
        // SubProg emit_op pc: 1151 op: STARTLINE (58)

        /** emit.e:857			if subsym = CurrentSub then*/
        // SubProg emit_op pc: 1153 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1155 op: EQUALS_IFW (104)
        if (_subsym_51317 != _34CurrentSub_15196)
        goto L25; // [1155] 1340
        // SubProg emit_op pc: 1159 op: STARTLINE (58)

        /** emit.e:860				for i = cgi-n+1 to cgi do*/
        // SubProg emit_op pc: 1161 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1163 op: MINUS (10)
        _26533 = _45cgi_50387 - _n_51322;
        if ((object)((uintptr_t)_26533 +(uintptr_t) HIGH_BITS) >= 0){
            _26533 = NewDouble((eudouble)_26533);
        }
        // SubProg emit_op pc: 1167 op: PLUS1 (93)
        if (IS_ATOM_INT(_26533)) {
            _26534 = _26533 + 1;
            if (_26534 > MAXINT){
                _26534 = NewDouble((eudouble)_26534);
            }
        }
        else
        _26534 = binary_op(PLUS, 1, _26533);
        DeRef(_26533);
        _26533 = NOVALUE;
        // SubProg emit_op pc: 1171 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1173 op: ASSIGN (18)
        _26535 = _45cgi_50387;
        // SubProg emit_op pc: 1176 op: FOR (21)
        {
            object _i_51568;
            Ref(_26534);
            _i_51568 = _26534;
L26: // addr: 1183 pc: 1176 sub: 51307 op: 21
            if (binary_op_a(GREATER, _i_51568, _26535)){
                goto L27; // [1176] 1339
            }
            // SubProg emit_op pc: 1183 op: STARTLINE (58)

            /** emit.e:861					if cg_stack[i] > 0 then -- if it's a forward reference, it's not a private*/
            // SubProg emit_op pc: 1185 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1187 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568)){
                _26536 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            }
            else{
                _26536 = (object)*(((s1_ptr)_2)->base + _i_51568);
            }
            // SubProg emit_op pc: 1191 op: GREATER_IFW (107)
            if (binary_op_a(LESSEQ, _26536, 0)){
                _26536 = NOVALUE;
                goto L28; // [1191] 1332
            }
            _26536 = NOVALUE;
            // SubProg emit_op pc: 1195 op: STARTLINE (58)

            /** emit.e:862						if SymTab[cg_stack[i]][S_SCOPE] = SC_PRIVATE and*/
            // SubProg emit_op pc: 1197 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1199 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1201 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568)){
                _26538 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            }
            else{
                _26538 = (object)*(((s1_ptr)_2)->base + _i_51568);
            }
            // SubProg emit_op pc: 1205 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35SymTab_14156);
            if (!IS_ATOM_INT(_26538)){
                _26539 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26538)->dbl));
            }
            else{
                _26539 = (object)*(((s1_ptr)_2)->base + _26538);
            }
            // SubProg emit_op pc: 1209 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1211 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_26539);
            _26540 = (object)*(((s1_ptr)_2)->base + 4);
            _26539 = NOVALUE;
            // SubProg emit_op pc: 1215 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1217 op: EQUALS (3)
            if (IS_ATOM_INT(_26540)) {
                _26541 = (_26540 == 3);
            }
            else {
                _26541 = binary_op(EQUALS, _26540, 3);
            }
            _26540 = NOVALUE;
            // SubProg emit_op pc: 1221 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_26541)) {
                if (_26541 == 0) {
                    goto L29; // [1221] 1299
                }
            }
            else {
                if (DBL_PTR(_26541)->dbl == 0.0) {
                    goto L29; // [1221] 1299
                }
            }
            // SubProg emit_op pc: 1225 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1227 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568)){
                _26543 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            }
            else{
                _26543 = (object)*(((s1_ptr)_2)->base + _i_51568);
            }
            // SubProg emit_op pc: 1233 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35SymTab_14156);
            if (!IS_ATOM_INT(_26543)){
                _26544 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26543)->dbl));
            }
            else{
                _26544 = (object)*(((s1_ptr)_2)->base + _26543);
            }
            // SubProg emit_op pc: 1237 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1239 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_26544);
            _26545 = (object)*(((s1_ptr)_2)->base + 16);
            _26544 = NOVALUE;
            // SubProg emit_op pc: 1243 op: LESS (1)
            if (IS_ATOM_INT(_26545) && IS_ATOM_INT(_i_51568)) {
                _26546 = (_26545 < _i_51568);
            }
            else {
                _26546 = binary_op(LESS, _26545, _i_51568);
            }
            _26545 = NOVALUE;
            // SubProg emit_op pc: 1247 op: NOP1 (159)
            // SubProg emit_op pc: 1248 op: IF (20)
            if (_26546 == 0) {
                DeRef(_26546);
                _26546 = NOVALUE;
                goto L29; // [1248] 1299
            }
            else {
                if (!IS_ATOM_INT(_26546) && DBL_PTR(_26546)->dbl == 0.0){
                    DeRef(_26546);
                    _26546 = NOVALUE;
                    goto L29; // [1248] 1299
                }
                DeRef(_26546);
                _26546 = NOVALUE;
            }
            DeRef(_26546);
            _26546 = NOVALUE;
            // SubProg emit_op pc: 1251 op: STARTLINE (58)

            /** emit.e:865							emit_opcode(ASSIGN)*/
            // SubProg emit_op pc: 1253 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1255 op: PROC (27)
            _45emit_opcode(18);
            // SubProg emit_op pc: 1258 op: STARTLINE (58)

            /** emit.e:866							emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1260 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1262 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568)){
                _26547 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            }
            else{
                _26547 = (object)*(((s1_ptr)_2)->base + _i_51568);
            }
            // SubProg emit_op pc: 1266 op: PROC (27)
            Ref(_26547);
            _45emit_addr(_26547);
            _26547 = NOVALUE;
            // SubProg emit_op pc: 1269 op: STARTLINE (58)

            /** emit.e:867							cg_stack[i] = NewTempSym()*/
            // SubProg emit_op pc: 1271 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1273 op: PROC (27)
            _26548 = _53NewTempSym(0);
            // SubProg emit_op pc: 1277 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _i_51568);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _26548;
            if( _1 != _26548 ){
                DeRef(_1);
            }
            _26548 = NOVALUE;
            // SubProg emit_op pc: 1281 op: STARTLINE (58)

            /** emit.e:868							emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1283 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1285 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568)){
                _26549 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            }
            else{
                _26549 = (object)*(((s1_ptr)_2)->base + _i_51568);
            }
            // SubProg emit_op pc: 1289 op: PROC (27)
            Ref(_26549);
            _45emit_addr(_26549);
            _26549 = NOVALUE;
            // SubProg emit_op pc: 1292 op: STARTLINE (58)

            /** emit.e:869							check_for_temps()*/
            // SubProg emit_op pc: 1294 op: PROC (27)
            _45check_for_temps();
            // SubProg emit_op pc: 1296 op: ELSE (23)
            goto L2A; // [1296] 1331
            // SubProg emit_op pc: 1298 op: NOP1 (159)
L29: // addr: 1299 pc: 1298 sub: 51307 op: 159
            // SubProg emit_op pc: 1299 op: STARTLINE (58)

            /** emit.e:870						elsif sym_mode( cg_stack[i] ) = M_TEMP then*/
            // SubProg emit_op pc: 1301 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1303 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568)){
                _26550 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            }
            else{
                _26550 = (object)*(((s1_ptr)_2)->base + _i_51568);
            }
            // SubProg emit_op pc: 1307 op: PROC (27)
            Ref(_26550);
            _26551 = _53sym_mode(_26550);
            _26550 = NOVALUE;
            // SubProg emit_op pc: 1311 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1313 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _26551, 3)){
                DeRef(_26551);
                _26551 = NOVALUE;
                goto L2B; // [1313] 1330
            }
            DeRef(_26551);
            _26551 = NOVALUE;
            // SubProg emit_op pc: 1317 op: STARTLINE (58)

            /** emit.e:871							emit_temp( cg_stack[i], NEW_REFERENCE )*/
            // SubProg emit_op pc: 1319 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1321 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51568)){
                _26553 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51568)->dbl));
            }
            else{
                _26553 = (object)*(((s1_ptr)_2)->base + _i_51568);
            }
            // SubProg emit_op pc: 1325 op: PROC (27)
            Ref(_26553);
            _45emit_temp(_26553, 1);
            _26553 = NOVALUE;
            // SubProg emit_op pc: 1329 op: NOP1 (159)
L2B: // addr: 1330 pc: 1329 sub: 51307 op: 159
            // SubProg emit_op pc: 1330 op: NOP1 (159)
L2A: // addr: 1331 pc: 1330 sub: 51307 op: 159
            // SubProg emit_op pc: 1331 op: NOP1 (159)
L28: // addr: 1332 pc: 1331 sub: 51307 op: 159
            // SubProg emit_op pc: 1332 op: STARTLINE (58)

            /** emit.e:874				end for*/
            // SubProg emit_op pc: 1334 op: ENDFOR_INT_UP1 (54)
            _0 = _i_51568;
            if (IS_ATOM_INT(_i_51568)) {
                _i_51568 = _i_51568 + 1;
                if ((object)((uintptr_t)_i_51568 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51568 = NewDouble((eudouble)_i_51568);
                }
            }
            else {
                _i_51568 = binary_op_a(PLUS, _i_51568, 1);
            }
            DeRef(_0);
            goto L26; // [1334] 1183
L27: // addr: 1339 pc: 1334 sub: 51307 op: 54
            ;
            DeRef(_i_51568);
        }
        // SubProg emit_op pc: 1339 op: NOP1 (159)
L25: // addr: 1340 pc: 1339 sub: 51307 op: 159
        // SubProg emit_op pc: 1340 op: STARTLINE (58)

        /** emit.e:877			if SymTab[subsym][S_DEPRECATED] then*/
        // SubProg emit_op pc: 1342 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1344 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26554 = (object)*(((s1_ptr)_2)->base + _subsym_51317);
        // SubProg emit_op pc: 1348 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1350 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26554);
        _26555 = (object)*(((s1_ptr)_2)->base + 30);
        _26554 = NOVALUE;
        // SubProg emit_op pc: 1354 op: IF (20)
        if (_26555 == 0) {
            _26555 = NOVALUE;
            goto L2C; // [1354] 1383
        }
        else {
            if (!IS_ATOM_INT(_26555) && DBL_PTR(_26555)->dbl == 0.0){
                _26555 = NOVALUE;
                goto L2C; // [1354] 1383
            }
            _26555 = NOVALUE;
        }
        _26555 = NOVALUE;
        // SubProg emit_op pc: 1357 op: STARTLINE (58)

        /** emit.e:878				Warning(327, deprecated_warning_flag, { SymTab[subsym][S_NAME] })*/
        // SubProg emit_op pc: 1359 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1361 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1363 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26556 = (object)*(((s1_ptr)_2)->base + _subsym_51317);
        // SubProg emit_op pc: 1367 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26556);
        if (!IS_ATOM_INT(_34S_NAME_14843)){
            _26557 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
        }
        else{
            _26557 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
        }
        _26556 = NOVALUE;
        // SubProg emit_op pc: 1373 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_26557);
        ((intptr_t*)_2)[1] = _26557;
        _26558 = MAKE_SEQ(_1);
        _26557 = NOVALUE;
        // SubProg emit_op pc: 1377 op: PROC (27)
        _49Warning(327, 16384, _26558);
        _26558 = NOVALUE;
        // SubProg emit_op pc: 1382 op: NOP1 (159)
L2C: // addr: 1383 pc: 1382 sub: 51307 op: 159
        // SubProg emit_op pc: 1383 op: STARTLINE (58)

        /** emit.e:881			emit_opcode(op)*/
        // SubProg emit_op pc: 1385 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 1388 op: STARTLINE (58)

        /** emit.e:882			emit_addr(subsym)*/
        // SubProg emit_op pc: 1390 op: PROC (27)
        _45emit_addr(_subsym_51317);
        // SubProg emit_op pc: 1393 op: STARTLINE (58)

        /** emit.e:883			for i = cgi-n+1 to cgi do*/
        // SubProg emit_op pc: 1395 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1397 op: MINUS (10)
        _26559 = _45cgi_50387 - _n_51322;
        if ((object)((uintptr_t)_26559 +(uintptr_t) HIGH_BITS) >= 0){
            _26559 = NewDouble((eudouble)_26559);
        }
        // SubProg emit_op pc: 1401 op: PLUS1 (93)
        if (IS_ATOM_INT(_26559)) {
            _26560 = _26559 + 1;
            if (_26560 > MAXINT){
                _26560 = NewDouble((eudouble)_26560);
            }
        }
        else
        _26560 = binary_op(PLUS, 1, _26559);
        DeRef(_26559);
        _26559 = NOVALUE;
        // SubProg emit_op pc: 1405 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1407 op: ASSIGN (18)
        _26561 = _45cgi_50387;
        // SubProg emit_op pc: 1410 op: FOR (21)
        {
            object _i_51615;
            Ref(_26560);
            _i_51615 = _26560;
L2D: // addr: 1417 pc: 1410 sub: 51307 op: 21
            if (binary_op_a(GREATER, _i_51615, _26561)){
                goto L2E; // [1410] 1447
            }
            // SubProg emit_op pc: 1417 op: STARTLINE (58)

            /** emit.e:884				emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1419 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1421 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51615)){
                _26562 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51615)->dbl));
            }
            else{
                _26562 = (object)*(((s1_ptr)_2)->base + _i_51615);
            }
            // SubProg emit_op pc: 1425 op: PROC (27)
            Ref(_26562);
            _45emit_addr(_26562);
            _26562 = NOVALUE;
            // SubProg emit_op pc: 1428 op: STARTLINE (58)

            /** emit.e:885				emit_temp( cg_stack[i], NEW_REFERENCE )*/
            // SubProg emit_op pc: 1430 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1432 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51615)){
                _26563 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51615)->dbl));
            }
            else{
                _26563 = (object)*(((s1_ptr)_2)->base + _i_51615);
            }
            // SubProg emit_op pc: 1436 op: PROC (27)
            Ref(_26563);
            _45emit_temp(_26563, 1);
            _26563 = NOVALUE;
            // SubProg emit_op pc: 1440 op: STARTLINE (58)

            /** emit.e:886			end for*/
            // SubProg emit_op pc: 1442 op: ENDFOR_INT_UP1 (54)
            _0 = _i_51615;
            if (IS_ATOM_INT(_i_51615)) {
                _i_51615 = _i_51615 + 1;
                if ((object)((uintptr_t)_i_51615 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51615 = NewDouble((eudouble)_i_51615);
                }
            }
            else {
                _i_51615 = binary_op_a(PLUS, _i_51615, 1);
            }
            DeRef(_0);
            goto L2D; // [1442] 1417
L2E: // addr: 1447 pc: 1442 sub: 51307 op: 54
            ;
            DeRef(_i_51615);
        }
        // SubProg emit_op pc: 1447 op: STARTLINE (58)

        /** emit.e:888			cgi -= n*/
        // SubProg emit_op pc: 1449 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1451 op: MINUS_I (116)
        _45cgi_50387 = _45cgi_50387 - _n_51322;
        // SubProg emit_op pc: 1455 op: STARTLINE (58)

        /** emit.e:890			if SymTab[subsym][S_TOKEN] != PROC then*/
        // SubProg emit_op pc: 1457 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1459 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26565 = (object)*(((s1_ptr)_2)->base + _subsym_51317);
        // SubProg emit_op pc: 1463 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1465 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26565);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _26566 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _26566 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        _26565 = NOVALUE;
        // SubProg emit_op pc: 1469 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1471 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _26566, 27)){
            _26566 = NOVALUE;
            goto LC; // [1471] 7737
        }
        _26566 = NOVALUE;
        // SubProg emit_op pc: 1475 op: STARTLINE (58)

        /** emit.e:891				assignable = TRUE*/
        // SubProg emit_op pc: 1477 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1479 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 1482 op: STARTLINE (58)

        /** emit.e:892				c = NewTempSym() -- put final result in temp*/
        // SubProg emit_op pc: 1484 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 1488 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 1490 op: STARTLINE (58)

        /** emit.e:893				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 1492 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 1496 op: STARTLINE (58)

        /** emit.e:894				Push(c)*/
        // SubProg emit_op pc: 1498 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 1501 op: STARTLINE (58)

        /** emit.e:896				emit_addr(c)*/
        // SubProg emit_op pc: 1503 op: PROC (27)
        _45emit_addr(_c_51313);
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
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 1522 op: STARTLINE (58)

        /** emit.e:902			integer real_op*/
        // SubProg emit_op pc: 1524 op: STARTLINE (58)

        /** emit.e:903			if op = PROC_FORWARD then*/
        // SubProg emit_op pc: 1526 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1528 op: EQUALS_IFW (104)
        if (_op_51309 != 195)
        goto L2F; // [1528] 1544
        // SubProg emit_op pc: 1532 op: STARTLINE (58)

        /** emit.e:904				real_op = PROC*/
        // SubProg emit_op pc: 1534 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1536 op: ASSIGN (18)
        _real_op_51636 = 27;
        // SubProg emit_op pc: 1539 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1541 op: ELSE (23)
        goto L30; // [1541] 1554
        // SubProg emit_op pc: 1543 op: NOP1 (159)
L2F: // addr: 1544 pc: 1543 sub: 51307 op: 159
        // SubProg emit_op pc: 1544 op: STARTLINE (58)

        /** emit.e:906				real_op = FUNC*/
        // SubProg emit_op pc: 1546 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1548 op: ASSIGN (18)
        _real_op_51636 = 501;
        // SubProg emit_op pc: 1551 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1553 op: NOP1 (159)
L30: // addr: 1554 pc: 1553 sub: 51307 op: 159
        // SubProg emit_op pc: 1554 op: STARTLINE (58)

        /** emit.e:908			integer ref*/
        // SubProg emit_op pc: 1556 op: STARTLINE (58)

        /** emit.e:909			ref = new_forward_reference( real_op, op_info1, real_op )*/
        // SubProg emit_op pc: 1558 op: PRIVATE_INIT_CHECK (30)
        // SubProg emit_op pc: 1560 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1562 op: PROC (27)
        _ref_51643 = _37new_forward_reference(_real_op_51636, _45op_info1_50371, _real_op_51636);
        // SubProg emit_op pc: 1568 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ref_51643)) {
            _1 = (object)(DBL_PTR(_ref_51643)->dbl);
            DeRefDS(_ref_51643);
            _ref_51643 = _1;
        }
        // SubProg emit_op pc: 1570 op: STARTLINE (58)

        /** emit.e:910			n = Pop() -- number of known args*/
        // SubProg emit_op pc: 1572 op: PROC (27)
        _n_51322 = _45Pop();
        // SubProg emit_op pc: 1575 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_n_51322)) {
            _1 = (object)(DBL_PTR(_n_51322)->dbl);
            DeRefDS(_n_51322);
            _n_51322 = _1;
        }
        // SubProg emit_op pc: 1577 op: STARTLINE (58)

        /** emit.e:912			emit_opcode(op)*/
        // SubProg emit_op pc: 1579 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 1582 op: STARTLINE (58)

        /** emit.e:913			emit_addr(ref)*/
        // SubProg emit_op pc: 1584 op: PROC (27)
        _45emit_addr(_ref_51643);
        // SubProg emit_op pc: 1587 op: STARTLINE (58)

        /** emit.e:914			emit_addr( n ) -- this changes to be the "next" instruction*/
        // SubProg emit_op pc: 1589 op: PROC (27)
        _45emit_addr(_n_51322);
        // SubProg emit_op pc: 1592 op: STARTLINE (58)

        /** emit.e:915			for i = cgi-n+1 to cgi do*/
        // SubProg emit_op pc: 1594 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1596 op: MINUS (10)
        _26572 = _45cgi_50387 - _n_51322;
        if ((object)((uintptr_t)_26572 +(uintptr_t) HIGH_BITS) >= 0){
            _26572 = NewDouble((eudouble)_26572);
        }
        // SubProg emit_op pc: 1600 op: PLUS1 (93)
        if (IS_ATOM_INT(_26572)) {
            _26573 = _26572 + 1;
            if (_26573 > MAXINT){
                _26573 = NewDouble((eudouble)_26573);
            }
        }
        else
        _26573 = binary_op(PLUS, 1, _26572);
        DeRef(_26572);
        _26572 = NOVALUE;
        // SubProg emit_op pc: 1604 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1606 op: ASSIGN (18)
        _26574 = _45cgi_50387;
        // SubProg emit_op pc: 1609 op: FOR (21)
        {
            object _i_51648;
            Ref(_26573);
            _i_51648 = _26573;
L31: // addr: 1616 pc: 1609 sub: 51307 op: 21
            if (binary_op_a(GREATER, _i_51648, _26574)){
                goto L32; // [1609] 1646
            }
            // SubProg emit_op pc: 1616 op: STARTLINE (58)

            /** emit.e:916				emit_addr(cg_stack[i])*/
            // SubProg emit_op pc: 1618 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1620 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51648)){
                _26575 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51648)->dbl));
            }
            else{
                _26575 = (object)*(((s1_ptr)_2)->base + _i_51648);
            }
            // SubProg emit_op pc: 1624 op: PROC (27)
            Ref(_26575);
            _45emit_addr(_26575);
            _26575 = NOVALUE;
            // SubProg emit_op pc: 1627 op: STARTLINE (58)

            /** emit.e:917				emit_temp( cg_stack[i], NEW_REFERENCE )*/
            // SubProg emit_op pc: 1629 op: GLOBAL_INIT_CHECK (109)
            // SubProg emit_op pc: 1631 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_45cg_stack_50386);
            if (!IS_ATOM_INT(_i_51648)){
                _26576 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51648)->dbl));
            }
            else{
                _26576 = (object)*(((s1_ptr)_2)->base + _i_51648);
            }
            // SubProg emit_op pc: 1635 op: PROC (27)
            Ref(_26576);
            _45emit_temp(_26576, 1);
            _26576 = NOVALUE;
            // SubProg emit_op pc: 1639 op: STARTLINE (58)

            /** emit.e:918			end for*/
            // SubProg emit_op pc: 1641 op: ENDFOR_INT_UP1 (54)
            _0 = _i_51648;
            if (IS_ATOM_INT(_i_51648)) {
                _i_51648 = _i_51648 + 1;
                if ((object)((uintptr_t)_i_51648 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51648 = NewDouble((eudouble)_i_51648);
                }
            }
            else {
                _i_51648 = binary_op_a(PLUS, _i_51648, 1);
            }
            DeRef(_0);
            goto L31; // [1641] 1616
L32: // addr: 1646 pc: 1641 sub: 51307 op: 54
            ;
            DeRef(_i_51648);
        }
        // SubProg emit_op pc: 1646 op: STARTLINE (58)

        /** emit.e:919			cgi -= n*/
        // SubProg emit_op pc: 1648 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1650 op: MINUS_I (116)
        _45cgi_50387 = _45cgi_50387 - _n_51322;
        // SubProg emit_op pc: 1654 op: STARTLINE (58)

        /** emit.e:921			if op != PROC_FORWARD then*/
        // SubProg emit_op pc: 1656 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1658 op: NOTEQ_IFW (105)
        if (_op_51309 == 195)
        goto L33; // [1658] 1694
        // SubProg emit_op pc: 1662 op: STARTLINE (58)

        /** emit.e:922				assignable = TRUE*/
        // SubProg emit_op pc: 1664 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1666 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 1669 op: STARTLINE (58)

        /** emit.e:923				c = NewTempSym() -- put final result in temp*/
        // SubProg emit_op pc: 1671 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 1675 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 1677 op: STARTLINE (58)

        /** emit.e:924				Push(c)*/
        // SubProg emit_op pc: 1679 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 1682 op: STARTLINE (58)

        /** emit.e:926				emit_addr(c)*/
        // SubProg emit_op pc: 1684 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 1687 op: STARTLINE (58)

        /** emit.e:927				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 1689 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 1693 op: NOP1 (159)
L33: // addr: 1694 pc: 1693 sub: 51307 op: 159
        // SubProg emit_op pc: 1694 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var real_op_51636

// block var ref_51643
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
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 1709 op: STARTLINE (58)

        /** emit.e:932		    a = Pop()*/
        // SubProg emit_op pc: 1711 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 1714 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 1716 op: STARTLINE (58)

        /** emit.e:933			Warning(SymTab[a][S_OBJ], custom_warning_flag,"")*/
        // SubProg emit_op pc: 1718 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1720 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26581 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 1724 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1726 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26581);
        _26582 = (object)*(((s1_ptr)_2)->base + 1);
        _26581 = NOVALUE;
        // SubProg emit_op pc: 1730 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1732 op: PROC (27)
        Ref(_26582);
        RefDS(_21936);
        _49Warning(_26582, 64, _21936);
        _26582 = NOVALUE;
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
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 1752 op: STARTLINE (58)

        /** emit.e:939		    a = Pop()*/
        // SubProg emit_op pc: 1754 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 1757 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 1759 op: STARTLINE (58)

        /** emit.e:940		    emit_opcode(RIGHT_BRACE_N)*/
        // SubProg emit_op pc: 1761 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1763 op: PROC (27)
        _45emit_opcode(31);
        // SubProg emit_op pc: 1766 op: STARTLINE (58)

        /** emit.e:941		    paths = Include_paths(SymTab[a][S_OBJ])*/
        // SubProg emit_op pc: 1768 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1770 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26584 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 1774 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1776 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26584);
        _26585 = (object)*(((s1_ptr)_2)->base + 1);
        _26584 = NOVALUE;
        // SubProg emit_op pc: 1780 op: PROC (27)
        Ref(_26585);
        _0 = _paths_51673;
        _paths_51673 = _46Include_paths(_26585);
        DeRef(_0);
        _26585 = NOVALUE;
        // SubProg emit_op pc: 1784 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 1786 op: STARTLINE (58)

        /** emit.e:942		    emit(length(paths))*/
        // SubProg emit_op pc: 1788 op: LENGTH (42)
        if (IS_SEQUENCE(_paths_51673)){
                _26587 = SEQ_PTR(_paths_51673)->length;
        }
        else {
            _26587 = 1;
        }
        // SubProg emit_op pc: 1791 op: PROC (27)
        _45emit(_26587);
        _26587 = NOVALUE;
        // SubProg emit_op pc: 1794 op: STARTLINE (58)

        /** emit.e:943		    for i=length(paths) to 1 by -1 do*/
        // SubProg emit_op pc: 1796 op: LENGTH (42)
        if (IS_SEQUENCE(_paths_51673)){
                _26588 = SEQ_PTR(_paths_51673)->length;
        }
        else {
            _26588 = 1;
        }
        // SubProg emit_op pc: 1799 op: FOR_I (125)
        {
            object _i_51685;
            _i_51685 = _26588;
L34: // addr: 1806 pc: 1799 sub: 51307 op: 125
            if (_i_51685 < 1){
                goto L35; // [1799] 1830
            }
            // SubProg emit_op pc: 1806 op: STARTLINE (58)

            /** emit.e:944		        c = NewStringSym(paths[i])*/
            // SubProg emit_op pc: 1808 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_paths_51673);
            _26589 = (object)*(((s1_ptr)_2)->base + _i_51685);
            // SubProg emit_op pc: 1812 op: PROC (27)
            Ref(_26589);
            _c_51313 = _53NewStringSym(_26589);
            _26589 = NOVALUE;
            // SubProg emit_op pc: 1816 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_c_51313)) {
                _1 = (object)(DBL_PTR(_c_51313)->dbl);
                DeRefDS(_c_51313);
                _c_51313 = _1;
            }
            // SubProg emit_op pc: 1818 op: STARTLINE (58)

            /** emit.e:945		        emit_addr(c)*/
            // SubProg emit_op pc: 1820 op: PROC (27)
            _45emit_addr(_c_51313);
            // SubProg emit_op pc: 1823 op: STARTLINE (58)

            /** emit.e:946		    end for*/
            // SubProg emit_op pc: 1825 op: ENDFOR_GENERAL (39)
            _i_51685 = _i_51685 + -1;
            goto L34; // [1825] 1806
L35: // addr: 1830 pc: 1825 sub: 51307 op: 39
            ;
        }
        // SubProg emit_op pc: 1830 op: STARTLINE (58)

        /** emit.e:947		    b = NewTempSym()*/
        // SubProg emit_op pc: 1832 op: PROC (27)
        _b_51312 = _53NewTempSym(0);
        // SubProg emit_op pc: 1836 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 1838 op: STARTLINE (58)

        /** emit.e:948			emit_temp(b, NEW_REFERENCE)*/
        // SubProg emit_op pc: 1840 op: PROC (27)
        _45emit_temp(_b_51312, 1);
        // SubProg emit_op pc: 1844 op: STARTLINE (58)

        /** emit.e:949		    Push(b)*/
        // SubProg emit_op pc: 1846 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 1849 op: STARTLINE (58)

        /** emit.e:950		    emit_addr(b)*/
        // SubProg emit_op pc: 1851 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 1854 op: STARTLINE (58)

        /** emit.e:951			last_op = RIGHT_BRACE_N*/
        // SubProg emit_op pc: 1856 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1858 op: ASSIGN (18)
        _45last_op_51268 = 31;
        // SubProg emit_op pc: 1861 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 1863 op: STARTLINE (58)

        /** emit.e:952			op = last_op*/
        // SubProg emit_op pc: 1865 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1867 op: ASSIGN_I (113)
        _op_51309 = 31;
        // SubProg emit_op pc: 1870 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var paths_51673
        DeRef(_paths_51673);
        _paths_51673 = NOVALUE;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 1933 op: STARTLINE (58)

        /** emit.e:962			assignable = FALSE*/
        // SubProg emit_op pc: 1935 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1937 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 1940 op: STARTLINE (58)

        /** emit.e:963			if op = UPDATE_GLOBALS then*/
        // SubProg emit_op pc: 1942 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1944 op: EQUALS_IFW (104)
        if (_op_51309 != 89)
        goto LC; // [1944] 7737
        // SubProg emit_op pc: 1948 op: STARTLINE (58)

        /** emit.e:964				last_op = last_op_backup*/
        // SubProg emit_op pc: 1950 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 1953 op: STARTLINE (58)

        /** emit.e:965				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 1955 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
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
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 1972 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 1974 op: STARTLINE (58)

        /** emit.e:971			assignable = FALSE*/
        // SubProg emit_op pc: 1976 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1978 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 1981 op: STARTLINE (58)

        /** emit.e:973			if previous_op >= LESS and previous_op <= NOT then*/
        // SubProg emit_op pc: 1983 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1985 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1987 op: GREATEREQ (2)
        _26594 = (_34previous_op_15286 >= 1);
        // SubProg emit_op pc: 1991 op: SC1_AND_IF (146)
        if (_26594 == 0) {
            goto L36; // [1991] 2283
        }
        // SubProg emit_op pc: 1995 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1997 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 1999 op: LESSEQ (5)
        _26596 = (_34previous_op_15286 <= 7);
        // SubProg emit_op pc: 2003 op: NOP1 (159)
        // SubProg emit_op pc: 2004 op: IF (20)
        if (_26596 == 0)
        {
            DeRef(_26596);
            _26596 = NOVALUE;
            goto L36; // [2004] 2283
        }
        else{
            DeRef(_26596);
            _26596 = NOVALUE;
        }
        // SubProg emit_op pc: 2007 op: STARTLINE (58)

        /** emit.e:974				clear_temp( Code[$] )*/
        // SubProg emit_op pc: 2009 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2011 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26597 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26597 = 1;
        }
        // SubProg emit_op pc: 2014 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26598 = (object)*(((s1_ptr)_2)->base + _26597);
        // SubProg emit_op pc: 2018 op: PROC (27)
        Ref(_26598);
        _45clear_temp(_26598);
        _26598 = NOVALUE;
        // SubProg emit_op pc: 2021 op: STARTLINE (58)

        /** emit.e:975				Code = Code[1..$-1]*/
        // SubProg emit_op pc: 2023 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2025 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26599 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26599 = 1;
        }
        // SubProg emit_op pc: 2028 op: MINUS (10)
        _26600 = _26599 - 1;
        _26599 = NOVALUE;
        // SubProg emit_op pc: 2032 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_34Code_15276;
        RHS_Slice(_34Code_15276, 1, _26600);
        // SubProg emit_op pc: 2037 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2039 op: STARTLINE (58)

        /** emit.e:976				if previous_op = NOT then*/
        // SubProg emit_op pc: 2041 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2043 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2045 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 7)
        goto L37; // [2045] 2125
        // SubProg emit_op pc: 2049 op: STARTLINE (58)

        /** emit.e:977					op = NOT_IFW*/
        // SubProg emit_op pc: 2051 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2053 op: ASSIGN (18)
        _op_51309 = 108;
        // SubProg emit_op pc: 2056 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 2058 op: STARTLINE (58)

        /** emit.e:978					backpatch(length(Code) - 1, op)*/
        // SubProg emit_op pc: 2060 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2062 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26603 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26603 = 1;
        }
        // SubProg emit_op pc: 2065 op: MINUS (10)
        _26604 = _26603 - 1;
        _26603 = NOVALUE;
        // SubProg emit_op pc: 2069 op: PROC (27)
        _45backpatch(_26604, 108);
        _26604 = NOVALUE;
        // SubProg emit_op pc: 2073 op: STARTLINE (58)

        /** emit.e:979					sequence if_code = Code[$-1..$]*/
        // SubProg emit_op pc: 2075 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2077 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26605 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26605 = 1;
        }
        // SubProg emit_op pc: 2080 op: MINUS (10)
        _26606 = _26605 - 1;
        _26605 = NOVALUE;
        // SubProg emit_op pc: 2084 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26607 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26607 = 1;
        }
        // SubProg emit_op pc: 2087 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_if_code_51753;
        RHS_Slice(_34Code_15276, _26606, _26607);
        // SubProg emit_op pc: 2092 op: STARTLINE (58)

        /** emit.e:980					Code = Code[1..$-2]*/
        // SubProg emit_op pc: 2094 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2096 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26609 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26609 = 1;
        }
        // SubProg emit_op pc: 2099 op: MINUS (10)
        _26610 = _26609 - 2;
        _26609 = NOVALUE;
        // SubProg emit_op pc: 2103 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_34Code_15276;
        RHS_Slice(_34Code_15276, 1, _26610);
        // SubProg emit_op pc: 2108 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2110 op: STARTLINE (58)

        /** emit.e:981					Code &= if_code*/
        // SubProg emit_op pc: 2112 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2114 op: CONCAT (15)
        Concat((object_ptr)&_34Code_15276, _34Code_15276, _if_code_51753);
        // SubProg emit_op pc: 2118 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2120 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var if_code_51753
        DeRefDS(_if_code_51753);
        _if_code_51753 = NOVALUE;
        // SubProg emit_op pc: 2122 op: ELSE (23)
        goto L38; // [2122] 2270
        // SubProg emit_op pc: 2124 op: NOP1 (159)
L37: // addr: 2125 pc: 2124 sub: 51307 op: 159
        // SubProg emit_op pc: 2125 op: STARTLINE (58)

        /** emit.e:983					if IsInteger(Code[$-1]) and IsInteger(Code[$]) then*/
        // SubProg emit_op pc: 2127 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2129 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26613 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26613 = 1;
        }
        // SubProg emit_op pc: 2132 op: MINUS (10)
        _26614 = _26613 - 1;
        _26613 = NOVALUE;
        // SubProg emit_op pc: 2136 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26615 = (object)*(((s1_ptr)_2)->base + _26614);
        // SubProg emit_op pc: 2140 op: PROC (27)
        Ref(_26615);
        _26616 = _45IsInteger(_26615);
        _26615 = NOVALUE;
        // SubProg emit_op pc: 2144 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26616)) {
            if (_26616 == 0) {
                goto L39; // [2144] 2186
            }
        }
        else {
            if (DBL_PTR(_26616)->dbl == 0.0) {
                goto L39; // [2144] 2186
            }
        }
        // SubProg emit_op pc: 2148 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2150 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26618 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26618 = 1;
        }
        // SubProg emit_op pc: 2153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26619 = (object)*(((s1_ptr)_2)->base + _26618);
        // SubProg emit_op pc: 2157 op: PROC (27)
        Ref(_26619);
        _26620 = _45IsInteger(_26619);
        _26619 = NOVALUE;
        // SubProg emit_op pc: 2161 op: NOP1 (159)
        // SubProg emit_op pc: 2162 op: IF (20)
        if (_26620 == 0) {
            DeRef(_26620);
            _26620 = NOVALUE;
            goto L39; // [2162] 2186
        }
        else {
            if (!IS_ATOM_INT(_26620) && DBL_PTR(_26620)->dbl == 0.0){
                DeRef(_26620);
                _26620 = NOVALUE;
                goto L39; // [2162] 2186
            }
            DeRef(_26620);
            _26620 = NOVALUE;
        }
        DeRef(_26620);
        _26620 = NOVALUE;
        // SubProg emit_op pc: 2165 op: STARTLINE (58)

        /** emit.e:984						op = previous_op + LESS_IFW_I - LESS*/
        // SubProg emit_op pc: 2167 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2169 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2171 op: PLUS (11)
        _26621 = _34previous_op_15286 + 119;
        if ((object)((uintptr_t)_26621 + (uintptr_t)HIGH_BITS) >= 0){
            _26621 = NewDouble((eudouble)_26621);
        }
        // SubProg emit_op pc: 2175 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2177 op: MINUS (10)
        if (IS_ATOM_INT(_26621)) {
            _op_51309 = _26621 - 1;
        }
        else {
            _op_51309 = NewDouble(DBL_PTR(_26621)->dbl - (eudouble)1);
        }
        DeRef(_26621);
        _26621 = NOVALUE;
        // SubProg emit_op pc: 2181 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_op_51309)) {
            _1 = (object)(DBL_PTR(_op_51309)->dbl);
            DeRefDS(_op_51309);
            _op_51309 = _1;
        }
        // SubProg emit_op pc: 2183 op: ELSE (23)
        goto L3A; // [2183] 2205
        // SubProg emit_op pc: 2185 op: NOP1 (159)
L39: // addr: 2186 pc: 2185 sub: 51307 op: 159
        // SubProg emit_op pc: 2186 op: STARTLINE (58)

        /** emit.e:986						op = previous_op + LESS_IFW - LESS*/
        // SubProg emit_op pc: 2188 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2190 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2192 op: PLUS (11)
        _26623 = _34previous_op_15286 + 102;
        if ((object)((uintptr_t)_26623 + (uintptr_t)HIGH_BITS) >= 0){
            _26623 = NewDouble((eudouble)_26623);
        }
        // SubProg emit_op pc: 2196 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2198 op: MINUS (10)
        if (IS_ATOM_INT(_26623)) {
            _op_51309 = _26623 - 1;
        }
        else {
            _op_51309 = NewDouble(DBL_PTR(_26623)->dbl - (eudouble)1);
        }
        DeRef(_26623);
        _26623 = NOVALUE;
        // SubProg emit_op pc: 2202 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_op_51309)) {
            _1 = (object)(DBL_PTR(_op_51309)->dbl);
            DeRefDS(_op_51309);
            _op_51309 = _1;
        }
        // SubProg emit_op pc: 2204 op: NOP1 (159)
L3A: // addr: 2205 pc: 2204 sub: 51307 op: 159
        // SubProg emit_op pc: 2205 op: STARTLINE (58)

        /** emit.e:989					backpatch(length(Code) - 2, op)*/
        // SubProg emit_op pc: 2207 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2209 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26625 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26625 = 1;
        }
        // SubProg emit_op pc: 2212 op: MINUS (10)
        _26626 = _26625 - 2;
        _26625 = NOVALUE;
        // SubProg emit_op pc: 2216 op: PROC (27)
        _45backpatch(_26626, _op_51309);
        _26626 = NOVALUE;
        // SubProg emit_op pc: 2220 op: STARTLINE (58)

        /** emit.e:991					sequence if_code = Code[$-2..$]*/
        // SubProg emit_op pc: 2222 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2224 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26627 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26627 = 1;
        }
        // SubProg emit_op pc: 2227 op: MINUS (10)
        _26628 = _26627 - 2;
        _26627 = NOVALUE;
        // SubProg emit_op pc: 2231 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26629 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26629 = 1;
        }
        // SubProg emit_op pc: 2234 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_if_code_51792;
        RHS_Slice(_34Code_15276, _26628, _26629);
        // SubProg emit_op pc: 2239 op: STARTLINE (58)

        /** emit.e:992					Code = Code[1..$-3]*/
        // SubProg emit_op pc: 2241 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2243 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26631 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26631 = 1;
        }
        // SubProg emit_op pc: 2246 op: MINUS (10)
        _26632 = _26631 - 3;
        _26631 = NOVALUE;
        // SubProg emit_op pc: 2250 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_34Code_15276;
        RHS_Slice(_34Code_15276, 1, _26632);
        // SubProg emit_op pc: 2255 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2257 op: STARTLINE (58)

        /** emit.e:993					Code &= if_code*/
        // SubProg emit_op pc: 2259 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2261 op: CONCAT (15)
        Concat((object_ptr)&_34Code_15276, _34Code_15276, _if_code_51792);
        // SubProg emit_op pc: 2265 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 2267 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var if_code_51792
        DeRefDS(_if_code_51792);
        _if_code_51792 = NOVALUE;
        // SubProg emit_op pc: 2269 op: NOP1 (159)
L38: // addr: 2270 pc: 2269 sub: 51307 op: 159
        // SubProg emit_op pc: 2270 op: STARTLINE (58)

        /** emit.e:997				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2272 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 2275 op: STARTLINE (58)

        /** emit.e:998				last_op = op*/
        // SubProg emit_op pc: 2277 op: ASSIGN_I (113)
        _45last_op_51268 = _op_51309;
        // SubProg emit_op pc: 2280 op: ELSE (23)
        goto LC; // [2280] 7737
        // SubProg emit_op pc: 2282 op: NOP1 (159)
L36: // addr: 2283 pc: 2282 sub: 51307 op: 159
        // SubProg emit_op pc: 2283 op: STARTLINE (58)

        /** emit.e:1000			elsif op = WHILE and*/
        // SubProg emit_op pc: 2285 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2287 op: EQUALS (3)
        _26635 = (_op_51309 == 47);
        // SubProg emit_op pc: 2291 op: SC1_AND (141)
        if (_26635 == 0) {
            _26636 = 0;
            goto L3B; // [2291] 2303
        }
        // SubProg emit_op pc: 2295 op: GREATER (6)
        _26637 = (_a_51311 > 0);
        // SubProg emit_op pc: 2299 op: SC2_AND (142)
        _26636 = (_26637 != 0);
        // SubProg emit_op pc: 2302 op: NOP1 (159)
L3B: // addr: 2303 pc: 2302 sub: 51307 op: 159
        // SubProg emit_op pc: 2303 op: SC1_AND (141)
        if (_26636 == 0) {
            _26638 = 0;
            goto L3C; // [2303] 2329
        }
        // SubProg emit_op pc: 2307 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2309 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26639 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 2313 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2315 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26639);
        _26640 = (object)*(((s1_ptr)_2)->base + 3);
        _26639 = NOVALUE;
        // SubProg emit_op pc: 2319 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2321 op: EQUALS (3)
        if (IS_ATOM_INT(_26640)) {
            _26641 = (_26640 == 2);
        }
        else {
            _26641 = binary_op(EQUALS, _26640, 2);
        }
        _26640 = NOVALUE;
        // SubProg emit_op pc: 2325 op: SC2_AND (142)
        if (IS_ATOM_INT(_26641))
        _26638 = (_26641 != 0);
        else
        _26638 = DBL_PTR(_26641)->dbl != 0.0;
        // SubProg emit_op pc: 2328 op: NOP1 (159)
L3C: // addr: 2329 pc: 2328 sub: 51307 op: 159
        // SubProg emit_op pc: 2329 op: SC1_AND (141)
        if (_26638 == 0) {
            _26642 = 0;
            goto L3D; // [2329] 2352
        }
        // SubProg emit_op pc: 2333 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2335 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26643 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 2339 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2341 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26643);
        _26644 = (object)*(((s1_ptr)_2)->base + 1);
        _26643 = NOVALUE;
        // SubProg emit_op pc: 2345 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_26644))
        _26645 = 1;
        else if (IS_ATOM_DBL(_26644))
        _26645 = IS_ATOM_INT(DoubleToInt(_26644));
        else
        _26645 = 0;
        _26644 = NOVALUE;
        // SubProg emit_op pc: 2348 op: SC2_AND (142)
        _26642 = (_26645 != 0);
        // SubProg emit_op pc: 2351 op: NOP1 (159)
L3D: // addr: 2352 pc: 2351 sub: 51307 op: 159
        // SubProg emit_op pc: 2352 op: SC1_AND_IF (146)
        if (_26642 == 0) {
            goto L3E; // [2352] 2401
        }
        // SubProg emit_op pc: 2356 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2358 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26647 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 2362 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2364 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26647);
        _26648 = (object)*(((s1_ptr)_2)->base + 1);
        _26647 = NOVALUE;
        // SubProg emit_op pc: 2368 op: EQUAL (153)
        if (_26648 == 0)
        _26649 = 1;
        else if (IS_ATOM_INT(_26648) && IS_ATOM_INT(0))
        _26649 = 0;
        else
        _26649 = (compare(_26648, 0) == 0);
        _26648 = NOVALUE;
        // SubProg emit_op pc: 2372 op: NOT (7)
        _26650 = (_26649 == 0);
        _26649 = NOVALUE;
        // SubProg emit_op pc: 2375 op: NOP1 (159)
        // SubProg emit_op pc: 2376 op: IF (20)
        if (_26650 == 0)
        {
            DeRef(_26650);
            _26650 = NOVALUE;
            goto L3E; // [2376] 2401
        }
        else{
            DeRef(_26650);
            _26650 = NOVALUE;
        }
        // SubProg emit_op pc: 2379 op: STARTLINE (58)

        /** emit.e:1005				optimized_while = TRUE   -- while TRUE ... emit nothing*/
        // SubProg emit_op pc: 2381 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2383 op: ASSIGN (18)
        _45optimized_while_50373 = _8TRUE_444;
        // SubProg emit_op pc: 2386 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 2388 op: STARTLINE (58)

        /** emit.e:1006				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2390 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 2393 op: STARTLINE (58)

        /** emit.e:1007				last_op = last_op_backup*/
        // SubProg emit_op pc: 2395 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 2398 op: ELSE (23)
        goto LC; // [2398] 7737
        // SubProg emit_op pc: 2400 op: NOP1 (159)
L3E: // addr: 2401 pc: 2400 sub: 51307 op: 159
        // SubProg emit_op pc: 2401 op: STARTLINE (58)

        /** emit.e:1009				flush_temps( {a} )*/
        // SubProg emit_op pc: 2403 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _a_51311;
        _26651 = MAKE_SEQ(_1);
        // SubProg emit_op pc: 2407 op: PROC (27)
        _45flush_temps(_26651);
        _26651 = NOVALUE;
        // SubProg emit_op pc: 2410 op: STARTLINE (58)

        /** emit.e:1010				emit_opcode(op)*/
        // SubProg emit_op pc: 2412 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 2415 op: STARTLINE (58)

        /** emit.e:1011				emit_addr(a)*/
        // SubProg emit_op pc: 2417 op: PROC (27)
        _45emit_addr(_a_51311);
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
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 2434 op: STARTLINE (58)

        /** emit.e:1018			if previous_op = ASSIGN then*/
        // SubProg emit_op pc: 2436 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2438 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2440 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 18)
        goto L3F; // [2440] 2499
        // SubProg emit_op pc: 2444 op: STARTLINE (58)

        /** emit.e:1019				c = Code[$-1]*/
        // SubProg emit_op pc: 2446 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2448 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26653 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26653 = 1;
        }
        // SubProg emit_op pc: 2451 op: MINUS (10)
        _26654 = _26653 - 1;
        _26653 = NOVALUE;
        // SubProg emit_op pc: 2455 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _c_51313 = (object)*(((s1_ptr)_2)->base + _26654);
        if (!IS_ATOM_INT(_c_51313)){
            _c_51313 = (object)DBL_PTR(_c_51313)->dbl;
        }
        // SubProg emit_op pc: 2461 op: STARTLINE (58)

        /** emit.e:1020				if not IsInteger(c) then*/
        // SubProg emit_op pc: 2463 op: PROC (27)
        _26656 = _45IsInteger(_c_51313);
        // SubProg emit_op pc: 2467 op: NOT_IFW (108)
        if (IS_ATOM_INT(_26656)) {
            if (_26656 != 0){
                DeRef(_26656);
                _26656 = NOVALUE;
                goto L40; // [2467] 2485
            }
        }
        else {
            if (DBL_PTR(_26656)->dbl != 0.0){
                DeRef(_26656);
                _26656 = NOVALUE;
                goto L40; // [2467] 2485
            }
        }
        DeRef(_26656);
        _26656 = NOVALUE;
        // SubProg emit_op pc: 2470 op: STARTLINE (58)

        /** emit.e:1021					emit_opcode(op)*/
        // SubProg emit_op pc: 2472 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 2475 op: STARTLINE (58)

        /** emit.e:1022					emit_addr(op_info1)*/
        // SubProg emit_op pc: 2477 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2479 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 2482 op: ELSE (23)
        goto L41; // [2482] 2556
        // SubProg emit_op pc: 2484 op: NOP1 (159)
L40: // addr: 2485 pc: 2484 sub: 51307 op: 159
        // SubProg emit_op pc: 2485 op: STARTLINE (58)

        /** emit.e:1024					last_op = last_op_backup*/
        // SubProg emit_op pc: 2487 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 2490 op: STARTLINE (58)

        /** emit.e:1025					last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2492 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 2495 op: NOP1 (159)
        // SubProg emit_op pc: 2496 op: ELSE (23)
        goto L41; // [2496] 2556
        // SubProg emit_op pc: 2498 op: NOP1 (159)
L3F: // addr: 2499 pc: 2498 sub: 51307 op: 159
        // SubProg emit_op pc: 2499 op: STARTLINE (58)

        /** emit.e:1027			elsif previous_op = -1 or*/
        // SubProg emit_op pc: 2501 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2503 op: EQUALS (3)
        _26658 = (_34previous_op_15286 == -1);
        // SubProg emit_op pc: 2507 op: SC1_OR_IF (147)
        if (_26658 != 0) {
            goto L42; // [2507] 2530
        }
        // SubProg emit_op pc: 2511 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2513 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2515 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45op_result_50987);
        _26660 = (object)*(((s1_ptr)_2)->base + _34previous_op_15286);
        // SubProg emit_op pc: 2519 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2521 op: NOTEQ (4)
        _26661 = (_26660 != 1);
        _26660 = NOVALUE;
        // SubProg emit_op pc: 2525 op: NOP1 (159)
        // SubProg emit_op pc: 2526 op: IF (20)
        if (_26661 == 0)
        {
            DeRef(_26661);
            _26661 = NOVALUE;
            goto L43; // [2526] 2545
        }
        else{
            DeRef(_26661);
            _26661 = NOVALUE;
        }
        // SubProg emit_op pc: 2529 op: NOP1 (159)
L42: // addr: 2530 pc: 2529 sub: 51307 op: 159
        // SubProg emit_op pc: 2530 op: STARTLINE (58)

        /** emit.e:1029				emit_opcode(op)*/
        // SubProg emit_op pc: 2532 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 2535 op: STARTLINE (58)

        /** emit.e:1030				emit_addr(op_info1)*/
        // SubProg emit_op pc: 2537 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2539 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 2542 op: ELSE (23)
        goto L41; // [2542] 2556
        // SubProg emit_op pc: 2544 op: NOP1 (159)
L43: // addr: 2545 pc: 2544 sub: 51307 op: 159
        // SubProg emit_op pc: 2545 op: STARTLINE (58)

        /** emit.e:1032				last_op = last_op_backup*/
        // SubProg emit_op pc: 2547 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 2550 op: STARTLINE (58)

        /** emit.e:1033				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2552 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 2555 op: NOP1 (159)
L41: // addr: 2556 pc: 2555 sub: 51307 op: 159
        // SubProg emit_op pc: 2556 op: STARTLINE (58)

        /** emit.e:1035			clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 2558 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2560 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26662 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26662 = 1;
        }
        // SubProg emit_op pc: 2563 op: MINUS (10)
        _26663 = _26662 - 1;
        _26662 = NOVALUE;
        // SubProg emit_op pc: 2567 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26664 = (object)*(((s1_ptr)_2)->base + _26663);
        // SubProg emit_op pc: 2571 op: PROC (27)
        Ref(_26664);
        _45clear_temp(_26664);
        _26664 = NOVALUE;
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
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 2587 op: STARTLINE (58)

        /** emit.e:1039			if previous_op = ASSIGN then*/
        // SubProg emit_op pc: 2589 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2591 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2593 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 18)
        goto L44; // [2593] 2720
        // SubProg emit_op pc: 2597 op: STARTLINE (58)

        /** emit.e:1040				c = Code[$-1]*/
        // SubProg emit_op pc: 2599 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2601 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26666 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26666 = 1;
        }
        // SubProg emit_op pc: 2604 op: MINUS (10)
        _26667 = _26666 - 1;
        _26666 = NOVALUE;
        // SubProg emit_op pc: 2608 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _c_51313 = (object)*(((s1_ptr)_2)->base + _26667);
        if (!IS_ATOM_INT(_c_51313)){
            _c_51313 = (object)DBL_PTR(_c_51313)->dbl;
        }
        // SubProg emit_op pc: 2614 op: STARTLINE (58)

        /** emit.e:1041				if c < 1 or*/
        // SubProg emit_op pc: 2616 op: LESS (1)
        _26669 = (_c_51313 < 1);
        // SubProg emit_op pc: 2620 op: SC1_OR (143)
        if (_26669 != 0) {
            _26670 = 1;
            goto L45; // [2620] 2646
        }
        // SubProg emit_op pc: 2624 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2626 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26671 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 2630 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2632 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26671);
        _26672 = (object)*(((s1_ptr)_2)->base + 3);
        _26671 = NOVALUE;
        // SubProg emit_op pc: 2636 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2638 op: NOTEQ (4)
        if (IS_ATOM_INT(_26672)) {
            _26673 = (_26672 != 2);
        }
        else {
            _26673 = binary_op(NOTEQ, _26672, 2);
        }
        _26672 = NOVALUE;
        // SubProg emit_op pc: 2642 op: SC2_OR (144)
        if (IS_ATOM_INT(_26673))
        _26670 = (_26673 != 0);
        else
        _26670 = DBL_PTR(_26673)->dbl != 0.0;
        // SubProg emit_op pc: 2645 op: NOP1 (159)
L45: // addr: 2646 pc: 2645 sub: 51307 op: 159
        // SubProg emit_op pc: 2646 op: SC1_OR_IF (147)
        if (_26670 != 0) {
            goto L46; // [2646] 2673
        }
        // SubProg emit_op pc: 2650 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2652 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26675 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 2656 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2658 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26675);
        _26676 = (object)*(((s1_ptr)_2)->base + 1);
        _26675 = NOVALUE;
        // SubProg emit_op pc: 2662 op: IS_A_SEQUENCE (68)
        _26677 = IS_SEQUENCE(_26676);
        _26676 = NOVALUE;
        // SubProg emit_op pc: 2665 op: NOT (7)
        _26678 = (_26677 == 0);
        _26677 = NOVALUE;
        // SubProg emit_op pc: 2668 op: NOP1 (159)
        // SubProg emit_op pc: 2669 op: IF (20)
        if (_26678 == 0)
        {
            DeRef(_26678);
            _26678 = NOVALUE;
            goto L47; // [2669] 2706
        }
        else{
            DeRef(_26678);
            _26678 = NOVALUE;
        }
        // SubProg emit_op pc: 2672 op: NOP1 (159)
L46: // addr: 2673 pc: 2672 sub: 51307 op: 159
        // SubProg emit_op pc: 2673 op: STARTLINE (58)

        /** emit.e:1044					emit_opcode(op)*/
        // SubProg emit_op pc: 2675 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 2678 op: STARTLINE (58)

        /** emit.e:1045					emit_addr(op_info1)*/
        // SubProg emit_op pc: 2680 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2682 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 2685 op: STARTLINE (58)

        /** emit.e:1046					clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 2687 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2689 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26679 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26679 = 1;
        }
        // SubProg emit_op pc: 2692 op: MINUS (10)
        _26680 = _26679 - 1;
        _26679 = NOVALUE;
        // SubProg emit_op pc: 2696 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26681 = (object)*(((s1_ptr)_2)->base + _26680);
        // SubProg emit_op pc: 2700 op: PROC (27)
        Ref(_26681);
        _45clear_temp(_26681);
        _26681 = NOVALUE;
        // SubProg emit_op pc: 2703 op: ELSE (23)
        goto LC; // [2703] 7737
        // SubProg emit_op pc: 2705 op: NOP1 (159)
L47: // addr: 2706 pc: 2705 sub: 51307 op: 159
        // SubProg emit_op pc: 2706 op: STARTLINE (58)

        /** emit.e:1048					last_op = last_op_backup*/
        // SubProg emit_op pc: 2708 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 2711 op: STARTLINE (58)

        /** emit.e:1049					last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2713 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 2716 op: NOP1 (159)
        // SubProg emit_op pc: 2717 op: ELSE (23)
        goto LC; // [2717] 7737
        // SubProg emit_op pc: 2719 op: NOP1 (159)
L44: // addr: 2720 pc: 2719 sub: 51307 op: 159
        // SubProg emit_op pc: 2720 op: STARTLINE (58)

        /** emit.e:1051			elsif previous_op = -1 or op_result[previous_op] != T_SEQUENCE then*/
        // SubProg emit_op pc: 2722 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2724 op: EQUALS (3)
        _26682 = (_34previous_op_15286 == -1);
        // SubProg emit_op pc: 2728 op: SC1_OR_IF (147)
        if (_26682 != 0) {
            goto L48; // [2728] 2751
        }
        // SubProg emit_op pc: 2732 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2734 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2736 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45op_result_50987);
        _26684 = (object)*(((s1_ptr)_2)->base + _34previous_op_15286);
        // SubProg emit_op pc: 2740 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2742 op: NOTEQ (4)
        _26685 = (_26684 != 2);
        _26684 = NOVALUE;
        // SubProg emit_op pc: 2746 op: NOP1 (159)
        // SubProg emit_op pc: 2747 op: IF (20)
        if (_26685 == 0)
        {
            DeRef(_26685);
            _26685 = NOVALUE;
            goto L49; // [2747] 2784
        }
        else{
            DeRef(_26685);
            _26685 = NOVALUE;
        }
        // SubProg emit_op pc: 2750 op: NOP1 (159)
L48: // addr: 2751 pc: 2750 sub: 51307 op: 159
        // SubProg emit_op pc: 2751 op: STARTLINE (58)

        /** emit.e:1052				emit_opcode(op)*/
        // SubProg emit_op pc: 2753 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 2756 op: STARTLINE (58)

        /** emit.e:1053				emit_addr(op_info1)*/
        // SubProg emit_op pc: 2758 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2760 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 2763 op: STARTLINE (58)

        /** emit.e:1054				clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 2765 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2767 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26686 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26686 = 1;
        }
        // SubProg emit_op pc: 2770 op: MINUS (10)
        _26687 = _26686 - 1;
        _26686 = NOVALUE;
        // SubProg emit_op pc: 2774 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26688 = (object)*(((s1_ptr)_2)->base + _26687);
        // SubProg emit_op pc: 2778 op: PROC (27)
        Ref(_26688);
        _45clear_temp(_26688);
        _26688 = NOVALUE;
        // SubProg emit_op pc: 2781 op: ELSE (23)
        goto LC; // [2781] 7737
        // SubProg emit_op pc: 2783 op: NOP1 (159)
L49: // addr: 2784 pc: 2783 sub: 51307 op: 159
        // SubProg emit_op pc: 2784 op: STARTLINE (58)

        /** emit.e:1056				last_op = last_op_backup*/
        // SubProg emit_op pc: 2786 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 2789 op: STARTLINE (58)

        /** emit.e:1057				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2791 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
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
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 2808 op: STARTLINE (58)

        /** emit.e:1063			if previous_op = ASSIGN then*/
        // SubProg emit_op pc: 2810 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2812 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2814 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 18)
        goto L4A; // [2814] 3013
        // SubProg emit_op pc: 2818 op: STARTLINE (58)

        /** emit.e:1064				c = Code[$-1]*/
        // SubProg emit_op pc: 2820 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2822 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26690 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26690 = 1;
        }
        // SubProg emit_op pc: 2825 op: MINUS (10)
        _26691 = _26690 - 1;
        _26690 = NOVALUE;
        // SubProg emit_op pc: 2829 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _c_51313 = (object)*(((s1_ptr)_2)->base + _26691);
        if (!IS_ATOM_INT(_c_51313)){
            _c_51313 = (object)DBL_PTR(_c_51313)->dbl;
        }
        // SubProg emit_op pc: 2835 op: STARTLINE (58)

        /** emit.e:1065				if c > 1*/
        // SubProg emit_op pc: 2837 op: GREATER (6)
        _26693 = (_c_51313 > 1);
        // SubProg emit_op pc: 2841 op: SC1_AND_IF (146)
        if (_26693 == 0) {
            goto L4B; // [2841] 2962
        }
        // SubProg emit_op pc: 2845 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2847 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26695 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 2851 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2853 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26695);
        _26696 = (object)*(((s1_ptr)_2)->base + 3);
        _26695 = NOVALUE;
        // SubProg emit_op pc: 2857 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2859 op: EQUALS (3)
        if (IS_ATOM_INT(_26696)) {
            _26697 = (_26696 == 2);
        }
        else {
            _26697 = binary_op(EQUALS, _26696, 2);
        }
        _26696 = NOVALUE;
        // SubProg emit_op pc: 2863 op: NOP1 (159)
        // SubProg emit_op pc: 2864 op: IF (20)
        if (_26697 == 0) {
            DeRef(_26697);
            _26697 = NOVALUE;
            goto L4B; // [2864] 2962
        }
        else {
            if (!IS_ATOM_INT(_26697) && DBL_PTR(_26697)->dbl == 0.0){
                DeRef(_26697);
                _26697 = NOVALUE;
                goto L4B; // [2864] 2962
            }
            DeRef(_26697);
            _26697 = NOVALUE;
        }
        DeRef(_26697);
        _26697 = NOVALUE;
        // SubProg emit_op pc: 2867 op: STARTLINE (58)

        /** emit.e:1068					if sequence( SymTab[c][S_OBJ] ) then*/
        // SubProg emit_op pc: 2869 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2871 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26698 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 2875 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2877 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26698);
        _26699 = (object)*(((s1_ptr)_2)->base + 1);
        _26698 = NOVALUE;
        // SubProg emit_op pc: 2881 op: IS_A_SEQUENCE (68)
        _26700 = IS_SEQUENCE(_26699);
        _26699 = NOVALUE;
        // SubProg emit_op pc: 2884 op: IF (20)
        if (_26700 == 0)
        {
            _26700 = NOVALUE;
            goto L4C; // [2884] 2913
        }
        else{
            _26700 = NOVALUE;
        }
        // SubProg emit_op pc: 2887 op: STARTLINE (58)

        /** emit.e:1070						ThisLine = ExprLine*/
        // SubProg emit_op pc: 2889 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2891 op: ASSIGN (18)
        RefDS(_38ExprLine_56467);
        DeRef(_49ThisLine_48709);
        _49ThisLine_48709 = _38ExprLine_56467;
        // SubProg emit_op pc: 2894 op: STARTLINE (58)

        /** emit.e:1071						bp = expr_bp*/
        // SubProg emit_op pc: 2896 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2898 op: ASSIGN (18)
        _49bp_48713 = _38expr_bp_56468;
        // SubProg emit_op pc: 2901 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 2903 op: STARTLINE (58)

        /** emit.e:1072						CompileErr( 346 )*/
        // SubProg emit_op pc: 2905 op: PROC (27)
        RefDS(_21936);
        _49CompileErr(346, _21936, 0);
        // SubProg emit_op pc: 2910 op: ELSE (23)
        goto L4D; // [2910] 3092
        // SubProg emit_op pc: 2912 op: NOP1 (159)
L4C: // addr: 2913 pc: 2912 sub: 51307 op: 159
        // SubProg emit_op pc: 2913 op: STARTLINE (58)

        /** emit.e:1074					elsif SymTab[c][S_OBJ] = NOVALUE then*/
        // SubProg emit_op pc: 2915 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2917 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26701 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 2921 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2923 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26701);
        _26702 = (object)*(((s1_ptr)_2)->base + 1);
        _26701 = NOVALUE;
        // SubProg emit_op pc: 2927 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2929 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26702, _34NOVALUE_15043)){
            _26702 = NOVALUE;
            goto L4E; // [2929] 2948
        }
        _26702 = NOVALUE;
        // SubProg emit_op pc: 2933 op: STARTLINE (58)

        /** emit.e:1075						emit_opcode(op)*/
        // SubProg emit_op pc: 2935 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 2938 op: STARTLINE (58)

        /** emit.e:1076						emit_addr(op_info1)*/
        // SubProg emit_op pc: 2940 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2942 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 2945 op: ELSE (23)
        goto L4D; // [2945] 3092
        // SubProg emit_op pc: 2947 op: NOP1 (159)
L4E: // addr: 2948 pc: 2947 sub: 51307 op: 159
        // SubProg emit_op pc: 2948 op: STARTLINE (58)

        /** emit.e:1078						last_op = last_op_backup*/
        // SubProg emit_op pc: 2950 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 2953 op: STARTLINE (58)

        /** emit.e:1079						last_pc = last_pc_backup*/
        // SubProg emit_op pc: 2955 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 2958 op: NOP1 (159)
        // SubProg emit_op pc: 2959 op: ELSE (23)
        goto L4D; // [2959] 3092
        // SubProg emit_op pc: 2961 op: NOP1 (159)
L4B: // addr: 2962 pc: 2961 sub: 51307 op: 159
        // SubProg emit_op pc: 2962 op: STARTLINE (58)

        /** emit.e:1082				elsif c < 1 */
        // SubProg emit_op pc: 2964 op: LESS (1)
        _26704 = (_c_51313 < 1);
        // SubProg emit_op pc: 2968 op: SC1_OR_IF (147)
        if (_26704 != 0) {
            goto L4F; // [2968] 2984
        }
        // SubProg emit_op pc: 2972 op: PROC (27)
        _26706 = _45IsInteger(_c_51313);
        // SubProg emit_op pc: 2976 op: NOT (7)
        if (IS_ATOM_INT(_26706)) {
            _26707 = (_26706 == 0);
        }
        else {
            _26707 = unary_op(NOT, _26706);
        }
        DeRef(_26706);
        _26706 = NOVALUE;
        // SubProg emit_op pc: 2979 op: NOP1 (159)
        // SubProg emit_op pc: 2980 op: IF (20)
        if (_26707 == 0) {
            DeRef(_26707);
            _26707 = NOVALUE;
            goto L50; // [2980] 2999
        }
        else {
            if (!IS_ATOM_INT(_26707) && DBL_PTR(_26707)->dbl == 0.0){
                DeRef(_26707);
                _26707 = NOVALUE;
                goto L50; // [2980] 2999
            }
            DeRef(_26707);
            _26707 = NOVALUE;
        }
        DeRef(_26707);
        _26707 = NOVALUE;
        // SubProg emit_op pc: 2983 op: NOP1 (159)
L4F: // addr: 2984 pc: 2983 sub: 51307 op: 159
        // SubProg emit_op pc: 2984 op: STARTLINE (58)

        /** emit.e:1085					emit_opcode(op)*/
        // SubProg emit_op pc: 2986 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 2989 op: STARTLINE (58)

        /** emit.e:1086					emit_addr(op_info1)*/
        // SubProg emit_op pc: 2991 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 2993 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 2996 op: ELSE (23)
        goto L4D; // [2996] 3092
        // SubProg emit_op pc: 2998 op: NOP1 (159)
L50: // addr: 2999 pc: 2998 sub: 51307 op: 159
        // SubProg emit_op pc: 2999 op: STARTLINE (58)

        /** emit.e:1089					last_op = last_op_backup*/
        // SubProg emit_op pc: 3001 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 3004 op: STARTLINE (58)

        /** emit.e:1090					last_pc = last_pc_backup*/
        // SubProg emit_op pc: 3006 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 3009 op: NOP1 (159)
        // SubProg emit_op pc: 3010 op: ELSE (23)
        goto L4D; // [3010] 3092
        // SubProg emit_op pc: 3012 op: NOP1 (159)
L4A: // addr: 3013 pc: 3012 sub: 51307 op: 159
        // SubProg emit_op pc: 3013 op: STARTLINE (58)

        /** emit.e:1092			elsif previous_op = -1 or*/
        // SubProg emit_op pc: 3015 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3017 op: EQUALS (3)
        _26708 = (_34previous_op_15286 == -1);
        // SubProg emit_op pc: 3021 op: SC1_OR_IF (147)
        if (_26708 != 0) {
            goto L51; // [3021] 3066
        }
        // SubProg emit_op pc: 3025 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3027 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3029 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45op_result_50987);
        _26710 = (object)*(((s1_ptr)_2)->base + _34previous_op_15286);
        // SubProg emit_op pc: 3033 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3035 op: NOTEQ (4)
        _26711 = (_26710 != 1);
        _26710 = NOVALUE;
        // SubProg emit_op pc: 3039 op: SC1_AND (141)
        if (_26711 == 0) {
            DeRef(_26712);
            _26712 = 0;
            goto L52; // [3039] 3061
        }
        // SubProg emit_op pc: 3043 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3045 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3047 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45op_result_50987);
        _26713 = (object)*(((s1_ptr)_2)->base + _34previous_op_15286);
        // SubProg emit_op pc: 3051 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3053 op: NOTEQ (4)
        _26714 = (_26713 != 3);
        _26713 = NOVALUE;
        // SubProg emit_op pc: 3057 op: SC2_AND (142)
        _26712 = (_26714 != 0);
        // SubProg emit_op pc: 3060 op: NOP1 (159)
L52: // addr: 3061 pc: 3060 sub: 51307 op: 159
        // SubProg emit_op pc: 3061 op: NOP1 (159)
        // SubProg emit_op pc: 3062 op: IF (20)
        if (_26712 == 0)
        {
            _26712 = NOVALUE;
            goto L53; // [3062] 3081
        }
        else{
            _26712 = NOVALUE;
        }
        // SubProg emit_op pc: 3065 op: NOP1 (159)
L51: // addr: 3066 pc: 3065 sub: 51307 op: 159
        // SubProg emit_op pc: 3066 op: STARTLINE (58)

        /** emit.e:1095				emit_opcode(op)*/
        // SubProg emit_op pc: 3068 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 3071 op: STARTLINE (58)

        /** emit.e:1096				emit_addr(op_info1)*/
        // SubProg emit_op pc: 3073 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3075 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 3078 op: ELSE (23)
        goto L4D; // [3078] 3092
        // SubProg emit_op pc: 3080 op: NOP1 (159)
L53: // addr: 3081 pc: 3080 sub: 51307 op: 159
        // SubProg emit_op pc: 3081 op: STARTLINE (58)

        /** emit.e:1098				last_op = last_op_backup*/
        // SubProg emit_op pc: 3083 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 3086 op: STARTLINE (58)

        /** emit.e:1099				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 3088 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 3091 op: NOP1 (159)
L4D: // addr: 3092 pc: 3091 sub: 51307 op: 159
        // SubProg emit_op pc: 3092 op: STARTLINE (58)

        /** emit.e:1101			clear_temp( Code[$-1] )*/
        // SubProg emit_op pc: 3094 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3096 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26715 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26715 = 1;
        }
        // SubProg emit_op pc: 3099 op: MINUS (10)
        _26716 = _26715 - 1;
        _26715 = NOVALUE;
        // SubProg emit_op pc: 3103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26717 = (object)*(((s1_ptr)_2)->base + _26716);
        // SubProg emit_op pc: 3107 op: PROC (27)
        Ref(_26717);
        _45clear_temp(_26717);
        _26717 = NOVALUE;
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
        _n_51322 = _45op_info1_50371;
        // SubProg emit_op pc: 3123 op: STARTLINE (58)

        /** emit.e:1107			elements = {}*/
        // SubProg emit_op pc: 3125 op: ASSIGN (18)
        RefDS(_21936);
        DeRef(_elements_51324);
        _elements_51324 = _21936;
        // SubProg emit_op pc: 3128 op: SEQUENCE_CHECK (97)
        // SubProg emit_op pc: 3130 op: STARTLINE (58)

        /** emit.e:1108			for i = 1 to n do*/
        // SubProg emit_op pc: 3132 op: ASSIGN (18)
        _26718 = _n_51322;
        // SubProg emit_op pc: 3135 op: FOR_I (125)
        {
            object _i_51972;
            _i_51972 = 1;
L54: // addr: 3142 pc: 3135 sub: 51307 op: 125
            if (_i_51972 > _26718){
                goto L55; // [3135] 3158
            }
            // SubProg emit_op pc: 3142 op: STARTLINE (58)

            /** emit.e:1109				elements = append(elements, Pop())*/
            // SubProg emit_op pc: 3144 op: PROC (27)
            _26719 = _45Pop();
            // SubProg emit_op pc: 3147 op: APPEND (35)
            Ref(_26719);
            Append(&_elements_51324, _elements_51324, _26719);
            DeRef(_26719);
            _26719 = NOVALUE;
            // SubProg emit_op pc: 3151 op: STARTLINE (58)

            /** emit.e:1110			end for*/
            // SubProg emit_op pc: 3153 op: ENDFOR_INT_UP1 (54)
            _i_51972 = _i_51972 + 1;
            goto L54; // [3153] 3142
L55: // addr: 3158 pc: 3153 sub: 51307 op: 54
            ;
        }
        // SubProg emit_op pc: 3158 op: STARTLINE (58)

        /** emit.e:1111			element_vals = good_string(elements)*/
        // SubProg emit_op pc: 3160 op: PROC (27)
        RefDS(_elements_51324);
        _0 = _element_vals_51325;
        _element_vals_51325 = _45good_string(_elements_51324);
        DeRef(_0);
        // SubProg emit_op pc: 3164 op: STARTLINE (58)

        /** emit.e:1113			if sequence(element_vals) then*/
        // SubProg emit_op pc: 3166 op: IS_A_SEQUENCE (68)
        _26722 = IS_SEQUENCE(_element_vals_51325);
        // SubProg emit_op pc: 3169 op: IF (20)
        if (_26722 == 0)
        {
            _26722 = NOVALUE;
            goto L56; // [3169] 3200
        }
        else{
            _26722 = NOVALUE;
        }
        // SubProg emit_op pc: 3172 op: STARTLINE (58)

        /** emit.e:1114				c = NewStringSym(element_vals)  -- make a string literal*/
        // SubProg emit_op pc: 3174 op: PROC (27)
        Ref(_element_vals_51325);
        _c_51313 = _53NewStringSym(_element_vals_51325);
        // SubProg emit_op pc: 3178 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 3180 op: STARTLINE (58)

        /** emit.e:1115				assignable = FALSE*/
        // SubProg emit_op pc: 3182 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3184 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 3187 op: STARTLINE (58)

        /** emit.e:1116				last_op = last_op_backup*/
        // SubProg emit_op pc: 3189 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 3192 op: STARTLINE (58)

        /** emit.e:1117				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 3194 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 3197 op: ELSE (23)
        goto L57; // [3197] 3291
        // SubProg emit_op pc: 3199 op: NOP1 (159)
L56: // addr: 3200 pc: 3199 sub: 51307 op: 159
        // SubProg emit_op pc: 3200 op: STARTLINE (58)

        /** emit.e:1119				if n = 2 then*/
        // SubProg emit_op pc: 3202 op: EQUALS_IFW_I (121)
        if (_n_51322 != 2)
        goto L58; // [3202] 3225
        // SubProg emit_op pc: 3206 op: STARTLINE (58)

        /** emit.e:1120					emit_opcode(RIGHT_BRACE_2) -- faster op for two items*/
        // SubProg emit_op pc: 3208 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3210 op: PROC (27)
        _45emit_opcode(85);
        // SubProg emit_op pc: 3213 op: STARTLINE (58)

        /** emit.e:1121					last_op = RIGHT_BRACE_2*/
        // SubProg emit_op pc: 3215 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3217 op: ASSIGN (18)
        _45last_op_51268 = 85;
        // SubProg emit_op pc: 3220 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3222 op: ELSE (23)
        goto L59; // [3222] 3236
        // SubProg emit_op pc: 3224 op: NOP1 (159)
L58: // addr: 3225 pc: 3224 sub: 51307 op: 159
        // SubProg emit_op pc: 3225 op: STARTLINE (58)

        /** emit.e:1123					emit_opcode(op)*/
        // SubProg emit_op pc: 3227 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 3230 op: STARTLINE (58)

        /** emit.e:1124					emit(n)*/
        // SubProg emit_op pc: 3232 op: PROC (27)
        _45emit(_n_51322);
        // SubProg emit_op pc: 3235 op: NOP1 (159)
L59: // addr: 3236 pc: 3235 sub: 51307 op: 159
        // SubProg emit_op pc: 3236 op: STARTLINE (58)

        /** emit.e:1127				for i = 1 to n do*/
        // SubProg emit_op pc: 3238 op: ASSIGN (18)
        _26725 = _n_51322;
        // SubProg emit_op pc: 3241 op: FOR_I (125)
        {
            object _i_51989;
            _i_51989 = 1;
L5A: // addr: 3248 pc: 3241 sub: 51307 op: 125
            if (_i_51989 > _26725){
                goto L5B; // [3241] 3264
            }
            // SubProg emit_op pc: 3248 op: STARTLINE (58)

            /** emit.e:1128					emit_addr(elements[i])*/
            // SubProg emit_op pc: 3250 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_elements_51324);
            _26726 = (object)*(((s1_ptr)_2)->base + _i_51989);
            // SubProg emit_op pc: 3254 op: PROC (27)
            Ref(_26726);
            _45emit_addr(_26726);
            _26726 = NOVALUE;
            // SubProg emit_op pc: 3257 op: STARTLINE (58)

            /** emit.e:1129				end for*/
            // SubProg emit_op pc: 3259 op: ENDFOR_INT_UP1 (54)
            _i_51989 = _i_51989 + 1;
            goto L5A; // [3259] 3248
L5B: // addr: 3264 pc: 3259 sub: 51307 op: 54
            ;
        }
        // SubProg emit_op pc: 3264 op: STARTLINE (58)

        /** emit.e:1130				c = NewTempSym()*/
        // SubProg emit_op pc: 3266 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 3270 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 3272 op: STARTLINE (58)

        /** emit.e:1131				emit_addr(c)*/
        // SubProg emit_op pc: 3274 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 3277 op: STARTLINE (58)

        /** emit.e:1132				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 3279 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 3283 op: STARTLINE (58)

        /** emit.e:1133				assignable = TRUE*/
        // SubProg emit_op pc: 3285 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3287 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 3290 op: NOP1 (159)
L57: // addr: 3291 pc: 3290 sub: 51307 op: 159
        // SubProg emit_op pc: 3291 op: STARTLINE (58)

        /** emit.e:1135			Push(c)*/
        // SubProg emit_op pc: 3293 op: PROC (27)
        _45Push(_c_51313);
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
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 3311 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 3313 op: STARTLINE (58)

        /** emit.e:1142			a = Pop() -- subscript*/
        // SubProg emit_op pc: 3315 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 3318 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 3320 op: STARTLINE (58)

        /** emit.e:1143			c = Pop() -- sequence*/
        // SubProg emit_op pc: 3322 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 3325 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 3327 op: STARTLINE (58)

        /** emit.e:1144			if op = ASSIGN_SUBS then*/
        // SubProg emit_op pc: 3329 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3331 op: EQUALS_IFW (104)
        if (_op_51309 != 16)
        goto L5C; // [3331] 3523
        // SubProg emit_op pc: 3335 op: STARTLINE (58)

        /** emit.e:1146				if (previous_op != LHS_SUBS) and*/
        // SubProg emit_op pc: 3337 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3339 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3341 op: NOTEQ (4)
        _26732 = (_34previous_op_15286 != 95);
        // SubProg emit_op pc: 3345 op: SC1_AND (141)
        if (_26732 == 0) {
            _26733 = 0;
            goto L5D; // [3345] 3357
        }
        // SubProg emit_op pc: 3349 op: GREATER (6)
        _26734 = (_c_51313 > 0);
        // SubProg emit_op pc: 3353 op: SC2_AND (142)
        _26733 = (_26734 != 0);
        // SubProg emit_op pc: 3356 op: NOP1 (159)
L5D: // addr: 3357 pc: 3356 sub: 51307 op: 159
        // SubProg emit_op pc: 3357 op: SC1_AND_IF (146)
        if (_26733 == 0) {
            goto L5E; // [3357] 3495
        }
        // SubProg emit_op pc: 3361 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3363 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26736 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 3367 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26736);
        _26737 = (object)*(((s1_ptr)_2)->base + 3);
        _26736 = NOVALUE;
        // SubProg emit_op pc: 3373 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3375 op: NOTEQ (4)
        if (IS_ATOM_INT(_26737)) {
            _26738 = (_26737 != 1);
        }
        else {
            _26738 = binary_op(NOTEQ, _26737, 1);
        }
        _26737 = NOVALUE;
        // SubProg emit_op pc: 3379 op: SC1_OR (143)
        if (IS_ATOM_INT(_26738)) {
            if (_26738 != 0) {
                DeRef(_26739);
                _26739 = 1;
                goto L5F; // [3379] 3479
            }
        }
        else {
            if (DBL_PTR(_26738)->dbl != 0.0) {
                DeRef(_26739);
                _26739 = 1;
                goto L5F; // [3379] 3479
            }
        }
        // SubProg emit_op pc: 3383 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3385 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26740 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 3389 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3391 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26740);
        _26741 = (object)*(((s1_ptr)_2)->base + 15);
        _26740 = NOVALUE;
        // SubProg emit_op pc: 3395 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3397 op: NOTEQ (4)
        if (IS_ATOM_INT(_26741)) {
            _26742 = (_26741 != _53sequence_type_46261);
        }
        else {
            _26742 = binary_op(NOTEQ, _26741, _53sequence_type_46261);
        }
        _26741 = NOVALUE;
        // SubProg emit_op pc: 3401 op: SC1_AND (141)
        if (IS_ATOM_INT(_26742)) {
            if (_26742 == 0) {
                DeRef(_26743);
                _26743 = 0;
                goto L60; // [3401] 3475
            }
        }
        else {
            if (DBL_PTR(_26742)->dbl == 0.0) {
                DeRef(_26743);
                _26743 = 0;
                goto L60; // [3401] 3475
            }
        }
        // SubProg emit_op pc: 3405 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3407 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26744 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 3411 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3413 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26744);
        _26745 = (object)*(((s1_ptr)_2)->base + 15);
        _26744 = NOVALUE;
        // SubProg emit_op pc: 3417 op: GREATER (6)
        if (IS_ATOM_INT(_26745)) {
            _26746 = (_26745 > 0);
        }
        else {
            _26746 = binary_op(GREATER, _26745, 0);
        }
        _26745 = NOVALUE;
        // SubProg emit_op pc: 3421 op: SC1_AND (141)
        if (IS_ATOM_INT(_26746)) {
            if (_26746 == 0) {
                DeRef(_26747);
                _26747 = 0;
                goto L61; // [3421] 3471
            }
        }
        else {
            if (DBL_PTR(_26746)->dbl == 0.0) {
                DeRef(_26747);
                _26747 = 0;
                goto L61; // [3421] 3471
            }
        }
        // SubProg emit_op pc: 3425 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3427 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3429 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3431 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26748 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 3435 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3437 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26748);
        _26749 = (object)*(((s1_ptr)_2)->base + 15);
        _26748 = NOVALUE;
        // SubProg emit_op pc: 3441 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_26749)){
            _26750 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26749)->dbl));
        }
        else{
            _26750 = (object)*(((s1_ptr)_2)->base + _26749);
        }
        // SubProg emit_op pc: 3445 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3447 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26750);
        _26751 = (object)*(((s1_ptr)_2)->base + 2);
        _26750 = NOVALUE;
        // SubProg emit_op pc: 3451 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_26751)){
            _26752 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26751)->dbl));
        }
        else{
            _26752 = (object)*(((s1_ptr)_2)->base + _26751);
        }
        // SubProg emit_op pc: 3455 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3457 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26752);
        _26753 = (object)*(((s1_ptr)_2)->base + 15);
        _26752 = NOVALUE;
        // SubProg emit_op pc: 3461 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3463 op: NOTEQ (4)
        if (IS_ATOM_INT(_26753)) {
            _26754 = (_26753 != _53sequence_type_46261);
        }
        else {
            _26754 = binary_op(NOTEQ, _26753, _53sequence_type_46261);
        }
        _26753 = NOVALUE;
        // SubProg emit_op pc: 3467 op: SC2_AND (142)
        DeRef(_26747);
        if (IS_ATOM_INT(_26754))
        _26747 = (_26754 != 0);
        else
        _26747 = DBL_PTR(_26754)->dbl != 0.0;
        // SubProg emit_op pc: 3470 op: NOP1 (159)
L61: // addr: 3471 pc: 3470 sub: 51307 op: 159
        // SubProg emit_op pc: 3471 op: SC2_AND (142)
        DeRef(_26743);
        _26743 = (_26747 != 0);
        // SubProg emit_op pc: 3474 op: NOP1 (159)
L60: // addr: 3475 pc: 3474 sub: 51307 op: 159
        // SubProg emit_op pc: 3475 op: SC2_OR (144)
        DeRef(_26739);
        _26739 = (_26743 != 0);
        // SubProg emit_op pc: 3478 op: NOP1 (159)
L5F: // addr: 3479 pc: 3478 sub: 51307 op: 159
        // SubProg emit_op pc: 3479 op: NOP1 (159)
        // SubProg emit_op pc: 3480 op: IF (20)
        if (_26739 == 0)
        {
            _26739 = NOVALUE;
            goto L5E; // [3480] 3495
        }
        else{
            _26739 = NOVALUE;
        }
        // SubProg emit_op pc: 3483 op: STARTLINE (58)

        /** emit.e:1153					op = ASSIGN_SUBS_CHECK*/
        // SubProg emit_op pc: 3485 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3487 op: ASSIGN (18)
        _op_51309 = 84;
        // SubProg emit_op pc: 3490 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3492 op: ELSE (23)
        goto L62; // [3492] 3515
        // SubProg emit_op pc: 3494 op: NOP1 (159)
L5E: // addr: 3495 pc: 3494 sub: 51307 op: 159
        // SubProg emit_op pc: 3495 op: STARTLINE (58)

        /** emit.e:1155					if IsInteger(b) then*/
        // SubProg emit_op pc: 3497 op: PROC (27)
        _26755 = _45IsInteger(_b_51312);
        // SubProg emit_op pc: 3501 op: IF (20)
        if (_26755 == 0) {
            DeRef(_26755);
            _26755 = NOVALUE;
            goto L63; // [3501] 3514
        }
        else {
            if (!IS_ATOM_INT(_26755) && DBL_PTR(_26755)->dbl == 0.0){
                DeRef(_26755);
                _26755 = NOVALUE;
                goto L63; // [3501] 3514
            }
            DeRef(_26755);
            _26755 = NOVALUE;
        }
        DeRef(_26755);
        _26755 = NOVALUE;
        // SubProg emit_op pc: 3504 op: STARTLINE (58)

        /** emit.e:1156						op = ASSIGN_SUBS_I*/
        // SubProg emit_op pc: 3506 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3508 op: ASSIGN (18)
        _op_51309 = 118;
        // SubProg emit_op pc: 3511 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3513 op: NOP1 (159)
L63: // addr: 3514 pc: 3513 sub: 51307 op: 159
        // SubProg emit_op pc: 3514 op: NOP1 (159)
L62: // addr: 3515 pc: 3514 sub: 51307 op: 159
        // SubProg emit_op pc: 3515 op: STARTLINE (58)

        /** emit.e:1159				emit_opcode(op)*/
        // SubProg emit_op pc: 3517 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 3520 op: ELSE (23)
        goto L64; // [3520] 3549
        // SubProg emit_op pc: 3522 op: NOP1 (159)
L5C: // addr: 3523 pc: 3522 sub: 51307 op: 159
        // SubProg emit_op pc: 3523 op: STARTLINE (58)

        /** emit.e:1161			elsif op = PASSIGN_SUBS then*/
        // SubProg emit_op pc: 3525 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3527 op: EQUALS_IFW (104)
        if (_op_51309 != 162)
        goto L65; // [3527] 3541
        // SubProg emit_op pc: 3531 op: STARTLINE (58)

        /** emit.e:1162				emit_opcode(PASSIGN_SUBS) -- always*/
        // SubProg emit_op pc: 3533 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3535 op: PROC (27)
        _45emit_opcode(162);
        // SubProg emit_op pc: 3538 op: ELSE (23)
        goto L64; // [3538] 3549
        // SubProg emit_op pc: 3540 op: NOP1 (159)
L65: // addr: 3541 pc: 3540 sub: 51307 op: 159
        // SubProg emit_op pc: 3541 op: STARTLINE (58)

        /** emit.e:1165				emit_opcode(ASSIGN_SUBS) -- always*/
        // SubProg emit_op pc: 3543 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3545 op: PROC (27)
        _45emit_opcode(16);
        // SubProg emit_op pc: 3548 op: NOP1 (159)
L64: // addr: 3549 pc: 3548 sub: 51307 op: 159
        // SubProg emit_op pc: 3549 op: STARTLINE (58)

        /** emit.e:1169			emit_addr(c) -- sequence*/
        // SubProg emit_op pc: 3551 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 3554 op: STARTLINE (58)

        /** emit.e:1170			emit_addr(a) -- subscript*/
        // SubProg emit_op pc: 3556 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 3559 op: STARTLINE (58)

        /** emit.e:1171			emit_addr(b) -- rhs value*/
        // SubProg emit_op pc: 3561 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 3564 op: STARTLINE (58)

        /** emit.e:1172			assignable = FALSE*/
        // SubProg emit_op pc: 3566 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3568 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 3586 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 3588 op: STARTLINE (58)

        /** emit.e:1177			lhs_var = Pop() -- sequence*/
        // SubProg emit_op pc: 3590 op: PROC (27)
        _lhs_var_51319 = _45Pop();
        // SubProg emit_op pc: 3593 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_lhs_var_51319)) {
            _1 = (object)(DBL_PTR(_lhs_var_51319)->dbl);
            DeRefDS(_lhs_var_51319);
            _lhs_var_51319 = _1;
        }
        // SubProg emit_op pc: 3595 op: STARTLINE (58)

        /** emit.e:1178			emit_opcode(op)*/
        // SubProg emit_op pc: 3597 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 3600 op: STARTLINE (58)

        /** emit.e:1179			emit_addr(lhs_var)*/
        // SubProg emit_op pc: 3602 op: PROC (27)
        _45emit_addr(_lhs_var_51319);
        // SubProg emit_op pc: 3605 op: STARTLINE (58)

        /** emit.e:1180			emit_addr(a)*/
        // SubProg emit_op pc: 3607 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 3610 op: STARTLINE (58)

        /** emit.e:1181			if op = LHS_SUBS then*/
        // SubProg emit_op pc: 3612 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3614 op: EQUALS_IFW (104)
        if (_op_51309 != 95)
        goto L66; // [3614] 3645
        // SubProg emit_op pc: 3618 op: STARTLINE (58)

        /** emit.e:1182				TempKeep(lhs_var) -- should be lhs_target_temp*/
        // SubProg emit_op pc: 3620 op: PROC (27)
        _45TempKeep(_lhs_var_51319);
        // SubProg emit_op pc: 3623 op: STARTLINE (58)

        /** emit.e:1183				emit_addr(lhs_target_temp)*/
        // SubProg emit_op pc: 3625 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3627 op: PROC (27)
        _45emit_addr(_45lhs_target_temp_50385);
        // SubProg emit_op pc: 3630 op: STARTLINE (58)

        /** emit.e:1184				Push(lhs_target_temp)*/
        // SubProg emit_op pc: 3632 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3634 op: PROC (27)
        _45Push(_45lhs_target_temp_50385);
        // SubProg emit_op pc: 3637 op: STARTLINE (58)

        /** emit.e:1185				emit_addr(0) -- place holder*/
        // SubProg emit_op pc: 3639 op: PROC (27)
        _45emit_addr(0);
        // SubProg emit_op pc: 3642 op: ELSE (23)
        goto L67; // [3642] 3699
        // SubProg emit_op pc: 3644 op: NOP1 (159)
L66: // addr: 3645 pc: 3644 sub: 51307 op: 159
        // SubProg emit_op pc: 3645 op: STARTLINE (58)

        /** emit.e:1189				lhs_target_temp = NewTempSym() -- use same temp for all subscripts*/
        // SubProg emit_op pc: 3647 op: PROC (27)
        _0 = _53NewTempSym(0);
        _45lhs_target_temp_50385 = _0;
        // SubProg emit_op pc: 3651 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_45lhs_target_temp_50385)) {
            _1 = (object)(DBL_PTR(_45lhs_target_temp_50385)->dbl);
            DeRefDS(_45lhs_target_temp_50385);
            _45lhs_target_temp_50385 = _1;
        }
        // SubProg emit_op pc: 3653 op: STARTLINE (58)

        /** emit.e:1190				emit_addr(lhs_target_temp) -- target temp holds pointer to sequence*/
        // SubProg emit_op pc: 3655 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3657 op: PROC (27)
        _45emit_addr(_45lhs_target_temp_50385);
        // SubProg emit_op pc: 3660 op: STARTLINE (58)

        /** emit.e:1191				emit_temp(lhs_target_temp, NEW_REFERENCE )*/
        // SubProg emit_op pc: 3662 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3664 op: PROC (27)
        _45emit_temp(_45lhs_target_temp_50385, 1);
        // SubProg emit_op pc: 3668 op: STARTLINE (58)

        /** emit.e:1192				Push(lhs_target_temp)*/
        // SubProg emit_op pc: 3670 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3672 op: PROC (27)
        _45Push(_45lhs_target_temp_50385);
        // SubProg emit_op pc: 3675 op: STARTLINE (58)

        /** emit.e:1193				lhs_subs1_copy_temp = NewTempSym() -- place to copy (may be ignored)*/
        // SubProg emit_op pc: 3677 op: PROC (27)
        _0 = _53NewTempSym(0);
        _45lhs_subs1_copy_temp_50384 = _0;
        // SubProg emit_op pc: 3681 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_45lhs_subs1_copy_temp_50384)) {
            _1 = (object)(DBL_PTR(_45lhs_subs1_copy_temp_50384)->dbl);
            DeRefDS(_45lhs_subs1_copy_temp_50384);
            _45lhs_subs1_copy_temp_50384 = _1;
        }
        // SubProg emit_op pc: 3683 op: STARTLINE (58)

        /** emit.e:1194				emit_addr(lhs_subs1_copy_temp)*/
        // SubProg emit_op pc: 3685 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3687 op: PROC (27)
        _45emit_addr(_45lhs_subs1_copy_temp_50384);
        // SubProg emit_op pc: 3690 op: STARTLINE (58)

        /** emit.e:1195				emit_temp( lhs_subs1_copy_temp, NEW_REFERENCE )*/
        // SubProg emit_op pc: 3692 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3694 op: PROC (27)
        _45emit_temp(_45lhs_subs1_copy_temp_50384, 1);
        // SubProg emit_op pc: 3698 op: NOP1 (159)
L67: // addr: 3699 pc: 3698 sub: 51307 op: 159
        // SubProg emit_op pc: 3699 op: STARTLINE (58)

        /** emit.e:1198			current_sequence = append(current_sequence, lhs_target_temp)*/
        // SubProg emit_op pc: 3701 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3703 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3705 op: APPEND (35)
        Append(&_45current_sequence_50379, _45current_sequence_50379, _45lhs_target_temp_50385);
        // SubProg emit_op pc: 3709 op: STARTLINE (58)

        /** emit.e:1199			assignable = FALSE  -- need to update current_sequence like in RHS_SUBS*/
        // SubProg emit_op pc: 3711 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3713 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        if (0 != 0) {
            _26763 = 1;
            goto L68; // [3726] 3736
        }
        // SubProg emit_op pc: 3730 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3732 op: SC2_OR (144)
        _26763 = (0 != 0);
        // SubProg emit_op pc: 3735 op: NOP1 (159)
L68: // addr: 3736 pc: 3735 sub: 51307 op: 159
        // SubProg emit_op pc: 3736 op: SC1_OR_IF (147)
        if (_26763 != 0) {
            goto L69; // [3736] 3760
        }
        // SubProg emit_op pc: 3740 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3742 op: SC1_OR (143)
        if (0 != 0) {
            DeRef(_26765);
            _26765 = 1;
            goto L6A; // [3742] 3752
        }
        // SubProg emit_op pc: 3746 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3748 op: SC2_OR (144)
        _26765 = (0 != 0);
        // SubProg emit_op pc: 3751 op: NOP1 (159)
L6A: // addr: 3752 pc: 3751 sub: 51307 op: 159
        // SubProg emit_op pc: 3752 op: NOT (7)
        _26766 = (_26765 == 0);
        _26765 = NOVALUE;
        // SubProg emit_op pc: 3755 op: NOP1 (159)
        // SubProg emit_op pc: 3756 op: IF (20)
        if (_26766 == 0)
        {
            DeRef(_26766);
            _26766 = NOVALUE;
            goto L6B; // [3756] 3772
        }
        else{
            DeRef(_26766);
            _26766 = NOVALUE;
        }
        // SubProg emit_op pc: 3759 op: NOP1 (159)
L69: // addr: 3760 pc: 3759 sub: 51307 op: 159
        // SubProg emit_op pc: 3760 op: STARTLINE (58)

        /** emit.e:1203				op = PEEK4S*/
        // SubProg emit_op pc: 3762 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3764 op: ASSIGN (18)
        _op_51309 = 139;
        // SubProg emit_op pc: 3767 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3769 op: ELSE (23)
        goto L6C; // [3769] 3782
        // SubProg emit_op pc: 3771 op: NOP1 (159)
L6B: // addr: 3772 pc: 3771 sub: 51307 op: 159
        // SubProg emit_op pc: 3772 op: STARTLINE (58)

        /** emit.e:1205				op = PEEK8S*/
        // SubProg emit_op pc: 3774 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3776 op: ASSIGN (18)
        _op_51309 = 213;
        // SubProg emit_op pc: 3779 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3781 op: NOP1 (159)
L6C: // addr: 3782 pc: 3781 sub: 51307 op: 159
        // SubProg emit_op pc: 3782 op: STARTLINE (58)

        /** emit.e:1207			last_op = op*/
        // SubProg emit_op pc: 3784 op: ASSIGN_I (113)
        _45last_op_51268 = _op_51309;
        // SubProg emit_op pc: 3787 op: STARTLINE (58)

        /** emit.e:1208			cont11ii(op, TRUE )*/
        // SubProg emit_op pc: 3789 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3791 op: PROC (27)
        _45cont11ii(_op_51309, _8TRUE_444);
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
        if (0 != 0) {
            _26767 = 1;
            goto L6D; // [3805] 3815
        }
        // SubProg emit_op pc: 3809 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3811 op: SC2_OR (144)
        _26767 = (0 != 0);
        // SubProg emit_op pc: 3814 op: NOP1 (159)
L6D: // addr: 3815 pc: 3814 sub: 51307 op: 159
        // SubProg emit_op pc: 3815 op: SC1_OR_IF (147)
        if (_26767 != 0) {
            goto L6E; // [3815] 3839
        }
        // SubProg emit_op pc: 3819 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3821 op: SC1_OR (143)
        if (0 != 0) {
            DeRef(_26769);
            _26769 = 1;
            goto L6F; // [3821] 3831
        }
        // SubProg emit_op pc: 3825 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3827 op: SC2_OR (144)
        _26769 = (0 != 0);
        // SubProg emit_op pc: 3830 op: NOP1 (159)
L6F: // addr: 3831 pc: 3830 sub: 51307 op: 159
        // SubProg emit_op pc: 3831 op: NOT (7)
        _26770 = (_26769 == 0);
        _26769 = NOVALUE;
        // SubProg emit_op pc: 3834 op: NOP1 (159)
        // SubProg emit_op pc: 3835 op: IF (20)
        if (_26770 == 0)
        {
            DeRef(_26770);
            _26770 = NOVALUE;
            goto L70; // [3835] 3851
        }
        else{
            DeRef(_26770);
            _26770 = NOVALUE;
        }
        // SubProg emit_op pc: 3838 op: NOP1 (159)
L6E: // addr: 3839 pc: 3838 sub: 51307 op: 159
        // SubProg emit_op pc: 3839 op: STARTLINE (58)

        /** emit.e:1212				op = PEEK4U*/
        // SubProg emit_op pc: 3841 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3843 op: ASSIGN (18)
        _op_51309 = 140;
        // SubProg emit_op pc: 3846 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3848 op: ELSE (23)
        goto L71; // [3848] 3861
        // SubProg emit_op pc: 3850 op: NOP1 (159)
L70: // addr: 3851 pc: 3850 sub: 51307 op: 159
        // SubProg emit_op pc: 3851 op: STARTLINE (58)

        /** emit.e:1214				op = PEEK8U*/
        // SubProg emit_op pc: 3853 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3855 op: ASSIGN (18)
        _op_51309 = 214;
        // SubProg emit_op pc: 3858 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 3860 op: NOP1 (159)
L71: // addr: 3861 pc: 3860 sub: 51307 op: 159
        // SubProg emit_op pc: 3861 op: STARTLINE (58)

        /** emit.e:1216			last_op = op*/
        // SubProg emit_op pc: 3863 op: ASSIGN_I (113)
        _45last_op_51268 = _op_51309;
        // SubProg emit_op pc: 3866 op: STARTLINE (58)

        /** emit.e:1217			cont11ii(op, TRUE )*/
        // SubProg emit_op pc: 3868 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3870 op: PROC (27)
        _45cont11ii(_op_51309, _8TRUE_444);
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
        _45cont11ii(_op_51309, _8TRUE_444);
        // SubProg emit_op pc: 3916 op: ELSE (23)
        goto LC; // [3916] 7737
        // SubProg emit_op pc: 3918 op: STARTLINE (58)

        /** emit.e:1224		case UMINUS then*/
        // SubProg emit_op pc: 3920 op: CASE (186)
        case 12:
        // SubProg emit_op pc: 3922 op: STARTLINE (58)

        /** emit.e:1226			a = Pop()*/
        // SubProg emit_op pc: 3924 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 3927 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 3929 op: STARTLINE (58)

        /** emit.e:1228			if a > 0 then*/
        // SubProg emit_op pc: 3931 op: GREATER_IFW (107)
        if (_a_51311 <= 0)
        goto L72; // [3931] 4178
        // SubProg emit_op pc: 3935 op: STARTLINE (58)

        /** emit.e:1229				obj = SymTab[a][S_OBJ]*/
        // SubProg emit_op pc: 3937 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3939 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26773 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 3943 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3945 op: RHS_SUBS_CHECK (92)
        DeRef(_obj_51323);
        _2 = (object)SEQ_PTR(_26773);
        _obj_51323 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_obj_51323);
        _26773 = NOVALUE;
        // SubProg emit_op pc: 3949 op: STARTLINE (58)

        /** emit.e:1230				if SymTab[a][S_MODE] = M_CONSTANT then*/
        // SubProg emit_op pc: 3951 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3953 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26775 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 3957 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3959 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26775);
        _26776 = (object)*(((s1_ptr)_2)->base + 3);
        _26775 = NOVALUE;
        // SubProg emit_op pc: 3963 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3965 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _26776, 2)){
            _26776 = NOVALUE;
            goto L73; // [3965] 4090
        }
        _26776 = NOVALUE;
        // SubProg emit_op pc: 3969 op: STARTLINE (58)

        /** emit.e:1231					if is_integer(obj) then*/
        // SubProg emit_op pc: 3971 op: PROC (27)
        Ref(_obj_51323);
        _26778 = _34is_integer(_obj_51323);
        // SubProg emit_op pc: 3975 op: IF (20)
        if (_26778 == 0) {
            DeRef(_26778);
            _26778 = NOVALUE;
            goto L74; // [3975] 4029
        }
        else {
            if (!IS_ATOM_INT(_26778) && DBL_PTR(_26778)->dbl == 0.0){
                DeRef(_26778);
                _26778 = NOVALUE;
                goto L74; // [3975] 4029
            }
            DeRef(_26778);
            _26778 = NOVALUE;
        }
        DeRef(_26778);
        _26778 = NOVALUE;
        // SubProg emit_op pc: 3978 op: STARTLINE (58)

        /** emit.e:1232						if obj = MININT then*/
        // SubProg emit_op pc: 3980 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3982 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _obj_51323, -1073741824)){
            goto L75; // [3982] 4003
        }
        // SubProg emit_op pc: 3986 op: STARTLINE (58)

        /** emit.e:1233							Push(NewDoubleSym(-MININT))*/
        // SubProg emit_op pc: 3988 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 3990 op: UMINUS (12)
        if ((uintptr_t)-1073741824 == (uintptr_t)HIGH_BITS){
            _26780 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _26780 = - -1073741824;
        }
        // SubProg emit_op pc: 3993 op: PROC (27)
        _26781 = _53NewDoubleSym(_26780);
        _26780 = NOVALUE;
        // SubProg emit_op pc: 3997 op: PROC (27)
        _45Push(_26781);
        _26781 = NOVALUE;
        // SubProg emit_op pc: 4000 op: ELSE (23)
        goto L76; // [4000] 4016
        // SubProg emit_op pc: 4002 op: NOP1 (159)
L75: // addr: 4003 pc: 4002 sub: 51307 op: 159
        // SubProg emit_op pc: 4003 op: STARTLINE (58)

        /** emit.e:1235							Push(NewIntSym(-obj))*/
        // SubProg emit_op pc: 4005 op: UMINUS (12)
        if (IS_ATOM_INT(_obj_51323)) {
            if ((uintptr_t)_obj_51323 == (uintptr_t)HIGH_BITS){
                _26782 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26782 = - _obj_51323;
            }
        }
        else {
            _26782 = unary_op(UMINUS, _obj_51323);
        }
        // SubProg emit_op pc: 4008 op: PROC (27)
        _26783 = _53NewIntSym(_26782);
        _26782 = NOVALUE;
        // SubProg emit_op pc: 4012 op: PROC (27)
        _45Push(_26783);
        _26783 = NOVALUE;
        // SubProg emit_op pc: 4015 op: NOP1 (159)
L76: // addr: 4016 pc: 4015 sub: 51307 op: 159
        // SubProg emit_op pc: 4016 op: STARTLINE (58)

        /** emit.e:1237						last_pc = last_pc_backup*/
        // SubProg emit_op pc: 4018 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 4021 op: STARTLINE (58)

        /** emit.e:1238						last_op = last_op_backup*/
        // SubProg emit_op pc: 4023 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 4026 op: ELSE (23)
        goto LC; // [4026] 7737
        // SubProg emit_op pc: 4028 op: NOP1 (159)
L74: // addr: 4029 pc: 4028 sub: 51307 op: 159
        // SubProg emit_op pc: 4029 op: STARTLINE (58)

        /** emit.e:1240					elsif atom(obj) and obj != NOVALUE then*/
        // SubProg emit_op pc: 4031 op: IS_AN_ATOM (67)
        _26784 = IS_ATOM(_obj_51323);
        // SubProg emit_op pc: 4034 op: SC1_AND_IF (146)
        if (_26784 == 0) {
            goto L77; // [4034] 4073
        }
        // SubProg emit_op pc: 4038 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4040 op: NOTEQ (4)
        if (IS_ATOM_INT(_obj_51323) && IS_ATOM_INT(_34NOVALUE_15043)) {
            _26786 = (_obj_51323 != _34NOVALUE_15043);
        }
        else {
            _26786 = binary_op(NOTEQ, _obj_51323, _34NOVALUE_15043);
        }
        // SubProg emit_op pc: 4044 op: NOP1 (159)
        // SubProg emit_op pc: 4045 op: IF (20)
        if (_26786 == 0) {
            DeRef(_26786);
            _26786 = NOVALUE;
            goto L77; // [4045] 4073
        }
        else {
            if (!IS_ATOM_INT(_26786) && DBL_PTR(_26786)->dbl == 0.0){
                DeRef(_26786);
                _26786 = NOVALUE;
                goto L77; // [4045] 4073
            }
            DeRef(_26786);
            _26786 = NOVALUE;
        }
        DeRef(_26786);
        _26786 = NOVALUE;
        // SubProg emit_op pc: 4048 op: STARTLINE (58)

        /** emit.e:1245						Push(NewDoubleSym(-obj))*/
        // SubProg emit_op pc: 4050 op: UMINUS (12)
        if (IS_ATOM_INT(_obj_51323)) {
            if ((uintptr_t)_obj_51323 == (uintptr_t)HIGH_BITS){
                _26787 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26787 = - _obj_51323;
            }
        }
        else {
            _26787 = unary_op(UMINUS, _obj_51323);
        }
        // SubProg emit_op pc: 4053 op: PROC (27)
        _26788 = _53NewDoubleSym(_26787);
        _26787 = NOVALUE;
        // SubProg emit_op pc: 4057 op: PROC (27)
        _45Push(_26788);
        _26788 = NOVALUE;
        // SubProg emit_op pc: 4060 op: STARTLINE (58)

        /** emit.e:1246						last_pc = last_pc_backup*/
        // SubProg emit_op pc: 4062 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 4065 op: STARTLINE (58)

        /** emit.e:1247						last_op = last_op_backup*/
        // SubProg emit_op pc: 4067 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 4070 op: ELSE (23)
        goto LC; // [4070] 7737
        // SubProg emit_op pc: 4072 op: NOP1 (159)
L77: // addr: 4073 pc: 4072 sub: 51307 op: 159
        // SubProg emit_op pc: 4073 op: STARTLINE (58)

        /** emit.e:1250						Push(a)*/
        // SubProg emit_op pc: 4075 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 4078 op: STARTLINE (58)

        /** emit.e:1251						cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4080 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4082 op: PROC (27)
        _45cont11ii(_op_51309, _8FALSE_442);
        // SubProg emit_op pc: 4086 op: NOP1 (159)
        // SubProg emit_op pc: 4087 op: ELSE (23)
        goto LC; // [4087] 7737
        // SubProg emit_op pc: 4089 op: NOP1 (159)
L73: // addr: 4090 pc: 4089 sub: 51307 op: 159
        // SubProg emit_op pc: 4090 op: STARTLINE (58)

        /** emit.e:1254				elsif TRANSLATE and SymTab[a][S_MODE] = M_TEMP and*/
        // SubProg emit_op pc: 4092 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4094 op: SC1_AND (141)
        if (_34TRANSLATE_14813 == 0) {
            _26789 = 0;
            goto L78; // [4094] 4120
        }
        // SubProg emit_op pc: 4098 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4100 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26790 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 4104 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4106 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26790);
        _26791 = (object)*(((s1_ptr)_2)->base + 3);
        _26790 = NOVALUE;
        // SubProg emit_op pc: 4110 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4112 op: EQUALS (3)
        if (IS_ATOM_INT(_26791)) {
            _26792 = (_26791 == 3);
        }
        else {
            _26792 = binary_op(EQUALS, _26791, 3);
        }
        _26791 = NOVALUE;
        // SubProg emit_op pc: 4116 op: SC2_AND (142)
        if (IS_ATOM_INT(_26792))
        _26789 = (_26792 != 0);
        else
        _26789 = DBL_PTR(_26792)->dbl != 0.0;
        // SubProg emit_op pc: 4119 op: NOP1 (159)
L78: // addr: 4120 pc: 4119 sub: 51307 op: 159
        // SubProg emit_op pc: 4120 op: SC1_AND_IF (146)
        if (_26789 == 0) {
            goto L79; // [4120] 4161
        }
        // SubProg emit_op pc: 4124 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4126 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26794 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 4130 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4132 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26794);
        _26795 = (object)*(((s1_ptr)_2)->base + 36);
        _26794 = NOVALUE;
        // SubProg emit_op pc: 4136 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4138 op: EQUALS (3)
        if (IS_ATOM_INT(_26795)) {
            _26796 = (_26795 == 2);
        }
        else {
            _26796 = binary_op(EQUALS, _26795, 2);
        }
        _26795 = NOVALUE;
        // SubProg emit_op pc: 4142 op: NOP1 (159)
        // SubProg emit_op pc: 4143 op: IF (20)
        if (_26796 == 0) {
            DeRef(_26796);
            _26796 = NOVALUE;
            goto L79; // [4143] 4161
        }
        else {
            if (!IS_ATOM_INT(_26796) && DBL_PTR(_26796)->dbl == 0.0){
                DeRef(_26796);
                _26796 = NOVALUE;
                goto L79; // [4143] 4161
            }
            DeRef(_26796);
            _26796 = NOVALUE;
        }
        DeRef(_26796);
        _26796 = NOVALUE;
        // SubProg emit_op pc: 4146 op: STARTLINE (58)

        /** emit.e:1256					Push(NewDoubleSym(-obj))*/
        // SubProg emit_op pc: 4148 op: UMINUS (12)
        if (IS_ATOM_INT(_obj_51323)) {
            if ((uintptr_t)_obj_51323 == (uintptr_t)HIGH_BITS){
                _26797 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26797 = - _obj_51323;
            }
        }
        else {
            _26797 = unary_op(UMINUS, _obj_51323);
        }
        // SubProg emit_op pc: 4151 op: PROC (27)
        _26798 = _53NewDoubleSym(_26797);
        _26797 = NOVALUE;
        // SubProg emit_op pc: 4155 op: PROC (27)
        _45Push(_26798);
        _26798 = NOVALUE;
        // SubProg emit_op pc: 4158 op: ELSE (23)
        goto LC; // [4158] 7737
        // SubProg emit_op pc: 4160 op: NOP1 (159)
L79: // addr: 4161 pc: 4160 sub: 51307 op: 159
        // SubProg emit_op pc: 4161 op: STARTLINE (58)

        /** emit.e:1259					Push(a)*/
        // SubProg emit_op pc: 4163 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 4166 op: STARTLINE (58)

        /** emit.e:1260					cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4168 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4170 op: PROC (27)
        _45cont11ii(_op_51309, _8FALSE_442);
        // SubProg emit_op pc: 4174 op: NOP1 (159)
        // SubProg emit_op pc: 4175 op: ELSE (23)
        goto LC; // [4175] 7737
        // SubProg emit_op pc: 4177 op: NOP1 (159)
L72: // addr: 4178 pc: 4177 sub: 51307 op: 159
        // SubProg emit_op pc: 4178 op: STARTLINE (58)

        /** emit.e:1263				Push(a)*/
        // SubProg emit_op pc: 4180 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 4183 op: STARTLINE (58)

        /** emit.e:1264				cont11ii(op, FALSE)*/
        // SubProg emit_op pc: 4185 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4187 op: PROC (27)
        _45cont11ii(_op_51309, _8FALSE_442);
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
        _45cont11ii(_op_51309, _8FALSE_442);
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
        _45cont11ii(_op_51309, _8FALSE_442);
        // SubProg emit_op pc: 4244 op: ELSE (23)
        goto LC; // [4244] 7737
        // SubProg emit_op pc: 4246 op: STARTLINE (58)

        /** emit.e:1275		case ROUTINE_ID then*/
        // SubProg emit_op pc: 4248 op: CASE (186)
        case 134:
        // SubProg emit_op pc: 4250 op: STARTLINE (58)

        /** emit.e:1276			emit_opcode(op)*/
        // SubProg emit_op pc: 4252 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 4255 op: STARTLINE (58)

        /** emit.e:1277			source = Pop()*/
        // SubProg emit_op pc: 4257 op: PROC (27)
        _source_51315 = _45Pop();
        // SubProg emit_op pc: 4260 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_source_51315)) {
            _1 = (object)(DBL_PTR(_source_51315)->dbl);
            DeRefDS(_source_51315);
            _source_51315 = _1;
        }
        // SubProg emit_op pc: 4262 op: STARTLINE (58)

        /** emit.e:1278			if TRANSLATE then*/
        // SubProg emit_op pc: 4264 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4266 op: IF (20)
        if (_34TRANSLATE_14813 == 0)
        {
            goto L7A; // [4266] 4310
        }
        else{
        }
        // SubProg emit_op pc: 4269 op: STARTLINE (58)

        /** emit.e:1279				emit_addr(num_routines-1)*/
        // SubProg emit_op pc: 4271 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4273 op: MINUS (10)
        _26800 = _34num_routines_15197 - 1;
        if ((object)((uintptr_t)_26800 +(uintptr_t) HIGH_BITS) >= 0){
            _26800 = NewDouble((eudouble)_26800);
        }
        // SubProg emit_op pc: 4277 op: PROC (27)
        _45emit_addr(_26800);
        _26800 = NOVALUE;
        // SubProg emit_op pc: 4280 op: STARTLINE (58)

        /** emit.e:1280				last_routine_id = num_routines*/
        // SubProg emit_op pc: 4282 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4284 op: ASSIGN (18)
        _45last_routine_id_50376 = _34num_routines_15197;
        // SubProg emit_op pc: 4287 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4289 op: STARTLINE (58)

        /** emit.e:1281				last_max_params = max_params*/
        // SubProg emit_op pc: 4291 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4293 op: ASSIGN_I (113)
        _45last_max_params_50378 = _45max_params_50377;
        // SubProg emit_op pc: 4296 op: STARTLINE (58)

        /** emit.e:1282				MarkTargets(source, S_RI_TARGET)*/
        // SubProg emit_op pc: 4298 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4300 op: PROC (27)
        _31697 = _53MarkTargets(_source_51315, 53);
        // SubProg emit_op pc: 4305 op: DEREF_TEMP (208)
        DeRef(_31697);
        _31697 = NOVALUE;
        // SubProg emit_op pc: 4307 op: ELSE (23)
        goto L7B; // [4307] 4347
        // SubProg emit_op pc: 4309 op: NOP1 (159)
L7A: // addr: 4310 pc: 4309 sub: 51307 op: 159
        // SubProg emit_op pc: 4310 op: STARTLINE (58)

        /** emit.e:1285				emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 4312 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4314 op: PROC (27)
        _45emit_addr(_34CurrentSub_15196);
        // SubProg emit_op pc: 4317 op: STARTLINE (58)

        /** emit.e:1286				emit_addr(length(SymTab))*/
        // SubProg emit_op pc: 4319 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4321 op: LENGTH (42)
        if (IS_SEQUENCE(_35SymTab_14156)){
                _26801 = SEQ_PTR(_35SymTab_14156)->length;
        }
        else {
            _26801 = 1;
        }
        // SubProg emit_op pc: 4324 op: PROC (27)
        _45emit_addr(_26801);
        _26801 = NOVALUE;
        // SubProg emit_op pc: 4327 op: STARTLINE (58)

        /** emit.e:1288				if BIND then*/
        // SubProg emit_op pc: 4329 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4331 op: IF (20)
        if (_34BIND_14816 == 0)
        {
            goto L7C; // [4331] 4346
        }
        else{
        }
        // SubProg emit_op pc: 4334 op: STARTLINE (58)

        /** emit.e:1290					MarkTargets(source, S_NREFS)*/
        // SubProg emit_op pc: 4336 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4338 op: PROC (27)
        _31696 = _53MarkTargets(_source_51315, 12);
        // SubProg emit_op pc: 4343 op: DEREF_TEMP (208)
        DeRef(_31696);
        _31696 = NOVALUE;
        // SubProg emit_op pc: 4345 op: NOP1 (159)
L7C: // addr: 4346 pc: 4345 sub: 51307 op: 159
        // SubProg emit_op pc: 4346 op: NOP1 (159)
L7B: // addr: 4347 pc: 4346 sub: 51307 op: 159
        // SubProg emit_op pc: 4347 op: STARTLINE (58)

        /** emit.e:1294			emit_addr(source)*/
        // SubProg emit_op pc: 4349 op: PROC (27)
        _45emit_addr(_source_51315);
        // SubProg emit_op pc: 4352 op: STARTLINE (58)

        /** emit.e:1295			emit_addr(current_file_no)  -- necessary at top level*/
        // SubProg emit_op pc: 4354 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4356 op: PROC (27)
        _45emit_addr(_34current_file_no_15188);
        // SubProg emit_op pc: 4359 op: STARTLINE (58)

        /** emit.e:1296			assignable = TRUE*/
        // SubProg emit_op pc: 4361 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4363 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 4366 op: STARTLINE (58)

        /** emit.e:1297			c = NewTempSym()*/
        // SubProg emit_op pc: 4368 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 4372 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 4374 op: STARTLINE (58)

        /** emit.e:1298			TempInteger(c) -- result will always be an integer*/
        // SubProg emit_op pc: 4376 op: PROC (27)
        _45TempInteger(_c_51313);
        // SubProg emit_op pc: 4379 op: STARTLINE (58)

        /** emit.e:1299			Push(c)*/
        // SubProg emit_op pc: 4381 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 4384 op: STARTLINE (58)

        /** emit.e:1300			emit_addr(c)*/
        // SubProg emit_op pc: 4386 op: PROC (27)
        _45emit_addr(_c_51313);
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 4402 op: STARTLINE (58)

        /** emit.e:1307			emit_addr(Pop())*/
        // SubProg emit_op pc: 4404 op: PROC (27)
        _26803 = _45Pop();
        // SubProg emit_op pc: 4407 op: PROC (27)
        _45emit_addr(_26803);
        _26803 = NOVALUE;
        // SubProg emit_op pc: 4410 op: STARTLINE (58)

        /** emit.e:1308			c = NewTempSym()*/
        // SubProg emit_op pc: 4412 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 4416 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 4418 op: STARTLINE (58)

        /** emit.e:1309			Push(c)*/
        // SubProg emit_op pc: 4420 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 4423 op: STARTLINE (58)

        /** emit.e:1310			emit_addr(c)*/
        // SubProg emit_op pc: 4425 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 4428 op: STARTLINE (58)

        /** emit.e:1311			assignable = FALSE*/
        // SubProg emit_op pc: 4430 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4432 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        if (0 != 0) {
            _26805 = 1;
            goto L7D; // [4445] 4455
        }
        // SubProg emit_op pc: 4449 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4451 op: SC2_OR (144)
        _26805 = (0 != 0);
        // SubProg emit_op pc: 4454 op: NOP1 (159)
L7D: // addr: 4455 pc: 4454 sub: 51307 op: 159
        // SubProg emit_op pc: 4455 op: SC1_OR_IF (147)
        if (_26805 != 0) {
            goto L7E; // [4455] 4479
        }
        // SubProg emit_op pc: 4459 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4461 op: SC1_OR (143)
        if (0 != 0) {
            DeRef(_26807);
            _26807 = 1;
            goto L7F; // [4461] 4471
        }
        // SubProg emit_op pc: 4465 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4467 op: SC2_OR (144)
        _26807 = (0 != 0);
        // SubProg emit_op pc: 4470 op: NOP1 (159)
L7F: // addr: 4471 pc: 4470 sub: 51307 op: 159
        // SubProg emit_op pc: 4471 op: NOT (7)
        _26808 = (_26807 == 0);
        _26807 = NOVALUE;
        // SubProg emit_op pc: 4474 op: NOP1 (159)
        // SubProg emit_op pc: 4475 op: IF (20)
        if (_26808 == 0)
        {
            DeRef(_26808);
            _26808 = NOVALUE;
            goto L80; // [4475] 4491
        }
        else{
            DeRef(_26808);
            _26808 = NOVALUE;
        }
        // SubProg emit_op pc: 4478 op: NOP1 (159)
L7E: // addr: 4479 pc: 4478 sub: 51307 op: 159
        // SubProg emit_op pc: 4479 op: STARTLINE (58)

        /** emit.e:1317				op = POKE4*/
        // SubProg emit_op pc: 4481 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4483 op: ASSIGN (18)
        _op_51309 = 138;
        // SubProg emit_op pc: 4486 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4488 op: ELSE (23)
        goto L81; // [4488] 4501
        // SubProg emit_op pc: 4490 op: NOP1 (159)
L80: // addr: 4491 pc: 4490 sub: 51307 op: 159
        // SubProg emit_op pc: 4491 op: STARTLINE (58)

        /** emit.e:1319				op = POKE8*/
        // SubProg emit_op pc: 4493 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4495 op: ASSIGN (18)
        _op_51309 = 212;
        // SubProg emit_op pc: 4498 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4500 op: NOP1 (159)
L81: // addr: 4501 pc: 4500 sub: 51307 op: 159
        // SubProg emit_op pc: 4501 op: STARTLINE (58)

        /** emit.e:1321			last_op = op*/
        // SubProg emit_op pc: 4503 op: ASSIGN_I (113)
        _45last_op_51268 = _op_51309;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 4539 op: STARTLINE (58)

        /** emit.e:1328			b = Pop()*/
        // SubProg emit_op pc: 4541 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 4544 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 4546 op: STARTLINE (58)

        /** emit.e:1329			emit_addr(Pop())*/
        // SubProg emit_op pc: 4548 op: PROC (27)
        _26810 = _45Pop();
        // SubProg emit_op pc: 4551 op: PROC (27)
        _45emit_addr(_26810);
        _26810 = NOVALUE;
        // SubProg emit_op pc: 4554 op: STARTLINE (58)

        /** emit.e:1330			emit_addr(b)*/
        // SubProg emit_op pc: 4556 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 4559 op: STARTLINE (58)

        /** emit.e:1331			if op = C_PROC then*/
        // SubProg emit_op pc: 4561 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4563 op: EQUALS_IFW (104)
        if (_op_51309 != 132)
        goto L82; // [4563] 4575
        // SubProg emit_op pc: 4567 op: STARTLINE (58)

        /** emit.e:1332				emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 4569 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4571 op: PROC (27)
        _45emit_addr(_34CurrentSub_15196);
        // SubProg emit_op pc: 4574 op: NOP1 (159)
L82: // addr: 4575 pc: 4574 sub: 51307 op: 159
        // SubProg emit_op pc: 4575 op: STARTLINE (58)

        /** emit.e:1334			assignable = FALSE*/
        // SubProg emit_op pc: 4577 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4579 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _45cont21ii(_op_51309, _8TRUE_444);
        // SubProg emit_op pc: 4620 op: ELSE (23)
        goto LC; // [4620] 7737
        // SubProg emit_op pc: 4622 op: STARTLINE (58)

        /** emit.e:1341		case PLUS then -- elsif op = PLUS then*/
        // SubProg emit_op pc: 4624 op: CASE (186)
        case 11:
        // SubProg emit_op pc: 4626 op: STARTLINE (58)

        /** emit.e:1343			b = Pop()*/
        // SubProg emit_op pc: 4628 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 4631 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 4633 op: STARTLINE (58)

        /** emit.e:1344			a = Pop()*/
        // SubProg emit_op pc: 4635 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 4638 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 4640 op: STARTLINE (58)

        /** emit.e:1346			if b < 1 or a < 1 then*/
        // SubProg emit_op pc: 4642 op: LESS (1)
        _26814 = (_b_51312 < 1);
        // SubProg emit_op pc: 4646 op: SC1_OR_IF (147)
        if (_26814 != 0) {
            goto L83; // [4646] 4659
        }
        // SubProg emit_op pc: 4650 op: LESS (1)
        _26816 = (_a_51311 < 1);
        // SubProg emit_op pc: 4654 op: NOP1 (159)
        // SubProg emit_op pc: 4655 op: IF (20)
        if (_26816 == 0)
        {
            DeRef(_26816);
            _26816 = NOVALUE;
            goto L84; // [4655] 4680
        }
        else{
            DeRef(_26816);
            _26816 = NOVALUE;
        }
        // SubProg emit_op pc: 4658 op: NOP1 (159)
L83: // addr: 4659 pc: 4658 sub: 51307 op: 159
        // SubProg emit_op pc: 4659 op: STARTLINE (58)

        /** emit.e:1347				Push(a)*/
        // SubProg emit_op pc: 4661 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 4664 op: STARTLINE (58)

        /** emit.e:1348				Push(b)*/
        // SubProg emit_op pc: 4666 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 4669 op: STARTLINE (58)

        /** emit.e:1349				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 4671 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4673 op: PROC (27)
        _45cont21ii(_op_51309, _8FALSE_442);
        // SubProg emit_op pc: 4677 op: ELSE (23)
        goto LC; // [4677] 7737
        // SubProg emit_op pc: 4679 op: NOP1 (159)
L84: // addr: 4680 pc: 4679 sub: 51307 op: 159
        // SubProg emit_op pc: 4680 op: STARTLINE (58)

        /** emit.e:1350			elsif SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 1) then*/
        // SubProg emit_op pc: 4682 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4684 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26817 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 4688 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4690 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26817);
        _26818 = (object)*(((s1_ptr)_2)->base + 3);
        _26817 = NOVALUE;
        // SubProg emit_op pc: 4694 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4696 op: EQUALS (3)
        if (IS_ATOM_INT(_26818)) {
            _26819 = (_26818 == 2);
        }
        else {
            _26819 = binary_op(EQUALS, _26818, 2);
        }
        _26818 = NOVALUE;
        // SubProg emit_op pc: 4700 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26819)) {
            if (_26819 == 0) {
                goto L85; // [4700] 4761
            }
        }
        else {
            if (DBL_PTR(_26819)->dbl == 0.0) {
                goto L85; // [4700] 4761
            }
        }
        // SubProg emit_op pc: 4704 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4706 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26821 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 4710 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4712 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26821);
        _26822 = (object)*(((s1_ptr)_2)->base + 1);
        _26821 = NOVALUE;
        // SubProg emit_op pc: 4716 op: EQUAL (153)
        if (_26822 == 1)
        _26823 = 1;
        else if (IS_ATOM_INT(_26822) && IS_ATOM_INT(1))
        _26823 = 0;
        else
        _26823 = (compare(_26822, 1) == 0);
        _26822 = NOVALUE;
        // SubProg emit_op pc: 4720 op: NOP1 (159)
        // SubProg emit_op pc: 4721 op: IF (20)
        if (_26823 == 0)
        {
            _26823 = NOVALUE;
            goto L85; // [4721] 4761
        }
        else{
            _26823 = NOVALUE;
        }
        // SubProg emit_op pc: 4724 op: STARTLINE (58)

        /** emit.e:1351				op = PLUS1*/
        // SubProg emit_op pc: 4726 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4728 op: ASSIGN (18)
        _op_51309 = 93;
        // SubProg emit_op pc: 4731 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4733 op: STARTLINE (58)

        /** emit.e:1352				emit_opcode(op)*/
        // SubProg emit_op pc: 4735 op: PROC (27)
        _45emit_opcode(93);
        // SubProg emit_op pc: 4738 op: STARTLINE (58)

        /** emit.e:1353				emit_addr(a)*/
        // SubProg emit_op pc: 4740 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 4743 op: STARTLINE (58)

        /** emit.e:1354				emit_addr(0)*/
        // SubProg emit_op pc: 4745 op: PROC (27)
        _45emit_addr(0);
        // SubProg emit_op pc: 4748 op: STARTLINE (58)

        /** emit.e:1355				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 4750 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4752 op: PROC (27)
        _45cont21d(93, _a_51311, _b_51312, _8FALSE_442);
        // SubProg emit_op pc: 4758 op: ELSE (23)
        goto LC; // [4758] 7737
        // SubProg emit_op pc: 4760 op: NOP1 (159)
L85: // addr: 4761 pc: 4760 sub: 51307 op: 159
        // SubProg emit_op pc: 4761 op: STARTLINE (58)

        /** emit.e:1356			elsif SymTab[a][S_MODE] = M_CONSTANT and equal(SymTab[a][S_OBJ], 1) then*/
        // SubProg emit_op pc: 4763 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4765 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26824 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 4769 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4771 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26824);
        _26825 = (object)*(((s1_ptr)_2)->base + 3);
        _26824 = NOVALUE;
        // SubProg emit_op pc: 4775 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4777 op: EQUALS (3)
        if (IS_ATOM_INT(_26825)) {
            _26826 = (_26825 == 2);
        }
        else {
            _26826 = binary_op(EQUALS, _26825, 2);
        }
        _26825 = NOVALUE;
        // SubProg emit_op pc: 4781 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26826)) {
            if (_26826 == 0) {
                goto L86; // [4781] 4842
            }
        }
        else {
            if (DBL_PTR(_26826)->dbl == 0.0) {
                goto L86; // [4781] 4842
            }
        }
        // SubProg emit_op pc: 4785 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4787 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26828 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 4791 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4793 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26828);
        _26829 = (object)*(((s1_ptr)_2)->base + 1);
        _26828 = NOVALUE;
        // SubProg emit_op pc: 4797 op: EQUAL (153)
        if (_26829 == 1)
        _26830 = 1;
        else if (IS_ATOM_INT(_26829) && IS_ATOM_INT(1))
        _26830 = 0;
        else
        _26830 = (compare(_26829, 1) == 0);
        _26829 = NOVALUE;
        // SubProg emit_op pc: 4801 op: NOP1 (159)
        // SubProg emit_op pc: 4802 op: IF (20)
        if (_26830 == 0)
        {
            _26830 = NOVALUE;
            goto L86; // [4802] 4842
        }
        else{
            _26830 = NOVALUE;
        }
        // SubProg emit_op pc: 4805 op: STARTLINE (58)

        /** emit.e:1357				op = PLUS1*/
        // SubProg emit_op pc: 4807 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4809 op: ASSIGN (18)
        _op_51309 = 93;
        // SubProg emit_op pc: 4812 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4814 op: STARTLINE (58)

        /** emit.e:1358				emit_opcode(op)*/
        // SubProg emit_op pc: 4816 op: PROC (27)
        _45emit_opcode(93);
        // SubProg emit_op pc: 4819 op: STARTLINE (58)

        /** emit.e:1359				emit_addr(b)*/
        // SubProg emit_op pc: 4821 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 4824 op: STARTLINE (58)

        /** emit.e:1360				emit_addr(0)*/
        // SubProg emit_op pc: 4826 op: PROC (27)
        _45emit_addr(0);
        // SubProg emit_op pc: 4829 op: STARTLINE (58)

        /** emit.e:1361				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 4831 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4833 op: PROC (27)
        _45cont21d(93, _a_51311, _b_51312, _8FALSE_442);
        // SubProg emit_op pc: 4839 op: ELSE (23)
        goto LC; // [4839] 7737
        // SubProg emit_op pc: 4841 op: NOP1 (159)
L86: // addr: 4842 pc: 4841 sub: 51307 op: 159
        // SubProg emit_op pc: 4842 op: STARTLINE (58)

        /** emit.e:1363				Push(a)*/
        // SubProg emit_op pc: 4844 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 4847 op: STARTLINE (58)

        /** emit.e:1364				Push(b)*/
        // SubProg emit_op pc: 4849 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 4852 op: STARTLINE (58)

        /** emit.e:1365				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 4854 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4856 op: PROC (27)
        _45cont21ii(_op_51309, _8FALSE_442);
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
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 4872 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 4874 op: STARTLINE (58)

        /** emit.e:1371			a = Pop()*/
        // SubProg emit_op pc: 4876 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 4879 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 4881 op: STARTLINE (58)

        /** emit.e:1372			if a < 1 or b < 1 then*/
        // SubProg emit_op pc: 4883 op: LESS (1)
        _26833 = (_a_51311 < 1);
        // SubProg emit_op pc: 4887 op: SC1_OR_IF (147)
        if (_26833 != 0) {
            goto L87; // [4887] 4900
        }
        // SubProg emit_op pc: 4891 op: LESS (1)
        _26835 = (_b_51312 < 1);
        // SubProg emit_op pc: 4895 op: NOP1 (159)
        // SubProg emit_op pc: 4896 op: IF (20)
        if (_26835 == 0)
        {
            DeRef(_26835);
            _26835 = NOVALUE;
            goto L88; // [4896] 4921
        }
        else{
            DeRef(_26835);
            _26835 = NOVALUE;
        }
        // SubProg emit_op pc: 4899 op: NOP1 (159)
L87: // addr: 4900 pc: 4899 sub: 51307 op: 159
        // SubProg emit_op pc: 4900 op: STARTLINE (58)

        /** emit.e:1373				Push(a)*/
        // SubProg emit_op pc: 4902 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 4905 op: STARTLINE (58)

        /** emit.e:1374				Push(b)*/
        // SubProg emit_op pc: 4907 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 4910 op: STARTLINE (58)

        /** emit.e:1375				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 4912 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4914 op: PROC (27)
        _45cont21ii(_op_51309, _8FALSE_442);
        // SubProg emit_op pc: 4918 op: ELSE (23)
        goto LC; // [4918] 7737
        // SubProg emit_op pc: 4920 op: NOP1 (159)
L88: // addr: 4921 pc: 4920 sub: 51307 op: 159
        // SubProg emit_op pc: 4921 op: STARTLINE (58)

        /** emit.e:1377			elsif SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        // SubProg emit_op pc: 4923 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4925 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26836 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 4929 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4931 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26836);
        _26837 = (object)*(((s1_ptr)_2)->base + 3);
        _26836 = NOVALUE;
        // SubProg emit_op pc: 4935 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4937 op: EQUALS (3)
        if (IS_ATOM_INT(_26837)) {
            _26838 = (_26837 == 2);
        }
        else {
            _26838 = binary_op(EQUALS, _26837, 2);
        }
        _26837 = NOVALUE;
        // SubProg emit_op pc: 4941 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26838)) {
            if (_26838 == 0) {
                goto L89; // [4941] 5002
            }
        }
        else {
            if (DBL_PTR(_26838)->dbl == 0.0) {
                goto L89; // [4941] 5002
            }
        }
        // SubProg emit_op pc: 4945 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4947 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26840 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 4951 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4953 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26840);
        _26841 = (object)*(((s1_ptr)_2)->base + 1);
        _26840 = NOVALUE;
        // SubProg emit_op pc: 4957 op: EQUAL (153)
        if (_26841 == 2)
        _26842 = 1;
        else if (IS_ATOM_INT(_26841) && IS_ATOM_INT(2))
        _26842 = 0;
        else
        _26842 = (compare(_26841, 2) == 0);
        _26841 = NOVALUE;
        // SubProg emit_op pc: 4961 op: NOP1 (159)
        // SubProg emit_op pc: 4962 op: IF (20)
        if (_26842 == 0)
        {
            _26842 = NOVALUE;
            goto L89; // [4962] 5002
        }
        else{
            _26842 = NOVALUE;
        }
        // SubProg emit_op pc: 4965 op: STARTLINE (58)

        /** emit.e:1379				op = PLUS*/
        // SubProg emit_op pc: 4967 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4969 op: ASSIGN (18)
        _op_51309 = 11;
        // SubProg emit_op pc: 4972 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 4974 op: STARTLINE (58)

        /** emit.e:1380				emit_opcode(op)*/
        // SubProg emit_op pc: 4976 op: PROC (27)
        _45emit_opcode(11);
        // SubProg emit_op pc: 4979 op: STARTLINE (58)

        /** emit.e:1381				emit_addr(a)*/
        // SubProg emit_op pc: 4981 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 4984 op: STARTLINE (58)

        /** emit.e:1382				emit_addr(a)*/
        // SubProg emit_op pc: 4986 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 4989 op: STARTLINE (58)

        /** emit.e:1383				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 4991 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 4993 op: PROC (27)
        _45cont21d(11, _a_51311, _b_51312, _8FALSE_442);
        // SubProg emit_op pc: 4999 op: ELSE (23)
        goto LC; // [4999] 7737
        // SubProg emit_op pc: 5001 op: NOP1 (159)
L89: // addr: 5002 pc: 5001 sub: 51307 op: 159
        // SubProg emit_op pc: 5002 op: STARTLINE (58)

        /** emit.e:1385			elsif SymTab[a][S_MODE] = M_CONSTANT and equal(SymTab[a][S_OBJ], 2) then*/
        // SubProg emit_op pc: 5004 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5006 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26843 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 5010 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5012 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26843);
        _26844 = (object)*(((s1_ptr)_2)->base + 3);
        _26843 = NOVALUE;
        // SubProg emit_op pc: 5016 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5018 op: EQUALS (3)
        if (IS_ATOM_INT(_26844)) {
            _26845 = (_26844 == 2);
        }
        else {
            _26845 = binary_op(EQUALS, _26844, 2);
        }
        _26844 = NOVALUE;
        // SubProg emit_op pc: 5022 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_26845)) {
            if (_26845 == 0) {
                goto L8A; // [5022] 5083
            }
        }
        else {
            if (DBL_PTR(_26845)->dbl == 0.0) {
                goto L8A; // [5022] 5083
            }
        }
        // SubProg emit_op pc: 5026 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5028 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26847 = (object)*(((s1_ptr)_2)->base + _a_51311);
        // SubProg emit_op pc: 5032 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5034 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26847);
        _26848 = (object)*(((s1_ptr)_2)->base + 1);
        _26847 = NOVALUE;
        // SubProg emit_op pc: 5038 op: EQUAL (153)
        if (_26848 == 2)
        _26849 = 1;
        else if (IS_ATOM_INT(_26848) && IS_ATOM_INT(2))
        _26849 = 0;
        else
        _26849 = (compare(_26848, 2) == 0);
        _26848 = NOVALUE;
        // SubProg emit_op pc: 5042 op: NOP1 (159)
        // SubProg emit_op pc: 5043 op: IF (20)
        if (_26849 == 0)
        {
            _26849 = NOVALUE;
            goto L8A; // [5043] 5083
        }
        else{
            _26849 = NOVALUE;
        }
        // SubProg emit_op pc: 5046 op: STARTLINE (58)

        /** emit.e:1386				op = PLUS*/
        // SubProg emit_op pc: 5048 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5050 op: ASSIGN (18)
        _op_51309 = 11;
        // SubProg emit_op pc: 5053 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5055 op: STARTLINE (58)

        /** emit.e:1387				emit_opcode(op)*/
        // SubProg emit_op pc: 5057 op: PROC (27)
        _45emit_opcode(11);
        // SubProg emit_op pc: 5060 op: STARTLINE (58)

        /** emit.e:1388				emit_addr(b)*/
        // SubProg emit_op pc: 5062 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 5065 op: STARTLINE (58)

        /** emit.e:1389				emit_addr(b)*/
        // SubProg emit_op pc: 5067 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 5070 op: STARTLINE (58)

        /** emit.e:1390				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 5072 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5074 op: PROC (27)
        _45cont21d(11, _a_51311, _b_51312, _8FALSE_442);
        // SubProg emit_op pc: 5080 op: ELSE (23)
        goto LC; // [5080] 7737
        // SubProg emit_op pc: 5082 op: NOP1 (159)
L8A: // addr: 5083 pc: 5082 sub: 51307 op: 159
        // SubProg emit_op pc: 5083 op: STARTLINE (58)

        /** emit.e:1393				Push(a)*/
        // SubProg emit_op pc: 5085 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 5088 op: STARTLINE (58)

        /** emit.e:1394				Push(b)*/
        // SubProg emit_op pc: 5090 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 5093 op: STARTLINE (58)

        /** emit.e:1395				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 5095 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5097 op: PROC (27)
        _45cont21ii(_op_51309, _8FALSE_442);
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
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 5113 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 5115 op: STARTLINE (58)

        /** emit.e:1401			if b > 0 and SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        // SubProg emit_op pc: 5117 op: GREATER (6)
        _26851 = (_b_51312 > 0);
        // SubProg emit_op pc: 5121 op: SC1_AND (141)
        if (_26851 == 0) {
            _26852 = 0;
            goto L8B; // [5121] 5147
        }
        // SubProg emit_op pc: 5125 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5127 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26853 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 5131 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5133 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26853);
        _26854 = (object)*(((s1_ptr)_2)->base + 3);
        _26853 = NOVALUE;
        // SubProg emit_op pc: 5137 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5139 op: EQUALS (3)
        if (IS_ATOM_INT(_26854)) {
            _26855 = (_26854 == 2);
        }
        else {
            _26855 = binary_op(EQUALS, _26854, 2);
        }
        _26854 = NOVALUE;
        // SubProg emit_op pc: 5143 op: SC2_AND (142)
        if (IS_ATOM_INT(_26855))
        _26852 = (_26855 != 0);
        else
        _26852 = DBL_PTR(_26855)->dbl != 0.0;
        // SubProg emit_op pc: 5146 op: NOP1 (159)
L8B: // addr: 5147 pc: 5146 sub: 51307 op: 159
        // SubProg emit_op pc: 5147 op: SC1_AND_IF (146)
        if (_26852 == 0) {
            goto L8C; // [5147] 5218
        }
        // SubProg emit_op pc: 5151 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26857 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 5157 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26857);
        _26858 = (object)*(((s1_ptr)_2)->base + 1);
        _26857 = NOVALUE;
        // SubProg emit_op pc: 5163 op: EQUAL (153)
        if (_26858 == 2)
        _26859 = 1;
        else if (IS_ATOM_INT(_26858) && IS_ATOM_INT(2))
        _26859 = 0;
        else
        _26859 = (compare(_26858, 2) == 0);
        _26858 = NOVALUE;
        // SubProg emit_op pc: 5167 op: NOP1 (159)
        // SubProg emit_op pc: 5168 op: IF (20)
        if (_26859 == 0)
        {
            _26859 = NOVALUE;
            goto L8C; // [5168] 5218
        }
        else{
            _26859 = NOVALUE;
        }
        // SubProg emit_op pc: 5171 op: STARTLINE (58)

        /** emit.e:1402				op = DIV2*/
        // SubProg emit_op pc: 5173 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5175 op: ASSIGN (18)
        _op_51309 = 98;
        // SubProg emit_op pc: 5178 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5180 op: STARTLINE (58)

        /** emit.e:1403				emit_opcode(op)*/
        // SubProg emit_op pc: 5182 op: PROC (27)
        _45emit_opcode(98);
        // SubProg emit_op pc: 5185 op: STARTLINE (58)

        /** emit.e:1404				emit_addr(Pop()) -- n.b. "a" hasn't been set*/
        // SubProg emit_op pc: 5187 op: PROC (27)
        _26860 = _45Pop();
        // SubProg emit_op pc: 5190 op: PROC (27)
        _45emit_addr(_26860);
        _26860 = NOVALUE;
        // SubProg emit_op pc: 5193 op: STARTLINE (58)

        /** emit.e:1405				a = 0*/
        // SubProg emit_op pc: 5195 op: ASSIGN (18)
        _a_51311 = 0;
        // SubProg emit_op pc: 5198 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5200 op: STARTLINE (58)

        /** emit.e:1406				emit_addr(0)*/
        // SubProg emit_op pc: 5202 op: PROC (27)
        _45emit_addr(0);
        // SubProg emit_op pc: 5205 op: STARTLINE (58)

        /** emit.e:1407				cont21d(op, a, b, FALSE)  -- could have fractional result*/
        // SubProg emit_op pc: 5207 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5209 op: PROC (27)
        _45cont21d(98, 0, _b_51312, _8FALSE_442);
        // SubProg emit_op pc: 5215 op: ELSE (23)
        goto LC; // [5215] 7737
        // SubProg emit_op pc: 5217 op: NOP1 (159)
L8C: // addr: 5218 pc: 5217 sub: 51307 op: 159
        // SubProg emit_op pc: 5218 op: STARTLINE (58)

        /** emit.e:1409				Push(b)*/
        // SubProg emit_op pc: 5220 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 5223 op: STARTLINE (58)

        /** emit.e:1410				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 5225 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5227 op: PROC (27)
        _45cont21ii(_op_51309, _8FALSE_442);
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
        if (_34previous_op_15286 != 14)
        goto L8D; // [5242] 5290
        // SubProg emit_op pc: 5246 op: STARTLINE (58)

        /** emit.e:1415				op = FLOOR_DIV*/
        // SubProg emit_op pc: 5248 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5250 op: ASSIGN (18)
        _op_51309 = 63;
        // SubProg emit_op pc: 5253 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5255 op: STARTLINE (58)

        /** emit.e:1416				backpatch(length(Code) - 3, op)*/
        // SubProg emit_op pc: 5257 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5259 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26862 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26862 = 1;
        }
        // SubProg emit_op pc: 5262 op: MINUS (10)
        _26863 = _26862 - 3;
        _26862 = NOVALUE;
        // SubProg emit_op pc: 5266 op: PROC (27)
        _45backpatch(_26863, 63);
        _26863 = NOVALUE;
        // SubProg emit_op pc: 5270 op: STARTLINE (58)

        /** emit.e:1417				assignable = TRUE*/
        // SubProg emit_op pc: 5272 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5274 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 5277 op: STARTLINE (58)

        /** emit.e:1418				last_op = op*/
        // SubProg emit_op pc: 5279 op: ASSIGN_I (113)
        _45last_op_51268 = 63;
        // SubProg emit_op pc: 5282 op: STARTLINE (58)

        /** emit.e:1419				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 5284 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 5287 op: ELSE (23)
        goto LC; // [5287] 7737
        // SubProg emit_op pc: 5289 op: NOP1 (159)
L8D: // addr: 5290 pc: 5289 sub: 51307 op: 159
        // SubProg emit_op pc: 5290 op: STARTLINE (58)

        /** emit.e:1421			elsif previous_op = DIV2 then*/
        // SubProg emit_op pc: 5292 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5294 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5296 op: EQUALS_IFW (104)
        if (_34previous_op_15286 != 98)
        goto L8E; // [5296] 5383
        // SubProg emit_op pc: 5300 op: STARTLINE (58)

        /** emit.e:1422				op = FLOOR_DIV2*/
        // SubProg emit_op pc: 5302 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5304 op: ASSIGN (18)
        _op_51309 = 66;
        // SubProg emit_op pc: 5307 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 5309 op: STARTLINE (58)

        /** emit.e:1423				backpatch(length(Code) - 3, op)*/
        // SubProg emit_op pc: 5311 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5313 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26865 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26865 = 1;
        }
        // SubProg emit_op pc: 5316 op: MINUS (10)
        _26866 = _26865 - 3;
        _26865 = NOVALUE;
        // SubProg emit_op pc: 5320 op: PROC (27)
        _45backpatch(_26866, 66);
        _26866 = NOVALUE;
        // SubProg emit_op pc: 5324 op: STARTLINE (58)

        /** emit.e:1424				assignable = TRUE*/
        // SubProg emit_op pc: 5326 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5328 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 5331 op: STARTLINE (58)

        /** emit.e:1425				if IsInteger(Code[$-2]) then*/
        // SubProg emit_op pc: 5333 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5335 op: LENGTH (42)
        if (IS_SEQUENCE(_34Code_15276)){
                _26867 = SEQ_PTR(_34Code_15276)->length;
        }
        else {
            _26867 = 1;
        }
        // SubProg emit_op pc: 5338 op: MINUS (10)
        _26868 = _26867 - 2;
        _26867 = NOVALUE;
        // SubProg emit_op pc: 5342 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34Code_15276);
        _26869 = (object)*(((s1_ptr)_2)->base + _26868);
        // SubProg emit_op pc: 5346 op: PROC (27)
        Ref(_26869);
        _26870 = _45IsInteger(_26869);
        _26869 = NOVALUE;
        // SubProg emit_op pc: 5350 op: IF (20)
        if (_26870 == 0) {
            DeRef(_26870);
            _26870 = NOVALUE;
            goto L8F; // [5350] 5370
        }
        else {
            if (!IS_ATOM_INT(_26870) && DBL_PTR(_26870)->dbl == 0.0){
                DeRef(_26870);
                _26870 = NOVALUE;
                goto L8F; // [5350] 5370
            }
            DeRef(_26870);
            _26870 = NOVALUE;
        }
        DeRef(_26870);
        _26870 = NOVALUE;
        // SubProg emit_op pc: 5353 op: STARTLINE (58)

        /** emit.e:1426					TempInteger(Top()) --mark temp as integer type*/
        // SubProg emit_op pc: 5355 op: STARTLINE (58)

        /** emit.e:145		return cg_stack[cgi]*/
        // SubProg emit_op pc: 5357 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5359 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5361 op: RHS_SUBS (25)
        DeRef(_Top_inlined_Top_at_5480_52410);
        _2 = (object)SEQ_PTR(_45cg_stack_50386);
        _Top_inlined_Top_at_5480_52410 = (object)*(((s1_ptr)_2)->base + _45cgi_50387);
        Ref(_Top_inlined_Top_at_5480_52410);
        // SubProg emit_op pc: 5365 op: NOP1 (159)
        // SubProg emit_op pc: 5366 op: PROC (27)
        Ref(_Top_inlined_Top_at_5480_52410);
        _45TempInteger(_Top_inlined_Top_at_5480_52410);
        // SubProg emit_op pc: 5369 op: NOP1 (159)
L8F: // addr: 5370 pc: 5369 sub: 51307 op: 159
        // SubProg emit_op pc: 5370 op: STARTLINE (58)

        /** emit.e:1428				last_op = op*/
        // SubProg emit_op pc: 5372 op: ASSIGN_I (113)
        _45last_op_51268 = _op_51309;
        // SubProg emit_op pc: 5375 op: STARTLINE (58)

        /** emit.e:1429				last_pc = last_pc_backup*/
        // SubProg emit_op pc: 5377 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
        // SubProg emit_op pc: 5380 op: ELSE (23)
        goto LC; // [5380] 7737
        // SubProg emit_op pc: 5382 op: NOP1 (159)
L8E: // addr: 5383 pc: 5382 sub: 51307 op: 159
        // SubProg emit_op pc: 5383 op: STARTLINE (58)

        /** emit.e:1431				cont11ii(op, TRUE)*/
        // SubProg emit_op pc: 5385 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5387 op: PROC (27)
        _45cont11ii(_op_51309, _8TRUE_444);
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
        _45cont21ii(_op_51309, _8FALSE_442);
        // SubProg emit_op pc: 5436 op: ELSE (23)
        goto LC; // [5436] 7737
        // SubProg emit_op pc: 5438 op: STARTLINE (58)

        /** emit.e:1442		case SC2_NULL then  -- correct the stack - we aren't emitting anything*/
        // SubProg emit_op pc: 5440 op: CASE (186)
        case 145:
        // SubProg emit_op pc: 5442 op: STARTLINE (58)

        /** emit.e:1443			c = Pop()*/
        // SubProg emit_op pc: 5444 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 5447 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5449 op: STARTLINE (58)

        /** emit.e:1444			TempKeep(c)*/
        // SubProg emit_op pc: 5451 op: PROC (27)
        _45TempKeep(_c_51313);
        // SubProg emit_op pc: 5454 op: STARTLINE (58)

        /** emit.e:1445			b = Pop()  -- remove SC1's temp*/
        // SubProg emit_op pc: 5456 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 5459 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 5461 op: STARTLINE (58)

        /** emit.e:1446			Push(c)*/
        // SubProg emit_op pc: 5463 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 5466 op: STARTLINE (58)

        /** emit.e:1447			assignable = FALSE*/
        // SubProg emit_op pc: 5468 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5470 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 5473 op: STARTLINE (58)

        /** emit.e:1448			last_op = last_op_backup*/
        // SubProg emit_op pc: 5475 op: ASSIGN_I (113)
        _45last_op_51268 = _last_op_backup_51327;
        // SubProg emit_op pc: 5478 op: STARTLINE (58)

        /** emit.e:1449			last_pc = last_pc_backup*/
        // SubProg emit_op pc: 5480 op: ASSIGN_I (113)
        _45last_pc_51269 = _last_pc_backup_51326;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 5496 op: STARTLINE (58)

        /** emit.e:1454			emit_addr(Pop())*/
        // SubProg emit_op pc: 5498 op: PROC (27)
        _26873 = _45Pop();
        // SubProg emit_op pc: 5501 op: PROC (27)
        _45emit_addr(_26873);
        _26873 = NOVALUE;
        // SubProg emit_op pc: 5504 op: STARTLINE (58)

        /** emit.e:1455			c = Pop()*/
        // SubProg emit_op pc: 5506 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 5509 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5511 op: STARTLINE (58)

        /** emit.e:1456			TempKeep(c)*/
        // SubProg emit_op pc: 5513 op: PROC (27)
        _45TempKeep(_c_51313);
        // SubProg emit_op pc: 5516 op: STARTLINE (58)

        /** emit.e:1457			emit_addr(c) -- target*/
        // SubProg emit_op pc: 5518 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 5521 op: STARTLINE (58)

        /** emit.e:1458			TempInteger(c)*/
        // SubProg emit_op pc: 5523 op: PROC (27)
        _45TempInteger(_c_51313);
        // SubProg emit_op pc: 5526 op: STARTLINE (58)

        /** emit.e:1459			Push(c)*/
        // SubProg emit_op pc: 5528 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 5531 op: STARTLINE (58)

        /** emit.e:1460			assignable = FALSE*/
        // SubProg emit_op pc: 5533 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5535 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 5553 op: STARTLINE (58)

        /** emit.e:1465			c = Pop()*/
        // SubProg emit_op pc: 5555 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 5558 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5560 op: STARTLINE (58)

        /** emit.e:1466			b = Pop()*/
        // SubProg emit_op pc: 5562 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 5565 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 5567 op: STARTLINE (58)

        /** emit.e:1467			emit_addr(Pop())*/
        // SubProg emit_op pc: 5569 op: PROC (27)
        _26877 = _45Pop();
        // SubProg emit_op pc: 5572 op: PROC (27)
        _45emit_addr(_26877);
        _26877 = NOVALUE;
        // SubProg emit_op pc: 5575 op: STARTLINE (58)

        /** emit.e:1468			emit_addr(b)*/
        // SubProg emit_op pc: 5577 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 5580 op: STARTLINE (58)

        /** emit.e:1469			emit_addr(c)*/
        // SubProg emit_op pc: 5582 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 5585 op: STARTLINE (58)

        /** emit.e:1470			assignable = FALSE*/
        // SubProg emit_op pc: 5587 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5589 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 5619 op: STARTLINE (58)

        /** emit.e:1475			c = Pop()*/
        // SubProg emit_op pc: 5621 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 5624 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5626 op: STARTLINE (58)

        /** emit.e:1476			b = Pop()*/
        // SubProg emit_op pc: 5628 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 5631 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 5633 op: STARTLINE (58)

        /** emit.e:1477			emit_addr(Pop())*/
        // SubProg emit_op pc: 5635 op: PROC (27)
        _26880 = _45Pop();
        // SubProg emit_op pc: 5638 op: PROC (27)
        _45emit_addr(_26880);
        _26880 = NOVALUE;
        // SubProg emit_op pc: 5641 op: STARTLINE (58)

        /** emit.e:1478			emit_addr(b)*/
        // SubProg emit_op pc: 5643 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 5646 op: STARTLINE (58)

        /** emit.e:1479			emit_addr(c)*/
        // SubProg emit_op pc: 5648 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 5651 op: STARTLINE (58)

        /** emit.e:1480			c = NewTempSym()*/
        // SubProg emit_op pc: 5653 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 5657 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5659 op: STARTLINE (58)

        /** emit.e:1481			if op = FIND or op = FIND_FROM or op = OPEN then*/
        // SubProg emit_op pc: 5661 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5663 op: EQUALS (3)
        _26882 = (_op_51309 == 77);
        // SubProg emit_op pc: 5667 op: SC1_OR (143)
        if (_26882 != 0) {
            _26883 = 1;
            goto L90; // [5667] 5681
        }
        // SubProg emit_op pc: 5671 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5673 op: EQUALS (3)
        _26884 = (_op_51309 == 176);
        // SubProg emit_op pc: 5677 op: SC2_OR (144)
        _26883 = (_26884 != 0);
        // SubProg emit_op pc: 5680 op: NOP1 (159)
L90: // addr: 5681 pc: 5680 sub: 51307 op: 159
        // SubProg emit_op pc: 5681 op: SC1_OR_IF (147)
        if (_26883 != 0) {
            goto L91; // [5681] 5696
        }
        // SubProg emit_op pc: 5685 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5687 op: EQUALS (3)
        _26886 = (_op_51309 == 37);
        // SubProg emit_op pc: 5691 op: NOP1 (159)
        // SubProg emit_op pc: 5692 op: IF (20)
        if (_26886 == 0)
        {
            DeRef(_26886);
            _26886 = NOVALUE;
            goto L92; // [5692] 5704
        }
        else{
            DeRef(_26886);
            _26886 = NOVALUE;
        }
        // SubProg emit_op pc: 5695 op: NOP1 (159)
L91: // addr: 5696 pc: 5695 sub: 51307 op: 159
        // SubProg emit_op pc: 5696 op: STARTLINE (58)

        /** emit.e:1482				TempInteger( c )*/
        // SubProg emit_op pc: 5698 op: PROC (27)
        _45TempInteger(_c_51313);
        // SubProg emit_op pc: 5701 op: ELSE (23)
        goto L93; // [5701] 5711
        // SubProg emit_op pc: 5703 op: NOP1 (159)
L92: // addr: 5704 pc: 5703 sub: 51307 op: 159
        // SubProg emit_op pc: 5704 op: STARTLINE (58)

        /** emit.e:1484				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 5706 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 5710 op: NOP1 (159)
L93: // addr: 5711 pc: 5710 sub: 51307 op: 159
        // SubProg emit_op pc: 5711 op: STARTLINE (58)

        /** emit.e:1486			assignable = TRUE*/
        // SubProg emit_op pc: 5713 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5715 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 5718 op: STARTLINE (58)

        /** emit.e:1487			Push(c)*/
        // SubProg emit_op pc: 5720 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 5723 op: STARTLINE (58)

        /** emit.e:1488			emit_addr(c)*/
        // SubProg emit_op pc: 5725 op: PROC (27)
        _45emit_addr(_c_51313);
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
        _n_51322 = _45op_info1_50371;
        // SubProg emit_op pc: 5741 op: STARTLINE (58)

        /** emit.e:1493			emit_opcode(CONCAT_N)*/
        // SubProg emit_op pc: 5743 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5745 op: PROC (27)
        _45emit_opcode(157);
        // SubProg emit_op pc: 5748 op: STARTLINE (58)

        /** emit.e:1494			emit(n)*/
        // SubProg emit_op pc: 5750 op: PROC (27)
        _45emit(_n_51322);
        // SubProg emit_op pc: 5753 op: STARTLINE (58)

        /** emit.e:1495			for i = 1 to n do*/
        // SubProg emit_op pc: 5755 op: ASSIGN (18)
        _26887 = _n_51322;
        // SubProg emit_op pc: 5758 op: FOR_I (125)
        {
            object _i_52478;
            _i_52478 = 1;
L94: // addr: 5765 pc: 5758 sub: 51307 op: 125
            if (_i_52478 > _26887){
                goto L95; // [5758] 5786
            }
            // SubProg emit_op pc: 5765 op: STARTLINE (58)

            /** emit.e:1496				symtab_index element = Pop()*/
            // SubProg emit_op pc: 5767 op: PROC (27)
            _element_52481 = _45Pop();
            // SubProg emit_op pc: 5770 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_element_52481)) {
                _1 = (object)(DBL_PTR(_element_52481)->dbl);
                DeRefDS(_element_52481);
                _element_52481 = _1;
            }
            // SubProg emit_op pc: 5772 op: STARTLINE (58)

            /** emit.e:1497				emit_addr( element )  -- reverse order*/
            // SubProg emit_op pc: 5774 op: PROC (27)
            _45emit_addr(_element_52481);
            // SubProg emit_op pc: 5777 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var element_52481
            // SubProg emit_op pc: 5779 op: STARTLINE (58)

            /** emit.e:1498			end for*/
            // SubProg emit_op pc: 5781 op: ENDFOR_INT_UP1 (54)
            _i_52478 = _i_52478 + 1;
            goto L94; // [5781] 5765
L95: // addr: 5786 pc: 5781 sub: 51307 op: 54
            ;
        }
        // SubProg emit_op pc: 5786 op: STARTLINE (58)

        /** emit.e:1499			c = NewTempSym()*/
        // SubProg emit_op pc: 5788 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 5792 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5794 op: STARTLINE (58)

        /** emit.e:1500			emit_addr(c)*/
        // SubProg emit_op pc: 5796 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 5799 op: STARTLINE (58)

        /** emit.e:1501			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 5801 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 5805 op: STARTLINE (58)

        /** emit.e:1502			assignable = TRUE*/
        // SubProg emit_op pc: 5807 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5809 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 5812 op: STARTLINE (58)

        /** emit.e:1503			Push(c)*/
        // SubProg emit_op pc: 5814 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 5817 op: ELSE (23)
        goto LC; // [5817] 7737
        // SubProg emit_op pc: 5819 op: STARTLINE (58)

        /** emit.e:1505		case FOR then*/
        // SubProg emit_op pc: 5821 op: CASE (186)
        case 21:
        // SubProg emit_op pc: 5823 op: STARTLINE (58)

        /** emit.e:1506			c = Pop() -- increment*/
        // SubProg emit_op pc: 5825 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 5828 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5830 op: STARTLINE (58)

        /** emit.e:1507			TempKeep(c)*/
        // SubProg emit_op pc: 5832 op: PROC (27)
        _45TempKeep(_c_51313);
        // SubProg emit_op pc: 5835 op: STARTLINE (58)

        /** emit.e:1508			ic = IsInteger(c)*/
        // SubProg emit_op pc: 5837 op: PROC (27)
        _ic_51321 = _45IsInteger(_c_51313);
        // SubProg emit_op pc: 5841 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ic_51321)) {
            _1 = (object)(DBL_PTR(_ic_51321)->dbl);
            DeRefDS(_ic_51321);
            _ic_51321 = _1;
        }
        // SubProg emit_op pc: 5843 op: STARTLINE (58)

        /** emit.e:1509			if c < 1 or*/
        // SubProg emit_op pc: 5845 op: LESS (1)
        _26892 = (_c_51313 < 1);
        // SubProg emit_op pc: 5849 op: SC1_OR_IF (147)
        if (_26892 != 0) {
            goto L96; // [5849] 5928
        }
        // SubProg emit_op pc: 5853 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5855 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26894 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 5859 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5861 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26894);
        _26895 = (object)*(((s1_ptr)_2)->base + 3);
        _26894 = NOVALUE;
        // SubProg emit_op pc: 5865 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5867 op: EQUALS (3)
        if (IS_ATOM_INT(_26895)) {
            _26896 = (_26895 == 1);
        }
        else {
            _26896 = binary_op(EQUALS, _26895, 1);
        }
        _26895 = NOVALUE;
        // SubProg emit_op pc: 5871 op: SC1_AND (141)
        if (IS_ATOM_INT(_26896)) {
            if (_26896 == 0) {
                DeRef(_26897);
                _26897 = 0;
                goto L97; // [5871] 5897
            }
        }
        else {
            if (DBL_PTR(_26896)->dbl == 0.0) {
                DeRef(_26897);
                _26897 = 0;
                goto L97; // [5871] 5897
            }
        }
        // SubProg emit_op pc: 5875 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5877 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26898 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 5881 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5883 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26898);
        _26899 = (object)*(((s1_ptr)_2)->base + 4);
        _26898 = NOVALUE;
        // SubProg emit_op pc: 5887 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5889 op: NOTEQ (4)
        if (IS_ATOM_INT(_26899)) {
            _26900 = (_26899 != 2);
        }
        else {
            _26900 = binary_op(NOTEQ, _26899, 2);
        }
        _26899 = NOVALUE;
        // SubProg emit_op pc: 5893 op: SC2_AND (142)
        DeRef(_26897);
        if (IS_ATOM_INT(_26900))
        _26897 = (_26900 != 0);
        else
        _26897 = DBL_PTR(_26900)->dbl != 0.0;
        // SubProg emit_op pc: 5896 op: NOP1 (159)
L97: // addr: 5897 pc: 5896 sub: 51307 op: 159
        // SubProg emit_op pc: 5897 op: SC1_AND (141)
        if (_26897 == 0) {
            DeRef(_26901);
            _26901 = 0;
            goto L98; // [5897] 5923
        }
        // SubProg emit_op pc: 5901 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5903 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26902 = (object)*(((s1_ptr)_2)->base + _c_51313);
        // SubProg emit_op pc: 5907 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5909 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26902);
        _26903 = (object)*(((s1_ptr)_2)->base + 4);
        _26902 = NOVALUE;
        // SubProg emit_op pc: 5913 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5915 op: NOTEQ (4)
        if (IS_ATOM_INT(_26903)) {
            _26904 = (_26903 != 4);
        }
        else {
            _26904 = binary_op(NOTEQ, _26903, 4);
        }
        _26903 = NOVALUE;
        // SubProg emit_op pc: 5919 op: SC2_AND (142)
        if (IS_ATOM_INT(_26904))
        _26901 = (_26904 != 0);
        else
        _26901 = DBL_PTR(_26904)->dbl != 0.0;
        // SubProg emit_op pc: 5922 op: NOP1 (159)
L98: // addr: 5923 pc: 5922 sub: 51307 op: 159
        // SubProg emit_op pc: 5923 op: NOP1 (159)
        // SubProg emit_op pc: 5924 op: IF (20)
        if (_26901 == 0)
        {
            _26901 = NOVALUE;
            goto L99; // [5924] 5965
        }
        else{
            _26901 = NOVALUE;
        }
        // SubProg emit_op pc: 5927 op: NOP1 (159)
L96: // addr: 5928 pc: 5927 sub: 51307 op: 159
        // SubProg emit_op pc: 5928 op: STARTLINE (58)

        /** emit.e:1514				emit_opcode(ASSIGN)*/
        // SubProg emit_op pc: 5930 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5932 op: PROC (27)
        _45emit_opcode(18);
        // SubProg emit_op pc: 5935 op: STARTLINE (58)

        /** emit.e:1515				emit_addr(c)*/
        // SubProg emit_op pc: 5937 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 5940 op: STARTLINE (58)

        /** emit.e:1516				c = NewTempSym()*/
        // SubProg emit_op pc: 5942 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 5946 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 5948 op: STARTLINE (58)

        /** emit.e:1517				if ic then*/
        // SubProg emit_op pc: 5950 op: IF (20)
        if (_ic_51321 == 0)
        {
            goto L9A; // [5950] 5959
        }
        else{
        }
        // SubProg emit_op pc: 5953 op: STARTLINE (58)

        /** emit.e:1518					TempInteger( c )*/
        // SubProg emit_op pc: 5955 op: PROC (27)
        _45TempInteger(_c_51313);
        // SubProg emit_op pc: 5958 op: NOP1 (159)
L9A: // addr: 5959 pc: 5958 sub: 51307 op: 159
        // SubProg emit_op pc: 5959 op: STARTLINE (58)

        /** emit.e:1520				emit_addr(c)*/
        // SubProg emit_op pc: 5961 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 5964 op: NOP1 (159)
L99: // addr: 5965 pc: 5964 sub: 51307 op: 159
        // SubProg emit_op pc: 5965 op: STARTLINE (58)

        /** emit.e:1522			b = Pop() -- limit*/
        // SubProg emit_op pc: 5967 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 5970 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 5972 op: STARTLINE (58)

        /** emit.e:1523			TempKeep(b)*/
        // SubProg emit_op pc: 5974 op: PROC (27)
        _45TempKeep(_b_51312);
        // SubProg emit_op pc: 5977 op: STARTLINE (58)

        /** emit.e:1524			ib = IsInteger(b)*/
        // SubProg emit_op pc: 5979 op: PROC (27)
        _ib_51320 = _45IsInteger(_b_51312);
        // SubProg emit_op pc: 5983 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ib_51320)) {
            _1 = (object)(DBL_PTR(_ib_51320)->dbl);
            DeRefDS(_ib_51320);
            _ib_51320 = _1;
        }
        // SubProg emit_op pc: 5985 op: STARTLINE (58)

        /** emit.e:1525			if b < 1 or*/
        // SubProg emit_op pc: 5987 op: LESS (1)
        _26908 = (_b_51312 < 1);
        // SubProg emit_op pc: 5991 op: SC1_OR_IF (147)
        if (_26908 != 0) {
            goto L9B; // [5991] 6070
        }
        // SubProg emit_op pc: 5995 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 5997 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26910 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 6001 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6003 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26910);
        _26911 = (object)*(((s1_ptr)_2)->base + 3);
        _26910 = NOVALUE;
        // SubProg emit_op pc: 6007 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6009 op: EQUALS (3)
        if (IS_ATOM_INT(_26911)) {
            _26912 = (_26911 == 1);
        }
        else {
            _26912 = binary_op(EQUALS, _26911, 1);
        }
        _26911 = NOVALUE;
        // SubProg emit_op pc: 6013 op: SC1_AND (141)
        if (IS_ATOM_INT(_26912)) {
            if (_26912 == 0) {
                DeRef(_26913);
                _26913 = 0;
                goto L9C; // [6013] 6039
            }
        }
        else {
            if (DBL_PTR(_26912)->dbl == 0.0) {
                DeRef(_26913);
                _26913 = 0;
                goto L9C; // [6013] 6039
            }
        }
        // SubProg emit_op pc: 6017 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6019 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26914 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 6023 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6025 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26914);
        _26915 = (object)*(((s1_ptr)_2)->base + 4);
        _26914 = NOVALUE;
        // SubProg emit_op pc: 6029 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6031 op: NOTEQ (4)
        if (IS_ATOM_INT(_26915)) {
            _26916 = (_26915 != 2);
        }
        else {
            _26916 = binary_op(NOTEQ, _26915, 2);
        }
        _26915 = NOVALUE;
        // SubProg emit_op pc: 6035 op: SC2_AND (142)
        DeRef(_26913);
        if (IS_ATOM_INT(_26916))
        _26913 = (_26916 != 0);
        else
        _26913 = DBL_PTR(_26916)->dbl != 0.0;
        // SubProg emit_op pc: 6038 op: NOP1 (159)
L9C: // addr: 6039 pc: 6038 sub: 51307 op: 159
        // SubProg emit_op pc: 6039 op: SC1_AND (141)
        if (_26913 == 0) {
            DeRef(_26917);
            _26917 = 0;
            goto L9D; // [6039] 6065
        }
        // SubProg emit_op pc: 6043 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6045 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26918 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 6049 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6051 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26918);
        _26919 = (object)*(((s1_ptr)_2)->base + 4);
        _26918 = NOVALUE;
        // SubProg emit_op pc: 6055 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6057 op: NOTEQ (4)
        if (IS_ATOM_INT(_26919)) {
            _26920 = (_26919 != 4);
        }
        else {
            _26920 = binary_op(NOTEQ, _26919, 4);
        }
        _26919 = NOVALUE;
        // SubProg emit_op pc: 6061 op: SC2_AND (142)
        if (IS_ATOM_INT(_26920))
        _26917 = (_26920 != 0);
        else
        _26917 = DBL_PTR(_26920)->dbl != 0.0;
        // SubProg emit_op pc: 6064 op: NOP1 (159)
L9D: // addr: 6065 pc: 6064 sub: 51307 op: 159
        // SubProg emit_op pc: 6065 op: NOP1 (159)
        // SubProg emit_op pc: 6066 op: IF (20)
        if (_26917 == 0)
        {
            _26917 = NOVALUE;
            goto L9E; // [6066] 6107
        }
        else{
            _26917 = NOVALUE;
        }
        // SubProg emit_op pc: 6069 op: NOP1 (159)
L9B: // addr: 6070 pc: 6069 sub: 51307 op: 159
        // SubProg emit_op pc: 6070 op: STARTLINE (58)

        /** emit.e:1530				emit_opcode(ASSIGN)*/
        // SubProg emit_op pc: 6072 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6074 op: PROC (27)
        _45emit_opcode(18);
        // SubProg emit_op pc: 6077 op: STARTLINE (58)

        /** emit.e:1531				emit_addr(b)*/
        // SubProg emit_op pc: 6079 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 6082 op: STARTLINE (58)

        /** emit.e:1532				b = NewTempSym()*/
        // SubProg emit_op pc: 6084 op: PROC (27)
        _b_51312 = _53NewTempSym(0);
        // SubProg emit_op pc: 6088 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 6090 op: STARTLINE (58)

        /** emit.e:1533				if ib then*/
        // SubProg emit_op pc: 6092 op: IF (20)
        if (_ib_51320 == 0)
        {
            goto L9F; // [6092] 6101
        }
        else{
        }
        // SubProg emit_op pc: 6095 op: STARTLINE (58)

        /** emit.e:1534					TempInteger( b )*/
        // SubProg emit_op pc: 6097 op: PROC (27)
        _45TempInteger(_b_51312);
        // SubProg emit_op pc: 6100 op: NOP1 (159)
L9F: // addr: 6101 pc: 6100 sub: 51307 op: 159
        // SubProg emit_op pc: 6101 op: STARTLINE (58)

        /** emit.e:1536				emit_addr(b)*/
        // SubProg emit_op pc: 6103 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 6106 op: NOP1 (159)
L9E: // addr: 6107 pc: 6106 sub: 51307 op: 159
        // SubProg emit_op pc: 6107 op: STARTLINE (58)

        /** emit.e:1538			a = Pop() -- initial value*/
        // SubProg emit_op pc: 6109 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 6112 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 6114 op: STARTLINE (58)

        /** emit.e:1539			if IsInteger(a) and ib and ic then*/
        // SubProg emit_op pc: 6116 op: PROC (27)
        _26923 = _45IsInteger(_a_51311);
        // SubProg emit_op pc: 6120 op: SC1_AND (141)
        if (IS_ATOM_INT(_26923)) {
            if (_26923 == 0) {
                DeRef(_26924);
                _26924 = 0;
                goto LA0; // [6120] 6128
            }
        }
        else {
            if (DBL_PTR(_26923)->dbl == 0.0) {
                DeRef(_26924);
                _26924 = 0;
                goto LA0; // [6120] 6128
            }
        }
        // SubProg emit_op pc: 6124 op: SC2_AND (142)
        DeRef(_26924);
        _26924 = (_ib_51320 != 0);
        // SubProg emit_op pc: 6127 op: NOP1 (159)
LA0: // addr: 6128 pc: 6127 sub: 51307 op: 159
        // SubProg emit_op pc: 6128 op: SC1_AND_IF (146)
        if (_26924 == 0) {
            goto LA1; // [6128] 6167
        }
        // SubProg emit_op pc: 6132 op: NOP1 (159)
        // SubProg emit_op pc: 6133 op: IF (20)
        if (_ic_51321 == 0)
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
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        _3 = (object)(_45op_info1_50371 + ((s1_ptr)_2)->base);
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
        *(intptr_t *)_2 = _53integer_type_46263;
        DeRef(_1);
        _26926 = NOVALUE;
        // SubProg emit_op pc: 6155 op: STARTLINE (58)

        /** emit.e:1541				op = FOR_I*/
        // SubProg emit_op pc: 6157 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6159 op: ASSIGN (18)
        _op_51309 = 125;
        // SubProg emit_op pc: 6162 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 6164 op: ELSE (23)
        goto LA2; // [6164] 6177
        // SubProg emit_op pc: 6166 op: NOP1 (159)
LA1: // addr: 6167 pc: 6166 sub: 51307 op: 159
        // SubProg emit_op pc: 6167 op: STARTLINE (58)

        /** emit.e:1543				op = FOR*/
        // SubProg emit_op pc: 6169 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6171 op: ASSIGN (18)
        _op_51309 = 21;
        // SubProg emit_op pc: 6174 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 6176 op: NOP1 (159)
LA2: // addr: 6177 pc: 6176 sub: 51307 op: 159
        // SubProg emit_op pc: 6177 op: STARTLINE (58)

        /** emit.e:1545			emit_opcode(op)*/
        // SubProg emit_op pc: 6179 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6182 op: STARTLINE (58)

        /** emit.e:1546			emit_addr(c)*/
        // SubProg emit_op pc: 6184 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6187 op: STARTLINE (58)

        /** emit.e:1547			emit_addr(b)*/
        // SubProg emit_op pc: 6189 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 6192 op: STARTLINE (58)

        /** emit.e:1548			emit_addr(a)*/
        // SubProg emit_op pc: 6194 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 6197 op: STARTLINE (58)

        /** emit.e:1549			emit_addr(CurrentSub) -- in case recursion check is needed*/
        // SubProg emit_op pc: 6199 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6201 op: PROC (27)
        _45emit_addr(_34CurrentSub_15196);
        // SubProg emit_op pc: 6204 op: STARTLINE (58)

        /** emit.e:1550			Push(b)*/
        // SubProg emit_op pc: 6206 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 6209 op: STARTLINE (58)

        /** emit.e:1551			Push(c)*/
        // SubProg emit_op pc: 6211 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 6214 op: STARTLINE (58)

        /** emit.e:1552			assignable = FALSE*/
        // SubProg emit_op pc: 6216 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6218 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6234 op: STARTLINE (58)

        /** emit.e:1557			a = Pop()*/
        // SubProg emit_op pc: 6236 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 6239 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 6241 op: STARTLINE (58)

        /** emit.e:1558			emit_addr(op_info2) -- address of top of loop*/
        // SubProg emit_op pc: 6243 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6245 op: PROC (27)
        _45emit_addr(_45op_info2_50372);
        // SubProg emit_op pc: 6248 op: STARTLINE (58)

        /** emit.e:1559			emit_addr(Pop())    -- limit*/
        // SubProg emit_op pc: 6250 op: PROC (27)
        _26929 = _45Pop();
        // SubProg emit_op pc: 6253 op: PROC (27)
        _45emit_addr(_26929);
        _26929 = NOVALUE;
        // SubProg emit_op pc: 6256 op: STARTLINE (58)

        /** emit.e:1560			emit_addr(op_info1) -- loop var*/
        // SubProg emit_op pc: 6258 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6260 op: PROC (27)
        _45emit_addr(_45op_info1_50371);
        // SubProg emit_op pc: 6263 op: STARTLINE (58)

        /** emit.e:1561			emit_addr(a)        -- increment - not always used -*/
        // SubProg emit_op pc: 6265 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 6268 op: STARTLINE (58)

        /** emit.e:1563			assignable = FALSE*/
        // SubProg emit_op pc: 6270 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6272 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 6288 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 6290 op: STARTLINE (58)

        /** emit.e:1569			TempKeep(b)*/
        // SubProg emit_op pc: 6292 op: PROC (27)
        _45TempKeep(_b_51312);
        // SubProg emit_op pc: 6295 op: STARTLINE (58)

        /** emit.e:1571			a = Pop()      -- subscript, keep on stack*/
        // SubProg emit_op pc: 6297 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 6300 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 6302 op: STARTLINE (58)

        /** emit.e:1572			TempKeep(a)*/
        // SubProg emit_op pc: 6304 op: PROC (27)
        _45TempKeep(_a_51311);
        // SubProg emit_op pc: 6307 op: STARTLINE (58)

        /** emit.e:1574			c = Pop()      -- lhs sequence, keep on stack*/
        // SubProg emit_op pc: 6309 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 6312 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6314 op: STARTLINE (58)

        /** emit.e:1575			TempKeep(c)*/
        // SubProg emit_op pc: 6316 op: PROC (27)
        _45TempKeep(_c_51313);
        // SubProg emit_op pc: 6319 op: STARTLINE (58)

        /** emit.e:1577			emit_opcode(op)*/
        // SubProg emit_op pc: 6321 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6324 op: STARTLINE (58)

        /** emit.e:1578			emit_addr(c)*/
        // SubProg emit_op pc: 6326 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6329 op: STARTLINE (58)

        /** emit.e:1579			emit_addr(a)*/
        // SubProg emit_op pc: 6331 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 6334 op: STARTLINE (58)

        /** emit.e:1581			d = NewTempSym()*/
        // SubProg emit_op pc: 6336 op: PROC (27)
        _d_51314 = _53NewTempSym(0);
        // SubProg emit_op pc: 6340 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_51314)) {
            _1 = (object)(DBL_PTR(_d_51314)->dbl);
            DeRefDS(_d_51314);
            _d_51314 = _1;
        }
        // SubProg emit_op pc: 6342 op: STARTLINE (58)

        /** emit.e:1582			emit_addr(d)   -- place to store result*/
        // SubProg emit_op pc: 6344 op: PROC (27)
        _45emit_addr(_d_51314);
        // SubProg emit_op pc: 6347 op: STARTLINE (58)

        /** emit.e:1583			emit_temp( d, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6349 op: PROC (27)
        _45emit_temp(_d_51314, 1);
        // SubProg emit_op pc: 6353 op: STARTLINE (58)

        /** emit.e:1585			Push(c)*/
        // SubProg emit_op pc: 6355 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 6358 op: STARTLINE (58)

        /** emit.e:1586			Push(a)*/
        // SubProg emit_op pc: 6360 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 6363 op: STARTLINE (58)

        /** emit.e:1587			Push(d)*/
        // SubProg emit_op pc: 6365 op: PROC (27)
        _45Push(_d_51314);
        // SubProg emit_op pc: 6368 op: STARTLINE (58)

        /** emit.e:1588			Push(b)*/
        // SubProg emit_op pc: 6370 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 6373 op: STARTLINE (58)

        /** emit.e:1589			assignable = FALSE*/
        // SubProg emit_op pc: 6375 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6377 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6393 op: STARTLINE (58)

        /** emit.e:1594			b = Pop() -- rhs value*/
        // SubProg emit_op pc: 6395 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 6398 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 6400 op: STARTLINE (58)

        /** emit.e:1595			a = Pop() -- 2nd subs*/
        // SubProg emit_op pc: 6402 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 6405 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 6407 op: STARTLINE (58)

        /** emit.e:1596			c = Pop() -- 1st subs*/
        // SubProg emit_op pc: 6409 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 6412 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6414 op: STARTLINE (58)

        /** emit.e:1597			emit_addr(Pop()) -- sequence*/
        // SubProg emit_op pc: 6416 op: PROC (27)
        _26937 = _45Pop();
        // SubProg emit_op pc: 6419 op: PROC (27)
        _45emit_addr(_26937);
        _26937 = NOVALUE;
        // SubProg emit_op pc: 6422 op: STARTLINE (58)

        /** emit.e:1598			emit_addr(c)*/
        // SubProg emit_op pc: 6424 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6427 op: STARTLINE (58)

        /** emit.e:1599			emit_addr(a)*/
        // SubProg emit_op pc: 6429 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 6432 op: STARTLINE (58)

        /** emit.e:1600			emit_addr(b)*/
        // SubProg emit_op pc: 6434 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 6437 op: STARTLINE (58)

        /** emit.e:1601			assignable = FALSE*/
        // SubProg emit_op pc: 6439 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6441 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 6444 op: ELSE (23)
        goto LC; // [6444] 7737
        // SubProg emit_op pc: 6446 op: STARTLINE (58)

        /** emit.e:1604		case REPLACE then*/
        // SubProg emit_op pc: 6448 op: CASE (186)
        case 201:
        // SubProg emit_op pc: 6450 op: STARTLINE (58)

        /** emit.e:1605			emit_opcode(op)*/
        // SubProg emit_op pc: 6452 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6455 op: STARTLINE (58)

        /** emit.e:1607			b = Pop()  -- source*/
        // SubProg emit_op pc: 6457 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 6460 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 6462 op: STARTLINE (58)

        /** emit.e:1608			a = Pop()  -- replacement*/
        // SubProg emit_op pc: 6464 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 6467 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 6469 op: STARTLINE (58)

        /** emit.e:1609			c = Pop()  -- start of replaced slice*/
        // SubProg emit_op pc: 6471 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 6474 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6476 op: STARTLINE (58)

        /** emit.e:1610			d = Pop()  -- end of replaced slice*/
        // SubProg emit_op pc: 6478 op: PROC (27)
        _d_51314 = _45Pop();
        // SubProg emit_op pc: 6481 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_51314)) {
            _1 = (object)(DBL_PTR(_d_51314)->dbl);
            DeRefDS(_d_51314);
            _d_51314 = _1;
        }
        // SubProg emit_op pc: 6483 op: STARTLINE (58)

        /** emit.e:1611			emit_addr(d)*/
        // SubProg emit_op pc: 6485 op: PROC (27)
        _45emit_addr(_d_51314);
        // SubProg emit_op pc: 6488 op: STARTLINE (58)

        /** emit.e:1612			emit_addr(c)*/
        // SubProg emit_op pc: 6490 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6493 op: STARTLINE (58)

        /** emit.e:1613			emit_addr(a)*/
        // SubProg emit_op pc: 6495 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 6498 op: STARTLINE (58)

        /** emit.e:1614			emit_addr(b)*/
        // SubProg emit_op pc: 6500 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 6503 op: STARTLINE (58)

        /** emit.e:1616			c = NewTempSym()*/
        // SubProg emit_op pc: 6505 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 6509 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6511 op: STARTLINE (58)

        /** emit.e:1617			Push(c)*/
        // SubProg emit_op pc: 6513 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 6516 op: STARTLINE (58)

        /** emit.e:1618			emit_addr(c)     -- place to store result*/
        // SubProg emit_op pc: 6518 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6521 op: STARTLINE (58)

        /** emit.e:1619			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6523 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 6527 op: STARTLINE (58)

        /** emit.e:1620			assignable = TRUE*/
        // SubProg emit_op pc: 6529 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6531 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6547 op: STARTLINE (58)

        /** emit.e:1627			b = Pop()        -- rhs value not used*/
        // SubProg emit_op pc: 6549 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 6552 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 6554 op: STARTLINE (58)

        /** emit.e:1628			TempKeep(b)*/
        // SubProg emit_op pc: 6556 op: PROC (27)
        _45TempKeep(_b_51312);
        // SubProg emit_op pc: 6559 op: STARTLINE (58)

        /** emit.e:1630			a = Pop()        -- 2nd subs*/
        // SubProg emit_op pc: 6561 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 6564 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 6566 op: STARTLINE (58)

        /** emit.e:1631			TempKeep(a)*/
        // SubProg emit_op pc: 6568 op: PROC (27)
        _45TempKeep(_a_51311);
        // SubProg emit_op pc: 6571 op: STARTLINE (58)

        /** emit.e:1633			c = Pop()        -- 1st subs*/
        // SubProg emit_op pc: 6573 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 6576 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6578 op: STARTLINE (58)

        /** emit.e:1634			TempKeep(c)*/
        // SubProg emit_op pc: 6580 op: PROC (27)
        _45TempKeep(_c_51313);
        // SubProg emit_op pc: 6583 op: STARTLINE (58)

        /** emit.e:1636			d = Pop()*/
        // SubProg emit_op pc: 6585 op: PROC (27)
        _d_51314 = _45Pop();
        // SubProg emit_op pc: 6588 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_51314)) {
            _1 = (object)(DBL_PTR(_d_51314)->dbl);
            DeRefDS(_d_51314);
            _d_51314 = _1;
        }
        // SubProg emit_op pc: 6590 op: STARTLINE (58)

        /** emit.e:1637			TempKeep(d)      -- sequence*/
        // SubProg emit_op pc: 6592 op: PROC (27)
        _45TempKeep(_d_51314);
        // SubProg emit_op pc: 6595 op: STARTLINE (58)

        /** emit.e:1639			emit_addr(d)*/
        // SubProg emit_op pc: 6597 op: PROC (27)
        _45emit_addr(_d_51314);
        // SubProg emit_op pc: 6600 op: STARTLINE (58)

        /** emit.e:1640			Push(d)*/
        // SubProg emit_op pc: 6602 op: PROC (27)
        _45Push(_d_51314);
        // SubProg emit_op pc: 6605 op: STARTLINE (58)

        /** emit.e:1642			emit_addr(c)*/
        // SubProg emit_op pc: 6607 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6610 op: STARTLINE (58)

        /** emit.e:1643			Push(c)*/
        // SubProg emit_op pc: 6612 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 6615 op: STARTLINE (58)

        /** emit.e:1645			emit_addr(a)*/
        // SubProg emit_op pc: 6617 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 6620 op: STARTLINE (58)

        /** emit.e:1646			Push(a)*/
        // SubProg emit_op pc: 6622 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 6625 op: STARTLINE (58)

        /** emit.e:1648			c = NewTempSym()*/
        // SubProg emit_op pc: 6627 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 6631 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6633 op: STARTLINE (58)

        /** emit.e:1649			Push(c)*/
        // SubProg emit_op pc: 6635 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 6638 op: STARTLINE (58)

        /** emit.e:1650			emit_addr(c)     -- place to store result*/
        // SubProg emit_op pc: 6640 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6643 op: STARTLINE (58)

        /** emit.e:1651			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6645 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 6649 op: STARTLINE (58)

        /** emit.e:1653			Push(b)*/
        // SubProg emit_op pc: 6651 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 6654 op: STARTLINE (58)

        /** emit.e:1654			assignable = FALSE*/
        // SubProg emit_op pc: 6656 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6658 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 6661 op: ELSE (23)
        goto LC; // [6661] 7737
        // SubProg emit_op pc: 6663 op: STARTLINE (58)

        /** emit.e:1657		case CALL_PROC then*/
        // SubProg emit_op pc: 6665 op: CASE (186)
        case 136:
        // SubProg emit_op pc: 6667 op: STARTLINE (58)

        /** emit.e:1658			emit_opcode(op)*/
        // SubProg emit_op pc: 6669 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6672 op: STARTLINE (58)

        /** emit.e:1659			b = Pop()*/
        // SubProg emit_op pc: 6674 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 6677 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 6679 op: STARTLINE (58)

        /** emit.e:1660			emit_addr(Pop())*/
        // SubProg emit_op pc: 6681 op: PROC (27)
        _26949 = _45Pop();
        // SubProg emit_op pc: 6684 op: PROC (27)
        _45emit_addr(_26949);
        _26949 = NOVALUE;
        // SubProg emit_op pc: 6687 op: STARTLINE (58)

        /** emit.e:1661			emit_addr(b)*/
        // SubProg emit_op pc: 6689 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 6692 op: STARTLINE (58)

        /** emit.e:1662			assignable = FALSE*/
        // SubProg emit_op pc: 6694 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6696 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 6699 op: ELSE (23)
        goto LC; // [6699] 7737
        // SubProg emit_op pc: 6701 op: STARTLINE (58)

        /** emit.e:1664		case CALL_FUNC then*/
        // SubProg emit_op pc: 6703 op: CASE (186)
        case 137:
        // SubProg emit_op pc: 6705 op: STARTLINE (58)

        /** emit.e:1665			emit_opcode(op)*/
        // SubProg emit_op pc: 6707 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6710 op: STARTLINE (58)

        /** emit.e:1666			b = Pop()*/
        // SubProg emit_op pc: 6712 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 6715 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 6717 op: STARTLINE (58)

        /** emit.e:1667			emit_addr(Pop())*/
        // SubProg emit_op pc: 6719 op: PROC (27)
        _26951 = _45Pop();
        // SubProg emit_op pc: 6722 op: PROC (27)
        _45emit_addr(_26951);
        _26951 = NOVALUE;
        // SubProg emit_op pc: 6725 op: STARTLINE (58)

        /** emit.e:1668			emit_addr(b)*/
        // SubProg emit_op pc: 6727 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 6730 op: STARTLINE (58)

        /** emit.e:1669			assignable = TRUE*/
        // SubProg emit_op pc: 6732 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6734 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 6737 op: STARTLINE (58)

        /** emit.e:1670			c = NewTempSym()*/
        // SubProg emit_op pc: 6739 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 6743 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6745 op: STARTLINE (58)

        /** emit.e:1671			Push(c)*/
        // SubProg emit_op pc: 6747 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 6750 op: STARTLINE (58)

        /** emit.e:1672			emit_addr(c)*/
        // SubProg emit_op pc: 6752 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 6755 op: STARTLINE (58)

        /** emit.e:1673			emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6757 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 6761 op: ELSE (23)
        goto LC; // [6761] 7737
        // SubProg emit_op pc: 6763 op: STARTLINE (58)

        /** emit.e:1675		case EXIT_BLOCK then*/
        // SubProg emit_op pc: 6765 op: CASE (186)
        case 206:
        // SubProg emit_op pc: 6767 op: STARTLINE (58)

        /** emit.e:1676			emit_opcode( op )*/
        // SubProg emit_op pc: 6769 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6772 op: STARTLINE (58)

        /** emit.e:1677			emit_addr( Pop() )*/
        // SubProg emit_op pc: 6774 op: PROC (27)
        _26953 = _45Pop();
        // SubProg emit_op pc: 6777 op: PROC (27)
        _45emit_addr(_26953);
        _26953 = NOVALUE;
        // SubProg emit_op pc: 6780 op: STARTLINE (58)

        /** emit.e:1678			assignable = FALSE*/
        // SubProg emit_op pc: 6782 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6784 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 6787 op: ELSE (23)
        goto LC; // [6787] 7737
        // SubProg emit_op pc: 6789 op: STARTLINE (58)

        /** emit.e:1680		case RETURNP then*/
        // SubProg emit_op pc: 6791 op: CASE (186)
        case 29:
        // SubProg emit_op pc: 6793 op: STARTLINE (58)

        /** emit.e:1681			emit_opcode(op)*/
        // SubProg emit_op pc: 6795 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6798 op: STARTLINE (58)

        /** emit.e:1682			emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 6800 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6802 op: PROC (27)
        _45emit_addr(_34CurrentSub_15196);
        // SubProg emit_op pc: 6805 op: STARTLINE (58)

        /** emit.e:1683			emit_addr(top_block())*/
        // SubProg emit_op pc: 6807 op: PROC (27)
        _26954 = _64top_block(0);
        // SubProg emit_op pc: 6811 op: PROC (27)
        _45emit_addr(_26954);
        _26954 = NOVALUE;
        // SubProg emit_op pc: 6814 op: STARTLINE (58)

        /** emit.e:1684			assignable = FALSE*/
        // SubProg emit_op pc: 6816 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6818 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        DeRef(_Top_inlined_Top_at_7035_52628);
        _2 = (object)SEQ_PTR(_45cg_stack_50386);
        _Top_inlined_Top_at_7035_52628 = (object)*(((s1_ptr)_2)->base + _45cgi_50387);
        Ref(_Top_inlined_Top_at_7035_52628);
        // SubProg emit_op pc: 6839 op: NOP1 (159)
        // SubProg emit_op pc: 6840 op: PROC (27)
        Ref(_Top_inlined_Top_at_7035_52628);
        _45clear_temp(_Top_inlined_Top_at_7035_52628);
        // SubProg emit_op pc: 6843 op: STARTLINE (58)

        /** emit.e:1688			flush_temps()*/
        // SubProg emit_op pc: 6845 op: PROC (27)
        RefDS(_21936);
        _45flush_temps(_21936);
        // SubProg emit_op pc: 6848 op: STARTLINE (58)

        /** emit.e:1689			emit_opcode(op)*/
        // SubProg emit_op pc: 6850 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6853 op: STARTLINE (58)

        /** emit.e:1690			emit_addr(CurrentSub)*/
        // SubProg emit_op pc: 6855 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6857 op: PROC (27)
        _45emit_addr(_34CurrentSub_15196);
        // SubProg emit_op pc: 6860 op: STARTLINE (58)

        /** emit.e:1691			emit_addr(Least_block())*/
        // SubProg emit_op pc: 6862 op: PROC (27)
        _26955 = _64Least_block();
        // SubProg emit_op pc: 6865 op: PROC (27)
        _45emit_addr(_26955);
        _26955 = NOVALUE;
        // SubProg emit_op pc: 6868 op: STARTLINE (58)

        /** emit.e:1692			emit_addr(Pop())*/
        // SubProg emit_op pc: 6870 op: PROC (27)
        _26956 = _45Pop();
        // SubProg emit_op pc: 6873 op: PROC (27)
        _45emit_addr(_26956);
        _26956 = NOVALUE;
        // SubProg emit_op pc: 6876 op: STARTLINE (58)

        /** emit.e:1693			assignable = FALSE*/
        // SubProg emit_op pc: 6878 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6880 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 6883 op: ELSE (23)
        goto LC; // [6883] 7737
        // SubProg emit_op pc: 6885 op: STARTLINE (58)

        /** emit.e:1695		case RETURNT then*/
        // SubProg emit_op pc: 6887 op: CASE (186)
        case 34:
        // SubProg emit_op pc: 6889 op: STARTLINE (58)

        /** emit.e:1696			emit_opcode(op)*/
        // SubProg emit_op pc: 6891 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6894 op: STARTLINE (58)

        /** emit.e:1697			assignable = FALSE*/
        // SubProg emit_op pc: 6896 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6898 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6924 op: STARTLINE (58)

        /** emit.e:1702			c = NewTempSym()*/
        // SubProg emit_op pc: 6926 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 6930 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 6932 op: STARTLINE (58)

        /** emit.e:1703			assignable = TRUE*/
        // SubProg emit_op pc: 6934 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6936 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 6939 op: STARTLINE (58)

        /** emit.e:1704			if op = GET_KEY then  -- it's in op_result as integer*/
        // SubProg emit_op pc: 6941 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 6943 op: EQUALS_IFW (104)
        if (_op_51309 != 79)
        goto LA3; // [6943] 6955
        // SubProg emit_op pc: 6947 op: STARTLINE (58)

        /** emit.e:1705				TempInteger(c)*/
        // SubProg emit_op pc: 6949 op: PROC (27)
        _45TempInteger(_c_51313);
        // SubProg emit_op pc: 6952 op: ELSE (23)
        goto LA4; // [6952] 6962
        // SubProg emit_op pc: 6954 op: NOP1 (159)
LA3: // addr: 6955 pc: 6954 sub: 51307 op: 159
        // SubProg emit_op pc: 6955 op: STARTLINE (58)

        /** emit.e:1707				emit_temp( c, NEW_REFERENCE )*/
        // SubProg emit_op pc: 6957 op: PROC (27)
        _45emit_temp(_c_51313, 1);
        // SubProg emit_op pc: 6961 op: NOP1 (159)
LA4: // addr: 6962 pc: 6961 sub: 51307 op: 159
        // SubProg emit_op pc: 6962 op: STARTLINE (58)

        /** emit.e:1709			Push(c)*/
        // SubProg emit_op pc: 6964 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 6967 op: STARTLINE (58)

        /** emit.e:1710			emit_addr(c)*/
        // SubProg emit_op pc: 6969 op: PROC (27)
        _45emit_addr(_c_51313);
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 6989 op: STARTLINE (58)

        /** emit.e:1714			emit_addr(Pop())*/
        // SubProg emit_op pc: 6991 op: PROC (27)
        _26959 = _45Pop();
        // SubProg emit_op pc: 6994 op: PROC (27)
        _45emit_addr(_26959);
        _26959 = NOVALUE;
        // SubProg emit_op pc: 6997 op: STARTLINE (58)

        /** emit.e:1715			assignable = FALSE*/
        // SubProg emit_op pc: 6999 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7001 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 7004 op: ELSE (23)
        goto LC; // [7004] 7737
        // SubProg emit_op pc: 7006 op: STARTLINE (58)

        /** emit.e:1717		case POWER then*/
        // SubProg emit_op pc: 7008 op: CASE (186)
        case 72:
        // SubProg emit_op pc: 7010 op: STARTLINE (58)

        /** emit.e:1719			b = Pop()*/
        // SubProg emit_op pc: 7012 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 7015 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 7017 op: STARTLINE (58)

        /** emit.e:1720			a = Pop()*/
        // SubProg emit_op pc: 7019 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 7022 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 7024 op: STARTLINE (58)

        /** emit.e:1721			if b > 0 and SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        // SubProg emit_op pc: 7026 op: GREATER (6)
        _26962 = (_b_51312 > 0);
        // SubProg emit_op pc: 7030 op: SC1_AND (141)
        if (_26962 == 0) {
            _26963 = 0;
            goto LA5; // [7030] 7056
        }
        // SubProg emit_op pc: 7034 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7036 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26964 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 7040 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7042 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26964);
        _26965 = (object)*(((s1_ptr)_2)->base + 3);
        _26964 = NOVALUE;
        // SubProg emit_op pc: 7046 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7048 op: EQUALS (3)
        if (IS_ATOM_INT(_26965)) {
            _26966 = (_26965 == 2);
        }
        else {
            _26966 = binary_op(EQUALS, _26965, 2);
        }
        _26965 = NOVALUE;
        // SubProg emit_op pc: 7052 op: SC2_AND (142)
        if (IS_ATOM_INT(_26966))
        _26963 = (_26966 != 0);
        else
        _26963 = DBL_PTR(_26966)->dbl != 0.0;
        // SubProg emit_op pc: 7055 op: NOP1 (159)
LA5: // addr: 7056 pc: 7055 sub: 51307 op: 159
        // SubProg emit_op pc: 7056 op: SC1_AND_IF (146)
        if (_26963 == 0) {
            goto LA6; // [7056] 7113
        }
        // SubProg emit_op pc: 7060 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7062 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _26968 = (object)*(((s1_ptr)_2)->base + _b_51312);
        // SubProg emit_op pc: 7066 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7068 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26968);
        _26969 = (object)*(((s1_ptr)_2)->base + 1);
        _26968 = NOVALUE;
        // SubProg emit_op pc: 7072 op: EQUAL (153)
        if (_26969 == 2)
        _26970 = 1;
        else if (IS_ATOM_INT(_26969) && IS_ATOM_INT(2))
        _26970 = 0;
        else
        _26970 = (compare(_26969, 2) == 0);
        _26969 = NOVALUE;
        // SubProg emit_op pc: 7076 op: NOP1 (159)
        // SubProg emit_op pc: 7077 op: IF (20)
        if (_26970 == 0)
        {
            _26970 = NOVALUE;
            goto LA6; // [7077] 7113
        }
        else{
            _26970 = NOVALUE;
        }
        // SubProg emit_op pc: 7080 op: STARTLINE (58)

        /** emit.e:1723				op = rw:MULTIPLY*/
        // SubProg emit_op pc: 7082 op: ASSIGN_I (113)
        _op_51309 = 13;
        // SubProg emit_op pc: 7085 op: STARTLINE (58)

        /** emit.e:1724				emit_opcode(op)*/
        // SubProg emit_op pc: 7087 op: PROC (27)
        _45emit_opcode(13);
        // SubProg emit_op pc: 7090 op: STARTLINE (58)

        /** emit.e:1725				emit_addr(a)*/
        // SubProg emit_op pc: 7092 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 7095 op: STARTLINE (58)

        /** emit.e:1726				emit_addr(a)*/
        // SubProg emit_op pc: 7097 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 7100 op: STARTLINE (58)

        /** emit.e:1727				cont21d(op, a, b, FALSE)*/
        // SubProg emit_op pc: 7102 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7104 op: PROC (27)
        _45cont21d(13, _a_51311, _b_51312, _8FALSE_442);
        // SubProg emit_op pc: 7110 op: ELSE (23)
        goto LC; // [7110] 7737
        // SubProg emit_op pc: 7112 op: NOP1 (159)
LA6: // addr: 7113 pc: 7112 sub: 51307 op: 159
        // SubProg emit_op pc: 7113 op: STARTLINE (58)

        /** emit.e:1729				Push(a)*/
        // SubProg emit_op pc: 7115 op: PROC (27)
        _45Push(_a_51311);
        // SubProg emit_op pc: 7118 op: STARTLINE (58)

        /** emit.e:1730				Push(b)*/
        // SubProg emit_op pc: 7120 op: PROC (27)
        _45Push(_b_51312);
        // SubProg emit_op pc: 7123 op: STARTLINE (58)

        /** emit.e:1731				cont21ii(op, FALSE)*/
        // SubProg emit_op pc: 7125 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7127 op: PROC (27)
        _45cont21ii(_op_51309, _8FALSE_442);
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
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 7143 op: STARTLINE (58)

        /** emit.e:1737			c = Pop()*/
        // SubProg emit_op pc: 7145 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 7148 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 7150 op: STARTLINE (58)

        /** emit.e:1738			assignable = FALSE*/
        // SubProg emit_op pc: 7152 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7154 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        if (IS_SEQUENCE(_45current_sequence_50379)){
                _26972 = SEQ_PTR(_45current_sequence_50379)->length;
        }
        else {
            _26972 = 1;
        }
        // SubProg emit_op pc: 7170 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45current_sequence_50379);
        _26973 = (object)*(((s1_ptr)_2)->base + _26972);
        // SubProg emit_op pc: 7174 op: LESS (1)
        if (IS_ATOM_INT(_26973)) {
            _26974 = (_26973 < 0);
        }
        else {
            _26974 = binary_op(LESS, _26973, 0);
        }
        _26973 = NOVALUE;
        // SubProg emit_op pc: 7178 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_26974)) {
            if (_26974 != 0) {
                goto LA7; // [7178] 7214
            }
        }
        else {
            if (DBL_PTR(_26974)->dbl != 0.0) {
                goto LA7; // [7178] 7214
            }
        }
        // SubProg emit_op pc: 7182 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7184 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7186 op: LENGTH (42)
        if (IS_SEQUENCE(_45current_sequence_50379)){
                _26976 = SEQ_PTR(_45current_sequence_50379)->length;
        }
        else {
            _26976 = 1;
        }
        // SubProg emit_op pc: 7189 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45current_sequence_50379);
        _26977 = (object)*(((s1_ptr)_2)->base + _26976);
        // SubProg emit_op pc: 7193 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_26977)){
            _26978 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26977)->dbl));
        }
        else{
            _26978 = (object)*(((s1_ptr)_2)->base + _26977);
        }
        // SubProg emit_op pc: 7197 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7199 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_26978);
        _26979 = (object)*(((s1_ptr)_2)->base + 4);
        _26978 = NOVALUE;
        // SubProg emit_op pc: 7203 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7205 op: EQUALS (3)
        if (IS_ATOM_INT(_26979)) {
            _26980 = (_26979 == 9);
        }
        else {
            _26980 = binary_op(EQUALS, _26979, 9);
        }
        _26979 = NOVALUE;
        // SubProg emit_op pc: 7209 op: NOP1 (159)
        // SubProg emit_op pc: 7210 op: IF (20)
        if (_26980 == 0) {
            DeRef(_26980);
            _26980 = NOVALUE;
            goto LA8; // [7210] 7284
        }
        else {
            if (!IS_ATOM_INT(_26980) && DBL_PTR(_26980)->dbl == 0.0){
                DeRef(_26980);
                _26980 = NOVALUE;
                goto LA8; // [7210] 7284
            }
            DeRef(_26980);
            _26980 = NOVALUE;
        }
        DeRef(_26980);
        _26980 = NOVALUE;
        // SubProg emit_op pc: 7213 op: NOP1 (159)
LA7: // addr: 7214 pc: 7213 sub: 51307 op: 159
        // SubProg emit_op pc: 7214 op: STARTLINE (58)

        /** emit.e:1743				if lhs_ptr and length(current_sequence) = 1 then*/
        // SubProg emit_op pc: 7216 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7218 op: SC1_AND_IF (146)
        if (_45lhs_ptr_50381 == 0) {
            goto LA9; // [7218] 7247
        }
        // SubProg emit_op pc: 7222 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7224 op: LENGTH (42)
        if (IS_SEQUENCE(_45current_sequence_50379)){
                _26982 = SEQ_PTR(_45current_sequence_50379)->length;
        }
        else {
            _26982 = 1;
        }
        // SubProg emit_op pc: 7227 op: EQUALS (3)
        _26983 = (_26982 == 1);
        _26982 = NOVALUE;
        // SubProg emit_op pc: 7231 op: NOP1 (159)
        // SubProg emit_op pc: 7232 op: IF (20)
        if (_26983 == 0)
        {
            DeRef(_26983);
            _26983 = NOVALUE;
            goto LA9; // [7232] 7247
        }
        else{
            DeRef(_26983);
            _26983 = NOVALUE;
        }
        // SubProg emit_op pc: 7235 op: STARTLINE (58)

        /** emit.e:1744					c = PLENGTH*/
        // SubProg emit_op pc: 7237 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7239 op: ASSIGN (18)
        _c_51313 = 160;
        // SubProg emit_op pc: 7242 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 7244 op: ELSE (23)
        goto LAA; // [7244] 7257
        // SubProg emit_op pc: 7246 op: NOP1 (159)
LA9: // addr: 7247 pc: 7246 sub: 51307 op: 159
        // SubProg emit_op pc: 7247 op: STARTLINE (58)

        /** emit.e:1746					c = LENGTH*/
        // SubProg emit_op pc: 7249 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7251 op: ASSIGN (18)
        _c_51313 = 42;
        // SubProg emit_op pc: 7254 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 7256 op: NOP1 (159)
LAA: // addr: 7257 pc: 7256 sub: 51307 op: 159
        // SubProg emit_op pc: 7257 op: STARTLINE (58)

        /** emit.e:1748				c = - new_forward_reference( VARIABLE, current_sequence[$], c )*/
        // SubProg emit_op pc: 7259 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7261 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7263 op: LENGTH (42)
        if (IS_SEQUENCE(_45current_sequence_50379)){
                _26984 = SEQ_PTR(_45current_sequence_50379)->length;
        }
        else {
            _26984 = 1;
        }
        // SubProg emit_op pc: 7266 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45current_sequence_50379);
        _26985 = (object)*(((s1_ptr)_2)->base + _26984);
        // SubProg emit_op pc: 7270 op: PROC (27)
        Ref(_26985);
        _26986 = _37new_forward_reference(-100, _26985, _c_51313);
        _26985 = NOVALUE;
        // SubProg emit_op pc: 7276 op: UMINUS (12)
        if (IS_ATOM_INT(_26986)) {
            if ((uintptr_t)_26986 == (uintptr_t)HIGH_BITS){
                _c_51313 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _c_51313 = - _26986;
            }
        }
        else {
            _c_51313 = unary_op(UMINUS, _26986);
        }
        DeRef(_26986);
        _26986 = NOVALUE;
        // SubProg emit_op pc: 7279 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 7281 op: ELSE (23)
        goto LAB; // [7281] 7298
        // SubProg emit_op pc: 7283 op: NOP1 (159)
LA8: // addr: 7284 pc: 7283 sub: 51307 op: 159
        // SubProg emit_op pc: 7284 op: STARTLINE (58)

        /** emit.e:1750				c = current_sequence[$]*/
        // SubProg emit_op pc: 7286 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7288 op: LENGTH (42)
        if (IS_SEQUENCE(_45current_sequence_50379)){
                _26988 = SEQ_PTR(_45current_sequence_50379)->length;
        }
        else {
            _26988 = 1;
        }
        // SubProg emit_op pc: 7291 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45current_sequence_50379);
        _c_51313 = (object)*(((s1_ptr)_2)->base + _26988);
        if (!IS_ATOM_INT(_c_51313)){
            _c_51313 = (object)DBL_PTR(_c_51313)->dbl;
        }
        // SubProg emit_op pc: 7297 op: NOP1 (159)
LAB: // addr: 7298 pc: 7297 sub: 51307 op: 159
        // SubProg emit_op pc: 7298 op: STARTLINE (58)

        /** emit.e:1754			if lhs_ptr and length(current_sequence) = 1 then*/
        // SubProg emit_op pc: 7300 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7302 op: SC1_AND_IF (146)
        if (_45lhs_ptr_50381 == 0) {
            goto LAC; // [7302] 7329
        }
        // SubProg emit_op pc: 7306 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7308 op: LENGTH (42)
        if (IS_SEQUENCE(_45current_sequence_50379)){
                _26991 = SEQ_PTR(_45current_sequence_50379)->length;
        }
        else {
            _26991 = 1;
        }
        // SubProg emit_op pc: 7311 op: EQUALS (3)
        _26992 = (_26991 == 1);
        _26991 = NOVALUE;
        // SubProg emit_op pc: 7315 op: NOP1 (159)
        // SubProg emit_op pc: 7316 op: IF (20)
        if (_26992 == 0)
        {
            DeRef(_26992);
            _26992 = NOVALUE;
            goto LAC; // [7316] 7329
        }
        else{
            DeRef(_26992);
            _26992 = NOVALUE;
        }
        // SubProg emit_op pc: 7319 op: STARTLINE (58)

        /** emit.e:1755				emit_opcode(PLENGTH)*/
        // SubProg emit_op pc: 7321 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7323 op: PROC (27)
        _45emit_opcode(160);
        // SubProg emit_op pc: 7326 op: ELSE (23)
        goto LAD; // [7326] 7337
        // SubProg emit_op pc: 7328 op: NOP1 (159)
LAC: // addr: 7329 pc: 7328 sub: 51307 op: 159
        // SubProg emit_op pc: 7329 op: STARTLINE (58)

        /** emit.e:1757				emit_opcode(LENGTH)*/
        // SubProg emit_op pc: 7331 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7333 op: PROC (27)
        _45emit_opcode(42);
        // SubProg emit_op pc: 7336 op: NOP1 (159)
LAD: // addr: 7337 pc: 7336 sub: 51307 op: 159
        // SubProg emit_op pc: 7337 op: STARTLINE (58)

        /** emit.e:1760			emit_addr( c )*/
        // SubProg emit_op pc: 7339 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 7342 op: STARTLINE (58)

        /** emit.e:1762			c = NewTempSym()*/
        // SubProg emit_op pc: 7344 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 7348 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 7350 op: STARTLINE (58)

        /** emit.e:1763			TempInteger(c)*/
        // SubProg emit_op pc: 7352 op: PROC (27)
        _45TempInteger(_c_51313);
        // SubProg emit_op pc: 7355 op: STARTLINE (58)

        /** emit.e:1764			Push(c)*/
        // SubProg emit_op pc: 7357 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 7360 op: STARTLINE (58)

        /** emit.e:1765			emit_addr(c)*/
        // SubProg emit_op pc: 7362 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 7365 op: STARTLINE (58)

        /** emit.e:1766			assignable = FALSE -- it wouldn't be assigned anyway*/
        // SubProg emit_op pc: 7367 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7369 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 7372 op: ELSE (23)
        goto LC; // [7372] 7737
        // SubProg emit_op pc: 7374 op: STARTLINE (58)

        /** emit.e:1769		case TASK_SELF then*/
        // SubProg emit_op pc: 7376 op: CASE (186)
        case 170:
        // SubProg emit_op pc: 7378 op: STARTLINE (58)

        /** emit.e:1770			c = NewTempSym()*/
        // SubProg emit_op pc: 7380 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 7384 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 7386 op: STARTLINE (58)

        /** emit.e:1771			Push(c)*/
        // SubProg emit_op pc: 7388 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 7391 op: STARTLINE (58)

        /** emit.e:1772			emit_opcode(op)*/
        // SubProg emit_op pc: 7393 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 7396 op: STARTLINE (58)

        /** emit.e:1773			emit_addr(c)*/
        // SubProg emit_op pc: 7398 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 7401 op: STARTLINE (58)

        /** emit.e:1774			assignable = TRUE*/
        // SubProg emit_op pc: 7403 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7405 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 7408 op: ELSE (23)
        goto LC; // [7408] 7737
        // SubProg emit_op pc: 7410 op: STARTLINE (58)

        /** emit.e:1776		case SWITCH then*/
        // SubProg emit_op pc: 7412 op: CASE (186)
        case 185:
        // SubProg emit_op pc: 7414 op: STARTLINE (58)

        /** emit.e:1777			emit_opcode( op )*/
        // SubProg emit_op pc: 7416 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 7419 op: STARTLINE (58)

        /** emit.e:1778			c = Pop()*/
        // SubProg emit_op pc: 7421 op: PROC (27)
        _c_51313 = _45Pop();
        // SubProg emit_op pc: 7424 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 7426 op: STARTLINE (58)

        /** emit.e:1779			b = Pop()*/
        // SubProg emit_op pc: 7428 op: PROC (27)
        _b_51312 = _45Pop();
        // SubProg emit_op pc: 7431 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_b_51312)) {
            _1 = (object)(DBL_PTR(_b_51312)->dbl);
            DeRefDS(_b_51312);
            _b_51312 = _1;
        }
        // SubProg emit_op pc: 7433 op: STARTLINE (58)

        /** emit.e:1780			a = Pop()*/
        // SubProg emit_op pc: 7435 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 7438 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 7440 op: STARTLINE (58)

        /** emit.e:1781			emit_addr( a ) -- Switch Expr*/
        // SubProg emit_op pc: 7442 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 7445 op: STARTLINE (58)

        /** emit.e:1782			emit_addr( b ) -- Case values*/
        // SubProg emit_op pc: 7447 op: PROC (27)
        _45emit_addr(_b_51312);
        // SubProg emit_op pc: 7450 op: STARTLINE (58)

        /** emit.e:1783			emit_addr( c ) -- Jump table*/
        // SubProg emit_op pc: 7452 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 7455 op: STARTLINE (58)

        /** emit.e:1785			assignable = FALSE*/
        // SubProg emit_op pc: 7457 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7459 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 7462 op: ELSE (23)
        goto LC; // [7462] 7737
        // SubProg emit_op pc: 7464 op: STARTLINE (58)

        /** emit.e:1787		case CASE then*/
        // SubProg emit_op pc: 7466 op: CASE (186)
        case 186:
        // SubProg emit_op pc: 7468 op: STARTLINE (58)

        /** emit.e:1789			emit_opcode( op )*/
        // SubProg emit_op pc: 7470 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 7473 op: STARTLINE (58)

        /** emit.e:1790			emit( cg_stack[cgi] )  -- the case index*/
        // SubProg emit_op pc: 7475 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7477 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7479 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45cg_stack_50386);
        _26998 = (object)*(((s1_ptr)_2)->base + _45cgi_50387);
        // SubProg emit_op pc: 7483 op: PROC (27)
        Ref(_26998);
        _45emit(_26998);
        _26998 = NOVALUE;
        // SubProg emit_op pc: 7486 op: STARTLINE (58)

        /** emit.e:1791			cgi -= 1*/
        // SubProg emit_op pc: 7488 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7490 op: MINUS_I (116)
        _45cgi_50387 = _45cgi_50387 - 1;
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
        if (_34BIND_14816 == 0) {
            goto LAE; // [7504] 7552
        }
        // SubProg emit_op pc: 7508 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7510 op: NOP1 (159)
        // SubProg emit_op pc: 7511 op: IF (20)
        if (_34shroud_only_15186 == 0)
        {
            goto LAE; // [7511] 7552
        }
        else{
        }
        // SubProg emit_op pc: 7514 op: STARTLINE (58)

        /** emit.e:1797				c = NewTempSym()*/
        // SubProg emit_op pc: 7516 op: PROC (27)
        _c_51313 = _53NewTempSym(0);
        // SubProg emit_op pc: 7520 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_c_51313)) {
            _1 = (object)(DBL_PTR(_c_51313)->dbl);
            DeRefDS(_c_51313);
            _c_51313 = _1;
        }
        // SubProg emit_op pc: 7522 op: STARTLINE (58)

        /** emit.e:1798				TempInteger(c)*/
        // SubProg emit_op pc: 7524 op: PROC (27)
        _45TempInteger(_c_51313);
        // SubProg emit_op pc: 7527 op: STARTLINE (58)

        /** emit.e:1799				Push(c)*/
        // SubProg emit_op pc: 7529 op: PROC (27)
        _45Push(_c_51313);
        // SubProg emit_op pc: 7532 op: STARTLINE (58)

        /** emit.e:1800				emit_opcode(op)*/
        // SubProg emit_op pc: 7534 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 7537 op: STARTLINE (58)

        /** emit.e:1801				emit_addr(c)*/
        // SubProg emit_op pc: 7539 op: PROC (27)
        _45emit_addr(_c_51313);
        // SubProg emit_op pc: 7542 op: STARTLINE (58)

        /** emit.e:1802				assignable = TRUE*/
        // SubProg emit_op pc: 7544 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7546 op: ASSIGN (18)
        _45assignable_50389 = _8TRUE_444;
        // SubProg emit_op pc: 7549 op: ELSE (23)
        goto LC; // [7549] 7737
        // SubProg emit_op pc: 7551 op: NOP1 (159)
LAE: // addr: 7552 pc: 7551 sub: 51307 op: 159
        // SubProg emit_op pc: 7552 op: STARTLINE (58)

        /** emit.e:1806				n = host_platform()*/
        // SubProg emit_op pc: 7554 op: PROC (27)
        _n_51322 = _39host_platform();
        // SubProg emit_op pc: 7557 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_n_51322)) {
            _1 = (object)(DBL_PTR(_n_51322)->dbl);
            DeRefDS(_n_51322);
            _n_51322 = _1;
        }
        // SubProg emit_op pc: 7559 op: STARTLINE (58)

        /** emit.e:1807				Push(NewIntSym(n))*/
        // SubProg emit_op pc: 7561 op: PROC (27)
        _27003 = _53NewIntSym(_n_51322);
        // SubProg emit_op pc: 7565 op: PROC (27)
        _45Push(_27003);
        _27003 = NOVALUE;
        // SubProg emit_op pc: 7568 op: STARTLINE (58)

        /** emit.e:1808				assignable = FALSE*/
        // SubProg emit_op pc: 7570 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7572 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 7589 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 7591 op: STARTLINE (58)

        /** emit.e:1814			emit_opcode(op)*/
        // SubProg emit_op pc: 7593 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 7596 op: STARTLINE (58)

        /** emit.e:1815			emit_addr(a)*/
        // SubProg emit_op pc: 7598 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 7601 op: STARTLINE (58)

        /** emit.e:1816			assignable = FALSE*/
        // SubProg emit_op pc: 7603 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7605 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
        // SubProg emit_op pc: 7608 op: ELSE (23)
        goto LC; // [7608] 7737
        // SubProg emit_op pc: 7610 op: STARTLINE (58)

        /** emit.e:1818		case TRACE then*/
        // SubProg emit_op pc: 7612 op: CASE (186)
        case 64:
        // SubProg emit_op pc: 7614 op: STARTLINE (58)

        /** emit.e:1819			a = Pop()*/
        // SubProg emit_op pc: 7616 op: PROC (27)
        _a_51311 = _45Pop();
        // SubProg emit_op pc: 7619 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_a_51311)) {
            _1 = (object)(DBL_PTR(_a_51311)->dbl);
            DeRefDS(_a_51311);
            _a_51311 = _1;
        }
        // SubProg emit_op pc: 7621 op: STARTLINE (58)

        /** emit.e:1820			if OpTrace then*/
        // SubProg emit_op pc: 7623 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7625 op: IF (20)
        if (_34OpTrace_15257 == 0)
        {
            goto LAF; // [7625] 7671
        }
        else{
        }
        // SubProg emit_op pc: 7628 op: STARTLINE (58)

        /** emit.e:1822				emit_opcode(op)*/
        // SubProg emit_op pc: 7630 op: PROC (27)
        _45emit_opcode(_op_51309);
        // SubProg emit_op pc: 7633 op: STARTLINE (58)

        /** emit.e:1823				emit_addr(a)*/
        // SubProg emit_op pc: 7635 op: PROC (27)
        _45emit_addr(_a_51311);
        // SubProg emit_op pc: 7638 op: STARTLINE (58)

        /** emit.e:1824				if TRANSLATE then*/
        // SubProg emit_op pc: 7640 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7642 op: IF (20)
        if (_34TRANSLATE_14813 == 0)
        {
            goto LB0; // [7642] 7670
        }
        else{
        }
        // SubProg emit_op pc: 7645 op: STARTLINE (58)

        /** emit.e:1825					if not trace_called then*/
        // SubProg emit_op pc: 7647 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7649 op: NOT_IFW (108)
        if (_45trace_called_50374 != 0)
        goto LB1; // [7649] 7660
        // SubProg emit_op pc: 7652 op: STARTLINE (58)

        /** emit.e:1826						Warning(217,0)*/
        // SubProg emit_op pc: 7654 op: PROC (27)
        RefDS(_21936);
        _49Warning(217, 0, _21936);
        // SubProg emit_op pc: 7659 op: NOP1 (159)
LB1: // addr: 7660 pc: 7659 sub: 51307 op: 159
        // SubProg emit_op pc: 7660 op: STARTLINE (58)

        /** emit.e:1828					trace_called = TRUE*/
        // SubProg emit_op pc: 7662 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7664 op: ASSIGN (18)
        _45trace_called_50374 = _8TRUE_444;
        // SubProg emit_op pc: 7667 op: INTEGER_CHECK (96)
        // SubProg emit_op pc: 7669 op: NOP1 (159)
LB0: // addr: 7670 pc: 7669 sub: 51307 op: 159
        // SubProg emit_op pc: 7670 op: NOP1 (159)
LAF: // addr: 7671 pc: 7670 sub: 51307 op: 159
        // SubProg emit_op pc: 7671 op: STARTLINE (58)

        /** emit.e:1831			assignable = FALSE*/
        // SubProg emit_op pc: 7673 op: GLOBAL_INIT_CHECK (109)
        // SubProg emit_op pc: 7675 op: ASSIGN (18)
        _45assignable_50389 = _8FALSE_442;
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
        _45emit_opcode(207);
        // SubProg emit_op pc: 7691 op: STARTLINE (58)

        /** emit.e:1836			emit_addr( Pop() )*/
        // SubProg emit_op pc: 7693 op: PROC (27)
        _27007 = _45Pop();
        // SubProg emit_op pc: 7696 op: PROC (27)
        _45emit_addr(_27007);
        _27007 = NOVALUE;
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
        _45emit_opcode(208);
        // SubProg emit_op pc: 7712 op: STARTLINE (58)

        /** emit.e:1840			emit_addr( Pop() )*/
        // SubProg emit_op pc: 7714 op: PROC (27)
        _27008 = _45Pop();
        // SubProg emit_op pc: 7717 op: PROC (27)
        _45emit_addr(_27008);
        _27008 = NOVALUE;
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
        ((intptr_t*)_2)[1] = _op_51309;
        _27009 = MAKE_SEQ(_1);
        // SubProg emit_op pc: 7732 op: PROC (27)
        _49InternalErr(259, _27009);
        _27009 = NOVALUE;
        // SubProg emit_op pc: 7736 op: NOPSWITCH (187)
    ;}LC: // addr: 7737 pc: 7736 sub: 51307 op: 187
    // SubProg emit_op pc: 7737 op: STARTLINE (58)

    /** emit.e:1847		previous_op = op*/
    // SubProg emit_op pc: 7739 op: ASSIGN (18)
    _34previous_op_15286 = _op_51309;
    // SubProg emit_op pc: 7742 op: INTEGER_CHECK (96)
    // SubProg emit_op pc: 7744 op: STARTLINE (58)

    /** emit.e:1848		inlined = 0*/
    // SubProg emit_op pc: 7746 op: ASSIGN (18)
    _45inlined_51287 = 0;
    // SubProg emit_op pc: 7749 op: STARTLINE (58)

    /** emit.e:1850	end procedure*/
    // SubProg emit_op pc: 7751 op: RETURNP (29)

// Exiting block BLOCK: PROC-EMIT

// block var op_51309

// block var a_51311

// block var b_51312

// block var c_51313

// block var d_51314

// block var source_51315

// block var target_51316

// block var subsym_51317

// block var lhs_var_51319

// block var ib_51320

// block var ic_51321

// block var n_51322

// block var obj_51323
    DeRef(_obj_51323);

// block var elements_51324
    DeRef(_elements_51324);

// block var element_vals_51325
    DeRef(_element_vals_51325);

// block var last_pc_backup_51326

// block var last_op_backup_51327
    DeRef(_26509);
    _26509 = NOVALUE;
    DeRef(_26641);
    _26641 = NOVALUE;
    DeRef(_26600);
    _26600 = NOVALUE;
    _26543 = NOVALUE;
    DeRef(_26594);
    _26594 = NOVALUE;
    DeRef(_26614);
    _26614 = NOVALUE;
    DeRef(_26838);
    _26838 = NOVALUE;
    DeRef(_26669);
    _26669 = NOVALUE;
    DeRef(_26916);
    _26916 = NOVALUE;
    DeRef(_26966);
    _26966 = NOVALUE;
    DeRef(_26628);
    _26628 = NOVALUE;
    DeRef(_26892);
    _26892 = NOVALUE;
    DeRef(_26680);
    _26680 = NOVALUE;
    DeRef(_26420);
    _26420 = NOVALUE;
    _26751 = NOVALUE;
    DeRef(_26974);
    _26974 = NOVALUE;
    DeRef(_26754);
    _26754 = NOVALUE;
    DeRef(_26704);
    _26704 = NOVALUE;
    DeRef(_26632);
    _26632 = NOVALUE;
    DeRef(_26687);
    _26687 = NOVALUE;
    DeRef(_26734);
    _26734 = NOVALUE;
    DeRef(_26716);
    _26716 = NOVALUE;
    DeRef(_26573);
    _26573 = NOVALUE;
    _26444 = NOVALUE;
    DeRef(_26851);
    _26851 = NOVALUE;
    _26514 = NOVALUE;
    DeRef(_26616);
    _26616 = NOVALUE;
    _26538 = NOVALUE;
    DeRef(_26920);
    _26920 = NOVALUE;
    _26512 = NOVALUE;
    DeRef(_26855);
    _26855 = NOVALUE;
    DeRef(_26424);
    _26424 = NOVALUE;
    DeRef(_26464);
    _26464 = NOVALUE;
    DeRef(_26819);
    _26819 = NOVALUE;
    _26977 = NOVALUE;
    DeRef(_26900);
    _26900 = NOVALUE;
    DeRef(_26658);
    _26658 = NOVALUE;
    DeRef(_26426);
    _26426 = NOVALUE;
    DeRef(_26711);
    _26711 = NOVALUE;
    DeRef(_26691);
    _26691 = NOVALUE;
    DeRef(_26610);
    _26610 = NOVALUE;
    DeRef(_26732);
    _26732 = NOVALUE;
    DeRef(_26814);
    _26814 = NOVALUE;
    DeRef(_26923);
    _26923 = NOVALUE;
    DeRef(_26714);
    _26714 = NOVALUE;
    DeRef(_26528);
    _26528 = NOVALUE;
    _26749 = NOVALUE;
    DeRef(_26868);
    _26868 = NOVALUE;
    DeRef(_26884);
    _26884 = NOVALUE;
    DeRef(_26534);
    _26534 = NOVALUE;
    DeRef(_26471);
    _26471 = NOVALUE;
    DeRef(_26663);
    _26663 = NOVALUE;
    DeRef(_26456);
    _26456 = NOVALUE;
    DeRef(_26667);
    _26667 = NOVALUE;
    DeRef(_26904);
    _26904 = NOVALUE;
    DeRef(_26742);
    _26742 = NOVALUE;
    DeRef(_26499);
    _26499 = NOVALUE;
    DeRef(_26461);
    _26461 = NOVALUE;
    DeRef(_26738);
    _26738 = NOVALUE;
    DeRef(_26833);
    _26833 = NOVALUE;
    DeRef(_26428);
    _26428 = NOVALUE;
    DeRef(_26637);
    _26637 = NOVALUE;
    DeRef(_26792);
    _26792 = NOVALUE;
    DeRef(_26826);
    _26826 = NOVALUE;
    DeRef(_26673);
    _26673 = NOVALUE;
    DeRef(_26908);
    _26908 = NOVALUE;
    DeRef(_26606);
    _26606 = NOVALUE;
    DeRef(_26422);
    _26422 = NOVALUE;
    DeRef(_26682);
    _26682 = NOVALUE;
    DeRef(_26520);
    _26520 = NOVALUE;
    DeRef(_26480);
    _26480 = NOVALUE;
    DeRef(_26882);
    _26882 = NOVALUE;
    _26497 = NOVALUE;
    DeRef(_26912);
    _26912 = NOVALUE;
    DeRef(_26845);
    _26845 = NOVALUE;
    DeRef(_26746);
    _26746 = NOVALUE;
    DeRef(_26560);
    _26560 = NOVALUE;
    DeRef(_26962);
    _26962 = NOVALUE;
    DeRef(_26635);
    _26635 = NOVALUE;
    DeRef(_26708);
    _26708 = NOVALUE;
    DeRef(_26541);
    _26541 = NOVALUE;
    DeRef(_26476);
    _26476 = NOVALUE;
    DeRef(_26693);
    _26693 = NOVALUE;
    DeRef(_26474);
    _26474 = NOVALUE;
    DeRef(_26495);
    _26495 = NOVALUE;
    DeRef(_26896);
    _26896 = NOVALUE;
    DeRef(_26654);
    _26654 = NOVALUE;
    return;
    // SubProg emit_op pc: 7754 op: BADRETURNF (43)
    ;
}


void _45emit_assign_op(object _op_52787)
{
// skipping _27014  name type: 0
// skipping _27013  name type: 0
// skipping _27012  name type: 0
// skipping _27011  name type: 0
// skipping _27010  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg emit_assign_op pc: 1 op: INTEGER_CHECK (96)
    // SubProg emit_assign_op pc: 3 op: STARTLINE (58)

    /** emit.e:1854		if op = PLUS_EQUALS then*/
    // SubProg emit_assign_op pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 7 op: EQUALS_IFW (104)
    if (_op_52787 != 515)
    goto L1; // [7] 21
    // SubProg emit_assign_op pc: 11 op: STARTLINE (58)

    /** emit.e:1855			emit_op(PLUS)*/
    // SubProg emit_assign_op pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 15 op: PROC (27)
    _45emit_op(11);
    // SubProg emit_assign_op pc: 18 op: ELSE (23)
    goto L2; // [18] 86
    // SubProg emit_assign_op pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 52785 op: 159
    // SubProg emit_assign_op pc: 21 op: STARTLINE (58)

    /** emit.e:1856		elsif op = MINUS_EQUALS then*/
    // SubProg emit_assign_op pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 25 op: EQUALS_IFW (104)
    if (_op_52787 != 516)
    goto L3; // [25] 39
    // SubProg emit_assign_op pc: 29 op: STARTLINE (58)

    /** emit.e:1857			emit_op(MINUS)*/
    // SubProg emit_assign_op pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 33 op: PROC (27)
    _45emit_op(10);
    // SubProg emit_assign_op pc: 36 op: ELSE (23)
    goto L2; // [36] 86
    // SubProg emit_assign_op pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 52785 op: 159
    // SubProg emit_assign_op pc: 39 op: STARTLINE (58)

    /** emit.e:1858		elsif op = MULTIPLY_EQUALS then*/
    // SubProg emit_assign_op pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 43 op: EQUALS_IFW (104)
    if (_op_52787 != 517)
    goto L4; // [43] 55
    // SubProg emit_assign_op pc: 47 op: STARTLINE (58)

    /** emit.e:1859			emit_op(rw:MULTIPLY)*/
    // SubProg emit_assign_op pc: 49 op: PROC (27)
    _45emit_op(13);
    // SubProg emit_assign_op pc: 52 op: ELSE (23)
    goto L2; // [52] 86
    // SubProg emit_assign_op pc: 54 op: NOP1 (159)
L4: // addr: 55 pc: 54 sub: 52785 op: 159
    // SubProg emit_assign_op pc: 55 op: STARTLINE (58)

    /** emit.e:1860		elsif op = DIVIDE_EQUALS then*/
    // SubProg emit_assign_op pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 59 op: EQUALS_IFW (104)
    if (_op_52787 != 518)
    goto L5; // [59] 71
    // SubProg emit_assign_op pc: 63 op: STARTLINE (58)

    /** emit.e:1861			emit_op(rw:DIVIDE)*/
    // SubProg emit_assign_op pc: 65 op: PROC (27)
    _45emit_op(14);
    // SubProg emit_assign_op pc: 68 op: ELSE (23)
    goto L2; // [68] 86
    // SubProg emit_assign_op pc: 70 op: NOP1 (159)
L5: // addr: 71 pc: 70 sub: 52785 op: 159
    // SubProg emit_assign_op pc: 71 op: STARTLINE (58)

    /** emit.e:1862		elsif op = CONCAT_EQUALS then*/
    // SubProg emit_assign_op pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg emit_assign_op pc: 75 op: EQUALS_IFW (104)
    if (_op_52787 != 519)
    goto L6; // [75] 85
    // SubProg emit_assign_op pc: 79 op: STARTLINE (58)

    /** emit.e:1863			emit_op(rw:CONCAT)*/
    // SubProg emit_assign_op pc: 81 op: PROC (27)
    _45emit_op(15);
    // SubProg emit_assign_op pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 52785 op: 159
    // SubProg emit_assign_op pc: 85 op: NOP1 (159)
L2: // addr: 86 pc: 85 sub: 52785 op: 159
    // SubProg emit_assign_op pc: 86 op: STARTLINE (58)

    /** emit.e:1865	end procedure*/
    // SubProg emit_assign_op pc: 88 op: RETURNP (29)

// Exiting block BLOCK: emit_assign_op

// block var op_52787
    return;
    // SubProg emit_assign_op pc: 91 op: BADRETURNF (43)
    ;
}


void _45StartSourceLine(object _sl_52807, object _dup_ok_52808, object _emit_coverage_52809)
{
    object _line_span_52812 = NOVALUE;
    object _27031 = NOVALUE; // 52861 27031
// skipping _27030  name type: 0
    object _27029 = NOVALUE; // 52858 27029
    object _27028 = NOVALUE; // 52856 27028
    object _27027 = NOVALUE; // 52851 27027
    object _27026 = NOVALUE; // 52849 27026
    object _27025 = NOVALUE; // 52847 27025
// skipping _27024  name type: 0
    object _27023 = NOVALUE; // 52844 27023
// skipping _27022  name type: 0
// skipping _27021  name type: 0
    object _27020 = NOVALUE; // 52836 27020
// skipping _27019  name type: 0
    object _27018 = NOVALUE; // 52832 27018
    object _27017 = NOVALUE; // 52830 27017
    object _27016 = NOVALUE; // 52819 27016
// skipping _27015  name type: 0
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
    if (_34gline_number_15193 != _61LastLineNumber_25186)
    goto L1; // [13] 66
    // SubProg StartSourceLine pc: 17 op: STARTLINE (58)

    /** emit.e:1874			if length(LineTable) then*/
    // SubProg StartSourceLine pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_34LineTable_15277)){
            _27016 = SEQ_PTR(_34LineTable_15277)->length;
    }
    else {
        _27016 = 1;
    }
    // SubProg StartSourceLine pc: 24 op: IF (20)
    if (_27016 == 0)
    {
        _27016 = NOVALUE;
        goto L2; // [24] 55
    }
    else{
        _27016 = NOVALUE;
    }
    // SubProg StartSourceLine pc: 27 op: STARTLINE (58)

    /** emit.e:1875				if dup_ok then*/
    // SubProg StartSourceLine pc: 29 op: IF (20)
    if (_dup_ok_52808 == 0)
    {
        goto L3; // [29] 47
    }
    else{
    }
    // SubProg StartSourceLine pc: 32 op: STARTLINE (58)

    /** emit.e:1876					emit_op( STARTLINE )*/
    // SubProg StartSourceLine pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 36 op: PROC (27)
    _45emit_op(58);
    // SubProg StartSourceLine pc: 39 op: STARTLINE (58)

    /** emit.e:1877					emit_addr( gline_number )*/
    // SubProg StartSourceLine pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 43 op: PROC (27)
    _45emit_addr(_34gline_number_15193);
    // SubProg StartSourceLine pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 47 op: STARTLINE (58)

    /** emit.e:1879				return -- ignore duplicates*/
    // SubProg StartSourceLine pc: 49 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: StartSourceLine

// block var sl_52807

// block var dup_ok_52808

// block var emit_coverage_52809

// block var line_span_52812
    return;
    // SubProg StartSourceLine pc: 52 op: ELSE (23)
    goto L4; // [52] 65
    // SubProg StartSourceLine pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 55 op: STARTLINE (58)

    /** emit.e:1882				sl = FALSE -- top-level new statement to execute on same line*/
    // SubProg StartSourceLine pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 59 op: ASSIGN (18)
    _sl_52807 = _8FALSE_442;
    // SubProg StartSourceLine pc: 62 op: INTEGER_CHECK (96)
    // SubProg StartSourceLine pc: 64 op: NOP1 (159)
L4: // addr: 65 pc: 64 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 65 op: NOP1 (159)
L1: // addr: 66 pc: 65 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 66 op: STARTLINE (58)

    /** emit.e:1885		LastLineNumber = gline_number*/
    // SubProg StartSourceLine pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 70 op: ASSIGN (18)
    _61LastLineNumber_25186 = _34gline_number_15193;
    // SubProg StartSourceLine pc: 73 op: INTEGER_CHECK (96)
    // SubProg StartSourceLine pc: 75 op: STARTLINE (58)

    /** emit.e:1888		line_span = gline_number - SymTab[CurrentSub][S_FIRSTLINE]*/
    // SubProg StartSourceLine pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 83 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27017 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg StartSourceLine pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27017);
    if (!IS_ATOM_INT(_34S_FIRSTLINE_14883)){
        _27018 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FIRSTLINE_14883)->dbl));
    }
    else{
        _27018 = (object)*(((s1_ptr)_2)->base + _34S_FIRSTLINE_14883);
    }
    _27017 = NOVALUE;
    // SubProg StartSourceLine pc: 93 op: MINUS (10)
    if (IS_ATOM_INT(_27018)) {
        _line_span_52812 = _34gline_number_15193 - _27018;
    }
    else {
        _line_span_52812 = binary_op(MINUS, _34gline_number_15193, _27018);
    }
    _27018 = NOVALUE;
    // SubProg StartSourceLine pc: 97 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_line_span_52812)) {
        _1 = (object)(DBL_PTR(_line_span_52812)->dbl);
        DeRefDS(_line_span_52812);
        _line_span_52812 = _1;
    }
    // SubProg StartSourceLine pc: 99 op: STARTLINE (58)

    /** emit.e:1889		while length(LineTable) < line_span do*/
    // SubProg StartSourceLine pc: 101 op: NOP2 (110)
    // SubProg StartSourceLine pc: 103 op: NOPWHILE (158)
L5: // addr: 104 pc: 103 sub: 52805 op: 158
    // SubProg StartSourceLine pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 106 op: LENGTH (42)
    if (IS_SEQUENCE(_34LineTable_15277)){
            _27020 = SEQ_PTR(_34LineTable_15277)->length;
    }
    else {
        _27020 = 1;
    }
    // SubProg StartSourceLine pc: 109 op: LESS_IFW_I (119)
    if (_27020 >= _line_span_52812)
    goto L6; // [109] 128
    // SubProg StartSourceLine pc: 113 op: STARTLINE (58)

    /** emit.e:1890			LineTable = append(LineTable, -1) -- filler*/
    // SubProg StartSourceLine pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 117 op: APPEND (35)
    Append(&_34LineTable_15277, _34LineTable_15277, -1);
    // SubProg StartSourceLine pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg StartSourceLine pc: 123 op: STARTLINE (58)

    /** emit.e:1891		end while*/
    // SubProg StartSourceLine pc: 125 op: ENDWHILE (22)
    goto L5; // [125] 104
    // SubProg StartSourceLine pc: 127 op: NOP1 (159)
L6: // addr: 128 pc: 127 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 128 op: STARTLINE (58)

    /** emit.e:1892		LineTable = append(LineTable, length(Code))*/
    // SubProg StartSourceLine pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 134 op: LENGTH (42)
    if (IS_SEQUENCE(_34Code_15276)){
            _27023 = SEQ_PTR(_34Code_15276)->length;
    }
    else {
        _27023 = 1;
    }
    // SubProg StartSourceLine pc: 137 op: APPEND (35)
    Append(&_34LineTable_15277, _34LineTable_15277, _27023);
    _27023 = NOVALUE;
    // SubProg StartSourceLine pc: 141 op: SEQUENCE_CHECK (97)
    // SubProg StartSourceLine pc: 143 op: STARTLINE (58)

    /** emit.e:1894		if sl and (TRANSLATE or (OpTrace or OpProfileStatement)) then*/
    // SubProg StartSourceLine pc: 145 op: SC1_AND_IF (146)
    if (_sl_52807 == 0) {
        goto L7; // [145] 190
    }
    // SubProg StartSourceLine pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 151 op: SC1_OR (143)
    if (_34TRANSLATE_14813 != 0) {
        DeRef(_27026);
        _27026 = 1;
        goto L8; // [151] 171
    }
    // SubProg StartSourceLine pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 157 op: SC1_OR (143)
    if (_34OpTrace_15257 != 0) {
        _27027 = 1;
        goto L9; // [157] 167
    }
    // SubProg StartSourceLine pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 163 op: SC2_OR (144)
    _27027 = (_34OpProfileStatement_15259 != 0);
    // SubProg StartSourceLine pc: 166 op: NOP1 (159)
L9: // addr: 167 pc: 166 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 167 op: SC2_OR (144)
    DeRef(_27026);
    _27026 = (_27027 != 0);
    // SubProg StartSourceLine pc: 170 op: NOP1 (159)
L8: // addr: 171 pc: 170 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 171 op: NOP1 (159)
    // SubProg StartSourceLine pc: 172 op: IF (20)
    if (_27026 == 0)
    {
        _27026 = NOVALUE;
        goto L7; // [172] 190
    }
    else{
        _27026 = NOVALUE;
    }
    // SubProg StartSourceLine pc: 175 op: STARTLINE (58)

    /** emit.e:1896			emit_op(STARTLINE)*/
    // SubProg StartSourceLine pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 179 op: PROC (27)
    _45emit_op(58);
    // SubProg StartSourceLine pc: 182 op: STARTLINE (58)

    /** emit.e:1897			emit_addr(gline_number)*/
    // SubProg StartSourceLine pc: 184 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 186 op: PROC (27)
    _45emit_addr(_34gline_number_15193);
    // SubProg StartSourceLine pc: 189 op: NOP1 (159)
L7: // addr: 190 pc: 189 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 190 op: STARTLINE (58)

    /** emit.e:1901		if (sl and emit_coverage = COVERAGE_INCLUDE) or emit_coverage = COVERAGE_OVERRIDE then*/
    // SubProg StartSourceLine pc: 192 op: SC1_AND (141)
    if (_sl_52807 == 0) {
        _27028 = 0;
        goto LA; // [192] 206
    }
    // SubProg StartSourceLine pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 198 op: EQUALS (3)
    _27029 = (_emit_coverage_52809 == 2);
    // SubProg StartSourceLine pc: 202 op: SC2_AND (142)
    _27028 = (_27029 != 0);
    // SubProg StartSourceLine pc: 205 op: NOP1 (159)
LA: // addr: 206 pc: 205 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 206 op: SC1_OR_IF (147)
    if (_27028 != 0) {
        goto LB; // [206] 221
    }
    // SubProg StartSourceLine pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 212 op: EQUALS (3)
    _27031 = (_emit_coverage_52809 == 3);
    // SubProg StartSourceLine pc: 216 op: NOP1 (159)
    // SubProg StartSourceLine pc: 217 op: IF (20)
    if (_27031 == 0)
    {
        DeRef(_27031);
        _27031 = NOVALUE;
        goto LC; // [217] 229
    }
    else{
        DeRef(_27031);
        _27031 = NOVALUE;
    }
    // SubProg StartSourceLine pc: 220 op: NOP1 (159)
LB: // addr: 221 pc: 220 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 221 op: STARTLINE (58)

    /** emit.e:1902			include_line( gline_number )*/
    // SubProg StartSourceLine pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg StartSourceLine pc: 225 op: PROC (27)
    _50include_line(_34gline_number_15193);
    // SubProg StartSourceLine pc: 228 op: NOP1 (159)
LC: // addr: 229 pc: 228 sub: 52805 op: 159
    // SubProg StartSourceLine pc: 229 op: STARTLINE (58)

    /** emit.e:1905	end procedure*/
    // SubProg StartSourceLine pc: 231 op: RETURNP (29)

// Exiting block BLOCK: StartSourceLine

// block var sl_52807

// block var dup_ok_52808

// block var emit_coverage_52809

// block var line_span_52812
    DeRef(_27029);
    _27029 = NOVALUE;
    return;
    // SubProg StartSourceLine pc: 234 op: BADRETURNF (43)
    ;
}


object _45has_forward_params(object _sym_52866)
{
// skipping _27038  name type: 0
    object _27037 = NOVALUE; // 52877 27037
    object _27036 = NOVALUE; // 52875 27036
    object _27035 = NOVALUE; // 52874 27035
    object _27034 = NOVALUE; // 52873 27034
    object _27033 = NOVALUE; // 52872 27033
    object _27032 = NOVALUE; // 52870 27032
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_forward_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg has_forward_params pc: 3 op: STARTLINE (58)

    /** emit.e:1908		for i = cgi - (SymTab[sym][S_NUM_ARGS]-1) to cgi do*/
    // SubProg has_forward_params pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _27032 = (object)*(((s1_ptr)_2)->base + _sym_52866);
    // SubProg has_forward_params pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_27032);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _27033 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _27033 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _27032 = NOVALUE;
    // SubProg has_forward_params pc: 19 op: MINUS (10)
    if (IS_ATOM_INT(_27033)) {
        _27034 = _27033 - 1;
        if ((object)((uintptr_t)_27034 +(uintptr_t) HIGH_BITS) >= 0){
            _27034 = NewDouble((eudouble)_27034);
        }
    }
    else {
        _27034 = binary_op(MINUS, _27033, 1);
    }
    _27033 = NOVALUE;
    // SubProg has_forward_params pc: 23 op: MINUS (10)
    if (IS_ATOM_INT(_27034)) {
        _27035 = _45cgi_50387 - _27034;
        if ((object)((uintptr_t)_27035 +(uintptr_t) HIGH_BITS) >= 0){
            _27035 = NewDouble((eudouble)_27035);
        }
    }
    else {
        _27035 = binary_op(MINUS, _45cgi_50387, _27034);
    }
    DeRef(_27034);
    _27034 = NOVALUE;
    // SubProg has_forward_params pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_forward_params pc: 29 op: ASSIGN (18)
    _27036 = _45cgi_50387;
    // SubProg has_forward_params pc: 32 op: FOR (21)
    {
        object _i_52868;
        Ref(_27035);
        _i_52868 = _27035;
L1: // addr: 39 pc: 32 sub: 52864 op: 21
        if (binary_op_a(GREATER, _i_52868, _27036)){
            goto L2; // [32] 65
        }
        // SubProg has_forward_params pc: 39 op: STARTLINE (58)

        /** emit.e:1909			if cg_stack[i] < 0 then*/
        // SubProg has_forward_params pc: 41 op: GLOBAL_INIT_CHECK (109)
        // SubProg has_forward_params pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_45cg_stack_50386);
        if (!IS_ATOM_INT(_i_52868)){
            _27037 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_52868)->dbl));
        }
        else{
            _27037 = (object)*(((s1_ptr)_2)->base + _i_52868);
        }
        // SubProg has_forward_params pc: 47 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _27037, 0)){
            _27037 = NOVALUE;
            goto L3; // [47] 58
        }
        _27037 = NOVALUE;
        // SubProg has_forward_params pc: 51 op: STARTLINE (58)

        /** emit.e:1910				return 1*/
        // SubProg has_forward_params pc: 53 op: RETURNF (28)
        DeRef(_i_52868);

// Exiting block BLOCK: has_forward_params

// block var sym_52866
        DeRef(_27035);
        _27035 = NOVALUE;
        return 1;
        // SubProg has_forward_params pc: 57 op: NOP1 (159)
L3: // addr: 58 pc: 57 sub: 52864 op: 159
        // SubProg has_forward_params pc: 58 op: STARTLINE (58)

        /** emit.e:1912		end for*/
        // SubProg has_forward_params pc: 60 op: ENDFOR_INT_UP1 (54)
        _0 = _i_52868;
        if (IS_ATOM_INT(_i_52868)) {
            _i_52868 = _i_52868 + 1;
            if ((object)((uintptr_t)_i_52868 +(uintptr_t) HIGH_BITS) >= 0){
                _i_52868 = NewDouble((eudouble)_i_52868);
            }
        }
        else {
            _i_52868 = binary_op_a(PLUS, _i_52868, 1);
        }
        DeRef(_0);
        goto L1; // [60] 39
L2: // addr: 65 pc: 60 sub: 52864 op: 54
        ;
        DeRef(_i_52868);
    }
    // SubProg has_forward_params pc: 65 op: STARTLINE (58)

    /** emit.e:1913		return 0*/
    // SubProg has_forward_params pc: 67 op: RETURNF (28)

// Exiting block BLOCK: has_forward_params

// block var sym_52866
    DeRef(_27035);
    _27035 = NOVALUE;
    return 0;
    // SubProg has_forward_params pc: 71 op: BADRETURNF (43)
    ;
}



// 0x348D28A2
