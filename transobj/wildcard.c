// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _25qmatch(object _p_5953, object _s_5954)
{
    object _k_5955 = NOVALUE;
// skipping _3108  name type: 0
// skipping _3107  name type: 0
    object _3106 = NOVALUE; // 5975 3106
    object _3105 = NOVALUE; // 5974 3105
    object _3104 = NOVALUE; // 5973 3104
    object _3103 = NOVALUE; // 5972 3103
    object _3102 = NOVALUE; // 5971 3102
    object _3101 = NOVALUE; // 5970 3101
    object _3100 = NOVALUE; // 5968 3100
    object _3099 = NOVALUE; // 5965 3099
    object _3098 = NOVALUE; // 5964 3098
    object _3097 = NOVALUE; // 5963 3097
    object _3096 = NOVALUE; // 5962 3096
    object _3095 = NOVALUE; // 5959 3095
// skipping _3094  name type: 0
    object _3093 = NOVALUE; // 5957 3093
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg qmatch pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg qmatch pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg qmatch pc: 5 op: STARTLINE (58)

    /** wildcard.e:21		if not find('?', p) then*/
    // SubProg qmatch pc: 7 op: FIND_FROM (176)
    _3093 = find_from(63, _p_5953, 1);
    // SubProg qmatch pc: 12 op: NOT_IFW (108)
    if (_3093 != 0)
    goto L1; // [12] 27
    _3093 = NOVALUE;
    // SubProg qmatch pc: 15 op: STARTLINE (58)

    /** wildcard.e:22			return match(p, s) -- fast*/
    // SubProg qmatch pc: 17 op: MATCH_FROM (177)
    _3095 = e_match_from(_p_5953, _s_5954, 1);
    // SubProg qmatch pc: 22 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_5953
    DeRefDS(_p_5953);

// block var s_5954
    DeRefDS(_s_5954);

// block var k_5955
    return _3095;
    // SubProg qmatch pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 5951 op: 159
    // SubProg qmatch pc: 27 op: STARTLINE (58)

    /** wildcard.e:25		for i = 1 to length(s) - length(p) + 1 do*/
    // SubProg qmatch pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_s_5954)){
            _3096 = SEQ_PTR(_s_5954)->length;
    }
    else {
        _3096 = 1;
    }
    // SubProg qmatch pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_p_5953)){
            _3097 = SEQ_PTR(_p_5953)->length;
    }
    else {
        _3097 = 1;
    }
    // SubProg qmatch pc: 35 op: MINUS (10)
    _3098 = _3096 - _3097;
    _3096 = NOVALUE;
    _3097 = NOVALUE;
    // SubProg qmatch pc: 39 op: PLUS1 (93)
    _3099 = _3098 + 1;
    _3098 = NOVALUE;
    // SubProg qmatch pc: 43 op: FOR (21)
    {
        object _i_5961;
        _i_5961 = 1;
L2: // addr: 50 pc: 43 sub: 5951 op: 21
        if (_i_5961 > _3099){
            goto L3; // [43] 142
        }
        // SubProg qmatch pc: 50 op: STARTLINE (58)

        /** wildcard.e:26			k = i*/
        // SubProg qmatch pc: 52 op: ASSIGN (18)
        _k_5955 = _i_5961;
        // SubProg qmatch pc: 55 op: INTEGER_CHECK (96)
        // SubProg qmatch pc: 57 op: STARTLINE (58)

        /** wildcard.e:27			for j = 1 to length(p) do*/
        // SubProg qmatch pc: 59 op: LENGTH (42)
        if (IS_SEQUENCE(_p_5953)){
                _3100 = SEQ_PTR(_p_5953)->length;
        }
        else {
            _3100 = 1;
        }
        // SubProg qmatch pc: 62 op: FOR_I (125)
        {
            object _j_5967;
            _j_5967 = 1;
L4: // addr: 69 pc: 62 sub: 5951 op: 125
            if (_j_5967 > _3100){
                goto L5; // [62] 122
            }
            // SubProg qmatch pc: 69 op: STARTLINE (58)

            /** wildcard.e:28				if p[j] != s[k] and p[j] != '?' then*/
            // SubProg qmatch pc: 71 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_p_5953);
            _3101 = (object)*(((s1_ptr)_2)->base + _j_5967);
            // SubProg qmatch pc: 75 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_s_5954);
            _3102 = (object)*(((s1_ptr)_2)->base + _k_5955);
            // SubProg qmatch pc: 79 op: NOTEQ (4)
            if (IS_ATOM_INT(_3101) && IS_ATOM_INT(_3102)) {
                _3103 = (_3101 != _3102);
            }
            else {
                _3103 = binary_op(NOTEQ, _3101, _3102);
            }
            _3101 = NOVALUE;
            _3102 = NOVALUE;
            // SubProg qmatch pc: 83 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_3103)) {
                if (_3103 == 0) {
                    goto L6; // [83] 109
                }
            }
            else {
                if (DBL_PTR(_3103)->dbl == 0.0) {
                    goto L6; // [83] 109
                }
            }
            // SubProg qmatch pc: 87 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_p_5953);
            _3105 = (object)*(((s1_ptr)_2)->base + _j_5967);
            // SubProg qmatch pc: 91 op: NOTEQ (4)
            if (IS_ATOM_INT(_3105)) {
                _3106 = (_3105 != 63);
            }
            else {
                _3106 = binary_op(NOTEQ, _3105, 63);
            }
            _3105 = NOVALUE;
            // SubProg qmatch pc: 95 op: NOP1 (159)
            // SubProg qmatch pc: 96 op: IF (20)
            if (_3106 == 0) {
                DeRef(_3106);
                _3106 = NOVALUE;
                goto L6; // [96] 109
            }
            else {
                if (!IS_ATOM_INT(_3106) && DBL_PTR(_3106)->dbl == 0.0){
                    DeRef(_3106);
                    _3106 = NOVALUE;
                    goto L6; // [96] 109
                }
                DeRef(_3106);
                _3106 = NOVALUE;
            }
            DeRef(_3106);
            _3106 = NOVALUE;
            // SubProg qmatch pc: 99 op: STARTLINE (58)

            /** wildcard.e:29					k = 0*/
            // SubProg qmatch pc: 101 op: ASSIGN_I (113)
            _k_5955 = 0;
            // SubProg qmatch pc: 104 op: STARTLINE (58)

            /** wildcard.e:30					exit*/
            // SubProg qmatch pc: 106 op: EXIT (61)
            goto L5; // [106] 122
            // SubProg qmatch pc: 108 op: NOP1 (159)
L6: // addr: 109 pc: 108 sub: 5951 op: 159
            // SubProg qmatch pc: 109 op: STARTLINE (58)

            /** wildcard.e:32				k += 1*/
            // SubProg qmatch pc: 111 op: PLUS1_I (117)
            _k_5955 = _k_5955 + 1;
            // SubProg qmatch pc: 115 op: STARTLINE (58)

            /** wildcard.e:33			end for*/
            // SubProg qmatch pc: 117 op: ENDFOR_INT_UP1 (54)
            _j_5967 = _j_5967 + 1;
            goto L4; // [117] 69
L5: // addr: 122 pc: 117 sub: 5951 op: 54
            ;
        }
        // SubProg qmatch pc: 122 op: STARTLINE (58)

        /** wildcard.e:34			if k != 0 then*/
        // SubProg qmatch pc: 124 op: NOTEQ_IFW_I (122)
        if (_k_5955 == 0)
        goto L7; // [124] 135
        // SubProg qmatch pc: 128 op: STARTLINE (58)

        /** wildcard.e:35				return i*/
        // SubProg qmatch pc: 130 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_5953
        DeRefDS(_p_5953);

