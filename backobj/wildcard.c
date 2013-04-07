// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _12qmatch(object _p_2251, object _s_2252)
{
    object _k_2253 = NOVALUE;
// skipping _1003  name type: 0
// skipping _1002  name type: 0
    object _1001 = NOVALUE; // 2273 1001
    object _1000 = NOVALUE; // 2272 1000
    object _999 = NOVALUE; // 2271 999
    object _998 = NOVALUE; // 2270 998
    object _997 = NOVALUE; // 2269 997
    object _996 = NOVALUE; // 2268 996
    object _995 = NOVALUE; // 2266 995
    object _994 = NOVALUE; // 2263 994
    object _993 = NOVALUE; // 2262 993
    object _992 = NOVALUE; // 2261 992
    object _991 = NOVALUE; // 2260 991
    object _990 = NOVALUE; // 2257 990
// skipping _989  name type: 0
    object _988 = NOVALUE; // 2255 988
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg qmatch pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg qmatch pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg qmatch pc: 5 op: STARTLINE (58)

    /** wildcard.e:21		if not find('?', p) then*/
    // SubProg qmatch pc: 7 op: FIND_FROM (176)
    _988 = find_from(63, _p_2251, 1);
    // SubProg qmatch pc: 12 op: NOT_IFW (108)
    if (_988 != 0)
    goto L1; // [12] 27
    _988 = NOVALUE;
    // SubProg qmatch pc: 15 op: STARTLINE (58)

    /** wildcard.e:22			return match(p, s) -- fast*/
    // SubProg qmatch pc: 17 op: MATCH_FROM (177)
    _990 = e_match_from(_p_2251, _s_2252, 1);
    // SubProg qmatch pc: 22 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_2251
    DeRefDS(_p_2251);

// block var s_2252
    DeRefDS(_s_2252);

// block var k_2253
    return _990;
    // SubProg qmatch pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 2249 op: 159
    // SubProg qmatch pc: 27 op: STARTLINE (58)

    /** wildcard.e:25		for i = 1 to length(s) - length(p) + 1 do*/
    // SubProg qmatch pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_s_2252)){
            _991 = SEQ_PTR(_s_2252)->length;
    }
    else {
        _991 = 1;
    }
    // SubProg qmatch pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_p_2251)){
            _992 = SEQ_PTR(_p_2251)->length;
    }
    else {
        _992 = 1;
    }
    // SubProg qmatch pc: 35 op: MINUS (10)
    _993 = _991 - _992;
    _991 = NOVALUE;
    _992 = NOVALUE;
    // SubProg qmatch pc: 39 op: PLUS1 (93)
    _994 = _993 + 1;
    _993 = NOVALUE;
    // SubProg qmatch pc: 43 op: FOR (21)
    {
        object _i_2259;
        _i_2259 = 1;
L2: // addr: 50 pc: 43 sub: 2249 op: 21
        if (_i_2259 > _994){
            goto L3; // [43] 142
        }
        // SubProg qmatch pc: 50 op: STARTLINE (58)

        /** wildcard.e:26			k = i*/
        // SubProg qmatch pc: 52 op: ASSIGN (18)
        _k_2253 = _i_2259;
        // SubProg qmatch pc: 55 op: INTEGER_CHECK (96)
        // SubProg qmatch pc: 57 op: STARTLINE (58)

        /** wildcard.e:27			for j = 1 to length(p) do*/
        // SubProg qmatch pc: 59 op: LENGTH (42)
        if (IS_SEQUENCE(_p_2251)){
                _995 = SEQ_PTR(_p_2251)->length;
        }
        else {
            _995 = 1;
        }
        // SubProg qmatch pc: 62 op: FOR_I (125)
        {
            object _j_2265;
            _j_2265 = 1;
L4: // addr: 69 pc: 62 sub: 2249 op: 125
            if (_j_2265 > _995){
                goto L5; // [62] 122
            }
            // SubProg qmatch pc: 69 op: STARTLINE (58)

            /** wildcard.e:28				if p[j] != s[k] and p[j] != '?' then*/
            // SubProg qmatch pc: 71 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_p_2251);
            _996 = (object)*(((s1_ptr)_2)->base + _j_2265);
            // SubProg qmatch pc: 75 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_s_2252);
            _997 = (object)*(((s1_ptr)_2)->base + _k_2253);
            // SubProg qmatch pc: 79 op: NOTEQ (4)
            if (IS_ATOM_INT(_996) && IS_ATOM_INT(_997)) {
                _998 = (_996 != _997);
            }
            else {
                _998 = binary_op(NOTEQ, _996, _997);
            }
            _996 = NOVALUE;
            _997 = NOVALUE;
            // SubProg qmatch pc: 83 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_998)) {
                if (_998 == 0) {
                    goto L6; // [83] 109
                }
            }
            else {
                if (DBL_PTR(_998)->dbl == 0.0) {
                    goto L6; // [83] 109
                }
            }
            // SubProg qmatch pc: 87 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_p_2251);
            _1000 = (object)*(((s1_ptr)_2)->base + _j_2265);
            // SubProg qmatch pc: 91 op: NOTEQ (4)
            if (IS_ATOM_INT(_1000)) {
                _1001 = (_1000 != 63);
            }
            else {
                _1001 = binary_op(NOTEQ, _1000, 63);
            }
            _1000 = NOVALUE;
            // SubProg qmatch pc: 95 op: NOP1 (159)
            // SubProg qmatch pc: 96 op: IF (20)
            if (_1001 == 0) {
                DeRef(_1001);
                _1001 = NOVALUE;
                goto L6; // [96] 109
            }
            else {
                if (!IS_ATOM_INT(_1001) && DBL_PTR(_1001)->dbl == 0.0){
                    DeRef(_1001);
                    _1001 = NOVALUE;
                    goto L6; // [96] 109
                }
                DeRef(_1001);
                _1001 = NOVALUE;
            }
            DeRef(_1001);
            _1001 = NOVALUE;
            // SubProg qmatch pc: 99 op: STARTLINE (58)

            /** wildcard.e:29					k = 0*/
            // SubProg qmatch pc: 101 op: ASSIGN_I (113)
            _k_2253 = 0;
            // SubProg qmatch pc: 104 op: STARTLINE (58)

            /** wildcard.e:30					exit*/
            // SubProg qmatch pc: 106 op: EXIT (61)
            goto L5; // [106] 122
            // SubProg qmatch pc: 108 op: NOP1 (159)
L6: // addr: 109 pc: 108 sub: 2249 op: 159
            // SubProg qmatch pc: 109 op: STARTLINE (58)

            /** wildcard.e:32				k += 1*/
            // SubProg qmatch pc: 111 op: PLUS1_I (117)
            _k_2253 = _k_2253 + 1;
            // SubProg qmatch pc: 115 op: STARTLINE (58)

            /** wildcard.e:33			end for*/
            // SubProg qmatch pc: 117 op: ENDFOR_INT_UP1 (54)
            _j_2265 = _j_2265 + 1;
            goto L4; // [117] 69
L5: // addr: 122 pc: 117 sub: 2249 op: 54
            ;
        }
        // SubProg qmatch pc: 122 op: STARTLINE (58)

        /** wildcard.e:34			if k != 0 then*/
        // SubProg qmatch pc: 124 op: NOTEQ_IFW_I (122)
        if (_k_2253 == 0)
        goto L7; // [124] 135
        // SubProg qmatch pc: 128 op: STARTLINE (58)

        /** wildcard.e:35				return i*/
        // SubProg qmatch pc: 130 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_2251
        DeRefDS(_p_2251);

