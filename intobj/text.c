// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _20sprint(object _x_5900)
{
    object _s_5901 = NOVALUE;
// skipping _3068  name type: 0
    object _3067 = NOVALUE; // 5924 3067
// skipping _3066  name type: 0
    object _3065 = NOVALUE; // 5922 3065
    object _3064 = NOVALUE; // 5921 3064
// skipping _3063  name type: 0
// skipping _3062  name type: 0
    object _3061 = NOVALUE; // 5917 3061
    object _3060 = NOVALUE; // 5916 3060
// skipping _3059  name type: 0
    object _3058 = NOVALUE; // 5913 3058
    object _3057 = NOVALUE; // 5912 3057
    object _3056 = NOVALUE; // 5911 3056
    object _3055 = NOVALUE; // 5910 3055
    object _3054 = NOVALUE; // 5908 3054
    object _3053 = NOVALUE; // 5904 3053
    object _3052 = NOVALUE; // 5903 3052
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sprint pc: 1 op: STARTLINE (58)

    /** text.e:93		if atom(x) then*/
    // SubProg sprint pc: 3 op: IS_AN_ATOM (67)
    _3052 = IS_ATOM(_x_5900);
    // SubProg sprint pc: 6 op: IF (20)
    if (_3052 == 0)
    {
        _3052 = NOVALUE;
        goto L1; // [6] 22
    }
    else{
        _3052 = NOVALUE;
    }
    // SubProg sprint pc: 9 op: STARTLINE (58)

    /** text.e:94			return sprintf("%.10g", x)*/
    // SubProg sprint pc: 11 op: SPRINTF (53)
    _3053 = EPrintf(-9999999, _1617, _x_5900);
    // SubProg sprint pc: 15 op: RETURNF (28)

// Exiting block BLOCK: sprint

// block var x_5900
    DeRef(_x_5900);

// block var s_5901
    DeRef(_s_5901);
    return _3053;
    // SubProg sprint pc: 19 op: ELSE (23)
    goto L2; // [19] 137
    // SubProg sprint pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 5898 op: 159
    // SubProg sprint pc: 22 op: STARTLINE (58)

    /** text.e:96			s = "{"*/
    // SubProg sprint pc: 24 op: ASSIGN (18)
    RefDS(_1521);
    DeRef(_s_5901);
    _s_5901 = _1521;
    // SubProg sprint pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg sprint pc: 29 op: STARTLINE (58)

    /** text.e:97			for i = 1 to length(x) do*/
    // SubProg sprint pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_x_5900)){
            _3054 = SEQ_PTR(_x_5900)->length;
    }
    else {
        _3054 = 1;
    }
    // SubProg sprint pc: 34 op: FOR_I (125)
    {
        object _i_5907;
        _i_5907 = 1;
L3: // addr: 41 pc: 34 sub: 5898 op: 125
        if (_i_5907 > _3054){
            goto L4; // [34] 98
        }
        // SubProg sprint pc: 41 op: STARTLINE (58)

        /** text.e:98				if atom(x[i]) then*/
        // SubProg sprint pc: 43 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_5900);
        _3055 = (object)*(((s1_ptr)_2)->base + _i_5907);
        // SubProg sprint pc: 47 op: IS_AN_ATOM (67)
        _3056 = IS_ATOM(_3055);
        _3055 = NOVALUE;
        // SubProg sprint pc: 50 op: IF (20)
        if (_3056 == 0)
        {
            _3056 = NOVALUE;
            goto L5; // [50] 70
        }
        else{
            _3056 = NOVALUE;
        }
        // SubProg sprint pc: 53 op: STARTLINE (58)

        /** text.e:99					s &= sprintf("%.10g", x[i])*/
        // SubProg sprint pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_5900);
        _3057 = (object)*(((s1_ptr)_2)->base + _i_5907);
        // SubProg sprint pc: 59 op: SPRINTF (53)
        _3058 = EPrintf(-9999999, _1617, _3057);
        _3057 = NOVALUE;
        // SubProg sprint pc: 63 op: CONCAT (15)
        Concat((object_ptr)&_s_5901, _s_5901, _3058);
        DeRefDS(_3058);
        _3058 = NOVALUE;
        // SubProg sprint pc: 67 op: ELSE (23)
        goto L6; // [67] 85
        // SubProg sprint pc: 69 op: NOP1 (159)
L5: // addr: 70 pc: 69 sub: 5898 op: 159
        // SubProg sprint pc: 70 op: STARTLINE (58)

        /** text.e:101					s &= sprint(x[i])*/
        // SubProg sprint pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_5900);
        _3060 = (object)*(((s1_ptr)_2)->base + _i_5907);
        // SubProg sprint pc: 76 op: PROC (27)
        Ref(_3060);
        _3061 = _20sprint(_3060);
        _3060 = NOVALUE;
        // SubProg sprint pc: 80 op: CONCAT (15)
        if (IS_SEQUENCE(_s_5901) && IS_ATOM(_3061)) {
            Ref(_3061);
            Append(&_s_5901, _s_5901, _3061);
        }
        else if (IS_ATOM(_s_5901) && IS_SEQUENCE(_3061)) {
        }
        else {
            Concat((object_ptr)&_s_5901, _s_5901, _3061);
        }
        DeRef(_3061);
        _3061 = NOVALUE;
        // SubProg sprint pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 5898 op: 159
        // SubProg sprint pc: 85 op: STARTLINE (58)

        /** text.e:103				s &= ','*/
        // SubProg sprint pc: 87 op: CONCAT (15)
        Append(&_s_5901, _s_5901, 44);
        // SubProg sprint pc: 91 op: STARTLINE (58)

        /** text.e:104			end for*/
        // SubProg sprint pc: 93 op: ENDFOR_INT_UP1 (54)
        _i_5907 = _i_5907 + 1;
        goto L3; // [93] 41
L4: // addr: 98 pc: 93 sub: 5898 op: 54
        ;
    }
    // SubProg sprint pc: 98 op: STARTLINE (58)

    /** text.e:105			if s[$] = ',' then*/
    // SubProg sprint pc: 100 op: LENGTH (42)
    if (IS_SEQUENCE(_s_5901)){
            _3064 = SEQ_PTR(_s_5901)->length;
    }
    else {
        _3064 = 1;
    }
    // SubProg sprint pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_5901);
    _3065 = (object)*(((s1_ptr)_2)->base + _3064);
    // SubProg sprint pc: 107 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3065, 44)){
        _3065 = NOVALUE;
        goto L7; // [107] 123
    }
    _3065 = NOVALUE;
    // SubProg sprint pc: 111 op: STARTLINE (58)

    /** text.e:106				s[$] = '}'*/
    // SubProg sprint pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_s_5901)){
            _3067 = SEQ_PTR(_s_5901)->length;
    }
    else {
        _3067 = 1;
    }
    // SubProg sprint pc: 116 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_s_5901);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _s_5901 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _3067);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 125;
    DeRef(_1);
    // SubProg sprint pc: 120 op: ELSE (23)
    goto L8; // [120] 130
    // SubProg sprint pc: 122 op: NOP1 (159)
L7: // addr: 123 pc: 122 sub: 5898 op: 159
    // SubProg sprint pc: 123 op: STARTLINE (58)

    /** text.e:108				s &= '}'*/
    // SubProg sprint pc: 125 op: CONCAT (15)
    Append(&_s_5901, _s_5901, 125);
    // SubProg sprint pc: 129 op: NOP1 (159)
L8: // addr: 130 pc: 129 sub: 5898 op: 159
    // SubProg sprint pc: 130 op: STARTLINE (58)

    /** text.e:110			return s*/
    // SubProg sprint pc: 132 op: RETURNF (28)

// Exiting block BLOCK: sprint

// block var x_5900
    DeRef(_x_5900);
    DeRef(_3053);
    _3053 = NOVALUE;
    return _s_5901;
    // SubProg sprint pc: 136 op: NOP1 (159)
L2: // addr: 137 pc: 136 sub: 5898 op: 159
    // SubProg sprint pc: 137 op: BADRETURNF (43)
    ;
}


object _20trim(object _source_5971, object _what_5972, object _ret_index_5973)
{
    object _rpos_5974 = NOVALUE;
    object _lpos_5975 = NOVALUE;
    object _3109 = NOVALUE; // 6006 3109
// skipping _3108  name type: 0
    object _3107 = NOVALUE; // 6004 3107
// skipping _3106  name type: 0
    object _3105 = NOVALUE; // 6001 3105
// skipping _3104  name type: 0
    object _3103 = NOVALUE; // 5996 3103
// skipping _3102  name type: 0
// skipping _3101  name type: 0
    object _3100 = NOVALUE; // 5992 3100
    object _3099 = NOVALUE; // 5991 3099
// skipping _3098  name type: 0
// skipping _3097  name type: 0
// skipping _3096  name type: 0
// skipping _3095  name type: 0
    object _3094 = NOVALUE; // 5984 3094
    object _3093 = NOVALUE; // 5983 3093
// skipping _3092  name type: 0
    object _3091 = NOVALUE; // 5980 3091
// skipping _3090  name type: 0
    object _3089 = NOVALUE; // 5977 3089
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg trim pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg trim pc: 3 op: INTEGER_CHECK (96)
    // SubProg trim pc: 5 op: STARTLINE (58)

    /** text.e:243		if atom(what) then*/
    // SubProg trim pc: 7 op: IS_AN_ATOM (67)
    _3089 = 0;
    // SubProg trim pc: 10 op: IF (20)
    if (_3089 == 0)
    {
        _3089 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _3089 = NOVALUE;
    }
    // SubProg trim pc: 13 op: STARTLINE (58)

    /** text.e:244			what = {what}*/
    // SubProg trim pc: 15 op: RIGHT_BRACE_N (31)
    _0 = _what_5972;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_what_5972);
    ((intptr_t*)_2)[1] = _what_5972;
    _what_5972 = MAKE_SEQ(_1);
    DeRefDSi(_0);
    // SubProg trim pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 5969 op: 159
    // SubProg trim pc: 20 op: STARTLINE (58)

    /** text.e:247		lpos = 1*/
    // SubProg trim pc: 22 op: ASSIGN_I (113)
    _lpos_5975 = 1;
    // SubProg trim pc: 25 op: STARTLINE (58)

    /** text.e:248		while lpos <= length(source) do*/
    // SubProg trim pc: 27 op: NOP2 (110)
    // SubProg trim pc: 29 op: NOPWHILE (158)
L2: // addr: 30 pc: 29 sub: 5969 op: 158
    // SubProg trim pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_source_5971)){
            _3091 = SEQ_PTR(_source_5971)->length;
    }
    else {
        _3091 = 1;
    }
    // SubProg trim pc: 33 op: LESSEQ_IFW_I (123)
    if (_lpos_5975 > _3091)
    goto L3; // [33] 67
    // SubProg trim pc: 37 op: STARTLINE (58)

    /** text.e:249			if not find(source[lpos], what) then*/
    // SubProg trim pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_5971);
    _3093 = (object)*(((s1_ptr)_2)->base + _lpos_5975);
    // SubProg trim pc: 43 op: FIND_FROM (176)
    _3094 = find_from(_3093, _what_5972, 1);
    _3093 = NOVALUE;
    // SubProg trim pc: 48 op: NOT_IFW (108)
    if (_3094 != 0)
    goto L4; // [48] 56
    _3094 = NOVALUE;
    // SubProg trim pc: 51 op: STARTLINE (58)

    /** text.e:250				exit*/
    // SubProg trim pc: 53 op: EXIT (61)
    goto L3; // [53] 67
    // SubProg trim pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 5969 op: 159
    // SubProg trim pc: 56 op: STARTLINE (58)

    /** text.e:252			lpos += 1*/
    // SubProg trim pc: 58 op: PLUS1_I (117)
    _lpos_5975 = _lpos_5975 + 1;
    // SubProg trim pc: 62 op: STARTLINE (58)

    /** text.e:253		end while*/
    // SubProg trim pc: 64 op: ENDWHILE (22)
    goto L2; // [64] 30
    // SubProg trim pc: 66 op: NOP1 (159)
L3: // addr: 67 pc: 66 sub: 5969 op: 159
    // SubProg trim pc: 67 op: STARTLINE (58)

    /** text.e:255		rpos = length(source)*/
    // SubProg trim pc: 69 op: LENGTH (42)
    if (IS_SEQUENCE(_source_5971)){
            _rpos_5974 = SEQ_PTR(_source_5971)->length;
    }
    else {
        _rpos_5974 = 1;
    }
    // SubProg trim pc: 72 op: STARTLINE (58)

    /** text.e:256		while rpos > lpos do*/
    // SubProg trim pc: 74 op: NOP2 (110)
    // SubProg trim pc: 76 op: NOPWHILE (158)
L5: // addr: 77 pc: 76 sub: 5969 op: 158
    // SubProg trim pc: 77 op: GREATER_IFW_I (124)
    if (_rpos_5974 <= _lpos_5975)
    goto L6; // [77] 111
    // SubProg trim pc: 81 op: STARTLINE (58)

    /** text.e:257			if not find(source[rpos], what) then*/
    // SubProg trim pc: 83 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_5971);
    _3099 = (object)*(((s1_ptr)_2)->base + _rpos_5974);
    // SubProg trim pc: 87 op: FIND_FROM (176)
    _3100 = find_from(_3099, _what_5972, 1);
    _3099 = NOVALUE;
    // SubProg trim pc: 92 op: NOT_IFW (108)
    if (_3100 != 0)
    goto L7; // [92] 100
    _3100 = NOVALUE;
    // SubProg trim pc: 95 op: STARTLINE (58)

    /** text.e:258				exit*/
    // SubProg trim pc: 97 op: EXIT (61)
    goto L6; // [97] 111
    // SubProg trim pc: 99 op: NOP1 (159)
L7: // addr: 100 pc: 99 sub: 5969 op: 159
    // SubProg trim pc: 100 op: STARTLINE (58)

    /** text.e:260			rpos -= 1*/
    // SubProg trim pc: 102 op: MINUS_I (116)
    _rpos_5974 = _rpos_5974 - 1;
    // SubProg trim pc: 106 op: STARTLINE (58)

    /** text.e:261		end while*/
    // SubProg trim pc: 108 op: ENDWHILE (22)
    goto L5; // [108] 77
    // SubProg trim pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 5969 op: 159
    // SubProg trim pc: 111 op: STARTLINE (58)

    /** text.e:263		if ret_index then*/
    // SubProg trim pc: 113 op: IF (20)
    if (_ret_index_5973 == 0)
    {
        goto L8; // [113] 129
    }
    else{
    }
    // SubProg trim pc: 116 op: STARTLINE (58)

    /** text.e:264			return {lpos, rpos}*/
    // SubProg trim pc: 118 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _lpos_5975;
    ((intptr_t *)_2)[2] = _rpos_5974;
    _3103 = MAKE_SEQ(_1);
    // SubProg trim pc: 122 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var source_5971
    DeRefDS(_source_5971);

// block var what_5972
    DeRef(_what_5972);

// block var ret_index_5973

// block var rpos_5974

// block var lpos_5975
    return _3103;
    // SubProg trim pc: 126 op: ELSE (23)
    goto L9; // [126] 180
    // SubProg trim pc: 128 op: NOP1 (159)
L8: // addr: 129 pc: 128 sub: 5969 op: 159
    // SubProg trim pc: 129 op: STARTLINE (58)

    /** text.e:266			if lpos = 1 then*/
    // SubProg trim pc: 131 op: EQUALS_IFW_I (121)
    if (_lpos_5975 != 1)
    goto LA; // [131] 152
    // SubProg trim pc: 135 op: STARTLINE (58)

    /** text.e:267				if rpos = length(source) then*/
    // SubProg trim pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_source_5971)){
            _3105 = SEQ_PTR(_source_5971)->length;
    }
    else {
        _3105 = 1;
    }
    // SubProg trim pc: 140 op: EQUALS_IFW_I (121)
    if (_rpos_5974 != _3105)
    goto LB; // [140] 151
    // SubProg trim pc: 144 op: STARTLINE (58)

    /** text.e:268					return source*/
    // SubProg trim pc: 146 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var what_5972
    DeRef(_what_5972);

// block var ret_index_5973

// block var rpos_5974

// block var lpos_5975
    DeRef(_3103);
    _3103 = NOVALUE;
    return _source_5971;
    // SubProg trim pc: 150 op: NOP1 (159)
LB: // addr: 151 pc: 150 sub: 5969 op: 159
    // SubProg trim pc: 151 op: NOP1 (159)
LA: // addr: 152 pc: 151 sub: 5969 op: 159
    // SubProg trim pc: 152 op: STARTLINE (58)

    /** text.e:271			if lpos > length(source) then*/
    // SubProg trim pc: 154 op: LENGTH (42)
    if (IS_SEQUENCE(_source_5971)){
            _3107 = SEQ_PTR(_source_5971)->length;
    }
    else {
        _3107 = 1;
    }
    // SubProg trim pc: 157 op: GREATER_IFW_I (124)
    if (_lpos_5975 <= _3107)
    goto LC; // [157] 168
    // SubProg trim pc: 161 op: STARTLINE (58)

    /** text.e:272				return {}*/
    // SubProg trim pc: 163 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: trim

// block var source_5971
    DeRefDS(_source_5971);

// block var what_5972
    DeRef(_what_5972);

// block var ret_index_5973

// block var rpos_5974

// block var lpos_5975
    DeRef(_3103);
    _3103 = NOVALUE;
    return _5;
    // SubProg trim pc: 167 op: NOP1 (159)
LC: // addr: 168 pc: 167 sub: 5969 op: 159
    // SubProg trim pc: 168 op: STARTLINE (58)

    /** text.e:274			return source[lpos..rpos]*/
    // SubProg trim pc: 170 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3109;
    RHS_Slice(_source_5971, _lpos_5975, _rpos_5974);
    // SubProg trim pc: 175 op: RETURNF (28)

// Exiting block BLOCK: trim

// block var source_5971
    DeRefDS(_source_5971);

// block var what_5972
    DeRef(_what_5972);

// block var ret_index_5973

// block var rpos_5974

// block var lpos_5975
    DeRef(_3103);
    _3103 = NOVALUE;
    return _3109;
    // SubProg trim pc: 179 op: NOP1 (159)
L9: // addr: 180 pc: 179 sub: 5969 op: 159
    // SubProg trim pc: 180 op: BADRETURNF (43)
    ;
}


object _20lower(object _x_6171)
{
    object _3226 = NOVALUE; // 6180 3226
    object _3225 = NOVALUE; // 6179 3225
    object _3224 = NOVALUE; // 6178 3224
    object _3223 = NOVALUE; // 6177 3223
    object _3222 = NOVALUE; // 6176 3222
// skipping _3221  name type: 0
// skipping _3220  name type: 0
    object _3219 = NOVALUE; // 6173 3219
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lower pc: 1 op: STARTLINE (58)

    /** text.e:535		if length(lower_case_SET) != 0 then*/
    // SubProg lower pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg lower pc: 5 op: LENGTH (42)
    // Known sequence length:
    _3219 = 0;
    // SubProg lower pc: 8 op: NOTEQ_IFW_I (122)
    // SubProg lower pc: 30 op: STARTLINE (58)

    /** text.e:539		ifdef WINDOWS then*/
    // SubProg lower pc: 32 op: STARTLINE (58)

    /** text.e:542			return x + (x >= 'A' and x <= 'Z') * TO_LOWER*/
    // SubProg lower pc: 34 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_6171)) {
        _3222 = (_x_6171 >= 65);
    }
    else {
        _3222 = binary_op(GREATEREQ, _x_6171, 65);
    }
    // SubProg lower pc: 38 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_6171)) {
        _3223 = (_x_6171 <= 90);
    }
    else {
        _3223 = binary_op(LESSEQ, _x_6171, 90);
    }
    // SubProg lower pc: 42 op: AND (8)
    if (IS_ATOM_INT(_3222) && IS_ATOM_INT(_3223)) {
        _3224 = (_3222 != 0 && _3223 != 0);
    }
    else {
        _3224 = binary_op(AND, _3222, _3223);
    }
    DeRef(_3222);
    _3222 = NOVALUE;
    DeRef(_3223);
    _3223 = NOVALUE;
    // SubProg lower pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg lower pc: 48 op: MULTIPLY (13)
    if (IS_ATOM_INT(_3224)) {
        if (_3224 == (short)_3224){
            _3225 = _3224 * 32;
        }
        else{
            _3225 = NewDouble(_3224 * (eudouble)32);
        }
    }
    else {
        _3225 = binary_op(MULTIPLY, _3224, 32);
    }
    DeRef(_3224);
    _3224 = NOVALUE;
    // SubProg lower pc: 52 op: PLUS (11)
    if (IS_ATOM_INT(_x_6171) && IS_ATOM_INT(_3225)) {
        _3226 = _x_6171 + _3225;
        if ((object)((uintptr_t)_3226 + (uintptr_t)HIGH_BITS) >= 0){
            _3226 = NewDouble((eudouble)_3226);
        }
    }
    else {
        _3226 = binary_op(PLUS, _x_6171, _3225);
    }
    DeRef(_3225);
    _3225 = NOVALUE;
    // SubProg lower pc: 56 op: RETURNF (28)

// Exiting block BLOCK: lower

// block var x_6171
    DeRef(_x_6171);
    return _3226;
    // SubProg lower pc: 60 op: BADRETURNF (43)
    ;
}


object _20upper(object _x_6183)
{
    object _3234 = NOVALUE; // 6192 3234
    object _3233 = NOVALUE; // 6191 3233
    object _3232 = NOVALUE; // 6190 3232
    object _3231 = NOVALUE; // 6189 3231
    object _3230 = NOVALUE; // 6188 3230
// skipping _3229  name type: 0
// skipping _3228  name type: 0
    object _3227 = NOVALUE; // 6185 3227
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg upper pc: 1 op: STARTLINE (58)

    /** text.e:581		if length(upper_case_SET) != 0 then*/
    // SubProg upper pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg upper pc: 5 op: LENGTH (42)
    // Known sequence length:
    _3227 = 0;
    // SubProg upper pc: 8 op: NOTEQ_IFW_I (122)
    // SubProg upper pc: 30 op: STARTLINE (58)

    /** text.e:584		ifdef WINDOWS then*/
    // SubProg upper pc: 32 op: STARTLINE (58)

    /** text.e:587			return x - (x >= 'a' and x <= 'z') * TO_LOWER*/
    // SubProg upper pc: 34 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_6183)) {
        _3230 = (_x_6183 >= 97);
    }
    else {
        _3230 = binary_op(GREATEREQ, _x_6183, 97);
    }
    // SubProg upper pc: 38 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_6183)) {
        _3231 = (_x_6183 <= 122);
    }
    else {
        _3231 = binary_op(LESSEQ, _x_6183, 122);
    }
    // SubProg upper pc: 42 op: AND (8)
    if (IS_ATOM_INT(_3230) && IS_ATOM_INT(_3231)) {
        _3232 = (_3230 != 0 && _3231 != 0);
    }
    else {
        _3232 = binary_op(AND, _3230, _3231);
    }
    DeRef(_3230);
    _3230 = NOVALUE;
    DeRef(_3231);
    _3231 = NOVALUE;
    // SubProg upper pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg upper pc: 48 op: MULTIPLY (13)
    if (IS_ATOM_INT(_3232)) {
        if (_3232 == (short)_3232){
            _3233 = _3232 * 32;
        }
        else{
            _3233 = NewDouble(_3232 * (eudouble)32);
        }
    }
    else {
        _3233 = binary_op(MULTIPLY, _3232, 32);
    }
    DeRef(_3232);
    _3232 = NOVALUE;
    // SubProg upper pc: 52 op: MINUS (10)
    if (IS_ATOM_INT(_x_6183) && IS_ATOM_INT(_3233)) {
        _3234 = _x_6183 - _3233;
        if ((object)((uintptr_t)_3234 +(uintptr_t) HIGH_BITS) >= 0){
            _3234 = NewDouble((eudouble)_3234);
        }
    }
    else {
        _3234 = binary_op(MINUS, _x_6183, _3233);
    }
    DeRef(_3233);
    _3233 = NOVALUE;
    // SubProg upper pc: 56 op: RETURNF (28)

// Exiting block BLOCK: upper

// block var x_6183
    DeRef(_x_6183);
    return _3234;
    // SubProg upper pc: 60 op: BADRETURNF (43)
    ;
}


object _20proper(object _x_6195)
{
    object _pos_6196 = NOVALUE;
    object _inword_6197 = NOVALUE;
    object _convert_6198 = NOVALUE;
    object _res_6199 = NOVALUE;
    object _3264 = NOVALUE; // 6252 3264
    object _3263 = NOVALUE; // 6251 3263
    object _3262 = NOVALUE; // 6250 3262
    object _3261 = NOVALUE; // 6249 3261
    object _3260 = NOVALUE; // 6247 3260
    object _3259 = NOVALUE; // 6246 3259
    object _3258 = NOVALUE; // 6245 3258
    object _3257 = NOVALUE; // 6243 3257
    object _3256 = NOVALUE; // 6237 3256
    object _3255 = NOVALUE; // 6236 3255
// skipping _3254  name type: 0
    object _3253 = NOVALUE; // 6232 3253
    object _3252 = NOVALUE; // 6231 3252
// skipping _3251  name type: 0
// skipping _3249  name type: 0
// skipping _3248  name type: 0
    object _3247 = NOVALUE; // 6221 3247
// skipping _3246  name type: 0
// skipping _3245  name type: 0
    object _3244 = NOVALUE; // 6216 3244
// skipping _3243  name type: 0
// skipping _3242  name type: 0
    object _3241 = NOVALUE; // 6211 3241
// skipping _3240  name type: 0
// skipping _3239  name type: 0
    object _3238 = NOVALUE; // 6207 3238
    object _3237 = NOVALUE; // 6205 3237
    object _3236 = NOVALUE; // 6204 3236
    object _3235 = NOVALUE; // 6202 3235
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg proper pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg proper pc: 3 op: STARTLINE (58)

    /** text.e:633		inword = 0	-- Initially not in a word*/
    // SubProg proper pc: 5 op: ASSIGN_I (113)
    _inword_6197 = 0;
    // SubProg proper pc: 8 op: STARTLINE (58)

    /** text.e:634		convert = 1	-- Initially convert text*/
    // SubProg proper pc: 10 op: ASSIGN_I (113)
    _convert_6198 = 1;
    // SubProg proper pc: 13 op: STARTLINE (58)

    /** text.e:635		res = x		-- Work on a copy of the original, in case we need to restore.*/
    // SubProg proper pc: 15 op: ASSIGN (18)
    RefDS(_x_6195);
    DeRef(_res_6199);
    _res_6199 = _x_6195;
    // SubProg proper pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg proper pc: 20 op: STARTLINE (58)

    /** text.e:636		for i = 1 to length(res) do*/
    // SubProg proper pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_res_6199)){
            _3235 = SEQ_PTR(_res_6199)->length;
    }
    else {
        _3235 = 1;
    }
    // SubProg proper pc: 25 op: FOR_I (125)
    {
        object _i_6201;
        _i_6201 = 1;
L1: // addr: 32 pc: 25 sub: 6193 op: 125
        if (_i_6201 > _3235){
            goto L2; // [25] 298
        }
        // SubProg proper pc: 32 op: STARTLINE (58)

        /** text.e:637			if integer(res[i]) then*/
        // SubProg proper pc: 34 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3236 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 38 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_3236))
        _3237 = 1;
        else if (IS_ATOM_DBL(_3236))
        _3237 = IS_ATOM_INT(DoubleToInt(_3236));
        else
        _3237 = 0;
        _3236 = NOVALUE;
        // SubProg proper pc: 41 op: IF (20)
        if (_3237 == 0)
        {
            _3237 = NOVALUE;
            goto L3; // [41] 209
        }
        else{
            _3237 = NOVALUE;
        }
        // SubProg proper pc: 44 op: STARTLINE (58)

        /** text.e:638				if convert then*/
        // SubProg proper pc: 46 op: IF (20)
        if (_convert_6198 == 0)
        {
            goto L4; // [46] 291
        }
        else{
        }
        // SubProg proper pc: 49 op: STARTLINE (58)

        /** text.e:640					pos = types:t_upper(res[i])*/
        // SubProg proper pc: 51 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3238 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 55 op: PROC (27)
        Ref(_3238);
        _pos_6196 = _6t_upper(_3238);
        _3238 = NOVALUE;
        // SubProg proper pc: 59 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_6196)) {
            _1 = (object)(DBL_PTR(_pos_6196)->dbl);
            DeRefDS(_pos_6196);
            _pos_6196 = _1;
        }
        // SubProg proper pc: 61 op: STARTLINE (58)

        /** text.e:641					if pos = 0 then*/
        // SubProg proper pc: 63 op: EQUALS_IFW_I (121)
        if (_pos_6196 != 0)
        goto L5; // [63] 175
        // SubProg proper pc: 67 op: STARTLINE (58)

        /** text.e:643						pos = types:t_lower(res[i])*/
        // SubProg proper pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3241 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 73 op: PROC (27)
        Ref(_3241);
        _pos_6196 = _6t_lower(_3241);
        _3241 = NOVALUE;
        // SubProg proper pc: 77 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_6196)) {
            _1 = (object)(DBL_PTR(_pos_6196)->dbl);
            DeRefDS(_pos_6196);
            _pos_6196 = _1;
        }
        // SubProg proper pc: 79 op: STARTLINE (58)

        /** text.e:644						if pos = 0 then*/
        // SubProg proper pc: 81 op: EQUALS_IFW_I (121)
        if (_pos_6196 != 0)
        goto L6; // [81] 138
        // SubProg proper pc: 85 op: STARTLINE (58)

        /** text.e:647							pos = t_digit(res[i])*/
        // SubProg proper pc: 87 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3244 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 91 op: PROC (27)
        Ref(_3244);
        _pos_6196 = _6t_digit(_3244);
        _3244 = NOVALUE;
        // SubProg proper pc: 95 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_6196)) {
            _1 = (object)(DBL_PTR(_pos_6196)->dbl);
            DeRefDS(_pos_6196);
            _pos_6196 = _1;
        }
        // SubProg proper pc: 97 op: STARTLINE (58)

        /** text.e:648							if pos = 0 then*/
        // SubProg proper pc: 99 op: EQUALS_IFW_I (121)
        if (_pos_6196 != 0)
        goto L4; // [99] 291
        // SubProg proper pc: 103 op: STARTLINE (58)

        /** text.e:650								pos = t_specword(res[i])*/
        // SubProg proper pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3247 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 109 op: PROC (27)
        Ref(_3247);
        _pos_6196 = _6t_specword(_3247);
        _3247 = NOVALUE;
        // SubProg proper pc: 113 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_pos_6196)) {
            _1 = (object)(DBL_PTR(_pos_6196)->dbl);
            DeRefDS(_pos_6196);
            _pos_6196 = _1;
        }
        // SubProg proper pc: 115 op: STARTLINE (58)

        /** text.e:651								if pos then*/
        // SubProg proper pc: 117 op: IF (20)
        if (_pos_6196 == 0)
        {
            goto L7; // [117] 128
        }
        else{
        }
        // SubProg proper pc: 120 op: STARTLINE (58)

        /** text.e:652									inword = 1*/
        // SubProg proper pc: 122 op: ASSIGN_I (113)
        _inword_6197 = 1;
        // SubProg proper pc: 125 op: ELSE (23)
        goto L4; // [125] 291
        // SubProg proper pc: 127 op: NOP1 (159)
L7: // addr: 128 pc: 127 sub: 6193 op: 159
        // SubProg proper pc: 128 op: STARTLINE (58)

        /** text.e:654									inword = 0*/
        // SubProg proper pc: 130 op: ASSIGN_I (113)
        _inword_6197 = 0;
        // SubProg proper pc: 133 op: NOP1 (159)
        // SubProg proper pc: 134 op: NOP1 (159)
        // SubProg proper pc: 135 op: ELSE (23)
        goto L4; // [135] 291
        // SubProg proper pc: 137 op: NOP1 (159)
