// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _17sprint(object _x_8334)
{
    object _s_8335 = NOVALUE;
// skipping _4546  name type: 0
    object _4545 = NOVALUE; // 8358 4545
// skipping _4544  name type: 0
    object _4543 = NOVALUE; // 8356 4543
    object _4542 = NOVALUE; // 8355 4542
// skipping _4541  name type: 0
// skipping _4540  name type: 0
    object _4539 = NOVALUE; // 8351 4539
    object _4538 = NOVALUE; // 8350 4538
// skipping _4537  name type: 0
    object _4536 = NOVALUE; // 8347 4536
    object _4535 = NOVALUE; // 8346 4535
    object _4534 = NOVALUE; // 8345 4534
    object _4533 = NOVALUE; // 8344 4533
    object _4532 = NOVALUE; // 8342 4532
    object _4531 = NOVALUE; // 8338 4531
    object _4530 = NOVALUE; // 8337 4530
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sprint pc: 1 op: STARTLINE (58)

    /** text.e:93		if atom(x) then*/
    // SubProg sprint pc: 3 op: IS_AN_ATOM (67)
    _4530 = IS_ATOM(_x_8334);
    // SubProg sprint pc: 6 op: IF (20)
    if (_4530 == 0)
    {
        _4530 = NOVALUE;
        goto L1; // [6] 22
    }
    else{
        _4530 = NOVALUE;
    }
    // SubProg sprint pc: 9 op: STARTLINE (58)

    /** text.e:94			return sprintf("%.10g", x)*/
    // SubProg sprint pc: 11 op: SPRINTF (53)
    _4531 = EPrintf(-9999999, _4210, _x_8334);
    // SubProg sprint pc: 15 op: RETURNF (28)

// Exiting block BLOCK: sprint

// block var x_8334
    DeRef(_x_8334);

// block var s_8335
    DeRef(_s_8335);
    return _4531;
    // SubProg sprint pc: 19 op: ELSE (23)
    goto L2; // [19] 137
    // SubProg sprint pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 8332 op: 159
    // SubProg sprint pc: 22 op: STARTLINE (58)

    /** text.e:96			s = "{"*/
    // SubProg sprint pc: 24 op: ASSIGN (18)
    RefDS(_1423);
    DeRef(_s_8335);
    _s_8335 = _1423;
    // SubProg sprint pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg sprint pc: 29 op: STARTLINE (58)

    /** text.e:97			for i = 1 to length(x) do*/
    // SubProg sprint pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_x_8334)){
            _4532 = SEQ_PTR(_x_8334)->length;
    }
    else {
        _4532 = 1;
    }
    // SubProg sprint pc: 34 op: FOR_I (125)
    {
        object _i_8341;
        _i_8341 = 1;
L3: // addr: 41 pc: 34 sub: 8332 op: 125
        if (_i_8341 > _4532){
            goto L4; // [34] 98
        }
        // SubProg sprint pc: 41 op: STARTLINE (58)

        /** text.e:98				if atom(x[i]) then*/
        // SubProg sprint pc: 43 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_8334);
        _4533 = (object)*(((s1_ptr)_2)->base + _i_8341);
        // SubProg sprint pc: 47 op: IS_AN_ATOM (67)
        _4534 = IS_ATOM(_4533);
        _4533 = NOVALUE;
        // SubProg sprint pc: 50 op: IF (20)
        if (_4534 == 0)
        {
            _4534 = NOVALUE;
            goto L5; // [50] 70
        }
        else{
            _4534 = NOVALUE;
        }
        // SubProg sprint pc: 53 op: STARTLINE (58)

        /** text.e:99					s &= sprintf("%.10g", x[i])*/
        // SubProg sprint pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_8334);
        _4535 = (object)*(((s1_ptr)_2)->base + _i_8341);
        // SubProg sprint pc: 59 op: SPRINTF (53)
        _4536 = EPrintf(-9999999, _4210, _4535);
        _4535 = NOVALUE;
        // SubProg sprint pc: 63 op: CONCAT (15)
        Concat((object_ptr)&_s_8335, _s_8335, _4536);
        DeRefDS(_4536);
        _4536 = NOVALUE;
        // SubProg sprint pc: 67 op: ELSE (23)
        goto L6; // [67] 85
        // SubProg sprint pc: 69 op: NOP1 (159)
L5: // addr: 70 pc: 69 sub: 8332 op: 159
        // SubProg sprint pc: 70 op: STARTLINE (58)

        /** text.e:101					s &= sprint(x[i])*/
        // SubProg sprint pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_8334);
        _4538 = (object)*(((s1_ptr)_2)->base + _i_8341);
        // SubProg sprint pc: 76 op: PROC (27)
        Ref(_4538);
        _4539 = _17sprint(_4538);
        _4538 = NOVALUE;
        // SubProg sprint pc: 80 op: CONCAT (15)
        if (IS_SEQUENCE(_s_8335) && IS_ATOM(_4539)) {
            Ref(_4539);
            Append(&_s_8335, _s_8335, _4539);
        }
        else if (IS_ATOM(_s_8335) && IS_SEQUENCE(_4539)) {
        }
        else {
            Concat((object_ptr)&_s_8335, _s_8335, _4539);
        }
        DeRef(_4539);
        _4539 = NOVALUE;
        // SubProg sprint pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 8332 op: 159
        // SubProg sprint pc: 85 op: STARTLINE (58)

        /** text.e:103				s &= ','*/
        // SubProg sprint pc: 87 op: CONCAT (15)
        Append(&_s_8335, _s_8335, 44);
        // SubProg sprint pc: 91 op: STARTLINE (58)

        /** text.e:104			end for*/
        // SubProg sprint pc: 93 op: ENDFOR_INT_UP1 (54)
        _i_8341 = _i_8341 + 1;
        goto L3; // [93] 41
L4: // addr: 98 pc: 93 sub: 8332 op: 54
        ;
    }
    // SubProg sprint pc: 98 op: STARTLINE (58)

    /** text.e:105			if s[$] = ',' then*/
    // SubProg sprint pc: 100 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8335)){
            _4542 = SEQ_PTR(_s_8335)->length;
    }
    else {
        _4542 = 1;
    }
    // SubProg sprint pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_8335);
    _4543 = (object)*(((s1_ptr)_2)->base + _4542);
    // SubProg sprint pc: 107 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _4543, 44)){
        _4543 = NOVALUE;
        goto L7; // [107] 123
    }
    _4543 = NOVALUE;
    // SubProg sprint pc: 111 op: STARTLINE (58)

    /** text.e:106				s[$] = '}'*/
    // SubProg sprint pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8335)){
            _4545 = SEQ_PTR(_s_8335)->length;
    }
    else {
        _4545 = 1;
    }
    // SubProg sprint pc: 116 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_s_8335);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _s_8335 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _4545);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 125;
    DeRef(_1);
    // SubProg sprint pc: 120 op: ELSE (23)
    goto L8; // [120] 130
    // SubProg sprint pc: 122 op: NOP1 (159)
L7: // addr: 123 pc: 122 sub: 8332 op: 159
    // SubProg sprint pc: 123 op: STARTLINE (58)

    /** text.e:108				s &= '}'*/
    // SubProg sprint pc: 125 op: CONCAT (15)
    Append(&_s_8335, _s_8335, 125);
    // SubProg sprint pc: 129 op: NOP1 (159)
L8: // addr: 130 pc: 129 sub: 8332 op: 159
    // SubProg sprint pc: 130 op: STARTLINE (58)

    /** text.e:110			return s*/
    // SubProg sprint pc: 132 op: RETURNF (28)

// Exiting block BLOCK: sprint

// block var x_8334
    DeRef(_x_8334);
    DeRef(_4531);
    _4531 = NOVALUE;
    return _s_8335;
    // SubProg sprint pc: 136 op: NOP1 (159)
L2: // addr: 137 pc: 136 sub: 8332 op: 159
    // SubProg sprint pc: 137 op: BADRETURNF (43)
    ;
}


object _17trim(object _source_8404, object _what_8405, object _ret_index_8406)
{
    object _rpos_8407 = NOVALUE;
    object _lpos_8408 = NOVALUE;
    object _4586 = NOVALUE; // 8439 4586
// skipping _4585  name type: 0
    object _4584 = NOVALUE; // 8437 4584
// skipping _4583  name type: 0
    object _4582 = NOVALUE; // 8434 4582
// skipping _4581  name type: 0
    object _4580 = NOVALUE; // 8429 4580
// skipping _4579  name type: 0
// skipping _4578  name type: 0
    object _4577 = NOVALUE; // 8425 4577
    object _4576 = NOVALUE; // 8424 4576
// skipping _4575  name type: 0
// skipping _4574  name type: 0
// skipping _4573  name type: 0
// skipping _4572  name type: 0
    object _4571 = NOVALUE; // 8417 4571
    object _4570 = NOVALUE; // 8416 4570
// skipping _4569  name type: 0
    object _4568 = NOVALUE; // 8413 4568
// skipping _4567  name type: 0
    object _4566 = NOVALUE; // 8410 4566
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg trim pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg trim pc: 3 op: INTEGER_CHECK (96)
    // SubProg trim pc: 5 op: STARTLINE (58)

    /** text.e:243		if atom(what) then*/
    // SubProg trim pc: 7 op: IS_AN_ATOM (67)
    _4566 = 0;
    // SubProg trim pc: 10 op: IF (20)
    if (_4566 == 0)
    {
        _4566 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _4566 = NOVALUE;
    }
    // SubProg trim pc: 13 op: STARTLINE (58)

    /** text.e:244			what = {what}*/
    // SubProg trim pc: 15 op: RIGHT_BRACE_N (31)
    _0 = _what_8405;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_what_8405);
    ((intptr_t*)_2)[1] = _what_8405;
    _what_8405 = MAKE_SEQ(_1);
    DeRefDSi(_0);
    // SubProg trim pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 8402 op: 159
    // SubProg trim pc: 20 op: STARTLINE (58)

    /** text.e:247		lpos = 1*/
    // SubProg trim pc: 22 op: ASSIGN_I (113)
    _lpos_8408 = 1;
    // SubProg trim pc: 25 op: STARTLINE (58)

    /** text.e:248		while lpos <= length(source) do*/
    // SubProg trim pc: 27 op: NOP2 (110)
    // SubProg trim pc: 29 op: NOPWHILE (158)
L2: // addr: 30 pc: 29 sub: 8402 op: 158
    // SubProg trim pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_source_8404)){
            _4568 = SEQ_PTR(_source_8404)->length;
    }
    else {
        _4568 = 1;
    }
    // SubProg trim pc: 33 op: LESSEQ_IFW_I (123)
    if (_lpos_8408 > _4568)
    goto L3; // [33] 67
    // SubProg trim pc: 37 op: STARTLINE (58)

    /** text.e:249			if not find(source[lpos], what) then*/
    // SubProg trim pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_8404);
    _4570 = (object)*(((s1_ptr)_2)->base + _lpos_8408);
    // SubProg trim pc: 43 op: FIND_FROM (176)
    _4571 = find_from(_4570, _what_8405, 1);
    _4570 = NOVALUE;
    // SubProg trim pc: 48 op: NOT_IFW (108)
    if (_4571 != 0)
    goto L4; // [48] 56
    _4571 = NOVALUE;
    // SubProg trim pc: 51 op: STARTLINE (58)

    /** text.e:250				exit*/
    // SubProg trim pc: 53 op: EXIT (61)
    goto L3; // [53] 67
    // SubProg trim pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 8402 op: 159
    // SubProg trim pc: 56 op: STARTLINE (58)

    /** text.e:252			lpos += 1*/
    // SubProg trim pc: 58 op: PLUS1_I (117)
    _lpos_8408 = _lpos_8408 + 1;
    // SubProg trim pc: 62 op: STARTLINE (58)

    /** text.e:253		end while*/
    // SubProg trim pc: 64 op: ENDWHILE (22)
    goto L2; // [64] 30
    // SubProg trim pc: 66 op: NOP1 (159)
L3: // addr: 67 pc: 66 sub: 8402 op: 159
    // SubProg trim pc: 67 op: STARTLINE (58)

    /** text.e:255		rpos = length(source)*/
    // SubProg trim pc: 69 op: LENGTH (42)
    if (IS_SEQUENCE(_source_8404)){
            _rpos_8407 = SEQ_PTR(_source_8404)->length;
    }
    else {
        _rpos_8407 = 1;
    }
    // SubProg trim pc: 72 op: STARTLINE (58)

    /** text.e:256		while rpos > lpos do*/
    // SubProg trim pc: 74 op: NOP2 (110)
    // SubProg trim pc: 76 op: NOPWHILE (158)
L5: // addr: 77 pc: 76 sub: 8402 op: 158
    // SubProg trim pc: 77 op: GREATER_IFW_I (124)
    if (_rpos_8407 <= _lpos_8408)
    goto L6; // [77] 111
    // SubProg trim pc: 81 op: STARTLINE (58)

    /** text.e:257			if not find(source[rpos], what) then*/
    // SubProg trim pc: 83 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_8404);
    _4576 = (object)*(((s1_ptr)_2)->base + _rpos_8407);
    // SubProg trim pc: 87 op: FIND_FROM (176)
    _4577 = find_from(_4576, _what_8405, 1);
    _4576 = NOVALUE;
    // SubProg trim pc: 92 op: NOT_IFW (108)
    if (_4577 != 0)
    goto L7; // [92] 100
    _4577 = NOVALUE;
    // SubProg trim pc: 95 op: STARTLINE (58)

    /** text.e:258				exit*/
    // SubProg trim pc: 97 op: EXIT (61)
    goto L6; // [97] 111
    // SubProg trim pc: 99 op: NOP1 (159)
L7: // addr: 100 pc: 99 sub: 8402 op: 159
    // SubProg trim pc: 100 op: STARTLINE (58)

    /** text.e:260			rpos -= 1*/
    // SubProg trim pc: 102 op: MINUS_I (116)
    _rpos_8407 = _rpos_8407 - 1;
    // SubProg trim pc: 106 op: STARTLINE (58)

    /** text.e:261		end while*/
    // SubProg trim pc: 108 op: ENDWHILE (22)
    goto L5; // [108] 77
    // SubProg trim pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 8402 op: 159
    // SubProg trim pc: 111 op: STARTLINE (58)

    /** text.e:263		if ret_index then*/
    // SubProg trim pc: 113 op: IF (20)
    if (_ret_index_8406 == 0)
    {
        goto L8; // [113] 129
    }
    else{
    }
    // SubProg trim pc: 116 op: STARTLINE (58)

    /** text.e:264			return {lpos, rpos}*/
    // SubProg trim pc: 118 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _lpos_8408;
    ((intptr_t *)_2)[2] = _rpos_8407;
    _4580 = MAKE_SEQ(_1);
    // SubProg trim pc: 122 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var source_8404
    DeRefDS(_source_8404);

// block var what_8405
    DeRef(_what_8405);

// block var ret_index_8406

// block var rpos_8407

// block var lpos_8408
    return _4580;
    // SubProg trim pc: 126 op: ELSE (23)
    goto L9; // [126] 180
    // SubProg trim pc: 128 op: NOP1 (159)
L8: // addr: 129 pc: 128 sub: 8402 op: 159
    // SubProg trim pc: 129 op: STARTLINE (58)

    /** text.e:266			if lpos = 1 then*/
    // SubProg trim pc: 131 op: EQUALS_IFW_I (121)
    if (_lpos_8408 != 1)
    goto LA; // [131] 152
    // SubProg trim pc: 135 op: STARTLINE (58)

    /** text.e:267				if rpos = length(source) then*/
    // SubProg trim pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_source_8404)){
            _4582 = SEQ_PTR(_source_8404)->length;
    }
    else {
        _4582 = 1;
    }
    // SubProg trim pc: 140 op: EQUALS_IFW_I (121)
    if (_rpos_8407 != _4582)
    goto LB; // [140] 151
    // SubProg trim pc: 144 op: STARTLINE (58)

    /** text.e:268					return source*/
    // SubProg trim pc: 146 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var what_8405
    DeRef(_what_8405);

// block var ret_index_8406

// block var rpos_8407

// block var lpos_8408
    DeRef(_4580);
    _4580 = NOVALUE;
    return _source_8404;
    // SubProg trim pc: 150 op: NOP1 (159)
LB: // addr: 151 pc: 150 sub: 8402 op: 159
    // SubProg trim pc: 151 op: NOP1 (159)
LA: // addr: 152 pc: 151 sub: 8402 op: 159
    // SubProg trim pc: 152 op: STARTLINE (58)

    /** text.e:271			if lpos > length(source) then*/
    // SubProg trim pc: 154 op: LENGTH (42)
    if (IS_SEQUENCE(_source_8404)){
            _4584 = SEQ_PTR(_source_8404)->length;
    }
    else {
        _4584 = 1;
    }
    // SubProg trim pc: 157 op: GREATER_IFW_I (124)
    if (_lpos_8408 <= _4584)
    goto LC; // [157] 168
    // SubProg trim pc: 161 op: STARTLINE (58)

    /** text.e:272				return {}*/
    // SubProg trim pc: 163 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: trim

// block var source_8404
    DeRefDS(_source_8404);

// block var what_8405
    DeRef(_what_8405);

// block var ret_index_8406

// block var rpos_8407

// block var lpos_8408
    DeRef(_4580);
    _4580 = NOVALUE;
    return _5;
    // SubProg trim pc: 167 op: NOP1 (159)
LC: // addr: 168 pc: 167 sub: 8402 op: 159
    // SubProg trim pc: 168 op: STARTLINE (58)

    /** text.e:274			return source[lpos..rpos]*/
    // SubProg trim pc: 170 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4586;
    RHS_Slice(_source_8404, _lpos_8408, _rpos_8407);
    // SubProg trim pc: 175 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var source_8404
    DeRefDS(_source_8404);

// block var what_8405
    DeRef(_what_8405);

// block var ret_index_8406

// block var rpos_8407

// block var lpos_8408
    DeRef(_4580);
    _4580 = NOVALUE;
    return _4586;
    // SubProg trim pc: 179 op: NOP1 (159)
L9: // addr: 180 pc: 179 sub: 8402 op: 159
    // SubProg trim pc: 180 op: BADRETURNF (43)
    ;
}


object _17lower(object _x_8596)
{
    object _4698 = NOVALUE; // 8605 4698
    object _4697 = NOVALUE; // 8604 4697
    object _4696 = NOVALUE; // 8603 4696
    object _4695 = NOVALUE; // 8602 4695
    object _4694 = NOVALUE; // 8601 4694
// skipping _4693  name type: 0
// skipping _4692  name type: 0
    object _4691 = NOVALUE; // 8598 4691
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lower pc: 1 op: STARTLINE (58)

    /** text.e:535		if length(lower_case_SET) != 0 then*/
    // SubProg lower pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg lower pc: 5 op: LENGTH (42)
    // Known sequence length:
    _4691 = 0;
    // SubProg lower pc: 8 op: NOTEQ_IFW_I (122)
    // SubProg lower pc: 30 op: STARTLINE (58)

    /** text.e:539		ifdef WINDOWS then*/
    // SubProg lower pc: 32 op: STARTLINE (58)

    /** text.e:542			return x + (x >= 'A' and x <= 'Z') * TO_LOWER*/
    // SubProg lower pc: 34 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_8596)) {
        _4694 = (_x_8596 >= 65);
    }
    else {
        _4694 = binary_op(GREATEREQ, _x_8596, 65);
    }
    // SubProg lower pc: 38 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_8596)) {
        _4695 = (_x_8596 <= 90);
    }
    else {
        _4695 = binary_op(LESSEQ, _x_8596, 90);
    }
    // SubProg lower pc: 42 op: AND (8)
    if (IS_ATOM_INT(_4694) && IS_ATOM_INT(_4695)) {
        _4696 = (_4694 != 0 && _4695 != 0);
    }
    else {
        _4696 = binary_op(AND, _4694, _4695);
    }
    DeRef(_4694);
    _4694 = NOVALUE;
    DeRef(_4695);
    _4695 = NOVALUE;
    // SubProg lower pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg lower pc: 48 op: MULTIPLY (13)
    if (IS_ATOM_INT(_4696)) {
        if (_4696 == (short)_4696){
            _4697 = _4696 * 32;
        }
        else{
            _4697 = NewDouble(_4696 * (eudouble)32);
        }
    }
    else {
        _4697 = binary_op(MULTIPLY, _4696, 32);
    }
    DeRef(_4696);
    _4696 = NOVALUE;
    // SubProg lower pc: 52 op: PLUS (11)
    if (IS_ATOM_INT(_x_8596) && IS_ATOM_INT(_4697)) {
        _4698 = _x_8596 + _4697;
        if ((object)((uintptr_t)_4698 + (uintptr_t)HIGH_BITS) >= 0){
            _4698 = NewDouble((eudouble)_4698);
        }
    }
    else {
        _4698 = binary_op(PLUS, _x_8596, _4697);
    }
    DeRef(_4697);
    _4697 = NOVALUE;
    // SubProg lower pc: 56 op: RETURNF (28)

// Exiting block BLOCK: lower

// block var x_8596
    DeRef(_x_8596);
    return _4698;
    // SubProg lower pc: 60 op: BADRETURNF (43)
    ;
}


object _17upper(object _x_8608)
{
    object _4706 = NOVALUE; // 8617 4706
    object _4705 = NOVALUE; // 8616 4705
    object _4704 = NOVALUE; // 8615 4704
    object _4703 = NOVALUE; // 8614 4703
    object _4702 = NOVALUE; // 8613 4702
// skipping _4701  name type: 0
// skipping _4700  name type: 0
    object _4699 = NOVALUE; // 8610 4699
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg upper pc: 1 op: STARTLINE (58)

    /** text.e:581		if length(upper_case_SET) != 0 then*/
    // SubProg upper pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg upper pc: 5 op: LENGTH (42)
    // Known sequence length:
    _4699 = 0;
    // SubProg upper pc: 8 op: NOTEQ_IFW_I (122)
    // SubProg upper pc: 30 op: STARTLINE (58)

    /** text.e:584		ifdef WINDOWS then*/
    // SubProg upper pc: 32 op: STARTLINE (58)

    /** text.e:587			return x - (x >= 'a' and x <= 'z') * TO_LOWER*/
    // SubProg upper pc: 34 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_8608)) {
        _4702 = (_x_8608 >= 97);
    }
    else {
        _4702 = binary_op(GREATEREQ, _x_8608, 97);
    }
    // SubProg upper pc: 38 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_8608)) {
        _4703 = (_x_8608 <= 122);
    }
    else {
        _4703 = binary_op(LESSEQ, _x_8608, 122);
    }
    // SubProg upper pc: 42 op: AND (8)
    if (IS_ATOM_INT(_4702) && IS_ATOM_INT(_4703)) {
        _4704 = (_4702 != 0 && _4703 != 0);
    }
    else {
        _4704 = binary_op(AND, _4702, _4703);
    }
    DeRef(_4702);
    _4702 = NOVALUE;
    DeRef(_4703);
    _4703 = NOVALUE;
    // SubProg upper pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg upper pc: 48 op: MULTIPLY (13)
    if (IS_ATOM_INT(_4704)) {
        if (_4704 == (short)_4704){
            _4705 = _4704 * 32;
        }
        else{
            _4705 = NewDouble(_4704 * (eudouble)32);
        }
    }
    else {
        _4705 = binary_op(MULTIPLY, _4704, 32);
    }
    DeRef(_4704);
    _4704 = NOVALUE;
    // SubProg upper pc: 52 op: MINUS (10)
    if (IS_ATOM_INT(_x_8608) && IS_ATOM_INT(_4705)) {
        _4706 = _x_8608 - _4705;
        if ((object)((uintptr_t)_4706 +(uintptr_t) HIGH_BITS) >= 0){
            _4706 = NewDouble((eudouble)_4706);
        }
    }
    else {
        _4706 = binary_op(MINUS, _x_8608, _4705);
    }
    DeRef(_4705);
    _4705 = NOVALUE;
    // SubProg upper pc: 56 op: RETURNF (28)

// Exiting block BLOCK: upper

// block var x_8608
    DeRef(_x_8608);
    return _4706;
    // SubProg upper pc: 60 op: BADRETURNF (43)
    ;
}


object _17proper(object _x_8620)
{
    object _pos_8621 = NOVALUE;
    object _inword_8622 = NOVALUE;
    object _convert_8623 = NOVALUE;
    object _res_8624 = NOVALUE;
    object _4736 = NOVALUE; // 8677 4736
    object _4735 = NOVALUE; // 8676 4735
    object _4734 = NOVALUE; // 8675 4734
    object _4733 = NOVALUE; // 8674 4733
    object _4732 = NOVALUE; // 8672 4732
    object _4731 = NOVALUE; // 8671 4731
    object _4730 = NOVALUE; // 8670 4730
    object _4729 = NOVALUE; // 8668 4729
    object _4728 = NOVALUE; // 8662 4728
    object _4727 = NOVALUE; // 8661 4727
// skipping _4726  name type: 0
    object _4725 = NOVALUE; // 8657 4725
    object _4724 = NOVALUE; // 8656 4724
// skipping _4723  name type: 0
// skipping _4721  name type: 0
// skipping _4720  name type: 0
    object _4719 = NOVALUE; // 8646 4719
// skipping _4718  name type: 0
// skipping _4717  name type: 0
    object _4716 = NOVALUE; // 8641 4716
// skipping _4715  name type: 0
// skipping _4714  name type: 0
    object _4713 = NOVALUE; // 8636 4713
// skipping _4712  name type: 0
// skipping _4711  name type: 0
    object _4710 = NOVALUE; // 8632 4710
    object _4709 = NOVALUE; // 8630 4709
    object _4708 = NOVALUE; // 8629 4708
    object _4707 = NOVALUE; // 8627 4707
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg proper pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg proper pc: 3 op: STARTLINE (58)

    /** text.e:633		inword = 0	-- Initially not in a word*/
    // SubProg proper pc: 5 op: ASSIGN_I (113)
    _inword_8622 = 0;
    // SubProg proper pc: 8 op: STARTLINE (58)

    /** text.e:634		convert = 1	-- Initially convert text*/
    // SubProg proper pc: 10 op: ASSIGN_I (113)
    _convert_8623 = 1;
    // SubProg proper pc: 13 op: STARTLINE (58)

    /** text.e:635		res = x		-- Work on a copy of the original, in case we need to restore.*/
    // SubProg proper pc: 15 op: ASSIGN (18)
    RefDS(_x_8620);
    DeRef(_res_8624);
    _res_8624 = _x_8620;
    // SubProg proper pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg proper pc: 20 op: STARTLINE (58)

    /** text.e:636		for i = 1 to length(res) do*/
    // SubProg proper pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_res_8624)){
            _4707 = SEQ_PTR(_res_8624)->length;
    }
    else {
        _4707 = 1;
    }
    // SubProg proper pc: 25 op: FOR_I (125)
    {
        object _i_8626;
        _i_8626 = 1;
L1: // addr: 32 pc: 25 sub: 8618 op: 125
        if (_i_8626 > _4707){
            goto L2; // [25] 298
        }
        // SubProg proper pc: 32 op: STARTLINE (58)

        /** text.e:637			if integer(res[i]) then*/
        // SubProg proper pc: 34 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4708 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 38 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_4708))
        _4709 = 1;
        else if (IS_ATOM_DBL(_4708))
        _4709 = IS_ATOM_INT(DoubleToInt(_4708));
        else
        _4709 = 0;
        _4708 = NOVALUE;
        // SubProg proper pc: 41 op: IF (20)
        if (_4709 == 0)
        {
            _4709 = NOVALUE;
            goto L3; // [41] 209
        }
        else{
            _4709 = NOVALUE;
        }
        // SubProg proper pc: 44 op: STARTLINE (58)

        /** text.e:638				if convert then*/
        // SubProg proper pc: 46 op: IF (20)
        if (_convert_8623 == 0)
        {
            goto L4; // [46] 291
        }
        else{
        }
        // SubProg proper pc: 49 op: STARTLINE (58)

        /** text.e:640					pos = types:t_upper(res[i])*/
        // SubProg proper pc: 51 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4710 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 55 op: PROC (27)
        Ref(_4710);
        _pos_8621 = _13t_upper(_4710);
        _4710 = NOVALUE;
        // SubProg proper pc: 59 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_8621)) {
            _1 = (object)(DBL_PTR(_pos_8621)->dbl);
            DeRefDS(_pos_8621);
            _pos_8621 = _1;
        }
        // SubProg proper pc: 61 op: STARTLINE (58)

        /** text.e:641					if pos = 0 then*/
        // SubProg proper pc: 63 op: EQUALS_IFW_I (121)
        if (_pos_8621 != 0)
        goto L5; // [63] 175
        // SubProg proper pc: 67 op: STARTLINE (58)

        /** text.e:643						pos = types:t_lower(res[i])*/
        // SubProg proper pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4713 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 73 op: PROC (27)
        Ref(_4713);
        _pos_8621 = _13t_lower(_4713);
        _4713 = NOVALUE;
        // SubProg proper pc: 77 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_8621)) {
            _1 = (object)(DBL_PTR(_pos_8621)->dbl);
            DeRefDS(_pos_8621);
            _pos_8621 = _1;
        }
        // SubProg proper pc: 79 op: STARTLINE (58)

        /** text.e:644						if pos = 0 then*/
        // SubProg proper pc: 81 op: EQUALS_IFW_I (121)
        if (_pos_8621 != 0)
        goto L6; // [81] 138
        // SubProg proper pc: 85 op: STARTLINE (58)

        /** text.e:647							pos = t_digit(res[i])*/
        // SubProg proper pc: 87 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4716 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 91 op: PROC (27)
        Ref(_4716);
        _pos_8621 = _13t_digit(_4716);
        _4716 = NOVALUE;
        // SubProg proper pc: 95 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_8621)) {
            _1 = (object)(DBL_PTR(_pos_8621)->dbl);
            DeRefDS(_pos_8621);
            _pos_8621 = _1;
        }
        // SubProg proper pc: 97 op: STARTLINE (58)

        /** text.e:648							if pos = 0 then*/
        // SubProg proper pc: 99 op: EQUALS_IFW_I (121)
        if (_pos_8621 != 0)
        goto L4; // [99] 291
        // SubProg proper pc: 103 op: STARTLINE (58)

        /** text.e:650								pos = t_specword(res[i])*/
        // SubProg proper pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4719 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 109 op: PROC (27)
        Ref(_4719);
        _pos_8621 = _13t_specword(_4719);
        _4719 = NOVALUE;
        // SubProg proper pc: 113 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_8621)) {
            _1 = (object)(DBL_PTR(_pos_8621)->dbl);
            DeRefDS(_pos_8621);
            _pos_8621 = _1;
        }
        // SubProg proper pc: 115 op: STARTLINE (58)

        /** text.e:651								if pos then*/
        // SubProg proper pc: 117 op: IF (20)
        if (_pos_8621 == 0)
        {
            goto L7; // [117] 128
        }
        else{
        }
        // SubProg proper pc: 120 op: STARTLINE (58)

        /** text.e:652									inword = 1*/
        // SubProg proper pc: 122 op: ASSIGN_I (113)
        _inword_8622 = 1;
        // SubProg proper pc: 125 op: ELSE (23)
        goto L4; // [125] 291
        // SubProg proper pc: 127 op: NOP1 (159)
L7: // addr: 128 pc: 127 sub: 8618 op: 159
        // SubProg proper pc: 128 op: STARTLINE (58)

        /** text.e:654									inword = 0*/
        // SubProg proper pc: 130 op: ASSIGN_I (113)
        _inword_8622 = 0;
        // SubProg proper pc: 133 op: NOP1 (159)
        // SubProg proper pc: 134 op: NOP1 (159)
        // SubProg proper pc: 135 op: ELSE (23)
        goto L4; // [135] 291
        // SubProg proper pc: 137 op: NOP1 (159)
