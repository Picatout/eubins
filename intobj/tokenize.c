// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _71report_error(object _err_64360)
{
// skipping _31976  name type: 0
// skipping _31975  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg report_error pc: 1 op: INTEGER_CHECK (96)
    // SubProg report_error pc: 3 op: STARTLINE (58)

    /** tokenize.e:155		Look = io:EOF*/
    // SubProg report_error pc: 5 op: ASSIGN_I (113)
    _71Look_64329 = -1;
    // SubProg report_error pc: 8 op: STARTLINE (58)

    /** tokenize.e:156		ERR = err*/
    // SubProg report_error pc: 10 op: ASSIGN_I (113)
    _71ERR_64330 = _err_64360;
    // SubProg report_error pc: 13 op: STARTLINE (58)

    /** tokenize.e:157		ERR_LNUM = Token[TLNUM]*/
    // SubProg report_error pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg report_error pc: 17 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _71ERR_LNUM_64331 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_71ERR_LNUM_64331))
    _71ERR_LNUM_64331 = (object)DBL_PTR(_71ERR_LNUM_64331)->dbl;
    // SubProg report_error pc: 21 op: STARTLINE (58)

    /** tokenize.e:158		ERR_LPOS = Token[TLPOS]*/
    // SubProg report_error pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg report_error pc: 25 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _71ERR_LPOS_64332 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_71ERR_LPOS_64332))
    _71ERR_LPOS_64332 = (object)DBL_PTR(_71ERR_LPOS_64332)->dbl;
    // SubProg report_error pc: 29 op: STARTLINE (58)

    /** tokenize.e:159	end procedure*/
    // SubProg report_error pc: 31 op: RETURNP (29)

// Exiting block BLOCK: report_error

// block var err_64360
    return;
    // SubProg report_error pc: 34 op: BADRETURNF (43)
    ;
}


object _71default_state()
{
    object _31981 = NOVALUE; // 64374 31981
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg default_state pc: 1 op: STARTLINE (58)

    /** tokenize.e:174		return {*/
    // SubProg default_state pc: 3 op: RIGHT_BRACE_N (31)
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 1;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 1;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 1;
    ((intptr_t*)_2)[7] = 0;
    ((intptr_t*)_2)[8] = 0;
    _31981 = MAKE_SEQ(_1);
    // SubProg default_state pc: 14 op: RETURNF (28)

// Exiting block BLOCK: default_state
    return _31981;
    // SubProg default_state pc: 18 op: BADRETURNF (43)
    ;
}


object _71new()
{
    object _state_64380 = NOVALUE;
// skipping _31984  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** tokenize.e:197		atom state = eumem:malloc()*/
    // SubProg new pc: 3 op: PROC (27)
    _0 = _state_64380;
    _state_64380 = _34malloc(1, 1);
    DeRef(_0);
    // SubProg new pc: 8 op: STARTLINE (58)

    /** tokenize.e:199		reset(state)*/
    // SubProg new pc: 10 op: PROC (27)
    Ref(_state_64380);
    _71reset(_state_64380);
    // SubProg new pc: 13 op: STARTLINE (58)

    /** tokenize.e:201		return state*/
    // SubProg new pc: 15 op: RETURNF (28)

// Exiting block BLOCK: new
    return _state_64380;
    // SubProg new pc: 19 op: BADRETURNF (43)
    ;
}


void _71reset(object _state_64385)
{
    object _31985 = NOVALUE; // 64386 31985
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reset pc: 1 op: STARTLINE (58)

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    // SubProg reset pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 5 op: PROC (27)
    _31985 = _71default_state();
    // SubProg reset pc: 8 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_64385))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64385)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_64385);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31985;
    if( _1 != _31985 ){
        DeRef(_1);
    }
    _31985 = NOVALUE;
    // SubProg reset pc: 12 op: STARTLINE (58)

    /** tokenize.e:213	end procedure*/
    // SubProg reset pc: 14 op: RETURNP (29)

// Exiting block BLOCK: reset

// block var state_64385
    DeRef(_state_64385);
    return;
    // SubProg reset pc: 17 op: BADRETURNF (43)
    ;
}


object _71White_Char(object _c_64449)
{
    object _32010 = NOVALUE; // 64454 32010
    object _32009 = NOVALUE; // 64453 32009
    object _32008 = NOVALUE; // 64452 32008
    object _32007 = NOVALUE; // 64451 32007
    object _32006 = NOVALUE; // 64450 32006
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg White_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:320		return integer(c) and (c >= 0) and (c <= ' ')*/
    // SubProg White_Char pc: 3 op: IS_AN_INTEGER (94)
    _32006 = 1;
    // SubProg White_Char pc: 6 op: GREATEREQ (2)
    _32007 = (_c_64449 >= 0);
    // SubProg White_Char pc: 10 op: AND (8)
    _32008 = (_32006 != 0 && _32007 != 0);
    _32006 = NOVALUE;
    _32007 = NOVALUE;
    // SubProg White_Char pc: 14 op: LESSEQ (5)
    _32009 = (_c_64449 <= 32);
    // SubProg White_Char pc: 18 op: AND (8)
    _32010 = (_32008 != 0 && _32009 != 0);
    _32008 = NOVALUE;
    _32009 = NOVALUE;
    // SubProg White_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: White_Char

// block var c_64449
    return _32010;
    // SubProg White_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Digit_Char(object _c_64457)
{
    object _32017 = NOVALUE; // 64464 32017
    object _32016 = NOVALUE; // 64463 32016
    object _32015 = NOVALUE; // 64462 32015
    object _32014 = NOVALUE; // 64461 32014
    object _32013 = NOVALUE; // 64460 32013
    object _32012 = NOVALUE; // 64459 32012
    object _32011 = NOVALUE; // 64458 32011
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Digit_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:324		return integer(c) and ((('0' <= c) and (c <= '9')) or (c = '_'))*/
    // SubProg Digit_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64457))
    _32011 = 1;
    else if (IS_ATOM_DBL(_c_64457))
    _32011 = IS_ATOM_INT(DoubleToInt(_c_64457));
    else
    _32011 = 0;
    // SubProg Digit_Char pc: 6 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64457)) {
        _32012 = (48 <= _c_64457);
    }
    else {
        _32012 = binary_op(LESSEQ, 48, _c_64457);
    }
    // SubProg Digit_Char pc: 10 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64457)) {
        _32013 = (_c_64457 <= 57);
    }
    else {
        _32013 = binary_op(LESSEQ, _c_64457, 57);
    }
    // SubProg Digit_Char pc: 14 op: AND (8)
    if (IS_ATOM_INT(_32012) && IS_ATOM_INT(_32013)) {
        _32014 = (_32012 != 0 && _32013 != 0);
    }
    else {
        _32014 = binary_op(AND, _32012, _32013);
    }
    DeRef(_32012);
    _32012 = NOVALUE;
    DeRef(_32013);
    _32013 = NOVALUE;
    // SubProg Digit_Char pc: 18 op: EQUALS (3)
    if (IS_ATOM_INT(_c_64457)) {
        _32015 = (_c_64457 == 95);
    }
    else {
        _32015 = binary_op(EQUALS, _c_64457, 95);
    }
    // SubProg Digit_Char pc: 22 op: OR (9)
    if (IS_ATOM_INT(_32014) && IS_ATOM_INT(_32015)) {
        _32016 = (_32014 != 0 || _32015 != 0);
    }
    else {
        _32016 = binary_op(OR, _32014, _32015);
    }
    DeRef(_32014);
    _32014 = NOVALUE;
    DeRef(_32015);
    _32015 = NOVALUE;
    // SubProg Digit_Char pc: 26 op: AND (8)
    if (IS_ATOM_INT(_32016)) {
        _32017 = (_32011 != 0 && _32016 != 0);
    }
    else {
        _32017 = binary_op(AND, _32011, _32016);
    }
    _32011 = NOVALUE;
    DeRef(_32016);
    _32016 = NOVALUE;
    // SubProg Digit_Char pc: 30 op: RETURNF (28)

// Exiting block BLOCK: Digit_Char

// block var c_64457
    DeRef(_c_64457);
    return _32017;
    // SubProg Digit_Char pc: 34 op: BADRETURNF (43)
    ;
}


object _71uHex_Char(object _c_64467)
{
    object _32022 = NOVALUE; // 64472 32022
    object _32021 = NOVALUE; // 64471 32021
    object _32020 = NOVALUE; // 64470 32020
    object _32019 = NOVALUE; // 64469 32019
    object _32018 = NOVALUE; // 64468 32018
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg uHex_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:328		return integer(c) and ('A' <= c) and (c <= 'F')*/
    // SubProg uHex_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64467))
    _32018 = 1;
    else if (IS_ATOM_DBL(_c_64467))
    _32018 = IS_ATOM_INT(DoubleToInt(_c_64467));
    else
    _32018 = 0;
    // SubProg uHex_Char pc: 6 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64467)) {
        _32019 = (65 <= _c_64467);
    }
    else {
        _32019 = binary_op(LESSEQ, 65, _c_64467);
    }
    // SubProg uHex_Char pc: 10 op: AND (8)
    if (IS_ATOM_INT(_32019)) {
        _32020 = (_32018 != 0 && _32019 != 0);
    }
    else {
        _32020 = binary_op(AND, _32018, _32019);
    }
    _32018 = NOVALUE;
    DeRef(_32019);
    _32019 = NOVALUE;
    // SubProg uHex_Char pc: 14 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64467)) {
        _32021 = (_c_64467 <= 70);
    }
    else {
        _32021 = binary_op(LESSEQ, _c_64467, 70);
    }
    // SubProg uHex_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_32020) && IS_ATOM_INT(_32021)) {
        _32022 = (_32020 != 0 && _32021 != 0);
    }
    else {
        _32022 = binary_op(AND, _32020, _32021);
    }
    DeRef(_32020);
    _32020 = NOVALUE;
    DeRef(_32021);
    _32021 = NOVALUE;
    // SubProg uHex_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: uHex_Char

// block var c_64467
    DeRef(_c_64467);
    return _32022;
    // SubProg uHex_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71lHex_Char(object _c_64475)
{
    object _32028 = NOVALUE; // 64481 32028
    object _32027 = NOVALUE; // 64480 32027
    object _32026 = NOVALUE; // 64479 32026
    object _32025 = NOVALUE; // 64478 32025
    object _32023 = NOVALUE; // 64476 32023
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lHex_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:332		return integer(c) and ('a' <= c) and (c <= 'f')*/
    // SubProg lHex_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64475))
    _32023 = 1;
    else if (IS_ATOM_DBL(_c_64475))
    _32023 = IS_ATOM_INT(DoubleToInt(_c_64475));
    else
    _32023 = 0;
    // SubProg lHex_Char pc: 6 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64475)) {
        _32025 = (97 <= _c_64475);
    }
    else {
        _32025 = binary_op(LESSEQ, 97, _c_64475);
    }
    // SubProg lHex_Char pc: 10 op: AND (8)
    if (IS_ATOM_INT(_32025)) {
        _32026 = (_32023 != 0 && _32025 != 0);
    }
    else {
        _32026 = binary_op(AND, _32023, _32025);
    }
    _32023 = NOVALUE;
    DeRef(_32025);
    _32025 = NOVALUE;
    // SubProg lHex_Char pc: 14 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64475)) {
        _32027 = (_c_64475 <= 102);
    }
    else {
        _32027 = binary_op(LESSEQ, _c_64475, 102);
    }
    // SubProg lHex_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_32026) && IS_ATOM_INT(_32027)) {
        _32028 = (_32026 != 0 && _32027 != 0);
    }
    else {
        _32028 = binary_op(AND, _32026, _32027);
    }
    DeRef(_32026);
    _32026 = NOVALUE;
    DeRef(_32027);
    _32027 = NOVALUE;
    // SubProg lHex_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: lHex_Char

// block var c_64475
    DeRef(_c_64475);
    return _32028;
    // SubProg lHex_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Hex_Char(object _c_64484)
{
    object _32035 = NOVALUE; // 64491 32035
    object _32034 = NOVALUE; // 64490 32034
    object _32033 = NOVALUE; // 64489 32033
    object _32032 = NOVALUE; // 64488 32032
    object _32031 = NOVALUE; // 64487 32031
    object _32030 = NOVALUE; // 64486 32030
    object _32029 = NOVALUE; // 64485 32029
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Hex_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:336		return integer(c) and (Digit_Char(c) or uHex_Char(c) or lHex_Char(c))*/
    // SubProg Hex_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64484))
    _32029 = 1;
    else if (IS_ATOM_DBL(_c_64484))
    _32029 = IS_ATOM_INT(DoubleToInt(_c_64484));
    else
    _32029 = 0;
    // SubProg Hex_Char pc: 6 op: PROC (27)
    Ref(_c_64484);
    _32030 = _71Digit_Char(_c_64484);
    // SubProg Hex_Char pc: 10 op: PROC (27)
    Ref(_c_64484);
    _32031 = _71uHex_Char(_c_64484);
    // SubProg Hex_Char pc: 14 op: OR (9)
    if (IS_ATOM_INT(_32030) && IS_ATOM_INT(_32031)) {
        _32032 = (_32030 != 0 || _32031 != 0);
    }
    else {
        _32032 = binary_op(OR, _32030, _32031);
    }
    DeRef(_32030);
    _32030 = NOVALUE;
    DeRef(_32031);
    _32031 = NOVALUE;
    // SubProg Hex_Char pc: 18 op: PROC (27)
    Ref(_c_64484);
    _32033 = _71lHex_Char(_c_64484);
    // SubProg Hex_Char pc: 22 op: OR (9)
    if (IS_ATOM_INT(_32032) && IS_ATOM_INT(_32033)) {
        _32034 = (_32032 != 0 || _32033 != 0);
    }
    else {
        _32034 = binary_op(OR, _32032, _32033);
    }
    DeRef(_32032);
    _32032 = NOVALUE;
    DeRef(_32033);
    _32033 = NOVALUE;
    // SubProg Hex_Char pc: 26 op: AND (8)
    if (IS_ATOM_INT(_32034)) {
        _32035 = (_32029 != 0 && _32034 != 0);
    }
    else {
        _32035 = binary_op(AND, _32029, _32034);
    }
    _32029 = NOVALUE;
    DeRef(_32034);
    _32034 = NOVALUE;
    // SubProg Hex_Char pc: 30 op: RETURNF (28)

// Exiting block BLOCK: Hex_Char

// block var c_64484
    DeRef(_c_64484);
    return _32035;
    // SubProg Hex_Char pc: 34 op: BADRETURNF (43)
    ;
}


object _71uAlpha_Char(object _c_64494)
{
    object _32040 = NOVALUE; // 64499 32040
    object _32039 = NOVALUE; // 64498 32039
    object _32038 = NOVALUE; // 64497 32038
    object _32037 = NOVALUE; // 64496 32037
    object _32036 = NOVALUE; // 64495 32036
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg uAlpha_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:340		return integer(c) and ('A' <= c) and (c <= 'Z')*/
    // SubProg uAlpha_Char pc: 3 op: IS_AN_INTEGER (94)
    _32036 = 1;
    // SubProg uAlpha_Char pc: 6 op: LESSEQ (5)
    _32037 = (65 <= _c_64494);
    // SubProg uAlpha_Char pc: 10 op: AND (8)
    _32038 = (_32036 != 0 && _32037 != 0);
    _32036 = NOVALUE;
    _32037 = NOVALUE;
    // SubProg uAlpha_Char pc: 14 op: LESSEQ (5)
    _32039 = (_c_64494 <= 90);
    // SubProg uAlpha_Char pc: 18 op: AND (8)
    _32040 = (_32038 != 0 && _32039 != 0);
    _32038 = NOVALUE;
    _32039 = NOVALUE;
    // SubProg uAlpha_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: uAlpha_Char

// block var c_64494
    return _32040;
    // SubProg uAlpha_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71lAlpha_Char(object _c_64502)
{
    object _32045 = NOVALUE; // 64507 32045
    object _32044 = NOVALUE; // 64506 32044
    object _32043 = NOVALUE; // 64505 32043
    object _32042 = NOVALUE; // 64504 32042
    object _32041 = NOVALUE; // 64503 32041
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lAlpha_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:344		return integer(c) and ('a' <= c) and (c <= 'z')*/
    // SubProg lAlpha_Char pc: 3 op: IS_AN_INTEGER (94)
    _32041 = 1;
    // SubProg lAlpha_Char pc: 6 op: LESSEQ (5)
    _32042 = (97 <= _c_64502);
    // SubProg lAlpha_Char pc: 10 op: AND (8)
    _32043 = (_32041 != 0 && _32042 != 0);
    _32041 = NOVALUE;
    _32042 = NOVALUE;
    // SubProg lAlpha_Char pc: 14 op: LESSEQ (5)
    _32044 = (_c_64502 <= 122);
    // SubProg lAlpha_Char pc: 18 op: AND (8)
    _32045 = (_32043 != 0 && _32044 != 0);
    _32043 = NOVALUE;
    _32044 = NOVALUE;
    // SubProg lAlpha_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: lAlpha_Char

// block var c_64502
    return _32045;
    // SubProg lAlpha_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Alpha_Char(object _c_64510)
{
    object _32050 = NOVALUE; // 64515 32050
    object _32049 = NOVALUE; // 64514 32049
    object _32048 = NOVALUE; // 64513 32048
    object _32047 = NOVALUE; // 64512 32047
    object _32046 = NOVALUE; // 64511 32046
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Alpha_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:348		return integer(c) and (uAlpha_Char(c) or lAlpha_Char(c))*/
    // SubProg Alpha_Char pc: 3 op: IS_AN_INTEGER (94)
    _32046 = 1;
    // SubProg Alpha_Char pc: 6 op: PROC (27)
    _32047 = _71uAlpha_Char(_c_64510);
    // SubProg Alpha_Char pc: 10 op: PROC (27)
    _32048 = _71lAlpha_Char(_c_64510);
    // SubProg Alpha_Char pc: 14 op: OR (9)
    if (IS_ATOM_INT(_32047) && IS_ATOM_INT(_32048)) {
        _32049 = (_32047 != 0 || _32048 != 0);
    }
    else {
        _32049 = binary_op(OR, _32047, _32048);
    }
    DeRef(_32047);
    _32047 = NOVALUE;
    DeRef(_32048);
    _32048 = NOVALUE;
    // SubProg Alpha_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_32049)) {
        _32050 = (_32046 != 0 && _32049 != 0);
    }
    else {
        _32050 = binary_op(AND, _32046, _32049);
    }
    _32046 = NOVALUE;
    DeRef(_32049);
    _32049 = NOVALUE;
    // SubProg Alpha_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: Alpha_Char

// block var c_64510
    return _32050;
    // SubProg Alpha_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Alphanum_Char(object _c_64518)
{
    object _32055 = NOVALUE; // 64523 32055
    object _32054 = NOVALUE; // 64522 32054
    object _32053 = NOVALUE; // 64521 32053
    object _32052 = NOVALUE; // 64520 32052
    object _32051 = NOVALUE; // 64519 32051
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Alphanum_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:352		return integer(c) and (Alpha_Char(c) or Digit_Char(c))*/
    // SubProg Alphanum_Char pc: 3 op: IS_AN_INTEGER (94)
    _32051 = 1;
    // SubProg Alphanum_Char pc: 6 op: PROC (27)
    _32052 = _71Alpha_Char(_c_64518);
    // SubProg Alphanum_Char pc: 10 op: PROC (27)
    _32053 = _71Digit_Char(_c_64518);
    // SubProg Alphanum_Char pc: 14 op: OR (9)
    if (IS_ATOM_INT(_32052) && IS_ATOM_INT(_32053)) {
        _32054 = (_32052 != 0 || _32053 != 0);
    }
    else {
        _32054 = binary_op(OR, _32052, _32053);
    }
    DeRef(_32052);
    _32052 = NOVALUE;
    DeRef(_32053);
    _32053 = NOVALUE;
    // SubProg Alphanum_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_32054)) {
        _32055 = (_32051 != 0 && _32054 != 0);
    }
    else {
        _32055 = binary_op(AND, _32051, _32054);
    }
    _32051 = NOVALUE;
    DeRef(_32054);
    _32054 = NOVALUE;
    // SubProg Alphanum_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: Alphanum_Char

// block var c_64518
    return _32055;
    // SubProg Alphanum_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Identifier_Char(object _c_64526)
{
    object _32056 = NOVALUE; // 64527 32056
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Identifier_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:356		return Alphanum_Char(c)*/
    // SubProg Identifier_Char pc: 3 op: PROC (27)
    _32056 = _71Alphanum_Char(_c_64526);
    // SubProg Identifier_Char pc: 7 op: RETURNF (28)

// Exiting block BLOCK: Identifier_Char

// block var c_64526
    return _32056;
    // SubProg Identifier_Char pc: 11 op: BADRETURNF (43)
    ;
}


void _71scan_char(object _state_64530)
{
// skipping _32073  name type: 0
// skipping _32072  name type: 0
    object _32071 = NOVALUE; // 64549 32071
// skipping _32070  name type: 0
// skipping _32069  name type: 0
// skipping _32068  name type: 0
    object _32067 = NOVALUE; // 64544 32067
    object _32066 = NOVALUE; // 64543 32066
// skipping _32065  name type: 0
// skipping _32064  name type: 0
    object _32063 = NOVALUE; // 64539 32063
    object _32062 = NOVALUE; // 64538 32062
    object _32061 = NOVALUE; // 64537 32061
    object _32060 = NOVALUE; // 64536 32060
    object _32059 = NOVALUE; // 64535 32059
    object _32058 = NOVALUE; // 64534 32058
// skipping _32057  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_char pc: 1 op: STARTLINE (58)

    /** tokenize.e:360		state = state -- supress warning*/
    // SubProg scan_char pc: 3 op: ASSIGN (18)
    Ref(_state_64530);
    DeRef(_state_64530);
    _state_64530 = _state_64530;
    // SubProg scan_char pc: 6 op: STARTLINE (58)

    /** tokenize.e:361		if Look = EOL then*/
    // SubProg scan_char pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 10 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 10)
    goto L1; // [10] 118
    // SubProg scan_char pc: 14 op: STARTLINE (58)

    /** tokenize.e:362			if sti < length(source_text) and source_text[sti+1] = '\r' then*/
    // SubProg scan_char pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64325)){
            _32058 = SEQ_PTR(_71source_text_64325)->length;
    }
    else {
        _32058 = 1;
    }
    // SubProg scan_char pc: 23 op: LESS (1)
    _32059 = (_71sti_64326 < _32058);
    _32058 = NOVALUE;
    // SubProg scan_char pc: 27 op: SC1_AND_IF (146)
    if (_32059 == 0) {
        goto L2; // [27] 70
    }
    // SubProg scan_char pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 35 op: PLUS1 (93)
    _32061 = _71sti_64326 + 1;
    // SubProg scan_char pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64325);
    _32062 = (object)*(((s1_ptr)_2)->base + _32061);
    // SubProg scan_char pc: 43 op: EQUALS (3)
    if (IS_ATOM_INT(_32062)) {
        _32063 = (_32062 == 13);
    }
    else {
        _32063 = binary_op(EQUALS, _32062, 13);
    }
    _32062 = NOVALUE;
    // SubProg scan_char pc: 47 op: NOP1 (159)
    // SubProg scan_char pc: 48 op: IF (20)
    if (_32063 == 0) {
        DeRef(_32063);
        _32063 = NOVALUE;
        goto L2; // [48] 70
    }
    else {
        if (!IS_ATOM_INT(_32063) && DBL_PTR(_32063)->dbl == 0.0){
            DeRef(_32063);
            _32063 = NOVALUE;
            goto L2; // [48] 70
        }
        DeRef(_32063);
        _32063 = NOVALUE;
    }
    DeRef(_32063);
    _32063 = NOVALUE;
    // SubProg scan_char pc: 51 op: STARTLINE (58)

    /** tokenize.e:363				sti += 1*/
    // SubProg scan_char pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 55 op: PLUS1_I (117)
    _71sti_64326 = _71sti_64326 + 1;
    // SubProg scan_char pc: 59 op: STARTLINE (58)

    /** tokenize.e:364				source_text[sti] = EOL*/
    // SubProg scan_char pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 65 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71source_text_64325);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71source_text_64325 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _71sti_64326);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
    // SubProg scan_char pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 64528 op: 159
    // SubProg scan_char pc: 70 op: STARTLINE (58)

    /** tokenize.e:366			LNum += 1*/
    // SubProg scan_char pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 74 op: PLUS1_I (117)
    _71LNum_64327 = _71LNum_64327 + 1;
    // SubProg scan_char pc: 78 op: STARTLINE (58)

    /** tokenize.e:367			LPos = 0*/
    // SubProg scan_char pc: 80 op: ASSIGN_I (113)
    _71LPos_64328 = 0;
    // SubProg scan_char pc: 83 op: STARTLINE (58)

    /** tokenize.e:368			if length(Token[TDATA]) = 0 then*/
    // SubProg scan_char pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 87 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32066 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_char pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_32066)){
            _32067 = SEQ_PTR(_32066)->length;
    }
    else {
        _32067 = 1;
    }
    _32066 = NOVALUE;
    // SubProg scan_char pc: 94 op: EQUALS_IFW_I (121)
    if (_32067 != 0)
    goto L3; // [94] 117
    // SubProg scan_char pc: 98 op: STARTLINE (58)

    /** tokenize.e:369				Token[TLNUM] = LNum*/
    // SubProg scan_char pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 104 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71LNum_64327;
    DeRef(_1);
    // SubProg scan_char pc: 108 op: STARTLINE (58)

    /** tokenize.e:370				Token[TLPOS] = 1*/
    // SubProg scan_char pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 112 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg scan_char pc: 116 op: NOP1 (159)
L3: // addr: 117 pc: 116 sub: 64528 op: 159
    // SubProg scan_char pc: 117 op: NOP1 (159)
L1: // addr: 118 pc: 117 sub: 64528 op: 159
    // SubProg scan_char pc: 118 op: STARTLINE (58)

    /** tokenize.e:373		LPos += 1*/
    // SubProg scan_char pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 122 op: PLUS1_I (117)
    _71LPos_64328 = _71LPos_64328 + 1;
    // SubProg scan_char pc: 126 op: STARTLINE (58)

    /** tokenize.e:374		sti += 1*/
    // SubProg scan_char pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 130 op: PLUS1_I (117)
    _71sti_64326 = _71sti_64326 + 1;
    // SubProg scan_char pc: 134 op: STARTLINE (58)

    /** tokenize.e:375		if sti > length(source_text) then*/
    // SubProg scan_char pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64325)){
            _32071 = SEQ_PTR(_71source_text_64325)->length;
    }
    else {
        _32071 = 1;
    }
    // SubProg scan_char pc: 143 op: GREATER_IFW_I (124)
    if (_71sti_64326 <= _32071)
    goto L4; // [143] 155
    // SubProg scan_char pc: 147 op: STARTLINE (58)

    /** tokenize.e:376			Look = io:EOF*/
    // SubProg scan_char pc: 149 op: ASSIGN_I (113)
    _71Look_64329 = -1;
    // SubProg scan_char pc: 152 op: ELSE (23)
    goto L5; // [152] 166
    // SubProg scan_char pc: 154 op: NOP1 (159)
L4: // addr: 155 pc: 154 sub: 64528 op: 159
    // SubProg scan_char pc: 155 op: STARTLINE (58)

    /** tokenize.e:378			Look = source_text[sti]*/
    // SubProg scan_char pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 161 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71source_text_64325);
    _71Look_64329 = (object)*(((s1_ptr)_2)->base + _71sti_64326);
    if (!IS_ATOM_INT(_71Look_64329))
    _71Look_64329 = (object)DBL_PTR(_71Look_64329)->dbl;
    // SubProg scan_char pc: 165 op: NOP1 (159)
L5: // addr: 166 pc: 165 sub: 64528 op: 159
    // SubProg scan_char pc: 166 op: STARTLINE (58)

    /** tokenize.e:380	end procedure*/
    // SubProg scan_char pc: 168 op: RETURNP (29)

// Exiting block BLOCK: scan_char

// block var state_64530
    DeRef(_state_64530);
    _32066 = NOVALUE;
    DeRef(_32061);
    _32061 = NOVALUE;
    DeRef(_32059);
    _32059 = NOVALUE;
    return;
    // SubProg scan_char pc: 171 op: BADRETURNF (43)
    ;
}


object _71lookahead(object _dist_64555, object _state_64556)
{
    object _32078 = NOVALUE; // 64562 32078
    object _32077 = NOVALUE; // 64561 32077
// skipping _32076  name type: 0
    object _32075 = NOVALUE; // 64559 32075
    object _32074 = NOVALUE; // 64558 32074
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lookahead pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_dist_64555)) {
        _1 = (object)(DBL_PTR(_dist_64555)->dbl);
        DeRefDS(_dist_64555);
        _dist_64555 = _1;
    }
    // SubProg lookahead pc: 3 op: STARTLINE (58)

    /** tokenize.e:383		state = state -- supress warning*/
    // SubProg lookahead pc: 5 op: ASSIGN (18)
    Ref(_state_64556);
    DeRef(_state_64556);
    _state_64556 = _state_64556;
    // SubProg lookahead pc: 8 op: STARTLINE (58)

    /** tokenize.e:384		if sti + dist <= length(source_text) then*/
    // SubProg lookahead pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 12 op: PLUS (11)
    _32074 = _71sti_64326 + _dist_64555;
    if ((object)((uintptr_t)_32074 + (uintptr_t)HIGH_BITS) >= 0){
        _32074 = NewDouble((eudouble)_32074);
    }
    // SubProg lookahead pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64325)){
            _32075 = SEQ_PTR(_71source_text_64325)->length;
    }
    else {
        _32075 = 1;
    }
    // SubProg lookahead pc: 21 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _32074, _32075)){
        DeRef(_32074);
        _32074 = NOVALUE;
        _32075 = NOVALUE;
        goto L1; // [21] 46
    }
    DeRef(_32074);
    _32074 = NOVALUE;
    _32075 = NOVALUE;
    // SubProg lookahead pc: 25 op: STARTLINE (58)

    /** tokenize.e:385			return source_text[sti + dist]*/
    // SubProg lookahead pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 31 op: PLUS (11)
    _32077 = _71sti_64326 + _dist_64555;
    // SubProg lookahead pc: 35 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64325);
    _32078 = (object)*(((s1_ptr)_2)->base + _32077);
    // SubProg lookahead pc: 39 op: RETURNF (28)
    Ref(_32078);

// Exiting block BLOCK: lookahead

// block var dist_64555

// block var state_64556
    DeRef(_state_64556);
    _32077 = NOVALUE;
    return _32078;
    // SubProg lookahead pc: 43 op: ELSE (23)
    goto L2; // [43] 53
    // SubProg lookahead pc: 45 op: NOP1 (159)
L1: // addr: 46 pc: 45 sub: 64553 op: 159
    // SubProg lookahead pc: 46 op: STARTLINE (58)

    /** tokenize.e:387			return io:EOF*/
    // SubProg lookahead pc: 48 op: RETURNF (28)

// Exiting block BLOCK: lookahead

// block var dist_64555

// block var state_64556
    DeRef(_state_64556);
    _32078 = NOVALUE;
    DeRef(_32077);
    _32077 = NOVALUE;
    return -1;
    // SubProg lookahead pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 64553 op: 159
    // SubProg lookahead pc: 53 op: BADRETURNF (43)
    ;
}


object _71scan_white(object _state_64566)
{
// skipping _32080  name type: 0
    object _32079 = NOVALUE; // 64568 32079
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_white pc: 1 op: STARTLINE (58)

    /** tokenize.e:393		Token[TTYPE] = T_NEWLINE*/
    // SubProg scan_white pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 5 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    // SubProg scan_white pc: 9 op: STARTLINE (58)

    /** tokenize.e:394		Token[TDATA] = ""*/
    // SubProg scan_white pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 13 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg scan_white pc: 17 op: STARTLINE (58)

    /** tokenize.e:396		while White_Char(Look) do*/
    // SubProg scan_white pc: 19 op: NOP2 (110)
    // SubProg scan_white pc: 21 op: NOPWHILE (158)
L1: // addr: 22 pc: 21 sub: 64564 op: 158
    // SubProg scan_white pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 24 op: PROC (27)
    _32079 = _71White_Char(_71Look_64329);
    // SubProg scan_white pc: 28 op: WHILE (47)
    if (_32079 <= 0) {
        if (_32079 == 0) {
            DeRef(_32079);
            _32079 = NOVALUE;
            goto L2; // [28] 56
        }
        else {
            if (!IS_ATOM_INT(_32079) && DBL_PTR(_32079)->dbl == 0.0){
                DeRef(_32079);
                _32079 = NOVALUE;
                goto L2; // [28] 56
            }
            DeRef(_32079);
            _32079 = NOVALUE;
        }
    }
    DeRef(_32079);
    _32079 = NOVALUE;
    // SubProg scan_white pc: 31 op: STARTLINE (58)

    /** tokenize.e:397			scan_char(state)*/
    // SubProg scan_white pc: 33 op: PROC (27)
    Ref(_state_64566);
    _71scan_char(_state_64566);
    // SubProg scan_white pc: 36 op: STARTLINE (58)

    /** tokenize.e:398			if Look = EOL then*/
    // SubProg scan_white pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 40 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 10)
    goto L1; // [40] 22
    // SubProg scan_white pc: 44 op: STARTLINE (58)

    /** tokenize.e:399				return TRUE*/
    // SubProg scan_white pc: 46 op: RETURNF (28)

// Exiting block BLOCK: scan_white

// block var state_64566
    DeRef(_state_64566);
    return 1;
    // SubProg scan_white pc: 50 op: NOP1 (159)
    // SubProg scan_white pc: 51 op: STARTLINE (58)

    /** tokenize.e:401		end while*/
    // SubProg scan_white pc: 53 op: ENDWHILE (22)
    goto L1; // [53] 22
    // SubProg scan_white pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 64564 op: 159
    // SubProg scan_white pc: 56 op: STARTLINE (58)

    /** tokenize.e:403		return FALSE*/
    // SubProg scan_white pc: 58 op: RETURNF (28)

// Exiting block BLOCK: scan_white

// block var state_64566
    DeRef(_state_64566);
    return 0;
    // SubProg scan_white pc: 62 op: BADRETURNF (43)
    ;
}


object _71scankeep_white(object _state_64573)
{
    object _32086 = NOVALUE; // 64582 32086
    object _32085 = NOVALUE; // 64581 32085
// skipping _32084  name type: 0
    object _32083 = NOVALUE; // 64577 32083
    object _32082 = NOVALUE; // 64576 32082
    object _32081 = NOVALUE; // 64575 32081
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scankeep_white pc: 1 op: STARTLINE (58)

    /** tokenize.e:408		Token[TTYPE] = T_WHITE*/
    // SubProg scankeep_white pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 5 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 40;
    DeRef(_1);
    // SubProg scankeep_white pc: 9 op: STARTLINE (58)

    /** tokenize.e:409		Token[TDATA] = ""*/
    // SubProg scankeep_white pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 13 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg scankeep_white pc: 17 op: STARTLINE (58)

    /** tokenize.e:411		while White_Char(Look) do*/
    // SubProg scankeep_white pc: 19 op: NOP2 (110)
    // SubProg scankeep_white pc: 21 op: NOPWHILE (158)
L1: // addr: 22 pc: 21 sub: 64571 op: 158
    // SubProg scankeep_white pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 24 op: PROC (27)
    _32081 = _71White_Char(_71Look_64329);
    // SubProg scankeep_white pc: 28 op: WHILE (47)
    if (_32081 <= 0) {
        if (_32081 == 0) {
            DeRef(_32081);
            _32081 = NOVALUE;
            goto L2; // [28] 72
        }
        else {
            if (!IS_ATOM_INT(_32081) && DBL_PTR(_32081)->dbl == 0.0){
                DeRef(_32081);
                _32081 = NOVALUE;
                goto L2; // [28] 72
            }
            DeRef(_32081);
            _32081 = NOVALUE;
        }
    }
    DeRef(_32081);
    _32081 = NOVALUE;
    // SubProg scankeep_white pc: 31 op: STARTLINE (58)