L6: // addr: 138 pc: 137 sub: 6193 op: 159
        // SubProg proper pc: 138 op: STARTLINE (58)

        /** text.e:658							if inword = 0 then*/
        // SubProg proper pc: 140 op: EQUALS_IFW_I (121)
        if (_inword_6197 != 0)
        goto L4; // [140] 291
        // SubProg proper pc: 144 op: STARTLINE (58)

        /** text.e:660								if pos <= 26 then*/
        // SubProg proper pc: 146 op: LESSEQ_IFW_I (123)
        if (_pos_6196 > 26)
        goto L8; // [146] 165
        // SubProg proper pc: 150 op: STARTLINE (58)

        /** text.e:661									res[i] = upper(res[i]) -- Convert to uppercase*/
        // SubProg proper pc: 152 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3252 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 156 op: PROC (27)
        Ref(_3252);
        _3253 = _20upper(_3252);
        _3252 = NOVALUE;
        // SubProg proper pc: 160 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_6199);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_6199 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_6201);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3253;
        if( _1 != _3253 ){
            DeRef(_1);
        }
        _3253 = NOVALUE;
        // SubProg proper pc: 164 op: NOP1 (159)
L8: // addr: 165 pc: 164 sub: 6193 op: 159
        // SubProg proper pc: 165 op: STARTLINE (58)

        /** text.e:663								inword = 1	-- now we are in a word*/
        // SubProg proper pc: 167 op: ASSIGN_I (113)
        _inword_6197 = 1;
        // SubProg proper pc: 170 op: NOP1 (159)
        // SubProg proper pc: 171 op: NOP1 (159)
        // SubProg proper pc: 172 op: ELSE (23)
        goto L4; // [172] 291
        // SubProg proper pc: 174 op: NOP1 (159)
L5: // addr: 175 pc: 174 sub: 6193 op: 159
        // SubProg proper pc: 175 op: STARTLINE (58)

        /** text.e:667						if inword = 1 then*/
        // SubProg proper pc: 177 op: EQUALS_IFW_I (121)
        if (_inword_6197 != 1)
        goto L9; // [177] 198
        // SubProg proper pc: 181 op: STARTLINE (58)

        /** text.e:669							res[i] = lower(res[i]) -- Convert to lowercase*/
        // SubProg proper pc: 183 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3255 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 187 op: PROC (27)
        Ref(_3255);
        _3256 = _20lower(_3255);
        _3255 = NOVALUE;
        // SubProg proper pc: 191 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_6199);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_6199 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_6201);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3256;
        if( _1 != _3256 ){
            DeRef(_1);
        }
        _3256 = NOVALUE;
        // SubProg proper pc: 195 op: ELSE (23)
        goto L4; // [195] 291
        // SubProg proper pc: 197 op: NOP1 (159)
L9: // addr: 198 pc: 197 sub: 6193 op: 159
        // SubProg proper pc: 198 op: STARTLINE (58)

        /** text.e:671							inword = 1	-- now we are in a word*/
        // SubProg proper pc: 200 op: ASSIGN_I (113)
        _inword_6197 = 1;
        // SubProg proper pc: 203 op: NOP1 (159)
        // SubProg proper pc: 204 op: NOP1 (159)
        // SubProg proper pc: 205 op: NOP1 (159)
        // SubProg proper pc: 206 op: ELSE (23)
        goto L4; // [206] 291
        // SubProg proper pc: 208 op: NOP1 (159)
L3: // addr: 209 pc: 208 sub: 6193 op: 159
        // SubProg proper pc: 209 op: STARTLINE (58)

        /** text.e:678				if convert then*/
        // SubProg proper pc: 211 op: IF (20)
        if (_convert_6198 == 0)
        {
            goto LA; // [211] 263
        }
        else{
        }
        // SubProg proper pc: 214 op: STARTLINE (58)

        /** text.e:680					for j = 1 to i-1 do*/
        // SubProg proper pc: 216 op: MINUS (10)
        _3257 = _i_6201 - 1;
        // SubProg proper pc: 220 op: FOR (21)
        {
            object _j_6242;
            _j_6242 = 1;
LB: // addr: 227 pc: 220 sub: 6193 op: 21
            if (_j_6242 > _3257){
                goto LC; // [220] 257
            }
            // SubProg proper pc: 227 op: STARTLINE (58)

            /** text.e:681						if atom(x[j]) then*/
            // SubProg proper pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_x_6195);
            _3258 = (object)*(((s1_ptr)_2)->base + _j_6242);
            // SubProg proper pc: 233 op: IS_AN_ATOM (67)
            _3259 = IS_ATOM(_3258);
            _3258 = NOVALUE;
            // SubProg proper pc: 236 op: IF (20)
            if (_3259 == 0)
            {
                _3259 = NOVALUE;
                goto LD; // [236] 250
            }
            else{
                _3259 = NOVALUE;
            }
            // SubProg proper pc: 239 op: STARTLINE (58)

            /** text.e:682							res[j] = x[j]*/
            // SubProg proper pc: 241 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_x_6195);
            _3260 = (object)*(((s1_ptr)_2)->base + _j_6242);
            // SubProg proper pc: 245 op: ASSIGN_SUBS (16)
            Ref(_3260);
            _2 = (object)SEQ_PTR(_res_6199);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _res_6199 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _j_6242);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3260;
            if( _1 != _3260 ){
                DeRef(_1);
            }
            _3260 = NOVALUE;
            // SubProg proper pc: 249 op: NOP1 (159)
LD: // addr: 250 pc: 249 sub: 6193 op: 159
            // SubProg proper pc: 250 op: STARTLINE (58)

            /** text.e:684					end for*/
            // SubProg proper pc: 252 op: ENDFOR_INT_UP1 (54)
            _j_6242 = _j_6242 + 1;
            goto LB; // [252] 227
LC: // addr: 257 pc: 252 sub: 6193 op: 54
            ;
        }
        // SubProg proper pc: 257 op: STARTLINE (58)

        /** text.e:686					convert = 0*/
        // SubProg proper pc: 259 op: ASSIGN_I (113)
        _convert_6198 = 0;
        // SubProg proper pc: 262 op: NOP1 (159)
LA: // addr: 263 pc: 262 sub: 6193 op: 159
        // SubProg proper pc: 263 op: STARTLINE (58)

        /** text.e:689				if sequence(res[i]) then*/
        // SubProg proper pc: 265 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3261 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 269 op: IS_A_SEQUENCE (68)
        _3262 = IS_SEQUENCE(_3261);
        _3261 = NOVALUE;
        // SubProg proper pc: 272 op: IF (20)
        if (_3262 == 0)
        {
            _3262 = NOVALUE;
            goto LE; // [272] 290
        }
        else{
            _3262 = NOVALUE;
        }
        // SubProg proper pc: 275 op: STARTLINE (58)

        /** text.e:690					res[i] = proper(res[i])	-- recursive conversion*/
        // SubProg proper pc: 277 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_res_6199);
        _3263 = (object)*(((s1_ptr)_2)->base + _i_6201);
        // SubProg proper pc: 281 op: PROC (27)
        Ref(_3263);
        _3264 = _20proper(_3263);
        _3263 = NOVALUE;
        // SubProg proper pc: 285 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_res_6199);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_6199 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_6201);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3264;
        if( _1 != _3264 ){
            DeRef(_1);
        }
        _3264 = NOVALUE;
        // SubProg proper pc: 289 op: NOP1 (159)
LE: // addr: 290 pc: 289 sub: 6193 op: 159
        // SubProg proper pc: 290 op: NOP1 (159)
L4: // addr: 291 pc: 290 sub: 6193 op: 159
        // SubProg proper pc: 291 op: STARTLINE (58)

        /** text.e:693		end for*/
        // SubProg proper pc: 293 op: ENDFOR_INT_UP1 (54)
        _i_6201 = _i_6201 + 1;
        goto L1; // [293] 32
L2: // addr: 298 pc: 293 sub: 6193 op: 54
        ;
    }
    // SubProg proper pc: 298 op: STARTLINE (58)

    /** text.e:694		return res*/
    // SubProg proper pc: 300 op: RETURNF (28)

// Exiting block BLOCK: proper

// block var x_6195
    DeRefDS(_x_6195);

// block var pos_6196

// block var inword_6197

// block var convert_6198
    DeRef(_3257);
    _3257 = NOVALUE;
    return _res_6199;
    // SubProg proper pc: 304 op: BADRETURNF (43)
    ;
}


object _20quote(object _text_in_6518, object _quote_pair_6519, object _esc_6521, object _sp_6523)
{
    object _3535 = NOVALUE; // 6633 3535
    object _3534 = NOVALUE; // 6632 3534
    object _3533 = NOVALUE; // 6631 3533
// skipping _3532  name type: 0
    object _3531 = NOVALUE; // 6629 3531
    object _3530 = NOVALUE; // 6628 3530
    object _3529 = NOVALUE; // 6627 3529
// skipping _3528  name type: 0
    object _3527 = NOVALUE; // 6625 3527
    object _3526 = NOVALUE; // 6624 3526
    object _3525 = NOVALUE; // 6623 3525
    object _3524 = NOVALUE; // 6622 3524
    object _3523 = NOVALUE; // 6621 3523
    object _3522 = NOVALUE; // 6620 3522
    object _3521 = NOVALUE; // 6619 3521
    object _3520 = NOVALUE; // 6617 3520
    object _3519 = NOVALUE; // 6616 3519
// skipping _3518  name type: 0
    object _3517 = NOVALUE; // 6613 3517
    object _3516 = NOVALUE; // 6612 3516
    object _3515 = NOVALUE; // 6611 3515
// skipping _3514  name type: 0
    object _3513 = NOVALUE; // 6608 3513
    object _3512 = NOVALUE; // 6607 3512
    object _3511 = NOVALUE; // 6606 3511
    object _3510 = NOVALUE; // 6605 3510
    object _3509 = NOVALUE; // 6604 3509
    object _3508 = NOVALUE; // 6603 3508
    object _3507 = NOVALUE; // 6602 3507
    object _3506 = NOVALUE; // 6600 3506
    object _3505 = NOVALUE; // 6599 3505
// skipping _3504  name type: 0
    object _3503 = NOVALUE; // 6597 3503
    object _3502 = NOVALUE; // 6596 3502
// skipping _3501  name type: 0
    object _3500 = NOVALUE; // 6592 3500
    object _3499 = NOVALUE; // 6591 3499
    object _3498 = NOVALUE; // 6590 3498
// skipping _3497  name type: 0
    object _3496 = NOVALUE; // 6588 3496
    object _3495 = NOVALUE; // 6587 3495
    object _3494 = NOVALUE; // 6586 3494
    object _3493 = NOVALUE; // 6585 3493
    object _3492 = NOVALUE; // 6583 3492
    object _3491 = NOVALUE; // 6582 3491
    object _3490 = NOVALUE; // 6580 3490
    object _3489 = NOVALUE; // 6579 3489
    object _3488 = NOVALUE; // 6578 3488
    object _3487 = NOVALUE; // 6576 3487
    object _3486 = NOVALUE; // 6575 3486
    object _3485 = NOVALUE; // 6574 3485
    object _3484 = NOVALUE; // 6573 3484
    object _3483 = NOVALUE; // 6571 3483
    object _3482 = NOVALUE; // 6570 3482
    object _3481 = NOVALUE; // 6569 3481
    object _3480 = NOVALUE; // 6568 3480
// skipping _3479  name type: 0
// skipping _3478  name type: 0
    object _3477 = NOVALUE; // 6563 3477
    object _3476 = NOVALUE; // 6561 3476
    object _3475 = NOVALUE; // 6560 3475
    object _3474 = NOVALUE; // 6558 3474
    object _3473 = NOVALUE; // 6555 3473
    object _3472 = NOVALUE; // 6554 3472
    object _3471 = NOVALUE; // 6553 3471
    object _3470 = NOVALUE; // 6552 3470
    object _3469 = NOVALUE; // 6551 3469
    object _3468 = NOVALUE; // 6550 3468
    object _3467 = NOVALUE; // 6549 3467
    object _3466 = NOVALUE; // 6547 3466
    object _3465 = NOVALUE; // 6544 3465
    object _3464 = NOVALUE; // 6543 3464
// skipping _3463  name type: 0
// skipping _3462  name type: 0
    object _3461 = NOVALUE; // 6539 3461
// skipping _3460  name type: 0
    object _3459 = NOVALUE; // 6536 3459
    object _3458 = NOVALUE; // 6535 3458
// skipping _3457  name type: 0
    object _3456 = NOVALUE; // 6533 3456
// skipping _3455  name type: 0
    object _3454 = NOVALUE; // 6530 3454
    object _3453 = NOVALUE; // 6529 3453
    object _3452 = NOVALUE; // 6528 3452
// skipping _3451  name type: 0
    object _3450 = NOVALUE; // 6525 3450
// skipping _3449  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg quote pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 3 op: INTEGER_CHECK (96)
    // SubProg quote pc: 5 op: STARTLINE (58)

    /** text.e:1118		if length(text_in) = 0 then*/
    // SubProg quote pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_6518)){
            _3450 = SEQ_PTR(_text_in_6518)->length;
    }
    else {
        _3450 = 1;
    }
    // SubProg quote pc: 10 op: EQUALS_IFW_I (121)
    if (_3450 != 0)
    goto L1; // [10] 21
    // SubProg quote pc: 14 op: STARTLINE (58)

    /** text.e:1119			return text_in*/
    // SubProg quote pc: 16 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_6519
    DeRef(_quote_pair_6519);

// block var esc_6521

// block var sp_6523
    DeRef(_sp_6523);
    return _text_in_6518;
    // SubProg quote pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 6516 op: 159
    // SubProg quote pc: 21 op: STARTLINE (58)

    /** text.e:1122		if atom(quote_pair) then*/
    // SubProg quote pc: 23 op: IS_AN_ATOM (67)
    _3452 = IS_ATOM(_quote_pair_6519);
    // SubProg quote pc: 26 op: IF (20)
    if (_3452 == 0)
    {
        _3452 = NOVALUE;
        goto L2; // [26] 46
    }
    else{
        _3452 = NOVALUE;
    }
    // SubProg quote pc: 29 op: STARTLINE (58)

    /** text.e:1123			quote_pair = {{quote_pair}, {quote_pair}}*/
    // SubProg quote pc: 31 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_6519);
    ((intptr_t*)_2)[1] = _quote_pair_6519;
    _3453 = MAKE_SEQ(_1);
    // SubProg quote pc: 35 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_6519);
    ((intptr_t*)_2)[1] = _quote_pair_6519;
    _3454 = MAKE_SEQ(_1);
    // SubProg quote pc: 39 op: RIGHT_BRACE_2 (85)
    DeRef(_quote_pair_6519);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3453;
    ((intptr_t *)_2)[2] = _3454;
    _quote_pair_6519 = MAKE_SEQ(_1);
    _3454 = NOVALUE;
    _3453 = NOVALUE;
    // SubProg quote pc: 43 op: ELSE (23)
    goto L3; // [43] 89
    // SubProg quote pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 6516 op: 159
    // SubProg quote pc: 46 op: STARTLINE (58)

    /** text.e:1124		elsif length(quote_pair) = 1 then*/
    // SubProg quote pc: 48 op: LENGTH (42)
    if (IS_SEQUENCE(_quote_pair_6519)){
            _3456 = SEQ_PTR(_quote_pair_6519)->length;
    }
    else {
        _3456 = 1;
    }
    // SubProg quote pc: 51 op: EQUALS_IFW_I (121)
    if (_3456 != 1)
    goto L4; // [51] 72
    // SubProg quote pc: 55 op: STARTLINE (58)

    /** text.e:1125			quote_pair = {quote_pair[1], quote_pair[1]}*/
    // SubProg quote pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3458 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3459 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 65 op: RIGHT_BRACE_2 (85)
    Ref(_3459);
    Ref(_3458);
    DeRef(_quote_pair_6519);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3458;
    ((intptr_t *)_2)[2] = _3459;
    _quote_pair_6519 = MAKE_SEQ(_1);
    _3459 = NOVALUE;
    _3458 = NOVALUE;
    // SubProg quote pc: 69 op: ELSE (23)
    goto L3; // [69] 89
    // SubProg quote pc: 71 op: NOP1 (159)
L4: // addr: 72 pc: 71 sub: 6516 op: 159
    // SubProg quote pc: 72 op: STARTLINE (58)

    /** text.e:1126		elsif length(quote_pair) = 0 then*/
    // SubProg quote pc: 74 op: LENGTH (42)
    if (IS_SEQUENCE(_quote_pair_6519)){
            _3461 = SEQ_PTR(_quote_pair_6519)->length;
    }
    else {
        _3461 = 1;
    }
    // SubProg quote pc: 77 op: EQUALS_IFW_I (121)
    if (_3461 != 0)
    goto L5; // [77] 88
    // SubProg quote pc: 81 op: STARTLINE (58)

    /** text.e:1127			quote_pair = {"\"", "\""}*/
    // SubProg quote pc: 83 op: RIGHT_BRACE_2 (85)
    RefDS(_3442);
    RefDS(_3442);
    DeRef(_quote_pair_6519);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3442;
    ((intptr_t *)_2)[2] = _3442;
    _quote_pair_6519 = MAKE_SEQ(_1);
    // SubProg quote pc: 87 op: NOP1 (159)
L5: // addr: 88 pc: 87 sub: 6516 op: 159
    // SubProg quote pc: 88 op: NOP1 (159)
L3: // addr: 89 pc: 88 sub: 6516 op: 159
    // SubProg quote pc: 89 op: STARTLINE (58)

    /** text.e:1130		if sequence(text_in[1]) then*/
    // SubProg quote pc: 91 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_text_in_6518);
    _3464 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 95 op: IS_A_SEQUENCE (68)
    _3465 = IS_SEQUENCE(_3464);
    _3464 = NOVALUE;
    // SubProg quote pc: 98 op: IF (20)
    if (_3465 == 0)
    {
        _3465 = NOVALUE;
        goto L6; // [98] 166
    }
    else{
        _3465 = NOVALUE;
    }
    // SubProg quote pc: 101 op: STARTLINE (58)

    /** text.e:1131			for i = 1 to length(text_in) do*/
    // SubProg quote pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_6518)){
            _3466 = SEQ_PTR(_text_in_6518)->length;
    }
    else {
        _3466 = 1;
    }
    // SubProg quote pc: 106 op: FOR_I (125)
    {
        object _i_6546;
        _i_6546 = 1;
L7: // addr: 113 pc: 106 sub: 6516 op: 125
        if (_i_6546 > _3466){
            goto L8; // [106] 159
        }
        // SubProg quote pc: 113 op: STARTLINE (58)

        /** text.e:1132				if sequence(text_in[i]) then*/
        // SubProg quote pc: 115 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_6518);
        _3467 = (object)*(((s1_ptr)_2)->base + _i_6546);
        // SubProg quote pc: 119 op: IS_A_SEQUENCE (68)
        _3468 = IS_SEQUENCE(_3467);
        _3467 = NOVALUE;
        // SubProg quote pc: 122 op: IF (20)
        if (_3468 == 0)
        {
            _3468 = NOVALUE;
            goto L9; // [122] 152
        }
        else{
            _3468 = NOVALUE;
        }
        // SubProg quote pc: 125 op: STARTLINE (58)

        /** text.e:1133					text_in[i] = quote(text_in[i], quote_pair, esc, sp)*/
        // SubProg quote pc: 127 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_6518);
        _3469 = (object)*(((s1_ptr)_2)->base + _i_6546);
        // SubProg quote pc: 131 op: ASSIGN (18)
        Ref(_quote_pair_6519);
        DeRef(_3470);
        _3470 = _quote_pair_6519;
        // SubProg quote pc: 134 op: ASSIGN (18)
        DeRef(_3471);
        _3471 = _esc_6521;
        // SubProg quote pc: 137 op: ASSIGN (18)
        Ref(_sp_6523);
        DeRef(_3472);
        _3472 = _sp_6523;
        // SubProg quote pc: 140 op: PROC (27)
        Ref(_3469);
        _3473 = _20quote(_3469, _3470, _3471, _3472);
        _3469 = NOVALUE;
        _3470 = NOVALUE;
        _3471 = NOVALUE;
        _3472 = NOVALUE;
        // SubProg quote pc: 147 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_text_in_6518);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _text_in_6518 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_6546);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3473;
        if( _1 != _3473 ){
            DeRef(_1);
        }
        _3473 = NOVALUE;
        // SubProg quote pc: 151 op: NOP1 (159)
L9: // addr: 152 pc: 151 sub: 6516 op: 159
        // SubProg quote pc: 152 op: STARTLINE (58)

        /** text.e:1135			end for*/
        // SubProg quote pc: 154 op: ENDFOR_INT_UP1 (54)
        _i_6546 = _i_6546 + 1;
        goto L7; // [154] 113
L8: // addr: 159 pc: 154 sub: 6516 op: 54
        ;
    }
    // SubProg quote pc: 159 op: STARTLINE (58)

    /** text.e:1137			return text_in*/
    // SubProg quote pc: 161 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_6519
    DeRef(_quote_pair_6519);

// block var esc_6521

// block var sp_6523
    DeRef(_sp_6523);
    return _text_in_6518;
    // SubProg quote pc: 165 op: NOP1 (159)
L6: // addr: 166 pc: 165 sub: 6516 op: 159
    // SubProg quote pc: 166 op: STARTLINE (58)

    /** text.e:1141		for i = 1 to length(sp) do*/
    // SubProg quote pc: 168 op: LENGTH (42)
    if (IS_SEQUENCE(_sp_6523)){
            _3474 = SEQ_PTR(_sp_6523)->length;
    }
    else {
        _3474 = 1;
    }
    // SubProg quote pc: 171 op: FOR_I (125)
    {
        object _i_6557;
        _i_6557 = 1;
LA: // addr: 178 pc: 171 sub: 6516 op: 125
        if (_i_6557 > _3474){
            goto LB; // [171] 220
        }
        // SubProg quote pc: 178 op: STARTLINE (58)

        /** text.e:1142			if find(sp[i], text_in) then*/
        // SubProg quote pc: 180 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_sp_6523);
        _3475 = (object)*(((s1_ptr)_2)->base + _i_6557);
        // SubProg quote pc: 184 op: FIND_FROM (176)
        _3476 = find_from(_3475, _text_in_6518, 1);
        _3475 = NOVALUE;
        // SubProg quote pc: 189 op: IF (20)
        if (_3476 == 0)
        {
            _3476 = NOVALUE;
            goto LC; // [189] 197
        }
        else{
            _3476 = NOVALUE;
        }
        // SubProg quote pc: 192 op: STARTLINE (58)

        /** text.e:1143				exit*/
        // SubProg quote pc: 194 op: EXIT (61)
        goto LB; // [194] 220
        // SubProg quote pc: 196 op: NOP1 (159)
LC: // addr: 197 pc: 196 sub: 6516 op: 159
        // SubProg quote pc: 197 op: STARTLINE (58)

        /** text.e:1146			if i = length(sp) then*/
        // SubProg quote pc: 199 op: LENGTH (42)
        if (IS_SEQUENCE(_sp_6523)){
                _3477 = SEQ_PTR(_sp_6523)->length;
        }
        else {
            _3477 = 1;
        }
        // SubProg quote pc: 202 op: EQUALS_IFW_I (121)
        if (_i_6557 != _3477)
        goto LD; // [202] 213
        // SubProg quote pc: 206 op: STARTLINE (58)

        /** text.e:1148				return text_in*/
        // SubProg quote pc: 208 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var quote_pair_6519
        DeRef(_quote_pair_6519);

// block var esc_6521

// block var sp_6523
        DeRef(_sp_6523);
        return _text_in_6518;
        // SubProg quote pc: 212 op: NOP1 (159)
LD: // addr: 213 pc: 212 sub: 6516 op: 159
        // SubProg quote pc: 213 op: STARTLINE (58)

        /** text.e:1150		end for*/
        // SubProg quote pc: 215 op: ENDFOR_INT_UP1 (54)
        _i_6557 = _i_6557 + 1;
        goto LA; // [215] 178
LB: // addr: 220 pc: 215 sub: 6516 op: 54
        ;
    }
    // SubProg quote pc: 220 op: STARTLINE (58)

    /** text.e:1152		if esc >= 0  then*/
    // SubProg quote pc: 222 op: GREATEREQ_IFW_I (120)
    if (_esc_6521 < 0)
    goto LE; // [222] 561
    // SubProg quote pc: 226 op: STARTLINE (58)

    /** text.e:1156			if atom(quote_pair[1]) then*/
    // SubProg quote pc: 228 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3480 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 232 op: IS_AN_ATOM (67)
    _3481 = IS_ATOM(_3480);
    _3480 = NOVALUE;
    // SubProg quote pc: 235 op: IF (20)
    if (_3481 == 0)
    {
        _3481 = NOVALUE;
        goto LF; // [235] 253
    }
    else{
        _3481 = NOVALUE;
    }
    // SubProg quote pc: 238 op: STARTLINE (58)

    /** text.e:1157				quote_pair[1] = {quote_pair[1]}*/
    // SubProg quote pc: 240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3482 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 244 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_3482);
    ((intptr_t*)_2)[1] = _3482;
    _3483 = MAKE_SEQ(_1);
    _3482 = NOVALUE;
    // SubProg quote pc: 248 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_6519 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3483;
    if( _1 != _3483 ){
        DeRef(_1);
    }
    _3483 = NOVALUE;
    // SubProg quote pc: 252 op: NOP1 (159)
LF: // addr: 253 pc: 252 sub: 6516 op: 159
    // SubProg quote pc: 253 op: STARTLINE (58)

    /** text.e:1159			if atom(quote_pair[2]) then*/
    // SubProg quote pc: 255 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3484 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 259 op: IS_AN_ATOM (67)
    _3485 = IS_ATOM(_3484);
    _3484 = NOVALUE;
    // SubProg quote pc: 262 op: IF (20)
    if (_3485 == 0)
    {
        _3485 = NOVALUE;
        goto L10; // [262] 280
    }
    else{
        _3485 = NOVALUE;
    }
    // SubProg quote pc: 265 op: STARTLINE (58)

    /** text.e:1160				quote_pair[2] = {quote_pair[2]}*/
    // SubProg quote pc: 267 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3486 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 271 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_3486);
    ((intptr_t*)_2)[1] = _3486;
    _3487 = MAKE_SEQ(_1);
    _3486 = NOVALUE;
    // SubProg quote pc: 275 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_6519 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3487;
    if( _1 != _3487 ){
        DeRef(_1);
    }
    _3487 = NOVALUE;
    // SubProg quote pc: 279 op: NOP1 (159)
L10: // addr: 280 pc: 279 sub: 6516 op: 159
    // SubProg quote pc: 280 op: STARTLINE (58)

    /** text.e:1163			if equal(quote_pair[1], quote_pair[2]) then*/
    // SubProg quote pc: 282 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3488 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 286 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3489 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 290 op: EQUAL (153)
    if (_3488 == _3489)
    _3490 = 1;
    else if (IS_ATOM_INT(_3488) && IS_ATOM_INT(_3489))
    _3490 = 0;
    else
    _3490 = (compare(_3488, _3489) == 0);
    _3488 = NOVALUE;
    _3489 = NOVALUE;
    // SubProg quote pc: 294 op: IF (20)
    if (_3490 == 0)
    {
        _3490 = NOVALUE;
        goto L11; // [294] 372
    }
    else{
        _3490 = NOVALUE;
    }
    // SubProg quote pc: 297 op: STARTLINE (58)

    /** text.e:1165				if match(quote_pair[1], text_in) then*/
    // SubProg quote pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3491 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 303 op: MATCH_FROM (177)
    _3492 = e_match_from(_3491, _text_in_6518, 1);
    _3491 = NOVALUE;
    // SubProg quote pc: 308 op: IF (20)
    if (_3492 == 0)
    {
        _3492 = NOVALUE;
        goto L12; // [308] 560
    }
    else{
        _3492 = NOVALUE;
    }
    // SubProg quote pc: 311 op: STARTLINE (58)

    /** text.e:1166					if match(esc & quote_pair[1], text_in) then*/
    // SubProg quote pc: 313 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3493 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 317 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3493)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3493)) {
        Prepend(&_3494, _3493, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3494, _esc_6521, _3493);
    }
    _3493 = NOVALUE;
    // SubProg quote pc: 321 op: MATCH_FROM (177)
    _3495 = e_match_from(_3494, _text_in_6518, 1);
    DeRefDS(_3494);
    _3494 = NOVALUE;
    // SubProg quote pc: 326 op: IF (20)
    if (_3495 == 0)
    {
        _3495 = NOVALUE;
        goto L13; // [326] 345
    }
    else{
        _3495 = NOVALUE;
    }
    // SubProg quote pc: 329 op: STARTLINE (58)

    /** text.e:1167						text_in = search:match_replace(esc, text_in, esc & esc)*/
    // SubProg quote pc: 331 op: CONCAT (15)
    Concat((object_ptr)&_3496, _esc_6521, _esc_6521);
    // SubProg quote pc: 335 op: PROC (27)
    RefDS(_text_in_6518);
    _0 = _text_in_6518;
    _text_in_6518 = _22match_replace(_esc_6521, _text_in_6518, _3496, 0);
    DeRefDS(_0);
    _3496 = NOVALUE;
    // SubProg quote pc: 342 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 344 op: NOP1 (159)
L13: // addr: 345 pc: 344 sub: 6516 op: 159
    // SubProg quote pc: 345 op: STARTLINE (58)

    /** text.e:1169					text_in = search:match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    // SubProg quote pc: 347 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3498 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 351 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3499 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 355 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3499)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3499)) {
        Prepend(&_3500, _3499, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3500, _esc_6521, _3499);
    }
    _3499 = NOVALUE;
    // SubProg quote pc: 359 op: PROC (27)
    Ref(_3498);
    RefDS(_text_in_6518);
    _0 = _text_in_6518;
    _text_in_6518 = _22match_replace(_3498, _text_in_6518, _3500, 0);
    DeRefDS(_0);
    _3498 = NOVALUE;
    _3500 = NOVALUE;
    // SubProg quote pc: 366 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 368 op: NOP1 (159)
    // SubProg quote pc: 369 op: ELSE (23)
    goto L12; // [369] 560
    // SubProg quote pc: 371 op: NOP1 (159)
L11: // addr: 372 pc: 371 sub: 6516 op: 159
    // SubProg quote pc: 372 op: STARTLINE (58)

    /** text.e:1172				if match(quote_pair[1], text_in) or*/
    // SubProg quote pc: 374 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3502 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 378 op: MATCH_FROM (177)
    _3503 = e_match_from(_3502, _text_in_6518, 1);
    _3502 = NOVALUE;
    // SubProg quote pc: 383 op: SC1_OR_IF (147)
    if (_3503 != 0) {
        goto L14; // [383] 401
    }
    // SubProg quote pc: 387 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3505 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 391 op: MATCH_FROM (177)
    _3506 = e_match_from(_3505, _text_in_6518, 1);
    _3505 = NOVALUE;
    // SubProg quote pc: 396 op: NOP1 (159)
    // SubProg quote pc: 397 op: IF (20)
    if (_3506 == 0)
    {
        _3506 = NOVALUE;
        goto L15; // [397] 473
    }
    else{
        _3506 = NOVALUE;
    }
    // SubProg quote pc: 400 op: NOP1 (159)
