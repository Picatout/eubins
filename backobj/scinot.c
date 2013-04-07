// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _21reverse(object _s_3333)
{
    object _lower_3334 = NOVALUE;
    object _n_3335 = NOVALUE;
    object _n2_3336 = NOVALUE;
    object _t_3337 = NOVALUE;
// skipping _1541  name type: 0
    object _1540 = NOVALUE; // 3346 1540
    object _1539 = NOVALUE; // 3345 1539
    object _1538 = NOVALUE; // 3344 1538
// skipping _1537  name type: 0
// skipping _1536  name type: 0
    object _1535 = NOVALUE; // 3339 1535
// skipping _1534  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reverse pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg reverse pc: 3 op: STARTLINE (58)

    /** scinot.e:87		n = length(s)*/
    // SubProg reverse pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3333)){
            _n_3335 = SEQ_PTR(_s_3333)->length;
    }
    else {
        _n_3335 = 1;
    }
    // SubProg reverse pc: 8 op: STARTLINE (58)

    /** scinot.e:88		n2 = floor(n/2)+1*/
    // SubProg reverse pc: 10 op: FLOOR_DIV2 (66)
    _1535 = _n_3335 >> 1;
    // SubProg reverse pc: 14 op: PLUS1_I (117)
    _n2_3336 = _1535 + 1;
    _1535 = NOVALUE;
    // SubProg reverse pc: 18 op: STARTLINE (58)

    /** scinot.e:89		t = repeat(0, n)*/
    // SubProg reverse pc: 20 op: REPEAT (32)
    DeRef(_t_3337);
    _t_3337 = Repeat(0, _n_3335);
    // SubProg reverse pc: 24 op: STARTLINE (58)

    /** scinot.e:90		lower = 1*/
    // SubProg reverse pc: 26 op: ASSIGN_I (113)
    _lower_3334 = 1;
    // SubProg reverse pc: 29 op: STARTLINE (58)

    /** scinot.e:91		for upper = n to n2 by -1 do*/
    // SubProg reverse pc: 31 op: ASSIGN (18)
    _1538 = _n2_3336;
    // SubProg reverse pc: 34 op: FOR_I (125)
    {
        object _upper_3343;
        _upper_3343 = _n_3335;
L1: // addr: 41 pc: 34 sub: 3331 op: 125
        if (_upper_3343 < _1538){
            goto L2; // [34] 74
        }
        // SubProg reverse pc: 41 op: STARTLINE (58)

        /** scinot.e:92			t[upper] = s[lower]*/
        // SubProg reverse pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_3333);
        _1539 = (object)*(((s1_ptr)_2)->base + _lower_3334);
        // SubProg reverse pc: 47 op: ASSIGN_SUBS (16)
        Ref(_1539);
        _2 = (object)SEQ_PTR(_t_3337);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_3337 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _upper_3343);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1539;
        if( _1 != _1539 ){
            DeRef(_1);
        }
        _1539 = NOVALUE;
        // SubProg reverse pc: 51 op: STARTLINE (58)

        /** scinot.e:93			t[lower] = s[upper]*/
        // SubProg reverse pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_3333);
        _1540 = (object)*(((s1_ptr)_2)->base + _upper_3343);
        // SubProg reverse pc: 57 op: ASSIGN_SUBS (16)
        Ref(_1540);
        _2 = (object)SEQ_PTR(_t_3337);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_3337 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lower_3334);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1540;
        if( _1 != _1540 ){
            DeRef(_1);
        }
        _1540 = NOVALUE;
        // SubProg reverse pc: 61 op: STARTLINE (58)

        /** scinot.e:94			lower += 1*/
        // SubProg reverse pc: 63 op: PLUS1_I (117)
        _lower_3334 = _lower_3334 + 1;
        // SubProg reverse pc: 67 op: STARTLINE (58)

        /** scinot.e:95		end for*/
        // SubProg reverse pc: 69 op: ENDFOR_GENERAL (39)
        _upper_3343 = _upper_3343 + -1;
        goto L1; // [69] 41
L2: // addr: 74 pc: 69 sub: 3331 op: 39
        ;
    }
    // SubProg reverse pc: 74 op: STARTLINE (58)

    /** scinot.e:96		return t*/
    // SubProg reverse pc: 76 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var s_3333
    DeRefDS(_s_3333);

// block var lower_3334

// block var n_3335

// block var n2_3336
    return _t_3337;
    // SubProg reverse pc: 80 op: BADRETURNF (43)
    ;
}


object _21carry(object _a_3350, object _radix_3351)
{
    object _q_3352 = NOVALUE;
    object _r_3353 = NOVALUE;
    object _b_3354 = NOVALUE;
    object _rmax_3355 = NOVALUE;
    object _i_3356 = NOVALUE;
// skipping _1555  name type: 0
    object _1554 = NOVALUE; // 3372 1554
    object _1553 = NOVALUE; // 3371 1553
    object _1552 = NOVALUE; // 3370 1552
// skipping _1551  name type: 0
// skipping _1550  name type: 0
    object _1549 = NOVALUE; // 3367 1549
// skipping _1548  name type: 0
// skipping _1547  name type: 0
// skipping _1546  name type: 0
// skipping _1545  name type: 0
// skipping _1544  name type: 0
    object _1543 = NOVALUE; // 3359 1543
// skipping _1542  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg carry pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg carry pc: 3 op: INTEGER_CHECK (96)
    // SubProg carry pc: 5 op: STARTLINE (58)

    /** scinot.e:102		rmax = radix - 1*/
    // SubProg carry pc: 7 op: MINUS (10)
    DeRef(_rmax_3355);
    _rmax_3355 = _radix_3351 - 1;
    if ((object)((uintptr_t)_rmax_3355 +(uintptr_t) HIGH_BITS) >= 0){
        _rmax_3355 = NewDouble((eudouble)_rmax_3355);
    }
    // SubProg carry pc: 11 op: STARTLINE (58)

    /** scinot.e:103		i = 1*/
    // SubProg carry pc: 13 op: ASSIGN (18)
    DeRef(_i_3356);
    _i_3356 = 1;
    // SubProg carry pc: 16 op: STARTLINE (58)

    /** scinot.e:104		while i <= length(a) do*/
    // SubProg carry pc: 18 op: NOP2 (110)
    // SubProg carry pc: 20 op: NOPWHILE (158)
L1: // addr: 21 pc: 20 sub: 3348 op: 158
    // SubProg carry pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3350)){
            _1543 = SEQ_PTR(_a_3350)->length;
    }
    else {
        _1543 = 1;
    }
    // SubProg carry pc: 24 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _i_3356, _1543)){
        _1543 = NOVALUE;
        goto L2; // [24] 104
    }
    _1543 = NOVALUE;
    // SubProg carry pc: 28 op: STARTLINE (58)

    /** scinot.e:105			b = a[i]*/
    // SubProg carry pc: 30 op: RHS_SUBS (25)
    DeRef(_b_3354);
    _2 = (object)SEQ_PTR(_a_3350);
    if (!IS_ATOM_INT(_i_3356)){
        _b_3354 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_3356)->dbl));
    }
    else{
        _b_3354 = (object)*(((s1_ptr)_2)->base + _i_3356);
    }
    Ref(_b_3354);
    // SubProg carry pc: 34 op: STARTLINE (58)

    /** scinot.e:106			if b > rmax then*/
    // SubProg carry pc: 36 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _b_3354, _rmax_3355)){
        goto L3; // [36] 93
    }
    // SubProg carry pc: 40 op: STARTLINE (58)

    /** scinot.e:107				q = floor( b / radix )*/
    // SubProg carry pc: 42 op: FLOOR_DIV (63)
    DeRef(_q_3352);
    if (IS_ATOM_INT(_b_3354)) {
        if (_radix_3351 > 0 && _b_3354 >= 0) {
            _q_3352 = _b_3354 / _radix_3351;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_b_3354 / (eudouble)_radix_3351);
            if (_b_3354 != MININT)
            _q_3352 = (object)temp_dbl;
            else
            _q_3352 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _b_3354, _radix_3351);
        _q_3352 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg carry pc: 46 op: STARTLINE (58)

    /** scinot.e:108				r = remainder( b, radix )*/
    // SubProg carry pc: 48 op: REMAINDER (71)
    DeRef(_r_3353);
    if (IS_ATOM_INT(_b_3354)) {
        _r_3353 = (_b_3354 % _radix_3351);
    }
    else {
        temp_d.dbl = (eudouble)_radix_3351;
        _r_3353 = Dremainder(DBL_PTR(_b_3354), &temp_d);
    }
    // SubProg carry pc: 52 op: STARTLINE (58)

    /** scinot.e:109				a[i] = r*/
    // SubProg carry pc: 54 op: ASSIGN_SUBS (16)
    Ref(_r_3353);
    _2 = (object)SEQ_PTR(_a_3350);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_3350 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_i_3356))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_3356)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _i_3356);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_3353;
    DeRef(_1);
    // SubProg carry pc: 58 op: STARTLINE (58)

    /** scinot.e:110				if i = length(a) then*/
    // SubProg carry pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3350)){
            _1549 = SEQ_PTR(_a_3350)->length;
    }
    else {
        _1549 = 1;
    }
    // SubProg carry pc: 63 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _i_3356, _1549)){
        _1549 = NOVALUE;
        goto L4; // [63] 74
    }
    _1549 = NOVALUE;
    // SubProg carry pc: 67 op: STARTLINE (58)

    /** scinot.e:111					a &= 0*/
    // SubProg carry pc: 69 op: CONCAT (15)
    Append(&_a_3350, _a_3350, 0);
    // SubProg carry pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 3348 op: 159
    // SubProg carry pc: 74 op: STARTLINE (58)

    /** scinot.e:113				a[i+1] += q*/
    // SubProg carry pc: 76 op: PLUS1 (93)
    if (IS_ATOM_INT(_i_3356)) {
        _1552 = _i_3356 + 1;
    }
    else
    _1552 = binary_op(PLUS, 1, _i_3356);
    // SubProg carry pc: 80 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_a_3350);
    if (!IS_ATOM_INT(_1552)){
        _1553 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_1552)->dbl));
    }
    else{
        _1553 = (object)*(((s1_ptr)_2)->base + _1552);
    }
    // SubProg carry pc: 84 op: PLUS (11)
    if (IS_ATOM_INT(_1553) && IS_ATOM_INT(_q_3352)) {
        _1554 = _1553 + _q_3352;
        if ((object)((uintptr_t)_1554 + (uintptr_t)HIGH_BITS) >= 0){
            _1554 = NewDouble((eudouble)_1554);
        }
    }
    else {
        _1554 = binary_op(PLUS, _1553, _q_3352);
    }
    _1553 = NOVALUE;
    // SubProg carry pc: 88 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_a_3350);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_3350 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_1552))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_1552)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _1552);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1554;
    if( _1 != _1554 ){
        DeRef(_1);
    }
    _1554 = NOVALUE;
    // SubProg carry pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 3348 op: 159
    // SubProg carry pc: 93 op: STARTLINE (58)

    /** scinot.e:115			i += 1*/
    // SubProg carry pc: 95 op: PLUS1 (93)
    _0 = _i_3356;
    if (IS_ATOM_INT(_i_3356)) {
        _i_3356 = _i_3356 + 1;
        if (_i_3356 > MAXINT){
            _i_3356 = NewDouble((eudouble)_i_3356);
        }
    }
    else
    _i_3356 = binary_op(PLUS, 1, _i_3356);
    DeRef(_0);
    // SubProg carry pc: 99 op: STARTLINE (58)

    /** scinot.e:116		end while*/
    // SubProg carry pc: 101 op: ENDWHILE (22)
    goto L1; // [101] 21
    // SubProg carry pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 3348 op: 159
    // SubProg carry pc: 104 op: STARTLINE (58)

    /** scinot.e:118		return a*/
    // SubProg carry pc: 106 op: RETURNF (28)

// Exiting block BLOCK: carry

// block var radix_3351

// block var q_3352
    DeRef(_q_3352);

// block var r_3353
    DeRef(_r_3353);

// block var b_3354
    DeRef(_b_3354);

// block var rmax_3355
    DeRef(_rmax_3355);

// block var i_3356
    DeRef(_i_3356);
    DeRef(_1552);
    _1552 = NOVALUE;
    return _a_3350;
    // SubProg carry pc: 110 op: BADRETURNF (43)
    ;
}


object _21add(object _a_3376, object _b_3377)
{
    object _1572 = NOVALUE; // 3396 1572
// skipping _1571  name type: 0
    object _1570 = NOVALUE; // 3394 1570
    object _1569 = NOVALUE; // 3393 1569
    object _1568 = NOVALUE; // 3392 1568
    object _1567 = NOVALUE; // 3391 1567
// skipping _1566  name type: 0
    object _1565 = NOVALUE; // 3389 1565
    object _1564 = NOVALUE; // 3388 1564
// skipping _1563  name type: 0
    object _1562 = NOVALUE; // 3385 1562
    object _1561 = NOVALUE; // 3384 1561
    object _1560 = NOVALUE; // 3383 1560
    object _1559 = NOVALUE; // 3382 1559
// skipping _1558  name type: 0
    object _1557 = NOVALUE; // 3380 1557
    object _1556 = NOVALUE; // 3379 1556
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add pc: 5 op: STARTLINE (58)

    /** scinot.e:123		if length(a) < length(b) then*/
    // SubProg add pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3376)){
            _1556 = SEQ_PTR(_a_3376)->length;
    }
    else {
        _1556 = 1;
    }
    // SubProg add pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_b_3377)){
            _1557 = SEQ_PTR(_b_3377)->length;
    }
    else {
        _1557 = 1;
    }
    // SubProg add pc: 13 op: LESS_IFW_I (119)
    if (_1556 >= _1557)
    goto L1; // [13] 40
    // SubProg add pc: 17 op: STARTLINE (58)

    /** scinot.e:124			a &= repeat( 0, length(b) - length(a) )*/
    // SubProg add pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_b_3377)){
            _1559 = SEQ_PTR(_b_3377)->length;
    }
    else {
        _1559 = 1;
    }
    // SubProg add pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3376)){
            _1560 = SEQ_PTR(_a_3376)->length;
    }
    else {
        _1560 = 1;
    }
    // SubProg add pc: 25 op: MINUS (10)
    _1561 = _1559 - _1560;
    _1559 = NOVALUE;
    _1560 = NOVALUE;
    // SubProg add pc: 29 op: REPEAT (32)
    _1562 = Repeat(0, _1561);
    _1561 = NOVALUE;
    // SubProg add pc: 33 op: CONCAT (15)
    Concat((object_ptr)&_a_3376, _a_3376, _1562);
    DeRefDS(_1562);
    _1562 = NOVALUE;
    // SubProg add pc: 37 op: ELSE (23)
    goto L2; // [37] 74
    // SubProg add pc: 39 op: NOP1 (159)
L1: // addr: 40 pc: 39 sub: 3374 op: 159
    // SubProg add pc: 40 op: STARTLINE (58)

    /** scinot.e:125		elsif length(b) < length(a) then*/
    // SubProg add pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_b_3377)){
            _1564 = SEQ_PTR(_b_3377)->length;
    }
    else {
        _1564 = 1;
    }
    // SubProg add pc: 45 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3376)){
            _1565 = SEQ_PTR(_a_3376)->length;
    }
    else {
        _1565 = 1;
    }
    // SubProg add pc: 48 op: LESS_IFW_I (119)
    if (_1564 >= _1565)
    goto L3; // [48] 73
    // SubProg add pc: 52 op: STARTLINE (58)

    /** scinot.e:126			b &= repeat( 0, length(a) - length(b) )*/
    // SubProg add pc: 54 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3376)){
            _1567 = SEQ_PTR(_a_3376)->length;
    }
    else {
        _1567 = 1;
    }
    // SubProg add pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_b_3377)){
            _1568 = SEQ_PTR(_b_3377)->length;
    }
    else {
        _1568 = 1;
    }
    // SubProg add pc: 60 op: MINUS (10)
    _1569 = _1567 - _1568;
    _1567 = NOVALUE;
    _1568 = NOVALUE;
    // SubProg add pc: 64 op: REPEAT (32)
    _1570 = Repeat(0, _1569);
    _1569 = NOVALUE;
    // SubProg add pc: 68 op: CONCAT (15)
    Concat((object_ptr)&_b_3377, _b_3377, _1570);
    DeRefDS(_1570);
    _1570 = NOVALUE;
    // SubProg add pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 3374 op: 159
    // SubProg add pc: 73 op: NOP1 (159)
