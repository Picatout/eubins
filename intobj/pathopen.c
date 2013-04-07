// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _46exe_path()
{
// skipping _25819  name type: 0
// skipping _25818  name type: 0
    object _25817 = NOVALUE; // 49882 25817
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg exe_path pc: 1 op: STARTLINE (58)

    /** pathopen.e:70		if sequence(exe_path_cache) then*/
    // SubProg exe_path pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 5 op: IS_A_SEQUENCE (68)
    _25817 = IS_SEQUENCE(_46exe_path_cache_49875);
    // SubProg exe_path pc: 8 op: IF (20)
    if (_25817 == 0)
    {
        _25817 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25817 = NOVALUE;
    }
    // SubProg exe_path pc: 11 op: STARTLINE (58)

    /** pathopen.e:71			return exe_path_cache*/
    // SubProg exe_path pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 15 op: RETURNF (28)
    Ref(_46exe_path_cache_49875);

// Exiting block BLOCK: exe_path
    return _46exe_path_cache_49875;
    // SubProg exe_path pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 49879 op: 159
    // SubProg exe_path pc: 20 op: STARTLINE (58)

    /** pathopen.e:74		exe_path_cache = command_line()*/
    // SubProg exe_path pc: 22 op: COMMAND_LINE (100)
    DeRef(_46exe_path_cache_49875);
    _46exe_path_cache_49875 = Command_Line();
    // SubProg exe_path pc: 24 op: STARTLINE (58)

    /** pathopen.e:75		exe_path_cache = exe_path_cache[1]*/
    // SubProg exe_path pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 28 op: RHS_SUBS_CHECK (92)
    _0 = _46exe_path_cache_49875;
    _2 = (object)SEQ_PTR(_46exe_path_cache_49875);
    _46exe_path_cache_49875 = (object)*(((s1_ptr)_2)->base + 1);
    RefDS(_46exe_path_cache_49875);
    DeRefDS(_0);
    // SubProg exe_path pc: 32 op: STARTLINE (58)

    /** pathopen.e:77		return exe_path_cache*/
    // SubProg exe_path pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg exe_path pc: 36 op: RETURNF (28)
    RefDS(_46exe_path_cache_49875);

// Exiting block BLOCK: exe_path
    return _46exe_path_cache_49875;
    // SubProg exe_path pc: 40 op: BADRETURNF (43)
    ;
}


object _46check_cache(object _env_49887, object _inc_path_49888)
{
    object _delim_49889 = NOVALUE;
    object _pos_49890 = NOVALUE;
// skipping _25866  name type: 0
    object _25865 = NOVALUE; // 49947 25865
    object _25864 = NOVALUE; // 49945 25864
    object _25863 = NOVALUE; // 49944 25863
    object _25862 = NOVALUE; // 49943 25862
// skipping _25861  name type: 0
    object _25860 = NOVALUE; // 49940 25860
    object _25859 = NOVALUE; // 49939 25859
    object _25858 = NOVALUE; // 49938 25858
    object _25857 = NOVALUE; // 49937 25857
    object _25856 = NOVALUE; // 49936 25856
    object _25855 = NOVALUE; // 49935 25855
    object _25854 = NOVALUE; // 49934 25854
    object _25853 = NOVALUE; // 49933 25853
    object _25852 = NOVALUE; // 49932 25852
// skipping _25851  name type: 0
// skipping _25850  name type: 0
// skipping _25849  name type: 0
    object _25848 = NOVALUE; // 49926 25848
    object _25847 = NOVALUE; // 49925 25847
    object _25846 = NOVALUE; // 49924 25846
    object _25845 = NOVALUE; // 49923 25845
    object _25844 = NOVALUE; // 49922 25844
    object _25843 = NOVALUE; // 49921 25843
    object _25842 = NOVALUE; // 49920 25842
    object _25841 = NOVALUE; // 49919 25841
// skipping _25840  name type: 0
    object _25839 = NOVALUE; // 49917 25839
    object _25838 = NOVALUE; // 49916 25838
    object _25837 = NOVALUE; // 49915 25837
    object _25836 = NOVALUE; // 49914 25836
    object _25835 = NOVALUE; // 49912 25835
    object _25834 = NOVALUE; // 49911 25834
// skipping _25833  name type: 0
    object _25832 = NOVALUE; // 49907 25832
    object _25831 = NOVALUE; // 49906 25831
    object _25830 = NOVALUE; // 49904 25830
    object _25829 = NOVALUE; // 49903 25829
// skipping _25828  name type: 0
// skipping _25827  name type: 0
// skipping _25826  name type: 0
// skipping _25825  name type: 0
// skipping _25824  name type: 0
// skipping _25823  name type: 0
// skipping _25822  name type: 0
// skipping _25821  name type: 0
// skipping _25820  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_cache pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_cache pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg check_cache pc: 5 op: STARTLINE (58)

    /** pathopen.e:83		if not num_var then -- first time the var is accessed, add cache entry*/
    // SubProg check_cache pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 9 op: NOT_IFW (108)
    if (_46num_var_49864 != 0)
    goto L1; // [9] 86
    // SubProg check_cache pc: 12 op: STARTLINE (58)

    /** pathopen.e:84			cache_vars = append(cache_vars,env)*/
    // SubProg check_cache pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 16 op: APPEND (35)
    RefDS(_env_49887);
    Append(&_46cache_vars_49865, _46cache_vars_49865, _env_49887);
    // SubProg check_cache pc: 20 op: STARTLINE (58)

    /** pathopen.e:85			cache_strings = append(cache_strings,inc_path)*/
    // SubProg check_cache pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 24 op: APPEND (35)
    RefDS(_inc_path_49888);
    Append(&_46cache_strings_49866, _46cache_strings_49866, _inc_path_49888);
    // SubProg check_cache pc: 28 op: STARTLINE (58)

    /** pathopen.e:86			cache_substrings = append(cache_substrings,{})*/
    // SubProg check_cache pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 32 op: APPEND (35)
    RefDS(_21958);
    Append(&_46cache_substrings_49867, _46cache_substrings_49867, _21958);
    // SubProg check_cache pc: 36 op: STARTLINE (58)

    /** pathopen.e:87			cache_starts = append(cache_starts,{})*/
    // SubProg check_cache pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 40 op: APPEND (35)
    RefDS(_21958);
    Append(&_46cache_starts_49868, _46cache_starts_49868, _21958);
    // SubProg check_cache pc: 44 op: STARTLINE (58)

    /** pathopen.e:88			cache_ends = append(cache_ends,{})*/
    // SubProg check_cache pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 48 op: APPEND (35)
    RefDS(_21958);
    Append(&_46cache_ends_49869, _46cache_ends_49869, _21958);
    // SubProg check_cache pc: 52 op: STARTLINE (58)

    /** pathopen.e:89			ifdef WINDOWS then*/
    // SubProg check_cache pc: 54 op: STARTLINE (58)

    /** pathopen.e:92			num_var = length(cache_vars)*/
    // SubProg check_cache pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 58 op: LENGTH (42)
    if (IS_SEQUENCE(_46cache_vars_49865)){
            _46num_var_49864 = SEQ_PTR(_46cache_vars_49865)->length;
    }
    else {
        _46num_var_49864 = 1;
    }
    // SubProg check_cache pc: 61 op: STARTLINE (58)

    /** pathopen.e:93			cache_complete &= 0*/
    // SubProg check_cache pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 65 op: CONCAT (15)
    Append(&_46cache_complete_49871, _46cache_complete_49871, 0);
    // SubProg check_cache pc: 69 op: STARTLINE (58)

    /** pathopen.e:94			cache_delims &= 0*/
    // SubProg check_cache pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 73 op: CONCAT (15)
    Append(&_46cache_delims_49872, _46cache_delims_49872, 0);
    // SubProg check_cache pc: 77 op: STARTLINE (58)

    /** pathopen.e:95			return 0*/
    // SubProg check_cache pc: 79 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49887
    DeRefDSi(_env_49887);

// block var inc_path_49888
    DeRefDSi(_inc_path_49888);

// block var delim_49889

// block var pos_49890
    return 0;
    // SubProg check_cache pc: 83 op: ELSE (23)
    goto L2; // [83] 425
    // SubProg check_cache pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 49885 op: 159
    // SubProg check_cache pc: 86 op: STARTLINE (58)

    /** pathopen.e:97			if compare(inc_path,cache_strings[num_var]) then*/
    // SubProg check_cache pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 92 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_strings_49866);
    _25829 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg check_cache pc: 96 op: COMPARE (76)
    if (IS_ATOM_INT(_inc_path_49888) && IS_ATOM_INT(_25829)){
        _25830 = (_inc_path_49888 < _25829) ? -1 : (_inc_path_49888 > _25829);
    }
    else{
        _25830 = compare(_inc_path_49888, _25829);
    }
    _25829 = NOVALUE;
    // SubProg check_cache pc: 100 op: IF (20)
    if (_25830 == 0)
    {
        _25830 = NOVALUE;
        goto L3; // [100] 424
    }
    else{
        _25830 = NOVALUE;
    }
    // SubProg check_cache pc: 103 op: STARTLINE (58)

    /** pathopen.e:98				cache_strings[num_var] = inc_path*/
    // SubProg check_cache pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 109 op: ASSIGN_SUBS (16)
    RefDS(_inc_path_49888);
    _2 = (object)SEQ_PTR(_46cache_strings_49866);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_strings_49866 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _inc_path_49888;
    DeRefDS(_1);
    // SubProg check_cache pc: 113 op: STARTLINE (58)

    /** pathopen.e:99				cache_complete[num_var] = 0*/
    // SubProg check_cache pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 119 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_46cache_complete_49871);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_complete_49871 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
    *(intptr_t *)_2 = 0;
    // SubProg check_cache pc: 123 op: STARTLINE (58)

    /** pathopen.e:100				if match(cache_strings[num_var],inc_path)!=1 then -- try to salvage what we can*/
    // SubProg check_cache pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 129 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_strings_49866);
    _25831 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg check_cache pc: 133 op: MATCH_FROM (177)
    _25832 = e_match_from(_25831, _inc_path_49888, 1);
    _25831 = NOVALUE;
    // SubProg check_cache pc: 138 op: NOTEQ_IFW (105)
    if (_25832 == 1)
    goto L4; // [138] 423
    // SubProg check_cache pc: 142 op: STARTLINE (58)

    /** pathopen.e:101					pos = -1*/
    // SubProg check_cache pc: 144 op: ASSIGN_I (113)
    _pos_49890 = -1;
    // SubProg check_cache pc: 147 op: STARTLINE (58)

    /** pathopen.e:102					for i=1 to length(cache_strings[num_var]) do*/
    // SubProg check_cache pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_cache pc: 153 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_strings_49866);
    _25834 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg check_cache pc: 157 op: LENGTH (42)
    if (IS_SEQUENCE(_25834)){
            _25835 = SEQ_PTR(_25834)->length;
    }
    else {
        _25835 = 1;
    }
    _25834 = NOVALUE;
    // SubProg check_cache pc: 160 op: FOR_I (125)
    {
        object _i_49910;
        _i_49910 = 1;
L5: // addr: 167 pc: 160 sub: 49885 op: 125
        if (_i_49910 > _25835){
            goto L6; // [160] 422
        }
        // SubProg check_cache pc: 167 op: STARTLINE (58)

        /** pathopen.e:103						if cache_ends[num_var][i] > length(inc_path) or */
        // SubProg check_cache pc: 169 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 171 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 173 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        _25836 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 177 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25836);
        _25837 = (object)*(((s1_ptr)_2)->base + _i_49910);
        _25836 = NOVALUE;
        // SubProg check_cache pc: 181 op: LENGTH (42)
        if (IS_SEQUENCE(_inc_path_49888)){
                _25838 = SEQ_PTR(_inc_path_49888)->length;
        }
        else {
            _25838 = 1;
        }
        // SubProg check_cache pc: 184 op: GREATER (6)
        if (IS_ATOM_INT(_25837)) {
            _25839 = (_25837 > _25838);
        }
        else {
            _25839 = binary_op(GREATER, _25837, _25838);
        }
        _25837 = NOVALUE;
        _25838 = NOVALUE;
        // SubProg check_cache pc: 188 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_25839)) {
            if (_25839 != 0) {
                goto L7; // [188] 242
            }
        }
        else {
            if (DBL_PTR(_25839)->dbl != 0.0) {
                goto L7; // [188] 242
            }
        }
        // SubProg check_cache pc: 192 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 196 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49867);
        _25841 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 200 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25841);
        _25842 = (object)*(((s1_ptr)_2)->base + _i_49910);
        _25841 = NOVALUE;
        // SubProg check_cache pc: 204 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 206 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 208 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_starts_49868);
        _25843 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25843);
        _25844 = (object)*(((s1_ptr)_2)->base + _i_49910);
        _25843 = NOVALUE;
        // SubProg check_cache pc: 216 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 220 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        _25845 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 224 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25845);
        _25846 = (object)*(((s1_ptr)_2)->base + _i_49910);
        _25845 = NOVALUE;
        // SubProg check_cache pc: 228 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25847;
        RHS_Slice(_inc_path_49888, _25844, _25846);
        // SubProg check_cache pc: 233 op: COMPARE (76)
        if (IS_ATOM_INT(_25842) && IS_ATOM_INT(_25847)){
            _25848 = (_25842 < _25847) ? -1 : (_25842 > _25847);
        }
        else{
            _25848 = compare(_25842, _25847);
        }
        _25842 = NOVALUE;
        DeRefDS(_25847);
        _25847 = NOVALUE;
        // SubProg check_cache pc: 237 op: NOP1 (159)
        // SubProg check_cache pc: 238 op: IF (20)
        if (_25848 == 0)
        {
            _25848 = NOVALUE;
            goto L8; // [238] 253
        }
        else{
            _25848 = NOVALUE;
        }
        // SubProg check_cache pc: 241 op: NOP1 (159)
L7: // addr: 242 pc: 241 sub: 49885 op: 159
        // SubProg check_cache pc: 242 op: STARTLINE (58)

        /** pathopen.e:107							pos = i-1*/
        // SubProg check_cache pc: 244 op: MINUS_I (116)
        _pos_49890 = _i_49910 - 1;
        // SubProg check_cache pc: 248 op: STARTLINE (58)

        /** pathopen.e:108							exit*/
        // SubProg check_cache pc: 250 op: EXIT (61)
        goto L6; // [250] 422
        // SubProg check_cache pc: 252 op: NOP1 (159)
L8: // addr: 253 pc: 252 sub: 49885 op: 159
        // SubProg check_cache pc: 253 op: STARTLINE (58)

        /** pathopen.e:110						if pos = 0 then*/
        // SubProg check_cache pc: 255 op: EQUALS_IFW_I (121)
        if (_pos_49890 != 0)
        goto L9; // [255] 268
        // SubProg check_cache pc: 259 op: STARTLINE (58)

        /** pathopen.e:111							return 0*/
        // SubProg check_cache pc: 261 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49887
        DeRefDSi(_env_49887);

// block var inc_path_49888
        DeRefDSi(_inc_path_49888);

// block var delim_49889

// block var pos_49890
        _25844 = NOVALUE;
        _25834 = NOVALUE;
        DeRef(_25839);
        _25839 = NOVALUE;
        _25846 = NOVALUE;
        return 0;
        // SubProg check_cache pc: 265 op: ELSE (23)
        goto LA; // [265] 415
        // SubProg check_cache pc: 267 op: NOP1 (159)
L9: // addr: 268 pc: 267 sub: 49885 op: 159
        // SubProg check_cache pc: 268 op: STARTLINE (58)

        /** pathopen.e:112						elsif pos >0 then -- crop cache data*/
        // SubProg check_cache pc: 270 op: GREATER_IFW_I (124)
        if (_pos_49890 <= 0)
        goto LB; // [270] 414
        // SubProg check_cache pc: 274 op: STARTLINE (58)

        /** pathopen.e:113							cache_substrings[num_var] = cache_substrings[num_var][1..pos]*/
        // SubProg check_cache pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 284 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49867);
        _25852 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 288 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25853;
        RHS_Slice(_25852, 1, _pos_49890);
        _25852 = NOVALUE;
        // SubProg check_cache pc: 293 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_substrings_49867);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_substrings_49867 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25853;
        if( _1 != _25853 ){
            DeRefDS(_1);
        }
        _25853 = NOVALUE;
        // SubProg check_cache pc: 297 op: STARTLINE (58)

        /** pathopen.e:114							cache_starts[num_var] = cache_starts[num_var][1..pos]*/
        // SubProg check_cache pc: 299 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 301 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 305 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 307 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_starts_49868);
        _25854 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 311 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25855;
        RHS_Slice(_25854, 1, _pos_49890);
        _25854 = NOVALUE;
        // SubProg check_cache pc: 316 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_starts_49868);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_starts_49868 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25855;
        if( _1 != _25855 ){
            DeRef(_1);
        }
        _25855 = NOVALUE;
        // SubProg check_cache pc: 320 op: STARTLINE (58)

        /** pathopen.e:115							cache_ends[num_var] = cache_ends[num_var][1..pos]*/
        // SubProg check_cache pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 324 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 328 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 330 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        _25856 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 334 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25857;
        RHS_Slice(_25856, 1, _pos_49890);
        _25856 = NOVALUE;
        // SubProg check_cache pc: 339 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_ends_49869 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25857;
        if( _1 != _25857 ){
            DeRef(_1);
        }
        _25857 = NOVALUE;
        // SubProg check_cache pc: 343 op: STARTLINE (58)

        /** pathopen.e:116							ifdef WINDOWS then*/
        // SubProg check_cache pc: 345 op: STARTLINE (58)

        /** pathopen.e:119							delim = cache_ends[num_var][$]+1*/
        // SubProg check_cache pc: 347 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 351 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        _25858 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg check_cache pc: 355 op: LENGTH (42)
        if (IS_SEQUENCE(_25858)){
                _25859 = SEQ_PTR(_25858)->length;
        }
        else {
            _25859 = 1;
        }
        // SubProg check_cache pc: 358 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25858);
        _25860 = (object)*(((s1_ptr)_2)->base + _25859);
        _25858 = NOVALUE;
        // SubProg check_cache pc: 362 op: PLUS1_I (117)
        if (IS_ATOM_INT(_25860)) {
            _delim_49889 = _25860 + 1;
        }
        else
        { // coercing _delim_49889 to an integer 1
            _delim_49889 = 1+(object)(DBL_PTR(_25860)->dbl);
            if( !IS_ATOM_INT(_delim_49889) ){
                _delim_49889 = (object)DBL_PTR(_delim_49889)->dbl;
            }
        }
        _25860 = NOVALUE;
        // SubProg check_cache pc: 366 op: STARTLINE (58)

        /** pathopen.e:120							while delim <= length(inc_path) and delim != PATH_SEPARATOR do*/
        // SubProg check_cache pc: 368 op: NOP2 (110)
        // SubProg check_cache pc: 370 op: NOPWHILE (158)
