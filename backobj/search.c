// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _17find_all(object _needle_2468, object _haystack_2469, object _start_2470)
{
    object _kx_2471 = NOVALUE;
// skipping _1105  name type: 0
    object _1104 = NOVALUE; // 2477 1104
    object _1103 = NOVALUE; // 2476 1103
// skipping _1102  name type: 0
// skipping _1101  name type: 0
// skipping _1100  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_all pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_all pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_all pc: 5 op: STARTLINE (58)

    /** search.e:292		integer kx = 0*/
    // SubProg find_all pc: 7 op: ASSIGN_I (113)
    _kx_2471 = 0;
    // SubProg find_all pc: 10 op: STARTLINE (58)

    /** search.e:293		while start with entry do*/
    // SubProg find_all pc: 12 op: ELSE (23)
    goto L1; // [12] 39
    // SubProg find_all pc: 14 op: NOPWHILE (158)
L2: // addr: 15 pc: 14 sub: 2466 op: 158
    // SubProg find_all pc: 15 op: WHILE (47)
    if (_start_2470 == 0)
    {
        goto L3; // [15] 51
    }
    else{
    }
    // SubProg find_all pc: 18 op: STARTLINE (58)

    /** search.e:294			kx += 1*/
    // SubProg find_all pc: 20 op: PLUS1_I (117)
    _kx_2471 = _kx_2471 + 1;
    // SubProg find_all pc: 24 op: STARTLINE (58)

    /** search.e:295			haystack[kx] = start*/
    // SubProg find_all pc: 26 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_haystack_2469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _kx_2471);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _start_2470;
    DeRef(_1);
    // SubProg find_all pc: 30 op: STARTLINE (58)

    /** search.e:296			start += 1*/
    // SubProg find_all pc: 32 op: PLUS1_I (117)
    _start_2470 = _start_2470 + 1;
    // SubProg find_all pc: 36 op: STARTLINE (58)

    /** search.e:297		entry*/
    // SubProg find_all pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 2466 op: 159
    // SubProg find_all pc: 39 op: STARTLINE (58)

    /** search.e:298			start = find(needle, haystack, start)*/
    // SubProg find_all pc: 41 op: FIND_FROM (176)
    _start_2470 = find_from(_needle_2468, _haystack_2469, _start_2470);
    // SubProg find_all pc: 46 op: STARTLINE (58)

    /** search.e:299		end while*/
    // SubProg find_all pc: 48 op: ENDWHILE (22)
    goto L2; // [48] 15
    // SubProg find_all pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 2466 op: 159
    // SubProg find_all pc: 51 op: STARTLINE (58)

    /** search.e:301		haystack = remove( haystack, kx+1, length( haystack ) )*/
    // SubProg find_all pc: 53 op: PLUS1 (93)
    _1103 = _kx_2471 + 1;
    if (_1103 > MAXINT){
        _1103 = NewDouble((eudouble)_1103);
    }
    // SubProg find_all pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_2469)){
            _1104 = SEQ_PTR(_haystack_2469)->length;
    }
    else {
        _1104 = 1;
    }
    // SubProg find_all pc: 60 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_haystack_2469);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_1103)) ? _1103 : (object)(DBL_PTR(_1103)->dbl);
        int stop = (IS_ATOM_INT(_1104)) ? _1104 : (object)(DBL_PTR(_1104)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_haystack_2469), start, &_haystack_2469 );
            }
            else Tail(SEQ_PTR(_haystack_2469), stop+1, &_haystack_2469);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_haystack_2469), start, &_haystack_2469);
        }
        else {
            assign_slice_seq = &assign_space;
            _haystack_2469 = Remove_elements(start, stop, (SEQ_PTR(_haystack_2469)->ref == 1));
        }
    }
    DeRef(_1103);
    _1103 = NOVALUE;
    _1104 = NOVALUE;
    // SubProg find_all pc: 65 op: STARTLINE (58)

    /** search.e:302		return haystack*/
    // SubProg find_all pc: 67 op: RETURNF (28)

// Exiting block BLOCK: find_all

// block var needle_2468

// block var start_2470

// block var kx_2471
    return _haystack_2469;
    // SubProg find_all pc: 71 op: BADRETURNF (43)
    ;
}


object _17rfind(object _needle_2586, object _haystack_2587, object _start_2588)
{
    object _len_2590 = NOVALUE;
    object _1165 = NOVALUE; // 2606 1165
    object _1164 = NOVALUE; // 2605 1164
// skipping _1163  name type: 0
// skipping _1162  name type: 0
    object _1161 = NOVALUE; // 2598 1161
    object _1160 = NOVALUE; // 2597 1160
// skipping _1159  name type: 0
    object _1158 = NOVALUE; // 2595 1158
// skipping _1157  name type: 0
// skipping _1156  name type: 0
// skipping _1155  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rfind pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg rfind pc: 3 op: INTEGER_CHECK (96)
    // SubProg rfind pc: 5 op: STARTLINE (58)

