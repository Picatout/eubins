// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _19find_all(object _needle_2304, object _haystack_2305, object _start_2306)
{
    object _kx_2307 = NOVALUE;
// skipping _1008  name type: 0
    object _1007 = NOVALUE; // 2313 1007
    object _1006 = NOVALUE; // 2312 1006
// skipping _1005  name type: 0
// skipping _1004  name type: 0
// skipping _1003  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_all pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_all pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_all pc: 5 op: STARTLINE (58)

    /** search.e:292		integer kx = 0*/
    // SubProg find_all pc: 7 op: ASSIGN_I (113)
    _kx_2307 = 0;
    // SubProg find_all pc: 10 op: STARTLINE (58)

    /** search.e:293		while start with entry do*/
    // SubProg find_all pc: 12 op: ELSE (23)
    goto L1; // [12] 39
    // SubProg find_all pc: 14 op: NOPWHILE (158)
L2: // addr: 15 pc: 14 sub: 2302 op: 158
    // SubProg find_all pc: 15 op: WHILE (47)
    if (_start_2306 == 0)
    {
        goto L3; // [15] 51
    }
    else{
    }
    // SubProg find_all pc: 18 op: STARTLINE (58)

    /** search.e:294			kx += 1*/
    // SubProg find_all pc: 20 op: PLUS1_I (117)
    _kx_2307 = _kx_2307 + 1;
    // SubProg find_all pc: 24 op: STARTLINE (58)

    /** search.e:295			haystack[kx] = start*/
    // SubProg find_all pc: 26 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_haystack_2305);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2305 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _kx_2307);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _start_2306;
    DeRef(_1);
    // SubProg find_all pc: 30 op: STARTLINE (58)

    /** search.e:296			start += 1*/
    // SubProg find_all pc: 32 op: PLUS1_I (117)
    _start_2306 = _start_2306 + 1;
    // SubProg find_all pc: 36 op: STARTLINE (58)

    /** search.e:297		entry*/
    // SubProg find_all pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 2302 op: 159
    // SubProg find_all pc: 39 op: STARTLINE (58)

    /** search.e:298			start = find(needle, haystack, start)*/
    // SubProg find_all pc: 41 op: FIND_FROM (176)
    _start_2306 = find_from(_needle_2304, _haystack_2305, _start_2306);
    // SubProg find_all pc: 46 op: STARTLINE (58)

    /** search.e:299		end while*/
    // SubProg find_all pc: 48 op: ENDWHILE (22)
    goto L2; // [48] 15
    // SubProg find_all pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 2302 op: 159
    // SubProg find_all pc: 51 op: STARTLINE (58)

    /** search.e:301		haystack = remove( haystack, kx+1, length( haystack ) )*/
    // SubProg find_all pc: 53 op: PLUS1 (93)
    _1006 = _kx_2307 + 1;
    if (_1006 > MAXINT){
        _1006 = NewDouble((eudouble)_1006);
    }
    // SubProg find_all pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_2305)){
            _1007 = SEQ_PTR(_haystack_2305)->length;
    }
    else {
        _1007 = 1;
    }
    // SubProg find_all pc: 60 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_haystack_2305);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_1006)) ? _1006 : (object)(DBL_PTR(_1006)->dbl);
        int stop = (IS_ATOM_INT(_1007)) ? _1007 : (object)(DBL_PTR(_1007)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_haystack_2305), start, &_haystack_2305 );
            }
            else Tail(SEQ_PTR(_haystack_2305), stop+1, &_haystack_2305);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_haystack_2305), start, &_haystack_2305);
        }
        else {
            assign_slice_seq = &assign_space;
            _haystack_2305 = Remove_elements(start, stop, (SEQ_PTR(_haystack_2305)->ref == 1));
        }
    }
    DeRef(_1006);
    _1006 = NOVALUE;
    _1007 = NOVALUE;
    // SubProg find_all pc: 65 op: STARTLINE (58)

    /** search.e:302		return haystack*/
    // SubProg find_all pc: 67 op: RETURNF (28)

// Exiting block BLOCK: find_all

// block var needle_2304

// block var start_2306

// block var kx_2307
    return _haystack_2305;
    // SubProg find_all pc: 71 op: BADRETURNF (43)
    ;
}


object _19rfind(object _needle_2422, object _haystack_2423, object _start_2424)
{
    object _len_2426 = NOVALUE;
    object _1068 = NOVALUE; // 2442 1068
    object _1067 = NOVALUE; // 2441 1067
// skipping _1066  name type: 0
// skipping _1065  name type: 0
    object _1064 = NOVALUE; // 2434 1064
    object _1063 = NOVALUE; // 2433 1063
// skipping _1062  name type: 0
    object _1061 = NOVALUE; // 2431 1061
// skipping _1060  name type: 0
// skipping _1059  name type: 0
// skipping _1058  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rfind pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg rfind pc: 3 op: INTEGER_CHECK (96)
    // SubProg rfind pc: 5 op: STARTLINE (58)

