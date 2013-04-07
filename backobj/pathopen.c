// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _46exe_path()
{
// skipping _25749  name type: 0
// skipping _25748  name type: 0
    object _25747 = NOVALUE; // 49806 25747
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg exe_path pc: 1 op: STARTLINE (58)

    /** pathopen.e:70		if sequence(exe_path_cache) then*/
    // SubProg exe_path pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 5 op: IS_A_SEQUENCE (68)
    _25747 = IS_SEQUENCE(_46exe_path_cache_49799);
    // SubProg exe_path pc: 8 op: IF (20)
    if (_25747 == 0)
    {
        _25747 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25747 = NOVALUE;
    }
    // SubProg exe_path pc: 11 op: STARTLINE (58)

    /** pathopen.e:71			return exe_path_cache*/
    // SubProg exe_path pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 15 op: RETURNF (28)
    Ref(_46exe_path_cache_49799);

// Exiting block BLOCK: exe_path
    return _46exe_path_cache_49799;
    // SubProg exe_path pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 49803 op: 159
    // SubProg exe_path pc: 20 op: STARTLINE (58)

    /** pathopen.e:74		exe_path_cache = command_line()*/
    // SubProg exe_path pc: 22 op: COMMAND_LINE (100)
    DeRef(_46exe_path_cache_49799);
    _46exe_path_cache_49799 = Command_Line();
    // SubProg exe_path pc: 24 op: STARTLINE (58)

    /** pathopen.e:75		exe_path_cache = exe_path_cache[1]*/
    // SubProg exe_path pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 28 op: RHS_SUBS_CHECK (92)
    _0 = _46exe_path_cache_49799;
    _2 = (object)SEQ_PTR(_46exe_path_cache_49799);
    _46exe_path_cache_49799 = (object)*(((s1_ptr)_2)->base + 1);
    RefDS(_46exe_path_cache_49799);
    DeRefDS(_0);
    // SubProg exe_path pc: 32 op: STARTLINE (58)

    /** pathopen.e:77		return exe_path_cache*/
    // SubProg exe_path pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 36 op: RETURNF (28)
    RefDS(_46exe_path_cache_49799);

// Exiting block BLOCK: exe_path
    return _46exe_path_cache_49799;
    // SubProg exe_path pc: 40 op: BADRETURNF (43)
    ;
}


object _46check_cache(object _env_49811, object _inc_path_49812)
{
    object _delim_49813 = NOVALUE;
    object _pos_49814 = NOVALUE;
// skipping _25796  name type: 0
    object _25795 = NOVALUE; // 49871 25795
    object _25794 = NOVALUE; // 49869 25794
    object _25793 = NOVALUE; // 49868 25793
    object _25792 = NOVALUE; // 49867 25792
// skipping _25791  name type: 0
    object _25790 = NOVALUE; // 49864 25790
    object _25789 = NOVALUE; // 49863 25789
    object _25788 = NOVALUE; // 49862 25788
    object _25787 = NOVALUE; // 49861 25787
    object _25786 = NOVALUE; // 49860 25786
    object _25785 = NOVALUE; // 49859 25785
    object _25784 = NOVALUE; // 49858 25784
    object _25783 = NOVALUE; // 49857 25783
    object _25782 = NOVALUE; // 49856 25782
// skipping _25781  name type: 0
// skipping _25780  name type: 0
// skipping _25779  name type: 0
    object _25778 = NOVALUE; // 49850 25778
    object _25777 = NOVALUE; // 49849 25777
    object _25776 = NOVALUE; // 49848 25776
    object _25775 = NOVALUE; // 49847 25775
    object _25774 = NOVALUE; // 49846 25774
    object _25773 = NOVALUE; // 49845 25773
    object _25772 = NOVALUE; // 49844 25772
    object _25771 = NOVALUE; // 49843 25771
// skipping _25770  name type: 0
    object _25769 = NOVALUE; // 49841 25769
    object _25768 = NOVALUE; // 49840 25768
    object _25767 = NOVALUE; // 49839 25767
    object _25766 = NOVALUE; // 49838 25766
    object _25765 = NOVALUE; // 49836 25765
    object _25764 = NOVALUE; // 49835 25764
// skipping _25763  name type: 0
    object _25762 = NOVALUE; // 49831 25762
    object _25761 = NOVALUE; // 49830 25761
    object _25760 = NOVALUE; // 49828 25760
    object _25759 = NOVALUE; // 49827 25759
// skipping _25758  name type: 0
// skipping _25757  name type: 0
// skipping _25756  name type: 0
// skipping _25755  name type: 0
// skipping _25754  name type: 0
// skipping _25753  name type: 0
// skipping _25752  name type: 0
// skipping _25751  name type: 0
// skipping _25750  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_cache pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_cache pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg check_cache pc: 5 op: STARTLINE (58)

    /** pathopen.e:83		if not num_var then -- first time the var is accessed, add cache entry*/
    // SubProg check_cache pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 9 op: NOT_IFW (108)
    if (_46num_var_49788 != 0)
    goto L1; // [9] 86
    // SubProg check_cache pc: 12 op: STARTLINE (58)

    /** pathopen.e:84			cache_vars = append(cache_vars,env)*/
    // SubProg check_cache pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 16 op: APPEND (35)
    RefDS(_env_49811);
    Append(&_46cache_vars_49789, _46cache_vars_49789, _env_49811);
    // SubProg check_cache pc: 20 op: STARTLINE (58)

    /** pathopen.e:85			cache_strings = append(cache_strings,inc_path)*/
    // SubProg check_cache pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 24 op: APPEND (35)
    RefDS(_inc_path_49812);
    Append(&_46cache_strings_49790, _46cache_strings_49790, _inc_path_49812);
    // SubProg check_cache pc: 28 op: STARTLINE (58)

    /** pathopen.e:86			cache_substrings = append(cache_substrings,{})*/
    // SubProg check_cache pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 32 op: APPEND (35)
    RefDS(_21936);
    Append(&_46cache_substrings_49791, _46cache_substrings_49791, _21936);
    // SubProg check_cache pc: 36 op: STARTLINE (58)

    /** pathopen.e:87			cache_starts = append(cache_starts,{})*/
    // SubProg check_cache pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 40 op: APPEND (35)
    RefDS(_21936);
    Append(&_46cache_starts_49792, _46cache_starts_49792, _21936);
    // SubProg check_cache pc: 44 op: STARTLINE (58)

    /** pathopen.e:88			cache_ends = append(cache_ends,{})*/
    // SubProg check_cache pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 48 op: APPEND (35)
    RefDS(_21936);
    Append(&_46cache_ends_49793, _46cache_ends_49793, _21936);
    // SubProg check_cache pc: 52 op: STARTLINE (58)

    /** pathopen.e:89			ifdef WINDOWS then*/
    // SubProg check_cache pc: 54 op: STARTLINE (58)

    /** pathopen.e:92			num_var = length(cache_vars)*/
    // SubProg check_cache pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 58 op: LENGTH (42)
    if (IS_SEQUENCE(_46cache_vars_49789)){
            _46num_var_49788 = SEQ_PTR(_46cache_vars_49789)->length;
    }
    else {
        _46num_var_49788 = 1;
    }
    // SubProg check_cache pc: 61 op: STARTLINE (58)

    /** pathopen.e:93			cache_complete &= 0*/
    // SubProg check_cache pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 65 op: CONCAT (15)
    Append(&_46cache_complete_49795, _46cache_complete_49795, 0);
    // SubProg check_cache pc: 69 op: STARTLINE (58)

    /** pathopen.e:94			cache_delims &= 0*/
    // SubProg check_cache pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 73 op: CONCAT (15)
    Append(&_46cache_delims_49796, _46cache_delims_49796, 0);
    // SubProg check_cache pc: 77 op: STARTLINE (58)

    /** pathopen.e:95			return 0*/
    // SubProg check_cache pc: 79 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49811
    DeRefDSi(_env_49811);

// block var inc_path_49812
    DeRefDSi(_inc_path_49812);

// block var delim_49813

// block var pos_49814
    return 0;
    // SubProg check_cache pc: 83 op: ELSE (23)
    goto L2; // [83] 425
    // SubProg check_cache pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 49809 op: 159
    // SubProg check_cache pc: 86 op: STARTLINE (58)

    /** pathopen.e:97			if compare(inc_path,cache_strings[num_var]) then*/
    // SubProg check_cache pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 92 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_strings_49790);
    _25759 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg check_cache pc: 96 op: COMPARE (76)
    if (IS_ATOM_INT(_inc_path_49812) && IS_ATOM_INT(_25759)){
        _25760 = (_inc_path_49812 < _25759) ? -1 : (_inc_path_49812 > _25759);
    }
    else{
        _25760 = compare(_inc_path_49812, _25759);
    }
    _25759 = NOVALUE;
    // SubProg check_cache pc: 100 op: IF (20)
    if (_25760 == 0)
    {
        _25760 = NOVALUE;
        goto L3; // [100] 424
    }
    else{
        _25760 = NOVALUE;
    }
    // SubProg check_cache pc: 103 op: STARTLINE (58)

    /** pathopen.e:98				cache_strings[num_var] = inc_path*/
    // SubProg check_cache pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 109 op: ASSIGN_SUBS (16)
    RefDS(_inc_path_49812);
    _2 = (object)SEQ_PTR(_46cache_strings_49790);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_strings_49790 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _inc_path_49812;
    DeRefDS(_1);
    // SubProg check_cache pc: 113 op: STARTLINE (58)

    /** pathopen.e:99				cache_complete[num_var] = 0*/
    // SubProg check_cache pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 119 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_46cache_complete_49795);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_complete_49795 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
    *(intptr_t *)_2 = 0;
    // SubProg check_cache pc: 123 op: STARTLINE (58)

    /** pathopen.e:100				if match(cache_strings[num_var],inc_path)!=1 then -- try to salvage what we can*/
    // SubProg check_cache pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 129 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_strings_49790);
    _25761 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg check_cache pc: 133 op: MATCH_FROM (177)
    _25762 = e_match_from(_25761, _inc_path_49812, 1);
    _25761 = NOVALUE;
    // SubProg check_cache pc: 138 op: NOTEQ_IFW (105)
    if (_25762 == 1)
    goto L4; // [138] 423
    // SubProg check_cache pc: 142 op: STARTLINE (58)

    /** pathopen.e:101					pos = -1*/
    // SubProg check_cache pc: 144 op: ASSIGN_I (113)
    _pos_49814 = -1;
    // SubProg check_cache pc: 147 op: STARTLINE (58)

    /** pathopen.e:102					for i=1 to length(cache_strings[num_var]) do*/
    // SubProg check_cache pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 153 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_strings_49790);
    _25764 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg check_cache pc: 157 op: LENGTH (42)
    if (IS_SEQUENCE(_25764)){
            _25765 = SEQ_PTR(_25764)->length;
    }
    else {
        _25765 = 1;
    }
    _25764 = NOVALUE;
    // SubProg check_cache pc: 160 op: FOR_I (125)
    {
        object _i_49834;
        _i_49834 = 1;
L5: // addr: 167 pc: 160 sub: 49809 op: 125
        if (_i_49834 > _25765){
            goto L6; // [160] 422
        }
        // SubProg check_cache pc: 167 op: STARTLINE (58)

        /** pathopen.e:103						if cache_ends[num_var][i] > length(inc_path) or */
        // SubProg check_cache pc: 169 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 171 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 173 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        _25766 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 177 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25766);
        _25767 = (object)*(((s1_ptr)_2)->base + _i_49834);
        _25766 = NOVALUE;
        // SubProg check_cache pc: 181 op: LENGTH (42)
        if (IS_SEQUENCE(_inc_path_49812)){
                _25768 = SEQ_PTR(_inc_path_49812)->length;
        }
        else {
            _25768 = 1;
        }
        // SubProg check_cache pc: 184 op: GREATER (6)
        if (IS_ATOM_INT(_25767)) {
            _25769 = (_25767 > _25768);
        }
        else {
            _25769 = binary_op(GREATER, _25767, _25768);
        }
        _25767 = NOVALUE;
        _25768 = NOVALUE;
        // SubProg check_cache pc: 188 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_25769)) {
            if (_25769 != 0) {
                goto L7; // [188] 242
            }
        }
        else {
            if (DBL_PTR(_25769)->dbl != 0.0) {
                goto L7; // [188] 242
            }
        }
        // SubProg check_cache pc: 192 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 196 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49791);
        _25771 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 200 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25771);
        _25772 = (object)*(((s1_ptr)_2)->base + _i_49834);
        _25771 = NOVALUE;
        // SubProg check_cache pc: 204 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 206 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 208 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_starts_49792);
        _25773 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25773);
        _25774 = (object)*(((s1_ptr)_2)->base + _i_49834);
        _25773 = NOVALUE;
        // SubProg check_cache pc: 216 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 220 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        _25775 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 224 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25775);
        _25776 = (object)*(((s1_ptr)_2)->base + _i_49834);
        _25775 = NOVALUE;
        // SubProg check_cache pc: 228 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25777;
        RHS_Slice(_inc_path_49812, _25774, _25776);
        // SubProg check_cache pc: 233 op: COMPARE (76)
        if (IS_ATOM_INT(_25772) && IS_ATOM_INT(_25777)){
            _25778 = (_25772 < _25777) ? -1 : (_25772 > _25777);
        }
        else{
            _25778 = compare(_25772, _25777);
        }
        _25772 = NOVALUE;
        DeRefDS(_25777);
        _25777 = NOVALUE;
        // SubProg check_cache pc: 237 op: NOP1 (159)
        // SubProg check_cache pc: 238 op: IF (20)
        if (_25778 == 0)
        {
            _25778 = NOVALUE;
            goto L8; // [238] 253
        }
        else{
            _25778 = NOVALUE;
        }
        // SubProg check_cache pc: 241 op: NOP1 (159)
L7: // addr: 242 pc: 241 sub: 49809 op: 159
        // SubProg check_cache pc: 242 op: STARTLINE (58)

        /** pathopen.e:107							pos = i-1*/
        // SubProg check_cache pc: 244 op: MINUS_I (116)
        _pos_49814 = _i_49834 - 1;
        // SubProg check_cache pc: 248 op: STARTLINE (58)

        /** pathopen.e:108							exit*/
        // SubProg check_cache pc: 250 op: EXIT (61)
        goto L6; // [250] 422
        // SubProg check_cache pc: 252 op: NOP1 (159)
L8: // addr: 253 pc: 252 sub: 49809 op: 159
        // SubProg check_cache pc: 253 op: STARTLINE (58)

        /** pathopen.e:110						if pos = 0 then*/
        // SubProg check_cache pc: 255 op: EQUALS_IFW_I (121)
        if (_pos_49814 != 0)
        goto L9; // [255] 268
        // SubProg check_cache pc: 259 op: STARTLINE (58)

        /** pathopen.e:111							return 0*/
        // SubProg check_cache pc: 261 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49811
        DeRefDSi(_env_49811);

// block var inc_path_49812
        DeRefDSi(_inc_path_49812);

// block var delim_49813

// block var pos_49814
        DeRef(_25769);
        _25769 = NOVALUE;
        _25774 = NOVALUE;
        _25776 = NOVALUE;
        _25764 = NOVALUE;
        return 0;
        // SubProg check_cache pc: 265 op: ELSE (23)
        goto LA; // [265] 415
        // SubProg check_cache pc: 267 op: NOP1 (159)
L9: // addr: 268 pc: 267 sub: 49809 op: 159
        // SubProg check_cache pc: 268 op: STARTLINE (58)

        /** pathopen.e:112						elsif pos >0 then -- crop cache data*/
        // SubProg check_cache pc: 270 op: GREATER_IFW_I (124)
        if (_pos_49814 <= 0)
        goto LB; // [270] 414
        // SubProg check_cache pc: 274 op: STARTLINE (58)

        /** pathopen.e:113							cache_substrings[num_var] = cache_substrings[num_var][1..pos]*/
        // SubProg check_cache pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 284 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49791);
        _25782 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 288 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25783;
        RHS_Slice(_25782, 1, _pos_49814);
        _25782 = NOVALUE;
        // SubProg check_cache pc: 293 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_substrings_49791);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_substrings_49791 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25783;
        if( _1 != _25783 ){
            DeRefDS(_1);
        }
        _25783 = NOVALUE;
        // SubProg check_cache pc: 297 op: STARTLINE (58)

        /** pathopen.e:114							cache_starts[num_var] = cache_starts[num_var][1..pos]*/
        // SubProg check_cache pc: 299 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 301 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 305 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 307 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_starts_49792);
        _25784 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 311 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25785;
        RHS_Slice(_25784, 1, _pos_49814);
        _25784 = NOVALUE;
        // SubProg check_cache pc: 316 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_starts_49792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_starts_49792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25785;
        if( _1 != _25785 ){
            DeRef(_1);
        }
        _25785 = NOVALUE;
        // SubProg check_cache pc: 320 op: STARTLINE (58)

        /** pathopen.e:115							cache_ends[num_var] = cache_ends[num_var][1..pos]*/
        // SubProg check_cache pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 324 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 328 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 330 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        _25786 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 334 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25787;
        RHS_Slice(_25786, 1, _pos_49814);
        _25786 = NOVALUE;
        // SubProg check_cache pc: 339 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_ends_49793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25787;
        if( _1 != _25787 ){
            DeRef(_1);
        }
        _25787 = NOVALUE;
        // SubProg check_cache pc: 343 op: STARTLINE (58)

        /** pathopen.e:116							ifdef WINDOWS then*/
        // SubProg check_cache pc: 345 op: STARTLINE (58)

        /** pathopen.e:119							delim = cache_ends[num_var][$]+1*/
        // SubProg check_cache pc: 347 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 351 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        _25788 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg check_cache pc: 355 op: LENGTH (42)
        if (IS_SEQUENCE(_25788)){
                _25789 = SEQ_PTR(_25788)->length;
        }
        else {
            _25789 = 1;
        }
        // SubProg check_cache pc: 358 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25788);
        _25790 = (object)*(((s1_ptr)_2)->base + _25789);
        _25788 = NOVALUE;
        // SubProg check_cache pc: 362 op: PLUS1_I (117)
        if (IS_ATOM_INT(_25790)) {
            _delim_49813 = _25790 + 1;
        }
        else
        { // coercing _delim_49813 to an integer 1
            _delim_49813 = 1+(object)(DBL_PTR(_25790)->dbl);
            if( !IS_ATOM_INT(_delim_49813) ){
                _delim_49813 = (object)DBL_PTR(_delim_49813)->dbl;
            }
        }
        _25790 = NOVALUE;
        // SubProg check_cache pc: 366 op: STARTLINE (58)

        /** pathopen.e:120							while delim <= length(inc_path) and delim != PATH_SEPARATOR do*/
        // SubProg check_cache pc: 368 op: NOP2 (110)
        // SubProg check_cache pc: 370 op: NOPWHILE (158)