L14: // addr: 401 pc: 400 sub: 6516 op: 159
    // SubProg quote pc: 401 op: STARTLINE (58)

    /** text.e:1174					if match(esc & quote_pair[1], text_in) then*/
    // SubProg quote pc: 403 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3507 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 407 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3507)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3507)) {
        Prepend(&_3508, _3507, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3508, _esc_6521, _3507);
    }
    _3507 = NOVALUE;
    // SubProg quote pc: 411 op: MATCH_FROM (177)
    _3509 = e_match_from(_3508, _text_in_6518, 1);
    DeRefDS(_3508);
    _3508 = NOVALUE;
    // SubProg quote pc: 416 op: IF (20)
    if (_3509 == 0)
    {
        _3509 = NOVALUE;
        goto L16; // [416] 449
    }
    else{
        _3509 = NOVALUE;
    }
    // SubProg quote pc: 419 op: STARTLINE (58)

    /** text.e:1175						text_in = search:match_replace(esc & quote_pair[1], text_in, esc & esc & quote_pair[1])*/
    // SubProg quote pc: 421 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3510 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 425 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3510)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3510)) {
        Prepend(&_3511, _3510, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3511, _esc_6521, _3510);
    }
    _3510 = NOVALUE;
    // SubProg quote pc: 429 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3512 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 433 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3512;
        concat_list[1] = _esc_6521;
        concat_list[2] = _esc_6521;
        Concat_N((object_ptr)&_3513, concat_list, 3);
    }
    _3512 = NOVALUE;
    // SubProg quote pc: 439 op: PROC (27)
    RefDS(_text_in_6518);
    _0 = _text_in_6518;
    _text_in_6518 = _22match_replace(_3511, _text_in_6518, _3513, 0);
    DeRefDS(_0);
    _3511 = NOVALUE;
    _3513 = NOVALUE;
    // SubProg quote pc: 446 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 448 op: NOP1 (159)
L16: // addr: 449 pc: 448 sub: 6516 op: 159
    // SubProg quote pc: 449 op: STARTLINE (58)

    /** text.e:1177					text_in = match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    // SubProg quote pc: 451 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3515 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 455 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3516 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 459 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3516)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3516)) {
        Prepend(&_3517, _3516, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3517, _esc_6521, _3516);
    }
    _3516 = NOVALUE;
    // SubProg quote pc: 463 op: PROC (27)
    Ref(_3515);
    RefDS(_text_in_6518);
    _0 = _text_in_6518;
    _text_in_6518 = _22match_replace(_3515, _text_in_6518, _3517, 0);
    DeRefDS(_0);
    _3515 = NOVALUE;
    _3517 = NOVALUE;
    // SubProg quote pc: 470 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 472 op: NOP1 (159)
L15: // addr: 473 pc: 472 sub: 6516 op: 159
    // SubProg quote pc: 473 op: STARTLINE (58)

    /** text.e:1180				if match(quote_pair[2], text_in) then*/
    // SubProg quote pc: 475 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3519 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 479 op: MATCH_FROM (177)
    _3520 = e_match_from(_3519, _text_in_6518, 1);
    _3519 = NOVALUE;
    // SubProg quote pc: 484 op: IF (20)
    if (_3520 == 0)
    {
        _3520 = NOVALUE;
        goto L17; // [484] 559
    }
    else{
        _3520 = NOVALUE;
    }
    // SubProg quote pc: 487 op: STARTLINE (58)

    /** text.e:1181					if match(esc & quote_pair[2], text_in) then*/
    // SubProg quote pc: 489 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3521 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 493 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3521)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3521)) {
        Prepend(&_3522, _3521, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3522, _esc_6521, _3521);
    }
    _3521 = NOVALUE;
    // SubProg quote pc: 497 op: MATCH_FROM (177)
    _3523 = e_match_from(_3522, _text_in_6518, 1);
    DeRefDS(_3522);
    _3522 = NOVALUE;
    // SubProg quote pc: 502 op: IF (20)
    if (_3523 == 0)
    {
        _3523 = NOVALUE;
        goto L18; // [502] 535
    }
    else{
        _3523 = NOVALUE;
    }
    // SubProg quote pc: 505 op: STARTLINE (58)

    /** text.e:1182						text_in = search:match_replace(esc & quote_pair[2], text_in, esc & esc & quote_pair[2])*/
    // SubProg quote pc: 507 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3524 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 511 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3524)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3524)) {
        Prepend(&_3525, _3524, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3525, _esc_6521, _3524);
    }
    _3524 = NOVALUE;
    // SubProg quote pc: 515 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3526 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 519 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3526;
        concat_list[1] = _esc_6521;
        concat_list[2] = _esc_6521;
        Concat_N((object_ptr)&_3527, concat_list, 3);
    }
    _3526 = NOVALUE;
    // SubProg quote pc: 525 op: PROC (27)
    RefDS(_text_in_6518);
    _0 = _text_in_6518;
    _text_in_6518 = _22match_replace(_3525, _text_in_6518, _3527, 0);
    DeRefDS(_0);
    _3525 = NOVALUE;
    _3527 = NOVALUE;
    // SubProg quote pc: 532 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 534 op: NOP1 (159)
L18: // addr: 535 pc: 534 sub: 6516 op: 159
    // SubProg quote pc: 535 op: STARTLINE (58)

    /** text.e:1184					text_in = search:match_replace(quote_pair[2], text_in, esc & quote_pair[2])*/
    // SubProg quote pc: 537 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3529 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 541 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3530 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 545 op: CONCAT (15)
    if (IS_SEQUENCE(_esc_6521) && IS_ATOM(_3530)) {
    }
    else if (IS_ATOM(_esc_6521) && IS_SEQUENCE(_3530)) {
        Prepend(&_3531, _3530, _esc_6521);
    }
    else {
        Concat((object_ptr)&_3531, _esc_6521, _3530);
    }
    _3530 = NOVALUE;
    // SubProg quote pc: 549 op: PROC (27)
    Ref(_3529);
    RefDS(_text_in_6518);
    _0 = _text_in_6518;
    _text_in_6518 = _22match_replace(_3529, _text_in_6518, _3531, 0);
    DeRefDS(_0);
    _3529 = NOVALUE;
    _3531 = NOVALUE;
    // SubProg quote pc: 556 op: SEQUENCE_CHECK (97)
    // SubProg quote pc: 558 op: NOP1 (159)
L17: // addr: 559 pc: 558 sub: 6516 op: 159
    // SubProg quote pc: 559 op: NOP1 (159)
L12: // addr: 560 pc: 559 sub: 6516 op: 159
    // SubProg quote pc: 560 op: NOP1 (159)
LE: // addr: 561 pc: 560 sub: 6516 op: 159
    // SubProg quote pc: 561 op: STARTLINE (58)

    /** text.e:1189		return quote_pair[1] & text_in & quote_pair[2]*/
    // SubProg quote pc: 563 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3533 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg quote pc: 567 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_quote_pair_6519);
    _3534 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg quote pc: 571 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3534;
        concat_list[1] = _text_in_6518;
        concat_list[2] = _3533;
        Concat_N((object_ptr)&_3535, concat_list, 3);
    }
    _3534 = NOVALUE;
    _3533 = NOVALUE;
    // SubProg quote pc: 577 op: RETURNF (28)

// Exiting block BLOCK: quote

// block var text_in_6518
    DeRefDS(_text_in_6518);

// block var quote_pair_6519
    DeRef(_quote_pair_6519);

// block var esc_6521

// block var sp_6523
    DeRef(_sp_6523);
    return _3535;
    // SubProg quote pc: 581 op: BADRETURNF (43)
    ;
}


object _20format(object _format_pattern_6739, object _arg_list_6740)
{
    object _result_6741 = NOVALUE;
    object _in_token_6742 = NOVALUE;
    object _tch_6743 = NOVALUE;
    object _i_6744 = NOVALUE;
    object _tend_6745 = NOVALUE;
    object _cap_6746 = NOVALUE;
    object _align_6747 = NOVALUE;
    object _psign_6748 = NOVALUE;
    object _msign_6749 = NOVALUE;
    object _zfill_6750 = NOVALUE;
    object _bwz_6751 = NOVALUE;
    object _spacer_6752 = NOVALUE;
    object _alt_6753 = NOVALUE;
    object _width_6754 = NOVALUE;
    object _decs_6755 = NOVALUE;
    object _pos_6756 = NOVALUE;
    object _argn_6757 = NOVALUE;
    object _argl_6758 = NOVALUE;
    object _trimming_6759 = NOVALUE;
    object _hexout_6760 = NOVALUE;
    object _binout_6761 = NOVALUE;
    object _tsep_6762 = NOVALUE;
    object _istext_6763 = NOVALUE;
    object _prevargv_6764 = NOVALUE;
    object _currargv_6765 = NOVALUE;
    object _idname_6766 = NOVALUE;
    object _envsym_6767 = NOVALUE;
    object _envvar_6768 = NOVALUE;
    object _ep_6769 = NOVALUE;
    object _sp_6849 = NOVALUE;
    object _sp_6885 = NOVALUE;
    object _argtext_6932 = NOVALUE;
    object _tempv_7164 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2456_7219 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2453_7218 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2512_7226 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2509_7225 = NOVALUE;
    object _x_inlined_pretty_sprint_at_2506_7224 = NOVALUE;
    object _msg_inlined_crash_at_2660_7248 = NOVALUE;
    object _dpos_7291 = NOVALUE;
    object _dist_7292 = NOVALUE;
    object _bracketed_7293 = NOVALUE;
// skipping _4047  name type: 0
// skipping _4046  name type: 0
// skipping _4045  name type: 0
// skipping _4044  name type: 0
    object _4043 = NOVALUE; // 7386 4043
    object _4042 = NOVALUE; // 7385 4042
    object _4041 = NOVALUE; // 7384 4041
// skipping _4040  name type: 0
    object _4039 = NOVALUE; // 7381 4039
    object _4038 = NOVALUE; // 7380 4038
    object _4037 = NOVALUE; // 7379 4037
// skipping _4036  name type: 0
// skipping _4035  name type: 0
    object _4034 = NOVALUE; // 7375 4034
    object _4033 = NOVALUE; // 7374 4033
// skipping _4032  name type: 0
// skipping _4031  name type: 0
    object _4030 = NOVALUE; // 7371 4030
// skipping _4029  name type: 0
    object _4028 = NOVALUE; // 7368 4028
// skipping _4027  name type: 0
// skipping _4026  name type: 0
    object _4025 = NOVALUE; // 7364 4025
    object _4024 = NOVALUE; // 7363 4024
    object _4023 = NOVALUE; // 7362 4023
// skipping _4022  name type: 0
// skipping _4021  name type: 0
    object _4020 = NOVALUE; // 7358 4020
// skipping _4019  name type: 0
// skipping _4018  name type: 0
    object _4017 = NOVALUE; // 7353 4017
    object _4016 = NOVALUE; // 7352 4016
    object _4015 = NOVALUE; // 7351 4015
    object _4014 = NOVALUE; // 7350 4014
// skipping _4013  name type: 0
// skipping _4012  name type: 0
    object _4011 = NOVALUE; // 7346 4011
    object _4010 = NOVALUE; // 7345 4010
    object _4009 = NOVALUE; // 7344 4009
// skipping _4008  name type: 0
// skipping _4007  name type: 0
    object _4006 = NOVALUE; // 7341 4006
// skipping _4005  name type: 0
    object _4004 = NOVALUE; // 7338 4004
// skipping _4003  name type: 0
// skipping _4002  name type: 0
    object _4001 = NOVALUE; // 7334 4001
    object _4000 = NOVALUE; // 7333 4000
    object _3999 = NOVALUE; // 7332 3999
    object _3998 = NOVALUE; // 7331 3998
// skipping _3997  name type: 0
// skipping _3996  name type: 0
    object _3995 = NOVALUE; // 7327 3995
// skipping _3994  name type: 0
// skipping _3993  name type: 0
// skipping _3992  name type: 0
// skipping _3991  name type: 0
    object _3990 = NOVALUE; // 7319 3990
    object _3989 = NOVALUE; // 7318 3989
    object _3988 = NOVALUE; // 7317 3988
    object _3987 = NOVALUE; // 7316 3987
// skipping _3986  name type: 0
// skipping _3985  name type: 0
// skipping _3984  name type: 0
// skipping _3983  name type: 0
// skipping _3982  name type: 0
    object _3981 = NOVALUE; // 7306 3981
// skipping _3980  name type: 0
// skipping _3979  name type: 0
// skipping _3978  name type: 0
    object _3977 = NOVALUE; // 7301 3977
    object _3976 = NOVALUE; // 7300 3976
// skipping _3975  name type: 0
    object _3974 = NOVALUE; // 7297 3974
// skipping _3973  name type: 0
    object _3972 = NOVALUE; // 7290 3972
    object _3971 = NOVALUE; // 7289 3971
    object _3970 = NOVALUE; // 7288 3970
    object _3969 = NOVALUE; // 7286 3969
    object _3968 = NOVALUE; // 7283 3968
// skipping _3967  name type: 0
// skipping _3966  name type: 0
    object _3965 = NOVALUE; // 7278 3965
// skipping _3964  name type: 0
// skipping _3963  name type: 0
    object _3962 = NOVALUE; // 7274 3962
    object _3961 = NOVALUE; // 7273 3961
// skipping _3960  name type: 0
// skipping _3959  name type: 0
    object _3958 = NOVALUE; // 7269 3958
    object _3957 = NOVALUE; // 7268 3957
    object _3956 = NOVALUE; // 7267 3956
// skipping _3955  name type: 0
// skipping _3954  name type: 0
    object _3953 = NOVALUE; // 7263 3953
// skipping _3952  name type: 0
    object _3951 = NOVALUE; // 7260 3951
// skipping _3950  name type: 0
// skipping _3949  name type: 0
// skipping _3948  name type: 0
// skipping _3947  name type: 0
    object _3946 = NOVALUE; // 7252 3946
    object _3945 = NOVALUE; // 7250 3945
// skipping _3943  name type: 0
// skipping _3942  name type: 0
// skipping _3941  name type: 0
// skipping _3938  name type: 0
    object _3937 = NOVALUE; // 7234 3937
// skipping _3936  name type: 0
// skipping _3935  name type: 0
// skipping _3934  name type: 0
    object _3933 = NOVALUE; // 7229 3933
// skipping _3932  name type: 0
    object _3931 = NOVALUE; // 7222 3931
    object _3930 = NOVALUE; // 7221 3930
    object _3929 = NOVALUE; // 7216 3929
// skipping _3927  name type: 0
    object _3926 = NOVALUE; // 7212 3926
// skipping _3925  name type: 0
    object _3924 = NOVALUE; // 7209 3924
    object _3923 = NOVALUE; // 7208 3923
    object _3922 = NOVALUE; // 7207 3922
// skipping _3921  name type: 0
    object _3920 = NOVALUE; // 7204 3920
    object _3919 = NOVALUE; // 7203 3919
    object _3918 = NOVALUE; // 7202 3918
    object _3917 = NOVALUE; // 7200 3917
// skipping _3916  name type: 0
// skipping _3915  name type: 0
    object _3914 = NOVALUE; // 7195 3914
    object _3913 = NOVALUE; // 7194 3913
    object _3912 = NOVALUE; // 7193 3912
// skipping _3911  name type: 0
    object _3910 = NOVALUE; // 7190 3910
    object _3909 = NOVALUE; // 7189 3909
    object _3908 = NOVALUE; // 7187 3908
    object _3907 = NOVALUE; // 7185 3907
// skipping _3906  name type: 0
    object _3905 = NOVALUE; // 7181 3905
// skipping _3904  name type: 0
    object _3903 = NOVALUE; // 7178 3903
// skipping _3902  name type: 0
    object _3901 = NOVALUE; // 7176 3901
// skipping _3900  name type: 0
    object _3899 = NOVALUE; // 7172 3899
// skipping _3898  name type: 0
    object _3897 = NOVALUE; // 7169 3897
// skipping _3896  name type: 0
    object _3895 = NOVALUE; // 7166 3895
    object _3894 = NOVALUE; // 7163 3894
    object _3893 = NOVALUE; // 7162 3893
    object _3892 = NOVALUE; // 7161 3892
    object _3891 = NOVALUE; // 7160 3891
    object _3890 = NOVALUE; // 7159 3890
// skipping _3889  name type: 0
    object _3888 = NOVALUE; // 7155 3888
    object _3887 = NOVALUE; // 7154 3887
// skipping _3886  name type: 0
    object _3885 = NOVALUE; // 7151 3885
    object _3884 = NOVALUE; // 7150 3884
// skipping _3883  name type: 0
    object _3882 = NOVALUE; // 7148 3882
// skipping _3881  name type: 0
    object _3880 = NOVALUE; // 7144 3880
    object _3879 = NOVALUE; // 7143 3879
// skipping _3878  name type: 0
// skipping _3877  name type: 0
    object _3876 = NOVALUE; // 7138 3876
// skipping _3875  name type: 0
    object _3874 = NOVALUE; // 7135 3874
// skipping _3873  name type: 0
// skipping _3872  name type: 0
// skipping _3871  name type: 0
    object _3870 = NOVALUE; // 7128 3870
// skipping _3869  name type: 0
    object _3868 = NOVALUE; // 7125 3868
    object _3867 = NOVALUE; // 7124 3867
    object _3866 = NOVALUE; // 7123 3866
// skipping _3865  name type: 0
    object _3864 = NOVALUE; // 7120 3864
    object _3863 = NOVALUE; // 7119 3863
    object _3862 = NOVALUE; // 7118 3862
    object _3861 = NOVALUE; // 7117 3861
    object _3860 = NOVALUE; // 7116 3860
// skipping _3859  name type: 0
    object _3858 = NOVALUE; // 7114 3858
// skipping _3857  name type: 0
    object _3856 = NOVALUE; // 7111 3856
    object _3855 = NOVALUE; // 7109 3855
    object _3854 = NOVALUE; // 7108 3854
    object _3853 = NOVALUE; // 7107 3853
// skipping _3852  name type: 0
// skipping _3850  name type: 0
    object _3849 = NOVALUE; // 7102 3849
// skipping _3848  name type: 0
// skipping _3847  name type: 0
    object _3846 = NOVALUE; // 7098 3846
    object _3845 = NOVALUE; // 7097 3845
// skipping _3843  name type: 0
    object _3842 = NOVALUE; // 7093 3842
    object _3841 = NOVALUE; // 7092 3841
    object _3840 = NOVALUE; // 7091 3840
// skipping _3839  name type: 0
    object _3838 = NOVALUE; // 7089 3838
    object _3837 = NOVALUE; // 7087 3837
    object _3836 = NOVALUE; // 7086 3836
    object _3835 = NOVALUE; // 7085 3835
// skipping _3834  name type: 0
    object _3833 = NOVALUE; // 7082 3833
// skipping _3832  name type: 0
    object _3831 = NOVALUE; // 7078 3831
    object _3830 = NOVALUE; // 7077 3830
    object _3829 = NOVALUE; // 7076 3829
    object _3828 = NOVALUE; // 7075 3828
    object _3827 = NOVALUE; // 7073 3827
    object _3826 = NOVALUE; // 7072 3826
// skipping _3825  name type: 0
    object _3824 = NOVALUE; // 7069 3824
    object _3823 = NOVALUE; // 7068 3823
    object _3822 = NOVALUE; // 7067 3822
// skipping _3821  name type: 0
    object _3820 = NOVALUE; // 7065 3820
    object _3819 = NOVALUE; // 7063 3819
    object _3818 = NOVALUE; // 7062 3818
    object _3817 = NOVALUE; // 7061 3817
// skipping _3816  name type: 0
    object _3815 = NOVALUE; // 7058 3815
// skipping _3813  name type: 0
    object _3812 = NOVALUE; // 7054 3812
    object _3811 = NOVALUE; // 7053 3811
// skipping _3810  name type: 0
    object _3809 = NOVALUE; // 7050 3809
    object _3808 = NOVALUE; // 7049 3808
// skipping _3807  name type: 0
    object _3806 = NOVALUE; // 7047 3806
// skipping _3805  name type: 0
    object _3803 = NOVALUE; // 7042 3803
    object _3802 = NOVALUE; // 7041 3802
// skipping _3801  name type: 0
// skipping _3800  name type: 0
    object _3799 = NOVALUE; // 7036 3799
// skipping _3798  name type: 0
    object _3797 = NOVALUE; // 7033 3797
// skipping _3796  name type: 0
// skipping _3795  name type: 0
// skipping _3794  name type: 0
    object _3793 = NOVALUE; // 7026 3793
// skipping _3792  name type: 0
    object _3791 = NOVALUE; // 7023 3791
    object _3790 = NOVALUE; // 7022 3790
    object _3789 = NOVALUE; // 7021 3789
// skipping _3788  name type: 0
    object _3787 = NOVALUE; // 7019 3787
// skipping _3786  name type: 0
    object _3785 = NOVALUE; // 7015 3785
    object _3784 = NOVALUE; // 7014 3784
    object _3783 = NOVALUE; // 7013 3783
    object _3782 = NOVALUE; // 7012 3782
    object _3781 = NOVALUE; // 7011 3781
// skipping _3780  name type: 0
    object _3779 = NOVALUE; // 7009 3779
// skipping _3778  name type: 0
    object _3777 = NOVALUE; // 7006 3777
    object _3776 = NOVALUE; // 7004 3776
    object _3775 = NOVALUE; // 7003 3775
    object _3774 = NOVALUE; // 7002 3774
// skipping _3773  name type: 0
    object _3772 = NOVALUE; // 6999 3772
// skipping _3771  name type: 0
// skipping _3770  name type: 0
    object _3769 = NOVALUE; // 6995 3769
// skipping _3768  name type: 0
    object _3767 = NOVALUE; // 6993 3767
    object _3766 = NOVALUE; // 6991 3766
// skipping _3765  name type: 0
    object _3764 = NOVALUE; // 6987 3764
    object _3763 = NOVALUE; // 6986 3763
    object _3762 = NOVALUE; // 6985 3762
// skipping _3761  name type: 0
// skipping _3760  name type: 0
    object _3759 = NOVALUE; // 6981 3759
    object _3758 = NOVALUE; // 6980 3758
    object _3757 = NOVALUE; // 6979 3757
    object _3756 = NOVALUE; // 6978 3756
// skipping _3755  name type: 0
    object _3754 = NOVALUE; // 6975 3754
    object _3753 = NOVALUE; // 6974 3753
    object _3752 = NOVALUE; // 6973 3752
    object _3751 = NOVALUE; // 6971 3751
    object _3748 = NOVALUE; // 6968 3748
    object _3747 = NOVALUE; // 6967 3747
    object _3746 = NOVALUE; // 6966 3746
    object _3744 = NOVALUE; // 6964 3744
    object _3743 = NOVALUE; // 6963 3743
    object _3742 = NOVALUE; // 6962 3742
    object _3741 = NOVALUE; // 6961 3741
// skipping _3740  name type: 0
// skipping _3739  name type: 0
    object _3738 = NOVALUE; // 6956 3738
    object _3737 = NOVALUE; // 6955 3737
    object _3736 = NOVALUE; // 6954 3736
    object _3735 = NOVALUE; // 6953 3735
// skipping _3734  name type: 0
    object _3733 = NOVALUE; // 6951 3733
    object _3732 = NOVALUE; // 6949 3732
    object _3731 = NOVALUE; // 6948 3731
// skipping _3730  name type: 0
    object _3729 = NOVALUE; // 6942 3729
    object _3728 = NOVALUE; // 6940 3728
    object _3727 = NOVALUE; // 6939 3727
// skipping _3726  name type: 0
    object _3725 = NOVALUE; // 6937 3725
// skipping _3724  name type: 0
// skipping _3723  name type: 0
// skipping _3722  name type: 0
// skipping _3721  name type: 0
// skipping _3720  name type: 0
// skipping _3719  name type: 0
    object _3718 = NOVALUE; // 6925 3718
// skipping _3717  name type: 0
    object _3716 = NOVALUE; // 6921 3716
    object _3715 = NOVALUE; // 6920 3715
// skipping _3714  name type: 0
// skipping _3713  name type: 0
// skipping _3712  name type: 0
// skipping _3711  name type: 0
// skipping _3710  name type: 0
// skipping _3709  name type: 0
    object _3708 = NOVALUE; // 6912 3708
// skipping _3707  name type: 0
// skipping _3706  name type: 0
    object _3705 = NOVALUE; // 6906 3705
// skipping _3704  name type: 0
// skipping _3703  name type: 0
// skipping _3702  name type: 0
    object _3701 = NOVALUE; // 6901 3701
// skipping _3700  name type: 0
    object _3699 = NOVALUE; // 6898 3699
    object _3698 = NOVALUE; // 6897 3698
// skipping _3697  name type: 0
// skipping _3696  name type: 0
    object _3695 = NOVALUE; // 6894 3695
// skipping _3694  name type: 0
    object _3693 = NOVALUE; // 6891 3693
// skipping _3692  name type: 0
    object _3691 = NOVALUE; // 6888 3691
// skipping _3690  name type: 0
// skipping _3689  name type: 0
    object _3688 = NOVALUE; // 6882 3688
// skipping _3687  name type: 0
    object _3686 = NOVALUE; // 6878 3686
    object _3685 = NOVALUE; // 6877 3685
    object _3684 = NOVALUE; // 6875 3684
    object _3683 = NOVALUE; // 6874 3683
    object _3682 = NOVALUE; // 6872 3682
// skipping _3681  name type: 0
// skipping _3680  name type: 0
    object _3679 = NOVALUE; // 6867 3679
// skipping _3678  name type: 0
    object _3676 = NOVALUE; // 6863 3676
    object _3675 = NOVALUE; // 6862 3675
    object _3674 = NOVALUE; // 6861 3674
// skipping _3673  name type: 0
// skipping _3672  name type: 0
    object _3671 = NOVALUE; // 6858 3671
// skipping _3670  name type: 0
    object _3669 = NOVALUE; // 6855 3669
// skipping _3668  name type: 0
    object _3667 = NOVALUE; // 6852 3667
// skipping _3666  name type: 0
// skipping _3665  name type: 0
    object _3664 = NOVALUE; // 6846 3664
    object _3663 = NOVALUE; // 6845 3663
// skipping _3662  name type: 0
// skipping _3661  name type: 0
// skipping _3660  name type: 0
// skipping _3659  name type: 0
// skipping _3658  name type: 0
// skipping _3657  name type: 0
    object _3656 = NOVALUE; // 6837 3656
// skipping _3655  name type: 0
// skipping _3654  name type: 0
    object _3653 = NOVALUE; // 6831 3653
    object _3652 = NOVALUE; // 6830 3652
// skipping _3651  name type: 0
// skipping _3650  name type: 0
// skipping _3649  name type: 0
// skipping _3647  name type: 0
// skipping _3646  name type: 0
// skipping _3645  name type: 0
    object _3644 = NOVALUE; // 6821 3644
// skipping _3634  name type: 0
    object _3633 = NOVALUE; // 6796 3633
// skipping _3632  name type: 0
// skipping _3631  name type: 0
    object _3630 = NOVALUE; // 6792 3630
// skipping _3629  name type: 0
// skipping _3625  name type: 0
// skipping _3624  name type: 0
// skipping _3623  name type: 0
// skipping _3622  name type: 0
// skipping _3621  name type: 0
// skipping _3620  name type: 0
    object _3619 = NOVALUE; // 6774 3619
// skipping _3618  name type: 0
    object _3617 = NOVALUE; // 6771 3617
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg format pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 3 op: STARTLINE (58)

    /** text.e:1443		if atom(arg_list) then*/
    // SubProg format pc: 5 op: IS_AN_ATOM (67)
    _3617 = IS_ATOM(_arg_list_6740);
    // SubProg format pc: 8 op: IF (20)
    if (_3617 == 0)
    {
        _3617 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _3617 = NOVALUE;
    }
    // SubProg format pc: 11 op: STARTLINE (58)

    /** text.e:1444			arg_list = {arg_list}*/
    // SubProg format pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _arg_list_6740;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_arg_list_6740);
    ((intptr_t*)_2)[1] = _arg_list_6740;
    _arg_list_6740 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg format pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 6737 op: 159
    // SubProg format pc: 18 op: STARTLINE (58)

    /** text.e:1447		result = ""*/
    // SubProg format pc: 20 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_result_6741);
    _result_6741 = _5;
    // SubProg format pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 25 op: STARTLINE (58)

    /** text.e:1448		in_token = 0*/
    // SubProg format pc: 27 op: ASSIGN_I (113)
    _in_token_6742 = 0;
    // SubProg format pc: 30 op: STARTLINE (58)

    /** text.e:1451		i = 0*/
    // SubProg format pc: 32 op: ASSIGN_I (113)
    _i_6744 = 0;
    // SubProg format pc: 35 op: STARTLINE (58)

    /** text.e:1452		tend = 0*/
    // SubProg format pc: 37 op: ASSIGN_I (113)
    _tend_6745 = 0;
    // SubProg format pc: 40 op: STARTLINE (58)

    /** text.e:1453		argl = 0*/
    // SubProg format pc: 42 op: ASSIGN_I (113)
    _argl_6758 = 0;
    // SubProg format pc: 45 op: STARTLINE (58)

    /** text.e:1454		spacer = 0*/
    // SubProg format pc: 47 op: ASSIGN_I (113)
    _spacer_6752 = 0;
    // SubProg format pc: 50 op: STARTLINE (58)

    /** text.e:1455		prevargv = 0*/
    // SubProg format pc: 52 op: ASSIGN (18)
    DeRef(_prevargv_6764);
    _prevargv_6764 = 0;
    // SubProg format pc: 55 op: STARTLINE (58)

