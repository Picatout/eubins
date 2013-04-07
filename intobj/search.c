// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _22find_all(object _needle_2479, object _haystack_2480, object _start_2481)
{
    object _kx_2482 = NOVALUE;
// skipping _1107  name type: 0
    object _1106 = NOVALUE; // 2488 1106
    object _1105 = NOVALUE; // 2487 1105
// skipping _1104  name type: 0
// skipping _1103  name type: 0
// skipping _1102  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_all pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_all pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_all pc: 5 op: STARTLINE (58)

    /** search.e:292		integer kx = 0*/
    // SubProg find_all pc: 7 op: ASSIGN_I (113)
    _kx_2482 = 0;
    // SubProg find_all pc: 10 op: STARTLINE (58)

    /** search.e:293		while start with entry do*/
    // SubProg find_all pc: 12 op: ELSE (23)
    goto L1; // [12] 39
    // SubProg find_all pc: 14 op: NOPWHILE (158)
L2: // addr: 15 pc: 14 sub: 2477 op: 158
    // SubProg find_all pc: 15 op: WHILE (47)
    if (_start_2481 == 0)
    {
        goto L3; // [15] 51
    }
    else{
    }
    // SubProg find_all pc: 18 op: STARTLINE (58)

    /** search.e:294			kx += 1*/
    // SubProg find_all pc: 20 op: PLUS1_I (117)
    _kx_2482 = _kx_2482 + 1;
    // SubProg find_all pc: 24 op: STARTLINE (58)

    /** search.e:295			haystack[kx] = start*/
    // SubProg find_all pc: 26 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_haystack_2480);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2480 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _kx_2482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _start_2481;
    DeRef(_1);
    // SubProg find_all pc: 30 op: STARTLINE (58)

    /** search.e:296			start += 1*/
    // SubProg find_all pc: 32 op: PLUS1_I (117)
    _start_2481 = _start_2481 + 1;
    // SubProg find_all pc: 36 op: STARTLINE (58)

    /** search.e:297		entry*/
    // SubProg find_all pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 2477 op: 159
    // SubProg find_all pc: 39 op: STARTLINE (58)

    /** search.e:298			start = find(needle, haystack, start)*/
    // SubProg find_all pc: 41 op: FIND_FROM (176)
    _start_2481 = find_from(_needle_2479, _haystack_2480, _start_2481);
    // SubProg find_all pc: 46 op: STARTLINE (58)

    /** search.e:299		end while*/
    // SubProg find_all pc: 48 op: ENDWHILE (22)
    goto L2; // [48] 15
    // SubProg find_all pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 2477 op: 159
    // SubProg find_all pc: 51 op: STARTLINE (58)

    /** search.e:301		haystack = remove( haystack, kx+1, length( haystack ) )*/
    // SubProg find_all pc: 53 op: PLUS1 (93)
    _1105 = _kx_2482 + 1;
    if (_1105 > MAXINT){
        _1105 = NewDouble((eudouble)_1105);
    }
    // SubProg find_all pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_2480)){
            _1106 = SEQ_PTR(_haystack_2480)->length;
    }
    else {
        _1106 = 1;
    }
    // SubProg find_all pc: 60 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_haystack_2480);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_1105)) ? _1105 : (object)(DBL_PTR(_1105)->dbl);
        int stop = (IS_ATOM_INT(_1106)) ? _1106 : (object)(DBL_PTR(_1106)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_haystack_2480), start, &_haystack_2480 );
            }
            else Tail(SEQ_PTR(_haystack_2480), stop+1, &_haystack_2480);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_haystack_2480), start, &_haystack_2480);
        }
        else {
            assign_slice_seq = &assign_space;
            _haystack_2480 = Remove_elements(start, stop, (SEQ_PTR(_haystack_2480)->ref == 1));
        }
    }
    DeRef(_1105);
    _1105 = NOVALUE;
    _1106 = NOVALUE;
    // SubProg find_all pc: 65 op: STARTLINE (58)

    /** search.e:302		return haystack*/
    // SubProg find_all pc: 67 op: RETURNF (28)

// Exiting block BLOCK: find_all

// block var needle_2479

// block var start_2481

// block var kx_2482
    return _haystack_2480;
    // SubProg find_all pc: 71 op: BADRETURNF (43)
    ;
}