LC: // addr: 371 pc: 370 sub: 49809 op: 158
        // SubProg check_cache pc: 371 op: LENGTH (42)
        if (IS_SEQUENCE(_inc_path_49812)){
                _25792 = SEQ_PTR(_inc_path_49812)->length;
        }
        else {
            _25792 = 1;
        }
        // SubProg check_cache pc: 374 op: LESSEQ (5)
        _25793 = (_delim_49813 <= _25792);
        _25792 = NOVALUE;
        // SubProg check_cache pc: 378 op: SC1_AND_IF (146)
        if (_25793 == 0) {
            goto LD; // [378] 403
        }
        // SubProg check_cache pc: 382 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 384 op: NOTEQ (4)
        _25795 = (_delim_49813 != 58);
        // SubProg check_cache pc: 388 op: NOP1 (159)
        // SubProg check_cache pc: 389 op: WHILE (47)
        if (_25795 == 0)
        {
            DeRef(_25795);
            _25795 = NOVALUE;
            goto LD; // [389] 403
        }
        else{
            DeRef(_25795);
            _25795 = NOVALUE;
        }
        // SubProg check_cache pc: 392 op: STARTLINE (58)

        /** pathopen.e:121								delim+=1*/
        // SubProg check_cache pc: 394 op: PLUS1_I (117)
        _delim_49813 = _delim_49813 + 1;
        // SubProg check_cache pc: 398 op: STARTLINE (58)

        /** pathopen.e:122							end while*/
        // SubProg check_cache pc: 400 op: ENDWHILE (22)
        goto LC; // [400] 371
        // SubProg check_cache pc: 402 op: NOP1 (159)
LD: // addr: 403 pc: 402 sub: 49809 op: 159
        // SubProg check_cache pc: 403 op: STARTLINE (58)

        /** pathopen.e:123							cache_delims[num_var] = delim*/
        // SubProg check_cache pc: 405 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 407 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 409 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_46cache_delims_49796);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_delims_49796 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        *(intptr_t *)_2 = _delim_49813;
        // SubProg check_cache pc: 413 op: NOP1 (159)
LB: // addr: 414 pc: 413 sub: 49809 op: 159
        // SubProg check_cache pc: 414 op: NOP1 (159)
LA: // addr: 415 pc: 414 sub: 49809 op: 159
        // SubProg check_cache pc: 415 op: STARTLINE (58)

        /** pathopen.e:125					end for*/
        // SubProg check_cache pc: 417 op: ENDFOR_INT_UP1 (54)
        _i_49834 = _i_49834 + 1;
        goto L5; // [417] 167
L6: // addr: 422 pc: 417 sub: 49809 op: 54
        ;
    }
    // SubProg check_cache pc: 422 op: NOP1 (159)
L4: // addr: 423 pc: 422 sub: 49809 op: 159
    // SubProg check_cache pc: 423 op: NOP1 (159)
L3: // addr: 424 pc: 423 sub: 49809 op: 159
    // SubProg check_cache pc: 424 op: NOP1 (159)
L2: // addr: 425 pc: 424 sub: 49809 op: 159
    // SubProg check_cache pc: 425 op: STARTLINE (58)

    /** pathopen.e:129		return 1*/
    // SubProg check_cache pc: 427 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49811
    DeRefDSi(_env_49811);

// block var inc_path_49812
    DeRefDSi(_inc_path_49812);

// block var delim_49813

// block var pos_49814
    DeRef(_25769);
    _25769 = NOVALUE;
    _25774 = NOVALUE;
    DeRef(_25793);
    _25793 = NOVALUE;
    _25776 = NOVALUE;
    _25764 = NOVALUE;
    return 1;
    // SubProg check_cache pc: 431 op: BADRETURNF (43)
    ;
}


object _46get_conf_dirs()
{
    object _delimiter_49875 = NOVALUE;
    object _dirs_49876 = NOVALUE;
// skipping _25802  name type: 0
// skipping _25801  name type: 0
    object _25800 = NOVALUE; // 49883 25800
// skipping _25799  name type: 0
    object _25798 = NOVALUE; // 49880 25798
    object _25797 = NOVALUE; // 49879 25797
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_conf_dirs pc: 1 op: STARTLINE (58)

    /** pathopen.e:136		ifdef UNIX then*/
    // SubProg get_conf_dirs pc: 3 op: STARTLINE (58)

    /** pathopen.e:137			delimiter = ':'*/
    // SubProg get_conf_dirs pc: 5 op: ASSIGN_I (113)
    _delimiter_49875 = 58;
    // SubProg get_conf_dirs pc: 8 op: STARTLINE (58)

    /** pathopen.e:142		dirs = ""*/
    // SubProg get_conf_dirs pc: 10 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_dirs_49876);
    _dirs_49876 = _21936;
    // SubProg get_conf_dirs pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg get_conf_dirs pc: 15 op: STARTLINE (58)

    /** pathopen.e:143		for i = 1 to length(config_inc_paths) do*/
    // SubProg get_conf_dirs pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_conf_dirs pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_46config_inc_paths_49797)){
            _25797 = SEQ_PTR(_46config_inc_paths_49797)->length;
    }
    else {
        _25797 = 1;
    }
    // SubProg get_conf_dirs pc: 22 op: FOR_I (125)
    {
        object _i_49878;
        _i_49878 = 1;
L1: // addr: 29 pc: 22 sub: 49873 op: 125
        if (_i_49878 > _25797){
            goto L2; // [22] 68
        }
        // SubProg get_conf_dirs pc: 29 op: STARTLINE (58)

        /** pathopen.e:144			dirs &= config_inc_paths[i]*/
        // SubProg get_conf_dirs pc: 31 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_conf_dirs pc: 33 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46config_inc_paths_49797);
        _25798 = (object)*(((s1_ptr)_2)->base + _i_49878);
        // SubProg get_conf_dirs pc: 37 op: CONCAT (15)
        Concat((object_ptr)&_dirs_49876, _dirs_49876, _25798);
        _25798 = NOVALUE;
        // SubProg get_conf_dirs pc: 41 op: STARTLINE (58)

        /** pathopen.e:145			if i != length(config_inc_paths) then*/
        // SubProg get_conf_dirs pc: 43 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_conf_dirs pc: 45 op: LENGTH (42)
        if (IS_SEQUENCE(_46config_inc_paths_49797)){
                _25800 = SEQ_PTR(_46config_inc_paths_49797)->length;
        }
        else {
            _25800 = 1;
        }
        // SubProg get_conf_dirs pc: 48 op: NOTEQ_IFW_I (122)
        if (_i_49878 == _25800)
        goto L3; // [48] 61
        // SubProg get_conf_dirs pc: 52 op: STARTLINE (58)

        /** pathopen.e:146				dirs &= delimiter*/
        // SubProg get_conf_dirs pc: 54 op: PRIVATE_INIT_CHECK (30)
        // SubProg get_conf_dirs pc: 56 op: CONCAT (15)
        Append(&_dirs_49876, _dirs_49876, _delimiter_49875);
        // SubProg get_conf_dirs pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 49873 op: 159
        // SubProg get_conf_dirs pc: 61 op: STARTLINE (58)

        /** pathopen.e:148		end for*/
        // SubProg get_conf_dirs pc: 63 op: ENDFOR_INT_UP1 (54)
        _i_49878 = _i_49878 + 1;
        goto L1; // [63] 29
L2: // addr: 68 pc: 63 sub: 49873 op: 54
        ;
    }
    // SubProg get_conf_dirs pc: 68 op: STARTLINE (58)

    /** pathopen.e:150		return dirs*/
    // SubProg get_conf_dirs pc: 70 op: RETURNF (28)

// Exiting block BLOCK: get_conf_dirs

// block var delimiter_49875
    return _dirs_49876;
    // SubProg get_conf_dirs pc: 74 op: BADRETURNF (43)
    ;
}


object _46strip_file_from_path(object _full_path_49888)
{
    object _25806 = NOVALUE; // 49896 25806
// skipping _25805  name type: 0
    object _25804 = NOVALUE; // 49893 25804
    object _25803 = NOVALUE; // 49891 25803
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg strip_file_from_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg strip_file_from_path pc: 3 op: STARTLINE (58)

    /** pathopen.e:156		for i = length(full_path) to 1 by -1 do*/
    // SubProg strip_file_from_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_path_49888)){
            _25803 = SEQ_PTR(_full_path_49888)->length;
    }
    else {
        _25803 = 1;
    }
    // SubProg strip_file_from_path pc: 8 op: FOR_I (125)
    {
        object _i_49890;
        _i_49890 = _25803;
L1: // addr: 15 pc: 8 sub: 49886 op: 125
        if (_i_49890 < 1){
            goto L2; // [8] 46
        }
        // SubProg strip_file_from_path pc: 15 op: STARTLINE (58)

        /** pathopen.e:157			if full_path[i] = SLASH then*/
        // SubProg strip_file_from_path pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_full_path_49888);
        _25804 = (object)*(((s1_ptr)_2)->base + _i_49890);
        // SubProg strip_file_from_path pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg strip_file_from_path pc: 23 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25804, 47)){
            _25804 = NOVALUE;
            goto L3; // [23] 39
        }
        _25804 = NOVALUE;
        // SubProg strip_file_from_path pc: 27 op: STARTLINE (58)

        /** pathopen.e:158				return full_path[1..i]*/
        // SubProg strip_file_from_path pc: 29 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25806;
        RHS_Slice(_full_path_49888, 1, _i_49890);
        // SubProg strip_file_from_path pc: 34 op: RETURNF (28)

// Exiting block BLOCK: strip_file_from_path

// block var full_path_49888
        DeRefDS(_full_path_49888);
        return _25806;
        // SubProg strip_file_from_path pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 49886 op: 159
        // SubProg strip_file_from_path pc: 39 op: STARTLINE (58)

        /** pathopen.e:160		end for*/
        // SubProg strip_file_from_path pc: 41 op: ENDFOR_GENERAL (39)
        _i_49890 = _i_49890 + -1;
        goto L1; // [41] 15
L2: // addr: 46 pc: 41 sub: 49886 op: 39
        ;
    }
    // SubProg strip_file_from_path pc: 46 op: STARTLINE (58)

    /** pathopen.e:162		return ""*/
    // SubProg strip_file_from_path pc: 48 op: RETURNF (28)
    RefDS(_21936);

// Exiting block BLOCK: strip_file_from_path

// block var full_path_49888
    DeRefDS(_full_path_49888);
    DeRef(_25806);
    _25806 = NOVALUE;
    return _21936;
    // SubProg strip_file_from_path pc: 52 op: BADRETURNF (43)
    ;
}


object _46expand_path(object _path_49899, object _prefix_49900)
{
    object _absolute_49901 = NOVALUE;
    object _home_49905 = NOVALUE;
// skipping _25831  name type: 0
    object _25830 = NOVALUE; // 49934 25830
    object _25829 = NOVALUE; // 49933 25829
    object _25828 = NOVALUE; // 49931 25828
    object _25827 = NOVALUE; // 49930 25827
    object _25826 = NOVALUE; // 49929 25826
    object _25825 = NOVALUE; // 49928 25825
// skipping _25824  name type: 0
// skipping _25823  name type: 0
// skipping _25822  name type: 0
    object _25821 = NOVALUE; // 49920 25821
// skipping _25820  name type: 0
    object _25819 = NOVALUE; // 49918 25819
    object _25818 = NOVALUE; // 49917 25818
    object _25817 = NOVALUE; // 49916 25817
    object _25816 = NOVALUE; // 49915 25816
    object _25815 = NOVALUE; // 49914 25815
// skipping _25814  name type: 0
    object _25812 = NOVALUE; // 49910 25812
    object _25811 = NOVALUE; // 49909 25811
    object _25810 = NOVALUE; // 49908 25810
    object _25809 = NOVALUE; // 49907 25809
// skipping _25808  name type: 0
    object _25807 = NOVALUE; // 49903 25807
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expand_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg expand_path pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg expand_path pc: 5 op: STARTLINE (58)

    /** pathopen.e:169		if not length(path) then*/
    // SubProg expand_path pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49899)){
            _25807 = SEQ_PTR(_path_49899)->length;
    }
    else {
        _25807 = 1;
    }
    // SubProg expand_path pc: 10 op: NOT_IFW (108)
    if (_25807 != 0)
    goto L1; // [10] 22
    _25807 = NOVALUE;
    // SubProg expand_path pc: 13 op: STARTLINE (58)

    /** pathopen.e:170			return pwd*/
    // SubProg expand_path pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 17 op: RETURNF (28)
    RefDS(_46pwd_49800);

// Exiting block BLOCK: expand_path

// block var path_49899
    DeRefDS(_path_49899);

// block var prefix_49900
    DeRefDS(_prefix_49900);

// block var absolute_49901

// block var home_49905
    DeRefi(_home_49905);
    return _46pwd_49800;
    // SubProg expand_path pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 49897 op: 159
    // SubProg expand_path pc: 22 op: STARTLINE (58)

    /** pathopen.e:174		ifdef UNIX then*/
    // SubProg expand_path pc: 24 op: STARTLINE (58)

    /** pathopen.e:175			object home*/
    // SubProg expand_path pc: 26 op: STARTLINE (58)

    /** pathopen.e:176			if length(path) and path[1] = '~' then*/
    // SubProg expand_path pc: 28 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49899)){
            _25809 = SEQ_PTR(_path_49899)->length;
    }
    else {
        _25809 = 1;
    }
    // SubProg expand_path pc: 31 op: SC1_AND_IF (146)
    if (_25809 == 0) {
        goto L2; // [31] 84
    }
    // SubProg expand_path pc: 35 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49899);
    _25811 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg expand_path pc: 39 op: EQUALS (3)
    if (IS_ATOM_INT(_25811)) {
        _25812 = (_25811 == 126);
    }
    else {
        _25812 = binary_op(EQUALS, _25811, 126);
    }
    _25811 = NOVALUE;
    // SubProg expand_path pc: 43 op: NOP1 (159)
    // SubProg expand_path pc: 44 op: IF (20)
    if (_25812 == 0) {
        DeRef(_25812);
        _25812 = NOVALUE;
        goto L2; // [44] 84
    }
    else {
        if (!IS_ATOM_INT(_25812) && DBL_PTR(_25812)->dbl == 0.0){
            DeRef(_25812);
            _25812 = NOVALUE;
            goto L2; // [44] 84
        }
        DeRef(_25812);
        _25812 = NOVALUE;
    }
    DeRef(_25812);
    _25812 = NOVALUE;
    // SubProg expand_path pc: 47 op: STARTLINE (58)

    /** pathopen.e:177				home = getenv("HOME")*/
    // SubProg expand_path pc: 49 op: GETENV (91)
    DeRefi(_home_49905);
    _home_49905 = EGetEnv(_25813);
    // SubProg expand_path pc: 52 op: STARTLINE (58)

    /** pathopen.e:178				if sequence(home) and length(home) then*/
    // SubProg expand_path pc: 54 op: IS_A_SEQUENCE (68)
    _25815 = IS_SEQUENCE(_home_49905);
    // SubProg expand_path pc: 57 op: SC1_AND_IF (146)
    if (_25815 == 0) {
        goto L3; // [57] 83
    }
    // SubProg expand_path pc: 61 op: LENGTH (42)
    if (IS_SEQUENCE(_home_49905)){
            _25817 = SEQ_PTR(_home_49905)->length;
    }
    else {
        _25817 = 1;
    }
    // SubProg expand_path pc: 64 op: NOP1 (159)
    // SubProg expand_path pc: 65 op: IF (20)
    if (_25817 == 0)
    {
        _25817 = NOVALUE;
        goto L3; // [65] 83
    }
    else{
        _25817 = NOVALUE;
    }
    // SubProg expand_path pc: 68 op: STARTLINE (58)

    /** pathopen.e:179					path = home & path[2..$]*/
    // SubProg expand_path pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49899)){
            _25818 = SEQ_PTR(_path_49899)->length;
    }
    else {
        _25818 = 1;
    }
    // SubProg expand_path pc: 73 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25819;
    RHS_Slice(_path_49899, 2, _25818);
    // SubProg expand_path pc: 78 op: CONCAT (15)
    if (IS_SEQUENCE(_home_49905) && IS_ATOM(_25819)) {
    }
    else if (IS_ATOM(_home_49905) && IS_SEQUENCE(_25819)) {
        Ref(_home_49905);
        Prepend(&_path_49899, _25819, _home_49905);
    }
    else {
        Concat((object_ptr)&_path_49899, _home_49905, _25819);
    }
    DeRefDS(_25819);
    _25819 = NOVALUE;
    // SubProg expand_path pc: 82 op: NOP1 (159)
L3: // addr: 83 pc: 82 sub: 49897 op: 159
    // SubProg expand_path pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 49897 op: 159
    // SubProg expand_path pc: 84 op: STARTLINE (58)

    /** pathopen.e:183			absolute = find(path[1], SLASH_CHARS)*/
    // SubProg expand_path pc: 86 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49899);
    _25821 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg expand_path pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 92 op: FIND_FROM (176)
    _absolute_49901 = find_from(_25821, _39SLASH_CHARS_19982, 1);
    _25821 = NOVALUE;
    // SubProg expand_path pc: 97 op: STARTLINE (58)

    /** pathopen.e:188		if not absolute then*/
    // SubProg expand_path pc: 99 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_path pc: 101 op: NOT_IFW (108)
    if (_absolute_49901 != 0)
    goto L4; // [101] 115
    // SubProg expand_path pc: 104 op: STARTLINE (58)

    /** pathopen.e:189			path = prefix & SLASH & path*/
    // SubProg expand_path pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 108 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _path_49899;
        concat_list[1] = 47;
        concat_list[2] = _prefix_49900;
        Concat_N((object_ptr)&_path_49899, concat_list, 3);
    }
    // SubProg expand_path pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 49897 op: 159
    // SubProg expand_path pc: 115 op: STARTLINE (58)

    /** pathopen.e:192		if length(path) and not find(path[$], SLASH_CHARS) then*/
    // SubProg expand_path pc: 117 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49899)){
            _25825 = SEQ_PTR(_path_49899)->length;
    }
    else {
        _25825 = 1;
    }
    // SubProg expand_path pc: 120 op: SC1_AND_IF (146)
    if (_25825 == 0) {
        goto L5; // [120] 154
    }
    // SubProg expand_path pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49899)){
            _25827 = SEQ_PTR(_path_49899)->length;
    }
    else {
        _25827 = 1;
    }
    // SubProg expand_path pc: 127 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49899);
    _25828 = (object)*(((s1_ptr)_2)->base + _25827);
    // SubProg expand_path pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 133 op: FIND_FROM (176)
    _25829 = find_from(_25828, _39SLASH_CHARS_19982, 1);
    _25828 = NOVALUE;
    // SubProg expand_path pc: 138 op: NOT (7)
    _25830 = (_25829 == 0);
    _25829 = NOVALUE;
    // SubProg expand_path pc: 141 op: NOP1 (159)
    // SubProg expand_path pc: 142 op: IF (20)
    if (_25830 == 0)
    {
        DeRef(_25830);
        _25830 = NOVALUE;
        goto L5; // [142] 154
    }
    else{
        DeRef(_25830);
        _25830 = NOVALUE;
    }
    // SubProg expand_path pc: 145 op: STARTLINE (58)

    /** pathopen.e:193			path &= SLASH*/
    // SubProg expand_path pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 149 op: CONCAT (15)
    Append(&_path_49899, _path_49899, 47);
    // SubProg expand_path pc: 153 op: NOP1 (159)
L5: // addr: 154 pc: 153 sub: 49897 op: 159
    // SubProg expand_path pc: 154 op: STARTLINE (58)

    /** pathopen.e:196		return path*/
    // SubProg expand_path pc: 156 op: RETURNF (28)

// Exiting block BLOCK: expand_path

// block var prefix_49900
    DeRefDS(_prefix_49900);

// block var absolute_49901

// block var home_49905
    DeRefi(_home_49905);
    return _path_49899;
    // SubProg expand_path pc: 160 op: BADRETURNF (43)
    ;
}