L6: // addr: 138 pc: 137 sub: 8618 op: 159
        // SubProg proper pc: 138 op: STARTLINE (58)

        /** text.e:658							if inword = 0 then*/
        // SubProg proper pc: 140 op: EQUALS_IFW_I (121)
        if (_inword_8622 != 0)
        goto L4; // [140] 291
        // SubProg proper pc: 144 op: STARTLINE (58)

        /** text.e:660								if pos <= 26 then*/
        // SubProg proper pc: 146 op: LESSEQ_IFW_I (123)
        if (_pos_8621 > 26)
        goto L8; // [146] 165
        // SubProg proper pc: 150 op: STARTLINE (58)

        /** text.e:661									res[i] = upper(res[i]) -- Convert to uppercase*/
        // SubProg proper pc: 152 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4724 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 156 op: PROC (27)
        Ref(_4724);
        _4725 = _17upper(_4724);
        _4724 = NOVALUE;
        // SubProg proper pc: 160 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_8624);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_8624 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_8626);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4725;
        if( _1 != _4725 ){
            DeRef(_1);
        }
        _4725 = NOVALUE;
        // SubProg proper pc: 164 op: NOP1 (159)
L8: // addr: 165 pc: 164 sub: 8618 op: 159
        // SubProg proper pc: 165 op: STARTLINE (58)

        /** text.e:663								inword = 1	-- now we are in a word*/
        // SubProg proper pc: 167 op: ASSIGN_I (113)
        _inword_8622 = 1;
        // SubProg proper pc: 170 op: NOP1 (159)
        // SubProg proper pc: 171 op: NOP1 (159)
        // SubProg proper pc: 172 op: ELSE (23)
        goto L4; // [172] 291
        // SubProg proper pc: 174 op: NOP1 (159)
L5: // addr: 175 pc: 174 sub: 8618 op: 159
        // SubProg proper pc: 175 op: STARTLINE (58)

        /** text.e:667						if inword = 1 then*/
        // SubProg proper pc: 177 op: EQUALS_IFW_I (121)
        if (_inword_8622 != 1)
        goto L9; // [177] 198
        // SubProg proper pc: 181 op: STARTLINE (58)

        /** text.e:669							res[i] = lower(res[i]) -- Convert to lowercase*/
        // SubProg proper pc: 183 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4727 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 187 op: PROC (27)
        Ref(_4727);
        _4728 = _17lower(_4727);
        _4727 = NOVALUE;
        // SubProg proper pc: 191 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_8624);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_8624 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_8626);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4728;
        if( _1 != _4728 ){
            DeRef(_1);
        }
        _4728 = NOVALUE;
        // SubProg proper pc: 195 op: ELSE (23)
        goto L4; // [195] 291
        // SubProg proper pc: 197 op: NOP1 (159)
L9: // addr: 198 pc: 197 sub: 8618 op: 159
        // SubProg proper pc: 198 op: STARTLINE (58)

        /** text.e:671							inword = 1	-- now we are in a word*/
        // SubProg proper pc: 200 op: ASSIGN_I (113)
        _inword_8622 = 1;
        // SubProg proper pc: 203 op: NOP1 (159)
        // SubProg proper pc: 204 op: NOP1 (159)
        // SubProg proper pc: 205 op: NOP1 (159)
        // SubProg proper pc: 206 op: ELSE (23)
        goto L4; // [206] 291
        // SubProg proper pc: 208 op: NOP1 (159)
L3: // addr: 209 pc: 208 sub: 8618 op: 159
        // SubProg proper pc: 209 op: STARTLINE (58)

        /** text.e:678				if convert then*/
        // SubProg proper pc: 211 op: IF (20)
        if (_convert_8623 == 0)
        {
            goto LA; // [211] 263
        }
        else{
        }
        // SubProg proper pc: 214 op: STARTLINE (58)

        /** text.e:680					for j = 1 to i-1 do*/
        // SubProg proper pc: 216 op: MINUS (10)
        _4729 = _i_8626 - 1;
        // SubProg proper pc: 220 op: FOR (21)
        {
            object _j_8667;
            _j_8667 = 1;
LB: // addr: 227 pc: 220 sub: 8618 op: 21
            if (_j_8667 > _4729){
                goto LC; // [220] 257
            }
            // SubProg proper pc: 227 op: STARTLINE (58)

            /** text.e:681						if atom(x[j]) then*/
            // SubProg proper pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_x_8620);
            _4730 = (object)*(((s1_ptr)_2)->base + _j_8667);
            // SubProg proper pc: 233 op: IS_AN_ATOM (67)
            _4731 = IS_ATOM(_4730);
            _4730 = NOVALUE;
            // SubProg proper pc: 236 op: IF (20)
            if (_4731 == 0)
            {
                _4731 = NOVALUE;
                goto LD; // [236] 250
            }
            else{
                _4731 = NOVALUE;
            }
            // SubProg proper pc: 239 op: STARTLINE (58)

            /** text.e:682							res[j] = x[j]*/
            // SubProg proper pc: 241 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_x_8620);
            _4732 = (object)*(((s1_ptr)_2)->base + _j_8667);
            // SubProg proper pc: 245 op: ASSIGN_SUBS (16)
            Ref(_4732);
            _2 = (object)SEQ_PTR(_res_8624);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _res_8624 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _j_8667);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _4732;
            if( _1 != _4732 ){
                DeRef(_1);
            }
            _4732 = NOVALUE;
            // SubProg proper pc: 249 op: NOP1 (159)
LD: // addr: 250 pc: 249 sub: 8618 op: 159
            // SubProg proper pc: 250 op: STARTLINE (58)

            /** text.e:684					end for*/
            // SubProg proper pc: 252 op: ENDFOR_INT_UP1 (54)
            _j_8667 = _j_8667 + 1;
            goto LB; // [252] 227
LC: // addr: 257 pc: 252 sub: 8618 op: 54
            ;
        }
        // SubProg proper pc: 257 op: STARTLINE (58)

        /** text.e:686					convert = 0*/
        // SubProg proper pc: 259 op: ASSIGN_I (113)
        _convert_8623 = 0;
        // SubProg proper pc: 262 op: NOP1 (159)
LA: // addr: 263 pc: 262 sub: 8618 op: 159
        // SubProg proper pc: 263 op: STARTLINE (58)

        /** text.e:689				if sequence(res[i]) then*/
        // SubProg proper pc: 265 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4733 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 269 op: IS_A_SEQUENCE (68)
        _4734 = IS_SEQUENCE(_4733);
        _4733 = NOVALUE;
        // SubProg proper pc: 272 op: IF (20)
        if (_4734 == 0)
        {
            _4734 = NOVALUE;
            goto LE; // [272] 290
        }
        else{
            _4734 = NOVALUE;
        }
        // SubProg proper pc: 275 op: STARTLINE (58)

        /** text.e:690					res[i] = proper(res[i])	-- recursive conversion*/
        // SubProg proper pc: 277 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_8624);
        _4735 = (object)*(((s1_ptr)_2)->base + _i_8626);
        // SubProg proper pc: 281 op: PROC (27)
        Ref(_4735);
        _4736 = _17proper(_4735);
        _4735 = NOVALUE;
        // SubProg proper pc: 285 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_8624);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_8624 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_8626);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4736;
        if( _1 != _4736 ){
            DeRef(_1);
        }
        _4736 = NOVALUE;
        // SubProg proper pc: 289 op: NOP1 (159)
LE: // addr: 290 pc: 289 sub: 8618 op: 159
        // SubProg proper pc: 290 op: NOP1 (159)
L4: // addr: 291 pc: 290 sub: 8618 op: 159
        // SubProg proper pc: 291 op: STARTLINE (58)

        /** text.e:693		end for*/
        // SubProg proper pc: 293 op: ENDFOR_INT_UP1 (54)
        _i_8626 = _i_8626 + 1;
        goto L1; // [293] 32
L2: // addr: 298 pc: 293 sub: 8618 op: 54
        ;
    }
    // SubProg proper pc: 298 op: STARTLINE (58)

    /** text.e:694		return res*/
    // SubProg proper pc: 300 op: RETURNF (28)

// Exiting block BLOCK: proper

// block var x_8620
    DeRefDS(_x_8620);

// block var pos_8621

// block var inword_8622

// block var convert_8623
    DeRef(_4729);
    _4729 = NOVALUE;
    return _res_8624;
    // SubProg proper pc: 304 op: BADRETURNF (43)
    ;
}


object _17quote(object _text_in_8943, object _quote_pair_8944, object _esc_8946, object _sp_8948)
{
    object _5007 = NOVALUE; // 9058 5007
    object _5006 = NOVALUE; // 9057 5006
    object _5005 = NOVALUE; // 9056 5005
// skipping _5004  name type: 0
    object _5003 = NOVALUE; // 9054 5003
    object _5002 = NOVALUE; // 9053 5002
    object _5001 = NOVALUE; // 9052 5001
// skipping _5000  name type: 0
    object _4999 = NOVALUE; // 9050 4999
    object _4998 = NOVALUE; // 9049 4998
    object _4997 = NOVALUE; // 9048 4997
    object _4996 = NOVALUE; // 9047 4996
    object _4995 = NOVALUE; // 9046 4995
    object _4994 = NOVALUE; // 9045 4994
    object _4993 = NOVALUE; // 9044 4993
    object _4992 = NOVALUE; // 9042 4992
    object _4991 = NOVALUE; // 9041 4991
// skipping _4990  name type: 0
    object _4989 = NOVALUE; // 9038 4989
    object _4988 = NOVALUE; // 9037 4988
    object _4987 = NOVALUE; // 9036 4987
// skipping _4986  name type: 0
    object _4985 = NOVALUE; // 9033 4985
    object _4984 = NOVALUE; // 9032 4984
    object _4983 = NOVALUE; // 9031 4983
    object _4982 = NOVALUE; // 9030 4982
    object _4981 = NOVALUE; // 9029 4981
    object _4980 = NOVALUE; // 9028 4980
    object _4979 = NOVALUE; // 9027 4979
    object _4978 = NOVALUE; // 9025 4978
    object _4977 = NOVALUE; // 9024 4977
// skipping _4976  name type: 0
    object _4975 = NOVALUE; // 9022 4975
    object _4974 = NOVALUE; // 9021 4974
// skipping _4973  name type: 0
    object _4972 = NOVALUE; // 9017 4972
    object _4971 = NOVALUE; // 9016 4971
    object _4970 = NOVALUE; // 9015 4970
// skipping _4969  name type: 0
    object _4968 = NOVALUE; // 9013 4968
    object _4967 = NOVALUE; // 9012 4967
    object _4966 = NOVALUE; // 9011 4966
    object _4965 = NOVALUE; // 9010 4965
    object _4964 = NOVALUE; // 9008 4964
    object _4963 = NOVALUE; // 9007 4963
    object _4962 = NOVALUE; // 9005 4962
    object _4961 = NOVALUE; // 9004 4961
    object _4960 = NOVALUE; // 9003 4960
    object _4959 = NOVALUE; // 9001 4959
    object _4958 = NOVALUE; // 9000 4958
    object _4957 = NOVALUE; // 8999 4957
    object _4956 = NOVALUE; // 8998 4956
    object _4955 = NOVALUE; // 8996 4955
    object _4954 = NOVALUE; // 8995 4954
    object _4953 = NOVALUE; // 8994 4953
    object _4952 = NOVALUE; // 8993 4952
// skipping _4951  name type: 0
// skipping _4950  name type: 0
    object _4949 = NOVALUE; // 8988 4949
    object _4948 = NOVALUE; // 8986 4948
    object _4947 = NOVALUE; // 8985 4947
    object _4946 = NOVALUE; // 8983 4946
    object _4945 = NOVALUE; // 8980 4945
    object _4944 = NOVALUE; // 8979 4944
    object _4943 = NOVALUE; // 8978 4943
    object _4942 = NOVALUE; // 8977 4942
    object _4941 = NOVALUE; // 8976 4941
    object _4940 = NOVALUE; // 8975 4940
    object _4939 = NOVALUE; // 8974 4939
    object _4938 = NOVALUE; // 8972 4938
    object _4937 = NOVALUE; // 8969 4937
    object _4936 = NOVALUE; // 8968 4936
// skipping _4935  name type: 0
// skipping _4934  name type: 0
    object _4933 = NOVALUE; // 8964 4933
// skipping _4932  name type: 0
    object _4931 = NOVALUE; // 8961 4931
    object _4930 = NOVALUE; // 8960 4930
// skipping _4929  name type: 0
    object _4928 = NOVALUE; // 8958 4928
// skipping _4927  name type: 0
    object _4926 = NOVALUE; // 8955 4926
    object _4925 = NOVALUE; // 8954 4925
    object _4924 = NOVALUE; // 8953 4924
// skipping _4923  name type: 0
    object _4922 = NOVALUE; // 8950 4922
// skipping _4921  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg quote pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 3 op: INTEGER_CHECK (96)
    // SubProg quote pc: 5 op: STARTLINE (58)

    /** text.e:1118		if length(text_in) = 0 then*/
    // SubProg quote pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_8943)){
            _4922 = SEQ_PTR(_text_in_8943)->length;
    }
    else {
        _4922 = 1;
    }
    // SubProg quote pc: 10 op: EQUALS_IFW_I (121)
    if (_4922 != 0)
    goto L1; // [10] 21
    // SubProg quote pc: 14 op: STARTLINE (58)

    /** text.e:1119			return text_in*/
    // SubProg quote pc: 16 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_8944
    DeRef(_quote_pair_8944);

// block var esc_8946

// block var sp_8948
    DeRef(_sp_8948);
    return _text_in_8943;
    // SubProg quote pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 8941 op: 159
    // SubProg quote pc: 21 op: STARTLINE (58)

    /** text.e:1122		if atom(quote_pair) then*/
    // SubProg quote pc: 23 op: IS_AN_ATOM (67)
    _4924 = IS_ATOM(_quote_pair_8944);
    // SubProg quote pc: 26 op: IF (20)
    if (_4924 == 0)
    {
        _4924 = NOVALUE;
        goto L2; // [26] 46
    }
    else{
        _4924 = NOVALUE;
    }
    // SubProg quote pc: 29 op: STARTLINE (58)

    /** text.e:1123			quote_pair = {{quote_pair}, {quote_pair}}*/
    // SubProg quote pc: 31 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_8944);
    ((intptr_t*)_2)[1] = _quote_pair_8944;
    _4925 = MAKE_SEQ(_1);
    // SubProg quote pc: 35 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_8944);
    ((intptr_t*)_2)[1] = _quote_pair_8944;
    _4926 = MAKE_SEQ(_1);
    // SubProg quote pc: 39 op: RIGHT_BRACE_2 (85)
    DeRef(_quote_pair_8944);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4925;
    ((intptr_t *)_2)[2] = _4926;
    _quote_pair_8944 = MAKE_SEQ(_1);
    _4926 = NOVALUE;
    _4925 = NOVALUE;
    // SubProg quote pc: 43 op: ELSE (23)
    goto L3; // [43] 89
    // SubProg quote pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 8941 op: 159
    // SubProg quote pc: 46 op: STARTLINE (58)

    /** text.e:1124		elsif length(quote_pair) = 1 then*/
    // SubProg quote pc: 48 op: LENGTH (42)
    if (IS_SEQUENCE(_quote_pair_8944)){
            _4928 = SEQ_PTR(_quote_pair_8944)->length;
    }
    else {
        _4928 = 1;
    }
    // SubProg quote pc: 51 op: EQUALS_IFW_I (121)
    if (_4928 != 1)
    goto L4; // [51] 72
    // SubProg quote pc: 55 op: STARTLINE (58)

    /** text.e:1125			quote_pair = {quote_pair[1], quote_pair[1]}*/
    // SubProg quote pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4930 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4931 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 65 op: RIGHT_BRACE_2 (85)
    Ref(_4931);
    Ref(_4930);
    DeRef(_quote_pair_8944);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4930;
    ((intptr_t *)_2)[2] = _4931;
    _quote_pair_8944 = MAKE_SEQ(_1);
    _4931 = NOVALUE;
    _4930 = NOVALUE;
    // SubProg quote pc: 69 op: ELSE (23)
    goto L3; // [69] 89
    // SubProg quote pc: 71 op: NOP1 (159)
L4: // addr: 72 pc: 71 sub: 8941 op: 159
    // SubProg quote pc: 72 op: STARTLINE (58)

    /** text.e:1126		elsif length(quote_pair) = 0 then*/
    // SubProg quote pc: 74 op: LENGTH (42)
    if (IS_SEQUENCE(_quote_pair_8944)){
            _4933 = SEQ_PTR(_quote_pair_8944)->length;
    }
    else {
        _4933 = 1;
    }
    // SubProg quote pc: 77 op: EQUALS_IFW_I (121)
    if (_4933 != 0)
    goto L5; // [77] 88
    // SubProg quote pc: 81 op: STARTLINE (58)

    /** text.e:1127			quote_pair = {"\"", "\""}*/
    // SubProg quote pc: 83 op: RIGHT_BRACE_2 (85)
    RefDS(_4914);
    RefDS(_4914);
    DeRef(_quote_pair_8944);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4914;
    ((intptr_t *)_2)[2] = _4914;
    _quote_pair_8944 = MAKE_SEQ(_1);
    // SubProg quote pc: 87 op: NOP1 (159)
L5: // addr: 88 pc: 87 sub: 8941 op: 159
    // SubProg quote pc: 88 op: NOP1 (159)
L3: // addr: 89 pc: 88 sub: 8941 op: 159
    // SubProg quote pc: 89 op: STARTLINE (58)

    /** text.e:1130		if sequence(text_in[1]) then*/
    // SubProg quote pc: 91 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_text_in_8943);
    _4936 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 95 op: IS_A_SEQUENCE (68)
    _4937 = IS_SEQUENCE(_4936);
    _4936 = NOVALUE;
    // SubProg quote pc: 98 op: IF (20)
    if (_4937 == 0)
    {
        _4937 = NOVALUE;
        goto L6; // [98] 166
    }
    else{
        _4937 = NOVALUE;
    }
    // SubProg quote pc: 101 op: STARTLINE (58)

    /** text.e:1131			for i = 1 to length(text_in) do*/
    // SubProg quote pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_8943)){
            _4938 = SEQ_PTR(_text_in_8943)->length;
    }
    else {
        _4938 = 1;
    }
    // SubProg quote pc: 106 op: FOR_I (125)
    {
        object _i_8971;
        _i_8971 = 1;
L7: // addr: 113 pc: 106 sub: 8941 op: 125
        if (_i_8971 > _4938){
            goto L8; // [106] 159
        }
        // SubProg quote pc: 113 op: STARTLINE (58)

        /** text.e:1132				if sequence(text_in[i]) then*/
        // SubProg quote pc: 115 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_8943);
        _4939 = (object)*(((s1_ptr)_2)->base + _i_8971);
        // SubProg quote pc: 119 op: IS_A_SEQUENCE (68)
        _4940 = IS_SEQUENCE(_4939);
        _4939 = NOVALUE;
        // SubProg quote pc: 122 op: IF (20)
        if (_4940 == 0)
        {
            _4940 = NOVALUE;
            goto L9; // [122] 152
        }
        else{
            _4940 = NOVALUE;
        }
        // SubProg quote pc: 125 op: STARTLINE (58)

        /** text.e:1133					text_in[i] = quote(text_in[i], quote_pair, esc, sp)*/
        // SubProg quote pc: 127 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_8943);
        _4941 = (object)*(((s1_ptr)_2)->base + _i_8971);
        // SubProg quote pc: 131 op: ASSIGN (18)
        Ref(_quote_pair_8944);
        DeRef(_4942);
        _4942 = _quote_pair_8944;
        // SubProg quote pc: 134 op: ASSIGN (18)
        DeRef(_4943);
        _4943 = _esc_8946;
        // SubProg quote pc: 137 op: ASSIGN (18)
        Ref(_sp_8948);
        DeRef(_4944);
        _4944 = _sp_8948;
        // SubProg quote pc: 140 op: PROC (27)
        Ref(_4941);
        _4945 = _17quote(_4941, _4942, _4943, _4944);
        _4941 = NOVALUE;
        _4942 = NOVALUE;
        _4943 = NOVALUE;
        _4944 = NOVALUE;
        // SubProg quote pc: 147 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_text_in_8943);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _text_in_8943 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_8971);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4945;
        if( _1 != _4945 ){
            DeRef(_1);
        }
        _4945 = NOVALUE;
        // SubProg quote pc: 151 op: NOP1 (159)
L9: // addr: 152 pc: 151 sub: 8941 op: 159
        // SubProg quote pc: 152 op: STARTLINE (58)

        /** text.e:1135			end for*/
        // SubProg quote pc: 154 op: ENDFOR_INT_UP1 (54)
        _i_8971 = _i_8971 + 1;
        goto L7; // [154] 113
L8: // addr: 159 pc: 154 sub: 8941 op: 54
        ;
    }
    // SubProg quote pc: 159 op: STARTLINE (58)

    /** text.e:1137			return text_in*/
    // SubProg quote pc: 161 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_8944
    DeRef(_quote_pair_8944);

// block var esc_8946

// block var sp_8948
    DeRef(_sp_8948);
    return _text_in_8943;
    // SubProg quote pc: 165 op: NOP1 (159)
L6: // addr: 166 pc: 165 sub: 8941 op: 159
    // SubProg quote pc: 166 op: STARTLINE (58)

    /** text.e:1141		for i = 1 to length(sp) do*/
    // SubProg quote pc: 168 op: LENGTH (42)
    if (IS_SEQUENCE(_sp_8948)){
            _4946 = SEQ_PTR(_sp_8948)->length;
    }
    else {
        _4946 = 1;
    }
    // SubProg quote pc: 171 op: FOR_I (125)
    {
        object _i_8982;
        _i_8982 = 1;
LA: // addr: 178 pc: 171 sub: 8941 op: 125
        if (_i_8982 > _4946){
            goto LB; // [171] 220
        }
        // SubProg quote pc: 178 op: STARTLINE (58)

        /** text.e:1142			if find(sp[i], text_in) then*/
        // SubProg quote pc: 180 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_sp_8948);
        _4947 = (object)*(((s1_ptr)_2)->base + _i_8982);
        // SubProg quote pc: 184 op: FIND_FROM (176)
        _4948 = find_from(_4947, _text_in_8943, 1);
        _4947 = NOVALUE;
        // SubProg quote pc: 189 op: IF (20)
        if (_4948 == 0)
        {
            _4948 = NOVALUE;
            goto LC; // [189] 197
        }
        else{
            _4948 = NOVALUE;
        }
        // SubProg quote pc: 192 op: STARTLINE (58)

        /** text.e:1143				exit*/
        // SubProg quote pc: 194 op: EXIT (61)
        goto LB; // [194] 220
        // SubProg quote pc: 196 op: NOP1 (159)
LC: // addr: 197 pc: 196 sub: 8941 op: 159
        // SubProg quote pc: 197 op: STARTLINE (58)

        /** text.e:1146			if i = length(sp) then*/
        // SubProg quote pc: 199 op: LENGTH (42)
        if (IS_SEQUENCE(_sp_8948)){
                _4949 = SEQ_PTR(_sp_8948)->length;
        }
        else {
            _4949 = 1;
        }
        // SubProg quote pc: 202 op: EQUALS_IFW_I (121)
        if (_i_8982 != _4949)
        goto LD; // [202] 213
        // SubProg quote pc: 206 op: STARTLINE (58)

        /** text.e:1148				return text_in*/
        // SubProg quote pc: 208 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_8944
        DeRef(_quote_pair_8944);

// block var esc_8946

// block var sp_8948
        DeRef(_sp_8948);
        return _text_in_8943;
        // SubProg quote pc: 212 op: NOP1 (159)
LD: // addr: 213 pc: 212 sub: 8941 op: 159
        // SubProg quote pc: 213 op: STARTLINE (58)

        /** text.e:1150		end for*/
        // SubProg quote pc: 215 op: ENDFOR_INT_UP1 (54)
        _i_8982 = _i_8982 + 1;
        goto LA; // [215] 178
LB: // addr: 220 pc: 215 sub: 8941 op: 54
        ;
    }
    // SubProg quote pc: 220 op: STARTLINE (58)

    /** text.e:1152		if esc >= 0  then*/
    // SubProg quote pc: 222 op: GREATEREQ_IFW_I (120)
    if (_esc_8946 < 0)
    goto LE; // [222] 561
    // SubProg quote pc: 226 op: STARTLINE (58)

    /** text.e:1156			if atom(quote_pair[1]) then*/
    // SubProg quote pc: 228 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4952 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 232 op: IS_AN_ATOM (67)
    _4953 = IS_ATOM(_4952);
    _4952 = NOVALUE;
    // SubProg quote pc: 235 op: IF (20)
    if (_4953 == 0)
    {
        _4953 = NOVALUE;
        goto LF; // [235] 253
    }
    else{
        _4953 = NOVALUE;
    }
    // SubProg quote pc: 238 op: STARTLINE (58)

    /** text.e:1157				quote_pair[1] = {quote_pair[1]}*/
    // SubProg quote pc: 240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4954 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 244 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_4954);
    ((intptr_t*)_2)[1] = _4954;
    _4955 = MAKE_SEQ(_1);
    _4954 = NOVALUE;
    // SubProg quote pc: 248 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_8944 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4955;
    if( _1 != _4955 ){
        DeRef(_1);
    }
    _4955 = NOVALUE;
    // SubProg quote pc: 252 op: NOP1 (159)
LF: // addr: 253 pc: 252 sub: 8941 op: 159
    // SubProg quote pc: 253 op: STARTLINE (58)

    /** text.e:1159			if atom(quote_pair[2]) then*/
    // SubProg quote pc: 255 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4956 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 259 op: IS_AN_ATOM (67)
    _4957 = IS_ATOM(_4956);
    _4956 = NOVALUE;
    // SubProg quote pc: 262 op: IF (20)
    if (_4957 == 0)
    {
        _4957 = NOVALUE;
        goto L10; // [262] 280
    }
    else{
        _4957 = NOVALUE;
    }
    // SubProg quote pc: 265 op: STARTLINE (58)

    /** text.e:1160				quote_pair[2] = {quote_pair[2]}*/
    // SubProg quote pc: 267 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4958 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 271 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_4958);
    ((intptr_t*)_2)[1] = _4958;
    _4959 = MAKE_SEQ(_1);
    _4958 = NOVALUE;
    // SubProg quote pc: 275 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_8944 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4959;
    if( _1 != _4959 ){
        DeRef(_1);
    }
    _4959 = NOVALUE;
    // SubProg quote pc: 279 op: NOP1 (159)
L10: // addr: 280 pc: 279 sub: 8941 op: 159
    // SubProg quote pc: 280 op: STARTLINE (58)

    /** text.e:1163			if equal(quote_pair[1], quote_pair[2]) then*/
    // SubProg quote pc: 282 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4960 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 286 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4961 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 290 op: EQUAL (153)
    if (_4960 == _4961)
    _4962 = 1;
    else if (IS_ATOM_INT(_4960) && IS_ATOM_INT(_4961))
    _4962 = 0;
    else
    _4962 = (compare(_4960, _4961) == 0);
    _4960 = NOVALUE;
    _4961 = NOVALUE;
    // SubProg quote pc: 294 op: IF (20)
    if (_4962 == 0)
    {
        _4962 = NOVALUE;
        goto L11; // [294] 372
    }
    else{
        _4962 = NOVALUE;
    }
    // SubProg quote pc: 297 op: STARTLINE (58)

    /** text.e:1165				if match(quote_pair[1], text_in) then*/
    // SubProg quote pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4963 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 303 op: MATCH_FROM (177)
    _4964 = e_match_from(_4963, _text_in_8943, 1);
    _4963 = NOVALUE;
    // SubProg quote pc: 308 op: IF (20)
    if (_4964 == 0)
    {
        _4964 = NOVALUE;
        goto L12; // [308] 560
    }
    else{
        _4964 = NOVALUE;
    }
    // SubProg quote pc: 311 op: STARTLINE (58)

    /** text.e:1166					if match(esc & quote_pair[1], text_in) then*/
    // SubProg quote pc: 313 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4965 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 317 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_4965)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_4965)) {
        Prepend(&_4966, _4965, _esc_8946);
    }
    else {
        Concat((object_ptr)&_4966, _esc_8946, _4965);
    }
    _4965 = NOVALUE;
    // SubProg quote pc: 321 op: MATCH_FROM (177)
    _4967 = e_match_from(_4966, _text_in_8943, 1);
    DeRefDS(_4966);
    _4966 = NOVALUE;
    // SubProg quote pc: 326 op: IF (20)
    if (_4967 == 0)
    {
        _4967 = NOVALUE;
        goto L13; // [326] 345
    }
    else{
        _4967 = NOVALUE;
    }
    // SubProg quote pc: 329 op: STARTLINE (58)

    /** text.e:1167						text_in = search:match_replace(esc, text_in, esc & esc)*/
    // SubProg quote pc: 331 op: CONCAT (15)
    Concat((object_ptr)&_4968, _esc_8946, _esc_8946);
    // SubProg quote pc: 335 op: PROC (27)
    RefDS(_text_in_8943);
    _0 = _text_in_8943;
    _text_in_8943 = _19match_replace(_esc_8946, _text_in_8943, _4968, 0);
    DeRefDS(_0);
    _4968 = NOVALUE;
    // SubProg quote pc: 342 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 344 op: NOP1 (159)
L13: // addr: 345 pc: 344 sub: 8941 op: 159
    // SubProg quote pc: 345 op: STARTLINE (58)

    /** text.e:1169					text_in = search:match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    // SubProg quote pc: 347 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4970 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 351 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4971 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 355 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_4971)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_4971)) {
        Prepend(&_4972, _4971, _esc_8946);
    }
    else {
        Concat((object_ptr)&_4972, _esc_8946, _4971);
    }
    _4971 = NOVALUE;
    // SubProg quote pc: 359 op: PROC (27)
    Ref(_4970);
    RefDS(_text_in_8943);
    _0 = _text_in_8943;
    _text_in_8943 = _19match_replace(_4970, _text_in_8943, _4972, 0);
    DeRefDS(_0);
    _4970 = NOVALUE;
    _4972 = NOVALUE;
    // SubProg quote pc: 366 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 368 op: NOP1 (159)
    // SubProg quote pc: 369 op: ELSE (23)
    goto L12; // [369] 560
    // SubProg quote pc: 371 op: NOP1 (159)
L11: // addr: 372 pc: 371 sub: 8941 op: 159
    // SubProg quote pc: 372 op: STARTLINE (58)

    /** text.e:1172				if match(quote_pair[1], text_in) or*/
    // SubProg quote pc: 374 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4974 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 378 op: MATCH_FROM (177)
    _4975 = e_match_from(_4974, _text_in_8943, 1);
    _4974 = NOVALUE;
    // SubProg quote pc: 383 op: SC1_OR_IF (147)
    if (_4975 != 0) {
        goto L14; // [383] 401
    }
    // SubProg quote pc: 387 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4977 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 391 op: MATCH_FROM (177)
    _4978 = e_match_from(_4977, _text_in_8943, 1);
    _4977 = NOVALUE;
    // SubProg quote pc: 396 op: NOP1 (159)
    // SubProg quote pc: 397 op: IF (20)
    if (_4978 == 0)
    {
        _4978 = NOVALUE;
        goto L15; // [397] 473
    }
    else{
        _4978 = NOVALUE;
    }
    // SubProg quote pc: 400 op: NOP1 (159)
