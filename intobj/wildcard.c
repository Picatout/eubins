// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _4qmatch(object _p_264, object _s_265)
{
    object _k_266 = NOVALUE;
// skipping _47  name type: 0
// skipping _46  name type: 0
    object _45 = NOVALUE; // 287 45
    object _44 = NOVALUE; // 286 44
    object _43 = NOVALUE; // 285 43
    object _42 = NOVALUE; // 284 42
    object _41 = NOVALUE; // 283 41
    object _40 = NOVALUE; // 282 40
    object _39 = NOVALUE; // 280 39
    object _38 = NOVALUE; // 277 38
    object _37 = NOVALUE; // 276 37
    object _36 = NOVALUE; // 275 36
    object _35 = NOVALUE; // 274 35
    object _34 = NOVALUE; // 271 34
// skipping _33  name type: 0
    object _32 = NOVALUE; // 269 32
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg qmatch pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg qmatch pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg qmatch pc: 5 op: STARTLINE (58)

    /** wildcard.e:21		if not find('?', p) then*/
    // SubProg qmatch pc: 7 op: FIND_FROM (176)
    _32 = find_from(63, _p_264, 1);
    // SubProg qmatch pc: 12 op: NOT_IFW (108)
    if (_32 != 0)
    goto L1; // [12] 27
    _32 = NOVALUE;
    // SubProg qmatch pc: 15 op: STARTLINE (58)

    /** wildcard.e:22			return match(p, s) -- fast*/
    // SubProg qmatch pc: 17 op: MATCH_FROM (177)
    _34 = e_match_from(_p_264, _s_265, 1);
    // SubProg qmatch pc: 22 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_264
    DeRefDS(_p_264);

// block var s_265
    DeRefDS(_s_265);

// block var k_266
    return _34;
    // SubProg qmatch pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 262 op: 159
    // SubProg qmatch pc: 27 op: STARTLINE (58)

    /** wildcard.e:25		for i = 1 to length(s) - length(p) + 1 do*/
    // SubProg qmatch pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_s_265)){
            _35 = SEQ_PTR(_s_265)->length;
    }
    else {
        _35 = 1;
    }
    // SubProg qmatch pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_p_264)){
            _36 = SEQ_PTR(_p_264)->length;
    }
    else {
        _36 = 1;
    }
    // SubProg qmatch pc: 35 op: MINUS (10)
    _37 = _35 - _36;
    _35 = NOVALUE;
    _36 = NOVALUE;
    // SubProg qmatch pc: 39 op: PLUS1 (93)
    _38 = _37 + 1;
    _37 = NOVALUE;
    // SubProg qmatch pc: 43 op: FOR (21)
    {
        object _i_273;
        _i_273 = 1;
L2: // addr: 50 pc: 43 sub: 262 op: 21
        if (_i_273 > _38){
            goto L3; // [43] 142
        }
        // SubProg qmatch pc: 50 op: STARTLINE (58)

        /** wildcard.e:26			k = i*/
        // SubProg qmatch pc: 52 op: ASSIGN (18)
        _k_266 = _i_273;
        // SubProg qmatch pc: 55 op: INTEGER_CHECK (96)
        // SubProg qmatch pc: 57 op: STARTLINE (58)

        /** wildcard.e:27			for j = 1 to length(p) do*/
        // SubProg qmatch pc: 59 op: LENGTH (42)
        if (IS_SEQUENCE(_p_264)){
                _39 = SEQ_PTR(_p_264)->length;
        }
        else {
            _39 = 1;
        }
        // SubProg qmatch pc: 62 op: FOR_I (125)
        {
            object _j_279;
            _j_279 = 1;
L4: // addr: 69 pc: 62 sub: 262 op: 125
            if (_j_279 > _39){
                goto L5; // [62] 122
            }
            // SubProg qmatch pc: 69 op: STARTLINE (58)

            /** wildcard.e:28				if p[j] != s[k] and p[j] != '?' then*/
            // SubProg qmatch pc: 71 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_p_264);
            _40 = (object)*(((s1_ptr)_2)->base + _j_279);
            // SubProg qmatch pc: 75 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_s_265);
            _41 = (object)*(((s1_ptr)_2)->base + _k_266);
            // SubProg qmatch pc: 79 op: NOTEQ (4)
            if (IS_ATOM_INT(_40) && IS_ATOM_INT(_41)) {
                _42 = (_40 != _41);
            }
            else {
                _42 = binary_op(NOTEQ, _40, _41);
            }
            _40 = NOVALUE;
            _41 = NOVALUE;
            // SubProg qmatch pc: 83 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_42)) {
                if (_42 == 0) {
                    goto L6; // [83] 109
                }
            }
            else {
                if (DBL_PTR(_42)->dbl == 0.0) {
                    goto L6; // [83] 109
                }
            }
            // SubProg qmatch pc: 87 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_p_264);
            _44 = (object)*(((s1_ptr)_2)->base + _j_279);
            // SubProg qmatch pc: 91 op: NOTEQ (4)
            if (IS_ATOM_INT(_44)) {
                _45 = (_44 != 63);
            }
            else {
                _45 = binary_op(NOTEQ, _44, 63);
            }
            _44 = NOVALUE;
            // SubProg qmatch pc: 95 op: NOP1 (159)
            // SubProg qmatch pc: 96 op: IF (20)
            if (_45 == 0) {
                DeRef(_45);
                _45 = NOVALUE;
                goto L6; // [96] 109
            }
            else {
                if (!IS_ATOM_INT(_45) && DBL_PTR(_45)->dbl == 0.0){
                    DeRef(_45);
                    _45 = NOVALUE;
                    goto L6; // [96] 109
                }
                DeRef(_45);
                _45 = NOVALUE;
            }
            DeRef(_45);
            _45 = NOVALUE;
            // SubProg qmatch pc: 99 op: STARTLINE (58)

            /** wildcard.e:29					k = 0*/
            // SubProg qmatch pc: 101 op: ASSIGN_I (113)
            _k_266 = 0;
            // SubProg qmatch pc: 104 op: STARTLINE (58)

            /** wildcard.e:30					exit*/
            // SubProg qmatch pc: 106 op: EXIT (61)
            goto L5; // [106] 122
            // SubProg qmatch pc: 108 op: NOP1 (159)
L6: // addr: 109 pc: 108 sub: 262 op: 159
            // SubProg qmatch pc: 109 op: STARTLINE (58)

            /** wildcard.e:32				k += 1*/
            // SubProg qmatch pc: 111 op: PLUS1_I (117)
            _k_266 = _k_266 + 1;
            // SubProg qmatch pc: 115 op: STARTLINE (58)

            /** wildcard.e:33			end for*/
            // SubProg qmatch pc: 117 op: ENDFOR_INT_UP1 (54)
            _j_279 = _j_279 + 1;
            goto L4; // [117] 69
L5: // addr: 122 pc: 117 sub: 262 op: 54
            ;
        }
        // SubProg qmatch pc: 122 op: STARTLINE (58)

        /** wildcard.e:34			if k != 0 then*/
        // SubProg qmatch pc: 124 op: NOTEQ_IFW_I (122)
        if (_k_266 == 0)
        goto L7; // [124] 135
        // SubProg qmatch pc: 128 op: STARTLINE (58)

        /** wildcard.e:35				return i*/
        // SubProg qmatch pc: 130 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_264
        DeRefDS(_p_264);

