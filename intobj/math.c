// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _13abs(object _a_1301)
{
    object _t_1302 = NOVALUE;
    object _544 = NOVALUE; // 1320 544
    object _543 = NOVALUE; // 1319 543
    object _542 = NOVALUE; // 1317 542
// skipping _541  name type: 0
    object _540 = NOVALUE; // 1314 540
// skipping _539  name type: 0
    object _538 = NOVALUE; // 1311 538
    object _537 = NOVALUE; // 1308 537
// skipping _536  name type: 0
    object _535 = NOVALUE; // 1304 535
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg abs pc: 1 op: STARTLINE (58)

    /** math.e:58		if atom(a) then*/
    // SubProg abs pc: 3 op: IS_AN_ATOM (67)
    _535 = IS_ATOM(_a_1301);
    // SubProg abs pc: 6 op: IF (20)
    if (_535 == 0)
    {
        _535 = NOVALUE;
        goto L1; // [6] 35
    }
    else{
        _535 = NOVALUE;
    }
    // SubProg abs pc: 9 op: STARTLINE (58)

    /** math.e:59			if a >= 0 then*/
    // SubProg abs pc: 11 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _a_1301, 0)){
        goto L2; // [11] 24
    }
    // SubProg abs pc: 15 op: STARTLINE (58)

    /** math.e:60				return a*/
    // SubProg abs pc: 17 op: RETURNF (28)

// Exiting block BLOCK: abs

// block var t_1302
    DeRef(_t_1302);
    return _a_1301;
    // SubProg abs pc: 21 op: ELSE (23)
    goto L3; // [21] 34
    // SubProg abs pc: 23 op: NOP1 (159)
L2: // addr: 24 pc: 23 sub: 1299 op: 159
    // SubProg abs pc: 24 op: STARTLINE (58)

    /** math.e:62				return - a*/
    // SubProg abs pc: 26 op: UMINUS (12)
    if (IS_ATOM_INT(_a_1301)) {
        if ((uintptr_t)_a_1301 == (uintptr_t)HIGH_BITS){
            _537 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _537 = - _a_1301;
        }
    }
    else {
        _537 = unary_op(UMINUS, _a_1301);
    }
    // SubProg abs pc: 29 op: RETURNF (28)

// Exiting block BLOCK: abs

// block var a_1301
    DeRef(_a_1301);

// block var t_1302
    DeRef(_t_1302);
    return _537;
    // SubProg abs pc: 33 op: NOP1 (159)
L3: // addr: 34 pc: 33 sub: 1299 op: 159
    // SubProg abs pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 1299 op: 159
    // SubProg abs pc: 35 op: STARTLINE (58)

    /** math.e:65		for i = 1 to length(a) do*/
    // SubProg abs pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1301)){
            _538 = SEQ_PTR(_a_1301)->length;
    }
    else {
        _538 = 1;
    }
    // SubProg abs pc: 40 op: FOR_I (125)
    {
        object _i_1310;
        _i_1310 = 1;
L4: // addr: 47 pc: 40 sub: 1299 op: 125
        if (_i_1310 > _538){
            goto L5; // [40] 101
        }
        // SubProg abs pc: 47 op: STARTLINE (58)

        /** math.e:66			t = a[i]*/
        // SubProg abs pc: 49 op: RHS_SUBS_CHECK (92)
        DeRef(_t_1302);
        _2 = (object)SEQ_PTR(_a_1301);
        _t_1302 = (object)*(((s1_ptr)_2)->base + _i_1310);
        Ref(_t_1302);
        // SubProg abs pc: 53 op: STARTLINE (58)

        /** math.e:67			if atom(t) then*/
        // SubProg abs pc: 55 op: IS_AN_ATOM (67)
        _540 = IS_ATOM(_t_1302);
        // SubProg abs pc: 58 op: IF (20)
        if (_540 == 0)
        {
            _540 = NOVALUE;
            goto L6; // [58] 80
        }
        else{
            _540 = NOVALUE;
        }
        // SubProg abs pc: 61 op: STARTLINE (58)

        /** math.e:68				if t < 0 then*/
        // SubProg abs pc: 63 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _t_1302, 0)){
            goto L7; // [63] 94
        }
        // SubProg abs pc: 67 op: STARTLINE (58)

        /** math.e:69					a[i] = - t*/
        // SubProg abs pc: 69 op: UMINUS (12)
        if (IS_ATOM_INT(_t_1302)) {
            if ((uintptr_t)_t_1302 == (uintptr_t)HIGH_BITS){
                _542 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _542 = - _t_1302;
            }
        }
        else {
            _542 = unary_op(UMINUS, _t_1302);
        }
        // SubProg abs pc: 72 op: ASSIGN_SUBS_CHECK (84)
        _2 = (object)SEQ_PTR(_a_1301);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_1301 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_1310);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _542;
        if( _1 != _542 ){
            DeRef(_1);
        }
        _542 = NOVALUE;
        // SubProg abs pc: 76 op: NOP1 (159)
        // SubProg abs pc: 77 op: ELSE (23)
        goto L7; // [77] 94
        // SubProg abs pc: 79 op: NOP1 (159)
