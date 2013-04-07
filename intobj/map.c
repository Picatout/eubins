// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _33map(object _m_13513)
{
// skipping _7385  name type: 0
    object _7384 = NOVALUE; // 13539 7384
    object _7383 = NOVALUE; // 13538 7383
    object _7382 = NOVALUE; // 13537 7382
// skipping _7381  name type: 0
    object _7380 = NOVALUE; // 13534 7380
    object _7379 = NOVALUE; // 13533 7379
    object _7378 = NOVALUE; // 13532 7378
// skipping _7377  name type: 0
    object _7376 = NOVALUE; // 13529 7376
    object _7375 = NOVALUE; // 13528 7375
    object _7374 = NOVALUE; // 13527 7374
// skipping _7373  name type: 0
    object _7372 = NOVALUE; // 13524 7372
    object _7371 = NOVALUE; // 13523 7371
// skipping _7370  name type: 0
// skipping _7369  name type: 0
    object _7368 = NOVALUE; // 13518 7368
// skipping _7367  name type: 0
    object _7366 = NOVALUE; // 13515 7366
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg map pc: 1 op: STARTLINE (58)

    /** map.e:126		if not atom( m ) then*/
    // SubProg map pc: 3 op: IS_AN_ATOM (67)
    _7366 = IS_ATOM(_m_13513);
    // SubProg map pc: 6 op: NOT_IFW (108)
    if (_7366 != 0)
    goto L1; // [6] 16
    _7366 = NOVALUE;
    // SubProg map pc: 9 op: STARTLINE (58)

    /** map.e:127			return 0*/
    // SubProg map pc: 11 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    return 0;
    // SubProg map pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 13511 op: 159
    // SubProg map pc: 16 op: STARTLINE (58)

    /** map.e:129		if length( eumem:ram_space ) < m then*/
    // SubProg map pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_34ram_space_12752)){
            _7368 = SEQ_PTR(_34ram_space_12752)->length;
    }
    else {
        _7368 = 1;
    }
    // SubProg map pc: 23 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _7368, _m_13513)){
        _7368 = NOVALUE;
        goto L2; // [23] 34
    }
    _7368 = NOVALUE;
    // SubProg map pc: 27 op: STARTLINE (58)

    /** map.e:130			return 0*/
    // SubProg map pc: 29 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    return 0;
    // SubProg map pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 13511 op: 159
    // SubProg map pc: 34 op: STARTLINE (58)

    /** map.e:132		if m < 1 then*/
    // SubProg map pc: 36 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _m_13513, 1)){
        goto L3; // [36] 47
    }
    // SubProg map pc: 40 op: STARTLINE (58)

    /** map.e:133			return 0*/
    // SubProg map pc: 42 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    return 0;
    // SubProg map pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 13511 op: 159
    // SubProg map pc: 47 op: STARTLINE (58)

    /** map.e:135		if length( eumem:ram_space[m] ) != MAP_MAX then*/
    // SubProg map pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_m_13513)){
        _7371 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_13513)->dbl));
    }
    else{
        _7371 = (object)*(((s1_ptr)_2)->base + _m_13513);
    }
    // SubProg map pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_7371)){
            _7372 = SEQ_PTR(_7371)->length;
    }
    else {
        _7372 = 1;
    }
    _7371 = NOVALUE;
    // SubProg map pc: 58 op: NOTEQ_IFW_I (122)
    if (_7372 == 3)
    goto L4; // [58] 69
    // SubProg map pc: 62 op: STARTLINE (58)

    /** map.e:136			return 0*/
    // SubProg map pc: 64 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    _7371 = NOVALUE;
    return 0;
    // SubProg map pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 13511 op: 159
    // SubProg map pc: 69 op: STARTLINE (58)

    /** map.e:138		if not atom( eumem:ram_space[m][MAP_SIZE] ) then*/
    // SubProg map pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 73 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_m_13513)){
        _7374 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_13513)->dbl));
    }
    else{
        _7374 = (object)*(((s1_ptr)_2)->base + _m_13513);
    }
    // SubProg map pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7374);
    _7375 = (object)*(((s1_ptr)_2)->base + 1);
    _7374 = NOVALUE;
    // SubProg map pc: 81 op: IS_AN_ATOM (67)
    _7376 = IS_ATOM(_7375);
    _7375 = NOVALUE;
    // SubProg map pc: 84 op: NOT_IFW (108)
    if (_7376 != 0)
    goto L5; // [84] 94
    _7376 = NOVALUE;
    // SubProg map pc: 87 op: STARTLINE (58)

    /** map.e:139			return 0*/
    // SubProg map pc: 89 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    _7371 = NOVALUE;
    return 0;
    // SubProg map pc: 93 op: NOP1 (159)
L5: // addr: 94 pc: 93 sub: 13511 op: 159
    // SubProg map pc: 94 op: STARTLINE (58)

    /** map.e:141		if not sequence( eumem:ram_space[m][MAP_SLOTS] ) then*/
    // SubProg map pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 98 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_m_13513)){
        _7378 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_13513)->dbl));
    }
    else{
        _7378 = (object)*(((s1_ptr)_2)->base + _m_13513);
    }
    // SubProg map pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7378);
    _7379 = (object)*(((s1_ptr)_2)->base + 2);
    _7378 = NOVALUE;
    // SubProg map pc: 106 op: IS_A_SEQUENCE (68)
    _7380 = IS_SEQUENCE(_7379);
    _7379 = NOVALUE;
    // SubProg map pc: 109 op: NOT_IFW (108)
    if (_7380 != 0)
    goto L6; // [109] 119
    _7380 = NOVALUE;
    // SubProg map pc: 112 op: STARTLINE (58)

    /** map.e:142			return 0*/
    // SubProg map pc: 114 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    _7371 = NOVALUE;
    return 0;
    // SubProg map pc: 118 op: NOP1 (159)
L6: // addr: 119 pc: 118 sub: 13511 op: 159
    // SubProg map pc: 119 op: STARTLINE (58)

    /** map.e:144		if not atom( eumem:ram_space[m][MAP_MAX] ) then*/
    // SubProg map pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 123 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_m_13513)){
        _7382 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_13513)->dbl));
    }
    else{
        _7382 = (object)*(((s1_ptr)_2)->base + _m_13513);
    }
    // SubProg map pc: 127 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7382);
    _7383 = (object)*(((s1_ptr)_2)->base + 3);
    _7382 = NOVALUE;
    // SubProg map pc: 131 op: IS_AN_ATOM (67)
    _7384 = IS_ATOM(_7383);
    _7383 = NOVALUE;
    // SubProg map pc: 134 op: NOT_IFW (108)
    if (_7384 != 0)
    goto L7; // [134] 144
    _7384 = NOVALUE;
    // SubProg map pc: 137 op: STARTLINE (58)

    /** map.e:145			return 0*/
    // SubProg map pc: 139 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    _7371 = NOVALUE;
    return 0;
    // SubProg map pc: 143 op: NOP1 (159)
L7: // addr: 144 pc: 143 sub: 13511 op: 159
    // SubProg map pc: 144 op: STARTLINE (58)

    /** map.e:147		return 1*/
    // SubProg map pc: 146 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_13513
    DeRef(_m_13513);
    _7371 = NOVALUE;
    return 1;
    // SubProg map pc: 150 op: BADRETURNF (43)
    ;
}


object _33new_map_seq(object _size_13544)
{
    object _slots_13545 = NOVALUE;
    object _7395 = NOVALUE; // 13558 7395
    object _7394 = NOVALUE; // 13557 7394
    object _7393 = NOVALUE; // 13556 7393
    object _7392 = NOVALUE; // 13555 7392
// skipping _7391  name type: 0
// skipping _7390  name type: 0
// skipping _7389  name type: 0
    object _7388 = NOVALUE; // 13550 7388
// skipping _7387  name type: 0
// skipping _7386  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_map_seq pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_map_seq pc: 3 op: STARTLINE (58)

    /** map.e:155		integer slots = DEFAULT_SIZE * 2*/
    // SubProg new_map_seq pc: 5 op: PLUS_I (115)
    _slots_13545 = 16;
    // SubProg new_map_seq pc: 9 op: STARTLINE (58)

    /** map.e:156		if size <= DEFAULT_SIZE then*/
    // SubProg new_map_seq pc: 11 op: LESSEQ_IFW_I (123)
    if (_size_13544 > 8)
    goto L1; // [11] 23
    // SubProg new_map_seq pc: 15 op: STARTLINE (58)

    /** map.e:157			size = DEFAULT_SIZE*/
    // SubProg new_map_seq pc: 17 op: ASSIGN_I (113)
    _size_13544 = 8;
    // SubProg new_map_seq pc: 20 op: ELSE (23)
    goto L2; // [20] 55
    // SubProg new_map_seq pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 13542 op: 159
    // SubProg new_map_seq pc: 23 op: STARTLINE (58)

    /** map.e:159			size = floor( size * 1.5 )*/
    // SubProg new_map_seq pc: 25 op: MULTIPLY (13)
    _7388 = NewDouble((eudouble)_size_13544 * DBL_PTR(_2741)->dbl);
    // SubProg new_map_seq pc: 29 op: FLOOR (83)
    _size_13544 = unary_op(FLOOR, _7388);
    DeRefDS(_7388);
    _7388 = NOVALUE;
    // SubProg new_map_seq pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_size_13544)) {
        _1 = (object)(DBL_PTR(_size_13544)->dbl);
        DeRefDS(_size_13544);
        _size_13544 = _1;
    }
    // SubProg new_map_seq pc: 34 op: STARTLINE (58)

    /** map.e:160			while slots < size do*/
    // SubProg new_map_seq pc: 36 op: NOP2 (110)
    // SubProg new_map_seq pc: 38 op: NOPWHILE (158)
L3: // addr: 39 pc: 38 sub: 13542 op: 158
    // SubProg new_map_seq pc: 39 op: LESS_IFW_I (119)
    if (_slots_13545 >= _size_13544)
    goto L4; // [39] 54
    // SubProg new_map_seq pc: 43 op: STARTLINE (58)

    /** map.e:162				slots *= 2*/
    // SubProg new_map_seq pc: 45 op: PLUS_I (115)
    _slots_13545 = _slots_13545 + _slots_13545;
    // SubProg new_map_seq pc: 49 op: STARTLINE (58)

    /** map.e:163			end while*/
    // SubProg new_map_seq pc: 51 op: ENDWHILE (22)
    goto L3; // [51] 39
    // SubProg new_map_seq pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 13542 op: 159
    // SubProg new_map_seq pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 13542 op: 159
    // SubProg new_map_seq pc: 55 op: STARTLINE (58)

    /** map.e:165		return { 0, repeat( EMPTY_SLOT, slots ), floor( size * 2/3 ) }*/
    // SubProg new_map_seq pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_map_seq pc: 59 op: REPEAT (32)
    _7392 = Repeat(_33EMPTY_SLOT_13501, _slots_13545);
    // SubProg new_map_seq pc: 63 op: PLUS (11)
    _7393 = _size_13544 + _size_13544;
    if ((object)((uintptr_t)_7393 + (uintptr_t)HIGH_BITS) >= 0){
        _7393 = NewDouble((eudouble)_7393);
    }
    // SubProg new_map_seq pc: 67 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_7393)) {
        if (3 > 0 && _7393 >= 0) {
            _7394 = _7393 / 3;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_7393 / (eudouble)3);
            if (_7393 != MININT)
            _7394 = (object)temp_dbl;
            else
            _7394 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _7393, 3);
        _7394 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    DeRef(_7393);
    _7393 = NOVALUE;
    // SubProg new_map_seq pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = _7392;
    ((intptr_t*)_2)[3] = _7394;
    _7395 = MAKE_SEQ(_1);
    _7394 = NOVALUE;
    _7392 = NOVALUE;
    // SubProg new_map_seq pc: 77 op: RETURNF (28)

// Exiting block BLOCK: new_map_seq

// block var size_13544

// block var slots_13545
    return _7395;
    // SubProg new_map_seq pc: 81 op: BADRETURNF (43)
    ;
}


object _33new(object _initial_size_p_13582)
{
    object _7402 = NOVALUE; // 13584 7402
    object _7401 = NOVALUE; // 13583 7401
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_initial_size_p_13582)) {
        _1 = (object)(DBL_PTR(_initial_size_p_13582)->dbl);
        DeRefDS(_initial_size_p_13582);
        _initial_size_p_13582 = _1;
    }
    // SubProg new pc: 3 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new pc: 5 op: PROC (27)
    _7401 = _33new_map_seq(_initial_size_p_13582);
    // SubProg new pc: 9 op: PROC (27)
    _7402 = _34malloc(_7401, 1);
    _7401 = NOVALUE;
    // SubProg new pc: 14 op: RETURNF (28)

// Exiting block BLOCK: new

// block var initial_size_p_13582
    return _7402;
    // SubProg new pc: 18 op: BADRETURNF (43)
    ;
}