void _46add_include_directory(object _path_49939)
{
// skipping _25835  name type: 0
// skipping _25834  name type: 0
    object _25833 = NOVALUE; // 49942 25833
// skipping _25832  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_include_directory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_include_directory pc: 3 op: STARTLINE (58)

    /** pathopen.e:200		path = expand_path( path, pwd )*/
    // SubProg add_include_directory pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 7 op: PROC (27)
    RefDS(_path_49939);
    RefDS(_46pwd_49800);
    _0 = _path_49939;
    _path_49939 = _46expand_path(_path_49939, _46pwd_49800);
    DeRefDS(_0);
    // SubProg add_include_directory pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg add_include_directory pc: 14 op: STARTLINE (58)

    /** pathopen.e:202		if not find( path, config_inc_paths ) then*/
    // SubProg add_include_directory pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 18 op: FIND_FROM (176)
    _25833 = find_from(_path_49939, _46config_inc_paths_49797, 1);
    // SubProg add_include_directory pc: 23 op: NOT_IFW (108)
    if (_25833 != 0)
    goto L1; // [23] 35
    _25833 = NOVALUE;
    // SubProg add_include_directory pc: 26 op: STARTLINE (58)

    /** pathopen.e:203			config_inc_paths = append( config_inc_paths, path )*/
    // SubProg add_include_directory pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 30 op: APPEND (35)
    RefDS(_path_49939);
    Append(&_46config_inc_paths_49797, _46config_inc_paths_49797, _path_49939);
    // SubProg add_include_directory pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 49937 op: 159
    // SubProg add_include_directory pc: 35 op: STARTLINE (58)

    /** pathopen.e:205	end procedure*/
    // SubProg add_include_directory pc: 37 op: RETURNP (29)

// Exiting block BLOCK: add_include_directory

// block var path_49939
    DeRefDS(_path_49939);
    return;
    // SubProg add_include_directory pc: 40 op: BADRETURNF (43)
    ;
}


object _46load_euphoria_config(object _file_49948)
{
    object _fn_49949 = NOVALUE;
    object _in_49950 = NOVALUE;
    object _spos_49951 = NOVALUE;
    object _epos_49952 = NOVALUE;
    object _conf_path_49953 = NOVALUE;
    object _new_args_49954 = NOVALUE;
    object _arg_49955 = NOVALUE;
    object _parm_49956 = NOVALUE;
    object _section_49957 = NOVALUE;
    object _needed_50054 = NOVALUE;
// skipping _25932  name type: 0
// skipping _25931  name type: 0
    object _25930 = NOVALUE; // 50116 25930
    object _25929 = NOVALUE; // 50115 25929
// skipping _25928  name type: 0
// skipping _25927  name type: 0
    object _25926 = NOVALUE; // 50110 25926
// skipping _25925  name type: 0
    object _25924 = NOVALUE; // 50108 25924
    object _25923 = NOVALUE; // 50106 25923
// skipping _25921  name type: 0
// skipping _25919  name type: 0
// skipping _25916  name type: 0
// skipping _25914  name type: 0
// skipping _25911  name type: 0
// skipping _25909  name type: 0
// skipping _25902  name type: 0
    object _25901 = NOVALUE; // 50052 25901
// skipping _25899  name type: 0
    object _25898 = NOVALUE; // 50046 25898
    object _25897 = NOVALUE; // 50045 25897
// skipping _25896  name type: 0
    object _25895 = NOVALUE; // 50043 25895
// skipping _25894  name type: 0
// skipping _25893  name type: 0
// skipping _25892  name type: 0
    object _25891 = NOVALUE; // 50037 25891
// skipping _25890  name type: 0
    object _25889 = NOVALUE; // 50034 25889
// skipping _25888  name type: 0
    object _25887 = NOVALUE; // 50031 25887
// skipping _25886  name type: 0
    object _25885 = NOVALUE; // 50028 25885
// skipping _25884  name type: 0
    object _25883 = NOVALUE; // 50025 25883
// skipping _25882  name type: 0
    object _25881 = NOVALUE; // 50021 25881
    object _25880 = NOVALUE; // 50020 25880
    object _25879 = NOVALUE; // 50019 25879
    object _25878 = NOVALUE; // 50018 25878
    object _25877 = NOVALUE; // 50017 25877
    object _25876 = NOVALUE; // 50016 25876
    object _25875 = NOVALUE; // 50015 25875
    object _25874 = NOVALUE; // 50014 25874
// skipping _25873  name type: 0
    object _25872 = NOVALUE; // 50011 25872
// skipping _25871  name type: 0
    object _25870 = NOVALUE; // 50009 25870
// skipping _25869  name type: 0
    object _25868 = NOVALUE; // 50006 25868
// skipping _25867  name type: 0
// skipping _25866  name type: 0
// skipping _25865  name type: 0
    object _25864 = NOVALUE; // 50001 25864
    object _25863 = NOVALUE; // 50000 25863
// skipping _25862  name type: 0
// skipping _25861  name type: 0
// skipping _25860  name type: 0
// skipping _25859  name type: 0
    object _25858 = NOVALUE; // 49993 25858
    object _25856 = NOVALUE; // 49991 25856
// skipping _25855  name type: 0
    object _25854 = NOVALUE; // 49988 25854
    object _25853 = NOVALUE; // 49986 25853
// skipping _25852  name type: 0
// skipping _25851  name type: 0
// skipping _25850  name type: 0
// skipping _25847  name type: 0
// skipping _25846  name type: 0
    object _25845 = NOVALUE; // 49976 25845
// skipping _25844  name type: 0
// skipping _25843  name type: 0
// skipping _25841  name type: 0
// skipping _25840  name type: 0
    object _25839 = NOVALUE; // 49965 25839
    object _25838 = NOVALUE; // 49964 25838
// skipping _25837  name type: 0
    object _25836 = NOVALUE; // 49960 25836
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg load_euphoria_config pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 3 op: STARTLINE (58)

    /** pathopen.e:213		sequence new_args = {}*/
    // SubProg load_euphoria_config pc: 5 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_new_args_49954);
    _new_args_49954 = _21936;
    // SubProg load_euphoria_config pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 10 op: STARTLINE (58)

    /** pathopen.e:219		if file_type(file) = FILETYPE_DIRECTORY then*/
    // SubProg load_euphoria_config pc: 12 op: PROC (27)
    RefDS(_file_49948);
    _25836 = _18file_type(_file_49948);
    // SubProg load_euphoria_config pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 18 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25836, 2)){
        DeRef(_25836);
        _25836 = NOVALUE;
        goto L1; // [18] 53
    }
    DeRef(_25836);
    _25836 = NOVALUE;
    // SubProg load_euphoria_config pc: 22 op: STARTLINE (58)

    /** pathopen.e:220			if file[$] != SLASH then*/
    // SubProg load_euphoria_config pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_file_49948)){
            _25838 = SEQ_PTR(_file_49948)->length;
    }
    else {
        _25838 = 1;
    }
    // SubProg load_euphoria_config pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_file_49948);
    _25839 = (object)*(((s1_ptr)_2)->base + _25838);
    // SubProg load_euphoria_config pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 33 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _25839, 47)){
        _25839 = NOVALUE;
        goto L2; // [33] 46
    }
    _25839 = NOVALUE;
    // SubProg load_euphoria_config pc: 37 op: STARTLINE (58)

    /** pathopen.e:221				file &= SLASH*/
    // SubProg load_euphoria_config pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 41 op: CONCAT (15)
    Append(&_file_49948, _file_49948, 47);
    // SubProg load_euphoria_config pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 46 op: STARTLINE (58)

    /** pathopen.e:223			file &= "eu.cfg"*/
    // SubProg load_euphoria_config pc: 48 op: CONCAT (15)
    Concat((object_ptr)&_file_49948, _file_49948, _25842);
    // SubProg load_euphoria_config pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 53 op: STARTLINE (58)

    /** pathopen.e:226		conf_path = canonical_path( file,,CORRECT )*/
    // SubProg load_euphoria_config pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 57 op: PROC (27)
    RefDS(_file_49948);
    _0 = _conf_path_49953;
    _conf_path_49953 = _18canonical_path(_file_49948, 0, 2);
    DeRef(_0);
    // SubProg load_euphoria_config pc: 63 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 65 op: STARTLINE (58)

    /** pathopen.e:229		if find(conf_path, seen_conf) != 0 then*/
    // SubProg load_euphoria_config pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 69 op: FIND_FROM (176)
    _25845 = find_from(_conf_path_49953, _46seen_conf_49945, 1);
    // SubProg load_euphoria_config pc: 74 op: NOTEQ_IFW_I (122)
    if (_25845 == 0)
    goto L3; // [74] 85
    // SubProg load_euphoria_config pc: 78 op: STARTLINE (58)

    /** pathopen.e:230			return {}*/
    // SubProg load_euphoria_config pc: 80 op: RETURNF (28)
    RefDS(_21936);

// Exiting block BLOCK: load_euphoria_config

// block var file_49948
    DeRefDS(_file_49948);

// block var fn_49949

// block var in_49950
    DeRefi(_in_49950);

// block var spos_49951

// block var epos_49952

// block var conf_path_49953
    DeRefDS(_conf_path_49953);

// block var new_args_49954
    DeRef(_new_args_49954);

// block var arg_49955
    DeRefi(_arg_49955);

// block var parm_49956
    DeRefi(_parm_49956);

// block var section_49957
    DeRef(_section_49957);
    return _21936;
    // SubProg load_euphoria_config pc: 84 op: NOP1 (159)
L3: // addr: 85 pc: 84 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 85 op: STARTLINE (58)

    /** pathopen.e:232		seen_conf = append(seen_conf, conf_path)*/
    // SubProg load_euphoria_config pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 89 op: APPEND (35)
    RefDS(_conf_path_49953);
    Append(&_46seen_conf_49945, _46seen_conf_49945, _conf_path_49953);
    // SubProg load_euphoria_config pc: 93 op: STARTLINE (58)

    /** pathopen.e:234		section = "all"*/
    // SubProg load_euphoria_config pc: 95 op: ASSIGN (18)
    RefDS(_25848);
    DeRef(_section_49957);
    _section_49957 = _25848;
    // SubProg load_euphoria_config pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 100 op: STARTLINE (58)

    /** pathopen.e:235		fn = open( conf_path, "r" )*/
    // SubProg load_euphoria_config pc: 102 op: OPEN (37)
    _fn_49949 = EOpen(_conf_path_49953, _25849, 0);
    // SubProg load_euphoria_config pc: 107 op: STARTLINE (58)

    /** pathopen.e:236		if fn = -1 then return {} end if*/
    // SubProg load_euphoria_config pc: 109 op: EQUALS_IFW_I (121)
    if (_fn_49949 != -1)
    goto L4; // [109] 118
    // SubProg load_euphoria_config pc: 113 op: RETURNF (28)
    RefDS(_21936);

// Exiting block BLOCK: load_euphoria_config

// block var file_49948
    DeRefDS(_file_49948);

// block var fn_49949

// block var in_49950
    DeRefi(_in_49950);

// block var spos_49951

// block var epos_49952

// block var conf_path_49953
    DeRefDS(_conf_path_49953);

// block var new_args_49954
    DeRef(_new_args_49954);

// block var arg_49955
    DeRefi(_arg_49955);

// block var parm_49956
    DeRefi(_parm_49956);

// block var section_49957
    DeRefDSi(_section_49957);
    return _21936;
    // SubProg load_euphoria_config pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 118 op: STARTLINE (58)

    /** pathopen.e:238		in = gets( fn )*/
    // SubProg load_euphoria_config pc: 120 op: GETS (17)
    DeRefi(_in_49950);
    _in_49950 = EGets(_fn_49949);
    // SubProg load_euphoria_config pc: 123 op: STARTLINE (58)

    /** pathopen.e:239		while sequence( in ) do*/
    // SubProg load_euphoria_config pc: 125 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 127 op: NOPWHILE (158)
L5: // addr: 128 pc: 127 sub: 49946 op: 158
    // SubProg load_euphoria_config pc: 128 op: IS_A_SEQUENCE (68)
    _25853 = IS_SEQUENCE(_in_49950);
    // SubProg load_euphoria_config pc: 131 op: WHILE (47)
    if (_25853 == 0)
    {
        _25853 = NOVALUE;
        goto L6; // [131] 768
    }
    else{
        _25853 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 134 op: STARTLINE (58)

    /** pathopen.e:241			spos = 1*/
    // SubProg load_euphoria_config pc: 136 op: ASSIGN_I (113)
    _spos_49951 = 1;
    // SubProg load_euphoria_config pc: 139 op: STARTLINE (58)

    /** pathopen.e:242			while spos <= length(in) do*/
    // SubProg load_euphoria_config pc: 141 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 143 op: NOPWHILE (158)
L7: // addr: 144 pc: 143 sub: 49946 op: 158
    // SubProg load_euphoria_config pc: 144 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49950)){
            _25854 = SEQ_PTR(_in_49950)->length;
    }
    else {
        _25854 = 1;
    }
    // SubProg load_euphoria_config pc: 147 op: LESSEQ_IFW_I (123)
    if (_spos_49951 > _25854)
    goto L8; // [147] 182
    // SubProg load_euphoria_config pc: 151 op: STARTLINE (58)

    /** pathopen.e:243				if find( in[spos], "\n\r \t" ) = 0 then*/
    // SubProg load_euphoria_config pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49950);
    _25856 = (object)*(((s1_ptr)_2)->base + _spos_49951);
    // SubProg load_euphoria_config pc: 157 op: FIND_FROM (176)
    _25858 = find_from(_25856, _25857, 1);
    _25856 = NOVALUE;
    // SubProg load_euphoria_config pc: 162 op: EQUALS_IFW_I (121)
    if (_25858 != 0)
    goto L9; // [162] 171
    // SubProg load_euphoria_config pc: 166 op: STARTLINE (58)

    /** pathopen.e:244					exit*/
    // SubProg load_euphoria_config pc: 168 op: EXIT (61)
    goto L8; // [168] 182
    // SubProg load_euphoria_config pc: 170 op: NOP1 (159)
L9: // addr: 171 pc: 170 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 171 op: STARTLINE (58)

    /** pathopen.e:246				spos += 1*/
    // SubProg load_euphoria_config pc: 173 op: PLUS1_I (117)
    _spos_49951 = _spos_49951 + 1;
    // SubProg load_euphoria_config pc: 177 op: STARTLINE (58)

    /** pathopen.e:247			end while*/
    // SubProg load_euphoria_config pc: 179 op: ENDWHILE (22)
    goto L7; // [179] 144
    // SubProg load_euphoria_config pc: 181 op: NOP1 (159)
L8: // addr: 182 pc: 181 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 182 op: STARTLINE (58)

    /** pathopen.e:249			epos = length(in)*/
    // SubProg load_euphoria_config pc: 184 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49950)){
            _epos_49952 = SEQ_PTR(_in_49950)->length;
    }
    else {
        _epos_49952 = 1;
    }
    // SubProg load_euphoria_config pc: 187 op: STARTLINE (58)

    /** pathopen.e:250			while epos >= spos do*/
    // SubProg load_euphoria_config pc: 189 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 191 op: NOPWHILE (158)
LA: // addr: 192 pc: 191 sub: 49946 op: 158
    // SubProg load_euphoria_config pc: 192 op: GREATEREQ_IFW_I (120)
    if (_epos_49952 < _spos_49951)
    goto LB; // [192] 227
    // SubProg load_euphoria_config pc: 196 op: STARTLINE (58)

    /** pathopen.e:251				if find( in[epos], "\n\r \t" ) = 0 then*/
    // SubProg load_euphoria_config pc: 198 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49950);
    _25863 = (object)*(((s1_ptr)_2)->base + _epos_49952);
    // SubProg load_euphoria_config pc: 202 op: FIND_FROM (176)
    _25864 = find_from(_25863, _25857, 1);
    _25863 = NOVALUE;
    // SubProg load_euphoria_config pc: 207 op: EQUALS_IFW_I (121)
    if (_25864 != 0)
    goto LC; // [207] 216
    // SubProg load_euphoria_config pc: 211 op: STARTLINE (58)

    /** pathopen.e:252					exit*/
    // SubProg load_euphoria_config pc: 213 op: EXIT (61)
    goto LB; // [213] 227
    // SubProg load_euphoria_config pc: 215 op: NOP1 (159)
LC: // addr: 216 pc: 215 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 216 op: STARTLINE (58)

    /** pathopen.e:254				epos -= 1*/
    // SubProg load_euphoria_config pc: 218 op: MINUS_I (116)
    _epos_49952 = _epos_49952 - 1;
    // SubProg load_euphoria_config pc: 222 op: STARTLINE (58)

    /** pathopen.e:255			end while*/
    // SubProg load_euphoria_config pc: 224 op: ENDWHILE (22)
    goto LA; // [224] 192
    // SubProg load_euphoria_config pc: 226 op: NOP1 (159)
LB: // addr: 227 pc: 226 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 227 op: STARTLINE (58)

    /** pathopen.e:257			in = in[spos .. epos]		*/
    // SubProg load_euphoria_config pc: 229 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_in_49950;
    RHS_Slice(_in_49950, _spos_49951, _epos_49952);
    // SubProg load_euphoria_config pc: 234 op: STARTLINE (58)

    /** pathopen.e:260			arg = ""*/
    // SubProg load_euphoria_config pc: 236 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_arg_49955);
    _arg_49955 = _21936;
    // SubProg load_euphoria_config pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 241 op: STARTLINE (58)

    /** pathopen.e:261			parm = ""*/
    // SubProg load_euphoria_config pc: 243 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_parm_49956);
    _parm_49956 = _21936;
    // SubProg load_euphoria_config pc: 246 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 248 op: STARTLINE (58)

    /** pathopen.e:269			if length(in) > 0 then*/
    // SubProg load_euphoria_config pc: 250 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49950)){
            _25868 = SEQ_PTR(_in_49950)->length;
    }
    else {
        _25868 = 1;
    }
    // SubProg load_euphoria_config pc: 253 op: GREATER_IFW_I (124)
    if (_25868 <= 0)
    goto LD; // [253] 477
    // SubProg load_euphoria_config pc: 257 op: STARTLINE (58)

    /** pathopen.e:270				if in[1] = '[' then*/
    // SubProg load_euphoria_config pc: 259 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49950);
    _25870 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg load_euphoria_config pc: 263 op: EQUALS_IFW (104)
    if (_25870 != 91)
    goto LE; // [263] 354
    // SubProg load_euphoria_config pc: 267 op: STARTLINE (58)

    /** pathopen.e:272					section = in[2..$]*/
    // SubProg load_euphoria_config pc: 269 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49950)){
            _25872 = SEQ_PTR(_in_49950)->length;
    }
    else {
        _25872 = 1;
    }
    // SubProg load_euphoria_config pc: 272 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_section_49957;
    RHS_Slice(_in_49950, 2, _25872);
    // SubProg load_euphoria_config pc: 277 op: STARTLINE (58)

    /** pathopen.e:273					if length(section) > 0 and section[$] = ']' then*/
    // SubProg load_euphoria_config pc: 279 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49957)){
            _25874 = SEQ_PTR(_section_49957)->length;
    }
    else {
        _25874 = 1;
    }
    // SubProg load_euphoria_config pc: 282 op: GREATER (6)
    _25875 = (_25874 > 0);
    _25874 = NOVALUE;
    // SubProg load_euphoria_config pc: 286 op: SC1_AND_IF (146)
    if (_25875 == 0) {
        goto LF; // [286] 320
    }
    // SubProg load_euphoria_config pc: 290 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49957)){
            _25877 = SEQ_PTR(_section_49957)->length;
    }
    else {
        _25877 = 1;
    }
    // SubProg load_euphoria_config pc: 293 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_section_49957);
    _25878 = (object)*(((s1_ptr)_2)->base + _25877);
    // SubProg load_euphoria_config pc: 297 op: EQUALS (3)
    _25879 = (_25878 == 93);
    _25878 = NOVALUE;
    // SubProg load_euphoria_config pc: 301 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 302 op: IF (20)
    if (_25879 == 0)
    {
        DeRef(_25879);
        _25879 = NOVALUE;
        goto LF; // [302] 320
    }
    else{
        DeRef(_25879);
        _25879 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 305 op: STARTLINE (58)

    /** pathopen.e:274						section = section[1..$-1]*/
    // SubProg load_euphoria_config pc: 307 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49957)){
            _25880 = SEQ_PTR(_section_49957)->length;
    }
    else {
        _25880 = 1;
    }
    // SubProg load_euphoria_config pc: 310 op: MINUS (10)
    _25881 = _25880 - 1;
    _25880 = NOVALUE;
    // SubProg load_euphoria_config pc: 314 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_section_49957;
    RHS_Slice(_section_49957, 1, _25881);
    // SubProg load_euphoria_config pc: 319 op: NOP1 (159)
