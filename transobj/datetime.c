// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _21isLeap(object _year_3222)
{
    object _ly_3223 = NOVALUE;
    object _1488 = NOVALUE; // 3244 1488
    object _1487 = NOVALUE; // 3243 1487
    object _1486 = NOVALUE; // 3242 1486
    object _1485 = NOVALUE; // 3241 1485
    object _1484 = NOVALUE; // 3240 1484
    object _1483 = NOVALUE; // 3239 1483
    object _1482 = NOVALUE; // 3238 1482
    object _1481 = NOVALUE; // 3237 1481
    object _1480 = NOVALUE; // 3236 1480
// skipping _1479  name type: 0
// skipping _1478  name type: 0
    object _1477 = NOVALUE; // 3231 1477
// skipping _1476  name type: 0
    object _1475 = NOVALUE; // 3228 1475
    object _1474 = NOVALUE; // 3227 1474
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg isLeap pc: 1 op: INTEGER_CHECK (96)
    // SubProg isLeap pc: 3 op: STARTLINE (58)

    /** datetime.e:89			ly = (remainder(year, {4, 100, 400, 3200, 80000})=0)*/
    // SubProg isLeap pc: 5 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 4;
    ((intptr_t*)_2)[2] = 100;
    ((intptr_t*)_2)[3] = 400;
    ((intptr_t*)_2)[4] = 3200;
    ((intptr_t*)_2)[5] = 80000;
    _1474 = MAKE_SEQ(_1);
    // SubProg isLeap pc: 13 op: REMAINDER (71)
    _1475 = binary_op(REMAINDER, _year_3222, _1474);
    DeRefDS(_1474);
    _1474 = NOVALUE;
    // SubProg isLeap pc: 17 op: EQUALS (3)
    DeRefi(_ly_3223);
    _ly_3223 = binary_op(EQUALS, _1475, 0);
    DeRefDS(_1475);
    _1475 = NOVALUE;
    // SubProg isLeap pc: 21 op: SEQUENCE_CHECK (97)
    // SubProg isLeap pc: 23 op: STARTLINE (58)

    /** datetime.e:91			if not ly[1] then return 0 end if*/
    // SubProg isLeap pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_3223);
    _1477 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg isLeap pc: 29 op: NOT_IFW (108)
    if (_1477 != 0)
    goto L1; // [29] 37
    _1477 = NOVALUE;
    // SubProg isLeap pc: 32 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_3222

// block var ly_3223
    DeRefDSi(_ly_3223);
    return 0;
    // SubProg isLeap pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 3220 op: 159
    // SubProg isLeap pc: 37 op: STARTLINE (58)

    /** datetime.e:93			if year <= Gregorian_Reformation then*/
    // SubProg isLeap pc: 39 op: LESSEQ_IFW_I (123)
    if (_year_3222 > 1752)
    goto L2; // [39] 52
    // SubProg isLeap pc: 43 op: STARTLINE (58)

    /** datetime.e:94					return 1 -- ly[1] can't possibly be 0 here so set shortcut as '1'.*/
    // SubProg isLeap pc: 45 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_3222

// block var ly_3223
    DeRefi(_ly_3223);
    return 1;
    // SubProg isLeap pc: 49 op: ELSE (23)
    goto L3; // [49] 95
    // SubProg isLeap pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 3220 op: 159
    // SubProg isLeap pc: 52 op: STARTLINE (58)

    /** datetime.e:96					return ly[1] - ly[2] + ly[3] - ly[4] + ly[5]*/
    // SubProg isLeap pc: 54 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_3223);
    _1480 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg isLeap pc: 58 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_3223);
    _1481 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg isLeap pc: 62 op: MINUS (10)
    _1482 = _1480 - _1481;
    if ((object)((uintptr_t)_1482 +(uintptr_t) HIGH_BITS) >= 0){
        _1482 = NewDouble((eudouble)_1482);
    }
    _1480 = NOVALUE;
    _1481 = NOVALUE;
    // SubProg isLeap pc: 66 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_3223);
    _1483 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg isLeap pc: 70 op: PLUS (11)
    if (IS_ATOM_INT(_1482)) {
        _1484 = _1482 + _1483;
        if ((object)((uintptr_t)_1484 + (uintptr_t)HIGH_BITS) >= 0){
            _1484 = NewDouble((eudouble)_1484);
        }
    }
    else {
        _1484 = NewDouble(DBL_PTR(_1482)->dbl + (eudouble)_1483);
    }
    DeRef(_1482);
    _1482 = NOVALUE;
    _1483 = NOVALUE;
    // SubProg isLeap pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_3223);
    _1485 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg isLeap pc: 78 op: MINUS (10)
    if (IS_ATOM_INT(_1484)) {
        _1486 = _1484 - _1485;
        if ((object)((uintptr_t)_1486 +(uintptr_t) HIGH_BITS) >= 0){
            _1486 = NewDouble((eudouble)_1486);
        }
    }
    else {
        _1486 = NewDouble(DBL_PTR(_1484)->dbl - (eudouble)_1485);
    }
    DeRef(_1484);
    _1484 = NOVALUE;
    _1485 = NOVALUE;
    // SubProg isLeap pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_3223);
    _1487 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg isLeap pc: 86 op: PLUS (11)
    if (IS_ATOM_INT(_1486)) {
        _1488 = _1486 + _1487;
        if ((object)((uintptr_t)_1488 + (uintptr_t)HIGH_BITS) >= 0){
            _1488 = NewDouble((eudouble)_1488);
        }
    }
    else {
        _1488 = NewDouble(DBL_PTR(_1486)->dbl + (eudouble)_1487);
    }
    DeRef(_1486);
    _1486 = NOVALUE;
    _1487 = NOVALUE;
    // SubProg isLeap pc: 90 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_3222

