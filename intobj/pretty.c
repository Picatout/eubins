// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _23pretty_out(object _text_3346)
{
// skipping _1540  name type: 0
    object _1539 = NOVALUE; // 3356 1539
// skipping _1538  name type: 0
    object _1537 = NOVALUE; // 3353 1537
// skipping _1536  name type: 0
    object _1535 = NOVALUE; // 3350 1535
    object _1534 = NOVALUE; // 3349 1534
// skipping _1533  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pretty_out pc: 1 op: STARTLINE (58)

    /** pretty.e:19		pretty_line &= text*/
    // SubProg pretty_out pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 5 op: CONCAT (15)
    if (IS_SEQUENCE(_23pretty_line_3343) && IS_ATOM(_text_3346)) {
        Ref(_text_3346);
        Append(&_23pretty_line_3343, _23pretty_line_3343, _text_3346);
    }
    else if (IS_ATOM(_23pretty_line_3343) && IS_SEQUENCE(_text_3346)) {
    }
    else {
        Concat((object_ptr)&_23pretty_line_3343, _23pretty_line_3343, _text_3346);
    }
    // SubProg pretty_out pc: 9 op: STARTLINE (58)

    /** pretty.e:20		if equal(text, '\n') and pretty_printing then*/
    // SubProg pretty_out pc: 11 op: EQUAL (153)
    if (_text_3346 == 10)
    _1534 = 1;
    else if (IS_ATOM_INT(_text_3346) && IS_ATOM_INT(10))
    _1534 = 0;
    else
    _1534 = (compare(_text_3346, 10) == 0);
    // SubProg pretty_out pc: 15 op: SC1_AND_IF (146)
    if (_1534 == 0) {
        goto L1; // [15] 50
    }
    // SubProg pretty_out pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 21 op: NOP1 (159)
    // SubProg pretty_out pc: 22 op: IF (20)
    goto L1; // [22] 50
    // SubProg pretty_out pc: 25 op: STARTLINE (58)

    /** pretty.e:21			puts(pretty_file, pretty_line)*/
    // SubProg pretty_out pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 31 op: PUTS (44)
    EPuts(_23pretty_file_3331, _23pretty_line_3343); // DJP 
    // SubProg pretty_out pc: 34 op: STARTLINE (58)

    /** pretty.e:22			pretty_line = ""*/
    // SubProg pretty_out pc: 36 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_23pretty_line_3343);
    _23pretty_line_3343 = _5;
    // SubProg pretty_out pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg pretty_out pc: 41 op: STARTLINE (58)

    /** pretty.e:23			pretty_line_count += 1*/
    // SubProg pretty_out pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 45 op: PLUS1_I (117)
    _23pretty_line_count_3336 = _23pretty_line_count_3336 + 1;
    // SubProg pretty_out pc: 49 op: NOP1 (159)
L1: // addr: 50 pc: 49 sub: 3344 op: 159
    // SubProg pretty_out pc: 50 op: STARTLINE (58)

    /** pretty.e:25		if atom(text) then*/
    // SubProg pretty_out pc: 52 op: IS_AN_ATOM (67)
    _1537 = IS_ATOM(_text_3346);
    // SubProg pretty_out pc: 55 op: IF (20)
    if (_1537 == 0)
    {
        _1537 = NOVALUE;
        goto L2; // [55] 69
    }
    else{
        _1537 = NOVALUE;
    }
    // SubProg pretty_out pc: 58 op: STARTLINE (58)

    /** pretty.e:26			pretty_chars += 1*/
    // SubProg pretty_out pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 62 op: PLUS1_I (117)
    _23pretty_chars_3328 = _23pretty_chars_3328 + 1;
    // SubProg pretty_out pc: 66 op: ELSE (23)
    goto L3; // [66] 81
    // SubProg pretty_out pc: 68 op: NOP1 (159)
L2: // addr: 69 pc: 68 sub: 3344 op: 159
    // SubProg pretty_out pc: 69 op: STARTLINE (58)

    /** pretty.e:28			pretty_chars += length(text)*/
    // SubProg pretty_out pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_text_3346)){
            _1539 = SEQ_PTR(_text_3346)->length;
    }
    else {
        _1539 = 1;
    }
    // SubProg pretty_out pc: 76 op: PLUS_I (115)
    _23pretty_chars_3328 = _23pretty_chars_3328 + _1539;
    _1539 = NOVALUE;
    // SubProg pretty_out pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 3344 op: 159
    // SubProg pretty_out pc: 81 op: STARTLINE (58)

    /** pretty.e:30	end procedure*/
    // SubProg pretty_out pc: 83 op: RETURNP (29)

// Exiting block BLOCK: pretty_out

// block var text_3346
    DeRef(_text_3346);
    return;
    // SubProg pretty_out pc: 86 op: BADRETURNF (43)
    ;
}


void _23cut_line(object _n_3360)
{
// skipping _1543  name type: 0
    object _1542 = NOVALUE; // 3364 1542
// skipping _1541  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cut_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg cut_line pc: 3 op: STARTLINE (58)

    /** pretty.e:34		if not pretty_line_breaks then	*/
    // SubProg cut_line pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 7 op: NOT_IFW (108)
    if (_23pretty_line_breaks_3339 != 0)
    goto L1; // [7] 21
    // SubProg cut_line pc: 10 op: STARTLINE (58)

    /** pretty.e:35			pretty_chars = 0*/
    // SubProg cut_line pc: 12 op: ASSIGN_I (113)
    _23pretty_chars_3328 = 0;
    // SubProg cut_line pc: 15 op: STARTLINE (58)

    /** pretty.e:36			return*/
    // SubProg cut_line pc: 17 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: cut_line

// block var n_3360
    return;
    // SubProg cut_line pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 3358 op: 159
    // SubProg cut_line pc: 21 op: STARTLINE (58)

    /** pretty.e:38		if pretty_chars + n > pretty_end_col then*/
    // SubProg cut_line pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 25 op: PLUS (11)
    _1542 = _23pretty_chars_3328 + _n_3360;
    if ((object)((uintptr_t)_1542 + (uintptr_t)HIGH_BITS) >= 0){
        _1542 = NewDouble((eudouble)_1542);
    }
    // SubProg cut_line pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 31 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _1542, _23pretty_end_col_3327)){
        DeRef(_1542);
        _1542 = NOVALUE;
        goto L2; // [31] 46
    }
    DeRef(_1542);
    _1542 = NOVALUE;
    // SubProg cut_line pc: 35 op: STARTLINE (58)

    /** pretty.e:39			pretty_out('\n')*/
    // SubProg cut_line pc: 37 op: PROC (27)
    _23pretty_out(10);
    // SubProg cut_line pc: 40 op: STARTLINE (58)

    /** pretty.e:40			pretty_chars = 0*/
    // SubProg cut_line pc: 42 op: ASSIGN_I (113)
    _23pretty_chars_3328 = 0;
    // SubProg cut_line pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 3358 op: 159
    // SubProg cut_line pc: 46 op: STARTLINE (58)

    /** pretty.e:42	end procedure*/
    // SubProg cut_line pc: 48 op: RETURNP (29)