// block var s_2252
        DeRefDS(_s_2252);

// block var k_2253
        DeRef(_994);
        _994 = NOVALUE;
        DeRef(_998);
        _998 = NOVALUE;
        return _i_2259;
        // SubProg qmatch pc: 134 op: NOP1 (159)
L7: // addr: 135 pc: 134 sub: 2249 op: 159
        // SubProg qmatch pc: 135 op: STARTLINE (58)

        /** wildcard.e:37		end for*/
        // SubProg qmatch pc: 137 op: ENDFOR_INT_UP1 (54)
        _i_2259 = _i_2259 + 1;
        goto L2; // [137] 50
L3: // addr: 142 pc: 137 sub: 2249 op: 54
        ;
    }
    // SubProg qmatch pc: 142 op: STARTLINE (58)

    /** wildcard.e:38		return 0*/
    // SubProg qmatch pc: 144 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_2251
    DeRefDS(_p_2251);

// block var s_2252
    DeRefDS(_s_2252);

// block var k_2253
    DeRef(_994);
    _994 = NOVALUE;
    DeRef(_998);
    _998 = NOVALUE;
    return 0;
    // SubProg qmatch pc: 148 op: BADRETURNF (43)
    ;
}


object _12is_match(object _pattern_2280, object _string_2281)
{
    object _p_2282 = NOVALUE;
    object _f_2283 = NOVALUE;
    object _t_2284 = NOVALUE;
    object _match_string_2285 = NOVALUE;
    object _1044 = NOVALUE; // 2338 1044
    object _1043 = NOVALUE; // 2337 1043
// skipping _1042  name type: 0
    object _1041 = NOVALUE; // 2335 1041
// skipping _1040  name type: 0
// skipping _1039  name type: 0
// skipping _1038  name type: 0
    object _1037 = NOVALUE; // 2329 1037
    object _1036 = NOVALUE; // 2328 1036
    object _1035 = NOVALUE; // 2327 1035
// skipping _1034  name type: 0
// skipping _1033  name type: 0
    object _1032 = NOVALUE; // 2322 1032
    object _1031 = NOVALUE; // 2321 1031
// skipping _1030  name type: 0
// skipping _1029  name type: 0
    object _1028 = NOVALUE; // 2318 1028
// skipping _1027  name type: 0
// skipping _1026  name type: 0
    object _1025 = NOVALUE; // 2314 1025
// skipping _1024  name type: 0
    object _1023 = NOVALUE; // 2311 1023
// skipping _1022  name type: 0
    object _1021 = NOVALUE; // 2309 1021
// skipping _1020  name type: 0
    object _1019 = NOVALUE; // 2306 1019
// skipping _1018  name type: 0
// skipping _1017  name type: 0
    object _1016 = NOVALUE; // 2302 1016
// skipping _1015  name type: 0
    object _1013 = NOVALUE; // 2298 1013
// skipping _1012  name type: 0
    object _1011 = NOVALUE; // 2295 1011
    object _1010 = NOVALUE; // 2294 1010
    object _1009 = NOVALUE; // 2293 1009
    object _1008 = NOVALUE; // 2292 1008
// skipping _1007  name type: 0
    object _1006 = NOVALUE; // 2289 1006
// skipping _1005  name type: 0
// skipping _1004  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_match pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 5 op: STARTLINE (58)