LF: // addr: 320 pc: 319 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 320 op: STARTLINE (58)

    /** pathopen.e:276					section = lower(trim(section))*/
    // SubProg load_euphoria_config pc: 322 op: PROC (27)
    RefDS(_section_49957);
    RefDS(_4573);
    _25883 = _15trim(_section_49957, _4573, 0);
    // SubProg load_euphoria_config pc: 328 op: PROC (27)
    _0 = _section_49957;
    _section_49957 = _15lower(_25883);
    DeRefDS(_0);
    _25883 = NOVALUE;
    // SubProg load_euphoria_config pc: 332 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 334 op: STARTLINE (58)

    /** pathopen.e:277					if length(section) = 0 then*/
    // SubProg load_euphoria_config pc: 336 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49957)){
            _25885 = SEQ_PTR(_section_49957)->length;
    }
    else {
        _25885 = 1;
    }
    // SubProg load_euphoria_config pc: 339 op: EQUALS_IFW_I (121)
    if (_25885 != 0)
    goto L10; // [339] 476
    // SubProg load_euphoria_config pc: 343 op: STARTLINE (58)

    /** pathopen.e:278						section = "all"*/
    // SubProg load_euphoria_config pc: 345 op: ASSIGN (18)
    RefDS(_25848);
    DeRefDS(_section_49957);
    _section_49957 = _25848;
    // SubProg load_euphoria_config pc: 348 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 350 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 351 op: ELSE (23)
    goto L10; // [351] 476
    // SubProg load_euphoria_config pc: 353 op: NOP1 (159)
LE: // addr: 354 pc: 353 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 354 op: STARTLINE (58)

    /** pathopen.e:281				elsif length(in) > 2 then*/
    // SubProg load_euphoria_config pc: 356 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49950)){
            _25887 = SEQ_PTR(_in_49950)->length;
    }
    else {
        _25887 = 1;
    }
    // SubProg load_euphoria_config pc: 359 op: GREATER_IFW_I (124)
    if (_25887 <= 2)
    goto L11; // [359] 461
    // SubProg load_euphoria_config pc: 363 op: STARTLINE (58)

    /** pathopen.e:282					if in[1] = '-' then*/
    // SubProg load_euphoria_config pc: 365 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49950);
    _25889 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg load_euphoria_config pc: 369 op: EQUALS_IFW (104)
    if (_25889 != 45)
    goto L12; // [369] 443
    // SubProg load_euphoria_config pc: 373 op: STARTLINE (58)

    /** pathopen.e:283						if in[2] != '-' then*/
    // SubProg load_euphoria_config pc: 375 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49950);
    _25891 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg load_euphoria_config pc: 379 op: NOTEQ_IFW (105)
    if (_25891 == 45)
    goto L10; // [379] 476
    // SubProg load_euphoria_config pc: 383 op: STARTLINE (58)

    /** pathopen.e:284							spos = find(' ', in)*/
    // SubProg load_euphoria_config pc: 385 op: FIND_FROM (176)
    _spos_49951 = find_from(32, _in_49950, 1);
    // SubProg load_euphoria_config pc: 390 op: STARTLINE (58)

    /** pathopen.e:285							if spos = 0 then*/
    // SubProg load_euphoria_config pc: 392 op: EQUALS_IFW_I (121)
    if (_spos_49951 != 0)
    goto L13; // [392] 413
    // SubProg load_euphoria_config pc: 396 op: STARTLINE (58)

    /** pathopen.e:286								arg = in*/
    // SubProg load_euphoria_config pc: 398 op: ASSIGN (18)
    Ref(_in_49950);
    DeRefi(_arg_49955);
    _arg_49955 = _in_49950;
    // SubProg load_euphoria_config pc: 401 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 403 op: STARTLINE (58)

    /** pathopen.e:287								parm = ""*/
    // SubProg load_euphoria_config pc: 405 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_parm_49956);
    _parm_49956 = _21936;
    // SubProg load_euphoria_config pc: 408 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 410 op: ELSE (23)
    goto L10; // [410] 476
    // SubProg load_euphoria_config pc: 412 op: NOP1 (159)
L13: // addr: 413 pc: 412 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 413 op: STARTLINE (58)

    /** pathopen.e:289								arg = in[1..spos - 1]*/
    // SubProg load_euphoria_config pc: 415 op: MINUS (10)
    _25895 = _spos_49951 - 1;
    // SubProg load_euphoria_config pc: 419 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_arg_49955;
    RHS_Slice(_in_49950, 1, _25895);
    // SubProg load_euphoria_config pc: 424 op: STARTLINE (58)

    /** pathopen.e:290								parm = in[spos + 1 .. $]*/
    // SubProg load_euphoria_config pc: 426 op: PLUS1 (93)
    _25897 = _spos_49951 + 1;
    if (_25897 > MAXINT){
        _25897 = NewDouble((eudouble)_25897);
    }
    // SubProg load_euphoria_config pc: 430 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49950)){
            _25898 = SEQ_PTR(_in_49950)->length;
    }
    else {
        _25898 = 1;
    }
    // SubProg load_euphoria_config pc: 433 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_parm_49956;
    RHS_Slice(_in_49950, _25897, _25898);
    // SubProg load_euphoria_config pc: 438 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 439 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 440 op: ELSE (23)
    goto L10; // [440] 476
    // SubProg load_euphoria_config pc: 442 op: NOP1 (159)
L12: // addr: 443 pc: 442 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 443 op: STARTLINE (58)

    /** pathopen.e:294						arg = "-i"*/
    // SubProg load_euphoria_config pc: 445 op: ASSIGN (18)
    RefDS(_25900);
    DeRefi(_arg_49955);
    _arg_49955 = _25900;
    // SubProg load_euphoria_config pc: 448 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 450 op: STARTLINE (58)

    /** pathopen.e:295						parm = in*/
    // SubProg load_euphoria_config pc: 452 op: ASSIGN (18)
    Ref(_in_49950);
    DeRefi(_parm_49956);
    _parm_49956 = _in_49950;
    // SubProg load_euphoria_config pc: 455 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 457 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 458 op: ELSE (23)
    goto L10; // [458] 476
    // SubProg load_euphoria_config pc: 460 op: NOP1 (159)
L11: // addr: 461 pc: 460 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 461 op: STARTLINE (58)

    /** pathopen.e:298					arg = "-i"*/
    // SubProg load_euphoria_config pc: 463 op: ASSIGN (18)
    RefDS(_25900);
    DeRefi(_arg_49955);
    _arg_49955 = _25900;
    // SubProg load_euphoria_config pc: 466 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 468 op: STARTLINE (58)

    /** pathopen.e:299					parm = in*/
    // SubProg load_euphoria_config pc: 470 op: ASSIGN (18)
    Ref(_in_49950);
    DeRefi(_parm_49956);
    _parm_49956 = _in_49950;
    // SubProg load_euphoria_config pc: 473 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 475 op: NOP1 (159)