// block var ly_3223
    DeRefDSi(_ly_3223);
    return _1488;
    // SubProg isLeap pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 3220 op: 159
    // SubProg isLeap pc: 95 op: BADRETURNF (43)
    ;
}


object _21daysInMonth(object _year_3247, object _month_3248)
{
    object _1496 = NOVALUE; // 3259 1496
    object _1495 = NOVALUE; // 3258 1495
    object _1494 = NOVALUE; // 3257 1494
    object _1493 = NOVALUE; // 3255 1493
// skipping _1492  name type: 0
    object _1491 = NOVALUE; // 3252 1491
    object _1490 = NOVALUE; // 3251 1490
    object _1489 = NOVALUE; // 3250 1489
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg daysInMonth pc: 1 op: INTEGER_CHECK (96)
    // SubProg daysInMonth pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_month_3248)) {
        _1 = (object)(DBL_PTR(_month_3248)->dbl);
        DeRefDS(_month_3248);
        _month_3248 = _1;
    }
    // SubProg daysInMonth pc: 5 op: STARTLINE (58)

    /** datetime.e:101		if year = Gregorian_Reformation and month = 9 then*/
    // SubProg daysInMonth pc: 7 op: EQUALS (3)
    _1489 = (_year_3247 == 1752);
    // SubProg daysInMonth pc: 11 op: SC1_AND_IF (146)
    if (_1489 == 0) {
        goto L1; // [11] 32
    }
    // SubProg daysInMonth pc: 15 op: EQUALS (3)
    _1491 = (_month_3248 == 9);
    // SubProg daysInMonth pc: 19 op: NOP1 (159)
    // SubProg daysInMonth pc: 20 op: IF (20)
    if (_1491 == 0)
    {
        DeRef(_1491);
        _1491 = NOVALUE;
        goto L1; // [20] 32
    }
    else{
        DeRef(_1491);
        _1491 = NOVALUE;
    }
    // SubProg daysInMonth pc: 23 op: STARTLINE (58)

    /** datetime.e:102			return 19*/
    // SubProg daysInMonth pc: 25 op: RETURNF (28)

// Exiting block BLOCK: daysInMonth

// block var year_3247

// block var month_3248
    DeRef(_1489);
    _1489 = NOVALUE;
    return 19;
    // SubProg daysInMonth pc: 29 op: ELSE (23)
    goto L2; // [29] 70
    // SubProg daysInMonth pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 3245 op: 159
    // SubProg daysInMonth pc: 32 op: STARTLINE (58)

    /** datetime.e:103		elsif month != 2 then*/
    // SubProg daysInMonth pc: 34 op: NOTEQ_IFW_I (122)
    if (_month_3248 == 2)
    goto L3; // [34] 51
    // SubProg daysInMonth pc: 38 op: STARTLINE (58)

    /** datetime.e:104			return DaysPerMonth[month]*/
    // SubProg daysInMonth pc: 40 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_21DaysPerMonth_3205);
    _1493 = (object)*(((s1_ptr)_2)->base + _month_3248);
    // SubProg daysInMonth pc: 44 op: RETURNF (28)
    Ref(_1493);

// Exiting block BLOCK: daysInMonth

// block var year_3247

// block var month_3248
    DeRef(_1489);
    _1489 = NOVALUE;
    return _1493;
    // SubProg daysInMonth pc: 48 op: ELSE (23)
    goto L2; // [48] 70
    // SubProg daysInMonth pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 3245 op: 159
    // SubProg daysInMonth pc: 51 op: STARTLINE (58)

    /** datetime.e:106			return DaysPerMonth[month] + isLeap(year)*/
    // SubProg daysInMonth pc: 53 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_21DaysPerMonth_3205);
    _1494 = (object)*(((s1_ptr)_2)->base + _month_3248);
    // SubProg daysInMonth pc: 57 op: PROC (27)
    _1495 = _21isLeap(_year_3247);
    // SubProg daysInMonth pc: 61 op: PLUS (11)
    if (IS_ATOM_INT(_1494) && IS_ATOM_INT(_1495)) {
        _1496 = _1494 + _1495;
        if ((object)((uintptr_t)_1496 + (uintptr_t)HIGH_BITS) >= 0){
            _1496 = NewDouble((eudouble)_1496);
        }
    }
    else {
        _1496 = binary_op(PLUS, _1494, _1495);
    }
    _1494 = NOVALUE;
    DeRef(_1495);
    _1495 = NOVALUE;
    // SubProg daysInMonth pc: 65 op: RETURNF (28)

