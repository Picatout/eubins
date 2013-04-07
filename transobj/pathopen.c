// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _48exe_path()
{
// skipping _25746  name type: 0
// skipping _25745  name type: 0
    object _25744 = NOVALUE; // 49804 25744
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg exe_path pc: 1 op: STARTLINE (58)

    /** pathopen.e:70		if sequence(exe_path_cache) then*/
    // SubProg exe_path pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 5 op: IS_A_SEQUENCE (68)
    _25744 = IS_SEQUENCE(_48exe_path_cache_49797);
    // SubProg exe_path pc: 8 op: IF (20)
    if (_25744 == 0)
    {
        _25744 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25744 = NOVALUE;
    }
    // SubProg exe_path pc: 11 op: STARTLINE (58)

    /** pathopen.e:71			return exe_path_cache*/
    // SubProg exe_path pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 15 op: RETURNF (28)
    Ref(_48exe_path_cache_49797);

// Exiting block BLOCK: exe_path
    return _48exe_path_cache_49797;
    // SubProg exe_path pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 49801 op: 159
    // SubProg exe_path pc: 20 op: STARTLINE (58)

    /** pathopen.e:74		exe_path_cache = command_line()*/
    // SubProg exe_path pc: 22 op: COMMAND_LINE (100)
    DeRef(_48exe_path_cache_49797);
    _48exe_path_cache_49797 = Command_Line();
    // SubProg exe_path pc: 24 op: STARTLINE (58)

    /** pathopen.e:75		exe_path_cache = exe_path_cache[1]*/
    // SubProg exe_path pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 28 op: RHS_SUBS_CHECK (92)
    _0 = _48exe_path_cache_49797;
    _2 = (object)SEQ_PTR(_48exe_path_cache_49797);
    _48exe_path_cache_49797 = (object)*(((s1_ptr)_2)->base + 1);
    RefDS(_48exe_path_cache_49797);
    DeRefDS(_0);
    // SubProg exe_path pc: 32 op: STARTLINE (58)

    /** pathopen.e:77		return exe_path_cache*/
    // SubProg exe_path pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 36 op: RETURNF (28)
    RefDS(_48exe_path_cache_49797);

// Exiting block BLOCK: exe_path
    return _48exe_path_cache_49797;
    // SubProg exe_path pc: 40 op: BADRETURNF (43)
    ;
}


object _48check_cache(object _env_49809, object _inc_path_49810)
{
    object _delim_49811 = NOVALUE;
    object _pos_49812 = NOVALUE;
// skipping _25793  name type: 0
    object _25792 = NOVALUE; // 49869 25792
    object _25791 = NOVALUE; // 49867 25791
    object _25790 = NOVALUE; // 49866 25790
    object _25789 = NOVALUE; // 49865 25789
// skipping _25788  name type: 0
    object _25787 = NOVALUE; // 49862 25787
    object _25786 = NOVALUE; // 49861 25786
    object _25785 = NOVALUE; // 49860 25785
    object _25784 = NOVALUE; // 49859 25784
    object _25783 = NOVALUE; // 49858 25783
    object _25782 = NOVALUE; // 49857 25782
    object _25781 = NOVALUE; // 49856 25781
    object _25780 = NOVALUE; // 49855 25780
    object _25779 = NOVALUE; // 49854 25779
// skipping _25778  name type: 0
// skipping _25777  name type: 0
// skipping _25776  name type: 0
    object _25775 = NOVALUE; // 49848 25775
    object _25774 = NOVALUE; // 49847 25774
    object _25773 = NOVALUE; // 49846 25773
    object _25772 = NOVALUE; // 49845 25772
    object _25771 = NOVALUE; // 49844 25771
    object _25770 = NOVALUE; // 49843 25770
    object _25769 = NOVALUE; // 49842 25769
    object _25768 = NOVALUE; // 49841 25768
// skipping _25767  name type: 0
    object _25766 = NOVALUE; // 49839 25766
    object _25765 = NOVALUE; // 49838 25765
    object _25764 = NOVALUE; // 49837 25764
    object _25763 = NOVALUE; // 49836 25763
    object _25762 = NOVALUE; // 49834 25762
    object _25761 = NOVALUE; // 49833 25761
// skipping _25760  name type: 0
    object _25759 = NOVALUE; // 49829 25759
    object _25758 = NOVALUE; // 49828 25758
    object _25757 = NOVALUE; // 49826 25757
    object _25756 = NOVALUE; // 49825 25756
// skipping _25755  name type: 0
// skipping _25754  name type: 0
// skipping _25753  name type: 0
// skipping _25752  name type: 0
// skipping _25751  name type: 0
// skipping _25750  name type: 0
// skipping _25749  name type: 0
// skipping _25748  name type: 0
// skipping _25747  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_cache pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_cache pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg check_cache pc: 5 op: STARTLINE (58)

    /** pathopen.e:83		if not num_var then -- first time the var is accessed, add cache entry*/
    // SubProg check_cache pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 9 op: NOT_IFW (108)
    if (_48num_var_49786 != 0)
    goto L1; // [9] 86
    // SubProg check_cache pc: 12 op: STARTLINE (58)

    /** pathopen.e:84			cache_vars = append(cache_vars,env)*/
    // SubProg check_cache pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 16 op: APPEND (35)
    RefDS(_env_49809);
    Append(&_48cache_vars_49787, _48cache_vars_49787, _env_49809);
    // SubProg check_cache pc: 20 op: STARTLINE (58)

    /** pathopen.e:85			cache_strings = append(cache_strings,inc_path)*/
    // SubProg check_cache pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 24 op: APPEND (35)
    RefDS(_inc_path_49810);
    Append(&_48cache_strings_49788, _48cache_strings_49788, _inc_path_49810);
    // SubProg check_cache pc: 28 op: STARTLINE (58)

    /** pathopen.e:86			cache_substrings = append(cache_substrings,{})*/
    // SubProg check_cache pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 32 op: APPEND (35)
    RefDS(_21933);
    Append(&_48cache_substrings_49789, _48cache_substrings_49789, _21933);
    // SubProg check_cache pc: 36 op: STARTLINE (58)

    /** pathopen.e:87			cache_starts = append(cache_starts,{})*/
    // SubProg check_cache pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 40 op: APPEND (35)
    RefDS(_21933);
    Append(&_48cache_starts_49790, _48cache_starts_49790, _21933);
    // SubProg check_cache pc: 44 op: STARTLINE (58)

    /** pathopen.e:88			cache_ends = append(cache_ends,{})*/
    // SubProg check_cache pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 48 op: APPEND (35)
    RefDS(_21933);
    Append(&_48cache_ends_49791, _48cache_ends_49791, _21933);
    // SubProg check_cache pc: 52 op: STARTLINE (58)

    /** pathopen.e:89			ifdef WINDOWS then*/
    // SubProg check_cache pc: 54 op: STARTLINE (58)

    /** pathopen.e:92			num_var = length(cache_vars)*/
    // SubProg check_cache pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 58 op: LENGTH (42)
    if (IS_SEQUENCE(_48cache_vars_49787)){
            _48num_var_49786 = SEQ_PTR(_48cache_vars_49787)->length;
    }
    else {
        _48num_var_49786 = 1;
    }
    // SubProg check_cache pc: 61 op: STARTLINE (58)

    /** pathopen.e:93			cache_complete &= 0*/
    // SubProg check_cache pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 65 op: CONCAT (15)
    Append(&_48cache_complete_49793, _48cache_complete_49793, 0);
    // SubProg check_cache pc: 69 op: STARTLINE (58)

    /** pathopen.e:94			cache_delims &= 0*/
    // SubProg check_cache pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 73 op: CONCAT (15)
    Append(&_48cache_delims_49794, _48cache_delims_49794, 0);
    // SubProg check_cache pc: 77 op: STARTLINE (58)

    /** pathopen.e:95			return 0*/
    // SubProg check_cache pc: 79 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49809
    DeRefDSi(_env_49809);

// block var inc_path_49810
    DeRefDSi(_inc_path_49810);

// block var delim_49811

// block var pos_49812
    return 0;
    // SubProg check_cache pc: 83 op: ELSE (23)
    goto L2; // [83] 425
    // SubProg check_cache pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 49807 op: 159
    // SubProg check_cache pc: 86 op: STARTLINE (58)

    /** pathopen.e:97			if compare(inc_path,cache_strings[num_var]) then*/
    // SubProg check_cache pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 92 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_48cache_strings_49788);
    _25756 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg check_cache pc: 96 op: COMPARE (76)
    if (IS_ATOM_INT(_inc_path_49810) && IS_ATOM_INT(_25756)){
        _25757 = (_inc_path_49810 < _25756) ? -1 : (_inc_path_49810 > _25756);
    }
    else{
        _25757 = compare(_inc_path_49810, _25756);
    }
    _25756 = NOVALUE;
    // SubProg check_cache pc: 100 op: IF (20)
    if (_25757 == 0)
    {
        _25757 = NOVALUE;
        goto L3; // [100] 424
    }
    else{
        _25757 = NOVALUE;
    }
    // SubProg check_cache pc: 103 op: STARTLINE (58)

    /** pathopen.e:98				cache_strings[num_var] = inc_path*/
    // SubProg check_cache pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 109 op: ASSIGN_SUBS (16)
    RefDS(_inc_path_49810);
    _2 = (object)SEQ_PTR(_48cache_strings_49788);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _48cache_strings_49788 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _inc_path_49810;
    DeRefDS(_1);
    // SubProg check_cache pc: 113 op: STARTLINE (58)

    /** pathopen.e:99				cache_complete[num_var] = 0*/
    // SubProg check_cache pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 119 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_48cache_complete_49793);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _48cache_complete_49793 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
    *(intptr_t *)_2 = 0;
    // SubProg check_cache pc: 123 op: STARTLINE (58)

    /** pathopen.e:100				if match(cache_strings[num_var],inc_path)!=1 then -- try to salvage what we can*/
    // SubProg check_cache pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 129 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_48cache_strings_49788);
    _25758 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg check_cache pc: 133 op: MATCH_FROM (177)
    _25759 = e_match_from(_25758, _inc_path_49810, 1);
    _25758 = NOVALUE;
    // SubProg check_cache pc: 138 op: NOTEQ_IFW (105)
    if (_25759 == 1)
    goto L4; // [138] 423
    // SubProg check_cache pc: 142 op: STARTLINE (58)

    /** pathopen.e:101					pos = -1*/
    // SubProg check_cache pc: 144 op: ASSIGN_I (113)
    _pos_49812 = -1;
    // SubProg check_cache pc: 147 op: STARTLINE (58)

    /** pathopen.e:102					for i=1 to length(cache_strings[num_var]) do*/
    // SubProg check_cache pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 153 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_48cache_strings_49788);
    _25761 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg check_cache pc: 157 op: LENGTH (42)
    if (IS_SEQUENCE(_25761)){
            _25762 = SEQ_PTR(_25761)->length;
    }
    else {
        _25762 = 1;
    }
    _25761 = NOVALUE;
    // SubProg check_cache pc: 160 op: FOR_I (125)
    {
        object _i_49832;
        _i_49832 = 1;
L5: // addr: 167 pc: 160 sub: 49807 op: 125
        if (_i_49832 > _25762){
            goto L6; // [160] 422
        }
        // SubProg check_cache pc: 167 op: STARTLINE (58)

        /** pathopen.e:103						if cache_ends[num_var][i] > length(inc_path) or */
        // SubProg check_cache pc: 169 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 171 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 173 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        _25763 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 177 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25763);
        _25764 = (object)*(((s1_ptr)_2)->base + _i_49832);
        _25763 = NOVALUE;
        // SubProg check_cache pc: 181 op: LENGTH (42)
        if (IS_SEQUENCE(_inc_path_49810)){
                _25765 = SEQ_PTR(_inc_path_49810)->length;
        }
        else {
            _25765 = 1;
        }
        // SubProg check_cache pc: 184 op: GREATER (6)
        if (IS_ATOM_INT(_25764)) {
            _25766 = (_25764 > _25765);
        }
        else {
            _25766 = binary_op(GREATER, _25764, _25765);
        }
        _25764 = NOVALUE;
        _25765 = NOVALUE;
        // SubProg check_cache pc: 188 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_25766)) {
            if (_25766 != 0) {
                goto L7; // [188] 242
            }
        }
        else {
            if (DBL_PTR(_25766)->dbl != 0.0) {
                goto L7; // [188] 242
            }
        }
        // SubProg check_cache pc: 192 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 196 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_substrings_49789);
        _25768 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 200 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25768);
        _25769 = (object)*(((s1_ptr)_2)->base + _i_49832);
        _25768 = NOVALUE;
        // SubProg check_cache pc: 204 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 206 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 208 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_starts_49790);
        _25770 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25770);
        _25771 = (object)*(((s1_ptr)_2)->base + _i_49832);
        _25770 = NOVALUE;
        // SubProg check_cache pc: 216 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 220 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        _25772 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 224 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25772);
        _25773 = (object)*(((s1_ptr)_2)->base + _i_49832);
        _25772 = NOVALUE;
        // SubProg check_cache pc: 228 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25774;
        RHS_Slice(_inc_path_49810, _25771, _25773);
        // SubProg check_cache pc: 233 op: COMPARE (76)
        if (IS_ATOM_INT(_25769) && IS_ATOM_INT(_25774)){
            _25775 = (_25769 < _25774) ? -1 : (_25769 > _25774);
        }
        else{
            _25775 = compare(_25769, _25774);
        }
        _25769 = NOVALUE;
        DeRefDS(_25774);
        _25774 = NOVALUE;
        // SubProg check_cache pc: 237 op: NOP1 (159)
        // SubProg check_cache pc: 238 op: IF (20)
        if (_25775 == 0)
        {
            _25775 = NOVALUE;
            goto L8; // [238] 253
        }
        else{
            _25775 = NOVALUE;
        }
        // SubProg check_cache pc: 241 op: NOP1 (159)
L7: // addr: 242 pc: 241 sub: 49807 op: 159
        // SubProg check_cache pc: 242 op: STARTLINE (58)

        /** pathopen.e:107							pos = i-1*/
        // SubProg check_cache pc: 244 op: MINUS_I (116)
        _pos_49812 = _i_49832 - 1;
        // SubProg check_cache pc: 248 op: STARTLINE (58)

        /** pathopen.e:108							exit*/
        // SubProg check_cache pc: 250 op: EXIT (61)
        goto L6; // [250] 422
        // SubProg check_cache pc: 252 op: NOP1 (159)
L8: // addr: 253 pc: 252 sub: 49807 op: 159
        // SubProg check_cache pc: 253 op: STARTLINE (58)

        /** pathopen.e:110						if pos = 0 then*/
        // SubProg check_cache pc: 255 op: EQUALS_IFW_I (121)
        if (_pos_49812 != 0)
        goto L9; // [255] 268
        // SubProg check_cache pc: 259 op: STARTLINE (58)

        /** pathopen.e:111							return 0*/
        // SubProg check_cache pc: 261 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49809
        DeRefDSi(_env_49809);

// block var inc_path_49810
        DeRefDSi(_inc_path_49810);

// block var delim_49811

// block var pos_49812
        _25761 = NOVALUE;
        _25771 = NOVALUE;
        _25773 = NOVALUE;
        DeRef(_25766);
        _25766 = NOVALUE;
        return 0;
        // SubProg check_cache pc: 265 op: ELSE (23)
        goto LA; // [265] 415
        // SubProg check_cache pc: 267 op: NOP1 (159)
L9: // addr: 268 pc: 267 sub: 49807 op: 159
        // SubProg check_cache pc: 268 op: STARTLINE (58)

        /** pathopen.e:112						elsif pos >0 then -- crop cache data*/
        // SubProg check_cache pc: 270 op: GREATER_IFW_I (124)
        if (_pos_49812 <= 0)
        goto LB; // [270] 414
        // SubProg check_cache pc: 274 op: STARTLINE (58)

        /** pathopen.e:113							cache_substrings[num_var] = cache_substrings[num_var][1..pos]*/
        // SubProg check_cache pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 284 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_substrings_49789);
        _25779 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 288 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25780;
        RHS_Slice(_25779, 1, _pos_49812);
        _25779 = NOVALUE;
        // SubProg check_cache pc: 293 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_substrings_49789);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_substrings_49789 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25780;
        if( _1 != _25780 ){
            DeRefDS(_1);
        }
        _25780 = NOVALUE;
        // SubProg check_cache pc: 297 op: STARTLINE (58)

        /** pathopen.e:114							cache_starts[num_var] = cache_starts[num_var][1..pos]*/
        // SubProg check_cache pc: 299 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 301 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 305 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 307 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_starts_49790);
        _25781 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 311 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25782;
        RHS_Slice(_25781, 1, _pos_49812);
        _25781 = NOVALUE;
        // SubProg check_cache pc: 316 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_starts_49790);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_starts_49790 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25782;
        if( _1 != _25782 ){
            DeRef(_1);
        }
        _25782 = NOVALUE;
        // SubProg check_cache pc: 320 op: STARTLINE (58)

        /** pathopen.e:115							cache_ends[num_var] = cache_ends[num_var][1..pos]*/
        // SubProg check_cache pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 324 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 328 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 330 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        _25783 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 334 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25784;
        RHS_Slice(_25783, 1, _pos_49812);
        _25783 = NOVALUE;
        // SubProg check_cache pc: 339 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_ends_49791 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25784;
        if( _1 != _25784 ){
            DeRef(_1);
        }
        _25784 = NOVALUE;
        // SubProg check_cache pc: 343 op: STARTLINE (58)

        /** pathopen.e:116							ifdef WINDOWS then*/
        // SubProg check_cache pc: 345 op: STARTLINE (58)

        /** pathopen.e:119							delim = cache_ends[num_var][$]+1*/
        // SubProg check_cache pc: 347 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 351 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        _25785 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg check_cache pc: 355 op: LENGTH (42)
        if (IS_SEQUENCE(_25785)){
                _25786 = SEQ_PTR(_25785)->length;
        }
        else {
            _25786 = 1;
        }
        // SubProg check_cache pc: 358 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25785);
        _25787 = (object)*(((s1_ptr)_2)->base + _25786);
        _25785 = NOVALUE;
        // SubProg check_cache pc: 362 op: PLUS1_I (117)
        if (IS_ATOM_INT(_25787)) {
            _delim_49811 = _25787 + 1;
        }
        else
        { // coercing _delim_49811 to an integer 1
            _delim_49811 = 1+(object)(DBL_PTR(_25787)->dbl);
            if( !IS_ATOM_INT(_delim_49811) ){
                _delim_49811 = (object)DBL_PTR(_delim_49811)->dbl;
            }
        }
        _25787 = NOVALUE;
        // SubProg check_cache pc: 366 op: STARTLINE (58)

        /** pathopen.e:120							while delim <= length(inc_path) and delim != PATH_SEPARATOR do*/
        // SubProg check_cache pc: 368 op: NOP2 (110)
        // SubProg check_cache pc: 370 op: NOPWHILE (158)