    /** search.e:550		integer len = length(haystack)*/
    // SubProg rfind pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_2423)){
            _len_2426 = SEQ_PTR(_haystack_2423)->length;
    }
    else {
        _len_2426 = 1;
    }
    // SubProg rfind pc: 10 op: STARTLINE (58)

    /** search.e:552		if start = 0 then start = len end if*/
    // SubProg rfind pc: 12 op: EQUALS_IFW_I (121)
    if (_start_2424 != 0)
    goto L1; // [12] 20
    // SubProg rfind pc: 16 op: ASSIGN_I (113)
    _start_2424 = _len_2426;
    // SubProg rfind pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 2420 op: 159
    // SubProg rfind pc: 20 op: STARTLINE (58)

    /** search.e:553		if (start > len) or (len + start < 1) then*/
    // SubProg rfind pc: 22 op: GREATER (6)
    _1061 = (_start_2424 > _len_2426);
    // SubProg rfind pc: 26 op: SC1_OR_IF (147)
    if (_1061 != 0) {
        goto L2; // [26] 43
    }
    // SubProg rfind pc: 30 op: PLUS (11)
    _1063 = _len_2426 + _start_2424;
    if ((object)((uintptr_t)_1063 + (uintptr_t)HIGH_BITS) >= 0){
        _1063 = NewDouble((eudouble)_1063);
    }
    // SubProg rfind pc: 34 op: LESS (1)
    if (IS_ATOM_INT(_1063)) {
        _1064 = (_1063 < 1);
    }
    else {
        _1064 = (DBL_PTR(_1063)->dbl < (eudouble)1);
    }
    DeRef(_1063);
    _1063 = NOVALUE;
    // SubProg rfind pc: 38 op: NOP1 (159)
    // SubProg rfind pc: 39 op: IF (20)
    if (_1064 == 0)
    {
        DeRef(_1064);
        _1064 = NOVALUE;
        goto L3; // [39] 50
    }
    else{
        DeRef(_1064);
        _1064 = NOVALUE;
    }
    // SubProg rfind pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 2420 op: 159
    // SubProg rfind pc: 43 op: STARTLINE (58)

    /** search.e:554			return 0*/
    // SubProg rfind pc: 45 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2422
    DeRef(_needle_2422);

// block var haystack_2423
    DeRefDS(_haystack_2423);

// block var start_2424

// block var len_2426
    DeRef(_1061);
    _1061 = NOVALUE;
    return 0;
    // SubProg rfind pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 2420 op: 159
    // SubProg rfind pc: 50 op: STARTLINE (58)

    /** search.e:557		if start < 1 then*/
    // SubProg rfind pc: 52 op: LESS_IFW_I (119)
    if (_start_2424 >= 1)
    goto L4; // [52] 63
    // SubProg rfind pc: 56 op: STARTLINE (58)

    /** search.e:558			start = len + start*/
    // SubProg rfind pc: 58 op: PLUS_I (115)
    _start_2424 = _len_2426 + _start_2424;
    // SubProg rfind pc: 62 op: NOP1 (159)
L4: // addr: 63 pc: 62 sub: 2420 op: 159
    // SubProg rfind pc: 63 op: STARTLINE (58)

    /** search.e:561		for i = start to 1 by -1 do*/
    // SubProg rfind pc: 65 op: FOR_I (125)
    {
        object _i_2439;
        _i_2439 = _start_2424;
L5: // addr: 72 pc: 65 sub: 2420 op: 125
        if (_i_2439 < 1){
            goto L6; // [65] 99
        }
        // SubProg rfind pc: 72 op: STARTLINE (58)

        /** search.e:562			if equal(haystack[i], needle) then*/
        // SubProg rfind pc: 74 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_haystack_2423);
        _1067 = (object)*(((s1_ptr)_2)->base + _i_2439);
        // SubProg rfind pc: 78 op: EQUAL (153)
        if (_1067 == _needle_2422)
        _1068 = 1;
        else if (IS_ATOM_INT(_1067) && IS_ATOM_INT(_needle_2422))
        _1068 = 0;
        else
        _1068 = (compare(_1067, _needle_2422) == 0);
        _1067 = NOVALUE;
        // SubProg rfind pc: 82 op: IF (20)
        if (_1068 == 0)
        {
            _1068 = NOVALUE;
            goto L7; // [82] 92
        }
        else{
            _1068 = NOVALUE;
        }
        // SubProg rfind pc: 85 op: STARTLINE (58)

        /** search.e:563				return i*/
        // SubProg rfind pc: 87 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2422
        DeRef(_needle_2422);

// block var haystack_2423
        DeRefDS(_haystack_2423);

// block var start_2424

// block var len_2426
        DeRef(_1061);
        _1061 = NOVALUE;
        return _i_2439;
        // SubProg rfind pc: 91 op: NOP1 (159)
L7: // addr: 92 pc: 91 sub: 2420 op: 159
        // SubProg rfind pc: 92 op: STARTLINE (58)

        /** search.e:565		end for*/
        // SubProg rfind pc: 94 op: ENDFOR_GENERAL (39)
        _i_2439 = _i_2439 + -1;
        goto L5; // [94] 72
L6: // addr: 99 pc: 94 sub: 2420 op: 39
        ;
    }
    // SubProg rfind pc: 99 op: STARTLINE (58)

    /** search.e:567		return 0*/
    // SubProg rfind pc: 101 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2422
    DeRef(_needle_2422);