object _22rfind(object _needle_2597, object _haystack_2598, object _start_2599)
{
    object _len_2601 = NOVALUE;
    object _1167 = NOVALUE; // 2617 1167
    object _1166 = NOVALUE; // 2616 1166
// skipping _1165  name type: 0
// skipping _1164  name type: 0
    object _1163 = NOVALUE; // 2609 1163
    object _1162 = NOVALUE; // 2608 1162
// skipping _1161  name type: 0
    object _1160 = NOVALUE; // 2606 1160
// skipping _1159  name type: 0
// skipping _1158  name type: 0
// skipping _1157  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rfind pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg rfind pc: 3 op: INTEGER_CHECK (96)
    // SubProg rfind pc: 5 op: STARTLINE (58)

    /** search.e:550		integer len = length(haystack)*/
    // SubProg rfind pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_2598)){
            _len_2601 = SEQ_PTR(_haystack_2598)->length;
    }
    else {
        _len_2601 = 1;
    }
    // SubProg rfind pc: 10 op: STARTLINE (58)

    /** search.e:552		if start = 0 then start = len end if*/
    // SubProg rfind pc: 12 op: EQUALS_IFW_I (121)
    if (_start_2599 != 0)
    goto L1; // [12] 20
    // SubProg rfind pc: 16 op: ASSIGN_I (113)
    _start_2599 = _len_2601;
    // SubProg rfind pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 2595 op: 159
    // SubProg rfind pc: 20 op: STARTLINE (58)

    /** search.e:553		if (start > len) or (len + start < 1) then*/
    // SubProg rfind pc: 22 op: GREATER (6)
    _1160 = (_start_2599 > _len_2601);
    // SubProg rfind pc: 26 op: SC1_OR_IF (147)
    if (_1160 != 0) {
        goto L2; // [26] 43
    }
    // SubProg rfind pc: 30 op: PLUS (11)
    _1162 = _len_2601 + _start_2599;
    if ((object)((uintptr_t)_1162 + (uintptr_t)HIGH_BITS) >= 0){
        _1162 = NewDouble((eudouble)_1162);
    }
    // SubProg rfind pc: 34 op: LESS (1)
    if (IS_ATOM_INT(_1162)) {
        _1163 = (_1162 < 1);
    }
    else {
        _1163 = (DBL_PTR(_1162)->dbl < (eudouble)1);
    }
    DeRef(_1162);
    _1162 = NOVALUE;
    // SubProg rfind pc: 38 op: NOP1 (159)
    // SubProg rfind pc: 39 op: IF (20)
    if (_1163 == 0)
    {
        DeRef(_1163);
        _1163 = NOVALUE;
        goto L3; // [39] 50
    }
    else{
        DeRef(_1163);
        _1163 = NOVALUE;
    }
    // SubProg rfind pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 2595 op: 159
    // SubProg rfind pc: 43 op: STARTLINE (58)

    /** search.e:554			return 0*/
    // SubProg rfind pc: 45 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2597
    DeRef(_needle_2597);

// block var haystack_2598
    DeRefDS(_haystack_2598);

// block var start_2599

// block var len_2601
    DeRef(_1160);
    _1160 = NOVALUE;
    return 0;
    // SubProg rfind pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 2595 op: 159
    // SubProg rfind pc: 50 op: STARTLINE (58)

    /** search.e:557		if start < 1 then*/
    // SubProg rfind pc: 52 op: LESS_IFW_I (119)
    if (_start_2599 >= 1)
    goto L4; // [52] 63
    // SubProg rfind pc: 56 op: STARTLINE (58)

    /** search.e:558			start = len + start*/
    // SubProg rfind pc: 58 op: PLUS_I (115)
    _start_2599 = _len_2601 + _start_2599;
    // SubProg rfind pc: 62 op: NOP1 (159)
L4: // addr: 63 pc: 62 sub: 2595 op: 159
    // SubProg rfind pc: 63 op: STARTLINE (58)

    /** search.e:561		for i = start to 1 by -1 do*/
    // SubProg rfind pc: 65 op: FOR_I (125)
    {
        object _i_2614;
        _i_2614 = _start_2599;
L5: // addr: 72 pc: 65 sub: 2595 op: 125
        if (_i_2614 < 1){
            goto L6; // [65] 99
        }
        // SubProg rfind pc: 72 op: STARTLINE (58)

        /** search.e:562			if equal(haystack[i], needle) then*/
        // SubProg rfind pc: 74 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_haystack_2598);
        _1166 = (object)*(((s1_ptr)_2)->base + _i_2614);
        // SubProg rfind pc: 78 op: EQUAL (153)
        if (_1166 == _needle_2597)
        _1167 = 1;
        else if (IS_ATOM_INT(_1166) && IS_ATOM_INT(_needle_2597))
        _1167 = 0;
        else
        _1167 = (compare(_1166, _needle_2597) == 0);
        _1166 = NOVALUE;
        // SubProg rfind pc: 82 op: IF (20)
        if (_1167 == 0)
        {
            _1167 = NOVALUE;
            goto L7; // [82] 92
        }
        else{
            _1167 = NOVALUE;
        }
        // SubProg rfind pc: 85 op: STARTLINE (58)

        /** search.e:563				return i*/
        // SubProg rfind pc: 87 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2597
        DeRef(_needle_2597);

// block var haystack_2598
        DeRefDS(_haystack_2598);

// block var start_2599

// block var len_2601
        DeRef(_1160);
        _1160 = NOVALUE;
        return _i_2614;
        // SubProg rfind pc: 91 op: NOP1 (159)
L7: // addr: 92 pc: 91 sub: 2595 op: 159
        // SubProg rfind pc: 92 op: STARTLINE (58)

        /** search.e:565		end for*/
        // SubProg rfind pc: 94 op: ENDFOR_GENERAL (39)
        _i_2614 = _i_2614 + -1;
        goto L5; // [94] 72
L6: // addr: 99 pc: 94 sub: 2595 op: 39
        ;
    }
    // SubProg rfind pc: 99 op: STARTLINE (58)

    /** search.e:567		return 0*/
    // SubProg rfind pc: 101 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2597
    DeRef(_needle_2597);