    /** wildcard.e:95		pattern = pattern & END_MARKER*/
    // SubProg is_match pc: 7 op: CONCAT (15)
    Append(&_pattern_2280, _pattern_2280, -1);
    // SubProg is_match pc: 11 op: STARTLINE (58)

    /** wildcard.e:96		string = string & END_MARKER*/
    // SubProg is_match pc: 13 op: CONCAT (15)
    Append(&_string_2281, _string_2281, -1);
    // SubProg is_match pc: 17 op: STARTLINE (58)

    /** wildcard.e:97		p = 1*/
    // SubProg is_match pc: 19 op: ASSIGN_I (113)
    _p_2282 = 1;
    // SubProg is_match pc: 22 op: STARTLINE (58)

    /** wildcard.e:98		f = 1*/
    // SubProg is_match pc: 24 op: ASSIGN_I (113)
    _f_2283 = 1;
    // SubProg is_match pc: 27 op: STARTLINE (58)

    /** wildcard.e:99		while f <= length(string) do*/
    // SubProg is_match pc: 29 op: NOP2 (110)
    // SubProg is_match pc: 31 op: NOPWHILE (158)
L1: // addr: 32 pc: 31 sub: 2278 op: 158
    // SubProg is_match pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_string_2281)){
            _1006 = SEQ_PTR(_string_2281)->length;
    }
    else {
        _1006 = 1;
    }
    // SubProg is_match pc: 35 op: LESSEQ_IFW_I (123)
    if (_f_2283 > _1006)
    goto L2; // [35] 288
    // SubProg is_match pc: 39 op: STARTLINE (58)

    /** wildcard.e:100			if not find(pattern[p], {string[f], '?'}) then*/
    // SubProg is_match pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1008 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 45 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_2281);
    _1009 = (object)*(((s1_ptr)_2)->base + _f_2283);
    // SubProg is_match pc: 49 op: RIGHT_BRACE_2 (85)
    Ref(_1009);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _1009;
    ((intptr_t *)_2)[2] = 63;
    _1010 = MAKE_SEQ(_1);
    _1009 = NOVALUE;
    // SubProg is_match pc: 53 op: FIND_FROM (176)
    _1011 = find_from(_1008, _1010, 1);
    _1008 = NOVALUE;
    DeRefDS(_1010);
    _1010 = NOVALUE;
    // SubProg is_match pc: 58 op: NOT_IFW (108)
    if (_1011 != 0)
    goto L3; // [58] 248
    _1011 = NOVALUE;
    // SubProg is_match pc: 61 op: STARTLINE (58)

    /** wildcard.e:101				if pattern[p] = '*' then*/
    // SubProg is_match pc: 63 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1013 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 67 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1013, 42)){
        _1013 = NOVALUE;
        goto L4; // [67] 240
    }
    _1013 = NOVALUE;
    // SubProg is_match pc: 71 op: STARTLINE (58)

    /** wildcard.e:102					while pattern[p] = '*' do*/
    // SubProg is_match pc: 73 op: NOP2 (110)
    // SubProg is_match pc: 75 op: NOPWHILE (158)
