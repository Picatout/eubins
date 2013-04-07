// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _15sprint(object _x_9394)
{
    object _s_9395 = NOVALUE;
// skipping _5182  name type: 0
    object _5181 = NOVALUE; // 9418 5181
// skipping _5180  name type: 0
    object _5179 = NOVALUE; // 9416 5179
    object _5178 = NOVALUE; // 9415 5178
// skipping _5177  name type: 0
// skipping _5176  name type: 0
    object _5175 = NOVALUE; // 9411 5175
    object _5174 = NOVALUE; // 9410 5174
// skipping _5173  name type: 0
    object _5172 = NOVALUE; // 9407 5172
    object _5171 = NOVALUE; // 9406 5171
    object _5170 = NOVALUE; // 9405 5170
    object _5169 = NOVALUE; // 9404 5169
    object _5168 = NOVALUE; // 9402 5168
    object _5167 = NOVALUE; // 9398 5167
    object _5166 = NOVALUE; // 9397 5166
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sprint pc: 1 op: STARTLINE (58)

    /** text.e:93		if atom(x) then*/
    // SubProg sprint pc: 3 op: IS_AN_ATOM (67)
    _5166 = IS_ATOM(_x_9394);
    // SubProg sprint pc: 6 op: IF (20)
    if (_5166 == 0)
    {
        _5166 = NOVALUE;
        goto L1; // [6] 22
    }
    else{
        _5166 = NOVALUE;
    }
    // SubProg sprint pc: 9 op: STARTLINE (58)

    /** text.e:94			return sprintf("%.10g", x)*/
    // SubProg sprint pc: 11 op: SPRINTF (53)
    _5167 = EPrintf(-9999999, _4846, _x_9394);
    // SubProg sprint pc: 15 op: RETURNF (28)

// Exiting block BLOCK: sprint

// block var x_9394
    DeRef(_x_9394);

// block var s_9395
    DeRef(_s_9395);
    return _5167;
    // SubProg sprint pc: 19 op: ELSE (23)
    goto L2; // [19] 137
    // SubProg sprint pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 9392 op: 159
    // SubProg sprint pc: 22 op: STARTLINE (58)

    /** text.e:96			s = "{"*/
    // SubProg sprint pc: 24 op: ASSIGN (18)
    RefDS(_1519);
    DeRef(_s_9395);
    _s_9395 = _1519;
    // SubProg sprint pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg sprint pc: 29 op: STARTLINE (58)

    /** text.e:97			for i = 1 to length(x) do*/
    // SubProg sprint pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_x_9394)){
            _5168 = SEQ_PTR(_x_9394)->length;
    }
    else {
        _5168 = 1;
    }
    // SubProg sprint pc: 34 op: FOR_I (125)
    {
        object _i_9401;
        _i_9401 = 1;
L3: // addr: 41 pc: 34 sub: 9392 op: 125
        if (_i_9401 > _5168){
            goto L4; // [34] 98
        }
        // SubProg sprint pc: 41 op: STARTLINE (58)

        /** text.e:98				if atom(x[i]) then*/
        // SubProg sprint pc: 43 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_9394);
        _5169 = (object)*(((s1_ptr)_2)->base + _i_9401);
        // SubProg sprint pc: 47 op: IS_AN_ATOM (67)
        _5170 = IS_ATOM(_5169);
        _5169 = NOVALUE;
        // SubProg sprint pc: 50 op: IF (20)
        if (_5170 == 0)
        {
            _5170 = NOVALUE;
            goto L5; // [50] 70
        }
        else{
            _5170 = NOVALUE;
        }
        // SubProg sprint pc: 53 op: STARTLINE (58)

        /** text.e:99					s &= sprintf("%.10g", x[i])*/
        // SubProg sprint pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_9394);
        _5171 = (object)*(((s1_ptr)_2)->base + _i_9401);
        // SubProg sprint pc: 59 op: SPRINTF (53)
        _5172 = EPrintf(-9999999, _4846, _5171);
        _5171 = NOVALUE;
        // SubProg sprint pc: 63 op: CONCAT (15)
        Concat((object_ptr)&_s_9395, _s_9395, _5172);
        DeRefDS(_5172);
        _5172 = NOVALUE;
        // SubProg sprint pc: 67 op: ELSE (23)
        goto L6; // [67] 85
        // SubProg sprint pc: 69 op: NOP1 (159)
L5: // addr: 70 pc: 69 sub: 9392 op: 159
        // SubProg sprint pc: 70 op: STARTLINE (58)

        /** text.e:101					s &= sprint(x[i])*/
        // SubProg sprint pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_9394);
        _5174 = (object)*(((s1_ptr)_2)->base + _i_9401);
        // SubProg sprint pc: 76 op: PROC (27)
        Ref(_5174);
        _5175 = _15sprint(_5174);
        _5174 = NOVALUE;
        // SubProg sprint pc: 80 op: CONCAT (15)
        if (IS_SEQUENCE(_s_9395) && IS_ATOM(_5175)) {
            Ref(_5175);
            Append(&_s_9395, _s_9395, _5175);
        }
        else if (IS_ATOM(_s_9395) && IS_SEQUENCE(_5175)) {
        }
        else {
            Concat((object_ptr)&_s_9395, _s_9395, _5175);
        }
        DeRef(_5175);
        _5175 = NOVALUE;
        // SubProg sprint pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 9392 op: 159
        // SubProg sprint pc: 85 op: STARTLINE (58)

        /** text.e:103				s &= ','*/
        // SubProg sprint pc: 87 op: CONCAT (15)
        Append(&_s_9395, _s_9395, 44);
        // SubProg sprint pc: 91 op: STARTLINE (58)

        /** text.e:104			end for*/
        // SubProg sprint pc: 93 op: ENDFOR_INT_UP1 (54)
        _i_9401 = _i_9401 + 1;
        goto L3; // [93] 41
L4: // addr: 98 pc: 93 sub: 9392 op: 54
        ;
    }
    // SubProg sprint pc: 98 op: STARTLINE (58)

    /** text.e:105			if s[$] = ',' then*/
    // SubProg sprint pc: 100 op: LENGTH (42)
    if (IS_SEQUENCE(_s_9395)){
            _5178 = SEQ_PTR(_s_9395)->length;
    }
    else {
        _5178 = 1;
    }
    // SubProg sprint pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_9395);
    _5179 = (object)*(((s1_ptr)_2)->base + _5178);
    // SubProg sprint pc: 107 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5179, 44)){
        _5179 = NOVALUE;
        goto L7; // [107] 123
    }
    _5179 = NOVALUE;
    // SubProg sprint pc: 111 op: STARTLINE (58)

    /** text.e:106				s[$] = '}'*/
    // SubProg sprint pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_s_9395)){
            _5181 = SEQ_PTR(_s_9395)->length;
    }
    else {
        _5181 = 1;
    }
    // SubProg sprint pc: 116 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_s_9395);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _s_9395 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _5181);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 125;
    DeRef(_1);
    // SubProg sprint pc: 120 op: ELSE (23)
    goto L8; // [120] 130
    // SubProg sprint pc: 122 op: NOP1 (159)
L7: // addr: 123 pc: 122 sub: 9392 op: 159
    // SubProg sprint pc: 123 op: STARTLINE (58)

    /** text.e:108				s &= '}'*/
    // SubProg sprint pc: 125 op: CONCAT (15)
    Append(&_s_9395, _s_9395, 125);
    // SubProg sprint pc: 129 op: NOP1 (159)
L8: // addr: 130 pc: 129 sub: 9392 op: 159
    // SubProg sprint pc: 130 op: STARTLINE (58)

    /** text.e:110			return s*/
    // SubProg sprint pc: 132 op: RETURNF (28)

// Exiting block BLOCK: sprint

// block var x_9394
    DeRef(_x_9394);
    DeRef(_5167);
    _5167 = NOVALUE;
    return _s_9395;
    // SubProg sprint pc: 136 op: NOP1 (159)
L2: // addr: 137 pc: 136 sub: 9392 op: 159
    // SubProg sprint pc: 137 op: BADRETURNF (43)
    ;
}


object _15trim(object _source_9464, object _what_9465, object _ret_index_9466)
{
    object _rpos_9467 = NOVALUE;
    object _lpos_9468 = NOVALUE;
    object _5222 = NOVALUE; // 9499 5222
// skipping _5221  name type: 0
    object _5220 = NOVALUE; // 9497 5220
// skipping _5219  name type: 0
    object _5218 = NOVALUE; // 9494 5218
// skipping _5217  name type: 0
    object _5216 = NOVALUE; // 9489 5216
// skipping _5215  name type: 0
// skipping _5214  name type: 0
    object _5213 = NOVALUE; // 9485 5213
    object _5212 = NOVALUE; // 9484 5212
// skipping _5211  name type: 0
// skipping _5210  name type: 0
// skipping _5209  name type: 0
// skipping _5208  name type: 0
    object _5207 = NOVALUE; // 9477 5207
    object _5206 = NOVALUE; // 9476 5206
// skipping _5205  name type: 0
    object _5204 = NOVALUE; // 9473 5204
// skipping _5203  name type: 0
    object _5202 = NOVALUE; // 9470 5202
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg trim pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg trim pc: 3 op: INTEGER_CHECK (96)
    // SubProg trim pc: 5 op: STARTLINE (58)

    /** text.e:243		if atom(what) then*/
    // SubProg trim pc: 7 op: IS_AN_ATOM (67)
    _5202 = 0;
    // SubProg trim pc: 10 op: IF (20)
    if (_5202 == 0)
    {
        _5202 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _5202 = NOVALUE;
    }
    // SubProg trim pc: 13 op: STARTLINE (58)

    /** text.e:244			what = {what}*/
    // SubProg trim pc: 15 op: RIGHT_BRACE_N (31)
    _0 = _what_9465;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_what_9465);
    ((intptr_t*)_2)[1] = _what_9465;
    _what_9465 = MAKE_SEQ(_1);
    DeRefDSi(_0);
    // SubProg trim pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 9462 op: 159
    // SubProg trim pc: 20 op: STARTLINE (58)

    /** text.e:247		lpos = 1*/
    // SubProg trim pc: 22 op: ASSIGN_I (113)
    _lpos_9468 = 1;
    // SubProg trim pc: 25 op: STARTLINE (58)

    /** text.e:248		while lpos <= length(source) do*/
    // SubProg trim pc: 27 op: NOP2 (110)
    // SubProg trim pc: 29 op: NOPWHILE (158)
L2: // addr: 30 pc: 29 sub: 9462 op: 158
    // SubProg trim pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_source_9464)){
            _5204 = SEQ_PTR(_source_9464)->length;
    }
    else {
        _5204 = 1;
    }
    // SubProg trim pc: 33 op: LESSEQ_IFW_I (123)
    if (_lpos_9468 > _5204)
    goto L3; // [33] 67
    // SubProg trim pc: 37 op: STARTLINE (58)

    /** text.e:249			if not find(source[lpos], what) then*/
    // SubProg trim pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_9464);
    _5206 = (object)*(((s1_ptr)_2)->base + _lpos_9468);
    // SubProg trim pc: 43 op: FIND_FROM (176)
    _5207 = find_from(_5206, _what_9465, 1);
    _5206 = NOVALUE;
    // SubProg trim pc: 48 op: NOT_IFW (108)
    if (_5207 != 0)
    goto L4; // [48] 56
    _5207 = NOVALUE;
    // SubProg trim pc: 51 op: STARTLINE (58)

    /** text.e:250				exit*/
    // SubProg trim pc: 53 op: EXIT (61)
    goto L3; // [53] 67
    // SubProg trim pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 9462 op: 159
    // SubProg trim pc: 56 op: STARTLINE (58)

    /** text.e:252			lpos += 1*/
    // SubProg trim pc: 58 op: PLUS1_I (117)
    _lpos_9468 = _lpos_9468 + 1;
    // SubProg trim pc: 62 op: STARTLINE (58)

    /** text.e:253		end while*/
    // SubProg trim pc: 64 op: ENDWHILE (22)
    goto L2; // [64] 30
    // SubProg trim pc: 66 op: NOP1 (159)
L3: // addr: 67 pc: 66 sub: 9462 op: 159
    // SubProg trim pc: 67 op: STARTLINE (58)

    /** text.e:255		rpos = length(source)*/
    // SubProg trim pc: 69 op: LENGTH (42)
    if (IS_SEQUENCE(_source_9464)){
            _rpos_9467 = SEQ_PTR(_source_9464)->length;
    }
    else {
        _rpos_9467 = 1;
    }
    // SubProg trim pc: 72 op: STARTLINE (58)

    /** text.e:256		while rpos > lpos do*/
    // SubProg trim pc: 74 op: NOP2 (110)
    // SubProg trim pc: 76 op: NOPWHILE (158)
L5: // addr: 77 pc: 76 sub: 9462 op: 158
    // SubProg trim pc: 77 op: GREATER_IFW_I (124)
    if (_rpos_9467 <= _lpos_9468)
    goto L6; // [77] 111
    // SubProg trim pc: 81 op: STARTLINE (58)

    /** text.e:257			if not find(source[rpos], what) then*/
    // SubProg trim pc: 83 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_9464);
    _5212 = (object)*(((s1_ptr)_2)->base + _rpos_9467);
    // SubProg trim pc: 87 op: FIND_FROM (176)
    _5213 = find_from(_5212, _what_9465, 1);
    _5212 = NOVALUE;
    // SubProg trim pc: 92 op: NOT_IFW (108)
    if (_5213 != 0)
    goto L7; // [92] 100
    _5213 = NOVALUE;
    // SubProg trim pc: 95 op: STARTLINE (58)

    /** text.e:258				exit*/
    // SubProg trim pc: 97 op: EXIT (61)
    goto L6; // [97] 111
    // SubProg trim pc: 99 op: NOP1 (159)
L7: // addr: 100 pc: 99 sub: 9462 op: 159
    // SubProg trim pc: 100 op: STARTLINE (58)

    /** text.e:260			rpos -= 1*/
    // SubProg trim pc: 102 op: MINUS_I (116)
    _rpos_9467 = _rpos_9467 - 1;
    // SubProg trim pc: 106 op: STARTLINE (58)

    /** text.e:261		end while*/
    // SubProg trim pc: 108 op: ENDWHILE (22)
    goto L5; // [108] 77
    // SubProg trim pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 9462 op: 159
    // SubProg trim pc: 111 op: STARTLINE (58)

    /** text.e:263		if ret_index then*/
    // SubProg trim pc: 113 op: IF (20)
    if (_ret_index_9466 == 0)
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
    ((intptr_t *)_2)[1] = _lpos_9468;
    ((intptr_t *)_2)[2] = _rpos_9467;
    _5216 = MAKE_SEQ(_1);
    // SubProg trim pc: 122 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var source_9464
    DeRefDS(_source_9464);

// block var what_9465
    DeRef(_what_9465);

// block var ret_index_9466

// block var rpos_9467

// block var lpos_9468
    return _5216;
    // SubProg trim pc: 126 op: ELSE (23)
    goto L9; // [126] 180
    // SubProg trim pc: 128 op: NOP1 (159)
L8: // addr: 129 pc: 128 sub: 9462 op: 159
    // SubProg trim pc: 129 op: STARTLINE (58)

    /** text.e:266			if lpos = 1 then*/
    // SubProg trim pc: 131 op: EQUALS_IFW_I (121)
    if (_lpos_9468 != 1)
    goto LA; // [131] 152
    // SubProg trim pc: 135 op: STARTLINE (58)

    /** text.e:267				if rpos = length(source) then*/
    // SubProg trim pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_source_9464)){
            _5218 = SEQ_PTR(_source_9464)->length;
    }
    else {
        _5218 = 1;
    }
    // SubProg trim pc: 140 op: EQUALS_IFW_I (121)
    if (_rpos_9467 != _5218)
    goto LB; // [140] 151
    // SubProg trim pc: 144 op: STARTLINE (58)

    /** text.e:268					return source*/
    // SubProg trim pc: 146 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var what_9465
    DeRef(_what_9465);

// block var ret_index_9466

// block var rpos_9467

// block var lpos_9468
    DeRef(_5216);
    _5216 = NOVALUE;
    return _source_9464;
    // SubProg trim pc: 150 op: NOP1 (159)
LB: // addr: 151 pc: 150 sub: 9462 op: 159
    // SubProg trim pc: 151 op: NOP1 (159)
LA: // addr: 152 pc: 151 sub: 9462 op: 159
    // SubProg trim pc: 152 op: STARTLINE (58)

    /** text.e:271			if lpos > length(source) then*/
    // SubProg trim pc: 154 op: LENGTH (42)
    if (IS_SEQUENCE(_source_9464)){
            _5220 = SEQ_PTR(_source_9464)->length;
    }
    else {
        _5220 = 1;
    }
    // SubProg trim pc: 157 op: GREATER_IFW_I (124)
    if (_lpos_9468 <= _5220)
    goto LC; // [157] 168
    // SubProg trim pc: 161 op: STARTLINE (58)

    /** text.e:272				return {}*/
    // SubProg trim pc: 163 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: trim

// block var source_9464
    DeRefDS(_source_9464);

// block var what_9465
    DeRef(_what_9465);

// block var ret_index_9466

// block var rpos_9467

// block var lpos_9468
    DeRef(_5216);
    _5216 = NOVALUE;
    return _5;
    // SubProg trim pc: 167 op: NOP1 (159)
LC: // addr: 168 pc: 167 sub: 9462 op: 159
    // SubProg trim pc: 168 op: STARTLINE (58)

    /** text.e:274			return source[lpos..rpos]*/
    // SubProg trim pc: 170 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5222;
    RHS_Slice(_source_9464, _lpos_9468, _rpos_9467);
    // SubProg trim pc: 175 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var source_9464
    DeRefDS(_source_9464);

// block var what_9465
    DeRef(_what_9465);

// block var ret_index_9466

// block var rpos_9467

// block var lpos_9468
    DeRef(_5216);
    _5216 = NOVALUE;
    return _5222;
    // SubProg trim pc: 179 op: NOP1 (159)
L9: // addr: 180 pc: 179 sub: 9462 op: 159
    // SubProg trim pc: 180 op: BADRETURNF (43)
    ;
}


object _15lower(object _x_9656)
{
    object _5334 = NOVALUE; // 9665 5334
    object _5333 = NOVALUE; // 9664 5333
    object _5332 = NOVALUE; // 9663 5332
    object _5331 = NOVALUE; // 9662 5331
    object _5330 = NOVALUE; // 9661 5330
// skipping _5329  name type: 0
// skipping _5328  name type: 0
    object _5327 = NOVALUE; // 9658 5327
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lower pc: 1 op: STARTLINE (58)

    /** text.e:535		if length(lower_case_SET) != 0 then*/
    // SubProg lower pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg lower pc: 5 op: LENGTH (42)
    // Known sequence length:
    _5327 = 0;
    // SubProg lower pc: 8 op: NOTEQ_IFW_I (122)
    // SubProg lower pc: 30 op: STARTLINE (58)

    /** text.e:539		ifdef WINDOWS then*/
    // SubProg lower pc: 32 op: STARTLINE (58)

    /** text.e:542			return x + (x >= 'A' and x <= 'Z') * TO_LOWER*/
    // SubProg lower pc: 34 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_9656)) {
        _5330 = (_x_9656 >= 65);
    }
    else {
        _5330 = binary_op(GREATEREQ, _x_9656, 65);
    }
    // SubProg lower pc: 38 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_9656)) {
        _5331 = (_x_9656 <= 90);
    }
    else {
        _5331 = binary_op(LESSEQ, _x_9656, 90);
    }
    // SubProg lower pc: 42 op: AND (8)
    if (IS_ATOM_INT(_5330) && IS_ATOM_INT(_5331)) {
        _5332 = (_5330 != 0 && _5331 != 0);
    }
    else {
        _5332 = binary_op(AND, _5330, _5331);
    }
    DeRef(_5330);
    _5330 = NOVALUE;
    DeRef(_5331);
    _5331 = NOVALUE;
    // SubProg lower pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg lower pc: 48 op: MULTIPLY (13)
    if (IS_ATOM_INT(_5332)) {
        if (_5332 == (short)_5332){
            _5333 = _5332 * 32;
        }
        else{
            _5333 = NewDouble(_5332 * (eudouble)32);
        }
    }
    else {
        _5333 = binary_op(MULTIPLY, _5332, 32);
    }
    DeRef(_5332);
    _5332 = NOVALUE;
    // SubProg lower pc: 52 op: PLUS (11)
    if (IS_ATOM_INT(_x_9656) && IS_ATOM_INT(_5333)) {
        _5334 = _x_9656 + _5333;
        if ((object)((uintptr_t)_5334 + (uintptr_t)HIGH_BITS) >= 0){
            _5334 = NewDouble((eudouble)_5334);
        }
    }
    else {
        _5334 = binary_op(PLUS, _x_9656, _5333);
    }
    DeRef(_5333);
    _5333 = NOVALUE;
    // SubProg lower pc: 56 op: RETURNF (28)

// Exiting block BLOCK: lower

// block var x_9656
    DeRef(_x_9656);
    return _5334;
    // SubProg lower pc: 60 op: BADRETURNF (43)
    ;
}


object _15upper(object _x_9668)
{
    object _5342 = NOVALUE; // 9677 5342
    object _5341 = NOVALUE; // 9676 5341
    object _5340 = NOVALUE; // 9675 5340
    object _5339 = NOVALUE; // 9674 5339
    object _5338 = NOVALUE; // 9673 5338
// skipping _5337  name type: 0
// skipping _5336  name type: 0
    object _5335 = NOVALUE; // 9670 5335
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg upper pc: 1 op: STARTLINE (58)

    /** text.e:581		if length(upper_case_SET) != 0 then*/
    // SubProg upper pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg upper pc: 5 op: LENGTH (42)
    // Known sequence length:
    _5335 = 0;
    // SubProg upper pc: 8 op: NOTEQ_IFW_I (122)
    // SubProg upper pc: 30 op: STARTLINE (58)

    /** text.e:584		ifdef WINDOWS then*/
    // SubProg upper pc: 32 op: STARTLINE (58)

    /** text.e:587			return x - (x >= 'a' and x <= 'z') * TO_LOWER*/
    // SubProg upper pc: 34 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_9668)) {
        _5338 = (_x_9668 >= 97);
    }
    else {
        _5338 = binary_op(GREATEREQ, _x_9668, 97);
    }
    // SubProg upper pc: 38 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_9668)) {
        _5339 = (_x_9668 <= 122);
    }
    else {
        _5339 = binary_op(LESSEQ, _x_9668, 122);
    }
    // SubProg upper pc: 42 op: AND (8)
    if (IS_ATOM_INT(_5338) && IS_ATOM_INT(_5339)) {
        _5340 = (_5338 != 0 && _5339 != 0);
    }
    else {
        _5340 = binary_op(AND, _5338, _5339);
    }
    DeRef(_5338);
    _5338 = NOVALUE;
    DeRef(_5339);
    _5339 = NOVALUE;
    // SubProg upper pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg upper pc: 48 op: MULTIPLY (13)
    if (IS_ATOM_INT(_5340)) {
        if (_5340 == (short)_5340){
            _5341 = _5340 * 32;
        }
        else{
            _5341 = NewDouble(_5340 * (eudouble)32);
        }
    }
    else {
        _5341 = binary_op(MULTIPLY, _5340, 32);
    }
    DeRef(_5340);
    _5340 = NOVALUE;
    // SubProg upper pc: 52 op: MINUS (10)
    if (IS_ATOM_INT(_x_9668) && IS_ATOM_INT(_5341)) {
        _5342 = _x_9668 - _5341;
        if ((object)((uintptr_t)_5342 +(uintptr_t) HIGH_BITS) >= 0){
            _5342 = NewDouble((eudouble)_5342);
        }
    }
    else {
        _5342 = binary_op(MINUS, _x_9668, _5341);
    }
    DeRef(_5341);
    _5341 = NOVALUE;
    // SubProg upper pc: 56 op: RETURNF (28)

// Exiting block BLOCK: upper

// block var x_9668
    DeRef(_x_9668);
    return _5342;
    // SubProg upper pc: 60 op: BADRETURNF (43)
    ;
}


object _15proper(object _x_9680)
{
    object _pos_9681 = NOVALUE;
    object _inword_9682 = NOVALUE;
    object _convert_9683 = NOVALUE;
    object _res_9684 = NOVALUE;
    object _5372 = NOVALUE; // 9737 5372
    object _5371 = NOVALUE; // 9736 5371
    object _5370 = NOVALUE; // 9735 5370
    object _5369 = NOVALUE; // 9734 5369
    object _5368 = NOVALUE; // 9732 5368
    object _5367 = NOVALUE; // 9731 5367
    object _5366 = NOVALUE; // 9730 5366
    object _5365 = NOVALUE; // 9728 5365
    object _5364 = NOVALUE; // 9722 5364
    object _5363 = NOVALUE; // 9721 5363
// skipping _5362  name type: 0
    object _5361 = NOVALUE; // 9717 5361
    object _5360 = NOVALUE; // 9716 5360
// skipping _5359  name type: 0
// skipping _5357  name type: 0
// skipping _5356  name type: 0
    object _5355 = NOVALUE; // 9706 5355
// skipping _5354  name type: 0
// skipping _5353  name type: 0
    object _5352 = NOVALUE; // 9701 5352
// skipping _5351  name type: 0
// skipping _5350  name type: 0
    object _5349 = NOVALUE; // 9696 5349
// skipping _5348  name type: 0
// skipping _5347  name type: 0
    object _5346 = NOVALUE; // 9692 5346
    object _5345 = NOVALUE; // 9690 5345
    object _5344 = NOVALUE; // 9689 5344
    object _5343 = NOVALUE; // 9687 5343
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg proper pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg proper pc: 3 op: STARTLINE (58)

    /** text.e:633		inword = 0	-- Initially not in a word*/
    // SubProg proper pc: 5 op: ASSIGN_I (113)
    _inword_9682 = 0;
    // SubProg proper pc: 8 op: STARTLINE (58)

    /** text.e:634		convert = 1	-- Initially convert text*/
    // SubProg proper pc: 10 op: ASSIGN_I (113)
    _convert_9683 = 1;
    // SubProg proper pc: 13 op: STARTLINE (58)

    /** text.e:635		res = x		-- Work on a copy of the original, in case we need to restore.*/
    // SubProg proper pc: 15 op: ASSIGN (18)
    RefDS(_x_9680);
    DeRef(_res_9684);
    _res_9684 = _x_9680;
    // SubProg proper pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg proper pc: 20 op: STARTLINE (58)

    /** text.e:636		for i = 1 to length(res) do*/
    // SubProg proper pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_res_9684)){
            _5343 = SEQ_PTR(_res_9684)->length;
    }
    else {
        _5343 = 1;
    }
    // SubProg proper pc: 25 op: FOR_I (125)
    {
        object _i_9686;
        _i_9686 = 1;
L1: // addr: 32 pc: 25 sub: 9678 op: 125
        if (_i_9686 > _5343){
            goto L2; // [25] 298
        }
        // SubProg proper pc: 32 op: STARTLINE (58)

        /** text.e:637			if integer(res[i]) then*/
        // SubProg proper pc: 34 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5344 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 38 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_5344))
        _5345 = 1;
        else if (IS_ATOM_DBL(_5344))
        _5345 = IS_ATOM_INT(DoubleToInt(_5344));
        else
        _5345 = 0;
        _5344 = NOVALUE;
        // SubProg proper pc: 41 op: IF (20)
        if (_5345 == 0)
        {
            _5345 = NOVALUE;
            goto L3; // [41] 209
        }
        else{
            _5345 = NOVALUE;
        }
        // SubProg proper pc: 44 op: STARTLINE (58)

        /** text.e:638				if convert then*/
        // SubProg proper pc: 46 op: IF (20)
        if (_convert_9683 == 0)
        {
            goto L4; // [46] 291
        }
        else{
        }
        // SubProg proper pc: 49 op: STARTLINE (58)

        /** text.e:640					pos = types:t_upper(res[i])*/
        // SubProg proper pc: 51 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5346 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 55 op: PROC (27)
        Ref(_5346);
        _pos_9681 = _8t_upper(_5346);
        _5346 = NOVALUE;
        // SubProg proper pc: 59 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_9681)) {
            _1 = (object)(DBL_PTR(_pos_9681)->dbl);
            DeRefDS(_pos_9681);
            _pos_9681 = _1;
        }
        // SubProg proper pc: 61 op: STARTLINE (58)

        /** text.e:641					if pos = 0 then*/
        // SubProg proper pc: 63 op: EQUALS_IFW_I (121)
        if (_pos_9681 != 0)
        goto L5; // [63] 175
        // SubProg proper pc: 67 op: STARTLINE (58)

        /** text.e:643						pos = types:t_lower(res[i])*/
        // SubProg proper pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5349 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 73 op: PROC (27)
        Ref(_5349);
        _pos_9681 = _8t_lower(_5349);
        _5349 = NOVALUE;
        // SubProg proper pc: 77 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_9681)) {
            _1 = (object)(DBL_PTR(_pos_9681)->dbl);
            DeRefDS(_pos_9681);
            _pos_9681 = _1;
        }
        // SubProg proper pc: 79 op: STARTLINE (58)

        /** text.e:644						if pos = 0 then*/
        // SubProg proper pc: 81 op: EQUALS_IFW_I (121)
        if (_pos_9681 != 0)
        goto L6; // [81] 138
        // SubProg proper pc: 85 op: STARTLINE (58)

        /** text.e:647							pos = t_digit(res[i])*/
        // SubProg proper pc: 87 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5352 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 91 op: PROC (27)
        Ref(_5352);
        _pos_9681 = _8t_digit(_5352);
        _5352 = NOVALUE;
        // SubProg proper pc: 95 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_9681)) {
            _1 = (object)(DBL_PTR(_pos_9681)->dbl);
            DeRefDS(_pos_9681);
            _pos_9681 = _1;
        }
        // SubProg proper pc: 97 op: STARTLINE (58)

        /** text.e:648							if pos = 0 then*/
        // SubProg proper pc: 99 op: EQUALS_IFW_I (121)
        if (_pos_9681 != 0)
        goto L4; // [99] 291
        // SubProg proper pc: 103 op: STARTLINE (58)

        /** text.e:650								pos = t_specword(res[i])*/
        // SubProg proper pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5355 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 109 op: PROC (27)
        Ref(_5355);
        _pos_9681 = _8t_specword(_5355);
        _5355 = NOVALUE;
        // SubProg proper pc: 113 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_9681)) {
            _1 = (object)(DBL_PTR(_pos_9681)->dbl);
            DeRefDS(_pos_9681);
            _pos_9681 = _1;
        }
        // SubProg proper pc: 115 op: STARTLINE (58)

        /** text.e:651								if pos then*/
        // SubProg proper pc: 117 op: IF (20)
        if (_pos_9681 == 0)
        {
            goto L7; // [117] 128
        }
        else{
        }
        // SubProg proper pc: 120 op: STARTLINE (58)

        /** text.e:652									inword = 1*/
        // SubProg proper pc: 122 op: ASSIGN_I (113)
        _inword_9682 = 1;
        // SubProg proper pc: 125 op: ELSE (23)
        goto L4; // [125] 291
        // SubProg proper pc: 127 op: NOP1 (159)
