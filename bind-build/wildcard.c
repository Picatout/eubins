// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _24qmatch(object _p_7406, object _s_7407)
{
    object _k_7408 = NOVALUE;
    object _3928 = NOVALUE;
    object _3927 = NOVALUE;
    object _3926 = NOVALUE;
    object _3925 = NOVALUE;
    object _3924 = NOVALUE;
    object _3923 = NOVALUE;
    object _3922 = NOVALUE;
    object _3921 = NOVALUE;
    object _3920 = NOVALUE;
    object _3919 = NOVALUE;
    object _3918 = NOVALUE;
    object _3917 = NOVALUE;
    object _3915 = NOVALUE;
    object _0, _1, _2;
    

    /** wildcard.e:21		if not find('?', p) then*/
    _3915 = find_from(63, _p_7406, 1);
    if (_3915 != 0)
    goto L1; // [12] 27
    _3915 = NOVALUE;

    /** wildcard.e:22			return match(p, s) -- fast*/
    _3917 = e_match_from(_p_7406, _s_7407, 1);
    DeRefDS(_p_7406);
    DeRefDS(_s_7407);
    return _3917;
L1: 

    /** wildcard.e:25		for i = 1 to length(s) - length(p) + 1 do*/
    if (IS_SEQUENCE(_s_7407)){
            _3918 = SEQ_PTR(_s_7407)->length;
    }
    else {
        _3918 = 1;
    }
    if (IS_SEQUENCE(_p_7406)){
            _3919 = SEQ_PTR(_p_7406)->length;
    }
    else {
        _3919 = 1;
    }
    _3920 = _3918 - _3919;
    _3918 = NOVALUE;
    _3919 = NOVALUE;
    _3921 = _3920 + 1;
    _3920 = NOVALUE;
    {
        object _i_7414;
        _i_7414 = 1;
L2: 
        if (_i_7414 > _3921){
            goto L3; // [43] 142
        }

        /** wildcard.e:26			k = i*/
        _k_7408 = _i_7414;

        /** wildcard.e:27			for j = 1 to length(p) do*/
        if (IS_SEQUENCE(_p_7406)){
                _3922 = SEQ_PTR(_p_7406)->length;
        }
        else {
            _3922 = 1;
        }
        {
            object _j_7420;
            _j_7420 = 1;
L4: 
            if (_j_7420 > _3922){
                goto L5; // [62] 122
            }

            /** wildcard.e:28				if p[j] != s[k] and p[j] != '?' then*/
            _2 = (object)SEQ_PTR(_p_7406);
            _3923 = (object)*(((s1_ptr)_2)->base + _j_7420);
            _2 = (object)SEQ_PTR(_s_7407);
            _3924 = (object)*(((s1_ptr)_2)->base + _k_7408);
            if (IS_ATOM_INT(_3923) && IS_ATOM_INT(_3924)) {
                _3925 = (_3923 != _3924);
            }
            else {
                _3925 = binary_op(NOTEQ, _3923, _3924);
            }
            _3923 = NOVALUE;
            _3924 = NOVALUE;
            if (IS_ATOM_INT(_3925)) {
                if (_3925 == 0) {
                    goto L6; // [83] 109
                }
            }
            else {
                if (DBL_PTR(_3925)->dbl == 0.0) {
                    goto L6; // [83] 109
                }
            }
            _2 = (object)SEQ_PTR(_p_7406);
            _3927 = (object)*(((s1_ptr)_2)->base + _j_7420);
            if (IS_ATOM_INT(_3927)) {
                _3928 = (_3927 != 63);
            }
            else {
                _3928 = binary_op(NOTEQ, _3927, 63);
            }
            _3927 = NOVALUE;
            if (_3928 == 0) {
                DeRef(_3928);
                _3928 = NOVALUE;
                goto L6; // [96] 109
            }
            else {
                if (!IS_ATOM_INT(_3928) && DBL_PTR(_3928)->dbl == 0.0){
                    DeRef(_3928);
                    _3928 = NOVALUE;
                    goto L6; // [96] 109
                }
                DeRef(_3928);
                _3928 = NOVALUE;
            }
            DeRef(_3928);
            _3928 = NOVALUE;

            /** wildcard.e:29					k = 0*/
            _k_7408 = 0;

            /** wildcard.e:30					exit*/
            goto L5; // [106] 122
L6: 

            /** wildcard.e:32				k += 1*/
            _k_7408 = _k_7408 + 1;

            /** wildcard.e:33			end for*/
            _j_7420 = _j_7420 + 1;
            goto L4; // [117] 69
L5: 
            ;
        }

        /** wildcard.e:34			if k != 0 then*/
        if (_k_7408 == 0)
        goto L7; // [124] 135

        /** wildcard.e:35				return i*/
        DeRefDS(_p_7406);
        DeRefDS(_s_7407);
        DeRef(_3921);
        _3921 = NOVALUE;
        DeRef(_3925);
        _3925 = NOVALUE;
        return _i_7414;
L7: 

        /** wildcard.e:37		end for*/
        _i_7414 = _i_7414 + 1;
        goto L2; // [137] 50
L3: 
        ;
    }

    /** wildcard.e:38		return 0*/
    DeRefDS(_p_7406);
    DeRefDS(_s_7407);
    DeRef(_3921);
    _3921 = NOVALUE;
    DeRef(_3925);
    _3925 = NOVALUE;
    return 0;
    ;
}