LC: // addr: 371 pc: 370 sub: 49885 op: 158
        // SubProg check_cache pc: 371 op: LENGTH (42)
        if (IS_SEQUENCE(_inc_path_49888)){
                _25862 = SEQ_PTR(_inc_path_49888)->length;
        }
        else {
            _25862 = 1;
        }
        // SubProg check_cache pc: 374 op: LESSEQ (5)
        _25863 = (_delim_49889 <= _25862);
        _25862 = NOVALUE;
        // SubProg check_cache pc: 378 op: SC1_AND_IF (146)
        if (_25863 == 0) {
            goto LD; // [378] 403
        }
        // SubProg check_cache pc: 382 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 384 op: NOTEQ (4)
        _25865 = (_delim_49889 != 58);
        // SubProg check_cache pc: 388 op: NOP1 (159)
        // SubProg check_cache pc: 389 op: WHILE (47)
        if (_25865 == 0)
        {
            DeRef(_25865);
            _25865 = NOVALUE;
            goto LD; // [389] 403
        }
        else{
            DeRef(_25865);
            _25865 = NOVALUE;
        }
        // SubProg check_cache pc: 392 op: STARTLINE (58)

        /** pathopen.e:121								delim+=1*/
        // SubProg check_cache pc: 394 op: PLUS1_I (117)
        _delim_49889 = _delim_49889 + 1;
        // SubProg check_cache pc: 398 op: STARTLINE (58)

        /** pathopen.e:122							end while*/
        // SubProg check_cache pc: 400 op: ENDWHILE (22)
        goto LC; // [400] 371
        // SubProg check_cache pc: 402 op: NOP1 (159)
LD: // addr: 403 pc: 402 sub: 49885 op: 159
        // SubProg check_cache pc: 403 op: STARTLINE (58)

        /** pathopen.e:123							cache_delims[num_var] = delim*/
        // SubProg check_cache pc: 405 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 407 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_cache pc: 409 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_46cache_delims_49872);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_delims_49872 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        *(intptr_t *)_2 = _delim_49889;
        // SubProg check_cache pc: 413 op: NOP1 (159)
LB: // addr: 414 pc: 413 sub: 49885 op: 159
        // SubProg check_cache pc: 414 op: NOP1 (159)
LA: // addr: 415 pc: 414 sub: 49885 op: 159
        // SubProg check_cache pc: 415 op: STARTLINE (58)

        /** pathopen.e:125					end for*/
        // SubProg check_cache pc: 417 op: ENDFOR_INT_UP1 (54)
        _i_49910 = _i_49910 + 1;
        goto L5; // [417] 167
L6: // addr: 422 pc: 417 sub: 49885 op: 54
        ;
    }
    // SubProg check_cache pc: 422 op: NOP1 (159)
L4: // addr: 423 pc: 422 sub: 49885 op: 159
    // SubProg check_cache pc: 423 op: NOP1 (159)
L3: // addr: 424 pc: 423 sub: 49885 op: 159
    // SubProg check_cache pc: 424 op: NOP1 (159)
L2: // addr: 425 pc: 424 sub: 49885 op: 159
    // SubProg check_cache pc: 425 op: STARTLINE (58)

    /** pathopen.e:129		return 1*/
    // SubProg check_cache pc: 427 op: RETURNF (28)

// Exiting block BLOCK: check_cache

// block var env_49887
    DeRefDSi(_env_49887);

// block var inc_path_49888
    DeRefDSi(_inc_path_49888);

// block var delim_49889

// block var pos_49890
    _25844 = NOVALUE;
    _25834 = NOVALUE;
    DeRef(_25839);
    _25839 = NOVALUE;
    _25846 = NOVALUE;
    DeRef(_25863);
    _25863 = NOVALUE;
    return 1;
    // SubProg check_cache pc: 431 op: BADRETURNF (43)
    ;
}


object _46get_conf_dirs()
{
    object _delimiter_49951 = NOVALUE;
    object _dirs_49952 = NOVALUE;
// skipping _25873  name type: 0
// skipping _25872  name type: 0
    object _25871 = NOVALUE; // 49960 25871
// skipping _25870  name type: 0
    object _25869 = NOVALUE; // 49957 25869
    object _25868 = NOVALUE; // 49956 25868
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_conf_dirs pc: 1 op: STARTLINE (58)

    /** pathopen.e:136		ifdef UNIX then*/
    // SubProg get_conf_dirs pc: 3 op: STARTLINE (58)

    /** pathopen.e:137			delimiter = ':'*/
    // SubProg get_conf_dirs pc: 5 op: ASSIGN_I (113)
    _delimiter_49951 = 58;
    // SubProg get_conf_dirs pc: 8 op: STARTLINE (58)

    /** pathopen.e:142		dirs = ""*/
    // SubProg get_conf_dirs pc: 10 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_dirs_49952);
    _dirs_49952 = _21958;
    // SubProg get_conf_dirs pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg get_conf_dirs pc: 15 op: STARTLINE (58)

    /** pathopen.e:143		for i = 1 to length(config_inc_paths) do*/
    // SubProg get_conf_dirs pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_conf_dirs pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_46config_inc_paths_49873)){
            _25868 = SEQ_PTR(_46config_inc_paths_49873)->length;
    }
    else {
        _25868 = 1;
    }
    // SubProg get_conf_dirs pc: 22 op: FOR_I (125)
    {
        object _i_49955;
        _i_49955 = 1;
L1: // addr: 29 pc: 22 sub: 49949 op: 125
        if (_i_49955 > _25868){
            goto L2; // [22] 68
        }
        // SubProg get_conf_dirs pc: 29 op: STARTLINE (58)

        /** pathopen.e:144			dirs &= config_inc_paths[i]*/
        // SubProg get_conf_dirs pc: 31 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_conf_dirs pc: 33 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46config_inc_paths_49873);
        _25869 = (object)*(((s1_ptr)_2)->base + _i_49955);
        // SubProg get_conf_dirs pc: 37 op: CONCAT (15)
        Concat((object_ptr)&_dirs_49952, _dirs_49952, _25869);
        _25869 = NOVALUE;
        // SubProg get_conf_dirs pc: 41 op: STARTLINE (58)

        /** pathopen.e:145			if i != length(config_inc_paths) then*/
        // SubProg get_conf_dirs pc: 43 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_conf_dirs pc: 45 op: LENGTH (42)
        if (IS_SEQUENCE(_46config_inc_paths_49873)){
                _25871 = SEQ_PTR(_46config_inc_paths_49873)->length;
        }
        else {
            _25871 = 1;
        }
        // SubProg get_conf_dirs pc: 48 op: NOTEQ_IFW_I (122)
        if (_i_49955 == _25871)
        goto L3; // [48] 61
        // SubProg get_conf_dirs pc: 52 op: STARTLINE (58)

        /** pathopen.e:146				dirs &= delimiter*/
        // SubProg get_conf_dirs pc: 54 op: PRIVATE_INIT_CHECK (30)
        // SubProg get_conf_dirs pc: 56 op: CONCAT (15)
        Append(&_dirs_49952, _dirs_49952, _delimiter_49951);
        // SubProg get_conf_dirs pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 49949 op: 159
        // SubProg get_conf_dirs pc: 61 op: STARTLINE (58)

        /** pathopen.e:148		end for*/
        // SubProg get_conf_dirs pc: 63 op: ENDFOR_INT_UP1 (54)
        _i_49955 = _i_49955 + 1;
        goto L1; // [63] 29
L2: // addr: 68 pc: 63 sub: 49949 op: 54
        ;
    }
    // SubProg get_conf_dirs pc: 68 op: STARTLINE (58)

    /** pathopen.e:150		return dirs*/
    // SubProg get_conf_dirs pc: 70 op: RETURNF (28)

// Exiting block BLOCK: get_conf_dirs

// block var delimiter_49951
    return _dirs_49952;
    // SubProg get_conf_dirs pc: 74 op: BADRETURNF (43)
    ;
}


object _46strip_file_from_path(object _full_path_49965)
{
    object _25877 = NOVALUE; // 49973 25877
// skipping _25876  name type: 0
    object _25875 = NOVALUE; // 49970 25875
    object _25874 = NOVALUE; // 49968 25874
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg strip_file_from_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg strip_file_from_path pc: 3 op: STARTLINE (58)

    /** pathopen.e:156		for i = length(full_path) to 1 by -1 do*/
    // SubProg strip_file_from_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_full_path_49965)){
            _25874 = SEQ_PTR(_full_path_49965)->length;
    }
    else {
        _25874 = 1;
    }
    // SubProg strip_file_from_path pc: 8 op: FOR_I (125)
    {
        object _i_49967;
        _i_49967 = _25874;
L1: // addr: 15 pc: 8 sub: 49963 op: 125
        if (_i_49967 < 1){
            goto L2; // [8] 46
        }
        // SubProg strip_file_from_path pc: 15 op: STARTLINE (58)

        /** pathopen.e:157			if full_path[i] = SLASH then*/
        // SubProg strip_file_from_path pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_full_path_49965);
        _25875 = (object)*(((s1_ptr)_2)->base + _i_49967);
        // SubProg strip_file_from_path pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg strip_file_from_path pc: 23 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25875, 47)){
            _25875 = NOVALUE;
            goto L3; // [23] 39
        }
        _25875 = NOVALUE;
        // SubProg strip_file_from_path pc: 27 op: STARTLINE (58)

        /** pathopen.e:158				return full_path[1..i]*/
        // SubProg strip_file_from_path pc: 29 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25877;
        RHS_Slice(_full_path_49965, 1, _i_49967);
        // SubProg strip_file_from_path pc: 34 op: RETURNF (28)

// Exiting block BLOCK: strip_file_from_path

// block var full_path_49965
        DeRefDS(_full_path_49965);
        return _25877;
        // SubProg strip_file_from_path pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 49963 op: 159
        // SubProg strip_file_from_path pc: 39 op: STARTLINE (58)

        /** pathopen.e:160		end for*/
        // SubProg strip_file_from_path pc: 41 op: ENDFOR_GENERAL (39)
        _i_49967 = _i_49967 + -1;
        goto L1; // [41] 15
L2: // addr: 46 pc: 41 sub: 49963 op: 39
        ;
    }
    // SubProg strip_file_from_path pc: 46 op: STARTLINE (58)

    /** pathopen.e:162		return ""*/
    // SubProg strip_file_from_path pc: 48 op: RETURNF (28)
    RefDS(_21958);

// Exiting block BLOCK: strip_file_from_path

// block var full_path_49965
    DeRefDS(_full_path_49965);
    DeRef(_25877);
    _25877 = NOVALUE;
    return _21958;
    // SubProg strip_file_from_path pc: 52 op: BADRETURNF (43)
    ;
}


object _46expand_path(object _path_49976, object _prefix_49977)
{
    object _absolute_49978 = NOVALUE;
    object _home_49982 = NOVALUE;
// skipping _25903  name type: 0
    object _25902 = NOVALUE; // 50012 25902
    object _25901 = NOVALUE; // 50011 25901
    object _25900 = NOVALUE; // 50009 25900
    object _25899 = NOVALUE; // 50008 25899
    object _25898 = NOVALUE; // 50007 25898
    object _25897 = NOVALUE; // 50006 25897
// skipping _25896  name type: 0
// skipping _25895  name type: 0
// skipping _25894  name type: 0
    object _25893 = NOVALUE; // 49998 25893
// skipping _25892  name type: 0
    object _25891 = NOVALUE; // 49996 25891
    object _25890 = NOVALUE; // 49995 25890
    object _25889 = NOVALUE; // 49994 25889
    object _25888 = NOVALUE; // 49993 25888
    object _25887 = NOVALUE; // 49992 25887
// skipping _25886  name type: 0
    object _25884 = NOVALUE; // 49988 25884
    object _25882 = NOVALUE; // 49986 25882
    object _25881 = NOVALUE; // 49985 25881
    object _25880 = NOVALUE; // 49984 25880
// skipping _25879  name type: 0
    object _25878 = NOVALUE; // 49980 25878
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expand_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg expand_path pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg expand_path pc: 5 op: STARTLINE (58)

    /** pathopen.e:169		if not length(path) then*/
    // SubProg expand_path pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49976)){
            _25878 = SEQ_PTR(_path_49976)->length;
    }
    else {
        _25878 = 1;
    }
    // SubProg expand_path pc: 10 op: NOT_IFW (108)
    if (_25878 != 0)
    goto L1; // [10] 22
    _25878 = NOVALUE;
    // SubProg expand_path pc: 13 op: STARTLINE (58)

    /** pathopen.e:170			return pwd*/
    // SubProg expand_path pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 17 op: RETURNF (28)
    RefDS(_46pwd_49876);

// Exiting block BLOCK: expand_path

// block var path_49976
    DeRefDS(_path_49976);

// block var prefix_49977
    DeRefDS(_prefix_49977);

// block var absolute_49978

// block var home_49982
    DeRefi(_home_49982);
    return _46pwd_49876;
    // SubProg expand_path pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 49974 op: 159
    // SubProg expand_path pc: 22 op: STARTLINE (58)

    /** pathopen.e:174		ifdef UNIX then*/
    // SubProg expand_path pc: 24 op: STARTLINE (58)

    /** pathopen.e:175			object home*/
    // SubProg expand_path pc: 26 op: STARTLINE (58)

    /** pathopen.e:176			if length(path) and path[1] = '~' then*/
    // SubProg expand_path pc: 28 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49976)){
            _25880 = SEQ_PTR(_path_49976)->length;
    }
    else {
        _25880 = 1;
    }
    // SubProg expand_path pc: 31 op: SC1_AND_IF (146)
    if (_25880 == 0) {
        goto L2; // [31] 84
    }
    // SubProg expand_path pc: 35 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49976);
    _25882 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg expand_path pc: 39 op: EQUALS (3)
    if (IS_ATOM_INT(_25882)) {
        _25884 = (_25882 == 126);
    }
    else {
        _25884 = binary_op(EQUALS, _25882, 126);
    }
    _25882 = NOVALUE;
    // SubProg expand_path pc: 43 op: NOP1 (159)
    // SubProg expand_path pc: 44 op: IF (20)
    if (_25884 == 0) {
        DeRef(_25884);
        _25884 = NOVALUE;
        goto L2; // [44] 84
    }
    else {
        if (!IS_ATOM_INT(_25884) && DBL_PTR(_25884)->dbl == 0.0){
            DeRef(_25884);
            _25884 = NOVALUE;
            goto L2; // [44] 84
        }
        DeRef(_25884);
        _25884 = NOVALUE;
    }
    DeRef(_25884);
    _25884 = NOVALUE;
    // SubProg expand_path pc: 47 op: STARTLINE (58)

    /** pathopen.e:177				home = getenv("HOME")*/
    // SubProg expand_path pc: 49 op: GETENV (91)
    DeRefi(_home_49982);
    _home_49982 = EGetEnv(_25885);
    // SubProg expand_path pc: 52 op: STARTLINE (58)

    /** pathopen.e:178				if sequence(home) and length(home) then*/
    // SubProg expand_path pc: 54 op: IS_A_SEQUENCE (68)
    _25887 = IS_SEQUENCE(_home_49982);
    // SubProg expand_path pc: 57 op: SC1_AND_IF (146)
    if (_25887 == 0) {
        goto L3; // [57] 83
    }
    // SubProg expand_path pc: 61 op: LENGTH (42)
    if (IS_SEQUENCE(_home_49982)){
            _25889 = SEQ_PTR(_home_49982)->length;
    }
    else {
        _25889 = 1;
    }
    // SubProg expand_path pc: 64 op: NOP1 (159)
    // SubProg expand_path pc: 65 op: IF (20)
    if (_25889 == 0)
    {
        _25889 = NOVALUE;
        goto L3; // [65] 83
    }
    else{
        _25889 = NOVALUE;
    }
    // SubProg expand_path pc: 68 op: STARTLINE (58)

    /** pathopen.e:179					path = home & path[2..$]*/
    // SubProg expand_path pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49976)){
            _25890 = SEQ_PTR(_path_49976)->length;
    }
    else {
        _25890 = 1;
    }
    // SubProg expand_path pc: 73 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25891;
    RHS_Slice(_path_49976, 2, _25890);
    // SubProg expand_path pc: 78 op: CONCAT (15)
    if (IS_SEQUENCE(_home_49982) && IS_ATOM(_25891)) {
    }
    else if (IS_ATOM(_home_49982) && IS_SEQUENCE(_25891)) {
        Ref(_home_49982);
        Prepend(&_path_49976, _25891, _home_49982);
    }
    else {
        Concat((object_ptr)&_path_49976, _home_49982, _25891);
    }
    DeRefDS(_25891);
    _25891 = NOVALUE;
    // SubProg expand_path pc: 82 op: NOP1 (159)
L3: // addr: 83 pc: 82 sub: 49974 op: 159
    // SubProg expand_path pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 49974 op: 159
    // SubProg expand_path pc: 84 op: STARTLINE (58)

    /** pathopen.e:183			absolute = find(path[1], SLASH_CHARS)*/
    // SubProg expand_path pc: 86 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49976);
    _25893 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg expand_path pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 92 op: FIND_FROM (176)
    _absolute_49978 = find_from(_25893, _39SLASH_CHARS_20003, 1);
    _25893 = NOVALUE;
    // SubProg expand_path pc: 97 op: STARTLINE (58)

    /** pathopen.e:188		if not absolute then*/
    // SubProg expand_path pc: 99 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_path pc: 101 op: NOT_IFW (108)
    if (_absolute_49978 != 0)
    goto L4; // [101] 115
    // SubProg expand_path pc: 104 op: STARTLINE (58)

    /** pathopen.e:189			path = prefix & SLASH & path*/
    // SubProg expand_path pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 108 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _path_49976;
        concat_list[1] = 47;
        concat_list[2] = _prefix_49977;
        Concat_N((object_ptr)&_path_49976, concat_list, 3);
    }
    // SubProg expand_path pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 49974 op: 159
    // SubProg expand_path pc: 115 op: STARTLINE (58)

    /** pathopen.e:192		if length(path) and not find(path[$], SLASH_CHARS) then*/
    // SubProg expand_path pc: 117 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49976)){
            _25897 = SEQ_PTR(_path_49976)->length;
    }
    else {
        _25897 = 1;
    }
    // SubProg expand_path pc: 120 op: SC1_AND_IF (146)
    if (_25897 == 0) {
        goto L5; // [120] 154
    }
    // SubProg expand_path pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_path_49976)){
            _25899 = SEQ_PTR(_path_49976)->length;
    }
    else {
        _25899 = 1;
    }
    // SubProg expand_path pc: 127 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_path_49976);
    _25900 = (object)*(((s1_ptr)_2)->base + _25899);
    // SubProg expand_path pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 133 op: FIND_FROM (176)
    _25901 = find_from(_25900, _39SLASH_CHARS_20003, 1);
    _25900 = NOVALUE;
    // SubProg expand_path pc: 138 op: NOT (7)
    _25902 = (_25901 == 0);
    _25901 = NOVALUE;
    // SubProg expand_path pc: 141 op: NOP1 (159)
    // SubProg expand_path pc: 142 op: IF (20)
    if (_25902 == 0)
    {
        DeRef(_25902);
        _25902 = NOVALUE;
        goto L5; // [142] 154
    }
    else{
        DeRef(_25902);
        _25902 = NOVALUE;
    }
    // SubProg expand_path pc: 145 op: STARTLINE (58)

    /** pathopen.e:193			path &= SLASH*/
    // SubProg expand_path pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_path pc: 149 op: CONCAT (15)
    Append(&_path_49976, _path_49976, 47);
    // SubProg expand_path pc: 153 op: NOP1 (159)
