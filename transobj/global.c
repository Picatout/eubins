// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _36is_integer(object _o_16280)
{
    object _8925 = NOVALUE; // 16290 8925
    object _8924 = NOVALUE; // 16289 8924
    object _8923 = NOVALUE; // 16288 8923
// skipping _8922  name type: 0
    object _8921 = NOVALUE; // 16285 8921
// skipping _8920  name type: 0
    object _8919 = NOVALUE; // 16282 8919
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_integer pc: 1 op: STARTLINE (58)

    /** global.e:296		if not atom( o ) then*/
    // SubProg is_integer pc: 3 op: IS_AN_ATOM (67)
    _8919 = IS_ATOM(_o_16280);
    // SubProg is_integer pc: 6 op: NOT_IFW (108)
    if (_8919 != 0)
    goto L1; // [6] 16
    _8919 = NOVALUE;
    // SubProg is_integer pc: 9 op: STARTLINE (58)

    /** global.e:297			return 0*/
    // SubProg is_integer pc: 11 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_16280
    DeRef(_o_16280);
    return 0;
    // SubProg is_integer pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 16278 op: 159
    // SubProg is_integer pc: 16 op: STARTLINE (58)

    /** global.e:300		if o = floor( o ) then*/
    // SubProg is_integer pc: 18 op: FLOOR (83)
    if (IS_ATOM_INT(_o_16280))
    _8921 = e_floor(_o_16280);
    else
    _8921 = unary_op(FLOOR, _o_16280);
    // SubProg is_integer pc: 21 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _o_16280, _8921)){
        DeRef(_8921);
        _8921 = NOVALUE;
        goto L2; // [21] 53
    }
    DeRef(_8921);
    _8921 = NOVALUE;
    // SubProg is_integer pc: 25 op: STARTLINE (58)

    /** global.e:301			if o <= MAXINT and o >= MININT then*/
    // SubProg is_integer pc: 27 op: LESSEQ (5)
    if (IS_ATOM_INT(_o_16280)) {
        _8923 = (_o_16280 <= 1073741823);
    }
    else {
        _8923 = binary_op(LESSEQ, _o_16280, 1073741823);
    }
    // SubProg is_integer pc: 31 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_8923)) {
        if (_8923 == 0) {
            goto L3; // [31] 52
        }
    }
    else {
        if (DBL_PTR(_8923)->dbl == 0.0) {
            goto L3; // [31] 52
        }
    }
    // SubProg is_integer pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_integer pc: 37 op: GREATEREQ (2)
    if (IS_ATOM_INT(_o_16280)) {
        _8925 = (_o_16280 >= -1073741824);
    }
    else {
        _8925 = binary_op(GREATEREQ, _o_16280, -1073741824);
    }
    // SubProg is_integer pc: 41 op: NOP1 (159)
    // SubProg is_integer pc: 42 op: IF (20)
    if (_8925 == 0) {
        DeRef(_8925);
        _8925 = NOVALUE;
        goto L3; // [42] 52
    }
    else {
        if (!IS_ATOM_INT(_8925) && DBL_PTR(_8925)->dbl == 0.0){
            DeRef(_8925);
            _8925 = NOVALUE;
            goto L3; // [42] 52
        }
        DeRef(_8925);
        _8925 = NOVALUE;
    }
    DeRef(_8925);
    _8925 = NOVALUE;
    // SubProg is_integer pc: 45 op: STARTLINE (58)

    /** global.e:302				return 1*/
    // SubProg is_integer pc: 47 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_16280
    DeRef(_o_16280);
    DeRef(_8923);
    _8923 = NOVALUE;
    return 1;
    // SubProg is_integer pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 16278 op: 159
    // SubProg is_integer pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 16278 op: 159
    // SubProg is_integer pc: 53 op: STARTLINE (58)

    /** global.e:305		return 0*/
    // SubProg is_integer pc: 55 op: RETURNF (28)

// Exiting block BLOCK: is_integer

// block var o_16280
    DeRef(_o_16280);
    DeRef(_8923);
    _8923 = NOVALUE;
    return 0;
    // SubProg is_integer pc: 59 op: BADRETURNF (43)
    ;
}