    /** search.e:550		integer len = length(haystack)*/
    // SubProg rfind pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_2587)){
            _len_2590 = SEQ_PTR(_haystack_2587)->length;
    }
    else {
        _len_2590 = 1;
    }
    // SubProg rfind pc: 10 op: STARTLINE (58)

    /** search.e:552		if start = 0 then start = len end if*/
    // SubProg rfind pc: 12 op: EQUALS_IFW_I (121)
    if (_start_2588 != 0)
    goto L1; // [12] 20
    // SubProg rfind pc: 16 op: ASSIGN_I (113)
    _start_2588 = _len_2590;
    // SubProg rfind pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 2584 op: 159
    // SubProg rfind pc: 20 op: STARTLINE (58)

    /** search.e:553		if (start > len) or (len + start < 1) then*/
    // SubProg rfind pc: 22 op: GREATER (6)
    _1158 = (_start_2588 > _len_2590);
    // SubProg rfind pc: 26 op: SC1_OR_IF (147)
    if (_1158 != 0) {
        goto L2; // [26] 43
    }
    // SubProg rfind pc: 30 op: PLUS (11)
    _1160 = _len_2590 + _start_2588;
    if ((object)((uintptr_t)_1160 + (uintptr_t)HIGH_BITS) >= 0){
        _1160 = NewDouble((eudouble)_1160);
    }
    // SubProg rfind pc: 34 op: LESS (1)
    if (IS_ATOM_INT(_1160)) {
        _1161 = (_1160 < 1);
    }
    else {
        _1161 = (DBL_PTR(_1160)->dbl < (eudouble)1);
    }
    DeRef(_1160);
    _1160 = NOVALUE;
    // SubProg rfind pc: 38 op: NOP1 (159)
    // SubProg rfind pc: 39 op: IF (20)
    if (_1161 == 0)
    {
        DeRef(_1161);
        _1161 = NOVALUE;
        goto L3; // [39] 50
    }
    else{
        DeRef(_1161);
        _1161 = NOVALUE;
    }
    // SubProg rfind pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 2584 op: 159
    // SubProg rfind pc: 43 op: STARTLINE (58)

    /** search.e:554			return 0*/
    // SubProg rfind pc: 45 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2586
    DeRef(_needle_2586);

// block var haystack_2587
    DeRefDS(_haystack_2587);

// block var start_2588

// block var len_2590
    DeRef(_1158);
    _1158 = NOVALUE;
    return 0;
    // SubProg rfind pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 2584 op: 159
    // SubProg rfind pc: 50 op: STARTLINE (58)

    /** search.e:557		if start < 1 then*/
    // SubProg rfind pc: 52 op: LESS_IFW_I (119)
    if (_start_2588 >= 1)
    goto L4; // [52] 63
    // SubProg rfind pc: 56 op: STARTLINE (58)

    /** search.e:558			start = len + start*/
    // SubProg rfind pc: 58 op: PLUS_I (115)
    _start_2588 = _len_2590 + _start_2588;
    // SubProg rfind pc: 62 op: NOP1 (159)
L4: // addr: 63 pc: 62 sub: 2584 op: 159
    // SubProg rfind pc: 63 op: STARTLINE (58)

    /** search.e:561		for i = start to 1 by -1 do*/
    // SubProg rfind pc: 65 op: FOR_I (125)
    {
        object _i_2603;
        _i_2603 = _start_2588;
L5: // addr: 72 pc: 65 sub: 2584 op: 125
        if (_i_2603 < 1){
            goto L6; // [65] 99
        }
        // SubProg rfind pc: 72 op: STARTLINE (58)

        /** search.e:562			if equal(haystack[i], needle) then*/
        // SubProg rfind pc: 74 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_haystack_2587);
        _1164 = (object)*(((s1_ptr)_2)->base + _i_2603);
        // SubProg rfind pc: 78 op: EQUAL (153)
        if (_1164 == _needle_2586)
        _1165 = 1;
        else if (IS_ATOM_INT(_1164) && IS_ATOM_INT(_needle_2586))
        _1165 = 0;
        else
        _1165 = (compare(_1164, _needle_2586) == 0);
        _1164 = NOVALUE;
        // SubProg rfind pc: 82 op: IF (20)
        if (_1165 == 0)
        {
            _1165 = NOVALUE;
            goto L7; // [82] 92
        }
        else{
            _1165 = NOVALUE;
        }
        // SubProg rfind pc: 85 op: STARTLINE (58)

        /** search.e:563				return i*/
        // SubProg rfind pc: 87 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2586
        DeRef(_needle_2586);

// block var haystack_2587
        DeRefDS(_haystack_2587);

// block var start_2588

// block var len_2590
        DeRef(_1158);
        _1158 = NOVALUE;
        return _i_2603;
        // SubProg rfind pc: 91 op: NOP1 (159)
L7: // addr: 92 pc: 91 sub: 2584 op: 159
        // SubProg rfind pc: 92 op: STARTLINE (58)

        /** search.e:565		end for*/
        // SubProg rfind pc: 94 op: ENDFOR_GENERAL (39)
        _i_2603 = _i_2603 + -1;
        goto L5; // [94] 72
L6: // addr: 99 pc: 94 sub: 2584 op: 39
        ;
    }
    // SubProg rfind pc: 99 op: STARTLINE (58)

    /** search.e:567		return 0*/
    // SubProg rfind pc: 101 op: RETURNF (28)