// block var haystack_2423
    DeRefDS(_haystack_2423);

// block var start_2424

// block var len_2426
    DeRef(_1061);
    _1061 = NOVALUE;
    return 0;
    // SubProg rfind pc: 105 op: BADRETURNF (43)
    ;
}


object _19find_replace(object _needle_2445, object _haystack_2446, object _replacement_2447, object _max_2448)
{
    object _posn_2449 = NOVALUE;
// skipping _1073  name type: 0
    object _1072 = NOVALUE; // 2455 1072
// skipping _1071  name type: 0
// skipping _1070  name type: 0
// skipping _1069  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_replace pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_replace pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_replace pc: 5 op: STARTLINE (58)

    /** search.e:612		integer posn = 0*/
    // SubProg find_replace pc: 7 op: ASSIGN_I (113)
    _posn_2449 = 0;
    // SubProg find_replace pc: 10 op: STARTLINE (58)

    /** search.e:614		while posn != 0 entry do */
    // SubProg find_replace pc: 12 op: ELSE (23)
    goto L1; // [12] 45
    // SubProg find_replace pc: 14 op: NOPWHILE (158)
L2: // addr: 15 pc: 14 sub: 2443 op: 158
    // SubProg find_replace pc: 15 op: NOTEQ_IFW_I (122)
    if (_posn_2449 == 0)
    goto L3; // [15] 61
    // SubProg find_replace pc: 19 op: STARTLINE (58)

    /** search.e:615			haystack[posn] = replacement*/
    // SubProg find_replace pc: 21 op: ASSIGN_SUBS (16)
    Ref(_replacement_2447);
    _2 = (object)SEQ_PTR(_haystack_2446);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2446 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _posn_2449);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _replacement_2447;
    DeRef(_1);
    // SubProg find_replace pc: 25 op: STARTLINE (58)

    /** search.e:616			max -= 1*/
    // SubProg find_replace pc: 27 op: MINUS_I (116)
    _max_2448 = _max_2448 - 1;
    // SubProg find_replace pc: 31 op: STARTLINE (58)

    /** search.e:617			if max = 0 then*/
    // SubProg find_replace pc: 33 op: EQUALS_IFW_I (121)
    if (_max_2448 != 0)
    goto L4; // [33] 42
    // SubProg find_replace pc: 37 op: STARTLINE (58)

    /** search.e:618				exit*/
    // SubProg find_replace pc: 39 op: EXIT (61)
    goto L3; // [39] 61
    // SubProg find_replace pc: 41 op: NOP1 (159)
L4: // addr: 42 pc: 41 sub: 2443 op: 159
    // SubProg find_replace pc: 42 op: STARTLINE (58)

    /** search.e:620		entry*/
    // SubProg find_replace pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 2443 op: 159
    // SubProg find_replace pc: 45 op: STARTLINE (58)

    /** search.e:621			posn = find(needle, haystack, posn + 1)*/
    // SubProg find_replace pc: 47 op: PLUS1 (93)
    _1072 = _posn_2449 + 1;
    if (_1072 > MAXINT){
        _1072 = NewDouble((eudouble)_1072);
    }
    // SubProg find_replace pc: 51 op: FIND_FROM (176)
    _posn_2449 = find_from(_needle_2445, _haystack_2446, _1072);
    DeRef(_1072);
    _1072 = NOVALUE;
    // SubProg find_replace pc: 56 op: STARTLINE (58)

    /** search.e:622		end while*/
    // SubProg find_replace pc: 58 op: ENDWHILE (22)
    goto L2; // [58] 15
    // SubProg find_replace pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 2443 op: 159
    // SubProg find_replace pc: 61 op: STARTLINE (58)

    /** search.e:624		return haystack*/
    // SubProg find_replace pc: 63 op: RETURNF (28)