// block var haystack_2598
    DeRefDS(_haystack_2598);

// block var start_2599

// block var len_2601
    DeRef(_1160);
    _1160 = NOVALUE;
    return 0;
    // SubProg rfind pc: 105 op: BADRETURNF (43)
    ;
}


object _22find_replace(object _needle_2620, object _haystack_2621, object _replacement_2622, object _max_2623)
{
    object _posn_2624 = NOVALUE;
// skipping _1172  name type: 0
    object _1171 = NOVALUE; // 2630 1171
// skipping _1170  name type: 0
// skipping _1169  name type: 0
// skipping _1168  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_replace pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_replace pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_replace pc: 5 op: STARTLINE (58)

    /** search.e:612		integer posn = 0*/
    // SubProg find_replace pc: 7 op: ASSIGN_I (113)
    _posn_2624 = 0;
    // SubProg find_replace pc: 10 op: STARTLINE (58)

    /** search.e:614		while posn != 0 entry do */
    // SubProg find_replace pc: 12 op: ELSE (23)
    goto L1; // [12] 45
    // SubProg find_replace pc: 14 op: NOPWHILE (158)
L2: // addr: 15 pc: 14 sub: 2618 op: 158
    // SubProg find_replace pc: 15 op: NOTEQ_IFW_I (122)
    if (_posn_2624 == 0)
    goto L3; // [15] 61
    // SubProg find_replace pc: 19 op: STARTLINE (58)

    /** search.e:615			haystack[posn] = replacement*/
    // SubProg find_replace pc: 21 op: ASSIGN_SUBS (16)
    Ref(_replacement_2622);
    _2 = (object)SEQ_PTR(_haystack_2621);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2621 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _posn_2624);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _replacement_2622;
    DeRef(_1);
    // SubProg find_replace pc: 25 op: STARTLINE (58)

    /** search.e:616			max -= 1*/
    // SubProg find_replace pc: 27 op: MINUS_I (116)
    _max_2623 = _max_2623 - 1;
    // SubProg find_replace pc: 31 op: STARTLINE (58)

    /** search.e:617			if max = 0 then*/
    // SubProg find_replace pc: 33 op: EQUALS_IFW_I (121)
    if (_max_2623 != 0)
    goto L4; // [33] 42
    // SubProg find_replace pc: 37 op: STARTLINE (58)

    /** search.e:618				exit*/
    // SubProg find_replace pc: 39 op: EXIT (61)
    goto L3; // [39] 61
    // SubProg find_replace pc: 41 op: NOP1 (159)
L4: // addr: 42 pc: 41 sub: 2618 op: 159
    // SubProg find_replace pc: 42 op: STARTLINE (58)

    /** search.e:620		entry*/
    // SubProg find_replace pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 2618 op: 159
    // SubProg find_replace pc: 45 op: STARTLINE (58)

    /** search.e:621			posn = find(needle, haystack, posn + 1)*/
    // SubProg find_replace pc: 47 op: PLUS1 (93)
    _1171 = _posn_2624 + 1;
    if (_1171 > MAXINT){
        _1171 = NewDouble((eudouble)_1171);
    }
    // SubProg find_replace pc: 51 op: FIND_FROM (176)
    _posn_2624 = find_from(_needle_2620, _haystack_2621, _1171);
    DeRef(_1171);
    _1171 = NOVALUE;
    // SubProg find_replace pc: 56 op: STARTLINE (58)

    /** search.e:622		end while*/
    // SubProg find_replace pc: 58 op: ENDWHILE (22)
    goto L2; // [58] 15
    // SubProg find_replace pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 2618 op: 159
    // SubProg find_replace pc: 61 op: STARTLINE (58)

    /** search.e:624		return haystack*/
    // SubProg find_replace pc: 63 op: RETURNF (28)

