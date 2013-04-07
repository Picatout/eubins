// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _71report_error(object _err_64289)
{
// skipping _31909  name type: 0
// skipping _31908  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg report_error pc: 1 op: INTEGER_CHECK (96)
    // SubProg report_error pc: 3 op: STARTLINE (58)

    /** tokenize.e:155		Look = io:EOF*/
    // SubProg report_error pc: 5 op: ASSIGN_I (113)
    _71Look_64258 = -1;
    // SubProg report_error pc: 8 op: STARTLINE (58)

    /** tokenize.e:156		ERR = err*/
    // SubProg report_error pc: 10 op: ASSIGN_I (113)
    _71ERR_64259 = _err_64289;
    // SubProg report_error pc: 13 op: STARTLINE (58)

    /** tokenize.e:157		ERR_LNUM = Token[TLNUM]*/
    // SubProg report_error pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg report_error pc: 17 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _71ERR_LNUM_64260 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_71ERR_LNUM_64260))
    _71ERR_LNUM_64260 = (object)DBL_PTR(_71ERR_LNUM_64260)->dbl;
    // SubProg report_error pc: 21 op: STARTLINE (58)

    /** tokenize.e:158		ERR_LPOS = Token[TLPOS]*/
    // SubProg report_error pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg report_error pc: 25 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _71ERR_LPOS_64261 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_71ERR_LPOS_64261))
    _71ERR_LPOS_64261 = (object)DBL_PTR(_71ERR_LPOS_64261)->dbl;
    // SubProg report_error pc: 29 op: STARTLINE (58)

    /** tokenize.e:159	end procedure*/
    // SubProg report_error pc: 31 op: RETURNP (29)

// Exiting block BLOCK: report_error

// block var err_64289
    return;
    // SubProg report_error pc: 34 op: BADRETURNF (43)
    ;
}


object _71default_state()
{
    object _31914 = NOVALUE; // 64303 31914
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
    _31914 = MAKE_SEQ(_1);
    // SubProg default_state pc: 14 op: RETURNF (28)

// Exiting block BLOCK: default_state
    return _31914;
    // SubProg default_state pc: 18 op: BADRETURNF (43)
    ;
}


object _71new()
{
    object _state_64309 = NOVALUE;
// skipping _31917  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** tokenize.e:197		atom state = eumem:malloc()*/
    // SubProg new pc: 3 op: PROC (27)
    _0 = _state_64309;
    _state_64309 = _29malloc(1, 1);
    DeRef(_0);
    // SubProg new pc: 8 op: STARTLINE (58)

    /** tokenize.e:199		reset(state)*/
    // SubProg new pc: 10 op: PROC (27)
    Ref(_state_64309);
    _71reset(_state_64309);
    // SubProg new pc: 13 op: STARTLINE (58)

    /** tokenize.e:201		return state*/
    // SubProg new pc: 15 op: RETURNF (28)

// Exiting block BLOCK: new
    return _state_64309;
    // SubProg new pc: 19 op: BADRETURNF (43)
    ;
}


void _71reset(object _state_64314)
{
    object _31918 = NOVALUE; // 64315 31918
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reset pc: 1 op: STARTLINE (58)

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    // SubProg reset pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 5 op: PROC (27)
    _31918 = _71default_state();
    // SubProg reset pc: 8 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_64314))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64314)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_64314);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31918;
    if( _1 != _31918 ){
        DeRef(_1);
    }
    _31918 = NOVALUE;
    // SubProg reset pc: 12 op: STARTLINE (58)

    /** tokenize.e:213	end procedure*/
    // SubProg reset pc: 14 op: RETURNP (29)

// Exiting block BLOCK: reset

// block var state_64314
    DeRef(_state_64314);
    return;
    // SubProg reset pc: 17 op: BADRETURNF (43)
    ;
}


object _71White_Char(object _c_64378)
{
    object _31943 = NOVALUE; // 64383 31943
    object _31942 = NOVALUE; // 64382 31942
    object _31941 = NOVALUE; // 64381 31941
    object _31940 = NOVALUE; // 64380 31940
    object _31939 = NOVALUE; // 64379 31939
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg White_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:320		return integer(c) and (c >= 0) and (c <= ' ')*/
    // SubProg White_Char pc: 3 op: IS_AN_INTEGER (94)
    _31939 = 1;
    // SubProg White_Char pc: 6 op: GREATEREQ (2)
    _31940 = (_c_64378 >= 0);
    // SubProg White_Char pc: 10 op: AND (8)
    _31941 = (_31939 != 0 && _31940 != 0);
    _31939 = NOVALUE;
    _31940 = NOVALUE;
    // SubProg White_Char pc: 14 op: LESSEQ (5)
    _31942 = (_c_64378 <= 32);
    // SubProg White_Char pc: 18 op: AND (8)
    _31943 = (_31941 != 0 && _31942 != 0);
    _31941 = NOVALUE;
    _31942 = NOVALUE;
    // SubProg White_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: White_Char

// block var c_64378
    return _31943;
    // SubProg White_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Digit_Char(object _c_64386)
{
    object _31953 = NOVALUE; // 64396 31953
    object _31952 = NOVALUE; // 64395 31952
    object _31951 = NOVALUE; // 64394 31951
    object _31949 = NOVALUE; // 64392 31949
    object _31948 = NOVALUE; // 64391 31948
    object _31946 = NOVALUE; // 64389 31946
    object _31944 = NOVALUE; // 64387 31944
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Digit_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:324		return integer(c) and ((('0' <= c) and (c <= '9')) or (c = '_'))*/
    // SubProg Digit_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64386))
    _31944 = 1;
    else if (IS_ATOM_DBL(_c_64386))
    _31944 = IS_ATOM_INT(DoubleToInt(_c_64386));
    else
    _31944 = 0;
    // SubProg Digit_Char pc: 6 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64386)) {
        _31946 = (48 <= _c_64386);
    }
    else {
        _31946 = binary_op(LESSEQ, 48, _c_64386);
    }
    // SubProg Digit_Char pc: 10 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64386)) {
        _31948 = (_c_64386 <= 57);
    }
    else {
        _31948 = binary_op(LESSEQ, _c_64386, 57);
    }
    // SubProg Digit_Char pc: 14 op: AND (8)
    if (IS_ATOM_INT(_31946) && IS_ATOM_INT(_31948)) {
        _31949 = (_31946 != 0 && _31948 != 0);
    }
    else {
        _31949 = binary_op(AND, _31946, _31948);
    }
    DeRef(_31946);
    _31946 = NOVALUE;
    DeRef(_31948);
    _31948 = NOVALUE;
    // SubProg Digit_Char pc: 18 op: EQUALS (3)
    if (IS_ATOM_INT(_c_64386)) {
        _31951 = (_c_64386 == 95);
    }
    else {
        _31951 = binary_op(EQUALS, _c_64386, 95);
    }
    // SubProg Digit_Char pc: 22 op: OR (9)
    if (IS_ATOM_INT(_31949) && IS_ATOM_INT(_31951)) {
        _31952 = (_31949 != 0 || _31951 != 0);
    }
    else {
        _31952 = binary_op(OR, _31949, _31951);
    }
    DeRef(_31949);
    _31949 = NOVALUE;
    DeRef(_31951);
    _31951 = NOVALUE;
    // SubProg Digit_Char pc: 26 op: AND (8)
    if (IS_ATOM_INT(_31952)) {
        _31953 = (_31944 != 0 && _31952 != 0);
    }
    else {
        _31953 = binary_op(AND, _31944, _31952);
    }
    _31944 = NOVALUE;
    DeRef(_31952);
    _31952 = NOVALUE;
    // SubProg Digit_Char pc: 30 op: RETURNF (28)

// Exiting block BLOCK: Digit_Char

// block var c_64386
    DeRef(_c_64386);
    return _31953;
    // SubProg Digit_Char pc: 34 op: BADRETURNF (43)
    ;
}


object _71uHex_Char(object _c_64399)
{
    object _31960 = NOVALUE; // 64406 31960
    object _31959 = NOVALUE; // 64405 31959
    object _31957 = NOVALUE; // 64403 31957
    object _31956 = NOVALUE; // 64402 31956
    object _31954 = NOVALUE; // 64400 31954
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg uHex_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:328		return integer(c) and ('A' <= c) and (c <= 'F')*/
    // SubProg uHex_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64399))
    _31954 = 1;
    else if (IS_ATOM_DBL(_c_64399))
    _31954 = IS_ATOM_INT(DoubleToInt(_c_64399));
    else
    _31954 = 0;
    // SubProg uHex_Char pc: 6 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64399)) {
        _31956 = (65 <= _c_64399);
    }
    else {
        _31956 = binary_op(LESSEQ, 65, _c_64399);
    }
    // SubProg uHex_Char pc: 10 op: AND (8)
    if (IS_ATOM_INT(_31956)) {
        _31957 = (_31954 != 0 && _31956 != 0);
    }
    else {
        _31957 = binary_op(AND, _31954, _31956);
    }
    _31954 = NOVALUE;
    DeRef(_31956);
    _31956 = NOVALUE;
    // SubProg uHex_Char pc: 14 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64399)) {
        _31959 = (_c_64399 <= 70);
    }
    else {
        _31959 = binary_op(LESSEQ, _c_64399, 70);
    }
    // SubProg uHex_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_31957) && IS_ATOM_INT(_31959)) {
        _31960 = (_31957 != 0 && _31959 != 0);
    }
    else {
        _31960 = binary_op(AND, _31957, _31959);
    }
    DeRef(_31957);
    _31957 = NOVALUE;
    DeRef(_31959);
    _31959 = NOVALUE;
    // SubProg uHex_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: uHex_Char

// block var c_64399
    DeRef(_c_64399);
    return _31960;
    // SubProg uHex_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71lHex_Char(object _c_64409)
{
    object _31966 = NOVALUE; // 64415 31966
    object _31965 = NOVALUE; // 64414 31965
    object _31964 = NOVALUE; // 64413 31964
    object _31963 = NOVALUE; // 64412 31963
    object _31961 = NOVALUE; // 64410 31961
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lHex_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:332		return integer(c) and ('a' <= c) and (c <= 'f')*/
    // SubProg lHex_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64409))
    _31961 = 1;
    else if (IS_ATOM_DBL(_c_64409))
    _31961 = IS_ATOM_INT(DoubleToInt(_c_64409));
    else
    _31961 = 0;
    // SubProg lHex_Char pc: 6 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64409)) {
        _31963 = (97 <= _c_64409);
    }
    else {
        _31963 = binary_op(LESSEQ, 97, _c_64409);
    }
    // SubProg lHex_Char pc: 10 op: AND (8)
    if (IS_ATOM_INT(_31963)) {
        _31964 = (_31961 != 0 && _31963 != 0);
    }
    else {
        _31964 = binary_op(AND, _31961, _31963);
    }
    _31961 = NOVALUE;
    DeRef(_31963);
    _31963 = NOVALUE;
    // SubProg lHex_Char pc: 14 op: LESSEQ (5)
    if (IS_ATOM_INT(_c_64409)) {
        _31965 = (_c_64409 <= 102);
    }
    else {
        _31965 = binary_op(LESSEQ, _c_64409, 102);
    }
    // SubProg lHex_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_31964) && IS_ATOM_INT(_31965)) {
        _31966 = (_31964 != 0 && _31965 != 0);
    }
    else {
        _31966 = binary_op(AND, _31964, _31965);
    }
    DeRef(_31964);
    _31964 = NOVALUE;
    DeRef(_31965);
    _31965 = NOVALUE;
    // SubProg lHex_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: lHex_Char

// block var c_64409
    DeRef(_c_64409);
    return _31966;
    // SubProg lHex_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Hex_Char(object _c_64418)
{
    object _31973 = NOVALUE; // 64425 31973
    object _31972 = NOVALUE; // 64424 31972
    object _31971 = NOVALUE; // 64423 31971
    object _31970 = NOVALUE; // 64422 31970
    object _31969 = NOVALUE; // 64421 31969
    object _31968 = NOVALUE; // 64420 31968
    object _31967 = NOVALUE; // 64419 31967
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Hex_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:336		return integer(c) and (Digit_Char(c) or uHex_Char(c) or lHex_Char(c))*/
    // SubProg Hex_Char pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_c_64418))
    _31967 = 1;
    else if (IS_ATOM_DBL(_c_64418))
    _31967 = IS_ATOM_INT(DoubleToInt(_c_64418));
    else
    _31967 = 0;
    // SubProg Hex_Char pc: 6 op: PROC (27)
    Ref(_c_64418);
    _31968 = _71Digit_Char(_c_64418);
    // SubProg Hex_Char pc: 10 op: PROC (27)
    Ref(_c_64418);
    _31969 = _71uHex_Char(_c_64418);
    // SubProg Hex_Char pc: 14 op: OR (9)
    if (IS_ATOM_INT(_31968) && IS_ATOM_INT(_31969)) {
        _31970 = (_31968 != 0 || _31969 != 0);
    }
    else {
        _31970 = binary_op(OR, _31968, _31969);
    }
    DeRef(_31968);
    _31968 = NOVALUE;
    DeRef(_31969);
    _31969 = NOVALUE;
    // SubProg Hex_Char pc: 18 op: PROC (27)
    Ref(_c_64418);
    _31971 = _71lHex_Char(_c_64418);
    // SubProg Hex_Char pc: 22 op: OR (9)
    if (IS_ATOM_INT(_31970) && IS_ATOM_INT(_31971)) {
        _31972 = (_31970 != 0 || _31971 != 0);
    }
    else {
        _31972 = binary_op(OR, _31970, _31971);
    }
    DeRef(_31970);
    _31970 = NOVALUE;
    DeRef(_31971);
    _31971 = NOVALUE;
    // SubProg Hex_Char pc: 26 op: AND (8)
    if (IS_ATOM_INT(_31972)) {
        _31973 = (_31967 != 0 && _31972 != 0);
    }
    else {
        _31973 = binary_op(AND, _31967, _31972);
    }
    _31967 = NOVALUE;
    DeRef(_31972);
    _31972 = NOVALUE;
    // SubProg Hex_Char pc: 30 op: RETURNF (28)

// Exiting block BLOCK: Hex_Char

// block var c_64418
    DeRef(_c_64418);
    return _31973;
    // SubProg Hex_Char pc: 34 op: BADRETURNF (43)
    ;
}


object _71uAlpha_Char(object _c_64428)
{
    object _31978 = NOVALUE; // 64433 31978
    object _31977 = NOVALUE; // 64432 31977
    object _31976 = NOVALUE; // 64431 31976
    object _31975 = NOVALUE; // 64430 31975
    object _31974 = NOVALUE; // 64429 31974
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg uAlpha_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:340		return integer(c) and ('A' <= c) and (c <= 'Z')*/
    // SubProg uAlpha_Char pc: 3 op: IS_AN_INTEGER (94)
    _31974 = 1;
    // SubProg uAlpha_Char pc: 6 op: LESSEQ (5)
    _31975 = (65 <= _c_64428);
    // SubProg uAlpha_Char pc: 10 op: AND (8)
    _31976 = (_31974 != 0 && _31975 != 0);
    _31974 = NOVALUE;
    _31975 = NOVALUE;
    // SubProg uAlpha_Char pc: 14 op: LESSEQ (5)
    _31977 = (_c_64428 <= 90);
    // SubProg uAlpha_Char pc: 18 op: AND (8)
    _31978 = (_31976 != 0 && _31977 != 0);
    _31976 = NOVALUE;
    _31977 = NOVALUE;
    // SubProg uAlpha_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: uAlpha_Char

// block var c_64428
    return _31978;
    // SubProg uAlpha_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71lAlpha_Char(object _c_64436)
{
    object _31984 = NOVALUE; // 64442 31984
    object _31983 = NOVALUE; // 64441 31983
    object _31981 = NOVALUE; // 64439 31981
    object _31980 = NOVALUE; // 64438 31980
    object _31979 = NOVALUE; // 64437 31979
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lAlpha_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:344		return integer(c) and ('a' <= c) and (c <= 'z')*/
    // SubProg lAlpha_Char pc: 3 op: IS_AN_INTEGER (94)
    _31979 = 1;
    // SubProg lAlpha_Char pc: 6 op: LESSEQ (5)
    _31980 = (97 <= _c_64436);
    // SubProg lAlpha_Char pc: 10 op: AND (8)
    _31981 = (_31979 != 0 && _31980 != 0);
    _31979 = NOVALUE;
    _31980 = NOVALUE;
    // SubProg lAlpha_Char pc: 14 op: LESSEQ (5)
    _31983 = (_c_64436 <= 122);
    // SubProg lAlpha_Char pc: 18 op: AND (8)
    _31984 = (_31981 != 0 && _31983 != 0);
    _31981 = NOVALUE;
    _31983 = NOVALUE;
    // SubProg lAlpha_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: lAlpha_Char

// block var c_64436
    return _31984;
    // SubProg lAlpha_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Alpha_Char(object _c_64445)
{
    object _31989 = NOVALUE; // 64450 31989
    object _31988 = NOVALUE; // 64449 31988
    object _31987 = NOVALUE; // 64448 31987
    object _31986 = NOVALUE; // 64447 31986
    object _31985 = NOVALUE; // 64446 31985
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Alpha_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:348		return integer(c) and (uAlpha_Char(c) or lAlpha_Char(c))*/
    // SubProg Alpha_Char pc: 3 op: IS_AN_INTEGER (94)
    _31985 = 1;
    // SubProg Alpha_Char pc: 6 op: PROC (27)
    _31986 = _71uAlpha_Char(_c_64445);
    // SubProg Alpha_Char pc: 10 op: PROC (27)
    _31987 = _71lAlpha_Char(_c_64445);
    // SubProg Alpha_Char pc: 14 op: OR (9)
    if (IS_ATOM_INT(_31986) && IS_ATOM_INT(_31987)) {
        _31988 = (_31986 != 0 || _31987 != 0);
    }
    else {
        _31988 = binary_op(OR, _31986, _31987);
    }
    DeRef(_31986);
    _31986 = NOVALUE;
    DeRef(_31987);
    _31987 = NOVALUE;
    // SubProg Alpha_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_31988)) {
        _31989 = (_31985 != 0 && _31988 != 0);
    }
    else {
        _31989 = binary_op(AND, _31985, _31988);
    }
    _31985 = NOVALUE;
    DeRef(_31988);
    _31988 = NOVALUE;
    // SubProg Alpha_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: Alpha_Char

// block var c_64445
    return _31989;
    // SubProg Alpha_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Alphanum_Char(object _c_64453)
{
    object _31994 = NOVALUE; // 64458 31994
    object _31993 = NOVALUE; // 64457 31993
    object _31992 = NOVALUE; // 64456 31992
    object _31991 = NOVALUE; // 64455 31991
    object _31990 = NOVALUE; // 64454 31990
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Alphanum_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:352		return integer(c) and (Alpha_Char(c) or Digit_Char(c))*/
    // SubProg Alphanum_Char pc: 3 op: IS_AN_INTEGER (94)
    _31990 = 1;
    // SubProg Alphanum_Char pc: 6 op: PROC (27)
    _31991 = _71Alpha_Char(_c_64453);
    // SubProg Alphanum_Char pc: 10 op: PROC (27)
    _31992 = _71Digit_Char(_c_64453);
    // SubProg Alphanum_Char pc: 14 op: OR (9)
    if (IS_ATOM_INT(_31991) && IS_ATOM_INT(_31992)) {
        _31993 = (_31991 != 0 || _31992 != 0);
    }
    else {
        _31993 = binary_op(OR, _31991, _31992);
    }
    DeRef(_31991);
    _31991 = NOVALUE;
    DeRef(_31992);
    _31992 = NOVALUE;
    // SubProg Alphanum_Char pc: 18 op: AND (8)
    if (IS_ATOM_INT(_31993)) {
        _31994 = (_31990 != 0 && _31993 != 0);
    }
    else {
        _31994 = binary_op(AND, _31990, _31993);
    }
    _31990 = NOVALUE;
    DeRef(_31993);
    _31993 = NOVALUE;
    // SubProg Alphanum_Char pc: 22 op: RETURNF (28)

// Exiting block BLOCK: Alphanum_Char

// block var c_64453
    return _31994;
    // SubProg Alphanum_Char pc: 26 op: BADRETURNF (43)
    ;
}


object _71Identifier_Char(object _c_64461)
{
    object _31995 = NOVALUE; // 64462 31995
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Identifier_Char pc: 1 op: STARTLINE (58)

    /** tokenize.e:356		return Alphanum_Char(c)*/
    // SubProg Identifier_Char pc: 3 op: PROC (27)
    _31995 = _71Alphanum_Char(_c_64461);
    // SubProg Identifier_Char pc: 7 op: RETURNF (28)

// Exiting block BLOCK: Identifier_Char

// block var c_64461
    return _31995;
    // SubProg Identifier_Char pc: 11 op: BADRETURNF (43)
    ;
}


void _71scan_char(object _state_64465)
{
// skipping _32012  name type: 0
// skipping _32011  name type: 0
    object _32010 = NOVALUE; // 64484 32010
// skipping _32009  name type: 0
// skipping _32008  name type: 0
// skipping _32007  name type: 0
    object _32006 = NOVALUE; // 64479 32006
    object _32005 = NOVALUE; // 64478 32005
// skipping _32004  name type: 0
// skipping _32003  name type: 0
    object _32002 = NOVALUE; // 64474 32002
    object _32001 = NOVALUE; // 64473 32001
    object _32000 = NOVALUE; // 64472 32000
    object _31999 = NOVALUE; // 64471 31999
    object _31998 = NOVALUE; // 64470 31998
    object _31997 = NOVALUE; // 64469 31997
// skipping _31996  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_char pc: 1 op: STARTLINE (58)

    /** tokenize.e:360		state = state -- supress warning*/
    // SubProg scan_char pc: 3 op: ASSIGN (18)
    Ref(_state_64465);
    DeRef(_state_64465);
    _state_64465 = _state_64465;
    // SubProg scan_char pc: 6 op: STARTLINE (58)

    /** tokenize.e:361		if Look = EOL then*/
    // SubProg scan_char pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 10 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 10)
    goto L1; // [10] 118
    // SubProg scan_char pc: 14 op: STARTLINE (58)

    /** tokenize.e:362			if sti < length(source_text) and source_text[sti+1] = '\r' then*/
    // SubProg scan_char pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64254)){
            _31997 = SEQ_PTR(_71source_text_64254)->length;
    }
    else {
        _31997 = 1;
    }
    // SubProg scan_char pc: 23 op: LESS (1)
    _31998 = (_71sti_64255 < _31997);
    _31997 = NOVALUE;
    // SubProg scan_char pc: 27 op: SC1_AND_IF (146)
    if (_31998 == 0) {
        goto L2; // [27] 70
    }
    // SubProg scan_char pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 35 op: PLUS1 (93)
    _32000 = _71sti_64255 + 1;
    // SubProg scan_char pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64254);
    _32001 = (object)*(((s1_ptr)_2)->base + _32000);
    // SubProg scan_char pc: 43 op: EQUALS (3)
    if (IS_ATOM_INT(_32001)) {
        _32002 = (_32001 == 13);
    }
    else {
        _32002 = binary_op(EQUALS, _32001, 13);
    }
    _32001 = NOVALUE;
    // SubProg scan_char pc: 47 op: NOP1 (159)
    // SubProg scan_char pc: 48 op: IF (20)
    if (_32002 == 0) {
        DeRef(_32002);
        _32002 = NOVALUE;
        goto L2; // [48] 70
    }
    else {
        if (!IS_ATOM_INT(_32002) && DBL_PTR(_32002)->dbl == 0.0){
            DeRef(_32002);
            _32002 = NOVALUE;
            goto L2; // [48] 70
        }
        DeRef(_32002);
        _32002 = NOVALUE;
    }
    DeRef(_32002);
    _32002 = NOVALUE;
    // SubProg scan_char pc: 51 op: STARTLINE (58)

    /** tokenize.e:363				sti += 1*/
    // SubProg scan_char pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 55 op: PLUS1_I (117)
    _71sti_64255 = _71sti_64255 + 1;
    // SubProg scan_char pc: 59 op: STARTLINE (58)

    /** tokenize.e:364				source_text[sti] = EOL*/
    // SubProg scan_char pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 65 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71source_text_64254);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71source_text_64254 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _71sti_64255);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
    // SubProg scan_char pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 64463 op: 159
    // SubProg scan_char pc: 70 op: STARTLINE (58)

    /** tokenize.e:366			LNum += 1*/
    // SubProg scan_char pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 74 op: PLUS1_I (117)
    _71LNum_64256 = _71LNum_64256 + 1;
    // SubProg scan_char pc: 78 op: STARTLINE (58)

    /** tokenize.e:367			LPos = 0*/
    // SubProg scan_char pc: 80 op: ASSIGN_I (113)
    _71LPos_64257 = 0;
    // SubProg scan_char pc: 83 op: STARTLINE (58)

    /** tokenize.e:368			if length(Token[TDATA]) = 0 then*/
    // SubProg scan_char pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 87 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32005 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_char pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_32005)){
            _32006 = SEQ_PTR(_32005)->length;
    }
    else {
        _32006 = 1;
    }
    _32005 = NOVALUE;
    // SubProg scan_char pc: 94 op: EQUALS_IFW_I (121)
    if (_32006 != 0)
    goto L3; // [94] 117
    // SubProg scan_char pc: 98 op: STARTLINE (58)

    /** tokenize.e:369				Token[TLNUM] = LNum*/
    // SubProg scan_char pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 104 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71LNum_64256;
    DeRef(_1);
    // SubProg scan_char pc: 108 op: STARTLINE (58)

    /** tokenize.e:370				Token[TLPOS] = 1*/
    // SubProg scan_char pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 112 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg scan_char pc: 116 op: NOP1 (159)
L3: // addr: 117 pc: 116 sub: 64463 op: 159
    // SubProg scan_char pc: 117 op: NOP1 (159)
L1: // addr: 118 pc: 117 sub: 64463 op: 159
    // SubProg scan_char pc: 118 op: STARTLINE (58)

    /** tokenize.e:373		LPos += 1*/
    // SubProg scan_char pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 122 op: PLUS1_I (117)
    _71LPos_64257 = _71LPos_64257 + 1;
    // SubProg scan_char pc: 126 op: STARTLINE (58)

    /** tokenize.e:374		sti += 1*/
    // SubProg scan_char pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 130 op: PLUS1_I (117)
    _71sti_64255 = _71sti_64255 + 1;
    // SubProg scan_char pc: 134 op: STARTLINE (58)

    /** tokenize.e:375		if sti > length(source_text) then*/
    // SubProg scan_char pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64254)){
            _32010 = SEQ_PTR(_71source_text_64254)->length;
    }
    else {
        _32010 = 1;
    }
    // SubProg scan_char pc: 143 op: GREATER_IFW_I (124)
    if (_71sti_64255 <= _32010)
    goto L4; // [143] 155
    // SubProg scan_char pc: 147 op: STARTLINE (58)

    /** tokenize.e:376			Look = io:EOF*/
    // SubProg scan_char pc: 149 op: ASSIGN_I (113)
    _71Look_64258 = -1;
    // SubProg scan_char pc: 152 op: ELSE (23)
    goto L5; // [152] 166
    // SubProg scan_char pc: 154 op: NOP1 (159)
L4: // addr: 155 pc: 154 sub: 64463 op: 159
    // SubProg scan_char pc: 155 op: STARTLINE (58)

    /** tokenize.e:378			Look = source_text[sti]*/
    // SubProg scan_char pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_char pc: 161 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71source_text_64254);
    _71Look_64258 = (object)*(((s1_ptr)_2)->base + _71sti_64255);
    if (!IS_ATOM_INT(_71Look_64258))
    _71Look_64258 = (object)DBL_PTR(_71Look_64258)->dbl;
    // SubProg scan_char pc: 165 op: NOP1 (159)
L5: // addr: 166 pc: 165 sub: 64463 op: 159
    // SubProg scan_char pc: 166 op: STARTLINE (58)

    /** tokenize.e:380	end procedure*/
    // SubProg scan_char pc: 168 op: RETURNP (29)

// Exiting block BLOCK: scan_char

// block var state_64465
    DeRef(_state_64465);
    DeRef(_31998);
    _31998 = NOVALUE;
    DeRef(_32000);
    _32000 = NOVALUE;
    _32005 = NOVALUE;
    return;
    // SubProg scan_char pc: 171 op: BADRETURNF (43)
    ;
}


object _71lookahead(object _dist_64490, object _state_64491)
{
    object _32017 = NOVALUE; // 64497 32017
    object _32016 = NOVALUE; // 64496 32016
// skipping _32015  name type: 0
    object _32014 = NOVALUE; // 64494 32014
    object _32013 = NOVALUE; // 64493 32013
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lookahead pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_dist_64490)) {
        _1 = (object)(DBL_PTR(_dist_64490)->dbl);
        DeRefDS(_dist_64490);
        _dist_64490 = _1;
    }
    // SubProg lookahead pc: 3 op: STARTLINE (58)

    /** tokenize.e:383		state = state -- supress warning*/
    // SubProg lookahead pc: 5 op: ASSIGN (18)
    Ref(_state_64491);
    DeRef(_state_64491);
    _state_64491 = _state_64491;
    // SubProg lookahead pc: 8 op: STARTLINE (58)

    /** tokenize.e:384		if sti + dist <= length(source_text) then*/
    // SubProg lookahead pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 12 op: PLUS (11)
    _32013 = _71sti_64255 + _dist_64490;
    if ((object)((uintptr_t)_32013 + (uintptr_t)HIGH_BITS) >= 0){
        _32013 = NewDouble((eudouble)_32013);
    }
    // SubProg lookahead pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64254)){
            _32014 = SEQ_PTR(_71source_text_64254)->length;
    }
    else {
        _32014 = 1;
    }
    // SubProg lookahead pc: 21 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _32013, _32014)){
        DeRef(_32013);
        _32013 = NOVALUE;
        _32014 = NOVALUE;
        goto L1; // [21] 46
    }
    DeRef(_32013);
    _32013 = NOVALUE;
    _32014 = NOVALUE;
    // SubProg lookahead pc: 25 op: STARTLINE (58)

    /** tokenize.e:385			return source_text[sti + dist]*/
    // SubProg lookahead pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg lookahead pc: 31 op: PLUS (11)
    _32016 = _71sti_64255 + _dist_64490;
    // SubProg lookahead pc: 35 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64254);
    _32017 = (object)*(((s1_ptr)_2)->base + _32016);
    // SubProg lookahead pc: 39 op: RETURNF (28)
    Ref(_32017);

// Exiting block BLOCK: lookahead

// block var dist_64490

// block var state_64491
    DeRef(_state_64491);
    _32016 = NOVALUE;
    return _32017;
    // SubProg lookahead pc: 43 op: ELSE (23)
    goto L2; // [43] 53
    // SubProg lookahead pc: 45 op: NOP1 (159)
L1: // addr: 46 pc: 45 sub: 64488 op: 159
    // SubProg lookahead pc: 46 op: STARTLINE (58)

    /** tokenize.e:387			return io:EOF*/
    // SubProg lookahead pc: 48 op: RETURNF (28)

// Exiting block BLOCK: lookahead

// block var dist_64490

// block var state_64491
    DeRef(_state_64491);
    _32017 = NOVALUE;
    DeRef(_32016);
    _32016 = NOVALUE;
    return -1;
    // SubProg lookahead pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 64488 op: 159
    // SubProg lookahead pc: 53 op: BADRETURNF (43)
    ;
}


object _71scan_white(object _state_64501)
{
// skipping _32019  name type: 0
    object _32018 = NOVALUE; // 64503 32018
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_white pc: 1 op: STARTLINE (58)

    /** tokenize.e:393		Token[TTYPE] = T_NEWLINE*/
    // SubProg scan_white pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 5 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    // SubProg scan_white pc: 9 op: STARTLINE (58)

    /** tokenize.e:394		Token[TDATA] = ""*/
    // SubProg scan_white pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 13 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg scan_white pc: 17 op: STARTLINE (58)

    /** tokenize.e:396		while White_Char(Look) do*/
    // SubProg scan_white pc: 19 op: NOP2 (110)
    // SubProg scan_white pc: 21 op: NOPWHILE (158)
L1: // addr: 22 pc: 21 sub: 64499 op: 158
    // SubProg scan_white pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 24 op: PROC (27)
    _32018 = _71White_Char(_71Look_64258);
    // SubProg scan_white pc: 28 op: WHILE (47)
    if (_32018 <= 0) {
        if (_32018 == 0) {
            DeRef(_32018);
            _32018 = NOVALUE;
            goto L2; // [28] 56
        }
        else {
            if (!IS_ATOM_INT(_32018) && DBL_PTR(_32018)->dbl == 0.0){
                DeRef(_32018);
                _32018 = NOVALUE;
                goto L2; // [28] 56
            }
            DeRef(_32018);
            _32018 = NOVALUE;
        }
    }
    DeRef(_32018);
    _32018 = NOVALUE;
    // SubProg scan_white pc: 31 op: STARTLINE (58)

    /** tokenize.e:397			scan_char(state)*/
    // SubProg scan_white pc: 33 op: PROC (27)
    Ref(_state_64501);
    _71scan_char(_state_64501);
    // SubProg scan_white pc: 36 op: STARTLINE (58)

    /** tokenize.e:398			if Look = EOL then*/
    // SubProg scan_white pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_white pc: 40 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 10)
    goto L1; // [40] 22
    // SubProg scan_white pc: 44 op: STARTLINE (58)

    /** tokenize.e:399				return TRUE*/
    // SubProg scan_white pc: 46 op: RETURNF (28)

// Exiting block BLOCK: scan_white

// block var state_64501
    DeRef(_state_64501);
    return 1;
    // SubProg scan_white pc: 50 op: NOP1 (159)
    // SubProg scan_white pc: 51 op: STARTLINE (58)

    /** tokenize.e:401		end while*/
    // SubProg scan_white pc: 53 op: ENDWHILE (22)
    goto L1; // [53] 22
    // SubProg scan_white pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 64499 op: 159
    // SubProg scan_white pc: 56 op: STARTLINE (58)

    /** tokenize.e:403		return FALSE*/
    // SubProg scan_white pc: 58 op: RETURNF (28)

// Exiting block BLOCK: scan_white

// block var state_64501
    DeRef(_state_64501);
    return 0;
    // SubProg scan_white pc: 62 op: BADRETURNF (43)
    ;
}


object _71scankeep_white(object _state_64508)
{
    object _32025 = NOVALUE; // 64517 32025
    object _32024 = NOVALUE; // 64516 32024
// skipping _32023  name type: 0
    object _32022 = NOVALUE; // 64512 32022
    object _32021 = NOVALUE; // 64511 32021
    object _32020 = NOVALUE; // 64510 32020
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scankeep_white pc: 1 op: STARTLINE (58)

    /** tokenize.e:408		Token[TTYPE] = T_WHITE*/
    // SubProg scankeep_white pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 5 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 40;
    DeRef(_1);
    // SubProg scankeep_white pc: 9 op: STARTLINE (58)

    /** tokenize.e:409		Token[TDATA] = ""*/
    // SubProg scankeep_white pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 13 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg scankeep_white pc: 17 op: STARTLINE (58)

    /** tokenize.e:411		while White_Char(Look) do*/
    // SubProg scankeep_white pc: 19 op: NOP2 (110)
    // SubProg scankeep_white pc: 21 op: NOPWHILE (158)
L1: // addr: 22 pc: 21 sub: 64506 op: 158
    // SubProg scankeep_white pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 24 op: PROC (27)
    _32020 = _71White_Char(_71Look_64258);
    // SubProg scankeep_white pc: 28 op: WHILE (47)
    if (_32020 <= 0) {
        if (_32020 == 0) {
            DeRef(_32020);
            _32020 = NOVALUE;
            goto L2; // [28] 72
        }
        else {
            if (!IS_ATOM_INT(_32020) && DBL_PTR(_32020)->dbl == 0.0){
                DeRef(_32020);
                _32020 = NOVALUE;
                goto L2; // [28] 72
            }
            DeRef(_32020);
            _32020 = NOVALUE;
        }
    }
    DeRef(_32020);
    _32020 = NOVALUE;
    // SubProg scankeep_white pc: 31 op: STARTLINE (58)