L2: // addr: 74 pc: 73 sub: 3374 op: 159
    // SubProg add pc: 74 op: STARTLINE (58)

    /** scinot.e:129		return a + b*/
    // SubProg add pc: 76 op: PLUS (11)
    _1572 = binary_op(PLUS, _a_3376, _b_3377);
    // SubProg add pc: 80 op: RETURNF (28)

// Exiting block BLOCK: add

// block var a_3376
    DeRefDS(_a_3376);

// block var b_3377
    DeRefDS(_b_3377);
    return _1572;
    // SubProg add pc: 84 op: BADRETURNF (43)
    ;
}


object _21borrow(object _a_3399, object _radix_3400)
{
    object _1580 = NOVALUE; // 3411 1580
    object _1579 = NOVALUE; // 3410 1579
    object _1578 = NOVALUE; // 3409 1578
    object _1577 = NOVALUE; // 3408 1577
    object _1576 = NOVALUE; // 3407 1576
// skipping _1575  name type: 0
    object _1574 = NOVALUE; // 3405 1574
    object _1573 = NOVALUE; // 3403 1573
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg borrow pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg borrow pc: 3 op: INTEGER_CHECK (96)
    // SubProg borrow pc: 5 op: STARTLINE (58)

    /** scinot.e:134		for i = length(a) to 2 by -1 do*/
    // SubProg borrow pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3399)){
            _1573 = SEQ_PTR(_a_3399)->length;
    }
    else {
        _1573 = 1;
    }
    // SubProg borrow pc: 10 op: FOR_I (125)
    {
        object _i_3402;
        _i_3402 = _1573;
L1: // addr: 17 pc: 10 sub: 3397 op: 125
        if (_i_3402 < 2){
            goto L2; // [10] 67
        }
        // SubProg borrow pc: 17 op: STARTLINE (58)

        /** scinot.e:135			if a[i] < 0 then*/
        // SubProg borrow pc: 19 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_a_3399);
        _1574 = (object)*(((s1_ptr)_2)->base + _i_3402);
        // SubProg borrow pc: 23 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _1574, 0)){
            _1574 = NOVALUE;
            goto L3; // [23] 60
        }
        _1574 = NOVALUE;
        // SubProg borrow pc: 27 op: STARTLINE (58)

        /** scinot.e:136				a[i] += radix*/
        // SubProg borrow pc: 29 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_a_3399);
        _1576 = (object)*(((s1_ptr)_2)->base + _i_3402);
        // SubProg borrow pc: 33 op: PLUS (11)
        if (IS_ATOM_INT(_1576)) {
            _1577 = _1576 + _radix_3400;
            if ((object)((uintptr_t)_1577 + (uintptr_t)HIGH_BITS) >= 0){
                _1577 = NewDouble((eudouble)_1577);
            }
        }
        else {
            _1577 = binary_op(PLUS, _1576, _radix_3400);
        }
        _1576 = NOVALUE;
        // SubProg borrow pc: 37 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_a_3399);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_3399 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_3402);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1577;
        if( _1 != _1577 ){
            DeRef(_1);
        }
        _1577 = NOVALUE;
        // SubProg borrow pc: 41 op: STARTLINE (58)

        /** scinot.e:137				a[i-1] -= 1*/
        // SubProg borrow pc: 43 op: MINUS (10)
        _1578 = _i_3402 - 1;
        // SubProg borrow pc: 47 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_a_3399);
        _1579 = (object)*(((s1_ptr)_2)->base + _1578);
        // SubProg borrow pc: 51 op: MINUS (10)
        if (IS_ATOM_INT(_1579)) {
            _1580 = _1579 - 1;
            if ((object)((uintptr_t)_1580 +(uintptr_t) HIGH_BITS) >= 0){
                _1580 = NewDouble((eudouble)_1580);
            }
        }
        else {
            _1580 = binary_op(MINUS, _1579, 1);
        }
        _1579 = NOVALUE;
        // SubProg borrow pc: 55 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_a_3399);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_3399 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _1578);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1580;
        if( _1 != _1580 ){
            DeRef(_1);
        }
        _1580 = NOVALUE;
        // SubProg borrow pc: 59 op: NOP1 (159)
L3: // addr: 60 pc: 59 sub: 3397 op: 159
        // SubProg borrow pc: 60 op: STARTLINE (58)

        /** scinot.e:139		end for*/
        // SubProg borrow pc: 62 op: ENDFOR_GENERAL (39)
        _i_3402 = _i_3402 + -1;
        goto L1; // [62] 17
L2: // addr: 67 pc: 62 sub: 3397 op: 39
        ;
    }
    // SubProg borrow pc: 67 op: STARTLINE (58)

    /** scinot.e:140		return a*/
    // SubProg borrow pc: 69 op: RETURNF (28)

// Exiting block BLOCK: borrow

// block var radix_3400
    DeRef(_1578);
    _1578 = NOVALUE;
    return _a_3399;
    // SubProg borrow pc: 73 op: BADRETURNF (43)
    ;
}


object _21bits_to_bytes(object _bits_3414)
{
    object _bytes_3415 = NOVALUE;
    object _r_3416 = NOVALUE;
// skipping _1590  name type: 0
    object _1589 = NOVALUE; // 3429 1589
    object _1588 = NOVALUE; // 3428 1588
    object _1587 = NOVALUE; // 3427 1587
    object _1586 = NOVALUE; // 3425 1586
// skipping _1585  name type: 0
    object _1584 = NOVALUE; // 3421 1584
    object _1583 = NOVALUE; // 3420 1583
// skipping _1582  name type: 0
    object _1581 = NOVALUE; // 3417 1581
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bits_to_bytes pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_bytes pc: 3 op: STARTLINE (58)

    /** scinot.e:155		r = remainder( length(bits), 8 )*/
    // SubProg bits_to_bytes pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_3414)){
            _1581 = SEQ_PTR(_bits_3414)->length;
    }
    else {
        _1581 = 1;
    }
    // SubProg bits_to_bytes pc: 8 op: REMAINDER (71)
    _r_3416 = (_1581 % 8);
    _1581 = NOVALUE;
    // SubProg bits_to_bytes pc: 12 op: STARTLINE (58)

    /** scinot.e:156		if r  then*/
    // SubProg bits_to_bytes pc: 14 op: IF (20)
    if (_r_3416 == 0)
    {
        goto L1; // [14] 32
    }
    else{
    }
    // SubProg bits_to_bytes pc: 17 op: STARTLINE (58)

    /** scinot.e:157			bits &= repeat( 0, 8 - r )*/
    // SubProg bits_to_bytes pc: 19 op: MINUS (10)
    _1583 = 8 - _r_3416;
    // SubProg bits_to_bytes pc: 23 op: REPEAT (32)
    _1584 = Repeat(0, _1583);
    _1583 = NOVALUE;
    // SubProg bits_to_bytes pc: 27 op: CONCAT (15)
    Concat((object_ptr)&_bits_3414, _bits_3414, _1584);
    DeRefDS(_1584);
    _1584 = NOVALUE;
    // SubProg bits_to_bytes pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 3412 op: 159
    // SubProg bits_to_bytes pc: 32 op: STARTLINE (58)

    /** scinot.e:160		bytes = {}*/
    // SubProg bits_to_bytes pc: 34 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_bytes_3415);
    _bytes_3415 = _5;
    // SubProg bits_to_bytes pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_bytes pc: 39 op: STARTLINE (58)

    /** scinot.e:161		for i = 1 to length(bits) by 8 do*/
    // SubProg bits_to_bytes pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_3414)){
            _1586 = SEQ_PTR(_bits_3414)->length;
    }
    else {
        _1586 = 1;
    }
    // SubProg bits_to_bytes pc: 44 op: FOR_I (125)
    {
        object _i_3424;
        _i_3424 = 1;
L2: // addr: 51 pc: 44 sub: 3412 op: 125
        if (_i_3424 > _1586){
            goto L3; // [44] 77
        }
        // SubProg bits_to_bytes pc: 51 op: STARTLINE (58)

        /** scinot.e:162			bytes &= bits_to_int( bits[i..i+7] )*/
        // SubProg bits_to_bytes pc: 53 op: PLUS (11)
        _1587 = _i_3424 + 7;
        // SubProg bits_to_bytes pc: 57 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_1588;
        RHS_Slice(_bits_3414, _i_3424, _1587);
        // SubProg bits_to_bytes pc: 62 op: PROC (27)
        _1589 = _16bits_to_int(_1588);
        _1588 = NOVALUE;
        // SubProg bits_to_bytes pc: 66 op: CONCAT (15)
        if (IS_SEQUENCE(_bytes_3415) && IS_ATOM(_1589)) {
            Ref(_1589);
            Append(&_bytes_3415, _bytes_3415, _1589);
        }
        else if (IS_ATOM(_bytes_3415) && IS_SEQUENCE(_1589)) {
        }
        else {
            Concat((object_ptr)&_bytes_3415, _bytes_3415, _1589);
        }
        DeRef(_1589);
        _1589 = NOVALUE;
        // SubProg bits_to_bytes pc: 70 op: STARTLINE (58)

        /** scinot.e:163		end for*/
        // SubProg bits_to_bytes pc: 72 op: ENDFOR_GENERAL (39)
        _i_3424 = _i_3424 + 8;
        goto L2; // [72] 51
L3: // addr: 77 pc: 72 sub: 3412 op: 39
        ;
    }
    // SubProg bits_to_bytes pc: 77 op: STARTLINE (58)

    /** scinot.e:164		return bytes*/
    // SubProg bits_to_bytes pc: 79 op: RETURNF (28)

// Exiting block BLOCK: bits_to_bytes

// block var bits_3414
    DeRefDS(_bits_3414);

// block var r_3416
    DeRef(_1587);
    _1587 = NOVALUE;
    return _bytes_3415;
    // SubProg bits_to_bytes pc: 83 op: BADRETURNF (43)
    ;
}


object _21bytes_to_bits(object _bytes_3433)
{
    object _bits_3434 = NOVALUE;
// skipping _1594  name type: 0
    object _1593 = NOVALUE; // 3440 1593
    object _1592 = NOVALUE; // 3439 1592
    object _1591 = NOVALUE; // 3437 1591
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bytes_to_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bytes_to_bits pc: 3 op: STARTLINE (58)

    /** scinot.e:179		bits = {}*/
    // SubProg bytes_to_bits pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_bits_3434);
    _bits_3434 = _5;
    // SubProg bytes_to_bits pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg bytes_to_bits pc: 10 op: STARTLINE (58)

    /** scinot.e:180		for i = 1 to length(bytes) do*/
    // SubProg bytes_to_bits pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_bytes_3433)){
            _1591 = SEQ_PTR(_bytes_3433)->length;
    }
    else {
        _1591 = 1;
    }
    // SubProg bytes_to_bits pc: 15 op: FOR_I (125)
    {
        object _i_3436;
        _i_3436 = 1;
L1: // addr: 22 pc: 15 sub: 3431 op: 125
        if (_i_3436 > _1591){
            goto L2; // [15] 44
        }
        // SubProg bytes_to_bits pc: 22 op: STARTLINE (58)

        /** scinot.e:181			bits &= int_to_bits( bytes[i], 8 )*/
        // SubProg bytes_to_bits pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_bytes_3433);
        _1592 = (object)*(((s1_ptr)_2)->base + _i_3436);
        // SubProg bytes_to_bits pc: 28 op: PROC (27)
        Ref(_1592);
        _1593 = _16int_to_bits(_1592, 8);
        _1592 = NOVALUE;
        // SubProg bytes_to_bits pc: 33 op: CONCAT (15)
        if (IS_SEQUENCE(_bits_3434) && IS_ATOM(_1593)) {
            Ref(_1593);
            Append(&_bits_3434, _bits_3434, _1593);
        }
        else if (IS_ATOM(_bits_3434) && IS_SEQUENCE(_1593)) {
        }
        else {
            Concat((object_ptr)&_bits_3434, _bits_3434, _1593);
        }
        DeRef(_1593);
        _1593 = NOVALUE;
        // SubProg bytes_to_bits pc: 37 op: STARTLINE (58)

        /** scinot.e:182		end for*/
        // SubProg bytes_to_bits pc: 39 op: ENDFOR_INT_UP1 (54)
        _i_3436 = _i_3436 + 1;
        goto L1; // [39] 22
L2: // addr: 44 pc: 39 sub: 3431 op: 54
        ;
    }
    // SubProg bytes_to_bits pc: 44 op: STARTLINE (58)

    /** scinot.e:184		return bits*/
    // SubProg bytes_to_bits pc: 46 op: RETURNF (28)

// Exiting block BLOCK: bytes_to_bits

// block var bytes_3433
    DeRefDS(_bytes_3433);
    return _bits_3434;
    // SubProg bytes_to_bits pc: 50 op: BADRETURNF (43)
    ;
}


object _21convert_radix(object _number_3444, object _from_radix_3445, object _to_radix_3446)
{
    object _target_3447 = NOVALUE;
    object _base_3448 = NOVALUE;
// skipping _1603  name type: 0
// skipping _1602  name type: 0
// skipping _1601  name type: 0
    object _1600 = NOVALUE; // 3456 1600
    object _1599 = NOVALUE; // 3455 1599
    object _1598 = NOVALUE; // 3454 1598
    object _1597 = NOVALUE; // 3453 1597
// skipping _1596  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg convert_radix pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg convert_radix pc: 3 op: INTEGER_CHECK (96)
    // SubProg convert_radix pc: 5 op: INTEGER_CHECK (96)
    // SubProg convert_radix pc: 7 op: STARTLINE (58)

    /** scinot.e:190		base = {1}*/
    // SubProg convert_radix pc: 9 op: ASSIGN (18)
    RefDS(_1595);
    DeRef(_base_3448);
    _base_3448 = _1595;
    // SubProg convert_radix pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg convert_radix pc: 14 op: STARTLINE (58)

    /** scinot.e:191		target = {0}*/
    // SubProg convert_radix pc: 16 op: RIGHT_BRACE_N (31)
    _0 = _target_3447;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _target_3447 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg convert_radix pc: 20 op: STARTLINE (58)