L6: // addr: 80 pc: 79 sub: 1299 op: 159
        // SubProg abs pc: 80 op: STARTLINE (58)

        /** math.e:72				a[i] = abs(t)*/
        // SubProg abs pc: 82 op: ASSIGN (18)
        Ref(_t_1302);
        DeRef(_543);
        _543 = _t_1302;
        // SubProg abs pc: 85 op: PROC (27)
        _544 = _13abs(_543);
        _543 = NOVALUE;
        // SubProg abs pc: 89 op: ASSIGN_SUBS_CHECK (84)
        _2 = (object)SEQ_PTR(_a_1301);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_1301 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_1310);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _544;
        if( _1 != _544 ){
            DeRef(_1);
        }
        _544 = NOVALUE;
        // SubProg abs pc: 93 op: NOP1 (159)
L7: // addr: 94 pc: 93 sub: 1299 op: 159
        // SubProg abs pc: 94 op: STARTLINE (58)

        /** math.e:74		end for*/
        // SubProg abs pc: 96 op: ENDFOR_INT_UP1 (54)
        _i_1310 = _i_1310 + 1;
        goto L4; // [96] 47
L5: // addr: 101 pc: 96 sub: 1299 op: 54
        ;
    }
    // SubProg abs pc: 101 op: STARTLINE (58)

    /** math.e:75		return a*/
    // SubProg abs pc: 103 op: RETURNF (28)

// Exiting block BLOCK: abs

// block var t_1302
    DeRef(_t_1302);
    DeRef(_537);
    _537 = NOVALUE;
    return _a_1301;
    // SubProg abs pc: 107 op: BADRETURNF (43)
    ;
}


object _13max(object _a_1345)
{
    object _b_1346 = NOVALUE;
    object _c_1347 = NOVALUE;
// skipping _556  name type: 0
// skipping _555  name type: 0
    object _554 = NOVALUE; // 1353 554
    object _553 = NOVALUE; // 1352 553
    object _552 = NOVALUE; // 1349 552
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg max pc: 1 op: STARTLINE (58)

    /** math.e:199		if atom(a) then*/
    // SubProg max pc: 3 op: IS_AN_ATOM (67)
    _552 = IS_ATOM(_a_1345);
    // SubProg max pc: 6 op: IF (20)
    if (_552 == 0)
    {
        _552 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _552 = NOVALUE;
    }
    // SubProg max pc: 9 op: STARTLINE (58)

    /** math.e:200			return a*/
    // SubProg max pc: 11 op: RETURNF (28)

// Exiting block BLOCK: max

// block var b_1346
    DeRef(_b_1346);

// block var c_1347
    DeRef(_c_1347);
    return _a_1345;
    // SubProg max pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 1343 op: 159
    // SubProg max pc: 16 op: STARTLINE (58)