// Exiting block BLOCK: find_replace

// block var needle_2620
    DeRef(_needle_2620);

// block var replacement_2622
    DeRefi(_replacement_2622);

// block var max_2623

// block var posn_2624
    return _haystack_2621;
    // SubProg find_replace pc: 67 op: BADRETURNF (43)
    ;
}


object _22match_replace(object _needle_2634, object _haystack_2635, object _replacement_2636, object _max_2637)
{
    object _posn_2638 = NOVALUE;
    object _needle_len_2639 = NOVALUE;
    object _replacement_len_2640 = NOVALUE;
    object _scan_from_2641 = NOVALUE;
    object _cnt_2642 = NOVALUE;
// skipping _1188  name type: 0
// skipping _1187  name type: 0
// skipping _1186  name type: 0
// skipping _1185  name type: 0
// skipping _1184  name type: 0
    object _1183 = NOVALUE; // 2658 1183
// skipping _1182  name type: 0
// skipping _1181  name type: 0
    object _1180 = NOVALUE; // 2654 1180
// skipping _1179  name type: 0
    object _1178 = NOVALUE; // 2652 1178
// skipping _1177  name type: 0
    object _1176 = NOVALUE; // 2649 1176
// skipping _1175  name type: 0
// skipping _1174  name type: 0
// skipping _1173  name type: 0
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
    if (IS_SEQUENCE(_haystack_2635)){
            _cnt_2642 = SEQ_PTR(_haystack_2635)->length;
    }
    else {
        _cnt_2642 = 1;
    }
    // SubProg match_replace pc: 23 op: STARTLINE (58)

    /** search.e:697		if max != 0 then*/
    // SubProg match_replace pc: 25 op: NOTEQ_IFW_I (122)
    // SubProg match_replace pc: 35 op: STARTLINE (58)

    /** search.e:701		if atom(needle) then*/
    // SubProg match_replace pc: 37 op: IS_AN_ATOM (67)
    _1176 = IS_ATOM(_needle_2634);
    // SubProg match_replace pc: 40 op: IF (20)
    if (_1176 == 0)
    {
        _1176 = NOVALUE;
        goto L1; // [40] 50
    }
    else{
        _1176 = NOVALUE;
    }
    // SubProg match_replace pc: 43 op: STARTLINE (58)

    /** search.e:702			needle = {needle}*/
    // SubProg match_replace pc: 45 op: RIGHT_BRACE_N (31)
    _0 = _needle_2634;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_needle_2634);
    ((intptr_t*)_2)[1] = _needle_2634;
    _needle_2634 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg match_replace pc: 49 op: NOP1 (159)
L1: // addr: 50 pc: 49 sub: 2632 op: 159
    // SubProg match_replace pc: 50 op: STARTLINE (58)

    /** search.e:704		if atom(replacement) then*/
    // SubProg match_replace pc: 52 op: IS_AN_ATOM (67)
    _1178 = IS_ATOM(_replacement_2636);
    // SubProg match_replace pc: 55 op: IF (20)
    if (_1178 == 0)
    {
        _1178 = NOVALUE;
        goto L2; // [55] 65
    }
    else{
        _1178 = NOVALUE;
    }
    // SubProg match_replace pc: 58 op: STARTLINE (58)

    /** search.e:705			replacement = {replacement}*/
    // SubProg match_replace pc: 60 op: RIGHT_BRACE_N (31)
    _0 = _replacement_2636;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_replacement_2636);
    ((intptr_t*)_2)[1] = _replacement_2636;
    _replacement_2636 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg match_replace pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 2632 op: 159
    // SubProg match_replace pc: 65 op: STARTLINE (58)

    /** search.e:708		needle_len = length(needle) - 1*/
    // SubProg match_replace pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_needle_2634)){
            _1180 = SEQ_PTR(_needle_2634)->length;
    }
    else {
        _1180 = 1;
    }
    // SubProg match_replace pc: 70 op: MINUS_I (116)
    _needle_len_2639 = _1180 - 1;
    _1180 = NOVALUE;
    // SubProg match_replace pc: 74 op: STARTLINE (58)

    /** search.e:709		replacement_len = length(replacement)*/
    // SubProg match_replace pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_replacement_2636)){
            _replacement_len_2640 = SEQ_PTR(_replacement_2636)->length;
    }
    else {
        _replacement_len_2640 = 1;
    }
    // SubProg match_replace pc: 79 op: STARTLINE (58)

    /** search.e:711		scan_from = 1*/
    // SubProg match_replace pc: 81 op: ASSIGN_I (113)
    _scan_from_2641 = 1;
    // SubProg match_replace pc: 84 op: STARTLINE (58)

    /** search.e:712		while posn with entry do*/
    // SubProg match_replace pc: 86 op: ELSE (23)
    goto L3; // [86] 132
    // SubProg match_replace pc: 88 op: NOPWHILE (158)