    /** tokenize.e:412			Token[TDATA] &= Look*/
    // SubProg scankeep_white pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 37 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32082 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scankeep_white pc: 41 op: CONCAT (15)
    if (IS_SEQUENCE(_32082) && IS_ATOM(_71Look_64329)) {
        Append(&_32083, _32082, _71Look_64329);
    }
    else if (IS_ATOM(_32082) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32083, _32082, _71Look_64329);
        _32082 = NOVALUE;
    }
    _32082 = NOVALUE;
    // SubProg scankeep_white pc: 45 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32083;
    if( _1 != _32083 ){
        DeRef(_1);
    }
    _32083 = NOVALUE;
    // SubProg scankeep_white pc: 49 op: STARTLINE (58)

    /** tokenize.e:413			scan_char(state)*/
    // SubProg scankeep_white pc: 51 op: PROC (27)
    Ref(_state_64573);
    _71scan_char(_state_64573);
    // SubProg scankeep_white pc: 54 op: STARTLINE (58)

    /** tokenize.e:414			if Look = EOL then*/
    // SubProg scankeep_white pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 58 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 10)
    goto L1; // [58] 22
    // SubProg scankeep_white pc: 62 op: STARTLINE (58)

    /** tokenize.e:415				exit*/
    // SubProg scankeep_white pc: 64 op: EXIT (61)
    goto L2; // [64] 72
    // SubProg scankeep_white pc: 66 op: NOP1 (159)
    // SubProg scankeep_white pc: 67 op: STARTLINE (58)

    /** tokenize.e:417		end while*/
    // SubProg scankeep_white pc: 69 op: ENDWHILE (22)
    goto L1; // [69] 22
    // SubProg scankeep_white pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 64571 op: 159
    // SubProg scankeep_white pc: 72 op: STARTLINE (58)

    /** tokenize.e:419		if length(Token[TDATA]) then*/
    // SubProg scankeep_white pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32085 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scankeep_white pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_32085)){
            _32086 = SEQ_PTR(_32085)->length;
    }
    else {
        _32086 = 1;
    }
    _32085 = NOVALUE;
    // SubProg scankeep_white pc: 83 op: IF (20)
    if (_32086 == 0)
    {
        _32086 = NOVALUE;
        goto L3; // [83] 93
    }
    else{
        _32086 = NOVALUE;
    }
    // SubProg scankeep_white pc: 86 op: STARTLINE (58)

    /** tokenize.e:420			return TRUE*/
    // SubProg scankeep_white pc: 88 op: RETURNF (28)

// Exiting block BLOCK: scankeep_white

// block var state_64573
    DeRef(_state_64573);
    _32085 = NOVALUE;
    return 1;
    // SubProg scankeep_white pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 64571 op: 159
    // SubProg scankeep_white pc: 93 op: STARTLINE (58)

    /** tokenize.e:422		return FALSE*/
    // SubProg scankeep_white pc: 95 op: RETURNF (28)

// Exiting block BLOCK: scankeep_white

// block var state_64573
    DeRef(_state_64573);
    _32085 = NOVALUE;
    return 0;
    // SubProg scankeep_white pc: 99 op: BADRETURNF (43)
    ;
}


object _71scan_multicomment(object _state_64585, object _multi_64587)
{
    object _32097 = NOVALUE; // 64603 32097
    object _32096 = NOVALUE; // 64602 32096
    object _32095 = NOVALUE; // 64601 32095
    object _32094 = NOVALUE; // 64600 32094
    object _32092 = NOVALUE; // 64598 32092
    object _32091 = NOVALUE; // 64597 32091
    object _32090 = NOVALUE; // 64596 32090
    object _32089 = NOVALUE; // 64595 32089
// skipping _32088  name type: 0
// skipping _32087  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_multicomment pc: 1 op: STARTLINE (58)

    /** tokenize.e:426		Token[TTYPE] = T_COMMENT*/
    // SubProg scan_multicomment pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 5 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    // SubProg scan_multicomment pc: 9 op: STARTLINE (58)

    /** tokenize.e:427		if not multi then*/
    // SubProg scan_multicomment pc: 11 op: NOT_IFW (108)
    if (_multi_64587 != 0)
    goto L1; // [11] 23
    // SubProg scan_multicomment pc: 14 op: STARTLINE (58)

    /** tokenize.e:428			Token[TDATA] = "/"*/
    // SubProg scan_multicomment pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 18 op: ASSIGN_SUBS (16)
    RefDS(_23562);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23562;
    DeRef(_1);
    // SubProg scan_multicomment pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 64583 op: 159
    // SubProg scan_multicomment pc: 23 op: STARTLINE (58)

    /** tokenize.e:430		Token[TFORM] = TF_COMMENT_MULTIPLE*/
    // SubProg scan_multicomment pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 27 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);
    // SubProg scan_multicomment pc: 31 op: STARTLINE (58)

    /** tokenize.e:432		while 1 do*/
    // SubProg scan_multicomment pc: 33 op: NOP2 (110)
    // SubProg scan_multicomment pc: 35 op: NOPWHILE (158)
L2: // addr: 36 pc: 35 sub: 64583 op: 158
    // SubProg scan_multicomment pc: 36 op: STARTLINE (58)

    /** tokenize.e:433			if (Look = io:EOF) then*/
    // SubProg scan_multicomment pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 40 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != -1)
    goto L3; // [40] 56
    // SubProg scan_multicomment pc: 44 op: STARTLINE (58)

    /** tokenize.e:434				last_multi = TF_COMMENT_MULTIPLE*/
    // SubProg scan_multicomment pc: 46 op: ASSIGN (18)
    DeRef(_71last_multi_64678);
    _71last_multi_64678 = 9;
    // SubProg scan_multicomment pc: 49 op: STARTLINE (58)

    /** tokenize.e:435				return TRUE */
    // SubProg scan_multicomment pc: 51 op: RETURNF (28)

// Exiting block BLOCK: scan_multicomment

// block var state_64585
    DeRef(_state_64585);

// block var multi_64587
    return 1;
    // SubProg scan_multicomment pc: 55 op: NOP1 (159)
L3: // addr: 56 pc: 55 sub: 64583 op: 159
    // SubProg scan_multicomment pc: 56 op: STARTLINE (58)

    /** tokenize.e:438			if (Look = '*') and lookahead(1) = '/' then*/
    // SubProg scan_multicomment pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 60 op: EQUALS (3)
    _32089 = (_71Look_64329 == 42);
    // SubProg scan_multicomment pc: 64 op: SC1_AND_IF (146)
    if (_32089 == 0) {
        goto L4; // [64] 114
    }
    // SubProg scan_multicomment pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 70 op: PROC (27)
    Ref(_71g_state_64375);
    _32091 = _71lookahead(1, _71g_state_64375);
    // SubProg scan_multicomment pc: 75 op: EQUALS (3)
    if (IS_ATOM_INT(_32091)) {
        _32092 = (_32091 == 47);
    }
    else {
        _32092 = binary_op(EQUALS, _32091, 47);
    }
    DeRef(_32091);
    _32091 = NOVALUE;
    // SubProg scan_multicomment pc: 79 op: NOP1 (159)
    // SubProg scan_multicomment pc: 80 op: IF (20)
    if (_32092 == 0) {
        DeRef(_32092);
        _32092 = NOVALUE;
        goto L4; // [80] 114
    }
    else {
        if (!IS_ATOM_INT(_32092) && DBL_PTR(_32092)->dbl == 0.0){
            DeRef(_32092);
            _32092 = NOVALUE;
            goto L4; // [80] 114
        }
        DeRef(_32092);
        _32092 = NOVALUE;
    }
    DeRef(_32092);
    _32092 = NOVALUE;
    // SubProg scan_multicomment pc: 83 op: STARTLINE (58)

    //tokenize.e:439				Token[TDATA] &= "*/"
    // SubProg scan_multicomment pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 87 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32094 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_multicomment pc: 91 op: CONCAT (15)
    if (IS_SEQUENCE(_32094) && IS_ATOM(_32093)) {
    }
    else if (IS_ATOM(_32094) && IS_SEQUENCE(_32093)) {
        Ref(_32094);
        Prepend(&_32095, _32093, _32094);
    }
    else {
        Concat((object_ptr)&_32095, _32094, _32093);
        _32094 = NOVALUE;
    }
    _32094 = NOVALUE;
    // SubProg scan_multicomment pc: 95 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32095;
    if( _1 != _32095 ){
        DeRef(_1);
    }
    _32095 = NOVALUE;
    // SubProg scan_multicomment pc: 99 op: STARTLINE (58)

    //tokenize.e:441				scan_char(state) -- skip the */
    // SubProg scan_multicomment pc: 101 op: PROC (27)
    Ref(_state_64585);
    _71scan_char(_state_64585);
    // SubProg scan_multicomment pc: 104 op: STARTLINE (58)

    /** tokenize.e:442				scan_char(state)*/
    // SubProg scan_multicomment pc: 106 op: PROC (27)
    Ref(_state_64585);
    _71scan_char(_state_64585);
    // SubProg scan_multicomment pc: 109 op: STARTLINE (58)

    /** tokenize.e:443				exit*/
    // SubProg scan_multicomment pc: 111 op: EXIT (61)
    goto L5; // [111] 142
    // SubProg scan_multicomment pc: 113 op: NOP1 (159)
L4: // addr: 114 pc: 113 sub: 64583 op: 159
    // SubProg scan_multicomment pc: 114 op: STARTLINE (58)

    /** tokenize.e:446			Token[TDATA] &= Look*/
    // SubProg scan_multicomment pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 120 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32096 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_multicomment pc: 124 op: CONCAT (15)
    if (IS_SEQUENCE(_32096) && IS_ATOM(_71Look_64329)) {
        Append(&_32097, _32096, _71Look_64329);
    }
    else if (IS_ATOM(_32096) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32097, _32096, _71Look_64329);
        _32096 = NOVALUE;
    }
    _32096 = NOVALUE;
    // SubProg scan_multicomment pc: 128 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32097;
    if( _1 != _32097 ){
        DeRef(_1);
    }
    _32097 = NOVALUE;
    // SubProg scan_multicomment pc: 132 op: STARTLINE (58)

    /** tokenize.e:447			scan_char(state)*/
    // SubProg scan_multicomment pc: 134 op: PROC (27)
    Ref(_state_64585);
    _71scan_char(_state_64585);
    // SubProg scan_multicomment pc: 137 op: STARTLINE (58)

    /** tokenize.e:448		end while*/
    // SubProg scan_multicomment pc: 139 op: ENDWHILE (22)
    goto L2; // [139] 36
    // SubProg scan_multicomment pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 64583 op: 159
    // SubProg scan_multicomment pc: 142 op: STARTLINE (58)

    /** tokenize.e:450		return TRUE*/
    // SubProg scan_multicomment pc: 144 op: RETURNF (28)

// Exiting block BLOCK: scan_multicomment

// block var state_64585
    DeRef(_state_64585);

// block var multi_64587
    DeRef(_32089);
    _32089 = NOVALUE;
    return 1;
    // SubProg scan_multicomment pc: 148 op: BADRETURNF (43)
    ;
}


void _71scan_escaped_char(object _state_64608)
{
    object _f_64609 = NOVALUE;
// skipping _32105  name type: 0
// skipping _32104  name type: 0
    object _32103 = NOVALUE; // 64615 32103
    object _32102 = NOVALUE; // 64614 32102
// skipping _32101  name type: 0
    object _32100 = NOVALUE; // 64611 32100
    object _32099 = NOVALUE; // 64610 32099
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_escaped_char pc: 1 op: STARTLINE (58)

    /** tokenize.e:457		Token[TDATA] &= Look*/
    // SubProg scan_escaped_char pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 7 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32099 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_escaped_char pc: 11 op: CONCAT (15)
    if (IS_SEQUENCE(_32099) && IS_ATOM(_71Look_64329)) {
        Append(&_32100, _32099, _71Look_64329);
    }
    else if (IS_ATOM(_32099) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32100, _32099, _71Look_64329);
        _32099 = NOVALUE;
    }
    _32099 = NOVALUE;
    // SubProg scan_escaped_char pc: 15 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32100;
    if( _1 != _32100 ){
        DeRef(_1);
    }
    _32100 = NOVALUE;
    // SubProg scan_escaped_char pc: 19 op: STARTLINE (58)

    /** tokenize.e:458		if (Look = '\\') then*/
    // SubProg scan_escaped_char pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 23 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 92)
    goto L1; // [23] 71
    // SubProg scan_escaped_char pc: 27 op: STARTLINE (58)

    /** tokenize.e:459			scan_char(state)*/
    // SubProg scan_escaped_char pc: 29 op: PROC (27)
    Ref(_state_64608);
    _71scan_char(_state_64608);
    // SubProg scan_escaped_char pc: 32 op: STARTLINE (58)

    /** tokenize.e:460			Token[TDATA] &= Look*/
    // SubProg scan_escaped_char pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 38 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32102 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_escaped_char pc: 42 op: CONCAT (15)
    if (IS_SEQUENCE(_32102) && IS_ATOM(_71Look_64329)) {
        Append(&_32103, _32102, _71Look_64329);
    }
    else if (IS_ATOM(_32102) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32103, _32102, _71Look_64329);
        _32102 = NOVALUE;
    }
    _32102 = NOVALUE;
    // SubProg scan_escaped_char pc: 46 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32103;
    if( _1 != _32103 ){
        DeRef(_1);
    }
    _32103 = NOVALUE;
    // SubProg scan_escaped_char pc: 50 op: STARTLINE (58)

    /** tokenize.e:461			f = find(Look,QFLAGS)*/
    // SubProg scan_escaped_char pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 54 op: FIND_FROM (176)
    _f_64609 = find_from(_71Look_64329, _71QFLAGS_64604, 1);
    // SubProg scan_escaped_char pc: 59 op: STARTLINE (58)

    /** tokenize.e:462			if not f then*/
    // SubProg scan_escaped_char pc: 61 op: NOT_IFW (108)
    if (_f_64609 != 0)
    goto L2; // [61] 70
    // SubProg scan_escaped_char pc: 64 op: STARTLINE (58)

    /** tokenize.e:463				report_error(ERR_ESCAPE)*/
    // SubProg scan_escaped_char pc: 66 op: PROC (27)
    _71report_error(2);
    // SubProg scan_escaped_char pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 64606 op: 159
    // SubProg scan_escaped_char pc: 70 op: NOP1 (159)
L1: // addr: 71 pc: 70 sub: 64606 op: 159
    // SubProg scan_escaped_char pc: 71 op: STARTLINE (58)

    /** tokenize.e:466		scan_char(state)*/
    // SubProg scan_escaped_char pc: 73 op: PROC (27)
    Ref(_state_64608);
    _71scan_char(_state_64608);
    // SubProg scan_escaped_char pc: 76 op: STARTLINE (58)

    /** tokenize.e:467	end procedure*/
    // SubProg scan_escaped_char pc: 78 op: RETURNP (29)

// Exiting block BLOCK: scan_escaped_char

// block var state_64608
    DeRef(_state_64608);

// block var f_64609
    return;
    // SubProg scan_escaped_char pc: 81 op: BADRETURNF (43)
    ;
}


object _71scan_qchar(object _state_64621)
{
    object _32125 = NOVALUE; // 64648 32125
    object _32124 = NOVALUE; // 64647 32124
    object _32123 = NOVALUE; // 64646 32123
    object _32122 = NOVALUE; // 64645 32122
    object _32121 = NOVALUE; // 64643 32121
    object _32120 = NOVALUE; // 64642 32120
    object _32119 = NOVALUE; // 64641 32119
    object _32118 = NOVALUE; // 64640 32118
// skipping _32117  name type: 0
    object _32116 = NOVALUE; // 64636 32116
    object _32115 = NOVALUE; // 64635 32115
    object _32114 = NOVALUE; // 64634 32114
    object _32113 = NOVALUE; // 64633 32113
    object _32112 = NOVALUE; // 64632 32112
    object _32111 = NOVALUE; // 64630 32111
    object _32110 = NOVALUE; // 64629 32110
    object _32109 = NOVALUE; // 64628 32109
    object _32108 = NOVALUE; // 64627 32108
// skipping _32107  name type: 0
// skipping _32106  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_qchar pc: 1 op: STARTLINE (58)

    /** tokenize.e:470		if (Look != '\'') then return FALSE end if*/
    // SubProg scan_qchar pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 5 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 39)
    goto L1; // [5] 14
    // SubProg scan_qchar pc: 9 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64621
    DeRef(_state_64621);
    return 0;
    // SubProg scan_qchar pc: 13 op: NOP1 (159)
L1: // addr: 14 pc: 13 sub: 64619 op: 159
    // SubProg scan_qchar pc: 14 op: STARTLINE (58)

    /** tokenize.e:471		scan_char(state)*/
    // SubProg scan_qchar pc: 16 op: PROC (27)
    Ref(_state_64621);
    _71scan_char(_state_64621);
    // SubProg scan_qchar pc: 19 op: STARTLINE (58)

    /** tokenize.e:472		Token[TTYPE] = T_CHAR*/
    // SubProg scan_qchar pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 23 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 7;
    DeRef(_1);
    // SubProg scan_qchar pc: 27 op: STARTLINE (58)

    /** tokenize.e:473		Token[TDATA] = ""*/
    // SubProg scan_qchar pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 31 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg scan_qchar pc: 35 op: STARTLINE (58)

    /** tokenize.e:474		if (Look = EOL) then*/
    // SubProg scan_qchar pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 39 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 10)
    goto L2; // [39] 89
    // SubProg scan_qchar pc: 43 op: STARTLINE (58)

    /** tokenize.e:475			if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_qchar pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64621)){
        _32108 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64621)->dbl));
    }
    else{
        _32108 = (object)*(((s1_ptr)_2)->base + _state_64621);
    }
    // SubProg scan_qchar pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32108);
    _32109 = (object)*(((s1_ptr)_2)->base + 8);
    _32108 = NOVALUE;
    // SubProg scan_qchar pc: 55 op: IF (20)
    if (_32109 == 0) {
        _32109 = NOVALUE;
        goto L3; // [55] 77
    }
    else {
        if (!IS_ATOM_INT(_32109) && DBL_PTR(_32109)->dbl == 0.0){
            _32109 = NOVALUE;
            goto L3; // [55] 77
        }
        _32109 = NOVALUE;
    }
    _32109 = NOVALUE;
    // SubProg scan_qchar pc: 58 op: STARTLINE (58)

    /** tokenize.e:476				Token[TDATA] = "'" & Token[TDATA]*/
    // SubProg scan_qchar pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 64 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32110 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 68 op: CONCAT (15)
    if (IS_SEQUENCE(_26352) && IS_ATOM(_32110)) {
        Ref(_32110);
        Append(&_32111, _26352, _32110);
    }
    else if (IS_ATOM(_26352) && IS_SEQUENCE(_32110)) {
    }
    else {
        Concat((object_ptr)&_32111, _26352, _32110);
    }
    _32110 = NOVALUE;
    // SubProg scan_qchar pc: 72 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32111;
    if( _1 != _32111 ){
        DeRef(_1);
    }
    _32111 = NOVALUE;
    // SubProg scan_qchar pc: 76 op: NOP1 (159)
L3: // addr: 77 pc: 76 sub: 64619 op: 159
    // SubProg scan_qchar pc: 77 op: STARTLINE (58)

    /** tokenize.e:478			report_error(ERR_EOL_CHAR)*/
    // SubProg scan_qchar pc: 79 op: PROC (27)
    _71report_error(3);
    // SubProg scan_qchar pc: 82 op: STARTLINE (58)

    /** tokenize.e:479			return TRUE*/
    // SubProg scan_qchar pc: 84 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64621
    DeRef(_state_64621);
    return 1;
    // SubProg scan_qchar pc: 88 op: NOP1 (159)
L2: // addr: 89 pc: 88 sub: 64619 op: 159
    // SubProg scan_qchar pc: 89 op: STARTLINE (58)

    /** tokenize.e:481		scan_escaped_char(state)*/
    // SubProg scan_qchar pc: 91 op: PROC (27)
    Ref(_state_64621);
    _71scan_escaped_char(_state_64621);
    // SubProg scan_qchar pc: 94 op: STARTLINE (58)

    /** tokenize.e:482		while Look != '\'' and Look != EOL do*/
    // SubProg scan_qchar pc: 96 op: NOP2 (110)
    // SubProg scan_qchar pc: 98 op: NOPWHILE (158)
L4: // addr: 99 pc: 98 sub: 64619 op: 158
    // SubProg scan_qchar pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 101 op: NOTEQ (4)
    _32112 = (_71Look_64329 != 39);
    // SubProg scan_qchar pc: 105 op: SC1_AND_IF (146)
    if (_32112 == 0) {
        goto L5; // [105] 147
    }
    // SubProg scan_qchar pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 111 op: NOTEQ (4)
    _32114 = (_71Look_64329 != 10);
    // SubProg scan_qchar pc: 115 op: NOP1 (159)
    // SubProg scan_qchar pc: 116 op: WHILE (47)
    if (_32114 == 0)
    {
        DeRef(_32114);
        _32114 = NOVALUE;
        goto L5; // [116] 147
    }
    else{
        DeRef(_32114);
        _32114 = NOVALUE;
    }
    // SubProg scan_qchar pc: 119 op: STARTLINE (58)

    /** tokenize.e:483			Token[TDATA] &= Look*/
    // SubProg scan_qchar pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 125 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32115 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 129 op: CONCAT (15)
    if (IS_SEQUENCE(_32115) && IS_ATOM(_71Look_64329)) {
        Append(&_32116, _32115, _71Look_64329);
    }
    else if (IS_ATOM(_32115) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32116, _32115, _71Look_64329);
        _32115 = NOVALUE;
    }
    _32115 = NOVALUE;
    // SubProg scan_qchar pc: 133 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32116;
    if( _1 != _32116 ){
        DeRef(_1);
    }
    _32116 = NOVALUE;
    // SubProg scan_qchar pc: 137 op: STARTLINE (58)

    /** tokenize.e:484			scan_char( state )*/
    // SubProg scan_qchar pc: 139 op: PROC (27)
    Ref(_state_64621);
    _71scan_char(_state_64621);
    // SubProg scan_qchar pc: 142 op: STARTLINE (58)

    /** tokenize.e:485		end while*/
    // SubProg scan_qchar pc: 144 op: ENDWHILE (22)
    goto L4; // [144] 99
    // SubProg scan_qchar pc: 146 op: NOP1 (159)
L5: // addr: 147 pc: 146 sub: 64619 op: 159
    // SubProg scan_qchar pc: 147 op: STARTLINE (58)

    /** tokenize.e:486		if (Look != '\'') then*/
    // SubProg scan_qchar pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 151 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 39)
    goto L6; // [151] 201
    // SubProg scan_qchar pc: 155 op: STARTLINE (58)

    /** tokenize.e:487			if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_qchar pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 159 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64621)){
        _32118 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64621)->dbl));
    }
    else{
        _32118 = (object)*(((s1_ptr)_2)->base + _state_64621);
    }
    // SubProg scan_qchar pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32118);
    _32119 = (object)*(((s1_ptr)_2)->base + 8);
    _32118 = NOVALUE;
    // SubProg scan_qchar pc: 167 op: IF (20)
    if (_32119 == 0) {
        _32119 = NOVALUE;
        goto L7; // [167] 189
    }
    else {
        if (!IS_ATOM_INT(_32119) && DBL_PTR(_32119)->dbl == 0.0){
            _32119 = NOVALUE;
            goto L7; // [167] 189
        }
        _32119 = NOVALUE;
    }
    _32119 = NOVALUE;
    // SubProg scan_qchar pc: 170 op: STARTLINE (58)

    /** tokenize.e:488				Token[TDATA] = "'" & Token[TDATA]*/
    // SubProg scan_qchar pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 176 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32120 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 180 op: CONCAT (15)
    if (IS_SEQUENCE(_26352) && IS_ATOM(_32120)) {
        Ref(_32120);
        Append(&_32121, _26352, _32120);
    }
    else if (IS_ATOM(_26352) && IS_SEQUENCE(_32120)) {
    }
    else {
        Concat((object_ptr)&_32121, _26352, _32120);
    }
    _32120 = NOVALUE;
    // SubProg scan_qchar pc: 184 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32121;
    if( _1 != _32121 ){
        DeRef(_1);
    }
    _32121 = NOVALUE;
    // SubProg scan_qchar pc: 188 op: NOP1 (159)
L7: // addr: 189 pc: 188 sub: 64619 op: 159
    // SubProg scan_qchar pc: 189 op: STARTLINE (58)

    /** tokenize.e:490			report_error(ERR_CLOSE_CHAR)*/
    // SubProg scan_qchar pc: 191 op: PROC (27)
    _71report_error(4);
    // SubProg scan_qchar pc: 194 op: STARTLINE (58)

    /** tokenize.e:491			return TRUE*/
    // SubProg scan_qchar pc: 196 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64621
    DeRef(_state_64621);
    DeRef(_32112);
    _32112 = NOVALUE;
    return 1;
    // SubProg scan_qchar pc: 200 op: NOP1 (159)
L6: // addr: 201 pc: 200 sub: 64619 op: 159
    // SubProg scan_qchar pc: 201 op: STARTLINE (58)

    /** tokenize.e:493		scan_char(state)*/
    // SubProg scan_qchar pc: 203 op: PROC (27)
    Ref(_state_64621);
    _71scan_char(_state_64621);
    // SubProg scan_qchar pc: 206 op: STARTLINE (58)

    /** tokenize.e:494		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_qchar pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 210 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64621)){
        _32122 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64621)->dbl));
    }
    else{
        _32122 = (object)*(((s1_ptr)_2)->base + _state_64621);
    }
    // SubProg scan_qchar pc: 214 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32122);
    _32123 = (object)*(((s1_ptr)_2)->base + 8);
    _32122 = NOVALUE;
    // SubProg scan_qchar pc: 218 op: IF (20)
    if (_32123 == 0) {
        _32123 = NOVALUE;
        goto L8; // [218] 242
    }
    else {
        if (!IS_ATOM_INT(_32123) && DBL_PTR(_32123)->dbl == 0.0){
            _32123 = NOVALUE;
            goto L8; // [218] 242
        }
        _32123 = NOVALUE;
    }
    _32123 = NOVALUE;
    // SubProg scan_qchar pc: 221 op: STARTLINE (58)

    /** tokenize.e:495			Token[TDATA] = "'" & Token[TDATA] & "'"*/
    // SubProg scan_qchar pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 227 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32124 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 231 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _26352;
        concat_list[1] = _32124;
        concat_list[2] = _26352;
        Concat_N((object_ptr)&_32125, concat_list, 3);
    }
    _32124 = NOVALUE;
    // SubProg scan_qchar pc: 237 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32125;
    if( _1 != _32125 ){
        DeRef(_1);
    }
    _32125 = NOVALUE;
    // SubProg scan_qchar pc: 241 op: NOP1 (159)
L8: // addr: 242 pc: 241 sub: 64619 op: 159
    // SubProg scan_qchar pc: 242 op: STARTLINE (58)

    /** tokenize.e:497		return TRUE*/
    // SubProg scan_qchar pc: 244 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64621
    DeRef(_state_64621);
    DeRef(_32112);
    _32112 = NOVALUE;
    return 1;
    // SubProg scan_qchar pc: 248 op: BADRETURNF (43)
    ;
}


object _71lookahead_for(object _needle_64651, object _look_at_64652)
{
// skipping _32132  name type: 0
// skipping _32131  name type: 0
    object _32130 = NOVALUE; // 64661 32130
    object _32129 = NOVALUE; // 64660 32129
    object _32128 = NOVALUE; // 64658 32128
// skipping _32127  name type: 0
    object _32126 = NOVALUE; // 64654 32126
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lookahead_for pc: 1 op: INTEGER_CHECK (96)
    // SubProg lookahead_for pc: 3 op: STARTLINE (58)

    /** tokenize.e:501		if atom( needle ) then*/
    // SubProg lookahead_for pc: 5 op: IS_AN_ATOM (67)
    _32126 = 0;
    // SubProg lookahead_for pc: 8 op: IF (20)
    if (_32126 == 0)
    {
        _32126 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _32126 = NOVALUE;
    }
    // SubProg lookahead_for pc: 11 op: STARTLINE (58)

    /** tokenize.e:502			needle = {needle}*/
    // SubProg lookahead_for pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _needle_64651;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_needle_64651);
    ((intptr_t*)_2)[1] = _needle_64651;
    _needle_64651 = MAKE_SEQ(_1);
    DeRefDSi(_0);
    // SubProg lookahead_for pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 64649 op: 159
    // SubProg lookahead_for pc: 18 op: STARTLINE (58)

    /** tokenize.e:504		for i = 1 to length( needle ) do*/
    // SubProg lookahead_for pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_needle_64651)){
            _32128 = SEQ_PTR(_needle_64651)->length;
    }
    else {
        _32128 = 1;
    }
    // SubProg lookahead_for pc: 23 op: FOR_I (125)
    {
        object _i_64657;
        _i_64657 = 1;
L2: // addr: 30 pc: 23 sub: 64649 op: 125
        if (_i_64657 > _32128){
            goto L3; // [23] 67
        }
        // SubProg lookahead_for pc: 30 op: STARTLINE (58)

        /** tokenize.e:505			if lookahead( look_at ) != needle[i] then*/
        // SubProg lookahead_for pc: 32 op: GLOBAL_INIT_CHECK (109)
        // SubProg lookahead_for pc: 34 op: PROC (27)
        Ref(_71g_state_64375);
        _32129 = _71lookahead(_look_at_64652, _71g_state_64375);
        // SubProg lookahead_for pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_needle_64651);
        _32130 = (object)*(((s1_ptr)_2)->base + _i_64657);
        // SubProg lookahead_for pc: 43 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _32129, _32130)){
            DeRef(_32129);
            _32129 = NOVALUE;
            _32130 = NOVALUE;
            goto L4; // [43] 54
        }
        DeRef(_32129);
        _32129 = NOVALUE;
        _32130 = NOVALUE;
        // SubProg lookahead_for pc: 47 op: STARTLINE (58)

        /** tokenize.e:506				return FALSE*/
        // SubProg lookahead_for pc: 49 op: RETURNF (28)

// Exiting block BLOCK: lookahead_for

// block var needle_64651
        DeRef(_needle_64651);

// block var look_at_64652
        return 0;
        // SubProg lookahead_for pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 64649 op: 159
        // SubProg lookahead_for pc: 54 op: STARTLINE (58)

        /** tokenize.e:508			look_at += 1*/
        // SubProg lookahead_for pc: 56 op: PLUS1_I (117)
        _look_at_64652 = _look_at_64652 + 1;
        // SubProg lookahead_for pc: 60 op: STARTLINE (58)

        /** tokenize.e:509		end for*/
        // SubProg lookahead_for pc: 62 op: ENDFOR_INT_UP1 (54)
        _i_64657 = _i_64657 + 1;
        goto L2; // [62] 30
L3: // addr: 67 pc: 62 sub: 64649 op: 54
        ;
    }
    // SubProg lookahead_for pc: 67 op: STARTLINE (58)

    /** tokenize.e:510		return TRUE*/
    // SubProg lookahead_for pc: 69 op: RETURNF (28)

// Exiting block BLOCK: lookahead_for

// block var needle_64651
    DeRef(_needle_64651);

// block var look_at_64652
    return 1;
    // SubProg lookahead_for pc: 73 op: BADRETURNF (43)
    ;
}


object _71last_multiline_token()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg last_multiline_token pc: 1 op: STARTLINE (58)

    /** tokenize.e:540		return last_multi*/
    // SubProg last_multiline_token pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg last_multiline_token pc: 5 op: RETURNF (28)
    Ref(_71last_multi_64678);

// Exiting block BLOCK: last_multiline_token
    return _71last_multi_64678;
    // SubProg last_multiline_token pc: 9 op: BADRETURNF (43)
    ;
}


object _71raw_string(object _delimiter_64683, object _state_64684, object _multi_64685)
{
    object _32164 = NOVALUE; // 64718 32164
    object _32163 = NOVALUE; // 64717 32163
    object _32162 = NOVALUE; // 64715 32162
    object _32161 = NOVALUE; // 64714 32161
// skipping _32160  name type: 0
    object _32159 = NOVALUE; // 64710 32159
    object _32158 = NOVALUE; // 64709 32158
// skipping _32157  name type: 0
// skipping _32156  name type: 0
    object _32155 = NOVALUE; // 64704 32155
    object _32154 = NOVALUE; // 64703 32154
// skipping _32153  name type: 0
    object _32152 = NOVALUE; // 64700 32152
// skipping _32151  name type: 0
    object _32150 = NOVALUE; // 64697 32150
    object _32149 = NOVALUE; // 64696 32149
    object _32148 = NOVALUE; // 64695 32148
    object _32147 = NOVALUE; // 64694 32147
    object _32146 = NOVALUE; // 64693 32146
    object _32145 = NOVALUE; // 64692 32145
    object _32144 = NOVALUE; // 64691 32144
    object _32143 = NOVALUE; // 64688 32143
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg raw_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg raw_string pc: 3 op: STARTLINE (58)

    /** tokenize.e:544		Token[TTYPE] = T_STRING*/
    // SubProg raw_string pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 7 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg raw_string pc: 11 op: STARTLINE (58)

    /** tokenize.e:545		Token[TDATA] = ""*/
    // SubProg raw_string pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 15 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg raw_string pc: 19 op: STARTLINE (58)

    /** tokenize.e:547		if equal( delimiter, "`" ) then*/
    // SubProg raw_string pc: 21 op: EQUAL (153)
    if (_delimiter_64683 == _32142)
    _32143 = 1;
    else if (IS_ATOM_INT(_delimiter_64683) && IS_ATOM_INT(_32142))
    _32143 = 0;
    else
    _32143 = (compare(_delimiter_64683, _32142) == 0);
    // SubProg raw_string pc: 25 op: IF (20)
    if (_32143 == 0)
    {
        _32143 = NOVALUE;
        goto L1; // [25] 39
    }
    else{
        _32143 = NOVALUE;
    }
    // SubProg raw_string pc: 28 op: STARTLINE (58)

    /** tokenize.e:548			Token[TFORM] = TF_STRING_BACKTICK*/
    // SubProg raw_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 32 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg raw_string pc: 36 op: ELSE (23)
    goto L2; // [36] 48
    // SubProg raw_string pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 64681 op: 159
    // SubProg raw_string pc: 39 op: STARTLINE (58)

    /** tokenize.e:550			Token[TFORM] = TF_STRING_TRIPLE*/
    // SubProg raw_string pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 43 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    // SubProg raw_string pc: 47 op: NOP1 (159)
L2: // addr: 48 pc: 47 sub: 64681 op: 159
    // SubProg raw_string pc: 48 op: STARTLINE (58)

    /** tokenize.e:553		while lookahead(1) != io:EOF and not lookahead_for( delimiter ) with entry do*/
    // SubProg raw_string pc: 50 op: NOP2 (110)
    // SubProg raw_string pc: 52 op: NOPWHILE (158)
L3: // addr: 53 pc: 52 sub: 64681 op: 158
    // SubProg raw_string pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 55 op: PROC (27)
    Ref(_71g_state_64375);
    _32144 = _71lookahead(1, _71g_state_64375);
    // SubProg raw_string pc: 60 op: NOTEQ (4)
    if (IS_ATOM_INT(_32144)) {
        _32145 = (_32144 != -1);
    }
    else {
        _32145 = binary_op(NOTEQ, _32144, -1);
    }
    DeRef(_32144);
    _32144 = NOVALUE;
    // SubProg raw_string pc: 64 op: SC1_AND (141)
    if (IS_ATOM_INT(_32145)) {
        if (_32145 == 0) {
            DeRef(_32146);
            _32146 = 0;
            goto L4; // [64] 80
        }
    }
    else {
        if (DBL_PTR(_32145)->dbl == 0.0) {
            DeRef(_32146);
            _32146 = 0;
            goto L4; // [64] 80
        }
    }
    // SubProg raw_string pc: 68 op: PROC (27)
    RefDS(_delimiter_64683);
    _32147 = _71lookahead_for(_delimiter_64683, 1);
    // SubProg raw_string pc: 73 op: NOT (7)
    if (IS_ATOM_INT(_32147)) {
        _32148 = (_32147 == 0);
    }
    else {
        _32148 = unary_op(NOT, _32147);
    }
    DeRef(_32147);
    _32147 = NOVALUE;
    // SubProg raw_string pc: 76 op: SC2_AND (142)
    DeRef(_32146);
    if (IS_ATOM_INT(_32148))
    _32146 = (_32148 != 0);
    else
    _32146 = DBL_PTR(_32148)->dbl != 0.0;
    // SubProg raw_string pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 64681 op: 159
    // SubProg raw_string pc: 80 op: WHILE (47)
    if (_32146 == 0)
    {
        _32146 = NOVALUE;
        goto L5; // [80] 111
    }
    else{
        _32146 = NOVALUE;
    }
    // SubProg raw_string pc: 83 op: STARTLINE (58)

    /** tokenize.e:554			scan_char(state)*/
    // SubProg raw_string pc: 85 op: PROC (27)
    Ref(_state_64684);
    _71scan_char(_state_64684);
    // SubProg raw_string pc: 88 op: STARTLINE (58)