// block var s_265
        DeRefDS(_s_265);

// block var k_266
        DeRef(_38);
        _38 = NOVALUE;
        DeRef(_42);
        _42 = NOVALUE;
        return _i_273;
        // SubProg qmatch pc: 134 op: NOP1 (159)
L7: // addr: 135 pc: 134 sub: 262 op: 159
        // SubProg qmatch pc: 135 op: STARTLINE (58)

        /** wildcard.e:37		end for*/
        // SubProg qmatch pc: 137 op: ENDFOR_INT_UP1 (54)
        _i_273 = _i_273 + 1;
        goto L2; // [137] 50
L3: // addr: 142 pc: 137 sub: 262 op: 54
        ;
    }
    // SubProg qmatch pc: 142 op: STARTLINE (58)

    /** wildcard.e:38		return 0*/
    // SubProg qmatch pc: 144 op: RETURNF (28)

// Exiting block BLOCK: qmatch

// block var p_264
    DeRefDS(_p_264);

// block var s_265
    DeRefDS(_s_265);

// block var k_266
    DeRef(_38);
    _38 = NOVALUE;
    DeRef(_42);
    _42 = NOVALUE;
    return 0;
    // SubProg qmatch pc: 148 op: BADRETURNF (43)
    ;
}


object _4is_match(object _pattern_294, object _string_295)
{
    object _p_296 = NOVALUE;
    object _f_297 = NOVALUE;
    object _t_298 = NOVALUE;
    object _match_string_299 = NOVALUE;
    object _89 = NOVALUE; // 353 89
    object _88 = NOVALUE; // 352 88
// skipping _87  name type: 0
    object _86 = NOVALUE; // 350 86
// skipping _85  name type: 0
// skipping _84  name type: 0
// skipping _83  name type: 0
    object _82 = NOVALUE; // 344 82
    object _80 = NOVALUE; // 342 80
    object _79 = NOVALUE; // 341 79
// skipping _78  name type: 0
// skipping _77  name type: 0
    object _76 = NOVALUE; // 336 76
    object _75 = NOVALUE; // 335 75
// skipping _74  name type: 0
// skipping _73  name type: 0
    object _72 = NOVALUE; // 332 72
// skipping _71  name type: 0
// skipping _70  name type: 0
    object _69 = NOVALUE; // 328 69
// skipping _68  name type: 0
    object _67 = NOVALUE; // 325 67
// skipping _66  name type: 0
    object _65 = NOVALUE; // 323 65
// skipping _64  name type: 0
    object _63 = NOVALUE; // 320 63
// skipping _62  name type: 0
// skipping _61  name type: 0
    object _60 = NOVALUE; // 316 60
// skipping _59  name type: 0
    object _57 = NOVALUE; // 312 57
// skipping _56  name type: 0
    object _55 = NOVALUE; // 309 55
    object _54 = NOVALUE; // 308 54
    object _53 = NOVALUE; // 307 53
    object _52 = NOVALUE; // 306 52
// skipping _51  name type: 0
    object _50 = NOVALUE; // 303 50
// skipping _49  name type: 0
// skipping _48  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_match pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 5 op: STARTLINE (58)