// block var s_5954
        DeRefDS(_s_5954);

// block var k_5955
        DeRef(_3099);
        _3099 = NOVALUE;
        DeRef(_3103);
        _3103 = NOVALUE;
        return _i_5961;
        // SubProg qmatch pc: 134 op: NOP1 (159)
L7: // addr: 135 pc: 134 sub: 5951 op: 159
        // SubProg qmatch pc: 135 op: STARTLINE (58)

        /** wildcard.e:37		end for*/
        // SubProg qmatch pc: 137 op: ENDFOR_INT_UP1 (54)
        _i_5961 = _i_5961 + 1;
        goto L2; // [137] 50
L3: // addr: 142 pc: 137 sub: 5951 op: 54
        ;
    }
    // SubProg qmatch pc: 142 op: STARTLINE (58)

    /** wildcard.e:38		return 0*/
    // SubProg qmatch pc: 144 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_5953
    DeRefDS(_p_5953);

// block var s_5954
    DeRefDS(_s_5954);

// block var k_5955
    DeRef(_3099);
    _3099 = NOVALUE;
    DeRef(_3103);
    _3103 = NOVALUE;
    return 0;
    // SubProg qmatch pc: 148 op: BADRETURNF (43)
    ;
}


object _25is_match(object _pattern_5982, object _string_5983)
{
    object _p_5984 = NOVALUE;
    object _f_5985 = NOVALUE;
    object _t_5986 = NOVALUE;
    object _match_string_5987 = NOVALUE;
    object _3148 = NOVALUE; // 6039 3148
    object _3147 = NOVALUE; // 6038 3147
// skipping _3146  name type: 0
    object _3145 = NOVALUE; // 6036 3145
// skipping _3144  name type: 0
// skipping _3143  name type: 0
// skipping _3142  name type: 0
    object _3141 = NOVALUE; // 6030 3141
    object _3140 = NOVALUE; // 6029 3140
    object _3139 = NOVALUE; // 6028 3139
// skipping _3138  name type: 0
// skipping _3137  name type: 0
    object _3136 = NOVALUE; // 6023 3136
    object _3135 = NOVALUE; // 6022 3135
// skipping _3134  name type: 0
// skipping _3133  name type: 0
    object _3132 = NOVALUE; // 6019 3132
// skipping _3131  name type: 0
// skipping _3130  name type: 0
    object _3129 = NOVALUE; // 6015 3129
// skipping _3128  name type: 0
    object _3127 = NOVALUE; // 6012 3127
// skipping _3126  name type: 0
    object _3125 = NOVALUE; // 6010 3125
// skipping _3124  name type: 0
    object _3123 = NOVALUE; // 6007 3123
// skipping _3122  name type: 0
// skipping _3121  name type: 0
    object _3120 = NOVALUE; // 6003 3120
// skipping _3119  name type: 0
    object _3118 = NOVALUE; // 6000 3118
// skipping _3117  name type: 0
    object _3116 = NOVALUE; // 5997 3116
    object _3115 = NOVALUE; // 5996 3115
    object _3114 = NOVALUE; // 5995 3114
    object _3113 = NOVALUE; // 5994 3113
// skipping _3112  name type: 0
    object _3111 = NOVALUE; // 5991 3111
// skipping _3110  name type: 0
// skipping _3109  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_match pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 5 op: STARTLINE (58)