// Exiting block BLOCK: rfind

// block var needle_2586
    DeRef(_needle_2586);

// block var haystack_2587
    DeRefDS(_haystack_2587);

// block var start_2588

// block var len_2590
    DeRef(_1158);
    _1158 = NOVALUE;
    return 0;
    // SubProg rfind pc: 105 op: BADRETURNF (43)
    ;
}


object _17find_replace(object _needle_2609, object _haystack_2610, object _replacement_2611, object _max_2612)
{
    object _posn_2613 = NOVALUE;
// skipping _1170  name type: 0
    object _1169 = NOVALUE; // 2619 1169
// skipping _1168  name type: 0
// skipping _1167  name type: 0
// skipping _1166  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_replace pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_replace pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_replace pc: 5 op: STARTLINE (58)

    /** search.e:612		integer posn = 0*/
    // SubProg find_replace pc: 7 op: ASSIGN_I (113)
    _posn_2613 = 0;
    // SubProg find_replace pc: 10 op: STARTLINE (58)

    /** search.e:614		while posn != 0 entry do */
    // SubProg find_replace pc: 12 op: ELSE (23)
    goto L1; // [12] 45
    // SubProg find_replace pc: 14 op: NOPWHILE (158)
L2: // addr: 15 pc: 14 sub: 2607 op: 158
    // SubProg find_replace pc: 15 op: NOTEQ_IFW_I (122)
    if (_posn_2613 == 0)
    goto L3; // [15] 61
    // SubProg find_replace pc: 19 op: STARTLINE (58)

    /** search.e:615			haystack[posn] = replacement*/
    // SubProg find_replace pc: 21 op: ASSIGN_SUBS (16)
    Ref(_replacement_2611);
    _2 = (object)SEQ_PTR(_haystack_2610);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2610 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _posn_2613);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _replacement_2611;
    DeRef(_1);
    // SubProg find_replace pc: 25 op: STARTLINE (58)

    /** search.e:616			max -= 1*/
    // SubProg find_replace pc: 27 op: MINUS_I (116)
    _max_2612 = _max_2612 - 1;
    // SubProg find_replace pc: 31 op: STARTLINE (58)

    /** search.e:617			if max = 0 then*/
    // SubProg find_replace pc: 33 op: EQUALS_IFW_I (121)
    if (_max_2612 != 0)
    goto L4; // [33] 42
    // SubProg find_replace pc: 37 op: STARTLINE (58)

    /** search.e:618				exit*/
    // SubProg find_replace pc: 39 op: EXIT (61)
    goto L3; // [39] 61
    // SubProg find_replace pc: 41 op: NOP1 (159)
L4: // addr: 42 pc: 41 sub: 2607 op: 159
    // SubProg find_replace pc: 42 op: STARTLINE (58)

    /** search.e:620		entry*/
    // SubProg find_replace pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 2607 op: 159
    // SubProg find_replace pc: 45 op: STARTLINE (58)

    /** search.e:621			posn = find(needle, haystack, posn + 1)*/
    // SubProg find_replace pc: 47 op: PLUS1 (93)
    _1169 = _posn_2613 + 1;
    if (_1169 > MAXINT){
        _1169 = NewDouble((eudouble)_1169);
    }
    // SubProg find_replace pc: 51 op: FIND_FROM (176)
    _posn_2613 = find_from(_needle_2609, _haystack_2610, _1169);
    DeRef(_1169);
    _1169 = NOVALUE;
    // SubProg find_replace pc: 56 op: STARTLINE (58)

    /** search.e:622		end while*/
    // SubProg find_replace pc: 58 op: ENDWHILE (22)
    goto L2; // [58] 15
    // SubProg find_replace pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 2607 op: 159
    // SubProg find_replace pc: 61 op: STARTLINE (58)

    /** search.e:624		return haystack*/
    // SubProg find_replace pc: 63 op: RETURNF (28)