    /** math.e:202		b = mathcons:MINF*/
    // SubProg max pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg max pc: 20 op: ASSIGN (18)
    RefDS(_15MINF_1279);
    DeRef(_b_1346);
    _b_1346 = _15MINF_1279;
    // SubProg max pc: 23 op: STARTLINE (58)

    /** math.e:203		for i = 1 to length(a) do*/
    // SubProg max pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1345)){
            _553 = SEQ_PTR(_a_1345)->length;
    }
    else {
        _553 = 1;
    }
    // SubProg max pc: 28 op: FOR_I (125)
    {
        object _i_1351;
        _i_1351 = 1;
L2: // addr: 35 pc: 28 sub: 1343 op: 125
        if (_i_1351 > _553){
            goto L3; // [28] 64
        }
        // SubProg max pc: 35 op: STARTLINE (58)

        /** math.e:204			c = max(a[i])*/
        // SubProg max pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1345);
        _554 = (object)*(((s1_ptr)_2)->base + _i_1351);
        // SubProg max pc: 41 op: PROC (27)
        Ref(_554);
        _0 = _c_1347;
        _c_1347 = _13max(_554);
        DeRef(_0);
        _554 = NOVALUE;
        // SubProg max pc: 45 op: STARTLINE (58)

        /** math.e:205			if c > b then*/
        // SubProg max pc: 47 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _c_1347, _b_1346)){
            goto L4; // [47] 57
        }
        // SubProg max pc: 51 op: STARTLINE (58)

        /** math.e:206				b = c*/
        // SubProg max pc: 53 op: ASSIGN (18)
        Ref(_c_1347);
        DeRef(_b_1346);
        _b_1346 = _c_1347;
        // SubProg max pc: 56 op: NOP1 (159)
L4: // addr: 57 pc: 56 sub: 1343 op: 159
        // SubProg max pc: 57 op: STARTLINE (58)

        /** math.e:208		end for*/
        // SubProg max pc: 59 op: ENDFOR_INT_UP1 (54)
        _i_1351 = _i_1351 + 1;
        goto L2; // [59] 35
L3: // addr: 64 pc: 59 sub: 1343 op: 54
        ;
    }
    // SubProg max pc: 64 op: STARTLINE (58)

    /** math.e:209		return b*/
    // SubProg max pc: 66 op: RETURNF (28)

// Exiting block BLOCK: max

// block var a_1345
    DeRef(_a_1345);

// block var c_1347
    DeRef(_c_1347);
    return _b_1346;
    // SubProg max pc: 70 op: BADRETURNF (43)
    ;
}


object _13min(object _a_1359)
{
    object _b_1360 = NOVALUE;
    object _c_1361 = NOVALUE;
// skipping _561  name type: 0
// skipping _560  name type: 0
    object _559 = NOVALUE; // 1367 559
    object _558 = NOVALUE; // 1366 558
    object _557 = NOVALUE; // 1363 557
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg min pc: 1 op: STARTLINE (58)

    /** math.e:232		if atom(a) then*/
    // SubProg min pc: 3 op: IS_AN_ATOM (67)
    _557 = IS_ATOM(_a_1359);
    // SubProg min pc: 6 op: IF (20)
    if (_557 == 0)
    {
        _557 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _557 = NOVALUE;
    }
    // SubProg min pc: 9 op: STARTLINE (58)

    /** math.e:233				return a*/
    // SubProg min pc: 11 op: RETURNF (28)

// Exiting block BLOCK: min

// block var b_1360
    DeRef(_b_1360);

// block var c_1361
    DeRef(_c_1361);
    return _a_1359;
    // SubProg min pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 1357 op: 159
    // SubProg min pc: 16 op: STARTLINE (58)

