// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _34is_integer(object _o_15032)
{
    object _8166 = NOVALUE; // 15042 8166
    object _8165 = NOVALUE; // 15041 8165
    object _8164 = NOVALUE; // 15040 8164
// skipping _8163  name type: 0
    object _8162 = NOVALUE; // 15037 8162
// skipping _8161  name type: 0
    object _8160 = NOVALUE; // 15034 8160
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_integer pc: 1 op: STARTLINE (58)

    /** global.e:296		if not atom( o ) then*/
    // SubProg is_integer pc: 3 op: IS_AN_ATOM (67)
    _8160 = IS_ATOM(_o_15032);
    // SubProg is_integer pc: 6 op: NOT_IFW (108)
    if (_8160 != 0)
    goto L1; // [6] 16
    _8160 = NOVALUE;
    // SubProg is_integer pc: 9 op: STARTLINE (58)

    /** global.e:297			return 0*/
    // SubProg is_integer pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_15032
    DeRef(_o_15032);
    return 0;
    // SubProg is_integer pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 15030 op: 159
    // SubProg is_integer pc: 16 op: STARTLINE (58)

    /** global.e:300		if o = floor( o ) then*/
    // SubProg is_integer pc: 18 op: FLOOR (83)
    if (IS_ATOM_INT(_o_15032))
    _8162 = e_floor(_o_15032);
    else
    _8162 = unary_op(FLOOR, _o_15032);
    // SubProg is_integer pc: 21 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _o_15032, _8162)){
        DeRef(_8162);
        _8162 = NOVALUE;
        goto L2; // [21] 53
    }
    DeRef(_8162);
    _8162 = NOVALUE;
    // SubProg is_integer pc: 25 op: STARTLINE (58)

    /** global.e:301			if o <= MAXINT and o >= MININT then*/
    // SubProg is_integer pc: 27 op: LESSEQ (5)
    if (IS_ATOM_INT(_o_15032)) {
        _8164 = (_o_15032 <= 1073741823);
    }
    else {
        _8164 = binary_op(LESSEQ, _o_15032, 1073741823);
    }
    // SubProg is_integer pc: 31 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_8164)) {
        if (_8164 == 0) {
            goto L3; // [31] 52
        }
    }
    else {
        if (DBL_PTR(_8164)->dbl == 0.0) {
            goto L3; // [31] 52
        }
    }
    // SubProg is_integer pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_integer pc: 37 op: GREATEREQ (2)
    if (IS_ATOM_INT(_o_15032)) {
        _8166 = (_o_15032 >= -1073741824);
    }
    else {
        _8166 = binary_op(GREATEREQ, _o_15032, -1073741824);
    }
    // SubProg is_integer pc: 41 op: NOP1 (159)
    // SubProg is_integer pc: 42 op: IF (20)
    if (_8166 == 0) {
        DeRef(_8166);
        _8166 = NOVALUE;
        goto L3; // [42] 52
    }
    else {
        if (!IS_ATOM_INT(_8166) && DBL_PTR(_8166)->dbl == 0.0){
            DeRef(_8166);
            _8166 = NOVALUE;
            goto L3; // [42] 52
        }
        DeRef(_8166);
        _8166 = NOVALUE;
    }
    DeRef(_8166);
    _8166 = NOVALUE;
    // SubProg is_integer pc: 45 op: STARTLINE (58)

    /** global.e:302				return 1*/
    // SubProg is_integer pc: 47 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_15032
    DeRef(_o_15032);
    DeRef(_8164);
    _8164 = NOVALUE;
    return 1;
    // SubProg is_integer pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 15030 op: 159
    // SubProg is_integer pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 15030 op: 159
    // SubProg is_integer pc: 53 op: STARTLINE (58)

    /** global.e:305		return 0*/
    // SubProg is_integer pc: 55 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_15032
    DeRef(_o_15032);
    DeRef(_8164);
    _8164 = NOVALUE;
    return 0;
    // SubProg is_integer pc: 59 op: BADRETURNF (43)
    ;
}