    /** wildcard.e:95		pattern = pattern & END_MARKER*/
    // SubProg is_match pc: 7 op: CONCAT (15)
    Append(&_pattern_294, _pattern_294, -1);
    // SubProg is_match pc: 11 op: STARTLINE (58)

    /** wildcard.e:96		string = string & END_MARKER*/
    // SubProg is_match pc: 13 op: CONCAT (15)
    Append(&_string_295, _string_295, -1);
    // SubProg is_match pc: 17 op: STARTLINE (58)

    /** wildcard.e:97		p = 1*/
    // SubProg is_match pc: 19 op: ASSIGN_I (113)
    _p_296 = 1;
    // SubProg is_match pc: 22 op: STARTLINE (58)

    /** wildcard.e:98		f = 1*/
    // SubProg is_match pc: 24 op: ASSIGN_I (113)
    _f_297 = 1;
    // SubProg is_match pc: 27 op: STARTLINE (58)

    /** wildcard.e:99		while f <= length(string) do*/
    // SubProg is_match pc: 29 op: NOP2 (110)
    // SubProg is_match pc: 31 op: NOPWHILE (158)
L1: // addr: 32 pc: 31 sub: 292 op: 158
    // SubProg is_match pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_string_295)){
            _50 = SEQ_PTR(_string_295)->length;
    }
    else {
        _50 = 1;
    }
    // SubProg is_match pc: 35 op: LESSEQ_IFW_I (123)
    if (_f_297 > _50)
    goto L2; // [35] 288
    // SubProg is_match pc: 39 op: STARTLINE (58)

    /** wildcard.e:100			if not find(pattern[p], {string[f], '?'}) then*/
    // SubProg is_match pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _52 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 45 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_295);
    _53 = (object)*(((s1_ptr)_2)->base + _f_297);
    // SubProg is_match pc: 49 op: RIGHT_BRACE_2 (85)
    Ref(_53);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _53;
    ((intptr_t *)_2)[2] = 63;
    _54 = MAKE_SEQ(_1);
    _53 = NOVALUE;
    // SubProg is_match pc: 53 op: FIND_FROM (176)
    _55 = find_from(_52, _54, 1);
    _52 = NOVALUE;
    DeRefDS(_54);
    _54 = NOVALUE;
    // SubProg is_match pc: 58 op: NOT_IFW (108)
    if (_55 != 0)
    goto L3; // [58] 248
    _55 = NOVALUE;
    // SubProg is_match pc: 61 op: STARTLINE (58)

    /** wildcard.e:101				if pattern[p] = '*' then*/
    // SubProg is_match pc: 63 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _57 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 67 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _57, 42)){
        _57 = NOVALUE;
        goto L4; // [67] 240
    }
    _57 = NOVALUE;
    // SubProg is_match pc: 71 op: STARTLINE (58)

    /** wildcard.e:102					while pattern[p] = '*' do*/
    // SubProg is_match pc: 73 op: NOP2 (110)
    // SubProg is_match pc: 75 op: NOPWHILE (158)