    /** tokenize.e:412			Token[TDATA] &= Look*/
    // SubProg scankeep_white pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 37 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32021 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scankeep_white pc: 41 op: CONCAT (15)
    if (IS_SEQUENCE(_32021) && IS_ATOM(_71Look_64258)) {
        Append(&_32022, _32021, _71Look_64258);
    }
    else if (IS_ATOM(_32021) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32022, _32021, _71Look_64258);
        _32021 = NOVALUE;
    }
    _32021 = NOVALUE;
    // SubProg scankeep_white pc: 45 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32022;
    if( _1 != _32022 ){
        DeRef(_1);
    }
    _32022 = NOVALUE;
    // SubProg scankeep_white pc: 49 op: STARTLINE (58)

    /** tokenize.e:413			scan_char(state)*/
    // SubProg scankeep_white pc: 51 op: PROC (27)
    Ref(_state_64508);
    _71scan_char(_state_64508);
    // SubProg scankeep_white pc: 54 op: STARTLINE (58)

    /** tokenize.e:414			if Look = EOL then*/
    // SubProg scankeep_white pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 58 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 10)
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
L2: // addr: 72 pc: 71 sub: 64506 op: 159
    // SubProg scankeep_white pc: 72 op: STARTLINE (58)

    /** tokenize.e:419		if length(Token[TDATA]) then*/
    // SubProg scankeep_white pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg scankeep_white pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32024 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scankeep_white pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_32024)){
            _32025 = SEQ_PTR(_32024)->length;
    }
    else {
        _32025 = 1;
    }
    _32024 = NOVALUE;
    // SubProg scankeep_white pc: 83 op: IF (20)
    if (_32025 == 0)
    {
        _32025 = NOVALUE;
        goto L3; // [83] 93
    }
    else{
        _32025 = NOVALUE;
    }
    // SubProg scankeep_white pc: 86 op: STARTLINE (58)

    /** tokenize.e:420			return TRUE*/
    // SubProg scankeep_white pc: 88 op: RETURNF (28)

// Exiting block BLOCK: scankeep_white

// block var state_64508
    DeRef(_state_64508);
    _32024 = NOVALUE;
    return 1;
    // SubProg scankeep_white pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 64506 op: 159
    // SubProg scankeep_white pc: 93 op: STARTLINE (58)

    /** tokenize.e:422		return FALSE*/
    // SubProg scankeep_white pc: 95 op: RETURNF (28)

// Exiting block BLOCK: scankeep_white

// block var state_64508
    DeRef(_state_64508);
    _32024 = NOVALUE;
    return 0;
    // SubProg scankeep_white pc: 99 op: BADRETURNF (43)
    ;
}


object _71scan_multicomment(object _state_64520, object _multi_64522)
{
    object _32036 = NOVALUE; // 64538 32036
    object _32035 = NOVALUE; // 64537 32035
    object _32034 = NOVALUE; // 64536 32034
    object _32033 = NOVALUE; // 64535 32033
    object _32031 = NOVALUE; // 64533 32031
    object _32030 = NOVALUE; // 64532 32030
    object _32029 = NOVALUE; // 64531 32029
    object _32028 = NOVALUE; // 64530 32028
// skipping _32027  name type: 0
// skipping _32026  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_multicomment pc: 1 op: STARTLINE (58)

    /** tokenize.e:426		Token[TTYPE] = T_COMMENT*/
    // SubProg scan_multicomment pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 5 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    // SubProg scan_multicomment pc: 9 op: STARTLINE (58)

    /** tokenize.e:427		if not multi then*/
    // SubProg scan_multicomment pc: 11 op: NOT_IFW (108)
    if (_multi_64522 != 0)
    goto L1; // [11] 23
    // SubProg scan_multicomment pc: 14 op: STARTLINE (58)

    /** tokenize.e:428			Token[TDATA] = "/"*/
    // SubProg scan_multicomment pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 18 op: ASSIGN_SUBS (16)
    RefDS(_23512);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23512;
    DeRef(_1);
    // SubProg scan_multicomment pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 64518 op: 159
    // SubProg scan_multicomment pc: 23 op: STARTLINE (58)

    /** tokenize.e:430		Token[TFORM] = TF_COMMENT_MULTIPLE*/
    // SubProg scan_multicomment pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 27 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);
    // SubProg scan_multicomment pc: 31 op: STARTLINE (58)

    /** tokenize.e:432		while 1 do*/
    // SubProg scan_multicomment pc: 33 op: NOP2 (110)
    // SubProg scan_multicomment pc: 35 op: NOPWHILE (158)
L2: // addr: 36 pc: 35 sub: 64518 op: 158
    // SubProg scan_multicomment pc: 36 op: STARTLINE (58)

    /** tokenize.e:433			if (Look = io:EOF) then*/
    // SubProg scan_multicomment pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 40 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != -1)
    goto L3; // [40] 56
    // SubProg scan_multicomment pc: 44 op: STARTLINE (58)

    /** tokenize.e:434				last_multi = TF_COMMENT_MULTIPLE*/
    // SubProg scan_multicomment pc: 46 op: ASSIGN (18)
    DeRef(_71last_multi_64613);
    _71last_multi_64613 = 9;
    // SubProg scan_multicomment pc: 49 op: STARTLINE (58)

    /** tokenize.e:435				return TRUE */
    // SubProg scan_multicomment pc: 51 op: RETURNF (28)

// Exiting block BLOCK: scan_multicomment

// block var state_64520
    DeRef(_state_64520);

// block var multi_64522
    return 1;
    // SubProg scan_multicomment pc: 55 op: NOP1 (159)
L3: // addr: 56 pc: 55 sub: 64518 op: 159
    // SubProg scan_multicomment pc: 56 op: STARTLINE (58)

    /** tokenize.e:438			if (Look = '*') and lookahead(1) = '/' then*/
    // SubProg scan_multicomment pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 60 op: EQUALS (3)
    _32028 = (_71Look_64258 == 42);
    // SubProg scan_multicomment pc: 64 op: SC1_AND_IF (146)
    if (_32028 == 0) {
        goto L4; // [64] 114
    }
    // SubProg scan_multicomment pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 70 op: PROC (27)
    Ref(_71g_state_64304);
    _32030 = _71lookahead(1, _71g_state_64304);
    // SubProg scan_multicomment pc: 75 op: EQUALS (3)
    if (IS_ATOM_INT(_32030)) {
        _32031 = (_32030 == 47);
    }
    else {
        _32031 = binary_op(EQUALS, _32030, 47);
    }
    DeRef(_32030);
    _32030 = NOVALUE;
    // SubProg scan_multicomment pc: 79 op: NOP1 (159)
    // SubProg scan_multicomment pc: 80 op: IF (20)
    if (_32031 == 0) {
        DeRef(_32031);
        _32031 = NOVALUE;
        goto L4; // [80] 114
    }
    else {
        if (!IS_ATOM_INT(_32031) && DBL_PTR(_32031)->dbl == 0.0){
            DeRef(_32031);
            _32031 = NOVALUE;
            goto L4; // [80] 114
        }
        DeRef(_32031);
        _32031 = NOVALUE;
    }
    DeRef(_32031);
    _32031 = NOVALUE;
    // SubProg scan_multicomment pc: 83 op: STARTLINE (58)

    //tokenize.e:439				Token[TDATA] &= "*/"
    // SubProg scan_multicomment pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 87 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32033 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_multicomment pc: 91 op: CONCAT (15)
    if (IS_SEQUENCE(_32033) && IS_ATOM(_32032)) {
    }
    else if (IS_ATOM(_32033) && IS_SEQUENCE(_32032)) {
        Ref(_32033);
        Prepend(&_32034, _32032, _32033);
    }
    else {
        Concat((object_ptr)&_32034, _32033, _32032);
        _32033 = NOVALUE;
    }
    _32033 = NOVALUE;
    // SubProg scan_multicomment pc: 95 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32034;
    if( _1 != _32034 ){
        DeRef(_1);
    }
    _32034 = NOVALUE;
    // SubProg scan_multicomment pc: 99 op: STARTLINE (58)

    //tokenize.e:441				scan_char(state) -- skip the */
    // SubProg scan_multicomment pc: 101 op: PROC (27)
    Ref(_state_64520);
    _71scan_char(_state_64520);
    // SubProg scan_multicomment pc: 104 op: STARTLINE (58)

    /** tokenize.e:442				scan_char(state)*/
    // SubProg scan_multicomment pc: 106 op: PROC (27)
    Ref(_state_64520);
    _71scan_char(_state_64520);
    // SubProg scan_multicomment pc: 109 op: STARTLINE (58)

    /** tokenize.e:443				exit*/
    // SubProg scan_multicomment pc: 111 op: EXIT (61)
    goto L5; // [111] 142
    // SubProg scan_multicomment pc: 113 op: NOP1 (159)
L4: // addr: 114 pc: 113 sub: 64518 op: 159
    // SubProg scan_multicomment pc: 114 op: STARTLINE (58)

    /** tokenize.e:446			Token[TDATA] &= Look*/
    // SubProg scan_multicomment pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_multicomment pc: 120 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32035 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_multicomment pc: 124 op: CONCAT (15)
    if (IS_SEQUENCE(_32035) && IS_ATOM(_71Look_64258)) {
        Append(&_32036, _32035, _71Look_64258);
    }
    else if (IS_ATOM(_32035) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32036, _32035, _71Look_64258);
        _32035 = NOVALUE;
    }
    _32035 = NOVALUE;
    // SubProg scan_multicomment pc: 128 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32036;
    if( _1 != _32036 ){
        DeRef(_1);
    }
    _32036 = NOVALUE;
    // SubProg scan_multicomment pc: 132 op: STARTLINE (58)

    /** tokenize.e:447			scan_char(state)*/
    // SubProg scan_multicomment pc: 134 op: PROC (27)
    Ref(_state_64520);
    _71scan_char(_state_64520);
    // SubProg scan_multicomment pc: 137 op: STARTLINE (58)

    /** tokenize.e:448		end while*/
    // SubProg scan_multicomment pc: 139 op: ENDWHILE (22)
    goto L2; // [139] 36
    // SubProg scan_multicomment pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 64518 op: 159
    // SubProg scan_multicomment pc: 142 op: STARTLINE (58)

    /** tokenize.e:450		return TRUE*/
    // SubProg scan_multicomment pc: 144 op: RETURNF (28)

// Exiting block BLOCK: scan_multicomment

// block var state_64520
    DeRef(_state_64520);

// block var multi_64522
    DeRef(_32028);
    _32028 = NOVALUE;
    return 1;
    // SubProg scan_multicomment pc: 148 op: BADRETURNF (43)
    ;
}


void _71scan_escaped_char(object _state_64543)
{
    object _f_64544 = NOVALUE;
// skipping _32044  name type: 0
// skipping _32043  name type: 0
    object _32042 = NOVALUE; // 64550 32042
    object _32041 = NOVALUE; // 64549 32041
// skipping _32040  name type: 0
    object _32039 = NOVALUE; // 64546 32039
    object _32038 = NOVALUE; // 64545 32038
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_escaped_char pc: 1 op: STARTLINE (58)

    /** tokenize.e:457		Token[TDATA] &= Look*/
    // SubProg scan_escaped_char pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 7 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32038 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_escaped_char pc: 11 op: CONCAT (15)
    if (IS_SEQUENCE(_32038) && IS_ATOM(_71Look_64258)) {
        Append(&_32039, _32038, _71Look_64258);
    }
    else if (IS_ATOM(_32038) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32039, _32038, _71Look_64258);
        _32038 = NOVALUE;
    }
    _32038 = NOVALUE;
    // SubProg scan_escaped_char pc: 15 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32039;
    if( _1 != _32039 ){
        DeRef(_1);
    }
    _32039 = NOVALUE;
    // SubProg scan_escaped_char pc: 19 op: STARTLINE (58)

    /** tokenize.e:458		if (Look = '\\') then*/
    // SubProg scan_escaped_char pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 23 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 92)
    goto L1; // [23] 71
    // SubProg scan_escaped_char pc: 27 op: STARTLINE (58)

    /** tokenize.e:459			scan_char(state)*/
    // SubProg scan_escaped_char pc: 29 op: PROC (27)
    Ref(_state_64543);
    _71scan_char(_state_64543);
    // SubProg scan_escaped_char pc: 32 op: STARTLINE (58)

    /** tokenize.e:460			Token[TDATA] &= Look*/
    // SubProg scan_escaped_char pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 38 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32041 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_escaped_char pc: 42 op: CONCAT (15)
    if (IS_SEQUENCE(_32041) && IS_ATOM(_71Look_64258)) {
        Append(&_32042, _32041, _71Look_64258);
    }
    else if (IS_ATOM(_32041) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32042, _32041, _71Look_64258);
        _32041 = NOVALUE;
    }
    _32041 = NOVALUE;
    // SubProg scan_escaped_char pc: 46 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32042;
    if( _1 != _32042 ){
        DeRef(_1);
    }
    _32042 = NOVALUE;
    // SubProg scan_escaped_char pc: 50 op: STARTLINE (58)

    /** tokenize.e:461			f = find(Look,QFLAGS)*/
    // SubProg scan_escaped_char pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_escaped_char pc: 54 op: FIND_FROM (176)
    _f_64544 = find_from(_71Look_64258, _71QFLAGS_64539, 1);
    // SubProg scan_escaped_char pc: 59 op: STARTLINE (58)

    /** tokenize.e:462			if not f then*/
    // SubProg scan_escaped_char pc: 61 op: NOT_IFW (108)
    if (_f_64544 != 0)
    goto L2; // [61] 70
    // SubProg scan_escaped_char pc: 64 op: STARTLINE (58)

    /** tokenize.e:463				report_error(ERR_ESCAPE)*/
    // SubProg scan_escaped_char pc: 66 op: PROC (27)
    _71report_error(2);
    // SubProg scan_escaped_char pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 64541 op: 159
    // SubProg scan_escaped_char pc: 70 op: NOP1 (159)
L1: // addr: 71 pc: 70 sub: 64541 op: 159
    // SubProg scan_escaped_char pc: 71 op: STARTLINE (58)

    /** tokenize.e:466		scan_char(state)*/
    // SubProg scan_escaped_char pc: 73 op: PROC (27)
    Ref(_state_64543);
    _71scan_char(_state_64543);
    // SubProg scan_escaped_char pc: 76 op: STARTLINE (58)

    /** tokenize.e:467	end procedure*/
    // SubProg scan_escaped_char pc: 78 op: RETURNP (29)

// Exiting block BLOCK: scan_escaped_char

// block var state_64543
    DeRef(_state_64543);

// block var f_64544
    return;
    // SubProg scan_escaped_char pc: 81 op: BADRETURNF (43)
    ;
}


object _71scan_qchar(object _state_64556)
{
    object _32064 = NOVALUE; // 64583 32064
    object _32063 = NOVALUE; // 64582 32063
    object _32062 = NOVALUE; // 64581 32062
    object _32061 = NOVALUE; // 64580 32061
    object _32060 = NOVALUE; // 64578 32060
    object _32059 = NOVALUE; // 64577 32059
    object _32058 = NOVALUE; // 64576 32058
    object _32057 = NOVALUE; // 64575 32057
// skipping _32056  name type: 0
    object _32055 = NOVALUE; // 64571 32055
    object _32054 = NOVALUE; // 64570 32054
    object _32053 = NOVALUE; // 64569 32053
    object _32052 = NOVALUE; // 64568 32052
    object _32051 = NOVALUE; // 64567 32051
    object _32050 = NOVALUE; // 64565 32050
    object _32049 = NOVALUE; // 64564 32049
    object _32048 = NOVALUE; // 64563 32048
    object _32047 = NOVALUE; // 64562 32047
// skipping _32046  name type: 0
// skipping _32045  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_qchar pc: 1 op: STARTLINE (58)

    /** tokenize.e:470		if (Look != '\'') then return FALSE end if*/
    // SubProg scan_qchar pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 5 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 39)
    goto L1; // [5] 14
    // SubProg scan_qchar pc: 9 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64556
    DeRef(_state_64556);
    return 0;
    // SubProg scan_qchar pc: 13 op: NOP1 (159)
L1: // addr: 14 pc: 13 sub: 64554 op: 159
    // SubProg scan_qchar pc: 14 op: STARTLINE (58)

    /** tokenize.e:471		scan_char(state)*/
    // SubProg scan_qchar pc: 16 op: PROC (27)
    Ref(_state_64556);
    _71scan_char(_state_64556);
    // SubProg scan_qchar pc: 19 op: STARTLINE (58)

    /** tokenize.e:472		Token[TTYPE] = T_CHAR*/
    // SubProg scan_qchar pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 23 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 7;
    DeRef(_1);
    // SubProg scan_qchar pc: 27 op: STARTLINE (58)

    /** tokenize.e:473		Token[TDATA] = ""*/
    // SubProg scan_qchar pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 31 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg scan_qchar pc: 35 op: STARTLINE (58)

    /** tokenize.e:474		if (Look = EOL) then*/
    // SubProg scan_qchar pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 39 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 10)
    goto L2; // [39] 89
    // SubProg scan_qchar pc: 43 op: STARTLINE (58)

    /** tokenize.e:475			if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_qchar pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64556)){
        _32047 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64556)->dbl));
    }
    else{
        _32047 = (object)*(((s1_ptr)_2)->base + _state_64556);
    }
    // SubProg scan_qchar pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32047);
    _32048 = (object)*(((s1_ptr)_2)->base + 8);
    _32047 = NOVALUE;
    // SubProg scan_qchar pc: 55 op: IF (20)
    if (_32048 == 0) {
        _32048 = NOVALUE;
        goto L3; // [55] 77
    }
    else {
        if (!IS_ATOM_INT(_32048) && DBL_PTR(_32048)->dbl == 0.0){
            _32048 = NOVALUE;
            goto L3; // [55] 77
        }
        _32048 = NOVALUE;
    }
    _32048 = NOVALUE;
    // SubProg scan_qchar pc: 58 op: STARTLINE (58)

    /** tokenize.e:476				Token[TDATA] = "'" & Token[TDATA]*/
    // SubProg scan_qchar pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 64 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32049 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 68 op: CONCAT (15)
    if (IS_SEQUENCE(_26277) && IS_ATOM(_32049)) {
        Ref(_32049);
        Append(&_32050, _26277, _32049);
    }
    else if (IS_ATOM(_26277) && IS_SEQUENCE(_32049)) {
    }
    else {
        Concat((object_ptr)&_32050, _26277, _32049);
    }
    _32049 = NOVALUE;
    // SubProg scan_qchar pc: 72 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32050;
    if( _1 != _32050 ){
        DeRef(_1);
    }
    _32050 = NOVALUE;
    // SubProg scan_qchar pc: 76 op: NOP1 (159)
L3: // addr: 77 pc: 76 sub: 64554 op: 159
    // SubProg scan_qchar pc: 77 op: STARTLINE (58)

    /** tokenize.e:478			report_error(ERR_EOL_CHAR)*/
    // SubProg scan_qchar pc: 79 op: PROC (27)
    _71report_error(3);
    // SubProg scan_qchar pc: 82 op: STARTLINE (58)

    /** tokenize.e:479			return TRUE*/
    // SubProg scan_qchar pc: 84 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64556
    DeRef(_state_64556);
    return 1;
    // SubProg scan_qchar pc: 88 op: NOP1 (159)
L2: // addr: 89 pc: 88 sub: 64554 op: 159
    // SubProg scan_qchar pc: 89 op: STARTLINE (58)

    /** tokenize.e:481		scan_escaped_char(state)*/
    // SubProg scan_qchar pc: 91 op: PROC (27)
    Ref(_state_64556);
    _71scan_escaped_char(_state_64556);
    // SubProg scan_qchar pc: 94 op: STARTLINE (58)

    /** tokenize.e:482		while Look != '\'' and Look != EOL do*/
    // SubProg scan_qchar pc: 96 op: NOP2 (110)
    // SubProg scan_qchar pc: 98 op: NOPWHILE (158)
L4: // addr: 99 pc: 98 sub: 64554 op: 158
    // SubProg scan_qchar pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 101 op: NOTEQ (4)
    _32051 = (_71Look_64258 != 39);
    // SubProg scan_qchar pc: 105 op: SC1_AND_IF (146)
    if (_32051 == 0) {
        goto L5; // [105] 147
    }
    // SubProg scan_qchar pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 111 op: NOTEQ (4)
    _32053 = (_71Look_64258 != 10);
    // SubProg scan_qchar pc: 115 op: NOP1 (159)
    // SubProg scan_qchar pc: 116 op: WHILE (47)
    if (_32053 == 0)
    {
        DeRef(_32053);
        _32053 = NOVALUE;
        goto L5; // [116] 147
    }
    else{
        DeRef(_32053);
        _32053 = NOVALUE;
    }
    // SubProg scan_qchar pc: 119 op: STARTLINE (58)

    /** tokenize.e:483			Token[TDATA] &= Look*/
    // SubProg scan_qchar pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 125 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32054 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 129 op: CONCAT (15)
    if (IS_SEQUENCE(_32054) && IS_ATOM(_71Look_64258)) {
        Append(&_32055, _32054, _71Look_64258);
    }
    else if (IS_ATOM(_32054) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32055, _32054, _71Look_64258);
        _32054 = NOVALUE;
    }
    _32054 = NOVALUE;
    // SubProg scan_qchar pc: 133 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32055;
    if( _1 != _32055 ){
        DeRef(_1);
    }
    _32055 = NOVALUE;
    // SubProg scan_qchar pc: 137 op: STARTLINE (58)

    /** tokenize.e:484			scan_char( state )*/
    // SubProg scan_qchar pc: 139 op: PROC (27)
    Ref(_state_64556);
    _71scan_char(_state_64556);
    // SubProg scan_qchar pc: 142 op: STARTLINE (58)

    /** tokenize.e:485		end while*/
    // SubProg scan_qchar pc: 144 op: ENDWHILE (22)
    goto L4; // [144] 99
    // SubProg scan_qchar pc: 146 op: NOP1 (159)
L5: // addr: 147 pc: 146 sub: 64554 op: 159
    // SubProg scan_qchar pc: 147 op: STARTLINE (58)

    /** tokenize.e:486		if (Look != '\'') then*/
    // SubProg scan_qchar pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 151 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 39)
    goto L6; // [151] 201
    // SubProg scan_qchar pc: 155 op: STARTLINE (58)

    /** tokenize.e:487			if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_qchar pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 159 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64556)){
        _32057 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64556)->dbl));
    }
    else{
        _32057 = (object)*(((s1_ptr)_2)->base + _state_64556);
    }
    // SubProg scan_qchar pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32057);
    _32058 = (object)*(((s1_ptr)_2)->base + 8);
    _32057 = NOVALUE;
    // SubProg scan_qchar pc: 167 op: IF (20)
    if (_32058 == 0) {
        _32058 = NOVALUE;
        goto L7; // [167] 189
    }
    else {
        if (!IS_ATOM_INT(_32058) && DBL_PTR(_32058)->dbl == 0.0){
            _32058 = NOVALUE;
            goto L7; // [167] 189
        }
        _32058 = NOVALUE;
    }
    _32058 = NOVALUE;
    // SubProg scan_qchar pc: 170 op: STARTLINE (58)

    /** tokenize.e:488				Token[TDATA] = "'" & Token[TDATA]*/
    // SubProg scan_qchar pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 176 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32059 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 180 op: CONCAT (15)
    if (IS_SEQUENCE(_26277) && IS_ATOM(_32059)) {
        Ref(_32059);
        Append(&_32060, _26277, _32059);
    }
    else if (IS_ATOM(_26277) && IS_SEQUENCE(_32059)) {
    }
    else {
        Concat((object_ptr)&_32060, _26277, _32059);
    }
    _32059 = NOVALUE;
    // SubProg scan_qchar pc: 184 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32060;
    if( _1 != _32060 ){
        DeRef(_1);
    }
    _32060 = NOVALUE;
    // SubProg scan_qchar pc: 188 op: NOP1 (159)
L7: // addr: 189 pc: 188 sub: 64554 op: 159
    // SubProg scan_qchar pc: 189 op: STARTLINE (58)

    /** tokenize.e:490			report_error(ERR_CLOSE_CHAR)*/
    // SubProg scan_qchar pc: 191 op: PROC (27)
    _71report_error(4);
    // SubProg scan_qchar pc: 194 op: STARTLINE (58)

    /** tokenize.e:491			return TRUE*/
    // SubProg scan_qchar pc: 196 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64556
    DeRef(_state_64556);
    DeRef(_32051);
    _32051 = NOVALUE;
    return 1;
    // SubProg scan_qchar pc: 200 op: NOP1 (159)
L6: // addr: 201 pc: 200 sub: 64554 op: 159
    // SubProg scan_qchar pc: 201 op: STARTLINE (58)

    /** tokenize.e:493		scan_char(state)*/
    // SubProg scan_qchar pc: 203 op: PROC (27)
    Ref(_state_64556);
    _71scan_char(_state_64556);
    // SubProg scan_qchar pc: 206 op: STARTLINE (58)

    /** tokenize.e:494		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_qchar pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 210 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64556)){
        _32061 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64556)->dbl));
    }
    else{
        _32061 = (object)*(((s1_ptr)_2)->base + _state_64556);
    }
    // SubProg scan_qchar pc: 214 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32061);
    _32062 = (object)*(((s1_ptr)_2)->base + 8);
    _32061 = NOVALUE;
    // SubProg scan_qchar pc: 218 op: IF (20)
    if (_32062 == 0) {
        _32062 = NOVALUE;
        goto L8; // [218] 242
    }
    else {
        if (!IS_ATOM_INT(_32062) && DBL_PTR(_32062)->dbl == 0.0){
            _32062 = NOVALUE;
            goto L8; // [218] 242
        }
        _32062 = NOVALUE;
    }
    _32062 = NOVALUE;
    // SubProg scan_qchar pc: 221 op: STARTLINE (58)

    /** tokenize.e:495			Token[TDATA] = "'" & Token[TDATA] & "'"*/
    // SubProg scan_qchar pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_qchar pc: 227 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32063 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_qchar pc: 231 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _26277;
        concat_list[1] = _32063;
        concat_list[2] = _26277;
        Concat_N((object_ptr)&_32064, concat_list, 3);
    }
    _32063 = NOVALUE;
    // SubProg scan_qchar pc: 237 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32064;
    if( _1 != _32064 ){
        DeRef(_1);
    }
    _32064 = NOVALUE;
    // SubProg scan_qchar pc: 241 op: NOP1 (159)
L8: // addr: 242 pc: 241 sub: 64554 op: 159
    // SubProg scan_qchar pc: 242 op: STARTLINE (58)

    /** tokenize.e:497		return TRUE*/
    // SubProg scan_qchar pc: 244 op: RETURNF (28)

// Exiting block BLOCK: scan_qchar

// block var state_64556
    DeRef(_state_64556);
    DeRef(_32051);
    _32051 = NOVALUE;
    return 1;
    // SubProg scan_qchar pc: 248 op: BADRETURNF (43)
    ;
}


object _71lookahead_for(object _needle_64586, object _look_at_64587)
{
// skipping _32071  name type: 0
// skipping _32070  name type: 0
    object _32069 = NOVALUE; // 64596 32069
    object _32068 = NOVALUE; // 64595 32068
    object _32067 = NOVALUE; // 64593 32067
// skipping _32066  name type: 0
    object _32065 = NOVALUE; // 64589 32065
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lookahead_for pc: 1 op: INTEGER_CHECK (96)
    // SubProg lookahead_for pc: 3 op: STARTLINE (58)

    /** tokenize.e:501		if atom( needle ) then*/
    // SubProg lookahead_for pc: 5 op: IS_AN_ATOM (67)
    _32065 = 0;
    // SubProg lookahead_for pc: 8 op: IF (20)
    if (_32065 == 0)
    {
        _32065 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _32065 = NOVALUE;
    }
    // SubProg lookahead_for pc: 11 op: STARTLINE (58)

    /** tokenize.e:502			needle = {needle}*/
    // SubProg lookahead_for pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _needle_64586;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_needle_64586);
    ((intptr_t*)_2)[1] = _needle_64586;
    _needle_64586 = MAKE_SEQ(_1);
    DeRefDSi(_0);
    // SubProg lookahead_for pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 64584 op: 159
    // SubProg lookahead_for pc: 18 op: STARTLINE (58)

    /** tokenize.e:504		for i = 1 to length( needle ) do*/
    // SubProg lookahead_for pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_needle_64586)){
            _32067 = SEQ_PTR(_needle_64586)->length;
    }
    else {
        _32067 = 1;
    }
    // SubProg lookahead_for pc: 23 op: FOR_I (125)
    {
        object _i_64592;
        _i_64592 = 1;
L2: // addr: 30 pc: 23 sub: 64584 op: 125
        if (_i_64592 > _32067){
            goto L3; // [23] 67
        }
        // SubProg lookahead_for pc: 30 op: STARTLINE (58)

        /** tokenize.e:505			if lookahead( look_at ) != needle[i] then*/
        // SubProg lookahead_for pc: 32 op: GLOBAL_INIT_CHECK (109)
        // SubProg lookahead_for pc: 34 op: PROC (27)
        Ref(_71g_state_64304);
        _32068 = _71lookahead(_look_at_64587, _71g_state_64304);
        // SubProg lookahead_for pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_needle_64586);
        _32069 = (object)*(((s1_ptr)_2)->base + _i_64592);
        // SubProg lookahead_for pc: 43 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _32068, _32069)){
            DeRef(_32068);
            _32068 = NOVALUE;
            _32069 = NOVALUE;
            goto L4; // [43] 54
        }
        DeRef(_32068);
        _32068 = NOVALUE;
        _32069 = NOVALUE;
        // SubProg lookahead_for pc: 47 op: STARTLINE (58)

        /** tokenize.e:506				return FALSE*/
        // SubProg lookahead_for pc: 49 op: RETURNF (28)

// Exiting block BLOCK: lookahead_for

// block var needle_64586
        DeRef(_needle_64586);

// block var look_at_64587
        return 0;
        // SubProg lookahead_for pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 64584 op: 159
        // SubProg lookahead_for pc: 54 op: STARTLINE (58)

        /** tokenize.e:508			look_at += 1*/
        // SubProg lookahead_for pc: 56 op: PLUS1_I (117)
        _look_at_64587 = _look_at_64587 + 1;
        // SubProg lookahead_for pc: 60 op: STARTLINE (58)

        /** tokenize.e:509		end for*/
        // SubProg lookahead_for pc: 62 op: ENDFOR_INT_UP1 (54)
        _i_64592 = _i_64592 + 1;
        goto L2; // [62] 30
L3: // addr: 67 pc: 62 sub: 64584 op: 54
        ;
    }
    // SubProg lookahead_for pc: 67 op: STARTLINE (58)

    /** tokenize.e:510		return TRUE*/
    // SubProg lookahead_for pc: 69 op: RETURNF (28)

// Exiting block BLOCK: lookahead_for

// block var needle_64586
    DeRef(_needle_64586);

// block var look_at_64587
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
    Ref(_71last_multi_64613);

// Exiting block BLOCK: last_multiline_token
    return _71last_multi_64613;
    // SubProg last_multiline_token pc: 9 op: BADRETURNF (43)
    ;
}


object _71raw_string(object _delimiter_64618, object _state_64619, object _multi_64620)
{
    object _32103 = NOVALUE; // 64653 32103
    object _32102 = NOVALUE; // 64652 32102
    object _32101 = NOVALUE; // 64650 32101
    object _32100 = NOVALUE; // 64649 32100
// skipping _32099  name type: 0
    object _32098 = NOVALUE; // 64645 32098
    object _32097 = NOVALUE; // 64644 32097
// skipping _32096  name type: 0
// skipping _32095  name type: 0
    object _32094 = NOVALUE; // 64639 32094
    object _32093 = NOVALUE; // 64638 32093
// skipping _32092  name type: 0
    object _32091 = NOVALUE; // 64635 32091
// skipping _32090  name type: 0
    object _32089 = NOVALUE; // 64632 32089
    object _32088 = NOVALUE; // 64631 32088
    object _32087 = NOVALUE; // 64630 32087
    object _32086 = NOVALUE; // 64629 32086
    object _32085 = NOVALUE; // 64628 32085
    object _32084 = NOVALUE; // 64627 32084
    object _32083 = NOVALUE; // 64626 32083
    object _32082 = NOVALUE; // 64623 32082
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg raw_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg raw_string pc: 3 op: STARTLINE (58)

    /** tokenize.e:544		Token[TTYPE] = T_STRING*/
    // SubProg raw_string pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 7 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg raw_string pc: 11 op: STARTLINE (58)

    /** tokenize.e:545		Token[TDATA] = ""*/
    // SubProg raw_string pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 15 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg raw_string pc: 19 op: STARTLINE (58)

    /** tokenize.e:547		if equal( delimiter, "`" ) then*/
    // SubProg raw_string pc: 21 op: EQUAL (153)
    if (_delimiter_64618 == _32081)
    _32082 = 1;
    else if (IS_ATOM_INT(_delimiter_64618) && IS_ATOM_INT(_32081))
    _32082 = 0;
    else
    _32082 = (compare(_delimiter_64618, _32081) == 0);
    // SubProg raw_string pc: 25 op: IF (20)
    if (_32082 == 0)
    {
        _32082 = NOVALUE;
        goto L1; // [25] 39
    }
    else{
        _32082 = NOVALUE;
    }
    // SubProg raw_string pc: 28 op: STARTLINE (58)

    /** tokenize.e:548			Token[TFORM] = TF_STRING_BACKTICK*/
    // SubProg raw_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 32 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg raw_string pc: 36 op: ELSE (23)
    goto L2; // [36] 48
    // SubProg raw_string pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 64616 op: 159
    // SubProg raw_string pc: 39 op: STARTLINE (58)

    /** tokenize.e:550			Token[TFORM] = TF_STRING_TRIPLE*/
    // SubProg raw_string pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 43 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    // SubProg raw_string pc: 47 op: NOP1 (159)
L2: // addr: 48 pc: 47 sub: 64616 op: 159
    // SubProg raw_string pc: 48 op: STARTLINE (58)

    /** tokenize.e:553		while lookahead(1) != io:EOF and not lookahead_for( delimiter ) with entry do*/
    // SubProg raw_string pc: 50 op: NOP2 (110)
    // SubProg raw_string pc: 52 op: NOPWHILE (158)
L3: // addr: 53 pc: 52 sub: 64616 op: 158
    // SubProg raw_string pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 55 op: PROC (27)
    Ref(_71g_state_64304);
    _32083 = _71lookahead(1, _71g_state_64304);
    // SubProg raw_string pc: 60 op: NOTEQ (4)
    if (IS_ATOM_INT(_32083)) {
        _32084 = (_32083 != -1);
    }
    else {
        _32084 = binary_op(NOTEQ, _32083, -1);
    }
    DeRef(_32083);
    _32083 = NOVALUE;
    // SubProg raw_string pc: 64 op: SC1_AND (141)
    if (IS_ATOM_INT(_32084)) {
        if (_32084 == 0) {
            DeRef(_32085);
            _32085 = 0;
            goto L4; // [64] 80
        }
    }
    else {
        if (DBL_PTR(_32084)->dbl == 0.0) {
            DeRef(_32085);
            _32085 = 0;
            goto L4; // [64] 80
        }
    }
    // SubProg raw_string pc: 68 op: PROC (27)
    RefDS(_delimiter_64618);
    _32086 = _71lookahead_for(_delimiter_64618, 1);
    // SubProg raw_string pc: 73 op: NOT (7)
    if (IS_ATOM_INT(_32086)) {
        _32087 = (_32086 == 0);
    }
    else {
        _32087 = unary_op(NOT, _32086);
    }
    DeRef(_32086);
    _32086 = NOVALUE;
    // SubProg raw_string pc: 76 op: SC2_AND (142)
    DeRef(_32085);
    if (IS_ATOM_INT(_32087))
    _32085 = (_32087 != 0);
    else
    _32085 = DBL_PTR(_32087)->dbl != 0.0;
    // SubProg raw_string pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 64616 op: 159
    // SubProg raw_string pc: 80 op: WHILE (47)
    if (_32085 == 0)
    {
        _32085 = NOVALUE;
        goto L5; // [80] 111
    }
    else{
        _32085 = NOVALUE;
    }
    // SubProg raw_string pc: 83 op: STARTLINE (58)

    /** tokenize.e:554			scan_char(state)*/
    // SubProg raw_string pc: 85 op: PROC (27)
    Ref(_state_64619);
    _71scan_char(_state_64619);
    // SubProg raw_string pc: 88 op: STARTLINE (58)

