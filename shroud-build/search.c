// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _15find_all(object _needle_2296, object _haystack_2297, object _start_2298)
{
    object _kx_2299 = NOVALUE;
    object _1007 = NOVALUE;
    object _1006 = NOVALUE;
    object _0, _1, _2;
    

    /** search.e:292		integer kx = 0*/
    _kx_2299 = 0;

    /** search.e:293		while start with entry do*/
    goto L1; // [12] 39
L2: 
    if (_start_2298 == 0)
    {
        goto L3; // [15] 51
    }
    else{
    }

    /** search.e:294			kx += 1*/
    _kx_2299 = _kx_2299 + 1;

    /** search.e:295			haystack[kx] = start*/
    _2 = (object)SEQ_PTR(_haystack_2297);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2297 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _kx_2299);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _start_2298;
    DeRef(_1);

    /** search.e:296			start += 1*/
    _start_2298 = _start_2298 + 1;

    /** search.e:297		entry*/
L1: 

    /** search.e:298			start = find(needle, haystack, start)*/
    _start_2298 = find_from(_needle_2296, _haystack_2297, _start_2298);

    /** search.e:299		end while*/
    goto L2; // [48] 15
L3: 

    /** search.e:301		haystack = remove( haystack, kx+1, length( haystack ) )*/
    _1006 = _kx_2299 + 1;
    if (_1006 > MAXINT){
        _1006 = NewDouble((eudouble)_1006);
    }
    if (IS_SEQUENCE(_haystack_2297)){
            _1007 = SEQ_PTR(_haystack_2297)->length;
    }
    else {
        _1007 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_haystack_2297);
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
                Head( SEQ_PTR(_haystack_2297), start, &_haystack_2297 );
            }
            else Tail(SEQ_PTR(_haystack_2297), stop+1, &_haystack_2297);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_haystack_2297), start, &_haystack_2297);
        }
        else {
            assign_slice_seq = &assign_space;
            _haystack_2297 = Remove_elements(start, stop, (SEQ_PTR(_haystack_2297)->ref == 1));
        }
    }
    DeRef(_1006);
    _1006 = NOVALUE;
    _1007 = NOVALUE;

    /** search.e:302		return haystack*/
    return _haystack_2297;
    ;
}


object _15rfind(object _needle_2414, object _haystack_2415, object _start_2416)
{
    object _len_2418 = NOVALUE;
    object _1068 = NOVALUE;
    object _1067 = NOVALUE;
    object _1064 = NOVALUE;
    object _1063 = NOVALUE;
    object _1061 = NOVALUE;
    object _0, _1, _2;
    

    /** search.e:550		integer len = length(haystack)*/
    if (IS_SEQUENCE(_haystack_2415)){
            _len_2418 = SEQ_PTR(_haystack_2415)->length;
    }
    else {
        _len_2418 = 1;
    }

    /** search.e:552		if start = 0 then start = len end if*/
    if (_start_2416 != 0)
    goto L1; // [12] 20
    _start_2416 = _len_2418;
L1: 

    /** search.e:553		if (start > len) or (len + start < 1) then*/
    _1061 = (_start_2416 > _len_2418);
    if (_1061 != 0) {
        goto L2; // [26] 43
    }
    _1063 = _len_2418 + _start_2416;
    if ((object)((uintptr_t)_1063 + (uintptr_t)HIGH_BITS) >= 0){
        _1063 = NewDouble((eudouble)_1063);
    }
    if (IS_ATOM_INT(_1063)) {
        _1064 = (_1063 < 1);
    }
    else {
        _1064 = (DBL_PTR(_1063)->dbl < (eudouble)1);
    }
    DeRef(_1063);
    _1063 = NOVALUE;
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
L2: 

    /** search.e:554			return 0*/
    DeRef(_needle_2414);
    DeRefDS(_haystack_2415);
    DeRef(_1061);
    _1061 = NOVALUE;
    return 0;
L3: 

    /** search.e:557		if start < 1 then*/
    if (_start_2416 >= 1)
    goto L4; // [52] 63

    /** search.e:558			start = len + start*/
    _start_2416 = _len_2418 + _start_2416;
L4: 