// Exiting block BLOCK: find_replace

// block var needle_2445
    DeRef(_needle_2445);

// block var replacement_2447
    DeRefi(_replacement_2447);

// block var max_2448

// block var posn_2449
    return _haystack_2446;
    // SubProg find_replace pc: 67 op: BADRETURNF (43)
    ;
}


object _19match_replace(object _needle_2459, object _haystack_2460, object _replacement_2461, object _max_2462)
{
    object _posn_2463 = NOVALUE;
    object _needle_len_2464 = NOVALUE;
    object _replacement_len_2465 = NOVALUE;
    object _scan_from_2466 = NOVALUE;
    object _cnt_2467 = NOVALUE;
// skipping _1089  name type: 0
// skipping _1088  name type: 0
// skipping _1087  name type: 0
// skipping _1086  name type: 0
// skipping _1085  name type: 0
    object _1084 = NOVALUE; // 2483 1084
// skipping _1083  name type: 0
// skipping _1082  name type: 0
    object _1081 = NOVALUE; // 2479 1081
// skipping _1080  name type: 0
    object _1079 = NOVALUE; // 2477 1079
// skipping _1078  name type: 0
    object _1077 = NOVALUE; // 2474 1077
// skipping _1076  name type: 0
// skipping _1075  name type: 0
// skipping _1074  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg match_replace pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg match_replace pc: 3 op: INTEGER_CHECK (96)
    // SubProg match_replace pc: 5 op: STARTLINE (58)

    /** search.e:692		if max < 0 then*/
    // SubProg match_replace pc: 7 op: LESS_IFW_I (119)
    // SubProg match_replace pc: 18 op: STARTLINE (58)

    /** search.e:696		cnt = length(haystack)*/
    // SubProg match_replace pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_2460)){
            _cnt_2467 = SEQ_PTR(_haystack_2460)->length;
    }
    else {
        _cnt_2467 = 1;
    }
    // SubProg match_replace pc: 23 op: STARTLINE (58)

    /** search.e:697		if max != 0 then*/
    // SubProg match_replace pc: 25 op: NOTEQ_IFW_I (122)
    // SubProg match_replace pc: 35 op: STARTLINE (58)

    /** search.e:701		if atom(needle) then*/
    // SubProg match_replace pc: 37 op: IS_AN_ATOM (67)
    _1077 = IS_ATOM(_needle_2459);
    // SubProg match_replace pc: 40 op: IF (20)
    if (_1077 == 0)
    {
        _1077 = NOVALUE;
        goto L1; // [40] 50
    }
    else{
        _1077 = NOVALUE;
    }
    // SubProg match_replace pc: 43 op: STARTLINE (58)

    /** search.e:702			needle = {needle}*/
    // SubProg match_replace pc: 45 op: RIGHT_BRACE_N (31)
    _0 = _needle_2459;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_needle_2459);
    ((intptr_t*)_2)[1] = _needle_2459;
    _needle_2459 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg match_replace pc: 49 op: NOP1 (159)
L1: // addr: 50 pc: 49 sub: 2457 op: 159
    // SubProg match_replace pc: 50 op: STARTLINE (58)

    /** search.e:704		if atom(replacement) then*/
    // SubProg match_replace pc: 52 op: IS_AN_ATOM (67)
    _1079 = IS_ATOM(_replacement_2461);
    // SubProg match_replace pc: 55 op: IF (20)
    if (_1079 == 0)
    {
        _1079 = NOVALUE;
        goto L2; // [55] 65
    }
    else{
        _1079 = NOVALUE;
    }
    // SubProg match_replace pc: 58 op: STARTLINE (58)

    /** search.e:705			replacement = {replacement}*/
    // SubProg match_replace pc: 60 op: RIGHT_BRACE_N (31)
    _0 = _replacement_2461;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_replacement_2461);
    ((intptr_t*)_2)[1] = _replacement_2461;
    _replacement_2461 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg match_replace pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 2457 op: 159
    // SubProg match_replace pc: 65 op: STARTLINE (58)

    /** search.e:708		needle_len = length(needle) - 1*/
    // SubProg match_replace pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_needle_2459)){
            _1081 = SEQ_PTR(_needle_2459)->length;
    }
    else {
        _1081 = 1;
    }
    // SubProg match_replace pc: 70 op: MINUS_I (116)
    _needle_len_2464 = _1081 - 1;
    _1081 = NOVALUE;
    // SubProg match_replace pc: 74 op: STARTLINE (58)

    /** search.e:709		replacement_len = length(replacement)*/
    // SubProg match_replace pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_replacement_2461)){
            _replacement_len_2465 = SEQ_PTR(_replacement_2461)->length;
    }
    else {
        _replacement_len_2465 = 1;
    }
    // SubProg match_replace pc: 79 op: STARTLINE (58)

    /** search.e:711		scan_from = 1*/
    // SubProg match_replace pc: 81 op: ASSIGN_I (113)
    _scan_from_2466 = 1;
    // SubProg match_replace pc: 84 op: STARTLINE (58)

    /** search.e:712		while posn with entry do*/
    // SubProg match_replace pc: 86 op: ELSE (23)
    goto L3; // [86] 132
    // SubProg match_replace pc: 88 op: NOPWHILE (158)