    /** tokenize.e:555			Token[TDATA] &= Look*/
    // SubProg raw_string pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 94 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32149 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 98 op: CONCAT (15)
    if (IS_SEQUENCE(_32149) && IS_ATOM(_71Look_64329)) {
        Append(&_32150, _32149, _71Look_64329);
    }
    else if (IS_ATOM(_32149) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32150, _32149, _71Look_64329);
        _32149 = NOVALUE;
    }
    _32149 = NOVALUE;
    // SubProg raw_string pc: 102 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32150;
    if( _1 != _32150 ){
        DeRef(_1);
    }
    _32150 = NOVALUE;
    // SubProg raw_string pc: 106 op: STARTLINE (58)

    /** tokenize.e:557		end while*/
    // SubProg raw_string pc: 108 op: ENDWHILE (22)
    goto L3; // [108] 53
    // SubProg raw_string pc: 110 op: NOP1 (159)
L5: // addr: 111 pc: 110 sub: 64681 op: 159
    // SubProg raw_string pc: 111 op: STARTLINE (58)

    /** tokenize.e:559		if Look != io:EOF then*/
    // SubProg raw_string pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 115 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == -1)
    goto L6; // [115] 136
    // SubProg raw_string pc: 119 op: STARTLINE (58)

    /** tokenize.e:560			sti += length( delimiter )*/
    // SubProg raw_string pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 123 op: LENGTH (42)
    if (IS_SEQUENCE(_delimiter_64683)){
            _32152 = SEQ_PTR(_delimiter_64683)->length;
    }
    else {
        _32152 = 1;
    }
    // SubProg raw_string pc: 126 op: PLUS_I (115)
    _71sti_64326 = _71sti_64326 + _32152;
    _32152 = NOVALUE;
    // SubProg raw_string pc: 130 op: STARTLINE (58)

    /** tokenize.e:561			scan_char(state)*/
    // SubProg raw_string pc: 132 op: PROC (27)
    Ref(_state_64684);
    _71scan_char(_state_64684);
    // SubProg raw_string pc: 135 op: NOP1 (159)
L6: // addr: 136 pc: 135 sub: 64681 op: 159
    // SubProg raw_string pc: 136 op: STARTLINE (58)

    /** tokenize.e:564		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg raw_string pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 140 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64684)){
        _32154 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64684)->dbl));
    }
    else{
        _32154 = (object)*(((s1_ptr)_2)->base + _state_64684);
    }
    // SubProg raw_string pc: 144 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32154);
    _32155 = (object)*(((s1_ptr)_2)->base + 8);
    _32154 = NOVALUE;
    // SubProg raw_string pc: 148 op: IF (20)
    if (_32155 == 0) {
        _32155 = NOVALUE;
        goto L7; // [148] 243
    }
    else {
        if (!IS_ATOM_INT(_32155) && DBL_PTR(_32155)->dbl == 0.0){
            _32155 = NOVALUE;
            goto L7; // [148] 243
        }
        _32155 = NOVALUE;
    }
    _32155 = NOVALUE;
    // SubProg raw_string pc: 151 op: STARTLINE (58)

    /** tokenize.e:565			if Look = io:EOF then*/
    // SubProg raw_string pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 155 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != -1)
    goto L8; // [155] 194
    // SubProg raw_string pc: 159 op: STARTLINE (58)

    /** tokenize.e:566				if not multi then*/
    // SubProg raw_string pc: 161 op: NOT_IFW (108)
    if (_multi_64685 != 0)
    goto L9; // [161] 183
    // SubProg raw_string pc: 164 op: STARTLINE (58)

    /** tokenize.e:567					Token[TDATA] = delimiter & Token[TDATA]*/
    // SubProg raw_string pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32158 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 174 op: CONCAT (15)
    if (IS_SEQUENCE(_delimiter_64683) && IS_ATOM(_32158)) {
        Ref(_32158);
        Append(&_32159, _delimiter_64683, _32158);
    }
    else if (IS_ATOM(_delimiter_64683) && IS_SEQUENCE(_32158)) {
    }
    else {
        Concat((object_ptr)&_32159, _delimiter_64683, _32158);
    }
    _32158 = NOVALUE;
    // SubProg raw_string pc: 178 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32159;
    if( _1 != _32159 ){
        DeRef(_1);
    }
    _32159 = NOVALUE;
    // SubProg raw_string pc: 182 op: NOP1 (159)
L9: // addr: 183 pc: 182 sub: 64681 op: 159
    // SubProg raw_string pc: 183 op: STARTLINE (58)

    /** tokenize.e:569				last_multi = Token[TFORM]*/
    // SubProg raw_string pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 187 op: RHS_SUBS (25)
    DeRef(_71last_multi_64678);
    _2 = (object)SEQ_PTR(_71Token_64323);
    _71last_multi_64678 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_71last_multi_64678);
    // SubProg raw_string pc: 191 op: ELSE (23)
    goto LA; // [191] 242
    // SubProg raw_string pc: 193 op: NOP1 (159)
L8: // addr: 194 pc: 193 sub: 64681 op: 159
    // SubProg raw_string pc: 194 op: STARTLINE (58)

    /** tokenize.e:571				if multi then*/
    // SubProg raw_string pc: 196 op: IF (20)
    if (_multi_64685 == 0)
    {
        goto LB; // [196] 220
    }
    else{
    }
    // SubProg raw_string pc: 199 op: STARTLINE (58)

    /** tokenize.e:572					Token[TDATA] = Token[TDATA] & delimiter*/
    // SubProg raw_string pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 205 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32161 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 209 op: CONCAT (15)
    if (IS_SEQUENCE(_32161) && IS_ATOM(_delimiter_64683)) {
    }
    else if (IS_ATOM(_32161) && IS_SEQUENCE(_delimiter_64683)) {
        Ref(_32161);
        Prepend(&_32162, _delimiter_64683, _32161);
    }
    else {
        Concat((object_ptr)&_32162, _32161, _delimiter_64683);
        _32161 = NOVALUE;
    }
    _32161 = NOVALUE;
    // SubProg raw_string pc: 213 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32162;
    if( _1 != _32162 ){
        DeRef(_1);
    }
    _32162 = NOVALUE;
    // SubProg raw_string pc: 217 op: ELSE (23)
    goto LC; // [217] 241
    // SubProg raw_string pc: 219 op: NOP1 (159)
LB: // addr: 220 pc: 219 sub: 64681 op: 159
    // SubProg raw_string pc: 220 op: STARTLINE (58)

    /** tokenize.e:574					Token[TDATA] = delimiter & Token[TDATA] & delimiter*/
    // SubProg raw_string pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 226 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32163 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 230 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _delimiter_64683;
        concat_list[1] = _32163;
        concat_list[2] = _delimiter_64683;
        Concat_N((object_ptr)&_32164, concat_list, 3);
    }
    _32163 = NOVALUE;
    // SubProg raw_string pc: 236 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32164;
    if( _1 != _32164 ){
        DeRef(_1);
    }
    _32164 = NOVALUE;
    // SubProg raw_string pc: 240 op: NOP1 (159)
LC: // addr: 241 pc: 240 sub: 64681 op: 159
    // SubProg raw_string pc: 241 op: NOP1 (159)
LA: // addr: 242 pc: 241 sub: 64681 op: 159
    // SubProg raw_string pc: 242 op: NOP1 (159)
L7: // addr: 243 pc: 242 sub: 64681 op: 159
    // SubProg raw_string pc: 243 op: STARTLINE (58)

    /** tokenize.e:579		return TRUE*/
    // SubProg raw_string pc: 245 op: RETURNF (28)

// Exiting block BLOCK: raw_string

// block var delimiter_64683
    DeRefDSi(_delimiter_64683);

// block var state_64684
    DeRef(_state_64684);

// block var multi_64685
    DeRef(_32148);
    _32148 = NOVALUE;
    DeRef(_32145);
    _32145 = NOVALUE;
    return 1;
    // SubProg raw_string pc: 249 op: BADRETURNF (43)
    ;
}


object _71scan_string(object _state_64721)
{
    object _32191 = NOVALUE; // 64758 32191
    object _32190 = NOVALUE; // 64757 32190
    object _32189 = NOVALUE; // 64756 32189
    object _32188 = NOVALUE; // 64755 32188
    object _32187 = NOVALUE; // 64753 32187
    object _32186 = NOVALUE; // 64752 32186
    object _32185 = NOVALUE; // 64751 32185
    object _32184 = NOVALUE; // 64750 32184
    object _32183 = NOVALUE; // 64747 32183
    object _32182 = NOVALUE; // 64746 32182
    object _32180 = NOVALUE; // 64744 32180
    object _32179 = NOVALUE; // 64743 32179
// skipping _32178  name type: 0
// skipping _32177  name type: 0
    object _32176 = NOVALUE; // 64737 32176
// skipping _32175  name type: 0
    object _32174 = NOVALUE; // 64735 32174
    object _32172 = NOVALUE; // 64733 32172
    object _32171 = NOVALUE; // 64732 32171
// skipping _32170  name type: 0
    object _32169 = NOVALUE; // 64729 32169
    object _32168 = NOVALUE; // 64728 32168
// skipping _32167  name type: 0
    object _32166 = NOVALUE; // 64724 32166
// skipping _32165  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_string pc: 1 op: STARTLINE (58)

    /** tokenize.e:583		if (Look = '`') then*/
    // SubProg scan_string pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 5 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 96)
    goto L1; // [5] 22
    // SubProg scan_string pc: 9 op: STARTLINE (58)

    /** tokenize.e:584			return raw_string( "`", state )*/
    // SubProg scan_string pc: 11 op: PROC (27)
    RefDS(_32142);
    Ref(_state_64721);
    _32166 = _71raw_string(_32142, _state_64721, 0);
    // SubProg scan_string pc: 17 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64721
    DeRef(_state_64721);
    return _32166;
    // SubProg scan_string pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 64719 op: 159
    // SubProg scan_string pc: 22 op: STARTLINE (58)

    /** tokenize.e:586		if (Look != '"') then */
    // SubProg scan_string pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 26 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 34)
    goto L2; // [26] 37
    // SubProg scan_string pc: 30 op: STARTLINE (58)

    /** tokenize.e:587			return FALSE */
    // SubProg scan_string pc: 32 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64721
    DeRef(_state_64721);
    DeRef(_32166);
    _32166 = NOVALUE;
    return 0;
    // SubProg scan_string pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 64719 op: 159
    // SubProg scan_string pc: 37 op: STARTLINE (58)

    /** tokenize.e:590		if sti + 3 < length(source_text) then*/
    // SubProg scan_string pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 41 op: PLUS (11)
    _32168 = _71sti_64326 + 3;
    if ((object)((uintptr_t)_32168 + (uintptr_t)HIGH_BITS) >= 0){
        _32168 = NewDouble((eudouble)_32168);
    }
    // SubProg scan_string pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64325)){
            _32169 = SEQ_PTR(_71source_text_64325)->length;
    }
    else {
        _32169 = 1;
    }
    // SubProg scan_string pc: 50 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _32168, _32169)){
        DeRef(_32168);
        _32168 = NOVALUE;
        _32169 = NOVALUE;
        goto L3; // [50] 100
    }
    DeRef(_32168);
    _32168 = NOVALUE;
    _32169 = NOVALUE;
    // SubProg scan_string pc: 54 op: STARTLINE (58)

    /** tokenize.e:591			if equal(source_text[sti .. sti + 2], "\"\"\"") then*/
    // SubProg scan_string pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 62 op: PLUS (11)
    _32171 = _71sti_64326 + 2;
    // SubProg scan_string pc: 66 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32172;
    RHS_Slice(_71source_text_64325, _71sti_64326, _32171);
    // SubProg scan_string pc: 71 op: EQUAL (153)
    if (_32172 == _32173)
    _32174 = 1;
    else if (IS_ATOM_INT(_32172) && IS_ATOM_INT(_32173))
    _32174 = 0;
    else
    _32174 = (compare(_32172, _32173) == 0);
    DeRefDS(_32172);
    _32172 = NOVALUE;
    // SubProg scan_string pc: 75 op: IF (20)
    if (_32174 == 0)
    {
        _32174 = NOVALUE;
        goto L4; // [75] 99
    }
    else{
        _32174 = NOVALUE;
    }
    // SubProg scan_string pc: 78 op: STARTLINE (58)

    /** tokenize.e:593				sti += 2*/
    // SubProg scan_string pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 82 op: PLUS_I (115)
    _71sti_64326 = _71sti_64326 + 2;
    // SubProg scan_string pc: 86 op: STARTLINE (58)

    /** tokenize.e:594				return raw_string( `"""`, state )*/
    // SubProg scan_string pc: 88 op: PROC (27)
    RefDS(_32173);
    Ref(_state_64721);
    _32176 = _71raw_string(_32173, _state_64721, 0);
    // SubProg scan_string pc: 94 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64721
    DeRef(_state_64721);
    _32171 = NOVALUE;
    DeRef(_32166);
    _32166 = NOVALUE;
    return _32176;
    // SubProg scan_string pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 64719 op: 159
    // SubProg scan_string pc: 99 op: NOP1 (159)
L3: // addr: 100 pc: 99 sub: 64719 op: 159
    // SubProg scan_string pc: 100 op: STARTLINE (58)

    /** tokenize.e:598		scan_char(state)*/
    // SubProg scan_string pc: 102 op: PROC (27)
    Ref(_state_64721);
    _71scan_char(_state_64721);
    // SubProg scan_string pc: 105 op: STARTLINE (58)

    /** tokenize.e:599		Token[TTYPE] = T_STRING*/
    // SubProg scan_string pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 109 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg scan_string pc: 113 op: STARTLINE (58)

    /** tokenize.e:600		Token[TDATA] = ""*/
    // SubProg scan_string pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 117 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg scan_string pc: 121 op: STARTLINE (58)

    /** tokenize.e:601		Token[TFORM] = TF_STRING_SINGLE*/
    // SubProg scan_string pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 125 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    // SubProg scan_string pc: 129 op: STARTLINE (58)

    /** tokenize.e:603		while (Look != '"') do*/
    // SubProg scan_string pc: 131 op: NOP2 (110)
    // SubProg scan_string pc: 133 op: NOPWHILE (158)
L5: // addr: 134 pc: 133 sub: 64719 op: 158
    // SubProg scan_string pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 136 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 34)
    goto L6; // [136] 254
    // SubProg scan_string pc: 140 op: STARTLINE (58)

    /** tokenize.e:604			if (Look = EOL) then */
    // SubProg scan_string pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 144 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 10)
    goto L7; // [144] 194
    // SubProg scan_string pc: 148 op: STARTLINE (58)

    /** tokenize.e:605				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_string pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 152 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64721)){
        _32179 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64721)->dbl));
    }
    else{
        _32179 = (object)*(((s1_ptr)_2)->base + _state_64721);
    }
    // SubProg scan_string pc: 156 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32179);
    _32180 = (object)*(((s1_ptr)_2)->base + 8);
    _32179 = NOVALUE;
    // SubProg scan_string pc: 160 op: IF (20)
    if (_32180 == 0) {
        _32180 = NOVALUE;
        goto L8; // [160] 182
    }
    else {
        if (!IS_ATOM_INT(_32180) && DBL_PTR(_32180)->dbl == 0.0){
            _32180 = NOVALUE;
            goto L8; // [160] 182
        }
        _32180 = NOVALUE;
    }
    _32180 = NOVALUE;
    // SubProg scan_string pc: 163 op: STARTLINE (58)

    /** tokenize.e:606					Token[TDATA] = "\"" & Token[TDATA] -- & "\""*/
    // SubProg scan_string pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 169 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32182 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_string pc: 173 op: CONCAT (15)
    if (IS_SEQUENCE(_32181) && IS_ATOM(_32182)) {
        Ref(_32182);
        Append(&_32183, _32181, _32182);
    }
    else if (IS_ATOM(_32181) && IS_SEQUENCE(_32182)) {
    }
    else {
        Concat((object_ptr)&_32183, _32181, _32182);
    }
    _32182 = NOVALUE;
    // SubProg scan_string pc: 177 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32183;
    if( _1 != _32183 ){
        DeRef(_1);
    }
    _32183 = NOVALUE;
    // SubProg scan_string pc: 181 op: NOP1 (159)
L8: // addr: 182 pc: 181 sub: 64719 op: 159
    // SubProg scan_string pc: 182 op: STARTLINE (58)

    /** tokenize.e:608				report_error(ERR_EOL_STRING)*/
    // SubProg scan_string pc: 184 op: PROC (27)
    _71report_error(5);
    // SubProg scan_string pc: 187 op: STARTLINE (58)

    /** tokenize.e:609				return TRUE*/
    // SubProg scan_string pc: 189 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64721
    DeRef(_state_64721);
    DeRef(_32171);
    _32171 = NOVALUE;
    DeRef(_32176);
    _32176 = NOVALUE;
    DeRef(_32166);
    _32166 = NOVALUE;
    return 1;
    // SubProg scan_string pc: 193 op: NOP1 (159)
L7: // addr: 194 pc: 193 sub: 64719 op: 159
    // SubProg scan_string pc: 194 op: STARTLINE (58)

    /** tokenize.e:612			scan_escaped_char(state)*/
    // SubProg scan_string pc: 196 op: PROC (27)
    Ref(_state_64721);
    _71scan_escaped_char(_state_64721);
    // SubProg scan_string pc: 199 op: STARTLINE (58)

    /** tokenize.e:614			if ERR then */
    // SubProg scan_string pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 203 op: IF (20)
    if (_71ERR_64330 == 0)
    {
        goto L5; // [203] 134
    }
    else{
    }
    // SubProg scan_string pc: 206 op: STARTLINE (58)

    /** tokenize.e:615				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_string pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 210 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64721)){
        _32184 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64721)->dbl));
    }
    else{
        _32184 = (object)*(((s1_ptr)_2)->base + _state_64721);
    }
    // SubProg scan_string pc: 214 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32184);
    _32185 = (object)*(((s1_ptr)_2)->base + 8);
    _32184 = NOVALUE;
    // SubProg scan_string pc: 218 op: IF (20)
    if (_32185 == 0) {
        _32185 = NOVALUE;
        goto L9; // [218] 242
    }
    else {
        if (!IS_ATOM_INT(_32185) && DBL_PTR(_32185)->dbl == 0.0){
            _32185 = NOVALUE;
            goto L9; // [218] 242
        }
        _32185 = NOVALUE;
    }
    _32185 = NOVALUE;
    // SubProg scan_string pc: 221 op: STARTLINE (58)

    /** tokenize.e:616					Token[TDATA] = "\"" & Token[TDATA] & "\""*/
    // SubProg scan_string pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 227 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32186 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_string pc: 231 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _32181;
        concat_list[1] = _32186;
        concat_list[2] = _32181;
        Concat_N((object_ptr)&_32187, concat_list, 3);
    }
    _32186 = NOVALUE;
    // SubProg scan_string pc: 237 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32187;
    if( _1 != _32187 ){
        DeRef(_1);
    }
    _32187 = NOVALUE;
    // SubProg scan_string pc: 241 op: NOP1 (159)
L9: // addr: 242 pc: 241 sub: 64719 op: 159
    // SubProg scan_string pc: 242 op: STARTLINE (58)

    /** tokenize.e:618				return TRUE*/
    // SubProg scan_string pc: 244 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64721
    DeRef(_state_64721);
    DeRef(_32171);
    _32171 = NOVALUE;
    DeRef(_32176);
    _32176 = NOVALUE;
    DeRef(_32166);
    _32166 = NOVALUE;
    return 1;
    // SubProg scan_string pc: 248 op: NOP1 (159)
    // SubProg scan_string pc: 249 op: STARTLINE (58)

    /** tokenize.e:620		end while*/
    // SubProg scan_string pc: 251 op: ENDWHILE (22)
    goto L5; // [251] 134
    // SubProg scan_string pc: 253 op: NOP1 (159)
L6: // addr: 254 pc: 253 sub: 64719 op: 159
    // SubProg scan_string pc: 254 op: STARTLINE (58)

    /** tokenize.e:622		scan_char(state)*/
    // SubProg scan_string pc: 256 op: PROC (27)
    Ref(_state_64721);
    _71scan_char(_state_64721);
    // SubProg scan_string pc: 259 op: STARTLINE (58)

    /** tokenize.e:624		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_string pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 263 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64721)){
        _32188 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64721)->dbl));
    }
    else{
        _32188 = (object)*(((s1_ptr)_2)->base + _state_64721);
    }
    // SubProg scan_string pc: 267 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32188);
    _32189 = (object)*(((s1_ptr)_2)->base + 8);
    _32188 = NOVALUE;
    // SubProg scan_string pc: 271 op: IF (20)
    if (_32189 == 0) {
        _32189 = NOVALUE;
        goto LA; // [271] 295
    }
    else {
        if (!IS_ATOM_INT(_32189) && DBL_PTR(_32189)->dbl == 0.0){
            _32189 = NOVALUE;
            goto LA; // [271] 295
        }
        _32189 = NOVALUE;
    }
    _32189 = NOVALUE;
    // SubProg scan_string pc: 274 op: STARTLINE (58)

    /** tokenize.e:625			Token[TDATA] = "\"" & Token[TDATA] & "\""*/
    // SubProg scan_string pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 280 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32190 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_string pc: 284 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _32181;
        concat_list[1] = _32190;
        concat_list[2] = _32181;
        Concat_N((object_ptr)&_32191, concat_list, 3);
    }
    _32190 = NOVALUE;
    // SubProg scan_string pc: 290 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32191;
    if( _1 != _32191 ){
        DeRef(_1);
    }
    _32191 = NOVALUE;
    // SubProg scan_string pc: 294 op: NOP1 (159)
LA: // addr: 295 pc: 294 sub: 64719 op: 159
    // SubProg scan_string pc: 295 op: STARTLINE (58)

    /** tokenize.e:627		return TRUE*/
    // SubProg scan_string pc: 297 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64721
    DeRef(_state_64721);
    DeRef(_32171);
    _32171 = NOVALUE;
    DeRef(_32176);
    _32176 = NOVALUE;
    DeRef(_32166);
    _32166 = NOVALUE;
    return 1;
    // SubProg scan_string pc: 301 op: BADRETURNF (43)
    ;
}


object _71hex_val(object _h_64761)
{
    object _32198 = NOVALUE; // 64771 32198
    object _32197 = NOVALUE; // 64769 32197
    object _32196 = NOVALUE; // 64768 32196
// skipping _32195  name type: 0
    object _32194 = NOVALUE; // 64765 32194
    object _32193 = NOVALUE; // 64764 32193
// skipping _32192  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hex_val pc: 1 op: INTEGER_CHECK (96)
    // SubProg hex_val pc: 3 op: STARTLINE (58)

    /** tokenize.e:631		if h >= 'a' then*/
    // SubProg hex_val pc: 5 op: GREATEREQ_IFW_I (120)
    if (_h_64761 < 97)
    goto L1; // [5] 26
    // SubProg hex_val pc: 9 op: STARTLINE (58)

    /** tokenize.e:632			return h - 'a' + 10*/
    // SubProg hex_val pc: 11 op: MINUS (10)
    _32193 = _h_64761 - 97;
    if ((object)((uintptr_t)_32193 +(uintptr_t) HIGH_BITS) >= 0){
        _32193 = NewDouble((eudouble)_32193);
    }
    // SubProg hex_val pc: 15 op: PLUS (11)
    if (IS_ATOM_INT(_32193)) {
        _32194 = _32193 + 10;
        if ((object)((uintptr_t)_32194 + (uintptr_t)HIGH_BITS) >= 0){
            _32194 = NewDouble((eudouble)_32194);
        }
    }
    else {
        _32194 = NewDouble(DBL_PTR(_32193)->dbl + (eudouble)10);
    }
    DeRef(_32193);
    _32193 = NOVALUE;
    // SubProg hex_val pc: 19 op: RETURNF (28)

// Exiting block BLOCK: hex_val

// block var h_64761
    return _32194;
    // SubProg hex_val pc: 23 op: ELSE (23)
    goto L2; // [23] 60
    // SubProg hex_val pc: 25 op: NOP1 (159)
L1: // addr: 26 pc: 25 sub: 64759 op: 159
    // SubProg hex_val pc: 26 op: STARTLINE (58)

    /** tokenize.e:633		elsif h >= 'A' then*/
    // SubProg hex_val pc: 28 op: GREATEREQ_IFW_I (120)
    if (_h_64761 < 65)
    goto L3; // [28] 49
    // SubProg hex_val pc: 32 op: STARTLINE (58)

    /** tokenize.e:634			return h - 'A' + 10*/
    // SubProg hex_val pc: 34 op: MINUS (10)
    _32196 = _h_64761 - 65;
    if ((object)((uintptr_t)_32196 +(uintptr_t) HIGH_BITS) >= 0){
        _32196 = NewDouble((eudouble)_32196);
    }
    // SubProg hex_val pc: 38 op: PLUS (11)
    if (IS_ATOM_INT(_32196)) {
        _32197 = _32196 + 10;
        if ((object)((uintptr_t)_32197 + (uintptr_t)HIGH_BITS) >= 0){
            _32197 = NewDouble((eudouble)_32197);
        }
    }
    else {
        _32197 = NewDouble(DBL_PTR(_32196)->dbl + (eudouble)10);
    }
    DeRef(_32196);
    _32196 = NOVALUE;
    // SubProg hex_val pc: 42 op: RETURNF (28)

// Exiting block BLOCK: hex_val

// block var h_64761
    DeRef(_32194);
    _32194 = NOVALUE;
    return _32197;
    // SubProg hex_val pc: 46 op: ELSE (23)
    goto L2; // [46] 60
    // SubProg hex_val pc: 48 op: NOP1 (159)
L3: // addr: 49 pc: 48 sub: 64759 op: 159
    // SubProg hex_val pc: 49 op: STARTLINE (58)

    /** tokenize.e:636			return h - '0'*/
    // SubProg hex_val pc: 51 op: MINUS (10)
    _32198 = _h_64761 - 48;
    if ((object)((uintptr_t)_32198 +(uintptr_t) HIGH_BITS) >= 0){
        _32198 = NewDouble((eudouble)_32198);
    }
    // SubProg hex_val pc: 55 op: RETURNF (28)

// Exiting block BLOCK: hex_val

// block var h_64761
    DeRef(_32194);
    _32194 = NOVALUE;
    DeRef(_32197);
    _32197 = NOVALUE;
    return _32198;
    // SubProg hex_val pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 64759 op: 159
    // SubProg hex_val pc: 60 op: BADRETURNF (43)
    ;
}


object _71start_hex()
{
// skipping _32210  name type: 0
    object _32209 = NOVALUE; // 64786 32209
    object _32208 = NOVALUE; // 64785 32208
    object _32207 = NOVALUE; // 64784 32207
    object _32206 = NOVALUE; // 64783 32206
    object _32205 = NOVALUE; // 64782 32205
    object _32204 = NOVALUE; // 64781 32204
    object _32203 = NOVALUE; // 64780 32203
    object _32202 = NOVALUE; // 64778 32202
    object _32201 = NOVALUE; // 64777 32201
    object _32200 = NOVALUE; // 64776 32200
    object _32199 = NOVALUE; // 64775 32199
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg start_hex pc: 1 op: STARTLINE (58)

    /** tokenize.e:641		if Look = '#' and Hex_Char( lookahead( 1 ) ) then*/
    // SubProg start_hex pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 5 op: EQUALS (3)
    _32199 = (_71Look_64329 == 35);
    // SubProg start_hex pc: 9 op: SC1_AND_IF (146)
    if (_32199 == 0) {
        goto L1; // [9] 37
    }
    // SubProg start_hex pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 15 op: PROC (27)
    Ref(_71g_state_64375);
    _32201 = _71lookahead(1, _71g_state_64375);
    // SubProg start_hex pc: 20 op: PROC (27)
    _32202 = _71Hex_Char(_32201);
    _32201 = NOVALUE;
    // SubProg start_hex pc: 24 op: NOP1 (159)
    // SubProg start_hex pc: 25 op: IF (20)
    if (_32202 == 0) {
        DeRef(_32202);
        _32202 = NOVALUE;
        goto L1; // [25] 37
    }
    else {
        if (!IS_ATOM_INT(_32202) && DBL_PTR(_32202)->dbl == 0.0){
            DeRef(_32202);
            _32202 = NOVALUE;
            goto L1; // [25] 37
        }
        DeRef(_32202);
        _32202 = NOVALUE;
    }
    DeRef(_32202);
    _32202 = NOVALUE;
    // SubProg start_hex pc: 28 op: STARTLINE (58)

    /** tokenize.e:642			return TRUE*/
    // SubProg start_hex pc: 30 op: RETURNF (28)

// Exiting block BLOCK: start_hex
    DeRef(_32199);
    _32199 = NOVALUE;
    return 1;
    // SubProg start_hex pc: 34 op: ELSE (23)
    goto L2; // [34] 107
    // SubProg start_hex pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 64772 op: 159
    // SubProg start_hex pc: 37 op: STARTLINE (58)

    /** tokenize.e:643		elsif Look = '0' and lookahead( 1 ) = 'x' and Hex_Char( lookahead( 2 ) ) then*/
    // SubProg start_hex pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 41 op: EQUALS (3)
    _32203 = (_71Look_64329 == 48);
    // SubProg start_hex pc: 45 op: SC1_AND (141)
    if (_32203 == 0) {
        _32204 = 0;
        goto L3; // [45] 64
    }
    // SubProg start_hex pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 51 op: PROC (27)
    Ref(_71g_state_64375);
    _32205 = _71lookahead(1, _71g_state_64375);
    // SubProg start_hex pc: 56 op: EQUALS (3)
    if (IS_ATOM_INT(_32205)) {
        _32206 = (_32205 == 120);
    }
    else {
        _32206 = binary_op(EQUALS, _32205, 120);
    }
    DeRef(_32205);
    _32205 = NOVALUE;
    // SubProg start_hex pc: 60 op: SC2_AND (142)
    if (IS_ATOM_INT(_32206))
    _32204 = (_32206 != 0);
    else
    _32204 = DBL_PTR(_32206)->dbl != 0.0;
    // SubProg start_hex pc: 63 op: NOP1 (159)
L3: // addr: 64 pc: 63 sub: 64772 op: 159
    // SubProg start_hex pc: 64 op: SC1_AND_IF (146)
    if (_32204 == 0) {
        goto L4; // [64] 100
    }
    // SubProg start_hex pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 70 op: PROC (27)
    Ref(_71g_state_64375);
    _32208 = _71lookahead(2, _71g_state_64375);
    // SubProg start_hex pc: 75 op: PROC (27)
    _32209 = _71Hex_Char(_32208);
    _32208 = NOVALUE;
    // SubProg start_hex pc: 79 op: NOP1 (159)
    // SubProg start_hex pc: 80 op: IF (20)
    if (_32209 == 0) {
        DeRef(_32209);
        _32209 = NOVALUE;
        goto L4; // [80] 100
    }
    else {
        if (!IS_ATOM_INT(_32209) && DBL_PTR(_32209)->dbl == 0.0){
            DeRef(_32209);
            _32209 = NOVALUE;
            goto L4; // [80] 100
        }
        DeRef(_32209);
        _32209 = NOVALUE;
    }
    DeRef(_32209);
    _32209 = NOVALUE;
    // SubProg start_hex pc: 83 op: STARTLINE (58)

    /** tokenize.e:644			sti += 1*/
    // SubProg start_hex pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 87 op: PLUS1_I (117)
    _71sti_64326 = _71sti_64326 + 1;
    // SubProg start_hex pc: 91 op: STARTLINE (58)

    /** tokenize.e:645			return TRUE*/
    // SubProg start_hex pc: 93 op: RETURNF (28)

// Exiting block BLOCK: start_hex
    DeRef(_32199);
    _32199 = NOVALUE;
    DeRef(_32203);
    _32203 = NOVALUE;
    DeRef(_32206);
    _32206 = NOVALUE;
    return 1;
    // SubProg start_hex pc: 97 op: ELSE (23)
    goto L2; // [97] 107
    // SubProg start_hex pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 64772 op: 159
    // SubProg start_hex pc: 100 op: STARTLINE (58)

    /** tokenize.e:647			return FALSE*/
    // SubProg start_hex pc: 102 op: RETURNF (28)

// Exiting block BLOCK: start_hex
    DeRef(_32199);
    _32199 = NOVALUE;
    DeRef(_32203);
    _32203 = NOVALUE;
    DeRef(_32206);
    _32206 = NOVALUE;
    return 0;
    // SubProg start_hex pc: 106 op: NOP1 (159)
L2: // addr: 107 pc: 106 sub: 64772 op: 159
    // SubProg start_hex pc: 107 op: BADRETURNF (43)
    ;
}


object _71scan_hex(object _state_64791)
{
    object _startSti_64795 = NOVALUE;
    object _32226 = NOVALUE; // 64815 32226
    object _32225 = NOVALUE; // 64814 32225
    object _32224 = NOVALUE; // 64813 32224
    object _32223 = NOVALUE; // 64812 32223
// skipping _32222  name type: 0
    object _32221 = NOVALUE; // 64809 32221
    object _32220 = NOVALUE; // 64807 32220
    object _32219 = NOVALUE; // 64805 32219
    object _32218 = NOVALUE; // 64804 32218
    object _32217 = NOVALUE; // 64803 32217
    object _32216 = NOVALUE; // 64801 32216
    object _32215 = NOVALUE; // 64800 32215
// skipping _32214  name type: 0
    object _32213 = NOVALUE; // 64797 32213
// skipping _32212  name type: 0
    object _32211 = NOVALUE; // 64793 32211
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_hex pc: 1 op: STARTLINE (58)

    /** tokenize.e:652		if not start_hex() then*/
    // SubProg scan_hex pc: 3 op: PROC (27)
    _32211 = _71start_hex();
    // SubProg scan_hex pc: 6 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32211)) {
        if (_32211 != 0){
            DeRef(_32211);
            _32211 = NOVALUE;
            goto L1; // [6] 16
        }
    }
    else {
        if (DBL_PTR(_32211)->dbl != 0.0){
            DeRef(_32211);
            _32211 = NOVALUE;
            goto L1; // [6] 16
        }
    }
    DeRef(_32211);
    _32211 = NOVALUE;
    // SubProg scan_hex pc: 9 op: STARTLINE (58)

    /** tokenize.e:653			return FALSE*/
    // SubProg scan_hex pc: 11 op: RETURNF (28)

// Exiting block BLOCK: scan_hex

// block var state_64791
    DeRef(_state_64791);

// block var startSti_64795
    return 0;
    // SubProg scan_hex pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 64789 op: 159
    // SubProg scan_hex pc: 16 op: STARTLINE (58)

    /** tokenize.e:656		integer startSti = sti*/
    // SubProg scan_hex pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 20 op: ASSIGN_I (113)
    _startSti_64795 = _71sti_64326;
    // SubProg scan_hex pc: 23 op: STARTLINE (58)

    /** tokenize.e:658		scan_char(state)*/
    // SubProg scan_hex pc: 25 op: PROC (27)
    Ref(_state_64791);
    _71scan_char(_state_64791);
    // SubProg scan_hex pc: 28 op: STARTLINE (58)

    /** tokenize.e:660		if not Hex_Char(Look) then*/
    // SubProg scan_hex pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 32 op: PROC (27)
    _32213 = _71Hex_Char(_71Look_64329);
    // SubProg scan_hex pc: 36 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32213)) {
        if (_32213 != 0){
            DeRef(_32213);
            _32213 = NOVALUE;
            goto L2; // [36] 49
        }
    }
    else {
        if (DBL_PTR(_32213)->dbl != 0.0){
            DeRef(_32213);
            _32213 = NOVALUE;
            goto L2; // [36] 49
        }
    }
    DeRef(_32213);
    _32213 = NOVALUE;
    // SubProg scan_hex pc: 39 op: STARTLINE (58)

    /** tokenize.e:661			report_error(ERR_HEX) return FALSE*/
    // SubProg scan_hex pc: 41 op: PROC (27)
    _71report_error(6);
    // SubProg scan_hex pc: 44 op: RETURNF (28)

// Exiting block BLOCK: scan_hex

// block var state_64791
    DeRef(_state_64791);

// block var startSti_64795
    return 0;
    // SubProg scan_hex pc: 48 op: NOP1 (159)