L5: // addr: 76 pc: 75 sub: 292 op: 158
    // SubProg is_match pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _60 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _60, 42)){
        _60 = NOVALUE;
        goto L6; // [80] 95
    }
    _60 = NOVALUE;
    // SubProg is_match pc: 84 op: STARTLINE (58)

    /** wildcard.e:103						p += 1*/
    // SubProg is_match pc: 86 op: PLUS1_I (117)
    _p_296 = _p_296 + 1;
    // SubProg is_match pc: 90 op: STARTLINE (58)

    /** wildcard.e:104					end while*/
    // SubProg is_match pc: 92 op: ENDWHILE (22)
    goto L5; // [92] 76
    // SubProg is_match pc: 94 op: NOP1 (159)
L6: // addr: 95 pc: 94 sub: 292 op: 159
    // SubProg is_match pc: 95 op: STARTLINE (58)

    /** wildcard.e:105					if pattern[p] = END_MARKER then*/
    // SubProg is_match pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _63 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 101 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _63, -1)){
        _63 = NOVALUE;
        goto L7; // [101] 112
    }
    _63 = NOVALUE;
    // SubProg is_match pc: 105 op: STARTLINE (58)

    /** wildcard.e:106						return 1*/
    // SubProg is_match pc: 107 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_294
    DeRefDS(_pattern_294);

// block var string_295
    DeRefDS(_string_295);

// block var p_296

// block var f_297

// block var t_298

// block var match_string_299
    DeRef(_match_string_299);
    return 1;
    // SubProg is_match pc: 111 op: NOP1 (159)
L7: // addr: 112 pc: 111 sub: 292 op: 159
    // SubProg is_match pc: 112 op: STARTLINE (58)

    /** wildcard.e:108					match_string = ""*/
    // SubProg is_match pc: 114 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_match_string_299);
    _match_string_299 = _5;
    // SubProg is_match pc: 117 op: SEQUENCE_CHECK (97)
    // SubProg is_match pc: 119 op: STARTLINE (58)

    /** wildcard.e:109					while pattern[p] != '*' do*/
    // SubProg is_match pc: 121 op: NOP2 (110)
    // SubProg is_match pc: 123 op: NOPWHILE (158)
L8: // addr: 124 pc: 123 sub: 292 op: 158
    // SubProg is_match pc: 124 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _65 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 128 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _65, 42)){
        _65 = NOVALUE;
        goto L9; // [128] 168
    }
    _65 = NOVALUE;
    // SubProg is_match pc: 132 op: STARTLINE (58)

    /** wildcard.e:110						match_string = match_string & pattern[p]*/
    // SubProg is_match pc: 134 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _67 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 138 op: CONCAT (15)
    if (IS_SEQUENCE(_match_string_299) && IS_ATOM(_67)) {
        Ref(_67);
        Append(&_match_string_299, _match_string_299, _67);
    }
    else if (IS_ATOM(_match_string_299) && IS_SEQUENCE(_67)) {
    }
    else {
        Concat((object_ptr)&_match_string_299, _match_string_299, _67);
    }
    _67 = NOVALUE;
    // SubProg is_match pc: 142 op: STARTLINE (58)

    /** wildcard.e:111						if pattern[p] = END_MARKER then*/
    // SubProg is_match pc: 144 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _69 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 148 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _69, -1)){
        _69 = NOVALUE;
        goto LA; // [148] 157
    }
    _69 = NOVALUE;
    // SubProg is_match pc: 152 op: STARTLINE (58)

    /** wildcard.e:112							exit*/
    // SubProg is_match pc: 154 op: EXIT (61)
    goto L9; // [154] 168
    // SubProg is_match pc: 156 op: NOP1 (159)
