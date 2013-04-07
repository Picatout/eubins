// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _28reverse(object _s_10327)
{
    object _lower_10328 = NOVALUE;
    object _n_10329 = NOVALUE;
    object _n2_10330 = NOVALUE;
    object _t_10331 = NOVALUE;
// skipping _5762  name type: 0
    object _5761 = NOVALUE; // 10340 5761
    object _5760 = NOVALUE; // 10339 5760
    object _5759 = NOVALUE; // 10338 5759
// skipping _5758  name type: 0
// skipping _5757  name type: 0
    object _5756 = NOVALUE; // 10333 5756
// skipping _5755  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reverse pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg reverse pc: 3 op: STARTLINE (58)

    /** scinot.e:87		n = length(s)*/
    // SubProg reverse pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10327)){
            _n_10329 = SEQ_PTR(_s_10327)->length;
    }
    else {
        _n_10329 = 1;
    }
    // SubProg reverse pc: 8 op: STARTLINE (58)

    /** scinot.e:88		n2 = floor(n/2)+1*/
    // SubProg reverse pc: 10 op: FLOOR_DIV2 (66)
    _5756 = _n_10329 >> 1;
    // SubProg reverse pc: 14 op: PLUS1_I (117)
    _n2_10330 = _5756 + 1;
    _5756 = NOVALUE;
    // SubProg reverse pc: 18 op: STARTLINE (58)

    /** scinot.e:89		t = repeat(0, n)*/
    // SubProg reverse pc: 20 op: REPEAT (32)
    DeRef(_t_10331);
    _t_10331 = Repeat(0, _n_10329);
    // SubProg reverse pc: 24 op: STARTLINE (58)

    /** scinot.e:90		lower = 1*/
    // SubProg reverse pc: 26 op: ASSIGN_I (113)
    _lower_10328 = 1;
    // SubProg reverse pc: 29 op: STARTLINE (58)

    /** scinot.e:91		for upper = n to n2 by -1 do*/
    // SubProg reverse pc: 31 op: ASSIGN (18)
    _5759 = _n2_10330;
    // SubProg reverse pc: 34 op: FOR_I (125)
    {
        object _upper_10337;
        _upper_10337 = _n_10329;
L1: // addr: 41 pc: 34 sub: 10325 op: 125
        if (_upper_10337 < _5759){
            goto L2; // [34] 74
        }
        // SubProg reverse pc: 41 op: STARTLINE (58)

        /** scinot.e:92			t[upper] = s[lower]*/
        // SubProg reverse pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_10327);
        _5760 = (object)*(((s1_ptr)_2)->base + _lower_10328);
        // SubProg reverse pc: 47 op: ASSIGN_SUBS (16)
        Ref(_5760);
        _2 = (object)SEQ_PTR(_t_10331);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_10331 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _upper_10337);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5760;
        if( _1 != _5760 ){
            DeRef(_1);
        }
        _5760 = NOVALUE;
        // SubProg reverse pc: 51 op: STARTLINE (58)

        /** scinot.e:93			t[lower] = s[upper]*/
        // SubProg reverse pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_10327);
        _5761 = (object)*(((s1_ptr)_2)->base + _upper_10337);
        // SubProg reverse pc: 57 op: ASSIGN_SUBS (16)
        Ref(_5761);
        _2 = (object)SEQ_PTR(_t_10331);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_10331 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lower_10328);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5761;
        if( _1 != _5761 ){
            DeRef(_1);
        }
        _5761 = NOVALUE;
        // SubProg reverse pc: 61 op: STARTLINE (58)

        /** scinot.e:94			lower += 1*/
        // SubProg reverse pc: 63 op: PLUS1_I (117)
        _lower_10328 = _lower_10328 + 1;
        // SubProg reverse pc: 67 op: STARTLINE (58)

        /** scinot.e:95		end for*/
        // SubProg reverse pc: 69 op: ENDFOR_GENERAL (39)
        _upper_10337 = _upper_10337 + -1;
        goto L1; // [69] 41
L2: // addr: 74 pc: 69 sub: 10325 op: 39
        ;
    }
    // SubProg reverse pc: 74 op: STARTLINE (58)

    /** scinot.e:96		return t*/
    // SubProg reverse pc: 76 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var s_10327
    DeRefDS(_s_10327);

// block var lower_10328

// block var n_10329

// block var n2_10330
    return _t_10331;
    // SubProg reverse pc: 80 op: BADRETURNF (43)
    ;
}


object _28carry(object _a_10344, object _radix_10345)
{
    object _q_10346 = NOVALUE;
    object _r_10347 = NOVALUE;
    object _b_10348 = NOVALUE;
    object _rmax_10349 = NOVALUE;
    object _i_10350 = NOVALUE;
// skipping _5776  name type: 0
    object _5775 = NOVALUE; // 10366 5775
    object _5774 = NOVALUE; // 10365 5774
    object _5773 = NOVALUE; // 10364 5773
// skipping _5772  name type: 0
// skipping _5771  name type: 0
    object _5770 = NOVALUE; // 10361 5770
// skipping _5769  name type: 0
// skipping _5768  name type: 0
// skipping _5767  name type: 0
// skipping _5766  name type: 0
// skipping _5765  name type: 0
    object _5764 = NOVALUE; // 10353 5764
// skipping _5763  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg carry pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg carry pc: 3 op: INTEGER_CHECK (96)
    // SubProg carry pc: 5 op: STARTLINE (58)

    /** scinot.e:102		rmax = radix - 1*/
    // SubProg carry pc: 7 op: MINUS (10)
    DeRef(_rmax_10349);
    _rmax_10349 = _radix_10345 - 1;
    if ((object)((uintptr_t)_rmax_10349 +(uintptr_t) HIGH_BITS) >= 0){
        _rmax_10349 = NewDouble((eudouble)_rmax_10349);
    }
    // SubProg carry pc: 11 op: STARTLINE (58)

    /** scinot.e:103		i = 1*/
    // SubProg carry pc: 13 op: ASSIGN (18)
    DeRef(_i_10350);
    _i_10350 = 1;
    // SubProg carry pc: 16 op: STARTLINE (58)

    /** scinot.e:104		while i <= length(a) do*/
    // SubProg carry pc: 18 op: NOP2 (110)
    // SubProg carry pc: 20 op: NOPWHILE (158)
L1: // addr: 21 pc: 20 sub: 10342 op: 158
    // SubProg carry pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_a_10344)){
            _5764 = SEQ_PTR(_a_10344)->length;
    }
    else {
        _5764 = 1;
    }
    // SubProg carry pc: 24 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _i_10350, _5764)){
        _5764 = NOVALUE;
        goto L2; // [24] 104
    }
    _5764 = NOVALUE;
    // SubProg carry pc: 28 op: STARTLINE (58)

    /** scinot.e:105			b = a[i]*/
    // SubProg carry pc: 30 op: RHS_SUBS (25)
    DeRef(_b_10348);
    _2 = (object)SEQ_PTR(_a_10344);
    if (!IS_ATOM_INT(_i_10350)){
        _b_10348 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_10350)->dbl));
    }
    else{
        _b_10348 = (object)*(((s1_ptr)_2)->base + _i_10350);
    }
    Ref(_b_10348);
    // SubProg carry pc: 34 op: STARTLINE (58)

    /** scinot.e:106			if b > rmax then*/
    // SubProg carry pc: 36 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _b_10348, _rmax_10349)){
        goto L3; // [36] 93
    }
    // SubProg carry pc: 40 op: STARTLINE (58)

    /** scinot.e:107				q = floor( b / radix )*/
    // SubProg carry pc: 42 op: FLOOR_DIV (63)
    DeRef(_q_10346);
    if (IS_ATOM_INT(_b_10348)) {
        if (_radix_10345 > 0 && _b_10348 >= 0) {
            _q_10346 = _b_10348 / _radix_10345;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_b_10348 / (eudouble)_radix_10345);
            if (_b_10348 != MININT)
            _q_10346 = (object)temp_dbl;
            else
            _q_10346 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _b_10348, _radix_10345);
        _q_10346 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg carry pc: 46 op: STARTLINE (58)

    /** scinot.e:108				r = remainder( b, radix )*/
    // SubProg carry pc: 48 op: REMAINDER (71)
    DeRef(_r_10347);
    if (IS_ATOM_INT(_b_10348)) {
        _r_10347 = (_b_10348 % _radix_10345);
    }
    else {
        temp_d.dbl = (eudouble)_radix_10345;
        _r_10347 = Dremainder(DBL_PTR(_b_10348), &temp_d);
    }
    // SubProg carry pc: 52 op: STARTLINE (58)

    /** scinot.e:109				a[i] = r*/
    // SubProg carry pc: 54 op: ASSIGN_SUBS (16)
    Ref(_r_10347);
    _2 = (object)SEQ_PTR(_a_10344);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_10344 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_i_10350))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_10350)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _i_10350);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_10347;
    DeRef(_1);
    // SubProg carry pc: 58 op: STARTLINE (58)

    /** scinot.e:110				if i = length(a) then*/
    // SubProg carry pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_a_10344)){
            _5770 = SEQ_PTR(_a_10344)->length;
    }
    else {
        _5770 = 1;
    }
    // SubProg carry pc: 63 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _i_10350, _5770)){
        _5770 = NOVALUE;
        goto L4; // [63] 74
    }
    _5770 = NOVALUE;
    // SubProg carry pc: 67 op: STARTLINE (58)

    /** scinot.e:111					a &= 0*/
    // SubProg carry pc: 69 op: CONCAT (15)
    Append(&_a_10344, _a_10344, 0);
    // SubProg carry pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 10342 op: 159
    // SubProg carry pc: 74 op: STARTLINE (58)

    /** scinot.e:113				a[i+1] += q*/
    // SubProg carry pc: 76 op: PLUS1 (93)
    if (IS_ATOM_INT(_i_10350)) {
        _5773 = _i_10350 + 1;
    }
    else
    _5773 = binary_op(PLUS, 1, _i_10350);
    // SubProg carry pc: 80 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_a_10344);
    if (!IS_ATOM_INT(_5773)){
        _5774 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5773)->dbl));
    }
    else{
        _5774 = (object)*(((s1_ptr)_2)->base + _5773);
    }
    // SubProg carry pc: 84 op: PLUS (11)
    if (IS_ATOM_INT(_5774) && IS_ATOM_INT(_q_10346)) {
        _5775 = _5774 + _q_10346;
        if ((object)((uintptr_t)_5775 + (uintptr_t)HIGH_BITS) >= 0){
            _5775 = NewDouble((eudouble)_5775);
        }
    }
    else {
        _5775 = binary_op(PLUS, _5774, _q_10346);
    }
    _5774 = NOVALUE;
    // SubProg carry pc: 88 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_a_10344);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_10344 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5773))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5773)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5773);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5775;
    if( _1 != _5775 ){
        DeRef(_1);
    }
    _5775 = NOVALUE;
    // SubProg carry pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 10342 op: 159
    // SubProg carry pc: 93 op: STARTLINE (58)

    /** scinot.e:115			i += 1*/
    // SubProg carry pc: 95 op: PLUS1 (93)
    _0 = _i_10350;
    if (IS_ATOM_INT(_i_10350)) {
        _i_10350 = _i_10350 + 1;
        if (_i_10350 > MAXINT){
            _i_10350 = NewDouble((eudouble)_i_10350);
        }
    }
    else
    _i_10350 = binary_op(PLUS, 1, _i_10350);
    DeRef(_0);
    // SubProg carry pc: 99 op: STARTLINE (58)

    /** scinot.e:116		end while*/
    // SubProg carry pc: 101 op: ENDWHILE (22)
    goto L1; // [101] 21
    // SubProg carry pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 10342 op: 159
    // SubProg carry pc: 104 op: STARTLINE (58)

    /** scinot.e:118		return a*/
    // SubProg carry pc: 106 op: RETURNF (28)

// Exiting block BLOCK: carry

// block var radix_10345

// block var q_10346
    DeRef(_q_10346);

// block var r_10347
    DeRef(_r_10347);

// block var b_10348
    DeRef(_b_10348);

// block var rmax_10349
    DeRef(_rmax_10349);

// block var i_10350
    DeRef(_i_10350);
    DeRef(_5773);
    _5773 = NOVALUE;
    return _a_10344;
    // SubProg carry pc: 110 op: BADRETURNF (43)
    ;
}


object _28add(object _a_10370, object _b_10371)
{
    object _5793 = NOVALUE; // 10390 5793
// skipping _5792  name type: 0
    object _5791 = NOVALUE; // 10388 5791
    object _5790 = NOVALUE; // 10387 5790
    object _5789 = NOVALUE; // 10386 5789
    object _5788 = NOVALUE; // 10385 5788
// skipping _5787  name type: 0
    object _5786 = NOVALUE; // 10383 5786
    object _5785 = NOVALUE; // 10382 5785
// skipping _5784  name type: 0
    object _5783 = NOVALUE; // 10379 5783
    object _5782 = NOVALUE; // 10378 5782
    object _5781 = NOVALUE; // 10377 5781
    object _5780 = NOVALUE; // 10376 5780
// skipping _5779  name type: 0
    object _5778 = NOVALUE; // 10374 5778
    object _5777 = NOVALUE; // 10373 5777
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add pc: 5 op: STARTLINE (58)

    /** scinot.e:123		if length(a) < length(b) then*/
    // SubProg add pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_a_10370)){
            _5777 = SEQ_PTR(_a_10370)->length;
    }
    else {
        _5777 = 1;
    }
    // SubProg add pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_b_10371)){
            _5778 = SEQ_PTR(_b_10371)->length;
    }
    else {
        _5778 = 1;
    }
    // SubProg add pc: 13 op: LESS_IFW_I (119)
    if (_5777 >= _5778)
    goto L1; // [13] 40
    // SubProg add pc: 17 op: STARTLINE (58)

    /** scinot.e:124			a &= repeat( 0, length(b) - length(a) )*/
    // SubProg add pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_b_10371)){
            _5780 = SEQ_PTR(_b_10371)->length;
    }
    else {
        _5780 = 1;
    }
    // SubProg add pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_a_10370)){
            _5781 = SEQ_PTR(_a_10370)->length;
    }
    else {
        _5781 = 1;
    }
    // SubProg add pc: 25 op: MINUS (10)
    _5782 = _5780 - _5781;
    _5780 = NOVALUE;
    _5781 = NOVALUE;
    // SubProg add pc: 29 op: REPEAT (32)
    _5783 = Repeat(0, _5782);
    _5782 = NOVALUE;
    // SubProg add pc: 33 op: CONCAT (15)
    Concat((object_ptr)&_a_10370, _a_10370, _5783);
    DeRefDS(_5783);
    _5783 = NOVALUE;
    // SubProg add pc: 37 op: ELSE (23)
    goto L2; // [37] 74
    // SubProg add pc: 39 op: NOP1 (159)
L1: // addr: 40 pc: 39 sub: 10368 op: 159
    // SubProg add pc: 40 op: STARTLINE (58)

    /** scinot.e:125		elsif length(b) < length(a) then*/
    // SubProg add pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_b_10371)){
            _5785 = SEQ_PTR(_b_10371)->length;
    }
    else {
        _5785 = 1;
    }
    // SubProg add pc: 45 op: LENGTH (42)
    if (IS_SEQUENCE(_a_10370)){
            _5786 = SEQ_PTR(_a_10370)->length;
    }
    else {
        _5786 = 1;
    }
    // SubProg add pc: 48 op: LESS_IFW_I (119)
    if (_5785 >= _5786)
    goto L3; // [48] 73
    // SubProg add pc: 52 op: STARTLINE (58)

    /** scinot.e:126			b &= repeat( 0, length(a) - length(b) )*/
    // SubProg add pc: 54 op: LENGTH (42)
    if (IS_SEQUENCE(_a_10370)){
            _5788 = SEQ_PTR(_a_10370)->length;
    }
    else {
        _5788 = 1;
    }
    // SubProg add pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_b_10371)){
            _5789 = SEQ_PTR(_b_10371)->length;
    }
    else {
        _5789 = 1;
    }
    // SubProg add pc: 60 op: MINUS (10)
    _5790 = _5788 - _5789;
    _5788 = NOVALUE;
    _5789 = NOVALUE;
    // SubProg add pc: 64 op: REPEAT (32)
    _5791 = Repeat(0, _5790);
    _5790 = NOVALUE;
    // SubProg add pc: 68 op: CONCAT (15)
    Concat((object_ptr)&_b_10371, _b_10371, _5791);
    DeRefDS(_5791);
    _5791 = NOVALUE;
    // SubProg add pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 10368 op: 159
    // SubProg add pc: 73 op: NOP1 (159)
