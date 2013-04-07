// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _50exe_path()
{
    object _25739 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:70		if sequence(exe_path_cache) then*/
    _25739 = IS_SEQUENCE(_50exe_path_cache_49800);
    if (_25739 == 0)
    {
        _25739 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25739 = NOVALUE;
    }

    /** pathopen.e:71			return exe_path_cache*/
    Ref(_50exe_path_cache_49800);
    return _50exe_path_cache_49800;
L1: 

    /** pathopen.e:74		exe_path_cache = command_line()*/
    DeRef(_50exe_path_cache_49800);
    _50exe_path_cache_49800 = Command_Line();

    /** pathopen.e:75		exe_path_cache = exe_path_cache[1]*/
    _0 = _50exe_path_cache_49800;
    _2 = (object)SEQ_PTR(_50exe_path_cache_49800);
    _50exe_path_cache_49800 = (object)*(((s1_ptr)_2)->base + 1);
    RefDS(_50exe_path_cache_49800);
    DeRefDS(_0);

    /** pathopen.e:77		return exe_path_cache*/
    RefDS(_50exe_path_cache_49800);
    return _50exe_path_cache_49800;
    ;
}


object _50check_cache(object _env_49812, object _inc_path_49813)
{
    object _delim_49814 = NOVALUE;
    object _pos_49815 = NOVALUE;
    object _25787 = NOVALUE;
    object _25786 = NOVALUE;
    object _25785 = NOVALUE;
    object _25784 = NOVALUE;
    object _25782 = NOVALUE;
    object _25781 = NOVALUE;
    object _25780 = NOVALUE;
    object _25779 = NOVALUE;
    object _25778 = NOVALUE;
    object _25777 = NOVALUE;
    object _25776 = NOVALUE;
    object _25775 = NOVALUE;
    object _25774 = NOVALUE;
    object _25770 = NOVALUE;
    object _25769 = NOVALUE;
    object _25768 = NOVALUE;
    object _25767 = NOVALUE;
    object _25766 = NOVALUE;
    object _25765 = NOVALUE;
    object _25764 = NOVALUE;
    object _25763 = NOVALUE;
    object _25761 = NOVALUE;
    object _25760 = NOVALUE;
    object _25759 = NOVALUE;
    object _25758 = NOVALUE;
    object _25757 = NOVALUE;
    object _25756 = NOVALUE;
    object _25754 = NOVALUE;
    object _25753 = NOVALUE;
    object _25752 = NOVALUE;
    object _25751 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:83		if not num_var then -- first time the var is accessed, add cache entry*/
    if (_50num_var_49789 != 0)
    goto L1; // [9] 86

    /** pathopen.e:84			cache_vars = append(cache_vars,env)*/
    RefDS(_env_49812);
    Append(&_50cache_vars_49790, _50cache_vars_49790, _env_49812);

    /** pathopen.e:85			cache_strings = append(cache_strings,inc_path)*/
    RefDS(_inc_path_49813);
    Append(&_50cache_strings_49791, _50cache_strings_49791, _inc_path_49813);

    /** pathopen.e:86			cache_substrings = append(cache_substrings,{})*/
    RefDS(_21928);
    Append(&_50cache_substrings_49792, _50cache_substrings_49792, _21928);

    /** pathopen.e:87			cache_starts = append(cache_starts,{})*/
    RefDS(_21928);
    Append(&_50cache_starts_49793, _50cache_starts_49793, _21928);

    /** pathopen.e:88			cache_ends = append(cache_ends,{})*/
    RefDS(_21928);
    Append(&_50cache_ends_49794, _50cache_ends_49794, _21928);

    /** pathopen.e:89			ifdef WINDOWS then*/

    /** pathopen.e:92			num_var = length(cache_vars)*/
    if (IS_SEQUENCE(_50cache_vars_49790)){
            _50num_var_49789 = SEQ_PTR(_50cache_vars_49790)->length;
    }
    else {
        _50num_var_49789 = 1;
    }

    /** pathopen.e:93			cache_complete &= 0*/
    Append(&_50cache_complete_49796, _50cache_complete_49796, 0);

    /** pathopen.e:94			cache_delims &= 0*/
    Append(&_50cache_delims_49797, _50cache_delims_49797, 0);

    /** pathopen.e:95			return 0*/
    DeRefDSi(_env_49812);
    DeRefDSi(_inc_path_49813);
    return 0;
    goto L2; // [83] 425
L1: 

    /** pathopen.e:97			if compare(inc_path,cache_strings[num_var]) then*/
    _2 = (object)SEQ_PTR(_50cache_strings_49791);
    _25751 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    if (IS_ATOM_INT(_inc_path_49813) && IS_ATOM_INT(_25751)){
        _25752 = (_inc_path_49813 < _25751) ? -1 : (_inc_path_49813 > _25751);
    }
    else{
        _25752 = compare(_inc_path_49813, _25751);
    }
    _25751 = NOVALUE;
    if (_25752 == 0)
    {
        _25752 = NOVALUE;
        goto L3; // [100] 424
    }
    else{
        _25752 = NOVALUE;
    }

    /** pathopen.e:98				cache_strings[num_var] = inc_path*/
    RefDS(_inc_path_49813);
    _2 = (object)SEQ_PTR(_50cache_strings_49791);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _50cache_strings_49791 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _inc_path_49813;
    DeRefDS(_1);

    /** pathopen.e:99				cache_complete[num_var] = 0*/
    _2 = (object)SEQ_PTR(_50cache_complete_49796);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _50cache_complete_49796 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
    *(intptr_t *)_2 = 0;

    /** pathopen.e:100				if match(cache_strings[num_var],inc_path)!=1 then -- try to salvage what we can*/
    _2 = (object)SEQ_PTR(_50cache_strings_49791);
    _25753 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    _25754 = e_match_from(_25753, _inc_path_49813, 1);
    _25753 = NOVALUE;
    if (_25754 == 1)
    goto L4; // [138] 423

    /** pathopen.e:101					pos = -1*/
    _pos_49815 = -1;

    /** pathopen.e:102					for i=1 to length(cache_strings[num_var]) do*/
    _2 = (object)SEQ_PTR(_50cache_strings_49791);
    _25756 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    if (IS_SEQUENCE(_25756)){
            _25757 = SEQ_PTR(_25756)->length;
    }
    else {
        _25757 = 1;
    }
    _25756 = NOVALUE;
    {
        object _i_49835;
        _i_49835 = 1;
L5: 
        if (_i_49835 > _25757){
            goto L6; // [160] 422
        }

        /** pathopen.e:103						if cache_ends[num_var][i] > length(inc_path) or */
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        _25758 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        _2 = (object)SEQ_PTR(_25758);
        _25759 = (object)*(((s1_ptr)_2)->base + _i_49835);
        _25758 = NOVALUE;
        if (IS_SEQUENCE(_inc_path_49813)){
                _25760 = SEQ_PTR(_inc_path_49813)->length;
        }
        else {
            _25760 = 1;
        }
        if (IS_ATOM_INT(_25759)) {
            _25761 = (_25759 > _25760);
        }
        else {
            _25761 = binary_op(GREATER, _25759, _25760);
        }
        _25759 = NOVALUE;
        _25760 = NOVALUE;
        if (IS_ATOM_INT(_25761)) {
            if (_25761 != 0) {
                goto L7; // [188] 242
            }
        }
        else {
            if (DBL_PTR(_25761)->dbl != 0.0) {
                goto L7; // [188] 242
            }
        }
        _2 = (object)SEQ_PTR(_50cache_substrings_49792);
        _25763 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        _2 = (object)SEQ_PTR(_25763);
        _25764 = (object)*(((s1_ptr)_2)->base + _i_49835);
        _25763 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_starts_49793);
        _25765 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        _2 = (object)SEQ_PTR(_25765);
        _25766 = (object)*(((s1_ptr)_2)->base + _i_49835);
        _25765 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        _25767 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        _2 = (object)SEQ_PTR(_25767);
        _25768 = (object)*(((s1_ptr)_2)->base + _i_49835);
        _25767 = NOVALUE;
        rhs_slice_target = (object_ptr)&_25769;
        RHS_Slice(_inc_path_49813, _25766, _25768);
        if (IS_ATOM_INT(_25764) && IS_ATOM_INT(_25769)){
            _25770 = (_25764 < _25769) ? -1 : (_25764 > _25769);
        }
        else{
            _25770 = compare(_25764, _25769);
        }
        _25764 = NOVALUE;
        DeRefDS(_25769);
        _25769 = NOVALUE;
        if (_25770 == 0)
        {
            _25770 = NOVALUE;
            goto L8; // [238] 253
        }
        else{
            _25770 = NOVALUE;
        }
L7: 

        /** pathopen.e:107							pos = i-1*/
        _pos_49815 = _i_49835 - 1;

        /** pathopen.e:108							exit*/
        goto L6; // [250] 422
L8: 

        /** pathopen.e:110						if pos = 0 then*/
        if (_pos_49815 != 0)
        goto L9; // [255] 268

        /** pathopen.e:111							return 0*/
        DeRefDSi(_env_49812);
        DeRefDSi(_inc_path_49813);
        _25766 = NOVALUE;
        _25756 = NOVALUE;
        DeRef(_25761);
        _25761 = NOVALUE;
        _25768 = NOVALUE;
        return 0;
        goto LA; // [265] 415
L9: 

        /** pathopen.e:112						elsif pos >0 then -- crop cache data*/
        if (_pos_49815 <= 0)
        goto LB; // [270] 414

        /** pathopen.e:113							cache_substrings[num_var] = cache_substrings[num_var][1..pos]*/
        _2 = (object)SEQ_PTR(_50cache_substrings_49792);
        _25774 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        rhs_slice_target = (object_ptr)&_25775;
        RHS_Slice(_25774, 1, _pos_49815);
        _25774 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_substrings_49792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_substrings_49792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25775;
        if( _1 != _25775 ){
            DeRefDS(_1);
        }
        _25775 = NOVALUE;

        /** pathopen.e:114							cache_starts[num_var] = cache_starts[num_var][1..pos]*/
        _2 = (object)SEQ_PTR(_50cache_starts_49793);
        _25776 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        rhs_slice_target = (object_ptr)&_25777;
        RHS_Slice(_25776, 1, _pos_49815);
        _25776 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_starts_49793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_starts_49793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25777;
        if( _1 != _25777 ){
            DeRef(_1);
        }
        _25777 = NOVALUE;

        /** pathopen.e:115							cache_ends[num_var] = cache_ends[num_var][1..pos]*/
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        _25778 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        rhs_slice_target = (object_ptr)&_25779;
        RHS_Slice(_25778, 1, _pos_49815);
        _25778 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_ends_49794 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25779;
        if( _1 != _25779 ){
            DeRef(_1);
        }
        _25779 = NOVALUE;

        /** pathopen.e:116							ifdef WINDOWS then*/

