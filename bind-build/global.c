// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _39is_integer(object _o_16659)
{
    object _9161 = NOVALUE;
    object _9160 = NOVALUE;
    object _9159 = NOVALUE;
    object _9157 = NOVALUE;
    object _9155 = NOVALUE;
    object _0, _1, _2;
    

    /** global.e:296		if not atom( o ) then*/
    _9155 = IS_ATOM(_o_16659);
    if (_9155 != 0)
    goto L1; // [6] 16
    _9155 = NOVALUE;

    /** global.e:297			return 0*/
    DeRef(_o_16659);
    return 0;
L1: 

    /** global.e:300		if o = floor( o ) then*/
    if (IS_ATOM_INT(_o_16659))
    _9157 = e_floor(_o_16659);
    else
    _9157 = unary_op(FLOOR, _o_16659);
    if (binary_op_a(NOTEQ, _o_16659, _9157)){
        DeRef(_9157);
        _9157 = NOVALUE;
        goto L2; // [21] 53
    }
    DeRef(_9157);
    _9157 = NOVALUE;

    /** global.e:301			if o <= MAXINT and o >= MININT then*/
    if (IS_ATOM_INT(_o_16659)) {
        _9159 = (_o_16659 <= 1073741823);
    }
    else {
        _9159 = binary_op(LESSEQ, _o_16659, 1073741823);
    }
    if (IS_ATOM_INT(_9159)) {
        if (_9159 == 0) {
            goto L3; // [31] 52
        }
    }
    else {
        if (DBL_PTR(_9159)->dbl == 0.0) {
            goto L3; // [31] 52
        }
    }
    if (IS_ATOM_INT(_o_16659)) {
        _9161 = (_o_16659 >= -1073741824);
    }
    else {
        _9161 = binary_op(GREATEREQ, _o_16659, -1073741824);
    }
    if (_9161 == 0) {
        DeRef(_9161);
        _9161 = NOVALUE;
        goto L3; // [42] 52
    }
    else {
        if (!IS_ATOM_INT(_9161) && DBL_PTR(_9161)->dbl == 0.0){
            DeRef(_9161);
            _9161 = NOVALUE;
            goto L3; // [42] 52
        }
        DeRef(_9161);
        _9161 = NOVALUE;
    }
    DeRef(_9161);
    _9161 = NOVALUE;

    /** global.e:302				return 1*/
    DeRef(_o_16659);
    DeRef(_9159);
    _9159 = NOVALUE;
    return 1;
L3: 
L2: 

    /** global.e:305		return 0*/
    DeRef(_o_16659);
    DeRef(_9159);
    _9159 = NOVALUE;
    return 0;
    ;
}


object _39symtab_index(object _x_16683)
{
    object _9177 = NOVALUE;
    object _9176 = NOVALUE;
    object _9175 = NOVALUE;
    object _9174 = NOVALUE;
    object _9173 = NOVALUE;
    object _9172 = NOVALUE;
    object _9170 = NOVALUE;
    object _0, _1, _2;
    

    /** global.e:323		if x = 0 then*/
    if (_x_16683 != 0)
    goto L1; // [5] 18

    /** global.e:324			return TRUE -- NULL value*/
    return _9TRUE_444;
L1: 

    /** global.e:326		if x < 0 or x > length(SymTab) then*/
    _9170 = (_x_16683 < 0);
    if (_9170 != 0) {
        goto L2; // [24] 42
    }
    if (IS_SEQUENCE(_36SymTab_15404)){
            _9172 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _9172 = 1;
    }
    _9173 = (_x_16683 > _9172);
    _9172 = NOVALUE;
    if (_9173 == 0)
    {
        DeRef(_9173);
        _9173 = NOVALUE;
        goto L3; // [38] 51
    }
    else{
        DeRef(_9173);
        _9173 = NOVALUE;
    }
L2: 

    /** global.e:327			return FALSE*/
    DeRef(_9170);
    _9170 = NOVALUE;
    return _9FALSE_442;
L3: 

    /** global.e:329		return find(length(SymTab[x]), {SIZEOF_VAR_ENTRY, SIZEOF_ROUTINE_ENTRY,*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _9174 = (object)*(((s1_ptr)_2)->base + _x_16683);
    if (IS_SEQUENCE(_9174)){
            _9175 = SEQ_PTR(_9174)->length;
    }
    else {
        _9175 = 1;
    }
    _9174 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _39SIZEOF_VAR_ENTRY_16600;
    ((intptr_t*)_2)[2] = _39SIZEOF_ROUTINE_ENTRY_16597;
    ((intptr_t*)_2)[3] = _39SIZEOF_TEMP_ENTRY_16606;
    ((intptr_t*)_2)[4] = _39SIZEOF_BLOCK_ENTRY_16603;
    _9176 = MAKE_SEQ(_1);
    _9177 = find_from(_9175, _9176, 1);
    _9175 = NOVALUE;
    DeRefDS(_9176);
    _9176 = NOVALUE;
    _9174 = NOVALUE;
    DeRef(_9170);
    _9170 = NOVALUE;
    return _9177;
    ;
}



// 0xA88419D5