LC: // addr: 371 pc: 370 sub: 49807 op: 158
        // SubProg check_cache pc: 371 op: LENGTH (42)
        if (IS_SEQUENCE(_inc_path_49810)){
                _25789 = SEQ_PTR(_inc_path_49810)->length;
        }
        else {
            _25789 = 1;
        }
        // SubProg check_cache pc: 374 op: LESSEQ (5)
        _25790 = (_delim_49811 <= _25789);
        _25789 = NOVALUE;
        // SubProg check_cache pc: 378 op: SC1_AND_IF (146)
        if (_25790 == 0) {
            goto LD; // [378] 403
        }
        // SubProg check_cache pc: 382 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 384 op: NOTEQ (4)
        _25792 = (_delim_49811 != 58);
        // SubProg check_cache pc: 388 op: NOP1 (159)
        // SubProg check_cache pc: 389 op: WHILE (47)
        if (_25792 == 0)
        {
            DeRef(_25792);
            _25792 = NOVALUE;
            goto LD; // [389] 403
        }
        else{
            DeRef(_25792);
            _25792 = NOVALUE;
        }
        // SubProg check_cache pc: 392 op: STARTLINE (58)

        /** pathopen.e:121								delim+=1*/
        // SubProg check_cache pc: 394 op: PLUS1_I (117)
        _delim_49811 = _delim_49811 + 1;
        // SubProg check_cache pc: 398 op: STARTLINE (58)

        /** pathopen.e:122							end while*/
        // SubProg check_cache pc: 400 op: ENDWHILE (22)
        goto LC; // [400] 371
        // SubProg check_cache pc: 402 op: NOP1 (159)
LD: // addr: 403 pc: 402 sub: 49807 op: 159
        // SubProg check_cache pc: 403 op: STARTLINE (58)

        /** pathopen.e:123							cache_delims[num_var] = delim*/
        // SubProg check_cache pc: 405 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 407 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 409 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_48cache_delims_49794);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_delims_49794 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        *(intptr_t *)_2 = _delim_49811;
        // SubProg check_cache pc: 413 op: NOP1 (159)
LB: // addr: 414 pc: 413 sub: 49807 op: 159
        // SubProg check_cache pc: 414 op: NOP1 (159)
LA: // addr: 415 pc: 414 sub: 49807 op: 159
        // SubProg check_cache pc: 415 op: STARTLINE (58)

        /** pathopen.e:125					end for*/
        // SubProg check_cache pc: 417 op: ENDFOR_INT_UP1 (54)
        _i_49832 = _i_49832 + 1;
        goto L5; // [417] 167
L6: // addr: 422 pc: 417 sub: 49807 op: 54
        ;
    }
    // SubProg check_cache pc: 422 op: NOP1 (159)
L4: // addr: 423 pc: 422 sub: 49807 op: 159
    // SubProg check_cache pc: 423 op: NOP1 (159)
L3: // addr: 424 pc: 423 sub: 49807 op: 159
    // SubProg check_cache pc: 424 op: NOP1 (159)
L2: // addr: 425 pc: 424 sub: 49807 op: 159
    // SubProg check_cache pc: 425 op: STARTLINE (58)

    /** pathopen.e:129		return 1*/
    // SubProg check_cache pc: 427 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49809
    DeRefDSi(_env_49809);

// block var inc_path_49810
    DeRefDSi(_inc_path_49810);

// block var delim_49811

// block var pos_49812
    _25761 = NOVALUE;
    _25771 = NOVALUE;
    _25773 = NOVALUE;
    DeRef(_25790);
    _25790 = NOVALUE;
    DeRef(_25766);
    _25766 = NOVALUE;
    return 1;
    // SubProg check_cache pc: 431 op: BADRETURNF (43)
    ;
}


object _48get_conf_dirs()
{
    object _delimiter_49873 = NOVALUE;
    object _dirs_49874 = NOVALUE;
// skipping _25799  name type: 0
// skipping _25798  name type: 0
    object _25797 = NOVALUE; // 49881 25797
// skipping _25796  name type: 0
    object _25795 = NOVALUE; // 49878 25795
    object _25794 = NOVALUE; // 49877 25794
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_conf_dirs pc: 1 op: STARTLINE (58)

    /** pathopen.e:136		ifdef UNIX then*/
    // SubProg get_conf_dirs pc: 3 op: STARTLINE (58)

    /** pathopen.e:137			delimiter = ':'*/
    // SubProg get_conf_dirs pc: 5 op: ASSIGN_I (113)
    _delimiter_49873 = 58;
    // SubProg get_conf_dirs pc: 8 op: STARTLINE (58)

    /** pathopen.e:142		dirs = ""*/
    // SubProg get_conf_dirs pc: 10 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_dirs_49874);
    _dirs_49874 = _21933;
    // SubProg get_conf_dirs pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg get_conf_dirs pc: 15 op: STARTLINE (58)

    /** pathopen.e:143		for i = 1 to length(config_inc_paths) do*/
    // SubProg get_conf_dirs pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_conf_dirs pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_48config_inc_paths_49795)){
            _25794 = SEQ_PTR(_48config_inc_paths_49795)->length;
    }
    else {
        _25794 = 1;
    }
    // SubProg get_conf_dirs pc: 22 op: FOR_I (125)
    {
        object _i_49876;
        _i_49876 = 1;
L1: // addr: 29 pc: 22 sub: 49871 op: 125
        if (_i_49876 > _25794){
            goto L2; // [22] 68
        }
        // SubProg get_conf_dirs pc: 29 op: STARTLINE (58)

        /** pathopen.e:144			dirs &= config_inc_paths[i]*/
        // SubProg get_conf_dirs pc: 31 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_conf_dirs pc: 33 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48config_inc_paths_49795);
        _25795 = (object)*(((s1_ptr)_2)->base + _i_49876);
        // SubProg get_conf_dirs pc: 37 op: CONCAT (15)
        Concat((object_ptr)&_dirs_49874, _dirs_49874, _25795);
        _25795 = NOVALUE;
        // SubProg get_conf_dirs pc: 41 op: STARTLINE (58)

        /** pathopen.e:145			if i != length(config_inc_paths) then*/
        // SubProg get_conf_dirs pc: 43 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_conf_dirs pc: 45 op: LENGTH (42)
        if (IS_SEQUENCE(_48config_inc_paths_49795)){
                _25797 = SEQ_PTR(_48config_inc_paths_49795)->length;
        }
        else {
            _25797 = 1;
        }
        // SubProg get_conf_dirs pc: 48 op: NOTEQ_IFW_I (122)
        if (_i_49876 == _25797)
        goto L3; // [48] 61
        // SubProg get_conf_dirs pc: 52 op: STARTLINE (58)

        /** pathopen.e:146				dirs &= delimiter*/
        // SubProg get_conf_dirs pc: 54 op: PRIVATE_INIT_CHECK (30)
        // SubProg get_conf_dirs pc: 56 op: CONCAT (15)
        Append(&_dirs_49874, _dirs_49874, _delimiter_49873);
        // SubProg get_conf_dirs pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 49871 op: 159
        // SubProg get_conf_dirs pc: 61 op: STARTLINE (58)

        /** pathopen.e:148		end for*/
        // SubProg get_conf_dirs pc: 63 op: ENDFOR_INT_UP1 (54)
        _i_49876 = _i_49876 + 1;
        goto L1; // [63] 29
L2: // addr: 68 pc: 63 sub: 49871 op: 54
        ;
    }
    // SubProg get_conf_dirs pc: 68 op: STARTLINE (58)

    /** pathopen.e:150		return dirs*/
    // SubProg get_conf_dirs pc: 70 op: RETURNF (28)

// Exiting block BLOCK: get_conf_dirs

// block var delimiter_49873
    return _dirs_49874;
    // SubProg get_conf_dirs pc: 74 op: BADRETURNF (43)
    ;
}


object _48strip_file_from_path(object _full_path_49886)
{
    object _25803 = NOVALUE; // 49894 25803
// skipping _25802  name type: 0
    object _25801 = NOVALUE; // 49891 25801
    object _25800 = NOVALUE; // 49889 25800
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg strip_file_from_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg strip_file_from_path pc: 3 op: STARTLINE (58)

    /** pathopen.e:156		for i = length(full_path) to 1 by -1 do*/
    // SubProg strip_file_from_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_path_49886)){
            _25800 = SEQ_PTR(_full_path_49886)->length;
    }
    else {
        _25800 = 1;
    }
    // SubProg strip_file_from_path pc: 8 op: FOR_I (125)
    {
        object _i_49888;
        _i_49888 = _25800;
L1: // addr: 15 pc: 8 sub: 49884 op: 125
        if (_i_49888 < 1){
            goto L2; // [8] 46
        }
        // SubProg strip_file_from_path pc: 15 op: STARTLINE (58)

        /** pathopen.e:157			if full_path[i] = SLASH then*/
        // SubProg strip_file_from_path pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_full_path_49886);
        _25801 = (object)*(((s1_ptr)_2)->base + _i_49888);
        // SubProg strip_file_from_path pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg strip_file_from_path pc: 23 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25801, 47)){
            _25801 = NOVALUE;
            goto L3; // [23] 39
        }
        _25801 = NOVALUE;
        // SubProg strip_file_from_path pc: 27 op: STARTLINE (58)

        /** pathopen.e:158				return full_path[1..i]*/
        // SubProg strip_file_from_path pc: 29 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25803;
        RHS_Slice(_full_path_49886, 1, _i_49888);
        // SubProg strip_file_from_path pc: 34 op: RETURNF (28)

// Exiting block BLOCK: strip_file_from_path

// block var full_path_49886
        DeRefDS(_full_path_49886);
        return _25803;
        // SubProg strip_file_from_path pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 49884 op: 159
        // SubProg strip_file_from_path pc: 39 op: STARTLINE (58)

        /** pathopen.e:160		end for*/
        // SubProg strip_file_from_path pc: 41 op: ENDFOR_GENERAL (39)
        _i_49888 = _i_49888 + -1;
        goto L1; // [41] 15
L2: // addr: 46 pc: 41 sub: 49884 op: 39
        ;
    }
    // SubProg strip_file_from_path pc: 46 op: STARTLINE (58)

    /** pathopen.e:162		return ""*/
    // SubProg strip_file_from_path pc: 48 op: RETURNF (28)
    RefDS(_21933);

// Exiting block BLOCK: strip_file_from_path

// block var full_path_49886
    DeRefDS(_full_path_49886);
    DeRef(_25803);
    _25803 = NOVALUE;
    return _21933;
    // SubProg strip_file_from_path pc: 52 op: BADRETURNF (43)
    ;
}


object _48expand_path(object _path_49897, object _prefix_49898)
{
    object _absolute_49899 = NOVALUE;
    object _home_49903 = NOVALUE;
// skipping _25828  name type: 0
    object _25827 = NOVALUE; // 49932 25827
    object _25826 = NOVALUE; // 49931 25826
    object _25825 = NOVALUE; // 49929 25825
    object _25824 = NOVALUE; // 49928 25824
    object _25823 = NOVALUE; // 49927 25823
    object _25822 = NOVALUE; // 49926 25822
// skipping _25821  name type: 0
// skipping _25820  name type: 0
// skipping _25819  name type: 0
    object _25818 = NOVALUE; // 49918 25818
// skipping _25817  name type: 0
    object _25816 = NOVALUE; // 49916 25816
    object _25815 = NOVALUE; // 49915 25815
    object _25814 = NOVALUE; // 49914 25814
    object _25813 = NOVALUE; // 49913 25813
    object _25812 = NOVALUE; // 49912 25812
// skipping _25811  name type: 0
    object _25809 = NOVALUE; // 49908 25809
    object _25808 = NOVALUE; // 49907 25808
    object _25807 = NOVALUE; // 49906 25807
    object _25806 = NOVALUE; // 49905 25806
// skipping _25805  name type: 0
    object _25804 = NOVALUE; // 49901 25804
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expand_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg expand_path pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg expand_path pc: 5 op: STARTLINE (58)

    /** pathopen.e:169		if not length(path) then*/
    // SubProg expand_path pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49897)){
            _25804 = SEQ_PTR(_path_49897)->length;
    }
    else {
        _25804 = 1;
    }
    // SubProg expand_path pc: 10 op: NOT_IFW (108)
    if (_25804 != 0)
    goto L1; // [10] 22
    _25804 = NOVALUE;
    // SubProg expand_path pc: 13 op: STARTLINE (58)

    /** pathopen.e:170			return pwd*/
    // SubProg expand_path pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 17 op: RETURNF (28)
    RefDS(_48pwd_49798);

// Exiting block BLOCK: expand_path

// block var path_49897
    DeRefDS(_path_49897);

// block var prefix_49898
    DeRefDS(_prefix_49898);

// block var absolute_49899

// block var home_49903
    DeRefi(_home_49903);
    return _48pwd_49798;
    // SubProg expand_path pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 49895 op: 159
    // SubProg expand_path pc: 22 op: STARTLINE (58)

    /** pathopen.e:174		ifdef UNIX then*/
    // SubProg expand_path pc: 24 op: STARTLINE (58)

    /** pathopen.e:175			object home*/
    // SubProg expand_path pc: 26 op: STARTLINE (58)

    /** pathopen.e:176			if length(path) and path[1] = '~' then*/
    // SubProg expand_path pc: 28 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49897)){
            _25806 = SEQ_PTR(_path_49897)->length;
    }
    else {
        _25806 = 1;
    }
    // SubProg expand_path pc: 31 op: SC1_AND_IF (146)
    if (_25806 == 0) {
        goto L2; // [31] 84
    }
    // SubProg expand_path pc: 35 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49897);
    _25808 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg expand_path pc: 39 op: EQUALS (3)
    if (IS_ATOM_INT(_25808)) {
        _25809 = (_25808 == 126);
    }
    else {
        _25809 = binary_op(EQUALS, _25808, 126);
    }
    _25808 = NOVALUE;
    // SubProg expand_path pc: 43 op: NOP1 (159)
    // SubProg expand_path pc: 44 op: IF (20)
    if (_25809 == 0) {
        DeRef(_25809);
        _25809 = NOVALUE;
        goto L2; // [44] 84
    }
    else {
        if (!IS_ATOM_INT(_25809) && DBL_PTR(_25809)->dbl == 0.0){
            DeRef(_25809);
            _25809 = NOVALUE;
            goto L2; // [44] 84
        }
        DeRef(_25809);
        _25809 = NOVALUE;
    }
    DeRef(_25809);
    _25809 = NOVALUE;
    // SubProg expand_path pc: 47 op: STARTLINE (58)

    /** pathopen.e:177				home = getenv("HOME")*/
    // SubProg expand_path pc: 49 op: GETENV (91)
    DeRefi(_home_49903);
    _home_49903 = EGetEnv(_25810);
    // SubProg expand_path pc: 52 op: STARTLINE (58)

    /** pathopen.e:178				if sequence(home) and length(home) then*/
    // SubProg expand_path pc: 54 op: IS_A_SEQUENCE (68)
    _25812 = IS_SEQUENCE(_home_49903);
    // SubProg expand_path pc: 57 op: SC1_AND_IF (146)
    if (_25812 == 0) {
        goto L3; // [57] 83
    }
    // SubProg expand_path pc: 61 op: LENGTH (42)
    if (IS_SEQUENCE(_home_49903)){
            _25814 = SEQ_PTR(_home_49903)->length;
    }
    else {
        _25814 = 1;
    }
    // SubProg expand_path pc: 64 op: NOP1 (159)
    // SubProg expand_path pc: 65 op: IF (20)
    if (_25814 == 0)
    {
        _25814 = NOVALUE;
        goto L3; // [65] 83
    }
    else{
        _25814 = NOVALUE;
    }
    // SubProg expand_path pc: 68 op: STARTLINE (58)

    /** pathopen.e:179					path = home & path[2..$]*/
    // SubProg expand_path pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49897)){
            _25815 = SEQ_PTR(_path_49897)->length;
    }
    else {
        _25815 = 1;
    }
    // SubProg expand_path pc: 73 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25816;
    RHS_Slice(_path_49897, 2, _25815);
    // SubProg expand_path pc: 78 op: CONCAT (15)
    if (IS_SEQUENCE(_home_49903) && IS_ATOM(_25816)) {
    }
    else if (IS_ATOM(_home_49903) && IS_SEQUENCE(_25816)) {
        Ref(_home_49903);
        Prepend(&_path_49897, _25816, _home_49903);
    }
    else {
        Concat((object_ptr)&_path_49897, _home_49903, _25816);
    }
    DeRefDS(_25816);
    _25816 = NOVALUE;
    // SubProg expand_path pc: 82 op: NOP1 (159)
L3: // addr: 83 pc: 82 sub: 49895 op: 159
    // SubProg expand_path pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 49895 op: 159
    // SubProg expand_path pc: 84 op: STARTLINE (58)

    /** pathopen.e:183			absolute = find(path[1], SLASH_CHARS)*/
    // SubProg expand_path pc: 86 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49897);
    _25818 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg expand_path pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 92 op: FIND_FROM (176)
    _absolute_49899 = find_from(_25818, _41SLASH_CHARS_21230, 1);
    _25818 = NOVALUE;
    // SubProg expand_path pc: 97 op: STARTLINE (58)

    /** pathopen.e:188		if not absolute then*/
    // SubProg expand_path pc: 99 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_path pc: 101 op: NOT_IFW (108)
    if (_absolute_49899 != 0)
    goto L4; // [101] 115
    // SubProg expand_path pc: 104 op: STARTLINE (58)

    /** pathopen.e:189			path = prefix & SLASH & path*/
    // SubProg expand_path pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 108 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _path_49897;
        concat_list[1] = 47;
        concat_list[2] = _prefix_49898;
        Concat_N((object_ptr)&_path_49897, concat_list, 3);
    }
    // SubProg expand_path pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 49895 op: 159
    // SubProg expand_path pc: 115 op: STARTLINE (58)

    /** pathopen.e:192		if length(path) and not find(path[$], SLASH_CHARS) then*/
    // SubProg expand_path pc: 117 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49897)){
            _25822 = SEQ_PTR(_path_49897)->length;
    }
    else {
        _25822 = 1;
    }
    // SubProg expand_path pc: 120 op: SC1_AND_IF (146)
    if (_25822 == 0) {
        goto L5; // [120] 154
    }
    // SubProg expand_path pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49897)){
            _25824 = SEQ_PTR(_path_49897)->length;
    }
    else {
        _25824 = 1;
    }
    // SubProg expand_path pc: 127 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49897);
    _25825 = (object)*(((s1_ptr)_2)->base + _25824);
    // SubProg expand_path pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 133 op: FIND_FROM (176)
    _25826 = find_from(_25825, _41SLASH_CHARS_21230, 1);
    _25825 = NOVALUE;
    // SubProg expand_path pc: 138 op: NOT (7)
    _25827 = (_25826 == 0);
    _25826 = NOVALUE;
    // SubProg expand_path pc: 141 op: NOP1 (159)
    // SubProg expand_path pc: 142 op: IF (20)
    if (_25827 == 0)
    {
        DeRef(_25827);
        _25827 = NOVALUE;
        goto L5; // [142] 154
    }
    else{
        DeRef(_25827);
        _25827 = NOVALUE;
    }
    // SubProg expand_path pc: 145 op: STARTLINE (58)

    /** pathopen.e:193			path &= SLASH*/
    // SubProg expand_path pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 149 op: CONCAT (15)
    Append(&_path_49897, _path_49897, 47);
    // SubProg expand_path pc: 153 op: NOP1 (159)