    /** text.e:1456	    while i < length(format_pattern) do*/
    // SubProg format pc: 57 op: NOP2 (110)
    // SubProg format pc: 59 op: NOPWHILE (158)
L2: // addr: 60 pc: 59 sub: 6737 op: 158
    // SubProg format pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_format_pattern_6739)){
            _3619 = SEQ_PTR(_format_pattern_6739)->length;
    }
    else {
        _3619 = 1;
    }
    // SubProg format pc: 63 op: LESS_IFW_I (119)
    if (_i_6744 >= _3619)
    goto L3; // [63] 3409
    // SubProg format pc: 67 op: STARTLINE (58)

    /** text.e:1457	    	i += 1*/
    // SubProg format pc: 69 op: PLUS1_I (117)
    _i_6744 = _i_6744 + 1;
    // SubProg format pc: 73 op: STARTLINE (58)

    /** text.e:1458	    	tch = format_pattern[i]*/
    // SubProg format pc: 75 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_format_pattern_6739);
    _tch_6743 = (object)*(((s1_ptr)_2)->base + _i_6744);
    if (!IS_ATOM_INT(_tch_6743))
    _tch_6743 = (object)DBL_PTR(_tch_6743)->dbl;
    // SubProg format pc: 79 op: STARTLINE (58)

    /** text.e:1459	    	if not in_token then*/
    // SubProg format pc: 81 op: NOT_IFW (108)
    if (_in_token_6742 != 0)
    goto L4; // [81] 210
    // SubProg format pc: 84 op: STARTLINE (58)

    /** text.e:1460	    		if tch = '[' then*/
    // SubProg format pc: 86 op: EQUALS_IFW_I (121)
    if (_tch_6743 != 91)
    goto L5; // [86] 200
    // SubProg format pc: 90 op: STARTLINE (58)

    /** text.e:1461	    			in_token = 1*/
    // SubProg format pc: 92 op: ASSIGN_I (113)
    _in_token_6742 = 1;
    // SubProg format pc: 95 op: STARTLINE (58)

    /** text.e:1462	    			tend = 0*/
    // SubProg format pc: 97 op: ASSIGN_I (113)
    _tend_6745 = 0;
    // SubProg format pc: 100 op: STARTLINE (58)

    /** text.e:1463					cap = 0*/
    // SubProg format pc: 102 op: ASSIGN_I (113)
    _cap_6746 = 0;
    // SubProg format pc: 105 op: STARTLINE (58)

    /** text.e:1464					align = 0*/
    // SubProg format pc: 107 op: ASSIGN_I (113)
    _align_6747 = 0;
    // SubProg format pc: 110 op: STARTLINE (58)

    /** text.e:1465					psign = 0*/
    // SubProg format pc: 112 op: ASSIGN_I (113)
    _psign_6748 = 0;
    // SubProg format pc: 115 op: STARTLINE (58)

    /** text.e:1466					msign = 0*/
    // SubProg format pc: 117 op: ASSIGN_I (113)
    _msign_6749 = 0;
    // SubProg format pc: 120 op: STARTLINE (58)

    /** text.e:1467					zfill = 0*/
    // SubProg format pc: 122 op: ASSIGN_I (113)
    _zfill_6750 = 0;
    // SubProg format pc: 125 op: STARTLINE (58)

    /** text.e:1468					bwz = 0*/
    // SubProg format pc: 127 op: ASSIGN_I (113)
    _bwz_6751 = 0;
    // SubProg format pc: 130 op: STARTLINE (58)

    /** text.e:1469					spacer = 0*/
    // SubProg format pc: 132 op: ASSIGN_I (113)
    _spacer_6752 = 0;
    // SubProg format pc: 135 op: STARTLINE (58)

    /** text.e:1470					alt = 0*/
    // SubProg format pc: 137 op: ASSIGN_I (113)
    _alt_6753 = 0;
    // SubProg format pc: 140 op: STARTLINE (58)

    /** text.e:1471	    			width = 0*/
    // SubProg format pc: 142 op: ASSIGN_I (113)
    _width_6754 = 0;
    // SubProg format pc: 145 op: STARTLINE (58)

    /** text.e:1472	    			decs = -1*/
    // SubProg format pc: 147 op: ASSIGN_I (113)
    _decs_6755 = -1;
    // SubProg format pc: 150 op: STARTLINE (58)

    /** text.e:1473	    			argn = 0*/
    // SubProg format pc: 152 op: ASSIGN_I (113)
    _argn_6757 = 0;
    // SubProg format pc: 155 op: STARTLINE (58)

    /** text.e:1474	    			hexout = 0*/
    // SubProg format pc: 157 op: ASSIGN_I (113)
    _hexout_6760 = 0;
    // SubProg format pc: 160 op: STARTLINE (58)

    /** text.e:1475	    			binout = 0*/
    // SubProg format pc: 162 op: ASSIGN_I (113)
    _binout_6761 = 0;
    // SubProg format pc: 165 op: STARTLINE (58)

    /** text.e:1476	    			trimming = 0*/
    // SubProg format pc: 167 op: ASSIGN_I (113)
    _trimming_6759 = 0;
    // SubProg format pc: 170 op: STARTLINE (58)

    /** text.e:1477	    			tsep = 0*/
    // SubProg format pc: 172 op: ASSIGN_I (113)
    _tsep_6762 = 0;
    // SubProg format pc: 175 op: STARTLINE (58)

    /** text.e:1478	    			istext = 0*/
    // SubProg format pc: 177 op: ASSIGN_I (113)
    _istext_6763 = 0;
    // SubProg format pc: 180 op: STARTLINE (58)

    /** text.e:1479	    			idname = ""*/
    // SubProg format pc: 182 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_idname_6766);
    _idname_6766 = _5;
    // SubProg format pc: 185 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 187 op: STARTLINE (58)

    /** text.e:1480	    			envvar = ""*/
    // SubProg format pc: 189 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_envvar_6768);
    _envvar_6768 = _5;
    // SubProg format pc: 192 op: STARTLINE (58)

    /** text.e:1481	    			envsym = ""*/
    // SubProg format pc: 194 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_envsym_6767);
    _envsym_6767 = _5;
    // SubProg format pc: 197 op: ELSE (23)
    goto L2; // [197] 60
    // SubProg format pc: 199 op: NOP1 (159)
L5: // addr: 200 pc: 199 sub: 6737 op: 159
    // SubProg format pc: 200 op: STARTLINE (58)

    /** text.e:1483	    			result &= tch*/
    // SubProg format pc: 202 op: CONCAT (15)
    Append(&_result_6741, _result_6741, _tch_6743);
    // SubProg format pc: 206 op: NOP1 (159)
    // SubProg format pc: 207 op: ELSE (23)
    goto L2; // [207] 60
    // SubProg format pc: 209 op: NOP1 (159)
L4: // addr: 210 pc: 209 sub: 6737 op: 159
    // SubProg format pc: 210 op: STARTLINE (58)

    /** text.e:1486				switch tch do*/
    // SubProg format pc: 212 op: SWITCH_I (193)
    _0 = _tch_6743;
    switch ( _0 ){ 
        // SubProg format pc: 217 op: STARTLINE (58)

        /** text.e:1487	    			case ']' then*/
        // SubProg format pc: 219 op: CASE (186)
        case 93:
        // SubProg format pc: 221 op: STARTLINE (58)

        /** text.e:1488	    				in_token = 0*/
        // SubProg format pc: 223 op: ASSIGN_I (113)
        _in_token_6742 = 0;
        // SubProg format pc: 226 op: STARTLINE (58)

        /** text.e:1489	    				tend = i*/
        // SubProg format pc: 228 op: ASSIGN_I (113)
        _tend_6745 = _i_6744;
        // SubProg format pc: 231 op: ELSE (23)
        goto L6; // [231] 1072
        // SubProg format pc: 233 op: STARTLINE (58)

        /** text.e:1491	    			case '[' then*/
        // SubProg format pc: 235 op: CASE (186)
        case 91:
        // SubProg format pc: 237 op: STARTLINE (58)

        /** text.e:1492		    			result &= tch*/
        // SubProg format pc: 239 op: CONCAT (15)
        Append(&_result_6741, _result_6741, _tch_6743);
        // SubProg format pc: 243 op: STARTLINE (58)

        /** text.e:1493		    			while i < length(format_pattern) do*/
        // SubProg format pc: 245 op: NOP2 (110)
        // SubProg format pc: 247 op: NOPWHILE (158)
L7: // addr: 248 pc: 247 sub: 6737 op: 158
        // SubProg format pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_6739)){
                _3630 = SEQ_PTR(_format_pattern_6739)->length;
        }
        else {
            _3630 = 1;
        }
        // SubProg format pc: 251 op: LESS_IFW_I (119)
        if (_i_6744 >= _3630)
        goto L6; // [251] 1072
        // SubProg format pc: 255 op: STARTLINE (58)

        /** text.e:1494		    				i += 1*/
        // SubProg format pc: 257 op: PLUS1_I (117)
        _i_6744 = _i_6744 + 1;
        // SubProg format pc: 261 op: STARTLINE (58)

        /** text.e:1495		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 263 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _3633 = (object)*(((s1_ptr)_2)->base + _i_6744);
        // SubProg format pc: 267 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3633, 93)){
            _3633 = NOVALUE;
            goto L7; // [267] 248
        }
        _3633 = NOVALUE;
        // SubProg format pc: 271 op: STARTLINE (58)

        /** text.e:1496		    					in_token = 0*/
        // SubProg format pc: 273 op: ASSIGN_I (113)
        _in_token_6742 = 0;
        // SubProg format pc: 276 op: STARTLINE (58)

        /** text.e:1497		    					tend = 0*/
        // SubProg format pc: 278 op: ASSIGN_I (113)
        _tend_6745 = 0;
        // SubProg format pc: 281 op: STARTLINE (58)

        /** text.e:1498		    					exit*/
        // SubProg format pc: 283 op: EXIT (61)
        goto L6; // [283] 1072
        // SubProg format pc: 285 op: NOP1 (159)
        // SubProg format pc: 286 op: STARTLINE (58)

        /** text.e:1500		    			end while*/
        // SubProg format pc: 288 op: ENDWHILE (22)
        goto L7; // [288] 248
        // SubProg format pc: 290 op: NOP1 (159)
        // SubProg format pc: 291 op: ELSE (23)
        goto L6; // [291] 1072
        // SubProg format pc: 293 op: STARTLINE (58)

        /** text.e:1502		    		case 'w', 'u', 'l' then*/
        // SubProg format pc: 295 op: CASE (186)
        case 119:
        // SubProg format pc: 297 op: CASE (186)
        case 117:
        // SubProg format pc: 299 op: CASE (186)
        case 108:
        // SubProg format pc: 301 op: STARTLINE (58)

        /** text.e:1503		    			cap = tch*/
        // SubProg format pc: 303 op: ASSIGN_I (113)
        _cap_6746 = _tch_6743;
        // SubProg format pc: 306 op: ELSE (23)
        goto L6; // [306] 1072
        // SubProg format pc: 308 op: STARTLINE (58)

        /** text.e:1505		    		case 'b' then*/
        // SubProg format pc: 310 op: CASE (186)
        case 98:
        // SubProg format pc: 312 op: STARTLINE (58)

        /** text.e:1506		    			bwz = 1*/
        // SubProg format pc: 314 op: ASSIGN_I (113)
        _bwz_6751 = 1;
        // SubProg format pc: 317 op: ELSE (23)
        goto L6; // [317] 1072
        // SubProg format pc: 319 op: STARTLINE (58)

        /** text.e:1508		    		case 's' then*/
        // SubProg format pc: 321 op: CASE (186)
        case 115:
        // SubProg format pc: 323 op: STARTLINE (58)

        /** text.e:1509		    			spacer = 1*/
        // SubProg format pc: 325 op: ASSIGN_I (113)
        _spacer_6752 = 1;
        // SubProg format pc: 328 op: ELSE (23)
        goto L6; // [328] 1072
        // SubProg format pc: 330 op: STARTLINE (58)

        /** text.e:1511		    		case 't' then*/
        // SubProg format pc: 332 op: CASE (186)
        case 116:
        // SubProg format pc: 334 op: STARTLINE (58)

        /** text.e:1512		    			trimming = 1*/
        // SubProg format pc: 336 op: ASSIGN_I (113)
        _trimming_6759 = 1;
        // SubProg format pc: 339 op: ELSE (23)
        goto L6; // [339] 1072
        // SubProg format pc: 341 op: STARTLINE (58)

        /** text.e:1514		    		case 'z' then*/
        // SubProg format pc: 343 op: CASE (186)
        case 122:
        // SubProg format pc: 345 op: STARTLINE (58)

        /** text.e:1515		    			zfill = 1*/
        // SubProg format pc: 347 op: ASSIGN_I (113)
        _zfill_6750 = 1;
        // SubProg format pc: 350 op: ELSE (23)
        goto L6; // [350] 1072
        // SubProg format pc: 352 op: STARTLINE (58)

        /** text.e:1517		    		case 'X' then*/
        // SubProg format pc: 354 op: CASE (186)
        case 88:
        // SubProg format pc: 356 op: STARTLINE (58)

        /** text.e:1518		    			hexout = 1*/
        // SubProg format pc: 358 op: ASSIGN_I (113)
        _hexout_6760 = 1;
        // SubProg format pc: 361 op: ELSE (23)
        goto L6; // [361] 1072
        // SubProg format pc: 363 op: STARTLINE (58)

        /** text.e:1520		    		case 'B' then*/
        // SubProg format pc: 365 op: CASE (186)
        case 66:
        // SubProg format pc: 367 op: STARTLINE (58)

        /** text.e:1521		    			binout = 1*/
        // SubProg format pc: 369 op: ASSIGN_I (113)
        _binout_6761 = 1;
        // SubProg format pc: 372 op: ELSE (23)
        goto L6; // [372] 1072
        // SubProg format pc: 374 op: STARTLINE (58)

        /** text.e:1523		    		case 'c', '<', '>' then*/
        // SubProg format pc: 376 op: CASE (186)
        case 99:
        // SubProg format pc: 378 op: CASE (186)
        case 60:
        // SubProg format pc: 380 op: CASE (186)
        case 62:
        // SubProg format pc: 382 op: STARTLINE (58)

        /** text.e:1524		    			align = tch*/
        // SubProg format pc: 384 op: ASSIGN_I (113)
        _align_6747 = _tch_6743;
        // SubProg format pc: 387 op: ELSE (23)
        goto L6; // [387] 1072
        // SubProg format pc: 389 op: STARTLINE (58)

        /** text.e:1526		    		case '+' then*/
        // SubProg format pc: 391 op: CASE (186)
        case 43:
        // SubProg format pc: 393 op: STARTLINE (58)

        /** text.e:1527		    			psign = 1*/
        // SubProg format pc: 395 op: ASSIGN_I (113)
        _psign_6748 = 1;
        // SubProg format pc: 398 op: ELSE (23)
        goto L6; // [398] 1072
        // SubProg format pc: 400 op: STARTLINE (58)

        /** text.e:1529		    		case '(' then*/
        // SubProg format pc: 402 op: CASE (186)
        case 40:
        // SubProg format pc: 404 op: STARTLINE (58)

        /** text.e:1530		    			msign = 1*/
        // SubProg format pc: 406 op: ASSIGN_I (113)
        _msign_6749 = 1;
        // SubProg format pc: 409 op: ELSE (23)
        goto L6; // [409] 1072
        // SubProg format pc: 411 op: STARTLINE (58)

        /** text.e:1532		    		case '?' then*/
        // SubProg format pc: 413 op: CASE (186)
        case 63:
        // SubProg format pc: 415 op: STARTLINE (58)

        /** text.e:1533		    			alt = 1*/
        // SubProg format pc: 417 op: ASSIGN_I (113)
        _alt_6753 = 1;
        // SubProg format pc: 420 op: ELSE (23)
        goto L6; // [420] 1072
        // SubProg format pc: 422 op: STARTLINE (58)

        /** text.e:1535		    		case 'T' then*/
        // SubProg format pc: 424 op: CASE (186)
        case 84:
        // SubProg format pc: 426 op: STARTLINE (58)

        /** text.e:1536		    			istext = 1*/
        // SubProg format pc: 428 op: ASSIGN_I (113)
        _istext_6763 = 1;
        // SubProg format pc: 431 op: ELSE (23)
        goto L6; // [431] 1072
        // SubProg format pc: 433 op: STARTLINE (58)

        /** text.e:1538		    		case ':' then*/
        // SubProg format pc: 435 op: CASE (186)
        case 58:
        // SubProg format pc: 437 op: STARTLINE (58)

        /** text.e:1539		    			while i < length(format_pattern) do*/
        // SubProg format pc: 439 op: NOP2 (110)
        // SubProg format pc: 441 op: NOPWHILE (158)
L8: // addr: 442 pc: 441 sub: 6737 op: 158
        // SubProg format pc: 442 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_6739)){
                _3644 = SEQ_PTR(_format_pattern_6739)->length;
        }
        else {
            _3644 = 1;
        }
        // SubProg format pc: 445 op: LESS_IFW_I (119)
        if (_i_6744 >= _3644)
        goto L6; // [445] 1072
        // SubProg format pc: 449 op: STARTLINE (58)

        /** text.e:1540		    				i += 1*/
        // SubProg format pc: 451 op: PLUS1_I (117)
        _i_6744 = _i_6744 + 1;
        // SubProg format pc: 455 op: STARTLINE (58)

        /** text.e:1541		    				tch = format_pattern[i]*/
        // SubProg format pc: 457 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _tch_6743 = (object)*(((s1_ptr)_2)->base + _i_6744);
        if (!IS_ATOM_INT(_tch_6743))
        _tch_6743 = (object)DBL_PTR(_tch_6743)->dbl;
        // SubProg format pc: 461 op: STARTLINE (58)

        /** text.e:1542		    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 463 op: FIND_FROM (176)
        _pos_6756 = find_from(_tch_6743, _3648, 1);
        // SubProg format pc: 468 op: STARTLINE (58)

        /** text.e:1543		    				if pos = 0 then*/
        // SubProg format pc: 470 op: EQUALS_IFW_I (121)
        if (_pos_6756 != 0)
        goto L9; // [470] 485
        // SubProg format pc: 474 op: STARTLINE (58)

        /** text.e:1544		    					i -= 1*/
        // SubProg format pc: 476 op: MINUS_I (116)
        _i_6744 = _i_6744 - 1;
        // SubProg format pc: 480 op: STARTLINE (58)

        /** text.e:1545		    					exit*/
        // SubProg format pc: 482 op: EXIT (61)
        goto L6; // [482] 1072
        // SubProg format pc: 484 op: NOP1 (159)
L9: // addr: 485 pc: 484 sub: 6737 op: 159
        // SubProg format pc: 485 op: STARTLINE (58)

        /** text.e:1547		    				width = width * 10 + pos - 1*/
        // SubProg format pc: 487 op: PRIVATE_INIT_CHECK (30)
        // SubProg format pc: 489 op: MULTIPLY (13)
        if (_width_6754 == (short)_width_6754){
            _3652 = _width_6754 * 10;
        }
        else{
            _3652 = NewDouble(_width_6754 * (eudouble)10);
        }
        // SubProg format pc: 493 op: PLUS (11)
        if (IS_ATOM_INT(_3652)) {
            _3653 = _3652 + _pos_6756;
            if ((object)((uintptr_t)_3653 + (uintptr_t)HIGH_BITS) >= 0){
                _3653 = NewDouble((eudouble)_3653);
            }
        }
        else {
            _3653 = NewDouble(DBL_PTR(_3652)->dbl + (eudouble)_pos_6756);
        }
        DeRef(_3652);
        _3652 = NOVALUE;
        // SubProg format pc: 497 op: MINUS (10)
        if (IS_ATOM_INT(_3653)) {
            _width_6754 = _3653 - 1;
        }
        else {
            _width_6754 = NewDouble(DBL_PTR(_3653)->dbl - (eudouble)1);
        }
        DeRef(_3653);
        _3653 = NOVALUE;
        // SubProg format pc: 501 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_width_6754)) {
            _1 = (object)(DBL_PTR(_width_6754)->dbl);
            DeRefDS(_width_6754);
            _width_6754 = _1;
        }
        // SubProg format pc: 503 op: STARTLINE (58)

        /** text.e:1548		    				if width = 0 then*/
        // SubProg format pc: 505 op: EQUALS_IFW_I (121)
        if (_width_6754 != 0)
        goto L8; // [505] 442
        // SubProg format pc: 509 op: STARTLINE (58)

        /** text.e:1549		    					zfill = '0'*/
        // SubProg format pc: 511 op: ASSIGN_I (113)
        _zfill_6750 = 48;
        // SubProg format pc: 514 op: NOP1 (159)
        // SubProg format pc: 515 op: STARTLINE (58)

        /** text.e:1551		    			end while*/
        // SubProg format pc: 517 op: ENDWHILE (22)
        goto L8; // [517] 442
        // SubProg format pc: 519 op: NOP1 (159)
        // SubProg format pc: 520 op: ELSE (23)
        goto L6; // [520] 1072
        // SubProg format pc: 522 op: STARTLINE (58)

        /** text.e:1553		    		case '.' then*/
        // SubProg format pc: 524 op: CASE (186)
        case 46:
        // SubProg format pc: 526 op: STARTLINE (58)

        /** text.e:1554		    			decs = 0*/
        // SubProg format pc: 528 op: ASSIGN_I (113)
        _decs_6755 = 0;
        // SubProg format pc: 531 op: STARTLINE (58)

        /** text.e:1555		    			while i < length(format_pattern) do*/
        // SubProg format pc: 533 op: NOP2 (110)
        // SubProg format pc: 535 op: NOPWHILE (158)
LA: // addr: 536 pc: 535 sub: 6737 op: 158
        // SubProg format pc: 536 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_6739)){
                _3656 = SEQ_PTR(_format_pattern_6739)->length;
        }
        else {
            _3656 = 1;
        }
        // SubProg format pc: 539 op: LESS_IFW_I (119)
        if (_i_6744 >= _3656)
        goto L6; // [539] 1072
        // SubProg format pc: 543 op: STARTLINE (58)

        /** text.e:1556		    				i += 1*/
        // SubProg format pc: 545 op: PLUS1_I (117)
        _i_6744 = _i_6744 + 1;
        // SubProg format pc: 549 op: STARTLINE (58)

        /** text.e:1557		    				tch = format_pattern[i]*/
        // SubProg format pc: 551 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _tch_6743 = (object)*(((s1_ptr)_2)->base + _i_6744);
        if (!IS_ATOM_INT(_tch_6743))
        _tch_6743 = (object)DBL_PTR(_tch_6743)->dbl;
        // SubProg format pc: 555 op: STARTLINE (58)

        /** text.e:1558		    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 557 op: FIND_FROM (176)
        _pos_6756 = find_from(_tch_6743, _3648, 1);
        // SubProg format pc: 562 op: STARTLINE (58)

        /** text.e:1559		    				if pos = 0 then*/
        // SubProg format pc: 564 op: EQUALS_IFW_I (121)
        if (_pos_6756 != 0)
        goto LB; // [564] 579
        // SubProg format pc: 568 op: STARTLINE (58)

        /** text.e:1560		    					i -= 1*/
        // SubProg format pc: 570 op: MINUS_I (116)
        _i_6744 = _i_6744 - 1;
        // SubProg format pc: 574 op: STARTLINE (58)

        /** text.e:1561		    					exit*/
        // SubProg format pc: 576 op: EXIT (61)
        goto L6; // [576] 1072
        // SubProg format pc: 578 op: NOP1 (159)
LB: // addr: 579 pc: 578 sub: 6737 op: 159
        // SubProg format pc: 579 op: STARTLINE (58)

        /** text.e:1563		    				decs = decs * 10 + pos - 1*/
        // SubProg format pc: 581 op: MULTIPLY (13)
        if (_decs_6755 == (short)_decs_6755){
            _3663 = _decs_6755 * 10;
        }
        else{
            _3663 = NewDouble(_decs_6755 * (eudouble)10);
        }
        // SubProg format pc: 585 op: PLUS (11)
        if (IS_ATOM_INT(_3663)) {
            _3664 = _3663 + _pos_6756;
            if ((object)((uintptr_t)_3664 + (uintptr_t)HIGH_BITS) >= 0){
                _3664 = NewDouble((eudouble)_3664);
            }
        }
        else {
            _3664 = NewDouble(DBL_PTR(_3663)->dbl + (eudouble)_pos_6756);
        }
        DeRef(_3663);
        _3663 = NOVALUE;
        // SubProg format pc: 589 op: MINUS (10)
        if (IS_ATOM_INT(_3664)) {
            _decs_6755 = _3664 - 1;
        }
        else {
            _decs_6755 = NewDouble(DBL_PTR(_3664)->dbl - (eudouble)1);
        }
        DeRef(_3664);
        _3664 = NOVALUE;
        // SubProg format pc: 593 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_decs_6755)) {
            _1 = (object)(DBL_PTR(_decs_6755)->dbl);
            DeRefDS(_decs_6755);
            _decs_6755 = _1;
        }
        // SubProg format pc: 595 op: STARTLINE (58)

        /** text.e:1564		    			end while*/
        // SubProg format pc: 597 op: ENDWHILE (22)
        goto LA; // [597] 536
        // SubProg format pc: 599 op: NOP1 (159)
        // SubProg format pc: 600 op: ELSE (23)
        goto L6; // [600] 1072
        // SubProg format pc: 602 op: STARTLINE (58)

        /** text.e:1566		    		case '{' then*/
        // SubProg format pc: 604 op: CASE (186)
        case 123:
        // SubProg format pc: 606 op: STARTLINE (58)

        /** text.e:1568		    			integer sp*/
        // SubProg format pc: 608 op: STARTLINE (58)

        /** text.e:1570		    			sp = i + 1*/
        // SubProg format pc: 610 op: PLUS1_I (117)
        _sp_6849 = _i_6744 + 1;
        // SubProg format pc: 614 op: STARTLINE (58)

        /** text.e:1571		    			i = sp*/
        // SubProg format pc: 616 op: ASSIGN_I (113)
        _i_6744 = _sp_6849;
        // SubProg format pc: 619 op: STARTLINE (58)

        /** text.e:1572		    			while i < length(format_pattern) do*/
        // SubProg format pc: 621 op: NOP2 (110)
        // SubProg format pc: 623 op: NOPWHILE (158)
LC: // addr: 624 pc: 623 sub: 6737 op: 158
        // SubProg format pc: 624 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_6739)){
                _3667 = SEQ_PTR(_format_pattern_6739)->length;
        }
        else {
            _3667 = 1;
        }
        // SubProg format pc: 627 op: LESS_IFW_I (119)
        if (_i_6744 >= _3667)
        goto LD; // [627] 672
        // SubProg format pc: 631 op: STARTLINE (58)

        /** text.e:1573		    				if format_pattern[i] = '}' then*/
        // SubProg format pc: 633 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _3669 = (object)*(((s1_ptr)_2)->base + _i_6744);
        // SubProg format pc: 637 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3669, 125)){
            _3669 = NOVALUE;
            goto LE; // [637] 646
        }
        _3669 = NOVALUE;
        // SubProg format pc: 641 op: STARTLINE (58)

        /** text.e:1574		    					exit*/
        // SubProg format pc: 643 op: EXIT (61)
        goto LD; // [643] 672
        // SubProg format pc: 645 op: NOP1 (159)
LE: // addr: 646 pc: 645 sub: 6737 op: 159
        // SubProg format pc: 646 op: STARTLINE (58)

        /** text.e:1576		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 648 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _3671 = (object)*(((s1_ptr)_2)->base + _i_6744);
        // SubProg format pc: 652 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3671, 93)){
            _3671 = NOVALUE;
            goto LF; // [652] 661
        }
        _3671 = NOVALUE;
        // SubProg format pc: 656 op: STARTLINE (58)

        /** text.e:1577		    					exit*/
        // SubProg format pc: 658 op: EXIT (61)
        goto LD; // [658] 672
        // SubProg format pc: 660 op: NOP1 (159)
LF: // addr: 661 pc: 660 sub: 6737 op: 159
        // SubProg format pc: 661 op: STARTLINE (58)

        /** text.e:1579		    				i += 1*/
        // SubProg format pc: 663 op: PLUS1_I (117)
        _i_6744 = _i_6744 + 1;
        // SubProg format pc: 667 op: STARTLINE (58)

        /** text.e:1580		    			end while*/
        // SubProg format pc: 669 op: ENDWHILE (22)
        goto LC; // [669] 624
        // SubProg format pc: 671 op: NOP1 (159)
LD: // addr: 672 pc: 671 sub: 6737 op: 159
        // SubProg format pc: 672 op: STARTLINE (58)

        /** text.e:1581		    			idname = trim(format_pattern[sp .. i-1]) & '='*/
        // SubProg format pc: 674 op: MINUS (10)
        _3674 = _i_6744 - 1;
        // SubProg format pc: 678 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3675;
        RHS_Slice(_format_pattern_6739, _sp_6849, _3674);
        // SubProg format pc: 683 op: PROC (27)
        RefDS(_3069);
        _3676 = _20trim(_3675, _3069, 0);
        _3675 = NOVALUE;
        // SubProg format pc: 689 op: CONCAT (15)
        if (IS_SEQUENCE(_3676) && IS_ATOM(61)) {
            Append(&_idname_6766, _3676, 61);
        }
        else if (IS_ATOM(_3676) && IS_SEQUENCE(61)) {
        }
        else {
            Concat((object_ptr)&_idname_6766, _3676, 61);
            DeRef(_3676);
            _3676 = NOVALUE;
        }
        DeRef(_3676);
        _3676 = NOVALUE;
        // SubProg format pc: 693 op: STARTLINE (58)

        /** text.e:1582	    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 695 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _3679 = (object)*(((s1_ptr)_2)->base + _i_6744);
        // SubProg format pc: 699 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3679, 93)){
            _3679 = NOVALUE;
            goto L10; // [699] 710
        }
        _3679 = NOVALUE;
        // SubProg format pc: 703 op: STARTLINE (58)

        /** text.e:1583	    					i -= 1*/
        // SubProg format pc: 705 op: MINUS_I (116)
        _i_6744 = _i_6744 - 1;
        // SubProg format pc: 709 op: NOP1 (159)
L10: // addr: 710 pc: 709 sub: 6737 op: 159
        // SubProg format pc: 710 op: STARTLINE (58)

        /** text.e:1586	    				for j = 1 to length(arg_list) do*/
        // SubProg format pc: 712 op: LENGTH (42)
        if (IS_SEQUENCE(_arg_list_6740)){
                _3682 = SEQ_PTR(_arg_list_6740)->length;
        }
        else {
            _3682 = 1;
        }
        // SubProg format pc: 715 op: FOR_I (125)
        {
            object _j_6871;
            _j_6871 = 1;
L11: // addr: 722 pc: 715 sub: 6737 op: 125
            if (_j_6871 > _3682){
                goto L12; // [715] 797
            }
            // SubProg format pc: 722 op: STARTLINE (58)

            /** text.e:1587	    					if sequence(arg_list[j]) then*/
            // SubProg format pc: 724 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_arg_list_6740);
            _3683 = (object)*(((s1_ptr)_2)->base + _j_6871);
            // SubProg format pc: 728 op: IS_A_SEQUENCE (68)
            _3684 = IS_SEQUENCE(_3683);
            _3683 = NOVALUE;
            // SubProg format pc: 731 op: IF (20)
            if (_3684 == 0)
            {
                _3684 = NOVALUE;
                goto L13; // [731] 768
            }
            else{
                _3684 = NOVALUE;
            }
            // SubProg format pc: 734 op: STARTLINE (58)

            /** text.e:1588	    						if search:begins(idname, arg_list[j]) then*/
            // SubProg format pc: 736 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_arg_list_6740);
            _3685 = (object)*(((s1_ptr)_2)->base + _j_6871);
            // SubProg format pc: 740 op: PROC (27)
            RefDS(_idname_6766);
            Ref(_3685);
            _3686 = _22begins(_idname_6766, _3685);
            _3685 = NOVALUE;
            // SubProg format pc: 745 op: IF (20)
            if (_3686 == 0) {
                DeRef(_3686);
                _3686 = NOVALUE;
                goto L14; // [745] 767
            }
            else {
                if (!IS_ATOM_INT(_3686) && DBL_PTR(_3686)->dbl == 0.0){
                    DeRef(_3686);
                    _3686 = NOVALUE;
                    goto L14; // [745] 767
                }
                DeRef(_3686);
                _3686 = NOVALUE;
            }
            DeRef(_3686);
            _3686 = NOVALUE;
            // SubProg format pc: 748 op: STARTLINE (58)

            /** text.e:1589	    							if argn = 0 then*/
            // SubProg format pc: 750 op: PRIVATE_INIT_CHECK (30)
            // SubProg format pc: 752 op: EQUALS_IFW_I (121)
            if (_argn_6757 != 0)
            goto L15; // [752] 766
            // SubProg format pc: 756 op: STARTLINE (58)

            /** text.e:1590	    								argn = j*/
            // SubProg format pc: 758 op: ASSIGN_I (113)
            _argn_6757 = _j_6871;
            // SubProg format pc: 761 op: STARTLINE (58)

            /** text.e:1591	    								exit*/
            // SubProg format pc: 763 op: EXIT (61)
            goto L12; // [763] 797
            // SubProg format pc: 765 op: NOP1 (159)
L15: // addr: 766 pc: 765 sub: 6737 op: 159
            // SubProg format pc: 766 op: NOP1 (159)
L14: // addr: 767 pc: 766 sub: 6737 op: 159
            // SubProg format pc: 767 op: NOP1 (159)
L13: // addr: 768 pc: 767 sub: 6737 op: 159
            // SubProg format pc: 768 op: STARTLINE (58)

            /** text.e:1595	    					if j = length(arg_list) then*/
            // SubProg format pc: 770 op: LENGTH (42)
            if (IS_SEQUENCE(_arg_list_6740)){
                    _3688 = SEQ_PTR(_arg_list_6740)->length;
            }
            else {
                _3688 = 1;
            }
            // SubProg format pc: 773 op: EQUALS_IFW_I (121)
            if (_j_6871 != _3688)
            goto L16; // [773] 790
            // SubProg format pc: 777 op: STARTLINE (58)

            /** text.e:1596	    						idname = ""*/
            // SubProg format pc: 779 op: ASSIGN (18)
            RefDS(_5);
            DeRef(_idname_6766);
            _idname_6766 = _5;
            // SubProg format pc: 782 op: SEQUENCE_CHECK (97)
            // SubProg format pc: 784 op: STARTLINE (58)

            /** text.e:1597	    						argn = -1*/
            // SubProg format pc: 786 op: ASSIGN_I (113)
            _argn_6757 = -1;
            // SubProg format pc: 789 op: NOP1 (159)
L16: // addr: 790 pc: 789 sub: 6737 op: 159
            // SubProg format pc: 790 op: STARTLINE (58)

            /** text.e:1599	    				end for*/
            // SubProg format pc: 792 op: ENDFOR_INT_UP1 (54)
            _j_6871 = _j_6871 + 1;
            goto L11; // [792] 722
L12: // addr: 797 pc: 792 sub: 6737 op: 54
            ;
        }
        // SubProg format pc: 797 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sp_6849
        // SubProg format pc: 799 op: ELSE (23)
        goto L6; // [799] 1072
        // SubProg format pc: 801 op: STARTLINE (58)

        /** text.e:1600		    		case '%' then*/
        // SubProg format pc: 803 op: CASE (186)
        case 37:
        // SubProg format pc: 805 op: STARTLINE (58)

        /** text.e:1602		    			integer sp*/
        // SubProg format pc: 807 op: STARTLINE (58)

        /** text.e:1604		    			sp = i + 1*/
        // SubProg format pc: 809 op: PLUS1_I (117)
        _sp_6885 = _i_6744 + 1;
        // SubProg format pc: 813 op: STARTLINE (58)

        /** text.e:1605		    			i = sp*/
        // SubProg format pc: 815 op: ASSIGN_I (113)
        _i_6744 = _sp_6885;
        // SubProg format pc: 818 op: STARTLINE (58)

        /** text.e:1606		    			while i < length(format_pattern) do*/
        // SubProg format pc: 820 op: NOP2 (110)
        // SubProg format pc: 822 op: NOPWHILE (158)