// Exiting block BLOCK: daysInMonth

// block var year_3247

// block var month_3248
    DeRef(_1489);
    _1489 = NOVALUE;
    _1493 = NOVALUE;
    return _1496;
    // SubProg daysInMonth pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 3245 op: 159
    // SubProg daysInMonth pc: 70 op: BADRETURNF (43)
    ;
}


object _21julianDayOfYear(object _ymd_3271)
{
    object _year_3272 = NOVALUE;
    object _month_3273 = NOVALUE;
    object _day_3274 = NOVALUE;
    object _d_3275 = NOVALUE;
// skipping _1515  name type: 0
// skipping _1514  name type: 0
// skipping _1513  name type: 0
    object _1512 = NOVALUE; // 3290 1512
    object _1511 = NOVALUE; // 3289 1511
    object _1510 = NOVALUE; // 3288 1510
// skipping _1509  name type: 0
// skipping _1508  name type: 0
    object _1507 = NOVALUE; // 3284 1507
    object _1506 = NOVALUE; // 3283 1506
// skipping _1505  name type: 0
// skipping _1504  name type: 0
// skipping _1503  name type: 0
// skipping _1502  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg julianDayOfYear pc: 1 op: STARTLINE (58)

    /** datetime.e:124		year = ymd[1]*/
    // SubProg julianDayOfYear pc: 3 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_3271);
    _year_3272 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_3272)){
        _year_3272 = (object)DBL_PTR(_year_3272)->dbl;
    }
    // SubProg julianDayOfYear pc: 9 op: STARTLINE (58)

    /** datetime.e:125		month = ymd[2]*/
    // SubProg julianDayOfYear pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_3271);
    _month_3273 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_month_3273)){
        _month_3273 = (object)DBL_PTR(_month_3273)->dbl;
    }
    // SubProg julianDayOfYear pc: 17 op: STARTLINE (58)

    /** datetime.e:126		day = ymd[3]*/
    // SubProg julianDayOfYear pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_3271);
    _day_3274 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_day_3274)){
        _day_3274 = (object)DBL_PTR(_day_3274)->dbl;
    }
    // SubProg julianDayOfYear pc: 25 op: STARTLINE (58)

    /** datetime.e:128		if month = 1 then return day end if*/
    // SubProg julianDayOfYear pc: 27 op: EQUALS_IFW_I (121)
    if (_month_3273 != 1)
    goto L1; // [27] 36
    // SubProg julianDayOfYear pc: 31 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_3271
    DeRef(_ymd_3271);

// block var year_3272

// block var month_3273

// block var d_3275
    return _day_3274;
    // SubProg julianDayOfYear pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 3269 op: 159
    // SubProg julianDayOfYear pc: 36 op: STARTLINE (58)

    /** datetime.e:130		d = 0*/
    // SubProg julianDayOfYear pc: 38 op: ASSIGN_I (113)
    _d_3275 = 0;
    // SubProg julianDayOfYear pc: 41 op: STARTLINE (58)

    /** datetime.e:131		for i = 1 to month - 1 do*/
    // SubProg julianDayOfYear pc: 43 op: MINUS (10)
    _1506 = _month_3273 - 1;
    if ((object)((uintptr_t)_1506 +(uintptr_t) HIGH_BITS) >= 0){
        _1506 = NewDouble((eudouble)_1506);
    }
    // SubProg julianDayOfYear pc: 47 op: FOR (21)
    {
        object _i_3282;
        _i_3282 = 1;
L2: // addr: 54 pc: 47 sub: 3269 op: 21
        if (binary_op_a(GREATER, _i_3282, _1506)){
            goto L3; // [47] 74
        }
        // SubProg julianDayOfYear pc: 54 op: STARTLINE (58)

        /** datetime.e:132			d += daysInMonth(year, i)*/
        // SubProg julianDayOfYear pc: 56 op: PROC (27)
        Ref(_i_3282);
        _1507 = _21daysInMonth(_year_3272, _i_3282);
        // SubProg julianDayOfYear pc: 61 op: PLUS (11)
        if (IS_ATOM_INT(_1507)) {
            _d_3275 = _d_3275 + _1507;
        }
        else {
            _d_3275 = binary_op(PLUS, _d_3275, _1507);
        }
        DeRef(_1507);
        _1507 = NOVALUE;
        // SubProg julianDayOfYear pc: 65 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_3275)) {
            _1 = (object)(DBL_PTR(_d_3275)->dbl);
            DeRefDS(_d_3275);
            _d_3275 = _1;
        }
        // SubProg julianDayOfYear pc: 67 op: STARTLINE (58)

        /** datetime.e:133		end for*/
        // SubProg julianDayOfYear pc: 69 op: ENDFOR_INT_UP1 (54)
        _0 = _i_3282;
        if (IS_ATOM_INT(_i_3282)) {
            _i_3282 = _i_3282 + 1;
            if ((object)((uintptr_t)_i_3282 +(uintptr_t) HIGH_BITS) >= 0){
                _i_3282 = NewDouble((eudouble)_i_3282);
            }
        }
        else {
            _i_3282 = binary_op_a(PLUS, _i_3282, 1);
        }
        DeRef(_0);
        goto L2; // [69] 54