L5: // addr: 154 pc: 153 sub: 49895 op: 159
    // SubProg expand_path pc: 154 op: STARTLINE (58)

    /** pathopen.e:196		return path*/
    // SubProg expand_path pc: 156 op: RETURNF (28)

// Exiting block BLOCK: expand_path

// block var prefix_49898
    DeRefDS(_prefix_49898);

// block var absolute_49899

// block var home_49903
    DeRefi(_home_49903);
    return _path_49897;
    // SubProg expand_path pc: 160 op: BADRETURNF (43)
    ;
}


void _48add_include_directory(object _path_49937)
{
// skipping _25832  name type: 0
// skipping _25831  name type: 0
    object _25830 = NOVALUE; // 49940 25830
// skipping _25829  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_include_directory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_include_directory pc: 3 op: STARTLINE (58)

    /** pathopen.e:200		path = expand_path( path, pwd )*/
    // SubProg add_include_directory pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 7 op: PROC (27)
    RefDS(_path_49937);
    RefDS(_48pwd_49798);
    _0 = _path_49937;
    _path_49937 = _48expand_path(_path_49937, _48pwd_49798);
    DeRefDS(_0);
    // SubProg add_include_directory pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg add_include_directory pc: 14 op: STARTLINE (58)

    /** pathopen.e:202		if not find( path, config_inc_paths ) then*/
    // SubProg add_include_directory pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 18 op: FIND_FROM (176)
    _25830 = find_from(_path_49937, _48config_inc_paths_49795, 1);
    // SubProg add_include_directory pc: 23 op: NOT_IFW (108)
    if (_25830 != 0)
    goto L1; // [23] 35
    _25830 = NOVALUE;
    // SubProg add_include_directory pc: 26 op: STARTLINE (58)

    /** pathopen.e:203			config_inc_paths = append( config_inc_paths, path )*/
    // SubProg add_include_directory pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 30 op: APPEND (35)
    RefDS(_path_49937);
    Append(&_48config_inc_paths_49795, _48config_inc_paths_49795, _path_49937);
    // SubProg add_include_directory pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 49935 op: 159
    // SubProg add_include_directory pc: 35 op: STARTLINE (58)

    /** pathopen.e:205	end procedure*/
    // SubProg add_include_directory pc: 37 op: RETURNP (29)

// Exiting block BLOCK: add_include_directory

// block var path_49937
    DeRefDS(_path_49937);
    return;
    // SubProg add_include_directory pc: 40 op: BADRETURNF (43)
    ;
}


object _48load_euphoria_config(object _file_49946)
{
    object _fn_49947 = NOVALUE;
    object _in_49948 = NOVALUE;
    object _spos_49949 = NOVALUE;
    object _epos_49950 = NOVALUE;
    object _conf_path_49951 = NOVALUE;
    object _new_args_49952 = NOVALUE;
    object _arg_49953 = NOVALUE;
    object _parm_49954 = NOVALUE;
    object _section_49955 = NOVALUE;
    object _needed_50052 = NOVALUE;
// skipping _25929  name type: 0
// skipping _25928  name type: 0
    object _25927 = NOVALUE; // 50114 25927
    object _25926 = NOVALUE; // 50113 25926
// skipping _25925  name type: 0
// skipping _25924  name type: 0
    object _25923 = NOVALUE; // 50108 25923
// skipping _25922  name type: 0
    object _25921 = NOVALUE; // 50106 25921
    object _25920 = NOVALUE; // 50104 25920
// skipping _25918  name type: 0
// skipping _25916  name type: 0
// skipping _25913  name type: 0
// skipping _25911  name type: 0
// skipping _25908  name type: 0
// skipping _25906  name type: 0
// skipping _25899  name type: 0
    object _25898 = NOVALUE; // 50050 25898
// skipping _25896  name type: 0
    object _25895 = NOVALUE; // 50044 25895
    object _25894 = NOVALUE; // 50043 25894
// skipping _25893  name type: 0
    object _25892 = NOVALUE; // 50041 25892
// skipping _25891  name type: 0
// skipping _25890  name type: 0
// skipping _25889  name type: 0
    object _25888 = NOVALUE; // 50035 25888
// skipping _25887  name type: 0
    object _25886 = NOVALUE; // 50032 25886
// skipping _25885  name type: 0
    object _25884 = NOVALUE; // 50029 25884
// skipping _25883  name type: 0
    object _25882 = NOVALUE; // 50026 25882
// skipping _25881  name type: 0
    object _25880 = NOVALUE; // 50023 25880
// skipping _25879  name type: 0
    object _25878 = NOVALUE; // 50019 25878
    object _25877 = NOVALUE; // 50018 25877
    object _25876 = NOVALUE; // 50017 25876
    object _25875 = NOVALUE; // 50016 25875
    object _25874 = NOVALUE; // 50015 25874
    object _25873 = NOVALUE; // 50014 25873
    object _25872 = NOVALUE; // 50013 25872
    object _25871 = NOVALUE; // 50012 25871
// skipping _25870  name type: 0
    object _25869 = NOVALUE; // 50009 25869
// skipping _25868  name type: 0
    object _25867 = NOVALUE; // 50007 25867
// skipping _25866  name type: 0
    object _25865 = NOVALUE; // 50004 25865
// skipping _25864  name type: 0
// skipping _25863  name type: 0
// skipping _25862  name type: 0
    object _25861 = NOVALUE; // 49999 25861
    object _25860 = NOVALUE; // 49998 25860
// skipping _25859  name type: 0
// skipping _25858  name type: 0
// skipping _25857  name type: 0
// skipping _25856  name type: 0
    object _25855 = NOVALUE; // 49991 25855
    object _25853 = NOVALUE; // 49989 25853
// skipping _25852  name type: 0
    object _25851 = NOVALUE; // 49986 25851
    object _25850 = NOVALUE; // 49984 25850
// skipping _25849  name type: 0
// skipping _25848  name type: 0
// skipping _25847  name type: 0
// skipping _25844  name type: 0
// skipping _25843  name type: 0
    object _25842 = NOVALUE; // 49974 25842
// skipping _25841  name type: 0
// skipping _25840  name type: 0
// skipping _25838  name type: 0
// skipping _25837  name type: 0
    object _25836 = NOVALUE; // 49963 25836
    object _25835 = NOVALUE; // 49962 25835
// skipping _25834  name type: 0
    object _25833 = NOVALUE; // 49958 25833
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg load_euphoria_config pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 3 op: STARTLINE (58)

    /** pathopen.e:213		sequence new_args = {}*/
    // SubProg load_euphoria_config pc: 5 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_new_args_49952);
    _new_args_49952 = _21933;
    // SubProg load_euphoria_config pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 10 op: STARTLINE (58)

    /** pathopen.e:219		if file_type(file) = FILETYPE_DIRECTORY then*/
    // SubProg load_euphoria_config pc: 12 op: PROC (27)
    RefDS(_file_49946);
    _25833 = _20file_type(_file_49946);
    // SubProg load_euphoria_config pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 18 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25833, 2)){
        DeRef(_25833);
        _25833 = NOVALUE;
        goto L1; // [18] 53
    }
    DeRef(_25833);
    _25833 = NOVALUE;
    // SubProg load_euphoria_config pc: 22 op: STARTLINE (58)

    /** pathopen.e:220			if file[$] != SLASH then*/
    // SubProg load_euphoria_config pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_file_49946)){
            _25835 = SEQ_PTR(_file_49946)->length;
    }
    else {
        _25835 = 1;
    }
    // SubProg load_euphoria_config pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_file_49946);
    _25836 = (object)*(((s1_ptr)_2)->base + _25835);
    // SubProg load_euphoria_config pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 33 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _25836, 47)){
        _25836 = NOVALUE;
        goto L2; // [33] 46
    }
    _25836 = NOVALUE;
    // SubProg load_euphoria_config pc: 37 op: STARTLINE (58)

    /** pathopen.e:221				file &= SLASH*/
    // SubProg load_euphoria_config pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 41 op: CONCAT (15)
    Append(&_file_49946, _file_49946, 47);
    // SubProg load_euphoria_config pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 46 op: STARTLINE (58)

    /** pathopen.e:223			file &= "eu.cfg"*/
    // SubProg load_euphoria_config pc: 48 op: CONCAT (15)
    Concat((object_ptr)&_file_49946, _file_49946, _25839);
    // SubProg load_euphoria_config pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 53 op: STARTLINE (58)

    /** pathopen.e:226		conf_path = canonical_path( file,,CORRECT )*/
    // SubProg load_euphoria_config pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 57 op: PROC (27)
    RefDS(_file_49946);
    _0 = _conf_path_49951;
    _conf_path_49951 = _20canonical_path(_file_49946, 0, 2);
    DeRef(_0);
    // SubProg load_euphoria_config pc: 63 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 65 op: STARTLINE (58)

    /** pathopen.e:229		if find(conf_path, seen_conf) != 0 then*/
    // SubProg load_euphoria_config pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 69 op: FIND_FROM (176)
    _25842 = find_from(_conf_path_49951, _48seen_conf_49943, 1);
    // SubProg load_euphoria_config pc: 74 op: NOTEQ_IFW_I (122)
    if (_25842 == 0)
    goto L3; // [74] 85
    // SubProg load_euphoria_config pc: 78 op: STARTLINE (58)

    /** pathopen.e:230			return {}*/
    // SubProg load_euphoria_config pc: 80 op: RETURNF (28)
    RefDS(_21933);

// Exiting block BLOCK: load_euphoria_config

// block var file_49946
    DeRefDS(_file_49946);

// block var fn_49947

// block var in_49948
    DeRefi(_in_49948);

// block var spos_49949

// block var epos_49950

// block var conf_path_49951
    DeRefDS(_conf_path_49951);

// block var new_args_49952
    DeRef(_new_args_49952);

// block var arg_49953
    DeRefi(_arg_49953);

// block var parm_49954
    DeRefi(_parm_49954);

// block var section_49955
    DeRef(_section_49955);
    return _21933;
    // SubProg load_euphoria_config pc: 84 op: NOP1 (159)
L3: // addr: 85 pc: 84 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 85 op: STARTLINE (58)

    /** pathopen.e:232		seen_conf = append(seen_conf, conf_path)*/
    // SubProg load_euphoria_config pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 89 op: APPEND (35)
    RefDS(_conf_path_49951);
    Append(&_48seen_conf_49943, _48seen_conf_49943, _conf_path_49951);
    // SubProg load_euphoria_config pc: 93 op: STARTLINE (58)

    /** pathopen.e:234		section = "all"*/
    // SubProg load_euphoria_config pc: 95 op: ASSIGN (18)
    RefDS(_25845);
    DeRef(_section_49955);
    _section_49955 = _25845;
    // SubProg load_euphoria_config pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 100 op: STARTLINE (58)

    /** pathopen.e:235		fn = open( conf_path, "r" )*/
    // SubProg load_euphoria_config pc: 102 op: OPEN (37)
    _fn_49947 = EOpen(_conf_path_49951, _25846, 0);
    // SubProg load_euphoria_config pc: 107 op: STARTLINE (58)

    /** pathopen.e:236		if fn = -1 then return {} end if*/
    // SubProg load_euphoria_config pc: 109 op: EQUALS_IFW_I (121)
    if (_fn_49947 != -1)
    goto L4; // [109] 118
    // SubProg load_euphoria_config pc: 113 op: RETURNF (28)
    RefDS(_21933);

// Exiting block BLOCK: load_euphoria_config

// block var file_49946
    DeRefDS(_file_49946);

// block var fn_49947

// block var in_49948
    DeRefi(_in_49948);

// block var spos_49949

// block var epos_49950

// block var conf_path_49951
    DeRefDS(_conf_path_49951);

// block var new_args_49952
    DeRef(_new_args_49952);

// block var arg_49953
    DeRefi(_arg_49953);

// block var parm_49954
    DeRefi(_parm_49954);

// block var section_49955
    DeRefDSi(_section_49955);
    return _21933;
    // SubProg load_euphoria_config pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 118 op: STARTLINE (58)

    /** pathopen.e:238		in = gets( fn )*/
    // SubProg load_euphoria_config pc: 120 op: GETS (17)
    DeRefi(_in_49948);
    _in_49948 = EGets(_fn_49947);
    // SubProg load_euphoria_config pc: 123 op: STARTLINE (58)

    /** pathopen.e:239		while sequence( in ) do*/
    // SubProg load_euphoria_config pc: 125 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 127 op: NOPWHILE (158)
L5: // addr: 128 pc: 127 sub: 49944 op: 158
    // SubProg load_euphoria_config pc: 128 op: IS_A_SEQUENCE (68)
    _25850 = IS_SEQUENCE(_in_49948);
    // SubProg load_euphoria_config pc: 131 op: WHILE (47)
    if (_25850 == 0)
    {
        _25850 = NOVALUE;
        goto L6; // [131] 768
    }
    else{
        _25850 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 134 op: STARTLINE (58)

    /** pathopen.e:241			spos = 1*/
    // SubProg load_euphoria_config pc: 136 op: ASSIGN_I (113)
    _spos_49949 = 1;
    // SubProg load_euphoria_config pc: 139 op: STARTLINE (58)

    /** pathopen.e:242			while spos <= length(in) do*/
    // SubProg load_euphoria_config pc: 141 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 143 op: NOPWHILE (158)
L7: // addr: 144 pc: 143 sub: 49944 op: 158
    // SubProg load_euphoria_config pc: 144 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49948)){
            _25851 = SEQ_PTR(_in_49948)->length;
    }
    else {
        _25851 = 1;
    }
    // SubProg load_euphoria_config pc: 147 op: LESSEQ_IFW_I (123)
    if (_spos_49949 > _25851)
    goto L8; // [147] 182
    // SubProg load_euphoria_config pc: 151 op: STARTLINE (58)

    /** pathopen.e:243				if find( in[spos], "\n\r \t" ) = 0 then*/
    // SubProg load_euphoria_config pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49948);
    _25853 = (object)*(((s1_ptr)_2)->base + _spos_49949);
    // SubProg load_euphoria_config pc: 157 op: FIND_FROM (176)
    _25855 = find_from(_25853, _25854, 1);
    _25853 = NOVALUE;
    // SubProg load_euphoria_config pc: 162 op: EQUALS_IFW_I (121)
    if (_25855 != 0)
    goto L9; // [162] 171
    // SubProg load_euphoria_config pc: 166 op: STARTLINE (58)

    /** pathopen.e:244					exit*/
    // SubProg load_euphoria_config pc: 168 op: EXIT (61)
    goto L8; // [168] 182
    // SubProg load_euphoria_config pc: 170 op: NOP1 (159)
L9: // addr: 171 pc: 170 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 171 op: STARTLINE (58)

    /** pathopen.e:246				spos += 1*/
    // SubProg load_euphoria_config pc: 173 op: PLUS1_I (117)
    _spos_49949 = _spos_49949 + 1;
    // SubProg load_euphoria_config pc: 177 op: STARTLINE (58)

    /** pathopen.e:247			end while*/
    // SubProg load_euphoria_config pc: 179 op: ENDWHILE (22)
    goto L7; // [179] 144
    // SubProg load_euphoria_config pc: 181 op: NOP1 (159)
L8: // addr: 182 pc: 181 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 182 op: STARTLINE (58)

    /** pathopen.e:249			epos = length(in)*/
    // SubProg load_euphoria_config pc: 184 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49948)){
            _epos_49950 = SEQ_PTR(_in_49948)->length;
    }
    else {
        _epos_49950 = 1;
    }
    // SubProg load_euphoria_config pc: 187 op: STARTLINE (58)

    /** pathopen.e:250			while epos >= spos do*/
    // SubProg load_euphoria_config pc: 189 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 191 op: NOPWHILE (158)
LA: // addr: 192 pc: 191 sub: 49944 op: 158
    // SubProg load_euphoria_config pc: 192 op: GREATEREQ_IFW_I (120)
    if (_epos_49950 < _spos_49949)
    goto LB; // [192] 227
    // SubProg load_euphoria_config pc: 196 op: STARTLINE (58)

    /** pathopen.e:251				if find( in[epos], "\n\r \t" ) = 0 then*/
    // SubProg load_euphoria_config pc: 198 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49948);
    _25860 = (object)*(((s1_ptr)_2)->base + _epos_49950);
    // SubProg load_euphoria_config pc: 202 op: FIND_FROM (176)
    _25861 = find_from(_25860, _25854, 1);
    _25860 = NOVALUE;
    // SubProg load_euphoria_config pc: 207 op: EQUALS_IFW_I (121)
    if (_25861 != 0)
    goto LC; // [207] 216
    // SubProg load_euphoria_config pc: 211 op: STARTLINE (58)

    /** pathopen.e:252					exit*/
    // SubProg load_euphoria_config pc: 213 op: EXIT (61)
    goto LB; // [213] 227
    // SubProg load_euphoria_config pc: 215 op: NOP1 (159)
LC: // addr: 216 pc: 215 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 216 op: STARTLINE (58)

    /** pathopen.e:254				epos -= 1*/
    // SubProg load_euphoria_config pc: 218 op: MINUS_I (116)
    _epos_49950 = _epos_49950 - 1;
    // SubProg load_euphoria_config pc: 222 op: STARTLINE (58)

    /** pathopen.e:255			end while*/
    // SubProg load_euphoria_config pc: 224 op: ENDWHILE (22)
    goto LA; // [224] 192
    // SubProg load_euphoria_config pc: 226 op: NOP1 (159)