L2: // addr: 74 pc: 73 sub: 10368 op: 159
    // SubProg add pc: 74 op: STARTLINE (58)

    /** scinot.e:129		return a + b*/
    // SubProg add pc: 76 op: PLUS (11)
    _5793 = binary_op(PLUS, _a_10370, _b_10371);
    // SubProg add pc: 80 op: RETURNF (28)

// Exiting block BLOCK: add

// block var a_10370
    DeRefDS(_a_10370);

// block var b_10371
    DeRefDS(_b_10371);
    return _5793;
    // SubProg add pc: 84 op: BADRETURNF (43)
    ;
}


object _28borrow(object _a_10393, object _radix_10394)
{
    object _5801 = NOVALUE; // 10405 5801
    object _5800 = NOVALUE; // 10404 5800
    object _5799 = NOVALUE; // 10403 5799
    object _5798 = NOVALUE; // 10402 5798
    object _5797 = NOVALUE; // 10401 5797
// skipping _5796  name type: 0
    object _5795 = NOVALUE; // 10399 5795
    object _5794 = NOVALUE; // 10397 5794
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg borrow pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg borrow pc: 3 op: INTEGER_CHECK (96)
    // SubProg borrow pc: 5 op: STARTLINE (58)

    /** scinot.e:134		for i = length(a) to 2 by -1 do*/
    // SubProg borrow pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_a_10393)){
            _5794 = SEQ_PTR(_a_10393)->length;
    }
    else {
        _5794 = 1;
    }
    // SubProg borrow pc: 10 op: FOR_I (125)
    {
        object _i_10396;
        _i_10396 = _5794;
L1: // addr: 17 pc: 10 sub: 10391 op: 125
        if (_i_10396 < 2){
            goto L2; // [10] 67
        }
        // SubProg borrow pc: 17 op: STARTLINE (58)

        /** scinot.e:135			if a[i] < 0 then*/
        // SubProg borrow pc: 19 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_a_10393);
        _5795 = (object)*(((s1_ptr)_2)->base + _i_10396);
        // SubProg borrow pc: 23 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _5795, 0)){
            _5795 = NOVALUE;
            goto L3; // [23] 60
        }
        _5795 = NOVALUE;
        // SubProg borrow pc: 27 op: STARTLINE (58)

        /** scinot.e:136				a[i] += radix*/
        // SubProg borrow pc: 29 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_a_10393);
        _5797 = (object)*(((s1_ptr)_2)->base + _i_10396);
        // SubProg borrow pc: 33 op: PLUS (11)
        if (IS_ATOM_INT(_5797)) {
            _5798 = _5797 + _radix_10394;
            if ((object)((uintptr_t)_5798 + (uintptr_t)HIGH_BITS) >= 0){
                _5798 = NewDouble((eudouble)_5798);
            }
        }
        else {
            _5798 = binary_op(PLUS, _5797, _radix_10394);
        }
        _5797 = NOVALUE;
        // SubProg borrow pc: 37 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_a_10393);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_10393 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10396);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5798;
        if( _1 != _5798 ){
            DeRef(_1);
        }
        _5798 = NOVALUE;
        // SubProg borrow pc: 41 op: STARTLINE (58)

        /** scinot.e:137				a[i-1] -= 1*/
        // SubProg borrow pc: 43 op: MINUS (10)
        _5799 = _i_10396 - 1;
        // SubProg borrow pc: 47 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_a_10393);
        _5800 = (object)*(((s1_ptr)_2)->base + _5799);
        // SubProg borrow pc: 51 op: MINUS (10)
        if (IS_ATOM_INT(_5800)) {
            _5801 = _5800 - 1;
            if ((object)((uintptr_t)_5801 +(uintptr_t) HIGH_BITS) >= 0){
                _5801 = NewDouble((eudouble)_5801);
            }
        }
        else {
            _5801 = binary_op(MINUS, _5800, 1);
        }
        _5800 = NOVALUE;
        // SubProg borrow pc: 55 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_a_10393);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_10393 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _5799);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5801;
        if( _1 != _5801 ){
            DeRef(_1);
        }
        _5801 = NOVALUE;
        // SubProg borrow pc: 59 op: NOP1 (159)
L3: // addr: 60 pc: 59 sub: 10391 op: 159
        // SubProg borrow pc: 60 op: STARTLINE (58)

        /** scinot.e:139		end for*/
        // SubProg borrow pc: 62 op: ENDFOR_GENERAL (39)
        _i_10396 = _i_10396 + -1;
        goto L1; // [62] 17
L2: // addr: 67 pc: 62 sub: 10391 op: 39
        ;
    }
    // SubProg borrow pc: 67 op: STARTLINE (58)

    /** scinot.e:140		return a*/
    // SubProg borrow pc: 69 op: RETURNF (28)

// Exiting block BLOCK: borrow

// block var radix_10394
    DeRef(_5799);
    _5799 = NOVALUE;
    return _a_10393;
    // SubProg borrow pc: 73 op: BADRETURNF (43)
    ;
}


object _28bits_to_bytes(object _bits_10408)
{
    object _bytes_10409 = NOVALUE;
    object _r_10410 = NOVALUE;
// skipping _5811  name type: 0
    object _5810 = NOVALUE; // 10423 5810
    object _5809 = NOVALUE; // 10422 5809
    object _5808 = NOVALUE; // 10421 5808
    object _5807 = NOVALUE; // 10419 5807
// skipping _5806  name type: 0
    object _5805 = NOVALUE; // 10415 5805
    object _5804 = NOVALUE; // 10414 5804
// skipping _5803  name type: 0
    object _5802 = NOVALUE; // 10411 5802
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bits_to_bytes pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_bytes pc: 3 op: STARTLINE (58)

    /** scinot.e:155		r = remainder( length(bits), 8 )*/
    // SubProg bits_to_bytes pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_10408)){
            _5802 = SEQ_PTR(_bits_10408)->length;
    }
    else {
        _5802 = 1;
    }
    // SubProg bits_to_bytes pc: 8 op: REMAINDER (71)
    _r_10410 = (_5802 % 8);
    _5802 = NOVALUE;
    // SubProg bits_to_bytes pc: 12 op: STARTLINE (58)

    /** scinot.e:156		if r  then*/
    // SubProg bits_to_bytes pc: 14 op: IF (20)
    if (_r_10410 == 0)
    {
        goto L1; // [14] 32
    }
    else{
    }
    // SubProg bits_to_bytes pc: 17 op: STARTLINE (58)

    /** scinot.e:157			bits &= repeat( 0, 8 - r )*/
    // SubProg bits_to_bytes pc: 19 op: MINUS (10)
    _5804 = 8 - _r_10410;
    // SubProg bits_to_bytes pc: 23 op: REPEAT (32)
    _5805 = Repeat(0, _5804);
    _5804 = NOVALUE;
    // SubProg bits_to_bytes pc: 27 op: CONCAT (15)
    Concat((object_ptr)&_bits_10408, _bits_10408, _5805);
    DeRefDS(_5805);
    _5805 = NOVALUE;
    // SubProg bits_to_bytes pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 10406 op: 159
    // SubProg bits_to_bytes pc: 32 op: STARTLINE (58)

    /** scinot.e:160		bytes = {}*/
    // SubProg bits_to_bytes pc: 34 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_bytes_10409);
    _bytes_10409 = _5;
    // SubProg bits_to_bytes pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_bytes pc: 39 op: STARTLINE (58)

    /** scinot.e:161		for i = 1 to length(bits) by 8 do*/
    // SubProg bits_to_bytes pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_10408)){
            _5807 = SEQ_PTR(_bits_10408)->length;
    }
    else {
        _5807 = 1;
    }
    // SubProg bits_to_bytes pc: 44 op: FOR_I (125)
    {
        object _i_10418;
        _i_10418 = 1;
L2: // addr: 51 pc: 44 sub: 10406 op: 125
        if (_i_10418 > _5807){
            goto L3; // [44] 77
        }
        // SubProg bits_to_bytes pc: 51 op: STARTLINE (58)

        /** scinot.e:162			bytes &= bits_to_int( bits[i..i+7] )*/
        // SubProg bits_to_bytes pc: 53 op: PLUS (11)
        _5808 = _i_10418 + 7;
        // SubProg bits_to_bytes pc: 57 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5809;
        RHS_Slice(_bits_10408, _i_10418, _5808);
        // SubProg bits_to_bytes pc: 62 op: PROC (27)
        _5810 = _18bits_to_int(_5809);
        _5809 = NOVALUE;
        // SubProg bits_to_bytes pc: 66 op: CONCAT (15)
        if (IS_SEQUENCE(_bytes_10409) && IS_ATOM(_5810)) {
            Ref(_5810);
            Append(&_bytes_10409, _bytes_10409, _5810);
        }
        else if (IS_ATOM(_bytes_10409) && IS_SEQUENCE(_5810)) {
        }
        else {
            Concat((object_ptr)&_bytes_10409, _bytes_10409, _5810);
        }
        DeRef(_5810);
        _5810 = NOVALUE;
        // SubProg bits_to_bytes pc: 70 op: STARTLINE (58)

        /** scinot.e:163		end for*/
        // SubProg bits_to_bytes pc: 72 op: ENDFOR_GENERAL (39)
        _i_10418 = _i_10418 + 8;
        goto L2; // [72] 51
L3: // addr: 77 pc: 72 sub: 10406 op: 39
        ;
    }
    // SubProg bits_to_bytes pc: 77 op: STARTLINE (58)

    /** scinot.e:164		return bytes*/
    // SubProg bits_to_bytes pc: 79 op: RETURNF (28)

// Exiting block BLOCK: bits_to_bytes

// block var bits_10408
    DeRefDS(_bits_10408);

// block var r_10410
    DeRef(_5808);
    _5808 = NOVALUE;
    return _bytes_10409;
    // SubProg bits_to_bytes pc: 83 op: BADRETURNF (43)
    ;
}


object _28bytes_to_bits(object _bytes_10427)
{
    object _bits_10428 = NOVALUE;
// skipping _5815  name type: 0
    object _5814 = NOVALUE; // 10434 5814
    object _5813 = NOVALUE; // 10433 5813
    object _5812 = NOVALUE; // 10431 5812
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bytes_to_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bytes_to_bits pc: 3 op: STARTLINE (58)

    /** scinot.e:179		bits = {}*/
    // SubProg bytes_to_bits pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_bits_10428);
    _bits_10428 = _5;
    // SubProg bytes_to_bits pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg bytes_to_bits pc: 10 op: STARTLINE (58)

    /** scinot.e:180		for i = 1 to length(bytes) do*/
    // SubProg bytes_to_bits pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_bytes_10427)){
            _5812 = SEQ_PTR(_bytes_10427)->length;
    }
    else {
        _5812 = 1;
    }
    // SubProg bytes_to_bits pc: 15 op: FOR_I (125)
    {
        object _i_10430;
        _i_10430 = 1;
L1: // addr: 22 pc: 15 sub: 10425 op: 125
        if (_i_10430 > _5812){
            goto L2; // [15] 44
        }
        // SubProg bytes_to_bits pc: 22 op: STARTLINE (58)

        /** scinot.e:181			bits &= int_to_bits( bytes[i], 8 )*/
        // SubProg bytes_to_bits pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_bytes_10427);
        _5813 = (object)*(((s1_ptr)_2)->base + _i_10430);
        // SubProg bytes_to_bits pc: 28 op: PROC (27)
        Ref(_5813);
        _5814 = _18int_to_bits(_5813, 8);
        _5813 = NOVALUE;
        // SubProg bytes_to_bits pc: 33 op: CONCAT (15)
        if (IS_SEQUENCE(_bits_10428) && IS_ATOM(_5814)) {
            Ref(_5814);
            Append(&_bits_10428, _bits_10428, _5814);
        }
        else if (IS_ATOM(_bits_10428) && IS_SEQUENCE(_5814)) {
        }
        else {
            Concat((object_ptr)&_bits_10428, _bits_10428, _5814);
        }
        DeRef(_5814);
        _5814 = NOVALUE;
        // SubProg bytes_to_bits pc: 37 op: STARTLINE (58)

        /** scinot.e:182		end for*/
        // SubProg bytes_to_bits pc: 39 op: ENDFOR_INT_UP1 (54)
        _i_10430 = _i_10430 + 1;
        goto L1; // [39] 22
L2: // addr: 44 pc: 39 sub: 10425 op: 54
        ;
    }
    // SubProg bytes_to_bits pc: 44 op: STARTLINE (58)

    /** scinot.e:184		return bits*/
    // SubProg bytes_to_bits pc: 46 op: RETURNF (28)

// Exiting block BLOCK: bytes_to_bits

// block var bytes_10427
    DeRefDS(_bytes_10427);
    return _bits_10428;
    // SubProg bytes_to_bits pc: 50 op: BADRETURNF (43)
    ;
}


object _28convert_radix(object _number_10438, object _from_radix_10439, object _to_radix_10440)
{
    object _target_10441 = NOVALUE;
    object _base_10442 = NOVALUE;
// skipping _5824  name type: 0
// skipping _5823  name type: 0
// skipping _5822  name type: 0
    object _5821 = NOVALUE; // 10450 5821
    object _5820 = NOVALUE; // 10449 5820
    object _5819 = NOVALUE; // 10448 5819
    object _5818 = NOVALUE; // 10447 5818
// skipping _5817  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg convert_radix pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg convert_radix pc: 3 op: INTEGER_CHECK (96)
    // SubProg convert_radix pc: 5 op: INTEGER_CHECK (96)
    // SubProg convert_radix pc: 7 op: STARTLINE (58)

    /** scinot.e:190		base = {1}*/
    // SubProg convert_radix pc: 9 op: ASSIGN (18)
    RefDS(_5816);
    DeRef(_base_10442);
    _base_10442 = _5816;
    // SubProg convert_radix pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg convert_radix pc: 14 op: STARTLINE (58)

    /** scinot.e:191		target = {0}*/
    // SubProg convert_radix pc: 16 op: RIGHT_BRACE_N (31)
    _0 = _target_10441;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _target_10441 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg convert_radix pc: 20 op: STARTLINE (58)