// Exiting block BLOCK: find_replace

// block var needle_2609
    DeRef(_needle_2609);

// block var replacement_2611
    DeRefi(_replacement_2611);

// block var max_2612

// block var posn_2613
    return _haystack_2610;
    // SubProg find_replace pc: 67 op: BADRETURNF (43)
    ;
}


object _17match_replace(object _needle_2623, object _haystack_2624, object _replacement_2625, object _max_2626)
{
    object _posn_2627 = NOVALUE;
    object _needle_len_2628 = NOVALUE;
    object _replacement_len_2629 = NOVALUE;
    object _scan_from_2630 = NOVALUE;
    object _cnt_2631 = NOVALUE;
// skipping _1186  name type: 0
// skipping _1185  name type: 0
// skipping _1184  name type: 0
// skipping _1183  name type: 0
// skipping _1182  name type: 0
    object _1181 = NOVALUE; // 2647 1181
// skipping _1180  name type: 0
// skipping _1179  name type: 0
    object _1178 = NOVALUE; // 2643 1178
// skipping _1177  name type: 0
    object _1176 = NOVALUE; // 2641 1176
// skipping _1175  name type: 0
    object _1174 = NOVALUE; // 2638 1174
// skipping _1173  name type: 0
// skipping _1172  name type: 0
// skipping _1171  name type: 0
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
    if (IS_SEQUENCE(_haystack_2624)){
            _cnt_2631 = SEQ_PTR(_haystack_2624)->length;
    }
    else {
        _cnt_2631 = 1;
    }
    // SubProg match_replace pc: 23 op: STARTLINE (58)

    /** search.e:697		if max != 0 then*/
    // SubProg match_replace pc: 25 op: NOTEQ_IFW_I (122)
    // SubProg match_replace pc: 35 op: STARTLINE (58)

    /** search.e:701		if atom(needle) then*/
    // SubProg match_replace pc: 37 op: IS_AN_ATOM (67)
    _1174 = IS_ATOM(_needle_2623);
    // SubProg match_replace pc: 40 op: IF (20)
    if (_1174 == 0)
    {
        _1174 = NOVALUE;
        goto L1; // [40] 50
    }
    else{
        _1174 = NOVALUE;
    }
    // SubProg match_replace pc: 43 op: STARTLINE (58)

    /** search.e:702			needle = {needle}*/
    // SubProg match_replace pc: 45 op: RIGHT_BRACE_N (31)
    _0 = _needle_2623;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_needle_2623);
    ((intptr_t*)_2)[1] = _needle_2623;
    _needle_2623 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg match_replace pc: 49 op: NOP1 (159)
L1: // addr: 50 pc: 49 sub: 2621 op: 159
    // SubProg match_replace pc: 50 op: STARTLINE (58)

    /** search.e:704		if atom(replacement) then*/
    // SubProg match_replace pc: 52 op: IS_AN_ATOM (67)
    _1176 = IS_ATOM(_replacement_2625);
    // SubProg match_replace pc: 55 op: IF (20)
    if (_1176 == 0)
    {
        _1176 = NOVALUE;
        goto L2; // [55] 65
    }
    else{
        _1176 = NOVALUE;
    }
    // SubProg match_replace pc: 58 op: STARTLINE (58)

    /** search.e:705			replacement = {replacement}*/
    // SubProg match_replace pc: 60 op: RIGHT_BRACE_N (31)
    _0 = _replacement_2625;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_replacement_2625);
    ((intptr_t*)_2)[1] = _replacement_2625;
    _replacement_2625 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg match_replace pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 2621 op: 159
    // SubProg match_replace pc: 65 op: STARTLINE (58)

    /** search.e:708		needle_len = length(needle) - 1*/
    // SubProg match_replace pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_needle_2623)){
            _1178 = SEQ_PTR(_needle_2623)->length;
    }
    else {
        _1178 = 1;
    }
    // SubProg match_replace pc: 70 op: MINUS_I (116)
    _needle_len_2628 = _1178 - 1;
    _1178 = NOVALUE;
    // SubProg match_replace pc: 74 op: STARTLINE (58)

    /** search.e:709		replacement_len = length(replacement)*/
    // SubProg match_replace pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_replacement_2625)){
            _replacement_len_2629 = SEQ_PTR(_replacement_2625)->length;
    }
    else {
        _replacement_len_2629 = 1;
    }
    // SubProg match_replace pc: 79 op: STARTLINE (58)

    /** search.e:711		scan_from = 1*/
    // SubProg match_replace pc: 81 op: ASSIGN_I (113)
    _scan_from_2630 = 1;
    // SubProg match_replace pc: 84 op: STARTLINE (58)

    /** search.e:712		while posn with entry do*/
    // SubProg match_replace pc: 86 op: ELSE (23)
    goto L3; // [86] 132
    // SubProg match_replace pc: 88 op: NOPWHILE (158)