        /** pathopen.e:119							delim = cache_ends[num_var][$]+1*/
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        _25780 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        if (IS_SEQUENCE(_25780)){
                _25781 = SEQ_PTR(_25780)->length;
        }
        else {
            _25781 = 1;
        }
        _2 = (object)SEQ_PTR(_25780);
        _25782 = (object)*(((s1_ptr)_2)->base + _25781);
        _25780 = NOVALUE;
        if (IS_ATOM_INT(_25782)) {
            _delim_49814 = _25782 + 1;
        }
        else
        { // coercing _delim_49814 to an integer 1
            _delim_49814 = 1+(object)(DBL_PTR(_25782)->dbl);
            if( !IS_ATOM_INT(_delim_49814) ){
                _delim_49814 = (object)DBL_PTR(_delim_49814)->dbl;
            }
        }
        _25782 = NOVALUE;

        /** pathopen.e:120							while delim <= length(inc_path) and delim != PATH_SEPARATOR do*/
LC: 
        if (IS_SEQUENCE(_inc_path_49813)){
                _25784 = SEQ_PTR(_inc_path_49813)->length;
        }
        else {
            _25784 = 1;
        }
        _25785 = (_delim_49814 <= _25784);
        _25784 = NOVALUE;
        if (_25785 == 0) {
            goto LD; // [378] 403
        }
        _25787 = (_delim_49814 != 58);
        if (_25787 == 0)
        {
            DeRef(_25787);
            _25787 = NOVALUE;
            goto LD; // [389] 403
        }
        else{
            DeRef(_25787);
            _25787 = NOVALUE;
        }

        /** pathopen.e:121								delim+=1*/
        _delim_49814 = _delim_49814 + 1;

        /** pathopen.e:122							end while*/
        goto LC; // [400] 371
LD: 

        /** pathopen.e:123							cache_delims[num_var] = delim*/
        _2 = (object)SEQ_PTR(_50cache_delims_49797);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_delims_49797 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        *(intptr_t *)_2 = _delim_49814;
LB: 
LA: 

        /** pathopen.e:125					end for*/
        _i_49835 = _i_49835 + 1;
        goto L5; // [417] 167
L6: 
        ;
    }
L4: 
L3: 
L2: 

    /** pathopen.e:129		return 1*/
    DeRefDSi(_env_49812);
    DeRefDSi(_inc_path_49813);
    DeRef(_25785);
    _25785 = NOVALUE;
    _25766 = NOVALUE;
    _25756 = NOVALUE;
    DeRef(_25761);
    _25761 = NOVALUE;
    _25768 = NOVALUE;
    return 1;
    ;
}


object _50get_conf_dirs()
{
    object _delimiter_49876 = NOVALUE;
    object _dirs_49877 = NOVALUE;
    object _25792 = NOVALUE;
    object _25790 = NOVALUE;
    object _25789 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:136		ifdef UNIX then*/

    /** pathopen.e:137			delimiter = ':'*/
    _delimiter_49876 = 58;

    /** pathopen.e:142		dirs = ""*/
    RefDS(_21928);
    DeRef(_dirs_49877);
    _dirs_49877 = _21928;

    /** pathopen.e:143		for i = 1 to length(config_inc_paths) do*/
    if (IS_SEQUENCE(_50config_inc_paths_49798)){
            _25789 = SEQ_PTR(_50config_inc_paths_49798)->length;
    }
    else {
        _25789 = 1;
    }
    {
        object _i_49879;
        _i_49879 = 1;
L1: 
        if (_i_49879 > _25789){
            goto L2; // [22] 68
        }

        /** pathopen.e:144			dirs &= config_inc_paths[i]*/
        _2 = (object)SEQ_PTR(_50config_inc_paths_49798);
        _25790 = (object)*(((s1_ptr)_2)->base + _i_49879);
        Concat((object_ptr)&_dirs_49877, _dirs_49877, _25790);
        _25790 = NOVALUE;

        /** pathopen.e:145			if i != length(config_inc_paths) then*/
        if (IS_SEQUENCE(_50config_inc_paths_49798)){
                _25792 = SEQ_PTR(_50config_inc_paths_49798)->length;
        }
        else {
            _25792 = 1;
        }
        if (_i_49879 == _25792)
        goto L3; // [48] 61

        /** pathopen.e:146				dirs &= delimiter*/
        Append(&_dirs_49877, _dirs_49877, _delimiter_49876);
L3: 

        /** pathopen.e:148		end for*/
        _i_49879 = _i_49879 + 1;
        goto L1; // [63] 29
L2: 
        ;
    }

    /** pathopen.e:150		return dirs*/
    return _dirs_49877;
    ;
}


object _50strip_file_from_path(object _full_path_49889)
{
    object _25798 = NOVALUE;
    object _25796 = NOVALUE;
    object _25795 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:156		for i = length(full_path) to 1 by -1 do*/
    if (IS_SEQUENCE(_full_path_49889)){
            _25795 = SEQ_PTR(_full_path_49889)->length;
    }
    else {
        _25795 = 1;
    }
    {
        object _i_49891;
        _i_49891 = _25795;
L1: 
        if (_i_49891 < 1){
            goto L2; // [8] 46
        }

        /** pathopen.e:157			if full_path[i] = SLASH then*/
        _2 = (object)SEQ_PTR(_full_path_49889);
        _25796 = (object)*(((s1_ptr)_2)->base + _i_49891);
        if (binary_op_a(NOTEQ, _25796, 47)){
            _25796 = NOVALUE;
            goto L3; // [23] 39
        }
        _25796 = NOVALUE;

        /** pathopen.e:158				return full_path[1..i]*/
        rhs_slice_target = (object_ptr)&_25798;
        RHS_Slice(_full_path_49889, 1, _i_49891);
        DeRefDS(_full_path_49889);
        return _25798;
L3: 

        /** pathopen.e:160		end for*/
        _i_49891 = _i_49891 + -1;
        goto L1; // [41] 15
L2: 
        ;
    }

    /** pathopen.e:162		return ""*/
    RefDS(_21928);
    DeRefDS(_full_path_49889);
    DeRef(_25798);
    _25798 = NOVALUE;
    return _21928;
    ;
}


object _50expand_path(object _path_49900, object _prefix_49901)
{
    object _absolute_49902 = NOVALUE;
    object _home_49906 = NOVALUE;
    object _25822 = NOVALUE;
    object _25821 = NOVALUE;
    object _25820 = NOVALUE;
    object _25819 = NOVALUE;
    object _25818 = NOVALUE;
    object _25817 = NOVALUE;
    object _25813 = NOVALUE;
    object _25811 = NOVALUE;
    object _25810 = NOVALUE;
    object _25809 = NOVALUE;
    object _25808 = NOVALUE;
    object _25807 = NOVALUE;
    object _25804 = NOVALUE;
    object _25803 = NOVALUE;
    object _25802 = NOVALUE;
    object _25801 = NOVALUE;
    object _25799 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:169		if not length(path) then*/
    if (IS_SEQUENCE(_path_49900)){
            _25799 = SEQ_PTR(_path_49900)->length;
    }
    else {
        _25799 = 1;
    }
    if (_25799 != 0)
    goto L1; // [10] 22
    _25799 = NOVALUE;

    /** pathopen.e:170			return pwd*/
    RefDS(_50pwd_49801);
    DeRefDS(_path_49900);
    DeRefDS(_prefix_49901);
    DeRefi(_home_49906);
    return _50pwd_49801;
L1: 

    /** pathopen.e:174		ifdef UNIX then*/

    /** pathopen.e:175			object home*/

    /** pathopen.e:176			if length(path) and path[1] = '~' then*/
    if (IS_SEQUENCE(_path_49900)){
            _25801 = SEQ_PTR(_path_49900)->length;
    }
    else {
        _25801 = 1;
    }
    if (_25801 == 0) {
        goto L2; // [31] 84
    }
    _2 = (object)SEQ_PTR(_path_49900);
    _25803 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_25803)) {
        _25804 = (_25803 == 126);
    }
    else {
        _25804 = binary_op(EQUALS, _25803, 126);
    }
    _25803 = NOVALUE;
    if (_25804 == 0) {
        DeRef(_25804);
        _25804 = NOVALUE;
        goto L2; // [44] 84
    }
    else {
        if (!IS_ATOM_INT(_25804) && DBL_PTR(_25804)->dbl == 0.0){
            DeRef(_25804);
            _25804 = NOVALUE;
            goto L2; // [44] 84
        }
        DeRef(_25804);
        _25804 = NOVALUE;
    }
    DeRef(_25804);
    _25804 = NOVALUE;

    /** pathopen.e:177				home = getenv("HOME")*/
    DeRefi(_home_49906);
    _home_49906 = EGetEnv(_25805);

    /** pathopen.e:178				if sequence(home) and length(home) then*/
    _25807 = IS_SEQUENCE(_home_49906);
    if (_25807 == 0) {
        goto L3; // [57] 83
    }
    if (IS_SEQUENCE(_home_49906)){
            _25809 = SEQ_PTR(_home_49906)->length;
    }
    else {
        _25809 = 1;
    }
    if (_25809 == 0)
    {
        _25809 = NOVALUE;
        goto L3; // [65] 83
    }
    else{
        _25809 = NOVALUE;
    }

    /** pathopen.e:179					path = home & path[2..$]*/
    if (IS_SEQUENCE(_path_49900)){
            _25810 = SEQ_PTR(_path_49900)->length;
    }
    else {
        _25810 = 1;
    }
    rhs_slice_target = (object_ptr)&_25811;
    RHS_Slice(_path_49900, 2, _25810);
    if (IS_SEQUENCE(_home_49906) && IS_ATOM(_25811)) {
    }
    else if (IS_ATOM(_home_49906) && IS_SEQUENCE(_25811)) {
        Ref(_home_49906);
        Prepend(&_path_49900, _25811, _home_49906);
    }
    else {
        Concat((object_ptr)&_path_49900, _home_49906, _25811);
    }
    DeRefDS(_25811);
    _25811 = NOVALUE;
L3: 
L2: 

    /** pathopen.e:183			absolute = find(path[1], SLASH_CHARS)*/
    _2 = (object)SEQ_PTR(_path_49900);
    _25813 = (object)*(((s1_ptr)_2)->base + 1);
    _absolute_49902 = find_from(_25813, _43SLASH_CHARS_21608, 1);
    _25813 = NOVALUE;

    /** pathopen.e:188		if not absolute then*/
    if (_absolute_49902 != 0)
    goto L4; // [101] 115

    /** pathopen.e:189			path = prefix & SLASH & path*/
    {
        object concat_list[3];

        concat_list[0] = _path_49900;
        concat_list[1] = 47;
        concat_list[2] = _prefix_49901;
        Concat_N((object_ptr)&_path_49900, concat_list, 3);
    }