L7: // addr: 128 pc: 127 sub: 9678 op: 159
        // SubProg proper pc: 128 op: STARTLINE (58)

        /** text.e:654									inword = 0*/
        // SubProg proper pc: 130 op: ASSIGN_I (113)
        _inword_9682 = 0;
        // SubProg proper pc: 133 op: NOP1 (159)
        // SubProg proper pc: 134 op: NOP1 (159)
        // SubProg proper pc: 135 op: ELSE (23)
        goto L4; // [135] 291
        // SubProg proper pc: 137 op: NOP1 (159)
L6: // addr: 138 pc: 137 sub: 9678 op: 159
        // SubProg proper pc: 138 op: STARTLINE (58)

        /** text.e:658							if inword = 0 then*/
        // SubProg proper pc: 140 op: EQUALS_IFW_I (121)
        if (_inword_9682 != 0)
        goto L4; // [140] 291
        // SubProg proper pc: 144 op: STARTLINE (58)

        /** text.e:660								if pos <= 26 then*/
        // SubProg proper pc: 146 op: LESSEQ_IFW_I (123)
        if (_pos_9681 > 26)
        goto L8; // [146] 165
        // SubProg proper pc: 150 op: STARTLINE (58)

        /** text.e:661									res[i] = upper(res[i]) -- Convert to uppercase*/
        // SubProg proper pc: 152 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5360 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 156 op: PROC (27)
        Ref(_5360);
        _5361 = _15upper(_5360);
        _5360 = NOVALUE;
        // SubProg proper pc: 160 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_9684);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_9684 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_9686);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5361;
        if( _1 != _5361 ){
            DeRef(_1);
        }
        _5361 = NOVALUE;
        // SubProg proper pc: 164 op: NOP1 (159)
L8: // addr: 165 pc: 164 sub: 9678 op: 159
        // SubProg proper pc: 165 op: STARTLINE (58)

        /** text.e:663								inword = 1	-- now we are in a word*/
        // SubProg proper pc: 167 op: ASSIGN_I (113)
        _inword_9682 = 1;
        // SubProg proper pc: 170 op: NOP1 (159)
        // SubProg proper pc: 171 op: NOP1 (159)
        // SubProg proper pc: 172 op: ELSE (23)
        goto L4; // [172] 291
        // SubProg proper pc: 174 op: NOP1 (159)
L5: // addr: 175 pc: 174 sub: 9678 op: 159
        // SubProg proper pc: 175 op: STARTLINE (58)

        /** text.e:667						if inword = 1 then*/
        // SubProg proper pc: 177 op: EQUALS_IFW_I (121)
        if (_inword_9682 != 1)
        goto L9; // [177] 198
        // SubProg proper pc: 181 op: STARTLINE (58)

        /** text.e:669							res[i] = lower(res[i]) -- Convert to lowercase*/
        // SubProg proper pc: 183 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5363 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 187 op: PROC (27)
        Ref(_5363);
        _5364 = _15lower(_5363);
        _5363 = NOVALUE;
        // SubProg proper pc: 191 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_9684);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_9684 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_9686);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5364;
        if( _1 != _5364 ){
            DeRef(_1);
        }
        _5364 = NOVALUE;
        // SubProg proper pc: 195 op: ELSE (23)
        goto L4; // [195] 291
        // SubProg proper pc: 197 op: NOP1 (159)
L9: // addr: 198 pc: 197 sub: 9678 op: 159
        // SubProg proper pc: 198 op: STARTLINE (58)

        /** text.e:671							inword = 1	-- now we are in a word*/
        // SubProg proper pc: 200 op: ASSIGN_I (113)
        _inword_9682 = 1;
        // SubProg proper pc: 203 op: NOP1 (159)
        // SubProg proper pc: 204 op: NOP1 (159)
        // SubProg proper pc: 205 op: NOP1 (159)
        // SubProg proper pc: 206 op: ELSE (23)
        goto L4; // [206] 291
        // SubProg proper pc: 208 op: NOP1 (159)
L3: // addr: 209 pc: 208 sub: 9678 op: 159
        // SubProg proper pc: 209 op: STARTLINE (58)

        /** text.e:678				if convert then*/
        // SubProg proper pc: 211 op: IF (20)
        if (_convert_9683 == 0)
        {
            goto LA; // [211] 263
        }
        else{
        }
        // SubProg proper pc: 214 op: STARTLINE (58)

        /** text.e:680					for j = 1 to i-1 do*/
        // SubProg proper pc: 216 op: MINUS (10)
        _5365 = _i_9686 - 1;
        // SubProg proper pc: 220 op: FOR (21)
        {
            object _j_9727;
            _j_9727 = 1;
LB: // addr: 227 pc: 220 sub: 9678 op: 21
            if (_j_9727 > _5365){
                goto LC; // [220] 257
            }
            // SubProg proper pc: 227 op: STARTLINE (58)

            /** text.e:681						if atom(x[j]) then*/
            // SubProg proper pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_x_9680);
            _5366 = (object)*(((s1_ptr)_2)->base + _j_9727);
            // SubProg proper pc: 233 op: IS_AN_ATOM (67)
            _5367 = IS_ATOM(_5366);
            _5366 = NOVALUE;
            // SubProg proper pc: 236 op: IF (20)
            if (_5367 == 0)
            {
                _5367 = NOVALUE;
                goto LD; // [236] 250
            }
            else{
                _5367 = NOVALUE;
            }
            // SubProg proper pc: 239 op: STARTLINE (58)

            /** text.e:682							res[j] = x[j]*/
            // SubProg proper pc: 241 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_x_9680);
            _5368 = (object)*(((s1_ptr)_2)->base + _j_9727);
            // SubProg proper pc: 245 op: ASSIGN_SUBS (16)
            Ref(_5368);
            _2 = (object)SEQ_PTR(_res_9684);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _res_9684 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _j_9727);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5368;
            if( _1 != _5368 ){
                DeRef(_1);
            }
            _5368 = NOVALUE;
            // SubProg proper pc: 249 op: NOP1 (159)
LD: // addr: 250 pc: 249 sub: 9678 op: 159
            // SubProg proper pc: 250 op: STARTLINE (58)

            /** text.e:684					end for*/
            // SubProg proper pc: 252 op: ENDFOR_INT_UP1 (54)
            _j_9727 = _j_9727 + 1;
            goto LB; // [252] 227
LC: // addr: 257 pc: 252 sub: 9678 op: 54
            ;
        }
        // SubProg proper pc: 257 op: STARTLINE (58)

        /** text.e:686					convert = 0*/
        // SubProg proper pc: 259 op: ASSIGN_I (113)
        _convert_9683 = 0;
        // SubProg proper pc: 262 op: NOP1 (159)
LA: // addr: 263 pc: 262 sub: 9678 op: 159
        // SubProg proper pc: 263 op: STARTLINE (58)

        /** text.e:689				if sequence(res[i]) then*/
        // SubProg proper pc: 265 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5369 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 269 op: IS_A_SEQUENCE (68)
        _5370 = IS_SEQUENCE(_5369);
        _5369 = NOVALUE;
        // SubProg proper pc: 272 op: IF (20)
        if (_5370 == 0)
        {
            _5370 = NOVALUE;
            goto LE; // [272] 290
        }
        else{
            _5370 = NOVALUE;
        }
        // SubProg proper pc: 275 op: STARTLINE (58)

        /** text.e:690					res[i] = proper(res[i])	-- recursive conversion*/
        // SubProg proper pc: 277 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_9684);
        _5371 = (object)*(((s1_ptr)_2)->base + _i_9686);
        // SubProg proper pc: 281 op: PROC (27)
        Ref(_5371);
        _5372 = _15proper(_5371);
        _5371 = NOVALUE;
        // SubProg proper pc: 285 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_9684);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_9684 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_9686);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5372;
        if( _1 != _5372 ){
            DeRef(_1);
        }
        _5372 = NOVALUE;
        // SubProg proper pc: 289 op: NOP1 (159)
LE: // addr: 290 pc: 289 sub: 9678 op: 159
        // SubProg proper pc: 290 op: NOP1 (159)
L4: // addr: 291 pc: 290 sub: 9678 op: 159
        // SubProg proper pc: 291 op: STARTLINE (58)

        /** text.e:693		end for*/
        // SubProg proper pc: 293 op: ENDFOR_INT_UP1 (54)
        _i_9686 = _i_9686 + 1;
        goto L1; // [293] 32
L2: // addr: 298 pc: 293 sub: 9678 op: 54
        ;
    }
    // SubProg proper pc: 298 op: STARTLINE (58)

    /** text.e:694		return res*/
    // SubProg proper pc: 300 op: RETURNF (28)

// Exiting block BLOCK: proper

// block var x_9680
    DeRefDS(_x_9680);

// block var pos_9681

// block var inword_9682

// block var convert_9683
    DeRef(_5365);
    _5365 = NOVALUE;
    return _res_9684;
    // SubProg proper pc: 304 op: BADRETURNF (43)
    ;
}


object _15quote(object _text_in_10003, object _quote_pair_10004, object _esc_10006, object _sp_10008)
{
    object _5643 = NOVALUE; // 10118 5643
    object _5642 = NOVALUE; // 10117 5642
    object _5641 = NOVALUE; // 10116 5641
// skipping _5640  name type: 0
    object _5639 = NOVALUE; // 10114 5639
    object _5638 = NOVALUE; // 10113 5638
    object _5637 = NOVALUE; // 10112 5637
// skipping _5636  name type: 0
    object _5635 = NOVALUE; // 10110 5635
    object _5634 = NOVALUE; // 10109 5634
    object _5633 = NOVALUE; // 10108 5633
    object _5632 = NOVALUE; // 10107 5632
    object _5631 = NOVALUE; // 10106 5631
    object _5630 = NOVALUE; // 10105 5630
    object _5629 = NOVALUE; // 10104 5629
    object _5628 = NOVALUE; // 10102 5628
    object _5627 = NOVALUE; // 10101 5627
// skipping _5626  name type: 0
    object _5625 = NOVALUE; // 10098 5625
    object _5624 = NOVALUE; // 10097 5624
    object _5623 = NOVALUE; // 10096 5623
// skipping _5622  name type: 0
    object _5621 = NOVALUE; // 10093 5621
    object _5620 = NOVALUE; // 10092 5620
    object _5619 = NOVALUE; // 10091 5619
    object _5618 = NOVALUE; // 10090 5618
    object _5617 = NOVALUE; // 10089 5617
    object _5616 = NOVALUE; // 10088 5616
    object _5615 = NOVALUE; // 10087 5615
    object _5614 = NOVALUE; // 10085 5614
    object _5613 = NOVALUE; // 10084 5613
// skipping _5612  name type: 0
    object _5611 = NOVALUE; // 10082 5611
    object _5610 = NOVALUE; // 10081 5610
// skipping _5609  name type: 0
    object _5608 = NOVALUE; // 10077 5608
    object _5607 = NOVALUE; // 10076 5607
    object _5606 = NOVALUE; // 10075 5606
// skipping _5605  name type: 0
    object _5604 = NOVALUE; // 10073 5604
    object _5603 = NOVALUE; // 10072 5603
    object _5602 = NOVALUE; // 10071 5602
    object _5601 = NOVALUE; // 10070 5601
    object _5600 = NOVALUE; // 10068 5600
    object _5599 = NOVALUE; // 10067 5599
    object _5598 = NOVALUE; // 10065 5598
    object _5597 = NOVALUE; // 10064 5597
    object _5596 = NOVALUE; // 10063 5596
    object _5595 = NOVALUE; // 10061 5595
    object _5594 = NOVALUE; // 10060 5594
    object _5593 = NOVALUE; // 10059 5593
    object _5592 = NOVALUE; // 10058 5592
    object _5591 = NOVALUE; // 10056 5591
    object _5590 = NOVALUE; // 10055 5590
    object _5589 = NOVALUE; // 10054 5589
    object _5588 = NOVALUE; // 10053 5588
// skipping _5587  name type: 0
// skipping _5586  name type: 0
    object _5585 = NOVALUE; // 10048 5585
    object _5584 = NOVALUE; // 10046 5584
    object _5583 = NOVALUE; // 10045 5583
    object _5582 = NOVALUE; // 10043 5582
    object _5581 = NOVALUE; // 10040 5581
    object _5580 = NOVALUE; // 10039 5580
    object _5579 = NOVALUE; // 10038 5579
    object _5578 = NOVALUE; // 10037 5578
    object _5577 = NOVALUE; // 10036 5577
    object _5576 = NOVALUE; // 10035 5576
    object _5575 = NOVALUE; // 10034 5575
    object _5574 = NOVALUE; // 10032 5574
    object _5573 = NOVALUE; // 10029 5573
    object _5572 = NOVALUE; // 10028 5572
// skipping _5571  name type: 0
// skipping _5570  name type: 0
    object _5569 = NOVALUE; // 10024 5569
// skipping _5568  name type: 0
    object _5567 = NOVALUE; // 10021 5567
    object _5566 = NOVALUE; // 10020 5566
// skipping _5565  name type: 0
    object _5564 = NOVALUE; // 10018 5564
// skipping _5563  name type: 0
    object _5562 = NOVALUE; // 10015 5562
    object _5561 = NOVALUE; // 10014 5561
    object _5560 = NOVALUE; // 10013 5560
// skipping _5559  name type: 0
    object _5558 = NOVALUE; // 10010 5558
// skipping _5557  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg quote pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 3 op: INTEGER_CHECK (96)
    // SubProg quote pc: 5 op: STARTLINE (58)

    /** text.e:1118		if length(text_in) = 0 then*/
    // SubProg quote pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_10003)){
            _5558 = SEQ_PTR(_text_in_10003)->length;
    }
    else {
        _5558 = 1;
    }
    // SubProg quote pc: 10 op: EQUALS_IFW_I (121)
    if (_5558 != 0)
    goto L1; // [10] 21
    // SubProg quote pc: 14 op: STARTLINE (58)

    /** text.e:1119			return text_in*/
    // SubProg quote pc: 16 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_10004
    DeRef(_quote_pair_10004);

// block var esc_10006

// block var sp_10008
    DeRef(_sp_10008);
    return _text_in_10003;
    // SubProg quote pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 10001 op: 159
    // SubProg quote pc: 21 op: STARTLINE (58)

    /** text.e:1122		if atom(quote_pair) then*/
    // SubProg quote pc: 23 op: IS_AN_ATOM (67)
    _5560 = IS_ATOM(_quote_pair_10004);
    // SubProg quote pc: 26 op: IF (20)
    if (_5560 == 0)
    {
        _5560 = NOVALUE;
        goto L2; // [26] 46
    }
    else{
        _5560 = NOVALUE;
    }
    // SubProg quote pc: 29 op: STARTLINE (58)

    /** text.e:1123			quote_pair = {{quote_pair}, {quote_pair}}*/
    // SubProg quote pc: 31 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_10004);
    ((intptr_t*)_2)[1] = _quote_pair_10004;
    _5561 = MAKE_SEQ(_1);
    // SubProg quote pc: 35 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_10004);
    ((intptr_t*)_2)[1] = _quote_pair_10004;
    _5562 = MAKE_SEQ(_1);
    // SubProg quote pc: 39 op: RIGHT_BRACE_2 (85)
    DeRef(_quote_pair_10004);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5561;
    ((intptr_t *)_2)[2] = _5562;
    _quote_pair_10004 = MAKE_SEQ(_1);
    _5562 = NOVALUE;
    _5561 = NOVALUE;
    // SubProg quote pc: 43 op: ELSE (23)
    goto L3; // [43] 89
    // SubProg quote pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 10001 op: 159
    // SubProg quote pc: 46 op: STARTLINE (58)

    /** text.e:1124		elsif length(quote_pair) = 1 then*/
    // SubProg quote pc: 48 op: LENGTH (42)
    if (IS_SEQUENCE(_quote_pair_10004)){
            _5564 = SEQ_PTR(_quote_pair_10004)->length;
    }
    else {
        _5564 = 1;
    }
    // SubProg quote pc: 51 op: EQUALS_IFW_I (121)
    if (_5564 != 1)
    goto L4; // [51] 72
    // SubProg quote pc: 55 op: STARTLINE (58)

    /** text.e:1125			quote_pair = {quote_pair[1], quote_pair[1]}*/
    // SubProg quote pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5566 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5567 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 65 op: RIGHT_BRACE_2 (85)
    Ref(_5567);
    Ref(_5566);
    DeRef(_quote_pair_10004);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5566;
    ((intptr_t *)_2)[2] = _5567;
    _quote_pair_10004 = MAKE_SEQ(_1);
    _5567 = NOVALUE;
    _5566 = NOVALUE;
    // SubProg quote pc: 69 op: ELSE (23)
    goto L3; // [69] 89
    // SubProg quote pc: 71 op: NOP1 (159)
L4: // addr: 72 pc: 71 sub: 10001 op: 159
    // SubProg quote pc: 72 op: STARTLINE (58)

    /** text.e:1126		elsif length(quote_pair) = 0 then*/
    // SubProg quote pc: 74 op: LENGTH (42)
    if (IS_SEQUENCE(_quote_pair_10004)){
            _5569 = SEQ_PTR(_quote_pair_10004)->length;
    }
    else {
        _5569 = 1;
    }
    // SubProg quote pc: 77 op: EQUALS_IFW_I (121)
    if (_5569 != 0)
    goto L5; // [77] 88
    // SubProg quote pc: 81 op: STARTLINE (58)

    /** text.e:1127			quote_pair = {"\"", "\""}*/
    // SubProg quote pc: 83 op: RIGHT_BRACE_2 (85)
    RefDS(_5550);
    RefDS(_5550);
    DeRef(_quote_pair_10004);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5550;
    ((intptr_t *)_2)[2] = _5550;
    _quote_pair_10004 = MAKE_SEQ(_1);
    // SubProg quote pc: 87 op: NOP1 (159)
L5: // addr: 88 pc: 87 sub: 10001 op: 159
    // SubProg quote pc: 88 op: NOP1 (159)
L3: // addr: 89 pc: 88 sub: 10001 op: 159
    // SubProg quote pc: 89 op: STARTLINE (58)

    /** text.e:1130		if sequence(text_in[1]) then*/
    // SubProg quote pc: 91 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_text_in_10003);
    _5572 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 95 op: IS_A_SEQUENCE (68)
    _5573 = IS_SEQUENCE(_5572);
    _5572 = NOVALUE;
    // SubProg quote pc: 98 op: IF (20)
    if (_5573 == 0)
    {
        _5573 = NOVALUE;
        goto L6; // [98] 166
    }
    else{
        _5573 = NOVALUE;
    }
    // SubProg quote pc: 101 op: STARTLINE (58)

    /** text.e:1131			for i = 1 to length(text_in) do*/
    // SubProg quote pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_10003)){
            _5574 = SEQ_PTR(_text_in_10003)->length;
    }
    else {
        _5574 = 1;
    }
    // SubProg quote pc: 106 op: FOR_I (125)
    {
        object _i_10031;
        _i_10031 = 1;
L7: // addr: 113 pc: 106 sub: 10001 op: 125
        if (_i_10031 > _5574){
            goto L8; // [106] 159
        }
        // SubProg quote pc: 113 op: STARTLINE (58)

        /** text.e:1132				if sequence(text_in[i]) then*/
        // SubProg quote pc: 115 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_10003);
        _5575 = (object)*(((s1_ptr)_2)->base + _i_10031);
        // SubProg quote pc: 119 op: IS_A_SEQUENCE (68)
        _5576 = IS_SEQUENCE(_5575);
        _5575 = NOVALUE;
        // SubProg quote pc: 122 op: IF (20)
        if (_5576 == 0)
        {
            _5576 = NOVALUE;
            goto L9; // [122] 152
        }
        else{
            _5576 = NOVALUE;
        }
        // SubProg quote pc: 125 op: STARTLINE (58)

        /** text.e:1133					text_in[i] = quote(text_in[i], quote_pair, esc, sp)*/
        // SubProg quote pc: 127 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_10003);
        _5577 = (object)*(((s1_ptr)_2)->base + _i_10031);
        // SubProg quote pc: 131 op: ASSIGN (18)
        Ref(_quote_pair_10004);
        DeRef(_5578);
        _5578 = _quote_pair_10004;
        // SubProg quote pc: 134 op: ASSIGN (18)
        DeRef(_5579);
        _5579 = _esc_10006;
        // SubProg quote pc: 137 op: ASSIGN (18)
        Ref(_sp_10008);
        DeRef(_5580);
        _5580 = _sp_10008;
        // SubProg quote pc: 140 op: PROC (27)
        Ref(_5577);
        _5581 = _15quote(_5577, _5578, _5579, _5580);
        _5577 = NOVALUE;
        _5578 = NOVALUE;
        _5579 = NOVALUE;
        _5580 = NOVALUE;
        // SubProg quote pc: 147 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_text_in_10003);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _text_in_10003 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10031);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5581;
        if( _1 != _5581 ){
            DeRef(_1);
        }
        _5581 = NOVALUE;
        // SubProg quote pc: 151 op: NOP1 (159)
L9: // addr: 152 pc: 151 sub: 10001 op: 159
        // SubProg quote pc: 152 op: STARTLINE (58)

        /** text.e:1135			end for*/
        // SubProg quote pc: 154 op: ENDFOR_INT_UP1 (54)
        _i_10031 = _i_10031 + 1;
        goto L7; // [154] 113
L8: // addr: 159 pc: 154 sub: 10001 op: 54
        ;
    }
    // SubProg quote pc: 159 op: STARTLINE (58)

    /** text.e:1137			return text_in*/
    // SubProg quote pc: 161 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_10004
    DeRef(_quote_pair_10004);

// block var esc_10006

// block var sp_10008
    DeRef(_sp_10008);
    return _text_in_10003;
    // SubProg quote pc: 165 op: NOP1 (159)
L6: // addr: 166 pc: 165 sub: 10001 op: 159
    // SubProg quote pc: 166 op: STARTLINE (58)

    /** text.e:1141		for i = 1 to length(sp) do*/
    // SubProg quote pc: 168 op: LENGTH (42)
    if (IS_SEQUENCE(_sp_10008)){
            _5582 = SEQ_PTR(_sp_10008)->length;
    }
    else {
        _5582 = 1;
    }
    // SubProg quote pc: 171 op: FOR_I (125)
    {
        object _i_10042;
        _i_10042 = 1;
LA: // addr: 178 pc: 171 sub: 10001 op: 125
        if (_i_10042 > _5582){
            goto LB; // [171] 220
        }
        // SubProg quote pc: 178 op: STARTLINE (58)

        /** text.e:1142			if find(sp[i], text_in) then*/
        // SubProg quote pc: 180 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_sp_10008);
        _5583 = (object)*(((s1_ptr)_2)->base + _i_10042);
        // SubProg quote pc: 184 op: FIND_FROM (176)
        _5584 = find_from(_5583, _text_in_10003, 1);
        _5583 = NOVALUE;
        // SubProg quote pc: 189 op: IF (20)
        if (_5584 == 0)
        {
            _5584 = NOVALUE;
            goto LC; // [189] 197
        }
        else{
            _5584 = NOVALUE;
        }
        // SubProg quote pc: 192 op: STARTLINE (58)

        /** text.e:1143				exit*/
        // SubProg quote pc: 194 op: EXIT (61)
        goto LB; // [194] 220
        // SubProg quote pc: 196 op: NOP1 (159)
LC: // addr: 197 pc: 196 sub: 10001 op: 159
        // SubProg quote pc: 197 op: STARTLINE (58)

        /** text.e:1146			if i = length(sp) then*/
        // SubProg quote pc: 199 op: LENGTH (42)
        if (IS_SEQUENCE(_sp_10008)){
                _5585 = SEQ_PTR(_sp_10008)->length;
        }
        else {
            _5585 = 1;
        }
        // SubProg quote pc: 202 op: EQUALS_IFW_I (121)
        if (_i_10042 != _5585)
        goto LD; // [202] 213
        // SubProg quote pc: 206 op: STARTLINE (58)

        /** text.e:1148				return text_in*/
        // SubProg quote pc: 208 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_10004
        DeRef(_quote_pair_10004);

// block var esc_10006

// block var sp_10008
        DeRef(_sp_10008);
        return _text_in_10003;
        // SubProg quote pc: 212 op: NOP1 (159)
LD: // addr: 213 pc: 212 sub: 10001 op: 159
        // SubProg quote pc: 213 op: STARTLINE (58)

        /** text.e:1150		end for*/
        // SubProg quote pc: 215 op: ENDFOR_INT_UP1 (54)
        _i_10042 = _i_10042 + 1;
        goto LA; // [215] 178
LB: // addr: 220 pc: 215 sub: 10001 op: 54
        ;
    }
    // SubProg quote pc: 220 op: STARTLINE (58)

    /** text.e:1152		if esc >= 0  then*/
    // SubProg quote pc: 222 op: GREATEREQ_IFW_I (120)
    if (_esc_10006 < 0)
    goto LE; // [222] 561
    // SubProg quote pc: 226 op: STARTLINE (58)

    /** text.e:1156			if atom(quote_pair[1]) then*/
    // SubProg quote pc: 228 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5588 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 232 op: IS_AN_ATOM (67)
    _5589 = IS_ATOM(_5588);
    _5588 = NOVALUE;
    // SubProg quote pc: 235 op: IF (20)
    if (_5589 == 0)
    {
        _5589 = NOVALUE;
        goto LF; // [235] 253
    }
    else{
        _5589 = NOVALUE;
    }
    // SubProg quote pc: 238 op: STARTLINE (58)

    /** text.e:1157				quote_pair[1] = {quote_pair[1]}*/
    // SubProg quote pc: 240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5590 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 244 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_5590);
    ((intptr_t*)_2)[1] = _5590;
    _5591 = MAKE_SEQ(_1);
    _5590 = NOVALUE;
    // SubProg quote pc: 248 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_10004 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5591;
    if( _1 != _5591 ){
        DeRef(_1);
    }
    _5591 = NOVALUE;
    // SubProg quote pc: 252 op: NOP1 (159)
LF: // addr: 253 pc: 252 sub: 10001 op: 159
    // SubProg quote pc: 253 op: STARTLINE (58)

    /** text.e:1159			if atom(quote_pair[2]) then*/
    // SubProg quote pc: 255 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5592 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 259 op: IS_AN_ATOM (67)
    _5593 = IS_ATOM(_5592);
    _5592 = NOVALUE;
    // SubProg quote pc: 262 op: IF (20)
    if (_5593 == 0)
    {
        _5593 = NOVALUE;
        goto L10; // [262] 280
    }
    else{
        _5593 = NOVALUE;
    }
    // SubProg quote pc: 265 op: STARTLINE (58)

    /** text.e:1160				quote_pair[2] = {quote_pair[2]}*/
    // SubProg quote pc: 267 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5594 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 271 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_5594);
    ((intptr_t*)_2)[1] = _5594;
    _5595 = MAKE_SEQ(_1);
    _5594 = NOVALUE;
    // SubProg quote pc: 275 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_10004 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5595;
    if( _1 != _5595 ){
        DeRef(_1);
    }
    _5595 = NOVALUE;
    // SubProg quote pc: 279 op: NOP1 (159)
L10: // addr: 280 pc: 279 sub: 10001 op: 159
    // SubProg quote pc: 280 op: STARTLINE (58)

    /** text.e:1163			if equal(quote_pair[1], quote_pair[2]) then*/
    // SubProg quote pc: 282 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5596 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 286 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5597 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 290 op: EQUAL (153)
    if (_5596 == _5597)
    _5598 = 1;
    else if (IS_ATOM_INT(_5596) && IS_ATOM_INT(_5597))
    _5598 = 0;
    else
    _5598 = (compare(_5596, _5597) == 0);
    _5596 = NOVALUE;
    _5597 = NOVALUE;
    // SubProg quote pc: 294 op: IF (20)
    if (_5598 == 0)
    {
        _5598 = NOVALUE;
        goto L11; // [294] 372
    }
    else{
        _5598 = NOVALUE;
    }
    // SubProg quote pc: 297 op: STARTLINE (58)

    /** text.e:1165				if match(quote_pair[1], text_in) then*/
    // SubProg quote pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5599 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 303 op: MATCH_FROM (177)
    _5600 = e_match_from(_5599, _text_in_10003, 1);
    _5599 = NOVALUE;
    // SubProg quote pc: 308 op: IF (20)
    if (_5600 == 0)
    {
        _5600 = NOVALUE;
        goto L12; // [308] 560
    }
    else{
        _5600 = NOVALUE;
    }
    // SubProg quote pc: 311 op: STARTLINE (58)

    /** text.e:1166					if match(esc & quote_pair[1], text_in) then*/
    // SubProg quote pc: 313 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5601 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 317 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5601)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5601)) {
        Prepend(&_5602, _5601, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5602, _esc_10006, _5601);
    }
    _5601 = NOVALUE;
    // SubProg quote pc: 321 op: MATCH_FROM (177)
    _5603 = e_match_from(_5602, _text_in_10003, 1);
    DeRefDS(_5602);
    _5602 = NOVALUE;
    // SubProg quote pc: 326 op: IF (20)
    if (_5603 == 0)
    {
        _5603 = NOVALUE;
        goto L13; // [326] 345
    }
    else{
        _5603 = NOVALUE;
    }
    // SubProg quote pc: 329 op: STARTLINE (58)

    /** text.e:1167						text_in = search:match_replace(esc, text_in, esc & esc)*/
    // SubProg quote pc: 331 op: CONCAT (15)
    Concat((object_ptr)&_5604, _esc_10006, _esc_10006);
    // SubProg quote pc: 335 op: PROC (27)
    RefDS(_text_in_10003);
    _0 = _text_in_10003;
    _text_in_10003 = _17match_replace(_esc_10006, _text_in_10003, _5604, 0);
    DeRefDS(_0);
    _5604 = NOVALUE;
    // SubProg quote pc: 342 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 344 op: NOP1 (159)