L4: // addr: 89 pc: 88 sub: 2457 op: 158
    // SubProg match_replace pc: 89 op: PRIVATE_INIT_CHECK (30)
    // SubProg match_replace pc: 91 op: WHILE (47)
    if (_posn_2463 == 0)
    {
        goto L5; // [91] 144
    }
    else{
    }
    // SubProg match_replace pc: 94 op: STARTLINE (58)

    /** search.e:713			haystack = replace(haystack, replacement, posn, posn + needle_len)*/
    // SubProg match_replace pc: 96 op: PLUS (11)
    _1084 = _posn_2463 + _needle_len_2464;
    if ((object)((uintptr_t)_1084 + (uintptr_t)HIGH_BITS) >= 0){
        _1084 = NewDouble((eudouble)_1084);
    }
    // SubProg match_replace pc: 100 op: REPLACE (201)
    {
        intptr_t p1 = _haystack_2460;
        intptr_t p2 = _replacement_2461;
        intptr_t p3 = _posn_2463;
        intptr_t p4 = _1084;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_haystack_2460;
        Replace( &replace_params );
    }
    DeRef(_1084);
    _1084 = NOVALUE;
    // SubProg match_replace pc: 106 op: STARTLINE (58)

    /** search.e:715			cnt -= 1*/
    // SubProg match_replace pc: 108 op: MINUS_I (116)
    _cnt_2467 = _cnt_2467 - 1;
    // SubProg match_replace pc: 112 op: STARTLINE (58)

    /** search.e:716			if cnt = 0 then*/
    // SubProg match_replace pc: 114 op: EQUALS_IFW_I (121)
    if (_cnt_2467 != 0)
    goto L6; // [114] 123
    // SubProg match_replace pc: 118 op: STARTLINE (58)

    /** search.e:717				exit*/
    // SubProg match_replace pc: 120 op: EXIT (61)
    goto L5; // [120] 144
    // SubProg match_replace pc: 122 op: NOP1 (159)
L6: // addr: 123 pc: 122 sub: 2457 op: 159
    // SubProg match_replace pc: 123 op: STARTLINE (58)

    /** search.e:719			scan_from = posn + replacement_len*/
    // SubProg match_replace pc: 125 op: PLUS_I (115)
    _scan_from_2466 = _posn_2463 + _replacement_len_2465;
    // SubProg match_replace pc: 129 op: STARTLINE (58)

    /** search.e:720		entry*/
    // SubProg match_replace pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 2457 op: 159
    // SubProg match_replace pc: 132 op: STARTLINE (58)

    /** search.e:721			posn = match(needle, haystack, scan_from)*/
    // SubProg match_replace pc: 134 op: MATCH_FROM (177)
    _posn_2463 = e_match_from(_needle_2459, _haystack_2460, _scan_from_2466);
    // SubProg match_replace pc: 139 op: STARTLINE (58)

    /** search.e:722		end while*/
    // SubProg match_replace pc: 141 op: ENDWHILE (22)
    goto L4; // [141] 89
    // SubProg match_replace pc: 143 op: NOP1 (159)
L5: // addr: 144 pc: 143 sub: 2457 op: 159
    // SubProg match_replace pc: 144 op: STARTLINE (58)

    /** search.e:724		return haystack*/
    // SubProg match_replace pc: 146 op: RETURNF (28)

// Exiting block BLOCK: match_replace

// block var needle_2459
    DeRef(_needle_2459);

// block var replacement_2461
    DeRef(_replacement_2461);

// block var max_2462

// block var posn_2463

// block var needle_len_2464

// block var replacement_len_2465

// block var scan_from_2466

// block var cnt_2467
    return _haystack_2460;
    // SubProg match_replace pc: 150 op: BADRETURNF (43)
    ;
}