    /** scinot.e:192		for i = 1 to length(number) do*/
    // SubProg convert_radix pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_number_3444)){
            _1597 = SEQ_PTR(_number_3444)->length;
    }
    else {
        _1597 = 1;
    }
    // SubProg convert_radix pc: 25 op: FOR_I (125)
    {
        object _i_3452;
        _i_3452 = 1;
L1: // addr: 32 pc: 25 sub: 3442 op: 125
        if (_i_3452 > _1597){
            goto L2; // [25] 78
        }
        // SubProg convert_radix pc: 32 op: STARTLINE (58)

        /** scinot.e:193			target = carry( add( base * number[i], target ), to_radix )*/
        // SubProg convert_radix pc: 34 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_number_3444);
        _1598 = (object)*(((s1_ptr)_2)->base + _i_3452);
        // SubProg convert_radix pc: 38 op: MULTIPLY (13)
        _1599 = binary_op(MULTIPLY, _base_3448, _1598);
        _1598 = NOVALUE;
        // SubProg convert_radix pc: 42 op: PROC (27)
        RefDS(_target_3447);
        _1600 = _21add(_1599, _target_3447);
        _1599 = NOVALUE;
        // SubProg convert_radix pc: 47 op: PROC (27)
        _0 = _target_3447;
        _target_3447 = _21carry(_1600, _to_radix_3446);
        DeRefDS(_0);
        _1600 = NOVALUE;
        // SubProg convert_radix pc: 52 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 54 op: STARTLINE (58)

        /** scinot.e:194			base *= from_radix*/
        // SubProg convert_radix pc: 56 op: MULTIPLY (13)
        _0 = _base_3448;
        _base_3448 = binary_op(MULTIPLY, _base_3448, _from_radix_3445);
        DeRefDS(_0);
        // SubProg convert_radix pc: 60 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 62 op: STARTLINE (58)

        /** scinot.e:195			base = carry( base, to_radix )*/
        // SubProg convert_radix pc: 64 op: PROC (27)
        RefDS(_base_3448);
        _0 = _base_3448;
        _base_3448 = _21carry(_base_3448, _to_radix_3446);
        DeRefDS(_0);
        // SubProg convert_radix pc: 69 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 71 op: STARTLINE (58)

        /** scinot.e:196		end for*/
        // SubProg convert_radix pc: 73 op: ENDFOR_INT_UP1 (54)
        _i_3452 = _i_3452 + 1;
        goto L1; // [73] 32
L2: // addr: 78 pc: 73 sub: 3442 op: 54
        ;
    }
    // SubProg convert_radix pc: 78 op: STARTLINE (58)

    /** scinot.e:198		return target*/
    // SubProg convert_radix pc: 80 op: RETURNF (28)

// Exiting block BLOCK: convert_radix

// block var number_3444
    DeRefDS(_number_3444);

// block var from_radix_3445

// block var to_radix_3446

// block var base_3448
    DeRef(_base_3448);
    return _target_3447;
    // SubProg convert_radix pc: 84 op: BADRETURNF (43)
    ;
}


object _21half(object _decimal_3462)
{
    object _quotient_3463 = NOVALUE;
    object _q_3464 = NOVALUE;
    object _Q_3465 = NOVALUE;
    object _1621 = NOVALUE; // 3487 1621
    object _1620 = NOVALUE; // 3486 1620
    object _1619 = NOVALUE; // 3485 1619
    object _1618 = NOVALUE; // 3484 1618
    object _1617 = NOVALUE; // 3483 1617
    object _1616 = NOVALUE; // 3482 1616
// skipping _1615  name type: 0
// skipping _1614  name type: 0
    object _1613 = NOVALUE; // 3479 1613
// skipping _1612  name type: 0
    object _1611 = NOVALUE; // 3475 1611
    object _1610 = NOVALUE; // 3474 1610
// skipping _1609  name type: 0
// skipping _1608  name type: 0
    object _1607 = NOVALUE; // 3471 1607
    object _1606 = NOVALUE; // 3470 1606
// skipping _1605  name type: 0
    object _1604 = NOVALUE; // 3466 1604
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg half pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg half pc: 3 op: STARTLINE (58)

    /** scinot.e:205		quotient = repeat( 0, length(decimal) )*/
    // SubProg half pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_decimal_3462)){
            _1604 = SEQ_PTR(_decimal_3462)->length;
    }
    else {
        _1604 = 1;
    }
    // SubProg half pc: 8 op: REPEAT (32)
    DeRef(_quotient_3463);
    _quotient_3463 = Repeat(0, _1604);
    _1604 = NOVALUE;
    // SubProg half pc: 12 op: STARTLINE (58)

    /** scinot.e:206		for i = 1 to length( decimal ) do*/
    // SubProg half pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_decimal_3462)){
            _1606 = SEQ_PTR(_decimal_3462)->length;
    }
    else {
        _1606 = 1;
    }
    // SubProg half pc: 17 op: FOR_I (125)
    {
        object _i_3469;
        _i_3469 = 1;
L1: // addr: 24 pc: 17 sub: 3460 op: 125
        if (_i_3469 > _1606){
            goto L2; // [17] 101
        }
        // SubProg half pc: 24 op: STARTLINE (58)

        /** scinot.e:207			q = decimal[i] / 2*/
        // SubProg half pc: 26 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_decimal_3462);
        _1607 = (object)*(((s1_ptr)_2)->base + _i_3469);
        // SubProg half pc: 30 op: DIV2 (98)
        DeRef(_q_3464);
        if (IS_ATOM_INT(_1607)) {
            if (_1607 & 1) {
                _q_3464 = NewDouble((_1607 >> 1) + 0.5);
            }
            else
            _q_3464 = _1607 >> 1;
        }
        else {
            _q_3464 = binary_op(DIVIDE, _1607, 2);
        }
        _1607 = NOVALUE;
        // SubProg half pc: 34 op: STARTLINE (58)

        /** scinot.e:208			Q = floor( q )*/
        // SubProg half pc: 36 op: FLOOR (83)
        DeRef(_Q_3465);
        if (IS_ATOM_INT(_q_3464))
        _Q_3465 = e_floor(_q_3464);
        else
        _Q_3465 = unary_op(FLOOR, _q_3464);
        // SubProg half pc: 39 op: STARTLINE (58)

        /** scinot.e:209			quotient[i] +=  Q*/
        // SubProg half pc: 41 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_quotient_3463);
        _1610 = (object)*(((s1_ptr)_2)->base + _i_3469);
        // SubProg half pc: 45 op: PLUS (11)
        if (IS_ATOM_INT(_1610) && IS_ATOM_INT(_Q_3465)) {
            _1611 = _1610 + _Q_3465;
            if ((object)((uintptr_t)_1611 + (uintptr_t)HIGH_BITS) >= 0){
                _1611 = NewDouble((eudouble)_1611);
            }
        }
        else {
            _1611 = binary_op(PLUS, _1610, _Q_3465);
        }
        _1610 = NOVALUE;
        // SubProg half pc: 49 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_quotient_3463);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_3463 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_3469);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1611;
        if( _1 != _1611 ){
            DeRef(_1);
        }
        _1611 = NOVALUE;
        // SubProg half pc: 53 op: STARTLINE (58)

        /** scinot.e:211			if q != Q then*/
        // SubProg half pc: 55 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _q_3464, _Q_3465)){
            goto L3; // [55] 94
        }
        // SubProg half pc: 59 op: STARTLINE (58)

        /** scinot.e:212				if length(quotient) = i then*/
        // SubProg half pc: 61 op: LENGTH (42)
        if (IS_SEQUENCE(_quotient_3463)){
                _1613 = SEQ_PTR(_quotient_3463)->length;
        }
        else {
            _1613 = 1;
        }
        // SubProg half pc: 64 op: EQUALS_IFW_I (121)
        if (_1613 != _i_3469)
        goto L4; // [64] 75
        // SubProg half pc: 68 op: STARTLINE (58)

        /** scinot.e:213					quotient &= 0*/
        // SubProg half pc: 70 op: CONCAT (15)
        Append(&_quotient_3463, _quotient_3463, 0);
        // SubProg half pc: 74 op: NOP1 (159)
L4: // addr: 75 pc: 74 sub: 3460 op: 159
        // SubProg half pc: 75 op: STARTLINE (58)

        /** scinot.e:215				quotient[i+1] += 5*/
        // SubProg half pc: 77 op: PLUS1 (93)
        _1616 = _i_3469 + 1;
        // SubProg half pc: 81 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_quotient_3463);
        _1617 = (object)*(((s1_ptr)_2)->base + _1616);
        // SubProg half pc: 85 op: PLUS (11)
        if (IS_ATOM_INT(_1617)) {
            _1618 = _1617 + 5;
            if ((object)((uintptr_t)_1618 + (uintptr_t)HIGH_BITS) >= 0){
                _1618 = NewDouble((eudouble)_1618);
            }
        }
        else {
            _1618 = binary_op(PLUS, _1617, 5);
        }
        _1617 = NOVALUE;
        // SubProg half pc: 89 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_quotient_3463);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_3463 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _1616);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1618;
        if( _1 != _1618 ){
            DeRef(_1);
        }
        _1618 = NOVALUE;
        // SubProg half pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 3460 op: 159
        // SubProg half pc: 94 op: STARTLINE (58)

        /** scinot.e:217		end for*/
        // SubProg half pc: 96 op: ENDFOR_INT_UP1 (54)
        _i_3469 = _i_3469 + 1;
        goto L1; // [96] 24
L2: // addr: 101 pc: 96 sub: 3460 op: 54
        ;
    }
    // SubProg half pc: 101 op: STARTLINE (58)

    /** scinot.e:218		return reverse( carry( reverse( quotient ), 10 ) )*/
    // SubProg half pc: 103 op: PROC (27)
    RefDS(_quotient_3463);
    _1619 = _21reverse(_quotient_3463);
    // SubProg half pc: 107 op: PROC (27)
    _1620 = _21carry(_1619, 10);
    _1619 = NOVALUE;
    // SubProg half pc: 112 op: PROC (27)
    _1621 = _21reverse(_1620);
    _1620 = NOVALUE;
    // SubProg half pc: 116 op: RETURNF (28)

// Exiting block BLOCK: half

// block var decimal_3462
    DeRefDS(_decimal_3462);

// block var quotient_3463
    DeRefDS(_quotient_3463);

// block var q_3464
    DeRef(_q_3464);

// block var Q_3465
    DeRef(_Q_3465);
    DeRef(_1616);
    _1616 = NOVALUE;
    return _1621;
    // SubProg half pc: 120 op: BADRETURNF (43)
    ;
}


object _21decimals_to_bits(object _decimals_3498, object _size_3499)
{
    object _sub_3500 = NOVALUE;
    object _bits_3501 = NOVALUE;
    object _bit_3502 = NOVALUE;
    object _assigned_3503 = NOVALUE;
    object _1649 = NOVALUE; // 3533 1649
// skipping _1648  name type: 0
// skipping _1647  name type: 0
// skipping _1646  name type: 0
    object _1645 = NOVALUE; // 3529 1645
    object _1644 = NOVALUE; // 3528 1644
    object _1643 = NOVALUE; // 3527 1643
    object _1642 = NOVALUE; // 3526 1642
// skipping _1641  name type: 0
    object _1640 = NOVALUE; // 3524 1640
    object _1639 = NOVALUE; // 3523 1639
    object _1638 = NOVALUE; // 3522 1638
// skipping _1637  name type: 0
    object _1636 = NOVALUE; // 3520 1636
// skipping _1635  name type: 0
    object _1634 = NOVALUE; // 3517 1634
    object _1633 = NOVALUE; // 3515 1633
    object _1632 = NOVALUE; // 3514 1632
    object _1631 = NOVALUE; // 3513 1631
    object _1630 = NOVALUE; // 3512 1630
// skipping _1629  name type: 0
    object _1628 = NOVALUE; // 3510 1628
// skipping _1627  name type: 0
    object _1626 = NOVALUE; // 3507 1626
// skipping _1625  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg decimals_to_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 3 op: INTEGER_CHECK (96)
    // SubProg decimals_to_bits pc: 5 op: STARTLINE (58)

    /** scinot.e:233		sub = {5}*/
    // SubProg decimals_to_bits pc: 7 op: ASSIGN (18)
    RefDS(_1624);
    DeRef(_sub_3500);
    _sub_3500 = _1624;
    // SubProg decimals_to_bits pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 12 op: STARTLINE (58)

    /** scinot.e:234		bits = repeat( 0, size )*/
    // SubProg decimals_to_bits pc: 14 op: REPEAT (32)
    DeRef(_bits_3501);
    _bits_3501 = Repeat(0, _size_3499);
    // SubProg decimals_to_bits pc: 18 op: STARTLINE (58)

    /** scinot.e:235		bit = 1*/
    // SubProg decimals_to_bits pc: 20 op: ASSIGN_I (113)
    _bit_3502 = 1;
    // SubProg decimals_to_bits pc: 23 op: STARTLINE (58)

    /** scinot.e:236		assigned = 0*/
    // SubProg decimals_to_bits pc: 25 op: ASSIGN_I (113)
    _assigned_3503 = 0;
    // SubProg decimals_to_bits pc: 28 op: STARTLINE (58)

    /** scinot.e:240		if compare(decimals, bits) > 0 then */
    // SubProg decimals_to_bits pc: 30 op: COMPARE (76)
    if (IS_ATOM_INT(_decimals_3498) && IS_ATOM_INT(_bits_3501)){
        _1626 = (_decimals_3498 < _bits_3501) ? -1 : (_decimals_3498 > _bits_3501);
    }
    else{
        _1626 = compare(_decimals_3498, _bits_3501);
    }
    // SubProg decimals_to_bits pc: 34 op: GREATER_IFW_I (124)
    if (_1626 <= 0)
    goto L1; // [34] 166
    // SubProg decimals_to_bits pc: 38 op: STARTLINE (58)

    /** scinot.e:242			while (not assigned) or (bit < find( 1, bits ) + size + 1)  do*/
    // SubProg decimals_to_bits pc: 40 op: NOP2 (110)
    // SubProg decimals_to_bits pc: 42 op: NOPWHILE (158)
L2: // addr: 43 pc: 42 sub: 3496 op: 158
    // SubProg decimals_to_bits pc: 43 op: NOT (7)
    _1628 = (_assigned_3503 == 0);
    // SubProg decimals_to_bits pc: 46 op: SC1_OR_IF (147)
    if (_1628 != 0) {
        goto L3; // [46] 72
    }
    // SubProg decimals_to_bits pc: 50 op: FIND_FROM (176)
    _1630 = find_from(1, _bits_3501, 1);
    // SubProg decimals_to_bits pc: 55 op: PLUS (11)
    _1631 = _1630 + _size_3499;
    if ((object)((uintptr_t)_1631 + (uintptr_t)HIGH_BITS) >= 0){
        _1631 = NewDouble((eudouble)_1631);
    }
    _1630 = NOVALUE;
    // SubProg decimals_to_bits pc: 59 op: PLUS1 (93)
    if (IS_ATOM_INT(_1631)) {
        _1632 = _1631 + 1;
        if (_1632 > MAXINT){
            _1632 = NewDouble((eudouble)_1632);
        }
    }
    else
    _1632 = binary_op(PLUS, 1, _1631);
    DeRef(_1631);
    _1631 = NOVALUE;
    // SubProg decimals_to_bits pc: 63 op: LESS (1)
    if (IS_ATOM_INT(_1632)) {
        _1633 = (_bit_3502 < _1632);
    }
    else {
        _1633 = ((eudouble)_bit_3502 < DBL_PTR(_1632)->dbl);
    }
    DeRef(_1632);
    _1632 = NOVALUE;
    // SubProg decimals_to_bits pc: 67 op: NOP1 (159)
    // SubProg decimals_to_bits pc: 68 op: WHILE (47)
    if (_1633 == 0)
    {
        DeRef(_1633);
        _1633 = NOVALUE;
        goto L4; // [68] 165
    }
    else{
        DeRef(_1633);
        _1633 = NOVALUE;
    }
    // SubProg decimals_to_bits pc: 71 op: NOP1 (159)
L3: // addr: 72 pc: 71 sub: 3496 op: 159
    // SubProg decimals_to_bits pc: 72 op: STARTLINE (58)