L5: // addr: 154 pc: 153 sub: 49974 op: 159
    // SubProg expand_path pc: 154 op: STARTLINE (58)

    /** pathopen.e:196		return path*/
    // SubProg expand_path pc: 156 op: RETURNF (28)

// Exiting block BLOCK: expand_path

// block var prefix_49977
    DeRefDS(_prefix_49977);

// block var absolute_49978

// block var home_49982
    DeRefi(_home_49982);
    return _path_49976;
    // SubProg expand_path pc: 160 op: BADRETURNF (43)
    ;
}


void _46add_include_directory(object _path_50017)
{
// skipping _25907  name type: 0
// skipping _25906  name type: 0
    object _25905 = NOVALUE; // 50020 25905
// skipping _25904  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_include_directory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_include_directory pc: 3 op: STARTLINE (58)

    /** pathopen.e:200		path = expand_path( path, pwd )*/
    // SubProg add_include_directory pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 7 op: PROC (27)
    RefDS(_path_50017);
    RefDS(_46pwd_49876);
    _0 = _path_50017;
    _path_50017 = _46expand_path(_path_50017, _46pwd_49876);
    DeRefDS(_0);
    // SubProg add_include_directory pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg add_include_directory pc: 14 op: STARTLINE (58)

    /** pathopen.e:202		if not find( path, config_inc_paths ) then*/
    // SubProg add_include_directory pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 18 op: FIND_FROM (176)
    _25905 = find_from(_path_50017, _46config_inc_paths_49873, 1);
    // SubProg add_include_directory pc: 23 op: NOT_IFW (108)
    if (_25905 != 0)
    goto L1; // [23] 35
    _25905 = NOVALUE;
    // SubProg add_include_directory pc: 26 op: STARTLINE (58)

    /** pathopen.e:203			config_inc_paths = append( config_inc_paths, path )*/
    // SubProg add_include_directory pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_directory pc: 30 op: APPEND (35)
    RefDS(_path_50017);
    Append(&_46config_inc_paths_49873, _46config_inc_paths_49873, _path_50017);
    // SubProg add_include_directory pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 50015 op: 159
    // SubProg add_include_directory pc: 35 op: STARTLINE (58)

    /** pathopen.e:205	end procedure*/
    // SubProg add_include_directory pc: 37 op: RETURNP (29)

// Exiting block BLOCK: add_include_directory

// block var path_50017
    DeRefDS(_path_50017);
    return;
    // SubProg add_include_directory pc: 40 op: BADRETURNF (43)
    ;
}


object _46load_euphoria_config(object _file_50026)
{
    object _fn_50027 = NOVALUE;
    object _in_50028 = NOVALUE;
    object _spos_50029 = NOVALUE;
    object _epos_50030 = NOVALUE;
    object _conf_path_50031 = NOVALUE;
    object _new_args_50032 = NOVALUE;
    object _arg_50033 = NOVALUE;
    object _parm_50034 = NOVALUE;
    object _section_50035 = NOVALUE;
    object _needed_50134 = NOVALUE;
// skipping _26006  name type: 0
// skipping _26005  name type: 0
    object _26004 = NOVALUE; // 50196 26004
    object _26003 = NOVALUE; // 50195 26003
// skipping _26002  name type: 0
// skipping _26001  name type: 0
    object _26000 = NOVALUE; // 50190 26000
// skipping _25999  name type: 0
    object _25998 = NOVALUE; // 50188 25998
    object _25997 = NOVALUE; // 50186 25997
// skipping _25995  name type: 0
// skipping _25993  name type: 0
// skipping _25990  name type: 0
// skipping _25988  name type: 0
// skipping _25985  name type: 0
// skipping _25983  name type: 0
// skipping _25976  name type: 0
    object _25975 = NOVALUE; // 50132 25975
// skipping _25973  name type: 0
    object _25972 = NOVALUE; // 50126 25972
    object _25971 = NOVALUE; // 50125 25971
// skipping _25970  name type: 0
    object _25969 = NOVALUE; // 50123 25969
// skipping _25968  name type: 0
// skipping _25967  name type: 0
// skipping _25966  name type: 0
    object _25965 = NOVALUE; // 50117 25965
// skipping _25964  name type: 0
    object _25963 = NOVALUE; // 50114 25963
// skipping _25962  name type: 0
    object _25961 = NOVALUE; // 50111 25961
// skipping _25960  name type: 0
    object _25959 = NOVALUE; // 50108 25959
// skipping _25958  name type: 0
    object _25957 = NOVALUE; // 50105 25957
// skipping _25956  name type: 0
    object _25955 = NOVALUE; // 50101 25955
    object _25954 = NOVALUE; // 50100 25954
    object _25953 = NOVALUE; // 50099 25953
    object _25951 = NOVALUE; // 50097 25951
    object _25950 = NOVALUE; // 50096 25950
    object _25949 = NOVALUE; // 50095 25949
    object _25948 = NOVALUE; // 50094 25948
    object _25947 = NOVALUE; // 50093 25947
// skipping _25946  name type: 0
    object _25945 = NOVALUE; // 50090 25945
// skipping _25944  name type: 0
    object _25942 = NOVALUE; // 50087 25942
// skipping _25941  name type: 0
    object _25940 = NOVALUE; // 50084 25940
// skipping _25939  name type: 0
// skipping _25938  name type: 0
// skipping _25937  name type: 0
    object _25936 = NOVALUE; // 50079 25936
    object _25935 = NOVALUE; // 50078 25935
// skipping _25934  name type: 0
// skipping _25933  name type: 0
// skipping _25932  name type: 0
// skipping _25931  name type: 0
    object _25930 = NOVALUE; // 50071 25930
    object _25928 = NOVALUE; // 50069 25928
// skipping _25927  name type: 0
    object _25926 = NOVALUE; // 50066 25926
    object _25925 = NOVALUE; // 50064 25925
// skipping _25924  name type: 0
// skipping _25923  name type: 0
// skipping _25922  name type: 0
// skipping _25919  name type: 0
// skipping _25918  name type: 0
    object _25917 = NOVALUE; // 50054 25917
// skipping _25916  name type: 0
// skipping _25915  name type: 0
// skipping _25913  name type: 0
// skipping _25912  name type: 0
    object _25911 = NOVALUE; // 50043 25911
    object _25910 = NOVALUE; // 50042 25910
// skipping _25909  name type: 0
    object _25908 = NOVALUE; // 50038 25908
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg load_euphoria_config pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 3 op: STARTLINE (58)

    /** pathopen.e:213		sequence new_args = {}*/
    // SubProg load_euphoria_config pc: 5 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_new_args_50032);
    _new_args_50032 = _21958;
    // SubProg load_euphoria_config pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 10 op: STARTLINE (58)

    /** pathopen.e:219		if file_type(file) = FILETYPE_DIRECTORY then*/
    // SubProg load_euphoria_config pc: 12 op: PROC (27)
    RefDS(_file_50026);
    _25908 = _16file_type(_file_50026);
    // SubProg load_euphoria_config pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 18 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25908, 2)){
        DeRef(_25908);
        _25908 = NOVALUE;
        goto L1; // [18] 53
    }
    DeRef(_25908);
    _25908 = NOVALUE;
    // SubProg load_euphoria_config pc: 22 op: STARTLINE (58)

    /** pathopen.e:220			if file[$] != SLASH then*/
    // SubProg load_euphoria_config pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_file_50026)){
            _25910 = SEQ_PTR(_file_50026)->length;
    }
    else {
        _25910 = 1;
    }
    // SubProg load_euphoria_config pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_file_50026);
    _25911 = (object)*(((s1_ptr)_2)->base + _25910);
    // SubProg load_euphoria_config pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 33 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _25911, 47)){
        _25911 = NOVALUE;
        goto L2; // [33] 46
    }
    _25911 = NOVALUE;
    // SubProg load_euphoria_config pc: 37 op: STARTLINE (58)

    /** pathopen.e:221				file &= SLASH*/
    // SubProg load_euphoria_config pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 41 op: CONCAT (15)
    Append(&_file_50026, _file_50026, 47);
    // SubProg load_euphoria_config pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 46 op: STARTLINE (58)

    /** pathopen.e:223			file &= "eu.cfg"*/
    // SubProg load_euphoria_config pc: 48 op: CONCAT (15)
    Concat((object_ptr)&_file_50026, _file_50026, _25914);
    // SubProg load_euphoria_config pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 53 op: STARTLINE (58)

    /** pathopen.e:226		conf_path = canonical_path( file,,CORRECT )*/
    // SubProg load_euphoria_config pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 57 op: PROC (27)
    RefDS(_file_50026);
    _0 = _conf_path_50031;
    _conf_path_50031 = _16canonical_path(_file_50026, 0, 2);
    DeRef(_0);
    // SubProg load_euphoria_config pc: 63 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 65 op: STARTLINE (58)

    /** pathopen.e:229		if find(conf_path, seen_conf) != 0 then*/
    // SubProg load_euphoria_config pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 69 op: FIND_FROM (176)
    _25917 = find_from(_conf_path_50031, _46seen_conf_50023, 1);
    // SubProg load_euphoria_config pc: 74 op: NOTEQ_IFW_I (122)
    if (_25917 == 0)
    goto L3; // [74] 85
    // SubProg load_euphoria_config pc: 78 op: STARTLINE (58)

    /** pathopen.e:230			return {}*/
    // SubProg load_euphoria_config pc: 80 op: RETURNF (28)
    RefDS(_21958);

// Exiting block BLOCK: load_euphoria_config

// block var file_50026
    DeRefDS(_file_50026);

// block var fn_50027

// block var in_50028
    DeRefi(_in_50028);

// block var spos_50029

// block var epos_50030

// block var conf_path_50031
    DeRefDS(_conf_path_50031);

// block var new_args_50032
    DeRef(_new_args_50032);

// block var arg_50033
    DeRefi(_arg_50033);

// block var parm_50034
    DeRefi(_parm_50034);

// block var section_50035
    DeRef(_section_50035);
    return _21958;
    // SubProg load_euphoria_config pc: 84 op: NOP1 (159)
L3: // addr: 85 pc: 84 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 85 op: STARTLINE (58)

    /** pathopen.e:232		seen_conf = append(seen_conf, conf_path)*/
    // SubProg load_euphoria_config pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg load_euphoria_config pc: 89 op: APPEND (35)
    RefDS(_conf_path_50031);
    Append(&_46seen_conf_50023, _46seen_conf_50023, _conf_path_50031);
    // SubProg load_euphoria_config pc: 93 op: STARTLINE (58)

    /** pathopen.e:234		section = "all"*/
    // SubProg load_euphoria_config pc: 95 op: ASSIGN (18)
    RefDS(_25920);
    DeRef(_section_50035);
    _section_50035 = _25920;
    // SubProg load_euphoria_config pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 100 op: STARTLINE (58)

    /** pathopen.e:235		fn = open( conf_path, "r" )*/
    // SubProg load_euphoria_config pc: 102 op: OPEN (37)
    _fn_50027 = EOpen(_conf_path_50031, _25921, 0);
    // SubProg load_euphoria_config pc: 107 op: STARTLINE (58)

    /** pathopen.e:236		if fn = -1 then return {} end if*/
    // SubProg load_euphoria_config pc: 109 op: EQUALS_IFW_I (121)
    if (_fn_50027 != -1)
    goto L4; // [109] 118
    // SubProg load_euphoria_config pc: 113 op: RETURNF (28)
    RefDS(_21958);

// Exiting block BLOCK: load_euphoria_config

// block var file_50026
    DeRefDS(_file_50026);

// block var fn_50027

// block var in_50028
    DeRefi(_in_50028);

// block var spos_50029

// block var epos_50030

// block var conf_path_50031
    DeRefDS(_conf_path_50031);

// block var new_args_50032
    DeRef(_new_args_50032);

// block var arg_50033
    DeRefi(_arg_50033);

// block var parm_50034
    DeRefi(_parm_50034);

// block var section_50035
    DeRefDSi(_section_50035);
    return _21958;
    // SubProg load_euphoria_config pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 118 op: STARTLINE (58)

    /** pathopen.e:238		in = gets( fn )*/
    // SubProg load_euphoria_config pc: 120 op: GETS (17)
    DeRefi(_in_50028);
    _in_50028 = EGets(_fn_50027);
    // SubProg load_euphoria_config pc: 123 op: STARTLINE (58)

    /** pathopen.e:239		while sequence( in ) do*/
    // SubProg load_euphoria_config pc: 125 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 127 op: NOPWHILE (158)