L17: // addr: 823 pc: 822 sub: 6737 op: 158
        // SubProg format pc: 823 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_6739)){
                _3691 = SEQ_PTR(_format_pattern_6739)->length;
        }
        else {
            _3691 = 1;
        }
        // SubProg format pc: 826 op: LESS_IFW_I (119)
        if (_i_6744 >= _3691)
        goto L18; // [826] 871
        // SubProg format pc: 830 op: STARTLINE (58)

        /** text.e:1607		    				if format_pattern[i] = '%' then*/
        // SubProg format pc: 832 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _3693 = (object)*(((s1_ptr)_2)->base + _i_6744);
        // SubProg format pc: 836 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3693, 37)){
            _3693 = NOVALUE;
            goto L19; // [836] 845
        }
        _3693 = NOVALUE;
        // SubProg format pc: 840 op: STARTLINE (58)

        /** text.e:1608		    					exit*/
        // SubProg format pc: 842 op: EXIT (61)
        goto L18; // [842] 871
        // SubProg format pc: 844 op: NOP1 (159)
L19: // addr: 845 pc: 844 sub: 6737 op: 159
        // SubProg format pc: 845 op: STARTLINE (58)

        /** text.e:1610		    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 847 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _3695 = (object)*(((s1_ptr)_2)->base + _i_6744);
        // SubProg format pc: 851 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3695, 93)){
            _3695 = NOVALUE;
            goto L1A; // [851] 860
        }
        _3695 = NOVALUE;
        // SubProg format pc: 855 op: STARTLINE (58)

        /** text.e:1611		    					exit*/
        // SubProg format pc: 857 op: EXIT (61)
        goto L18; // [857] 871
        // SubProg format pc: 859 op: NOP1 (159)
L1A: // addr: 860 pc: 859 sub: 6737 op: 159
        // SubProg format pc: 860 op: STARTLINE (58)

        /** text.e:1613		    				i += 1*/
        // SubProg format pc: 862 op: PLUS1_I (117)
        _i_6744 = _i_6744 + 1;
        // SubProg format pc: 866 op: STARTLINE (58)

        /** text.e:1614		    			end while*/
        // SubProg format pc: 868 op: ENDWHILE (22)
        goto L17; // [868] 823
        // SubProg format pc: 870 op: NOP1 (159)
L18: // addr: 871 pc: 870 sub: 6737 op: 159
        // SubProg format pc: 871 op: STARTLINE (58)

        /** text.e:1615		    			envsym = trim(format_pattern[sp .. i-1])*/
        // SubProg format pc: 873 op: MINUS (10)
        _3698 = _i_6744 - 1;
        // SubProg format pc: 877 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3699;
        RHS_Slice(_format_pattern_6739, _sp_6885, _3698);
        // SubProg format pc: 882 op: PROC (27)
        RefDS(_3069);
        _0 = _envsym_6767;
        _envsym_6767 = _20trim(_3699, _3069, 0);
        DeRef(_0);
        _3699 = NOVALUE;
        // SubProg format pc: 888 op: STARTLINE (58)

        /** text.e:1616	    				if format_pattern[i] = ']' then*/
        // SubProg format pc: 890 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _3701 = (object)*(((s1_ptr)_2)->base + _i_6744);
        // SubProg format pc: 894 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3701, 93)){
            _3701 = NOVALUE;
            goto L1B; // [894] 905
        }
        _3701 = NOVALUE;
        // SubProg format pc: 898 op: STARTLINE (58)

        /** text.e:1617	    					i -= 1*/
        // SubProg format pc: 900 op: MINUS_I (116)
        _i_6744 = _i_6744 - 1;
        // SubProg format pc: 904 op: NOP1 (159)
L1B: // addr: 905 pc: 904 sub: 6737 op: 159
        // SubProg format pc: 905 op: STARTLINE (58)

        /** text.e:1620	    				envvar = getenv(envsym)*/
        // SubProg format pc: 907 op: GETENV (91)
        DeRefi(_envvar_6768);
        _envvar_6768 = EGetEnv(_envsym_6767);
        // SubProg format pc: 910 op: STARTLINE (58)

        /** text.e:1622	    				argn = -1*/
        // SubProg format pc: 912 op: ASSIGN_I (113)
        _argn_6757 = -1;
        // SubProg format pc: 915 op: STARTLINE (58)

        /** text.e:1623	    				if atom(envvar) then*/
        // SubProg format pc: 917 op: IS_AN_ATOM (67)
        _3705 = IS_ATOM(_envvar_6768);
        // SubProg format pc: 920 op: IF (20)
        if (_3705 == 0)
        {
            _3705 = NOVALUE;
            goto L1C; // [920] 929
        }
        else{
            _3705 = NOVALUE;
        }
        // SubProg format pc: 923 op: STARTLINE (58)

        /** text.e:1624	    					envvar = ""*/
        // SubProg format pc: 925 op: ASSIGN (18)
        RefDS(_5);
        DeRefi(_envvar_6768);
        _envvar_6768 = _5;
        // SubProg format pc: 928 op: NOP1 (159)
L1C: // addr: 929 pc: 928 sub: 6737 op: 159
        // SubProg format pc: 929 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var sp_6885
        // SubProg format pc: 931 op: ELSE (23)
        goto L6; // [931] 1072
        // SubProg format pc: 933 op: STARTLINE (58)

        /** text.e:1628		    		case '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' then*/
        // SubProg format pc: 935 op: CASE (186)
        case 48:
        // SubProg format pc: 937 op: CASE (186)
        case 49:
        // SubProg format pc: 939 op: CASE (186)
        case 50:
        // SubProg format pc: 941 op: CASE (186)
        case 51:
        // SubProg format pc: 943 op: CASE (186)
        case 52:
        // SubProg format pc: 945 op: CASE (186)
        case 53:
        // SubProg format pc: 947 op: CASE (186)
        case 54:
        // SubProg format pc: 949 op: CASE (186)
        case 55:
        // SubProg format pc: 951 op: CASE (186)
        case 56:
        // SubProg format pc: 953 op: CASE (186)
        case 57:
        // SubProg format pc: 955 op: STARTLINE (58)

        /** text.e:1629		    			if argn = 0 then*/
        // SubProg format pc: 957 op: EQUALS_IFW_I (121)
        if (_argn_6757 != 0)
        goto L6; // [957] 1072
        // SubProg format pc: 961 op: STARTLINE (58)

        /** text.e:1630			    			i -= 1*/
        // SubProg format pc: 963 op: MINUS_I (116)
        _i_6744 = _i_6744 - 1;
        // SubProg format pc: 967 op: STARTLINE (58)

        /** text.e:1631			    			while i < length(format_pattern) do*/
        // SubProg format pc: 969 op: NOP2 (110)
        // SubProg format pc: 971 op: NOPWHILE (158)
L1D: // addr: 972 pc: 971 sub: 6737 op: 158
        // SubProg format pc: 972 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_6739)){
                _3708 = SEQ_PTR(_format_pattern_6739)->length;
        }
        else {
            _3708 = 1;
        }
        // SubProg format pc: 975 op: LESS_IFW_I (119)
        if (_i_6744 >= _3708)
        goto L6; // [975] 1072
        // SubProg format pc: 979 op: STARTLINE (58)

        /** text.e:1632			    				i += 1*/
        // SubProg format pc: 981 op: PLUS1_I (117)
        _i_6744 = _i_6744 + 1;
        // SubProg format pc: 985 op: STARTLINE (58)

        /** text.e:1633			    				tch = format_pattern[i]*/
        // SubProg format pc: 987 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _tch_6743 = (object)*(((s1_ptr)_2)->base + _i_6744);
        if (!IS_ATOM_INT(_tch_6743))
        _tch_6743 = (object)DBL_PTR(_tch_6743)->dbl;
        // SubProg format pc: 991 op: STARTLINE (58)

        /** text.e:1634			    				pos = find(tch, "0123456789")*/
        // SubProg format pc: 993 op: FIND_FROM (176)
        _pos_6756 = find_from(_tch_6743, _3648, 1);
        // SubProg format pc: 998 op: STARTLINE (58)

        /** text.e:1635			    				if pos = 0 then*/
        // SubProg format pc: 1000 op: EQUALS_IFW_I (121)
        if (_pos_6756 != 0)
        goto L1E; // [1000] 1015
        // SubProg format pc: 1004 op: STARTLINE (58)

        /** text.e:1636			    					i -= 1*/
        // SubProg format pc: 1006 op: MINUS_I (116)
        _i_6744 = _i_6744 - 1;
        // SubProg format pc: 1010 op: STARTLINE (58)

        /** text.e:1637			    					exit*/
        // SubProg format pc: 1012 op: EXIT (61)
        goto L6; // [1012] 1072
        // SubProg format pc: 1014 op: NOP1 (159)
L1E: // addr: 1015 pc: 1014 sub: 6737 op: 159
        // SubProg format pc: 1015 op: STARTLINE (58)

        /** text.e:1639			    				argn = argn * 10 + pos - 1*/
        // SubProg format pc: 1017 op: MULTIPLY (13)
        if (_argn_6757 == (short)_argn_6757){
            _3715 = _argn_6757 * 10;
        }
        else{
            _3715 = NewDouble(_argn_6757 * (eudouble)10);
        }
        // SubProg format pc: 1021 op: PLUS (11)
        if (IS_ATOM_INT(_3715)) {
            _3716 = _3715 + _pos_6756;
            if ((object)((uintptr_t)_3716 + (uintptr_t)HIGH_BITS) >= 0){
                _3716 = NewDouble((eudouble)_3716);
            }
        }
        else {
            _3716 = NewDouble(DBL_PTR(_3715)->dbl + (eudouble)_pos_6756);
        }
        DeRef(_3715);
        _3715 = NOVALUE;
        // SubProg format pc: 1025 op: MINUS (10)
        if (IS_ATOM_INT(_3716)) {
            _argn_6757 = _3716 - 1;
        }
        else {
            _argn_6757 = NewDouble(DBL_PTR(_3716)->dbl - (eudouble)1);
        }
        DeRef(_3716);
        _3716 = NOVALUE;
        // SubProg format pc: 1029 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_argn_6757)) {
            _1 = (object)(DBL_PTR(_argn_6757)->dbl);
            DeRefDS(_argn_6757);
            _argn_6757 = _1;
        }
        // SubProg format pc: 1031 op: STARTLINE (58)

        /** text.e:1640			    			end while*/
        // SubProg format pc: 1033 op: ENDWHILE (22)
        goto L1D; // [1033] 972
        // SubProg format pc: 1035 op: NOP1 (159)
        // SubProg format pc: 1036 op: NOP1 (159)
        // SubProg format pc: 1037 op: ELSE (23)
        goto L6; // [1037] 1072
        // SubProg format pc: 1039 op: STARTLINE (58)

        /** text.e:1643		    		case ',' then*/
        // SubProg format pc: 1041 op: CASE (186)
        case 44:
        // SubProg format pc: 1043 op: STARTLINE (58)

        /** text.e:1644		    			if i < length(format_pattern) then*/
        // SubProg format pc: 1045 op: LENGTH (42)
        if (IS_SEQUENCE(_format_pattern_6739)){
                _3718 = SEQ_PTR(_format_pattern_6739)->length;
        }
        else {
            _3718 = 1;
        }
        // SubProg format pc: 1048 op: LESS_IFW_I (119)
        if (_i_6744 >= _3718)
        goto L6; // [1048] 1072
        // SubProg format pc: 1052 op: STARTLINE (58)

        /** text.e:1645		    				i +=1*/
        // SubProg format pc: 1054 op: PLUS1_I (117)
        _i_6744 = _i_6744 + 1;
        // SubProg format pc: 1058 op: STARTLINE (58)

        /** text.e:1646		    				tsep = format_pattern[i]*/
        // SubProg format pc: 1060 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_format_pattern_6739);
        _tsep_6762 = (object)*(((s1_ptr)_2)->base + _i_6744);
        if (!IS_ATOM_INT(_tsep_6762))
        _tsep_6762 = (object)DBL_PTR(_tsep_6762)->dbl;
        // SubProg format pc: 1064 op: NOP1 (159)
        // SubProg format pc: 1065 op: ELSE (23)
        goto L6; // [1065] 1072
        // SubProg format pc: 1067 op: STARTLINE (58)

        /** text.e:1649		    		case else*/
        // SubProg format pc: 1069 op: CASE (186)
        default:
        // SubProg format pc: 1071 op: NOPSWITCH (187)
    ;}L6: // addr: 1072 pc: 1071 sub: 6737 op: 187
    // SubProg format pc: 1072 op: STARTLINE (58)

    /** text.e:1653	    		if tend > 0 then*/
    // SubProg format pc: 1074 op: GREATER_IFW_I (124)
    if (_tend_6745 <= 0)
    goto L1F; // [1074] 3401
    // SubProg format pc: 1078 op: STARTLINE (58)

    /** text.e:1655	    			sequence argtext = ""*/
    // SubProg format pc: 1080 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_argtext_6932);
    _argtext_6932 = _5;
    // SubProg format pc: 1083 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1085 op: STARTLINE (58)

    /** text.e:1657	    			if argn = 0 then*/
    // SubProg format pc: 1087 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1089 op: EQUALS_IFW_I (121)
    if (_argn_6757 != 0)
    goto L20; // [1089] 1100
    // SubProg format pc: 1093 op: STARTLINE (58)

    /** text.e:1658	    				argn = argl + 1*/
    // SubProg format pc: 1095 op: PLUS1_I (117)
    _argn_6757 = _argl_6758 + 1;
    // SubProg format pc: 1099 op: NOP1 (159)
L20: // addr: 1100 pc: 1099 sub: 6737 op: 159
    // SubProg format pc: 1100 op: STARTLINE (58)

    /** text.e:1660	    			argl = argn*/
    // SubProg format pc: 1102 op: ASSIGN_I (113)
    _argl_6758 = _argn_6757;
    // SubProg format pc: 1105 op: STARTLINE (58)

    /** text.e:1662	    			if argn < 1 or argn > length(arg_list) then*/
    // SubProg format pc: 1107 op: LESS (1)
    _3725 = (_argn_6757 < 1);
    // SubProg format pc: 1111 op: SC1_OR_IF (147)
    if (_3725 != 0) {
        goto L21; // [1111] 1127
    }
    // SubProg format pc: 1115 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_list_6740)){
            _3727 = SEQ_PTR(_arg_list_6740)->length;
    }
    else {
        _3727 = 1;
    }
    // SubProg format pc: 1118 op: GREATER (6)
    _3728 = (_argn_6757 > _3727);
    _3727 = NOVALUE;
    // SubProg format pc: 1122 op: NOP1 (159)
    // SubProg format pc: 1123 op: IF (20)
    if (_3728 == 0)
    {
        DeRef(_3728);
        _3728 = NOVALUE;
        goto L22; // [1123] 1169
    }
    else{
        DeRef(_3728);
        _3728 = NOVALUE;
    }
    // SubProg format pc: 1126 op: NOP1 (159)
L21: // addr: 1127 pc: 1126 sub: 6737 op: 159
    // SubProg format pc: 1127 op: STARTLINE (58)

    /** text.e:1663	    				if length(envvar) > 0 then*/
    // SubProg format pc: 1129 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1131 op: LENGTH (42)
    if (IS_SEQUENCE(_envvar_6768)){
            _3729 = SEQ_PTR(_envvar_6768)->length;
    }
    else {
        _3729 = 1;
    }
    // SubProg format pc: 1134 op: GREATER_IFW_I (124)
    if (_3729 <= 0)
    goto L23; // [1134] 1153
    // SubProg format pc: 1138 op: STARTLINE (58)

    /** text.e:1664	    					argtext = envvar*/
    // SubProg format pc: 1140 op: ASSIGN (18)
    Ref(_envvar_6768);
    DeRef(_argtext_6932);
    _argtext_6932 = _envvar_6768;
    // SubProg format pc: 1143 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1145 op: STARTLINE (58)

    /** text.e:1665		    				currargv = envvar*/
    // SubProg format pc: 1147 op: ASSIGN (18)
    Ref(_envvar_6768);
    DeRef(_currargv_6765);
    _currargv_6765 = _envvar_6768;
    // SubProg format pc: 1150 op: ELSE (23)
    goto L24; // [1150] 2582
    // SubProg format pc: 1152 op: NOP1 (159)
L23: // addr: 1153 pc: 1152 sub: 6737 op: 159
    // SubProg format pc: 1153 op: STARTLINE (58)

    /** text.e:1667	    					argtext = ""*/
    // SubProg format pc: 1155 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_argtext_6932);
    _argtext_6932 = _5;
    // SubProg format pc: 1158 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1160 op: STARTLINE (58)

    /** text.e:1668		    				currargv =""*/
    // SubProg format pc: 1162 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_currargv_6765);
    _currargv_6765 = _5;
    // SubProg format pc: 1165 op: NOP1 (159)
    // SubProg format pc: 1166 op: ELSE (23)
    goto L24; // [1166] 2582
    // SubProg format pc: 1168 op: NOP1 (159)
L22: // addr: 1169 pc: 1168 sub: 6737 op: 159
    // SubProg format pc: 1169 op: STARTLINE (58)

    /** text.e:1671						if string(arg_list[argn]) then*/
    // SubProg format pc: 1171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3731 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1175 op: PROC (27)
    Ref(_3731);
    _3732 = _6string(_3731);
    _3731 = NOVALUE;
    // SubProg format pc: 1179 op: IF (20)
    if (_3732 == 0) {
        DeRef(_3732);
        _3732 = NOVALUE;
        goto L25; // [1179] 1229
    }
    else {
        if (!IS_ATOM_INT(_3732) && DBL_PTR(_3732)->dbl == 0.0){
            DeRef(_3732);
            _3732 = NOVALUE;
            goto L25; // [1179] 1229
        }
        DeRef(_3732);
        _3732 = NOVALUE;
    }
    DeRef(_3732);
    _3732 = NOVALUE;
    // SubProg format pc: 1182 op: STARTLINE (58)

    /** text.e:1672							if length(idname) > 0 then*/
    // SubProg format pc: 1184 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1186 op: LENGTH (42)
    if (IS_SEQUENCE(_idname_6766)){
            _3733 = SEQ_PTR(_idname_6766)->length;
    }
    else {
        _3733 = 1;
    }
    // SubProg format pc: 1189 op: GREATER_IFW_I (124)
    if (_3733 <= 0)
    goto L26; // [1189] 1217
    // SubProg format pc: 1193 op: STARTLINE (58)

    /** text.e:1673								argtext = arg_list[argn][length(idname) + 1 .. $]*/
    // SubProg format pc: 1195 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3735 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1199 op: LENGTH (42)
    if (IS_SEQUENCE(_idname_6766)){
            _3736 = SEQ_PTR(_idname_6766)->length;
    }
    else {
        _3736 = 1;
    }
    // SubProg format pc: 1202 op: PLUS1 (93)
    _3737 = _3736 + 1;
    _3736 = NOVALUE;
    // SubProg format pc: 1206 op: LENGTH (42)
    if (IS_SEQUENCE(_3735)){
            _3738 = SEQ_PTR(_3735)->length;
    }
    else {
        _3738 = 1;
    }
    // SubProg format pc: 1209 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_3735, _3737, _3738);
    _3735 = NOVALUE;
    // SubProg format pc: 1214 op: ELSE (23)
    goto L27; // [1214] 2575
    // SubProg format pc: 1216 op: NOP1 (159)
L26: // addr: 1217 pc: 1216 sub: 6737 op: 159
    // SubProg format pc: 1217 op: STARTLINE (58)

    /** text.e:1675								argtext = arg_list[argn]*/
    // SubProg format pc: 1219 op: RHS_SUBS_CHECK (92)
    DeRef(_argtext_6932);
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _argtext_6932 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    Ref(_argtext_6932);
    // SubProg format pc: 1223 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1225 op: NOP1 (159)
    // SubProg format pc: 1226 op: ELSE (23)
    goto L27; // [1226] 2575
    // SubProg format pc: 1228 op: NOP1 (159)
L25: // addr: 1229 pc: 1228 sub: 6737 op: 159
    // SubProg format pc: 1229 op: STARTLINE (58)

    /** text.e:1678						elsif integer(arg_list[argn]) */
    // SubProg format pc: 1231 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3741 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1235 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_3741))
    _3742 = 1;
    else if (IS_ATOM_DBL(_3741))
    _3742 = IS_ATOM_INT(DoubleToInt(_3741));
    else
    _3742 = 0;
    _3741 = NOVALUE;
    // SubProg format pc: 1238 op: SC1_AND (141)
    if (_3742 == 0) {
        _3743 = 0;
        goto L28; // [1238] 1254
    }
    // SubProg format pc: 1242 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3744 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1246 op: LESSEQ (5)
    if (IS_ATOM_INT(_3744)) {
        _3746 = (_3744 <= 67108863);
    }
    else {
        _3746 = binary_op(LESSEQ, _3744, 67108863);
    }
    _3744 = NOVALUE;
    // SubProg format pc: 1250 op: SC2_AND (142)
    if (IS_ATOM_INT(_3746))
    _3743 = (_3746 != 0);
    else
    _3743 = DBL_PTR(_3746)->dbl != 0.0;
    // SubProg format pc: 1253 op: NOP1 (159)
L28: // addr: 1254 pc: 1253 sub: 6737 op: 159
    // SubProg format pc: 1254 op: SC1_AND_IF (146)
    if (_3743 == 0) {
        goto L29; // [1254] 1747
    }
    // SubProg format pc: 1258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3748 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1262 op: GREATEREQ (2)
    _3751 = binary_op(GREATEREQ, _3748, _3750);
    _3748 = NOVALUE;
    // SubProg format pc: 1266 op: NOP1 (159)
    // SubProg format pc: 1267 op: IF (20)
    if (_3751 == 0) {
        DeRef(_3751);
        _3751 = NOVALUE;
        goto L29; // [1267] 1747
    }
    else {
        if (!IS_ATOM_INT(_3751) && DBL_PTR(_3751)->dbl == 0.0){
            DeRef(_3751);
            _3751 = NOVALUE;
            goto L29; // [1267] 1747
        }
        DeRef(_3751);
        _3751 = NOVALUE;
    }
    DeRef(_3751);
    _3751 = NOVALUE;
    // SubProg format pc: 1270 op: STARTLINE (58)

    /** text.e:1682							if istext then*/
    // SubProg format pc: 1272 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1274 op: IF (20)
    if (_istext_6763 == 0)
    {
        goto L2A; // [1274] 1298
    }
    else{
    }
    // SubProg format pc: 1277 op: STARTLINE (58)

    /** text.e:1683								argtext = {and_bits(0xFFFF_FFFF, math:abs(arg_list[argn]))}*/
    // SubProg format pc: 1279 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3752 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1283 op: PROC (27)
    Ref(_3752);
    _3753 = _13abs(_3752);
    _3752 = NOVALUE;
    // SubProg format pc: 1287 op: AND_BITS (56)
    _3754 = binary_op(AND_BITS, _464, _3753);
    DeRef(_3753);
    _3753 = NOVALUE;
    // SubProg format pc: 1291 op: RIGHT_BRACE_N (31)
    _0 = _argtext_6932;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _3754;
    _argtext_6932 = MAKE_SEQ(_1);
    DeRef(_0);
    _3754 = NOVALUE;
    // SubProg format pc: 1295 op: ELSE (23)
    goto L27; // [1295] 2575
    // SubProg format pc: 1297 op: NOP1 (159)
L2A: // addr: 1298 pc: 1297 sub: 6737 op: 159
    // SubProg format pc: 1298 op: STARTLINE (58)

    /** text.e:1685							elsif bwz != 0 and arg_list[argn] = 0 then*/
    // SubProg format pc: 1300 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1302 op: NOTEQ (4)
    _3756 = (_bwz_6751 != 0);
    // SubProg format pc: 1306 op: SC1_AND_IF (146)
    if (_3756 == 0) {
        goto L2B; // [1306] 1333
    }
    // SubProg format pc: 1310 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3758 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1314 op: EQUALS (3)
    if (IS_ATOM_INT(_3758)) {
        _3759 = (_3758 == 0);
    }
    else {
        _3759 = binary_op(EQUALS, _3758, 0);
    }
    _3758 = NOVALUE;
    // SubProg format pc: 1318 op: NOP1 (159)
    // SubProg format pc: 1319 op: IF (20)
    if (_3759 == 0) {
        DeRef(_3759);
        _3759 = NOVALUE;
        goto L2B; // [1319] 1333
    }
    else {
        if (!IS_ATOM_INT(_3759) && DBL_PTR(_3759)->dbl == 0.0){
            DeRef(_3759);
            _3759 = NOVALUE;
            goto L2B; // [1319] 1333
        }
        DeRef(_3759);
        _3759 = NOVALUE;
    }
    DeRef(_3759);
    _3759 = NOVALUE;
    // SubProg format pc: 1322 op: STARTLINE (58)

    /** text.e:1686								argtext = repeat(' ', width)*/
    // SubProg format pc: 1324 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1326 op: REPEAT (32)
    DeRef(_argtext_6932);
    _argtext_6932 = Repeat(32, _width_6754);
    // SubProg format pc: 1330 op: ELSE (23)
    goto L27; // [1330] 2575
    // SubProg format pc: 1332 op: NOP1 (159)
L2B: // addr: 1333 pc: 1332 sub: 6737 op: 159
    // SubProg format pc: 1333 op: STARTLINE (58)

    /** text.e:1688							elsif binout = 1 then*/
    // SubProg format pc: 1335 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1337 op: EQUALS_IFW_I (121)
    if (_binout_6761 != 1)
    goto L2C; // [1337] 1411
    // SubProg format pc: 1341 op: STARTLINE (58)

    /** text.e:1689								argtext = stdseq:reverse( convert:int_to_bits(arg_list[argn], 32)) + '0'*/
    // SubProg format pc: 1343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3762 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1347 op: PROC (27)
    Ref(_3762);
    _3763 = _21int_to_bits(_3762, 32);
    _3762 = NOVALUE;
    // SubProg format pc: 1352 op: PROC (27)
    _3764 = _24reverse(_3763, 1, 0);
    _3763 = NOVALUE;
    // SubProg format pc: 1358 op: PLUS (11)
    DeRef(_argtext_6932);
    if (IS_ATOM_INT(_3764)) {
        _argtext_6932 = _3764 + 48;
        if ((object)((uintptr_t)_argtext_6932 + (uintptr_t)HIGH_BITS) >= 0){
            _argtext_6932 = NewDouble((eudouble)_argtext_6932);
        }
    }
    else {
        _argtext_6932 = binary_op(PLUS, _3764, 48);
    }
    DeRef(_3764);
    _3764 = NOVALUE;
    // SubProg format pc: 1362 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1364 op: STARTLINE (58)

    /** text.e:1690								for ib = 1 to length(argtext) do*/
    // SubProg format pc: 1366 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3766 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3766 = 1;
    }
    // SubProg format pc: 1369 op: FOR_I (125)
    {
        object _ib_6990;
        _ib_6990 = 1;
L2D: // addr: 1376 pc: 1369 sub: 6737 op: 125
        if (_ib_6990 > _3766){
            goto L2E; // [1369] 1408
        }
        // SubProg format pc: 1376 op: STARTLINE (58)

        /** text.e:1691									if argtext[ib] = '1' then*/
        // SubProg format pc: 1378 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_argtext_6932);
        _3767 = (object)*(((s1_ptr)_2)->base + _ib_6990);
        // SubProg format pc: 1382 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3767, 49)){
            _3767 = NOVALUE;
            goto L2F; // [1382] 1401
        }
        _3767 = NOVALUE;
        // SubProg format pc: 1386 op: STARTLINE (58)

        /** text.e:1692										argtext = argtext[ib .. $]*/
        // SubProg format pc: 1388 op: LENGTH (42)
        if (IS_SEQUENCE(_argtext_6932)){
                _3769 = SEQ_PTR(_argtext_6932)->length;
        }
        else {
            _3769 = 1;
        }
        // SubProg format pc: 1391 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_argtext_6932;
        RHS_Slice(_argtext_6932, _ib_6990, _3769);
        // SubProg format pc: 1396 op: STARTLINE (58)

        /** text.e:1693										exit*/
        // SubProg format pc: 1398 op: EXIT (61)
        goto L2E; // [1398] 1408
        // SubProg format pc: 1400 op: NOP1 (159)
L2F: // addr: 1401 pc: 1400 sub: 6737 op: 159
        // SubProg format pc: 1401 op: STARTLINE (58)

        /** text.e:1695								end for*/
        // SubProg format pc: 1403 op: ENDFOR_INT_UP1 (54)
        _ib_6990 = _ib_6990 + 1;
        goto L2D; // [1403] 1376
L2E: // addr: 1408 pc: 1403 sub: 6737 op: 54
        ;
    }
    // SubProg format pc: 1408 op: ELSE (23)
    goto L27; // [1408] 2575
    // SubProg format pc: 1410 op: NOP1 (159)