object _36symtab_index(object _x_16304)
{
    object _8941 = NOVALUE; // 16319 8941
    object _8940 = NOVALUE; // 16318 8940
    object _8939 = NOVALUE; // 16317 8939
    object _8938 = NOVALUE; // 16316 8938
    object _8937 = NOVALUE; // 16313 8937
    object _8936 = NOVALUE; // 16312 8936
// skipping _8935  name type: 0
    object _8934 = NOVALUE; // 16309 8934
// skipping _8933  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg symtab_index pc: 1 op: INTEGER_CHECK (96)
    // SubProg symtab_index pc: 3 op: STARTLINE (58)

    /** global.e:323		if x = 0 then*/
    // SubProg symtab_index pc: 5 op: EQUALS_IFW_I (121)
    if (_x_16304 != 0)
    goto L1; // [5] 18
    // SubProg symtab_index pc: 9 op: STARTLINE (58)

    /** global.e:324			return TRUE -- NULL value*/
    // SubProg symtab_index pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 13 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_16304
    return _13TRUE_452;
    // SubProg symtab_index pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 16302 op: 159
    // SubProg symtab_index pc: 18 op: STARTLINE (58)

    /** global.e:326		if x < 0 or x > length(SymTab) then*/
    // SubProg symtab_index pc: 20 op: LESS (1)
    _8934 = (_x_16304 < 0);
    // SubProg symtab_index pc: 24 op: SC1_OR_IF (147)
    if (_8934 != 0) {
        goto L2; // [24] 42
    }
    // SubProg symtab_index pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _8936 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _8936 = 1;
    }
    // SubProg symtab_index pc: 33 op: GREATER (6)
    _8937 = (_x_16304 > _8936);
    _8936 = NOVALUE;
    // SubProg symtab_index pc: 37 op: NOP1 (159)
    // SubProg symtab_index pc: 38 op: IF (20)
    if (_8937 == 0)
    {
        DeRef(_8937);
        _8937 = NOVALUE;
        goto L3; // [38] 51
    }
    else{
        DeRef(_8937);
        _8937 = NOVALUE;
    }
    // SubProg symtab_index pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 16302 op: 159
    // SubProg symtab_index pc: 42 op: STARTLINE (58)

    /** global.e:327			return FALSE*/
    // SubProg symtab_index pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 46 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_16304
    DeRef(_8934);
    _8934 = NOVALUE;
    return _13FALSE_450;
    // SubProg symtab_index pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 16302 op: 159
    // SubProg symtab_index pc: 51 op: STARTLINE (58)

    /** global.e:329		return find(length(SymTab[x]), {SIZEOF_VAR_ENTRY, SIZEOF_ROUTINE_ENTRY,*/
    // SubProg symtab_index pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _8938 = (object)*(((s1_ptr)_2)->base + _x_16304);
    // SubProg symtab_index pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_8938)){
            _8939 = SEQ_PTR(_8938)->length;
    }
    else {
        _8939 = 1;
    }
    _8938 = NOVALUE;
    // SubProg symtab_index pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg symtab_index pc: 70 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _36SIZEOF_VAR_ENTRY_16221;
    ((intptr_t*)_2)[2] = _36SIZEOF_ROUTINE_ENTRY_16218;
    ((intptr_t*)_2)[3] = _36SIZEOF_TEMP_ENTRY_16227;
    ((intptr_t*)_2)[4] = _36SIZEOF_BLOCK_ENTRY_16224;
    _8940 = MAKE_SEQ(_1);
    // SubProg symtab_index pc: 77 op: FIND_FROM (176)
    _8941 = find_from(_8939, _8940, 1);
    _8939 = NOVALUE;
    DeRefDS(_8940);
    _8940 = NOVALUE;
    // SubProg symtab_index pc: 82 op: RETURNF (28)

// Exiting block BLOCK: symtab_index

// block var x_16304
    DeRef(_8934);
    _8934 = NOVALUE;
    _8938 = NOVALUE;
    return _8941;
    // SubProg symtab_index pc: 86 op: BADRETURNF (43)
    ;
}



// 0xC9D3AA27