    /** search.e:561		for i = start to 1 by -1 do*/
    {
        object _i_2431;
        _i_2431 = _start_2416;
L5: 
        if (_i_2431 < 1){
            goto L6; // [65] 99
        }

        /** search.e:562			if equal(haystack[i], needle) then*/
        _2 = (object)SEQ_PTR(_haystack_2415);
        _1067 = (object)*(((s1_ptr)_2)->base + _i_2431);
        if (_1067 == _needle_2414)
        _1068 = 1;
        else if (IS_ATOM_INT(_1067) && IS_ATOM_INT(_needle_2414))
        _1068 = 0;
        else
        _1068 = (compare(_1067, _needle_2414) == 0);
        _1067 = NOVALUE;
        if (_1068 == 0)
        {
            _1068 = NOVALUE;
            goto L7; // [82] 92
        }
        else{
            _1068 = NOVALUE;
        }

        /** search.e:563				return i*/
        DeRef(_needle_2414);
        DeRefDS(_haystack_2415);
        DeRef(_1061);
        _1061 = NOVALUE;
        return _i_2431;
L7: 

        /** search.e:565		end for*/
        _i_2431 = _i_2431 + -1;
        goto L5; // [94] 72
L6: 
        ;
    }

    /** search.e:567		return 0*/
    DeRef(_needle_2414);
    DeRefDS(_haystack_2415);
    DeRef(_1061);
    _1061 = NOVALUE;
    return 0;
    ;
}


object _15find_replace(object _needle_2437, object _haystack_2438, object _replacement_2439, object _max_2440)
{
    object _posn_2441 = NOVALUE;
    object _1072 = NOVALUE;
    object _0, _1, _2;
    

    /** search.e:612		integer posn = 0*/
    _posn_2441 = 0;

    /** search.e:614		while posn != 0 entry do */
    goto L1; // [12] 45
L2: 
    if (_posn_2441 == 0)
    goto L3; // [15] 61

    /** search.e:615			haystack[posn] = replacement*/
    Ref(_replacement_2439);
    _2 = (object)SEQ_PTR(_haystack_2438);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _haystack_2438 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _posn_2441);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _replacement_2439;
    DeRef(_1);

    /** search.e:616			max -= 1*/
    _max_2440 = _max_2440 - 1;

    /** search.e:617			if max = 0 then*/
    if (_max_2440 != 0)
    goto L4; // [33] 42

    /** search.e:618				exit*/
    goto L3; // [39] 61
L4: 

    /** search.e:620		entry*/
L1: 

    /** search.e:621			posn = find(needle, haystack, posn + 1)*/
    _1072 = _posn_2441 + 1;
    if (_1072 > MAXINT){
        _1072 = NewDouble((eudouble)_1072);
    }
    _posn_2441 = find_from(_needle_2437, _haystack_2438, _1072);
    DeRef(_1072);
    _1072 = NOVALUE;

    /** search.e:622		end while*/
    goto L2; // [58] 15
L3: 

    /** search.e:624		return haystack*/
    DeRef(_needle_2437);
    DeRefi(_replacement_2439);
    return _haystack_2438;
    ;
}


object _15match_replace(object _needle_2451, object _haystack_2452, object _replacement_2453, object _max_2454)
{
    object _posn_2455 = NOVALUE;
    object _needle_len_2456 = NOVALUE;
    object _replacement_len_2457 = NOVALUE;
    object _scan_from_2458 = NOVALUE;
    object _cnt_2459 = NOVALUE;
    object _1084 = NOVALUE;
    object _1081 = NOVALUE;
    object _1079 = NOVALUE;
    object _1077 = NOVALUE;
    object _0, _1, _2;
    

    /** search.e:692		if max < 0 then*/

    /** search.e:696		cnt = length(haystack)*/
    if (IS_SEQUENCE(_haystack_2452)){
            _cnt_2459 = SEQ_PTR(_haystack_2452)->length;
    }
    else {
        _cnt_2459 = 1;
    }

    /** search.e:697		if max != 0 then*/

    /** search.e:701		if atom(needle) then*/
    _1077 = IS_ATOM(_needle_2451);
    if (_1077 == 0)
    {
        _1077 = NOVALUE;
        goto L1; // [40] 50
    }
    else{
        _1077 = NOVALUE;
    }