    /** scinot.e:243				if compare( sub, decimals ) <= 0 then*/
    // SubProg decimals_to_bits pc: 74 op: COMPARE (76)
    if (IS_ATOM_INT(_sub_3500) && IS_ATOM_INT(_decimals_3498)){
        _1634 = (_sub_3500 < _decimals_3498) ? -1 : (_sub_3500 > _decimals_3498);
    }
    else{
        _1634 = compare(_sub_3500, _decimals_3498);
    }
    // SubProg decimals_to_bits pc: 78 op: LESSEQ_IFW_I (123)
    if (_1634 > 0)
    goto L5; // [78] 146
    // SubProg decimals_to_bits pc: 82 op: STARTLINE (58)

    /** scinot.e:244					assigned = 1*/
    // SubProg decimals_to_bits pc: 84 op: ASSIGN_I (113)
    _assigned_3503 = 1;
    // SubProg decimals_to_bits pc: 87 op: STARTLINE (58)

    /** scinot.e:245					if length( bits ) < bit then*/
    // SubProg decimals_to_bits pc: 89 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_3501)){
            _1636 = SEQ_PTR(_bits_3501)->length;
    }
    else {
        _1636 = 1;
    }
    // SubProg decimals_to_bits pc: 92 op: LESS_IFW_I (119)
    if (_1636 >= _bit_3502)
    goto L6; // [92] 114
    // SubProg decimals_to_bits pc: 96 op: STARTLINE (58)

    /** scinot.e:246						bits &= repeat( 0, bit - length(bits)) */
    // SubProg decimals_to_bits pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_3501)){
            _1638 = SEQ_PTR(_bits_3501)->length;
    }
    else {
        _1638 = 1;
    }
    // SubProg decimals_to_bits pc: 101 op: MINUS (10)
    _1639 = _bit_3502 - _1638;
    _1638 = NOVALUE;
    // SubProg decimals_to_bits pc: 105 op: REPEAT (32)
    _1640 = Repeat(0, _1639);
    _1639 = NOVALUE;
    // SubProg decimals_to_bits pc: 109 op: CONCAT (15)
    Concat((object_ptr)&_bits_3501, _bits_3501, _1640);
    DeRefDS(_1640);
    _1640 = NOVALUE;
    // SubProg decimals_to_bits pc: 113 op: NOP1 (159)
L6: // addr: 114 pc: 113 sub: 3496 op: 159
    // SubProg decimals_to_bits pc: 114 op: STARTLINE (58)

    /** scinot.e:249					bits[bit] += 1*/
    // SubProg decimals_to_bits pc: 116 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_bits_3501);
    _1642 = (object)*(((s1_ptr)_2)->base + _bit_3502);
    // SubProg decimals_to_bits pc: 120 op: PLUS1 (93)
    if (IS_ATOM_INT(_1642)) {
        _1643 = _1642 + 1;
        if (_1643 > MAXINT){
            _1643 = NewDouble((eudouble)_1643);
        }
    }
    else
    _1643 = binary_op(PLUS, 1, _1642);
    _1642 = NOVALUE;
    // SubProg decimals_to_bits pc: 124 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bits_3501);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bits_3501 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _bit_3502);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1643;
    if( _1 != _1643 ){
        DeRef(_1);
    }
    _1643 = NOVALUE;
    // SubProg decimals_to_bits pc: 128 op: STARTLINE (58)

    /** scinot.e:250					decimals = borrow( add( decimals, -sub ), 10 )*/
    // SubProg decimals_to_bits pc: 130 op: UMINUS (12)
    _1644 = unary_op(UMINUS, _sub_3500);
    // SubProg decimals_to_bits pc: 133 op: PROC (27)
    RefDS(_decimals_3498);
    _1645 = _21add(_decimals_3498, _1644);
    _1644 = NOVALUE;
    // SubProg decimals_to_bits pc: 138 op: PROC (27)
    _0 = _decimals_3498;
    _decimals_3498 = _21borrow(_1645, 10);
    DeRefDS(_0);
    _1645 = NOVALUE;
    // SubProg decimals_to_bits pc: 143 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 145 op: NOP1 (159)
L5: // addr: 146 pc: 145 sub: 3496 op: 159
    // SubProg decimals_to_bits pc: 146 op: STARTLINE (58)

    /** scinot.e:252				sub = half( sub )*/
    // SubProg decimals_to_bits pc: 148 op: PROC (27)
    RefDS(_sub_3500);
    _0 = _sub_3500;
    _sub_3500 = _21half(_sub_3500);
    DeRefDS(_0);
    // SubProg decimals_to_bits pc: 152 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 154 op: STARTLINE (58)

    /** scinot.e:254				bit += 1*/
    // SubProg decimals_to_bits pc: 156 op: PLUS1_I (117)
    _bit_3502 = _bit_3502 + 1;
    // SubProg decimals_to_bits pc: 160 op: STARTLINE (58)

    /** scinot.e:255			end while*/
    // SubProg decimals_to_bits pc: 162 op: ENDWHILE (22)
    goto L2; // [162] 43
    // SubProg decimals_to_bits pc: 164 op: NOP1 (159)
L4: // addr: 165 pc: 164 sub: 3496 op: 159
    // SubProg decimals_to_bits pc: 165 op: NOP1 (159)
L1: // addr: 166 pc: 165 sub: 3496 op: 159
    // SubProg decimals_to_bits pc: 166 op: STARTLINE (58)

    /** scinot.e:258		return reverse(bits)*/
    // SubProg decimals_to_bits pc: 168 op: PROC (27)
    RefDS(_bits_3501);
    _1649 = _21reverse(_bits_3501);
    // SubProg decimals_to_bits pc: 172 op: RETURNF (28)

// Exiting block BLOCK: decimals_to_bits

// block var decimals_3498
    DeRefDS(_decimals_3498);

// block var size_3499

// block var sub_3500
    DeRef(_sub_3500);

// block var bits_3501
    DeRefDS(_bits_3501);

// block var bit_3502

// block var assigned_3503
    DeRef(_1628);
    _1628 = NOVALUE;
    return _1649;
    // SubProg decimals_to_bits pc: 176 op: BADRETURNF (43)
    ;
}


object _21string_to_int(object _s_3536)
{
    object _int_3537 = NOVALUE;
// skipping _1654  name type: 0
    object _1653 = NOVALUE; // 3543 1653
    object _1652 = NOVALUE; // 3542 1652
// skipping _1651  name type: 0
    object _1650 = NOVALUE; // 3540 1650
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg string_to_int pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg string_to_int pc: 3 op: STARTLINE (58)

    /** scinot.e:263		int = 0*/
    // SubProg string_to_int pc: 5 op: ASSIGN_I (113)
    _int_3537 = 0;
    // SubProg string_to_int pc: 8 op: STARTLINE (58)

    /** scinot.e:264		for i = 1 to length(s) do*/
    // SubProg string_to_int pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3536)){
            _1650 = SEQ_PTR(_s_3536)->length;
    }
    else {
        _1650 = 1;
    }
    // SubProg string_to_int pc: 13 op: FOR_I (125)
    {
        object _i_3539;
        _i_3539 = 1;
L1: // addr: 20 pc: 13 sub: 3534 op: 125
        if (_i_3539 > _1650){
            goto L2; // [13] 51
        }
        // SubProg string_to_int pc: 20 op: STARTLINE (58)

        /** scinot.e:265			int *= 10*/
        // SubProg string_to_int pc: 22 op: MULTIPLY (13)
        _int_3537 = _int_3537 * 10;
        // SubProg string_to_int pc: 28 op: STARTLINE (58)

        /** scinot.e:266			int += s[i] - '0'*/
        // SubProg string_to_int pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_3536);
        _1652 = (object)*(((s1_ptr)_2)->base + _i_3539);
        // SubProg string_to_int pc: 34 op: MINUS (10)
        if (IS_ATOM_INT(_1652)) {
            _1653 = _1652 - 48;
            if ((object)((uintptr_t)_1653 +(uintptr_t) HIGH_BITS) >= 0){
                _1653 = NewDouble((eudouble)_1653);
            }
        }
        else {
            _1653 = binary_op(MINUS, _1652, 48);
        }
        _1652 = NOVALUE;
        // SubProg string_to_int pc: 38 op: PLUS (11)
        if (IS_ATOM_INT(_1653)) {
            _int_3537 = _int_3537 + _1653;
        }
        else {
            _int_3537 = binary_op(PLUS, _int_3537, _1653);
        }
        DeRef(_1653);
        _1653 = NOVALUE;
        // SubProg string_to_int pc: 42 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_int_3537)) {
            _1 = (object)(DBL_PTR(_int_3537)->dbl);
            DeRefDS(_int_3537);
            _int_3537 = _1;
        }
        // SubProg string_to_int pc: 44 op: STARTLINE (58)

        /** scinot.e:267		end for*/
        // SubProg string_to_int pc: 46 op: ENDFOR_INT_UP1 (54)
        _i_3539 = _i_3539 + 1;
        goto L1; // [46] 20
L2: // addr: 51 pc: 46 sub: 3534 op: 54
        ;
    }
    // SubProg string_to_int pc: 51 op: STARTLINE (58)

    /** scinot.e:268		return int*/
    // SubProg string_to_int pc: 53 op: RETURNF (28)

// Exiting block BLOCK: string_to_int

// block var s_3536
    DeRefDS(_s_3536);
    return _int_3537;
    // SubProg string_to_int pc: 57 op: BADRETURNF (43)
    ;
}


object _21trim_bits(object _bits_3547)
{
// skipping _1661  name type: 0
    object _1660 = NOVALUE; // 3554 1660
    object _1659 = NOVALUE; // 3553 1659
    object _1658 = NOVALUE; // 3552 1658
    object _1657 = NOVALUE; // 3551 1657
    object _1656 = NOVALUE; // 3550 1656
    object _1655 = NOVALUE; // 3549 1655
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg trim_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg trim_bits pc: 3 op: STARTLINE (58)

    /** scinot.e:272			while length(bits) and not bits[$] do*/
    // SubProg trim_bits pc: 5 op: NOP2 (110)
    // SubProg trim_bits pc: 7 op: NOPWHILE (158)
L1: // addr: 8 pc: 7 sub: 3545 op: 158
    // SubProg trim_bits pc: 8 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_3547)){
            _1655 = SEQ_PTR(_bits_3547)->length;
    }
    else {
        _1655 = 1;
    }
    // SubProg trim_bits pc: 11 op: SC1_AND_IF (146)
    if (_1655 == 0) {
        goto L2; // [11] 44
    }
    // SubProg trim_bits pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_3547)){
            _1657 = SEQ_PTR(_bits_3547)->length;
    }
    else {
        _1657 = 1;
    }
    // SubProg trim_bits pc: 18 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_bits_3547);
    _1658 = (object)*(((s1_ptr)_2)->base + _1657);
    // SubProg trim_bits pc: 22 op: NOT (7)
    if (IS_ATOM_INT(_1658)) {
        _1659 = (_1658 == 0);
    }
    else {
        _1659 = unary_op(NOT, _1658);
    }
    _1658 = NOVALUE;
    // SubProg trim_bits pc: 25 op: NOP1 (159)
    // SubProg trim_bits pc: 26 op: WHILE (47)
    if (_1659 <= 0) {
        if (_1659 == 0) {
            DeRef(_1659);
            _1659 = NOVALUE;
            goto L2; // [26] 44
        }
        else {
            if (!IS_ATOM_INT(_1659) && DBL_PTR(_1659)->dbl == 0.0){
                DeRef(_1659);
                _1659 = NOVALUE;
                goto L2; // [26] 44
            }
            DeRef(_1659);
            _1659 = NOVALUE;
        }
    }
    DeRef(_1659);
    _1659 = NOVALUE;
    // SubProg trim_bits pc: 29 op: STARTLINE (58)

    /** scinot.e:273				bits = remove( bits, length( bits ) )*/
    // SubProg trim_bits pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_3547)){
            _1660 = SEQ_PTR(_bits_3547)->length;
    }
    else {
        _1660 = 1;
    }
    // SubProg trim_bits pc: 34 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_bits_3547);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_1660)) ? _1660 : (object)(DBL_PTR(_1660)->dbl);
        int stop = (IS_ATOM_INT(_1660)) ? _1660 : (object)(DBL_PTR(_1660)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_bits_3547), start, &_bits_3547 );
            }
            else Tail(SEQ_PTR(_bits_3547), stop+1, &_bits_3547);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_bits_3547), start, &_bits_3547);
        }
        else {
            assign_slice_seq = &assign_space;
            _bits_3547 = Remove_elements(start, stop, (SEQ_PTR(_bits_3547)->ref == 1));
        }
    }
    _1660 = NOVALUE;
    _1660 = NOVALUE;
    // SubProg trim_bits pc: 39 op: STARTLINE (58)

    /** scinot.e:274			end while*/
    // SubProg trim_bits pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 8
    // SubProg trim_bits pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 3545 op: 159
    // SubProg trim_bits pc: 44 op: STARTLINE (58)

    /** scinot.e:275			return bits*/
    // SubProg trim_bits pc: 46 op: RETURNF (28)

// Exiting block BLOCK: trim_bits
    return _bits_3547;
    // SubProg trim_bits pc: 50 op: BADRETURNF (43)
    ;
}


