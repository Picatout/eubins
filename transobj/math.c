// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _14abs(object _a_1212)
{
    object _t_1213 = NOVALUE;
    object _486 = NOVALUE; // 1231 486
    object _485 = NOVALUE; // 1230 485
    object _484 = NOVALUE; // 1228 484
// skipping _483  name type: 0
    object _482 = NOVALUE; // 1225 482
// skipping _481  name type: 0
    object _480 = NOVALUE; // 1222 480
    object _479 = NOVALUE; // 1219 479
// skipping _478  name type: 0
    object _477 = NOVALUE; // 1215 477
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg abs pc: 1 op: STARTLINE (58)

    /** math.e:58		if atom(a) then*/
    // SubProg abs pc: 3 op: IS_AN_ATOM (67)
    _477 = IS_ATOM(_a_1212);
    // SubProg abs pc: 6 op: IF (20)
    if (_477 == 0)
    {
        _477 = NOVALUE;
        goto L1; // [6] 35
    }
    else{
        _477 = NOVALUE;
    }
    // SubProg abs pc: 9 op: STARTLINE (58)

    /** math.e:59			if a >= 0 then*/
    // SubProg abs pc: 11 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _a_1212, 0)){
        goto L2; // [11] 24
    }
    // SubProg abs pc: 15 op: STARTLINE (58)

    /** math.e:60				return a*/
    // SubProg abs pc: 17 op: RETURNF (28)

// Exiting block BLOCK: abs

// block var t_1213
    DeRef(_t_1213);
    return _a_1212;
    // SubProg abs pc: 21 op: ELSE (23)
    goto L3; // [21] 34
    // SubProg abs pc: 23 op: NOP1 (159)
L2: // addr: 24 pc: 23 sub: 1210 op: 159
    // SubProg abs pc: 24 op: STARTLINE (58)

    /** math.e:62				return - a*/
    // SubProg abs pc: 26 op: UMINUS (12)
    if (IS_ATOM_INT(_a_1212)) {
        if ((uintptr_t)_a_1212 == (uintptr_t)HIGH_BITS){
            _479 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _479 = - _a_1212;
        }
    }
    else {
        _479 = unary_op(UMINUS, _a_1212);
    }
    // SubProg abs pc: 29 op: RETURNF (28)

// Exiting block BLOCK: abs

// block var a_1212
    DeRef(_a_1212);

// block var t_1213
    DeRef(_t_1213);
    return _479;
    // SubProg abs pc: 33 op: NOP1 (159)
L3: // addr: 34 pc: 33 sub: 1210 op: 159
    // SubProg abs pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 1210 op: 159
    // SubProg abs pc: 35 op: STARTLINE (58)

    /** math.e:65		for i = 1 to length(a) do*/
    // SubProg abs pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1212)){
            _480 = SEQ_PTR(_a_1212)->length;
    }
    else {
        _480 = 1;
    }
    // SubProg abs pc: 40 op: FOR_I (125)
    {
        object _i_1221;
        _i_1221 = 1;
L4: // addr: 47 pc: 40 sub: 1210 op: 125
        if (_i_1221 > _480){
            goto L5; // [40] 101
        }
        // SubProg abs pc: 47 op: STARTLINE (58)

        /** math.e:66			t = a[i]*/
        // SubProg abs pc: 49 op: RHS_SUBS_CHECK (92)
        DeRef(_t_1213);
        _2 = (object)SEQ_PTR(_a_1212);
        _t_1213 = (object)*(((s1_ptr)_2)->base + _i_1221);
        Ref(_t_1213);
        // SubProg abs pc: 53 op: STARTLINE (58)

        /** math.e:67			if atom(t) then*/
        // SubProg abs pc: 55 op: IS_AN_ATOM (67)
        _482 = IS_ATOM(_t_1213);
        // SubProg abs pc: 58 op: IF (20)
        if (_482 == 0)
        {
            _482 = NOVALUE;
            goto L6; // [58] 80
        }
        else{
            _482 = NOVALUE;
        }
        // SubProg abs pc: 61 op: STARTLINE (58)

        /** math.e:68				if t < 0 then*/
        // SubProg abs pc: 63 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _t_1213, 0)){
            goto L7; // [63] 94
        }
        // SubProg abs pc: 67 op: STARTLINE (58)

        /** math.e:69					a[i] = - t*/
        // SubProg abs pc: 69 op: UMINUS (12)
        if (IS_ATOM_INT(_t_1213)) {
            if ((uintptr_t)_t_1213 == (uintptr_t)HIGH_BITS){
                _484 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _484 = - _t_1213;
            }
        }
        else {
            _484 = unary_op(UMINUS, _t_1213);
        }
        // SubProg abs pc: 72 op: ASSIGN_SUBS_CHECK (84)
        _2 = (object)SEQ_PTR(_a_1212);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_1212 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_1221);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _484;
        if( _1 != _484 ){
            DeRef(_1);
        }
        _484 = NOVALUE;
        // SubProg abs pc: 76 op: NOP1 (159)
        // SubProg abs pc: 77 op: ELSE (23)
        goto L7; // [77] 94
        // SubProg abs pc: 79 op: NOP1 (159)