    /** scinot.e:192		for i = 1 to length(number) do*/
    // SubProg convert_radix pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_number_10438)){
            _5818 = SEQ_PTR(_number_10438)->length;
    }
    else {
        _5818 = 1;
    }
    // SubProg convert_radix pc: 25 op: FOR_I (125)
    {
        object _i_10446;
        _i_10446 = 1;
L1: // addr: 32 pc: 25 sub: 10436 op: 125
        if (_i_10446 > _5818){
            goto L2; // [25] 78
        }
        // SubProg convert_radix pc: 32 op: STARTLINE (58)

        /** scinot.e:193			target = carry( add( base * number[i], target ), to_radix )*/
        // SubProg convert_radix pc: 34 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_number_10438);
        _5819 = (object)*(((s1_ptr)_2)->base + _i_10446);
        // SubProg convert_radix pc: 38 op: MULTIPLY (13)
        _5820 = binary_op(MULTIPLY, _base_10442, _5819);
        _5819 = NOVALUE;
        // SubProg convert_radix pc: 42 op: PROC (27)
        RefDS(_target_10441);
        _5821 = _28add(_5820, _target_10441);
        _5820 = NOVALUE;
        // SubProg convert_radix pc: 47 op: PROC (27)
        _0 = _target_10441;
        _target_10441 = _28carry(_5821, _to_radix_10440);
        DeRefDS(_0);
        _5821 = NOVALUE;
        // SubProg convert_radix pc: 52 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 54 op: STARTLINE (58)

        /** scinot.e:194			base *= from_radix*/
        // SubProg convert_radix pc: 56 op: MULTIPLY (13)
        _0 = _base_10442;
        _base_10442 = binary_op(MULTIPLY, _base_10442, _from_radix_10439);
        DeRefDS(_0);
        // SubProg convert_radix pc: 60 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 62 op: STARTLINE (58)

        /** scinot.e:195			base = carry( base, to_radix )*/
        // SubProg convert_radix pc: 64 op: PROC (27)
        RefDS(_base_10442);
        _0 = _base_10442;
        _base_10442 = _28carry(_base_10442, _to_radix_10440);
        DeRefDS(_0);
        // SubProg convert_radix pc: 69 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 71 op: STARTLINE (58)

        /** scinot.e:196		end for*/
        // SubProg convert_radix pc: 73 op: ENDFOR_INT_UP1 (54)
        _i_10446 = _i_10446 + 1;
        goto L1; // [73] 32
L2: // addr: 78 pc: 73 sub: 10436 op: 54
        ;
    }
    // SubProg convert_radix pc: 78 op: STARTLINE (58)

    /** scinot.e:198		return target*/
    // SubProg convert_radix pc: 80 op: RETURNF (28)

// Exiting block BLOCK: convert_radix

// block var number_10438
    DeRefDS(_number_10438);

// block var from_radix_10439

// block var to_radix_10440

// block var base_10442
    DeRef(_base_10442);
    return _target_10441;
    // SubProg convert_radix pc: 84 op: BADRETURNF (43)
    ;
}


object _28half(object _decimal_10456)
{
    object _quotient_10457 = NOVALUE;
    object _q_10458 = NOVALUE;
    object _Q_10459 = NOVALUE;
    object _5842 = NOVALUE; // 10481 5842
    object _5841 = NOVALUE; // 10480 5841
    object _5840 = NOVALUE; // 10479 5840
    object _5839 = NOVALUE; // 10478 5839
    object _5838 = NOVALUE; // 10477 5838
    object _5837 = NOVALUE; // 10476 5837
// skipping _5836  name type: 0
// skipping _5835  name type: 0
    object _5834 = NOVALUE; // 10473 5834
// skipping _5833  name type: 0
    object _5832 = NOVALUE; // 10469 5832
    object _5831 = NOVALUE; // 10468 5831
// skipping _5830  name type: 0
// skipping _5829  name type: 0
    object _5828 = NOVALUE; // 10465 5828
    object _5827 = NOVALUE; // 10464 5827
// skipping _5826  name type: 0
    object _5825 = NOVALUE; // 10460 5825
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg half pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg half pc: 3 op: STARTLINE (58)

    /** scinot.e:205		quotient = repeat( 0, length(decimal) )*/
    // SubProg half pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_decimal_10456)){
            _5825 = SEQ_PTR(_decimal_10456)->length;
    }
    else {
        _5825 = 1;
    }
    // SubProg half pc: 8 op: REPEAT (32)
    DeRef(_quotient_10457);
    _quotient_10457 = Repeat(0, _5825);
    _5825 = NOVALUE;
    // SubProg half pc: 12 op: STARTLINE (58)

    /** scinot.e:206		for i = 1 to length( decimal ) do*/
    // SubProg half pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_decimal_10456)){
            _5827 = SEQ_PTR(_decimal_10456)->length;
    }
    else {
        _5827 = 1;
    }
    // SubProg half pc: 17 op: FOR_I (125)
    {
        object _i_10463;
        _i_10463 = 1;
L1: // addr: 24 pc: 17 sub: 10454 op: 125
        if (_i_10463 > _5827){
            goto L2; // [17] 101
        }
        // SubProg half pc: 24 op: STARTLINE (58)

        /** scinot.e:207			q = decimal[i] / 2*/
        // SubProg half pc: 26 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_decimal_10456);
        _5828 = (object)*(((s1_ptr)_2)->base + _i_10463);
        // SubProg half pc: 30 op: DIV2 (98)
        DeRef(_q_10458);
        if (IS_ATOM_INT(_5828)) {
            if (_5828 & 1) {
                _q_10458 = NewDouble((_5828 >> 1) + 0.5);
            }
            else
            _q_10458 = _5828 >> 1;
        }
        else {
            _q_10458 = binary_op(DIVIDE, _5828, 2);
        }
        _5828 = NOVALUE;
        // SubProg half pc: 34 op: STARTLINE (58)

        /** scinot.e:208			Q = floor( q )*/
        // SubProg half pc: 36 op: FLOOR (83)
        DeRef(_Q_10459);
        if (IS_ATOM_INT(_q_10458))
        _Q_10459 = e_floor(_q_10458);
        else
        _Q_10459 = unary_op(FLOOR, _q_10458);
        // SubProg half pc: 39 op: STARTLINE (58)

        /** scinot.e:209			quotient[i] +=  Q*/
        // SubProg half pc: 41 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_quotient_10457);
        _5831 = (object)*(((s1_ptr)_2)->base + _i_10463);
        // SubProg half pc: 45 op: PLUS (11)
        if (IS_ATOM_INT(_5831) && IS_ATOM_INT(_Q_10459)) {
            _5832 = _5831 + _Q_10459;
            if ((object)((uintptr_t)_5832 + (uintptr_t)HIGH_BITS) >= 0){
                _5832 = NewDouble((eudouble)_5832);
            }
        }
        else {
            _5832 = binary_op(PLUS, _5831, _Q_10459);
        }
        _5831 = NOVALUE;
        // SubProg half pc: 49 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_quotient_10457);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_10457 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10463);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5832;
        if( _1 != _5832 ){
            DeRef(_1);
        }
        _5832 = NOVALUE;
        // SubProg half pc: 53 op: STARTLINE (58)

        /** scinot.e:211			if q != Q then*/
        // SubProg half pc: 55 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _q_10458, _Q_10459)){
            goto L3; // [55] 94
        }
        // SubProg half pc: 59 op: STARTLINE (58)

        /** scinot.e:212				if length(quotient) = i then*/
        // SubProg half pc: 61 op: LENGTH (42)
        if (IS_SEQUENCE(_quotient_10457)){
                _5834 = SEQ_PTR(_quotient_10457)->length;
        }
        else {
            _5834 = 1;
        }
        // SubProg half pc: 64 op: EQUALS_IFW_I (121)
        if (_5834 != _i_10463)
        goto L4; // [64] 75
        // SubProg half pc: 68 op: STARTLINE (58)

        /** scinot.e:213					quotient &= 0*/
        // SubProg half pc: 70 op: CONCAT (15)
        Append(&_quotient_10457, _quotient_10457, 0);
        // SubProg half pc: 74 op: NOP1 (159)
L4: // addr: 75 pc: 74 sub: 10454 op: 159
        // SubProg half pc: 75 op: STARTLINE (58)

        /** scinot.e:215				quotient[i+1] += 5*/
        // SubProg half pc: 77 op: PLUS1 (93)
        _5837 = _i_10463 + 1;
        // SubProg half pc: 81 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_quotient_10457);
        _5838 = (object)*(((s1_ptr)_2)->base + _5837);
        // SubProg half pc: 85 op: PLUS (11)
        if (IS_ATOM_INT(_5838)) {
            _5839 = _5838 + 5;
            if ((object)((uintptr_t)_5839 + (uintptr_t)HIGH_BITS) >= 0){
                _5839 = NewDouble((eudouble)_5839);
            }
        }
        else {
            _5839 = binary_op(PLUS, _5838, 5);
        }
        _5838 = NOVALUE;
        // SubProg half pc: 89 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_quotient_10457);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_10457 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _5837);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5839;
        if( _1 != _5839 ){
            DeRef(_1);
        }
        _5839 = NOVALUE;
        // SubProg half pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 10454 op: 159
        // SubProg half pc: 94 op: STARTLINE (58)

        /** scinot.e:217		end for*/
        // SubProg half pc: 96 op: ENDFOR_INT_UP1 (54)
        _i_10463 = _i_10463 + 1;
        goto L1; // [96] 24
L2: // addr: 101 pc: 96 sub: 10454 op: 54
        ;
    }
    // SubProg half pc: 101 op: STARTLINE (58)

    /** scinot.e:218		return reverse( carry( reverse( quotient ), 10 ) )*/
    // SubProg half pc: 103 op: PROC (27)
    RefDS(_quotient_10457);
    _5840 = _28reverse(_quotient_10457);
    // SubProg half pc: 107 op: PROC (27)
    _5841 = _28carry(_5840, 10);
    _5840 = NOVALUE;
    // SubProg half pc: 112 op: PROC (27)
    _5842 = _28reverse(_5841);
    _5841 = NOVALUE;
    // SubProg half pc: 116 op: RETURNF (28)

// Exiting block BLOCK: half

// block var decimal_10456
    DeRefDS(_decimal_10456);

// block var quotient_10457
    DeRefDS(_quotient_10457);

// block var q_10458
    DeRef(_q_10458);

// block var Q_10459
    DeRef(_Q_10459);
    DeRef(_5837);
    _5837 = NOVALUE;
    return _5842;
    // SubProg half pc: 120 op: BADRETURNF (43)
    ;
}


object _28decimals_to_bits(object _decimals_10492, object _size_10493)
{
    object _sub_10494 = NOVALUE;
    object _bits_10495 = NOVALUE;
    object _bit_10496 = NOVALUE;
    object _assigned_10497 = NOVALUE;
    object _5870 = NOVALUE; // 10527 5870
// skipping _5869  name type: 0
// skipping _5868  name type: 0
// skipping _5867  name type: 0
    object _5866 = NOVALUE; // 10523 5866
    object _5865 = NOVALUE; // 10522 5865
    object _5864 = NOVALUE; // 10521 5864
    object _5863 = NOVALUE; // 10520 5863
// skipping _5862  name type: 0
    object _5861 = NOVALUE; // 10518 5861
    object _5860 = NOVALUE; // 10517 5860
    object _5859 = NOVALUE; // 10516 5859
// skipping _5858  name type: 0
    object _5857 = NOVALUE; // 10514 5857
// skipping _5856  name type: 0
    object _5855 = NOVALUE; // 10511 5855
    object _5854 = NOVALUE; // 10509 5854
    object _5853 = NOVALUE; // 10508 5853
    object _5852 = NOVALUE; // 10507 5852
    object _5851 = NOVALUE; // 10506 5851
// skipping _5850  name type: 0
    object _5849 = NOVALUE; // 10504 5849
// skipping _5848  name type: 0
    object _5847 = NOVALUE; // 10501 5847
// skipping _5846  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg decimals_to_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 3 op: INTEGER_CHECK (96)
    // SubProg decimals_to_bits pc: 5 op: STARTLINE (58)

    /** scinot.e:233		sub = {5}*/
    // SubProg decimals_to_bits pc: 7 op: ASSIGN (18)
    RefDS(_5845);
    DeRef(_sub_10494);
    _sub_10494 = _5845;
    // SubProg decimals_to_bits pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 12 op: STARTLINE (58)

    /** scinot.e:234		bits = repeat( 0, size )*/
    // SubProg decimals_to_bits pc: 14 op: REPEAT (32)
    DeRef(_bits_10495);
    _bits_10495 = Repeat(0, _size_10493);
    // SubProg decimals_to_bits pc: 18 op: STARTLINE (58)

    /** scinot.e:235		bit = 1*/
    // SubProg decimals_to_bits pc: 20 op: ASSIGN_I (113)
    _bit_10496 = 1;
    // SubProg decimals_to_bits pc: 23 op: STARTLINE (58)

    /** scinot.e:236		assigned = 0*/
    // SubProg decimals_to_bits pc: 25 op: ASSIGN_I (113)
    _assigned_10497 = 0;
    // SubProg decimals_to_bits pc: 28 op: STARTLINE (58)

    /** scinot.e:240		if compare(decimals, bits) > 0 then */
    // SubProg decimals_to_bits pc: 30 op: COMPARE (76)
    if (IS_ATOM_INT(_decimals_10492) && IS_ATOM_INT(_bits_10495)){
        _5847 = (_decimals_10492 < _bits_10495) ? -1 : (_decimals_10492 > _bits_10495);
    }
    else{
        _5847 = compare(_decimals_10492, _bits_10495);
    }
    // SubProg decimals_to_bits pc: 34 op: GREATER_IFW_I (124)
    if (_5847 <= 0)
    goto L1; // [34] 166
    // SubProg decimals_to_bits pc: 38 op: STARTLINE (58)

    /** scinot.e:242			while (not assigned) or (bit < find( 1, bits ) + size + 1)  do*/
    // SubProg decimals_to_bits pc: 40 op: NOP2 (110)
    // SubProg decimals_to_bits pc: 42 op: NOPWHILE (158)
L2: // addr: 43 pc: 42 sub: 10490 op: 158
    // SubProg decimals_to_bits pc: 43 op: NOT (7)
    _5849 = (_assigned_10497 == 0);
    // SubProg decimals_to_bits pc: 46 op: SC1_OR_IF (147)
    if (_5849 != 0) {
        goto L3; // [46] 72
    }
    // SubProg decimals_to_bits pc: 50 op: FIND_FROM (176)
    _5851 = find_from(1, _bits_10495, 1);
    // SubProg decimals_to_bits pc: 55 op: PLUS (11)
    _5852 = _5851 + _size_10493;
    if ((object)((uintptr_t)_5852 + (uintptr_t)HIGH_BITS) >= 0){
        _5852 = NewDouble((eudouble)_5852);
    }
    _5851 = NOVALUE;
    // SubProg decimals_to_bits pc: 59 op: PLUS1 (93)
    if (IS_ATOM_INT(_5852)) {
        _5853 = _5852 + 1;
        if (_5853 > MAXINT){
            _5853 = NewDouble((eudouble)_5853);
        }
    }
    else
    _5853 = binary_op(PLUS, 1, _5852);
    DeRef(_5852);
    _5852 = NOVALUE;
    // SubProg decimals_to_bits pc: 63 op: LESS (1)
    if (IS_ATOM_INT(_5853)) {
        _5854 = (_bit_10496 < _5853);
    }
    else {
        _5854 = ((eudouble)_bit_10496 < DBL_PTR(_5853)->dbl);
    }
    DeRef(_5853);
    _5853 = NOVALUE;
    // SubProg decimals_to_bits pc: 67 op: NOP1 (159)
    // SubProg decimals_to_bits pc: 68 op: WHILE (47)
    if (_5854 == 0)
    {
        DeRef(_5854);
        _5854 = NOVALUE;
        goto L4; // [68] 165
    }
    else{
        DeRef(_5854);
        _5854 = NOVALUE;
    }
    // SubProg decimals_to_bits pc: 71 op: NOP1 (159)
L3: // addr: 72 pc: 71 sub: 10490 op: 159
    // SubProg decimals_to_bits pc: 72 op: STARTLINE (58)