object _33lookup(object _key_13587, object _hashval_13588, object _slots_13590)
{
    object _mask_13591 = NOVALUE;
    object _index_13594 = NOVALUE;
    object _index_hash_13597 = NOVALUE;
    object _slot_13598 = NOVALUE;
    object _perturb_13599 = NOVALUE;
    object _this_hash_13600 = NOVALUE;
    object _this_key_13601 = NOVALUE;
    object _looks_13602 = NOVALUE;
    object _removed_slot_13603 = NOVALUE;
// skipping _7427  name type: 0
// skipping _7426  name type: 0
// skipping _7425  name type: 0
// skipping _7424  name type: 0
    object _7423 = NOVALUE; // 13622 7423
// skipping _7422  name type: 0
// skipping _7421  name type: 0
// skipping _7420  name type: 0
// skipping _7419  name type: 0
// skipping _7418  name type: 0
// skipping _7417  name type: 0
// skipping _7416  name type: 0
// skipping _7415  name type: 0
// skipping _7414  name type: 0
// skipping _7413  name type: 0
// skipping _7412  name type: 0
    object _7411 = NOVALUE; // 13608 7411
    object _7410 = NOVALUE; // 13607 7410
    object _7409 = NOVALUE; // 13606 7409
    object _7408 = NOVALUE; // 13605 7408
// skipping _7407  name type: 0
    object _7406 = NOVALUE; // 13595 7406
// skipping _7405  name type: 0
    object _7404 = NOVALUE; // 13592 7404
// skipping _7403  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lookup pc: 1 op: INTEGER_CHECK (96)
    // SubProg lookup pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg lookup pc: 5 op: STARTLINE (58)

    /** map.e:275		integer mask = length( slots ) - 1*/
    // SubProg lookup pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_13590)){
            _7404 = SEQ_PTR(_slots_13590)->length;
    }
    else {
        _7404 = 1;
    }
    // SubProg lookup pc: 10 op: MINUS_I (116)
    _mask_13591 = _7404 - 1;
    _7404 = NOVALUE;
    // SubProg lookup pc: 14 op: STARTLINE (58)

    /** map.e:276		integer index = and_bits( hashval, mask ) + 1*/
    // SubProg lookup pc: 16 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_hashval_13588 & (uintptr_t)_mask_13591;
         _7406 = MAKE_UINT(tu);
    }
    // SubProg lookup pc: 20 op: PLUS1_I (117)
    if (IS_ATOM_INT(_7406)) {
        _index_13594 = _7406 + 1;
    }
    else
    { // coercing _index_13594 to an integer 1
        _index_13594 = 1+(object)(DBL_PTR(_7406)->dbl);
        if( !IS_ATOM_INT(_index_13594) ){
            _index_13594 = (object)DBL_PTR(_index_13594)->dbl;
        }
    }
    DeRef(_7406);
    _7406 = NOVALUE;
    // SubProg lookup pc: 24 op: STARTLINE (58)

    /** map.e:277		ifdef BITS64 then*/
    // SubProg lookup pc: 26 op: STARTLINE (58)

    /** map.e:280			atom index_hash = index*/
    // SubProg lookup pc: 28 op: ASSIGN (18)
    DeRef(_index_hash_13597);
    _index_hash_13597 = _index_13594;
    // SubProg lookup pc: 31 op: STARTLINE (58)

    /** map.e:282		sequence slot*/
    // SubProg lookup pc: 33 op: STARTLINE (58)

    /** map.e:284		integer perturb = hashval*/
    // SubProg lookup pc: 35 op: ASSIGN_I (113)
    _perturb_13599 = _hashval_13588;
    // SubProg lookup pc: 38 op: STARTLINE (58)

    /** map.e:285		integer this_hash*/
    // SubProg lookup pc: 40 op: STARTLINE (58)

    /** map.e:286		object this_key*/
    // SubProg lookup pc: 42 op: STARTLINE (58)

    /** map.e:287		integer looks = 0*/
    // SubProg lookup pc: 44 op: ASSIGN_I (113)
    _looks_13602 = 0;
    // SubProg lookup pc: 47 op: STARTLINE (58)

    /** map.e:288		integer removed_slot = 0*/
    // SubProg lookup pc: 49 op: ASSIGN_I (113)
    _removed_slot_13603 = 0;
    // SubProg lookup pc: 52 op: STARTLINE (58)

    /** map.e:289		while this_hash != hashval or not equal( this_key, key ) with entry do*/
    // SubProg lookup pc: 54 op: ELSE (23)
    goto L1; // [54] 140
    // SubProg lookup pc: 56 op: NOPWHILE (158)
L2: // addr: 57 pc: 56 sub: 13585 op: 158
    // SubProg lookup pc: 57 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 59 op: NOTEQ (4)
    _7408 = (_this_hash_13600 != _hashval_13588);
    // SubProg lookup pc: 63 op: SC1_OR (143)
    if (_7408 != 0) {
        DeRef(_7409);
        _7409 = 1;
        goto L3; // [63] 80
    }
    // SubProg lookup pc: 67 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 69 op: EQUAL (153)
    if (_this_key_13601 == _key_13587)
    _7410 = 1;
    else if (IS_ATOM_INT(_this_key_13601) && IS_ATOM_INT(_key_13587))
    _7410 = 0;
    else
    _7410 = (compare(_this_key_13601, _key_13587) == 0);
    // SubProg lookup pc: 73 op: NOT (7)
    _7411 = (_7410 == 0);
    _7410 = NOVALUE;
    // SubProg lookup pc: 76 op: SC2_OR (144)
    _7409 = (_7411 != 0);
    // SubProg lookup pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 13585 op: 159
    // SubProg lookup pc: 80 op: WHILE (47)
    if (_7409 == 0)
    {
        _7409 = NOVALUE;
        goto L4; // [80] 217
    }
    else{
        _7409 = NOVALUE;
    }
    // SubProg lookup pc: 83 op: STARTLINE (58)

    /** map.e:290			index_hash *= 4*/
    // SubProg lookup pc: 85 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 87 op: MULTIPLY (13)
    _0 = _index_hash_13597;
    if (IS_ATOM_INT(_index_hash_13597)) {
        if (_index_hash_13597 == (short)_index_hash_13597){
            _index_hash_13597 = _index_hash_13597 * 4;
        }
        else{
            _index_hash_13597 = NewDouble(_index_hash_13597 * (eudouble)4);
        }
    }
    else {
        _index_hash_13597 = NewDouble(DBL_PTR(_index_hash_13597)->dbl * (eudouble)4);
    }
    DeRef(_0);
    // SubProg lookup pc: 91 op: STARTLINE (58)

    /** map.e:291			index_hash += index*/
    // SubProg lookup pc: 93 op: PLUS (11)
    _0 = _index_hash_13597;
    if (IS_ATOM_INT(_index_hash_13597)) {
        _index_hash_13597 = _index_hash_13597 + _index_13594;
        if ((object)((uintptr_t)_index_hash_13597 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_13597 = NewDouble((eudouble)_index_hash_13597);
        }
    }
    else {
        _index_hash_13597 = NewDouble(DBL_PTR(_index_hash_13597)->dbl + (eudouble)_index_13594);
    }
    DeRef(_0);
    // SubProg lookup pc: 97 op: STARTLINE (58)

    /** map.e:292			index_hash += perturb*/
    // SubProg lookup pc: 99 op: PLUS (11)
    _0 = _index_hash_13597;
    if (IS_ATOM_INT(_index_hash_13597)) {
        _index_hash_13597 = _index_hash_13597 + _perturb_13599;
        if ((object)((uintptr_t)_index_hash_13597 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_13597 = NewDouble((eudouble)_index_hash_13597);
        }
    }
    else {
        _index_hash_13597 = NewDouble(DBL_PTR(_index_hash_13597)->dbl + (eudouble)_perturb_13599);
    }
    DeRef(_0);
    // SubProg lookup pc: 103 op: STARTLINE (58)

    /** map.e:293			index_hash += 1*/
    // SubProg lookup pc: 105 op: PLUS1 (93)
    _0 = _index_hash_13597;
    if (IS_ATOM_INT(_index_hash_13597)) {
        _index_hash_13597 = _index_hash_13597 + 1;
        if (_index_hash_13597 > MAXINT){
            _index_hash_13597 = NewDouble((eudouble)_index_hash_13597);
        }
    }
    else
    _index_hash_13597 = binary_op(PLUS, 1, _index_hash_13597);
    DeRef(_0);
    // SubProg lookup pc: 109 op: STARTLINE (58)

    /** map.e:294			index_hash = and_bits( 0xffff_ffff, index_hash )*/
    // SubProg lookup pc: 111 op: AND_BITS (56)
    _0 = _index_hash_13597;
    if (IS_ATOM_INT(_index_hash_13597)) {
        temp_d.dbl = (eudouble)_index_hash_13597;
        _index_hash_13597 = Dand_bits(DBL_PTR(_464), &temp_d);
    }
    else
    _index_hash_13597 = Dand_bits(DBL_PTR(_464), DBL_PTR(_index_hash_13597));
    DeRef(_0);
    // SubProg lookup pc: 115 op: STARTLINE (58)

    /** map.e:295			index = and_bits( mask, index_hash )*/
    // SubProg lookup pc: 117 op: AND_BITS (56)
    if (IS_ATOM_INT(_index_hash_13597)) {
        {uintptr_t tu;
             tu = (uintptr_t)_mask_13591 & (uintptr_t)_index_hash_13597;
             _index_13594 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_mask_13591;
        _index_13594 = Dand_bits(&temp_d, DBL_PTR(_index_hash_13597));
    }
    // SubProg lookup pc: 121 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_13594)) {
        _1 = (object)(DBL_PTR(_index_13594)->dbl);
        DeRefDS(_index_13594);
        _index_13594 = _1;
    }
    // SubProg lookup pc: 123 op: STARTLINE (58)

    /** map.e:296			index += 1*/
    // SubProg lookup pc: 125 op: PLUS1_I (117)
    _index_13594 = _index_13594 + 1;
    // SubProg lookup pc: 129 op: STARTLINE (58)

    /** map.e:297			perturb = floor( perturb / 32 )*/
    // SubProg lookup pc: 131 op: FLOOR_DIV (63)
    if (32 > 0 && _perturb_13599 >= 0) {
        _perturb_13599 = _perturb_13599 / 32;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_perturb_13599 / (eudouble)32);
        _perturb_13599 = (object)temp_dbl;
    }
    // SubProg lookup pc: 137 op: STARTLINE (58)

    /** map.e:298		entry*/
    // SubProg lookup pc: 139 op: NOP1 (159)
L1: // addr: 140 pc: 139 sub: 13585 op: 159
    // SubProg lookup pc: 140 op: STARTLINE (58)

    /** map.e:299			slot = slots[index]*/
    // SubProg lookup pc: 142 op: RHS_SUBS (25)
    DeRef(_slot_13598);
    _2 = (object)SEQ_PTR(_slots_13590);
    _slot_13598 = (object)*(((s1_ptr)_2)->base + _index_13594);
    Ref(_slot_13598);
    // SubProg lookup pc: 146 op: SEQUENCE_CHECK (97)
    // SubProg lookup pc: 148 op: STARTLINE (58)

    /** map.e:300			this_hash = slot[SLOT_HASH]*/
    // SubProg lookup pc: 150 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_slot_13598);
    _this_hash_13600 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_this_hash_13600))
    _this_hash_13600 = (object)DBL_PTR(_this_hash_13600)->dbl;
    // SubProg lookup pc: 154 op: STARTLINE (58)

    /** map.e:301			if this_hash = EMPTY then*/
    // SubProg lookup pc: 156 op: EQUALS_IFW_I (121)
    if (_this_hash_13600 != -2)
    goto L5; // [156] 169
    // SubProg lookup pc: 160 op: STARTLINE (58)

    /** map.e:302				return index*/
    // SubProg lookup pc: 162 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_13587
    DeRef(_key_13587);

// block var hashval_13588

// block var slots_13590
    DeRefDS(_slots_13590);

// block var mask_13591

// block var index_hash_13597
    DeRef(_index_hash_13597);

// block var slot_13598
    DeRefDS(_slot_13598);

// block var perturb_13599

// block var this_hash_13600

// block var this_key_13601
    DeRef(_this_key_13601);

// block var looks_13602

// block var removed_slot_13603
    DeRef(_7411);
    _7411 = NOVALUE;
    DeRef(_7408);
    _7408 = NOVALUE;
    return _index_13594;
    // SubProg lookup pc: 166 op: ELSE (23)
    goto L6; // [166] 200
    // SubProg lookup pc: 168 op: NOP1 (159)
L5: // addr: 169 pc: 168 sub: 13585 op: 159
    // SubProg lookup pc: 169 op: STARTLINE (58)

    /** map.e:303			elsif looks > length( slots ) then*/
    // SubProg lookup pc: 171 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_13590)){
            _7423 = SEQ_PTR(_slots_13590)->length;
    }
    else {
        _7423 = 1;
    }
    // SubProg lookup pc: 174 op: GREATER_IFW_I (124)
    if (_looks_13602 <= _7423)
    goto L7; // [174] 187
    // SubProg lookup pc: 178 op: STARTLINE (58)

    /** map.e:304				return removed_slot*/
    // SubProg lookup pc: 180 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_13587
    DeRef(_key_13587);

// block var hashval_13588

// block var slots_13590
    DeRefDS(_slots_13590);

// block var mask_13591

// block var index_13594

// block var index_hash_13597
    DeRef(_index_hash_13597);

// block var slot_13598
    DeRef(_slot_13598);

// block var perturb_13599

// block var this_hash_13600

// block var this_key_13601
    DeRef(_this_key_13601);

// block var looks_13602
    DeRef(_7411);
    _7411 = NOVALUE;
    DeRef(_7408);
    _7408 = NOVALUE;
    return _removed_slot_13603;
    // SubProg lookup pc: 184 op: ELSE (23)
    goto L6; // [184] 200
    // SubProg lookup pc: 186 op: NOP1 (159)