LB: // addr: 227 pc: 226 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 227 op: STARTLINE (58)

    /** pathopen.e:257			in = in[spos .. epos]		*/
    // SubProg load_euphoria_config pc: 229 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_in_49948;
    RHS_Slice(_in_49948, _spos_49949, _epos_49950);
    // SubProg load_euphoria_config pc: 234 op: STARTLINE (58)

    /** pathopen.e:260			arg = ""*/
    // SubProg load_euphoria_config pc: 236 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_arg_49953);
    _arg_49953 = _21933;
    // SubProg load_euphoria_config pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 241 op: STARTLINE (58)

    /** pathopen.e:261			parm = ""*/
    // SubProg load_euphoria_config pc: 243 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_parm_49954);
    _parm_49954 = _21933;
    // SubProg load_euphoria_config pc: 246 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 248 op: STARTLINE (58)

    /** pathopen.e:269			if length(in) > 0 then*/
    // SubProg load_euphoria_config pc: 250 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49948)){
            _25865 = SEQ_PTR(_in_49948)->length;
    }
    else {
        _25865 = 1;
    }
    // SubProg load_euphoria_config pc: 253 op: GREATER_IFW_I (124)
    if (_25865 <= 0)
    goto LD; // [253] 477
    // SubProg load_euphoria_config pc: 257 op: STARTLINE (58)

    /** pathopen.e:270				if in[1] = '[' then*/
    // SubProg load_euphoria_config pc: 259 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49948);
    _25867 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg load_euphoria_config pc: 263 op: EQUALS_IFW (104)
    if (_25867 != 91)
    goto LE; // [263] 354
    // SubProg load_euphoria_config pc: 267 op: STARTLINE (58)

    /** pathopen.e:272					section = in[2..$]*/
    // SubProg load_euphoria_config pc: 269 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49948)){
            _25869 = SEQ_PTR(_in_49948)->length;
    }
    else {
        _25869 = 1;
    }
    // SubProg load_euphoria_config pc: 272 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_section_49955;
    RHS_Slice(_in_49948, 2, _25869);
    // SubProg load_euphoria_config pc: 277 op: STARTLINE (58)

    /** pathopen.e:273					if length(section) > 0 and section[$] = ']' then*/
    // SubProg load_euphoria_config pc: 279 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49955)){
            _25871 = SEQ_PTR(_section_49955)->length;
    }
    else {
        _25871 = 1;
    }
    // SubProg load_euphoria_config pc: 282 op: GREATER (6)
    _25872 = (_25871 > 0);
    _25871 = NOVALUE;
    // SubProg load_euphoria_config pc: 286 op: SC1_AND_IF (146)
    if (_25872 == 0) {
        goto LF; // [286] 320
    }
    // SubProg load_euphoria_config pc: 290 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49955)){
            _25874 = SEQ_PTR(_section_49955)->length;
    }
    else {
        _25874 = 1;
    }
    // SubProg load_euphoria_config pc: 293 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_section_49955);
    _25875 = (object)*(((s1_ptr)_2)->base + _25874);
    // SubProg load_euphoria_config pc: 297 op: EQUALS (3)
    _25876 = (_25875 == 93);
    _25875 = NOVALUE;
    // SubProg load_euphoria_config pc: 301 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 302 op: IF (20)
    if (_25876 == 0)
    {
        DeRef(_25876);
        _25876 = NOVALUE;
        goto LF; // [302] 320
    }
    else{
        DeRef(_25876);
        _25876 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 305 op: STARTLINE (58)

    /** pathopen.e:274						section = section[1..$-1]*/
    // SubProg load_euphoria_config pc: 307 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49955)){
            _25877 = SEQ_PTR(_section_49955)->length;
    }
    else {
        _25877 = 1;
    }
    // SubProg load_euphoria_config pc: 310 op: MINUS (10)
    _25878 = _25877 - 1;
    _25877 = NOVALUE;
    // SubProg load_euphoria_config pc: 314 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_section_49955;
    RHS_Slice(_section_49955, 1, _25878);
    // SubProg load_euphoria_config pc: 319 op: NOP1 (159)
LF: // addr: 320 pc: 319 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 320 op: STARTLINE (58)

    /** pathopen.e:276					section = lower(trim(section))*/
    // SubProg load_euphoria_config pc: 322 op: PROC (27)
    RefDS(_section_49955);
    RefDS(_3933);
    _25880 = _17trim(_section_49955, _3933, 0);
    // SubProg load_euphoria_config pc: 328 op: PROC (27)
    _0 = _section_49955;
    _section_49955 = _17lower(_25880);
    DeRefDS(_0);
    _25880 = NOVALUE;
    // SubProg load_euphoria_config pc: 332 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 334 op: STARTLINE (58)

    /** pathopen.e:277					if length(section) = 0 then*/
    // SubProg load_euphoria_config pc: 336 op: LENGTH (42)
    if (IS_SEQUENCE(_section_49955)){
            _25882 = SEQ_PTR(_section_49955)->length;
    }
    else {
        _25882 = 1;
    }
    // SubProg load_euphoria_config pc: 339 op: EQUALS_IFW_I (121)
    if (_25882 != 0)
    goto L10; // [339] 476
    // SubProg load_euphoria_config pc: 343 op: STARTLINE (58)

    /** pathopen.e:278						section = "all"*/
    // SubProg load_euphoria_config pc: 345 op: ASSIGN (18)
    RefDS(_25845);
    DeRefDS(_section_49955);
    _section_49955 = _25845;
    // SubProg load_euphoria_config pc: 348 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 350 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 351 op: ELSE (23)
    goto L10; // [351] 476
    // SubProg load_euphoria_config pc: 353 op: NOP1 (159)
LE: // addr: 354 pc: 353 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 354 op: STARTLINE (58)

    /** pathopen.e:281				elsif length(in) > 2 then*/
    // SubProg load_euphoria_config pc: 356 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49948)){
            _25884 = SEQ_PTR(_in_49948)->length;
    }
    else {
        _25884 = 1;
    }
    // SubProg load_euphoria_config pc: 359 op: GREATER_IFW_I (124)
    if (_25884 <= 2)
    goto L11; // [359] 461
    // SubProg load_euphoria_config pc: 363 op: STARTLINE (58)

    /** pathopen.e:282					if in[1] = '-' then*/
    // SubProg load_euphoria_config pc: 365 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49948);
    _25886 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg load_euphoria_config pc: 369 op: EQUALS_IFW (104)
    if (_25886 != 45)
    goto L12; // [369] 443
    // SubProg load_euphoria_config pc: 373 op: STARTLINE (58)

    /** pathopen.e:283						if in[2] != '-' then*/
    // SubProg load_euphoria_config pc: 375 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_49948);
    _25888 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg load_euphoria_config pc: 379 op: NOTEQ_IFW (105)
    if (_25888 == 45)
    goto L10; // [379] 476
    // SubProg load_euphoria_config pc: 383 op: STARTLINE (58)

    /** pathopen.e:284							spos = find(' ', in)*/
    // SubProg load_euphoria_config pc: 385 op: FIND_FROM (176)
    _spos_49949 = find_from(32, _in_49948, 1);
    // SubProg load_euphoria_config pc: 390 op: STARTLINE (58)

    /** pathopen.e:285							if spos = 0 then*/
    // SubProg load_euphoria_config pc: 392 op: EQUALS_IFW_I (121)
    if (_spos_49949 != 0)
    goto L13; // [392] 413
    // SubProg load_euphoria_config pc: 396 op: STARTLINE (58)

    /** pathopen.e:286								arg = in*/
    // SubProg load_euphoria_config pc: 398 op: ASSIGN (18)
    Ref(_in_49948);
    DeRefi(_arg_49953);
    _arg_49953 = _in_49948;
    // SubProg load_euphoria_config pc: 401 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 403 op: STARTLINE (58)

    /** pathopen.e:287								parm = ""*/
    // SubProg load_euphoria_config pc: 405 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_parm_49954);
    _parm_49954 = _21933;
    // SubProg load_euphoria_config pc: 408 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 410 op: ELSE (23)
    goto L10; // [410] 476
    // SubProg load_euphoria_config pc: 412 op: NOP1 (159)
L13: // addr: 413 pc: 412 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 413 op: STARTLINE (58)

    /** pathopen.e:289								arg = in[1..spos - 1]*/
    // SubProg load_euphoria_config pc: 415 op: MINUS (10)
    _25892 = _spos_49949 - 1;
    // SubProg load_euphoria_config pc: 419 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_arg_49953;
    RHS_Slice(_in_49948, 1, _25892);
    // SubProg load_euphoria_config pc: 424 op: STARTLINE (58)

    /** pathopen.e:290								parm = in[spos + 1 .. $]*/
    // SubProg load_euphoria_config pc: 426 op: PLUS1 (93)
    _25894 = _spos_49949 + 1;
    if (_25894 > MAXINT){
        _25894 = NewDouble((eudouble)_25894);
    }
    // SubProg load_euphoria_config pc: 430 op: LENGTH (42)
    if (IS_SEQUENCE(_in_49948)){
            _25895 = SEQ_PTR(_in_49948)->length;
    }
    else {
        _25895 = 1;
    }
    // SubProg load_euphoria_config pc: 433 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_parm_49954;
    RHS_Slice(_in_49948, _25894, _25895);
    // SubProg load_euphoria_config pc: 438 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 439 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 440 op: ELSE (23)
    goto L10; // [440] 476
    // SubProg load_euphoria_config pc: 442 op: NOP1 (159)
L12: // addr: 443 pc: 442 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 443 op: STARTLINE (58)

    /** pathopen.e:294						arg = "-i"*/
    // SubProg load_euphoria_config pc: 445 op: ASSIGN (18)
    RefDS(_25897);
    DeRefi(_arg_49953);
    _arg_49953 = _25897;
    // SubProg load_euphoria_config pc: 448 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 450 op: STARTLINE (58)

    /** pathopen.e:295						parm = in*/
    // SubProg load_euphoria_config pc: 452 op: ASSIGN (18)
    Ref(_in_49948);
    DeRefi(_parm_49954);
    _parm_49954 = _in_49948;
    // SubProg load_euphoria_config pc: 455 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 457 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 458 op: ELSE (23)
    goto L10; // [458] 476
    // SubProg load_euphoria_config pc: 460 op: NOP1 (159)
L11: // addr: 461 pc: 460 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 461 op: STARTLINE (58)

    /** pathopen.e:298					arg = "-i"*/
    // SubProg load_euphoria_config pc: 463 op: ASSIGN (18)
    RefDS(_25897);
    DeRefi(_arg_49953);
    _arg_49953 = _25897;
    // SubProg load_euphoria_config pc: 466 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 468 op: STARTLINE (58)

    /** pathopen.e:299					parm = in*/
    // SubProg load_euphoria_config pc: 470 op: ASSIGN (18)
    Ref(_in_49948);
    DeRefi(_parm_49954);
    _parm_49954 = _in_49948;
    // SubProg load_euphoria_config pc: 473 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 475 op: NOP1 (159)