L5: // addr: 76 pc: 75 sub: 2278 op: 158
    // SubProg is_match pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1016 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1016, 42)){
        _1016 = NOVALUE;
        goto L6; // [80] 95
    }
    _1016 = NOVALUE;
    // SubProg is_match pc: 84 op: STARTLINE (58)

    /** wildcard.e:103						p += 1*/
    // SubProg is_match pc: 86 op: PLUS1_I (117)
    _p_2282 = _p_2282 + 1;
    // SubProg is_match pc: 90 op: STARTLINE (58)

    /** wildcard.e:104					end while*/
    // SubProg is_match pc: 92 op: ENDWHILE (22)
    goto L5; // [92] 76
    // SubProg is_match pc: 94 op: NOP1 (159)
L6: // addr: 95 pc: 94 sub: 2278 op: 159
    // SubProg is_match pc: 95 op: STARTLINE (58)

    /** wildcard.e:105					if pattern[p] = END_MARKER then*/
    // SubProg is_match pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1019 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 101 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1019, -1)){
        _1019 = NOVALUE;
        goto L7; // [101] 112
    }
    _1019 = NOVALUE;
    // SubProg is_match pc: 105 op: STARTLINE (58)

    /** wildcard.e:106						return 1*/
    // SubProg is_match pc: 107 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_2280
    DeRefDS(_pattern_2280);

// block var string_2281
    DeRefDS(_string_2281);

// block var p_2282

// block var f_2283

// block var t_2284

// block var match_string_2285
    DeRef(_match_string_2285);
    return 1;
    // SubProg is_match pc: 111 op: NOP1 (159)
L7: // addr: 112 pc: 111 sub: 2278 op: 159
    // SubProg is_match pc: 112 op: STARTLINE (58)

    /** wildcard.e:108					match_string = ""*/
    // SubProg is_match pc: 114 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_match_string_2285);
    _match_string_2285 = _5;
    // SubProg is_match pc: 117 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 119 op: STARTLINE (58)

    /** wildcard.e:109					while pattern[p] != '*' do*/
    // SubProg is_match pc: 121 op: NOP2 (110)
    // SubProg is_match pc: 123 op: NOPWHILE (158)
L8: // addr: 124 pc: 123 sub: 2278 op: 158
    // SubProg is_match pc: 124 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1021 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 128 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _1021, 42)){
        _1021 = NOVALUE;
        goto L9; // [128] 168
    }
    _1021 = NOVALUE;
    // SubProg is_match pc: 132 op: STARTLINE (58)

    /** wildcard.e:110						match_string = match_string & pattern[p]*/
    // SubProg is_match pc: 134 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1023 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 138 op: CONCAT (15)
    if (IS_SEQUENCE(_match_string_2285) && IS_ATOM(_1023)) {
        Ref(_1023);
        Append(&_match_string_2285, _match_string_2285, _1023);
    }
    else if (IS_ATOM(_match_string_2285) && IS_SEQUENCE(_1023)) {
    }
    else {
        Concat((object_ptr)&_match_string_2285, _match_string_2285, _1023);
    }
    _1023 = NOVALUE;
    // SubProg is_match pc: 142 op: STARTLINE (58)

    /** wildcard.e:111						if pattern[p] = END_MARKER then*/
    // SubProg is_match pc: 144 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1025 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 148 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1025, -1)){
        _1025 = NOVALUE;
        goto LA; // [148] 157
    }
    _1025 = NOVALUE;
    // SubProg is_match pc: 152 op: STARTLINE (58)

    /** wildcard.e:112							exit*/
    // SubProg is_match pc: 154 op: EXIT (61)
    goto L9; // [154] 168
    // SubProg is_match pc: 156 op: NOP1 (159)