L14: // addr: 401 pc: 400 sub: 8941 op: 159
    // SubProg quote pc: 401 op: STARTLINE (58)

    /** text.e:1174					if match(esc & quote_pair[1], text_in) then*/
    // SubProg quote pc: 403 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4979 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 407 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_4979)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_4979)) {
        Prepend(&_4980, _4979, _esc_8946);
    }
    else {
        Concat((object_ptr)&_4980, _esc_8946, _4979);
    }
    _4979 = NOVALUE;
    // SubProg quote pc: 411 op: MATCH_FROM (177)
    _4981 = e_match_from(_4980, _text_in_8943, 1);
    DeRefDS(_4980);
    _4980 = NOVALUE;
    // SubProg quote pc: 416 op: IF (20)
    if (_4981 == 0)
    {
        _4981 = NOVALUE;
        goto L16; // [416] 449
    }
    else{
        _4981 = NOVALUE;
    }
    // SubProg quote pc: 419 op: STARTLINE (58)

    /** text.e:1175						text_in = search:match_replace(esc & quote_pair[1], text_in, esc & esc & quote_pair[1])*/
    // SubProg quote pc: 421 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4982 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 425 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_4982)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_4982)) {
        Prepend(&_4983, _4982, _esc_8946);
    }
    else {
        Concat((object_ptr)&_4983, _esc_8946, _4982);
    }
    _4982 = NOVALUE;
    // SubProg quote pc: 429 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4984 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 433 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _4984;
        concat_list[1] = _esc_8946;
        concat_list[2] = _esc_8946;
        Concat_N((object_ptr)&_4985, concat_list, 3);
    }
    _4984 = NOVALUE;
    // SubProg quote pc: 439 op: PROC (27)
    RefDS(_text_in_8943);
    _0 = _text_in_8943;
    _text_in_8943 = _19match_replace(_4983, _text_in_8943, _4985, 0);
    DeRefDS(_0);
    _4983 = NOVALUE;
    _4985 = NOVALUE;
    // SubProg quote pc: 446 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 448 op: NOP1 (159)
L16: // addr: 449 pc: 448 sub: 8941 op: 159
    // SubProg quote pc: 449 op: STARTLINE (58)

    /** text.e:1177					text_in = match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    // SubProg quote pc: 451 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4987 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 455 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4988 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 459 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_4988)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_4988)) {
        Prepend(&_4989, _4988, _esc_8946);
    }
    else {
        Concat((object_ptr)&_4989, _esc_8946, _4988);
    }
    _4988 = NOVALUE;
    // SubProg quote pc: 463 op: PROC (27)
    Ref(_4987);
    RefDS(_text_in_8943);
    _0 = _text_in_8943;
    _text_in_8943 = _19match_replace(_4987, _text_in_8943, _4989, 0);
    DeRefDS(_0);
    _4987 = NOVALUE;
    _4989 = NOVALUE;
    // SubProg quote pc: 470 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 472 op: NOP1 (159)
L15: // addr: 473 pc: 472 sub: 8941 op: 159
    // SubProg quote pc: 473 op: STARTLINE (58)

    /** text.e:1180				if match(quote_pair[2], text_in) then*/
    // SubProg quote pc: 475 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4991 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 479 op: MATCH_FROM (177)
    _4992 = e_match_from(_4991, _text_in_8943, 1);
    _4991 = NOVALUE;
    // SubProg quote pc: 484 op: IF (20)
    if (_4992 == 0)
    {
        _4992 = NOVALUE;
        goto L17; // [484] 559
    }
    else{
        _4992 = NOVALUE;
    }
    // SubProg quote pc: 487 op: STARTLINE (58)

    /** text.e:1181					if match(esc & quote_pair[2], text_in) then*/
    // SubProg quote pc: 489 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4993 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 493 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_4993)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_4993)) {
        Prepend(&_4994, _4993, _esc_8946);
    }
    else {
        Concat((object_ptr)&_4994, _esc_8946, _4993);
    }
    _4993 = NOVALUE;
    // SubProg quote pc: 497 op: MATCH_FROM (177)
    _4995 = e_match_from(_4994, _text_in_8943, 1);
    DeRefDS(_4994);
    _4994 = NOVALUE;
    // SubProg quote pc: 502 op: IF (20)
    if (_4995 == 0)
    {
        _4995 = NOVALUE;
        goto L18; // [502] 535
    }
    else{
        _4995 = NOVALUE;
    }
    // SubProg quote pc: 505 op: STARTLINE (58)

    /** text.e:1182						text_in = search:match_replace(esc & quote_pair[2], text_in, esc & esc & quote_pair[2])*/
    // SubProg quote pc: 507 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4996 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 511 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_4996)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_4996)) {
        Prepend(&_4997, _4996, _esc_8946);
    }
    else {
        Concat((object_ptr)&_4997, _esc_8946, _4996);
    }
    _4996 = NOVALUE;
    // SubProg quote pc: 515 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _4998 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 519 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _4998;
        concat_list[1] = _esc_8946;
        concat_list[2] = _esc_8946;
        Concat_N((object_ptr)&_4999, concat_list, 3);
    }
    _4998 = NOVALUE;
    // SubProg quote pc: 525 op: PROC (27)
    RefDS(_text_in_8943);
    _0 = _text_in_8943;
    _text_in_8943 = _19match_replace(_4997, _text_in_8943, _4999, 0);
    DeRefDS(_0);
    _4997 = NOVALUE;
    _4999 = NOVALUE;
    // SubProg quote pc: 532 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 534 op: NOP1 (159)
L18: // addr: 535 pc: 534 sub: 8941 op: 159
    // SubProg quote pc: 535 op: STARTLINE (58)

    /** text.e:1184					text_in = search:match_replace(quote_pair[2], text_in, esc & quote_pair[2])*/
    // SubProg quote pc: 537 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _5001 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 541 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _5002 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 545 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_8946) && IS_ATOM(_5002)) {
    }
    else if (IS_ATOM(_esc_8946) && IS_SEQUENCE(_5002)) {
        Prepend(&_5003, _5002, _esc_8946);
    }
    else {
        Concat((object_ptr)&_5003, _esc_8946, _5002);
    }
    _5002 = NOVALUE;
    // SubProg quote pc: 549 op: PROC (27)
    Ref(_5001);
    RefDS(_text_in_8943);
    _0 = _text_in_8943;
    _text_in_8943 = _19match_replace(_5001, _text_in_8943, _5003, 0);
    DeRefDS(_0);
    _5001 = NOVALUE;
    _5003 = NOVALUE;
    // SubProg quote pc: 556 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 558 op: NOP1 (159)
L17: // addr: 559 pc: 558 sub: 8941 op: 159
    // SubProg quote pc: 559 op: NOP1 (159)
L12: // addr: 560 pc: 559 sub: 8941 op: 159
    // SubProg quote pc: 560 op: NOP1 (159)
LE: // addr: 561 pc: 560 sub: 8941 op: 159
    // SubProg quote pc: 561 op: STARTLINE (58)

    /** text.e:1189		return quote_pair[1] & text_in & quote_pair[2]*/
    // SubProg quote pc: 563 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _5005 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 567 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_8944);
    _5006 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 571 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5006;
        concat_list[1] = _text_in_8943;
        concat_list[2] = _5005;
        Concat_N((object_ptr)&_5007, concat_list, 3);
    }
    _5006 = NOVALUE;
    _5005 = NOVALUE;
    // SubProg quote pc: 577 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var text_in_8943
    DeRefDS(_text_in_8943);

// block var quote_pair_8944
    DeRef(_quote_pair_8944);

// block var esc_8946

// block var sp_8948
    DeRef(_sp_8948);
    return _5007;
    // SubProg quote pc: 581 op: BADRETURNF (43)
    ;
}


object _17format(object _format_pattern_9164, object _arg_list_9165)
{
    object _result_9166 = NOVALUE;
    object _in_token_9167 = NOVALUE;
    object _tch_9168 = NOVALUE;
    object _i_9169 = NOVALUE;
    object _tend_9170 = NOVALUE;
    object _cap_9171 = NOVALUE;
    object _align_9172 = NOVALUE;
    object _psign_9173 = NOVALUE;
    object _msign_9174 = NOVALUE;
    object _zfill_9175 = NOVALUE;
    object _bwz_9176 = NOVALUE;
    object _spacer_9177 = NOVALUE;
    object _alt_9178 = NOVALUE;
    object _width_9179 = NOVALUE;
    object _decs_9180 = NOVALUE;
    object _pos_9181 = NOVALUE;
    object _argn_9182 = NOVALUE;
    object _argl_9183 = NOVALUE;
    object _trimming_9184 = NOVALUE;
    object _hexout_9185 = NOVALUE;
    object _binout_9186 = NOVALUE;
    object _tsep_9187 = NOVALUE;
    object _istext_9188 = NOVALUE;
    object _prevargv_9189 = NOVALUE;
    object _currargv_9190 = NOVALUE;
    object _idname_9191 = NOVALUE;
    object _envsym_9192 = NOVALUE;
    object _envvar_9193 = NOVALUE;
    object _ep_9194 = NOVALUE;
    object _sp_9268 = NOVALUE;
    object _sp_9304 = NOVALUE;
    object _argtext_9351 = NOVALUE;
    object _tempv_9583 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2456_9638 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2453_9637 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2512_9645 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2509_9644 = NOVALUE;
    object _x_inlined_pretty_sprint_at_2506_9643 = NOVALUE;
    object _msg_inlined_crash_at_2660_9667 = NOVALUE;
    object _dpos_9710 = NOVALUE;
    object _dist_9711 = NOVALUE;
    object _bracketed_9712 = NOVALUE;
// skipping _5513  name type: 0
// skipping _5512  name type: 0
// skipping _5511  name type: 0
// skipping _5510  name type: 0
    object _5509 = NOVALUE; // 9805 5509
    object _5508 = NOVALUE; // 9804 5508
    object _5507 = NOVALUE; // 9803 5507
// skipping _5506  name type: 0
    object _5505 = NOVALUE; // 9800 5505
    object _5504 = NOVALUE; // 9799 5504
    object _5503 = NOVALUE; // 9798 5503
// skipping _5502  name type: 0
// skipping _5501  name type: 0
    object _5500 = NOVALUE; // 9794 5500
    object _5499 = NOVALUE; // 9793 5499
// skipping _5498  name type: 0
// skipping _5497  name type: 0
    object _5496 = NOVALUE; // 9790 5496
// skipping _5495  name type: 0
    object _5494 = NOVALUE; // 9787 5494
// skipping _5493  name type: 0
// skipping _5492  name type: 0
    object _5491 = NOVALUE; // 9783 5491
    object _5490 = NOVALUE; // 9782 5490
    object _5489 = NOVALUE; // 9781 5489
// skipping _5488  name type: 0
// skipping _5487  name type: 0
    object _5486 = NOVALUE; // 9777 5486
// skipping _5485  name type: 0
// skipping _5484  name type: 0
    object _5483 = NOVALUE; // 9772 5483
    object _5482 = NOVALUE; // 9771 5482
    object _5481 = NOVALUE; // 9770 5481
    object _5480 = NOVALUE; // 9769 5480
// skipping _5479  name type: 0
// skipping _5478  name type: 0
    object _5477 = NOVALUE; // 9765 5477
    object _5476 = NOVALUE; // 9764 5476
    object _5475 = NOVALUE; // 9763 5475
// skipping _5474  name type: 0
// skipping _5473  name type: 0
    object _5472 = NOVALUE; // 9760 5472
// skipping _5471  name type: 0
    object _5470 = NOVALUE; // 9757 5470
// skipping _5469  name type: 0
// skipping _5468  name type: 0
    object _5467 = NOVALUE; // 9753 5467
    object _5466 = NOVALUE; // 9752 5466
    object _5465 = NOVALUE; // 9751 5465
    object _5464 = NOVALUE; // 9750 5464
// skipping _5463  name type: 0
// skipping _5462  name type: 0
    object _5461 = NOVALUE; // 9746 5461
// skipping _5460  name type: 0
// skipping _5459  name type: 0
// skipping _5458  name type: 0
// skipping _5457  name type: 0
    object _5456 = NOVALUE; // 9738 5456
    object _5455 = NOVALUE; // 9737 5455
    object _5454 = NOVALUE; // 9736 5454
    object _5453 = NOVALUE; // 9735 5453
// skipping _5452  name type: 0
// skipping _5451  name type: 0
// skipping _5450  name type: 0
// skipping _5449  name type: 0
// skipping _5448  name type: 0
    object _5447 = NOVALUE; // 9725 5447
// skipping _5446  name type: 0
// skipping _5445  name type: 0
// skipping _5444  name type: 0
    object _5443 = NOVALUE; // 9720 5443
    object _5442 = NOVALUE; // 9719 5442
// skipping _5441  name type: 0
    object _5440 = NOVALUE; // 9716 5440
// skipping _5439  name type: 0
    object _5438 = NOVALUE; // 9709 5438
    object _5437 = NOVALUE; // 9708 5437
    object _5436 = NOVALUE; // 9707 5436
    object _5435 = NOVALUE; // 9705 5435
    object _5434 = NOVALUE; // 9702 5434
// skipping _5433  name type: 0
// skipping _5432  name type: 0
    object _5431 = NOVALUE; // 9697 5431
// skipping _5430  name type: 0
// skipping _5429  name type: 0
    object _5428 = NOVALUE; // 9693 5428
    object _5427 = NOVALUE; // 9692 5427
// skipping _5426  name type: 0
// skipping _5425  name type: 0
    object _5424 = NOVALUE; // 9688 5424
    object _5423 = NOVALUE; // 9687 5423
    object _5422 = NOVALUE; // 9686 5422
// skipping _5421  name type: 0
// skipping _5420  name type: 0
    object _5419 = NOVALUE; // 9682 5419
// skipping _5418  name type: 0
    object _5417 = NOVALUE; // 9679 5417
// skipping _5416  name type: 0
// skipping _5415  name type: 0
// skipping _5414  name type: 0
// skipping _5413  name type: 0
    object _5412 = NOVALUE; // 9671 5412
    object _5411 = NOVALUE; // 9669 5411
// skipping _5409  name type: 0
// skipping _5408  name type: 0
// skipping _5407  name type: 0
// skipping _5404  name type: 0
    object _5403 = NOVALUE; // 9653 5403
// skipping _5402  name type: 0
// skipping _5401  name type: 0
// skipping _5400  name type: 0
    object _5399 = NOVALUE; // 9648 5399
// skipping _5398  name type: 0
    object _5397 = NOVALUE; // 9641 5397
    object _5396 = NOVALUE; // 9640 5396
    object _5395 = NOVALUE; // 9635 5395
// skipping _5393  name type: 0
    object _5392 = NOVALUE; // 9631 5392
// skipping _5391  name type: 0
    object _5390 = NOVALUE; // 9628 5390
    object _5389 = NOVALUE; // 9627 5389
    object _5388 = NOVALUE; // 9626 5388
// skipping _5387  name type: 0
    object _5386 = NOVALUE; // 9623 5386
    object _5385 = NOVALUE; // 9622 5385
    object _5384 = NOVALUE; // 9621 5384
    object _5383 = NOVALUE; // 9619 5383
// skipping _5382  name type: 0
// skipping _5381  name type: 0
    object _5380 = NOVALUE; // 9614 5380
    object _5379 = NOVALUE; // 9613 5379
    object _5378 = NOVALUE; // 9612 5378
// skipping _5377  name type: 0
    object _5376 = NOVALUE; // 9609 5376
    object _5375 = NOVALUE; // 9608 5375
    object _5374 = NOVALUE; // 9606 5374
    object _5373 = NOVALUE; // 9604 5373
// skipping _5372  name type: 0
    object _5371 = NOVALUE; // 9600 5371
// skipping _5370  name type: 0
    object _5369 = NOVALUE; // 9597 5369
// skipping _5368  name type: 0
    object _5367 = NOVALUE; // 9595 5367
// skipping _5366  name type: 0
    object _5365 = NOVALUE; // 9591 5365
// skipping _5364  name type: 0
    object _5363 = NOVALUE; // 9588 5363
// skipping _5362  name type: 0
    object _5361 = NOVALUE; // 9585 5361
    object _5360 = NOVALUE; // 9582 5360
    object _5359 = NOVALUE; // 9581 5359
    object _5358 = NOVALUE; // 9580 5358
    object _5357 = NOVALUE; // 9579 5357
    object _5356 = NOVALUE; // 9578 5356
// skipping _5355  name type: 0
    object _5354 = NOVALUE; // 9574 5354
    object _5353 = NOVALUE; // 9573 5353
// skipping _5352  name type: 0
    object _5351 = NOVALUE; // 9570 5351
    object _5350 = NOVALUE; // 9569 5350
// skipping _5349  name type: 0
    object _5348 = NOVALUE; // 9567 5348
// skipping _5347  name type: 0
    object _5346 = NOVALUE; // 9563 5346
    object _5345 = NOVALUE; // 9562 5345
// skipping _5344  name type: 0
// skipping _5343  name type: 0
    object _5342 = NOVALUE; // 9557 5342
// skipping _5341  name type: 0
    object _5340 = NOVALUE; // 9554 5340
// skipping _5339  name type: 0
// skipping _5338  name type: 0
// skipping _5337  name type: 0
    object _5336 = NOVALUE; // 9547 5336
// skipping _5335  name type: 0
    object _5334 = NOVALUE; // 9544 5334
    object _5333 = NOVALUE; // 9543 5333
    object _5332 = NOVALUE; // 9542 5332
// skipping _5331  name type: 0
    object _5330 = NOVALUE; // 9539 5330
    object _5329 = NOVALUE; // 9538 5329
    object _5328 = NOVALUE; // 9537 5328
    object _5327 = NOVALUE; // 9536 5327
    object _5326 = NOVALUE; // 9535 5326
// skipping _5325  name type: 0
    object _5324 = NOVALUE; // 9533 5324
// skipping _5323  name type: 0
    object _5322 = NOVALUE; // 9530 5322
    object _5321 = NOVALUE; // 9528 5321
    object _5320 = NOVALUE; // 9527 5320
    object _5319 = NOVALUE; // 9526 5319
// skipping _5318  name type: 0
// skipping _5316  name type: 0
    object _5315 = NOVALUE; // 9521 5315
// skipping _5314  name type: 0
// skipping _5313  name type: 0
    object _5312 = NOVALUE; // 9517 5312
    object _5311 = NOVALUE; // 9516 5311
// skipping _5309  name type: 0
    object _5308 = NOVALUE; // 9512 5308
    object _5307 = NOVALUE; // 9511 5307
    object _5306 = NOVALUE; // 9510 5306
// skipping _5305  name type: 0
    object _5304 = NOVALUE; // 9508 5304
    object _5303 = NOVALUE; // 9506 5303
    object _5302 = NOVALUE; // 9505 5302
    object _5301 = NOVALUE; // 9504 5301
// skipping _5300  name type: 0
    object _5299 = NOVALUE; // 9501 5299
// skipping _5298  name type: 0
    object _5297 = NOVALUE; // 9497 5297
    object _5296 = NOVALUE; // 9496 5296
    object _5295 = NOVALUE; // 9495 5295
    object _5294 = NOVALUE; // 9494 5294
    object _5293 = NOVALUE; // 9492 5293
    object _5292 = NOVALUE; // 9491 5292
// skipping _5291  name type: 0
    object _5290 = NOVALUE; // 9488 5290
    object _5289 = NOVALUE; // 9487 5289
    object _5288 = NOVALUE; // 9486 5288
// skipping _5287  name type: 0
    object _5286 = NOVALUE; // 9484 5286
    object _5285 = NOVALUE; // 9482 5285
    object _5284 = NOVALUE; // 9481 5284
    object _5283 = NOVALUE; // 9480 5283
// skipping _5282  name type: 0
    object _5281 = NOVALUE; // 9477 5281
// skipping _5279  name type: 0
    object _5278 = NOVALUE; // 9473 5278
    object _5277 = NOVALUE; // 9472 5277
// skipping _5276  name type: 0
    object _5275 = NOVALUE; // 9469 5275
    object _5274 = NOVALUE; // 9468 5274
// skipping _5273  name type: 0
    object _5272 = NOVALUE; // 9466 5272
// skipping _5271  name type: 0
    object _5269 = NOVALUE; // 9461 5269
    object _5268 = NOVALUE; // 9460 5268
// skipping _5267  name type: 0
// skipping _5266  name type: 0
    object _5265 = NOVALUE; // 9455 5265
// skipping _5264  name type: 0
    object _5263 = NOVALUE; // 9452 5263
// skipping _5262  name type: 0
// skipping _5261  name type: 0
// skipping _5260  name type: 0
    object _5259 = NOVALUE; // 9445 5259
// skipping _5258  name type: 0
    object _5257 = NOVALUE; // 9442 5257
    object _5256 = NOVALUE; // 9441 5256
    object _5255 = NOVALUE; // 9440 5255
// skipping _5254  name type: 0
    object _5253 = NOVALUE; // 9438 5253
// skipping _5252  name type: 0
    object _5251 = NOVALUE; // 9434 5251
    object _5250 = NOVALUE; // 9433 5250
    object _5249 = NOVALUE; // 9432 5249
    object _5248 = NOVALUE; // 9431 5248
    object _5247 = NOVALUE; // 9430 5247
// skipping _5246  name type: 0
    object _5245 = NOVALUE; // 9428 5245
// skipping _5244  name type: 0
    object _5243 = NOVALUE; // 9425 5243
    object _5242 = NOVALUE; // 9423 5242
    object _5241 = NOVALUE; // 9422 5241
    object _5240 = NOVALUE; // 9421 5240
// skipping _5239  name type: 0
    object _5238 = NOVALUE; // 9418 5238
// skipping _5237  name type: 0
// skipping _5236  name type: 0
    object _5235 = NOVALUE; // 9414 5235
// skipping _5234  name type: 0
    object _5233 = NOVALUE; // 9412 5233
    object _5232 = NOVALUE; // 9410 5232
// skipping _5231  name type: 0
    object _5230 = NOVALUE; // 9406 5230
    object _5229 = NOVALUE; // 9405 5229
    object _5228 = NOVALUE; // 9404 5228
// skipping _5227  name type: 0
// skipping _5226  name type: 0
    object _5225 = NOVALUE; // 9400 5225
    object _5224 = NOVALUE; // 9399 5224
    object _5223 = NOVALUE; // 9398 5223
    object _5222 = NOVALUE; // 9397 5222
// skipping _5221  name type: 0
    object _5220 = NOVALUE; // 9394 5220
    object _5219 = NOVALUE; // 9393 5219
    object _5218 = NOVALUE; // 9392 5218
    object _5217 = NOVALUE; // 9390 5217
    object _5214 = NOVALUE; // 9387 5214
    object _5213 = NOVALUE; // 9386 5213
    object _5212 = NOVALUE; // 9385 5212
    object _5210 = NOVALUE; // 9383 5210
    object _5209 = NOVALUE; // 9382 5209
    object _5208 = NOVALUE; // 9381 5208
    object _5207 = NOVALUE; // 9380 5207
// skipping _5206  name type: 0
// skipping _5205  name type: 0
    object _5204 = NOVALUE; // 9375 5204
    object _5203 = NOVALUE; // 9374 5203
    object _5202 = NOVALUE; // 9373 5202
    object _5201 = NOVALUE; // 9372 5201
// skipping _5200  name type: 0
    object _5199 = NOVALUE; // 9370 5199
    object _5198 = NOVALUE; // 9368 5198
    object _5197 = NOVALUE; // 9367 5197
// skipping _5196  name type: 0
    object _5195 = NOVALUE; // 9361 5195
    object _5194 = NOVALUE; // 9359 5194
    object _5193 = NOVALUE; // 9358 5193
// skipping _5192  name type: 0
    object _5191 = NOVALUE; // 9356 5191
// skipping _5190  name type: 0
// skipping _5189  name type: 0
// skipping _5188  name type: 0
// skipping _5187  name type: 0
// skipping _5186  name type: 0
// skipping _5185  name type: 0
    object _5184 = NOVALUE; // 9344 5184
// skipping _5183  name type: 0
    object _5182 = NOVALUE; // 9340 5182
    object _5181 = NOVALUE; // 9339 5181
// skipping _5180  name type: 0
// skipping _5179  name type: 0
// skipping _5178  name type: 0
// skipping _5177  name type: 0
// skipping _5176  name type: 0
// skipping _5175  name type: 0
    object _5174 = NOVALUE; // 9331 5174
// skipping _5173  name type: 0
// skipping _5172  name type: 0
    object _5171 = NOVALUE; // 9325 5171
// skipping _5170  name type: 0
// skipping _5169  name type: 0
// skipping _5168  name type: 0
    object _5167 = NOVALUE; // 9320 5167
// skipping _5166  name type: 0
    object _5165 = NOVALUE; // 9317 5165
    object _5164 = NOVALUE; // 9316 5164
// skipping _5163  name type: 0
// skipping _5162  name type: 0
    object _5161 = NOVALUE; // 9313 5161
// skipping _5160  name type: 0
    object _5159 = NOVALUE; // 9310 5159
// skipping _5158  name type: 0
    object _5157 = NOVALUE; // 9307 5157
// skipping _5156  name type: 0
// skipping _5155  name type: 0
    object _5154 = NOVALUE; // 9301 5154
// skipping _5153  name type: 0
    object _5152 = NOVALUE; // 9297 5152
    object _5151 = NOVALUE; // 9296 5151
    object _5150 = NOVALUE; // 9294 5150
    object _5149 = NOVALUE; // 9293 5149
    object _5148 = NOVALUE; // 9291 5148
// skipping _5147  name type: 0
// skipping _5146  name type: 0
    object _5145 = NOVALUE; // 9286 5145
// skipping _5144  name type: 0
    object _5142 = NOVALUE; // 9282 5142
    object _5141 = NOVALUE; // 9281 5141
    object _5140 = NOVALUE; // 9280 5140
// skipping _5139  name type: 0
// skipping _5138  name type: 0
    object _5137 = NOVALUE; // 9277 5137
// skipping _5136  name type: 0
    object _5135 = NOVALUE; // 9274 5135
// skipping _5134  name type: 0
    object _5133 = NOVALUE; // 9271 5133
// skipping _5132  name type: 0
// skipping _5131  name type: 0
    object _5130 = NOVALUE; // 9265 5130
    object _5129 = NOVALUE; // 9264 5129
// skipping _5128  name type: 0
// skipping _5127  name type: 0
// skipping _5126  name type: 0
// skipping _5125  name type: 0
// skipping _5124  name type: 0
// skipping _5123  name type: 0
    object _5122 = NOVALUE; // 9256 5122
// skipping _5121  name type: 0
// skipping _5120  name type: 0
    object _5119 = NOVALUE; // 9250 5119
    object _5118 = NOVALUE; // 9249 5118
// skipping _5117  name type: 0
// skipping _5116  name type: 0
// skipping _5115  name type: 0
// skipping _5113  name type: 0
// skipping _5112  name type: 0
// skipping _5111  name type: 0
    object _5110 = NOVALUE; // 9240 5110
// skipping _5106  name type: 0
    object _5105 = NOVALUE; // 9221 5105
// skipping _5104  name type: 0
// skipping _5103  name type: 0
    object _5102 = NOVALUE; // 9217 5102
// skipping _5101  name type: 0
// skipping _5097  name type: 0
// skipping _5096  name type: 0
// skipping _5095  name type: 0
// skipping _5094  name type: 0
// skipping _5093  name type: 0
// skipping _5092  name type: 0
    object _5091 = NOVALUE; // 9199 5091
// skipping _5090  name type: 0
    object _5089 = NOVALUE; // 9196 5089
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg format pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 3 op: STARTLINE (58)

    /** text.e:1443		if atom(arg_list) then*/
    // SubProg format pc: 5 op: IS_AN_ATOM (67)
    _5089 = IS_ATOM(_arg_list_9165);
    // SubProg format pc: 8 op: IF (20)
    if (_5089 == 0)
    {
        _5089 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _5089 = NOVALUE;
    }
    // SubProg format pc: 11 op: STARTLINE (58)

    /** text.e:1444			arg_list = {arg_list}*/
    // SubProg format pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _arg_list_9165;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_arg_list_9165);
    ((intptr_t*)_2)[1] = _arg_list_9165;
    _arg_list_9165 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg format pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 9162 op: 159
    // SubProg format pc: 18 op: STARTLINE (58)

    /** text.e:1447		result = ""*/
    // SubProg format pc: 20 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_result_9166);
    _result_9166 = _5;
    // SubProg format pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 25 op: STARTLINE (58)

    /** text.e:1448		in_token = 0*/
    // SubProg format pc: 27 op: ASSIGN_I (113)
    _in_token_9167 = 0;
    // SubProg format pc: 30 op: STARTLINE (58)

    /** text.e:1451		i = 0*/
    // SubProg format pc: 32 op: ASSIGN_I (113)
    _i_9169 = 0;
    // SubProg format pc: 35 op: STARTLINE (58)

    /** text.e:1452		tend = 0*/
    // SubProg format pc: 37 op: ASSIGN_I (113)
    _tend_9170 = 0;
    // SubProg format pc: 40 op: STARTLINE (58)

    /** text.e:1453		argl = 0*/
    // SubProg format pc: 42 op: ASSIGN_I (113)
    _argl_9183 = 0;
    // SubProg format pc: 45 op: STARTLINE (58)

    /** text.e:1454		spacer = 0*/
    // SubProg format pc: 47 op: ASSIGN_I (113)
    _spacer_9177 = 0;
    // SubProg format pc: 50 op: STARTLINE (58)

    /** text.e:1455		prevargv = 0*/
    // SubProg format pc: 52 op: ASSIGN (18)
    DeRef(_prevargv_9189);
    _prevargv_9189 = 0;
    // SubProg format pc: 55 op: STARTLINE (58)