L2: // addr: 49 pc: 48 sub: 64789 op: 159
    // SubProg scan_hex pc: 49 op: STARTLINE (58)

    /** tokenize.e:664		Token[TTYPE] = T_NUMBER*/
    // SubProg scan_hex pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 53 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg scan_hex pc: 57 op: STARTLINE (58)

    /** tokenize.e:665		Token[TFORM] = TF_HEX*/
    // SubProg scan_hex pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 61 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg scan_hex pc: 65 op: STARTLINE (58)

    /** tokenize.e:667		if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg scan_hex pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 69 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64791)){
        _32215 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64791)->dbl));
    }
    else{
        _32215 = (object)*(((s1_ptr)_2)->base + _state_64791);
    }
    // SubProg scan_hex pc: 73 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32215);
    _32216 = (object)*(((s1_ptr)_2)->base + 3);
    _32215 = NOVALUE;
    // SubProg scan_hex pc: 77 op: IF (20)
    if (_32216 == 0) {
        _32216 = NOVALUE;
        goto L3; // [77] 128
    }
    else {
        if (!IS_ATOM_INT(_32216) && DBL_PTR(_32216)->dbl == 0.0){
            _32216 = NOVALUE;
            goto L3; // [77] 128
        }
        _32216 = NOVALUE;
    }
    _32216 = NOVALUE;
    // SubProg scan_hex pc: 80 op: STARTLINE (58)

    /** tokenize.e:668			while Hex_Char(Look) do*/
    // SubProg scan_hex pc: 82 op: NOP2 (110)
    // SubProg scan_hex pc: 84 op: NOPWHILE (158)
L4: // addr: 85 pc: 84 sub: 64789 op: 158
    // SubProg scan_hex pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 87 op: PROC (27)
    _32217 = _71Hex_Char(_71Look_64329);
    // SubProg scan_hex pc: 91 op: WHILE (47)
    if (_32217 <= 0) {
        if (_32217 == 0) {
            DeRef(_32217);
            _32217 = NOVALUE;
            goto L5; // [91] 104
        }
        else {
            if (!IS_ATOM_INT(_32217) && DBL_PTR(_32217)->dbl == 0.0){
                DeRef(_32217);
                _32217 = NOVALUE;
                goto L5; // [91] 104
            }
            DeRef(_32217);
            _32217 = NOVALUE;
        }
    }
    DeRef(_32217);
    _32217 = NOVALUE;
    // SubProg scan_hex pc: 94 op: STARTLINE (58)

    /** tokenize.e:669				scan_char(state)*/
    // SubProg scan_hex pc: 96 op: PROC (27)
    Ref(_state_64791);
    _71scan_char(_state_64791);
    // SubProg scan_hex pc: 99 op: STARTLINE (58)

    /** tokenize.e:670			end while*/
    // SubProg scan_hex pc: 101 op: ENDWHILE (22)
    goto L4; // [101] 85
    // SubProg scan_hex pc: 103 op: NOP1 (159)
L5: // addr: 104 pc: 103 sub: 64789 op: 159
    // SubProg scan_hex pc: 104 op: STARTLINE (58)

    /** tokenize.e:672			Token[TDATA] = source_text[startSti .. sti - 1]*/
    // SubProg scan_hex pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 112 op: MINUS (10)
    _32218 = _71sti_64326 - 1;
    // SubProg scan_hex pc: 116 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32219;
    RHS_Slice(_71source_text_64325, _startSti_64795, _32218);
    // SubProg scan_hex pc: 121 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32219;
    if( _1 != _32219 ){
        DeRef(_1);
    }
    _32219 = NOVALUE;
    // SubProg scan_hex pc: 125 op: ELSE (23)
    goto L6; // [125] 209
    // SubProg scan_hex pc: 127 op: NOP1 (159)
L3: // addr: 128 pc: 127 sub: 64789 op: 159
    // SubProg scan_hex pc: 128 op: STARTLINE (58)

    /** tokenize.e:674			Token[TDATA] = hex_val(Look)*/
    // SubProg scan_hex pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 134 op: PROC (27)
    _32220 = _71hex_val(_71Look_64329);
    // SubProg scan_hex pc: 138 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32220;
    if( _1 != _32220 ){
        DeRef(_1);
    }
    _32220 = NOVALUE;
    // SubProg scan_hex pc: 142 op: STARTLINE (58)

    /** tokenize.e:675			scan_char(state)*/
    // SubProg scan_hex pc: 144 op: PROC (27)
    Ref(_state_64791);
    _71scan_char(_state_64791);
    // SubProg scan_hex pc: 147 op: STARTLINE (58)

    /** tokenize.e:677			while Hex_Char(Look) do*/
    // SubProg scan_hex pc: 149 op: NOP2 (110)
    // SubProg scan_hex pc: 151 op: NOPWHILE (158)
L7: // addr: 152 pc: 151 sub: 64789 op: 158
    // SubProg scan_hex pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 154 op: PROC (27)
    _32221 = _71Hex_Char(_71Look_64329);
    // SubProg scan_hex pc: 158 op: WHILE (47)
    if (_32221 <= 0) {
        if (_32221 == 0) {
            DeRef(_32221);
            _32221 = NOVALUE;
            goto L8; // [158] 208
        }
        else {
            if (!IS_ATOM_INT(_32221) && DBL_PTR(_32221)->dbl == 0.0){
                DeRef(_32221);
                _32221 = NOVALUE;
                goto L8; // [158] 208
            }
            DeRef(_32221);
            _32221 = NOVALUE;
        }
    }
    DeRef(_32221);
    _32221 = NOVALUE;
    // SubProg scan_hex pc: 161 op: STARTLINE (58)

    /** tokenize.e:678				if Look != '_' then*/
    // SubProg scan_hex pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 165 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 95)
    goto L9; // [165] 198
    // SubProg scan_hex pc: 169 op: STARTLINE (58)

    /** tokenize.e:679					Token[TDATA] = Token[TDATA] * 16 + hex_val(Look)*/
    // SubProg scan_hex pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 175 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32223 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_hex pc: 179 op: MULTIPLY (13)
    if (IS_ATOM_INT(_32223)) {
        if (_32223 == (short)_32223){
            _32224 = _32223 * 16;
        }
        else{
            _32224 = NewDouble(_32223 * (eudouble)16);
        }
    }
    else {
        _32224 = binary_op(MULTIPLY, _32223, 16);
    }
    _32223 = NOVALUE;
    // SubProg scan_hex pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 185 op: PROC (27)
    _32225 = _71hex_val(_71Look_64329);
    // SubProg scan_hex pc: 189 op: PLUS (11)
    if (IS_ATOM_INT(_32224) && IS_ATOM_INT(_32225)) {
        _32226 = _32224 + _32225;
        if ((object)((uintptr_t)_32226 + (uintptr_t)HIGH_BITS) >= 0){
            _32226 = NewDouble((eudouble)_32226);
        }
    }
    else {
        _32226 = binary_op(PLUS, _32224, _32225);
    }
    DeRef(_32224);
    _32224 = NOVALUE;
    DeRef(_32225);
    _32225 = NOVALUE;
    // SubProg scan_hex pc: 193 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32226;
    if( _1 != _32226 ){
        DeRef(_1);
    }
    _32226 = NOVALUE;
    // SubProg scan_hex pc: 197 op: NOP1 (159)
L9: // addr: 198 pc: 197 sub: 64789 op: 159
    // SubProg scan_hex pc: 198 op: STARTLINE (58)

    /** tokenize.e:681				scan_char(state)*/
    // SubProg scan_hex pc: 200 op: PROC (27)
    Ref(_state_64791);
    _71scan_char(_state_64791);
    // SubProg scan_hex pc: 203 op: STARTLINE (58)

    /** tokenize.e:682			end while*/
    // SubProg scan_hex pc: 205 op: ENDWHILE (22)
    goto L7; // [205] 152
    // SubProg scan_hex pc: 207 op: NOP1 (159)
L8: // addr: 208 pc: 207 sub: 64789 op: 159
    // SubProg scan_hex pc: 208 op: NOP1 (159)
L6: // addr: 209 pc: 208 sub: 64789 op: 159
    // SubProg scan_hex pc: 209 op: STARTLINE (58)

    /** tokenize.e:685		return TRUE*/
    // SubProg scan_hex pc: 211 op: RETURNF (28)

// Exiting block BLOCK: scan_hex

// block var state_64791
    DeRef(_state_64791);

// block var startSti_64795
    DeRef(_32218);
    _32218 = NOVALUE;
    return 1;
    // SubProg scan_hex pc: 215 op: BADRETURNF (43)
    ;
}


object _71scan_integer(object _state_64819)
{
    object _i_64820 = NOVALUE;
// skipping _32231  name type: 0
    object _32230 = NOVALUE; // 64826 32230
    object _32229 = NOVALUE; // 64825 32229
// skipping _32228  name type: 0
    object _32227 = NOVALUE; // 64822 32227
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_integer pc: 1 op: STARTLINE (58)

    /** tokenize.e:690		atom i = 0*/
    // SubProg scan_integer pc: 3 op: ASSIGN (18)
    DeRef(_i_64820);
    _i_64820 = 0;
    // SubProg scan_integer pc: 6 op: STARTLINE (58)

    /** tokenize.e:692		while Digit_Char(Look) do*/
    // SubProg scan_integer pc: 8 op: NOP2 (110)
    // SubProg scan_integer pc: 10 op: NOPWHILE (158)
L1: // addr: 11 pc: 10 sub: 64817 op: 158
    // SubProg scan_integer pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_integer pc: 13 op: PROC (27)
    _32227 = _71Digit_Char(_71Look_64329);
    // SubProg scan_integer pc: 17 op: WHILE (47)
    if (_32227 <= 0) {
        if (_32227 == 0) {
            DeRef(_32227);
            _32227 = NOVALUE;
            goto L2; // [17] 55
        }
        else {
            if (!IS_ATOM_INT(_32227) && DBL_PTR(_32227)->dbl == 0.0){
                DeRef(_32227);
                _32227 = NOVALUE;
                goto L2; // [17] 55
            }
            DeRef(_32227);
            _32227 = NOVALUE;
        }
    }
    DeRef(_32227);
    _32227 = NOVALUE;
    // SubProg scan_integer pc: 20 op: STARTLINE (58)

    /** tokenize.e:693			if (Look != '_') then*/
    // SubProg scan_integer pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_integer pc: 24 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 95)
    goto L3; // [24] 45
    // SubProg scan_integer pc: 28 op: STARTLINE (58)

    /** tokenize.e:694				i = (i * 10) + (Look - '0')*/
    // SubProg scan_integer pc: 30 op: MULTIPLY (13)
    if (IS_ATOM_INT(_i_64820)) {
        if (_i_64820 == (short)_i_64820){
            _32229 = _i_64820 * 10;
        }
        else{
            _32229 = NewDouble(_i_64820 * (eudouble)10);
        }
    }
    else {
        _32229 = NewDouble(DBL_PTR(_i_64820)->dbl * (eudouble)10);
    }
    // SubProg scan_integer pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_integer pc: 36 op: MINUS (10)
    _32230 = _71Look_64329 - 48;
    if ((object)((uintptr_t)_32230 +(uintptr_t) HIGH_BITS) >= 0){
        _32230 = NewDouble((eudouble)_32230);
    }
    // SubProg scan_integer pc: 40 op: PLUS (11)
    DeRef(_i_64820);
    if (IS_ATOM_INT(_32229) && IS_ATOM_INT(_32230)) {
        _i_64820 = _32229 + _32230;
        if ((object)((uintptr_t)_i_64820 + (uintptr_t)HIGH_BITS) >= 0){
            _i_64820 = NewDouble((eudouble)_i_64820);
        }
    }
    else {
        if (IS_ATOM_INT(_32229)) {
            _i_64820 = NewDouble((eudouble)_32229 + DBL_PTR(_32230)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32230)) {
                _i_64820 = NewDouble(DBL_PTR(_32229)->dbl + (eudouble)_32230);
            }
            else
            _i_64820 = NewDouble(DBL_PTR(_32229)->dbl + DBL_PTR(_32230)->dbl);
        }
    }
    DeRef(_32229);
    _32229 = NOVALUE;
    DeRef(_32230);
    _32230 = NOVALUE;
    // SubProg scan_integer pc: 44 op: NOP1 (159)
L3: // addr: 45 pc: 44 sub: 64817 op: 159
    // SubProg scan_integer pc: 45 op: STARTLINE (58)

    /** tokenize.e:697			scan_char(state)*/
    // SubProg scan_integer pc: 47 op: PROC (27)
    Ref(_state_64819);
    _71scan_char(_state_64819);
    // SubProg scan_integer pc: 50 op: STARTLINE (58)

    /** tokenize.e:698		end while*/
    // SubProg scan_integer pc: 52 op: ENDWHILE (22)
    goto L1; // [52] 11
    // SubProg scan_integer pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 64817 op: 159
    // SubProg scan_integer pc: 55 op: STARTLINE (58)

    /** tokenize.e:700		return i*/
    // SubProg scan_integer pc: 57 op: RETURNF (28)

// Exiting block BLOCK: scan_integer

// block var state_64819
    DeRef(_state_64819);
    return _i_64820;
    // SubProg scan_integer pc: 61 op: BADRETURNF (43)
    ;
}


object _71scan_fraction(object _v_64830, object _state_64831)
{
    object _d_64835 = NOVALUE;
// skipping _32239  name type: 0
// skipping _32238  name type: 0
    object _32237 = NOVALUE; // 64841 32237
    object _32236 = NOVALUE; // 64840 32236
// skipping _32235  name type: 0
    object _32234 = NOVALUE; // 64837 32234
// skipping _32233  name type: 0
    object _32232 = NOVALUE; // 64833 32232
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_fraction pc: 1 op: STARTLINE (58)

    /** tokenize.e:704		if not Digit_Char(Look) then report_error(ERR_DECIMAL) return 0 end if*/
    // SubProg scan_fraction pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 5 op: PROC (27)
    _32232 = _71Digit_Char(_71Look_64329);
    // SubProg scan_fraction pc: 9 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32232)) {
        if (_32232 != 0){
            DeRef(_32232);
            _32232 = NOVALUE;
            goto L1; // [9] 20
        }
    }
    else {
        if (DBL_PTR(_32232)->dbl != 0.0){
            DeRef(_32232);
            _32232 = NOVALUE;
            goto L1; // [9] 20
        }
    }
    DeRef(_32232);
    _32232 = NOVALUE;
    // SubProg scan_fraction pc: 12 op: PROC (27)
    _71report_error(7);
    // SubProg scan_fraction pc: 15 op: RETURNF (28)

// Exiting block BLOCK: scan_fraction

// block var v_64830
    DeRef(_v_64830);

// block var state_64831
    DeRef(_state_64831);

// block var d_64835
    DeRef(_d_64835);
    return 0;
    // SubProg scan_fraction pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 64828 op: 159
    // SubProg scan_fraction pc: 20 op: STARTLINE (58)

    /** tokenize.e:706		atom d = 10*/
    // SubProg scan_fraction pc: 22 op: ASSIGN (18)
    DeRef(_d_64835);
    _d_64835 = 10;
    // SubProg scan_fraction pc: 25 op: STARTLINE (58)

    /** tokenize.e:707		while Digit_Char(Look) do*/
    // SubProg scan_fraction pc: 27 op: NOP2 (110)
    // SubProg scan_fraction pc: 29 op: NOPWHILE (158)
L2: // addr: 30 pc: 29 sub: 64828 op: 158
    // SubProg scan_fraction pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 32 op: PROC (27)
    _32234 = _71Digit_Char(_71Look_64329);
    // SubProg scan_fraction pc: 36 op: WHILE (47)
    if (_32234 <= 0) {
        if (_32234 == 0) {
            DeRef(_32234);
            _32234 = NOVALUE;
            goto L3; // [36] 80
        }
        else {
            if (!IS_ATOM_INT(_32234) && DBL_PTR(_32234)->dbl == 0.0){
                DeRef(_32234);
                _32234 = NOVALUE;
                goto L3; // [36] 80
            }
            DeRef(_32234);
            _32234 = NOVALUE;
        }
    }
    DeRef(_32234);
    _32234 = NOVALUE;
    // SubProg scan_fraction pc: 39 op: STARTLINE (58)

    /** tokenize.e:708			if Look != '_' then*/
    // SubProg scan_fraction pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 43 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 95)
    goto L4; // [43] 70
    // SubProg scan_fraction pc: 47 op: STARTLINE (58)

    /** tokenize.e:709				v += (Look - '0') / d*/
    // SubProg scan_fraction pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 51 op: MINUS (10)
    _32236 = _71Look_64329 - 48;
    if ((object)((uintptr_t)_32236 +(uintptr_t) HIGH_BITS) >= 0){
        _32236 = NewDouble((eudouble)_32236);
    }
    // SubProg scan_fraction pc: 55 op: DIVIDE (14)
    if (IS_ATOM_INT(_32236) && IS_ATOM_INT(_d_64835)) {
        _32237 = (_32236 % _d_64835) ? NewDouble((eudouble)_32236 / _d_64835) : (_32236 / _d_64835);
    }
    else {
        if (IS_ATOM_INT(_32236)) {
            _32237 = NewDouble((eudouble)_32236 / DBL_PTR(_d_64835)->dbl);
        }
        else {
            if (IS_ATOM_INT(_d_64835)) {
                _32237 = NewDouble(DBL_PTR(_32236)->dbl / (eudouble)_d_64835);
            }
            else
            _32237 = NewDouble(DBL_PTR(_32236)->dbl / DBL_PTR(_d_64835)->dbl);
        }
    }
    DeRef(_32236);
    _32236 = NOVALUE;
    // SubProg scan_fraction pc: 59 op: PLUS (11)
    _0 = _v_64830;
    if (IS_ATOM_INT(_v_64830) && IS_ATOM_INT(_32237)) {
        _v_64830 = _v_64830 + _32237;
        if ((object)((uintptr_t)_v_64830 + (uintptr_t)HIGH_BITS) >= 0){
            _v_64830 = NewDouble((eudouble)_v_64830);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64830)) {
            _v_64830 = NewDouble((eudouble)_v_64830 + DBL_PTR(_32237)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32237)) {
                _v_64830 = NewDouble(DBL_PTR(_v_64830)->dbl + (eudouble)_32237);
            }
            else
            _v_64830 = NewDouble(DBL_PTR(_v_64830)->dbl + DBL_PTR(_32237)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32237);
    _32237 = NOVALUE;
    // SubProg scan_fraction pc: 63 op: STARTLINE (58)

    /** tokenize.e:710				d *= 10*/
    // SubProg scan_fraction pc: 65 op: MULTIPLY (13)
    _0 = _d_64835;
    if (IS_ATOM_INT(_d_64835)) {
        if (_d_64835 == (short)_d_64835){
            _d_64835 = _d_64835 * 10;
        }
        else{
            _d_64835 = NewDouble(_d_64835 * (eudouble)10);
        }
    }
    else {
        _d_64835 = NewDouble(DBL_PTR(_d_64835)->dbl * (eudouble)10);
    }
    DeRef(_0);
    // SubProg scan_fraction pc: 69 op: NOP1 (159)
L4: // addr: 70 pc: 69 sub: 64828 op: 159
    // SubProg scan_fraction pc: 70 op: STARTLINE (58)

    /** tokenize.e:712			scan_char(state)*/
    // SubProg scan_fraction pc: 72 op: PROC (27)
    Ref(_state_64831);
    _71scan_char(_state_64831);
    // SubProg scan_fraction pc: 75 op: STARTLINE (58)

    /** tokenize.e:713		end while*/
    // SubProg scan_fraction pc: 77 op: ENDWHILE (22)
    goto L2; // [77] 30
    // SubProg scan_fraction pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 64828 op: 159
    // SubProg scan_fraction pc: 80 op: STARTLINE (58)

    /** tokenize.e:714		return v*/
    // SubProg scan_fraction pc: 82 op: RETURNF (28)

// Exiting block BLOCK: scan_fraction

// block var state_64831
    DeRef(_state_64831);

// block var d_64835
    DeRef(_d_64835);
    return _v_64830;
    // SubProg scan_fraction pc: 86 op: BADRETURNF (43)
    ;
}


object _71scan_exponent(object _v_64846, object _state_64847)
{
    object _e_64848 = NOVALUE;
// skipping _32256  name type: 0
    object _32255 = NOVALUE; // 64873 32255
// skipping _32254  name type: 0
    object _32253 = NOVALUE; // 64870 32253
// skipping _32252  name type: 0
// skipping _32251  name type: 0
    object _32250 = NOVALUE; // 64864 32250
// skipping _32249  name type: 0
// skipping _32248  name type: 0
// skipping _32247  name type: 0
// skipping _32246  name type: 0
    object _32245 = NOVALUE; // 64856 32245
// skipping _32244  name type: 0
    object _32243 = NOVALUE; // 64853 32243
    object _32242 = NOVALUE; // 64852 32242
    object _32241 = NOVALUE; // 64851 32241
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_exponent pc: 1 op: STARTLINE (58)

    /** tokenize.e:720		if ((Look != 'e') and (Look != 'E')) then return v end if*/
    // SubProg scan_exponent pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 5 op: NOTEQ (4)
    _32241 = (_71Look_64329 != 101);
    // SubProg scan_exponent pc: 9 op: SC1_AND (141)
    if (_32241 == 0) {
        _32242 = 0;
        goto L1; // [9] 23
    }
    // SubProg scan_exponent pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 15 op: NOTEQ (4)
    _32243 = (_71Look_64329 != 69);
    // SubProg scan_exponent pc: 19 op: SC2_AND (142)
    _32242 = (_32243 != 0);
    // SubProg scan_exponent pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 64844 op: 159
    // SubProg scan_exponent pc: 23 op: IF (20)
    if (_32242 == 0)
    {
        _32242 = NOVALUE;
        goto L2; // [23] 31
    }
    else{
        _32242 = NOVALUE;
    }
    // SubProg scan_exponent pc: 26 op: RETURNF (28)

// Exiting block BLOCK: scan_exponent

// block var state_64847
    DeRef(_state_64847);

// block var e_64848
    DeRef(_e_64848);
    DeRef(_32243);
    _32243 = NOVALUE;
    DeRef(_32241);
    _32241 = NOVALUE;
    return _v_64846;
    // SubProg scan_exponent pc: 30 op: NOP1 (159)
L2: // addr: 31 pc: 30 sub: 64844 op: 159
    // SubProg scan_exponent pc: 31 op: STARTLINE (58)

    /** tokenize.e:721		scan_char(state)*/
    // SubProg scan_exponent pc: 33 op: PROC (27)
    Ref(_state_64847);
    _71scan_char(_state_64847);
    // SubProg scan_exponent pc: 36 op: STARTLINE (58)

    /** tokenize.e:723		if (Look = '-') then*/
    // SubProg scan_exponent pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 40 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 45)
    goto L3; // [40] 61
    // SubProg scan_exponent pc: 44 op: STARTLINE (58)

    /** tokenize.e:724			scan_char(state)*/
    // SubProg scan_exponent pc: 46 op: PROC (27)
    Ref(_state_64847);
    _71scan_char(_state_64847);
    // SubProg scan_exponent pc: 49 op: STARTLINE (58)

    /** tokenize.e:725			e = -scan_integer(state)*/
    // SubProg scan_exponent pc: 51 op: PROC (27)
    Ref(_state_64847);
    _32245 = _71scan_integer(_state_64847);
    // SubProg scan_exponent pc: 55 op: UMINUS (12)
    DeRef(_e_64848);
    if (IS_ATOM_INT(_32245)) {
        if ((uintptr_t)_32245 == (uintptr_t)HIGH_BITS){
            _e_64848 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _e_64848 = - _32245;
        }
    }
    else {
        _e_64848 = unary_op(UMINUS, _32245);
    }
    DeRef(_32245);
    _32245 = NOVALUE;
    // SubProg scan_exponent pc: 58 op: ELSE (23)
    goto L4; // [58] 80
    // SubProg scan_exponent pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 64844 op: 159
    // SubProg scan_exponent pc: 61 op: STARTLINE (58)

    /** tokenize.e:727			if (Look = '+') then scan_char(state) end if*/
    // SubProg scan_exponent pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 65 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 43)
    goto L5; // [65] 73
    // SubProg scan_exponent pc: 69 op: PROC (27)
    Ref(_state_64847);
    _71scan_char(_state_64847);
    // SubProg scan_exponent pc: 72 op: NOP1 (159)
L5: // addr: 73 pc: 72 sub: 64844 op: 159
    // SubProg scan_exponent pc: 73 op: STARTLINE (58)

    /** tokenize.e:728			e = scan_integer(state)*/
    // SubProg scan_exponent pc: 75 op: PROC (27)
    Ref(_state_64847);
    _0 = _e_64848;
    _e_64848 = _71scan_integer(_state_64847);
    DeRef(_0);
    // SubProg scan_exponent pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 64844 op: 159
    // SubProg scan_exponent pc: 80 op: STARTLINE (58)

    /** tokenize.e:731		if e > 308 then*/
    // SubProg scan_exponent pc: 82 op: PRIVATE_INIT_CHECK (30)
    // SubProg scan_exponent pc: 84 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _e_64848, 308)){
        goto L6; // [84] 137
    }
    // SubProg scan_exponent pc: 88 op: STARTLINE (58)

    /** tokenize.e:732			v *= power(10, 308)*/
    // SubProg scan_exponent pc: 90 op: POWER (72)
    _32250 = power(10, 308);
    // SubProg scan_exponent pc: 94 op: MULTIPLY (13)
    _0 = _v_64846;
    if (IS_ATOM_INT(_v_64846) && IS_ATOM_INT(_32250)) {
        if (_v_64846 == (short)_v_64846 && _32250 <= INT15 && _32250 >= -INT15){
            _v_64846 = _v_64846 * _32250;
        }
        else{
            _v_64846 = NewDouble(_v_64846 * (eudouble)_32250);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64846)) {
            _v_64846 = NewDouble((eudouble)_v_64846 * DBL_PTR(_32250)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32250)) {
                _v_64846 = NewDouble(DBL_PTR(_v_64846)->dbl * (eudouble)_32250);
            }
            else
            _v_64846 = NewDouble(DBL_PTR(_v_64846)->dbl * DBL_PTR(_32250)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32250);
    _32250 = NOVALUE;
    // SubProg scan_exponent pc: 98 op: STARTLINE (58)

    /** tokenize.e:733			if e > 1000 then e = 1000 end if*/
    // SubProg scan_exponent pc: 100 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _e_64848, 1000)){
        goto L7; // [100] 108
    }
    // SubProg scan_exponent pc: 104 op: ASSIGN (18)
    DeRef(_e_64848);
    _e_64848 = 1000;
    // SubProg scan_exponent pc: 107 op: NOP1 (159)
L7: // addr: 108 pc: 107 sub: 64844 op: 159
    // SubProg scan_exponent pc: 108 op: STARTLINE (58)

    /** tokenize.e:734			for i = 1 to e - 308 do*/
    // SubProg scan_exponent pc: 110 op: MINUS (10)
    if (IS_ATOM_INT(_e_64848)) {
        _32253 = _e_64848 - 308;
        if ((object)((uintptr_t)_32253 +(uintptr_t) HIGH_BITS) >= 0){
            _32253 = NewDouble((eudouble)_32253);
        }
    }
    else {
        _32253 = NewDouble(DBL_PTR(_e_64848)->dbl - (eudouble)308);
    }
    // SubProg scan_exponent pc: 114 op: FOR (21)
    {
        object _i_64869;
        _i_64869 = 1;
L8: // addr: 121 pc: 114 sub: 64844 op: 21
        if (binary_op_a(GREATER, _i_64869, _32253)){
            goto L9; // [114] 134
        }
        // SubProg scan_exponent pc: 121 op: STARTLINE (58)

        /** tokenize.e:735				v *= 10*/
        // SubProg scan_exponent pc: 123 op: MULTIPLY (13)
        _0 = _v_64846;
        if (IS_ATOM_INT(_v_64846)) {
            if (_v_64846 == (short)_v_64846){
                _v_64846 = _v_64846 * 10;
            }
            else{
                _v_64846 = NewDouble(_v_64846 * (eudouble)10);
            }
        }
        else {
            _v_64846 = NewDouble(DBL_PTR(_v_64846)->dbl * (eudouble)10);
        }
        DeRef(_0);
        // SubProg scan_exponent pc: 127 op: STARTLINE (58)

        /** tokenize.e:736			end for*/
        // SubProg scan_exponent pc: 129 op: ENDFOR_INT_UP1 (54)
        _0 = _i_64869;
        if (IS_ATOM_INT(_i_64869)) {
            _i_64869 = _i_64869 + 1;
            if ((object)((uintptr_t)_i_64869 +(uintptr_t) HIGH_BITS) >= 0){
                _i_64869 = NewDouble((eudouble)_i_64869);
            }
        }
        else {
            _i_64869 = binary_op_a(PLUS, _i_64869, 1);
        }
        DeRef(_0);
        goto L8; // [129] 121
L9: // addr: 134 pc: 129 sub: 64844 op: 54
        ;
        DeRef(_i_64869);
    }
    // SubProg scan_exponent pc: 134 op: ELSE (23)
    goto LA; // [134] 148
    // SubProg scan_exponent pc: 136 op: NOP1 (159)
L6: // addr: 137 pc: 136 sub: 64844 op: 159
    // SubProg scan_exponent pc: 137 op: STARTLINE (58)

    /** tokenize.e:738			v *= power(10, e)*/
    // SubProg scan_exponent pc: 139 op: POWER (72)
    if (IS_ATOM_INT(_e_64848)) {
        _32255 = power(10, _e_64848);
    }
    else {
        temp_d.dbl = (eudouble)10;
        _32255 = Dpower(&temp_d, DBL_PTR(_e_64848));
    }
    // SubProg scan_exponent pc: 143 op: MULTIPLY (13)
    _0 = _v_64846;
    if (IS_ATOM_INT(_v_64846) && IS_ATOM_INT(_32255)) {
        if (_v_64846 == (short)_v_64846 && _32255 <= INT15 && _32255 >= -INT15){
            _v_64846 = _v_64846 * _32255;
        }
        else{
            _v_64846 = NewDouble(_v_64846 * (eudouble)_32255);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64846)) {
            _v_64846 = NewDouble((eudouble)_v_64846 * DBL_PTR(_32255)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32255)) {
                _v_64846 = NewDouble(DBL_PTR(_v_64846)->dbl * (eudouble)_32255);
            }
            else
            _v_64846 = NewDouble(DBL_PTR(_v_64846)->dbl * DBL_PTR(_32255)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32255);
    _32255 = NOVALUE;
    // SubProg scan_exponent pc: 147 op: NOP1 (159)
LA: // addr: 148 pc: 147 sub: 64844 op: 159
    // SubProg scan_exponent pc: 148 op: STARTLINE (58)

    /** tokenize.e:740		return v*/
    // SubProg scan_exponent pc: 150 op: RETURNF (28)

// Exiting block BLOCK: scan_exponent

// block var state_64847
    DeRef(_state_64847);

// block var e_64848
    DeRef(_e_64848);
    DeRef(_32243);
    _32243 = NOVALUE;
    DeRef(_32253);
    _32253 = NOVALUE;
    DeRef(_32241);
    _32241 = NOVALUE;
    return _v_64846;
    // SubProg scan_exponent pc: 154 op: BADRETURNF (43)
    ;
}


object _71scan_number(object _state_64877)
{
    object _startSti_64884 = NOVALUE;
    object _v_64897 = NOVALUE;
// skipping _32280  name type: 0
    object _32279 = NOVALUE; // 64913 32279
    object _32278 = NOVALUE; // 64911 32278
    object _32277 = NOVALUE; // 64910 32277
    object _32276 = NOVALUE; // 64908 32276
    object _32275 = NOVALUE; // 64907 32275
// skipping _32274  name type: 0
    object _32273 = NOVALUE; // 64905 32273
// skipping _32272  name type: 0
// skipping _32271  name type: 0
// skipping _32270  name type: 0
    object _32269 = NOVALUE; // 64898 32269
    object _32268 = NOVALUE; // 64895 32268
    object _32267 = NOVALUE; // 64894 32267
    object _32266 = NOVALUE; // 64893 32266
    object _32265 = NOVALUE; // 64891 32265
    object _32264 = NOVALUE; // 64890 32264
    object _32263 = NOVALUE; // 64889 32263
    object _32262 = NOVALUE; // 64888 32262
    object _32261 = NOVALUE; // 64886 32261
    object _32260 = NOVALUE; // 64883 32260
    object _32259 = NOVALUE; // 64882 32259
// skipping _32258  name type: 0
    object _32257 = NOVALUE; // 64879 32257
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_number pc: 1 op: STARTLINE (58)

    /** tokenize.e:744		if not Digit_Char(Look) then*/
    // SubProg scan_number pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 5 op: PROC (27)
    _32257 = _71Digit_Char(_71Look_64329);
    // SubProg scan_number pc: 9 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32257)) {
        if (_32257 != 0){
            DeRef(_32257);
            _32257 = NOVALUE;
            goto L1; // [9] 19
        }
    }
    else {
        if (DBL_PTR(_32257)->dbl != 0.0){
            DeRef(_32257);
            _32257 = NOVALUE;
            goto L1; // [9] 19
        }
    }
    DeRef(_32257);
    _32257 = NOVALUE;
    // SubProg scan_number pc: 12 op: STARTLINE (58)

    /** tokenize.e:745			return FALSE*/
    // SubProg scan_number pc: 14 op: RETURNF (28)

// Exiting block BLOCK: scan_number

// block var state_64877
    DeRef(_state_64877);
    return 0;
    // SubProg scan_number pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 64875 op: 159
    // SubProg scan_number pc: 19 op: STARTLINE (58)

    /** tokenize.e:748		Token[TTYPE] = T_NUMBER*/
    // SubProg scan_number pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 23 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg scan_number pc: 27 op: STARTLINE (58)

    /** tokenize.e:749		Token[TFORM] = TF_INT*/
    // SubProg scan_number pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 31 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    // SubProg scan_number pc: 35 op: STARTLINE (58)

    /** tokenize.e:751		if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg scan_number pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64877)){
        _32259 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64877)->dbl));
    }
    else{
        _32259 = (object)*(((s1_ptr)_2)->base + _state_64877);
    }
    // SubProg scan_number pc: 43 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32259);
    _32260 = (object)*(((s1_ptr)_2)->base + 3);
    _32259 = NOVALUE;
    // SubProg scan_number pc: 47 op: IF (20)
    if (_32260 == 0) {
        _32260 = NOVALUE;
        goto L2; // [47] 170
    }
    else {
        if (!IS_ATOM_INT(_32260) && DBL_PTR(_32260)->dbl == 0.0){
            _32260 = NOVALUE;
            goto L2; // [47] 170
        }
        _32260 = NOVALUE;
    }
    _32260 = NOVALUE;
    // SubProg scan_number pc: 50 op: STARTLINE (58)

    /** tokenize.e:752			integer startSti = sti*/
    // SubProg scan_number pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 54 op: ASSIGN_I (113)
    _startSti_64884 = _71sti_64326;
    // SubProg scan_number pc: 57 op: STARTLINE (58)

    /** tokenize.e:754			while Digit_Char(Look) do*/
    // SubProg scan_number pc: 59 op: NOP2 (110)
    // SubProg scan_number pc: 61 op: NOPWHILE (158)
L3: // addr: 62 pc: 61 sub: 64875 op: 158
    // SubProg scan_number pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 64 op: PROC (27)
    _32261 = _71Digit_Char(_71Look_64329);
    // SubProg scan_number pc: 68 op: WHILE (47)
    if (_32261 <= 0) {
        if (_32261 == 0) {
            DeRef(_32261);
            _32261 = NOVALUE;
            goto L4; // [68] 81
        }
        else {
            if (!IS_ATOM_INT(_32261) && DBL_PTR(_32261)->dbl == 0.0){
                DeRef(_32261);
                _32261 = NOVALUE;
                goto L4; // [68] 81
            }
            DeRef(_32261);
            _32261 = NOVALUE;
        }
    }
    DeRef(_32261);
    _32261 = NOVALUE;
    // SubProg scan_number pc: 71 op: STARTLINE (58)

    /** tokenize.e:755				scan_char(state)*/
    // SubProg scan_number pc: 73 op: PROC (27)
    Ref(_state_64877);
    _71scan_char(_state_64877);
    // SubProg scan_number pc: 76 op: STARTLINE (58)

    /** tokenize.e:756			end while*/
    // SubProg scan_number pc: 78 op: ENDWHILE (22)
    goto L3; // [78] 62
    // SubProg scan_number pc: 80 op: NOP1 (159)