L10: // addr: 476 pc: 475 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 476 op: NOP1 (159)
LD: // addr: 477 pc: 476 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 477 op: STARTLINE (58)

    /** pathopen.e:303			if length(arg) > 0 then*/
    // SubProg load_euphoria_config pc: 479 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49955)){
            _25901 = SEQ_PTR(_arg_49955)->length;
    }
    else {
        _25901 = 1;
    }
    // SubProg load_euphoria_config pc: 482 op: GREATER_IFW_I (124)
    if (_25901 <= 0)
    goto L14; // [482] 756
    // SubProg load_euphoria_config pc: 486 op: STARTLINE (58)

    /** pathopen.e:304				integer needed = 0*/
    // SubProg load_euphoria_config pc: 488 op: ASSIGN_I (113)
    _needed_50054 = 0;
    // SubProg load_euphoria_config pc: 491 op: STARTLINE (58)

    /** pathopen.e:305				switch section do*/
    // SubProg load_euphoria_config pc: 493 op: SWITCH (185)
    _1 = find(_section_49957, _25903);
    switch ( _1 ){ 
        // SubProg load_euphoria_config pc: 498 op: STARTLINE (58)

        /** pathopen.e:306					case "all" then*/
        // SubProg load_euphoria_config pc: 500 op: CASE (186)
        case 1:
        // SubProg load_euphoria_config pc: 502 op: STARTLINE (58)

        /** pathopen.e:307						needed = 1*/
        // SubProg load_euphoria_config pc: 504 op: ASSIGN_I (113)
        _needed_50054 = 1;
        // SubProg load_euphoria_config pc: 507 op: ELSE (23)
        goto L15; // [507] 691
        // SubProg load_euphoria_config pc: 509 op: STARTLINE (58)

        /** pathopen.e:309					case "windows" then*/
        // SubProg load_euphoria_config pc: 511 op: CASE (186)
        case 2:
        // SubProg load_euphoria_config pc: 513 op: STARTLINE (58)

        /** pathopen.e:310						needed = TWINDOWS*/
        // SubProg load_euphoria_config pc: 515 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 517 op: ASSIGN (18)
        _needed_50054 = 0;
        // SubProg load_euphoria_config pc: 520 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 522 op: ELSE (23)
        goto L15; // [522] 691
        // SubProg load_euphoria_config pc: 524 op: STARTLINE (58)

        /** pathopen.e:312					case "unix" then*/
        // SubProg load_euphoria_config pc: 526 op: CASE (186)
        case 3:
        // SubProg load_euphoria_config pc: 528 op: STARTLINE (58)

        /** pathopen.e:313						needed = TUNIX*/
        // SubProg load_euphoria_config pc: 530 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 532 op: ASSIGN (18)
        _needed_50054 = _39TUNIX_19966;
        // SubProg load_euphoria_config pc: 535 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 537 op: ELSE (23)
        goto L15; // [537] 691
        // SubProg load_euphoria_config pc: 539 op: STARTLINE (58)

        /** pathopen.e:315					case "translate" then*/
        // SubProg load_euphoria_config pc: 541 op: CASE (186)
        case 4:
        // SubProg load_euphoria_config pc: 543 op: STARTLINE (58)

        /** pathopen.e:316						needed = TRANSLATE*/
        // SubProg load_euphoria_config pc: 545 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 547 op: ASSIGN (18)
        _needed_50054 = _34TRANSLATE_14813;
        // SubProg load_euphoria_config pc: 550 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 552 op: ELSE (23)
        goto L15; // [552] 691
        // SubProg load_euphoria_config pc: 554 op: STARTLINE (58)

        /** pathopen.e:318					case "translate:windows" then*/
        // SubProg load_euphoria_config pc: 556 op: CASE (186)
        case 5:
        // SubProg load_euphoria_config pc: 558 op: STARTLINE (58)

        /** pathopen.e:319						needed = TRANSLATE and TWINDOWS*/
        // SubProg load_euphoria_config pc: 560 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 562 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 564 op: AND (8)
        _needed_50054 = (_34TRANSLATE_14813 != 0 && 0 != 0);
        // SubProg load_euphoria_config pc: 568 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 570 op: ELSE (23)
        goto L15; // [570] 691
        // SubProg load_euphoria_config pc: 572 op: STARTLINE (58)

        /** pathopen.e:321					case "translate:unix" then*/
        // SubProg load_euphoria_config pc: 574 op: CASE (186)
        case 6:
        // SubProg load_euphoria_config pc: 576 op: STARTLINE (58)

        /** pathopen.e:322						needed = TRANSLATE and TUNIX*/
        // SubProg load_euphoria_config pc: 578 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 580 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 582 op: AND (8)
        _needed_50054 = (_34TRANSLATE_14813 != 0 && _39TUNIX_19966 != 0);
        // SubProg load_euphoria_config pc: 586 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 588 op: ELSE (23)
        goto L15; // [588] 691
        // SubProg load_euphoria_config pc: 590 op: STARTLINE (58)

        /** pathopen.e:324					case "interpret" then*/
        // SubProg load_euphoria_config pc: 592 op: CASE (186)
        case 7:
        // SubProg load_euphoria_config pc: 594 op: STARTLINE (58)

        /** pathopen.e:325						needed = INTERPRET*/
        // SubProg load_euphoria_config pc: 596 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 598 op: ASSIGN (18)
        _needed_50054 = _34INTERPRET_14810;
        // SubProg load_euphoria_config pc: 601 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 603 op: ELSE (23)
        goto L15; // [603] 691
        // SubProg load_euphoria_config pc: 605 op: STARTLINE (58)

        /** pathopen.e:327					case "interpret:windows" then*/
        // SubProg load_euphoria_config pc: 607 op: CASE (186)
        case 8:
        // SubProg load_euphoria_config pc: 609 op: STARTLINE (58)

        /** pathopen.e:328						needed = INTERPRET and TWINDOWS*/
        // SubProg load_euphoria_config pc: 611 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 613 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 615 op: AND (8)
        _needed_50054 = (_34INTERPRET_14810 != 0 && 0 != 0);
        // SubProg load_euphoria_config pc: 619 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 621 op: ELSE (23)
        goto L15; // [621] 691
        // SubProg load_euphoria_config pc: 623 op: STARTLINE (58)

        /** pathopen.e:330					case "interpret:unix" then*/
        // SubProg load_euphoria_config pc: 625 op: CASE (186)
        case 9:
        // SubProg load_euphoria_config pc: 627 op: STARTLINE (58)

        /** pathopen.e:331						needed = INTERPRET and TUNIX*/
        // SubProg load_euphoria_config pc: 629 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 631 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 633 op: AND (8)
        _needed_50054 = (_34INTERPRET_14810 != 0 && _39TUNIX_19966 != 0);
        // SubProg load_euphoria_config pc: 637 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 639 op: ELSE (23)
        goto L15; // [639] 691
        // SubProg load_euphoria_config pc: 641 op: STARTLINE (58)

        /** pathopen.e:333					case "bind" then*/
        // SubProg load_euphoria_config pc: 643 op: CASE (186)
        case 10:
        // SubProg load_euphoria_config pc: 645 op: STARTLINE (58)

        /** pathopen.e:334						needed = BIND*/
        // SubProg load_euphoria_config pc: 647 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 649 op: ASSIGN (18)
        _needed_50054 = _34BIND_14816;
        // SubProg load_euphoria_config pc: 652 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 654 op: ELSE (23)
        goto L15; // [654] 691
        // SubProg load_euphoria_config pc: 656 op: STARTLINE (58)

        /** pathopen.e:336					case "bind:windows" then*/
        // SubProg load_euphoria_config pc: 658 op: CASE (186)
        case 11:
        // SubProg load_euphoria_config pc: 660 op: STARTLINE (58)

        /** pathopen.e:337						needed = BIND and TWINDOWS*/
        // SubProg load_euphoria_config pc: 662 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 664 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 666 op: AND (8)
        _needed_50054 = (_34BIND_14816 != 0 && 0 != 0);
        // SubProg load_euphoria_config pc: 670 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 672 op: ELSE (23)
        goto L15; // [672] 691
        // SubProg load_euphoria_config pc: 674 op: STARTLINE (58)

        /** pathopen.e:339					case "bind:unix" then*/
        // SubProg load_euphoria_config pc: 676 op: CASE (186)
        case 12:
        // SubProg load_euphoria_config pc: 678 op: STARTLINE (58)

        /** pathopen.e:340						needed = BIND and TUNIX*/
        // SubProg load_euphoria_config pc: 680 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 682 op: GLOBAL_INIT_CHECK (109)
        // SubProg load_euphoria_config pc: 684 op: AND (8)
        _needed_50054 = (_34BIND_14816 != 0 && _39TUNIX_19966 != 0);
        // SubProg load_euphoria_config pc: 688 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 690 op: NOPSWITCH (187)
    ;}L15: // addr: 691 pc: 690 sub: 49946 op: 187
    // SubProg load_euphoria_config pc: 691 op: STARTLINE (58)

    /** pathopen.e:344				if needed then*/
    // SubProg load_euphoria_config pc: 693 op: IF (20)
    if (_needed_50054 == 0)
    {
        goto L16; // [693] 755
    }
    else{
    }
    // SubProg load_euphoria_config pc: 696 op: STARTLINE (58)

    /** pathopen.e:345					if equal(arg, "-c") then*/
    // SubProg load_euphoria_config pc: 698 op: EQUAL (153)
    if (_arg_49955 == _25922)
    _25923 = 1;
    else if (IS_ATOM_INT(_arg_49955) && IS_ATOM_INT(_25922))
    _25923 = 0;
    else
    _25923 = (compare(_arg_49955, _25922) == 0);
    // SubProg load_euphoria_config pc: 702 op: IF (20)
    if (_25923 == 0)
    {
        _25923 = NOVALUE;
        goto L17; // [702] 728
    }
    else{
        _25923 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 705 op: STARTLINE (58)

    /** pathopen.e:346						if length(parm) > 0 then*/
    // SubProg load_euphoria_config pc: 707 op: LENGTH (42)
    if (IS_SEQUENCE(_parm_49956)){
            _25924 = SEQ_PTR(_parm_49956)->length;
    }
    else {
        _25924 = 1;
    }
    // SubProg load_euphoria_config pc: 710 op: GREATER_IFW_I (124)
    if (_25924 <= 0)
    goto L18; // [710] 754
    // SubProg load_euphoria_config pc: 714 op: STARTLINE (58)

    /** pathopen.e:347							new_args &= load_euphoria_config(parm)*/
    // SubProg load_euphoria_config pc: 716 op: PROC (27)
    RefDS(_parm_49956);
    _25926 = _46load_euphoria_config(_parm_49956);
    // SubProg load_euphoria_config pc: 720 op: CONCAT (15)
    if (IS_SEQUENCE(_new_args_49954) && IS_ATOM(_25926)) {
        Ref(_25926);
        Append(&_new_args_49954, _new_args_49954, _25926);
    }
    else if (IS_ATOM(_new_args_49954) && IS_SEQUENCE(_25926)) {
    }
    else {
        Concat((object_ptr)&_new_args_49954, _new_args_49954, _25926);
    }
    DeRef(_25926);
    _25926 = NOVALUE;
    // SubProg load_euphoria_config pc: 724 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 725 op: ELSE (23)
    goto L18; // [725] 754
    // SubProg load_euphoria_config pc: 727 op: NOP1 (159)
L17: // addr: 728 pc: 727 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 728 op: STARTLINE (58)

    /** pathopen.e:350						new_args = append(new_args, arg)*/
    // SubProg load_euphoria_config pc: 730 op: APPEND (35)
    RefDS(_arg_49955);
    Append(&_new_args_49954, _new_args_49954, _arg_49955);
    // SubProg load_euphoria_config pc: 734 op: STARTLINE (58)

    /** pathopen.e:351						if length(parm > 0) then*/
    // SubProg load_euphoria_config pc: 736 op: GREATER (6)
    _25929 = binary_op(GREATER, _parm_49956, 0);
    // SubProg load_euphoria_config pc: 740 op: LENGTH (42)
    if (IS_SEQUENCE(_25929)){
            _25930 = SEQ_PTR(_25929)->length;
    }
    else {
        _25930 = 1;
    }
    DeRefDS(_25929);
    _25929 = NOVALUE;
    // SubProg load_euphoria_config pc: 743 op: IF (20)
    if (_25930 == 0)
    {
        _25930 = NOVALUE;
        goto L19; // [743] 753
    }
    else{
        _25930 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 746 op: STARTLINE (58)

    /** pathopen.e:352							new_args = append(new_args, parm)*/
    // SubProg load_euphoria_config pc: 748 op: APPEND (35)
    RefDS(_parm_49956);
    Append(&_new_args_49954, _new_args_49954, _parm_49956);
    // SubProg load_euphoria_config pc: 752 op: NOP1 (159)
L19: // addr: 753 pc: 752 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 753 op: NOP1 (159)
L18: // addr: 754 pc: 753 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 754 op: NOP1 (159)
L16: // addr: 755 pc: 754 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 755 op: NOP1 (159)
L14: // addr: 756 pc: 755 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 756 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var needed_50054
    // SubProg load_euphoria_config pc: 758 op: STARTLINE (58)

    /** pathopen.e:358			in = gets( fn )*/
    // SubProg load_euphoria_config pc: 760 op: GETS (17)
    DeRefi(_in_49950);
    _in_49950 = EGets(_fn_49949);
    // SubProg load_euphoria_config pc: 763 op: STARTLINE (58)

    /** pathopen.e:359		end while*/
    // SubProg load_euphoria_config pc: 765 op: ENDWHILE (22)
    goto L5; // [765] 128
    // SubProg load_euphoria_config pc: 767 op: NOP1 (159)
L6: // addr: 768 pc: 767 sub: 49946 op: 159
    // SubProg load_euphoria_config pc: 768 op: STARTLINE (58)

    /** pathopen.e:360		close(fn)*/
    // SubProg load_euphoria_config pc: 770 op: CLOSE (86)
    EClose(_fn_49949);
    // SubProg load_euphoria_config pc: 772 op: STARTLINE (58)

    /** pathopen.e:362		return new_args*/
    // SubProg load_euphoria_config pc: 774 op: RETURNF (28)

// Exiting block BLOCK: load_euphoria_config

// block var file_49948
    DeRefDS(_file_49948);

// block var fn_49949

// block var in_49950
    DeRefi(_in_49950);

// block var spos_49951

// block var epos_49952

// block var conf_path_49953
    DeRef(_conf_path_49953);

// block var arg_49955
    DeRefi(_arg_49955);

// block var parm_49956
    DeRefi(_parm_49956);

// block var section_49957
    DeRef(_section_49957);
    _25929 = NOVALUE;
    DeRef(_25897);
    _25897 = NOVALUE;
    DeRef(_25895);
    _25895 = NOVALUE;
    _25891 = NOVALUE;
    _25889 = NOVALUE;
    DeRef(_25875);
    _25875 = NOVALUE;
    DeRef(_25881);
    _25881 = NOVALUE;
    _25870 = NOVALUE;
    return _new_args_49954;
    // SubProg load_euphoria_config pc: 778 op: BADRETURNF (43)
    ;
}


object _46GetDefaultArgs(object _user_files_50121)
{
    object _env_50122 = NOVALUE;
    object _default_args_50123 = NOVALUE;
    object _conf_file_50124 = NOVALUE;
    object _cmd_options_50126 = NOVALUE;
    object _user_config_50132 = NOVALUE;
// skipping _25966  name type: 0
    object _25965 = NOVALUE; // 50172 25965
    object _25964 = NOVALUE; // 50171 25964
    object _25963 = NOVALUE; // 50169 25963
// skipping _25962  name type: 0
// skipping _25956  name type: 0
    object _25955 = NOVALUE; // 50159 25955
    object _25954 = NOVALUE; // 50158 25954
    object _25952 = NOVALUE; // 50155 25952
// skipping _25951  name type: 0
// skipping _25950  name type: 0
    object _25949 = NOVALUE; // 50151 25949
    object _25948 = NOVALUE; // 50150 25948
// skipping _25946  name type: 0
    object _25945 = NOVALUE; // 50146 25945
    object _25944 = NOVALUE; // 50145 25944
// skipping _25943  name type: 0
    object _25942 = NOVALUE; // 50142 25942
// skipping _25941  name type: 0
    object _25940 = NOVALUE; // 50140 25940
    object _25939 = NOVALUE; // 50139 25939
// skipping _25937  name type: 0
// skipping _25936  name type: 0
    object _25935 = NOVALUE; // 50133 25935
    object _25934 = NOVALUE; // 50131 25934
// skipping _25933  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetDefaultArgs pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 3 op: STARTLINE (58)

    /** pathopen.e:367		sequence default_args = {}*/
    // SubProg GetDefaultArgs pc: 5 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_default_args_50123);
    _default_args_50123 = _21936;
    // SubProg GetDefaultArgs pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 10 op: STARTLINE (58)

    /** pathopen.e:368		sequence conf_file = "eu.cfg"*/
    // SubProg GetDefaultArgs pc: 12 op: ASSIGN (18)
    RefDS(_25842);
    DeRefi(_conf_file_50124);
    _conf_file_50124 = _25842;
    // SubProg GetDefaultArgs pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 17 op: STARTLINE (58)

    /** pathopen.e:370		if loaded_config_inc_paths then return "" end if*/
    // SubProg GetDefaultArgs pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetDefaultArgs pc: 21 op: IF (20)
    if (_46loaded_config_inc_paths_49798 == 0)
    {
        goto L1; // [21] 29
    }
    else{
    }
    // SubProg GetDefaultArgs pc: 24 op: RETURNF (28)
    RefDS(_21936);

// Exiting block BLOCK: GetDefaultArgs

// block var user_files_50121
    DeRefDS(_user_files_50121);

// block var env_50122
    DeRef(_env_50122);

// block var default_args_50123
    DeRefDS(_default_args_50123);

// block var conf_file_50124
    DeRefDSi(_conf_file_50124);

// block var cmd_options_50126
    DeRef(_cmd_options_50126);
    return _21936;
    // SubProg GetDefaultArgs pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 50119 op: 159
    // SubProg GetDefaultArgs pc: 29 op: STARTLINE (58)

    /** pathopen.e:371		loaded_config_inc_paths = 1*/
    // SubProg GetDefaultArgs pc: 31 op: ASSIGN_I (113)
    _46loaded_config_inc_paths_49798 = 1;
    // SubProg GetDefaultArgs pc: 34 op: STARTLINE (58)

    /** pathopen.e:380		sequence cmd_options = get_options()*/
    // SubProg GetDefaultArgs pc: 36 op: PROC (27)
    _0 = _cmd_options_50126;
    _cmd_options_50126 = _47get_options();
    DeRef(_0);
    // SubProg GetDefaultArgs pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 41 op: STARTLINE (58)

    /** pathopen.e:382		default_args = {}*/
    // SubProg GetDefaultArgs pc: 43 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_default_args_50123);
    _default_args_50123 = _21936;
    // SubProg GetDefaultArgs pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 48 op: STARTLINE (58)

    /** pathopen.e:385		for i = 1 to length( user_files ) do*/
    // SubProg GetDefaultArgs pc: 50 op: LENGTH (42)
    if (IS_SEQUENCE(_user_files_50121)){
            _25934 = SEQ_PTR(_user_files_50121)->length;
    }
    else {
        _25934 = 1;
    }
    // SubProg GetDefaultArgs pc: 53 op: FOR_I (125)
    {
        object _i_50130;
        _i_50130 = 1;
L2: // addr: 60 pc: 53 sub: 50119 op: 125
        if (_i_50130 > _25934){
            goto L3; // [53] 92
        }
        // SubProg GetDefaultArgs pc: 60 op: STARTLINE (58)

        /** pathopen.e:386			sequence user_config = load_euphoria_config( user_files[i] )*/
        // SubProg GetDefaultArgs pc: 62 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_user_files_50121);
        _25935 = (object)*(((s1_ptr)_2)->base + _i_50130);
        // SubProg GetDefaultArgs pc: 66 op: PROC (27)
        Ref(_25935);
        _0 = _user_config_50132;
        _user_config_50132 = _46load_euphoria_config(_25935);
        DeRef(_0);
        _25935 = NOVALUE;
        // SubProg GetDefaultArgs pc: 70 op: SEQUENCE_CHECK (97)
        // SubProg GetDefaultArgs pc: 72 op: STARTLINE (58)

        /** pathopen.e:387			default_args = merge_parameters( user_config, default_args, cmd_options, 1 )*/
        // SubProg GetDefaultArgs pc: 74 op: PROC (27)
        RefDS(_user_config_50132);
        RefDS(_default_args_50123);
        RefDS(_cmd_options_50126);
        _0 = _default_args_50123;
        _default_args_50123 = _47merge_parameters(_user_config_50132, _default_args_50123, _cmd_options_50126, 1);
        DeRefDS(_0);
        // SubProg GetDefaultArgs pc: 81 op: SEQUENCE_CHECK (97)
        // SubProg GetDefaultArgs pc: 83 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var user_config_50132
        DeRefDS(_user_config_50132);
        _user_config_50132 = NOVALUE;
        // SubProg GetDefaultArgs pc: 85 op: STARTLINE (58)

        /** pathopen.e:388		end for*/
        // SubProg GetDefaultArgs pc: 87 op: ENDFOR_INT_UP1 (54)
        _i_50130 = _i_50130 + 1;
        goto L2; // [87] 60
L3: // addr: 92 pc: 87 sub: 50119 op: 54
        ;
    }
    // SubProg GetDefaultArgs pc: 92 op: STARTLINE (58)

    /** pathopen.e:391		default_args = merge_parameters( load_euphoria_config("./" & conf_file), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 94 op: CONCAT (15)
    Concat((object_ptr)&_25939, _25938, _conf_file_50124);
    // SubProg GetDefaultArgs pc: 98 op: PROC (27)
    _25940 = _46load_euphoria_config(_25939);
    _25939 = NOVALUE;
    // SubProg GetDefaultArgs pc: 102 op: PROC (27)
    RefDS(_default_args_50123);
    RefDS(_cmd_options_50126);
    _0 = _default_args_50123;
    _default_args_50123 = _47merge_parameters(_25940, _default_args_50123, _cmd_options_50126, 1);
    DeRefDS(_0);
    _25940 = NOVALUE;
    // SubProg GetDefaultArgs pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 111 op: STARTLINE (58)

    /** pathopen.e:394		env = strip_file_from_path( exe_path() )*/
    // SubProg GetDefaultArgs pc: 113 op: PROC (27)
    _25942 = _46exe_path();
    // SubProg GetDefaultArgs pc: 116 op: PROC (27)
    _0 = _env_50122;
    _env_50122 = _46strip_file_from_path(_25942);
    DeRef(_0);
    _25942 = NOVALUE;
    // SubProg GetDefaultArgs pc: 120 op: STARTLINE (58)

    /** pathopen.e:395		default_args = merge_parameters( load_euphoria_config( env & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 122 op: CONCAT (15)
    if (IS_SEQUENCE(_env_50122) && IS_ATOM(_conf_file_50124)) {
    }
    else if (IS_ATOM(_env_50122) && IS_SEQUENCE(_conf_file_50124)) {
        Ref(_env_50122);
        Prepend(&_25944, _conf_file_50124, _env_50122);
    }
    else {
        Concat((object_ptr)&_25944, _env_50122, _conf_file_50124);
    }
    // SubProg GetDefaultArgs pc: 126 op: PROC (27)
    _25945 = _46load_euphoria_config(_25944);
    _25944 = NOVALUE;
    // SubProg GetDefaultArgs pc: 130 op: PROC (27)
    RefDS(_default_args_50123);
    RefDS(_cmd_options_50126);
    _0 = _default_args_50123;
    _default_args_50123 = _47merge_parameters(_25945, _default_args_50123, _cmd_options_50126, 1);
    DeRefDS(_0);
    _25945 = NOVALUE;
    // SubProg GetDefaultArgs pc: 137 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 139 op: STARTLINE (58)

    /** pathopen.e:398		ifdef UNIX then*/
    // SubProg GetDefaultArgs pc: 141 op: STARTLINE (58)

    /** pathopen.e:399			default_args = merge_parameters( load_euphoria_config( "/etc/euphoria/" & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 143 op: CONCAT (15)
    Concat((object_ptr)&_25948, _25947, _conf_file_50124);
    // SubProg GetDefaultArgs pc: 147 op: PROC (27)
    _25949 = _46load_euphoria_config(_25948);
    _25948 = NOVALUE;
    // SubProg GetDefaultArgs pc: 151 op: PROC (27)
    RefDS(_default_args_50123);
    RefDS(_cmd_options_50126);
    _0 = _default_args_50123;
    _default_args_50123 = _47merge_parameters(_25949, _default_args_50123, _cmd_options_50126, 1);
    DeRefDS(_0);
    _25949 = NOVALUE;
    // SubProg GetDefaultArgs pc: 158 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 160 op: STARTLINE (58)

    /** pathopen.e:401			env = getenv( "HOME" )*/
    // SubProg GetDefaultArgs pc: 162 op: GETENV (91)
    DeRef(_env_50122);
    _env_50122 = EGetEnv(_25813);
    // SubProg GetDefaultArgs pc: 165 op: STARTLINE (58)

    /** pathopen.e:402			if sequence(env) then*/
    // SubProg GetDefaultArgs pc: 167 op: IS_A_SEQUENCE (68)
    _25952 = IS_SEQUENCE(_env_50122);
    // SubProg GetDefaultArgs pc: 170 op: IF (20)
    if (_25952 == 0)
    {
        _25952 = NOVALUE;
        goto L4; // [170] 195
    }
    else{
        _25952 = NOVALUE;
    }
    // SubProg GetDefaultArgs pc: 173 op: STARTLINE (58)

    /** pathopen.e:403				default_args = merge_parameters( load_euphoria_config( env & "/." & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 175 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50124;
        concat_list[1] = _25953;
        concat_list[2] = _env_50122;
        Concat_N((object_ptr)&_25954, concat_list, 3);
    }
    // SubProg GetDefaultArgs pc: 181 op: PROC (27)
    _25955 = _46load_euphoria_config(_25954);
    _25954 = NOVALUE;
    // SubProg GetDefaultArgs pc: 185 op: PROC (27)
    RefDS(_default_args_50123);
    RefDS(_cmd_options_50126);
    _0 = _default_args_50123;
    _default_args_50123 = _47merge_parameters(_25955, _default_args_50123, _cmd_options_50126, 1);
    DeRefDS(_0);
    _25955 = NOVALUE;
    // SubProg GetDefaultArgs pc: 192 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 194 op: NOP1 (159)
L4: // addr: 195 pc: 194 sub: 50119 op: 159
    // SubProg GetDefaultArgs pc: 195 op: STARTLINE (58)

    /** pathopen.e:427		env = get_eudir()*/
    // SubProg GetDefaultArgs pc: 197 op: PROC (27)
    _0 = _env_50122;
    _env_50122 = _35get_eudir();
    DeRef(_0);
    // SubProg GetDefaultArgs pc: 200 op: STARTLINE (58)

    /** pathopen.e:428		if sequence(env) then*/
    // SubProg GetDefaultArgs pc: 202 op: IS_A_SEQUENCE (68)
    _25963 = IS_SEQUENCE(_env_50122);
    // SubProg GetDefaultArgs pc: 205 op: IF (20)
    if (_25963 == 0)
    {
        _25963 = NOVALUE;
        goto L5; // [205] 230
    }
    else{
        _25963 = NOVALUE;
    }
    // SubProg GetDefaultArgs pc: 208 op: STARTLINE (58)

    /** pathopen.e:429			default_args = merge_parameters( load_euphoria_config(env & "/" & conf_file), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 210 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50124;
        concat_list[1] = _23512;
        concat_list[2] = _env_50122;
        Concat_N((object_ptr)&_25964, concat_list, 3);
    }
    // SubProg GetDefaultArgs pc: 216 op: PROC (27)
    _25965 = _46load_euphoria_config(_25964);
    _25964 = NOVALUE;
    // SubProg GetDefaultArgs pc: 220 op: PROC (27)
    RefDS(_default_args_50123);
    RefDS(_cmd_options_50126);
    _0 = _default_args_50123;
    _default_args_50123 = _47merge_parameters(_25965, _default_args_50123, _cmd_options_50126, 1);
    DeRefDS(_0);
    _25965 = NOVALUE;
    // SubProg GetDefaultArgs pc: 227 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 229 op: NOP1 (159)
L5: // addr: 230 pc: 229 sub: 50119 op: 159
    // SubProg GetDefaultArgs pc: 230 op: STARTLINE (58)

    /** pathopen.e:432		return default_args*/
    // SubProg GetDefaultArgs pc: 232 op: RETURNF (28)

// Exiting block BLOCK: GetDefaultArgs

// block var user_files_50121
    DeRefDS(_user_files_50121);

// block var env_50122
    DeRef(_env_50122);

// block var conf_file_50124
    DeRefi(_conf_file_50124);

// block var cmd_options_50126
    DeRef(_cmd_options_50126);
    return _default_args_50123;
    // SubProg GetDefaultArgs pc: 236 op: BADRETURNF (43)
    ;
}


object _46ConfPath(object _file_name_50176)
{
    object _file_path_50177 = NOVALUE;
    object _try_50178 = NOVALUE;
    object _25972 = NOVALUE; // 50187 25972
// skipping _25971  name type: 0
// skipping _25970  name type: 0
// skipping _25969  name type: 0
    object _25968 = NOVALUE; // 50182 25968
    object _25967 = NOVALUE; // 50181 25967
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ConfPath pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ConfPath pc: 3 op: STARTLINE (58)

    /** pathopen.e:440		for i = 1 to length(config_inc_paths) do*/
    // SubProg ConfPath pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ConfPath pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_46config_inc_paths_49797)){
            _25967 = SEQ_PTR(_46config_inc_paths_49797)->length;
    }
    else {
        _25967 = 1;
    }
    // SubProg ConfPath pc: 10 op: FOR_I (125)
    {
        object _i_50180;
        _i_50180 = 1;
L1: // addr: 17 pc: 10 sub: 50174 op: 125
        if (_i_50180 > _25967){
            goto L2; // [10] 60
        }
        // SubProg ConfPath pc: 17 op: STARTLINE (58)

        /** pathopen.e:441			file_path = config_inc_paths[i] & file_name*/
        // SubProg ConfPath pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg ConfPath pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46config_inc_paths_49797);
        _25968 = (object)*(((s1_ptr)_2)->base + _i_50180);
        // SubProg ConfPath pc: 25 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50177, _25968, _file_name_50176);
        _25968 = NOVALUE;
        _25968 = NOVALUE;
        // SubProg ConfPath pc: 29 op: STARTLINE (58)

        /** pathopen.e:442			try = open( file_path, "r" )*/
        // SubProg ConfPath pc: 31 op: OPEN (37)
        _try_50178 = EOpen(_file_path_50177, _25849, 0);
        // SubProg ConfPath pc: 36 op: STARTLINE (58)

        /** pathopen.e:443			if try != -1 then*/
        // SubProg ConfPath pc: 38 op: NOTEQ_IFW_I (122)
        if (_try_50178 == -1)
        goto L3; // [38] 53
        // SubProg ConfPath pc: 42 op: STARTLINE (58)

        /** pathopen.e:444				return {file_path, try}*/
        // SubProg ConfPath pc: 44 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50177);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50177;
        ((intptr_t *)_2)[2] = _try_50178;
        _25972 = MAKE_SEQ(_1);
        // SubProg ConfPath pc: 48 op: RETURNF (28)

// Exiting block BLOCK: ConfPath

// block var file_name_50176
        DeRefDS(_file_name_50176);

// block var file_path_50177
        DeRefDS(_file_path_50177);

// block var try_50178
        return _25972;
        // SubProg ConfPath pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 50174 op: 159
        // SubProg ConfPath pc: 53 op: STARTLINE (58)

        /** pathopen.e:446		end for*/
        // SubProg ConfPath pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_50180 = _i_50180 + 1;
        goto L1; // [55] 17
L2: // addr: 60 pc: 55 sub: 50174 op: 54
        ;
    }
    // SubProg ConfPath pc: 60 op: STARTLINE (58)

    /** pathopen.e:447		return -1*/
    // SubProg ConfPath pc: 62 op: RETURNF (28)

// Exiting block BLOCK: ConfPath

// block var file_name_50176
    DeRefDS(_file_name_50176);

// block var file_path_50177
    DeRef(_file_path_50177);

// block var try_50178
    DeRef(_25972);
    _25972 = NOVALUE;
    return -1;
    // SubProg ConfPath pc: 66 op: BADRETURNF (43)
    ;
}