L7: // addr: 187 pc: 186 sub: 13585 op: 159
    // SubProg lookup pc: 187 op: STARTLINE (58)

    /** map.e:305			elsif this_hash = REMOVED then*/
    // SubProg lookup pc: 189 op: EQUALS_IFW_I (121)
    if (_this_hash_13600 != -1)
    goto L8; // [189] 199
    // SubProg lookup pc: 193 op: STARTLINE (58)

    /** map.e:306				removed_slot = index*/
    // SubProg lookup pc: 195 op: ASSIGN_I (113)
    _removed_slot_13603 = _index_13594;
    // SubProg lookup pc: 198 op: NOP1 (159)
L8: // addr: 199 pc: 198 sub: 13585 op: 159
    // SubProg lookup pc: 199 op: NOP1 (159)
L6: // addr: 200 pc: 199 sub: 13585 op: 159
    // SubProg lookup pc: 200 op: STARTLINE (58)

    /** map.e:308			this_key = slot[SLOT_KEY]*/
    // SubProg lookup pc: 202 op: RHS_SUBS (25)
    DeRef(_this_key_13601);
    _2 = (object)SEQ_PTR(_slot_13598);
    _this_key_13601 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_this_key_13601);
    // SubProg lookup pc: 206 op: STARTLINE (58)

    /** map.e:309			looks += 1*/
    // SubProg lookup pc: 208 op: PLUS1_I (117)
    _looks_13602 = _looks_13602 + 1;
    // SubProg lookup pc: 212 op: STARTLINE (58)

    /** map.e:310		end while*/
    // SubProg lookup pc: 214 op: ENDWHILE (22)
    goto L2; // [214] 57
    // SubProg lookup pc: 216 op: NOP1 (159)
L4: // addr: 217 pc: 216 sub: 13585 op: 159
    // SubProg lookup pc: 217 op: STARTLINE (58)

    /** map.e:311		return index*/
    // SubProg lookup pc: 219 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_13587
    DeRef(_key_13587);

// block var hashval_13588

// block var slots_13590
    DeRefDS(_slots_13590);

// block var mask_13591

// block var index_hash_13597
    DeRef(_index_hash_13597);

// block var slot_13598
    DeRef(_slot_13598);

// block var perturb_13599

// block var this_hash_13600

// block var this_key_13601
    DeRef(_this_key_13601);

// block var looks_13602

// block var removed_slot_13603
    DeRef(_7411);
    _7411 = NOVALUE;
    DeRef(_7408);
    _7408 = NOVALUE;
    return _index_13594;
    // SubProg lookup pc: 223 op: BADRETURNF (43)
    ;
}


object _33rehash_seq(object _old_map_13630, object _size_13631)
{
    object _old_size_13632 = NOVALUE;
    object _index_13634 = NOVALUE;
    object _new_map_13647 = NOVALUE;
    object _slots_13649 = NOVALUE;
    object _old_slots_13652 = NOVALUE;
    object _old_slot_13657 = NOVALUE;
    object _old_hash_13659 = NOVALUE;
// skipping _7445  name type: 0
    object _7444 = NOVALUE; // 13663 7444
// skipping _7443  name type: 0
// skipping _7442  name type: 0
// skipping _7441  name type: 0
    object _7440 = NOVALUE; // 13656 7440
// skipping _7439  name type: 0
    object _7438 = NOVALUE; // 13651 7438
// skipping _7437  name type: 0
// skipping _7436  name type: 0
// skipping _7435  name type: 0
// skipping _7434  name type: 0
// skipping _7433  name type: 0
// skipping _7432  name type: 0
// skipping _7431  name type: 0
// skipping _7429  name type: 0
// skipping _7428  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rehash_seq pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 3 op: INTEGER_CHECK (96)
    // SubProg rehash_seq pc: 5 op: STARTLINE (58)

    /** map.e:316		integer old_size = old_map[MAP_SIZE]*/
    // SubProg rehash_seq pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_old_map_13630);
    _old_size_13632 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_size_13632))
    _old_size_13632 = (object)DBL_PTR(_old_size_13632)->dbl;
    // SubProg rehash_seq pc: 11 op: STARTLINE (58)

    /** map.e:319		if size = 0 then*/
    // SubProg rehash_seq pc: 13 op: EQUALS_IFW_I (121)
    // SubProg rehash_seq pc: 17 op: STARTLINE (58)

    /** map.e:320			if old_size > 50_000 then*/
    // SubProg rehash_seq pc: 19 op: GREATER_IFW_I (124)
    if (_old_size_13632 <= 50000)
    goto L1; // [19] 32
    // SubProg rehash_seq pc: 23 op: STARTLINE (58)

    /** map.e:321				size = old_size * 2*/
    // SubProg rehash_seq pc: 25 op: PLUS_I (115)
    _size_13631 = _old_size_13632 + _old_size_13632;
    // SubProg rehash_seq pc: 29 op: ELSE (23)
    goto L2; // [29] 69
    // SubProg rehash_seq pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 13628 op: 159
    // SubProg rehash_seq pc: 32 op: STARTLINE (58)

    /** map.e:323				size = old_size * 4*/
    // SubProg rehash_seq pc: 34 op: MULTIPLY (13)
    _size_13631 = _old_size_13632 * 4;
    // SubProg rehash_seq pc: 40 op: NOP1 (159)
    // SubProg rehash_seq pc: 41 op: ELSE (23)
    goto L2; // [41] 69
    // SubProg rehash_seq pc: 43 op: NOP1 (159)
    // SubProg rehash_seq pc: 44 op: STARTLINE (58)

    /** map.e:325		elsif size < old_size then*/
    // SubProg rehash_seq pc: 46 op: LESS_IFW_I (119)
    if (_size_13631 >= _old_size_13632)
    goto L3; // [46] 68
    // SubProg rehash_seq pc: 50 op: STARTLINE (58)

    /** map.e:326			size = old_size*/
    // SubProg rehash_seq pc: 52 op: ASSIGN_I (113)
    _size_13631 = _old_size_13632;
    // SubProg rehash_seq pc: 55 op: STARTLINE (58)

    /** map.e:327			if size < DEFAULT_SIZE then*/
    // SubProg rehash_seq pc: 57 op: LESS_IFW_I (119)
    if (_size_13631 >= 8)
    goto L4; // [57] 67
    // SubProg rehash_seq pc: 61 op: STARTLINE (58)

    /** map.e:328				size = DEFAULT_SIZE*/
    // SubProg rehash_seq pc: 63 op: ASSIGN_I (113)
    _size_13631 = 8;
    // SubProg rehash_seq pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 13628 op: 159
    // SubProg rehash_seq pc: 67 op: NOP1 (159)
L3: // addr: 68 pc: 67 sub: 13628 op: 159
    // SubProg rehash_seq pc: 68 op: NOP1 (159)
L2: // addr: 69 pc: 68 sub: 13628 op: 159
    // SubProg rehash_seq pc: 69 op: STARTLINE (58)

    /** map.e:332		sequence new_map = new_map_seq( size )*/
    // SubProg rehash_seq pc: 71 op: PROC (27)
    _0 = _new_map_13647;
    _new_map_13647 = _33new_map_seq(_size_13631);
    DeRef(_0);
    // SubProg rehash_seq pc: 75 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 77 op: STARTLINE (58)

    /** map.e:333		sequence slots = new_map[MAP_SLOTS]*/
    // SubProg rehash_seq pc: 79 op: RHS_SUBS (25)
    DeRef(_slots_13649);
    _2 = (object)SEQ_PTR(_new_map_13647);
    _slots_13649 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_13649);
    // SubProg rehash_seq pc: 83 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 85 op: STARTLINE (58)

    /** map.e:334		new_map[MAP_SLOTS] = 0*/
    // SubProg rehash_seq pc: 87 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_map_13647);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_13647 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg rehash_seq pc: 91 op: STARTLINE (58)

    /** map.e:335		new_map[MAP_SIZE] = old_map[MAP_SIZE]*/
    // SubProg rehash_seq pc: 93 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_map_13630);
    _7438 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg rehash_seq pc: 97 op: ASSIGN_SUBS (16)
    Ref(_7438);
    _2 = (object)SEQ_PTR(_new_map_13647);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_13647 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7438;
    if( _1 != _7438 ){
        DeRef(_1);
    }
    _7438 = NOVALUE;
    // SubProg rehash_seq pc: 101 op: STARTLINE (58)

    /** map.e:337		sequence old_slots = old_map[MAP_SLOTS]*/
    // SubProg rehash_seq pc: 103 op: RHS_SUBS (25)
    DeRef(_old_slots_13652);
    _2 = (object)SEQ_PTR(_old_map_13630);
    _old_slots_13652 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_old_slots_13652);
    // SubProg rehash_seq pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 109 op: STARTLINE (58)

    /** map.e:338		for i = 1 to length( old_slots ) do*/
    // SubProg rehash_seq pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_old_slots_13652)){
            _7440 = SEQ_PTR(_old_slots_13652)->length;
    }
    else {
        _7440 = 1;
    }
    // SubProg rehash_seq pc: 114 op: FOR_I (125)
    {
        object _i_13655;
        _i_13655 = 1;
L5: // addr: 121 pc: 114 sub: 13628 op: 125
        if (_i_13655 > _7440){
            goto L6; // [114] 171
        }
        // SubProg rehash_seq pc: 121 op: STARTLINE (58)

        /** map.e:339			sequence old_slot = old_slots[i]*/
        // SubProg rehash_seq pc: 123 op: RHS_SUBS (25)
        DeRef(_old_slot_13657);
        _2 = (object)SEQ_PTR(_old_slots_13652);
        _old_slot_13657 = (object)*(((s1_ptr)_2)->base + _i_13655);
        Ref(_old_slot_13657);
        // SubProg rehash_seq pc: 127 op: SEQUENCE_CHECK (97)
        // SubProg rehash_seq pc: 129 op: STARTLINE (58)

        /** map.e:340			integer old_hash = old_slot[SLOT_HASH]*/
        // SubProg rehash_seq pc: 131 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_old_slot_13657);
        _old_hash_13659 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_old_hash_13659))
        _old_hash_13659 = (object)DBL_PTR(_old_hash_13659)->dbl;
        // SubProg rehash_seq pc: 135 op: STARTLINE (58)

        /** map.e:341			if old_hash != -1 then*/
        // SubProg rehash_seq pc: 137 op: NOTEQ_IFW_I (122)
        if (_old_hash_13659 == -1)
        goto L7; // [137] 162
        // SubProg rehash_seq pc: 141 op: STARTLINE (58)

        /** map.e:342				index = lookup( old_slot[SLOT_KEY], old_hash, slots )*/
        // SubProg rehash_seq pc: 143 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_old_slot_13657);
        _7444 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg rehash_seq pc: 147 op: PROC (27)
        Ref(_7444);
        RefDS(_slots_13649);
        _index_13634 = _33lookup(_7444, _old_hash_13659, _slots_13649);
        _7444 = NOVALUE;
        // SubProg rehash_seq pc: 153 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_index_13634)) {
            _1 = (object)(DBL_PTR(_index_13634)->dbl);
            DeRefDS(_index_13634);
            _index_13634 = _1;
        }
        // SubProg rehash_seq pc: 155 op: STARTLINE (58)

        /** map.e:343				slots[index] = old_slot*/
        // SubProg rehash_seq pc: 157 op: ASSIGN_SUBS (16)
        RefDS(_old_slot_13657);
        _2 = (object)SEQ_PTR(_slots_13649);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13649 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13634);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _old_slot_13657;
        DeRef(_1);
        // SubProg rehash_seq pc: 161 op: NOP1 (159)
L7: // addr: 162 pc: 161 sub: 13628 op: 159
        // SubProg rehash_seq pc: 162 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var old_slot_13657
        DeRef(_old_slot_13657);
        _old_slot_13657 = NOVALUE;

// block var old_hash_13659
        // SubProg rehash_seq pc: 164 op: STARTLINE (58)

        /** map.e:345		end for*/
        // SubProg rehash_seq pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_13655 = _i_13655 + 1;
        goto L5; // [166] 121
L6: // addr: 171 pc: 166 sub: 13628 op: 54
        ;
    }
    // SubProg rehash_seq pc: 171 op: STARTLINE (58)

    /** map.e:346		new_map[MAP_SLOTS] = slots*/
    // SubProg rehash_seq pc: 173 op: ASSIGN_SUBS (16)
    RefDS(_slots_13649);
    _2 = (object)SEQ_PTR(_new_map_13647);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_13647 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_13649;
    DeRef(_1);
    // SubProg rehash_seq pc: 177 op: STARTLINE (58)

    /** map.e:347		return new_map*/
    // SubProg rehash_seq pc: 179 op: RETURNF (28)

// Exiting block BLOCK: rehash_seq

// block var old_map_13630
    DeRefDS(_old_map_13630);

// block var size_13631

// block var old_size_13632

// block var index_13634

// block var slots_13649
    DeRefDS(_slots_13649);

// block var old_slots_13652
    DeRef(_old_slots_13652);
    return _new_map_13647;
    // SubProg rehash_seq pc: 183 op: BADRETURNF (43)
    ;
}


object _33new_extra(object _the_map_p_13667, object _initial_size_p_13668)
{
    object _new_1__tmp_at22_13674 = NOVALUE;
    object _new_inlined_new_at_22_13673 = NOVALUE;
    object _7446 = NOVALUE; // 13670 7446
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_extra pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_extra pc: 3 op: STARTLINE (58)