    /** text.e:1456	    while i < length(format_pattern) do*/
    // SubProg format pc: 57 op: NOP2 (110)
    // SubProg format pc: 59 op: NOPWHILE (158)
L2: // addr: 60 pc: 59 sub: 9162 op: 158
    // SubProg format pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_format_pattern_9164)){
            _5091 = SEQ_PTR(_format_pattern_9164)->length;
    }
    else {
        _5091 = 1;
    }
    // SubProg format pc: 63 op: LESS_IFW_I (119)
    if (_i_9169 >= _5091)
    goto L3; // [63] 3409
    // SubProg format pc: 67 op: STARTLINE (58)

    /** text.e:1457	    	i += 1*/
    // SubProg format pc: 69 op: PLUS1_I (117)
    _i_9169 = _i_9169 + 1;
    // SubProg format pc: 73 op: STARTLINE (58)

    /** text.e:1458	    	tch = format_pattern[i]*/
    // SubProg format pc: 75 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_format_pattern_9164);
    _tch_9168 = (object)*(((s1_ptr)_2)->base + _i_9169);
    if (!IS_ATOM_INT(_tch_9168))
    _tch_9168 = (object)DBL_PTR(_tch_9168)->dbl;
    // SubProg format pc: 79 op: STARTLINE (58)

    /** text.e:1459	    	if not in_token then*/
    // SubProg format pc: 81 op: NOT_IFW (108)
    if (_in_token_9167 != 0)
    goto L4; // [81] 210
    // SubProg format pc: 84 op: STARTLINE (58)

    /** text.e:1460	    		if tch = '[' then*/
    // SubProg format pc: 86 op: EQUALS_IFW_I (121)
    if (_tch_9168 != 91)
    goto L5; // [86] 200
    // SubProg format pc: 90 op: STARTLINE (58)

    /** text.e:1461	    			in_token = 1*/
    // SubProg format pc: 92 op: ASSIGN_I (113)
    _in_token_9167 = 1;
    // SubProg format pc: 95 op: STARTLINE (58)

    /** text.e:1462	    			tend = 0*/
    // SubProg format pc: 97 op: ASSIGN_I (113)
    _tend_9170 = 0;
    // SubProg format pc: 100 op: STARTLINE (58)

    /** text.e:1463					cap = 0*/
    // SubProg format pc: 102 op: ASSIGN_I (113)
    _cap_9171 = 0;
    // SubProg format pc: 105 op: STARTLINE (58)

    /** text.e:1464					align = 0*/
    // SubProg format pc: 107 op: ASSIGN_I (113)
    _align_9172 = 0;
    // SubProg format pc: 110 op: STARTLINE (58)

    /** text.e:1465					psign = 0*/
    // SubProg format pc: 112 op: ASSIGN_I (113)
    _psign_9173 = 0;
    // SubProg format pc: 115 op: STARTLINE (58)

    /** text.e:1466					msign = 0*/
    // SubProg format pc: 117 op: ASSIGN_I (113)
    _msign_9174 = 0;
    // SubProg format pc: 120 op: STARTLINE (58)

    /** text.e:1467					zfill = 0*/
    // SubProg format pc: 122 op: ASSIGN_I (113)
    _zfill_9175 = 0;
    // SubProg format pc: 125 op: STARTLINE (58)

    /** text.e:1468					bwz = 0*/
    // SubProg format pc: 127 op: ASSIGN_I (113)
    _bwz_9176 = 0;
    // SubProg format pc: 130 op: STARTLINE (58)

    /** text.e:1469					spacer = 0*/
    // SubProg format pc: 132 op: ASSIGN_I (113)
    _spacer_9177 = 0;
    // SubProg format pc: 135 op: STARTLINE (58)

    /** text.e:1470					alt = 0*/
    // SubProg format pc: 137 op: ASSIGN_I (113)
    _alt_9178 = 0;
    // SubProg format pc: 140 op: STARTLINE (58)

    /** text.e:1471	    			width = 0*/
    // SubProg format pc: 142 op: ASSIGN_I (113)
    _width_9179 = 0;
    // SubProg format pc: 145 op: STARTLINE (58)

    /** text.e:1472	    			decs = -1*/
    // SubProg format pc: 147 op: ASSIGN_I (113)
    _decs_9180 = -1;
    // SubProg format pc: 150 op: STARTLINE (58)

    /** text.e:1473	    			argn = 0*/
    // SubProg format pc: 152 op: ASSIGN_I (113)
    _argn_9182 = 0;
    // SubProg format pc: 155 op: STARTLINE (58)

    /** text.e:1474	    			hexout = 0*/
    // SubProg format pc: 157 op: ASSIGN_I (113)
    _hexout_9185 = 0;
    // SubProg format pc: 160 op: STARTLINE (58)

    /** text.e:1475	    			binout = 0*/
    // SubProg format pc: 162 op: ASSIGN_I (113)
    _binout_9186 = 0;
    // SubProg format pc: 165 op: STARTLINE (58)

    /** text.e:1476	    			trimming = 0*/
    // SubProg format pc: 167 op: ASSIGN_I (113)
    _trimming_9184 = 0;
    // SubProg format pc: 170 op: STARTLINE (58)

    /** text.e:1477	    			tsep = 0*/
    // SubProg format pc: 172 op: ASSIGN_I (113)
    _tsep_9187 = 0;
    // SubProg format pc: 175 op: STARTLINE (58)

    /** text.e:1478	    			istext = 0*/
    // SubProg format pc: 177 op: ASSIGN_I (113)
    _istext_9188 = 0;
    // SubProg format pc: 180 op: STARTLINE (58)

    /** text.e:1479	    			idname = ""*/
    // SubProg format pc: 182 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_idname_9191);
    _idname_9191 = _5;
    // SubProg format pc: 185 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 187 op: STARTLINE (58)

    /** text.e:1480	    			envvar = ""*/
    // SubProg format pc: 189 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_envvar_9193);
    _envvar_9193 = _5;
    // SubProg format pc: 192 op: STARTLINE (58)

    /** text.e:1481	    			envsym = ""*/
    // SubProg format pc: 194 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_envsym_9192);
    _envsym_9192 = _5;
    // SubProg format pc: 197 op: ELSE (23)
    goto L2; // [197] 60
    // SubProg format pc: 199 op: NOP1 (159)
L5: // addr: 200 pc: 199 sub: 9162 op: 159
    // SubProg format pc: 200 op: STARTLINE (58)

    /** text.e:1483	    			result &= tch*/
    // SubProg format pc: 202 op: CONCAT (15)
    Append(&_result_9166, _result_9166, _tch_9168);
    // SubProg format pc: 206 op: NOP1 (159)
    // SubProg format pc: 207 op: ELSE (23)
    goto L2; // [207] 60
    // SubProg format pc: 209 op: NOP1 (159)
L4: // addr: 210 pc: 209 sub: 9162 op: 159
    // SubProg format pc: 210 op: STARTLINE (58)

    /** text.e:1486				switch tch do*/
    // SubProg format pc: 212 op: SWITCH_I (193)
    _0 = _tch_9168;
    switch ( _0 ){ 
        // SubProg format pc: 217 op: STARTLINE (58)

        /** text.e:1487	    			case ']' then*/
        // SubProg format pc: 219 op: CASE (186)
        case 93:
        // SubProg format pc: 221 op: STARTLINE (58)

        /** text.e:1488	    				in_token = 0*/
        // SubProg format pc: 223 op: ASSIGN_I (113)
        _in_token_9167 = 0;
        // SubProg format pc: 226 op: STARTLINE (58)

        /** text.e:1489	    				tend = i*/
        // SubProg format pc: 228 op: ASSIGN_I (113)
        _tend_9170 = _i_9169;
        // SubProg format pc: 231 op: ELSE (23)
        goto L6; // [231] 1072
        // SubProg format pc: 233 op: STARTLINE (58)

        /** text.e:1491	    			case '[' then*/
        // SubProg format pc: 235 op: CASE (186)
        case 91:
        // SubProg format pc: 237 op: STARTLINE (58)

        /** text.e:1492		    			result &= tch*/
        // SubProg format pc: 239 op: CONCAT (15)
        Append(&_result_9166, _result_9166, _tch_9168);
        // SubProg format pc: 243 op: STARTLINE (58)

        /** text.e:1493		    			while i < length(format_pattern) do*/
        // SubProg format pc: 245 op: NOP2 (110)
        // SubProg format pc: 247 op: NOPWHILE (158)
L7: // addr: 248 pc: 247 sub: 9162 op: 158
        // SubProg format pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_9164)){
                _5102 = SEQ_PTR(_format_pattern_9164)->length;
        }
        else {
            _5102 = 1;
        }
        // SubProg format pc: 251 op: LESS_IFW_I (119)
        if (_i_9169 >= _5102)
        goto L6; // [251] 1072
        // SubProg format pc: 255 op: STARTLINE (58)

        /** text.e:1494		    				i += 1*/
        // SubProg format pc: 257 op: PLUS1_I (117)
        _i_9169 = _i_9169 + 1;
        // SubProg format pc: 261 op: STARTLINE (58)

        /** text.e:1495		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 263 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _5105 = (object)*(((s1_ptr)_2)->base + _i_9169);
        // SubProg format pc: 267 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5105, 93)){
            _5105 = NOVALUE;
            goto L7; // [267] 248
        }
        _5105 = NOVALUE;
        // SubProg format pc: 271 op: STARTLINE (58)

        /** text.e:1496		    					in_token = 0*/
        // SubProg format pc: 273 op: ASSIGN_I (113)
        _in_token_9167 = 0;
        // SubProg format pc: 276 op: STARTLINE (58)

        /** text.e:1497		    					tend = 0*/
        // SubProg format pc: 278 op: ASSIGN_I (113)
        _tend_9170 = 0;
        // SubProg format pc: 281 op: STARTLINE (58)

        /** text.e:1498		    					exit*/
        // SubProg format pc: 283 op: EXIT (61)
        goto L6; // [283] 1072
        // SubProg format pc: 285 op: NOP1 (159)
        // SubProg format pc: 286 op: STARTLINE (58)

        /** text.e:1500		    			end while*/
        // SubProg format pc: 288 op: ENDWHILE (22)
        goto L7; // [288] 248
        // SubProg format pc: 290 op: NOP1 (159)
        // SubProg format pc: 291 op: ELSE (23)
        goto L6; // [291] 1072
        // SubProg format pc: 293 op: STARTLINE (58)

        /** text.e:1502		    		case 'w', 'u', 'l' then*/
        // SubProg format pc: 295 op: CASE (186)
        case 119:
        // SubProg format pc: 297 op: CASE (186)
        case 117:
        // SubProg format pc: 299 op: CASE (186)
        case 108:
        // SubProg format pc: 301 op: STARTLINE (58)

        /** text.e:1503		    			cap = tch*/
        // SubProg format pc: 303 op: ASSIGN_I (113)
        _cap_9171 = _tch_9168;
        // SubProg format pc: 306 op: ELSE (23)
        goto L6; // [306] 1072
        // SubProg format pc: 308 op: STARTLINE (58)

        /** text.e:1505		    		case 'b' then*/
        // SubProg format pc: 310 op: CASE (186)
        case 98:
        // SubProg format pc: 312 op: STARTLINE (58)

        /** text.e:1506		    			bwz = 1*/
        // SubProg format pc: 314 op: ASSIGN_I (113)
        _bwz_9176 = 1;
        // SubProg format pc: 317 op: ELSE (23)
        goto L6; // [317] 1072
        // SubProg format pc: 319 op: STARTLINE (58)

        /** text.e:1508		    		case 's' then*/
        // SubProg format pc: 321 op: CASE (186)
        case 115:
        // SubProg format pc: 323 op: STARTLINE (58)

        /** text.e:1509		    			spacer = 1*/
        // SubProg format pc: 325 op: ASSIGN_I (113)
        _spacer_9177 = 1;
        // SubProg format pc: 328 op: ELSE (23)
        goto L6; // [328] 1072
        // SubProg format pc: 330 op: STARTLINE (58)

        /** text.e:1511		    		case 't' then*/
        // SubProg format pc: 332 op: CASE (186)
        case 116:
        // SubProg format pc: 334 op: STARTLINE (58)

        /** text.e:1512		    			trimming = 1*/
        // SubProg format pc: 336 op: ASSIGN_I (113)
        _trimming_9184 = 1;
        // SubProg format pc: 339 op: ELSE (23)
        goto L6; // [339] 1072
        // SubProg format pc: 341 op: STARTLINE (58)

        /** text.e:1514		    		case 'z' then*/
        // SubProg format pc: 343 op: CASE (186)
        case 122:
        // SubProg format pc: 345 op: STARTLINE (58)

        /** text.e:1515		    			zfill = 1*/
        // SubProg format pc: 347 op: ASSIGN_I (113)
        _zfill_9175 = 1;
        // SubProg format pc: 350 op: ELSE (23)
        goto L6; // [350] 1072
        // SubProg format pc: 352 op: STARTLINE (58)

        /** text.e:1517		    		case 'X' then*/
        // SubProg format pc: 354 op: CASE (186)
        case 88:
        // SubProg format pc: 356 op: STARTLINE (58)

        /** text.e:1518		    			hexout = 1*/
        // SubProg format pc: 358 op: ASSIGN_I (113)
        _hexout_9185 = 1;
        // SubProg format pc: 361 op: ELSE (23)
        goto L6; // [361] 1072
        // SubProg format pc: 363 op: STARTLINE (58)

        /** text.e:1520		    		case 'B' then*/
        // SubProg format pc: 365 op: CASE (186)
        case 66:
        // SubProg format pc: 367 op: STARTLINE (58)

        /** text.e:1521		    			binout = 1*/
        // SubProg format pc: 369 op: ASSIGN_I (113)
        _binout_9186 = 1;
        // SubProg format pc: 372 op: ELSE (23)
        goto L6; // [372] 1072
        // SubProg format pc: 374 op: STARTLINE (58)

        /** text.e:1523		    		case 'c', '<', '>' then*/
        // SubProg format pc: 376 op: CASE (186)
        case 99:
        // SubProg format pc: 378 op: CASE (186)
        case 60:
        // SubProg format pc: 380 op: CASE (186)
        case 62:
        // SubProg format pc: 382 op: STARTLINE (58)

        /** text.e:1524		    			align = tch*/
        // SubProg format pc: 384 op: ASSIGN_I (113)
        _align_9172 = _tch_9168;
        // SubProg format pc: 387 op: ELSE (23)
        goto L6; // [387] 1072
        // SubProg format pc: 389 op: STARTLINE (58)

        /** text.e:1526		    		case '+' then*/
        // SubProg format pc: 391 op: CASE (186)
        case 43:
        // SubProg format pc: 393 op: STARTLINE (58)

        /** text.e:1527		    			psign = 1*/
        // SubProg format pc: 395 op: ASSIGN_I (113)
        _psign_9173 = 1;
        // SubProg format pc: 398 op: ELSE (23)
        goto L6; // [398] 1072
        // SubProg format pc: 400 op: STARTLINE (58)

        /** text.e:1529		    		case '(' then*/
        // SubProg format pc: 402 op: CASE (186)
        case 40:
        // SubProg format pc: 404 op: STARTLINE (58)

        /** text.e:1530		    			msign = 1*/
        // SubProg format pc: 406 op: ASSIGN_I (113)
        _msign_9174 = 1;
        // SubProg format pc: 409 op: ELSE (23)
        goto L6; // [409] 1072
        // SubProg format pc: 411 op: STARTLINE (58)

        /** text.e:1532		    		case '?' then*/
        // SubProg format pc: 413 op: CASE (186)
        case 63:
        // SubProg format pc: 415 op: STARTLINE (58)

        /** text.e:1533		    			alt = 1*/
        // SubProg format pc: 417 op: ASSIGN_I (113)
        _alt_9178 = 1;
        // SubProg format pc: 420 op: ELSE (23)
        goto L6; // [420] 1072
        // SubProg format pc: 422 op: STARTLINE (58)

        /** text.e:1535		    		case 'T' then*/
        // SubProg format pc: 424 op: CASE (186)
        case 84:
        // SubProg format pc: 426 op: STARTLINE (58)

        /** text.e:1536		    			istext = 1*/
        // SubProg format pc: 428 op: ASSIGN_I (113)
        _istext_9188 = 1;
        // SubProg format pc: 431 op: ELSE (23)
        goto L6; // [431] 1072
        // SubProg format pc: 433 op: STARTLINE (58)

        /** text.e:1538		    		case ':' then*/
        // SubProg format pc: 435 op: CASE (186)
        case 58:
        // SubProg format pc: 437 op: STARTLINE (58)

        /** text.e:1539		    			while i < length(format_pattern) do*/
        // SubProg format pc: 439 op: NOP2 (110)
        // SubProg format pc: 441 op: NOPWHILE (158)
L8: // addr: 442 pc: 441 sub: 9162 op: 158
        // SubProg format pc: 442 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_9164)){
                _5110 = SEQ_PTR(_format_pattern_9164)->length;
        }
        else {
            _5110 = 1;
        }
        // SubProg format pc: 445 op: LESS_IFW_I (119)
        if (_i_9169 >= _5110)
        goto L6; // [445] 1072
        // SubProg format pc: 449 op: STARTLINE (58)

        /** text.e:1540		    				i += 1*/
        // SubProg format pc: 451 op: PLUS1_I (117)
        _i_9169 = _i_9169 + 1;
        // SubProg format pc: 455 op: STARTLINE (58)

        /** text.e:1541		    				tch = format_pattern[i]*/
        // SubProg format pc: 457 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _tch_9168 = (object)*(((s1_ptr)_2)->base + _i_9169);
        if (!IS_ATOM_INT(_tch_9168))
        _tch_9168 = (object)DBL_PTR(_tch_9168)->dbl;
        // SubProg format pc: 461 op: STARTLINE (58)

        /** text.e:1542		    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 463 op: FIND_FROM (176)
        _pos_9181 = find_from(_tch_9168, _5114, 1);
        // SubProg format pc: 468 op: STARTLINE (58)

        /** text.e:1543		    				if pos = 0 then*/
        // SubProg format pc: 470 op: EQUALS_IFW_I (121)
        if (_pos_9181 != 0)
        goto L9; // [470] 485
        // SubProg format pc: 474 op: STARTLINE (58)

        /** text.e:1544		    					i -= 1*/
        // SubProg format pc: 476 op: MINUS_I (116)
        _i_9169 = _i_9169 - 1;
        // SubProg format pc: 480 op: STARTLINE (58)

        /** text.e:1545		    					exit*/
        // SubProg format pc: 482 op: EXIT (61)
        goto L6; // [482] 1072
        // SubProg format pc: 484 op: NOP1 (159)
L9: // addr: 485 pc: 484 sub: 9162 op: 159
        // SubProg format pc: 485 op: STARTLINE (58)

        /** text.e:1547		    				width = width * 10 + pos - 1*/
        // SubProg format pc: 487 op: PRIVATE_INIT_CHECK (30)
        // SubProg format pc: 489 op: MULTIPLY (13)
        if (_width_9179 == (short)_width_9179){
            _5118 = _width_9179 * 10;
        }
        else{
            _5118 = NewDouble(_width_9179 * (eudouble)10);
        }
        // SubProg format pc: 493 op: PLUS (11)
        if (IS_ATOM_INT(_5118)) {
            _5119 = _5118 + _pos_9181;
            if ((object)((uintptr_t)_5119 + (uintptr_t)HIGH_BITS) >= 0){
                _5119 = NewDouble((eudouble)_5119);
            }
        }
        else {
            _5119 = NewDouble(DBL_PTR(_5118)->dbl + (eudouble)_pos_9181);
        }
        DeRef(_5118);
        _5118 = NOVALUE;
        // SubProg format pc: 497 op: MINUS (10)
        if (IS_ATOM_INT(_5119)) {
            _width_9179 = _5119 - 1;
        }
        else {
            _width_9179 = NewDouble(DBL_PTR(_5119)->dbl - (eudouble)1);
        }
        DeRef(_5119);
        _5119 = NOVALUE;
        // SubProg format pc: 501 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_width_9179)) {
            _1 = (object)(DBL_PTR(_width_9179)->dbl);
            DeRefDS(_width_9179);
            _width_9179 = _1;
        }
        // SubProg format pc: 503 op: STARTLINE (58)

        /** text.e:1548		    				if width = 0 then*/
        // SubProg format pc: 505 op: EQUALS_IFW_I (121)
        if (_width_9179 != 0)
        goto L8; // [505] 442
        // SubProg format pc: 509 op: STARTLINE (58)

        /** text.e:1549		    					zfill = '0'*/
        // SubProg format pc: 511 op: ASSIGN_I (113)
        _zfill_9175 = 48;
        // SubProg format pc: 514 op: NOP1 (159)
        // SubProg format pc: 515 op: STARTLINE (58)

        /** text.e:1551		    			end while*/
        // SubProg format pc: 517 op: ENDWHILE (22)
        goto L8; // [517] 442
        // SubProg format pc: 519 op: NOP1 (159)
        // SubProg format pc: 520 op: ELSE (23)
        goto L6; // [520] 1072
        // SubProg format pc: 522 op: STARTLINE (58)

        /** text.e:1553		    		case '.' then*/
        // SubProg format pc: 524 op: CASE (186)
        case 46:
        // SubProg format pc: 526 op: STARTLINE (58)

        /** text.e:1554		    			decs = 0*/
        // SubProg format pc: 528 op: ASSIGN_I (113)
        _decs_9180 = 0;
        // SubProg format pc: 531 op: STARTLINE (58)

        /** text.e:1555		    			while i < length(format_pattern) do*/
        // SubProg format pc: 533 op: NOP2 (110)
        // SubProg format pc: 535 op: NOPWHILE (158)
LA: // addr: 536 pc: 535 sub: 9162 op: 158
        // SubProg format pc: 536 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_9164)){
                _5122 = SEQ_PTR(_format_pattern_9164)->length;
        }
        else {
            _5122 = 1;
        }
        // SubProg format pc: 539 op: LESS_IFW_I (119)
        if (_i_9169 >= _5122)
        goto L6; // [539] 1072
        // SubProg format pc: 543 op: STARTLINE (58)

        /** text.e:1556		    				i += 1*/
        // SubProg format pc: 545 op: PLUS1_I (117)
        _i_9169 = _i_9169 + 1;
        // SubProg format pc: 549 op: STARTLINE (58)

        /** text.e:1557		    				tch = format_pattern[i]*/
        // SubProg format pc: 551 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _tch_9168 = (object)*(((s1_ptr)_2)->base + _i_9169);
        if (!IS_ATOM_INT(_tch_9168))
        _tch_9168 = (object)DBL_PTR(_tch_9168)->dbl;
        // SubProg format pc: 555 op: STARTLINE (58)

        /** text.e:1558		    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 557 op: FIND_FROM (176)
        _pos_9181 = find_from(_tch_9168, _5114, 1);
        // SubProg format pc: 562 op: STARTLINE (58)

        /** text.e:1559		    				if pos = 0 then*/
        // SubProg format pc: 564 op: EQUALS_IFW_I (121)
        if (_pos_9181 != 0)
        goto LB; // [564] 579
        // SubProg format pc: 568 op: STARTLINE (58)

        /** text.e:1560		    					i -= 1*/
        // SubProg format pc: 570 op: MINUS_I (116)
        _i_9169 = _i_9169 - 1;
        // SubProg format pc: 574 op: STARTLINE (58)

        /** text.e:1561		    					exit*/
        // SubProg format pc: 576 op: EXIT (61)
        goto L6; // [576] 1072
        // SubProg format pc: 578 op: NOP1 (159)
LB: // addr: 579 pc: 578 sub: 9162 op: 159
        // SubProg format pc: 579 op: STARTLINE (58)

        /** text.e:1563		    				decs = decs * 10 + pos - 1*/
        // SubProg format pc: 581 op: MULTIPLY (13)
        if (_decs_9180 == (short)_decs_9180){
            _5129 = _decs_9180 * 10;
        }
        else{
            _5129 = NewDouble(_decs_9180 * (eudouble)10);
        }
        // SubProg format pc: 585 op: PLUS (11)
        if (IS_ATOM_INT(_5129)) {
            _5130 = _5129 + _pos_9181;
            if ((object)((uintptr_t)_5130 + (uintptr_t)HIGH_BITS) >= 0){
                _5130 = NewDouble((eudouble)_5130);
            }
        }
        else {
            _5130 = NewDouble(DBL_PTR(_5129)->dbl + (eudouble)_pos_9181);
        }
        DeRef(_5129);
        _5129 = NOVALUE;
        // SubProg format pc: 589 op: MINUS (10)
        if (IS_ATOM_INT(_5130)) {
            _decs_9180 = _5130 - 1;
        }
        else {
            _decs_9180 = NewDouble(DBL_PTR(_5130)->dbl - (eudouble)1);
        }
        DeRef(_5130);
        _5130 = NOVALUE;
        // SubProg format pc: 593 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_decs_9180)) {
            _1 = (object)(DBL_PTR(_decs_9180)->dbl);
            DeRefDS(_decs_9180);
            _decs_9180 = _1;
        }
        // SubProg format pc: 595 op: STARTLINE (58)

        /** text.e:1564		    			end while*/
        // SubProg format pc: 597 op: ENDWHILE (22)
        goto LA; // [597] 536
        // SubProg format pc: 599 op: NOP1 (159)
        // SubProg format pc: 600 op: ELSE (23)
        goto L6; // [600] 1072
        // SubProg format pc: 602 op: STARTLINE (58)

        /** text.e:1566		    		case '{' then*/
        // SubProg format pc: 604 op: CASE (186)
        case 123:
        // SubProg format pc: 606 op: STARTLINE (58)

        /** text.e:1568		    			integer sp*/
        // SubProg format pc: 608 op: STARTLINE (58)

        /** text.e:1570		    			sp = i + 1*/
        // SubProg format pc: 610 op: PLUS1_I (117)
        _sp_9268 = _i_9169 + 1;
        // SubProg format pc: 614 op: STARTLINE (58)

        /** text.e:1571		    			i = sp*/
        // SubProg format pc: 616 op: ASSIGN_I (113)
        _i_9169 = _sp_9268;
        // SubProg format pc: 619 op: STARTLINE (58)

        /** text.e:1572		    			while i < length(format_pattern) do*/
        // SubProg format pc: 621 op: NOP2 (110)
        // SubProg format pc: 623 op: NOPWHILE (158)
LC: // addr: 624 pc: 623 sub: 9162 op: 158
        // SubProg format pc: 624 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_9164)){
                _5133 = SEQ_PTR(_format_pattern_9164)->length;
        }
        else {
            _5133 = 1;
        }
        // SubProg format pc: 627 op: LESS_IFW_I (119)
        if (_i_9169 >= _5133)
        goto LD; // [627] 672
        // SubProg format pc: 631 op: STARTLINE (58)

        /** text.e:1573		    				if format_pattern[i] = '}' then*/
        // SubProg format pc: 633 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _5135 = (object)*(((s1_ptr)_2)->base + _i_9169);
        // SubProg format pc: 637 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5135, 125)){
            _5135 = NOVALUE;
            goto LE; // [637] 646
        }
        _5135 = NOVALUE;
        // SubProg format pc: 641 op: STARTLINE (58)

        /** text.e:1574		    					exit*/
        // SubProg format pc: 643 op: EXIT (61)
        goto LD; // [643] 672
        // SubProg format pc: 645 op: NOP1 (159)
LE: // addr: 646 pc: 645 sub: 9162 op: 159
        // SubProg format pc: 646 op: STARTLINE (58)

        /** text.e:1576		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 648 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _5137 = (object)*(((s1_ptr)_2)->base + _i_9169);
        // SubProg format pc: 652 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5137, 93)){
            _5137 = NOVALUE;
            goto LF; // [652] 661
        }
        _5137 = NOVALUE;
        // SubProg format pc: 656 op: STARTLINE (58)

        /** text.e:1577		    					exit*/
        // SubProg format pc: 658 op: EXIT (61)
        goto LD; // [658] 672
        // SubProg format pc: 660 op: NOP1 (159)
LF: // addr: 661 pc: 660 sub: 9162 op: 159
        // SubProg format pc: 661 op: STARTLINE (58)

        /** text.e:1579		    				i += 1*/
        // SubProg format pc: 663 op: PLUS1_I (117)
        _i_9169 = _i_9169 + 1;
        // SubProg format pc: 667 op: STARTLINE (58)

        /** text.e:1580		    			end while*/
        // SubProg format pc: 669 op: ENDWHILE (22)
        goto LC; // [669] 624
        // SubProg format pc: 671 op: NOP1 (159)
LD: // addr: 672 pc: 671 sub: 9162 op: 159
        // SubProg format pc: 672 op: STARTLINE (58)

        /** text.e:1581		    			idname = trim(format_pattern[sp .. i-1]) & '='*/
        // SubProg format pc: 674 op: MINUS (10)
        _5140 = _i_9169 - 1;
        // SubProg format pc: 678 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5141;
        RHS_Slice(_format_pattern_9164, _sp_9268, _5140);
        // SubProg format pc: 683 op: PROC (27)
        RefDS(_3933);
        _5142 = _17trim(_5141, _3933, 0);
        _5141 = NOVALUE;
        // SubProg format pc: 689 op: CONCAT (15)
        if (IS_SEQUENCE(_5142) && IS_ATOM(61)) {
            Append(&_idname_9191, _5142, 61);
        }
        else if (IS_ATOM(_5142) && IS_SEQUENCE(61)) {
        }
        else {
            Concat((object_ptr)&_idname_9191, _5142, 61);
            DeRef(_5142);
            _5142 = NOVALUE;
        }
        DeRef(_5142);
        _5142 = NOVALUE;
        // SubProg format pc: 693 op: STARTLINE (58)

        /** text.e:1582	    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 695 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _5145 = (object)*(((s1_ptr)_2)->base + _i_9169);
        // SubProg format pc: 699 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5145, 93)){
            _5145 = NOVALUE;
            goto L10; // [699] 710
        }
        _5145 = NOVALUE;
        // SubProg format pc: 703 op: STARTLINE (58)

        /** text.e:1583	    					i -= 1*/
        // SubProg format pc: 705 op: MINUS_I (116)
        _i_9169 = _i_9169 - 1;
        // SubProg format pc: 709 op: NOP1 (159)
L10: // addr: 710 pc: 709 sub: 9162 op: 159
        // SubProg format pc: 710 op: STARTLINE (58)

        /** text.e:1586	    				for j = 1 to length(arg_list) do*/
        // SubProg format pc: 712 op: LENGTH (42)
        if (IS_SEQUENCE(_arg_list_9165)){
                _5148 = SEQ_PTR(_arg_list_9165)->length;
        }
        else {
            _5148 = 1;
        }
        // SubProg format pc: 715 op: FOR_I (125)
        {
            object _j_9290;
            _j_9290 = 1;
L11: // addr: 722 pc: 715 sub: 9162 op: 125
            if (_j_9290 > _5148){
                goto L12; // [715] 797
            }
            // SubProg format pc: 722 op: STARTLINE (58)

            /** text.e:1587	    					if sequence(arg_list[j]) then*/
            // SubProg format pc: 724 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_arg_list_9165);
            _5149 = (object)*(((s1_ptr)_2)->base + _j_9290);
            // SubProg format pc: 728 op: IS_A_SEQUENCE (68)
            _5150 = IS_SEQUENCE(_5149);
            _5149 = NOVALUE;
            // SubProg format pc: 731 op: IF (20)
            if (_5150 == 0)
            {
                _5150 = NOVALUE;
                goto L13; // [731] 768
            }
            else{
                _5150 = NOVALUE;
            }
            // SubProg format pc: 734 op: STARTLINE (58)

            /** text.e:1588	    						if search:begins(idname, arg_list[j]) then*/
            // SubProg format pc: 736 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_arg_list_9165);
            _5151 = (object)*(((s1_ptr)_2)->base + _j_9290);
            // SubProg format pc: 740 op: PROC (27)
            RefDS(_idname_9191);
            Ref(_5151);
            _5152 = _19begins(_idname_9191, _5151);
            _5151 = NOVALUE;
            // SubProg format pc: 745 op: IF (20)
            if (_5152 == 0) {
                DeRef(_5152);
                _5152 = NOVALUE;
                goto L14; // [745] 767
            }
            else {
                if (!IS_ATOM_INT(_5152) && DBL_PTR(_5152)->dbl == 0.0){
                    DeRef(_5152);
                    _5152 = NOVALUE;
                    goto L14; // [745] 767
                }
                DeRef(_5152);
                _5152 = NOVALUE;
            }
            DeRef(_5152);
            _5152 = NOVALUE;
            // SubProg format pc: 748 op: STARTLINE (58)

            /** text.e:1589	    							if argn = 0 then*/
            // SubProg format pc: 750 op: PRIVATE_INIT_CHECK (30)
            // SubProg format pc: 752 op: EQUALS_IFW_I (121)
            if (_argn_9182 != 0)
            goto L15; // [752] 766
            // SubProg format pc: 756 op: STARTLINE (58)

            /** text.e:1590	    								argn = j*/
            // SubProg format pc: 758 op: ASSIGN_I (113)
            _argn_9182 = _j_9290;
            // SubProg format pc: 761 op: STARTLINE (58)

            /** text.e:1591	    								exit*/
            // SubProg format pc: 763 op: EXIT (61)
            goto L12; // [763] 797
            // SubProg format pc: 765 op: NOP1 (159)
L15: // addr: 766 pc: 765 sub: 9162 op: 159
            // SubProg format pc: 766 op: NOP1 (159)
L14: // addr: 767 pc: 766 sub: 9162 op: 159
            // SubProg format pc: 767 op: NOP1 (159)
L13: // addr: 768 pc: 767 sub: 9162 op: 159
            // SubProg format pc: 768 op: STARTLINE (58)

            /** text.e:1595	    					if j = length(arg_list) then*/
            // SubProg format pc: 770 op: LENGTH (42)
            if (IS_SEQUENCE(_arg_list_9165)){
                    _5154 = SEQ_PTR(_arg_list_9165)->length;
            }
            else {
                _5154 = 1;
            }
            // SubProg format pc: 773 op: EQUALS_IFW_I (121)
            if (_j_9290 != _5154)
            goto L16; // [773] 790
            // SubProg format pc: 777 op: STARTLINE (58)

            /** text.e:1596	    						idname = ""*/
            // SubProg format pc: 779 op: ASSIGN (18)
            RefDS(_5);
            DeRef(_idname_9191);
            _idname_9191 = _5;
            // SubProg format pc: 782 op: SEQUENCE_CHECK (97)
            // SubProg format pc: 784 op: STARTLINE (58)

            /** text.e:1597	    						argn = -1*/
            // SubProg format pc: 786 op: ASSIGN_I (113)
            _argn_9182 = -1;
            // SubProg format pc: 789 op: NOP1 (159)
L16: // addr: 790 pc: 789 sub: 9162 op: 159
            // SubProg format pc: 790 op: STARTLINE (58)

            /** text.e:1599	    				end for*/
            // SubProg format pc: 792 op: ENDFOR_INT_UP1 (54)
            _j_9290 = _j_9290 + 1;
            goto L11; // [792] 722
L12: // addr: 797 pc: 792 sub: 9162 op: 54
            ;
        }
        // SubProg format pc: 797 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sp_9268
        // SubProg format pc: 799 op: ELSE (23)
        goto L6; // [799] 1072
        // SubProg format pc: 801 op: STARTLINE (58)

        /** text.e:1600		    		case '%' then*/
        // SubProg format pc: 803 op: CASE (186)
        case 37:
        // SubProg format pc: 805 op: STARTLINE (58)

        /** text.e:1602		    			integer sp*/
        // SubProg format pc: 807 op: STARTLINE (58)

        /** text.e:1604		    			sp = i + 1*/
        // SubProg format pc: 809 op: PLUS1_I (117)
        _sp_9304 = _i_9169 + 1;
        // SubProg format pc: 813 op: STARTLINE (58)

        /** text.e:1605		    			i = sp*/
        // SubProg format pc: 815 op: ASSIGN_I (113)
        _i_9169 = _sp_9304;
        // SubProg format pc: 818 op: STARTLINE (58)

        /** text.e:1606		    			while i < length(format_pattern) do*/
        // SubProg format pc: 820 op: NOP2 (110)
        // SubProg format pc: 822 op: NOPWHILE (158)