L4: 

    /** pathopen.e:192		if length(path) and not find(path[$], SLASH_CHARS) then*/
    if (IS_SEQUENCE(_path_49900)){
            _25817 = SEQ_PTR(_path_49900)->length;
    }
    else {
        _25817 = 1;
    }
    if (_25817 == 0) {
        goto L5; // [120] 154
    }
    if (IS_SEQUENCE(_path_49900)){
            _25819 = SEQ_PTR(_path_49900)->length;
    }
    else {
        _25819 = 1;
    }
    _2 = (object)SEQ_PTR(_path_49900);
    _25820 = (object)*(((s1_ptr)_2)->base + _25819);
    _25821 = find_from(_25820, _43SLASH_CHARS_21608, 1);
    _25820 = NOVALUE;
    _25822 = (_25821 == 0);
    _25821 = NOVALUE;
    if (_25822 == 0)
    {
        DeRef(_25822);
        _25822 = NOVALUE;
        goto L5; // [142] 154
    }
    else{
        DeRef(_25822);
        _25822 = NOVALUE;
    }

    /** pathopen.e:193			path &= SLASH*/
    Append(&_path_49900, _path_49900, 47);
L5: 

    /** pathopen.e:196		return path*/
    DeRefDS(_prefix_49901);
    DeRefi(_home_49906);
    return _path_49900;
    ;
}


void _50add_include_directory(object _path_49940)
{
    object _25825 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:200		path = expand_path( path, pwd )*/
    RefDS(_path_49940);
    RefDS(_50pwd_49801);
    _0 = _path_49940;
    _path_49940 = _50expand_path(_path_49940, _50pwd_49801);
    DeRefDS(_0);

    /** pathopen.e:202		if not find( path, config_inc_paths ) then*/
    _25825 = find_from(_path_49940, _50config_inc_paths_49798, 1);
    if (_25825 != 0)
    goto L1; // [23] 35
    _25825 = NOVALUE;

    /** pathopen.e:203			config_inc_paths = append( config_inc_paths, path )*/
    RefDS(_path_49940);
    Append(&_50config_inc_paths_49798, _50config_inc_paths_49798, _path_49940);
L1: 

    /** pathopen.e:205	end procedure*/
    DeRefDS(_path_49940);
    return;
    ;
}


object _50load_euphoria_config(object _file_49949)
{
    object _fn_49950 = NOVALUE;
    object _in_49951 = NOVALUE;
    object _spos_49952 = NOVALUE;
    object _epos_49953 = NOVALUE;
    object _conf_path_49954 = NOVALUE;
    object _new_args_49955 = NOVALUE;
    object _arg_49956 = NOVALUE;
    object _parm_49957 = NOVALUE;
    object _section_49958 = NOVALUE;
    object _needed_50055 = NOVALUE;
    object _25922 = NOVALUE;
    object _25921 = NOVALUE;
    object _25918 = NOVALUE;
    object _25916 = NOVALUE;
    object _25915 = NOVALUE;
    object _25893 = NOVALUE;
    object _25890 = NOVALUE;
    object _25889 = NOVALUE;
    object _25887 = NOVALUE;
    object _25883 = NOVALUE;
    object _25881 = NOVALUE;
    object _25879 = NOVALUE;
    object _25877 = NOVALUE;
    object _25875 = NOVALUE;
    object _25873 = NOVALUE;
    object _25872 = NOVALUE;
    object _25871 = NOVALUE;
    object _25870 = NOVALUE;
    object _25869 = NOVALUE;
    object _25868 = NOVALUE;
    object _25867 = NOVALUE;
    object _25866 = NOVALUE;
    object _25864 = NOVALUE;
    object _25862 = NOVALUE;
    object _25860 = NOVALUE;
    object _25856 = NOVALUE;
    object _25855 = NOVALUE;
    object _25850 = NOVALUE;
    object _25848 = NOVALUE;
    object _25846 = NOVALUE;
    object _25845 = NOVALUE;
    object _25837 = NOVALUE;
    object _25831 = NOVALUE;
    object _25830 = NOVALUE;
    object _25828 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:213		sequence new_args = {}*/
    RefDS(_21928);
    DeRef(_new_args_49955);
    _new_args_49955 = _21928;

    /** pathopen.e:219		if file_type(file) = FILETYPE_DIRECTORY then*/
    RefDS(_file_49949);
    _25828 = _16file_type(_file_49949);
    if (binary_op_a(NOTEQ, _25828, 2)){
        DeRef(_25828);
        _25828 = NOVALUE;
        goto L1; // [18] 53
    }
    DeRef(_25828);
    _25828 = NOVALUE;

    /** pathopen.e:220			if file[$] != SLASH then*/
    if (IS_SEQUENCE(_file_49949)){
            _25830 = SEQ_PTR(_file_49949)->length;
    }
    else {
        _25830 = 1;
    }
    _2 = (object)SEQ_PTR(_file_49949);
    _25831 = (object)*(((s1_ptr)_2)->base + _25830);
    if (binary_op_a(EQUALS, _25831, 47)){
        _25831 = NOVALUE;
        goto L2; // [33] 46
    }
    _25831 = NOVALUE;

    /** pathopen.e:221				file &= SLASH*/
    Append(&_file_49949, _file_49949, 47);
L2: 

    /** pathopen.e:223			file &= "eu.cfg"*/
    Concat((object_ptr)&_file_49949, _file_49949, _25834);
L1: 

    /** pathopen.e:226		conf_path = canonical_path( file,,CORRECT )*/
    RefDS(_file_49949);
    _0 = _conf_path_49954;
    _conf_path_49954 = _16canonical_path(_file_49949, 0, 2);
    DeRef(_0);

    /** pathopen.e:229		if find(conf_path, seen_conf) != 0 then*/
    _25837 = find_from(_conf_path_49954, _50seen_conf_49946, 1);
    if (_25837 == 0)
    goto L3; // [74] 85

    /** pathopen.e:230			return {}*/
    RefDS(_21928);
    DeRefDS(_file_49949);
    DeRefi(_in_49951);
    DeRefDS(_conf_path_49954);
    DeRef(_new_args_49955);
    DeRefi(_arg_49956);
    DeRefi(_parm_49957);
    DeRef(_section_49958);
    return _21928;
L3: 

    /** pathopen.e:232		seen_conf = append(seen_conf, conf_path)*/
    RefDS(_conf_path_49954);
    Append(&_50seen_conf_49946, _50seen_conf_49946, _conf_path_49954);

    /** pathopen.e:234		section = "all"*/
    RefDS(_25840);
    DeRef(_section_49958);
    _section_49958 = _25840;

    /** pathopen.e:235		fn = open( conf_path, "r" )*/
    _fn_49950 = EOpen(_conf_path_49954, _25841, 0);

    /** pathopen.e:236		if fn = -1 then return {} end if*/
    if (_fn_49950 != -1)
    goto L4; // [109] 118
    RefDS(_21928);
    DeRefDS(_file_49949);
    DeRefi(_in_49951);
    DeRefDS(_conf_path_49954);
    DeRef(_new_args_49955);
    DeRefi(_arg_49956);
    DeRefi(_parm_49957);
    DeRefDSi(_section_49958);
    return _21928;
L4: 

    /** pathopen.e:238		in = gets( fn )*/
    DeRefi(_in_49951);
    _in_49951 = EGets(_fn_49950);

    /** pathopen.e:239		while sequence( in ) do*/
L5: 
    _25845 = IS_SEQUENCE(_in_49951);
    if (_25845 == 0)
    {
        _25845 = NOVALUE;
        goto L6; // [131] 768
    }
    else{
        _25845 = NOVALUE;
    }

    /** pathopen.e:241			spos = 1*/
    _spos_49952 = 1;

    /** pathopen.e:242			while spos <= length(in) do*/
L7: 
    if (IS_SEQUENCE(_in_49951)){
            _25846 = SEQ_PTR(_in_49951)->length;
    }
    else {
        _25846 = 1;
    }
    if (_spos_49952 > _25846)
    goto L8; // [147] 182

    /** pathopen.e:243				if find( in[spos], "\n\r \t" ) = 0 then*/
    _2 = (object)SEQ_PTR(_in_49951);
    _25848 = (object)*(((s1_ptr)_2)->base + _spos_49952);
    _25850 = find_from(_25848, _25849, 1);
    _25848 = NOVALUE;
    if (_25850 != 0)
    goto L9; // [162] 171

    /** pathopen.e:244					exit*/
    goto L8; // [168] 182
L9: 

    /** pathopen.e:246				spos += 1*/
    _spos_49952 = _spos_49952 + 1;

    /** pathopen.e:247			end while*/
    goto L7; // [179] 144
L8: 

    /** pathopen.e:249			epos = length(in)*/
    if (IS_SEQUENCE(_in_49951)){
            _epos_49953 = SEQ_PTR(_in_49951)->length;
    }
    else {
        _epos_49953 = 1;
    }

    /** pathopen.e:250			while epos >= spos do*/
LA: 
    if (_epos_49953 < _spos_49952)
    goto LB; // [192] 227

    /** pathopen.e:251				if find( in[epos], "\n\r \t" ) = 0 then*/
    _2 = (object)SEQ_PTR(_in_49951);
    _25855 = (object)*(((s1_ptr)_2)->base + _epos_49953);
    _25856 = find_from(_25855, _25849, 1);
    _25855 = NOVALUE;
    if (_25856 != 0)
    goto LC; // [207] 216

    /** pathopen.e:252					exit*/
    goto LB; // [213] 227
LC: 

    /** pathopen.e:254				epos -= 1*/
    _epos_49953 = _epos_49953 - 1;

    /** pathopen.e:255			end while*/
    goto LA; // [224] 192
LB: 

    /** pathopen.e:257			in = in[spos .. epos]		*/
    rhs_slice_target = (object_ptr)&_in_49951;
    RHS_Slice(_in_49951, _spos_49952, _epos_49953);

    /** pathopen.e:260			arg = ""*/
    RefDS(_21928);
    DeRefi(_arg_49956);
    _arg_49956 = _21928;

    /** pathopen.e:261			parm = ""*/
    RefDS(_21928);
    DeRefi(_parm_49957);
    _parm_49957 = _21928;

    /** pathopen.e:269			if length(in) > 0 then*/
    if (IS_SEQUENCE(_in_49951)){
            _25860 = SEQ_PTR(_in_49951)->length;
    }
    else {
        _25860 = 1;
    }
    if (_25860 <= 0)
    goto LD; // [253] 477

    /** pathopen.e:270				if in[1] = '[' then*/
    _2 = (object)SEQ_PTR(_in_49951);
    _25862 = (object)*(((s1_ptr)_2)->base + 1);
    if (_25862 != 91)
    goto LE; // [263] 354

    /** pathopen.e:272					section = in[2..$]*/
    if (IS_SEQUENCE(_in_49951)){
            _25864 = SEQ_PTR(_in_49951)->length;
    }
    else {
        _25864 = 1;
    }
    rhs_slice_target = (object_ptr)&_section_49958;
    RHS_Slice(_in_49951, 2, _25864);