L13: // addr: 345 pc: 344 sub: 10001 op: 159
    // SubProg quote pc: 345 op: STARTLINE (58)

    /** text.e:1169					text_in = search:match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    // SubProg quote pc: 347 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5606 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 351 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5607 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 355 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5607)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5607)) {
        Prepend(&_5608, _5607, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5608, _esc_10006, _5607);
    }
    _5607 = NOVALUE;
    // SubProg quote pc: 359 op: PROC (27)
    Ref(_5606);
    RefDS(_text_in_10003);
    _0 = _text_in_10003;
    _text_in_10003 = _17match_replace(_5606, _text_in_10003, _5608, 0);
    DeRefDS(_0);
    _5606 = NOVALUE;
    _5608 = NOVALUE;
    // SubProg quote pc: 366 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 368 op: NOP1 (159)
    // SubProg quote pc: 369 op: ELSE (23)
    goto L12; // [369] 560
    // SubProg quote pc: 371 op: NOP1 (159)
L11: // addr: 372 pc: 371 sub: 10001 op: 159
    // SubProg quote pc: 372 op: STARTLINE (58)

    /** text.e:1172				if match(quote_pair[1], text_in) or*/
    // SubProg quote pc: 374 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5610 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 378 op: MATCH_FROM (177)
    _5611 = e_match_from(_5610, _text_in_10003, 1);
    _5610 = NOVALUE;
    // SubProg quote pc: 383 op: SC1_OR_IF (147)
    if (_5611 != 0) {
        goto L14; // [383] 401
    }
    // SubProg quote pc: 387 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5613 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 391 op: MATCH_FROM (177)
    _5614 = e_match_from(_5613, _text_in_10003, 1);
    _5613 = NOVALUE;
    // SubProg quote pc: 396 op: NOP1 (159)
    // SubProg quote pc: 397 op: IF (20)
    if (_5614 == 0)
    {
        _5614 = NOVALUE;
        goto L15; // [397] 473
    }
    else{
        _5614 = NOVALUE;
    }
    // SubProg quote pc: 400 op: NOP1 (159)
L14: // addr: 401 pc: 400 sub: 10001 op: 159
    // SubProg quote pc: 401 op: STARTLINE (58)

    /** text.e:1174					if match(esc & quote_pair[1], text_in) then*/
    // SubProg quote pc: 403 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5615 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 407 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5615)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5615)) {
        Prepend(&_5616, _5615, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5616, _esc_10006, _5615);
    }
    _5615 = NOVALUE;
    // SubProg quote pc: 411 op: MATCH_FROM (177)
    _5617 = e_match_from(_5616, _text_in_10003, 1);
    DeRefDS(_5616);
    _5616 = NOVALUE;
    // SubProg quote pc: 416 op: IF (20)
    if (_5617 == 0)
    {
        _5617 = NOVALUE;
        goto L16; // [416] 449
    }
    else{
        _5617 = NOVALUE;
    }
    // SubProg quote pc: 419 op: STARTLINE (58)

    /** text.e:1175						text_in = search:match_replace(esc & quote_pair[1], text_in, esc & esc & quote_pair[1])*/
    // SubProg quote pc: 421 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5618 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 425 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5618)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5618)) {
        Prepend(&_5619, _5618, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5619, _esc_10006, _5618);
    }
    _5618 = NOVALUE;
    // SubProg quote pc: 429 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5620 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 433 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5620;
        concat_list[1] = _esc_10006;
        concat_list[2] = _esc_10006;
        Concat_N((object_ptr)&_5621, concat_list, 3);
    }
    _5620 = NOVALUE;
    // SubProg quote pc: 439 op: PROC (27)
    RefDS(_text_in_10003);
    _0 = _text_in_10003;
    _text_in_10003 = _17match_replace(_5619, _text_in_10003, _5621, 0);
    DeRefDS(_0);
    _5619 = NOVALUE;
    _5621 = NOVALUE;
    // SubProg quote pc: 446 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 448 op: NOP1 (159)
L16: // addr: 449 pc: 448 sub: 10001 op: 159
    // SubProg quote pc: 449 op: STARTLINE (58)

    /** text.e:1177					text_in = match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    // SubProg quote pc: 451 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5623 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 455 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5624 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 459 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5624)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5624)) {
        Prepend(&_5625, _5624, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5625, _esc_10006, _5624);
    }
    _5624 = NOVALUE;
    // SubProg quote pc: 463 op: PROC (27)
    Ref(_5623);
    RefDS(_text_in_10003);
    _0 = _text_in_10003;
    _text_in_10003 = _17match_replace(_5623, _text_in_10003, _5625, 0);
    DeRefDS(_0);
    _5623 = NOVALUE;
    _5625 = NOVALUE;
    // SubProg quote pc: 470 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 472 op: NOP1 (159)
L15: // addr: 473 pc: 472 sub: 10001 op: 159
    // SubProg quote pc: 473 op: STARTLINE (58)

    /** text.e:1180				if match(quote_pair[2], text_in) then*/
    // SubProg quote pc: 475 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5627 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 479 op: MATCH_FROM (177)
    _5628 = e_match_from(_5627, _text_in_10003, 1);
    _5627 = NOVALUE;
    // SubProg quote pc: 484 op: IF (20)
    if (_5628 == 0)
    {
        _5628 = NOVALUE;
        goto L17; // [484] 559
    }
    else{
        _5628 = NOVALUE;
    }
    // SubProg quote pc: 487 op: STARTLINE (58)

    /** text.e:1181					if match(esc & quote_pair[2], text_in) then*/
    // SubProg quote pc: 489 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5629 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 493 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5629)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5629)) {
        Prepend(&_5630, _5629, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5630, _esc_10006, _5629);
    }
    _5629 = NOVALUE;
    // SubProg quote pc: 497 op: MATCH_FROM (177)
    _5631 = e_match_from(_5630, _text_in_10003, 1);
    DeRefDS(_5630);
    _5630 = NOVALUE;
    // SubProg quote pc: 502 op: IF (20)
    if (_5631 == 0)
    {
        _5631 = NOVALUE;
        goto L18; // [502] 535
    }
    else{
        _5631 = NOVALUE;
    }
    // SubProg quote pc: 505 op: STARTLINE (58)

    /** text.e:1182						text_in = search:match_replace(esc & quote_pair[2], text_in, esc & esc & quote_pair[2])*/
    // SubProg quote pc: 507 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5632 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 511 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5632)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5632)) {
        Prepend(&_5633, _5632, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5633, _esc_10006, _5632);
    }
    _5632 = NOVALUE;
    // SubProg quote pc: 515 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5634 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 519 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5634;
        concat_list[1] = _esc_10006;
        concat_list[2] = _esc_10006;
        Concat_N((object_ptr)&_5635, concat_list, 3);
    }
    _5634 = NOVALUE;
    // SubProg quote pc: 525 op: PROC (27)
    RefDS(_text_in_10003);
    _0 = _text_in_10003;
    _text_in_10003 = _17match_replace(_5633, _text_in_10003, _5635, 0);
    DeRefDS(_0);
    _5633 = NOVALUE;
    _5635 = NOVALUE;
    // SubProg quote pc: 532 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 534 op: NOP1 (159)
L18: // addr: 535 pc: 534 sub: 10001 op: 159
    // SubProg quote pc: 535 op: STARTLINE (58)

    /** text.e:1184					text_in = search:match_replace(quote_pair[2], text_in, esc & quote_pair[2])*/
    // SubProg quote pc: 537 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5637 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 541 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5638 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 545 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_10006) && IS_ATOM(_5638)) {
    }
    else if (IS_ATOM(_esc_10006) && IS_SEQUENCE(_5638)) {
        Prepend(&_5639, _5638, _esc_10006);
    }
    else {
        Concat((object_ptr)&_5639, _esc_10006, _5638);
    }
    _5638 = NOVALUE;
    // SubProg quote pc: 549 op: PROC (27)
    Ref(_5637);
    RefDS(_text_in_10003);
    _0 = _text_in_10003;
    _text_in_10003 = _17match_replace(_5637, _text_in_10003, _5639, 0);
    DeRefDS(_0);
    _5637 = NOVALUE;
    _5639 = NOVALUE;
    // SubProg quote pc: 556 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 558 op: NOP1 (159)
L17: // addr: 559 pc: 558 sub: 10001 op: 159
    // SubProg quote pc: 559 op: NOP1 (159)
L12: // addr: 560 pc: 559 sub: 10001 op: 159
    // SubProg quote pc: 560 op: NOP1 (159)
LE: // addr: 561 pc: 560 sub: 10001 op: 159
    // SubProg quote pc: 561 op: STARTLINE (58)

    /** text.e:1189		return quote_pair[1] & text_in & quote_pair[2]*/
    // SubProg quote pc: 563 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5641 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 567 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_10004);
    _5642 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 571 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5642;
        concat_list[1] = _text_in_10003;
        concat_list[2] = _5641;
        Concat_N((object_ptr)&_5643, concat_list, 3);
    }
    _5642 = NOVALUE;
    _5641 = NOVALUE;
    // SubProg quote pc: 577 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var text_in_10003
    DeRefDS(_text_in_10003);

// block var quote_pair_10004
    DeRef(_quote_pair_10004);

// block var esc_10006

// block var sp_10008
    DeRef(_sp_10008);
    return _5643;
    // SubProg quote pc: 581 op: BADRETURNF (43)
    ;
}


object _15format(object _format_pattern_10224, object _arg_list_10225)
{
    object _result_10226 = NOVALUE;
    object _in_token_10227 = NOVALUE;
    object _tch_10228 = NOVALUE;
    object _i_10229 = NOVALUE;
    object _tend_10230 = NOVALUE;
    object _cap_10231 = NOVALUE;
    object _align_10232 = NOVALUE;
    object _psign_10233 = NOVALUE;
    object _msign_10234 = NOVALUE;
    object _zfill_10235 = NOVALUE;
    object _bwz_10236 = NOVALUE;
    object _spacer_10237 = NOVALUE;
    object _alt_10238 = NOVALUE;
    object _width_10239 = NOVALUE;
    object _decs_10240 = NOVALUE;
    object _pos_10241 = NOVALUE;
    object _argn_10242 = NOVALUE;
    object _argl_10243 = NOVALUE;
    object _trimming_10244 = NOVALUE;
    object _hexout_10245 = NOVALUE;
    object _binout_10246 = NOVALUE;
    object _tsep_10247 = NOVALUE;
    object _istext_10248 = NOVALUE;
    object _prevargv_10249 = NOVALUE;
    object _currargv_10250 = NOVALUE;
    object _idname_10251 = NOVALUE;
    object _envsym_10252 = NOVALUE;
    object _envvar_10253 = NOVALUE;
    object _ep_10254 = NOVALUE;
    object _sp_10327 = NOVALUE;
    object _sp_10363 = NOVALUE;
    object _argtext_10410 = NOVALUE;
    object _tempv_10642 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2456_10697 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2453_10696 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2512_10704 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2509_10703 = NOVALUE;
    object _x_inlined_pretty_sprint_at_2506_10702 = NOVALUE;
    object _msg_inlined_crash_at_2660_10726 = NOVALUE;
    object _dpos_10769 = NOVALUE;
    object _dist_10770 = NOVALUE;
    object _bracketed_10771 = NOVALUE;
// skipping _6148  name type: 0
// skipping _6147  name type: 0
// skipping _6146  name type: 0
// skipping _6145  name type: 0
    object _6144 = NOVALUE; // 10864 6144
    object _6143 = NOVALUE; // 10863 6143
    object _6142 = NOVALUE; // 10862 6142
// skipping _6141  name type: 0
    object _6140 = NOVALUE; // 10859 6140
    object _6139 = NOVALUE; // 10858 6139
    object _6138 = NOVALUE; // 10857 6138
// skipping _6137  name type: 0
// skipping _6136  name type: 0
    object _6135 = NOVALUE; // 10853 6135
    object _6134 = NOVALUE; // 10852 6134
// skipping _6133  name type: 0
// skipping _6132  name type: 0
    object _6131 = NOVALUE; // 10849 6131
// skipping _6130  name type: 0
    object _6129 = NOVALUE; // 10846 6129
// skipping _6128  name type: 0
// skipping _6127  name type: 0
    object _6126 = NOVALUE; // 10842 6126
    object _6125 = NOVALUE; // 10841 6125
    object _6124 = NOVALUE; // 10840 6124
// skipping _6123  name type: 0
// skipping _6122  name type: 0
    object _6121 = NOVALUE; // 10836 6121
// skipping _6120  name type: 0
// skipping _6119  name type: 0
    object _6118 = NOVALUE; // 10831 6118
    object _6117 = NOVALUE; // 10830 6117
    object _6116 = NOVALUE; // 10829 6116
    object _6115 = NOVALUE; // 10828 6115
// skipping _6114  name type: 0
// skipping _6113  name type: 0
    object _6112 = NOVALUE; // 10824 6112
    object _6111 = NOVALUE; // 10823 6111
    object _6110 = NOVALUE; // 10822 6110
// skipping _6109  name type: 0
// skipping _6108  name type: 0
    object _6107 = NOVALUE; // 10819 6107
// skipping _6106  name type: 0
    object _6105 = NOVALUE; // 10816 6105
// skipping _6104  name type: 0
// skipping _6103  name type: 0
    object _6102 = NOVALUE; // 10812 6102
    object _6101 = NOVALUE; // 10811 6101
    object _6100 = NOVALUE; // 10810 6100
    object _6099 = NOVALUE; // 10809 6099
// skipping _6098  name type: 0
// skipping _6097  name type: 0
    object _6096 = NOVALUE; // 10805 6096
// skipping _6095  name type: 0
// skipping _6094  name type: 0
// skipping _6093  name type: 0
// skipping _6092  name type: 0
    object _6091 = NOVALUE; // 10797 6091
    object _6090 = NOVALUE; // 10796 6090
    object _6089 = NOVALUE; // 10795 6089
    object _6088 = NOVALUE; // 10794 6088
// skipping _6087  name type: 0
// skipping _6086  name type: 0
// skipping _6085  name type: 0
// skipping _6084  name type: 0
// skipping _6083  name type: 0
    object _6082 = NOVALUE; // 10784 6082
// skipping _6081  name type: 0
// skipping _6080  name type: 0
// skipping _6079  name type: 0
    object _6078 = NOVALUE; // 10779 6078
    object _6077 = NOVALUE; // 10778 6077
// skipping _6076  name type: 0
    object _6075 = NOVALUE; // 10775 6075
// skipping _6074  name type: 0
    object _6073 = NOVALUE; // 10768 6073
    object _6072 = NOVALUE; // 10767 6072
    object _6071 = NOVALUE; // 10766 6071
    object _6070 = NOVALUE; // 10764 6070
    object _6069 = NOVALUE; // 10761 6069
// skipping _6068  name type: 0
// skipping _6067  name type: 0
    object _6066 = NOVALUE; // 10756 6066
// skipping _6065  name type: 0
// skipping _6064  name type: 0
    object _6063 = NOVALUE; // 10752 6063
    object _6062 = NOVALUE; // 10751 6062
// skipping _6061  name type: 0
// skipping _6060  name type: 0
    object _6059 = NOVALUE; // 10747 6059
    object _6058 = NOVALUE; // 10746 6058
    object _6057 = NOVALUE; // 10745 6057
// skipping _6056  name type: 0
// skipping _6055  name type: 0
    object _6054 = NOVALUE; // 10741 6054
// skipping _6053  name type: 0
    object _6052 = NOVALUE; // 10738 6052
// skipping _6051  name type: 0
// skipping _6050  name type: 0
// skipping _6049  name type: 0
// skipping _6048  name type: 0
    object _6047 = NOVALUE; // 10730 6047
    object _6046 = NOVALUE; // 10728 6046
// skipping _6044  name type: 0
// skipping _6043  name type: 0
// skipping _6042  name type: 0
// skipping _6039  name type: 0
    object _6038 = NOVALUE; // 10712 6038
// skipping _6037  name type: 0
// skipping _6036  name type: 0
// skipping _6035  name type: 0
    object _6034 = NOVALUE; // 10707 6034
// skipping _6033  name type: 0
    object _6032 = NOVALUE; // 10700 6032
    object _6031 = NOVALUE; // 10699 6031
    object _6030 = NOVALUE; // 10694 6030
// skipping _6028  name type: 0
    object _6027 = NOVALUE; // 10690 6027
// skipping _6026  name type: 0
    object _6025 = NOVALUE; // 10687 6025
    object _6024 = NOVALUE; // 10686 6024
    object _6023 = NOVALUE; // 10685 6023
// skipping _6022  name type: 0
    object _6021 = NOVALUE; // 10682 6021
    object _6020 = NOVALUE; // 10681 6020
    object _6019 = NOVALUE; // 10680 6019
    object _6018 = NOVALUE; // 10678 6018
// skipping _6017  name type: 0
// skipping _6016  name type: 0
    object _6015 = NOVALUE; // 10673 6015
    object _6014 = NOVALUE; // 10672 6014
    object _6013 = NOVALUE; // 10671 6013
// skipping _6012  name type: 0
    object _6011 = NOVALUE; // 10668 6011
    object _6010 = NOVALUE; // 10667 6010
    object _6009 = NOVALUE; // 10665 6009
    object _6008 = NOVALUE; // 10663 6008
// skipping _6007  name type: 0
    object _6006 = NOVALUE; // 10659 6006
// skipping _6005  name type: 0
    object _6004 = NOVALUE; // 10656 6004
// skipping _6003  name type: 0
    object _6002 = NOVALUE; // 10654 6002
// skipping _6001  name type: 0
    object _6000 = NOVALUE; // 10650 6000
// skipping _5999  name type: 0
    object _5998 = NOVALUE; // 10647 5998
// skipping _5997  name type: 0
    object _5996 = NOVALUE; // 10644 5996
    object _5995 = NOVALUE; // 10641 5995
    object _5994 = NOVALUE; // 10640 5994
    object _5993 = NOVALUE; // 10639 5993
    object _5992 = NOVALUE; // 10638 5992
    object _5991 = NOVALUE; // 10637 5991
// skipping _5990  name type: 0
    object _5989 = NOVALUE; // 10633 5989
    object _5988 = NOVALUE; // 10632 5988
// skipping _5987  name type: 0
    object _5986 = NOVALUE; // 10629 5986
    object _5985 = NOVALUE; // 10628 5985
// skipping _5984  name type: 0
    object _5983 = NOVALUE; // 10626 5983
// skipping _5982  name type: 0
    object _5981 = NOVALUE; // 10622 5981
    object _5980 = NOVALUE; // 10621 5980
// skipping _5979  name type: 0
// skipping _5978  name type: 0
    object _5977 = NOVALUE; // 10616 5977
// skipping _5976  name type: 0
    object _5975 = NOVALUE; // 10613 5975
// skipping _5974  name type: 0
// skipping _5973  name type: 0
// skipping _5972  name type: 0
    object _5971 = NOVALUE; // 10606 5971
// skipping _5970  name type: 0
    object _5969 = NOVALUE; // 10603 5969
    object _5968 = NOVALUE; // 10602 5968
    object _5967 = NOVALUE; // 10601 5967
// skipping _5966  name type: 0
    object _5965 = NOVALUE; // 10598 5965
    object _5964 = NOVALUE; // 10597 5964
    object _5963 = NOVALUE; // 10596 5963
    object _5962 = NOVALUE; // 10595 5962
    object _5961 = NOVALUE; // 10594 5961
// skipping _5960  name type: 0
    object _5959 = NOVALUE; // 10592 5959
// skipping _5958  name type: 0
    object _5957 = NOVALUE; // 10589 5957
    object _5956 = NOVALUE; // 10587 5956
    object _5955 = NOVALUE; // 10586 5955
    object _5954 = NOVALUE; // 10585 5954
// skipping _5953  name type: 0
// skipping _5951  name type: 0
    object _5950 = NOVALUE; // 10580 5950
// skipping _5949  name type: 0
// skipping _5948  name type: 0
    object _5947 = NOVALUE; // 10576 5947
    object _5946 = NOVALUE; // 10575 5946
// skipping _5944  name type: 0
    object _5943 = NOVALUE; // 10571 5943
    object _5942 = NOVALUE; // 10570 5942
    object _5941 = NOVALUE; // 10569 5941
// skipping _5940  name type: 0
    object _5939 = NOVALUE; // 10567 5939
    object _5938 = NOVALUE; // 10565 5938
    object _5937 = NOVALUE; // 10564 5937
    object _5936 = NOVALUE; // 10563 5936
// skipping _5935  name type: 0
    object _5934 = NOVALUE; // 10560 5934
// skipping _5933  name type: 0
    object _5932 = NOVALUE; // 10556 5932
    object _5931 = NOVALUE; // 10555 5931
    object _5930 = NOVALUE; // 10554 5930
    object _5929 = NOVALUE; // 10553 5929
    object _5928 = NOVALUE; // 10551 5928
    object _5927 = NOVALUE; // 10550 5927
// skipping _5926  name type: 0
    object _5925 = NOVALUE; // 10547 5925
    object _5924 = NOVALUE; // 10546 5924
    object _5923 = NOVALUE; // 10545 5923
// skipping _5922  name type: 0
    object _5921 = NOVALUE; // 10543 5921
    object _5920 = NOVALUE; // 10541 5920
    object _5919 = NOVALUE; // 10540 5919
    object _5918 = NOVALUE; // 10539 5918
// skipping _5917  name type: 0
    object _5916 = NOVALUE; // 10536 5916
// skipping _5914  name type: 0
    object _5913 = NOVALUE; // 10532 5913
    object _5912 = NOVALUE; // 10531 5912
// skipping _5911  name type: 0
    object _5910 = NOVALUE; // 10528 5910
    object _5909 = NOVALUE; // 10527 5909
// skipping _5908  name type: 0
    object _5907 = NOVALUE; // 10525 5907
// skipping _5906  name type: 0
    object _5904 = NOVALUE; // 10520 5904
    object _5903 = NOVALUE; // 10519 5903
// skipping _5902  name type: 0
// skipping _5901  name type: 0
    object _5900 = NOVALUE; // 10514 5900
// skipping _5899  name type: 0
    object _5898 = NOVALUE; // 10511 5898
// skipping _5897  name type: 0
// skipping _5896  name type: 0
// skipping _5895  name type: 0
    object _5894 = NOVALUE; // 10504 5894
// skipping _5893  name type: 0
    object _5892 = NOVALUE; // 10501 5892
    object _5891 = NOVALUE; // 10500 5891
    object _5890 = NOVALUE; // 10499 5890
// skipping _5889  name type: 0
    object _5888 = NOVALUE; // 10497 5888
// skipping _5887  name type: 0
    object _5886 = NOVALUE; // 10493 5886
    object _5885 = NOVALUE; // 10492 5885
    object _5884 = NOVALUE; // 10491 5884
    object _5883 = NOVALUE; // 10490 5883
    object _5882 = NOVALUE; // 10489 5882
// skipping _5881  name type: 0
    object _5880 = NOVALUE; // 10487 5880
// skipping _5879  name type: 0
    object _5878 = NOVALUE; // 10484 5878
    object _5877 = NOVALUE; // 10482 5877
    object _5876 = NOVALUE; // 10481 5876
    object _5875 = NOVALUE; // 10480 5875
// skipping _5874  name type: 0
    object _5873 = NOVALUE; // 10477 5873
// skipping _5872  name type: 0
// skipping _5871  name type: 0
    object _5870 = NOVALUE; // 10473 5870
// skipping _5869  name type: 0
    object _5868 = NOVALUE; // 10471 5868
    object _5867 = NOVALUE; // 10469 5867
// skipping _5866  name type: 0
    object _5865 = NOVALUE; // 10465 5865
    object _5864 = NOVALUE; // 10464 5864
    object _5863 = NOVALUE; // 10463 5863
// skipping _5862  name type: 0
// skipping _5861  name type: 0
    object _5860 = NOVALUE; // 10459 5860
    object _5859 = NOVALUE; // 10458 5859
    object _5858 = NOVALUE; // 10457 5858
    object _5857 = NOVALUE; // 10456 5857
// skipping _5856  name type: 0
    object _5855 = NOVALUE; // 10453 5855
    object _5854 = NOVALUE; // 10452 5854
    object _5853 = NOVALUE; // 10451 5853
    object _5852 = NOVALUE; // 10449 5852
    object _5849 = NOVALUE; // 10446 5849
    object _5848 = NOVALUE; // 10445 5848
    object _5847 = NOVALUE; // 10444 5847
    object _5845 = NOVALUE; // 10442 5845
    object _5844 = NOVALUE; // 10441 5844
    object _5843 = NOVALUE; // 10440 5843
    object _5842 = NOVALUE; // 10439 5842
// skipping _5841  name type: 0
// skipping _5840  name type: 0
    object _5839 = NOVALUE; // 10434 5839
    object _5838 = NOVALUE; // 10433 5838
    object _5837 = NOVALUE; // 10432 5837
    object _5836 = NOVALUE; // 10431 5836
// skipping _5835  name type: 0
    object _5834 = NOVALUE; // 10429 5834
    object _5833 = NOVALUE; // 10427 5833
    object _5832 = NOVALUE; // 10426 5832
// skipping _5831  name type: 0
    object _5830 = NOVALUE; // 10420 5830
    object _5829 = NOVALUE; // 10418 5829
    object _5828 = NOVALUE; // 10417 5828
// skipping _5827  name type: 0
    object _5826 = NOVALUE; // 10415 5826
// skipping _5825  name type: 0
// skipping _5824  name type: 0
// skipping _5823  name type: 0
// skipping _5822  name type: 0
// skipping _5821  name type: 0
// skipping _5820  name type: 0
    object _5819 = NOVALUE; // 10403 5819
// skipping _5818  name type: 0
    object _5817 = NOVALUE; // 10399 5817
    object _5816 = NOVALUE; // 10398 5816
// skipping _5815  name type: 0
// skipping _5814  name type: 0
// skipping _5813  name type: 0
// skipping _5812  name type: 0
// skipping _5811  name type: 0
// skipping _5810  name type: 0
    object _5809 = NOVALUE; // 10390 5809
// skipping _5808  name type: 0
// skipping _5807  name type: 0
    object _5806 = NOVALUE; // 10384 5806
// skipping _5805  name type: 0
// skipping _5804  name type: 0
// skipping _5803  name type: 0
    object _5802 = NOVALUE; // 10379 5802
// skipping _5801  name type: 0
    object _5800 = NOVALUE; // 10376 5800
    object _5799 = NOVALUE; // 10375 5799
// skipping _5798  name type: 0
// skipping _5797  name type: 0
    object _5796 = NOVALUE; // 10372 5796
// skipping _5795  name type: 0
    object _5794 = NOVALUE; // 10369 5794
// skipping _5793  name type: 0
    object _5792 = NOVALUE; // 10366 5792
// skipping _5791  name type: 0
// skipping _5790  name type: 0
    object _5789 = NOVALUE; // 10360 5789
// skipping _5788  name type: 0
    object _5787 = NOVALUE; // 10356 5787
    object _5786 = NOVALUE; // 10355 5786
    object _5785 = NOVALUE; // 10353 5785
    object _5784 = NOVALUE; // 10352 5784
    object _5783 = NOVALUE; // 10350 5783
// skipping _5782  name type: 0
// skipping _5781  name type: 0
    object _5780 = NOVALUE; // 10345 5780
// skipping _5779  name type: 0
    object _5777 = NOVALUE; // 10341 5777
    object _5776 = NOVALUE; // 10340 5776
    object _5775 = NOVALUE; // 10339 5775
// skipping _5774  name type: 0
// skipping _5773  name type: 0
    object _5772 = NOVALUE; // 10336 5772
// skipping _5771  name type: 0
    object _5770 = NOVALUE; // 10333 5770
// skipping _5769  name type: 0
    object _5768 = NOVALUE; // 10330 5768
// skipping _5767  name type: 0
// skipping _5766  name type: 0
    object _5765 = NOVALUE; // 10324 5765
    object _5764 = NOVALUE; // 10323 5764
// skipping _5763  name type: 0
// skipping _5762  name type: 0
// skipping _5761  name type: 0
// skipping _5760  name type: 0
// skipping _5759  name type: 0
// skipping _5758  name type: 0
    object _5757 = NOVALUE; // 10315 5757
// skipping _5756  name type: 0
// skipping _5755  name type: 0
    object _5754 = NOVALUE; // 10309 5754
    object _5753 = NOVALUE; // 10308 5753
// skipping _5752  name type: 0
// skipping _5751  name type: 0
// skipping _5750  name type: 0
// skipping _5749  name type: 0
// skipping _5748  name type: 0
// skipping _5747  name type: 0
    object _5746 = NOVALUE; // 10300 5746
// skipping _5742  name type: 0
    object _5741 = NOVALUE; // 10281 5741
// skipping _5740  name type: 0
// skipping _5739  name type: 0
    object _5738 = NOVALUE; // 10277 5738
// skipping _5737  name type: 0
// skipping _5733  name type: 0
// skipping _5732  name type: 0
// skipping _5731  name type: 0
// skipping _5730  name type: 0
// skipping _5729  name type: 0
// skipping _5728  name type: 0
    object _5727 = NOVALUE; // 10259 5727
// skipping _5726  name type: 0
    object _5725 = NOVALUE; // 10256 5725
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg format pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 3 op: STARTLINE (58)

    /** text.e:1443		if atom(arg_list) then*/
    // SubProg format pc: 5 op: IS_AN_ATOM (67)
    _5725 = IS_ATOM(_arg_list_10225);
    // SubProg format pc: 8 op: IF (20)
    if (_5725 == 0)
    {
        _5725 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _5725 = NOVALUE;
    }
    // SubProg format pc: 11 op: STARTLINE (58)

    /** text.e:1444			arg_list = {arg_list}*/
    // SubProg format pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _arg_list_10225;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_arg_list_10225);
    ((intptr_t*)_2)[1] = _arg_list_10225;
    _arg_list_10225 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg format pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 10222 op: 159
    // SubProg format pc: 18 op: STARTLINE (58)

    /** text.e:1447		result = ""*/
    // SubProg format pc: 20 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_result_10226);
    _result_10226 = _5;
    // SubProg format pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 25 op: STARTLINE (58)