    /** search.e:702			needle = {needle}*/
    _0 = _needle_2451;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_needle_2451);
    ((intptr_t*)_2)[1] = _needle_2451;
    _needle_2451 = MAKE_SEQ(_1);
    DeRef(_0);
L1: 

    /** search.e:704		if atom(replacement) then*/
    _1079 = IS_ATOM(_replacement_2453);
    if (_1079 == 0)
    {
        _1079 = NOVALUE;
        goto L2; // [55] 65
    }
    else{
        _1079 = NOVALUE;
    }

    /** search.e:705			replacement = {replacement}*/
    _0 = _replacement_2453;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_replacement_2453);
    ((intptr_t*)_2)[1] = _replacement_2453;
    _replacement_2453 = MAKE_SEQ(_1);
    DeRef(_0);
L2: 

    /** search.e:708		needle_len = length(needle) - 1*/
    if (IS_SEQUENCE(_needle_2451)){
            _1081 = SEQ_PTR(_needle_2451)->length;
    }
    else {
        _1081 = 1;
    }
    _needle_len_2456 = _1081 - 1;
    _1081 = NOVALUE;

    /** search.e:709		replacement_len = length(replacement)*/
    if (IS_SEQUENCE(_replacement_2453)){
            _replacement_len_2457 = SEQ_PTR(_replacement_2453)->length;
    }
    else {
        _replacement_len_2457 = 1;
    }

    /** search.e:711		scan_from = 1*/
    _scan_from_2458 = 1;

    /** search.e:712		while posn with entry do*/
    goto L3; // [86] 132
L4: 
    if (_posn_2455 == 0)
    {
        goto L5; // [91] 144
    }
    else{
    }

    /** search.e:713			haystack = replace(haystack, replacement, posn, posn + needle_len)*/
    _1084 = _posn_2455 + _needle_len_2456;
    if ((object)((uintptr_t)_1084 + (uintptr_t)HIGH_BITS) >= 0){
        _1084 = NewDouble((eudouble)_1084);
    }
    {
        intptr_t p1 = _haystack_2452;
        intptr_t p2 = _replacement_2453;
        intptr_t p3 = _posn_2455;
        intptr_t p4 = _1084;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_haystack_2452;
        Replace( &replace_params );
    }
    DeRef(_1084);
    _1084 = NOVALUE;

    /** search.e:715			cnt -= 1*/
    _cnt_2459 = _cnt_2459 - 1;

    /** search.e:716			if cnt = 0 then*/
    if (_cnt_2459 != 0)
    goto L6; // [114] 123

    /** search.e:717				exit*/
    goto L5; // [120] 144
L6: 

    /** search.e:719			scan_from = posn + replacement_len*/
    _scan_from_2458 = _posn_2455 + _replacement_len_2457;

    /** search.e:720		entry*/
L3: 

    /** search.e:721			posn = match(needle, haystack, scan_from)*/
    _posn_2455 = e_match_from(_needle_2451, _haystack_2452, _scan_from_2458);

    /** search.e:722		end while*/
    goto L4; // [141] 89
L5: 

    /** search.e:724		return haystack*/
    DeRef(_needle_2451);
    DeRef(_replacement_2453);
    return _haystack_2452;
    ;
}


object _15begins(object _sub_text_2572, object _full_text_2573)
{
    object _1148 = NOVALUE;
    object _1147 = NOVALUE;
    object _1146 = NOVALUE;
    object _1144 = NOVALUE;
    object _1143 = NOVALUE;
    object _1142 = NOVALUE;
    object _1141 = NOVALUE;
    object _1140 = NOVALUE;
    object _1138 = NOVALUE;
    object _0, _1, _2;
    

    /** search.e:976		if length(full_text) = 0 then*/
    if (IS_SEQUENCE(_full_text_2573)){
            _1138 = SEQ_PTR(_full_text_2573)->length;
    }
    else {
        _1138 = 1;
    }
    if (_1138 != 0)
    goto L1; // [8] 19

    /** search.e:977			return 0*/
    DeRef(_sub_text_2572);
    DeRefDS(_full_text_2573);
    return 0;
L1: 