    /** map.e:376		if map(the_map_p) then*/
    // SubProg new_extra pc: 5 op: PROC (27)
    Ref(_the_map_p_13667);
    _7446 = _33map(_the_map_p_13667);
    // SubProg new_extra pc: 9 op: IF (20)
    if (_7446 == 0) {
        DeRef(_7446);
        _7446 = NOVALUE;
        goto L1; // [9] 21
    }
    else {
        if (!IS_ATOM_INT(_7446) && DBL_PTR(_7446)->dbl == 0.0){
            DeRef(_7446);
            _7446 = NOVALUE;
            goto L1; // [9] 21
        }
        DeRef(_7446);
        _7446 = NOVALUE;
    }
    DeRef(_7446);
    _7446 = NOVALUE;
    // SubProg new_extra pc: 12 op: STARTLINE (58)

    /** map.e:377			return the_map_p*/
    // SubProg new_extra pc: 14 op: RETURNF (28)

// Exiting block BLOCK: new_extra

// block var initial_size_p_13668
    return _the_map_p_13667;
    // SubProg new_extra pc: 18 op: ELSE (23)
    goto L2; // [18] 42
    // SubProg new_extra pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 13665 op: 159
    // SubProg new_extra pc: 21 op: STARTLINE (58)

    /** map.e:379			return new(initial_size_p)*/
    // SubProg new_extra pc: 23 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new_extra pc: 25 op: PROC (27)
    _0 = _new_1__tmp_at22_13674;
    _new_1__tmp_at22_13674 = _33new_map_seq(_initial_size_p_13668);
    DeRef(_0);
    // SubProg new_extra pc: 29 op: PROC (27)
    Ref(_new_1__tmp_at22_13674);
    _0 = _new_inlined_new_at_22_13673;
    _new_inlined_new_at_22_13673 = _34malloc(_new_1__tmp_at22_13674, 1);
    DeRef(_0);
    // SubProg new_extra pc: 34 op: NOP1 (159)
    // SubProg new_extra pc: 35 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from new_extra @ 22

// block var new_1__tmp_at22_13674
    DeRef(_new_1__tmp_at22_13674);
    _new_1__tmp_at22_13674 = NOVALUE;
    // SubProg new_extra pc: 37 op: RETURNF (28)

// Exiting block BLOCK: new_extra

// block var the_map_p_13667
    DeRef(_the_map_p_13667);

// block var initial_size_p_13668
    return _new_inlined_new_at_22_13673;
    // SubProg new_extra pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 13665 op: 159
    // SubProg new_extra pc: 42 op: BADRETURNF (43)
    ;
}


object _33has(object _the_map_p_13707, object _key_13708)
{
    object _hashval_13709 = NOVALUE;
    object _hash_inlined_hash_at_2_13711 = NOVALUE;
    object _slots_13712 = NOVALUE;
    object _index_13715 = NOVALUE;
    object _7464 = NOVALUE; // 13719 7464
    object _7463 = NOVALUE; // 13718 7463
    object _7462 = NOVALUE; // 13717 7462
// skipping _7461  name type: 0
// skipping _7460  name type: 0
    object _7459 = NOVALUE; // 13713 7459
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has pc: 1 op: STARTLINE (58)

    /** map.e:464		integer hashval = hash( key )*/
    // SubProg has pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg has pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg has pc: 7 op: HASH (194)
    _hashval_13709 = calc_hash(_key_13708, -6);
    // SubProg has pc: 11 op: NOP1 (159)
    // SubProg has pc: 12 op: STARTLINE (58)

    /** map.e:465		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg has pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg has pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_p_13707)){
        _7459 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_13707)->dbl));
    }
    else{
        _7459 = (object)*(((s1_ptr)_2)->base + _the_map_p_13707);
    }
    // SubProg has pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_13712);
    _2 = (object)SEQ_PTR(_7459);
    _slots_13712 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_13712);
    _7459 = NOVALUE;
    // SubProg has pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg has pc: 26 op: STARTLINE (58)

    /** map.e:466		integer index = lookup( key, hashval, slots )*/
    // SubProg has pc: 28 op: PROC (27)
    Ref(_key_13708);
    RefDS(_slots_13712);
    _index_13715 = _33lookup(_key_13708, _hashval_13709, _slots_13712);
    // SubProg has pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_13715)) {
        _1 = (object)(DBL_PTR(_index_13715)->dbl);
        DeRefDS(_index_13715);
        _index_13715 = _1;
    }
    // SubProg has pc: 36 op: STARTLINE (58)

    /** map.e:468		return hashval = slots[index][SLOT_HASH]*/
    // SubProg has pc: 38 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_13712);
    _7462 = (object)*(((s1_ptr)_2)->base + _index_13715);
    // SubProg has pc: 42 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7462);
    _7463 = (object)*(((s1_ptr)_2)->base + 1);
    _7462 = NOVALUE;
    // SubProg has pc: 46 op: EQUALS (3)
    if (IS_ATOM_INT(_7463)) {
        _7464 = (_hashval_13709 == _7463);
    }
    else {
        _7464 = binary_op(EQUALS, _hashval_13709, _7463);
    }
    _7463 = NOVALUE;
    // SubProg has pc: 50 op: RETURNF (28)

// Exiting block BLOCK: has

// block var the_map_p_13707
    DeRef(_the_map_p_13707);

// block var key_13708
    DeRef(_key_13708);

// block var hashval_13709

// block var slots_13712
    DeRefDS(_slots_13712);

// block var index_13715
    return _7464;
    // SubProg has pc: 54 op: BADRETURNF (43)
    ;
}


object _33get(object _the_map_p_13722, object _key_13723, object _default_13724)
{
    object _hashval_13725 = NOVALUE;
    object _hash_inlined_hash_at_2_13727 = NOVALUE;
    object _slots_13728 = NOVALUE;
    object _index_13731 = NOVALUE;
    object _slot_13733 = NOVALUE;
    object _7471 = NOVALUE; // 13738 7471
// skipping _7470  name type: 0
    object _7469 = NOVALUE; // 13736 7469
// skipping _7468  name type: 0
// skipping _7467  name type: 0
// skipping _7466  name type: 0
    object _7465 = NOVALUE; // 13729 7465
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get pc: 1 op: STARTLINE (58)

    /** map.e:505		integer hashval = hash( key )*/
    // SubProg get pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg get pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get pc: 7 op: HASH (194)
    _hashval_13725 = calc_hash(_key_13723, -6);
    // SubProg get pc: 11 op: NOP1 (159)
    // SubProg get pc: 12 op: STARTLINE (58)

    /** map.e:506		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg get pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg get pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_p_13722)){
        _7465 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_13722)->dbl));
    }
    else{
        _7465 = (object)*(((s1_ptr)_2)->base + _the_map_p_13722);
    }
    // SubProg get pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_13728);
    _2 = (object)SEQ_PTR(_7465);
    _slots_13728 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_13728);
    _7465 = NOVALUE;
    // SubProg get pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg get pc: 26 op: STARTLINE (58)

    /** map.e:507		integer index = lookup( key, hashval, slots )*/
    // SubProg get pc: 28 op: PROC (27)
    Ref(_key_13723);
    RefDS(_slots_13728);
    _index_13731 = _33lookup(_key_13723, _hashval_13725, _slots_13728);
    // SubProg get pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_13731)) {
        _1 = (object)(DBL_PTR(_index_13731)->dbl);
        DeRefDS(_index_13731);
        _index_13731 = _1;
    }
    // SubProg get pc: 36 op: STARTLINE (58)

    /** map.e:508		sequence slot = slots[index]*/
    // SubProg get pc: 38 op: RHS_SUBS (25)
    DeRef(_slot_13733);
    _2 = (object)SEQ_PTR(_slots_13728);
    _slot_13733 = (object)*(((s1_ptr)_2)->base + _index_13731);
    Ref(_slot_13733);
    // SubProg get pc: 42 op: SEQUENCE_CHECK (97)
    // SubProg get pc: 44 op: STARTLINE (58)

    /** map.e:509		if hashval = slot[SLOT_HASH] then*/
    // SubProg get pc: 46 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slot_13733);
    _7469 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg get pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _hashval_13725, _7469)){
        _7469 = NOVALUE;
        goto L1; // [50] 65
    }
    _7469 = NOVALUE;
    // SubProg get pc: 54 op: STARTLINE (58)

    /** map.e:510			return slot[SLOT_VALUE]*/
    // SubProg get pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slot_13733);
    _7471 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg get pc: 60 op: RETURNF (28)
    Ref(_7471);

// Exiting block BLOCK: get

// block var the_map_p_13722
    DeRef(_the_map_p_13722);

// block var key_13723
    DeRef(_key_13723);

// block var default_13724
    DeRef(_default_13724);

// block var hashval_13725

// block var slots_13728
    DeRefDS(_slots_13728);

// block var index_13731

// block var slot_13733
    DeRefDS(_slot_13733);
    return _7471;
    // SubProg get pc: 64 op: NOP1 (159)
L1: // addr: 65 pc: 64 sub: 13720 op: 159
    // SubProg get pc: 65 op: STARTLINE (58)

    /** map.e:512		return default*/
    // SubProg get pc: 67 op: RETURNF (28)

// Exiting block BLOCK: get

// block var the_map_p_13722
    DeRef(_the_map_p_13722);

// block var key_13723
    DeRef(_key_13723);

// block var hashval_13725

// block var slots_13728
    DeRef(_slots_13728);

// block var index_13731

// block var slot_13733
    DeRef(_slot_13733);
    _7471 = NOVALUE;
    return _default_13724;
    // SubProg get pc: 71 op: BADRETURNF (43)
    ;
}