object _19begins(object _sub_text_2580, object _full_text_2581)
{
    object _1148 = NOVALUE; // 2598 1148
    object _1147 = NOVALUE; // 2597 1147
    object _1146 = NOVALUE; // 2596 1146
// skipping _1145  name type: 0
    object _1144 = NOVALUE; // 2593 1144
    object _1143 = NOVALUE; // 2592 1143
    object _1142 = NOVALUE; // 2589 1142
    object _1141 = NOVALUE; // 2588 1141
    object _1140 = NOVALUE; // 2586 1140
// skipping _1139  name type: 0
    object _1138 = NOVALUE; // 2583 1138
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg begins pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg begins pc: 3 op: STARTLINE (58)

    /** search.e:976		if length(full_text) = 0 then*/
    // SubProg begins pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2581)){
            _1138 = SEQ_PTR(_full_text_2581)->length;
    }
    else {
        _1138 = 1;
    }
    // SubProg begins pc: 8 op: EQUALS_IFW_I (121)
    if (_1138 != 0)
    goto L1; // [8] 19
    // SubProg begins pc: 12 op: STARTLINE (58)

    /** search.e:977			return 0*/
    // SubProg begins pc: 14 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2580
    DeRef(_sub_text_2580);

// block var full_text_2581
    DeRefDS(_full_text_2581);
    return 0;
    // SubProg begins pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 2578 op: 159
    // SubProg begins pc: 19 op: STARTLINE (58)

    /** search.e:980		if atom(sub_text) then*/
    // SubProg begins pc: 21 op: IS_AN_ATOM (67)
    _1140 = IS_ATOM(_sub_text_2580);
    // SubProg begins pc: 24 op: IF (20)
    if (_1140 == 0)
    {
        _1140 = NOVALUE;
        goto L2; // [24] 57
    }
    else{
        _1140 = NOVALUE;
    }
    // SubProg begins pc: 27 op: STARTLINE (58)

    /** search.e:981			if equal(sub_text, full_text[1]) then*/
    // SubProg begins pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_full_text_2581);
    _1141 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg begins pc: 33 op: EQUAL (153)
    if (_sub_text_2580 == _1141)
    _1142 = 1;
    else if (IS_ATOM_INT(_sub_text_2580) && IS_ATOM_INT(_1141))
    _1142 = 0;
    else
    _1142 = (compare(_sub_text_2580, _1141) == 0);
    _1141 = NOVALUE;
    // SubProg begins pc: 37 op: IF (20)
    if (_1142 == 0)
    {
        _1142 = NOVALUE;
        goto L3; // [37] 49
    }
    else{
        _1142 = NOVALUE;
    }
    // SubProg begins pc: 40 op: STARTLINE (58)

    /** search.e:982				return 1*/
    // SubProg begins pc: 42 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2580
    DeRef(_sub_text_2580);

// block var full_text_2581
    DeRefDS(_full_text_2581);
    return 1;
    // SubProg begins pc: 46 op: ELSE (23)
    goto L4; // [46] 56
    // SubProg begins pc: 48 op: NOP1 (159)
L3: // addr: 49 pc: 48 sub: 2578 op: 159
    // SubProg begins pc: 49 op: STARTLINE (58)

    /** search.e:984				return 0*/
    // SubProg begins pc: 51 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2580
    DeRef(_sub_text_2580);

// block var full_text_2581
    DeRefDS(_full_text_2581);
    return 0;
    // SubProg begins pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 2578 op: 159
    // SubProg begins pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 2578 op: 159
    // SubProg begins pc: 57 op: STARTLINE (58)

    /** search.e:988		if length(sub_text) > length(full_text) then*/
    // SubProg begins pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2580)){
            _1143 = SEQ_PTR(_sub_text_2580)->length;
    }
    else {
        _1143 = 1;
    }
    // SubProg begins pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2581)){
            _1144 = SEQ_PTR(_full_text_2581)->length;
    }
    else {
        _1144 = 1;
    }
    // SubProg begins pc: 65 op: GREATER_IFW_I (124)
    if (_1143 <= _1144)
    goto L5; // [65] 76
    // SubProg begins pc: 69 op: STARTLINE (58)

    /** search.e:989			return 0*/
    // SubProg begins pc: 71 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2580
    DeRef(_sub_text_2580);

// block var full_text_2581
    DeRefDS(_full_text_2581);
    return 0;
    // SubProg begins pc: 75 op: NOP1 (159)