L17: // addr: 823 pc: 822 sub: 9162 op: 158
        // SubProg format pc: 823 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_9164)){
                _5157 = SEQ_PTR(_format_pattern_9164)->length;
        }
        else {
            _5157 = 1;
        }
        // SubProg format pc: 826 op: LESS_IFW_I (119)
        if (_i_9169 >= _5157)
        goto L18; // [826] 871
        // SubProg format pc: 830 op: STARTLINE (58)

        /** text.e:1607		    				if format_pattern[i] = '%' then*/
        // SubProg format pc: 832 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _5159 = (object)*(((s1_ptr)_2)->base + _i_9169);
        // SubProg format pc: 836 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5159, 37)){
            _5159 = NOVALUE;
            goto L19; // [836] 845
        }
        _5159 = NOVALUE;
        // SubProg format pc: 840 op: STARTLINE (58)

        /** text.e:1608		    					exit*/
        // SubProg format pc: 842 op: EXIT (61)
        goto L18; // [842] 871
        // SubProg format pc: 844 op: NOP1 (159)
L19: // addr: 845 pc: 844 sub: 9162 op: 159
        // SubProg format pc: 845 op: STARTLINE (58)

        /** text.e:1610		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 847 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _5161 = (object)*(((s1_ptr)_2)->base + _i_9169);
        // SubProg format pc: 851 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5161, 93)){
            _5161 = NOVALUE;
            goto L1A; // [851] 860
        }
        _5161 = NOVALUE;
        // SubProg format pc: 855 op: STARTLINE (58)

        /** text.e:1611		    					exit*/
        // SubProg format pc: 857 op: EXIT (61)
        goto L18; // [857] 871
        // SubProg format pc: 859 op: NOP1 (159)
L1A: // addr: 860 pc: 859 sub: 9162 op: 159
        // SubProg format pc: 860 op: STARTLINE (58)

        /** text.e:1613		    				i += 1*/
        // SubProg format pc: 862 op: PLUS1_I (117)
        _i_9169 = _i_9169 + 1;
        // SubProg format pc: 866 op: STARTLINE (58)

        /** text.e:1614		    			end while*/
        // SubProg format pc: 868 op: ENDWHILE (22)
        goto L17; // [868] 823
        // SubProg format pc: 870 op: NOP1 (159)
L18: // addr: 871 pc: 870 sub: 9162 op: 159
        // SubProg format pc: 871 op: STARTLINE (58)

        /** text.e:1615		    			envsym = trim(format_pattern[sp .. i-1])*/
        // SubProg format pc: 873 op: MINUS (10)
        _5164 = _i_9169 - 1;
        // SubProg format pc: 877 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5165;
        RHS_Slice(_format_pattern_9164, _sp_9304, _5164);
        // SubProg format pc: 882 op: PROC (27)
        RefDS(_3933);
        _0 = _envsym_9192;
        _envsym_9192 = _17trim(_5165, _3933, 0);
        DeRef(_0);
        _5165 = NOVALUE;
        // SubProg format pc: 888 op: STARTLINE (58)

        /** text.e:1616	    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 890 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _5167 = (object)*(((s1_ptr)_2)->base + _i_9169);
        // SubProg format pc: 894 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5167, 93)){
            _5167 = NOVALUE;
            goto L1B; // [894] 905
        }
        _5167 = NOVALUE;
        // SubProg format pc: 898 op: STARTLINE (58)

        /** text.e:1617	    					i -= 1*/
        // SubProg format pc: 900 op: MINUS_I (116)
        _i_9169 = _i_9169 - 1;
        // SubProg format pc: 904 op: NOP1 (159)
L1B: // addr: 905 pc: 904 sub: 9162 op: 159
        // SubProg format pc: 905 op: STARTLINE (58)

        /** text.e:1620	    				envvar = getenv(envsym)*/
        // SubProg format pc: 907 op: GETENV (91)
        DeRefi(_envvar_9193);
        _envvar_9193 = EGetEnv(_envsym_9192);
        // SubProg format pc: 910 op: STARTLINE (58)

        /** text.e:1622	    				argn = -1*/
        // SubProg format pc: 912 op: ASSIGN_I (113)
        _argn_9182 = -1;
        // SubProg format pc: 915 op: STARTLINE (58)

        /** text.e:1623	    				if atom(envvar) then*/
        // SubProg format pc: 917 op: IS_AN_ATOM (67)
        _5171 = IS_ATOM(_envvar_9193);
        // SubProg format pc: 920 op: IF (20)
        if (_5171 == 0)
        {
            _5171 = NOVALUE;
            goto L1C; // [920] 929
        }
        else{
            _5171 = NOVALUE;
        }
        // SubProg format pc: 923 op: STARTLINE (58)

        /** text.e:1624	    					envvar = ""*/
        // SubProg format pc: 925 op: ASSIGN (18)
        RefDS(_5);
        DeRefi(_envvar_9193);
        _envvar_9193 = _5;
        // SubProg format pc: 928 op: NOP1 (159)
L1C: // addr: 929 pc: 928 sub: 9162 op: 159
        // SubProg format pc: 929 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sp_9304
        // SubProg format pc: 931 op: ELSE (23)
        goto L6; // [931] 1072
        // SubProg format pc: 933 op: STARTLINE (58)

        /** text.e:1628		    		case '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' then*/
        // SubProg format pc: 935 op: CASE (186)
        case 48:
        // SubProg format pc: 937 op: CASE (186)
        case 49:
        // SubProg format pc: 939 op: CASE (186)
        case 50:
        // SubProg format pc: 941 op: CASE (186)
        case 51:
        // SubProg format pc: 943 op: CASE (186)
        case 52:
        // SubProg format pc: 945 op: CASE (186)
        case 53:
        // SubProg format pc: 947 op: CASE (186)
        case 54:
        // SubProg format pc: 949 op: CASE (186)
        case 55:
        // SubProg format pc: 951 op: CASE (186)
        case 56:
        // SubProg format pc: 953 op: CASE (186)
        case 57:
        // SubProg format pc: 955 op: STARTLINE (58)

        /** text.e:1629		    			if argn = 0 then*/
        // SubProg format pc: 957 op: EQUALS_IFW_I (121)
        if (_argn_9182 != 0)
        goto L6; // [957] 1072
        // SubProg format pc: 961 op: STARTLINE (58)

        /** text.e:1630			    			i -= 1*/
        // SubProg format pc: 963 op: MINUS_I (116)
        _i_9169 = _i_9169 - 1;
        // SubProg format pc: 967 op: STARTLINE (58)

        /** text.e:1631			    			while i < length(format_pattern) do*/
        // SubProg format pc: 969 op: NOP2 (110)
        // SubProg format pc: 971 op: NOPWHILE (158)
L1D: // addr: 972 pc: 971 sub: 9162 op: 158
        // SubProg format pc: 972 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_9164)){
                _5174 = SEQ_PTR(_format_pattern_9164)->length;
        }
        else {
            _5174 = 1;
        }
        // SubProg format pc: 975 op: LESS_IFW_I (119)
        if (_i_9169 >= _5174)
        goto L6; // [975] 1072
        // SubProg format pc: 979 op: STARTLINE (58)

        /** text.e:1632			    				i += 1*/
        // SubProg format pc: 981 op: PLUS1_I (117)
        _i_9169 = _i_9169 + 1;
        // SubProg format pc: 985 op: STARTLINE (58)

        /** text.e:1633			    				tch = format_pattern[i]*/
        // SubProg format pc: 987 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _tch_9168 = (object)*(((s1_ptr)_2)->base + _i_9169);
        if (!IS_ATOM_INT(_tch_9168))
        _tch_9168 = (object)DBL_PTR(_tch_9168)->dbl;
        // SubProg format pc: 991 op: STARTLINE (58)

        /** text.e:1634			    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 993 op: FIND_FROM (176)
        _pos_9181 = find_from(_tch_9168, _5114, 1);
        // SubProg format pc: 998 op: STARTLINE (58)

        /** text.e:1635			    				if pos = 0 then*/
        // SubProg format pc: 1000 op: EQUALS_IFW_I (121)
        if (_pos_9181 != 0)
        goto L1E; // [1000] 1015
        // SubProg format pc: 1004 op: STARTLINE (58)

        /** text.e:1636			    					i -= 1*/
        // SubProg format pc: 1006 op: MINUS_I (116)
        _i_9169 = _i_9169 - 1;
        // SubProg format pc: 1010 op: STARTLINE (58)

        /** text.e:1637			    					exit*/
        // SubProg format pc: 1012 op: EXIT (61)
        goto L6; // [1012] 1072
        // SubProg format pc: 1014 op: NOP1 (159)
L1E: // addr: 1015 pc: 1014 sub: 9162 op: 159
        // SubProg format pc: 1015 op: STARTLINE (58)

        /** text.e:1639			    				argn = argn * 10 + pos - 1*/
        // SubProg format pc: 1017 op: MULTIPLY (13)
        if (_argn_9182 == (short)_argn_9182){
            _5181 = _argn_9182 * 10;
        }
        else{
            _5181 = NewDouble(_argn_9182 * (eudouble)10);
        }
        // SubProg format pc: 1021 op: PLUS (11)
        if (IS_ATOM_INT(_5181)) {
            _5182 = _5181 + _pos_9181;
            if ((object)((uintptr_t)_5182 + (uintptr_t)HIGH_BITS) >= 0){
                _5182 = NewDouble((eudouble)_5182);
            }
        }
        else {
            _5182 = NewDouble(DBL_PTR(_5181)->dbl + (eudouble)_pos_9181);
        }
        DeRef(_5181);
        _5181 = NOVALUE;
        // SubProg format pc: 1025 op: MINUS (10)
        if (IS_ATOM_INT(_5182)) {
            _argn_9182 = _5182 - 1;
        }
        else {
            _argn_9182 = NewDouble(DBL_PTR(_5182)->dbl - (eudouble)1);
        }
        DeRef(_5182);
        _5182 = NOVALUE;
        // SubProg format pc: 1029 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_argn_9182)) {
            _1 = (object)(DBL_PTR(_argn_9182)->dbl);
            DeRefDS(_argn_9182);
            _argn_9182 = _1;
        }
        // SubProg format pc: 1031 op: STARTLINE (58)

        /** text.e:1640			    			end while*/
        // SubProg format pc: 1033 op: ENDWHILE (22)
        goto L1D; // [1033] 972
        // SubProg format pc: 1035 op: NOP1 (159)
        // SubProg format pc: 1036 op: NOP1 (159)
        // SubProg format pc: 1037 op: ELSE (23)
        goto L6; // [1037] 1072
        // SubProg format pc: 1039 op: STARTLINE (58)

        /** text.e:1643		    		case ',' then*/
        // SubProg format pc: 1041 op: CASE (186)
        case 44:
        // SubProg format pc: 1043 op: STARTLINE (58)

        /** text.e:1644		    			if i < length(format_pattern) then*/
        // SubProg format pc: 1045 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_9164)){
                _5184 = SEQ_PTR(_format_pattern_9164)->length;
        }
        else {
            _5184 = 1;
        }
        // SubProg format pc: 1048 op: LESS_IFW_I (119)
        if (_i_9169 >= _5184)
        goto L6; // [1048] 1072
        // SubProg format pc: 1052 op: STARTLINE (58)

        /** text.e:1645		    				i +=1*/
        // SubProg format pc: 1054 op: PLUS1_I (117)
        _i_9169 = _i_9169 + 1;
        // SubProg format pc: 1058 op: STARTLINE (58)

        /** text.e:1646		    				tsep = format_pattern[i]*/
        // SubProg format pc: 1060 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_9164);
        _tsep_9187 = (object)*(((s1_ptr)_2)->base + _i_9169);
        if (!IS_ATOM_INT(_tsep_9187))
        _tsep_9187 = (object)DBL_PTR(_tsep_9187)->dbl;
        // SubProg format pc: 1064 op: NOP1 (159)
        // SubProg format pc: 1065 op: ELSE (23)
        goto L6; // [1065] 1072
        // SubProg format pc: 1067 op: STARTLINE (58)

        /** text.e:1649		    		case else*/
        // SubProg format pc: 1069 op: CASE (186)
        default:
        // SubProg format pc: 1071 op: NOPSWITCH (187)
    ;}L6: // addr: 1072 pc: 1071 sub: 9162 op: 187
    // SubProg format pc: 1072 op: STARTLINE (58)

    /** text.e:1653	    		if tend > 0 then*/
    // SubProg format pc: 1074 op: GREATER_IFW_I (124)
    if (_tend_9170 <= 0)
    goto L1F; // [1074] 3401
    // SubProg format pc: 1078 op: STARTLINE (58)

    /** text.e:1655	    			sequence argtext = ""*/
    // SubProg format pc: 1080 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_argtext_9351);
    _argtext_9351 = _5;
    // SubProg format pc: 1083 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1085 op: STARTLINE (58)

    /** text.e:1657	    			if argn = 0 then*/
    // SubProg format pc: 1087 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1089 op: EQUALS_IFW_I (121)
    if (_argn_9182 != 0)
    goto L20; // [1089] 1100
    // SubProg format pc: 1093 op: STARTLINE (58)

    /** text.e:1658	    				argn = argl + 1*/
    // SubProg format pc: 1095 op: PLUS1_I (117)
    _argn_9182 = _argl_9183 + 1;
    // SubProg format pc: 1099 op: NOP1 (159)
L20: // addr: 1100 pc: 1099 sub: 9162 op: 159
    // SubProg format pc: 1100 op: STARTLINE (58)

    /** text.e:1660	    			argl = argn*/
    // SubProg format pc: 1102 op: ASSIGN_I (113)
    _argl_9183 = _argn_9182;
    // SubProg format pc: 1105 op: STARTLINE (58)

    /** text.e:1662	    			if argn < 1 or argn > length(arg_list) then*/
    // SubProg format pc: 1107 op: LESS (1)
    _5191 = (_argn_9182 < 1);
    // SubProg format pc: 1111 op: SC1_OR_IF (147)
    if (_5191 != 0) {
        goto L21; // [1111] 1127
    }
    // SubProg format pc: 1115 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_list_9165)){
            _5193 = SEQ_PTR(_arg_list_9165)->length;
    }
    else {
        _5193 = 1;
    }
    // SubProg format pc: 1118 op: GREATER (6)
    _5194 = (_argn_9182 > _5193);
    _5193 = NOVALUE;
    // SubProg format pc: 1122 op: NOP1 (159)
    // SubProg format pc: 1123 op: IF (20)
    if (_5194 == 0)
    {
        DeRef(_5194);
        _5194 = NOVALUE;
        goto L22; // [1123] 1169
    }
    else{
        DeRef(_5194);
        _5194 = NOVALUE;
    }
    // SubProg format pc: 1126 op: NOP1 (159)
L21: // addr: 1127 pc: 1126 sub: 9162 op: 159
    // SubProg format pc: 1127 op: STARTLINE (58)

    /** text.e:1663	    				if length(envvar) > 0 then*/
    // SubProg format pc: 1129 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1131 op: LENGTH (42)
    if (IS_SEQUENCE(_envvar_9193)){
            _5195 = SEQ_PTR(_envvar_9193)->length;
    }
    else {
        _5195 = 1;
    }
    // SubProg format pc: 1134 op: GREATER_IFW_I (124)
    if (_5195 <= 0)
    goto L23; // [1134] 1153
    // SubProg format pc: 1138 op: STARTLINE (58)

    /** text.e:1664	    					argtext = envvar*/
    // SubProg format pc: 1140 op: ASSIGN (18)
    Ref(_envvar_9193);
    DeRef(_argtext_9351);
    _argtext_9351 = _envvar_9193;
    // SubProg format pc: 1143 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1145 op: STARTLINE (58)

    /** text.e:1665		    				currargv = envvar*/
    // SubProg format pc: 1147 op: ASSIGN (18)
    Ref(_envvar_9193);
    DeRef(_currargv_9190);
    _currargv_9190 = _envvar_9193;
    // SubProg format pc: 1150 op: ELSE (23)
    goto L24; // [1150] 2582
    // SubProg format pc: 1152 op: NOP1 (159)
L23: // addr: 1153 pc: 1152 sub: 9162 op: 159
    // SubProg format pc: 1153 op: STARTLINE (58)

    /** text.e:1667	    					argtext = ""*/
    // SubProg format pc: 1155 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_argtext_9351);
    _argtext_9351 = _5;
    // SubProg format pc: 1158 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1160 op: STARTLINE (58)

    /** text.e:1668		    				currargv =""*/
    // SubProg format pc: 1162 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_currargv_9190);
    _currargv_9190 = _5;
    // SubProg format pc: 1165 op: NOP1 (159)
    // SubProg format pc: 1166 op: ELSE (23)
    goto L24; // [1166] 2582
    // SubProg format pc: 1168 op: NOP1 (159)
L22: // addr: 1169 pc: 1168 sub: 9162 op: 159
    // SubProg format pc: 1169 op: STARTLINE (58)

    /** text.e:1671						if string(arg_list[argn]) then*/
    // SubProg format pc: 1171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5197 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1175 op: PROC (27)
    Ref(_5197);
    _5198 = _13string(_5197);
    _5197 = NOVALUE;
    // SubProg format pc: 1179 op: IF (20)
    if (_5198 == 0) {
        DeRef(_5198);
        _5198 = NOVALUE;
        goto L25; // [1179] 1229
    }
    else {
        if (!IS_ATOM_INT(_5198) && DBL_PTR(_5198)->dbl == 0.0){
            DeRef(_5198);
            _5198 = NOVALUE;
            goto L25; // [1179] 1229
        }
        DeRef(_5198);
        _5198 = NOVALUE;
    }
    DeRef(_5198);
    _5198 = NOVALUE;
    // SubProg format pc: 1182 op: STARTLINE (58)

    /** text.e:1672							if length(idname) > 0 then*/
    // SubProg format pc: 1184 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1186 op: LENGTH (42)
    if (IS_SEQUENCE(_idname_9191)){
            _5199 = SEQ_PTR(_idname_9191)->length;
    }
    else {
        _5199 = 1;
    }
    // SubProg format pc: 1189 op: GREATER_IFW_I (124)
    if (_5199 <= 0)
    goto L26; // [1189] 1217
    // SubProg format pc: 1193 op: STARTLINE (58)

    /** text.e:1673								argtext = arg_list[argn][length(idname) + 1 .. $]*/
    // SubProg format pc: 1195 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5201 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1199 op: LENGTH (42)
    if (IS_SEQUENCE(_idname_9191)){
            _5202 = SEQ_PTR(_idname_9191)->length;
    }
    else {
        _5202 = 1;
    }
    // SubProg format pc: 1202 op: PLUS1 (93)
    _5203 = _5202 + 1;
    _5202 = NOVALUE;
    // SubProg format pc: 1206 op: LENGTH (42)
    if (IS_SEQUENCE(_5201)){
            _5204 = SEQ_PTR(_5201)->length;
    }
    else {
        _5204 = 1;
    }
    // SubProg format pc: 1209 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_5201, _5203, _5204);
    _5201 = NOVALUE;
    // SubProg format pc: 1214 op: ELSE (23)
    goto L27; // [1214] 2575
    // SubProg format pc: 1216 op: NOP1 (159)
L26: // addr: 1217 pc: 1216 sub: 9162 op: 159
    // SubProg format pc: 1217 op: STARTLINE (58)

    /** text.e:1675								argtext = arg_list[argn]*/
    // SubProg format pc: 1219 op: RHS_SUBS_CHECK (92)
    DeRef(_argtext_9351);
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _argtext_9351 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    Ref(_argtext_9351);
    // SubProg format pc: 1223 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1225 op: NOP1 (159)
    // SubProg format pc: 1226 op: ELSE (23)
    goto L27; // [1226] 2575
    // SubProg format pc: 1228 op: NOP1 (159)
L25: // addr: 1229 pc: 1228 sub: 9162 op: 159
    // SubProg format pc: 1229 op: STARTLINE (58)

    /** text.e:1678						elsif integer(arg_list[argn]) */
    // SubProg format pc: 1231 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5207 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1235 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_5207))
    _5208 = 1;
    else if (IS_ATOM_DBL(_5207))
    _5208 = IS_ATOM_INT(DoubleToInt(_5207));
    else
    _5208 = 0;
    _5207 = NOVALUE;
    // SubProg format pc: 1238 op: SC1_AND (141)
    if (_5208 == 0) {
        _5209 = 0;
        goto L28; // [1238] 1254
    }
    // SubProg format pc: 1242 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5210 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1246 op: LESSEQ (5)
    if (IS_ATOM_INT(_5210)) {
        _5212 = (_5210 <= 67108863);
    }
    else {
        _5212 = binary_op(LESSEQ, _5210, 67108863);
    }
    _5210 = NOVALUE;
    // SubProg format pc: 1250 op: SC2_AND (142)
    if (IS_ATOM_INT(_5212))
    _5209 = (_5212 != 0);
    else
    _5209 = DBL_PTR(_5212)->dbl != 0.0;
    // SubProg format pc: 1253 op: NOP1 (159)
L28: // addr: 1254 pc: 1253 sub: 9162 op: 159
    // SubProg format pc: 1254 op: SC1_AND_IF (146)
    if (_5209 == 0) {
        goto L29; // [1254] 1747
    }
    // SubProg format pc: 1258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5214 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1262 op: GREATEREQ (2)
    _5217 = binary_op(GREATEREQ, _5214, _5216);
    _5214 = NOVALUE;
    // SubProg format pc: 1266 op: NOP1 (159)
    // SubProg format pc: 1267 op: IF (20)
    if (_5217 == 0) {
        DeRef(_5217);
        _5217 = NOVALUE;
        goto L29; // [1267] 1747
    }
    else {
        if (!IS_ATOM_INT(_5217) && DBL_PTR(_5217)->dbl == 0.0){
            DeRef(_5217);
            _5217 = NOVALUE;
            goto L29; // [1267] 1747
        }
        DeRef(_5217);
        _5217 = NOVALUE;
    }
    DeRef(_5217);
    _5217 = NOVALUE;
    // SubProg format pc: 1270 op: STARTLINE (58)

    /** text.e:1682							if istext then*/
    // SubProg format pc: 1272 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1274 op: IF (20)
    if (_istext_9188 == 0)
    {
        goto L2A; // [1274] 1298
    }
    else{
    }
    // SubProg format pc: 1277 op: STARTLINE (58)

    /** text.e:1683								argtext = {and_bits(0xFFFF_FFFF, math:abs(arg_list[argn]))}*/
    // SubProg format pc: 1279 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5218 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1283 op: PROC (27)
    Ref(_5218);
    _5219 = _14abs(_5218);
    _5218 = NOVALUE;
    // SubProg format pc: 1287 op: AND_BITS (56)
    _5220 = binary_op(AND_BITS, _406, _5219);
    DeRef(_5219);
    _5219 = NOVALUE;
    // SubProg format pc: 1291 op: RIGHT_BRACE_N (31)
    _0 = _argtext_9351;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5220;
    _argtext_9351 = MAKE_SEQ(_1);
    DeRef(_0);
    _5220 = NOVALUE;
    // SubProg format pc: 1295 op: ELSE (23)
    goto L27; // [1295] 2575
    // SubProg format pc: 1297 op: NOP1 (159)
L2A: // addr: 1298 pc: 1297 sub: 9162 op: 159
    // SubProg format pc: 1298 op: STARTLINE (58)

    /** text.e:1685							elsif bwz != 0 and arg_list[argn] = 0 then*/
    // SubProg format pc: 1300 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1302 op: NOTEQ (4)
    _5222 = (_bwz_9176 != 0);
    // SubProg format pc: 1306 op: SC1_AND_IF (146)
    if (_5222 == 0) {
        goto L2B; // [1306] 1333
    }
    // SubProg format pc: 1310 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5224 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1314 op: EQUALS (3)
    if (IS_ATOM_INT(_5224)) {
        _5225 = (_5224 == 0);
    }
    else {
        _5225 = binary_op(EQUALS, _5224, 0);
    }
    _5224 = NOVALUE;
    // SubProg format pc: 1318 op: NOP1 (159)
    // SubProg format pc: 1319 op: IF (20)
    if (_5225 == 0) {
        DeRef(_5225);
        _5225 = NOVALUE;
        goto L2B; // [1319] 1333
    }
    else {
        if (!IS_ATOM_INT(_5225) && DBL_PTR(_5225)->dbl == 0.0){
            DeRef(_5225);
            _5225 = NOVALUE;
            goto L2B; // [1319] 1333
        }
        DeRef(_5225);
        _5225 = NOVALUE;
    }
    DeRef(_5225);
    _5225 = NOVALUE;
    // SubProg format pc: 1322 op: STARTLINE (58)

    /** text.e:1686								argtext = repeat(' ', width)*/
    // SubProg format pc: 1324 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1326 op: REPEAT (32)
    DeRef(_argtext_9351);
    _argtext_9351 = Repeat(32, _width_9179);
    // SubProg format pc: 1330 op: ELSE (23)
    goto L27; // [1330] 2575
    // SubProg format pc: 1332 op: NOP1 (159)
L2B: // addr: 1333 pc: 1332 sub: 9162 op: 159
    // SubProg format pc: 1333 op: STARTLINE (58)

    /** text.e:1688							elsif binout = 1 then*/
    // SubProg format pc: 1335 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1337 op: EQUALS_IFW_I (121)
    if (_binout_9186 != 1)
    goto L2C; // [1337] 1411
    // SubProg format pc: 1341 op: STARTLINE (58)

    /** text.e:1689								argtext = stdseq:reverse( convert:int_to_bits(arg_list[argn], 32)) + '0'*/
    // SubProg format pc: 1343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5228 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1347 op: PROC (27)
    Ref(_5228);
    _5229 = _18int_to_bits(_5228, 32);
    _5228 = NOVALUE;
    // SubProg format pc: 1352 op: PROC (27)
    _5230 = _23reverse(_5229, 1, 0);
    _5229 = NOVALUE;
    // SubProg format pc: 1358 op: PLUS (11)
    DeRef(_argtext_9351);
    if (IS_ATOM_INT(_5230)) {
        _argtext_9351 = _5230 + 48;
        if ((object)((uintptr_t)_argtext_9351 + (uintptr_t)HIGH_BITS) >= 0){
            _argtext_9351 = NewDouble((eudouble)_argtext_9351);
        }
    }
    else {
        _argtext_9351 = binary_op(PLUS, _5230, 48);
    }
    DeRef(_5230);
    _5230 = NOVALUE;
    // SubProg format pc: 1362 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1364 op: STARTLINE (58)

    /** text.e:1690								for ib = 1 to length(argtext) do*/
    // SubProg format pc: 1366 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5232 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5232 = 1;
    }
    // SubProg format pc: 1369 op: FOR_I (125)
    {
        object _ib_9409;
        _ib_9409 = 1;
L2D: // addr: 1376 pc: 1369 sub: 9162 op: 125
        if (_ib_9409 > _5232){
            goto L2E; // [1369] 1408
        }
        // SubProg format pc: 1376 op: STARTLINE (58)

        /** text.e:1691									if argtext[ib] = '1' then*/
        // SubProg format pc: 1378 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_argtext_9351);
        _5233 = (object)*(((s1_ptr)_2)->base + _ib_9409);
        // SubProg format pc: 1382 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5233, 49)){
            _5233 = NOVALUE;
            goto L2F; // [1382] 1401
        }
        _5233 = NOVALUE;
        // SubProg format pc: 1386 op: STARTLINE (58)

        /** text.e:1692										argtext = argtext[ib .. $]*/
        // SubProg format pc: 1388 op: LENGTH (42)
        if (IS_SEQUENCE(_argtext_9351)){
                _5235 = SEQ_PTR(_argtext_9351)->length;
        }
        else {
            _5235 = 1;
        }
        // SubProg format pc: 1391 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_argtext_9351;
        RHS_Slice(_argtext_9351, _ib_9409, _5235);
        // SubProg format pc: 1396 op: STARTLINE (58)

        /** text.e:1693										exit*/
        // SubProg format pc: 1398 op: EXIT (61)
        goto L2E; // [1398] 1408
        // SubProg format pc: 1400 op: NOP1 (159)
L2F: // addr: 1401 pc: 1400 sub: 9162 op: 159
        // SubProg format pc: 1401 op: STARTLINE (58)

        /** text.e:1695								end for*/
        // SubProg format pc: 1403 op: ENDFOR_INT_UP1 (54)
        _ib_9409 = _ib_9409 + 1;
        goto L2D; // [1403] 1376
L2E: // addr: 1408 pc: 1403 sub: 9162 op: 54
        ;
    }
    // SubProg format pc: 1408 op: ELSE (23)
    goto L27; // [1408] 2575
    // SubProg format pc: 1410 op: NOP1 (159)