L5: // addr: 128 pc: 127 sub: 50024 op: 158
    // SubProg load_euphoria_config pc: 128 op: IS_A_SEQUENCE (68)
    _25925 = IS_SEQUENCE(_in_50028);
    // SubProg load_euphoria_config pc: 131 op: WHILE (47)
    if (_25925 == 0)
    {
        _25925 = NOVALUE;
        goto L6; // [131] 768
    }
    else{
        _25925 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 134 op: STARTLINE (58)

    /** pathopen.e:241			spos = 1*/
    // SubProg load_euphoria_config pc: 136 op: ASSIGN_I (113)
    _spos_50029 = 1;
    // SubProg load_euphoria_config pc: 139 op: STARTLINE (58)

    /** pathopen.e:242			while spos <= length(in) do*/
    // SubProg load_euphoria_config pc: 141 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 143 op: NOPWHILE (158)
L7: // addr: 144 pc: 143 sub: 50024 op: 158
    // SubProg load_euphoria_config pc: 144 op: LENGTH (42)
    if (IS_SEQUENCE(_in_50028)){
            _25926 = SEQ_PTR(_in_50028)->length;
    }
    else {
        _25926 = 1;
    }
    // SubProg load_euphoria_config pc: 147 op: LESSEQ_IFW_I (123)
    if (_spos_50029 > _25926)
    goto L8; // [147] 182
    // SubProg load_euphoria_config pc: 151 op: STARTLINE (58)

    /** pathopen.e:243				if find( in[spos], "\n\r \t" ) = 0 then*/
    // SubProg load_euphoria_config pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_50028);
    _25928 = (object)*(((s1_ptr)_2)->base + _spos_50029);
    // SubProg load_euphoria_config pc: 157 op: FIND_FROM (176)
    _25930 = find_from(_25928, _25929, 1);
    _25928 = NOVALUE;
    // SubProg load_euphoria_config pc: 162 op: EQUALS_IFW_I (121)
    if (_25930 != 0)
    goto L9; // [162] 171
    // SubProg load_euphoria_config pc: 166 op: STARTLINE (58)

    /** pathopen.e:244					exit*/
    // SubProg load_euphoria_config pc: 168 op: EXIT (61)
    goto L8; // [168] 182
    // SubProg load_euphoria_config pc: 170 op: NOP1 (159)
L9: // addr: 171 pc: 170 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 171 op: STARTLINE (58)

    /** pathopen.e:246				spos += 1*/
    // SubProg load_euphoria_config pc: 173 op: PLUS1_I (117)
    _spos_50029 = _spos_50029 + 1;
    // SubProg load_euphoria_config pc: 177 op: STARTLINE (58)

    /** pathopen.e:247			end while*/
    // SubProg load_euphoria_config pc: 179 op: ENDWHILE (22)
    goto L7; // [179] 144
    // SubProg load_euphoria_config pc: 181 op: NOP1 (159)
L8: // addr: 182 pc: 181 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 182 op: STARTLINE (58)

    /** pathopen.e:249			epos = length(in)*/
    // SubProg load_euphoria_config pc: 184 op: LENGTH (42)
    if (IS_SEQUENCE(_in_50028)){
            _epos_50030 = SEQ_PTR(_in_50028)->length;
    }
    else {
        _epos_50030 = 1;
    }
    // SubProg load_euphoria_config pc: 187 op: STARTLINE (58)

    /** pathopen.e:250			while epos >= spos do*/
    // SubProg load_euphoria_config pc: 189 op: NOP2 (110)
    // SubProg load_euphoria_config pc: 191 op: NOPWHILE (158)
LA: // addr: 192 pc: 191 sub: 50024 op: 158
    // SubProg load_euphoria_config pc: 192 op: GREATEREQ_IFW_I (120)
    if (_epos_50030 < _spos_50029)
    goto LB; // [192] 227
    // SubProg load_euphoria_config pc: 196 op: STARTLINE (58)

    /** pathopen.e:251				if find( in[epos], "\n\r \t" ) = 0 then*/
    // SubProg load_euphoria_config pc: 198 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_50028);
    _25935 = (object)*(((s1_ptr)_2)->base + _epos_50030);
    // SubProg load_euphoria_config pc: 202 op: FIND_FROM (176)
    _25936 = find_from(_25935, _25929, 1);
    _25935 = NOVALUE;
    // SubProg load_euphoria_config pc: 207 op: EQUALS_IFW_I (121)
    if (_25936 != 0)
    goto LC; // [207] 216
    // SubProg load_euphoria_config pc: 211 op: STARTLINE (58)

    /** pathopen.e:252					exit*/
    // SubProg load_euphoria_config pc: 213 op: EXIT (61)
    goto LB; // [213] 227
    // SubProg load_euphoria_config pc: 215 op: NOP1 (159)
LC: // addr: 216 pc: 215 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 216 op: STARTLINE (58)

    /** pathopen.e:254				epos -= 1*/
    // SubProg load_euphoria_config pc: 218 op: MINUS_I (116)
    _epos_50030 = _epos_50030 - 1;
    // SubProg load_euphoria_config pc: 222 op: STARTLINE (58)

    /** pathopen.e:255			end while*/
    // SubProg load_euphoria_config pc: 224 op: ENDWHILE (22)
    goto LA; // [224] 192
    // SubProg load_euphoria_config pc: 226 op: NOP1 (159)
LB: // addr: 227 pc: 226 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 227 op: STARTLINE (58)

    /** pathopen.e:257			in = in[spos .. epos]		*/
    // SubProg load_euphoria_config pc: 229 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_in_50028;
    RHS_Slice(_in_50028, _spos_50029, _epos_50030);
    // SubProg load_euphoria_config pc: 234 op: STARTLINE (58)

    /** pathopen.e:260			arg = ""*/
    // SubProg load_euphoria_config pc: 236 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_arg_50033);
    _arg_50033 = _21958;
    // SubProg load_euphoria_config pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 241 op: STARTLINE (58)

    /** pathopen.e:261			parm = ""*/
    // SubProg load_euphoria_config pc: 243 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_parm_50034);
    _parm_50034 = _21958;
    // SubProg load_euphoria_config pc: 246 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 248 op: STARTLINE (58)

    /** pathopen.e:269			if length(in) > 0 then*/
    // SubProg load_euphoria_config pc: 250 op: LENGTH (42)
    if (IS_SEQUENCE(_in_50028)){
            _25940 = SEQ_PTR(_in_50028)->length;
    }
    else {
        _25940 = 1;
    }
    // SubProg load_euphoria_config pc: 253 op: GREATER_IFW_I (124)
    if (_25940 <= 0)
    goto LD; // [253] 477
    // SubProg load_euphoria_config pc: 257 op: STARTLINE (58)

    /** pathopen.e:270				if in[1] = '[' then*/
    // SubProg load_euphoria_config pc: 259 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_50028);
    _25942 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg load_euphoria_config pc: 263 op: EQUALS_IFW (104)
    if (_25942 != 91)
    goto LE; // [263] 354
    // SubProg load_euphoria_config pc: 267 op: STARTLINE (58)

    /** pathopen.e:272					section = in[2..$]*/
    // SubProg load_euphoria_config pc: 269 op: LENGTH (42)
    if (IS_SEQUENCE(_in_50028)){
            _25945 = SEQ_PTR(_in_50028)->length;
    }
    else {
        _25945 = 1;
    }
    // SubProg load_euphoria_config pc: 272 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_section_50035;
    RHS_Slice(_in_50028, 2, _25945);
    // SubProg load_euphoria_config pc: 277 op: STARTLINE (58)

    /** pathopen.e:273					if length(section) > 0 and section[$] = ']' then*/
    // SubProg load_euphoria_config pc: 279 op: LENGTH (42)
    if (IS_SEQUENCE(_section_50035)){
            _25947 = SEQ_PTR(_section_50035)->length;
    }
    else {
        _25947 = 1;
    }
    // SubProg load_euphoria_config pc: 282 op: GREATER (6)
    _25948 = (_25947 > 0);
    _25947 = NOVALUE;
    // SubProg load_euphoria_config pc: 286 op: SC1_AND_IF (146)
    if (_25948 == 0) {
        goto LF; // [286] 320
    }
    // SubProg load_euphoria_config pc: 290 op: LENGTH (42)
    if (IS_SEQUENCE(_section_50035)){
            _25950 = SEQ_PTR(_section_50035)->length;
    }
    else {
        _25950 = 1;
    }
    // SubProg load_euphoria_config pc: 293 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_section_50035);
    _25951 = (object)*(((s1_ptr)_2)->base + _25950);
    // SubProg load_euphoria_config pc: 297 op: EQUALS (3)
    _25953 = (_25951 == 93);
    _25951 = NOVALUE;
    // SubProg load_euphoria_config pc: 301 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 302 op: IF (20)
    if (_25953 == 0)
    {
        DeRef(_25953);
        _25953 = NOVALUE;
        goto LF; // [302] 320
    }
    else{
        DeRef(_25953);
        _25953 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 305 op: STARTLINE (58)

    /** pathopen.e:274						section = section[1..$-1]*/
    // SubProg load_euphoria_config pc: 307 op: LENGTH (42)
    if (IS_SEQUENCE(_section_50035)){
            _25954 = SEQ_PTR(_section_50035)->length;
    }
    else {
        _25954 = 1;
    }
    // SubProg load_euphoria_config pc: 310 op: MINUS (10)
    _25955 = _25954 - 1;
    _25954 = NOVALUE;
    // SubProg load_euphoria_config pc: 314 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_section_50035;
    RHS_Slice(_section_50035, 1, _25955);
    // SubProg load_euphoria_config pc: 319 op: NOP1 (159)
LF: // addr: 320 pc: 319 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 320 op: STARTLINE (58)

    /** pathopen.e:276					section = lower(trim(section))*/
    // SubProg load_euphoria_config pc: 322 op: PROC (27)
    RefDS(_section_50035);
    RefDS(_3069);
    _25957 = _20trim(_section_50035, _3069, 0);
    // SubProg load_euphoria_config pc: 328 op: PROC (27)
    _0 = _section_50035;
    _section_50035 = _20lower(_25957);
    DeRefDS(_0);
    _25957 = NOVALUE;
    // SubProg load_euphoria_config pc: 332 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 334 op: STARTLINE (58)

    /** pathopen.e:277					if length(section) = 0 then*/
    // SubProg load_euphoria_config pc: 336 op: LENGTH (42)
    if (IS_SEQUENCE(_section_50035)){
            _25959 = SEQ_PTR(_section_50035)->length;
    }
    else {
        _25959 = 1;
    }
    // SubProg load_euphoria_config pc: 339 op: EQUALS_IFW_I (121)
    if (_25959 != 0)
    goto L10; // [339] 476
    // SubProg load_euphoria_config pc: 343 op: STARTLINE (58)

    /** pathopen.e:278						section = "all"*/
    // SubProg load_euphoria_config pc: 345 op: ASSIGN (18)
    RefDS(_25920);
    DeRefDS(_section_50035);
    _section_50035 = _25920;
    // SubProg load_euphoria_config pc: 348 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 350 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 351 op: ELSE (23)
    goto L10; // [351] 476
    // SubProg load_euphoria_config pc: 353 op: NOP1 (159)
LE: // addr: 354 pc: 353 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 354 op: STARTLINE (58)

    /** pathopen.e:281				elsif length(in) > 2 then*/
    // SubProg load_euphoria_config pc: 356 op: LENGTH (42)
    if (IS_SEQUENCE(_in_50028)){
            _25961 = SEQ_PTR(_in_50028)->length;
    }
    else {
        _25961 = 1;
    }
    // SubProg load_euphoria_config pc: 359 op: GREATER_IFW_I (124)
    if (_25961 <= 2)
    goto L11; // [359] 461
    // SubProg load_euphoria_config pc: 363 op: STARTLINE (58)

    /** pathopen.e:282					if in[1] = '-' then*/
    // SubProg load_euphoria_config pc: 365 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_50028);
    _25963 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg load_euphoria_config pc: 369 op: EQUALS_IFW (104)
    if (_25963 != 45)
    goto L12; // [369] 443
    // SubProg load_euphoria_config pc: 373 op: STARTLINE (58)

    /** pathopen.e:283						if in[2] != '-' then*/
    // SubProg load_euphoria_config pc: 375 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_in_50028);
    _25965 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg load_euphoria_config pc: 379 op: NOTEQ_IFW (105)
    if (_25965 == 45)
    goto L10; // [379] 476
    // SubProg load_euphoria_config pc: 383 op: STARTLINE (58)

    /** pathopen.e:284							spos = find(' ', in)*/
    // SubProg load_euphoria_config pc: 385 op: FIND_FROM (176)
    _spos_50029 = find_from(32, _in_50028, 1);
    // SubProg load_euphoria_config pc: 390 op: STARTLINE (58)

    /** pathopen.e:285							if spos = 0 then*/
    // SubProg load_euphoria_config pc: 392 op: EQUALS_IFW_I (121)
    if (_spos_50029 != 0)
    goto L13; // [392] 413
    // SubProg load_euphoria_config pc: 396 op: STARTLINE (58)

    /** pathopen.e:286								arg = in*/
    // SubProg load_euphoria_config pc: 398 op: ASSIGN (18)
    Ref(_in_50028);
    DeRefi(_arg_50033);
    _arg_50033 = _in_50028;
    // SubProg load_euphoria_config pc: 401 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 403 op: STARTLINE (58)

    /** pathopen.e:287								parm = ""*/
    // SubProg load_euphoria_config pc: 405 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_parm_50034);
    _parm_50034 = _21958;
    // SubProg load_euphoria_config pc: 408 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 410 op: ELSE (23)
    goto L10; // [410] 476
    // SubProg load_euphoria_config pc: 412 op: NOP1 (159)
L13: // addr: 413 pc: 412 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 413 op: STARTLINE (58)

    /** pathopen.e:289								arg = in[1..spos - 1]*/
    // SubProg load_euphoria_config pc: 415 op: MINUS (10)
    _25969 = _spos_50029 - 1;
    // SubProg load_euphoria_config pc: 419 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_arg_50033;
    RHS_Slice(_in_50028, 1, _25969);
    // SubProg load_euphoria_config pc: 424 op: STARTLINE (58)

    /** pathopen.e:290								parm = in[spos + 1 .. $]*/
    // SubProg load_euphoria_config pc: 426 op: PLUS1 (93)
    _25971 = _spos_50029 + 1;
    if (_25971 > MAXINT){
        _25971 = NewDouble((eudouble)_25971);
    }
    // SubProg load_euphoria_config pc: 430 op: LENGTH (42)
    if (IS_SEQUENCE(_in_50028)){
            _25972 = SEQ_PTR(_in_50028)->length;
    }
    else {
        _25972 = 1;
    }
    // SubProg load_euphoria_config pc: 433 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_parm_50034;
    RHS_Slice(_in_50028, _25971, _25972);
    // SubProg load_euphoria_config pc: 438 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 439 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 440 op: ELSE (23)
    goto L10; // [440] 476
    // SubProg load_euphoria_config pc: 442 op: NOP1 (159)
L12: // addr: 443 pc: 442 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 443 op: STARTLINE (58)

    /** pathopen.e:294						arg = "-i"*/
    // SubProg load_euphoria_config pc: 445 op: ASSIGN (18)
    RefDS(_25974);
    DeRefi(_arg_50033);
    _arg_50033 = _25974;
    // SubProg load_euphoria_config pc: 448 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 450 op: STARTLINE (58)

    /** pathopen.e:295						parm = in*/
    // SubProg load_euphoria_config pc: 452 op: ASSIGN (18)
    Ref(_in_50028);
    DeRefi(_parm_50034);
    _parm_50034 = _in_50028;
    // SubProg load_euphoria_config pc: 455 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 457 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 458 op: ELSE (23)
    goto L10; // [458] 476
    // SubProg load_euphoria_config pc: 460 op: NOP1 (159)
L11: // addr: 461 pc: 460 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 461 op: STARTLINE (58)

    /** pathopen.e:298					arg = "-i"*/
    // SubProg load_euphoria_config pc: 463 op: ASSIGN (18)
    RefDS(_25974);
    DeRefi(_arg_50033);
    _arg_50033 = _25974;
    // SubProg load_euphoria_config pc: 466 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 468 op: STARTLINE (58)

    /** pathopen.e:299					parm = in*/
    // SubProg load_euphoria_config pc: 470 op: ASSIGN (18)
    Ref(_in_50028);
    DeRefi(_parm_50034);
    _parm_50034 = _in_50028;
    // SubProg load_euphoria_config pc: 473 op: SEQUENCE_CHECK (97)
    // SubProg load_euphoria_config pc: 475 op: NOP1 (159)
L10: // addr: 476 pc: 475 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 476 op: NOP1 (159)
LD: // addr: 477 pc: 476 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 477 op: STARTLINE (58)

    /** pathopen.e:303			if length(arg) > 0 then*/
    // SubProg load_euphoria_config pc: 479 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_50033)){
            _25975 = SEQ_PTR(_arg_50033)->length;
    }
    else {
        _25975 = 1;
    }
    // SubProg load_euphoria_config pc: 482 op: GREATER_IFW_I (124)
    if (_25975 <= 0)
    goto L14; // [482] 756
    // SubProg load_euphoria_config pc: 486 op: STARTLINE (58)

    /** pathopen.e:304				integer needed = 0*/
    // SubProg load_euphoria_config pc: 488 op: ASSIGN_I (113)
    _needed_50134 = 0;
    // SubProg load_euphoria_config pc: 491 op: STARTLINE (58)

    /** pathopen.e:305				switch section do*/
    // SubProg load_euphoria_config pc: 493 op: SWITCH (185)
    _1 = find(_section_50035, _25977);
    switch ( _1 ){ 
        // SubProg load_euphoria_config pc: 498 op: STARTLINE (58)

        /** pathopen.e:306					case "all" then*/
        // SubProg load_euphoria_config pc: 500 op: CASE (186)
        case 1:
        // SubProg load_euphoria_config pc: 502 op: STARTLINE (58)

        /** pathopen.e:307						needed = 1*/
        // SubProg load_euphoria_config pc: 504 op: ASSIGN_I (113)
        _needed_50134 = 1;
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
        _needed_50134 = 0;
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
        _needed_50134 = _39TUNIX_19987;
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
        _needed_50134 = _5TRANSLATE_12097;
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
        _needed_50134 = (_5TRANSLATE_12097 != 0 && 0 != 0);
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
        _needed_50134 = (_5TRANSLATE_12097 != 0 && _39TUNIX_19987 != 0);
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
        _needed_50134 = _5INTERPRET_12094;
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
        _needed_50134 = (_5INTERPRET_12094 != 0 && 0 != 0);
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
        _needed_50134 = (_5INTERPRET_12094 != 0 && _39TUNIX_19987 != 0);
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
        _needed_50134 = _5BIND_12100;
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
        _needed_50134 = (_5BIND_12100 != 0 && 0 != 0);
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
        _needed_50134 = (_5BIND_12100 != 0 && _39TUNIX_19987 != 0);
        // SubProg load_euphoria_config pc: 688 op: INTEGER_CHECK (96)
        // SubProg load_euphoria_config pc: 690 op: NOPSWITCH (187)
    ;}L15: // addr: 691 pc: 690 sub: 50024 op: 187
    // SubProg load_euphoria_config pc: 691 op: STARTLINE (58)

    /** pathopen.e:344				if needed then*/
    // SubProg load_euphoria_config pc: 693 op: IF (20)
    if (_needed_50134 == 0)
    {
        goto L16; // [693] 755
    }
    else{
    }
    // SubProg load_euphoria_config pc: 696 op: STARTLINE (58)

    /** pathopen.e:345					if equal(arg, "-c") then*/
    // SubProg load_euphoria_config pc: 698 op: EQUAL (153)
    if (_arg_50033 == _25996)
    _25997 = 1;
    else if (IS_ATOM_INT(_arg_50033) && IS_ATOM_INT(_25996))
    _25997 = 0;
    else
    _25997 = (compare(_arg_50033, _25996) == 0);
    // SubProg load_euphoria_config pc: 702 op: IF (20)
    if (_25997 == 0)
    {
        _25997 = NOVALUE;
        goto L17; // [702] 728
    }
    else{
        _25997 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 705 op: STARTLINE (58)

    /** pathopen.e:346						if length(parm) > 0 then*/
    // SubProg load_euphoria_config pc: 707 op: LENGTH (42)
    if (IS_SEQUENCE(_parm_50034)){
            _25998 = SEQ_PTR(_parm_50034)->length;
    }
    else {
        _25998 = 1;
    }
    // SubProg load_euphoria_config pc: 710 op: GREATER_IFW_I (124)
    if (_25998 <= 0)
    goto L18; // [710] 754
    // SubProg load_euphoria_config pc: 714 op: STARTLINE (58)

    /** pathopen.e:347							new_args &= load_euphoria_config(parm)*/
    // SubProg load_euphoria_config pc: 716 op: PROC (27)
    RefDS(_parm_50034);
    _26000 = _46load_euphoria_config(_parm_50034);
    // SubProg load_euphoria_config pc: 720 op: CONCAT (15)
    if (IS_SEQUENCE(_new_args_50032) && IS_ATOM(_26000)) {
        Ref(_26000);
        Append(&_new_args_50032, _new_args_50032, _26000);
    }
    else if (IS_ATOM(_new_args_50032) && IS_SEQUENCE(_26000)) {
    }
    else {
        Concat((object_ptr)&_new_args_50032, _new_args_50032, _26000);
    }
    DeRef(_26000);
    _26000 = NOVALUE;
    // SubProg load_euphoria_config pc: 724 op: NOP1 (159)
    // SubProg load_euphoria_config pc: 725 op: ELSE (23)
    goto L18; // [725] 754
    // SubProg load_euphoria_config pc: 727 op: NOP1 (159)
L17: // addr: 728 pc: 727 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 728 op: STARTLINE (58)

    /** pathopen.e:350						new_args = append(new_args, arg)*/
    // SubProg load_euphoria_config pc: 730 op: APPEND (35)
    RefDS(_arg_50033);
    Append(&_new_args_50032, _new_args_50032, _arg_50033);
    // SubProg load_euphoria_config pc: 734 op: STARTLINE (58)

    /** pathopen.e:351						if length(parm > 0) then*/
    // SubProg load_euphoria_config pc: 736 op: GREATER (6)
    _26003 = binary_op(GREATER, _parm_50034, 0);
    // SubProg load_euphoria_config pc: 740 op: LENGTH (42)
    if (IS_SEQUENCE(_26003)){
            _26004 = SEQ_PTR(_26003)->length;
    }
    else {
        _26004 = 1;
    }
    DeRefDS(_26003);
    _26003 = NOVALUE;
    // SubProg load_euphoria_config pc: 743 op: IF (20)
    if (_26004 == 0)
    {
        _26004 = NOVALUE;
        goto L19; // [743] 753
    }
    else{
        _26004 = NOVALUE;
    }
    // SubProg load_euphoria_config pc: 746 op: STARTLINE (58)

    /** pathopen.e:352							new_args = append(new_args, parm)*/
    // SubProg load_euphoria_config pc: 748 op: APPEND (35)
    RefDS(_parm_50034);
    Append(&_new_args_50032, _new_args_50032, _parm_50034);
    // SubProg load_euphoria_config pc: 752 op: NOP1 (159)
L19: // addr: 753 pc: 752 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 753 op: NOP1 (159)
L18: // addr: 754 pc: 753 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 754 op: NOP1 (159)
L16: // addr: 755 pc: 754 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 755 op: NOP1 (159)
L14: // addr: 756 pc: 755 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 756 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var needed_50134
    // SubProg load_euphoria_config pc: 758 op: STARTLINE (58)

    /** pathopen.e:358			in = gets( fn )*/
    // SubProg load_euphoria_config pc: 760 op: GETS (17)
    DeRefi(_in_50028);
    _in_50028 = EGets(_fn_50027);
    // SubProg load_euphoria_config pc: 763 op: STARTLINE (58)

    /** pathopen.e:359		end while*/
    // SubProg load_euphoria_config pc: 765 op: ENDWHILE (22)
    goto L5; // [765] 128
    // SubProg load_euphoria_config pc: 767 op: NOP1 (159)
L6: // addr: 768 pc: 767 sub: 50024 op: 159
    // SubProg load_euphoria_config pc: 768 op: STARTLINE (58)

    /** pathopen.e:360		close(fn)*/
    // SubProg load_euphoria_config pc: 770 op: CLOSE (86)
    EClose(_fn_50027);
    // SubProg load_euphoria_config pc: 772 op: STARTLINE (58)

    /** pathopen.e:362		return new_args*/
    // SubProg load_euphoria_config pc: 774 op: RETURNF (28)

// Exiting block BLOCK: load_euphoria_config

// block var file_50026
    DeRefDS(_file_50026);

// block var fn_50027

// block var in_50028
    DeRefi(_in_50028);

// block var spos_50029

// block var epos_50030

// block var conf_path_50031
    DeRef(_conf_path_50031);

// block var arg_50033
    DeRefi(_arg_50033);

// block var parm_50034
    DeRefi(_parm_50034);

// block var section_50035
    DeRef(_section_50035);
    DeRef(_25948);
    _25948 = NOVALUE;
    _25942 = NOVALUE;
    _25965 = NOVALUE;
    _25963 = NOVALUE;
    _26003 = NOVALUE;
    DeRef(_25969);
    _25969 = NOVALUE;
    DeRef(_25955);
    _25955 = NOVALUE;
    DeRef(_25971);
    _25971 = NOVALUE;
    return _new_args_50032;
    // SubProg load_euphoria_config pc: 778 op: BADRETURNF (43)
    ;
}


object _46GetDefaultArgs(object _user_files_50201)
{
    object _env_50202 = NOVALUE;
    object _default_args_50203 = NOVALUE;
    object _conf_file_50204 = NOVALUE;
    object _cmd_options_50206 = NOVALUE;
    object _user_config_50212 = NOVALUE;
// skipping _26040  name type: 0
    object _26039 = NOVALUE; // 50252 26039
    object _26038 = NOVALUE; // 50251 26038
    object _26037 = NOVALUE; // 50249 26037
// skipping _26036  name type: 0
// skipping _26030  name type: 0
    object _26029 = NOVALUE; // 50239 26029
    object _26028 = NOVALUE; // 50238 26028
    object _26026 = NOVALUE; // 50235 26026
// skipping _26025  name type: 0
// skipping _26024  name type: 0
    object _26023 = NOVALUE; // 50231 26023
    object _26022 = NOVALUE; // 50230 26022
// skipping _26020  name type: 0
    object _26019 = NOVALUE; // 50226 26019
    object _26018 = NOVALUE; // 50225 26018
// skipping _26017  name type: 0
    object _26016 = NOVALUE; // 50222 26016
// skipping _26015  name type: 0
    object _26014 = NOVALUE; // 50220 26014
    object _26013 = NOVALUE; // 50219 26013
// skipping _26011  name type: 0
// skipping _26010  name type: 0
    object _26009 = NOVALUE; // 50213 26009
    object _26008 = NOVALUE; // 50211 26008
// skipping _26007  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetDefaultArgs pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 3 op: STARTLINE (58)

    /** pathopen.e:367		sequence default_args = {}*/
    // SubProg GetDefaultArgs pc: 5 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_default_args_50203);
    _default_args_50203 = _21958;
    // SubProg GetDefaultArgs pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 10 op: STARTLINE (58)

    /** pathopen.e:368		sequence conf_file = "eu.cfg"*/
    // SubProg GetDefaultArgs pc: 12 op: ASSIGN (18)
    RefDS(_25914);
    DeRefi(_conf_file_50204);
    _conf_file_50204 = _25914;
    // SubProg GetDefaultArgs pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 17 op: STARTLINE (58)

    /** pathopen.e:370		if loaded_config_inc_paths then return "" end if*/
    // SubProg GetDefaultArgs pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetDefaultArgs pc: 21 op: IF (20)
    if (_46loaded_config_inc_paths_49874 == 0)
    {
        goto L1; // [21] 29
    }
    else{
    }
    // SubProg GetDefaultArgs pc: 24 op: RETURNF (28)
    RefDS(_21958);

// Exiting block BLOCK: GetDefaultArgs

// block var user_files_50201
    DeRefDS(_user_files_50201);

// block var env_50202
    DeRef(_env_50202);

// block var default_args_50203
    DeRefDS(_default_args_50203);

// block var conf_file_50204
    DeRefDSi(_conf_file_50204);

// block var cmd_options_50206
    DeRef(_cmd_options_50206);
    return _21958;
    // SubProg GetDefaultArgs pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 50199 op: 159
    // SubProg GetDefaultArgs pc: 29 op: STARTLINE (58)

    /** pathopen.e:371		loaded_config_inc_paths = 1*/
    // SubProg GetDefaultArgs pc: 31 op: ASSIGN_I (113)
    _46loaded_config_inc_paths_49874 = 1;
    // SubProg GetDefaultArgs pc: 34 op: STARTLINE (58)

    /** pathopen.e:380		sequence cmd_options = get_options()*/
    // SubProg GetDefaultArgs pc: 36 op: PROC (27)
    _0 = _cmd_options_50206;
    _cmd_options_50206 = _47get_options();
    DeRef(_0);
    // SubProg GetDefaultArgs pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 41 op: STARTLINE (58)

    /** pathopen.e:382		default_args = {}*/
    // SubProg GetDefaultArgs pc: 43 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_default_args_50203);
    _default_args_50203 = _21958;
    // SubProg GetDefaultArgs pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 48 op: STARTLINE (58)

    /** pathopen.e:385		for i = 1 to length( user_files ) do*/
    // SubProg GetDefaultArgs pc: 50 op: LENGTH (42)
    if (IS_SEQUENCE(_user_files_50201)){
            _26008 = SEQ_PTR(_user_files_50201)->length;
    }
    else {
        _26008 = 1;
    }
    // SubProg GetDefaultArgs pc: 53 op: FOR_I (125)
    {
        object _i_50210;
        _i_50210 = 1;
L2: // addr: 60 pc: 53 sub: 50199 op: 125
        if (_i_50210 > _26008){
            goto L3; // [53] 92
        }
        // SubProg GetDefaultArgs pc: 60 op: STARTLINE (58)

        /** pathopen.e:386			sequence user_config = load_euphoria_config( user_files[i] )*/
        // SubProg GetDefaultArgs pc: 62 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_user_files_50201);
        _26009 = (object)*(((s1_ptr)_2)->base + _i_50210);
        // SubProg GetDefaultArgs pc: 66 op: PROC (27)
        Ref(_26009);
        _0 = _user_config_50212;
        _user_config_50212 = _46load_euphoria_config(_26009);
        DeRef(_0);
        _26009 = NOVALUE;
        // SubProg GetDefaultArgs pc: 70 op: SEQUENCE_CHECK (97)
        // SubProg GetDefaultArgs pc: 72 op: STARTLINE (58)

        /** pathopen.e:387			default_args = merge_parameters( user_config, default_args, cmd_options, 1 )*/
        // SubProg GetDefaultArgs pc: 74 op: PROC (27)
        RefDS(_user_config_50212);
        RefDS(_default_args_50203);
        RefDS(_cmd_options_50206);
        _0 = _default_args_50203;
        _default_args_50203 = _47merge_parameters(_user_config_50212, _default_args_50203, _cmd_options_50206, 1);
        DeRefDS(_0);
        // SubProg GetDefaultArgs pc: 81 op: SEQUENCE_CHECK (97)
        // SubProg GetDefaultArgs pc: 83 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var user_config_50212
        DeRefDS(_user_config_50212);
        _user_config_50212 = NOVALUE;
        // SubProg GetDefaultArgs pc: 85 op: STARTLINE (58)

        /** pathopen.e:388		end for*/
        // SubProg GetDefaultArgs pc: 87 op: ENDFOR_INT_UP1 (54)
        _i_50210 = _i_50210 + 1;
        goto L2; // [87] 60
L3: // addr: 92 pc: 87 sub: 50199 op: 54
        ;
    }
    // SubProg GetDefaultArgs pc: 92 op: STARTLINE (58)

    /** pathopen.e:391		default_args = merge_parameters( load_euphoria_config("./" & conf_file), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 94 op: CONCAT (15)
    Concat((object_ptr)&_26013, _26012, _conf_file_50204);
    // SubProg GetDefaultArgs pc: 98 op: PROC (27)
    _26014 = _46load_euphoria_config(_26013);
    _26013 = NOVALUE;
    // SubProg GetDefaultArgs pc: 102 op: PROC (27)
    RefDS(_default_args_50203);
    RefDS(_cmd_options_50206);
    _0 = _default_args_50203;
    _default_args_50203 = _47merge_parameters(_26014, _default_args_50203, _cmd_options_50206, 1);
    DeRefDS(_0);
    _26014 = NOVALUE;
    // SubProg GetDefaultArgs pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 111 op: STARTLINE (58)

    /** pathopen.e:394		env = strip_file_from_path( exe_path() )*/
    // SubProg GetDefaultArgs pc: 113 op: PROC (27)
    _26016 = _46exe_path();
    // SubProg GetDefaultArgs pc: 116 op: PROC (27)
    _0 = _env_50202;
    _env_50202 = _46strip_file_from_path(_26016);
    DeRef(_0);
    _26016 = NOVALUE;
    // SubProg GetDefaultArgs pc: 120 op: STARTLINE (58)

    /** pathopen.e:395		default_args = merge_parameters( load_euphoria_config( env & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 122 op: CONCAT (15)
    if (IS_SEQUENCE(_env_50202) && IS_ATOM(_conf_file_50204)) {
    }
    else if (IS_ATOM(_env_50202) && IS_SEQUENCE(_conf_file_50204)) {
        Ref(_env_50202);
        Prepend(&_26018, _conf_file_50204, _env_50202);
    }
    else {
        Concat((object_ptr)&_26018, _env_50202, _conf_file_50204);
    }
    // SubProg GetDefaultArgs pc: 126 op: PROC (27)
    _26019 = _46load_euphoria_config(_26018);
    _26018 = NOVALUE;
    // SubProg GetDefaultArgs pc: 130 op: PROC (27)
    RefDS(_default_args_50203);
    RefDS(_cmd_options_50206);
    _0 = _default_args_50203;
    _default_args_50203 = _47merge_parameters(_26019, _default_args_50203, _cmd_options_50206, 1);
    DeRefDS(_0);
    _26019 = NOVALUE;
    // SubProg GetDefaultArgs pc: 137 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 139 op: STARTLINE (58)

    /** pathopen.e:398		ifdef UNIX then*/
    // SubProg GetDefaultArgs pc: 141 op: STARTLINE (58)

    /** pathopen.e:399			default_args = merge_parameters( load_euphoria_config( "/etc/euphoria/" & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 143 op: CONCAT (15)
    Concat((object_ptr)&_26022, _26021, _conf_file_50204);
    // SubProg GetDefaultArgs pc: 147 op: PROC (27)
    _26023 = _46load_euphoria_config(_26022);
    _26022 = NOVALUE;
    // SubProg GetDefaultArgs pc: 151 op: PROC (27)
    RefDS(_default_args_50203);
    RefDS(_cmd_options_50206);
    _0 = _default_args_50203;
    _default_args_50203 = _47merge_parameters(_26023, _default_args_50203, _cmd_options_50206, 1);
    DeRefDS(_0);
    _26023 = NOVALUE;
    // SubProg GetDefaultArgs pc: 158 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 160 op: STARTLINE (58)

    /** pathopen.e:401			env = getenv( "HOME" )*/
    // SubProg GetDefaultArgs pc: 162 op: GETENV (91)
    DeRef(_env_50202);
    _env_50202 = EGetEnv(_25885);
    // SubProg GetDefaultArgs pc: 165 op: STARTLINE (58)

    /** pathopen.e:402			if sequence(env) then*/
    // SubProg GetDefaultArgs pc: 167 op: IS_A_SEQUENCE (68)
    _26026 = IS_SEQUENCE(_env_50202);
    // SubProg GetDefaultArgs pc: 170 op: IF (20)
    if (_26026 == 0)
    {
        _26026 = NOVALUE;
        goto L4; // [170] 195
    }
    else{
        _26026 = NOVALUE;
    }
    // SubProg GetDefaultArgs pc: 173 op: STARTLINE (58)

    /** pathopen.e:403				default_args = merge_parameters( load_euphoria_config( env & "/." & conf_file ), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 175 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50204;
        concat_list[1] = _26027;
        concat_list[2] = _env_50202;
        Concat_N((object_ptr)&_26028, concat_list, 3);
    }
    // SubProg GetDefaultArgs pc: 181 op: PROC (27)
    _26029 = _46load_euphoria_config(_26028);
    _26028 = NOVALUE;
    // SubProg GetDefaultArgs pc: 185 op: PROC (27)
    RefDS(_default_args_50203);
    RefDS(_cmd_options_50206);
    _0 = _default_args_50203;
    _default_args_50203 = _47merge_parameters(_26029, _default_args_50203, _cmd_options_50206, 1);
    DeRefDS(_0);
    _26029 = NOVALUE;
    // SubProg GetDefaultArgs pc: 192 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 194 op: NOP1 (159)
L4: // addr: 195 pc: 194 sub: 50199 op: 159
    // SubProg GetDefaultArgs pc: 195 op: STARTLINE (58)

    /** pathopen.e:427		env = get_eudir()*/
    // SubProg GetDefaultArgs pc: 197 op: PROC (27)
    _0 = _env_50202;
    _env_50202 = _7get_eudir();
    DeRef(_0);
    // SubProg GetDefaultArgs pc: 200 op: STARTLINE (58)

    /** pathopen.e:428		if sequence(env) then*/
    // SubProg GetDefaultArgs pc: 202 op: IS_A_SEQUENCE (68)
    _26037 = IS_SEQUENCE(_env_50202);
    // SubProg GetDefaultArgs pc: 205 op: IF (20)
    if (_26037 == 0)
    {
        _26037 = NOVALUE;
        goto L5; // [205] 230
    }
    else{
        _26037 = NOVALUE;
    }
    // SubProg GetDefaultArgs pc: 208 op: STARTLINE (58)

    /** pathopen.e:429			default_args = merge_parameters( load_euphoria_config(env & "/" & conf_file), default_args, cmd_options, 1 )*/
    // SubProg GetDefaultArgs pc: 210 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50204;
        concat_list[1] = _23562;
        concat_list[2] = _env_50202;
        Concat_N((object_ptr)&_26038, concat_list, 3);
    }
    // SubProg GetDefaultArgs pc: 216 op: PROC (27)
    _26039 = _46load_euphoria_config(_26038);
    _26038 = NOVALUE;
    // SubProg GetDefaultArgs pc: 220 op: PROC (27)
    RefDS(_default_args_50203);
    RefDS(_cmd_options_50206);
    _0 = _default_args_50203;
    _default_args_50203 = _47merge_parameters(_26039, _default_args_50203, _cmd_options_50206, 1);
    DeRefDS(_0);
    _26039 = NOVALUE;
    // SubProg GetDefaultArgs pc: 227 op: SEQUENCE_CHECK (97)
    // SubProg GetDefaultArgs pc: 229 op: NOP1 (159)
L5: // addr: 230 pc: 229 sub: 50199 op: 159
    // SubProg GetDefaultArgs pc: 230 op: STARTLINE (58)

    /** pathopen.e:432		return default_args*/
    // SubProg GetDefaultArgs pc: 232 op: RETURNF (28)

// Exiting block BLOCK: GetDefaultArgs

// block var user_files_50201
    DeRefDS(_user_files_50201);

// block var env_50202
    DeRef(_env_50202);

// block var conf_file_50204
    DeRefi(_conf_file_50204);

// block var cmd_options_50206
    DeRef(_cmd_options_50206);
    return _default_args_50203;
    // SubProg GetDefaultArgs pc: 236 op: BADRETURNF (43)
    ;
}