    /** wildcard.e:95		pattern = pattern & END_MARKER*/
    // SubProg is_match pc: 7 op: CONCAT (15)
    Append(&_pattern_5982, _pattern_5982, -1);
    // SubProg is_match pc: 11 op: STARTLINE (58)

    /** wildcard.e:96		string = string & END_MARKER*/
    // SubProg is_match pc: 13 op: CONCAT (15)
    Append(&_string_5983, _string_5983, -1);
    // SubProg is_match pc: 17 op: STARTLINE (58)

    /** wildcard.e:97		p = 1*/
    // SubProg is_match pc: 19 op: ASSIGN_I (113)
    _p_5984 = 1;
    // SubProg is_match pc: 22 op: STARTLINE (58)

    /** wildcard.e:98		f = 1*/
    // SubProg is_match pc: 24 op: ASSIGN_I (113)
    _f_5985 = 1;
    // SubProg is_match pc: 27 op: STARTLINE (58)

    /** wildcard.e:99		while f <= length(string) do*/
    // SubProg is_match pc: 29 op: NOP2 (110)
    // SubProg is_match pc: 31 op: NOPWHILE (158)
L1: // addr: 32 pc: 31 sub: 5980 op: 158
    // SubProg is_match pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_string_5983)){
            _3111 = SEQ_PTR(_string_5983)->length;
    }
    else {
        _3111 = 1;
    }
    // SubProg is_match pc: 35 op: LESSEQ_IFW_I (123)
    if (_f_5985 > _3111)
    goto L2; // [35] 288
    // SubProg is_match pc: 39 op: STARTLINE (58)

    /** wildcard.e:100			if not find(pattern[p], {string[f], '?'}) then*/
    // SubProg is_match pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3113 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 45 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_5983);
    _3114 = (object)*(((s1_ptr)_2)->base + _f_5985);
    // SubProg is_match pc: 49 op: RIGHT_BRACE_2 (85)
    Ref(_3114);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3114;
    ((intptr_t *)_2)[2] = 63;
    _3115 = MAKE_SEQ(_1);
    _3114 = NOVALUE;
    // SubProg is_match pc: 53 op: FIND_FROM (176)
    _3116 = find_from(_3113, _3115, 1);
    _3113 = NOVALUE;
    DeRefDS(_3115);
    _3115 = NOVALUE;
    // SubProg is_match pc: 58 op: NOT_IFW (108)
    if (_3116 != 0)
    goto L3; // [58] 248
    _3116 = NOVALUE;
    // SubProg is_match pc: 61 op: STARTLINE (58)

    /** wildcard.e:101				if pattern[p] = '*' then*/
    // SubProg is_match pc: 63 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3118 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 67 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3118, 42)){
        _3118 = NOVALUE;
        goto L4; // [67] 240
    }
    _3118 = NOVALUE;
    // SubProg is_match pc: 71 op: STARTLINE (58)

    /** wildcard.e:102					while pattern[p] = '*' do*/
    // SubProg is_match pc: 73 op: NOP2 (110)
    // SubProg is_match pc: 75 op: NOPWHILE (158)