L4: // addr: 81 pc: 80 sub: 64875 op: 159
    // SubProg scan_number pc: 81 op: STARTLINE (58)

    /** tokenize.e:758			if Look = '.' and lookahead(1, state) != '.' then*/
    // SubProg scan_number pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 85 op: EQUALS (3)
    _32262 = (_71Look_64329 == 46);
    // SubProg scan_number pc: 89 op: SC1_AND_IF (146)
    if (_32262 == 0) {
        goto L5; // [89] 144
    }
    // SubProg scan_number pc: 93 op: PROC (27)
    Ref(_state_64877);
    _32264 = _71lookahead(1, _state_64877);
    // SubProg scan_number pc: 98 op: NOTEQ (4)
    if (IS_ATOM_INT(_32264)) {
        _32265 = (_32264 != 46);
    }
    else {
        _32265 = binary_op(NOTEQ, _32264, 46);
    }
    DeRef(_32264);
    _32264 = NOVALUE;
    // SubProg scan_number pc: 102 op: NOP1 (159)
    // SubProg scan_number pc: 103 op: IF (20)
    if (_32265 == 0) {
        DeRef(_32265);
        _32265 = NOVALUE;
        goto L5; // [103] 144
    }
    else {
        if (!IS_ATOM_INT(_32265) && DBL_PTR(_32265)->dbl == 0.0){
            DeRef(_32265);
            _32265 = NOVALUE;
            goto L5; // [103] 144
        }
        DeRef(_32265);
        _32265 = NOVALUE;
    }
    DeRef(_32265);
    _32265 = NOVALUE;
    // SubProg scan_number pc: 106 op: STARTLINE (58)

    /** tokenize.e:759				Token[TFORM] = TF_ATOM*/
    // SubProg scan_number pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 110 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg scan_number pc: 114 op: STARTLINE (58)

    /** tokenize.e:760				scan_char(state)*/
    // SubProg scan_number pc: 116 op: PROC (27)
    Ref(_state_64877);
    _71scan_char(_state_64877);
    // SubProg scan_number pc: 119 op: STARTLINE (58)

    /** tokenize.e:762				while Digit_Char(Look) do*/
    // SubProg scan_number pc: 121 op: NOP2 (110)
    // SubProg scan_number pc: 123 op: NOPWHILE (158)
L6: // addr: 124 pc: 123 sub: 64875 op: 158
    // SubProg scan_number pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 126 op: PROC (27)
    _32266 = _71Digit_Char(_71Look_64329);
    // SubProg scan_number pc: 130 op: WHILE (47)
    if (_32266 <= 0) {
        if (_32266 == 0) {
            DeRef(_32266);
            _32266 = NOVALUE;
            goto L7; // [130] 143
        }
        else {
            if (!IS_ATOM_INT(_32266) && DBL_PTR(_32266)->dbl == 0.0){
                DeRef(_32266);
                _32266 = NOVALUE;
                goto L7; // [130] 143
            }
            DeRef(_32266);
            _32266 = NOVALUE;
        }
    }
    DeRef(_32266);
    _32266 = NOVALUE;
    // SubProg scan_number pc: 133 op: STARTLINE (58)

    /** tokenize.e:763					scan_char(state)*/
    // SubProg scan_number pc: 135 op: PROC (27)
    Ref(_state_64877);
    _71scan_char(_state_64877);
    // SubProg scan_number pc: 138 op: STARTLINE (58)

    /** tokenize.e:764				end while*/
    // SubProg scan_number pc: 140 op: ENDWHILE (22)
    goto L6; // [140] 124
    // SubProg scan_number pc: 142 op: NOP1 (159)
L7: // addr: 143 pc: 142 sub: 64875 op: 159
    // SubProg scan_number pc: 143 op: NOP1 (159)
L5: // addr: 144 pc: 143 sub: 64875 op: 159
    // SubProg scan_number pc: 144 op: STARTLINE (58)

    /** tokenize.e:767			Token[TDATA] = source_text[startSti .. sti - 1]*/
    // SubProg scan_number pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 152 op: MINUS (10)
    _32267 = _71sti_64326 - 1;
    // SubProg scan_number pc: 156 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32268;
    RHS_Slice(_71source_text_64325, _startSti_64884, _32267);
    // SubProg scan_number pc: 161 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32268;
    if( _1 != _32268 ){
        DeRef(_1);
    }
    _32268 = NOVALUE;
    // SubProg scan_number pc: 165 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var startSti_64884
    // SubProg scan_number pc: 167 op: ELSE (23)
    goto L8; // [167] 310
    // SubProg scan_number pc: 169 op: NOP1 (159)
L2: // addr: 170 pc: 169 sub: 64875 op: 159
    // SubProg scan_number pc: 170 op: STARTLINE (58)

    /** tokenize.e:769			atom v*/
    // SubProg scan_number pc: 172 op: STARTLINE (58)

    /** tokenize.e:771			Token[TDATA] = scan_integer(state)*/
    // SubProg scan_number pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 176 op: PROC (27)
    Ref(_state_64877);
    _32269 = _71scan_integer(_state_64877);
    // SubProg scan_number pc: 180 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32269;
    if( _1 != _32269 ){
        DeRef(_1);
    }
    _32269 = NOVALUE;
    // SubProg scan_number pc: 184 op: STARTLINE (58)

    /** tokenize.e:773			if not SUBSCRIPT then*/
    // SubProg scan_number pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 188 op: NOT_IFW (108)
    if (_71SUBSCRIPT_64816 != 0)
    goto L9; // [188] 307
    // SubProg scan_number pc: 191 op: STARTLINE (58)

    /** tokenize.e:774				v = Token[TDATA]*/
    // SubProg scan_number pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 195 op: RHS_SUBS (25)
    DeRef(_v_64897);
    _2 = (object)SEQ_PTR(_71Token_64323);
    _v_64897 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_v_64897);
    // SubProg scan_number pc: 199 op: STARTLINE (58)

    /** tokenize.e:775				if Look = '.' then*/
    // SubProg scan_number pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 203 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 46)
    goto LA; // [203] 266
    // SubProg scan_number pc: 207 op: STARTLINE (58)

    /** tokenize.e:776					if lookahead() = '.' then*/
    // SubProg scan_number pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 211 op: PROC (27)
    Ref(_71g_state_64375);
    _32273 = _71lookahead(1, _71g_state_64375);
    // SubProg scan_number pc: 216 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32273, 46)){
        DeRef(_32273);
        _32273 = NOVALUE;
        goto LB; // [216] 227
    }
    DeRef(_32273);
    _32273 = NOVALUE;
    // SubProg scan_number pc: 220 op: STARTLINE (58)

    /** tokenize.e:778						return TRUE*/
    // SubProg scan_number pc: 222 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var v_64897
    DeRef(_v_64897);

// Exiting block BLOCK: scan_number

// block var state_64877
    DeRef(_state_64877);
    DeRef(_32262);
    _32262 = NOVALUE;
    DeRef(_32267);
    _32267 = NOVALUE;
    return 1;
    // SubProg scan_number pc: 226 op: NOP1 (159)
LB: // addr: 227 pc: 226 sub: 64875 op: 159
    // SubProg scan_number pc: 227 op: STARTLINE (58)

    /** tokenize.e:781					scan_char()*/
    // SubProg scan_number pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 231 op: PROC (27)
    Ref(_71g_state_64375);
    _71scan_char(_71g_state_64375);
    // SubProg scan_number pc: 234 op: STARTLINE (58)

    /** tokenize.e:782					Token[TDATA] = scan_fraction(Token[TDATA], state)*/
    // SubProg scan_number pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 240 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32275 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_number pc: 244 op: PROC (27)
    Ref(_32275);
    Ref(_state_64877);
    _32276 = _71scan_fraction(_32275, _state_64877);
    _32275 = NOVALUE;
    // SubProg scan_number pc: 249 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32276;
    if( _1 != _32276 ){
        DeRef(_1);
    }
    _32276 = NOVALUE;
    // SubProg scan_number pc: 253 op: STARTLINE (58)

    /** tokenize.e:784					if ERR then return TRUE end if*/
    // SubProg scan_number pc: 255 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 257 op: IF (20)
    if (_71ERR_64330 == 0)
    {
        goto LC; // [257] 265
    }
    else{
    }
    // SubProg scan_number pc: 260 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var v_64897
    DeRef(_v_64897);

// Exiting block BLOCK: scan_number

// block var state_64877
    DeRef(_state_64877);
    DeRef(_32262);
    _32262 = NOVALUE;
    DeRef(_32267);
    _32267 = NOVALUE;
    return 1;
    // SubProg scan_number pc: 264 op: NOP1 (159)
LC: // addr: 265 pc: 264 sub: 64875 op: 159
    // SubProg scan_number pc: 265 op: NOP1 (159)
LA: // addr: 266 pc: 265 sub: 64875 op: 159
    // SubProg scan_number pc: 266 op: STARTLINE (58)

    /** tokenize.e:787				Token[TDATA] = scan_exponent(Token[TDATA], state)*/
    // SubProg scan_number pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 272 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32277 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_number pc: 276 op: PROC (27)
    Ref(_32277);
    Ref(_state_64877);
    _32278 = _71scan_exponent(_32277, _state_64877);
    _32277 = NOVALUE;
    // SubProg scan_number pc: 281 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32278;
    if( _1 != _32278 ){
        DeRef(_1);
    }
    _32278 = NOVALUE;
    // SubProg scan_number pc: 285 op: STARTLINE (58)

    /** tokenize.e:788				if v != Token[TDATA] then*/
    // SubProg scan_number pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 289 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32279 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_number pc: 293 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _v_64897, _32279)){
        _32279 = NOVALUE;
        goto LD; // [293] 306
    }
    _32279 = NOVALUE;
    // SubProg scan_number pc: 297 op: STARTLINE (58)

    /** tokenize.e:789					Token[TFORM] = TF_ATOM*/
    // SubProg scan_number pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 301 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg scan_number pc: 305 op: NOP1 (159)
LD: // addr: 306 pc: 305 sub: 64875 op: 159
    // SubProg scan_number pc: 306 op: NOP1 (159)
L9: // addr: 307 pc: 306 sub: 64875 op: 159
    // SubProg scan_number pc: 307 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var v_64897
    DeRef(_v_64897);
    _v_64897 = NOVALUE;
    // SubProg scan_number pc: 309 op: NOP1 (159)
L8: // addr: 310 pc: 309 sub: 64875 op: 159
    // SubProg scan_number pc: 310 op: STARTLINE (58)

    /** tokenize.e:794		return TRUE*/
    // SubProg scan_number pc: 312 op: RETURNF (28)

// Exiting block BLOCK: scan_number

// block var state_64877
    DeRef(_state_64877);
    DeRef(_32262);
    _32262 = NOVALUE;
    DeRef(_32267);
    _32267 = NOVALUE;
    return 1;
    // SubProg scan_number pc: 316 op: BADRETURNF (43)
    ;
}


object _71scan_prefixed_number(object _state_64917)
{
    object _pfxCh_64921 = NOVALUE;
    object _firstCh_64927 = NOVALUE;
    object _startSti_64933 = NOVALUE;
    object _32302 = NOVALUE; // 64950 32302
    object _32301 = NOVALUE; // 64949 32301
    object _32300 = NOVALUE; // 64948 32300
    object _32299 = NOVALUE; // 64947 32299
    object _32298 = NOVALUE; // 64945 32298
    object _32297 = NOVALUE; // 64944 32297
    object _32296 = NOVALUE; // 64943 32296
    object _32295 = NOVALUE; // 64942 32295
    object _32294 = NOVALUE; // 64940 32294
// skipping _32293  name type: 0
    object _32292 = NOVALUE; // 64938 32292
// skipping _32291  name type: 0
    object _32290 = NOVALUE; // 64932 32290
// skipping _32289  name type: 0
    object _32288 = NOVALUE; // 64930 32288
// skipping _32287  name type: 0
// skipping _32286  name type: 0
    object _32285 = NOVALUE; // 64925 32285
// skipping _32283  name type: 0
// skipping _32282  name type: 0
    object _32281 = NOVALUE; // 64919 32281
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_prefixed_number pc: 1 op: STARTLINE (58)

    /** tokenize.e:798		if not (Look = '0') then*/
    // SubProg scan_prefixed_number pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 5 op: EQUALS (3)
    _32281 = (_71Look_64329 == 48);
    // SubProg scan_prefixed_number pc: 9 op: NOT_IFW (108)
    if (_32281 != 0)
    goto L1; // [9] 19
    _32281 = NOVALUE;
    // SubProg scan_prefixed_number pc: 12 op: STARTLINE (58)

    /** tokenize.e:799			return FALSE*/
    // SubProg scan_prefixed_number pc: 14 op: RETURNF (28)

// Exiting block BLOCK: scan_prefixed_number

// block var state_64917
    DeRef(_state_64917);

// block var pfxCh_64921

// block var firstCh_64927
    return 0;
    // SubProg scan_prefixed_number pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 19 op: STARTLINE (58)

    /** tokenize.e:802		integer pfxCh = lookahead(1, state)*/
    // SubProg scan_prefixed_number pc: 21 op: PROC (27)
    Ref(_state_64917);
    _pfxCh_64921 = _71lookahead(1, _state_64917);
    // SubProg scan_prefixed_number pc: 26 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pfxCh_64921)) {
        _1 = (object)(DBL_PTR(_pfxCh_64921)->dbl);
        DeRefDS(_pfxCh_64921);
        _pfxCh_64921 = _1;
    }
    // SubProg scan_prefixed_number pc: 28 op: STARTLINE (58)

    /** tokenize.e:803		if find(pfxCh, "btdx") = 0 then*/
    // SubProg scan_prefixed_number pc: 30 op: FIND_FROM (176)
    _32285 = find_from(_pfxCh_64921, _32284, 1);
    // SubProg scan_prefixed_number pc: 35 op: EQUALS_IFW_I (121)
    if (_32285 != 0)
    goto L2; // [35] 46
    // SubProg scan_prefixed_number pc: 39 op: STARTLINE (58)

    /** tokenize.e:804			return FALSE*/
    // SubProg scan_prefixed_number pc: 41 op: RETURNF (28)

// Exiting block BLOCK: scan_prefixed_number

// block var state_64917
    DeRef(_state_64917);

// block var pfxCh_64921

// block var firstCh_64927
    return 0;
    // SubProg scan_prefixed_number pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 46 op: STARTLINE (58)

    /** tokenize.e:807		integer firstCh = lookahead(2, state)*/
    // SubProg scan_prefixed_number pc: 48 op: PROC (27)
    Ref(_state_64917);
    _firstCh_64927 = _71lookahead(2, _state_64917);
    // SubProg scan_prefixed_number pc: 53 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_firstCh_64927)) {
        _1 = (object)(DBL_PTR(_firstCh_64927)->dbl);
        DeRefDS(_firstCh_64927);
        _firstCh_64927 = _1;
    }
    // SubProg scan_prefixed_number pc: 55 op: STARTLINE (58)

    /** tokenize.e:808		if Digit_Char(firstCh) or Hex_Char(firstCh) then*/
    // SubProg scan_prefixed_number pc: 57 op: PROC (27)
    _32288 = _71Digit_Char(_firstCh_64927);
    // SubProg scan_prefixed_number pc: 61 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_32288)) {
        if (_32288 != 0) {
            goto L3; // [61] 74
        }
    }
    else {
        if (DBL_PTR(_32288)->dbl != 0.0) {
            goto L3; // [61] 74
        }
    }
    // SubProg scan_prefixed_number pc: 65 op: PROC (27)
    _32290 = _71Hex_Char(_firstCh_64927);
    // SubProg scan_prefixed_number pc: 69 op: NOP1 (159)
    // SubProg scan_prefixed_number pc: 70 op: IF (20)
    if (_32290 == 0) {
        DeRef(_32290);
        _32290 = NOVALUE;
        goto L4; // [70] 238
    }
    else {
        if (!IS_ATOM_INT(_32290) && DBL_PTR(_32290)->dbl == 0.0){
            DeRef(_32290);
            _32290 = NOVALUE;
            goto L4; // [70] 238
        }
        DeRef(_32290);
        _32290 = NOVALUE;
    }
    DeRef(_32290);
    _32290 = NOVALUE;
    // SubProg scan_prefixed_number pc: 73 op: NOP1 (159)
L3: // addr: 74 pc: 73 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 74 op: STARTLINE (58)

    /** tokenize.e:809			integer startSti = sti*/
    // SubProg scan_prefixed_number pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 78 op: ASSIGN_I (113)
    _startSti_64933 = _71sti_64326;
    // SubProg scan_prefixed_number pc: 81 op: STARTLINE (58)

    /** tokenize.e:811			scan_char(state) -- skip the leading zero*/
    // SubProg scan_prefixed_number pc: 83 op: PROC (27)
    Ref(_state_64917);
    _71scan_char(_state_64917);
    // SubProg scan_prefixed_number pc: 86 op: STARTLINE (58)

    /** tokenize.e:812			scan_char(state) -- skip prefix character*/
    // SubProg scan_prefixed_number pc: 88 op: PROC (27)
    Ref(_state_64917);
    _71scan_char(_state_64917);
    // SubProg scan_prefixed_number pc: 91 op: STARTLINE (58)

    /** tokenize.e:814			Token[TTYPE] = T_NUMBER*/
    // SubProg scan_prefixed_number pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 95 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg scan_prefixed_number pc: 99 op: STARTLINE (58)

    /** tokenize.e:816			if pfxCh = 'x' then*/
    // SubProg scan_prefixed_number pc: 101 op: EQUALS_IFW_I (121)
    if (_pfxCh_64921 != 120)
    goto L5; // [101] 116
    // SubProg scan_prefixed_number pc: 105 op: STARTLINE (58)

    /** tokenize.e:817				Token[TFORM] = TF_HEX*/
    // SubProg scan_prefixed_number pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 109 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg scan_prefixed_number pc: 113 op: ELSE (23)
    goto L6; // [113] 125
    // SubProg scan_prefixed_number pc: 115 op: NOP1 (159)
L5: // addr: 116 pc: 115 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 116 op: STARTLINE (58)

    /** tokenize.e:819				Token[TFORM] = TF_INT*/
    // SubProg scan_prefixed_number pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 120 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    // SubProg scan_prefixed_number pc: 124 op: NOP1 (159)
L6: // addr: 125 pc: 124 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 125 op: STARTLINE (58)

    /** tokenize.e:822			while Hex_Char(Look) or Digit_Char(Look) do*/
    // SubProg scan_prefixed_number pc: 127 op: NOP2 (110)
    // SubProg scan_prefixed_number pc: 129 op: NOPWHILE (158)
L7: // addr: 130 pc: 129 sub: 64915 op: 158
    // SubProg scan_prefixed_number pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 132 op: PROC (27)
    _32292 = _71Hex_Char(_71Look_64329);
    // SubProg scan_prefixed_number pc: 136 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_32292)) {
        if (_32292 != 0) {
            goto L8; // [136] 151
        }
    }
    else {
        if (DBL_PTR(_32292)->dbl != 0.0) {
            goto L8; // [136] 151
        }
    }
    // SubProg scan_prefixed_number pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 142 op: PROC (27)
    _32294 = _71Digit_Char(_71Look_64329);
    // SubProg scan_prefixed_number pc: 146 op: NOP1 (159)
    // SubProg scan_prefixed_number pc: 147 op: WHILE (47)
    if (_32294 <= 0) {
        if (_32294 == 0) {
            DeRef(_32294);
            _32294 = NOVALUE;
            goto L9; // [147] 161
        }
        else {
            if (!IS_ATOM_INT(_32294) && DBL_PTR(_32294)->dbl == 0.0){
                DeRef(_32294);
                _32294 = NOVALUE;
                goto L9; // [147] 161
            }
            DeRef(_32294);
            _32294 = NOVALUE;
        }
    }
    DeRef(_32294);
    _32294 = NOVALUE;
    // SubProg scan_prefixed_number pc: 150 op: NOP1 (159)
L8: // addr: 151 pc: 150 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 151 op: STARTLINE (58)

    /** tokenize.e:823				scan_char(state)*/
    // SubProg scan_prefixed_number pc: 153 op: PROC (27)
    Ref(_state_64917);
    _71scan_char(_state_64917);
    // SubProg scan_prefixed_number pc: 156 op: STARTLINE (58)

    /** tokenize.e:824			end while*/
    // SubProg scan_prefixed_number pc: 158 op: ENDWHILE (22)
    goto L7; // [158] 130
    // SubProg scan_prefixed_number pc: 160 op: NOP1 (159)
L9: // addr: 161 pc: 160 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 161 op: STARTLINE (58)

    /** tokenize.e:826			if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg scan_prefixed_number pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 165 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_64917)){
        _32295 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64917)->dbl));
    }
    else{
        _32295 = (object)*(((s1_ptr)_2)->base + _state_64917);
    }
    // SubProg scan_prefixed_number pc: 169 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32295);
    _32296 = (object)*(((s1_ptr)_2)->base + 3);
    _32295 = NOVALUE;
    // SubProg scan_prefixed_number pc: 173 op: IF (20)
    if (_32296 == 0) {
        _32296 = NOVALUE;
        goto LA; // [173] 200
    }
    else {
        if (!IS_ATOM_INT(_32296) && DBL_PTR(_32296)->dbl == 0.0){
            _32296 = NOVALUE;
            goto LA; // [173] 200
        }
        _32296 = NOVALUE;
    }
    _32296 = NOVALUE;
    // SubProg scan_prefixed_number pc: 176 op: STARTLINE (58)

    /** tokenize.e:827				Token[TDATA] = source_text[startSti .. sti - 1]*/
    // SubProg scan_prefixed_number pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 184 op: MINUS (10)
    _32297 = _71sti_64326 - 1;
    // SubProg scan_prefixed_number pc: 188 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32298;
    RHS_Slice(_71source_text_64325, _startSti_64933, _32297);
    // SubProg scan_prefixed_number pc: 193 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32298;
    if( _1 != _32298 ){
        DeRef(_1);
    }
    _32298 = NOVALUE;
    // SubProg scan_prefixed_number pc: 197 op: ELSE (23)
    goto LB; // [197] 231
    // SubProg scan_prefixed_number pc: 199 op: NOP1 (159)
LA: // addr: 200 pc: 199 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 200 op: STARTLINE (58)

    /** tokenize.e:829				Token[TDATA] = convert:to_number(source_text[startSti + 2 .. sti - 1])*/
    // SubProg scan_prefixed_number pc: 202 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 206 op: PLUS (11)
    _32299 = _startSti_64933 + 2;
    if ((object)((uintptr_t)_32299 + (uintptr_t)HIGH_BITS) >= 0){
        _32299 = NewDouble((eudouble)_32299);
    }
    // SubProg scan_prefixed_number pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 212 op: MINUS (10)
    _32300 = _71sti_64326 - 1;
    // SubProg scan_prefixed_number pc: 216 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32301;
    RHS_Slice(_71source_text_64325, _32299, _32300);
    // SubProg scan_prefixed_number pc: 221 op: PROC (27)
    _32302 = _21to_number(_32301, 0);
    _32301 = NOVALUE;
    // SubProg scan_prefixed_number pc: 226 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32302;
    if( _1 != _32302 ){
        DeRef(_1);
    }
    _32302 = NOVALUE;
    // SubProg scan_prefixed_number pc: 230 op: NOP1 (159)
LB: // addr: 231 pc: 230 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 231 op: STARTLINE (58)

    /** tokenize.e:832			return TRUE*/
    // SubProg scan_prefixed_number pc: 233 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var startSti_64933

// Exiting block BLOCK: scan_prefixed_number

// block var state_64917
    DeRef(_state_64917);

// block var pfxCh_64921

// block var firstCh_64927
    DeRef(_32292);
    _32292 = NOVALUE;
    DeRef(_32288);
    _32288 = NOVALUE;
    DeRef(_32297);
    _32297 = NOVALUE;
    DeRef(_32300);
    _32300 = NOVALUE;
    DeRef(_32299);
    _32299 = NOVALUE;
    return 1;
    // SubProg scan_prefixed_number pc: 237 op: NOP1 (159)
L4: // addr: 238 pc: 237 sub: 64915 op: 159
    // SubProg scan_prefixed_number pc: 238 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var startSti_64933
    // SubProg scan_prefixed_number pc: 240 op: STARTLINE (58)

    /** tokenize.e:835		return FALSE*/
    // SubProg scan_prefixed_number pc: 242 op: RETURNF (28)

// Exiting block BLOCK: scan_prefixed_number

// block var state_64917
    DeRef(_state_64917);

// block var pfxCh_64921

// block var firstCh_64927
    DeRef(_32292);
    _32292 = NOVALUE;
    DeRef(_32288);
    _32288 = NOVALUE;
    DeRef(_32297);
    _32297 = NOVALUE;
    DeRef(_32300);
    _32300 = NOVALUE;
    DeRef(_32299);
    _32299 = NOVALUE;
    return 0;
    // SubProg scan_prefixed_number pc: 246 op: BADRETURNF (43)
    ;
}


object _71hex_string(object _textdata_64953, object _string_type_64954)
{
    object _ch_64955 = NOVALUE;
    object _digit_64956 = NOVALUE;
    object _val_64957 = NOVALUE;
    object _nibble_64958 = NOVALUE;
    object _maxnibbles_64959 = NOVALUE;
    object _string_text_64960 = NOVALUE;
// skipping _32326  name type: 0
// skipping _32325  name type: 0
// skipping _32324  name type: 0
// skipping _32323  name type: 0
// skipping _32322  name type: 0
// skipping _32321  name type: 0
// skipping _32320  name type: 0
// skipping _32319  name type: 0
    object _32318 = NOVALUE; // 64987 32318
    object _32317 = NOVALUE; // 64986 32317
// skipping _32316  name type: 0
// skipping _32315  name type: 0
// skipping _32314  name type: 0
// skipping _32313  name type: 0
// skipping _32312  name type: 0
// skipping _32311  name type: 0
// skipping _32310  name type: 0
// skipping _32308  name type: 0
    object _32307 = NOVALUE; // 64971 32307
    object _32306 = NOVALUE; // 64968 32306
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hex_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg hex_string pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_string_type_64954)) {
        _1 = (object)(DBL_PTR(_string_type_64954)->dbl);
        DeRefDS(_string_type_64954);
        _string_type_64954 = _1;
    }
    // SubProg hex_string pc: 5 op: STARTLINE (58)

    /** tokenize.e:846		switch string_type do*/
    // SubProg hex_string pc: 7 op: SWITCH_I (193)
    _0 = _string_type_64954;
    switch ( _0 ){ 
        // SubProg hex_string pc: 12 op: STARTLINE (58)

        /** tokenize.e:847			case 'x' then*/
        // SubProg hex_string pc: 14 op: CASE (186)
        case 120:
        // SubProg hex_string pc: 16 op: STARTLINE (58)

        /** tokenize.e:848				maxnibbles = 2*/
        // SubProg hex_string pc: 18 op: ASSIGN_I (113)
        _maxnibbles_64959 = 2;
        // SubProg hex_string pc: 21 op: ELSE (23)
        goto L1; // [21] 60
        // SubProg hex_string pc: 23 op: STARTLINE (58)

        /** tokenize.e:849			case 'u' then*/
        // SubProg hex_string pc: 25 op: CASE (186)
        case 117:
        // SubProg hex_string pc: 27 op: STARTLINE (58)

        /** tokenize.e:850				maxnibbles = 4*/
        // SubProg hex_string pc: 29 op: ASSIGN_I (113)
        _maxnibbles_64959 = 4;
        // SubProg hex_string pc: 32 op: ELSE (23)
        goto L1; // [32] 60
        // SubProg hex_string pc: 34 op: STARTLINE (58)

        /** tokenize.e:851			case 'U' then*/
        // SubProg hex_string pc: 36 op: CASE (186)
        case 85:
        // SubProg hex_string pc: 38 op: STARTLINE (58)

        /** tokenize.e:852				maxnibbles = 8*/
        // SubProg hex_string pc: 40 op: ASSIGN_I (113)
        _maxnibbles_64959 = 8;
        // SubProg hex_string pc: 43 op: ELSE (23)
        goto L1; // [43] 60
        // SubProg hex_string pc: 45 op: STARTLINE (58)

        /** tokenize.e:853			case else*/
        // SubProg hex_string pc: 47 op: CASE (186)
        default:
        // SubProg hex_string pc: 49 op: STARTLINE (58)

        /** tokenize.e:854				printf(2, "tokenize.e: Unknown base code '%s', ignored.\n", {string_type})*/
        // SubProg hex_string pc: 51 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _string_type_64954;
        _32306 = MAKE_SEQ(_1);
        // SubProg hex_string pc: 55 op: PRINTF (38)
        EPrintf(2, _32305, _32306);
        DeRefDS(_32306);
        _32306 = NOVALUE;
        // SubProg hex_string pc: 59 op: NOPSWITCH (187)
    ;}L1: // addr: 60 pc: 59 sub: 64951 op: 187
    // SubProg hex_string pc: 60 op: STARTLINE (58)

    /** tokenize.e:857		string_text = ""*/
    // SubProg hex_string pc: 62 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_string_text_64960);
    _string_text_64960 = _21958;
    // SubProg hex_string pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg hex_string pc: 67 op: STARTLINE (58)

    /** tokenize.e:858		nibble = 1*/
    // SubProg hex_string pc: 69 op: ASSIGN_I (113)
    _nibble_64958 = 1;
    // SubProg hex_string pc: 72 op: STARTLINE (58)

    /** tokenize.e:859		val = -1*/
    // SubProg hex_string pc: 74 op: ASSIGN (18)
    DeRef(_val_64957);
    _val_64957 = -1;
    // SubProg hex_string pc: 77 op: STARTLINE (58)

    /** tokenize.e:860		for cpos = 1 to length(textdata) do*/
    // SubProg hex_string pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_textdata_64953)){
            _32307 = SEQ_PTR(_textdata_64953)->length;
    }
    else {
        _32307 = 1;
    }
    // SubProg hex_string pc: 82 op: FOR_I (125)
    {
        object _cpos_64970;
        _cpos_64970 = 1;
L2: // addr: 89 pc: 82 sub: 64951 op: 125
        if (_cpos_64970 > _32307){
            goto L3; // [82] 229
        }
        // SubProg hex_string pc: 89 op: STARTLINE (58)

        /** tokenize.e:861			ch = textdata[cpos]*/
        // SubProg hex_string pc: 91 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_textdata_64953);
        _ch_64955 = (object)*(((s1_ptr)_2)->base + _cpos_64970);
        if (!IS_ATOM_INT(_ch_64955))
        _ch_64955 = (object)DBL_PTR(_ch_64955)->dbl;
        // SubProg hex_string pc: 95 op: STARTLINE (58)

        /** tokenize.e:863			digit = find(ch, "0123456789ABCDEFabcdef _\t\n\r")*/
        // SubProg hex_string pc: 97 op: FIND_FROM (176)
        _digit_64956 = find_from(_ch_64955, _32309, 1);
        // SubProg hex_string pc: 102 op: STARTLINE (58)

        /** tokenize.e:864			if digit = 0 then*/
        // SubProg hex_string pc: 104 op: EQUALS_IFW_I (121)
        if (_digit_64956 != 0)
        goto L4; // [104] 115
        // SubProg hex_string pc: 108 op: STARTLINE (58)

        /** tokenize.e:865				return 0*/
        // SubProg hex_string pc: 110 op: RETURNF (28)

// Exiting block BLOCK: hex_string

// block var textdata_64953
        DeRefDS(_textdata_64953);

// block var string_type_64954

// block var ch_64955

// block var digit_64956

// block var val_64957
        DeRef(_val_64957);

// block var nibble_64958

// block var maxnibbles_64959

// block var string_text_64960
        DeRef(_string_text_64960);
        return 0;
        // SubProg hex_string pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 64951 op: 159
        // SubProg hex_string pc: 115 op: STARTLINE (58)

        /** tokenize.e:868			if digit < 23 then*/
        // SubProg hex_string pc: 117 op: LESS_IFW_I (119)
        if (_digit_64956 >= 23)
        goto L5; // [117] 198
        // SubProg hex_string pc: 121 op: STARTLINE (58)

        /** tokenize.e:869				if digit > 16 then*/
        // SubProg hex_string pc: 123 op: GREATER_IFW_I (124)
        if (_digit_64956 <= 16)
        goto L6; // [123] 134
        // SubProg hex_string pc: 127 op: STARTLINE (58)

        /** tokenize.e:870					digit -= 6*/
        // SubProg hex_string pc: 129 op: MINUS_I (116)
        _digit_64956 = _digit_64956 - 6;
        // SubProg hex_string pc: 133 op: NOP1 (159)
L6: // addr: 134 pc: 133 sub: 64951 op: 159
        // SubProg hex_string pc: 134 op: STARTLINE (58)

        /** tokenize.e:872				if nibble = 1 then*/
        // SubProg hex_string pc: 136 op: EQUALS_IFW_I (121)
        if (_nibble_64958 != 1)
        goto L7; // [136] 149
        // SubProg hex_string pc: 140 op: STARTLINE (58)

        /** tokenize.e:873					val = digit - 1*/
        // SubProg hex_string pc: 142 op: MINUS (10)
        DeRef(_val_64957);
        _val_64957 = _digit_64956 - 1;
        if ((object)((uintptr_t)_val_64957 +(uintptr_t) HIGH_BITS) >= 0){
            _val_64957 = NewDouble((eudouble)_val_64957);
        }
        // SubProg hex_string pc: 146 op: ELSE (23)
        goto L8; // [146] 189
        // SubProg hex_string pc: 148 op: NOP1 (159)
L7: // addr: 149 pc: 148 sub: 64951 op: 159
        // SubProg hex_string pc: 149 op: STARTLINE (58)

        /** tokenize.e:875					val = val * 16 + digit - 1*/
        // SubProg hex_string pc: 151 op: MULTIPLY (13)
        if (IS_ATOM_INT(_val_64957)) {
            if (_val_64957 == (short)_val_64957){
                _32317 = _val_64957 * 16;
            }
            else{
                _32317 = NewDouble(_val_64957 * (eudouble)16);
            }
        }
        else {
            _32317 = NewDouble(DBL_PTR(_val_64957)->dbl * (eudouble)16);
        }
        // SubProg hex_string pc: 155 op: PLUS (11)
        if (IS_ATOM_INT(_32317)) {
            _32318 = _32317 + _digit_64956;
            if ((object)((uintptr_t)_32318 + (uintptr_t)HIGH_BITS) >= 0){
                _32318 = NewDouble((eudouble)_32318);
            }
        }
        else {
            _32318 = NewDouble(DBL_PTR(_32317)->dbl + (eudouble)_digit_64956);
        }
        DeRef(_32317);
        _32317 = NOVALUE;
        // SubProg hex_string pc: 159 op: MINUS (10)
        DeRef(_val_64957);
        if (IS_ATOM_INT(_32318)) {
            _val_64957 = _32318 - 1;
            if ((object)((uintptr_t)_val_64957 +(uintptr_t) HIGH_BITS) >= 0){
                _val_64957 = NewDouble((eudouble)_val_64957);
            }
        }
        else {
            _val_64957 = NewDouble(DBL_PTR(_32318)->dbl - (eudouble)1);
        }
        DeRef(_32318);
        _32318 = NOVALUE;
        // SubProg hex_string pc: 163 op: STARTLINE (58)

        /** tokenize.e:876					if nibble = maxnibbles then*/
        // SubProg hex_string pc: 165 op: PRIVATE_INIT_CHECK (30)
        // SubProg hex_string pc: 167 op: EQUALS_IFW_I (121)
        if (_nibble_64958 != _maxnibbles_64959)
        goto L9; // [167] 188
        // SubProg hex_string pc: 171 op: STARTLINE (58)

        /** tokenize.e:877						string_text &= val*/
        // SubProg hex_string pc: 173 op: CONCAT (15)
        Ref(_val_64957);
        Append(&_string_text_64960, _string_text_64960, _val_64957);
        // SubProg hex_string pc: 177 op: STARTLINE (58)

        /** tokenize.e:878						val = -1*/
        // SubProg hex_string pc: 179 op: ASSIGN (18)
        DeRef(_val_64957);
        _val_64957 = -1;
        // SubProg hex_string pc: 182 op: STARTLINE (58)

        /** tokenize.e:879						nibble = 0*/
        // SubProg hex_string pc: 184 op: ASSIGN_I (113)
        _nibble_64958 = 0;
        // SubProg hex_string pc: 187 op: NOP1 (159)
L9: // addr: 188 pc: 187 sub: 64951 op: 159
        // SubProg hex_string pc: 188 op: NOP1 (159)
L8: // addr: 189 pc: 188 sub: 64951 op: 159
        // SubProg hex_string pc: 189 op: STARTLINE (58)

        /** tokenize.e:882				nibble += 1*/
        // SubProg hex_string pc: 191 op: PLUS1_I (117)
        _nibble_64958 = _nibble_64958 + 1;
        // SubProg hex_string pc: 195 op: ELSE (23)
        goto LA; // [195] 222
        // SubProg hex_string pc: 197 op: NOP1 (159)
L5: // addr: 198 pc: 197 sub: 64951 op: 159
        // SubProg hex_string pc: 198 op: STARTLINE (58)

        /** tokenize.e:885				if val >= 0 then*/
        // SubProg hex_string pc: 200 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _val_64957, 0)){
            goto LB; // [200] 216
        }
        // SubProg hex_string pc: 204 op: STARTLINE (58)

        /** tokenize.e:887					string_text &= val*/
        // SubProg hex_string pc: 206 op: CONCAT (15)
        Ref(_val_64957);
        Append(&_string_text_64960, _string_text_64960, _val_64957);
        // SubProg hex_string pc: 210 op: STARTLINE (58)

        /** tokenize.e:888					val = -1*/
        // SubProg hex_string pc: 212 op: ASSIGN (18)
        DeRef(_val_64957);
        _val_64957 = -1;
        // SubProg hex_string pc: 215 op: NOP1 (159)