    /** scinot.e:243				if compare( sub, decimals ) <= 0 then*/
    // SubProg decimals_to_bits pc: 74 op: COMPARE (76)
    if (IS_ATOM_INT(_sub_10494) && IS_ATOM_INT(_decimals_10492)){
        _5855 = (_sub_10494 < _decimals_10492) ? -1 : (_sub_10494 > _decimals_10492);
    }
    else{
        _5855 = compare(_sub_10494, _decimals_10492);
    }
    // SubProg decimals_to_bits pc: 78 op: LESSEQ_IFW_I (123)
    if (_5855 > 0)
    goto L5; // [78] 146
    // SubProg decimals_to_bits pc: 82 op: STARTLINE (58)

    /** scinot.e:244					assigned = 1*/
    // SubProg decimals_to_bits pc: 84 op: ASSIGN_I (113)
    _assigned_10497 = 1;
    // SubProg decimals_to_bits pc: 87 op: STARTLINE (58)

    /** scinot.e:245					if length( bits ) < bit then*/
    // SubProg decimals_to_bits pc: 89 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_10495)){
            _5857 = SEQ_PTR(_bits_10495)->length;
    }
    else {
        _5857 = 1;
    }
    // SubProg decimals_to_bits pc: 92 op: LESS_IFW_I (119)
    if (_5857 >= _bit_10496)
    goto L6; // [92] 114
    // SubProg decimals_to_bits pc: 96 op: STARTLINE (58)

    /** scinot.e:246						bits &= repeat( 0, bit - length(bits)) */
    // SubProg decimals_to_bits pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_10495)){
            _5859 = SEQ_PTR(_bits_10495)->length;
    }
    else {
        _5859 = 1;
    }
    // SubProg decimals_to_bits pc: 101 op: MINUS (10)
    _5860 = _bit_10496 - _5859;
    _5859 = NOVALUE;
    // SubProg decimals_to_bits pc: 105 op: REPEAT (32)
    _5861 = Repeat(0, _5860);
    _5860 = NOVALUE;
    // SubProg decimals_to_bits pc: 109 op: CONCAT (15)
    Concat((object_ptr)&_bits_10495, _bits_10495, _5861);
    DeRefDS(_5861);
    _5861 = NOVALUE;
    // SubProg decimals_to_bits pc: 113 op: NOP1 (159)
L6: // addr: 114 pc: 113 sub: 10490 op: 159
    // SubProg decimals_to_bits pc: 114 op: STARTLINE (58)

    /** scinot.e:249					bits[bit] += 1*/
    // SubProg decimals_to_bits pc: 116 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_bits_10495);
    _5863 = (object)*(((s1_ptr)_2)->base + _bit_10496);
    // SubProg decimals_to_bits pc: 120 op: PLUS1 (93)
    if (IS_ATOM_INT(_5863)) {
        _5864 = _5863 + 1;
        if (_5864 > MAXINT){
            _5864 = NewDouble((eudouble)_5864);
        }
    }
    else
    _5864 = binary_op(PLUS, 1, _5863);
    _5863 = NOVALUE;
    // SubProg decimals_to_bits pc: 124 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bits_10495);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bits_10495 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _bit_10496);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5864;
    if( _1 != _5864 ){
        DeRef(_1);
    }
    _5864 = NOVALUE;
    // SubProg decimals_to_bits pc: 128 op: STARTLINE (58)

    /** scinot.e:250					decimals = borrow( add( decimals, -sub ), 10 )*/
    // SubProg decimals_to_bits pc: 130 op: UMINUS (12)
    _5865 = unary_op(UMINUS, _sub_10494);
    // SubProg decimals_to_bits pc: 133 op: PROC (27)
    RefDS(_decimals_10492);
    _5866 = _28add(_decimals_10492, _5865);
    _5865 = NOVALUE;
    // SubProg decimals_to_bits pc: 138 op: PROC (27)
    _0 = _decimals_10492;
    _decimals_10492 = _28borrow(_5866, 10);
    DeRefDS(_0);
    _5866 = NOVALUE;
    // SubProg decimals_to_bits pc: 143 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 145 op: NOP1 (159)
L5: // addr: 146 pc: 145 sub: 10490 op: 159
    // SubProg decimals_to_bits pc: 146 op: STARTLINE (58)

    /** scinot.e:252				sub = half( sub )*/
    // SubProg decimals_to_bits pc: 148 op: PROC (27)
    RefDS(_sub_10494);
    _0 = _sub_10494;
    _sub_10494 = _28half(_sub_10494);
    DeRefDS(_0);
    // SubProg decimals_to_bits pc: 152 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 154 op: STARTLINE (58)

    /** scinot.e:254				bit += 1*/
    // SubProg decimals_to_bits pc: 156 op: PLUS1_I (117)
    _bit_10496 = _bit_10496 + 1;
    // SubProg decimals_to_bits pc: 160 op: STARTLINE (58)

    /** scinot.e:255			end while*/
    // SubProg decimals_to_bits pc: 162 op: ENDWHILE (22)
    goto L2; // [162] 43
    // SubProg decimals_to_bits pc: 164 op: NOP1 (159)
L4: // addr: 165 pc: 164 sub: 10490 op: 159
    // SubProg decimals_to_bits pc: 165 op: NOP1 (159)
L1: // addr: 166 pc: 165 sub: 10490 op: 159
    // SubProg decimals_to_bits pc: 166 op: STARTLINE (58)

    /** scinot.e:258		return reverse(bits)*/
    // SubProg decimals_to_bits pc: 168 op: PROC (27)
    RefDS(_bits_10495);
    _5870 = _28reverse(_bits_10495);
    // SubProg decimals_to_bits pc: 172 op: RETURNF (28)

// Exiting block BLOCK: decimals_to_bits

// block var decimals_10492
    DeRefDS(_decimals_10492);

// block var size_10493

// block var sub_10494
    DeRef(_sub_10494);

// block var bits_10495
    DeRefDS(_bits_10495);

// block var bit_10496

// block var assigned_10497
    DeRef(_5849);
    _5849 = NOVALUE;
    return _5870;
    // SubProg decimals_to_bits pc: 176 op: BADRETURNF (43)
    ;
}


object _28string_to_int(object _s_10530)
{
    object _int_10531 = NOVALUE;
// skipping _5875  name type: 0
    object _5874 = NOVALUE; // 10537 5874
    object _5873 = NOVALUE; // 10536 5873
// skipping _5872  name type: 0
    object _5871 = NOVALUE; // 10534 5871
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg string_to_int pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg string_to_int pc: 3 op: STARTLINE (58)

    /** scinot.e:263		int = 0*/
    // SubProg string_to_int pc: 5 op: ASSIGN_I (113)
    _int_10531 = 0;
    // SubProg string_to_int pc: 8 op: STARTLINE (58)

    /** scinot.e:264		for i = 1 to length(s) do*/
    // SubProg string_to_int pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10530)){
            _5871 = SEQ_PTR(_s_10530)->length;
    }
    else {
        _5871 = 1;
    }
    // SubProg string_to_int pc: 13 op: FOR_I (125)
    {
        object _i_10533;
        _i_10533 = 1;
L1: // addr: 20 pc: 13 sub: 10528 op: 125
        if (_i_10533 > _5871){
            goto L2; // [13] 51
        }
        // SubProg string_to_int pc: 20 op: STARTLINE (58)

        /** scinot.e:265			int *= 10*/
        // SubProg string_to_int pc: 22 op: MULTIPLY (13)
        _int_10531 = _int_10531 * 10;
        // SubProg string_to_int pc: 28 op: STARTLINE (58)

        /** scinot.e:266			int += s[i] - '0'*/
        // SubProg string_to_int pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_10530);
        _5873 = (object)*(((s1_ptr)_2)->base + _i_10533);
        // SubProg string_to_int pc: 34 op: MINUS (10)
        if (IS_ATOM_INT(_5873)) {
            _5874 = _5873 - 48;
            if ((object)((uintptr_t)_5874 +(uintptr_t) HIGH_BITS) >= 0){
                _5874 = NewDouble((eudouble)_5874);
            }
        }
        else {
            _5874 = binary_op(MINUS, _5873, 48);
        }
        _5873 = NOVALUE;
        // SubProg string_to_int pc: 38 op: PLUS (11)
        if (IS_ATOM_INT(_5874)) {
            _int_10531 = _int_10531 + _5874;
        }
        else {
            _int_10531 = binary_op(PLUS, _int_10531, _5874);
        }
        DeRef(_5874);
        _5874 = NOVALUE;
        // SubProg string_to_int pc: 42 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_int_10531)) {
            _1 = (object)(DBL_PTR(_int_10531)->dbl);
            DeRefDS(_int_10531);
            _int_10531 = _1;
        }
        // SubProg string_to_int pc: 44 op: STARTLINE (58)

        /** scinot.e:267		end for*/
        // SubProg string_to_int pc: 46 op: ENDFOR_INT_UP1 (54)
        _i_10533 = _i_10533 + 1;
        goto L1; // [46] 20
L2: // addr: 51 pc: 46 sub: 10528 op: 54
        ;
    }
    // SubProg string_to_int pc: 51 op: STARTLINE (58)

    /** scinot.e:268		return int*/
    // SubProg string_to_int pc: 53 op: RETURNF (28)

// Exiting block BLOCK: string_to_int

// block var s_10530
    DeRefDS(_s_10530);
    return _int_10531;
    // SubProg string_to_int pc: 57 op: BADRETURNF (43)
    ;
}


object _28trim_bits(object _bits_10541)
{
// skipping _5882  name type: 0
    object _5881 = NOVALUE; // 10548 5881
    object _5880 = NOVALUE; // 10547 5880
    object _5879 = NOVALUE; // 10546 5879
    object _5878 = NOVALUE; // 10545 5878
    object _5877 = NOVALUE; // 10544 5877
    object _5876 = NOVALUE; // 10543 5876
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg trim_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg trim_bits pc: 3 op: STARTLINE (58)

    /** scinot.e:272			while length(bits) and not bits[$] do*/
    // SubProg trim_bits pc: 5 op: NOP2 (110)
    // SubProg trim_bits pc: 7 op: NOPWHILE (158)
L1: // addr: 8 pc: 7 sub: 10539 op: 158
    // SubProg trim_bits pc: 8 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_10541)){
            _5876 = SEQ_PTR(_bits_10541)->length;
    }
    else {
        _5876 = 1;
    }
    // SubProg trim_bits pc: 11 op: SC1_AND_IF (146)
    if (_5876 == 0) {
        goto L2; // [11] 44
    }
    // SubProg trim_bits pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_10541)){
            _5878 = SEQ_PTR(_bits_10541)->length;
    }
    else {
        _5878 = 1;
    }
    // SubProg trim_bits pc: 18 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_bits_10541);
    _5879 = (object)*(((s1_ptr)_2)->base + _5878);
    // SubProg trim_bits pc: 22 op: NOT (7)
    if (IS_ATOM_INT(_5879)) {
        _5880 = (_5879 == 0);
    }
    else {
        _5880 = unary_op(NOT, _5879);
    }
    _5879 = NOVALUE;
    // SubProg trim_bits pc: 25 op: NOP1 (159)
    // SubProg trim_bits pc: 26 op: WHILE (47)
    if (_5880 <= 0) {
        if (_5880 == 0) {
            DeRef(_5880);
            _5880 = NOVALUE;
            goto L2; // [26] 44
        }
        else {
            if (!IS_ATOM_INT(_5880) && DBL_PTR(_5880)->dbl == 0.0){
                DeRef(_5880);
                _5880 = NOVALUE;
                goto L2; // [26] 44
            }
            DeRef(_5880);
            _5880 = NOVALUE;
        }
    }
    DeRef(_5880);
    _5880 = NOVALUE;
    // SubProg trim_bits pc: 29 op: STARTLINE (58)

    /** scinot.e:273				bits = remove( bits, length( bits ) )*/
    // SubProg trim_bits pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_10541)){
            _5881 = SEQ_PTR(_bits_10541)->length;
    }
    else {
        _5881 = 1;
    }
    // SubProg trim_bits pc: 34 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_bits_10541);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_5881)) ? _5881 : (object)(DBL_PTR(_5881)->dbl);
        int stop = (IS_ATOM_INT(_5881)) ? _5881 : (object)(DBL_PTR(_5881)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_bits_10541), start, &_bits_10541 );
            }
            else Tail(SEQ_PTR(_bits_10541), stop+1, &_bits_10541);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_bits_10541), start, &_bits_10541);
        }
        else {
            assign_slice_seq = &assign_space;
            _bits_10541 = Remove_elements(start, stop, (SEQ_PTR(_bits_10541)->ref == 1));
        }
    }
    _5881 = NOVALUE;
    _5881 = NOVALUE;
    // SubProg trim_bits pc: 39 op: STARTLINE (58)

    /** scinot.e:274			end while*/
    // SubProg trim_bits pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 8
    // SubProg trim_bits pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 10539 op: 159
    // SubProg trim_bits pc: 44 op: STARTLINE (58)

    /** scinot.e:275			return bits*/
    // SubProg trim_bits pc: 46 op: RETURNF (28)

// Exiting block BLOCK: trim_bits
    return _bits_10541;
    // SubProg trim_bits pc: 50 op: BADRETURNF (43)
    ;
}