L5: // addr: 76 pc: 75 sub: 5980 op: 158
    // SubProg is_match pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3120 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3120, 42)){
        _3120 = NOVALUE;
        goto L6; // [80] 95
    }
    _3120 = NOVALUE;
    // SubProg is_match pc: 84 op: STARTLINE (58)

    /** wildcard.e:103						p += 1*/
    // SubProg is_match pc: 86 op: PLUS1_I (117)
    _p_5984 = _p_5984 + 1;
    // SubProg is_match pc: 90 op: STARTLINE (58)

    /** wildcard.e:104					end while*/
    // SubProg is_match pc: 92 op: ENDWHILE (22)
    goto L5; // [92] 76
    // SubProg is_match pc: 94 op: NOP1 (159)
L6: // addr: 95 pc: 94 sub: 5980 op: 159
    // SubProg is_match pc: 95 op: STARTLINE (58)

    /** wildcard.e:105					if pattern[p] = END_MARKER then*/
    // SubProg is_match pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3123 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 101 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3123, -1)){
        _3123 = NOVALUE;
        goto L7; // [101] 112
    }
    _3123 = NOVALUE;
    // SubProg is_match pc: 105 op: STARTLINE (58)

    /** wildcard.e:106						return 1*/
    // SubProg is_match pc: 107 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_5982
    DeRefDS(_pattern_5982);

// block var string_5983
    DeRefDS(_string_5983);

// block var p_5984

// block var f_5985

// block var t_5986

// block var match_string_5987
    DeRef(_match_string_5987);
    return 1;
    // SubProg is_match pc: 111 op: NOP1 (159)
L7: // addr: 112 pc: 111 sub: 5980 op: 159
    // SubProg is_match pc: 112 op: STARTLINE (58)

    /** wildcard.e:108					match_string = ""*/
    // SubProg is_match pc: 114 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_match_string_5987);
    _match_string_5987 = _5;
    // SubProg is_match pc: 117 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 119 op: STARTLINE (58)

    /** wildcard.e:109					while pattern[p] != '*' do*/
    // SubProg is_match pc: 121 op: NOP2 (110)
    // SubProg is_match pc: 123 op: NOPWHILE (158)
L8: // addr: 124 pc: 123 sub: 5980 op: 158
    // SubProg is_match pc: 124 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3125 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 128 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _3125, 42)){
        _3125 = NOVALUE;
        goto L9; // [128] 168
    }
    _3125 = NOVALUE;
    // SubProg is_match pc: 132 op: STARTLINE (58)

    /** wildcard.e:110						match_string = match_string & pattern[p]*/
    // SubProg is_match pc: 134 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3127 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 138 op: CONCAT (15)
    if (IS_SEQUENCE(_match_string_5987) && IS_ATOM(_3127)) {
        Ref(_3127);
        Append(&_match_string_5987, _match_string_5987, _3127);
    }
    else if (IS_ATOM(_match_string_5987) && IS_SEQUENCE(_3127)) {
    }
    else {
        Concat((object_ptr)&_match_string_5987, _match_string_5987, _3127);
    }
    _3127 = NOVALUE;
    // SubProg is_match pc: 142 op: STARTLINE (58)

    /** wildcard.e:111						if pattern[p] = END_MARKER then*/
    // SubProg is_match pc: 144 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3129 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 148 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3129, -1)){
        _3129 = NOVALUE;
        goto LA; // [148] 157
    }
    _3129 = NOVALUE;
    // SubProg is_match pc: 152 op: STARTLINE (58)

    /** wildcard.e:112							exit*/
    // SubProg is_match pc: 154 op: EXIT (61)
    goto L9; // [154] 168
    // SubProg is_match pc: 156 op: NOP1 (159)