L2C: // addr: 1411 pc: 1410 sub: 9162 op: 159
    // SubProg format pc: 1411 op: STARTLINE (58)

    /** text.e:1697							elsif hexout = 0 then*/
    // SubProg format pc: 1413 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1415 op: EQUALS_IFW_I (121)
    if (_hexout_9185 != 0)
    goto L30; // [1415] 1681
    // SubProg format pc: 1419 op: STARTLINE (58)

    /** text.e:1698								argtext = sprintf("%d", arg_list[argn])*/
    // SubProg format pc: 1421 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5238 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1425 op: SPRINTF (53)
    DeRef(_argtext_9351);
    _argtext_9351 = EPrintf(-9999999, _1413, _5238);
    _5238 = NOVALUE;
    // SubProg format pc: 1429 op: STARTLINE (58)

    /** text.e:1699								if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1431 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1433 op: NOTEQ (4)
    _5240 = (_zfill_9175 != 0);
    // SubProg format pc: 1437 op: SC1_AND_IF (146)
    if (_5240 == 0) {
        goto L31; // [1437] 1534
    }
    // SubProg format pc: 1441 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1443 op: GREATER (6)
    _5242 = (_width_9179 > 0);
    // SubProg format pc: 1447 op: NOP1 (159)
    // SubProg format pc: 1448 op: IF (20)
    if (_5242 == 0)
    {
        DeRef(_5242);
        _5242 = NOVALUE;
        goto L31; // [1448] 1534
    }
    else{
        DeRef(_5242);
        _5242 = NOVALUE;
    }
    // SubProg format pc: 1451 op: STARTLINE (58)

    /** text.e:1700									if argtext[1] = '-' then*/
    // SubProg format pc: 1453 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_9351);
    _5243 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1457 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5243, 45)){
        _5243 = NOVALUE;
        goto L32; // [1457] 1503
    }
    _5243 = NOVALUE;
    // SubProg format pc: 1461 op: STARTLINE (58)

    /** text.e:1701										if width > length(argtext) then*/
    // SubProg format pc: 1463 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1465 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5245 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5245 = 1;
    }
    // SubProg format pc: 1468 op: GREATER_IFW_I (124)
    if (_width_9179 <= _5245)
    goto L33; // [1468] 1533
    // SubProg format pc: 1472 op: STARTLINE (58)

    /** text.e:1702											argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    // SubProg format pc: 1474 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5247 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5247 = 1;
    }
    // SubProg format pc: 1477 op: MINUS (10)
    _5248 = _width_9179 - _5247;
    _5247 = NOVALUE;
    // SubProg format pc: 1481 op: REPEAT (32)
    _5249 = Repeat(48, _5248);
    _5248 = NOVALUE;
    // SubProg format pc: 1485 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5250 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5250 = 1;
    }
    // SubProg format pc: 1488 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5251;
    RHS_Slice(_argtext_9351, 2, _5250);
    // SubProg format pc: 1493 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5251;
        concat_list[1] = _5249;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5251);
    _5251 = NOVALUE;
    DeRefDS(_5249);
    _5249 = NOVALUE;
    // SubProg format pc: 1499 op: NOP1 (159)
    // SubProg format pc: 1500 op: ELSE (23)
    goto L33; // [1500] 1533
    // SubProg format pc: 1502 op: NOP1 (159)
L32: // addr: 1503 pc: 1502 sub: 9162 op: 159
    // SubProg format pc: 1503 op: STARTLINE (58)

    /** text.e:1705										if width > length(argtext) then*/
    // SubProg format pc: 1505 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1507 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5253 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5253 = 1;
    }
    // SubProg format pc: 1510 op: GREATER_IFW_I (124)
    if (_width_9179 <= _5253)
    goto L34; // [1510] 1532
    // SubProg format pc: 1514 op: STARTLINE (58)

    /** text.e:1706											argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1516 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5255 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5255 = 1;
    }
    // SubProg format pc: 1519 op: MINUS (10)
    _5256 = _width_9179 - _5255;
    _5255 = NOVALUE;
    // SubProg format pc: 1523 op: REPEAT (32)
    _5257 = Repeat(48, _5256);
    _5256 = NOVALUE;
    // SubProg format pc: 1527 op: CONCAT (15)
    Concat((object_ptr)&_argtext_9351, _5257, _argtext_9351);
    DeRefDS(_5257);
    _5257 = NOVALUE;
    DeRef(_5257);
    _5257 = NOVALUE;
    // SubProg format pc: 1531 op: NOP1 (159)
L34: // addr: 1532 pc: 1531 sub: 9162 op: 159
    // SubProg format pc: 1532 op: NOP1 (159)
L33: // addr: 1533 pc: 1532 sub: 9162 op: 159
    // SubProg format pc: 1533 op: NOP1 (159)
L31: // addr: 1534 pc: 1533 sub: 9162 op: 159
    // SubProg format pc: 1534 op: STARTLINE (58)

    /** text.e:1711								if arg_list[argn] > 0 then*/
    // SubProg format pc: 1536 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5259 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1540 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _5259, 0)){
        _5259 = NOVALUE;
        goto L35; // [1540] 1588
    }
    _5259 = NOVALUE;
    // SubProg format pc: 1544 op: STARTLINE (58)

    /** text.e:1712									if psign then*/
    // SubProg format pc: 1546 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1548 op: IF (20)
    if (_psign_9173 == 0)
    {
        goto L27; // [1548] 2575
    }
    else{
    }
    // SubProg format pc: 1551 op: STARTLINE (58)

    /** text.e:1713										if zfill = 0 then*/
    // SubProg format pc: 1553 op: EQUALS_IFW_I (121)
    if (_zfill_9175 != 0)
    goto L36; // [1553] 1566
    // SubProg format pc: 1557 op: STARTLINE (58)

    /** text.e:1714											argtext = '+' & argtext*/
    // SubProg format pc: 1559 op: CONCAT (15)
    Prepend(&_argtext_9351, _argtext_9351, 43);
    // SubProg format pc: 1563 op: ELSE (23)
    goto L27; // [1563] 2575
    // SubProg format pc: 1565 op: NOP1 (159)
L36: // addr: 1566 pc: 1565 sub: 9162 op: 159
    // SubProg format pc: 1566 op: STARTLINE (58)

    /** text.e:1715										elsif argtext[1] = '0' then*/
    // SubProg format pc: 1568 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_9351);
    _5263 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1572 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5263, 48)){
        _5263 = NOVALUE;
        goto L27; // [1572] 2575
    }
    _5263 = NOVALUE;
    // SubProg format pc: 1576 op: STARTLINE (58)

    /** text.e:1716											argtext[1] = '+'*/
    // SubProg format pc: 1578 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_9351);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_9351 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 43;
    DeRef(_1);
    // SubProg format pc: 1582 op: NOP1 (159)
    // SubProg format pc: 1583 op: NOP1 (159)
    // SubProg format pc: 1584 op: NOP1 (159)
    // SubProg format pc: 1585 op: ELSE (23)
    goto L27; // [1585] 2575
    // SubProg format pc: 1587 op: NOP1 (159)
L35: // addr: 1588 pc: 1587 sub: 9162 op: 159
    // SubProg format pc: 1588 op: STARTLINE (58)

    /** text.e:1719								elsif arg_list[argn] < 0 then*/
    // SubProg format pc: 1590 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5265 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1594 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _5265, 0)){
        _5265 = NOVALUE;
        goto L27; // [1594] 2575
    }
    _5265 = NOVALUE;
    // SubProg format pc: 1598 op: STARTLINE (58)

    /** text.e:1720									if msign then*/
    // SubProg format pc: 1600 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1602 op: IF (20)
    if (_msign_9174 == 0)
    {
        goto L27; // [1602] 2575
    }
    else{
    }
    // SubProg format pc: 1605 op: STARTLINE (58)

    /** text.e:1721										if zfill = 0 then*/
    // SubProg format pc: 1607 op: EQUALS_IFW_I (121)
    if (_zfill_9175 != 0)
    goto L37; // [1607] 1630
    // SubProg format pc: 1611 op: STARTLINE (58)

    /** text.e:1722											argtext = '(' & argtext[2..$] & ')'*/
    // SubProg format pc: 1613 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5268 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5268 = 1;
    }
    // SubProg format pc: 1616 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5269;
    RHS_Slice(_argtext_9351, 2, _5268);
    // SubProg format pc: 1621 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5269;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5269);
    _5269 = NOVALUE;
    // SubProg format pc: 1627 op: ELSE (23)
    goto L27; // [1627] 2575
    // SubProg format pc: 1629 op: NOP1 (159)
L37: // addr: 1630 pc: 1629 sub: 9162 op: 159
    // SubProg format pc: 1630 op: STARTLINE (58)

    /** text.e:1724											if argtext[2] = '0' then*/
    // SubProg format pc: 1632 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_9351);
    _5272 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg format pc: 1636 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5272, 48)){
        _5272 = NOVALUE;
        goto L38; // [1636] 1659
    }
    _5272 = NOVALUE;
    // SubProg format pc: 1640 op: STARTLINE (58)

    /** text.e:1725												argtext = '(' & argtext[3..$] & ')'*/
    // SubProg format pc: 1642 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5274 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5274 = 1;
    }
    // SubProg format pc: 1645 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5275;
    RHS_Slice(_argtext_9351, 3, _5274);
    // SubProg format pc: 1650 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5275;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5275);
    _5275 = NOVALUE;
    // SubProg format pc: 1656 op: ELSE (23)
    goto L27; // [1656] 2575
    // SubProg format pc: 1658 op: NOP1 (159)
L38: // addr: 1659 pc: 1658 sub: 9162 op: 159
    // SubProg format pc: 1659 op: STARTLINE (58)

    /** text.e:1729												argtext = argtext[2..$] & ')'*/
    // SubProg format pc: 1661 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5277 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5277 = 1;
    }
    // SubProg format pc: 1664 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5278;
    RHS_Slice(_argtext_9351, 2, _5277);
    // SubProg format pc: 1669 op: CONCAT (15)
    Append(&_argtext_9351, _5278, 41);
    DeRefDS(_5278);
    _5278 = NOVALUE;
    // SubProg format pc: 1673 op: NOP1 (159)
    // SubProg format pc: 1674 op: NOP1 (159)
    // SubProg format pc: 1675 op: NOP1 (159)
    // SubProg format pc: 1676 op: NOP1 (159)
    // SubProg format pc: 1677 op: NOP1 (159)
    // SubProg format pc: 1678 op: ELSE (23)
    goto L27; // [1678] 2575
    // SubProg format pc: 1680 op: NOP1 (159)
L30: // addr: 1681 pc: 1680 sub: 9162 op: 159
    // SubProg format pc: 1681 op: STARTLINE (58)

    /** text.e:1735								argtext = sprintf("%x", arg_list[argn])*/
    // SubProg format pc: 1683 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5281 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1687 op: SPRINTF (53)
    DeRef(_argtext_9351);
    _argtext_9351 = EPrintf(-9999999, _5280, _5281);
    _5281 = NOVALUE;
    // SubProg format pc: 1691 op: STARTLINE (58)

    /** text.e:1736								if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1693 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1695 op: NOTEQ (4)
    _5283 = (_zfill_9175 != 0);
    // SubProg format pc: 1699 op: SC1_AND_IF (146)
    if (_5283 == 0) {
        goto L27; // [1699] 2575
    }
    // SubProg format pc: 1703 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1705 op: GREATER (6)
    _5285 = (_width_9179 > 0);
    // SubProg format pc: 1709 op: NOP1 (159)
    // SubProg format pc: 1710 op: IF (20)
    if (_5285 == 0)
    {
        DeRef(_5285);
        _5285 = NOVALUE;
        goto L27; // [1710] 2575
    }
    else{
        DeRef(_5285);
        _5285 = NOVALUE;
    }
    // SubProg format pc: 1713 op: STARTLINE (58)

    /** text.e:1737									if width > length(argtext) then*/
    // SubProg format pc: 1715 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1717 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5286 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5286 = 1;
    }
    // SubProg format pc: 1720 op: GREATER_IFW_I (124)
    if (_width_9179 <= _5286)
    goto L27; // [1720] 2575
    // SubProg format pc: 1724 op: STARTLINE (58)

    /** text.e:1738										argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1726 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5288 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5288 = 1;
    }
    // SubProg format pc: 1729 op: MINUS (10)
    _5289 = _width_9179 - _5288;
    _5288 = NOVALUE;
    // SubProg format pc: 1733 op: REPEAT (32)
    _5290 = Repeat(48, _5289);
    _5289 = NOVALUE;
    // SubProg format pc: 1737 op: CONCAT (15)
    Concat((object_ptr)&_argtext_9351, _5290, _argtext_9351);
    DeRefDS(_5290);
    _5290 = NOVALUE;
    DeRef(_5290);
    _5290 = NOVALUE;
    // SubProg format pc: 1741 op: NOP1 (159)
    // SubProg format pc: 1742 op: NOP1 (159)
    // SubProg format pc: 1743 op: NOP1 (159)
    // SubProg format pc: 1744 op: ELSE (23)
    goto L27; // [1744] 2575
    // SubProg format pc: 1746 op: NOP1 (159)
L29: // addr: 1747 pc: 1746 sub: 9162 op: 159
    // SubProg format pc: 1747 op: STARTLINE (58)

    /** text.e:1743						elsif atom(arg_list[argn]) then*/
    // SubProg format pc: 1749 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5292 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1753 op: IS_AN_ATOM (67)
    _5293 = IS_ATOM(_5292);
    _5292 = NOVALUE;
    // SubProg format pc: 1756 op: IF (20)
    if (_5293 == 0)
    {
        _5293 = NOVALUE;
        goto L39; // [1756] 2159
    }
    else{
        _5293 = NOVALUE;
    }
    // SubProg format pc: 1759 op: STARTLINE (58)

    /** text.e:1744							if istext then*/
    // SubProg format pc: 1761 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1763 op: IF (20)
    if (_istext_9188 == 0)
    {
        goto L3A; // [1763] 1790
    }
    else{
    }
    // SubProg format pc: 1766 op: STARTLINE (58)

    /** text.e:1745								argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(arg_list[argn])))}*/
    // SubProg format pc: 1768 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5294 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1772 op: FLOOR (83)
    if (IS_ATOM_INT(_5294))
    _5295 = e_floor(_5294);
    else
    _5295 = unary_op(FLOOR, _5294);
    _5294 = NOVALUE;
    // SubProg format pc: 1775 op: PROC (27)
    _5296 = _14abs(_5295);
    _5295 = NOVALUE;
    // SubProg format pc: 1779 op: AND_BITS (56)
    _5297 = binary_op(AND_BITS, _406, _5296);
    DeRef(_5296);
    _5296 = NOVALUE;
    // SubProg format pc: 1783 op: RIGHT_BRACE_N (31)
    _0 = _argtext_9351;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5297;
    _argtext_9351 = MAKE_SEQ(_1);
    DeRef(_0);
    _5297 = NOVALUE;
    // SubProg format pc: 1787 op: ELSE (23)
    goto L27; // [1787] 2575
    // SubProg format pc: 1789 op: NOP1 (159)
L3A: // addr: 1790 pc: 1789 sub: 9162 op: 159
    // SubProg format pc: 1790 op: STARTLINE (58)

    /** text.e:1748								if hexout then*/
    // SubProg format pc: 1792 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1794 op: IF (20)
    if (_hexout_9185 == 0)
    {
        goto L3B; // [1794] 1862
    }
    else{
    }
    // SubProg format pc: 1797 op: STARTLINE (58)

    /** text.e:1749									argtext = sprintf("%x", arg_list[argn])*/
    // SubProg format pc: 1799 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5299 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1803 op: SPRINTF (53)
    DeRef(_argtext_9351);
    _argtext_9351 = EPrintf(-9999999, _5280, _5299);
    _5299 = NOVALUE;
    // SubProg format pc: 1807 op: STARTLINE (58)

    /** text.e:1750									if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1809 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1811 op: NOTEQ (4)
    _5301 = (_zfill_9175 != 0);
    // SubProg format pc: 1815 op: SC1_AND_IF (146)
    if (_5301 == 0) {
        goto L27; // [1815] 2575
    }
    // SubProg format pc: 1819 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1821 op: GREATER (6)
    _5303 = (_width_9179 > 0);
    // SubProg format pc: 1825 op: NOP1 (159)
    // SubProg format pc: 1826 op: IF (20)
    if (_5303 == 0)
    {
        DeRef(_5303);
        _5303 = NOVALUE;
        goto L27; // [1826] 2575
    }
    else{
        DeRef(_5303);
        _5303 = NOVALUE;
    }
    // SubProg format pc: 1829 op: STARTLINE (58)

    /** text.e:1751										if width > length(argtext) then*/
    // SubProg format pc: 1831 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1833 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5304 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5304 = 1;
    }
    // SubProg format pc: 1836 op: GREATER_IFW_I (124)
    if (_width_9179 <= _5304)
    goto L27; // [1836] 2575
    // SubProg format pc: 1840 op: STARTLINE (58)

    /** text.e:1752											argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1842 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5306 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5306 = 1;
    }
    // SubProg format pc: 1845 op: MINUS (10)
    _5307 = _width_9179 - _5306;
    _5306 = NOVALUE;
    // SubProg format pc: 1849 op: REPEAT (32)
    _5308 = Repeat(48, _5307);
    _5307 = NOVALUE;
    // SubProg format pc: 1853 op: CONCAT (15)
    Concat((object_ptr)&_argtext_9351, _5308, _argtext_9351);
    DeRefDS(_5308);
    _5308 = NOVALUE;
    DeRef(_5308);
    _5308 = NOVALUE;
    // SubProg format pc: 1857 op: NOP1 (159)
    // SubProg format pc: 1858 op: NOP1 (159)
    // SubProg format pc: 1859 op: ELSE (23)
    goto L27; // [1859] 2575
    // SubProg format pc: 1861 op: NOP1 (159)
L3B: // addr: 1862 pc: 1861 sub: 9162 op: 159
    // SubProg format pc: 1862 op: STARTLINE (58)

    /** text.e:1756									argtext = trim(sprintf("%15.15g", arg_list[argn]))*/
    // SubProg format pc: 1864 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5311 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 1868 op: SPRINTF (53)
    _5312 = EPrintf(-9999999, _5310, _5311);
    _5311 = NOVALUE;
    // SubProg format pc: 1872 op: PROC (27)
    RefDS(_3933);
    _0 = _argtext_9351;
    _argtext_9351 = _17trim(_5312, _3933, 0);
    DeRef(_0);
    _5312 = NOVALUE;
    // SubProg format pc: 1878 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1880 op: STARTLINE (58)

    /** text.e:1758									while ep != 0 with entry do*/
    // SubProg format pc: 1882 op: ELSE (23)
    goto L3C; // [1882] 1905
    // SubProg format pc: 1884 op: NOPWHILE (158)
L3D: // addr: 1885 pc: 1884 sub: 9162 op: 158
    // SubProg format pc: 1885 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1887 op: NOTEQ_IFW_I (122)
    if (_ep_9194 == 0)
    goto L3E; // [1887] 1917
    // SubProg format pc: 1891 op: STARTLINE (58)

    /** text.e:1759										argtext = remove(argtext, ep+2)*/
    // SubProg format pc: 1893 op: PLUS (11)
    _5315 = _ep_9194 + 2;
    if ((object)((uintptr_t)_5315 + (uintptr_t)HIGH_BITS) >= 0){
        _5315 = NewDouble((eudouble)_5315);
    }
    // SubProg format pc: 1897 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_9351);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_5315)) ? _5315 : (object)(DBL_PTR(_5315)->dbl);
        int stop = (IS_ATOM_INT(_5315)) ? _5315 : (object)(DBL_PTR(_5315)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_9351), start, &_argtext_9351 );
            }
            else Tail(SEQ_PTR(_argtext_9351), stop+1, &_argtext_9351);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_9351), start, &_argtext_9351);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_9351 = Remove_elements(start, stop, (SEQ_PTR(_argtext_9351)->ref == 1));
        }
    }
    DeRef(_5315);
    _5315 = NOVALUE;
    _5315 = NOVALUE;
    // SubProg format pc: 1902 op: STARTLINE (58)

    /** text.e:1760									entry*/
    // SubProg format pc: 1904 op: NOP1 (159)
L3C: // addr: 1905 pc: 1904 sub: 9162 op: 159
    // SubProg format pc: 1905 op: STARTLINE (58)

    /** text.e:1761										ep = match("e+0", argtext)*/
    // SubProg format pc: 1907 op: MATCH_FROM (177)
    _ep_9194 = e_match_from(_5317, _argtext_9351, 1);
    // SubProg format pc: 1912 op: STARTLINE (58)

    /** text.e:1762									end while*/
    // SubProg format pc: 1914 op: ENDWHILE (22)
    goto L3D; // [1914] 1885
    // SubProg format pc: 1916 op: NOP1 (159)
L3E: // addr: 1917 pc: 1916 sub: 9162 op: 159
    // SubProg format pc: 1917 op: STARTLINE (58)

    /** text.e:1763									if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1919 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1921 op: NOTEQ (4)
    _5319 = (_zfill_9175 != 0);
    // SubProg format pc: 1925 op: SC1_AND_IF (146)
    if (_5319 == 0) {
        goto L3F; // [1925] 2010
    }
    // SubProg format pc: 1929 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1931 op: GREATER (6)
    _5321 = (_width_9179 > 0);
    // SubProg format pc: 1935 op: NOP1 (159)
    // SubProg format pc: 1936 op: IF (20)
    if (_5321 == 0)
    {
        DeRef(_5321);
        _5321 = NOVALUE;
        goto L3F; // [1936] 2010
    }
    else{
        DeRef(_5321);
        _5321 = NOVALUE;
    }
    // SubProg format pc: 1939 op: STARTLINE (58)

    /** text.e:1764										if width > length(argtext) then*/
    // SubProg format pc: 1941 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1943 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5322 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5322 = 1;
    }
    // SubProg format pc: 1946 op: GREATER_IFW_I (124)
    if (_width_9179 <= _5322)
    goto L40; // [1946] 2009
    // SubProg format pc: 1950 op: STARTLINE (58)

    /** text.e:1765											if argtext[1] = '-' then*/
    // SubProg format pc: 1952 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_9351);
    _5324 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1956 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5324, 45)){
        _5324 = NOVALUE;
        goto L41; // [1956] 1990
    }
    _5324 = NOVALUE;
    // SubProg format pc: 1960 op: STARTLINE (58)

    /** text.e:1766												argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    // SubProg format pc: 1962 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5326 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5326 = 1;
    }
    // SubProg format pc: 1965 op: MINUS (10)
    _5327 = _width_9179 - _5326;
    _5326 = NOVALUE;
    // SubProg format pc: 1969 op: REPEAT (32)
    _5328 = Repeat(48, _5327);
    _5327 = NOVALUE;
    // SubProg format pc: 1973 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5329 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5329 = 1;
    }
    // SubProg format pc: 1976 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5330;
    RHS_Slice(_argtext_9351, 2, _5329);
    // SubProg format pc: 1981 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5330;
        concat_list[1] = _5328;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5330);
    _5330 = NOVALUE;
    DeRefDS(_5328);
    _5328 = NOVALUE;
    // SubProg format pc: 1987 op: ELSE (23)
    goto L42; // [1987] 2008
    // SubProg format pc: 1989 op: NOP1 (159)
L41: // addr: 1990 pc: 1989 sub: 9162 op: 159
    // SubProg format pc: 1990 op: STARTLINE (58)

    /** text.e:1768												argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1992 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5332 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5332 = 1;
    }
    // SubProg format pc: 1995 op: MINUS (10)
    _5333 = _width_9179 - _5332;
    _5332 = NOVALUE;
    // SubProg format pc: 1999 op: REPEAT (32)
    _5334 = Repeat(48, _5333);
    _5333 = NOVALUE;
    // SubProg format pc: 2003 op: CONCAT (15)
    Concat((object_ptr)&_argtext_9351, _5334, _argtext_9351);
    DeRefDS(_5334);
    _5334 = NOVALUE;
    DeRef(_5334);
    _5334 = NOVALUE;
    // SubProg format pc: 2007 op: NOP1 (159)
L42: // addr: 2008 pc: 2007 sub: 9162 op: 159
    // SubProg format pc: 2008 op: NOP1 (159)
L40: // addr: 2009 pc: 2008 sub: 9162 op: 159
    // SubProg format pc: 2009 op: NOP1 (159)
L3F: // addr: 2010 pc: 2009 sub: 9162 op: 159
    // SubProg format pc: 2010 op: STARTLINE (58)

    /** text.e:1772									if arg_list[argn] > 0 then*/
    // SubProg format pc: 2012 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5336 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2016 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _5336, 0)){
        _5336 = NOVALUE;
        goto L43; // [2016] 2064
    }
    _5336 = NOVALUE;
    // SubProg format pc: 2020 op: STARTLINE (58)

    /** text.e:1773										if psign  then*/
    // SubProg format pc: 2022 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2024 op: IF (20)
    if (_psign_9173 == 0)
    {
        goto L27; // [2024] 2575
    }
    else{
    }
    // SubProg format pc: 2027 op: STARTLINE (58)

    /** text.e:1774											if zfill = 0 then*/
    // SubProg format pc: 2029 op: EQUALS_IFW_I (121)
    if (_zfill_9175 != 0)
    goto L44; // [2029] 2042
    // SubProg format pc: 2033 op: STARTLINE (58)

    /** text.e:1775												argtext = '+' & argtext*/
    // SubProg format pc: 2035 op: CONCAT (15)
    Prepend(&_argtext_9351, _argtext_9351, 43);
    // SubProg format pc: 2039 op: ELSE (23)
    goto L27; // [2039] 2575
    // SubProg format pc: 2041 op: NOP1 (159)
L44: // addr: 2042 pc: 2041 sub: 9162 op: 159
    // SubProg format pc: 2042 op: STARTLINE (58)

    /** text.e:1776											elsif argtext[1] = '0' then*/
    // SubProg format pc: 2044 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_9351);
    _5340 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 2048 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5340, 48)){
        _5340 = NOVALUE;
        goto L27; // [2048] 2575
    }
    _5340 = NOVALUE;
    // SubProg format pc: 2052 op: STARTLINE (58)

    /** text.e:1777												argtext[1] = '+'*/
    // SubProg format pc: 2054 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_9351);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_9351 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 43;
    DeRef(_1);
    // SubProg format pc: 2058 op: NOP1 (159)
    // SubProg format pc: 2059 op: NOP1 (159)
    // SubProg format pc: 2060 op: NOP1 (159)
    // SubProg format pc: 2061 op: ELSE (23)
    goto L27; // [2061] 2575
    // SubProg format pc: 2063 op: NOP1 (159)
L43: // addr: 2064 pc: 2063 sub: 9162 op: 159
    // SubProg format pc: 2064 op: STARTLINE (58)

    /** text.e:1780									elsif arg_list[argn] < 0 then*/
    // SubProg format pc: 2066 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5342 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2070 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _5342, 0)){
        _5342 = NOVALUE;
        goto L27; // [2070] 2575
    }
    _5342 = NOVALUE;
    // SubProg format pc: 2074 op: STARTLINE (58)

    /** text.e:1781										if msign then*/
    // SubProg format pc: 2076 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2078 op: IF (20)
    if (_msign_9174 == 0)
    {
        goto L27; // [2078] 2575
    }
    else{
    }
    // SubProg format pc: 2081 op: STARTLINE (58)

    /** text.e:1782											if zfill = 0 then*/
    // SubProg format pc: 2083 op: EQUALS_IFW_I (121)
    if (_zfill_9175 != 0)
    goto L45; // [2083] 2106
    // SubProg format pc: 2087 op: STARTLINE (58)

    /** text.e:1783												argtext = '(' & argtext[2..$] & ')'*/
    // SubProg format pc: 2089 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5345 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5345 = 1;
    }
    // SubProg format pc: 2092 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5346;
    RHS_Slice(_argtext_9351, 2, _5345);
    // SubProg format pc: 2097 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5346;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5346);
    _5346 = NOVALUE;
    // SubProg format pc: 2103 op: ELSE (23)
    goto L27; // [2103] 2575
    // SubProg format pc: 2105 op: NOP1 (159)
L45: // addr: 2106 pc: 2105 sub: 9162 op: 159
    // SubProg format pc: 2106 op: STARTLINE (58)

    /** text.e:1785												if argtext[2] = '0' then*/
    // SubProg format pc: 2108 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_9351);
    _5348 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg format pc: 2112 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5348, 48)){
        _5348 = NOVALUE;
        goto L46; // [2112] 2135
    }
    _5348 = NOVALUE;
    // SubProg format pc: 2116 op: STARTLINE (58)

    /** text.e:1786													argtext = '(' & argtext[3..$] & ')'*/
    // SubProg format pc: 2118 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5350 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5350 = 1;
    }
    // SubProg format pc: 2121 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5351;
    RHS_Slice(_argtext_9351, 3, _5350);
    // SubProg format pc: 2126 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5351;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5351);
    _5351 = NOVALUE;
    // SubProg format pc: 2132 op: ELSE (23)
    goto L27; // [2132] 2575
    // SubProg format pc: 2134 op: NOP1 (159)
L46: // addr: 2135 pc: 2134 sub: 9162 op: 159
    // SubProg format pc: 2135 op: STARTLINE (58)

    /** text.e:1788													argtext = argtext[2..$] & ')'*/
    // SubProg format pc: 2137 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5353 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5353 = 1;
    }
    // SubProg format pc: 2140 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5354;
    RHS_Slice(_argtext_9351, 2, _5353);
    // SubProg format pc: 2145 op: CONCAT (15)
    Append(&_argtext_9351, _5354, 41);
    DeRefDS(_5354);
    _5354 = NOVALUE;
    // SubProg format pc: 2149 op: NOP1 (159)
    // SubProg format pc: 2150 op: NOP1 (159)
    // SubProg format pc: 2151 op: NOP1 (159)
    // SubProg format pc: 2152 op: NOP1 (159)
    // SubProg format pc: 2153 op: NOP1 (159)
    // SubProg format pc: 2154 op: NOP1 (159)
    // SubProg format pc: 2155 op: NOP1 (159)
    // SubProg format pc: 2156 op: ELSE (23)
    goto L27; // [2156] 2575
    // SubProg format pc: 2158 op: NOP1 (159)
L39: // addr: 2159 pc: 2158 sub: 9162 op: 159
    // SubProg format pc: 2159 op: STARTLINE (58)

    /** text.e:1797							if alt != 0 and length(arg_list[argn]) = 2 then*/
    // SubProg format pc: 2161 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2163 op: NOTEQ (4)
    _5356 = (_alt_9178 != 0);
    // SubProg format pc: 2167 op: SC1_AND_IF (146)
    if (_5356 == 0) {
        goto L47; // [2167] 2486
    }
    // SubProg format pc: 2171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5358 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2175 op: LENGTH (42)
    if (IS_SEQUENCE(_5358)){
            _5359 = SEQ_PTR(_5358)->length;
    }
    else {
        _5359 = 1;
    }
    _5358 = NOVALUE;
    // SubProg format pc: 2178 op: EQUALS (3)
    _5360 = (_5359 == 2);
    _5359 = NOVALUE;
    // SubProg format pc: 2182 op: NOP1 (159)
    // SubProg format pc: 2183 op: IF (20)
    if (_5360 == 0)
    {
        DeRef(_5360);
        _5360 = NOVALUE;
        goto L47; // [2183] 2486
    }
    else{
        DeRef(_5360);
        _5360 = NOVALUE;
    }
    // SubProg format pc: 2186 op: STARTLINE (58)

    /** text.e:1798								object tempv*/
    // SubProg format pc: 2188 op: STARTLINE (58)

    /** text.e:1799								if atom(prevargv) then*/
    // SubProg format pc: 2190 op: IS_AN_ATOM (67)
    _5361 = IS_ATOM(_prevargv_9189);
    // SubProg format pc: 2193 op: IF (20)
    if (_5361 == 0)
    {
        _5361 = NOVALUE;
        goto L48; // [2193] 2229
    }
    else{
        _5361 = NOVALUE;
    }
    // SubProg format pc: 2196 op: STARTLINE (58)

    /** text.e:1800									if prevargv != 1 then*/
    // SubProg format pc: 2198 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _prevargv_9189, 1)){
        goto L49; // [2198] 2215
    }
    // SubProg format pc: 2202 op: STARTLINE (58)

    /** text.e:1801										tempv = arg_list[argn][1]*/
    // SubProg format pc: 2204 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5363 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2208 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_9583);
    _2 = (object)SEQ_PTR(_5363);
    _tempv_9583 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_9583);
    _5363 = NOVALUE;
    // SubProg format pc: 2212 op: ELSE (23)
    goto L4A; // [2212] 2263
    // SubProg format pc: 2214 op: NOP1 (159)