object _28scientific_to_float(object _s_10564, object _fp_10565)
{
    object _dp_10566 = NOVALUE;
    object _e_10567 = NOVALUE;
    object _exp_10568 = NOVALUE;
    object _int_bits_10569 = NOVALUE;
    object _frac_bits_10570 = NOVALUE;
    object _mbits_10571 = NOVALUE;
    object _ebits_10572 = NOVALUE;
    object _sbits_10573 = NOVALUE;
    object _significand_10574 = NOVALUE;
    object _exponent_10575 = NOVALUE;
    object _min_exp_10576 = NOVALUE;
    object _exp_bias_10577 = NOVALUE;
    object _6040 = NOVALUE; // 10768 6040
    object _6039 = NOVALUE; // 10767 6039
// skipping _6038  name type: 0
    object _6037 = NOVALUE; // 10765 6037
// skipping _6036  name type: 0
    object _6035 = NOVALUE; // 10762 6035
    object _6034 = NOVALUE; // 10761 6034
// skipping _6033  name type: 0
    object _6032 = NOVALUE; // 10759 6032
    object _6031 = NOVALUE; // 10758 6031
    object _6030 = NOVALUE; // 10757 6030
    object _6029 = NOVALUE; // 10756 6029
    object _6028 = NOVALUE; // 10755 6028
    object _6027 = NOVALUE; // 10754 6027
    object _6026 = NOVALUE; // 10753 6026
// skipping _6025  name type: 0
    object _6024 = NOVALUE; // 10749 6024
    object _6023 = NOVALUE; // 10748 6023
// skipping _6022  name type: 0
    object _6021 = NOVALUE; // 10745 6021
    object _6020 = NOVALUE; // 10744 6020
    object _6019 = NOVALUE; // 10743 6019
    object _6018 = NOVALUE; // 10742 6018
// skipping _6017  name type: 0
// skipping _6016  name type: 0
    object _6015 = NOVALUE; // 10738 6015
    object _6014 = NOVALUE; // 10737 6014
    object _6013 = NOVALUE; // 10736 6013
    object _6012 = NOVALUE; // 10735 6012
    object _6011 = NOVALUE; // 10734 6011
    object _6010 = NOVALUE; // 10733 6010
    object _6009 = NOVALUE; // 10732 6009
    object _6008 = NOVALUE; // 10731 6008
// skipping _6007  name type: 0
// skipping _6006  name type: 0
    object _6005 = NOVALUE; // 10726 6005
    object _6004 = NOVALUE; // 10725 6004
// skipping _6003  name type: 0
// skipping _6002  name type: 0
    object _6001 = NOVALUE; // 10722 6001
    object _6000 = NOVALUE; // 10721 6000
    object _5999 = NOVALUE; // 10720 5999
    object _5998 = NOVALUE; // 10719 5998
// skipping _5997  name type: 0
// skipping _5996  name type: 0
    object _5995 = NOVALUE; // 10714 5995
    object _5994 = NOVALUE; // 10713 5994
// skipping _5993  name type: 0
    object _5992 = NOVALUE; // 10710 5992
    object _5991 = NOVALUE; // 10709 5991
// skipping _5990  name type: 0
    object _5989 = NOVALUE; // 10705 5989
// skipping _5988  name type: 0
    object _5987 = NOVALUE; // 10703 5987
    object _5986 = NOVALUE; // 10702 5986
    object _5985 = NOVALUE; // 10701 5985
    object _5984 = NOVALUE; // 10700 5984
    object _5983 = NOVALUE; // 10699 5983
    object _5982 = NOVALUE; // 10698 5982
    object _5981 = NOVALUE; // 10697 5981
    object _5980 = NOVALUE; // 10696 5980
    object _5979 = NOVALUE; // 10695 5979
    object _5978 = NOVALUE; // 10694 5978
// skipping _5977  name type: 0
    object _5976 = NOVALUE; // 10691 5976
    object _5975 = NOVALUE; // 10690 5975
    object _5974 = NOVALUE; // 10689 5974
    object _5973 = NOVALUE; // 10688 5973
// skipping _5972  name type: 0
    object _5971 = NOVALUE; // 10685 5971
    object _5970 = NOVALUE; // 10684 5970
    object _5969 = NOVALUE; // 10683 5969
    object _5968 = NOVALUE; // 10682 5968
// skipping _5967  name type: 0
// skipping _5966  name type: 0
    object _5965 = NOVALUE; // 10678 5965
// skipping _5964  name type: 0
    object _5963 = NOVALUE; // 10675 5963
    object _5962 = NOVALUE; // 10674 5962
    object _5961 = NOVALUE; // 10673 5961
    object _5960 = NOVALUE; // 10672 5960
    object _5959 = NOVALUE; // 10671 5959
// skipping _5958  name type: 0
    object _5957 = NOVALUE; // 10669 5957
    object _5956 = NOVALUE; // 10668 5956
    object _5955 = NOVALUE; // 10667 5955
    object _5954 = NOVALUE; // 10666 5954
    object _5953 = NOVALUE; // 10665 5953
    object _5952 = NOVALUE; // 10664 5952
// skipping _5951  name type: 0
    object _5950 = NOVALUE; // 10661 5950
    object _5949 = NOVALUE; // 10660 5949
    object _5948 = NOVALUE; // 10659 5948
    object _5947 = NOVALUE; // 10658 5947
    object _5946 = NOVALUE; // 10657 5946
// skipping _5945  name type: 0
    object _5944 = NOVALUE; // 10655 5944
    object _5943 = NOVALUE; // 10654 5943
// skipping _5942  name type: 0
    object _5941 = NOVALUE; // 10650 5941
    object _5940 = NOVALUE; // 10649 5940
    object _5939 = NOVALUE; // 10648 5939
    object _5938 = NOVALUE; // 10647 5938
    object _5937 = NOVALUE; // 10646 5937
// skipping _5936  name type: 0
    object _5935 = NOVALUE; // 10643 5935
// skipping _5934  name type: 0
    object _5933 = NOVALUE; // 10639 5933
// skipping _5932  name type: 0
// skipping _5931  name type: 0
    object _5930 = NOVALUE; // 10634 5930
    object _5929 = NOVALUE; // 10633 5929
// skipping _5928  name type: 0
    object _5927 = NOVALUE; // 10630 5927
    object _5926 = NOVALUE; // 10629 5926
// skipping _5925  name type: 0
    object _5924 = NOVALUE; // 10627 5924
// skipping _5923  name type: 0
// skipping _5922  name type: 0
// skipping _5921  name type: 0
    object _5920 = NOVALUE; // 10622 5920
    object _5919 = NOVALUE; // 10621 5919
    object _5918 = NOVALUE; // 10620 5918
    object _5917 = NOVALUE; // 10619 5917
// skipping _5916  name type: 0
    object _5915 = NOVALUE; // 10616 5915
    object _5914 = NOVALUE; // 10615 5914
    object _5913 = NOVALUE; // 10614 5913
    object _5912 = NOVALUE; // 10613 5912
// skipping _5911  name type: 0
    object _5910 = NOVALUE; // 10611 5910
    object _5909 = NOVALUE; // 10610 5909
// skipping _5908  name type: 0
    object _5907 = NOVALUE; // 10606 5907
    object _5906 = NOVALUE; // 10605 5906
    object _5905 = NOVALUE; // 10604 5905
    object _5904 = NOVALUE; // 10603 5904
// skipping _5903  name type: 0
    object _5902 = NOVALUE; // 10601 5902
    object _5901 = NOVALUE; // 10600 5901
// skipping _5900  name type: 0
// skipping _5899  name type: 0
// skipping _5898  name type: 0
// skipping _5897  name type: 0
// skipping _5896  name type: 0
// skipping _5895  name type: 0
    object _5894 = NOVALUE; // 10591 5894
// skipping _5893  name type: 0
// skipping _5892  name type: 0
// skipping _5891  name type: 0
    object _5890 = NOVALUE; // 10585 5890
// skipping _5889  name type: 0
// skipping _5888  name type: 0
// skipping _5887  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scientific_to_float pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 3 op: STARTLINE (58)

    /** scinot.e:316		if fp = NATIVE then*/
    // SubProg scientific_to_float pc: 5 op: EQUALS_IFW (104)
    if (_fp_10565 != 1)
    goto L1; // [5] 17
    // SubProg scientific_to_float pc: 9 op: STARTLINE (58)

    /** scinot.e:317			fp = NATIVE_FORMAT*/
    // SubProg scientific_to_float pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scientific_to_float pc: 13 op: ASSIGN (18)
    _fp_10565 = 2;
    // SubProg scientific_to_float pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 17 op: STARTLINE (58)

    /** scinot.e:319		if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 19 op: EQUALS_IFW (104)
    if (_fp_10565 != 2)
    goto L2; // [19] 46
    // SubProg scientific_to_float pc: 23 op: STARTLINE (58)

    /** scinot.e:320			significand = DOUBLE_SIGNIFICAND*/
    // SubProg scientific_to_float pc: 25 op: ASSIGN_I (113)
    _significand_10574 = 52;
    // SubProg scientific_to_float pc: 28 op: STARTLINE (58)

    /** scinot.e:321			exponent    = DOUBLE_EXPONENT*/
    // SubProg scientific_to_float pc: 30 op: ASSIGN_I (113)
    _exponent_10575 = 11;
    // SubProg scientific_to_float pc: 33 op: STARTLINE (58)

    /** scinot.e:322			min_exp     = DOUBLE_MIN_EXP*/
    // SubProg scientific_to_float pc: 35 op: ASSIGN_I (113)
    _min_exp_10576 = -1023;
    // SubProg scientific_to_float pc: 38 op: STARTLINE (58)

    /** scinot.e:323			exp_bias    = DOUBLE_EXP_BIAS*/
    // SubProg scientific_to_float pc: 40 op: ASSIGN_I (113)
    _exp_bias_10577 = 1023;
    // SubProg scientific_to_float pc: 43 op: ELSE (23)
    goto L3; // [43] 74
    // SubProg scientific_to_float pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 46 op: STARTLINE (58)

    /** scinot.e:325		elsif fp = EXTENDED then*/
    // SubProg scientific_to_float pc: 48 op: EQUALS_IFW (104)
    if (_fp_10565 != 3)
    goto L4; // [48] 73
    // SubProg scientific_to_float pc: 52 op: STARTLINE (58)

    /** scinot.e:326			significand = EXTENDED_SIGNIFICAND*/
    // SubProg scientific_to_float pc: 54 op: ASSIGN_I (113)
    _significand_10574 = 64;
    // SubProg scientific_to_float pc: 57 op: STARTLINE (58)

    /** scinot.e:327			exponent    = EXTENDED_EXPONENT*/
    // SubProg scientific_to_float pc: 59 op: ASSIGN_I (113)
    _exponent_10575 = 15;
    // SubProg scientific_to_float pc: 62 op: STARTLINE (58)

    /** scinot.e:328			min_exp     = EXTENDED_MIN_EXP*/
    // SubProg scientific_to_float pc: 64 op: ASSIGN_I (113)
    _min_exp_10576 = -16383;
    // SubProg scientific_to_float pc: 67 op: STARTLINE (58)

    /** scinot.e:329			exp_bias    = EXTENDED_EXP_BIAS*/
    // SubProg scientific_to_float pc: 69 op: ASSIGN_I (113)
    _exp_bias_10577 = 16383;
    // SubProg scientific_to_float pc: 72 op: NOP1 (159)
L4: // addr: 73 pc: 72 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 73 op: NOP1 (159)
L3: // addr: 74 pc: 73 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 74 op: STARTLINE (58)

    /** scinot.e:333		if s[1] = '-' then*/
    // SubProg scientific_to_float pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_10564);
    _5890 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5890, 45)){
        _5890 = NOVALUE;
        goto L5; // [80] 101
    }
    _5890 = NOVALUE;
    // SubProg scientific_to_float pc: 84 op: STARTLINE (58)

    /** scinot.e:334			sbits = {1}*/
    // SubProg scientific_to_float pc: 86 op: ASSIGN (18)
    RefDS(_5816);
    DeRefi(_sbits_10573);
    _sbits_10573 = _5816;
    // SubProg scientific_to_float pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 91 op: STARTLINE (58)

    /** scinot.e:335			s = remove( s, 1 )*/
    // SubProg scientific_to_float pc: 93 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_10564);
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
                Head( SEQ_PTR(_s_10564), start, &_s_10564 );
            }
            else Tail(SEQ_PTR(_s_10564), stop+1, &_s_10564);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_10564), start, &_s_10564);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_10564 = Remove_elements(start, stop, (SEQ_PTR(_s_10564)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 98 op: ELSE (23)
    goto L6; // [98] 126
    // SubProg scientific_to_float pc: 100 op: NOP1 (159)
L5: // addr: 101 pc: 100 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 101 op: STARTLINE (58)

    /** scinot.e:337			sbits = {0}*/
    // SubProg scientific_to_float pc: 103 op: RIGHT_BRACE_N (31)
    _0 = _sbits_10573;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _sbits_10573 = MAKE_SEQ(_1);
    DeRefi(_0);
    // SubProg scientific_to_float pc: 107 op: STARTLINE (58)

    /** scinot.e:338			if s[1] = '+' then*/
    // SubProg scientific_to_float pc: 109 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_10564);
    _5894 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 113 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5894, 43)){
        _5894 = NOVALUE;
        goto L7; // [113] 125
    }
    _5894 = NOVALUE;
    // SubProg scientific_to_float pc: 117 op: STARTLINE (58)

    /** scinot.e:339				s = remove( s, 1 )*/
    // SubProg scientific_to_float pc: 119 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_10564);
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
                Head( SEQ_PTR(_s_10564), start, &_s_10564 );
            }
            else Tail(SEQ_PTR(_s_10564), stop+1, &_s_10564);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_10564), start, &_s_10564);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_10564 = Remove_elements(start, stop, (SEQ_PTR(_s_10564)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 124 op: NOP1 (159)
L7: // addr: 125 pc: 124 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 126 op: STARTLINE (58)

    /** scinot.e:344		dp = find('.', s)*/
    // SubProg scientific_to_float pc: 128 op: FIND_FROM (176)
    _dp_10566 = find_from(46, _s_10564, 1);
    // SubProg scientific_to_float pc: 133 op: STARTLINE (58)

    /** scinot.e:345		e = find( 'e', s )*/
    // SubProg scientific_to_float pc: 135 op: FIND_FROM (176)
    _e_10567 = find_from(101, _s_10564, 1);
    // SubProg scientific_to_float pc: 140 op: STARTLINE (58)

    /** scinot.e:346		if not e then*/
    // SubProg scientific_to_float pc: 142 op: NOT_IFW (108)
    if (_e_10567 != 0)
    goto L8; // [142] 153
    // SubProg scientific_to_float pc: 145 op: STARTLINE (58)

    /** scinot.e:347			e = find('E', s )*/
    // SubProg scientific_to_float pc: 147 op: FIND_FROM (176)
    _e_10567 = find_from(69, _s_10564, 1);
    // SubProg scientific_to_float pc: 152 op: NOP1 (159)
L8: // addr: 153 pc: 152 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 153 op: STARTLINE (58)

    /** scinot.e:351		exp = 0*/
    // SubProg scientific_to_float pc: 155 op: ASSIGN_I (113)
    _exp_10568 = 0;
    // SubProg scientific_to_float pc: 158 op: STARTLINE (58)

    /** scinot.e:352		if s[e+1] = '-' then*/
    // SubProg scientific_to_float pc: 160 op: PLUS1 (93)
    _5901 = _e_10567 + 1;
    // SubProg scientific_to_float pc: 164 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_10564);
    _5902 = (object)*(((s1_ptr)_2)->base + _5901);
    // SubProg scientific_to_float pc: 168 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5902, 45)){
        _5902 = NOVALUE;
        goto L9; // [168] 199
    }
    _5902 = NOVALUE;
    // SubProg scientific_to_float pc: 172 op: STARTLINE (58)

    /** scinot.e:353			exp -= string_to_int( s[e+2..$] )*/
    // SubProg scientific_to_float pc: 174 op: PLUS (11)
    _5904 = _e_10567 + 2;
    if ((object)((uintptr_t)_5904 + (uintptr_t)HIGH_BITS) >= 0){
        _5904 = NewDouble((eudouble)_5904);
    }
    // SubProg scientific_to_float pc: 178 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5905 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5905 = 1;
    }
    // SubProg scientific_to_float pc: 181 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5906;
    RHS_Slice(_s_10564, _5904, _5905);
    // SubProg scientific_to_float pc: 186 op: PROC (27)
    _5907 = _28string_to_int(_5906);
    _5906 = NOVALUE;
    // SubProg scientific_to_float pc: 190 op: MINUS (10)
    if (IS_ATOM_INT(_5907)) {
        _exp_10568 = _exp_10568 - _5907;
    }
    else {
        _exp_10568 = binary_op(MINUS, _exp_10568, _5907);
    }
    DeRef(_5907);
    _5907 = NOVALUE;
    // SubProg scientific_to_float pc: 194 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_10568)) {
        _1 = (object)(DBL_PTR(_exp_10568)->dbl);
        DeRefDS(_exp_10568);
        _exp_10568 = _1;
    }
    // SubProg scientific_to_float pc: 196 op: ELSE (23)
    goto LA; // [196] 266
    // SubProg scientific_to_float pc: 198 op: NOP1 (159)
L9: // addr: 199 pc: 198 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 199 op: STARTLINE (58)

    /** scinot.e:356			if s[e+1] = '+' then*/
    // SubProg scientific_to_float pc: 201 op: PLUS1 (93)
    _5909 = _e_10567 + 1;
    // SubProg scientific_to_float pc: 205 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_10564);
    _5910 = (object)*(((s1_ptr)_2)->base + _5909);
    // SubProg scientific_to_float pc: 209 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5910, 43)){
        _5910 = NOVALUE;
        goto LB; // [209] 240
    }
    _5910 = NOVALUE;
    // SubProg scientific_to_float pc: 213 op: STARTLINE (58)

    /** scinot.e:357				exp += string_to_int( s[e+2..$] )*/
    // SubProg scientific_to_float pc: 215 op: PLUS (11)
    _5912 = _e_10567 + 2;
    if ((object)((uintptr_t)_5912 + (uintptr_t)HIGH_BITS) >= 0){
        _5912 = NewDouble((eudouble)_5912);
    }
    // SubProg scientific_to_float pc: 219 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5913 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5913 = 1;
    }
    // SubProg scientific_to_float pc: 222 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5914;
    RHS_Slice(_s_10564, _5912, _5913);
    // SubProg scientific_to_float pc: 227 op: PROC (27)
    _5915 = _28string_to_int(_5914);
    _5914 = NOVALUE;
    // SubProg scientific_to_float pc: 231 op: PLUS (11)
    if (IS_ATOM_INT(_5915)) {
        _exp_10568 = _exp_10568 + _5915;
    }
    else {
        _exp_10568 = binary_op(PLUS, _exp_10568, _5915);
    }
    DeRef(_5915);
    _5915 = NOVALUE;
    // SubProg scientific_to_float pc: 235 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_10568)) {
        _1 = (object)(DBL_PTR(_exp_10568)->dbl);
        DeRefDS(_exp_10568);
        _exp_10568 = _1;
    }
    // SubProg scientific_to_float pc: 237 op: ELSE (23)
    goto LC; // [237] 265
    // SubProg scientific_to_float pc: 239 op: NOP1 (159)