LA: // addr: 157 pc: 156 sub: 5980 op: 159
    // SubProg is_match pc: 157 op: STARTLINE (58)

    /** wildcard.e:114						p += 1*/
    // SubProg is_match pc: 159 op: PLUS1_I (117)
    _p_5984 = _p_5984 + 1;
    // SubProg is_match pc: 163 op: STARTLINE (58)

    /** wildcard.e:115					end while*/
    // SubProg is_match pc: 165 op: ENDWHILE (22)
    goto L8; // [165] 124
    // SubProg is_match pc: 167 op: NOP1 (159)
L9: // addr: 168 pc: 167 sub: 5980 op: 159
    // SubProg is_match pc: 168 op: STARTLINE (58)

    /** wildcard.e:116					if pattern[p] = '*' then*/
    // SubProg is_match pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_5982);
    _3132 = (object)*(((s1_ptr)_2)->base + _p_5984);
    // SubProg is_match pc: 174 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3132, 42)){
        _3132 = NOVALUE;
        goto LB; // [174] 185
    }
    _3132 = NOVALUE;
    // SubProg is_match pc: 178 op: STARTLINE (58)

    /** wildcard.e:117						p -= 1*/
    // SubProg is_match pc: 180 op: MINUS_I (116)
    _p_5984 = _p_5984 - 1;
    // SubProg is_match pc: 184 op: NOP1 (159)
LB: // addr: 185 pc: 184 sub: 5980 op: 159
    // SubProg is_match pc: 185 op: STARTLINE (58)

    /** wildcard.e:119					t = qmatch(match_string, string[f..$])*/
    // SubProg is_match pc: 187 op: LENGTH (42)
    if (IS_SEQUENCE(_string_5983)){
            _3135 = SEQ_PTR(_string_5983)->length;
    }
    else {
        _3135 = 1;
    }
    // SubProg is_match pc: 190 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3136;
    RHS_Slice(_string_5983, _f_5985, _3135);
    // SubProg is_match pc: 195 op: PROC (27)
    RefDS(_match_string_5987);
    _t_5986 = _25qmatch(_match_string_5987, _3136);
    _3136 = NOVALUE;
    // SubProg is_match pc: 200 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t_5986)) {
        _1 = (object)(DBL_PTR(_t_5986)->dbl);
        DeRefDS(_t_5986);
        _t_5986 = _1;
    }
    // SubProg is_match pc: 202 op: STARTLINE (58)

    /** wildcard.e:120					if t = 0 then*/
    // SubProg is_match pc: 204 op: EQUALS_IFW_I (121)
    if (_t_5986 != 0)
    goto LC; // [204] 217
    // SubProg is_match pc: 208 op: STARTLINE (58)

    /** wildcard.e:121						return 0*/
    // SubProg is_match pc: 210 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_5982
    DeRefDS(_pattern_5982);

// block var string_5983
    DeRefDS(_string_5983);

// block var p_5984

// block var f_5985

// block var t_5986

// block var match_string_5987
    DeRefDS(_match_string_5987);
    return 0;
    // SubProg is_match pc: 214 op: ELSE (23)
    goto LD; // [214] 247
    // SubProg is_match pc: 216 op: NOP1 (159)
LC: // addr: 217 pc: 216 sub: 5980 op: 159
    // SubProg is_match pc: 217 op: STARTLINE (58)

    /** wildcard.e:123						f += t + length(match_string) - 2*/
    // SubProg is_match pc: 219 op: LENGTH (42)
    if (IS_SEQUENCE(_match_string_5987)){
            _3139 = SEQ_PTR(_match_string_5987)->length;
    }
    else {
        _3139 = 1;
    }
    // SubProg is_match pc: 222 op: PLUS (11)
    _3140 = _t_5986 + _3139;
    if ((object)((uintptr_t)_3140 + (uintptr_t)HIGH_BITS) >= 0){
        _3140 = NewDouble((eudouble)_3140);
    }
    _3139 = NOVALUE;
    // SubProg is_match pc: 226 op: MINUS (10)
    if (IS_ATOM_INT(_3140)) {
        _3141 = _3140 - 2;
        if ((object)((uintptr_t)_3141 +(uintptr_t) HIGH_BITS) >= 0){
            _3141 = NewDouble((eudouble)_3141);
        }
    }
    else {
        _3141 = NewDouble(DBL_PTR(_3140)->dbl - (eudouble)2);
    }
    DeRef(_3140);
    _3140 = NOVALUE;
    // SubProg is_match pc: 230 op: PLUS (11)
    if (IS_ATOM_INT(_3141)) {
        _f_5985 = _f_5985 + _3141;
    }
    else {
        _f_5985 = NewDouble((eudouble)_f_5985 + DBL_PTR(_3141)->dbl);
    }
    DeRef(_3141);
    _3141 = NOVALUE;
    // SubProg is_match pc: 234 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_f_5985)) {
        _1 = (object)(DBL_PTR(_f_5985)->dbl);
        DeRefDS(_f_5985);
        _f_5985 = _1;
    }
    // SubProg is_match pc: 236 op: NOP1 (159)
    // SubProg is_match pc: 237 op: ELSE (23)
    goto LD; // [237] 247
    // SubProg is_match pc: 239 op: NOP1 (159)