    /** search.e:980		if atom(sub_text) then*/
    _1140 = IS_ATOM(_sub_text_2572);
    if (_1140 == 0)
    {
        _1140 = NOVALUE;
        goto L2; // [24] 57
    }
    else{
        _1140 = NOVALUE;
    }

    /** search.e:981			if equal(sub_text, full_text[1]) then*/
    _2 = (object)SEQ_PTR(_full_text_2573);
    _1141 = (object)*(((s1_ptr)_2)->base + 1);
    if (_sub_text_2572 == _1141)
    _1142 = 1;
    else if (IS_ATOM_INT(_sub_text_2572) && IS_ATOM_INT(_1141))
    _1142 = 0;
    else
    _1142 = (compare(_sub_text_2572, _1141) == 0);
    _1141 = NOVALUE;
    if (_1142 == 0)
    {
        _1142 = NOVALUE;
        goto L3; // [37] 49
    }
    else{
        _1142 = NOVALUE;
    }

    /** search.e:982				return 1*/
    DeRef(_sub_text_2572);
    DeRefDS(_full_text_2573);
    return 1;
    goto L4; // [46] 56
L3: 

    /** search.e:984				return 0*/
    DeRef(_sub_text_2572);
    DeRefDS(_full_text_2573);
    return 0;
L4: 
L2: 

    /** search.e:988		if length(sub_text) > length(full_text) then*/
    if (IS_SEQUENCE(_sub_text_2572)){
            _1143 = SEQ_PTR(_sub_text_2572)->length;
    }
    else {
        _1143 = 1;
    }
    if (IS_SEQUENCE(_full_text_2573)){
            _1144 = SEQ_PTR(_full_text_2573)->length;
    }
    else {
        _1144 = 1;
    }
    if (_1143 <= _1144)
    goto L5; // [65] 76

    /** search.e:989			return 0*/
    DeRef(_sub_text_2572);
    DeRefDS(_full_text_2573);
    return 0;
L5: 

    /** search.e:992		if equal(sub_text, full_text[1.. length(sub_text)]) then*/
    if (IS_SEQUENCE(_sub_text_2572)){
            _1146 = SEQ_PTR(_sub_text_2572)->length;
    }
    else {
        _1146 = 1;
    }
    rhs_slice_target = (object_ptr)&_1147;
    RHS_Slice(_full_text_2573, 1, _1146);
    if (_sub_text_2572 == _1147)
    _1148 = 1;
    else if (IS_ATOM_INT(_sub_text_2572) && IS_ATOM_INT(_1147))
    _1148 = 0;
    else
    _1148 = (compare(_sub_text_2572, _1147) == 0);
    DeRefDS(_1147);
    _1147 = NOVALUE;
    if (_1148 == 0)
    {
        _1148 = NOVALUE;
        goto L6; // [90] 102
    }
    else{
        _1148 = NOVALUE;
    }

    /** search.e:993			return 1*/
    DeRef(_sub_text_2572);
    DeRefDS(_full_text_2573);
    return 1;
    goto L7; // [99] 109
L6: 

    /** search.e:995			return 0*/
    DeRef(_sub_text_2572);
    DeRefDS(_full_text_2573);
    return 0;
L7: 
    ;
}


object _15ends(object _sub_text_2594, object _full_text_2595)
{
    object _1164 = NOVALUE;
    object _1163 = NOVALUE;
    object _1162 = NOVALUE;
    object _1161 = NOVALUE;
    object _1160 = NOVALUE;
    object _1159 = NOVALUE;
    object _1158 = NOVALUE;
    object _1156 = NOVALUE;
    object _1155 = NOVALUE;
    object _1154 = NOVALUE;
    object _1153 = NOVALUE;
    object _1152 = NOVALUE;
    object _1151 = NOVALUE;
    object _1149 = NOVALUE;
    object _0, _1, _2;
    

    /** search.e:1026		if length(full_text) = 0 then*/
    if (IS_SEQUENCE(_full_text_2595)){
            _1149 = SEQ_PTR(_full_text_2595)->length;
    }
    else {
        _1149 = 1;
    }
    if (_1149 != 0)
    goto L1; // [8] 19