L4: // addr: 89 pc: 88 sub: 2621 op: 158
    // SubProg match_replace pc: 89 op: PRIVATE_INIT_CHECK (30)
    // SubProg match_replace pc: 91 op: WHILE (47)
    if (_posn_2627 == 0)
    {
        goto L5; // [91] 144
    }
    else{
    }
    // SubProg match_replace pc: 94 op: STARTLINE (58)

    /** search.e:713			haystack = replace(haystack, replacement, posn, posn + needle_len)*/
    // SubProg match_replace pc: 96 op: PLUS (11)
    _1181 = _posn_2627 + _needle_len_2628;
    if ((object)((uintptr_t)_1181 + (uintptr_t)HIGH_BITS) >= 0){
        _1181 = NewDouble((eudouble)_1181);
    }
    // SubProg match_replace pc: 100 op: REPLACE (201)
    {
        intptr_t p1 = _haystack_2624;
        intptr_t p2 = _replacement_2625;
        intptr_t p3 = _posn_2627;
        intptr_t p4 = _1181;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_haystack_2624;
        Replace( &replace_params );
    }
    DeRef(_1181);
    _1181 = NOVALUE;
    // SubProg match_replace pc: 106 op: STARTLINE (58)

    /** search.e:715			cnt -= 1*/
    // SubProg match_replace pc: 108 op: MINUS_I (116)
    _cnt_2631 = _cnt_2631 - 1;
    // SubProg match_replace pc: 112 op: STARTLINE (58)

    /** search.e:716			if cnt = 0 then*/
    // SubProg match_replace pc: 114 op: EQUALS_IFW_I (121)
    if (_cnt_2631 != 0)
    goto L6; // [114] 123
    // SubProg match_replace pc: 118 op: STARTLINE (58)

    /** search.e:717				exit*/
    // SubProg match_replace pc: 120 op: EXIT (61)
    goto L5; // [120] 144
    // SubProg match_replace pc: 122 op: NOP1 (159)
L6: // addr: 123 pc: 122 sub: 2621 op: 159
    // SubProg match_replace pc: 123 op: STARTLINE (58)

    /** search.e:719			scan_from = posn + replacement_len*/
    // SubProg match_replace pc: 125 op: PLUS_I (115)
    _scan_from_2630 = _posn_2627 + _replacement_len_2629;
    // SubProg match_replace pc: 129 op: STARTLINE (58)

    /** search.e:720		entry*/
    // SubProg match_replace pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 2621 op: 159
    // SubProg match_replace pc: 132 op: STARTLINE (58)

    /** search.e:721			posn = match(needle, haystack, scan_from)*/
    // SubProg match_replace pc: 134 op: MATCH_FROM (177)
    _posn_2627 = e_match_from(_needle_2623, _haystack_2624, _scan_from_2630);
    // SubProg match_replace pc: 139 op: STARTLINE (58)

    /** search.e:722		end while*/
    // SubProg match_replace pc: 141 op: ENDWHILE (22)
    goto L4; // [141] 89
    // SubProg match_replace pc: 143 op: NOP1 (159)
L5: // addr: 144 pc: 143 sub: 2621 op: 159
    // SubProg match_replace pc: 144 op: STARTLINE (58)

    /** search.e:724		return haystack*/
    // SubProg match_replace pc: 146 op: RETURNF (28)

// Exiting block BLOCK: match_replace

// block var needle_2623
    DeRef(_needle_2623);

// block var replacement_2625
    DeRef(_replacement_2625);

// block var max_2626

// block var posn_2627

// block var needle_len_2628

// block var replacement_len_2629

// block var scan_from_2630

// block var cnt_2631
    return _haystack_2624;
    // SubProg match_replace pc: 150 op: BADRETURNF (43)
    ;
}


object _17begins(object _sub_text_2744, object _full_text_2745)
{
    object _1245 = NOVALUE; // 2762 1245
    object _1244 = NOVALUE; // 2761 1244
    object _1243 = NOVALUE; // 2760 1243
// skipping _1242  name type: 0
    object _1241 = NOVALUE; // 2757 1241
    object _1240 = NOVALUE; // 2756 1240
    object _1239 = NOVALUE; // 2753 1239
    object _1238 = NOVALUE; // 2752 1238
    object _1237 = NOVALUE; // 2750 1237
// skipping _1236  name type: 0
    object _1235 = NOVALUE; // 2747 1235
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg begins pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg begins pc: 3 op: STARTLINE (58)