object _21scientific_to_float(object _s_3570, object _fp_3571)
{
    object _dp_3572 = NOVALUE;
    object _e_3573 = NOVALUE;
    object _exp_3574 = NOVALUE;
    object _int_bits_3575 = NOVALUE;
    object _frac_bits_3576 = NOVALUE;
    object _mbits_3577 = NOVALUE;
    object _ebits_3578 = NOVALUE;
    object _sbits_3579 = NOVALUE;
    object _significand_3580 = NOVALUE;
    object _exponent_3581 = NOVALUE;
    object _min_exp_3582 = NOVALUE;
    object _exp_bias_3583 = NOVALUE;
    object _1819 = NOVALUE; // 3774 1819
    object _1818 = NOVALUE; // 3773 1818
// skipping _1817  name type: 0
    object _1816 = NOVALUE; // 3771 1816
// skipping _1815  name type: 0
    object _1814 = NOVALUE; // 3768 1814
    object _1813 = NOVALUE; // 3767 1813
// skipping _1812  name type: 0
    object _1811 = NOVALUE; // 3765 1811
    object _1810 = NOVALUE; // 3764 1810
    object _1809 = NOVALUE; // 3763 1809
    object _1808 = NOVALUE; // 3762 1808
    object _1807 = NOVALUE; // 3761 1807
    object _1806 = NOVALUE; // 3760 1806
    object _1805 = NOVALUE; // 3759 1805
// skipping _1804  name type: 0
    object _1803 = NOVALUE; // 3755 1803
    object _1802 = NOVALUE; // 3754 1802
// skipping _1801  name type: 0
    object _1800 = NOVALUE; // 3751 1800
    object _1799 = NOVALUE; // 3750 1799
    object _1798 = NOVALUE; // 3749 1798
    object _1797 = NOVALUE; // 3748 1797
// skipping _1796  name type: 0
// skipping _1795  name type: 0
    object _1794 = NOVALUE; // 3744 1794
    object _1793 = NOVALUE; // 3743 1793
    object _1792 = NOVALUE; // 3742 1792
    object _1791 = NOVALUE; // 3741 1791
    object _1790 = NOVALUE; // 3740 1790
    object _1789 = NOVALUE; // 3739 1789
    object _1788 = NOVALUE; // 3738 1788
    object _1787 = NOVALUE; // 3737 1787
// skipping _1786  name type: 0
// skipping _1785  name type: 0
    object _1784 = NOVALUE; // 3732 1784
    object _1783 = NOVALUE; // 3731 1783
// skipping _1782  name type: 0
// skipping _1781  name type: 0
    object _1780 = NOVALUE; // 3728 1780
    object _1779 = NOVALUE; // 3727 1779
    object _1778 = NOVALUE; // 3726 1778
    object _1777 = NOVALUE; // 3725 1777
// skipping _1776  name type: 0
// skipping _1775  name type: 0
    object _1774 = NOVALUE; // 3720 1774
    object _1773 = NOVALUE; // 3719 1773
// skipping _1772  name type: 0
    object _1771 = NOVALUE; // 3716 1771
    object _1770 = NOVALUE; // 3715 1770
// skipping _1769  name type: 0
    object _1768 = NOVALUE; // 3711 1768
// skipping _1767  name type: 0
    object _1766 = NOVALUE; // 3709 1766
    object _1765 = NOVALUE; // 3708 1765
    object _1764 = NOVALUE; // 3707 1764
    object _1763 = NOVALUE; // 3706 1763
    object _1762 = NOVALUE; // 3705 1762
    object _1761 = NOVALUE; // 3704 1761
    object _1760 = NOVALUE; // 3703 1760
    object _1759 = NOVALUE; // 3702 1759
    object _1758 = NOVALUE; // 3701 1758
    object _1757 = NOVALUE; // 3700 1757
// skipping _1756  name type: 0
    object _1755 = NOVALUE; // 3697 1755
    object _1754 = NOVALUE; // 3696 1754
    object _1753 = NOVALUE; // 3695 1753
    object _1752 = NOVALUE; // 3694 1752
// skipping _1751  name type: 0
    object _1750 = NOVALUE; // 3691 1750
    object _1749 = NOVALUE; // 3690 1749
    object _1748 = NOVALUE; // 3689 1748
    object _1747 = NOVALUE; // 3688 1747
// skipping _1746  name type: 0
// skipping _1745  name type: 0
    object _1744 = NOVALUE; // 3684 1744
// skipping _1743  name type: 0
    object _1742 = NOVALUE; // 3681 1742
    object _1741 = NOVALUE; // 3680 1741
    object _1740 = NOVALUE; // 3679 1740
    object _1739 = NOVALUE; // 3678 1739
    object _1738 = NOVALUE; // 3677 1738
// skipping _1737  name type: 0
    object _1736 = NOVALUE; // 3675 1736
    object _1735 = NOVALUE; // 3674 1735
    object _1734 = NOVALUE; // 3673 1734
    object _1733 = NOVALUE; // 3672 1733
    object _1732 = NOVALUE; // 3671 1732
    object _1731 = NOVALUE; // 3670 1731
// skipping _1730  name type: 0
    object _1729 = NOVALUE; // 3667 1729
    object _1728 = NOVALUE; // 3666 1728
    object _1727 = NOVALUE; // 3665 1727
    object _1726 = NOVALUE; // 3664 1726
    object _1725 = NOVALUE; // 3663 1725
// skipping _1724  name type: 0
    object _1723 = NOVALUE; // 3661 1723
    object _1722 = NOVALUE; // 3660 1722
// skipping _1721  name type: 0
    object _1720 = NOVALUE; // 3656 1720
    object _1719 = NOVALUE; // 3655 1719
    object _1718 = NOVALUE; // 3654 1718
    object _1717 = NOVALUE; // 3653 1717
    object _1716 = NOVALUE; // 3652 1716
// skipping _1715  name type: 0
    object _1714 = NOVALUE; // 3649 1714
// skipping _1713  name type: 0
    object _1712 = NOVALUE; // 3645 1712
// skipping _1711  name type: 0
// skipping _1710  name type: 0
    object _1709 = NOVALUE; // 3640 1709
    object _1708 = NOVALUE; // 3639 1708
// skipping _1707  name type: 0
    object _1706 = NOVALUE; // 3636 1706
    object _1705 = NOVALUE; // 3635 1705
// skipping _1704  name type: 0
    object _1703 = NOVALUE; // 3633 1703
// skipping _1702  name type: 0
// skipping _1701  name type: 0
// skipping _1700  name type: 0
    object _1699 = NOVALUE; // 3628 1699
    object _1698 = NOVALUE; // 3627 1698
    object _1697 = NOVALUE; // 3626 1697
    object _1696 = NOVALUE; // 3625 1696
// skipping _1695  name type: 0
    object _1694 = NOVALUE; // 3622 1694
    object _1693 = NOVALUE; // 3621 1693
    object _1692 = NOVALUE; // 3620 1692
    object _1691 = NOVALUE; // 3619 1691
// skipping _1690  name type: 0
    object _1689 = NOVALUE; // 3617 1689
    object _1688 = NOVALUE; // 3616 1688
// skipping _1687  name type: 0
    object _1686 = NOVALUE; // 3612 1686
    object _1685 = NOVALUE; // 3611 1685
    object _1684 = NOVALUE; // 3610 1684
    object _1683 = NOVALUE; // 3609 1683
// skipping _1682  name type: 0
    object _1681 = NOVALUE; // 3607 1681
    object _1680 = NOVALUE; // 3606 1680
// skipping _1679  name type: 0
// skipping _1678  name type: 0
// skipping _1677  name type: 0
// skipping _1676  name type: 0
// skipping _1675  name type: 0
// skipping _1674  name type: 0
    object _1673 = NOVALUE; // 3597 1673
// skipping _1672  name type: 0
// skipping _1671  name type: 0
// skipping _1670  name type: 0
    object _1669 = NOVALUE; // 3591 1669
// skipping _1668  name type: 0
// skipping _1667  name type: 0
// skipping _1666  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scientific_to_float pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 3 op: STARTLINE (58)

    /** scinot.e:316		if fp = NATIVE then*/
    // SubProg scientific_to_float pc: 5 op: EQUALS_IFW (104)
    if (_fp_3571 != 1)
    goto L1; // [5] 17
    // SubProg scientific_to_float pc: 9 op: STARTLINE (58)

    /** scinot.e:317			fp = NATIVE_FORMAT*/
    // SubProg scientific_to_float pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scientific_to_float pc: 13 op: ASSIGN (18)
    _fp_3571 = 2;
    // SubProg scientific_to_float pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 17 op: STARTLINE (58)

    /** scinot.e:319		if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 19 op: EQUALS_IFW (104)
    if (_fp_3571 != 2)
    goto L2; // [19] 46
    // SubProg scientific_to_float pc: 23 op: STARTLINE (58)

    /** scinot.e:320			significand = DOUBLE_SIGNIFICAND*/
    // SubProg scientific_to_float pc: 25 op: ASSIGN_I (113)
    _significand_3580 = 52;
    // SubProg scientific_to_float pc: 28 op: STARTLINE (58)

    /** scinot.e:321			exponent    = DOUBLE_EXPONENT*/
    // SubProg scientific_to_float pc: 30 op: ASSIGN_I (113)
    _exponent_3581 = 11;
    // SubProg scientific_to_float pc: 33 op: STARTLINE (58)

    /** scinot.e:322			min_exp     = DOUBLE_MIN_EXP*/
    // SubProg scientific_to_float pc: 35 op: ASSIGN_I (113)
    _min_exp_3582 = -1023;
    // SubProg scientific_to_float pc: 38 op: STARTLINE (58)

    /** scinot.e:323			exp_bias    = DOUBLE_EXP_BIAS*/
    // SubProg scientific_to_float pc: 40 op: ASSIGN_I (113)
    _exp_bias_3583 = 1023;
    // SubProg scientific_to_float pc: 43 op: ELSE (23)
    goto L3; // [43] 74
    // SubProg scientific_to_float pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 46 op: STARTLINE (58)

    /** scinot.e:325		elsif fp = EXTENDED then*/
    // SubProg scientific_to_float pc: 48 op: EQUALS_IFW (104)
    if (_fp_3571 != 3)
    goto L4; // [48] 73
    // SubProg scientific_to_float pc: 52 op: STARTLINE (58)

    /** scinot.e:326			significand = EXTENDED_SIGNIFICAND*/
    // SubProg scientific_to_float pc: 54 op: ASSIGN_I (113)
    _significand_3580 = 64;
    // SubProg scientific_to_float pc: 57 op: STARTLINE (58)

    /** scinot.e:327			exponent    = EXTENDED_EXPONENT*/
    // SubProg scientific_to_float pc: 59 op: ASSIGN_I (113)
    _exponent_3581 = 15;
    // SubProg scientific_to_float pc: 62 op: STARTLINE (58)

    /** scinot.e:328			min_exp     = EXTENDED_MIN_EXP*/
    // SubProg scientific_to_float pc: 64 op: ASSIGN_I (113)
    _min_exp_3582 = -16383;
    // SubProg scientific_to_float pc: 67 op: STARTLINE (58)

    /** scinot.e:329			exp_bias    = EXTENDED_EXP_BIAS*/
    // SubProg scientific_to_float pc: 69 op: ASSIGN_I (113)
    _exp_bias_3583 = 16383;
    // SubProg scientific_to_float pc: 72 op: NOP1 (159)
L4: // addr: 73 pc: 72 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 73 op: NOP1 (159)
L3: // addr: 74 pc: 73 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 74 op: STARTLINE (58)

    /** scinot.e:333		if s[1] = '-' then*/
    // SubProg scientific_to_float pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_3570);
    _1669 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1669, 45)){
        _1669 = NOVALUE;
        goto L5; // [80] 101
    }
    _1669 = NOVALUE;
    // SubProg scientific_to_float pc: 84 op: STARTLINE (58)

    /** scinot.e:334			sbits = {1}*/
    // SubProg scientific_to_float pc: 86 op: ASSIGN (18)
    RefDS(_1595);
    DeRefi(_sbits_3579);
    _sbits_3579 = _1595;
    // SubProg scientific_to_float pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 91 op: STARTLINE (58)

    /** scinot.e:335			s = remove( s, 1 )*/
    // SubProg scientific_to_float pc: 93 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_3570);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_3570), start, &_s_3570 );
            }
            else Tail(SEQ_PTR(_s_3570), stop+1, &_s_3570);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_3570), start, &_s_3570);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_3570 = Remove_elements(start, stop, (SEQ_PTR(_s_3570)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 98 op: ELSE (23)
    goto L6; // [98] 126
    // SubProg scientific_to_float pc: 100 op: NOP1 (159)
L5: // addr: 101 pc: 100 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 101 op: STARTLINE (58)

    /** scinot.e:337			sbits = {0}*/
    // SubProg scientific_to_float pc: 103 op: RIGHT_BRACE_N (31)
    _0 = _sbits_3579;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _sbits_3579 = MAKE_SEQ(_1);
    DeRefi(_0);
    // SubProg scientific_to_float pc: 107 op: STARTLINE (58)

    /** scinot.e:338			if s[1] = '+' then*/
    // SubProg scientific_to_float pc: 109 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_3570);
    _1673 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 113 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1673, 43)){
        _1673 = NOVALUE;
        goto L7; // [113] 125
    }
    _1673 = NOVALUE;
    // SubProg scientific_to_float pc: 117 op: STARTLINE (58)

    /** scinot.e:339				s = remove( s, 1 )*/
    // SubProg scientific_to_float pc: 119 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_3570);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_3570), start, &_s_3570 );
            }
            else Tail(SEQ_PTR(_s_3570), stop+1, &_s_3570);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_3570), start, &_s_3570);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_3570 = Remove_elements(start, stop, (SEQ_PTR(_s_3570)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 124 op: NOP1 (159)
L7: // addr: 125 pc: 124 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 126 op: STARTLINE (58)

    /** scinot.e:344		dp = find('.', s)*/
    // SubProg scientific_to_float pc: 128 op: FIND_FROM (176)
    _dp_3572 = find_from(46, _s_3570, 1);
    // SubProg scientific_to_float pc: 133 op: STARTLINE (58)

    /** scinot.e:345		e = find( 'e', s )*/
    // SubProg scientific_to_float pc: 135 op: FIND_FROM (176)
    _e_3573 = find_from(101, _s_3570, 1);
    // SubProg scientific_to_float pc: 140 op: STARTLINE (58)

    /** scinot.e:346		if not e then*/
    // SubProg scientific_to_float pc: 142 op: NOT_IFW (108)
    if (_e_3573 != 0)
    goto L8; // [142] 153
    // SubProg scientific_to_float pc: 145 op: STARTLINE (58)

    /** scinot.e:347			e = find('E', s )*/
    // SubProg scientific_to_float pc: 147 op: FIND_FROM (176)
    _e_3573 = find_from(69, _s_3570, 1);
    // SubProg scientific_to_float pc: 152 op: NOP1 (159)
L8: // addr: 153 pc: 152 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 153 op: STARTLINE (58)

    /** scinot.e:351		exp = 0*/
    // SubProg scientific_to_float pc: 155 op: ASSIGN_I (113)
    _exp_3574 = 0;
    // SubProg scientific_to_float pc: 158 op: STARTLINE (58)

    /** scinot.e:352		if s[e+1] = '-' then*/
    // SubProg scientific_to_float pc: 160 op: PLUS1 (93)
    _1680 = _e_3573 + 1;
    // SubProg scientific_to_float pc: 164 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_3570);
    _1681 = (object)*(((s1_ptr)_2)->base + _1680);
    // SubProg scientific_to_float pc: 168 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1681, 45)){
        _1681 = NOVALUE;
        goto L9; // [168] 199
    }
    _1681 = NOVALUE;
    // SubProg scientific_to_float pc: 172 op: STARTLINE (58)

    /** scinot.e:353			exp -= string_to_int( s[e+2..$] )*/
    // SubProg scientific_to_float pc: 174 op: PLUS (11)
    _1683 = _e_3573 + 2;
    if ((object)((uintptr_t)_1683 + (uintptr_t)HIGH_BITS) >= 0){
        _1683 = NewDouble((eudouble)_1683);
    }
    // SubProg scientific_to_float pc: 178 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1684 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1684 = 1;
    }
    // SubProg scientific_to_float pc: 181 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1685;
    RHS_Slice(_s_3570, _1683, _1684);
    // SubProg scientific_to_float pc: 186 op: PROC (27)
    _1686 = _21string_to_int(_1685);
    _1685 = NOVALUE;
    // SubProg scientific_to_float pc: 190 op: MINUS (10)
    if (IS_ATOM_INT(_1686)) {
        _exp_3574 = _exp_3574 - _1686;
    }
    else {
        _exp_3574 = binary_op(MINUS, _exp_3574, _1686);
    }
    DeRef(_1686);
    _1686 = NOVALUE;
    // SubProg scientific_to_float pc: 194 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_3574)) {
        _1 = (object)(DBL_PTR(_exp_3574)->dbl);
        DeRefDS(_exp_3574);
        _exp_3574 = _1;
    }
    // SubProg scientific_to_float pc: 196 op: ELSE (23)
    goto LA; // [196] 266
    // SubProg scientific_to_float pc: 198 op: NOP1 (159)
L9: // addr: 199 pc: 198 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 199 op: STARTLINE (58)

    /** scinot.e:356			if s[e+1] = '+' then*/
    // SubProg scientific_to_float pc: 201 op: PLUS1 (93)
    _1688 = _e_3573 + 1;
    // SubProg scientific_to_float pc: 205 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_3570);
    _1689 = (object)*(((s1_ptr)_2)->base + _1688);
    // SubProg scientific_to_float pc: 209 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1689, 43)){
        _1689 = NOVALUE;
        goto LB; // [209] 240
    }
    _1689 = NOVALUE;
    // SubProg scientific_to_float pc: 213 op: STARTLINE (58)

    /** scinot.e:357				exp += string_to_int( s[e+2..$] )*/
    // SubProg scientific_to_float pc: 215 op: PLUS (11)
    _1691 = _e_3573 + 2;
    if ((object)((uintptr_t)_1691 + (uintptr_t)HIGH_BITS) >= 0){
        _1691 = NewDouble((eudouble)_1691);
    }
    // SubProg scientific_to_float pc: 219 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1692 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1692 = 1;
    }
    // SubProg scientific_to_float pc: 222 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1693;
    RHS_Slice(_s_3570, _1691, _1692);
    // SubProg scientific_to_float pc: 227 op: PROC (27)
    _1694 = _21string_to_int(_1693);
    _1693 = NOVALUE;
    // SubProg scientific_to_float pc: 231 op: PLUS (11)
    if (IS_ATOM_INT(_1694)) {
        _exp_3574 = _exp_3574 + _1694;
    }
    else {
        _exp_3574 = binary_op(PLUS, _exp_3574, _1694);
    }
    DeRef(_1694);
    _1694 = NOVALUE;
    // SubProg scientific_to_float pc: 235 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_3574)) {
        _1 = (object)(DBL_PTR(_exp_3574)->dbl);
        DeRefDS(_exp_3574);
        _exp_3574 = _1;
    }
    // SubProg scientific_to_float pc: 237 op: ELSE (23)
    goto LC; // [237] 265
    // SubProg scientific_to_float pc: 239 op: NOP1 (159)