object _46ConfPath(object _file_name_50256)
{
    object _file_path_50257 = NOVALUE;
    object _try_50258 = NOVALUE;
    object _26046 = NOVALUE; // 50267 26046
// skipping _26045  name type: 0
// skipping _26044  name type: 0
// skipping _26043  name type: 0
    object _26042 = NOVALUE; // 50262 26042
    object _26041 = NOVALUE; // 50261 26041
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ConfPath pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ConfPath pc: 3 op: STARTLINE (58)

    /** pathopen.e:440		for i = 1 to length(config_inc_paths) do*/
    // SubProg ConfPath pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ConfPath pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_46config_inc_paths_49873)){
            _26041 = SEQ_PTR(_46config_inc_paths_49873)->length;
    }
    else {
        _26041 = 1;
    }
    // SubProg ConfPath pc: 10 op: FOR_I (125)
    {
        object _i_50260;
        _i_50260 = 1;
L1: // addr: 17 pc: 10 sub: 50254 op: 125
        if (_i_50260 > _26041){
            goto L2; // [10] 60
        }
        // SubProg ConfPath pc: 17 op: STARTLINE (58)

        /** pathopen.e:441			file_path = config_inc_paths[i] & file_name*/
        // SubProg ConfPath pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg ConfPath pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46config_inc_paths_49873);
        _26042 = (object)*(((s1_ptr)_2)->base + _i_50260);
        // SubProg ConfPath pc: 25 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50257, _26042, _file_name_50256);
        _26042 = NOVALUE;
        _26042 = NOVALUE;
        // SubProg ConfPath pc: 29 op: STARTLINE (58)

        /** pathopen.e:442			try = open( file_path, "r" )*/
        // SubProg ConfPath pc: 31 op: OPEN (37)
        _try_50258 = EOpen(_file_path_50257, _25921, 0);
        // SubProg ConfPath pc: 36 op: STARTLINE (58)

        /** pathopen.e:443			if try != -1 then*/
        // SubProg ConfPath pc: 38 op: NOTEQ_IFW_I (122)
        if (_try_50258 == -1)
        goto L3; // [38] 53
        // SubProg ConfPath pc: 42 op: STARTLINE (58)

        /** pathopen.e:444				return {file_path, try}*/
        // SubProg ConfPath pc: 44 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50257);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50257;
        ((intptr_t *)_2)[2] = _try_50258;
        _26046 = MAKE_SEQ(_1);
        // SubProg ConfPath pc: 48 op: RETURNF (28)

// Exiting block BLOCK: ConfPath

// block var file_name_50256
        DeRefDS(_file_name_50256);

// block var file_path_50257
        DeRefDS(_file_path_50257);

// block var try_50258
        return _26046;
        // SubProg ConfPath pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 50254 op: 159
        // SubProg ConfPath pc: 53 op: STARTLINE (58)

        /** pathopen.e:446		end for*/
        // SubProg ConfPath pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_50260 = _i_50260 + 1;
        goto L1; // [55] 17
L2: // addr: 60 pc: 55 sub: 50254 op: 54
        ;
    }
    // SubProg ConfPath pc: 60 op: STARTLINE (58)

    /** pathopen.e:447		return -1*/
    // SubProg ConfPath pc: 62 op: RETURNF (28)

// Exiting block BLOCK: ConfPath

// block var file_name_50256
    DeRefDS(_file_name_50256);

// block var file_path_50257
    DeRef(_file_path_50257);

// block var try_50258
    DeRef(_26046);
    _26046 = NOVALUE;
    return -1;
    // SubProg ConfPath pc: 66 op: BADRETURNF (43)
    ;
}