// Exiting block BLOCK: cut_line

// block var n_3360
    return;
    // SubProg cut_line pc: 51 op: BADRETURNF (43)
    ;
}


void _23indent()
{
    object _1550 = NOVALUE; // 3378 1550
    object _1549 = NOVALUE; // 3377 1549
    object _1548 = NOVALUE; // 3376 1548
    object _1547 = NOVALUE; // 3375 1547
// skipping _1546  name type: 0
// skipping _1545  name type: 0
// skipping _1544  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg indent pc: 1 op: STARTLINE (58)

    /** pretty.e:46		if pretty_line_breaks = 0 then	*/
    // SubProg indent pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 5 op: EQUALS_IFW_I (121)
    if (_23pretty_line_breaks_3339 != 0)
    goto L1; // [5] 22
    // SubProg indent pc: 9 op: STARTLINE (58)

    /** pretty.e:47			pretty_chars = 0*/
    // SubProg indent pc: 11 op: ASSIGN_I (113)
    _23pretty_chars_3328 = 0;
    // SubProg indent pc: 14 op: STARTLINE (58)

    /** pretty.e:48			return*/
    // SubProg indent pc: 16 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: indent
    return;
    // SubProg indent pc: 19 op: ELSE (23)
    goto L2; // [19] 85
    // SubProg indent pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 3366 op: 159
    // SubProg indent pc: 22 op: STARTLINE (58)

    /** pretty.e:49		elsif pretty_line_breaks = -1 then*/
    // SubProg indent pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 26 op: EQUALS_IFW_I (121)
    if (_23pretty_line_breaks_3339 != -1)
    goto L3; // [26] 38
    // SubProg indent pc: 30 op: STARTLINE (58)

    /** pretty.e:51			cut_line( 0 )*/
    // SubProg indent pc: 32 op: PROC (27)
    _23cut_line(0);
    // SubProg indent pc: 35 op: ELSE (23)
    goto L2; // [35] 85
    // SubProg indent pc: 37 op: NOP1 (159)
L3: // addr: 38 pc: 37 sub: 3366 op: 159
    // SubProg indent pc: 38 op: STARTLINE (58)

    /** pretty.e:54			if pretty_chars > 0 then*/
    // SubProg indent pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 42 op: GREATER_IFW_I (124)
    if (_23pretty_chars_3328 <= 0)
    goto L4; // [42] 57
    // SubProg indent pc: 46 op: STARTLINE (58)

    /** pretty.e:55				pretty_out('\n')*/
    // SubProg indent pc: 48 op: PROC (27)
    _23pretty_out(10);
    // SubProg indent pc: 51 op: STARTLINE (58)

    /** pretty.e:56				pretty_chars = 0*/
    // SubProg indent pc: 53 op: ASSIGN_I (113)
    _23pretty_chars_3328 = 0;
    // SubProg indent pc: 56 op: NOP1 (159)
L4: // addr: 57 pc: 56 sub: 3366 op: 159
    // SubProg indent pc: 57 op: STARTLINE (58)

    /** pretty.e:58			pretty_out(repeat(' ', (pretty_start_col-1) + */
    // SubProg indent pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 61 op: MINUS (10)
    _1547 = _23pretty_start_col_3329 - 1;
    if ((object)((uintptr_t)_1547 +(uintptr_t) HIGH_BITS) >= 0){
        _1547 = NewDouble((eudouble)_1547);
    }
    // SubProg indent pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 69 op: MULTIPLY (13)
    if (_23pretty_level_3330 == (short)_23pretty_level_3330 && _23pretty_indent_3333 <= INT15 && _23pretty_indent_3333 >= -INT15){
        _1548 = _23pretty_level_3330 * _23pretty_indent_3333;
    }
    else{
        _1548 = NewDouble(_23pretty_level_3330 * (eudouble)_23pretty_indent_3333);
    }
    // SubProg indent pc: 73 op: PLUS (11)
    if (IS_ATOM_INT(_1547) && IS_ATOM_INT(_1548)) {
        _1549 = _1547 + _1548;
    }
    else {
        if (IS_ATOM_INT(_1547)) {
            _1549 = NewDouble((eudouble)_1547 + DBL_PTR(_1548)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1548)) {
                _1549 = NewDouble(DBL_PTR(_1547)->dbl + (eudouble)_1548);
            }
            else
            _1549 = NewDouble(DBL_PTR(_1547)->dbl + DBL_PTR(_1548)->dbl);
        }
    }
    DeRef(_1547);
    _1547 = NOVALUE;
    DeRef(_1548);
    _1548 = NOVALUE;
    // SubProg indent pc: 77 op: REPEAT (32)
    _1550 = Repeat(32, _1549);
    DeRef(_1549);
    _1549 = NOVALUE;
    // SubProg indent pc: 81 op: PROC (27)
    _23pretty_out(_1550);
    _1550 = NOVALUE;
    // SubProg indent pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 3366 op: 159
    // SubProg indent pc: 85 op: STARTLINE (58)

    /** pretty.e:62	end procedure*/
    // SubProg indent pc: 87 op: RETURNP (29)

// Exiting block BLOCK: indent
    return;
    // SubProg indent pc: 90 op: BADRETURNF (43)
    ;
}