object _46ScanPath(object _file_name_50190, object _env_50191, object _flag_50192)
{
    object _inc_path_50193 = NOVALUE;
    object _full_path_50194 = NOVALUE;
    object _file_path_50195 = NOVALUE;
    object _strings_50196 = NOVALUE;
    object _end_path_50197 = NOVALUE;
    object _start_path_50198 = NOVALUE;
    object _try_50199 = NOVALUE;
    object _use_cache_50200 = NOVALUE;
    object _pos_50201 = NOVALUE;
    object _26020 = NOVALUE; // 50271 26020
    object _26019 = NOVALUE; // 50270 26019
    object _26018 = NOVALUE; // 50269 26018
    object _26017 = NOVALUE; // 50268 26017
    object _26016 = NOVALUE; // 50267 26016
    object _26015 = NOVALUE; // 50266 26015
    object _26014 = NOVALUE; // 50265 26014
    object _26013 = NOVALUE; // 50263 26013
// skipping _26012  name type: 0
// skipping _26011  name type: 0
// skipping _26010  name type: 0
    object _26009 = NOVALUE; // 50257 26009
    object _26008 = NOVALUE; // 50256 26008
    object _26007 = NOVALUE; // 50255 26007
    object _26006 = NOVALUE; // 50254 26006
    object _26005 = NOVALUE; // 50253 26005
    object _26004 = NOVALUE; // 50252 26004
// skipping _26003  name type: 0
    object _26002 = NOVALUE; // 50250 26002
// skipping _26001  name type: 0
    object _26000 = NOVALUE; // 50247 26000
    object _25999 = NOVALUE; // 50246 25999
    object _25997 = NOVALUE; // 50243 25997
    object _25996 = NOVALUE; // 50242 25996
    object _25995 = NOVALUE; // 50241 25995
// skipping _25994  name type: 0
// skipping _25993  name type: 0
    object _25992 = NOVALUE; // 50236 25992
    object _25991 = NOVALUE; // 50234 25991
// skipping _25990  name type: 0
    object _25989 = NOVALUE; // 50229 25989
    object _25988 = NOVALUE; // 50227 25988
    object _25987 = NOVALUE; // 50225 25987
// skipping _25986  name type: 0
// skipping _25985  name type: 0
// skipping _25984  name type: 0
// skipping _25983  name type: 0
    object _25982 = NOVALUE; // 50218 25982
// skipping _25981  name type: 0
// skipping _25980  name type: 0
// skipping _25979  name type: 0
// skipping _25978  name type: 0
// skipping _25977  name type: 0
// skipping _25976  name type: 0
// skipping _25975  name type: 0
    object _25974 = NOVALUE; // 50204 25974
// skipping _25973  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ScanPath pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 5 op: INTEGER_CHECK (96)
    // SubProg ScanPath pc: 7 op: STARTLINE (58)

    /** pathopen.e:459		inc_path = getenv(env)*/
    // SubProg ScanPath pc: 9 op: GETENV (91)
    DeRefi(_inc_path_50193);
    _inc_path_50193 = EGetEnv(_env_50191);
    // SubProg ScanPath pc: 12 op: STARTLINE (58)

    /** pathopen.e:460		if compare(inc_path,{})!=1 then -- nothing to do, just fail*/
    // SubProg ScanPath pc: 14 op: COMPARE (76)
    if (IS_ATOM_INT(_inc_path_50193) && IS_ATOM_INT(_21936)){
        _25974 = (_inc_path_50193 < _21936) ? -1 : (_inc_path_50193 > _21936);
    }
    else{
        _25974 = compare(_inc_path_50193, _21936);
    }
    // SubProg ScanPath pc: 18 op: NOTEQ_IFW_I (122)
    if (_25974 == 1)
    goto L1; // [18] 29
    // SubProg ScanPath pc: 22 op: STARTLINE (58)

    /** pathopen.e:461			return -1*/
    // SubProg ScanPath pc: 24 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50190
    DeRefDS(_file_name_50190);

// block var env_50191
    DeRefDSi(_env_50191);

// block var flag_50192

// block var inc_path_50193
    DeRefi(_inc_path_50193);

// block var full_path_50194
    DeRef(_full_path_50194);

// block var file_path_50195
    DeRef(_file_path_50195);

// block var strings_50196
    DeRef(_strings_50196);

// block var end_path_50197

// block var start_path_50198

// block var try_50199

// block var use_cache_50200

// block var pos_50201
    return -1;
    // SubProg ScanPath pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 50188 op: 159
    // SubProg ScanPath pc: 29 op: STARTLINE (58)

    /** pathopen.e:464		num_var = find(env,cache_vars)*/
    // SubProg ScanPath pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 33 op: FIND_FROM (176)
    _46num_var_49788 = find_from(_env_50191, _46cache_vars_49789, 1);
    // SubProg ScanPath pc: 38 op: STARTLINE (58)

    /** pathopen.e:465		use_cache = check_cache(env,inc_path)*/
    // SubProg ScanPath pc: 40 op: PROC (27)
    RefDS(_env_50191);
    Ref(_inc_path_50193);
    _use_cache_50200 = _46check_cache(_env_50191, _inc_path_50193);
    // SubProg ScanPath pc: 45 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_use_cache_50200)) {
        _1 = (object)(DBL_PTR(_use_cache_50200)->dbl);
        DeRefDS(_use_cache_50200);
        _use_cache_50200 = _1;
    }
    // SubProg ScanPath pc: 47 op: STARTLINE (58)

    /** pathopen.e:466		inc_path = append(inc_path, PATH_SEPARATOR)*/
    // SubProg ScanPath pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 51 op: APPEND (35)
    Append(&_inc_path_50193, _inc_path_50193, 58);
    // SubProg ScanPath pc: 55 op: STARTLINE (58)

    /** pathopen.e:468		file_name = SLASH & file_name*/
    // SubProg ScanPath pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 59 op: CONCAT (15)
    Prepend(&_file_name_50190, _file_name_50190, 47);
    // SubProg ScanPath pc: 63 op: STARTLINE (58)

    /** pathopen.e:469		if flag then*/
    // SubProg ScanPath pc: 65 op: IF (20)
    if (_flag_50192 == 0)
    {
        goto L2; // [65] 77
    }
    else{
    }
    // SubProg ScanPath pc: 68 op: STARTLINE (58)

    /** pathopen.e:470			file_name = include_subfolder & file_name*/
    // SubProg ScanPath pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 72 op: CONCAT (15)
    Concat((object_ptr)&_file_name_50190, _46include_subfolder_49784, _file_name_50190);
    // SubProg ScanPath pc: 76 op: NOP1 (159)
L2: // addr: 77 pc: 76 sub: 50188 op: 159
    // SubProg ScanPath pc: 77 op: STARTLINE (58)

    /** pathopen.e:472		strings = cache_substrings[num_var]*/
    // SubProg ScanPath pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 83 op: RHS_SUBS (25)
    DeRef(_strings_50196);
    _2 = (object)SEQ_PTR(_46cache_substrings_49791);
    _strings_50196 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    RefDS(_strings_50196);
    // SubProg ScanPath pc: 87 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 89 op: STARTLINE (58)

    /** pathopen.e:474		if use_cache then*/
    // SubProg ScanPath pc: 91 op: IF (20)
    if (_use_cache_50200 == 0)
    {
        goto L3; // [91] 194
    }
    else{
    }
    // SubProg ScanPath pc: 94 op: STARTLINE (58)

    /** pathopen.e:475			for i=1 to length(strings) do*/
    // SubProg ScanPath pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_strings_50196)){
            _25982 = SEQ_PTR(_strings_50196)->length;
    }
    else {
        _25982 = 1;
    }
    // SubProg ScanPath pc: 99 op: FOR_I (125)
    {
        object _i_50217;
        _i_50217 = 1;
L4: // addr: 106 pc: 99 sub: 50188 op: 125
        if (_i_50217 > _25982){
            goto L5; // [99] 154
        }
        // SubProg ScanPath pc: 106 op: STARTLINE (58)

        /** pathopen.e:476				full_path = strings[i]*/
        // SubProg ScanPath pc: 108 op: RHS_SUBS (25)
        DeRef(_full_path_50194);
        _2 = (object)SEQ_PTR(_strings_50196);
        _full_path_50194 = (object)*(((s1_ptr)_2)->base + _i_50217);
        Ref(_full_path_50194);
        // SubProg ScanPath pc: 112 op: SEQUENCE_CHECK (97)
        // SubProg ScanPath pc: 114 op: STARTLINE (58)

        /** pathopen.e:477				file_path = full_path & file_name*/
        // SubProg ScanPath pc: 116 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50195, _full_path_50194, _file_name_50190);
        // SubProg ScanPath pc: 120 op: STARTLINE (58)

        /** pathopen.e:478				try = open_locked(file_path)    */
        // SubProg ScanPath pc: 122 op: PROC (27)
        RefDS(_file_path_50195);
        _try_50199 = _35open_locked(_file_path_50195);
        // SubProg ScanPath pc: 126 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_try_50199)) {
            _1 = (object)(DBL_PTR(_try_50199)->dbl);
            DeRefDS(_try_50199);
            _try_50199 = _1;
        }
        // SubProg ScanPath pc: 128 op: STARTLINE (58)

        /** pathopen.e:479				if try != -1 then*/
        // SubProg ScanPath pc: 130 op: NOTEQ_IFW_I (122)
        if (_try_50199 == -1)
        goto L6; // [130] 145
        // SubProg ScanPath pc: 134 op: STARTLINE (58)

        /** pathopen.e:480					return {file_path,try}*/
        // SubProg ScanPath pc: 136 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50195);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50195;
        ((intptr_t *)_2)[2] = _try_50199;
        _25987 = MAKE_SEQ(_1);
        // SubProg ScanPath pc: 140 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50190
        DeRefDS(_file_name_50190);

// block var env_50191
        DeRefDSi(_env_50191);

// block var flag_50192

// block var inc_path_50193
        DeRefi(_inc_path_50193);

// block var full_path_50194
        DeRefDS(_full_path_50194);

// block var file_path_50195
        DeRefDS(_file_path_50195);

// block var strings_50196
        DeRefDS(_strings_50196);

// block var end_path_50197

// block var start_path_50198

// block var try_50199

// block var use_cache_50200

// block var pos_50201
        return _25987;
        // SubProg ScanPath pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 50188 op: 159
        // SubProg ScanPath pc: 145 op: STARTLINE (58)

        /** pathopen.e:482				ifdef WINDOWS then */
        // SubProg ScanPath pc: 147 op: STARTLINE (58)

        /** pathopen.e:496			end for*/
        // SubProg ScanPath pc: 149 op: ENDFOR_INT_UP1 (54)
        _i_50217 = _i_50217 + 1;
        goto L4; // [149] 106
L5: // addr: 154 pc: 149 sub: 50188 op: 54
        ;
    }
    // SubProg ScanPath pc: 154 op: STARTLINE (58)

    /** pathopen.e:497			if cache_complete[num_var] then -- nothing to scan*/
    // SubProg ScanPath pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 160 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_complete_49795);
    _25988 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg ScanPath pc: 164 op: IF (20)
    if (_25988 == 0)
    {
        _25988 = NOVALUE;
        goto L7; // [164] 176
    }
    else{
        _25988 = NOVALUE;
    }
    // SubProg ScanPath pc: 167 op: STARTLINE (58)

    /** pathopen.e:498				return -1*/
    // SubProg ScanPath pc: 169 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50190
    DeRefDS(_file_name_50190);

// block var env_50191
    DeRefDSi(_env_50191);

// block var flag_50192

// block var inc_path_50193
    DeRefi(_inc_path_50193);

// block var full_path_50194
    DeRef(_full_path_50194);

// block var file_path_50195
    DeRef(_file_path_50195);

// block var strings_50196
    DeRef(_strings_50196);

// block var end_path_50197

// block var start_path_50198

// block var try_50199

// block var use_cache_50200

// block var pos_50201
    DeRef(_25987);
    _25987 = NOVALUE;
    return -1;
    // SubProg ScanPath pc: 173 op: ELSE (23)
    goto L8; // [173] 200
    // SubProg ScanPath pc: 175 op: NOP1 (159)
L7: // addr: 176 pc: 175 sub: 50188 op: 159
    // SubProg ScanPath pc: 176 op: STARTLINE (58)

    /** pathopen.e:500				pos = cache_delims[num_var]+1 -- scan remainder, starting from as far sa possible*/
    // SubProg ScanPath pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 182 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_delims_49796);
    _25989 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg ScanPath pc: 186 op: PLUS1_I (117)
    _pos_50201 = _25989 + 1;
    _25989 = NOVALUE;
    // SubProg ScanPath pc: 190 op: NOP1 (159)
    // SubProg ScanPath pc: 191 op: ELSE (23)
    goto L8; // [191] 200
    // SubProg ScanPath pc: 193 op: NOP1 (159)
L3: // addr: 194 pc: 193 sub: 50188 op: 159
    // SubProg ScanPath pc: 194 op: STARTLINE (58)

    /** pathopen.e:503			pos = 1*/
    // SubProg ScanPath pc: 196 op: ASSIGN_I (113)
    _pos_50201 = 1;
    // SubProg ScanPath pc: 199 op: NOP1 (159)
L8: // addr: 200 pc: 199 sub: 50188 op: 159
    // SubProg ScanPath pc: 200 op: STARTLINE (58)

    /** pathopen.e:506		start_path = 0*/
    // SubProg ScanPath pc: 202 op: ASSIGN_I (113)
    _start_path_50198 = 0;
    // SubProg ScanPath pc: 205 op: STARTLINE (58)

    /** pathopen.e:507		for p = pos to length(inc_path) do*/
    // SubProg ScanPath pc: 207 op: PRIVATE_INIT_CHECK (30)
    // SubProg ScanPath pc: 209 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50193)){
            _25991 = SEQ_PTR(_inc_path_50193)->length;
    }
    else {
        _25991 = 1;
    }
    // SubProg ScanPath pc: 212 op: FOR_I (125)
    {
        object _p_50233;
        _p_50233 = _pos_50201;
L9: // addr: 219 pc: 212 sub: 50188 op: 125
        if (_p_50233 > _25991){
            goto LA; // [212] 460
        }
        // SubProg ScanPath pc: 219 op: STARTLINE (58)

        /** pathopen.e:508			if inc_path[p] = PATH_SEPARATOR then*/
        // SubProg ScanPath pc: 221 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50193);
        _25992 = (object)*(((s1_ptr)_2)->base + _p_50233);
        // SubProg ScanPath pc: 225 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 227 op: EQUALS_IFW (104)
        if (_25992 != 58)
        goto LB; // [227] 409
        // SubProg ScanPath pc: 231 op: STARTLINE (58)

        /** pathopen.e:510				cache_delims[num_var] = p*/
        // SubProg ScanPath pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 235 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 237 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_46cache_delims_49796);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_delims_49796 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        *(intptr_t *)_2 = _p_50233;
        // SubProg ScanPath pc: 241 op: STARTLINE (58)

        /** pathopen.e:512				end_path = p-1*/
        // SubProg ScanPath pc: 243 op: MINUS_I (116)
        _end_path_50197 = _p_50233 - 1;
        // SubProg ScanPath pc: 247 op: STARTLINE (58)

        /** pathopen.e:513				while end_path >= start_path and find(inc_path[end_path], " \t" & SLASH_CHARS) do*/
        // SubProg ScanPath pc: 249 op: NOP2 (110)
        // SubProg ScanPath pc: 251 op: NOPWHILE (158)
LC: // addr: 252 pc: 251 sub: 50188 op: 158
        // SubProg ScanPath pc: 252 op: GREATEREQ (2)
        _25995 = (_end_path_50197 >= _start_path_50198);
        // SubProg ScanPath pc: 256 op: SC1_AND_IF (146)
        if (_25995 == 0) {
            goto LD; // [256] 290
        }
        // SubProg ScanPath pc: 260 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50193);
        _25997 = (object)*(((s1_ptr)_2)->base + _end_path_50197);
        // SubProg ScanPath pc: 264 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 266 op: CONCAT (15)
        Concat((object_ptr)&_25999, _25998, _39SLASH_CHARS_19982);
        // SubProg ScanPath pc: 270 op: FIND_FROM (176)
        _26000 = find_from(_25997, _25999, 1);
        _25997 = NOVALUE;
        DeRefDS(_25999);
        _25999 = NOVALUE;
        // SubProg ScanPath pc: 275 op: NOP1 (159)
        // SubProg ScanPath pc: 276 op: WHILE (47)
        if (_26000 == 0)
        {
            _26000 = NOVALUE;
            goto LD; // [276] 290
        }
        else{
            _26000 = NOVALUE;
        }
        // SubProg ScanPath pc: 279 op: STARTLINE (58)

        /** pathopen.e:514					end_path-=1*/
        // SubProg ScanPath pc: 281 op: MINUS_I (116)
        _end_path_50197 = _end_path_50197 - 1;
        // SubProg ScanPath pc: 285 op: STARTLINE (58)

        /** pathopen.e:515				end while*/
        // SubProg ScanPath pc: 287 op: ENDWHILE (22)
        goto LC; // [287] 252
        // SubProg ScanPath pc: 289 op: NOP1 (159)
LD: // addr: 290 pc: 289 sub: 50188 op: 159
        // SubProg ScanPath pc: 290 op: STARTLINE (58)

        /** pathopen.e:517				if start_path and end_path then*/
        // SubProg ScanPath pc: 292 op: SC1_AND_IF (146)
        if (_start_path_50198 == 0) {
            goto LE; // [292] 453
        }
        // SubProg ScanPath pc: 296 op: NOP1 (159)
        // SubProg ScanPath pc: 297 op: IF (20)
        if (_end_path_50197 == 0)
        {
            goto LE; // [297] 453
        }
        else{
        }
        // SubProg ScanPath pc: 300 op: STARTLINE (58)

        /** pathopen.e:518					full_path = inc_path[start_path..end_path]*/
        // SubProg ScanPath pc: 302 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_full_path_50194;
        RHS_Slice(_inc_path_50193, _start_path_50198, _end_path_50197);
        // SubProg ScanPath pc: 307 op: STARTLINE (58)

        /** pathopen.e:519					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        // SubProg ScanPath pc: 309 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 311 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 313 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 315 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 317 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49791);
        _26004 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg ScanPath pc: 321 op: APPEND (35)
        RefDS(_full_path_50194);
        Append(&_26005, _26004, _full_path_50194);
        _26004 = NOVALUE;
        // SubProg ScanPath pc: 325 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_substrings_49791);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_substrings_49791 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26005;
        if( _1 != _26005 ){
            DeRefDS(_1);
        }
        _26005 = NOVALUE;
        // SubProg ScanPath pc: 329 op: STARTLINE (58)

        /** pathopen.e:520					cache_starts[num_var] &= start_path*/
        // SubProg ScanPath pc: 331 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 333 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 335 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_starts_49792);
        _26006 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg ScanPath pc: 339 op: CONCAT (15)
        if (IS_SEQUENCE(_26006) && IS_ATOM(_start_path_50198)) {
            Append(&_26007, _26006, _start_path_50198);
        }
        else if (IS_ATOM(_26006) && IS_SEQUENCE(_start_path_50198)) {
        }
        else {
            Concat((object_ptr)&_26007, _26006, _start_path_50198);
            _26006 = NOVALUE;
        }
        _26006 = NOVALUE;
        // SubProg ScanPath pc: 343 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_starts_49792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_starts_49792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26007;
        if( _1 != _26007 ){
            DeRef(_1);
        }
        _26007 = NOVALUE;
        // SubProg ScanPath pc: 347 op: STARTLINE (58)

        /** pathopen.e:521					cache_ends[num_var] &= end_path*/
        // SubProg ScanPath pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 351 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 353 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        _26008 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg ScanPath pc: 357 op: CONCAT (15)
        if (IS_SEQUENCE(_26008) && IS_ATOM(_end_path_50197)) {
            Append(&_26009, _26008, _end_path_50197);
        }
        else if (IS_ATOM(_26008) && IS_SEQUENCE(_end_path_50197)) {
        }
        else {
            Concat((object_ptr)&_26009, _26008, _end_path_50197);
            _26008 = NOVALUE;
        }
        _26008 = NOVALUE;
        // SubProg ScanPath pc: 361 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_ends_49793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26009;
        if( _1 != _26009 ){
            DeRef(_1);
        }
        _26009 = NOVALUE;
        // SubProg ScanPath pc: 365 op: STARTLINE (58)

        /** pathopen.e:522					file_path = full_path & file_name  */
        // SubProg ScanPath pc: 367 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50195, _full_path_50194, _file_name_50190);
        // SubProg ScanPath pc: 371 op: STARTLINE (58)

        /** pathopen.e:523					try = open_locked(file_path)*/
        // SubProg ScanPath pc: 373 op: PROC (27)
        RefDS(_file_path_50195);
        _try_50199 = _35open_locked(_file_path_50195);
        // SubProg ScanPath pc: 377 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_try_50199)) {
            _1 = (object)(DBL_PTR(_try_50199)->dbl);
            DeRefDS(_try_50199);
            _try_50199 = _1;
        }
        // SubProg ScanPath pc: 379 op: STARTLINE (58)

        /** pathopen.e:524					if try != -1 then -- valid path, no point trying to convert*/
        // SubProg ScanPath pc: 381 op: NOTEQ_IFW_I (122)
        if (_try_50199 == -1)
        goto LF; // [381] 398
        // SubProg ScanPath pc: 385 op: STARTLINE (58)

        /** pathopen.e:525						ifdef WINDOWS then*/
        // SubProg ScanPath pc: 387 op: STARTLINE (58)

        /** pathopen.e:528						return {file_path,try}*/
        // SubProg ScanPath pc: 389 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50195);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50195;
        ((intptr_t *)_2)[2] = _try_50199;
        _26013 = MAKE_SEQ(_1);
        // SubProg ScanPath pc: 393 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50190
        DeRefDS(_file_name_50190);