object _46ScanPath(object _file_name_50270, object _env_50271, object _flag_50272)
{
    object _inc_path_50273 = NOVALUE;
    object _full_path_50274 = NOVALUE;
    object _file_path_50275 = NOVALUE;
    object _strings_50276 = NOVALUE;
    object _end_path_50277 = NOVALUE;
    object _start_path_50278 = NOVALUE;
    object _try_50279 = NOVALUE;
    object _use_cache_50280 = NOVALUE;
    object _pos_50281 = NOVALUE;
    object _26094 = NOVALUE; // 50351 26094
    object _26093 = NOVALUE; // 50350 26093
    object _26092 = NOVALUE; // 50349 26092
    object _26091 = NOVALUE; // 50348 26091
    object _26090 = NOVALUE; // 50347 26090
    object _26089 = NOVALUE; // 50346 26089
    object _26088 = NOVALUE; // 50345 26088
    object _26087 = NOVALUE; // 50343 26087
// skipping _26086  name type: 0
// skipping _26085  name type: 0
// skipping _26084  name type: 0
    object _26083 = NOVALUE; // 50337 26083
    object _26082 = NOVALUE; // 50336 26082
    object _26081 = NOVALUE; // 50335 26081
    object _26080 = NOVALUE; // 50334 26080
    object _26079 = NOVALUE; // 50333 26079
    object _26078 = NOVALUE; // 50332 26078
// skipping _26077  name type: 0
    object _26076 = NOVALUE; // 50330 26076
// skipping _26075  name type: 0
    object _26074 = NOVALUE; // 50327 26074
    object _26073 = NOVALUE; // 50326 26073
    object _26071 = NOVALUE; // 50323 26071
    object _26070 = NOVALUE; // 50322 26070
    object _26069 = NOVALUE; // 50321 26069
// skipping _26068  name type: 0
// skipping _26067  name type: 0
    object _26066 = NOVALUE; // 50316 26066
    object _26065 = NOVALUE; // 50314 26065
// skipping _26064  name type: 0
    object _26063 = NOVALUE; // 50309 26063
    object _26062 = NOVALUE; // 50307 26062
    object _26061 = NOVALUE; // 50305 26061
// skipping _26060  name type: 0
// skipping _26059  name type: 0
// skipping _26058  name type: 0
// skipping _26057  name type: 0
    object _26056 = NOVALUE; // 50298 26056
// skipping _26055  name type: 0
// skipping _26054  name type: 0
// skipping _26053  name type: 0
// skipping _26052  name type: 0
// skipping _26051  name type: 0
// skipping _26050  name type: 0
// skipping _26049  name type: 0
    object _26048 = NOVALUE; // 50284 26048
// skipping _26047  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ScanPath pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 5 op: INTEGER_CHECK (96)
    // SubProg ScanPath pc: 7 op: STARTLINE (58)

    /** pathopen.e:459		inc_path = getenv(env)*/
    // SubProg ScanPath pc: 9 op: GETENV (91)
    DeRefi(_inc_path_50273);
    _inc_path_50273 = EGetEnv(_env_50271);
    // SubProg ScanPath pc: 12 op: STARTLINE (58)

    /** pathopen.e:460		if compare(inc_path,{})!=1 then -- nothing to do, just fail*/
    // SubProg ScanPath pc: 14 op: COMPARE (76)
    if (IS_ATOM_INT(_inc_path_50273) && IS_ATOM_INT(_21958)){
        _26048 = (_inc_path_50273 < _21958) ? -1 : (_inc_path_50273 > _21958);
    }
    else{
        _26048 = compare(_inc_path_50273, _21958);
    }
    // SubProg ScanPath pc: 18 op: NOTEQ_IFW_I (122)
    if (_26048 == 1)
    goto L1; // [18] 29
    // SubProg ScanPath pc: 22 op: STARTLINE (58)

    /** pathopen.e:461			return -1*/
    // SubProg ScanPath pc: 24 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50270
    DeRefDS(_file_name_50270);

// block var env_50271
    DeRefDSi(_env_50271);

// block var flag_50272

// block var inc_path_50273
    DeRefi(_inc_path_50273);

// block var full_path_50274
    DeRef(_full_path_50274);

// block var file_path_50275
    DeRef(_file_path_50275);

// block var strings_50276
    DeRef(_strings_50276);

// block var end_path_50277

// block var start_path_50278

// block var try_50279

// block var use_cache_50280

// block var pos_50281
    return -1;
    // SubProg ScanPath pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 50268 op: 159
    // SubProg ScanPath pc: 29 op: STARTLINE (58)

    /** pathopen.e:464		num_var = find(env,cache_vars)*/
    // SubProg ScanPath pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 33 op: FIND_FROM (176)
    _46num_var_49864 = find_from(_env_50271, _46cache_vars_49865, 1);
    // SubProg ScanPath pc: 38 op: STARTLINE (58)

    /** pathopen.e:465		use_cache = check_cache(env,inc_path)*/
    // SubProg ScanPath pc: 40 op: PROC (27)
    RefDS(_env_50271);
    Ref(_inc_path_50273);
    _use_cache_50280 = _46check_cache(_env_50271, _inc_path_50273);
    // SubProg ScanPath pc: 45 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_use_cache_50280)) {
        _1 = (object)(DBL_PTR(_use_cache_50280)->dbl);
        DeRefDS(_use_cache_50280);
        _use_cache_50280 = _1;
    }
    // SubProg ScanPath pc: 47 op: STARTLINE (58)

    /** pathopen.e:466		inc_path = append(inc_path, PATH_SEPARATOR)*/
    // SubProg ScanPath pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 51 op: APPEND (35)
    Append(&_inc_path_50273, _inc_path_50273, 58);
    // SubProg ScanPath pc: 55 op: STARTLINE (58)

    /** pathopen.e:468		file_name = SLASH & file_name*/
    // SubProg ScanPath pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 59 op: CONCAT (15)
    Prepend(&_file_name_50270, _file_name_50270, 47);
    // SubProg ScanPath pc: 63 op: STARTLINE (58)

    /** pathopen.e:469		if flag then*/
    // SubProg ScanPath pc: 65 op: IF (20)
    if (_flag_50272 == 0)
    {
        goto L2; // [65] 77
    }
    else{
    }
    // SubProg ScanPath pc: 68 op: STARTLINE (58)

    /** pathopen.e:470			file_name = include_subfolder & file_name*/
    // SubProg ScanPath pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 72 op: CONCAT (15)
    Concat((object_ptr)&_file_name_50270, _46include_subfolder_49860, _file_name_50270);
    // SubProg ScanPath pc: 76 op: NOP1 (159)
L2: // addr: 77 pc: 76 sub: 50268 op: 159
    // SubProg ScanPath pc: 77 op: STARTLINE (58)

    /** pathopen.e:472		strings = cache_substrings[num_var]*/
    // SubProg ScanPath pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 83 op: RHS_SUBS (25)
    DeRef(_strings_50276);
    _2 = (object)SEQ_PTR(_46cache_substrings_49867);
    _strings_50276 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    RefDS(_strings_50276);
    // SubProg ScanPath pc: 87 op: SEQUENCE_CHECK (97)
    // SubProg ScanPath pc: 89 op: STARTLINE (58)

    /** pathopen.e:474		if use_cache then*/
    // SubProg ScanPath pc: 91 op: IF (20)
    if (_use_cache_50280 == 0)
    {
        goto L3; // [91] 194
    }
    else{
    }
    // SubProg ScanPath pc: 94 op: STARTLINE (58)

    /** pathopen.e:475			for i=1 to length(strings) do*/
    // SubProg ScanPath pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_strings_50276)){
            _26056 = SEQ_PTR(_strings_50276)->length;
    }
    else {
        _26056 = 1;
    }
    // SubProg ScanPath pc: 99 op: FOR_I (125)
    {
        object _i_50297;
        _i_50297 = 1;
L4: // addr: 106 pc: 99 sub: 50268 op: 125
        if (_i_50297 > _26056){
            goto L5; // [99] 154
        }
        // SubProg ScanPath pc: 106 op: STARTLINE (58)

        /** pathopen.e:476				full_path = strings[i]*/
        // SubProg ScanPath pc: 108 op: RHS_SUBS (25)
        DeRef(_full_path_50274);
        _2 = (object)SEQ_PTR(_strings_50276);
        _full_path_50274 = (object)*(((s1_ptr)_2)->base + _i_50297);
        Ref(_full_path_50274);
        // SubProg ScanPath pc: 112 op: SEQUENCE_CHECK (97)
        // SubProg ScanPath pc: 114 op: STARTLINE (58)

        /** pathopen.e:477				file_path = full_path & file_name*/
        // SubProg ScanPath pc: 116 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50275, _full_path_50274, _file_name_50270);
        // SubProg ScanPath pc: 120 op: STARTLINE (58)

        /** pathopen.e:478				try = open_locked(file_path)    */
        // SubProg ScanPath pc: 122 op: PROC (27)
        RefDS(_file_path_50275);
        _try_50279 = _7open_locked(_file_path_50275);
        // SubProg ScanPath pc: 126 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_try_50279)) {
            _1 = (object)(DBL_PTR(_try_50279)->dbl);
            DeRefDS(_try_50279);
            _try_50279 = _1;
        }
        // SubProg ScanPath pc: 128 op: STARTLINE (58)

        /** pathopen.e:479				if try != -1 then*/
        // SubProg ScanPath pc: 130 op: NOTEQ_IFW_I (122)
        if (_try_50279 == -1)
        goto L6; // [130] 145
        // SubProg ScanPath pc: 134 op: STARTLINE (58)

        /** pathopen.e:480					return {file_path,try}*/
        // SubProg ScanPath pc: 136 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50275);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50275;
        ((intptr_t *)_2)[2] = _try_50279;
        _26061 = MAKE_SEQ(_1);
        // SubProg ScanPath pc: 140 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50270
        DeRefDS(_file_name_50270);

// block var env_50271
        DeRefDSi(_env_50271);

// block var flag_50272

// block var inc_path_50273
        DeRefi(_inc_path_50273);

// block var full_path_50274
        DeRefDS(_full_path_50274);

// block var file_path_50275
        DeRefDS(_file_path_50275);

// block var strings_50276
        DeRefDS(_strings_50276);

// block var end_path_50277

// block var start_path_50278

// block var try_50279

// block var use_cache_50280

// block var pos_50281
        return _26061;
        // SubProg ScanPath pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 50268 op: 159
        // SubProg ScanPath pc: 145 op: STARTLINE (58)

        /** pathopen.e:482				ifdef WINDOWS then */
        // SubProg ScanPath pc: 147 op: STARTLINE (58)

        /** pathopen.e:496			end for*/
        // SubProg ScanPath pc: 149 op: ENDFOR_INT_UP1 (54)
        _i_50297 = _i_50297 + 1;
        goto L4; // [149] 106
L5: // addr: 154 pc: 149 sub: 50268 op: 54
        ;
    }
    // SubProg ScanPath pc: 154 op: STARTLINE (58)

    /** pathopen.e:497			if cache_complete[num_var] then -- nothing to scan*/
    // SubProg ScanPath pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 160 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_complete_49871);
    _26062 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg ScanPath pc: 164 op: IF (20)
    if (_26062 == 0)
    {
        _26062 = NOVALUE;
        goto L7; // [164] 176
    }
    else{
        _26062 = NOVALUE;
    }
    // SubProg ScanPath pc: 167 op: STARTLINE (58)

    /** pathopen.e:498				return -1*/
    // SubProg ScanPath pc: 169 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50270
    DeRefDS(_file_name_50270);

// block var env_50271
    DeRefDSi(_env_50271);

// block var flag_50272

// block var inc_path_50273
    DeRefi(_inc_path_50273);

// block var full_path_50274
    DeRef(_full_path_50274);

// block var file_path_50275
    DeRef(_file_path_50275);

// block var strings_50276
    DeRef(_strings_50276);

// block var end_path_50277

// block var start_path_50278

// block var try_50279

// block var use_cache_50280

// block var pos_50281
    DeRef(_26061);
    _26061 = NOVALUE;
    return -1;
    // SubProg ScanPath pc: 173 op: ELSE (23)
    goto L8; // [173] 200
    // SubProg ScanPath pc: 175 op: NOP1 (159)
L7: // addr: 176 pc: 175 sub: 50268 op: 159
    // SubProg ScanPath pc: 176 op: STARTLINE (58)

    /** pathopen.e:500				pos = cache_delims[num_var]+1 -- scan remainder, starting from as far sa possible*/
    // SubProg ScanPath pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 182 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_delims_49872);
    _26063 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg ScanPath pc: 186 op: PLUS1_I (117)
    _pos_50281 = _26063 + 1;
    _26063 = NOVALUE;
    // SubProg ScanPath pc: 190 op: NOP1 (159)
    // SubProg ScanPath pc: 191 op: ELSE (23)
    goto L8; // [191] 200
    // SubProg ScanPath pc: 193 op: NOP1 (159)
L3: // addr: 194 pc: 193 sub: 50268 op: 159
    // SubProg ScanPath pc: 194 op: STARTLINE (58)

    /** pathopen.e:503			pos = 1*/
    // SubProg ScanPath pc: 196 op: ASSIGN_I (113)
    _pos_50281 = 1;
    // SubProg ScanPath pc: 199 op: NOP1 (159)
L8: // addr: 200 pc: 199 sub: 50268 op: 159
    // SubProg ScanPath pc: 200 op: STARTLINE (58)

    /** pathopen.e:506		start_path = 0*/
    // SubProg ScanPath pc: 202 op: ASSIGN_I (113)
    _start_path_50278 = 0;
    // SubProg ScanPath pc: 205 op: STARTLINE (58)

    /** pathopen.e:507		for p = pos to length(inc_path) do*/
    // SubProg ScanPath pc: 207 op: PRIVATE_INIT_CHECK (30)
    // SubProg ScanPath pc: 209 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50273)){
            _26065 = SEQ_PTR(_inc_path_50273)->length;
    }
    else {
        _26065 = 1;
    }
    // SubProg ScanPath pc: 212 op: FOR_I (125)
    {
        object _p_50313;
        _p_50313 = _pos_50281;
L9: // addr: 219 pc: 212 sub: 50268 op: 125
        if (_p_50313 > _26065){
            goto LA; // [212] 460
        }
        // SubProg ScanPath pc: 219 op: STARTLINE (58)

        /** pathopen.e:508			if inc_path[p] = PATH_SEPARATOR then*/
        // SubProg ScanPath pc: 221 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50273);
        _26066 = (object)*(((s1_ptr)_2)->base + _p_50313);
        // SubProg ScanPath pc: 225 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 227 op: EQUALS_IFW (104)
        if (_26066 != 58)
        goto LB; // [227] 409
        // SubProg ScanPath pc: 231 op: STARTLINE (58)

        /** pathopen.e:510				cache_delims[num_var] = p*/
        // SubProg ScanPath pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 235 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 237 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_46cache_delims_49872);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_delims_49872 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        *(intptr_t *)_2 = _p_50313;
        // SubProg ScanPath pc: 241 op: STARTLINE (58)

        /** pathopen.e:512				end_path = p-1*/
        // SubProg ScanPath pc: 243 op: MINUS_I (116)
        _end_path_50277 = _p_50313 - 1;
        // SubProg ScanPath pc: 247 op: STARTLINE (58)

        /** pathopen.e:513				while end_path >= start_path and find(inc_path[end_path], " \t" & SLASH_CHARS) do*/
        // SubProg ScanPath pc: 249 op: NOP2 (110)
        // SubProg ScanPath pc: 251 op: NOPWHILE (158)
LC: // addr: 252 pc: 251 sub: 50268 op: 158
        // SubProg ScanPath pc: 252 op: GREATEREQ (2)
        _26069 = (_end_path_50277 >= _start_path_50278);
        // SubProg ScanPath pc: 256 op: SC1_AND_IF (146)
        if (_26069 == 0) {
            goto LD; // [256] 290
        }
        // SubProg ScanPath pc: 260 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50273);
        _26071 = (object)*(((s1_ptr)_2)->base + _end_path_50277);
        // SubProg ScanPath pc: 264 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 266 op: CONCAT (15)
        Concat((object_ptr)&_26073, _26072, _39SLASH_CHARS_20003);
        // SubProg ScanPath pc: 270 op: FIND_FROM (176)
        _26074 = find_from(_26071, _26073, 1);
        _26071 = NOVALUE;
        DeRefDS(_26073);
        _26073 = NOVALUE;
        // SubProg ScanPath pc: 275 op: NOP1 (159)
        // SubProg ScanPath pc: 276 op: WHILE (47)
        if (_26074 == 0)
        {
            _26074 = NOVALUE;
            goto LD; // [276] 290
        }
        else{
            _26074 = NOVALUE;
        }
        // SubProg ScanPath pc: 279 op: STARTLINE (58)

        /** pathopen.e:514					end_path-=1*/
        // SubProg ScanPath pc: 281 op: MINUS_I (116)
        _end_path_50277 = _end_path_50277 - 1;
        // SubProg ScanPath pc: 285 op: STARTLINE (58)

        /** pathopen.e:515				end while*/
        // SubProg ScanPath pc: 287 op: ENDWHILE (22)
        goto LC; // [287] 252
        // SubProg ScanPath pc: 289 op: NOP1 (159)
LD: // addr: 290 pc: 289 sub: 50268 op: 159
        // SubProg ScanPath pc: 290 op: STARTLINE (58)

        /** pathopen.e:517				if start_path and end_path then*/
        // SubProg ScanPath pc: 292 op: SC1_AND_IF (146)
        if (_start_path_50278 == 0) {
            goto LE; // [292] 453
        }
        // SubProg ScanPath pc: 296 op: NOP1 (159)
        // SubProg ScanPath pc: 297 op: IF (20)
        if (_end_path_50277 == 0)
        {
            goto LE; // [297] 453
        }
        else{
        }
        // SubProg ScanPath pc: 300 op: STARTLINE (58)

        /** pathopen.e:518					full_path = inc_path[start_path..end_path]*/
        // SubProg ScanPath pc: 302 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_full_path_50274;
        RHS_Slice(_inc_path_50273, _start_path_50278, _end_path_50277);
        // SubProg ScanPath pc: 307 op: STARTLINE (58)

        /** pathopen.e:519					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        // SubProg ScanPath pc: 309 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 311 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 313 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 315 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 317 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49867);
        _26078 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg ScanPath pc: 321 op: APPEND (35)
        RefDS(_full_path_50274);
        Append(&_26079, _26078, _full_path_50274);
        _26078 = NOVALUE;
        // SubProg ScanPath pc: 325 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_substrings_49867);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_substrings_49867 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26079;
        if( _1 != _26079 ){
            DeRefDS(_1);
        }
        _26079 = NOVALUE;
        // SubProg ScanPath pc: 329 op: STARTLINE (58)

        /** pathopen.e:520					cache_starts[num_var] &= start_path*/
        // SubProg ScanPath pc: 331 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 333 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 335 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_starts_49868);
        _26080 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg ScanPath pc: 339 op: CONCAT (15)
        if (IS_SEQUENCE(_26080) && IS_ATOM(_start_path_50278)) {
            Append(&_26081, _26080, _start_path_50278);
        }
        else if (IS_ATOM(_26080) && IS_SEQUENCE(_start_path_50278)) {
        }
        else {
            Concat((object_ptr)&_26081, _26080, _start_path_50278);
            _26080 = NOVALUE;
        }
        _26080 = NOVALUE;
        // SubProg ScanPath pc: 343 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_starts_49868);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_starts_49868 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26081;
        if( _1 != _26081 ){
            DeRef(_1);
        }
        _26081 = NOVALUE;
        // SubProg ScanPath pc: 347 op: STARTLINE (58)

        /** pathopen.e:521					cache_ends[num_var] &= end_path*/
        // SubProg ScanPath pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 351 op: GLOBAL_INIT_CHECK (109)
        // SubProg ScanPath pc: 353 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        _26082 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg ScanPath pc: 357 op: CONCAT (15)
        if (IS_SEQUENCE(_26082) && IS_ATOM(_end_path_50277)) {
            Append(&_26083, _26082, _end_path_50277);
        }
        else if (IS_ATOM(_26082) && IS_SEQUENCE(_end_path_50277)) {
        }
        else {
            Concat((object_ptr)&_26083, _26082, _end_path_50277);
            _26082 = NOVALUE;
        }
        _26082 = NOVALUE;
        // SubProg ScanPath pc: 361 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_ends_49869 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26083;
        if( _1 != _26083 ){
            DeRef(_1);
        }
        _26083 = NOVALUE;
        // SubProg ScanPath pc: 365 op: STARTLINE (58)

        /** pathopen.e:522					file_path = full_path & file_name  */
        // SubProg ScanPath pc: 367 op: CONCAT (15)
        Concat((object_ptr)&_file_path_50275, _full_path_50274, _file_name_50270);
        // SubProg ScanPath pc: 371 op: STARTLINE (58)

        /** pathopen.e:523					try = open_locked(file_path)*/
        // SubProg ScanPath pc: 373 op: PROC (27)
        RefDS(_file_path_50275);
        _try_50279 = _7open_locked(_file_path_50275);
        // SubProg ScanPath pc: 377 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_try_50279)) {
            _1 = (object)(DBL_PTR(_try_50279)->dbl);
            DeRefDS(_try_50279);
            _try_50279 = _1;
        }
        // SubProg ScanPath pc: 379 op: STARTLINE (58)

        /** pathopen.e:524					if try != -1 then -- valid path, no point trying to convert*/
        // SubProg ScanPath pc: 381 op: NOTEQ_IFW_I (122)
        if (_try_50279 == -1)
        goto LF; // [381] 398
        // SubProg ScanPath pc: 385 op: STARTLINE (58)

        /** pathopen.e:525						ifdef WINDOWS then*/
        // SubProg ScanPath pc: 387 op: STARTLINE (58)

        /** pathopen.e:528						return {file_path,try}*/
        // SubProg ScanPath pc: 389 op: RIGHT_BRACE_2 (85)
        RefDS(_file_path_50275);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50275;
        ((intptr_t *)_2)[2] = _try_50279;
        _26087 = MAKE_SEQ(_1);
        // SubProg ScanPath pc: 393 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50270
        DeRefDS(_file_name_50270);