L6: // addr: 80 pc: 79 sub: 1210 op: 159
        // SubProg abs pc: 80 op: STARTLINE (58)

        /** math.e:72				a[i] = abs(t)*/
        // SubProg abs pc: 82 op: ASSIGN (18)
        Ref(_t_1213);
        DeRef(_485);
        _485 = _t_1213;
        // SubProg abs pc: 85 op: PROC (27)
        _486 = _14abs(_485);
        _485 = NOVALUE;
        // SubProg abs pc: 89 op: ASSIGN_SUBS_CHECK (84)
        _2 = (object)SEQ_PTR(_a_1212);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_1212 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_1221);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _486;
        if( _1 != _486 ){
            DeRef(_1);
        }
        _486 = NOVALUE;
        // SubProg abs pc: 93 op: NOP1 (159)
L7: // addr: 94 pc: 93 sub: 1210 op: 159
        // SubProg abs pc: 94 op: STARTLINE (58)

        /** math.e:74		end for*/
        // SubProg abs pc: 96 op: ENDFOR_INT_UP1 (54)
        _i_1221 = _i_1221 + 1;
        goto L4; // [96] 47
L5: // addr: 101 pc: 96 sub: 1210 op: 54
        ;
    }
    // SubProg abs pc: 101 op: STARTLINE (58)

    /** math.e:75		return a*/
    // SubProg abs pc: 103 op: RETURNF (28)

// Exiting block BLOCK: abs

// block var t_1213
    DeRef(_t_1213);
    DeRef(_479);
    _479 = NOVALUE;
    return _a_1212;
    // SubProg abs pc: 107 op: BADRETURNF (43)
    ;
}


object _14max(object _a_1256)
{
    object _b_1257 = NOVALUE;
    object _c_1258 = NOVALUE;
// skipping _498  name type: 0
// skipping _497  name type: 0
    object _496 = NOVALUE; // 1264 496
    object _495 = NOVALUE; // 1263 495
    object _494 = NOVALUE; // 1260 494
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg max pc: 1 op: STARTLINE (58)

    /** math.e:199		if atom(a) then*/
    // SubProg max pc: 3 op: IS_AN_ATOM (67)
    _494 = IS_ATOM(_a_1256);
    // SubProg max pc: 6 op: IF (20)
    if (_494 == 0)
    {
        _494 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _494 = NOVALUE;
    }
    // SubProg max pc: 9 op: STARTLINE (58)

    /** math.e:200			return a*/
    // SubProg max pc: 11 op: RETURNF (28)

// Exiting block BLOCK: max

// block var b_1257
    DeRef(_b_1257);

// block var c_1258
    DeRef(_c_1258);
    return _a_1256;
    // SubProg max pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 1254 op: 159
    // SubProg max pc: 16 op: STARTLINE (58)