L5: // addr: 76 pc: 75 sub: 2578 op: 159
    // SubProg begins pc: 76 op: STARTLINE (58)

    /** search.e:992		if equal(sub_text, full_text[1.. length(sub_text)]) then*/
    // SubProg begins pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2580)){
            _1146 = SEQ_PTR(_sub_text_2580)->length;
    }
    else {
        _1146 = 1;
    }
    // SubProg begins pc: 81 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1147;
    RHS_Slice(_full_text_2581, 1, _1146);
    // SubProg begins pc: 86 op: EQUAL (153)
    if (_sub_text_2580 == _1147)
    _1148 = 1;
    else if (IS_ATOM_INT(_sub_text_2580) && IS_ATOM_INT(_1147))
    _1148 = 0;
    else
    _1148 = (compare(_sub_text_2580, _1147) == 0);
    DeRefDS(_1147);
    _1147 = NOVALUE;
    // SubProg begins pc: 90 op: IF (20)
    if (_1148 == 0)
    {
        _1148 = NOVALUE;
        goto L6; // [90] 102
    }
    else{
        _1148 = NOVALUE;
    }
    // SubProg begins pc: 93 op: STARTLINE (58)

    /** search.e:993			return 1*/
    // SubProg begins pc: 95 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2580
    DeRef(_sub_text_2580);

// block var full_text_2581
    DeRefDS(_full_text_2581);
    return 1;
    // SubProg begins pc: 99 op: ELSE (23)
    goto L7; // [99] 109
    // SubProg begins pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 2578 op: 159
    // SubProg begins pc: 102 op: STARTLINE (58)

    /** search.e:995			return 0*/
    // SubProg begins pc: 104 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2580
    DeRef(_sub_text_2580);

// block var full_text_2581
    DeRefDS(_full_text_2581);
    return 0;
    // SubProg begins pc: 108 op: NOP1 (159)
L7: // addr: 109 pc: 108 sub: 2578 op: 159
    // SubProg begins pc: 109 op: BADRETURNF (43)
    ;
}


object _19ends(object _sub_text_2602, object _full_text_2603)
{
    object _1164 = NOVALUE; // 2625 1164
    object _1163 = NOVALUE; // 2624 1163
    object _1162 = NOVALUE; // 2623 1162
    object _1161 = NOVALUE; // 2622 1161
    object _1160 = NOVALUE; // 2621 1160
    object _1159 = NOVALUE; // 2620 1159
    object _1158 = NOVALUE; // 2619 1158
// skipping _1157  name type: 0
    object _1156 = NOVALUE; // 2616 1156
    object _1155 = NOVALUE; // 2615 1155
    object _1154 = NOVALUE; // 2612 1154
    object _1153 = NOVALUE; // 2611 1153
    object _1152 = NOVALUE; // 2610 1152
    object _1151 = NOVALUE; // 2608 1151
// skipping _1150  name type: 0
    object _1149 = NOVALUE; // 2605 1149
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ends pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ends pc: 3 op: STARTLINE (58)

    /** search.e:1026		if length(full_text) = 0 then*/
    // SubProg ends pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2603)){
            _1149 = SEQ_PTR(_full_text_2603)->length;
    }
    else {
        _1149 = 1;
    }
    // SubProg ends pc: 8 op: EQUALS_IFW_I (121)
    if (_1149 != 0)
    goto L1; // [8] 19
    // SubProg ends pc: 12 op: STARTLINE (58)

    /** search.e:1027			return 0*/
    // SubProg ends pc: 14 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2602
    DeRefDSi(_sub_text_2602);

// block var full_text_2603
    DeRefDS(_full_text_2603);
    return 0;
    // SubProg ends pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 2600 op: 159
    // SubProg ends pc: 19 op: STARTLINE (58)

    /** search.e:1030		if atom(sub_text) then*/
    // SubProg ends pc: 21 op: IS_AN_ATOM (67)
    _1151 = IS_ATOM(_sub_text_2602);
    // SubProg ends pc: 24 op: IF (20)
    if (_1151 == 0)
    {
        _1151 = NOVALUE;
        goto L2; // [24] 60
    }
    else{
        _1151 = NOVALUE;
    }
    // SubProg ends pc: 27 op: STARTLINE (58)

    /** search.e:1031			if equal(sub_text, full_text[$]) then*/
    // SubProg ends pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2603)){
            _1152 = SEQ_PTR(_full_text_2603)->length;
    }
    else {
        _1152 = 1;
    }
    // SubProg ends pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_full_text_2603);
    _1153 = (object)*(((s1_ptr)_2)->base + _1152);
    // SubProg ends pc: 36 op: EQUAL (153)
    if (_sub_text_2602 == _1153)
    _1154 = 1;
    else if (IS_ATOM_INT(_sub_text_2602) && IS_ATOM_INT(_1153))
    _1154 = 0;
    else
    _1154 = (compare(_sub_text_2602, _1153) == 0);
    _1153 = NOVALUE;
    // SubProg ends pc: 40 op: IF (20)
    if (_1154 == 0)
    {
        _1154 = NOVALUE;
        goto L3; // [40] 52
    }
    else{
        _1154 = NOVALUE;
    }
    // SubProg ends pc: 43 op: STARTLINE (58)

    /** search.e:1032				return 1*/
    // SubProg ends pc: 45 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2602
    DeRefi(_sub_text_2602);