L4: // addr: 89 pc: 88 sub: 2632 op: 158
    // SubProg match_replace pc: 89 op: PRIVATE_INIT_CHECK (30)
    // SubProg match_replace pc: 91 op: WHILE (47)
    if (_posn_2638 == 0)
    {
        goto L5; // [91] 144
    }
    else{
    }
    // SubProg match_replace pc: 94 op: STARTLINE (58)

    /** search.e:713			haystack = replace(haystack, replacement, posn, posn + needle_len)*/
    // SubProg match_replace pc: 96 op: PLUS (11)
    _1183 = _posn_2638 + _needle_len_2639;
    if ((object)((uintptr_t)_1183 + (uintptr_t)HIGH_BITS) >= 0){
        _1183 = NewDouble((eudouble)_1183);
    }
    // SubProg match_replace pc: 100 op: REPLACE (201)
    {
        intptr_t p1 = _haystack_2635;
        intptr_t p2 = _replacement_2636;
        intptr_t p3 = _posn_2638;
        intptr_t p4 = _1183;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_haystack_2635;
        Replace( &replace_params );
    }
    DeRef(_1183);
    _1183 = NOVALUE;
    // SubProg match_replace pc: 106 op: STARTLINE (58)

    /** search.e:715			cnt -= 1*/
    // SubProg match_replace pc: 108 op: MINUS_I (116)
    _cnt_2642 = _cnt_2642 - 1;
    // SubProg match_replace pc: 112 op: STARTLINE (58)

    /** search.e:716			if cnt = 0 then*/
    // SubProg match_replace pc: 114 op: EQUALS_IFW_I (121)
    if (_cnt_2642 != 0)
    goto L6; // [114] 123
    // SubProg match_replace pc: 118 op: STARTLINE (58)

    /** search.e:717				exit*/
    // SubProg match_replace pc: 120 op: EXIT (61)
    goto L5; // [120] 144
    // SubProg match_replace pc: 122 op: NOP1 (159)
L6: // addr: 123 pc: 122 sub: 2632 op: 159
    // SubProg match_replace pc: 123 op: STARTLINE (58)

    /** search.e:719			scan_from = posn + replacement_len*/
    // SubProg match_replace pc: 125 op: PLUS_I (115)
    _scan_from_2641 = _posn_2638 + _replacement_len_2640;
    // SubProg match_replace pc: 129 op: STARTLINE (58)

    /** search.e:720		entry*/
    // SubProg match_replace pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 2632 op: 159
    // SubProg match_replace pc: 132 op: STARTLINE (58)

    /** search.e:721			posn = match(needle, haystack, scan_from)*/
    // SubProg match_replace pc: 134 op: MATCH_FROM (177)
    _posn_2638 = e_match_from(_needle_2634, _haystack_2635, _scan_from_2641);
    // SubProg match_replace pc: 139 op: STARTLINE (58)

    /** search.e:722		end while*/
    // SubProg match_replace pc: 141 op: ENDWHILE (22)
    goto L4; // [141] 89
    // SubProg match_replace pc: 143 op: NOP1 (159)
L5: // addr: 144 pc: 143 sub: 2632 op: 159
    // SubProg match_replace pc: 144 op: STARTLINE (58)

    /** search.e:724		return haystack*/
    // SubProg match_replace pc: 146 op: RETURNF (28)

// Exiting block BLOCK: match_replace

// block var needle_2634
    DeRef(_needle_2634);

// block var replacement_2636
    DeRef(_replacement_2636);

// block var max_2637

// block var posn_2638

// block var needle_len_2639

// block var replacement_len_2640

// block var scan_from_2641

// block var cnt_2642
    return _haystack_2635;
    // SubProg match_replace pc: 150 op: BADRETURNF (43)
    ;
}