    /** math.e:202		b = mathcons:MINF*/
    // SubProg max pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg max pc: 20 op: ASSIGN (18)
    RefDS(_16MINF_1190);
    DeRef(_b_1257);
    _b_1257 = _16MINF_1190;
    // SubProg max pc: 23 op: STARTLINE (58)

    /** math.e:203		for i = 1 to length(a) do*/
    // SubProg max pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1256)){
            _495 = SEQ_PTR(_a_1256)->length;
    }
    else {
        _495 = 1;
    }
    // SubProg max pc: 28 op: FOR_I (125)
    {
        object _i_1262;
        _i_1262 = 1;
L2: // addr: 35 pc: 28 sub: 1254 op: 125
        if (_i_1262 > _495){
            goto L3; // [28] 64
        }
        // SubProg max pc: 35 op: STARTLINE (58)

        /** math.e:204			c = max(a[i])*/
        // SubProg max pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1256);
        _496 = (object)*(((s1_ptr)_2)->base + _i_1262);
        // SubProg max pc: 41 op: PROC (27)
        Ref(_496);
        _0 = _c_1258;
        _c_1258 = _14max(_496);
        DeRef(_0);
        _496 = NOVALUE;
        // SubProg max pc: 45 op: STARTLINE (58)

        /** math.e:205			if c > b then*/
        // SubProg max pc: 47 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _c_1258, _b_1257)){
            goto L4; // [47] 57
        }
        // SubProg max pc: 51 op: STARTLINE (58)

        /** math.e:206				b = c*/
        // SubProg max pc: 53 op: ASSIGN (18)
        Ref(_c_1258);
        DeRef(_b_1257);
        _b_1257 = _c_1258;
        // SubProg max pc: 56 op: NOP1 (159)
L4: // addr: 57 pc: 56 sub: 1254 op: 159
        // SubProg max pc: 57 op: STARTLINE (58)

        /** math.e:208		end for*/
        // SubProg max pc: 59 op: ENDFOR_INT_UP1 (54)
        _i_1262 = _i_1262 + 1;
        goto L2; // [59] 35
L3: // addr: 64 pc: 59 sub: 1254 op: 54
        ;
    }
    // SubProg max pc: 64 op: STARTLINE (58)

    /** math.e:209		return b*/
    // SubProg max pc: 66 op: RETURNF (28)

// Exiting block BLOCK: max

// block var a_1256
    DeRef(_a_1256);

// block var c_1258
    DeRef(_c_1258);
    return _b_1257;
    // SubProg max pc: 70 op: BADRETURNF (43)
    ;
}


object _14min(object _a_1270)
{
    object _b_1271 = NOVALUE;
    object _c_1272 = NOVALUE;
// skipping _503  name type: 0
// skipping _502  name type: 0
    object _501 = NOVALUE; // 1278 501
    object _500 = NOVALUE; // 1277 500
    object _499 = NOVALUE; // 1274 499
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg min pc: 1 op: STARTLINE (58)

    /** math.e:232		if atom(a) then*/
    // SubProg min pc: 3 op: IS_AN_ATOM (67)
    _499 = IS_ATOM(_a_1270);
    // SubProg min pc: 6 op: IF (20)
    if (_499 == 0)
    {
        _499 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _499 = NOVALUE;
    }
    // SubProg min pc: 9 op: STARTLINE (58)

    /** math.e:233				return a*/
    // SubProg min pc: 11 op: RETURNF (28)

// Exiting block BLOCK: min

// block var b_1271
    DeRef(_b_1271);

// block var c_1272
    DeRef(_c_1272);
    return _a_1270;
    // SubProg min pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 1268 op: 159
    // SubProg min pc: 16 op: STARTLINE (58)