object _34symtab_index(object _x_15056)
{
    object _8182 = NOVALUE; // 15071 8182
    object _8181 = NOVALUE; // 15070 8181
    object _8180 = NOVALUE; // 15069 8180
    object _8179 = NOVALUE; // 15068 8179
    object _8178 = NOVALUE; // 15065 8178
    object _8177 = NOVALUE; // 15064 8177
// skipping _8176  name type: 0
    object _8175 = NOVALUE; // 15061 8175
// skipping _8174  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg symtab_index pc: 1 op: INTEGER_CHECK (96)
    // SubProg symtab_index pc: 3 op: STARTLINE (58)

    /** global.e:323		if x = 0 then*/
    // SubProg symtab_index pc: 5 op: EQUALS_IFW_I (121)
    if (_x_15056 != 0)
    goto L1; // [5] 18
    // SubProg symtab_index pc: 9 op: STARTLINE (58)

    /** global.e:324			return TRUE -- NULL value*/
    // SubProg symtab_index pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 13 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_15056
    return _8TRUE_444;
    // SubProg symtab_index pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 15054 op: 159
    // SubProg symtab_index pc: 18 op: STARTLINE (58)

    /** global.e:326		if x < 0 or x > length(SymTab) then*/
    // SubProg symtab_index pc: 20 op: LESS (1)
    _8175 = (_x_15056 < 0);
    // SubProg symtab_index pc: 24 op: SC1_OR_IF (147)
    if (_8175 != 0) {
        goto L2; // [24] 42
    }
    // SubProg symtab_index pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _8177 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _8177 = 1;
    }
    // SubProg symtab_index pc: 33 op: GREATER (6)
    _8178 = (_x_15056 > _8177);
    _8177 = NOVALUE;
    // SubProg symtab_index pc: 37 op: NOP1 (159)
    // SubProg symtab_index pc: 38 op: IF (20)
    if (_8178 == 0)
    {
        DeRef(_8178);
        _8178 = NOVALUE;
        goto L3; // [38] 51
    }
    else{
        DeRef(_8178);
        _8178 = NOVALUE;
    }
    // SubProg symtab_index pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 15054 op: 159
    // SubProg symtab_index pc: 42 op: STARTLINE (58)

    /** global.e:327			return FALSE*/
    // SubProg symtab_index pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 46 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_15056
    DeRef(_8175);
    _8175 = NOVALUE;
    return _8FALSE_442;
    // SubProg symtab_index pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 15054 op: 159
    // SubProg symtab_index pc: 51 op: STARTLINE (58)

    /** global.e:329		return find(length(SymTab[x]), {SIZEOF_VAR_ENTRY, SIZEOF_ROUTINE_ENTRY,*/
    // SubProg symtab_index pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _8179 = (object)*(((s1_ptr)_2)->base + _x_15056);
    // SubProg symtab_index pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_8179)){
            _8180 = SEQ_PTR(_8179)->length;
    }
    else {
        _8180 = 1;
    }
    _8179 = NOVALUE;
    // SubProg symtab_index pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 70 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _34SIZEOF_VAR_ENTRY_14973;
    ((intptr_t*)_2)[2] = _34SIZEOF_ROUTINE_ENTRY_14970;
    ((intptr_t*)_2)[3] = _34SIZEOF_TEMP_ENTRY_14979;
    ((intptr_t*)_2)[4] = _34SIZEOF_BLOCK_ENTRY_14976;
    _8181 = MAKE_SEQ(_1);
    // SubProg symtab_index pc: 77 op: FIND_FROM (176)
    _8182 = find_from(_8180, _8181, 1);
    _8180 = NOVALUE;
    DeRefDS(_8181);
    _8181 = NOVALUE;
    // SubProg symtab_index pc: 82 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_15056
    _8179 = NOVALUE;
    DeRef(_8175);
    _8175 = NOVALUE;
    return _8182;
    // SubProg symtab_index pc: 86 op: BADRETURNF (43)
    ;
}



// 0x4AF7DAF6