object _23esc_char(object _a_3381)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg esc_char pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_a_3381)) {
        _1 = (object)(DBL_PTR(_a_3381)->dbl);
        DeRefDS(_a_3381);
        _a_3381 = _1;
    }
    // SubProg esc_char pc: 3 op: STARTLINE (58)

    /** pretty.e:66		switch a do*/
    // SubProg esc_char pc: 5 op: SWITCH_I (193)
    _0 = _a_3381;
    switch ( _0 ){ 
        // SubProg esc_char pc: 10 op: STARTLINE (58)

        /** pretty.e:67			case'\t' then*/
        // SubProg esc_char pc: 12 op: CASE (186)
        case 9:
        // SubProg esc_char pc: 14 op: STARTLINE (58)

        /** pretty.e:68				return `\t`*/
        // SubProg esc_char pc: 16 op: RETURNF (28)
        RefDS(_1553);

// Exiting block BLOCK: esc_char

// block var a_3381
        return _1553;
        // SubProg esc_char pc: 20 op: ELSE (23)
        goto L1; // [20] 81
        // SubProg esc_char pc: 22 op: STARTLINE (58)

        /** pretty.e:70			case'\n' then*/
        // SubProg esc_char pc: 24 op: CASE (186)
        case 10:
        // SubProg esc_char pc: 26 op: STARTLINE (58)

        /** pretty.e:71				return `\n`*/
        // SubProg esc_char pc: 28 op: RETURNF (28)
        RefDS(_1554);

// Exiting block BLOCK: esc_char

// block var a_3381
        return _1554;
        // SubProg esc_char pc: 32 op: ELSE (23)
        goto L1; // [32] 81
        // SubProg esc_char pc: 34 op: STARTLINE (58)

        /** pretty.e:73			case'\r' then*/
        // SubProg esc_char pc: 36 op: CASE (186)
        case 13:
        // SubProg esc_char pc: 38 op: STARTLINE (58)

        /** pretty.e:74				return `\r`*/
        // SubProg esc_char pc: 40 op: RETURNF (28)
        RefDS(_1555);

// Exiting block BLOCK: esc_char

// block var a_3381
        return _1555;
        // SubProg esc_char pc: 44 op: ELSE (23)
        goto L1; // [44] 81
        // SubProg esc_char pc: 46 op: STARTLINE (58)

        /** pretty.e:76			case'\\' then*/
        // SubProg esc_char pc: 48 op: CASE (186)
        case 92:
        // SubProg esc_char pc: 50 op: STARTLINE (58)

        /** pretty.e:77				return `\\`*/
        // SubProg esc_char pc: 52 op: RETURNF (28)
        RefDS(_1503);

// Exiting block BLOCK: esc_char

// block var a_3381
        return _1503;
        // SubProg esc_char pc: 56 op: ELSE (23)
        goto L1; // [56] 81
        // SubProg esc_char pc: 58 op: STARTLINE (58)

        /** pretty.e:79			case'"' then*/
        // SubProg esc_char pc: 60 op: CASE (186)
        case 34:
        // SubProg esc_char pc: 62 op: STARTLINE (58)

        /** pretty.e:80				return `\"`*/
        // SubProg esc_char pc: 64 op: RETURNF (28)
        RefDS(_1557);

// Exiting block BLOCK: esc_char

// block var a_3381
        return _1557;
        // SubProg esc_char pc: 68 op: ELSE (23)
        goto L1; // [68] 81
        // SubProg esc_char pc: 70 op: STARTLINE (58)

        /** pretty.e:82			case else*/
        // SubProg esc_char pc: 72 op: CASE (186)
        default:
        // SubProg esc_char pc: 74 op: STARTLINE (58)

        /** pretty.e:83				return a*/
        // SubProg esc_char pc: 76 op: RETURNF (28)

// Exiting block BLOCK: esc_char
        return _a_3381;
        // SubProg esc_char pc: 80 op: NOPSWITCH (187)
    ;}L1: // addr: 81 pc: 80 sub: 3379 op: 187
    // SubProg esc_char pc: 81 op: BADRETURNF (43)
    ;
}


void _23rPrint(object _a_3397)
{
    object _sbuff_3398 = NOVALUE;
    object _multi_line_3399 = NOVALUE;
    object _all_ascii_3400 = NOVALUE;
// skipping _1615  name type: 0
    object _1614 = NOVALUE; // 3481 1614
    object _1613 = NOVALUE; // 3480 1613
    object _1612 = NOVALUE; // 3479 1612
    object _1611 = NOVALUE; // 3478 1611
// skipping _1609  name type: 0
// skipping _1608  name type: 0
    object _1607 = NOVALUE; // 3471 1607
    object _1606 = NOVALUE; // 3469 1606
    object _1605 = NOVALUE; // 3468 1605
    object _1604 = NOVALUE; // 3465 1604
// skipping _1603  name type: 0
    object _1602 = NOVALUE; // 3459 1602
    object _1601 = NOVALUE; // 3458 1601
// skipping _1600  name type: 0
    object _1599 = NOVALUE; // 3456 1599
    object _1598 = NOVALUE; // 3455 1598
    object _1596 = NOVALUE; // 3453 1596
    object _1595 = NOVALUE; // 3452 1595
    object _1594 = NOVALUE; // 3451 1594
    object _1593 = NOVALUE; // 3450 1593
    object _1592 = NOVALUE; // 3449 1592
    object _1591 = NOVALUE; // 3448 1591
    object _1590 = NOVALUE; // 3447 1590
    object _1589 = NOVALUE; // 3446 1589
    object _1588 = NOVALUE; // 3445 1588
    object _1587 = NOVALUE; // 3444 1587
    object _1586 = NOVALUE; // 3442 1586
    object _1585 = NOVALUE; // 3441 1585
    object _1584 = NOVALUE; // 3440 1584
    object _1583 = NOVALUE; // 3439 1583
    object _1582 = NOVALUE; // 3438 1582
    object _1581 = NOVALUE; // 3437 1581
    object _1580 = NOVALUE; // 3435 1580
// skipping _1579  name type: 0
// skipping _1578  name type: 0
// skipping _1577  name type: 0
    object _1576 = NOVALUE; // 3427 1576
    object _1575 = NOVALUE; // 3426 1575
    object _1574 = NOVALUE; // 3425 1574
    object _1573 = NOVALUE; // 3424 1573
    object _1572 = NOVALUE; // 3423 1572
    object _1571 = NOVALUE; // 3422 1571
// skipping _1570  name type: 0
    object _1569 = NOVALUE; // 3418 1569
    object _1568 = NOVALUE; // 3417 1568
// skipping _1566  name type: 0
    object _1564 = NOVALUE; // 3412 1564
    object _1563 = NOVALUE; // 3411 1563
    object _1562 = NOVALUE; // 3410 1562
// skipping _1561  name type: 0
// skipping _1560  name type: 0
    object _1559 = NOVALUE; // 3404 1559
    object _1558 = NOVALUE; // 3402 1558
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rPrint pc: 1 op: STARTLINE (58)

    /** pretty.e:92		if atom(a) then*/
    // SubProg rPrint pc: 3 op: IS_AN_ATOM (67)
    _1558 = IS_ATOM(_a_3397);
    // SubProg rPrint pc: 6 op: IF (20)
    if (_1558 == 0)
    {
        _1558 = NOVALUE;
        goto L1; // [6] 176
    }
    else{
        _1558 = NOVALUE;
    }
    // SubProg rPrint pc: 9 op: STARTLINE (58)

    /** pretty.e:93			if integer(a) then*/
    // SubProg rPrint pc: 11 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_a_3397))
    _1559 = 1;
    else if (IS_ATOM_DBL(_a_3397))
    _1559 = IS_ATOM_INT(DoubleToInt(_a_3397));
    else
    _1559 = 0;
    // SubProg rPrint pc: 14 op: IF (20)
    if (_1559 == 0)
    {
        _1559 = NOVALUE;
        goto L2; // [14] 157
    }
    else{
        _1559 = NOVALUE;
    }
    // SubProg rPrint pc: 17 op: STARTLINE (58)

    /** pretty.e:94				sbuff = sprintf(pretty_int_format, a)*/
    // SubProg rPrint pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 21 op: SPRINTF (53)
    DeRef(_sbuff_3398);
    _sbuff_3398 = EPrintf(-9999999, _23pretty_int_format_3342, _a_3397);
    // SubProg rPrint pc: 25 op: STARTLINE (58)

    /** pretty.e:95				if pretty_ascii then */
    // SubProg rPrint pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 29 op: IF (20)
    if (_23pretty_ascii_3332 == 0)
    {
        goto L3; // [29] 166
    }
    else{
    }
    // SubProg rPrint pc: 32 op: STARTLINE (58)

    /** pretty.e:96					if pretty_ascii >= 3 then */
    // SubProg rPrint pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 36 op: GREATEREQ_IFW_I (120)
    if (_23pretty_ascii_3332 < 3)
    goto L4; // [36] 103
    // SubProg rPrint pc: 40 op: STARTLINE (58)

    /** pretty.e:98						if (a >= pretty_ascii_min and a <= pretty_ascii_max) then*/
    // SubProg rPrint pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 44 op: GREATEREQ (2)
    if (IS_ATOM_INT(_a_3397)) {
        _1562 = (_a_3397 >= _23pretty_ascii_min_3334);
    }
    else {
        _1562 = binary_op(GREATEREQ, _a_3397, _23pretty_ascii_min_3334);
    }
    // SubProg rPrint pc: 48 op: SC1_AND (141)
    if (IS_ATOM_INT(_1562)) {
        if (_1562 == 0) {
            _1563 = 0;
            goto L5; // [48] 62
        }
    }
    else {
        if (DBL_PTR(_1562)->dbl == 0.0) {
            _1563 = 0;
            goto L5; // [48] 62
        }
    }
    // SubProg rPrint pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 54 op: LESSEQ (5)
    if (IS_ATOM_INT(_a_3397)) {
        _1564 = (_a_3397 <= _23pretty_ascii_max_3335);
    }
    else {
        _1564 = binary_op(LESSEQ, _a_3397, _23pretty_ascii_max_3335);
    }
    // SubProg rPrint pc: 58 op: SC2_AND (142)
    DeRef(_1563);
    if (IS_ATOM_INT(_1564))
    _1563 = (_1564 != 0);
    else
    _1563 = DBL_PTR(_1564)->dbl != 0.0;
    // SubProg rPrint pc: 61 op: NOP1 (159)
L5: // addr: 62 pc: 61 sub: 3395 op: 159
    // SubProg rPrint pc: 62 op: IF (20)
    if (_1563 == 0)
    {
        _1563 = NOVALUE;
        goto L6; // [62] 76
    }
    else{
        _1563 = NOVALUE;
    }
    // SubProg rPrint pc: 65 op: STARTLINE (58)

    /** pretty.e:99							sbuff = '\'' & a & '\''  -- display char only*/
    // SubProg rPrint pc: 67 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_3397;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_3398, concat_list, 3);
    }
    // SubProg rPrint pc: 73 op: ELSE (23)
    goto L3; // [73] 166
    // SubProg rPrint pc: 75 op: NOP1 (159)