L2C: // addr: 1411 pc: 1410 sub: 6737 op: 159
    // SubProg format pc: 1411 op: STARTLINE (58)

    /** text.e:1697							elsif hexout = 0 then*/
    // SubProg format pc: 1413 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1415 op: EQUALS_IFW_I (121)
    if (_hexout_6760 != 0)
    goto L30; // [1415] 1681
    // SubProg format pc: 1419 op: STARTLINE (58)

    /** text.e:1698								argtext = sprintf("%d", arg_list[argn])*/
    // SubProg format pc: 1421 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3772 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1425 op: SPRINTF (53)
    DeRef(_argtext_6932);
    _argtext_6932 = EPrintf(-9999999, _1511, _3772);
    _3772 = NOVALUE;
    // SubProg format pc: 1429 op: STARTLINE (58)

    /** text.e:1699								if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1431 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1433 op: NOTEQ (4)
    _3774 = (_zfill_6750 != 0);
    // SubProg format pc: 1437 op: SC1_AND_IF (146)
    if (_3774 == 0) {
        goto L31; // [1437] 1534
    }
    // SubProg format pc: 1441 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1443 op: GREATER (6)
    _3776 = (_width_6754 > 0);
    // SubProg format pc: 1447 op: NOP1 (159)
    // SubProg format pc: 1448 op: IF (20)
    if (_3776 == 0)
    {
        DeRef(_3776);
        _3776 = NOVALUE;
        goto L31; // [1448] 1534
    }
    else{
        DeRef(_3776);
        _3776 = NOVALUE;
    }
    // SubProg format pc: 1451 op: STARTLINE (58)

    /** text.e:1700									if argtext[1] = '-' then*/
    // SubProg format pc: 1453 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_6932);
    _3777 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1457 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3777, 45)){
        _3777 = NOVALUE;
        goto L32; // [1457] 1503
    }
    _3777 = NOVALUE;
    // SubProg format pc: 1461 op: STARTLINE (58)

    /** text.e:1701										if width > length(argtext) then*/
    // SubProg format pc: 1463 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1465 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3779 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3779 = 1;
    }
    // SubProg format pc: 1468 op: GREATER_IFW_I (124)
    if (_width_6754 <= _3779)
    goto L33; // [1468] 1533
    // SubProg format pc: 1472 op: STARTLINE (58)

    /** text.e:1702											argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    // SubProg format pc: 1474 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3781 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3781 = 1;
    }
    // SubProg format pc: 1477 op: MINUS (10)
    _3782 = _width_6754 - _3781;
    _3781 = NOVALUE;
    // SubProg format pc: 1481 op: REPEAT (32)
    _3783 = Repeat(48, _3782);
    _3782 = NOVALUE;
    // SubProg format pc: 1485 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3784 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3784 = 1;
    }
    // SubProg format pc: 1488 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3785;
    RHS_Slice(_argtext_6932, 2, _3784);
    // SubProg format pc: 1493 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3785;
        concat_list[1] = _3783;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3785);
    _3785 = NOVALUE;
    DeRefDS(_3783);
    _3783 = NOVALUE;
    // SubProg format pc: 1499 op: NOP1 (159)
    // SubProg format pc: 1500 op: ELSE (23)
    goto L33; // [1500] 1533
    // SubProg format pc: 1502 op: NOP1 (159)
L32: // addr: 1503 pc: 1502 sub: 6737 op: 159
    // SubProg format pc: 1503 op: STARTLINE (58)

    /** text.e:1705										if width > length(argtext) then*/
    // SubProg format pc: 1505 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1507 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3787 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3787 = 1;
    }
    // SubProg format pc: 1510 op: GREATER_IFW_I (124)
    if (_width_6754 <= _3787)
    goto L34; // [1510] 1532
    // SubProg format pc: 1514 op: STARTLINE (58)

    /** text.e:1706											argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1516 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3789 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3789 = 1;
    }
    // SubProg format pc: 1519 op: MINUS (10)
    _3790 = _width_6754 - _3789;
    _3789 = NOVALUE;
    // SubProg format pc: 1523 op: REPEAT (32)
    _3791 = Repeat(48, _3790);
    _3790 = NOVALUE;
    // SubProg format pc: 1527 op: CONCAT (15)
    Concat((object_ptr)&_argtext_6932, _3791, _argtext_6932);
    DeRefDS(_3791);
    _3791 = NOVALUE;
    DeRef(_3791);
    _3791 = NOVALUE;
    // SubProg format pc: 1531 op: NOP1 (159)
L34: // addr: 1532 pc: 1531 sub: 6737 op: 159
    // SubProg format pc: 1532 op: NOP1 (159)
L33: // addr: 1533 pc: 1532 sub: 6737 op: 159
    // SubProg format pc: 1533 op: NOP1 (159)
L31: // addr: 1534 pc: 1533 sub: 6737 op: 159
    // SubProg format pc: 1534 op: STARTLINE (58)

    /** text.e:1711								if arg_list[argn] > 0 then*/
    // SubProg format pc: 1536 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3793 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1540 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _3793, 0)){
        _3793 = NOVALUE;
        goto L35; // [1540] 1588
    }
    _3793 = NOVALUE;
    // SubProg format pc: 1544 op: STARTLINE (58)

    /** text.e:1712									if psign then*/
    // SubProg format pc: 1546 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1548 op: IF (20)
    if (_psign_6748 == 0)
    {
        goto L27; // [1548] 2575
    }
    else{
    }
    // SubProg format pc: 1551 op: STARTLINE (58)

    /** text.e:1713										if zfill = 0 then*/
    // SubProg format pc: 1553 op: EQUALS_IFW_I (121)
    if (_zfill_6750 != 0)
    goto L36; // [1553] 1566
    // SubProg format pc: 1557 op: STARTLINE (58)

    /** text.e:1714											argtext = '+' & argtext*/
    // SubProg format pc: 1559 op: CONCAT (15)
    Prepend(&_argtext_6932, _argtext_6932, 43);
    // SubProg format pc: 1563 op: ELSE (23)
    goto L27; // [1563] 2575
    // SubProg format pc: 1565 op: NOP1 (159)
L36: // addr: 1566 pc: 1565 sub: 6737 op: 159
    // SubProg format pc: 1566 op: STARTLINE (58)

    /** text.e:1715										elsif argtext[1] = '0' then*/
    // SubProg format pc: 1568 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_6932);
    _3797 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1572 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3797, 48)){
        _3797 = NOVALUE;
        goto L27; // [1572] 2575
    }
    _3797 = NOVALUE;
    // SubProg format pc: 1576 op: STARTLINE (58)

    /** text.e:1716											argtext[1] = '+'*/
    // SubProg format pc: 1578 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_6932);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_6932 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 43;
    DeRef(_1);
    // SubProg format pc: 1582 op: NOP1 (159)
    // SubProg format pc: 1583 op: NOP1 (159)
    // SubProg format pc: 1584 op: NOP1 (159)
    // SubProg format pc: 1585 op: ELSE (23)
    goto L27; // [1585] 2575
    // SubProg format pc: 1587 op: NOP1 (159)
L35: // addr: 1588 pc: 1587 sub: 6737 op: 159
    // SubProg format pc: 1588 op: STARTLINE (58)

    /** text.e:1719								elsif arg_list[argn] < 0 then*/
    // SubProg format pc: 1590 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3799 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1594 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _3799, 0)){
        _3799 = NOVALUE;
        goto L27; // [1594] 2575
    }
    _3799 = NOVALUE;
    // SubProg format pc: 1598 op: STARTLINE (58)

    /** text.e:1720									if msign then*/
    // SubProg format pc: 1600 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1602 op: IF (20)
    if (_msign_6749 == 0)
    {
        goto L27; // [1602] 2575
    }
    else{
    }
    // SubProg format pc: 1605 op: STARTLINE (58)

    /** text.e:1721										if zfill = 0 then*/
    // SubProg format pc: 1607 op: EQUALS_IFW_I (121)
    if (_zfill_6750 != 0)
    goto L37; // [1607] 1630
    // SubProg format pc: 1611 op: STARTLINE (58)

    /** text.e:1722											argtext = '(' & argtext[2..$] & ')'*/
    // SubProg format pc: 1613 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3802 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3802 = 1;
    }
    // SubProg format pc: 1616 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3803;
    RHS_Slice(_argtext_6932, 2, _3802);
    // SubProg format pc: 1621 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _3803;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3803);
    _3803 = NOVALUE;
    // SubProg format pc: 1627 op: ELSE (23)
    goto L27; // [1627] 2575
    // SubProg format pc: 1629 op: NOP1 (159)
L37: // addr: 1630 pc: 1629 sub: 6737 op: 159
    // SubProg format pc: 1630 op: STARTLINE (58)

    /** text.e:1724											if argtext[2] = '0' then*/
    // SubProg format pc: 1632 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_6932);
    _3806 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg format pc: 1636 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3806, 48)){
        _3806 = NOVALUE;
        goto L38; // [1636] 1659
    }
    _3806 = NOVALUE;
    // SubProg format pc: 1640 op: STARTLINE (58)

    /** text.e:1725												argtext = '(' & argtext[3..$] & ')'*/
    // SubProg format pc: 1642 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3808 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3808 = 1;
    }
    // SubProg format pc: 1645 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3809;
    RHS_Slice(_argtext_6932, 3, _3808);
    // SubProg format pc: 1650 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _3809;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3809);
    _3809 = NOVALUE;
    // SubProg format pc: 1656 op: ELSE (23)
    goto L27; // [1656] 2575
    // SubProg format pc: 1658 op: NOP1 (159)
L38: // addr: 1659 pc: 1658 sub: 6737 op: 159
    // SubProg format pc: 1659 op: STARTLINE (58)

    /** text.e:1729												argtext = argtext[2..$] & ')'*/
    // SubProg format pc: 1661 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3811 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3811 = 1;
    }
    // SubProg format pc: 1664 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3812;
    RHS_Slice(_argtext_6932, 2, _3811);
    // SubProg format pc: 1669 op: CONCAT (15)
    Append(&_argtext_6932, _3812, 41);
    DeRefDS(_3812);
    _3812 = NOVALUE;
    // SubProg format pc: 1673 op: NOP1 (159)
    // SubProg format pc: 1674 op: NOP1 (159)
    // SubProg format pc: 1675 op: NOP1 (159)
    // SubProg format pc: 1676 op: NOP1 (159)
    // SubProg format pc: 1677 op: NOP1 (159)
    // SubProg format pc: 1678 op: ELSE (23)
    goto L27; // [1678] 2575
    // SubProg format pc: 1680 op: NOP1 (159)
L30: // addr: 1681 pc: 1680 sub: 6737 op: 159
    // SubProg format pc: 1681 op: STARTLINE (58)

    /** text.e:1735								argtext = sprintf("%x", arg_list[argn])*/
    // SubProg format pc: 1683 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3815 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1687 op: SPRINTF (53)
    DeRef(_argtext_6932);
    _argtext_6932 = EPrintf(-9999999, _3814, _3815);
    _3815 = NOVALUE;
    // SubProg format pc: 1691 op: STARTLINE (58)

    /** text.e:1736								if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1693 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1695 op: NOTEQ (4)
    _3817 = (_zfill_6750 != 0);
    // SubProg format pc: 1699 op: SC1_AND_IF (146)
    if (_3817 == 0) {
        goto L27; // [1699] 2575
    }
    // SubProg format pc: 1703 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1705 op: GREATER (6)
    _3819 = (_width_6754 > 0);
    // SubProg format pc: 1709 op: NOP1 (159)
    // SubProg format pc: 1710 op: IF (20)
    if (_3819 == 0)
    {
        DeRef(_3819);
        _3819 = NOVALUE;
        goto L27; // [1710] 2575
    }
    else{
        DeRef(_3819);
        _3819 = NOVALUE;
    }
    // SubProg format pc: 1713 op: STARTLINE (58)

    /** text.e:1737									if width > length(argtext) then*/
    // SubProg format pc: 1715 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1717 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3820 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3820 = 1;
    }
    // SubProg format pc: 1720 op: GREATER_IFW_I (124)
    if (_width_6754 <= _3820)
    goto L27; // [1720] 2575
    // SubProg format pc: 1724 op: STARTLINE (58)

    /** text.e:1738										argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1726 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3822 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3822 = 1;
    }
    // SubProg format pc: 1729 op: MINUS (10)
    _3823 = _width_6754 - _3822;
    _3822 = NOVALUE;
    // SubProg format pc: 1733 op: REPEAT (32)
    _3824 = Repeat(48, _3823);
    _3823 = NOVALUE;
    // SubProg format pc: 1737 op: CONCAT (15)
    Concat((object_ptr)&_argtext_6932, _3824, _argtext_6932);
    DeRefDS(_3824);
    _3824 = NOVALUE;
    DeRef(_3824);
    _3824 = NOVALUE;
    // SubProg format pc: 1741 op: NOP1 (159)
    // SubProg format pc: 1742 op: NOP1 (159)
    // SubProg format pc: 1743 op: NOP1 (159)
    // SubProg format pc: 1744 op: ELSE (23)
    goto L27; // [1744] 2575
    // SubProg format pc: 1746 op: NOP1 (159)
L29: // addr: 1747 pc: 1746 sub: 6737 op: 159
    // SubProg format pc: 1747 op: STARTLINE (58)

    /** text.e:1743						elsif atom(arg_list[argn]) then*/
    // SubProg format pc: 1749 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3826 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1753 op: IS_AN_ATOM (67)
    _3827 = IS_ATOM(_3826);
    _3826 = NOVALUE;
    // SubProg format pc: 1756 op: IF (20)
    if (_3827 == 0)
    {
        _3827 = NOVALUE;
        goto L39; // [1756] 2159
    }
    else{
        _3827 = NOVALUE;
    }
    // SubProg format pc: 1759 op: STARTLINE (58)

    /** text.e:1744							if istext then*/
    // SubProg format pc: 1761 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1763 op: IF (20)
    if (_istext_6763 == 0)
    {
        goto L3A; // [1763] 1790
    }
    else{
    }
    // SubProg format pc: 1766 op: STARTLINE (58)

    /** text.e:1745								argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(arg_list[argn])))}*/
    // SubProg format pc: 1768 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3828 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1772 op: FLOOR (83)
    if (IS_ATOM_INT(_3828))
    _3829 = e_floor(_3828);
    else
    _3829 = unary_op(FLOOR, _3828);
    _3828 = NOVALUE;
    // SubProg format pc: 1775 op: PROC (27)
    _3830 = _13abs(_3829);
    _3829 = NOVALUE;
    // SubProg format pc: 1779 op: AND_BITS (56)
    _3831 = binary_op(AND_BITS, _464, _3830);
    DeRef(_3830);
    _3830 = NOVALUE;
    // SubProg format pc: 1783 op: RIGHT_BRACE_N (31)
    _0 = _argtext_6932;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _3831;
    _argtext_6932 = MAKE_SEQ(_1);
    DeRef(_0);
    _3831 = NOVALUE;
    // SubProg format pc: 1787 op: ELSE (23)
    goto L27; // [1787] 2575
    // SubProg format pc: 1789 op: NOP1 (159)
L3A: // addr: 1790 pc: 1789 sub: 6737 op: 159
    // SubProg format pc: 1790 op: STARTLINE (58)

    /** text.e:1748								if hexout then*/
    // SubProg format pc: 1792 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1794 op: IF (20)
    if (_hexout_6760 == 0)
    {
        goto L3B; // [1794] 1862
    }
    else{
    }
    // SubProg format pc: 1797 op: STARTLINE (58)

    /** text.e:1749									argtext = sprintf("%x", arg_list[argn])*/
    // SubProg format pc: 1799 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3833 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1803 op: SPRINTF (53)
    DeRef(_argtext_6932);
    _argtext_6932 = EPrintf(-9999999, _3814, _3833);
    _3833 = NOVALUE;
    // SubProg format pc: 1807 op: STARTLINE (58)

    /** text.e:1750									if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1809 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1811 op: NOTEQ (4)
    _3835 = (_zfill_6750 != 0);
    // SubProg format pc: 1815 op: SC1_AND_IF (146)
    if (_3835 == 0) {
        goto L27; // [1815] 2575
    }
    // SubProg format pc: 1819 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1821 op: GREATER (6)
    _3837 = (_width_6754 > 0);
    // SubProg format pc: 1825 op: NOP1 (159)
    // SubProg format pc: 1826 op: IF (20)
    if (_3837 == 0)
    {
        DeRef(_3837);
        _3837 = NOVALUE;
        goto L27; // [1826] 2575
    }
    else{
        DeRef(_3837);
        _3837 = NOVALUE;
    }
    // SubProg format pc: 1829 op: STARTLINE (58)

    /** text.e:1751										if width > length(argtext) then*/
    // SubProg format pc: 1831 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1833 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3838 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3838 = 1;
    }
    // SubProg format pc: 1836 op: GREATER_IFW_I (124)
    if (_width_6754 <= _3838)
    goto L27; // [1836] 2575
    // SubProg format pc: 1840 op: STARTLINE (58)

    /** text.e:1752											argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1842 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3840 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3840 = 1;
    }
    // SubProg format pc: 1845 op: MINUS (10)
    _3841 = _width_6754 - _3840;
    _3840 = NOVALUE;
    // SubProg format pc: 1849 op: REPEAT (32)
    _3842 = Repeat(48, _3841);
    _3841 = NOVALUE;
    // SubProg format pc: 1853 op: CONCAT (15)
    Concat((object_ptr)&_argtext_6932, _3842, _argtext_6932);
    DeRefDS(_3842);
    _3842 = NOVALUE;
    DeRef(_3842);
    _3842 = NOVALUE;
    // SubProg format pc: 1857 op: NOP1 (159)
    // SubProg format pc: 1858 op: NOP1 (159)
    // SubProg format pc: 1859 op: ELSE (23)
    goto L27; // [1859] 2575
    // SubProg format pc: 1861 op: NOP1 (159)
L3B: // addr: 1862 pc: 1861 sub: 6737 op: 159
    // SubProg format pc: 1862 op: STARTLINE (58)

    /** text.e:1756									argtext = trim(sprintf("%15.15g", arg_list[argn]))*/
    // SubProg format pc: 1864 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3845 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 1868 op: SPRINTF (53)
    _3846 = EPrintf(-9999999, _3844, _3845);
    _3845 = NOVALUE;
    // SubProg format pc: 1872 op: PROC (27)
    RefDS(_3069);
    _0 = _argtext_6932;
    _argtext_6932 = _20trim(_3846, _3069, 0);
    DeRef(_0);
    _3846 = NOVALUE;
    // SubProg format pc: 1878 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 1880 op: STARTLINE (58)

    /** text.e:1758									while ep != 0 with entry do*/
    // SubProg format pc: 1882 op: ELSE (23)
    goto L3C; // [1882] 1905
    // SubProg format pc: 1884 op: NOPWHILE (158)
L3D: // addr: 1885 pc: 1884 sub: 6737 op: 158
    // SubProg format pc: 1885 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1887 op: NOTEQ_IFW_I (122)
    if (_ep_6769 == 0)
    goto L3E; // [1887] 1917
    // SubProg format pc: 1891 op: STARTLINE (58)

    /** text.e:1759										argtext = remove(argtext, ep+2)*/
    // SubProg format pc: 1893 op: PLUS (11)
    _3849 = _ep_6769 + 2;
    if ((object)((uintptr_t)_3849 + (uintptr_t)HIGH_BITS) >= 0){
        _3849 = NewDouble((eudouble)_3849);
    }
    // SubProg format pc: 1897 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_6932);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_3849)) ? _3849 : (object)(DBL_PTR(_3849)->dbl);
        int stop = (IS_ATOM_INT(_3849)) ? _3849 : (object)(DBL_PTR(_3849)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_6932), start, &_argtext_6932 );
            }
            else Tail(SEQ_PTR(_argtext_6932), stop+1, &_argtext_6932);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_6932), start, &_argtext_6932);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_6932 = Remove_elements(start, stop, (SEQ_PTR(_argtext_6932)->ref == 1));
        }
    }
    DeRef(_3849);
    _3849 = NOVALUE;
    _3849 = NOVALUE;
    // SubProg format pc: 1902 op: STARTLINE (58)

    /** text.e:1760									entry*/
    // SubProg format pc: 1904 op: NOP1 (159)
L3C: // addr: 1905 pc: 1904 sub: 6737 op: 159
    // SubProg format pc: 1905 op: STARTLINE (58)

    /** text.e:1761										ep = match("e+0", argtext)*/
    // SubProg format pc: 1907 op: MATCH_FROM (177)
    _ep_6769 = e_match_from(_3851, _argtext_6932, 1);
    // SubProg format pc: 1912 op: STARTLINE (58)

    /** text.e:1762									end while*/
    // SubProg format pc: 1914 op: ENDWHILE (22)
    goto L3D; // [1914] 1885
    // SubProg format pc: 1916 op: NOP1 (159)
L3E: // addr: 1917 pc: 1916 sub: 6737 op: 159
    // SubProg format pc: 1917 op: STARTLINE (58)

    /** text.e:1763									if zfill != 0 and width > 0 then*/
    // SubProg format pc: 1919 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1921 op: NOTEQ (4)
    _3853 = (_zfill_6750 != 0);
    // SubProg format pc: 1925 op: SC1_AND_IF (146)
    if (_3853 == 0) {
        goto L3F; // [1925] 2010
    }
    // SubProg format pc: 1929 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1931 op: GREATER (6)
    _3855 = (_width_6754 > 0);
    // SubProg format pc: 1935 op: NOP1 (159)
    // SubProg format pc: 1936 op: IF (20)
    if (_3855 == 0)
    {
        DeRef(_3855);
        _3855 = NOVALUE;
        goto L3F; // [1936] 2010
    }
    else{
        DeRef(_3855);
        _3855 = NOVALUE;
    }
    // SubProg format pc: 1939 op: STARTLINE (58)

    /** text.e:1764										if width > length(argtext) then*/
    // SubProg format pc: 1941 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 1943 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3856 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3856 = 1;
    }
    // SubProg format pc: 1946 op: GREATER_IFW_I (124)
    if (_width_6754 <= _3856)
    goto L40; // [1946] 2009
    // SubProg format pc: 1950 op: STARTLINE (58)

    /** text.e:1765											if argtext[1] = '-' then*/
    // SubProg format pc: 1952 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_6932);
    _3858 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 1956 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3858, 45)){
        _3858 = NOVALUE;
        goto L41; // [1956] 1990
    }
    _3858 = NOVALUE;
    // SubProg format pc: 1960 op: STARTLINE (58)

    /** text.e:1766												argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    // SubProg format pc: 1962 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3860 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3860 = 1;
    }
    // SubProg format pc: 1965 op: MINUS (10)
    _3861 = _width_6754 - _3860;
    _3860 = NOVALUE;
    // SubProg format pc: 1969 op: REPEAT (32)
    _3862 = Repeat(48, _3861);
    _3861 = NOVALUE;
    // SubProg format pc: 1973 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3863 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3863 = 1;
    }
    // SubProg format pc: 1976 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3864;
    RHS_Slice(_argtext_6932, 2, _3863);
    // SubProg format pc: 1981 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3864;
        concat_list[1] = _3862;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3864);
    _3864 = NOVALUE;
    DeRefDS(_3862);
    _3862 = NOVALUE;
    // SubProg format pc: 1987 op: ELSE (23)
    goto L42; // [1987] 2008
    // SubProg format pc: 1989 op: NOP1 (159)
L41: // addr: 1990 pc: 1989 sub: 6737 op: 159
    // SubProg format pc: 1990 op: STARTLINE (58)

    /** text.e:1768												argtext = repeat('0', width - length(argtext)) & argtext*/
    // SubProg format pc: 1992 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3866 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3866 = 1;
    }
    // SubProg format pc: 1995 op: MINUS (10)
    _3867 = _width_6754 - _3866;
    _3866 = NOVALUE;
    // SubProg format pc: 1999 op: REPEAT (32)
    _3868 = Repeat(48, _3867);
    _3867 = NOVALUE;
    // SubProg format pc: 2003 op: CONCAT (15)
    Concat((object_ptr)&_argtext_6932, _3868, _argtext_6932);
    DeRefDS(_3868);
    _3868 = NOVALUE;
    DeRef(_3868);
    _3868 = NOVALUE;
    // SubProg format pc: 2007 op: NOP1 (159)
L42: // addr: 2008 pc: 2007 sub: 6737 op: 159
    // SubProg format pc: 2008 op: NOP1 (159)
L40: // addr: 2009 pc: 2008 sub: 6737 op: 159
    // SubProg format pc: 2009 op: NOP1 (159)
L3F: // addr: 2010 pc: 2009 sub: 6737 op: 159
    // SubProg format pc: 2010 op: STARTLINE (58)

    /** text.e:1772									if arg_list[argn] > 0 then*/
    // SubProg format pc: 2012 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3870 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2016 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _3870, 0)){
        _3870 = NOVALUE;
        goto L43; // [2016] 2064
    }
    _3870 = NOVALUE;
    // SubProg format pc: 2020 op: STARTLINE (58)

    /** text.e:1773										if psign  then*/
    // SubProg format pc: 2022 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2024 op: IF (20)
    if (_psign_6748 == 0)
    {
        goto L27; // [2024] 2575
    }
    else{
    }
    // SubProg format pc: 2027 op: STARTLINE (58)

    /** text.e:1774											if zfill = 0 then*/
    // SubProg format pc: 2029 op: EQUALS_IFW_I (121)
    if (_zfill_6750 != 0)
    goto L44; // [2029] 2042
    // SubProg format pc: 2033 op: STARTLINE (58)

    /** text.e:1775												argtext = '+' & argtext*/
    // SubProg format pc: 2035 op: CONCAT (15)
    Prepend(&_argtext_6932, _argtext_6932, 43);
    // SubProg format pc: 2039 op: ELSE (23)
    goto L27; // [2039] 2575
    // SubProg format pc: 2041 op: NOP1 (159)
L44: // addr: 2042 pc: 2041 sub: 6737 op: 159
    // SubProg format pc: 2042 op: STARTLINE (58)

    /** text.e:1776											elsif argtext[1] = '0' then*/
    // SubProg format pc: 2044 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_6932);
    _3874 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 2048 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3874, 48)){
        _3874 = NOVALUE;
        goto L27; // [2048] 2575
    }
    _3874 = NOVALUE;
    // SubProg format pc: 2052 op: STARTLINE (58)

    /** text.e:1777												argtext[1] = '+'*/
    // SubProg format pc: 2054 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_6932);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_6932 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 43;
    DeRef(_1);
    // SubProg format pc: 2058 op: NOP1 (159)
    // SubProg format pc: 2059 op: NOP1 (159)
    // SubProg format pc: 2060 op: NOP1 (159)
    // SubProg format pc: 2061 op: ELSE (23)
    goto L27; // [2061] 2575
    // SubProg format pc: 2063 op: NOP1 (159)
L43: // addr: 2064 pc: 2063 sub: 6737 op: 159
    // SubProg format pc: 2064 op: STARTLINE (58)

    /** text.e:1780									elsif arg_list[argn] < 0 then*/
    // SubProg format pc: 2066 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3876 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2070 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _3876, 0)){
        _3876 = NOVALUE;
        goto L27; // [2070] 2575
    }
    _3876 = NOVALUE;
    // SubProg format pc: 2074 op: STARTLINE (58)

    /** text.e:1781										if msign then*/
    // SubProg format pc: 2076 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2078 op: IF (20)
    if (_msign_6749 == 0)
    {
        goto L27; // [2078] 2575
    }
    else{
    }
    // SubProg format pc: 2081 op: STARTLINE (58)

    /** text.e:1782											if zfill = 0 then*/
    // SubProg format pc: 2083 op: EQUALS_IFW_I (121)
    if (_zfill_6750 != 0)
    goto L45; // [2083] 2106
    // SubProg format pc: 2087 op: STARTLINE (58)

    /** text.e:1783												argtext = '(' & argtext[2..$] & ')'*/
    // SubProg format pc: 2089 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3879 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3879 = 1;
    }
    // SubProg format pc: 2092 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3880;
    RHS_Slice(_argtext_6932, 2, _3879);
    // SubProg format pc: 2097 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _3880;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3880);
    _3880 = NOVALUE;
    // SubProg format pc: 2103 op: ELSE (23)
    goto L27; // [2103] 2575
    // SubProg format pc: 2105 op: NOP1 (159)
L45: // addr: 2106 pc: 2105 sub: 6737 op: 159
    // SubProg format pc: 2106 op: STARTLINE (58)

    /** text.e:1785												if argtext[2] = '0' then*/
    // SubProg format pc: 2108 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_6932);
    _3882 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg format pc: 2112 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3882, 48)){
        _3882 = NOVALUE;
        goto L46; // [2112] 2135
    }
    _3882 = NOVALUE;
    // SubProg format pc: 2116 op: STARTLINE (58)

    /** text.e:1786													argtext = '(' & argtext[3..$] & ')'*/
    // SubProg format pc: 2118 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3884 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3884 = 1;
    }
    // SubProg format pc: 2121 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3885;
    RHS_Slice(_argtext_6932, 3, _3884);
    // SubProg format pc: 2126 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _3885;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3885);
    _3885 = NOVALUE;
    // SubProg format pc: 2132 op: ELSE (23)
    goto L27; // [2132] 2575
    // SubProg format pc: 2134 op: NOP1 (159)
L46: // addr: 2135 pc: 2134 sub: 6737 op: 159
    // SubProg format pc: 2135 op: STARTLINE (58)

    /** text.e:1788													argtext = argtext[2..$] & ')'*/
    // SubProg format pc: 2137 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3887 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3887 = 1;
    }
    // SubProg format pc: 2140 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3888;
    RHS_Slice(_argtext_6932, 2, _3887);
    // SubProg format pc: 2145 op: CONCAT (15)
    Append(&_argtext_6932, _3888, 41);
    DeRefDS(_3888);
    _3888 = NOVALUE;
    // SubProg format pc: 2149 op: NOP1 (159)
    // SubProg format pc: 2150 op: NOP1 (159)
    // SubProg format pc: 2151 op: NOP1 (159)
    // SubProg format pc: 2152 op: NOP1 (159)
    // SubProg format pc: 2153 op: NOP1 (159)
    // SubProg format pc: 2154 op: NOP1 (159)
    // SubProg format pc: 2155 op: NOP1 (159)
    // SubProg format pc: 2156 op: ELSE (23)
    goto L27; // [2156] 2575
    // SubProg format pc: 2158 op: NOP1 (159)
L39: // addr: 2159 pc: 2158 sub: 6737 op: 159
    // SubProg format pc: 2159 op: STARTLINE (58)

    /** text.e:1797							if alt != 0 and length(arg_list[argn]) = 2 then*/
    // SubProg format pc: 2161 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2163 op: NOTEQ (4)
    _3890 = (_alt_6753 != 0);
    // SubProg format pc: 2167 op: SC1_AND_IF (146)
    if (_3890 == 0) {
        goto L47; // [2167] 2486
    }
    // SubProg format pc: 2171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3892 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2175 op: LENGTH (42)
    if (IS_SEQUENCE(_3892)){
            _3893 = SEQ_PTR(_3892)->length;
    }
    else {
        _3893 = 1;
    }
    _3892 = NOVALUE;
    // SubProg format pc: 2178 op: EQUALS (3)
    _3894 = (_3893 == 2);
    _3893 = NOVALUE;
    // SubProg format pc: 2182 op: NOP1 (159)
    // SubProg format pc: 2183 op: IF (20)
    if (_3894 == 0)
    {
        DeRef(_3894);
        _3894 = NOVALUE;
        goto L47; // [2183] 2486
    }
    else{
        DeRef(_3894);
        _3894 = NOVALUE;
    }
    // SubProg format pc: 2186 op: STARTLINE (58)

    /** text.e:1798								object tempv*/
    // SubProg format pc: 2188 op: STARTLINE (58)

    /** text.e:1799								if atom(prevargv) then*/
    // SubProg format pc: 2190 op: IS_AN_ATOM (67)
    _3895 = IS_ATOM(_prevargv_6764);
    // SubProg format pc: 2193 op: IF (20)
    if (_3895 == 0)
    {
        _3895 = NOVALUE;
        goto L48; // [2193] 2229
    }
    else{
        _3895 = NOVALUE;
    }
    // SubProg format pc: 2196 op: STARTLINE (58)

    /** text.e:1800									if prevargv != 1 then*/
    // SubProg format pc: 2198 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _prevargv_6764, 1)){
        goto L49; // [2198] 2215
    }
    // SubProg format pc: 2202 op: STARTLINE (58)

    /** text.e:1801										tempv = arg_list[argn][1]*/
    // SubProg format pc: 2204 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3897 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2208 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_7164);
    _2 = (object)SEQ_PTR(_3897);
    _tempv_7164 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_7164);
    _3897 = NOVALUE;
    // SubProg format pc: 2212 op: ELSE (23)
    goto L4A; // [2212] 2263
    // SubProg format pc: 2214 op: NOP1 (159)