L3: // addr: 74 pc: 69 sub: 3269 op: 54
        ;
        DeRef(_i_3282);
    }
    // SubProg julianDayOfYear pc: 74 op: STARTLINE (58)

    /** datetime.e:135		d += day*/
    // SubProg julianDayOfYear pc: 76 op: PLUS_I (115)
    _d_3275 = _d_3275 + _day_3274;
    // SubProg julianDayOfYear pc: 80 op: STARTLINE (58)

    /** datetime.e:137		if year = Gregorian_Reformation and month = 9 then*/
    // SubProg julianDayOfYear pc: 82 op: EQUALS (3)
    _1510 = (_year_3272 == 1752);
    // SubProg julianDayOfYear pc: 86 op: SC1_AND_IF (146)
    if (_1510 == 0) {
        goto L4; // [86] 128
    }
    // SubProg julianDayOfYear pc: 90 op: EQUALS (3)
    _1512 = (_month_3273 == 9);
    // SubProg julianDayOfYear pc: 94 op: NOP1 (159)
    // SubProg julianDayOfYear pc: 95 op: IF (20)
    if (_1512 == 0)
    {
        DeRef(_1512);
        _1512 = NOVALUE;
        goto L4; // [95] 128
    }
    else{
        DeRef(_1512);
        _1512 = NOVALUE;
    }
    // SubProg julianDayOfYear pc: 98 op: STARTLINE (58)

    /** datetime.e:138			if day > 13 then*/
    // SubProg julianDayOfYear pc: 100 op: GREATER_IFW_I (124)
    if (_day_3274 <= 13)
    goto L5; // [100] 113
    // SubProg julianDayOfYear pc: 104 op: STARTLINE (58)

    /** datetime.e:139				d -= 11*/
    // SubProg julianDayOfYear pc: 106 op: MINUS_I (116)
    _d_3275 = _d_3275 - 11;
    // SubProg julianDayOfYear pc: 110 op: ELSE (23)
    goto L6; // [110] 127
    // SubProg julianDayOfYear pc: 112 op: NOP1 (159)
L5: // addr: 113 pc: 112 sub: 3269 op: 159
    // SubProg julianDayOfYear pc: 113 op: STARTLINE (58)

    /** datetime.e:140			elsif day > 2 then*/
    // SubProg julianDayOfYear pc: 115 op: GREATER_IFW_I (124)
    if (_day_3274 <= 2)
    goto L7; // [115] 126
    // SubProg julianDayOfYear pc: 119 op: STARTLINE (58)

    /** datetime.e:141				return 0*/
    // SubProg julianDayOfYear pc: 121 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_3271
    DeRef(_ymd_3271);

// block var year_3272

// block var month_3273

// block var day_3274

// block var d_3275
    DeRef(_1506);
    _1506 = NOVALUE;
    DeRef(_1510);
    _1510 = NOVALUE;
    return 0;
    // SubProg julianDayOfYear pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 3269 op: 159
    // SubProg julianDayOfYear pc: 126 op: NOP1 (159)
L6: // addr: 127 pc: 126 sub: 3269 op: 159
    // SubProg julianDayOfYear pc: 127 op: NOP1 (159)
L4: // addr: 128 pc: 127 sub: 3269 op: 159
    // SubProg julianDayOfYear pc: 128 op: STARTLINE (58)

    /** datetime.e:145		return d*/
    // SubProg julianDayOfYear pc: 130 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_3271
    DeRef(_ymd_3271);

// block var year_3272

// block var month_3273

// block var day_3274
    DeRef(_1506);
    _1506 = NOVALUE;
    DeRef(_1510);
    _1510 = NOVALUE;
    return _d_3275;
    // SubProg julianDayOfYear pc: 134 op: BADRETURNF (43)
    ;
}


object _21julianDay(object _ymd_3298)
{
    object _year_3299 = NOVALUE;
    object _j_3300 = NOVALUE;
    object _greg00_3301 = NOVALUE;
// skipping _1542  name type: 0
    object _1541 = NOVALUE; // 3329 1541
// skipping _1540  name type: 0
// skipping _1539  name type: 0
    object _1538 = NOVALUE; // 3325 1538
// skipping _1537  name type: 0
// skipping _1536  name type: 0
    object _1535 = NOVALUE; // 3321 1535
    object _1534 = NOVALUE; // 3320 1534
    object _1533 = NOVALUE; // 3319 1533
    object _1532 = NOVALUE; // 3318 1532
    object _1531 = NOVALUE; // 3317 1531
    object _1530 = NOVALUE; // 3316 1530
    object _1529 = NOVALUE; // 3315 1529
    object _1528 = NOVALUE; // 3314 1528
    object _1526 = NOVALUE; // 3312 1526
    object _1525 = NOVALUE; // 3311 1525
    object _1524 = NOVALUE; // 3310 1524
    object _1523 = NOVALUE; // 3309 1523
    object _1522 = NOVALUE; // 3308 1522
    object _1521 = NOVALUE; // 3307 1521
    object _1520 = NOVALUE; // 3306 1520
// skipping _1519  name type: 0
// skipping _1518  name type: 0
// skipping _1517  name type: 0
// skipping _1516  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg julianDay pc: 1 op: STARTLINE (58)