    /** pathopen.e:273					if length(section) > 0 and section[$] = ']' then*/
    if (IS_SEQUENCE(_section_49958)){
            _25866 = SEQ_PTR(_section_49958)->length;
    }
    else {
        _25866 = 1;
    }
    _25867 = (_25866 > 0);
    _25866 = NOVALUE;
    if (_25867 == 0) {
        goto LF; // [286] 320
    }
    if (IS_SEQUENCE(_section_49958)){
            _25869 = SEQ_PTR(_section_49958)->length;
    }
    else {
        _25869 = 1;
    }
    _2 = (object)SEQ_PTR(_section_49958);
    _25870 = (object)*(((s1_ptr)_2)->base + _25869);
    _25871 = (_25870 == 93);
    _25870 = NOVALUE;
    if (_25871 == 0)
    {
        DeRef(_25871);
        _25871 = NOVALUE;
        goto LF; // [302] 320
    }
    else{
        DeRef(_25871);
        _25871 = NOVALUE;
    }

    /** pathopen.e:274						section = section[1..$-1]*/
    if (IS_SEQUENCE(_section_49958)){
            _25872 = SEQ_PTR(_section_49958)->length;
    }
    else {
        _25872 = 1;
    }
    _25873 = _25872 - 1;
    _25872 = NOVALUE;
    rhs_slice_target = (object_ptr)&_section_49958;
    RHS_Slice(_section_49958, 1, _25873);
LF: 

    /** pathopen.e:276					section = lower(trim(section))*/
    RefDS(_section_49958);
    RefDS(_4749);
    _25875 = _13trim(_section_49958, _4749, 0);
    _0 = _section_49958;
    _section_49958 = _13lower(_25875);
    DeRefDS(_0);
    _25875 = NOVALUE;

    /** pathopen.e:277					if length(section) = 0 then*/
    if (IS_SEQUENCE(_section_49958)){
            _25877 = SEQ_PTR(_section_49958)->length;
    }
    else {
        _25877 = 1;
    }
    if (_25877 != 0)
    goto L10; // [339] 476

    /** pathopen.e:278						section = "all"*/
    RefDS(_25840);
    DeRefDS(_section_49958);
    _section_49958 = _25840;
    goto L10; // [351] 476
LE: 

    /** pathopen.e:281				elsif length(in) > 2 then*/
    if (IS_SEQUENCE(_in_49951)){
            _25879 = SEQ_PTR(_in_49951)->length;
    }
    else {
        _25879 = 1;
    }
    if (_25879 <= 2)
    goto L11; // [359] 461

    /** pathopen.e:282					if in[1] = '-' then*/
    _2 = (object)SEQ_PTR(_in_49951);
    _25881 = (object)*(((s1_ptr)_2)->base + 1);
    if (_25881 != 45)
    goto L12; // [369] 443

    /** pathopen.e:283						if in[2] != '-' then*/
    _2 = (object)SEQ_PTR(_in_49951);
    _25883 = (object)*(((s1_ptr)_2)->base + 2);
    if (_25883 == 45)
    goto L10; // [379] 476

    /** pathopen.e:284							spos = find(' ', in)*/
    _spos_49952 = find_from(32, _in_49951, 1);

    /** pathopen.e:285							if spos = 0 then*/
    if (_spos_49952 != 0)
    goto L13; // [392] 413

    /** pathopen.e:286								arg = in*/
    Ref(_in_49951);
    DeRefi(_arg_49956);
    _arg_49956 = _in_49951;

    /** pathopen.e:287								parm = ""*/
    RefDS(_21928);
    DeRefi(_parm_49957);
    _parm_49957 = _21928;
    goto L10; // [410] 476
L13: 

    /** pathopen.e:289								arg = in[1..spos - 1]*/
    _25887 = _spos_49952 - 1;
    rhs_slice_target = (object_ptr)&_arg_49956;
    RHS_Slice(_in_49951, 1, _25887);

    /** pathopen.e:290								parm = in[spos + 1 .. $]*/
    _25889 = _spos_49952 + 1;
    if (_25889 > MAXINT){
        _25889 = NewDouble((eudouble)_25889);
    }
    if (IS_SEQUENCE(_in_49951)){
            _25890 = SEQ_PTR(_in_49951)->length;
    }
    else {
        _25890 = 1;
    }
    rhs_slice_target = (object_ptr)&_parm_49957;
    RHS_Slice(_in_49951, _25889, _25890);
    goto L10; // [440] 476
L12: 

    /** pathopen.e:294						arg = "-i"*/
    RefDS(_25892);
    DeRefi(_arg_49956);
    _arg_49956 = _25892;

    /** pathopen.e:295						parm = in*/
    Ref(_in_49951);
    DeRefi(_parm_49957);
    _parm_49957 = _in_49951;
    goto L10; // [458] 476
L11: 

    /** pathopen.e:298					arg = "-i"*/
    RefDS(_25892);
    DeRefi(_arg_49956);
    _arg_49956 = _25892;

    /** pathopen.e:299					parm = in*/
    Ref(_in_49951);
    DeRefi(_parm_49957);
    _parm_49957 = _in_49951;
L10: 
LD: 

    /** pathopen.e:303			if length(arg) > 0 then*/
    if (IS_SEQUENCE(_arg_49956)){
            _25893 = SEQ_PTR(_arg_49956)->length;
    }
    else {
        _25893 = 1;
    }
    if (_25893 <= 0)
    goto L14; // [482] 756

    /** pathopen.e:304				integer needed = 0*/
    _needed_50055 = 0;

    /** pathopen.e:305				switch section do*/
    _1 = find(_section_49958, _25895);
    switch ( _1 ){ 

        /** pathopen.e:306					case "all" then*/
        case 1:

        /** pathopen.e:307						needed = 1*/
        _needed_50055 = 1;
        goto L15; // [507] 691

        /** pathopen.e:309					case "windows" then*/
        case 2:

        /** pathopen.e:310						needed = TWINDOWS*/
        _needed_50055 = 0;
        goto L15; // [522] 691

        /** pathopen.e:312					case "unix" then*/
        case 3:

        /** pathopen.e:313						needed = TUNIX*/
        _needed_50055 = _43TUNIX_21592;
        goto L15; // [537] 691

        /** pathopen.e:315					case "translate" then*/
        case 4:

        /** pathopen.e:316						needed = TRANSLATE*/
        _needed_50055 = _39TRANSLATE_16440;
        goto L15; // [552] 691

        /** pathopen.e:318					case "translate:windows" then*/
        case 5:

        /** pathopen.e:319						needed = TRANSLATE and TWINDOWS*/
        _needed_50055 = (_39TRANSLATE_16440 != 0 && 0 != 0);
        goto L15; // [570] 691

        /** pathopen.e:321					case "translate:unix" then*/
        case 6:

        /** pathopen.e:322						needed = TRANSLATE and TUNIX*/
        _needed_50055 = (_39TRANSLATE_16440 != 0 && _43TUNIX_21592 != 0);
        goto L15; // [588] 691

        /** pathopen.e:324					case "interpret" then*/
        case 7:

        /** pathopen.e:325						needed = INTERPRET*/
        _needed_50055 = _39INTERPRET_16437;
        goto L15; // [603] 691

        /** pathopen.e:327					case "interpret:windows" then*/
        case 8:

        /** pathopen.e:328						needed = INTERPRET and TWINDOWS*/
        _needed_50055 = (_39INTERPRET_16437 != 0 && 0 != 0);
        goto L15; // [621] 691

        /** pathopen.e:330					case "interpret:unix" then*/
        case 9:

        /** pathopen.e:331						needed = INTERPRET and TUNIX*/
        _needed_50055 = (_39INTERPRET_16437 != 0 && _43TUNIX_21592 != 0);
        goto L15; // [639] 691

        /** pathopen.e:333					case "bind" then*/
        case 10:

        /** pathopen.e:334						needed = BIND*/
        _needed_50055 = _39BIND_16443;
        goto L15; // [654] 691

        /** pathopen.e:336					case "bind:windows" then*/
        case 11:

        /** pathopen.e:337						needed = BIND and TWINDOWS*/
        _needed_50055 = (_39BIND_16443 != 0 && 0 != 0);
        goto L15; // [672] 691

        /** pathopen.e:339					case "bind:unix" then*/
        case 12:

        /** pathopen.e:340						needed = BIND and TUNIX*/
        _needed_50055 = (_39BIND_16443 != 0 && _43TUNIX_21592 != 0);
    ;}L15: 

    /** pathopen.e:344				if needed then*/
    if (_needed_50055 == 0)
    {
        goto L16; // [693] 755
    }
    else{
    }

    /** pathopen.e:345					if equal(arg, "-c") then*/
    if (_arg_49956 == _25914)
    _25915 = 1;
    else if (IS_ATOM_INT(_arg_49956) && IS_ATOM_INT(_25914))
    _25915 = 0;
    else
    _25915 = (compare(_arg_49956, _25914) == 0);
    if (_25915 == 0)
    {
        _25915 = NOVALUE;
        goto L17; // [702] 728
    }
    else{
        _25915 = NOVALUE;
    }

    /** pathopen.e:346						if length(parm) > 0 then*/
    if (IS_SEQUENCE(_parm_49957)){
            _25916 = SEQ_PTR(_parm_49957)->length;
    }
    else {
        _25916 = 1;
    }
    if (_25916 <= 0)
    goto L18; // [710] 754

    /** pathopen.e:347							new_args &= load_euphoria_config(parm)*/
    RefDS(_parm_49957);
    _25918 = _50load_euphoria_config(_parm_49957);
    if (IS_SEQUENCE(_new_args_49955) && IS_ATOM(_25918)) {
        Ref(_25918);
        Append(&_new_args_49955, _new_args_49955, _25918);
    }
    else if (IS_ATOM(_new_args_49955) && IS_SEQUENCE(_25918)) {
    }
    else {
        Concat((object_ptr)&_new_args_49955, _new_args_49955, _25918);
    }
    DeRef(_25918);
    _25918 = NOVALUE;
    goto L18; // [725] 754
L17: 

    /** pathopen.e:350						new_args = append(new_args, arg)*/
    RefDS(_arg_49956);
    Append(&_new_args_49955, _new_args_49955, _arg_49956);

    /** pathopen.e:351						if length(parm > 0) then*/
    _25921 = binary_op(GREATER, _parm_49957, 0);
    if (IS_SEQUENCE(_25921)){
            _25922 = SEQ_PTR(_25921)->length;
    }
    else {
        _25922 = 1;
    }
    DeRefDS(_25921);
    _25921 = NOVALUE;
    if (_25922 == 0)
    {
        _25922 = NOVALUE;
        goto L19; // [743] 753
    }
    else{
        _25922 = NOVALUE;
    }

    /** pathopen.e:352							new_args = append(new_args, parm)*/
    RefDS(_parm_49957);
    Append(&_new_args_49955, _new_args_49955, _parm_49957);
L19: 
L18: 
L16: 
L14: 

    /** pathopen.e:358			in = gets( fn )*/
    DeRefi(_in_49951);
    _in_49951 = EGets(_fn_49950);

    /** pathopen.e:359		end while*/
    goto L5; // [765] 128
L6: 