// block var env_50191
        DeRefDSi(_env_50191);

// block var flag_50192

// block var inc_path_50193
        DeRefi(_inc_path_50193);

// block var full_path_50194
        DeRefDSi(_full_path_50194);

// block var file_path_50195
        DeRefDS(_file_path_50195);

// block var strings_50196
        DeRef(_strings_50196);

// block var end_path_50197

// block var start_path_50198

// block var try_50199

// block var use_cache_50200

// block var pos_50201
        DeRef(_25995);
        _25995 = NOVALUE;
        _25992 = NOVALUE;
        DeRef(_25987);
        _25987 = NOVALUE;
        return _26013;
        // SubProg ScanPath pc: 397 op: NOP1 (159)
LF: // addr: 398 pc: 397 sub: 50188 op: 159
        // SubProg ScanPath pc: 398 op: STARTLINE (58)

        /** pathopen.e:530					ifdef WINDOWS then*/
        // SubProg ScanPath pc: 400 op: STARTLINE (58)

        /** pathopen.e:547					start_path = 0*/
        // SubProg ScanPath pc: 402 op: ASSIGN_I (113)
        _start_path_50198 = 0;
        // SubProg ScanPath pc: 405 op: NOP1 (159)
        // SubProg ScanPath pc: 406 op: ELSE (23)
        goto LE; // [406] 453
        // SubProg ScanPath pc: 408 op: NOP1 (159)
LB: // addr: 409 pc: 408 sub: 50188 op: 159
        // SubProg ScanPath pc: 409 op: STARTLINE (58)

        /** pathopen.e:549			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        // SubProg ScanPath pc: 411 op: NOT (7)
        _26014 = (_start_path_50198 == 0);
        // SubProg ScanPath pc: 414 op: SC1_AND_IF (146)
        if (_26014 == 0) {
            goto L10; // [414] 452
        }
        // SubProg ScanPath pc: 418 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50193);
        _26016 = (object)*(((s1_ptr)_2)->base + _p_50233);
        // SubProg ScanPath pc: 422 op: NOTEQ (4)
        _26017 = (_26016 != 32);
        _26016 = NOVALUE;
        // SubProg ScanPath pc: 426 op: SC1_AND (141)
        if (_26017 == 0) {
            DeRef(_26018);
            _26018 = 0;
            goto L11; // [426] 442
        }
        // SubProg ScanPath pc: 430 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50193);
        _26019 = (object)*(((s1_ptr)_2)->base + _p_50233);
        // SubProg ScanPath pc: 434 op: NOTEQ (4)
        _26020 = (_26019 != 9);
        _26019 = NOVALUE;
        // SubProg ScanPath pc: 438 op: SC2_AND (142)
        _26018 = (_26020 != 0);
        // SubProg ScanPath pc: 441 op: NOP1 (159)
L11: // addr: 442 pc: 441 sub: 50188 op: 159
        // SubProg ScanPath pc: 442 op: NOP1 (159)
        // SubProg ScanPath pc: 443 op: IF (20)
        if (_26018 == 0)
        {
            _26018 = NOVALUE;
            goto L10; // [443] 452
        }
        else{
            _26018 = NOVALUE;
        }
        // SubProg ScanPath pc: 446 op: STARTLINE (58)

        /** pathopen.e:550				start_path = p*/
        // SubProg ScanPath pc: 448 op: ASSIGN_I (113)
        _start_path_50198 = _p_50233;
        // SubProg ScanPath pc: 451 op: NOP1 (159)
L10: // addr: 452 pc: 451 sub: 50188 op: 159
        // SubProg ScanPath pc: 452 op: NOP1 (159)
LE: // addr: 453 pc: 452 sub: 50188 op: 159
        // SubProg ScanPath pc: 453 op: STARTLINE (58)

        /** pathopen.e:552		end for*/
        // SubProg ScanPath pc: 455 op: ENDFOR_INT_UP1 (54)
        _p_50233 = _p_50233 + 1;
        goto L9; // [455] 219
LA: // addr: 460 pc: 455 sub: 50188 op: 54
        ;
    }
    // SubProg ScanPath pc: 460 op: STARTLINE (58)

    /** pathopen.e:554		cache_complete[num_var] = 1*/
    // SubProg ScanPath pc: 462 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 464 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 466 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_46cache_complete_49795);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_complete_49795 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
    *(intptr_t *)_2 = 1;
    // SubProg ScanPath pc: 470 op: STARTLINE (58)

    /** pathopen.e:555		return -1*/
    // SubProg ScanPath pc: 472 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50190
    DeRefDS(_file_name_50190);

// block var env_50191
    DeRefDSi(_env_50191);

// block var flag_50192

// block var inc_path_50193
    DeRefi(_inc_path_50193);

// block var full_path_50194
    DeRef(_full_path_50194);

// block var file_path_50195
    DeRef(_file_path_50195);

// block var strings_50196
    DeRef(_strings_50196);

// block var end_path_50197

// block var start_path_50198

// block var try_50199

// block var use_cache_50200

// block var pos_50201
    DeRef(_26017);
    _26017 = NOVALUE;
    DeRef(_26014);
    _26014 = NOVALUE;
    DeRef(_25995);
    _25995 = NOVALUE;
    _25992 = NOVALUE;
    DeRef(_26020);
    _26020 = NOVALUE;
    DeRef(_26013);
    _26013 = NOVALUE;
    DeRef(_25987);
    _25987 = NOVALUE;
    return -1;
    // SubProg ScanPath pc: 476 op: BADRETURNF (43)
    ;
}


object _46Include_paths(object _add_converted_50275)
{
    object _status_50276 = NOVALUE;
    object _pos_50277 = NOVALUE;
    object _inc_path_50278 = NOVALUE;
    object _full_path_50279 = NOVALUE;
    object _start_path_50280 = NOVALUE;
    object _end_path_50281 = NOVALUE;
    object _eudir_path_50297 = NOVALUE;
// skipping _26067  name type: 0
    object _26066 = NOVALUE; // 50346 26066
    object _26065 = NOVALUE; // 50345 26065
    object _26064 = NOVALUE; // 50344 26064
    object _26063 = NOVALUE; // 50343 26063
    object _26062 = NOVALUE; // 50342 26062
    object _26061 = NOVALUE; // 50341 26061
    object _26060 = NOVALUE; // 50340 26060
    object _26059 = NOVALUE; // 50339 26059
    object _26058 = NOVALUE; // 50337 26058
    object _26057 = NOVALUE; // 50336 26057
    object _26056 = NOVALUE; // 50335 26056
    object _26055 = NOVALUE; // 50334 26055
    object _26054 = NOVALUE; // 50333 26054
    object _26053 = NOVALUE; // 50332 26053
// skipping _26052  name type: 0
    object _26051 = NOVALUE; // 50330 26051
// skipping _26050  name type: 0
    object _26049 = NOVALUE; // 50327 26049
    object _26048 = NOVALUE; // 50326 26048
    object _26047 = NOVALUE; // 50324 26047
    object _26046 = NOVALUE; // 50323 26046
    object _26045 = NOVALUE; // 50322 26045
// skipping _26044  name type: 0
// skipping _26043  name type: 0
    object _26042 = NOVALUE; // 50317 26042
    object _26041 = NOVALUE; // 50315 26041
// skipping _26040  name type: 0
    object _26039 = NOVALUE; // 50310 26039
    object _26037 = NOVALUE; // 50308 26037
// skipping _26036  name type: 0
    object _26035 = NOVALUE; // 50304 26035
    object _26034 = NOVALUE; // 50303 26034
    object _26032 = NOVALUE; // 50301 26032
// skipping _26031  name type: 0
// skipping _26030  name type: 0
    object _26029 = NOVALUE; // 50294 26029
// skipping _26028  name type: 0
    object _26027 = NOVALUE; // 50291 26027
// skipping _26026  name type: 0
// skipping _26025  name type: 0
// skipping _26023  name type: 0
    object _26022 = NOVALUE; // 50285 26022
    object _26021 = NOVALUE; // 50283 26021
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Include_paths pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_add_converted_50275)) {
        _1 = (object)(DBL_PTR(_add_converted_50275)->dbl);
        DeRefDS(_add_converted_50275);
        _add_converted_50275 = _1;
    }
    // SubProg Include_paths pc: 3 op: STARTLINE (58)

    /** pathopen.e:566		if length(include_Paths) then*/
    // SubProg Include_paths pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_46include_Paths_50272)){
            _26021 = SEQ_PTR(_46include_Paths_50272)->length;
    }
    else {
        _26021 = 1;
    }
    // SubProg Include_paths pc: 10 op: IF (20)
    if (_26021 == 0)
    {
        _26021 = NOVALUE;
        goto L1; // [10] 22
    }
    else{
        _26021 = NOVALUE;
    }
    // SubProg Include_paths pc: 13 op: STARTLINE (58)

    /** pathopen.e:567			return include_Paths*/
    // SubProg Include_paths pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 17 op: RETURNF (28)
    RefDS(_46include_Paths_50272);

// Exiting block BLOCK: Include_paths

// block var status_50276

// block var pos_50277

// block var inc_path_50278
    DeRefi(_inc_path_50278);

// block var full_path_50279
    DeRefi(_full_path_50279);

// block var start_path_50280

// block var end_path_50281

// block var eudir_path_50297
    DeRef(_eudir_path_50297);
    return _46include_Paths_50272;
    // SubProg Include_paths pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 50273 op: 159
    // SubProg Include_paths pc: 22 op: STARTLINE (58)

    /** pathopen.e:570		include_Paths = append(config_inc_paths, current_dir())*/
    // SubProg Include_paths pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 26 op: PROC (27)
    _26022 = _18current_dir();
    // SubProg Include_paths pc: 29 op: APPEND (35)
    Ref(_26022);
    Append(&_46include_Paths_50272, _46config_inc_paths_49797, _26022);
    DeRef(_26022);
    _26022 = NOVALUE;
    // SubProg Include_paths pc: 33 op: STARTLINE (58)

    /** pathopen.e:571		num_var = find("EUINC", cache_vars)*/
    // SubProg Include_paths pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 37 op: FIND_FROM (176)
    _46num_var_49788 = find_from(_26024, _46cache_vars_49789, 1);
    // SubProg Include_paths pc: 42 op: STARTLINE (58)

    /** pathopen.e:572		inc_path = getenv("EUINC")*/
    // SubProg Include_paths pc: 44 op: GETENV (91)
    DeRefi(_inc_path_50278);
    _inc_path_50278 = EGetEnv(_26024);
    // SubProg Include_paths pc: 47 op: STARTLINE (58)

    /** pathopen.e:573		if atom(inc_path) then*/
    // SubProg Include_paths pc: 49 op: IS_AN_ATOM (67)
    _26027 = IS_ATOM(_inc_path_50278);
    // SubProg Include_paths pc: 52 op: IF (20)
    if (_26027 == 0)
    {
        _26027 = NOVALUE;
        goto L2; // [52] 61
    }
    else{
        _26027 = NOVALUE;
    }
    // SubProg Include_paths pc: 55 op: STARTLINE (58)

    /** pathopen.e:574			inc_path = ""*/
    // SubProg Include_paths pc: 57 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_inc_path_50278);
    _inc_path_50278 = _21936;
    // SubProg Include_paths pc: 60 op: NOP1 (159)
L2: // addr: 61 pc: 60 sub: 50273 op: 159
    // SubProg Include_paths pc: 61 op: STARTLINE (58)

    /** pathopen.e:576		status = check_cache("EUINC", inc_path)*/
    // SubProg Include_paths pc: 63 op: PROC (27)
    RefDS(_26024);
    Ref(_inc_path_50278);
    _status_50276 = _46check_cache(_26024, _inc_path_50278);
    // SubProg Include_paths pc: 68 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_status_50276)) {
        _1 = (object)(DBL_PTR(_status_50276)->dbl);
        DeRefDS(_status_50276);
        _status_50276 = _1;
    }
    // SubProg Include_paths pc: 70 op: STARTLINE (58)

    /** pathopen.e:577		if length(inc_path) then*/
    // SubProg Include_paths pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50278)){
            _26029 = SEQ_PTR(_inc_path_50278)->length;
    }
    else {
        _26029 = 1;
    }
    // SubProg Include_paths pc: 75 op: IF (20)
    if (_26029 == 0)
    {
        _26029 = NOVALUE;
        goto L3; // [75] 87
    }
    else{
        _26029 = NOVALUE;
    }
    // SubProg Include_paths pc: 78 op: STARTLINE (58)

    /** pathopen.e:578			inc_path = append(inc_path, PATH_SEPARATOR)*/
    // SubProg Include_paths pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 82 op: APPEND (35)
    Append(&_inc_path_50278, _inc_path_50278, 58);
    // SubProg Include_paths pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 50273 op: 159
    // SubProg Include_paths pc: 87 op: STARTLINE (58)

    /** pathopen.e:580		object eudir_path = get_eudir()*/
    // SubProg Include_paths pc: 89 op: PROC (27)
    _0 = _eudir_path_50297;
    _eudir_path_50297 = _35get_eudir();
    DeRef(_0);
    // SubProg Include_paths pc: 92 op: STARTLINE (58)

    /** pathopen.e:581		if sequence(eudir_path) then*/
    // SubProg Include_paths pc: 94 op: IS_A_SEQUENCE (68)
    _26032 = IS_SEQUENCE(_eudir_path_50297);
    // SubProg Include_paths pc: 97 op: IF (20)
    if (_26032 == 0)
    {
        _26032 = NOVALUE;
        goto L4; // [97] 117
    }
    else{
        _26032 = NOVALUE;
    }
    // SubProg Include_paths pc: 100 op: STARTLINE (58)

    /** pathopen.e:582			include_Paths = append(include_Paths, sprintf("%s/include", { eudir_path }))*/
    // SubProg Include_paths pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 104 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_eudir_path_50297);
    ((intptr_t*)_2)[1] = _eudir_path_50297;
    _26034 = MAKE_SEQ(_1);
    // SubProg Include_paths pc: 108 op: SPRINTF (53)
    _26035 = EPrintf(-9999999, _26033, _26034);
    DeRefDS(_26034);
    _26034 = NOVALUE;
    // SubProg Include_paths pc: 112 op: APPEND (35)
    RefDS(_26035);
    Append(&_46include_Paths_50272, _46include_Paths_50272, _26035);
    DeRefDS(_26035);
    _26035 = NOVALUE;
    // SubProg Include_paths pc: 116 op: NOP1 (159)
L4: // addr: 117 pc: 116 sub: 50273 op: 159
    // SubProg Include_paths pc: 117 op: STARTLINE (58)

    /** pathopen.e:585		if status then*/
    // SubProg Include_paths pc: 119 op: IF (20)
    if (_status_50276 == 0)
    {
        goto L5; // [119] 161
    }
    else{
    }
    // SubProg Include_paths pc: 122 op: STARTLINE (58)

    /** pathopen.e:587			if cache_complete[num_var] then*/
    // SubProg Include_paths pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_complete_49795);
    _26037 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg Include_paths pc: 132 op: IF (20)
    if (_26037 == 0)
    {
        _26037 = NOVALUE;
        goto L6; // [132] 144
    }
    else{
        _26037 = NOVALUE;
    }
    // SubProg Include_paths pc: 135 op: STARTLINE (58)

    /** pathopen.e:588				goto "cache done"*/
    // SubProg Include_paths pc: 137 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg Include_paths pc: 139 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg Include_paths pc: 141 op: GOTO (188)
    goto G7;
    // SubProg Include_paths pc: 143 op: NOP1 (159)