L6: // addr: 76 pc: 75 sub: 3395 op: 159
    // SubProg rPrint pc: 76 op: STARTLINE (58)

    /** pretty.e:101						elsif find(a, "\t\n\r\\") then*/
    // SubProg rPrint pc: 78 op: FIND_FROM (176)
    _1568 = find_from(_a_3397, _1567, 1);
    // SubProg rPrint pc: 83 op: IF (20)
    if (_1568 == 0)
    {
        _1568 = NOVALUE;
        goto L3; // [83] 166
    }
    else{
        _1568 = NOVALUE;
    }
    // SubProg rPrint pc: 86 op: STARTLINE (58)

    /** pretty.e:102							sbuff = '\'' & esc_char(a) & '\''  -- display char only*/
    // SubProg rPrint pc: 88 op: PROC (27)
    Ref(_a_3397);
    _1569 = _23esc_char(_a_3397);
    // SubProg rPrint pc: 92 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _1569;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_3398, concat_list, 3);
    }
    DeRef(_1569);
    _1569 = NOVALUE;
    // SubProg rPrint pc: 98 op: NOP1 (159)
    // SubProg rPrint pc: 99 op: NOP1 (159)
    // SubProg rPrint pc: 100 op: ELSE (23)
    goto L3; // [100] 166
    // SubProg rPrint pc: 102 op: NOP1 (159)
L4: // addr: 103 pc: 102 sub: 3395 op: 159
    // SubProg rPrint pc: 103 op: STARTLINE (58)

    /** pretty.e:107						if (a >= pretty_ascii_min and a <= pretty_ascii_max) and pretty_ascii < 2 then*/
    // SubProg rPrint pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 107 op: GREATEREQ (2)
    if (IS_ATOM_INT(_a_3397)) {
        _1571 = (_a_3397 >= _23pretty_ascii_min_3334);
    }
    else {
        _1571 = binary_op(GREATEREQ, _a_3397, _23pretty_ascii_min_3334);
    }
    // SubProg rPrint pc: 111 op: SC1_AND (141)
    if (IS_ATOM_INT(_1571)) {
        if (_1571 == 0) {
            DeRef(_1572);
            _1572 = 0;
            goto L7; // [111] 125
        }
    }
    else {
        if (DBL_PTR(_1571)->dbl == 0.0) {
            DeRef(_1572);
            _1572 = 0;
            goto L7; // [111] 125
        }
    }
    // SubProg rPrint pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 117 op: LESSEQ (5)
    if (IS_ATOM_INT(_a_3397)) {
        _1573 = (_a_3397 <= _23pretty_ascii_max_3335);
    }
    else {
        _1573 = binary_op(LESSEQ, _a_3397, _23pretty_ascii_max_3335);
    }
    // SubProg rPrint pc: 121 op: SC2_AND (142)
    DeRef(_1572);
    if (IS_ATOM_INT(_1573))
    _1572 = (_1573 != 0);
    else
    _1572 = DBL_PTR(_1573)->dbl != 0.0;
    // SubProg rPrint pc: 124 op: NOP1 (159)
L7: // addr: 125 pc: 124 sub: 3395 op: 159
    // SubProg rPrint pc: 125 op: SC1_AND_IF (146)
    if (_1572 == 0) {
        goto L3; // [125] 166
    }
    // SubProg rPrint pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 131 op: LESS (1)
    _1575 = (_23pretty_ascii_3332 < 2);
    // SubProg rPrint pc: 135 op: NOP1 (159)
    // SubProg rPrint pc: 136 op: IF (20)
    if (_1575 == 0)
    {
        DeRef(_1575);
        _1575 = NOVALUE;
        goto L3; // [136] 166
    }
    else{
        DeRef(_1575);
        _1575 = NOVALUE;
    }
    // SubProg rPrint pc: 139 op: STARTLINE (58)

    /** pretty.e:108							sbuff &= '\'' & a & '\'' -- add to numeric display*/
    // SubProg rPrint pc: 141 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_3397;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_1576, concat_list, 3);
    }
    // SubProg rPrint pc: 147 op: CONCAT (15)
    Concat((object_ptr)&_sbuff_3398, _sbuff_3398, _1576);
    DeRefDS(_1576);
    _1576 = NOVALUE;
    // SubProg rPrint pc: 151 op: NOP1 (159)
    // SubProg rPrint pc: 152 op: NOP1 (159)
    // SubProg rPrint pc: 153 op: NOP1 (159)
    // SubProg rPrint pc: 154 op: ELSE (23)
    goto L3; // [154] 166
    // SubProg rPrint pc: 156 op: NOP1 (159)
L2: // addr: 157 pc: 156 sub: 3395 op: 159
    // SubProg rPrint pc: 157 op: STARTLINE (58)

    /** pretty.e:113				sbuff = sprintf(pretty_fp_format, a)*/
    // SubProg rPrint pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 161 op: SPRINTF (53)
    DeRef(_sbuff_3398);
    _sbuff_3398 = EPrintf(-9999999, _23pretty_fp_format_3341, _a_3397);
    // SubProg rPrint pc: 165 op: NOP1 (159)