L49: // addr: 2215 pc: 2214 sub: 6737 op: 159
    // SubProg format pc: 2215 op: STARTLINE (58)

    /** text.e:1803										tempv = arg_list[argn][2]*/
    // SubProg format pc: 2217 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3899 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2221 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_7164);
    _2 = (object)SEQ_PTR(_3899);
    _tempv_7164 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_7164);
    _3899 = NOVALUE;
    // SubProg format pc: 2225 op: NOP1 (159)
    // SubProg format pc: 2226 op: ELSE (23)
    goto L4A; // [2226] 2263
    // SubProg format pc: 2228 op: NOP1 (159)
L48: // addr: 2229 pc: 2228 sub: 6737 op: 159
    // SubProg format pc: 2229 op: STARTLINE (58)

    /** text.e:1806									if length(prevargv) = 0 then*/
    // SubProg format pc: 2231 op: LENGTH (42)
    if (IS_SEQUENCE(_prevargv_6764)){
            _3901 = SEQ_PTR(_prevargv_6764)->length;
    }
    else {
        _3901 = 1;
    }
    // SubProg format pc: 2234 op: EQUALS_IFW_I (121)
    if (_3901 != 0)
    goto L4B; // [2234] 2251
    // SubProg format pc: 2238 op: STARTLINE (58)

    /** text.e:1807										tempv = arg_list[argn][1]*/
    // SubProg format pc: 2240 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3903 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2244 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_7164);
    _2 = (object)SEQ_PTR(_3903);
    _tempv_7164 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_7164);
    _3903 = NOVALUE;
    // SubProg format pc: 2248 op: ELSE (23)
    goto L4C; // [2248] 2262
    // SubProg format pc: 2250 op: NOP1 (159)
L4B: // addr: 2251 pc: 2250 sub: 6737 op: 159
    // SubProg format pc: 2251 op: STARTLINE (58)

    /** text.e:1809										tempv = arg_list[argn][2]*/
    // SubProg format pc: 2253 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3905 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2257 op: RHS_SUBS_CHECK (92)
    DeRef(_tempv_7164);
    _2 = (object)SEQ_PTR(_3905);
    _tempv_7164 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_7164);
    _3905 = NOVALUE;
    // SubProg format pc: 2261 op: NOP1 (159)
L4C: // addr: 2262 pc: 2261 sub: 6737 op: 159
    // SubProg format pc: 2262 op: NOP1 (159)
L4A: // addr: 2263 pc: 2262 sub: 6737 op: 159
    // SubProg format pc: 2263 op: STARTLINE (58)

    /** text.e:1813								if string(tempv) then*/
    // SubProg format pc: 2265 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2267 op: PROC (27)
    Ref(_tempv_7164);
    _3907 = _6string(_tempv_7164);
    // SubProg format pc: 2271 op: IF (20)
    if (_3907 == 0) {
        DeRef(_3907);
        _3907 = NOVALUE;
        goto L4D; // [2271] 2284
    }
    else {
        if (!IS_ATOM_INT(_3907) && DBL_PTR(_3907)->dbl == 0.0){
            DeRef(_3907);
            _3907 = NOVALUE;
            goto L4D; // [2271] 2284
        }
        DeRef(_3907);
        _3907 = NOVALUE;
    }
    DeRef(_3907);
    _3907 = NOVALUE;
    // SubProg format pc: 2274 op: STARTLINE (58)

    /** text.e:1814									argtext = tempv*/
    // SubProg format pc: 2276 op: ASSIGN (18)
    Ref(_tempv_7164);
    DeRef(_argtext_6932);
    _argtext_6932 = _tempv_7164;
    // SubProg format pc: 2279 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2281 op: ELSE (23)
    goto L4E; // [2281] 2481
    // SubProg format pc: 2283 op: NOP1 (159)
L4D: // addr: 2284 pc: 2283 sub: 6737 op: 159
    // SubProg format pc: 2284 op: STARTLINE (58)

    /** text.e:1815								elsif integer(tempv) then*/
    // SubProg format pc: 2286 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_tempv_7164))
    _3908 = 1;
    else if (IS_ATOM_DBL(_tempv_7164))
    _3908 = IS_ATOM_INT(DoubleToInt(_tempv_7164));
    else
    _3908 = 0;
    // SubProg format pc: 2289 op: IF (20)
    if (_3908 == 0)
    {
        _3908 = NOVALUE;
        goto L4F; // [2289] 2355
    }
    else{
        _3908 = NOVALUE;
    }
    // SubProg format pc: 2292 op: STARTLINE (58)

    /** text.e:1816									if istext then*/
    // SubProg format pc: 2294 op: IF (20)
    if (_istext_6763 == 0)
    {
        goto L50; // [2294] 2314
    }
    else{
    }
    // SubProg format pc: 2297 op: STARTLINE (58)

    /** text.e:1817										argtext = {and_bits(0xFFFF_FFFF, math:abs(tempv))}*/
    // SubProg format pc: 2299 op: PROC (27)
    Ref(_tempv_7164);
    _3909 = _13abs(_tempv_7164);
    // SubProg format pc: 2303 op: AND_BITS (56)
    _3910 = binary_op(AND_BITS, _464, _3909);
    DeRef(_3909);
    _3909 = NOVALUE;
    // SubProg format pc: 2307 op: RIGHT_BRACE_N (31)
    _0 = _argtext_6932;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _3910;
    _argtext_6932 = MAKE_SEQ(_1);
    DeRef(_0);
    _3910 = NOVALUE;
    // SubProg format pc: 2311 op: ELSE (23)
    goto L4E; // [2311] 2481
    // SubProg format pc: 2313 op: NOP1 (159)
L50: // addr: 2314 pc: 2313 sub: 6737 op: 159
    // SubProg format pc: 2314 op: STARTLINE (58)

    /** text.e:1819									elsif bwz != 0 and tempv = 0 then*/
    // SubProg format pc: 2316 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2318 op: NOTEQ (4)
    _3912 = (_bwz_6751 != 0);
    // SubProg format pc: 2322 op: SC1_AND_IF (146)
    if (_3912 == 0) {
        goto L51; // [2322] 2345
    }
    // SubProg format pc: 2326 op: EQUALS (3)
    if (IS_ATOM_INT(_tempv_7164)) {
        _3914 = (_tempv_7164 == 0);
    }
    else {
        _3914 = binary_op(EQUALS, _tempv_7164, 0);
    }
    // SubProg format pc: 2330 op: NOP1 (159)
    // SubProg format pc: 2331 op: IF (20)
    if (_3914 == 0) {
        DeRef(_3914);
        _3914 = NOVALUE;
        goto L51; // [2331] 2345
    }
    else {
        if (!IS_ATOM_INT(_3914) && DBL_PTR(_3914)->dbl == 0.0){
            DeRef(_3914);
            _3914 = NOVALUE;
            goto L51; // [2331] 2345
        }
        DeRef(_3914);
        _3914 = NOVALUE;
    }
    DeRef(_3914);
    _3914 = NOVALUE;
    // SubProg format pc: 2334 op: STARTLINE (58)

    /** text.e:1820										argtext = repeat(' ', width)*/
    // SubProg format pc: 2336 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2338 op: REPEAT (32)
    DeRef(_argtext_6932);
    _argtext_6932 = Repeat(32, _width_6754);
    // SubProg format pc: 2342 op: ELSE (23)
    goto L4E; // [2342] 2481
    // SubProg format pc: 2344 op: NOP1 (159)
L51: // addr: 2345 pc: 2344 sub: 6737 op: 159
    // SubProg format pc: 2345 op: STARTLINE (58)

    /** text.e:1822										argtext = sprintf("%d", tempv)*/
    // SubProg format pc: 2347 op: SPRINTF (53)
    DeRef(_argtext_6932);
    _argtext_6932 = EPrintf(-9999999, _1511, _tempv_7164);
    // SubProg format pc: 2351 op: NOP1 (159)
    // SubProg format pc: 2352 op: ELSE (23)
    goto L4E; // [2352] 2481
    // SubProg format pc: 2354 op: NOP1 (159)
L4F: // addr: 2355 pc: 2354 sub: 6737 op: 159
    // SubProg format pc: 2355 op: STARTLINE (58)

    /** text.e:1825								elsif atom(tempv) then*/
    // SubProg format pc: 2357 op: IS_AN_ATOM (67)
    _3917 = IS_ATOM(_tempv_7164);
    // SubProg format pc: 2360 op: IF (20)
    if (_3917 == 0)
    {
        _3917 = NOVALUE;
        goto L52; // [2360] 2437
    }
    else{
        _3917 = NOVALUE;
    }
    // SubProg format pc: 2363 op: STARTLINE (58)

    /** text.e:1826									if istext then*/
    // SubProg format pc: 2365 op: IF (20)
    if (_istext_6763 == 0)
    {
        goto L53; // [2365] 2388
    }
    else{
    }
    // SubProg format pc: 2368 op: STARTLINE (58)

    /** text.e:1827										argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(tempv)))}*/
    // SubProg format pc: 2370 op: FLOOR (83)
    if (IS_ATOM_INT(_tempv_7164))
    _3918 = e_floor(_tempv_7164);
    else
    _3918 = unary_op(FLOOR, _tempv_7164);
    // SubProg format pc: 2373 op: PROC (27)
    _3919 = _13abs(_3918);
    _3918 = NOVALUE;
    // SubProg format pc: 2377 op: AND_BITS (56)
    _3920 = binary_op(AND_BITS, _464, _3919);
    DeRef(_3919);
    _3919 = NOVALUE;
    // SubProg format pc: 2381 op: RIGHT_BRACE_N (31)
    _0 = _argtext_6932;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _3920;
    _argtext_6932 = MAKE_SEQ(_1);
    DeRef(_0);
    _3920 = NOVALUE;
    // SubProg format pc: 2385 op: ELSE (23)
    goto L4E; // [2385] 2481
    // SubProg format pc: 2387 op: NOP1 (159)
L53: // addr: 2388 pc: 2387 sub: 6737 op: 159
    // SubProg format pc: 2388 op: STARTLINE (58)

    /** text.e:1828									elsif bwz != 0 and tempv = 0 then*/
    // SubProg format pc: 2390 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2392 op: NOTEQ (4)
    _3922 = (_bwz_6751 != 0);
    // SubProg format pc: 2396 op: SC1_AND_IF (146)
    if (_3922 == 0) {
        goto L54; // [2396] 2419
    }
    // SubProg format pc: 2400 op: EQUALS (3)
    if (IS_ATOM_INT(_tempv_7164)) {
        _3924 = (_tempv_7164 == 0);
    }
    else {
        _3924 = binary_op(EQUALS, _tempv_7164, 0);
    }
    // SubProg format pc: 2404 op: NOP1 (159)
    // SubProg format pc: 2405 op: IF (20)
    if (_3924 == 0) {
        DeRef(_3924);
        _3924 = NOVALUE;
        goto L54; // [2405] 2419
    }
    else {
        if (!IS_ATOM_INT(_3924) && DBL_PTR(_3924)->dbl == 0.0){
            DeRef(_3924);
            _3924 = NOVALUE;
            goto L54; // [2405] 2419
        }
        DeRef(_3924);
        _3924 = NOVALUE;
    }
    DeRef(_3924);
    _3924 = NOVALUE;
    // SubProg format pc: 2408 op: STARTLINE (58)

    /** text.e:1829										argtext = repeat(' ', width)*/
    // SubProg format pc: 2410 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2412 op: REPEAT (32)
    DeRef(_argtext_6932);
    _argtext_6932 = Repeat(32, _width_6754);
    // SubProg format pc: 2416 op: ELSE (23)
    goto L4E; // [2416] 2481
    // SubProg format pc: 2418 op: NOP1 (159)
L54: // addr: 2419 pc: 2418 sub: 6737 op: 159
    // SubProg format pc: 2419 op: STARTLINE (58)

    /** text.e:1831										argtext = trim(sprintf("%15.15g", tempv))*/
    // SubProg format pc: 2421 op: SPRINTF (53)
    _3926 = EPrintf(-9999999, _3844, _tempv_7164);
    // SubProg format pc: 2425 op: PROC (27)
    RefDS(_3069);
    _0 = _argtext_6932;
    _argtext_6932 = _20trim(_3926, _3069, 0);
    DeRef(_0);
    _3926 = NOVALUE;
    // SubProg format pc: 2431 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2433 op: NOP1 (159)
    // SubProg format pc: 2434 op: ELSE (23)
    goto L4E; // [2434] 2481
    // SubProg format pc: 2436 op: NOP1 (159)
L52: // addr: 2437 pc: 2436 sub: 6737 op: 159
    // SubProg format pc: 2437 op: STARTLINE (58)

    /** text.e:1834									argtext = pretty:pretty_sprint( tempv,*/
    // SubProg format pc: 2439 op: RIGHT_BRACE_N (31)
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1511);
    ((intptr_t*)_2)[5] = _1511;
    RefDS(_3928);
    ((intptr_t*)_2)[6] = _3928;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _3929 = MAKE_SEQ(_1);
    // SubProg format pc: 2452 op: ASSIGN (18)
    DeRef(_options_inlined_pretty_sprint_at_2453_7218);
    _options_inlined_pretty_sprint_at_2453_7218 = _3929;
    _3929 = NOVALUE;
    // SubProg format pc: 2455 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2457 op: STARTLINE (58)

    /** pretty.e:364		pretty_printing = 0*/
    // SubProg format pc: 2459 op: ASSIGN_I (113)
    _23pretty_printing_3340 = 0;
    // SubProg format pc: 2462 op: STARTLINE (58)

    /** pretty.e:365		pretty( x, options )*/
    // SubProg format pc: 2464 op: PROC (27)
    Ref(_tempv_7164);
    RefDS(_options_inlined_pretty_sprint_at_2453_7218);
    _23pretty(_tempv_7164, _options_inlined_pretty_sprint_at_2453_7218);
    // SubProg format pc: 2468 op: STARTLINE (58)

    /** pretty.e:366		return pretty_line*/
    // SubProg format pc: 2470 op: GLOBAL_INIT_CHECK (109)
    // SubProg format pc: 2472 op: ASSIGN (18)
    RefDS(_23pretty_line_3343);
    DeRef(_argtext_6932);
    _argtext_6932 = _23pretty_line_3343;
    // SubProg format pc: 2475 op: NOP1 (159)
    // SubProg format pc: 2476 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-pretty_sprint from format @ 2453

// block var options_inlined_pretty_sprint_at_2453_7218
    DeRef(_options_inlined_pretty_sprint_at_2453_7218);
    _options_inlined_pretty_sprint_at_2453_7218 = NOVALUE;
    // SubProg format pc: 2478 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2480 op: NOP1 (159)
L4E: // addr: 2481 pc: 2480 sub: 6737 op: 159
    // SubProg format pc: 2481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tempv_7164
    DeRef(_tempv_7164);
    _tempv_7164 = NOVALUE;
    // SubProg format pc: 2483 op: ELSE (23)
    goto L55; // [2483] 2562
    // SubProg format pc: 2485 op: NOP1 (159)
L47: // addr: 2486 pc: 2485 sub: 6737 op: 159
    // SubProg format pc: 2486 op: STARTLINE (58)

    /** text.e:1839								argtext = pretty:pretty_sprint( arg_list[argn],*/
    // SubProg format pc: 2488 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _3930 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    // SubProg format pc: 2492 op: RIGHT_BRACE_N (31)
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1511);
    ((intptr_t*)_2)[5] = _1511;
    RefDS(_3928);
    ((intptr_t*)_2)[6] = _3928;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _3931 = MAKE_SEQ(_1);
    // SubProg format pc: 2505 op: ASSIGN (18)
    Ref(_3930);
    DeRef(_x_inlined_pretty_sprint_at_2506_7224);
    _x_inlined_pretty_sprint_at_2506_7224 = _3930;
    _3930 = NOVALUE;
    // SubProg format pc: 2508 op: ASSIGN (18)
    DeRef(_options_inlined_pretty_sprint_at_2509_7225);
    _options_inlined_pretty_sprint_at_2509_7225 = _3931;
    _3931 = NOVALUE;
    // SubProg format pc: 2511 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2513 op: STARTLINE (58)

    /** pretty.e:364		pretty_printing = 0*/
    // SubProg format pc: 2515 op: ASSIGN_I (113)
    _23pretty_printing_3340 = 0;
    // SubProg format pc: 2518 op: STARTLINE (58)

    /** pretty.e:365		pretty( x, options )*/
    // SubProg format pc: 2520 op: PROC (27)
    Ref(_x_inlined_pretty_sprint_at_2506_7224);
    RefDS(_options_inlined_pretty_sprint_at_2509_7225);
    _23pretty(_x_inlined_pretty_sprint_at_2506_7224, _options_inlined_pretty_sprint_at_2509_7225);
    // SubProg format pc: 2524 op: STARTLINE (58)

    /** pretty.e:366		return pretty_line*/
    // SubProg format pc: 2526 op: GLOBAL_INIT_CHECK (109)
    // SubProg format pc: 2528 op: ASSIGN (18)
    RefDS(_23pretty_line_3343);
    DeRef(_argtext_6932);
    _argtext_6932 = _23pretty_line_3343;
    // SubProg format pc: 2531 op: NOP1 (159)
    // SubProg format pc: 2532 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-pretty_sprint from format @ 2506

// block var x_inlined_pretty_sprint_at_2506_7224
    DeRef(_x_inlined_pretty_sprint_at_2506_7224);
    _x_inlined_pretty_sprint_at_2506_7224 = NOVALUE;

// block var options_inlined_pretty_sprint_at_2509_7225
    DeRef(_options_inlined_pretty_sprint_at_2509_7225);
    _options_inlined_pretty_sprint_at_2509_7225 = NOVALUE;
    // SubProg format pc: 2534 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 2536 op: NOP1 (159)
    // SubProg format pc: 2537 op: STARTLINE (58)

    /** text.e:1844							while ep != 0 with entry do*/
    // SubProg format pc: 2539 op: ELSE (23)
    goto L55; // [2539] 2562
    // SubProg format pc: 2541 op: NOPWHILE (158)
L56: // addr: 2542 pc: 2541 sub: 6737 op: 158
    // SubProg format pc: 2542 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2544 op: NOTEQ_IFW_I (122)
    if (_ep_6769 == 0)
    goto L57; // [2544] 2574
    // SubProg format pc: 2548 op: STARTLINE (58)

    /** text.e:1845								argtext = remove(argtext, ep+2)*/
    // SubProg format pc: 2550 op: PLUS (11)
    _3933 = _ep_6769 + 2;
    if ((object)((uintptr_t)_3933 + (uintptr_t)HIGH_BITS) >= 0){
        _3933 = NewDouble((eudouble)_3933);
    }
    // SubProg format pc: 2554 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_6932);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_3933)) ? _3933 : (object)(DBL_PTR(_3933)->dbl);
        int stop = (IS_ATOM_INT(_3933)) ? _3933 : (object)(DBL_PTR(_3933)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_6932), start, &_argtext_6932 );
            }
            else Tail(SEQ_PTR(_argtext_6932), stop+1, &_argtext_6932);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_6932), start, &_argtext_6932);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_6932 = Remove_elements(start, stop, (SEQ_PTR(_argtext_6932)->ref == 1));
        }
    }
    DeRef(_3933);
    _3933 = NOVALUE;
    _3933 = NOVALUE;
    // SubProg format pc: 2559 op: STARTLINE (58)

    /** text.e:1846							entry*/
    // SubProg format pc: 2561 op: NOP1 (159)
L55: // addr: 2562 pc: 2561 sub: 6737 op: 159
    // SubProg format pc: 2562 op: STARTLINE (58)

    /** text.e:1847								ep = match("e+0", argtext)*/
    // SubProg format pc: 2564 op: MATCH_FROM (177)
    _ep_6769 = e_match_from(_3851, _argtext_6932, 1);
    // SubProg format pc: 2569 op: STARTLINE (58)

    /** text.e:1848							end while*/
    // SubProg format pc: 2571 op: ENDWHILE (22)
    goto L56; // [2571] 2542
    // SubProg format pc: 2573 op: NOP1 (159)
L57: // addr: 2574 pc: 2573 sub: 6737 op: 159
    // SubProg format pc: 2574 op: NOP1 (159)
L27: // addr: 2575 pc: 2574 sub: 6737 op: 159
    // SubProg format pc: 2575 op: STARTLINE (58)

    /** text.e:1850		    			currargv = arg_list[argn]*/
    // SubProg format pc: 2577 op: RHS_SUBS_CHECK (92)
    DeRef(_currargv_6765);
    _2 = (object)SEQ_PTR(_arg_list_6740);
    _currargv_6765 = (object)*(((s1_ptr)_2)->base + _argn_6757);
    Ref(_currargv_6765);
    // SubProg format pc: 2581 op: NOP1 (159)
L24: // addr: 2582 pc: 2581 sub: 6737 op: 159
    // SubProg format pc: 2582 op: STARTLINE (58)

    /** text.e:1854	    			if length(argtext) > 0 then*/
    // SubProg format pc: 2584 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3937 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3937 = 1;
    }
    // SubProg format pc: 2587 op: GREATER_IFW_I (124)
    if (_3937 <= 0)
    goto L58; // [2587] 3357
    // SubProg format pc: 2591 op: STARTLINE (58)

    /** text.e:1855	    				switch cap do*/
    // SubProg format pc: 2593 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2595 op: SWITCH_I (193)
    _0 = _cap_6746;
    switch ( _0 ){ 
        // SubProg format pc: 2600 op: STARTLINE (58)

        /** text.e:1856	    					case 'u' then*/
        // SubProg format pc: 2602 op: CASE (186)
        case 117:
        // SubProg format pc: 2604 op: STARTLINE (58)

        /** text.e:1857	    						argtext = upper(argtext)*/
        // SubProg format pc: 2606 op: PROC (27)
        RefDS(_argtext_6932);
        _0 = _argtext_6932;
        _argtext_6932 = _20upper(_argtext_6932);
        DeRefDS(_0);
        // SubProg format pc: 2610 op: SEQUENCE_CHECK (97)
        // SubProg format pc: 2612 op: ELSE (23)
        goto L59; // [2612] 2678
        // SubProg format pc: 2614 op: STARTLINE (58)

        /** text.e:1858	    					case 'l' then*/
        // SubProg format pc: 2616 op: CASE (186)
        case 108:
        // SubProg format pc: 2618 op: STARTLINE (58)

        /** text.e:1859	    						argtext = lower(argtext)*/
        // SubProg format pc: 2620 op: PROC (27)
        RefDS(_argtext_6932);
        _0 = _argtext_6932;
        _argtext_6932 = _20lower(_argtext_6932);
        DeRefDS(_0);
        // SubProg format pc: 2624 op: SEQUENCE_CHECK (97)
        // SubProg format pc: 2626 op: ELSE (23)
        goto L59; // [2626] 2678
        // SubProg format pc: 2628 op: STARTLINE (58)

        /** text.e:1860	    					case 'w' then*/
        // SubProg format pc: 2630 op: CASE (186)
        case 119:
        // SubProg format pc: 2632 op: STARTLINE (58)

        /** text.e:1861	    						argtext = proper(argtext)*/
        // SubProg format pc: 2634 op: PROC (27)
        RefDS(_argtext_6932);
        _0 = _argtext_6932;
        _argtext_6932 = _20proper(_argtext_6932);
        DeRefDS(_0);
        // SubProg format pc: 2638 op: SEQUENCE_CHECK (97)
        // SubProg format pc: 2640 op: ELSE (23)
        goto L59; // [2640] 2678
        // SubProg format pc: 2642 op: STARTLINE (58)

        /** text.e:1862	    					case 0 then*/
        // SubProg format pc: 2644 op: CASE (186)
        case 0:
        // SubProg format pc: 2646 op: STARTLINE (58)

        /** text.e:1864								cap = cap*/
        // SubProg format pc: 2648 op: ASSIGN_I (113)
        _cap_6746 = _cap_6746;
        // SubProg format pc: 2651 op: ELSE (23)
        goto L59; // [2651] 2678
        // SubProg format pc: 2653 op: STARTLINE (58)

        /** text.e:1866	    					case else*/
        // SubProg format pc: 2655 op: CASE (186)
        default:
        // SubProg format pc: 2657 op: STARTLINE (58)

        /** text.e:1867	    						error:crash("logic error: 'cap' mode in format.")*/
        // SubProg format pc: 2659 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg format pc: 2661 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_2660_7248);
        _msg_inlined_crash_at_2660_7248 = EPrintf(-9999999, _3944, _5);
        // SubProg format pc: 2665 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg format pc: 2667 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_2660_7248);
        // SubProg format pc: 2670 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg format pc: 2672 op: ELSE (23)
        goto L5A; // [2672] 2675
        // SubProg format pc: 2674 op: NOP1 (159)
L5A: // addr: 2675 pc: 2674 sub: 6737 op: 159
        // SubProg format pc: 2675 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from format @ 2660

// block var msg_inlined_crash_at_2660_7248
        DeRefi(_msg_inlined_crash_at_2660_7248);
        _msg_inlined_crash_at_2660_7248 = NOVALUE;
        // SubProg format pc: 2677 op: NOPSWITCH (187)
    ;}L59: // addr: 2678 pc: 2677 sub: 6737 op: 187
    // SubProg format pc: 2678 op: STARTLINE (58)

    /** text.e:1871						if atom(currargv) then*/
    // SubProg format pc: 2680 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2682 op: IS_AN_ATOM (67)
    _3945 = IS_ATOM(_currargv_6765);
    // SubProg format pc: 2685 op: IF (20)
    if (_3945 == 0)
    {
        _3945 = NOVALUE;
        goto L5B; // [2685] 2824
    }
    else{
        _3945 = NOVALUE;
    }
    // SubProg format pc: 2688 op: STARTLINE (58)

    /** text.e:1872							if find('e', argtext) = 0 then*/
    // SubProg format pc: 2690 op: FIND_FROM (176)
    _3946 = find_from(101, _argtext_6932, 1);
    // SubProg format pc: 2695 op: EQUALS_IFW_I (121)
    if (_3946 != 0)
    goto L5C; // [2695] 2823
    // SubProg format pc: 2699 op: STARTLINE (58)

    /** text.e:1874								if decs != -1 then*/
    // SubProg format pc: 2701 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2703 op: NOTEQ_IFW_I (122)
    if (_decs_6755 == -1)
    goto L5D; // [2703] 2822
    // SubProg format pc: 2707 op: STARTLINE (58)

    /** text.e:1875									pos = find('.', argtext)*/
    // SubProg format pc: 2709 op: FIND_FROM (176)
    _pos_6756 = find_from(46, _argtext_6932, 1);
    // SubProg format pc: 2714 op: STARTLINE (58)

    /** text.e:1876									if pos then*/
    // SubProg format pc: 2716 op: IF (20)
    if (_pos_6756 == 0)
    {
        goto L5E; // [2716] 2801
    }
    else{
    }
    // SubProg format pc: 2719 op: STARTLINE (58)

    /** text.e:1877										if decs = 0 then*/
    // SubProg format pc: 2721 op: EQUALS_IFW_I (121)
    if (_decs_6755 != 0)
    goto L5F; // [2721] 2739
    // SubProg format pc: 2725 op: STARTLINE (58)

    /** text.e:1878											argtext = argtext [1 .. pos-1 ]*/
    // SubProg format pc: 2727 op: MINUS (10)
    _3951 = _pos_6756 - 1;
    // SubProg format pc: 2731 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_argtext_6932, 1, _3951);
    // SubProg format pc: 2736 op: ELSE (23)
    goto L60; // [2736] 2821
    // SubProg format pc: 2738 op: NOP1 (159)
L5F: // addr: 2739 pc: 2738 sub: 6737 op: 159
    // SubProg format pc: 2739 op: STARTLINE (58)

    /** text.e:1880											pos = length(argtext) - pos*/
    // SubProg format pc: 2741 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3953 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3953 = 1;
    }
    // SubProg format pc: 2744 op: MINUS_I (116)
    _pos_6756 = _3953 - _pos_6756;
    _3953 = NOVALUE;
    // SubProg format pc: 2748 op: STARTLINE (58)

    /** text.e:1881											if pos > decs then*/
    // SubProg format pc: 2750 op: GREATER_IFW_I (124)
    if (_pos_6756 <= _decs_6755)
    goto L61; // [2750] 2775
    // SubProg format pc: 2754 op: STARTLINE (58)

    /** text.e:1882												argtext = argtext[ 1 .. $ - pos + decs ]*/
    // SubProg format pc: 2756 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3956 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3956 = 1;
    }
    // SubProg format pc: 2759 op: MINUS (10)
    _3957 = _3956 - _pos_6756;
    if ((object)((uintptr_t)_3957 +(uintptr_t) HIGH_BITS) >= 0){
        _3957 = NewDouble((eudouble)_3957);
    }
    _3956 = NOVALUE;
    // SubProg format pc: 2763 op: PLUS (11)
    if (IS_ATOM_INT(_3957)) {
        _3958 = _3957 + _decs_6755;
    }
    else {
        _3958 = NewDouble(DBL_PTR(_3957)->dbl + (eudouble)_decs_6755);
    }
    DeRef(_3957);
    _3957 = NOVALUE;
    // SubProg format pc: 2767 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_argtext_6932, 1, _3958);
    // SubProg format pc: 2772 op: ELSE (23)
    goto L60; // [2772] 2821
    // SubProg format pc: 2774 op: NOP1 (159)
L61: // addr: 2775 pc: 2774 sub: 6737 op: 159
    // SubProg format pc: 2775 op: STARTLINE (58)

    /** text.e:1883											elsif pos < decs then*/
    // SubProg format pc: 2777 op: LESS_IFW_I (119)
    if (_pos_6756 >= _decs_6755)
    goto L60; // [2777] 2821
    // SubProg format pc: 2781 op: STARTLINE (58)

    /** text.e:1884												argtext = argtext & repeat('0', decs - pos)*/
    // SubProg format pc: 2783 op: MINUS (10)
    _3961 = _decs_6755 - _pos_6756;
    // SubProg format pc: 2787 op: REPEAT (32)
    _3962 = Repeat(48, _3961);
    _3961 = NOVALUE;
    // SubProg format pc: 2791 op: CONCAT (15)
    Concat((object_ptr)&_argtext_6932, _argtext_6932, _3962);
    DeRefDS(_3962);
    _3962 = NOVALUE;
    // SubProg format pc: 2795 op: NOP1 (159)
    // SubProg format pc: 2796 op: NOP1 (159)
    // SubProg format pc: 2797 op: NOP1 (159)
    // SubProg format pc: 2798 op: ELSE (23)
    goto L60; // [2798] 2821
    // SubProg format pc: 2800 op: NOP1 (159)
L5E: // addr: 2801 pc: 2800 sub: 6737 op: 159
    // SubProg format pc: 2801 op: STARTLINE (58)

    /** text.e:1887									elsif decs > 0 then*/
    // SubProg format pc: 2803 op: GREATER_IFW_I (124)
    if (_decs_6755 <= 0)
    goto L62; // [2803] 2820
    // SubProg format pc: 2807 op: STARTLINE (58)

    /** text.e:1888										argtext = argtext & '.' & repeat('0', decs)*/
    // SubProg format pc: 2809 op: REPEAT (32)
    _3965 = Repeat(48, _decs_6755);
    // SubProg format pc: 2813 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3965;
        concat_list[1] = 46;
        concat_list[2] = _argtext_6932;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3965);
    _3965 = NOVALUE;
    // SubProg format pc: 2819 op: NOP1 (159)
L62: // addr: 2820 pc: 2819 sub: 6737 op: 159
    // SubProg format pc: 2820 op: NOP1 (159)
L60: // addr: 2821 pc: 2820 sub: 6737 op: 159
    // SubProg format pc: 2821 op: NOP1 (159)