    /** tokenize.e:555			Token[TDATA] &= Look*/
    // SubProg raw_string pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 94 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32088 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 98 op: CONCAT (15)
    if (IS_SEQUENCE(_32088) && IS_ATOM(_71Look_64258)) {
        Append(&_32089, _32088, _71Look_64258);
    }
    else if (IS_ATOM(_32088) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32089, _32088, _71Look_64258);
        _32088 = NOVALUE;
    }
    _32088 = NOVALUE;
    // SubProg raw_string pc: 102 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32089;
    if( _1 != _32089 ){
        DeRef(_1);
    }
    _32089 = NOVALUE;
    // SubProg raw_string pc: 106 op: STARTLINE (58)

    /** tokenize.e:557		end while*/
    // SubProg raw_string pc: 108 op: ENDWHILE (22)
    goto L3; // [108] 53
    // SubProg raw_string pc: 110 op: NOP1 (159)
L5: // addr: 111 pc: 110 sub: 64616 op: 159
    // SubProg raw_string pc: 111 op: STARTLINE (58)

    /** tokenize.e:559		if Look != io:EOF then*/
    // SubProg raw_string pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 115 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == -1)
    goto L6; // [115] 136
    // SubProg raw_string pc: 119 op: STARTLINE (58)

    /** tokenize.e:560			sti += length( delimiter )*/
    // SubProg raw_string pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 123 op: LENGTH (42)
    if (IS_SEQUENCE(_delimiter_64618)){
            _32091 = SEQ_PTR(_delimiter_64618)->length;
    }
    else {
        _32091 = 1;
    }
    // SubProg raw_string pc: 126 op: PLUS_I (115)
    _71sti_64255 = _71sti_64255 + _32091;
    _32091 = NOVALUE;
    // SubProg raw_string pc: 130 op: STARTLINE (58)

    /** tokenize.e:561			scan_char(state)*/
    // SubProg raw_string pc: 132 op: PROC (27)
    Ref(_state_64619);
    _71scan_char(_state_64619);
    // SubProg raw_string pc: 135 op: NOP1 (159)
L6: // addr: 136 pc: 135 sub: 64616 op: 159
    // SubProg raw_string pc: 136 op: STARTLINE (58)

    /** tokenize.e:564		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg raw_string pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 140 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64619)){
        _32093 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64619)->dbl));
    }
    else{
        _32093 = (object)*(((s1_ptr)_2)->base + _state_64619);
    }
    // SubProg raw_string pc: 144 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32093);
    _32094 = (object)*(((s1_ptr)_2)->base + 8);
    _32093 = NOVALUE;
    // SubProg raw_string pc: 148 op: IF (20)
    if (_32094 == 0) {
        _32094 = NOVALUE;
        goto L7; // [148] 243
    }
    else {
        if (!IS_ATOM_INT(_32094) && DBL_PTR(_32094)->dbl == 0.0){
            _32094 = NOVALUE;
            goto L7; // [148] 243
        }
        _32094 = NOVALUE;
    }
    _32094 = NOVALUE;
    // SubProg raw_string pc: 151 op: STARTLINE (58)

    /** tokenize.e:565			if Look = io:EOF then*/
    // SubProg raw_string pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 155 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != -1)
    goto L8; // [155] 194
    // SubProg raw_string pc: 159 op: STARTLINE (58)

    /** tokenize.e:566				if not multi then*/
    // SubProg raw_string pc: 161 op: NOT_IFW (108)
    if (_multi_64620 != 0)
    goto L9; // [161] 183
    // SubProg raw_string pc: 164 op: STARTLINE (58)

    /** tokenize.e:567					Token[TDATA] = delimiter & Token[TDATA]*/
    // SubProg raw_string pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32097 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 174 op: CONCAT (15)
    if (IS_SEQUENCE(_delimiter_64618) && IS_ATOM(_32097)) {
        Ref(_32097);
        Append(&_32098, _delimiter_64618, _32097);
    }
    else if (IS_ATOM(_delimiter_64618) && IS_SEQUENCE(_32097)) {
    }
    else {
        Concat((object_ptr)&_32098, _delimiter_64618, _32097);
    }
    _32097 = NOVALUE;
    // SubProg raw_string pc: 178 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32098;
    if( _1 != _32098 ){
        DeRef(_1);
    }
    _32098 = NOVALUE;
    // SubProg raw_string pc: 182 op: NOP1 (159)
L9: // addr: 183 pc: 182 sub: 64616 op: 159
    // SubProg raw_string pc: 183 op: STARTLINE (58)

    /** tokenize.e:569				last_multi = Token[TFORM]*/
    // SubProg raw_string pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 187 op: RHS_SUBS (25)
    DeRef(_71last_multi_64613);
    _2 = (object)SEQ_PTR(_71Token_64252);
    _71last_multi_64613 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_71last_multi_64613);
    // SubProg raw_string pc: 191 op: ELSE (23)
    goto LA; // [191] 242
    // SubProg raw_string pc: 193 op: NOP1 (159)
L8: // addr: 194 pc: 193 sub: 64616 op: 159
    // SubProg raw_string pc: 194 op: STARTLINE (58)

    /** tokenize.e:571				if multi then*/
    // SubProg raw_string pc: 196 op: IF (20)
    if (_multi_64620 == 0)
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
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32100 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 209 op: CONCAT (15)
    if (IS_SEQUENCE(_32100) && IS_ATOM(_delimiter_64618)) {
    }
    else if (IS_ATOM(_32100) && IS_SEQUENCE(_delimiter_64618)) {
        Ref(_32100);
        Prepend(&_32101, _delimiter_64618, _32100);
    }
    else {
        Concat((object_ptr)&_32101, _32100, _delimiter_64618);
        _32100 = NOVALUE;
    }
    _32100 = NOVALUE;
    // SubProg raw_string pc: 213 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32101;
    if( _1 != _32101 ){
        DeRef(_1);
    }
    _32101 = NOVALUE;
    // SubProg raw_string pc: 217 op: ELSE (23)
    goto LC; // [217] 241
    // SubProg raw_string pc: 219 op: NOP1 (159)
LB: // addr: 220 pc: 219 sub: 64616 op: 159
    // SubProg raw_string pc: 220 op: STARTLINE (58)

    /** tokenize.e:574					Token[TDATA] = delimiter & Token[TDATA] & delimiter*/
    // SubProg raw_string pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg raw_string pc: 226 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32102 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg raw_string pc: 230 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _delimiter_64618;
        concat_list[1] = _32102;
        concat_list[2] = _delimiter_64618;
        Concat_N((object_ptr)&_32103, concat_list, 3);
    }
    _32102 = NOVALUE;
    // SubProg raw_string pc: 236 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32103;
    if( _1 != _32103 ){
        DeRef(_1);
    }
    _32103 = NOVALUE;
    // SubProg raw_string pc: 240 op: NOP1 (159)
LC: // addr: 241 pc: 240 sub: 64616 op: 159
    // SubProg raw_string pc: 241 op: NOP1 (159)
LA: // addr: 242 pc: 241 sub: 64616 op: 159
    // SubProg raw_string pc: 242 op: NOP1 (159)
L7: // addr: 243 pc: 242 sub: 64616 op: 159
    // SubProg raw_string pc: 243 op: STARTLINE (58)

    /** tokenize.e:579		return TRUE*/
    // SubProg raw_string pc: 245 op: RETURNF (28)

// Exiting block BLOCK: raw_string

// block var delimiter_64618
    DeRefDSi(_delimiter_64618);

// block var state_64619
    DeRef(_state_64619);

// block var multi_64620
    DeRef(_32084);
    _32084 = NOVALUE;
    DeRef(_32087);
    _32087 = NOVALUE;
    return 1;
    // SubProg raw_string pc: 249 op: BADRETURNF (43)
    ;
}


object _71scan_string(object _state_64656)
{
    object _32131 = NOVALUE; // 64694 32131
    object _32130 = NOVALUE; // 64693 32130
    object _32129 = NOVALUE; // 64692 32129
    object _32128 = NOVALUE; // 64691 32128
    object _32127 = NOVALUE; // 64689 32127
    object _32126 = NOVALUE; // 64688 32126
    object _32125 = NOVALUE; // 64687 32125
    object _32124 = NOVALUE; // 64686 32124
    object _32123 = NOVALUE; // 64683 32123
    object _32122 = NOVALUE; // 64682 32122
    object _32120 = NOVALUE; // 64680 32120
    object _32119 = NOVALUE; // 64679 32119
// skipping _32118  name type: 0
// skipping _32117  name type: 0
    object _32116 = NOVALUE; // 64673 32116
// skipping _32115  name type: 0
    object _32114 = NOVALUE; // 64671 32114
    object _32112 = NOVALUE; // 64669 32112
    object _32111 = NOVALUE; // 64668 32111
// skipping _32110  name type: 0
    object _32109 = NOVALUE; // 64665 32109
    object _32108 = NOVALUE; // 64664 32108
// skipping _32107  name type: 0
    object _32106 = NOVALUE; // 64660 32106
// skipping _32105  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_string pc: 1 op: STARTLINE (58)

    /** tokenize.e:583		if (Look = '`') then*/
    // SubProg scan_string pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 5 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 96)
    goto L1; // [5] 22
    // SubProg scan_string pc: 9 op: STARTLINE (58)

    /** tokenize.e:584			return raw_string( "`", state )*/
    // SubProg scan_string pc: 11 op: PROC (27)
    RefDS(_32081);
    Ref(_state_64656);
    _32106 = _71raw_string(_32081, _state_64656, 0);
    // SubProg scan_string pc: 17 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64656
    DeRef(_state_64656);
    return _32106;
    // SubProg scan_string pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 64654 op: 159
    // SubProg scan_string pc: 22 op: STARTLINE (58)

    /** tokenize.e:586		if (Look != '"') then */
    // SubProg scan_string pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 26 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 34)
    goto L2; // [26] 37
    // SubProg scan_string pc: 30 op: STARTLINE (58)

    /** tokenize.e:587			return FALSE */
    // SubProg scan_string pc: 32 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64656
    DeRef(_state_64656);
    DeRef(_32106);
    _32106 = NOVALUE;
    return 0;
    // SubProg scan_string pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 64654 op: 159
    // SubProg scan_string pc: 37 op: STARTLINE (58)

    /** tokenize.e:590		if sti + 3 < length(source_text) then*/
    // SubProg scan_string pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 41 op: PLUS (11)
    _32108 = _71sti_64255 + 3;
    if ((object)((uintptr_t)_32108 + (uintptr_t)HIGH_BITS) >= 0){
        _32108 = NewDouble((eudouble)_32108);
    }
    // SubProg scan_string pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64254)){
            _32109 = SEQ_PTR(_71source_text_64254)->length;
    }
    else {
        _32109 = 1;
    }
    // SubProg scan_string pc: 50 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _32108, _32109)){
        DeRef(_32108);
        _32108 = NOVALUE;
        _32109 = NOVALUE;
        goto L3; // [50] 100
    }
    DeRef(_32108);
    _32108 = NOVALUE;
    _32109 = NOVALUE;
    // SubProg scan_string pc: 54 op: STARTLINE (58)

    /** tokenize.e:591			if equal(source_text[sti .. sti + 2], "\"\"\"") then*/
    // SubProg scan_string pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 62 op: PLUS (11)
    _32111 = _71sti_64255 + 2;
    // SubProg scan_string pc: 66 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32112;
    RHS_Slice(_71source_text_64254, _71sti_64255, _32111);
    // SubProg scan_string pc: 71 op: EQUAL (153)
    if (_32112 == _32113)
    _32114 = 1;
    else if (IS_ATOM_INT(_32112) && IS_ATOM_INT(_32113))
    _32114 = 0;
    else
    _32114 = (compare(_32112, _32113) == 0);
    DeRefDS(_32112);
    _32112 = NOVALUE;
    // SubProg scan_string pc: 75 op: IF (20)
    if (_32114 == 0)
    {
        _32114 = NOVALUE;
        goto L4; // [75] 99
    }
    else{
        _32114 = NOVALUE;
    }
    // SubProg scan_string pc: 78 op: STARTLINE (58)

    /** tokenize.e:593				sti += 2*/
    // SubProg scan_string pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 82 op: PLUS_I (115)
    _71sti_64255 = _71sti_64255 + 2;
    // SubProg scan_string pc: 86 op: STARTLINE (58)

    /** tokenize.e:594				return raw_string( `"""`, state )*/
    // SubProg scan_string pc: 88 op: PROC (27)
    RefDS(_32113);
    Ref(_state_64656);
    _32116 = _71raw_string(_32113, _state_64656, 0);
    // SubProg scan_string pc: 94 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64656
    DeRef(_state_64656);
    DeRef(_32106);
    _32106 = NOVALUE;
    _32111 = NOVALUE;
    return _32116;
    // SubProg scan_string pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 64654 op: 159
    // SubProg scan_string pc: 99 op: NOP1 (159)
L3: // addr: 100 pc: 99 sub: 64654 op: 159
    // SubProg scan_string pc: 100 op: STARTLINE (58)

    /** tokenize.e:598		scan_char(state)*/
    // SubProg scan_string pc: 102 op: PROC (27)
    Ref(_state_64656);
    _71scan_char(_state_64656);
    // SubProg scan_string pc: 105 op: STARTLINE (58)

    /** tokenize.e:599		Token[TTYPE] = T_STRING*/
    // SubProg scan_string pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 109 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg scan_string pc: 113 op: STARTLINE (58)

    /** tokenize.e:600		Token[TDATA] = ""*/
    // SubProg scan_string pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 117 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg scan_string pc: 121 op: STARTLINE (58)

    /** tokenize.e:601		Token[TFORM] = TF_STRING_SINGLE*/
    // SubProg scan_string pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 125 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    // SubProg scan_string pc: 129 op: STARTLINE (58)

    /** tokenize.e:603		while (Look != '"') do*/
    // SubProg scan_string pc: 131 op: NOP2 (110)
    // SubProg scan_string pc: 133 op: NOPWHILE (158)
L5: // addr: 134 pc: 133 sub: 64654 op: 158
    // SubProg scan_string pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 136 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 34)
    goto L6; // [136] 254
    // SubProg scan_string pc: 140 op: STARTLINE (58)

    /** tokenize.e:604			if (Look = EOL) then */
    // SubProg scan_string pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 144 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 10)
    goto L7; // [144] 194
    // SubProg scan_string pc: 148 op: STARTLINE (58)

    /** tokenize.e:605				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_string pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 152 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64656)){
        _32119 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64656)->dbl));
    }
    else{
        _32119 = (object)*(((s1_ptr)_2)->base + _state_64656);
    }
    // SubProg scan_string pc: 156 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32119);
    _32120 = (object)*(((s1_ptr)_2)->base + 8);
    _32119 = NOVALUE;
    // SubProg scan_string pc: 160 op: IF (20)
    if (_32120 == 0) {
        _32120 = NOVALUE;
        goto L8; // [160] 182
    }
    else {
        if (!IS_ATOM_INT(_32120) && DBL_PTR(_32120)->dbl == 0.0){
            _32120 = NOVALUE;
            goto L8; // [160] 182
        }
        _32120 = NOVALUE;
    }
    _32120 = NOVALUE;
    // SubProg scan_string pc: 163 op: STARTLINE (58)

    /** tokenize.e:606					Token[TDATA] = "\"" & Token[TDATA] -- & "\""*/
    // SubProg scan_string pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 169 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32122 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_string pc: 173 op: CONCAT (15)
    if (IS_SEQUENCE(_32121) && IS_ATOM(_32122)) {
        Ref(_32122);
        Append(&_32123, _32121, _32122);
    }
    else if (IS_ATOM(_32121) && IS_SEQUENCE(_32122)) {
    }
    else {
        Concat((object_ptr)&_32123, _32121, _32122);
    }
    _32122 = NOVALUE;
    // SubProg scan_string pc: 177 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32123;
    if( _1 != _32123 ){
        DeRef(_1);
    }
    _32123 = NOVALUE;
    // SubProg scan_string pc: 181 op: NOP1 (159)
L8: // addr: 182 pc: 181 sub: 64654 op: 159
    // SubProg scan_string pc: 182 op: STARTLINE (58)

    /** tokenize.e:608				report_error(ERR_EOL_STRING)*/
    // SubProg scan_string pc: 184 op: PROC (27)
    _71report_error(5);
    // SubProg scan_string pc: 187 op: STARTLINE (58)

    /** tokenize.e:609				return TRUE*/
    // SubProg scan_string pc: 189 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64656
    DeRef(_state_64656);
    DeRef(_32106);
    _32106 = NOVALUE;
    DeRef(_32116);
    _32116 = NOVALUE;
    DeRef(_32111);
    _32111 = NOVALUE;
    return 1;
    // SubProg scan_string pc: 193 op: NOP1 (159)
L7: // addr: 194 pc: 193 sub: 64654 op: 159
    // SubProg scan_string pc: 194 op: STARTLINE (58)

    /** tokenize.e:612			scan_escaped_char(state)*/
    // SubProg scan_string pc: 196 op: PROC (27)
    Ref(_state_64656);
    _71scan_escaped_char(_state_64656);
    // SubProg scan_string pc: 199 op: STARTLINE (58)

    /** tokenize.e:614			if ERR then */
    // SubProg scan_string pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 203 op: IF (20)
    if (_71ERR_64259 == 0)
    {
        goto L5; // [203] 134
    }
    else{
    }
    // SubProg scan_string pc: 206 op: STARTLINE (58)

    /** tokenize.e:615				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_string pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 210 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64656)){
        _32124 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64656)->dbl));
    }
    else{
        _32124 = (object)*(((s1_ptr)_2)->base + _state_64656);
    }
    // SubProg scan_string pc: 214 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32124);
    _32125 = (object)*(((s1_ptr)_2)->base + 8);
    _32124 = NOVALUE;
    // SubProg scan_string pc: 218 op: IF (20)
    if (_32125 == 0) {
        _32125 = NOVALUE;
        goto L9; // [218] 242
    }
    else {
        if (!IS_ATOM_INT(_32125) && DBL_PTR(_32125)->dbl == 0.0){
            _32125 = NOVALUE;
            goto L9; // [218] 242
        }
        _32125 = NOVALUE;
    }
    _32125 = NOVALUE;
    // SubProg scan_string pc: 221 op: STARTLINE (58)

    /** tokenize.e:616					Token[TDATA] = "\"" & Token[TDATA] & "\""*/
    // SubProg scan_string pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 227 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32126 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_string pc: 231 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _32121;
        concat_list[1] = _32126;
        concat_list[2] = _32121;
        Concat_N((object_ptr)&_32127, concat_list, 3);
    }
    _32126 = NOVALUE;
    // SubProg scan_string pc: 237 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32127;
    if( _1 != _32127 ){
        DeRef(_1);
    }
    _32127 = NOVALUE;
    // SubProg scan_string pc: 241 op: NOP1 (159)
L9: // addr: 242 pc: 241 sub: 64654 op: 159
    // SubProg scan_string pc: 242 op: STARTLINE (58)

    /** tokenize.e:618				return TRUE*/
    // SubProg scan_string pc: 244 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64656
    DeRef(_state_64656);
    DeRef(_32106);
    _32106 = NOVALUE;
    DeRef(_32116);
    _32116 = NOVALUE;
    DeRef(_32111);
    _32111 = NOVALUE;
    return 1;
    // SubProg scan_string pc: 248 op: NOP1 (159)
    // SubProg scan_string pc: 249 op: STARTLINE (58)

    /** tokenize.e:620		end while*/
    // SubProg scan_string pc: 251 op: ENDWHILE (22)
    goto L5; // [251] 134
    // SubProg scan_string pc: 253 op: NOP1 (159)
L6: // addr: 254 pc: 253 sub: 64654 op: 159
    // SubProg scan_string pc: 254 op: STARTLINE (58)

    /** tokenize.e:622		scan_char(state)*/
    // SubProg scan_string pc: 256 op: PROC (27)
    Ref(_state_64656);
    _71scan_char(_state_64656);
    // SubProg scan_string pc: 259 op: STARTLINE (58)

    /** tokenize.e:624		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_string pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 263 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64656)){
        _32128 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64656)->dbl));
    }
    else{
        _32128 = (object)*(((s1_ptr)_2)->base + _state_64656);
    }
    // SubProg scan_string pc: 267 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32128);
    _32129 = (object)*(((s1_ptr)_2)->base + 8);
    _32128 = NOVALUE;
    // SubProg scan_string pc: 271 op: IF (20)
    if (_32129 == 0) {
        _32129 = NOVALUE;
        goto LA; // [271] 295
    }
    else {
        if (!IS_ATOM_INT(_32129) && DBL_PTR(_32129)->dbl == 0.0){
            _32129 = NOVALUE;
            goto LA; // [271] 295
        }
        _32129 = NOVALUE;
    }
    _32129 = NOVALUE;
    // SubProg scan_string pc: 274 op: STARTLINE (58)

    /** tokenize.e:625			Token[TDATA] = "\"" & Token[TDATA] & "\""*/
    // SubProg scan_string pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_string pc: 280 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32130 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_string pc: 284 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _32121;
        concat_list[1] = _32130;
        concat_list[2] = _32121;
        Concat_N((object_ptr)&_32131, concat_list, 3);
    }
    _32130 = NOVALUE;
    // SubProg scan_string pc: 290 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32131;
    if( _1 != _32131 ){
        DeRef(_1);
    }
    _32131 = NOVALUE;
    // SubProg scan_string pc: 294 op: NOP1 (159)
LA: // addr: 295 pc: 294 sub: 64654 op: 159
    // SubProg scan_string pc: 295 op: STARTLINE (58)

    /** tokenize.e:627		return TRUE*/
    // SubProg scan_string pc: 297 op: RETURNF (28)

// Exiting block BLOCK: scan_string

// block var state_64656
    DeRef(_state_64656);
    DeRef(_32106);
    _32106 = NOVALUE;
    DeRef(_32116);
    _32116 = NOVALUE;
    DeRef(_32111);
    _32111 = NOVALUE;
    return 1;
    // SubProg scan_string pc: 301 op: BADRETURNF (43)
    ;
}


object _71hex_val(object _h_64697)
{
    object _32138 = NOVALUE; // 64707 32138
    object _32137 = NOVALUE; // 64705 32137
    object _32136 = NOVALUE; // 64704 32136
// skipping _32135  name type: 0
    object _32134 = NOVALUE; // 64701 32134
    object _32133 = NOVALUE; // 64700 32133
// skipping _32132  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hex_val pc: 1 op: INTEGER_CHECK (96)
    // SubProg hex_val pc: 3 op: STARTLINE (58)

    /** tokenize.e:631		if h >= 'a' then*/
    // SubProg hex_val pc: 5 op: GREATEREQ_IFW_I (120)
    if (_h_64697 < 97)
    goto L1; // [5] 26
    // SubProg hex_val pc: 9 op: STARTLINE (58)

    /** tokenize.e:632			return h - 'a' + 10*/
    // SubProg hex_val pc: 11 op: MINUS (10)
    _32133 = _h_64697 - 97;
    if ((object)((uintptr_t)_32133 +(uintptr_t) HIGH_BITS) >= 0){
        _32133 = NewDouble((eudouble)_32133);
    }
    // SubProg hex_val pc: 15 op: PLUS (11)
    if (IS_ATOM_INT(_32133)) {
        _32134 = _32133 + 10;
        if ((object)((uintptr_t)_32134 + (uintptr_t)HIGH_BITS) >= 0){
            _32134 = NewDouble((eudouble)_32134);
        }
    }
    else {
        _32134 = NewDouble(DBL_PTR(_32133)->dbl + (eudouble)10);
    }
    DeRef(_32133);
    _32133 = NOVALUE;
    // SubProg hex_val pc: 19 op: RETURNF (28)

// Exiting block BLOCK: hex_val

// block var h_64697
    return _32134;
    // SubProg hex_val pc: 23 op: ELSE (23)
    goto L2; // [23] 60
    // SubProg hex_val pc: 25 op: NOP1 (159)
L1: // addr: 26 pc: 25 sub: 64695 op: 159
    // SubProg hex_val pc: 26 op: STARTLINE (58)

    /** tokenize.e:633		elsif h >= 'A' then*/
    // SubProg hex_val pc: 28 op: GREATEREQ_IFW_I (120)
    if (_h_64697 < 65)
    goto L3; // [28] 49
    // SubProg hex_val pc: 32 op: STARTLINE (58)

    /** tokenize.e:634			return h - 'A' + 10*/
    // SubProg hex_val pc: 34 op: MINUS (10)
    _32136 = _h_64697 - 65;
    if ((object)((uintptr_t)_32136 +(uintptr_t) HIGH_BITS) >= 0){
        _32136 = NewDouble((eudouble)_32136);
    }
    // SubProg hex_val pc: 38 op: PLUS (11)
    if (IS_ATOM_INT(_32136)) {
        _32137 = _32136 + 10;
        if ((object)((uintptr_t)_32137 + (uintptr_t)HIGH_BITS) >= 0){
            _32137 = NewDouble((eudouble)_32137);
        }
    }
    else {
        _32137 = NewDouble(DBL_PTR(_32136)->dbl + (eudouble)10);
    }
    DeRef(_32136);
    _32136 = NOVALUE;
    // SubProg hex_val pc: 42 op: RETURNF (28)

// Exiting block BLOCK: hex_val

// block var h_64697
    DeRef(_32134);
    _32134 = NOVALUE;
    return _32137;
    // SubProg hex_val pc: 46 op: ELSE (23)
    goto L2; // [46] 60
    // SubProg hex_val pc: 48 op: NOP1 (159)
L3: // addr: 49 pc: 48 sub: 64695 op: 159
    // SubProg hex_val pc: 49 op: STARTLINE (58)

    /** tokenize.e:636			return h - '0'*/
    // SubProg hex_val pc: 51 op: MINUS (10)
    _32138 = _h_64697 - 48;
    if ((object)((uintptr_t)_32138 +(uintptr_t) HIGH_BITS) >= 0){
        _32138 = NewDouble((eudouble)_32138);
    }
    // SubProg hex_val pc: 55 op: RETURNF (28)

// Exiting block BLOCK: hex_val

// block var h_64697
    DeRef(_32134);
    _32134 = NOVALUE;
    DeRef(_32137);
    _32137 = NOVALUE;
    return _32138;
    // SubProg hex_val pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 64695 op: 159
    // SubProg hex_val pc: 60 op: BADRETURNF (43)
    ;
}


object _71start_hex()
{
// skipping _32150  name type: 0
    object _32149 = NOVALUE; // 64722 32149
    object _32148 = NOVALUE; // 64721 32148
    object _32147 = NOVALUE; // 64720 32147
    object _32146 = NOVALUE; // 64719 32146
    object _32145 = NOVALUE; // 64718 32145
    object _32144 = NOVALUE; // 64717 32144
    object _32143 = NOVALUE; // 64716 32143
    object _32142 = NOVALUE; // 64714 32142
    object _32141 = NOVALUE; // 64713 32141
    object _32140 = NOVALUE; // 64712 32140
    object _32139 = NOVALUE; // 64711 32139
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg start_hex pc: 1 op: STARTLINE (58)

    /** tokenize.e:641		if Look = '#' and Hex_Char( lookahead( 1 ) ) then*/
    // SubProg start_hex pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 5 op: EQUALS (3)
    _32139 = (_71Look_64258 == 35);
    // SubProg start_hex pc: 9 op: SC1_AND_IF (146)
    if (_32139 == 0) {
        goto L1; // [9] 37
    }
    // SubProg start_hex pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 15 op: PROC (27)
    Ref(_71g_state_64304);
    _32141 = _71lookahead(1, _71g_state_64304);
    // SubProg start_hex pc: 20 op: PROC (27)
    _32142 = _71Hex_Char(_32141);
    _32141 = NOVALUE;
    // SubProg start_hex pc: 24 op: NOP1 (159)
    // SubProg start_hex pc: 25 op: IF (20)
    if (_32142 == 0) {
        DeRef(_32142);
        _32142 = NOVALUE;
        goto L1; // [25] 37
    }
    else {
        if (!IS_ATOM_INT(_32142) && DBL_PTR(_32142)->dbl == 0.0){
            DeRef(_32142);
            _32142 = NOVALUE;
            goto L1; // [25] 37
        }
        DeRef(_32142);
        _32142 = NOVALUE;
    }
    DeRef(_32142);
    _32142 = NOVALUE;
    // SubProg start_hex pc: 28 op: STARTLINE (58)

    /** tokenize.e:642			return TRUE*/
    // SubProg start_hex pc: 30 op: RETURNF (28)

// Exiting block BLOCK: start_hex
    DeRef(_32139);
    _32139 = NOVALUE;
    return 1;
    // SubProg start_hex pc: 34 op: ELSE (23)
    goto L2; // [34] 107
    // SubProg start_hex pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 64708 op: 159
    // SubProg start_hex pc: 37 op: STARTLINE (58)

    /** tokenize.e:643		elsif Look = '0' and lookahead( 1 ) = 'x' and Hex_Char( lookahead( 2 ) ) then*/
    // SubProg start_hex pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 41 op: EQUALS (3)
    _32143 = (_71Look_64258 == 48);
    // SubProg start_hex pc: 45 op: SC1_AND (141)
    if (_32143 == 0) {
        _32144 = 0;
        goto L3; // [45] 64
    }
    // SubProg start_hex pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 51 op: PROC (27)
    Ref(_71g_state_64304);
    _32145 = _71lookahead(1, _71g_state_64304);
    // SubProg start_hex pc: 56 op: EQUALS (3)
    if (IS_ATOM_INT(_32145)) {
        _32146 = (_32145 == 120);
    }
    else {
        _32146 = binary_op(EQUALS, _32145, 120);
    }
    DeRef(_32145);
    _32145 = NOVALUE;
    // SubProg start_hex pc: 60 op: SC2_AND (142)
    if (IS_ATOM_INT(_32146))
    _32144 = (_32146 != 0);
    else
    _32144 = DBL_PTR(_32146)->dbl != 0.0;
    // SubProg start_hex pc: 63 op: NOP1 (159)
L3: // addr: 64 pc: 63 sub: 64708 op: 159
    // SubProg start_hex pc: 64 op: SC1_AND_IF (146)
    if (_32144 == 0) {
        goto L4; // [64] 100
    }
    // SubProg start_hex pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 70 op: PROC (27)
    Ref(_71g_state_64304);
    _32148 = _71lookahead(2, _71g_state_64304);
    // SubProg start_hex pc: 75 op: PROC (27)
    _32149 = _71Hex_Char(_32148);
    _32148 = NOVALUE;
    // SubProg start_hex pc: 79 op: NOP1 (159)
    // SubProg start_hex pc: 80 op: IF (20)
    if (_32149 == 0) {
        DeRef(_32149);
        _32149 = NOVALUE;
        goto L4; // [80] 100
    }
    else {
        if (!IS_ATOM_INT(_32149) && DBL_PTR(_32149)->dbl == 0.0){
            DeRef(_32149);
            _32149 = NOVALUE;
            goto L4; // [80] 100
        }
        DeRef(_32149);
        _32149 = NOVALUE;
    }
    DeRef(_32149);
    _32149 = NOVALUE;
    // SubProg start_hex pc: 83 op: STARTLINE (58)

    /** tokenize.e:644			sti += 1*/
    // SubProg start_hex pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg start_hex pc: 87 op: PLUS1_I (117)
    _71sti_64255 = _71sti_64255 + 1;
    // SubProg start_hex pc: 91 op: STARTLINE (58)

    /** tokenize.e:645			return TRUE*/
    // SubProg start_hex pc: 93 op: RETURNF (28)

// Exiting block BLOCK: start_hex
    DeRef(_32146);
    _32146 = NOVALUE;
    DeRef(_32139);
    _32139 = NOVALUE;
    DeRef(_32143);
    _32143 = NOVALUE;
    return 1;
    // SubProg start_hex pc: 97 op: ELSE (23)
    goto L2; // [97] 107
    // SubProg start_hex pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 64708 op: 159
    // SubProg start_hex pc: 100 op: STARTLINE (58)

    /** tokenize.e:647			return FALSE*/
    // SubProg start_hex pc: 102 op: RETURNF (28)

// Exiting block BLOCK: start_hex
    DeRef(_32146);
    _32146 = NOVALUE;
    DeRef(_32139);
    _32139 = NOVALUE;
    DeRef(_32143);
    _32143 = NOVALUE;
    return 0;
    // SubProg start_hex pc: 106 op: NOP1 (159)
L2: // addr: 107 pc: 106 sub: 64708 op: 159
    // SubProg start_hex pc: 107 op: BADRETURNF (43)
    ;
}


object _71scan_hex(object _state_64727)
{
    object _startSti_64731 = NOVALUE;
    object _32166 = NOVALUE; // 64751 32166
    object _32165 = NOVALUE; // 64750 32165
    object _32164 = NOVALUE; // 64749 32164
    object _32163 = NOVALUE; // 64748 32163
// skipping _32162  name type: 0
    object _32161 = NOVALUE; // 64745 32161
    object _32160 = NOVALUE; // 64743 32160
    object _32159 = NOVALUE; // 64741 32159
    object _32158 = NOVALUE; // 64740 32158
    object _32157 = NOVALUE; // 64739 32157
    object _32156 = NOVALUE; // 64737 32156
    object _32155 = NOVALUE; // 64736 32155
// skipping _32154  name type: 0
    object _32153 = NOVALUE; // 64733 32153
// skipping _32152  name type: 0
    object _32151 = NOVALUE; // 64729 32151
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_hex pc: 1 op: STARTLINE (58)

    /** tokenize.e:652		if not start_hex() then*/
    // SubProg scan_hex pc: 3 op: PROC (27)
    _32151 = _71start_hex();
    // SubProg scan_hex pc: 6 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32151)) {
        if (_32151 != 0){
            DeRef(_32151);
            _32151 = NOVALUE;
            goto L1; // [6] 16
        }
    }
    else {
        if (DBL_PTR(_32151)->dbl != 0.0){
            DeRef(_32151);
            _32151 = NOVALUE;
            goto L1; // [6] 16
        }
    }
    DeRef(_32151);
    _32151 = NOVALUE;
    // SubProg scan_hex pc: 9 op: STARTLINE (58)

    /** tokenize.e:653			return FALSE*/
    // SubProg scan_hex pc: 11 op: RETURNF (28)

// Exiting block BLOCK: scan_hex

// block var state_64727
    DeRef(_state_64727);

// block var startSti_64731
    return 0;
    // SubProg scan_hex pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 64725 op: 159
    // SubProg scan_hex pc: 16 op: STARTLINE (58)

    /** tokenize.e:656		integer startSti = sti*/
    // SubProg scan_hex pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 20 op: ASSIGN_I (113)
    _startSti_64731 = _71sti_64255;
    // SubProg scan_hex pc: 23 op: STARTLINE (58)

    /** tokenize.e:658		scan_char(state)*/
    // SubProg scan_hex pc: 25 op: PROC (27)
    Ref(_state_64727);
    _71scan_char(_state_64727);
    // SubProg scan_hex pc: 28 op: STARTLINE (58)

    /** tokenize.e:660		if not Hex_Char(Look) then*/
    // SubProg scan_hex pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 32 op: PROC (27)
    _32153 = _71Hex_Char(_71Look_64258);
    // SubProg scan_hex pc: 36 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32153)) {
        if (_32153 != 0){
            DeRef(_32153);
            _32153 = NOVALUE;
            goto L2; // [36] 49
        }
    }
    else {
        if (DBL_PTR(_32153)->dbl != 0.0){
            DeRef(_32153);
            _32153 = NOVALUE;
            goto L2; // [36] 49
        }
    }
    DeRef(_32153);
    _32153 = NOVALUE;
    // SubProg scan_hex pc: 39 op: STARTLINE (58)

    /** tokenize.e:661			report_error(ERR_HEX) return FALSE*/
    // SubProg scan_hex pc: 41 op: PROC (27)
    _71report_error(6);
    // SubProg scan_hex pc: 44 op: RETURNF (28)

// Exiting block BLOCK: scan_hex

// block var state_64727
    DeRef(_state_64727);

// block var startSti_64731
    return 0;
    // SubProg scan_hex pc: 48 op: NOP1 (159)