    /** math.e:235		b = mathcons:PINF*/
    // SubProg min pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg min pc: 20 op: ASSIGN (18)
    RefDS(_15PINF_1275);
    DeRef(_b_1360);
    _b_1360 = _15PINF_1275;
    // SubProg min pc: 23 op: STARTLINE (58)

    /** math.e:236		for i = 1 to length(a) do*/
    // SubProg min pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1359)){
            _558 = SEQ_PTR(_a_1359)->length;
    }
    else {
        _558 = 1;
    }
    // SubProg min pc: 28 op: FOR_I (125)
    {
        object _i_1365;
        _i_1365 = 1;
L2: // addr: 35 pc: 28 sub: 1357 op: 125
        if (_i_1365 > _558){
            goto L3; // [28] 64
        }
        // SubProg min pc: 35 op: STARTLINE (58)

        /** math.e:237			c = min(a[i])*/
        // SubProg min pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1359);
        _559 = (object)*(((s1_ptr)_2)->base + _i_1365);
        // SubProg min pc: 41 op: PROC (27)
        Ref(_559);
        _0 = _c_1361;
        _c_1361 = _13min(_559);
        DeRef(_0);
        _559 = NOVALUE;
        // SubProg min pc: 45 op: STARTLINE (58)

        /** math.e:238				if c < b then*/
        // SubProg min pc: 47 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _c_1361, _b_1360)){
            goto L4; // [47] 57
        }
        // SubProg min pc: 51 op: STARTLINE (58)

        /** math.e:239					b = c*/
        // SubProg min pc: 53 op: ASSIGN (18)
        Ref(_c_1361);
        DeRef(_b_1360);
        _b_1360 = _c_1361;
        // SubProg min pc: 56 op: NOP1 (159)
L4: // addr: 57 pc: 56 sub: 1357 op: 159
        // SubProg min pc: 57 op: STARTLINE (58)

        /** math.e:241		end for*/
        // SubProg min pc: 59 op: ENDFOR_INT_UP1 (54)
        _i_1365 = _i_1365 + 1;
        goto L2; // [59] 35
L3: // addr: 64 pc: 59 sub: 1357 op: 54
        ;
    }
    // SubProg min pc: 64 op: STARTLINE (58)

    /** math.e:242		return b*/
    // SubProg min pc: 66 op: RETURNF (28)

// Exiting block BLOCK: min

// block var a_1359
    DeRef(_a_1359);

// block var c_1361
    DeRef(_c_1361);
    return _b_1360;
    // SubProg min pc: 70 op: BADRETURNF (43)
    ;
}


object _13or_all(object _a_1738)
{
    object _b_1739 = NOVALUE;
// skipping _759  name type: 0
    object _758 = NOVALUE; // 1752 758
    object _757 = NOVALUE; // 1751 757
// skipping _756  name type: 0
    object _755 = NOVALUE; // 1748 755
    object _754 = NOVALUE; // 1747 754
    object _753 = NOVALUE; // 1746 753
    object _752 = NOVALUE; // 1744 752
    object _751 = NOVALUE; // 1741 751
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg or_all pc: 1 op: STARTLINE (58)

    /** math.e:1461		if atom(a) then*/
    // SubProg or_all pc: 3 op: IS_AN_ATOM (67)
    _751 = IS_ATOM(_a_1738);
    // SubProg or_all pc: 6 op: IF (20)
    if (_751 == 0)
    {
        _751 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _751 = NOVALUE;
    }
    // SubProg or_all pc: 9 op: STARTLINE (58)

    /** math.e:1462			return a*/
    // SubProg or_all pc: 11 op: RETURNF (28)

// Exiting block BLOCK: or_all

// block var b_1739
    DeRef(_b_1739);
    return _a_1738;
    // SubProg or_all pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 1736 op: 159
    // SubProg or_all pc: 16 op: STARTLINE (58)

    /** math.e:1464		b = 0*/
    // SubProg or_all pc: 18 op: ASSIGN (18)
    DeRef(_b_1739);
    _b_1739 = 0;
    // SubProg or_all pc: 21 op: STARTLINE (58)