L10: // addr: 476 pc: 475 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 476 op: NOP1 (159)
LD: // addr: 477 pc: 476 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 477 op: STARTLINE (58)

    /** pathopen.e:303			if length(arg) > 0 then*/
    // SubProg load_euphoria_config pc: 479 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49953)){
            _25898 = SEQ_PTR(_arg_49953)->length;
    }
    else {
        _25898 = 1;
    }
    // SubProg load_euphoria_config pc: 482 op: GREATER_IFW_I (124)
    if (_25898 <= 0)
    goto L14; // [482] 756
    // SubProg load_euphoria_config pc: 486 op: STARTLINE (58)

    /** pathopen.e:304				integer needed = 0*/
    // SubProg load_euphoria_config pc: 488 op: ASSIGN_I (113)
    _needed_50052 = 0;
    // SubProg load_euphoria_config pc: 491 op: STARTLINE (58)

    /** pathopen.e:305				switch section do*/
    // SubProg load_euphoria_config pc: 493 op: SWITCH (185)
    _1 = find(_section_49955, _25900);
    switch ( _1 ){ 
        // SubProg load_euphoria_config pc: 498 op: STARTLINE (58)

        /** pathopen.e:306					case "all" then*/
        // SubProg load_euphoria_config pc: 500 op: CASE (186)
        case 1:
        // SubProg load_euphoria_config pc: 502 op: STARTLINE (58)

        /** pathopen.e:307						needed = 1*/
        // SubProg load_euphoria_config pc: 504 op: ASSIGN_I (113)
        _needed_50052 = 1;
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
        _needed_50052 = _41TWINDOWS_21210;
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
        _needed_50052 = _41TUNIX_21214;
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
        _needed_50052 = _36TRANSLATE_16061;
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
        _needed_50052 = (_36TRANSLATE_16061 != 0 && _41TWINDOWS_21210 != 0);
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
        _needed_50052 = (_36TRANSLATE_16061 != 0 && _41TUNIX_21214 != 0);
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
        _needed_50052 = _36INTERPRET_16058;
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
        _needed_50052 = (_36INTERPRET_16058 != 0 && _41TWINDOWS_21210 != 0);
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
        _needed_50052 = (_36INTERPRET_16058 != 0 && _41TUNIX_21214 != 0);
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
        _needed_50052 = _36BIND_16064;
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
        _needed_50052 = (_36BIND_16064 != 0 && _41TWINDOWS_21210 != 0);
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
        _needed_50052 = (_36BIND_16064 != 0 && _41TUNIX_21214 != 0);
        // SubProg load_euphoria_config pc: 688 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 690 op: NOPSWITCH (187)
    ;}L15: // addr: 691 pc: 690 sub: 49944 op: 187
    // SubProg load_euphoria_config pc: 691 op: STARTLINE (58)

    /** pathopen.e:344				if needed then*/
    // SubProg load_euphoria_config pc: 693 op: IF (20)
    if (_needed_50052 == 0)
    {
        goto L16; // [693] 755
    }
    else{
    }
    // SubProg load_euphoria_config pc: 696 op: STARTLINE (58)

    /** pathopen.e:345					if equal(arg, "-c") then*/
    // SubProg load_euphoria_config pc: 698 op: EQUAL (153)
    if (_arg_49953 == _25919)
    _25920 = 1;
    else if (IS_ATOM_INT(_arg_49953) && IS_ATOM_INT(_25919))
    _25920 = 0;
    else
    _25920 = (compare(_arg_49953, _25919) == 0);
    // SubProg load_euphoria_config pc: 702 op: IF (20)
    if (_25920 == 0)
    {
        _25920 = NOVALUE;
        goto L17; // [702] 728
    }
    else{
        _25920 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 705 op: STARTLINE (58)

    /** pathopen.e:346						if length(parm) > 0 then*/
    // SubProg load_euphoria_config pc: 707 op: LENGTH (42)
    if (IS_SEQUENCE(_parm_49954)){
            _25921 = SEQ_PTR(_parm_49954)->length;
    }
    else {
        _25921 = 1;
    }
    // SubProg load_euphoria_config pc: 710 op: GREATER_IFW_I (124)
    if (_25921 <= 0)
    goto L18; // [710] 754
    // SubProg load_euphoria_config pc: 714 op: STARTLINE (58)

    /** pathopen.e:347							new_args &= load_euphoria_config(parm)*/
    // SubProg load_euphoria_config pc: 716 op: PROC (27)
    RefDS(_parm_49954);
    _25923 = _48load_euphoria_config(_parm_49954);
    // SubProg load_euphoria_config pc: 720 op: CONCAT (15)
    if (IS_SEQUENCE(_new_args_49952) && IS_ATOM(_25923)) {
        Ref(_25923);
        Append(&_new_args_49952, _new_args_49952, _25923);
    }
    else if (IS_ATOM(_new_args_49952) && IS_SEQUENCE(_25923)) {
    }
    else {
        Concat((object_ptr)&_new_args_49952, _new_args_49952, _25923);
    }
    DeRef(_25923);
    _25923 = NOVALUE;
    // SubProg load_euphoria_config pc: 724 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 725 op: ELSE (23)
    goto L18; // [725] 754
    // SubProg load_euphoria_config pc: 727 op: NOP1 (159)
L17: // addr: 728 pc: 727 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 728 op: STARTLINE (58)

    /** pathopen.e:350						new_args = append(new_args, arg)*/
    // SubProg load_euphoria_config pc: 730 op: APPEND (35)
    RefDS(_arg_49953);
    Append(&_new_args_49952, _new_args_49952, _arg_49953);
    // SubProg load_euphoria_config pc: 734 op: STARTLINE (58)

    /** pathopen.e:351						if length(parm > 0) then*/
    // SubProg load_euphoria_config pc: 736 op: GREATER (6)
    _25926 = binary_op(GREATER, _parm_49954, 0);
    // SubProg load_euphoria_config pc: 740 op: LENGTH (42)
    if (IS_SEQUENCE(_25926)){
            _25927 = SEQ_PTR(_25926)->length;
    }
    else {
        _25927 = 1;
    }
    DeRefDS(_25926);
    _25926 = NOVALUE;
    // SubProg load_euphoria_config pc: 743 op: IF (20)
    if (_25927 == 0)
    {
        _25927 = NOVALUE;
        goto L19; // [743] 753
    }
    else{
        _25927 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 746 op: STARTLINE (58)

    /** pathopen.e:352							new_args = append(new_args, parm)*/
    // SubProg load_euphoria_config pc: 748 op: APPEND (35)
    RefDS(_parm_49954);
    Append(&_new_args_49952, _new_args_49952, _parm_49954);
    // SubProg load_euphoria_config pc: 752 op: NOP1 (159)
L19: // addr: 753 pc: 752 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 753 op: NOP1 (159)
L18: // addr: 754 pc: 753 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 754 op: NOP1 (159)
L16: // addr: 755 pc: 754 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 755 op: NOP1 (159)
L14: // addr: 756 pc: 755 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 756 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var needed_50052
    // SubProg load_euphoria_config pc: 758 op: STARTLINE (58)

    /** pathopen.e:358			in = gets( fn )*/
    // SubProg load_euphoria_config pc: 760 op: GETS (17)
    DeRefi(_in_49948);
    _in_49948 = EGets(_fn_49947);
    // SubProg load_euphoria_config pc: 763 op: STARTLINE (58)

    /** pathopen.e:359		end while*/
    // SubProg load_euphoria_config pc: 765 op: ENDWHILE (22)
    goto L5; // [765] 128
    // SubProg load_euphoria_config pc: 767 op: NOP1 (159)
L6: // addr: 768 pc: 767 sub: 49944 op: 159
    // SubProg load_euphoria_config pc: 768 op: STARTLINE (58)

    /** pathopen.e:360		close(fn)*/
    // SubProg load_euphoria_config pc: 770 op: CLOSE (86)
    EClose(_fn_49947);
    // SubProg load_euphoria_config pc: 772 op: STARTLINE (58)

    /** pathopen.e:362		return new_args*/
    // SubProg load_euphoria_config pc: 774 op: RETURNF (28)

// Exiting block BLOCK: load_euphoria_config

// block var file_49946
    DeRefDS(_file_49946);

// block var fn_49947

// block var in_49948
    DeRefi(_in_49948);

// block var spos_49949

// block var epos_49950

// block var conf_path_49951
    DeRef(_conf_path_49951);

// block var arg_49953
    DeRefi(_arg_49953);

// block var parm_49954
    DeRefi(_parm_49954);

// block var section_49955
    DeRef(_section_49955);
    DeRef(_25892);
    _25892 = NOVALUE;
    _25888 = NOVALUE;
    DeRef(_25894);
    _25894 = NOVALUE;
    DeRef(_25872);
    _25872 = NOVALUE;
    _25926 = NOVALUE;
    _25886 = NOVALUE;
    _25867 = NOVALUE;
    DeRef(_25878);
    _25878 = NOVALUE;
    return _new_args_49952;
    // SubProg load_euphoria_config pc: 778 op: BADRETURNF (43)
    ;
}


object _48GetDefaultArgs(object _user_files_50119)
{
    object _env_50120 = NOVALUE;
    object _default_args_50121 = NOVALUE;
    object _conf_file_50122 = NOVALUE;
    object _cmd_options_50124 = NOVALUE;
    object _user_config_50130 = NOVALUE;
// skipping _25963  name type: 0
    object _25962 = NOVALUE; // 50170 25962
    object _25961 = NOVALUE; // 50169 25961
    object _25960 = NOVALUE; // 50167 25960
// skipping _25959  name type: 0
// skipping _25953  name type: 0
    object _25952 = NOVALUE; // 50157 25952
    object _25951 = NOVALUE; // 50156 25951
    object _25949 = NOVALUE; // 50153 25949
// skipping _25948  name type: 0
// skipping _25947  name type: 0
    object _25946 = NOVALUE; // 50149 25946
    object _25945 = NOVALUE; // 50148 25945
// skipping _25943  name type: 0
    object _25942 = NOVALUE; // 50144 25942
    object _25941 = NOVALUE; // 50143 25941
// skipping _25940  name type: 0
    object _25939 = NOVALUE; // 50140 25939
// skipping _25938  name type: 0
    object _25937 = NOVALUE; // 50138 25937
    object _25936 = NOVALUE; // 50137 25936
// skipping _25934  name type: 0
// skipping _25933  name type: 0
    object _25932 = NOVALUE; // 50131 25932
    object _25931 = NOVALUE; // 50129 25931
// skipping _25930  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetDefaultArgs pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 3 op: STARTLINE (58)

    /** pathopen.e:367		sequence default_args = {}*/
    // SubProg GetDefaultArgs pc: 5 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_default_args_50121);
    _default_args_50121 = _21933;
    // SubProg GetDefaultArgs pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 10 op: STARTLINE (58)

    /** pathopen.e:368		sequence conf_file = "eu.cfg"*/
    // SubProg GetDefaultArgs pc: 12 op: ASSIGN (18)
    RefDS(_25839);
    DeRefi(_conf_file_50122);
    _conf_file_50122 = _25839;
    // SubProg GetDefaultArgs pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 17 op: STARTLINE (58)

    /** pathopen.e:370		if loaded_config_inc_paths then return "" end if*/
    // SubProg GetDefaultArgs pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetDefaultArgs pc: 21 op: IF (20)
    if (_48loaded_config_inc_paths_49796 == 0)
    {
        goto L1; // [21] 29
    }
    else{
    }
    // SubProg GetDefaultArgs pc: 24 op: RETURNF (28)
    RefDS(_21933);

// Exiting block BLOCK: GetDefaultArgs

// block var user_files_50119
    DeRefDS(_user_files_50119);

// block var env_50120
    DeRef(_env_50120);

// block var default_args_50121
    DeRefDS(_default_args_50121);

// block var conf_file_50122
    DeRefDSi(_conf_file_50122);

// block var cmd_options_50124
    DeRef(_cmd_options_50124);
    return _21933;
    // SubProg GetDefaultArgs pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 50117 op: 159
    // SubProg GetDefaultArgs pc: 29 op: STARTLINE (58)

    /** pathopen.e:371		loaded_config_inc_paths = 1*/
    // SubProg GetDefaultArgs pc: 31 op: ASSIGN_I (113)
    _48loaded_config_inc_paths_49796 = 1;
    // SubProg GetDefaultArgs pc: 34 op: STARTLINE (58)

    /** pathopen.e:380		sequence cmd_options = get_options()*/
    // SubProg GetDefaultArgs pc: 36 op: PROC (27)
    _0 = _cmd_options_50124;
    _cmd_options_50124 = _49get_options();
    DeRef(_0);
    // SubProg GetDefaultArgs pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 41 op: STARTLINE (58)

    /** pathopen.e:382		default_args = {}*/
    // SubProg GetDefaultArgs pc: 43 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_default_args_50121);
    _default_args_50121 = _21933;
    // SubProg GetDefaultArgs pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 48 op: STARTLINE (58)

    /** pathopen.e:385		for i = 1 to length( user_files ) do*/
    // SubProg GetDefaultArgs pc: 50 op: LENGTH (42)
    if (IS_SEQUENCE(_user_files_50119)){
            _25931 = SEQ_PTR(_user_files_50119)->length;
    }
    else {
        _25931 = 1;
    }
    // SubProg GetDefaultArgs pc: 53 op: FOR_I (125)
    {
        object _i_50128;
        _i_50128 = 1;
L2: // addr: 60 pc: 53 sub: 50117 op: 125
        if (_i_50128 > _25931){
            goto L3; // [53] 92
        }
        // SubProg GetDefaultArgs pc: 60 op: STARTLINE (58)

        /** pathopen.e:386			sequence user_config = load_euphoria_config( user_files[i] )*/
        // SubProg GetDefaultArgs pc: 62 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_user_files_50119);
        _25932 = (object)*(((s1_ptr)_2)->base + _i_50128);
        // SubProg GetDefaultArgs pc: 66 op: PROC (27)
        Ref(_25932);
        _0 = _user_config_50130;
        _user_config_50130 = _48load_euphoria_config(_25932);
        DeRef(_0);
        _25932 = NOVALUE;
        // SubProg GetDefaultArgs pc: 70 op: SEQUENCE_CHECK (97)
        // SubProg GetDefaultArgs pc: 72 op: STARTLINE (58)

        /** pathopen.e:387			default_args = merge_parameters( user_config, default_args, cmd_options, 1 )*/
        // SubProg GetDefaultArgs pc: 74 op: PROC (27)
        RefDS(_user_config_50130);
        RefDS(_default_args_50121);
        RefDS(_cmd_options_50124);
        _0 = _default_args_50121;
        _default_args_50121 = _49merge_parameters(_user_config_50130, _default_args_50121, _cmd_options_50124, 1);
        DeRefDS(_0);
        // SubProg GetDefaultArgs pc: 81 op: SEQUENCE_CHECK (97)
        // SubProg GetDefaultArgs pc: 83 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var user_config_50130
        DeRefDS(_user_config_50130);
        _user_config_50130 = NOVALUE;
        // SubProg GetDefaultArgs pc: 85 op: STARTLINE (58)

        /** pathopen.e:388		end for*/
        // SubProg GetDefaultArgs pc: 87 op: ENDFOR_INT_UP1 (54)
        _i_50128 = _i_50128 + 1;
        goto L2; // [87] 60
L3: // addr: 92 pc: 87 sub: 50117 op: 54
        ;
    }
    // SubProg GetDefaultArgs pc: 92 op: STARTLINE (58)

    /** pathopen.e:391		default_args = merge_parameters( load_euphoria_config("./" & conf_file), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 94 op: CONCAT (15)
    Concat((object_ptr)&_25936, _25935, _conf_file_50122);
    // SubProg GetDefaultArgs pc: 98 op: PROC (27)
    _25937 = _48load_euphoria_config(_25936);
    _25936 = NOVALUE;
    // SubProg GetDefaultArgs pc: 102 op: PROC (27)
    RefDS(_default_args_50121);
    RefDS(_cmd_options_50124);
    _0 = _default_args_50121;
    _default_args_50121 = _49merge_parameters(_25937, _default_args_50121, _cmd_options_50124, 1);
    DeRefDS(_0);
    _25937 = NOVALUE;
    // SubProg GetDefaultArgs pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 111 op: STARTLINE (58)

    /** pathopen.e:394		env = strip_file_from_path( exe_path() )*/
    // SubProg GetDefaultArgs pc: 113 op: PROC (27)
    _25939 = _48exe_path();
    // SubProg GetDefaultArgs pc: 116 op: PROC (27)
    _0 = _env_50120;
    _env_50120 = _48strip_file_from_path(_25939);
    DeRef(_0);
    _25939 = NOVALUE;
    // SubProg GetDefaultArgs pc: 120 op: STARTLINE (58)

    /** pathopen.e:395		default_args = merge_parameters( load_euphoria_config( env & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 122 op: CONCAT (15)
    if (IS_SEQUENCE(_env_50120) && IS_ATOM(_conf_file_50122)) {
    }
    else if (IS_ATOM(_env_50120) && IS_SEQUENCE(_conf_file_50122)) {
        Ref(_env_50120);
        Prepend(&_25941, _conf_file_50122, _env_50120);
    }
    else {
        Concat((object_ptr)&_25941, _env_50120, _conf_file_50122);
    }
    // SubProg GetDefaultArgs pc: 126 op: PROC (27)
    _25942 = _48load_euphoria_config(_25941);
    _25941 = NOVALUE;
    // SubProg GetDefaultArgs pc: 130 op: PROC (27)
    RefDS(_default_args_50121);
    RefDS(_cmd_options_50124);
    _0 = _default_args_50121;
    _default_args_50121 = _49merge_parameters(_25942, _default_args_50121, _cmd_options_50124, 1);
    DeRefDS(_0);
    _25942 = NOVALUE;
    // SubProg GetDefaultArgs pc: 137 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 139 op: STARTLINE (58)

    /** pathopen.e:398		ifdef UNIX then*/
    // SubProg GetDefaultArgs pc: 141 op: STARTLINE (58)

    /** pathopen.e:399			default_args = merge_parameters( load_euphoria_config( "/etc/euphoria/" & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 143 op: CONCAT (15)
    Concat((object_ptr)&_25945, _25944, _conf_file_50122);
    // SubProg GetDefaultArgs pc: 147 op: PROC (27)
    _25946 = _48load_euphoria_config(_25945);
    _25945 = NOVALUE;
    // SubProg GetDefaultArgs pc: 151 op: PROC (27)
    RefDS(_default_args_50121);
    RefDS(_cmd_options_50124);
    _0 = _default_args_50121;
    _default_args_50121 = _49merge_parameters(_25946, _default_args_50121, _cmd_options_50124, 1);
    DeRefDS(_0);
    _25946 = NOVALUE;
    // SubProg GetDefaultArgs pc: 158 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 160 op: STARTLINE (58)

    /** pathopen.e:401			env = getenv( "HOME" )*/
    // SubProg GetDefaultArgs pc: 162 op: GETENV (91)
    DeRef(_env_50120);
    _env_50120 = EGetEnv(_25810);
    // SubProg GetDefaultArgs pc: 165 op: STARTLINE (58)

    /** pathopen.e:402			if sequence(env) then*/
    // SubProg GetDefaultArgs pc: 167 op: IS_A_SEQUENCE (68)
    _25949 = IS_SEQUENCE(_env_50120);
    // SubProg GetDefaultArgs pc: 170 op: IF (20)
    if (_25949 == 0)
    {
        _25949 = NOVALUE;
        goto L4; // [170] 195
    }
    else{
        _25949 = NOVALUE;
    }
    // SubProg GetDefaultArgs pc: 173 op: STARTLINE (58)

    /** pathopen.e:403				default_args = merge_parameters( load_euphoria_config( env & "/." & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 175 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50122;
        concat_list[1] = _25950;
        concat_list[2] = _env_50120;
        Concat_N((object_ptr)&_25951, concat_list, 3);
    }
    // SubProg GetDefaultArgs pc: 181 op: PROC (27)
    _25952 = _48load_euphoria_config(_25951);
    _25951 = NOVALUE;
    // SubProg GetDefaultArgs pc: 185 op: PROC (27)
    RefDS(_default_args_50121);
    RefDS(_cmd_options_50124);
    _0 = _default_args_50121;
    _default_args_50121 = _49merge_parameters(_25952, _default_args_50121, _cmd_options_50124, 1);
    DeRefDS(_0);
    _25952 = NOVALUE;
    // SubProg GetDefaultArgs pc: 192 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 194 op: NOP1 (159)
L4: // addr: 195 pc: 194 sub: 50117 op: 159
    // SubProg GetDefaultArgs pc: 195 op: STARTLINE (58)

    /** pathopen.e:427		env = get_eudir()*/
    // SubProg GetDefaultArgs pc: 197 op: PROC (27)
    _0 = _env_50120;
    _env_50120 = _37get_eudir();
    DeRef(_0);
    // SubProg GetDefaultArgs pc: 200 op: STARTLINE (58)

    /** pathopen.e:428		if sequence(env) then*/
    // SubProg GetDefaultArgs pc: 202 op: IS_A_SEQUENCE (68)
    _25960 = IS_SEQUENCE(_env_50120);
    // SubProg GetDefaultArgs pc: 205 op: IF (20)
    if (_25960 == 0)
    {
        _25960 = NOVALUE;
        goto L5; // [205] 230
    }
    else{
        _25960 = NOVALUE;
    }
    // SubProg GetDefaultArgs pc: 208 op: STARTLINE (58)

    /** pathopen.e:429			default_args = merge_parameters( load_euphoria_config(env & "/" & conf_file), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 210 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50122;
        concat_list[1] = _23509;
        concat_list[2] = _env_50120;
        Concat_N((object_ptr)&_25961, concat_list, 3);
    }
    // SubProg GetDefaultArgs pc: 216 op: PROC (27)
    _25962 = _48load_euphoria_config(_25961);
    _25961 = NOVALUE;
    // SubProg GetDefaultArgs pc: 220 op: PROC (27)
    RefDS(_default_args_50121);
    RefDS(_cmd_options_50124);
    _0 = _default_args_50121;
    _default_args_50121 = _49merge_parameters(_25962, _default_args_50121, _cmd_options_50124, 1);
    DeRefDS(_0);
    _25962 = NOVALUE;
    // SubProg GetDefaultArgs pc: 227 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 229 op: NOP1 (159)
L5: // addr: 230 pc: 229 sub: 50117 op: 159
    // SubProg GetDefaultArgs pc: 230 op: STARTLINE (58)

    /** pathopen.e:432		return default_args*/
    // SubProg GetDefaultArgs pc: 232 op: RETURNF (28)

// Exiting block BLOCK: GetDefaultArgs

// block var user_files_50119
    DeRefDS(_user_files_50119);

// block var env_50120
    DeRef(_env_50120);

// block var conf_file_50122
    DeRefi(_conf_file_50122);

// block var cmd_options_50124
    DeRef(_cmd_options_50124);
    return _default_args_50121;
    // SubProg GetDefaultArgs pc: 236 op: BADRETURNF (43)
    ;
}


object _48ConfPath(object _file_name_50174)
{
    object _file_path_50175 = NOVALUE;
    object _try_50176 = NOVALUE;
    object _25969 = NOVALUE; // 50185 25969
// skipping _25968  name type: 0
// skipping _25967  name type: 0
// skipping _25966  name type: 0
    object _25965 = NOVALUE; // 50180 25965
    object _25964 = NOVALUE; // 50179 25964
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ConfPath pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ConfPath pc: 3 op: STARTLINE (58)

    /** pathopen.e:440		for i = 1 to length(config_inc_paths) do*/
    // SubProg ConfPath pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ConfPath pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_48config_inc_paths_49795)){
            _25964 = SEQ_PTR(_48config_inc_paths_49795)->length;
    }
    else {
        _25964 = 1;
    }
    // SubProg ConfPath pc: 10 op: FOR_I (125)
    {
        object _i_50178;
        _i_50178 = 1;
L1: // addr: 17 pc: 10 sub: 50172 op: 125
        if (_i_50178 > _25964){
            goto L2; // [10] 60
        }
        // SubProg ConfPath pc: 17 op: STARTLINE (58)

        /** pathopen.e:441			file_path = config_inc_paths[i] & file_name*/
        // SubProg ConfPath pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg ConfPath pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48config_inc_paths_49795);
        _25965 = (object)*(((s1_ptr)_2)->base + _i_50178);
        // SubProg ConfPath pc: 25 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50175, _25965, _file_name_50174);
        _25965 = NOVALUE;
        _25965 = NOVALUE;
        // SubProg ConfPath pc: 29 op: STARTLINE (58)

        /** pathopen.e:442			try = open( file_path, "r" )*/
        // SubProg ConfPath pc: 31 op: OPEN (37)
        _try_50176 = EOpen(_file_path_50175, _25846, 0);
        // SubProg ConfPath pc: 36 op: STARTLINE (58)

        /** pathopen.e:443			if try != -1 then*/
        // SubProg ConfPath pc: 38 op: NOTEQ_IFW_I (122)
        if (_try_50176 == -1)
        goto L3; // [38] 53
        // SubProg ConfPath pc: 42 op: STARTLINE (58)

        /** pathopen.e:444				return {file_path, try}*/
        // SubProg ConfPath pc: 44 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50175);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50175;
        ((intptr_t *)_2)[2] = _try_50176;
        _25969 = MAKE_SEQ(_1);
        // SubProg ConfPath pc: 48 op: RETURNF (28)

// Exiting block BLOCK: ConfPath

// block var file_name_50174
        DeRefDS(_file_name_50174);

// block var file_path_50175
        DeRefDS(_file_path_50175);

// block var try_50176
        return _25969;
        // SubProg ConfPath pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 50172 op: 159
        // SubProg ConfPath pc: 53 op: STARTLINE (58)

        /** pathopen.e:446		end for*/
        // SubProg ConfPath pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_50178 = _i_50178 + 1;
        goto L1; // [55] 17
L2: // addr: 60 pc: 55 sub: 50172 op: 54
        ;
    }
    // SubProg ConfPath pc: 60 op: STARTLINE (58)

    /** pathopen.e:447		return -1*/
    // SubProg ConfPath pc: 62 op: RETURNF (28)

// Exiting block BLOCK: ConfPath

// block var file_name_50174
    DeRefDS(_file_name_50174);

// block var file_path_50175
    DeRef(_file_path_50175);

// block var try_50176
    DeRef(_25969);
    _25969 = NOVALUE;
    return -1;
    // SubProg ConfPath pc: 66 op: BADRETURNF (43)
    ;
}