LA: // addr: 157 pc: 156 sub: 292 op: 159
    // SubProg is_match pc: 157 op: STARTLINE (58)

    /** wildcard.e:114						p += 1*/
    // SubProg is_match pc: 159 op: PLUS1_I (117)
    _p_296 = _p_296 + 1;
    // SubProg is_match pc: 163 op: STARTLINE (58)

    /** wildcard.e:115					end while*/
    // SubProg is_match pc: 165 op: ENDWHILE (22)
    goto L8; // [165] 124
    // SubProg is_match pc: 167 op: NOP1 (159)
L9: // addr: 168 pc: 167 sub: 292 op: 159
    // SubProg is_match pc: 168 op: STARTLINE (58)

    /** wildcard.e:116					if pattern[p] = '*' then*/
    // SubProg is_match pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pattern_294);
    _72 = (object)*(((s1_ptr)_2)->base + _p_296);
    // SubProg is_match pc: 174 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _72, 42)){
        _72 = NOVALUE;
        goto LB; // [174] 185
    }
    _72 = NOVALUE;
    // SubProg is_match pc: 178 op: STARTLINE (58)

    /** wildcard.e:117						p -= 1*/
    // SubProg is_match pc: 180 op: MINUS_I (116)
    _p_296 = _p_296 - 1;
    // SubProg is_match pc: 184 op: NOP1 (159)
LB: // addr: 185 pc: 184 sub: 292 op: 159
    // SubProg is_match pc: 185 op: STARTLINE (58)

    /** wildcard.e:119					t = qmatch(match_string, string[f..$])*/
    // SubProg is_match pc: 187 op: LENGTH (42)
    if (IS_SEQUENCE(_string_295)){
            _75 = SEQ_PTR(_string_295)->length;
    }
    else {
        _75 = 1;
    }
    // SubProg is_match pc: 190 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_76;
    RHS_Slice(_string_295, _f_297, _75);
    // SubProg is_match pc: 195 op: PROC (27)
    RefDS(_match_string_299);
    _t_298 = _4qmatch(_match_string_299, _76);
    _76 = NOVALUE;
    // SubProg is_match pc: 200 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t_298)) {
        _1 = (object)(DBL_PTR(_t_298)->dbl);
        DeRefDS(_t_298);
        _t_298 = _1;
    }
    // SubProg is_match pc: 202 op: STARTLINE (58)

    /** wildcard.e:120					if t = 0 then*/
    // SubProg is_match pc: 204 op: EQUALS_IFW_I (121)
    if (_t_298 != 0)
    goto LC; // [204] 217
    // SubProg is_match pc: 208 op: STARTLINE (58)

    /** wildcard.e:121						return 0*/
    // SubProg is_match pc: 210 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_294
    DeRefDS(_pattern_294);

// block var string_295
    DeRefDS(_string_295);

// block var p_296

// block var f_297

// block var t_298

// block var match_string_299
    DeRefDS(_match_string_299);
    return 0;
    // SubProg is_match pc: 214 op: ELSE (23)
    goto LD; // [214] 247
    // SubProg is_match pc: 216 op: NOP1 (159)
LC: // addr: 217 pc: 216 sub: 292 op: 159
    // SubProg is_match pc: 217 op: STARTLINE (58)

    /** wildcard.e:123						f += t + length(match_string) - 2*/
    // SubProg is_match pc: 219 op: LENGTH (42)
    if (IS_SEQUENCE(_match_string_299)){
            _79 = SEQ_PTR(_match_string_299)->length;
    }
    else {
        _79 = 1;
    }
    // SubProg is_match pc: 222 op: PLUS (11)
    _80 = _t_298 + _79;
    if ((object)((uintptr_t)_80 + (uintptr_t)HIGH_BITS) >= 0){
        _80 = NewDouble((eudouble)_80);
    }
    _79 = NOVALUE;
    // SubProg is_match pc: 226 op: MINUS (10)
    if (IS_ATOM_INT(_80)) {
        _82 = _80 - 2;
        if ((object)((uintptr_t)_82 +(uintptr_t) HIGH_BITS) >= 0){
            _82 = NewDouble((eudouble)_82);
        }
    }
    else {
        _82 = NewDouble(DBL_PTR(_80)->dbl - (eudouble)2);
    }
    DeRef(_80);
    _80 = NOVALUE;
    // SubProg is_match pc: 230 op: PLUS (11)
    if (IS_ATOM_INT(_82)) {
        _f_297 = _f_297 + _82;
    }
    else {
        _f_297 = NewDouble((eudouble)_f_297 + DBL_PTR(_82)->dbl);
    }
    DeRef(_82);
    _82 = NOVALUE;
    // SubProg is_match pc: 234 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_f_297)) {
        _1 = (object)(DBL_PTR(_f_297)->dbl);
        DeRefDS(_f_297);
        _f_297 = _1;
    }
    // SubProg is_match pc: 236 op: NOP1 (159)
    // SubProg is_match pc: 237 op: ELSE (23)
    goto LD; // [237] 247
    // SubProg is_match pc: 239 op: NOP1 (159)