object _22begins(object _sub_text_2755, object _full_text_2756)
{
    object _1247 = NOVALUE; // 2773 1247
    object _1246 = NOVALUE; // 2772 1246
    object _1245 = NOVALUE; // 2771 1245
// skipping _1244  name type: 0
    object _1243 = NOVALUE; // 2768 1243
    object _1242 = NOVALUE; // 2767 1242
    object _1241 = NOVALUE; // 2764 1241
    object _1240 = NOVALUE; // 2763 1240
    object _1239 = NOVALUE; // 2761 1239
// skipping _1238  name type: 0
    object _1237 = NOVALUE; // 2758 1237
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg begins pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg begins pc: 3 op: STARTLINE (58)

    /** search.e:976		if length(full_text) = 0 then*/
    // SubProg begins pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2756)){
            _1237 = SEQ_PTR(_full_text_2756)->length;
    }
    else {
        _1237 = 1;
    }
    // SubProg begins pc: 8 op: EQUALS_IFW_I (121)
    if (_1237 != 0)
    goto L1; // [8] 19
    // SubProg begins pc: 12 op: STARTLINE (58)

    /** search.e:977			return 0*/
    // SubProg begins pc: 14 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2755
    DeRef(_sub_text_2755);

// block var full_text_2756
    DeRefDS(_full_text_2756);
    return 0;
    // SubProg begins pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 2753 op: 159
    // SubProg begins pc: 19 op: STARTLINE (58)

    /** search.e:980		if atom(sub_text) then*/
    // SubProg begins pc: 21 op: IS_AN_ATOM (67)
    _1239 = IS_ATOM(_sub_text_2755);
    // SubProg begins pc: 24 op: IF (20)
    if (_1239 == 0)
    {
        _1239 = NOVALUE;
        goto L2; // [24] 57
    }
    else{
        _1239 = NOVALUE;
    }
    // SubProg begins pc: 27 op: STARTLINE (58)

    /** search.e:981			if equal(sub_text, full_text[1]) then*/
    // SubProg begins pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_full_text_2756);
    _1240 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg begins pc: 33 op: EQUAL (153)
    if (_sub_text_2755 == _1240)
    _1241 = 1;
    else if (IS_ATOM_INT(_sub_text_2755) && IS_ATOM_INT(_1240))
    _1241 = 0;
    else
    _1241 = (compare(_sub_text_2755, _1240) == 0);
    _1240 = NOVALUE;
    // SubProg begins pc: 37 op: IF (20)
    if (_1241 == 0)
    {
        _1241 = NOVALUE;
        goto L3; // [37] 49
    }
    else{
        _1241 = NOVALUE;
    }
    // SubProg begins pc: 40 op: STARTLINE (58)

    /** search.e:982				return 1*/
    // SubProg begins pc: 42 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2755
    DeRef(_sub_text_2755);

// block var full_text_2756
    DeRefDS(_full_text_2756);
    return 1;
    // SubProg begins pc: 46 op: ELSE (23)
    goto L4; // [46] 56
    // SubProg begins pc: 48 op: NOP1 (159)
L3: // addr: 49 pc: 48 sub: 2753 op: 159
    // SubProg begins pc: 49 op: STARTLINE (58)

    /** search.e:984				return 0*/
    // SubProg begins pc: 51 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2755
    DeRef(_sub_text_2755);

// block var full_text_2756
    DeRefDS(_full_text_2756);
    return 0;
    // SubProg begins pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 2753 op: 159
    // SubProg begins pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 2753 op: 159
    // SubProg begins pc: 57 op: STARTLINE (58)

    /** search.e:988		if length(sub_text) > length(full_text) then*/
    // SubProg begins pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2755)){
            _1242 = SEQ_PTR(_sub_text_2755)->length;
    }
    else {
        _1242 = 1;
    }
    // SubProg begins pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2756)){
            _1243 = SEQ_PTR(_full_text_2756)->length;
    }
    else {
        _1243 = 1;
    }
    // SubProg begins pc: 65 op: GREATER_IFW_I (124)
    if (_1242 <= _1243)
    goto L5; // [65] 76
    // SubProg begins pc: 69 op: STARTLINE (58)

    /** search.e:989			return 0*/
    // SubProg begins pc: 71 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2755
    DeRef(_sub_text_2755);

// block var full_text_2756
    DeRefDS(_full_text_2756);
    return 0;
    // SubProg begins pc: 75 op: NOP1 (159)