LB: // addr: 240 pc: 239 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 240 op: STARTLINE (58)

    /** scinot.e:359				exp += string_to_int( s[e+1..$] )*/
    // SubProg scientific_to_float pc: 242 op: PLUS1 (93)
    _5917 = _e_10567 + 1;
    if (_5917 > MAXINT){
        _5917 = NewDouble((eudouble)_5917);
    }
    // SubProg scientific_to_float pc: 246 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5918 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5918 = 1;
    }
    // SubProg scientific_to_float pc: 249 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5919;
    RHS_Slice(_s_10564, _5917, _5918);
    // SubProg scientific_to_float pc: 254 op: PROC (27)
    _5920 = _28string_to_int(_5919);
    _5919 = NOVALUE;
    // SubProg scientific_to_float pc: 258 op: PLUS (11)
    if (IS_ATOM_INT(_5920)) {
        _exp_10568 = _exp_10568 + _5920;
    }
    else {
        _exp_10568 = binary_op(PLUS, _exp_10568, _5920);
    }
    DeRef(_5920);
    _5920 = NOVALUE;
    // SubProg scientific_to_float pc: 262 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_10568)) {
        _1 = (object)(DBL_PTR(_exp_10568)->dbl);
        DeRefDS(_exp_10568);
        _exp_10568 = _1;
    }
    // SubProg scientific_to_float pc: 264 op: NOP1 (159)
LC: // addr: 265 pc: 264 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 265 op: NOP1 (159)
LA: // addr: 266 pc: 265 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 266 op: STARTLINE (58)

    /** scinot.e:363		if dp then*/
    // SubProg scientific_to_float pc: 268 op: IF (20)
    if (_dp_10566 == 0)
    {
        goto LD; // [268] 297
    }
    else{
    }
    // SubProg scientific_to_float pc: 271 op: STARTLINE (58)

    /** scinot.e:365			s = remove( s, dp )*/
    // SubProg scientific_to_float pc: 273 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_10564);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_dp_10566)) ? _dp_10566 : (object)(DBL_PTR(_dp_10566)->dbl);
        int stop = (IS_ATOM_INT(_dp_10566)) ? _dp_10566 : (object)(DBL_PTR(_dp_10566)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_10564), start, &_s_10564 );
            }
            else Tail(SEQ_PTR(_s_10564), stop+1, &_s_10564);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_10564), start, &_s_10564);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_10564 = Remove_elements(start, stop, (SEQ_PTR(_s_10564)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 278 op: STARTLINE (58)

    /** scinot.e:366			e -= 1*/
    // SubProg scientific_to_float pc: 280 op: MINUS_I (116)
    _e_10567 = _e_10567 - 1;
    // SubProg scientific_to_float pc: 284 op: STARTLINE (58)

    /** scinot.e:369			exp -= e - dp*/
    // SubProg scientific_to_float pc: 286 op: MINUS (10)
    _5924 = _e_10567 - _dp_10566;
    if ((object)((uintptr_t)_5924 +(uintptr_t) HIGH_BITS) >= 0){
        _5924 = NewDouble((eudouble)_5924);
    }
    // SubProg scientific_to_float pc: 290 op: MINUS (10)
    if (IS_ATOM_INT(_5924)) {
        _exp_10568 = _exp_10568 - _5924;
    }
    else {
        _exp_10568 = NewDouble((eudouble)_exp_10568 - DBL_PTR(_5924)->dbl);
    }
    DeRef(_5924);
    _5924 = NOVALUE;
    // SubProg scientific_to_float pc: 294 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_10568)) {
        _1 = (object)(DBL_PTR(_exp_10568)->dbl);
        DeRefDS(_exp_10568);
        _exp_10568 = _1;
    }
    // SubProg scientific_to_float pc: 296 op: NOP1 (159)
LD: // addr: 297 pc: 296 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 297 op: STARTLINE (58)

    /** scinot.e:374		s = s[1..e-1] - '0'*/
    // SubProg scientific_to_float pc: 299 op: MINUS (10)
    _5926 = _e_10567 - 1;
    // SubProg scientific_to_float pc: 303 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5927;
    RHS_Slice(_s_10564, 1, _5926);
    // SubProg scientific_to_float pc: 308 op: MINUS (10)
    DeRefDS(_s_10564);
    _s_10564 = binary_op(MINUS, _5927, 48);
    DeRefDS(_5927);
    _5927 = NOVALUE;
    // SubProg scientific_to_float pc: 312 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 314 op: STARTLINE (58)

    /** scinot.e:377		if not find(0, s = 0) then*/
    // SubProg scientific_to_float pc: 316 op: EQUALS (3)
    _5929 = binary_op(EQUALS, _s_10564, 0);
    // SubProg scientific_to_float pc: 320 op: FIND_FROM (176)
    _5930 = find_from(0, _5929, 1);
    DeRefDS(_5929);
    _5929 = NOVALUE;
    // SubProg scientific_to_float pc: 325 op: NOT_IFW (108)
    if (_5930 != 0)
    goto LE; // [325] 366
    _5930 = NOVALUE;
    // SubProg scientific_to_float pc: 328 op: STARTLINE (58)

    /** scinot.e:378			if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 330 op: EQUALS_IFW (104)
    if (_fp_10565 != 2)
    goto LF; // [330] 347
    // SubProg scientific_to_float pc: 334 op: STARTLINE (58)

    /** scinot.e:379				return atom_to_float64(0)*/
    // SubProg scientific_to_float pc: 336 op: PROC (27)
    _5933 = _18atom_to_float64(0);
    // SubProg scientific_to_float pc: 340 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_10564
    DeRefDS(_s_10564);

// block var fp_10565

// block var dp_10566

// block var e_10567

// block var exp_10568

// block var int_bits_10569
    DeRef(_int_bits_10569);

// block var frac_bits_10570
    DeRef(_frac_bits_10570);

// block var mbits_10571
    DeRef(_mbits_10571);

// block var ebits_10572
    DeRef(_ebits_10572);

// block var sbits_10573
    DeRefi(_sbits_10573);

// block var significand_10574

// block var exponent_10575

// block var min_exp_10576

// block var exp_bias_10577
    DeRef(_5901);
    _5901 = NOVALUE;
    _5926 = NOVALUE;
    DeRef(_5917);
    _5917 = NOVALUE;
    DeRef(_5912);
    _5912 = NOVALUE;
    DeRef(_5904);
    _5904 = NOVALUE;
    DeRef(_5909);
    _5909 = NOVALUE;
    return _5933;
    // SubProg scientific_to_float pc: 344 op: ELSE (23)
    goto L10; // [344] 365
    // SubProg scientific_to_float pc: 346 op: NOP1 (159)
LF: // addr: 347 pc: 346 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 347 op: STARTLINE (58)

    /** scinot.e:380			elsif fp = EXTENDED then*/
    // SubProg scientific_to_float pc: 349 op: EQUALS_IFW (104)
    if (_fp_10565 != 3)
    goto L11; // [349] 364
    // SubProg scientific_to_float pc: 353 op: STARTLINE (58)

    /** scinot.e:381				return atom_to_float80(0)*/
    // SubProg scientific_to_float pc: 355 op: PROC (27)
    _5935 = _18atom_to_float80(0);
    // SubProg scientific_to_float pc: 359 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_10564
    DeRefDS(_s_10564);

// block var fp_10565

// block var dp_10566

// block var e_10567

// block var exp_10568

// block var int_bits_10569
    DeRef(_int_bits_10569);

// block var frac_bits_10570
    DeRef(_frac_bits_10570);

// block var mbits_10571
    DeRef(_mbits_10571);

// block var ebits_10572
    DeRef(_ebits_10572);

// block var sbits_10573
    DeRefi(_sbits_10573);

// block var significand_10574

// block var exponent_10575

// block var min_exp_10576

// block var exp_bias_10577
    DeRef(_5901);
    _5901 = NOVALUE;
    DeRef(_5926);
    _5926 = NOVALUE;
    DeRef(_5917);
    _5917 = NOVALUE;
    DeRef(_5912);
    _5912 = NOVALUE;
    DeRef(_5904);
    _5904 = NOVALUE;
    DeRef(_5933);
    _5933 = NOVALUE;
    DeRef(_5909);
    _5909 = NOVALUE;
    return _5935;
    // SubProg scientific_to_float pc: 363 op: NOP1 (159)
L11: // addr: 364 pc: 363 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 364 op: NOP1 (159)
L10: // addr: 365 pc: 364 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 365 op: NOP1 (159)
LE: // addr: 366 pc: 365 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 366 op: STARTLINE (58)

    /** scinot.e:385		if exp >= 0 then*/
    // SubProg scientific_to_float pc: 368 op: GREATEREQ_IFW_I (120)
    if (_exp_10568 < 0)
    goto L12; // [368] 412
    // SubProg scientific_to_float pc: 372 op: STARTLINE (58)

    /** scinot.e:388			int_bits = trim_bits( bytes_to_bits( convert_radix( repeat( 0, exp ) & reverse( s ), 10, #100 ) ) )*/
    // SubProg scientific_to_float pc: 374 op: REPEAT (32)
    _5937 = Repeat(0, _exp_10568);
    // SubProg scientific_to_float pc: 378 op: PROC (27)
    RefDS(_s_10564);
    _5938 = _28reverse(_s_10564);
    // SubProg scientific_to_float pc: 382 op: CONCAT (15)
    if (IS_SEQUENCE(_5937) && IS_ATOM(_5938)) {
        Ref(_5938);
        Append(&_5939, _5937, _5938);
    }
    else if (IS_ATOM(_5937) && IS_SEQUENCE(_5938)) {
    }
    else {
        Concat((object_ptr)&_5939, _5937, _5938);
        DeRefDS(_5937);
        _5937 = NOVALUE;
    }
    DeRef(_5937);
    _5937 = NOVALUE;
    DeRef(_5938);
    _5938 = NOVALUE;
    // SubProg scientific_to_float pc: 386 op: PROC (27)
    _5940 = _28convert_radix(_5939, 10, 256);
    _5939 = NOVALUE;
    // SubProg scientific_to_float pc: 392 op: PROC (27)
    _5941 = _28bytes_to_bits(_5940);
    _5940 = NOVALUE;
    // SubProg scientific_to_float pc: 396 op: PROC (27)
    _0 = _int_bits_10569;
    _int_bits_10569 = _28trim_bits(_5941);
    DeRef(_0);
    _5941 = NOVALUE;
    // SubProg scientific_to_float pc: 400 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 402 op: STARTLINE (58)

    /** scinot.e:389			frac_bits = {}*/
    // SubProg scientific_to_float pc: 404 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_frac_bits_10570);
    _frac_bits_10570 = _5;
    // SubProg scientific_to_float pc: 407 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 409 op: ELSE (23)
    goto L13; // [409] 529
    // SubProg scientific_to_float pc: 411 op: NOP1 (159)
L12: // addr: 412 pc: 411 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 412 op: STARTLINE (58)

    /** scinot.e:391			if -exp > length(s) then*/
    // SubProg scientific_to_float pc: 414 op: UMINUS (12)
    if ((uintptr_t)_exp_10568 == (uintptr_t)HIGH_BITS){
        _5943 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _5943 = - _exp_10568;
    }
    // SubProg scientific_to_float pc: 417 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5944 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5944 = 1;
    }
    // SubProg scientific_to_float pc: 420 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _5943, _5944)){
        DeRef(_5943);
        _5943 = NOVALUE;
        _5944 = NOVALUE;
        goto L14; // [420] 463
    }
    DeRef(_5943);
    _5943 = NOVALUE;
    _5944 = NOVALUE;
    // SubProg scientific_to_float pc: 424 op: STARTLINE (58)

    /** scinot.e:393				int_bits = {}*/
    // SubProg scientific_to_float pc: 426 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_int_bits_10569);
    _int_bits_10569 = _5;
    // SubProg scientific_to_float pc: 429 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 431 op: STARTLINE (58)

    /** scinot.e:394				frac_bits = decimals_to_bits( repeat( 0, -exp-length(s) ) & s, significand ) */
    // SubProg scientific_to_float pc: 433 op: UMINUS (12)
    if ((uintptr_t)_exp_10568 == (uintptr_t)HIGH_BITS){
        _5946 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _5946 = - _exp_10568;
    }
    // SubProg scientific_to_float pc: 436 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5947 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5947 = 1;
    }
    // SubProg scientific_to_float pc: 439 op: MINUS (10)
    if (IS_ATOM_INT(_5946)) {
        _5948 = _5946 - _5947;
    }
    else {
        _5948 = NewDouble(DBL_PTR(_5946)->dbl - (eudouble)_5947);
    }
    DeRef(_5946);
    _5946 = NOVALUE;
    _5947 = NOVALUE;
    // SubProg scientific_to_float pc: 443 op: REPEAT (32)
    _5949 = Repeat(0, _5948);
    DeRef(_5948);
    _5948 = NOVALUE;
    // SubProg scientific_to_float pc: 447 op: CONCAT (15)
    Concat((object_ptr)&_5950, _5949, _s_10564);
    DeRefDS(_5949);
    _5949 = NOVALUE;
    DeRef(_5949);
    _5949 = NOVALUE;
    // SubProg scientific_to_float pc: 451 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 453 op: PROC (27)
    _0 = _frac_bits_10570;
    _frac_bits_10570 = _28decimals_to_bits(_5950, _significand_10574);
    DeRef(_0);
    _5950 = NOVALUE;
    // SubProg scientific_to_float pc: 458 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 460 op: ELSE (23)
    goto L15; // [460] 528
    // SubProg scientific_to_float pc: 462 op: NOP1 (159)