L3: // addr: 166 pc: 165 sub: 3395 op: 159
    // SubProg rPrint pc: 166 op: STARTLINE (58)

    /** pretty.e:115			pretty_out(sbuff)*/
    // SubProg rPrint pc: 168 op: PRIVATE_INIT_CHECK (30)
    // SubProg rPrint pc: 170 op: PROC (27)
    RefDS(_sbuff_3398);
    _23pretty_out(_sbuff_3398);
    // SubProg rPrint pc: 173 op: ELSE (23)
    goto L8; // [173] 535
    // SubProg rPrint pc: 175 op: NOP1 (159)
L1: // addr: 176 pc: 175 sub: 3395 op: 159
    // SubProg rPrint pc: 176 op: STARTLINE (58)

    /** pretty.e:119			cut_line(1)*/
    // SubProg rPrint pc: 178 op: PROC (27)
    _23cut_line(1);
    // SubProg rPrint pc: 181 op: STARTLINE (58)

    /** pretty.e:120			multi_line = 0*/
    // SubProg rPrint pc: 183 op: ASSIGN_I (113)
    _multi_line_3399 = 0;
    // SubProg rPrint pc: 186 op: STARTLINE (58)

    /** pretty.e:121			all_ascii = pretty_ascii > 1*/
    // SubProg rPrint pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 190 op: GREATER (6)
    _all_ascii_3400 = (_23pretty_ascii_3332 > 1);
    // SubProg rPrint pc: 194 op: STARTLINE (58)

    /** pretty.e:122			for i = 1 to length(a) do*/
    // SubProg rPrint pc: 196 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3397)){
            _1580 = SEQ_PTR(_a_3397)->length;
    }
    else {
        _1580 = 1;
    }
    // SubProg rPrint pc: 199 op: FOR_I (125)
    {
        object _i_3434;
        _i_3434 = 1;
L9: // addr: 206 pc: 199 sub: 3395 op: 125
        if (_i_3434 > _1580){
            goto LA; // [199] 345
        }
        // SubProg rPrint pc: 206 op: STARTLINE (58)

        /** pretty.e:123				if sequence(a[i]) and length(a[i]) > 0 then*/
        // SubProg rPrint pc: 208 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1581 = (object)*(((s1_ptr)_2)->base + _i_3434);
        // SubProg rPrint pc: 212 op: IS_A_SEQUENCE (68)
        _1582 = IS_SEQUENCE(_1581);
        _1581 = NOVALUE;
        // SubProg rPrint pc: 215 op: SC1_AND_IF (146)
        if (_1582 == 0) {
            goto LB; // [215] 249
        }
        // SubProg rPrint pc: 219 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1584 = (object)*(((s1_ptr)_2)->base + _i_3434);
        // SubProg rPrint pc: 223 op: LENGTH (42)
        if (IS_SEQUENCE(_1584)){
                _1585 = SEQ_PTR(_1584)->length;
        }
        else {
            _1585 = 1;
        }
        _1584 = NOVALUE;
        // SubProg rPrint pc: 226 op: GREATER (6)
        _1586 = (_1585 > 0);
        _1585 = NOVALUE;
        // SubProg rPrint pc: 230 op: NOP1 (159)
        // SubProg rPrint pc: 231 op: IF (20)
        if (_1586 == 0)
        {
            DeRef(_1586);
            _1586 = NOVALUE;
            goto LB; // [231] 249
        }
        else{
            DeRef(_1586);
            _1586 = NOVALUE;
        }
        // SubProg rPrint pc: 234 op: STARTLINE (58)

        /** pretty.e:124					multi_line = 1*/
        // SubProg rPrint pc: 236 op: ASSIGN_I (113)
        _multi_line_3399 = 1;
        // SubProg rPrint pc: 239 op: STARTLINE (58)

        /** pretty.e:125					all_ascii = 0*/
        // SubProg rPrint pc: 241 op: ASSIGN_I (113)
        _all_ascii_3400 = 0;
        // SubProg rPrint pc: 244 op: STARTLINE (58)

        /** pretty.e:126					exit*/
        // SubProg rPrint pc: 246 op: EXIT (61)
        goto LA; // [246] 345
        // SubProg rPrint pc: 248 op: NOP1 (159)
LB: // addr: 249 pc: 248 sub: 3395 op: 159
        // SubProg rPrint pc: 249 op: STARTLINE (58)

        /** pretty.e:128				if not integer(a[i]) or*/
        // SubProg rPrint pc: 251 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1587 = (object)*(((s1_ptr)_2)->base + _i_3434);
        // SubProg rPrint pc: 255 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_1587))
        _1588 = 1;
        else if (IS_ATOM_DBL(_1587))
        _1588 = IS_ATOM_INT(DoubleToInt(_1587));
        else
        _1588 = 0;
        _1587 = NOVALUE;
        // SubProg rPrint pc: 258 op: NOT (7)
        _1589 = (_1588 == 0);
        _1588 = NOVALUE;
        // SubProg rPrint pc: 261 op: SC1_OR (143)
        if (_1589 != 0) {
            _1590 = 1;
            goto LC; // [261] 313
        }
        // SubProg rPrint pc: 265 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1591 = (object)*(((s1_ptr)_2)->base + _i_3434);
        // SubProg rPrint pc: 269 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 271 op: LESS (1)
        if (IS_ATOM_INT(_1591)) {
            _1592 = (_1591 < _23pretty_ascii_min_3334);
        }
        else {
            _1592 = binary_op(LESS, _1591, _23pretty_ascii_min_3334);
        }
        _1591 = NOVALUE;
        // SubProg rPrint pc: 275 op: SC1_AND (141)
        if (IS_ATOM_INT(_1592)) {
            if (_1592 == 0) {
                DeRef(_1593);
                _1593 = 0;
                goto LD; // [275] 309
            }
        }
        else {
            if (DBL_PTR(_1592)->dbl == 0.0) {
                DeRef(_1593);
                _1593 = 0;
                goto LD; // [275] 309
            }
        }
        // SubProg rPrint pc: 279 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 281 op: LESS (1)
        _1594 = (_23pretty_ascii_3332 < 2);
        // SubProg rPrint pc: 285 op: SC1_OR (143)
        if (_1594 != 0) {
            _1595 = 1;
            goto LE; // [285] 305
        }
        // SubProg rPrint pc: 289 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1596 = (object)*(((s1_ptr)_2)->base + _i_3434);
        // SubProg rPrint pc: 293 op: FIND_FROM (176)
        _1598 = find_from(_1596, _1597, 1);
        _1596 = NOVALUE;
        // SubProg rPrint pc: 298 op: NOT (7)
        _1599 = (_1598 == 0);
        _1598 = NOVALUE;
        // SubProg rPrint pc: 301 op: SC2_OR (144)
        _1595 = (_1599 != 0);
        // SubProg rPrint pc: 304 op: NOP1 (159)
LE: // addr: 305 pc: 304 sub: 3395 op: 159
        // SubProg rPrint pc: 305 op: SC2_AND (142)
        DeRef(_1593);
        _1593 = (_1595 != 0);
        // SubProg rPrint pc: 308 op: NOP1 (159)
LD: // addr: 309 pc: 308 sub: 3395 op: 159
        // SubProg rPrint pc: 309 op: SC2_OR (144)
        _1590 = (_1593 != 0);
        // SubProg rPrint pc: 312 op: NOP1 (159)
LC: // addr: 313 pc: 312 sub: 3395 op: 159
        // SubProg rPrint pc: 313 op: SC1_OR_IF (147)
        if (_1590 != 0) {
            goto LF; // [313] 332
        }
        // SubProg rPrint pc: 317 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1601 = (object)*(((s1_ptr)_2)->base + _i_3434);
        // SubProg rPrint pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 323 op: GREATER (6)
        if (IS_ATOM_INT(_1601)) {
            _1602 = (_1601 > _23pretty_ascii_max_3335);
        }
        else {
            _1602 = binary_op(GREATER, _1601, _23pretty_ascii_max_3335);
        }
        _1601 = NOVALUE;
        // SubProg rPrint pc: 327 op: NOP1 (159)
        // SubProg rPrint pc: 328 op: IF (20)
        if (_1602 == 0) {
            DeRef(_1602);
            _1602 = NOVALUE;
            goto L10; // [328] 338
        }
        else {
            if (!IS_ATOM_INT(_1602) && DBL_PTR(_1602)->dbl == 0.0){
                DeRef(_1602);
                _1602 = NOVALUE;
                goto L10; // [328] 338
            }
            DeRef(_1602);
            _1602 = NOVALUE;
        }
        DeRef(_1602);
        _1602 = NOVALUE;
        // SubProg rPrint pc: 331 op: NOP1 (159)
LF: // addr: 332 pc: 331 sub: 3395 op: 159
        // SubProg rPrint pc: 332 op: STARTLINE (58)

        /** pretty.e:132					all_ascii = 0*/
        // SubProg rPrint pc: 334 op: ASSIGN_I (113)
        _all_ascii_3400 = 0;
        // SubProg rPrint pc: 337 op: NOP1 (159)
L10: // addr: 338 pc: 337 sub: 3395 op: 159
        // SubProg rPrint pc: 338 op: STARTLINE (58)

        /** pretty.e:134			end for*/
        // SubProg rPrint pc: 340 op: ENDFOR_INT_UP1 (54)
        _i_3434 = _i_3434 + 1;
        goto L9; // [340] 206
LA: // addr: 345 pc: 340 sub: 3395 op: 54
        ;
    }
    // SubProg rPrint pc: 345 op: STARTLINE (58)

    /** pretty.e:136			if all_ascii then*/
    // SubProg rPrint pc: 347 op: IF (20)
    if (_all_ascii_3400 == 0)
    {
        goto L11; // [347] 358
    }
    else{
    }
    // SubProg rPrint pc: 350 op: STARTLINE (58)

    /** pretty.e:137				pretty_out('\"')*/
    // SubProg rPrint pc: 352 op: PROC (27)
    _23pretty_out(34);
    // SubProg rPrint pc: 355 op: ELSE (23)
    goto L12; // [355] 364
    // SubProg rPrint pc: 357 op: NOP1 (159)