    /** datetime.e:152		year = ymd[1]*/
    // SubProg julianDay pc: 3 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_3298);
    _year_3299 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_3299)){
        _year_3299 = (object)DBL_PTR(_year_3299)->dbl;
    }
    // SubProg julianDay pc: 9 op: STARTLINE (58)

    /** datetime.e:153		j = julianDayOfYear(ymd)*/
    // SubProg julianDay pc: 11 op: PROC (27)
    Ref(_ymd_3298);
    _j_3300 = _21julianDayOfYear(_ymd_3298);
    // SubProg julianDay pc: 15 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_3300)) {
        _1 = (object)(DBL_PTR(_j_3300)->dbl);
        DeRefDS(_j_3300);
        _j_3300 = _1;
    }
    // SubProg julianDay pc: 17 op: STARTLINE (58)

    /** datetime.e:155		year  -= 1*/
    // SubProg julianDay pc: 19 op: MINUS_I (116)
    _year_3299 = _year_3299 - 1;
    // SubProg julianDay pc: 23 op: STARTLINE (58)

    /** datetime.e:156		greg00 = year - Gregorian_Reformation00*/
    // SubProg julianDay pc: 25 op: MINUS_I (116)
    _greg00_3301 = _year_3299 - 1700;
    // SubProg julianDay pc: 29 op: STARTLINE (58)

    /** datetime.e:158		j += (*/
    // SubProg julianDay pc: 31 op: MULTIPLY (13)
    if (_year_3299 <= INT15 && _year_3299 >= -INT15){
        _1520 = 365 * _year_3299;
    }
    else{
        _1520 = NewDouble(365 * (eudouble)_year_3299);
    }
    // SubProg julianDay pc: 35 op: FLOOR_DIV (63)
    if (4 > 0 && _year_3299 >= 0) {
        _1521 = _year_3299 / 4;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_3299 / (eudouble)4);
        _1521 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 39 op: PLUS (11)
    if (IS_ATOM_INT(_1520)) {
        _1522 = _1520 + _1521;
        if ((object)((uintptr_t)_1522 + (uintptr_t)HIGH_BITS) >= 0){
            _1522 = NewDouble((eudouble)_1522);
        }
    }
    else {
        _1522 = NewDouble(DBL_PTR(_1520)->dbl + (eudouble)_1521);
    }
    DeRef(_1520);
    _1520 = NOVALUE;
    _1521 = NOVALUE;
    // SubProg julianDay pc: 43 op: GREATER (6)
    _1523 = (_greg00_3301 > 0);
    // SubProg julianDay pc: 47 op: FLOOR_DIV (63)
    if (100 > 0 && _greg00_3301 >= 0) {
        _1524 = _greg00_3301 / 100;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_greg00_3301 / (eudouble)100);
        _1524 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 51 op: UMINUS (12)
    _1525 = - _1524;
    // SubProg julianDay pc: 54 op: DIVIDE (14)
    _1526 = (_greg00_3301 % 400) ? NewDouble((eudouble)_greg00_3301 / 400) : (_greg00_3301 / 400);
    // SubProg julianDay pc: 58 op: PLUS (11)
    if (IS_ATOM_INT(_1526)) {
        _1528 = NewDouble((eudouble)_1526 + DBL_PTR(_1527)->dbl);
    }
    else {
        _1528 = NewDouble(DBL_PTR(_1526)->dbl + DBL_PTR(_1527)->dbl);
    }
    DeRef(_1526);
    _1526 = NOVALUE;
    // SubProg julianDay pc: 62 op: FLOOR (83)
    _1529 = unary_op(FLOOR, _1528);
    DeRefDS(_1528);
    _1528 = NOVALUE;
    // SubProg julianDay pc: 65 op: PLUS (11)
    if (IS_ATOM_INT(_1529)) {
        _1530 = _1525 + _1529;
        if ((object)((uintptr_t)_1530 + (uintptr_t)HIGH_BITS) >= 0){
            _1530 = NewDouble((eudouble)_1530);
        }
    }
    else {
        _1530 = binary_op(PLUS, _1525, _1529);
    }
    _1525 = NOVALUE;
    DeRef(_1529);
    _1529 = NOVALUE;
    // SubProg julianDay pc: 69 op: MULTIPLY (13)
    if (IS_ATOM_INT(_1530)) {
        if (_1530 <= INT15 && _1530 >= -INT15){
            _1531 = _1523 * _1530;
        }
        else{
            _1531 = NewDouble(_1523 * (eudouble)_1530);
        }
    }
    else {
        _1531 = binary_op(MULTIPLY, _1523, _1530);
    }
    _1523 = NOVALUE;
    DeRef(_1530);
    _1530 = NOVALUE;
    // SubProg julianDay pc: 73 op: PLUS (11)
    if (IS_ATOM_INT(_1522) && IS_ATOM_INT(_1531)) {
        _1532 = _1522 + _1531;
        if ((object)((uintptr_t)_1532 + (uintptr_t)HIGH_BITS) >= 0){
            _1532 = NewDouble((eudouble)_1532);
        }
    }
    else {
        _1532 = binary_op(PLUS, _1522, _1531);
    }
    DeRef(_1522);
    _1522 = NOVALUE;
    DeRef(_1531);
    _1531 = NOVALUE;
    // SubProg julianDay pc: 77 op: GREATEREQ (2)
    _1533 = (_year_3299 >= 1752);
    // SubProg julianDay pc: 81 op: MULTIPLY (13)
    _1534 = 11 * _1533;
    _1533 = NOVALUE;
    // SubProg julianDay pc: 85 op: MINUS (10)
    if (IS_ATOM_INT(_1532)) {
        _1535 = _1532 - _1534;
        if ((object)((uintptr_t)_1535 +(uintptr_t) HIGH_BITS) >= 0){
            _1535 = NewDouble((eudouble)_1535);
        }
    }
    else {
        _1535 = binary_op(MINUS, _1532, _1534);
    }
    DeRef(_1532);
    _1532 = NOVALUE;
    _1534 = NOVALUE;
    // SubProg julianDay pc: 89 op: PLUS (11)
    if (IS_ATOM_INT(_1535)) {
        _j_3300 = _j_3300 + _1535;
    }
    else {
        _j_3300 = binary_op(PLUS, _j_3300, _1535);
    }
    DeRef(_1535);
    _1535 = NOVALUE;
    // SubProg julianDay pc: 93 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_3300)) {
        _1 = (object)(DBL_PTR(_j_3300)->dbl);
        DeRefDS(_j_3300);
        _j_3300 = _1;
    }
    // SubProg julianDay pc: 95 op: STARTLINE (58)

    /** datetime.e:169		if year >= 3200 then*/
    // SubProg julianDay pc: 97 op: GREATEREQ_IFW_I (120)
    if (_year_3299 < 3200)
    goto L1; // [97] 133
    // SubProg julianDay pc: 101 op: STARTLINE (58)

    /** datetime.e:170			j -= floor(year/ 3200)*/
    // SubProg julianDay pc: 103 op: FLOOR_DIV (63)
    if (3200 > 0 && _year_3299 >= 0) {
        _1538 = _year_3299 / 3200;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_3299 / (eudouble)3200);
        _1538 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 107 op: MINUS (10)
    _j_3300 = _j_3300 - _1538;
    _1538 = NOVALUE;
    // SubProg julianDay pc: 113 op: STARTLINE (58)

    /** datetime.e:171			if year >= 80000 then*/
    // SubProg julianDay pc: 115 op: GREATEREQ_IFW_I (120)
    if (_year_3299 < 80000)
    goto L2; // [115] 132
    // SubProg julianDay pc: 119 op: STARTLINE (58)

    /** datetime.e:172				j += floor(year/80000)*/
    // SubProg julianDay pc: 121 op: FLOOR_DIV (63)
    if (80000 > 0 && _year_3299 >= 0) {
        _1541 = _year_3299 / 80000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_3299 / (eudouble)80000);
        _1541 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 125 op: PLUS (11)
    _j_3300 = _j_3300 + _1541;
    _1541 = NOVALUE;
    // SubProg julianDay pc: 131 op: NOP1 (159)