    /** math.e:235		b = mathcons:PINF*/
    // SubProg min pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg min pc: 20 op: ASSIGN (18)
    RefDS(_16PINF_1186);
    DeRef(_b_1271);
    _b_1271 = _16PINF_1186;
    // SubProg min pc: 23 op: STARTLINE (58)

    /** math.e:236		for i = 1 to length(a) do*/
    // SubProg min pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1270)){
            _500 = SEQ_PTR(_a_1270)->length;
    }
    else {
        _500 = 1;
    }
    // SubProg min pc: 28 op: FOR_I (125)
    {
        object _i_1276;
        _i_1276 = 1;
L2: // addr: 35 pc: 28 sub: 1268 op: 125
        if (_i_1276 > _500){
            goto L3; // [28] 64
        }
        // SubProg min pc: 35 op: STARTLINE (58)

        /** math.e:237			c = min(a[i])*/
        // SubProg min pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1270);
        _501 = (object)*(((s1_ptr)_2)->base + _i_1276);
        // SubProg min pc: 41 op: PROC (27)
        Ref(_501);
        _0 = _c_1272;
        _c_1272 = _14min(_501);
        DeRef(_0);
        _501 = NOVALUE;
        // SubProg min pc: 45 op: STARTLINE (58)

        /** math.e:238				if c < b then*/
        // SubProg min pc: 47 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _c_1272, _b_1271)){
            goto L4; // [47] 57
        }
        // SubProg min pc: 51 op: STARTLINE (58)

        /** math.e:239					b = c*/
        // SubProg min pc: 53 op: ASSIGN (18)
        Ref(_c_1272);
        DeRef(_b_1271);
        _b_1271 = _c_1272;
        // SubProg min pc: 56 op: NOP1 (159)
L4: // addr: 57 pc: 56 sub: 1268 op: 159
        // SubProg min pc: 57 op: STARTLINE (58)

        /** math.e:241		end for*/
        // SubProg min pc: 59 op: ENDFOR_INT_UP1 (54)
        _i_1276 = _i_1276 + 1;
        goto L2; // [59] 35
L3: // addr: 64 pc: 59 sub: 1268 op: 54
        ;
    }
    // SubProg min pc: 64 op: STARTLINE (58)

    /** math.e:242		return b*/
    // SubProg min pc: 66 op: RETURNF (28)

// Exiting block BLOCK: min

// block var a_1270
    DeRef(_a_1270);

// block var c_1272
    DeRef(_c_1272);
    return _b_1271;
    // SubProg min pc: 70 op: BADRETURNF (43)
    ;
}


object _14or_all(object _a_1649)
{
    object _b_1650 = NOVALUE;
// skipping _701  name type: 0
    object _700 = NOVALUE; // 1663 700
    object _699 = NOVALUE; // 1662 699
// skipping _698  name type: 0
    object _697 = NOVALUE; // 1659 697
    object _696 = NOVALUE; // 1658 696
    object _695 = NOVALUE; // 1657 695
    object _694 = NOVALUE; // 1655 694
    object _693 = NOVALUE; // 1652 693
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg or_all pc: 1 op: STARTLINE (58)

    /** math.e:1461		if atom(a) then*/
    // SubProg or_all pc: 3 op: IS_AN_ATOM (67)
    _693 = IS_ATOM(_a_1649);
    // SubProg or_all pc: 6 op: IF (20)
    if (_693 == 0)
    {
        _693 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _693 = NOVALUE;
    }
    // SubProg or_all pc: 9 op: STARTLINE (58)

    /** math.e:1462			return a*/
    // SubProg or_all pc: 11 op: RETURNF (28)

// Exiting block BLOCK: or_all

// block var b_1650
    DeRef(_b_1650);
    return _a_1649;
    // SubProg or_all pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 1647 op: 159
    // SubProg or_all pc: 16 op: STARTLINE (58)

    /** math.e:1464		b = 0*/
    // SubProg or_all pc: 18 op: ASSIGN (18)
    DeRef(_b_1650);
    _b_1650 = 0;
    // SubProg or_all pc: 21 op: STARTLINE (58)