L2: // addr: 49 pc: 48 sub: 64725 op: 159
    // SubProg scan_hex pc: 49 op: STARTLINE (58)

    /** tokenize.e:664		Token[TTYPE] = T_NUMBER*/
    // SubProg scan_hex pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 53 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg scan_hex pc: 57 op: STARTLINE (58)

    /** tokenize.e:665		Token[TFORM] = TF_HEX*/
    // SubProg scan_hex pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 61 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg scan_hex pc: 65 op: STARTLINE (58)

    /** tokenize.e:667		if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg scan_hex pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 69 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64727)){
        _32155 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64727)->dbl));
    }
    else{
        _32155 = (object)*(((s1_ptr)_2)->base + _state_64727);
    }
    // SubProg scan_hex pc: 73 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32155);
    _32156 = (object)*(((s1_ptr)_2)->base + 3);
    _32155 = NOVALUE;
    // SubProg scan_hex pc: 77 op: IF (20)
    if (_32156 == 0) {
        _32156 = NOVALUE;
        goto L3; // [77] 128
    }
    else {
        if (!IS_ATOM_INT(_32156) && DBL_PTR(_32156)->dbl == 0.0){
            _32156 = NOVALUE;
            goto L3; // [77] 128
        }
        _32156 = NOVALUE;
    }
    _32156 = NOVALUE;
    // SubProg scan_hex pc: 80 op: STARTLINE (58)

    /** tokenize.e:668			while Hex_Char(Look) do*/
    // SubProg scan_hex pc: 82 op: NOP2 (110)
    // SubProg scan_hex pc: 84 op: NOPWHILE (158)
L4: // addr: 85 pc: 84 sub: 64725 op: 158
    // SubProg scan_hex pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 87 op: PROC (27)
    _32157 = _71Hex_Char(_71Look_64258);
    // SubProg scan_hex pc: 91 op: WHILE (47)
    if (_32157 <= 0) {
        if (_32157 == 0) {
            DeRef(_32157);
            _32157 = NOVALUE;
            goto L5; // [91] 104
        }
        else {
            if (!IS_ATOM_INT(_32157) && DBL_PTR(_32157)->dbl == 0.0){
                DeRef(_32157);
                _32157 = NOVALUE;
                goto L5; // [91] 104
            }
            DeRef(_32157);
            _32157 = NOVALUE;
        }
    }
    DeRef(_32157);
    _32157 = NOVALUE;
    // SubProg scan_hex pc: 94 op: STARTLINE (58)

    /** tokenize.e:669				scan_char(state)*/
    // SubProg scan_hex pc: 96 op: PROC (27)
    Ref(_state_64727);
    _71scan_char(_state_64727);
    // SubProg scan_hex pc: 99 op: STARTLINE (58)

    /** tokenize.e:670			end while*/
    // SubProg scan_hex pc: 101 op: ENDWHILE (22)
    goto L4; // [101] 85
    // SubProg scan_hex pc: 103 op: NOP1 (159)
L5: // addr: 104 pc: 103 sub: 64725 op: 159
    // SubProg scan_hex pc: 104 op: STARTLINE (58)

    /** tokenize.e:672			Token[TDATA] = source_text[startSti .. sti - 1]*/
    // SubProg scan_hex pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 112 op: MINUS (10)
    _32158 = _71sti_64255 - 1;
    // SubProg scan_hex pc: 116 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32159;
    RHS_Slice(_71source_text_64254, _startSti_64731, _32158);
    // SubProg scan_hex pc: 121 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32159;
    if( _1 != _32159 ){
        DeRef(_1);
    }
    _32159 = NOVALUE;
    // SubProg scan_hex pc: 125 op: ELSE (23)
    goto L6; // [125] 209
    // SubProg scan_hex pc: 127 op: NOP1 (159)
L3: // addr: 128 pc: 127 sub: 64725 op: 159
    // SubProg scan_hex pc: 128 op: STARTLINE (58)

    /** tokenize.e:674			Token[TDATA] = hex_val(Look)*/
    // SubProg scan_hex pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 134 op: PROC (27)
    _32160 = _71hex_val(_71Look_64258);
    // SubProg scan_hex pc: 138 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32160;
    if( _1 != _32160 ){
        DeRef(_1);
    }
    _32160 = NOVALUE;
    // SubProg scan_hex pc: 142 op: STARTLINE (58)

    /** tokenize.e:675			scan_char(state)*/
    // SubProg scan_hex pc: 144 op: PROC (27)
    Ref(_state_64727);
    _71scan_char(_state_64727);
    // SubProg scan_hex pc: 147 op: STARTLINE (58)

    /** tokenize.e:677			while Hex_Char(Look) do*/
    // SubProg scan_hex pc: 149 op: NOP2 (110)
    // SubProg scan_hex pc: 151 op: NOPWHILE (158)
L7: // addr: 152 pc: 151 sub: 64725 op: 158
    // SubProg scan_hex pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 154 op: PROC (27)
    _32161 = _71Hex_Char(_71Look_64258);
    // SubProg scan_hex pc: 158 op: WHILE (47)
    if (_32161 <= 0) {
        if (_32161 == 0) {
            DeRef(_32161);
            _32161 = NOVALUE;
            goto L8; // [158] 208
        }
        else {
            if (!IS_ATOM_INT(_32161) && DBL_PTR(_32161)->dbl == 0.0){
                DeRef(_32161);
                _32161 = NOVALUE;
                goto L8; // [158] 208
            }
            DeRef(_32161);
            _32161 = NOVALUE;
        }
    }
    DeRef(_32161);
    _32161 = NOVALUE;
    // SubProg scan_hex pc: 161 op: STARTLINE (58)

    /** tokenize.e:678				if Look != '_' then*/
    // SubProg scan_hex pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 165 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 95)
    goto L9; // [165] 198
    // SubProg scan_hex pc: 169 op: STARTLINE (58)

    /** tokenize.e:679					Token[TDATA] = Token[TDATA] * 16 + hex_val(Look)*/
    // SubProg scan_hex pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 175 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32163 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_hex pc: 179 op: MULTIPLY (13)
    if (IS_ATOM_INT(_32163)) {
        if (_32163 == (short)_32163){
            _32164 = _32163 * 16;
        }
        else{
            _32164 = NewDouble(_32163 * (eudouble)16);
        }
    }
    else {
        _32164 = binary_op(MULTIPLY, _32163, 16);
    }
    _32163 = NOVALUE;
    // SubProg scan_hex pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_hex pc: 185 op: PROC (27)
    _32165 = _71hex_val(_71Look_64258);
    // SubProg scan_hex pc: 189 op: PLUS (11)
    if (IS_ATOM_INT(_32164) && IS_ATOM_INT(_32165)) {
        _32166 = _32164 + _32165;
        if ((object)((uintptr_t)_32166 + (uintptr_t)HIGH_BITS) >= 0){
            _32166 = NewDouble((eudouble)_32166);
        }
    }
    else {
        _32166 = binary_op(PLUS, _32164, _32165);
    }
    DeRef(_32164);
    _32164 = NOVALUE;
    DeRef(_32165);
    _32165 = NOVALUE;
    // SubProg scan_hex pc: 193 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32166;
    if( _1 != _32166 ){
        DeRef(_1);
    }
    _32166 = NOVALUE;
    // SubProg scan_hex pc: 197 op: NOP1 (159)
L9: // addr: 198 pc: 197 sub: 64725 op: 159
    // SubProg scan_hex pc: 198 op: STARTLINE (58)

    /** tokenize.e:681				scan_char(state)*/
    // SubProg scan_hex pc: 200 op: PROC (27)
    Ref(_state_64727);
    _71scan_char(_state_64727);
    // SubProg scan_hex pc: 203 op: STARTLINE (58)

    /** tokenize.e:682			end while*/
    // SubProg scan_hex pc: 205 op: ENDWHILE (22)
    goto L7; // [205] 152
    // SubProg scan_hex pc: 207 op: NOP1 (159)
L8: // addr: 208 pc: 207 sub: 64725 op: 159
    // SubProg scan_hex pc: 208 op: NOP1 (159)
L6: // addr: 209 pc: 208 sub: 64725 op: 159
    // SubProg scan_hex pc: 209 op: STARTLINE (58)

    /** tokenize.e:685		return TRUE*/
    // SubProg scan_hex pc: 211 op: RETURNF (28)

// Exiting block BLOCK: scan_hex

// block var state_64727
    DeRef(_state_64727);

// block var startSti_64731
    DeRef(_32158);
    _32158 = NOVALUE;
    return 1;
    // SubProg scan_hex pc: 215 op: BADRETURNF (43)
    ;
}


object _71scan_integer(object _state_64755)
{
    object _i_64756 = NOVALUE;
// skipping _32171  name type: 0
    object _32170 = NOVALUE; // 64762 32170
    object _32169 = NOVALUE; // 64761 32169
// skipping _32168  name type: 0
    object _32167 = NOVALUE; // 64758 32167
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_integer pc: 1 op: STARTLINE (58)

    /** tokenize.e:690		atom i = 0*/
    // SubProg scan_integer pc: 3 op: ASSIGN (18)
    DeRef(_i_64756);
    _i_64756 = 0;
    // SubProg scan_integer pc: 6 op: STARTLINE (58)

    /** tokenize.e:692		while Digit_Char(Look) do*/
    // SubProg scan_integer pc: 8 op: NOP2 (110)
    // SubProg scan_integer pc: 10 op: NOPWHILE (158)
L1: // addr: 11 pc: 10 sub: 64753 op: 158
    // SubProg scan_integer pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_integer pc: 13 op: PROC (27)
    _32167 = _71Digit_Char(_71Look_64258);
    // SubProg scan_integer pc: 17 op: WHILE (47)
    if (_32167 <= 0) {
        if (_32167 == 0) {
            DeRef(_32167);
            _32167 = NOVALUE;
            goto L2; // [17] 55
        }
        else {
            if (!IS_ATOM_INT(_32167) && DBL_PTR(_32167)->dbl == 0.0){
                DeRef(_32167);
                _32167 = NOVALUE;
                goto L2; // [17] 55
            }
            DeRef(_32167);
            _32167 = NOVALUE;
        }
    }
    DeRef(_32167);
    _32167 = NOVALUE;
    // SubProg scan_integer pc: 20 op: STARTLINE (58)

    /** tokenize.e:693			if (Look != '_') then*/
    // SubProg scan_integer pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_integer pc: 24 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 95)
    goto L3; // [24] 45
    // SubProg scan_integer pc: 28 op: STARTLINE (58)

    /** tokenize.e:694				i = (i * 10) + (Look - '0')*/
    // SubProg scan_integer pc: 30 op: MULTIPLY (13)
    if (IS_ATOM_INT(_i_64756)) {
        if (_i_64756 == (short)_i_64756){
            _32169 = _i_64756 * 10;
        }
        else{
            _32169 = NewDouble(_i_64756 * (eudouble)10);
        }
    }
    else {
        _32169 = NewDouble(DBL_PTR(_i_64756)->dbl * (eudouble)10);
    }
    // SubProg scan_integer pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_integer pc: 36 op: MINUS (10)
    _32170 = _71Look_64258 - 48;
    if ((object)((uintptr_t)_32170 +(uintptr_t) HIGH_BITS) >= 0){
        _32170 = NewDouble((eudouble)_32170);
    }
    // SubProg scan_integer pc: 40 op: PLUS (11)
    DeRef(_i_64756);
    if (IS_ATOM_INT(_32169) && IS_ATOM_INT(_32170)) {
        _i_64756 = _32169 + _32170;
        if ((object)((uintptr_t)_i_64756 + (uintptr_t)HIGH_BITS) >= 0){
            _i_64756 = NewDouble((eudouble)_i_64756);
        }
    }
    else {
        if (IS_ATOM_INT(_32169)) {
            _i_64756 = NewDouble((eudouble)_32169 + DBL_PTR(_32170)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32170)) {
                _i_64756 = NewDouble(DBL_PTR(_32169)->dbl + (eudouble)_32170);
            }
            else
            _i_64756 = NewDouble(DBL_PTR(_32169)->dbl + DBL_PTR(_32170)->dbl);
        }
    }
    DeRef(_32169);
    _32169 = NOVALUE;
    DeRef(_32170);
    _32170 = NOVALUE;
    // SubProg scan_integer pc: 44 op: NOP1 (159)
L3: // addr: 45 pc: 44 sub: 64753 op: 159
    // SubProg scan_integer pc: 45 op: STARTLINE (58)

    /** tokenize.e:697			scan_char(state)*/
    // SubProg scan_integer pc: 47 op: PROC (27)
    Ref(_state_64755);
    _71scan_char(_state_64755);
    // SubProg scan_integer pc: 50 op: STARTLINE (58)

    /** tokenize.e:698		end while*/
    // SubProg scan_integer pc: 52 op: ENDWHILE (22)
    goto L1; // [52] 11
    // SubProg scan_integer pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 64753 op: 159
    // SubProg scan_integer pc: 55 op: STARTLINE (58)

    /** tokenize.e:700		return i*/
    // SubProg scan_integer pc: 57 op: RETURNF (28)

// Exiting block BLOCK: scan_integer

// block var state_64755
    DeRef(_state_64755);
    return _i_64756;
    // SubProg scan_integer pc: 61 op: BADRETURNF (43)
    ;
}


object _71scan_fraction(object _v_64766, object _state_64767)
{
    object _d_64771 = NOVALUE;
// skipping _32179  name type: 0
// skipping _32178  name type: 0
    object _32177 = NOVALUE; // 64777 32177
    object _32176 = NOVALUE; // 64776 32176
// skipping _32175  name type: 0
    object _32174 = NOVALUE; // 64773 32174
// skipping _32173  name type: 0
    object _32172 = NOVALUE; // 64769 32172
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_fraction pc: 1 op: STARTLINE (58)

    /** tokenize.e:704		if not Digit_Char(Look) then report_error(ERR_DECIMAL) return 0 end if*/
    // SubProg scan_fraction pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 5 op: PROC (27)
    _32172 = _71Digit_Char(_71Look_64258);
    // SubProg scan_fraction pc: 9 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32172)) {
        if (_32172 != 0){
            DeRef(_32172);
            _32172 = NOVALUE;
            goto L1; // [9] 20
        }
    }
    else {
        if (DBL_PTR(_32172)->dbl != 0.0){
            DeRef(_32172);
            _32172 = NOVALUE;
            goto L1; // [9] 20
        }
    }
    DeRef(_32172);
    _32172 = NOVALUE;
    // SubProg scan_fraction pc: 12 op: PROC (27)
    _71report_error(7);
    // SubProg scan_fraction pc: 15 op: RETURNF (28)

// Exiting block BLOCK: scan_fraction

// block var v_64766
    DeRef(_v_64766);

// block var state_64767
    DeRef(_state_64767);

// block var d_64771
    DeRef(_d_64771);
    return 0;
    // SubProg scan_fraction pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 64764 op: 159
    // SubProg scan_fraction pc: 20 op: STARTLINE (58)

    /** tokenize.e:706		atom d = 10*/
    // SubProg scan_fraction pc: 22 op: ASSIGN (18)
    DeRef(_d_64771);
    _d_64771 = 10;
    // SubProg scan_fraction pc: 25 op: STARTLINE (58)

    /** tokenize.e:707		while Digit_Char(Look) do*/
    // SubProg scan_fraction pc: 27 op: NOP2 (110)
    // SubProg scan_fraction pc: 29 op: NOPWHILE (158)
L2: // addr: 30 pc: 29 sub: 64764 op: 158
    // SubProg scan_fraction pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 32 op: PROC (27)
    _32174 = _71Digit_Char(_71Look_64258);
    // SubProg scan_fraction pc: 36 op: WHILE (47)
    if (_32174 <= 0) {
        if (_32174 == 0) {
            DeRef(_32174);
            _32174 = NOVALUE;
            goto L3; // [36] 80
        }
        else {
            if (!IS_ATOM_INT(_32174) && DBL_PTR(_32174)->dbl == 0.0){
                DeRef(_32174);
                _32174 = NOVALUE;
                goto L3; // [36] 80
            }
            DeRef(_32174);
            _32174 = NOVALUE;
        }
    }
    DeRef(_32174);
    _32174 = NOVALUE;
    // SubProg scan_fraction pc: 39 op: STARTLINE (58)

    /** tokenize.e:708			if Look != '_' then*/
    // SubProg scan_fraction pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 43 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 95)
    goto L4; // [43] 70
    // SubProg scan_fraction pc: 47 op: STARTLINE (58)

    /** tokenize.e:709				v += (Look - '0') / d*/
    // SubProg scan_fraction pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_fraction pc: 51 op: MINUS (10)
    _32176 = _71Look_64258 - 48;
    if ((object)((uintptr_t)_32176 +(uintptr_t) HIGH_BITS) >= 0){
        _32176 = NewDouble((eudouble)_32176);
    }
    // SubProg scan_fraction pc: 55 op: DIVIDE (14)
    if (IS_ATOM_INT(_32176) && IS_ATOM_INT(_d_64771)) {
        _32177 = (_32176 % _d_64771) ? NewDouble((eudouble)_32176 / _d_64771) : (_32176 / _d_64771);
    }
    else {
        if (IS_ATOM_INT(_32176)) {
            _32177 = NewDouble((eudouble)_32176 / DBL_PTR(_d_64771)->dbl);
        }
        else {
            if (IS_ATOM_INT(_d_64771)) {
                _32177 = NewDouble(DBL_PTR(_32176)->dbl / (eudouble)_d_64771);
            }
            else
            _32177 = NewDouble(DBL_PTR(_32176)->dbl / DBL_PTR(_d_64771)->dbl);
        }
    }
    DeRef(_32176);
    _32176 = NOVALUE;
    // SubProg scan_fraction pc: 59 op: PLUS (11)
    _0 = _v_64766;
    if (IS_ATOM_INT(_v_64766) && IS_ATOM_INT(_32177)) {
        _v_64766 = _v_64766 + _32177;
        if ((object)((uintptr_t)_v_64766 + (uintptr_t)HIGH_BITS) >= 0){
            _v_64766 = NewDouble((eudouble)_v_64766);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64766)) {
            _v_64766 = NewDouble((eudouble)_v_64766 + DBL_PTR(_32177)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32177)) {
                _v_64766 = NewDouble(DBL_PTR(_v_64766)->dbl + (eudouble)_32177);
            }
            else
            _v_64766 = NewDouble(DBL_PTR(_v_64766)->dbl + DBL_PTR(_32177)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32177);
    _32177 = NOVALUE;
    // SubProg scan_fraction pc: 63 op: STARTLINE (58)

    /** tokenize.e:710				d *= 10*/
    // SubProg scan_fraction pc: 65 op: MULTIPLY (13)
    _0 = _d_64771;
    if (IS_ATOM_INT(_d_64771)) {
        if (_d_64771 == (short)_d_64771){
            _d_64771 = _d_64771 * 10;
        }
        else{
            _d_64771 = NewDouble(_d_64771 * (eudouble)10);
        }
    }
    else {
        _d_64771 = NewDouble(DBL_PTR(_d_64771)->dbl * (eudouble)10);
    }
    DeRef(_0);
    // SubProg scan_fraction pc: 69 op: NOP1 (159)
L4: // addr: 70 pc: 69 sub: 64764 op: 159
    // SubProg scan_fraction pc: 70 op: STARTLINE (58)

    /** tokenize.e:712			scan_char(state)*/
    // SubProg scan_fraction pc: 72 op: PROC (27)
    Ref(_state_64767);
    _71scan_char(_state_64767);
    // SubProg scan_fraction pc: 75 op: STARTLINE (58)

    /** tokenize.e:713		end while*/
    // SubProg scan_fraction pc: 77 op: ENDWHILE (22)
    goto L2; // [77] 30
    // SubProg scan_fraction pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 64764 op: 159
    // SubProg scan_fraction pc: 80 op: STARTLINE (58)

    /** tokenize.e:714		return v*/
    // SubProg scan_fraction pc: 82 op: RETURNF (28)

// Exiting block BLOCK: scan_fraction

// block var state_64767
    DeRef(_state_64767);

// block var d_64771
    DeRef(_d_64771);
    return _v_64766;
    // SubProg scan_fraction pc: 86 op: BADRETURNF (43)
    ;
}


object _71scan_exponent(object _v_64782, object _state_64783)
{
    object _e_64784 = NOVALUE;
// skipping _32199  name type: 0
    object _32198 = NOVALUE; // 64812 32198
// skipping _32197  name type: 0
    object _32196 = NOVALUE; // 64809 32196
// skipping _32195  name type: 0
// skipping _32194  name type: 0
    object _32193 = NOVALUE; // 64803 32193
// skipping _32192  name type: 0
// skipping _32191  name type: 0
// skipping _32190  name type: 0
// skipping _32188  name type: 0
    object _32187 = NOVALUE; // 64794 32187
// skipping _32186  name type: 0
    object _32184 = NOVALUE; // 64790 32184
    object _32182 = NOVALUE; // 64788 32182
    object _32181 = NOVALUE; // 64787 32181
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_exponent pc: 1 op: STARTLINE (58)

    /** tokenize.e:720		if ((Look != 'e') and (Look != 'E')) then return v end if*/
    // SubProg scan_exponent pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 5 op: NOTEQ (4)
    _32181 = (_71Look_64258 != 101);
    // SubProg scan_exponent pc: 9 op: SC1_AND (141)
    if (_32181 == 0) {
        _32182 = 0;
        goto L1; // [9] 23
    }
    // SubProg scan_exponent pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 15 op: NOTEQ (4)
    _32184 = (_71Look_64258 != 69);
    // SubProg scan_exponent pc: 19 op: SC2_AND (142)
    _32182 = (_32184 != 0);
    // SubProg scan_exponent pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 64780 op: 159
    // SubProg scan_exponent pc: 23 op: IF (20)
    if (_32182 == 0)
    {
        _32182 = NOVALUE;
        goto L2; // [23] 31
    }
    else{
        _32182 = NOVALUE;
    }
    // SubProg scan_exponent pc: 26 op: RETURNF (28)

// Exiting block BLOCK: scan_exponent

// block var state_64783
    DeRef(_state_64783);

// block var e_64784
    DeRef(_e_64784);
    DeRef(_32181);
    _32181 = NOVALUE;
    DeRef(_32184);
    _32184 = NOVALUE;
    return _v_64782;
    // SubProg scan_exponent pc: 30 op: NOP1 (159)
L2: // addr: 31 pc: 30 sub: 64780 op: 159
    // SubProg scan_exponent pc: 31 op: STARTLINE (58)

    /** tokenize.e:721		scan_char(state)*/
    // SubProg scan_exponent pc: 33 op: PROC (27)
    Ref(_state_64783);
    _71scan_char(_state_64783);
    // SubProg scan_exponent pc: 36 op: STARTLINE (58)

    /** tokenize.e:723		if (Look = '-') then*/
    // SubProg scan_exponent pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 40 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 45)
    goto L3; // [40] 61
    // SubProg scan_exponent pc: 44 op: STARTLINE (58)

    /** tokenize.e:724			scan_char(state)*/
    // SubProg scan_exponent pc: 46 op: PROC (27)
    Ref(_state_64783);
    _71scan_char(_state_64783);
    // SubProg scan_exponent pc: 49 op: STARTLINE (58)

    /** tokenize.e:725			e = -scan_integer(state)*/
    // SubProg scan_exponent pc: 51 op: PROC (27)
    Ref(_state_64783);
    _32187 = _71scan_integer(_state_64783);
    // SubProg scan_exponent pc: 55 op: UMINUS (12)
    DeRef(_e_64784);
    if (IS_ATOM_INT(_32187)) {
        if ((uintptr_t)_32187 == (uintptr_t)HIGH_BITS){
            _e_64784 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _e_64784 = - _32187;
        }
    }
    else {
        _e_64784 = unary_op(UMINUS, _32187);
    }
    DeRef(_32187);
    _32187 = NOVALUE;
    // SubProg scan_exponent pc: 58 op: ELSE (23)
    goto L4; // [58] 80
    // SubProg scan_exponent pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 64780 op: 159
    // SubProg scan_exponent pc: 61 op: STARTLINE (58)

    /** tokenize.e:727			if (Look = '+') then scan_char(state) end if*/
    // SubProg scan_exponent pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_exponent pc: 65 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 43)
    goto L5; // [65] 73
    // SubProg scan_exponent pc: 69 op: PROC (27)
    Ref(_state_64783);
    _71scan_char(_state_64783);
    // SubProg scan_exponent pc: 72 op: NOP1 (159)
L5: // addr: 73 pc: 72 sub: 64780 op: 159
    // SubProg scan_exponent pc: 73 op: STARTLINE (58)

    /** tokenize.e:728			e = scan_integer(state)*/
    // SubProg scan_exponent pc: 75 op: PROC (27)
    Ref(_state_64783);
    _0 = _e_64784;
    _e_64784 = _71scan_integer(_state_64783);
    DeRef(_0);
    // SubProg scan_exponent pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 64780 op: 159
    // SubProg scan_exponent pc: 80 op: STARTLINE (58)

    /** tokenize.e:731		if e > 308 then*/
    // SubProg scan_exponent pc: 82 op: PRIVATE_INIT_CHECK (30)
    // SubProg scan_exponent pc: 84 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _e_64784, 308)){
        goto L6; // [84] 137
    }
    // SubProg scan_exponent pc: 88 op: STARTLINE (58)

    /** tokenize.e:732			v *= power(10, 308)*/
    // SubProg scan_exponent pc: 90 op: POWER (72)
    _32193 = power(10, 308);
    // SubProg scan_exponent pc: 94 op: MULTIPLY (13)
    _0 = _v_64782;
    if (IS_ATOM_INT(_v_64782) && IS_ATOM_INT(_32193)) {
        if (_v_64782 == (short)_v_64782 && _32193 <= INT15 && _32193 >= -INT15){
            _v_64782 = _v_64782 * _32193;
        }
        else{
            _v_64782 = NewDouble(_v_64782 * (eudouble)_32193);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64782)) {
            _v_64782 = NewDouble((eudouble)_v_64782 * DBL_PTR(_32193)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32193)) {
                _v_64782 = NewDouble(DBL_PTR(_v_64782)->dbl * (eudouble)_32193);
            }
            else
            _v_64782 = NewDouble(DBL_PTR(_v_64782)->dbl * DBL_PTR(_32193)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32193);
    _32193 = NOVALUE;
    // SubProg scan_exponent pc: 98 op: STARTLINE (58)

    /** tokenize.e:733			if e > 1000 then e = 1000 end if*/
    // SubProg scan_exponent pc: 100 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _e_64784, 1000)){
        goto L7; // [100] 108
    }
    // SubProg scan_exponent pc: 104 op: ASSIGN (18)
    DeRef(_e_64784);
    _e_64784 = 1000;
    // SubProg scan_exponent pc: 107 op: NOP1 (159)
L7: // addr: 108 pc: 107 sub: 64780 op: 159
    // SubProg scan_exponent pc: 108 op: STARTLINE (58)

    /** tokenize.e:734			for i = 1 to e - 308 do*/
    // SubProg scan_exponent pc: 110 op: MINUS (10)
    if (IS_ATOM_INT(_e_64784)) {
        _32196 = _e_64784 - 308;
        if ((object)((uintptr_t)_32196 +(uintptr_t) HIGH_BITS) >= 0){
            _32196 = NewDouble((eudouble)_32196);
        }
    }
    else {
        _32196 = NewDouble(DBL_PTR(_e_64784)->dbl - (eudouble)308);
    }
    // SubProg scan_exponent pc: 114 op: FOR (21)
    {
        object _i_64808;
        _i_64808 = 1;
L8: // addr: 121 pc: 114 sub: 64780 op: 21
        if (binary_op_a(GREATER, _i_64808, _32196)){
            goto L9; // [114] 134
        }
        // SubProg scan_exponent pc: 121 op: STARTLINE (58)

        /** tokenize.e:735				v *= 10*/
        // SubProg scan_exponent pc: 123 op: MULTIPLY (13)
        _0 = _v_64782;
        if (IS_ATOM_INT(_v_64782)) {
            if (_v_64782 == (short)_v_64782){
                _v_64782 = _v_64782 * 10;
            }
            else{
                _v_64782 = NewDouble(_v_64782 * (eudouble)10);
            }
        }
        else {
            _v_64782 = NewDouble(DBL_PTR(_v_64782)->dbl * (eudouble)10);
        }
        DeRef(_0);
        // SubProg scan_exponent pc: 127 op: STARTLINE (58)

        /** tokenize.e:736			end for*/
        // SubProg scan_exponent pc: 129 op: ENDFOR_INT_UP1 (54)
        _0 = _i_64808;
        if (IS_ATOM_INT(_i_64808)) {
            _i_64808 = _i_64808 + 1;
            if ((object)((uintptr_t)_i_64808 +(uintptr_t) HIGH_BITS) >= 0){
                _i_64808 = NewDouble((eudouble)_i_64808);
            }
        }
        else {
            _i_64808 = binary_op_a(PLUS, _i_64808, 1);
        }
        DeRef(_0);
        goto L8; // [129] 121
L9: // addr: 134 pc: 129 sub: 64780 op: 54
        ;
        DeRef(_i_64808);
    }
    // SubProg scan_exponent pc: 134 op: ELSE (23)
    goto LA; // [134] 148
    // SubProg scan_exponent pc: 136 op: NOP1 (159)
L6: // addr: 137 pc: 136 sub: 64780 op: 159
    // SubProg scan_exponent pc: 137 op: STARTLINE (58)

    /** tokenize.e:738			v *= power(10, e)*/
    // SubProg scan_exponent pc: 139 op: POWER (72)
    if (IS_ATOM_INT(_e_64784)) {
        _32198 = power(10, _e_64784);
    }
    else {
        temp_d.dbl = (eudouble)10;
        _32198 = Dpower(&temp_d, DBL_PTR(_e_64784));
    }
    // SubProg scan_exponent pc: 143 op: MULTIPLY (13)
    _0 = _v_64782;
    if (IS_ATOM_INT(_v_64782) && IS_ATOM_INT(_32198)) {
        if (_v_64782 == (short)_v_64782 && _32198 <= INT15 && _32198 >= -INT15){
            _v_64782 = _v_64782 * _32198;
        }
        else{
            _v_64782 = NewDouble(_v_64782 * (eudouble)_32198);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64782)) {
            _v_64782 = NewDouble((eudouble)_v_64782 * DBL_PTR(_32198)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32198)) {
                _v_64782 = NewDouble(DBL_PTR(_v_64782)->dbl * (eudouble)_32198);
            }
            else
            _v_64782 = NewDouble(DBL_PTR(_v_64782)->dbl * DBL_PTR(_32198)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32198);
    _32198 = NOVALUE;
    // SubProg scan_exponent pc: 147 op: NOP1 (159)
LA: // addr: 148 pc: 147 sub: 64780 op: 159
    // SubProg scan_exponent pc: 148 op: STARTLINE (58)

    /** tokenize.e:740		return v*/
    // SubProg scan_exponent pc: 150 op: RETURNF (28)

// Exiting block BLOCK: scan_exponent

// block var state_64783
    DeRef(_state_64783);

// block var e_64784
    DeRef(_e_64784);
    DeRef(_32181);
    _32181 = NOVALUE;
    DeRef(_32196);
    _32196 = NOVALUE;
    DeRef(_32184);
    _32184 = NOVALUE;
    return _v_64782;
    // SubProg scan_exponent pc: 154 op: BADRETURNF (43)
    ;
}


object _71scan_number(object _state_64816)
{
    object _startSti_64823 = NOVALUE;
    object _v_64837 = NOVALUE;
// skipping _32224  name type: 0
    object _32223 = NOVALUE; // 64853 32223
    object _32222 = NOVALUE; // 64851 32222
    object _32221 = NOVALUE; // 64850 32221
    object _32220 = NOVALUE; // 64848 32220
    object _32219 = NOVALUE; // 64847 32219
// skipping _32218  name type: 0
    object _32217 = NOVALUE; // 64845 32217
// skipping _32216  name type: 0
// skipping _32215  name type: 0
// skipping _32214  name type: 0
    object _32213 = NOVALUE; // 64838 32213
    object _32212 = NOVALUE; // 64835 32212
    object _32211 = NOVALUE; // 64834 32211
    object _32210 = NOVALUE; // 64833 32210
    object _32209 = NOVALUE; // 64831 32209
    object _32208 = NOVALUE; // 64830 32208
    object _32207 = NOVALUE; // 64829 32207
    object _32206 = NOVALUE; // 64828 32206
    object _32204 = NOVALUE; // 64825 32204
    object _32203 = NOVALUE; // 64822 32203
    object _32202 = NOVALUE; // 64821 32202
// skipping _32201  name type: 0
    object _32200 = NOVALUE; // 64818 32200
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_number pc: 1 op: STARTLINE (58)

    /** tokenize.e:744		if not Digit_Char(Look) then*/
    // SubProg scan_number pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 5 op: PROC (27)
    _32200 = _71Digit_Char(_71Look_64258);
    // SubProg scan_number pc: 9 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32200)) {
        if (_32200 != 0){
            DeRef(_32200);
            _32200 = NOVALUE;
            goto L1; // [9] 19
        }
    }
    else {
        if (DBL_PTR(_32200)->dbl != 0.0){
            DeRef(_32200);
            _32200 = NOVALUE;
            goto L1; // [9] 19
        }
    }
    DeRef(_32200);
    _32200 = NOVALUE;
    // SubProg scan_number pc: 12 op: STARTLINE (58)

    /** tokenize.e:745			return FALSE*/
    // SubProg scan_number pc: 14 op: RETURNF (28)

// Exiting block BLOCK: scan_number

// block var state_64816
    DeRef(_state_64816);
    return 0;
    // SubProg scan_number pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 64814 op: 159
    // SubProg scan_number pc: 19 op: STARTLINE (58)

    /** tokenize.e:748		Token[TTYPE] = T_NUMBER*/
    // SubProg scan_number pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 23 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg scan_number pc: 27 op: STARTLINE (58)

    /** tokenize.e:749		Token[TFORM] = TF_INT*/
    // SubProg scan_number pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 31 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    // SubProg scan_number pc: 35 op: STARTLINE (58)

    /** tokenize.e:751		if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg scan_number pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64816)){
        _32202 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64816)->dbl));
    }
    else{
        _32202 = (object)*(((s1_ptr)_2)->base + _state_64816);
    }
    // SubProg scan_number pc: 43 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32202);
    _32203 = (object)*(((s1_ptr)_2)->base + 3);
    _32202 = NOVALUE;
    // SubProg scan_number pc: 47 op: IF (20)
    if (_32203 == 0) {
        _32203 = NOVALUE;
        goto L2; // [47] 170
    }
    else {
        if (!IS_ATOM_INT(_32203) && DBL_PTR(_32203)->dbl == 0.0){
            _32203 = NOVALUE;
            goto L2; // [47] 170
        }
        _32203 = NOVALUE;
    }
    _32203 = NOVALUE;
    // SubProg scan_number pc: 50 op: STARTLINE (58)

    /** tokenize.e:752			integer startSti = sti*/
    // SubProg scan_number pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 54 op: ASSIGN_I (113)
    _startSti_64823 = _71sti_64255;
    // SubProg scan_number pc: 57 op: STARTLINE (58)

    /** tokenize.e:754			while Digit_Char(Look) do*/
    // SubProg scan_number pc: 59 op: NOP2 (110)
    // SubProg scan_number pc: 61 op: NOPWHILE (158)
L3: // addr: 62 pc: 61 sub: 64814 op: 158
    // SubProg scan_number pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 64 op: PROC (27)
    _32204 = _71Digit_Char(_71Look_64258);
    // SubProg scan_number pc: 68 op: WHILE (47)
    if (_32204 <= 0) {
        if (_32204 == 0) {
            DeRef(_32204);
            _32204 = NOVALUE;
            goto L4; // [68] 81
        }
        else {
            if (!IS_ATOM_INT(_32204) && DBL_PTR(_32204)->dbl == 0.0){
                DeRef(_32204);
                _32204 = NOVALUE;
                goto L4; // [68] 81
            }
            DeRef(_32204);
            _32204 = NOVALUE;
        }
    }
    DeRef(_32204);
    _32204 = NOVALUE;
    // SubProg scan_number pc: 71 op: STARTLINE (58)

    /** tokenize.e:755				scan_char(state)*/
    // SubProg scan_number pc: 73 op: PROC (27)
    Ref(_state_64816);
    _71scan_char(_state_64816);
    // SubProg scan_number pc: 76 op: STARTLINE (58)

    /** tokenize.e:756			end while*/
    // SubProg scan_number pc: 78 op: ENDWHILE (22)
    goto L3; // [78] 62
    // SubProg scan_number pc: 80 op: NOP1 (159)