L2: // addr: 132 pc: 131 sub: 3296 op: 159
    // SubProg julianDay pc: 132 op: NOP1 (159)
L1: // addr: 133 pc: 132 sub: 3296 op: 159
    // SubProg julianDay pc: 133 op: STARTLINE (58)

    /** datetime.e:176		return j*/
    // SubProg julianDay pc: 135 op: RETURNF (28)

// Exiting block BLOCK: julianDay

// block var ymd_3298
    DeRef(_ymd_3298);

// block var year_3299

// block var greg00_3301
    DeRef(_1524);
    _1524 = NOVALUE;
    return _j_3300;
    // SubProg julianDay pc: 139 op: BADRETURNF (43)
    ;
}


object _21datetimeToSeconds(object _dt_3387)
{
    object _1585 = NOVALUE; // 3398 1585
    object _1584 = NOVALUE; // 3397 1584
    object _1583 = NOVALUE; // 3396 1583
    object _1582 = NOVALUE; // 3395 1582
    object _1581 = NOVALUE; // 3394 1581
    object _1580 = NOVALUE; // 3393 1580
    object _1579 = NOVALUE; // 3392 1579
    object _1577 = NOVALUE; // 3390 1577
    object _1576 = NOVALUE; // 3389 1576
    object _1575 = NOVALUE; // 3388 1575
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg datetimeToSeconds pc: 1 op: STARTLINE (58)

