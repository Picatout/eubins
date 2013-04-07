// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _5is_integer(object _o_12320)
{
    object _6791 = NOVALUE; // 12330 6791
    object _6790 = NOVALUE; // 12329 6790
    object _6789 = NOVALUE; // 12328 6789
// skipping _6788  name type: 0
    object _6787 = NOVALUE; // 12325 6787
// skipping _6786  name type: 0
    object _6785 = NOVALUE; // 12322 6785
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_integer pc: 1 op: STARTLINE (58)

    /** global.e:296		if not atom( o ) then*/
    // SubProg is_integer pc: 3 op: IS_AN_ATOM (67)
    _6785 = IS_ATOM(_o_12320);
    // SubProg is_integer pc: 6 op: NOT_IFW (108)
    if (_6785 != 0)
    goto L1; // [6] 16
    _6785 = NOVALUE;
    // SubProg is_integer pc: 9 op: STARTLINE (58)

    /** global.e:297			return 0*/
    // SubProg is_integer pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_12320
    DeRef(_o_12320);
    return 0;
    // SubProg is_integer pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 12318 op: 159
    // SubProg is_integer pc: 16 op: STARTLINE (58)

    /** global.e:300		if o = floor( o ) then*/
    // SubProg is_integer pc: 18 op: FLOOR (83)
    if (IS_ATOM_INT(_o_12320))
    _6787 = e_floor(_o_12320);
    else
    _6787 = unary_op(FLOOR, _o_12320);
    // SubProg is_integer pc: 21 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _o_12320, _6787)){
        DeRef(_6787);
        _6787 = NOVALUE;
        goto L2; // [21] 53
    }
    DeRef(_6787);
    _6787 = NOVALUE;
    // SubProg is_integer pc: 25 op: STARTLINE (58)

    /** global.e:301			if o <= MAXINT and o >= MININT then*/
    // SubProg is_integer pc: 27 op: LESSEQ (5)
    if (IS_ATOM_INT(_o_12320)) {
        _6789 = (_o_12320 <= 1073741823);
    }
    else {
        _6789 = binary_op(LESSEQ, _o_12320, 1073741823);
    }
    // SubProg is_integer pc: 31 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_6789)) {
        if (_6789 == 0) {
            goto L3; // [31] 52
        }
    }
    else {
        if (DBL_PTR(_6789)->dbl == 0.0) {
            goto L3; // [31] 52
        }
    }
    // SubProg is_integer pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_integer pc: 37 op: GREATEREQ (2)
    if (IS_ATOM_INT(_o_12320)) {
        _6791 = (_o_12320 >= -1073741824);
    }
    else {
        _6791 = binary_op(GREATEREQ, _o_12320, -1073741824);
    }
    // SubProg is_integer pc: 41 op: NOP1 (159)
    // SubProg is_integer pc: 42 op: IF (20)
    if (_6791 == 0) {
        DeRef(_6791);
        _6791 = NOVALUE;
        goto L3; // [42] 52
    }
    else {
        if (!IS_ATOM_INT(_6791) && DBL_PTR(_6791)->dbl == 0.0){
            DeRef(_6791);
            _6791 = NOVALUE;
            goto L3; // [42] 52
        }
        DeRef(_6791);
        _6791 = NOVALUE;
    }
    DeRef(_6791);
    _6791 = NOVALUE;
    // SubProg is_integer pc: 45 op: STARTLINE (58)

    /** global.e:302				return 1*/
    // SubProg is_integer pc: 47 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_12320
    DeRef(_o_12320);
    DeRef(_6789);
    _6789 = NOVALUE;
    return 1;
    // SubProg is_integer pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 12318 op: 159
    // SubProg is_integer pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 12318 op: 159
    // SubProg is_integer pc: 53 op: STARTLINE (58)

    /** global.e:305		return 0*/
    // SubProg is_integer pc: 55 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_12320
    DeRef(_o_12320);
    DeRef(_6789);
    _6789 = NOVALUE;
    return 0;
    // SubProg is_integer pc: 59 op: BADRETURNF (43)
    ;
}