L11: // addr: 358 pc: 357 sub: 3395 op: 159
    // SubProg rPrint pc: 358 op: STARTLINE (58)

    /** pretty.e:139				pretty_out('{')*/
    // SubProg rPrint pc: 360 op: PROC (27)
    _23pretty_out(123);
    // SubProg rPrint pc: 363 op: NOP1 (159)
L12: // addr: 364 pc: 363 sub: 3395 op: 159
    // SubProg rPrint pc: 364 op: STARTLINE (58)

    /** pretty.e:141			pretty_level += 1*/
    // SubProg rPrint pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 368 op: PLUS1_I (117)
    _23pretty_level_3330 = _23pretty_level_3330 + 1;
    // SubProg rPrint pc: 372 op: STARTLINE (58)

    /** pretty.e:142			for i = 1 to length(a) do*/
    // SubProg rPrint pc: 374 op: LENGTH (42)
    if (IS_SEQUENCE(_a_3397)){
            _1604 = SEQ_PTR(_a_3397)->length;
    }
    else {
        _1604 = 1;
    }
    // SubProg rPrint pc: 377 op: FOR_I (125)
    {
        object _i_3464;
        _i_3464 = 1;
L13: // addr: 384 pc: 377 sub: 3395 op: 125
        if (_i_3464 > _1604){
            goto L14; // [377] 497
        }
        // SubProg rPrint pc: 384 op: STARTLINE (58)

        /** pretty.e:143				if multi_line then*/
        // SubProg rPrint pc: 386 op: IF (20)
        if (_multi_line_3399 == 0)
        {
            goto L15; // [386] 394
        }
        else{
        }
        // SubProg rPrint pc: 389 op: STARTLINE (58)

        /** pretty.e:144					indent()*/
        // SubProg rPrint pc: 391 op: PROC (27)
        _23indent();
        // SubProg rPrint pc: 393 op: NOP1 (159)
L15: // addr: 394 pc: 393 sub: 3395 op: 159
        // SubProg rPrint pc: 394 op: STARTLINE (58)

        /** pretty.e:146				if all_ascii then*/
        // SubProg rPrint pc: 396 op: IF (20)
        if (_all_ascii_3400 == 0)
        {
            goto L16; // [396] 415
        }
        else{
        }
        // SubProg rPrint pc: 399 op: STARTLINE (58)

        /** pretty.e:147					pretty_out(esc_char(a[i]))*/
        // SubProg rPrint pc: 401 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1605 = (object)*(((s1_ptr)_2)->base + _i_3464);
        // SubProg rPrint pc: 405 op: PROC (27)
        Ref(_1605);
        _1606 = _23esc_char(_1605);
        _1605 = NOVALUE;
        // SubProg rPrint pc: 409 op: PROC (27)
        _23pretty_out(_1606);
        _1606 = NOVALUE;
        // SubProg rPrint pc: 412 op: ELSE (23)
        goto L17; // [412] 425
        // SubProg rPrint pc: 414 op: NOP1 (159)
L16: // addr: 415 pc: 414 sub: 3395 op: 159
        // SubProg rPrint pc: 415 op: STARTLINE (58)

        /** pretty.e:149					rPrint(a[i])*/
        // SubProg rPrint pc: 417 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3397);
        _1607 = (object)*(((s1_ptr)_2)->base + _i_3464);
        // SubProg rPrint pc: 421 op: PROC (27)
        Ref(_1607);
        _23rPrint(_1607);
        _1607 = NOVALUE;
        // SubProg rPrint pc: 424 op: NOP1 (159)
L17: // addr: 425 pc: 424 sub: 3395 op: 159
        // SubProg rPrint pc: 425 op: STARTLINE (58)

        /** pretty.e:151				if pretty_line_count >= pretty_line_max then*/
        // SubProg rPrint pc: 427 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 429 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 431 op: GREATEREQ_IFW_I (120)
        if (_23pretty_line_count_3336 < _23pretty_line_max_3337)
        goto L18; // [431] 459
        // SubProg rPrint pc: 435 op: STARTLINE (58)

        /** pretty.e:152					if not pretty_dots then*/
        // SubProg rPrint pc: 437 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 439 op: NOT_IFW (108)
        if (_23pretty_dots_3338 != 0)
        goto L19; // [439] 448
        // SubProg rPrint pc: 442 op: STARTLINE (58)

        /** pretty.e:153						pretty_out(" ...")*/
        // SubProg rPrint pc: 444 op: PROC (27)
        RefDS(_1610);
        _23pretty_out(_1610);
        // SubProg rPrint pc: 447 op: NOP1 (159)
L19: // addr: 448 pc: 447 sub: 3395 op: 159
        // SubProg rPrint pc: 448 op: STARTLINE (58)

        /** pretty.e:155					pretty_dots = 1*/
        // SubProg rPrint pc: 450 op: ASSIGN_I (113)
        _23pretty_dots_3338 = 1;
        // SubProg rPrint pc: 453 op: STARTLINE (58)

        /** pretty.e:156					return*/
        // SubProg rPrint pc: 455 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: rPrint

// block var a_3397
        DeRef(_a_3397);

// block var sbuff_3398
        DeRef(_sbuff_3398);

// block var multi_line_3399

// block var all_ascii_3400
        DeRef(_1562);
        _1562 = NOVALUE;
        DeRef(_1589);
        _1589 = NOVALUE;
        DeRef(_1573);
        _1573 = NOVALUE;
        _1584 = NOVALUE;
        DeRef(_1571);
        _1571 = NOVALUE;
        DeRef(_1594);
        _1594 = NOVALUE;
        DeRef(_1564);
        _1564 = NOVALUE;
        DeRef(_1599);
        _1599 = NOVALUE;
        DeRef(_1592);
        _1592 = NOVALUE;
        return;
        // SubProg rPrint pc: 458 op: NOP1 (159)
L18: // addr: 459 pc: 458 sub: 3395 op: 159
        // SubProg rPrint pc: 459 op: STARTLINE (58)

        /** pretty.e:158				if i != length(a) and not all_ascii then*/
        // SubProg rPrint pc: 461 op: LENGTH (42)
        if (IS_SEQUENCE(_a_3397)){
                _1611 = SEQ_PTR(_a_3397)->length;
        }
        else {
            _1611 = 1;
        }
        // SubProg rPrint pc: 464 op: NOTEQ (4)
        _1612 = (_i_3464 != _1611);
        _1611 = NOVALUE;
        // SubProg rPrint pc: 468 op: SC1_AND_IF (146)
        if (_1612 == 0) {
            goto L1A; // [468] 490
        }
        // SubProg rPrint pc: 472 op: NOT (7)
        _1614 = (_all_ascii_3400 == 0);
        // SubProg rPrint pc: 475 op: NOP1 (159)
        // SubProg rPrint pc: 476 op: IF (20)
        if (_1614 == 0)
        {
            DeRef(_1614);
            _1614 = NOVALUE;
            goto L1A; // [476] 490
        }
        else{
            DeRef(_1614);
            _1614 = NOVALUE;
        }
        // SubProg rPrint pc: 479 op: STARTLINE (58)

        /** pretty.e:159					pretty_out(',')*/
        // SubProg rPrint pc: 481 op: PROC (27)
        _23pretty_out(44);
        // SubProg rPrint pc: 484 op: STARTLINE (58)

        /** pretty.e:160					cut_line(6)*/
        // SubProg rPrint pc: 486 op: PROC (27)
        _23cut_line(6);
        // SubProg rPrint pc: 489 op: NOP1 (159)
L1A: // addr: 490 pc: 489 sub: 3395 op: 159
        // SubProg rPrint pc: 490 op: STARTLINE (58)

        /** pretty.e:162			end for*/
        // SubProg rPrint pc: 492 op: ENDFOR_INT_UP1 (54)
        _i_3464 = _i_3464 + 1;
        goto L13; // [492] 384
L14: // addr: 497 pc: 492 sub: 3395 op: 54
        ;
    }
    // SubProg rPrint pc: 497 op: STARTLINE (58)

    /** pretty.e:163			pretty_level -= 1*/
    // SubProg rPrint pc: 499 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 501 op: MINUS_I (116)
    _23pretty_level_3330 = _23pretty_level_3330 - 1;
    // SubProg rPrint pc: 505 op: STARTLINE (58)

    /** pretty.e:164			if multi_line then*/
    // SubProg rPrint pc: 507 op: IF (20)
    if (_multi_line_3399 == 0)
    {
        goto L1B; // [507] 515
    }
    else{
    }
    // SubProg rPrint pc: 510 op: STARTLINE (58)

    /** pretty.e:165				indent()*/
    // SubProg rPrint pc: 512 op: PROC (27)
    _23indent();
    // SubProg rPrint pc: 514 op: NOP1 (159)