void _33put(object _the_map_p_13761, object _key_13762, object _val_13763, object _op_13764, object _deprecated_13765)
{
    object _hashval_13766 = NOVALUE;
    object _hash_inlined_hash_at_2_13768 = NOVALUE;
    object _the_map_seq_13769 = NOVALUE;
    object _slots_13771 = NOVALUE;
    object _index_13773 = NOVALUE;
    object _old_hash_13775 = NOVALUE;
    object _msg_inlined_crash_at_288_13818 = NOVALUE;
    object _msg_inlined_crash_at_348_13828 = NOVALUE;
    object _msg_inlined_crash_at_535_13860 = NOVALUE;
    object _7538 = NOVALUE; // 13856 7538
// skipping _7537  name type: 0
    object _7536 = NOVALUE; // 13852 7536
    object _7535 = NOVALUE; // 13851 7535
    object _7534 = NOVALUE; // 13850 7534
    object _7533 = NOVALUE; // 13849 7533
    object _7532 = NOVALUE; // 13847 7532
// skipping _7531  name type: 0
    object _7530 = NOVALUE; // 13843 7530
    object _7529 = NOVALUE; // 13842 7529
    object _7528 = NOVALUE; // 13841 7528
    object _7527 = NOVALUE; // 13840 7527
    object _7526 = NOVALUE; // 13838 7526
    object _7525 = NOVALUE; // 13837 7525
// skipping _7524  name type: 0
    object _7523 = NOVALUE; // 13833 7523
    object _7522 = NOVALUE; // 13832 7522
    object _7521 = NOVALUE; // 13831 7521
    object _7520 = NOVALUE; // 13830 7520
// skipping _7519  name type: 0
    object _7518 = NOVALUE; // 13823 7518
    object _7517 = NOVALUE; // 13822 7517
    object _7516 = NOVALUE; // 13821 7516
    object _7515 = NOVALUE; // 13820 7515
// skipping _7513  name type: 0
    object _7512 = NOVALUE; // 13812 7512
    object _7511 = NOVALUE; // 13811 7511
    object _7510 = NOVALUE; // 13810 7510
    object _7509 = NOVALUE; // 13809 7509
    object _7508 = NOVALUE; // 13807 7508
// skipping _7507  name type: 0
    object _7506 = NOVALUE; // 13803 7506
    object _7505 = NOVALUE; // 13802 7505
    object _7504 = NOVALUE; // 13801 7504
    object _7503 = NOVALUE; // 13800 7503
    object _7502 = NOVALUE; // 13798 7502
// skipping _7501  name type: 0
    object _7500 = NOVALUE; // 13794 7500
    object _7497 = NOVALUE; // 13790 7497
    object _7496 = NOVALUE; // 13789 7496
// skipping _7495  name type: 0
    object _7494 = NOVALUE; // 13787 7494
// skipping _7493  name type: 0
// skipping _7492  name type: 0
// skipping _7491  name type: 0
// skipping _7490  name type: 0
    object _7489 = NOVALUE; // 13782 7489
    object _7488 = NOVALUE; // 13781 7488
// skipping _7487  name type: 0
// skipping _7486  name type: 0
    object _7485 = NOVALUE; // 13776 7485
// skipping _7484  name type: 0
// skipping _7483  name type: 0
// skipping _7482  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg put pc: 1 op: STARTLINE (58)

    /** map.e:579		integer hashval = hash( key )*/
    // SubProg put pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg put pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 7 op: HASH (194)
    _hashval_13766 = calc_hash(_key_13762, -6);
    // SubProg put pc: 11 op: NOP1 (159)
    // SubProg put pc: 12 op: STARTLINE (58)

    /** map.e:580		sequence the_map_seq = eumem:ram_space[the_map_p]*/
    // SubProg put pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 16 op: RHS_SUBS (25)
    DeRef(_the_map_seq_13769);
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_p_13761)){
        _the_map_seq_13769 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_13761)->dbl));
    }
    else{
        _the_map_seq_13769 = (object)*(((s1_ptr)_2)->base + _the_map_p_13761);
    }
    Ref(_the_map_seq_13769);
    // SubProg put pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 22 op: STARTLINE (58)

    /** map.e:581		eumem:ram_space[the_map_p] = 0*/
    // SubProg put pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 26 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_13761))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_13761)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_13761);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg put pc: 30 op: STARTLINE (58)

    /** map.e:582		sequence slots = the_map_seq[MAP_SLOTS]*/
    // SubProg put pc: 32 op: RHS_SUBS (25)
    DeRef(_slots_13771);
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    _slots_13771 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_13771);
    // SubProg put pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 38 op: STARTLINE (58)

    /** map.e:584		integer index = lookup( key, hashval, slots )*/
    // SubProg put pc: 40 op: PROC (27)
    Ref(_key_13762);
    RefDS(_slots_13771);
    _index_13773 = _33lookup(_key_13762, _hashval_13766, _slots_13771);
    // SubProg put pc: 46 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_13773)) {
        _1 = (object)(DBL_PTR(_index_13773)->dbl);
        DeRefDS(_index_13773);
        _index_13773 = _1;
    }
    // SubProg put pc: 48 op: STARTLINE (58)

    /** map.e:585		integer old_hash = slots[index][SLOT_HASH]*/
    // SubProg put pc: 50 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_13771);
    _7485 = (object)*(((s1_ptr)_2)->base + _index_13773);
    // SubProg put pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7485);
    _old_hash_13775 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_13775)){
        _old_hash_13775 = (object)DBL_PTR(_old_hash_13775)->dbl;
    }
    _7485 = NOVALUE;
    // SubProg put pc: 60 op: STARTLINE (58)

    /** map.e:587		if old_hash < 0 then*/
    // SubProg put pc: 62 op: LESS_IFW_I (119)
    if (_old_hash_13775 >= 0)
    goto L1; // [62] 142
    // SubProg put pc: 66 op: STARTLINE (58)

    /** map.e:589			if the_map_seq[MAP_SIZE] > the_map_seq[MAP_MAX] then*/
    // SubProg put pc: 68 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    _7488 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg put pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    _7489 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg put pc: 76 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _7488, _7489)){
        _7488 = NOVALUE;
        _7489 = NOVALUE;
        goto L2; // [76] 127
    }
    _7488 = NOVALUE;
    _7489 = NOVALUE;
    // SubProg put pc: 80 op: STARTLINE (58)

    /** map.e:590				slots = {}*/
    // SubProg put pc: 82 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_slots_13771);
    _slots_13771 = _5;
    // SubProg put pc: 85 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 87 op: STARTLINE (58)

    /** map.e:591				the_map_seq = rehash_seq( the_map_seq )*/
    // SubProg put pc: 89 op: PROC (27)
    RefDS(_the_map_seq_13769);
    _0 = _the_map_seq_13769;
    _the_map_seq_13769 = _33rehash_seq(_the_map_seq_13769, 0);
    DeRefDS(_0);
    // SubProg put pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 96 op: STARTLINE (58)

    /** map.e:592				slots = the_map_seq[MAP_SLOTS]*/
    // SubProg put pc: 98 op: RHS_SUBS (25)
    DeRefDS(_slots_13771);
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    _slots_13771 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_13771);
    // SubProg put pc: 102 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 104 op: STARTLINE (58)

    /** map.e:593				index = lookup( key, hashval, slots )*/
    // SubProg put pc: 106 op: PROC (27)
    Ref(_key_13762);
    RefDS(_slots_13771);
    _index_13773 = _33lookup(_key_13762, _hashval_13766, _slots_13771);
    // SubProg put pc: 112 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_13773)) {
        _1 = (object)(DBL_PTR(_index_13773)->dbl);
        DeRefDS(_index_13773);
        _index_13773 = _1;
    }
    // SubProg put pc: 114 op: STARTLINE (58)

    /** map.e:594				old_hash = slots[index][SLOT_HASH]*/
    // SubProg put pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_13771);
    _7494 = (object)*(((s1_ptr)_2)->base + _index_13773);
    // SubProg put pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7494);
    _old_hash_13775 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_13775)){
        _old_hash_13775 = (object)DBL_PTR(_old_hash_13775)->dbl;
    }
    _7494 = NOVALUE;
    // SubProg put pc: 126 op: NOP1 (159)
L2: // addr: 127 pc: 126 sub: 13759 op: 159
    // SubProg put pc: 127 op: STARTLINE (58)

    /** map.e:596			the_map_seq[MAP_SIZE] += 1*/
    // SubProg put pc: 129 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    _7496 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg put pc: 133 op: PLUS1 (93)
    if (IS_ATOM_INT(_7496)) {
        _7497 = _7496 + 1;
        if (_7497 > MAXINT){
            _7497 = NewDouble((eudouble)_7497);
        }
    }
    else
    _7497 = binary_op(PLUS, 1, _7496);
    _7496 = NOVALUE;
    // SubProg put pc: 137 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_13769 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7497;
    if( _1 != _7497 ){
        DeRef(_1);
    }
    _7497 = NOVALUE;
    // SubProg put pc: 141 op: NOP1 (159)