L49: // addr: 2215 pc: 2214 sub: 9162 op: 159
    // SubProg format pc: 2215 op: STARTLINE (58)

    /** text.e:1803										tempv = arg_list[argn][2]*/
    // SubProg format pc: 2217 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5365 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2221 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_9583);
    _2 = (object)SEQ_PTR(_5365);
    _tempv_9583 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_9583);
    _5365 = NOVALUE;
    // SubProg format pc: 2225 op: NOP1 (159)
    // SubProg format pc: 2226 op: ELSE (23)
    goto L4A; // [2226] 2263
    // SubProg format pc: 2228 op: NOP1 (159)
L48: // addr: 2229 pc: 2228 sub: 9162 op: 159
    // SubProg format pc: 2229 op: STARTLINE (58)

    /** text.e:1806									if length(prevargv) = 0 then*/
    // SubProg format pc: 2231 op: LENGTH (42)
    if (IS_SEQUENCE(_prevargv_9189)){
            _5367 = SEQ_PTR(_prevargv_9189)->length;
    }
    else {
        _5367 = 1;
    }
    // SubProg format pc: 2234 op: EQUALS_IFW_I (121)
    if (_5367 != 0)
    goto L4B; // [2234] 2251
    // SubProg format pc: 2238 op: STARTLINE (58)

    /** text.e:1807										tempv = arg_list[argn][1]*/
    // SubProg format pc: 2240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5369 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2244 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_9583);
    _2 = (object)SEQ_PTR(_5369);
    _tempv_9583 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_9583);
    _5369 = NOVALUE;
    // SubProg format pc: 2248 op: ELSE (23)
    goto L4C; // [2248] 2262
    // SubProg format pc: 2250 op: NOP1 (159)
L4B: // addr: 2251 pc: 2250 sub: 9162 op: 159
    // SubProg format pc: 2251 op: STARTLINE (58)

    /** text.e:1809										tempv = arg_list[argn][2]*/
    // SubProg format pc: 2253 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5371 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2257 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_9583);
    _2 = (object)SEQ_PTR(_5371);
    _tempv_9583 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_9583);
    _5371 = NOVALUE;
    // SubProg format pc: 2261 op: NOP1 (159)
L4C: // addr: 2262 pc: 2261 sub: 9162 op: 159
    // SubProg format pc: 2262 op: NOP1 (159)
L4A: // addr: 2263 pc: 2262 sub: 9162 op: 159
    // SubProg format pc: 2263 op: STARTLINE (58)

    /** text.e:1813								if string(tempv) then*/
    // SubProg format pc: 2265 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2267 op: PROC (27)
    Ref(_tempv_9583);
    _5373 = _13string(_tempv_9583);
    // SubProg format pc: 2271 op: IF (20)
    if (_5373 == 0) {
        DeRef(_5373);
        _5373 = NOVALUE;
        goto L4D; // [2271] 2284
    }
    else {
        if (!IS_ATOM_INT(_5373) && DBL_PTR(_5373)->dbl == 0.0){
            DeRef(_5373);
            _5373 = NOVALUE;
            goto L4D; // [2271] 2284
        }
        DeRef(_5373);
        _5373 = NOVALUE;
    }
    DeRef(_5373);
    _5373 = NOVALUE;
    // SubProg format pc: 2274 op: STARTLINE (58)

    /** text.e:1814									argtext = tempv*/
    // SubProg format pc: 2276 op: ASSIGN (18)
    Ref(_tempv_9583);
    DeRef(_argtext_9351);
    _argtext_9351 = _tempv_9583;
    // SubProg format pc: 2279 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2281 op: ELSE (23)
    goto L4E; // [2281] 2481
    // SubProg format pc: 2283 op: NOP1 (159)
L4D: // addr: 2284 pc: 2283 sub: 9162 op: 159
    // SubProg format pc: 2284 op: STARTLINE (58)

    /** text.e:1815								elsif integer(tempv) then*/
    // SubProg format pc: 2286 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_tempv_9583))
    _5374 = 1;
    else if (IS_ATOM_DBL(_tempv_9583))
    _5374 = IS_ATOM_INT(DoubleToInt(_tempv_9583));
    else
    _5374 = 0;
    // SubProg format pc: 2289 op: IF (20)
    if (_5374 == 0)
    {
        _5374 = NOVALUE;
        goto L4F; // [2289] 2355
    }
    else{
        _5374 = NOVALUE;
    }
    // SubProg format pc: 2292 op: STARTLINE (58)

    /** text.e:1816									if istext then*/
    // SubProg format pc: 2294 op: IF (20)
    if (_istext_9188 == 0)
    {
        goto L50; // [2294] 2314
    }
    else{
    }
    // SubProg format pc: 2297 op: STARTLINE (58)

    /** text.e:1817										argtext = {and_bits(0xFFFF_FFFF, math:abs(tempv))}*/
    // SubProg format pc: 2299 op: PROC (27)
    Ref(_tempv_9583);
    _5375 = _14abs(_tempv_9583);
    // SubProg format pc: 2303 op: AND_BITS (56)
    _5376 = binary_op(AND_BITS, _406, _5375);
    DeRef(_5375);
    _5375 = NOVALUE;
    // SubProg format pc: 2307 op: RIGHT_BRACE_N (31)
    _0 = _argtext_9351;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5376;
    _argtext_9351 = MAKE_SEQ(_1);
    DeRef(_0);
    _5376 = NOVALUE;
    // SubProg format pc: 2311 op: ELSE (23)
    goto L4E; // [2311] 2481
    // SubProg format pc: 2313 op: NOP1 (159)
L50: // addr: 2314 pc: 2313 sub: 9162 op: 159
    // SubProg format pc: 2314 op: STARTLINE (58)

    /** text.e:1819									elsif bwz != 0 and tempv = 0 then*/
    // SubProg format pc: 2316 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2318 op: NOTEQ (4)
    _5378 = (_bwz_9176 != 0);
    // SubProg format pc: 2322 op: SC1_AND_IF (146)
    if (_5378 == 0) {
        goto L51; // [2322] 2345
    }
    // SubProg format pc: 2326 op: EQUALS (3)
    if (IS_ATOM_INT(_tempv_9583)) {
        _5380 = (_tempv_9583 == 0);
    }
    else {
        _5380 = binary_op(EQUALS, _tempv_9583, 0);
    }
    // SubProg format pc: 2330 op: NOP1 (159)
    // SubProg format pc: 2331 op: IF (20)
    if (_5380 == 0) {
        DeRef(_5380);
        _5380 = NOVALUE;
        goto L51; // [2331] 2345
    }
    else {
        if (!IS_ATOM_INT(_5380) && DBL_PTR(_5380)->dbl == 0.0){
            DeRef(_5380);
            _5380 = NOVALUE;
            goto L51; // [2331] 2345
        }
        DeRef(_5380);
        _5380 = NOVALUE;
    }
    DeRef(_5380);
    _5380 = NOVALUE;
    // SubProg format pc: 2334 op: STARTLINE (58)

    /** text.e:1820										argtext = repeat(' ', width)*/
    // SubProg format pc: 2336 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2338 op: REPEAT (32)
    DeRef(_argtext_9351);
    _argtext_9351 = Repeat(32, _width_9179);
    // SubProg format pc: 2342 op: ELSE (23)
    goto L4E; // [2342] 2481
    // SubProg format pc: 2344 op: NOP1 (159)
L51: // addr: 2345 pc: 2344 sub: 9162 op: 159
    // SubProg format pc: 2345 op: STARTLINE (58)

    /** text.e:1822										argtext = sprintf("%d", tempv)*/
    // SubProg format pc: 2347 op: SPRINTF (53)
    DeRef(_argtext_9351);
    _argtext_9351 = EPrintf(-9999999, _1413, _tempv_9583);
    // SubProg format pc: 2351 op: NOP1 (159)
    // SubProg format pc: 2352 op: ELSE (23)
    goto L4E; // [2352] 2481
    // SubProg format pc: 2354 op: NOP1 (159)
L4F: // addr: 2355 pc: 2354 sub: 9162 op: 159
    // SubProg format pc: 2355 op: STARTLINE (58)

    /** text.e:1825								elsif atom(tempv) then*/
    // SubProg format pc: 2357 op: IS_AN_ATOM (67)
    _5383 = IS_ATOM(_tempv_9583);
    // SubProg format pc: 2360 op: IF (20)
    if (_5383 == 0)
    {
        _5383 = NOVALUE;
        goto L52; // [2360] 2437
    }
    else{
        _5383 = NOVALUE;
    }
    // SubProg format pc: 2363 op: STARTLINE (58)

    /** text.e:1826									if istext then*/
    // SubProg format pc: 2365 op: IF (20)
    if (_istext_9188 == 0)
    {
        goto L53; // [2365] 2388
    }
    else{
    }
    // SubProg format pc: 2368 op: STARTLINE (58)

    /** text.e:1827										argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(tempv)))}*/
    // SubProg format pc: 2370 op: FLOOR (83)
    if (IS_ATOM_INT(_tempv_9583))
    _5384 = e_floor(_tempv_9583);
    else
    _5384 = unary_op(FLOOR, _tempv_9583);
    // SubProg format pc: 2373 op: PROC (27)
    _5385 = _14abs(_5384);
    _5384 = NOVALUE;
    // SubProg format pc: 2377 op: AND_BITS (56)
    _5386 = binary_op(AND_BITS, _406, _5385);
    DeRef(_5385);
    _5385 = NOVALUE;
    // SubProg format pc: 2381 op: RIGHT_BRACE_N (31)
    _0 = _argtext_9351;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5386;
    _argtext_9351 = MAKE_SEQ(_1);
    DeRef(_0);
    _5386 = NOVALUE;
    // SubProg format pc: 2385 op: ELSE (23)
    goto L4E; // [2385] 2481
    // SubProg format pc: 2387 op: NOP1 (159)
L53: // addr: 2388 pc: 2387 sub: 9162 op: 159
    // SubProg format pc: 2388 op: STARTLINE (58)

    /** text.e:1828									elsif bwz != 0 and tempv = 0 then*/
    // SubProg format pc: 2390 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2392 op: NOTEQ (4)
    _5388 = (_bwz_9176 != 0);
    // SubProg format pc: 2396 op: SC1_AND_IF (146)
    if (_5388 == 0) {
        goto L54; // [2396] 2419
    }
    // SubProg format pc: 2400 op: EQUALS (3)
    if (IS_ATOM_INT(_tempv_9583)) {
        _5390 = (_tempv_9583 == 0);
    }
    else {
        _5390 = binary_op(EQUALS, _tempv_9583, 0);
    }
    // SubProg format pc: 2404 op: NOP1 (159)
    // SubProg format pc: 2405 op: IF (20)
    if (_5390 == 0) {
        DeRef(_5390);
        _5390 = NOVALUE;
        goto L54; // [2405] 2419
    }
    else {
        if (!IS_ATOM_INT(_5390) && DBL_PTR(_5390)->dbl == 0.0){
            DeRef(_5390);
            _5390 = NOVALUE;
            goto L54; // [2405] 2419
        }
        DeRef(_5390);
        _5390 = NOVALUE;
    }
    DeRef(_5390);
    _5390 = NOVALUE;
    // SubProg format pc: 2408 op: STARTLINE (58)

    /** text.e:1829										argtext = repeat(' ', width)*/
    // SubProg format pc: 2410 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2412 op: REPEAT (32)
    DeRef(_argtext_9351);
    _argtext_9351 = Repeat(32, _width_9179);
    // SubProg format pc: 2416 op: ELSE (23)
    goto L4E; // [2416] 2481
    // SubProg format pc: 2418 op: NOP1 (159)
L54: // addr: 2419 pc: 2418 sub: 9162 op: 159
    // SubProg format pc: 2419 op: STARTLINE (58)

    /** text.e:1831										argtext = trim(sprintf("%15.15g", tempv))*/
    // SubProg format pc: 2421 op: SPRINTF (53)
    _5392 = EPrintf(-9999999, _5310, _tempv_9583);
    // SubProg format pc: 2425 op: PROC (27)
    RefDS(_3933);
    _0 = _argtext_9351;
    _argtext_9351 = _17trim(_5392, _3933, 0);
    DeRef(_0);
    _5392 = NOVALUE;
    // SubProg format pc: 2431 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2433 op: NOP1 (159)
    // SubProg format pc: 2434 op: ELSE (23)
    goto L4E; // [2434] 2481
    // SubProg format pc: 2436 op: NOP1 (159)
L52: // addr: 2437 pc: 2436 sub: 9162 op: 159
    // SubProg format pc: 2437 op: STARTLINE (58)

    /** text.e:1834									argtext = pretty:pretty_sprint( tempv,*/
    // SubProg format pc: 2439 op: RIGHT_BRACE_N (31)
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1413);
    ((intptr_t*)_2)[5] = _1413;
    RefDS(_5394);
    ((intptr_t*)_2)[6] = _5394;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _5395 = MAKE_SEQ(_1);
    // SubProg format pc: 2452 op: ASSIGN (18)
    DeRef(_options_inlined_pretty_sprint_at_2453_9637);
    _options_inlined_pretty_sprint_at_2453_9637 = _5395;
    _5395 = NOVALUE;
    // SubProg format pc: 2455 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2457 op: STARTLINE (58)

    /** pretty.e:364		pretty_printing = 0*/
    // SubProg format pc: 2459 op: ASSIGN_I (113)
    _26pretty_printing_7670 = 0;
    // SubProg format pc: 2462 op: STARTLINE (58)

    /** pretty.e:365		pretty( x, options )*/
    // SubProg format pc: 2464 op: PROC (27)
    Ref(_tempv_9583);
    RefDS(_options_inlined_pretty_sprint_at_2453_9637);
    _26pretty(_tempv_9583, _options_inlined_pretty_sprint_at_2453_9637);
    // SubProg format pc: 2468 op: STARTLINE (58)

    /** pretty.e:366		return pretty_line*/
    // SubProg format pc: 2470 op: GLOBAL_INIT_CHECK (109)
    // SubProg format pc: 2472 op: ASSIGN (18)
    RefDS(_26pretty_line_7673);
    DeRef(_argtext_9351);
    _argtext_9351 = _26pretty_line_7673;
    // SubProg format pc: 2475 op: NOP1 (159)
    // SubProg format pc: 2476 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-pretty_sprint from format @ 2453

// block var options_inlined_pretty_sprint_at_2453_9637
    DeRef(_options_inlined_pretty_sprint_at_2453_9637);
    _options_inlined_pretty_sprint_at_2453_9637 = NOVALUE;
    // SubProg format pc: 2478 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2480 op: NOP1 (159)
L4E: // addr: 2481 pc: 2480 sub: 9162 op: 159
    // SubProg format pc: 2481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tempv_9583
    DeRef(_tempv_9583);
    _tempv_9583 = NOVALUE;
    // SubProg format pc: 2483 op: ELSE (23)
    goto L55; // [2483] 2562
    // SubProg format pc: 2485 op: NOP1 (159)
L47: // addr: 2486 pc: 2485 sub: 9162 op: 159
    // SubProg format pc: 2486 op: STARTLINE (58)

    /** text.e:1839								argtext = pretty:pretty_sprint( arg_list[argn],*/
    // SubProg format pc: 2488 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _5396 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    // SubProg format pc: 2492 op: RIGHT_BRACE_N (31)
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1413);
    ((intptr_t*)_2)[5] = _1413;
    RefDS(_5394);
    ((intptr_t*)_2)[6] = _5394;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _5397 = MAKE_SEQ(_1);
    // SubProg format pc: 2505 op: ASSIGN (18)
    Ref(_5396);
    DeRef(_x_inlined_pretty_sprint_at_2506_9643);
    _x_inlined_pretty_sprint_at_2506_9643 = _5396;
    _5396 = NOVALUE;
    // SubProg format pc: 2508 op: ASSIGN (18)
    DeRef(_options_inlined_pretty_sprint_at_2509_9644);
    _options_inlined_pretty_sprint_at_2509_9644 = _5397;
    _5397 = NOVALUE;
    // SubProg format pc: 2511 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2513 op: STARTLINE (58)

    /** pretty.e:364		pretty_printing = 0*/
    // SubProg format pc: 2515 op: ASSIGN_I (113)
    _26pretty_printing_7670 = 0;
    // SubProg format pc: 2518 op: STARTLINE (58)

    /** pretty.e:365		pretty( x, options )*/
    // SubProg format pc: 2520 op: PROC (27)
    Ref(_x_inlined_pretty_sprint_at_2506_9643);
    RefDS(_options_inlined_pretty_sprint_at_2509_9644);
    _26pretty(_x_inlined_pretty_sprint_at_2506_9643, _options_inlined_pretty_sprint_at_2509_9644);
    // SubProg format pc: 2524 op: STARTLINE (58)

    /** pretty.e:366		return pretty_line*/
    // SubProg format pc: 2526 op: GLOBAL_INIT_CHECK (109)
    // SubProg format pc: 2528 op: ASSIGN (18)
    RefDS(_26pretty_line_7673);
    DeRef(_argtext_9351);
    _argtext_9351 = _26pretty_line_7673;
    // SubProg format pc: 2531 op: NOP1 (159)
    // SubProg format pc: 2532 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-pretty_sprint from format @ 2506

// block var x_inlined_pretty_sprint_at_2506_9643
    DeRef(_x_inlined_pretty_sprint_at_2506_9643);
    _x_inlined_pretty_sprint_at_2506_9643 = NOVALUE;

// block var options_inlined_pretty_sprint_at_2509_9644
    DeRef(_options_inlined_pretty_sprint_at_2509_9644);
    _options_inlined_pretty_sprint_at_2509_9644 = NOVALUE;
    // SubProg format pc: 2534 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2536 op: NOP1 (159)
    // SubProg format pc: 2537 op: STARTLINE (58)

    /** text.e:1844							while ep != 0 with entry do*/
    // SubProg format pc: 2539 op: ELSE (23)
    goto L55; // [2539] 2562
    // SubProg format pc: 2541 op: NOPWHILE (158)
L56: // addr: 2542 pc: 2541 sub: 9162 op: 158
    // SubProg format pc: 2542 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2544 op: NOTEQ_IFW_I (122)
    if (_ep_9194 == 0)
    goto L57; // [2544] 2574
    // SubProg format pc: 2548 op: STARTLINE (58)

    /** text.e:1845								argtext = remove(argtext, ep+2)*/
    // SubProg format pc: 2550 op: PLUS (11)
    _5399 = _ep_9194 + 2;
    if ((object)((uintptr_t)_5399 + (uintptr_t)HIGH_BITS) >= 0){
        _5399 = NewDouble((eudouble)_5399);
    }
    // SubProg format pc: 2554 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_9351);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_5399)) ? _5399 : (object)(DBL_PTR(_5399)->dbl);
        int stop = (IS_ATOM_INT(_5399)) ? _5399 : (object)(DBL_PTR(_5399)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_9351), start, &_argtext_9351 );
            }
            else Tail(SEQ_PTR(_argtext_9351), stop+1, &_argtext_9351);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_9351), start, &_argtext_9351);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_9351 = Remove_elements(start, stop, (SEQ_PTR(_argtext_9351)->ref == 1));
        }
    }
    DeRef(_5399);
    _5399 = NOVALUE;
    _5399 = NOVALUE;
    // SubProg format pc: 2559 op: STARTLINE (58)

    /** text.e:1846							entry*/
    // SubProg format pc: 2561 op: NOP1 (159)
L55: // addr: 2562 pc: 2561 sub: 9162 op: 159
    // SubProg format pc: 2562 op: STARTLINE (58)

    /** text.e:1847								ep = match("e+0", argtext)*/
    // SubProg format pc: 2564 op: MATCH_FROM (177)
    _ep_9194 = e_match_from(_5317, _argtext_9351, 1);
    // SubProg format pc: 2569 op: STARTLINE (58)

    /** text.e:1848							end while*/
    // SubProg format pc: 2571 op: ENDWHILE (22)
    goto L56; // [2571] 2542
    // SubProg format pc: 2573 op: NOP1 (159)
L57: // addr: 2574 pc: 2573 sub: 9162 op: 159
    // SubProg format pc: 2574 op: NOP1 (159)
L27: // addr: 2575 pc: 2574 sub: 9162 op: 159
    // SubProg format pc: 2575 op: STARTLINE (58)

    /** text.e:1850		    			currargv = arg_list[argn]*/
    // SubProg format pc: 2577 op: RHS_SUBS_CHECK (92)
    DeRef(_currargv_9190);
    _2 = (object)SEQ_PTR(_arg_list_9165);
    _currargv_9190 = (object)*(((s1_ptr)_2)->base + _argn_9182);
    Ref(_currargv_9190);
    // SubProg format pc: 2581 op: NOP1 (159)
L24: // addr: 2582 pc: 2581 sub: 9162 op: 159
    // SubProg format pc: 2582 op: STARTLINE (58)

    /** text.e:1854	    			if length(argtext) > 0 then*/
    // SubProg format pc: 2584 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5403 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5403 = 1;
    }
    // SubProg format pc: 2587 op: GREATER_IFW_I (124)
    if (_5403 <= 0)
    goto L58; // [2587] 3357
    // SubProg format pc: 2591 op: STARTLINE (58)

    /** text.e:1855	    				switch cap do*/
    // SubProg format pc: 2593 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2595 op: SWITCH_I (193)
    _0 = _cap_9171;
    switch ( _0 ){ 
        // SubProg format pc: 2600 op: STARTLINE (58)

        /** text.e:1856	    					case 'u' then*/
        // SubProg format pc: 2602 op: CASE (186)
        case 117:
        // SubProg format pc: 2604 op: STARTLINE (58)

        /** text.e:1857	    						argtext = upper(argtext)*/
        // SubProg format pc: 2606 op: PROC (27)
        RefDS(_argtext_9351);
        _0 = _argtext_9351;
        _argtext_9351 = _17upper(_argtext_9351);
        DeRefDS(_0);
        // SubProg format pc: 2610 op: SEQUENCE_CHECK (97)
        // SubProg format pc: 2612 op: ELSE (23)
        goto L59; // [2612] 2678
        // SubProg format pc: 2614 op: STARTLINE (58)

        /** text.e:1858	    					case 'l' then*/
        // SubProg format pc: 2616 op: CASE (186)
        case 108:
        // SubProg format pc: 2618 op: STARTLINE (58)

        /** text.e:1859	    						argtext = lower(argtext)*/
        // SubProg format pc: 2620 op: PROC (27)
        RefDS(_argtext_9351);
        _0 = _argtext_9351;
        _argtext_9351 = _17lower(_argtext_9351);
        DeRefDS(_0);
        // SubProg format pc: 2624 op: SEQUENCE_CHECK (97)
        // SubProg format pc: 2626 op: ELSE (23)
        goto L59; // [2626] 2678
        // SubProg format pc: 2628 op: STARTLINE (58)

        /** text.e:1860	    					case 'w' then*/
        // SubProg format pc: 2630 op: CASE (186)
        case 119:
        // SubProg format pc: 2632 op: STARTLINE (58)

        /** text.e:1861	    						argtext = proper(argtext)*/
        // SubProg format pc: 2634 op: PROC (27)
        RefDS(_argtext_9351);
        _0 = _argtext_9351;
        _argtext_9351 = _17proper(_argtext_9351);
        DeRefDS(_0);
        // SubProg format pc: 2638 op: SEQUENCE_CHECK (97)
        // SubProg format pc: 2640 op: ELSE (23)
        goto L59; // [2640] 2678
        // SubProg format pc: 2642 op: STARTLINE (58)

        /** text.e:1862	    					case 0 then*/
        // SubProg format pc: 2644 op: CASE (186)
        case 0:
        // SubProg format pc: 2646 op: STARTLINE (58)

        /** text.e:1864								cap = cap*/
        // SubProg format pc: 2648 op: ASSIGN_I (113)
        _cap_9171 = _cap_9171;
        // SubProg format pc: 2651 op: ELSE (23)
        goto L59; // [2651] 2678
        // SubProg format pc: 2653 op: STARTLINE (58)

        /** text.e:1866	    					case else*/
        // SubProg format pc: 2655 op: CASE (186)
        default:
        // SubProg format pc: 2657 op: STARTLINE (58)

        /** text.e:1867	    						error:crash("logic error: 'cap' mode in format.")*/
        // SubProg format pc: 2659 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg format pc: 2661 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_2660_9667);
        _msg_inlined_crash_at_2660_9667 = EPrintf(-9999999, _5410, _5);
        // SubProg format pc: 2665 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg format pc: 2667 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_2660_9667);
        // SubProg format pc: 2670 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg format pc: 2672 op: ELSE (23)
        goto L5A; // [2672] 2675
        // SubProg format pc: 2674 op: NOP1 (159)
L5A: // addr: 2675 pc: 2674 sub: 9162 op: 159
        // SubProg format pc: 2675 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from format @ 2660

// block var msg_inlined_crash_at_2660_9667
        DeRefi(_msg_inlined_crash_at_2660_9667);
        _msg_inlined_crash_at_2660_9667 = NOVALUE;
        // SubProg format pc: 2677 op: NOPSWITCH (187)
    ;}L59: // addr: 2678 pc: 2677 sub: 9162 op: 187
    // SubProg format pc: 2678 op: STARTLINE (58)

    /** text.e:1871						if atom(currargv) then*/
    // SubProg format pc: 2680 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2682 op: IS_AN_ATOM (67)
    _5411 = IS_ATOM(_currargv_9190);
    // SubProg format pc: 2685 op: IF (20)
    if (_5411 == 0)
    {
        _5411 = NOVALUE;
        goto L5B; // [2685] 2824
    }
    else{
        _5411 = NOVALUE;
    }
    // SubProg format pc: 2688 op: STARTLINE (58)

    /** text.e:1872							if find('e', argtext) = 0 then*/
    // SubProg format pc: 2690 op: FIND_FROM (176)
    _5412 = find_from(101, _argtext_9351, 1);
    // SubProg format pc: 2695 op: EQUALS_IFW_I (121)
    if (_5412 != 0)
    goto L5C; // [2695] 2823
    // SubProg format pc: 2699 op: STARTLINE (58)

    /** text.e:1874								if decs != -1 then*/
    // SubProg format pc: 2701 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2703 op: NOTEQ_IFW_I (122)
    if (_decs_9180 == -1)
    goto L5D; // [2703] 2822
    // SubProg format pc: 2707 op: STARTLINE (58)

    /** text.e:1875									pos = find('.', argtext)*/
    // SubProg format pc: 2709 op: FIND_FROM (176)
    _pos_9181 = find_from(46, _argtext_9351, 1);
    // SubProg format pc: 2714 op: STARTLINE (58)

    /** text.e:1876									if pos then*/
    // SubProg format pc: 2716 op: IF (20)
    if (_pos_9181 == 0)
    {
        goto L5E; // [2716] 2801
    }
    else{
    }
    // SubProg format pc: 2719 op: STARTLINE (58)

    /** text.e:1877										if decs = 0 then*/
    // SubProg format pc: 2721 op: EQUALS_IFW_I (121)
    if (_decs_9180 != 0)
    goto L5F; // [2721] 2739
    // SubProg format pc: 2725 op: STARTLINE (58)

    /** text.e:1878											argtext = argtext [1 .. pos-1 ]*/
    // SubProg format pc: 2727 op: MINUS (10)
    _5417 = _pos_9181 - 1;
    // SubProg format pc: 2731 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_argtext_9351, 1, _5417);
    // SubProg format pc: 2736 op: ELSE (23)
    goto L60; // [2736] 2821
    // SubProg format pc: 2738 op: NOP1 (159)
L5F: // addr: 2739 pc: 2738 sub: 9162 op: 159
    // SubProg format pc: 2739 op: STARTLINE (58)

    /** text.e:1880											pos = length(argtext) - pos*/
    // SubProg format pc: 2741 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5419 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5419 = 1;
    }
    // SubProg format pc: 2744 op: MINUS_I (116)
    _pos_9181 = _5419 - _pos_9181;
    _5419 = NOVALUE;
    // SubProg format pc: 2748 op: STARTLINE (58)

    /** text.e:1881											if pos > decs then*/
    // SubProg format pc: 2750 op: GREATER_IFW_I (124)
    if (_pos_9181 <= _decs_9180)
    goto L61; // [2750] 2775
    // SubProg format pc: 2754 op: STARTLINE (58)

    /** text.e:1882												argtext = argtext[ 1 .. $ - pos + decs ]*/
    // SubProg format pc: 2756 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5422 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5422 = 1;
    }
    // SubProg format pc: 2759 op: MINUS (10)
    _5423 = _5422 - _pos_9181;
    if ((object)((uintptr_t)_5423 +(uintptr_t) HIGH_BITS) >= 0){
        _5423 = NewDouble((eudouble)_5423);
    }
    _5422 = NOVALUE;
    // SubProg format pc: 2763 op: PLUS (11)
    if (IS_ATOM_INT(_5423)) {
        _5424 = _5423 + _decs_9180;
    }
    else {
        _5424 = NewDouble(DBL_PTR(_5423)->dbl + (eudouble)_decs_9180);
    }
    DeRef(_5423);
    _5423 = NOVALUE;
    // SubProg format pc: 2767 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_argtext_9351, 1, _5424);
    // SubProg format pc: 2772 op: ELSE (23)
    goto L60; // [2772] 2821
    // SubProg format pc: 2774 op: NOP1 (159)
L61: // addr: 2775 pc: 2774 sub: 9162 op: 159
    // SubProg format pc: 2775 op: STARTLINE (58)

    /** text.e:1883											elsif pos < decs then*/
    // SubProg format pc: 2777 op: LESS_IFW_I (119)
    if (_pos_9181 >= _decs_9180)
    goto L60; // [2777] 2821
    // SubProg format pc: 2781 op: STARTLINE (58)

    /** text.e:1884												argtext = argtext & repeat('0', decs - pos)*/
    // SubProg format pc: 2783 op: MINUS (10)
    _5427 = _decs_9180 - _pos_9181;
    // SubProg format pc: 2787 op: REPEAT (32)
    _5428 = Repeat(48, _5427);
    _5427 = NOVALUE;
    // SubProg format pc: 2791 op: CONCAT (15)
    Concat((object_ptr)&_argtext_9351, _argtext_9351, _5428);
    DeRefDS(_5428);
    _5428 = NOVALUE;
    // SubProg format pc: 2795 op: NOP1 (159)
    // SubProg format pc: 2796 op: NOP1 (159)
    // SubProg format pc: 2797 op: NOP1 (159)
    // SubProg format pc: 2798 op: ELSE (23)
    goto L60; // [2798] 2821
    // SubProg format pc: 2800 op: NOP1 (159)
L5E: // addr: 2801 pc: 2800 sub: 9162 op: 159
    // SubProg format pc: 2801 op: STARTLINE (58)

    /** text.e:1887									elsif decs > 0 then*/
    // SubProg format pc: 2803 op: GREATER_IFW_I (124)
    if (_decs_9180 <= 0)
    goto L62; // [2803] 2820
    // SubProg format pc: 2807 op: STARTLINE (58)

    /** text.e:1888										argtext = argtext & '.' & repeat('0', decs)*/
    // SubProg format pc: 2809 op: REPEAT (32)
    _5431 = Repeat(48, _decs_9180);
    // SubProg format pc: 2813 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5431;
        concat_list[1] = 46;
        concat_list[2] = _argtext_9351;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5431);
    _5431 = NOVALUE;
    // SubProg format pc: 2819 op: NOP1 (159)