    /** pathopen.e:360		close(fn)*/
    EClose(_fn_49950);

    /** pathopen.e:362		return new_args*/
    DeRefDS(_file_49949);
    DeRefi(_in_49951);
    DeRef(_conf_path_49954);
    DeRefi(_arg_49956);
    DeRefi(_parm_49957);
    DeRef(_section_49958);
    DeRef(_25867);
    _25867 = NOVALUE;
    _25883 = NOVALUE;
    _25881 = NOVALUE;
    _25921 = NOVALUE;
    DeRef(_25873);
    _25873 = NOVALUE;
    _25862 = NOVALUE;
    DeRef(_25889);
    _25889 = NOVALUE;
    DeRef(_25887);
    _25887 = NOVALUE;
    return _new_args_49955;
    ;
}


object _50GetDefaultArgs(object _user_files_50122)
{
    object _env_50123 = NOVALUE;
    object _default_args_50124 = NOVALUE;
    object _conf_file_50125 = NOVALUE;
    object _cmd_options_50127 = NOVALUE;
    object _user_config_50133 = NOVALUE;
    object _25957 = NOVALUE;
    object _25956 = NOVALUE;
    object _25955 = NOVALUE;
    object _25947 = NOVALUE;
    object _25946 = NOVALUE;
    object _25944 = NOVALUE;
    object _25941 = NOVALUE;
    object _25940 = NOVALUE;
    object _25937 = NOVALUE;
    object _25936 = NOVALUE;
    object _25934 = NOVALUE;
    object _25932 = NOVALUE;
    object _25931 = NOVALUE;
    object _25927 = NOVALUE;
    object _25926 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:367		sequence default_args = {}*/
    RefDS(_21928);
    DeRef(_default_args_50124);
    _default_args_50124 = _21928;

    /** pathopen.e:368		sequence conf_file = "eu.cfg"*/
    RefDS(_25834);
    DeRefi(_conf_file_50125);
    _conf_file_50125 = _25834;

    /** pathopen.e:370		if loaded_config_inc_paths then return "" end if*/
    if (_50loaded_config_inc_paths_49799 == 0)
    {
        goto L1; // [21] 29
    }
    else{
    }
    RefDS(_21928);
    DeRefDS(_user_files_50122);
    DeRef(_env_50123);
    DeRefDS(_default_args_50124);
    DeRefDSi(_conf_file_50125);
    DeRef(_cmd_options_50127);
    return _21928;
L1: 

    /** pathopen.e:371		loaded_config_inc_paths = 1*/
    _50loaded_config_inc_paths_49799 = 1;

    /** pathopen.e:380		sequence cmd_options = get_options()*/
    _0 = _cmd_options_50127;
    _cmd_options_50127 = _51get_options();
    DeRef(_0);

    /** pathopen.e:382		default_args = {}*/
    RefDS(_21928);
    DeRef(_default_args_50124);
    _default_args_50124 = _21928;

    /** pathopen.e:385		for i = 1 to length( user_files ) do*/
    if (IS_SEQUENCE(_user_files_50122)){
            _25926 = SEQ_PTR(_user_files_50122)->length;
    }
    else {
        _25926 = 1;
    }
    {
        object _i_50131;
        _i_50131 = 1;
L2: 
        if (_i_50131 > _25926){
            goto L3; // [53] 92
        }

        /** pathopen.e:386			sequence user_config = load_euphoria_config( user_files[i] )*/
        _2 = (object)SEQ_PTR(_user_files_50122);
        _25927 = (object)*(((s1_ptr)_2)->base + _i_50131);
        Ref(_25927);
        _0 = _user_config_50133;
        _user_config_50133 = _50load_euphoria_config(_25927);
        DeRef(_0);
        _25927 = NOVALUE;

        /** pathopen.e:387			default_args = merge_parameters( user_config, default_args, cmd_options, 1 )*/
        RefDS(_user_config_50133);
        RefDS(_default_args_50124);
        RefDS(_cmd_options_50127);
        _0 = _default_args_50124;
        _default_args_50124 = _51merge_parameters(_user_config_50133, _default_args_50124, _cmd_options_50127, 1);
        DeRefDS(_0);
        DeRefDS(_user_config_50133);
        _user_config_50133 = NOVALUE;

        /** pathopen.e:388		end for*/
        _i_50131 = _i_50131 + 1;
        goto L2; // [87] 60
L3: 
        ;
    }

    /** pathopen.e:391		default_args = merge_parameters( load_euphoria_config("./" & conf_file), default_args, cmd_options, 1 )*/
    Concat((object_ptr)&_25931, _25930, _conf_file_50125);
    _25932 = _50load_euphoria_config(_25931);
    _25931 = NOVALUE;
    RefDS(_default_args_50124);
    RefDS(_cmd_options_50127);
    _0 = _default_args_50124;
    _default_args_50124 = _51merge_parameters(_25932, _default_args_50124, _cmd_options_50127, 1);
    DeRefDS(_0);
    _25932 = NOVALUE;

    /** pathopen.e:394		env = strip_file_from_path( exe_path() )*/
    _25934 = _50exe_path();
    _0 = _env_50123;
    _env_50123 = _50strip_file_from_path(_25934);
    DeRef(_0);
    _25934 = NOVALUE;

    /** pathopen.e:395		default_args = merge_parameters( load_euphoria_config( env & conf_file ), default_args, cmd_options, 1 )*/
    if (IS_SEQUENCE(_env_50123) && IS_ATOM(_conf_file_50125)) {
    }
    else if (IS_ATOM(_env_50123) && IS_SEQUENCE(_conf_file_50125)) {
        Ref(_env_50123);
        Prepend(&_25936, _conf_file_50125, _env_50123);
    }
    else {
        Concat((object_ptr)&_25936, _env_50123, _conf_file_50125);
    }
    _25937 = _50load_euphoria_config(_25936);
    _25936 = NOVALUE;
    RefDS(_default_args_50124);
    RefDS(_cmd_options_50127);
    _0 = _default_args_50124;
    _default_args_50124 = _51merge_parameters(_25937, _default_args_50124, _cmd_options_50127, 1);
    DeRefDS(_0);
    _25937 = NOVALUE;

    /** pathopen.e:398		ifdef UNIX then*/

    /** pathopen.e:399			default_args = merge_parameters( load_euphoria_config( "/etc/euphoria/" & conf_file ), default_args, cmd_options, 1 )*/
    Concat((object_ptr)&_25940, _25939, _conf_file_50125);
    _25941 = _50load_euphoria_config(_25940);
    _25940 = NOVALUE;
    RefDS(_default_args_50124);
    RefDS(_cmd_options_50127);
    _0 = _default_args_50124;
    _default_args_50124 = _51merge_parameters(_25941, _default_args_50124, _cmd_options_50127, 1);
    DeRefDS(_0);
    _25941 = NOVALUE;

    /** pathopen.e:401			env = getenv( "HOME" )*/
    DeRef(_env_50123);
    _env_50123 = EGetEnv(_25805);

    /** pathopen.e:402			if sequence(env) then*/
    _25944 = IS_SEQUENCE(_env_50123);
    if (_25944 == 0)
    {
        _25944 = NOVALUE;
        goto L4; // [170] 195
    }
    else{
        _25944 = NOVALUE;
    }

    /** pathopen.e:403				default_args = merge_parameters( load_euphoria_config( env & "/." & conf_file ), default_args, cmd_options, 1 )*/
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50125;
        concat_list[1] = _25945;
        concat_list[2] = _env_50123;
        Concat_N((object_ptr)&_25946, concat_list, 3);
    }
    _25947 = _50load_euphoria_config(_25946);
    _25946 = NOVALUE;
    RefDS(_default_args_50124);
    RefDS(_cmd_options_50127);
    _0 = _default_args_50124;
    _default_args_50124 = _51merge_parameters(_25947, _default_args_50124, _cmd_options_50127, 1);
    DeRefDS(_0);
    _25947 = NOVALUE;
L4: 

    /** pathopen.e:427		env = get_eudir()*/
    _0 = _env_50123;
    _env_50123 = _36get_eudir();
    DeRef(_0);

    /** pathopen.e:428		if sequence(env) then*/
    _25955 = IS_SEQUENCE(_env_50123);
    if (_25955 == 0)
    {
        _25955 = NOVALUE;
        goto L5; // [205] 230
    }
    else{
        _25955 = NOVALUE;
    }

    /** pathopen.e:429			default_args = merge_parameters( load_euphoria_config(env & "/" & conf_file), default_args, cmd_options, 1 )*/
    {
        object concat_list[3];

        concat_list[0] = _conf_file_50125;
        concat_list[1] = _23504;
        concat_list[2] = _env_50123;
        Concat_N((object_ptr)&_25956, concat_list, 3);
    }
    _25957 = _50load_euphoria_config(_25956);
    _25956 = NOVALUE;
    RefDS(_default_args_50124);
    RefDS(_cmd_options_50127);
    _0 = _default_args_50124;
    _default_args_50124 = _51merge_parameters(_25957, _default_args_50124, _cmd_options_50127, 1);
    DeRefDS(_0);
    _25957 = NOVALUE;
L5: 

    /** pathopen.e:432		return default_args*/
    DeRefDS(_user_files_50122);
    DeRef(_env_50123);
    DeRefi(_conf_file_50125);
    DeRef(_cmd_options_50127);
    return _default_args_50124;
    ;
}


object _50ConfPath(object _file_name_50177)
{
    object _file_path_50178 = NOVALUE;
    object _try_50179 = NOVALUE;
    object _25964 = NOVALUE;
    object _25960 = NOVALUE;
    object _25959 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:440		for i = 1 to length(config_inc_paths) do*/
    if (IS_SEQUENCE(_50config_inc_paths_49798)){
            _25959 = SEQ_PTR(_50config_inc_paths_49798)->length;
    }
    else {
        _25959 = 1;
    }
    {
        object _i_50181;
        _i_50181 = 1;
L1: 
        if (_i_50181 > _25959){
            goto L2; // [10] 60
        }

        /** pathopen.e:441			file_path = config_inc_paths[i] & file_name*/
        _2 = (object)SEQ_PTR(_50config_inc_paths_49798);
        _25960 = (object)*(((s1_ptr)_2)->base + _i_50181);
        Concat((object_ptr)&_file_path_50178, _25960, _file_name_50177);
        _25960 = NOVALUE;
        _25960 = NOVALUE;

        /** pathopen.e:442			try = open( file_path, "r" )*/
        _try_50179 = EOpen(_file_path_50178, _25841, 0);

        /** pathopen.e:443			if try != -1 then*/
        if (_try_50179 == -1)
        goto L3; // [38] 53

        /** pathopen.e:444				return {file_path, try}*/
        RefDS(_file_path_50178);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50178;
        ((intptr_t *)_2)[2] = _try_50179;
        _25964 = MAKE_SEQ(_1);
        DeRefDS(_file_name_50177);
        DeRefDS(_file_path_50178);
        return _25964;
L3: 

        /** pathopen.e:446		end for*/
        _i_50181 = _i_50181 + 1;
        goto L1; // [55] 17
L2: 
        ;
    }