    /** search.e:976		if length(full_text) = 0 then*/
    // SubProg begins pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2745)){
            _1235 = SEQ_PTR(_full_text_2745)->length;
    }
    else {
        _1235 = 1;
    }
    // SubProg begins pc: 8 op: EQUALS_IFW_I (121)
    if (_1235 != 0)
    goto L1; // [8] 19
    // SubProg begins pc: 12 op: STARTLINE (58)

    /** search.e:977			return 0*/
    // SubProg begins pc: 14 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2744
    DeRef(_sub_text_2744);

// block var full_text_2745
    DeRefDS(_full_text_2745);
    return 0;
    // SubProg begins pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 2742 op: 159
    // SubProg begins pc: 19 op: STARTLINE (58)

    /** search.e:980		if atom(sub_text) then*/
    // SubProg begins pc: 21 op: IS_AN_ATOM (67)
    _1237 = IS_ATOM(_sub_text_2744);
    // SubProg begins pc: 24 op: IF (20)
    if (_1237 == 0)
    {
        _1237 = NOVALUE;
        goto L2; // [24] 57
    }
    else{
        _1237 = NOVALUE;
    }
    // SubProg begins pc: 27 op: STARTLINE (58)

    /** search.e:981			if equal(sub_text, full_text[1]) then*/
    // SubProg begins pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_full_text_2745);
    _1238 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg begins pc: 33 op: EQUAL (153)
    if (_sub_text_2744 == _1238)
    _1239 = 1;
    else if (IS_ATOM_INT(_sub_text_2744) && IS_ATOM_INT(_1238))
    _1239 = 0;
    else
    _1239 = (compare(_sub_text_2744, _1238) == 0);
    _1238 = NOVALUE;
    // SubProg begins pc: 37 op: IF (20)
    if (_1239 == 0)
    {
        _1239 = NOVALUE;
        goto L3; // [37] 49
    }
    else{
        _1239 = NOVALUE;
    }
    // SubProg begins pc: 40 op: STARTLINE (58)

    /** search.e:982				return 1*/
    // SubProg begins pc: 42 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2744
    DeRef(_sub_text_2744);

// block var full_text_2745
    DeRefDS(_full_text_2745);
    return 1;
    // SubProg begins pc: 46 op: ELSE (23)
    goto L4; // [46] 56
    // SubProg begins pc: 48 op: NOP1 (159)
L3: // addr: 49 pc: 48 sub: 2742 op: 159
    // SubProg begins pc: 49 op: STARTLINE (58)

    /** search.e:984				return 0*/
    // SubProg begins pc: 51 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2744
    DeRef(_sub_text_2744);

// block var full_text_2745
    DeRefDS(_full_text_2745);
    return 0;
    // SubProg begins pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 2742 op: 159
    // SubProg begins pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 2742 op: 159
    // SubProg begins pc: 57 op: STARTLINE (58)

    /** search.e:988		if length(sub_text) > length(full_text) then*/
    // SubProg begins pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2744)){
            _1240 = SEQ_PTR(_sub_text_2744)->length;
    }
    else {
        _1240 = 1;
    }
    // SubProg begins pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2745)){
            _1241 = SEQ_PTR(_full_text_2745)->length;
    }
    else {
        _1241 = 1;
    }
    // SubProg begins pc: 65 op: GREATER_IFW_I (124)
    if (_1240 <= _1241)
    goto L5; // [65] 76
    // SubProg begins pc: 69 op: STARTLINE (58)

    /** search.e:989			return 0*/
    // SubProg begins pc: 71 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2744
    DeRef(_sub_text_2744);

// block var full_text_2745
    DeRefDS(_full_text_2745);
    return 0;
    // SubProg begins pc: 75 op: NOP1 (159)
L5: // addr: 76 pc: 75 sub: 2742 op: 159
    // SubProg begins pc: 76 op: STARTLINE (58)

    /** search.e:992		if equal(sub_text, full_text[1.. length(sub_text)]) then*/
    // SubProg begins pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2744)){
            _1243 = SEQ_PTR(_sub_text_2744)->length;
    }
    else {
        _1243 = 1;
    }
    // SubProg begins pc: 81 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1244;
    RHS_Slice(_full_text_2745, 1, _1243);
    // SubProg begins pc: 86 op: EQUAL (153)
    if (_sub_text_2744 == _1244)
    _1245 = 1;
    else if (IS_ATOM_INT(_sub_text_2744) && IS_ATOM_INT(_1244))
    _1245 = 0;
    else
    _1245 = (compare(_sub_text_2744, _1244) == 0);
    DeRefDS(_1244);
    _1244 = NOVALUE;
    // SubProg begins pc: 90 op: IF (20)
    if (_1245 == 0)
    {
        _1245 = NOVALUE;
        goto L6; // [90] 102
    }
    else{
        _1245 = NOVALUE;
    }
    // SubProg begins pc: 93 op: STARTLINE (58)

    /** search.e:993			return 1*/
    // SubProg begins pc: 95 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2744
    DeRef(_sub_text_2744);