object _5symtab_index(object _x_12344)
{
    object _6807 = NOVALUE; // 12359 6807
    object _6806 = NOVALUE; // 12358 6806
    object _6805 = NOVALUE; // 12357 6805
    object _6804 = NOVALUE; // 12356 6804
    object _6803 = NOVALUE; // 12353 6803
    object _6802 = NOVALUE; // 12352 6802
// skipping _6801  name type: 0
    object _6800 = NOVALUE; // 12349 6800
// skipping _6799  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg symtab_index pc: 1 op: INTEGER_CHECK (96)
    // SubProg symtab_index pc: 3 op: STARTLINE (58)

    /** global.e:323		if x = 0 then*/
    // SubProg symtab_index pc: 5 op: EQUALS_IFW_I (121)
    if (_x_12344 != 0)
    goto L1; // [5] 18
    // SubProg symtab_index pc: 9 op: STARTLINE (58)

    /** global.e:324			return TRUE -- NULL value*/
    // SubProg symtab_index pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 13 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_12344
    return _6TRUE_365;
    // SubProg symtab_index pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 12342 op: 159
    // SubProg symtab_index pc: 18 op: STARTLINE (58)

    /** global.e:326		if x < 0 or x > length(SymTab) then*/
    // SubProg symtab_index pc: 20 op: LESS (1)
    _6800 = (_x_12344 < 0);
    // SubProg symtab_index pc: 24 op: SC1_OR_IF (147)
    if (_6800 != 0) {
        goto L2; // [24] 42
    }
    // SubProg symtab_index pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _6802 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _6802 = 1;
    }
    // SubProg symtab_index pc: 33 op: GREATER (6)
    _6803 = (_x_12344 > _6802);
    _6802 = NOVALUE;
    // SubProg symtab_index pc: 37 op: NOP1 (159)
    // SubProg symtab_index pc: 38 op: IF (20)
    if (_6803 == 0)
    {
        DeRef(_6803);
        _6803 = NOVALUE;
        goto L3; // [38] 51
    }
    else{
        DeRef(_6803);
        _6803 = NOVALUE;
    }
    // SubProg symtab_index pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 12342 op: 159
    // SubProg symtab_index pc: 42 op: STARTLINE (58)

    /** global.e:327			return FALSE*/
    // SubProg symtab_index pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 46 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_12344
    DeRef(_6800);
    _6800 = NOVALUE;
    return _6FALSE_363;
    // SubProg symtab_index pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 12342 op: 159
    // SubProg symtab_index pc: 51 op: STARTLINE (58)

    /** global.e:329		return find(length(SymTab[x]), {SIZEOF_VAR_ENTRY, SIZEOF_ROUTINE_ENTRY,*/
    // SubProg symtab_index pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _6804 = (object)*(((s1_ptr)_2)->base + _x_12344);
    // SubProg symtab_index pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_6804)){
            _6805 = SEQ_PTR(_6804)->length;
    }
    else {
        _6805 = 1;
    }
    _6804 = NOVALUE;
    // SubProg symtab_index pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 70 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5SIZEOF_VAR_ENTRY_12261;
    ((intptr_t*)_2)[2] = _5SIZEOF_ROUTINE_ENTRY_12258;
    ((intptr_t*)_2)[3] = _5SIZEOF_TEMP_ENTRY_12267;
    ((intptr_t*)_2)[4] = _5SIZEOF_BLOCK_ENTRY_12264;
    _6806 = MAKE_SEQ(_1);
    // SubProg symtab_index pc: 77 op: FIND_FROM (176)
    _6807 = find_from(_6805, _6806, 1);
    _6805 = NOVALUE;
    DeRefDS(_6806);
    _6806 = NOVALUE;
    // SubProg symtab_index pc: 82 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_12344
    _6804 = NOVALUE;
    DeRef(_6800);
    _6800 = NOVALUE;
    return _6807;
    // SubProg symtab_index pc: 86 op: BADRETURNF (43)
    ;
}



// 0x5544AF8F