    /** search.e:1027			return 0*/
    DeRefDSi(_sub_text_2594);
    DeRefDS(_full_text_2595);
    return 0;
L1: 

    /** search.e:1030		if atom(sub_text) then*/
    _1151 = IS_ATOM(_sub_text_2594);
    if (_1151 == 0)
    {
        _1151 = NOVALUE;
        goto L2; // [24] 60
    }
    else{
        _1151 = NOVALUE;
    }

    /** search.e:1031			if equal(sub_text, full_text[$]) then*/
    if (IS_SEQUENCE(_full_text_2595)){
            _1152 = SEQ_PTR(_full_text_2595)->length;
    }
    else {
        _1152 = 1;
    }
    _2 = (object)SEQ_PTR(_full_text_2595);
    _1153 = (object)*(((s1_ptr)_2)->base + _1152);
    if (_sub_text_2594 == _1153)
    _1154 = 1;
    else if (IS_ATOM_INT(_sub_text_2594) && IS_ATOM_INT(_1153))
    _1154 = 0;
    else
    _1154 = (compare(_sub_text_2594, _1153) == 0);
    _1153 = NOVALUE;
    if (_1154 == 0)
    {
        _1154 = NOVALUE;
        goto L3; // [40] 52
    }
    else{
        _1154 = NOVALUE;
    }

    /** search.e:1032				return 1*/
    DeRefi(_sub_text_2594);
    DeRefDS(_full_text_2595);
    return 1;
    goto L4; // [49] 59
L3: 

    /** search.e:1034				return 0*/
    DeRefi(_sub_text_2594);
    DeRefDS(_full_text_2595);
    return 0;
L4: 
L2: 

    /** search.e:1038		if length(sub_text) > length(full_text) then*/
    if (IS_SEQUENCE(_sub_text_2594)){
            _1155 = SEQ_PTR(_sub_text_2594)->length;
    }
    else {
        _1155 = 1;
    }
    if (IS_SEQUENCE(_full_text_2595)){
            _1156 = SEQ_PTR(_full_text_2595)->length;
    }
    else {
        _1156 = 1;
    }
    if (_1155 <= _1156)
    goto L5; // [68] 79

    /** search.e:1039			return 0*/
    DeRefi(_sub_text_2594);
    DeRefDS(_full_text_2595);
    return 0;
L5: 

    /** search.e:1042		if equal(sub_text, full_text[$ - length(sub_text) + 1 .. $]) then*/
    if (IS_SEQUENCE(_full_text_2595)){
            _1158 = SEQ_PTR(_full_text_2595)->length;
    }
    else {
        _1158 = 1;
    }
    if (IS_SEQUENCE(_sub_text_2594)){
            _1159 = SEQ_PTR(_sub_text_2594)->length;
    }
    else {
        _1159 = 1;
    }
    _1160 = _1158 - _1159;
    _1158 = NOVALUE;
    _1159 = NOVALUE;
    _1161 = _1160 + 1;
    _1160 = NOVALUE;
    if (IS_SEQUENCE(_full_text_2595)){
            _1162 = SEQ_PTR(_full_text_2595)->length;
    }
    else {
        _1162 = 1;
    }
    rhs_slice_target = (object_ptr)&_1163;
    RHS_Slice(_full_text_2595, _1161, _1162);
    if (_sub_text_2594 == _1163)
    _1164 = 1;
    else if (IS_ATOM_INT(_sub_text_2594) && IS_ATOM_INT(_1163))
    _1164 = 0;
    else
    _1164 = (compare(_sub_text_2594, _1163) == 0);
    DeRefDS(_1163);
    _1163 = NOVALUE;
    if (_1164 == 0)
    {
        _1164 = NOVALUE;
        goto L6; // [107] 119
    }
    else{
        _1164 = NOVALUE;
    }

    /** search.e:1043			return 1*/
    DeRefi(_sub_text_2594);
    DeRefDS(_full_text_2595);
    _1161 = NOVALUE;
    return 1;
    goto L7; // [116] 126
L6: 

    /** search.e:1045			return 0*/
    DeRefi(_sub_text_2594);
    DeRefDS(_full_text_2595);
    DeRef(_1161);
    _1161 = NOVALUE;
    return 0;
L7: 
    ;
}



// 0x7EA48478