    /** text.e:1448		in_token = 0*/
    // SubProg format pc: 27 op: ASSIGN_I (113)
    _in_token_10227 = 0;
    // SubProg format pc: 30 op: STARTLINE (58)

    /** text.e:1451		i = 0*/
    // SubProg format pc: 32 op: ASSIGN_I (113)
    _i_10229 = 0;
    // SubProg format pc: 35 op: STARTLINE (58)

    /** text.e:1452		tend = 0*/
    // SubProg format pc: 37 op: ASSIGN_I (113)
    _tend_10230 = 0;
    // SubProg format pc: 40 op: STARTLINE (58)

    /** text.e:1453		argl = 0*/
    // SubProg format pc: 42 op: ASSIGN_I (113)
    _argl_10243 = 0;
    // SubProg format pc: 45 op: STARTLINE (58)

    /** text.e:1454		spacer = 0*/
    // SubProg format pc: 47 op: ASSIGN_I (113)
    _spacer_10237 = 0;
    // SubProg format pc: 50 op: STARTLINE (58)

    /** text.e:1455		prevargv = 0*/
    // SubProg format pc: 52 op: ASSIGN (18)
    DeRef(_prevargv_10249);
    _prevargv_10249 = 0;
    // SubProg format pc: 55 op: STARTLINE (58)

    /** text.e:1456	    while i < length(format_pattern) do*/
    // SubProg format pc: 57 op: NOP2 (110)
    // SubProg format pc: 59 op: NOPWHILE (158)
L2: // addr: 60 pc: 59 sub: 10222 op: 158
    // SubProg format pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_format_pattern_10224)){
            _5727 = SEQ_PTR(_format_pattern_10224)->length;
    }
    else {
        _5727 = 1;
    }
    // SubProg format pc: 63 op: LESS_IFW_I (119)
    if (_i_10229 >= _5727)
    goto L3; // [63] 3409
    // SubProg format pc: 67 op: STARTLINE (58)

    /** text.e:1457	    	i += 1*/
    // SubProg format pc: 69 op: PLUS1_I (117)
    _i_10229 = _i_10229 + 1;
    // SubProg format pc: 73 op: STARTLINE (58)

    /** text.e:1458	    	tch = format_pattern[i]*/
    // SubProg format pc: 75 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_format_pattern_10224);
    _tch_10228 = (object)*(((s1_ptr)_2)->base + _i_10229);
    if (!IS_ATOM_INT(_tch_10228))
    _tch_10228 = (object)DBL_PTR(_tch_10228)->dbl;
    // SubProg format pc: 79 op: STARTLINE (58)

    /** text.e:1459	    	if not in_token then*/
    // SubProg format pc: 81 op: NOT_IFW (108)
    if (_in_token_10227 != 0)
    goto L4; // [81] 210
    // SubProg format pc: 84 op: STARTLINE (58)

    /** text.e:1460	    		if tch = '[' then*/
    // SubProg format pc: 86 op: EQUALS_IFW_I (121)
    if (_tch_10228 != 91)
    goto L5; // [86] 200
    // SubProg format pc: 90 op: STARTLINE (58)

    /** text.e:1461	    			in_token = 1*/
    // SubProg format pc: 92 op: ASSIGN_I (113)
    _in_token_10227 = 1;
    // SubProg format pc: 95 op: STARTLINE (58)

    /** text.e:1462	    			tend = 0*/
    // SubProg format pc: 97 op: ASSIGN_I (113)
    _tend_10230 = 0;
    // SubProg format pc: 100 op: STARTLINE (58)

    /** text.e:1463					cap = 0*/
    // SubProg format pc: 102 op: ASSIGN_I (113)
    _cap_10231 = 0;
    // SubProg format pc: 105 op: STARTLINE (58)

    /** text.e:1464					align = 0*/
    // SubProg format pc: 107 op: ASSIGN_I (113)
    _align_10232 = 0;
    // SubProg format pc: 110 op: STARTLINE (58)

    /** text.e:1465					psign = 0*/
    // SubProg format pc: 112 op: ASSIGN_I (113)
    _psign_10233 = 0;
    // SubProg format pc: 115 op: STARTLINE (58)

    /** text.e:1466					msign = 0*/
    // SubProg format pc: 117 op: ASSIGN_I (113)
    _msign_10234 = 0;
    // SubProg format pc: 120 op: STARTLINE (58)

    /** text.e:1467					zfill = 0*/
    // SubProg format pc: 122 op: ASSIGN_I (113)
    _zfill_10235 = 0;
    // SubProg format pc: 125 op: STARTLINE (58)

    /** text.e:1468					bwz = 0*/
    // SubProg format pc: 127 op: ASSIGN_I (113)
    _bwz_10236 = 0;
    // SubProg format pc: 130 op: STARTLINE (58)

    /** text.e:1469					spacer = 0*/
    // SubProg format pc: 132 op: ASSIGN_I (113)
    _spacer_10237 = 0;
    // SubProg format pc: 135 op: STARTLINE (58)

    /** text.e:1470					alt = 0*/
    // SubProg format pc: 137 op: ASSIGN_I (113)
    _alt_10238 = 0;
    // SubProg format pc: 140 op: STARTLINE (58)

    /** text.e:1471	    			width = 0*/
    // SubProg format pc: 142 op: ASSIGN_I (113)
    _width_10239 = 0;
    // SubProg format pc: 145 op: STARTLINE (58)

    /** text.e:1472	    			decs = -1*/
    // SubProg format pc: 147 op: ASSIGN_I (113)
    _decs_10240 = -1;
    // SubProg format pc: 150 op: STARTLINE (58)

    /** text.e:1473	    			argn = 0*/
    // SubProg format pc: 152 op: ASSIGN_I (113)
    _argn_10242 = 0;
    // SubProg format pc: 155 op: STARTLINE (58)

    /** text.e:1474	    			hexout = 0*/
    // SubProg format pc: 157 op: ASSIGN_I (113)
    _hexout_10245 = 0;
    // SubProg format pc: 160 op: STARTLINE (58)

    /** text.e:1475	    			binout = 0*/
    // SubProg format pc: 162 op: ASSIGN_I (113)
    _binout_10246 = 0;
    // SubProg format pc: 165 op: STARTLINE (58)

    /** text.e:1476	    			trimming = 0*/
    // SubProg format pc: 167 op: ASSIGN_I (113)
    _trimming_10244 = 0;
    // SubProg format pc: 170 op: STARTLINE (58)

    /** text.e:1477	    			tsep = 0*/
    // SubProg format pc: 172 op: ASSIGN_I (113)
    _tsep_10247 = 0;
    // SubProg format pc: 175 op: STARTLINE (58)

    /** text.e:1478	    			istext = 0*/
    // SubProg format pc: 177 op: ASSIGN_I (113)
    _istext_10248 = 0;
    // SubProg format pc: 180 op: STARTLINE (58)

    /** text.e:1479	    			idname = ""*/
    // SubProg format pc: 182 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_idname_10251);
    _idname_10251 = _5;
    // SubProg format pc: 185 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 187 op: STARTLINE (58)

    /** text.e:1480	    			envvar = ""*/
    // SubProg format pc: 189 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_envvar_10253);
    _envvar_10253 = _5;
    // SubProg format pc: 192 op: STARTLINE (58)

    /** text.e:1481	    			envsym = ""*/
    // SubProg format pc: 194 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_envsym_10252);
    _envsym_10252 = _5;
    // SubProg format pc: 197 op: ELSE (23)
    goto L2; // [197] 60
    // SubProg format pc: 199 op: NOP1 (159)
L5: // addr: 200 pc: 199 sub: 10222 op: 159
    // SubProg format pc: 200 op: STARTLINE (58)

    /** text.e:1483	    			result &= tch*/
    // SubProg format pc: 202 op: CONCAT (15)
    Append(&_result_10226, _result_10226, _tch_10228);
    // SubProg format pc: 206 op: NOP1 (159)
    // SubProg format pc: 207 op: ELSE (23)
    goto L2; // [207] 60
    // SubProg format pc: 209 op: NOP1 (159)
L4: // addr: 210 pc: 209 sub: 10222 op: 159
    // SubProg format pc: 210 op: STARTLINE (58)

    /** text.e:1486				switch tch do*/
    // SubProg format pc: 212 op: SWITCH_I (193)
    _0 = _tch_10228;
    switch ( _0 ){ 
        // SubProg format pc: 217 op: STARTLINE (58)

        /** text.e:1487	    			case ']' then*/
        // SubProg format pc: 219 op: CASE (186)
        case 93:
        // SubProg format pc: 221 op: STARTLINE (58)

        /** text.e:1488	    				in_token = 0*/
        // SubProg format pc: 223 op: ASSIGN_I (113)
        _in_token_10227 = 0;
        // SubProg format pc: 226 op: STARTLINE (58)

        /** text.e:1489	    				tend = i*/
        // SubProg format pc: 228 op: ASSIGN_I (113)
        _tend_10230 = _i_10229;
        // SubProg format pc: 231 op: ELSE (23)
        goto L6; // [231] 1072
        // SubProg format pc: 233 op: STARTLINE (58)

        /** text.e:1491	    			case '[' then*/
        // SubProg format pc: 235 op: CASE (186)
        case 91:
        // SubProg format pc: 237 op: STARTLINE (58)

        /** text.e:1492		    			result &= tch*/
        // SubProg format pc: 239 op: CONCAT (15)
        Append(&_result_10226, _result_10226, _tch_10228);
        // SubProg format pc: 243 op: STARTLINE (58)

        /** text.e:1493		    			while i < length(format_pattern) do*/
        // SubProg format pc: 245 op: NOP2 (110)
        // SubProg format pc: 247 op: NOPWHILE (158)
L7: // addr: 248 pc: 247 sub: 10222 op: 158
        // SubProg format pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_10224)){
                _5738 = SEQ_PTR(_format_pattern_10224)->length;
        }
        else {
            _5738 = 1;
        }
        // SubProg format pc: 251 op: LESS_IFW_I (119)
        if (_i_10229 >= _5738)
        goto L6; // [251] 1072
        // SubProg format pc: 255 op: STARTLINE (58)

        /** text.e:1494		    				i += 1*/
        // SubProg format pc: 257 op: PLUS1_I (117)
        _i_10229 = _i_10229 + 1;
        // SubProg format pc: 261 op: STARTLINE (58)

        /** text.e:1495		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 263 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _5741 = (object)*(((s1_ptr)_2)->base + _i_10229);
        // SubProg format pc: 267 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5741, 93)){
            _5741 = NOVALUE;
            goto L7; // [267] 248
        }
        _5741 = NOVALUE;
        // SubProg format pc: 271 op: STARTLINE (58)

        /** text.e:1496		    					in_token = 0*/
        // SubProg format pc: 273 op: ASSIGN_I (113)
        _in_token_10227 = 0;
        // SubProg format pc: 276 op: STARTLINE (58)

        /** text.e:1497		    					tend = 0*/
        // SubProg format pc: 278 op: ASSIGN_I (113)
        _tend_10230 = 0;
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
        _cap_10231 = _tch_10228;
        // SubProg format pc: 306 op: ELSE (23)
        goto L6; // [306] 1072
        // SubProg format pc: 308 op: STARTLINE (58)

        /** text.e:1505		    		case 'b' then*/
        // SubProg format pc: 310 op: CASE (186)
        case 98:
        // SubProg format pc: 312 op: STARTLINE (58)

        /** text.e:1506		    			bwz = 1*/
        // SubProg format pc: 314 op: ASSIGN_I (113)
        _bwz_10236 = 1;
        // SubProg format pc: 317 op: ELSE (23)
        goto L6; // [317] 1072
        // SubProg format pc: 319 op: STARTLINE (58)

        /** text.e:1508		    		case 's' then*/
        // SubProg format pc: 321 op: CASE (186)
        case 115:
        // SubProg format pc: 323 op: STARTLINE (58)

        /** text.e:1509		    			spacer = 1*/
        // SubProg format pc: 325 op: ASSIGN_I (113)
        _spacer_10237 = 1;
        // SubProg format pc: 328 op: ELSE (23)
        goto L6; // [328] 1072
        // SubProg format pc: 330 op: STARTLINE (58)

        /** text.e:1511		    		case 't' then*/
        // SubProg format pc: 332 op: CASE (186)
        case 116:
        // SubProg format pc: 334 op: STARTLINE (58)

        /** text.e:1512		    			trimming = 1*/
        // SubProg format pc: 336 op: ASSIGN_I (113)
        _trimming_10244 = 1;
        // SubProg format pc: 339 op: ELSE (23)
        goto L6; // [339] 1072
        // SubProg format pc: 341 op: STARTLINE (58)

        /** text.e:1514		    		case 'z' then*/
        // SubProg format pc: 343 op: CASE (186)
        case 122:
        // SubProg format pc: 345 op: STARTLINE (58)

        /** text.e:1515		    			zfill = 1*/
        // SubProg format pc: 347 op: ASSIGN_I (113)
        _zfill_10235 = 1;
        // SubProg format pc: 350 op: ELSE (23)
        goto L6; // [350] 1072
        // SubProg format pc: 352 op: STARTLINE (58)

        /** text.e:1517		    		case 'X' then*/
        // SubProg format pc: 354 op: CASE (186)
        case 88:
        // SubProg format pc: 356 op: STARTLINE (58)

        /** text.e:1518		    			hexout = 1*/
        // SubProg format pc: 358 op: ASSIGN_I (113)
        _hexout_10245 = 1;
        // SubProg format pc: 361 op: ELSE (23)
        goto L6; // [361] 1072
        // SubProg format pc: 363 op: STARTLINE (58)

        /** text.e:1520		    		case 'B' then*/
        // SubProg format pc: 365 op: CASE (186)
        case 66:
        // SubProg format pc: 367 op: STARTLINE (58)

        /** text.e:1521		    			binout = 1*/
        // SubProg format pc: 369 op: ASSIGN_I (113)
        _binout_10246 = 1;
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
        _align_10232 = _tch_10228;
        // SubProg format pc: 387 op: ELSE (23)
        goto L6; // [387] 1072
        // SubProg format pc: 389 op: STARTLINE (58)

        /** text.e:1526		    		case '+' then*/
        // SubProg format pc: 391 op: CASE (186)
        case 43:
        // SubProg format pc: 393 op: STARTLINE (58)

        /** text.e:1527		    			psign = 1*/
        // SubProg format pc: 395 op: ASSIGN_I (113)
        _psign_10233 = 1;
        // SubProg format pc: 398 op: ELSE (23)
        goto L6; // [398] 1072
        // SubProg format pc: 400 op: STARTLINE (58)

        /** text.e:1529		    		case '(' then*/
        // SubProg format pc: 402 op: CASE (186)
        case 40:
        // SubProg format pc: 404 op: STARTLINE (58)

        /** text.e:1530		    			msign = 1*/
        // SubProg format pc: 406 op: ASSIGN_I (113)
        _msign_10234 = 1;
        // SubProg format pc: 409 op: ELSE (23)
        goto L6; // [409] 1072
        // SubProg format pc: 411 op: STARTLINE (58)

        /** text.e:1532		    		case '?' then*/
        // SubProg format pc: 413 op: CASE (186)
        case 63:
        // SubProg format pc: 415 op: STARTLINE (58)

        /** text.e:1533		    			alt = 1*/
        // SubProg format pc: 417 op: ASSIGN_I (113)
        _alt_10238 = 1;
        // SubProg format pc: 420 op: ELSE (23)
        goto L6; // [420] 1072
        // SubProg format pc: 422 op: STARTLINE (58)

        /** text.e:1535		    		case 'T' then*/
        // SubProg format pc: 424 op: CASE (186)
        case 84:
        // SubProg format pc: 426 op: STARTLINE (58)

        /** text.e:1536		    			istext = 1*/
        // SubProg format pc: 428 op: ASSIGN_I (113)
        _istext_10248 = 1;
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
L8: // addr: 442 pc: 441 sub: 10222 op: 158
        // SubProg format pc: 442 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_10224)){
                _5746 = SEQ_PTR(_format_pattern_10224)->length;
        }
        else {
            _5746 = 1;
        }
        // SubProg format pc: 445 op: LESS_IFW_I (119)
        if (_i_10229 >= _5746)
        goto L6; // [445] 1072
        // SubProg format pc: 449 op: STARTLINE (58)

        /** text.e:1540		    				i += 1*/
        // SubProg format pc: 451 op: PLUS1_I (117)
        _i_10229 = _i_10229 + 1;
        // SubProg format pc: 455 op: STARTLINE (58)

        /** text.e:1541		    				tch = format_pattern[i]*/
        // SubProg format pc: 457 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _tch_10228 = (object)*(((s1_ptr)_2)->base + _i_10229);
        if (!IS_ATOM_INT(_tch_10228))
        _tch_10228 = (object)DBL_PTR(_tch_10228)->dbl;
        // SubProg format pc: 461 op: STARTLINE (58)

        /** text.e:1542		    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 463 op: FIND_FROM (176)
        _pos_10241 = find_from(_tch_10228, _1827, 1);
        // SubProg format pc: 468 op: STARTLINE (58)

        /** text.e:1543		    				if pos = 0 then*/
        // SubProg format pc: 470 op: EQUALS_IFW_I (121)
        if (_pos_10241 != 0)
        goto L9; // [470] 485
        // SubProg format pc: 474 op: STARTLINE (58)

        /** text.e:1544		    					i -= 1*/
        // SubProg format pc: 476 op: MINUS_I (116)
        _i_10229 = _i_10229 - 1;
        // SubProg format pc: 480 op: STARTLINE (58)

        /** text.e:1545		    					exit*/
        // SubProg format pc: 482 op: EXIT (61)
        goto L6; // [482] 1072
        // SubProg format pc: 484 op: NOP1 (159)
L9: // addr: 485 pc: 484 sub: 10222 op: 159
        // SubProg format pc: 485 op: STARTLINE (58)

        /** text.e:1547		    				width = width * 10 + pos - 1*/
        // SubProg format pc: 487 op: PRIVATE_INIT_CHECK (30)
        // SubProg format pc: 489 op: MULTIPLY (13)
        if (_width_10239 == (short)_width_10239){
            _5753 = _width_10239 * 10;
        }
        else{
            _5753 = NewDouble(_width_10239 * (eudouble)10);
        }
        // SubProg format pc: 493 op: PLUS (11)
        if (IS_ATOM_INT(_5753)) {
            _5754 = _5753 + _pos_10241;
            if ((object)((uintptr_t)_5754 + (uintptr_t)HIGH_BITS) >= 0){
                _5754 = NewDouble((eudouble)_5754);
            }
        }
        else {
            _5754 = NewDouble(DBL_PTR(_5753)->dbl + (eudouble)_pos_10241);
        }
        DeRef(_5753);
        _5753 = NOVALUE;
        // SubProg format pc: 497 op: MINUS (10)
        if (IS_ATOM_INT(_5754)) {
            _width_10239 = _5754 - 1;
        }
        else {
            _width_10239 = NewDouble(DBL_PTR(_5754)->dbl - (eudouble)1);
        }
        DeRef(_5754);
        _5754 = NOVALUE;
        // SubProg format pc: 501 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_width_10239)) {
            _1 = (object)(DBL_PTR(_width_10239)->dbl);
            DeRefDS(_width_10239);
            _width_10239 = _1;
        }
        // SubProg format pc: 503 op: STARTLINE (58)

        /** text.e:1548		    				if width = 0 then*/
        // SubProg format pc: 505 op: EQUALS_IFW_I (121)
        if (_width_10239 != 0)
        goto L8; // [505] 442
        // SubProg format pc: 509 op: STARTLINE (58)

        /** text.e:1549		    					zfill = '0'*/
        // SubProg format pc: 511 op: ASSIGN_I (113)
        _zfill_10235 = 48;
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
        _decs_10240 = 0;
        // SubProg format pc: 531 op: STARTLINE (58)

        /** text.e:1555		    			while i < length(format_pattern) do*/
        // SubProg format pc: 533 op: NOP2 (110)
        // SubProg format pc: 535 op: NOPWHILE (158)
LA: // addr: 536 pc: 535 sub: 10222 op: 158
        // SubProg format pc: 536 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_10224)){
                _5757 = SEQ_PTR(_format_pattern_10224)->length;
        }
        else {
            _5757 = 1;
        }
        // SubProg format pc: 539 op: LESS_IFW_I (119)
        if (_i_10229 >= _5757)
        goto L6; // [539] 1072
        // SubProg format pc: 543 op: STARTLINE (58)

        /** text.e:1556		    				i += 1*/
        // SubProg format pc: 545 op: PLUS1_I (117)
        _i_10229 = _i_10229 + 1;
        // SubProg format pc: 549 op: STARTLINE (58)

        /** text.e:1557		    				tch = format_pattern[i]*/
        // SubProg format pc: 551 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _tch_10228 = (object)*(((s1_ptr)_2)->base + _i_10229);
        if (!IS_ATOM_INT(_tch_10228))
        _tch_10228 = (object)DBL_PTR(_tch_10228)->dbl;
        // SubProg format pc: 555 op: STARTLINE (58)

        /** text.e:1558		    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 557 op: FIND_FROM (176)
        _pos_10241 = find_from(_tch_10228, _1827, 1);
        // SubProg format pc: 562 op: STARTLINE (58)

        /** text.e:1559		    				if pos = 0 then*/
        // SubProg format pc: 564 op: EQUALS_IFW_I (121)
        if (_pos_10241 != 0)
        goto LB; // [564] 579
        // SubProg format pc: 568 op: STARTLINE (58)

        /** text.e:1560		    					i -= 1*/
        // SubProg format pc: 570 op: MINUS_I (116)
        _i_10229 = _i_10229 - 1;
        // SubProg format pc: 574 op: STARTLINE (58)

        /** text.e:1561		    					exit*/
        // SubProg format pc: 576 op: EXIT (61)
        goto L6; // [576] 1072
        // SubProg format pc: 578 op: NOP1 (159)
LB: // addr: 579 pc: 578 sub: 10222 op: 159
        // SubProg format pc: 579 op: STARTLINE (58)

        /** text.e:1563		    				decs = decs * 10 + pos - 1*/
        // SubProg format pc: 581 op: MULTIPLY (13)
        if (_decs_10240 == (short)_decs_10240){
            _5764 = _decs_10240 * 10;
        }
        else{
            _5764 = NewDouble(_decs_10240 * (eudouble)10);
        }
        // SubProg format pc: 585 op: PLUS (11)
        if (IS_ATOM_INT(_5764)) {
            _5765 = _5764 + _pos_10241;
            if ((object)((uintptr_t)_5765 + (uintptr_t)HIGH_BITS) >= 0){
                _5765 = NewDouble((eudouble)_5765);
            }
        }
        else {
            _5765 = NewDouble(DBL_PTR(_5764)->dbl + (eudouble)_pos_10241);
        }
        DeRef(_5764);
        _5764 = NOVALUE;
        // SubProg format pc: 589 op: MINUS (10)
        if (IS_ATOM_INT(_5765)) {
            _decs_10240 = _5765 - 1;
        }
        else {
            _decs_10240 = NewDouble(DBL_PTR(_5765)->dbl - (eudouble)1);
        }
        DeRef(_5765);
        _5765 = NOVALUE;
        // SubProg format pc: 593 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_decs_10240)) {
            _1 = (object)(DBL_PTR(_decs_10240)->dbl);
            DeRefDS(_decs_10240);
            _decs_10240 = _1;
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
        _sp_10327 = _i_10229 + 1;
        // SubProg format pc: 614 op: STARTLINE (58)

        /** text.e:1571		    			i = sp*/
        // SubProg format pc: 616 op: ASSIGN_I (113)
        _i_10229 = _sp_10327;
        // SubProg format pc: 619 op: STARTLINE (58)

        /** text.e:1572		    			while i < length(format_pattern) do*/
        // SubProg format pc: 621 op: NOP2 (110)
        // SubProg format pc: 623 op: NOPWHILE (158)
LC: // addr: 624 pc: 623 sub: 10222 op: 158
        // SubProg format pc: 624 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_10224)){
                _5768 = SEQ_PTR(_format_pattern_10224)->length;
        }
        else {
            _5768 = 1;
        }
        // SubProg format pc: 627 op: LESS_IFW_I (119)
        if (_i_10229 >= _5768)
        goto LD; // [627] 672
        // SubProg format pc: 631 op: STARTLINE (58)

        /** text.e:1573		    				if format_pattern[i] = '}' then*/
        // SubProg format pc: 633 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _5770 = (object)*(((s1_ptr)_2)->base + _i_10229);
        // SubProg format pc: 637 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5770, 125)){
            _5770 = NOVALUE;
            goto LE; // [637] 646
        }
        _5770 = NOVALUE;
        // SubProg format pc: 641 op: STARTLINE (58)

        /** text.e:1574		    					exit*/
        // SubProg format pc: 643 op: EXIT (61)
        goto LD; // [643] 672
        // SubProg format pc: 645 op: NOP1 (159)
LE: // addr: 646 pc: 645 sub: 10222 op: 159
        // SubProg format pc: 646 op: STARTLINE (58)

        /** text.e:1576		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 648 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _5772 = (object)*(((s1_ptr)_2)->base + _i_10229);
        // SubProg format pc: 652 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5772, 93)){
            _5772 = NOVALUE;
            goto LF; // [652] 661
        }
        _5772 = NOVALUE;
        // SubProg format pc: 656 op: STARTLINE (58)

        /** text.e:1577		    					exit*/
        // SubProg format pc: 658 op: EXIT (61)
        goto LD; // [658] 672
        // SubProg format pc: 660 op: NOP1 (159)
LF: // addr: 661 pc: 660 sub: 10222 op: 159
        // SubProg format pc: 661 op: STARTLINE (58)

        /** text.e:1579		    				i += 1*/
        // SubProg format pc: 663 op: PLUS1_I (117)
        _i_10229 = _i_10229 + 1;
        // SubProg format pc: 667 op: STARTLINE (58)

        /** text.e:1580		    			end while*/
        // SubProg format pc: 669 op: ENDWHILE (22)
        goto LC; // [669] 624
        // SubProg format pc: 671 op: NOP1 (159)
LD: // addr: 672 pc: 671 sub: 10222 op: 159
        // SubProg format pc: 672 op: STARTLINE (58)

        /** text.e:1581		    			idname = trim(format_pattern[sp .. i-1]) & '='*/
        // SubProg format pc: 674 op: MINUS (10)
        _5775 = _i_10229 - 1;
        // SubProg format pc: 678 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5776;
        RHS_Slice(_format_pattern_10224, _sp_10327, _5775);
        // SubProg format pc: 683 op: PROC (27)
        RefDS(_4573);
        _5777 = _15trim(_5776, _4573, 0);
        _5776 = NOVALUE;
        // SubProg format pc: 689 op: CONCAT (15)
        if (IS_SEQUENCE(_5777) && IS_ATOM(61)) {
            Append(&_idname_10251, _5777, 61);
        }
        else if (IS_ATOM(_5777) && IS_SEQUENCE(61)) {
        }
        else {
            Concat((object_ptr)&_idname_10251, _5777, 61);
            DeRef(_5777);
            _5777 = NOVALUE;
        }
        DeRef(_5777);
        _5777 = NOVALUE;
        // SubProg format pc: 693 op: STARTLINE (58)

        /** text.e:1582	    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 695 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _5780 = (object)*(((s1_ptr)_2)->base + _i_10229);
        // SubProg format pc: 699 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5780, 93)){
            _5780 = NOVALUE;
            goto L10; // [699] 710
        }
        _5780 = NOVALUE;
        // SubProg format pc: 703 op: STARTLINE (58)

        /** text.e:1583	    					i -= 1*/
        // SubProg format pc: 705 op: MINUS_I (116)
        _i_10229 = _i_10229 - 1;
        // SubProg format pc: 709 op: NOP1 (159)