L5: // addr: 76 pc: 75 sub: 2753 op: 159
    // SubProg begins pc: 76 op: STARTLINE (58)

    /** search.e:992		if equal(sub_text, full_text[1.. length(sub_text)]) then*/
    // SubProg begins pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2755)){
            _1245 = SEQ_PTR(_sub_text_2755)->length;
    }
    else {
        _1245 = 1;
    }
    // SubProg begins pc: 81 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1246;
    RHS_Slice(_full_text_2756, 1, _1245);
    // SubProg begins pc: 86 op: EQUAL (153)
    if (_sub_text_2755 == _1246)
    _1247 = 1;
    else if (IS_ATOM_INT(_sub_text_2755) && IS_ATOM_INT(_1246))
    _1247 = 0;
    else
    _1247 = (compare(_sub_text_2755, _1246) == 0);
    DeRefDS(_1246);
    _1246 = NOVALUE;
    // SubProg begins pc: 90 op: IF (20)
    if (_1247 == 0)
    {
        _1247 = NOVALUE;
        goto L6; // [90] 102
    }
    else{
        _1247 = NOVALUE;
    }
    // SubProg begins pc: 93 op: STARTLINE (58)

    /** search.e:993			return 1*/
    // SubProg begins pc: 95 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2755
    DeRef(_sub_text_2755);

// block var full_text_2756
    DeRefDS(_full_text_2756);
    return 1;
    // SubProg begins pc: 99 op: ELSE (23)
    goto L7; // [99] 109
    // SubProg begins pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 2753 op: 159
    // SubProg begins pc: 102 op: STARTLINE (58)

    /** search.e:995			return 0*/
    // SubProg begins pc: 104 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2755
    DeRef(_sub_text_2755);

// block var full_text_2756
    DeRefDS(_full_text_2756);
    return 0;
    // SubProg begins pc: 108 op: NOP1 (159)
L7: // addr: 109 pc: 108 sub: 2753 op: 159
    // SubProg begins pc: 109 op: BADRETURNF (43)
    ;
}


object _22ends(object _sub_text_2777, object _full_text_2778)
{
    object _1263 = NOVALUE; // 2800 1263
    object _1262 = NOVALUE; // 2799 1262
    object _1261 = NOVALUE; // 2798 1261
    object _1260 = NOVALUE; // 2797 1260
    object _1259 = NOVALUE; // 2796 1259
    object _1258 = NOVALUE; // 2795 1258
    object _1257 = NOVALUE; // 2794 1257
// skipping _1256  name type: 0
    object _1255 = NOVALUE; // 2791 1255
    object _1254 = NOVALUE; // 2790 1254
    object _1253 = NOVALUE; // 2787 1253
    object _1252 = NOVALUE; // 2786 1252
    object _1251 = NOVALUE; // 2785 1251
    object _1250 = NOVALUE; // 2783 1250
// skipping _1249  name type: 0
    object _1248 = NOVALUE; // 2780 1248
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ends pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ends pc: 3 op: STARTLINE (58)

    /** search.e:1026		if length(full_text) = 0 then*/
    // SubProg ends pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2778)){
            _1248 = SEQ_PTR(_full_text_2778)->length;
    }
    else {
        _1248 = 1;
    }
    // SubProg ends pc: 8 op: EQUALS_IFW_I (121)
    if (_1248 != 0)
    goto L1; // [8] 19
    // SubProg ends pc: 12 op: STARTLINE (58)

    /** search.e:1027			return 0*/
    // SubProg ends pc: 14 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2777
    DeRefDSi(_sub_text_2777);

// block var full_text_2778
    DeRefDS(_full_text_2778);
    return 0;
    // SubProg ends pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 2775 op: 159
    // SubProg ends pc: 19 op: STARTLINE (58)

    /** search.e:1030		if atom(sub_text) then*/
    // SubProg ends pc: 21 op: IS_AN_ATOM (67)
    _1250 = IS_ATOM(_sub_text_2777);
    // SubProg ends pc: 24 op: IF (20)
    if (_1250 == 0)
    {
        _1250 = NOVALUE;
        goto L2; // [24] 60
    }
    else{
        _1250 = NOVALUE;
    }
    // SubProg ends pc: 27 op: STARTLINE (58)

    /** search.e:1031			if equal(sub_text, full_text[$]) then*/
    // SubProg ends pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2778)){
            _1251 = SEQ_PTR(_full_text_2778)->length;
    }
    else {
        _1251 = 1;
    }
    // SubProg ends pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_full_text_2778);
    _1252 = (object)*(((s1_ptr)_2)->base + _1251);
    // SubProg ends pc: 36 op: EQUAL (153)
    if (_sub_text_2777 == _1252)
    _1253 = 1;
    else if (IS_ATOM_INT(_sub_text_2777) && IS_ATOM_INT(_1252))
    _1253 = 0;
    else
    _1253 = (compare(_sub_text_2777, _1252) == 0);
    _1252 = NOVALUE;
    // SubProg ends pc: 40 op: IF (20)
    if (_1253 == 0)
    {
        _1253 = NOVALUE;
        goto L3; // [40] 52
    }
    else{
        _1253 = NOVALUE;
    }
    // SubProg ends pc: 43 op: STARTLINE (58)

    /** search.e:1032				return 1*/
    // SubProg ends pc: 45 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2777
    DeRefi(_sub_text_2777);