// block var full_text_2745
    DeRefDS(_full_text_2745);
    return 1;
    // SubProg begins pc: 99 op: ELSE (23)
    goto L7; // [99] 109
    // SubProg begins pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 2742 op: 159
    // SubProg begins pc: 102 op: STARTLINE (58)

    /** search.e:995			return 0*/
    // SubProg begins pc: 104 op: RETURNF (28)

// Exiting block BLOCK: begins

// block var sub_text_2744
    DeRef(_sub_text_2744);

// block var full_text_2745
    DeRefDS(_full_text_2745);
    return 0;
    // SubProg begins pc: 108 op: NOP1 (159)
L7: // addr: 109 pc: 108 sub: 2742 op: 159
    // SubProg begins pc: 109 op: BADRETURNF (43)
    ;
}


object _17ends(object _sub_text_2766, object _full_text_2767)
{
    object _1261 = NOVALUE; // 2789 1261
    object _1260 = NOVALUE; // 2788 1260
    object _1259 = NOVALUE; // 2787 1259
    object _1258 = NOVALUE; // 2786 1258
    object _1257 = NOVALUE; // 2785 1257
    object _1256 = NOVALUE; // 2784 1256
    object _1255 = NOVALUE; // 2783 1255
// skipping _1254  name type: 0
    object _1253 = NOVALUE; // 2780 1253
    object _1252 = NOVALUE; // 2779 1252
    object _1251 = NOVALUE; // 2776 1251
    object _1250 = NOVALUE; // 2775 1250
    object _1249 = NOVALUE; // 2774 1249
    object _1248 = NOVALUE; // 2772 1248
// skipping _1247  name type: 0
    object _1246 = NOVALUE; // 2769 1246
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ends pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ends pc: 3 op: STARTLINE (58)

    /** search.e:1026		if length(full_text) = 0 then*/
    // SubProg ends pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2767)){
            _1246 = SEQ_PTR(_full_text_2767)->length;
    }
    else {
        _1246 = 1;
    }
    // SubProg ends pc: 8 op: EQUALS_IFW_I (121)
    if (_1246 != 0)
    goto L1; // [8] 19
    // SubProg ends pc: 12 op: STARTLINE (58)

    /** search.e:1027			return 0*/
    // SubProg ends pc: 14 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2766
    DeRefDSi(_sub_text_2766);

// block var full_text_2767
    DeRefDS(_full_text_2767);
    return 0;
    // SubProg ends pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 2764 op: 159
    // SubProg ends pc: 19 op: STARTLINE (58)

    /** search.e:1030		if atom(sub_text) then*/
    // SubProg ends pc: 21 op: IS_AN_ATOM (67)
    _1248 = IS_ATOM(_sub_text_2766);
    // SubProg ends pc: 24 op: IF (20)
    if (_1248 == 0)
    {
        _1248 = NOVALUE;
        goto L2; // [24] 60
    }
    else{
        _1248 = NOVALUE;
    }
    // SubProg ends pc: 27 op: STARTLINE (58)

    /** search.e:1031			if equal(sub_text, full_text[$]) then*/
    // SubProg ends pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2767)){
            _1249 = SEQ_PTR(_full_text_2767)->length;
    }
    else {
        _1249 = 1;
    }
    // SubProg ends pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_full_text_2767);
    _1250 = (object)*(((s1_ptr)_2)->base + _1249);
    // SubProg ends pc: 36 op: EQUAL (153)
    if (_sub_text_2766 == _1250)
    _1251 = 1;
    else if (IS_ATOM_INT(_sub_text_2766) && IS_ATOM_INT(_1250))
    _1251 = 0;
    else
    _1251 = (compare(_sub_text_2766, _1250) == 0);
    _1250 = NOVALUE;
    // SubProg ends pc: 40 op: IF (20)
    if (_1251 == 0)
    {
        _1251 = NOVALUE;
        goto L3; // [40] 52
    }
    else{
        _1251 = NOVALUE;
    }
    // SubProg ends pc: 43 op: STARTLINE (58)

    /** search.e:1032				return 1*/
    // SubProg ends pc: 45 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2766
    DeRefi(_sub_text_2766);