L4: // addr: 81 pc: 80 sub: 64814 op: 159
    // SubProg scan_number pc: 81 op: STARTLINE (58)

    /** tokenize.e:758			if Look = '.' and lookahead(1, state) != '.' then*/
    // SubProg scan_number pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 85 op: EQUALS (3)
    _32206 = (_71Look_64258 == 46);
    // SubProg scan_number pc: 89 op: SC1_AND_IF (146)
    if (_32206 == 0) {
        goto L5; // [89] 144
    }
    // SubProg scan_number pc: 93 op: PROC (27)
    Ref(_state_64816);
    _32208 = _71lookahead(1, _state_64816);
    // SubProg scan_number pc: 98 op: NOTEQ (4)
    if (IS_ATOM_INT(_32208)) {
        _32209 = (_32208 != 46);
    }
    else {
        _32209 = binary_op(NOTEQ, _32208, 46);
    }
    DeRef(_32208);
    _32208 = NOVALUE;
    // SubProg scan_number pc: 102 op: NOP1 (159)
    // SubProg scan_number pc: 103 op: IF (20)
    if (_32209 == 0) {
        DeRef(_32209);
        _32209 = NOVALUE;
        goto L5; // [103] 144
    }
    else {
        if (!IS_ATOM_INT(_32209) && DBL_PTR(_32209)->dbl == 0.0){
            DeRef(_32209);
            _32209 = NOVALUE;
            goto L5; // [103] 144
        }
        DeRef(_32209);
        _32209 = NOVALUE;
    }
    DeRef(_32209);
    _32209 = NOVALUE;
    // SubProg scan_number pc: 106 op: STARTLINE (58)

    /** tokenize.e:759				Token[TFORM] = TF_ATOM*/
    // SubProg scan_number pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 110 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg scan_number pc: 114 op: STARTLINE (58)

    /** tokenize.e:760				scan_char(state)*/
    // SubProg scan_number pc: 116 op: PROC (27)
    Ref(_state_64816);
    _71scan_char(_state_64816);
    // SubProg scan_number pc: 119 op: STARTLINE (58)

    /** tokenize.e:762				while Digit_Char(Look) do*/
    // SubProg scan_number pc: 121 op: NOP2 (110)
    // SubProg scan_number pc: 123 op: NOPWHILE (158)
L6: // addr: 124 pc: 123 sub: 64814 op: 158
    // SubProg scan_number pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 126 op: PROC (27)
    _32210 = _71Digit_Char(_71Look_64258);
    // SubProg scan_number pc: 130 op: WHILE (47)
    if (_32210 <= 0) {
        if (_32210 == 0) {
            DeRef(_32210);
            _32210 = NOVALUE;
            goto L7; // [130] 143
        }
        else {
            if (!IS_ATOM_INT(_32210) && DBL_PTR(_32210)->dbl == 0.0){
                DeRef(_32210);
                _32210 = NOVALUE;
                goto L7; // [130] 143
            }
            DeRef(_32210);
            _32210 = NOVALUE;
        }
    }
    DeRef(_32210);
    _32210 = NOVALUE;
    // SubProg scan_number pc: 133 op: STARTLINE (58)

    /** tokenize.e:763					scan_char(state)*/
    // SubProg scan_number pc: 135 op: PROC (27)
    Ref(_state_64816);
    _71scan_char(_state_64816);
    // SubProg scan_number pc: 138 op: STARTLINE (58)

    /** tokenize.e:764				end while*/
    // SubProg scan_number pc: 140 op: ENDWHILE (22)
    goto L6; // [140] 124
    // SubProg scan_number pc: 142 op: NOP1 (159)
L7: // addr: 143 pc: 142 sub: 64814 op: 159
    // SubProg scan_number pc: 143 op: NOP1 (159)
L5: // addr: 144 pc: 143 sub: 64814 op: 159
    // SubProg scan_number pc: 144 op: STARTLINE (58)

    /** tokenize.e:767			Token[TDATA] = source_text[startSti .. sti - 1]*/
    // SubProg scan_number pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 152 op: MINUS (10)
    _32211 = _71sti_64255 - 1;
    // SubProg scan_number pc: 156 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32212;
    RHS_Slice(_71source_text_64254, _startSti_64823, _32211);
    // SubProg scan_number pc: 161 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32212;
    if( _1 != _32212 ){
        DeRef(_1);
    }
    _32212 = NOVALUE;
    // SubProg scan_number pc: 165 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var startSti_64823
    // SubProg scan_number pc: 167 op: ELSE (23)
    goto L8; // [167] 310
    // SubProg scan_number pc: 169 op: NOP1 (159)
L2: // addr: 170 pc: 169 sub: 64814 op: 159
    // SubProg scan_number pc: 170 op: STARTLINE (58)

    /** tokenize.e:769			atom v*/
    // SubProg scan_number pc: 172 op: STARTLINE (58)

    /** tokenize.e:771			Token[TDATA] = scan_integer(state)*/
    // SubProg scan_number pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 176 op: PROC (27)
    Ref(_state_64816);
    _32213 = _71scan_integer(_state_64816);
    // SubProg scan_number pc: 180 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32213;
    if( _1 != _32213 ){
        DeRef(_1);
    }
    _32213 = NOVALUE;
    // SubProg scan_number pc: 184 op: STARTLINE (58)

    /** tokenize.e:773			if not SUBSCRIPT then*/
    // SubProg scan_number pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 188 op: NOT_IFW (108)
    if (_71SUBSCRIPT_64752 != 0)
    goto L9; // [188] 307
    // SubProg scan_number pc: 191 op: STARTLINE (58)

    /** tokenize.e:774				v = Token[TDATA]*/
    // SubProg scan_number pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 195 op: RHS_SUBS (25)
    DeRef(_v_64837);
    _2 = (object)SEQ_PTR(_71Token_64252);
    _v_64837 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_v_64837);
    // SubProg scan_number pc: 199 op: STARTLINE (58)

    /** tokenize.e:775				if Look = '.' then*/
    // SubProg scan_number pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 203 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 46)
    goto LA; // [203] 266
    // SubProg scan_number pc: 207 op: STARTLINE (58)

    /** tokenize.e:776					if lookahead() = '.' then*/
    // SubProg scan_number pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 211 op: PROC (27)
    Ref(_71g_state_64304);
    _32217 = _71lookahead(1, _71g_state_64304);
    // SubProg scan_number pc: 216 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32217, 46)){
        DeRef(_32217);
        _32217 = NOVALUE;
        goto LB; // [216] 227
    }
    DeRef(_32217);
    _32217 = NOVALUE;
    // SubProg scan_number pc: 220 op: STARTLINE (58)

    /** tokenize.e:778						return TRUE*/
    // SubProg scan_number pc: 222 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var v_64837
    DeRef(_v_64837);

// Exiting block BLOCK: scan_number

// block var state_64816
    DeRef(_state_64816);
    DeRef(_32206);
    _32206 = NOVALUE;
    DeRef(_32211);
    _32211 = NOVALUE;
    return 1;
    // SubProg scan_number pc: 226 op: NOP1 (159)
LB: // addr: 227 pc: 226 sub: 64814 op: 159
    // SubProg scan_number pc: 227 op: STARTLINE (58)

    /** tokenize.e:781					scan_char()*/
    // SubProg scan_number pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 231 op: PROC (27)
    Ref(_71g_state_64304);
    _71scan_char(_71g_state_64304);
    // SubProg scan_number pc: 234 op: STARTLINE (58)

    /** tokenize.e:782					Token[TDATA] = scan_fraction(Token[TDATA], state)*/
    // SubProg scan_number pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 240 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32219 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_number pc: 244 op: PROC (27)
    Ref(_32219);
    Ref(_state_64816);
    _32220 = _71scan_fraction(_32219, _state_64816);
    _32219 = NOVALUE;
    // SubProg scan_number pc: 249 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32220;
    if( _1 != _32220 ){
        DeRef(_1);
    }
    _32220 = NOVALUE;
    // SubProg scan_number pc: 253 op: STARTLINE (58)

    /** tokenize.e:784					if ERR then return TRUE end if*/
    // SubProg scan_number pc: 255 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 257 op: IF (20)
    if (_71ERR_64259 == 0)
    {
        goto LC; // [257] 265
    }
    else{
    }
    // SubProg scan_number pc: 260 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var v_64837
    DeRef(_v_64837);

// Exiting block BLOCK: scan_number

// block var state_64816
    DeRef(_state_64816);
    DeRef(_32206);
    _32206 = NOVALUE;
    DeRef(_32211);
    _32211 = NOVALUE;
    return 1;
    // SubProg scan_number pc: 264 op: NOP1 (159)
LC: // addr: 265 pc: 264 sub: 64814 op: 159
    // SubProg scan_number pc: 265 op: NOP1 (159)
LA: // addr: 266 pc: 265 sub: 64814 op: 159
    // SubProg scan_number pc: 266 op: STARTLINE (58)

    /** tokenize.e:787				Token[TDATA] = scan_exponent(Token[TDATA], state)*/
    // SubProg scan_number pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 272 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32221 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_number pc: 276 op: PROC (27)
    Ref(_32221);
    Ref(_state_64816);
    _32222 = _71scan_exponent(_32221, _state_64816);
    _32221 = NOVALUE;
    // SubProg scan_number pc: 281 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32222;
    if( _1 != _32222 ){
        DeRef(_1);
    }
    _32222 = NOVALUE;
    // SubProg scan_number pc: 285 op: STARTLINE (58)

    /** tokenize.e:788				if v != Token[TDATA] then*/
    // SubProg scan_number pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 289 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32223 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_number pc: 293 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _v_64837, _32223)){
        _32223 = NOVALUE;
        goto LD; // [293] 306
    }
    _32223 = NOVALUE;
    // SubProg scan_number pc: 297 op: STARTLINE (58)

    /** tokenize.e:789					Token[TFORM] = TF_ATOM*/
    // SubProg scan_number pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_number pc: 301 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg scan_number pc: 305 op: NOP1 (159)
LD: // addr: 306 pc: 305 sub: 64814 op: 159
    // SubProg scan_number pc: 306 op: NOP1 (159)
L9: // addr: 307 pc: 306 sub: 64814 op: 159
    // SubProg scan_number pc: 307 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var v_64837
    DeRef(_v_64837);
    _v_64837 = NOVALUE;
    // SubProg scan_number pc: 309 op: NOP1 (159)
L8: // addr: 310 pc: 309 sub: 64814 op: 159
    // SubProg scan_number pc: 310 op: STARTLINE (58)

    /** tokenize.e:794		return TRUE*/
    // SubProg scan_number pc: 312 op: RETURNF (28)

// Exiting block BLOCK: scan_number

// block var state_64816
    DeRef(_state_64816);
    DeRef(_32206);
    _32206 = NOVALUE;
    DeRef(_32211);
    _32211 = NOVALUE;
    return 1;
    // SubProg scan_number pc: 316 op: BADRETURNF (43)
    ;
}


object _71scan_prefixed_number(object _state_64857)
{
    object _pfxCh_64861 = NOVALUE;
    object _firstCh_64867 = NOVALUE;
    object _startSti_64873 = NOVALUE;
    object _32246 = NOVALUE; // 64890 32246
    object _32245 = NOVALUE; // 64889 32245
    object _32244 = NOVALUE; // 64888 32244
    object _32243 = NOVALUE; // 64887 32243
    object _32242 = NOVALUE; // 64885 32242
    object _32241 = NOVALUE; // 64884 32241
    object _32240 = NOVALUE; // 64883 32240
    object _32239 = NOVALUE; // 64882 32239
    object _32238 = NOVALUE; // 64880 32238
// skipping _32237  name type: 0
    object _32236 = NOVALUE; // 64878 32236
// skipping _32235  name type: 0
    object _32234 = NOVALUE; // 64872 32234
// skipping _32233  name type: 0
    object _32232 = NOVALUE; // 64870 32232
// skipping _32231  name type: 0
// skipping _32230  name type: 0
    object _32229 = NOVALUE; // 64865 32229
// skipping _32227  name type: 0
// skipping _32226  name type: 0
    object _32225 = NOVALUE; // 64859 32225
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_prefixed_number pc: 1 op: STARTLINE (58)

    /** tokenize.e:798		if not (Look = '0') then*/
    // SubProg scan_prefixed_number pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 5 op: EQUALS (3)
    _32225 = (_71Look_64258 == 48);
    // SubProg scan_prefixed_number pc: 9 op: NOT_IFW (108)
    if (_32225 != 0)
    goto L1; // [9] 19
    _32225 = NOVALUE;
    // SubProg scan_prefixed_number pc: 12 op: STARTLINE (58)

    /** tokenize.e:799			return FALSE*/
    // SubProg scan_prefixed_number pc: 14 op: RETURNF (28)

// Exiting block BLOCK: scan_prefixed_number

// block var state_64857
    DeRef(_state_64857);

// block var pfxCh_64861

// block var firstCh_64867
    return 0;
    // SubProg scan_prefixed_number pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 19 op: STARTLINE (58)

    /** tokenize.e:802		integer pfxCh = lookahead(1, state)*/
    // SubProg scan_prefixed_number pc: 21 op: PROC (27)
    Ref(_state_64857);
    _pfxCh_64861 = _71lookahead(1, _state_64857);
    // SubProg scan_prefixed_number pc: 26 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pfxCh_64861)) {
        _1 = (object)(DBL_PTR(_pfxCh_64861)->dbl);
        DeRefDS(_pfxCh_64861);
        _pfxCh_64861 = _1;
    }
    // SubProg scan_prefixed_number pc: 28 op: STARTLINE (58)

    /** tokenize.e:803		if find(pfxCh, "btdx") = 0 then*/
    // SubProg scan_prefixed_number pc: 30 op: FIND_FROM (176)
    _32229 = find_from(_pfxCh_64861, _32228, 1);
    // SubProg scan_prefixed_number pc: 35 op: EQUALS_IFW_I (121)
    if (_32229 != 0)
    goto L2; // [35] 46
    // SubProg scan_prefixed_number pc: 39 op: STARTLINE (58)

    /** tokenize.e:804			return FALSE*/
    // SubProg scan_prefixed_number pc: 41 op: RETURNF (28)

// Exiting block BLOCK: scan_prefixed_number

// block var state_64857
    DeRef(_state_64857);

// block var pfxCh_64861

// block var firstCh_64867
    return 0;
    // SubProg scan_prefixed_number pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 46 op: STARTLINE (58)

    /** tokenize.e:807		integer firstCh = lookahead(2, state)*/
    // SubProg scan_prefixed_number pc: 48 op: PROC (27)
    Ref(_state_64857);
    _firstCh_64867 = _71lookahead(2, _state_64857);
    // SubProg scan_prefixed_number pc: 53 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_firstCh_64867)) {
        _1 = (object)(DBL_PTR(_firstCh_64867)->dbl);
        DeRefDS(_firstCh_64867);
        _firstCh_64867 = _1;
    }
    // SubProg scan_prefixed_number pc: 55 op: STARTLINE (58)

    /** tokenize.e:808		if Digit_Char(firstCh) or Hex_Char(firstCh) then*/
    // SubProg scan_prefixed_number pc: 57 op: PROC (27)
    _32232 = _71Digit_Char(_firstCh_64867);
    // SubProg scan_prefixed_number pc: 61 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_32232)) {
        if (_32232 != 0) {
            goto L3; // [61] 74
        }
    }
    else {
        if (DBL_PTR(_32232)->dbl != 0.0) {
            goto L3; // [61] 74
        }
    }
    // SubProg scan_prefixed_number pc: 65 op: PROC (27)
    _32234 = _71Hex_Char(_firstCh_64867);
    // SubProg scan_prefixed_number pc: 69 op: NOP1 (159)
    // SubProg scan_prefixed_number pc: 70 op: IF (20)
    if (_32234 == 0) {
        DeRef(_32234);
        _32234 = NOVALUE;
        goto L4; // [70] 238
    }
    else {
        if (!IS_ATOM_INT(_32234) && DBL_PTR(_32234)->dbl == 0.0){
            DeRef(_32234);
            _32234 = NOVALUE;
            goto L4; // [70] 238
        }
        DeRef(_32234);
        _32234 = NOVALUE;
    }
    DeRef(_32234);
    _32234 = NOVALUE;
    // SubProg scan_prefixed_number pc: 73 op: NOP1 (159)
L3: // addr: 74 pc: 73 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 74 op: STARTLINE (58)

    /** tokenize.e:809			integer startSti = sti*/
    // SubProg scan_prefixed_number pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 78 op: ASSIGN_I (113)
    _startSti_64873 = _71sti_64255;
    // SubProg scan_prefixed_number pc: 81 op: STARTLINE (58)

    /** tokenize.e:811			scan_char(state) -- skip the leading zero*/
    // SubProg scan_prefixed_number pc: 83 op: PROC (27)
    Ref(_state_64857);
    _71scan_char(_state_64857);
    // SubProg scan_prefixed_number pc: 86 op: STARTLINE (58)

    /** tokenize.e:812			scan_char(state) -- skip prefix character*/
    // SubProg scan_prefixed_number pc: 88 op: PROC (27)
    Ref(_state_64857);
    _71scan_char(_state_64857);
    // SubProg scan_prefixed_number pc: 91 op: STARTLINE (58)

    /** tokenize.e:814			Token[TTYPE] = T_NUMBER*/
    // SubProg scan_prefixed_number pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 95 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg scan_prefixed_number pc: 99 op: STARTLINE (58)

    /** tokenize.e:816			if pfxCh = 'x' then*/
    // SubProg scan_prefixed_number pc: 101 op: EQUALS_IFW_I (121)
    if (_pfxCh_64861 != 120)
    goto L5; // [101] 116
    // SubProg scan_prefixed_number pc: 105 op: STARTLINE (58)

    /** tokenize.e:817				Token[TFORM] = TF_HEX*/
    // SubProg scan_prefixed_number pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 109 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg scan_prefixed_number pc: 113 op: ELSE (23)
    goto L6; // [113] 125
    // SubProg scan_prefixed_number pc: 115 op: NOP1 (159)
L5: // addr: 116 pc: 115 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 116 op: STARTLINE (58)

    /** tokenize.e:819				Token[TFORM] = TF_INT*/
    // SubProg scan_prefixed_number pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 120 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    // SubProg scan_prefixed_number pc: 124 op: NOP1 (159)
L6: // addr: 125 pc: 124 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 125 op: STARTLINE (58)

    /** tokenize.e:822			while Hex_Char(Look) or Digit_Char(Look) do*/
    // SubProg scan_prefixed_number pc: 127 op: NOP2 (110)
    // SubProg scan_prefixed_number pc: 129 op: NOPWHILE (158)
L7: // addr: 130 pc: 129 sub: 64855 op: 158
    // SubProg scan_prefixed_number pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 132 op: PROC (27)
    _32236 = _71Hex_Char(_71Look_64258);
    // SubProg scan_prefixed_number pc: 136 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_32236)) {
        if (_32236 != 0) {
            goto L8; // [136] 151
        }
    }
    else {
        if (DBL_PTR(_32236)->dbl != 0.0) {
            goto L8; // [136] 151
        }
    }
    // SubProg scan_prefixed_number pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 142 op: PROC (27)
    _32238 = _71Digit_Char(_71Look_64258);
    // SubProg scan_prefixed_number pc: 146 op: NOP1 (159)
    // SubProg scan_prefixed_number pc: 147 op: WHILE (47)
    if (_32238 <= 0) {
        if (_32238 == 0) {
            DeRef(_32238);
            _32238 = NOVALUE;
            goto L9; // [147] 161
        }
        else {
            if (!IS_ATOM_INT(_32238) && DBL_PTR(_32238)->dbl == 0.0){
                DeRef(_32238);
                _32238 = NOVALUE;
                goto L9; // [147] 161
            }
            DeRef(_32238);
            _32238 = NOVALUE;
        }
    }
    DeRef(_32238);
    _32238 = NOVALUE;
    // SubProg scan_prefixed_number pc: 150 op: NOP1 (159)
L8: // addr: 151 pc: 150 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 151 op: STARTLINE (58)

    /** tokenize.e:823				scan_char(state)*/
    // SubProg scan_prefixed_number pc: 153 op: PROC (27)
    Ref(_state_64857);
    _71scan_char(_state_64857);
    // SubProg scan_prefixed_number pc: 156 op: STARTLINE (58)

    /** tokenize.e:824			end while*/
    // SubProg scan_prefixed_number pc: 158 op: ENDWHILE (22)
    goto L7; // [158] 130
    // SubProg scan_prefixed_number pc: 160 op: NOP1 (159)
L9: // addr: 161 pc: 160 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 161 op: STARTLINE (58)

    /** tokenize.e:826			if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg scan_prefixed_number pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 165 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64857)){
        _32239 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64857)->dbl));
    }
    else{
        _32239 = (object)*(((s1_ptr)_2)->base + _state_64857);
    }
    // SubProg scan_prefixed_number pc: 169 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32239);
    _32240 = (object)*(((s1_ptr)_2)->base + 3);
    _32239 = NOVALUE;
    // SubProg scan_prefixed_number pc: 173 op: IF (20)
    if (_32240 == 0) {
        _32240 = NOVALUE;
        goto LA; // [173] 200
    }
    else {
        if (!IS_ATOM_INT(_32240) && DBL_PTR(_32240)->dbl == 0.0){
            _32240 = NOVALUE;
            goto LA; // [173] 200
        }
        _32240 = NOVALUE;
    }
    _32240 = NOVALUE;
    // SubProg scan_prefixed_number pc: 176 op: STARTLINE (58)

    /** tokenize.e:827				Token[TDATA] = source_text[startSti .. sti - 1]*/
    // SubProg scan_prefixed_number pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 184 op: MINUS (10)
    _32241 = _71sti_64255 - 1;
    // SubProg scan_prefixed_number pc: 188 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32242;
    RHS_Slice(_71source_text_64254, _startSti_64873, _32241);
    // SubProg scan_prefixed_number pc: 193 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32242;
    if( _1 != _32242 ){
        DeRef(_1);
    }
    _32242 = NOVALUE;
    // SubProg scan_prefixed_number pc: 197 op: ELSE (23)
    goto LB; // [197] 231
    // SubProg scan_prefixed_number pc: 199 op: NOP1 (159)
LA: // addr: 200 pc: 199 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 200 op: STARTLINE (58)

    /** tokenize.e:829				Token[TDATA] = convert:to_number(source_text[startSti + 2 .. sti - 1])*/
    // SubProg scan_prefixed_number pc: 202 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 206 op: PLUS (11)
    _32243 = _startSti_64873 + 2;
    if ((object)((uintptr_t)_32243 + (uintptr_t)HIGH_BITS) >= 0){
        _32243 = NewDouble((eudouble)_32243);
    }
    // SubProg scan_prefixed_number pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_prefixed_number pc: 212 op: MINUS (10)
    _32244 = _71sti_64255 - 1;
    // SubProg scan_prefixed_number pc: 216 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32245;
    RHS_Slice(_71source_text_64254, _32243, _32244);
    // SubProg scan_prefixed_number pc: 221 op: PROC (27)
    _32246 = _16to_number(_32245, 0);
    _32245 = NOVALUE;
    // SubProg scan_prefixed_number pc: 226 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32246;
    if( _1 != _32246 ){
        DeRef(_1);
    }
    _32246 = NOVALUE;
    // SubProg scan_prefixed_number pc: 230 op: NOP1 (159)
LB: // addr: 231 pc: 230 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 231 op: STARTLINE (58)

    /** tokenize.e:832			return TRUE*/
    // SubProg scan_prefixed_number pc: 233 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var startSti_64873

// Exiting block BLOCK: scan_prefixed_number

// block var state_64857
    DeRef(_state_64857);

// block var pfxCh_64861

// block var firstCh_64867
    DeRef(_32241);
    _32241 = NOVALUE;
    DeRef(_32236);
    _32236 = NOVALUE;
    DeRef(_32243);
    _32243 = NOVALUE;
    DeRef(_32244);
    _32244 = NOVALUE;
    DeRef(_32232);
    _32232 = NOVALUE;
    return 1;
    // SubProg scan_prefixed_number pc: 237 op: NOP1 (159)
L4: // addr: 238 pc: 237 sub: 64855 op: 159
    // SubProg scan_prefixed_number pc: 238 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var startSti_64873
    // SubProg scan_prefixed_number pc: 240 op: STARTLINE (58)

    /** tokenize.e:835		return FALSE*/
    // SubProg scan_prefixed_number pc: 242 op: RETURNF (28)

// Exiting block BLOCK: scan_prefixed_number

// block var state_64857
    DeRef(_state_64857);

// block var pfxCh_64861

// block var firstCh_64867
    DeRef(_32241);
    _32241 = NOVALUE;
    DeRef(_32236);
    _32236 = NOVALUE;
    DeRef(_32243);
    _32243 = NOVALUE;
    DeRef(_32244);
    _32244 = NOVALUE;
    DeRef(_32232);
    _32232 = NOVALUE;
    return 0;
    // SubProg scan_prefixed_number pc: 246 op: BADRETURNF (43)
    ;
}


object _71hex_string(object _textdata_64893, object _string_type_64894)
{
    object _ch_64895 = NOVALUE;
    object _digit_64896 = NOVALUE;
    object _val_64897 = NOVALUE;
    object _nibble_64898 = NOVALUE;
    object _maxnibbles_64899 = NOVALUE;
    object _string_text_64900 = NOVALUE;
// skipping _32270  name type: 0
// skipping _32269  name type: 0
// skipping _32268  name type: 0
// skipping _32267  name type: 0
// skipping _32266  name type: 0
// skipping _32265  name type: 0
// skipping _32264  name type: 0
// skipping _32263  name type: 0
    object _32262 = NOVALUE; // 64927 32262
    object _32261 = NOVALUE; // 64926 32261
// skipping _32260  name type: 0
// skipping _32259  name type: 0
// skipping _32258  name type: 0
// skipping _32257  name type: 0
// skipping _32256  name type: 0
// skipping _32255  name type: 0
// skipping _32254  name type: 0
// skipping _32252  name type: 0
    object _32251 = NOVALUE; // 64911 32251
    object _32250 = NOVALUE; // 64908 32250
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hex_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg hex_string pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_string_type_64894)) {
        _1 = (object)(DBL_PTR(_string_type_64894)->dbl);
        DeRefDS(_string_type_64894);
        _string_type_64894 = _1;
    }
    // SubProg hex_string pc: 5 op: STARTLINE (58)

    /** tokenize.e:846		switch string_type do*/
    // SubProg hex_string pc: 7 op: SWITCH_I (193)
    _0 = _string_type_64894;
    switch ( _0 ){ 
        // SubProg hex_string pc: 12 op: STARTLINE (58)

        /** tokenize.e:847			case 'x' then*/
        // SubProg hex_string pc: 14 op: CASE (186)
        case 120:
        // SubProg hex_string pc: 16 op: STARTLINE (58)

        /** tokenize.e:848				maxnibbles = 2*/
        // SubProg hex_string pc: 18 op: ASSIGN_I (113)
        _maxnibbles_64899 = 2;
        // SubProg hex_string pc: 21 op: ELSE (23)
        goto L1; // [21] 60
        // SubProg hex_string pc: 23 op: STARTLINE (58)

        /** tokenize.e:849			case 'u' then*/
        // SubProg hex_string pc: 25 op: CASE (186)
        case 117:
        // SubProg hex_string pc: 27 op: STARTLINE (58)

        /** tokenize.e:850				maxnibbles = 4*/
        // SubProg hex_string pc: 29 op: ASSIGN_I (113)
        _maxnibbles_64899 = 4;
        // SubProg hex_string pc: 32 op: ELSE (23)
        goto L1; // [32] 60
        // SubProg hex_string pc: 34 op: STARTLINE (58)

        /** tokenize.e:851			case 'U' then*/
        // SubProg hex_string pc: 36 op: CASE (186)
        case 85:
        // SubProg hex_string pc: 38 op: STARTLINE (58)

        /** tokenize.e:852				maxnibbles = 8*/
        // SubProg hex_string pc: 40 op: ASSIGN_I (113)
        _maxnibbles_64899 = 8;
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
        ((intptr_t*)_2)[1] = _string_type_64894;
        _32250 = MAKE_SEQ(_1);
        // SubProg hex_string pc: 55 op: PRINTF (38)
        EPrintf(2, _32249, _32250);
        DeRefDS(_32250);
        _32250 = NOVALUE;
        // SubProg hex_string pc: 59 op: NOPSWITCH (187)
    ;}L1: // addr: 60 pc: 59 sub: 64891 op: 187
    // SubProg hex_string pc: 60 op: STARTLINE (58)

    /** tokenize.e:857		string_text = ""*/
    // SubProg hex_string pc: 62 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_string_text_64900);
    _string_text_64900 = _21936;
    // SubProg hex_string pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg hex_string pc: 67 op: STARTLINE (58)

    /** tokenize.e:858		nibble = 1*/
    // SubProg hex_string pc: 69 op: ASSIGN_I (113)
    _nibble_64898 = 1;
    // SubProg hex_string pc: 72 op: STARTLINE (58)

    /** tokenize.e:859		val = -1*/
    // SubProg hex_string pc: 74 op: ASSIGN (18)
    DeRef(_val_64897);
    _val_64897 = -1;
    // SubProg hex_string pc: 77 op: STARTLINE (58)

    /** tokenize.e:860		for cpos = 1 to length(textdata) do*/
    // SubProg hex_string pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_textdata_64893)){
            _32251 = SEQ_PTR(_textdata_64893)->length;
    }
    else {
        _32251 = 1;
    }
    // SubProg hex_string pc: 82 op: FOR_I (125)
    {
        object _cpos_64910;
        _cpos_64910 = 1;
L2: // addr: 89 pc: 82 sub: 64891 op: 125
        if (_cpos_64910 > _32251){
            goto L3; // [82] 229
        }
        // SubProg hex_string pc: 89 op: STARTLINE (58)

        /** tokenize.e:861			ch = textdata[cpos]*/
        // SubProg hex_string pc: 91 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_textdata_64893);
        _ch_64895 = (object)*(((s1_ptr)_2)->base + _cpos_64910);
        if (!IS_ATOM_INT(_ch_64895))
        _ch_64895 = (object)DBL_PTR(_ch_64895)->dbl;
        // SubProg hex_string pc: 95 op: STARTLINE (58)

        /** tokenize.e:863			digit = find(ch, "0123456789ABCDEFabcdef _\t\n\r")*/
        // SubProg hex_string pc: 97 op: FIND_FROM (176)
        _digit_64896 = find_from(_ch_64895, _32253, 1);
        // SubProg hex_string pc: 102 op: STARTLINE (58)

        /** tokenize.e:864			if digit = 0 then*/
        // SubProg hex_string pc: 104 op: EQUALS_IFW_I (121)
        if (_digit_64896 != 0)
        goto L4; // [104] 115
        // SubProg hex_string pc: 108 op: STARTLINE (58)

        /** tokenize.e:865				return 0*/
        // SubProg hex_string pc: 110 op: RETURNF (28)

// Exiting block BLOCK: hex_string

// block var textdata_64893
        DeRefDS(_textdata_64893);

// block var string_type_64894

// block var ch_64895

// block var digit_64896

// block var val_64897
        DeRef(_val_64897);

// block var nibble_64898

// block var maxnibbles_64899

// block var string_text_64900
        DeRef(_string_text_64900);
        return 0;
        // SubProg hex_string pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 64891 op: 159
        // SubProg hex_string pc: 115 op: STARTLINE (58)

        /** tokenize.e:868			if digit < 23 then*/
        // SubProg hex_string pc: 117 op: LESS_IFW_I (119)
        if (_digit_64896 >= 23)
        goto L5; // [117] 198
        // SubProg hex_string pc: 121 op: STARTLINE (58)

        /** tokenize.e:869				if digit > 16 then*/
        // SubProg hex_string pc: 123 op: GREATER_IFW_I (124)
        if (_digit_64896 <= 16)
        goto L6; // [123] 134
        // SubProg hex_string pc: 127 op: STARTLINE (58)

        /** tokenize.e:870					digit -= 6*/
        // SubProg hex_string pc: 129 op: MINUS_I (116)
        _digit_64896 = _digit_64896 - 6;
        // SubProg hex_string pc: 133 op: NOP1 (159)
L6: // addr: 134 pc: 133 sub: 64891 op: 159
        // SubProg hex_string pc: 134 op: STARTLINE (58)

        /** tokenize.e:872				if nibble = 1 then*/
        // SubProg hex_string pc: 136 op: EQUALS_IFW_I (121)
        if (_nibble_64898 != 1)
        goto L7; // [136] 149
        // SubProg hex_string pc: 140 op: STARTLINE (58)

        /** tokenize.e:873					val = digit - 1*/
        // SubProg hex_string pc: 142 op: MINUS (10)
        DeRef(_val_64897);
        _val_64897 = _digit_64896 - 1;
        if ((object)((uintptr_t)_val_64897 +(uintptr_t) HIGH_BITS) >= 0){
            _val_64897 = NewDouble((eudouble)_val_64897);
        }
        // SubProg hex_string pc: 146 op: ELSE (23)
        goto L8; // [146] 189
        // SubProg hex_string pc: 148 op: NOP1 (159)
L7: // addr: 149 pc: 148 sub: 64891 op: 159
        // SubProg hex_string pc: 149 op: STARTLINE (58)

        /** tokenize.e:875					val = val * 16 + digit - 1*/
        // SubProg hex_string pc: 151 op: MULTIPLY (13)
        if (IS_ATOM_INT(_val_64897)) {
            if (_val_64897 == (short)_val_64897){
                _32261 = _val_64897 * 16;
            }
            else{
                _32261 = NewDouble(_val_64897 * (eudouble)16);
            }
        }
        else {
            _32261 = NewDouble(DBL_PTR(_val_64897)->dbl * (eudouble)16);
        }
        // SubProg hex_string pc: 155 op: PLUS (11)
        if (IS_ATOM_INT(_32261)) {
            _32262 = _32261 + _digit_64896;
            if ((object)((uintptr_t)_32262 + (uintptr_t)HIGH_BITS) >= 0){
                _32262 = NewDouble((eudouble)_32262);
            }
        }
        else {
            _32262 = NewDouble(DBL_PTR(_32261)->dbl + (eudouble)_digit_64896);
        }
        DeRef(_32261);
        _32261 = NOVALUE;
        // SubProg hex_string pc: 159 op: MINUS (10)
        DeRef(_val_64897);
        if (IS_ATOM_INT(_32262)) {
            _val_64897 = _32262 - 1;
            if ((object)((uintptr_t)_val_64897 +(uintptr_t) HIGH_BITS) >= 0){
                _val_64897 = NewDouble((eudouble)_val_64897);
            }
        }
        else {
            _val_64897 = NewDouble(DBL_PTR(_32262)->dbl - (eudouble)1);
        }
        DeRef(_32262);
        _32262 = NOVALUE;
        // SubProg hex_string pc: 163 op: STARTLINE (58)

        /** tokenize.e:876					if nibble = maxnibbles then*/
        // SubProg hex_string pc: 165 op: PRIVATE_INIT_CHECK (30)
        // SubProg hex_string pc: 167 op: EQUALS_IFW_I (121)
        if (_nibble_64898 != _maxnibbles_64899)
        goto L9; // [167] 188
        // SubProg hex_string pc: 171 op: STARTLINE (58)

        /** tokenize.e:877						string_text &= val*/
        // SubProg hex_string pc: 173 op: CONCAT (15)
        Ref(_val_64897);
        Append(&_string_text_64900, _string_text_64900, _val_64897);
        // SubProg hex_string pc: 177 op: STARTLINE (58)

        /** tokenize.e:878						val = -1*/
        // SubProg hex_string pc: 179 op: ASSIGN (18)
        DeRef(_val_64897);
        _val_64897 = -1;
        // SubProg hex_string pc: 182 op: STARTLINE (58)

        /** tokenize.e:879						nibble = 0*/
        // SubProg hex_string pc: 184 op: ASSIGN_I (113)
        _nibble_64898 = 0;
        // SubProg hex_string pc: 187 op: NOP1 (159)
L9: // addr: 188 pc: 187 sub: 64891 op: 159
        // SubProg hex_string pc: 188 op: NOP1 (159)
L8: // addr: 189 pc: 188 sub: 64891 op: 159
        // SubProg hex_string pc: 189 op: STARTLINE (58)

        /** tokenize.e:882				nibble += 1*/
        // SubProg hex_string pc: 191 op: PLUS1_I (117)
        _nibble_64898 = _nibble_64898 + 1;
        // SubProg hex_string pc: 195 op: ELSE (23)
        goto LA; // [195] 222
        // SubProg hex_string pc: 197 op: NOP1 (159)
L5: // addr: 198 pc: 197 sub: 64891 op: 159
        // SubProg hex_string pc: 198 op: STARTLINE (58)

        /** tokenize.e:885				if val >= 0 then*/
        // SubProg hex_string pc: 200 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _val_64897, 0)){
            goto LB; // [200] 216
        }
        // SubProg hex_string pc: 204 op: STARTLINE (58)

        /** tokenize.e:887					string_text &= val*/
        // SubProg hex_string pc: 206 op: CONCAT (15)
        Ref(_val_64897);
        Append(&_string_text_64900, _string_text_64900, _val_64897);
        // SubProg hex_string pc: 210 op: STARTLINE (58)

        /** tokenize.e:888					val = -1*/
        // SubProg hex_string pc: 212 op: ASSIGN (18)
        DeRef(_val_64897);
        _val_64897 = -1;
        // SubProg hex_string pc: 215 op: NOP1 (159)