L14: // addr: 463 pc: 462 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 463 op: STARTLINE (58)

    /** scinot.e:398				int_bits = trim_bits( bytes_to_bits( convert_radix( reverse( s[1..$+exp] ), 10, #100 ) ) )*/
    // SubProg scientific_to_float pc: 465 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5952 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5952 = 1;
    }
    // SubProg scientific_to_float pc: 468 op: PLUS (11)
    _5953 = _5952 + _exp_10568;
    _5952 = NOVALUE;
    // SubProg scientific_to_float pc: 472 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5954;
    RHS_Slice(_s_10564, 1, _5953);
    // SubProg scientific_to_float pc: 477 op: PROC (27)
    _5955 = _28reverse(_5954);
    _5954 = NOVALUE;
    // SubProg scientific_to_float pc: 481 op: PROC (27)
    _5956 = _28convert_radix(_5955, 10, 256);
    _5955 = NOVALUE;
    // SubProg scientific_to_float pc: 487 op: PROC (27)
    _5957 = _28bytes_to_bits(_5956);
    _5956 = NOVALUE;
    // SubProg scientific_to_float pc: 491 op: PROC (27)
    _0 = _int_bits_10569;
    _int_bits_10569 = _28trim_bits(_5957);
    DeRef(_0);
    _5957 = NOVALUE;
    // SubProg scientific_to_float pc: 495 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 497 op: STARTLINE (58)

    /** scinot.e:399				frac_bits =  decimals_to_bits( s[$+exp+1..$], significand )*/
    // SubProg scientific_to_float pc: 499 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5959 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5959 = 1;
    }
    // SubProg scientific_to_float pc: 502 op: PLUS (11)
    _5960 = _5959 + _exp_10568;
    if ((object)((uintptr_t)_5960 + (uintptr_t)HIGH_BITS) >= 0){
        _5960 = NewDouble((eudouble)_5960);
    }
    _5959 = NOVALUE;
    // SubProg scientific_to_float pc: 506 op: PLUS1 (93)
    if (IS_ATOM_INT(_5960)) {
        _5961 = _5960 + 1;
        if (_5961 > MAXINT){
            _5961 = NewDouble((eudouble)_5961);
        }
    }
    else
    _5961 = binary_op(PLUS, 1, _5960);
    DeRef(_5960);
    _5960 = NOVALUE;
    // SubProg scientific_to_float pc: 510 op: LENGTH (42)
    if (IS_SEQUENCE(_s_10564)){
            _5962 = SEQ_PTR(_s_10564)->length;
    }
    else {
        _5962 = 1;
    }
    // SubProg scientific_to_float pc: 513 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5963;
    RHS_Slice(_s_10564, _5961, _5962);
    // SubProg scientific_to_float pc: 518 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 520 op: PROC (27)
    _0 = _frac_bits_10570;
    _frac_bits_10570 = _28decimals_to_bits(_5963, _significand_10574);
    DeRef(_0);
    _5963 = NOVALUE;
    // SubProg scientific_to_float pc: 525 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 527 op: NOP1 (159)
L15: // addr: 528 pc: 527 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 528 op: NOP1 (159)
L13: // addr: 529 pc: 528 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 529 op: STARTLINE (58)

    /** scinot.e:403		if length(int_bits) > significand then*/
    // SubProg scientific_to_float pc: 531 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 533 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5965 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5965 = 1;
    }
    // SubProg scientific_to_float pc: 536 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 538 op: GREATER_IFW_I (124)
    if (_5965 <= _significand_10574)
    goto L16; // [538] 668
    // SubProg scientific_to_float pc: 542 op: STARTLINE (58)

    /** scinot.e:406			if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 544 op: EQUALS_IFW (104)
    if (_fp_10565 != 2)
    goto L17; // [544] 572
    // SubProg scientific_to_float pc: 548 op: STARTLINE (58)

    /** scinot.e:408				mbits = int_bits[$-significand..$-1]*/
    // SubProg scientific_to_float pc: 550 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5968 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5968 = 1;
    }
    // SubProg scientific_to_float pc: 553 op: MINUS (10)
    _5969 = _5968 - _significand_10574;
    if ((object)((uintptr_t)_5969 +(uintptr_t) HIGH_BITS) >= 0){
        _5969 = NewDouble((eudouble)_5969);
    }
    _5968 = NOVALUE;
    // SubProg scientific_to_float pc: 557 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5970 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5970 = 1;
    }
    // SubProg scientific_to_float pc: 560 op: MINUS (10)
    _5971 = _5970 - 1;
    _5970 = NOVALUE;
    // SubProg scientific_to_float pc: 564 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_10571;
    RHS_Slice(_int_bits_10569, _5969, _5971);
    // SubProg scientific_to_float pc: 569 op: ELSE (23)
    goto L18; // [569] 594
    // SubProg scientific_to_float pc: 571 op: NOP1 (159)
L17: // addr: 572 pc: 571 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 572 op: STARTLINE (58)

    /** scinot.e:411				mbits = int_bits[$-significand+1..$]*/
    // SubProg scientific_to_float pc: 574 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5973 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5973 = 1;
    }
    // SubProg scientific_to_float pc: 577 op: MINUS (10)
    _5974 = _5973 - _significand_10574;
    if ((object)((uintptr_t)_5974 +(uintptr_t) HIGH_BITS) >= 0){
        _5974 = NewDouble((eudouble)_5974);
    }
    _5973 = NOVALUE;
    // SubProg scientific_to_float pc: 581 op: PLUS1 (93)
    if (IS_ATOM_INT(_5974)) {
        _5975 = _5974 + 1;
        if (_5975 > MAXINT){
            _5975 = NewDouble((eudouble)_5975);
        }
    }
    else
    _5975 = binary_op(PLUS, 1, _5974);
    DeRef(_5974);
    _5974 = NOVALUE;
    // SubProg scientific_to_float pc: 585 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5976 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5976 = 1;
    }
    // SubProg scientific_to_float pc: 588 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_10571;
    RHS_Slice(_int_bits_10569, _5975, _5976);
    // SubProg scientific_to_float pc: 593 op: NOP1 (159)
L18: // addr: 594 pc: 593 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 594 op: STARTLINE (58)

    /** scinot.e:414			if length(int_bits) > significand + 1 and int_bits[$-(significand+1)] then*/
    // SubProg scientific_to_float pc: 596 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5978 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5978 = 1;
    }
    // SubProg scientific_to_float pc: 599 op: PLUS1 (93)
    _5979 = _significand_10574 + 1;
    if (_5979 > MAXINT){
        _5979 = NewDouble((eudouble)_5979);
    }
    // SubProg scientific_to_float pc: 603 op: GREATER (6)
    if (IS_ATOM_INT(_5979)) {
        _5980 = (_5978 > _5979);
    }
    else {
        _5980 = ((eudouble)_5978 > DBL_PTR(_5979)->dbl);
    }
    _5978 = NOVALUE;
    DeRef(_5979);
    _5979 = NOVALUE;
    // SubProg scientific_to_float pc: 607 op: SC1_AND_IF (146)
    if (_5980 == 0) {
        goto L19; // [607] 656
    }
    // SubProg scientific_to_float pc: 611 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5982 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5982 = 1;
    }
    // SubProg scientific_to_float pc: 614 op: PLUS1 (93)
    _5983 = _significand_10574 + 1;
    if (_5983 > MAXINT){
        _5983 = NewDouble((eudouble)_5983);
    }
    // SubProg scientific_to_float pc: 618 op: MINUS (10)
    if (IS_ATOM_INT(_5983)) {
        _5984 = _5982 - _5983;
    }
    else {
        _5984 = NewDouble((eudouble)_5982 - DBL_PTR(_5983)->dbl);
    }
    _5982 = NOVALUE;
    DeRef(_5983);
    _5983 = NOVALUE;
    // SubProg scientific_to_float pc: 622 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_int_bits_10569);
    if (!IS_ATOM_INT(_5984)){
        _5985 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5984)->dbl));
    }
    else{
        _5985 = (object)*(((s1_ptr)_2)->base + _5984);
    }
    // SubProg scientific_to_float pc: 626 op: NOP1 (159)
    // SubProg scientific_to_float pc: 627 op: IF (20)
    if (_5985 == 0) {
        _5985 = NOVALUE;
        goto L19; // [627] 656
    }
    else {
        if (!IS_ATOM_INT(_5985) && DBL_PTR(_5985)->dbl == 0.0){
            _5985 = NOVALUE;
            goto L19; // [627] 656
        }
        _5985 = NOVALUE;
    }
    _5985 = NOVALUE;
    // SubProg scientific_to_float pc: 630 op: STARTLINE (58)

    /** scinot.e:416				mbits[1] += 1*/
    // SubProg scientific_to_float pc: 632 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 634 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_10571);
    _5986 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 638 op: PLUS1 (93)
    if (IS_ATOM_INT(_5986)) {
        _5987 = _5986 + 1;
        if (_5987 > MAXINT){
            _5987 = NewDouble((eudouble)_5987);
        }
    }
    else
    _5987 = binary_op(PLUS, 1, _5986);
    _5986 = NOVALUE;
    // SubProg scientific_to_float pc: 642 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_10571);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_10571 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5987;
    if( _1 != _5987 ){
        DeRef(_1);
    }
    _5987 = NOVALUE;
    // SubProg scientific_to_float pc: 646 op: STARTLINE (58)

    /** scinot.e:417				mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 648 op: PROC (27)
    RefDS(_mbits_10571);
    _0 = _mbits_10571;
    _mbits_10571 = _28carry(_mbits_10571, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 653 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 655 op: NOP1 (159)
L19: // addr: 656 pc: 655 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 656 op: STARTLINE (58)

    /** scinot.e:419			exp = length(int_bits)-1*/
    // SubProg scientific_to_float pc: 658 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5989 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5989 = 1;
    }
    // SubProg scientific_to_float pc: 661 op: MINUS_I (116)
    _exp_10568 = _5989 - 1;
    _5989 = NOVALUE;
    // SubProg scientific_to_float pc: 665 op: ELSE (23)
    goto L1A; // [665] 940
    // SubProg scientific_to_float pc: 667 op: NOP1 (159)
L16: // addr: 668 pc: 667 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 668 op: STARTLINE (58)

    /** scinot.e:422			if length(int_bits) then*/
    // SubProg scientific_to_float pc: 670 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5991 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5991 = 1;
    }
    // SubProg scientific_to_float pc: 673 op: IF (20)
    if (_5991 == 0)
    {
        _5991 = NOVALUE;
        goto L1B; // [673] 688
    }
    else{
        _5991 = NOVALUE;
    }
    // SubProg scientific_to_float pc: 676 op: STARTLINE (58)

    /** scinot.e:424				exp = length(int_bits)-1*/
    // SubProg scientific_to_float pc: 678 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_10569)){
            _5992 = SEQ_PTR(_int_bits_10569)->length;
    }
    else {
        _5992 = 1;
    }
    // SubProg scientific_to_float pc: 681 op: MINUS_I (116)
    _exp_10568 = _5992 - 1;
    _5992 = NOVALUE;
    // SubProg scientific_to_float pc: 685 op: ELSE (23)
    goto L1C; // [685] 748
    // SubProg scientific_to_float pc: 687 op: NOP1 (159)
L1B: // addr: 688 pc: 687 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 688 op: STARTLINE (58)

    /** scinot.e:428				exp = - find( 1, reverse( frac_bits ) )*/
    // SubProg scientific_to_float pc: 690 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 692 op: PROC (27)
    RefDS(_frac_bits_10570);
    _5994 = _28reverse(_frac_bits_10570);
    // SubProg scientific_to_float pc: 696 op: FIND_FROM (176)
    _5995 = find_from(1, _5994, 1);
    DeRef(_5994);
    _5994 = NOVALUE;
    // SubProg scientific_to_float pc: 701 op: UMINUS (12)
    _exp_10568 = - _5995;
    // SubProg scientific_to_float pc: 706 op: STARTLINE (58)

    /** scinot.e:429				if exp < min_exp then*/
    // SubProg scientific_to_float pc: 708 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 710 op: LESS_IFW_I (119)
    if (_exp_10568 >= _min_exp_10576)
    goto L1D; // [710] 720
    // SubProg scientific_to_float pc: 714 op: STARTLINE (58)

    /** scinot.e:432					exp = min_exp*/
    // SubProg scientific_to_float pc: 716 op: ASSIGN_I (113)
    _exp_10568 = _min_exp_10576;
    // SubProg scientific_to_float pc: 719 op: NOP1 (159)
L1D: // addr: 720 pc: 719 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 720 op: STARTLINE (58)

    /** scinot.e:435				if exp then*/
    // SubProg scientific_to_float pc: 722 op: IF (20)
    if (_exp_10568 == 0)
    {
        goto L1E; // [722] 747
    }
    else{
    }
    // SubProg scientific_to_float pc: 725 op: STARTLINE (58)

    /** scinot.e:437					frac_bits = remove( frac_bits, length(frac_bits) + exp + 2, length( frac_bits ) )*/
    // SubProg scientific_to_float pc: 727 op: LENGTH (42)
    if (IS_SEQUENCE(_frac_bits_10570)){
            _5998 = SEQ_PTR(_frac_bits_10570)->length;
    }
    else {
        _5998 = 1;
    }
    // SubProg scientific_to_float pc: 730 op: PLUS (11)
    _5999 = _5998 + _exp_10568;
    if ((object)((uintptr_t)_5999 + (uintptr_t)HIGH_BITS) >= 0){
        _5999 = NewDouble((eudouble)_5999);
    }
    _5998 = NOVALUE;
    // SubProg scientific_to_float pc: 734 op: PLUS (11)
    if (IS_ATOM_INT(_5999)) {
        _6000 = _5999 + 2;
        if ((object)((uintptr_t)_6000 + (uintptr_t)HIGH_BITS) >= 0){
            _6000 = NewDouble((eudouble)_6000);
        }
    }
    else {
        _6000 = NewDouble(DBL_PTR(_5999)->dbl + (eudouble)2);
    }
    DeRef(_5999);
    _5999 = NOVALUE;
    // SubProg scientific_to_float pc: 738 op: LENGTH (42)
    if (IS_SEQUENCE(_frac_bits_10570)){
            _6001 = SEQ_PTR(_frac_bits_10570)->length;
    }
    else {
        _6001 = 1;
    }
    // SubProg scientific_to_float pc: 741 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_frac_bits_10570);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_6000)) ? _6000 : (object)(DBL_PTR(_6000)->dbl);
        int stop = (IS_ATOM_INT(_6001)) ? _6001 : (object)(DBL_PTR(_6001)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_frac_bits_10570), start, &_frac_bits_10570 );
            }
            else Tail(SEQ_PTR(_frac_bits_10570), stop+1, &_frac_bits_10570);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_frac_bits_10570), start, &_frac_bits_10570);
        }
        else {
            assign_slice_seq = &assign_space;
            _frac_bits_10570 = Remove_elements(start, stop, (SEQ_PTR(_frac_bits_10570)->ref == 1));
        }
    }
    DeRef(_6000);
    _6000 = NOVALUE;
    _6001 = NOVALUE;
    // SubProg scientific_to_float pc: 746 op: NOP1 (159)