LB: // addr: 240 pc: 239 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 240 op: STARTLINE (58)

    /** scinot.e:359				exp += string_to_int( s[e+1..$] )*/
    // SubProg scientific_to_float pc: 242 op: PLUS1 (93)
    _1696 = _e_3573 + 1;
    if (_1696 > MAXINT){
        _1696 = NewDouble((eudouble)_1696);
    }
    // SubProg scientific_to_float pc: 246 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1697 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1697 = 1;
    }
    // SubProg scientific_to_float pc: 249 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1698;
    RHS_Slice(_s_3570, _1696, _1697);
    // SubProg scientific_to_float pc: 254 op: PROC (27)
    _1699 = _21string_to_int(_1698);
    _1698 = NOVALUE;
    // SubProg scientific_to_float pc: 258 op: PLUS (11)
    if (IS_ATOM_INT(_1699)) {
        _exp_3574 = _exp_3574 + _1699;
    }
    else {
        _exp_3574 = binary_op(PLUS, _exp_3574, _1699);
    }
    DeRef(_1699);
    _1699 = NOVALUE;
    // SubProg scientific_to_float pc: 262 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_3574)) {
        _1 = (object)(DBL_PTR(_exp_3574)->dbl);
        DeRefDS(_exp_3574);
        _exp_3574 = _1;
    }
    // SubProg scientific_to_float pc: 264 op: NOP1 (159)
LC: // addr: 265 pc: 264 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 265 op: NOP1 (159)
LA: // addr: 266 pc: 265 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 266 op: STARTLINE (58)

    /** scinot.e:363		if dp then*/
    // SubProg scientific_to_float pc: 268 op: IF (20)
    if (_dp_3572 == 0)
    {
        goto LD; // [268] 297
    }
    else{
    }
    // SubProg scientific_to_float pc: 271 op: STARTLINE (58)

    /** scinot.e:365			s = remove( s, dp )*/
    // SubProg scientific_to_float pc: 273 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_3570);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_dp_3572)) ? _dp_3572 : (object)(DBL_PTR(_dp_3572)->dbl);
        int stop = (IS_ATOM_INT(_dp_3572)) ? _dp_3572 : (object)(DBL_PTR(_dp_3572)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_3570), start, &_s_3570 );
            }
            else Tail(SEQ_PTR(_s_3570), stop+1, &_s_3570);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_3570), start, &_s_3570);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_3570 = Remove_elements(start, stop, (SEQ_PTR(_s_3570)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 278 op: STARTLINE (58)

    /** scinot.e:366			e -= 1*/
    // SubProg scientific_to_float pc: 280 op: MINUS_I (116)
    _e_3573 = _e_3573 - 1;
    // SubProg scientific_to_float pc: 284 op: STARTLINE (58)

    /** scinot.e:369			exp -= e - dp*/
    // SubProg scientific_to_float pc: 286 op: MINUS (10)
    _1703 = _e_3573 - _dp_3572;
    if ((object)((uintptr_t)_1703 +(uintptr_t) HIGH_BITS) >= 0){
        _1703 = NewDouble((eudouble)_1703);
    }
    // SubProg scientific_to_float pc: 290 op: MINUS (10)
    if (IS_ATOM_INT(_1703)) {
        _exp_3574 = _exp_3574 - _1703;
    }
    else {
        _exp_3574 = NewDouble((eudouble)_exp_3574 - DBL_PTR(_1703)->dbl);
    }
    DeRef(_1703);
    _1703 = NOVALUE;
    // SubProg scientific_to_float pc: 294 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_3574)) {
        _1 = (object)(DBL_PTR(_exp_3574)->dbl);
        DeRefDS(_exp_3574);
        _exp_3574 = _1;
    }
    // SubProg scientific_to_float pc: 296 op: NOP1 (159)
LD: // addr: 297 pc: 296 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 297 op: STARTLINE (58)

    /** scinot.e:374		s = s[1..e-1] - '0'*/
    // SubProg scientific_to_float pc: 299 op: MINUS (10)
    _1705 = _e_3573 - 1;
    // SubProg scientific_to_float pc: 303 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1706;
    RHS_Slice(_s_3570, 1, _1705);
    // SubProg scientific_to_float pc: 308 op: MINUS (10)
    DeRefDS(_s_3570);
    _s_3570 = binary_op(MINUS, _1706, 48);
    DeRefDS(_1706);
    _1706 = NOVALUE;
    // SubProg scientific_to_float pc: 312 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 314 op: STARTLINE (58)

    /** scinot.e:377		if not find(0, s = 0) then*/
    // SubProg scientific_to_float pc: 316 op: EQUALS (3)
    _1708 = binary_op(EQUALS, _s_3570, 0);
    // SubProg scientific_to_float pc: 320 op: FIND_FROM (176)
    _1709 = find_from(0, _1708, 1);
    DeRefDS(_1708);
    _1708 = NOVALUE;
    // SubProg scientific_to_float pc: 325 op: NOT_IFW (108)
    if (_1709 != 0)
    goto LE; // [325] 366
    _1709 = NOVALUE;
    // SubProg scientific_to_float pc: 328 op: STARTLINE (58)

    /** scinot.e:378			if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 330 op: EQUALS_IFW (104)
    if (_fp_3571 != 2)
    goto LF; // [330] 347
    // SubProg scientific_to_float pc: 334 op: STARTLINE (58)

    /** scinot.e:379				return atom_to_float64(0)*/
    // SubProg scientific_to_float pc: 336 op: PROC (27)
    _1712 = _16atom_to_float64(0);
    // SubProg scientific_to_float pc: 340 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_3570
    DeRefDS(_s_3570);

// block var fp_3571

// block var dp_3572

// block var e_3573

// block var exp_3574

// block var int_bits_3575
    DeRef(_int_bits_3575);

// block var frac_bits_3576
    DeRef(_frac_bits_3576);

// block var mbits_3577
    DeRef(_mbits_3577);

// block var ebits_3578
    DeRef(_ebits_3578);

// block var sbits_3579
    DeRefi(_sbits_3579);

// block var significand_3580

// block var exponent_3581

// block var min_exp_3582

// block var exp_bias_3583
    DeRef(_1680);
    _1680 = NOVALUE;
    DeRef(_1696);
    _1696 = NOVALUE;
    DeRef(_1691);
    _1691 = NOVALUE;
    _1705 = NOVALUE;
    DeRef(_1688);
    _1688 = NOVALUE;
    DeRef(_1683);
    _1683 = NOVALUE;
    return _1712;
    // SubProg scientific_to_float pc: 344 op: ELSE (23)
    goto L10; // [344] 365
    // SubProg scientific_to_float pc: 346 op: NOP1 (159)
LF: // addr: 347 pc: 346 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 347 op: STARTLINE (58)

    /** scinot.e:380			elsif fp = EXTENDED then*/
    // SubProg scientific_to_float pc: 349 op: EQUALS_IFW (104)
    if (_fp_3571 != 3)
    goto L11; // [349] 364
    // SubProg scientific_to_float pc: 353 op: STARTLINE (58)

    /** scinot.e:381				return atom_to_float80(0)*/
    // SubProg scientific_to_float pc: 355 op: PROC (27)
    _1714 = _16atom_to_float80(0);
    // SubProg scientific_to_float pc: 359 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_3570
    DeRefDS(_s_3570);

// block var fp_3571

// block var dp_3572

// block var e_3573

// block var exp_3574

// block var int_bits_3575
    DeRef(_int_bits_3575);

// block var frac_bits_3576
    DeRef(_frac_bits_3576);

// block var mbits_3577
    DeRef(_mbits_3577);

// block var ebits_3578
    DeRef(_ebits_3578);

// block var sbits_3579
    DeRefi(_sbits_3579);

// block var significand_3580

// block var exponent_3581

// block var min_exp_3582

// block var exp_bias_3583
    DeRef(_1712);
    _1712 = NOVALUE;
    DeRef(_1680);
    _1680 = NOVALUE;
    DeRef(_1696);
    _1696 = NOVALUE;
    DeRef(_1691);
    _1691 = NOVALUE;
    DeRef(_1705);
    _1705 = NOVALUE;
    DeRef(_1688);
    _1688 = NOVALUE;
    DeRef(_1683);
    _1683 = NOVALUE;
    return _1714;
    // SubProg scientific_to_float pc: 363 op: NOP1 (159)
L11: // addr: 364 pc: 363 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 364 op: NOP1 (159)
L10: // addr: 365 pc: 364 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 365 op: NOP1 (159)
LE: // addr: 366 pc: 365 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 366 op: STARTLINE (58)

    /** scinot.e:385		if exp >= 0 then*/
    // SubProg scientific_to_float pc: 368 op: GREATEREQ_IFW_I (120)
    if (_exp_3574 < 0)
    goto L12; // [368] 412
    // SubProg scientific_to_float pc: 372 op: STARTLINE (58)

    /** scinot.e:388			int_bits = trim_bits( bytes_to_bits( convert_radix( repeat( 0, exp ) & reverse( s ), 10, #100 ) ) )*/
    // SubProg scientific_to_float pc: 374 op: REPEAT (32)
    _1716 = Repeat(0, _exp_3574);
    // SubProg scientific_to_float pc: 378 op: PROC (27)
    RefDS(_s_3570);
    _1717 = _21reverse(_s_3570);
    // SubProg scientific_to_float pc: 382 op: CONCAT (15)
    if (IS_SEQUENCE(_1716) && IS_ATOM(_1717)) {
        Ref(_1717);
        Append(&_1718, _1716, _1717);
    }
    else if (IS_ATOM(_1716) && IS_SEQUENCE(_1717)) {
    }
    else {
        Concat((object_ptr)&_1718, _1716, _1717);
        DeRefDS(_1716);
        _1716 = NOVALUE;
    }
    DeRef(_1716);
    _1716 = NOVALUE;
    DeRef(_1717);
    _1717 = NOVALUE;
    // SubProg scientific_to_float pc: 386 op: PROC (27)
    _1719 = _21convert_radix(_1718, 10, 256);
    _1718 = NOVALUE;
    // SubProg scientific_to_float pc: 392 op: PROC (27)
    _1720 = _21bytes_to_bits(_1719);
    _1719 = NOVALUE;
    // SubProg scientific_to_float pc: 396 op: PROC (27)
    _0 = _int_bits_3575;
    _int_bits_3575 = _21trim_bits(_1720);
    DeRef(_0);
    _1720 = NOVALUE;
    // SubProg scientific_to_float pc: 400 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 402 op: STARTLINE (58)

    /** scinot.e:389			frac_bits = {}*/
    // SubProg scientific_to_float pc: 404 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_frac_bits_3576);
    _frac_bits_3576 = _5;
    // SubProg scientific_to_float pc: 407 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 409 op: ELSE (23)
    goto L13; // [409] 529
    // SubProg scientific_to_float pc: 411 op: NOP1 (159)
L12: // addr: 412 pc: 411 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 412 op: STARTLINE (58)

    /** scinot.e:391			if -exp > length(s) then*/
    // SubProg scientific_to_float pc: 414 op: UMINUS (12)
    if ((uintptr_t)_exp_3574 == (uintptr_t)HIGH_BITS){
        _1722 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _1722 = - _exp_3574;
    }
    // SubProg scientific_to_float pc: 417 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1723 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1723 = 1;
    }
    // SubProg scientific_to_float pc: 420 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _1722, _1723)){
        DeRef(_1722);
        _1722 = NOVALUE;
        _1723 = NOVALUE;
        goto L14; // [420] 463
    }
    DeRef(_1722);
    _1722 = NOVALUE;
    _1723 = NOVALUE;
    // SubProg scientific_to_float pc: 424 op: STARTLINE (58)

    /** scinot.e:393				int_bits = {}*/
    // SubProg scientific_to_float pc: 426 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_int_bits_3575);
    _int_bits_3575 = _5;
    // SubProg scientific_to_float pc: 429 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 431 op: STARTLINE (58)

    /** scinot.e:394				frac_bits = decimals_to_bits( repeat( 0, -exp-length(s) ) & s, significand ) */
    // SubProg scientific_to_float pc: 433 op: UMINUS (12)
    if ((uintptr_t)_exp_3574 == (uintptr_t)HIGH_BITS){
        _1725 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _1725 = - _exp_3574;
    }
    // SubProg scientific_to_float pc: 436 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1726 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1726 = 1;
    }
    // SubProg scientific_to_float pc: 439 op: MINUS (10)
    if (IS_ATOM_INT(_1725)) {
        _1727 = _1725 - _1726;
    }
    else {
        _1727 = NewDouble(DBL_PTR(_1725)->dbl - (eudouble)_1726);
    }
    DeRef(_1725);
    _1725 = NOVALUE;
    _1726 = NOVALUE;
    // SubProg scientific_to_float pc: 443 op: REPEAT (32)
    _1728 = Repeat(0, _1727);
    DeRef(_1727);
    _1727 = NOVALUE;
    // SubProg scientific_to_float pc: 447 op: CONCAT (15)
    Concat((object_ptr)&_1729, _1728, _s_3570);
    DeRefDS(_1728);
    _1728 = NOVALUE;
    DeRef(_1728);
    _1728 = NOVALUE;
    // SubProg scientific_to_float pc: 451 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 453 op: PROC (27)
    _0 = _frac_bits_3576;
    _frac_bits_3576 = _21decimals_to_bits(_1729, _significand_3580);
    DeRef(_0);
    _1729 = NOVALUE;
    // SubProg scientific_to_float pc: 458 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 460 op: ELSE (23)
    goto L15; // [460] 528
    // SubProg scientific_to_float pc: 462 op: NOP1 (159)