L1B: // addr: 515 pc: 514 sub: 3395 op: 159
    // SubProg rPrint pc: 515 op: STARTLINE (58)

    /** pretty.e:167			if all_ascii then*/
    // SubProg rPrint pc: 517 op: IF (20)
    if (_all_ascii_3400 == 0)
    {
        goto L1C; // [517] 528
    }
    else{
    }
    // SubProg rPrint pc: 520 op: STARTLINE (58)

    /** pretty.e:168				pretty_out('\"')*/
    // SubProg rPrint pc: 522 op: PROC (27)
    _23pretty_out(34);
    // SubProg rPrint pc: 525 op: ELSE (23)
    goto L1D; // [525] 534
    // SubProg rPrint pc: 527 op: NOP1 (159)
L1C: // addr: 528 pc: 527 sub: 3395 op: 159
    // SubProg rPrint pc: 528 op: STARTLINE (58)

    /** pretty.e:170				pretty_out('}')*/
    // SubProg rPrint pc: 530 op: PROC (27)
    _23pretty_out(125);
    // SubProg rPrint pc: 533 op: NOP1 (159)
L1D: // addr: 534 pc: 533 sub: 3395 op: 159
    // SubProg rPrint pc: 534 op: NOP1 (159)
L8: // addr: 535 pc: 534 sub: 3395 op: 159
    // SubProg rPrint pc: 535 op: STARTLINE (58)

    /** pretty.e:173	end procedure*/
    // SubProg rPrint pc: 537 op: RETURNP (29)

// Exiting block BLOCK: rPrint

// block var a_3397
    DeRef(_a_3397);

// block var sbuff_3398
    DeRef(_sbuff_3398);

// block var multi_line_3399

// block var all_ascii_3400
    DeRef(_1562);
    _1562 = NOVALUE;
    DeRef(_1589);
    _1589 = NOVALUE;
    DeRef(_1573);
    _1573 = NOVALUE;
    _1584 = NOVALUE;
    DeRef(_1571);
    _1571 = NOVALUE;
    DeRef(_1594);
    _1594 = NOVALUE;
    DeRef(_1612);
    _1612 = NOVALUE;
    DeRef(_1564);
    _1564 = NOVALUE;
    DeRef(_1599);
    _1599 = NOVALUE;
    DeRef(_1592);
    _1592 = NOVALUE;
    return;
    // SubProg rPrint pc: 540 op: BADRETURNF (43)
    ;
}