    /** math.e:1465		for i = 1 to length(a) do*/
    // SubProg or_all pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_a_1738)){
            _752 = SEQ_PTR(_a_1738)->length;
    }
    else {
        _752 = 1;
    }
    // SubProg or_all pc: 26 op: FOR_I (125)
    {
        object _i_1743;
        _i_1743 = 1;
L2: // addr: 33 pc: 26 sub: 1736 op: 125
        if (_i_1743 > _752){
            goto L3; // [26] 80
        }
        // SubProg or_all pc: 33 op: STARTLINE (58)

        /** math.e:1466			if atom(a[i]) then*/
        // SubProg or_all pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1738);
        _753 = (object)*(((s1_ptr)_2)->base + _i_1743);
        // SubProg or_all pc: 39 op: IS_AN_ATOM (67)
        _754 = IS_ATOM(_753);
        _753 = NOVALUE;
        // SubProg or_all pc: 42 op: IF (20)
        if (_754 == 0)
        {
            _754 = NOVALUE;
            goto L4; // [42] 58
        }
        else{
            _754 = NOVALUE;
        }
        // SubProg or_all pc: 45 op: STARTLINE (58)

        /** math.e:1467				b = or_bits(b, a[i])*/
        // SubProg or_all pc: 47 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1738);
        _755 = (object)*(((s1_ptr)_2)->base + _i_1743);
        // SubProg or_all pc: 51 op: OR_BITS (24)
        _0 = _b_1739;
        if (IS_ATOM_INT(_b_1739) && IS_ATOM_INT(_755)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_b_1739 | (uintptr_t)_755;
                 _b_1739 = MAKE_UINT(tu);
            }
        }
        else {
            _b_1739 = binary_op(OR_BITS, _b_1739, _755);
        }
        DeRef(_0);
        _755 = NOVALUE;
        // SubProg or_all pc: 55 op: ELSE (23)
        goto L5; // [55] 73
        // SubProg or_all pc: 57 op: NOP1 (159)
L4: // addr: 58 pc: 57 sub: 1736 op: 159
        // SubProg or_all pc: 58 op: STARTLINE (58)

        /** math.e:1469				b = or_bits(b, or_all(a[i]))*/
        // SubProg or_all pc: 60 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_1738);
        _757 = (object)*(((s1_ptr)_2)->base + _i_1743);
        // SubProg or_all pc: 64 op: PROC (27)
        Ref(_757);
        _758 = _13or_all(_757);
        _757 = NOVALUE;
        // SubProg or_all pc: 68 op: OR_BITS (24)
        _0 = _b_1739;
        if (IS_ATOM_INT(_b_1739) && IS_ATOM_INT(_758)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_b_1739 | (uintptr_t)_758;
                 _b_1739 = MAKE_UINT(tu);
            }
        }
        else {
            _b_1739 = binary_op(OR_BITS, _b_1739, _758);
        }
        DeRef(_0);
        DeRef(_758);
        _758 = NOVALUE;
        // SubProg or_all pc: 72 op: NOP1 (159)
L5: // addr: 73 pc: 72 sub: 1736 op: 159
        // SubProg or_all pc: 73 op: STARTLINE (58)

        /** math.e:1471		end for*/
        // SubProg or_all pc: 75 op: ENDFOR_INT_UP1 (54)
        _i_1743 = _i_1743 + 1;
        goto L2; // [75] 33
L3: // addr: 80 pc: 75 sub: 1736 op: 54
        ;
    }
    // SubProg or_all pc: 80 op: STARTLINE (58)

    /** math.e:1472		return b*/
    // SubProg or_all pc: 82 op: RETURNF (28)

// Exiting block BLOCK: or_all

// block var a_1738
    DeRef(_a_1738);
    return _b_1739;
    // SubProg or_all pc: 86 op: BADRETURNF (43)
    ;
}



// 0x55498983