    /** datetime.e:226		return julianDay(dt) * DayLengthInSeconds + (dt[4] * 60 + dt[5]) * 60 + dt[6]*/
    // SubProg datetimeToSeconds pc: 3 op: PROC (27)
    Ref(_dt_3387);
    _1575 = _21julianDay(_dt_3387);
    // SubProg datetimeToSeconds pc: 7 op: MULTIPLY (13)
    if (IS_ATOM_INT(_1575)) {
        _1576 = NewDouble(_1575 * (eudouble)86400);
    }
    else {
        _1576 = binary_op(MULTIPLY, _1575, 86400);
    }
    DeRef(_1575);
    _1575 = NOVALUE;
    // SubProg datetimeToSeconds pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_3387);
    _1577 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg datetimeToSeconds pc: 15 op: MULTIPLY (13)
    if (IS_ATOM_INT(_1577)) {
        if (_1577 == (short)_1577){
            _1579 = _1577 * 60;
        }
        else{
            _1579 = NewDouble(_1577 * (eudouble)60);
        }
    }
    else {
        _1579 = binary_op(MULTIPLY, _1577, 60);
    }
    _1577 = NOVALUE;
    // SubProg datetimeToSeconds pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_3387);
    _1580 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg datetimeToSeconds pc: 23 op: PLUS (11)
    if (IS_ATOM_INT(_1579) && IS_ATOM_INT(_1580)) {
        _1581 = _1579 + _1580;
        if ((object)((uintptr_t)_1581 + (uintptr_t)HIGH_BITS) >= 0){
            _1581 = NewDouble((eudouble)_1581);
        }
    }
    else {
        _1581 = binary_op(PLUS, _1579, _1580);
    }
    DeRef(_1579);
    _1579 = NOVALUE;
    _1580 = NOVALUE;
    // SubProg datetimeToSeconds pc: 27 op: MULTIPLY (13)
    if (IS_ATOM_INT(_1581)) {
        if (_1581 == (short)_1581){
            _1582 = _1581 * 60;
        }
        else{
            _1582 = NewDouble(_1581 * (eudouble)60);
        }
    }
    else {
        _1582 = binary_op(MULTIPLY, _1581, 60);
    }
    DeRef(_1581);
    _1581 = NOVALUE;
    // SubProg datetimeToSeconds pc: 31 op: PLUS (11)
    if (IS_ATOM_INT(_1576) && IS_ATOM_INT(_1582)) {
        _1583 = _1576 + _1582;
        if ((object)((uintptr_t)_1583 + (uintptr_t)HIGH_BITS) >= 0){
            _1583 = NewDouble((eudouble)_1583);
        }
    }
    else {
        _1583 = binary_op(PLUS, _1576, _1582);
    }
    DeRef(_1576);
    _1576 = NOVALUE;
    DeRef(_1582);
    _1582 = NOVALUE;
    // SubProg datetimeToSeconds pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_3387);
    _1584 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg datetimeToSeconds pc: 39 op: PLUS (11)
    if (IS_ATOM_INT(_1583) && IS_ATOM_INT(_1584)) {
        _1585 = _1583 + _1584;
        if ((object)((uintptr_t)_1585 + (uintptr_t)HIGH_BITS) >= 0){
            _1585 = NewDouble((eudouble)_1585);
        }
    }
    else {
        _1585 = binary_op(PLUS, _1583, _1584);
    }
    DeRef(_1583);
    _1583 = NOVALUE;
    _1584 = NOVALUE;
    // SubProg datetimeToSeconds pc: 43 op: RETURNF (28)

// Exiting block BLOCK: datetimeToSeconds

// block var dt_3387
    DeRef(_dt_3387);
    return _1585;
    // SubProg datetimeToSeconds pc: 47 op: BADRETURNF (43)
    ;
}


object _21from_date(object _src_3554)
{
    object _1700 = NOVALUE; // 3563 1700
    object _1699 = NOVALUE; // 3562 1699
    object _1698 = NOVALUE; // 3561 1698
    object _1697 = NOVALUE; // 3560 1697
    object _1696 = NOVALUE; // 3559 1696
    object _1695 = NOVALUE; // 3558 1695
    object _1694 = NOVALUE; // 3557 1694
    object _1692 = NOVALUE; // 3555 1692
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg from_date pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg from_date pc: 3 op: STARTLINE (58)

    /** datetime.e:513		return {src[YEAR]+1900, src[MONTH], src[DAY], src[HOUR], src[MINUTE], src[SECOND]}*/
    // SubProg from_date pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_3554);
    _1692 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg from_date pc: 9 op: PLUS (11)
    _1694 = _1692 + 1900;
    if ((object)((uintptr_t)_1694 + (uintptr_t)HIGH_BITS) >= 0){
        _1694 = NewDouble((eudouble)_1694);
    }
    _1692 = NOVALUE;
    // SubProg from_date pc: 13 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_3554);
    _1695 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg from_date pc: 17 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_3554);
    _1696 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg from_date pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_3554);
    _1697 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg from_date pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_3554);
    _1698 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg from_date pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_3554);
    _1699 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg from_date pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _1694;
    ((intptr_t*)_2)[2] = _1695;
    ((intptr_t*)_2)[3] = _1696;
    ((intptr_t*)_2)[4] = _1697;
    ((intptr_t*)_2)[5] = _1698;
    ((intptr_t*)_2)[6] = _1699;
    _1700 = MAKE_SEQ(_1);
    _1699 = NOVALUE;
    _1698 = NOVALUE;
    _1697 = NOVALUE;
    _1696 = NOVALUE;
    _1695 = NOVALUE;
    _1694 = NOVALUE;
    // SubProg from_date pc: 42 op: RETURNF (28)