LB: // addr: 216 pc: 215 sub: 64951 op: 159
        // SubProg hex_string pc: 216 op: STARTLINE (58)

        /** tokenize.e:890				nibble = 1*/
        // SubProg hex_string pc: 218 op: ASSIGN_I (113)
        _nibble_64958 = 1;
        // SubProg hex_string pc: 221 op: NOP1 (159)
LA: // addr: 222 pc: 221 sub: 64951 op: 159
        // SubProg hex_string pc: 222 op: STARTLINE (58)

        /** tokenize.e:892		end for*/
        // SubProg hex_string pc: 224 op: ENDFOR_INT_UP1 (54)
        _cpos_64970 = _cpos_64970 + 1;
        goto L2; // [224] 89
L3: // addr: 229 pc: 224 sub: 64951 op: 54
        ;
    }
    // SubProg hex_string pc: 229 op: STARTLINE (58)

    /** tokenize.e:894		if val >= 0 then*/
    // SubProg hex_string pc: 231 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_64957, 0)){
        goto LC; // [231] 242
    }
    // SubProg hex_string pc: 235 op: STARTLINE (58)

    /** tokenize.e:896			string_text &= val*/
    // SubProg hex_string pc: 237 op: CONCAT (15)
    Ref(_val_64957);
    Append(&_string_text_64960, _string_text_64960, _val_64957);
    // SubProg hex_string pc: 241 op: NOP1 (159)
LC: // addr: 242 pc: 241 sub: 64951 op: 159
    // SubProg hex_string pc: 242 op: STARTLINE (58)

    /** tokenize.e:899		return string_text*/
    // SubProg hex_string pc: 244 op: RETURNF (28)

// Exiting block BLOCK: hex_string

// block var textdata_64953
    DeRefDS(_textdata_64953);

// block var string_type_64954

// block var ch_64955

// block var digit_64956

// block var val_64957
    DeRef(_val_64957);

// block var nibble_64958

// block var maxnibbles_64959
    return _string_text_64960;
    // SubProg hex_string pc: 248 op: BADRETURNF (43)
    ;
}


object _71scan_identifier(object _state_65003)
{
    object _nextch_65004 = NOVALUE;
    object _startpos_65005 = NOVALUE;
    object _textdata_65006 = NOVALUE;
    object _whichhex_65017 = NOVALUE;
    object _32372 = NOVALUE; // 65070 32372
    object _32371 = NOVALUE; // 65069 32371
    object _32370 = NOVALUE; // 65068 32370
    object _32369 = NOVALUE; // 65067 32369
    object _32368 = NOVALUE; // 65065 32368
    object _32367 = NOVALUE; // 65063 32367
    object _32366 = NOVALUE; // 65062 32366
    object _32365 = NOVALUE; // 65060 32365
    object _32364 = NOVALUE; // 65059 32364
    object _32363 = NOVALUE; // 65057 32363
    object _32362 = NOVALUE; // 65055 32362
    object _32361 = NOVALUE; // 65053 32361
    object _32360 = NOVALUE; // 65052 32360
    object _32359 = NOVALUE; // 65051 32359
    object _32358 = NOVALUE; // 65049 32358
    object _32357 = NOVALUE; // 65048 32357
    object _32356 = NOVALUE; // 65047 32356
    object _32355 = NOVALUE; // 65046 32355
    object _32354 = NOVALUE; // 65044 32354
    object _32353 = NOVALUE; // 65043 32353
    object _32352 = NOVALUE; // 65042 32352
    object _32351 = NOVALUE; // 65041 32351
    object _32350 = NOVALUE; // 65039 32350
// skipping _32349  name type: 0
    object _32348 = NOVALUE; // 65036 32348
    object _32347 = NOVALUE; // 65035 32347
    object _32346 = NOVALUE; // 65034 32346
    object _32345 = NOVALUE; // 65033 32345
// skipping _32344  name type: 0
    object _32343 = NOVALUE; // 65031 32343
    object _32342 = NOVALUE; // 65030 32342
    object _32341 = NOVALUE; // 65028 32341
    object _32340 = NOVALUE; // 65027 32340
    object _32339 = NOVALUE; // 65026 32339
    object _32338 = NOVALUE; // 65025 32338
// skipping _32337  name type: 0
// skipping _32336  name type: 0
    object _32335 = NOVALUE; // 65020 32335
    object _32334 = NOVALUE; // 65019 32334
// skipping _32333  name type: 0
// skipping _32332  name type: 0
    object _32331 = NOVALUE; // 65013 32331
    object _32330 = NOVALUE; // 65011 32330
    object _32329 = NOVALUE; // 65010 32329
    object _32328 = NOVALUE; // 65009 32328
    object _32327 = NOVALUE; // 65008 32327
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_identifier pc: 1 op: STARTLINE (58)

    /** tokenize.e:909		if not Alpha_Char(Look) and Look != '_' then*/
    // SubProg scan_identifier pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 5 op: PROC (27)
    _32327 = _71Alpha_Char(_71Look_64329);
    // SubProg scan_identifier pc: 9 op: NOT (7)
    if (IS_ATOM_INT(_32327)) {
        _32328 = (_32327 == 0);
    }
    else {
        _32328 = unary_op(NOT, _32327);
    }
    DeRef(_32327);
    _32327 = NOVALUE;
    // SubProg scan_identifier pc: 12 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32328)) {
        if (_32328 == 0) {
            goto L1; // [12] 33
        }
    }
    else {
        if (DBL_PTR(_32328)->dbl == 0.0) {
            goto L1; // [12] 33
        }
    }
    // SubProg scan_identifier pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 18 op: NOTEQ (4)
    _32330 = (_71Look_64329 != 95);
    // SubProg scan_identifier pc: 22 op: NOP1 (159)
    // SubProg scan_identifier pc: 23 op: IF (20)
    if (_32330 == 0)
    {
        DeRef(_32330);
        _32330 = NOVALUE;
        goto L1; // [23] 33
    }
    else{
        DeRef(_32330);
        _32330 = NOVALUE;
    }
    // SubProg scan_identifier pc: 26 op: STARTLINE (58)

    /** tokenize.e:910			return FALSE*/
    // SubProg scan_identifier pc: 28 op: RETURNF (28)

// Exiting block BLOCK: scan_identifier

// block var state_65003
    DeRef(_state_65003);

// block var nextch_65004

// block var startpos_65005

// block var textdata_65006
    DeRef(_textdata_65006);
    DeRef(_32328);
    _32328 = NOVALUE;
    return 0;
    // SubProg scan_identifier pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 65001 op: 159
    // SubProg scan_identifier pc: 33 op: STARTLINE (58)

    /** tokenize.e:913		if find(Look, "xuU") then*/
    // SubProg scan_identifier pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 37 op: FIND_FROM (176)
    _32331 = find_from(_71Look_64329, _32303, 1);
    // SubProg scan_identifier pc: 42 op: IF (20)
    if (_32331 == 0)
    {
        _32331 = NOVALUE;
        goto L2; // [42] 354
    }
    else{
        _32331 = NOVALUE;
    }
    // SubProg scan_identifier pc: 45 op: STARTLINE (58)

    /** tokenize.e:914			nextch = lookahead(state, state)*/
    // SubProg scan_identifier pc: 47 op: PROC (27)
    Ref(_state_65003);
    Ref(_state_65003);
    _nextch_65004 = _71lookahead(_state_65003, _state_65003);
    // SubProg scan_identifier pc: 52 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_nextch_65004)) {
        _1 = (object)(DBL_PTR(_nextch_65004)->dbl);
        DeRefDS(_nextch_65004);
        _nextch_65004 = _1;
    }
    // SubProg scan_identifier pc: 54 op: STARTLINE (58)

    /** tokenize.e:915			if nextch = '"' then*/
    // SubProg scan_identifier pc: 56 op: EQUALS_IFW_I (121)
    if (_nextch_65004 != 34)
    goto L3; // [56] 351
    // SubProg scan_identifier pc: 60 op: STARTLINE (58)

    /** tokenize.e:917				integer whichhex = Look*/
    // SubProg scan_identifier pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 64 op: ASSIGN_I (113)
    _whichhex_65017 = _71Look_64329;
    // SubProg scan_identifier pc: 67 op: STARTLINE (58)

    /** tokenize.e:918				textdata = ""*/
    // SubProg scan_identifier pc: 69 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_textdata_65006);
    _textdata_65006 = _21958;
    // SubProg scan_identifier pc: 72 op: STARTLINE (58)

    /** tokenize.e:919				scan_char(state)	-- Skip over starting quote*/
    // SubProg scan_identifier pc: 74 op: PROC (27)
    Ref(_state_65003);
    _71scan_char(_state_65003);
    // SubProg scan_identifier pc: 77 op: STARTLINE (58)

    /** tokenize.e:920				scan_char(state) -- First char of string*/
    // SubProg scan_identifier pc: 79 op: PROC (27)
    Ref(_state_65003);
    _71scan_char(_state_65003);
    // SubProg scan_identifier pc: 82 op: STARTLINE (58)

    /** tokenize.e:921				startpos = sti*/
    // SubProg scan_identifier pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 86 op: ASSIGN_I (113)
    _startpos_65005 = _71sti_64326;
    // SubProg scan_identifier pc: 89 op: STARTLINE (58)

    /** tokenize.e:923				while not find(Look, {'"', io:EOF}) do*/
    // SubProg scan_identifier pc: 91 op: NOP2 (110)
    // SubProg scan_identifier pc: 93 op: NOPWHILE (158)
L4: // addr: 94 pc: 93 sub: 65001 op: 158
    // SubProg scan_identifier pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 96 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 34;
    ((intptr_t *)_2)[2] = -1;
    _32334 = MAKE_SEQ(_1);
    // SubProg scan_identifier pc: 100 op: FIND_FROM (176)
    _32335 = find_from(_71Look_64329, _32334, 1);
    DeRefDS(_32334);
    _32334 = NOVALUE;
    // SubProg scan_identifier pc: 105 op: NOT_IFW (108)
    if (_32335 != 0)
    goto L5; // [105] 118
    _32335 = NOVALUE;
    // SubProg scan_identifier pc: 108 op: STARTLINE (58)

    /** tokenize.e:924					scan_char(state)*/
    // SubProg scan_identifier pc: 110 op: PROC (27)
    Ref(_state_65003);
    _71scan_char(_state_65003);
    // SubProg scan_identifier pc: 113 op: STARTLINE (58)

    /** tokenize.e:925				end while*/
    // SubProg scan_identifier pc: 115 op: ENDWHILE (22)
    goto L4; // [115] 94
    // SubProg scan_identifier pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 65001 op: 159
    // SubProg scan_identifier pc: 118 op: STARTLINE (58)

    /** tokenize.e:927				if Look = io:EOF then*/
    // SubProg scan_identifier pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 122 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != -1)
    goto L6; // [122] 175
    // SubProg scan_identifier pc: 126 op: STARTLINE (58)

    /** tokenize.e:928					if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_identifier pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 130 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65003)){
        _32338 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65003)->dbl));
    }
    else{
        _32338 = (object)*(((s1_ptr)_2)->base + _state_65003);
    }
    // SubProg scan_identifier pc: 134 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32338);
    _32339 = (object)*(((s1_ptr)_2)->base + 8);
    _32338 = NOVALUE;
    // SubProg scan_identifier pc: 138 op: IF (20)
    if (_32339 == 0) {
        _32339 = NOVALUE;
        goto L7; // [138] 163
    }
    else {
        if (!IS_ATOM_INT(_32339) && DBL_PTR(_32339)->dbl == 0.0){
            _32339 = NOVALUE;
            goto L7; // [138] 163
        }
        _32339 = NOVALUE;
    }
    _32339 = NOVALUE;
    // SubProg scan_identifier pc: 141 op: STARTLINE (58)

    /** tokenize.e:929						Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    // SubProg scan_identifier pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 147 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32340 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 151 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _32181;
        concat_list[1] = _32340;
        concat_list[2] = _32181;
        concat_list[3] = _whichhex_65017;
        Concat_N((object_ptr)&_32341, concat_list, 4);
    }
    _32340 = NOVALUE;
    // SubProg scan_identifier pc: 158 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32341;
    if( _1 != _32341 ){
        DeRef(_1);
    }
    _32341 = NOVALUE;
    // SubProg scan_identifier pc: 162 op: NOP1 (159)
L7: // addr: 163 pc: 162 sub: 65001 op: 159
    // SubProg scan_identifier pc: 163 op: STARTLINE (58)

    /** tokenize.e:932					report_error(ERR_EOF_STRING)*/
    // SubProg scan_identifier pc: 165 op: PROC (27)
    _71report_error(10);
    // SubProg scan_identifier pc: 168 op: STARTLINE (58)

    /** tokenize.e:933					return TRUE*/
    // SubProg scan_identifier pc: 170 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var whichhex_65017

// Exiting block BLOCK: IF-

// Exiting block BLOCK: scan_identifier

// block var state_65003
    DeRef(_state_65003);

// block var nextch_65004

// block var startpos_65005

// block var textdata_65006
    DeRef(_textdata_65006);
    DeRef(_32328);
    _32328 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 174 op: NOP1 (159)
L6: // addr: 175 pc: 174 sub: 65001 op: 159
    // SubProg scan_identifier pc: 175 op: STARTLINE (58)

    /** tokenize.e:936				if not eumem:ram_space[state][LITERAL_STRING] then*/
    // SubProg scan_identifier pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65003)){
        _32342 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65003)->dbl));
    }
    else{
        _32342 = (object)*(((s1_ptr)_2)->base + _state_65003);
    }
    // SubProg scan_identifier pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32342);
    _32343 = (object)*(((s1_ptr)_2)->base + 7);
    _32342 = NOVALUE;
    // SubProg scan_identifier pc: 187 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32343)) {
        if (_32343 != 0){
            _32343 = NOVALUE;
            goto L8; // [187] 221
        }
    }
    else {
        if (DBL_PTR(_32343)->dbl != 0.0){
            _32343 = NOVALUE;
            goto L8; // [187] 221
        }
    }
    _32343 = NOVALUE;
    // SubProg scan_identifier pc: 190 op: STARTLINE (58)

    /** tokenize.e:937					textdata = hex_string(source_text[startpos .. sti-1], source_text[startpos - 2])*/
    // SubProg scan_identifier pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 196 op: MINUS (10)
    _32345 = _71sti_64326 - 1;
    // SubProg scan_identifier pc: 200 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32346;
    RHS_Slice(_71source_text_64325, _startpos_65005, _32345);
    // SubProg scan_identifier pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 207 op: MINUS (10)
    _32347 = _startpos_65005 - 2;
    // SubProg scan_identifier pc: 211 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64325);
    _32348 = (object)*(((s1_ptr)_2)->base + _32347);
    // SubProg scan_identifier pc: 215 op: PROC (27)
    Ref(_32348);
    _0 = _textdata_65006;
    _textdata_65006 = _71hex_string(_32346, _32348);
    DeRef(_0);
    _32346 = NOVALUE;
    _32348 = NOVALUE;
    // SubProg scan_identifier pc: 220 op: NOP1 (159)
L8: // addr: 221 pc: 220 sub: 65001 op: 159
    // SubProg scan_identifier pc: 221 op: STARTLINE (58)

    /** tokenize.e:939				if atom(textdata) then*/
    // SubProg scan_identifier pc: 223 op: IS_AN_ATOM (67)
    _32350 = IS_ATOM(_textdata_65006);
    // SubProg scan_identifier pc: 226 op: IF (20)
    if (_32350 == 0)
    {
        _32350 = NOVALUE;
        goto L9; // [226] 278
    }
    else{
        _32350 = NOVALUE;
    }
    // SubProg scan_identifier pc: 229 op: STARTLINE (58)

    /** tokenize.e:941					if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_identifier pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 233 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65003)){
        _32351 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65003)->dbl));
    }
    else{
        _32351 = (object)*(((s1_ptr)_2)->base + _state_65003);
    }
    // SubProg scan_identifier pc: 237 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32351);
    _32352 = (object)*(((s1_ptr)_2)->base + 8);
    _32351 = NOVALUE;
    // SubProg scan_identifier pc: 241 op: IF (20)
    if (_32352 == 0) {
        _32352 = NOVALUE;
        goto LA; // [241] 266
    }
    else {
        if (!IS_ATOM_INT(_32352) && DBL_PTR(_32352)->dbl == 0.0){
            _32352 = NOVALUE;
            goto LA; // [241] 266
        }
        _32352 = NOVALUE;
    }
    _32352 = NOVALUE;
    // SubProg scan_identifier pc: 244 op: STARTLINE (58)

    /** tokenize.e:942						Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    // SubProg scan_identifier pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 250 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32353 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 254 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _32181;
        concat_list[1] = _32353;
        concat_list[2] = _32181;
        concat_list[3] = _whichhex_65017;
        Concat_N((object_ptr)&_32354, concat_list, 4);
    }
    _32353 = NOVALUE;
    // SubProg scan_identifier pc: 261 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32354;
    if( _1 != _32354 ){
        DeRef(_1);
    }
    _32354 = NOVALUE;
    // SubProg scan_identifier pc: 265 op: NOP1 (159)
LA: // addr: 266 pc: 265 sub: 65001 op: 159
    // SubProg scan_identifier pc: 266 op: STARTLINE (58)

    /** tokenize.e:944					report_error(ERR_HEX_STRING)*/
    // SubProg scan_identifier pc: 268 op: PROC (27)
    _71report_error(11);
    // SubProg scan_identifier pc: 271 op: STARTLINE (58)

    /** tokenize.e:945					return TRUE*/
    // SubProg scan_identifier pc: 273 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var whichhex_65017

// Exiting block BLOCK: IF-

// Exiting block BLOCK: scan_identifier

// block var state_65003
    DeRef(_state_65003);

// block var nextch_65004

// block var startpos_65005

// block var textdata_65006
    DeRef(_textdata_65006);
    DeRef(_32328);
    _32328 = NOVALUE;
    DeRef(_32347);
    _32347 = NOVALUE;
    DeRef(_32345);
    _32345 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 277 op: NOP1 (159)
L9: // addr: 278 pc: 277 sub: 65001 op: 159
    // SubProg scan_identifier pc: 278 op: STARTLINE (58)

    /** tokenize.e:948				Token[TTYPE] = T_STRING*/
    // SubProg scan_identifier pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 282 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg scan_identifier pc: 286 op: STARTLINE (58)

    /** tokenize.e:949				Token[TDATA] = textdata*/
    // SubProg scan_identifier pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 290 op: ASSIGN_SUBS (16)
    Ref(_textdata_65006);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _textdata_65006;
    DeRef(_1);
    // SubProg scan_identifier pc: 294 op: STARTLINE (58)

    /** tokenize.e:950				Token[TFORM] = TF_STRING_HEX*/
    // SubProg scan_identifier pc: 296 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 298 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 7;
    DeRef(_1);
    // SubProg scan_identifier pc: 302 op: STARTLINE (58)

    /** tokenize.e:952				scan_char(state)	-- go to next char after end of string*/
    // SubProg scan_identifier pc: 304 op: PROC (27)
    Ref(_state_65003);
    _71scan_char(_state_65003);
    // SubProg scan_identifier pc: 307 op: STARTLINE (58)

    /** tokenize.e:953				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_identifier pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65003)){
        _32355 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65003)->dbl));
    }
    else{
        _32355 = (object)*(((s1_ptr)_2)->base + _state_65003);
    }
    // SubProg scan_identifier pc: 315 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32355);
    _32356 = (object)*(((s1_ptr)_2)->base + 8);
    _32355 = NOVALUE;
    // SubProg scan_identifier pc: 319 op: IF (20)
    if (_32356 == 0) {
        _32356 = NOVALUE;
        goto LB; // [319] 344
    }
    else {
        if (!IS_ATOM_INT(_32356) && DBL_PTR(_32356)->dbl == 0.0){
            _32356 = NOVALUE;
            goto LB; // [319] 344
        }
        _32356 = NOVALUE;
    }
    _32356 = NOVALUE;
    // SubProg scan_identifier pc: 322 op: STARTLINE (58)

    /** tokenize.e:954					Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    // SubProg scan_identifier pc: 324 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 328 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32357 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 332 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _32181;
        concat_list[1] = _32357;
        concat_list[2] = _32181;
        concat_list[3] = _whichhex_65017;
        Concat_N((object_ptr)&_32358, concat_list, 4);
    }
    _32357 = NOVALUE;
    // SubProg scan_identifier pc: 339 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32358;
    if( _1 != _32358 ){
        DeRef(_1);
    }
    _32358 = NOVALUE;
    // SubProg scan_identifier pc: 343 op: NOP1 (159)
LB: // addr: 344 pc: 343 sub: 65001 op: 159
    // SubProg scan_identifier pc: 344 op: STARTLINE (58)

    /** tokenize.e:957				return TRUE*/
    // SubProg scan_identifier pc: 346 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var whichhex_65017

// Exiting block BLOCK: IF-

// Exiting block BLOCK: scan_identifier

// block var state_65003
    DeRef(_state_65003);

// block var nextch_65004

// block var startpos_65005

// block var textdata_65006
    DeRef(_textdata_65006);
    DeRef(_32328);
    _32328 = NOVALUE;
    DeRef(_32347);
    _32347 = NOVALUE;
    DeRef(_32345);
    _32345 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 350 op: NOP1 (159)
L3: // addr: 351 pc: 350 sub: 65001 op: 159
    // SubProg scan_identifier pc: 351 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var whichhex_65017
    // SubProg scan_identifier pc: 353 op: NOP1 (159)
L2: // addr: 354 pc: 353 sub: 65001 op: 159
    // SubProg scan_identifier pc: 354 op: STARTLINE (58)

    /** tokenize.e:961		Token[TTYPE] = T_IDENTIFIER*/
    // SubProg scan_identifier pc: 356 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 358 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);
    // SubProg scan_identifier pc: 362 op: STARTLINE (58)

    /** tokenize.e:962		Token[TDATA] = ""*/
    // SubProg scan_identifier pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 366 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg scan_identifier pc: 370 op: STARTLINE (58)

    /** tokenize.e:964		while Identifier_Char(Look) do*/
    // SubProg scan_identifier pc: 372 op: NOP2 (110)
    // SubProg scan_identifier pc: 374 op: NOPWHILE (158)
LC: // addr: 375 pc: 374 sub: 65001 op: 158
    // SubProg scan_identifier pc: 375 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 377 op: PROC (27)
    _32359 = _71Identifier_Char(_71Look_64329);
    // SubProg scan_identifier pc: 381 op: WHILE (47)
    if (_32359 <= 0) {
        if (_32359 == 0) {
            DeRef(_32359);
            _32359 = NOVALUE;
            goto LD; // [381] 412
        }
        else {
            if (!IS_ATOM_INT(_32359) && DBL_PTR(_32359)->dbl == 0.0){
                DeRef(_32359);
                _32359 = NOVALUE;
                goto LD; // [381] 412
            }
            DeRef(_32359);
            _32359 = NOVALUE;
        }
    }
    DeRef(_32359);
    _32359 = NOVALUE;
    // SubProg scan_identifier pc: 384 op: STARTLINE (58)

    /** tokenize.e:965			Token[TDATA] &= Look*/
    // SubProg scan_identifier pc: 386 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 388 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 390 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32360 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 394 op: CONCAT (15)
    if (IS_SEQUENCE(_32360) && IS_ATOM(_71Look_64329)) {
        Append(&_32361, _32360, _71Look_64329);
    }
    else if (IS_ATOM(_32360) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32361, _32360, _71Look_64329);
        _32360 = NOVALUE;
    }
    _32360 = NOVALUE;
    // SubProg scan_identifier pc: 398 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32361;
    if( _1 != _32361 ){
        DeRef(_1);
    }
    _32361 = NOVALUE;
    // SubProg scan_identifier pc: 402 op: STARTLINE (58)

    /** tokenize.e:966			scan_char(state)*/
    // SubProg scan_identifier pc: 404 op: PROC (27)
    Ref(_state_65003);
    _71scan_char(_state_65003);
    // SubProg scan_identifier pc: 407 op: STARTLINE (58)

    /** tokenize.e:967		end while*/
    // SubProg scan_identifier pc: 409 op: ENDWHILE (22)
    goto LC; // [409] 375
    // SubProg scan_identifier pc: 411 op: NOP1 (159)
LD: // addr: 412 pc: 411 sub: 65001 op: 159
    // SubProg scan_identifier pc: 412 op: STARTLINE (58)

    /** tokenize.e:969		if find(Token[TDATA],keywords) then*/
    // SubProg scan_identifier pc: 414 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 416 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32362 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 422 op: FIND_FROM (176)
    _32363 = find_from(_32362, _72keywords_64150, 1);
    _32362 = NOVALUE;
    // SubProg scan_identifier pc: 427 op: IF (20)
    if (_32363 == 0)
    {
        _32363 = NOVALUE;
        goto LE; // [427] 476
    }
    else{
        _32363 = NOVALUE;
    }
    // SubProg scan_identifier pc: 430 op: STARTLINE (58)

    /** tokenize.e:970			if eumem:ram_space[state][ID_KEYWORD] then*/
    // SubProg scan_identifier pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 434 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65003)){
        _32364 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65003)->dbl));
    }
    else{
        _32364 = (object)*(((s1_ptr)_2)->base + _state_65003);
    }
    // SubProg scan_identifier pc: 438 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32364);
    _32365 = (object)*(((s1_ptr)_2)->base + 6);
    _32364 = NOVALUE;
    // SubProg scan_identifier pc: 442 op: IF (20)
    if (_32365 == 0) {
        _32365 = NOVALUE;
        goto LF; // [442] 454
    }
    else {
        if (!IS_ATOM_INT(_32365) && DBL_PTR(_32365)->dbl == 0.0){
            _32365 = NOVALUE;
            goto LF; // [442] 454
        }
        _32365 = NOVALUE;
    }
    _32365 = NOVALUE;
    // SubProg scan_identifier pc: 445 op: STARTLINE (58)

    /** tokenize.e:971				Token[TTYPE] = T_KEYWORD*/
    // SubProg scan_identifier pc: 447 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 449 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
    // SubProg scan_identifier pc: 453 op: NOP1 (159)
LF: // addr: 454 pc: 453 sub: 65001 op: 159
    // SubProg scan_identifier pc: 454 op: STARTLINE (58)

    /** tokenize.e:973			if equal(Token[TDATA],"include") then*/
    // SubProg scan_identifier pc: 456 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 458 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32366 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 462 op: EQUAL (153)
    if (_32366 == _25814)
    _32367 = 1;
    else if (IS_ATOM_INT(_32366) && IS_ATOM_INT(_25814))
    _32367 = 0;
    else
    _32367 = (compare(_32366, _25814) == 0);
    _32366 = NOVALUE;
    // SubProg scan_identifier pc: 466 op: IF (20)
    if (_32367 == 0)
    {
        _32367 = NOVALUE;
        goto L10; // [466] 475
    }
    else{
        _32367 = NOVALUE;
    }
    // SubProg scan_identifier pc: 469 op: STARTLINE (58)

    /** tokenize.e:974				INCLUDE_NEXT = TRUE*/
    // SubProg scan_identifier pc: 471 op: ASSIGN_I (113)
    _71INCLUDE_NEXT_65000 = 1;
    // SubProg scan_identifier pc: 474 op: NOP1 (159)
L10: // addr: 475 pc: 474 sub: 65001 op: 159
    // SubProg scan_identifier pc: 475 op: NOP1 (159)
LE: // addr: 476 pc: 475 sub: 65001 op: 159
    // SubProg scan_identifier pc: 476 op: STARTLINE (58)

    /** tokenize.e:978		if find(Token[TDATA],builtins) and eumem:ram_space[state][ID_BUILTIN] then*/
    // SubProg scan_identifier pc: 478 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 480 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32368 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 484 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 486 op: FIND_FROM (176)
    _32369 = find_from(_32368, _72builtins_64160, 1);
    _32368 = NOVALUE;
    // SubProg scan_identifier pc: 491 op: SC1_AND_IF (146)
    if (_32369 == 0) {
        goto L11; // [491] 518
    }
    // SubProg scan_identifier pc: 495 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 497 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65003)){
        _32371 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65003)->dbl));
    }
    else{
        _32371 = (object)*(((s1_ptr)_2)->base + _state_65003);
    }
    // SubProg scan_identifier pc: 501 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32371);
    _32372 = (object)*(((s1_ptr)_2)->base + 5);
    _32371 = NOVALUE;
    // SubProg scan_identifier pc: 505 op: NOP1 (159)
    // SubProg scan_identifier pc: 506 op: IF (20)
    if (_32372 == 0) {
        _32372 = NOVALUE;
        goto L11; // [506] 518
    }
    else {
        if (!IS_ATOM_INT(_32372) && DBL_PTR(_32372)->dbl == 0.0){
            _32372 = NOVALUE;
            goto L11; // [506] 518
        }
        _32372 = NOVALUE;
    }
    _32372 = NOVALUE;
    // SubProg scan_identifier pc: 509 op: STARTLINE (58)

    /** tokenize.e:979			Token[TTYPE] = T_BUILTIN*/
    // SubProg scan_identifier pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 513 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 41;
    DeRef(_1);
    // SubProg scan_identifier pc: 517 op: NOP1 (159)
L11: // addr: 518 pc: 517 sub: 65001 op: 159
    // SubProg scan_identifier pc: 518 op: STARTLINE (58)

    /** tokenize.e:982		return TRUE*/
    // SubProg scan_identifier pc: 520 op: RETURNF (28)

// Exiting block BLOCK: scan_identifier

// block var state_65003
    DeRef(_state_65003);

// block var nextch_65004

// block var startpos_65005

// block var textdata_65006
    DeRef(_textdata_65006);
    DeRef(_32328);
    _32328 = NOVALUE;
    DeRef(_32347);
    _32347 = NOVALUE;
    DeRef(_32345);
    _32345 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 524 op: BADRETURNF (43)
    ;
}


object _71scan_include(object _state_65073)
{
    object _32381 = NOVALUE; // 65086 32381
    object _32380 = NOVALUE; // 65085 32380
    object _32379 = NOVALUE; // 65084 32379
    object _32378 = NOVALUE; // 65082 32378
    object _32377 = NOVALUE; // 65081 32377
    object _32376 = NOVALUE; // 65080 32376
// skipping _32375  name type: 0
    object _32374 = NOVALUE; // 65077 32374
// skipping _32373  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_include pc: 1 op: STARTLINE (58)

    /** tokenize.e:986		if not INCLUDE_NEXT then*/
    // SubProg scan_include pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 5 op: NOT_IFW (108)
    if (_71INCLUDE_NEXT_65000 != 0)
    goto L1; // [5] 15
    // SubProg scan_include pc: 8 op: STARTLINE (58)

    /** tokenize.e:987			return FALSE*/
    // SubProg scan_include pc: 10 op: RETURNF (28)

// Exiting block BLOCK: scan_include

// block var state_65073
    DeRef(_state_65073);
    return 0;
    // SubProg scan_include pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 65071 op: 159
    // SubProg scan_include pc: 15 op: STARTLINE (58)

    /** tokenize.e:990		INCLUDE_NEXT = FALSE*/
    // SubProg scan_include pc: 17 op: ASSIGN_I (113)
    _71INCLUDE_NEXT_65000 = 0;
    // SubProg scan_include pc: 20 op: STARTLINE (58)

    /** tokenize.e:992		Token[TTYPE] = T_IDENTIFIER*/
    // SubProg scan_include pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 24 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);
    // SubProg scan_include pc: 28 op: STARTLINE (58)

    /** tokenize.e:993		Token[TDATA] = ""*/
    // SubProg scan_include pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 32 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg scan_include pc: 36 op: STARTLINE (58)

    /** tokenize.e:995		if not scan_string(state) then*/
    // SubProg scan_include pc: 38 op: PROC (27)
    Ref(_state_65073);
    _32374 = _71scan_string(_state_65073);
    // SubProg scan_include pc: 42 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32374)) {
        if (_32374 != 0){
            DeRef(_32374);
            _32374 = NOVALUE;
            goto L2; // [42] 104
        }
    }
    else {
        if (DBL_PTR(_32374)->dbl != 0.0){
            DeRef(_32374);
            _32374 = NOVALUE;
            goto L2; // [42] 104
        }
    }
    DeRef(_32374);
    _32374 = NOVALUE;
    // SubProg scan_include pc: 45 op: STARTLINE (58)

    /** tokenize.e:997			while not White_Char(Look) and Look != EOF do*/
    // SubProg scan_include pc: 47 op: NOP2 (110)
    // SubProg scan_include pc: 49 op: NOPWHILE (158)
L3: // addr: 50 pc: 49 sub: 65071 op: 158
    // SubProg scan_include pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 52 op: PROC (27)
    _32376 = _71White_Char(_71Look_64329);
    // SubProg scan_include pc: 56 op: NOT (7)
    if (IS_ATOM_INT(_32376)) {
        _32377 = (_32376 == 0);
    }
    else {
        _32377 = unary_op(NOT, _32376);
    }
    DeRef(_32376);
    _32376 = NOVALUE;
    // SubProg scan_include pc: 59 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32377)) {
        if (_32377 == 0) {
            goto L4; // [59] 103
        }
    }
    else {
        if (DBL_PTR(_32377)->dbl == 0.0) {
            goto L4; // [59] 103
        }
    }
    // SubProg scan_include pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 67 op: NOTEQ (4)
    _32379 = (_71Look_64329 != -1);
    // SubProg scan_include pc: 71 op: NOP1 (159)
    // SubProg scan_include pc: 72 op: WHILE (47)
    if (_32379 == 0)
    {
        DeRef(_32379);
        _32379 = NOVALUE;
        goto L4; // [72] 103
    }
    else{
        DeRef(_32379);
        _32379 = NOVALUE;
    }
    // SubProg scan_include pc: 75 op: STARTLINE (58)

    /** tokenize.e:998				Token[TDATA] &= Look*/
    // SubProg scan_include pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 81 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32380 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_include pc: 85 op: CONCAT (15)
    if (IS_SEQUENCE(_32380) && IS_ATOM(_71Look_64329)) {
        Append(&_32381, _32380, _71Look_64329);
    }
    else if (IS_ATOM(_32380) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32381, _32380, _71Look_64329);
        _32380 = NOVALUE;
    }
    _32380 = NOVALUE;
    // SubProg scan_include pc: 89 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32381;
    if( _1 != _32381 ){
        DeRef(_1);
    }
    _32381 = NOVALUE;
    // SubProg scan_include pc: 93 op: STARTLINE (58)

    /** tokenize.e:999				scan_char(state)*/
    // SubProg scan_include pc: 95 op: PROC (27)
    Ref(_state_65073);
    _71scan_char(_state_65073);
    // SubProg scan_include pc: 98 op: STARTLINE (58)

    /** tokenize.e:1000			end while*/
    // SubProg scan_include pc: 100 op: ENDWHILE (22)
    goto L3; // [100] 50
    // SubProg scan_include pc: 102 op: NOP1 (159)
L4: // addr: 103 pc: 102 sub: 65071 op: 159
    // SubProg scan_include pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 65071 op: 159
    // SubProg scan_include pc: 104 op: STARTLINE (58)

    /** tokenize.e:1003		return TRUE*/
    // SubProg scan_include pc: 106 op: RETURNF (28)

// Exiting block BLOCK: scan_include

// block var state_65073
    DeRef(_state_65073);
    DeRef(_32377);
    _32377 = NOVALUE;
    return 1;
    // SubProg scan_include pc: 110 op: BADRETURNF (43)
    ;
}