// block var full_text_2778
    DeRefDS(_full_text_2778);
    return 1;
    // SubProg ends pc: 49 op: ELSE (23)
    goto L4; // [49] 59
    // SubProg ends pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 2775 op: 159
    // SubProg ends pc: 52 op: STARTLINE (58)

    /** search.e:1034				return 0*/
    // SubProg ends pc: 54 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2777
    DeRefi(_sub_text_2777);

// block var full_text_2778
    DeRefDS(_full_text_2778);
    return 0;
    // SubProg ends pc: 58 op: NOP1 (159)
L4: // addr: 59 pc: 58 sub: 2775 op: 159
    // SubProg ends pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 2775 op: 159
    // SubProg ends pc: 60 op: STARTLINE (58)

    /** search.e:1038		if length(sub_text) > length(full_text) then*/
    // SubProg ends pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2777)){
            _1254 = SEQ_PTR(_sub_text_2777)->length;
    }
    else {
        _1254 = 1;
    }
    // SubProg ends pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2778)){
            _1255 = SEQ_PTR(_full_text_2778)->length;
    }
    else {
        _1255 = 1;
    }
    // SubProg ends pc: 68 op: GREATER_IFW_I (124)
    if (_1254 <= _1255)
    goto L5; // [68] 79
    // SubProg ends pc: 72 op: STARTLINE (58)

    /** search.e:1039			return 0*/
    // SubProg ends pc: 74 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2777
    DeRefi(_sub_text_2777);

// block var full_text_2778
    DeRefDS(_full_text_2778);
    return 0;
    // SubProg ends pc: 78 op: NOP1 (159)
L5: // addr: 79 pc: 78 sub: 2775 op: 159
    // SubProg ends pc: 79 op: STARTLINE (58)

    /** search.e:1042		if equal(sub_text, full_text[$ - length(sub_text) + 1 .. $]) then*/
    // SubProg ends pc: 81 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2778)){
            _1257 = SEQ_PTR(_full_text_2778)->length;
    }
    else {
        _1257 = 1;
    }
    // SubProg ends pc: 84 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2777)){
            _1258 = SEQ_PTR(_sub_text_2777)->length;
    }
    else {
        _1258 = 1;
    }
    // SubProg ends pc: 87 op: MINUS (10)
    _1259 = _1257 - _1258;
    _1257 = NOVALUE;
    _1258 = NOVALUE;
    // SubProg ends pc: 91 op: PLUS1 (93)
    _1260 = _1259 + 1;
    _1259 = NOVALUE;
    // SubProg ends pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2778)){
            _1261 = SEQ_PTR(_full_text_2778)->length;
    }
    else {
        _1261 = 1;
    }
    // SubProg ends pc: 98 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1262;
    RHS_Slice(_full_text_2778, _1260, _1261);
    // SubProg ends pc: 103 op: EQUAL (153)
    if (_sub_text_2777 == _1262)
    _1263 = 1;
    else if (IS_ATOM_INT(_sub_text_2777) && IS_ATOM_INT(_1262))
    _1263 = 0;
    else
    _1263 = (compare(_sub_text_2777, _1262) == 0);
    DeRefDS(_1262);
    _1262 = NOVALUE;
    // SubProg ends pc: 107 op: IF (20)
    if (_1263 == 0)
    {
        _1263 = NOVALUE;
        goto L6; // [107] 119
    }
    else{
        _1263 = NOVALUE;
    }
    // SubProg ends pc: 110 op: STARTLINE (58)

    /** search.e:1043			return 1*/
    // SubProg ends pc: 112 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2777
    DeRefi(_sub_text_2777);

// block var full_text_2778
    DeRefDS(_full_text_2778);
    _1260 = NOVALUE;
    return 1;
    // SubProg ends pc: 116 op: ELSE (23)
    goto L7; // [116] 126
    // SubProg ends pc: 118 op: NOP1 (159)
L6: // addr: 119 pc: 118 sub: 2775 op: 159
    // SubProg ends pc: 119 op: STARTLINE (58)

    /** search.e:1045			return 0*/
    // SubProg ends pc: 121 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2777
    DeRefi(_sub_text_2777);

// block var full_text_2778
    DeRefDS(_full_text_2778);
    DeRef(_1260);
    _1260 = NOVALUE;
    return 0;
    // SubProg ends pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 2775 op: 159
    // SubProg ends pc: 126 op: BADRETURNF (43)
    ;
}



// 0x77EA0B66