L1: // addr: 142 pc: 141 sub: 13759 op: 159
    // SubProg put pc: 142 op: STARTLINE (58)

    /** map.e:599		the_map_seq[MAP_SLOTS] = 0*/
    // SubProg put pc: 144 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_13769 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg put pc: 148 op: STARTLINE (58)

    /** map.e:601		switch op do*/
    // SubProg put pc: 150 op: SWITCH_I (193)
    if (IS_SEQUENCE(_op_13764) ){
        goto L3; // [150] 532
    }
    if(!IS_ATOM_INT(_op_13764)){
        if( (DBL_PTR(_op_13764)->dbl != (eudouble) ((object) DBL_PTR(_op_13764)->dbl) ) ){
            goto L3; // [150] 532
        }
        _0 = (object) DBL_PTR(_op_13764)->dbl;
    }
    else {
        _0 = _op_13764;
    };
    switch ( _0 ){ 
        // SubProg put pc: 155 op: STARTLINE (58)

        /** map.e:602			case PUT then*/
        // SubProg put pc: 157 op: CASE (186)
        case 1:
        // SubProg put pc: 159 op: STARTLINE (58)

        /** map.e:603				slots[index] = { hashval, key, val }*/
        // SubProg put pc: 161 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        Ref(_val_13763);
        ((intptr_t*)_2)[3] = _val_13763;
        _7500 = MAKE_SEQ(_1);
        // SubProg put pc: 167 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7500;
        if( _1 != _7500 ){
            DeRef(_1);
        }
        _7500 = NOVALUE;
        // SubProg put pc: 171 op: ELSE (23)
        goto L4; // [171] 555
        // SubProg put pc: 173 op: STARTLINE (58)

        /** map.e:604			case ADD then*/
        // SubProg put pc: 175 op: CASE (186)
        case 2:
        // SubProg put pc: 177 op: STARTLINE (58)

        /** map.e:605				if old_hash < 0 then*/
        // SubProg put pc: 179 op: LESS_IFW_I (119)
        if (_old_hash_13775 >= 0)
        goto L5; // [179] 198
        // SubProg put pc: 183 op: STARTLINE (58)

        /** map.e:606					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 185 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        Ref(_val_13763);
        ((intptr_t*)_2)[3] = _val_13763;
        _7502 = MAKE_SEQ(_1);
        // SubProg put pc: 191 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7502;
        if( _1 != _7502 ){
            DeRef(_1);
        }
        _7502 = NOVALUE;
        // SubProg put pc: 195 op: ELSE (23)
        goto L4; // [195] 555
        // SubProg put pc: 197 op: NOP1 (159)
L5: // addr: 198 pc: 197 sub: 13759 op: 159
        // SubProg put pc: 198 op: STARTLINE (58)

        /** map.e:608					slots[index] = { hashval, key, val + slots[index][SLOT_VALUE] }*/
        // SubProg put pc: 200 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_13771);
        _7503 = (object)*(((s1_ptr)_2)->base + _index_13773);
        // SubProg put pc: 204 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7503);
        _7504 = (object)*(((s1_ptr)_2)->base + 3);
        _7503 = NOVALUE;
        // SubProg put pc: 208 op: PLUS (11)
        if (IS_ATOM_INT(_val_13763) && IS_ATOM_INT(_7504)) {
            _7505 = _val_13763 + _7504;
            if ((object)((uintptr_t)_7505 + (uintptr_t)HIGH_BITS) >= 0){
                _7505 = NewDouble((eudouble)_7505);
            }
        }
        else {
            _7505 = binary_op(PLUS, _val_13763, _7504);
        }
        _7504 = NOVALUE;
        // SubProg put pc: 212 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        ((intptr_t*)_2)[3] = _7505;
        _7506 = MAKE_SEQ(_1);
        _7505 = NOVALUE;
        // SubProg put pc: 218 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7506;
        if( _1 != _7506 ){
            DeRef(_1);
        }
        _7506 = NOVALUE;
        // SubProg put pc: 222 op: NOP1 (159)
        // SubProg put pc: 223 op: ELSE (23)
        goto L4; // [223] 555
        // SubProg put pc: 225 op: STARTLINE (58)

        /** map.e:610			case SUBTRACT then*/
        // SubProg put pc: 227 op: CASE (186)
        case 3:
        // SubProg put pc: 229 op: STARTLINE (58)

        /** map.e:611				if old_hash < 0 then*/
        // SubProg put pc: 231 op: LESS_IFW_I (119)
        if (_old_hash_13775 >= 0)
        goto L6; // [231] 250
        // SubProg put pc: 235 op: STARTLINE (58)

        /** map.e:612					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 237 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        Ref(_val_13763);
        ((intptr_t*)_2)[3] = _val_13763;
        _7508 = MAKE_SEQ(_1);
        // SubProg put pc: 243 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7508;
        if( _1 != _7508 ){
            DeRef(_1);
        }
        _7508 = NOVALUE;
        // SubProg put pc: 247 op: ELSE (23)
        goto L4; // [247] 555
        // SubProg put pc: 249 op: NOP1 (159)
L6: // addr: 250 pc: 249 sub: 13759 op: 159
        // SubProg put pc: 250 op: STARTLINE (58)

        /** map.e:614					slots[index] = { hashval, key, slots[index][SLOT_VALUE] - val }*/
        // SubProg put pc: 252 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_13771);
        _7509 = (object)*(((s1_ptr)_2)->base + _index_13773);
        // SubProg put pc: 256 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7509);
        _7510 = (object)*(((s1_ptr)_2)->base + 3);
        _7509 = NOVALUE;
        // SubProg put pc: 260 op: MINUS (10)
        if (IS_ATOM_INT(_7510) && IS_ATOM_INT(_val_13763)) {
            _7511 = _7510 - _val_13763;
            if ((object)((uintptr_t)_7511 +(uintptr_t) HIGH_BITS) >= 0){
                _7511 = NewDouble((eudouble)_7511);
            }
        }
        else {
            _7511 = binary_op(MINUS, _7510, _val_13763);
        }
        _7510 = NOVALUE;
        // SubProg put pc: 264 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        ((intptr_t*)_2)[3] = _7511;
        _7512 = MAKE_SEQ(_1);
        _7511 = NOVALUE;
        // SubProg put pc: 270 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7512;
        if( _1 != _7512 ){
            DeRef(_1);
        }
        _7512 = NOVALUE;
        // SubProg put pc: 274 op: NOP1 (159)
        // SubProg put pc: 275 op: ELSE (23)
        goto L4; // [275] 555
        // SubProg put pc: 277 op: STARTLINE (58)

        /** map.e:617			case MULTIPLY then*/
        // SubProg put pc: 279 op: CASE (186)
        case 4:
        // SubProg put pc: 281 op: STARTLINE (58)

        /** map.e:618				if old_hash < 0 then*/
        // SubProg put pc: 283 op: LESS_IFW_I (119)
        if (_old_hash_13775 >= 0)
        goto L7; // [283] 310
        // SubProg put pc: 287 op: STARTLINE (58)

        /** map.e:619					error:crash("Inappropriate initial operation given to map.e:put()")*/
        // SubProg put pc: 289 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 291 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_288_13818);
        _msg_inlined_crash_at_288_13818 = EPrintf(-9999999, _7514, _5);
        // SubProg put pc: 295 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 297 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_288_13818);
        // SubProg put pc: 300 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 302 op: ELSE (23)
        goto L8; // [302] 305
        // SubProg put pc: 304 op: NOP1 (159)
L8: // addr: 305 pc: 304 sub: 13759 op: 159
        // SubProg put pc: 305 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 288

// block var msg_inlined_crash_at_288_13818
        DeRefi(_msg_inlined_crash_at_288_13818);
        _msg_inlined_crash_at_288_13818 = NOVALUE;
        // SubProg put pc: 307 op: ELSE (23)
        goto L4; // [307] 555
        // SubProg put pc: 309 op: NOP1 (159)
L7: // addr: 310 pc: 309 sub: 13759 op: 159
        // SubProg put pc: 310 op: STARTLINE (58)

        /** map.e:621					slots[index] = { hashval, key, val * slots[index][SLOT_VALUE] }*/
        // SubProg put pc: 312 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_13771);
        _7515 = (object)*(((s1_ptr)_2)->base + _index_13773);
        // SubProg put pc: 316 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7515);
        _7516 = (object)*(((s1_ptr)_2)->base + 3);
        _7515 = NOVALUE;
        // SubProg put pc: 320 op: MULTIPLY (13)
        if (IS_ATOM_INT(_val_13763) && IS_ATOM_INT(_7516)) {
            if (_val_13763 == (short)_val_13763 && _7516 <= INT15 && _7516 >= -INT15){
                _7517 = _val_13763 * _7516;
            }
            else{
                _7517 = NewDouble(_val_13763 * (eudouble)_7516);
            }
        }
        else {
            _7517 = binary_op(MULTIPLY, _val_13763, _7516);
        }
        _7516 = NOVALUE;
        // SubProg put pc: 324 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        ((intptr_t*)_2)[3] = _7517;
        _7518 = MAKE_SEQ(_1);
        _7517 = NOVALUE;
        // SubProg put pc: 330 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7518;
        if( _1 != _7518 ){
            DeRef(_1);
        }
        _7518 = NOVALUE;
        // SubProg put pc: 334 op: NOP1 (159)
        // SubProg put pc: 335 op: ELSE (23)
        goto L4; // [335] 555
        // SubProg put pc: 337 op: STARTLINE (58)

        /** map.e:624			case DIVIDE then*/
        // SubProg put pc: 339 op: CASE (186)
        case 5:
        // SubProg put pc: 341 op: STARTLINE (58)

        /** map.e:625				if old_hash < 0 then*/
        // SubProg put pc: 343 op: LESS_IFW_I (119)
        if (_old_hash_13775 >= 0)
        goto L9; // [343] 370
        // SubProg put pc: 347 op: STARTLINE (58)

        /** map.e:626					error:crash("Inappropriate initial operation given to map.e:put()")*/
        // SubProg put pc: 349 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 351 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_348_13828);
        _msg_inlined_crash_at_348_13828 = EPrintf(-9999999, _7514, _5);
        // SubProg put pc: 355 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 357 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_348_13828);
        // SubProg put pc: 360 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 362 op: ELSE (23)
        goto LA; // [362] 365
        // SubProg put pc: 364 op: NOP1 (159)
LA: // addr: 365 pc: 364 sub: 13759 op: 159
        // SubProg put pc: 365 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 348

// block var msg_inlined_crash_at_348_13828
        DeRefi(_msg_inlined_crash_at_348_13828);
        _msg_inlined_crash_at_348_13828 = NOVALUE;
        // SubProg put pc: 367 op: ELSE (23)
        goto L4; // [367] 555
        // SubProg put pc: 369 op: NOP1 (159)
L9: // addr: 370 pc: 369 sub: 13759 op: 159
        // SubProg put pc: 370 op: STARTLINE (58)

        /** map.e:628					slots[index] = { hashval, key, slots[index][SLOT_VALUE] / val }*/
        // SubProg put pc: 372 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_13771);
        _7520 = (object)*(((s1_ptr)_2)->base + _index_13773);
        // SubProg put pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7520);
        _7521 = (object)*(((s1_ptr)_2)->base + 3);
        _7520 = NOVALUE;
        // SubProg put pc: 380 op: DIVIDE (14)
        if (IS_ATOM_INT(_7521) && IS_ATOM_INT(_val_13763)) {
            _7522 = (_7521 % _val_13763) ? NewDouble((eudouble)_7521 / _val_13763) : (_7521 / _val_13763);
        }
        else {
            _7522 = binary_op(DIVIDE, _7521, _val_13763);
        }
        _7521 = NOVALUE;
        // SubProg put pc: 384 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        ((intptr_t*)_2)[3] = _7522;
        _7523 = MAKE_SEQ(_1);
        _7522 = NOVALUE;
        // SubProg put pc: 390 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7523;
        if( _1 != _7523 ){
            DeRef(_1);
        }
        _7523 = NOVALUE;
        // SubProg put pc: 394 op: NOP1 (159)
        // SubProg put pc: 395 op: ELSE (23)
        goto L4; // [395] 555
        // SubProg put pc: 397 op: STARTLINE (58)

        /** map.e:631			case APPEND then*/
        // SubProg put pc: 399 op: CASE (186)
        case 6:
        // SubProg put pc: 401 op: STARTLINE (58)

        /** map.e:632				if old_hash < 0 then*/
        // SubProg put pc: 403 op: LESS_IFW_I (119)
        if (_old_hash_13775 >= 0)
        goto LB; // [403] 426
        // SubProg put pc: 407 op: STARTLINE (58)

        /** map.e:633					slots[index] = { hashval, key, {val} }*/
        // SubProg put pc: 409 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_val_13763);
        ((intptr_t*)_2)[1] = _val_13763;
        _7525 = MAKE_SEQ(_1);
        // SubProg put pc: 413 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        ((intptr_t*)_2)[3] = _7525;
        _7526 = MAKE_SEQ(_1);
        _7525 = NOVALUE;
        // SubProg put pc: 419 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7526;
        if( _1 != _7526 ){
            DeRef(_1);
        }
        _7526 = NOVALUE;
        // SubProg put pc: 423 op: ELSE (23)
        goto L4; // [423] 555
        // SubProg put pc: 425 op: NOP1 (159)
LB: // addr: 426 pc: 425 sub: 13759 op: 159
        // SubProg put pc: 426 op: STARTLINE (58)

        /** map.e:635					slots[index] = { hashval, key, append( slots[index][SLOT_VALUE], val ) }*/
        // SubProg put pc: 428 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_13771);
        _7527 = (object)*(((s1_ptr)_2)->base + _index_13773);
        // SubProg put pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7527);
        _7528 = (object)*(((s1_ptr)_2)->base + 3);
        _7527 = NOVALUE;
        // SubProg put pc: 436 op: APPEND (35)
        Ref(_val_13763);
        Append(&_7529, _7528, _val_13763);
        _7528 = NOVALUE;
        // SubProg put pc: 440 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        ((intptr_t*)_2)[3] = _7529;
        _7530 = MAKE_SEQ(_1);
        _7529 = NOVALUE;
        // SubProg put pc: 446 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7530;
        if( _1 != _7530 ){
            DeRef(_1);
        }
        _7530 = NOVALUE;
        // SubProg put pc: 450 op: NOP1 (159)
        // SubProg put pc: 451 op: ELSE (23)
        goto L4; // [451] 555
        // SubProg put pc: 453 op: STARTLINE (58)

        /** map.e:638			case CONCAT then*/
        // SubProg put pc: 455 op: CASE (186)
        case 7:
        // SubProg put pc: 457 op: STARTLINE (58)

        /** map.e:639				if old_hash < 0 then*/
        // SubProg put pc: 459 op: LESS_IFW_I (119)
        if (_old_hash_13775 >= 0)
        goto LC; // [459] 478
        // SubProg put pc: 463 op: STARTLINE (58)

        /** map.e:640					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 465 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        Ref(_val_13763);
        ((intptr_t*)_2)[3] = _val_13763;
        _7532 = MAKE_SEQ(_1);
        // SubProg put pc: 471 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7532;
        if( _1 != _7532 ){
            DeRef(_1);
        }
        _7532 = NOVALUE;
        // SubProg put pc: 475 op: ELSE (23)
        goto L4; // [475] 555
        // SubProg put pc: 477 op: NOP1 (159)
LC: // addr: 478 pc: 477 sub: 13759 op: 159
        // SubProg put pc: 478 op: STARTLINE (58)

        /** map.e:642					slots[index] = { hashval, key, slots[index][SLOT_VALUE] & val }*/
        // SubProg put pc: 480 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_13771);
        _7533 = (object)*(((s1_ptr)_2)->base + _index_13773);
        // SubProg put pc: 484 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7533);
        _7534 = (object)*(((s1_ptr)_2)->base + 3);
        _7533 = NOVALUE;
        // SubProg put pc: 488 op: CONCAT (15)
        if (IS_SEQUENCE(_7534) && IS_ATOM(_val_13763)) {
            Ref(_val_13763);
            Append(&_7535, _7534, _val_13763);
        }
        else if (IS_ATOM(_7534) && IS_SEQUENCE(_val_13763)) {
            Ref(_7534);
            Prepend(&_7535, _val_13763, _7534);
        }
        else {
            Concat((object_ptr)&_7535, _7534, _val_13763);
            _7534 = NOVALUE;
        }
        _7534 = NOVALUE;
        // SubProg put pc: 492 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        ((intptr_t*)_2)[3] = _7535;
        _7536 = MAKE_SEQ(_1);
        _7535 = NOVALUE;
        // SubProg put pc: 498 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7536;
        if( _1 != _7536 ){
            DeRef(_1);
        }
        _7536 = NOVALUE;
        // SubProg put pc: 502 op: NOP1 (159)
        // SubProg put pc: 503 op: ELSE (23)
        goto L4; // [503] 555
        // SubProg put pc: 505 op: STARTLINE (58)

        /** map.e:645			case LEAVE then*/
        // SubProg put pc: 507 op: CASE (186)
        case 8:
        // SubProg put pc: 509 op: STARTLINE (58)

        /** map.e:646				if old_hash < 0 then*/
        // SubProg put pc: 511 op: LESS_IFW_I (119)
        if (_old_hash_13775 >= 0)
        goto L4; // [511] 555
        // SubProg put pc: 515 op: STARTLINE (58)

        /** map.e:647					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 517 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_13766;
        Ref(_key_13762);
        ((intptr_t*)_2)[2] = _key_13762;
        Ref(_val_13763);
        ((intptr_t*)_2)[3] = _val_13763;
        _7538 = MAKE_SEQ(_1);
        // SubProg put pc: 523 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_13771);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_13771 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_13773);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7538;
        if( _1 != _7538 ){
            DeRef(_1);
        }
        _7538 = NOVALUE;
        // SubProg put pc: 527 op: NOP1 (159)
        // SubProg put pc: 528 op: ELSE (23)
        goto L4; // [528] 555
        // SubProg put pc: 530 op: STARTLINE (58)

        /** map.e:649			case else*/
        // SubProg put pc: 532 op: CASE (186)
        default:
L3: // addr: 532 pc: 532 sub: 13759 op: 186
        // SubProg put pc: 534 op: STARTLINE (58)

        /** map.e:650				error:crash("Unknown operation given to map.e:put()")*/
        // SubProg put pc: 536 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 538 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_535_13860);
        _msg_inlined_crash_at_535_13860 = EPrintf(-9999999, _7539, _5);
        // SubProg put pc: 542 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 544 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_535_13860);
        // SubProg put pc: 547 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 549 op: ELSE (23)
        goto LD; // [549] 552
        // SubProg put pc: 551 op: NOP1 (159)
LD: // addr: 552 pc: 551 sub: 13759 op: 159
        // SubProg put pc: 552 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 535

// block var msg_inlined_crash_at_535_13860
        DeRefi(_msg_inlined_crash_at_535_13860);
        _msg_inlined_crash_at_535_13860 = NOVALUE;
        // SubProg put pc: 554 op: NOPSWITCH (187)
    ;}L4: // addr: 555 pc: 554 sub: 13759 op: 187
    // SubProg put pc: 555 op: STARTLINE (58)

    /** map.e:654		the_map_seq[MAP_SLOTS] = slots*/
    // SubProg put pc: 557 op: ASSIGN_SUBS (16)
    RefDS(_slots_13771);
    _2 = (object)SEQ_PTR(_the_map_seq_13769);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_13769 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_13771;
    DeRef(_1);
    // SubProg put pc: 561 op: STARTLINE (58)

    /** map.e:655		eumem:ram_space[the_map_p] = the_map_seq*/
    // SubProg put pc: 563 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 565 op: ASSIGN_SUBS (16)
    RefDS(_the_map_seq_13769);
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_13761))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_13761)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_13761);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _the_map_seq_13769;
    DeRef(_1);
    // SubProg put pc: 569 op: STARTLINE (58)

    /** map.e:656	end procedure*/
    // SubProg put pc: 571 op: RETURNP (29)

// Exiting block BLOCK: put

// block var the_map_p_13761
    DeRef(_the_map_p_13761);

// block var key_13762
    DeRef(_key_13762);

// block var val_13763
    DeRef(_val_13763);

// block var op_13764
    DeRef(_op_13764);

// block var hashval_13766

// block var the_map_seq_13769
    DeRefDS(_the_map_seq_13769);

// block var slots_13771
    DeRefDS(_slots_13771);

// block var index_13773

// block var old_hash_13775
    return;
    // SubProg put pc: 574 op: BADRETURNF (43)
    ;
}