L14: // addr: 463 pc: 462 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 463 op: STARTLINE (58)

    /** scinot.e:398				int_bits = trim_bits( bytes_to_bits( convert_radix( reverse( s[1..$+exp] ), 10, #100 ) ) )*/
    // SubProg scientific_to_float pc: 465 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1731 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1731 = 1;
    }
    // SubProg scientific_to_float pc: 468 op: PLUS (11)
    _1732 = _1731 + _exp_3574;
    _1731 = NOVALUE;
    // SubProg scientific_to_float pc: 472 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1733;
    RHS_Slice(_s_3570, 1, _1732);
    // SubProg scientific_to_float pc: 477 op: PROC (27)
    _1734 = _21reverse(_1733);
    _1733 = NOVALUE;
    // SubProg scientific_to_float pc: 481 op: PROC (27)
    _1735 = _21convert_radix(_1734, 10, 256);
    _1734 = NOVALUE;
    // SubProg scientific_to_float pc: 487 op: PROC (27)
    _1736 = _21bytes_to_bits(_1735);
    _1735 = NOVALUE;
    // SubProg scientific_to_float pc: 491 op: PROC (27)
    _0 = _int_bits_3575;
    _int_bits_3575 = _21trim_bits(_1736);
    DeRef(_0);
    _1736 = NOVALUE;
    // SubProg scientific_to_float pc: 495 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 497 op: STARTLINE (58)

    /** scinot.e:399				frac_bits =  decimals_to_bits( s[$+exp+1..$], significand )*/
    // SubProg scientific_to_float pc: 499 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1738 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1738 = 1;
    }
    // SubProg scientific_to_float pc: 502 op: PLUS (11)
    _1739 = _1738 + _exp_3574;
    if ((object)((uintptr_t)_1739 + (uintptr_t)HIGH_BITS) >= 0){
        _1739 = NewDouble((eudouble)_1739);
    }
    _1738 = NOVALUE;
    // SubProg scientific_to_float pc: 506 op: PLUS1 (93)
    if (IS_ATOM_INT(_1739)) {
        _1740 = _1739 + 1;
        if (_1740 > MAXINT){
            _1740 = NewDouble((eudouble)_1740);
        }
    }
    else
    _1740 = binary_op(PLUS, 1, _1739);
    DeRef(_1739);
    _1739 = NOVALUE;
    // SubProg scientific_to_float pc: 510 op: LENGTH (42)
    if (IS_SEQUENCE(_s_3570)){
            _1741 = SEQ_PTR(_s_3570)->length;
    }
    else {
        _1741 = 1;
    }
    // SubProg scientific_to_float pc: 513 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1742;
    RHS_Slice(_s_3570, _1740, _1741);
    // SubProg scientific_to_float pc: 518 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 520 op: PROC (27)
    _0 = _frac_bits_3576;
    _frac_bits_3576 = _21decimals_to_bits(_1742, _significand_3580);
    DeRef(_0);
    _1742 = NOVALUE;
    // SubProg scientific_to_float pc: 525 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 527 op: NOP1 (159)
L15: // addr: 528 pc: 527 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 528 op: NOP1 (159)
L13: // addr: 529 pc: 528 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 529 op: STARTLINE (58)

    /** scinot.e:403		if length(int_bits) > significand then*/
    // SubProg scientific_to_float pc: 531 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 533 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1744 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1744 = 1;
    }
    // SubProg scientific_to_float pc: 536 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 538 op: GREATER_IFW_I (124)
    if (_1744 <= _significand_3580)
    goto L16; // [538] 668
    // SubProg scientific_to_float pc: 542 op: STARTLINE (58)

    /** scinot.e:406			if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 544 op: EQUALS_IFW (104)
    if (_fp_3571 != 2)
    goto L17; // [544] 572
    // SubProg scientific_to_float pc: 548 op: STARTLINE (58)

    /** scinot.e:408				mbits = int_bits[$-significand..$-1]*/
    // SubProg scientific_to_float pc: 550 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1747 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1747 = 1;
    }
    // SubProg scientific_to_float pc: 553 op: MINUS (10)
    _1748 = _1747 - _significand_3580;
    if ((object)((uintptr_t)_1748 +(uintptr_t) HIGH_BITS) >= 0){
        _1748 = NewDouble((eudouble)_1748);
    }
    _1747 = NOVALUE;
    // SubProg scientific_to_float pc: 557 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1749 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1749 = 1;
    }
    // SubProg scientific_to_float pc: 560 op: MINUS (10)
    _1750 = _1749 - 1;
    _1749 = NOVALUE;
    // SubProg scientific_to_float pc: 564 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_3577;
    RHS_Slice(_int_bits_3575, _1748, _1750);
    // SubProg scientific_to_float pc: 569 op: ELSE (23)
    goto L18; // [569] 594
    // SubProg scientific_to_float pc: 571 op: NOP1 (159)
L17: // addr: 572 pc: 571 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 572 op: STARTLINE (58)

    /** scinot.e:411				mbits = int_bits[$-significand+1..$]*/
    // SubProg scientific_to_float pc: 574 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1752 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1752 = 1;
    }
    // SubProg scientific_to_float pc: 577 op: MINUS (10)
    _1753 = _1752 - _significand_3580;
    if ((object)((uintptr_t)_1753 +(uintptr_t) HIGH_BITS) >= 0){
        _1753 = NewDouble((eudouble)_1753);
    }
    _1752 = NOVALUE;
    // SubProg scientific_to_float pc: 581 op: PLUS1 (93)
    if (IS_ATOM_INT(_1753)) {
        _1754 = _1753 + 1;
        if (_1754 > MAXINT){
            _1754 = NewDouble((eudouble)_1754);
        }
    }
    else
    _1754 = binary_op(PLUS, 1, _1753);
    DeRef(_1753);
    _1753 = NOVALUE;
    // SubProg scientific_to_float pc: 585 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1755 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1755 = 1;
    }
    // SubProg scientific_to_float pc: 588 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_3577;
    RHS_Slice(_int_bits_3575, _1754, _1755);
    // SubProg scientific_to_float pc: 593 op: NOP1 (159)
L18: // addr: 594 pc: 593 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 594 op: STARTLINE (58)

    /** scinot.e:414			if length(int_bits) > significand + 1 and int_bits[$-(significand+1)] then*/
    // SubProg scientific_to_float pc: 596 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1757 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1757 = 1;
    }
    // SubProg scientific_to_float pc: 599 op: PLUS1 (93)
    _1758 = _significand_3580 + 1;
    if (_1758 > MAXINT){
        _1758 = NewDouble((eudouble)_1758);
    }
    // SubProg scientific_to_float pc: 603 op: GREATER (6)
    if (IS_ATOM_INT(_1758)) {
        _1759 = (_1757 > _1758);
    }
    else {
        _1759 = ((eudouble)_1757 > DBL_PTR(_1758)->dbl);
    }
    _1757 = NOVALUE;
    DeRef(_1758);
    _1758 = NOVALUE;
    // SubProg scientific_to_float pc: 607 op: SC1_AND_IF (146)
    if (_1759 == 0) {
        goto L19; // [607] 656
    }
    // SubProg scientific_to_float pc: 611 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1761 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1761 = 1;
    }
    // SubProg scientific_to_float pc: 614 op: PLUS1 (93)
    _1762 = _significand_3580 + 1;
    if (_1762 > MAXINT){
        _1762 = NewDouble((eudouble)_1762);
    }
    // SubProg scientific_to_float pc: 618 op: MINUS (10)
    if (IS_ATOM_INT(_1762)) {
        _1763 = _1761 - _1762;
    }
    else {
        _1763 = NewDouble((eudouble)_1761 - DBL_PTR(_1762)->dbl);
    }
    _1761 = NOVALUE;
    DeRef(_1762);
    _1762 = NOVALUE;
    // SubProg scientific_to_float pc: 622 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_int_bits_3575);
    if (!IS_ATOM_INT(_1763)){
        _1764 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_1763)->dbl));
    }
    else{
        _1764 = (object)*(((s1_ptr)_2)->base + _1763);
    }
    // SubProg scientific_to_float pc: 626 op: NOP1 (159)
    // SubProg scientific_to_float pc: 627 op: IF (20)
    if (_1764 == 0) {
        _1764 = NOVALUE;
        goto L19; // [627] 656
    }
    else {
        if (!IS_ATOM_INT(_1764) && DBL_PTR(_1764)->dbl == 0.0){
            _1764 = NOVALUE;
            goto L19; // [627] 656
        }
        _1764 = NOVALUE;
    }
    _1764 = NOVALUE;
    // SubProg scientific_to_float pc: 630 op: STARTLINE (58)

    /** scinot.e:416				mbits[1] += 1*/
    // SubProg scientific_to_float pc: 632 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 634 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_3577);
    _1765 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 638 op: PLUS1 (93)
    if (IS_ATOM_INT(_1765)) {
        _1766 = _1765 + 1;
        if (_1766 > MAXINT){
            _1766 = NewDouble((eudouble)_1766);
        }
    }
    else
    _1766 = binary_op(PLUS, 1, _1765);
    _1765 = NOVALUE;
    // SubProg scientific_to_float pc: 642 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_3577);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_3577 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1766;
    if( _1 != _1766 ){
        DeRef(_1);
    }
    _1766 = NOVALUE;
    // SubProg scientific_to_float pc: 646 op: STARTLINE (58)

    /** scinot.e:417				mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 648 op: PROC (27)
    RefDS(_mbits_3577);
    _0 = _mbits_3577;
    _mbits_3577 = _21carry(_mbits_3577, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 653 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 655 op: NOP1 (159)
L19: // addr: 656 pc: 655 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 656 op: STARTLINE (58)

    /** scinot.e:419			exp = length(int_bits)-1*/
    // SubProg scientific_to_float pc: 658 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1768 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1768 = 1;
    }
    // SubProg scientific_to_float pc: 661 op: MINUS_I (116)
    _exp_3574 = _1768 - 1;
    _1768 = NOVALUE;
    // SubProg scientific_to_float pc: 665 op: ELSE (23)
    goto L1A; // [665] 940
    // SubProg scientific_to_float pc: 667 op: NOP1 (159)
L16: // addr: 668 pc: 667 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 668 op: STARTLINE (58)

    /** scinot.e:422			if length(int_bits) then*/
    // SubProg scientific_to_float pc: 670 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1770 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1770 = 1;
    }
    // SubProg scientific_to_float pc: 673 op: IF (20)
    if (_1770 == 0)
    {
        _1770 = NOVALUE;
        goto L1B; // [673] 688
    }
    else{
        _1770 = NOVALUE;
    }
    // SubProg scientific_to_float pc: 676 op: STARTLINE (58)

    /** scinot.e:424				exp = length(int_bits)-1*/
    // SubProg scientific_to_float pc: 678 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_3575)){
            _1771 = SEQ_PTR(_int_bits_3575)->length;
    }
    else {
        _1771 = 1;
    }
    // SubProg scientific_to_float pc: 681 op: MINUS_I (116)
    _exp_3574 = _1771 - 1;
    _1771 = NOVALUE;
    // SubProg scientific_to_float pc: 685 op: ELSE (23)
    goto L1C; // [685] 748
    // SubProg scientific_to_float pc: 687 op: NOP1 (159)
L1B: // addr: 688 pc: 687 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 688 op: STARTLINE (58)

    /** scinot.e:428				exp = - find( 1, reverse( frac_bits ) )*/
    // SubProg scientific_to_float pc: 690 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 692 op: PROC (27)
    RefDS(_frac_bits_3576);
    _1773 = _21reverse(_frac_bits_3576);
    // SubProg scientific_to_float pc: 696 op: FIND_FROM (176)
    _1774 = find_from(1, _1773, 1);
    DeRef(_1773);
    _1773 = NOVALUE;
    // SubProg scientific_to_float pc: 701 op: UMINUS (12)
    _exp_3574 = - _1774;
    // SubProg scientific_to_float pc: 706 op: STARTLINE (58)

    /** scinot.e:429				if exp < min_exp then*/
    // SubProg scientific_to_float pc: 708 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 710 op: LESS_IFW_I (119)
    if (_exp_3574 >= _min_exp_3582)
    goto L1D; // [710] 720
    // SubProg scientific_to_float pc: 714 op: STARTLINE (58)

    /** scinot.e:432					exp = min_exp*/
    // SubProg scientific_to_float pc: 716 op: ASSIGN_I (113)
    _exp_3574 = _min_exp_3582;
    // SubProg scientific_to_float pc: 719 op: NOP1 (159)
L1D: // addr: 720 pc: 719 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 720 op: STARTLINE (58)

    /** scinot.e:435				if exp then*/
    // SubProg scientific_to_float pc: 722 op: IF (20)
    if (_exp_3574 == 0)
    {
        goto L1E; // [722] 747
    }
    else{
    }
    // SubProg scientific_to_float pc: 725 op: STARTLINE (58)

    /** scinot.e:437					frac_bits = remove( frac_bits, length(frac_bits) + exp + 2, length( frac_bits ) )*/
    // SubProg scientific_to_float pc: 727 op: LENGTH (42)
    if (IS_SEQUENCE(_frac_bits_3576)){
            _1777 = SEQ_PTR(_frac_bits_3576)->length;
    }
    else {
        _1777 = 1;
    }
    // SubProg scientific_to_float pc: 730 op: PLUS (11)
    _1778 = _1777 + _exp_3574;
    if ((object)((uintptr_t)_1778 + (uintptr_t)HIGH_BITS) >= 0){
        _1778 = NewDouble((eudouble)_1778);
    }
    _1777 = NOVALUE;
    // SubProg scientific_to_float pc: 734 op: PLUS (11)
    if (IS_ATOM_INT(_1778)) {
        _1779 = _1778 + 2;
        if ((object)((uintptr_t)_1779 + (uintptr_t)HIGH_BITS) >= 0){
            _1779 = NewDouble((eudouble)_1779);
        }
    }
    else {
        _1779 = NewDouble(DBL_PTR(_1778)->dbl + (eudouble)2);
    }
    DeRef(_1778);
    _1778 = NOVALUE;
    // SubProg scientific_to_float pc: 738 op: LENGTH (42)
    if (IS_SEQUENCE(_frac_bits_3576)){
            _1780 = SEQ_PTR(_frac_bits_3576)->length;
    }
    else {
        _1780 = 1;
    }
    // SubProg scientific_to_float pc: 741 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_frac_bits_3576);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_1779)) ? _1779 : (object)(DBL_PTR(_1779)->dbl);
        int stop = (IS_ATOM_INT(_1780)) ? _1780 : (object)(DBL_PTR(_1780)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_frac_bits_3576), start, &_frac_bits_3576 );
            }
            else Tail(SEQ_PTR(_frac_bits_3576), stop+1, &_frac_bits_3576);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_frac_bits_3576), start, &_frac_bits_3576);
        }
        else {
            assign_slice_seq = &assign_space;
            _frac_bits_3576 = Remove_elements(start, stop, (SEQ_PTR(_frac_bits_3576)->ref == 1));
        }
    }
    DeRef(_1779);
    _1779 = NOVALUE;
    _1780 = NOVALUE;
    // SubProg scientific_to_float pc: 746 op: NOP1 (159)