L4: // addr: 240 pc: 239 sub: 5980 op: 159
    // SubProg is_match pc: 240 op: STARTLINE (58)

    /** wildcard.e:126					return 0*/
    // SubProg is_match pc: 242 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_5982
    DeRefDS(_pattern_5982);

// block var string_5983
    DeRefDS(_string_5983);

// block var p_5984

// block var f_5985

// block var t_5986

// block var match_string_5987
    DeRef(_match_string_5987);
    return 0;
    // SubProg is_match pc: 246 op: NOP1 (159)
LD: // addr: 247 pc: 246 sub: 5980 op: 159
    // SubProg is_match pc: 247 op: NOP1 (159)
L3: // addr: 248 pc: 247 sub: 5980 op: 159
    // SubProg is_match pc: 248 op: STARTLINE (58)

    /** wildcard.e:129			p += 1*/
    // SubProg is_match pc: 250 op: PLUS1_I (117)
    _p_5984 = _p_5984 + 1;
    // SubProg is_match pc: 254 op: STARTLINE (58)

    /** wildcard.e:130			f += 1*/
    // SubProg is_match pc: 256 op: PLUS1_I (117)
    _f_5985 = _f_5985 + 1;
    // SubProg is_match pc: 260 op: STARTLINE (58)

    /** wildcard.e:131			if p > length(pattern) then*/
    // SubProg is_match pc: 262 op: LENGTH (42)
    if (IS_SEQUENCE(_pattern_5982)){
            _3145 = SEQ_PTR(_pattern_5982)->length;
    }
    else {
        _3145 = 1;
    }
    // SubProg is_match pc: 265 op: GREATER_IFW_I (124)
    if (_p_5984 <= _3145)
    goto L1; // [265] 32
    // SubProg is_match pc: 269 op: STARTLINE (58)

    /** wildcard.e:132				return f > length(string) */
    // SubProg is_match pc: 271 op: LENGTH (42)
    if (IS_SEQUENCE(_string_5983)){
            _3147 = SEQ_PTR(_string_5983)->length;
    }
    else {
        _3147 = 1;
    }
    // SubProg is_match pc: 274 op: GREATER (6)
    _3148 = (_f_5985 > _3147);
    _3147 = NOVALUE;
    // SubProg is_match pc: 278 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_5982
    DeRefDS(_pattern_5982);

// block var string_5983
    DeRefDS(_string_5983);

// block var p_5984

// block var f_5985

// block var t_5986

// block var match_string_5987
    DeRef(_match_string_5987);
    return _3148;
    // SubProg is_match pc: 282 op: NOP1 (159)
    // SubProg is_match pc: 283 op: STARTLINE (58)

    /** wildcard.e:134		end while*/
    // SubProg is_match pc: 285 op: ENDWHILE (22)
    goto L1; // [285] 32
    // SubProg is_match pc: 287 op: NOP1 (159)
L2: // addr: 288 pc: 287 sub: 5980 op: 159
    // SubProg is_match pc: 288 op: STARTLINE (58)

    /** wildcard.e:135		return 0*/
    // SubProg is_match pc: 290 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_5982
    DeRefDS(_pattern_5982);

// block var string_5983
    DeRefDS(_string_5983);

// block var p_5984

// block var f_5985

// block var t_5986

// block var match_string_5987
    DeRef(_match_string_5987);
    DeRef(_3148);
    _3148 = NOVALUE;
    return 0;
    // SubProg is_match pc: 294 op: BADRETURNF (43)
    ;
}



// 0xC99C6A3E