LB: // addr: 216 pc: 215 sub: 64891 op: 159
        // SubProg hex_string pc: 216 op: STARTLINE (58)

        /** tokenize.e:890				nibble = 1*/
        // SubProg hex_string pc: 218 op: ASSIGN_I (113)
        _nibble_64898 = 1;
        // SubProg hex_string pc: 221 op: NOP1 (159)
LA: // addr: 222 pc: 221 sub: 64891 op: 159
        // SubProg hex_string pc: 222 op: STARTLINE (58)

        /** tokenize.e:892		end for*/
        // SubProg hex_string pc: 224 op: ENDFOR_INT_UP1 (54)
        _cpos_64910 = _cpos_64910 + 1;
        goto L2; // [224] 89
L3: // addr: 229 pc: 224 sub: 64891 op: 54
        ;
    }
    // SubProg hex_string pc: 229 op: STARTLINE (58)

    /** tokenize.e:894		if val >= 0 then*/
    // SubProg hex_string pc: 231 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_64897, 0)){
        goto LC; // [231] 242
    }
    // SubProg hex_string pc: 235 op: STARTLINE (58)

    /** tokenize.e:896			string_text &= val*/
    // SubProg hex_string pc: 237 op: CONCAT (15)
    Ref(_val_64897);
    Append(&_string_text_64900, _string_text_64900, _val_64897);
    // SubProg hex_string pc: 241 op: NOP1 (159)
LC: // addr: 242 pc: 241 sub: 64891 op: 159
    // SubProg hex_string pc: 242 op: STARTLINE (58)

    /** tokenize.e:899		return string_text*/
    // SubProg hex_string pc: 244 op: RETURNF (28)

// Exiting block BLOCK: hex_string

// block var textdata_64893
    DeRefDS(_textdata_64893);

// block var string_type_64894

// block var ch_64895

// block var digit_64896

// block var val_64897
    DeRef(_val_64897);

// block var nibble_64898

// block var maxnibbles_64899
    return _string_text_64900;
    // SubProg hex_string pc: 248 op: BADRETURNF (43)
    ;
}


object _71scan_identifier(object _state_64943)
{
    object _nextch_64944 = NOVALUE;
    object _startpos_64945 = NOVALUE;
    object _textdata_64946 = NOVALUE;
    object _whichhex_64957 = NOVALUE;
    object _32316 = NOVALUE; // 65010 32316
    object _32315 = NOVALUE; // 65009 32315
    object _32314 = NOVALUE; // 65008 32314
    object _32313 = NOVALUE; // 65007 32313
    object _32312 = NOVALUE; // 65005 32312
    object _32311 = NOVALUE; // 65003 32311
    object _32310 = NOVALUE; // 65002 32310
    object _32309 = NOVALUE; // 65000 32309
    object _32308 = NOVALUE; // 64999 32308
    object _32307 = NOVALUE; // 64997 32307
    object _32306 = NOVALUE; // 64995 32306
    object _32305 = NOVALUE; // 64993 32305
    object _32304 = NOVALUE; // 64992 32304
    object _32303 = NOVALUE; // 64991 32303
    object _32302 = NOVALUE; // 64989 32302
    object _32301 = NOVALUE; // 64988 32301
    object _32300 = NOVALUE; // 64987 32300
    object _32299 = NOVALUE; // 64986 32299
    object _32298 = NOVALUE; // 64984 32298
    object _32297 = NOVALUE; // 64983 32297
    object _32296 = NOVALUE; // 64982 32296
    object _32295 = NOVALUE; // 64981 32295
    object _32294 = NOVALUE; // 64979 32294
// skipping _32293  name type: 0
    object _32292 = NOVALUE; // 64976 32292
    object _32291 = NOVALUE; // 64975 32291
    object _32290 = NOVALUE; // 64974 32290
    object _32289 = NOVALUE; // 64973 32289
// skipping _32288  name type: 0
    object _32287 = NOVALUE; // 64971 32287
    object _32286 = NOVALUE; // 64970 32286
    object _32285 = NOVALUE; // 64968 32285
    object _32284 = NOVALUE; // 64967 32284
    object _32283 = NOVALUE; // 64966 32283
    object _32282 = NOVALUE; // 64965 32282
// skipping _32281  name type: 0
// skipping _32280  name type: 0
    object _32279 = NOVALUE; // 64960 32279
    object _32278 = NOVALUE; // 64959 32278
// skipping _32277  name type: 0
// skipping _32276  name type: 0
    object _32275 = NOVALUE; // 64953 32275
    object _32274 = NOVALUE; // 64951 32274
    object _32273 = NOVALUE; // 64950 32273
    object _32272 = NOVALUE; // 64949 32272
    object _32271 = NOVALUE; // 64948 32271
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_identifier pc: 1 op: STARTLINE (58)

    /** tokenize.e:909		if not Alpha_Char(Look) and Look != '_' then*/
    // SubProg scan_identifier pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 5 op: PROC (27)
    _32271 = _71Alpha_Char(_71Look_64258);
    // SubProg scan_identifier pc: 9 op: NOT (7)
    if (IS_ATOM_INT(_32271)) {
        _32272 = (_32271 == 0);
    }
    else {
        _32272 = unary_op(NOT, _32271);
    }
    DeRef(_32271);
    _32271 = NOVALUE;
    // SubProg scan_identifier pc: 12 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32272)) {
        if (_32272 == 0) {
            goto L1; // [12] 33
        }
    }
    else {
        if (DBL_PTR(_32272)->dbl == 0.0) {
            goto L1; // [12] 33
        }
    }
    // SubProg scan_identifier pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 18 op: NOTEQ (4)
    _32274 = (_71Look_64258 != 95);
    // SubProg scan_identifier pc: 22 op: NOP1 (159)
    // SubProg scan_identifier pc: 23 op: IF (20)
    if (_32274 == 0)
    {
        DeRef(_32274);
        _32274 = NOVALUE;
        goto L1; // [23] 33
    }
    else{
        DeRef(_32274);
        _32274 = NOVALUE;
    }
    // SubProg scan_identifier pc: 26 op: STARTLINE (58)

    /** tokenize.e:910			return FALSE*/
    // SubProg scan_identifier pc: 28 op: RETURNF (28)

// Exiting block BLOCK: scan_identifier

// block var state_64943
    DeRef(_state_64943);

// block var nextch_64944

// block var startpos_64945

// block var textdata_64946
    DeRef(_textdata_64946);
    DeRef(_32272);
    _32272 = NOVALUE;
    return 0;
    // SubProg scan_identifier pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 64941 op: 159
    // SubProg scan_identifier pc: 33 op: STARTLINE (58)

    /** tokenize.e:913		if find(Look, "xuU") then*/
    // SubProg scan_identifier pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 37 op: FIND_FROM (176)
    _32275 = find_from(_71Look_64258, _32247, 1);
    // SubProg scan_identifier pc: 42 op: IF (20)
    if (_32275 == 0)
    {
        _32275 = NOVALUE;
        goto L2; // [42] 354
    }
    else{
        _32275 = NOVALUE;
    }
    // SubProg scan_identifier pc: 45 op: STARTLINE (58)

    /** tokenize.e:914			nextch = lookahead(state, state)*/
    // SubProg scan_identifier pc: 47 op: PROC (27)
    Ref(_state_64943);
    Ref(_state_64943);
    _nextch_64944 = _71lookahead(_state_64943, _state_64943);
    // SubProg scan_identifier pc: 52 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_nextch_64944)) {
        _1 = (object)(DBL_PTR(_nextch_64944)->dbl);
        DeRefDS(_nextch_64944);
        _nextch_64944 = _1;
    }
    // SubProg scan_identifier pc: 54 op: STARTLINE (58)

    /** tokenize.e:915			if nextch = '"' then*/
    // SubProg scan_identifier pc: 56 op: EQUALS_IFW_I (121)
    if (_nextch_64944 != 34)
    goto L3; // [56] 351
    // SubProg scan_identifier pc: 60 op: STARTLINE (58)

    /** tokenize.e:917				integer whichhex = Look*/
    // SubProg scan_identifier pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 64 op: ASSIGN_I (113)
    _whichhex_64957 = _71Look_64258;
    // SubProg scan_identifier pc: 67 op: STARTLINE (58)

    /** tokenize.e:918				textdata = ""*/
    // SubProg scan_identifier pc: 69 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_textdata_64946);
    _textdata_64946 = _21936;
    // SubProg scan_identifier pc: 72 op: STARTLINE (58)

    /** tokenize.e:919				scan_char(state)	-- Skip over starting quote*/
    // SubProg scan_identifier pc: 74 op: PROC (27)
    Ref(_state_64943);
    _71scan_char(_state_64943);
    // SubProg scan_identifier pc: 77 op: STARTLINE (58)

    /** tokenize.e:920				scan_char(state) -- First char of string*/
    // SubProg scan_identifier pc: 79 op: PROC (27)
    Ref(_state_64943);
    _71scan_char(_state_64943);
    // SubProg scan_identifier pc: 82 op: STARTLINE (58)

    /** tokenize.e:921				startpos = sti*/
    // SubProg scan_identifier pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 86 op: ASSIGN_I (113)
    _startpos_64945 = _71sti_64255;
    // SubProg scan_identifier pc: 89 op: STARTLINE (58)

    /** tokenize.e:923				while not find(Look, {'"', io:EOF}) do*/
    // SubProg scan_identifier pc: 91 op: NOP2 (110)
    // SubProg scan_identifier pc: 93 op: NOPWHILE (158)
L4: // addr: 94 pc: 93 sub: 64941 op: 158
    // SubProg scan_identifier pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 96 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 34;
    ((intptr_t *)_2)[2] = -1;
    _32278 = MAKE_SEQ(_1);
    // SubProg scan_identifier pc: 100 op: FIND_FROM (176)
    _32279 = find_from(_71Look_64258, _32278, 1);
    DeRefDS(_32278);
    _32278 = NOVALUE;
    // SubProg scan_identifier pc: 105 op: NOT_IFW (108)
    if (_32279 != 0)
    goto L5; // [105] 118
    _32279 = NOVALUE;
    // SubProg scan_identifier pc: 108 op: STARTLINE (58)

    /** tokenize.e:924					scan_char(state)*/
    // SubProg scan_identifier pc: 110 op: PROC (27)
    Ref(_state_64943);
    _71scan_char(_state_64943);
    // SubProg scan_identifier pc: 113 op: STARTLINE (58)

    /** tokenize.e:925				end while*/
    // SubProg scan_identifier pc: 115 op: ENDWHILE (22)
    goto L4; // [115] 94
    // SubProg scan_identifier pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 64941 op: 159
    // SubProg scan_identifier pc: 118 op: STARTLINE (58)

    /** tokenize.e:927				if Look = io:EOF then*/
    // SubProg scan_identifier pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 122 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != -1)
    goto L6; // [122] 175
    // SubProg scan_identifier pc: 126 op: STARTLINE (58)

    /** tokenize.e:928					if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_identifier pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 130 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64943)){
        _32282 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64943)->dbl));
    }
    else{
        _32282 = (object)*(((s1_ptr)_2)->base + _state_64943);
    }
    // SubProg scan_identifier pc: 134 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32282);
    _32283 = (object)*(((s1_ptr)_2)->base + 8);
    _32282 = NOVALUE;
    // SubProg scan_identifier pc: 138 op: IF (20)
    if (_32283 == 0) {
        _32283 = NOVALUE;
        goto L7; // [138] 163
    }
    else {
        if (!IS_ATOM_INT(_32283) && DBL_PTR(_32283)->dbl == 0.0){
            _32283 = NOVALUE;
            goto L7; // [138] 163
        }
        _32283 = NOVALUE;
    }
    _32283 = NOVALUE;
    // SubProg scan_identifier pc: 141 op: STARTLINE (58)

    /** tokenize.e:929						Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    // SubProg scan_identifier pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 147 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32284 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 151 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _32121;
        concat_list[1] = _32284;
        concat_list[2] = _32121;
        concat_list[3] = _whichhex_64957;
        Concat_N((object_ptr)&_32285, concat_list, 4);
    }
    _32284 = NOVALUE;
    // SubProg scan_identifier pc: 158 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32285;
    if( _1 != _32285 ){
        DeRef(_1);
    }
    _32285 = NOVALUE;
    // SubProg scan_identifier pc: 162 op: NOP1 (159)
L7: // addr: 163 pc: 162 sub: 64941 op: 159
    // SubProg scan_identifier pc: 163 op: STARTLINE (58)

    /** tokenize.e:932					report_error(ERR_EOF_STRING)*/
    // SubProg scan_identifier pc: 165 op: PROC (27)
    _71report_error(10);
    // SubProg scan_identifier pc: 168 op: STARTLINE (58)

    /** tokenize.e:933					return TRUE*/
    // SubProg scan_identifier pc: 170 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var whichhex_64957

// Exiting block BLOCK: IF-

// Exiting block BLOCK: scan_identifier

// block var state_64943
    DeRef(_state_64943);

// block var nextch_64944

// block var startpos_64945

// block var textdata_64946
    DeRef(_textdata_64946);
    DeRef(_32272);
    _32272 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 174 op: NOP1 (159)
L6: // addr: 175 pc: 174 sub: 64941 op: 159
    // SubProg scan_identifier pc: 175 op: STARTLINE (58)

    /** tokenize.e:936				if not eumem:ram_space[state][LITERAL_STRING] then*/
    // SubProg scan_identifier pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64943)){
        _32286 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64943)->dbl));
    }
    else{
        _32286 = (object)*(((s1_ptr)_2)->base + _state_64943);
    }
    // SubProg scan_identifier pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32286);
    _32287 = (object)*(((s1_ptr)_2)->base + 7);
    _32286 = NOVALUE;
    // SubProg scan_identifier pc: 187 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32287)) {
        if (_32287 != 0){
            _32287 = NOVALUE;
            goto L8; // [187] 221
        }
    }
    else {
        if (DBL_PTR(_32287)->dbl != 0.0){
            _32287 = NOVALUE;
            goto L8; // [187] 221
        }
    }
    _32287 = NOVALUE;
    // SubProg scan_identifier pc: 190 op: STARTLINE (58)

    /** tokenize.e:937					textdata = hex_string(source_text[startpos .. sti-1], source_text[startpos - 2])*/
    // SubProg scan_identifier pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 196 op: MINUS (10)
    _32289 = _71sti_64255 - 1;
    // SubProg scan_identifier pc: 200 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32290;
    RHS_Slice(_71source_text_64254, _startpos_64945, _32289);
    // SubProg scan_identifier pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 207 op: MINUS (10)
    _32291 = _startpos_64945 - 2;
    // SubProg scan_identifier pc: 211 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64254);
    _32292 = (object)*(((s1_ptr)_2)->base + _32291);
    // SubProg scan_identifier pc: 215 op: PROC (27)
    Ref(_32292);
    _0 = _textdata_64946;
    _textdata_64946 = _71hex_string(_32290, _32292);
    DeRef(_0);
    _32290 = NOVALUE;
    _32292 = NOVALUE;
    // SubProg scan_identifier pc: 220 op: NOP1 (159)
L8: // addr: 221 pc: 220 sub: 64941 op: 159
    // SubProg scan_identifier pc: 221 op: STARTLINE (58)

    /** tokenize.e:939				if atom(textdata) then*/
    // SubProg scan_identifier pc: 223 op: IS_AN_ATOM (67)
    _32294 = IS_ATOM(_textdata_64946);
    // SubProg scan_identifier pc: 226 op: IF (20)
    if (_32294 == 0)
    {
        _32294 = NOVALUE;
        goto L9; // [226] 278
    }
    else{
        _32294 = NOVALUE;
    }
    // SubProg scan_identifier pc: 229 op: STARTLINE (58)

    /** tokenize.e:941					if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_identifier pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 233 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64943)){
        _32295 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64943)->dbl));
    }
    else{
        _32295 = (object)*(((s1_ptr)_2)->base + _state_64943);
    }
    // SubProg scan_identifier pc: 237 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32295);
    _32296 = (object)*(((s1_ptr)_2)->base + 8);
    _32295 = NOVALUE;
    // SubProg scan_identifier pc: 241 op: IF (20)
    if (_32296 == 0) {
        _32296 = NOVALUE;
        goto LA; // [241] 266
    }
    else {
        if (!IS_ATOM_INT(_32296) && DBL_PTR(_32296)->dbl == 0.0){
            _32296 = NOVALUE;
            goto LA; // [241] 266
        }
        _32296 = NOVALUE;
    }
    _32296 = NOVALUE;
    // SubProg scan_identifier pc: 244 op: STARTLINE (58)

    /** tokenize.e:942						Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    // SubProg scan_identifier pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 250 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32297 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 254 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _32121;
        concat_list[1] = _32297;
        concat_list[2] = _32121;
        concat_list[3] = _whichhex_64957;
        Concat_N((object_ptr)&_32298, concat_list, 4);
    }
    _32297 = NOVALUE;
    // SubProg scan_identifier pc: 261 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32298;
    if( _1 != _32298 ){
        DeRef(_1);
    }
    _32298 = NOVALUE;
    // SubProg scan_identifier pc: 265 op: NOP1 (159)
LA: // addr: 266 pc: 265 sub: 64941 op: 159
    // SubProg scan_identifier pc: 266 op: STARTLINE (58)

    /** tokenize.e:944					report_error(ERR_HEX_STRING)*/
    // SubProg scan_identifier pc: 268 op: PROC (27)
    _71report_error(11);
    // SubProg scan_identifier pc: 271 op: STARTLINE (58)

    /** tokenize.e:945					return TRUE*/
    // SubProg scan_identifier pc: 273 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var whichhex_64957

// Exiting block BLOCK: IF-

// Exiting block BLOCK: scan_identifier

// block var state_64943
    DeRef(_state_64943);

// block var nextch_64944

// block var startpos_64945

// block var textdata_64946
    DeRef(_textdata_64946);
    DeRef(_32289);
    _32289 = NOVALUE;
    DeRef(_32291);
    _32291 = NOVALUE;
    DeRef(_32272);
    _32272 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 277 op: NOP1 (159)
L9: // addr: 278 pc: 277 sub: 64941 op: 159
    // SubProg scan_identifier pc: 278 op: STARTLINE (58)

    /** tokenize.e:948				Token[TTYPE] = T_STRING*/
    // SubProg scan_identifier pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 282 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg scan_identifier pc: 286 op: STARTLINE (58)

    /** tokenize.e:949				Token[TDATA] = textdata*/
    // SubProg scan_identifier pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 290 op: ASSIGN_SUBS (16)
    Ref(_textdata_64946);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _textdata_64946;
    DeRef(_1);
    // SubProg scan_identifier pc: 294 op: STARTLINE (58)

    /** tokenize.e:950				Token[TFORM] = TF_STRING_HEX*/
    // SubProg scan_identifier pc: 296 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 298 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 7;
    DeRef(_1);
    // SubProg scan_identifier pc: 302 op: STARTLINE (58)

    /** tokenize.e:952				scan_char(state)	-- go to next char after end of string*/
    // SubProg scan_identifier pc: 304 op: PROC (27)
    Ref(_state_64943);
    _71scan_char(_state_64943);
    // SubProg scan_identifier pc: 307 op: STARTLINE (58)

    /** tokenize.e:953				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    // SubProg scan_identifier pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64943)){
        _32299 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64943)->dbl));
    }
    else{
        _32299 = (object)*(((s1_ptr)_2)->base + _state_64943);
    }
    // SubProg scan_identifier pc: 315 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32299);
    _32300 = (object)*(((s1_ptr)_2)->base + 8);
    _32299 = NOVALUE;
    // SubProg scan_identifier pc: 319 op: IF (20)
    if (_32300 == 0) {
        _32300 = NOVALUE;
        goto LB; // [319] 344
    }
    else {
        if (!IS_ATOM_INT(_32300) && DBL_PTR(_32300)->dbl == 0.0){
            _32300 = NOVALUE;
            goto LB; // [319] 344
        }
        _32300 = NOVALUE;
    }
    _32300 = NOVALUE;
    // SubProg scan_identifier pc: 322 op: STARTLINE (58)

    /** tokenize.e:954					Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    // SubProg scan_identifier pc: 324 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 328 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32301 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 332 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _32121;
        concat_list[1] = _32301;
        concat_list[2] = _32121;
        concat_list[3] = _whichhex_64957;
        Concat_N((object_ptr)&_32302, concat_list, 4);
    }
    _32301 = NOVALUE;
    // SubProg scan_identifier pc: 339 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32302;
    if( _1 != _32302 ){
        DeRef(_1);
    }
    _32302 = NOVALUE;
    // SubProg scan_identifier pc: 343 op: NOP1 (159)
LB: // addr: 344 pc: 343 sub: 64941 op: 159
    // SubProg scan_identifier pc: 344 op: STARTLINE (58)

    /** tokenize.e:957				return TRUE*/
    // SubProg scan_identifier pc: 346 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var whichhex_64957

// Exiting block BLOCK: IF-

// Exiting block BLOCK: scan_identifier

// block var state_64943
    DeRef(_state_64943);

// block var nextch_64944

// block var startpos_64945

// block var textdata_64946
    DeRef(_textdata_64946);
    DeRef(_32289);
    _32289 = NOVALUE;
    DeRef(_32291);
    _32291 = NOVALUE;
    DeRef(_32272);
    _32272 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 350 op: NOP1 (159)
L3: // addr: 351 pc: 350 sub: 64941 op: 159
    // SubProg scan_identifier pc: 351 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var whichhex_64957
    // SubProg scan_identifier pc: 353 op: NOP1 (159)
L2: // addr: 354 pc: 353 sub: 64941 op: 159
    // SubProg scan_identifier pc: 354 op: STARTLINE (58)

    /** tokenize.e:961		Token[TTYPE] = T_IDENTIFIER*/
    // SubProg scan_identifier pc: 356 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 358 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);
    // SubProg scan_identifier pc: 362 op: STARTLINE (58)

    /** tokenize.e:962		Token[TDATA] = ""*/
    // SubProg scan_identifier pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 366 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg scan_identifier pc: 370 op: STARTLINE (58)

    /** tokenize.e:964		while Identifier_Char(Look) do*/
    // SubProg scan_identifier pc: 372 op: NOP2 (110)
    // SubProg scan_identifier pc: 374 op: NOPWHILE (158)
LC: // addr: 375 pc: 374 sub: 64941 op: 158
    // SubProg scan_identifier pc: 375 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 377 op: PROC (27)
    _32303 = _71Identifier_Char(_71Look_64258);
    // SubProg scan_identifier pc: 381 op: WHILE (47)
    if (_32303 <= 0) {
        if (_32303 == 0) {
            DeRef(_32303);
            _32303 = NOVALUE;
            goto LD; // [381] 412
        }
        else {
            if (!IS_ATOM_INT(_32303) && DBL_PTR(_32303)->dbl == 0.0){
                DeRef(_32303);
                _32303 = NOVALUE;
                goto LD; // [381] 412
            }
            DeRef(_32303);
            _32303 = NOVALUE;
        }
    }
    DeRef(_32303);
    _32303 = NOVALUE;
    // SubProg scan_identifier pc: 384 op: STARTLINE (58)

    /** tokenize.e:965			Token[TDATA] &= Look*/
    // SubProg scan_identifier pc: 386 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 388 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 390 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32304 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 394 op: CONCAT (15)
    if (IS_SEQUENCE(_32304) && IS_ATOM(_71Look_64258)) {
        Append(&_32305, _32304, _71Look_64258);
    }
    else if (IS_ATOM(_32304) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32305, _32304, _71Look_64258);
        _32304 = NOVALUE;
    }
    _32304 = NOVALUE;
    // SubProg scan_identifier pc: 398 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32305;
    if( _1 != _32305 ){
        DeRef(_1);
    }
    _32305 = NOVALUE;
    // SubProg scan_identifier pc: 402 op: STARTLINE (58)

    /** tokenize.e:966			scan_char(state)*/
    // SubProg scan_identifier pc: 404 op: PROC (27)
    Ref(_state_64943);
    _71scan_char(_state_64943);
    // SubProg scan_identifier pc: 407 op: STARTLINE (58)

    /** tokenize.e:967		end while*/
    // SubProg scan_identifier pc: 409 op: ENDWHILE (22)
    goto LC; // [409] 375
    // SubProg scan_identifier pc: 411 op: NOP1 (159)
LD: // addr: 412 pc: 411 sub: 64941 op: 159
    // SubProg scan_identifier pc: 412 op: STARTLINE (58)

    /** tokenize.e:969		if find(Token[TDATA],keywords) then*/
    // SubProg scan_identifier pc: 414 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 416 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32306 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 422 op: FIND_FROM (176)
    _32307 = find_from(_32306, _72keywords_64058, 1);
    _32306 = NOVALUE;
    // SubProg scan_identifier pc: 427 op: IF (20)
    if (_32307 == 0)
    {
        _32307 = NOVALUE;
        goto LE; // [427] 476
    }
    else{
        _32307 = NOVALUE;
    }
    // SubProg scan_identifier pc: 430 op: STARTLINE (58)

    /** tokenize.e:970			if eumem:ram_space[state][ID_KEYWORD] then*/
    // SubProg scan_identifier pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 434 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64943)){
        _32308 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64943)->dbl));
    }
    else{
        _32308 = (object)*(((s1_ptr)_2)->base + _state_64943);
    }
    // SubProg scan_identifier pc: 438 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32308);
    _32309 = (object)*(((s1_ptr)_2)->base + 6);
    _32308 = NOVALUE;
    // SubProg scan_identifier pc: 442 op: IF (20)
    if (_32309 == 0) {
        _32309 = NOVALUE;
        goto LF; // [442] 454
    }
    else {
        if (!IS_ATOM_INT(_32309) && DBL_PTR(_32309)->dbl == 0.0){
            _32309 = NOVALUE;
            goto LF; // [442] 454
        }
        _32309 = NOVALUE;
    }
    _32309 = NOVALUE;
    // SubProg scan_identifier pc: 445 op: STARTLINE (58)

    /** tokenize.e:971				Token[TTYPE] = T_KEYWORD*/
    // SubProg scan_identifier pc: 447 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 449 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
    // SubProg scan_identifier pc: 453 op: NOP1 (159)
LF: // addr: 454 pc: 453 sub: 64941 op: 159
    // SubProg scan_identifier pc: 454 op: STARTLINE (58)

    /** tokenize.e:973			if equal(Token[TDATA],"include") then*/
    // SubProg scan_identifier pc: 456 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 458 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32310 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 462 op: EQUAL (153)
    if (_32310 == _25744)
    _32311 = 1;
    else if (IS_ATOM_INT(_32310) && IS_ATOM_INT(_25744))
    _32311 = 0;
    else
    _32311 = (compare(_32310, _25744) == 0);
    _32310 = NOVALUE;
    // SubProg scan_identifier pc: 466 op: IF (20)
    if (_32311 == 0)
    {
        _32311 = NOVALUE;
        goto L10; // [466] 475
    }
    else{
        _32311 = NOVALUE;
    }
    // SubProg scan_identifier pc: 469 op: STARTLINE (58)

    /** tokenize.e:974				INCLUDE_NEXT = TRUE*/
    // SubProg scan_identifier pc: 471 op: ASSIGN_I (113)
    _71INCLUDE_NEXT_64940 = 1;
    // SubProg scan_identifier pc: 474 op: NOP1 (159)
L10: // addr: 475 pc: 474 sub: 64941 op: 159
    // SubProg scan_identifier pc: 475 op: NOP1 (159)
LE: // addr: 476 pc: 475 sub: 64941 op: 159
    // SubProg scan_identifier pc: 476 op: STARTLINE (58)

    /** tokenize.e:978		if find(Token[TDATA],builtins) and eumem:ram_space[state][ID_BUILTIN] then*/
    // SubProg scan_identifier pc: 478 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 480 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32312 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_identifier pc: 484 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 486 op: FIND_FROM (176)
    _32313 = find_from(_32312, _72builtins_64068, 1);
    _32312 = NOVALUE;
    // SubProg scan_identifier pc: 491 op: SC1_AND_IF (146)
    if (_32313 == 0) {
        goto L11; // [491] 518
    }
    // SubProg scan_identifier pc: 495 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 497 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_64943)){
        _32315 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64943)->dbl));
    }
    else{
        _32315 = (object)*(((s1_ptr)_2)->base + _state_64943);
    }
    // SubProg scan_identifier pc: 501 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32315);
    _32316 = (object)*(((s1_ptr)_2)->base + 5);
    _32315 = NOVALUE;
    // SubProg scan_identifier pc: 505 op: NOP1 (159)
    // SubProg scan_identifier pc: 506 op: IF (20)
    if (_32316 == 0) {
        _32316 = NOVALUE;
        goto L11; // [506] 518
    }
    else {
        if (!IS_ATOM_INT(_32316) && DBL_PTR(_32316)->dbl == 0.0){
            _32316 = NOVALUE;
            goto L11; // [506] 518
        }
        _32316 = NOVALUE;
    }
    _32316 = NOVALUE;
    // SubProg scan_identifier pc: 509 op: STARTLINE (58)

    /** tokenize.e:979			Token[TTYPE] = T_BUILTIN*/
    // SubProg scan_identifier pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_identifier pc: 513 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 41;
    DeRef(_1);
    // SubProg scan_identifier pc: 517 op: NOP1 (159)
L11: // addr: 518 pc: 517 sub: 64941 op: 159
    // SubProg scan_identifier pc: 518 op: STARTLINE (58)

    /** tokenize.e:982		return TRUE*/
    // SubProg scan_identifier pc: 520 op: RETURNF (28)

// Exiting block BLOCK: scan_identifier

// block var state_64943
    DeRef(_state_64943);

// block var nextch_64944

// block var startpos_64945

// block var textdata_64946
    DeRef(_textdata_64946);
    DeRef(_32289);
    _32289 = NOVALUE;
    DeRef(_32291);
    _32291 = NOVALUE;
    DeRef(_32272);
    _32272 = NOVALUE;
    return 1;
    // SubProg scan_identifier pc: 524 op: BADRETURNF (43)
    ;
}


object _71scan_include(object _state_65013)
{
    object _32325 = NOVALUE; // 65026 32325
    object _32324 = NOVALUE; // 65025 32324
    object _32323 = NOVALUE; // 65024 32323
    object _32322 = NOVALUE; // 65022 32322
    object _32321 = NOVALUE; // 65021 32321
    object _32320 = NOVALUE; // 65020 32320
// skipping _32319  name type: 0
    object _32318 = NOVALUE; // 65017 32318
// skipping _32317  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scan_include pc: 1 op: STARTLINE (58)

    /** tokenize.e:986		if not INCLUDE_NEXT then*/
    // SubProg scan_include pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 5 op: NOT_IFW (108)
    if (_71INCLUDE_NEXT_64940 != 0)
    goto L1; // [5] 15
    // SubProg scan_include pc: 8 op: STARTLINE (58)

    /** tokenize.e:987			return FALSE*/
    // SubProg scan_include pc: 10 op: RETURNF (28)

// Exiting block BLOCK: scan_include

// block var state_65013
    DeRef(_state_65013);
    return 0;
    // SubProg scan_include pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 65011 op: 159
    // SubProg scan_include pc: 15 op: STARTLINE (58)

    /** tokenize.e:990		INCLUDE_NEXT = FALSE*/
    // SubProg scan_include pc: 17 op: ASSIGN_I (113)
    _71INCLUDE_NEXT_64940 = 0;
    // SubProg scan_include pc: 20 op: STARTLINE (58)

    /** tokenize.e:992		Token[TTYPE] = T_IDENTIFIER*/
    // SubProg scan_include pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 24 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);
    // SubProg scan_include pc: 28 op: STARTLINE (58)

    /** tokenize.e:993		Token[TDATA] = ""*/
    // SubProg scan_include pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 32 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg scan_include pc: 36 op: STARTLINE (58)

    /** tokenize.e:995		if not scan_string(state) then*/
    // SubProg scan_include pc: 38 op: PROC (27)
    Ref(_state_65013);
    _32318 = _71scan_string(_state_65013);
    // SubProg scan_include pc: 42 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32318)) {
        if (_32318 != 0){
            DeRef(_32318);
            _32318 = NOVALUE;
            goto L2; // [42] 104
        }
    }
    else {
        if (DBL_PTR(_32318)->dbl != 0.0){
            DeRef(_32318);
            _32318 = NOVALUE;
            goto L2; // [42] 104
        }
    }
    DeRef(_32318);
    _32318 = NOVALUE;
    // SubProg scan_include pc: 45 op: STARTLINE (58)

    /** tokenize.e:997			while not White_Char(Look) and Look != EOF do*/
    // SubProg scan_include pc: 47 op: NOP2 (110)
    // SubProg scan_include pc: 49 op: NOPWHILE (158)
L3: // addr: 50 pc: 49 sub: 65011 op: 158
    // SubProg scan_include pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 52 op: PROC (27)
    _32320 = _71White_Char(_71Look_64258);
    // SubProg scan_include pc: 56 op: NOT (7)
    if (IS_ATOM_INT(_32320)) {
        _32321 = (_32320 == 0);
    }
    else {
        _32321 = unary_op(NOT, _32320);
    }
    DeRef(_32320);
    _32320 = NOVALUE;
    // SubProg scan_include pc: 59 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32321)) {
        if (_32321 == 0) {
            goto L4; // [59] 103
        }
    }
    else {
        if (DBL_PTR(_32321)->dbl == 0.0) {
            goto L4; // [59] 103
        }
    }
    // SubProg scan_include pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 67 op: NOTEQ (4)
    _32323 = (_71Look_64258 != -1);
    // SubProg scan_include pc: 71 op: NOP1 (159)
    // SubProg scan_include pc: 72 op: WHILE (47)
    if (_32323 == 0)
    {
        DeRef(_32323);
        _32323 = NOVALUE;
        goto L4; // [72] 103
    }
    else{
        DeRef(_32323);
        _32323 = NOVALUE;
    }
    // SubProg scan_include pc: 75 op: STARTLINE (58)

    /** tokenize.e:998				Token[TDATA] &= Look*/
    // SubProg scan_include pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg scan_include pc: 81 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32324 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg scan_include pc: 85 op: CONCAT (15)
    if (IS_SEQUENCE(_32324) && IS_ATOM(_71Look_64258)) {
        Append(&_32325, _32324, _71Look_64258);
    }
    else if (IS_ATOM(_32324) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32325, _32324, _71Look_64258);
        _32324 = NOVALUE;
    }
    _32324 = NOVALUE;
    // SubProg scan_include pc: 89 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32325;
    if( _1 != _32325 ){
        DeRef(_1);
    }
    _32325 = NOVALUE;
    // SubProg scan_include pc: 93 op: STARTLINE (58)

    /** tokenize.e:999				scan_char(state)*/
    // SubProg scan_include pc: 95 op: PROC (27)
    Ref(_state_65013);
    _71scan_char(_state_65013);
    // SubProg scan_include pc: 98 op: STARTLINE (58)

    /** tokenize.e:1000			end while*/
    // SubProg scan_include pc: 100 op: ENDWHILE (22)
    goto L3; // [100] 50
    // SubProg scan_include pc: 102 op: NOP1 (159)
L4: // addr: 103 pc: 102 sub: 65011 op: 159
    // SubProg scan_include pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 65011 op: 159
    // SubProg scan_include pc: 104 op: STARTLINE (58)

    /** tokenize.e:1003		return TRUE*/
    // SubProg scan_include pc: 106 op: RETURNF (28)

// Exiting block BLOCK: scan_include