L4: // addr: 240 pc: 239 sub: 292 op: 159
    // SubProg is_match pc: 240 op: STARTLINE (58)

    /** wildcard.e:126					return 0*/
    // SubProg is_match pc: 242 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_294
    DeRefDS(_pattern_294);

// block var string_295
    DeRefDS(_string_295);

// block var p_296

// block var f_297

// block var t_298

// block var match_string_299
    DeRef(_match_string_299);
    return 0;
    // SubProg is_match pc: 246 op: NOP1 (159)
LD: // addr: 247 pc: 246 sub: 292 op: 159
    // SubProg is_match pc: 247 op: NOP1 (159)
L3: // addr: 248 pc: 247 sub: 292 op: 159
    // SubProg is_match pc: 248 op: STARTLINE (58)

    /** wildcard.e:129			p += 1*/
    // SubProg is_match pc: 250 op: PLUS1_I (117)
    _p_296 = _p_296 + 1;
    // SubProg is_match pc: 254 op: STARTLINE (58)

    /** wildcard.e:130			f += 1*/
    // SubProg is_match pc: 256 op: PLUS1_I (117)
    _f_297 = _f_297 + 1;
    // SubProg is_match pc: 260 op: STARTLINE (58)

    /** wildcard.e:131			if p > length(pattern) then*/
    // SubProg is_match pc: 262 op: LENGTH (42)
    if (IS_SEQUENCE(_pattern_294)){
            _86 = SEQ_PTR(_pattern_294)->length;
    }
    else {
        _86 = 1;
    }
    // SubProg is_match pc: 265 op: GREATER_IFW_I (124)
    if (_p_296 <= _86)
    goto L1; // [265] 32
    // SubProg is_match pc: 269 op: STARTLINE (58)

    /** wildcard.e:132				return f > length(string) */
    // SubProg is_match pc: 271 op: LENGTH (42)
    if (IS_SEQUENCE(_string_295)){
            _88 = SEQ_PTR(_string_295)->length;
    }
    else {
        _88 = 1;
    }
    // SubProg is_match pc: 274 op: GREATER (6)
    _89 = (_f_297 > _88);
    _88 = NOVALUE;
    // SubProg is_match pc: 278 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_294
    DeRefDS(_pattern_294);

// block var string_295
    DeRefDS(_string_295);

// block var p_296

// block var f_297

// block var t_298

// block var match_string_299
    DeRef(_match_string_299);
    return _89;
    // SubProg is_match pc: 282 op: NOP1 (159)
    // SubProg is_match pc: 283 op: STARTLINE (58)

    /** wildcard.e:134		end while*/
    // SubProg is_match pc: 285 op: ENDWHILE (22)
    goto L1; // [285] 32
    // SubProg is_match pc: 287 op: NOP1 (159)
L2: // addr: 288 pc: 287 sub: 292 op: 159
    // SubProg is_match pc: 288 op: STARTLINE (58)

    /** wildcard.e:135		return 0*/
    // SubProg is_match pc: 290 op: RETURNF (28)

// Exiting block BLOCK: is_match

// block var pattern_294
    DeRefDS(_pattern_294);

// block var string_295
    DeRefDS(_string_295);

// block var p_296

// block var f_297

// block var t_298

// block var match_string_299
    DeRef(_match_string_299);
    DeRef(_89);
    _89 = NOVALUE;
    return 0;
    // SubProg is_match pc: 294 op: BADRETURNF (43)
    ;
}



// 0x93E92504