object _24is_match(object _pattern_7435, object _string_7436)
{
    object _p_7437 = NOVALUE;
    object _f_7438 = NOVALUE;
    object _t_7439 = NOVALUE;
    object _match_string_7440 = NOVALUE;
    object _3970 = NOVALUE;
    object _3969 = NOVALUE;
    object _3967 = NOVALUE;
    object _3963 = NOVALUE;
    object _3962 = NOVALUE;
    object _3961 = NOVALUE;
    object _3958 = NOVALUE;
    object _3957 = NOVALUE;
    object _3954 = NOVALUE;
    object _3951 = NOVALUE;
    object _3949 = NOVALUE;
    object _3947 = NOVALUE;
    object _3945 = NOVALUE;
    object _3942 = NOVALUE;
    object _3940 = NOVALUE;
    object _3938 = NOVALUE;
    object _3937 = NOVALUE;
    object _3936 = NOVALUE;
    object _3935 = NOVALUE;
    object _3933 = NOVALUE;
    object _0, _1, _2;
    

    /** wildcard.e:95		pattern = pattern & END_MARKER*/
    Append(&_pattern_7435, _pattern_7435, -1);

    /** wildcard.e:96		string = string & END_MARKER*/
    Append(&_string_7436, _string_7436, -1);

    /** wildcard.e:97		p = 1*/
    _p_7437 = 1;

    /** wildcard.e:98		f = 1*/
    _f_7438 = 1;

    /** wildcard.e:99		while f <= length(string) do*/
L1: 
    if (IS_SEQUENCE(_string_7436)){
            _3933 = SEQ_PTR(_string_7436)->length;
    }
    else {
        _3933 = 1;
    }
    if (_f_7438 > _3933)
    goto L2; // [35] 288

    /** wildcard.e:100			if not find(pattern[p], {string[f], '?'}) then*/
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3935 = (object)*(((s1_ptr)_2)->base + _p_7437);
    _2 = (object)SEQ_PTR(_string_7436);
    _3936 = (object)*(((s1_ptr)_2)->base + _f_7438);
    Ref(_3936);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3936;
    ((intptr_t *)_2)[2] = 63;
    _3937 = MAKE_SEQ(_1);
    _3936 = NOVALUE;
    _3938 = find_from(_3935, _3937, 1);
    _3935 = NOVALUE;
    DeRefDS(_3937);
    _3937 = NOVALUE;
    if (_3938 != 0)
    goto L3; // [58] 248
    _3938 = NOVALUE;