    /** math.e:1465		for i = 1 to length(a) do*/
    // SubProg or_all pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1649)){
            _694 = SEQ_PTR(_a_1649)->length;
    }
    else {
        _694 = 1;
    }
    // SubProg or_all pc: 26 op: FOR_I (125)
    {
        object _i_1654;
        _i_1654 = 1;
L2: // addr: 33 pc: 26 sub: 1647 op: 125
        if (_i_1654 > _694){
            goto L3; // [26] 80
        }
        // SubProg or_all pc: 33 op: STARTLINE (58)

        /** math.e:1466			if atom(a[i]) then*/
        // SubProg or_all pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1649);
        _695 = (object)*(((s1_ptr)_2)->base + _i_1654);
        // SubProg or_all pc: 39 op: IS_AN_ATOM (67)
        _696 = IS_ATOM(_695);
        _695 = NOVALUE;
        // SubProg or_all pc: 42 op: IF (20)
        if (_696 == 0)
        {
            _696 = NOVALUE;
            goto L4; // [42] 58
        }
        else{
            _696 = NOVALUE;
        }
        // SubProg or_all pc: 45 op: STARTLINE (58)

        /** math.e:1467				b = or_bits(b, a[i])*/
        // SubProg or_all pc: 47 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1649);
        _697 = (object)*(((s1_ptr)_2)->base + _i_1654);
        // SubProg or_all pc: 51 op: OR_BITS (24)
        _0 = _b_1650;
        if (IS_ATOM_INT(_b_1650) && IS_ATOM_INT(_697)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_b_1650 | (uintptr_t)_697;
                 _b_1650 = MAKE_UINT(tu);
            }
        }
        else {
            _b_1650 = binary_op(OR_BITS, _b_1650, _697);
        }
        DeRef(_0);
        _697 = NOVALUE;
        // SubProg or_all pc: 55 op: ELSE (23)
        goto L5; // [55] 73
        // SubProg or_all pc: 57 op: NOP1 (159)
L4: // addr: 58 pc: 57 sub: 1647 op: 159
        // SubProg or_all pc: 58 op: STARTLINE (58)

        /** math.e:1469				b = or_bits(b, or_all(a[i]))*/
        // SubProg or_all pc: 60 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1649);
        _699 = (object)*(((s1_ptr)_2)->base + _i_1654);
        // SubProg or_all pc: 64 op: PROC (27)
        Ref(_699);
        _700 = _14or_all(_699);
        _699 = NOVALUE;
        // SubProg or_all pc: 68 op: OR_BITS (24)
        _0 = _b_1650;
        if (IS_ATOM_INT(_b_1650) && IS_ATOM_INT(_700)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_b_1650 | (uintptr_t)_700;
                 _b_1650 = MAKE_UINT(tu);
            }
        }
        else {
            _b_1650 = binary_op(OR_BITS, _b_1650, _700);
        }
        DeRef(_0);
        DeRef(_700);
        _700 = NOVALUE;
        // SubProg or_all pc: 72 op: NOP1 (159)
L5: // addr: 73 pc: 72 sub: 1647 op: 159
        // SubProg or_all pc: 73 op: STARTLINE (58)

        /** math.e:1471		end for*/
        // SubProg or_all pc: 75 op: ENDFOR_INT_UP1 (54)
        _i_1654 = _i_1654 + 1;
        goto L2; // [75] 33
L3: // addr: 80 pc: 75 sub: 1647 op: 54
        ;
    }
    // SubProg or_all pc: 80 op: STARTLINE (58)

    /** math.e:1472		return b*/
    // SubProg or_all pc: 82 op: RETURNF (28)

// Exiting block BLOCK: or_all

// block var a_1649
    DeRef(_a_1649);
    return _b_1650;
    // SubProg or_all pc: 86 op: BADRETURNF (43)
    ;
}



// 0x7B5B425C