// block var env_50271
        DeRefDSi(_env_50271);

// block var flag_50272

// block var inc_path_50273
        DeRefi(_inc_path_50273);

// block var full_path_50274
        DeRefDSi(_full_path_50274);

// block var file_path_50275
        DeRefDS(_file_path_50275);

// block var strings_50276
        DeRef(_strings_50276);

// block var end_path_50277

// block var start_path_50278

// block var try_50279

// block var use_cache_50280

// block var pos_50281
        DeRef(_26069);
        _26069 = NOVALUE;
        DeRef(_26061);
        _26061 = NOVALUE;
        _26066 = NOVALUE;
        return _26087;
        // SubProg ScanPath pc: 397 op: NOP1 (159)
LF: // addr: 398 pc: 397 sub: 50268 op: 159
        // SubProg ScanPath pc: 398 op: STARTLINE (58)

        /** pathopen.e:530					ifdef WINDOWS then*/
        // SubProg ScanPath pc: 400 op: STARTLINE (58)

        /** pathopen.e:547					start_path = 0*/
        // SubProg ScanPath pc: 402 op: ASSIGN_I (113)
        _start_path_50278 = 0;
        // SubProg ScanPath pc: 405 op: NOP1 (159)
        // SubProg ScanPath pc: 406 op: ELSE (23)
        goto LE; // [406] 453
        // SubProg ScanPath pc: 408 op: NOP1 (159)
LB: // addr: 409 pc: 408 sub: 50268 op: 159
        // SubProg ScanPath pc: 409 op: STARTLINE (58)

        /** pathopen.e:549			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        // SubProg ScanPath pc: 411 op: NOT (7)
        _26088 = (_start_path_50278 == 0);
        // SubProg ScanPath pc: 414 op: SC1_AND_IF (146)
        if (_26088 == 0) {
            goto L10; // [414] 452
        }
        // SubProg ScanPath pc: 418 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50273);
        _26090 = (object)*(((s1_ptr)_2)->base + _p_50313);
        // SubProg ScanPath pc: 422 op: NOTEQ (4)
        _26091 = (_26090 != 32);
        _26090 = NOVALUE;
        // SubProg ScanPath pc: 426 op: SC1_AND (141)
        if (_26091 == 0) {
            DeRef(_26092);
            _26092 = 0;
            goto L11; // [426] 442
        }
        // SubProg ScanPath pc: 430 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50273);
        _26093 = (object)*(((s1_ptr)_2)->base + _p_50313);
        // SubProg ScanPath pc: 434 op: NOTEQ (4)
        _26094 = (_26093 != 9);
        _26093 = NOVALUE;
        // SubProg ScanPath pc: 438 op: SC2_AND (142)
        _26092 = (_26094 != 0);
        // SubProg ScanPath pc: 441 op: NOP1 (159)
L11: // addr: 442 pc: 441 sub: 50268 op: 159
        // SubProg ScanPath pc: 442 op: NOP1 (159)
        // SubProg ScanPath pc: 443 op: IF (20)
        if (_26092 == 0)
        {
            _26092 = NOVALUE;
            goto L10; // [443] 452
        }
        else{
            _26092 = NOVALUE;
        }
        // SubProg ScanPath pc: 446 op: STARTLINE (58)

        /** pathopen.e:550				start_path = p*/
        // SubProg ScanPath pc: 448 op: ASSIGN_I (113)
        _start_path_50278 = _p_50313;
        // SubProg ScanPath pc: 451 op: NOP1 (159)
L10: // addr: 452 pc: 451 sub: 50268 op: 159
        // SubProg ScanPath pc: 452 op: NOP1 (159)
LE: // addr: 453 pc: 452 sub: 50268 op: 159
        // SubProg ScanPath pc: 453 op: STARTLINE (58)

        /** pathopen.e:552		end for*/
        // SubProg ScanPath pc: 455 op: ENDFOR_INT_UP1 (54)
        _p_50313 = _p_50313 + 1;
        goto L9; // [455] 219
LA: // addr: 460 pc: 455 sub: 50268 op: 54
        ;
    }
    // SubProg ScanPath pc: 460 op: STARTLINE (58)

    /** pathopen.e:554		cache_complete[num_var] = 1*/
    // SubProg ScanPath pc: 462 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 464 op: GLOBAL_INIT_CHECK (109)
    // SubProg ScanPath pc: 466 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_46cache_complete_49871);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_complete_49871 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
    *(intptr_t *)_2 = 1;
    // SubProg ScanPath pc: 470 op: STARTLINE (58)

    /** pathopen.e:555		return -1*/
    // SubProg ScanPath pc: 472 op: RETURNF (28)

// Exiting block BLOCK: ScanPath

// block var file_name_50270
    DeRefDS(_file_name_50270);

// block var env_50271
    DeRefDSi(_env_50271);

// block var flag_50272

// block var inc_path_50273
    DeRefi(_inc_path_50273);

// block var full_path_50274
    DeRef(_full_path_50274);

// block var file_path_50275
    DeRef(_file_path_50275);

// block var strings_50276
    DeRef(_strings_50276);

// block var end_path_50277

// block var start_path_50278

// block var try_50279

// block var use_cache_50280

// block var pos_50281
    DeRef(_26091);
    _26091 = NOVALUE;
    DeRef(_26069);
    _26069 = NOVALUE;
    DeRef(_26094);
    _26094 = NOVALUE;
    DeRef(_26061);
    _26061 = NOVALUE;
    DeRef(_26087);
    _26087 = NOVALUE;
    DeRef(_26088);
    _26088 = NOVALUE;
    _26066 = NOVALUE;
    return -1;
    // SubProg ScanPath pc: 476 op: BADRETURNF (43)
    ;
}


object _46Include_paths(object _add_converted_50355)
{
    object _status_50356 = NOVALUE;
    object _pos_50357 = NOVALUE;
    object _inc_path_50358 = NOVALUE;
    object _full_path_50359 = NOVALUE;
    object _start_path_50360 = NOVALUE;
    object _end_path_50361 = NOVALUE;
    object _eudir_path_50377 = NOVALUE;
// skipping _26141  name type: 0
    object _26140 = NOVALUE; // 50426 26140
    object _26139 = NOVALUE; // 50425 26139
    object _26138 = NOVALUE; // 50424 26138
    object _26137 = NOVALUE; // 50423 26137
    object _26136 = NOVALUE; // 50422 26136
    object _26135 = NOVALUE; // 50421 26135
    object _26134 = NOVALUE; // 50420 26134
    object _26133 = NOVALUE; // 50419 26133
    object _26132 = NOVALUE; // 50417 26132
    object _26131 = NOVALUE; // 50416 26131
    object _26130 = NOVALUE; // 50415 26130
    object _26129 = NOVALUE; // 50414 26129
    object _26128 = NOVALUE; // 50413 26128
    object _26127 = NOVALUE; // 50412 26127
// skipping _26126  name type: 0
    object _26125 = NOVALUE; // 50410 26125
// skipping _26124  name type: 0
    object _26123 = NOVALUE; // 50407 26123
    object _26122 = NOVALUE; // 50406 26122
    object _26121 = NOVALUE; // 50404 26121
    object _26120 = NOVALUE; // 50403 26120
    object _26119 = NOVALUE; // 50402 26119
// skipping _26118  name type: 0
// skipping _26117  name type: 0
    object _26116 = NOVALUE; // 50397 26116
    object _26115 = NOVALUE; // 50395 26115
// skipping _26114  name type: 0
    object _26113 = NOVALUE; // 50390 26113
    object _26111 = NOVALUE; // 50388 26111
// skipping _26110  name type: 0
    object _26109 = NOVALUE; // 50384 26109
    object _26108 = NOVALUE; // 50383 26108
    object _26106 = NOVALUE; // 50381 26106
// skipping _26105  name type: 0
// skipping _26104  name type: 0
    object _26103 = NOVALUE; // 50374 26103
// skipping _26102  name type: 0
    object _26101 = NOVALUE; // 50371 26101
// skipping _26100  name type: 0
// skipping _26099  name type: 0
// skipping _26097  name type: 0
    object _26096 = NOVALUE; // 50365 26096
    object _26095 = NOVALUE; // 50363 26095
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Include_paths pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_add_converted_50355)) {
        _1 = (object)(DBL_PTR(_add_converted_50355)->dbl);
        DeRefDS(_add_converted_50355);
        _add_converted_50355 = _1;
    }
    // SubProg Include_paths pc: 3 op: STARTLINE (58)

    /** pathopen.e:566		if length(include_Paths) then*/
    // SubProg Include_paths pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_46include_Paths_50352)){
            _26095 = SEQ_PTR(_46include_Paths_50352)->length;
    }
    else {
        _26095 = 1;
    }
    // SubProg Include_paths pc: 10 op: IF (20)
    if (_26095 == 0)
    {
        _26095 = NOVALUE;
        goto L1; // [10] 22
    }
    else{
        _26095 = NOVALUE;
    }
    // SubProg Include_paths pc: 13 op: STARTLINE (58)

    /** pathopen.e:567			return include_Paths*/
    // SubProg Include_paths pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 17 op: RETURNF (28)
    RefDS(_46include_Paths_50352);

// Exiting block BLOCK: Include_paths

// block var status_50356

// block var pos_50357

// block var inc_path_50358
    DeRefi(_inc_path_50358);

// block var full_path_50359
    DeRefi(_full_path_50359);

// block var start_path_50360

// block var end_path_50361

// block var eudir_path_50377
    DeRef(_eudir_path_50377);
    return _46include_Paths_50352;
    // SubProg Include_paths pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 50353 op: 159
    // SubProg Include_paths pc: 22 op: STARTLINE (58)

    /** pathopen.e:570		include_Paths = append(config_inc_paths, current_dir())*/
    // SubProg Include_paths pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 26 op: PROC (27)
    _26096 = _16current_dir();
    // SubProg Include_paths pc: 29 op: APPEND (35)
    Ref(_26096);
    Append(&_46include_Paths_50352, _46config_inc_paths_49873, _26096);
    DeRef(_26096);
    _26096 = NOVALUE;
    // SubProg Include_paths pc: 33 op: STARTLINE (58)

    /** pathopen.e:571		num_var = find("EUINC", cache_vars)*/
    // SubProg Include_paths pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 37 op: FIND_FROM (176)
    _46num_var_49864 = find_from(_26098, _46cache_vars_49865, 1);
    // SubProg Include_paths pc: 42 op: STARTLINE (58)

    /** pathopen.e:572		inc_path = getenv("EUINC")*/
    // SubProg Include_paths pc: 44 op: GETENV (91)
    DeRefi(_inc_path_50358);
    _inc_path_50358 = EGetEnv(_26098);
    // SubProg Include_paths pc: 47 op: STARTLINE (58)

    /** pathopen.e:573		if atom(inc_path) then*/
    // SubProg Include_paths pc: 49 op: IS_AN_ATOM (67)
    _26101 = IS_ATOM(_inc_path_50358);
    // SubProg Include_paths pc: 52 op: IF (20)
    if (_26101 == 0)
    {
        _26101 = NOVALUE;
        goto L2; // [52] 61
    }
    else{
        _26101 = NOVALUE;
    }
    // SubProg Include_paths pc: 55 op: STARTLINE (58)

    /** pathopen.e:574			inc_path = ""*/
    // SubProg Include_paths pc: 57 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_inc_path_50358);
    _inc_path_50358 = _21958;
    // SubProg Include_paths pc: 60 op: NOP1 (159)
L2: // addr: 61 pc: 60 sub: 50353 op: 159
    // SubProg Include_paths pc: 61 op: STARTLINE (58)

    /** pathopen.e:576		status = check_cache("EUINC", inc_path)*/
    // SubProg Include_paths pc: 63 op: PROC (27)
    RefDS(_26098);
    Ref(_inc_path_50358);
    _status_50356 = _46check_cache(_26098, _inc_path_50358);
    // SubProg Include_paths pc: 68 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_status_50356)) {
        _1 = (object)(DBL_PTR(_status_50356)->dbl);
        DeRefDS(_status_50356);
        _status_50356 = _1;
    }
    // SubProg Include_paths pc: 70 op: STARTLINE (58)

    /** pathopen.e:577		if length(inc_path) then*/
    // SubProg Include_paths pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50358)){
            _26103 = SEQ_PTR(_inc_path_50358)->length;
    }
    else {
        _26103 = 1;
    }
    // SubProg Include_paths pc: 75 op: IF (20)
    if (_26103 == 0)
    {
        _26103 = NOVALUE;
        goto L3; // [75] 87
    }
    else{
        _26103 = NOVALUE;
    }
    // SubProg Include_paths pc: 78 op: STARTLINE (58)

    /** pathopen.e:578			inc_path = append(inc_path, PATH_SEPARATOR)*/
    // SubProg Include_paths pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 82 op: APPEND (35)
    Append(&_inc_path_50358, _inc_path_50358, 58);
    // SubProg Include_paths pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 50353 op: 159
    // SubProg Include_paths pc: 87 op: STARTLINE (58)

    /** pathopen.e:580		object eudir_path = get_eudir()*/
    // SubProg Include_paths pc: 89 op: PROC (27)
    _0 = _eudir_path_50377;
    _eudir_path_50377 = _7get_eudir();
    DeRef(_0);
    // SubProg Include_paths pc: 92 op: STARTLINE (58)

    /** pathopen.e:581		if sequence(eudir_path) then*/
    // SubProg Include_paths pc: 94 op: IS_A_SEQUENCE (68)
    _26106 = IS_SEQUENCE(_eudir_path_50377);
    // SubProg Include_paths pc: 97 op: IF (20)
    if (_26106 == 0)
    {
        _26106 = NOVALUE;
        goto L4; // [97] 117
    }
    else{
        _26106 = NOVALUE;
    }
    // SubProg Include_paths pc: 100 op: STARTLINE (58)

    /** pathopen.e:582			include_Paths = append(include_Paths, sprintf("%s/include", { eudir_path }))*/
    // SubProg Include_paths pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 104 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_eudir_path_50377);
    ((intptr_t*)_2)[1] = _eudir_path_50377;
    _26108 = MAKE_SEQ(_1);
    // SubProg Include_paths pc: 108 op: SPRINTF (53)
    _26109 = EPrintf(-9999999, _26107, _26108);
    DeRefDS(_26108);
    _26108 = NOVALUE;
    // SubProg Include_paths pc: 112 op: APPEND (35)
    RefDS(_26109);
    Append(&_46include_Paths_50352, _46include_Paths_50352, _26109);
    DeRefDS(_26109);
    _26109 = NOVALUE;
    // SubProg Include_paths pc: 116 op: NOP1 (159)