    /** wildcard.e:101				if pattern[p] = '*' then*/
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3940 = (object)*(((s1_ptr)_2)->base + _p_7437);
    if (binary_op_a(NOTEQ, _3940, 42)){
        _3940 = NOVALUE;
        goto L4; // [67] 240
    }
    _3940 = NOVALUE;

    /** wildcard.e:102					while pattern[p] = '*' do*/
L5: 
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3942 = (object)*(((s1_ptr)_2)->base + _p_7437);
    if (binary_op_a(NOTEQ, _3942, 42)){
        _3942 = NOVALUE;
        goto L6; // [80] 95
    }
    _3942 = NOVALUE;

    /** wildcard.e:103						p += 1*/
    _p_7437 = _p_7437 + 1;

    /** wildcard.e:104					end while*/
    goto L5; // [92] 76
L6: 

    /** wildcard.e:105					if pattern[p] = END_MARKER then*/
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3945 = (object)*(((s1_ptr)_2)->base + _p_7437);
    if (binary_op_a(NOTEQ, _3945, -1)){
        _3945 = NOVALUE;
        goto L7; // [101] 112
    }
    _3945 = NOVALUE;

    /** wildcard.e:106						return 1*/
    DeRefDS(_pattern_7435);
    DeRefDS(_string_7436);
    DeRef(_match_string_7440);
    return 1;
L7: 

    /** wildcard.e:108					match_string = ""*/
    RefDS(_5);
    DeRef(_match_string_7440);
    _match_string_7440 = _5;

    /** wildcard.e:109					while pattern[p] != '*' do*/
L8: 
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3947 = (object)*(((s1_ptr)_2)->base + _p_7437);
    if (binary_op_a(EQUALS, _3947, 42)){
        _3947 = NOVALUE;
        goto L9; // [128] 168
    }
    _3947 = NOVALUE;

    /** wildcard.e:110						match_string = match_string & pattern[p]*/
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3949 = (object)*(((s1_ptr)_2)->base + _p_7437);
    if (IS_SEQUENCE(_match_string_7440) && IS_ATOM(_3949)) {
        Ref(_3949);
        Append(&_match_string_7440, _match_string_7440, _3949);
    }
    else if (IS_ATOM(_match_string_7440) && IS_SEQUENCE(_3949)) {
    }
    else {
        Concat((object_ptr)&_match_string_7440, _match_string_7440, _3949);
    }
    _3949 = NOVALUE;

    /** wildcard.e:111						if pattern[p] = END_MARKER then*/
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3951 = (object)*(((s1_ptr)_2)->base + _p_7437);
    if (binary_op_a(NOTEQ, _3951, -1)){
        _3951 = NOVALUE;
        goto LA; // [148] 157
    }
    _3951 = NOVALUE;

    /** wildcard.e:112							exit*/
    goto L9; // [154] 168
LA: 

    /** wildcard.e:114						p += 1*/
    _p_7437 = _p_7437 + 1;

    /** wildcard.e:115					end while*/
    goto L8; // [165] 124
L9: 

    /** wildcard.e:116					if pattern[p] = '*' then*/
    _2 = (object)SEQ_PTR(_pattern_7435);
    _3954 = (object)*(((s1_ptr)_2)->base + _p_7437);
    if (binary_op_a(NOTEQ, _3954, 42)){
        _3954 = NOVALUE;
        goto LB; // [174] 185
    }
    _3954 = NOVALUE;

    /** wildcard.e:117						p -= 1*/
    _p_7437 = _p_7437 - 1;
LB: 