L10: // addr: 710 pc: 709 sub: 10222 op: 159
        // SubProg format pc: 710 op: STARTLINE (58)

        /** text.e:1586	    				for j = 1 to length(arg_list) do*/
        // SubProg format pc: 712 op: LENGTH (42)
        if (IS_SEQUENCE(_arg_list_10225)){
                _5783 = SEQ_PTR(_arg_list_10225)->length;
        }
        else {
            _5783 = 1;
        }
        // SubProg format pc: 715 op: FOR_I (125)
        {
            object _j_10349;
            _j_10349 = 1;
L11: // addr: 722 pc: 715 sub: 10222 op: 125
            if (_j_10349 > _5783){
                goto L12; // [715] 797
            }
            // SubProg format pc: 722 op: STARTLINE (58)

            /** text.e:1587	    					if sequence(arg_list[j]) then*/
            // SubProg format pc: 724 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_arg_list_10225);
            _5784 = (object)*(((s1_ptr)_2)->base + _j_10349);
            // SubProg format pc: 728 op: IS_A_SEQUENCE (68)
            _5785 = IS_SEQUENCE(_5784);
            _5784 = NOVALUE;
            // SubProg format pc: 731 op: IF (20)
            if (_5785 == 0)
            {
                _5785 = NOVALUE;
                goto L13; // [731] 768
            }
            else{
                _5785 = NOVALUE;
            }
            // SubProg format pc: 734 op: STARTLINE (58)

            /** text.e:1588	    						if search:begins(idname, arg_list[j]) then*/
            // SubProg format pc: 736 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_arg_list_10225);
            _5786 = (object)*(((s1_ptr)_2)->base + _j_10349);
            // SubProg format pc: 740 op: PROC (27)
            RefDS(_idname_10251);
            Ref(_5786);
            _5787 = _17begins(_idname_10251, _5786);
            _5786 = NOVALUE;
            // SubProg format pc: 745 op: IF (20)
            if (_5787 == 0) {
                DeRef(_5787);
                _5787 = NOVALUE;
                goto L14; // [745] 767
            }
            else {
                if (!IS_ATOM_INT(_5787) && DBL_PTR(_5787)->dbl == 0.0){
                    DeRef(_5787);
                    _5787 = NOVALUE;
                    goto L14; // [745] 767
                }
                DeRef(_5787);
                _5787 = NOVALUE;
            }
            DeRef(_5787);
            _5787 = NOVALUE;
            // SubProg format pc: 748 op: STARTLINE (58)

            /** text.e:1589	    							if argn = 0 then*/
            // SubProg format pc: 750 op: PRIVATE_INIT_CHECK (30)
            // SubProg format pc: 752 op: EQUALS_IFW_I (121)
            if (_argn_10242 != 0)
            goto L15; // [752] 766
            // SubProg format pc: 756 op: STARTLINE (58)

            /** text.e:1590	    								argn = j*/
            // SubProg format pc: 758 op: ASSIGN_I (113)
            _argn_10242 = _j_10349;
            // SubProg format pc: 761 op: STARTLINE (58)

            /** text.e:1591	    								exit*/
            // SubProg format pc: 763 op: EXIT (61)
            goto L12; // [763] 797
            // SubProg format pc: 765 op: NOP1 (159)
L15: // addr: 766 pc: 765 sub: 10222 op: 159
            // SubProg format pc: 766 op: NOP1 (159)
L14: // addr: 767 pc: 766 sub: 10222 op: 159
            // SubProg format pc: 767 op: NOP1 (159)
L13: // addr: 768 pc: 767 sub: 10222 op: 159
            // SubProg format pc: 768 op: STARTLINE (58)

            /** text.e:1595	    					if j = length(arg_list) then*/
            // SubProg format pc: 770 op: LENGTH (42)
            if (IS_SEQUENCE(_arg_list_10225)){
                    _5789 = SEQ_PTR(_arg_list_10225)->length;
            }
            else {
                _5789 = 1;
            }
            // SubProg format pc: 773 op: EQUALS_IFW_I (121)
            if (_j_10349 != _5789)
            goto L16; // [773] 790
            // SubProg format pc: 777 op: STARTLINE (58)

            /** text.e:1596	    						idname = ""*/
            // SubProg format pc: 779 op: ASSIGN (18)
            RefDS(_5);
            DeRef(_idname_10251);
            _idname_10251 = _5;
            // SubProg format pc: 782 op: SEQUENCE_CHECK (97)
            // SubProg format pc: 784 op: STARTLINE (58)

            /** text.e:1597	    						argn = -1*/
            // SubProg format pc: 786 op: ASSIGN_I (113)
            _argn_10242 = -1;
            // SubProg format pc: 789 op: NOP1 (159)
L16: // addr: 790 pc: 789 sub: 10222 op: 159
            // SubProg format pc: 790 op: STARTLINE (58)

            /** text.e:1599	    				end for*/
            // SubProg format pc: 792 op: ENDFOR_INT_UP1 (54)
            _j_10349 = _j_10349 + 1;
            goto L11; // [792] 722
L12: // addr: 797 pc: 792 sub: 10222 op: 54
            ;
        }
        // SubProg format pc: 797 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sp_10327
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
        _sp_10363 = _i_10229 + 1;
        // SubProg format pc: 813 op: STARTLINE (58)

        /** text.e:1605		    			i = sp*/
        // SubProg format pc: 815 op: ASSIGN_I (113)
        _i_10229 = _sp_10363;
        // SubProg format pc: 818 op: STARTLINE (58)

        /** text.e:1606		    			while i < length(format_pattern) do*/
        // SubProg format pc: 820 op: NOP2 (110)
        // SubProg format pc: 822 op: NOPWHILE (158)
L17: // addr: 823 pc: 822 sub: 10222 op: 158
        // SubProg format pc: 823 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_10224)){
                _5792 = SEQ_PTR(_format_pattern_10224)->length;
        }
        else {
            _5792 = 1;
        }
        // SubProg format pc: 826 op: LESS_IFW_I (119)
        if (_i_10229 >= _5792)
        goto L18; // [826] 871
        // SubProg format pc: 830 op: STARTLINE (58)

        /** text.e:1607		    				if format_pattern[i] = '%' then*/
        // SubProg format pc: 832 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _5794 = (object)*(((s1_ptr)_2)->base + _i_10229);
        // SubProg format pc: 836 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5794, 37)){
            _5794 = NOVALUE;
            goto L19; // [836] 845
        }
        _5794 = NOVALUE;
        // SubProg format pc: 840 op: STARTLINE (58)

        /** text.e:1608		    					exit*/
        // SubProg format pc: 842 op: EXIT (61)
        goto L18; // [842] 871
        // SubProg format pc: 844 op: NOP1 (159)
L19: // addr: 845 pc: 844 sub: 10222 op: 159
        // SubProg format pc: 845 op: STARTLINE (58)

        /** text.e:1610		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 847 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _5796 = (object)*(((s1_ptr)_2)->base + _i_10229);
        // SubProg format pc: 851 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5796, 93)){
            _5796 = NOVALUE;
            goto L1A; // [851] 860
        }
        _5796 = NOVALUE;
        // SubProg format pc: 855 op: STARTLINE (58)

        /** text.e:1611		    					exit*/
        // SubProg format pc: 857 op: EXIT (61)
        goto L18; // [857] 871
        // SubProg format pc: 859 op: NOP1 (159)
L1A: // addr: 860 pc: 859 sub: 10222 op: 159
        // SubProg format pc: 860 op: STARTLINE (58)

        /** text.e:1613		    				i += 1*/
        // SubProg format pc: 862 op: PLUS1_I (117)
        _i_10229 = _i_10229 + 1;
        // SubProg format pc: 866 op: STARTLINE (58)

        /** text.e:1614		    			end while*/
        // SubProg format pc: 868 op: ENDWHILE (22)
        goto L17; // [868] 823
        // SubProg format pc: 870 op: NOP1 (159)
L18: // addr: 871 pc: 870 sub: 10222 op: 159
        // SubProg format pc: 871 op: STARTLINE (58)

        /** text.e:1615		    			envsym = trim(format_pattern[sp .. i-1])*/
        // SubProg format pc: 873 op: MINUS (10)
        _5799 = _i_10229 - 1;
        // SubProg format pc: 877 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5800;
        RHS_Slice(_format_pattern_10224, _sp_10363, _5799);
        // SubProg format pc: 882 op: PROC (27)
        RefDS(_4573);
        _0 = _envsym_10252;
        _envsym_10252 = _15trim(_5800, _4573, 0);
        DeRef(_0);
        _5800 = NOVALUE;
        // SubProg format pc: 888 op: STARTLINE (58)

        /** text.e:1616	    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 890 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _5802 = (object)*(((s1_ptr)_2)->base + _i_10229);
        // SubProg format pc: 894 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5802, 93)){
            _5802 = NOVALUE;
            goto L1B; // [894] 905
        }
        _5802 = NOVALUE;
        // SubProg format pc: 898 op: STARTLINE (58)

        /** text.e:1617	    					i -= 1*/
        // SubProg format pc: 900 op: MINUS_I (116)
        _i_10229 = _i_10229 - 1;
        // SubProg format pc: 904 op: NOP1 (159)
L1B: // addr: 905 pc: 904 sub: 10222 op: 159
        // SubProg format pc: 905 op: STARTLINE (58)

        /** text.e:1620	    				envvar = getenv(envsym)*/
        // SubProg format pc: 907 op: GETENV (91)
        DeRefi(_envvar_10253);
        _envvar_10253 = EGetEnv(_envsym_10252);
        // SubProg format pc: 910 op: STARTLINE (58)

        /** text.e:1622	    				argn = -1*/
        // SubProg format pc: 912 op: ASSIGN_I (113)
        _argn_10242 = -1;
        // SubProg format pc: 915 op: STARTLINE (58)

        /** text.e:1623	    				if atom(envvar) then*/
        // SubProg format pc: 917 op: IS_AN_ATOM (67)
        _5806 = IS_ATOM(_envvar_10253);
        // SubProg format pc: 920 op: IF (20)
        if (_5806 == 0)
        {
            _5806 = NOVALUE;
            goto L1C; // [920] 929
        }
        else{
            _5806 = NOVALUE;
        }
        // SubProg format pc: 923 op: STARTLINE (58)

        /** text.e:1624	    					envvar = ""*/
        // SubProg format pc: 925 op: ASSIGN (18)
        RefDS(_5);
        DeRefi(_envvar_10253);
        _envvar_10253 = _5;
        // SubProg format pc: 928 op: NOP1 (159)
L1C: // addr: 929 pc: 928 sub: 10222 op: 159
        // SubProg format pc: 929 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sp_10363
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
        if (_argn_10242 != 0)
        goto L6; // [957] 1072
        // SubProg format pc: 961 op: STARTLINE (58)

        /** text.e:1630			    			i -= 1*/
        // SubProg format pc: 963 op: MINUS_I (116)
        _i_10229 = _i_10229 - 1;
        // SubProg format pc: 967 op: STARTLINE (58)

        /** text.e:1631			    			while i < length(format_pattern) do*/
        // SubProg format pc: 969 op: NOP2 (110)
        // SubProg format pc: 971 op: NOPWHILE (158)
L1D: // addr: 972 pc: 971 sub: 10222 op: 158
        // SubProg format pc: 972 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_10224)){
                _5809 = SEQ_PTR(_format_pattern_10224)->length;
        }
        else {
            _5809 = 1;
        }
        // SubProg format pc: 975 op: LESS_IFW_I (119)
        if (_i_10229 >= _5809)
        goto L6; // [975] 1072
        // SubProg format pc: 979 op: STARTLINE (58)

        /** text.e:1632			    				i += 1*/
        // SubProg format pc: 981 op: PLUS1_I (117)
        _i_10229 = _i_10229 + 1;
        // SubProg format pc: 985 op: STARTLINE (58)

        /** text.e:1633			    				tch = format_pattern[i]*/
        // SubProg format pc: 987 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _tch_10228 = (object)*(((s1_ptr)_2)->base + _i_10229);
        if (!IS_ATOM_INT(_tch_10228))
        _tch_10228 = (object)DBL_PTR(_tch_10228)->dbl;
        // SubProg format pc: 991 op: STARTLINE (58)

        /** text.e:1634			    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 993 op: FIND_FROM (176)
        _pos_10241 = find_from(_tch_10228, _1827, 1);
        // SubProg format pc: 998 op: STARTLINE (58)

        /** text.e:1635			    				if pos = 0 then*/
        // SubProg format pc: 1000 op: EQUALS_IFW_I (121)
        if (_pos_10241 != 0)
        goto L1E; // [1000] 1015
        // SubProg format pc: 1004 op: STARTLINE (58)

        /** text.e:1636			    					i -= 1*/
        // SubProg format pc: 1006 op: MINUS_I (116)
        _i_10229 = _i_10229 - 1;
        // SubProg format pc: 1010 op: STARTLINE (58)

        /** text.e:1637			    					exit*/
        // SubProg format pc: 1012 op: EXIT (61)
        goto L6; // [1012] 1072
        // SubProg format pc: 1014 op: NOP1 (159)
L1E: // addr: 1015 pc: 1014 sub: 10222 op: 159
        // SubProg format pc: 1015 op: STARTLINE (58)

        /** text.e:1639			    				argn = argn * 10 + pos - 1*/
        // SubProg format pc: 1017 op: MULTIPLY (13)
        if (_argn_10242 == (short)_argn_10242){
            _5816 = _argn_10242 * 10;
        }
        else{
            _5816 = NewDouble(_argn_10242 * (eudouble)10);
        }
        // SubProg format pc: 1021 op: PLUS (11)
        if (IS_ATOM_INT(_5816)) {
            _5817 = _5816 + _pos_10241;
            if ((object)((uintptr_t)_5817 + (uintptr_t)HIGH_BITS) >= 0){
                _5817 = NewDouble((eudouble)_5817);
            }
        }
        else {
            _5817 = NewDouble(DBL_PTR(_5816)->dbl + (eudouble)_pos_10241);
        }
        DeRef(_5816);
        _5816 = NOVALUE;
        // SubProg format pc: 1025 op: MINUS (10)
        if (IS_ATOM_INT(_5817)) {
            _argn_10242 = _5817 - 1;
        }
        else {
            _argn_10242 = NewDouble(DBL_PTR(_5817)->dbl - (eudouble)1);
        }
        DeRef(_5817);
        _5817 = NOVALUE;
        // SubProg format pc: 1029 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_argn_10242)) {
            _1 = (object)(DBL_PTR(_argn_10242)->dbl);
            DeRefDS(_argn_10242);
            _argn_10242 = _1;
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
        if (IS_SEQUENCE(_format_pattern_10224)){
                _5819 = SEQ_PTR(_format_pattern_10224)->length;
        }
        else {
            _5819 = 1;
        }
        // SubProg format pc: 1048 op: LESS_IFW_I (119)
        if (_i_10229 >= _5819)
        goto L6; // [1048] 1072
        // SubProg format pc: 1052 op: STARTLINE (58)

        /** text.e:1645		    				i +=1*/
        // SubProg format pc: 1054 op: PLUS1_I (117)
        _i_10229 = _i_10229 + 1;
        // SubProg format pc: 1058 op: STARTLINE (58)

        /** text.e:1646		    				tsep = format_pattern[i]*/
        // SubProg format pc: 1060 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_10224);
        _tsep_10247 = (object)*(((s1_ptr)_2)->base + _i_10229);
        if (!IS_ATOM_INT(_tsep_10247))
        _tsep_10247 = (object)DBL_PTR(_tsep_10247)->dbl;
        // SubProg format pc: 1064 op: NOP1 (159)
        // SubProg format pc: 1065 op: ELSE (23)
        goto L6; // [1065] 1072
        // SubProg format pc: 1067 op: STARTLINE (58)

        /** text.e:1649		    		case else*/
        // SubProg format pc: 1069 op: CASE (186)
        default:
        // SubProg format pc: 1071 op: NOPSWITCH (187)
    ;}L6: // addr: 1072 pc: 1071 sub: 10222 op: 187
    // SubProg format pc: 1072 op: STARTLINE (58)

    /** text.e:1653	    		if tend > 0 then*/
    // SubProg format pc: 1074 op: GREATER_IFW_I (124)
    if (_tend_10230 <= 0)
    goto L1F; // [1074] 3401
    // SubProg format pc: 1078 op: STARTLINE (58)

    /** text.e:1655	    			sequence argtext = ""*/
    // SubProg format pc: 1080 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_argtext_10410);
    _argtext_10410 = _5;
    // SubProg format pc: 1083 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1085 op: STARTLINE (58)

    /** text.e:1657	    			if argn = 0 then*/
    // SubProg format pc: 1087 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1089 op: EQUALS_IFW_I (121)
    if (_argn_10242 != 0)
    goto L20; // [1089] 1100
    // SubProg format pc: 1093 op: STARTLINE (58)

    /** text.e:1658	    				argn = argl + 1*/
    // SubProg format pc: 1095 op: PLUS1_I (117)
    _argn_10242 = _argl_10243 + 1;
    // SubProg format pc: 1099 op: NOP1 (159)
L20: // addr: 1100 pc: 1099 sub: 10222 op: 159
    // SubProg format pc: 1100 op: STARTLINE (58)

    /** text.e:1660	    			argl = argn*/
    // SubProg format pc: 1102 op: ASSIGN_I (113)
    _argl_10243 = _argn_10242;
    // SubProg format pc: 1105 op: STARTLINE (58)

    /** text.e:1662	    			if argn < 1 or argn > length(arg_list) then*/
    // SubProg format pc: 1107 op: LESS (1)
    _5826 = (_argn_10242 < 1);
    // SubProg format pc: 1111 op: SC1_OR_IF (147)
    if (_5826 != 0) {
        goto L21; // [1111] 1127
    }
    // SubProg format pc: 1115 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_list_10225)){
            _5828 = SEQ_PTR(_arg_list_10225)->length;
    }
    else {
        _5828 = 1;
    }
    // SubProg format pc: 1118 op: GREATER (6)
    _5829 = (_argn_10242 > _5828);
    _5828 = NOVALUE;
    // SubProg format pc: 1122 op: NOP1 (159)
    // SubProg format pc: 1123 op: IF (20)
    if (_5829 == 0)
    {
        DeRef(_5829);
        _5829 = NOVALUE;
        goto L22; // [1123] 1169
    }
    else{
        DeRef(_5829);
        _5829 = NOVALUE;
    }
    // SubProg format pc: 1126 op: NOP1 (159)
L21: // addr: 1127 pc: 1126 sub: 10222 op: 159
    // SubProg format pc: 1127 op: STARTLINE (58)

    /** text.e:1663	    				if length(envvar) > 0 then*/
    // SubProg format pc: 1129 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1131 op: LENGTH (42)
    if (IS_SEQUENCE(_envvar_10253)){
            _5830 = SEQ_PTR(_envvar_10253)->length;
    }
    else {
        _5830 = 1;
    }
    // SubProg format pc: 1134 op: GREATER_IFW_I (124)
    if (_5830 <= 0)
    goto L23; // [1134] 1153
    // SubProg format pc: 1138 op: STARTLINE (58)

    /** text.e:1664	    					argtext = envvar*/
    // SubProg format pc: 1140 op: ASSIGN (18)
    Ref(_envvar_10253);
    DeRef(_argtext_10410);
    _argtext_10410 = _envvar_10253;
    // SubProg format pc: 1143 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1145 op: STARTLINE (58)

    /** text.e:1665		    				currargv = envvar*/
    // SubProg format pc: 1147 op: ASSIGN (18)
    Ref(_envvar_10253);
    DeRef(_currargv_10250);
    _currargv_10250 = _envvar_10253;
    // SubProg format pc: 1150 op: ELSE (23)
    goto L24; // [1150] 2582
    // SubProg format pc: 1152 op: NOP1 (159)
L23: // addr: 1153 pc: 1152 sub: 10222 op: 159
    // SubProg format pc: 1153 op: STARTLINE (58)

    /** text.e:1667	    					argtext = ""*/
    // SubProg format pc: 1155 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_argtext_10410);
    _argtext_10410 = _5;
    // SubProg format pc: 1158 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1160 op: STARTLINE (58)

    /** text.e:1668		    				currargv =""*/
    // SubProg format pc: 1162 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_currargv_10250);
    _currargv_10250 = _5;
    // SubProg format pc: 1165 op: NOP1 (159)
    // SubProg format pc: 1166 op: ELSE (23)
    goto L24; // [1166] 2582
    // SubProg format pc: 1168 op: NOP1 (159)
L22: // addr: 1169 pc: 1168 sub: 10222 op: 159
    // SubProg format pc: 1169 op: STARTLINE (58)

    /** text.e:1671						if string(arg_list[argn]) then*/
    // SubProg format pc: 1171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5832 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1175 op: PROC (27)
    Ref(_5832);
    _5833 = _8string(_5832);
    _5832 = NOVALUE;
    // SubProg format pc: 1179 op: IF (20)
    if (_5833 == 0) {
        DeRef(_5833);
        _5833 = NOVALUE;
        goto L25; // [1179] 1229
    }
    else {
        if (!IS_ATOM_INT(_5833) && DBL_PTR(_5833)->dbl == 0.0){
            DeRef(_5833);
            _5833 = NOVALUE;
            goto L25; // [1179] 1229
        }
        DeRef(_5833);
        _5833 = NOVALUE;
    }
    DeRef(_5833);
    _5833 = NOVALUE;
    // SubProg format pc: 1182 op: STARTLINE (58)

    /** text.e:1672							if length(idname) > 0 then*/
    // SubProg format pc: 1184 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1186 op: LENGTH (42)
    if (IS_SEQUENCE(_idname_10251)){
            _5834 = SEQ_PTR(_idname_10251)->length;
    }
    else {
        _5834 = 1;
    }
    // SubProg format pc: 1189 op: GREATER_IFW_I (124)
    if (_5834 <= 0)
    goto L26; // [1189] 1217
    // SubProg format pc: 1193 op: STARTLINE (58)

    /** text.e:1673								argtext = arg_list[argn][length(idname) + 1 .. $]*/
    // SubProg format pc: 1195 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5836 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1199 op: LENGTH (42)
    if (IS_SEQUENCE(_idname_10251)){
            _5837 = SEQ_PTR(_idname_10251)->length;
    }
    else {
        _5837 = 1;
    }
    // SubProg format pc: 1202 op: PLUS1 (93)
    _5838 = _5837 + 1;
    _5837 = NOVALUE;
    // SubProg format pc: 1206 op: LENGTH (42)
    if (IS_SEQUENCE(_5836)){
            _5839 = SEQ_PTR(_5836)->length;
    }
    else {
        _5839 = 1;
    }
    // SubProg format pc: 1209 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_5836, _5838, _5839);
    _5836 = NOVALUE;
    // SubProg format pc: 1214 op: ELSE (23)
    goto L27; // [1214] 2575
    // SubProg format pc: 1216 op: NOP1 (159)
L26: // addr: 1217 pc: 1216 sub: 10222 op: 159
    // SubProg format pc: 1217 op: STARTLINE (58)

    /** text.e:1675								argtext = arg_list[argn]*/
    // SubProg format pc: 1219 op: RHS_SUBS_CHECK (92)
    DeRef(_argtext_10410);
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _argtext_10410 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    Ref(_argtext_10410);
    // SubProg format pc: 1223 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1225 op: NOP1 (159)
    // SubProg format pc: 1226 op: ELSE (23)
    goto L27; // [1226] 2575
    // SubProg format pc: 1228 op: NOP1 (159)
L25: // addr: 1229 pc: 1228 sub: 10222 op: 159
    // SubProg format pc: 1229 op: STARTLINE (58)

    /** text.e:1678						elsif integer(arg_list[argn]) */
    // SubProg format pc: 1231 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5842 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1235 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_5842))
    _5843 = 1;
    else if (IS_ATOM_DBL(_5842))
    _5843 = IS_ATOM_INT(DoubleToInt(_5842));
    else
    _5843 = 0;
    _5842 = NOVALUE;
    // SubProg format pc: 1238 op: SC1_AND (141)
    if (_5843 == 0) {
        _5844 = 0;
        goto L28; // [1238] 1254
    }
    // SubProg format pc: 1242 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5845 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1246 op: LESSEQ (5)
    if (IS_ATOM_INT(_5845)) {
        _5847 = (_5845 <= 67108863);
    }
    else {
        _5847 = binary_op(LESSEQ, _5845, 67108863);
    }
    _5845 = NOVALUE;
    // SubProg format pc: 1250 op: SC2_AND (142)
    if (IS_ATOM_INT(_5847))
    _5844 = (_5847 != 0);
    else
    _5844 = DBL_PTR(_5847)->dbl != 0.0;
    // SubProg format pc: 1253 op: NOP1 (159)
L28: // addr: 1254 pc: 1253 sub: 10222 op: 159
    // SubProg format pc: 1254 op: SC1_AND_IF (146)
    if (_5844 == 0) {
        goto L29; // [1254] 1747
    }
    // SubProg format pc: 1258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5849 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1262 op: GREATEREQ (2)
    _5852 = binary_op(GREATEREQ, _5849, _5851);
    _5849 = NOVALUE;
    // SubProg format pc: 1266 op: NOP1 (159)
    // SubProg format pc: 1267 op: IF (20)
    if (_5852 == 0) {
        DeRef(_5852);
        _5852 = NOVALUE;
        goto L29; // [1267] 1747
    }
    else {
        if (!IS_ATOM_INT(_5852) && DBL_PTR(_5852)->dbl == 0.0){
            DeRef(_5852);
            _5852 = NOVALUE;
            goto L29; // [1267] 1747
        }
        DeRef(_5852);
        _5852 = NOVALUE;
    }
    DeRef(_5852);
    _5852 = NOVALUE;
    // SubProg format pc: 1270 op: STARTLINE (58)

    /** text.e:1682							if istext then*/
    // SubProg format pc: 1272 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1274 op: IF (20)
    if (_istext_10248 == 0)
    {
        goto L2A; // [1274] 1298
    }
    else{
    }
    // SubProg format pc: 1277 op: STARTLINE (58)

    /** text.e:1683								argtext = {and_bits(0xFFFF_FFFF, math:abs(arg_list[argn]))}*/
    // SubProg format pc: 1279 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5853 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1283 op: PROC (27)
    Ref(_5853);
    _5854 = _9abs(_5853);
    _5853 = NOVALUE;
    // SubProg format pc: 1287 op: AND_BITS (56)
    _5855 = binary_op(AND_BITS, _406, _5854);
    DeRef(_5854);
    _5854 = NOVALUE;
    // SubProg format pc: 1291 op: RIGHT_BRACE_N (31)
    _0 = _argtext_10410;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5855;
    _argtext_10410 = MAKE_SEQ(_1);
    DeRef(_0);
    _5855 = NOVALUE;
    // SubProg format pc: 1295 op: ELSE (23)
    goto L27; // [1295] 2575
    // SubProg format pc: 1297 op: NOP1 (159)
L2A: // addr: 1298 pc: 1297 sub: 10222 op: 159
    // SubProg format pc: 1298 op: STARTLINE (58)

    /** text.e:1685							elsif bwz != 0 and arg_list[argn] = 0 then*/
    // SubProg format pc: 1300 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1302 op: NOTEQ (4)
    _5857 = (_bwz_10236 != 0);
    // SubProg format pc: 1306 op: SC1_AND_IF (146)
    if (_5857 == 0) {
        goto L2B; // [1306] 1333
    }
    // SubProg format pc: 1310 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5859 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1314 op: EQUALS (3)
    if (IS_ATOM_INT(_5859)) {
        _5860 = (_5859 == 0);
    }
    else {
        _5860 = binary_op(EQUALS, _5859, 0);
    }
    _5859 = NOVALUE;
    // SubProg format pc: 1318 op: NOP1 (159)
    // SubProg format pc: 1319 op: IF (20)
    if (_5860 == 0) {
        DeRef(_5860);
        _5860 = NOVALUE;
        goto L2B; // [1319] 1333
    }
    else {
        if (!IS_ATOM_INT(_5860) && DBL_PTR(_5860)->dbl == 0.0){
            DeRef(_5860);
            _5860 = NOVALUE;
            goto L2B; // [1319] 1333
        }
        DeRef(_5860);
        _5860 = NOVALUE;
    }
    DeRef(_5860);
    _5860 = NOVALUE;
    // SubProg format pc: 1322 op: STARTLINE (58)

    /** text.e:1686								argtext = repeat(' ', width)*/
    // SubProg format pc: 1324 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1326 op: REPEAT (32)
    DeRef(_argtext_10410);
    _argtext_10410 = Repeat(32, _width_10239);
    // SubProg format pc: 1330 op: ELSE (23)
    goto L27; // [1330] 2575
    // SubProg format pc: 1332 op: NOP1 (159)
L2B: // addr: 1333 pc: 1332 sub: 10222 op: 159
    // SubProg format pc: 1333 op: STARTLINE (58)

    /** text.e:1688							elsif binout = 1 then*/
    // SubProg format pc: 1335 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1337 op: EQUALS_IFW_I (121)
    if (_binout_10246 != 1)
    goto L2C; // [1337] 1411
    // SubProg format pc: 1341 op: STARTLINE (58)

    /** text.e:1689								argtext = stdseq:reverse( convert:int_to_bits(arg_list[argn], 32)) + '0'*/
    // SubProg format pc: 1343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5863 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1347 op: PROC (27)
    Ref(_5863);
    _5864 = _16int_to_bits(_5863, 32);
    _5863 = NOVALUE;
    // SubProg format pc: 1352 op: PROC (27)
    _5865 = _23reverse(_5864, 1, 0);
    _5864 = NOVALUE;
    // SubProg format pc: 1358 op: PLUS (11)
    DeRef(_argtext_10410);
    if (IS_ATOM_INT(_5865)) {
        _argtext_10410 = _5865 + 48;
        if ((object)((uintptr_t)_argtext_10410 + (uintptr_t)HIGH_BITS) >= 0){
            _argtext_10410 = NewDouble((eudouble)_argtext_10410);
        }
    }
    else {
        _argtext_10410 = binary_op(PLUS, _5865, 48);
    }
    DeRef(_5865);
    _5865 = NOVALUE;
    // SubProg format pc: 1362 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1364 op: STARTLINE (58)

    /** text.e:1690								for ib = 1 to length(argtext) do*/
    // SubProg format pc: 1366 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5867 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5867 = 1;
    }
    // SubProg format pc: 1369 op: FOR_I (125)
    {
        object _ib_10468;
        _ib_10468 = 1;
L2D: // addr: 1376 pc: 1369 sub: 10222 op: 125
        if (_ib_10468 > _5867){
            goto L2E; // [1369] 1408
        }
        // SubProg format pc: 1376 op: STARTLINE (58)

        /** text.e:1691									if argtext[ib] = '1' then*/
        // SubProg format pc: 1378 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_argtext_10410);
        _5868 = (object)*(((s1_ptr)_2)->base + _ib_10468);
        // SubProg format pc: 1382 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5868, 49)){
            _5868 = NOVALUE;
            goto L2F; // [1382] 1401
        }
        _5868 = NOVALUE;
        // SubProg format pc: 1386 op: STARTLINE (58)

        /** text.e:1692										argtext = argtext[ib .. $]*/
        // SubProg format pc: 1388 op: LENGTH (42)
        if (IS_SEQUENCE(_argtext_10410)){
                _5870 = SEQ_PTR(_argtext_10410)->length;
        }
        else {
            _5870 = 1;
        }
        // SubProg format pc: 1391 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_argtext_10410;
        RHS_Slice(_argtext_10410, _ib_10468, _5870);
        // SubProg format pc: 1396 op: STARTLINE (58)

        /** text.e:1693										exit*/
        // SubProg format pc: 1398 op: EXIT (61)
        goto L2E; // [1398] 1408
        // SubProg format pc: 1400 op: NOP1 (159)
L2F: // addr: 1401 pc: 1400 sub: 10222 op: 159
        // SubProg format pc: 1401 op: STARTLINE (58)

        /** text.e:1695								end for*/
        // SubProg format pc: 1403 op: ENDFOR_INT_UP1 (54)
        _ib_10468 = _ib_10468 + 1;
        goto L2D; // [1403] 1376
L2E: // addr: 1408 pc: 1403 sub: 10222 op: 54
        ;
    }
    // SubProg format pc: 1408 op: ELSE (23)
    goto L27; // [1408] 2575
    // SubProg format pc: 1410 op: NOP1 (159)