void _71next_token(object _state_65089)
{
// skipping _32470  name type: 0
    object _32469 = NOVALUE; // 65205 32469
    object _32468 = NOVALUE; // 65204 32468
    object _32467 = NOVALUE; // 65203 32467
    object _32466 = NOVALUE; // 65202 32466
    object _32465 = NOVALUE; // 65201 32465
    object _32464 = NOVALUE; // 65200 32464
    object _32463 = NOVALUE; // 65198 32463
    object _32462 = NOVALUE; // 65197 32462
    object _32461 = NOVALUE; // 65196 32461
    object _32460 = NOVALUE; // 65195 32460
    object _32459 = NOVALUE; // 65193 32459
    object _32458 = NOVALUE; // 65191 32458
    object _32457 = NOVALUE; // 65189 32457
    object _32456 = NOVALUE; // 65187 32456
    object _32455 = NOVALUE; // 65185 32455
    object _32454 = NOVALUE; // 65183 32454
    object _32453 = NOVALUE; // 65181 32453
    object _32452 = NOVALUE; // 65180 32452
    object _32451 = NOVALUE; // 65179 32451
    object _32450 = NOVALUE; // 65178 32450
    object _32449 = NOVALUE; // 65177 32449
    object _32448 = NOVALUE; // 65175 32448
    object _32447 = NOVALUE; // 65174 32447
    object _32446 = NOVALUE; // 65173 32446
    object _32445 = NOVALUE; // 65171 32445
    object _32444 = NOVALUE; // 65170 32444
// skipping _32443  name type: 0
    object _32441 = NOVALUE; // 65166 32441
    object _32440 = NOVALUE; // 65165 32440
    object _32439 = NOVALUE; // 65164 32439
    object _32438 = NOVALUE; // 65163 32438
    object _32437 = NOVALUE; // 65161 32437
    object _32436 = NOVALUE; // 65160 32436
    object _32435 = NOVALUE; // 65159 32435
    object _32433 = NOVALUE; // 65156 32433
    object _32432 = NOVALUE; // 65155 32432
    object _32431 = NOVALUE; // 65154 32431
    object _32429 = NOVALUE; // 65152 32429
    object _32428 = NOVALUE; // 65151 32428
    object _32427 = NOVALUE; // 65149 32427
    object _32426 = NOVALUE; // 65148 32426
    object _32425 = NOVALUE; // 65146 32425
    object _32424 = NOVALUE; // 65145 32424
    object _32423 = NOVALUE; // 65143 32423
    object _32422 = NOVALUE; // 65141 32422
    object _32421 = NOVALUE; // 65140 32421
// skipping _32420  name type: 0
// skipping _32419  name type: 0
    object _32418 = NOVALUE; // 65136 32418
    object _32417 = NOVALUE; // 65134 32417
    object _32416 = NOVALUE; // 65133 32416
    object _32415 = NOVALUE; // 65132 32415
    object _32414 = NOVALUE; // 65131 32414
    object _32413 = NOVALUE; // 65130 32413
    object _32412 = NOVALUE; // 65129 32412
    object _32411 = NOVALUE; // 65128 32411
    object _32410 = NOVALUE; // 65127 32410
    object _32409 = NOVALUE; // 65126 32409
// skipping _32408  name type: 0
// skipping _32407  name type: 0
    object _32406 = NOVALUE; // 65122 32406
// skipping _32405  name type: 0
// skipping _32404  name type: 0
    object _32403 = NOVALUE; // 65118 32403
    object _32402 = NOVALUE; // 65116 32402
    object _32401 = NOVALUE; // 65115 32401
    object _32400 = NOVALUE; // 65114 32400
    object _32399 = NOVALUE; // 65113 32399
    object _32398 = NOVALUE; // 65112 32398
    object _32397 = NOVALUE; // 65110 32397
    object _32396 = NOVALUE; // 65109 32396
    object _32395 = NOVALUE; // 65107 32395
    object _32394 = NOVALUE; // 65106 32394
    object _32393 = NOVALUE; // 65105 32393
    object _32392 = NOVALUE; // 65103 32392
    object _32391 = NOVALUE; // 65101 32391
    object _32390 = NOVALUE; // 65100 32390
    object _32389 = NOVALUE; // 65099 32389
    object _32388 = NOVALUE; // 65098 32388
    object _32387 = NOVALUE; // 65097 32387
    object _32386 = NOVALUE; // 65095 32386
    object _32385 = NOVALUE; // 65094 32385
    object _32384 = NOVALUE; // 65093 32384
    object _32383 = NOVALUE; // 65092 32383
    object _32382 = NOVALUE; // 65091 32382
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg next_token pc: 1 op: STARTLINE (58)

    /** tokenize.e:1007		Token[TLNUM] = LNum*/
    // SubProg next_token pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 7 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71LNum_64327;
    DeRef(_1);
    // SubProg next_token pc: 11 op: STARTLINE (58)

    /** tokenize.e:1008		Token[TLPOS] = LPos*/
    // SubProg next_token pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 17 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71LPos_64328;
    DeRef(_1);
    // SubProg next_token pc: 21 op: STARTLINE (58)

    /** tokenize.e:1009		Token[TFORM] = -1*/
    // SubProg next_token pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 25 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    // SubProg next_token pc: 29 op: STARTLINE (58)

    /** tokenize.e:1011		if Look = EOL and not eumem:ram_space[state][IGNORE_NEWLINES] then*/
    // SubProg next_token pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 33 op: EQUALS (3)
    _32382 = (_71Look_64329 == 10);
    // SubProg next_token pc: 37 op: SC1_AND_IF (146)
    if (_32382 == 0) {
        goto L1; // [37] 85
    }
    // SubProg next_token pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 43 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65089)){
        _32384 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65089)->dbl));
    }
    else{
        _32384 = (object)*(((s1_ptr)_2)->base + _state_65089);
    }
    // SubProg next_token pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32384);
    _32385 = (object)*(((s1_ptr)_2)->base + 1);
    _32384 = NOVALUE;
    // SubProg next_token pc: 51 op: NOT (7)
    if (IS_ATOM_INT(_32385)) {
        _32386 = (_32385 == 0);
    }
    else {
        _32386 = unary_op(NOT, _32385);
    }
    _32385 = NOVALUE;
    // SubProg next_token pc: 54 op: NOP1 (159)
    // SubProg next_token pc: 55 op: IF (20)
    if (_32386 == 0) {
        DeRef(_32386);
        _32386 = NOVALUE;
        goto L1; // [55] 85
    }
    else {
        if (!IS_ATOM_INT(_32386) && DBL_PTR(_32386)->dbl == 0.0){
            DeRef(_32386);
            _32386 = NOVALUE;
            goto L1; // [55] 85
        }
        DeRef(_32386);
        _32386 = NOVALUE;
    }
    DeRef(_32386);
    _32386 = NOVALUE;
    // SubProg next_token pc: 58 op: STARTLINE (58)

    /** tokenize.e:1013			Token[TDATA] = ""*/
    // SubProg next_token pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 62 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg next_token pc: 66 op: STARTLINE (58)

    /** tokenize.e:1014			Token[TTYPE] = T_NEWLINE*/
    // SubProg next_token pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 70 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    // SubProg next_token pc: 74 op: STARTLINE (58)

    /** tokenize.e:1016			scan_char(state) -- advance past this newline*/
    // SubProg next_token pc: 76 op: PROC (27)
    Ref(_state_65089);
    _71scan_char(_state_65089);
    // SubProg next_token pc: 79 op: STARTLINE (58)

    /** tokenize.e:1018			return*/
    // SubProg next_token pc: 81 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65089
    DeRef(_state_65089);
    DeRef(_32382);
    _32382 = NOVALUE;
    return;
    // SubProg next_token pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 65087 op: 159
    // SubProg next_token pc: 85 op: STARTLINE (58)

    /** tokenize.e:1021		if not eumem:ram_space[state][DELETE_WHITE] and scankeep_white(state) then*/
    // SubProg next_token pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65089)){
        _32387 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65089)->dbl));
    }
    else{
        _32387 = (object)*(((s1_ptr)_2)->base + _state_65089);
    }
    // SubProg next_token pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32387);
    _32388 = (object)*(((s1_ptr)_2)->base + 4);
    _32387 = NOVALUE;
    // SubProg next_token pc: 97 op: NOT (7)
    if (IS_ATOM_INT(_32388)) {
        _32389 = (_32388 == 0);
    }
    else {
        _32389 = unary_op(NOT, _32388);
    }
    _32388 = NOVALUE;
    // SubProg next_token pc: 100 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32389)) {
        if (_32389 == 0) {
            goto L2; // [100] 118
        }
    }
    else {
        if (DBL_PTR(_32389)->dbl == 0.0) {
            goto L2; // [100] 118
        }
    }
    // SubProg next_token pc: 104 op: PROC (27)
    Ref(_state_65089);
    _32391 = _71scankeep_white(_state_65089);
    // SubProg next_token pc: 108 op: NOP1 (159)
    // SubProg next_token pc: 109 op: IF (20)
    if (_32391 == 0) {
        DeRef(_32391);
        _32391 = NOVALUE;
        goto L2; // [109] 118
    }
    else {
        if (!IS_ATOM_INT(_32391) && DBL_PTR(_32391)->dbl == 0.0){
            DeRef(_32391);
            _32391 = NOVALUE;
            goto L2; // [109] 118
        }
        DeRef(_32391);
        _32391 = NOVALUE;
    }
    DeRef(_32391);
    _32391 = NOVALUE;
    // SubProg next_token pc: 112 op: STARTLINE (58)

    /** tokenize.e:1023			return*/
    // SubProg next_token pc: 114 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65089
    DeRef(_state_65089);
    DeRef(_32389);
    _32389 = NOVALUE;
    DeRef(_32382);
    _32382 = NOVALUE;
    return;
    // SubProg next_token pc: 117 op: NOP1 (159)
L2: // addr: 118 pc: 117 sub: 65087 op: 159
    // SubProg next_token pc: 118 op: STARTLINE (58)

    /** tokenize.e:1027		if scan_white(state) then*/
    // SubProg next_token pc: 120 op: PROC (27)
    Ref(_state_65089);
    _32392 = _71scan_white(_state_65089);
    // SubProg next_token pc: 124 op: IF (20)
    if (_32392 == 0) {
        DeRef(_32392);
        _32392 = NOVALUE;
        goto L3; // [124] 155
    }
    else {
        if (!IS_ATOM_INT(_32392) && DBL_PTR(_32392)->dbl == 0.0){
            DeRef(_32392);
            _32392 = NOVALUE;
            goto L3; // [124] 155
        }
        DeRef(_32392);
        _32392 = NOVALUE;
    }
    DeRef(_32392);
    _32392 = NOVALUE;
    // SubProg next_token pc: 127 op: STARTLINE (58)

    /** tokenize.e:1028			if eumem:ram_space[state][IGNORE_NEWLINES] then next_token(state) end if*/
    // SubProg next_token pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 131 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65089)){
        _32393 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65089)->dbl));
    }
    else{
        _32393 = (object)*(((s1_ptr)_2)->base + _state_65089);
    }
    // SubProg next_token pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32393);
    _32394 = (object)*(((s1_ptr)_2)->base + 1);
    _32393 = NOVALUE;
    // SubProg next_token pc: 139 op: IF (20)
    if (_32394 == 0) {
        _32394 = NOVALUE;
        goto L4; // [139] 149
    }
    else {
        if (!IS_ATOM_INT(_32394) && DBL_PTR(_32394)->dbl == 0.0){
            _32394 = NOVALUE;
            goto L4; // [139] 149
        }
        _32394 = NOVALUE;
    }
    _32394 = NOVALUE;
    // SubProg next_token pc: 142 op: ASSIGN (18)
    Ref(_state_65089);
    DeRef(_32395);
    _32395 = _state_65089;
    // SubProg next_token pc: 145 op: PROC (27)
    _71next_token(_32395);
    _32395 = NOVALUE;
    // SubProg next_token pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 65087 op: 159
    // SubProg next_token pc: 149 op: STARTLINE (58)

    /** tokenize.e:1029			return*/
    // SubProg next_token pc: 151 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65089
    DeRef(_state_65089);
    DeRef(_32389);
    _32389 = NOVALUE;
    DeRef(_32382);
    _32382 = NOVALUE;
    return;
    // SubProg next_token pc: 154 op: NOP1 (159)
L3: // addr: 155 pc: 154 sub: 65087 op: 159
    // SubProg next_token pc: 155 op: STARTLINE (58)

    /** tokenize.e:1032		if scan_include(state) then*/
    // SubProg next_token pc: 157 op: PROC (27)
    Ref(_state_65089);
    _32396 = _71scan_include(_state_65089);
    // SubProg next_token pc: 161 op: IF (20)
    if (_32396 == 0) {
        DeRef(_32396);
        _32396 = NOVALUE;
        goto L5; // [161] 170
    }
    else {
        if (!IS_ATOM_INT(_32396) && DBL_PTR(_32396)->dbl == 0.0){
            DeRef(_32396);
            _32396 = NOVALUE;
            goto L5; // [161] 170
        }
        DeRef(_32396);
        _32396 = NOVALUE;
    }
    DeRef(_32396);
    _32396 = NOVALUE;
    // SubProg next_token pc: 164 op: STARTLINE (58)

    /** tokenize.e:1033			return*/
    // SubProg next_token pc: 166 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65089
    DeRef(_state_65089);
    DeRef(_32389);
    _32389 = NOVALUE;
    DeRef(_32382);
    _32382 = NOVALUE;
    return;
    // SubProg next_token pc: 169 op: NOP1 (159)
L5: // addr: 170 pc: 169 sub: 65087 op: 159
    // SubProg next_token pc: 170 op: STARTLINE (58)

    /** tokenize.e:1036		Token[TTYPE] = find(Look, Delimiters)*/
    // SubProg next_token pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 178 op: FIND_FROM (176)
    _32397 = find_from(_71Look_64329, _71Delimiters_64314, 1);
    // SubProg next_token pc: 183 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32397;
    if( _1 != _32397 ){
        DeRef(_1);
    }
    _32397 = NOVALUE;
    // SubProg next_token pc: 187 op: STARTLINE (58)

    /** tokenize.e:1038		if Token[TTYPE] then*/
    // SubProg next_token pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 191 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32398 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 195 op: IF (20)
    if (_32398 == 0) {
        _32398 = NOVALUE;
        goto L6; // [195] 711
    }
    else {
        if (!IS_ATOM_INT(_32398) && DBL_PTR(_32398)->dbl == 0.0){
            _32398 = NOVALUE;
            goto L6; // [195] 711
        }
        _32398 = NOVALUE;
    }
    _32398 = NOVALUE;
    // SubProg next_token pc: 198 op: STARTLINE (58)

    /** tokenize.e:1040			Token[TTYPE] += T_DELIMITER - 1*/
    // SubProg next_token pc: 200 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 202 op: MINUS (10)
    _32399 = 18;
    // SubProg next_token pc: 206 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32400 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 210 op: PLUS (11)
    if (IS_ATOM_INT(_32400)) {
        _32401 = _32400 + 18;
        if ((object)((uintptr_t)_32401 + (uintptr_t)HIGH_BITS) >= 0){
            _32401 = NewDouble((eudouble)_32401);
        }
    }
    else {
        _32401 = binary_op(PLUS, _32400, 18);
    }
    _32400 = NOVALUE;
    _32399 = NOVALUE;
    // SubProg next_token pc: 214 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32401;
    if( _1 != _32401 ){
        DeRef(_1);
    }
    _32401 = NOVALUE;
    // SubProg next_token pc: 218 op: STARTLINE (58)

    /** tokenize.e:1041			Token[TDATA] = { Look }*/
    // SubProg next_token pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 224 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _71Look_64329;
    _32402 = MAKE_SEQ(_1);
    // SubProg next_token pc: 228 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32402;
    if( _1 != _32402 ){
        DeRef(_1);
    }
    _32402 = NOVALUE;
    // SubProg next_token pc: 232 op: STARTLINE (58)

    /** tokenize.e:1043			scan_char(state)*/
    // SubProg next_token pc: 234 op: PROC (27)
    Ref(_state_65089);
    _71scan_char(_state_65089);
    // SubProg next_token pc: 237 op: STARTLINE (58)

    /** tokenize.e:1045			if (Token[TTYPE] = T_LBRACKET) then*/
    // SubProg next_token pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 241 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32403 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 245 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32403, 32)){
        _32403 = NOVALUE;
        goto L7; // [245] 260
    }
    _32403 = NOVALUE;
    // SubProg next_token pc: 249 op: STARTLINE (58)

    /** tokenize.e:1047				SUBSCRIPT += 1 -- push subscript stack counter*/
    // SubProg next_token pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 253 op: PLUS1_I (117)
    _71SUBSCRIPT_64816 = _71SUBSCRIPT_64816 + 1;
    // SubProg next_token pc: 257 op: ELSE (23)
    goto L8; // [257] 908
    // SubProg next_token pc: 259 op: NOP1 (159)
L7: // addr: 260 pc: 259 sub: 65087 op: 159
    // SubProg next_token pc: 260 op: STARTLINE (58)

    /** tokenize.e:1049			elsif (Token[TTYPE] = T_RBRACKET) then*/
    // SubProg next_token pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 264 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32406 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 268 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32406, 33)){
        _32406 = NOVALUE;
        goto L9; // [268] 283
    }
    _32406 = NOVALUE;
    // SubProg next_token pc: 272 op: STARTLINE (58)

    /** tokenize.e:1051				SUBSCRIPT -= 1 -- pop subscript stack counter*/
    // SubProg next_token pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 276 op: MINUS_I (116)
    _71SUBSCRIPT_64816 = _71SUBSCRIPT_64816 - 1;
    // SubProg next_token pc: 280 op: ELSE (23)
    goto L8; // [280] 908
    // SubProg next_token pc: 282 op: NOP1 (159)
L9: // addr: 283 pc: 282 sub: 65087 op: 159
    // SubProg next_token pc: 283 op: STARTLINE (58)

    /** tokenize.e:1053			elsif (Look = '=') and (Token[TTYPE] <= T_SINGLE_OPS) then*/
    // SubProg next_token pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 287 op: EQUALS (3)
    _32409 = (_71Look_64329 == 61);
    // SubProg next_token pc: 291 op: SC1_AND_IF (146)
    if (_32409 == 0) {
        goto LA; // [291] 355
    }
    // SubProg next_token pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 297 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32411 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 301 op: LESSEQ (5)
    if (IS_ATOM_INT(_32411)) {
        _32412 = (_32411 <= 27);
    }
    else {
        _32412 = binary_op(LESSEQ, _32411, 27);
    }
    _32411 = NOVALUE;
    // SubProg next_token pc: 305 op: NOP1 (159)
    // SubProg next_token pc: 306 op: IF (20)
    if (_32412 == 0) {
        DeRef(_32412);
        _32412 = NOVALUE;
        goto LA; // [306] 355
    }
    else {
        if (!IS_ATOM_INT(_32412) && DBL_PTR(_32412)->dbl == 0.0){
            DeRef(_32412);
            _32412 = NOVALUE;
            goto LA; // [306] 355
        }
        DeRef(_32412);
        _32412 = NOVALUE;
    }
    DeRef(_32412);
    _32412 = NOVALUE;
    // SubProg next_token pc: 309 op: STARTLINE (58)

    /** tokenize.e:1056				Token[TTYPE] -= T_DOUBLE_OPS - 3*/
    // SubProg next_token pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 313 op: MINUS (10)
    _32413 = 8;
    // SubProg next_token pc: 317 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32414 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 321 op: MINUS (10)
    if (IS_ATOM_INT(_32414)) {
        _32415 = _32414 - 8;
        if ((object)((uintptr_t)_32415 +(uintptr_t) HIGH_BITS) >= 0){
            _32415 = NewDouble((eudouble)_32415);
        }
    }
    else {
        _32415 = binary_op(MINUS, _32414, 8);
    }
    _32414 = NOVALUE;
    _32413 = NOVALUE;
    // SubProg next_token pc: 325 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32415;
    if( _1 != _32415 ){
        DeRef(_1);
    }
    _32415 = NOVALUE;
    // SubProg next_token pc: 329 op: STARTLINE (58)

    /** tokenize.e:1057				Token[TDATA] &= Look*/
    // SubProg next_token pc: 331 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 335 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32416 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 339 op: CONCAT (15)
    if (IS_SEQUENCE(_32416) && IS_ATOM(_71Look_64329)) {
        Append(&_32417, _32416, _71Look_64329);
    }
    else if (IS_ATOM(_32416) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32417, _32416, _71Look_64329);
        _32416 = NOVALUE;
    }
    _32416 = NOVALUE;
    // SubProg next_token pc: 343 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32417;
    if( _1 != _32417 ){
        DeRef(_1);
    }
    _32417 = NOVALUE;
    // SubProg next_token pc: 347 op: STARTLINE (58)

    /** tokenize.e:1059				scan_char(state)*/
    // SubProg next_token pc: 349 op: PROC (27)
    Ref(_state_65089);
    _71scan_char(_state_65089);
    // SubProg next_token pc: 352 op: ELSE (23)
    goto L8; // [352] 908
    // SubProg next_token pc: 354 op: NOP1 (159)
LA: // addr: 355 pc: 354 sub: 65087 op: 159
    // SubProg next_token pc: 355 op: STARTLINE (58)

    /** tokenize.e:1061			elsif (Token[TTYPE] = T_PERIOD) then*/
    // SubProg next_token pc: 357 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 359 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32418 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 363 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32418, 36)){
        _32418 = NOVALUE;
        goto LB; // [363] 552
    }
    _32418 = NOVALUE;
    // SubProg next_token pc: 367 op: STARTLINE (58)

    /** tokenize.e:1063				if (Look = '.') then*/
    // SubProg next_token pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 371 op: EQUALS_IFW_I (121)
    if (_71Look_64329 != 46)
    goto LC; // [371] 409
    // SubProg next_token pc: 375 op: STARTLINE (58)

    /** tokenize.e:1065					Token[TTYPE] = T_SLICE*/
    // SubProg next_token pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 379 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 39;
    DeRef(_1);
    // SubProg next_token pc: 383 op: STARTLINE (58)

    /** tokenize.e:1066					Token[TDATA] &= Look*/
    // SubProg next_token pc: 385 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 389 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32421 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 393 op: CONCAT (15)
    if (IS_SEQUENCE(_32421) && IS_ATOM(_71Look_64329)) {
        Append(&_32422, _32421, _71Look_64329);
    }
    else if (IS_ATOM(_32421) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32422, _32421, _71Look_64329);
        _32421 = NOVALUE;
    }
    _32421 = NOVALUE;
    // SubProg next_token pc: 397 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32422;
    if( _1 != _32422 ){
        DeRef(_1);
    }
    _32422 = NOVALUE;
    // SubProg next_token pc: 401 op: STARTLINE (58)

    /** tokenize.e:1068					scan_char(state)*/
    // SubProg next_token pc: 403 op: PROC (27)
    Ref(_state_65089);
    _71scan_char(_state_65089);
    // SubProg next_token pc: 406 op: ELSE (23)
    goto L8; // [406] 908
    // SubProg next_token pc: 408 op: NOP1 (159)
LC: // addr: 409 pc: 408 sub: 65087 op: 159
    // SubProg next_token pc: 409 op: STARTLINE (58)

    /** tokenize.e:1071					Token[TTYPE] = T_NUMBER*/
    // SubProg next_token pc: 411 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 413 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg next_token pc: 417 op: STARTLINE (58)

    /** tokenize.e:1072					Token[TDATA] = scan_fraction(0, state)*/
    // SubProg next_token pc: 419 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 421 op: PROC (27)
    Ref(_state_65089);
    _32423 = _71scan_fraction(0, _state_65089);
    // SubProg next_token pc: 426 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32423;
    if( _1 != _32423 ){
        DeRef(_1);
    }
    _32423 = NOVALUE;
    // SubProg next_token pc: 430 op: STARTLINE (58)

    /** tokenize.e:1073					Token[TFORM] = TF_ATOM*/
    // SubProg next_token pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 434 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg next_token pc: 438 op: STARTLINE (58)

    /** tokenize.e:1074					if ERR then*/
    // SubProg next_token pc: 440 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 442 op: IF (20)
    if (_71ERR_64330 == 0)
    {
        goto LD; // [442] 451
    }
    else{
    }
    // SubProg next_token pc: 445 op: STARTLINE (58)

    /** tokenize.e:1075						return*/
    // SubProg next_token pc: 447 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65089
    DeRef(_state_65089);
    DeRef(_32389);
    _32389 = NOVALUE;
    DeRef(_32382);
    _32382 = NOVALUE;
    DeRef(_32409);
    _32409 = NOVALUE;
    return;
    // SubProg next_token pc: 450 op: NOP1 (159)
LD: // addr: 451 pc: 450 sub: 65087 op: 159
    // SubProg next_token pc: 451 op: STARTLINE (58)

    /** tokenize.e:1078					Token[TDATA] = scan_exponent(Token[TDATA], state)*/
    // SubProg next_token pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 455 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 457 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32424 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 461 op: PROC (27)
    Ref(_32424);
    Ref(_state_65089);
    _32425 = _71scan_exponent(_32424, _state_65089);
    _32424 = NOVALUE;
    // SubProg next_token pc: 466 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32425;
    if( _1 != _32425 ){
        DeRef(_1);
    }
    _32425 = NOVALUE;
    // SubProg next_token pc: 470 op: STARTLINE (58)

    /** tokenize.e:1080					if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg next_token pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 474 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65089)){
        _32426 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65089)->dbl));
    }
    else{
        _32426 = (object)*(((s1_ptr)_2)->base + _state_65089);
    }
    // SubProg next_token pc: 478 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32426);
    _32427 = (object)*(((s1_ptr)_2)->base + 3);
    _32426 = NOVALUE;
    // SubProg next_token pc: 482 op: IF (20)
    if (_32427 == 0) {
        _32427 = NOVALUE;
        goto L8; // [482] 908
    }
    else {
        if (!IS_ATOM_INT(_32427) && DBL_PTR(_32427)->dbl == 0.0){
            _32427 = NOVALUE;
            goto L8; // [482] 908
        }
        _32427 = NOVALUE;
    }
    _32427 = NOVALUE;
    // SubProg next_token pc: 485 op: STARTLINE (58)

    /** tokenize.e:1081						if integer(Token[TDATA]) then*/
    // SubProg next_token pc: 487 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 489 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32428 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 493 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_32428))
    _32429 = 1;
    else if (IS_ATOM_DBL(_32428))
    _32429 = IS_ATOM_INT(DoubleToInt(_32428));
    else
    _32429 = 0;
    _32428 = NOVALUE;
    // SubProg next_token pc: 496 op: IF (20)
    if (_32429 == 0)
    {
        _32429 = NOVALUE;
        goto LE; // [496] 524
    }
    else{
        _32429 = NOVALUE;
    }
    // SubProg next_token pc: 499 op: STARTLINE (58)

    /** tokenize.e:1082							Token[TDATA] = sprintf("%d",{Token[TDATA]})*/
    // SubProg next_token pc: 501 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 503 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 505 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32431 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 509 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32431);
    ((intptr_t*)_2)[1] = _32431;
    _32432 = MAKE_SEQ(_1);
    _32431 = NOVALUE;
    // SubProg next_token pc: 513 op: SPRINTF (53)
    _32433 = EPrintf(-9999999, _32430, _32432);
    DeRefDS(_32432);
    _32432 = NOVALUE;
    // SubProg next_token pc: 517 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32433;
    if( _1 != _32433 ){
        DeRef(_1);
    }
    _32433 = NOVALUE;
    // SubProg next_token pc: 521 op: ELSE (23)
    goto L8; // [521] 908
    // SubProg next_token pc: 523 op: NOP1 (159)
LE: // addr: 524 pc: 523 sub: 65087 op: 159
    // SubProg next_token pc: 524 op: STARTLINE (58)

    /** tokenize.e:1084							Token[TDATA] = sprintf("%g",{Token[TDATA]})*/
    // SubProg next_token pc: 526 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 528 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 530 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32435 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 534 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32435);
    ((intptr_t*)_2)[1] = _32435;
    _32436 = MAKE_SEQ(_1);
    _32435 = NOVALUE;
    // SubProg next_token pc: 538 op: SPRINTF (53)
    _32437 = EPrintf(-9999999, _32434, _32436);
    DeRefDS(_32436);
    _32436 = NOVALUE;
    // SubProg next_token pc: 542 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32437;
    if( _1 != _32437 ){
        DeRef(_1);
    }
    _32437 = NOVALUE;
    // SubProg next_token pc: 546 op: NOP1 (159)
    // SubProg next_token pc: 547 op: NOP1 (159)
    // SubProg next_token pc: 548 op: NOP1 (159)
    // SubProg next_token pc: 549 op: ELSE (23)
    goto L8; // [549] 908
    // SubProg next_token pc: 551 op: NOP1 (159)
LB: // addr: 552 pc: 551 sub: 65087 op: 159
    // SubProg next_token pc: 552 op: STARTLINE (58)

    /** tokenize.e:1089			elsif (Look = '-') and (Token[TTYPE] = T_MINUS) then*/
    // SubProg next_token pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 556 op: EQUALS (3)
    _32438 = (_71Look_64329 == 45);
    // SubProg next_token pc: 560 op: SC1_AND_IF (146)
    if (_32438 == 0) {
        goto LF; // [560] 673
    }
    // SubProg next_token pc: 564 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 566 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32440 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 570 op: EQUALS (3)
    if (IS_ATOM_INT(_32440)) {
        _32441 = (_32440 == 20);
    }
    else {
        _32441 = binary_op(EQUALS, _32440, 20);
    }
    _32440 = NOVALUE;
    // SubProg next_token pc: 574 op: NOP1 (159)
    // SubProg next_token pc: 575 op: IF (20)
    if (_32441 == 0) {
        DeRef(_32441);
        _32441 = NOVALUE;
        goto LF; // [575] 673
    }
    else {
        if (!IS_ATOM_INT(_32441) && DBL_PTR(_32441)->dbl == 0.0){
            DeRef(_32441);
            _32441 = NOVALUE;
            goto LF; // [575] 673
        }
        DeRef(_32441);
        _32441 = NOVALUE;
    }
    DeRef(_32441);
    _32441 = NOVALUE;
    // SubProg next_token pc: 578 op: STARTLINE (58)

    /** tokenize.e:1091				Token[TTYPE] = T_COMMENT*/
    // SubProg next_token pc: 580 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 582 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    // SubProg next_token pc: 586 op: STARTLINE (58)

    /** tokenize.e:1092				Token[TDATA] = "--"*/
    // SubProg next_token pc: 588 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 590 op: ASSIGN_SUBS (16)
    RefDS(_32442);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32442;
    DeRef(_1);
    // SubProg next_token pc: 594 op: STARTLINE (58)

    /** tokenize.e:1093				Token[TFORM] = TF_COMMENT_SINGLE*/
    // SubProg next_token pc: 596 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 598 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg next_token pc: 602 op: STARTLINE (58)

    /** tokenize.e:1095				scan_char(state)*/
    // SubProg next_token pc: 604 op: PROC (27)
    Ref(_state_65089);
    _71scan_char(_state_65089);
    // SubProg next_token pc: 607 op: STARTLINE (58)

    /** tokenize.e:1097				while (Look != EOL) do*/
    // SubProg next_token pc: 609 op: NOP2 (110)
    // SubProg next_token pc: 611 op: NOPWHILE (158)
L10: // addr: 612 pc: 611 sub: 65087 op: 158
    // SubProg next_token pc: 612 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 614 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 10)
    goto L11; // [614] 646
    // SubProg next_token pc: 618 op: STARTLINE (58)

    /** tokenize.e:1098					Token[TDATA] &= Look*/
    // SubProg next_token pc: 620 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 624 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32444 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 628 op: CONCAT (15)
    if (IS_SEQUENCE(_32444) && IS_ATOM(_71Look_64329)) {
        Append(&_32445, _32444, _71Look_64329);
    }
    else if (IS_ATOM(_32444) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32445, _32444, _71Look_64329);
        _32444 = NOVALUE;
    }
    _32444 = NOVALUE;
    // SubProg next_token pc: 632 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32445;
    if( _1 != _32445 ){
        DeRef(_1);
    }
    _32445 = NOVALUE;
    // SubProg next_token pc: 636 op: STARTLINE (58)

    /** tokenize.e:1099					scan_char(state)*/
    // SubProg next_token pc: 638 op: PROC (27)
    Ref(_state_65089);
    _71scan_char(_state_65089);
    // SubProg next_token pc: 641 op: STARTLINE (58)

    /** tokenize.e:1100				end while*/
    // SubProg next_token pc: 643 op: ENDWHILE (22)
    goto L10; // [643] 612
    // SubProg next_token pc: 645 op: NOP1 (159)
L11: // addr: 646 pc: 645 sub: 65087 op: 159
    // SubProg next_token pc: 646 op: STARTLINE (58)

    /** tokenize.e:1102				if eumem:ram_space[state][IGNORE_COMMENTS] then*/
    // SubProg next_token pc: 648 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 650 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65089)){
        _32446 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65089)->dbl));
    }
    else{
        _32446 = (object)*(((s1_ptr)_2)->base + _state_65089);
    }
    // SubProg next_token pc: 654 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32446);
    _32447 = (object)*(((s1_ptr)_2)->base + 2);
    _32446 = NOVALUE;
    // SubProg next_token pc: 658 op: IF (20)
    if (_32447 == 0) {
        _32447 = NOVALUE;
        goto L8; // [658] 908
    }
    else {
        if (!IS_ATOM_INT(_32447) && DBL_PTR(_32447)->dbl == 0.0){
            _32447 = NOVALUE;
            goto L8; // [658] 908
        }
        _32447 = NOVALUE;
    }
    _32447 = NOVALUE;
    // SubProg next_token pc: 661 op: STARTLINE (58)

    /** tokenize.e:1103					next_token(state)*/
    // SubProg next_token pc: 663 op: ASSIGN (18)
    Ref(_state_65089);
    DeRef(_32448);
    _32448 = _state_65089;
    // SubProg next_token pc: 666 op: PROC (27)
    _71next_token(_32448);
    _32448 = NOVALUE;
    // SubProg next_token pc: 669 op: NOP1 (159)
    // SubProg next_token pc: 670 op: ELSE (23)
    goto L8; // [670] 908
    // SubProg next_token pc: 672 op: NOP1 (159)
LF: // addr: 673 pc: 672 sub: 65087 op: 159
    // SubProg next_token pc: 673 op: STARTLINE (58)

    /** tokenize.e:1106			elsif (Look = '*') and (Token[TTYPE] = T_DIVIDE) then*/
    // SubProg next_token pc: 675 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 677 op: EQUALS (3)
    _32449 = (_71Look_64329 == 42);
    // SubProg next_token pc: 681 op: SC1_AND_IF (146)
    if (_32449 == 0) {
        goto L8; // [681] 908
    }
    // SubProg next_token pc: 685 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 687 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32451 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 691 op: EQUALS (3)
    if (IS_ATOM_INT(_32451)) {
        _32452 = (_32451 == 22);
    }
    else {
        _32452 = binary_op(EQUALS, _32451, 22);
    }
    _32451 = NOVALUE;
    // SubProg next_token pc: 695 op: NOP1 (159)
    // SubProg next_token pc: 696 op: IF (20)
    if (_32452 == 0) {
        DeRef(_32452);
        _32452 = NOVALUE;
        goto L8; // [696] 908
    }
    else {
        if (!IS_ATOM_INT(_32452) && DBL_PTR(_32452)->dbl == 0.0){
            DeRef(_32452);
            _32452 = NOVALUE;
            goto L8; // [696] 908
        }
        DeRef(_32452);
        _32452 = NOVALUE;
    }
    DeRef(_32452);
    _32452 = NOVALUE;
    // SubProg next_token pc: 699 op: STARTLINE (58)

    /** tokenize.e:1108				scan_multicomment(state)*/
    // SubProg next_token pc: 701 op: PROC (27)
    Ref(_state_65089);
    _32453 = _71scan_multicomment(_state_65089, 0);
    // SubProg next_token pc: 706 op: NOP1 (159)
    // SubProg next_token pc: 707 op: NOP1 (159)
    // SubProg next_token pc: 708 op: ELSE (23)
    goto L8; // [708] 908
    // SubProg next_token pc: 710 op: NOP1 (159)
L6: // addr: 711 pc: 710 sub: 65087 op: 159
    // SubProg next_token pc: 711 op: STARTLINE (58)

    /** tokenize.e:1111		elsif scan_identifier(state) then*/
    // SubProg next_token pc: 713 op: PROC (27)
    Ref(_state_65089);
    _32454 = _71scan_identifier(_state_65089);
    // SubProg next_token pc: 717 op: IF (20)
    if (_32454 == 0) {
        DeRef(_32454);
        _32454 = NOVALUE;
        goto L12; // [717] 723
    }
    else {
        if (!IS_ATOM_INT(_32454) && DBL_PTR(_32454)->dbl == 0.0){
            DeRef(_32454);
            _32454 = NOVALUE;
            goto L12; // [717] 723
        }
        DeRef(_32454);
        _32454 = NOVALUE;
    }
    DeRef(_32454);
    _32454 = NOVALUE;
    // SubProg next_token pc: 720 op: ELSE (23)
    goto L8; // [720] 908
    // SubProg next_token pc: 722 op: NOP1 (159)