object _48ScanPath(object _file_name_50188, object _env_50189, object _flag_50190)
{
    object _inc_path_50191 = NOVALUE;
    object _full_path_50192 = NOVALUE;
    object _file_path_50193 = NOVALUE;
    object _strings_50194 = NOVALUE;
    object _end_path_50195 = NOVALUE;
    object _start_path_50196 = NOVALUE;
    object _try_50197 = NOVALUE;
    object _use_cache_50198 = NOVALUE;
    object _pos_50199 = NOVALUE;
    object _26017 = NOVALUE; // 50269 26017
    object _26016 = NOVALUE; // 50268 26016
    object _26015 = NOVALUE; // 50267 26015
    object _26014 = NOVALUE; // 50266 26014
    object _26013 = NOVALUE; // 50265 26013
    object _26012 = NOVALUE; // 50264 26012
    object _26011 = NOVALUE; // 50263 26011
    object _26010 = NOVALUE; // 50261 26010
// skipping _26009  name type: 0
// skipping _26008  name type: 0
// skipping _26007  name type: 0
    object _26006 = NOVALUE; // 50255 26006
    object _26005 = NOVALUE; // 50254 26005
    object _26004 = NOVALUE; // 50253 26004
    object _26003 = NOVALUE; // 50252 26003
    object _26002 = NOVALUE; // 50251 26002
    object _26001 = NOVALUE; // 50250 26001
// skipping _26000  name type: 0
    object _25999 = NOVALUE; // 50248 25999
// skipping _25998  name type: 0
    object _25997 = NOVALUE; // 50245 25997
    object _25996 = NOVALUE; // 50244 25996
    object _25994 = NOVALUE; // 50241 25994
    object _25993 = NOVALUE; // 50240 25993
    object _25992 = NOVALUE; // 50239 25992
// skipping _25991  name type: 0
// skipping _25990  name type: 0
    object _25989 = NOVALUE; // 50234 25989
    object _25988 = NOVALUE; // 50232 25988
// skipping _25987  name type: 0
    object _25986 = NOVALUE; // 50227 25986
    object _25985 = NOVALUE; // 50225 25985
    object _25984 = NOVALUE; // 50223 25984
// skipping _25983  name type: 0
// skipping _25982  name type: 0
// skipping _25981  name type: 0
// skipping _25980  name type: 0
    object _25979 = NOVALUE; // 50216 25979
// skipping _25978  name type: 0
// skipping _25977  name type: 0
// skipping _25976  name type: 0
// skipping _25975  name type: 0
// skipping _25974  name type: 0
// skipping _25973  name type: 0
// skipping _25972  name type: 0
    object _25971 = NOVALUE; // 50202 25971
// skipping _25970  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ScanPath pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 5 op: INTEGER_CHECK (96)
    // SubProg ScanPath pc: 7 op: STARTLINE (58)

    /** pathopen.e:459		inc_path = getenv(env)*/
    // SubProg ScanPath pc: 9 op: GETENV (91)
    DeRefi(_inc_path_50191);
    _inc_path_50191 = EGetEnv(_env_50189);
    // SubProg ScanPath pc: 12 op: STARTLINE (58)

    /** pathopen.e:460		if compare(inc_path,{})!=1 then -- nothing to do, just fail*/
    // SubProg ScanPath pc: 14 op: COMPARE (76)
    if (IS_ATOM_INT(_inc_path_50191) && IS_ATOM_INT(_21933)){
        _25971 = (_inc_path_50191 < _21933) ? -1 : (_inc_path_50191 > _21933);
    }
    else{
        _25971 = compare(_inc_path_50191, _21933);
    }
    // SubProg ScanPath pc: 18 op: NOTEQ_IFW_I (122)
    if (_25971 == 1)
    goto L1; // [18] 29
    // SubProg ScanPath pc: 22 op: STARTLINE (58)

    /** pathopen.e:461			return -1*/
    // SubProg ScanPath pc: 24 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50188
    DeRefDS(_file_name_50188);

// block var env_50189
    DeRefDSi(_env_50189);

// block var flag_50190

// block var inc_path_50191
    DeRefi(_inc_path_50191);

// block var full_path_50192
    DeRef(_full_path_50192);

// block var file_path_50193
    DeRef(_file_path_50193);

// block var strings_50194
    DeRef(_strings_50194);

// block var end_path_50195

// block var start_path_50196

// block var try_50197

// block var use_cache_50198

// block var pos_50199
    return -1;
    // SubProg ScanPath pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 50186 op: 159
    // SubProg ScanPath pc: 29 op: STARTLINE (58)

    /** pathopen.e:464		num_var = find(env,cache_vars)*/
    // SubProg ScanPath pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 33 op: FIND_FROM (176)
    _48num_var_49786 = find_from(_env_50189, _48cache_vars_49787, 1);
    // SubProg ScanPath pc: 38 op: STARTLINE (58)

    /** pathopen.e:465		use_cache = check_cache(env,inc_path)*/
    // SubProg ScanPath pc: 40 op: PROC (27)
    RefDS(_env_50189);
    Ref(_inc_path_50191);
    _use_cache_50198 = _48check_cache(_env_50189, _inc_path_50191);
    // SubProg ScanPath pc: 45 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_use_cache_50198)) {
        _1 = (object)(DBL_PTR(_use_cache_50198)->dbl);
        DeRefDS(_use_cache_50198);
        _use_cache_50198 = _1;
    }
    // SubProg ScanPath pc: 47 op: STARTLINE (58)

    /** pathopen.e:466		inc_path = append(inc_path, PATH_SEPARATOR)*/
    // SubProg ScanPath pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 51 op: APPEND (35)
    Append(&_inc_path_50191, _inc_path_50191, 58);
    // SubProg ScanPath pc: 55 op: STARTLINE (58)

    /** pathopen.e:468		file_name = SLASH & file_name*/
    // SubProg ScanPath pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 59 op: CONCAT (15)
    Prepend(&_file_name_50188, _file_name_50188, 47);
    // SubProg ScanPath pc: 63 op: STARTLINE (58)

    /** pathopen.e:469		if flag then*/
    // SubProg ScanPath pc: 65 op: IF (20)
    if (_flag_50190 == 0)
    {
        goto L2; // [65] 77
    }
    else{
    }
    // SubProg ScanPath pc: 68 op: STARTLINE (58)

    /** pathopen.e:470			file_name = include_subfolder & file_name*/
    // SubProg ScanPath pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 72 op: CONCAT (15)
    Concat((object_ptr)&_file_name_50188, _48include_subfolder_49782, _file_name_50188);
    // SubProg ScanPath pc: 76 op: NOP1 (159)
L2: // addr: 77 pc: 76 sub: 50186 op: 159
    // SubProg ScanPath pc: 77 op: STARTLINE (58)

    /** pathopen.e:472		strings = cache_substrings[num_var]*/
    // SubProg ScanPath pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 83 op: RHS_SUBS (25)
    DeRef(_strings_50194);
    _2 = (object)SEQ_PTR(_48cache_substrings_49789);
    _strings_50194 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    RefDS(_strings_50194);
    // SubProg ScanPath pc: 87 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 89 op: STARTLINE (58)

    /** pathopen.e:474		if use_cache then*/
    // SubProg ScanPath pc: 91 op: IF (20)
    if (_use_cache_50198 == 0)
    {
        goto L3; // [91] 194
    }
    else{
    }
    // SubProg ScanPath pc: 94 op: STARTLINE (58)

    /** pathopen.e:475			for i=1 to length(strings) do*/
    // SubProg ScanPath pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_strings_50194)){
            _25979 = SEQ_PTR(_strings_50194)->length;
    }
    else {
        _25979 = 1;
    }
    // SubProg ScanPath pc: 99 op: FOR_I (125)
    {
        object _i_50215;
        _i_50215 = 1;
L4: // addr: 106 pc: 99 sub: 50186 op: 125
        if (_i_50215 > _25979){
            goto L5; // [99] 154
        }
        // SubProg ScanPath pc: 106 op: STARTLINE (58)

        /** pathopen.e:476				full_path = strings[i]*/
        // SubProg ScanPath pc: 108 op: RHS_SUBS (25)
        DeRef(_full_path_50192);
        _2 = (object)SEQ_PTR(_strings_50194);
        _full_path_50192 = (object)*(((s1_ptr)_2)->base + _i_50215);
        Ref(_full_path_50192);
        // SubProg ScanPath pc: 112 op: SEQUENCE_CHECK (97)
        // SubProg ScanPath pc: 114 op: STARTLINE (58)

        /** pathopen.e:477				file_path = full_path & file_name*/
        // SubProg ScanPath pc: 116 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50193, _full_path_50192, _file_name_50188);
        // SubProg ScanPath pc: 120 op: STARTLINE (58)

        /** pathopen.e:478				try = open_locked(file_path)    */
        // SubProg ScanPath pc: 122 op: PROC (27)
        RefDS(_file_path_50193);
        _try_50197 = _37open_locked(_file_path_50193);
        // SubProg ScanPath pc: 126 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_try_50197)) {
            _1 = (object)(DBL_PTR(_try_50197)->dbl);
            DeRefDS(_try_50197);
            _try_50197 = _1;
        }
        // SubProg ScanPath pc: 128 op: STARTLINE (58)

        /** pathopen.e:479				if try != -1 then*/
        // SubProg ScanPath pc: 130 op: NOTEQ_IFW_I (122)
        if (_try_50197 == -1)
        goto L6; // [130] 145
        // SubProg ScanPath pc: 134 op: STARTLINE (58)

        /** pathopen.e:480					return {file_path,try}*/
        // SubProg ScanPath pc: 136 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50193);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50193;
        ((intptr_t *)_2)[2] = _try_50197;
        _25984 = MAKE_SEQ(_1);
        // SubProg ScanPath pc: 140 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50188
        DeRefDS(_file_name_50188);

// block var env_50189
        DeRefDSi(_env_50189);

// block var flag_50190

// block var inc_path_50191
        DeRefi(_inc_path_50191);

// block var full_path_50192
        DeRefDS(_full_path_50192);

// block var file_path_50193
        DeRefDS(_file_path_50193);

// block var strings_50194
        DeRefDS(_strings_50194);

// block var end_path_50195

// block var start_path_50196

// block var try_50197

// block var use_cache_50198

// block var pos_50199
        return _25984;
        // SubProg ScanPath pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 50186 op: 159
        // SubProg ScanPath pc: 145 op: STARTLINE (58)

        /** pathopen.e:482				ifdef WINDOWS then */
        // SubProg ScanPath pc: 147 op: STARTLINE (58)

        /** pathopen.e:496			end for*/
        // SubProg ScanPath pc: 149 op: ENDFOR_INT_UP1 (54)
        _i_50215 = _i_50215 + 1;
        goto L4; // [149] 106
L5: // addr: 154 pc: 149 sub: 50186 op: 54
        ;
    }
    // SubProg ScanPath pc: 154 op: STARTLINE (58)

    /** pathopen.e:497			if cache_complete[num_var] then -- nothing to scan*/
    // SubProg ScanPath pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 160 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_48cache_complete_49793);
    _25985 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg ScanPath pc: 164 op: IF (20)
    if (_25985 == 0)
    {
        _25985 = NOVALUE;
        goto L7; // [164] 176
    }
    else{
        _25985 = NOVALUE;
    }
    // SubProg ScanPath pc: 167 op: STARTLINE (58)

    /** pathopen.e:498				return -1*/
    // SubProg ScanPath pc: 169 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50188
    DeRefDS(_file_name_50188);

// block var env_50189
    DeRefDSi(_env_50189);

// block var flag_50190

// block var inc_path_50191
    DeRefi(_inc_path_50191);

// block var full_path_50192
    DeRef(_full_path_50192);

// block var file_path_50193
    DeRef(_file_path_50193);

// block var strings_50194
    DeRef(_strings_50194);

// block var end_path_50195

// block var start_path_50196

// block var try_50197

// block var use_cache_50198

// block var pos_50199
    DeRef(_25984);
    _25984 = NOVALUE;
    return -1;
    // SubProg ScanPath pc: 173 op: ELSE (23)
    goto L8; // [173] 200
    // SubProg ScanPath pc: 175 op: NOP1 (159)
L7: // addr: 176 pc: 175 sub: 50186 op: 159
    // SubProg ScanPath pc: 176 op: STARTLINE (58)

    /** pathopen.e:500				pos = cache_delims[num_var]+1 -- scan remainder, starting from as far sa possible*/
    // SubProg ScanPath pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 182 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_48cache_delims_49794);
    _25986 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg ScanPath pc: 186 op: PLUS1_I (117)
    _pos_50199 = _25986 + 1;
    _25986 = NOVALUE;
    // SubProg ScanPath pc: 190 op: NOP1 (159)
    // SubProg ScanPath pc: 191 op: ELSE (23)
    goto L8; // [191] 200
    // SubProg ScanPath pc: 193 op: NOP1 (159)
L3: // addr: 194 pc: 193 sub: 50186 op: 159
    // SubProg ScanPath pc: 194 op: STARTLINE (58)

    /** pathopen.e:503			pos = 1*/
    // SubProg ScanPath pc: 196 op: ASSIGN_I (113)
    _pos_50199 = 1;
    // SubProg ScanPath pc: 199 op: NOP1 (159)
L8: // addr: 200 pc: 199 sub: 50186 op: 159
    // SubProg ScanPath pc: 200 op: STARTLINE (58)

    /** pathopen.e:506		start_path = 0*/
    // SubProg ScanPath pc: 202 op: ASSIGN_I (113)
    _start_path_50196 = 0;
    // SubProg ScanPath pc: 205 op: STARTLINE (58)

    /** pathopen.e:507		for p = pos to length(inc_path) do*/
    // SubProg ScanPath pc: 207 op: PRIVATE_INIT_CHECK (30)
    // SubProg ScanPath pc: 209 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50191)){
            _25988 = SEQ_PTR(_inc_path_50191)->length;
    }
    else {
        _25988 = 1;
    }
    // SubProg ScanPath pc: 212 op: FOR_I (125)
    {
        object _p_50231;
        _p_50231 = _pos_50199;
L9: // addr: 219 pc: 212 sub: 50186 op: 125
        if (_p_50231 > _25988){
            goto LA; // [212] 460
        }
        // SubProg ScanPath pc: 219 op: STARTLINE (58)

        /** pathopen.e:508			if inc_path[p] = PATH_SEPARATOR then*/
        // SubProg ScanPath pc: 221 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50191);
        _25989 = (object)*(((s1_ptr)_2)->base + _p_50231);
        // SubProg ScanPath pc: 225 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 227 op: EQUALS_IFW (104)
        if (_25989 != 58)
        goto LB; // [227] 409
        // SubProg ScanPath pc: 231 op: STARTLINE (58)

        /** pathopen.e:510				cache_delims[num_var] = p*/
        // SubProg ScanPath pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 235 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 237 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_48cache_delims_49794);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_delims_49794 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        *(intptr_t *)_2 = _p_50231;
        // SubProg ScanPath pc: 241 op: STARTLINE (58)

        /** pathopen.e:512				end_path = p-1*/
        // SubProg ScanPath pc: 243 op: MINUS_I (116)
        _end_path_50195 = _p_50231 - 1;
        // SubProg ScanPath pc: 247 op: STARTLINE (58)

        /** pathopen.e:513				while end_path >= start_path and find(inc_path[end_path], " \t" & SLASH_CHARS) do*/
        // SubProg ScanPath pc: 249 op: NOP2 (110)
        // SubProg ScanPath pc: 251 op: NOPWHILE (158)
LC: // addr: 252 pc: 251 sub: 50186 op: 158
        // SubProg ScanPath pc: 252 op: GREATEREQ (2)
        _25992 = (_end_path_50195 >= _start_path_50196);
        // SubProg ScanPath pc: 256 op: SC1_AND_IF (146)
        if (_25992 == 0) {
            goto LD; // [256] 290
        }
        // SubProg ScanPath pc: 260 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50191);
        _25994 = (object)*(((s1_ptr)_2)->base + _end_path_50195);
        // SubProg ScanPath pc: 264 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 266 op: CONCAT (15)
        Concat((object_ptr)&_25996, _25995, _41SLASH_CHARS_21230);
        // SubProg ScanPath pc: 270 op: FIND_FROM (176)
        _25997 = find_from(_25994, _25996, 1);
        _25994 = NOVALUE;
        DeRefDS(_25996);
        _25996 = NOVALUE;
        // SubProg ScanPath pc: 275 op: NOP1 (159)
        // SubProg ScanPath pc: 276 op: WHILE (47)
        if (_25997 == 0)
        {
            _25997 = NOVALUE;
            goto LD; // [276] 290
        }
        else{
            _25997 = NOVALUE;
        }
        // SubProg ScanPath pc: 279 op: STARTLINE (58)

        /** pathopen.e:514					end_path-=1*/
        // SubProg ScanPath pc: 281 op: MINUS_I (116)
        _end_path_50195 = _end_path_50195 - 1;
        // SubProg ScanPath pc: 285 op: STARTLINE (58)

        /** pathopen.e:515				end while*/
        // SubProg ScanPath pc: 287 op: ENDWHILE (22)
        goto LC; // [287] 252
        // SubProg ScanPath pc: 289 op: NOP1 (159)
LD: // addr: 290 pc: 289 sub: 50186 op: 159
        // SubProg ScanPath pc: 290 op: STARTLINE (58)

        /** pathopen.e:517				if start_path and end_path then*/
        // SubProg ScanPath pc: 292 op: SC1_AND_IF (146)
        if (_start_path_50196 == 0) {
            goto LE; // [292] 453
        }
        // SubProg ScanPath pc: 296 op: NOP1 (159)
        // SubProg ScanPath pc: 297 op: IF (20)
        if (_end_path_50195 == 0)
        {
            goto LE; // [297] 453
        }
        else{
        }
        // SubProg ScanPath pc: 300 op: STARTLINE (58)

        /** pathopen.e:518					full_path = inc_path[start_path..end_path]*/
        // SubProg ScanPath pc: 302 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_full_path_50192;
        RHS_Slice(_inc_path_50191, _start_path_50196, _end_path_50195);
        // SubProg ScanPath pc: 307 op: STARTLINE (58)

        /** pathopen.e:519					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        // SubProg ScanPath pc: 309 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 311 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 313 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 315 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 317 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_substrings_49789);
        _26001 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg ScanPath pc: 321 op: APPEND (35)
        RefDS(_full_path_50192);
        Append(&_26002, _26001, _full_path_50192);
        _26001 = NOVALUE;
        // SubProg ScanPath pc: 325 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_substrings_49789);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_substrings_49789 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26002;
        if( _1 != _26002 ){
            DeRefDS(_1);
        }
        _26002 = NOVALUE;
        // SubProg ScanPath pc: 329 op: STARTLINE (58)

        /** pathopen.e:520					cache_starts[num_var] &= start_path*/
        // SubProg ScanPath pc: 331 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 333 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 335 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_48cache_starts_49790);
        _26003 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg ScanPath pc: 339 op: CONCAT (15)
        if (IS_SEQUENCE(_26003) && IS_ATOM(_start_path_50196)) {
            Append(&_26004, _26003, _start_path_50196);
        }
        else if (IS_ATOM(_26003) && IS_SEQUENCE(_start_path_50196)) {
        }
        else {
            Concat((object_ptr)&_26004, _26003, _start_path_50196);
            _26003 = NOVALUE;
        }
        _26003 = NOVALUE;
        // SubProg ScanPath pc: 343 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_starts_49790);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_starts_49790 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26004;
        if( _1 != _26004 ){
            DeRef(_1);
        }
        _26004 = NOVALUE;
        // SubProg ScanPath pc: 347 op: STARTLINE (58)

        /** pathopen.e:521					cache_ends[num_var] &= end_path*/
        // SubProg ScanPath pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 351 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 353 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        _26005 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg ScanPath pc: 357 op: CONCAT (15)
        if (IS_SEQUENCE(_26005) && IS_ATOM(_end_path_50195)) {
            Append(&_26006, _26005, _end_path_50195);
        }
        else if (IS_ATOM(_26005) && IS_SEQUENCE(_end_path_50195)) {
        }
        else {
            Concat((object_ptr)&_26006, _26005, _end_path_50195);
            _26005 = NOVALUE;
        }
        _26005 = NOVALUE;
        // SubProg ScanPath pc: 361 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_ends_49791 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26006;
        if( _1 != _26006 ){
            DeRef(_1);
        }
        _26006 = NOVALUE;
        // SubProg ScanPath pc: 365 op: STARTLINE (58)

        /** pathopen.e:522					file_path = full_path & file_name  */
        // SubProg ScanPath pc: 367 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50193, _full_path_50192, _file_name_50188);
        // SubProg ScanPath pc: 371 op: STARTLINE (58)

        /** pathopen.e:523					try = open_locked(file_path)*/
        // SubProg ScanPath pc: 373 op: PROC (27)
        RefDS(_file_path_50193);
        _try_50197 = _37open_locked(_file_path_50193);
        // SubProg ScanPath pc: 377 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_try_50197)) {
            _1 = (object)(DBL_PTR(_try_50197)->dbl);
            DeRefDS(_try_50197);
            _try_50197 = _1;
        }
        // SubProg ScanPath pc: 379 op: STARTLINE (58)

        /** pathopen.e:524					if try != -1 then -- valid path, no point trying to convert*/
        // SubProg ScanPath pc: 381 op: NOTEQ_IFW_I (122)
        if (_try_50197 == -1)
        goto LF; // [381] 398
        // SubProg ScanPath pc: 385 op: STARTLINE (58)

        /** pathopen.e:525						ifdef WINDOWS then*/
        // SubProg ScanPath pc: 387 op: STARTLINE (58)

        /** pathopen.e:528						return {file_path,try}*/
        // SubProg ScanPath pc: 389 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50193);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50193;
        ((intptr_t *)_2)[2] = _try_50197;
        _26010 = MAKE_SEQ(_1);
        // SubProg ScanPath pc: 393 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50188
        DeRefDS(_file_name_50188);