L5D: // addr: 2822 pc: 2821 sub: 6737 op: 159
    // SubProg format pc: 2822 op: NOP1 (159)
L5C: // addr: 2823 pc: 2822 sub: 6737 op: 159
    // SubProg format pc: 2823 op: NOP1 (159)
L5B: // addr: 2824 pc: 2823 sub: 6737 op: 159
    // SubProg format pc: 2824 op: STARTLINE (58)

    /** text.e:1895	    				if align = 0 then*/
    // SubProg format pc: 2826 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2828 op: EQUALS_IFW_I (121)
    if (_align_6747 != 0)
    goto L63; // [2828] 2855
    // SubProg format pc: 2832 op: STARTLINE (58)

    /** text.e:1896	    					if atom(currargv) then*/
    // SubProg format pc: 2834 op: IS_AN_ATOM (67)
    _3968 = IS_ATOM(_currargv_6765);
    // SubProg format pc: 2837 op: IF (20)
    if (_3968 == 0)
    {
        _3968 = NOVALUE;
        goto L64; // [2837] 2848
    }
    else{
        _3968 = NOVALUE;
    }
    // SubProg format pc: 2840 op: STARTLINE (58)

    /** text.e:1897	    						align = '>'*/
    // SubProg format pc: 2842 op: ASSIGN_I (113)
    _align_6747 = 62;
    // SubProg format pc: 2845 op: ELSE (23)
    goto L65; // [2845] 2854
    // SubProg format pc: 2847 op: NOP1 (159)
L64: // addr: 2848 pc: 2847 sub: 6737 op: 159
    // SubProg format pc: 2848 op: STARTLINE (58)

    /** text.e:1899	    						align = '<'*/
    // SubProg format pc: 2850 op: ASSIGN_I (113)
    _align_6747 = 60;
    // SubProg format pc: 2853 op: NOP1 (159)
L65: // addr: 2854 pc: 2853 sub: 6737 op: 159
    // SubProg format pc: 2854 op: NOP1 (159)
L63: // addr: 2855 pc: 2854 sub: 6737 op: 159
    // SubProg format pc: 2855 op: STARTLINE (58)

    /** text.e:1903	    				if atom(currargv) then*/
    // SubProg format pc: 2857 op: IS_AN_ATOM (67)
    _3969 = IS_ATOM(_currargv_6765);
    // SubProg format pc: 2860 op: IF (20)
    if (_3969 == 0)
    {
        _3969 = NOVALUE;
        goto L66; // [2860] 3061
    }
    else{
        _3969 = NOVALUE;
    }
    // SubProg format pc: 2863 op: STARTLINE (58)

    /** text.e:1904		    				if tsep != 0 and zfill = 0 then*/
    // SubProg format pc: 2865 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2867 op: NOTEQ (4)
    _3970 = (_tsep_6762 != 0);
    // SubProg format pc: 2871 op: SC1_AND_IF (146)
    if (_3970 == 0) {
        goto L67; // [2871] 3058
    }
    // SubProg format pc: 2875 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2877 op: EQUALS (3)
    _3972 = (_zfill_6750 == 0);
    // SubProg format pc: 2881 op: NOP1 (159)
    // SubProg format pc: 2882 op: IF (20)
    if (_3972 == 0)
    {
        DeRef(_3972);
        _3972 = NOVALUE;
        goto L67; // [2882] 3058
    }
    else{
        DeRef(_3972);
        _3972 = NOVALUE;
    }
    // SubProg format pc: 2885 op: STARTLINE (58)

    /** text.e:1905		    					integer dpos*/
    // SubProg format pc: 2887 op: STARTLINE (58)

    /** text.e:1906		    					integer dist*/
    // SubProg format pc: 2889 op: STARTLINE (58)

    /** text.e:1907		    					integer bracketed*/
    // SubProg format pc: 2891 op: STARTLINE (58)

    /** text.e:1909		    					if binout or hexout then*/
    // SubProg format pc: 2893 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2895 op: SC1_OR_IF (147)
    if (_binout_6761 != 0) {
        goto L68; // [2895] 2904
    }
    // SubProg format pc: 2899 op: NOP1 (159)
    // SubProg format pc: 2900 op: IF (20)
    if (_hexout_6760 == 0)
    {
        goto L69; // [2900] 2912
    }
    else{
    }
    // SubProg format pc: 2903 op: NOP1 (159)
L68: // addr: 2904 pc: 2903 sub: 6737 op: 159
    // SubProg format pc: 2904 op: STARTLINE (58)

    /** text.e:1910		    						dist = 4*/
    // SubProg format pc: 2906 op: ASSIGN_I (113)
    _dist_7292 = 4;
    // SubProg format pc: 2909 op: ELSE (23)
    goto L6A; // [2909] 2918
    // SubProg format pc: 2911 op: NOP1 (159)
L69: // addr: 2912 pc: 2911 sub: 6737 op: 159
    // SubProg format pc: 2912 op: STARTLINE (58)

    /** text.e:1912		    						dist = 3*/
    // SubProg format pc: 2914 op: ASSIGN_I (113)
    _dist_7292 = 3;
    // SubProg format pc: 2917 op: NOP1 (159)
L6A: // addr: 2918 pc: 2917 sub: 6737 op: 159
    // SubProg format pc: 2918 op: STARTLINE (58)

    /** text.e:1914		    					bracketed = (argtext[1] = '(')*/
    // SubProg format pc: 2920 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_argtext_6932);
    _3974 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg format pc: 2924 op: EQUALS (3)
    if (IS_ATOM_INT(_3974)) {
        _bracketed_7293 = (_3974 == 40);
    }
    else {
        _bracketed_7293 = binary_op(EQUALS, _3974, 40);
    }
    _3974 = NOVALUE;
    // SubProg format pc: 2928 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_bracketed_7293)) {
        _1 = (object)(DBL_PTR(_bracketed_7293)->dbl);
        DeRefDS(_bracketed_7293);
        _bracketed_7293 = _1;
    }
    // SubProg format pc: 2930 op: STARTLINE (58)

    /** text.e:1915		    					if bracketed then*/
    // SubProg format pc: 2932 op: IF (20)
    if (_bracketed_7293 == 0)
    {
        goto L6B; // [2932] 2950
    }
    else{
    }
    // SubProg format pc: 2935 op: STARTLINE (58)

    /** text.e:1916		    						argtext = argtext[2 .. $-1]*/
    // SubProg format pc: 2937 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3976 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3976 = 1;
    }
    // SubProg format pc: 2940 op: MINUS (10)
    _3977 = _3976 - 1;
    _3976 = NOVALUE;
    // SubProg format pc: 2944 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_argtext_6932, 2, _3977);
    // SubProg format pc: 2949 op: NOP1 (159)
L6B: // addr: 2950 pc: 2949 sub: 6737 op: 159
    // SubProg format pc: 2950 op: STARTLINE (58)

    /** text.e:1918		    					dpos = find('.', argtext)*/
    // SubProg format pc: 2952 op: FIND_FROM (176)
    _dpos_7291 = find_from(46, _argtext_6932, 1);
    // SubProg format pc: 2957 op: STARTLINE (58)

    /** text.e:1919		    					if dpos = 0 then*/
    // SubProg format pc: 2959 op: EQUALS_IFW_I (121)
    if (_dpos_7291 != 0)
    goto L6C; // [2959] 2975
    // SubProg format pc: 2963 op: STARTLINE (58)

    /** text.e:1920		    						dpos = length(argtext) + 1*/
    // SubProg format pc: 2965 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3981 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3981 = 1;
    }
    // SubProg format pc: 2968 op: PLUS1_I (117)
    _dpos_7291 = _3981 + 1;
    _3981 = NOVALUE;
    // SubProg format pc: 2972 op: ELSE (23)
    goto L6D; // [2972] 2989
    // SubProg format pc: 2974 op: NOP1 (159)
L6C: // addr: 2975 pc: 2974 sub: 6737 op: 159
    // SubProg format pc: 2975 op: STARTLINE (58)

    /** text.e:1922		    						if tsep = '.' then*/
    // SubProg format pc: 2977 op: EQUALS_IFW_I (121)
    if (_tsep_6762 != 46)
    goto L6E; // [2977] 2988
    // SubProg format pc: 2981 op: STARTLINE (58)

    /** text.e:1923		    							argtext[dpos] = ','*/
    // SubProg format pc: 2983 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_argtext_6932);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_6932 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _dpos_7291);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 44;
    DeRef(_1);
    // SubProg format pc: 2987 op: NOP1 (159)
L6E: // addr: 2988 pc: 2987 sub: 6737 op: 159
    // SubProg format pc: 2988 op: NOP1 (159)
L6D: // addr: 2989 pc: 2988 sub: 6737 op: 159
    // SubProg format pc: 2989 op: STARTLINE (58)

    /** text.e:1926		    					while dpos > dist do*/
    // SubProg format pc: 2991 op: NOP2 (110)
    // SubProg format pc: 2993 op: NOPWHILE (158)
L6F: // addr: 2994 pc: 2993 sub: 6737 op: 158
    // SubProg format pc: 2994 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 2996 op: GREATER_IFW_I (124)
    if (_dpos_7291 <= _dist_7292)
    goto L70; // [2996] 3043
    // SubProg format pc: 3000 op: STARTLINE (58)

    /** text.e:1927		    						dpos -= dist*/
    // SubProg format pc: 3002 op: MINUS_I (116)
    _dpos_7291 = _dpos_7291 - _dist_7292;
    // SubProg format pc: 3006 op: STARTLINE (58)

    /** text.e:1928		    						if dpos > 1 then*/
    // SubProg format pc: 3008 op: GREATER_IFW_I (124)
    if (_dpos_7291 <= 1)
    goto L6F; // [3008] 2994
    // SubProg format pc: 3012 op: STARTLINE (58)

    /** text.e:1929		    							argtext = argtext[1.. dpos - 1] & tsep & argtext[dpos .. $]*/
    // SubProg format pc: 3014 op: MINUS (10)
    _3987 = _dpos_7291 - 1;
    // SubProg format pc: 3018 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3988;
    RHS_Slice(_argtext_6932, 1, _3987);
    // SubProg format pc: 3023 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3989 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3989 = 1;
    }
    // SubProg format pc: 3026 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3990;
    RHS_Slice(_argtext_6932, _dpos_7291, _3989);
    // SubProg format pc: 3031 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3990;
        concat_list[1] = _tsep_6762;
        concat_list[2] = _3988;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_3990);
    _3990 = NOVALUE;
    DeRefDS(_3988);
    _3988 = NOVALUE;
    // SubProg format pc: 3037 op: NOP1 (159)
    // SubProg format pc: 3038 op: STARTLINE (58)

    /** text.e:1931		    					end while*/
    // SubProg format pc: 3040 op: ENDWHILE (22)
    goto L6F; // [3040] 2994
    // SubProg format pc: 3042 op: NOP1 (159)
L70: // addr: 3043 pc: 3042 sub: 6737 op: 159
    // SubProg format pc: 3043 op: STARTLINE (58)

    /** text.e:1932		    					if bracketed then*/
    // SubProg format pc: 3045 op: IF (20)
    if (_bracketed_7293 == 0)
    {
        goto L71; // [3045] 3057
    }
    else{
    }
    // SubProg format pc: 3048 op: STARTLINE (58)

    /** text.e:1933		    						argtext = '(' & argtext & ')'*/
    // SubProg format pc: 3050 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _argtext_6932;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    // SubProg format pc: 3056 op: NOP1 (159)
L71: // addr: 3057 pc: 3056 sub: 6737 op: 159
    // SubProg format pc: 3057 op: NOP1 (159)
L67: // addr: 3058 pc: 3057 sub: 6737 op: 159
    // SubProg format pc: 3058 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var dpos_7291

// block var dist_7292

// block var bracketed_7293
    // SubProg format pc: 3060 op: NOP1 (159)
L66: // addr: 3061 pc: 3060 sub: 6737 op: 159
    // SubProg format pc: 3061 op: STARTLINE (58)

    /** text.e:1938	    				if width <= 0 then*/
    // SubProg format pc: 3063 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3065 op: LESSEQ_IFW_I (123)
    if (_width_6754 > 0)
    goto L72; // [3065] 3075
    // SubProg format pc: 3069 op: STARTLINE (58)

    /** text.e:1939	    					width = length(argtext)*/
    // SubProg format pc: 3071 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _width_6754 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _width_6754 = 1;
    }
    // SubProg format pc: 3074 op: NOP1 (159)
L72: // addr: 3075 pc: 3074 sub: 6737 op: 159
    // SubProg format pc: 3075 op: STARTLINE (58)

    /** text.e:1943	    				if width < length(argtext) then*/
    // SubProg format pc: 3077 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3995 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3995 = 1;
    }
    // SubProg format pc: 3080 op: LESS_IFW_I (119)
    if (_width_6754 >= _3995)
    goto L73; // [3080] 3211
    // SubProg format pc: 3084 op: STARTLINE (58)

    /** text.e:1944	    					if align = '>' then*/
    // SubProg format pc: 3086 op: EQUALS_IFW_I (121)
    if (_align_6747 != 62)
    goto L74; // [3086] 3114
    // SubProg format pc: 3090 op: STARTLINE (58)

    /** text.e:1945	    						argtext = argtext[ $ - width + 1 .. $]*/
    // SubProg format pc: 3092 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _3998 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _3998 = 1;
    }
    // SubProg format pc: 3095 op: MINUS (10)
    _3999 = _3998 - _width_6754;
    if ((object)((uintptr_t)_3999 +(uintptr_t) HIGH_BITS) >= 0){
        _3999 = NewDouble((eudouble)_3999);
    }
    _3998 = NOVALUE;
    // SubProg format pc: 3099 op: PLUS1 (93)
    if (IS_ATOM_INT(_3999)) {
        _4000 = _3999 + 1;
        if (_4000 > MAXINT){
            _4000 = NewDouble((eudouble)_4000);
        }
    }
    else
    _4000 = binary_op(PLUS, 1, _3999);
    DeRef(_3999);
    _3999 = NOVALUE;
    // SubProg format pc: 3103 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4001 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4001 = 1;
    }
    // SubProg format pc: 3106 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_argtext_6932, _4000, _4001);
    // SubProg format pc: 3111 op: ELSE (23)
    goto L75; // [3111] 3348
    // SubProg format pc: 3113 op: NOP1 (159)
L74: // addr: 3114 pc: 3113 sub: 6737 op: 159
    // SubProg format pc: 3114 op: STARTLINE (58)

    /** text.e:1946	    					elsif align = 'c' then*/
    // SubProg format pc: 3116 op: EQUALS_IFW_I (121)
    if (_align_6747 != 99)
    goto L76; // [3116] 3200
    // SubProg format pc: 3120 op: STARTLINE (58)

    /** text.e:1947	    						pos = length(argtext) - width*/
    // SubProg format pc: 3122 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4004 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4004 = 1;
    }
    // SubProg format pc: 3125 op: MINUS_I (116)
    _pos_6756 = _4004 - _width_6754;
    _4004 = NOVALUE;
    // SubProg format pc: 3129 op: STARTLINE (58)

    /** text.e:1948	    						if remainder(pos, 2) = 0 then*/
    // SubProg format pc: 3131 op: REMAINDER (71)
    _4006 = (_pos_6756 % 2);
    // SubProg format pc: 3135 op: EQUALS_IFW_I (121)
    if (_4006 != 0)
    goto L77; // [3135] 3168
    // SubProg format pc: 3139 op: STARTLINE (58)

    /** text.e:1949	    							pos = pos / 2*/
    // SubProg format pc: 3141 op: DIV2 (98)
    if (_pos_6756 & 1) {
        _pos_6756 = NewDouble((_pos_6756 >> 1) + 0.5);
    }
    else
    _pos_6756 = _pos_6756 >> 1;
    // SubProg format pc: 3145 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_6756)) {
        _1 = (object)(DBL_PTR(_pos_6756)->dbl);
        DeRefDS(_pos_6756);
        _pos_6756 = _1;
    }
    // SubProg format pc: 3147 op: STARTLINE (58)

    /** text.e:1950	    							argtext = argtext[ pos + 1 .. $ - pos ]*/
    // SubProg format pc: 3149 op: PLUS1 (93)
    _4009 = _pos_6756 + 1;
    if (_4009 > MAXINT){
        _4009 = NewDouble((eudouble)_4009);
    }
    // SubProg format pc: 3153 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4010 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4010 = 1;
    }
    // SubProg format pc: 3156 op: MINUS (10)
    _4011 = _4010 - _pos_6756;
    _4010 = NOVALUE;
    // SubProg format pc: 3160 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_argtext_6932, _4009, _4011);
    // SubProg format pc: 3165 op: ELSE (23)
    goto L75; // [3165] 3348
    // SubProg format pc: 3167 op: NOP1 (159)
L77: // addr: 3168 pc: 3167 sub: 6737 op: 159
    // SubProg format pc: 3168 op: STARTLINE (58)

    /** text.e:1952	    							pos = floor(pos / 2)*/
    // SubProg format pc: 3170 op: FLOOR_DIV2 (66)
    _pos_6756 = _pos_6756 >> 1;
    // SubProg format pc: 3174 op: STARTLINE (58)

    /** text.e:1953	    							argtext = argtext[ pos + 1 .. $ - pos - 1]*/
    // SubProg format pc: 3176 op: PLUS1 (93)
    _4014 = _pos_6756 + 1;
    if (_4014 > MAXINT){
        _4014 = NewDouble((eudouble)_4014);
    }
    // SubProg format pc: 3180 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4015 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4015 = 1;
    }
    // SubProg format pc: 3183 op: MINUS (10)
    _4016 = _4015 - _pos_6756;
    if ((object)((uintptr_t)_4016 +(uintptr_t) HIGH_BITS) >= 0){
        _4016 = NewDouble((eudouble)_4016);
    }
    _4015 = NOVALUE;
    // SubProg format pc: 3187 op: MINUS (10)
    if (IS_ATOM_INT(_4016)) {
        _4017 = _4016 - 1;
    }
    else {
        _4017 = NewDouble(DBL_PTR(_4016)->dbl - (eudouble)1);
    }
    DeRef(_4016);
    _4016 = NOVALUE;
    // SubProg format pc: 3191 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_argtext_6932, _4014, _4017);
    // SubProg format pc: 3196 op: NOP1 (159)
    // SubProg format pc: 3197 op: ELSE (23)
    goto L75; // [3197] 3348
    // SubProg format pc: 3199 op: NOP1 (159)
L76: // addr: 3200 pc: 3199 sub: 6737 op: 159
    // SubProg format pc: 3200 op: STARTLINE (58)

    /** text.e:1956	    						argtext = argtext[ 1 .. width]*/
    // SubProg format pc: 3202 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_argtext_6932;
    RHS_Slice(_argtext_6932, 1, _width_6754);
    // SubProg format pc: 3207 op: NOP1 (159)
    // SubProg format pc: 3208 op: ELSE (23)
    goto L75; // [3208] 3348
    // SubProg format pc: 3210 op: NOP1 (159)
L73: // addr: 3211 pc: 3210 sub: 6737 op: 159
    // SubProg format pc: 3211 op: STARTLINE (58)

    /** text.e:1958	    				elsif width > length(argtext) then*/
    // SubProg format pc: 3213 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4020 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4020 = 1;
    }
    // SubProg format pc: 3216 op: GREATER_IFW_I (124)
    if (_width_6754 <= _4020)
    goto L78; // [3216] 3347
    // SubProg format pc: 3220 op: STARTLINE (58)

    /** text.e:1959							if align = '>' then*/
    // SubProg format pc: 3222 op: EQUALS_IFW_I (121)
    if (_align_6747 != 62)
    goto L79; // [3222] 3246
    // SubProg format pc: 3226 op: STARTLINE (58)

    /** text.e:1960								argtext = repeat(' ', width - length(argtext)) & argtext*/
    // SubProg format pc: 3228 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4023 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4023 = 1;
    }
    // SubProg format pc: 3231 op: MINUS (10)
    _4024 = _width_6754 - _4023;
    _4023 = NOVALUE;
    // SubProg format pc: 3235 op: REPEAT (32)
    _4025 = Repeat(32, _4024);
    _4024 = NOVALUE;
    // SubProg format pc: 3239 op: CONCAT (15)
    Concat((object_ptr)&_argtext_6932, _4025, _argtext_6932);
    DeRefDS(_4025);
    _4025 = NOVALUE;
    DeRef(_4025);
    _4025 = NOVALUE;
    // SubProg format pc: 3243 op: ELSE (23)
    goto L7A; // [3243] 3346
    // SubProg format pc: 3245 op: NOP1 (159)
L79: // addr: 3246 pc: 3245 sub: 6737 op: 159
    // SubProg format pc: 3246 op: STARTLINE (58)

    /** text.e:1961	    					elsif align = 'c' then*/
    // SubProg format pc: 3248 op: EQUALS_IFW_I (121)
    if (_align_6747 != 99)
    goto L7B; // [3248] 3328
    // SubProg format pc: 3252 op: STARTLINE (58)

    /** text.e:1962	    						pos = width - length(argtext)*/
    // SubProg format pc: 3254 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4028 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4028 = 1;
    }
    // SubProg format pc: 3257 op: MINUS_I (116)
    _pos_6756 = _width_6754 - _4028;
    _4028 = NOVALUE;
    // SubProg format pc: 3261 op: STARTLINE (58)

    /** text.e:1963	    						if remainder(pos, 2) = 0 then*/
    // SubProg format pc: 3263 op: REMAINDER (71)
    _4030 = (_pos_6756 % 2);
    // SubProg format pc: 3267 op: EQUALS_IFW_I (121)
    if (_4030 != 0)
    goto L7C; // [3267] 3298
    // SubProg format pc: 3271 op: STARTLINE (58)

    /** text.e:1964	    							pos = pos / 2*/
    // SubProg format pc: 3273 op: DIV2 (98)
    if (_pos_6756 & 1) {
        _pos_6756 = NewDouble((_pos_6756 >> 1) + 0.5);
    }
    else
    _pos_6756 = _pos_6756 >> 1;
    // SubProg format pc: 3277 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_6756)) {
        _1 = (object)(DBL_PTR(_pos_6756)->dbl);
        DeRefDS(_pos_6756);
        _pos_6756 = _1;
    }
    // SubProg format pc: 3279 op: STARTLINE (58)

    /** text.e:1965	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos)*/
    // SubProg format pc: 3281 op: REPEAT (32)
    _4033 = Repeat(32, _pos_6756);
    // SubProg format pc: 3285 op: REPEAT (32)
    _4034 = Repeat(32, _pos_6756);
    // SubProg format pc: 3289 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _4034;
        concat_list[1] = _argtext_6932;
        concat_list[2] = _4033;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_4034);
    _4034 = NOVALUE;
    DeRefDS(_4033);
    _4033 = NOVALUE;
    // SubProg format pc: 3295 op: ELSE (23)
    goto L7A; // [3295] 3346
    // SubProg format pc: 3297 op: NOP1 (159)
L7C: // addr: 3298 pc: 3297 sub: 6737 op: 159
    // SubProg format pc: 3298 op: STARTLINE (58)

    /** text.e:1967	    							pos = floor(pos / 2)*/
    // SubProg format pc: 3300 op: FLOOR_DIV2 (66)
    _pos_6756 = _pos_6756 >> 1;
    // SubProg format pc: 3304 op: STARTLINE (58)

    /** text.e:1968	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos + 1)*/
    // SubProg format pc: 3306 op: REPEAT (32)
    _4037 = Repeat(32, _pos_6756);
    // SubProg format pc: 3310 op: PLUS1 (93)
    _4038 = _pos_6756 + 1;
    // SubProg format pc: 3314 op: REPEAT (32)
    _4039 = Repeat(32, _4038);
    _4038 = NOVALUE;
    // SubProg format pc: 3318 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _4039;
        concat_list[1] = _argtext_6932;
        concat_list[2] = _4037;
        Concat_N((object_ptr)&_argtext_6932, concat_list, 3);
    }
    DeRefDS(_4039);
    _4039 = NOVALUE;
    DeRefDS(_4037);
    _4037 = NOVALUE;
    // SubProg format pc: 3324 op: NOP1 (159)
    // SubProg format pc: 3325 op: ELSE (23)
    goto L7A; // [3325] 3346
    // SubProg format pc: 3327 op: NOP1 (159)
L7B: // addr: 3328 pc: 3327 sub: 6737 op: 159
    // SubProg format pc: 3328 op: STARTLINE (58)

    /** text.e:1972								argtext = argtext & repeat(' ', width - length(argtext))*/
    // SubProg format pc: 3330 op: LENGTH (42)
    if (IS_SEQUENCE(_argtext_6932)){
            _4041 = SEQ_PTR(_argtext_6932)->length;
    }
    else {
        _4041 = 1;
    }
    // SubProg format pc: 3333 op: MINUS (10)
    _4042 = _width_6754 - _4041;
    _4041 = NOVALUE;
    // SubProg format pc: 3337 op: REPEAT (32)
    _4043 = Repeat(32, _4042);
    _4042 = NOVALUE;
    // SubProg format pc: 3341 op: CONCAT (15)
    Concat((object_ptr)&_argtext_6932, _argtext_6932, _4043);
    DeRefDS(_4043);
    _4043 = NOVALUE;
    // SubProg format pc: 3345 op: NOP1 (159)
L7A: // addr: 3346 pc: 3345 sub: 6737 op: 159
    // SubProg format pc: 3346 op: NOP1 (159)
L78: // addr: 3347 pc: 3346 sub: 6737 op: 159
    // SubProg format pc: 3347 op: NOP1 (159)
L75: // addr: 3348 pc: 3347 sub: 6737 op: 159
    // SubProg format pc: 3348 op: STARTLINE (58)

    /** text.e:1975	    				result &= argtext*/
    // SubProg format pc: 3350 op: CONCAT (15)
    Concat((object_ptr)&_result_6741, _result_6741, _argtext_6932);
    // SubProg format pc: 3354 op: ELSE (23)
    goto L7D; // [3354] 3370
    // SubProg format pc: 3356 op: NOP1 (159)
L58: // addr: 3357 pc: 3356 sub: 6737 op: 159
    // SubProg format pc: 3357 op: STARTLINE (58)

    /** text.e:1978	    				if spacer then*/
    // SubProg format pc: 3359 op: IF (20)
    if (_spacer_6752 == 0)
    {
        goto L7E; // [3359] 3369
    }
    else{
    }
    // SubProg format pc: 3362 op: STARTLINE (58)

    /** text.e:1979	    					result &= ' '*/
    // SubProg format pc: 3364 op: CONCAT (15)
    Append(&_result_6741, _result_6741, 32);
    // SubProg format pc: 3368 op: NOP1 (159)
L7E: // addr: 3369 pc: 3368 sub: 6737 op: 159
    // SubProg format pc: 3369 op: NOP1 (159)
L7D: // addr: 3370 pc: 3369 sub: 6737 op: 159
    // SubProg format pc: 3370 op: STARTLINE (58)

    /** text.e:1983	   				if trimming then*/
    // SubProg format pc: 3372 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3374 op: IF (20)
    if (_trimming_6759 == 0)
    {
        goto L7F; // [3374] 3388
    }
    else{
    }
    // SubProg format pc: 3377 op: STARTLINE (58)

    /** text.e:1984	   					result = trim(result)*/
    // SubProg format pc: 3379 op: PROC (27)
    RefDS(_result_6741);
    RefDS(_3069);
    _0 = _result_6741;
    _result_6741 = _20trim(_result_6741, _3069, 0);
    DeRefDS(_0);
    // SubProg format pc: 3385 op: SEQUENCE_CHECK (97)
    // SubProg format pc: 3387 op: NOP1 (159)
L7F: // addr: 3388 pc: 3387 sub: 6737 op: 159
    // SubProg format pc: 3388 op: STARTLINE (58)

    /** text.e:1987	    			tend = 0*/
    // SubProg format pc: 3390 op: ASSIGN_I (113)
    _tend_6745 = 0;
    // SubProg format pc: 3393 op: STARTLINE (58)

    /** text.e:1988			    	prevargv = currargv*/
    // SubProg format pc: 3395 op: PRIVATE_INIT_CHECK (30)
    // SubProg format pc: 3397 op: ASSIGN (18)
    Ref(_currargv_6765);
    DeRef(_prevargv_6764);
    _prevargv_6764 = _currargv_6765;
    // SubProg format pc: 3400 op: NOP1 (159)
L1F: // addr: 3401 pc: 3400 sub: 6737 op: 159
    // SubProg format pc: 3401 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var argtext_6932
    DeRef(_argtext_6932);
    _argtext_6932 = NOVALUE;
    // SubProg format pc: 3403 op: NOP1 (159)
    // SubProg format pc: 3404 op: STARTLINE (58)

    /** text.e:1991	    end while*/
    // SubProg format pc: 3406 op: ENDWHILE (22)
    goto L2; // [3406] 60
    // SubProg format pc: 3408 op: NOP1 (159)
L3: // addr: 3409 pc: 3408 sub: 6737 op: 159
    // SubProg format pc: 3409 op: STARTLINE (58)

    /** text.e:1993		return result*/
    // SubProg format pc: 3411 op: RETURNF (28)

// Exiting block BLOCK: format

// block var format_pattern_6739
    DeRefDS(_format_pattern_6739);

// block var arg_list_6740
    DeRef(_arg_list_6740);

// block var in_token_6742

// block var tch_6743

// block var i_6744

// block var tend_6745

// block var cap_6746

// block var align_6747

// block var psign_6748

// block var msign_6749

// block var zfill_6750

// block var bwz_6751

// block var spacer_6752

// block var alt_6753

// block var width_6754

// block var decs_6755

// block var pos_6756

// block var argn_6757

// block var argl_6758

// block var trimming_6759

// block var hexout_6760

// block var binout_6761

// block var tsep_6762

// block var istext_6763

// block var prevargv_6764
    DeRef(_prevargv_6764);

// block var currargv_6765
    DeRef(_currargv_6765);

// block var idname_6766
    DeRef(_idname_6766);

// block var envsym_6767
    DeRef(_envsym_6767);

// block var envvar_6768
    DeRefi(_envvar_6768);

// block var ep_6769
    DeRef(_3970);
    _3970 = NOVALUE;
    DeRef(_4006);
    _4006 = NOVALUE;
    DeRef(_3774);
    _3774 = NOVALUE;
    DeRef(_3853);
    _3853 = NOVALUE;
    DeRef(_4000);
    _4000 = NOVALUE;
    DeRef(_3890);
    _3890 = NOVALUE;
    DeRef(_3951);
    _3951 = NOVALUE;
    DeRef(_3817);
    _3817 = NOVALUE;
    DeRef(_3835);
    _3835 = NOVALUE;
    DeRef(_3674);
    _3674 = NOVALUE;
    DeRef(_3922);
    _3922 = NOVALUE;
    DeRef(_3698);
    _3698 = NOVALUE;
    DeRef(_4014);
    _4014 = NOVALUE;
    DeRef(_4009);
    _4009 = NOVALUE;
    DeRef(_4017);
    _4017 = NOVALUE;
    DeRef(_3756);
    _3756 = NOVALUE;
    DeRef(_3746);
    _3746 = NOVALUE;
    DeRef(_3725);
    _3725 = NOVALUE;
    DeRef(_3737);
    _3737 = NOVALUE;
    DeRef(_3977);
    _3977 = NOVALUE;
    DeRef(_3912);
    _3912 = NOVALUE;
    DeRef(_3987);
    _3987 = NOVALUE;
    _3892 = NOVALUE;
    DeRef(_4011);
    _4011 = NOVALUE;
    DeRef(_3958);
    _3958 = NOVALUE;
    DeRef(_4030);
    _4030 = NOVALUE;
    return _result_6741;
    // SubProg format pc: 3415 op: BADRETURNF (43)
    ;
}



// 0xDE7D1278