L2C: // addr: 1411 pc: 1410 sub: 10222 op: 159
    // SubProg format pc: 1411 op: STARTLINE (58)

    /** text.e:1697							elsif hexout = 0 then*/
    // SubProg format pc: 1413 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1415 op: EQUALS_IFW_I (121)
    if (_hexout_10245 != 0)
    goto L30; // [1415] 1681
    // SubProg format pc: 1419 op: STARTLINE (58)

    /** text.e:1698								argtext = sprintf("%d", arg_list[argn])*/
    // SubProg format pc: 1421 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5873 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1425 op: SPRINTF (53)
    DeRef(_argtext_10410);
    _argtext_10410 = EPrintf(-9999999, _1509, _5873);
    _5873 = NOVALUE;
    // SubProg format pc: 1429 op: STARTLINE (58)

    /** text.e:1699								if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1431 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1433 op: NOTEQ (4)
    _5875 = (_zfill_10235 != 0);
    // SubProg format pc: 1437 op: SC1_AND_IF (146)
    if (_5875 == 0) {
        goto L31; // [1437] 1534
    }
    // SubProg format pc: 1441 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1443 op: GREATER (6)
    _5877 = (_width_10239 > 0);
    // SubProg format pc: 1447 op: NOP1 (159)
    // SubProg format pc: 1448 op: IF (20)
    if (_5877 == 0)
    {
        DeRef(_5877);
        _5877 = NOVALUE;
        goto L31; // [1448] 1534
    }
    else{
        DeRef(_5877);
        _5877 = NOVALUE;
    }
    // SubProg format pc: 1451 op: STARTLINE (58)

    /** text.e:1700									if argtext[1] = '-' then*/
    // SubProg format pc: 1453 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_10410);
    _5878 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1457 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5878, 45)){
        _5878 = NOVALUE;
        goto L32; // [1457] 1503
    }
    _5878 = NOVALUE;
    // SubProg format pc: 1461 op: STARTLINE (58)

    /** text.e:1701										if width > length(argtext) then*/
    // SubProg format pc: 1463 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1465 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5880 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5880 = 1;
    }
    // SubProg format pc: 1468 op: GREATER_IFW_I (124)
    if (_width_10239 <= _5880)
    goto L33; // [1468] 1533
    // SubProg format pc: 1472 op: STARTLINE (58)

    /** text.e:1702											argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    // SubProg format pc: 1474 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5882 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5882 = 1;
    }
    // SubProg format pc: 1477 op: MINUS (10)
    _5883 = _width_10239 - _5882;
    _5882 = NOVALUE;
    // SubProg format pc: 1481 op: REPEAT (32)
    _5884 = Repeat(48, _5883);
    _5883 = NOVALUE;
    // SubProg format pc: 1485 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5885 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5885 = 1;
    }
    // SubProg format pc: 1488 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5886;
    RHS_Slice(_argtext_10410, 2, _5885);
    // SubProg format pc: 1493 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5886;
        concat_list[1] = _5884;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_5886);
    _5886 = NOVALUE;
    DeRefDS(_5884);
    _5884 = NOVALUE;
    // SubProg format pc: 1499 op: NOP1 (159)
    // SubProg format pc: 1500 op: ELSE (23)
    goto L33; // [1500] 1533
    // SubProg format pc: 1502 op: NOP1 (159)
L32: // addr: 1503 pc: 1502 sub: 10222 op: 159
    // SubProg format pc: 1503 op: STARTLINE (58)

    /** text.e:1705										if width > length(argtext) then*/
    // SubProg format pc: 1505 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1507 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5888 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5888 = 1;
    }
    // SubProg format pc: 1510 op: GREATER_IFW_I (124)
    if (_width_10239 <= _5888)
    goto L34; // [1510] 1532
    // SubProg format pc: 1514 op: STARTLINE (58)

    /** text.e:1706											argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1516 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5890 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5890 = 1;
    }
    // SubProg format pc: 1519 op: MINUS (10)
    _5891 = _width_10239 - _5890;
    _5890 = NOVALUE;
    // SubProg format pc: 1523 op: REPEAT (32)
    _5892 = Repeat(48, _5891);
    _5891 = NOVALUE;
    // SubProg format pc: 1527 op: CONCAT (15)
    Concat((object_ptr)&_argtext_10410, _5892, _argtext_10410);
    DeRefDS(_5892);
    _5892 = NOVALUE;
    DeRef(_5892);
    _5892 = NOVALUE;
    // SubProg format pc: 1531 op: NOP1 (159)
L34: // addr: 1532 pc: 1531 sub: 10222 op: 159
    // SubProg format pc: 1532 op: NOP1 (159)
L33: // addr: 1533 pc: 1532 sub: 10222 op: 159
    // SubProg format pc: 1533 op: NOP1 (159)
L31: // addr: 1534 pc: 1533 sub: 10222 op: 159
    // SubProg format pc: 1534 op: STARTLINE (58)

    /** text.e:1711								if arg_list[argn] > 0 then*/
    // SubProg format pc: 1536 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5894 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1540 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _5894, 0)){
        _5894 = NOVALUE;
        goto L35; // [1540] 1588
    }
    _5894 = NOVALUE;
    // SubProg format pc: 1544 op: STARTLINE (58)

    /** text.e:1712									if psign then*/
    // SubProg format pc: 1546 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1548 op: IF (20)
    if (_psign_10233 == 0)
    {
        goto L27; // [1548] 2575
    }
    else{
    }
    // SubProg format pc: 1551 op: STARTLINE (58)

    /** text.e:1713										if zfill = 0 then*/
    // SubProg format pc: 1553 op: EQUALS_IFW_I (121)
    if (_zfill_10235 != 0)
    goto L36; // [1553] 1566
    // SubProg format pc: 1557 op: STARTLINE (58)

    /** text.e:1714											argtext = '+' & argtext*/
    // SubProg format pc: 1559 op: CONCAT (15)
    Prepend(&_argtext_10410, _argtext_10410, 43);
    // SubProg format pc: 1563 op: ELSE (23)
    goto L27; // [1563] 2575
    // SubProg format pc: 1565 op: NOP1 (159)
L36: // addr: 1566 pc: 1565 sub: 10222 op: 159
    // SubProg format pc: 1566 op: STARTLINE (58)

    /** text.e:1715										elsif argtext[1] = '0' then*/
    // SubProg format pc: 1568 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_10410);
    _5898 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1572 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5898, 48)){
        _5898 = NOVALUE;
        goto L27; // [1572] 2575
    }
    _5898 = NOVALUE;
    // SubProg format pc: 1576 op: STARTLINE (58)

    /** text.e:1716											argtext[1] = '+'*/
    // SubProg format pc: 1578 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_10410);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_10410 = MAKE_SEQ(_2);
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
L35: // addr: 1588 pc: 1587 sub: 10222 op: 159
    // SubProg format pc: 1588 op: STARTLINE (58)

    /** text.e:1719								elsif arg_list[argn] < 0 then*/
    // SubProg format pc: 1590 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5900 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1594 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _5900, 0)){
        _5900 = NOVALUE;
        goto L27; // [1594] 2575
    }
    _5900 = NOVALUE;
    // SubProg format pc: 1598 op: STARTLINE (58)

    /** text.e:1720									if msign then*/
    // SubProg format pc: 1600 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1602 op: IF (20)
    if (_msign_10234 == 0)
    {
        goto L27; // [1602] 2575
    }
    else{
    }
    // SubProg format pc: 1605 op: STARTLINE (58)

    /** text.e:1721										if zfill = 0 then*/
    // SubProg format pc: 1607 op: EQUALS_IFW_I (121)
    if (_zfill_10235 != 0)
    goto L37; // [1607] 1630
    // SubProg format pc: 1611 op: STARTLINE (58)

    /** text.e:1722											argtext = '(' & argtext[2..$] & ')'*/
    // SubProg format pc: 1613 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5903 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5903 = 1;
    }
    // SubProg format pc: 1616 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5904;
    RHS_Slice(_argtext_10410, 2, _5903);
    // SubProg format pc: 1621 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5904;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_5904);
    _5904 = NOVALUE;
    // SubProg format pc: 1627 op: ELSE (23)
    goto L27; // [1627] 2575
    // SubProg format pc: 1629 op: NOP1 (159)
L37: // addr: 1630 pc: 1629 sub: 10222 op: 159
    // SubProg format pc: 1630 op: STARTLINE (58)

    /** text.e:1724											if argtext[2] = '0' then*/
    // SubProg format pc: 1632 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_10410);
    _5907 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg format pc: 1636 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5907, 48)){
        _5907 = NOVALUE;
        goto L38; // [1636] 1659
    }
    _5907 = NOVALUE;
    // SubProg format pc: 1640 op: STARTLINE (58)

    /** text.e:1725												argtext = '(' & argtext[3..$] & ')'*/
    // SubProg format pc: 1642 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5909 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5909 = 1;
    }
    // SubProg format pc: 1645 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5910;
    RHS_Slice(_argtext_10410, 3, _5909);
    // SubProg format pc: 1650 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5910;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_5910);
    _5910 = NOVALUE;
    // SubProg format pc: 1656 op: ELSE (23)
    goto L27; // [1656] 2575
    // SubProg format pc: 1658 op: NOP1 (159)
L38: // addr: 1659 pc: 1658 sub: 10222 op: 159
    // SubProg format pc: 1659 op: STARTLINE (58)

    /** text.e:1729												argtext = argtext[2..$] & ')'*/
    // SubProg format pc: 1661 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5912 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5912 = 1;
    }
    // SubProg format pc: 1664 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5913;
    RHS_Slice(_argtext_10410, 2, _5912);
    // SubProg format pc: 1669 op: CONCAT (15)
    Append(&_argtext_10410, _5913, 41);
    DeRefDS(_5913);
    _5913 = NOVALUE;
    // SubProg format pc: 1673 op: NOP1 (159)
    // SubProg format pc: 1674 op: NOP1 (159)
    // SubProg format pc: 1675 op: NOP1 (159)
    // SubProg format pc: 1676 op: NOP1 (159)
    // SubProg format pc: 1677 op: NOP1 (159)
    // SubProg format pc: 1678 op: ELSE (23)
    goto L27; // [1678] 2575
    // SubProg format pc: 1680 op: NOP1 (159)
L30: // addr: 1681 pc: 1680 sub: 10222 op: 159
    // SubProg format pc: 1681 op: STARTLINE (58)

    /** text.e:1735								argtext = sprintf("%x", arg_list[argn])*/
    // SubProg format pc: 1683 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5916 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1687 op: SPRINTF (53)
    DeRef(_argtext_10410);
    _argtext_10410 = EPrintf(-9999999, _5915, _5916);
    _5916 = NOVALUE;
    // SubProg format pc: 1691 op: STARTLINE (58)

    /** text.e:1736								if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1693 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1695 op: NOTEQ (4)
    _5918 = (_zfill_10235 != 0);
    // SubProg format pc: 1699 op: SC1_AND_IF (146)
    if (_5918 == 0) {
        goto L27; // [1699] 2575
    }
    // SubProg format pc: 1703 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1705 op: GREATER (6)
    _5920 = (_width_10239 > 0);
    // SubProg format pc: 1709 op: NOP1 (159)
    // SubProg format pc: 1710 op: IF (20)
    if (_5920 == 0)
    {
        DeRef(_5920);
        _5920 = NOVALUE;
        goto L27; // [1710] 2575
    }
    else{
        DeRef(_5920);
        _5920 = NOVALUE;
    }
    // SubProg format pc: 1713 op: STARTLINE (58)

    /** text.e:1737									if width > length(argtext) then*/
    // SubProg format pc: 1715 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1717 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5921 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5921 = 1;
    }
    // SubProg format pc: 1720 op: GREATER_IFW_I (124)
    if (_width_10239 <= _5921)
    goto L27; // [1720] 2575
    // SubProg format pc: 1724 op: STARTLINE (58)

    /** text.e:1738										argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1726 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5923 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5923 = 1;
    }
    // SubProg format pc: 1729 op: MINUS (10)
    _5924 = _width_10239 - _5923;
    _5923 = NOVALUE;
    // SubProg format pc: 1733 op: REPEAT (32)
    _5925 = Repeat(48, _5924);
    _5924 = NOVALUE;
    // SubProg format pc: 1737 op: CONCAT (15)
    Concat((object_ptr)&_argtext_10410, _5925, _argtext_10410);
    DeRefDS(_5925);
    _5925 = NOVALUE;
    DeRef(_5925);
    _5925 = NOVALUE;
    // SubProg format pc: 1741 op: NOP1 (159)
    // SubProg format pc: 1742 op: NOP1 (159)
    // SubProg format pc: 1743 op: NOP1 (159)
    // SubProg format pc: 1744 op: ELSE (23)
    goto L27; // [1744] 2575
    // SubProg format pc: 1746 op: NOP1 (159)
L29: // addr: 1747 pc: 1746 sub: 10222 op: 159
    // SubProg format pc: 1747 op: STARTLINE (58)

    /** text.e:1743						elsif atom(arg_list[argn]) then*/
    // SubProg format pc: 1749 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5927 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1753 op: IS_AN_ATOM (67)
    _5928 = IS_ATOM(_5927);
    _5927 = NOVALUE;
    // SubProg format pc: 1756 op: IF (20)
    if (_5928 == 0)
    {
        _5928 = NOVALUE;
        goto L39; // [1756] 2159
    }
    else{
        _5928 = NOVALUE;
    }
    // SubProg format pc: 1759 op: STARTLINE (58)

    /** text.e:1744							if istext then*/
    // SubProg format pc: 1761 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1763 op: IF (20)
    if (_istext_10248 == 0)
    {
        goto L3A; // [1763] 1790
    }
    else{
    }
    // SubProg format pc: 1766 op: STARTLINE (58)

    /** text.e:1745								argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(arg_list[argn])))}*/
    // SubProg format pc: 1768 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5929 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1772 op: FLOOR (83)
    if (IS_ATOM_INT(_5929))
    _5930 = e_floor(_5929);
    else
    _5930 = unary_op(FLOOR, _5929);
    _5929 = NOVALUE;
    // SubProg format pc: 1775 op: PROC (27)
    _5931 = _9abs(_5930);
    _5930 = NOVALUE;
    // SubProg format pc: 1779 op: AND_BITS (56)
    _5932 = binary_op(AND_BITS, _406, _5931);
    DeRef(_5931);
    _5931 = NOVALUE;
    // SubProg format pc: 1783 op: RIGHT_BRACE_N (31)
    _0 = _argtext_10410;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5932;
    _argtext_10410 = MAKE_SEQ(_1);
    DeRef(_0);
    _5932 = NOVALUE;
    // SubProg format pc: 1787 op: ELSE (23)
    goto L27; // [1787] 2575
    // SubProg format pc: 1789 op: NOP1 (159)
L3A: // addr: 1790 pc: 1789 sub: 10222 op: 159
    // SubProg format pc: 1790 op: STARTLINE (58)

    /** text.e:1748								if hexout then*/
    // SubProg format pc: 1792 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1794 op: IF (20)
    if (_hexout_10245 == 0)
    {
        goto L3B; // [1794] 1862
    }
    else{
    }
    // SubProg format pc: 1797 op: STARTLINE (58)

    /** text.e:1749									argtext = sprintf("%x", arg_list[argn])*/
    // SubProg format pc: 1799 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5934 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1803 op: SPRINTF (53)
    DeRef(_argtext_10410);
    _argtext_10410 = EPrintf(-9999999, _5915, _5934);
    _5934 = NOVALUE;
    // SubProg format pc: 1807 op: STARTLINE (58)

    /** text.e:1750									if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1809 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1811 op: NOTEQ (4)
    _5936 = (_zfill_10235 != 0);
    // SubProg format pc: 1815 op: SC1_AND_IF (146)
    if (_5936 == 0) {
        goto L27; // [1815] 2575
    }
    // SubProg format pc: 1819 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1821 op: GREATER (6)
    _5938 = (_width_10239 > 0);
    // SubProg format pc: 1825 op: NOP1 (159)
    // SubProg format pc: 1826 op: IF (20)
    if (_5938 == 0)
    {
        DeRef(_5938);
        _5938 = NOVALUE;
        goto L27; // [1826] 2575
    }
    else{
        DeRef(_5938);
        _5938 = NOVALUE;
    }
    // SubProg format pc: 1829 op: STARTLINE (58)

    /** text.e:1751										if width > length(argtext) then*/
    // SubProg format pc: 1831 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1833 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5939 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5939 = 1;
    }
    // SubProg format pc: 1836 op: GREATER_IFW_I (124)
    if (_width_10239 <= _5939)
    goto L27; // [1836] 2575
    // SubProg format pc: 1840 op: STARTLINE (58)

    /** text.e:1752											argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1842 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5941 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5941 = 1;
    }
    // SubProg format pc: 1845 op: MINUS (10)
    _5942 = _width_10239 - _5941;
    _5941 = NOVALUE;
    // SubProg format pc: 1849 op: REPEAT (32)
    _5943 = Repeat(48, _5942);
    _5942 = NOVALUE;
    // SubProg format pc: 1853 op: CONCAT (15)
    Concat((object_ptr)&_argtext_10410, _5943, _argtext_10410);
    DeRefDS(_5943);
    _5943 = NOVALUE;
    DeRef(_5943);
    _5943 = NOVALUE;
    // SubProg format pc: 1857 op: NOP1 (159)
    // SubProg format pc: 1858 op: NOP1 (159)
    // SubProg format pc: 1859 op: ELSE (23)
    goto L27; // [1859] 2575
    // SubProg format pc: 1861 op: NOP1 (159)
L3B: // addr: 1862 pc: 1861 sub: 10222 op: 159
    // SubProg format pc: 1862 op: STARTLINE (58)

    /** text.e:1756									argtext = trim(sprintf("%15.15g", arg_list[argn]))*/
    // SubProg format pc: 1864 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5946 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 1868 op: SPRINTF (53)
    _5947 = EPrintf(-9999999, _5945, _5946);
    _5946 = NOVALUE;
    // SubProg format pc: 1872 op: PROC (27)
    RefDS(_4573);
    _0 = _argtext_10410;
    _argtext_10410 = _15trim(_5947, _4573, 0);
    DeRef(_0);
    _5947 = NOVALUE;
    // SubProg format pc: 1878 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1880 op: STARTLINE (58)

    /** text.e:1758									while ep != 0 with entry do*/
    // SubProg format pc: 1882 op: ELSE (23)
    goto L3C; // [1882] 1905
    // SubProg format pc: 1884 op: NOPWHILE (158)
L3D: // addr: 1885 pc: 1884 sub: 10222 op: 158
    // SubProg format pc: 1885 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1887 op: NOTEQ_IFW_I (122)
    if (_ep_10254 == 0)
    goto L3E; // [1887] 1917
    // SubProg format pc: 1891 op: STARTLINE (58)

    /** text.e:1759										argtext = remove(argtext, ep+2)*/
    // SubProg format pc: 1893 op: PLUS (11)
    _5950 = _ep_10254 + 2;
    if ((object)((uintptr_t)_5950 + (uintptr_t)HIGH_BITS) >= 0){
        _5950 = NewDouble((eudouble)_5950);
    }
    // SubProg format pc: 1897 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_10410);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_5950)) ? _5950 : (object)(DBL_PTR(_5950)->dbl);
        int stop = (IS_ATOM_INT(_5950)) ? _5950 : (object)(DBL_PTR(_5950)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_10410), start, &_argtext_10410 );
            }
            else Tail(SEQ_PTR(_argtext_10410), stop+1, &_argtext_10410);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_10410), start, &_argtext_10410);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_10410 = Remove_elements(start, stop, (SEQ_PTR(_argtext_10410)->ref == 1));
        }
    }
    DeRef(_5950);
    _5950 = NOVALUE;
    _5950 = NOVALUE;
    // SubProg format pc: 1902 op: STARTLINE (58)

    /** text.e:1760									entry*/
    // SubProg format pc: 1904 op: NOP1 (159)
L3C: // addr: 1905 pc: 1904 sub: 10222 op: 159
    // SubProg format pc: 1905 op: STARTLINE (58)

    /** text.e:1761										ep = match("e+0", argtext)*/
    // SubProg format pc: 1907 op: MATCH_FROM (177)
    _ep_10254 = e_match_from(_5952, _argtext_10410, 1);
    // SubProg format pc: 1912 op: STARTLINE (58)

    /** text.e:1762									end while*/
    // SubProg format pc: 1914 op: ENDWHILE (22)
    goto L3D; // [1914] 1885
    // SubProg format pc: 1916 op: NOP1 (159)
L3E: // addr: 1917 pc: 1916 sub: 10222 op: 159
    // SubProg format pc: 1917 op: STARTLINE (58)

    /** text.e:1763									if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1919 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1921 op: NOTEQ (4)
    _5954 = (_zfill_10235 != 0);
    // SubProg format pc: 1925 op: SC1_AND_IF (146)
    if (_5954 == 0) {
        goto L3F; // [1925] 2010
    }
    // SubProg format pc: 1929 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1931 op: GREATER (6)
    _5956 = (_width_10239 > 0);
    // SubProg format pc: 1935 op: NOP1 (159)
    // SubProg format pc: 1936 op: IF (20)
    if (_5956 == 0)
    {
        DeRef(_5956);
        _5956 = NOVALUE;
        goto L3F; // [1936] 2010
    }
    else{
        DeRef(_5956);
        _5956 = NOVALUE;
    }
    // SubProg format pc: 1939 op: STARTLINE (58)

    /** text.e:1764										if width > length(argtext) then*/
    // SubProg format pc: 1941 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1943 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5957 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5957 = 1;
    }
    // SubProg format pc: 1946 op: GREATER_IFW_I (124)
    if (_width_10239 <= _5957)
    goto L40; // [1946] 2009
    // SubProg format pc: 1950 op: STARTLINE (58)

    /** text.e:1765											if argtext[1] = '-' then*/
    // SubProg format pc: 1952 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_10410);
    _5959 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1956 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5959, 45)){
        _5959 = NOVALUE;
        goto L41; // [1956] 1990
    }
    _5959 = NOVALUE;
    // SubProg format pc: 1960 op: STARTLINE (58)

    /** text.e:1766												argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    // SubProg format pc: 1962 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5961 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5961 = 1;
    }
    // SubProg format pc: 1965 op: MINUS (10)
    _5962 = _width_10239 - _5961;
    _5961 = NOVALUE;
    // SubProg format pc: 1969 op: REPEAT (32)
    _5963 = Repeat(48, _5962);
    _5962 = NOVALUE;
    // SubProg format pc: 1973 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5964 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5964 = 1;
    }
    // SubProg format pc: 1976 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5965;
    RHS_Slice(_argtext_10410, 2, _5964);
    // SubProg format pc: 1981 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _5965;
        concat_list[1] = _5963;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_5965);
    _5965 = NOVALUE;
    DeRefDS(_5963);
    _5963 = NOVALUE;
    // SubProg format pc: 1987 op: ELSE (23)
    goto L42; // [1987] 2008
    // SubProg format pc: 1989 op: NOP1 (159)
L41: // addr: 1990 pc: 1989 sub: 10222 op: 159
    // SubProg format pc: 1990 op: STARTLINE (58)

    /** text.e:1768												argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1992 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5967 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5967 = 1;
    }
    // SubProg format pc: 1995 op: MINUS (10)
    _5968 = _width_10239 - _5967;
    _5967 = NOVALUE;
    // SubProg format pc: 1999 op: REPEAT (32)
    _5969 = Repeat(48, _5968);
    _5968 = NOVALUE;
    // SubProg format pc: 2003 op: CONCAT (15)
    Concat((object_ptr)&_argtext_10410, _5969, _argtext_10410);
    DeRefDS(_5969);
    _5969 = NOVALUE;
    DeRef(_5969);
    _5969 = NOVALUE;
    // SubProg format pc: 2007 op: NOP1 (159)
L42: // addr: 2008 pc: 2007 sub: 10222 op: 159
    // SubProg format pc: 2008 op: NOP1 (159)
L40: // addr: 2009 pc: 2008 sub: 10222 op: 159
    // SubProg format pc: 2009 op: NOP1 (159)
L3F: // addr: 2010 pc: 2009 sub: 10222 op: 159
    // SubProg format pc: 2010 op: STARTLINE (58)

    /** text.e:1772									if arg_list[argn] > 0 then*/
    // SubProg format pc: 2012 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5971 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2016 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _5971, 0)){
        _5971 = NOVALUE;
        goto L43; // [2016] 2064
    }
    _5971 = NOVALUE;
    // SubProg format pc: 2020 op: STARTLINE (58)

    /** text.e:1773										if psign  then*/
    // SubProg format pc: 2022 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2024 op: IF (20)
    if (_psign_10233 == 0)
    {
        goto L27; // [2024] 2575
    }
    else{
    }
    // SubProg format pc: 2027 op: STARTLINE (58)

    /** text.e:1774											if zfill = 0 then*/
    // SubProg format pc: 2029 op: EQUALS_IFW_I (121)
    if (_zfill_10235 != 0)
    goto L44; // [2029] 2042
    // SubProg format pc: 2033 op: STARTLINE (58)

    /** text.e:1775												argtext = '+' & argtext*/
    // SubProg format pc: 2035 op: CONCAT (15)
    Prepend(&_argtext_10410, _argtext_10410, 43);
    // SubProg format pc: 2039 op: ELSE (23)
    goto L27; // [2039] 2575
    // SubProg format pc: 2041 op: NOP1 (159)
L44: // addr: 2042 pc: 2041 sub: 10222 op: 159
    // SubProg format pc: 2042 op: STARTLINE (58)

    /** text.e:1776											elsif argtext[1] = '0' then*/
    // SubProg format pc: 2044 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_10410);
    _5975 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 2048 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5975, 48)){
        _5975 = NOVALUE;
        goto L27; // [2048] 2575
    }
    _5975 = NOVALUE;
    // SubProg format pc: 2052 op: STARTLINE (58)

    /** text.e:1777												argtext[1] = '+'*/
    // SubProg format pc: 2054 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_10410);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_10410 = MAKE_SEQ(_2);
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
L43: // addr: 2064 pc: 2063 sub: 10222 op: 159
    // SubProg format pc: 2064 op: STARTLINE (58)

    /** text.e:1780									elsif arg_list[argn] < 0 then*/
    // SubProg format pc: 2066 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5977 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2070 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _5977, 0)){
        _5977 = NOVALUE;
        goto L27; // [2070] 2575
    }
    _5977 = NOVALUE;
    // SubProg format pc: 2074 op: STARTLINE (58)

    /** text.e:1781										if msign then*/
    // SubProg format pc: 2076 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2078 op: IF (20)
    if (_msign_10234 == 0)
    {
        goto L27; // [2078] 2575
    }
    else{
    }
    // SubProg format pc: 2081 op: STARTLINE (58)

    /** text.e:1782											if zfill = 0 then*/
    // SubProg format pc: 2083 op: EQUALS_IFW_I (121)
    if (_zfill_10235 != 0)
    goto L45; // [2083] 2106
    // SubProg format pc: 2087 op: STARTLINE (58)

    /** text.e:1783												argtext = '(' & argtext[2..$] & ')'*/
    // SubProg format pc: 2089 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5980 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5980 = 1;
    }
    // SubProg format pc: 2092 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5981;
    RHS_Slice(_argtext_10410, 2, _5980);
    // SubProg format pc: 2097 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5981;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_5981);
    _5981 = NOVALUE;
    // SubProg format pc: 2103 op: ELSE (23)
    goto L27; // [2103] 2575
    // SubProg format pc: 2105 op: NOP1 (159)
L45: // addr: 2106 pc: 2105 sub: 10222 op: 159
    // SubProg format pc: 2106 op: STARTLINE (58)

    /** text.e:1785												if argtext[2] = '0' then*/
    // SubProg format pc: 2108 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_10410);
    _5983 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg format pc: 2112 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5983, 48)){
        _5983 = NOVALUE;
        goto L46; // [2112] 2135
    }
    _5983 = NOVALUE;
    // SubProg format pc: 2116 op: STARTLINE (58)

    /** text.e:1786													argtext = '(' & argtext[3..$] & ')'*/
    // SubProg format pc: 2118 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5985 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5985 = 1;
    }
    // SubProg format pc: 2121 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5986;
    RHS_Slice(_argtext_10410, 3, _5985);
    // SubProg format pc: 2126 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _5986;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_5986);
    _5986 = NOVALUE;
    // SubProg format pc: 2132 op: ELSE (23)
    goto L27; // [2132] 2575
    // SubProg format pc: 2134 op: NOP1 (159)
L46: // addr: 2135 pc: 2134 sub: 10222 op: 159
    // SubProg format pc: 2135 op: STARTLINE (58)

    /** text.e:1788													argtext = argtext[2..$] & ')'*/
    // SubProg format pc: 2137 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _5988 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _5988 = 1;
    }
    // SubProg format pc: 2140 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5989;
    RHS_Slice(_argtext_10410, 2, _5988);
    // SubProg format pc: 2145 op: CONCAT (15)
    Append(&_argtext_10410, _5989, 41);
    DeRefDS(_5989);
    _5989 = NOVALUE;
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
L39: // addr: 2159 pc: 2158 sub: 10222 op: 159
    // SubProg format pc: 2159 op: STARTLINE (58)

    /** text.e:1797							if alt != 0 and length(arg_list[argn]) = 2 then*/
    // SubProg format pc: 2161 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2163 op: NOTEQ (4)
    _5991 = (_alt_10238 != 0);
    // SubProg format pc: 2167 op: SC1_AND_IF (146)
    if (_5991 == 0) {
        goto L47; // [2167] 2486
    }
    // SubProg format pc: 2171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5993 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2175 op: LENGTH (42)
    if (IS_SEQUENCE(_5993)){
            _5994 = SEQ_PTR(_5993)->length;
    }
    else {
        _5994 = 1;
    }
    _5993 = NOVALUE;
    // SubProg format pc: 2178 op: EQUALS (3)
    _5995 = (_5994 == 2);
    _5994 = NOVALUE;
    // SubProg format pc: 2182 op: NOP1 (159)
    // SubProg format pc: 2183 op: IF (20)
    if (_5995 == 0)
    {
        DeRef(_5995);
        _5995 = NOVALUE;
        goto L47; // [2183] 2486
    }
    else{
        DeRef(_5995);
        _5995 = NOVALUE;
    }
    // SubProg format pc: 2186 op: STARTLINE (58)

    /** text.e:1798								object tempv*/
    // SubProg format pc: 2188 op: STARTLINE (58)

    /** text.e:1799								if atom(prevargv) then*/
    // SubProg format pc: 2190 op: IS_AN_ATOM (67)
    _5996 = IS_ATOM(_prevargv_10249);
    // SubProg format pc: 2193 op: IF (20)
    if (_5996 == 0)
    {
        _5996 = NOVALUE;
        goto L48; // [2193] 2229
    }
    else{
        _5996 = NOVALUE;
    }
    // SubProg format pc: 2196 op: STARTLINE (58)

    /** text.e:1800									if prevargv != 1 then*/
    // SubProg format pc: 2198 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _prevargv_10249, 1)){
        goto L49; // [2198] 2215
    }
    // SubProg format pc: 2202 op: STARTLINE (58)

    /** text.e:1801										tempv = arg_list[argn][1]*/
    // SubProg format pc: 2204 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _5998 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2208 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_10642);
    _2 = (object)SEQ_PTR(_5998);
    _tempv_10642 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_10642);
    _5998 = NOVALUE;
    // SubProg format pc: 2212 op: ELSE (23)
    goto L4A; // [2212] 2263
    // SubProg format pc: 2214 op: NOP1 (159)