void _23pretty(object _x_3503, object _options_3504)
{
// skipping _1637  name type: 0
// skipping _1636  name type: 0
// skipping _1635  name type: 0
// skipping _1634  name type: 0
// skipping _1633  name type: 0
// skipping _1632  name type: 0
// skipping _1631  name type: 0
// skipping _1630  name type: 0
// skipping _1629  name type: 0
// skipping _1628  name type: 0
// skipping _1627  name type: 0
// skipping _1626  name type: 0
// skipping _1625  name type: 0
// skipping _1624  name type: 0
// skipping _1623  name type: 0
// skipping _1622  name type: 0
    object _1621 = NOVALUE; // 3507 1621
    object _1620 = NOVALUE; // 3506 1620
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pretty pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 3 op: STARTLINE (58)

    /** pretty.e:197		if length(options) < length( PRETTY_DEFAULT ) then*/
    // SubProg pretty pc: 5 op: LENGTH (42)
    // Known sequence length:
    _1620 = 10;
    // SubProg pretty pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty pc: 10 op: LENGTH (42)
    // Known sequence length:
    _1621 = 10;
    // SubProg pretty pc: 13 op: LESS_IFW_I (119)
    // SubProg pretty pc: 41 op: STARTLINE (58)

    /** pretty.e:202		pretty_ascii = options[DISPLAY_ASCII] */
    // SubProg pretty pc: 43 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_ascii_3332 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_23pretty_ascii_3332))
    _23pretty_ascii_3332 = (object)DBL_PTR(_23pretty_ascii_3332)->dbl;
    // SubProg pretty pc: 47 op: STARTLINE (58)

    /** pretty.e:203		pretty_indent = options[INDENT]*/
    // SubProg pretty pc: 49 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_indent_3333 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_23pretty_indent_3333))
    _23pretty_indent_3333 = (object)DBL_PTR(_23pretty_indent_3333)->dbl;
    // SubProg pretty pc: 53 op: STARTLINE (58)

    /** pretty.e:204		pretty_start_col = options[START_COLUMN]*/
    // SubProg pretty pc: 55 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_start_col_3329 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_23pretty_start_col_3329))
    _23pretty_start_col_3329 = (object)DBL_PTR(_23pretty_start_col_3329)->dbl;
    // SubProg pretty pc: 59 op: STARTLINE (58)

    /** pretty.e:205		pretty_end_col = options[WRAP]*/
    // SubProg pretty pc: 61 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_end_col_3327 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_23pretty_end_col_3327))
    _23pretty_end_col_3327 = (object)DBL_PTR(_23pretty_end_col_3327)->dbl;
    // SubProg pretty pc: 65 op: STARTLINE (58)

    /** pretty.e:206		pretty_int_format = options[INT_FORMAT]*/
    // SubProg pretty pc: 67 op: RHS_SUBS (25)
    DeRef(_23pretty_int_format_3342);
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_int_format_3342 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_23pretty_int_format_3342);
    // SubProg pretty pc: 71 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 73 op: STARTLINE (58)

    /** pretty.e:207		pretty_fp_format = options[FP_FORMAT]*/
    // SubProg pretty pc: 75 op: RHS_SUBS (25)
    DeRef(_23pretty_fp_format_3341);
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_fp_format_3341 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_23pretty_fp_format_3341);
    // SubProg pretty pc: 79 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 81 op: STARTLINE (58)

    /** pretty.e:208		pretty_ascii_min = options[MIN_ASCII]*/
    // SubProg pretty pc: 83 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_ascii_min_3334 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_23pretty_ascii_min_3334))
    _23pretty_ascii_min_3334 = (object)DBL_PTR(_23pretty_ascii_min_3334)->dbl;
    // SubProg pretty pc: 87 op: STARTLINE (58)

    /** pretty.e:209		pretty_ascii_max = options[MAX_ASCII]*/
    // SubProg pretty pc: 89 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_ascii_max_3335 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_23pretty_ascii_max_3335))
    _23pretty_ascii_max_3335 = (object)DBL_PTR(_23pretty_ascii_max_3335)->dbl;
    // SubProg pretty pc: 93 op: STARTLINE (58)

    /** pretty.e:210		pretty_line_max = options[MAX_LINES]*/
    // SubProg pretty pc: 95 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_line_max_3337 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_23pretty_line_max_3337))
    _23pretty_line_max_3337 = (object)DBL_PTR(_23pretty_line_max_3337)->dbl;
    // SubProg pretty pc: 99 op: STARTLINE (58)

    /** pretty.e:211		pretty_line_breaks = options[LINE_BREAKS]*/
    // SubProg pretty pc: 101 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_3504);
    _23pretty_line_breaks_3339 = (object)*(((s1_ptr)_2)->base + 10);
    if (!IS_ATOM_INT(_23pretty_line_breaks_3339))
    _23pretty_line_breaks_3339 = (object)DBL_PTR(_23pretty_line_breaks_3339)->dbl;
    // SubProg pretty pc: 105 op: STARTLINE (58)

    /** pretty.e:213		pretty_chars = pretty_start_col*/
    // SubProg pretty pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty pc: 109 op: ASSIGN_I (113)
    _23pretty_chars_3328 = _23pretty_start_col_3329;
    // SubProg pretty pc: 112 op: STARTLINE (58)

    /** pretty.e:215		pretty_level = 0 */
    // SubProg pretty pc: 114 op: ASSIGN_I (113)
    _23pretty_level_3330 = 0;
    // SubProg pretty pc: 117 op: STARTLINE (58)

    /** pretty.e:216		pretty_line = ""*/
    // SubProg pretty pc: 119 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_23pretty_line_3343);
    _23pretty_line_3343 = _5;
    // SubProg pretty pc: 122 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 124 op: STARTLINE (58)

    /** pretty.e:217		pretty_line_count = 0*/
    // SubProg pretty pc: 126 op: ASSIGN_I (113)
    _23pretty_line_count_3336 = 0;
    // SubProg pretty pc: 129 op: STARTLINE (58)

    /** pretty.e:218		pretty_dots = 0*/
    // SubProg pretty pc: 131 op: ASSIGN_I (113)
    _23pretty_dots_3338 = 0;
    // SubProg pretty pc: 134 op: STARTLINE (58)

    /** pretty.e:219		rPrint(x)*/
    // SubProg pretty pc: 136 op: PROC (27)
    Ref(_x_3503);
    _23rPrint(_x_3503);
    // SubProg pretty pc: 139 op: STARTLINE (58)

    /** pretty.e:220	end procedure*/
    // SubProg pretty pc: 141 op: RETURNP (29)

// Exiting block BLOCK: pretty

// block var x_3503
    DeRef(_x_3503);

// block var options_3504
    DeRefDS(_options_3504);
    return;
    // SubProg pretty pc: 144 op: BADRETURNF (43)
    ;
}



// 0x0580C935