L62: // addr: 2820 pc: 2819 sub: 9162 op: 159
    // SubProg format pc: 2820 op: NOP1 (159)
L60: // addr: 2821 pc: 2820 sub: 9162 op: 159
    // SubProg format pc: 2821 op: NOP1 (159)
L5D: // addr: 2822 pc: 2821 sub: 9162 op: 159
    // SubProg format pc: 2822 op: NOP1 (159)
L5C: // addr: 2823 pc: 2822 sub: 9162 op: 159
    // SubProg format pc: 2823 op: NOP1 (159)
L5B: // addr: 2824 pc: 2823 sub: 9162 op: 159
    // SubProg format pc: 2824 op: STARTLINE (58)

    /** text.e:1895	    				if align = 0 then*/
    // SubProg format pc: 2826 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2828 op: EQUALS_IFW_I (121)
    if (_align_9172 != 0)
    goto L63; // [2828] 2855
    // SubProg format pc: 2832 op: STARTLINE (58)

    /** text.e:1896	    					if atom(currargv) then*/
    // SubProg format pc: 2834 op: IS_AN_ATOM (67)
    _5434 = IS_ATOM(_currargv_9190);
    // SubProg format pc: 2837 op: IF (20)
    if (_5434 == 0)
    {
        _5434 = NOVALUE;
        goto L64; // [2837] 2848
    }
    else{
        _5434 = NOVALUE;
    }
    // SubProg format pc: 2840 op: STARTLINE (58)

    /** text.e:1897	    						align = '>'*/
    // SubProg format pc: 2842 op: ASSIGN_I (113)
    _align_9172 = 62;
    // SubProg format pc: 2845 op: ELSE (23)
    goto L65; // [2845] 2854
    // SubProg format pc: 2847 op: NOP1 (159)
L64: // addr: 2848 pc: 2847 sub: 9162 op: 159
    // SubProg format pc: 2848 op: STARTLINE (58)

    /** text.e:1899	    						align = '<'*/
    // SubProg format pc: 2850 op: ASSIGN_I (113)
    _align_9172 = 60;
    // SubProg format pc: 2853 op: NOP1 (159)
L65: // addr: 2854 pc: 2853 sub: 9162 op: 159
    // SubProg format pc: 2854 op: NOP1 (159)
L63: // addr: 2855 pc: 2854 sub: 9162 op: 159
    // SubProg format pc: 2855 op: STARTLINE (58)

    /** text.e:1903	    				if atom(currargv) then*/
    // SubProg format pc: 2857 op: IS_AN_ATOM (67)
    _5435 = IS_ATOM(_currargv_9190);
    // SubProg format pc: 2860 op: IF (20)
    if (_5435 == 0)
    {
        _5435 = NOVALUE;
        goto L66; // [2860] 3061
    }
    else{
        _5435 = NOVALUE;
    }
    // SubProg format pc: 2863 op: STARTLINE (58)

    /** text.e:1904		    				if tsep != 0 and zfill = 0 then*/
    // SubProg format pc: 2865 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2867 op: NOTEQ (4)
    _5436 = (_tsep_9187 != 0);
    // SubProg format pc: 2871 op: SC1_AND_IF (146)
    if (_5436 == 0) {
        goto L67; // [2871] 3058
    }
    // SubProg format pc: 2875 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2877 op: EQUALS (3)
    _5438 = (_zfill_9175 == 0);
    // SubProg format pc: 2881 op: NOP1 (159)
    // SubProg format pc: 2882 op: IF (20)
    if (_5438 == 0)
    {
        DeRef(_5438);
        _5438 = NOVALUE;
        goto L67; // [2882] 3058
    }
    else{
        DeRef(_5438);
        _5438 = NOVALUE;
    }
    // SubProg format pc: 2885 op: STARTLINE (58)

    /** text.e:1905		    					integer dpos*/
    // SubProg format pc: 2887 op: STARTLINE (58)

    /** text.e:1906		    					integer dist*/
    // SubProg format pc: 2889 op: STARTLINE (58)

    /** text.e:1907		    					integer bracketed*/
    // SubProg format pc: 2891 op: STARTLINE (58)

    /** text.e:1909		    					if binout or hexout then*/
    // SubProg format pc: 2893 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2895 op: SC1_OR_IF (147)
    if (_binout_9186 != 0) {
        goto L68; // [2895] 2904
    }
    // SubProg format pc: 2899 op: NOP1 (159)
    // SubProg format pc: 2900 op: IF (20)
    if (_hexout_9185 == 0)
    {
        goto L69; // [2900] 2912
    }
    else{
    }
    // SubProg format pc: 2903 op: NOP1 (159)
L68: // addr: 2904 pc: 2903 sub: 9162 op: 159
    // SubProg format pc: 2904 op: STARTLINE (58)

    /** text.e:1910		    						dist = 4*/
    // SubProg format pc: 2906 op: ASSIGN_I (113)
    _dist_9711 = 4;
    // SubProg format pc: 2909 op: ELSE (23)
    goto L6A; // [2909] 2918
    // SubProg format pc: 2911 op: NOP1 (159)
L69: // addr: 2912 pc: 2911 sub: 9162 op: 159
    // SubProg format pc: 2912 op: STARTLINE (58)

    /** text.e:1912		    						dist = 3*/
    // SubProg format pc: 2914 op: ASSIGN_I (113)
    _dist_9711 = 3;
    // SubProg format pc: 2917 op: NOP1 (159)
L6A: // addr: 2918 pc: 2917 sub: 9162 op: 159
    // SubProg format pc: 2918 op: STARTLINE (58)

    /** text.e:1914		    					bracketed = (argtext[1] = '(')*/
    // SubProg format pc: 2920 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_9351);
    _5440 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 2924 op: EQUALS (3)
    if (IS_ATOM_INT(_5440)) {
        _bracketed_9712 = (_5440 == 40);
    }
    else {
        _bracketed_9712 = binary_op(EQUALS, _5440, 40);
    }
    _5440 = NOVALUE;
    // SubProg format pc: 2928 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_bracketed_9712)) {
        _1 = (object)(DBL_PTR(_bracketed_9712)->dbl);
        DeRefDS(_bracketed_9712);
        _bracketed_9712 = _1;
    }
    // SubProg format pc: 2930 op: STARTLINE (58)

    /** text.e:1915		    					if bracketed then*/
    // SubProg format pc: 2932 op: IF (20)
    if (_bracketed_9712 == 0)
    {
        goto L6B; // [2932] 2950
    }
    else{
    }
    // SubProg format pc: 2935 op: STARTLINE (58)

    /** text.e:1916		    						argtext = argtext[2 .. $-1]*/
    // SubProg format pc: 2937 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5442 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5442 = 1;
    }
    // SubProg format pc: 2940 op: MINUS (10)
    _5443 = _5442 - 1;
    _5442 = NOVALUE;
    // SubProg format pc: 2944 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_argtext_9351, 2, _5443);
    // SubProg format pc: 2949 op: NOP1 (159)
L6B: // addr: 2950 pc: 2949 sub: 9162 op: 159
    // SubProg format pc: 2950 op: STARTLINE (58)

    /** text.e:1918		    					dpos = find('.', argtext)*/
    // SubProg format pc: 2952 op: FIND_FROM (176)
    _dpos_9710 = find_from(46, _argtext_9351, 1);
    // SubProg format pc: 2957 op: STARTLINE (58)

    /** text.e:1919		    					if dpos = 0 then*/
    // SubProg format pc: 2959 op: EQUALS_IFW_I (121)
    if (_dpos_9710 != 0)
    goto L6C; // [2959] 2975
    // SubProg format pc: 2963 op: STARTLINE (58)

    /** text.e:1920		    						dpos = length(argtext) + 1*/
    // SubProg format pc: 2965 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5447 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5447 = 1;
    }
    // SubProg format pc: 2968 op: PLUS1_I (117)
    _dpos_9710 = _5447 + 1;
    _5447 = NOVALUE;
    // SubProg format pc: 2972 op: ELSE (23)
    goto L6D; // [2972] 2989
    // SubProg format pc: 2974 op: NOP1 (159)
L6C: // addr: 2975 pc: 2974 sub: 9162 op: 159
    // SubProg format pc: 2975 op: STARTLINE (58)

    /** text.e:1922		    						if tsep = '.' then*/
    // SubProg format pc: 2977 op: EQUALS_IFW_I (121)
    if (_tsep_9187 != 46)
    goto L6E; // [2977] 2988
    // SubProg format pc: 2981 op: STARTLINE (58)

    /** text.e:1923		    							argtext[dpos] = ','*/
    // SubProg format pc: 2983 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_9351);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_9351 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _dpos_9710);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 44;
    DeRef(_1);
    // SubProg format pc: 2987 op: NOP1 (159)
L6E: // addr: 2988 pc: 2987 sub: 9162 op: 159
    // SubProg format pc: 2988 op: NOP1 (159)
L6D: // addr: 2989 pc: 2988 sub: 9162 op: 159
    // SubProg format pc: 2989 op: STARTLINE (58)

    /** text.e:1926		    					while dpos > dist do*/
    // SubProg format pc: 2991 op: NOP2 (110)
    // SubProg format pc: 2993 op: NOPWHILE (158)
L6F: // addr: 2994 pc: 2993 sub: 9162 op: 158
    // SubProg format pc: 2994 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2996 op: GREATER_IFW_I (124)
    if (_dpos_9710 <= _dist_9711)
    goto L70; // [2996] 3043
    // SubProg format pc: 3000 op: STARTLINE (58)

    /** text.e:1927		    						dpos -= dist*/
    // SubProg format pc: 3002 op: MINUS_I (116)
    _dpos_9710 = _dpos_9710 - _dist_9711;
    // SubProg format pc: 3006 op: STARTLINE (58)

    /** text.e:1928		    						if dpos > 1 then*/
    // SubProg format pc: 3008 op: GREATER_IFW_I (124)
    if (_dpos_9710 <= 1)
    goto L6F; // [3008] 2994
    // SubProg format pc: 3012 op: STARTLINE (58)

    /** text.e:1929		    							argtext = argtext[1.. dpos - 1] & tsep & argtext[dpos .. $]*/
    // SubProg format pc: 3014 op: MINUS (10)
    _5453 = _dpos_9710 - 1;
    // SubProg format pc: 3018 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5454;
    RHS_Slice(_argtext_9351, 1, _5453);
    // SubProg format pc: 3023 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5455 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5455 = 1;
    }
    // SubProg format pc: 3026 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5456;
    RHS_Slice(_argtext_9351, _dpos_9710, _5455);
    // SubProg format pc: 3031 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5456;
        concat_list[1] = _tsep_9187;
        concat_list[2] = _5454;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5456);
    _5456 = NOVALUE;
    DeRefDS(_5454);
    _5454 = NOVALUE;
    // SubProg format pc: 3037 op: NOP1 (159)
    // SubProg format pc: 3038 op: STARTLINE (58)

    /** text.e:1931		    					end while*/
    // SubProg format pc: 3040 op: ENDWHILE (22)
    goto L6F; // [3040] 2994
    // SubProg format pc: 3042 op: NOP1 (159)
L70: // addr: 3043 pc: 3042 sub: 9162 op: 159
    // SubProg format pc: 3043 op: STARTLINE (58)

    /** text.e:1932		    					if bracketed then*/
    // SubProg format pc: 3045 op: IF (20)
    if (_bracketed_9712 == 0)
    {
        goto L71; // [3045] 3057
    }
    else{
    }
    // SubProg format pc: 3048 op: STARTLINE (58)

    /** text.e:1933		    						argtext = '(' & argtext & ')'*/
    // SubProg format pc: 3050 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _argtext_9351;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    // SubProg format pc: 3056 op: NOP1 (159)
L71: // addr: 3057 pc: 3056 sub: 9162 op: 159
    // SubProg format pc: 3057 op: NOP1 (159)
L67: // addr: 3058 pc: 3057 sub: 9162 op: 159
    // SubProg format pc: 3058 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var dpos_9710

// block var dist_9711

// block var bracketed_9712
    // SubProg format pc: 3060 op: NOP1 (159)
L66: // addr: 3061 pc: 3060 sub: 9162 op: 159
    // SubProg format pc: 3061 op: STARTLINE (58)

    /** text.e:1938	    				if width <= 0 then*/
    // SubProg format pc: 3063 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3065 op: LESSEQ_IFW_I (123)
    if (_width_9179 > 0)
    goto L72; // [3065] 3075
    // SubProg format pc: 3069 op: STARTLINE (58)

    /** text.e:1939	    					width = length(argtext)*/
    // SubProg format pc: 3071 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _width_9179 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _width_9179 = 1;
    }
    // SubProg format pc: 3074 op: NOP1 (159)
L72: // addr: 3075 pc: 3074 sub: 9162 op: 159
    // SubProg format pc: 3075 op: STARTLINE (58)

    /** text.e:1943	    				if width < length(argtext) then*/
    // SubProg format pc: 3077 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5461 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5461 = 1;
    }
    // SubProg format pc: 3080 op: LESS_IFW_I (119)
    if (_width_9179 >= _5461)
    goto L73; // [3080] 3211
    // SubProg format pc: 3084 op: STARTLINE (58)

    /** text.e:1944	    					if align = '>' then*/
    // SubProg format pc: 3086 op: EQUALS_IFW_I (121)
    if (_align_9172 != 62)
    goto L74; // [3086] 3114
    // SubProg format pc: 3090 op: STARTLINE (58)

    /** text.e:1945	    						argtext = argtext[ $ - width + 1 .. $]*/
    // SubProg format pc: 3092 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5464 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5464 = 1;
    }
    // SubProg format pc: 3095 op: MINUS (10)
    _5465 = _5464 - _width_9179;
    if ((object)((uintptr_t)_5465 +(uintptr_t) HIGH_BITS) >= 0){
        _5465 = NewDouble((eudouble)_5465);
    }
    _5464 = NOVALUE;
    // SubProg format pc: 3099 op: PLUS1 (93)
    if (IS_ATOM_INT(_5465)) {
        _5466 = _5465 + 1;
        if (_5466 > MAXINT){
            _5466 = NewDouble((eudouble)_5466);
        }
    }
    else
    _5466 = binary_op(PLUS, 1, _5465);
    DeRef(_5465);
    _5465 = NOVALUE;
    // SubProg format pc: 3103 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5467 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5467 = 1;
    }
    // SubProg format pc: 3106 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_argtext_9351, _5466, _5467);
    // SubProg format pc: 3111 op: ELSE (23)
    goto L75; // [3111] 3348
    // SubProg format pc: 3113 op: NOP1 (159)
L74: // addr: 3114 pc: 3113 sub: 9162 op: 159
    // SubProg format pc: 3114 op: STARTLINE (58)

    /** text.e:1946	    					elsif align = 'c' then*/
    // SubProg format pc: 3116 op: EQUALS_IFW_I (121)
    if (_align_9172 != 99)
    goto L76; // [3116] 3200
    // SubProg format pc: 3120 op: STARTLINE (58)

    /** text.e:1947	    						pos = length(argtext) - width*/
    // SubProg format pc: 3122 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5470 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5470 = 1;
    }
    // SubProg format pc: 3125 op: MINUS_I (116)
    _pos_9181 = _5470 - _width_9179;
    _5470 = NOVALUE;
    // SubProg format pc: 3129 op: STARTLINE (58)

    /** text.e:1948	    						if remainder(pos, 2) = 0 then*/
    // SubProg format pc: 3131 op: REMAINDER (71)
    _5472 = (_pos_9181 % 2);
    // SubProg format pc: 3135 op: EQUALS_IFW_I (121)
    if (_5472 != 0)
    goto L77; // [3135] 3168
    // SubProg format pc: 3139 op: STARTLINE (58)

    /** text.e:1949	    							pos = pos / 2*/
    // SubProg format pc: 3141 op: DIV2 (98)
    if (_pos_9181 & 1) {
        _pos_9181 = NewDouble((_pos_9181 >> 1) + 0.5);
    }
    else
    _pos_9181 = _pos_9181 >> 1;
    // SubProg format pc: 3145 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_9181)) {
        _1 = (object)(DBL_PTR(_pos_9181)->dbl);
        DeRefDS(_pos_9181);
        _pos_9181 = _1;
    }
    // SubProg format pc: 3147 op: STARTLINE (58)

    /** text.e:1950	    							argtext = argtext[ pos + 1 .. $ - pos ]*/
    // SubProg format pc: 3149 op: PLUS1 (93)
    _5475 = _pos_9181 + 1;
    if (_5475 > MAXINT){
        _5475 = NewDouble((eudouble)_5475);
    }
    // SubProg format pc: 3153 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5476 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5476 = 1;
    }
    // SubProg format pc: 3156 op: MINUS (10)
    _5477 = _5476 - _pos_9181;
    _5476 = NOVALUE;
    // SubProg format pc: 3160 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_argtext_9351, _5475, _5477);
    // SubProg format pc: 3165 op: ELSE (23)
    goto L75; // [3165] 3348
    // SubProg format pc: 3167 op: NOP1 (159)
L77: // addr: 3168 pc: 3167 sub: 9162 op: 159
    // SubProg format pc: 3168 op: STARTLINE (58)

    /** text.e:1952	    							pos = floor(pos / 2)*/
    // SubProg format pc: 3170 op: FLOOR_DIV2 (66)
    _pos_9181 = _pos_9181 >> 1;
    // SubProg format pc: 3174 op: STARTLINE (58)

    /** text.e:1953	    							argtext = argtext[ pos + 1 .. $ - pos - 1]*/
    // SubProg format pc: 3176 op: PLUS1 (93)
    _5480 = _pos_9181 + 1;
    if (_5480 > MAXINT){
        _5480 = NewDouble((eudouble)_5480);
    }
    // SubProg format pc: 3180 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5481 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5481 = 1;
    }
    // SubProg format pc: 3183 op: MINUS (10)
    _5482 = _5481 - _pos_9181;
    if ((object)((uintptr_t)_5482 +(uintptr_t) HIGH_BITS) >= 0){
        _5482 = NewDouble((eudouble)_5482);
    }
    _5481 = NOVALUE;
    // SubProg format pc: 3187 op: MINUS (10)
    if (IS_ATOM_INT(_5482)) {
        _5483 = _5482 - 1;
    }
    else {
        _5483 = NewDouble(DBL_PTR(_5482)->dbl - (eudouble)1);
    }
    DeRef(_5482);
    _5482 = NOVALUE;
    // SubProg format pc: 3191 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_argtext_9351, _5480, _5483);
    // SubProg format pc: 3196 op: NOP1 (159)
    // SubProg format pc: 3197 op: ELSE (23)
    goto L75; // [3197] 3348
    // SubProg format pc: 3199 op: NOP1 (159)
L76: // addr: 3200 pc: 3199 sub: 9162 op: 159
    // SubProg format pc: 3200 op: STARTLINE (58)

    /** text.e:1956	    						argtext = argtext[ 1 .. width]*/
    // SubProg format pc: 3202 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_9351;
    RHS_Slice(_argtext_9351, 1, _width_9179);
    // SubProg format pc: 3207 op: NOP1 (159)
    // SubProg format pc: 3208 op: ELSE (23)
    goto L75; // [3208] 3348
    // SubProg format pc: 3210 op: NOP1 (159)
L73: // addr: 3211 pc: 3210 sub: 9162 op: 159
    // SubProg format pc: 3211 op: STARTLINE (58)

    /** text.e:1958	    				elsif width > length(argtext) then*/
    // SubProg format pc: 3213 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5486 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5486 = 1;
    }
    // SubProg format pc: 3216 op: GREATER_IFW_I (124)
    if (_width_9179 <= _5486)
    goto L78; // [3216] 3347
    // SubProg format pc: 3220 op: STARTLINE (58)

    /** text.e:1959							if align = '>' then*/
    // SubProg format pc: 3222 op: EQUALS_IFW_I (121)
    if (_align_9172 != 62)
    goto L79; // [3222] 3246
    // SubProg format pc: 3226 op: STARTLINE (58)

    /** text.e:1960								argtext = repeat(' ', width - length(argtext)) & argtext*/
    // SubProg format pc: 3228 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5489 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5489 = 1;
    }
    // SubProg format pc: 3231 op: MINUS (10)
    _5490 = _width_9179 - _5489;
    _5489 = NOVALUE;
    // SubProg format pc: 3235 op: REPEAT (32)
    _5491 = Repeat(32, _5490);
    _5490 = NOVALUE;
    // SubProg format pc: 3239 op: CONCAT (15)
    Concat((object_ptr)&_argtext_9351, _5491, _argtext_9351);
    DeRefDS(_5491);
    _5491 = NOVALUE;
    DeRef(_5491);
    _5491 = NOVALUE;
    // SubProg format pc: 3243 op: ELSE (23)
    goto L7A; // [3243] 3346
    // SubProg format pc: 3245 op: NOP1 (159)
L79: // addr: 3246 pc: 3245 sub: 9162 op: 159
    // SubProg format pc: 3246 op: STARTLINE (58)

    /** text.e:1961	    					elsif align = 'c' then*/
    // SubProg format pc: 3248 op: EQUALS_IFW_I (121)
    if (_align_9172 != 99)
    goto L7B; // [3248] 3328
    // SubProg format pc: 3252 op: STARTLINE (58)

    /** text.e:1962	    						pos = width - length(argtext)*/
    // SubProg format pc: 3254 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5494 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5494 = 1;
    }
    // SubProg format pc: 3257 op: MINUS_I (116)
    _pos_9181 = _width_9179 - _5494;
    _5494 = NOVALUE;
    // SubProg format pc: 3261 op: STARTLINE (58)

    /** text.e:1963	    						if remainder(pos, 2) = 0 then*/
    // SubProg format pc: 3263 op: REMAINDER (71)
    _5496 = (_pos_9181 % 2);
    // SubProg format pc: 3267 op: EQUALS_IFW_I (121)
    if (_5496 != 0)
    goto L7C; // [3267] 3298
    // SubProg format pc: 3271 op: STARTLINE (58)

    /** text.e:1964	    							pos = pos / 2*/
    // SubProg format pc: 3273 op: DIV2 (98)
    if (_pos_9181 & 1) {
        _pos_9181 = NewDouble((_pos_9181 >> 1) + 0.5);
    }
    else
    _pos_9181 = _pos_9181 >> 1;
    // SubProg format pc: 3277 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_9181)) {
        _1 = (object)(DBL_PTR(_pos_9181)->dbl);
        DeRefDS(_pos_9181);
        _pos_9181 = _1;
    }
    // SubProg format pc: 3279 op: STARTLINE (58)

    /** text.e:1965	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos)*/
    // SubProg format pc: 3281 op: REPEAT (32)
    _5499 = Repeat(32, _pos_9181);
    // SubProg format pc: 3285 op: REPEAT (32)
    _5500 = Repeat(32, _pos_9181);
    // SubProg format pc: 3289 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5500;
        concat_list[1] = _argtext_9351;
        concat_list[2] = _5499;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5500);
    _5500 = NOVALUE;
    DeRefDS(_5499);
    _5499 = NOVALUE;
    // SubProg format pc: 3295 op: ELSE (23)
    goto L7A; // [3295] 3346
    // SubProg format pc: 3297 op: NOP1 (159)
L7C: // addr: 3298 pc: 3297 sub: 9162 op: 159
    // SubProg format pc: 3298 op: STARTLINE (58)

    /** text.e:1967	    							pos = floor(pos / 2)*/
    // SubProg format pc: 3300 op: FLOOR_DIV2 (66)
    _pos_9181 = _pos_9181 >> 1;
    // SubProg format pc: 3304 op: STARTLINE (58)

    /** text.e:1968	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos + 1)*/
    // SubProg format pc: 3306 op: REPEAT (32)
    _5503 = Repeat(32, _pos_9181);
    // SubProg format pc: 3310 op: PLUS1 (93)
    _5504 = _pos_9181 + 1;
    // SubProg format pc: 3314 op: REPEAT (32)
    _5505 = Repeat(32, _5504);
    _5504 = NOVALUE;
    // SubProg format pc: 3318 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5505;
        concat_list[1] = _argtext_9351;
        concat_list[2] = _5503;
        Concat_N((object_ptr)&_argtext_9351, concat_list, 3);
    }
    DeRefDS(_5505);
    _5505 = NOVALUE;
    DeRefDS(_5503);
    _5503 = NOVALUE;
    // SubProg format pc: 3324 op: NOP1 (159)
    // SubProg format pc: 3325 op: ELSE (23)
    goto L7A; // [3325] 3346
    // SubProg format pc: 3327 op: NOP1 (159)
L7B: // addr: 3328 pc: 3327 sub: 9162 op: 159
    // SubProg format pc: 3328 op: STARTLINE (58)

    /** text.e:1972								argtext = argtext & repeat(' ', width - length(argtext))*/
    // SubProg format pc: 3330 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_9351)){
            _5507 = SEQ_PTR(_argtext_9351)->length;
    }
    else {
        _5507 = 1;
    }
    // SubProg format pc: 3333 op: MINUS (10)
    _5508 = _width_9179 - _5507;
    _5507 = NOVALUE;
    // SubProg format pc: 3337 op: REPEAT (32)
    _5509 = Repeat(32, _5508);
    _5508 = NOVALUE;
    // SubProg format pc: 3341 op: CONCAT (15)
    Concat((object_ptr)&_argtext_9351, _argtext_9351, _5509);
    DeRefDS(_5509);
    _5509 = NOVALUE;
    // SubProg format pc: 3345 op: NOP1 (159)
L7A: // addr: 3346 pc: 3345 sub: 9162 op: 159
    // SubProg format pc: 3346 op: NOP1 (159)
L78: // addr: 3347 pc: 3346 sub: 9162 op: 159
    // SubProg format pc: 3347 op: NOP1 (159)
L75: // addr: 3348 pc: 3347 sub: 9162 op: 159
    // SubProg format pc: 3348 op: STARTLINE (58)

    /** text.e:1975	    				result &= argtext*/
    // SubProg format pc: 3350 op: CONCAT (15)
    Concat((object_ptr)&_result_9166, _result_9166, _argtext_9351);
    // SubProg format pc: 3354 op: ELSE (23)
    goto L7D; // [3354] 3370
    // SubProg format pc: 3356 op: NOP1 (159)
L58: // addr: 3357 pc: 3356 sub: 9162 op: 159
    // SubProg format pc: 3357 op: STARTLINE (58)

    /** text.e:1978	    				if spacer then*/
    // SubProg format pc: 3359 op: IF (20)
    if (_spacer_9177 == 0)
    {
        goto L7E; // [3359] 3369
    }
    else{
    }
    // SubProg format pc: 3362 op: STARTLINE (58)

    /** text.e:1979	    					result &= ' '*/
    // SubProg format pc: 3364 op: CONCAT (15)
    Append(&_result_9166, _result_9166, 32);
    // SubProg format pc: 3368 op: NOP1 (159)
L7E: // addr: 3369 pc: 3368 sub: 9162 op: 159
    // SubProg format pc: 3369 op: NOP1 (159)
L7D: // addr: 3370 pc: 3369 sub: 9162 op: 159
    // SubProg format pc: 3370 op: STARTLINE (58)

    /** text.e:1983	   				if trimming then*/
    // SubProg format pc: 3372 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3374 op: IF (20)
    if (_trimming_9184 == 0)
    {
        goto L7F; // [3374] 3388
    }
    else{
    }
    // SubProg format pc: 3377 op: STARTLINE (58)

    /** text.e:1984	   					result = trim(result)*/
    // SubProg format pc: 3379 op: PROC (27)
    RefDS(_result_9166);
    RefDS(_3933);
    _0 = _result_9166;
    _result_9166 = _17trim(_result_9166, _3933, 0);
    DeRefDS(_0);
    // SubProg format pc: 3385 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 3387 op: NOP1 (159)
L7F: // addr: 3388 pc: 3387 sub: 9162 op: 159
    // SubProg format pc: 3388 op: STARTLINE (58)

    /** text.e:1987	    			tend = 0*/
    // SubProg format pc: 3390 op: ASSIGN_I (113)
    _tend_9170 = 0;
    // SubProg format pc: 3393 op: STARTLINE (58)

    /** text.e:1988			    	prevargv = currargv*/
    // SubProg format pc: 3395 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3397 op: ASSIGN (18)
    Ref(_currargv_9190);
    DeRef(_prevargv_9189);
    _prevargv_9189 = _currargv_9190;
    // SubProg format pc: 3400 op: NOP1 (159)
L1F: // addr: 3401 pc: 3400 sub: 9162 op: 159
    // SubProg format pc: 3401 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var argtext_9351
    DeRef(_argtext_9351);
    _argtext_9351 = NOVALUE;
    // SubProg format pc: 3403 op: NOP1 (159)
    // SubProg format pc: 3404 op: STARTLINE (58)

    /** text.e:1991	    end while*/
    // SubProg format pc: 3406 op: ENDWHILE (22)
    goto L2; // [3406] 60
    // SubProg format pc: 3408 op: NOP1 (159)
L3: // addr: 3409 pc: 3408 sub: 9162 op: 159
    // SubProg format pc: 3409 op: STARTLINE (58)

    /** text.e:1993		return result*/
    // SubProg format pc: 3411 op: RETURNF (28)

// Exiting block BLOCK: format

// block var format_pattern_9164
    DeRefDS(_format_pattern_9164);

// block var arg_list_9165
    DeRef(_arg_list_9165);

// block var in_token_9167

// block var tch_9168

// block var i_9169

// block var tend_9170

// block var cap_9171

// block var align_9172

// block var psign_9173

// block var msign_9174

// block var zfill_9175

// block var bwz_9176

// block var spacer_9177

// block var alt_9178

// block var width_9179

// block var decs_9180

// block var pos_9181

// block var argn_9182

// block var argl_9183

// block var trimming_9184

// block var hexout_9185

// block var binout_9186

// block var tsep_9187

// block var istext_9188

// block var prevargv_9189
    DeRef(_prevargv_9189);

// block var currargv_9190
    DeRef(_currargv_9190);

// block var idname_9191
    DeRef(_idname_9191);

// block var envsym_9192
    DeRef(_envsym_9192);

// block var envvar_9193
    DeRefi(_envvar_9193);

// block var ep_9194
    DeRef(_5301);
    _5301 = NOVALUE;
    _5358 = NOVALUE;
    DeRef(_5212);
    _5212 = NOVALUE;
    DeRef(_5222);
    _5222 = NOVALUE;
    DeRef(_5424);
    _5424 = NOVALUE;
    DeRef(_5388);
    _5388 = NOVALUE;
    DeRef(_5483);
    _5483 = NOVALUE;
    DeRef(_5417);
    _5417 = NOVALUE;
    DeRef(_5466);
    _5466 = NOVALUE;
    DeRef(_5164);
    _5164 = NOVALUE;
    DeRef(_5480);
    _5480 = NOVALUE;
    DeRef(_5378);
    _5378 = NOVALUE;
    DeRef(_5472);
    _5472 = NOVALUE;
    DeRef(_5453);
    _5453 = NOVALUE;
    DeRef(_5283);
    _5283 = NOVALUE;
    DeRef(_5436);
    _5436 = NOVALUE;
    DeRef(_5140);
    _5140 = NOVALUE;
    DeRef(_5191);
    _5191 = NOVALUE;
    DeRef(_5240);
    _5240 = NOVALUE;
    DeRef(_5477);
    _5477 = NOVALUE;
    DeRef(_5443);
    _5443 = NOVALUE;
    DeRef(_5319);
    _5319 = NOVALUE;
    DeRef(_5203);
    _5203 = NOVALUE;
    DeRef(_5475);
    _5475 = NOVALUE;
    DeRef(_5496);
    _5496 = NOVALUE;
    DeRef(_5356);
    _5356 = NOVALUE;
    return _result_9166;
    // SubProg format pc: 3415 op: BADRETURNF (43)
    ;
}



// 0x05774DE5