L49: // addr: 2215 pc: 2214 sub: 10222 op: 159
    // SubProg format pc: 2215 op: STARTLINE (58)

    /** text.e:1803										tempv = arg_list[argn][2]*/
    // SubProg format pc: 2217 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _6000 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2221 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_10642);
    _2 = (object)SEQ_PTR(_6000);
    _tempv_10642 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_10642);
    _6000 = NOVALUE;
    // SubProg format pc: 2225 op: NOP1 (159)
    // SubProg format pc: 2226 op: ELSE (23)
    goto L4A; // [2226] 2263
    // SubProg format pc: 2228 op: NOP1 (159)
L48: // addr: 2229 pc: 2228 sub: 10222 op: 159
    // SubProg format pc: 2229 op: STARTLINE (58)

    /** text.e:1806									if length(prevargv) = 0 then*/
    // SubProg format pc: 2231 op: LENGTH (42)
    if (IS_SEQUENCE(_prevargv_10249)){
            _6002 = SEQ_PTR(_prevargv_10249)->length;
    }
    else {
        _6002 = 1;
    }
    // SubProg format pc: 2234 op: EQUALS_IFW_I (121)
    if (_6002 != 0)
    goto L4B; // [2234] 2251
    // SubProg format pc: 2238 op: STARTLINE (58)

    /** text.e:1807										tempv = arg_list[argn][1]*/
    // SubProg format pc: 2240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _6004 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2244 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_10642);
    _2 = (object)SEQ_PTR(_6004);
    _tempv_10642 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_10642);
    _6004 = NOVALUE;
    // SubProg format pc: 2248 op: ELSE (23)
    goto L4C; // [2248] 2262
    // SubProg format pc: 2250 op: NOP1 (159)
L4B: // addr: 2251 pc: 2250 sub: 10222 op: 159
    // SubProg format pc: 2251 op: STARTLINE (58)

    /** text.e:1809										tempv = arg_list[argn][2]*/
    // SubProg format pc: 2253 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _6006 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2257 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_10642);
    _2 = (object)SEQ_PTR(_6006);
    _tempv_10642 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_10642);
    _6006 = NOVALUE;
    // SubProg format pc: 2261 op: NOP1 (159)
L4C: // addr: 2262 pc: 2261 sub: 10222 op: 159
    // SubProg format pc: 2262 op: NOP1 (159)
L4A: // addr: 2263 pc: 2262 sub: 10222 op: 159
    // SubProg format pc: 2263 op: STARTLINE (58)

    /** text.e:1813								if string(tempv) then*/
    // SubProg format pc: 2265 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2267 op: PROC (27)
    Ref(_tempv_10642);
    _6008 = _8string(_tempv_10642);
    // SubProg format pc: 2271 op: IF (20)
    if (_6008 == 0) {
        DeRef(_6008);
        _6008 = NOVALUE;
        goto L4D; // [2271] 2284
    }
    else {
        if (!IS_ATOM_INT(_6008) && DBL_PTR(_6008)->dbl == 0.0){
            DeRef(_6008);
            _6008 = NOVALUE;
            goto L4D; // [2271] 2284
        }
        DeRef(_6008);
        _6008 = NOVALUE;
    }
    DeRef(_6008);
    _6008 = NOVALUE;
    // SubProg format pc: 2274 op: STARTLINE (58)

    /** text.e:1814									argtext = tempv*/
    // SubProg format pc: 2276 op: ASSIGN (18)
    Ref(_tempv_10642);
    DeRef(_argtext_10410);
    _argtext_10410 = _tempv_10642;
    // SubProg format pc: 2279 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2281 op: ELSE (23)
    goto L4E; // [2281] 2481
    // SubProg format pc: 2283 op: NOP1 (159)
L4D: // addr: 2284 pc: 2283 sub: 10222 op: 159
    // SubProg format pc: 2284 op: STARTLINE (58)

    /** text.e:1815								elsif integer(tempv) then*/
    // SubProg format pc: 2286 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_tempv_10642))
    _6009 = 1;
    else if (IS_ATOM_DBL(_tempv_10642))
    _6009 = IS_ATOM_INT(DoubleToInt(_tempv_10642));
    else
    _6009 = 0;
    // SubProg format pc: 2289 op: IF (20)
    if (_6009 == 0)
    {
        _6009 = NOVALUE;
        goto L4F; // [2289] 2355
    }
    else{
        _6009 = NOVALUE;
    }
    // SubProg format pc: 2292 op: STARTLINE (58)

    /** text.e:1816									if istext then*/
    // SubProg format pc: 2294 op: IF (20)
    if (_istext_10248 == 0)
    {
        goto L50; // [2294] 2314
    }
    else{
    }
    // SubProg format pc: 2297 op: STARTLINE (58)

    /** text.e:1817										argtext = {and_bits(0xFFFF_FFFF, math:abs(tempv))}*/
    // SubProg format pc: 2299 op: PROC (27)
    Ref(_tempv_10642);
    _6010 = _9abs(_tempv_10642);
    // SubProg format pc: 2303 op: AND_BITS (56)
    _6011 = binary_op(AND_BITS, _406, _6010);
    DeRef(_6010);
    _6010 = NOVALUE;
    // SubProg format pc: 2307 op: RIGHT_BRACE_N (31)
    _0 = _argtext_10410;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6011;
    _argtext_10410 = MAKE_SEQ(_1);
    DeRef(_0);
    _6011 = NOVALUE;
    // SubProg format pc: 2311 op: ELSE (23)
    goto L4E; // [2311] 2481
    // SubProg format pc: 2313 op: NOP1 (159)
L50: // addr: 2314 pc: 2313 sub: 10222 op: 159
    // SubProg format pc: 2314 op: STARTLINE (58)

    /** text.e:1819									elsif bwz != 0 and tempv = 0 then*/
    // SubProg format pc: 2316 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2318 op: NOTEQ (4)
    _6013 = (_bwz_10236 != 0);
    // SubProg format pc: 2322 op: SC1_AND_IF (146)
    if (_6013 == 0) {
        goto L51; // [2322] 2345
    }
    // SubProg format pc: 2326 op: EQUALS (3)
    if (IS_ATOM_INT(_tempv_10642)) {
        _6015 = (_tempv_10642 == 0);
    }
    else {
        _6015 = binary_op(EQUALS, _tempv_10642, 0);
    }
    // SubProg format pc: 2330 op: NOP1 (159)
    // SubProg format pc: 2331 op: IF (20)
    if (_6015 == 0) {
        DeRef(_6015);
        _6015 = NOVALUE;
        goto L51; // [2331] 2345
    }
    else {
        if (!IS_ATOM_INT(_6015) && DBL_PTR(_6015)->dbl == 0.0){
            DeRef(_6015);
            _6015 = NOVALUE;
            goto L51; // [2331] 2345
        }
        DeRef(_6015);
        _6015 = NOVALUE;
    }
    DeRef(_6015);
    _6015 = NOVALUE;
    // SubProg format pc: 2334 op: STARTLINE (58)

    /** text.e:1820										argtext = repeat(' ', width)*/
    // SubProg format pc: 2336 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2338 op: REPEAT (32)
    DeRef(_argtext_10410);
    _argtext_10410 = Repeat(32, _width_10239);
    // SubProg format pc: 2342 op: ELSE (23)
    goto L4E; // [2342] 2481
    // SubProg format pc: 2344 op: NOP1 (159)
L51: // addr: 2345 pc: 2344 sub: 10222 op: 159
    // SubProg format pc: 2345 op: STARTLINE (58)

    /** text.e:1822										argtext = sprintf("%d", tempv)*/
    // SubProg format pc: 2347 op: SPRINTF (53)
    DeRef(_argtext_10410);
    _argtext_10410 = EPrintf(-9999999, _1509, _tempv_10642);
    // SubProg format pc: 2351 op: NOP1 (159)
    // SubProg format pc: 2352 op: ELSE (23)
    goto L4E; // [2352] 2481
    // SubProg format pc: 2354 op: NOP1 (159)
L4F: // addr: 2355 pc: 2354 sub: 10222 op: 159
    // SubProg format pc: 2355 op: STARTLINE (58)

    /** text.e:1825								elsif atom(tempv) then*/
    // SubProg format pc: 2357 op: IS_AN_ATOM (67)
    _6018 = IS_ATOM(_tempv_10642);
    // SubProg format pc: 2360 op: IF (20)
    if (_6018 == 0)
    {
        _6018 = NOVALUE;
        goto L52; // [2360] 2437
    }
    else{
        _6018 = NOVALUE;
    }
    // SubProg format pc: 2363 op: STARTLINE (58)

    /** text.e:1826									if istext then*/
    // SubProg format pc: 2365 op: IF (20)
    if (_istext_10248 == 0)
    {
        goto L53; // [2365] 2388
    }
    else{
    }
    // SubProg format pc: 2368 op: STARTLINE (58)

    /** text.e:1827										argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(tempv)))}*/
    // SubProg format pc: 2370 op: FLOOR (83)
    if (IS_ATOM_INT(_tempv_10642))
    _6019 = e_floor(_tempv_10642);
    else
    _6019 = unary_op(FLOOR, _tempv_10642);
    // SubProg format pc: 2373 op: PROC (27)
    _6020 = _9abs(_6019);
    _6019 = NOVALUE;
    // SubProg format pc: 2377 op: AND_BITS (56)
    _6021 = binary_op(AND_BITS, _406, _6020);
    DeRef(_6020);
    _6020 = NOVALUE;
    // SubProg format pc: 2381 op: RIGHT_BRACE_N (31)
    _0 = _argtext_10410;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6021;
    _argtext_10410 = MAKE_SEQ(_1);
    DeRef(_0);
    _6021 = NOVALUE;
    // SubProg format pc: 2385 op: ELSE (23)
    goto L4E; // [2385] 2481
    // SubProg format pc: 2387 op: NOP1 (159)
L53: // addr: 2388 pc: 2387 sub: 10222 op: 159
    // SubProg format pc: 2388 op: STARTLINE (58)

    /** text.e:1828									elsif bwz != 0 and tempv = 0 then*/
    // SubProg format pc: 2390 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2392 op: NOTEQ (4)
    _6023 = (_bwz_10236 != 0);
    // SubProg format pc: 2396 op: SC1_AND_IF (146)
    if (_6023 == 0) {
        goto L54; // [2396] 2419
    }
    // SubProg format pc: 2400 op: EQUALS (3)
    if (IS_ATOM_INT(_tempv_10642)) {
        _6025 = (_tempv_10642 == 0);
    }
    else {
        _6025 = binary_op(EQUALS, _tempv_10642, 0);
    }
    // SubProg format pc: 2404 op: NOP1 (159)
    // SubProg format pc: 2405 op: IF (20)
    if (_6025 == 0) {
        DeRef(_6025);
        _6025 = NOVALUE;
        goto L54; // [2405] 2419
    }
    else {
        if (!IS_ATOM_INT(_6025) && DBL_PTR(_6025)->dbl == 0.0){
            DeRef(_6025);
            _6025 = NOVALUE;
            goto L54; // [2405] 2419
        }
        DeRef(_6025);
        _6025 = NOVALUE;
    }
    DeRef(_6025);
    _6025 = NOVALUE;
    // SubProg format pc: 2408 op: STARTLINE (58)

    /** text.e:1829										argtext = repeat(' ', width)*/
    // SubProg format pc: 2410 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2412 op: REPEAT (32)
    DeRef(_argtext_10410);
    _argtext_10410 = Repeat(32, _width_10239);
    // SubProg format pc: 2416 op: ELSE (23)
    goto L4E; // [2416] 2481
    // SubProg format pc: 2418 op: NOP1 (159)
L54: // addr: 2419 pc: 2418 sub: 10222 op: 159
    // SubProg format pc: 2419 op: STARTLINE (58)

    /** text.e:1831										argtext = trim(sprintf("%15.15g", tempv))*/
    // SubProg format pc: 2421 op: SPRINTF (53)
    _6027 = EPrintf(-9999999, _5945, _tempv_10642);
    // SubProg format pc: 2425 op: PROC (27)
    RefDS(_4573);
    _0 = _argtext_10410;
    _argtext_10410 = _15trim(_6027, _4573, 0);
    DeRef(_0);
    _6027 = NOVALUE;
    // SubProg format pc: 2431 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2433 op: NOP1 (159)
    // SubProg format pc: 2434 op: ELSE (23)
    goto L4E; // [2434] 2481
    // SubProg format pc: 2436 op: NOP1 (159)
L52: // addr: 2437 pc: 2436 sub: 10222 op: 159
    // SubProg format pc: 2437 op: STARTLINE (58)

    /** text.e:1834									argtext = pretty:pretty_sprint( tempv,*/
    // SubProg format pc: 2439 op: RIGHT_BRACE_N (31)
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1509);
    ((intptr_t*)_2)[5] = _1509;
    RefDS(_6029);
    ((intptr_t*)_2)[6] = _6029;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _6030 = MAKE_SEQ(_1);
    // SubProg format pc: 2452 op: ASSIGN (18)
    DeRef(_options_inlined_pretty_sprint_at_2453_10696);
    _options_inlined_pretty_sprint_at_2453_10696 = _6030;
    _6030 = NOVALUE;
    // SubProg format pc: 2455 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2457 op: STARTLINE (58)

    /** pretty.e:364		pretty_printing = 0*/
    // SubProg format pc: 2459 op: ASSIGN_I (113)
    _25pretty_printing_8731 = 0;
    // SubProg format pc: 2462 op: STARTLINE (58)

    /** pretty.e:365		pretty( x, options )*/
    // SubProg format pc: 2464 op: PROC (27)
    Ref(_tempv_10642);
    RefDS(_options_inlined_pretty_sprint_at_2453_10696);
    _25pretty(_tempv_10642, _options_inlined_pretty_sprint_at_2453_10696);
    // SubProg format pc: 2468 op: STARTLINE (58)

    /** pretty.e:366		return pretty_line*/
    // SubProg format pc: 2470 op: GLOBAL_INIT_CHECK (109)
    // SubProg format pc: 2472 op: ASSIGN (18)
    RefDS(_25pretty_line_8734);
    DeRef(_argtext_10410);
    _argtext_10410 = _25pretty_line_8734;
    // SubProg format pc: 2475 op: NOP1 (159)
    // SubProg format pc: 2476 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-pretty_sprint from format @ 2453

// block var options_inlined_pretty_sprint_at_2453_10696
    DeRef(_options_inlined_pretty_sprint_at_2453_10696);
    _options_inlined_pretty_sprint_at_2453_10696 = NOVALUE;
    // SubProg format pc: 2478 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2480 op: NOP1 (159)
L4E: // addr: 2481 pc: 2480 sub: 10222 op: 159
    // SubProg format pc: 2481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tempv_10642
    DeRef(_tempv_10642);
    _tempv_10642 = NOVALUE;
    // SubProg format pc: 2483 op: ELSE (23)
    goto L55; // [2483] 2562
    // SubProg format pc: 2485 op: NOP1 (159)
L47: // addr: 2486 pc: 2485 sub: 10222 op: 159
    // SubProg format pc: 2486 op: STARTLINE (58)

    /** text.e:1839								argtext = pretty:pretty_sprint( arg_list[argn],*/
    // SubProg format pc: 2488 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _6031 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    // SubProg format pc: 2492 op: RIGHT_BRACE_N (31)
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1509);
    ((intptr_t*)_2)[5] = _1509;
    RefDS(_6029);
    ((intptr_t*)_2)[6] = _6029;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _6032 = MAKE_SEQ(_1);
    // SubProg format pc: 2505 op: ASSIGN (18)
    Ref(_6031);
    DeRef(_x_inlined_pretty_sprint_at_2506_10702);
    _x_inlined_pretty_sprint_at_2506_10702 = _6031;
    _6031 = NOVALUE;
    // SubProg format pc: 2508 op: ASSIGN (18)
    DeRef(_options_inlined_pretty_sprint_at_2509_10703);
    _options_inlined_pretty_sprint_at_2509_10703 = _6032;
    _6032 = NOVALUE;
    // SubProg format pc: 2511 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2513 op: STARTLINE (58)

    /** pretty.e:364		pretty_printing = 0*/
    // SubProg format pc: 2515 op: ASSIGN_I (113)
    _25pretty_printing_8731 = 0;
    // SubProg format pc: 2518 op: STARTLINE (58)

    /** pretty.e:365		pretty( x, options )*/
    // SubProg format pc: 2520 op: PROC (27)
    Ref(_x_inlined_pretty_sprint_at_2506_10702);
    RefDS(_options_inlined_pretty_sprint_at_2509_10703);
    _25pretty(_x_inlined_pretty_sprint_at_2506_10702, _options_inlined_pretty_sprint_at_2509_10703);
    // SubProg format pc: 2524 op: STARTLINE (58)

    /** pretty.e:366		return pretty_line*/
    // SubProg format pc: 2526 op: GLOBAL_INIT_CHECK (109)
    // SubProg format pc: 2528 op: ASSIGN (18)
    RefDS(_25pretty_line_8734);
    DeRef(_argtext_10410);
    _argtext_10410 = _25pretty_line_8734;
    // SubProg format pc: 2531 op: NOP1 (159)
    // SubProg format pc: 2532 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-pretty_sprint from format @ 2506

// block var x_inlined_pretty_sprint_at_2506_10702
    DeRef(_x_inlined_pretty_sprint_at_2506_10702);
    _x_inlined_pretty_sprint_at_2506_10702 = NOVALUE;

// block var options_inlined_pretty_sprint_at_2509_10703
    DeRef(_options_inlined_pretty_sprint_at_2509_10703);
    _options_inlined_pretty_sprint_at_2509_10703 = NOVALUE;
    // SubProg format pc: 2534 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2536 op: NOP1 (159)
    // SubProg format pc: 2537 op: STARTLINE (58)

    /** text.e:1844							while ep != 0 with entry do*/
    // SubProg format pc: 2539 op: ELSE (23)
    goto L55; // [2539] 2562
    // SubProg format pc: 2541 op: NOPWHILE (158)
L56: // addr: 2542 pc: 2541 sub: 10222 op: 158
    // SubProg format pc: 2542 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2544 op: NOTEQ_IFW_I (122)
    if (_ep_10254 == 0)
    goto L57; // [2544] 2574
    // SubProg format pc: 2548 op: STARTLINE (58)

    /** text.e:1845								argtext = remove(argtext, ep+2)*/
    // SubProg format pc: 2550 op: PLUS (11)
    _6034 = _ep_10254 + 2;
    if ((object)((uintptr_t)_6034 + (uintptr_t)HIGH_BITS) >= 0){
        _6034 = NewDouble((eudouble)_6034);
    }
    // SubProg format pc: 2554 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_10410);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_6034)) ? _6034 : (object)(DBL_PTR(_6034)->dbl);
        int stop = (IS_ATOM_INT(_6034)) ? _6034 : (object)(DBL_PTR(_6034)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_10410), start, &_argtext_10410 );
            }
            else Tail(SEQ_PTR(_argtext_10410), stop+1, &_argtext_10410);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_10410), start, &_argtext_10410);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_10410 = Remove_elements(start, stop, (SEQ_PTR(_argtext_10410)->ref == 1));
        }
    }
    DeRef(_6034);
    _6034 = NOVALUE;
    _6034 = NOVALUE;
    // SubProg format pc: 2559 op: STARTLINE (58)

    /** text.e:1846							entry*/
    // SubProg format pc: 2561 op: NOP1 (159)
L55: // addr: 2562 pc: 2561 sub: 10222 op: 159
    // SubProg format pc: 2562 op: STARTLINE (58)

    /** text.e:1847								ep = match("e+0", argtext)*/
    // SubProg format pc: 2564 op: MATCH_FROM (177)
    _ep_10254 = e_match_from(_5952, _argtext_10410, 1);
    // SubProg format pc: 2569 op: STARTLINE (58)

    /** text.e:1848							end while*/
    // SubProg format pc: 2571 op: ENDWHILE (22)
    goto L56; // [2571] 2542
    // SubProg format pc: 2573 op: NOP1 (159)
L57: // addr: 2574 pc: 2573 sub: 10222 op: 159
    // SubProg format pc: 2574 op: NOP1 (159)
L27: // addr: 2575 pc: 2574 sub: 10222 op: 159
    // SubProg format pc: 2575 op: STARTLINE (58)

    /** text.e:1850		    			currargv = arg_list[argn]*/
    // SubProg format pc: 2577 op: RHS_SUBS_CHECK (92)
    DeRef(_currargv_10250);
    _2 = (object)SEQ_PTR(_arg_list_10225);
    _currargv_10250 = (object)*(((s1_ptr)_2)->base + _argn_10242);
    Ref(_currargv_10250);
    // SubProg format pc: 2581 op: NOP1 (159)
L24: // addr: 2582 pc: 2581 sub: 10222 op: 159
    // SubProg format pc: 2582 op: STARTLINE (58)

    /** text.e:1854	    			if length(argtext) > 0 then*/
    // SubProg format pc: 2584 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6038 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6038 = 1;
    }
    // SubProg format pc: 2587 op: GREATER_IFW_I (124)
    if (_6038 <= 0)
    goto L58; // [2587] 3357
    // SubProg format pc: 2591 op: STARTLINE (58)

    /** text.e:1855	    				switch cap do*/
    // SubProg format pc: 2593 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2595 op: SWITCH_I (193)
    _0 = _cap_10231;
    switch ( _0 ){ 
        // SubProg format pc: 2600 op: STARTLINE (58)

        /** text.e:1856	    					case 'u' then*/
        // SubProg format pc: 2602 op: CASE (186)
        case 117:
        // SubProg format pc: 2604 op: STARTLINE (58)

        /** text.e:1857	    						argtext = upper(argtext)*/
        // SubProg format pc: 2606 op: PROC (27)
        RefDS(_argtext_10410);
        _0 = _argtext_10410;
        _argtext_10410 = _15upper(_argtext_10410);
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
        RefDS(_argtext_10410);
        _0 = _argtext_10410;
        _argtext_10410 = _15lower(_argtext_10410);
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
        RefDS(_argtext_10410);
        _0 = _argtext_10410;
        _argtext_10410 = _15proper(_argtext_10410);
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
        _cap_10231 = _cap_10231;
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
        DeRefi(_msg_inlined_crash_at_2660_10726);
        _msg_inlined_crash_at_2660_10726 = EPrintf(-9999999, _6045, _5);
        // SubProg format pc: 2665 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg format pc: 2667 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_2660_10726);
        // SubProg format pc: 2670 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg format pc: 2672 op: ELSE (23)
        goto L5A; // [2672] 2675
        // SubProg format pc: 2674 op: NOP1 (159)
L5A: // addr: 2675 pc: 2674 sub: 10222 op: 159
        // SubProg format pc: 2675 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from format @ 2660

// block var msg_inlined_crash_at_2660_10726
        DeRefi(_msg_inlined_crash_at_2660_10726);
        _msg_inlined_crash_at_2660_10726 = NOVALUE;
        // SubProg format pc: 2677 op: NOPSWITCH (187)
    ;}L59: // addr: 2678 pc: 2677 sub: 10222 op: 187
    // SubProg format pc: 2678 op: STARTLINE (58)

    /** text.e:1871						if atom(currargv) then*/
    // SubProg format pc: 2680 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2682 op: IS_AN_ATOM (67)
    _6046 = IS_ATOM(_currargv_10250);
    // SubProg format pc: 2685 op: IF (20)
    if (_6046 == 0)
    {
        _6046 = NOVALUE;
        goto L5B; // [2685] 2824
    }
    else{
        _6046 = NOVALUE;
    }
    // SubProg format pc: 2688 op: STARTLINE (58)

    /** text.e:1872							if find('e', argtext) = 0 then*/
    // SubProg format pc: 2690 op: FIND_FROM (176)
    _6047 = find_from(101, _argtext_10410, 1);
    // SubProg format pc: 2695 op: EQUALS_IFW_I (121)
    if (_6047 != 0)
    goto L5C; // [2695] 2823
    // SubProg format pc: 2699 op: STARTLINE (58)

    /** text.e:1874								if decs != -1 then*/
    // SubProg format pc: 2701 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2703 op: NOTEQ_IFW_I (122)
    if (_decs_10240 == -1)
    goto L5D; // [2703] 2822
    // SubProg format pc: 2707 op: STARTLINE (58)

    /** text.e:1875									pos = find('.', argtext)*/
    // SubProg format pc: 2709 op: FIND_FROM (176)
    _pos_10241 = find_from(46, _argtext_10410, 1);
    // SubProg format pc: 2714 op: STARTLINE (58)

    /** text.e:1876									if pos then*/
    // SubProg format pc: 2716 op: IF (20)
    if (_pos_10241 == 0)
    {
        goto L5E; // [2716] 2801
    }
    else{
    }
    // SubProg format pc: 2719 op: STARTLINE (58)

    /** text.e:1877										if decs = 0 then*/
    // SubProg format pc: 2721 op: EQUALS_IFW_I (121)
    if (_decs_10240 != 0)
    goto L5F; // [2721] 2739
    // SubProg format pc: 2725 op: STARTLINE (58)

    /** text.e:1878											argtext = argtext [1 .. pos-1 ]*/
    // SubProg format pc: 2727 op: MINUS (10)
    _6052 = _pos_10241 - 1;
    // SubProg format pc: 2731 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_argtext_10410, 1, _6052);
    // SubProg format pc: 2736 op: ELSE (23)
    goto L60; // [2736] 2821
    // SubProg format pc: 2738 op: NOP1 (159)
L5F: // addr: 2739 pc: 2738 sub: 10222 op: 159
    // SubProg format pc: 2739 op: STARTLINE (58)

    /** text.e:1880											pos = length(argtext) - pos*/
    // SubProg format pc: 2741 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6054 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6054 = 1;
    }
    // SubProg format pc: 2744 op: MINUS_I (116)
    _pos_10241 = _6054 - _pos_10241;
    _6054 = NOVALUE;
    // SubProg format pc: 2748 op: STARTLINE (58)

    /** text.e:1881											if pos > decs then*/
    // SubProg format pc: 2750 op: GREATER_IFW_I (124)
    if (_pos_10241 <= _decs_10240)
    goto L61; // [2750] 2775
    // SubProg format pc: 2754 op: STARTLINE (58)

    /** text.e:1882												argtext = argtext[ 1 .. $ - pos + decs ]*/
    // SubProg format pc: 2756 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6057 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6057 = 1;
    }
    // SubProg format pc: 2759 op: MINUS (10)
    _6058 = _6057 - _pos_10241;
    if ((object)((uintptr_t)_6058 +(uintptr_t) HIGH_BITS) >= 0){
        _6058 = NewDouble((eudouble)_6058);
    }
    _6057 = NOVALUE;
    // SubProg format pc: 2763 op: PLUS (11)
    if (IS_ATOM_INT(_6058)) {
        _6059 = _6058 + _decs_10240;
    }
    else {
        _6059 = NewDouble(DBL_PTR(_6058)->dbl + (eudouble)_decs_10240);
    }
    DeRef(_6058);
    _6058 = NOVALUE;
    // SubProg format pc: 2767 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_argtext_10410, 1, _6059);
    // SubProg format pc: 2772 op: ELSE (23)
    goto L60; // [2772] 2821
    // SubProg format pc: 2774 op: NOP1 (159)
L61: // addr: 2775 pc: 2774 sub: 10222 op: 159
    // SubProg format pc: 2775 op: STARTLINE (58)

    /** text.e:1883											elsif pos < decs then*/
    // SubProg format pc: 2777 op: LESS_IFW_I (119)
    if (_pos_10241 >= _decs_10240)
    goto L60; // [2777] 2821
    // SubProg format pc: 2781 op: STARTLINE (58)

    /** text.e:1884												argtext = argtext & repeat('0', decs - pos)*/
    // SubProg format pc: 2783 op: MINUS (10)
    _6062 = _decs_10240 - _pos_10241;
    // SubProg format pc: 2787 op: REPEAT (32)
    _6063 = Repeat(48, _6062);
    _6062 = NOVALUE;
    // SubProg format pc: 2791 op: CONCAT (15)
    Concat((object_ptr)&_argtext_10410, _argtext_10410, _6063);
    DeRefDS(_6063);
    _6063 = NOVALUE;
    // SubProg format pc: 2795 op: NOP1 (159)
    // SubProg format pc: 2796 op: NOP1 (159)
    // SubProg format pc: 2797 op: NOP1 (159)
    // SubProg format pc: 2798 op: ELSE (23)
    goto L60; // [2798] 2821
    // SubProg format pc: 2800 op: NOP1 (159)
L5E: // addr: 2801 pc: 2800 sub: 10222 op: 159
    // SubProg format pc: 2801 op: STARTLINE (58)

    /** text.e:1887									elsif decs > 0 then*/
    // SubProg format pc: 2803 op: GREATER_IFW_I (124)
    if (_decs_10240 <= 0)
    goto L62; // [2803] 2820
    // SubProg format pc: 2807 op: STARTLINE (58)

    /** text.e:1888										argtext = argtext & '.' & repeat('0', decs)*/
    // SubProg format pc: 2809 op: REPEAT (32)
    _6066 = Repeat(48, _decs_10240);
    // SubProg format pc: 2813 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _6066;
        concat_list[1] = 46;
        concat_list[2] = _argtext_10410;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_6066);
    _6066 = NOVALUE;
    // SubProg format pc: 2819 op: NOP1 (159)
L62: // addr: 2820 pc: 2819 sub: 10222 op: 159
    // SubProg format pc: 2820 op: NOP1 (159)
L60: // addr: 2821 pc: 2820 sub: 10222 op: 159
    // SubProg format pc: 2821 op: NOP1 (159)
L5D: // addr: 2822 pc: 2821 sub: 10222 op: 159
    // SubProg format pc: 2822 op: NOP1 (159)
L5C: // addr: 2823 pc: 2822 sub: 10222 op: 159
    // SubProg format pc: 2823 op: NOP1 (159)