LA: // addr: 157 pc: 156 sub: 2278 op: 159
    // SubProg is_match pc: 157 op: STARTLINE (58)

    /** wildcard.e:114						p += 1*/
    // SubProg is_match pc: 159 op: PLUS1_I (117)
    _p_2282 = _p_2282 + 1;
    // SubProg is_match pc: 163 op: STARTLINE (58)

    /** wildcard.e:115					end while*/
    // SubProg is_match pc: 165 op: ENDWHILE (22)
    goto L8; // [165] 124
    // SubProg is_match pc: 167 op: NOP1 (159)
L9: // addr: 168 pc: 167 sub: 2278 op: 159
    // SubProg is_match pc: 168 op: STARTLINE (58)

    /** wildcard.e:116					if pattern[p] = '*' then*/
    // SubProg is_match pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_2280);
    _1028 = (object)*(((s1_ptr)_2)->base + _p_2282);
    // SubProg is_match pc: 174 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _1028, 42)){
        _1028 = NOVALUE;
        goto LB; // [174] 185
    }
    _1028 = NOVALUE;
    // SubProg is_match pc: 178 op: STARTLINE (58)

    /** wildcard.e:117						p -= 1*/
    // SubProg is_match pc: 180 op: MINUS_I (116)
    _p_2282 = _p_2282 - 1;
    // SubProg is_match pc: 184 op: NOP1 (159)
LB: // addr: 185 pc: 184 sub: 2278 op: 159
    // SubProg is_match pc: 185 op: STARTLINE (58)

    /** wildcard.e:119					t = qmatch(match_string, string[f..$])*/
    // SubProg is_match pc: 187 op: LENGTH (42)
    if (IS_SEQUENCE(_string_2281)){
            _1031 = SEQ_PTR(_string_2281)->length;
    }
    else {
        _1031 = 1;
    }
    // SubProg is_match pc: 190 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_1032;
    RHS_Slice(_string_2281, _f_2283, _1031);
    // SubProg is_match pc: 195 op: PROC (27)
    RefDS(_match_string_2285);
    _t_2284 = _12qmatch(_match_string_2285, _1032);
    _1032 = NOVALUE;
    // SubProg is_match pc: 200 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t_2284)) {
        _1 = (object)(DBL_PTR(_t_2284)->dbl);
        DeRefDS(_t_2284);
        _t_2284 = _1;
    }
    // SubProg is_match pc: 202 op: STARTLINE (58)

    /** wildcard.e:120					if t = 0 then*/
    // SubProg is_match pc: 204 op: EQUALS_IFW_I (121)
    if (_t_2284 != 0)
    goto LC; // [204] 217
    // SubProg is_match pc: 208 op: STARTLINE (58)

    /** wildcard.e:121						return 0*/
    // SubProg is_match pc: 210 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_2280
    DeRefDS(_pattern_2280);

// block var string_2281
    DeRefDS(_string_2281);

// block var p_2282

// block var f_2283

// block var t_2284

// block var match_string_2285
    DeRefDS(_match_string_2285);
    return 0;
    // SubProg is_match pc: 214 op: ELSE (23)
    goto LD; // [214] 247
    // SubProg is_match pc: 216 op: NOP1 (159)
LC: // addr: 217 pc: 216 sub: 2278 op: 159
    // SubProg is_match pc: 217 op: STARTLINE (58)

    /** wildcard.e:123						f += t + length(match_string) - 2*/
    // SubProg is_match pc: 219 op: LENGTH (42)
    if (IS_SEQUENCE(_match_string_2285)){
            _1035 = SEQ_PTR(_match_string_2285)->length;
    }
    else {
        _1035 = 1;
    }
    // SubProg is_match pc: 222 op: PLUS (11)
    _1036 = _t_2284 + _1035;
    if ((object)((uintptr_t)_1036 + (uintptr_t)HIGH_BITS) >= 0){
        _1036 = NewDouble((eudouble)_1036);
    }
    _1035 = NOVALUE;
    // SubProg is_match pc: 226 op: MINUS (10)
    if (IS_ATOM_INT(_1036)) {
        _1037 = _1036 - 2;
        if ((object)((uintptr_t)_1037 +(uintptr_t) HIGH_BITS) >= 0){
            _1037 = NewDouble((eudouble)_1037);
        }
    }
    else {
        _1037 = NewDouble(DBL_PTR(_1036)->dbl - (eudouble)2);
    }
    DeRef(_1036);
    _1036 = NOVALUE;
    // SubProg is_match pc: 230 op: PLUS (11)
    if (IS_ATOM_INT(_1037)) {
        _f_2283 = _f_2283 + _1037;
    }
    else {
        _f_2283 = NewDouble((eudouble)_f_2283 + DBL_PTR(_1037)->dbl);
    }
    DeRef(_1037);
    _1037 = NOVALUE;
    // SubProg is_match pc: 234 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_f_2283)) {
        _1 = (object)(DBL_PTR(_f_2283)->dbl);
        DeRefDS(_f_2283);
        _f_2283 = _1;
    }
    // SubProg is_match pc: 236 op: NOP1 (159)
    // SubProg is_match pc: 237 op: ELSE (23)
    goto LD; // [237] 247
    // SubProg is_match pc: 239 op: NOP1 (159)