    /** pathopen.e:447		return -1*/
    DeRefDS(_file_name_50177);
    DeRef(_file_path_50178);
    DeRef(_25964);
    _25964 = NOVALUE;
    return -1;
    ;
}


object _50ScanPath(object _file_name_50191, object _env_50192, object _flag_50193)
{
    object _inc_path_50194 = NOVALUE;
    object _full_path_50195 = NOVALUE;
    object _file_path_50196 = NOVALUE;
    object _strings_50197 = NOVALUE;
    object _end_path_50198 = NOVALUE;
    object _start_path_50199 = NOVALUE;
    object _try_50200 = NOVALUE;
    object _use_cache_50201 = NOVALUE;
    object _pos_50202 = NOVALUE;
    object _26012 = NOVALUE;
    object _26011 = NOVALUE;
    object _26010 = NOVALUE;
    object _26009 = NOVALUE;
    object _26008 = NOVALUE;
    object _26007 = NOVALUE;
    object _26006 = NOVALUE;
    object _26005 = NOVALUE;
    object _26001 = NOVALUE;
    object _26000 = NOVALUE;
    object _25999 = NOVALUE;
    object _25998 = NOVALUE;
    object _25997 = NOVALUE;
    object _25996 = NOVALUE;
    object _25994 = NOVALUE;
    object _25992 = NOVALUE;
    object _25991 = NOVALUE;
    object _25989 = NOVALUE;
    object _25988 = NOVALUE;
    object _25987 = NOVALUE;
    object _25984 = NOVALUE;
    object _25983 = NOVALUE;
    object _25981 = NOVALUE;
    object _25980 = NOVALUE;
    object _25979 = NOVALUE;
    object _25974 = NOVALUE;
    object _25966 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:459		inc_path = getenv(env)*/
    DeRefi(_inc_path_50194);
    _inc_path_50194 = EGetEnv(_env_50192);

    /** pathopen.e:460		if compare(inc_path,{})!=1 then -- nothing to do, just fail*/
    if (IS_ATOM_INT(_inc_path_50194) && IS_ATOM_INT(_21928)){
        _25966 = (_inc_path_50194 < _21928) ? -1 : (_inc_path_50194 > _21928);
    }
    else{
        _25966 = compare(_inc_path_50194, _21928);
    }
    if (_25966 == 1)
    goto L1; // [18] 29

    /** pathopen.e:461			return -1*/
    DeRefDS(_file_name_50191);
    DeRefDSi(_env_50192);
    DeRefi(_inc_path_50194);
    DeRef(_full_path_50195);
    DeRef(_file_path_50196);
    DeRef(_strings_50197);
    return -1;
L1: 

    /** pathopen.e:464		num_var = find(env,cache_vars)*/
    _50num_var_49789 = find_from(_env_50192, _50cache_vars_49790, 1);

    /** pathopen.e:465		use_cache = check_cache(env,inc_path)*/
    RefDS(_env_50192);
    Ref(_inc_path_50194);
    _use_cache_50201 = _50check_cache(_env_50192, _inc_path_50194);
    if (!IS_ATOM_INT(_use_cache_50201)) {
        _1 = (object)(DBL_PTR(_use_cache_50201)->dbl);
        DeRefDS(_use_cache_50201);
        _use_cache_50201 = _1;
    }

    /** pathopen.e:466		inc_path = append(inc_path, PATH_SEPARATOR)*/
    Append(&_inc_path_50194, _inc_path_50194, 58);

    /** pathopen.e:468		file_name = SLASH & file_name*/
    Prepend(&_file_name_50191, _file_name_50191, 47);

    /** pathopen.e:469		if flag then*/
    if (_flag_50193 == 0)
    {
        goto L2; // [65] 77
    }
    else{
    }

    /** pathopen.e:470			file_name = include_subfolder & file_name*/
    Concat((object_ptr)&_file_name_50191, _50include_subfolder_49785, _file_name_50191);
L2: 

    /** pathopen.e:472		strings = cache_substrings[num_var]*/
    DeRef(_strings_50197);
    _2 = (object)SEQ_PTR(_50cache_substrings_49792);
    _strings_50197 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    RefDS(_strings_50197);

    /** pathopen.e:474		if use_cache then*/
    if (_use_cache_50201 == 0)
    {
        goto L3; // [91] 194
    }
    else{
    }

    /** pathopen.e:475			for i=1 to length(strings) do*/
    if (IS_SEQUENCE(_strings_50197)){
            _25974 = SEQ_PTR(_strings_50197)->length;
    }
    else {
        _25974 = 1;
    }
    {
        object _i_50218;
        _i_50218 = 1;
L4: 
        if (_i_50218 > _25974){
            goto L5; // [99] 154
        }

        /** pathopen.e:476				full_path = strings[i]*/
        DeRef(_full_path_50195);
        _2 = (object)SEQ_PTR(_strings_50197);
        _full_path_50195 = (object)*(((s1_ptr)_2)->base + _i_50218);
        Ref(_full_path_50195);

        /** pathopen.e:477				file_path = full_path & file_name*/
        Concat((object_ptr)&_file_path_50196, _full_path_50195, _file_name_50191);

        /** pathopen.e:478				try = open_locked(file_path)    */
        RefDS(_file_path_50196);
        _try_50200 = _36open_locked(_file_path_50196);
        if (!IS_ATOM_INT(_try_50200)) {
            _1 = (object)(DBL_PTR(_try_50200)->dbl);
            DeRefDS(_try_50200);
            _try_50200 = _1;
        }

        /** pathopen.e:479				if try != -1 then*/
        if (_try_50200 == -1)
        goto L6; // [130] 145

        /** pathopen.e:480					return {file_path,try}*/
        RefDS(_file_path_50196);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50196;
        ((intptr_t *)_2)[2] = _try_50200;
        _25979 = MAKE_SEQ(_1);
        DeRefDS(_file_name_50191);
        DeRefDSi(_env_50192);
        DeRefi(_inc_path_50194);
        DeRefDS(_full_path_50195);
        DeRefDS(_file_path_50196);
        DeRefDS(_strings_50197);
        return _25979;
L6: 

        /** pathopen.e:482				ifdef WINDOWS then */

        /** pathopen.e:496			end for*/
        _i_50218 = _i_50218 + 1;
        goto L4; // [149] 106
L5: 
        ;
    }

    /** pathopen.e:497			if cache_complete[num_var] then -- nothing to scan*/
    _2 = (object)SEQ_PTR(_50cache_complete_49796);
    _25980 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    if (_25980 == 0)
    {
        _25980 = NOVALUE;
        goto L7; // [164] 176
    }
    else{
        _25980 = NOVALUE;
    }

    /** pathopen.e:498				return -1*/
    DeRefDS(_file_name_50191);
    DeRefDSi(_env_50192);
    DeRefi(_inc_path_50194);
    DeRef(_full_path_50195);
    DeRef(_file_path_50196);
    DeRef(_strings_50197);
    DeRef(_25979);
    _25979 = NOVALUE;
    return -1;
    goto L8; // [173] 200
L7: 

    /** pathopen.e:500				pos = cache_delims[num_var]+1 -- scan remainder, starting from as far sa possible*/
    _2 = (object)SEQ_PTR(_50cache_delims_49797);
    _25981 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    _pos_50202 = _25981 + 1;
    _25981 = NOVALUE;
    goto L8; // [191] 200
L3: 

    /** pathopen.e:503			pos = 1*/
    _pos_50202 = 1;
L8: 

    /** pathopen.e:506		start_path = 0*/
    _start_path_50199 = 0;