L6: // addr: 144 pc: 143 sub: 50273 op: 159
    // SubProg Include_paths pc: 144 op: STARTLINE (58)

    /** pathopen.e:590			pos = cache_delims[num_var]+1*/
    // SubProg Include_paths pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 150 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_delims_49796);
    _26039 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg Include_paths pc: 154 op: PLUS1_I (117)
    _pos_50277 = _26039 + 1;
    _26039 = NOVALUE;
    // SubProg Include_paths pc: 158 op: ELSE (23)
    goto L8; // [158] 167
    // SubProg Include_paths pc: 160 op: NOP1 (159)
L5: // addr: 161 pc: 160 sub: 50273 op: 159
    // SubProg Include_paths pc: 161 op: STARTLINE (58)

    /** pathopen.e:592	        pos = 1*/
    // SubProg Include_paths pc: 163 op: ASSIGN_I (113)
    _pos_50277 = 1;
    // SubProg Include_paths pc: 166 op: NOP1 (159)
L8: // addr: 167 pc: 166 sub: 50273 op: 159
    // SubProg Include_paths pc: 167 op: STARTLINE (58)

    /** pathopen.e:594		start_path = 0*/
    // SubProg Include_paths pc: 169 op: ASSIGN_I (113)
    _start_path_50280 = 0;
    // SubProg Include_paths pc: 172 op: STARTLINE (58)

    /** pathopen.e:595		for p = pos to length(inc_path) do*/
    // SubProg Include_paths pc: 174 op: PRIVATE_INIT_CHECK (30)
    // SubProg Include_paths pc: 176 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50278)){
            _26041 = SEQ_PTR(_inc_path_50278)->length;
    }
    else {
        _26041 = 1;
    }
    // SubProg Include_paths pc: 179 op: FOR_I (125)
    {
        object _p_50314;
        _p_50314 = _pos_50277;
L9: // addr: 186 pc: 179 sub: 50273 op: 125
        if (_p_50314 > _26041){
            goto LA; // [179] 394
        }
        // SubProg Include_paths pc: 186 op: STARTLINE (58)

        /** pathopen.e:596			if inc_path[p] = PATH_SEPARATOR then*/
        // SubProg Include_paths pc: 188 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50278);
        _26042 = (object)*(((s1_ptr)_2)->base + _p_50314);
        // SubProg Include_paths pc: 192 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 194 op: EQUALS_IFW (104)
        if (_26042 != 58)
        goto LB; // [194] 343
        // SubProg Include_paths pc: 198 op: STARTLINE (58)

        /** pathopen.e:598				cache_delims[num_var] = p*/
        // SubProg Include_paths pc: 200 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 204 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_46cache_delims_49796);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_delims_49796 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        *(intptr_t *)_2 = _p_50314;
        // SubProg Include_paths pc: 208 op: STARTLINE (58)

        /** pathopen.e:600				end_path = p-1*/
        // SubProg Include_paths pc: 210 op: MINUS_I (116)
        _end_path_50281 = _p_50314 - 1;
        // SubProg Include_paths pc: 214 op: STARTLINE (58)

        /** pathopen.e:601				while end_path >= start_path and find(inc_path[end_path]," \t" & SLASH_CHARS) do*/
        // SubProg Include_paths pc: 216 op: NOP2 (110)
        // SubProg Include_paths pc: 218 op: NOPWHILE (158)
LC: // addr: 219 pc: 218 sub: 50273 op: 158
        // SubProg Include_paths pc: 219 op: GREATEREQ (2)
        _26045 = (_end_path_50281 >= _start_path_50280);
        // SubProg Include_paths pc: 223 op: SC1_AND_IF (146)
        if (_26045 == 0) {
            goto LD; // [223] 257
        }
        // SubProg Include_paths pc: 227 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50278);
        _26047 = (object)*(((s1_ptr)_2)->base + _end_path_50281);
        // SubProg Include_paths pc: 231 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 233 op: CONCAT (15)
        Concat((object_ptr)&_26048, _25998, _39SLASH_CHARS_19982);
        // SubProg Include_paths pc: 237 op: FIND_FROM (176)
        _26049 = find_from(_26047, _26048, 1);
        _26047 = NOVALUE;
        DeRefDS(_26048);
        _26048 = NOVALUE;
        // SubProg Include_paths pc: 242 op: NOP1 (159)
        // SubProg Include_paths pc: 243 op: WHILE (47)
        if (_26049 == 0)
        {
            _26049 = NOVALUE;
            goto LD; // [243] 257
        }
        else{
            _26049 = NOVALUE;
        }
        // SubProg Include_paths pc: 246 op: STARTLINE (58)

        /** pathopen.e:602					end_path -= 1*/
        // SubProg Include_paths pc: 248 op: MINUS_I (116)
        _end_path_50281 = _end_path_50281 - 1;
        // SubProg Include_paths pc: 252 op: STARTLINE (58)

        /** pathopen.e:603				end while*/
        // SubProg Include_paths pc: 254 op: ENDWHILE (22)
        goto LC; // [254] 219
        // SubProg Include_paths pc: 256 op: NOP1 (159)
LD: // addr: 257 pc: 256 sub: 50273 op: 159
        // SubProg Include_paths pc: 257 op: STARTLINE (58)

        /** pathopen.e:605				if start_path and end_path then*/
        // SubProg Include_paths pc: 259 op: SC1_AND_IF (146)
        if (_start_path_50280 == 0) {
            goto LE; // [259] 387
        }
        // SubProg Include_paths pc: 263 op: NOP1 (159)
        // SubProg Include_paths pc: 264 op: IF (20)
        if (_end_path_50281 == 0)
        {
            goto LE; // [264] 387
        }
        else{
        }
        // SubProg Include_paths pc: 267 op: STARTLINE (58)

        /** pathopen.e:606					full_path = inc_path[start_path..end_path]*/
        // SubProg Include_paths pc: 269 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_full_path_50279;
        RHS_Slice(_inc_path_50278, _start_path_50280, _end_path_50281);
        // SubProg Include_paths pc: 274 op: STARTLINE (58)

        /** pathopen.e:607					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        // SubProg Include_paths pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 284 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49791);
        _26053 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg Include_paths pc: 288 op: APPEND (35)
        RefDS(_full_path_50279);
        Append(&_26054, _26053, _full_path_50279);
        _26053 = NOVALUE;
        // SubProg Include_paths pc: 292 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_substrings_49791);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_substrings_49791 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26054;
        if( _1 != _26054 ){
            DeRefDS(_1);
        }
        _26054 = NOVALUE;
        // SubProg Include_paths pc: 296 op: STARTLINE (58)

        /** pathopen.e:608					cache_starts[num_var] &= start_path*/
        // SubProg Include_paths pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 300 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 302 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_starts_49792);
        _26055 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg Include_paths pc: 306 op: CONCAT (15)
        if (IS_SEQUENCE(_26055) && IS_ATOM(_start_path_50280)) {
            Append(&_26056, _26055, _start_path_50280);
        }
        else if (IS_ATOM(_26055) && IS_SEQUENCE(_start_path_50280)) {
        }
        else {
            Concat((object_ptr)&_26056, _26055, _start_path_50280);
            _26055 = NOVALUE;
        }
        _26055 = NOVALUE;
        // SubProg Include_paths pc: 310 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_starts_49792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_starts_49792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26056;
        if( _1 != _26056 ){
            DeRef(_1);
        }
        _26056 = NOVALUE;
        // SubProg Include_paths pc: 314 op: STARTLINE (58)

        /** pathopen.e:609					cache_ends[num_var] &= end_path*/
        // SubProg Include_paths pc: 316 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 318 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 320 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        _26057 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
        // SubProg Include_paths pc: 324 op: CONCAT (15)
        if (IS_SEQUENCE(_26057) && IS_ATOM(_end_path_50281)) {
            Append(&_26058, _26057, _end_path_50281);
        }
        else if (IS_ATOM(_26057) && IS_SEQUENCE(_end_path_50281)) {
        }
        else {
            Concat((object_ptr)&_26058, _26057, _end_path_50281);
            _26057 = NOVALUE;
        }
        _26057 = NOVALUE;
        // SubProg Include_paths pc: 328 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_ends_49793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_ends_49793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26058;
        if( _1 != _26058 ){
            DeRef(_1);
        }
        _26058 = NOVALUE;
        // SubProg Include_paths pc: 332 op: STARTLINE (58)

        /** pathopen.e:610					ifdef WINDOWS then*/
        // SubProg Include_paths pc: 334 op: STARTLINE (58)

        /** pathopen.e:620					start_path = 0*/
        // SubProg Include_paths pc: 336 op: ASSIGN_I (113)
        _start_path_50280 = 0;
        // SubProg Include_paths pc: 339 op: NOP1 (159)
        // SubProg Include_paths pc: 340 op: ELSE (23)
        goto LE; // [340] 387
        // SubProg Include_paths pc: 342 op: NOP1 (159)
LB: // addr: 343 pc: 342 sub: 50273 op: 159
        // SubProg Include_paths pc: 343 op: STARTLINE (58)

        /** pathopen.e:622			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        // SubProg Include_paths pc: 345 op: NOT (7)
        _26059 = (_start_path_50280 == 0);
        // SubProg Include_paths pc: 348 op: SC1_AND_IF (146)
        if (_26059 == 0) {
            goto LF; // [348] 386
        }
        // SubProg Include_paths pc: 352 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50278);
        _26061 = (object)*(((s1_ptr)_2)->base + _p_50314);
        // SubProg Include_paths pc: 356 op: NOTEQ (4)
        _26062 = (_26061 != 32);
        _26061 = NOVALUE;
        // SubProg Include_paths pc: 360 op: SC1_AND (141)
        if (_26062 == 0) {
            DeRef(_26063);
            _26063 = 0;
            goto L10; // [360] 376
        }
        // SubProg Include_paths pc: 364 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50278);
        _26064 = (object)*(((s1_ptr)_2)->base + _p_50314);
        // SubProg Include_paths pc: 368 op: NOTEQ (4)
        _26065 = (_26064 != 9);
        _26064 = NOVALUE;
        // SubProg Include_paths pc: 372 op: SC2_AND (142)
        _26063 = (_26065 != 0);
        // SubProg Include_paths pc: 375 op: NOP1 (159)
L10: // addr: 376 pc: 375 sub: 50273 op: 159
        // SubProg Include_paths pc: 376 op: NOP1 (159)
        // SubProg Include_paths pc: 377 op: IF (20)
        if (_26063 == 0)
        {
            _26063 = NOVALUE;
            goto LF; // [377] 386
        }
        else{
            _26063 = NOVALUE;
        }
        // SubProg Include_paths pc: 380 op: STARTLINE (58)

        /** pathopen.e:623				start_path = p*/
        // SubProg Include_paths pc: 382 op: ASSIGN_I (113)
        _start_path_50280 = _p_50314;
        // SubProg Include_paths pc: 385 op: NOP1 (159)
LF: // addr: 386 pc: 385 sub: 50273 op: 159
        // SubProg Include_paths pc: 386 op: NOP1 (159)
LE: // addr: 387 pc: 386 sub: 50273 op: 159
        // SubProg Include_paths pc: 387 op: STARTLINE (58)

        /** pathopen.e:625		end for*/
        // SubProg Include_paths pc: 389 op: ENDFOR_INT_UP1 (54)
        _p_50314 = _p_50314 + 1;
        goto L9; // [389] 186
LA: // addr: 394 pc: 389 sub: 50273 op: 54
        ;
    }
    // SubProg Include_paths pc: 394 op: STARTLINE (58)

    /** pathopen.e:627	label "cache done"*/
    // SubProg Include_paths pc: 396 op: GLABEL (189)
G7:
    // SubProg Include_paths pc: 398 op: STARTLINE (58)

    /** pathopen.e:628		include_Paths &= cache_substrings[num_var]*/
    // SubProg Include_paths pc: 400 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 402 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 404 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 406 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_substrings_49791);
    _26066 = (object)*(((s1_ptr)_2)->base + _46num_var_49788);
    // SubProg Include_paths pc: 410 op: CONCAT (15)
    Concat((object_ptr)&_46include_Paths_50272, _46include_Paths_50272, _26066);
    _26066 = NOVALUE;
    // SubProg Include_paths pc: 414 op: STARTLINE (58)

    /** pathopen.e:629		cache_complete[num_var] = 1*/
    // SubProg Include_paths pc: 416 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 420 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_46cache_complete_49795);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_complete_49795 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49788);
    *(intptr_t *)_2 = 1;
    // SubProg Include_paths pc: 424 op: STARTLINE (58)

    /** pathopen.e:631		ifdef WINDOWS then*/
    // SubProg Include_paths pc: 426 op: STARTLINE (58)

    /** pathopen.e:640		return include_Paths*/
    // SubProg Include_paths pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 430 op: RETURNF (28)
    RefDS(_46include_Paths_50272);

// Exiting block BLOCK: Include_paths

// block var status_50276

// block var pos_50277

// block var inc_path_50278
    DeRefi(_inc_path_50278);

// block var full_path_50279
    DeRefi(_full_path_50279);

// block var start_path_50280

// block var end_path_50281

// block var eudir_path_50297
    DeRef(_eudir_path_50297);
    DeRef(_26045);
    _26045 = NOVALUE;
    DeRef(_26062);
    _26062 = NOVALUE;
    _26042 = NOVALUE;
    DeRef(_26059);
    _26059 = NOVALUE;
    DeRef(_26065);
    _26065 = NOVALUE;
    return _46include_Paths_50272;
    // SubProg Include_paths pc: 434 op: BADRETURNF (43)
    ;
}


object _46e_path_find(object _name_50350)
{
    object _scan_result_50351 = NOVALUE;
    object _26076 = NOVALUE; // 50368 26076
    object _26075 = NOVALUE; // 50367 26075
    object _26074 = NOVALUE; // 50366 26074
// skipping _26073  name type: 0
    object _26071 = NOVALUE; // 50362 26071
    object _26070 = NOVALUE; // 50361 26070
    object _26069 = NOVALUE; // 50358 26069
    object _26068 = NOVALUE; // 50354 26068
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg e_path_find pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg e_path_find pc: 3 op: STARTLINE (58)

    /** pathopen.e:656		if file_exists(name) then*/
    // SubProg e_path_find pc: 5 op: PROC (27)
    RefDS(_name_50350);
    _26068 = _18file_exists(_name_50350);
    // SubProg e_path_find pc: 9 op: IF (20)
    if (_26068 == 0) {
        DeRef(_26068);
        _26068 = NOVALUE;
        goto L1; // [9] 19
    }
    else {
        if (!IS_ATOM_INT(_26068) && DBL_PTR(_26068)->dbl == 0.0){
            DeRef(_26068);
            _26068 = NOVALUE;
            goto L1; // [9] 19
        }
        DeRef(_26068);
        _26068 = NOVALUE;
    }
    DeRef(_26068);
    _26068 = NOVALUE;
    // SubProg e_path_find pc: 12 op: STARTLINE (58)

    /** pathopen.e:657			return name*/
    // SubProg e_path_find pc: 14 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var scan_result_50351
    DeRef(_scan_result_50351);
    return _name_50350;
    // SubProg e_path_find pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 50348 op: 159
    // SubProg e_path_find pc: 19 op: STARTLINE (58)

    /** pathopen.e:661		for i = 1 to length(SLASH_CHARS) do*/
    // SubProg e_path_find pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg e_path_find pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_39SLASH_CHARS_19982)){
            _26069 = SEQ_PTR(_39SLASH_CHARS_19982)->length;
    }
    else {
        _26069 = 1;
    }
    // SubProg e_path_find pc: 26 op: FOR_I (125)
    {
        object _i_50356;
        _i_50356 = 1;
L2: // addr: 33 pc: 26 sub: 50348 op: 125
        if (_i_50356 > _26069){
            goto L3; // [26] 63
        }
        // SubProg e_path_find pc: 33 op: STARTLINE (58)

        /** pathopen.e:662			if find(SLASH_CHARS[i], name) then*/
        // SubProg e_path_find pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg e_path_find pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_39SLASH_CHARS_19982);
        _26070 = (object)*(((s1_ptr)_2)->base + _i_50356);
        // SubProg e_path_find pc: 41 op: FIND_FROM (176)
        _26071 = find_from(_26070, _name_50350, 1);
        _26070 = NOVALUE;
        // SubProg e_path_find pc: 46 op: IF (20)
        if (_26071 == 0)
        {
            _26071 = NOVALUE;
            goto L4; // [46] 56
        }
        else{
            _26071 = NOVALUE;
        }
        // SubProg e_path_find pc: 49 op: STARTLINE (58)

        /** pathopen.e:663				return -1*/
        // SubProg e_path_find pc: 51 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var name_50350
        DeRefDS(_name_50350);

// block var scan_result_50351
        DeRef(_scan_result_50351);
        return -1;
        // SubProg e_path_find pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 50348 op: 159
        // SubProg e_path_find pc: 56 op: STARTLINE (58)

        /** pathopen.e:665		end for*/
        // SubProg e_path_find pc: 58 op: ENDFOR_INT_UP1 (54)
        _i_50356 = _i_50356 + 1;
        goto L2; // [58] 33
L3: // addr: 63 pc: 58 sub: 50348 op: 54
        ;
    }
    // SubProg e_path_find pc: 63 op: STARTLINE (58)

    /** pathopen.e:667		scan_result = ScanPath(name, "PATH", 0)*/
    // SubProg e_path_find pc: 65 op: PROC (27)
    RefDS(_name_50350);
    RefDS(_26072);
    _0 = _scan_result_50351;
    _scan_result_50351 = _46ScanPath(_name_50350, _26072, 0);
    DeRef(_0);
    // SubProg e_path_find pc: 71 op: STARTLINE (58)

    /** pathopen.e:668		if sequence(scan_result) then*/
    // SubProg e_path_find pc: 73 op: IS_A_SEQUENCE (68)
    _26074 = IS_SEQUENCE(_scan_result_50351);
    // SubProg e_path_find pc: 76 op: IF (20)
    if (_26074 == 0)
    {
        _26074 = NOVALUE;
        goto L5; // [76] 98
    }
    else{
        _26074 = NOVALUE;
    }
    // SubProg e_path_find pc: 79 op: STARTLINE (58)

    /** pathopen.e:669			close(scan_result[2])*/
    // SubProg e_path_find pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_50351);
    _26075 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg e_path_find pc: 85 op: CLOSE (86)
    if (IS_ATOM_INT(_26075))
    EClose(_26075);
    else
    EClose((object)DBL_PTR(_26075)->dbl);
    _26075 = NOVALUE;
    // SubProg e_path_find pc: 87 op: STARTLINE (58)

    /** pathopen.e:670			return scan_result[1]*/
    // SubProg e_path_find pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_50351);
    _26076 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg e_path_find pc: 93 op: RETURNF (28)
    Ref(_26076);

// Exiting block BLOCK: e_path_find

// block var name_50350
    DeRefDS(_name_50350);

// block var scan_result_50351
    DeRef(_scan_result_50351);
    return _26076;
    // SubProg e_path_find pc: 97 op: NOP1 (159)
L5: // addr: 98 pc: 97 sub: 50348 op: 159
    // SubProg e_path_find pc: 98 op: STARTLINE (58)

    /** pathopen.e:673		return -1*/
    // SubProg e_path_find pc: 100 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var name_50350
    DeRefDS(_name_50350);

// block var scan_result_50351
    DeRef(_scan_result_50351);
    _26076 = NOVALUE;
    return -1;
    // SubProg e_path_find pc: 104 op: BADRETURNF (43)
    ;
}



// 0xAFD3E976