// block var full_text_2603
    DeRefDS(_full_text_2603);
    return 1;
    // SubProg ends pc: 49 op: ELSE (23)
    goto L4; // [49] 59
    // SubProg ends pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 2600 op: 159
    // SubProg ends pc: 52 op: STARTLINE (58)

    /** search.e:1034				return 0*/
    // SubProg ends pc: 54 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2602
    DeRefi(_sub_text_2602);

// block var full_text_2603
    DeRefDS(_full_text_2603);
    return 0;
    // SubProg ends pc: 58 op: NOP1 (159)
L4: // addr: 59 pc: 58 sub: 2600 op: 159
    // SubProg ends pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 2600 op: 159
    // SubProg ends pc: 60 op: STARTLINE (58)

    /** search.e:1038		if length(sub_text) > length(full_text) then*/
    // SubProg ends pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2602)){
            _1155 = SEQ_PTR(_sub_text_2602)->length;
    }
    else {
        _1155 = 1;
    }
    // SubProg ends pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2603)){
            _1156 = SEQ_PTR(_full_text_2603)->length;
    }
    else {
        _1156 = 1;
    }
    // SubProg ends pc: 68 op: GREATER_IFW_I (124)
    if (_1155 <= _1156)
    goto L5; // [68] 79
    // SubProg ends pc: 72 op: STARTLINE (58)

    /** search.e:1039			return 0*/
    // SubProg ends pc: 74 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2602
    DeRefi(_sub_text_2602);

// block var full_text_2603
    DeRefDS(_full_text_2603);
    return 0;
    // SubProg ends pc: 78 op: NOP1 (159)
L5: // addr: 79 pc: 78 sub: 2600 op: 159
    // SubProg ends pc: 79 op: STARTLINE (58)

    /** search.e:1042		if equal(sub_text, full_text[$ - length(sub_text) + 1 .. $]) then*/
    // SubProg ends pc: 81 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2603)){
            _1158 = SEQ_PTR(_full_text_2603)->length;
    }
    else {
        _1158 = 1;
    }
    // SubProg ends pc: 84 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2602)){
            _1159 = SEQ_PTR(_sub_text_2602)->length;
    }
    else {
        _1159 = 1;
    }
    // SubProg ends pc: 87 op: MINUS (10)
    _1160 = _1158 - _1159;
    _1158 = NOVALUE;
    _1159 = NOVALUE;
    // SubProg ends pc: 91 op: PLUS1 (93)
    _1161 = _1160 + 1;
    _1160 = NOVALUE;
    // SubProg ends pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2603)){
            _1162 = SEQ_PTR(_full_text_2603)->length;
    }
    else {
        _1162 = 1;
    }
    // SubProg ends pc: 98 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1163;
    RHS_Slice(_full_text_2603, _1161, _1162);
    // SubProg ends pc: 103 op: EQUAL (153)
    if (_sub_text_2602 == _1163)
    _1164 = 1;
    else if (IS_ATOM_INT(_sub_text_2602) && IS_ATOM_INT(_1163))
    _1164 = 0;
    else
    _1164 = (compare(_sub_text_2602, _1163) == 0);
    DeRefDS(_1163);
    _1163 = NOVALUE;
    // SubProg ends pc: 107 op: IF (20)
    if (_1164 == 0)
    {
        _1164 = NOVALUE;
        goto L6; // [107] 119
    }
    else{
        _1164 = NOVALUE;
    }
    // SubProg ends pc: 110 op: STARTLINE (58)

    /** search.e:1043			return 1*/
    // SubProg ends pc: 112 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2602
    DeRefi(_sub_text_2602);

// block var full_text_2603
    DeRefDS(_full_text_2603);
    _1161 = NOVALUE;
    return 1;
    // SubProg ends pc: 116 op: ELSE (23)
    goto L7; // [116] 126
    // SubProg ends pc: 118 op: NOP1 (159)
L6: // addr: 119 pc: 118 sub: 2600 op: 159
    // SubProg ends pc: 119 op: STARTLINE (58)

    /** search.e:1045			return 0*/
    // SubProg ends pc: 121 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2602
    DeRefi(_sub_text_2602);

// block var full_text_2603
    DeRefDS(_full_text_2603);
    DeRef(_1161);
    _1161 = NOVALUE;
    return 0;
    // SubProg ends pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 2600 op: 159
    // SubProg ends pc: 126 op: BADRETURNF (43)
    ;
}



// 0xAE2B0E3A