L1E: // addr: 747 pc: 746 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 747 op: NOP1 (159)
L1C: // addr: 748 pc: 747 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 748 op: STARTLINE (58)

    /** scinot.e:444			mbits = frac_bits & int_bits*/
    // SubProg scientific_to_float pc: 750 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 752 op: CONCAT (15)
    Concat((object_ptr)&_mbits_10571, _frac_bits_10570, _int_bits_10569);
    // SubProg scientific_to_float pc: 756 op: STARTLINE (58)

    /** scinot.e:445			mbits = repeat( 0, significand + 1 ) & mbits*/
    // SubProg scientific_to_float pc: 758 op: PLUS1 (93)
    _6004 = _significand_10574 + 1;
    // SubProg scientific_to_float pc: 762 op: REPEAT (32)
    _6005 = Repeat(0, _6004);
    _6004 = NOVALUE;
    // SubProg scientific_to_float pc: 766 op: CONCAT (15)
    Concat((object_ptr)&_mbits_10571, _6005, _mbits_10571);
    DeRefDS(_6005);
    _6005 = NOVALUE;
    DeRef(_6005);
    _6005 = NOVALUE;
    // SubProg scientific_to_float pc: 770 op: STARTLINE (58)

    /** scinot.e:447			if exp > min_exp then*/
    // SubProg scientific_to_float pc: 772 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 774 op: GREATER_IFW_I (124)
    if (_exp_10568 <= _min_exp_10576)
    goto L1F; // [774] 877
    // SubProg scientific_to_float pc: 778 op: STARTLINE (58)

    /** scinot.e:449				if mbits[$-(significand+1)] then*/
    // SubProg scientific_to_float pc: 780 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6008 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6008 = 1;
    }
    // SubProg scientific_to_float pc: 783 op: PLUS1 (93)
    _6009 = _significand_10574 + 1;
    if (_6009 > MAXINT){
        _6009 = NewDouble((eudouble)_6009);
    }
    // SubProg scientific_to_float pc: 787 op: MINUS (10)
    if (IS_ATOM_INT(_6009)) {
        _6010 = _6008 - _6009;
    }
    else {
        _6010 = NewDouble((eudouble)_6008 - DBL_PTR(_6009)->dbl);
    }
    _6008 = NOVALUE;
    DeRef(_6009);
    _6009 = NOVALUE;
    // SubProg scientific_to_float pc: 791 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_mbits_10571);
    if (!IS_ATOM_INT(_6010)){
        _6011 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_6010)->dbl));
    }
    else{
        _6011 = (object)*(((s1_ptr)_2)->base + _6010);
    }
    // SubProg scientific_to_float pc: 795 op: IF (20)
    if (_6011 == 0) {
        _6011 = NOVALUE;
        goto L20; // [795] 829
    }
    else {
        if (!IS_ATOM_INT(_6011) && DBL_PTR(_6011)->dbl == 0.0){
            _6011 = NOVALUE;
            goto L20; // [795] 829
        }
        _6011 = NOVALUE;
    }
    _6011 = NOVALUE;
    // SubProg scientific_to_float pc: 798 op: STARTLINE (58)

    /** scinot.e:451					mbits[$-significand] += 1*/
    // SubProg scientific_to_float pc: 800 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6012 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6012 = 1;
    }
    // SubProg scientific_to_float pc: 803 op: MINUS (10)
    _6013 = _6012 - _significand_10574;
    _6012 = NOVALUE;
    // SubProg scientific_to_float pc: 807 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_10571);
    _6014 = (object)*(((s1_ptr)_2)->base + _6013);
    // SubProg scientific_to_float pc: 811 op: PLUS1 (93)
    if (IS_ATOM_INT(_6014)) {
        _6015 = _6014 + 1;
        if (_6015 > MAXINT){
            _6015 = NewDouble((eudouble)_6015);
        }
    }
    else
    _6015 = binary_op(PLUS, 1, _6014);
    _6014 = NOVALUE;
    // SubProg scientific_to_float pc: 815 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_10571);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_10571 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _6013);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6015;
    if( _1 != _6015 ){
        DeRef(_1);
    }
    _6015 = NOVALUE;
    // SubProg scientific_to_float pc: 819 op: STARTLINE (58)

    /** scinot.e:452					mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 821 op: PROC (27)
    RefDS(_mbits_10571);
    _0 = _mbits_10571;
    _mbits_10571 = _28carry(_mbits_10571, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 826 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 828 op: NOP1 (159)
L20: // addr: 829 pc: 828 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 829 op: STARTLINE (58)

    /** scinot.e:454				if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 831 op: EQUALS_IFW (104)
    if (_fp_10565 != 2)
    goto L21; // [831] 859
    // SubProg scientific_to_float pc: 835 op: STARTLINE (58)

    /** scinot.e:456					mbits = mbits[$-significand..$-1]*/
    // SubProg scientific_to_float pc: 837 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6018 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6018 = 1;
    }
    // SubProg scientific_to_float pc: 840 op: MINUS (10)
    _6019 = _6018 - _significand_10574;
    if ((object)((uintptr_t)_6019 +(uintptr_t) HIGH_BITS) >= 0){
        _6019 = NewDouble((eudouble)_6019);
    }
    _6018 = NOVALUE;
    // SubProg scientific_to_float pc: 844 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6020 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6020 = 1;
    }
    // SubProg scientific_to_float pc: 847 op: MINUS (10)
    _6021 = _6020 - 1;
    _6020 = NOVALUE;
    // SubProg scientific_to_float pc: 851 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_10571;
    RHS_Slice(_mbits_10571, _6019, _6021);
    // SubProg scientific_to_float pc: 856 op: ELSE (23)
    goto L22; // [856] 939
    // SubProg scientific_to_float pc: 858 op: NOP1 (159)
L21: // addr: 859 pc: 858 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 859 op: STARTLINE (58)

    /** scinot.e:459					mbits = remove( mbits, 1, length(mbits) - significand )*/
    // SubProg scientific_to_float pc: 861 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6023 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6023 = 1;
    }
    // SubProg scientific_to_float pc: 864 op: MINUS (10)
    _6024 = _6023 - _significand_10574;
    if ((object)((uintptr_t)_6024 +(uintptr_t) HIGH_BITS) >= 0){
        _6024 = NewDouble((eudouble)_6024);
    }
    _6023 = NOVALUE;
    // SubProg scientific_to_float pc: 868 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_10571);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_6024)) ? _6024 : (object)(DBL_PTR(_6024)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_10571), start, &_mbits_10571 );
            }
            else Tail(SEQ_PTR(_mbits_10571), stop+1, &_mbits_10571);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_10571), start, &_mbits_10571);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_10571 = Remove_elements(start, stop, (SEQ_PTR(_mbits_10571)->ref == 1));
        }
    }
    DeRef(_6024);
    _6024 = NOVALUE;
    // SubProg scientific_to_float pc: 873 op: NOP1 (159)
    // SubProg scientific_to_float pc: 874 op: ELSE (23)
    goto L22; // [874] 939
    // SubProg scientific_to_float pc: 876 op: NOP1 (159)
L1F: // addr: 877 pc: 876 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 877 op: STARTLINE (58)

    /** scinot.e:463				if mbits[$-significand] then*/
    // SubProg scientific_to_float pc: 879 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6026 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6026 = 1;
    }
    // SubProg scientific_to_float pc: 882 op: MINUS (10)
    _6027 = _6026 - _significand_10574;
    _6026 = NOVALUE;
    // SubProg scientific_to_float pc: 886 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_mbits_10571);
    _6028 = (object)*(((s1_ptr)_2)->base + _6027);
    // SubProg scientific_to_float pc: 890 op: IF (20)
    if (_6028 == 0) {
        _6028 = NOVALUE;
        goto L23; // [890] 924
    }
    else {
        if (!IS_ATOM_INT(_6028) && DBL_PTR(_6028)->dbl == 0.0){
            _6028 = NOVALUE;
            goto L23; // [890] 924
        }
        _6028 = NOVALUE;
    }
    _6028 = NOVALUE;
    // SubProg scientific_to_float pc: 893 op: STARTLINE (58)

    /** scinot.e:465					mbits[$-significand] += 1*/
    // SubProg scientific_to_float pc: 895 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6029 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6029 = 1;
    }
    // SubProg scientific_to_float pc: 898 op: MINUS (10)
    _6030 = _6029 - _significand_10574;
    _6029 = NOVALUE;
    // SubProg scientific_to_float pc: 902 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_10571);
    _6031 = (object)*(((s1_ptr)_2)->base + _6030);
    // SubProg scientific_to_float pc: 906 op: PLUS1 (93)
    if (IS_ATOM_INT(_6031)) {
        _6032 = _6031 + 1;
        if (_6032 > MAXINT){
            _6032 = NewDouble((eudouble)_6032);
        }
    }
    else
    _6032 = binary_op(PLUS, 1, _6031);
    _6031 = NOVALUE;
    // SubProg scientific_to_float pc: 910 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_10571);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_10571 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _6030);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6032;
    if( _1 != _6032 ){
        DeRef(_1);
    }
    _6032 = NOVALUE;
    // SubProg scientific_to_float pc: 914 op: STARTLINE (58)

    /** scinot.e:466					mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 916 op: PROC (27)
    RefDS(_mbits_10571);
    _0 = _mbits_10571;
    _mbits_10571 = _28carry(_mbits_10571, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 921 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 923 op: NOP1 (159)
L23: // addr: 924 pc: 923 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 924 op: STARTLINE (58)

    /** scinot.e:468				mbits = remove( mbits, 1, length(mbits) - significand )*/
    // SubProg scientific_to_float pc: 926 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_10571)){
            _6034 = SEQ_PTR(_mbits_10571)->length;
    }
    else {
        _6034 = 1;
    }
    // SubProg scientific_to_float pc: 929 op: MINUS (10)
    _6035 = _6034 - _significand_10574;
    if ((object)((uintptr_t)_6035 +(uintptr_t) HIGH_BITS) >= 0){
        _6035 = NewDouble((eudouble)_6035);
    }
    _6034 = NOVALUE;
    // SubProg scientific_to_float pc: 933 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_10571);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_6035)) ? _6035 : (object)(DBL_PTR(_6035)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_10571), start, &_mbits_10571 );
            }
            else Tail(SEQ_PTR(_mbits_10571), stop+1, &_mbits_10571);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_10571), start, &_mbits_10571);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_10571 = Remove_elements(start, stop, (SEQ_PTR(_mbits_10571)->ref == 1));
        }
    }
    DeRef(_6035);
    _6035 = NOVALUE;
    // SubProg scientific_to_float pc: 938 op: NOP1 (159)
L22: // addr: 939 pc: 938 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 939 op: NOP1 (159)
L1A: // addr: 940 pc: 939 sub: 10562 op: 159
    // SubProg scientific_to_float pc: 940 op: STARTLINE (58)

    /** scinot.e:474		ebits = int_to_bits( exp + exp_bias, exponent )*/
    // SubProg scientific_to_float pc: 942 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 944 op: PLUS (11)
    _6037 = _exp_10568 + _exp_bias_10577;
    if ((object)((uintptr_t)_6037 + (uintptr_t)HIGH_BITS) >= 0){
        _6037 = NewDouble((eudouble)_6037);
    }
    // SubProg scientific_to_float pc: 948 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 950 op: PROC (27)
    _0 = _ebits_10572;
    _ebits_10572 = _18int_to_bits(_6037, _exponent_10575);
    DeRef(_0);
    _6037 = NOVALUE;
    // SubProg scientific_to_float pc: 955 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 957 op: STARTLINE (58)

    /** scinot.e:477		return bits_to_bytes( mbits & ebits & sbits )*/
    // SubProg scientific_to_float pc: 959 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 961 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 963 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _sbits_10573;
        concat_list[1] = _ebits_10572;
        concat_list[2] = _mbits_10571;
        Concat_N((object_ptr)&_6039, concat_list, 3);
    }
    // SubProg scientific_to_float pc: 969 op: PROC (27)
    _6040 = _28bits_to_bytes(_6039);
    _6039 = NOVALUE;
    // SubProg scientific_to_float pc: 973 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_10564
    DeRefDS(_s_10564);

// block var fp_10565

// block var dp_10566

// block var e_10567

// block var exp_10568

// block var int_bits_10569
    DeRef(_int_bits_10569);

// block var frac_bits_10570
    DeRef(_frac_bits_10570);

// block var mbits_10571
    DeRefDS(_mbits_10571);

// block var ebits_10572
    DeRefDS(_ebits_10572);

// block var sbits_10573
    DeRefDSi(_sbits_10573);

// block var significand_10574

// block var exponent_10575

// block var min_exp_10576

// block var exp_bias_10577
    DeRef(_6010);
    _6010 = NOVALUE;
    DeRef(_5980);
    _5980 = NOVALUE;
    DeRef(_6021);
    _6021 = NOVALUE;
    DeRef(_5901);
    _5901 = NOVALUE;
    DeRef(_5926);
    _5926 = NOVALUE;
    DeRef(_5917);
    _5917 = NOVALUE;
    DeRef(_6019);
    _6019 = NOVALUE;
    DeRef(_5961);
    _5961 = NOVALUE;
    DeRef(_6013);
    _6013 = NOVALUE;
    DeRef(_5975);
    _5975 = NOVALUE;
    DeRef(_5912);
    _5912 = NOVALUE;
    DeRef(_5904);
    _5904 = NOVALUE;
    DeRef(_5935);
    _5935 = NOVALUE;
    DeRef(_5953);
    _5953 = NOVALUE;
    DeRef(_5971);
    _5971 = NOVALUE;
    DeRef(_5933);
    _5933 = NOVALUE;
    DeRef(_5984);
    _5984 = NOVALUE;
    DeRef(_5909);
    _5909 = NOVALUE;
    DeRef(_6027);
    _6027 = NOVALUE;
    DeRef(_6030);
    _6030 = NOVALUE;
    DeRef(_5969);
    _5969 = NOVALUE;
    return _6040;
    // SubProg scientific_to_float pc: 977 op: BADRETURNF (43)
    ;
}


object _28scientific_to_atom(object _s_10771, object _fp_10772)
{
    object _float_10775 = NOVALUE;
    object _6046 = NOVALUE; // 10784 6046
// skipping _6045  name type: 0
    object _6044 = NOVALUE; // 10780 6044
// skipping _6043  name type: 0
// skipping _6042  name type: 0
// skipping _6041  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scientific_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_atom pc: 3 op: STARTLINE (58)

    /** scinot.e:495		if fp = NATIVE then*/
    // SubProg scientific_to_atom pc: 5 op: EQUALS_IFW (104)
    if (_fp_10772 != 1)
    goto L1; // [5] 17
    // SubProg scientific_to_atom pc: 9 op: STARTLINE (58)

    /** scinot.e:496			fp = NATIVE_FORMAT*/
    // SubProg scientific_to_atom pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scientific_to_atom pc: 13 op: ASSIGN (18)
    _fp_10772 = 2;
    // SubProg scientific_to_atom pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 10769 op: 159
    // SubProg scientific_to_atom pc: 17 op: STARTLINE (58)

    /** scinot.e:498		sequence float = scientific_to_float( s, fp )*/
    // SubProg scientific_to_atom pc: 19 op: PROC (27)
    RefDS(_s_10771);
    _0 = _float_10775;
    _float_10775 = _28scientific_to_float(_s_10771, _fp_10772);
    DeRef(_0);
    // SubProg scientific_to_atom pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_atom pc: 26 op: STARTLINE (58)

    /** scinot.e:499		if fp = DOUBLE then*/
    // SubProg scientific_to_atom pc: 28 op: EQUALS_IFW (104)
    if (_fp_10772 != 2)
    goto L2; // [28] 45
    // SubProg scientific_to_atom pc: 32 op: STARTLINE (58)

    /** scinot.e:500			return float64_to_atom( float )*/
    // SubProg scientific_to_atom pc: 34 op: PROC (27)
    RefDS(_float_10775);
    _6044 = _18float64_to_atom(_float_10775);
    // SubProg scientific_to_atom pc: 38 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_atom

// block var s_10771
    DeRefDS(_s_10771);

// block var fp_10772

// block var float_10775
    DeRefDS(_float_10775);
    return _6044;
    // SubProg scientific_to_atom pc: 42 op: ELSE (23)
    goto L3; // [42] 63
    // SubProg scientific_to_atom pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 10769 op: 159
    // SubProg scientific_to_atom pc: 45 op: STARTLINE (58)

    /** scinot.e:501		elsif fp = EXTENDED then*/
    // SubProg scientific_to_atom pc: 47 op: EQUALS_IFW (104)
    if (_fp_10772 != 3)
    goto L4; // [47] 62
    // SubProg scientific_to_atom pc: 51 op: STARTLINE (58)

    /** scinot.e:502			return float80_to_atom( float )*/
    // SubProg scientific_to_atom pc: 53 op: PROC (27)
    RefDS(_float_10775);
    _6046 = _18float80_to_atom(_float_10775);
    // SubProg scientific_to_atom pc: 57 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_atom

// block var s_10771
    DeRefDS(_s_10771);

// block var fp_10772

// block var float_10775
    DeRefDS(_float_10775);
    DeRef(_6044);
    _6044 = NOVALUE;
    return _6046;
    // SubProg scientific_to_atom pc: 61 op: NOP1 (159)
L4: // addr: 62 pc: 61 sub: 10769 op: 159
    // SubProg scientific_to_atom pc: 62 op: NOP1 (159)
L3: // addr: 63 pc: 62 sub: 10769 op: 159
    // SubProg scientific_to_atom pc: 63 op: BADRETURNF (43)
    ;
}



// 0x7B61604D