L4: // addr: 117 pc: 116 sub: 50353 op: 159
    // SubProg Include_paths pc: 117 op: STARTLINE (58)

    /** pathopen.e:585		if status then*/
    // SubProg Include_paths pc: 119 op: IF (20)
    if (_status_50356 == 0)
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
    _2 = (object)SEQ_PTR(_46cache_complete_49871);
    _26111 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg Include_paths pc: 132 op: IF (20)
    if (_26111 == 0)
    {
        _26111 = NOVALUE;
        goto L6; // [132] 144
    }
    else{
        _26111 = NOVALUE;
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
L6: // addr: 144 pc: 143 sub: 50353 op: 159
    // SubProg Include_paths pc: 144 op: STARTLINE (58)

    /** pathopen.e:590			pos = cache_delims[num_var]+1*/
    // SubProg Include_paths pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 150 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46cache_delims_49872);
    _26113 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg Include_paths pc: 154 op: PLUS1_I (117)
    _pos_50357 = _26113 + 1;
    _26113 = NOVALUE;
    // SubProg Include_paths pc: 158 op: ELSE (23)
    goto L8; // [158] 167
    // SubProg Include_paths pc: 160 op: NOP1 (159)
L5: // addr: 161 pc: 160 sub: 50353 op: 159
    // SubProg Include_paths pc: 161 op: STARTLINE (58)

    /** pathopen.e:592	        pos = 1*/
    // SubProg Include_paths pc: 163 op: ASSIGN_I (113)
    _pos_50357 = 1;
    // SubProg Include_paths pc: 166 op: NOP1 (159)
L8: // addr: 167 pc: 166 sub: 50353 op: 159
    // SubProg Include_paths pc: 167 op: STARTLINE (58)

    /** pathopen.e:594		start_path = 0*/
    // SubProg Include_paths pc: 169 op: ASSIGN_I (113)
    _start_path_50360 = 0;
    // SubProg Include_paths pc: 172 op: STARTLINE (58)

    /** pathopen.e:595		for p = pos to length(inc_path) do*/
    // SubProg Include_paths pc: 174 op: PRIVATE_INIT_CHECK (30)
    // SubProg Include_paths pc: 176 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_50358)){
            _26115 = SEQ_PTR(_inc_path_50358)->length;
    }
    else {
        _26115 = 1;
    }
    // SubProg Include_paths pc: 179 op: FOR_I (125)
    {
        object _p_50394;
        _p_50394 = _pos_50357;
L9: // addr: 186 pc: 179 sub: 50353 op: 125
        if (_p_50394 > _26115){
            goto LA; // [179] 394
        }
        // SubProg Include_paths pc: 186 op: STARTLINE (58)

        /** pathopen.e:596			if inc_path[p] = PATH_SEPARATOR then*/
        // SubProg Include_paths pc: 188 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50358);
        _26116 = (object)*(((s1_ptr)_2)->base + _p_50394);
        // SubProg Include_paths pc: 192 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 194 op: EQUALS_IFW (104)
        if (_26116 != 58)
        goto LB; // [194] 343
        // SubProg Include_paths pc: 198 op: STARTLINE (58)

        /** pathopen.e:598				cache_delims[num_var] = p*/
        // SubProg Include_paths pc: 200 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 204 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_46cache_delims_49872);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_delims_49872 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        *(intptr_t *)_2 = _p_50394;
        // SubProg Include_paths pc: 208 op: STARTLINE (58)

        /** pathopen.e:600				end_path = p-1*/
        // SubProg Include_paths pc: 210 op: MINUS_I (116)
        _end_path_50361 = _p_50394 - 1;
        // SubProg Include_paths pc: 214 op: STARTLINE (58)

        /** pathopen.e:601				while end_path >= start_path and find(inc_path[end_path]," \t" & SLASH_CHARS) do*/
        // SubProg Include_paths pc: 216 op: NOP2 (110)
        // SubProg Include_paths pc: 218 op: NOPWHILE (158)
LC: // addr: 219 pc: 218 sub: 50353 op: 158
        // SubProg Include_paths pc: 219 op: GREATEREQ (2)
        _26119 = (_end_path_50361 >= _start_path_50360);
        // SubProg Include_paths pc: 223 op: SC1_AND_IF (146)
        if (_26119 == 0) {
            goto LD; // [223] 257
        }
        // SubProg Include_paths pc: 227 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50358);
        _26121 = (object)*(((s1_ptr)_2)->base + _end_path_50361);
        // SubProg Include_paths pc: 231 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 233 op: CONCAT (15)
        Concat((object_ptr)&_26122, _26072, _39SLASH_CHARS_20003);
        // SubProg Include_paths pc: 237 op: FIND_FROM (176)
        _26123 = find_from(_26121, _26122, 1);
        _26121 = NOVALUE;
        DeRefDS(_26122);
        _26122 = NOVALUE;
        // SubProg Include_paths pc: 242 op: NOP1 (159)
        // SubProg Include_paths pc: 243 op: WHILE (47)
        if (_26123 == 0)
        {
            _26123 = NOVALUE;
            goto LD; // [243] 257
        }
        else{
            _26123 = NOVALUE;
        }
        // SubProg Include_paths pc: 246 op: STARTLINE (58)

        /** pathopen.e:602					end_path -= 1*/
        // SubProg Include_paths pc: 248 op: MINUS_I (116)
        _end_path_50361 = _end_path_50361 - 1;
        // SubProg Include_paths pc: 252 op: STARTLINE (58)

        /** pathopen.e:603				end while*/
        // SubProg Include_paths pc: 254 op: ENDWHILE (22)
        goto LC; // [254] 219
        // SubProg Include_paths pc: 256 op: NOP1 (159)
LD: // addr: 257 pc: 256 sub: 50353 op: 159
        // SubProg Include_paths pc: 257 op: STARTLINE (58)

        /** pathopen.e:605				if start_path and end_path then*/
        // SubProg Include_paths pc: 259 op: SC1_AND_IF (146)
        if (_start_path_50360 == 0) {
            goto LE; // [259] 387
        }
        // SubProg Include_paths pc: 263 op: NOP1 (159)
        // SubProg Include_paths pc: 264 op: IF (20)
        if (_end_path_50361 == 0)
        {
            goto LE; // [264] 387
        }
        else{
        }
        // SubProg Include_paths pc: 267 op: STARTLINE (58)

        /** pathopen.e:606					full_path = inc_path[start_path..end_path]*/
        // SubProg Include_paths pc: 269 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_full_path_50359;
        RHS_Slice(_inc_path_50358, _start_path_50360, _end_path_50361);
        // SubProg Include_paths pc: 274 op: STARTLINE (58)

        /** pathopen.e:607					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        // SubProg Include_paths pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 284 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_substrings_49867);
        _26127 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg Include_paths pc: 288 op: APPEND (35)
        RefDS(_full_path_50359);
        Append(&_26128, _26127, _full_path_50359);
        _26127 = NOVALUE;
        // SubProg Include_paths pc: 292 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_substrings_49867);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_substrings_49867 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26128;
        if( _1 != _26128 ){
            DeRefDS(_1);
        }
        _26128 = NOVALUE;
        // SubProg Include_paths pc: 296 op: STARTLINE (58)

        /** pathopen.e:608					cache_starts[num_var] &= start_path*/
        // SubProg Include_paths pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 300 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 302 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_starts_49868);
        _26129 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg Include_paths pc: 306 op: CONCAT (15)
        if (IS_SEQUENCE(_26129) && IS_ATOM(_start_path_50360)) {
            Append(&_26130, _26129, _start_path_50360);
        }
        else if (IS_ATOM(_26129) && IS_SEQUENCE(_start_path_50360)) {
        }
        else {
            Concat((object_ptr)&_26130, _26129, _start_path_50360);
            _26129 = NOVALUE;
        }
        _26129 = NOVALUE;
        // SubProg Include_paths pc: 310 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_starts_49868);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_starts_49868 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26130;
        if( _1 != _26130 ){
            DeRef(_1);
        }
        _26130 = NOVALUE;
        // SubProg Include_paths pc: 314 op: STARTLINE (58)

        /** pathopen.e:609					cache_ends[num_var] &= end_path*/
        // SubProg Include_paths pc: 316 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 318 op: GLOBAL_INIT_CHECK (109)
        // SubProg Include_paths pc: 320 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        _26131 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
        // SubProg Include_paths pc: 324 op: CONCAT (15)
        if (IS_SEQUENCE(_26131) && IS_ATOM(_end_path_50361)) {
            Append(&_26132, _26131, _end_path_50361);
        }
        else if (IS_ATOM(_26131) && IS_SEQUENCE(_end_path_50361)) {
        }
        else {
            Concat((object_ptr)&_26132, _26131, _end_path_50361);
            _26131 = NOVALUE;
        }
        _26131 = NOVALUE;
        // SubProg Include_paths pc: 328 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_46cache_ends_49869);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _46cache_ends_49869 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26132;
        if( _1 != _26132 ){
            DeRef(_1);
        }
        _26132 = NOVALUE;
        // SubProg Include_paths pc: 332 op: STARTLINE (58)

        /** pathopen.e:610					ifdef WINDOWS then*/
        // SubProg Include_paths pc: 334 op: STARTLINE (58)

        /** pathopen.e:620					start_path = 0*/
        // SubProg Include_paths pc: 336 op: ASSIGN_I (113)
        _start_path_50360 = 0;
        // SubProg Include_paths pc: 339 op: NOP1 (159)
        // SubProg Include_paths pc: 340 op: ELSE (23)
        goto LE; // [340] 387
        // SubProg Include_paths pc: 342 op: NOP1 (159)
LB: // addr: 343 pc: 342 sub: 50353 op: 159
        // SubProg Include_paths pc: 343 op: STARTLINE (58)

        /** pathopen.e:622			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        // SubProg Include_paths pc: 345 op: NOT (7)
        _26133 = (_start_path_50360 == 0);
        // SubProg Include_paths pc: 348 op: SC1_AND_IF (146)
        if (_26133 == 0) {
            goto LF; // [348] 386
        }
        // SubProg Include_paths pc: 352 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50358);
        _26135 = (object)*(((s1_ptr)_2)->base + _p_50394);
        // SubProg Include_paths pc: 356 op: NOTEQ (4)
        _26136 = (_26135 != 32);
        _26135 = NOVALUE;
        // SubProg Include_paths pc: 360 op: SC1_AND (141)
        if (_26136 == 0) {
            DeRef(_26137);
            _26137 = 0;
            goto L10; // [360] 376
        }
        // SubProg Include_paths pc: 364 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_50358);
        _26138 = (object)*(((s1_ptr)_2)->base + _p_50394);
        // SubProg Include_paths pc: 368 op: NOTEQ (4)
        _26139 = (_26138 != 9);
        _26138 = NOVALUE;
        // SubProg Include_paths pc: 372 op: SC2_AND (142)
        _26137 = (_26139 != 0);
        // SubProg Include_paths pc: 375 op: NOP1 (159)
L10: // addr: 376 pc: 375 sub: 50353 op: 159
        // SubProg Include_paths pc: 376 op: NOP1 (159)
        // SubProg Include_paths pc: 377 op: IF (20)
        if (_26137 == 0)
        {
            _26137 = NOVALUE;
            goto LF; // [377] 386
        }
        else{
            _26137 = NOVALUE;
        }
        // SubProg Include_paths pc: 380 op: STARTLINE (58)

        /** pathopen.e:623				start_path = p*/
        // SubProg Include_paths pc: 382 op: ASSIGN_I (113)
        _start_path_50360 = _p_50394;
        // SubProg Include_paths pc: 385 op: NOP1 (159)
LF: // addr: 386 pc: 385 sub: 50353 op: 159
        // SubProg Include_paths pc: 386 op: NOP1 (159)
LE: // addr: 387 pc: 386 sub: 50353 op: 159
        // SubProg Include_paths pc: 387 op: STARTLINE (58)

        /** pathopen.e:625		end for*/
        // SubProg Include_paths pc: 389 op: ENDFOR_INT_UP1 (54)
        _p_50394 = _p_50394 + 1;
        goto L9; // [389] 186
LA: // addr: 394 pc: 389 sub: 50353 op: 54
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
    _2 = (object)SEQ_PTR(_46cache_substrings_49867);
    _26140 = (object)*(((s1_ptr)_2)->base + _46num_var_49864);
    // SubProg Include_paths pc: 410 op: CONCAT (15)
    Concat((object_ptr)&_46include_Paths_50352, _46include_Paths_50352, _26140);
    _26140 = NOVALUE;
    // SubProg Include_paths pc: 414 op: STARTLINE (58)

    /** pathopen.e:629		cache_complete[num_var] = 1*/
    // SubProg Include_paths pc: 416 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 420 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_46cache_complete_49871);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46cache_complete_49871 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _46num_var_49864);
    *(intptr_t *)_2 = 1;
    // SubProg Include_paths pc: 424 op: STARTLINE (58)

    /** pathopen.e:631		ifdef WINDOWS then*/
    // SubProg Include_paths pc: 426 op: STARTLINE (58)

    /** pathopen.e:640		return include_Paths*/
    // SubProg Include_paths pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Include_paths pc: 430 op: RETURNF (28)
    RefDS(_46include_Paths_50352);

// Exiting block BLOCK: Include_paths

// block var status_50356

// block var pos_50357

// block var inc_path_50358
    DeRefi(_inc_path_50358);

// block var full_path_50359
    DeRefi(_full_path_50359);

// block var start_path_50360

// block var end_path_50361

// block var eudir_path_50377
    DeRef(_eudir_path_50377);
    _26116 = NOVALUE;
    DeRef(_26133);
    _26133 = NOVALUE;
    DeRef(_26139);
    _26139 = NOVALUE;
    DeRef(_26136);
    _26136 = NOVALUE;
    DeRef(_26119);
    _26119 = NOVALUE;
    return _46include_Paths_50352;
    // SubProg Include_paths pc: 434 op: BADRETURNF (43)
    ;
}


object _46e_path_find(object _name_50430)
{
    object _scan_result_50431 = NOVALUE;
    object _26150 = NOVALUE; // 50448 26150
    object _26149 = NOVALUE; // 50447 26149
    object _26148 = NOVALUE; // 50446 26148
// skipping _26147  name type: 0
    object _26145 = NOVALUE; // 50442 26145
    object _26144 = NOVALUE; // 50441 26144
    object _26143 = NOVALUE; // 50438 26143
    object _26142 = NOVALUE; // 50434 26142
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg e_path_find pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg e_path_find pc: 3 op: STARTLINE (58)

    /** pathopen.e:656		if file_exists(name) then*/
    // SubProg e_path_find pc: 5 op: PROC (27)
    RefDS(_name_50430);
    _26142 = _16file_exists(_name_50430);
    // SubProg e_path_find pc: 9 op: IF (20)
    if (_26142 == 0) {
        DeRef(_26142);
        _26142 = NOVALUE;
        goto L1; // [9] 19
    }
    else {
        if (!IS_ATOM_INT(_26142) && DBL_PTR(_26142)->dbl == 0.0){
            DeRef(_26142);
            _26142 = NOVALUE;
            goto L1; // [9] 19
        }
        DeRef(_26142);
        _26142 = NOVALUE;
    }
    DeRef(_26142);
    _26142 = NOVALUE;
    // SubProg e_path_find pc: 12 op: STARTLINE (58)

    /** pathopen.e:657			return name*/
    // SubProg e_path_find pc: 14 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var scan_result_50431
    DeRef(_scan_result_50431);
    return _name_50430;
    // SubProg e_path_find pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 50428 op: 159
    // SubProg e_path_find pc: 19 op: STARTLINE (58)

    /** pathopen.e:661		for i = 1 to length(SLASH_CHARS) do*/
    // SubProg e_path_find pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg e_path_find pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_39SLASH_CHARS_20003)){
            _26143 = SEQ_PTR(_39SLASH_CHARS_20003)->length;
    }
    else {
        _26143 = 1;
    }
    // SubProg e_path_find pc: 26 op: FOR_I (125)
    {
        object _i_50436;
        _i_50436 = 1;
L2: // addr: 33 pc: 26 sub: 50428 op: 125
        if (_i_50436 > _26143){
            goto L3; // [26] 63
        }
        // SubProg e_path_find pc: 33 op: STARTLINE (58)

        /** pathopen.e:662			if find(SLASH_CHARS[i], name) then*/
        // SubProg e_path_find pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg e_path_find pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_39SLASH_CHARS_20003);
        _26144 = (object)*(((s1_ptr)_2)->base + _i_50436);
        // SubProg e_path_find pc: 41 op: FIND_FROM (176)
        _26145 = find_from(_26144, _name_50430, 1);
        _26144 = NOVALUE;
        // SubProg e_path_find pc: 46 op: IF (20)
        if (_26145 == 0)
        {
            _26145 = NOVALUE;
            goto L4; // [46] 56
        }
        else{
            _26145 = NOVALUE;
        }
        // SubProg e_path_find pc: 49 op: STARTLINE (58)

        /** pathopen.e:663				return -1*/
        // SubProg e_path_find pc: 51 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var name_50430
        DeRefDS(_name_50430);

// block var scan_result_50431
        DeRef(_scan_result_50431);
        return -1;
        // SubProg e_path_find pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 50428 op: 159
        // SubProg e_path_find pc: 56 op: STARTLINE (58)

        /** pathopen.e:665		end for*/
        // SubProg e_path_find pc: 58 op: ENDFOR_INT_UP1 (54)
        _i_50436 = _i_50436 + 1;
        goto L2; // [58] 33
L3: // addr: 63 pc: 58 sub: 50428 op: 54
        ;
    }
    // SubProg e_path_find pc: 63 op: STARTLINE (58)

    /** pathopen.e:667		scan_result = ScanPath(name, "PATH", 0)*/
    // SubProg e_path_find pc: 65 op: PROC (27)
    RefDS(_name_50430);
    RefDS(_26146);
    _0 = _scan_result_50431;
    _scan_result_50431 = _46ScanPath(_name_50430, _26146, 0);
    DeRef(_0);
    // SubProg e_path_find pc: 71 op: STARTLINE (58)

    /** pathopen.e:668		if sequence(scan_result) then*/
    // SubProg e_path_find pc: 73 op: IS_A_SEQUENCE (68)
    _26148 = IS_SEQUENCE(_scan_result_50431);
    // SubProg e_path_find pc: 76 op: IF (20)
    if (_26148 == 0)
    {
        _26148 = NOVALUE;
        goto L5; // [76] 98
    }
    else{
        _26148 = NOVALUE;
    }
    // SubProg e_path_find pc: 79 op: STARTLINE (58)

    /** pathopen.e:669			close(scan_result[2])*/
    // SubProg e_path_find pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_50431);
    _26149 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg e_path_find pc: 85 op: CLOSE (86)
    if (IS_ATOM_INT(_26149))
    EClose(_26149);
    else
    EClose((object)DBL_PTR(_26149)->dbl);
    _26149 = NOVALUE;
    // SubProg e_path_find pc: 87 op: STARTLINE (58)

    /** pathopen.e:670			return scan_result[1]*/
    // SubProg e_path_find pc: 89 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_50431);
    _26150 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg e_path_find pc: 93 op: RETURNF (28)
    Ref(_26150);

// Exiting block BLOCK: e_path_find

// block var name_50430
    DeRefDS(_name_50430);

// block var scan_result_50431
    DeRef(_scan_result_50431);
    return _26150;
    // SubProg e_path_find pc: 97 op: NOP1 (159)
L5: // addr: 98 pc: 97 sub: 50428 op: 159
    // SubProg e_path_find pc: 98 op: STARTLINE (58)

    /** pathopen.e:673		return -1*/
    // SubProg e_path_find pc: 100 op: RETURNF (28)

// Exiting block BLOCK: e_path_find

// block var name_50430
    DeRefDS(_name_50430);

// block var scan_result_50431
    DeRef(_scan_result_50431);
    _26150 = NOVALUE;
    return -1;
    // SubProg e_path_find pc: 104 op: BADRETURNF (43)
    ;
}



// 0xD0075B6F