L5B: // addr: 2824 pc: 2823 sub: 10222 op: 159
    // SubProg format pc: 2824 op: STARTLINE (58)

    /** text.e:1895	    				if align = 0 then*/
    // SubProg format pc: 2826 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2828 op: EQUALS_IFW_I (121)
    if (_align_10232 != 0)
    goto L63; // [2828] 2855
    // SubProg format pc: 2832 op: STARTLINE (58)

    /** text.e:1896	    					if atom(currargv) then*/
    // SubProg format pc: 2834 op: IS_AN_ATOM (67)
    _6069 = IS_ATOM(_currargv_10250);
    // SubProg format pc: 2837 op: IF (20)
    if (_6069 == 0)
    {
        _6069 = NOVALUE;
        goto L64; // [2837] 2848
    }
    else{
        _6069 = NOVALUE;
    }
    // SubProg format pc: 2840 op: STARTLINE (58)

    /** text.e:1897	    						align = '>'*/
    // SubProg format pc: 2842 op: ASSIGN_I (113)
    _align_10232 = 62;
    // SubProg format pc: 2845 op: ELSE (23)
    goto L65; // [2845] 2854
    // SubProg format pc: 2847 op: NOP1 (159)
L64: // addr: 2848 pc: 2847 sub: 10222 op: 159
    // SubProg format pc: 2848 op: STARTLINE (58)

    /** text.e:1899	    						align = '<'*/
    // SubProg format pc: 2850 op: ASSIGN_I (113)
    _align_10232 = 60;
    // SubProg format pc: 2853 op: NOP1 (159)
L65: // addr: 2854 pc: 2853 sub: 10222 op: 159
    // SubProg format pc: 2854 op: NOP1 (159)
L63: // addr: 2855 pc: 2854 sub: 10222 op: 159
    // SubProg format pc: 2855 op: STARTLINE (58)

    /** text.e:1903	    				if atom(currargv) then*/
    // SubProg format pc: 2857 op: IS_AN_ATOM (67)
    _6070 = IS_ATOM(_currargv_10250);
    // SubProg format pc: 2860 op: IF (20)
    if (_6070 == 0)
    {
        _6070 = NOVALUE;
        goto L66; // [2860] 3061
    }
    else{
        _6070 = NOVALUE;
    }
    // SubProg format pc: 2863 op: STARTLINE (58)

    /** text.e:1904		    				if tsep != 0 and zfill = 0 then*/
    // SubProg format pc: 2865 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2867 op: NOTEQ (4)
    _6071 = (_tsep_10247 != 0);
    // SubProg format pc: 2871 op: SC1_AND_IF (146)
    if (_6071 == 0) {
        goto L67; // [2871] 3058
    }
    // SubProg format pc: 2875 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2877 op: EQUALS (3)
    _6073 = (_zfill_10235 == 0);
    // SubProg format pc: 2881 op: NOP1 (159)
    // SubProg format pc: 2882 op: IF (20)
    if (_6073 == 0)
    {
        DeRef(_6073);
        _6073 = NOVALUE;
        goto L67; // [2882] 3058
    }
    else{
        DeRef(_6073);
        _6073 = NOVALUE;
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
    if (_binout_10246 != 0) {
        goto L68; // [2895] 2904
    }
    // SubProg format pc: 2899 op: NOP1 (159)
    // SubProg format pc: 2900 op: IF (20)
    if (_hexout_10245 == 0)
    {
        goto L69; // [2900] 2912
    }
    else{
    }
    // SubProg format pc: 2903 op: NOP1 (159)
L68: // addr: 2904 pc: 2903 sub: 10222 op: 159
    // SubProg format pc: 2904 op: STARTLINE (58)

    /** text.e:1910		    						dist = 4*/
    // SubProg format pc: 2906 op: ASSIGN_I (113)
    _dist_10770 = 4;
    // SubProg format pc: 2909 op: ELSE (23)
    goto L6A; // [2909] 2918
    // SubProg format pc: 2911 op: NOP1 (159)
L69: // addr: 2912 pc: 2911 sub: 10222 op: 159
    // SubProg format pc: 2912 op: STARTLINE (58)

    /** text.e:1912		    						dist = 3*/
    // SubProg format pc: 2914 op: ASSIGN_I (113)
    _dist_10770 = 3;
    // SubProg format pc: 2917 op: NOP1 (159)
L6A: // addr: 2918 pc: 2917 sub: 10222 op: 159
    // SubProg format pc: 2918 op: STARTLINE (58)

    /** text.e:1914		    					bracketed = (argtext[1] = '(')*/
    // SubProg format pc: 2920 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_10410);
    _6075 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 2924 op: EQUALS (3)
    if (IS_ATOM_INT(_6075)) {
        _bracketed_10771 = (_6075 == 40);
    }
    else {
        _bracketed_10771 = binary_op(EQUALS, _6075, 40);
    }
    _6075 = NOVALUE;
    // SubProg format pc: 2928 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_bracketed_10771)) {
        _1 = (object)(DBL_PTR(_bracketed_10771)->dbl);
        DeRefDS(_bracketed_10771);
        _bracketed_10771 = _1;
    }
    // SubProg format pc: 2930 op: STARTLINE (58)

    /** text.e:1915		    					if bracketed then*/
    // SubProg format pc: 2932 op: IF (20)
    if (_bracketed_10771 == 0)
    {
        goto L6B; // [2932] 2950
    }
    else{
    }
    // SubProg format pc: 2935 op: STARTLINE (58)

    /** text.e:1916		    						argtext = argtext[2 .. $-1]*/
    // SubProg format pc: 2937 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6077 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6077 = 1;
    }
    // SubProg format pc: 2940 op: MINUS (10)
    _6078 = _6077 - 1;
    _6077 = NOVALUE;
    // SubProg format pc: 2944 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_argtext_10410, 2, _6078);
    // SubProg format pc: 2949 op: NOP1 (159)
L6B: // addr: 2950 pc: 2949 sub: 10222 op: 159
    // SubProg format pc: 2950 op: STARTLINE (58)

    /** text.e:1918		    					dpos = find('.', argtext)*/
    // SubProg format pc: 2952 op: FIND_FROM (176)
    _dpos_10769 = find_from(46, _argtext_10410, 1);
    // SubProg format pc: 2957 op: STARTLINE (58)

    /** text.e:1919		    					if dpos = 0 then*/
    // SubProg format pc: 2959 op: EQUALS_IFW_I (121)
    if (_dpos_10769 != 0)
    goto L6C; // [2959] 2975
    // SubProg format pc: 2963 op: STARTLINE (58)

    /** text.e:1920		    						dpos = length(argtext) + 1*/
    // SubProg format pc: 2965 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6082 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6082 = 1;
    }
    // SubProg format pc: 2968 op: PLUS1_I (117)
    _dpos_10769 = _6082 + 1;
    _6082 = NOVALUE;
    // SubProg format pc: 2972 op: ELSE (23)
    goto L6D; // [2972] 2989
    // SubProg format pc: 2974 op: NOP1 (159)
L6C: // addr: 2975 pc: 2974 sub: 10222 op: 159
    // SubProg format pc: 2975 op: STARTLINE (58)

    /** text.e:1922		    						if tsep = '.' then*/
    // SubProg format pc: 2977 op: EQUALS_IFW_I (121)
    if (_tsep_10247 != 46)
    goto L6E; // [2977] 2988
    // SubProg format pc: 2981 op: STARTLINE (58)

    /** text.e:1923		    							argtext[dpos] = ','*/
    // SubProg format pc: 2983 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_10410);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_10410 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _dpos_10769);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 44;
    DeRef(_1);
    // SubProg format pc: 2987 op: NOP1 (159)
L6E: // addr: 2988 pc: 2987 sub: 10222 op: 159
    // SubProg format pc: 2988 op: NOP1 (159)
L6D: // addr: 2989 pc: 2988 sub: 10222 op: 159
    // SubProg format pc: 2989 op: STARTLINE (58)

    /** text.e:1926		    					while dpos > dist do*/
    // SubProg format pc: 2991 op: NOP2 (110)
    // SubProg format pc: 2993 op: NOPWHILE (158)
L6F: // addr: 2994 pc: 2993 sub: 10222 op: 158
    // SubProg format pc: 2994 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2996 op: GREATER_IFW_I (124)
    if (_dpos_10769 <= _dist_10770)
    goto L70; // [2996] 3043
    // SubProg format pc: 3000 op: STARTLINE (58)

    /** text.e:1927		    						dpos -= dist*/
    // SubProg format pc: 3002 op: MINUS_I (116)
    _dpos_10769 = _dpos_10769 - _dist_10770;
    // SubProg format pc: 3006 op: STARTLINE (58)

    /** text.e:1928		    						if dpos > 1 then*/
    // SubProg format pc: 3008 op: GREATER_IFW_I (124)
    if (_dpos_10769 <= 1)
    goto L6F; // [3008] 2994
    // SubProg format pc: 3012 op: STARTLINE (58)

    /** text.e:1929		    							argtext = argtext[1.. dpos - 1] & tsep & argtext[dpos .. $]*/
    // SubProg format pc: 3014 op: MINUS (10)
    _6088 = _dpos_10769 - 1;
    // SubProg format pc: 3018 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6089;
    RHS_Slice(_argtext_10410, 1, _6088);
    // SubProg format pc: 3023 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6090 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6090 = 1;
    }
    // SubProg format pc: 3026 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6091;
    RHS_Slice(_argtext_10410, _dpos_10769, _6090);
    // SubProg format pc: 3031 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _6091;
        concat_list[1] = _tsep_10247;
        concat_list[2] = _6089;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_6091);
    _6091 = NOVALUE;
    DeRefDS(_6089);
    _6089 = NOVALUE;
    // SubProg format pc: 3037 op: NOP1 (159)
    // SubProg format pc: 3038 op: STARTLINE (58)

    /** text.e:1931		    					end while*/
    // SubProg format pc: 3040 op: ENDWHILE (22)
    goto L6F; // [3040] 2994
    // SubProg format pc: 3042 op: NOP1 (159)
L70: // addr: 3043 pc: 3042 sub: 10222 op: 159
    // SubProg format pc: 3043 op: STARTLINE (58)

    /** text.e:1932		    					if bracketed then*/
    // SubProg format pc: 3045 op: IF (20)
    if (_bracketed_10771 == 0)
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
        concat_list[1] = _argtext_10410;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    // SubProg format pc: 3056 op: NOP1 (159)
L71: // addr: 3057 pc: 3056 sub: 10222 op: 159
    // SubProg format pc: 3057 op: NOP1 (159)
L67: // addr: 3058 pc: 3057 sub: 10222 op: 159
    // SubProg format pc: 3058 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var dpos_10769

// block var dist_10770

// block var bracketed_10771
    // SubProg format pc: 3060 op: NOP1 (159)
L66: // addr: 3061 pc: 3060 sub: 10222 op: 159
    // SubProg format pc: 3061 op: STARTLINE (58)

    /** text.e:1938	    				if width <= 0 then*/
    // SubProg format pc: 3063 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3065 op: LESSEQ_IFW_I (123)
    if (_width_10239 > 0)
    goto L72; // [3065] 3075
    // SubProg format pc: 3069 op: STARTLINE (58)

    /** text.e:1939	    					width = length(argtext)*/
    // SubProg format pc: 3071 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _width_10239 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _width_10239 = 1;
    }
    // SubProg format pc: 3074 op: NOP1 (159)
L72: // addr: 3075 pc: 3074 sub: 10222 op: 159
    // SubProg format pc: 3075 op: STARTLINE (58)

    /** text.e:1943	    				if width < length(argtext) then*/
    // SubProg format pc: 3077 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6096 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6096 = 1;
    }
    // SubProg format pc: 3080 op: LESS_IFW_I (119)
    if (_width_10239 >= _6096)
    goto L73; // [3080] 3211
    // SubProg format pc: 3084 op: STARTLINE (58)

    /** text.e:1944	    					if align = '>' then*/
    // SubProg format pc: 3086 op: EQUALS_IFW_I (121)
    if (_align_10232 != 62)
    goto L74; // [3086] 3114
    // SubProg format pc: 3090 op: STARTLINE (58)

    /** text.e:1945	    						argtext = argtext[ $ - width + 1 .. $]*/
    // SubProg format pc: 3092 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6099 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6099 = 1;
    }
    // SubProg format pc: 3095 op: MINUS (10)
    _6100 = _6099 - _width_10239;
    if ((object)((uintptr_t)_6100 +(uintptr_t) HIGH_BITS) >= 0){
        _6100 = NewDouble((eudouble)_6100);
    }
    _6099 = NOVALUE;
    // SubProg format pc: 3099 op: PLUS1 (93)
    if (IS_ATOM_INT(_6100)) {
        _6101 = _6100 + 1;
        if (_6101 > MAXINT){
            _6101 = NewDouble((eudouble)_6101);
        }
    }
    else
    _6101 = binary_op(PLUS, 1, _6100);
    DeRef(_6100);
    _6100 = NOVALUE;
    // SubProg format pc: 3103 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6102 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6102 = 1;
    }
    // SubProg format pc: 3106 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_argtext_10410, _6101, _6102);
    // SubProg format pc: 3111 op: ELSE (23)
    goto L75; // [3111] 3348
    // SubProg format pc: 3113 op: NOP1 (159)
L74: // addr: 3114 pc: 3113 sub: 10222 op: 159
    // SubProg format pc: 3114 op: STARTLINE (58)

    /** text.e:1946	    					elsif align = 'c' then*/
    // SubProg format pc: 3116 op: EQUALS_IFW_I (121)
    if (_align_10232 != 99)
    goto L76; // [3116] 3200
    // SubProg format pc: 3120 op: STARTLINE (58)

    /** text.e:1947	    						pos = length(argtext) - width*/
    // SubProg format pc: 3122 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6105 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6105 = 1;
    }
    // SubProg format pc: 3125 op: MINUS_I (116)
    _pos_10241 = _6105 - _width_10239;
    _6105 = NOVALUE;
    // SubProg format pc: 3129 op: STARTLINE (58)

    /** text.e:1948	    						if remainder(pos, 2) = 0 then*/
    // SubProg format pc: 3131 op: REMAINDER (71)
    _6107 = (_pos_10241 % 2);
    // SubProg format pc: 3135 op: EQUALS_IFW_I (121)
    if (_6107 != 0)
    goto L77; // [3135] 3168
    // SubProg format pc: 3139 op: STARTLINE (58)

    /** text.e:1949	    							pos = pos / 2*/
    // SubProg format pc: 3141 op: DIV2 (98)
    if (_pos_10241 & 1) {
        _pos_10241 = NewDouble((_pos_10241 >> 1) + 0.5);
    }
    else
    _pos_10241 = _pos_10241 >> 1;
    // SubProg format pc: 3145 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_10241)) {
        _1 = (object)(DBL_PTR(_pos_10241)->dbl);
        DeRefDS(_pos_10241);
        _pos_10241 = _1;
    }
    // SubProg format pc: 3147 op: STARTLINE (58)

    /** text.e:1950	    							argtext = argtext[ pos + 1 .. $ - pos ]*/
    // SubProg format pc: 3149 op: PLUS1 (93)
    _6110 = _pos_10241 + 1;
    if (_6110 > MAXINT){
        _6110 = NewDouble((eudouble)_6110);
    }
    // SubProg format pc: 3153 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6111 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6111 = 1;
    }
    // SubProg format pc: 3156 op: MINUS (10)
    _6112 = _6111 - _pos_10241;
    _6111 = NOVALUE;
    // SubProg format pc: 3160 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_argtext_10410, _6110, _6112);
    // SubProg format pc: 3165 op: ELSE (23)
    goto L75; // [3165] 3348
    // SubProg format pc: 3167 op: NOP1 (159)
L77: // addr: 3168 pc: 3167 sub: 10222 op: 159
    // SubProg format pc: 3168 op: STARTLINE (58)

    /** text.e:1952	    							pos = floor(pos / 2)*/
    // SubProg format pc: 3170 op: FLOOR_DIV2 (66)
    _pos_10241 = _pos_10241 >> 1;
    // SubProg format pc: 3174 op: STARTLINE (58)

    /** text.e:1953	    							argtext = argtext[ pos + 1 .. $ - pos - 1]*/
    // SubProg format pc: 3176 op: PLUS1 (93)
    _6115 = _pos_10241 + 1;
    if (_6115 > MAXINT){
        _6115 = NewDouble((eudouble)_6115);
    }
    // SubProg format pc: 3180 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6116 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6116 = 1;
    }
    // SubProg format pc: 3183 op: MINUS (10)
    _6117 = _6116 - _pos_10241;
    if ((object)((uintptr_t)_6117 +(uintptr_t) HIGH_BITS) >= 0){
        _6117 = NewDouble((eudouble)_6117);
    }
    _6116 = NOVALUE;
    // SubProg format pc: 3187 op: MINUS (10)
    if (IS_ATOM_INT(_6117)) {
        _6118 = _6117 - 1;
    }
    else {
        _6118 = NewDouble(DBL_PTR(_6117)->dbl - (eudouble)1);
    }
    DeRef(_6117);
    _6117 = NOVALUE;
    // SubProg format pc: 3191 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_argtext_10410, _6115, _6118);
    // SubProg format pc: 3196 op: NOP1 (159)
    // SubProg format pc: 3197 op: ELSE (23)
    goto L75; // [3197] 3348
    // SubProg format pc: 3199 op: NOP1 (159)
L76: // addr: 3200 pc: 3199 sub: 10222 op: 159
    // SubProg format pc: 3200 op: STARTLINE (58)

    /** text.e:1956	    						argtext = argtext[ 1 .. width]*/
    // SubProg format pc: 3202 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_10410;
    RHS_Slice(_argtext_10410, 1, _width_10239);
    // SubProg format pc: 3207 op: NOP1 (159)
    // SubProg format pc: 3208 op: ELSE (23)
    goto L75; // [3208] 3348
    // SubProg format pc: 3210 op: NOP1 (159)
L73: // addr: 3211 pc: 3210 sub: 10222 op: 159
    // SubProg format pc: 3211 op: STARTLINE (58)

    /** text.e:1958	    				elsif width > length(argtext) then*/
    // SubProg format pc: 3213 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6121 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6121 = 1;
    }
    // SubProg format pc: 3216 op: GREATER_IFW_I (124)
    if (_width_10239 <= _6121)
    goto L78; // [3216] 3347
    // SubProg format pc: 3220 op: STARTLINE (58)

    /** text.e:1959							if align = '>' then*/
    // SubProg format pc: 3222 op: EQUALS_IFW_I (121)
    if (_align_10232 != 62)
    goto L79; // [3222] 3246
    // SubProg format pc: 3226 op: STARTLINE (58)

    /** text.e:1960								argtext = repeat(' ', width - length(argtext)) & argtext*/
    // SubProg format pc: 3228 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6124 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6124 = 1;
    }
    // SubProg format pc: 3231 op: MINUS (10)
    _6125 = _width_10239 - _6124;
    _6124 = NOVALUE;
    // SubProg format pc: 3235 op: REPEAT (32)
    _6126 = Repeat(32, _6125);
    _6125 = NOVALUE;
    // SubProg format pc: 3239 op: CONCAT (15)
    Concat((object_ptr)&_argtext_10410, _6126, _argtext_10410);
    DeRefDS(_6126);
    _6126 = NOVALUE;
    DeRef(_6126);
    _6126 = NOVALUE;
    // SubProg format pc: 3243 op: ELSE (23)
    goto L7A; // [3243] 3346
    // SubProg format pc: 3245 op: NOP1 (159)
L79: // addr: 3246 pc: 3245 sub: 10222 op: 159
    // SubProg format pc: 3246 op: STARTLINE (58)

    /** text.e:1961	    					elsif align = 'c' then*/
    // SubProg format pc: 3248 op: EQUALS_IFW_I (121)
    if (_align_10232 != 99)
    goto L7B; // [3248] 3328
    // SubProg format pc: 3252 op: STARTLINE (58)

    /** text.e:1962	    						pos = width - length(argtext)*/
    // SubProg format pc: 3254 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6129 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6129 = 1;
    }
    // SubProg format pc: 3257 op: MINUS_I (116)
    _pos_10241 = _width_10239 - _6129;
    _6129 = NOVALUE;
    // SubProg format pc: 3261 op: STARTLINE (58)

    /** text.e:1963	    						if remainder(pos, 2) = 0 then*/
    // SubProg format pc: 3263 op: REMAINDER (71)
    _6131 = (_pos_10241 % 2);
    // SubProg format pc: 3267 op: EQUALS_IFW_I (121)
    if (_6131 != 0)
    goto L7C; // [3267] 3298
    // SubProg format pc: 3271 op: STARTLINE (58)

    /** text.e:1964	    							pos = pos / 2*/
    // SubProg format pc: 3273 op: DIV2 (98)
    if (_pos_10241 & 1) {
        _pos_10241 = NewDouble((_pos_10241 >> 1) + 0.5);
    }
    else
    _pos_10241 = _pos_10241 >> 1;
    // SubProg format pc: 3277 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_10241)) {
        _1 = (object)(DBL_PTR(_pos_10241)->dbl);
        DeRefDS(_pos_10241);
        _pos_10241 = _1;
    }
    // SubProg format pc: 3279 op: STARTLINE (58)

    /** text.e:1965	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos)*/
    // SubProg format pc: 3281 op: REPEAT (32)
    _6134 = Repeat(32, _pos_10241);
    // SubProg format pc: 3285 op: REPEAT (32)
    _6135 = Repeat(32, _pos_10241);
    // SubProg format pc: 3289 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _6135;
        concat_list[1] = _argtext_10410;
        concat_list[2] = _6134;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_6135);
    _6135 = NOVALUE;
    DeRefDS(_6134);
    _6134 = NOVALUE;
    // SubProg format pc: 3295 op: ELSE (23)
    goto L7A; // [3295] 3346
    // SubProg format pc: 3297 op: NOP1 (159)
L7C: // addr: 3298 pc: 3297 sub: 10222 op: 159
    // SubProg format pc: 3298 op: STARTLINE (58)

    /** text.e:1967	    							pos = floor(pos / 2)*/
    // SubProg format pc: 3300 op: FLOOR_DIV2 (66)
    _pos_10241 = _pos_10241 >> 1;
    // SubProg format pc: 3304 op: STARTLINE (58)

    /** text.e:1968	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos + 1)*/
    // SubProg format pc: 3306 op: REPEAT (32)
    _6138 = Repeat(32, _pos_10241);
    // SubProg format pc: 3310 op: PLUS1 (93)
    _6139 = _pos_10241 + 1;
    // SubProg format pc: 3314 op: REPEAT (32)
    _6140 = Repeat(32, _6139);
    _6139 = NOVALUE;
    // SubProg format pc: 3318 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _6140;
        concat_list[1] = _argtext_10410;
        concat_list[2] = _6138;
        Concat_N((object_ptr)&_argtext_10410, concat_list, 3);
    }
    DeRefDS(_6140);
    _6140 = NOVALUE;
    DeRefDS(_6138);
    _6138 = NOVALUE;
    // SubProg format pc: 3324 op: NOP1 (159)
    // SubProg format pc: 3325 op: ELSE (23)
    goto L7A; // [3325] 3346
    // SubProg format pc: 3327 op: NOP1 (159)
L7B: // addr: 3328 pc: 3327 sub: 10222 op: 159
    // SubProg format pc: 3328 op: STARTLINE (58)

    /** text.e:1972								argtext = argtext & repeat(' ', width - length(argtext))*/
    // SubProg format pc: 3330 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_10410)){
            _6142 = SEQ_PTR(_argtext_10410)->length;
    }
    else {
        _6142 = 1;
    }
    // SubProg format pc: 3333 op: MINUS (10)
    _6143 = _width_10239 - _6142;
    _6142 = NOVALUE;
    // SubProg format pc: 3337 op: REPEAT (32)
    _6144 = Repeat(32, _6143);
    _6143 = NOVALUE;
    // SubProg format pc: 3341 op: CONCAT (15)
    Concat((object_ptr)&_argtext_10410, _argtext_10410, _6144);
    DeRefDS(_6144);
    _6144 = NOVALUE;
    // SubProg format pc: 3345 op: NOP1 (159)
L7A: // addr: 3346 pc: 3345 sub: 10222 op: 159
    // SubProg format pc: 3346 op: NOP1 (159)
L78: // addr: 3347 pc: 3346 sub: 10222 op: 159
    // SubProg format pc: 3347 op: NOP1 (159)
L75: // addr: 3348 pc: 3347 sub: 10222 op: 159
    // SubProg format pc: 3348 op: STARTLINE (58)

    /** text.e:1975	    				result &= argtext*/
    // SubProg format pc: 3350 op: CONCAT (15)
    Concat((object_ptr)&_result_10226, _result_10226, _argtext_10410);
    // SubProg format pc: 3354 op: ELSE (23)
    goto L7D; // [3354] 3370
    // SubProg format pc: 3356 op: NOP1 (159)
L58: // addr: 3357 pc: 3356 sub: 10222 op: 159
    // SubProg format pc: 3357 op: STARTLINE (58)

    /** text.e:1978	    				if spacer then*/
    // SubProg format pc: 3359 op: IF (20)
    if (_spacer_10237 == 0)
    {
        goto L7E; // [3359] 3369
    }
    else{
    }
    // SubProg format pc: 3362 op: STARTLINE (58)

    /** text.e:1979	    					result &= ' '*/
    // SubProg format pc: 3364 op: CONCAT (15)
    Append(&_result_10226, _result_10226, 32);
    // SubProg format pc: 3368 op: NOP1 (159)
L7E: // addr: 3369 pc: 3368 sub: 10222 op: 159
    // SubProg format pc: 3369 op: NOP1 (159)
L7D: // addr: 3370 pc: 3369 sub: 10222 op: 159
    // SubProg format pc: 3370 op: STARTLINE (58)

    /** text.e:1983	   				if trimming then*/
    // SubProg format pc: 3372 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3374 op: IF (20)
    if (_trimming_10244 == 0)
    {
        goto L7F; // [3374] 3388
    }
    else{
    }
    // SubProg format pc: 3377 op: STARTLINE (58)

    /** text.e:1984	   					result = trim(result)*/
    // SubProg format pc: 3379 op: PROC (27)
    RefDS(_result_10226);
    RefDS(_4573);
    _0 = _result_10226;
    _result_10226 = _15trim(_result_10226, _4573, 0);
    DeRefDS(_0);
    // SubProg format pc: 3385 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 3387 op: NOP1 (159)
L7F: // addr: 3388 pc: 3387 sub: 10222 op: 159
    // SubProg format pc: 3388 op: STARTLINE (58)

    /** text.e:1987	    			tend = 0*/
    // SubProg format pc: 3390 op: ASSIGN_I (113)
    _tend_10230 = 0;
    // SubProg format pc: 3393 op: STARTLINE (58)

    /** text.e:1988			    	prevargv = currargv*/
    // SubProg format pc: 3395 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3397 op: ASSIGN (18)
    Ref(_currargv_10250);
    DeRef(_prevargv_10249);
    _prevargv_10249 = _currargv_10250;
    // SubProg format pc: 3400 op: NOP1 (159)
L1F: // addr: 3401 pc: 3400 sub: 10222 op: 159
    // SubProg format pc: 3401 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var argtext_10410
    DeRef(_argtext_10410);
    _argtext_10410 = NOVALUE;
    // SubProg format pc: 3403 op: NOP1 (159)
    // SubProg format pc: 3404 op: STARTLINE (58)

    /** text.e:1991	    end while*/
    // SubProg format pc: 3406 op: ENDWHILE (22)
    goto L2; // [3406] 60
    // SubProg format pc: 3408 op: NOP1 (159)
L3: // addr: 3409 pc: 3408 sub: 10222 op: 159
    // SubProg format pc: 3409 op: STARTLINE (58)

    /** text.e:1993		return result*/
    // SubProg format pc: 3411 op: RETURNF (28)

// Exiting block BLOCK: format

// block var format_pattern_10224
    DeRefDS(_format_pattern_10224);

// block var arg_list_10225
    DeRef(_arg_list_10225);

// block var in_token_10227

// block var tch_10228

// block var i_10229

// block var tend_10230

// block var cap_10231

// block var align_10232

// block var psign_10233

// block var msign_10234

// block var zfill_10235

// block var bwz_10236

// block var spacer_10237

// block var alt_10238

// block var width_10239

// block var decs_10240

// block var pos_10241

// block var argn_10242

// block var argl_10243

// block var trimming_10244

// block var hexout_10245

// block var binout_10246

// block var tsep_10247

// block var istext_10248

// block var prevargv_10249
    DeRef(_prevargv_10249);

// block var currargv_10250
    DeRef(_currargv_10250);

// block var idname_10251
    DeRef(_idname_10251);

// block var envsym_10252
    DeRef(_envsym_10252);

// block var envvar_10253
    DeRefi(_envvar_10253);

// block var ep_10254
    DeRef(_6131);
    _6131 = NOVALUE;
    DeRef(_5799);
    _5799 = NOVALUE;
    DeRef(_5847);
    _5847 = NOVALUE;
    DeRef(_6088);
    _6088 = NOVALUE;
    DeRef(_6071);
    _6071 = NOVALUE;
    DeRef(_6013);
    _6013 = NOVALUE;
    DeRef(_5954);
    _5954 = NOVALUE;
    DeRef(_6059);
    _6059 = NOVALUE;
    DeRef(_5826);
    _5826 = NOVALUE;
    DeRef(_6115);
    _6115 = NOVALUE;
    _5993 = NOVALUE;
    DeRef(_5838);
    _5838 = NOVALUE;
    DeRef(_6110);
    _6110 = NOVALUE;
    DeRef(_6118);
    _6118 = NOVALUE;
    DeRef(_5936);
    _5936 = NOVALUE;
    DeRef(_5991);
    _5991 = NOVALUE;
    DeRef(_5918);
    _5918 = NOVALUE;
    DeRef(_6112);
    _6112 = NOVALUE;
    DeRef(_6107);
    _6107 = NOVALUE;
    DeRef(_5775);
    _5775 = NOVALUE;
    DeRef(_6023);
    _6023 = NOVALUE;
    DeRef(_5857);
    _5857 = NOVALUE;
    DeRef(_5875);
    _5875 = NOVALUE;
    DeRef(_6052);
    _6052 = NOVALUE;
    DeRef(_6101);
    _6101 = NOVALUE;
    DeRef(_6078);
    _6078 = NOVALUE;
    return _result_10226;
    // SubProg format pc: 3415 op: BADRETURNF (43)
    ;
}



// 0x12CB16A5