// block var env_50189
        DeRefDSi(_env_50189);

// block var flag_50190

// block var inc_path_50191
        DeRefi(_inc_path_50191);

// block var full_path_50192
        DeRefDSi(_full_path_50192);

// block var file_path_50193
        DeRefDS(_file_path_50193);

// block var strings_50194
        DeRef(_strings_50194);

// block var end_path_50195

// block var start_path_50196

// block var try_50197

// block var use_cache_50198

// block var pos_50199
        DeRef(_25984);
        _25984 = NOVALUE;
        _25989 = NOVALUE;
        DeRef(_25992);
        _25992 = NOVALUE;
        return _26010;
        // SubProg ScanPath pc: 397 op: NOP1 (159)
LF: // addr: 398 pc: 397 sub: 50186 op: 159
        // SubProg ScanPath pc: 398 op: STARTLINE (58)

        /** pathopen.e:530					ifdef WINDOWS then*/
        // SubProg ScanPath pc: 400 op: STARTLINE (58)

        /** pathopen.e:547					start_path = 0*/
        // SubProg ScanPath pc: 402 op: ASSIGN_I (113)
        _start_path_50196 = 0;
        // SubProg ScanPath pc: 405 op: NOP1 (159)
        // SubProg ScanPath pc: 406 op: ELSE (23)
        goto LE; // [406] 453
        // SubProg ScanPath pc: 408 op: NOP1 (159)
LB: // addr: 409 pc: 408 sub: 50186 op: 159
        // SubProg ScanPath pc: 409 op: STARTLINE (58)

        /** pathopen.e:549			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        // SubProg ScanPath pc: 411 op: NOT (7)
        _26011 = (_start_path_50196 == 0);
        // SubProg ScanPath pc: 414 op: SC1_AND_IF (146)
        if (_26011 == 0) {
            goto L10; // [414] 452
        }
        // SubProg ScanPath pc: 418 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50191);
        _26013 = (object)*(((s1_ptr)_2)->base + _p_50231);
        // SubProg ScanPath pc: 422 op: NOTEQ (4)
        _26014 = (_26013 != 32);
        _26013 = NOVALUE;
        // SubProg ScanPath pc: 426 op: SC1_AND (141)
        if (_26014 == 0) {
            DeRef(_26015);
            _26015 = 0;
            goto L11; // [426] 442
        }
        // SubProg ScanPath pc: 430 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50191);
        _26016 = (object)*(((s1_ptr)_2)->base + _p_50231);
        // SubProg ScanPath pc: 434 op: NOTEQ (4)
        _26017 = (_26016 != 9);
        _26016 = NOVALUE;
        // SubProg ScanPath pc: 438 op: SC2_AND (142)
        _26015 = (_26017 != 0);
        // SubProg ScanPath pc: 441 op: NOP1 (159)
L11: // addr: 442 pc: 441 sub: 50186 op: 159
        // SubProg ScanPath pc: 442 op: NOP1 (159)
        // SubProg ScanPath pc: 443 op: IF (20)
        if (_26015 == 0)
        {
            _26015 = NOVALUE;
            goto L10; // [443] 452
        }
        else{
            _26015 = NOVALUE;
        }
        // SubProg ScanPath pc: 446 op: STARTLINE (58)

        /** pathopen.e:550				start_path = p*/
        // SubProg ScanPath pc: 448 op: ASSIGN_I (113)
        _start_path_50196 = _p_50231;
        // SubProg ScanPath pc: 451 op: NOP1 (159)
L10: // addr: 452 pc: 451 sub: 50186 op: 159
        // SubProg ScanPath pc: 452 op: NOP1 (159)
LE: // addr: 453 pc: 452 sub: 50186 op: 159
        // SubProg ScanPath pc: 453 op: STARTLINE (58)

        /** pathopen.e:552		end for*/
        // SubProg ScanPath pc: 455 op: ENDFOR_INT_UP1 (54)
        _p_50231 = _p_50231 + 1;
        goto L9; // [455] 219
LA: // addr: 460 pc: 455 sub: 50186 op: 54
        ;
    }
    // SubProg ScanPath pc: 460 op: STARTLINE (58)

    /** pathopen.e:554		cache_complete[num_var] = 1*/
    // SubProg ScanPath pc: 462 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 464 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 466 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_48cache_complete_49793);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _48cache_complete_49793 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
    *(intptr_t *)_2 = 1;
    // SubProg ScanPath pc: 470 op: STARTLINE (58)

    /** pathopen.e:555		return -1*/
    // SubProg ScanPath pc: 472 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50188
    DeRefDS(_file_name_50188);

// block var env_50189
    DeRefDSi(_env_50189);

// block var flag_50190

// block var inc_path_50191
    DeRefi(_inc_path_50191);

// block var full_path_50192
    DeRef(_full_path_50192);

// block var file_path_50193
    DeRef(_file_path_50193);

// block var strings_50194
    DeRef(_strings_50194);

// block var end_path_50195

// block var start_path_50196

// block var try_50197

// block var use_cache_50198

// block var pos_50199
    DeRef(_25984);
    _25984 = NOVALUE;
    DeRef(_26017);
    _26017 = NOVALUE;
    DeRef(_26011);
    _26011 = NOVALUE;
    DeRef(_26014);
    _26014 = NOVALUE;
    _25989 = NOVALUE;
    DeRef(_26010);
    _26010 = NOVALUE;
    DeRef(_25992);
    _25992 = NOVALUE;
    return -1;
    // SubProg ScanPath pc: 476 op: BADRETURNF (43)
    ;
}


object _48Include_paths(object _add_converted_50273)
{
    object _status_50274 = NOVALUE;
    object _pos_50275 = NOVALUE;
    object _inc_path_50276 = NOVALUE;
    object _full_path_50277 = NOVALUE;
    object _start_path_50278 = NOVALUE;
    object _end_path_50279 = NOVALUE;
    object _eudir_path_50295 = NOVALUE;
// skipping _26064  name type: 0
    object _26063 = NOVALUE; // 50344 26063
    object _26062 = NOVALUE; // 50343 26062
    object _26061 = NOVALUE; // 50342 26061
    object _26060 = NOVALUE; // 50341 26060
    object _26059 = NOVALUE; // 50340 26059
    object _26058 = NOVALUE; // 50339 26058
    object _26057 = NOVALUE; // 50338 26057
    object _26056 = NOVALUE; // 50337 26056
    object _26055 = NOVALUE; // 50335 26055
    object _26054 = NOVALUE; // 50334 26054
    object _26053 = NOVALUE; // 50333 26053
    object _26052 = NOVALUE; // 50332 26052
    object _26051 = NOVALUE; // 50331 26051
    object _26050 = NOVALUE; // 50330 26050
// skipping _26049  name type: 0
    object _26048 = NOVALUE; // 50328 26048
// skipping _26047  name type: 0
    object _26046 = NOVALUE; // 50325 26046
    object _26045 = NOVALUE; // 50324 26045
    object _26044 = NOVALUE; // 50322 26044
    object _26043 = NOVALUE; // 50321 26043
    object _26042 = NOVALUE; // 50320 26042
// skipping _26041  name type: 0
// skipping _26040  name type: 0
    object _26039 = NOVALUE; // 50315 26039
    object _26038 = NOVALUE; // 50313 26038
// skipping _26037  name type: 0
    object _26036 = NOVALUE; // 50308 26036
    object _26034 = NOVALUE; // 50306 26034
// skipping _26033  name type: 0
    object _26032 = NOVALUE; // 50302 26032
    object _26031 = NOVALUE; // 50301 26031
    object _26029 = NOVALUE; // 50299 26029
// skipping _26028  name type: 0
// skipping _26027  name type: 0
    object _26026 = NOVALUE; // 50292 26026
// skipping _26025  name type: 0
    object _26024 = NOVALUE; // 50289 26024
// skipping _26023  name type: 0
// skipping _26022  name type: 0
// skipping _26020  name type: 0
    object _26019 = NOVALUE; // 50283 26019
    object _26018 = NOVALUE; // 50281 26018
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Include_paths pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_add_converted_50273)) {
        _1 = (object)(DBL_PTR(_add_converted_50273)->dbl);
        DeRefDS(_add_converted_50273);
        _add_converted_50273 = _1;
    }
    // SubProg Include_paths pc: 3 op: STARTLINE (58)

    /** pathopen.e:566		if length(include_Paths) then*/
    // SubProg Include_paths pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_48include_Paths_50270)){
            _26018 = SEQ_PTR(_48include_Paths_50270)->length;
    }
    else {
        _26018 = 1;
    }
    // SubProg Include_paths pc: 10 op: IF (20)
    if (_26018 == 0)
    {
        _26018 = NOVALUE;
        goto L1; // [10] 22
    }
    else{
        _26018 = NOVALUE;
    }
    // SubProg Include_paths pc: 13 op: STARTLINE (58)

    /** pathopen.e:567			return include_Paths*/
    // SubProg Include_paths pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 17 op: RETURNF (28)
    RefDS(_48include_Paths_50270);

// Exiting block BLOCK: Include_paths

// block var status_50274

// block var pos_50275

// block var inc_path_50276
    DeRefi(_inc_path_50276);

// block var full_path_50277
    DeRefi(_full_path_50277);

// block var start_path_50278

// block var end_path_50279

// block var eudir_path_50295
    DeRef(_eudir_path_50295);
    return _48include_Paths_50270;
    // SubProg Include_paths pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 50271 op: 159
    // SubProg Include_paths pc: 22 op: STARTLINE (58)

    /** pathopen.e:570		include_Paths = append(config_inc_paths, current_dir())*/
    // SubProg Include_paths pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 26 op: PROC (27)
    _26019 = _20current_dir();
    // SubProg Include_paths pc: 29 op: APPEND (35)
    Ref(_26019);
    Append(&_48include_Paths_50270, _48config_inc_paths_49795, _26019);
    DeRef(_26019);
    _26019 = NOVALUE;
    // SubProg Include_paths pc: 33 op: STARTLINE (58)

    /** pathopen.e:571		num_var = find("EUINC", cache_vars)*/
    // SubProg Include_paths pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 37 op: FIND_FROM (176)
    _48num_var_49786 = find_from(_26021, _48cache_vars_49787, 1);
    // SubProg Include_paths pc: 42 op: STARTLINE (58)

    /** pathopen.e:572		inc_path = getenv("EUINC")*/
    // SubProg Include_paths pc: 44 op: GETENV (91)
    DeRefi(_inc_path_50276);
    _inc_path_50276 = EGetEnv(_26021);
    // SubProg Include_paths pc: 47 op: STARTLINE (58)

    /** pathopen.e:573		if atom(inc_path) then*/
    // SubProg Include_paths pc: 49 op: IS_AN_ATOM (67)
    _26024 = IS_ATOM(_inc_path_50276);
    // SubProg Include_paths pc: 52 op: IF (20)
    if (_26024 == 0)
    {
        _26024 = NOVALUE;
        goto L2; // [52] 61
    }
    else{
        _26024 = NOVALUE;
    }
    // SubProg Include_paths pc: 55 op: STARTLINE (58)

    /** pathopen.e:574			inc_path = ""*/
    // SubProg Include_paths pc: 57 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_inc_path_50276);
    _inc_path_50276 = _21933;
    // SubProg Include_paths pc: 60 op: NOP1 (159)
L2: // addr: 61 pc: 60 sub: 50271 op: 159
    // SubProg Include_paths pc: 61 op: STARTLINE (58)

    /** pathopen.e:576		status = check_cache("EUINC", inc_path)*/
    // SubProg Include_paths pc: 63 op: PROC (27)
    RefDS(_26021);
    Ref(_inc_path_50276);
    _status_50274 = _48check_cache(_26021, _inc_path_50276);
    // SubProg Include_paths pc: 68 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_status_50274)) {
        _1 = (object)(DBL_PTR(_status_50274)->dbl);
        DeRefDS(_status_50274);
        _status_50274 = _1;
    }
    // SubProg Include_paths pc: 70 op: STARTLINE (58)

    /** pathopen.e:577		if length(inc_path) then*/
    // SubProg Include_paths pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50276)){
            _26026 = SEQ_PTR(_inc_path_50276)->length;
    }
    else {
        _26026 = 1;
    }
    // SubProg Include_paths pc: 75 op: IF (20)
    if (_26026 == 0)
    {
        _26026 = NOVALUE;
        goto L3; // [75] 87
    }
    else{
        _26026 = NOVALUE;
    }
    // SubProg Include_paths pc: 78 op: STARTLINE (58)

    /** pathopen.e:578			inc_path = append(inc_path, PATH_SEPARATOR)*/
    // SubProg Include_paths pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 82 op: APPEND (35)
    Append(&_inc_path_50276, _inc_path_50276, 58);
    // SubProg Include_paths pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 50271 op: 159
    // SubProg Include_paths pc: 87 op: STARTLINE (58)

    /** pathopen.e:580		object eudir_path = get_eudir()*/
    // SubProg Include_paths pc: 89 op: PROC (27)
    _0 = _eudir_path_50295;
    _eudir_path_50295 = _37get_eudir();
    DeRef(_0);
    // SubProg Include_paths pc: 92 op: STARTLINE (58)

    /** pathopen.e:581		if sequence(eudir_path) then*/
    // SubProg Include_paths pc: 94 op: IS_A_SEQUENCE (68)
    _26029 = IS_SEQUENCE(_eudir_path_50295);
    // SubProg Include_paths pc: 97 op: IF (20)
    if (_26029 == 0)
    {
        _26029 = NOVALUE;
        goto L4; // [97] 117
    }
    else{
        _26029 = NOVALUE;
    }
    // SubProg Include_paths pc: 100 op: STARTLINE (58)

    /** pathopen.e:582			include_Paths = append(include_Paths, sprintf("%s/include", { eudir_path }))*/
    // SubProg Include_paths pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 104 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_eudir_path_50295);
    ((intptr_t*)_2)[1] = _eudir_path_50295;
    _26031 = MAKE_SEQ(_1);
    // SubProg Include_paths pc: 108 op: SPRINTF (53)
    _26032 = EPrintf(-9999999, _26030, _26031);
    DeRefDS(_26031);
    _26031 = NOVALUE;
    // SubProg Include_paths pc: 112 op: APPEND (35)
    RefDS(_26032);
    Append(&_48include_Paths_50270, _48include_Paths_50270, _26032);
    DeRefDS(_26032);
    _26032 = NOVALUE;
    // SubProg Include_paths pc: 116 op: NOP1 (159)