L1E: // addr: 747 pc: 746 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 747 op: NOP1 (159)
L1C: // addr: 748 pc: 747 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 748 op: STARTLINE (58)

    /** scinot.e:444			mbits = frac_bits & int_bits*/
    // SubProg scientific_to_float pc: 750 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 752 op: CONCAT (15)
    Concat((object_ptr)&_mbits_3577, _frac_bits_3576, _int_bits_3575);
    // SubProg scientific_to_float pc: 756 op: STARTLINE (58)

    /** scinot.e:445			mbits = repeat( 0, significand + 1 ) & mbits*/
    // SubProg scientific_to_float pc: 758 op: PLUS1 (93)
    _1783 = _significand_3580 + 1;
    // SubProg scientific_to_float pc: 762 op: REPEAT (32)
    _1784 = Repeat(0, _1783);
    _1783 = NOVALUE;
    // SubProg scientific_to_float pc: 766 op: CONCAT (15)
    Concat((object_ptr)&_mbits_3577, _1784, _mbits_3577);
    DeRefDS(_1784);
    _1784 = NOVALUE;
    DeRef(_1784);
    _1784 = NOVALUE;
    // SubProg scientific_to_float pc: 770 op: STARTLINE (58)

    /** scinot.e:447			if exp > min_exp then*/
    // SubProg scientific_to_float pc: 772 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 774 op: GREATER_IFW_I (124)
    if (_exp_3574 <= _min_exp_3582)
    goto L1F; // [774] 877
    // SubProg scientific_to_float pc: 778 op: STARTLINE (58)

    /** scinot.e:449				if mbits[$-(significand+1)] then*/
    // SubProg scientific_to_float pc: 780 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1787 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1787 = 1;
    }
    // SubProg scientific_to_float pc: 783 op: PLUS1 (93)
    _1788 = _significand_3580 + 1;
    if (_1788 > MAXINT){
        _1788 = NewDouble((eudouble)_1788);
    }
    // SubProg scientific_to_float pc: 787 op: MINUS (10)
    if (IS_ATOM_INT(_1788)) {
        _1789 = _1787 - _1788;
    }
    else {
        _1789 = NewDouble((eudouble)_1787 - DBL_PTR(_1788)->dbl);
    }
    _1787 = NOVALUE;
    DeRef(_1788);
    _1788 = NOVALUE;
    // SubProg scientific_to_float pc: 791 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_mbits_3577);
    if (!IS_ATOM_INT(_1789)){
        _1790 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_1789)->dbl));
    }
    else{
        _1790 = (object)*(((s1_ptr)_2)->base + _1789);
    }
    // SubProg scientific_to_float pc: 795 op: IF (20)
    if (_1790 == 0) {
        _1790 = NOVALUE;
        goto L20; // [795] 829
    }
    else {
        if (!IS_ATOM_INT(_1790) && DBL_PTR(_1790)->dbl == 0.0){
            _1790 = NOVALUE;
            goto L20; // [795] 829
        }
        _1790 = NOVALUE;
    }
    _1790 = NOVALUE;
    // SubProg scientific_to_float pc: 798 op: STARTLINE (58)

    /** scinot.e:451					mbits[$-significand] += 1*/
    // SubProg scientific_to_float pc: 800 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1791 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1791 = 1;
    }
    // SubProg scientific_to_float pc: 803 op: MINUS (10)
    _1792 = _1791 - _significand_3580;
    _1791 = NOVALUE;
    // SubProg scientific_to_float pc: 807 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_3577);
    _1793 = (object)*(((s1_ptr)_2)->base + _1792);
    // SubProg scientific_to_float pc: 811 op: PLUS1 (93)
    if (IS_ATOM_INT(_1793)) {
        _1794 = _1793 + 1;
        if (_1794 > MAXINT){
            _1794 = NewDouble((eudouble)_1794);
        }
    }
    else
    _1794 = binary_op(PLUS, 1, _1793);
    _1793 = NOVALUE;
    // SubProg scientific_to_float pc: 815 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_3577);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_3577 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _1792);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1794;
    if( _1 != _1794 ){
        DeRef(_1);
    }
    _1794 = NOVALUE;
    // SubProg scientific_to_float pc: 819 op: STARTLINE (58)

    /** scinot.e:452					mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 821 op: PROC (27)
    RefDS(_mbits_3577);
    _0 = _mbits_3577;
    _mbits_3577 = _21carry(_mbits_3577, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 826 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 828 op: NOP1 (159)
L20: // addr: 829 pc: 828 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 829 op: STARTLINE (58)

    /** scinot.e:454				if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 831 op: EQUALS_IFW (104)
    if (_fp_3571 != 2)
    goto L21; // [831] 859
    // SubProg scientific_to_float pc: 835 op: STARTLINE (58)

    /** scinot.e:456					mbits = mbits[$-significand..$-1]*/
    // SubProg scientific_to_float pc: 837 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1797 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1797 = 1;
    }
    // SubProg scientific_to_float pc: 840 op: MINUS (10)
    _1798 = _1797 - _significand_3580;
    if ((object)((uintptr_t)_1798 +(uintptr_t) HIGH_BITS) >= 0){
        _1798 = NewDouble((eudouble)_1798);
    }
    _1797 = NOVALUE;
    // SubProg scientific_to_float pc: 844 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1799 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1799 = 1;
    }
    // SubProg scientific_to_float pc: 847 op: MINUS (10)
    _1800 = _1799 - 1;
    _1799 = NOVALUE;
    // SubProg scientific_to_float pc: 851 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_3577;
    RHS_Slice(_mbits_3577, _1798, _1800);
    // SubProg scientific_to_float pc: 856 op: ELSE (23)
    goto L22; // [856] 939
    // SubProg scientific_to_float pc: 858 op: NOP1 (159)
L21: // addr: 859 pc: 858 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 859 op: STARTLINE (58)

    /** scinot.e:459					mbits = remove( mbits, 1, length(mbits) - significand )*/
    // SubProg scientific_to_float pc: 861 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1802 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1802 = 1;
    }
    // SubProg scientific_to_float pc: 864 op: MINUS (10)
    _1803 = _1802 - _significand_3580;
    if ((object)((uintptr_t)_1803 +(uintptr_t) HIGH_BITS) >= 0){
        _1803 = NewDouble((eudouble)_1803);
    }
    _1802 = NOVALUE;
    // SubProg scientific_to_float pc: 868 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_3577);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_1803)) ? _1803 : (object)(DBL_PTR(_1803)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_3577), start, &_mbits_3577 );
            }
            else Tail(SEQ_PTR(_mbits_3577), stop+1, &_mbits_3577);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_3577), start, &_mbits_3577);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_3577 = Remove_elements(start, stop, (SEQ_PTR(_mbits_3577)->ref == 1));
        }
    }
    DeRef(_1803);
    _1803 = NOVALUE;
    // SubProg scientific_to_float pc: 873 op: NOP1 (159)
    // SubProg scientific_to_float pc: 874 op: ELSE (23)
    goto L22; // [874] 939
    // SubProg scientific_to_float pc: 876 op: NOP1 (159)
L1F: // addr: 877 pc: 876 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 877 op: STARTLINE (58)

    /** scinot.e:463				if mbits[$-significand] then*/
    // SubProg scientific_to_float pc: 879 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1805 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1805 = 1;
    }
    // SubProg scientific_to_float pc: 882 op: MINUS (10)
    _1806 = _1805 - _significand_3580;
    _1805 = NOVALUE;
    // SubProg scientific_to_float pc: 886 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_mbits_3577);
    _1807 = (object)*(((s1_ptr)_2)->base + _1806);
    // SubProg scientific_to_float pc: 890 op: IF (20)
    if (_1807 == 0) {
        _1807 = NOVALUE;
        goto L23; // [890] 924
    }
    else {
        if (!IS_ATOM_INT(_1807) && DBL_PTR(_1807)->dbl == 0.0){
            _1807 = NOVALUE;
            goto L23; // [890] 924
        }
        _1807 = NOVALUE;
    }
    _1807 = NOVALUE;
    // SubProg scientific_to_float pc: 893 op: STARTLINE (58)

    /** scinot.e:465					mbits[$-significand] += 1*/
    // SubProg scientific_to_float pc: 895 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1808 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1808 = 1;
    }
    // SubProg scientific_to_float pc: 898 op: MINUS (10)
    _1809 = _1808 - _significand_3580;
    _1808 = NOVALUE;
    // SubProg scientific_to_float pc: 902 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_3577);
    _1810 = (object)*(((s1_ptr)_2)->base + _1809);
    // SubProg scientific_to_float pc: 906 op: PLUS1 (93)
    if (IS_ATOM_INT(_1810)) {
        _1811 = _1810 + 1;
        if (_1811 > MAXINT){
            _1811 = NewDouble((eudouble)_1811);
        }
    }
    else
    _1811 = binary_op(PLUS, 1, _1810);
    _1810 = NOVALUE;
    // SubProg scientific_to_float pc: 910 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_3577);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_3577 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _1809);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1811;
    if( _1 != _1811 ){
        DeRef(_1);
    }
    _1811 = NOVALUE;
    // SubProg scientific_to_float pc: 914 op: STARTLINE (58)

    /** scinot.e:466					mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 916 op: PROC (27)
    RefDS(_mbits_3577);
    _0 = _mbits_3577;
    _mbits_3577 = _21carry(_mbits_3577, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 921 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 923 op: NOP1 (159)
L23: // addr: 924 pc: 923 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 924 op: STARTLINE (58)

    /** scinot.e:468				mbits = remove( mbits, 1, length(mbits) - significand )*/
    // SubProg scientific_to_float pc: 926 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_3577)){
            _1813 = SEQ_PTR(_mbits_3577)->length;
    }
    else {
        _1813 = 1;
    }
    // SubProg scientific_to_float pc: 929 op: MINUS (10)
    _1814 = _1813 - _significand_3580;
    if ((object)((uintptr_t)_1814 +(uintptr_t) HIGH_BITS) >= 0){
        _1814 = NewDouble((eudouble)_1814);
    }
    _1813 = NOVALUE;
    // SubProg scientific_to_float pc: 933 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_3577);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_1814)) ? _1814 : (object)(DBL_PTR(_1814)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_3577), start, &_mbits_3577 );
            }
            else Tail(SEQ_PTR(_mbits_3577), stop+1, &_mbits_3577);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_3577), start, &_mbits_3577);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_3577 = Remove_elements(start, stop, (SEQ_PTR(_mbits_3577)->ref == 1));
        }
    }
    DeRef(_1814);
    _1814 = NOVALUE;
    // SubProg scientific_to_float pc: 938 op: NOP1 (159)
L22: // addr: 939 pc: 938 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 939 op: NOP1 (159)
L1A: // addr: 940 pc: 939 sub: 3568 op: 159
    // SubProg scientific_to_float pc: 940 op: STARTLINE (58)

    /** scinot.e:474		ebits = int_to_bits( exp + exp_bias, exponent )*/
    // SubProg scientific_to_float pc: 942 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 944 op: PLUS (11)
    _1816 = _exp_3574 + _exp_bias_3583;
    if ((object)((uintptr_t)_1816 + (uintptr_t)HIGH_BITS) >= 0){
        _1816 = NewDouble((eudouble)_1816);
    }
    // SubProg scientific_to_float pc: 948 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 950 op: PROC (27)
    _0 = _ebits_3578;
    _ebits_3578 = _16int_to_bits(_1816, _exponent_3581);
    DeRef(_0);
    _1816 = NOVALUE;
    // SubProg scientific_to_float pc: 955 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 957 op: STARTLINE (58)

    /** scinot.e:477		return bits_to_bytes( mbits & ebits & sbits )*/
    // SubProg scientific_to_float pc: 959 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 961 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 963 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _sbits_3579;
        concat_list[1] = _ebits_3578;
        concat_list[2] = _mbits_3577;
        Concat_N((object_ptr)&_1818, concat_list, 3);
    }
    // SubProg scientific_to_float pc: 969 op: PROC (27)
    _1819 = _21bits_to_bytes(_1818);
    _1818 = NOVALUE;
    // SubProg scientific_to_float pc: 973 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_3570
    DeRefDS(_s_3570);

// block var fp_3571

// block var dp_3572

// block var e_3573

// block var exp_3574

// block var int_bits_3575
    DeRef(_int_bits_3575);

// block var frac_bits_3576
    DeRef(_frac_bits_3576);

// block var mbits_3577
    DeRefDS(_mbits_3577);

// block var ebits_3578
    DeRefDS(_ebits_3578);

// block var sbits_3579
    DeRefDSi(_sbits_3579);

// block var significand_3580

// block var exponent_3581

// block var min_exp_3582

// block var exp_bias_3583
    DeRef(_1806);
    _1806 = NOVALUE;
    DeRef(_1712);
    _1712 = NOVALUE;
    DeRef(_1789);
    _1789 = NOVALUE;
    DeRef(_1748);
    _1748 = NOVALUE;
    DeRef(_1754);
    _1754 = NOVALUE;
    DeRef(_1750);
    _1750 = NOVALUE;
    DeRef(_1759);
    _1759 = NOVALUE;
    DeRef(_1763);
    _1763 = NOVALUE;
    DeRef(_1798);
    _1798 = NOVALUE;
    DeRef(_1714);
    _1714 = NOVALUE;
    DeRef(_1680);
    _1680 = NOVALUE;
    DeRef(_1696);
    _1696 = NOVALUE;
    DeRef(_1691);
    _1691 = NOVALUE;
    DeRef(_1705);
    _1705 = NOVALUE;
    DeRef(_1740);
    _1740 = NOVALUE;
    DeRef(_1800);
    _1800 = NOVALUE;
    DeRef(_1688);
    _1688 = NOVALUE;
    DeRef(_1792);
    _1792 = NOVALUE;
    DeRef(_1683);
    _1683 = NOVALUE;
    DeRef(_1809);
    _1809 = NOVALUE;
    DeRef(_1732);
    _1732 = NOVALUE;
    return _1819;
    // SubProg scientific_to_float pc: 977 op: BADRETURNF (43)
    ;
}


object _21scientific_to_atom(object _s_3777, object _fp_3778)
{
    object _float_3781 = NOVALUE;
    object _1825 = NOVALUE; // 3790 1825
// skipping _1824  name type: 0
    object _1823 = NOVALUE; // 3786 1823
// skipping _1822  name type: 0
// skipping _1821  name type: 0
// skipping _1820  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scientific_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_atom pc: 3 op: STARTLINE (58)

    /** scinot.e:495		if fp = NATIVE then*/
    // SubProg scientific_to_atom pc: 5 op: EQUALS_IFW (104)
    if (_fp_3778 != 1)
    goto L1; // [5] 17
    // SubProg scientific_to_atom pc: 9 op: STARTLINE (58)

    /** scinot.e:496			fp = NATIVE_FORMAT*/
    // SubProg scientific_to_atom pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scientific_to_atom pc: 13 op: ASSIGN (18)
    _fp_3778 = 2;
    // SubProg scientific_to_atom pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 3775 op: 159
    // SubProg scientific_to_atom pc: 17 op: STARTLINE (58)

    /** scinot.e:498		sequence float = scientific_to_float( s, fp )*/
    // SubProg scientific_to_atom pc: 19 op: PROC (27)
    RefDS(_s_3777);
    _0 = _float_3781;
    _float_3781 = _21scientific_to_float(_s_3777, _fp_3778);
    DeRef(_0);
    // SubProg scientific_to_atom pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_atom pc: 26 op: STARTLINE (58)

    /** scinot.e:499		if fp = DOUBLE then*/
    // SubProg scientific_to_atom pc: 28 op: EQUALS_IFW (104)
    if (_fp_3778 != 2)
    goto L2; // [28] 45
    // SubProg scientific_to_atom pc: 32 op: STARTLINE (58)

    /** scinot.e:500			return float64_to_atom( float )*/
    // SubProg scientific_to_atom pc: 34 op: PROC (27)
    RefDS(_float_3781);
    _1823 = _16float64_to_atom(_float_3781);
    // SubProg scientific_to_atom pc: 38 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_atom

// block var s_3777
    DeRefDS(_s_3777);

// block var fp_3778

// block var float_3781
    DeRefDS(_float_3781);
    return _1823;
    // SubProg scientific_to_atom pc: 42 op: ELSE (23)
    goto L3; // [42] 63
    // SubProg scientific_to_atom pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 3775 op: 159
    // SubProg scientific_to_atom pc: 45 op: STARTLINE (58)

    /** scinot.e:501		elsif fp = EXTENDED then*/
    // SubProg scientific_to_atom pc: 47 op: EQUALS_IFW (104)
    if (_fp_3778 != 3)
    goto L4; // [47] 62
    // SubProg scientific_to_atom pc: 51 op: STARTLINE (58)

    /** scinot.e:502			return float80_to_atom( float )*/
    // SubProg scientific_to_atom pc: 53 op: PROC (27)
    RefDS(_float_3781);
    _1825 = _16float80_to_atom(_float_3781);
    // SubProg scientific_to_atom pc: 57 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_atom

// block var s_3777
    DeRefDS(_s_3777);

// block var fp_3778

// block var float_3781
    DeRefDS(_float_3781);
    DeRef(_1823);
    _1823 = NOVALUE;
    return _1825;
    // SubProg scientific_to_atom pc: 61 op: NOP1 (159)
L4: // addr: 62 pc: 61 sub: 3775 op: 159
    // SubProg scientific_to_atom pc: 62 op: NOP1 (159)
L3: // addr: 63 pc: 62 sub: 3775 op: 159
    // SubProg scientific_to_atom pc: 63 op: BADRETURNF (43)
    ;
}



// 0xCE872388