// block var full_text_2767
    DeRefDS(_full_text_2767);
    return 1;
    // SubProg ends pc: 49 op: ELSE (23)
    goto L4; // [49] 59
    // SubProg ends pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 2764 op: 159
    // SubProg ends pc: 52 op: STARTLINE (58)

    /** search.e:1034				return 0*/
    // SubProg ends pc: 54 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2766
    DeRefi(_sub_text_2766);

// block var full_text_2767
    DeRefDS(_full_text_2767);
    return 0;
    // SubProg ends pc: 58 op: NOP1 (159)
L4: // addr: 59 pc: 58 sub: 2764 op: 159
    // SubProg ends pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 2764 op: 159
    // SubProg ends pc: 60 op: STARTLINE (58)

    /** search.e:1038		if length(sub_text) > length(full_text) then*/
    // SubProg ends pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2766)){
            _1252 = SEQ_PTR(_sub_text_2766)->length;
    }
    else {
        _1252 = 1;
    }
    // SubProg ends pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2767)){
            _1253 = SEQ_PTR(_full_text_2767)->length;
    }
    else {
        _1253 = 1;
    }
    // SubProg ends pc: 68 op: GREATER_IFW_I (124)
    if (_1252 <= _1253)
    goto L5; // [68] 79
    // SubProg ends pc: 72 op: STARTLINE (58)

    /** search.e:1039			return 0*/
    // SubProg ends pc: 74 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2766
    DeRefi(_sub_text_2766);

// block var full_text_2767
    DeRefDS(_full_text_2767);
    return 0;
    // SubProg ends pc: 78 op: NOP1 (159)
L5: // addr: 79 pc: 78 sub: 2764 op: 159
    // SubProg ends pc: 79 op: STARTLINE (58)

    /** search.e:1042		if equal(sub_text, full_text[$ - length(sub_text) + 1 .. $]) then*/
    // SubProg ends pc: 81 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2767)){
            _1255 = SEQ_PTR(_full_text_2767)->length;
    }
    else {
        _1255 = 1;
    }
    // SubProg ends pc: 84 op: LENGTH (42)
    if (IS_SEQUENCE(_sub_text_2766)){
            _1256 = SEQ_PTR(_sub_text_2766)->length;
    }
    else {
        _1256 = 1;
    }
    // SubProg ends pc: 87 op: MINUS (10)
    _1257 = _1255 - _1256;
    _1255 = NOVALUE;
    _1256 = NOVALUE;
    // SubProg ends pc: 91 op: PLUS1 (93)
    _1258 = _1257 + 1;
    _1257 = NOVALUE;
    // SubProg ends pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_full_text_2767)){
            _1259 = SEQ_PTR(_full_text_2767)->length;
    }
    else {
        _1259 = 1;
    }
    // SubProg ends pc: 98 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1260;
    RHS_Slice(_full_text_2767, _1258, _1259);
    // SubProg ends pc: 103 op: EQUAL (153)
    if (_sub_text_2766 == _1260)
    _1261 = 1;
    else if (IS_ATOM_INT(_sub_text_2766) && IS_ATOM_INT(_1260))
    _1261 = 0;
    else
    _1261 = (compare(_sub_text_2766, _1260) == 0);
    DeRefDS(_1260);
    _1260 = NOVALUE;
    // SubProg ends pc: 107 op: IF (20)
    if (_1261 == 0)
    {
        _1261 = NOVALUE;
        goto L6; // [107] 119
    }
    else{
        _1261 = NOVALUE;
    }
    // SubProg ends pc: 110 op: STARTLINE (58)

    /** search.e:1043			return 1*/
    // SubProg ends pc: 112 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2766
    DeRefi(_sub_text_2766);

// block var full_text_2767
    DeRefDS(_full_text_2767);
    _1258 = NOVALUE;
    return 1;
    // SubProg ends pc: 116 op: ELSE (23)
    goto L7; // [116] 126
    // SubProg ends pc: 118 op: NOP1 (159)
L6: // addr: 119 pc: 118 sub: 2764 op: 159
    // SubProg ends pc: 119 op: STARTLINE (58)

    /** search.e:1045			return 0*/
    // SubProg ends pc: 121 op: RETURNF (28)

// Exiting block BLOCK: ends

// block var sub_text_2766
    DeRefi(_sub_text_2766);

// block var full_text_2767
    DeRefDS(_full_text_2767);
    DeRef(_1258);
    _1258 = NOVALUE;
    return 0;
    // SubProg ends pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 2764 op: 159
    // SubProg ends pc: 126 op: BADRETURNF (43)
    ;
}



// 0xA8B792A6