    /** pathopen.e:507		for p = pos to length(inc_path) do*/
    if (IS_SEQUENCE(_inc_path_50194)){
            _25983 = SEQ_PTR(_inc_path_50194)->length;
    }
    else {
        _25983 = 1;
    }
    {
        object _p_50234;
        _p_50234 = _pos_50202;
L9: 
        if (_p_50234 > _25983){
            goto LA; // [212] 460
        }

        /** pathopen.e:508			if inc_path[p] = PATH_SEPARATOR then*/
        _2 = (object)SEQ_PTR(_inc_path_50194);
        _25984 = (object)*(((s1_ptr)_2)->base + _p_50234);
        if (_25984 != 58)
        goto LB; // [227] 409

        /** pathopen.e:510				cache_delims[num_var] = p*/
        _2 = (object)SEQ_PTR(_50cache_delims_49797);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_delims_49797 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        *(intptr_t *)_2 = _p_50234;

        /** pathopen.e:512				end_path = p-1*/
        _end_path_50198 = _p_50234 - 1;

        /** pathopen.e:513				while end_path >= start_path and find(inc_path[end_path], " \t" & SLASH_CHARS) do*/
LC: 
        _25987 = (_end_path_50198 >= _start_path_50199);
        if (_25987 == 0) {
            goto LD; // [256] 290
        }
        _2 = (object)SEQ_PTR(_inc_path_50194);
        _25989 = (object)*(((s1_ptr)_2)->base + _end_path_50198);
        Concat((object_ptr)&_25991, _25990, _43SLASH_CHARS_21608);
        _25992 = find_from(_25989, _25991, 1);
        _25989 = NOVALUE;
        DeRefDS(_25991);
        _25991 = NOVALUE;
        if (_25992 == 0)
        {
            _25992 = NOVALUE;
            goto LD; // [276] 290
        }
        else{
            _25992 = NOVALUE;
        }

        /** pathopen.e:514					end_path-=1*/
        _end_path_50198 = _end_path_50198 - 1;

        /** pathopen.e:515				end while*/
        goto LC; // [287] 252
LD: 

        /** pathopen.e:517				if start_path and end_path then*/
        if (_start_path_50199 == 0) {
            goto LE; // [292] 453
        }
        if (_end_path_50198 == 0)
        {
            goto LE; // [297] 453
        }
        else{
        }

        /** pathopen.e:518					full_path = inc_path[start_path..end_path]*/
        rhs_slice_target = (object_ptr)&_full_path_50195;
        RHS_Slice(_inc_path_50194, _start_path_50199, _end_path_50198);

        /** pathopen.e:519					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        _2 = (object)SEQ_PTR(_50cache_substrings_49792);
        _25996 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        RefDS(_full_path_50195);
        Append(&_25997, _25996, _full_path_50195);
        _25996 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_substrings_49792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_substrings_49792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25997;
        if( _1 != _25997 ){
            DeRefDS(_1);
        }
        _25997 = NOVALUE;

        /** pathopen.e:520					cache_starts[num_var] &= start_path*/
        _2 = (object)SEQ_PTR(_50cache_starts_49793);
        _25998 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        if (IS_SEQUENCE(_25998) && IS_ATOM(_start_path_50199)) {
            Append(&_25999, _25998, _start_path_50199);
        }
        else if (IS_ATOM(_25998) && IS_SEQUENCE(_start_path_50199)) {
        }
        else {
            Concat((object_ptr)&_25999, _25998, _start_path_50199);
            _25998 = NOVALUE;
        }
        _25998 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_starts_49793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_starts_49793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25999;
        if( _1 != _25999 ){
            DeRef(_1);
        }
        _25999 = NOVALUE;

        /** pathopen.e:521					cache_ends[num_var] &= end_path*/
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        _26000 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        if (IS_SEQUENCE(_26000) && IS_ATOM(_end_path_50198)) {
            Append(&_26001, _26000, _end_path_50198);
        }
        else if (IS_ATOM(_26000) && IS_SEQUENCE(_end_path_50198)) {
        }
        else {
            Concat((object_ptr)&_26001, _26000, _end_path_50198);
            _26000 = NOVALUE;
        }
        _26000 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_ends_49794 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26001;
        if( _1 != _26001 ){
            DeRef(_1);
        }
        _26001 = NOVALUE;

        /** pathopen.e:522					file_path = full_path & file_name  */
        Concat((object_ptr)&_file_path_50196, _full_path_50195, _file_name_50191);

        /** pathopen.e:523					try = open_locked(file_path)*/
        RefDS(_file_path_50196);
        _try_50200 = _36open_locked(_file_path_50196);
        if (!IS_ATOM_INT(_try_50200)) {
            _1 = (object)(DBL_PTR(_try_50200)->dbl);
            DeRefDS(_try_50200);
            _try_50200 = _1;
        }

        /** pathopen.e:524					if try != -1 then -- valid path, no point trying to convert*/
        if (_try_50200 == -1)
        goto LF; // [381] 398

        /** pathopen.e:525						ifdef WINDOWS then*/

        /** pathopen.e:528						return {file_path,try}*/
        RefDS(_file_path_50196);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _file_path_50196;
        ((intptr_t *)_2)[2] = _try_50200;
        _26005 = MAKE_SEQ(_1);
        DeRefDS(_file_name_50191);
        DeRefDSi(_env_50192);
        DeRefi(_inc_path_50194);
        DeRefDSi(_full_path_50195);
        DeRefDS(_file_path_50196);
        DeRef(_strings_50197);
        _25984 = NOVALUE;
        DeRef(_25979);
        _25979 = NOVALUE;
        DeRef(_25987);
        _25987 = NOVALUE;
        return _26005;
LF: 

        /** pathopen.e:530					ifdef WINDOWS then*/

        /** pathopen.e:547					start_path = 0*/
        _start_path_50199 = 0;
        goto LE; // [406] 453
LB: 

        /** pathopen.e:549			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        _26006 = (_start_path_50199 == 0);
        if (_26006 == 0) {
            goto L10; // [414] 452
        }
        _2 = (object)SEQ_PTR(_inc_path_50194);
        _26008 = (object)*(((s1_ptr)_2)->base + _p_50234);
        _26009 = (_26008 != 32);
        _26008 = NOVALUE;
        if (_26009 == 0) {
            DeRef(_26010);
            _26010 = 0;
            goto L11; // [426] 442
        }
        _2 = (object)SEQ_PTR(_inc_path_50194);
        _26011 = (object)*(((s1_ptr)_2)->base + _p_50234);
        _26012 = (_26011 != 9);
        _26011 = NOVALUE;
        _26010 = (_26012 != 0);
L11: 
        if (_26010 == 0)
        {
            _26010 = NOVALUE;
            goto L10; // [443] 452
        }
        else{
            _26010 = NOVALUE;
        }

        /** pathopen.e:550				start_path = p*/
        _start_path_50199 = _p_50234;
L10: 
LE: 

        /** pathopen.e:552		end for*/
        _p_50234 = _p_50234 + 1;
        goto L9; // [455] 219
LA: 
        ;
    }

    /** pathopen.e:554		cache_complete[num_var] = 1*/
    _2 = (object)SEQ_PTR(_50cache_complete_49796);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _50cache_complete_49796 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
    *(intptr_t *)_2 = 1;

    /** pathopen.e:555		return -1*/
    DeRefDS(_file_name_50191);
    DeRefDSi(_env_50192);
    DeRefi(_inc_path_50194);
    DeRef(_full_path_50195);
    DeRef(_file_path_50196);
    DeRef(_strings_50197);
    DeRef(_26005);
    _26005 = NOVALUE;
    _25984 = NOVALUE;
    DeRef(_26009);
    _26009 = NOVALUE;
    DeRef(_26012);
    _26012 = NOVALUE;
    DeRef(_25979);
    _25979 = NOVALUE;
    DeRef(_25987);
    _25987 = NOVALUE;
    DeRef(_26006);
    _26006 = NOVALUE;
    return -1;
    ;
}


object _50Include_paths(object _add_converted_50276)
{
    object _status_50277 = NOVALUE;
    object _pos_50278 = NOVALUE;
    object _inc_path_50279 = NOVALUE;
    object _full_path_50280 = NOVALUE;
    object _start_path_50281 = NOVALUE;
    object _end_path_50282 = NOVALUE;
    object _eudir_path_50298 = NOVALUE;
    object _26058 = NOVALUE;
    object _26057 = NOVALUE;
    object _26056 = NOVALUE;
    object _26055 = NOVALUE;
    object _26054 = NOVALUE;
    object _26053 = NOVALUE;
    object _26052 = NOVALUE;
    object _26051 = NOVALUE;
    object _26050 = NOVALUE;
    object _26049 = NOVALUE;
    object _26048 = NOVALUE;
    object _26047 = NOVALUE;
    object _26046 = NOVALUE;
    object _26045 = NOVALUE;
    object _26043 = NOVALUE;
    object _26041 = NOVALUE;
    object _26040 = NOVALUE;
    object _26039 = NOVALUE;
    object _26038 = NOVALUE;
    object _26037 = NOVALUE;
    object _26034 = NOVALUE;
    object _26033 = NOVALUE;
    object _26031 = NOVALUE;
    object _26029 = NOVALUE;
    object _26027 = NOVALUE;
    object _26026 = NOVALUE;
    object _26024 = NOVALUE;
    object _26021 = NOVALUE;
    object _26019 = NOVALUE;
    object _26014 = NOVALUE;
    object _26013 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_add_converted_50276)) {
        _1 = (object)(DBL_PTR(_add_converted_50276)->dbl);
        DeRefDS(_add_converted_50276);
        _add_converted_50276 = _1;
    }

    /** pathopen.e:566		if length(include_Paths) then*/
    if (IS_SEQUENCE(_50include_Paths_50273)){
            _26013 = SEQ_PTR(_50include_Paths_50273)->length;
    }
    else {
        _26013 = 1;
    }
    if (_26013 == 0)
    {
        _26013 = NOVALUE;
        goto L1; // [10] 22
    }
    else{
        _26013 = NOVALUE;
    }

    /** pathopen.e:567			return include_Paths*/
    RefDS(_50include_Paths_50273);
    DeRefi(_inc_path_50279);
    DeRefi(_full_path_50280);
    DeRef(_eudir_path_50298);
    return _50include_Paths_50273;
L1: 

    /** pathopen.e:570		include_Paths = append(config_inc_paths, current_dir())*/
    _26014 = _16current_dir();
    Ref(_26014);
    Append(&_50include_Paths_50273, _50config_inc_paths_49798, _26014);
    DeRef(_26014);
    _26014 = NOVALUE;

    /** pathopen.e:571		num_var = find("EUINC", cache_vars)*/
    _50num_var_49789 = find_from(_26016, _50cache_vars_49790, 1);

    /** pathopen.e:572		inc_path = getenv("EUINC")*/
    DeRefi(_inc_path_50279);
    _inc_path_50279 = EGetEnv(_26016);

    /** pathopen.e:573		if atom(inc_path) then*/
    _26019 = IS_ATOM(_inc_path_50279);
    if (_26019 == 0)
    {
        _26019 = NOVALUE;
        goto L2; // [52] 61
    }
    else{
        _26019 = NOVALUE;
    }

    /** pathopen.e:574			inc_path = ""*/
    RefDS(_21928);
    DeRefi(_inc_path_50279);
    _inc_path_50279 = _21928;
L2: 

    /** pathopen.e:576		status = check_cache("EUINC", inc_path)*/
    RefDS(_26016);
    Ref(_inc_path_50279);
    _status_50277 = _50check_cache(_26016, _inc_path_50279);
    if (!IS_ATOM_INT(_status_50277)) {
        _1 = (object)(DBL_PTR(_status_50277)->dbl);
        DeRefDS(_status_50277);
        _status_50277 = _1;
    }

    /** pathopen.e:577		if length(inc_path) then*/
    if (IS_SEQUENCE(_inc_path_50279)){
            _26021 = SEQ_PTR(_inc_path_50279)->length;
    }
    else {
        _26021 = 1;
    }
    if (_26021 == 0)
    {
        _26021 = NOVALUE;
        goto L3; // [75] 87
    }
    else{
        _26021 = NOVALUE;
    }

    /** pathopen.e:578			inc_path = append(inc_path, PATH_SEPARATOR)*/
    Append(&_inc_path_50279, _inc_path_50279, 58);
L3: 

    /** pathopen.e:580		object eudir_path = get_eudir()*/
    _0 = _eudir_path_50298;
    _eudir_path_50298 = _36get_eudir();
    DeRef(_0);

    /** pathopen.e:581		if sequence(eudir_path) then*/
    _26024 = IS_SEQUENCE(_eudir_path_50298);
    if (_26024 == 0)
    {
        _26024 = NOVALUE;
        goto L4; // [97] 117
    }
    else{
        _26024 = NOVALUE;
    }

    /** pathopen.e:582			include_Paths = append(include_Paths, sprintf("%s/include", { eudir_path }))*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_eudir_path_50298);
    ((intptr_t*)_2)[1] = _eudir_path_50298;
    _26026 = MAKE_SEQ(_1);
    _26027 = EPrintf(-9999999, _26025, _26026);
    DeRefDS(_26026);
    _26026 = NOVALUE;
    RefDS(_26027);
    Append(&_50include_Paths_50273, _50include_Paths_50273, _26027);
    DeRefDS(_26027);
    _26027 = NOVALUE;
L4: 

    /** pathopen.e:585		if status then*/
    if (_status_50277 == 0)
    {
        goto L5; // [119] 161
    }
    else{
    }

    /** pathopen.e:587			if cache_complete[num_var] then*/
    _2 = (object)SEQ_PTR(_50cache_complete_49796);
    _26029 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    if (_26029 == 0)
    {
        _26029 = NOVALUE;
        goto L6; // [132] 144
    }
    else{
        _26029 = NOVALUE;
    }

    /** pathopen.e:588				goto "cache done"*/
    goto G7;
L6: 

    /** pathopen.e:590			pos = cache_delims[num_var]+1*/
    _2 = (object)SEQ_PTR(_50cache_delims_49797);
    _26031 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    _pos_50278 = _26031 + 1;
    _26031 = NOVALUE;
    goto L8; // [158] 167
L5: 

    /** pathopen.e:592	        pos = 1*/
    _pos_50278 = 1;