// block var state_65013
    DeRef(_state_65013);
    DeRef(_32321);
    _32321 = NOVALUE;
    return 1;
    // SubProg scan_include pc: 110 op: BADRETURNF (43)
    ;
}


void _71next_token(object _state_65029)
{
// skipping _32414  name type: 0
    object _32413 = NOVALUE; // 65145 32413
    object _32412 = NOVALUE; // 65144 32412
    object _32411 = NOVALUE; // 65143 32411
    object _32410 = NOVALUE; // 65142 32410
    object _32409 = NOVALUE; // 65141 32409
    object _32408 = NOVALUE; // 65140 32408
    object _32407 = NOVALUE; // 65138 32407
    object _32406 = NOVALUE; // 65137 32406
    object _32405 = NOVALUE; // 65136 32405
    object _32404 = NOVALUE; // 65135 32404
    object _32403 = NOVALUE; // 65133 32403
    object _32402 = NOVALUE; // 65131 32402
    object _32401 = NOVALUE; // 65129 32401
    object _32400 = NOVALUE; // 65127 32400
    object _32399 = NOVALUE; // 65125 32399
    object _32398 = NOVALUE; // 65123 32398
    object _32397 = NOVALUE; // 65121 32397
    object _32396 = NOVALUE; // 65120 32396
    object _32395 = NOVALUE; // 65119 32395
    object _32394 = NOVALUE; // 65118 32394
    object _32393 = NOVALUE; // 65117 32393
    object _32392 = NOVALUE; // 65115 32392
    object _32391 = NOVALUE; // 65114 32391
    object _32390 = NOVALUE; // 65113 32390
    object _32389 = NOVALUE; // 65111 32389
    object _32388 = NOVALUE; // 65110 32388
// skipping _32387  name type: 0
    object _32385 = NOVALUE; // 65106 32385
    object _32384 = NOVALUE; // 65105 32384
    object _32383 = NOVALUE; // 65104 32383
    object _32382 = NOVALUE; // 65103 32382
    object _32381 = NOVALUE; // 65101 32381
    object _32380 = NOVALUE; // 65100 32380
    object _32379 = NOVALUE; // 65099 32379
    object _32377 = NOVALUE; // 65096 32377
    object _32376 = NOVALUE; // 65095 32376
    object _32375 = NOVALUE; // 65094 32375
    object _32373 = NOVALUE; // 65092 32373
    object _32372 = NOVALUE; // 65091 32372
    object _32371 = NOVALUE; // 65089 32371
    object _32370 = NOVALUE; // 65088 32370
    object _32369 = NOVALUE; // 65086 32369
    object _32368 = NOVALUE; // 65085 32368
    object _32367 = NOVALUE; // 65083 32367
    object _32366 = NOVALUE; // 65081 32366
    object _32365 = NOVALUE; // 65080 32365
// skipping _32364  name type: 0
// skipping _32363  name type: 0
    object _32362 = NOVALUE; // 65076 32362
    object _32361 = NOVALUE; // 65074 32361
    object _32360 = NOVALUE; // 65073 32360
    object _32359 = NOVALUE; // 65072 32359
    object _32358 = NOVALUE; // 65071 32358
    object _32357 = NOVALUE; // 65070 32357
    object _32356 = NOVALUE; // 65069 32356
    object _32355 = NOVALUE; // 65068 32355
    object _32354 = NOVALUE; // 65067 32354
    object _32353 = NOVALUE; // 65066 32353
// skipping _32352  name type: 0
// skipping _32351  name type: 0
    object _32350 = NOVALUE; // 65062 32350
// skipping _32349  name type: 0
// skipping _32348  name type: 0
    object _32347 = NOVALUE; // 65058 32347
    object _32346 = NOVALUE; // 65056 32346
    object _32345 = NOVALUE; // 65055 32345
    object _32344 = NOVALUE; // 65054 32344
    object _32343 = NOVALUE; // 65053 32343
    object _32342 = NOVALUE; // 65052 32342
    object _32341 = NOVALUE; // 65050 32341
    object _32340 = NOVALUE; // 65049 32340
    object _32339 = NOVALUE; // 65047 32339
    object _32338 = NOVALUE; // 65046 32338
    object _32337 = NOVALUE; // 65045 32337
    object _32336 = NOVALUE; // 65043 32336
    object _32335 = NOVALUE; // 65041 32335
    object _32334 = NOVALUE; // 65040 32334
    object _32333 = NOVALUE; // 65039 32333
    object _32332 = NOVALUE; // 65038 32332
    object _32331 = NOVALUE; // 65037 32331
    object _32330 = NOVALUE; // 65035 32330
    object _32329 = NOVALUE; // 65034 32329
    object _32328 = NOVALUE; // 65033 32328
    object _32327 = NOVALUE; // 65032 32327
    object _32326 = NOVALUE; // 65031 32326
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg next_token pc: 1 op: STARTLINE (58)

    /** tokenize.e:1007		Token[TLNUM] = LNum*/
    // SubProg next_token pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 7 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71LNum_64256;
    DeRef(_1);
    // SubProg next_token pc: 11 op: STARTLINE (58)

    /** tokenize.e:1008		Token[TLPOS] = LPos*/
    // SubProg next_token pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 17 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71LPos_64257;
    DeRef(_1);
    // SubProg next_token pc: 21 op: STARTLINE (58)

    /** tokenize.e:1009		Token[TFORM] = -1*/
    // SubProg next_token pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 25 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    // SubProg next_token pc: 29 op: STARTLINE (58)

    /** tokenize.e:1011		if Look = EOL and not eumem:ram_space[state][IGNORE_NEWLINES] then*/
    // SubProg next_token pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 33 op: EQUALS (3)
    _32326 = (_71Look_64258 == 10);
    // SubProg next_token pc: 37 op: SC1_AND_IF (146)
    if (_32326 == 0) {
        goto L1; // [37] 85
    }
    // SubProg next_token pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 43 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65029)){
        _32328 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65029)->dbl));
    }
    else{
        _32328 = (object)*(((s1_ptr)_2)->base + _state_65029);
    }
    // SubProg next_token pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32328);
    _32329 = (object)*(((s1_ptr)_2)->base + 1);
    _32328 = NOVALUE;
    // SubProg next_token pc: 51 op: NOT (7)
    if (IS_ATOM_INT(_32329)) {
        _32330 = (_32329 == 0);
    }
    else {
        _32330 = unary_op(NOT, _32329);
    }
    _32329 = NOVALUE;
    // SubProg next_token pc: 54 op: NOP1 (159)
    // SubProg next_token pc: 55 op: IF (20)
    if (_32330 == 0) {
        DeRef(_32330);
        _32330 = NOVALUE;
        goto L1; // [55] 85
    }
    else {
        if (!IS_ATOM_INT(_32330) && DBL_PTR(_32330)->dbl == 0.0){
            DeRef(_32330);
            _32330 = NOVALUE;
            goto L1; // [55] 85
        }
        DeRef(_32330);
        _32330 = NOVALUE;
    }
    DeRef(_32330);
    _32330 = NOVALUE;
    // SubProg next_token pc: 58 op: STARTLINE (58)

    /** tokenize.e:1013			Token[TDATA] = ""*/
    // SubProg next_token pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 62 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg next_token pc: 66 op: STARTLINE (58)

    /** tokenize.e:1014			Token[TTYPE] = T_NEWLINE*/
    // SubProg next_token pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 70 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    // SubProg next_token pc: 74 op: STARTLINE (58)

    /** tokenize.e:1016			scan_char(state) -- advance past this newline*/
    // SubProg next_token pc: 76 op: PROC (27)
    Ref(_state_65029);
    _71scan_char(_state_65029);
    // SubProg next_token pc: 79 op: STARTLINE (58)

    /** tokenize.e:1018			return*/
    // SubProg next_token pc: 81 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65029
    DeRef(_state_65029);
    DeRef(_32326);
    _32326 = NOVALUE;
    return;
    // SubProg next_token pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 65027 op: 159
    // SubProg next_token pc: 85 op: STARTLINE (58)

    /** tokenize.e:1021		if not eumem:ram_space[state][DELETE_WHITE] and scankeep_white(state) then*/
    // SubProg next_token pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65029)){
        _32331 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65029)->dbl));
    }
    else{
        _32331 = (object)*(((s1_ptr)_2)->base + _state_65029);
    }
    // SubProg next_token pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32331);
    _32332 = (object)*(((s1_ptr)_2)->base + 4);
    _32331 = NOVALUE;
    // SubProg next_token pc: 97 op: NOT (7)
    if (IS_ATOM_INT(_32332)) {
        _32333 = (_32332 == 0);
    }
    else {
        _32333 = unary_op(NOT, _32332);
    }
    _32332 = NOVALUE;
    // SubProg next_token pc: 100 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32333)) {
        if (_32333 == 0) {
            goto L2; // [100] 118
        }
    }
    else {
        if (DBL_PTR(_32333)->dbl == 0.0) {
            goto L2; // [100] 118
        }
    }
    // SubProg next_token pc: 104 op: PROC (27)
    Ref(_state_65029);
    _32335 = _71scankeep_white(_state_65029);
    // SubProg next_token pc: 108 op: NOP1 (159)
    // SubProg next_token pc: 109 op: IF (20)
    if (_32335 == 0) {
        DeRef(_32335);
        _32335 = NOVALUE;
        goto L2; // [109] 118
    }
    else {
        if (!IS_ATOM_INT(_32335) && DBL_PTR(_32335)->dbl == 0.0){
            DeRef(_32335);
            _32335 = NOVALUE;
            goto L2; // [109] 118
        }
        DeRef(_32335);
        _32335 = NOVALUE;
    }
    DeRef(_32335);
    _32335 = NOVALUE;
    // SubProg next_token pc: 112 op: STARTLINE (58)

    /** tokenize.e:1023			return*/
    // SubProg next_token pc: 114 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65029
    DeRef(_state_65029);
    DeRef(_32326);
    _32326 = NOVALUE;
    DeRef(_32333);
    _32333 = NOVALUE;
    return;
    // SubProg next_token pc: 117 op: NOP1 (159)
L2: // addr: 118 pc: 117 sub: 65027 op: 159
    // SubProg next_token pc: 118 op: STARTLINE (58)

    /** tokenize.e:1027		if scan_white(state) then*/
    // SubProg next_token pc: 120 op: PROC (27)
    Ref(_state_65029);
    _32336 = _71scan_white(_state_65029);
    // SubProg next_token pc: 124 op: IF (20)
    if (_32336 == 0) {
        DeRef(_32336);
        _32336 = NOVALUE;
        goto L3; // [124] 155
    }
    else {
        if (!IS_ATOM_INT(_32336) && DBL_PTR(_32336)->dbl == 0.0){
            DeRef(_32336);
            _32336 = NOVALUE;
            goto L3; // [124] 155
        }
        DeRef(_32336);
        _32336 = NOVALUE;
    }
    DeRef(_32336);
    _32336 = NOVALUE;
    // SubProg next_token pc: 127 op: STARTLINE (58)

    /** tokenize.e:1028			if eumem:ram_space[state][IGNORE_NEWLINES] then next_token(state) end if*/
    // SubProg next_token pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 131 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65029)){
        _32337 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65029)->dbl));
    }
    else{
        _32337 = (object)*(((s1_ptr)_2)->base + _state_65029);
    }
    // SubProg next_token pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32337);
    _32338 = (object)*(((s1_ptr)_2)->base + 1);
    _32337 = NOVALUE;
    // SubProg next_token pc: 139 op: IF (20)
    if (_32338 == 0) {
        _32338 = NOVALUE;
        goto L4; // [139] 149
    }
    else {
        if (!IS_ATOM_INT(_32338) && DBL_PTR(_32338)->dbl == 0.0){
            _32338 = NOVALUE;
            goto L4; // [139] 149
        }
        _32338 = NOVALUE;
    }
    _32338 = NOVALUE;
    // SubProg next_token pc: 142 op: ASSIGN (18)
    Ref(_state_65029);
    DeRef(_32339);
    _32339 = _state_65029;
    // SubProg next_token pc: 145 op: PROC (27)
    _71next_token(_32339);
    _32339 = NOVALUE;
    // SubProg next_token pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 65027 op: 159
    // SubProg next_token pc: 149 op: STARTLINE (58)

    /** tokenize.e:1029			return*/
    // SubProg next_token pc: 151 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65029
    DeRef(_state_65029);
    DeRef(_32326);
    _32326 = NOVALUE;
    DeRef(_32333);
    _32333 = NOVALUE;
    return;
    // SubProg next_token pc: 154 op: NOP1 (159)
L3: // addr: 155 pc: 154 sub: 65027 op: 159
    // SubProg next_token pc: 155 op: STARTLINE (58)

    /** tokenize.e:1032		if scan_include(state) then*/
    // SubProg next_token pc: 157 op: PROC (27)
    Ref(_state_65029);
    _32340 = _71scan_include(_state_65029);
    // SubProg next_token pc: 161 op: IF (20)
    if (_32340 == 0) {
        DeRef(_32340);
        _32340 = NOVALUE;
        goto L5; // [161] 170
    }
    else {
        if (!IS_ATOM_INT(_32340) && DBL_PTR(_32340)->dbl == 0.0){
            DeRef(_32340);
            _32340 = NOVALUE;
            goto L5; // [161] 170
        }
        DeRef(_32340);
        _32340 = NOVALUE;
    }
    DeRef(_32340);
    _32340 = NOVALUE;
    // SubProg next_token pc: 164 op: STARTLINE (58)

    /** tokenize.e:1033			return*/
    // SubProg next_token pc: 166 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: next_token

// block var state_65029
    DeRef(_state_65029);
    DeRef(_32326);
    _32326 = NOVALUE;
    DeRef(_32333);
    _32333 = NOVALUE;
    return;
    // SubProg next_token pc: 169 op: NOP1 (159)
L5: // addr: 170 pc: 169 sub: 65027 op: 159
    // SubProg next_token pc: 170 op: STARTLINE (58)

    /** tokenize.e:1036		Token[TTYPE] = find(Look, Delimiters)*/
    // SubProg next_token pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 178 op: FIND_FROM (176)
    _32341 = find_from(_71Look_64258, _71Delimiters_64243, 1);
    // SubProg next_token pc: 183 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32341;
    if( _1 != _32341 ){
        DeRef(_1);
    }
    _32341 = NOVALUE;
    // SubProg next_token pc: 187 op: STARTLINE (58)

    /** tokenize.e:1038		if Token[TTYPE] then*/
    // SubProg next_token pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 191 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32342 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 195 op: IF (20)
    if (_32342 == 0) {
        _32342 = NOVALUE;
        goto L6; // [195] 711
    }
    else {
        if (!IS_ATOM_INT(_32342) && DBL_PTR(_32342)->dbl == 0.0){
            _32342 = NOVALUE;
            goto L6; // [195] 711
        }
        _32342 = NOVALUE;
    }
    _32342 = NOVALUE;
    // SubProg next_token pc: 198 op: STARTLINE (58)

    /** tokenize.e:1040			Token[TTYPE] += T_DELIMITER - 1*/
    // SubProg next_token pc: 200 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 202 op: MINUS (10)
    _32343 = 18;
    // SubProg next_token pc: 206 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32344 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 210 op: PLUS (11)
    if (IS_ATOM_INT(_32344)) {
        _32345 = _32344 + 18;
        if ((object)((uintptr_t)_32345 + (uintptr_t)HIGH_BITS) >= 0){
            _32345 = NewDouble((eudouble)_32345);
        }
    }
    else {
        _32345 = binary_op(PLUS, _32344, 18);
    }
    _32344 = NOVALUE;
    _32343 = NOVALUE;
    // SubProg next_token pc: 214 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32345;
    if( _1 != _32345 ){
        DeRef(_1);
    }
    _32345 = NOVALUE;
    // SubProg next_token pc: 218 op: STARTLINE (58)

    /** tokenize.e:1041			Token[TDATA] = { Look }*/
    // SubProg next_token pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 224 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _71Look_64258;
    _32346 = MAKE_SEQ(_1);
    // SubProg next_token pc: 228 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32346;
    if( _1 != _32346 ){
        DeRef(_1);
    }
    _32346 = NOVALUE;
    // SubProg next_token pc: 232 op: STARTLINE (58)

    /** tokenize.e:1043			scan_char(state)*/
    // SubProg next_token pc: 234 op: PROC (27)
    Ref(_state_65029);
    _71scan_char(_state_65029);
    // SubProg next_token pc: 237 op: STARTLINE (58)

    /** tokenize.e:1045			if (Token[TTYPE] = T_LBRACKET) then*/
    // SubProg next_token pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 241 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32347 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 245 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32347, 32)){
        _32347 = NOVALUE;
        goto L7; // [245] 260
    }
    _32347 = NOVALUE;
    // SubProg next_token pc: 249 op: STARTLINE (58)

    /** tokenize.e:1047				SUBSCRIPT += 1 -- push subscript stack counter*/
    // SubProg next_token pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 253 op: PLUS1_I (117)
    _71SUBSCRIPT_64752 = _71SUBSCRIPT_64752 + 1;
    // SubProg next_token pc: 257 op: ELSE (23)
    goto L8; // [257] 908
    // SubProg next_token pc: 259 op: NOP1 (159)
L7: // addr: 260 pc: 259 sub: 65027 op: 159
    // SubProg next_token pc: 260 op: STARTLINE (58)

    /** tokenize.e:1049			elsif (Token[TTYPE] = T_RBRACKET) then*/
    // SubProg next_token pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 264 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32350 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 268 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32350, 33)){
        _32350 = NOVALUE;
        goto L9; // [268] 283
    }
    _32350 = NOVALUE;
    // SubProg next_token pc: 272 op: STARTLINE (58)

    /** tokenize.e:1051				SUBSCRIPT -= 1 -- pop subscript stack counter*/
    // SubProg next_token pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 276 op: MINUS_I (116)
    _71SUBSCRIPT_64752 = _71SUBSCRIPT_64752 - 1;
    // SubProg next_token pc: 280 op: ELSE (23)
    goto L8; // [280] 908
    // SubProg next_token pc: 282 op: NOP1 (159)
L9: // addr: 283 pc: 282 sub: 65027 op: 159
    // SubProg next_token pc: 283 op: STARTLINE (58)

    /** tokenize.e:1053			elsif (Look = '=') and (Token[TTYPE] <= T_SINGLE_OPS) then*/
    // SubProg next_token pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 287 op: EQUALS (3)
    _32353 = (_71Look_64258 == 61);
    // SubProg next_token pc: 291 op: SC1_AND_IF (146)
    if (_32353 == 0) {
        goto LA; // [291] 355
    }
    // SubProg next_token pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 297 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32355 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 301 op: LESSEQ (5)
    if (IS_ATOM_INT(_32355)) {
        _32356 = (_32355 <= 27);
    }
    else {
        _32356 = binary_op(LESSEQ, _32355, 27);
    }
    _32355 = NOVALUE;
    // SubProg next_token pc: 305 op: NOP1 (159)
    // SubProg next_token pc: 306 op: IF (20)
    if (_32356 == 0) {
        DeRef(_32356);
        _32356 = NOVALUE;
        goto LA; // [306] 355
    }
    else {
        if (!IS_ATOM_INT(_32356) && DBL_PTR(_32356)->dbl == 0.0){
            DeRef(_32356);
            _32356 = NOVALUE;
            goto LA; // [306] 355
        }
        DeRef(_32356);
        _32356 = NOVALUE;
    }
    DeRef(_32356);
    _32356 = NOVALUE;
    // SubProg next_token pc: 309 op: STARTLINE (58)

    /** tokenize.e:1056				Token[TTYPE] -= T_DOUBLE_OPS - 3*/
    // SubProg next_token pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 313 op: MINUS (10)
    _32357 = 8;
    // SubProg next_token pc: 317 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32358 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 321 op: MINUS (10)
    if (IS_ATOM_INT(_32358)) {
        _32359 = _32358 - 8;
        if ((object)((uintptr_t)_32359 +(uintptr_t) HIGH_BITS) >= 0){
            _32359 = NewDouble((eudouble)_32359);
        }
    }
    else {
        _32359 = binary_op(MINUS, _32358, 8);
    }
    _32358 = NOVALUE;
    _32357 = NOVALUE;
    // SubProg next_token pc: 325 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32359;
    if( _1 != _32359 ){
        DeRef(_1);
    }
    _32359 = NOVALUE;
    // SubProg next_token pc: 329 op: STARTLINE (58)

    /** tokenize.e:1057				Token[TDATA] &= Look*/
    // SubProg next_token pc: 331 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 335 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32360 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 339 op: CONCAT (15)
    if (IS_SEQUENCE(_32360) && IS_ATOM(_71Look_64258)) {
        Append(&_32361, _32360, _71Look_64258);
    }
    else if (IS_ATOM(_32360) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32361, _32360, _71Look_64258);
        _32360 = NOVALUE;
    }
    _32360 = NOVALUE;
    // SubProg next_token pc: 343 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32361;
    if( _1 != _32361 ){
        DeRef(_1);
    }
    _32361 = NOVALUE;
    // SubProg next_token pc: 347 op: STARTLINE (58)

    /** tokenize.e:1059				scan_char(state)*/
    // SubProg next_token pc: 349 op: PROC (27)
    Ref(_state_65029);
    _71scan_char(_state_65029);
    // SubProg next_token pc: 352 op: ELSE (23)
    goto L8; // [352] 908
    // SubProg next_token pc: 354 op: NOP1 (159)
LA: // addr: 355 pc: 354 sub: 65027 op: 159
    // SubProg next_token pc: 355 op: STARTLINE (58)

    /** tokenize.e:1061			elsif (Token[TTYPE] = T_PERIOD) then*/
    // SubProg next_token pc: 357 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 359 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32362 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 363 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _32362, 36)){
        _32362 = NOVALUE;
        goto LB; // [363] 552
    }
    _32362 = NOVALUE;
    // SubProg next_token pc: 367 op: STARTLINE (58)

    /** tokenize.e:1063				if (Look = '.') then*/
    // SubProg next_token pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 371 op: EQUALS_IFW_I (121)
    if (_71Look_64258 != 46)
    goto LC; // [371] 409
    // SubProg next_token pc: 375 op: STARTLINE (58)

    /** tokenize.e:1065					Token[TTYPE] = T_SLICE*/
    // SubProg next_token pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 379 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32365 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 393 op: CONCAT (15)
    if (IS_SEQUENCE(_32365) && IS_ATOM(_71Look_64258)) {
        Append(&_32366, _32365, _71Look_64258);
    }
    else if (IS_ATOM(_32365) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32366, _32365, _71Look_64258);
        _32365 = NOVALUE;
    }
    _32365 = NOVALUE;
    // SubProg next_token pc: 397 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32366;
    if( _1 != _32366 ){
        DeRef(_1);
    }
    _32366 = NOVALUE;
    // SubProg next_token pc: 401 op: STARTLINE (58)

    /** tokenize.e:1068					scan_char(state)*/
    // SubProg next_token pc: 403 op: PROC (27)
    Ref(_state_65029);
    _71scan_char(_state_65029);
    // SubProg next_token pc: 406 op: ELSE (23)
    goto L8; // [406] 908
    // SubProg next_token pc: 408 op: NOP1 (159)
LC: // addr: 409 pc: 408 sub: 65027 op: 159
    // SubProg next_token pc: 409 op: STARTLINE (58)

    /** tokenize.e:1071					Token[TTYPE] = T_NUMBER*/
    // SubProg next_token pc: 411 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 413 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    // SubProg next_token pc: 417 op: STARTLINE (58)

    /** tokenize.e:1072					Token[TDATA] = scan_fraction(0, state)*/
    // SubProg next_token pc: 419 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 421 op: PROC (27)
    Ref(_state_65029);
    _32367 = _71scan_fraction(0, _state_65029);
    // SubProg next_token pc: 426 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32367;
    if( _1 != _32367 ){
        DeRef(_1);
    }
    _32367 = NOVALUE;
    // SubProg next_token pc: 430 op: STARTLINE (58)

    /** tokenize.e:1073					Token[TFORM] = TF_ATOM*/
    // SubProg next_token pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 434 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg next_token pc: 438 op: STARTLINE (58)

    /** tokenize.e:1074					if ERR then*/
    // SubProg next_token pc: 440 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 442 op: IF (20)
    if (_71ERR_64259 == 0)
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

// block var state_65029
    DeRef(_state_65029);
    DeRef(_32326);
    _32326 = NOVALUE;
    DeRef(_32353);
    _32353 = NOVALUE;
    DeRef(_32333);
    _32333 = NOVALUE;
    return;
    // SubProg next_token pc: 450 op: NOP1 (159)
LD: // addr: 451 pc: 450 sub: 65027 op: 159
    // SubProg next_token pc: 451 op: STARTLINE (58)

    /** tokenize.e:1078					Token[TDATA] = scan_exponent(Token[TDATA], state)*/
    // SubProg next_token pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 455 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 457 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32368 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 461 op: PROC (27)
    Ref(_32368);
    Ref(_state_65029);
    _32369 = _71scan_exponent(_32368, _state_65029);
    _32368 = NOVALUE;
    // SubProg next_token pc: 466 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32369;
    if( _1 != _32369 ){
        DeRef(_1);
    }
    _32369 = NOVALUE;
    // SubProg next_token pc: 470 op: STARTLINE (58)

    /** tokenize.e:1080					if eumem:ram_space[state][STRING_NUMBERS] then*/
    // SubProg next_token pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 474 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65029)){
        _32370 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65029)->dbl));
    }
    else{
        _32370 = (object)*(((s1_ptr)_2)->base + _state_65029);
    }
    // SubProg next_token pc: 478 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32370);
    _32371 = (object)*(((s1_ptr)_2)->base + 3);
    _32370 = NOVALUE;
    // SubProg next_token pc: 482 op: IF (20)
    if (_32371 == 0) {
        _32371 = NOVALUE;
        goto L8; // [482] 908
    }
    else {
        if (!IS_ATOM_INT(_32371) && DBL_PTR(_32371)->dbl == 0.0){
            _32371 = NOVALUE;
            goto L8; // [482] 908
        }
        _32371 = NOVALUE;
    }
    _32371 = NOVALUE;
    // SubProg next_token pc: 485 op: STARTLINE (58)

    /** tokenize.e:1081						if integer(Token[TDATA]) then*/
    // SubProg next_token pc: 487 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 489 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32372 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 493 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_32372))
    _32373 = 1;
    else if (IS_ATOM_DBL(_32372))
    _32373 = IS_ATOM_INT(DoubleToInt(_32372));
    else
    _32373 = 0;
    _32372 = NOVALUE;
    // SubProg next_token pc: 496 op: IF (20)
    if (_32373 == 0)
    {
        _32373 = NOVALUE;
        goto LE; // [496] 524
    }
    else{
        _32373 = NOVALUE;
    }
    // SubProg next_token pc: 499 op: STARTLINE (58)

    /** tokenize.e:1082							Token[TDATA] = sprintf("%d",{Token[TDATA]})*/
    // SubProg next_token pc: 501 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 503 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 505 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32375 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 509 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32375);
    ((intptr_t*)_2)[1] = _32375;
    _32376 = MAKE_SEQ(_1);
    _32375 = NOVALUE;
    // SubProg next_token pc: 513 op: SPRINTF (53)
    _32377 = EPrintf(-9999999, _32374, _32376);
    DeRefDS(_32376);
    _32376 = NOVALUE;
    // SubProg next_token pc: 517 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32377;
    if( _1 != _32377 ){
        DeRef(_1);
    }
    _32377 = NOVALUE;
    // SubProg next_token pc: 521 op: ELSE (23)
    goto L8; // [521] 908
    // SubProg next_token pc: 523 op: NOP1 (159)
LE: // addr: 524 pc: 523 sub: 65027 op: 159
    // SubProg next_token pc: 524 op: STARTLINE (58)

    /** tokenize.e:1084							Token[TDATA] = sprintf("%g",{Token[TDATA]})*/
    // SubProg next_token pc: 526 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 528 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 530 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32379 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 534 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32379);
    ((intptr_t*)_2)[1] = _32379;
    _32380 = MAKE_SEQ(_1);
    _32379 = NOVALUE;
    // SubProg next_token pc: 538 op: SPRINTF (53)
    _32381 = EPrintf(-9999999, _32378, _32380);
    DeRefDS(_32380);
    _32380 = NOVALUE;
    // SubProg next_token pc: 542 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32381;
    if( _1 != _32381 ){
        DeRef(_1);
    }
    _32381 = NOVALUE;
    // SubProg next_token pc: 546 op: NOP1 (159)
    // SubProg next_token pc: 547 op: NOP1 (159)
    // SubProg next_token pc: 548 op: NOP1 (159)
    // SubProg next_token pc: 549 op: ELSE (23)
    goto L8; // [549] 908
    // SubProg next_token pc: 551 op: NOP1 (159)
LB: // addr: 552 pc: 551 sub: 65027 op: 159
    // SubProg next_token pc: 552 op: STARTLINE (58)

    /** tokenize.e:1089			elsif (Look = '-') and (Token[TTYPE] = T_MINUS) then*/
    // SubProg next_token pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 556 op: EQUALS (3)
    _32382 = (_71Look_64258 == 45);
    // SubProg next_token pc: 560 op: SC1_AND_IF (146)
    if (_32382 == 0) {
        goto LF; // [560] 673
    }
    // SubProg next_token pc: 564 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 566 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32384 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 570 op: EQUALS (3)
    if (IS_ATOM_INT(_32384)) {
        _32385 = (_32384 == 20);
    }
    else {
        _32385 = binary_op(EQUALS, _32384, 20);
    }
    _32384 = NOVALUE;
    // SubProg next_token pc: 574 op: NOP1 (159)
    // SubProg next_token pc: 575 op: IF (20)
    if (_32385 == 0) {
        DeRef(_32385);
        _32385 = NOVALUE;
        goto LF; // [575] 673
    }
    else {
        if (!IS_ATOM_INT(_32385) && DBL_PTR(_32385)->dbl == 0.0){
            DeRef(_32385);
            _32385 = NOVALUE;
            goto LF; // [575] 673
        }
        DeRef(_32385);
        _32385 = NOVALUE;
    }
    DeRef(_32385);
    _32385 = NOVALUE;
    // SubProg next_token pc: 578 op: STARTLINE (58)

    /** tokenize.e:1091				Token[TTYPE] = T_COMMENT*/
    // SubProg next_token pc: 580 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 582 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    // SubProg next_token pc: 586 op: STARTLINE (58)

    /** tokenize.e:1092				Token[TDATA] = "--"*/
    // SubProg next_token pc: 588 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 590 op: ASSIGN_SUBS (16)
    RefDS(_32386);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32386;
    DeRef(_1);
    // SubProg next_token pc: 594 op: STARTLINE (58)

    /** tokenize.e:1093				Token[TFORM] = TF_COMMENT_SINGLE*/
    // SubProg next_token pc: 596 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 598 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    // SubProg next_token pc: 602 op: STARTLINE (58)

    /** tokenize.e:1095				scan_char(state)*/
    // SubProg next_token pc: 604 op: PROC (27)
    Ref(_state_65029);
    _71scan_char(_state_65029);
    // SubProg next_token pc: 607 op: STARTLINE (58)

    /** tokenize.e:1097				while (Look != EOL) do*/
    // SubProg next_token pc: 609 op: NOP2 (110)
    // SubProg next_token pc: 611 op: NOPWHILE (158)
L10: // addr: 612 pc: 611 sub: 65027 op: 158
    // SubProg next_token pc: 612 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 614 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 10)
    goto L11; // [614] 646
    // SubProg next_token pc: 618 op: STARTLINE (58)

    /** tokenize.e:1098					Token[TDATA] &= Look*/
    // SubProg next_token pc: 620 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 624 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32388 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 628 op: CONCAT (15)
    if (IS_SEQUENCE(_32388) && IS_ATOM(_71Look_64258)) {
        Append(&_32389, _32388, _71Look_64258);
    }
    else if (IS_ATOM(_32388) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32389, _32388, _71Look_64258);
        _32388 = NOVALUE;
    }
    _32388 = NOVALUE;
    // SubProg next_token pc: 632 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32389;
    if( _1 != _32389 ){
        DeRef(_1);
    }
    _32389 = NOVALUE;
    // SubProg next_token pc: 636 op: STARTLINE (58)

    /** tokenize.e:1099					scan_char(state)*/
    // SubProg next_token pc: 638 op: PROC (27)
    Ref(_state_65029);
    _71scan_char(_state_65029);
    // SubProg next_token pc: 641 op: STARTLINE (58)

    /** tokenize.e:1100				end while*/
    // SubProg next_token pc: 643 op: ENDWHILE (22)
    goto L10; // [643] 612
    // SubProg next_token pc: 645 op: NOP1 (159)
L11: // addr: 646 pc: 645 sub: 65027 op: 159
    // SubProg next_token pc: 646 op: STARTLINE (58)

    /** tokenize.e:1102				if eumem:ram_space[state][IGNORE_COMMENTS] then*/
    // SubProg next_token pc: 648 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 650 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65029)){
        _32390 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65029)->dbl));
    }
    else{
        _32390 = (object)*(((s1_ptr)_2)->base + _state_65029);
    }
    // SubProg next_token pc: 654 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32390);
    _32391 = (object)*(((s1_ptr)_2)->base + 2);
    _32390 = NOVALUE;
    // SubProg next_token pc: 658 op: IF (20)
    if (_32391 == 0) {
        _32391 = NOVALUE;
        goto L8; // [658] 908
    }
    else {
        if (!IS_ATOM_INT(_32391) && DBL_PTR(_32391)->dbl == 0.0){
            _32391 = NOVALUE;
            goto L8; // [658] 908
        }
        _32391 = NOVALUE;
    }
    _32391 = NOVALUE;
    // SubProg next_token pc: 661 op: STARTLINE (58)

    /** tokenize.e:1103					next_token(state)*/
    // SubProg next_token pc: 663 op: ASSIGN (18)
    Ref(_state_65029);
    DeRef(_32392);
    _32392 = _state_65029;
    // SubProg next_token pc: 666 op: PROC (27)
    _71next_token(_32392);
    _32392 = NOVALUE;
    // SubProg next_token pc: 669 op: NOP1 (159)
    // SubProg next_token pc: 670 op: ELSE (23)
    goto L8; // [670] 908
    // SubProg next_token pc: 672 op: NOP1 (159)
LF: // addr: 673 pc: 672 sub: 65027 op: 159
    // SubProg next_token pc: 673 op: STARTLINE (58)

    /** tokenize.e:1106			elsif (Look = '*') and (Token[TTYPE] = T_DIVIDE) then*/
    // SubProg next_token pc: 675 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 677 op: EQUALS (3)
    _32393 = (_71Look_64258 == 42);
    // SubProg next_token pc: 681 op: SC1_AND_IF (146)
    if (_32393 == 0) {
        goto L8; // [681] 908
    }
    // SubProg next_token pc: 685 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 687 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32395 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg next_token pc: 691 op: EQUALS (3)
    if (IS_ATOM_INT(_32395)) {
        _32396 = (_32395 == 22);
    }
    else {
        _32396 = binary_op(EQUALS, _32395, 22);
    }
    _32395 = NOVALUE;
    // SubProg next_token pc: 695 op: NOP1 (159)
    // SubProg next_token pc: 696 op: IF (20)
    if (_32396 == 0) {
        DeRef(_32396);
        _32396 = NOVALUE;
        goto L8; // [696] 908
    }
    else {
        if (!IS_ATOM_INT(_32396) && DBL_PTR(_32396)->dbl == 0.0){
            DeRef(_32396);
            _32396 = NOVALUE;
            goto L8; // [696] 908
        }
        DeRef(_32396);
        _32396 = NOVALUE;
    }
    DeRef(_32396);
    _32396 = NOVALUE;
    // SubProg next_token pc: 699 op: STARTLINE (58)

    /** tokenize.e:1108				scan_multicomment(state)*/
    // SubProg next_token pc: 701 op: PROC (27)
    Ref(_state_65029);
    _32397 = _71scan_multicomment(_state_65029, 0);
    // SubProg next_token pc: 706 op: NOP1 (159)
    // SubProg next_token pc: 707 op: NOP1 (159)
    // SubProg next_token pc: 708 op: ELSE (23)
    goto L8; // [708] 908
    // SubProg next_token pc: 710 op: NOP1 (159)