void _33nested_put(object _the_map_p_13863, object _the_keys_p_13864, object _the_value_p_13865, object _operation_p_13866, object _deprecated_trigger_p_13867)
{
    object _temp_map__13868 = NOVALUE;
    object _7550 = NOVALUE; // 13881 7550
    object _7549 = NOVALUE; // 13880 7549
    object _7548 = NOVALUE; // 13879 7548
    object _7547 = NOVALUE; // 13878 7547
    object _7546 = NOVALUE; // 13877 7546
// skipping _7545  name type: 0
    object _7544 = NOVALUE; // 13875 7544
    object _7543 = NOVALUE; // 13874 7543
    object _7542 = NOVALUE; // 13872 7542
// skipping _7541  name type: 0
    object _7540 = NOVALUE; // 13870 7540
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg nested_put pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg nested_put pc: 3 op: INTEGER_CHECK (96)
    // SubProg nested_put pc: 5 op: STARTLINE (58)

    /** map.e:701		if length( the_keys_p ) = 1 then*/
    // SubProg nested_put pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_the_keys_p_13864)){
            _7540 = SEQ_PTR(_the_keys_p_13864)->length;
    }
    else {
        _7540 = 1;
    }
    // SubProg nested_put pc: 10 op: EQUALS_IFW_I (121)
    if (_7540 != 1)
    goto L1; // [10] 30
    // SubProg nested_put pc: 14 op: STARTLINE (58)

    /** map.e:702			put( the_map_p, the_keys_p[1], the_value_p, operation_p )*/
    // SubProg nested_put pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_13864);
    _7542 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 20 op: PROC (27)
    Ref(_the_map_p_13863);
    Ref(_7542);
    Ref(_the_value_p_13865);
    _33put(_the_map_p_13863, _7542, _the_value_p_13865, _operation_p_13866, 0);
    _7542 = NOVALUE;
    // SubProg nested_put pc: 27 op: ELSE (23)
    goto L2; // [27] 84
    // SubProg nested_put pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 13861 op: 159
    // SubProg nested_put pc: 30 op: STARTLINE (58)

    /** map.e:704			temp_map_ = new_extra( get( the_map_p, the_keys_p[1] ) )*/
    // SubProg nested_put pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_13864);
    _7543 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 36 op: PROC (27)
    Ref(_the_map_p_13863);
    Ref(_7543);
    _7544 = _33get(_the_map_p_13863, _7543, 0);
    _7543 = NOVALUE;
    // SubProg nested_put pc: 42 op: PROC (27)
    _0 = _temp_map__13868;
    _temp_map__13868 = _33new_extra(_7544, 8);
    DeRef(_0);
    _7544 = NOVALUE;
    // SubProg nested_put pc: 47 op: STARTLINE (58)

    /** map.e:705			nested_put( temp_map_, the_keys_p[2..$], the_value_p, operation_p )*/
    // SubProg nested_put pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_the_keys_p_13864)){
            _7546 = SEQ_PTR(_the_keys_p_13864)->length;
    }
    else {
        _7546 = 1;
    }
    // SubProg nested_put pc: 52 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_7547;
    RHS_Slice(_the_keys_p_13864, 2, _7546);
    // SubProg nested_put pc: 57 op: ASSIGN (18)
    Ref(_the_value_p_13865);
    DeRef(_7548);
    _7548 = _the_value_p_13865;
    // SubProg nested_put pc: 60 op: ASSIGN (18)
    DeRef(_7549);
    _7549 = _operation_p_13866;
    // SubProg nested_put pc: 63 op: PROC (27)
    Ref(_temp_map__13868);
    _33nested_put(_temp_map__13868, _7547, _7548, _7549, 0);
    _7547 = NOVALUE;
    _7548 = NOVALUE;
    _7549 = NOVALUE;
    // SubProg nested_put pc: 70 op: STARTLINE (58)

    /** map.e:706			put( the_map_p, the_keys_p[1], temp_map_, PUT )*/
    // SubProg nested_put pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_13864);
    _7550 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 76 op: PROC (27)
    Ref(_the_map_p_13863);
    Ref(_7550);
    Ref(_temp_map__13868);
    _33put(_the_map_p_13863, _7550, _temp_map__13868, 1, 0);
    _7550 = NOVALUE;
    // SubProg nested_put pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 13861 op: 159
    // SubProg nested_put pc: 84 op: STARTLINE (58)

    /** map.e:708	end procedure*/
    // SubProg nested_put pc: 86 op: RETURNP (29)

// Exiting block BLOCK: nested_put

// block var the_map_p_13863
    DeRef(_the_map_p_13863);

// block var the_keys_p_13864
    DeRefDS(_the_keys_p_13864);

// block var the_value_p_13865
    DeRef(_the_value_p_13865);

// block var operation_p_13866

// block var temp_map__13868
    DeRef(_temp_map__13868);
    return;
    // SubProg nested_put pc: 89 op: BADRETURNF (43)
    ;
}


void _33remove(object _the_map_p_14855, object _key_14856)
{
    object _hashval_14857 = NOVALUE;
    object _hash_inlined_hash_at_2_14859 = NOVALUE;
    object _slots_14860 = NOVALUE;
    object _index_14863 = NOVALUE;
    object _8028 = NOVALUE; // 14874 8028
    object _8027 = NOVALUE; // 14873 8027
// skipping _8026  name type: 0
    object _8025 = NOVALUE; // 14871 8025
// skipping _8024  name type: 0
    object _8023 = NOVALUE; // 14869 8023
// skipping _8022  name type: 0
    object _8021 = NOVALUE; // 14867 8021
    object _8020 = NOVALUE; // 14866 8020
// skipping _8019  name type: 0
// skipping _8018  name type: 0
    object _8017 = NOVALUE; // 14861 8017
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg remove pc: 1 op: STARTLINE (58)

    /** map.e:735		integer hashval = hash( key )*/
    // SubProg remove pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg remove pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 7 op: HASH (194)
    _hashval_14857 = calc_hash(_key_14856, -6);
    // SubProg remove pc: 11 op: NOP1 (159)
    // SubProg remove pc: 12 op: STARTLINE (58)

    /** map.e:736		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg remove pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_p_14855)){
        _8017 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14855)->dbl));
    }
    else{
        _8017 = (object)*(((s1_ptr)_2)->base + _the_map_p_14855);
    }
    // SubProg remove pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_14860);
    _2 = (object)SEQ_PTR(_8017);
    _slots_14860 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_14860);
    _8017 = NOVALUE;
    // SubProg remove pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg remove pc: 26 op: STARTLINE (58)

    /** map.e:738		integer index = lookup( key, hashval, slots )*/
    // SubProg remove pc: 28 op: PROC (27)
    Ref(_key_14856);
    RefDS(_slots_14860);
    _index_14863 = _33lookup(_key_14856, _hashval_14857, _slots_14860);
    // SubProg remove pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_14863)) {
        _1 = (object)(DBL_PTR(_index_14863)->dbl);
        DeRefDS(_index_14863);
        _index_14863 = _1;
    }
    // SubProg remove pc: 36 op: STARTLINE (58)

    /** map.e:739		if hashval = slots[index][SLOT_HASH] then*/
    // SubProg remove pc: 38 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_14860);
    _8020 = (object)*(((s1_ptr)_2)->base + _index_14863);
    // SubProg remove pc: 42 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8020);
    _8021 = (object)*(((s1_ptr)_2)->base + 1);
    _8020 = NOVALUE;
    // SubProg remove pc: 46 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _hashval_14857, _8021)){
        _8021 = NOVALUE;
        goto L1; // [46] 99
    }
    _8021 = NOVALUE;
    // SubProg remove pc: 50 op: STARTLINE (58)

    /** map.e:740			slots = {}*/
    // SubProg remove pc: 52 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_slots_14860);
    _slots_14860 = _5;
    // SubProg remove pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg remove pc: 57 op: STARTLINE (58)

    /** map.e:741			eumem:ram_space[the_map_p][MAP_SLOTS][index] = REMOVED_SLOT*/
    // SubProg remove pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 61 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_14855))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14855)->dbl));
    else
    _3 = (object)(_the_map_p_14855 + ((s1_ptr)_2)->base);
    // SubProg remove pc: 66 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(2 + ((s1_ptr)_2)->base);
    _8023 = NOVALUE;
    // SubProg remove pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 73 op: PASSIGN_SUBS (162)
    RefDS(_33REMOVED_SLOT_13503);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _index_14863);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _33REMOVED_SLOT_13503;
    DeRef(_1);
    _8023 = NOVALUE;
    // SubProg remove pc: 77 op: STARTLINE (58)

    /** map.e:742			eumem:ram_space[the_map_p][MAP_SIZE] -= 1*/
    // SubProg remove pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 81 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_14855))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14855)->dbl));
    else
    _3 = (object)(_the_map_p_14855 + ((s1_ptr)_2)->base);
    // SubProg remove pc: 86 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _8027 = (object)*(((s1_ptr)_2)->base + 1);
    _8025 = NOVALUE;
    // SubProg remove pc: 90 op: MINUS (10)
    if (IS_ATOM_INT(_8027)) {
        _8028 = _8027 - 1;
        if ((object)((uintptr_t)_8028 +(uintptr_t) HIGH_BITS) >= 0){
            _8028 = NewDouble((eudouble)_8028);
        }
    }
    else {
        _8028 = binary_op(MINUS, _8027, 1);
    }
    _8027 = NOVALUE;
    // SubProg remove pc: 94 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8028;
    if( _1 != _8028 ){
        DeRef(_1);
    }
    _8028 = NOVALUE;
    _8025 = NOVALUE;
    // SubProg remove pc: 98 op: NOP1 (159)
L1: // addr: 99 pc: 98 sub: 14853 op: 159
    // SubProg remove pc: 99 op: STARTLINE (58)

    /** map.e:744	end procedure*/
    // SubProg remove pc: 101 op: RETURNP (29)

// Exiting block BLOCK: remove

// block var the_map_p_14855
    DeRef(_the_map_p_14855);

// block var key_14856
    DeRef(_key_14856);

// block var hashval_14857

// block var slots_14860
    DeRef(_slots_14860);

// block var index_14863
    return;
    // SubProg remove pc: 104 op: BADRETURNF (43)
    ;
}


void _33clear(object _the_map_p_14877)
{
// skipping _8036  name type: 0
    object _8035 = NOVALUE; // 14884 8035
    object _8034 = NOVALUE; // 14883 8034
    object _8033 = NOVALUE; // 14882 8033
    object _8032 = NOVALUE; // 14881 8032
    object _8031 = NOVALUE; // 14880 8031
// skipping _8030  name type: 0
    object _8029 = NOVALUE; // 14878 8029
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg clear pc: 1 op: STARTLINE (58)

    /** map.e:773		eumem:ram_space[the_map_p][MAP_SLOTS] = repeat( EMPTY_SLOT, length( eumem:ram_space[the_map_p][MAP_SLOTS] ) )*/
    // SubProg clear pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 5 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_14877))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14877)->dbl));
    else
    _3 = (object)(_the_map_p_14877 + ((s1_ptr)_2)->base);
    // SubProg clear pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_p_14877)){
        _8031 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14877)->dbl));
    }
    else{
        _8031 = (object)*(((s1_ptr)_2)->base + _the_map_p_14877);
    }
    // SubProg clear pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8031);
    _8032 = (object)*(((s1_ptr)_2)->base + 2);
    _8031 = NOVALUE;
    // SubProg clear pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_8032)){
            _8033 = SEQ_PTR(_8032)->length;
    }
    else {
        _8033 = 1;
    }
    _8032 = NOVALUE;
    // SubProg clear pc: 25 op: REPEAT (32)
    _8034 = Repeat(_33EMPTY_SLOT_13501, _8033);
    _8033 = NOVALUE;
    // SubProg clear pc: 29 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8034;
    if( _1 != _8034 ){
        DeRef(_1);
    }
    _8034 = NOVALUE;
    _8029 = NOVALUE;
    // SubProg clear pc: 33 op: STARTLINE (58)

    /** map.e:774		eumem:ram_space[the_map_p][MAP_SIZE]  = 0*/
    // SubProg clear pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 37 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_14877))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14877)->dbl));
    else
    _3 = (object)(_the_map_p_14877 + ((s1_ptr)_2)->base);
    // SubProg clear pc: 42 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _8035 = NOVALUE;
    // SubProg clear pc: 46 op: STARTLINE (58)

    /** map.e:775	end procedure*/
    // SubProg clear pc: 48 op: RETURNP (29)

// Exiting block BLOCK: clear

// block var the_map_p_14877
    DeRef(_the_map_p_14877);
    _8032 = NOVALUE;
    return;
    // SubProg clear pc: 51 op: BADRETURNF (43)
    ;
}


object _33keys(object _the_map_p_14932, object _sorted_result_14933)
{
    object _slots_14934 = NOVALUE;
    object _keys_14937 = NOVALUE;
    object _kx_14941 = NOVALUE;
    object _8066 = NOVALUE; // 14956 8066
// skipping _8065  name type: 0
    object _8064 = NOVALUE; // 14953 8064
    object _8063 = NOVALUE; // 14951 8063
    object _8062 = NOVALUE; // 14950 8062
// skipping _8061  name type: 0
// skipping _8060  name type: 0
    object _8059 = NOVALUE; // 14947 8059
    object _8058 = NOVALUE; // 14946 8058
    object _8057 = NOVALUE; // 14944 8057
// skipping _8056  name type: 0
    object _8055 = NOVALUE; // 14939 8055
    object _8054 = NOVALUE; // 14938 8054
// skipping _8053  name type: 0
    object _8052 = NOVALUE; // 14935 8052
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg keys pc: 1 op: INTEGER_CHECK (96)
    // SubProg keys pc: 3 op: STARTLINE (58)