L4: // addr: 240 pc: 239 sub: 2278 op: 159
    // SubProg is_match pc: 240 op: STARTLINE (58)

    /** wildcard.e:126					return 0*/
    // SubProg is_match pc: 242 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_2280
    DeRefDS(_pattern_2280);

// block var string_2281
    DeRefDS(_string_2281);

// block var p_2282

// block var f_2283

// block var t_2284

// block var match_string_2285
    DeRef(_match_string_2285);
    return 0;
    // SubProg is_match pc: 246 op: NOP1 (159)
LD: // addr: 247 pc: 246 sub: 2278 op: 159
    // SubProg is_match pc: 247 op: NOP1 (159)
L3: // addr: 248 pc: 247 sub: 2278 op: 159
    // SubProg is_match pc: 248 op: STARTLINE (58)

    /** wildcard.e:129			p += 1*/
    // SubProg is_match pc: 250 op: PLUS1_I (117)
    _p_2282 = _p_2282 + 1;
    // SubProg is_match pc: 254 op: STARTLINE (58)

    /** wildcard.e:130			f += 1*/
    // SubProg is_match pc: 256 op: PLUS1_I (117)
    _f_2283 = _f_2283 + 1;
    // SubProg is_match pc: 260 op: STARTLINE (58)

    /** wildcard.e:131			if p > length(pattern) then*/
    // SubProg is_match pc: 262 op: LENGTH (42)
    if (IS_SEQUENCE(_pattern_2280)){
            _1041 = SEQ_PTR(_pattern_2280)->length;
    }
    else {
        _1041 = 1;
    }
    // SubProg is_match pc: 265 op: GREATER_IFW_I (124)
    if (_p_2282 <= _1041)
    goto L1; // [265] 32
    // SubProg is_match pc: 269 op: STARTLINE (58)

    /** wildcard.e:132				return f > length(string) */
    // SubProg is_match pc: 271 op: LENGTH (42)
    if (IS_SEQUENCE(_string_2281)){
            _1043 = SEQ_PTR(_string_2281)->length;
    }
    else {
        _1043 = 1;
    }
    // SubProg is_match pc: 274 op: GREATER (6)
    _1044 = (_f_2283 > _1043);
    _1043 = NOVALUE;
    // SubProg is_match pc: 278 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_2280
    DeRefDS(_pattern_2280);

// block var string_2281
    DeRefDS(_string_2281);

// block var p_2282

// block var f_2283

// block var t_2284

// block var match_string_2285
    DeRef(_match_string_2285);
    return _1044;
    // SubProg is_match pc: 282 op: NOP1 (159)
    // SubProg is_match pc: 283 op: STARTLINE (58)

    /** wildcard.e:134		end while*/
    // SubProg is_match pc: 285 op: ENDWHILE (22)
    goto L1; // [285] 32
    // SubProg is_match pc: 287 op: NOP1 (159)
L2: // addr: 288 pc: 287 sub: 2278 op: 159
    // SubProg is_match pc: 288 op: STARTLINE (58)

    /** wildcard.e:135		return 0*/
    // SubProg is_match pc: 290 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_2280
    DeRefDS(_pattern_2280);

// block var string_2281
    DeRefDS(_string_2281);

// block var p_2282

// block var f_2283

// block var t_2284

// block var match_string_2285
    DeRef(_match_string_2285);
    DeRef(_1044);
    _1044 = NOVALUE;
    return 0;
    // SubProg is_match pc: 294 op: BADRETURNF (43)
    ;
}



// 0xE4EC5E2B