L6: // addr: 711 pc: 710 sub: 65027 op: 159
    // SubProg next_token pc: 711 op: STARTLINE (58)

    /** tokenize.e:1111		elsif scan_identifier(state) then*/
    // SubProg next_token pc: 713 op: PROC (27)
    Ref(_state_65029);
    _32398 = _71scan_identifier(_state_65029);
    // SubProg next_token pc: 717 op: IF (20)
    if (_32398 == 0) {
        DeRef(_32398);
        _32398 = NOVALUE;
        goto L12; // [717] 723
    }
    else {
        if (!IS_ATOM_INT(_32398) && DBL_PTR(_32398)->dbl == 0.0){
            DeRef(_32398);
            _32398 = NOVALUE;
            goto L12; // [717] 723
        }
        DeRef(_32398);
        _32398 = NOVALUE;
    }
    DeRef(_32398);
    _32398 = NOVALUE;
    // SubProg next_token pc: 720 op: ELSE (23)
    goto L8; // [720] 908
    // SubProg next_token pc: 722 op: NOP1 (159)
L12: // addr: 723 pc: 722 sub: 65027 op: 159
    // SubProg next_token pc: 723 op: STARTLINE (58)

    /** tokenize.e:1113		elsif scan_qchar(state) then*/
    // SubProg next_token pc: 725 op: PROC (27)
    Ref(_state_65029);
    _32399 = _71scan_qchar(_state_65029);
    // SubProg next_token pc: 729 op: IF (20)
    if (_32399 == 0) {
        DeRef(_32399);
        _32399 = NOVALUE;
        goto L13; // [729] 735
    }
    else {
        if (!IS_ATOM_INT(_32399) && DBL_PTR(_32399)->dbl == 0.0){
            DeRef(_32399);
            _32399 = NOVALUE;
            goto L13; // [729] 735
        }
        DeRef(_32399);
        _32399 = NOVALUE;
    }
    DeRef(_32399);
    _32399 = NOVALUE;
    // SubProg next_token pc: 732 op: ELSE (23)
    goto L8; // [732] 908
    // SubProg next_token pc: 734 op: NOP1 (159)
L13: // addr: 735 pc: 734 sub: 65027 op: 159
    // SubProg next_token pc: 735 op: STARTLINE (58)

    /** tokenize.e:1115		elsif scan_string(state) then*/
    // SubProg next_token pc: 737 op: PROC (27)
    Ref(_state_65029);
    _32400 = _71scan_string(_state_65029);
    // SubProg next_token pc: 741 op: IF (20)
    if (_32400 == 0) {
        DeRef(_32400);
        _32400 = NOVALUE;
        goto L14; // [741] 747
    }
    else {
        if (!IS_ATOM_INT(_32400) && DBL_PTR(_32400)->dbl == 0.0){
            DeRef(_32400);
            _32400 = NOVALUE;
            goto L14; // [741] 747
        }
        DeRef(_32400);
        _32400 = NOVALUE;
    }
    DeRef(_32400);
    _32400 = NOVALUE;
    // SubProg next_token pc: 744 op: ELSE (23)
    goto L8; // [744] 908
    // SubProg next_token pc: 746 op: NOP1 (159)
L14: // addr: 747 pc: 746 sub: 65027 op: 159
    // SubProg next_token pc: 747 op: STARTLINE (58)

    /** tokenize.e:1117		elsif scan_prefixed_number(state) then*/
    // SubProg next_token pc: 749 op: PROC (27)
    Ref(_state_65029);
    _32401 = _71scan_prefixed_number(_state_65029);
    // SubProg next_token pc: 753 op: IF (20)
    if (_32401 == 0) {
        DeRef(_32401);
        _32401 = NOVALUE;
        goto L15; // [753] 759
    }
    else {
        if (!IS_ATOM_INT(_32401) && DBL_PTR(_32401)->dbl == 0.0){
            DeRef(_32401);
            _32401 = NOVALUE;
            goto L15; // [753] 759
        }
        DeRef(_32401);
        _32401 = NOVALUE;
    }
    DeRef(_32401);
    _32401 = NOVALUE;
    // SubProg next_token pc: 756 op: ELSE (23)
    goto L8; // [756] 908
    // SubProg next_token pc: 758 op: NOP1 (159)
L15: // addr: 759 pc: 758 sub: 65027 op: 159
    // SubProg next_token pc: 759 op: STARTLINE (58)

    /** tokenize.e:1119		elsif scan_hex(state) then*/
    // SubProg next_token pc: 761 op: PROC (27)
    Ref(_state_65029);
    _32402 = _71scan_hex(_state_65029);
    // SubProg next_token pc: 765 op: IF (20)
    if (_32402 == 0) {
        DeRef(_32402);
        _32402 = NOVALUE;
        goto L16; // [765] 771
    }
    else {
        if (!IS_ATOM_INT(_32402) && DBL_PTR(_32402)->dbl == 0.0){
            DeRef(_32402);
            _32402 = NOVALUE;
            goto L16; // [765] 771
        }
        DeRef(_32402);
        _32402 = NOVALUE;
    }
    DeRef(_32402);
    _32402 = NOVALUE;
    // SubProg next_token pc: 768 op: ELSE (23)
    goto L8; // [768] 908
    // SubProg next_token pc: 770 op: NOP1 (159)
L16: // addr: 771 pc: 770 sub: 65027 op: 159
    // SubProg next_token pc: 771 op: STARTLINE (58)

    /** tokenize.e:1121		elsif scan_number(state) then*/
    // SubProg next_token pc: 773 op: PROC (27)
    Ref(_state_65029);
    _32403 = _71scan_number(_state_65029);
    // SubProg next_token pc: 777 op: IF (20)
    if (_32403 == 0) {
        DeRef(_32403);
        _32403 = NOVALUE;
        goto L17; // [777] 783
    }
    else {
        if (!IS_ATOM_INT(_32403) && DBL_PTR(_32403)->dbl == 0.0){
            DeRef(_32403);
            _32403 = NOVALUE;
            goto L17; // [777] 783
        }
        DeRef(_32403);
        _32403 = NOVALUE;
    }
    DeRef(_32403);
    _32403 = NOVALUE;
    // SubProg next_token pc: 780 op: ELSE (23)
    goto L8; // [780] 908
    // SubProg next_token pc: 782 op: NOP1 (159)
L17: // addr: 783 pc: 782 sub: 65027 op: 159
    // SubProg next_token pc: 783 op: STARTLINE (58)

    /** tokenize.e:1123		elsif Look != io:EOF and not White_Char( Look ) then*/
    // SubProg next_token pc: 785 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 787 op: NOTEQ (4)
    _32404 = (_71Look_64258 != -1);
    // SubProg next_token pc: 791 op: SC1_AND_IF (146)
    if (_32404 == 0) {
        goto L18; // [791] 875
    }
    // SubProg next_token pc: 795 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 797 op: PROC (27)
    _32406 = _71White_Char(_71Look_64258);
    // SubProg next_token pc: 801 op: NOT (7)
    if (IS_ATOM_INT(_32406)) {
        _32407 = (_32406 == 0);
    }
    else {
        _32407 = unary_op(NOT, _32406);
    }
    DeRef(_32406);
    _32406 = NOVALUE;
    // SubProg next_token pc: 804 op: NOP1 (159)
    // SubProg next_token pc: 805 op: IF (20)
    if (_32407 == 0) {
        DeRef(_32407);
        _32407 = NOVALUE;
        goto L18; // [805] 875
    }
    else {
        if (!IS_ATOM_INT(_32407) && DBL_PTR(_32407)->dbl == 0.0){
            DeRef(_32407);
            _32407 = NOVALUE;
            goto L18; // [805] 875
        }
        DeRef(_32407);
        _32407 = NOVALUE;
    }
    DeRef(_32407);
    _32407 = NOVALUE;
    // SubProg next_token pc: 808 op: STARTLINE (58)

    /** tokenize.e:1124			while Look != io:EOF and not White_Char( Look ) do*/
    // SubProg next_token pc: 810 op: NOP2 (110)
    // SubProg next_token pc: 812 op: NOPWHILE (158)
L19: // addr: 813 pc: 812 sub: 65027 op: 158
    // SubProg next_token pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 815 op: NOTEQ (4)
    _32408 = (_71Look_64258 != -1);
    // SubProg next_token pc: 819 op: SC1_AND_IF (146)
    if (_32408 == 0) {
        goto L1A; // [819] 864
    }
    // SubProg next_token pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 825 op: PROC (27)
    _32410 = _71White_Char(_71Look_64258);
    // SubProg next_token pc: 829 op: NOT (7)
    if (IS_ATOM_INT(_32410)) {
        _32411 = (_32410 == 0);
    }
    else {
        _32411 = unary_op(NOT, _32410);
    }
    DeRef(_32410);
    _32410 = NOVALUE;
    // SubProg next_token pc: 832 op: NOP1 (159)
    // SubProg next_token pc: 833 op: WHILE (47)
    if (_32411 <= 0) {
        if (_32411 == 0) {
            DeRef(_32411);
            _32411 = NOVALUE;
            goto L1A; // [833] 864
        }
        else {
            if (!IS_ATOM_INT(_32411) && DBL_PTR(_32411)->dbl == 0.0){
                DeRef(_32411);
                _32411 = NOVALUE;
                goto L1A; // [833] 864
            }
            DeRef(_32411);
            _32411 = NOVALUE;
        }
    }
    DeRef(_32411);
    _32411 = NOVALUE;
    // SubProg next_token pc: 836 op: STARTLINE (58)

    /** tokenize.e:1125				Token[TDATA] &= Look*/
    // SubProg next_token pc: 838 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 840 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 842 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32412 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg next_token pc: 846 op: CONCAT (15)
    if (IS_SEQUENCE(_32412) && IS_ATOM(_71Look_64258)) {
        Append(&_32413, _32412, _71Look_64258);
    }
    else if (IS_ATOM(_32412) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32413, _32412, _71Look_64258);
        _32412 = NOVALUE;
    }
    _32412 = NOVALUE;
    // SubProg next_token pc: 850 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32413;
    if( _1 != _32413 ){
        DeRef(_1);
    }
    _32413 = NOVALUE;
    // SubProg next_token pc: 854 op: STARTLINE (58)

    /** tokenize.e:1126				scan_char(state)*/
    // SubProg next_token pc: 856 op: PROC (27)
    Ref(_state_65029);
    _71scan_char(_state_65029);
    // SubProg next_token pc: 859 op: STARTLINE (58)

    /** tokenize.e:1127			end while*/
    // SubProg next_token pc: 861 op: ENDWHILE (22)
    goto L19; // [861] 813
    // SubProg next_token pc: 863 op: NOP1 (159)
L1A: // addr: 864 pc: 863 sub: 65027 op: 159
    // SubProg next_token pc: 864 op: STARTLINE (58)

    /** tokenize.e:1128			Token[TTYPE] = T_TEXT*/
    // SubProg next_token pc: 866 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 868 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 42;
    DeRef(_1);
    // SubProg next_token pc: 872 op: ELSE (23)
    goto L8; // [872] 908
    // SubProg next_token pc: 874 op: NOP1 (159)
L18: // addr: 875 pc: 874 sub: 65027 op: 159
    // SubProg next_token pc: 875 op: STARTLINE (58)

    /** tokenize.e:1132			Token[TTYPE] = T_EOF*/
    // SubProg next_token pc: 877 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 879 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _71Look_64258;
    DeRef(_1);
    // SubProg next_token pc: 893 op: STARTLINE (58)

    /** tokenize.e:1135			if (Look != io:EOF) then*/
    // SubProg next_token pc: 895 op: GLOBAL_INIT_CHECK (109)
    // SubProg next_token pc: 897 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == -1)
    goto L1B; // [897] 907
    // SubProg next_token pc: 901 op: STARTLINE (58)

    /** tokenize.e:1136				report_error(ERR_UNKNOWN)*/
    // SubProg next_token pc: 903 op: PROC (27)
    _71report_error(8);
    // SubProg next_token pc: 906 op: NOP1 (159)
L1B: // addr: 907 pc: 906 sub: 65027 op: 159
    // SubProg next_token pc: 907 op: NOP1 (159)
L8: // addr: 908 pc: 907 sub: 65027 op: 159
    // SubProg next_token pc: 908 op: STARTLINE (58)

    /** tokenize.e:1139	end procedure*/
    // SubProg next_token pc: 910 op: RETURNP (29)

// Exiting block BLOCK: next_token

// block var state_65029
    DeRef(_state_65029);
    DeRef(_32326);
    _32326 = NOVALUE;
    DeRef(_32397);
    _32397 = NOVALUE;
    DeRef(_32353);
    _32353 = NOVALUE;
    DeRef(_32408);
    _32408 = NOVALUE;
    DeRef(_32393);
    _32393 = NOVALUE;
    DeRef(_32404);
    _32404 = NOVALUE;
    DeRef(_32382);
    _32382 = NOVALUE;
    DeRef(_32333);
    _32333 = NOVALUE;
    return;
    // SubProg next_token pc: 913 op: BADRETURNF (43)
    ;
}


object _71tokenize_string(object _code_65151, object _state_65152, object _stop_on_error_65153, object _multi_65154)
{
    object _tokens_65155 = NOVALUE;
    object _32453 = NOVALUE; // 65206 32453
    object _32452 = NOVALUE; // 65205 32452
// skipping _32451  name type: 0
    object _32450 = NOVALUE; // 65202 32450
// skipping _32449  name type: 0
    object _32448 = NOVALUE; // 65200 32448
    object _32447 = NOVALUE; // 65198 32447
// skipping _32446  name type: 0
    object _32445 = NOVALUE; // 65196 32445
// skipping _32444  name type: 0
    object _32443 = NOVALUE; // 65193 32443
    object _32442 = NOVALUE; // 65192 32442
    object _32441 = NOVALUE; // 65191 32441
// skipping _32440  name type: 0
    object _32438 = NOVALUE; // 65187 32438
    object _32437 = NOVALUE; // 65186 32437
    object _32436 = NOVALUE; // 65185 32436
// skipping _32435  name type: 0
    object _32434 = NOVALUE; // 65182 32434
    object _32433 = NOVALUE; // 65181 32433
    object _32432 = NOVALUE; // 65180 32432
    object _32431 = NOVALUE; // 65179 32431
// skipping _32430  name type: 0
    object _32429 = NOVALUE; // 65176 32429
    object _32428 = NOVALUE; // 65174 32428
    object _32427 = NOVALUE; // 65172 32427
    object _32426 = NOVALUE; // 65170 32426
// skipping _32423  name type: 0
// skipping _32422  name type: 0
// skipping _32421  name type: 0
    object _32420 = NOVALUE; // 65162 32420
    object _32419 = NOVALUE; // 65161 32419
    object _32418 = NOVALUE; // 65160 32418
// skipping _32417  name type: 0
    object _32416 = NOVALUE; // 65158 32416
    object _32415 = NOVALUE; // 65157 32415
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tokenize_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg tokenize_string pc: 3 op: INTEGER_CHECK (96)
    // SubProg tokenize_string pc: 5 op: STARTLINE (58)

    /** tokenize.e:1160		ERR = FALSE*/
    // SubProg tokenize_string pc: 7 op: ASSIGN_I (113)
    _71ERR_64259 = 0;
    // SubProg tokenize_string pc: 10 op: STARTLINE (58)

    /** tokenize.e:1161		ERR_LNUM = 0*/
    // SubProg tokenize_string pc: 12 op: ASSIGN_I (113)
    _71ERR_LNUM_64260 = 0;
    // SubProg tokenize_string pc: 15 op: STARTLINE (58)

    /** tokenize.e:1162		ERR_LPOS = 0*/
    // SubProg tokenize_string pc: 17 op: ASSIGN_I (113)
    _71ERR_LPOS_64261 = 0;
    // SubProg tokenize_string pc: 20 op: STARTLINE (58)

    /** tokenize.e:1163		last_multi = 0*/
    // SubProg tokenize_string pc: 22 op: ASSIGN (18)
    DeRef(_71last_multi_64613);
    _71last_multi_64613 = 0;
    // SubProg tokenize_string pc: 25 op: STARTLINE (58)

    /** tokenize.e:1165		tokens = {}*/
    // SubProg tokenize_string pc: 27 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_tokens_65155);
    _tokens_65155 = _21936;
    // SubProg tokenize_string pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg tokenize_string pc: 32 op: STARTLINE (58)

    /** tokenize.e:1167		source_text = code*/
    // SubProg tokenize_string pc: 34 op: ASSIGN (18)
    RefDS(_code_65151);
    DeRef(_71source_text_64254);
    _71source_text_64254 = _code_65151;
    // SubProg tokenize_string pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg tokenize_string pc: 39 op: STARTLINE (58)

    /** tokenize.e:1168		if not length( source_text ) or source_text[$] != EOL then*/
    // SubProg tokenize_string pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64254)){
            _32415 = SEQ_PTR(_71source_text_64254)->length;
    }
    else {
        _32415 = 1;
    }
    // SubProg tokenize_string pc: 46 op: NOT (7)
    _32416 = (_32415 == 0);
    _32415 = NOVALUE;
    // SubProg tokenize_string pc: 49 op: SC1_OR_IF (147)
    if (_32416 != 0) {
        goto L1; // [49] 71
    }
    // SubProg tokenize_string pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_71source_text_64254)){
            _32418 = SEQ_PTR(_71source_text_64254)->length;
    }
    else {
        _32418 = 1;
    }
    // SubProg tokenize_string pc: 58 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71source_text_64254);
    _32419 = (object)*(((s1_ptr)_2)->base + _32418);
    // SubProg tokenize_string pc: 62 op: NOTEQ (4)
    if (IS_ATOM_INT(_32419)) {
        _32420 = (_32419 != 10);
    }
    else {
        _32420 = binary_op(NOTEQ, _32419, 10);
    }
    _32419 = NOVALUE;
    // SubProg tokenize_string pc: 66 op: NOP1 (159)
    // SubProg tokenize_string pc: 67 op: IF (20)
    if (_32420 == 0) {
        DeRef(_32420);
        _32420 = NOVALUE;
        goto L2; // [67] 80
    }
    else {
        if (!IS_ATOM_INT(_32420) && DBL_PTR(_32420)->dbl == 0.0){
            DeRef(_32420);
            _32420 = NOVALUE;
            goto L2; // [67] 80
        }
        DeRef(_32420);
        _32420 = NOVALUE;
    }
    DeRef(_32420);
    _32420 = NOVALUE;
    // SubProg tokenize_string pc: 70 op: NOP1 (159)
L1: // addr: 71 pc: 70 sub: 65149 op: 159
    // SubProg tokenize_string pc: 71 op: STARTLINE (58)

    /** tokenize.e:1169			source_text &= EOL*/
    // SubProg tokenize_string pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 75 op: CONCAT (15)
    Append(&_71source_text_64254, _71source_text_64254, 10);
    // SubProg tokenize_string pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 65149 op: 159
    // SubProg tokenize_string pc: 80 op: STARTLINE (58)

    /** tokenize.e:1171		source_text &= io:EOF*/
    // SubProg tokenize_string pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 84 op: CONCAT (15)
    Append(&_71source_text_64254, _71source_text_64254, -1);
    // SubProg tokenize_string pc: 88 op: STARTLINE (58)

    /** tokenize.e:1172		LNum = 1*/
    // SubProg tokenize_string pc: 90 op: ASSIGN_I (113)
    _71LNum_64256 = 1;
    // SubProg tokenize_string pc: 93 op: STARTLINE (58)

    /** tokenize.e:1173		LPos = 1*/
    // SubProg tokenize_string pc: 95 op: ASSIGN_I (113)
    _71LPos_64257 = 1;
    // SubProg tokenize_string pc: 98 op: STARTLINE (58)

    /** tokenize.e:1174		sti = 1*/
    // SubProg tokenize_string pc: 100 op: ASSIGN_I (113)
    _71sti_64255 = 1;
    // SubProg tokenize_string pc: 103 op: STARTLINE (58)

    /** tokenize.e:1175		Look = source_text[sti]*/
    // SubProg tokenize_string pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 109 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_71source_text_64254);
    _71Look_64258 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_71Look_64258))
    _71Look_64258 = (object)DBL_PTR(_71Look_64258)->dbl;
    // SubProg tokenize_string pc: 113 op: STARTLINE (58)

    /** tokenize.e:1176		Token[TTYPE] = io:EOF*/
    // SubProg tokenize_string pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 117 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    // SubProg tokenize_string pc: 121 op: STARTLINE (58)

    /** tokenize.e:1177		Token[TDATA] = ""*/
    // SubProg tokenize_string pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 125 op: ASSIGN_SUBS (16)
    RefDS(_21936);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21936;
    DeRef(_1);
    // SubProg tokenize_string pc: 129 op: STARTLINE (58)

    /** tokenize.e:1178		Token[TLNUM] = 1*/
    // SubProg tokenize_string pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 133 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg tokenize_string pc: 137 op: STARTLINE (58)

    /** tokenize.e:1179		Token[TLPOS] = 1*/
    // SubProg tokenize_string pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 141 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg tokenize_string pc: 145 op: STARTLINE (58)

    /** tokenize.e:1181		if multi then*/
    // SubProg tokenize_string pc: 147 op: IF (20)
    if (_multi_65154 == 0)
    {
        goto L3; // [147] 228
    }
    else{
    }
    // SubProg tokenize_string pc: 150 op: STARTLINE (58)

    /** tokenize.e:1182			sti = 0*/
    // SubProg tokenize_string pc: 152 op: ASSIGN_I (113)
    _71sti_64255 = 0;
    // SubProg tokenize_string pc: 155 op: STARTLINE (58)

    /** tokenize.e:1183			switch multi do*/
    // SubProg tokenize_string pc: 157 op: SWITCH_I (193)
    _0 = _multi_65154;
    switch ( _0 ){ 
        // SubProg tokenize_string pc: 162 op: STARTLINE (58)

        /** tokenize.e:1184				case TF_STRING_BACKTICK then*/
        // SubProg tokenize_string pc: 164 op: CASE (186)
        case 6:
        // SubProg tokenize_string pc: 166 op: STARTLINE (58)

        /** tokenize.e:1185					raw_string( "`", state, multi )*/
        // SubProg tokenize_string pc: 168 op: PROC (27)
        RefDS(_32081);
        Ref(_state_65152);
        _32426 = _71raw_string(_32081, _state_65152, _multi_65154);
        // SubProg tokenize_string pc: 174 op: ELSE (23)
        goto L4; // [174] 213
        // SubProg tokenize_string pc: 176 op: STARTLINE (58)

        /** tokenize.e:1187				case TF_STRING_TRIPLE then*/
        // SubProg tokenize_string pc: 178 op: CASE (186)
        case 5:
        // SubProg tokenize_string pc: 180 op: STARTLINE (58)

        /** tokenize.e:1188					raw_string( `"""`, state, multi )*/
        // SubProg tokenize_string pc: 182 op: PROC (27)
        RefDS(_32113);
        Ref(_state_65152);
        _32427 = _71raw_string(_32113, _state_65152, _multi_65154);
        // SubProg tokenize_string pc: 188 op: ELSE (23)
        goto L4; // [188] 213
        // SubProg tokenize_string pc: 190 op: STARTLINE (58)

        /** tokenize.e:1189				case TF_COMMENT_MULTIPLE then*/
        // SubProg tokenize_string pc: 192 op: CASE (186)
        case 9:
        // SubProg tokenize_string pc: 194 op: STARTLINE (58)

        /** tokenize.e:1190					scan_char( state )*/
        // SubProg tokenize_string pc: 196 op: PROC (27)
        Ref(_state_65152);
        _71scan_char(_state_65152);
        // SubProg tokenize_string pc: 199 op: STARTLINE (58)

        /** tokenize.e:1191					scan_multicomment( state, multi )*/
        // SubProg tokenize_string pc: 201 op: PROC (27)
        Ref(_state_65152);
        _32428 = _71scan_multicomment(_state_65152, _multi_65154);
        // SubProg tokenize_string pc: 206 op: ELSE (23)
        goto L4; // [206] 213
        // SubProg tokenize_string pc: 208 op: STARTLINE (58)

        /** tokenize.e:1192				case else*/
        // SubProg tokenize_string pc: 210 op: CASE (186)
        default:
        // SubProg tokenize_string pc: 212 op: NOPSWITCH (187)
    ;}L4: // addr: 213 pc: 212 sub: 65149 op: 187
    // SubProg tokenize_string pc: 213 op: STARTLINE (58)

    /** tokenize.e:1195			tokens &= { Token }*/
    // SubProg tokenize_string pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 217 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_71Token_64252);
    ((intptr_t*)_2)[1] = _71Token_64252;
    _32429 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 221 op: CONCAT (15)
    Concat((object_ptr)&_tokens_65155, _tokens_65155, _32429);
    DeRefDS(_32429);
    _32429 = NOVALUE;
    // SubProg tokenize_string pc: 225 op: ELSE (23)
    goto L5; // [225] 364
    // SubProg tokenize_string pc: 227 op: NOP1 (159)
L3: // addr: 228 pc: 227 sub: 65149 op: 159
    // SubProg tokenize_string pc: 228 op: STARTLINE (58)

    /** tokenize.e:1196		elsif (Look = '#') and (lookahead(1) = '!') then*/
    // SubProg tokenize_string pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 232 op: EQUALS (3)
    _32431 = (_71Look_64258 == 35);
    // SubProg tokenize_string pc: 236 op: SC1_AND_IF (146)
    if (_32431 == 0) {
        goto L6; // [236] 363
    }
    // SubProg tokenize_string pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 242 op: PROC (27)
    Ref(_71g_state_64304);
    _32433 = _71lookahead(1, _71g_state_64304);
    // SubProg tokenize_string pc: 247 op: EQUALS (3)
    if (IS_ATOM_INT(_32433)) {
        _32434 = (_32433 == 33);
    }
    else {
        _32434 = binary_op(EQUALS, _32433, 33);
    }
    DeRef(_32433);
    _32433 = NOVALUE;
    // SubProg tokenize_string pc: 251 op: NOP1 (159)
    // SubProg tokenize_string pc: 252 op: IF (20)
    if (_32434 == 0) {
        DeRef(_32434);
        _32434 = NOVALUE;
        goto L6; // [252] 363
    }
    else {
        if (!IS_ATOM_INT(_32434) && DBL_PTR(_32434)->dbl == 0.0){
            DeRef(_32434);
            _32434 = NOVALUE;
            goto L6; // [252] 363
        }
        DeRef(_32434);
        _32434 = NOVALUE;
    }
    DeRef(_32434);
    _32434 = NOVALUE;
    // SubProg tokenize_string pc: 255 op: STARTLINE (58)

    /** tokenize.e:1197			sti += 1*/
    // SubProg tokenize_string pc: 257 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 259 op: PLUS1_I (117)
    _71sti_64255 = _71sti_64255 + 1;
    // SubProg tokenize_string pc: 263 op: STARTLINE (58)

    /** tokenize.e:1198			scan_char(state)*/
    // SubProg tokenize_string pc: 265 op: PROC (27)
    Ref(_state_65152);
    _71scan_char(_state_65152);
    // SubProg tokenize_string pc: 268 op: STARTLINE (58)

    /** tokenize.e:1199			if eumem:ram_space[state][DELETE_WHITE] then*/
    // SubProg tokenize_string pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 272 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65152)){
        _32436 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65152)->dbl));
    }
    else{
        _32436 = (object)*(((s1_ptr)_2)->base + _state_65152);
    }
    // SubProg tokenize_string pc: 276 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32436);
    _32437 = (object)*(((s1_ptr)_2)->base + 4);
    _32436 = NOVALUE;
    // SubProg tokenize_string pc: 280 op: IF (20)
    if (_32437 == 0) {
        _32437 = NOVALUE;
        goto L7; // [280] 290
    }
    else {
        if (!IS_ATOM_INT(_32437) && DBL_PTR(_32437)->dbl == 0.0){
            _32437 = NOVALUE;
            goto L7; // [280] 290
        }
        _32437 = NOVALUE;
    }
    _32437 = NOVALUE;
    // SubProg tokenize_string pc: 283 op: STARTLINE (58)

    /** tokenize.e:1200				scan_white(state)*/
    // SubProg tokenize_string pc: 285 op: PROC (27)
    Ref(_state_65152);
    _32438 = _71scan_white(_state_65152);
    // SubProg tokenize_string pc: 289 op: NOP1 (159)
L7: // addr: 290 pc: 289 sub: 65149 op: 159
    // SubProg tokenize_string pc: 290 op: STARTLINE (58)

    /** tokenize.e:1202			Token[TTYPE] = T_SHBANG*/
    // SubProg tokenize_string pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 294 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    // SubProg tokenize_string pc: 298 op: STARTLINE (58)

    /** tokenize.e:1203			Token[TDATA] = "#!"*/
    // SubProg tokenize_string pc: 300 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 302 op: ASSIGN_SUBS (16)
    RefDS(_32439);
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32439;
    DeRef(_1);
    // SubProg tokenize_string pc: 306 op: STARTLINE (58)

    /** tokenize.e:1204			while Look != EOL do*/
    // SubProg tokenize_string pc: 308 op: NOP2 (110)
    // SubProg tokenize_string pc: 310 op: NOPWHILE (158)
L8: // addr: 311 pc: 310 sub: 65149 op: 158
    // SubProg tokenize_string pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 313 op: NOTEQ_IFW_I (122)
    if (_71Look_64258 == 10)
    goto L9; // [313] 345
    // SubProg tokenize_string pc: 317 op: STARTLINE (58)

    /** tokenize.e:1205				Token[TDATA] &= Look*/
    // SubProg tokenize_string pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 323 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32441 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg tokenize_string pc: 327 op: CONCAT (15)
    if (IS_SEQUENCE(_32441) && IS_ATOM(_71Look_64258)) {
        Append(&_32442, _32441, _71Look_64258);
    }
    else if (IS_ATOM(_32441) && IS_SEQUENCE(_71Look_64258)) {
    }
    else {
        Concat((object_ptr)&_32442, _32441, _71Look_64258);
        _32441 = NOVALUE;
    }
    _32441 = NOVALUE;
    // SubProg tokenize_string pc: 331 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_71Token_64252);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _71Token_64252 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32442;
    if( _1 != _32442 ){
        DeRef(_1);
    }
    _32442 = NOVALUE;
    // SubProg tokenize_string pc: 335 op: STARTLINE (58)

    /** tokenize.e:1206				scan_char(state)*/
    // SubProg tokenize_string pc: 337 op: PROC (27)
    Ref(_state_65152);
    _71scan_char(_state_65152);
    // SubProg tokenize_string pc: 340 op: STARTLINE (58)

    /** tokenize.e:1207			end while*/
    // SubProg tokenize_string pc: 342 op: ENDWHILE (22)
    goto L8; // [342] 311
    // SubProg tokenize_string pc: 344 op: NOP1 (159)
L9: // addr: 345 pc: 344 sub: 65149 op: 159
    // SubProg tokenize_string pc: 345 op: STARTLINE (58)

    /** tokenize.e:1208			scan_char(state)*/
    // SubProg tokenize_string pc: 347 op: PROC (27)
    Ref(_state_65152);
    _71scan_char(_state_65152);
    // SubProg tokenize_string pc: 350 op: STARTLINE (58)

    /** tokenize.e:1209			tokens &= { Token }*/
    // SubProg tokenize_string pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 354 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_71Token_64252);
    ((intptr_t*)_2)[1] = _71Token_64252;
    _32443 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 358 op: CONCAT (15)
    Concat((object_ptr)&_tokens_65155, _tokens_65155, _32443);
    DeRefDS(_32443);
    _32443 = NOVALUE;
    // SubProg tokenize_string pc: 362 op: NOP1 (159)
L6: // addr: 363 pc: 362 sub: 65149 op: 159
    // SubProg tokenize_string pc: 363 op: NOP1 (159)
L5: // addr: 364 pc: 363 sub: 65149 op: 159
    // SubProg tokenize_string pc: 364 op: STARTLINE (58)

    /** tokenize.e:1212		next_token(state)*/
    // SubProg tokenize_string pc: 366 op: PROC (27)
    Ref(_state_65152);
    _71next_token(_state_65152);
    // SubProg tokenize_string pc: 369 op: STARTLINE (58)

    /** tokenize.e:1213		if not stop_on_error or not ERR then*/
    // SubProg tokenize_string pc: 371 op: NOT (7)
    _32445 = (_stop_on_error_65153 == 0);
    // SubProg tokenize_string pc: 374 op: SC1_OR_IF (147)
    if (_32445 != 0) {
        goto LA; // [374] 388
    }
    // SubProg tokenize_string pc: 378 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 380 op: NOT (7)
    _32447 = (_71ERR_64259 == 0);
    // SubProg tokenize_string pc: 383 op: NOP1 (159)
    // SubProg tokenize_string pc: 384 op: IF (20)
    if (_32447 == 0)
    {
        DeRef(_32447);
        _32447 = NOVALUE;
        goto LB; // [384] 443
    }
    else{
        DeRef(_32447);
        _32447 = NOVALUE;
    }
    // SubProg tokenize_string pc: 387 op: NOP1 (159)
LA: // addr: 388 pc: 387 sub: 65149 op: 159
    // SubProg tokenize_string pc: 388 op: STARTLINE (58)

    /** tokenize.e:1214			while Token[TTYPE] != T_EOF do*/
    // SubProg tokenize_string pc: 390 op: NOP2 (110)
    // SubProg tokenize_string pc: 392 op: NOPWHILE (158)
LC: // addr: 393 pc: 392 sub: 65149 op: 158
    // SubProg tokenize_string pc: 393 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 395 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_71Token_64252);
    _32448 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg tokenize_string pc: 399 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _32448, 1)){
        _32448 = NOVALUE;
        goto LD; // [399] 442
    }
    _32448 = NOVALUE;
    // SubProg tokenize_string pc: 403 op: STARTLINE (58)

    /** tokenize.e:1215				tokens &= { Token }*/
    // SubProg tokenize_string pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 407 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_71Token_64252);
    ((intptr_t*)_2)[1] = _71Token_64252;
    _32450 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 411 op: CONCAT (15)
    Concat((object_ptr)&_tokens_65155, _tokens_65155, _32450);
    DeRefDS(_32450);
    _32450 = NOVALUE;
    // SubProg tokenize_string pc: 415 op: STARTLINE (58)

    /** tokenize.e:1216				next_token(state)*/
    // SubProg tokenize_string pc: 417 op: PROC (27)
    Ref(_state_65152);
    _71next_token(_state_65152);
    // SubProg tokenize_string pc: 420 op: STARTLINE (58)

    /** tokenize.e:1217				if stop_on_error and ERR then*/
    // SubProg tokenize_string pc: 422 op: SC1_AND_IF (146)
    if (_stop_on_error_65153 == 0) {
        goto LC; // [422] 393
    }
    // SubProg tokenize_string pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 428 op: NOP1 (159)
    // SubProg tokenize_string pc: 429 op: IF (20)
    if (_71ERR_64259 == 0)
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
LD: // addr: 442 pc: 441 sub: 65149 op: 159
    // SubProg tokenize_string pc: 442 op: NOP1 (159)
LB: // addr: 443 pc: 442 sub: 65149 op: 159
    // SubProg tokenize_string pc: 443 op: STARTLINE (58)

    /** tokenize.e:1223		return { tokens, ERR, ERR_LNUM, ERR_LPOS }*/
    // SubProg tokenize_string pc: 445 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 447 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 449 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_string pc: 451 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_tokens_65155);
    ((intptr_t*)_2)[1] = _tokens_65155;
    ((intptr_t*)_2)[2] = _71ERR_64259;
    ((intptr_t*)_2)[3] = _71ERR_LNUM_64260;
    ((intptr_t*)_2)[4] = _71ERR_LPOS_64261;
    _32453 = MAKE_SEQ(_1);
    // SubProg tokenize_string pc: 458 op: RETURNF (28)

// Exiting block BLOCK: tokenize_string

// block var code_65151
    DeRefDS(_code_65151);

// block var state_65152
    DeRef(_state_65152);

// block var stop_on_error_65153

// block var multi_65154

// block var tokens_65155
    DeRefDS(_tokens_65155);
    DeRef(_32438);
    _32438 = NOVALUE;
    DeRef(_32416);
    _32416 = NOVALUE;
    DeRef(_32426);
    _32426 = NOVALUE;
    DeRef(_32431);
    _32431 = NOVALUE;
    DeRef(_32427);
    _32427 = NOVALUE;
    DeRef(_32445);
    _32445 = NOVALUE;
    DeRef(_32428);
    _32428 = NOVALUE;
    return _32453;
    // SubProg tokenize_string pc: 462 op: BADRETURNF (43)
    ;
}



// 0x2EB7B0FB