L8: 

    /** pathopen.e:594		start_path = 0*/
    _start_path_50281 = 0;

    /** pathopen.e:595		for p = pos to length(inc_path) do*/
    if (IS_SEQUENCE(_inc_path_50279)){
            _26033 = SEQ_PTR(_inc_path_50279)->length;
    }
    else {
        _26033 = 1;
    }
    {
        object _p_50315;
        _p_50315 = _pos_50278;
L9: 
        if (_p_50315 > _26033){
            goto LA; // [179] 394
        }

        /** pathopen.e:596			if inc_path[p] = PATH_SEPARATOR then*/
        _2 = (object)SEQ_PTR(_inc_path_50279);
        _26034 = (object)*(((s1_ptr)_2)->base + _p_50315);
        if (_26034 != 58)
        goto LB; // [194] 343

        /** pathopen.e:598				cache_delims[num_var] = p*/
        _2 = (object)SEQ_PTR(_50cache_delims_49797);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_delims_49797 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        *(intptr_t *)_2 = _p_50315;

        /** pathopen.e:600				end_path = p-1*/
        _end_path_50282 = _p_50315 - 1;

        /** pathopen.e:601				while end_path >= start_path and find(inc_path[end_path]," \t" & SLASH_CHARS) do*/
LC: 
        _26037 = (_end_path_50282 >= _start_path_50281);
        if (_26037 == 0) {
            goto LD; // [223] 257
        }
        _2 = (object)SEQ_PTR(_inc_path_50279);
        _26039 = (object)*(((s1_ptr)_2)->base + _end_path_50282);
        Concat((object_ptr)&_26040, _25990, _43SLASH_CHARS_21608);
        _26041 = find_from(_26039, _26040, 1);
        _26039 = NOVALUE;
        DeRefDS(_26040);
        _26040 = NOVALUE;
        if (_26041 == 0)
        {
            _26041 = NOVALUE;
            goto LD; // [243] 257
        }
        else{
            _26041 = NOVALUE;
        }

        /** pathopen.e:602					end_path -= 1*/
        _end_path_50282 = _end_path_50282 - 1;

        /** pathopen.e:603				end while*/
        goto LC; // [254] 219
LD: 

        /** pathopen.e:605				if start_path and end_path then*/
        if (_start_path_50281 == 0) {
            goto LE; // [259] 387
        }
        if (_end_path_50282 == 0)
        {
            goto LE; // [264] 387
        }
        else{
        }

        /** pathopen.e:606					full_path = inc_path[start_path..end_path]*/
        rhs_slice_target = (object_ptr)&_full_path_50280;
        RHS_Slice(_inc_path_50279, _start_path_50281, _end_path_50282);

        /** pathopen.e:607					cache_substrings[num_var] = append(cache_substrings[num_var],full_path)*/
        _2 = (object)SEQ_PTR(_50cache_substrings_49792);
        _26045 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        RefDS(_full_path_50280);
        Append(&_26046, _26045, _full_path_50280);
        _26045 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_substrings_49792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_substrings_49792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26046;
        if( _1 != _26046 ){
            DeRefDS(_1);
        }
        _26046 = NOVALUE;

        /** pathopen.e:608					cache_starts[num_var] &= start_path*/
        _2 = (object)SEQ_PTR(_50cache_starts_49793);
        _26047 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        if (IS_SEQUENCE(_26047) && IS_ATOM(_start_path_50281)) {
            Append(&_26048, _26047, _start_path_50281);
        }
        else if (IS_ATOM(_26047) && IS_SEQUENCE(_start_path_50281)) {
        }
        else {
            Concat((object_ptr)&_26048, _26047, _start_path_50281);
            _26047 = NOVALUE;
        }
        _26047 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_starts_49793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_starts_49793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26048;
        if( _1 != _26048 ){
            DeRef(_1);
        }
        _26048 = NOVALUE;

        /** pathopen.e:609					cache_ends[num_var] &= end_path*/
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        _26049 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
        if (IS_SEQUENCE(_26049) && IS_ATOM(_end_path_50282)) {
            Append(&_26050, _26049, _end_path_50282);
        }
        else if (IS_ATOM(_26049) && IS_SEQUENCE(_end_path_50282)) {
        }
        else {
            Concat((object_ptr)&_26050, _26049, _end_path_50282);
            _26049 = NOVALUE;
        }
        _26049 = NOVALUE;
        _2 = (object)SEQ_PTR(_50cache_ends_49794);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50cache_ends_49794 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26050;
        if( _1 != _26050 ){
            DeRef(_1);
        }
        _26050 = NOVALUE;

        /** pathopen.e:610					ifdef WINDOWS then*/

        /** pathopen.e:620					start_path = 0*/
        _start_path_50281 = 0;
        goto LE; // [340] 387
LB: 

        /** pathopen.e:622			elsif not start_path and (inc_path[p] != ' ' and inc_path[p] != '\t') then*/
        _26051 = (_start_path_50281 == 0);
        if (_26051 == 0) {
            goto LF; // [348] 386
        }
        _2 = (object)SEQ_PTR(_inc_path_50279);
        _26053 = (object)*(((s1_ptr)_2)->base + _p_50315);
        _26054 = (_26053 != 32);
        _26053 = NOVALUE;
        if (_26054 == 0) {
            DeRef(_26055);
            _26055 = 0;
            goto L10; // [360] 376
        }
        _2 = (object)SEQ_PTR(_inc_path_50279);
        _26056 = (object)*(((s1_ptr)_2)->base + _p_50315);
        _26057 = (_26056 != 9);
        _26056 = NOVALUE;
        _26055 = (_26057 != 0);
L10: 
        if (_26055 == 0)
        {
            _26055 = NOVALUE;
            goto LF; // [377] 386
        }
        else{
            _26055 = NOVALUE;
        }

        /** pathopen.e:623				start_path = p*/
        _start_path_50281 = _p_50315;
LF: 
LE: 

        /** pathopen.e:625		end for*/
        _p_50315 = _p_50315 + 1;
        goto L9; // [389] 186
LA: 
        ;
    }

    /** pathopen.e:627	label "cache done"*/
G7:

    /** pathopen.e:628		include_Paths &= cache_substrings[num_var]*/
    _2 = (object)SEQ_PTR(_50cache_substrings_49792);
    _26058 = (object)*(((s1_ptr)_2)->base + _50num_var_49789);
    Concat((object_ptr)&_50include_Paths_50273, _50include_Paths_50273, _26058);
    _26058 = NOVALUE;

    /** pathopen.e:629		cache_complete[num_var] = 1*/
    _2 = (object)SEQ_PTR(_50cache_complete_49796);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _50cache_complete_49796 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _50num_var_49789);
    *(intptr_t *)_2 = 1;

    /** pathopen.e:631		ifdef WINDOWS then*/

    /** pathopen.e:640		return include_Paths*/
    RefDS(_50include_Paths_50273);
    DeRefi(_inc_path_50279);
    DeRefi(_full_path_50280);
    DeRef(_eudir_path_50298);
    DeRef(_26057);
    _26057 = NOVALUE;
    DeRef(_26054);
    _26054 = NOVALUE;
    DeRef(_26051);
    _26051 = NOVALUE;
    DeRef(_26037);
    _26037 = NOVALUE;
    _26034 = NOVALUE;
    return _50include_Paths_50273;
    ;
}


object _50e_path_find(object _name_50351)
{
    object _scan_result_50352 = NOVALUE;
    object _26068 = NOVALUE;
    object _26067 = NOVALUE;
    object _26066 = NOVALUE;
    object _26063 = NOVALUE;
    object _26062 = NOVALUE;
    object _26061 = NOVALUE;
    object _26060 = NOVALUE;
    object _0, _1, _2;
    

    /** pathopen.e:656		if file_exists(name) then*/
    RefDS(_name_50351);
    _26060 = _16file_exists(_name_50351);
    if (_26060 == 0) {
        DeRef(_26060);
        _26060 = NOVALUE;
        goto L1; // [9] 19
    }
    else {
        if (!IS_ATOM_INT(_26060) && DBL_PTR(_26060)->dbl == 0.0){
            DeRef(_26060);
            _26060 = NOVALUE;
            goto L1; // [9] 19
        }
        DeRef(_26060);
        _26060 = NOVALUE;
    }
    DeRef(_26060);
    _26060 = NOVALUE;

    /** pathopen.e:657			return name*/
    DeRef(_scan_result_50352);
    return _name_50351;
L1: 

    /** pathopen.e:661		for i = 1 to length(SLASH_CHARS) do*/
    if (IS_SEQUENCE(_43SLASH_CHARS_21608)){
            _26061 = SEQ_PTR(_43SLASH_CHARS_21608)->length;
    }
    else {
        _26061 = 1;
    }
    {
        object _i_50357;
        _i_50357 = 1;
L2: 
        if (_i_50357 > _26061){
            goto L3; // [26] 63
        }

        /** pathopen.e:662			if find(SLASH_CHARS[i], name) then*/
        _2 = (object)SEQ_PTR(_43SLASH_CHARS_21608);
        _26062 = (object)*(((s1_ptr)_2)->base + _i_50357);
        _26063 = find_from(_26062, _name_50351, 1);
        _26062 = NOVALUE;
        if (_26063 == 0)
        {
            _26063 = NOVALUE;
            goto L4; // [46] 56
        }
        else{
            _26063 = NOVALUE;
        }

        /** pathopen.e:663				return -1*/
        DeRefDS(_name_50351);
        DeRef(_scan_result_50352);
        return -1;
L4: 

        /** pathopen.e:665		end for*/
        _i_50357 = _i_50357 + 1;
        goto L2; // [58] 33
L3: 
        ;
    }

    /** pathopen.e:667		scan_result = ScanPath(name, "PATH", 0)*/
    RefDS(_name_50351);
    RefDS(_26064);
    _0 = _scan_result_50352;
    _scan_result_50352 = _50ScanPath(_name_50351, _26064, 0);
    DeRef(_0);

    /** pathopen.e:668		if sequence(scan_result) then*/
    _26066 = IS_SEQUENCE(_scan_result_50352);
    if (_26066 == 0)
    {
        _26066 = NOVALUE;
        goto L5; // [76] 98
    }
    else{
        _26066 = NOVALUE;
    }

    /** pathopen.e:669			close(scan_result[2])*/
    _2 = (object)SEQ_PTR(_scan_result_50352);
    _26067 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_26067))
    EClose(_26067);
    else
    EClose((object)DBL_PTR(_26067)->dbl);
    _26067 = NOVALUE;

    /** pathopen.e:670			return scan_result[1]*/
    _2 = (object)SEQ_PTR(_scan_result_50352);
    _26068 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_26068);
    DeRefDS(_name_50351);
    DeRef(_scan_result_50352);
    return _26068;
L5: 

    /** pathopen.e:673		return -1*/
    DeRefDS(_name_50351);
    DeRef(_scan_result_50352);
    _26068 = NOVALUE;
    return -1;
    ;
}



// 0xECA85D24