L12: // addr: 723 pc: 722 sub: 65087 op: 159
    // SubProg next_token pc: 723 op: STARTLINE (58)

    /** tokenize.e:1113		elsif scan_qchar(state) then*/
    // SubProg next_token pc: 725 op: PROC (27)
    Ref(_state_65089);
    _32455 = _71scan_qchar(_state_65089);
    // SubProg next_token pc: 729 op: IF (20)
    if (_32455 == 0) {
        DeRef(_32455);
        _32455 = NOVALUE;
        goto L13; // [729] 735
    }
    else {
        if (!IS_ATOM_INT(_32455) && DBL_PTR(_32455)->dbl == 0.0){
            DeRef(_32455);
            _32455 = NOVALUE;
            goto L13; // [729] 735
        }
        DeRef(_32455);
        _32455 = NOVALUE;
    }
    DeRef(_32455);
    _32455 = NOVALUE;
    // SubProg next_token pc: 732 op: ELSE (23)
    goto L8; // [732] 908
    // SubProg next_token pc: 734 op: NOP1 (159)
L13: // addr: 735 pc: 734 sub: 65087 op: 159
    // SubProg next_token pc: 735 op: STARTLINE (58)

    /** tokenize.e:1115		elsif scan_string(state) then*/
    // SubProg next_token pc: 737 op: PROC (27)
    Ref(_state_65089);
    _32456 = _71scan_string(_state_65089);
    // SubProg next_token pc: 741 op: IF (20)
    if (_32456 == 0) {
        DeRef(_32456);
        _32456 = NOVALUE;
        goto L14; // [741] 747
    }
    else {
        if (!IS_ATOM_INT(_32456) && DBL_PTR(_32456)->dbl == 0.0){
            DeRef(_32456);
            _32456 = NOVALUE;
            goto L14; // [741] 747
        }
        DeRef(_32456);
        _32456 = NOVALUE;
    }
    DeRef(_32456);
    _32456 = NOVALUE;
    // SubProg next_token pc: 744 op: ELSE (23)
    goto L8; // [744] 908
    // SubProg next_token pc: 746 op: NOP1 (159)
L14: // addr: 747 pc: 746 sub: 65087 op: 159
    // SubProg next_token pc: 747 op: STARTLINE (58)

    /** tokenize.e:1117		elsif scan_prefixed_number(state) then*/
    // SubProg next_token pc: 749 op: PROC (27)
    Ref(_state_65089);
    _32457 = _71scan_prefixed_number(_state_65089);
    // SubProg next_token pc: 753 op: IF (20)
    if (_32457 == 0) {
        DeRef(_32457);
        _32457 = NOVALUE;
        goto L15; // [753] 759
    }
    else {
        if (!IS_ATOM_INT(_32457) && DBL_PTR(_32457)->dbl == 0.0){
            DeRef(_32457);
            _32457 = NOVALUE;
            goto L15; // [753] 759
        }
        DeRef(_32457);
        _32457 = NOVALUE;
    }
    DeRef(_32457);
    _32457 = NOVALUE;
    // SubProg next_token pc: 756 op: ELSE (23)
    goto L8; // [756] 908
    // SubProg next_token pc: 758 op: NOP1 (159)
L15: // addr: 759 pc: 758 sub: 65087 op: 159
    // SubProg next_token pc: 759 op: STARTLINE (58)

    /** tokenize.e:1119		elsif scan_hex(state) then*/
    // SubProg next_token pc: 761 op: PROC (27)
    Ref(_state_65089);
    _32458 = _71scan_hex(_state_65089);
    // SubProg next_token pc: 765 op: IF (20)
    if (_32458 == 0) {
        DeRef(_32458);
        _32458 = NOVALUE;
        goto L16; // [765] 771
    }
    else {
        if (!IS_ATOM_INT(_32458) && DBL_PTR(_32458)->dbl == 0.0){
            DeRef(_32458);
            _32458 = NOVALUE;
            goto L16; // [765] 771
        }
        DeRef(_32458);
        _32458 = NOVALUE;
    }
    DeRef(_32458);
    _32458 = NOVALUE;
    // SubProg next_token pc: 768 op: ELSE (23)
    goto L8; // [768] 908
    // SubProg next_token pc: 770 op: NOP1 (159)
L16: // addr: 771 pc: 770 sub: 65087 op: 159
    // SubProg next_token pc: 771 op: STARTLINE (58)

    /** tokenize.e:1121		elsif scan_number(state) then*/
    // SubProg next_token pc: 773 op: PROC (27)
    Ref(_state_65089);
    _32459 = _71scan_number(_state_65089);
    // SubProg next_token pc: 777 op: IF (20)
    if (_32459 == 0) {
        DeRef(_32459);
        _32459 = NOVALUE;
        goto L17; // [777] 783
    }
    else {
        if (!IS_ATOM_INT(_32459) && DBL_PTR(_32459)->dbl == 0.0){
            DeRef(_32459);
            _32459 = NOVALUE;
            goto L17; // [777] 783
        }
        DeRef(_32459);
        _32459 = NOVALUE;
    }
    DeRef(_32459);
    _32459 = NOVALUE;
    // SubProg next_token pc: 780 op: ELSE (23)
    goto L8; // [780] 908
    // SubProg next_token pc: 782 op: NOP1 (159)
L17: // addr: 783 pc: 782 sub: 65087 op: 159
    // SubProg next_token pc: 783 op: STARTLINE (58)

    /** tokenize.e:1123		elsif Look != io:EOF and not White_Char( Look ) then*/
    // SubProg next_token pc: 785 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 787 op: NOTEQ (4)
    _32460 = (_71Look_64329 != -1);
    // SubProg next_token pc: 791 op: SC1_AND_IF (146)
    if (_32460 == 0) {
        goto L18; // [791] 875
    }
    // SubProg next_token pc: 795 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 797 op: PROC (27)
    _32462 = _71White_Char(_71Look_64329);
    // SubProg next_token pc: 801 op: NOT (7)
    if (IS_ATOM_INT(_32462)) {
        _32463 = (_32462 == 0);
    }
    else {
        _32463 = unary_op(NOT, _32462);
    }
    DeRef(_32462);
    _32462 = NOVALUE;
    // SubProg next_token pc: 804 op: NOP1 (159)
    // SubProg next_token pc: 805 op: IF (20)
    if (_32463 == 0) {
        DeRef(_32463);
        _32463 = NOVALUE;
        goto L18; // [805] 875
    }
    else {
        if (!IS_ATOM_INT(_32463) && DBL_PTR(_32463)->dbl == 0.0){
            DeRef(_32463);
            _32463 = NOVALUE;
            goto L18; // [805] 875
        }
        DeRef(_32463);
        _32463 = NOVALUE;
    }
    DeRef(_32463);
    _32463 = NOVALUE;
    // SubProg next_token pc: 808 op: STARTLINE (58)

    /** tokenize.e:1124			while Look != io:EOF and not White_Char( Look ) do*/
    // SubProg next_token pc: 810 op: NOP2 (110)
    // SubProg next_token pc: 812 op: NOPWHILE (158)
L19: // addr: 813 pc: 812 sub: 65087 op: 158
    // SubProg next_token pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 815 op: NOTEQ (4)
    _32464 = (_71Look_64329 != -1);
    // SubProg next_token pc: 819 op: SC1_AND_IF (146)
    if (_32464 == 0) {
        goto L1A; // [819] 864
    }
    // SubProg next_token pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 825 op: PROC (27)
    _32466 = _71White_Char(_71Look_64329);
    // SubProg next_token pc: 829 op: NOT (7)
    if (IS_ATOM_INT(_32466)) {
        _32467 = (_32466 == 0);
    }
    else {
        _32467 = unary_op(NOT, _32466);
    }
    DeRef(_32466);
    _32466 = NOVALUE;
    // SubProg next_token pc: 832 op: NOP1 (159)
    // SubProg next_token pc: 833 op: WHILE (47)
    if (_32467 <= 0) {
        if (_32467 == 0) {
            DeRef(_32467);
            _32467 = NOVALUE;
            goto L1A; // [833] 864
        }
        else {
            if (!IS_ATOM_INT(_32467) && DBL_PTR(_32467)->dbl == 0.0){
                DeRef(_32467);
                _32467 = NOVALUE;
                goto L1A; // [833] 864
            }
            DeRef(_32467);
            _32467 = NOVALUE;
        }
    }
    DeRef(_32467);
    _32467 = NOVALUE;
    // SubProg next_token pc: 836 op: STARTLINE (58)

    /** tokenize.e:1125				Token[TDATA] &= Look*/
    // SubProg next_token pc: 838 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 840 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 842 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32468 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 846 op: CONCAT (15)
    if (IS_SEQUENCE(_32468) && IS_ATOM(_71Look_64329)) {
        Append(&_32469, _32468, _71Look_64329);
    }
    else if (IS_ATOM(_32468) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32469, _32468, _71Look_64329);
        _32468 = NOVALUE;
    }
    _32468 = NOVALUE;
    // SubProg next_token pc: 850 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32469;
    if( _1 != _32469 ){
        DeRef(_1);
    }
    _32469 = NOVALUE;
    // SubProg next_token pc: 854 op: STARTLINE (58)

    /** tokenize.e:1126				scan_char(state)*/
    // SubProg next_token pc: 856 op: PROC (27)
    Ref(_state_65089);
    _71scan_char(_state_65089);
    // SubProg next_token pc: 859 op: STARTLINE (58)

    /** tokenize.e:1127			end while*/
    // SubProg next_token pc: 861 op: ENDWHILE (22)
    goto L19; // [861] 813
    // SubProg next_token pc: 863 op: NOP1 (159)
L1A: // addr: 864 pc: 863 sub: 65087 op: 159
    // SubProg next_token pc: 864 op: STARTLINE (58)

    /** tokenize.e:1128			Token[TTYPE] = T_TEXT*/
    // SubProg next_token pc: 866 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 868 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 42;
    DeRef(_1);
    // SubProg next_token pc: 872 op: ELSE (23)
    goto L8; // [872] 908
    // SubProg next_token pc: 874 op: NOP1 (159)
L18: // addr: 875 pc: 874 sub: 65087 op: 159
    // SubProg next_token pc: 875 op: STARTLINE (58)

    /** tokenize.e:1132			Token[TTYPE] = T_EOF*/
    // SubProg next_token pc: 877 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 879 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg next_token pc: 883 op: STARTLINE (58)

    /** tokenize.e:1133			Token[TDATA] = Look*/
    // SubProg next_token pc: 885 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 887 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 889 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71Look_64329;
    DeRef(_1);
    // SubProg next_token pc: 893 op: STARTLINE (58)

    /** tokenize.e:1135			if (Look != io:EOF) then*/
    // SubProg next_token pc: 895 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 897 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == -1)
    goto L1B; // [897] 907
    // SubProg next_token pc: 901 op: STARTLINE (58)

    /** tokenize.e:1136				report_error(ERR_UNKNOWN)*/
    // SubProg next_token pc: 903 op: PROC (27)
    _71report_error(8);
    // SubProg next_token pc: 906 op: NOP1 (159)
L1B: // addr: 907 pc: 906 sub: 65087 op: 159
    // SubProg next_token pc: 907 op: NOP1 (159)
L8: // addr: 908 pc: 907 sub: 65087 op: 159
    // SubProg next_token pc: 908 op: STARTLINE (58)

    /** tokenize.e:1139	end procedure*/
    // SubProg next_token pc: 910 op: RETURNP (29)

// Exiting block BLOCK: next_token

// block var state_65089
    DeRef(_state_65089);
    DeRef(_32453);
    _32453 = NOVALUE;
    DeRef(_32438);
    _32438 = NOVALUE;
    DeRef(_32389);
    _32389 = NOVALUE;
    DeRef(_32460);
    _32460 = NOVALUE;
    DeRef(_32382);
    _32382 = NOVALUE;
    DeRef(_32449);
    _32449 = NOVALUE;
    DeRef(_32464);
    _32464 = NOVALUE;
    DeRef(_32409);
    _32409 = NOVALUE;
    return;
    // SubProg next_token pc: 913 op: BADRETURNF (43)
    ;
}


object _71tokenize_string(object _code_65211, object _state_65212, object _stop_on_error_65213, object _multi_65214)
{
    object _tokens_65215 = NOVALUE;
    object _32509 = NOVALUE; // 65266 32509
    object _32508 = NOVALUE; // 65265 32508
// skipping _32507  name type: 0
    object _32506 = NOVALUE; // 65262 32506
// skipping _32505  name type: 0
    object _32504 = NOVALUE; // 65260 32504
    object _32503 = NOVALUE; // 65258 32503
// skipping _32502  name type: 0
    object _32501 = NOVALUE; // 65256 32501
// skipping _32500  name type: 0
    object _32499 = NOVALUE; // 65253 32499
    object _32498 = NOVALUE; // 65252 32498
    object _32497 = NOVALUE; // 65251 32497
// skipping _32496  name type: 0
    object _32494 = NOVALUE; // 65247 32494
    object _32493 = NOVALUE; // 65246 32493
    object _32492 = NOVALUE; // 65245 32492
// skipping _32491  name type: 0
    object _32490 = NOVALUE; // 65242 32490
    object _32489 = NOVALUE; // 65241 32489
    object _32488 = NOVALUE; // 65240 32488
    object _32487 = NOVALUE; // 65239 32487
// skipping _32486  name type: 0
    object _32485 = NOVALUE; // 65236 32485
    object _32484 = NOVALUE; // 65234 32484
    object _32483 = NOVALUE; // 65232 32483
    object _32482 = NOVALUE; // 65230 32482
// skipping _32479  name type: 0
// skipping _32478  name type: 0
// skipping _32477  name type: 0
    object _32476 = NOVALUE; // 65222 32476
    object _32475 = NOVALUE; // 65221 32475
    object _32474 = NOVALUE; // 65220 32474
// skipping _32473  name type: 0
    object _32472 = NOVALUE; // 65218 32472
    object _32471 = NOVALUE; // 65217 32471
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tokenize_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg tokenize_string pc: 3 op: INTEGER_CHECK (96)
    // SubProg tokenize_string pc: 5 op: STARTLINE (58)

    /** tokenize.e:1160		ERR = FALSE*/
    // SubProg tokenize_string pc: 7 op: ASSIGN_I (113)
    _71ERR_64330 = 0;
    // SubProg tokenize_string pc: 10 op: STARTLINE (58)

    /** tokenize.e:1161		ERR_LNUM = 0*/
    // SubProg tokenize_string pc: 12 op: ASSIGN_I (113)
    _71ERR_LNUM_64331 = 0;
    // SubProg tokenize_string pc: 15 op: STARTLINE (58)

    /** tokenize.e:1162		ERR_LPOS = 0*/
    // SubProg tokenize_string pc: 17 op: ASSIGN_I (113)
    _71ERR_LPOS_64332 = 0;
    // SubProg tokenize_string pc: 20 op: STARTLINE (58)

    /** tokenize.e:1163		last_multi = 0*/
    // SubProg tokenize_string pc: 22 op: ASSIGN (18)
    DeRef(_71last_multi_64678);
    _71last_multi_64678 = 0;
    // SubProg tokenize_string pc: 25 op: STARTLINE (58)

    /** tokenize.e:1165		tokens = {}*/
    // SubProg tokenize_string pc: 27 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_tokens_65215);
    _tokens_65215 = _21958;
    // SubProg tokenize_string pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg tokenize_string pc: 32 op: STARTLINE (58)

    /** tokenize.e:1167		source_text = code*/
    // SubProg tokenize_string pc: 34 op: ASSIGN (18)
    RefDS(_code_65211);
    DeRef(_71source_text_64325);
    _71source_text_64325 = _code_65211;
    // SubProg tokenize_string pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg tokenize_string pc: 39 op: STARTLINE (58)

    /** tokenize.e:1168		if not length( source_text ) or source_text[$] != EOL then*/
    // SubProg tokenize_string pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64325)){
            _32471 = SEQ_PTR(_71source_text_64325)->length;
    }
    else {
        _32471 = 1;
    }
    // SubProg tokenize_string pc: 46 op: NOT (7)
    _32472 = (_32471 == 0);
    _32471 = NOVALUE;
    // SubProg tokenize_string pc: 49 op: SC1_OR_IF (147)
    if (_32472 != 0) {
        goto L1; // [49] 71
    }
    // SubProg tokenize_string pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64325)){
            _32474 = SEQ_PTR(_71source_text_64325)->length;
    }
    else {
        _32474 = 1;
    }
    // SubProg tokenize_string pc: 58 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64325);
    _32475 = (object)*(((s1_ptr)_2)->base + _32474);
    // SubProg tokenize_string pc: 62 op: NOTEQ (4)
    if (IS_ATOM_INT(_32475)) {
        _32476 = (_32475 != 10);
    }
    else {
        _32476 = binary_op(NOTEQ, _32475, 10);
    }
    _32475 = NOVALUE;
    // SubProg tokenize_string pc: 66 op: NOP1 (159)
    // SubProg tokenize_string pc: 67 op: IF (20)
    if (_32476 == 0) {
        DeRef(_32476);
        _32476 = NOVALUE;
        goto L2; // [67] 80
    }
    else {
        if (!IS_ATOM_INT(_32476) && DBL_PTR(_32476)->dbl == 0.0){
            DeRef(_32476);
            _32476 = NOVALUE;
            goto L2; // [67] 80
        }
        DeRef(_32476);
        _32476 = NOVALUE;
    }
    DeRef(_32476);
    _32476 = NOVALUE;
    // SubProg tokenize_string pc: 70 op: NOP1 (159)
L1: // addr: 71 pc: 70 sub: 65209 op: 159
    // SubProg tokenize_string pc: 71 op: STARTLINE (58)

    /** tokenize.e:1169			source_text &= EOL*/
    // SubProg tokenize_string pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 75 op: CONCAT (15)
    Append(&_71source_text_64325, _71source_text_64325, 10);
    // SubProg tokenize_string pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 65209 op: 159
    // SubProg tokenize_string pc: 80 op: STARTLINE (58)

    /** tokenize.e:1171		source_text &= io:EOF*/
    // SubProg tokenize_string pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 84 op: CONCAT (15)
    Append(&_71source_text_64325, _71source_text_64325, -1);
    // SubProg tokenize_string pc: 88 op: STARTLINE (58)

    /** tokenize.e:1172		LNum = 1*/
    // SubProg tokenize_string pc: 90 op: ASSIGN_I (113)
    _71LNum_64327 = 1;
    // SubProg tokenize_string pc: 93 op: STARTLINE (58)

    /** tokenize.e:1173		LPos = 1*/
    // SubProg tokenize_string pc: 95 op: ASSIGN_I (113)
    _71LPos_64328 = 1;
    // SubProg tokenize_string pc: 98 op: STARTLINE (58)

    /** tokenize.e:1174		sti = 1*/
    // SubProg tokenize_string pc: 100 op: ASSIGN_I (113)
    _71sti_64326 = 1;
    // SubProg tokenize_string pc: 103 op: STARTLINE (58)

    /** tokenize.e:1175		Look = source_text[sti]*/
    // SubProg tokenize_string pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 109 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71source_text_64325);
    _71Look_64329 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_71Look_64329))
    _71Look_64329 = (object)DBL_PTR(_71Look_64329)->dbl;
    // SubProg tokenize_string pc: 113 op: STARTLINE (58)

    /** tokenize.e:1176		Token[TTYPE] = io:EOF*/
    // SubProg tokenize_string pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 117 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    // SubProg tokenize_string pc: 121 op: STARTLINE (58)

    /** tokenize.e:1177		Token[TDATA] = ""*/
    // SubProg tokenize_string pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 125 op: ASSIGN_SUBS (16)
    RefDS(_21958);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21958;
    DeRef(_1);
    // SubProg tokenize_string pc: 129 op: STARTLINE (58)

    /** tokenize.e:1178		Token[TLNUM] = 1*/
    // SubProg tokenize_string pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 133 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg tokenize_string pc: 137 op: STARTLINE (58)

    /** tokenize.e:1179		Token[TLPOS] = 1*/
    // SubProg tokenize_string pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 141 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg tokenize_string pc: 145 op: STARTLINE (58)

    /** tokenize.e:1181		if multi then*/
    // SubProg tokenize_string pc: 147 op: IF (20)
    if (_multi_65214 == 0)
    {
        goto L3; // [147] 228
    }
    else{
    }
    // SubProg tokenize_string pc: 150 op: STARTLINE (58)

    /** tokenize.e:1182			sti = 0*/
    // SubProg tokenize_string pc: 152 op: ASSIGN_I (113)
    _71sti_64326 = 0;
    // SubProg tokenize_string pc: 155 op: STARTLINE (58)

    /** tokenize.e:1183			switch multi do*/
    // SubProg tokenize_string pc: 157 op: SWITCH_I (193)
    _0 = _multi_65214;
    switch ( _0 ){ 
        // SubProg tokenize_string pc: 162 op: STARTLINE (58)

        /** tokenize.e:1184				case TF_STRING_BACKTICK then*/
        // SubProg tokenize_string pc: 164 op: CASE (186)
        case 6:
        // SubProg tokenize_string pc: 166 op: STARTLINE (58)

        /** tokenize.e:1185					raw_string( "`", state, multi )*/
        // SubProg tokenize_string pc: 168 op: PROC (27)
        RefDS(_32142);
        Ref(_state_65212);
        _32482 = _71raw_string(_32142, _state_65212, _multi_65214);
        // SubProg tokenize_string pc: 174 op: ELSE (23)
        goto L4; // [174] 213
        // SubProg tokenize_string pc: 176 op: STARTLINE (58)

        /** tokenize.e:1187				case TF_STRING_TRIPLE then*/
        // SubProg tokenize_string pc: 178 op: CASE (186)
        case 5:
        // SubProg tokenize_string pc: 180 op: STARTLINE (58)

        /** tokenize.e:1188					raw_string( `"""`, state, multi )*/
        // SubProg tokenize_string pc: 182 op: PROC (27)
        RefDS(_32173);
        Ref(_state_65212);
        _32483 = _71raw_string(_32173, _state_65212, _multi_65214);
        // SubProg tokenize_string pc: 188 op: ELSE (23)
        goto L4; // [188] 213
        // SubProg tokenize_string pc: 190 op: STARTLINE (58)

        /** tokenize.e:1189				case TF_COMMENT_MULTIPLE then*/
        // SubProg tokenize_string pc: 192 op: CASE (186)
        case 9:
        // SubProg tokenize_string pc: 194 op: STARTLINE (58)

        /** tokenize.e:1190					scan_char( state )*/
        // SubProg tokenize_string pc: 196 op: PROC (27)
        Ref(_state_65212);
        _71scan_char(_state_65212);
        // SubProg tokenize_string pc: 199 op: STARTLINE (58)

        /** tokenize.e:1191					scan_multicomment( state, multi )*/
        // SubProg tokenize_string pc: 201 op: PROC (27)
        Ref(_state_65212);
        _32484 = _71scan_multicomment(_state_65212, _multi_65214);
        // SubProg tokenize_string pc: 206 op: ELSE (23)
        goto L4; // [206] 213
        // SubProg tokenize_string pc: 208 op: STARTLINE (58)

        /** tokenize.e:1192				case else*/
        // SubProg tokenize_string pc: 210 op: CASE (186)
        default:
        // SubProg tokenize_string pc: 212 op: NOPSWITCH (187)
    ;}L4: // addr: 213 pc: 212 sub: 65209 op: 187
    // SubProg tokenize_string pc: 213 op: STARTLINE (58)

    /** tokenize.e:1195			tokens &= { Token }*/
    // SubProg tokenize_string pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 217 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_71Token_64323);
    ((intptr_t*)_2)[1] = _71Token_64323;
    _32485 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 221 op: CONCAT (15)
    Concat((object_ptr)&_tokens_65215, _tokens_65215, _32485);
    DeRefDS(_32485);
    _32485 = NOVALUE;
    // SubProg tokenize_string pc: 225 op: ELSE (23)
    goto L5; // [225] 364
    // SubProg tokenize_string pc: 227 op: NOP1 (159)
L3: // addr: 228 pc: 227 sub: 65209 op: 159
    // SubProg tokenize_string pc: 228 op: STARTLINE (58)

    /** tokenize.e:1196		elsif (Look = '#') and (lookahead(1) = '!') then*/
    // SubProg tokenize_string pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 232 op: EQUALS (3)
    _32487 = (_71Look_64329 == 35);
    // SubProg tokenize_string pc: 236 op: SC1_AND_IF (146)
    if (_32487 == 0) {
        goto L6; // [236] 363
    }
    // SubProg tokenize_string pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 242 op: PROC (27)
    Ref(_71g_state_64375);
    _32489 = _71lookahead(1, _71g_state_64375);
    // SubProg tokenize_string pc: 247 op: EQUALS (3)
    if (IS_ATOM_INT(_32489)) {
        _32490 = (_32489 == 33);
    }
    else {
        _32490 = binary_op(EQUALS, _32489, 33);
    }
    DeRef(_32489);
    _32489 = NOVALUE;
    // SubProg tokenize_string pc: 251 op: NOP1 (159)
    // SubProg tokenize_string pc: 252 op: IF (20)
    if (_32490 == 0) {
        DeRef(_32490);
        _32490 = NOVALUE;
        goto L6; // [252] 363
    }
    else {
        if (!IS_ATOM_INT(_32490) && DBL_PTR(_32490)->dbl == 0.0){
            DeRef(_32490);
            _32490 = NOVALUE;
            goto L6; // [252] 363
        }
        DeRef(_32490);
        _32490 = NOVALUE;
    }
    DeRef(_32490);
    _32490 = NOVALUE;
    // SubProg tokenize_string pc: 255 op: STARTLINE (58)

    /** tokenize.e:1197			sti += 1*/
    // SubProg tokenize_string pc: 257 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 259 op: PLUS1_I (117)
    _71sti_64326 = _71sti_64326 + 1;
    // SubProg tokenize_string pc: 263 op: STARTLINE (58)

    /** tokenize.e:1198			scan_char(state)*/
    // SubProg tokenize_string pc: 265 op: PROC (27)
    Ref(_state_65212);
    _71scan_char(_state_65212);
    // SubProg tokenize_string pc: 268 op: STARTLINE (58)

    /** tokenize.e:1199			if eumem:ram_space[state][DELETE_WHITE] then*/
    // SubProg tokenize_string pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 272 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65212)){
        _32492 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65212)->dbl));
    }
    else{
        _32492 = (object)*(((s1_ptr)_2)->base + _state_65212);
    }
    // SubProg tokenize_string pc: 276 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32492);
    _32493 = (object)*(((s1_ptr)_2)->base + 4);
    _32492 = NOVALUE;
    // SubProg tokenize_string pc: 280 op: IF (20)
    if (_32493 == 0) {
        _32493 = NOVALUE;
        goto L7; // [280] 290
    }
    else {
        if (!IS_ATOM_INT(_32493) && DBL_PTR(_32493)->dbl == 0.0){
            _32493 = NOVALUE;
            goto L7; // [280] 290
        }
        _32493 = NOVALUE;
    }
    _32493 = NOVALUE;
    // SubProg tokenize_string pc: 283 op: STARTLINE (58)

    /** tokenize.e:1200				scan_white(state)*/
    // SubProg tokenize_string pc: 285 op: PROC (27)
    Ref(_state_65212);
    _32494 = _71scan_white(_state_65212);
    // SubProg tokenize_string pc: 289 op: NOP1 (159)
L7: // addr: 290 pc: 289 sub: 65209 op: 159
    // SubProg tokenize_string pc: 290 op: STARTLINE (58)

    /** tokenize.e:1202			Token[TTYPE] = T_SHBANG*/
    // SubProg tokenize_string pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 294 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg tokenize_string pc: 298 op: STARTLINE (58)

    /** tokenize.e:1203			Token[TDATA] = "#!"*/
    // SubProg tokenize_string pc: 300 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 302 op: ASSIGN_SUBS (16)
    RefDS(_32495);
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32495;
    DeRef(_1);
    // SubProg tokenize_string pc: 306 op: STARTLINE (58)

    /** tokenize.e:1204			while Look != EOL do*/
    // SubProg tokenize_string pc: 308 op: NOP2 (110)
    // SubProg tokenize_string pc: 310 op: NOPWHILE (158)
L8: // addr: 311 pc: 310 sub: 65209 op: 158
    // SubProg tokenize_string pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 313 op: NOTEQ_IFW_I (122)
    if (_71Look_64329 == 10)
    goto L9; // [313] 345
    // SubProg tokenize_string pc: 317 op: STARTLINE (58)

    /** tokenize.e:1205				Token[TDATA] &= Look*/
    // SubProg tokenize_string pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 323 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32497 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg tokenize_string pc: 327 op: CONCAT (15)
    if (IS_SEQUENCE(_32497) && IS_ATOM(_71Look_64329)) {
        Append(&_32498, _32497, _71Look_64329);
    }
    else if (IS_ATOM(_32497) && IS_SEQUENCE(_71Look_64329)) {
    }
    else {
        Concat((object_ptr)&_32498, _32497, _71Look_64329);
        _32497 = NOVALUE;
    }
    _32497 = NOVALUE;
    // SubProg tokenize_string pc: 331 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64323);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64323 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32498;
    if( _1 != _32498 ){
        DeRef(_1);
    }
    _32498 = NOVALUE;
    // SubProg tokenize_string pc: 335 op: STARTLINE (58)

    /** tokenize.e:1206				scan_char(state)*/
    // SubProg tokenize_string pc: 337 op: PROC (27)
    Ref(_state_65212);
    _71scan_char(_state_65212);
    // SubProg tokenize_string pc: 340 op: STARTLINE (58)

    /** tokenize.e:1207			end while*/
    // SubProg tokenize_string pc: 342 op: ENDWHILE (22)
    goto L8; // [342] 311
    // SubProg tokenize_string pc: 344 op: NOP1 (159)
L9: // addr: 345 pc: 344 sub: 65209 op: 159
    // SubProg tokenize_string pc: 345 op: STARTLINE (58)

    /** tokenize.e:1208			scan_char(state)*/
    // SubProg tokenize_string pc: 347 op: PROC (27)
    Ref(_state_65212);
    _71scan_char(_state_65212);
    // SubProg tokenize_string pc: 350 op: STARTLINE (58)

    /** tokenize.e:1209			tokens &= { Token }*/
    // SubProg tokenize_string pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 354 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_71Token_64323);
    ((intptr_t*)_2)[1] = _71Token_64323;
    _32499 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 358 op: CONCAT (15)
    Concat((object_ptr)&_tokens_65215, _tokens_65215, _32499);
    DeRefDS(_32499);
    _32499 = NOVALUE;
    // SubProg tokenize_string pc: 362 op: NOP1 (159)
L6: // addr: 363 pc: 362 sub: 65209 op: 159
    // SubProg tokenize_string pc: 363 op: NOP1 (159)
L5: // addr: 364 pc: 363 sub: 65209 op: 159
    // SubProg tokenize_string pc: 364 op: STARTLINE (58)

    /** tokenize.e:1212		next_token(state)*/
    // SubProg tokenize_string pc: 366 op: PROC (27)
    Ref(_state_65212);
    _71next_token(_state_65212);
    // SubProg tokenize_string pc: 369 op: STARTLINE (58)

    /** tokenize.e:1213		if not stop_on_error or not ERR then*/
    // SubProg tokenize_string pc: 371 op: NOT (7)
    _32501 = (_stop_on_error_65213 == 0);
    // SubProg tokenize_string pc: 374 op: SC1_OR_IF (147)
    if (_32501 != 0) {
        goto LA; // [374] 388
    }
    // SubProg tokenize_string pc: 378 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 380 op: NOT (7)
    _32503 = (_71ERR_64330 == 0);
    // SubProg tokenize_string pc: 383 op: NOP1 (159)
    // SubProg tokenize_string pc: 384 op: IF (20)
    if (_32503 == 0)
    {
        DeRef(_32503);
        _32503 = NOVALUE;
        goto LB; // [384] 443
    }
    else{
        DeRef(_32503);
        _32503 = NOVALUE;
    }
    // SubProg tokenize_string pc: 387 op: NOP1 (159)
LA: // addr: 388 pc: 387 sub: 65209 op: 159
    // SubProg tokenize_string pc: 388 op: STARTLINE (58)

    /** tokenize.e:1214			while Token[TTYPE] != T_EOF do*/
    // SubProg tokenize_string pc: 390 op: NOP2 (110)
    // SubProg tokenize_string pc: 392 op: NOPWHILE (158)
LC: // addr: 393 pc: 392 sub: 65209 op: 158
    // SubProg tokenize_string pc: 393 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 395 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64323);
    _32504 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg tokenize_string pc: 399 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _32504, 1)){
        _32504 = NOVALUE;
        goto LD; // [399] 442
    }
    _32504 = NOVALUE;
    // SubProg tokenize_string pc: 403 op: STARTLINE (58)

    /** tokenize.e:1215				tokens &= { Token }*/
    // SubProg tokenize_string pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 407 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_71Token_64323);
    ((intptr_t*)_2)[1] = _71Token_64323;
    _32506 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 411 op: CONCAT (15)
    Concat((object_ptr)&_tokens_65215, _tokens_65215, _32506);
    DeRefDS(_32506);
    _32506 = NOVALUE;
    // SubProg tokenize_string pc: 415 op: STARTLINE (58)

    /** tokenize.e:1216				next_token(state)*/
    // SubProg tokenize_string pc: 417 op: PROC (27)
    Ref(_state_65212);
    _71next_token(_state_65212);
    // SubProg tokenize_string pc: 420 op: STARTLINE (58)

    /** tokenize.e:1217				if stop_on_error and ERR then*/
    // SubProg tokenize_string pc: 422 op: SC1_AND_IF (146)
    if (_stop_on_error_65213 == 0) {
        goto LC; // [422] 393
    }
    // SubProg tokenize_string pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 428 op: NOP1 (159)
    // SubProg tokenize_string pc: 429 op: IF (20)
    if (_71ERR_64330 == 0)
    {
        goto LC; // [429] 393
    }
    else{
    }
    // SubProg tokenize_string pc: 432 op: STARTLINE (58)

    /** tokenize.e:1218					exit*/
    // SubProg tokenize_string pc: 434 op: EXIT (61)
    goto LD; // [434] 442
    // SubProg tokenize_string pc: 436 op: NOP1 (159)
    // SubProg tokenize_string pc: 437 op: STARTLINE (58)

    /** tokenize.e:1220			end while*/
    // SubProg tokenize_string pc: 439 op: ENDWHILE (22)
    goto LC; // [439] 393
    // SubProg tokenize_string pc: 441 op: NOP1 (159)
LD: // addr: 442 pc: 441 sub: 65209 op: 159
    // SubProg tokenize_string pc: 442 op: NOP1 (159)
LB: // addr: 443 pc: 442 sub: 65209 op: 159
    // SubProg tokenize_string pc: 443 op: STARTLINE (58)

    /** tokenize.e:1223		return { tokens, ERR, ERR_LNUM, ERR_LPOS }*/
    // SubProg tokenize_string pc: 445 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 447 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 449 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 451 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_tokens_65215);
    ((intptr_t*)_2)[1] = _tokens_65215;
    ((intptr_t*)_2)[2] = _71ERR_64330;
    ((intptr_t*)_2)[3] = _71ERR_LNUM_64331;
    ((intptr_t*)_2)[4] = _71ERR_LPOS_64332;
    _32509 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 458 op: RETURNF (28)

// Exiting block BLOCK: tokenize_string

// block var code_65211
    DeRefDS(_code_65211);

// block var state_65212
    DeRef(_state_65212);

// block var stop_on_error_65213

// block var multi_65214

// block var tokens_65215
    DeRefDS(_tokens_65215);
    DeRef(_32472);
    _32472 = NOVALUE;
    DeRef(_32482);
    _32482 = NOVALUE;
    DeRef(_32483);
    _32483 = NOVALUE;
    DeRef(_32501);
    _32501 = NOVALUE;
    DeRef(_32484);
    _32484 = NOVALUE;
    DeRef(_32487);
    _32487 = NOVALUE;
    DeRef(_32494);
    _32494 = NOVALUE;
    return _32509;
    // SubProg tokenize_string pc: 462 op: BADRETURNF (43)
    ;
}



// 0xE2F7C395