    /** map.e:903		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg keys pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg keys pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_p_14932)){
        _8052 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14932)->dbl));
    }
    else{
        _8052 = (object)*(((s1_ptr)_2)->base + _the_map_p_14932);
    }
    // SubProg keys pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_14934);
    _2 = (object)SEQ_PTR(_8052);
    _slots_14934 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_14934);
    _8052 = NOVALUE;
    // SubProg keys pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg keys pc: 17 op: STARTLINE (58)

    /** map.e:904		sequence keys = repeat( 0, eumem:ram_space[the_map_p][MAP_SIZE] )*/
    // SubProg keys pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg keys pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_p_14932)){
        _8054 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_14932)->dbl));
    }
    else{
        _8054 = (object)*(((s1_ptr)_2)->base + _the_map_p_14932);
    }
    // SubProg keys pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8054);
    _8055 = (object)*(((s1_ptr)_2)->base + 1);
    _8054 = NOVALUE;
    // SubProg keys pc: 29 op: REPEAT (32)
    DeRef(_keys_14937);
    _keys_14937 = Repeat(0, _8055);
    _8055 = NOVALUE;
    // SubProg keys pc: 33 op: STARTLINE (58)

    /** map.e:905		integer kx = 0*/
    // SubProg keys pc: 35 op: ASSIGN_I (113)
    _kx_14941 = 0;
    // SubProg keys pc: 38 op: STARTLINE (58)

    /** map.e:906		for i = 1 to length( slots ) do*/
    // SubProg keys pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_14934)){
            _8057 = SEQ_PTR(_slots_14934)->length;
    }
    else {
        _8057 = 1;
    }
    // SubProg keys pc: 43 op: FOR_I (125)
    {
        object _i_14943;
        _i_14943 = 1;
L1: // addr: 50 pc: 43 sub: 14930 op: 125
        if (_i_14943 > _8057){
            goto L2; // [43] 106
        }
        // SubProg keys pc: 50 op: STARTLINE (58)

        /** map.e:907			if slots[i][SLOT_HASH] >= 0 then*/
        // SubProg keys pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_14934);
        _8058 = (object)*(((s1_ptr)_2)->base + _i_14943);
        // SubProg keys pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8058);
        _8059 = (object)*(((s1_ptr)_2)->base + 1);
        _8058 = NOVALUE;
        // SubProg keys pc: 60 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _8059, 0)){
            _8059 = NOVALUE;
            goto L3; // [60] 99
        }
        _8059 = NOVALUE;
        // SubProg keys pc: 64 op: STARTLINE (58)

        /** map.e:908				kx += 1*/
        // SubProg keys pc: 66 op: PLUS1_I (117)
        _kx_14941 = _kx_14941 + 1;
        // SubProg keys pc: 70 op: STARTLINE (58)

        /** map.e:909				keys[kx] = slots[i][SLOT_KEY]*/
        // SubProg keys pc: 72 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_14934);
        _8062 = (object)*(((s1_ptr)_2)->base + _i_14943);
        // SubProg keys pc: 76 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8062);
        _8063 = (object)*(((s1_ptr)_2)->base + 2);
        _8062 = NOVALUE;
        // SubProg keys pc: 80 op: ASSIGN_SUBS (16)
        Ref(_8063);
        _2 = (object)SEQ_PTR(_keys_14937);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _keys_14937 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _kx_14941);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _8063;
        if( _1 != _8063 ){
            DeRef(_1);
        }
        _8063 = NOVALUE;
        // SubProg keys pc: 84 op: STARTLINE (58)

        /** map.e:910				if kx = length( keys ) then*/
        // SubProg keys pc: 86 op: LENGTH (42)
        if (IS_SEQUENCE(_keys_14937)){
                _8064 = SEQ_PTR(_keys_14937)->length;
        }
        else {
            _8064 = 1;
        }
        // SubProg keys pc: 89 op: EQUALS_IFW_I (121)
        if (_kx_14941 != _8064)
        goto L4; // [89] 98
        // SubProg keys pc: 93 op: STARTLINE (58)

        /** map.e:911					exit*/
        // SubProg keys pc: 95 op: EXIT (61)
        goto L2; // [95] 106
        // SubProg keys pc: 97 op: NOP1 (159)
L4: // addr: 98 pc: 97 sub: 14930 op: 159
        // SubProg keys pc: 98 op: NOP1 (159)
L3: // addr: 99 pc: 98 sub: 14930 op: 159
        // SubProg keys pc: 99 op: STARTLINE (58)

        /** map.e:914		end for*/
        // SubProg keys pc: 101 op: ENDFOR_INT_UP1 (54)
        _i_14943 = _i_14943 + 1;
        goto L1; // [101] 50
L2: // addr: 106 pc: 101 sub: 14930 op: 54
        ;
    }
    // SubProg keys pc: 106 op: STARTLINE (58)

    /** map.e:915		if sorted_result then*/
    // SubProg keys pc: 108 op: IF (20)
    if (_sorted_result_14933 == 0)
    {
        goto L5; // [108] 123
    }
    else{
    }
    // SubProg keys pc: 111 op: STARTLINE (58)

    /** map.e:916			return stdsort:sort( keys )*/
    // SubProg keys pc: 113 op: PROC (27)
    RefDS(_keys_14937);
    _8066 = _25sort(_keys_14937, 1);
    // SubProg keys pc: 118 op: RETURNF (28)

// Exiting block BLOCK: keys

// block var the_map_p_14932
    DeRef(_the_map_p_14932);

// block var sorted_result_14933

// block var slots_14934
    DeRef(_slots_14934);

// block var keys_14937
    DeRefDS(_keys_14937);

// block var kx_14941
    return _8066;
    // SubProg keys pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 14930 op: 159
    // SubProg keys pc: 123 op: STARTLINE (58)

    /** map.e:918		return keys*/
    // SubProg keys pc: 125 op: RETURNF (28)

// Exiting block BLOCK: keys

// block var the_map_p_14932
    DeRef(_the_map_p_14932);

// block var sorted_result_14933

// block var slots_14934
    DeRef(_slots_14934);

// block var kx_14941
    DeRef(_8066);
    _8066 = NOVALUE;
    return _keys_14937;
    // SubProg keys pc: 129 op: BADRETURNF (43)
    ;
}


object _33pairs(object _the_map_15008, object _sorted_result_15009)
{
    object _slots_15010 = NOVALUE;
    object _pairs_15013 = NOVALUE;
    object _px_15017 = NOVALUE;
    object _8117 = NOVALUE; // 15035 8117
// skipping _8116  name type: 0
    object _8115 = NOVALUE; // 15032 8115
    object _8114 = NOVALUE; // 15030 8114
    object _8113 = NOVALUE; // 15029 8113
    object _8112 = NOVALUE; // 15028 8112
    object _8111 = NOVALUE; // 15027 8111
    object _8110 = NOVALUE; // 15026 8110
// skipping _8109  name type: 0
// skipping _8108  name type: 0
    object _8107 = NOVALUE; // 15023 8107
    object _8106 = NOVALUE; // 15022 8106
    object _8105 = NOVALUE; // 15020 8105
// skipping _8104  name type: 0
    object _8103 = NOVALUE; // 15015 8103
    object _8102 = NOVALUE; // 15014 8102
// skipping _8101  name type: 0
    object _8100 = NOVALUE; // 15011 8100
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pairs pc: 1 op: INTEGER_CHECK (96)
    // SubProg pairs pc: 3 op: STARTLINE (58)

    /** map.e:1047		sequence slots = eumem:ram_space[the_map][MAP_SLOTS]*/
    // SubProg pairs pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg pairs pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_15008)){
        _8100 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_15008)->dbl));
    }
    else{
        _8100 = (object)*(((s1_ptr)_2)->base + _the_map_15008);
    }
    // SubProg pairs pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_15010);
    _2 = (object)SEQ_PTR(_8100);
    _slots_15010 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_15010);
    _8100 = NOVALUE;
    // SubProg pairs pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg pairs pc: 17 op: STARTLINE (58)

    /** map.e:1048		sequence pairs = repeat( 0, eumem:ram_space[the_map][MAP_SIZE] )*/
    // SubProg pairs pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg pairs pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_the_map_15008)){
        _8102 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_15008)->dbl));
    }
    else{
        _8102 = (object)*(((s1_ptr)_2)->base + _the_map_15008);
    }
    // SubProg pairs pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8102);
    _8103 = (object)*(((s1_ptr)_2)->base + 1);
    _8102 = NOVALUE;
    // SubProg pairs pc: 29 op: REPEAT (32)
    DeRef(_pairs_15013);
    _pairs_15013 = Repeat(0, _8103);
    _8103 = NOVALUE;
    // SubProg pairs pc: 33 op: STARTLINE (58)

    /** map.e:1049		integer px = 0*/
    // SubProg pairs pc: 35 op: ASSIGN_I (113)
    _px_15017 = 0;
    // SubProg pairs pc: 38 op: STARTLINE (58)

    /** map.e:1050		for i = 1 to length( slots ) do*/
    // SubProg pairs pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_15010)){
            _8105 = SEQ_PTR(_slots_15010)->length;
    }
    else {
        _8105 = 1;
    }
    // SubProg pairs pc: 43 op: FOR_I (125)
    {
        object _i_15019;
        _i_15019 = 1;
L1: // addr: 50 pc: 43 sub: 15006 op: 125
        if (_i_15019 > _8105){
            goto L2; // [43] 118
        }
        // SubProg pairs pc: 50 op: STARTLINE (58)

        /** map.e:1051			if slots[i][SLOT_HASH] >= 0 then*/
        // SubProg pairs pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_15010);
        _8106 = (object)*(((s1_ptr)_2)->base + _i_15019);
        // SubProg pairs pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8106);
        _8107 = (object)*(((s1_ptr)_2)->base + 1);
        _8106 = NOVALUE;
        // SubProg pairs pc: 60 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _8107, 0)){
            _8107 = NOVALUE;
            goto L3; // [60] 111
        }
        _8107 = NOVALUE;
        // SubProg pairs pc: 64 op: STARTLINE (58)

        /** map.e:1052				px += 1*/
        // SubProg pairs pc: 66 op: PLUS1_I (117)
        _px_15017 = _px_15017 + 1;
        // SubProg pairs pc: 70 op: STARTLINE (58)

        /** map.e:1053				pairs[px] = { slots[i][SLOT_KEY], slots[i][SLOT_VALUE] }*/
        // SubProg pairs pc: 72 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_15010);
        _8110 = (object)*(((s1_ptr)_2)->base + _i_15019);
        // SubProg pairs pc: 76 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8110);
        _8111 = (object)*(((s1_ptr)_2)->base + 2);
        _8110 = NOVALUE;
        // SubProg pairs pc: 80 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_15010);
        _8112 = (object)*(((s1_ptr)_2)->base + _i_15019);
        // SubProg pairs pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8112);
        _8113 = (object)*(((s1_ptr)_2)->base + 3);
        _8112 = NOVALUE;
        // SubProg pairs pc: 88 op: RIGHT_BRACE_2 (85)
        Ref(_8113);
        Ref(_8111);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _8111;
        ((intptr_t *)_2)[2] = _8113;
        _8114 = MAKE_SEQ(_1);
        _8113 = NOVALUE;
        _8111 = NOVALUE;
        // SubProg pairs pc: 92 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_pairs_15013);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pairs_15013 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _px_15017);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _8114;
        if( _1 != _8114 ){
            DeRef(_1);
        }
        _8114 = NOVALUE;
        // SubProg pairs pc: 96 op: STARTLINE (58)

        /** map.e:1054				if px = length( pairs ) then*/
        // SubProg pairs pc: 98 op: LENGTH (42)
        if (IS_SEQUENCE(_pairs_15013)){
                _8115 = SEQ_PTR(_pairs_15013)->length;
        }
        else {
            _8115 = 1;
        }
        // SubProg pairs pc: 101 op: EQUALS_IFW_I (121)
        if (_px_15017 != _8115)
        goto L4; // [101] 110
        // SubProg pairs pc: 105 op: STARTLINE (58)

        /** map.e:1055					exit*/
        // SubProg pairs pc: 107 op: EXIT (61)
        goto L2; // [107] 118
        // SubProg pairs pc: 109 op: NOP1 (159)
L4: // addr: 110 pc: 109 sub: 15006 op: 159
        // SubProg pairs pc: 110 op: NOP1 (159)
L3: // addr: 111 pc: 110 sub: 15006 op: 159
        // SubProg pairs pc: 111 op: STARTLINE (58)

        /** map.e:1058		end for*/
        // SubProg pairs pc: 113 op: ENDFOR_INT_UP1 (54)
        _i_15019 = _i_15019 + 1;
        goto L1; // [113] 50
L2: // addr: 118 pc: 113 sub: 15006 op: 54
        ;
    }
    // SubProg pairs pc: 118 op: STARTLINE (58)

    /** map.e:1059		if sorted_result then*/
    // SubProg pairs pc: 120 op: IF (20)
    if (_sorted_result_15009 == 0)
    {
        goto L5; // [120] 135
    }
    else{
    }
    // SubProg pairs pc: 123 op: STARTLINE (58)

    /** map.e:1060			return stdsort:sort( pairs )*/
    // SubProg pairs pc: 125 op: PROC (27)
    RefDS(_pairs_15013);
    _8117 = _25sort(_pairs_15013, 1);
    // SubProg pairs pc: 130 op: RETURNF (28)

// Exiting block BLOCK: pairs

// block var the_map_15008
    DeRef(_the_map_15008);

// block var sorted_result_15009

// block var slots_15010
    DeRef(_slots_15010);

// block var pairs_15013
    DeRefDS(_pairs_15013);

// block var px_15017
    return _8117;
    // SubProg pairs pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 15006 op: 159
    // SubProg pairs pc: 135 op: STARTLINE (58)

    /** map.e:1062		return pairs*/
    // SubProg pairs pc: 137 op: RETURNF (28)

// Exiting block BLOCK: pairs

// block var the_map_15008
    DeRef(_the_map_15008);

// block var sorted_result_15009

// block var slots_15010
    DeRef(_slots_15010);

// block var px_15017
    DeRef(_8117);
    _8117 = NOVALUE;
    return _pairs_15013;
    // SubProg pairs pc: 141 op: BADRETURNF (43)
    ;
}



// 0x4208E0A1