    /** wildcard.e:119					t = qmatch(match_string, string[f..$])*/
    if (IS_SEQUENCE(_string_7436)){
            _3957 = SEQ_PTR(_string_7436)->length;
    }
    else {
        _3957 = 1;
    }
    rhs_slice_target = (object_ptr)&_3958;
    RHS_Slice(_string_7436, _f_7438, _3957);
    RefDS(_match_string_7440);
    _t_7439 = _24qmatch(_match_string_7440, _3958);
    _3958 = NOVALUE;
    if (!IS_ATOM_INT(_t_7439)) {
        _1 = (object)(DBL_PTR(_t_7439)->dbl);
        DeRefDS(_t_7439);
        _t_7439 = _1;
    }

    /** wildcard.e:120					if t = 0 then*/
    if (_t_7439 != 0)
    goto LC; // [204] 217

    /** wildcard.e:121						return 0*/
    DeRefDS(_pattern_7435);
    DeRefDS(_string_7436);
    DeRefDS(_match_string_7440);
    return 0;
    goto LD; // [214] 247
LC: 

    /** wildcard.e:123						f += t + length(match_string) - 2*/
    if (IS_SEQUENCE(_match_string_7440)){
            _3961 = SEQ_PTR(_match_string_7440)->length;
    }
    else {
        _3961 = 1;
    }
    _3962 = _t_7439 + _3961;
    if ((object)((uintptr_t)_3962 + (uintptr_t)HIGH_BITS) >= 0){
        _3962 = NewDouble((eudouble)_3962);
    }
    _3961 = NOVALUE;
    if (IS_ATOM_INT(_3962)) {
        _3963 = _3962 - 2;
        if ((object)((uintptr_t)_3963 +(uintptr_t) HIGH_BITS) >= 0){
            _3963 = NewDouble((eudouble)_3963);
        }
    }
    else {
        _3963 = NewDouble(DBL_PTR(_3962)->dbl - (eudouble)2);
    }
    DeRef(_3962);
    _3962 = NOVALUE;
    if (IS_ATOM_INT(_3963)) {
        _f_7438 = _f_7438 + _3963;
    }
    else {
        _f_7438 = NewDouble((eudouble)_f_7438 + DBL_PTR(_3963)->dbl);
    }
    DeRef(_3963);
    _3963 = NOVALUE;
    if (!IS_ATOM_INT(_f_7438)) {
        _1 = (object)(DBL_PTR(_f_7438)->dbl);
        DeRefDS(_f_7438);
        _f_7438 = _1;
    }
    goto LD; // [237] 247
L4: 

    /** wildcard.e:126					return 0*/
    DeRefDS(_pattern_7435);
    DeRefDS(_string_7436);
    DeRef(_match_string_7440);
    return 0;
LD: 
L3: 

    /** wildcard.e:129			p += 1*/
    _p_7437 = _p_7437 + 1;

    /** wildcard.e:130			f += 1*/
    _f_7438 = _f_7438 + 1;

    /** wildcard.e:131			if p > length(pattern) then*/
    if (IS_SEQUENCE(_pattern_7435)){
            _3967 = SEQ_PTR(_pattern_7435)->length;
    }
    else {
        _3967 = 1;
    }
    if (_p_7437 <= _3967)
    goto L1; // [265] 32

    /** wildcard.e:132				return f > length(string) */
    if (IS_SEQUENCE(_string_7436)){
            _3969 = SEQ_PTR(_string_7436)->length;
    }
    else {
        _3969 = 1;
    }
    _3970 = (_f_7438 > _3969);
    _3969 = NOVALUE;
    DeRefDS(_pattern_7435);
    DeRefDS(_string_7436);
    DeRef(_match_string_7440);
    return _3970;

    /** wildcard.e:134		end while*/
    goto L1; // [285] 32
L2: 

    /** wildcard.e:135		return 0*/
    DeRefDS(_pattern_7435);
    DeRefDS(_string_7436);
    DeRef(_match_string_7440);
    DeRef(_3970);
    _3970 = NOVALUE;
    return 0;
    ;
}



// 0x8734A57E