// Exiting block BLOCK: from_date

// block var src_3554
    DeRefDSi(_src_3554);
    return _1700;
    // SubProg from_date pc: 46 op: BADRETURNF (43)
    ;
}


object _21new(object _year_3586, object _month_3587, object _day_3588, object _hour_3589, object _minute_3590, object _second_3591)
{
    object _d_3592 = NOVALUE;
    object _now_1__tmp_at41_3599 = NOVALUE;
    object _now_inlined_now_at_41_3598 = NOVALUE;
    object _1715 = NOVALUE; // 3596 1715
    object _1714 = NOVALUE; // 3595 1714
// skipping _1713  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_year_3586)) {
        _1 = (object)(DBL_PTR(_year_3586)->dbl);
        DeRefDS(_year_3586);
        _year_3586 = _1;
    }
    // SubProg new pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_month_3587)) {
        _1 = (object)(DBL_PTR(_month_3587)->dbl);
        DeRefDS(_month_3587);
        _month_3587 = _1;
    }
    // SubProg new pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_day_3588)) {
        _1 = (object)(DBL_PTR(_day_3588)->dbl);
        DeRefDS(_day_3588);
        _day_3588 = _1;
    }
    // SubProg new pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_hour_3589)) {
        _1 = (object)(DBL_PTR(_hour_3589)->dbl);
        DeRefDS(_hour_3589);
        _hour_3589 = _1;
    }
    // SubProg new pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_minute_3590)) {
        _1 = (object)(DBL_PTR(_minute_3590)->dbl);
        DeRefDS(_minute_3590);
        _minute_3590 = _1;
    }
    // SubProg new pc: 11 op: STARTLINE (58)

    /** datetime.e:587		d = {year, month, day, hour, minute, second}*/
    // SubProg new pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _d_3592;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _year_3586;
    ((intptr_t*)_2)[2] = _month_3587;
    ((intptr_t*)_2)[3] = _day_3588;
    ((intptr_t*)_2)[4] = _hour_3589;
    ((intptr_t*)_2)[5] = _minute_3590;
    Ref(_second_3591);
    ((intptr_t*)_2)[6] = _second_3591;
    _d_3592 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg new pc: 22 op: STARTLINE (58)

    /** datetime.e:588		if equal(d, {0,0,0,0,0,0}) then*/
    // SubProg new pc: 24 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 0;
    _1714 = MAKE_SEQ(_1);
    // SubProg new pc: 33 op: EQUAL (153)
    if (_d_3592 == _1714)
    _1715 = 1;
    else if (IS_ATOM_INT(_d_3592) && IS_ATOM_INT(_1714))
    _1715 = 0;
    else
    _1715 = (compare(_d_3592, _1714) == 0);
    DeRefDS(_1714);
    _1714 = NOVALUE;
    // SubProg new pc: 37 op: IF (20)
    if (_1715 == 0)
    {
        _1715 = NOVALUE;
        goto L1; // [37] 60
    }
    else{
        _1715 = NOVALUE;
    }
    // SubProg new pc: 40 op: STARTLINE (58)

    /** datetime.e:589			return now()*/
    // SubProg new pc: 42 op: STARTLINE (58)

    /** datetime.e:533		return from_date(date())*/
    // SubProg new pc: 44 op: DATE (69)
    DeRefi(_now_1__tmp_at41_3599);
    _now_1__tmp_at41_3599 = Date();
    // SubProg new pc: 46 op: PROC (27)
    RefDS(_now_1__tmp_at41_3599);
    _0 = _now_inlined_now_at_41_3598;
    _now_inlined_now_at_41_3598 = _21from_date(_now_1__tmp_at41_3599);
    DeRef(_0);
    // SubProg new pc: 50 op: NOP1 (159)
    // SubProg new pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-now from new @ 41

// block var now_1__tmp_at41_3599
    DeRefi(_now_1__tmp_at41_3599);
    _now_1__tmp_at41_3599 = NOVALUE;
    // SubProg new pc: 53 op: RETURNF (28)

// Exiting block BLOCK: new

// block var year_3586

// block var month_3587

// block var day_3588

// block var hour_3589

// block var minute_3590

// block var second_3591
    DeRef(_second_3591);

// block var d_3592
    DeRef(_d_3592);
    return _now_inlined_now_at_41_3598;
    // SubProg new pc: 57 op: ELSE (23)
    goto L2; // [57] 67
    // SubProg new pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 3584 op: 159
    // SubProg new pc: 60 op: STARTLINE (58)

    /** datetime.e:591			return d*/
    // SubProg new pc: 62 op: RETURNF (28)

// Exiting block BLOCK: new

// block var year_3586

// block var month_3587

// block var day_3588

// block var hour_3589

// block var minute_3590

// block var second_3591
    DeRef(_second_3591);
    return _d_3592;
    // SubProg new pc: 66 op: NOP1 (159)
L2: // addr: 67 pc: 66 sub: 3584 op: 159
    // SubProg new pc: 67 op: BADRETURNF (43)
    ;
}



// 0xF66736B1