L4: // addr: 117 pc: 116 sub: 50271 op: 159
    // SubProg Include_paths pc: 117 op: STARTLINE (58)

    /** pathopen.e:585		if status then*/
    // SubProg Include_paths pc: 119 op: IF (20)
    if (_status_50274 == 0)
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
    _2 = (object)SEQ_PTR(_48cache_complete_49793);
    _26034 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg Include_paths pc: 132 op: IF (20)
    if (_26034 == 0)
    {
        _26034 = NOVALUE;
        goto L6; // [132] 144
    }
    else{
        _26034 = NOVALUE;
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
L6: // addr: 144 pc: 143 sub: 50271 op: 159
    // SubProg Include_paths pc: 144 op: STARTLINE (58)

    /** pathopen.e:590			pos = cache_delims[num_var]+1*/
    // SubProg Include_paths pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 150 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_48cache_delims_49794);
    _26036 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg Include_paths pc: 154 op: PLUS1_I (117)
    _pos_50275 = _26036 + 1;
    _26036 = NOVALUE;
    // SubProg Include_paths pc: 158 op: ELSE (23)
    goto L8; // [158] 167
    // SubProg Include_paths pc: 160 op: NOP1 (159)
L5: // addr: 161 pc: 160 sub: 50271 op: 159
    // SubProg Include_paths pc: 161 op: STARTLINE (58)

    /** pathopen.e:592	        pos = 1*/
    // SubProg Include_paths pc: 163 op: ASSIGN_I (113)
    _pos_50275 = 1;
    // SubProg Include_paths pc: 166 op: NOP1 (159)
L8: // addr: 167 pc: 166 sub: 50271 op: 159
    // SubProg Include_paths pc: 167 op: STARTLINE (58)

    /** pathopen.e:594		start_path = 0*/
    // SubProg Include_paths pc: 169 op: ASSIGN_I (113)
    _start_path_50278 = 0;
    // SubProg Include_paths pc: 172 op: STARTLINE (58)

    /** pathopen.e:595		for p = pos to length(inc_path) do*/
    // SubProg Include_paths pc: 174 op: PRIVATE_INIT_CHECK (30)
    // SubProg Include_paths pc: 176 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50276)){
            _26038 = SEQ_PTR(_inc_path_50276)->length;
    }
    else {
        _26038 = 1;
    }
    // SubProg Include_paths pc: 179 op: FOR_I (125)
    {
        object _p_50312;
        _p_50312 = _pos_50275;
L9: // addr: 186 pc: 179 sub: 50271 op: 125
        if (_p_50312 > _26038){
            goto LA; // [179] 394
        }
        // SubProg Include_paths pc: 186 op: STARTLINE (58)

        /** pathopen.e:596			if inc_path[p] = PATH_SEPARATOR then*/
        // SubProg Include_paths pc: 188 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50276);
        _26039 = (object)*(((s1_ptr)_2)->base + _p_50312);
        // SubProg Include_paths pc: 192 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 194 op: EQUALS_IFW (104)
        if (_26039 != 58)
        goto LB; // [194] 343
        // SubProg Include_paths pc: 198 op: STARTLINE (58)

        /** pathopen.e:598				cache_delims[num_var] = p*/
        // SubProg Include_paths pc: 200 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 204 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_48cache_delims_49794);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_delims_49794 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        *(intptr_t *)_2 = _p_50312;
        // SubProg Include_paths pc: 208 op: STARTLINE (58)

        /** pathopen.e:600				end_path = p-1*/
        // SubProg Include_paths pc: 210 op: MINUS_I (116)
        _end_path_50279 = _p_50312 - 1;
        // SubProg Include_paths pc: 214 op: STARTLINE (58)

        /** pathopen.e:601				while end_path >= start_path and find(inc_path[end_path]," \t" & SLASH_CHARS) do*/
        // SubProg Include_paths pc: 216 op: NOP2 (110)
        // SubProg Include_paths pc: 218 op: NOPWHILE (158)
LC: // addr: 219 pc: 218 sub: 50271 op: 158
        // SubProg Include_paths pc: 219 op: GREATEREQ (2)
        _26042 = (_end_path_50279 >= _start_path_50278);
        // SubProg Include_paths pc: 223 op: SC1_AND_IF (146)
        if (_26042 == 0) {
            goto LD; // [223] 257
        }
        // SubProg Include_paths pc: 227 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50276);
        _26044 = (object)*(((s1_ptr)_2)->base + _end_path_50279);
        // SubProg Include_paths pc: 231 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 233 op: CONCAT (15)
        Concat((object_ptr)&_26045, _25995, _41SLASH_CHARS_21230);
        // SubProg Include_paths pc: 237 op: FIND_FROM (176)
        _26046 = find_from(_26044, _26045, 1);
        _26044 = NOVALUE;
        DeRefDS(_26045);
        _26045 = NOVALUE;
        // SubProg Include_paths pc: 242 op: NOP1 (159)
        // SubProg Include_paths pc: 243 op: WHILE (47)
        if (_26046 == 0)
        {
            _26046 = NOVALUE;
            goto LD; // [243] 257
        }
        else{
            _26046 = NOVALUE;
        }
        // SubProg Include_paths pc: 246 op: STARTLINE (58)

        /** pathopen.e:602					end_path -= 1*/
        // SubProg Include_paths pc: 248 op: MINUS_I (116)
        _end_path_50279 = _end_path_50279 - 1;
        // SubProg Include_paths pc: 252 op: STARTLINE (58)

        /** pathopen.e:603				end while*/
        // SubProg Include_paths pc: 254 op: ENDWHILE (22)
        goto LC; // [254] 219
        // SubProg Include_paths pc: 256 op: NOP1 (159)
LD: // addr: 257 pc: 256 sub: 50271 op: 159
        // SubProg Include_paths pc: 257 op: STARTLINE (58)

        /** pathopen.e:605				if start_path and end_path then*/
        // SubProg Include_paths pc: 259 op: SC1_AND_IF (146)
        if (_start_path_50278 == 0) {
            goto LE; // [259] 387
        }
        // SubProg Include_paths pc: 263 op: NOP1 (159)
        // SubProg Include_paths pc: 264 op: IF (20)
        if (_end_path_50279 == 0)
        {
            goto LE; // [264] 387
        }
        else{
        }
        // SubProg Include_paths pc: 267 op: STARTLINE (58)

        /** pathopen.e:606					full_path = inc_path[start_path..end_path]*/
        // SubProg Include_paths pc: 269 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_full_path_50277;
        RHS_Slice(_inc_path_50276, _start_path_50278, _end_path_50279);
        // SubProg Include_paths pc: 274 op: STARTLINE (58)

        /** pathopen.e:607					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        // SubProg Include_paths pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 284 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_48cache_substrings_49789);
        _26050 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg Include_paths pc: 288 op: APPEND (35)
        RefDS(_full_path_50277);
        Append(&_26051, _26050, _full_path_50277);
        _26050 = NOVALUE;
        // SubProg Include_paths pc: 292 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_substrings_49789);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_substrings_49789 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26051;
        if( _1 != _26051 ){
            DeRefDS(_1);
        }
        _26051 = NOVALUE;
        // SubProg Include_paths pc: 296 op: STARTLINE (58)

        /** pathopen.e:608					cache_starts[num_var] &= start_path*/
        // SubProg Include_paths pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 300 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 302 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_48cache_starts_49790);
        _26052 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg Include_paths pc: 306 op: CONCAT (15)
        if (IS_SEQUENCE(_26052) && IS_ATOM(_start_path_50278)) {
            Append(&_26053, _26052, _start_path_50278);
        }
        else if (IS_ATOM(_26052) && IS_SEQUENCE(_start_path_50278)) {
        }
        else {
            Concat((object_ptr)&_26053, _26052, _start_path_50278);
            _26052 = NOVALUE;
        }
        _26052 = NOVALUE;
        // SubProg Include_paths pc: 310 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_starts_49790);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_starts_49790 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26053;
        if( _1 != _26053 ){
            DeRef(_1);
        }
        _26053 = NOVALUE;
        // SubProg Include_paths pc: 314 op: STARTLINE (58)

        /** pathopen.e:609					cache_ends[num_var] &= end_path*/
        // SubProg Include_paths pc: 316 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 318 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 320 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        _26054 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
        // SubProg Include_paths pc: 324 op: CONCAT (15)
        if (IS_SEQUENCE(_26054) && IS_ATOM(_end_path_50279)) {
            Append(&_26055, _26054, _end_path_50279);
        }
        else if (IS_ATOM(_26054) && IS_SEQUENCE(_end_path_50279)) {
        }
        else {
            Concat((object_ptr)&_26055, _26054, _end_path_50279);
            _26054 = NOVALUE;
        }
        _26054 = NOVALUE;
        // SubProg Include_paths pc: 328 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_48cache_ends_49791);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _48cache_ends_49791 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26055;
        if( _1 != _26055 ){
            DeRef(_1);
        }
        _26055 = NOVALUE;
        // SubProg Include_paths pc: 332 op: STARTLINE (58)

        /** pathopen.e:610					ifdef WINDOWS then*/
        // SubProg Include_paths pc: 334 op: STARTLINE (58)

        /** pathopen.e:620					start_path = 0*/
        // SubProg Include_paths pc: 336 op: ASSIGN_I (113)
        _start_path_50278 = 0;
        // SubProg Include_paths pc: 339 op: NOP1 (159)
        // SubProg Include_paths pc: 340 op: ELSE (23)
        goto LE; // [340] 387
        // SubProg Include_paths pc: 342 op: NOP1 (159)
LB: // addr: 343 pc: 342 sub: 50271 op: 159
        // SubProg Include_paths pc: 343 op: STARTLINE (58)

        /** pathopen.e:622			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        // SubProg Include_paths pc: 345 op: NOT (7)
        _26056 = (_start_path_50278 == 0);
        // SubProg Include_paths pc: 348 op: SC1_AND_IF (146)
        if (_26056 == 0) {
            goto LF; // [348] 386
        }
        // SubProg Include_paths pc: 352 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50276);
        _26058 = (object)*(((s1_ptr)_2)->base + _p_50312);
        // SubProg Include_paths pc: 356 op: NOTEQ (4)
        _26059 = (_26058 != 32);
        _26058 = NOVALUE;
        // SubProg Include_paths pc: 360 op: SC1_AND (141)
        if (_26059 == 0) {
            DeRef(_26060);
            _26060 = 0;
            goto L10; // [360] 376
        }
        // SubProg Include_paths pc: 364 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50276);
        _26061 = (object)*(((s1_ptr)_2)->base + _p_50312);
        // SubProg Include_paths pc: 368 op: NOTEQ (4)
        _26062 = (_26061 != 9);
        _26061 = NOVALUE;
        // SubProg Include_paths pc: 372 op: SC2_AND (142)
        _26060 = (_26062 != 0);
        // SubProg Include_paths pc: 375 op: NOP1 (159)
L10: // addr: 376 pc: 375 sub: 50271 op: 159
        // SubProg Include_paths pc: 376 op: NOP1 (159)
        // SubProg Include_paths pc: 377 op: IF (20)
        if (_26060 == 0)
        {
            _26060 = NOVALUE;
            goto LF; // [377] 386
        }
        else{
            _26060 = NOVALUE;
        }
        // SubProg Include_paths pc: 380 op: STARTLINE (58)

        /** pathopen.e:623				start_path = p*/
        // SubProg Include_paths pc: 382 op: ASSIGN_I (113)
        _start_path_50278 = _p_50312;
        // SubProg Include_paths pc: 385 op: NOP1 (159)
LF: // addr: 386 pc: 385 sub: 50271 op: 159
        // SubProg Include_paths pc: 386 op: NOP1 (159)
LE: // addr: 387 pc: 386 sub: 50271 op: 159
        // SubProg Include_paths pc: 387 op: STARTLINE (58)

        /** pathopen.e:625		end for*/
        // SubProg Include_paths pc: 389 op: ENDFOR_INT_UP1 (54)
        _p_50312 = _p_50312 + 1;
        goto L9; // [389] 186
LA: // addr: 394 pc: 389 sub: 50271 op: 54
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
    _2 = (object)SEQ_PTR(_48cache_substrings_49789);
    _26063 = (object)*(((s1_ptr)_2)->base + _48num_var_49786);
    // SubProg Include_paths pc: 410 op: CONCAT (15)
    Concat((object_ptr)&_48include_Paths_50270, _48include_Paths_50270, _26063);
    _26063 = NOVALUE;
    // SubProg Include_paths pc: 414 op: STARTLINE (58)

    /** pathopen.e:629		cache_complete[num_var] = 1*/
    // SubProg Include_paths pc: 416 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 420 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_48cache_complete_49793);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _48cache_complete_49793 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _48num_var_49786);
    *(intptr_t *)_2 = 1;
    // SubProg Include_paths pc: 424 op: STARTLINE (58)

    /** pathopen.e:631		ifdef WINDOWS then*/
    // SubProg Include_paths pc: 426 op: STARTLINE (58)

    /** pathopen.e:640		return include_Paths*/
    // SubProg Include_paths pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 430 op: RETURNF (28)
    RefDS(_48include_Paths_50270);

// Exiting block BLOCK: Include_paths

// block var status_50274

// block var pos_50275

// block var inc_path_50276
    DeRefi(_inc_path_50276);

// block var full_path_50277
    DeRefi(_full_path_50277);

// block var start_path_50278

// block var end_path_50279

// block var eudir_path_50295
    DeRef(_eudir_path_50295);
    DeRef(_26042);
    _26042 = NOVALUE;
    DeRef(_26056);
    _26056 = NOVALUE;
    DeRef(_26062);
    _26062 = NOVALUE;
    DeRef(_26059);
    _26059 = NOVALUE;
    _26039 = NOVALUE;
    return _48include_Paths_50270;
    // SubProg Include_paths pc: 434 op: BADRETURNF (43)
    ;
}


object _48e_path_find(object _name_50348)
{
    object _scan_result_50349 = NOVALUE;
    object _26073 = NOVALUE; // 50366 26073
    object _26072 = NOVALUE; // 50365 26072
    object _26071 = NOVALUE; // 50364 26071
// skipping _26070  name type: 0
    object _26068 = NOVALUE; // 50360 26068
    object _26067 = NOVALUE; // 50359 26067
    object _26066 = NOVALUE; // 50356 26066
    object _26065 = NOVALUE; // 50352 26065
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg e_path_find pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg e_path_find pc: 3 op: STARTLINE (58)

    /** pathopen.e:656		if file_exists(name) then*/
    // SubProg e_path_find pc: 5 op: PROC (27)
    RefDS(_name_50348);
    _26065 = _20file_exists(_name_50348);
    // SubProg e_path_find pc: 9 op: IF (20)
    if (_26065 == 0) {
        DeRef(_26065);
        _26065 = NOVALUE;
        goto L1; // [9] 19
    }
    else {
        if (!IS_ATOM_INT(_26065) && DBL_PTR(_26065)->dbl == 0.0){
            DeRef(_26065);
            _26065 = NOVALUE;
            goto L1; // [9] 19
        }
        DeRef(_26065);
        _26065 = NOVALUE;
    }
    DeRef(_26065);
    _26065 = NOVALUE;
    // SubProg e_path_find pc: 12 op: STARTLINE (58)

    /** pathopen.e:657			return name*/
    // SubProg e_path_find pc: 14 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var scan_result_50349
    DeRef(_scan_result_50349);
    return _name_50348;
    // SubProg e_path_find pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 50346 op: 159
    // SubProg e_path_find pc: 19 op: STARTLINE (58)

    /** pathopen.e:661		for i = 1 to length(SLASH_CHARS) do*/
    // SubProg e_path_find pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg e_path_find pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_41SLASH_CHARS_21230)){
            _26066 = SEQ_PTR(_41SLASH_CHARS_21230)->length;
    }
    else {
        _26066 = 1;
    }
    // SubProg e_path_find pc: 26 op: FOR_I (125)
    {
        object _i_50354;
        _i_50354 = 1;
L2: // addr: 33 pc: 26 sub: 50346 op: 125
        if (_i_50354 > _26066){
            goto L3; // [26] 63
        }
        // SubProg e_path_find pc: 33 op: STARTLINE (58)

        /** pathopen.e:662			if find(SLASH_CHARS[i], name) then*/
        // SubProg e_path_find pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg e_path_find pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_41SLASH_CHARS_21230);
        _26067 = (object)*(((s1_ptr)_2)->base + _i_50354);
        // SubProg e_path_find pc: 41 op: FIND_FROM (176)
        _26068 = find_from(_26067, _name_50348, 1);
        _26067 = NOVALUE;
        // SubProg e_path_find pc: 46 op: IF (20)
        if (_26068 == 0)
        {
            _26068 = NOVALUE;
            goto L4; // [46] 56
        }
        else{
            _26068 = NOVALUE;
        }
        // SubProg e_path_find pc: 49 op: STARTLINE (58)

        /** pathopen.e:663				return -1*/
        // SubProg e_path_find pc: 51 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var name_50348
        DeRefDS(_name_50348);

// block var scan_result_50349
        DeRef(_scan_result_50349);
        return -1;
        // SubProg e_path_find pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 50346 op: 159
        // SubProg e_path_find pc: 56 op: STARTLINE (58)

        /** pathopen.e:665		end for*/
        // SubProg e_path_find pc: 58 op: ENDFOR_INT_UP1 (54)
        _i_50354 = _i_50354 + 1;
        goto L2; // [58] 33
L3: // addr: 63 pc: 58 sub: 50346 op: 54
        ;
    }
    // SubProg e_path_find pc: 63 op: STARTLINE (58)

    /** pathopen.e:667		scan_result = ScanPath(name, "PATH", 0)*/
    // SubProg e_path_find pc: 65 op: PROC (27)
    RefDS(_name_50348);
    RefDS(_26069);
    _0 = _scan_result_50349;
    _scan_result_50349 = _48ScanPath(_name_50348, _26069, 0);
    DeRef(_0);
    // SubProg e_path_find pc: 71 op: STARTLINE (58)

    /** pathopen.e:668		if sequence(scan_result) then*/
    // SubProg e_path_find pc: 73 op: IS_A_SEQUENCE (68)
    _26071 = IS_SEQUENCE(_scan_result_50349);
    // SubProg e_path_find pc: 76 op: IF (20)
    if (_26071 == 0)
    {
        _26071 = NOVALUE;
        goto L5; // [76] 98
    }
    else{
        _26071 = NOVALUE;
    }
    // SubProg e_path_find pc: 79 op: STARTLINE (58)

    /** pathopen.e:669			close(scan_result[2])*/
    // SubProg e_path_find pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_50349);
    _26072 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg e_path_find pc: 85 op: CLOSE (86)
    if (IS_ATOM_INT(_26072))
    EClose(_26072);
    else
    EClose((object)DBL_PTR(_26072)->dbl);
    _26072 = NOVALUE;
    // SubProg e_path_find pc: 87 op: STARTLINE (58)

    /** pathopen.e:670			return scan_result[1]*/
    // SubProg e_path_find pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_50349);
    _26073 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg e_path_find pc: 93 op: RETURNF (28)
    Ref(_26073);

// Exiting block BLOCK: e_path_find

// block var name_50348
    DeRefDS(_name_50348);

// block var scan_result_50349
    DeRef(_scan_result_50349);
    return _26073;
    // SubProg e_path_find pc: 97 op: NOP1 (159)
L5: // addr: 98 pc: 97 sub: 50346 op: 159
    // SubProg e_path_find pc: 98 op: STARTLINE (58)

    /** pathopen.e:673		return -1*/
    // SubProg e_path_find pc: 100 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var name_50348
    DeRefDS(_name_50348);

// block var scan_result_50349
    DeRef(_scan_result_50349);
    _26073 = NOVALUE;
    return -1;
    // SubProg e_path_find pc: 104 op: BADRETURNF (43)
    ;
}



// 0x3C2A1D5D
