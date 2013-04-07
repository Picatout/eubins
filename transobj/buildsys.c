// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _56find_file(object _fname_44815)
{
    object _23513 = NOVALUE; // 44826 23513
    object _23512 = NOVALUE; // 44825 23512
    object _23511 = NOVALUE; // 44824 23511
    object _23510 = NOVALUE; // 44823 23510
    object _23508 = NOVALUE; // 44821 23508
    object _23507 = NOVALUE; // 44818 23507
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 3 op: STARTLINE (58)

    /** buildsys.e:30		for i = 1 to length(inc_dirs) do*/
    // SubProg find_file pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 7 op: LENGTH (42)
    // Known sequence length:
    _23507 = 5;
    // SubProg find_file pc: 10 op: FOR_I (125)
    {
        object _i_44817;
        _i_44817 = 1;
L1: // addr: 17 pc: 10 sub: 44813 op: 125
        if (_i_44817 > 5){
            goto L2; // [10] 64
        }
        // SubProg find_file pc: 17 op: STARTLINE (58)

        /** buildsys.e:31			if file_exists(inc_dirs[i] & "/" & fname) then*/
        // SubProg find_file pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_56inc_dirs_44805);
        _23508 = (object)*(((s1_ptr)_2)->base + _i_44817);
        // SubProg find_file pc: 25 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _fname_44815;
            concat_list[1] = _23509;
            concat_list[2] = _23508;
            Concat_N((object_ptr)&_23510, concat_list, 3);
        }
        _23508 = NOVALUE;
        // SubProg find_file pc: 31 op: PROC (27)
        _23511 = _20file_exists(_23510);
        _23510 = NOVALUE;
        // SubProg find_file pc: 35 op: IF (20)
        if (_23511 == 0) {
            DeRef(_23511);
            _23511 = NOVALUE;
            goto L3; // [35] 57
        }
        else {
            if (!IS_ATOM_INT(_23511) && DBL_PTR(_23511)->dbl == 0.0){
                DeRef(_23511);
                _23511 = NOVALUE;
                goto L3; // [35] 57
            }
            DeRef(_23511);
            _23511 = NOVALUE;
        }
        DeRef(_23511);
        _23511 = NOVALUE;
        // SubProg find_file pc: 38 op: STARTLINE (58)

        /** buildsys.e:32				return inc_dirs[i] & "/" & fname*/
        // SubProg find_file pc: 40 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 42 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_56inc_dirs_44805);
        _23512 = (object)*(((s1_ptr)_2)->base + _i_44817);
        // SubProg find_file pc: 46 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _fname_44815;
            concat_list[1] = _23509;
            concat_list[2] = _23512;
            Concat_N((object_ptr)&_23513, concat_list, 3);
        }
        _23512 = NOVALUE;
        // SubProg find_file pc: 52 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_44815
        DeRefDS(_fname_44815);
        return _23513;
        // SubProg find_file pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 44813 op: 159
        // SubProg find_file pc: 57 op: STARTLINE (58)

        /** buildsys.e:34		end for*/
        // SubProg find_file pc: 59 op: ENDFOR_INT_UP1 (54)
        _i_44817 = _i_44817 + 1;
        goto L1; // [59] 17
L2: // addr: 64 pc: 59 sub: 44813 op: 54
        ;
    }
    // SubProg find_file pc: 64 op: STARTLINE (58)

    /** buildsys.e:36		return 0*/
    // SubProg find_file pc: 66 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_44815
    DeRefDS(_fname_44815);
    DeRef(_23513);
    _23513 = NOVALUE;
    return 0;
    // SubProg find_file pc: 70 op: BADRETURNF (43)
    ;
}


object _56find_all_includes(object _fname_44829, object _includes_44830)
{
    object _lines_44831 = NOVALUE;
    object _m_44837 = NOVALUE;
    object _full_fname_44842 = NOVALUE;
// skipping _23527  name type: 0
    object _23526 = NOVALUE; // 44852 23526
// skipping _23525  name type: 0
    object _23524 = NOVALUE; // 44850 23524
// skipping _23523  name type: 0
    object _23522 = NOVALUE; // 44848 23522
    object _23521 = NOVALUE; // 44846 23521
// skipping _23520  name type: 0
    object _23519 = NOVALUE; // 44843 23519
    object _23518 = NOVALUE; // 44841 23518
// skipping _23517  name type: 0
    object _23516 = NOVALUE; // 44838 23516
    object _23515 = NOVALUE; // 44836 23515
// skipping _23514  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_all_includes pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_all_includes pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_all_includes pc: 5 op: STARTLINE (58)

    /** buildsys.e:40		sequence lines = read_lines(fname)*/
    // SubProg find_all_includes pc: 7 op: PROC (27)
    RefDS(_fname_44829);
    _0 = _lines_44831;
    _lines_44831 = _8read_lines(_fname_44829);
    DeRef(_0);
    // SubProg find_all_includes pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg find_all_includes pc: 13 op: STARTLINE (58)

    /** buildsys.e:42		for i = 1 to length(lines) do*/
    // SubProg find_all_includes pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_lines_44831)){
            _23515 = SEQ_PTR(_lines_44831)->length;
    }
    else {
        _23515 = 1;
    }
    // SubProg find_all_includes pc: 18 op: FOR_I (125)
    {
        object _i_44835;
        _i_44835 = 1;
L1: // addr: 25 pc: 18 sub: 44827 op: 125
        if (_i_44835 > _23515){
            goto L2; // [18] 113
        }
        // SubProg find_all_includes pc: 25 op: STARTLINE (58)

        /** buildsys.e:43			object m = regex:matches(re_include, lines[i])*/
        // SubProg find_all_includes pc: 27 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_all_includes pc: 29 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_lines_44831);
        _23516 = (object)*(((s1_ptr)_2)->base + _i_44835);
        // SubProg find_all_includes pc: 33 op: PROC (27)
        Ref(_56re_include_44802);
        Ref(_23516);
        _0 = _m_44837;
        _m_44837 = _52matches(_56re_include_44802, _23516, 1, 0);
        DeRef(_0);
        _23516 = NOVALUE;
        // SubProg find_all_includes pc: 40 op: STARTLINE (58)

        /** buildsys.e:44			if sequence(m) then*/
        // SubProg find_all_includes pc: 42 op: IS_A_SEQUENCE (68)
        _23518 = IS_SEQUENCE(_m_44837);
        // SubProg find_all_includes pc: 45 op: IF (20)
        if (_23518 == 0)
        {
            _23518 = NOVALUE;
            goto L3; // [45] 102
        }
        else{
            _23518 = NOVALUE;
        }
        // SubProg find_all_includes pc: 48 op: STARTLINE (58)

        /** buildsys.e:45				object full_fname = find_file(m[3])*/
        // SubProg find_all_includes pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_m_44837);
        _23519 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg find_all_includes pc: 54 op: PROC (27)
        Ref(_23519);
        _0 = _full_fname_44842;
        _full_fname_44842 = _56find_file(_23519);
        DeRef(_0);
        _23519 = NOVALUE;
        // SubProg find_all_includes pc: 58 op: STARTLINE (58)

        /** buildsys.e:46				if sequence(full_fname) then*/
        // SubProg find_all_includes pc: 60 op: IS_A_SEQUENCE (68)
        _23521 = IS_SEQUENCE(_full_fname_44842);
        // SubProg find_all_includes pc: 63 op: IF (20)
        if (_23521 == 0)
        {
            _23521 = NOVALUE;
            goto L4; // [63] 101
        }
        else{
            _23521 = NOVALUE;
        }
        // SubProg find_all_includes pc: 66 op: STARTLINE (58)

        /** buildsys.e:47					if eu:find(full_fname, includes) = 0 then*/
        // SubProg find_all_includes pc: 68 op: FIND_FROM (176)
        _23522 = find_from(_full_fname_44842, _includes_44830, 1);
        // SubProg find_all_includes pc: 73 op: EQUALS_IFW_I (121)
        if (_23522 != 0)
        goto L5; // [73] 100
        // SubProg find_all_includes pc: 77 op: STARTLINE (58)

        /** buildsys.e:48						includes &= { full_fname }*/
        // SubProg find_all_includes pc: 79 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_full_fname_44842);
        ((intptr_t*)_2)[1] = _full_fname_44842;
        _23524 = MAKE_SEQ(_1);
        // SubProg find_all_includes pc: 83 op: CONCAT (15)
        Concat((object_ptr)&_includes_44830, _includes_44830, _23524);
        DeRefDS(_23524);
        _23524 = NOVALUE;
        // SubProg find_all_includes pc: 87 op: STARTLINE (58)

        /** buildsys.e:49						includes = find_all_includes(full_fname, includes)*/
        // SubProg find_all_includes pc: 89 op: ASSIGN (18)
        RefDS(_includes_44830);
        DeRef(_23526);
        _23526 = _includes_44830;
        // SubProg find_all_includes pc: 92 op: PROC (27)
        Ref(_full_fname_44842);
        _0 = _includes_44830;
        _includes_44830 = _56find_all_includes(_full_fname_44842, _23526);
        DeRefDS(_0);
        _23526 = NOVALUE;
        // SubProg find_all_includes pc: 97 op: SEQUENCE_CHECK (97)
        // SubProg find_all_includes pc: 99 op: NOP1 (159)
L5: // addr: 100 pc: 99 sub: 44827 op: 159
        // SubProg find_all_includes pc: 100 op: NOP1 (159)
L4: // addr: 101 pc: 100 sub: 44827 op: 159
        // SubProg find_all_includes pc: 101 op: NOP1 (159)
L3: // addr: 102 pc: 101 sub: 44827 op: 159
        // SubProg find_all_includes pc: 102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var full_fname_44842
        DeRef(_full_fname_44842);
        _full_fname_44842 = NOVALUE;
        // SubProg find_all_includes pc: 104 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var m_44837
        DeRef(_m_44837);
        _m_44837 = NOVALUE;
        // SubProg find_all_includes pc: 106 op: STARTLINE (58)

        /** buildsys.e:53		end for*/
        // SubProg find_all_includes pc: 108 op: ENDFOR_INT_UP1 (54)
        _i_44835 = _i_44835 + 1;
        goto L1; // [108] 25
L2: // addr: 113 pc: 108 sub: 44827 op: 54
        ;
    }
    // SubProg find_all_includes pc: 113 op: STARTLINE (58)

    /** buildsys.e:55		return includes*/
    // SubProg find_all_includes pc: 115 op: RETURNF (28)

// Exiting block BLOCK: find_all_includes

// block var fname_44829
    DeRefDS(_fname_44829);

// block var lines_44831
    DeRef(_lines_44831);
    return _includes_44830;
    // SubProg find_all_includes pc: 119 op: BADRETURNF (43)
    ;
}


object _56quick_has_changed(object _fname_44856)
{
    object _d1_44857 = NOVALUE;
    object _all_files_44867 = NOVALUE;
    object _d2_44873 = NOVALUE;
    object _diff_2__tmp_at88_44883 = NOVALUE;
    object _diff_1__tmp_at88_44882 = NOVALUE;
    object _diff_inlined_diff_at_88_44881 = NOVALUE;
// skipping _23539  name type: 0
    object _23538 = NOVALUE; // 44878 23538
// skipping _23537  name type: 0
    object _23536 = NOVALUE; // 44875 23536
    object _23535 = NOVALUE; // 44872 23535
// skipping _23534  name type: 0
    object _23533 = NOVALUE; // 44868 23533
    object _23532 = NOVALUE; // 44866 23532
// skipping _23531  name type: 0
    object _23530 = NOVALUE; // 44863 23530
    object _23528 = NOVALUE; // 44861 23528
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg quick_has_changed pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg quick_has_changed pc: 3 op: STARTLINE (58)

    /** buildsys.e:59		object d1 = file_timestamp(output_dir & filebase(fname) & ".bld")*/
    // SubProg quick_has_changed pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg quick_has_changed pc: 7 op: PROC (27)
    RefDS(_fname_44856);
    _23528 = _20filebase(_fname_44856);
    // SubProg quick_has_changed pc: 11 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23529;
        concat_list[1] = _23528;
        concat_list[2] = _58output_dir_42100;
        Concat_N((object_ptr)&_23530, concat_list, 3);
    }
    DeRef(_23528);
    _23528 = NOVALUE;
    // SubProg quick_has_changed pc: 17 op: PROC (27)
    _0 = _d1_44857;
    _d1_44857 = _20file_timestamp(_23530);
    DeRef(_0);
    _23530 = NOVALUE;
    // SubProg quick_has_changed pc: 21 op: STARTLINE (58)

    /** buildsys.e:61		if atom(d1) then*/
    // SubProg quick_has_changed pc: 23 op: IS_AN_ATOM (67)
    _23532 = IS_ATOM(_d1_44857);
    // SubProg quick_has_changed pc: 26 op: IF (20)
    if (_23532 == 0)
    {
        _23532 = NOVALUE;
        goto L1; // [26] 36
    }
    else{
        _23532 = NOVALUE;
    }
    // SubProg quick_has_changed pc: 29 op: STARTLINE (58)

    /** buildsys.e:62			return 1*/
    // SubProg quick_has_changed pc: 31 op: RETURNF (28)

// Exiting block BLOCK: quick_has_changed

// block var fname_44856
    DeRefDS(_fname_44856);

// block var d1_44857
    DeRef(_d1_44857);

// block var all_files_44867
    DeRef(_all_files_44867);
    return 1;
    // SubProg quick_has_changed pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 44854 op: 159
    // SubProg quick_has_changed pc: 36 op: STARTLINE (58)

    /** buildsys.e:65		sequence all_files = append(find_all_includes(fname), fname)*/
    // SubProg quick_has_changed pc: 38 op: PROC (27)
    RefDS(_fname_44856);
    RefDS(_21933);
    _23533 = _56find_all_includes(_fname_44856, _21933);
    // SubProg quick_has_changed pc: 43 op: APPEND (35)
    RefDS(_fname_44856);
    Append(&_all_files_44867, _23533, _fname_44856);
    DeRef(_23533);
    _23533 = NOVALUE;
    // SubProg quick_has_changed pc: 47 op: STARTLINE (58)

    /** buildsys.e:66		for i = 1 to length(all_files) do*/
    // SubProg quick_has_changed pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_all_files_44867)){
            _23535 = SEQ_PTR(_all_files_44867)->length;
    }
    else {
        _23535 = 1;
    }
    // SubProg quick_has_changed pc: 52 op: FOR_I (125)
    {
        object _i_44871;
        _i_44871 = 1;
L2: // addr: 59 pc: 52 sub: 44854 op: 125
        if (_i_44871 > _23535){
            goto L3; // [52] 123
        }
        // SubProg quick_has_changed pc: 59 op: STARTLINE (58)

        /** buildsys.e:67			object d2 = file_timestamp(all_files[i])*/
        // SubProg quick_has_changed pc: 61 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_all_files_44867);
        _23536 = (object)*(((s1_ptr)_2)->base + _i_44871);
        // SubProg quick_has_changed pc: 65 op: PROC (27)
        Ref(_23536);
        _0 = _d2_44873;
        _d2_44873 = _20file_timestamp(_23536);
        DeRef(_0);
        _23536 = NOVALUE;
        // SubProg quick_has_changed pc: 69 op: STARTLINE (58)

        /** buildsys.e:68			if atom(d2) then*/
        // SubProg quick_has_changed pc: 71 op: IS_AN_ATOM (67)
        _23538 = IS_ATOM(_d2_44873);
        // SubProg quick_has_changed pc: 74 op: IF (20)
        if (_23538 == 0)
        {
            _23538 = NOVALUE;
            goto L4; // [74] 84
        }
        else{
            _23538 = NOVALUE;
        }
        // SubProg quick_has_changed pc: 77 op: STARTLINE (58)

        /** buildsys.e:69				return 1*/
        // SubProg quick_has_changed pc: 79 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var d2_44873
        DeRef(_d2_44873);

// Exiting block BLOCK: quick_has_changed

// block var fname_44856
        DeRefDS(_fname_44856);

// block var d1_44857
        DeRef(_d1_44857);

// block var all_files_44867
        DeRefDS(_all_files_44867);
        return 1;
        // SubProg quick_has_changed pc: 83 op: NOP1 (159)
L4: // addr: 84 pc: 83 sub: 44854 op: 159
        // SubProg quick_has_changed pc: 84 op: STARTLINE (58)

        /** buildsys.e:71			if datetime:diff(d1, d2) > 0 then*/
        // SubProg quick_has_changed pc: 86 op: STARTLINE (58)

        /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
        // SubProg quick_has_changed pc: 88 op: PROC (27)
        Ref(_d2_44873);
        _0 = _diff_1__tmp_at88_44882;
        _diff_1__tmp_at88_44882 = _21datetimeToSeconds(_d2_44873);
        DeRef(_0);
        // SubProg quick_has_changed pc: 92 op: PROC (27)
        Ref(_d1_44857);
        _0 = _diff_2__tmp_at88_44883;
        _diff_2__tmp_at88_44883 = _21datetimeToSeconds(_d1_44857);
        DeRef(_0);
        // SubProg quick_has_changed pc: 96 op: MINUS (10)
        DeRef(_diff_inlined_diff_at_88_44881);
        if (IS_ATOM_INT(_diff_1__tmp_at88_44882) && IS_ATOM_INT(_diff_2__tmp_at88_44883)) {
            _diff_inlined_diff_at_88_44881 = _diff_1__tmp_at88_44882 - _diff_2__tmp_at88_44883;
            if ((object)((uintptr_t)_diff_inlined_diff_at_88_44881 +(uintptr_t) HIGH_BITS) >= 0){
                _diff_inlined_diff_at_88_44881 = NewDouble((eudouble)_diff_inlined_diff_at_88_44881);
            }
        }
        else {
            _diff_inlined_diff_at_88_44881 = binary_op(MINUS, _diff_1__tmp_at88_44882, _diff_2__tmp_at88_44883);
        }
        // SubProg quick_has_changed pc: 100 op: NOP1 (159)
        // SubProg quick_has_changed pc: 101 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-diff from quick_has_changed @ 88

// block var diff_1__tmp_at88_44882
        DeRef(_diff_1__tmp_at88_44882);
        _diff_1__tmp_at88_44882 = NOVALUE;

// block var diff_2__tmp_at88_44883
        DeRef(_diff_2__tmp_at88_44883);
        _diff_2__tmp_at88_44883 = NOVALUE;
        // SubProg quick_has_changed pc: 103 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _diff_inlined_diff_at_88_44881, 0)){
            goto L5; // [103] 114
        }
        // SubProg quick_has_changed pc: 107 op: STARTLINE (58)

        /** buildsys.e:72				return 1*/
        // SubProg quick_has_changed pc: 109 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var d2_44873
        DeRef(_d2_44873);

// Exiting block BLOCK: quick_has_changed

// block var fname_44856
        DeRefDS(_fname_44856);

// block var d1_44857
        DeRef(_d1_44857);

// block var all_files_44867
        DeRef(_all_files_44867);
        return 1;
        // SubProg quick_has_changed pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 44854 op: 159
        // SubProg quick_has_changed pc: 114 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var d2_44873
        DeRef(_d2_44873);
        _d2_44873 = NOVALUE;
        // SubProg quick_has_changed pc: 116 op: STARTLINE (58)

        /** buildsys.e:74		end for*/
        // SubProg quick_has_changed pc: 118 op: ENDFOR_INT_UP1 (54)
        _i_44871 = _i_44871 + 1;
        goto L2; // [118] 59
L3: // addr: 123 pc: 118 sub: 44854 op: 54
        ;
    }
    // SubProg quick_has_changed pc: 123 op: STARTLINE (58)

    /** buildsys.e:76		return 0*/
    // SubProg quick_has_changed pc: 125 op: RETURNF (28)

// Exiting block BLOCK: quick_has_changed

// block var fname_44856
    DeRefDS(_fname_44856);

// block var d1_44857
    DeRef(_d1_44857);

// block var all_files_44867
    DeRef(_all_files_44867);
    return 0;
    // SubProg quick_has_changed pc: 129 op: BADRETURNF (43)
    ;
}


void _56update_checksum(object _raw_data_44929)
{
// skipping _23547  name type: 0
    object _23546 = NOVALUE; // 44930 23546
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_checksum pc: 1 op: STARTLINE (58)

    /** buildsys.e:213		cfile_check = xor_bits(cfile_check, hash( raw_data, stdhash:HSIEH32))*/
    // SubProg update_checksum pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_checksum pc: 5 op: HASH (194)
    _23546 = calc_hash(_raw_data_44929, -5);
    // SubProg update_checksum pc: 9 op: XOR_BITS (26)
    _0 = _56cfile_check_44910;
    if (IS_ATOM_INT(_56cfile_check_44910) && IS_ATOM_INT(_23546)) {
        {uintptr_t tu;
             tu = (uintptr_t)_56cfile_check_44910 ^ (uintptr_t)_23546;
             _56cfile_check_44910 = MAKE_UINT(tu);
        }
    }
    else {
        if (IS_ATOM_INT(_56cfile_check_44910)) {
            temp_d.dbl = (eudouble)_56cfile_check_44910;
            _56cfile_check_44910 = Dxor_bits(&temp_d, DBL_PTR(_23546));
        }
        else {
            if (IS_ATOM_INT(_23546)) {
                temp_d.dbl = (eudouble)_23546;
                _56cfile_check_44910 = Dxor_bits(DBL_PTR(_56cfile_check_44910), &temp_d);
            }
            else
            _56cfile_check_44910 = Dxor_bits(DBL_PTR(_56cfile_check_44910), DBL_PTR(_23546));
        }
    }
    DeRef(_0);
    DeRef(_23546);
    _23546 = NOVALUE;
    // SubProg update_checksum pc: 13 op: STARTLINE (58)

    /** buildsys.e:214	end procedure*/
    // SubProg update_checksum pc: 15 op: RETURNP (29)

// Exiting block BLOCK: update_checksum

// block var raw_data_44929
    DeRef(_raw_data_44929);
    return;
    // SubProg update_checksum pc: 18 op: BADRETURNF (43)
    ;
}


void _56write_checksum(object _file_44934)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_checksum pc: 1 op: INTEGER_CHECK (96)
    // SubProg write_checksum pc: 3 op: STARTLINE (58)

    /** buildsys.e:219		printf( file, "\n// 0x%08x\n", cfile_check )*/
    // SubProg write_checksum pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_checksum pc: 7 op: PRINTF (38)
    EPrintf(_file_44934, _23548, _56cfile_check_44910);
    // SubProg write_checksum pc: 11 op: STARTLINE (58)

    /** buildsys.e:220		cfile_check = 0*/
    // SubProg write_checksum pc: 13 op: ASSIGN (18)
    DeRef(_56cfile_check_44910);
    _56cfile_check_44910 = 0;
    // SubProg write_checksum pc: 16 op: STARTLINE (58)

    /** buildsys.e:221	end procedure*/
    // SubProg write_checksum pc: 18 op: RETURNP (29)

// Exiting block BLOCK: write_checksum

// block var file_44934
    return;
    // SubProg write_checksum pc: 21 op: BADRETURNF (43)
    ;
}


object _56adjust_for_command_line_passing(object _long_path_44982)
{
    object _slash_44983 = NOVALUE;
// skipping _23571  name type: 0
// skipping _23570  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_for_command_line_passing pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_for_command_line_passing pc: 3 op: STARTLINE (58)

    /** buildsys.e:310		if compiler_type = COMPILER_GCC then*/
    // SubProg adjust_for_command_line_passing pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_command_line_passing pc: 7 op: EQUALS_IFW_I (121)
    if (_56compiler_type_44893 != 1)
    goto L1; // [7] 19
    // SubProg adjust_for_command_line_passing pc: 11 op: STARTLINE (58)

    /** buildsys.e:311			slash = '/'*/
    // SubProg adjust_for_command_line_passing pc: 13 op: ASSIGN_I (113)
    _slash_44983 = 47;
    // SubProg adjust_for_command_line_passing pc: 16 op: ELSE (23)
    goto L2; // [16] 45
    // SubProg adjust_for_command_line_passing pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 44980 op: 159
    // SubProg adjust_for_command_line_passing pc: 19 op: STARTLINE (58)

    /** buildsys.e:312		elsif compiler_type = COMPILER_WATCOM then*/
    // SubProg adjust_for_command_line_passing pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_command_line_passing pc: 23 op: EQUALS_IFW_I (121)
    if (_56compiler_type_44893 != 2)
    goto L3; // [23] 35
    // SubProg adjust_for_command_line_passing pc: 27 op: STARTLINE (58)

    /** buildsys.e:313			slash = '\\'*/
    // SubProg adjust_for_command_line_passing pc: 29 op: ASSIGN_I (113)
    _slash_44983 = 92;
    // SubProg adjust_for_command_line_passing pc: 32 op: ELSE (23)
    goto L2; // [32] 45
    // SubProg adjust_for_command_line_passing pc: 34 op: NOP1 (159)
L3: // addr: 35 pc: 34 sub: 44980 op: 159
    // SubProg adjust_for_command_line_passing pc: 35 op: STARTLINE (58)

    /** buildsys.e:315			slash = SLASH*/
    // SubProg adjust_for_command_line_passing pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_command_line_passing pc: 39 op: ASSIGN (18)
    _slash_44983 = 47;
    // SubProg adjust_for_command_line_passing pc: 42 op: INTEGER_CHECK (96)
    // SubProg adjust_for_command_line_passing pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 44980 op: 159
    // SubProg adjust_for_command_line_passing pc: 45 op: STARTLINE (58)

    /** buildsys.e:317		ifdef UNIX then*/
    // SubProg adjust_for_command_line_passing pc: 47 op: STARTLINE (58)

    /** buildsys.e:318			return long_path*/
    // SubProg adjust_for_command_line_passing pc: 49 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_command_line_passing

// block var slash_44983
    return _long_path_44982;
    // SubProg adjust_for_command_line_passing pc: 53 op: BADRETURNF (43)
    ;
}


object _56adjust_for_build_file(object _long_path_44992)
{
    object _short_path_44993 = NOVALUE;
    object _23578 = NOVALUE; // 45004 23578
    object _23577 = NOVALUE; // 45001 23577
    object _23576 = NOVALUE; // 45000 23576
    object _23575 = NOVALUE; // 44999 23575
    object _23574 = NOVALUE; // 44998 23574
    object _23573 = NOVALUE; // 44996 23573
// skipping _23572  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_for_build_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_for_build_file pc: 3 op: STARTLINE (58)

    /** buildsys.e:355	    object short_path = adjust_for_command_line_passing(long_path)*/
    // SubProg adjust_for_build_file pc: 5 op: PROC (27)
    RefDS(_long_path_44992);
    _0 = _short_path_44993;
    _short_path_44993 = _56adjust_for_command_line_passing(_long_path_44992);
    DeRef(_0);
    // SubProg adjust_for_build_file pc: 9 op: STARTLINE (58)

    /** buildsys.e:356	    if atom(short_path) then*/
    // SubProg adjust_for_build_file pc: 11 op: IS_AN_ATOM (67)
    _23573 = IS_ATOM(_short_path_44993);
    // SubProg adjust_for_build_file pc: 14 op: IF (20)
    if (_23573 == 0)
    {
        _23573 = NOVALUE;
        goto L1; // [14] 24
    }
    else{
        _23573 = NOVALUE;
    }
    // SubProg adjust_for_build_file pc: 17 op: STARTLINE (58)

    /** buildsys.e:357	    	return short_path*/
    // SubProg adjust_for_build_file pc: 19 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_44992
    DeRefDS(_long_path_44992);
    return _short_path_44993;
    // SubProg adjust_for_build_file pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 44990 op: 159
    // SubProg adjust_for_build_file pc: 24 op: STARTLINE (58)

    /** buildsys.e:359		if compiler_type = COMPILER_GCC and build_system_type != BUILD_DIRECT and TWINDOWS then*/
    // SubProg adjust_for_build_file pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 28 op: EQUALS (3)
    _23574 = (_56compiler_type_44893 == 1);
    // SubProg adjust_for_build_file pc: 32 op: SC1_AND (141)
    if (_23574 == 0) {
        _23575 = 0;
        goto L2; // [32] 46
    }
    // SubProg adjust_for_build_file pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 38 op: NOTEQ (4)
    _23576 = (_56build_system_type_44889 != 3);
    // SubProg adjust_for_build_file pc: 42 op: SC2_AND (142)
    _23575 = (_23576 != 0);
    // SubProg adjust_for_build_file pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 44990 op: 159
    // SubProg adjust_for_build_file pc: 46 op: SC1_AND_IF (146)
    if (_23575 == 0) {
        goto L3; // [46] 69
    }
    // SubProg adjust_for_build_file pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 52 op: NOP1 (159)
    // SubProg adjust_for_build_file pc: 53 op: IF (20)
    if (_41TWINDOWS_21210 == 0)
    {
        goto L3; // [53] 69
    }
    else{
    }
    // SubProg adjust_for_build_file pc: 56 op: STARTLINE (58)

    /** buildsys.e:360			return windows_to_mingw_path(short_path)*/
    // SubProg adjust_for_build_file pc: 58 op: PROC (27)
    Ref(_short_path_44993);
    _23578 = _56windows_to_mingw_path(_short_path_44993);
    // SubProg adjust_for_build_file pc: 62 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_44992
    DeRefDS(_long_path_44992);

// block var short_path_44993
    DeRef(_short_path_44993);
    DeRef(_23574);
    _23574 = NOVALUE;
    DeRef(_23576);
    _23576 = NOVALUE;
    return _23578;
    // SubProg adjust_for_build_file pc: 66 op: ELSE (23)
    goto L4; // [66] 76
    // SubProg adjust_for_build_file pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 44990 op: 159
    // SubProg adjust_for_build_file pc: 69 op: STARTLINE (58)

    /** buildsys.e:362			return short_path*/
    // SubProg adjust_for_build_file pc: 71 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_44992
    DeRefDS(_long_path_44992);
    DeRef(_23578);
    _23578 = NOVALUE;
    DeRef(_23574);
    _23574 = NOVALUE;
    DeRef(_23576);
    _23576 = NOVALUE;
    return _short_path_44993;
    // SubProg adjust_for_build_file pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 44990 op: 159
    // SubProg adjust_for_build_file pc: 76 op: BADRETURNF (43)
    ;
}


object _56setup_build()
{
    object _c_exe_45008 = NOVALUE;
    object _c_flags_45009 = NOVALUE;
    object _l_exe_45010 = NOVALUE;
    object _l_flags_45011 = NOVALUE;
    object _obj_ext_45012 = NOVALUE;
    object _exe_ext_45013 = NOVALUE;
    object _l_flags_begin_45014 = NOVALUE;
    object _rc_comp_45015 = NOVALUE;
    object _l_names_45016 = NOVALUE;
    object _l_ext_45017 = NOVALUE;
    object _t_slash_45018 = NOVALUE;
    object _eudir_45060 = NOVALUE;
    object _locations_45085 = NOVALUE;
    object _compile_dir_45137 = NOVALUE;
    object _bits_45148 = NOVALUE;
    object _m_flag_45158 = NOVALUE;
    object _23747 = NOVALUE; // 45301 23747
// skipping _23746  name type: 0
    object _23745 = NOVALUE; // 45298 23745
    object _23744 = NOVALUE; // 45297 23744
    object _23743 = NOVALUE; // 45295 23743
// skipping _23742  name type: 0
    object _23741 = NOVALUE; // 45292 23741
    object _23740 = NOVALUE; // 45291 23740
    object _23739 = NOVALUE; // 45289 23739
// skipping _23738  name type: 0
    object _23736 = NOVALUE; // 45283 23736
    object _23735 = NOVALUE; // 45282 23735
// skipping _23733  name type: 0
    object _23732 = NOVALUE; // 45278 23732
    object _23731 = NOVALUE; // 45277 23731
// skipping _23729  name type: 0
// skipping _23727  name type: 0
// skipping _23725  name type: 0
    object _23724 = NOVALUE; // 45266 23724
    object _23723 = NOVALUE; // 45265 23723
// skipping _23721  name type: 0
// skipping _23719  name type: 0
    object _23718 = NOVALUE; // 45259 23718
    object _23717 = NOVALUE; // 45258 23717
// skipping _23715  name type: 0
// skipping _23713  name type: 0
    object _23712 = NOVALUE; // 45251 23712
    object _23711 = NOVALUE; // 45250 23711
// skipping _23709  name type: 0
    object _23708 = NOVALUE; // 45246 23708
    object _23707 = NOVALUE; // 45245 23707
// skipping _23705  name type: 0
// skipping _23701  name type: 0
// skipping _23699  name type: 0
// skipping _23697  name type: 0
    object _23695 = NOVALUE; // 45229 23695
    object _23694 = NOVALUE; // 45228 23694
// skipping _23692  name type: 0
// skipping _23690  name type: 0
// skipping _23689  name type: 0
// skipping _23688  name type: 0
// skipping _23686  name type: 0
// skipping _23684  name type: 0
// skipping _23682  name type: 0
// skipping _23680  name type: 0
    object _23679 = NOVALUE; // 45199 23679
    object _23678 = NOVALUE; // 45198 23678
// skipping _23676  name type: 0
    object _23675 = NOVALUE; // 45193 23675
// skipping _23673  name type: 0
// skipping _23672  name type: 0
    object _23670 = NOVALUE; // 45187 23670
// skipping _23669  name type: 0
    object _23668 = NOVALUE; // 45183 23668
    object _23667 = NOVALUE; // 45182 23667
    object _23666 = NOVALUE; // 45181 23666
    object _23665 = NOVALUE; // 45180 23665
// skipping _23663  name type: 0
    object _23661 = NOVALUE; // 45175 23661
    object _23660 = NOVALUE; // 45173 23660
// skipping _23659  name type: 0
// skipping _23657  name type: 0
// skipping _23655  name type: 0
// skipping _23653  name type: 0
// skipping _23651  name type: 0
// skipping _23650  name type: 0
    object _23646 = NOVALUE; // 45147 23646
    object _23645 = NOVALUE; // 45146 23645
// skipping _23643  name type: 0
    object _23642 = NOVALUE; // 45142 23642
// skipping _23641  name type: 0
// skipping _23636  name type: 0
// skipping _23634  name type: 0
// skipping _23632  name type: 0
// skipping _23631  name type: 0
    object _23630 = NOVALUE; // 45110 23630
// skipping _23629  name type: 0
    object _23628 = NOVALUE; // 45105 23628
    object _23627 = NOVALUE; // 45104 23627
    object _23626 = NOVALUE; // 45103 23626
    object _23625 = NOVALUE; // 45101 23625
    object _23624 = NOVALUE; // 45100 23624
    object _23623 = NOVALUE; // 45099 23623
    object _23622 = NOVALUE; // 45098 23622
    object _23621 = NOVALUE; // 45097 23621
    object _23620 = NOVALUE; // 45094 23620
    object _23619 = NOVALUE; // 45091 23619
// skipping _23617  name type: 0
    object _23614 = NOVALUE; // 45084 23614
// skipping _23613  name type: 0
// skipping _23612  name type: 0
    object _23611 = NOVALUE; // 45079 23611
    object _23610 = NOVALUE; // 45078 23610
    object _23609 = NOVALUE; // 45077 23609
    object _23606 = NOVALUE; // 45073 23606
    object _23605 = NOVALUE; // 45070 23605
    object _23604 = NOVALUE; // 45069 23604
// skipping _23602  name type: 0
    object _23601 = NOVALUE; // 45065 23601
// skipping _23600  name type: 0
    object _23597 = NOVALUE; // 45055 23597
    object _23596 = NOVALUE; // 45054 23596
    object _23594 = NOVALUE; // 45052 23594
    object _23593 = NOVALUE; // 45049 23593
    object _23592 = NOVALUE; // 45047 23592
    object _23591 = NOVALUE; // 45044 23591
// skipping _23590  name type: 0
// skipping _23589  name type: 0
// skipping _23588  name type: 0
// skipping _23585  name type: 0
    object _23584 = NOVALUE; // 45032 23584
    object _23583 = NOVALUE; // 45027 23583
    object _23582 = NOVALUE; // 45025 23582
    object _23581 = NOVALUE; // 45024 23581
    object _23580 = NOVALUE; // 45023 23580
    object _23579 = NOVALUE; // 45021 23579
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg setup_build pc: 1 op: STARTLINE (58)

    /** buildsys.e:373			c_exe   = "",*/
    // SubProg setup_build pc: 3 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_c_exe_45008);
    _c_exe_45008 = _21933;
    // SubProg setup_build pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 8 op: STARTLINE (58)

    /** buildsys.e:374			c_flags = "",*/
    // SubProg setup_build pc: 10 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_c_flags_45009);
    _c_flags_45009 = _21933;
    // SubProg setup_build pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 15 op: STARTLINE (58)

    /** buildsys.e:375			l_exe   = "",*/
    // SubProg setup_build pc: 17 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_l_exe_45010);
    _l_exe_45010 = _21933;
    // SubProg setup_build pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 22 op: STARTLINE (58)

    /** buildsys.e:376			l_flags = "",*/
    // SubProg setup_build pc: 24 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_l_flags_45011);
    _l_flags_45011 = _21933;
    // SubProg setup_build pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 29 op: STARTLINE (58)

    /** buildsys.e:377			obj_ext = "",*/
    // SubProg setup_build pc: 31 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_obj_ext_45012);
    _obj_ext_45012 = _21933;
    // SubProg setup_build pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 36 op: STARTLINE (58)

    /** buildsys.e:378			exe_ext = "",*/
    // SubProg setup_build pc: 38 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_exe_ext_45013);
    _exe_ext_45013 = _21933;
    // SubProg setup_build pc: 41 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 43 op: STARTLINE (58)

    /** buildsys.e:379			l_flags_begin = "",*/
    // SubProg setup_build pc: 45 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_l_flags_begin_45014);
    _l_flags_begin_45014 = _21933;
    // SubProg setup_build pc: 48 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 50 op: STARTLINE (58)

    /** buildsys.e:380			rc_comp = "",*/
    // SubProg setup_build pc: 52 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_rc_comp_45015);
    _rc_comp_45015 = _21933;
    // SubProg setup_build pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 57 op: STARTLINE (58)

    /** buildsys.e:385		if dll_option*/
    // SubProg setup_build pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 61 op: SC1_AND (141)
    if (_58dll_option_42086 == 0) {
        _23579 = 0;
        goto L1; // [61] 78
    }
    // SubProg setup_build pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_58user_pic_library_42099)){
            _23580 = SEQ_PTR(_58user_pic_library_42099)->length;
    }
    else {
        _23580 = 1;
    }
    // SubProg setup_build pc: 70 op: GREATER (6)
    _23581 = (_23580 > 0);
    _23580 = NOVALUE;
    // SubProg setup_build pc: 74 op: SC2_AND (142)
    _23579 = (_23581 != 0);
    // SubProg setup_build pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 45006 op: 159
    // SubProg setup_build pc: 78 op: SC1_AND_IF (146)
    if (_23579 == 0) {
        goto L2; // [78] 101
    }
    // SubProg setup_build pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 84 op: NOT (7)
    _23583 = (_41TWINDOWS_21210 == 0);
    // SubProg setup_build pc: 87 op: NOP1 (159)
    // SubProg setup_build pc: 88 op: IF (20)
    if (_23583 == 0)
    {
        DeRef(_23583);
        _23583 = NOVALUE;
        goto L2; // [88] 101
    }
    else{
        DeRef(_23583);
        _23583 = NOVALUE;
    }
    // SubProg setup_build pc: 91 op: STARTLINE (58)

    /** buildsys.e:388			user_library = user_pic_library*/
    // SubProg setup_build pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 95 op: ASSIGN (18)
    RefDS(_58user_pic_library_42099);
    DeRef(_58user_library_42098);
    _58user_library_42098 = _58user_pic_library_42099;
    // SubProg setup_build pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 100 op: NOP1 (159)
L2: // addr: 101 pc: 100 sub: 45006 op: 159
    // SubProg setup_build pc: 101 op: STARTLINE (58)

    /** buildsys.e:391		if length(user_library) = 0 then*/
    // SubProg setup_build pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_58user_library_42098)){
            _23584 = SEQ_PTR(_58user_library_42098)->length;
    }
    else {
        _23584 = 1;
    }
    // SubProg setup_build pc: 108 op: EQUALS_IFW_I (121)
    if (_23584 != 0)
    goto L3; // [108] 456
    // SubProg setup_build pc: 112 op: STARTLINE (58)

    /** buildsys.e:392			if debug_option then*/
    // SubProg setup_build pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 116 op: IF (20)
    if (_58debug_option_42096 == 0)
    {
        goto L4; // [116] 128
    }
    else{
    }
    // SubProg setup_build pc: 119 op: STARTLINE (58)

    /** buildsys.e:393				l_names = { "eudbg", "eu" }*/
    // SubProg setup_build pc: 121 op: RIGHT_BRACE_2 (85)
    RefDS(_23587);
    RefDS(_23586);
    DeRef(_l_names_45016);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23586;
    ((intptr_t *)_2)[2] = _23587;
    _l_names_45016 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 125 op: ELSE (23)
    goto L5; // [125] 135
    // SubProg setup_build pc: 127 op: NOP1 (159)
L4: // addr: 128 pc: 127 sub: 45006 op: 159
    // SubProg setup_build pc: 128 op: STARTLINE (58)

    /** buildsys.e:395				l_names = { "eu", "eudbg" }*/
    // SubProg setup_build pc: 130 op: RIGHT_BRACE_2 (85)
    RefDS(_23586);
    RefDS(_23587);
    DeRef(_l_names_45016);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23587;
    ((intptr_t *)_2)[2] = _23586;
    _l_names_45016 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 45006 op: 159
    // SubProg setup_build pc: 135 op: STARTLINE (58)

    /** buildsys.e:400			if TUNIX or compiler_type = COMPILER_GCC then*/
    // SubProg setup_build pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 139 op: SC1_OR_IF (147)
    if (_41TUNIX_21214 != 0) {
        goto L6; // [139] 154
    }
    // SubProg setup_build pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 145 op: EQUALS (3)
    _23591 = (_56compiler_type_44893 == 1);
    // SubProg setup_build pc: 149 op: NOP1 (159)
    // SubProg setup_build pc: 150 op: IF (20)
    if (_23591 == 0)
    {
        DeRef(_23591);
        _23591 = NOVALUE;
        goto L7; // [150] 224
    }
    else{
        DeRef(_23591);
        _23591 = NOVALUE;
    }
    // SubProg setup_build pc: 153 op: NOP1 (159)
L6: // addr: 154 pc: 153 sub: 45006 op: 159
    // SubProg setup_build pc: 154 op: STARTLINE (58)

    /** buildsys.e:401				l_ext = "a"*/
    // SubProg setup_build pc: 156 op: ASSIGN (18)
    RefDS(_22214);
    DeRefi(_l_ext_45017);
    _l_ext_45017 = _22214;
    // SubProg setup_build pc: 159 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 161 op: STARTLINE (58)

    /** buildsys.e:402				t_slash = "/"*/
    // SubProg setup_build pc: 163 op: ASSIGN (18)
    RefDS(_23509);
    DeRefi(_t_slash_45018);
    _t_slash_45018 = _23509;
    // SubProg setup_build pc: 166 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 168 op: STARTLINE (58)

    /** buildsys.e:403				if dll_option and not TWINDOWS then*/
    // SubProg setup_build pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 172 op: SC1_AND_IF (146)
    if (_58dll_option_42086 == 0) {
        goto L8; // [172] 247
    }
    // SubProg setup_build pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 178 op: NOT (7)
    _23593 = (_41TWINDOWS_21210 == 0);
    // SubProg setup_build pc: 181 op: NOP1 (159)
    // SubProg setup_build pc: 182 op: IF (20)
    if (_23593 == 0)
    {
        DeRef(_23593);
        _23593 = NOVALUE;
        goto L8; // [182] 247
    }
    else{
        DeRef(_23593);
        _23593 = NOVALUE;
    }
    // SubProg setup_build pc: 185 op: STARTLINE (58)

    /** buildsys.e:404					for i = 1 to length( l_names ) do*/
    // SubProg setup_build pc: 187 op: PRIVATE_INIT_CHECK (30)
    // SubProg setup_build pc: 189 op: LENGTH (42)
    if (IS_SEQUENCE(_l_names_45016)){
            _23594 = SEQ_PTR(_l_names_45016)->length;
    }
    else {
        _23594 = 1;
    }
    // SubProg setup_build pc: 192 op: FOR_I (125)
    {
        object _i_45051;
        _i_45051 = 1;
L9: // addr: 199 pc: 192 sub: 45006 op: 125
        if (_i_45051 > _23594){
            goto LA; // [192] 220
        }
        // SubProg setup_build pc: 199 op: STARTLINE (58)

        /** buildsys.e:406						l_names[i] &= "so"*/
        // SubProg setup_build pc: 201 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_l_names_45016);
        _23596 = (object)*(((s1_ptr)_2)->base + _i_45051);
        // SubProg setup_build pc: 205 op: CONCAT (15)
        if (IS_SEQUENCE(_23596) && IS_ATOM(_23595)) {
        }
        else if (IS_ATOM(_23596) && IS_SEQUENCE(_23595)) {
            Ref(_23596);
            Prepend(&_23597, _23595, _23596);
        }
        else {
            Concat((object_ptr)&_23597, _23596, _23595);
            _23596 = NOVALUE;
        }
        _23596 = NOVALUE;
        // SubProg setup_build pc: 209 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_l_names_45016);
        _2 = (object)(((s1_ptr)_2)->base + _i_45051);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _23597;
        if( _1 != _23597 ){
            DeRef(_1);
        }
        _23597 = NOVALUE;
        // SubProg setup_build pc: 213 op: STARTLINE (58)

        /** buildsys.e:407					end for*/
        // SubProg setup_build pc: 215 op: ENDFOR_INT_UP1 (54)
        _i_45051 = _i_45051 + 1;
        goto L9; // [215] 199
LA: // addr: 220 pc: 215 sub: 45006 op: 54
        ;
    }
    // SubProg setup_build pc: 220 op: NOP1 (159)
    // SubProg setup_build pc: 221 op: ELSE (23)
    goto L8; // [221] 247
    // SubProg setup_build pc: 223 op: NOP1 (159)
L7: // addr: 224 pc: 223 sub: 45006 op: 159
    // SubProg setup_build pc: 224 op: STARTLINE (58)

    /** buildsys.e:409			elsif TWINDOWS then*/
    // SubProg setup_build pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 228 op: IF (20)
    if (_41TWINDOWS_21210 == 0)
    {
        goto LB; // [228] 246
    }
    else{
    }
    // SubProg setup_build pc: 231 op: STARTLINE (58)

    /** buildsys.e:410				l_ext = "lib"*/
    // SubProg setup_build pc: 233 op: ASSIGN (18)
    RefDS(_23598);
    DeRefi(_l_ext_45017);
    _l_ext_45017 = _23598;
    // SubProg setup_build pc: 236 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 238 op: STARTLINE (58)

    /** buildsys.e:411				t_slash = "\\"*/
    // SubProg setup_build pc: 240 op: ASSIGN (18)
    RefDS(_23599);
    DeRefi(_t_slash_45018);
    _t_slash_45018 = _23599;
    // SubProg setup_build pc: 243 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 245 op: NOP1 (159)
LB: // addr: 246 pc: 245 sub: 45006 op: 159
    // SubProg setup_build pc: 246 op: NOP1 (159)
L8: // addr: 247 pc: 246 sub: 45006 op: 159
    // SubProg setup_build pc: 247 op: STARTLINE (58)

    /** buildsys.e:414			object eudir = get_eucompiledir()*/
    // SubProg setup_build pc: 249 op: PROC (27)
    _0 = _eudir_45060;
    _eudir_45060 = _58get_eucompiledir();
    DeRef(_0);
    // SubProg setup_build pc: 252 op: STARTLINE (58)

    /** buildsys.e:415			if not file_exists(eudir) then*/
    // SubProg setup_build pc: 254 op: PROC (27)
    Ref(_eudir_45060);
    _23601 = _20file_exists(_eudir_45060);
    // SubProg setup_build pc: 258 op: NOT_IFW (108)
    if (IS_ATOM_INT(_23601)) {
        if (_23601 != 0){
            DeRef(_23601);
            _23601 = NOVALUE;
            goto LC; // [258] 279
        }
    }
    else {
        if (DBL_PTR(_23601)->dbl != 0.0){
            DeRef(_23601);
            _23601 = NOVALUE;
            goto LC; // [258] 279
        }
    }
    DeRef(_23601);
    _23601 = NOVALUE;
    // SubProg setup_build pc: 261 op: STARTLINE (58)

    /** buildsys.e:416				printf(2,"Supplied directory \'%s\' is not a valid EUDIR\n",{get_eucompiledir()})*/
    // SubProg setup_build pc: 263 op: PROC (27)
    _23604 = _58get_eucompiledir();
    // SubProg setup_build pc: 266 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23604;
    _23605 = MAKE_SEQ(_1);
    _23604 = NOVALUE;
    // SubProg setup_build pc: 270 op: PRINTF (38)
    EPrintf(2, _23603, _23605);
    DeRefDS(_23605);
    _23605 = NOVALUE;
    // SubProg setup_build pc: 274 op: STARTLINE (58)

    /** buildsys.e:417				abort(1)*/
    // SubProg setup_build pc: 276 op: ABORT (126)
    UserCleanup(1);
    // SubProg setup_build pc: 278 op: NOP1 (159)
LC: // addr: 279 pc: 278 sub: 45006 op: 159
    // SubProg setup_build pc: 279 op: STARTLINE (58)

    /** buildsys.e:419			for tk = 1 to length(l_names) label "translation kind" do*/
    // SubProg setup_build pc: 281 op: PRIVATE_INIT_CHECK (30)
    // SubProg setup_build pc: 283 op: LENGTH (42)
    if (IS_SEQUENCE(_l_names_45016)){
            _23606 = SEQ_PTR(_l_names_45016)->length;
    }
    else {
        _23606 = 1;
    }
    // SubProg setup_build pc: 286 op: FOR_I (125)
    {
        object _tk_45072;
        _tk_45072 = 1;
LD: // addr: 293 pc: 286 sub: 45006 op: 125
        if (_tk_45072 > _23606){
            goto LE; // [286] 455
        }
        // SubProg setup_build pc: 293 op: STARTLINE (58)

        /** buildsys.e:420				user_library = eudir & sprintf("%sbin%s%s.%s",{t_slash, t_slash, l_names[tk],l_ext})*/
        // SubProg setup_build pc: 295 op: PRIVATE_INIT_CHECK (30)
        // SubProg setup_build pc: 297 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_l_names_45016);
        _23609 = (object)*(((s1_ptr)_2)->base + _tk_45072);
        // SubProg setup_build pc: 301 op: PRIVATE_INIT_CHECK (30)
        // SubProg setup_build pc: 303 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        RefDSn(_t_slash_45018, 2);
        ((intptr_t*)_2)[1] = _t_slash_45018;
        ((intptr_t*)_2)[2] = _t_slash_45018;
        Ref(_23609);
        ((intptr_t*)_2)[3] = _23609;
        RefDS(_l_ext_45017);
        ((intptr_t*)_2)[4] = _l_ext_45017;
        _23610 = MAKE_SEQ(_1);
        _23609 = NOVALUE;
        // SubProg setup_build pc: 310 op: SPRINTF (53)
        _23611 = EPrintf(-9999999, _23608, _23610);
        DeRefDS(_23610);
        _23610 = NOVALUE;
        // SubProg setup_build pc: 314 op: CONCAT (15)
        if (IS_SEQUENCE(_eudir_45060) && IS_ATOM(_23611)) {
        }
        else if (IS_ATOM(_eudir_45060) && IS_SEQUENCE(_23611)) {
            Ref(_eudir_45060);
            Prepend(&_58user_library_42098, _23611, _eudir_45060);
        }
        else {
            Concat((object_ptr)&_58user_library_42098, _eudir_45060, _23611);
        }
        DeRefDS(_23611);
        _23611 = NOVALUE;
        // SubProg setup_build pc: 318 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 320 op: STARTLINE (58)

        /** buildsys.e:421				if TUNIX or compiler_type = COMPILER_GCC then*/
        // SubProg setup_build pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 324 op: SC1_OR_IF (147)
        if (_41TUNIX_21214 != 0) {
            goto LF; // [324] 339
        }
        // SubProg setup_build pc: 328 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 330 op: EQUALS (3)
        _23614 = (_56compiler_type_44893 == 1);
        // SubProg setup_build pc: 334 op: NOP1 (159)
        // SubProg setup_build pc: 335 op: IF (20)
        if (_23614 == 0)
        {
            DeRef(_23614);
            _23614 = NOVALUE;
            goto L10; // [335] 430
        }
        else{
            DeRef(_23614);
            _23614 = NOVALUE;
        }
        // SubProg setup_build pc: 338 op: NOP1 (159)
LF: // addr: 339 pc: 338 sub: 45006 op: 159
        // SubProg setup_build pc: 339 op: STARTLINE (58)

        /** buildsys.e:422					ifdef UNIX then*/
        // SubProg setup_build pc: 341 op: STARTLINE (58)

        /** buildsys.e:423						sequence locations = { "/usr/local/lib/%s.a", "/usr/lib/%s.a"}*/
        // SubProg setup_build pc: 343 op: RIGHT_BRACE_2 (85)
        RefDS(_23616);
        RefDS(_23615);
        DeRef(_locations_45085);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23615;
        ((intptr_t *)_2)[2] = _23616;
        _locations_45085 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 347 op: STARTLINE (58)

        /** buildsys.e:424						if match( "/share/euphoria", eudir ) then*/
        // SubProg setup_build pc: 349 op: MATCH_FROM (177)
        _23619 = e_match_from(_23618, _eudir_45060, 1);
        // SubProg setup_build pc: 354 op: IF (20)
        if (_23619 == 0)
        {
            _23619 = NOVALUE;
            goto L11; // [354] 429
        }
        else{
            _23619 = NOVALUE;
        }
        // SubProg setup_build pc: 357 op: STARTLINE (58)

        /** buildsys.e:426							for i = 1 to length(locations) do*/
        // SubProg setup_build pc: 359 op: LENGTH (42)
        // Known sequence length:
        _23620 = 2;
        // SubProg setup_build pc: 362 op: FOR_I (125)
        {
            object _i_45093;
            _i_45093 = 1;
L12: // addr: 369 pc: 362 sub: 45006 op: 125
            if (_i_45093 > 2){
                goto L13; // [362] 428
            }
            // SubProg setup_build pc: 369 op: STARTLINE (58)

            /** buildsys.e:427								if file_exists( sprintf(locations[i],{l_names[tk]}) ) then*/
            // SubProg setup_build pc: 371 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_locations_45085);
            _23621 = (object)*(((s1_ptr)_2)->base + _i_45093);
            // SubProg setup_build pc: 375 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_l_names_45016);
            _23622 = (object)*(((s1_ptr)_2)->base + _tk_45072);
            // SubProg setup_build pc: 379 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23622);
            ((intptr_t*)_2)[1] = _23622;
            _23623 = MAKE_SEQ(_1);
            _23622 = NOVALUE;
            // SubProg setup_build pc: 383 op: SPRINTF (53)
            _23624 = EPrintf(-9999999, _23621, _23623);
            _23621 = NOVALUE;
            DeRefDS(_23623);
            _23623 = NOVALUE;
            // SubProg setup_build pc: 387 op: PROC (27)
            _23625 = _20file_exists(_23624);
            _23624 = NOVALUE;
            // SubProg setup_build pc: 391 op: IF (20)
            if (_23625 == 0) {
                DeRef(_23625);
                _23625 = NOVALUE;
                goto L14; // [391] 421
            }
            else {
                if (!IS_ATOM_INT(_23625) && DBL_PTR(_23625)->dbl == 0.0){
                    DeRef(_23625);
                    _23625 = NOVALUE;
                    goto L14; // [391] 421
                }
                DeRef(_23625);
                _23625 = NOVALUE;
            }
            DeRef(_23625);
            _23625 = NOVALUE;
            // SubProg setup_build pc: 394 op: STARTLINE (58)

            /** buildsys.e:428									user_library = sprintf(locations[i],{l_names[tk]})*/
            // SubProg setup_build pc: 396 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_locations_45085);
            _23626 = (object)*(((s1_ptr)_2)->base + _i_45093);
            // SubProg setup_build pc: 400 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_l_names_45016);
            _23627 = (object)*(((s1_ptr)_2)->base + _tk_45072);
            // SubProg setup_build pc: 404 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23627);
            ((intptr_t*)_2)[1] = _23627;
            _23628 = MAKE_SEQ(_1);
            _23627 = NOVALUE;
            // SubProg setup_build pc: 408 op: SPRINTF (53)
            DeRef(_58user_library_42098);
            _58user_library_42098 = EPrintf(-9999999, _23626, _23628);
            _23626 = NOVALUE;
            DeRefDS(_23628);
            _23628 = NOVALUE;
            // SubProg setup_build pc: 412 op: SEQUENCE_CHECK (97)
            // SubProg setup_build pc: 414 op: STARTLINE (58)

            /** buildsys.e:429									exit "translation kind"*/
            // SubProg setup_build pc: 416 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var locations_45085
            DeRefDS(_locations_45085);
            _locations_45085 = NOVALUE;
            // SubProg setup_build pc: 418 op: EXIT (61)
            goto LE; // [418] 455
            // SubProg setup_build pc: 420 op: NOP1 (159)
L14: // addr: 421 pc: 420 sub: 45006 op: 159
            // SubProg setup_build pc: 421 op: STARTLINE (58)

            /** buildsys.e:431							end for*/
            // SubProg setup_build pc: 423 op: ENDFOR_INT_UP1 (54)
            _i_45093 = _i_45093 + 1;
            goto L12; // [423] 369
L13: // addr: 428 pc: 423 sub: 45006 op: 54
            ;
        }
        // SubProg setup_build pc: 428 op: NOP1 (159)
L11: // addr: 429 pc: 428 sub: 45006 op: 159
        // SubProg setup_build pc: 429 op: NOP1 (159)
L10: // addr: 430 pc: 429 sub: 45006 op: 159
        // SubProg setup_build pc: 430 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var locations_45085
        DeRef(_locations_45085);
        _locations_45085 = NOVALUE;
        // SubProg setup_build pc: 432 op: STARTLINE (58)

        /** buildsys.e:436				if file_exists(user_library) then*/
        // SubProg setup_build pc: 434 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 436 op: PROC (27)
        RefDS(_58user_library_42098);
        _23630 = _20file_exists(_58user_library_42098);
        // SubProg setup_build pc: 440 op: IF (20)
        if (_23630 == 0) {
            DeRef(_23630);
            _23630 = NOVALUE;
            goto L15; // [440] 448
        }
        else {
            if (!IS_ATOM_INT(_23630) && DBL_PTR(_23630)->dbl == 0.0){
                DeRef(_23630);
                _23630 = NOVALUE;
                goto L15; // [440] 448
            }
            DeRef(_23630);
            _23630 = NOVALUE;
        }
        DeRef(_23630);
        _23630 = NOVALUE;
        // SubProg setup_build pc: 443 op: STARTLINE (58)

        /** buildsys.e:437					exit "translation kind"*/
        // SubProg setup_build pc: 445 op: EXIT (61)
        goto LE; // [445] 455
        // SubProg setup_build pc: 447 op: NOP1 (159)
L15: // addr: 448 pc: 447 sub: 45006 op: 159
        // SubProg setup_build pc: 448 op: STARTLINE (58)

        /** buildsys.e:439			end for -- tk*/
        // SubProg setup_build pc: 450 op: ENDFOR_INT_UP1 (54)
        _tk_45072 = _tk_45072 + 1;
        goto LD; // [450] 293
LE: // addr: 455 pc: 450 sub: 45006 op: 54
        ;
    }
    // SubProg setup_build pc: 455 op: NOP1 (159)
L3: // addr: 456 pc: 455 sub: 45006 op: 159
    // SubProg setup_build pc: 456 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var eudir_45060
    DeRef(_eudir_45060);
    _eudir_45060 = NOVALUE;
    // SubProg setup_build pc: 458 op: STARTLINE (58)

    /** buildsys.e:441		user_library = adjust_for_build_file(user_library)*/
    // SubProg setup_build pc: 460 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 462 op: PROC (27)
    RefDS(_58user_library_42098);
    _0 = _56adjust_for_build_file(_58user_library_42098);
    DeRefDS(_58user_library_42098);
    _58user_library_42098 = _0;
    // SubProg setup_build pc: 466 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 468 op: STARTLINE (58)

    /** buildsys.e:443		if TWINDOWS then*/
    // SubProg setup_build pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 472 op: IF (20)
    if (_41TWINDOWS_21210 == 0)
    {
        goto L16; // [472] 527
    }
    else{
    }
    // SubProg setup_build pc: 475 op: STARTLINE (58)

    /** buildsys.e:444			if compiler_type = COMPILER_WATCOM then*/
    // SubProg setup_build pc: 477 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 479 op: EQUALS_IFW_I (121)
    if (_56compiler_type_44893 != 2)
    goto L17; // [479] 492
    // SubProg setup_build pc: 483 op: STARTLINE (58)

    /** buildsys.e:445				c_flags &= " /dEWINDOWS"*/
    // SubProg setup_build pc: 485 op: CONCAT (15)
    Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23633);
    // SubProg setup_build pc: 489 op: ELSE (23)
    goto L18; // [489] 499
    // SubProg setup_build pc: 491 op: NOP1 (159)
L17: // addr: 492 pc: 491 sub: 45006 op: 159
    // SubProg setup_build pc: 492 op: STARTLINE (58)

    /** buildsys.e:447				c_flags &= " -DEWINDOWS"*/
    // SubProg setup_build pc: 494 op: CONCAT (15)
    Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23635);
    // SubProg setup_build pc: 498 op: NOP1 (159)
L18: // addr: 499 pc: 498 sub: 45006 op: 159
    // SubProg setup_build pc: 499 op: STARTLINE (58)

    /** buildsys.e:450			if dll_option then*/
    // SubProg setup_build pc: 501 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 503 op: IF (20)
    if (_58dll_option_42086 == 0)
    {
        goto L19; // [503] 516
    }
    else{
    }
    // SubProg setup_build pc: 506 op: STARTLINE (58)

    /** buildsys.e:451				exe_ext = ".dll"*/
    // SubProg setup_build pc: 508 op: ASSIGN (18)
    RefDS(_23637);
    DeRefi(_exe_ext_45013);
    _exe_ext_45013 = _23637;
    // SubProg setup_build pc: 511 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 513 op: ELSE (23)
    goto L1A; // [513] 568
    // SubProg setup_build pc: 515 op: NOP1 (159)
L19: // addr: 516 pc: 515 sub: 45006 op: 159
    // SubProg setup_build pc: 516 op: STARTLINE (58)

    /** buildsys.e:453				exe_ext = ".exe"*/
    // SubProg setup_build pc: 518 op: ASSIGN (18)
    RefDS(_23638);
    DeRefi(_exe_ext_45013);
    _exe_ext_45013 = _23638;
    // SubProg setup_build pc: 521 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 523 op: NOP1 (159)
    // SubProg setup_build pc: 524 op: ELSE (23)
    goto L1A; // [524] 568
    // SubProg setup_build pc: 526 op: NOP1 (159)
L16: // addr: 527 pc: 526 sub: 45006 op: 159
    // SubProg setup_build pc: 527 op: STARTLINE (58)

    /** buildsys.e:455		elsif TOSX then*/
    // SubProg setup_build pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 531 op: IF (20)
    if (_41TOSX_21218 == 0)
    {
        goto L1B; // [531] 552
    }
    else{
    }
    // SubProg setup_build pc: 534 op: STARTLINE (58)

    /** buildsys.e:456			if dll_option then*/
    // SubProg setup_build pc: 536 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 538 op: IF (20)
    if (_58dll_option_42086 == 0)
    {
        goto L1A; // [538] 568
    }
    else{
    }
    // SubProg setup_build pc: 541 op: STARTLINE (58)

    /** buildsys.e:457				exe_ext = ".dylib"*/
    // SubProg setup_build pc: 543 op: ASSIGN (18)
    RefDS(_23639);
    DeRefi(_exe_ext_45013);
    _exe_ext_45013 = _23639;
    // SubProg setup_build pc: 546 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 548 op: NOP1 (159)
    // SubProg setup_build pc: 549 op: ELSE (23)
    goto L1A; // [549] 568
    // SubProg setup_build pc: 551 op: NOP1 (159)
L1B: // addr: 552 pc: 551 sub: 45006 op: 159
    // SubProg setup_build pc: 552 op: STARTLINE (58)

    /** buildsys.e:460			if dll_option then*/
    // SubProg setup_build pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 556 op: IF (20)
    if (_58dll_option_42086 == 0)
    {
        goto L1C; // [556] 567
    }
    else{
    }
    // SubProg setup_build pc: 559 op: STARTLINE (58)

    /** buildsys.e:461				exe_ext = ".so"*/
    // SubProg setup_build pc: 561 op: ASSIGN (18)
    RefDS(_23640);
    DeRefi(_exe_ext_45013);
    _exe_ext_45013 = _23640;
    // SubProg setup_build pc: 564 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 566 op: NOP1 (159)
L1C: // addr: 567 pc: 566 sub: 45006 op: 159
    // SubProg setup_build pc: 567 op: NOP1 (159)
L1A: // addr: 568 pc: 567 sub: 45006 op: 159
    // SubProg setup_build pc: 568 op: STARTLINE (58)

    /** buildsys.e:465		object compile_dir = get_eucompiledir()*/
    // SubProg setup_build pc: 570 op: PROC (27)
    _0 = _compile_dir_45137;
    _compile_dir_45137 = _58get_eucompiledir();
    DeRef(_0);
    // SubProg setup_build pc: 573 op: STARTLINE (58)

    /** buildsys.e:466		if not file_exists(compile_dir) then*/
    // SubProg setup_build pc: 575 op: PROC (27)
    Ref(_compile_dir_45137);
    _23642 = _20file_exists(_compile_dir_45137);
    // SubProg setup_build pc: 579 op: NOT_IFW (108)
    if (IS_ATOM_INT(_23642)) {
        if (_23642 != 0){
            DeRef(_23642);
            _23642 = NOVALUE;
            goto L1D; // [579] 600
        }
    }
    else {
        if (DBL_PTR(_23642)->dbl != 0.0){
            DeRef(_23642);
            _23642 = NOVALUE;
            goto L1D; // [579] 600
        }
    }
    DeRef(_23642);
    _23642 = NOVALUE;
    // SubProg setup_build pc: 582 op: STARTLINE (58)

    /** buildsys.e:467			printf(2,"Couldn't get include directory '%s'",{get_eucompiledir()})*/
    // SubProg setup_build pc: 584 op: PROC (27)
    _23645 = _58get_eucompiledir();
    // SubProg setup_build pc: 587 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23645;
    _23646 = MAKE_SEQ(_1);
    _23645 = NOVALUE;
    // SubProg setup_build pc: 591 op: PRINTF (38)
    EPrintf(2, _23644, _23646);
    DeRefDS(_23646);
    _23646 = NOVALUE;
    // SubProg setup_build pc: 595 op: STARTLINE (58)

    /** buildsys.e:468			abort(1)*/
    // SubProg setup_build pc: 597 op: ABORT (126)
    UserCleanup(1);
    // SubProg setup_build pc: 599 op: NOP1 (159)
L1D: // addr: 600 pc: 599 sub: 45006 op: 159
    // SubProg setup_build pc: 600 op: STARTLINE (58)

    /** buildsys.e:471		integer bits = 32*/
    // SubProg setup_build pc: 602 op: ASSIGN_I (113)
    _bits_45148 = 32;
    // SubProg setup_build pc: 605 op: STARTLINE (58)

    /** buildsys.e:472		if TX86_64 then*/
    // SubProg setup_build pc: 607 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 609 op: IF (20)
    if (_41TX86_64_21226 == 0)
    {
        goto L1E; // [609] 618
    }
    else{
    }
    // SubProg setup_build pc: 612 op: STARTLINE (58)

    /** buildsys.e:473			bits = 64*/
    // SubProg setup_build pc: 614 op: ASSIGN_I (113)
    _bits_45148 = 64;
    // SubProg setup_build pc: 617 op: NOP1 (159)
L1E: // addr: 618 pc: 617 sub: 45006 op: 159
    // SubProg setup_build pc: 618 op: STARTLINE (58)

    /** buildsys.e:476		switch compiler_type do*/
    // SubProg setup_build pc: 620 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 622 op: SWITCH_I (193)
    _0 = _56compiler_type_44893;
    switch ( _0 ){ 
        // SubProg setup_build pc: 627 op: STARTLINE (58)

        /** buildsys.e:477			case COMPILER_GCC then*/
        // SubProg setup_build pc: 629 op: CASE (186)
        case 1:
        // SubProg setup_build pc: 631 op: STARTLINE (58)

        /** buildsys.e:478				c_exe = compiler_prefix & "gcc"*/
        // SubProg setup_build pc: 633 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 635 op: CONCAT (15)
        Concat((object_ptr)&_c_exe_45008, _56compiler_prefix_44894, _23649);
        // SubProg setup_build pc: 639 op: STARTLINE (58)

        /** buildsys.e:479				l_exe = compiler_prefix & "gcc"*/
        // SubProg setup_build pc: 641 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 643 op: CONCAT (15)
        Concat((object_ptr)&_l_exe_45010, _56compiler_prefix_44894, _23649);
        // SubProg setup_build pc: 647 op: STARTLINE (58)

        /** buildsys.e:480				obj_ext = "o"*/
        // SubProg setup_build pc: 649 op: ASSIGN (18)
        RefDS(_23652);
        DeRefi(_obj_ext_45012);
        _obj_ext_45012 = _23652;
        // SubProg setup_build pc: 652 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 654 op: STARTLINE (58)

        /** buildsys.e:482				sequence m_flag = ""*/
        // SubProg setup_build pc: 656 op: ASSIGN (18)
        RefDS(_21933);
        DeRefi(_m_flag_45158);
        _m_flag_45158 = _21933;
        // SubProg setup_build pc: 659 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 661 op: STARTLINE (58)

        /** buildsys.e:483				if not TARM then*/
        // SubProg setup_build pc: 663 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 665 op: NOT_IFW (108)
        if (_41TARM_21228 != 0)
        goto L1F; // [665] 675
        // SubProg setup_build pc: 668 op: STARTLINE (58)

        /** buildsys.e:485					m_flag = sprintf( "-m%d", bits )*/
        // SubProg setup_build pc: 670 op: SPRINTF (53)
        DeRefDSi(_m_flag_45158);
        _m_flag_45158 = EPrintf(-9999999, _23654, _bits_45148);
        // SubProg setup_build pc: 674 op: NOP1 (159)
L1F: // addr: 675 pc: 674 sub: 45006 op: 159
        // SubProg setup_build pc: 675 op: STARTLINE (58)

        /** buildsys.e:488				if debug_option then*/
        // SubProg setup_build pc: 677 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 679 op: IF (20)
        if (_58debug_option_42096 == 0)
        {
            goto L20; // [679] 691
        }
        else{
        }
        // SubProg setup_build pc: 682 op: STARTLINE (58)

        /** buildsys.e:489					c_flags &= " -g3"*/
        // SubProg setup_build pc: 684 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23656);
        // SubProg setup_build pc: 688 op: ELSE (23)
        goto L21; // [688] 698
        // SubProg setup_build pc: 690 op: NOP1 (159)
L20: // addr: 691 pc: 690 sub: 45006 op: 159
        // SubProg setup_build pc: 691 op: STARTLINE (58)

        /** buildsys.e:491					c_flags &= " -fomit-frame-pointer"*/
        // SubProg setup_build pc: 693 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23658);
        // SubProg setup_build pc: 697 op: NOP1 (159)
L21: // addr: 698 pc: 697 sub: 45006 op: 159
        // SubProg setup_build pc: 698 op: STARTLINE (58)

        /** buildsys.e:494				if dll_option and not TWINDOWS then*/
        // SubProg setup_build pc: 700 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 702 op: SC1_AND_IF (146)
        if (_58dll_option_42086 == 0) {
            goto L22; // [702] 722
        }
        // SubProg setup_build pc: 706 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 708 op: NOT (7)
        _23661 = (_41TWINDOWS_21210 == 0);
        // SubProg setup_build pc: 711 op: NOP1 (159)
        // SubProg setup_build pc: 712 op: IF (20)
        if (_23661 == 0)
        {
            DeRef(_23661);
            _23661 = NOVALUE;
            goto L22; // [712] 722
        }
        else{
            DeRef(_23661);
            _23661 = NOVALUE;
        }
        // SubProg setup_build pc: 715 op: STARTLINE (58)

        /** buildsys.e:495					c_flags &= " -fPIC"*/
        // SubProg setup_build pc: 717 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23662);
        // SubProg setup_build pc: 721 op: NOP1 (159)
L22: // addr: 722 pc: 721 sub: 45006 op: 159
        // SubProg setup_build pc: 722 op: STARTLINE (58)

        /** buildsys.e:498				c_flags &= sprintf(" -c -w -fsigned-char -O2 %s -I%s -ffast-math",*/
        // SubProg setup_build pc: 724 op: PROC (27)
        _23665 = _58get_eucompiledir();
        // SubProg setup_build pc: 727 op: PROC (27)
        _23666 = _56adjust_for_build_file(_23665);
        _23665 = NOVALUE;
        // SubProg setup_build pc: 731 op: RIGHT_BRACE_2 (85)
        RefDS(_m_flag_45158);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _m_flag_45158;
        ((intptr_t *)_2)[2] = _23666;
        _23667 = MAKE_SEQ(_1);
        _23666 = NOVALUE;
        // SubProg setup_build pc: 735 op: SPRINTF (53)
        _23668 = EPrintf(-9999999, _23664, _23667);
        DeRefDS(_23667);
        _23667 = NOVALUE;
        // SubProg setup_build pc: 739 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23668);
        DeRefDS(_23668);
        _23668 = NOVALUE;
        // SubProg setup_build pc: 743 op: STARTLINE (58)

        /** buildsys.e:501				if TWINDOWS and mno_cygwin then*/
        // SubProg setup_build pc: 745 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 747 op: SC1_AND_IF (146)
        if (_41TWINDOWS_21210 == 0) {
            goto L23; // [747] 764
        }
        // SubProg setup_build pc: 751 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 753 op: NOP1 (159)
        // SubProg setup_build pc: 754 op: IF (20)
        if (_56mno_cygwin_44917 == 0)
        {
            goto L23; // [754] 764
        }
        else{
        }
        // SubProg setup_build pc: 757 op: STARTLINE (58)

        /** buildsys.e:504					c_flags &= " -mno-cygwin"*/
        // SubProg setup_build pc: 759 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23671);
        // SubProg setup_build pc: 763 op: NOP1 (159)
L23: // addr: 764 pc: 763 sub: 45006 op: 159
        // SubProg setup_build pc: 764 op: STARTLINE (58)

        /** buildsys.e:507				if build_system_type != BUILD_DIRECT then*/
        // SubProg setup_build pc: 766 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 768 op: NOTEQ_IFW_I (122)
        if (_56build_system_type_44889 == 3)
        goto L24; // [768] 785
        // SubProg setup_build pc: 772 op: STARTLINE (58)

        /** buildsys.e:508					l_flags = sprintf( " $(RUNTIME_LIBRARY) %s", { m_flag })*/
        // SubProg setup_build pc: 774 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_m_flag_45158);
        ((intptr_t*)_2)[1] = _m_flag_45158;
        _23675 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 778 op: SPRINTF (53)
        DeRef(_l_flags_45011);
        _l_flags_45011 = EPrintf(-9999999, _23674, _23675);
        DeRefDS(_23675);
        _23675 = NOVALUE;
        // SubProg setup_build pc: 782 op: ELSE (23)
        goto L25; // [782] 802
        // SubProg setup_build pc: 784 op: NOP1 (159)
L24: // addr: 785 pc: 784 sub: 45006 op: 159
        // SubProg setup_build pc: 785 op: STARTLINE (58)

        /** buildsys.e:510					l_flags = sprintf( " %s %s",*/
        // SubProg setup_build pc: 787 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 789 op: PROC (27)
        RefDS(_58user_library_42098);
        _23678 = _56adjust_for_command_line_passing(_58user_library_42098);
        // SubProg setup_build pc: 793 op: RIGHT_BRACE_2 (85)
        RefDS(_m_flag_45158);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23678;
        ((intptr_t *)_2)[2] = _m_flag_45158;
        _23679 = MAKE_SEQ(_1);
        _23678 = NOVALUE;
        // SubProg setup_build pc: 797 op: SPRINTF (53)
        DeRef(_l_flags_45011);
        _l_flags_45011 = EPrintf(-9999999, _23677, _23679);
        DeRefDS(_23679);
        _23679 = NOVALUE;
        // SubProg setup_build pc: 801 op: NOP1 (159)
L25: // addr: 802 pc: 801 sub: 45006 op: 159
        // SubProg setup_build pc: 802 op: STARTLINE (58)

        /** buildsys.e:514				if dll_option then*/
        // SubProg setup_build pc: 804 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 806 op: IF (20)
        if (_58dll_option_42086 == 0)
        {
            goto L26; // [806] 816
        }
        else{
        }
        // SubProg setup_build pc: 809 op: STARTLINE (58)

        /** buildsys.e:515					l_flags &= " -shared "*/
        // SubProg setup_build pc: 811 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23681);
        // SubProg setup_build pc: 815 op: NOP1 (159)
L26: // addr: 816 pc: 815 sub: 45006 op: 159
        // SubProg setup_build pc: 816 op: STARTLINE (58)

        /** buildsys.e:518				if TLINUX then*/
        // SubProg setup_build pc: 818 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 820 op: IF (20)
        if (_41TLINUX_21212 == 0)
        {
            goto L27; // [820] 832
        }
        else{
        }
        // SubProg setup_build pc: 823 op: STARTLINE (58)

        /** buildsys.e:519					l_flags &= " -ldl -lm -lpthread"*/
        // SubProg setup_build pc: 825 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23683);
        // SubProg setup_build pc: 829 op: ELSE (23)
        goto L28; // [829] 901
        // SubProg setup_build pc: 831 op: NOP1 (159)
L27: // addr: 832 pc: 831 sub: 45006 op: 159
        // SubProg setup_build pc: 832 op: STARTLINE (58)

        /** buildsys.e:520				elsif TBSD then*/
        // SubProg setup_build pc: 834 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 836 op: IF (20)
        if (_41TBSD_21216 == 0)
        {
            goto L29; // [836] 848
        }
        else{
        }
        // SubProg setup_build pc: 839 op: STARTLINE (58)

        /** buildsys.e:521					l_flags &= " -lm -lpthread"*/
        // SubProg setup_build pc: 841 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23685);
        // SubProg setup_build pc: 845 op: ELSE (23)
        goto L28; // [845] 901
        // SubProg setup_build pc: 847 op: NOP1 (159)
L29: // addr: 848 pc: 847 sub: 45006 op: 159
        // SubProg setup_build pc: 848 op: STARTLINE (58)

        /** buildsys.e:522				elsif TOSX then*/
        // SubProg setup_build pc: 850 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 852 op: IF (20)
        if (_41TOSX_21218 == 0)
        {
            goto L2A; // [852] 864
        }
        else{
        }
        // SubProg setup_build pc: 855 op: STARTLINE (58)

        /** buildsys.e:523					l_flags &= " -lresolv"*/
        // SubProg setup_build pc: 857 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23687);
        // SubProg setup_build pc: 861 op: ELSE (23)
        goto L28; // [861] 901
        // SubProg setup_build pc: 863 op: NOP1 (159)
L2A: // addr: 864 pc: 863 sub: 45006 op: 159
        // SubProg setup_build pc: 864 op: STARTLINE (58)

        /** buildsys.e:524				elsif TWINDOWS then*/
        // SubProg setup_build pc: 866 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 868 op: IF (20)
        if (_41TWINDOWS_21210 == 0)
        {
            goto L2B; // [868] 900
        }
        else{
        }
        // SubProg setup_build pc: 871 op: STARTLINE (58)

        /** buildsys.e:525					if mno_cygwin then*/
        // SubProg setup_build pc: 873 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 875 op: IF (20)
        if (_56mno_cygwin_44917 == 0)
        {
            goto L2C; // [875] 885
        }
        else{
        }
        // SubProg setup_build pc: 878 op: STARTLINE (58)

        /** buildsys.e:527						l_flags &= " -mno-cygwin"*/
        // SubProg setup_build pc: 880 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23671);
        // SubProg setup_build pc: 884 op: NOP1 (159)
L2C: // addr: 885 pc: 884 sub: 45006 op: 159
        // SubProg setup_build pc: 885 op: STARTLINE (58)

        /** buildsys.e:529					if not con_option then*/
        // SubProg setup_build pc: 887 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 889 op: NOT_IFW (108)
        if (_58con_option_42088 != 0)
        goto L2D; // [889] 899
        // SubProg setup_build pc: 892 op: STARTLINE (58)

        /** buildsys.e:532						l_flags &= " -mwindows"*/
        // SubProg setup_build pc: 894 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23691);
        // SubProg setup_build pc: 898 op: NOP1 (159)
L2D: // addr: 899 pc: 898 sub: 45006 op: 159
        // SubProg setup_build pc: 899 op: NOP1 (159)
L2B: // addr: 900 pc: 899 sub: 45006 op: 159
        // SubProg setup_build pc: 900 op: NOP1 (159)
L28: // addr: 901 pc: 900 sub: 45006 op: 159
        // SubProg setup_build pc: 901 op: STARTLINE (58)

        /** buildsys.e:537				rc_comp = compiler_prefix & "windres -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" [1] -O coff -o [2]"*/
        // SubProg setup_build pc: 903 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 905 op: PROC (27)
        _23694 = _20current_dir();
        // SubProg setup_build pc: 908 op: PROC (27)
        _23695 = _56adjust_for_build_file(_23694);
        _23694 = NOVALUE;
        // SubProg setup_build pc: 912 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _23696;
            concat_list[1] = _23695;
            concat_list[2] = _23693;
            concat_list[3] = _56compiler_prefix_44894;
            Concat_N((object_ptr)&_rc_comp_45015, concat_list, 4);
        }
        DeRef(_23695);
        _23695 = NOVALUE;
        // SubProg setup_build pc: 919 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var m_flag_45158
        DeRefi(_m_flag_45158);
        _m_flag_45158 = NOVALUE;
        // SubProg setup_build pc: 921 op: ELSE (23)
        goto L2E; // [921] 1125
        // SubProg setup_build pc: 923 op: STARTLINE (58)

        /** buildsys.e:539			case COMPILER_WATCOM then*/
        // SubProg setup_build pc: 925 op: CASE (186)
        case 2:
        // SubProg setup_build pc: 927 op: STARTLINE (58)

        /** buildsys.e:540				c_exe = compiler_prefix & "wcc386"*/
        // SubProg setup_build pc: 929 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 931 op: CONCAT (15)
        Concat((object_ptr)&_c_exe_45008, _56compiler_prefix_44894, _23698);
        // SubProg setup_build pc: 935 op: STARTLINE (58)

        /** buildsys.e:541				l_exe = compiler_prefix & "wlink"*/
        // SubProg setup_build pc: 937 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 939 op: CONCAT (15)
        Concat((object_ptr)&_l_exe_45010, _56compiler_prefix_44894, _23700);
        // SubProg setup_build pc: 943 op: STARTLINE (58)

        /** buildsys.e:542				obj_ext = "obj"*/
        // SubProg setup_build pc: 945 op: ASSIGN (18)
        RefDS(_23702);
        DeRefi(_obj_ext_45012);
        _obj_ext_45012 = _23702;
        // SubProg setup_build pc: 948 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 950 op: STARTLINE (58)

        /** buildsys.e:544				if debug_option then*/
        // SubProg setup_build pc: 952 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 954 op: IF (20)
        if (_58debug_option_42096 == 0)
        {
            goto L2F; // [954] 971
        }
        else{
        }
        // SubProg setup_build pc: 957 op: STARTLINE (58)

        /** buildsys.e:545					c_flags = " /d3"*/
        // SubProg setup_build pc: 959 op: ASSIGN (18)
        RefDS(_23703);
        DeRef(_c_flags_45009);
        _c_flags_45009 = _23703;
        // SubProg setup_build pc: 962 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 964 op: STARTLINE (58)

        /** buildsys.e:546					l_flags_begin &= " DEBUG ALL "*/
        // SubProg setup_build pc: 966 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_begin_45014, _l_flags_begin_45014, _23704);
        // SubProg setup_build pc: 970 op: NOP1 (159)
L2F: // addr: 971 pc: 970 sub: 45006 op: 159
        // SubProg setup_build pc: 971 op: STARTLINE (58)

        /** buildsys.e:549				l_flags &= sprintf(" OPTION STACK=%d ", { total_stack_size })*/
        // SubProg setup_build pc: 973 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 975 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _58total_stack_size_42101;
        _23707 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 979 op: SPRINTF (53)
        _23708 = EPrintf(-9999999, _23706, _23707);
        DeRefDS(_23707);
        _23707 = NOVALUE;
        // SubProg setup_build pc: 983 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23708);
        DeRefDS(_23708);
        _23708 = NOVALUE;
        // SubProg setup_build pc: 987 op: STARTLINE (58)

        /** buildsys.e:550				l_flags &= sprintf(" COMMIT STACK=%d ", { total_stack_size })*/
        // SubProg setup_build pc: 989 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 991 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _58total_stack_size_42101;
        _23711 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 995 op: SPRINTF (53)
        _23712 = EPrintf(-9999999, _23710, _23711);
        DeRefDS(_23711);
        _23711 = NOVALUE;
        // SubProg setup_build pc: 999 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23712);
        DeRefDS(_23712);
        _23712 = NOVALUE;
        // SubProg setup_build pc: 1003 op: STARTLINE (58)

        /** buildsys.e:551				l_flags &= " OPTION QUIET OPTION ELIMINATE OPTION CASEEXACT"*/
        // SubProg setup_build pc: 1005 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23714);
        // SubProg setup_build pc: 1009 op: STARTLINE (58)

        /** buildsys.e:553				if dll_option then*/
        // SubProg setup_build pc: 1011 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1013 op: IF (20)
        if (_58dll_option_42086 == 0)
        {
            goto L30; // [1013] 1039
        }
        else{
        }
        // SubProg setup_build pc: 1016 op: STARTLINE (58)

        /** buildsys.e:554					c_flags &= " /bd /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir) */
        // SubProg setup_build pc: 1018 op: PROC (27)
        Ref(_compile_dir_45137);
        _23717 = _56adjust_for_build_file(_compile_dir_45137);
        // SubProg setup_build pc: 1022 op: CONCAT (15)
        if (IS_SEQUENCE(_23716) && IS_ATOM(_23717)) {
            Ref(_23717);
            Append(&_23718, _23716, _23717);
        }
        else if (IS_ATOM(_23716) && IS_SEQUENCE(_23717)) {
        }
        else {
            Concat((object_ptr)&_23718, _23716, _23717);
        }
        DeRef(_23717);
        _23717 = NOVALUE;
        // SubProg setup_build pc: 1026 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23718);
        DeRefDS(_23718);
        _23718 = NOVALUE;
        // SubProg setup_build pc: 1030 op: STARTLINE (58)

        /** buildsys.e:555					l_flags &= " SYSTEM NT_DLL initinstance terminstance"*/
        // SubProg setup_build pc: 1032 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23720);
        // SubProg setup_build pc: 1036 op: ELSE (23)
        goto L31; // [1036] 1077
        // SubProg setup_build pc: 1038 op: NOP1 (159)
L30: // addr: 1039 pc: 1038 sub: 45006 op: 159
        // SubProg setup_build pc: 1039 op: STARTLINE (58)

        /** buildsys.e:557					c_flags &= " /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir)*/
        // SubProg setup_build pc: 1041 op: PROC (27)
        Ref(_compile_dir_45137);
        _23723 = _56adjust_for_build_file(_compile_dir_45137);
        // SubProg setup_build pc: 1045 op: CONCAT (15)
        if (IS_SEQUENCE(_23722) && IS_ATOM(_23723)) {
            Ref(_23723);
            Append(&_23724, _23722, _23723);
        }
        else if (IS_ATOM(_23722) && IS_SEQUENCE(_23723)) {
        }
        else {
            Concat((object_ptr)&_23724, _23722, _23723);
        }
        DeRef(_23723);
        _23723 = NOVALUE;
        // SubProg setup_build pc: 1049 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23724);
        DeRefDS(_23724);
        _23724 = NOVALUE;
        // SubProg setup_build pc: 1053 op: STARTLINE (58)

        /** buildsys.e:558					if con_option then*/
        // SubProg setup_build pc: 1055 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1057 op: IF (20)
        if (_58con_option_42088 == 0)
        {
            goto L32; // [1057] 1069
        }
        else{
        }
        // SubProg setup_build pc: 1060 op: STARTLINE (58)

        /** buildsys.e:560						l_flags = " SYSTEM NT" & l_flags*/
        // SubProg setup_build pc: 1062 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _23726, _l_flags_45011);
        // SubProg setup_build pc: 1066 op: ELSE (23)
        goto L33; // [1066] 1076
        // SubProg setup_build pc: 1068 op: NOP1 (159)
L32: // addr: 1069 pc: 1068 sub: 45006 op: 159
        // SubProg setup_build pc: 1069 op: STARTLINE (58)

        /** buildsys.e:562						l_flags = " SYSTEM NT_WIN RUNTIME WINDOWS=4.0" & l_flags*/
        // SubProg setup_build pc: 1071 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _23728, _l_flags_45011);
        // SubProg setup_build pc: 1075 op: NOP1 (159)
L33: // addr: 1076 pc: 1075 sub: 45006 op: 159
        // SubProg setup_build pc: 1076 op: NOP1 (159)
L31: // addr: 1077 pc: 1076 sub: 45006 op: 159
        // SubProg setup_build pc: 1077 op: STARTLINE (58)

        /** buildsys.e:566				l_flags &= sprintf(" FILE %s", { (user_library) })*/
        // SubProg setup_build pc: 1079 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1081 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_58user_library_42098);
        ((intptr_t*)_2)[1] = _58user_library_42098;
        _23731 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 1085 op: SPRINTF (53)
        _23732 = EPrintf(-9999999, _23730, _23731);
        DeRefDS(_23731);
        _23731 = NOVALUE;
        // SubProg setup_build pc: 1089 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23732);
        DeRefDS(_23732);
        _23732 = NOVALUE;
        // SubProg setup_build pc: 1093 op: STARTLINE (58)

        /** buildsys.e:570				rc_comp = compiler_prefix &"wrc -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" -q -fo=[2] -ad [1] [3]"*/
        // SubProg setup_build pc: 1095 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1097 op: PROC (27)
        _23735 = _20current_dir();
        // SubProg setup_build pc: 1100 op: PROC (27)
        _23736 = _56adjust_for_build_file(_23735);
        _23735 = NOVALUE;
        // SubProg setup_build pc: 1104 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _23737;
            concat_list[1] = _23736;
            concat_list[2] = _23734;
            concat_list[3] = _56compiler_prefix_44894;
            Concat_N((object_ptr)&_rc_comp_45015, concat_list, 4);
        }
        DeRef(_23736);
        _23736 = NOVALUE;
        // SubProg setup_build pc: 1111 op: ELSE (23)
        goto L2E; // [1111] 1125
        // SubProg setup_build pc: 1113 op: STARTLINE (58)

        /** buildsys.e:571			case else*/
        // SubProg setup_build pc: 1115 op: CASE (186)
        default:
        // SubProg setup_build pc: 1117 op: STARTLINE (58)

        /** buildsys.e:572				CompileErr(43)*/
        // SubProg setup_build pc: 1119 op: PROC (27)
        RefDS(_21933);
        _50CompileErr(43, _21933, 0);
        // SubProg setup_build pc: 1124 op: NOPSWITCH (187)
    ;}L2E: // addr: 1125 pc: 1124 sub: 45006 op: 187
    // SubProg setup_build pc: 1125 op: STARTLINE (58)

    /** buildsys.e:575		if length(cflags) then*/
    // SubProg setup_build pc: 1127 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1129 op: LENGTH (42)
    if (IS_SEQUENCE(_56cflags_44911)){
            _23739 = SEQ_PTR(_56cflags_44911)->length;
    }
    else {
        _23739 = 1;
    }
    // SubProg setup_build pc: 1132 op: IF (20)
    if (_23739 == 0)
    {
        _23739 = NOVALUE;
        goto L34; // [1132] 1145
    }
    else{
        _23739 = NOVALUE;
    }
    // SubProg setup_build pc: 1135 op: STARTLINE (58)

    /** buildsys.e:577			c_flags = cflags*/
    // SubProg setup_build pc: 1137 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1139 op: ASSIGN (18)
    RefDS(_56cflags_44911);
    DeRef(_c_flags_45009);
    _c_flags_45009 = _56cflags_44911;
    // SubProg setup_build pc: 1142 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 1144 op: NOP1 (159)
L34: // addr: 1145 pc: 1144 sub: 45006 op: 159
    // SubProg setup_build pc: 1145 op: STARTLINE (58)

    /** buildsys.e:580		if length(extra_cflags) then*/
    // SubProg setup_build pc: 1147 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1149 op: LENGTH (42)
    if (IS_SEQUENCE(_56extra_cflags_44912)){
            _23740 = SEQ_PTR(_56extra_cflags_44912)->length;
    }
    else {
        _23740 = 1;
    }
    // SubProg setup_build pc: 1152 op: IF (20)
    if (_23740 == 0)
    {
        _23740 = NOVALUE;
        goto L35; // [1152] 1168
    }
    else{
        _23740 = NOVALUE;
    }
    // SubProg setup_build pc: 1155 op: STARTLINE (58)

    /** buildsys.e:581			c_flags &= " " & extra_cflags*/
    // SubProg setup_build pc: 1157 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1159 op: CONCAT (15)
    Concat((object_ptr)&_23741, _23325, _56extra_cflags_44912);
    // SubProg setup_build pc: 1163 op: CONCAT (15)
    Concat((object_ptr)&_c_flags_45009, _c_flags_45009, _23741);
    DeRefDS(_23741);
    _23741 = NOVALUE;
    // SubProg setup_build pc: 1167 op: NOP1 (159)
L35: // addr: 1168 pc: 1167 sub: 45006 op: 159
    // SubProg setup_build pc: 1168 op: STARTLINE (58)

    /** buildsys.e:584		if length(lflags) then*/
    // SubProg setup_build pc: 1170 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1172 op: LENGTH (42)
    if (IS_SEQUENCE(_56lflags_44913)){
            _23743 = SEQ_PTR(_56lflags_44913)->length;
    }
    else {
        _23743 = 1;
    }
    // SubProg setup_build pc: 1175 op: IF (20)
    if (_23743 == 0)
    {
        _23743 = NOVALUE;
        goto L36; // [1175] 1195
    }
    else{
        _23743 = NOVALUE;
    }
    // SubProg setup_build pc: 1178 op: STARTLINE (58)

    /** buildsys.e:585			l_flags = lflags*/
    // SubProg setup_build pc: 1180 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1182 op: ASSIGN (18)
    RefDS(_56lflags_44913);
    DeRef(_l_flags_45011);
    _l_flags_45011 = _56lflags_44913;
    // SubProg setup_build pc: 1185 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 1187 op: STARTLINE (58)

    /** buildsys.e:586			l_flags_begin = ""*/
    // SubProg setup_build pc: 1189 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_l_flags_begin_45014);
    _l_flags_begin_45014 = _21933;
    // SubProg setup_build pc: 1192 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 1194 op: NOP1 (159)
L36: // addr: 1195 pc: 1194 sub: 45006 op: 159
    // SubProg setup_build pc: 1195 op: STARTLINE (58)

    /** buildsys.e:589		if length(extra_lflags) then*/
    // SubProg setup_build pc: 1197 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1199 op: LENGTH (42)
    if (IS_SEQUENCE(_56extra_lflags_44914)){
            _23744 = SEQ_PTR(_56extra_lflags_44914)->length;
    }
    else {
        _23744 = 1;
    }
    // SubProg setup_build pc: 1202 op: IF (20)
    if (_23744 == 0)
    {
        _23744 = NOVALUE;
        goto L37; // [1202] 1218
    }
    else{
        _23744 = NOVALUE;
    }
    // SubProg setup_build pc: 1205 op: STARTLINE (58)

    /** buildsys.e:590			l_flags &= " " & extra_lflags*/
    // SubProg setup_build pc: 1207 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1209 op: CONCAT (15)
    Concat((object_ptr)&_23745, _23325, _56extra_lflags_44914);
    // SubProg setup_build pc: 1213 op: CONCAT (15)
    Concat((object_ptr)&_l_flags_45011, _l_flags_45011, _23745);
    DeRefDS(_23745);
    _23745 = NOVALUE;
    // SubProg setup_build pc: 1217 op: NOP1 (159)
L37: // addr: 1218 pc: 1217 sub: 45006 op: 159
    // SubProg setup_build pc: 1218 op: STARTLINE (58)

    /** buildsys.e:593		return { */
    // SubProg setup_build pc: 1220 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1222 op: RIGHT_BRACE_N (31)
    _1 = NewS1(9);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_c_exe_45008);
    ((intptr_t*)_2)[1] = _c_exe_45008;
    RefDS(_c_flags_45009);
    ((intptr_t*)_2)[2] = _c_flags_45009;
    RefDS(_l_exe_45010);
    ((intptr_t*)_2)[3] = _l_exe_45010;
    RefDS(_l_flags_45011);
    ((intptr_t*)_2)[4] = _l_flags_45011;
    RefDS(_obj_ext_45012);
    ((intptr_t*)_2)[5] = _obj_ext_45012;
    RefDS(_exe_ext_45013);
    ((intptr_t*)_2)[6] = _exe_ext_45013;
    RefDS(_l_flags_begin_45014);
    ((intptr_t*)_2)[7] = _l_flags_begin_45014;
    RefDS(_rc_comp_45015);
    ((intptr_t*)_2)[8] = _rc_comp_45015;
    RefDS(_58user_library_42098);
    ((intptr_t*)_2)[9] = _58user_library_42098;
    _23747 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 1234 op: RETURNF (28)

// Exiting block BLOCK: setup_build

// block var c_exe_45008
    DeRefDS(_c_exe_45008);

// block var c_flags_45009
    DeRefDS(_c_flags_45009);

// block var l_exe_45010
    DeRefDS(_l_exe_45010);

// block var l_flags_45011
    DeRefDS(_l_flags_45011);

// block var obj_ext_45012
    DeRefDSi(_obj_ext_45012);

// block var exe_ext_45013
    DeRefDSi(_exe_ext_45013);

// block var l_flags_begin_45014
    DeRefDSi(_l_flags_begin_45014);

// block var rc_comp_45015
    DeRefDS(_rc_comp_45015);

// block var l_names_45016
    DeRef(_l_names_45016);

// block var l_ext_45017
    DeRefi(_l_ext_45017);

// block var t_slash_45018
    DeRefi(_t_slash_45018);

// block var compile_dir_45137
    DeRef(_compile_dir_45137);

// block var bits_45148
    DeRef(_23581);
    _23581 = NOVALUE;
    return _23747;
    // SubProg setup_build pc: 1238 op: BADRETURNF (43)
    ;
}


void _56ensure_exename(object _ext_45304)
{
    object _23754 = NOVALUE; // 45319 23754
    object _23753 = NOVALUE; // 45318 23753
    object _23752 = NOVALUE; // 45315 23752
    object _23751 = NOVALUE; // 45312 23751
// skipping _23750  name type: 0
    object _23749 = NOVALUE; // 45308 23749
    object _23748 = NOVALUE; // 45307 23748
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ensure_exename pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ensure_exename pc: 3 op: STARTLINE (58)

    /** buildsys.e:602		if length(exe_name[D_ALTNAME]) = 0 then*/
    // SubProg ensure_exename pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 9 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23748 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg ensure_exename pc: 13 op: LENGTH (42)
    if (IS_SEQUENCE(_23748)){
            _23749 = SEQ_PTR(_23748)->length;
    }
    else {
        _23749 = 1;
    }
    _23748 = NOVALUE;
    // SubProg ensure_exename pc: 16 op: EQUALS_IFW_I (121)
    if (_23749 != 0)
    goto L1; // [16] 67
    // SubProg ensure_exename pc: 20 op: STARTLINE (58)

    /** buildsys.e:603			exe_name[D_NAME] = current_dir() & SLASH & file0 & ext*/
    // SubProg ensure_exename pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 26 op: PROC (27)
    _23751 = _20current_dir();
    // SubProg ensure_exename pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 33 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _ext_45304;
        concat_list[1] = _58file0_44053;
        concat_list[2] = 47;
        concat_list[3] = _23751;
        Concat_N((object_ptr)&_23752, concat_list, 4);
    }
    DeRef(_23751);
    _23751 = NOVALUE;
    // SubProg ensure_exename pc: 40 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23752;
    if( _1 != _23752 ){
        DeRef(_1);
    }
    _23752 = NOVALUE;
    // SubProg ensure_exename pc: 44 op: STARTLINE (58)

    /** buildsys.e:604			exe_name[D_ALTNAME] = adjust_for_command_line_passing(exe_name[D_NAME])*/
    // SubProg ensure_exename pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 54 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23753 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ensure_exename pc: 58 op: PROC (27)
    Ref(_23753);
    _23754 = _56adjust_for_command_line_passing(_23753);
    _23753 = NOVALUE;
    // SubProg ensure_exename pc: 62 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23754;
    if( _1 != _23754 ){
        DeRef(_1);
    }
    _23754 = NOVALUE;
    // SubProg ensure_exename pc: 66 op: NOP1 (159)
L1: // addr: 67 pc: 66 sub: 45302 op: 159
    // SubProg ensure_exename pc: 67 op: STARTLINE (58)

    /** buildsys.e:606	end procedure*/
    // SubProg ensure_exename pc: 69 op: RETURNP (29)

// Exiting block BLOCK: ensure_exename

// block var ext_45304
    DeRefDS(_ext_45304);
    _23748 = NOVALUE;
    return;
    // SubProg ensure_exename pc: 72 op: BADRETURNF (43)
    ;
}


void _56write_objlink_file()
{
    object _settings_45322 = NOVALUE;
    object _fh_45324 = NOVALUE;
    object _s_45372 = NOVALUE;
// skipping _23804  name type: 0
    object _23803 = NOVALUE; // 45417 23803
// skipping _23802  name type: 0
    object _23801 = NOVALUE; // 45411 23801
    object _23800 = NOVALUE; // 45409 23800
    object _23799 = NOVALUE; // 45408 23799
    object _23798 = NOVALUE; // 45407 23798
    object _23797 = NOVALUE; // 45405 23797
    object _23796 = NOVALUE; // 45403 23796
    object _23795 = NOVALUE; // 45401 23795
    object _23794 = NOVALUE; // 45399 23794
    object _23793 = NOVALUE; // 45397 23793
    object _23792 = NOVALUE; // 45395 23792
    object _23791 = NOVALUE; // 45393 23791
    object _23790 = NOVALUE; // 45391 23790
    object _23788 = NOVALUE; // 45388 23788
    object _23787 = NOVALUE; // 45385 23787
    object _23786 = NOVALUE; // 45383 23786
    object _23785 = NOVALUE; // 45381 23785
// skipping _23784  name type: 0
    object _23783 = NOVALUE; // 45375 23783
    object _23782 = NOVALUE; // 45369 23782
    object _23781 = NOVALUE; // 45368 23781
    object _23780 = NOVALUE; // 45366 23780
    object _23779 = NOVALUE; // 45365 23779
    object _23778 = NOVALUE; // 45363 23778
    object _23777 = NOVALUE; // 45361 23777
    object _23776 = NOVALUE; // 45360 23776
    object _23775 = NOVALUE; // 45358 23775
// skipping _23773  name type: 0
    object _23772 = NOVALUE; // 45353 23772
    object _23771 = NOVALUE; // 45351 23771
// skipping _23769  name type: 0
    object _23768 = NOVALUE; // 45346 23768
    object _23767 = NOVALUE; // 45345 23767
    object _23766 = NOVALUE; // 45342 23766
    object _23765 = NOVALUE; // 45338 23765
    object _23764 = NOVALUE; // 45336 23764
// skipping _23763  name type: 0
    object _23762 = NOVALUE; // 45334 23762
    object _23761 = NOVALUE; // 45333 23761
    object _23760 = NOVALUE; // 45331 23760
// skipping _23759  name type: 0
    object _23757 = NOVALUE; // 45328 23757
// skipping _23755  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_objlink_file pc: 1 op: STARTLINE (58)

    /** buildsys.e:612		sequence settings = setup_build()*/
    // SubProg write_objlink_file pc: 3 op: PROC (27)
    _0 = _settings_45322;
    _settings_45322 = _56setup_build();
    DeRef(_0);
    // SubProg write_objlink_file pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_objlink_file pc: 8 op: STARTLINE (58)

    /** buildsys.e:613		integer fh = open(output_dir & file0 & ".lnk", "wb")*/
    // SubProg write_objlink_file pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 14 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23756;
        concat_list[1] = _58file0_44053;
        concat_list[2] = _58output_dir_42100;
        Concat_N((object_ptr)&_23757, concat_list, 3);
    }
    // SubProg write_objlink_file pc: 20 op: OPEN (37)
    _fh_45324 = EOpen(_23757, _23758, 0);
    DeRefDS(_23757);
    _23757 = NOVALUE;
    // SubProg write_objlink_file pc: 25 op: STARTLINE (58)

    /** buildsys.e:615		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg write_objlink_file pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45322);
    _23760 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg write_objlink_file pc: 31 op: PROC (27)
    Ref(_23760);
    _56ensure_exename(_23760);
    _23760 = NOVALUE;
    // SubProg write_objlink_file pc: 34 op: STARTLINE (58)

    /** buildsys.e:617		if length(settings[SETUP_LFLAGS_BEGIN]) > 0 then*/
    // SubProg write_objlink_file pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45322);
    _23761 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg write_objlink_file pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_23761)){
            _23762 = SEQ_PTR(_23761)->length;
    }
    else {
        _23762 = 1;
    }
    _23761 = NOVALUE;
    // SubProg write_objlink_file pc: 43 op: GREATER_IFW_I (124)
    if (_23762 <= 0)
    goto L1; // [43] 63
    // SubProg write_objlink_file pc: 47 op: STARTLINE (58)

    /** buildsys.e:618			puts(fh, settings[SETUP_LFLAGS_BEGIN] & HOSTNL)*/
    // SubProg write_objlink_file pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45322);
    _23764 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg write_objlink_file pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 55 op: CONCAT (15)
    if (IS_SEQUENCE(_23764) && IS_ATOM(_41HOSTNL_21232)) {
    }
    else if (IS_ATOM(_23764) && IS_SEQUENCE(_41HOSTNL_21232)) {
        Ref(_23764);
        Prepend(&_23765, _41HOSTNL_21232, _23764);
    }
    else {
        Concat((object_ptr)&_23765, _23764, _41HOSTNL_21232);
        _23764 = NOVALUE;
    }
    _23764 = NOVALUE;
    // SubProg write_objlink_file pc: 59 op: PUTS (44)
    EPuts(_fh_45324, _23765); // DJP 
    DeRefDS(_23765);
    _23765 = NOVALUE;
    // SubProg write_objlink_file pc: 62 op: NOP1 (159)
L1: // addr: 63 pc: 62 sub: 45320 op: 159
    // SubProg write_objlink_file pc: 63 op: STARTLINE (58)

    /** buildsys.e:621		for i = 1 to length(generated_files) do*/
    // SubProg write_objlink_file pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23766 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23766 = 1;
    }
    // SubProg write_objlink_file pc: 70 op: FOR_I (125)
    {
        object _i_45340;
        _i_45340 = 1;
L2: // addr: 77 pc: 70 sub: 45320 op: 125
        if (_i_45340 > _23766){
            goto L3; // [70] 132
        }
        // SubProg write_objlink_file pc: 77 op: STARTLINE (58)

        /** buildsys.e:622			if match(".o", generated_files[i]) then*/
        // SubProg write_objlink_file pc: 79 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 81 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23767 = (object)*(((s1_ptr)_2)->base + _i_45340);
        // SubProg write_objlink_file pc: 85 op: MATCH_FROM (177)
        _23768 = e_match_from(_23085, _23767, 1);
        _23767 = NOVALUE;
        // SubProg write_objlink_file pc: 90 op: IF (20)
        if (_23768 == 0)
        {
            _23768 = NOVALUE;
            goto L4; // [90] 125
        }
        else{
            _23768 = NOVALUE;
        }
        // SubProg write_objlink_file pc: 93 op: STARTLINE (58)

        /** buildsys.e:623				if compiler_type = COMPILER_WATCOM then*/
        // SubProg write_objlink_file pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 97 op: EQUALS_IFW_I (121)
        if (_56compiler_type_44893 != 2)
        goto L5; // [97] 107
        // SubProg write_objlink_file pc: 101 op: STARTLINE (58)

        /** buildsys.e:624					puts(fh, "FILE ")*/
        // SubProg write_objlink_file pc: 103 op: PUTS (44)
        EPuts(_fh_45324, _23770); // DJP 
        // SubProg write_objlink_file pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 45320 op: 159
        // SubProg write_objlink_file pc: 107 op: STARTLINE (58)

        /** buildsys.e:627				puts(fh, generated_files[i] & HOSTNL)*/
        // SubProg write_objlink_file pc: 109 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 111 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23771 = (object)*(((s1_ptr)_2)->base + _i_45340);
        // SubProg write_objlink_file pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 117 op: CONCAT (15)
        Concat((object_ptr)&_23772, _23771, _41HOSTNL_21232);
        _23771 = NOVALUE;
        _23771 = NOVALUE;
        // SubProg write_objlink_file pc: 121 op: PUTS (44)
        EPuts(_fh_45324, _23772); // DJP 
        DeRefDS(_23772);
        _23772 = NOVALUE;
        // SubProg write_objlink_file pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 45320 op: 159
        // SubProg write_objlink_file pc: 125 op: STARTLINE (58)

        /** buildsys.e:629		end for*/
        // SubProg write_objlink_file pc: 127 op: ENDFOR_INT_UP1 (54)
        _i_45340 = _i_45340 + 1;
        goto L2; // [127] 77
L3: // addr: 132 pc: 127 sub: 45320 op: 54
        ;
    }
    // SubProg write_objlink_file pc: 132 op: STARTLINE (58)

    /** buildsys.e:631		if compiler_type = COMPILER_WATCOM then*/
    // SubProg write_objlink_file pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 136 op: EQUALS_IFW_I (121)
    if (_56compiler_type_44893 != 2)
    goto L6; // [136] 165
    // SubProg write_objlink_file pc: 140 op: STARTLINE (58)

    /** buildsys.e:632			printf(fh, "NAME '%s'" & HOSTNL, { exe_name[D_ALTNAME] })*/
    // SubProg write_objlink_file pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 144 op: CONCAT (15)
    Concat((object_ptr)&_23775, _23774, _41HOSTNL_21232);
    // SubProg write_objlink_file pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 152 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23776 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_objlink_file pc: 156 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23776);
    ((intptr_t*)_2)[1] = _23776;
    _23777 = MAKE_SEQ(_1);
    _23776 = NOVALUE;
    // SubProg write_objlink_file pc: 160 op: PRINTF (38)
    EPrintf(_fh_45324, _23775, _23777);
    DeRefDS(_23775);
    _23775 = NOVALUE;
    DeRefDS(_23777);
    _23777 = NOVALUE;
    // SubProg write_objlink_file pc: 164 op: NOP1 (159)
L6: // addr: 165 pc: 164 sub: 45320 op: 159
    // SubProg write_objlink_file pc: 165 op: STARTLINE (58)

    /** buildsys.e:635		puts(fh, trim(settings[SETUP_LFLAGS] & HOSTNL))*/
    // SubProg write_objlink_file pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45322);
    _23778 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg write_objlink_file pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 173 op: CONCAT (15)
    if (IS_SEQUENCE(_23778) && IS_ATOM(_41HOSTNL_21232)) {
    }
    else if (IS_ATOM(_23778) && IS_SEQUENCE(_41HOSTNL_21232)) {
        Ref(_23778);
        Prepend(&_23779, _41HOSTNL_21232, _23778);
    }
    else {
        Concat((object_ptr)&_23779, _23778, _41HOSTNL_21232);
        _23778 = NOVALUE;
    }
    _23778 = NOVALUE;
    // SubProg write_objlink_file pc: 177 op: PROC (27)
    RefDS(_3933);
    _23780 = _17trim(_23779, _3933, 0);
    _23779 = NOVALUE;
    // SubProg write_objlink_file pc: 183 op: PUTS (44)
    EPuts(_fh_45324, _23780); // DJP 
    DeRef(_23780);
    _23780 = NOVALUE;
    // SubProg write_objlink_file pc: 186 op: STARTLINE (58)

    /** buildsys.e:637		if compiler_type = COMPILER_WATCOM and dll_option then*/
    // SubProg write_objlink_file pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 190 op: EQUALS (3)
    _23781 = (_56compiler_type_44893 == 2);
    // SubProg write_objlink_file pc: 194 op: SC1_AND_IF (146)
    if (_23781 == 0) {
        goto L7; // [194] 361
    }
    // SubProg write_objlink_file pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 200 op: NOP1 (159)
    // SubProg write_objlink_file pc: 201 op: IF (20)
    if (_58dll_option_42086 == 0)
    {
        goto L7; // [201] 361
    }
    else{
    }
    // SubProg write_objlink_file pc: 204 op: STARTLINE (58)

    /** buildsys.e:638			puts(fh, HOSTNL)*/
    // SubProg write_objlink_file pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 208 op: PUTS (44)
    EPuts(_fh_45324, _41HOSTNL_21232); // DJP 
    // SubProg write_objlink_file pc: 211 op: STARTLINE (58)

    /** buildsys.e:640			object s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg write_objlink_file pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 217 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _23783 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
    // SubProg write_objlink_file pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 223 op: RHS_SUBS_CHECK (92)
    DeRef(_s_45372);
    _2 = (object)SEQ_PTR(_23783);
    _s_45372 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45372);
    _23783 = NOVALUE;
    // SubProg write_objlink_file pc: 227 op: STARTLINE (58)

    /** buildsys.e:641			while s do*/
    // SubProg write_objlink_file pc: 229 op: NOP2 (110)
    // SubProg write_objlink_file pc: 231 op: NOPWHILE (158)
L8: // addr: 232 pc: 231 sub: 45320 op: 158
    // SubProg write_objlink_file pc: 232 op: WHILE (47)
    if (_s_45372 <= 0) {
        if (_s_45372 == 0) {
            goto L9; // [232] 360
        }
        else {
            if (!IS_ATOM_INT(_s_45372) && DBL_PTR(_s_45372)->dbl == 0.0){
                goto L9; // [232] 360
            }
        }
    }
    // SubProg write_objlink_file pc: 235 op: STARTLINE (58)

    /** buildsys.e:642				if eu:find(SymTab[s][S_TOKEN], RTN_TOKS) then*/
    // SubProg write_objlink_file pc: 237 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 239 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_s_45372)){
        _23785 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45372)->dbl));
    }
    else{
        _23785 = (object)*(((s1_ptr)_2)->base + _s_45372);
    }
    // SubProg write_objlink_file pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 245 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23785);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _23786 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _23786 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _23785 = NOVALUE;
    // SubProg write_objlink_file pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 251 op: FIND_FROM (176)
    _23787 = find_from(_23786, _38RTN_TOKS_16044, 1);
    _23786 = NOVALUE;
    // SubProg write_objlink_file pc: 256 op: IF (20)
    if (_23787 == 0)
    {
        _23787 = NOVALUE;
        goto LA; // [256] 341
    }
    else{
        _23787 = NOVALUE;
    }
    // SubProg write_objlink_file pc: 259 op: STARTLINE (58)

    /** buildsys.e:643					if is_exported( s ) then*/
    // SubProg write_objlink_file pc: 261 op: PROC (27)
    Ref(_s_45372);
    _23788 = _58is_exported(_s_45372);
    // SubProg write_objlink_file pc: 265 op: IF (20)
    if (_23788 == 0) {
        DeRef(_23788);
        _23788 = NOVALUE;
        goto LB; // [265] 340
    }
    else {
        if (!IS_ATOM_INT(_23788) && DBL_PTR(_23788)->dbl == 0.0){
            DeRef(_23788);
            _23788 = NOVALUE;
            goto LB; // [265] 340
        }
        DeRef(_23788);
        _23788 = NOVALUE;
    }
    DeRef(_23788);
    _23788 = NOVALUE;
    // SubProg write_objlink_file pc: 268 op: STARTLINE (58)

    /** buildsys.e:644						printf(fh, "EXPORT %s='__%d%s@%d'" & HOSTNL,*/
    // SubProg write_objlink_file pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 272 op: CONCAT (15)
    Concat((object_ptr)&_23790, _23789, _41HOSTNL_21232);
    // SubProg write_objlink_file pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_s_45372)){
        _23791 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45372)->dbl));
    }
    else{
        _23791 = (object)*(((s1_ptr)_2)->base + _s_45372);
    }
    // SubProg write_objlink_file pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23791);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _23792 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _23792 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _23791 = NOVALUE;
    // SubProg write_objlink_file pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 290 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_s_45372)){
        _23793 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45372)->dbl));
    }
    else{
        _23793 = (object)*(((s1_ptr)_2)->base + _s_45372);
    }
    // SubProg write_objlink_file pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 296 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23793);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _23794 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _23794 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _23793 = NOVALUE;
    // SubProg write_objlink_file pc: 300 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 302 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_s_45372)){
        _23795 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45372)->dbl));
    }
    else{
        _23795 = (object)*(((s1_ptr)_2)->base + _s_45372);
    }
    // SubProg write_objlink_file pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 308 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23795);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _23796 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _23796 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _23795 = NOVALUE;
    // SubProg write_objlink_file pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 314 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_s_45372)){
        _23797 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45372)->dbl));
    }
    else{
        _23797 = (object)*(((s1_ptr)_2)->base + _s_45372);
    }
    // SubProg write_objlink_file pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 320 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23797);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _23798 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _23798 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _23797 = NOVALUE;
    // SubProg write_objlink_file pc: 324 op: MULTIPLY (13)
    if (IS_ATOM_INT(_23798)) {
        if (_23798 == (short)_23798){
            _23799 = _23798 * 4;
        }
        else{
            _23799 = NewDouble(_23798 * (eudouble)4);
        }
    }
    else {
        _23799 = binary_op(MULTIPLY, _23798, 4);
    }
    _23798 = NOVALUE;
    // SubProg write_objlink_file pc: 328 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23792);
    ((intptr_t*)_2)[1] = _23792;
    Ref(_23794);
    ((intptr_t*)_2)[2] = _23794;
    Ref(_23796);
    ((intptr_t*)_2)[3] = _23796;
    ((intptr_t*)_2)[4] = _23799;
    _23800 = MAKE_SEQ(_1);
    _23799 = NOVALUE;
    _23796 = NOVALUE;
    _23794 = NOVALUE;
    _23792 = NOVALUE;
    // SubProg write_objlink_file pc: 335 op: PRINTF (38)
    EPrintf(_fh_45324, _23790, _23800);
    DeRefDS(_23790);
    _23790 = NOVALUE;
    DeRefDS(_23800);
    _23800 = NOVALUE;
    // SubProg write_objlink_file pc: 339 op: NOP1 (159)
LB: // addr: 340 pc: 339 sub: 45320 op: 159
    // SubProg write_objlink_file pc: 340 op: NOP1 (159)
LA: // addr: 341 pc: 340 sub: 45320 op: 159
    // SubProg write_objlink_file pc: 341 op: STARTLINE (58)

    /** buildsys.e:649				s = SymTab[s][S_NEXT]*/
    // SubProg write_objlink_file pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 345 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_s_45372)){
        _23801 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45372)->dbl));
    }
    else{
        _23801 = (object)*(((s1_ptr)_2)->base + _s_45372);
    }
    // SubProg write_objlink_file pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 351 op: RHS_SUBS_CHECK (92)
    DeRef(_s_45372);
    _2 = (object)SEQ_PTR(_23801);
    _s_45372 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45372);
    _23801 = NOVALUE;
    // SubProg write_objlink_file pc: 355 op: STARTLINE (58)

    /** buildsys.e:650			end while*/
    // SubProg write_objlink_file pc: 357 op: ENDWHILE (22)
    goto L8; // [357] 232
    // SubProg write_objlink_file pc: 359 op: NOP1 (159)
L9: // addr: 360 pc: 359 sub: 45320 op: 159
    // SubProg write_objlink_file pc: 360 op: NOP1 (159)
L7: // addr: 361 pc: 360 sub: 45320 op: 159
    // SubProg write_objlink_file pc: 361 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var s_45372
    DeRef(_s_45372);
    _s_45372 = NOVALUE;
    // SubProg write_objlink_file pc: 363 op: STARTLINE (58)

    /** buildsys.e:653		close(fh)*/
    // SubProg write_objlink_file pc: 365 op: CLOSE (86)
    EClose(_fh_45324);
    // SubProg write_objlink_file pc: 367 op: STARTLINE (58)

    /** buildsys.e:655		generated_files = append(generated_files, file0 & ".lnk")*/
    // SubProg write_objlink_file pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 371 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 373 op: CONCAT (15)
    Concat((object_ptr)&_23803, _58file0_44053, _23756);
    // SubProg write_objlink_file pc: 377 op: APPEND (35)
    RefDS(_23803);
    Append(&_58generated_files_42090, _58generated_files_42090, _23803);
    DeRefDS(_23803);
    _23803 = NOVALUE;
    // SubProg write_objlink_file pc: 381 op: SEQUENCE_CHECK (97)
    // SubProg write_objlink_file pc: 383 op: STARTLINE (58)

    /** buildsys.e:656	end procedure*/
    // SubProg write_objlink_file pc: 385 op: RETURNP (29)

// Exiting block BLOCK: write_objlink_file

// block var settings_45322
    DeRef(_settings_45322);

// block var fh_45324
    DeRef(_23781);
    _23781 = NOVALUE;
    _23761 = NOVALUE;
    return;
    // SubProg write_objlink_file pc: 388 op: BADRETURNF (43)
    ;
}


void _56write_makefile_srcobj_list(object _fh_45421)
{
    object _file_count_45451 = NOVALUE;
    object _23835 = NOVALUE; // 45483 23835
    object _23834 = NOVALUE; // 45482 23834
    object _23833 = NOVALUE; // 45480 23833
// skipping _23832  name type: 0
    object _23831 = NOVALUE; // 45476 23831
    object _23830 = NOVALUE; // 45472 23830
    object _23829 = NOVALUE; // 45471 23829
    object _23827 = NOVALUE; // 45466 23827
    object _23826 = NOVALUE; // 45465 23826
// skipping _23825  name type: 0
    object _23824 = NOVALUE; // 45462 23824
    object _23823 = NOVALUE; // 45459 23823
    object _23822 = NOVALUE; // 45458 23822
    object _23821 = NOVALUE; // 45455 23821
    object _23820 = NOVALUE; // 45450 23820
    object _23819 = NOVALUE; // 45449 23819
    object _23817 = NOVALUE; // 45444 23817
    object _23816 = NOVALUE; // 45443 23816
    object _23815 = NOVALUE; // 45441 23815
// skipping _23813  name type: 0
// skipping _23812  name type: 0
    object _23811 = NOVALUE; // 45435 23811
    object _23810 = NOVALUE; // 45434 23810
    object _23809 = NOVALUE; // 45433 23809
    object _23808 = NOVALUE; // 45430 23808
    object _23807 = NOVALUE; // 45426 23807
    object _23806 = NOVALUE; // 45425 23806
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_srcobj_list pc: 1 op: INTEGER_CHECK (96)
    // SubProg write_makefile_srcobj_list pc: 3 op: STARTLINE (58)

    /** buildsys.e:660		printf(fh, "%s_SOURCES =", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 7 op: PROC (27)
    RefDS(_58file0_44053);
    _23806 = _17upper(_58file0_44053);
    // SubProg write_makefile_srcobj_list pc: 11 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23806;
    _23807 = MAKE_SEQ(_1);
    _23806 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 15 op: PRINTF (38)
    EPrintf(_fh_45421, _23805, _23807);
    DeRefDS(_23807);
    _23807 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 19 op: STARTLINE (58)

    /** buildsys.e:661		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23808 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23808 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 26 op: FOR_I (125)
    {
        object _i_45428;
        _i_45428 = 1;
L1: // addr: 33 pc: 26 sub: 45419 op: 125
        if (_i_45428 > _23808){
            goto L2; // [26] 94
        }
        // SubProg write_makefile_srcobj_list pc: 33 op: STARTLINE (58)

        /** buildsys.e:662			if generated_files[i][$] = 'c' then*/
        // SubProg write_makefile_srcobj_list pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23809 = (object)*(((s1_ptr)_2)->base + _i_45428);
        // SubProg write_makefile_srcobj_list pc: 41 op: LENGTH (42)
        if (IS_SEQUENCE(_23809)){
                _23810 = SEQ_PTR(_23809)->length;
        }
        else {
            _23810 = 1;
        }
        // SubProg write_makefile_srcobj_list pc: 44 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23809);
        _23811 = (object)*(((s1_ptr)_2)->base + _23810);
        _23809 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 48 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _23811, 99)){
            _23811 = NOVALUE;
            goto L3; // [48] 87
        }
        _23811 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 52 op: STARTLINE (58)

        /** buildsys.e:663				if i > 1 then*/
        // SubProg write_makefile_srcobj_list pc: 54 op: GREATER_IFW_I (124)
        if (_i_45428 <= 1)
        goto L4; // [54] 71
        // SubProg write_makefile_srcobj_list pc: 58 op: STARTLINE (58)

        /** buildsys.e:664					printf(fh, " \\%s\t", { HOSTNL }  )*/
        // SubProg write_makefile_srcobj_list pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 62 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_41HOSTNL_21232);
        ((intptr_t*)_2)[1] = _41HOSTNL_21232;
        _23815 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 66 op: PRINTF (38)
        EPrintf(_fh_45421, _23814, _23815);
        DeRefDS(_23815);
        _23815 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 45419 op: 159
        // SubProg write_makefile_srcobj_list pc: 71 op: STARTLINE (58)

        /** buildsys.e:666				puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 75 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23816 = (object)*(((s1_ptr)_2)->base + _i_45428);
        // SubProg write_makefile_srcobj_list pc: 79 op: CONCAT (15)
        Concat((object_ptr)&_23817, _23325, _23816);
        _23816 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 83 op: PUTS (44)
        EPuts(_fh_45421, _23817); // DJP 
        DeRefDS(_23817);
        _23817 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 45419 op: 159
        // SubProg write_makefile_srcobj_list pc: 87 op: STARTLINE (58)

        /** buildsys.e:668		end for*/
        // SubProg write_makefile_srcobj_list pc: 89 op: ENDFOR_INT_UP1 (54)
        _i_45428 = _i_45428 + 1;
        goto L1; // [89] 33
L2: // addr: 94 pc: 89 sub: 45419 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 94 op: STARTLINE (58)

    /** buildsys.e:669		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 98 op: PUTS (44)
    EPuts(_fh_45421, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_srcobj_list pc: 101 op: STARTLINE (58)

    /** buildsys.e:671		printf(fh, "%s_OBJECTS =", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 105 op: PROC (27)
    RefDS(_58file0_44053);
    _23819 = _17upper(_58file0_44053);
    // SubProg write_makefile_srcobj_list pc: 109 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23819;
    _23820 = MAKE_SEQ(_1);
    _23819 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 113 op: PRINTF (38)
    EPrintf(_fh_45421, _23818, _23820);
    DeRefDS(_23820);
    _23820 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 117 op: STARTLINE (58)

    /** buildsys.e:672		integer file_count = 0*/
    // SubProg write_makefile_srcobj_list pc: 119 op: ASSIGN_I (113)
    _file_count_45451 = 0;
    // SubProg write_makefile_srcobj_list pc: 122 op: STARTLINE (58)

    /** buildsys.e:673		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23821 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23821 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 129 op: FOR_I (125)
    {
        object _i_45453;
        _i_45453 = 1;
L5: // addr: 136 pc: 129 sub: 45419 op: 125
        if (_i_45453 > _23821){
            goto L6; // [129] 199
        }
        // SubProg write_makefile_srcobj_list pc: 136 op: STARTLINE (58)

        /** buildsys.e:674			if match(".o", generated_files[i]) then*/
        // SubProg write_makefile_srcobj_list pc: 138 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 140 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23822 = (object)*(((s1_ptr)_2)->base + _i_45453);
        // SubProg write_makefile_srcobj_list pc: 144 op: MATCH_FROM (177)
        _23823 = e_match_from(_23085, _23822, 1);
        _23822 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 149 op: IF (20)
        if (_23823 == 0)
        {
            _23823 = NOVALUE;
            goto L7; // [149] 192
        }
        else{
            _23823 = NOVALUE;
        }
        // SubProg write_makefile_srcobj_list pc: 152 op: STARTLINE (58)

        /** buildsys.e:675				if file_count then*/
        // SubProg write_makefile_srcobj_list pc: 154 op: IF (20)
        if (_file_count_45451 == 0)
        {
            goto L8; // [154] 170
        }
        else{
        }
        // SubProg write_makefile_srcobj_list pc: 157 op: STARTLINE (58)

        /** buildsys.e:676					printf(fh, " \\%s\t", { HOSTNL }  )*/
        // SubProg write_makefile_srcobj_list pc: 159 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 161 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_41HOSTNL_21232);
        ((intptr_t*)_2)[1] = _41HOSTNL_21232;
        _23824 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 165 op: PRINTF (38)
        EPrintf(_fh_45421, _23814, _23824);
        DeRefDS(_23824);
        _23824 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 169 op: NOP1 (159)
L8: // addr: 170 pc: 169 sub: 45419 op: 159
        // SubProg write_makefile_srcobj_list pc: 170 op: STARTLINE (58)

        /** buildsys.e:678				file_count += 1*/
        // SubProg write_makefile_srcobj_list pc: 172 op: PLUS1_I (117)
        _file_count_45451 = _file_count_45451 + 1;
        // SubProg write_makefile_srcobj_list pc: 176 op: STARTLINE (58)

        /** buildsys.e:679				puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 178 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 180 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23826 = (object)*(((s1_ptr)_2)->base + _i_45453);
        // SubProg write_makefile_srcobj_list pc: 184 op: CONCAT (15)
        Concat((object_ptr)&_23827, _23325, _23826);
        _23826 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 188 op: PUTS (44)
        EPuts(_fh_45421, _23827); // DJP 
        DeRefDS(_23827);
        _23827 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 45419 op: 159
        // SubProg write_makefile_srcobj_list pc: 192 op: STARTLINE (58)

        /** buildsys.e:681		end for*/
        // SubProg write_makefile_srcobj_list pc: 194 op: ENDFOR_INT_UP1 (54)
        _i_45453 = _i_45453 + 1;
        goto L5; // [194] 136
L6: // addr: 199 pc: 194 sub: 45419 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 199 op: STARTLINE (58)

    /** buildsys.e:682		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 203 op: PUTS (44)
    EPuts(_fh_45421, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_srcobj_list pc: 206 op: STARTLINE (58)

    /** buildsys.e:684		printf(fh, "%s_GENERATED_FILES = ", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 210 op: PROC (27)
    RefDS(_58file0_44053);
    _23829 = _17upper(_58file0_44053);
    // SubProg write_makefile_srcobj_list pc: 214 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23829;
    _23830 = MAKE_SEQ(_1);
    _23829 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 218 op: PRINTF (38)
    EPrintf(_fh_45421, _23828, _23830);
    DeRefDS(_23830);
    _23830 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 222 op: STARTLINE (58)

    /** buildsys.e:685		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 226 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23831 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23831 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 229 op: FOR_I (125)
    {
        object _i_45474;
        _i_45474 = 1;
L9: // addr: 236 pc: 229 sub: 45419 op: 125
        if (_i_45474 > _23831){
            goto LA; // [229] 277
        }
        // SubProg write_makefile_srcobj_list pc: 236 op: STARTLINE (58)

        /** buildsys.e:686			if i > 1 then*/
        // SubProg write_makefile_srcobj_list pc: 238 op: GREATER_IFW_I (124)
        if (_i_45474 <= 1)
        goto LB; // [238] 255
        // SubProg write_makefile_srcobj_list pc: 242 op: STARTLINE (58)

        /** buildsys.e:687				printf(fh, " \\%s\t", { HOSTNL }  )*/
        // SubProg write_makefile_srcobj_list pc: 244 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 246 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_41HOSTNL_21232);
        ((intptr_t*)_2)[1] = _41HOSTNL_21232;
        _23833 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 250 op: PRINTF (38)
        EPrintf(_fh_45421, _23814, _23833);
        DeRefDS(_23833);
        _23833 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 254 op: NOP1 (159)
LB: // addr: 255 pc: 254 sub: 45419 op: 159
        // SubProg write_makefile_srcobj_list pc: 255 op: STARTLINE (58)

        /** buildsys.e:689			puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 259 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23834 = (object)*(((s1_ptr)_2)->base + _i_45474);
        // SubProg write_makefile_srcobj_list pc: 263 op: CONCAT (15)
        Concat((object_ptr)&_23835, _23325, _23834);
        _23834 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 267 op: PUTS (44)
        EPuts(_fh_45421, _23835); // DJP 
        DeRefDS(_23835);
        _23835 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 270 op: STARTLINE (58)

        /** buildsys.e:690		end for*/
        // SubProg write_makefile_srcobj_list pc: 272 op: ENDFOR_INT_UP1 (54)
        _i_45474 = _i_45474 + 1;
        goto L9; // [272] 236
LA: // addr: 277 pc: 272 sub: 45419 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 277 op: STARTLINE (58)

    /** buildsys.e:691		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 281 op: PUTS (44)
    EPuts(_fh_45421, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_srcobj_list pc: 284 op: STARTLINE (58)

    /** buildsys.e:692	end procedure*/
    // SubProg write_makefile_srcobj_list pc: 286 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_srcobj_list

// block var fh_45421

// block var file_count_45451
    return;
    // SubProg write_makefile_srcobj_list pc: 289 op: BADRETURNF (43)
    ;
}


object _56windows_to_mingw_path(object _s_45487)
{
    object _23837 = NOVALUE; // 45489 23837
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg windows_to_mingw_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg windows_to_mingw_path pc: 3 op: STARTLINE (58)

    /** buildsys.e:701		ifdef TEST_FOR_WIN9X_ON_MING then*/
    // SubProg windows_to_mingw_path pc: 5 op: STARTLINE (58)

    /** buildsys.e:711		return search:find_replace('\\',s,'/')*/
    // SubProg windows_to_mingw_path pc: 7 op: PROC (27)
    RefDS(_s_45487);
    _23837 = _19find_replace(92, _s_45487, 47, 0);
    // SubProg windows_to_mingw_path pc: 14 op: RETURNF (28)

// Exiting block BLOCK: windows_to_mingw_path

// block var s_45487
    DeRefDS(_s_45487);
    return _23837;
    // SubProg windows_to_mingw_path pc: 18 op: BADRETURNF (43)
    ;
}


void _56write_makefile_full()
{
    object _settings_45492 = NOVALUE;
    object _fh_45495 = NOVALUE;
    object _23964 = NOVALUE; // 45717 23964
    object _23962 = NOVALUE; // 45714 23962
    object _23960 = NOVALUE; // 45710 23960
    object _23959 = NOVALUE; // 45709 23959
    object _23958 = NOVALUE; // 45707 23958
    object _23957 = NOVALUE; // 45705 23957
    object _23956 = NOVALUE; // 45702 23956
    object _23954 = NOVALUE; // 45699 23954
    object _23953 = NOVALUE; // 45696 23953
    object _23951 = NOVALUE; // 45692 23951
    object _23950 = NOVALUE; // 45691 23950
    object _23949 = NOVALUE; // 45689 23949
    object _23948 = NOVALUE; // 45686 23948
    object _23946 = NOVALUE; // 45683 23946
    object _23945 = NOVALUE; // 45681 23945
    object _23943 = NOVALUE; // 45677 23943
    object _23942 = NOVALUE; // 45674 23942
    object _23940 = NOVALUE; // 45670 23940
    object _23939 = NOVALUE; // 45669 23939
    object _23938 = NOVALUE; // 45668 23938
    object _23937 = NOVALUE; // 45666 23937
    object _23936 = NOVALUE; // 45665 23936
    object _23935 = NOVALUE; // 45662 23935
    object _23934 = NOVALUE; // 45659 23934
    object _23933 = NOVALUE; // 45657 23933
    object _23931 = NOVALUE; // 45654 23931
    object _23930 = NOVALUE; // 45653 23930
    object _23929 = NOVALUE; // 45651 23929
    object _23928 = NOVALUE; // 45649 23928
    object _23927 = NOVALUE; // 45647 23927
    object _23926 = NOVALUE; // 45645 23926
    object _23925 = NOVALUE; // 45644 23925
    object _23924 = NOVALUE; // 45641 23924
    object _23923 = NOVALUE; // 45640 23923
    object _23922 = NOVALUE; // 45638 23922
    object _23921 = NOVALUE; // 45635 23921
    object _23920 = NOVALUE; // 45634 23920
    object _23919 = NOVALUE; // 45632 23919
    object _23917 = NOVALUE; // 45629 23917
    object _23916 = NOVALUE; // 45628 23916
    object _23914 = NOVALUE; // 45624 23914
    object _23912 = NOVALUE; // 45621 23912
    object _23910 = NOVALUE; // 45617 23910
    object _23909 = NOVALUE; // 45616 23909
    object _23908 = NOVALUE; // 45614 23908
    object _23907 = NOVALUE; // 45612 23907
    object _23906 = NOVALUE; // 45608 23906
    object _23905 = NOVALUE; // 45607 23905
    object _23904 = NOVALUE; // 45605 23904
    object _23903 = NOVALUE; // 45603 23903
    object _23902 = NOVALUE; // 45602 23902
    object _23901 = NOVALUE; // 45599 23901
    object _23900 = NOVALUE; // 45598 23900
    object _23899 = NOVALUE; // 45596 23899
    object _23898 = NOVALUE; // 45594 23898
    object _23897 = NOVALUE; // 45592 23897
    object _23895 = NOVALUE; // 45588 23895
    object _23894 = NOVALUE; // 45587 23894
    object _23893 = NOVALUE; // 45585 23893
    object _23892 = NOVALUE; // 45583 23892
    object _23891 = NOVALUE; // 45582 23891
    object _23890 = NOVALUE; // 45579 23890
    object _23889 = NOVALUE; // 45575 23889
    object _23888 = NOVALUE; // 45574 23888
    object _23887 = NOVALUE; // 45572 23887
    object _23885 = NOVALUE; // 45569 23885
    object _23884 = NOVALUE; // 45568 23884
    object _23883 = NOVALUE; // 45565 23883
    object _23882 = NOVALUE; // 45563 23882
    object _23880 = NOVALUE; // 45559 23880
    object _23879 = NOVALUE; // 45558 23879
    object _23878 = NOVALUE; // 45556 23878
    object _23877 = NOVALUE; // 45554 23877
    object _23876 = NOVALUE; // 45552 23876
    object _23875 = NOVALUE; // 45551 23875
    object _23873 = NOVALUE; // 45548 23873
    object _23872 = NOVALUE; // 45547 23872
    object _23871 = NOVALUE; // 45546 23871
    object _23870 = NOVALUE; // 45545 23870
    object _23869 = NOVALUE; // 45544 23869
    object _23868 = NOVALUE; // 45541 23868
    object _23867 = NOVALUE; // 45539 23867
    object _23865 = NOVALUE; // 45536 23865
    object _23864 = NOVALUE; // 45534 23864
    object _23863 = NOVALUE; // 45531 23863
    object _23862 = NOVALUE; // 45529 23862
// skipping _23860  name type: 0
    object _23859 = NOVALUE; // 45522 23859
    object _23858 = NOVALUE; // 45521 23858
    object _23857 = NOVALUE; // 45520 23857
// skipping _23855  name type: 0
    object _23854 = NOVALUE; // 45515 23854
    object _23853 = NOVALUE; // 45514 23853
    object _23852 = NOVALUE; // 45513 23852
    object _23850 = NOVALUE; // 45510 23850
    object _23849 = NOVALUE; // 45509 23849
    object _23848 = NOVALUE; // 45508 23848
    object _23846 = NOVALUE; // 45505 23846
    object _23845 = NOVALUE; // 45504 23845
    object _23844 = NOVALUE; // 45503 23844
// skipping _23842  name type: 0
    object _23841 = NOVALUE; // 45499 23841
    object _23839 = NOVALUE; // 45494 23839
// skipping _23838  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_full pc: 1 op: STARTLINE (58)

    /** buildsys.e:718		sequence settings = setup_build()*/
    // SubProg write_makefile_full pc: 3 op: PROC (27)
    _0 = _settings_45492;
    _settings_45492 = _56setup_build();
    DeRef(_0);
    // SubProg write_makefile_full pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_makefile_full pc: 8 op: STARTLINE (58)

    /** buildsys.e:720		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg write_makefile_full pc: 10 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23839 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg write_makefile_full pc: 14 op: PROC (27)
    Ref(_23839);
    _56ensure_exename(_23839);
    _23839 = NOVALUE;
    // SubProg write_makefile_full pc: 17 op: STARTLINE (58)

    /** buildsys.e:722		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    // SubProg write_makefile_full pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 23 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23840;
        concat_list[1] = _58file0_44053;
        concat_list[2] = _58output_dir_42100;
        Concat_N((object_ptr)&_23841, concat_list, 3);
    }
    // SubProg write_makefile_full pc: 29 op: OPEN (37)
    _fh_45495 = EOpen(_23841, _23758, 0);
    DeRefDS(_23841);
    _23841 = NOVALUE;
    // SubProg write_makefile_full pc: 34 op: STARTLINE (58)

    /** buildsys.e:724		printf(fh, "CC     = %s" & HOSTNL, { settings[SETUP_CEXE] })*/
    // SubProg write_makefile_full pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 38 op: CONCAT (15)
    Concat((object_ptr)&_23844, _23843, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 42 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23845 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg write_makefile_full pc: 46 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23845);
    ((intptr_t*)_2)[1] = _23845;
    _23846 = MAKE_SEQ(_1);
    _23845 = NOVALUE;
    // SubProg write_makefile_full pc: 50 op: PRINTF (38)
    EPrintf(_fh_45495, _23844, _23846);
    DeRefDS(_23844);
    _23844 = NOVALUE;
    DeRefDS(_23846);
    _23846 = NOVALUE;
    // SubProg write_makefile_full pc: 54 op: STARTLINE (58)

    /** buildsys.e:725		printf(fh, "CFLAGS = %s" & HOSTNL, { settings[SETUP_CFLAGS] })*/
    // SubProg write_makefile_full pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 58 op: CONCAT (15)
    Concat((object_ptr)&_23848, _23847, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 62 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23849 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg write_makefile_full pc: 66 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23849);
    ((intptr_t*)_2)[1] = _23849;
    _23850 = MAKE_SEQ(_1);
    _23849 = NOVALUE;
    // SubProg write_makefile_full pc: 70 op: PRINTF (38)
    EPrintf(_fh_45495, _23848, _23850);
    DeRefDS(_23848);
    _23848 = NOVALUE;
    DeRefDS(_23850);
    _23850 = NOVALUE;
    // SubProg write_makefile_full pc: 74 op: STARTLINE (58)

    /** buildsys.e:726		printf(fh, "LINKER = %s" & HOSTNL, { settings[SETUP_LEXE] })*/
    // SubProg write_makefile_full pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 78 op: CONCAT (15)
    Concat((object_ptr)&_23852, _23851, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23853 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg write_makefile_full pc: 86 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23853);
    ((intptr_t*)_2)[1] = _23853;
    _23854 = MAKE_SEQ(_1);
    _23853 = NOVALUE;
    // SubProg write_makefile_full pc: 90 op: PRINTF (38)
    EPrintf(_fh_45495, _23852, _23854);
    DeRefDS(_23852);
    _23852 = NOVALUE;
    DeRefDS(_23854);
    _23854 = NOVALUE;
    // SubProg write_makefile_full pc: 94 op: STARTLINE (58)

    /** buildsys.e:728		if compiler_type = COMPILER_GCC then*/
    // SubProg write_makefile_full pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 98 op: EQUALS_IFW_I (121)
    if (_56compiler_type_44893 != 1)
    goto L1; // [98] 125
    // SubProg write_makefile_full pc: 102 op: STARTLINE (58)

    /** buildsys.e:729			printf(fh, "LFLAGS = %s" & HOSTNL, { settings[SETUP_LFLAGS] })*/
    // SubProg write_makefile_full pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 106 op: CONCAT (15)
    Concat((object_ptr)&_23857, _23856, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 110 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23858 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg write_makefile_full pc: 114 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23858);
    ((intptr_t*)_2)[1] = _23858;
    _23859 = MAKE_SEQ(_1);
    _23858 = NOVALUE;
    // SubProg write_makefile_full pc: 118 op: PRINTF (38)
    EPrintf(_fh_45495, _23857, _23859);
    DeRefDS(_23857);
    _23857 = NOVALUE;
    DeRefDS(_23859);
    _23859 = NOVALUE;
    // SubProg write_makefile_full pc: 122 op: ELSE (23)
    goto L2; // [122] 130
    // SubProg write_makefile_full pc: 124 op: NOP1 (159)
L1: // addr: 125 pc: 124 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 125 op: STARTLINE (58)

    /** buildsys.e:731			write_objlink_file()*/
    // SubProg write_makefile_full pc: 127 op: PROC (27)
    _56write_objlink_file();
    // SubProg write_makefile_full pc: 129 op: NOP1 (159)
L2: // addr: 130 pc: 129 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 130 op: STARTLINE (58)

    /** buildsys.e:734		write_makefile_srcobj_list(fh)*/
    // SubProg write_makefile_full pc: 132 op: PROC (27)
    _56write_makefile_srcobj_list(_fh_45495);
    // SubProg write_makefile_full pc: 135 op: STARTLINE (58)

    /** buildsys.e:735		puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 139 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 142 op: STARTLINE (58)

    /** buildsys.e:737		if compiler_type = COMPILER_WATCOM then*/
    // SubProg write_makefile_full pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 146 op: EQUALS_IFW_I (121)
    if (_56compiler_type_44893 != 2)
    goto L3; // [146] 575
    // SubProg write_makefile_full pc: 150 op: STARTLINE (58)

    /** buildsys.e:738			printf(fh, "\"%s\" : $(%s_OBJECTS) %s" & HOSTNL, { */
    // SubProg write_makefile_full pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 154 op: CONCAT (15)
    Concat((object_ptr)&_23862, _23861, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 162 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23863 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 168 op: PROC (27)
    RefDS(_58file0_44053);
    _23864 = _17upper(_58file0_44053);
    // SubProg write_makefile_full pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 174 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23863);
    ((intptr_t*)_2)[1] = _23863;
    ((intptr_t*)_2)[2] = _23864;
    RefDS(_58user_library_42098);
    ((intptr_t*)_2)[3] = _58user_library_42098;
    _23865 = MAKE_SEQ(_1);
    _23864 = NOVALUE;
    _23863 = NOVALUE;
    // SubProg write_makefile_full pc: 180 op: PRINTF (38)
    EPrintf(_fh_45495, _23862, _23865);
    DeRefDS(_23862);
    _23862 = NOVALUE;
    DeRefDS(_23865);
    _23865 = NOVALUE;
    // SubProg write_makefile_full pc: 184 op: STARTLINE (58)

    /** buildsys.e:741			printf(fh, "\t$(LINKER) @%s.lnk" & HOSTNL, { file0 })*/
    // SubProg write_makefile_full pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 188 op: CONCAT (15)
    Concat((object_ptr)&_23867, _23866, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 194 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_58file0_44053);
    ((intptr_t*)_2)[1] = _58file0_44053;
    _23868 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 198 op: PRINTF (38)
    EPrintf(_fh_45495, _23867, _23868);
    DeRefDS(_23867);
    _23867 = NOVALUE;
    DeRefDS(_23868);
    _23868 = NOVALUE;
    // SubProg write_makefile_full pc: 202 op: STARTLINE (58)

    /** buildsys.e:742			if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) then*/
    // SubProg write_makefile_full pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 208 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _23869 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 212 op: LENGTH (42)
    if (IS_SEQUENCE(_23869)){
            _23870 = SEQ_PTR(_23869)->length;
    }
    else {
        _23870 = 1;
    }
    _23869 = NOVALUE;
    // SubProg write_makefile_full pc: 215 op: SC1_AND_IF (146)
    if (_23870 == 0) {
        goto L4; // [215] 277
    }
    // SubProg write_makefile_full pc: 219 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23872 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg write_makefile_full pc: 223 op: LENGTH (42)
    if (IS_SEQUENCE(_23872)){
            _23873 = SEQ_PTR(_23872)->length;
    }
    else {
        _23873 = 1;
    }
    _23872 = NOVALUE;
    // SubProg write_makefile_full pc: 226 op: NOP1 (159)
    // SubProg write_makefile_full pc: 227 op: IF (20)
    if (_23873 == 0)
    {
        _23873 = NOVALUE;
        goto L4; // [227] 277
    }
    else{
        _23873 = NOVALUE;
    }
    // SubProg write_makefile_full pc: 230 op: STARTLINE (58)

    /** buildsys.e:743				writef(fh, "\t" & settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 232 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23875 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg write_makefile_full pc: 236 op: CONCAT (15)
    if (IS_SEQUENCE(_23874) && IS_ATOM(_23875)) {
        Ref(_23875);
        Append(&_23876, _23874, _23875);
    }
    else if (IS_ATOM(_23874) && IS_SEQUENCE(_23875)) {
    }
    else {
        Concat((object_ptr)&_23876, _23874, _23875);
    }
    _23875 = NOVALUE;
    // SubProg write_makefile_full pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 244 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _23877 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 252 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23878 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 258 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 260 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23879 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 264 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23877);
    ((intptr_t*)_2)[1] = _23877;
    Ref(_23878);
    ((intptr_t*)_2)[2] = _23878;
    Ref(_23879);
    ((intptr_t*)_2)[3] = _23879;
    _23880 = MAKE_SEQ(_1);
    _23879 = NOVALUE;
    _23878 = NOVALUE;
    _23877 = NOVALUE;
    // SubProg write_makefile_full pc: 270 op: PROC (27)
    _8writef(_fh_45495, _23876, _23880, 0);
    _23876 = NOVALUE;
    _23880 = NOVALUE;
    // SubProg write_makefile_full pc: 276 op: NOP1 (159)
L4: // addr: 277 pc: 276 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 277 op: STARTLINE (58)

    /** buildsys.e:745			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 281 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 284 op: STARTLINE (58)

    /** buildsys.e:746			printf(fh, "%s-clean : .SYMBOLIC" & HOSTNL, { file0 })*/
    // SubProg write_makefile_full pc: 286 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 288 op: CONCAT (15)
    Concat((object_ptr)&_23882, _23881, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 294 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_58file0_44053);
    ((intptr_t*)_2)[1] = _58file0_44053;
    _23883 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 298 op: PRINTF (38)
    EPrintf(_fh_45495, _23882, _23883);
    DeRefDS(_23882);
    _23882 = NOVALUE;
    DeRefDS(_23883);
    _23883 = NOVALUE;
    // SubProg write_makefile_full pc: 302 op: STARTLINE (58)

    /** buildsys.e:747			if length(res_file[D_ALTNAME]) then*/
    // SubProg write_makefile_full pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 308 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23884 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 312 op: LENGTH (42)
    if (IS_SEQUENCE(_23884)){
            _23885 = SEQ_PTR(_23884)->length;
    }
    else {
        _23885 = 1;
    }
    _23884 = NOVALUE;
    // SubProg write_makefile_full pc: 315 op: IF (20)
    if (_23885 == 0)
    {
        _23885 = NOVALUE;
        goto L5; // [315] 343
    }
    else{
        _23885 = NOVALUE;
    }
    // SubProg write_makefile_full pc: 318 op: STARTLINE (58)

    /** buildsys.e:748				printf(fh, "\tdel \"%s\"" & HOSTNL, { res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 320 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 322 op: CONCAT (15)
    Concat((object_ptr)&_23887, _23886, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 328 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 330 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23888 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 334 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23888);
    ((intptr_t*)_2)[1] = _23888;
    _23889 = MAKE_SEQ(_1);
    _23888 = NOVALUE;
    // SubProg write_makefile_full pc: 338 op: PRINTF (38)
    EPrintf(_fh_45495, _23887, _23889);
    DeRefDS(_23887);
    _23887 = NOVALUE;
    DeRefDS(_23889);
    _23889 = NOVALUE;
    // SubProg write_makefile_full pc: 342 op: NOP1 (159)
L5: // addr: 343 pc: 342 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 343 op: STARTLINE (58)

    /** buildsys.e:750			for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_full pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 347 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23890 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23890 = 1;
    }
    // SubProg write_makefile_full pc: 350 op: FOR_I (125)
    {
        object _i_45577;
        _i_45577 = 1;
L6: // addr: 357 pc: 350 sub: 45490 op: 125
        if (_i_45577 > _23890){
            goto L7; // [350] 403
        }
        // SubProg write_makefile_full pc: 357 op: STARTLINE (58)

        /** buildsys.e:751				if match(".o", generated_files[i]) then*/
        // SubProg write_makefile_full pc: 359 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_full pc: 361 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23891 = (object)*(((s1_ptr)_2)->base + _i_45577);
        // SubProg write_makefile_full pc: 365 op: MATCH_FROM (177)
        _23892 = e_match_from(_23085, _23891, 1);
        _23891 = NOVALUE;
        // SubProg write_makefile_full pc: 370 op: IF (20)
        if (_23892 == 0)
        {
            _23892 = NOVALUE;
            goto L8; // [370] 396
        }
        else{
            _23892 = NOVALUE;
        }
        // SubProg write_makefile_full pc: 373 op: STARTLINE (58)

        /** buildsys.e:752					printf(fh, "\tdel \"%s\"" & HOSTNL, { generated_files[i] })*/
        // SubProg write_makefile_full pc: 375 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_full pc: 377 op: CONCAT (15)
        Concat((object_ptr)&_23893, _23886, _41HOSTNL_21232);
        // SubProg write_makefile_full pc: 381 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_full pc: 383 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23894 = (object)*(((s1_ptr)_2)->base + _i_45577);
        // SubProg write_makefile_full pc: 387 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23894);
        ((intptr_t*)_2)[1] = _23894;
        _23895 = MAKE_SEQ(_1);
        _23894 = NOVALUE;
        // SubProg write_makefile_full pc: 391 op: PRINTF (38)
        EPrintf(_fh_45495, _23893, _23895);
        DeRefDS(_23893);
        _23893 = NOVALUE;
        DeRefDS(_23895);
        _23895 = NOVALUE;
        // SubProg write_makefile_full pc: 395 op: NOP1 (159)
L8: // addr: 396 pc: 395 sub: 45490 op: 159
        // SubProg write_makefile_full pc: 396 op: STARTLINE (58)

        /** buildsys.e:754			end for*/
        // SubProg write_makefile_full pc: 398 op: ENDFOR_INT_UP1 (54)
        _i_45577 = _i_45577 + 1;
        goto L6; // [398] 357
L7: // addr: 403 pc: 398 sub: 45490 op: 54
        ;
    }
    // SubProg write_makefile_full pc: 403 op: STARTLINE (58)

    /** buildsys.e:755			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 407 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 410 op: STARTLINE (58)

    /** buildsys.e:756			printf(fh, "%s-clean-all : .SYMBOLIC" & HOSTNL, { file0 })*/
    // SubProg write_makefile_full pc: 412 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 414 op: CONCAT (15)
    Concat((object_ptr)&_23897, _23896, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 420 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_58file0_44053);
    ((intptr_t*)_2)[1] = _58file0_44053;
    _23898 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 424 op: PRINTF (38)
    EPrintf(_fh_45495, _23897, _23898);
    DeRefDS(_23897);
    _23897 = NOVALUE;
    DeRefDS(_23898);
    _23898 = NOVALUE;
    // SubProg write_makefile_full pc: 428 op: STARTLINE (58)

    /** buildsys.e:757			printf(fh, "\tdel \"%s\"" & HOSTNL, { exe_name[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 432 op: CONCAT (15)
    Concat((object_ptr)&_23899, _23886, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 436 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 440 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23900 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 444 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23900);
    ((intptr_t*)_2)[1] = _23900;
    _23901 = MAKE_SEQ(_1);
    _23900 = NOVALUE;
    // SubProg write_makefile_full pc: 448 op: PRINTF (38)
    EPrintf(_fh_45495, _23899, _23901);
    DeRefDS(_23899);
    _23899 = NOVALUE;
    DeRefDS(_23901);
    _23901 = NOVALUE;
    // SubProg write_makefile_full pc: 452 op: STARTLINE (58)

    /** buildsys.e:758			if length(res_file[D_ALTNAME]) then*/
    // SubProg write_makefile_full pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 456 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 458 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23902 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 462 op: LENGTH (42)
    if (IS_SEQUENCE(_23902)){
            _23903 = SEQ_PTR(_23902)->length;
    }
    else {
        _23903 = 1;
    }
    _23902 = NOVALUE;
    // SubProg write_makefile_full pc: 465 op: IF (20)
    if (_23903 == 0)
    {
        _23903 = NOVALUE;
        goto L9; // [465] 493
    }
    else{
        _23903 = NOVALUE;
    }
    // SubProg write_makefile_full pc: 468 op: STARTLINE (58)

    /** buildsys.e:759				printf(fh, "\tdel \"%s\"" & HOSTNL, { res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 472 op: CONCAT (15)
    Concat((object_ptr)&_23904, _23886, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 476 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 478 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 480 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23905 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 484 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23905);
    ((intptr_t*)_2)[1] = _23905;
    _23906 = MAKE_SEQ(_1);
    _23905 = NOVALUE;
    // SubProg write_makefile_full pc: 488 op: PRINTF (38)
    EPrintf(_fh_45495, _23904, _23906);
    DeRefDS(_23904);
    _23904 = NOVALUE;
    DeRefDS(_23906);
    _23906 = NOVALUE;
    // SubProg write_makefile_full pc: 492 op: NOP1 (159)
L9: // addr: 493 pc: 492 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 493 op: STARTLINE (58)

    /** buildsys.e:761			for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_full pc: 495 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 497 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23907 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23907 = 1;
    }
    // SubProg write_makefile_full pc: 500 op: FOR_I (125)
    {
        object _i_45610;
        _i_45610 = 1;
LA: // addr: 507 pc: 500 sub: 45490 op: 125
        if (_i_45610 > _23907){
            goto LB; // [500] 536
        }
        // SubProg write_makefile_full pc: 507 op: STARTLINE (58)

        /** buildsys.e:762				printf(fh, "\tdel \"%s\"" & HOSTNL, { generated_files[i] })*/
        // SubProg write_makefile_full pc: 509 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_full pc: 511 op: CONCAT (15)
        Concat((object_ptr)&_23908, _23886, _41HOSTNL_21232);
        // SubProg write_makefile_full pc: 515 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_full pc: 517 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23909 = (object)*(((s1_ptr)_2)->base + _i_45610);
        // SubProg write_makefile_full pc: 521 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23909);
        ((intptr_t*)_2)[1] = _23909;
        _23910 = MAKE_SEQ(_1);
        _23909 = NOVALUE;
        // SubProg write_makefile_full pc: 525 op: PRINTF (38)
        EPrintf(_fh_45495, _23908, _23910);
        DeRefDS(_23908);
        _23908 = NOVALUE;
        DeRefDS(_23910);
        _23910 = NOVALUE;
        // SubProg write_makefile_full pc: 529 op: STARTLINE (58)

        /** buildsys.e:763			end for*/
        // SubProg write_makefile_full pc: 531 op: ENDFOR_INT_UP1 (54)
        _i_45610 = _i_45610 + 1;
        goto LA; // [531] 507
LB: // addr: 536 pc: 531 sub: 45490 op: 54
        ;
    }
    // SubProg write_makefile_full pc: 536 op: STARTLINE (58)

    /** buildsys.e:764			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 538 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 540 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 543 op: STARTLINE (58)

    /** buildsys.e:765			puts(fh, ".c.obj : .autodepend" & HOSTNL)*/
    // SubProg write_makefile_full pc: 545 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 547 op: CONCAT (15)
    Concat((object_ptr)&_23912, _23911, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 551 op: PUTS (44)
    EPuts(_fh_45495, _23912); // DJP 
    DeRefDS(_23912);
    _23912 = NOVALUE;
    // SubProg write_makefile_full pc: 554 op: STARTLINE (58)

    /** buildsys.e:766			puts(fh, "\t$(CC) $(CFLAGS) $<" & HOSTNL)*/
    // SubProg write_makefile_full pc: 556 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 558 op: CONCAT (15)
    Concat((object_ptr)&_23914, _23913, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 562 op: PUTS (44)
    EPuts(_fh_45495, _23914); // DJP 
    DeRefDS(_23914);
    _23914 = NOVALUE;
    // SubProg write_makefile_full pc: 565 op: STARTLINE (58)

    /** buildsys.e:767			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 567 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 569 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 572 op: ELSE (23)
    goto LC; // [572] 933
    // SubProg write_makefile_full pc: 574 op: NOP1 (159)
L3: // addr: 575 pc: 574 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 575 op: STARTLINE (58)

    /** buildsys.e:770			printf(fh, "RUNTIME_LIBRARY=%s\n", { settings[SETUP_RUNTIME_LIBRARY] } )*/
    // SubProg write_makefile_full pc: 577 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23916 = (object)*(((s1_ptr)_2)->base + 9);
    // SubProg write_makefile_full pc: 581 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23916);
    ((intptr_t*)_2)[1] = _23916;
    _23917 = MAKE_SEQ(_1);
    _23916 = NOVALUE;
    // SubProg write_makefile_full pc: 585 op: PRINTF (38)
    EPrintf(_fh_45495, _23915, _23917);
    DeRefDS(_23917);
    _23917 = NOVALUE;
    // SubProg write_makefile_full pc: 589 op: STARTLINE (58)

    /** buildsys.e:771			printf(fh, "%s: $(%s_OBJECTS) $(RUNTIME_LIBRARY) %s " & HOSTNL, { adjust_for_build_file(exe_name[D_ALTNAME]), upper(file0), rc_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 591 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 593 op: CONCAT (15)
    Concat((object_ptr)&_23919, _23918, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 599 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 601 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23920 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 605 op: PROC (27)
    Ref(_23920);
    _23921 = _56adjust_for_build_file(_23920);
    _23920 = NOVALUE;
    // SubProg write_makefile_full pc: 609 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 611 op: PROC (27)
    RefDS(_58file0_44053);
    _23922 = _17upper(_58file0_44053);
    // SubProg write_makefile_full pc: 615 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 617 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 619 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _23923 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 623 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23921;
    ((intptr_t*)_2)[2] = _23922;
    Ref(_23923);
    ((intptr_t*)_2)[3] = _23923;
    _23924 = MAKE_SEQ(_1);
    _23923 = NOVALUE;
    _23922 = NOVALUE;
    _23921 = NOVALUE;
    // SubProg write_makefile_full pc: 629 op: PRINTF (38)
    EPrintf(_fh_45495, _23919, _23924);
    DeRefDS(_23919);
    _23919 = NOVALUE;
    DeRefDS(_23924);
    _23924 = NOVALUE;
    // SubProg write_makefile_full pc: 633 op: STARTLINE (58)

    /** buildsys.e:772			if length(rc_file[D_ALTNAME]) then*/
    // SubProg write_makefile_full pc: 635 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 637 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 639 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _23925 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 643 op: LENGTH (42)
    if (IS_SEQUENCE(_23925)){
            _23926 = SEQ_PTR(_23925)->length;
    }
    else {
        _23926 = 1;
    }
    _23925 = NOVALUE;
    // SubProg write_makefile_full pc: 646 op: IF (20)
    if (_23926 == 0)
    {
        _23926 = NOVALUE;
        goto LD; // [646] 690
    }
    else{
        _23926 = NOVALUE;
    }
    // SubProg write_makefile_full pc: 649 op: STARTLINE (58)

    /** buildsys.e:773				writef(fh, "\t" & settings[SETUP_RC_COMPILER] & HOSTNL, { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 651 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45492);
    _23927 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg write_makefile_full pc: 655 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 657 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _41HOSTNL_21232;
        concat_list[1] = _23927;
        concat_list[2] = _23874;
        Concat_N((object_ptr)&_23928, concat_list, 3);
    }
    _23927 = NOVALUE;
    // SubProg write_makefile_full pc: 663 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 665 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 667 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _23929 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 673 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 675 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23930 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 679 op: RIGHT_BRACE_2 (85)
    Ref(_23930);
    Ref(_23929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23929;
    ((intptr_t *)_2)[2] = _23930;
    _23931 = MAKE_SEQ(_1);
    _23930 = NOVALUE;
    _23929 = NOVALUE;
    // SubProg write_makefile_full pc: 683 op: PROC (27)
    _8writef(_fh_45495, _23928, _23931, 0);
    _23928 = NOVALUE;
    _23931 = NOVALUE;
    // SubProg write_makefile_full pc: 689 op: NOP1 (159)
LD: // addr: 690 pc: 689 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 690 op: STARTLINE (58)

    /** buildsys.e:775			printf(fh, "\t$(LINKER) -o %s $(%s_OBJECTS) %s $(LFLAGS)" & HOSTNL, {*/
    // SubProg write_makefile_full pc: 692 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 694 op: CONCAT (15)
    Concat((object_ptr)&_23933, _23932, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 698 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 700 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 702 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23934 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 706 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 708 op: PROC (27)
    RefDS(_58file0_44053);
    _23935 = _17upper(_58file0_44053);
    // SubProg write_makefile_full pc: 712 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 714 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 716 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23936 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 720 op: LENGTH (42)
    if (IS_SEQUENCE(_23936)){
            _23937 = SEQ_PTR(_23936)->length;
    }
    else {
        _23937 = 1;
    }
    _23936 = NOVALUE;
    // SubProg write_makefile_full pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 725 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 727 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23938 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 731 op: PROC (27)
    Ref(_23938);
    RefDS(_21933);
    _23939 = _57iif(_23937, _23938, _21933);
    _23937 = NOVALUE;
    _23938 = NOVALUE;
    // SubProg write_makefile_full pc: 737 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23934);
    ((intptr_t*)_2)[1] = _23934;
    ((intptr_t*)_2)[2] = _23935;
    ((intptr_t*)_2)[3] = _23939;
    _23940 = MAKE_SEQ(_1);
    _23939 = NOVALUE;
    _23935 = NOVALUE;
    _23934 = NOVALUE;
    // SubProg write_makefile_full pc: 743 op: PRINTF (38)
    EPrintf(_fh_45495, _23933, _23940);
    DeRefDS(_23933);
    _23933 = NOVALUE;
    DeRefDS(_23940);
    _23940 = NOVALUE;
    // SubProg write_makefile_full pc: 747 op: STARTLINE (58)

    /** buildsys.e:777			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 749 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 751 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 754 op: STARTLINE (58)

    /** buildsys.e:778			printf(fh, ".PHONY: %s-clean %s-clean-all" & HOSTNL, { file0, file0 })*/
    // SubProg write_makefile_full pc: 756 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 758 op: CONCAT (15)
    Concat((object_ptr)&_23942, _23941, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 762 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 764 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 766 op: RIGHT_BRACE_2 (85)
    RefDS(_58file0_44053);
    RefDS(_58file0_44053);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _58file0_44053;
    ((intptr_t *)_2)[2] = _58file0_44053;
    _23943 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 770 op: PRINTF (38)
    EPrintf(_fh_45495, _23942, _23943);
    DeRefDS(_23942);
    _23942 = NOVALUE;
    DeRefDS(_23943);
    _23943 = NOVALUE;
    // SubProg write_makefile_full pc: 774 op: STARTLINE (58)

    /** buildsys.e:779			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 778 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 781 op: STARTLINE (58)

    /** buildsys.e:780			printf(fh, "%s-clean:" & HOSTNL, { file0 })*/
    // SubProg write_makefile_full pc: 783 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 785 op: CONCAT (15)
    Concat((object_ptr)&_23945, _23944, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 789 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 791 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_58file0_44053);
    ((intptr_t*)_2)[1] = _58file0_44053;
    _23946 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 795 op: PRINTF (38)
    EPrintf(_fh_45495, _23945, _23946);
    DeRefDS(_23945);
    _23945 = NOVALUE;
    DeRefDS(_23946);
    _23946 = NOVALUE;
    // SubProg write_makefile_full pc: 799 op: STARTLINE (58)

    /** buildsys.e:781			printf(fh, "\trm -rf $(%s_OBJECTS) %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 803 op: CONCAT (15)
    Concat((object_ptr)&_23948, _23947, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 807 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 809 op: PROC (27)
    RefDS(_58file0_44053);
    _23949 = _17upper(_58file0_44053);
    // SubProg write_makefile_full pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 817 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23950 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 821 op: RIGHT_BRACE_2 (85)
    Ref(_23950);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23949;
    ((intptr_t *)_2)[2] = _23950;
    _23951 = MAKE_SEQ(_1);
    _23950 = NOVALUE;
    _23949 = NOVALUE;
    // SubProg write_makefile_full pc: 825 op: PRINTF (38)
    EPrintf(_fh_45495, _23948, _23951);
    DeRefDS(_23948);
    _23948 = NOVALUE;
    DeRefDS(_23951);
    _23951 = NOVALUE;
    // SubProg write_makefile_full pc: 829 op: STARTLINE (58)

    /** buildsys.e:782			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 831 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 833 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 836 op: STARTLINE (58)

    /** buildsys.e:783			printf(fh, "%s-clean-all: %s-clean" & HOSTNL, { file0, file0 })*/
    // SubProg write_makefile_full pc: 838 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 840 op: CONCAT (15)
    Concat((object_ptr)&_23953, _23952, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 844 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 846 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 848 op: RIGHT_BRACE_2 (85)
    RefDS(_58file0_44053);
    RefDS(_58file0_44053);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _58file0_44053;
    ((intptr_t *)_2)[2] = _58file0_44053;
    _23954 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 852 op: PRINTF (38)
    EPrintf(_fh_45495, _23953, _23954);
    DeRefDS(_23953);
    _23953 = NOVALUE;
    DeRefDS(_23954);
    _23954 = NOVALUE;
    // SubProg write_makefile_full pc: 856 op: STARTLINE (58)

    /** buildsys.e:784			printf(fh, "\trm -rf $(%s_SOURCES) %s %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 860 op: CONCAT (15)
    Concat((object_ptr)&_23956, _23955, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 864 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 866 op: PROC (27)
    RefDS(_58file0_44053);
    _23957 = _17upper(_58file0_44053);
    // SubProg write_makefile_full pc: 870 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 872 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 874 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _23958 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 878 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 880 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 882 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _23959 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 886 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23957;
    Ref(_23958);
    ((intptr_t*)_2)[2] = _23958;
    Ref(_23959);
    ((intptr_t*)_2)[3] = _23959;
    _23960 = MAKE_SEQ(_1);
    _23959 = NOVALUE;
    _23958 = NOVALUE;
    _23957 = NOVALUE;
    // SubProg write_makefile_full pc: 892 op: PRINTF (38)
    EPrintf(_fh_45495, _23956, _23960);
    DeRefDS(_23956);
    _23956 = NOVALUE;
    DeRefDS(_23960);
    _23960 = NOVALUE;
    // SubProg write_makefile_full pc: 896 op: STARTLINE (58)

    /** buildsys.e:785			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 898 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 900 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 903 op: STARTLINE (58)

    /** buildsys.e:786			puts(fh, "%.o: %.c" & HOSTNL)*/
    // SubProg write_makefile_full pc: 905 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 907 op: CONCAT (15)
    Concat((object_ptr)&_23962, _23961, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 911 op: PUTS (44)
    EPuts(_fh_45495, _23962); // DJP 
    DeRefDS(_23962);
    _23962 = NOVALUE;
    // SubProg write_makefile_full pc: 914 op: STARTLINE (58)

    /** buildsys.e:787			puts(fh, "\t$(CC) $(CFLAGS) $*.c -o $*.o" & HOSTNL)*/
    // SubProg write_makefile_full pc: 916 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 918 op: CONCAT (15)
    Concat((object_ptr)&_23964, _23963, _41HOSTNL_21232);
    // SubProg write_makefile_full pc: 922 op: PUTS (44)
    EPuts(_fh_45495, _23964); // DJP 
    DeRefDS(_23964);
    _23964 = NOVALUE;
    // SubProg write_makefile_full pc: 925 op: STARTLINE (58)

    /** buildsys.e:788			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 927 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 929 op: PUTS (44)
    EPuts(_fh_45495, _41HOSTNL_21232); // DJP 
    // SubProg write_makefile_full pc: 932 op: NOP1 (159)
LC: // addr: 933 pc: 932 sub: 45490 op: 159
    // SubProg write_makefile_full pc: 933 op: STARTLINE (58)

    /** buildsys.e:791		close(fh)*/
    // SubProg write_makefile_full pc: 935 op: CLOSE (86)
    EClose(_fh_45495);
    // SubProg write_makefile_full pc: 937 op: STARTLINE (58)

    /** buildsys.e:792	end procedure*/
    // SubProg write_makefile_full pc: 939 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_full

// block var settings_45492
    DeRef(_settings_45492);

// block var fh_45495
    _23869 = NOVALUE;
    _23884 = NOVALUE;
    _23936 = NOVALUE;
    _23902 = NOVALUE;
    _23925 = NOVALUE;
    _23872 = NOVALUE;
    return;
    // SubProg write_makefile_full pc: 942 op: BADRETURNF (43)
    ;
}


void _56write_makefile_partial()
{
    object _settings_45721 = NOVALUE;
    object _fh_45723 = NOVALUE;
// skipping _23967  name type: 0
    object _23966 = NOVALUE; // 45726 23966
// skipping _23965  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_partial pc: 1 op: STARTLINE (58)

    /** buildsys.e:798		sequence settings = setup_build()*/
    // SubProg write_makefile_partial pc: 3 op: PROC (27)
    _0 = _settings_45721;
    _settings_45721 = _56setup_build();
    DeRef(_0);
    // SubProg write_makefile_partial pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_makefile_partial pc: 8 op: STARTLINE (58)

    /** buildsys.e:799		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    // SubProg write_makefile_partial pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_partial pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_partial pc: 14 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23840;
        concat_list[1] = _58file0_44053;
        concat_list[2] = _58output_dir_42100;
        Concat_N((object_ptr)&_23966, concat_list, 3);
    }
    // SubProg write_makefile_partial pc: 20 op: OPEN (37)
    _fh_45723 = EOpen(_23966, _23758, 0);
    DeRefDS(_23966);
    _23966 = NOVALUE;
    // SubProg write_makefile_partial pc: 25 op: STARTLINE (58)

    /** buildsys.e:801		write_makefile_srcobj_list(fh)*/
    // SubProg write_makefile_partial pc: 27 op: PROC (27)
    _56write_makefile_srcobj_list(_fh_45723);
    // SubProg write_makefile_partial pc: 30 op: STARTLINE (58)

    /** buildsys.e:803		close(fh)*/
    // SubProg write_makefile_partial pc: 32 op: CLOSE (86)
    EClose(_fh_45723);
    // SubProg write_makefile_partial pc: 34 op: STARTLINE (58)

    /** buildsys.e:804	end procedure*/
    // SubProg write_makefile_partial pc: 36 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_partial

// block var settings_45721
    DeRefDS(_settings_45721);

// block var fh_45723
    return;
    // SubProg write_makefile_partial pc: 39 op: BADRETURNF (43)
    ;
}


void _56build_direct(object _link_only_45730, object _the_file0_45731)
{
    object _cmd_45737 = NOVALUE;
    object _objs_45738 = NOVALUE;
    object _settings_45739 = NOVALUE;
    object _cwd_45741 = NOVALUE;
    object _status_45744 = NOVALUE;
    object _link_files_45773 = NOVALUE;
    object _pdone_45799 = NOVALUE;
    object _files_45845 = NOVALUE;
    object _31703 = NOVALUE; // 63911 31703
    object _31702 = NOVALUE; // 63910 31702
    object _31701 = NOVALUE; // 63909 31701
    object _31700 = NOVALUE; // 63908 31700
    object _31699 = NOVALUE; // 63907 31699
    object _31698 = NOVALUE; // 63906 31698
    object _31697 = NOVALUE; // 63905 31697
    object _24114 = NOVALUE; // 46008 24114
    object _24113 = NOVALUE; // 46007 24113
// skipping _24112  name type: 0
    object _24111 = NOVALUE; // 46002 24111
    object _24110 = NOVALUE; // 45996 24110
    object _24109 = NOVALUE; // 45993 24109
    object _24108 = NOVALUE; // 45992 24108
    object _24107 = NOVALUE; // 45989 24107
    object _24106 = NOVALUE; // 45986 24106
    object _24105 = NOVALUE; // 45985 24105
    object _24104 = NOVALUE; // 45980 24104
// skipping _24103  name type: 0
    object _24102 = NOVALUE; // 45973 24102
    object _24101 = NOVALUE; // 45971 24101
    object _24100 = NOVALUE; // 45970 24100
    object _24099 = NOVALUE; // 45968 24099
// skipping _24098  name type: 0
// skipping _24097  name type: 0
// skipping _24096  name type: 0
    object _24095 = NOVALUE; // 45961 24095
    object _24094 = NOVALUE; // 45960 24094
    object _24093 = NOVALUE; // 45958 24093
    object _24092 = NOVALUE; // 45956 24092
    object _24091 = NOVALUE; // 45954 24091
    object _24090 = NOVALUE; // 45953 24090
    object _24089 = NOVALUE; // 45952 24089
    object _24088 = NOVALUE; // 45951 24088
    object _24087 = NOVALUE; // 45950 24087
    object _24086 = NOVALUE; // 45949 24086
    object _24085 = NOVALUE; // 45948 24085
    object _24084 = NOVALUE; // 45947 24084
    object _24083 = NOVALUE; // 45944 24083
    object _24082 = NOVALUE; // 45942 24082
    object _24081 = NOVALUE; // 45941 24081
// skipping _24080  name type: 0
// skipping _24079  name type: 0
    object _24078 = NOVALUE; // 45935 24078
    object _24077 = NOVALUE; // 45932 24077
    object _24076 = NOVALUE; // 45931 24076
    object _24075 = NOVALUE; // 45930 24075
// skipping _24074  name type: 0
// skipping _24073  name type: 0
    object _24072 = NOVALUE; // 45920 24072
// skipping _24071  name type: 0
    object _24070 = NOVALUE; // 45916 24070
    object _24069 = NOVALUE; // 45915 24069
    object _24068 = NOVALUE; // 45914 24068
    object _24067 = NOVALUE; // 45912 24067
    object _24066 = NOVALUE; // 45911 24066
    object _24065 = NOVALUE; // 45909 24065
// skipping _24063  name type: 0
    object _24062 = NOVALUE; // 45905 24062
    object _24061 = NOVALUE; // 45903 24061
    object _24057 = NOVALUE; // 45898 24057
    object _24056 = NOVALUE; // 45896 24056
    object _24055 = NOVALUE; // 45895 24055
// skipping _24054  name type: 0
// skipping _24053  name type: 0
// skipping _24052  name type: 0
    object _24051 = NOVALUE; // 45888 24051
    object _24050 = NOVALUE; // 45887 24050
    object _24049 = NOVALUE; // 45885 24049
    object _24048 = NOVALUE; // 45883 24048
    object _24047 = NOVALUE; // 45882 24047
    object _24046 = NOVALUE; // 45881 24046
    object _24045 = NOVALUE; // 45880 24045
    object _24044 = NOVALUE; // 45879 24044
    object _24043 = NOVALUE; // 45878 24043
    object _24042 = NOVALUE; // 45877 24042
    object _24041 = NOVALUE; // 45876 24041
    object _24040 = NOVALUE; // 45873 24040
// skipping _24039  name type: 0
    object _24038 = NOVALUE; // 45867 24038
    object _24037 = NOVALUE; // 45864 24037
    object _24036 = NOVALUE; // 45863 24036
    object _24035 = NOVALUE; // 45862 24035
    object _24034 = NOVALUE; // 45861 24034
// skipping _24033  name type: 0
    object _24032 = NOVALUE; // 45857 24032
    object _24031 = NOVALUE; // 45856 24031
    object _24030 = NOVALUE; // 45855 24030
    object _24029 = NOVALUE; // 45854 24029
    object _24028 = NOVALUE; // 45852 24028
// skipping _24027  name type: 0
    object _24026 = NOVALUE; // 45848 24026
// skipping _24025  name type: 0
    object _24024 = NOVALUE; // 45842 24024
    object _24023 = NOVALUE; // 45841 24023
    object _24022 = NOVALUE; // 45839 24022
    object _24021 = NOVALUE; // 45838 24021
    object _24019 = NOVALUE; // 45834 24019
    object _24018 = NOVALUE; // 45832 24018
    object _24017 = NOVALUE; // 45831 24017
// skipping _24016  name type: 0
// skipping _24015  name type: 0
    object _24014 = NOVALUE; // 45825 24014
    object _24013 = NOVALUE; // 45822 24013
    object _24012 = NOVALUE; // 45821 24012
    object _24011 = NOVALUE; // 45817 24011
    object _24010 = NOVALUE; // 45816 24010
    object _24009 = NOVALUE; // 45813 24009
    object _24008 = NOVALUE; // 45812 24008
    object _24007 = NOVALUE; // 45811 24007
    object _24006 = NOVALUE; // 45810 24006
    object _24005 = NOVALUE; // 45808 24005
// skipping _24004  name type: 0
// skipping _24003  name type: 0
    object _24002 = NOVALUE; // 45802 24002
    object _24001 = NOVALUE; // 45801 24001
// skipping _24000  name type: 0
// skipping _23999  name type: 0
    object _23998 = NOVALUE; // 45794 23998
// skipping _23997  name type: 0
    object _23996 = NOVALUE; // 45791 23996
    object _23995 = NOVALUE; // 45790 23995
    object _23994 = NOVALUE; // 45788 23994
    object _23993 = NOVALUE; // 45787 23993
// skipping _23991  name type: 0
    object _23990 = NOVALUE; // 45784 23990
    object _23989 = NOVALUE; // 45783 23989
    object _23988 = NOVALUE; // 45782 23988
    object _23987 = NOVALUE; // 45779 23987
// skipping _23986  name type: 0
    object _23985 = NOVALUE; // 45770 23985
    object _23984 = NOVALUE; // 45769 23984
    object _23983 = NOVALUE; // 45767 23983
    object _23982 = NOVALUE; // 45766 23982
    object _23981 = NOVALUE; // 45763 23981
// skipping _23979  name type: 0
    object _23978 = NOVALUE; // 45756 23978
// skipping _23976  name type: 0
// skipping _23973  name type: 0
    object _23972 = NOVALUE; // 45745 23972
// skipping _23971  name type: 0
// skipping _23970  name type: 0
// skipping _23969  name type: 0
    object _23968 = NOVALUE; // 45733 23968
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg build_direct pc: 1 op: INTEGER_CHECK (96)
    // SubProg build_direct pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 5 op: STARTLINE (58)

    /** buildsys.e:810		if length(the_file0) then*/
    // SubProg build_direct pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_the_file0_45731)){
            _23968 = SEQ_PTR(_the_file0_45731)->length;
    }
    else {
        _23968 = 1;
    }
    // SubProg build_direct pc: 10 op: IF (20)
    if (_23968 == 0)
    {
        _23968 = NOVALUE;
        goto L1; // [10] 22
    }
    else{
        _23968 = NOVALUE;
    }
    // SubProg build_direct pc: 13 op: STARTLINE (58)

    /** buildsys.e:811			file0 = filebase(the_file0)*/
    // SubProg build_direct pc: 15 op: PROC (27)
    RefDS(_the_file0_45731);
    _0 = _20filebase(_the_file0_45731);
    DeRef(_58file0_44053);
    _58file0_44053 = _0;
    // SubProg build_direct pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 45728 op: 159
    // SubProg build_direct pc: 22 op: STARTLINE (58)

    /** buildsys.e:813		sequence cmd, objs = "", settings = setup_build(), cwd = current_dir()*/
    // SubProg build_direct pc: 24 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_objs_45738);
    _objs_45738 = _21933;
    // SubProg build_direct pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 29 op: PROC (27)
    _0 = _settings_45739;
    _settings_45739 = _56setup_build();
    DeRef(_0);
    // SubProg build_direct pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 34 op: PROC (27)
    _0 = _cwd_45741;
    _cwd_45741 = _20current_dir();
    DeRef(_0);
    // SubProg build_direct pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 39 op: STARTLINE (58)

    /** buildsys.e:814		integer status*/
    // SubProg build_direct pc: 41 op: STARTLINE (58)

    /** buildsys.e:816		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg build_direct pc: 43 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45739);
    _23972 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg build_direct pc: 47 op: PROC (27)
    Ref(_23972);
    _56ensure_exename(_23972);
    _23972 = NOVALUE;
    // SubProg build_direct pc: 50 op: STARTLINE (58)

    /** buildsys.e:818		if not link_only then*/
    // SubProg build_direct pc: 52 op: NOT_IFW (108)
    if (_link_only_45730 != 0)
    goto L2; // [52] 120
    // SubProg build_direct pc: 55 op: STARTLINE (58)

    /** buildsys.e:819			switch compiler_type do*/
    // SubProg build_direct pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 59 op: SWITCH_I (193)
    _0 = _56compiler_type_44893;
    switch ( _0 ){ 
        // SubProg build_direct pc: 64 op: STARTLINE (58)

        /** buildsys.e:820				case COMPILER_GCC then*/
        // SubProg build_direct pc: 66 op: CASE (186)
        case 1:
        // SubProg build_direct pc: 68 op: STARTLINE (58)

        /** buildsys.e:821					if not silent then*/
        // SubProg build_direct pc: 70 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 72 op: NOT_IFW (108)
        if (_36silent_16551 != 0)
        goto L3; // [72] 119
        // SubProg build_direct pc: 75 op: STARTLINE (58)

        /** buildsys.e:822						ShowMsg(1, 176, {"GCC"})*/
        // SubProg build_direct pc: 77 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23977);
        ((intptr_t*)_2)[1] = _23977;
        _23978 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 81 op: PROC (27)
        _42ShowMsg(1, 176, _23978, 1);
        _23978 = NOVALUE;
        // SubProg build_direct pc: 87 op: NOP1 (159)
        // SubProg build_direct pc: 88 op: ELSE (23)
        goto L3; // [88] 119
        // SubProg build_direct pc: 90 op: STARTLINE (58)

        /** buildsys.e:825				case COMPILER_WATCOM then*/
        // SubProg build_direct pc: 92 op: CASE (186)
        case 2:
        // SubProg build_direct pc: 94 op: STARTLINE (58)

        /** buildsys.e:826					write_objlink_file()*/
        // SubProg build_direct pc: 96 op: PROC (27)
        _56write_objlink_file();
        // SubProg build_direct pc: 98 op: STARTLINE (58)

        /** buildsys.e:828					if not silent then*/
        // SubProg build_direct pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 102 op: NOT_IFW (108)
        if (_36silent_16551 != 0)
        goto L4; // [102] 118
        // SubProg build_direct pc: 105 op: STARTLINE (58)

        /** buildsys.e:829						ShowMsg(1, 176, {"Watcom"})*/
        // SubProg build_direct pc: 107 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23980);
        ((intptr_t*)_2)[1] = _23980;
        _23981 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 111 op: PROC (27)
        _42ShowMsg(1, 176, _23981, 1);
        _23981 = NOVALUE;
        // SubProg build_direct pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 45728 op: 159
        // SubProg build_direct pc: 118 op: NOPSWITCH (187)
    ;}L3: // addr: 119 pc: 118 sub: 45728 op: 187
    // SubProg build_direct pc: 119 op: NOP1 (159)
L2: // addr: 120 pc: 119 sub: 45728 op: 159
    // SubProg build_direct pc: 120 op: STARTLINE (58)

    /** buildsys.e:834		if sequence(output_dir) and length(output_dir) > 0 then*/
    // SubProg build_direct pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 124 op: IS_A_SEQUENCE (68)
    _23982 = 1;
    // SubProg build_direct pc: 127 op: SC1_AND_IF (146)
    if (_23982 == 0) {
        goto L5; // [127] 155
    }
    // SubProg build_direct pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 133 op: LENGTH (42)
    if (IS_SEQUENCE(_58output_dir_42100)){
            _23984 = SEQ_PTR(_58output_dir_42100)->length;
    }
    else {
        _23984 = 1;
    }
    // SubProg build_direct pc: 136 op: GREATER (6)
    _23985 = (_23984 > 0);
    _23984 = NOVALUE;
    // SubProg build_direct pc: 140 op: NOP1 (159)
    // SubProg build_direct pc: 141 op: IF (20)
    if (_23985 == 0)
    {
        DeRef(_23985);
        _23985 = NOVALUE;
        goto L5; // [141] 155
    }
    else{
        DeRef(_23985);
        _23985 = NOVALUE;
    }
    // SubProg build_direct pc: 144 op: STARTLINE (58)

    /** buildsys.e:835			chdir(output_dir)*/
    // SubProg build_direct pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 148 op: PROC (27)
    RefDS(_58output_dir_42100);
    _31703 = _20chdir(_58output_dir_42100);
    // SubProg build_direct pc: 152 op: DEREF_TEMP (208)
    DeRef(_31703);
    _31703 = NOVALUE;
    // SubProg build_direct pc: 154 op: NOP1 (159)
L5: // addr: 155 pc: 154 sub: 45728 op: 159
    // SubProg build_direct pc: 155 op: STARTLINE (58)

    /** buildsys.e:838		sequence link_files = {}*/
    // SubProg build_direct pc: 157 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_link_files_45773);
    _link_files_45773 = _21933;
    // SubProg build_direct pc: 160 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 162 op: STARTLINE (58)

    /** buildsys.e:840		if not link_only then*/
    // SubProg build_direct pc: 164 op: NOT_IFW (108)
    if (_link_only_45730 != 0)
    goto L6; // [164] 468
    // SubProg build_direct pc: 167 op: STARTLINE (58)

    /** buildsys.e:841			for i = 1 to length(generated_files) do*/
    // SubProg build_direct pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 171 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23987 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23987 = 1;
    }
    // SubProg build_direct pc: 174 op: FOR_I (125)
    {
        object _i_45777;
        _i_45777 = 1;
L7: // addr: 181 pc: 174 sub: 45728 op: 125
        if (_i_45777 > _23987){
            goto L8; // [174] 465
        }
        // SubProg build_direct pc: 181 op: STARTLINE (58)

        /** buildsys.e:842				if generated_files[i][$] = 'c' then*/
        // SubProg build_direct pc: 183 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 185 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23988 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 189 op: LENGTH (42)
        if (IS_SEQUENCE(_23988)){
                _23989 = SEQ_PTR(_23988)->length;
        }
        else {
            _23989 = 1;
        }
        // SubProg build_direct pc: 192 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23988);
        _23990 = (object)*(((s1_ptr)_2)->base + _23989);
        _23988 = NOVALUE;
        // SubProg build_direct pc: 196 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _23990, 99)){
            _23990 = NOVALUE;
            goto L9; // [196] 424
        }
        _23990 = NOVALUE;
        // SubProg build_direct pc: 200 op: STARTLINE (58)

        /** buildsys.e:843					cmd = sprintf("%s %s %s", { settings[SETUP_CEXE], settings[SETUP_CFLAGS],*/
        // SubProg build_direct pc: 202 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45739);
        _23993 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg build_direct pc: 206 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45739);
        _23994 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg build_direct pc: 210 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23995 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 216 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_23993);
        ((intptr_t*)_2)[1] = _23993;
        Ref(_23994);
        ((intptr_t*)_2)[2] = _23994;
        RefDS(_23995);
        ((intptr_t*)_2)[3] = _23995;
        _23996 = MAKE_SEQ(_1);
        _23995 = NOVALUE;
        _23994 = NOVALUE;
        _23993 = NOVALUE;
        // SubProg build_direct pc: 222 op: SPRINTF (53)
        DeRef(_cmd_45737);
        _cmd_45737 = EPrintf(-9999999, _23992, _23996);
        DeRefDS(_23996);
        _23996 = NOVALUE;
        // SubProg build_direct pc: 226 op: STARTLINE (58)

        /** buildsys.e:846					link_files = append(link_files, generated_files[i])*/
        // SubProg build_direct pc: 228 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 230 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _23998 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 234 op: APPEND (35)
        RefDS(_23998);
        Append(&_link_files_45773, _link_files_45773, _23998);
        _23998 = NOVALUE;
        // SubProg build_direct pc: 238 op: STARTLINE (58)

        /** buildsys.e:848					if not silent then*/
        // SubProg build_direct pc: 240 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 242 op: NOT_IFW (108)
        if (_36silent_16551 != 0)
        goto LA; // [242] 364
        // SubProg build_direct pc: 245 op: STARTLINE (58)

        /** buildsys.e:849						atom pdone = 100 * (i / length(generated_files))*/
        // SubProg build_direct pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 249 op: LENGTH (42)
        if (IS_SEQUENCE(_58generated_files_42090)){
                _24001 = SEQ_PTR(_58generated_files_42090)->length;
        }
        else {
            _24001 = 1;
        }
        // SubProg build_direct pc: 252 op: DIVIDE (14)
        _24002 = (_i_45777 % _24001) ? NewDouble((eudouble)_i_45777 / _24001) : (_i_45777 / _24001);
        _24001 = NOVALUE;
        // SubProg build_direct pc: 256 op: MULTIPLY (13)
        DeRef(_pdone_45799);
        if (IS_ATOM_INT(_24002)) {
            if (_24002 <= INT15 && _24002 >= -INT15){
                _pdone_45799 = 100 * _24002;
            }
            else{
                _pdone_45799 = NewDouble(100 * (eudouble)_24002);
            }
        }
        else {
            _pdone_45799 = NewDouble((eudouble)100 * DBL_PTR(_24002)->dbl);
        }
        DeRef(_24002);
        _24002 = NOVALUE;
        // SubProg build_direct pc: 260 op: STARTLINE (58)

        /** buildsys.e:850						if not verbose then*/
        // SubProg build_direct pc: 262 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 264 op: NOT_IFW (108)
        if (_36verbose_16554 != 0)
        goto LB; // [264] 350
        // SubProg build_direct pc: 267 op: STARTLINE (58)

        /** buildsys.e:853							if 0 and outdated_files[i] = 0 and force_build = 0 then*/
        // SubProg build_direct pc: 269 op: SC1_AND (141)
        if (0 == 0) {
            _24005 = 0;
            goto LC; // [269] 287
        }
        // SubProg build_direct pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 275 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58outdated_files_42091);
        _24006 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 279 op: EQUALS (3)
        if (IS_ATOM_INT(_24006)) {
            _24007 = (_24006 == 0);
        }
        else {
            _24007 = binary_op(EQUALS, _24006, 0);
        }
        _24006 = NOVALUE;
        // SubProg build_direct pc: 283 op: SC2_AND (142)
        if (IS_ATOM_INT(_24007))
        _24005 = (_24007 != 0);
        else
        _24005 = DBL_PTR(_24007)->dbl != 0.0;
        // SubProg build_direct pc: 286 op: NOP1 (159)
LC: // addr: 287 pc: 286 sub: 45728 op: 159
        // SubProg build_direct pc: 287 op: SC1_AND_IF (146)
        if (_24005 == 0) {
            goto LD; // [287] 328
        }
        // SubProg build_direct pc: 291 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 293 op: EQUALS (3)
        _24009 = (_56force_build_44915 == 0);
        // SubProg build_direct pc: 297 op: NOP1 (159)
        // SubProg build_direct pc: 298 op: IF (20)
        if (_24009 == 0)
        {
            DeRef(_24009);
            _24009 = NOVALUE;
            goto LD; // [298] 328
        }
        else{
            DeRef(_24009);
            _24009 = NOVALUE;
        }
        // SubProg build_direct pc: 301 op: STARTLINE (58)

        /** buildsys.e:854								ShowMsg(1, 325, { pdone, generated_files[i] })*/
        // SubProg build_direct pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 305 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _24010 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 309 op: RIGHT_BRACE_2 (85)
        RefDS(_24010);
        Ref(_pdone_45799);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45799;
        ((intptr_t *)_2)[2] = _24010;
        _24011 = MAKE_SEQ(_1);
        _24010 = NOVALUE;
        // SubProg build_direct pc: 313 op: PROC (27)
        _42ShowMsg(1, 325, _24011, 1);
        _24011 = NOVALUE;
        // SubProg build_direct pc: 319 op: STARTLINE (58)

        /** buildsys.e:855								continue*/
        // SubProg build_direct pc: 321 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pdone_45799
        DeRef(_pdone_45799);
        _pdone_45799 = NOVALUE;
        // SubProg build_direct pc: 323 op: ELSE (23)
        goto LE; // [323] 460
        // SubProg build_direct pc: 325 op: ELSE (23)
        goto LF; // [325] 363
        // SubProg build_direct pc: 327 op: NOP1 (159)
LD: // addr: 328 pc: 327 sub: 45728 op: 159
        // SubProg build_direct pc: 328 op: STARTLINE (58)

        /** buildsys.e:857								ShowMsg(1, 163, { pdone, generated_files[i] })*/
        // SubProg build_direct pc: 330 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 332 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _24012 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 336 op: RIGHT_BRACE_2 (85)
        RefDS(_24012);
        Ref(_pdone_45799);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45799;
        ((intptr_t *)_2)[2] = _24012;
        _24013 = MAKE_SEQ(_1);
        _24012 = NOVALUE;
        // SubProg build_direct pc: 340 op: PROC (27)
        _42ShowMsg(1, 163, _24013, 1);
        _24013 = NOVALUE;
        // SubProg build_direct pc: 346 op: NOP1 (159)
        // SubProg build_direct pc: 347 op: ELSE (23)
        goto LF; // [347] 363
        // SubProg build_direct pc: 349 op: NOP1 (159)
LB: // addr: 350 pc: 349 sub: 45728 op: 159
        // SubProg build_direct pc: 350 op: STARTLINE (58)

        /** buildsys.e:860							ShowMsg(1, 163, { pdone, cmd })*/
        // SubProg build_direct pc: 352 op: RIGHT_BRACE_2 (85)
        RefDS(_cmd_45737);
        Ref(_pdone_45799);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45799;
        ((intptr_t *)_2)[2] = _cmd_45737;
        _24014 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 356 op: PROC (27)
        _42ShowMsg(1, 163, _24014, 1);
        _24014 = NOVALUE;
        // SubProg build_direct pc: 362 op: NOP1 (159)
LF: // addr: 363 pc: 362 sub: 45728 op: 159
        // SubProg build_direct pc: 363 op: NOP1 (159)
LA: // addr: 364 pc: 363 sub: 45728 op: 159
        // SubProg build_direct pc: 364 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pdone_45799
        DeRef(_pdone_45799);
        _pdone_45799 = NOVALUE;
        // SubProg build_direct pc: 366 op: STARTLINE (58)

        /** buildsys.e:865					status = system_exec(cmd, 0)*/
        // SubProg build_direct pc: 368 op: SYSTEM_EXEC (154)
        _status_45744 = system_exec_call(_cmd_45737, 0);
        // SubProg build_direct pc: 372 op: STARTLINE (58)

        /** buildsys.e:866					if status != 0 then*/
        // SubProg build_direct pc: 374 op: NOTEQ_IFW_I (122)
        if (_status_45744 == 0)
        goto L10; // [374] 458
        // SubProg build_direct pc: 378 op: STARTLINE (58)

        /** buildsys.e:867						ShowMsg(2, 164, { generated_files[i] })*/
        // SubProg build_direct pc: 380 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 382 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _24017 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 386 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24017);
        ((intptr_t*)_2)[1] = _24017;
        _24018 = MAKE_SEQ(_1);
        _24017 = NOVALUE;
        // SubProg build_direct pc: 390 op: PROC (27)
        _42ShowMsg(2, 164, _24018, 1);
        _24018 = NOVALUE;
        // SubProg build_direct pc: 396 op: STARTLINE (58)

        /** buildsys.e:868						ShowMsg(2, 165, { status, cmd })*/
        // SubProg build_direct pc: 398 op: RIGHT_BRACE_2 (85)
        RefDS(_cmd_45737);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _status_45744;
        ((intptr_t *)_2)[2] = _cmd_45737;
        _24019 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 402 op: PROC (27)
        _42ShowMsg(2, 165, _24019, 1);
        _24019 = NOVALUE;
        // SubProg build_direct pc: 408 op: STARTLINE (58)

        /** buildsys.e:869						goto "build_direct_cleanup"*/
        // SubProg build_direct pc: 410 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
        // SubProg build_direct pc: 412 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
        // SubProg build_direct pc: 414 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-
        // SubProg build_direct pc: 416 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
        // SubProg build_direct pc: 418 op: GOTO (188)
        goto G11;
        // SubProg build_direct pc: 420 op: NOP1 (159)
        // SubProg build_direct pc: 421 op: ELSE (23)
        goto L10; // [421] 458
        // SubProg build_direct pc: 423 op: NOP1 (159)
L9: // addr: 424 pc: 423 sub: 45728 op: 159
        // SubProg build_direct pc: 424 op: STARTLINE (58)

        /** buildsys.e:871				elsif match(".o", generated_files[i]) then*/
        // SubProg build_direct pc: 426 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 428 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _24021 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 432 op: MATCH_FROM (177)
        _24022 = e_match_from(_23085, _24021, 1);
        _24021 = NOVALUE;
        // SubProg build_direct pc: 437 op: IF (20)
        if (_24022 == 0)
        {
            _24022 = NOVALUE;
            goto L12; // [437] 457
        }
        else{
            _24022 = NOVALUE;
        }
        // SubProg build_direct pc: 440 op: STARTLINE (58)

        /** buildsys.e:872					objs &= " " & generated_files[i]*/
        // SubProg build_direct pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 444 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _24023 = (object)*(((s1_ptr)_2)->base + _i_45777);
        // SubProg build_direct pc: 448 op: CONCAT (15)
        Concat((object_ptr)&_24024, _23325, _24023);
        _24023 = NOVALUE;
        // SubProg build_direct pc: 452 op: CONCAT (15)
        Concat((object_ptr)&_objs_45738, _objs_45738, _24024);
        DeRefDS(_24024);
        _24024 = NOVALUE;
        // SubProg build_direct pc: 456 op: NOP1 (159)
L12: // addr: 457 pc: 456 sub: 45728 op: 159
        // SubProg build_direct pc: 457 op: NOP1 (159)
L10: // addr: 458 pc: 457 sub: 45728 op: 159
        // SubProg build_direct pc: 458 op: STARTLINE (58)

        /** buildsys.e:874			end for*/
        // SubProg build_direct pc: 460 op: ENDFOR_INT_UP1 (54)
LE: // addr: 460 pc: 460 sub: 45728 op: 54
        _i_45777 = _i_45777 + 1;
        goto L7; // [460] 181
L8: // addr: 465 pc: 460 sub: 45728 op: 54
        ;
    }
    // SubProg build_direct pc: 465 op: ELSE (23)
    goto L13; // [465] 527
    // SubProg build_direct pc: 467 op: NOP1 (159)
L6: // addr: 468 pc: 467 sub: 45728 op: 159
    // SubProg build_direct pc: 468 op: STARTLINE (58)

    /** buildsys.e:876			object files = read_lines(file0 & ".bld")*/
    // SubProg build_direct pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 472 op: CONCAT (15)
    Concat((object_ptr)&_24026, _58file0_44053, _23529);
    // SubProg build_direct pc: 476 op: PROC (27)
    _0 = _files_45845;
    _files_45845 = _8read_lines(_24026);
    DeRef(_0);
    _24026 = NOVALUE;
    // SubProg build_direct pc: 480 op: STARTLINE (58)

    /** buildsys.e:877			for i = 1 to length(files) do*/
    // SubProg build_direct pc: 482 op: LENGTH (42)
    if (IS_SEQUENCE(_files_45845)){
            _24028 = SEQ_PTR(_files_45845)->length;
    }
    else {
        _24028 = 1;
    }
    // SubProg build_direct pc: 485 op: FOR_I (125)
    {
        object _i_45851;
        _i_45851 = 1;
L14: // addr: 492 pc: 485 sub: 45728 op: 125
        if (_i_45851 > _24028){
            goto L15; // [485] 524
        }
        // SubProg build_direct pc: 492 op: STARTLINE (58)

        /** buildsys.e:878				objs &= " " & filebase(files[i]) & "." & settings[SETUP_OBJ_EXT]*/
        // SubProg build_direct pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_files_45845);
        _24029 = (object)*(((s1_ptr)_2)->base + _i_45851);
        // SubProg build_direct pc: 498 op: PROC (27)
        Ref(_24029);
        _24030 = _20filebase(_24029);
        _24029 = NOVALUE;
        // SubProg build_direct pc: 502 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45739);
        _24031 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg build_direct pc: 506 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _24031;
            concat_list[1] = _23124;
            concat_list[2] = _24030;
            concat_list[3] = _23325;
            Concat_N((object_ptr)&_24032, concat_list, 4);
        }
        _24031 = NOVALUE;
        DeRef(_24030);
        _24030 = NOVALUE;
        // SubProg build_direct pc: 513 op: CONCAT (15)
        Concat((object_ptr)&_objs_45738, _objs_45738, _24032);
        DeRefDS(_24032);
        _24032 = NOVALUE;
        // SubProg build_direct pc: 517 op: STARTLINE (58)

        /** buildsys.e:879			end for*/
        // SubProg build_direct pc: 519 op: ENDFOR_INT_UP1 (54)
        _i_45851 = _i_45851 + 1;
        goto L14; // [519] 492
L15: // addr: 524 pc: 519 sub: 45728 op: 54
        ;
    }
    // SubProg build_direct pc: 524 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var files_45845
    DeRef(_files_45845);
    _files_45845 = NOVALUE;
    // SubProg build_direct pc: 526 op: NOP1 (159)
L13: // addr: 527 pc: 526 sub: 45728 op: 159
    // SubProg build_direct pc: 527 op: STARTLINE (58)

    /** buildsys.e:882		if keep and not link_only and length(link_files) then*/
    // SubProg build_direct pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 531 op: SC1_AND (141)
    if (_58keep_42093 == 0) {
        _24034 = 0;
        goto L16; // [531] 542
    }
    // SubProg build_direct pc: 535 op: NOT (7)
    _24035 = (_link_only_45730 == 0);
    // SubProg build_direct pc: 538 op: SC2_AND (142)
    _24034 = (_24035 != 0);
    // SubProg build_direct pc: 541 op: NOP1 (159)
L16: // addr: 542 pc: 541 sub: 45728 op: 159
    // SubProg build_direct pc: 542 op: SC1_AND_IF (146)
    if (_24034 == 0) {
        goto L17; // [542] 571
    }
    // SubProg build_direct pc: 546 op: LENGTH (42)
    if (IS_SEQUENCE(_link_files_45773)){
            _24037 = SEQ_PTR(_link_files_45773)->length;
    }
    else {
        _24037 = 1;
    }
    // SubProg build_direct pc: 549 op: NOP1 (159)
    // SubProg build_direct pc: 550 op: IF (20)
    if (_24037 == 0)
    {
        _24037 = NOVALUE;
        goto L17; // [550] 571
    }
    else{
        _24037 = NOVALUE;
    }
    // SubProg build_direct pc: 553 op: STARTLINE (58)

    /** buildsys.e:883			write_lines(file0 & ".bld", link_files)*/
    // SubProg build_direct pc: 555 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 557 op: CONCAT (15)
    Concat((object_ptr)&_24038, _58file0_44053, _23529);
    // SubProg build_direct pc: 561 op: PROC (27)
    RefDS(_link_files_45773);
    _31702 = _8write_lines(_24038, _link_files_45773);
    _24038 = NOVALUE;
    // SubProg build_direct pc: 566 op: DEREF_TEMP (208)
    DeRef(_31702);
    _31702 = NOVALUE;
    // SubProg build_direct pc: 568 op: ELSE (23)
    goto L18; // [568] 595
    // SubProg build_direct pc: 570 op: NOP1 (159)
L17: // addr: 571 pc: 570 sub: 45728 op: 159
    // SubProg build_direct pc: 571 op: STARTLINE (58)

    /** buildsys.e:884		elsif keep = 0 then*/
    // SubProg build_direct pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 575 op: EQUALS_IFW (104)
    if (_58keep_42093 != 0)
    goto L19; // [575] 594
    // SubProg build_direct pc: 579 op: STARTLINE (58)

    /** buildsys.e:886			delete_file(file0 & ".bld")*/
    // SubProg build_direct pc: 581 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 583 op: CONCAT (15)
    Concat((object_ptr)&_24040, _58file0_44053, _23529);
    // SubProg build_direct pc: 587 op: PROC (27)
    _31701 = _20delete_file(_24040);
    _24040 = NOVALUE;
    // SubProg build_direct pc: 591 op: DEREF_TEMP (208)
    DeRef(_31701);
    _31701 = NOVALUE;
    // SubProg build_direct pc: 593 op: NOP1 (159)
L19: // addr: 594 pc: 593 sub: 45728 op: 159
    // SubProg build_direct pc: 594 op: NOP1 (159)
L18: // addr: 595 pc: 594 sub: 45728 op: 159
    // SubProg build_direct pc: 595 op: STARTLINE (58)

    /** buildsys.e:890		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_GCC then*/
    // SubProg build_direct pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 599 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 601 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _24041 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 605 op: LENGTH (42)
    if (IS_SEQUENCE(_24041)){
            _24042 = SEQ_PTR(_24041)->length;
    }
    else {
        _24042 = 1;
    }
    _24041 = NOVALUE;
    // SubProg build_direct pc: 608 op: SC1_AND (141)
    if (_24042 == 0) {
        _24043 = 0;
        goto L1A; // [608] 623
    }
    // SubProg build_direct pc: 612 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45739);
    _24044 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 616 op: LENGTH (42)
    if (IS_SEQUENCE(_24044)){
            _24045 = SEQ_PTR(_24044)->length;
    }
    else {
        _24045 = 1;
    }
    _24044 = NOVALUE;
    // SubProg build_direct pc: 619 op: SC2_AND (142)
    _24043 = (_24045 != 0);
    // SubProg build_direct pc: 622 op: NOP1 (159)
L1A: // addr: 623 pc: 622 sub: 45728 op: 159
    // SubProg build_direct pc: 623 op: SC1_AND_IF (146)
    if (_24043 == 0) {
        goto L1B; // [623] 724
    }
    // SubProg build_direct pc: 627 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 629 op: EQUALS (3)
    _24047 = (_56compiler_type_44893 == 1);
    // SubProg build_direct pc: 633 op: NOP1 (159)
    // SubProg build_direct pc: 634 op: IF (20)
    if (_24047 == 0)
    {
        DeRef(_24047);
        _24047 = NOVALUE;
        goto L1B; // [634] 724
    }
    else{
        DeRef(_24047);
        _24047 = NOVALUE;
    }
    // SubProg build_direct pc: 637 op: STARTLINE (58)

    /** buildsys.e:891			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    // SubProg build_direct pc: 639 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45739);
    _24048 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 645 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 647 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _24049 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 651 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 653 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 655 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _24050 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 659 op: RIGHT_BRACE_2 (85)
    Ref(_24050);
    Ref(_24049);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24049;
    ((intptr_t *)_2)[2] = _24050;
    _24051 = MAKE_SEQ(_1);
    _24050 = NOVALUE;
    _24049 = NOVALUE;
    // SubProg build_direct pc: 663 op: PROC (27)
    Ref(_24048);
    _0 = _cmd_45737;
    _cmd_45737 = _17format(_24048, _24051);
    DeRef(_0);
    _24048 = NOVALUE;
    _24051 = NOVALUE;
    // SubProg build_direct pc: 668 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 670 op: STARTLINE (58)

    /** buildsys.e:892			status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 672 op: SYSTEM_EXEC (154)
    _status_45744 = system_exec_call(_cmd_45737, 0);
    // SubProg build_direct pc: 676 op: STARTLINE (58)

    /** buildsys.e:893			if status != 0 then*/
    // SubProg build_direct pc: 678 op: NOTEQ_IFW_I (122)
    if (_status_45744 == 0)
    goto L1C; // [678] 723
    // SubProg build_direct pc: 682 op: STARTLINE (58)

    /** buildsys.e:894				ShowMsg(2, 350, { rc_file[D_NAME] })*/
    // SubProg build_direct pc: 684 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 686 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 688 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _24055 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 692 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24055);
    ((intptr_t*)_2)[1] = _24055;
    _24056 = MAKE_SEQ(_1);
    _24055 = NOVALUE;
    // SubProg build_direct pc: 696 op: PROC (27)
    _42ShowMsg(2, 350, _24056, 1);
    _24056 = NOVALUE;
    // SubProg build_direct pc: 702 op: STARTLINE (58)

    /** buildsys.e:895				ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 704 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45737);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45744;
    ((intptr_t *)_2)[2] = _cmd_45737;
    _24057 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 708 op: PROC (27)
    _42ShowMsg(2, 169, _24057, 1);
    _24057 = NOVALUE;
    // SubProg build_direct pc: 714 op: STARTLINE (58)

    /** buildsys.e:897				goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 716 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 718 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 720 op: GOTO (188)
    goto G11;
    // SubProg build_direct pc: 722 op: NOP1 (159)
L1C: // addr: 723 pc: 722 sub: 45728 op: 159
    // SubProg build_direct pc: 723 op: NOP1 (159)
L1B: // addr: 724 pc: 723 sub: 45728 op: 159
    // SubProg build_direct pc: 724 op: STARTLINE (58)

    /** buildsys.e:901		switch compiler_type do*/
    // SubProg build_direct pc: 726 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 728 op: SWITCH_I (193)
    _0 = _56compiler_type_44893;
    switch ( _0 ){ 
        // SubProg build_direct pc: 733 op: STARTLINE (58)

        /** buildsys.e:902			case COMPILER_WATCOM then*/
        // SubProg build_direct pc: 735 op: CASE (186)
        case 2:
        // SubProg build_direct pc: 737 op: STARTLINE (58)

        /** buildsys.e:903				cmd = sprintf("%s @%s.lnk", { settings[SETUP_LEXE], file0 })*/
        // SubProg build_direct pc: 739 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45739);
        _24061 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg build_direct pc: 743 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 745 op: RIGHT_BRACE_2 (85)
        RefDS(_58file0_44053);
        Ref(_24061);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _24061;
        ((intptr_t *)_2)[2] = _58file0_44053;
        _24062 = MAKE_SEQ(_1);
        _24061 = NOVALUE;
        // SubProg build_direct pc: 749 op: SPRINTF (53)
        DeRef(_cmd_45737);
        _cmd_45737 = EPrintf(-9999999, _24060, _24062);
        DeRefDS(_24062);
        _24062 = NOVALUE;
        // SubProg build_direct pc: 753 op: ELSE (23)
        goto L1D; // [753] 828
        // SubProg build_direct pc: 755 op: STARTLINE (58)

        /** buildsys.e:905			case COMPILER_GCC then*/
        // SubProg build_direct pc: 757 op: CASE (186)
        case 1:
        // SubProg build_direct pc: 759 op: STARTLINE (58)

        /** buildsys.e:906				cmd = sprintf("%s -o %s %s %s %s", { */
        // SubProg build_direct pc: 761 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45739);
        _24065 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg build_direct pc: 765 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 767 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 769 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_56exe_name_44896);
        _24066 = (object)*(((s1_ptr)_2)->base + 11);
        // SubProg build_direct pc: 773 op: PROC (27)
        Ref(_24066);
        _24067 = _56adjust_for_build_file(_24066);
        _24066 = NOVALUE;
        // SubProg build_direct pc: 777 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 779 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 781 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_56res_file_44908);
        _24068 = (object)*(((s1_ptr)_2)->base + 11);
        // SubProg build_direct pc: 785 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45739);
        _24069 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg build_direct pc: 789 op: RIGHT_BRACE_N (31)
        _1 = NewS1(5);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_24065);
        ((intptr_t*)_2)[1] = _24065;
        ((intptr_t*)_2)[2] = _24067;
        RefDS(_objs_45738);
        ((intptr_t*)_2)[3] = _objs_45738;
        Ref(_24068);
        ((intptr_t*)_2)[4] = _24068;
        Ref(_24069);
        ((intptr_t*)_2)[5] = _24069;
        _24070 = MAKE_SEQ(_1);
        _24069 = NOVALUE;
        _24068 = NOVALUE;
        _24067 = NOVALUE;
        _24065 = NOVALUE;
        // SubProg build_direct pc: 797 op: SPRINTF (53)
        DeRef(_cmd_45737);
        _cmd_45737 = EPrintf(-9999999, _24064, _24070);
        DeRefDS(_24070);
        _24070 = NOVALUE;
        // SubProg build_direct pc: 801 op: ELSE (23)
        goto L1D; // [801] 828
        // SubProg build_direct pc: 803 op: STARTLINE (58)

        /** buildsys.e:915			case else*/
        // SubProg build_direct pc: 805 op: CASE (186)
        default:
        // SubProg build_direct pc: 807 op: STARTLINE (58)

        /** buildsys.e:916				ShowMsg(2, 167, { compiler_type })*/
        // SubProg build_direct pc: 809 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 811 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _56compiler_type_44893;
        _24072 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 815 op: PROC (27)
        _42ShowMsg(2, 167, _24072, 1);
        _24072 = NOVALUE;
        // SubProg build_direct pc: 821 op: STARTLINE (58)

        /** buildsys.e:918				goto "build_direct_cleanup"*/
        // SubProg build_direct pc: 823 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-
        // SubProg build_direct pc: 825 op: GOTO (188)
        goto G11;
        // SubProg build_direct pc: 827 op: NOPSWITCH (187)
    ;}L1D: // addr: 828 pc: 827 sub: 45728 op: 187
    // SubProg build_direct pc: 828 op: STARTLINE (58)

    /** buildsys.e:921		if not silent then*/
    // SubProg build_direct pc: 830 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 832 op: NOT_IFW (108)
    if (_36silent_16551 != 0)
    goto L1E; // [832] 886
    // SubProg build_direct pc: 835 op: STARTLINE (58)

    /** buildsys.e:922			if not verbose then*/
    // SubProg build_direct pc: 837 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 839 op: NOT_IFW (108)
    if (_36verbose_16554 != 0)
    goto L1F; // [839] 870
    // SubProg build_direct pc: 842 op: STARTLINE (58)

    /** buildsys.e:923				ShowMsg(1, 166, { abbreviate_path(exe_name[D_NAME]) })*/
    // SubProg build_direct pc: 844 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 846 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 848 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _24075 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 852 op: PROC (27)
    Ref(_24075);
    RefDS(_21933);
    _24076 = _20abbreviate_path(_24075, _21933);
    _24075 = NOVALUE;
    // SubProg build_direct pc: 857 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24076;
    _24077 = MAKE_SEQ(_1);
    _24076 = NOVALUE;
    // SubProg build_direct pc: 861 op: PROC (27)
    _42ShowMsg(1, 166, _24077, 1);
    _24077 = NOVALUE;
    // SubProg build_direct pc: 867 op: ELSE (23)
    goto L20; // [867] 885
    // SubProg build_direct pc: 869 op: NOP1 (159)
L1F: // addr: 870 pc: 869 sub: 45728 op: 159
    // SubProg build_direct pc: 870 op: STARTLINE (58)

    /** buildsys.e:925				ShowMsg(1, 166, { cmd })*/
    // SubProg build_direct pc: 872 op: PRIVATE_INIT_CHECK (30)
    // SubProg build_direct pc: 874 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_cmd_45737);
    ((intptr_t*)_2)[1] = _cmd_45737;
    _24078 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 878 op: PROC (27)
    _42ShowMsg(1, 166, _24078, 1);
    _24078 = NOVALUE;
    // SubProg build_direct pc: 884 op: NOP1 (159)
L20: // addr: 885 pc: 884 sub: 45728 op: 159
    // SubProg build_direct pc: 885 op: NOP1 (159)
L1E: // addr: 886 pc: 885 sub: 45728 op: 159
    // SubProg build_direct pc: 886 op: STARTLINE (58)

    /** buildsys.e:929		status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 888 op: PRIVATE_INIT_CHECK (30)
    // SubProg build_direct pc: 890 op: SYSTEM_EXEC (154)
    _status_45744 = system_exec_call(_cmd_45737, 0);
    // SubProg build_direct pc: 894 op: STARTLINE (58)

    /** buildsys.e:930		if status != 0 then*/
    // SubProg build_direct pc: 896 op: NOTEQ_IFW_I (122)
    if (_status_45744 == 0)
    goto L21; // [896] 939
    // SubProg build_direct pc: 900 op: STARTLINE (58)

    /** buildsys.e:931			ShowMsg(2, 168, { exe_name[D_NAME] })*/
    // SubProg build_direct pc: 902 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 904 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 906 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _24081 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 910 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24081);
    ((intptr_t*)_2)[1] = _24081;
    _24082 = MAKE_SEQ(_1);
    _24081 = NOVALUE;
    // SubProg build_direct pc: 914 op: PROC (27)
    _42ShowMsg(2, 168, _24082, 1);
    _24082 = NOVALUE;
    // SubProg build_direct pc: 920 op: STARTLINE (58)

    /** buildsys.e:932			ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 922 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45737);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45744;
    ((intptr_t *)_2)[2] = _cmd_45737;
    _24083 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 926 op: PROC (27)
    _42ShowMsg(2, 169, _24083, 1);
    _24083 = NOVALUE;
    // SubProg build_direct pc: 932 op: STARTLINE (58)

    /** buildsys.e:934			goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 934 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 936 op: GOTO (188)
    goto G11;
    // SubProg build_direct pc: 938 op: NOP1 (159)
L21: // addr: 939 pc: 938 sub: 45728 op: 159
    // SubProg build_direct pc: 939 op: STARTLINE (58)

    /** buildsys.e:938		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_WATCOM then*/
    // SubProg build_direct pc: 941 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 943 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 945 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _24084 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 949 op: LENGTH (42)
    if (IS_SEQUENCE(_24084)){
            _24085 = SEQ_PTR(_24084)->length;
    }
    else {
        _24085 = 1;
    }
    _24084 = NOVALUE;
    // SubProg build_direct pc: 952 op: SC1_AND (141)
    if (_24085 == 0) {
        _24086 = 0;
        goto L22; // [952] 967
    }
    // SubProg build_direct pc: 956 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45739);
    _24087 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 960 op: LENGTH (42)
    if (IS_SEQUENCE(_24087)){
            _24088 = SEQ_PTR(_24087)->length;
    }
    else {
        _24088 = 1;
    }
    _24087 = NOVALUE;
    // SubProg build_direct pc: 963 op: SC2_AND (142)
    _24086 = (_24088 != 0);
    // SubProg build_direct pc: 966 op: NOP1 (159)
L22: // addr: 967 pc: 966 sub: 45728 op: 159
    // SubProg build_direct pc: 967 op: SC1_AND_IF (146)
    if (_24086 == 0) {
        goto L23; // [967] 1086
    }
    // SubProg build_direct pc: 971 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 973 op: EQUALS (3)
    _24090 = (_56compiler_type_44893 == 2);
    // SubProg build_direct pc: 977 op: NOP1 (159)
    // SubProg build_direct pc: 978 op: IF (20)
    if (_24090 == 0)
    {
        DeRef(_24090);
        _24090 = NOVALUE;
        goto L23; // [978] 1086
    }
    else{
        DeRef(_24090);
        _24090 = NOVALUE;
    }
    // SubProg build_direct pc: 981 op: STARTLINE (58)

    /** buildsys.e:939			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    // SubProg build_direct pc: 983 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45739);
    _24091 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 987 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 989 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 991 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _24092 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 995 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 997 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 999 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _24093 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1003 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1005 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1007 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _24094 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1011 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24092);
    ((intptr_t*)_2)[1] = _24092;
    Ref(_24093);
    ((intptr_t*)_2)[2] = _24093;
    Ref(_24094);
    ((intptr_t*)_2)[3] = _24094;
    _24095 = MAKE_SEQ(_1);
    _24094 = NOVALUE;
    _24093 = NOVALUE;
    _24092 = NOVALUE;
    // SubProg build_direct pc: 1017 op: PROC (27)
    Ref(_24091);
    _0 = _cmd_45737;
    _cmd_45737 = _17format(_24091, _24095);
    DeRef(_0);
    _24091 = NOVALUE;
    _24095 = NOVALUE;
    // SubProg build_direct pc: 1022 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 1024 op: STARTLINE (58)

    /** buildsys.e:940			status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 1026 op: SYSTEM_EXEC (154)
    _status_45744 = system_exec_call(_cmd_45737, 0);
    // SubProg build_direct pc: 1030 op: STARTLINE (58)

    /** buildsys.e:941			if status != 0 then*/
    // SubProg build_direct pc: 1032 op: NOTEQ_IFW_I (122)
    if (_status_45744 == 0)
    goto L24; // [1032] 1085
    // SubProg build_direct pc: 1036 op: STARTLINE (58)

    /** buildsys.e:942				ShowMsg(2, 187, { rc_file[D_NAME], exe_name[D_NAME] })*/
    // SubProg build_direct pc: 1038 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1040 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1042 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _24099 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 1046 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1048 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1050 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _24100 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 1054 op: RIGHT_BRACE_2 (85)
    Ref(_24100);
    Ref(_24099);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24099;
    ((intptr_t *)_2)[2] = _24100;
    _24101 = MAKE_SEQ(_1);
    _24100 = NOVALUE;
    _24099 = NOVALUE;
    // SubProg build_direct pc: 1058 op: PROC (27)
    _42ShowMsg(2, 187, _24101, 1);
    _24101 = NOVALUE;
    // SubProg build_direct pc: 1064 op: STARTLINE (58)

    /** buildsys.e:943				ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 1066 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45737);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45744;
    ((intptr_t *)_2)[2] = _cmd_45737;
    _24102 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 1070 op: PROC (27)
    _42ShowMsg(2, 169, _24102, 1);
    _24102 = NOVALUE;
    // SubProg build_direct pc: 1076 op: STARTLINE (58)

    /** buildsys.e:945				goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 1078 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 1080 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 1082 op: GOTO (188)
    goto G11;
    // SubProg build_direct pc: 1084 op: NOP1 (159)
L24: // addr: 1085 pc: 1084 sub: 45728 op: 159
    // SubProg build_direct pc: 1085 op: NOP1 (159)
L23: // addr: 1086 pc: 1085 sub: 45728 op: 159
    // SubProg build_direct pc: 1086 op: STARTLINE (58)

    /** buildsys.e:949	label "build_direct_cleanup"*/
    // SubProg build_direct pc: 1088 op: GLABEL (189)
G11:
    // SubProg build_direct pc: 1090 op: STARTLINE (58)

    /** buildsys.e:950		if keep = 0 then*/
    // SubProg build_direct pc: 1092 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1094 op: EQUALS_IFW (104)
    if (_58keep_42093 != 0)
    goto L25; // [1094] 1241
    // SubProg build_direct pc: 1098 op: STARTLINE (58)

    /** buildsys.e:951			for i = 1 to length(generated_files) do*/
    // SubProg build_direct pc: 1100 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1102 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _24104 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _24104 = 1;
    }
    // SubProg build_direct pc: 1105 op: FOR_I (125)
    {
        object _i_45978;
        _i_45978 = 1;
L26: // addr: 1112 pc: 1105 sub: 45728 op: 125
        if (_i_45978 > _24104){
            goto L27; // [1105] 1159
        }
        // SubProg build_direct pc: 1112 op: STARTLINE (58)

        /** buildsys.e:952				if verbose then*/
        // SubProg build_direct pc: 1114 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1116 op: IF (20)
        if (_36verbose_16554 == 0)
        {
            goto L28; // [1116] 1138
        }
        else{
        }
        // SubProg build_direct pc: 1119 op: STARTLINE (58)

        /** buildsys.e:953					ShowMsg(1, 347, { generated_files[i] })*/
        // SubProg build_direct pc: 1121 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1123 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _24105 = (object)*(((s1_ptr)_2)->base + _i_45978);
        // SubProg build_direct pc: 1127 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24105);
        ((intptr_t*)_2)[1] = _24105;
        _24106 = MAKE_SEQ(_1);
        _24105 = NOVALUE;
        // SubProg build_direct pc: 1131 op: PROC (27)
        _42ShowMsg(1, 347, _24106, 1);
        _24106 = NOVALUE;
        // SubProg build_direct pc: 1137 op: NOP1 (159)
L28: // addr: 1138 pc: 1137 sub: 45728 op: 159
        // SubProg build_direct pc: 1138 op: STARTLINE (58)

        /** buildsys.e:955				delete_file(generated_files[i])*/
        // SubProg build_direct pc: 1140 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1142 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_58generated_files_42090);
        _24107 = (object)*(((s1_ptr)_2)->base + _i_45978);
        // SubProg build_direct pc: 1146 op: PROC (27)
        RefDS(_24107);
        _31700 = _20delete_file(_24107);
        _24107 = NOVALUE;
        // SubProg build_direct pc: 1150 op: DEREF_TEMP (208)
        DeRef(_31700);
        _31700 = NOVALUE;
        // SubProg build_direct pc: 1152 op: STARTLINE (58)

        /** buildsys.e:956			end for*/
        // SubProg build_direct pc: 1154 op: ENDFOR_INT_UP1 (54)
        _i_45978 = _i_45978 + 1;
        goto L26; // [1154] 1112
L27: // addr: 1159 pc: 1154 sub: 45728 op: 54
        ;
    }
    // SubProg build_direct pc: 1159 op: STARTLINE (58)

    /** buildsys.e:958			if length(res_file[D_ALTNAME]) then*/
    // SubProg build_direct pc: 1161 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1163 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1165 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _24108 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1169 op: LENGTH (42)
    if (IS_SEQUENCE(_24108)){
            _24109 = SEQ_PTR(_24108)->length;
    }
    else {
        _24109 = 1;
    }
    _24108 = NOVALUE;
    // SubProg build_direct pc: 1172 op: IF (20)
    if (_24109 == 0)
    {
        _24109 = NOVALUE;
        goto L29; // [1172] 1192
    }
    else{
        _24109 = NOVALUE;
    }
    // SubProg build_direct pc: 1175 op: STARTLINE (58)

    /** buildsys.e:959				delete_file(res_file[D_ALTNAME])*/
    // SubProg build_direct pc: 1177 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1179 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1181 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _24110 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1185 op: PROC (27)
    Ref(_24110);
    _31699 = _20delete_file(_24110);
    _24110 = NOVALUE;
    // SubProg build_direct pc: 1189 op: DEREF_TEMP (208)
    DeRef(_31699);
    _31699 = NOVALUE;
    // SubProg build_direct pc: 1191 op: NOP1 (159)
L29: // addr: 1192 pc: 1191 sub: 45728 op: 159
    // SubProg build_direct pc: 1192 op: STARTLINE (58)

    /** buildsys.e:962			if remove_output_dir then*/
    // SubProg build_direct pc: 1194 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1196 op: IF (20)
    if (_56remove_output_dir_44916 == 0)
    {
        goto L2A; // [1196] 1240
    }
    else{
    }
    // SubProg build_direct pc: 1199 op: STARTLINE (58)

    /** buildsys.e:963				chdir(cwd)*/
    // SubProg build_direct pc: 1201 op: PROC (27)
    RefDS(_cwd_45741);
    _31698 = _20chdir(_cwd_45741);
    // SubProg build_direct pc: 1205 op: DEREF_TEMP (208)
    DeRef(_31698);
    _31698 = NOVALUE;
    // SubProg build_direct pc: 1207 op: STARTLINE (58)

    /** buildsys.e:966				if not remove_directory(output_dir) then*/
    // SubProg build_direct pc: 1209 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1211 op: PROC (27)
    RefDS(_58output_dir_42100);
    _24111 = _20remove_directory(_58output_dir_42100, 0);
    // SubProg build_direct pc: 1216 op: NOT_IFW (108)
    if (IS_ATOM_INT(_24111)) {
        if (_24111 != 0){
            DeRef(_24111);
            _24111 = NOVALUE;
            goto L2B; // [1216] 1239
        }
    }
    else {
        if (DBL_PTR(_24111)->dbl != 0.0){
            DeRef(_24111);
            _24111 = NOVALUE;
            goto L2B; // [1216] 1239
        }
    }
    DeRef(_24111);
    _24111 = NOVALUE;
    // SubProg build_direct pc: 1219 op: STARTLINE (58)

    /** buildsys.e:967					ShowMsg(2, 194, { abbreviate_path(output_dir) })*/
    // SubProg build_direct pc: 1221 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1223 op: PROC (27)
    RefDS(_58output_dir_42100);
    RefDS(_21933);
    _24113 = _20abbreviate_path(_58output_dir_42100, _21933);
    // SubProg build_direct pc: 1228 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24113;
    _24114 = MAKE_SEQ(_1);
    _24113 = NOVALUE;
    // SubProg build_direct pc: 1232 op: PROC (27)
    _42ShowMsg(2, 194, _24114, 1);
    _24114 = NOVALUE;
    // SubProg build_direct pc: 1238 op: NOP1 (159)
L2B: // addr: 1239 pc: 1238 sub: 45728 op: 159
    // SubProg build_direct pc: 1239 op: NOP1 (159)
L2A: // addr: 1240 pc: 1239 sub: 45728 op: 159
    // SubProg build_direct pc: 1240 op: NOP1 (159)
L25: // addr: 1241 pc: 1240 sub: 45728 op: 159
    // SubProg build_direct pc: 1241 op: STARTLINE (58)

    /** buildsys.e:972		chdir(cwd)*/
    // SubProg build_direct pc: 1243 op: PROC (27)
    RefDS(_cwd_45741);
    _31697 = _20chdir(_cwd_45741);
    // SubProg build_direct pc: 1247 op: DEREF_TEMP (208)
    DeRef(_31697);
    _31697 = NOVALUE;
    // SubProg build_direct pc: 1249 op: STARTLINE (58)

    /** buildsys.e:973	end procedure*/
    // SubProg build_direct pc: 1251 op: RETURNP (29)

// Exiting block BLOCK: build_direct

// block var link_only_45730

// block var the_file0_45731
    DeRefDS(_the_file0_45731);

// block var cmd_45737
    DeRef(_cmd_45737);

// block var objs_45738
    DeRef(_objs_45738);

// block var settings_45739
    DeRef(_settings_45739);

// block var cwd_45741
    DeRefDS(_cwd_45741);

// block var status_45744

// block var link_files_45773
    DeRef(_link_files_45773);
    _24041 = NOVALUE;
    _24044 = NOVALUE;
    _24108 = NOVALUE;
    _24084 = NOVALUE;
    _24087 = NOVALUE;
    DeRef(_24035);
    _24035 = NOVALUE;
    DeRef(_24007);
    _24007 = NOVALUE;
    return;
    // SubProg build_direct pc: 1254 op: BADRETURNF (43)
    ;
}


void _56write_buildfile()
{
    object _make_command_46018 = NOVALUE;
    object _settings_46058 = NOVALUE;
    object _24137 = NOVALUE; // 46067 24137
    object _24136 = NOVALUE; // 46066 24136
// skipping _24135  name type: 0
// skipping _24134  name type: 0
// skipping _24133  name type: 0
    object _24132 = NOVALUE; // 46053 24132
    object _24131 = NOVALUE; // 46050 24131
    object _24130 = NOVALUE; // 46049 24130
// skipping _24129  name type: 0
    object _24128 = NOVALUE; // 46042 24128
    object _24127 = NOVALUE; // 46038 24127
    object _24126 = NOVALUE; // 46034 24126
    object _24125 = NOVALUE; // 46033 24125
    object _24124 = NOVALUE; // 46031 24124
    object _24123 = NOVALUE; // 46030 24123
    object _24122 = NOVALUE; // 46027 24122
    object _24121 = NOVALUE; // 46026 24121
// skipping _24118  name type: 0
// skipping _24117  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_buildfile pc: 1 op: STARTLINE (58)

    /** buildsys.e:982		switch build_system_type do*/
    // SubProg write_buildfile pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_buildfile pc: 5 op: SWITCH_I (193)
    _0 = _56build_system_type_44889;
    switch ( _0 ){ 
        // SubProg write_buildfile pc: 10 op: STARTLINE (58)

        /** buildsys.e:983			case BUILD_MAKEFILE_FULL then*/
        // SubProg write_buildfile pc: 12 op: CASE (186)
        case 2:
        // SubProg write_buildfile pc: 14 op: STARTLINE (58)

        /** buildsys.e:984				write_makefile_full()*/
        // SubProg write_buildfile pc: 16 op: PROC (27)
        _56write_makefile_full();
        // SubProg write_buildfile pc: 18 op: STARTLINE (58)

        /** buildsys.e:986				if not silent then*/
        // SubProg write_buildfile pc: 20 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 22 op: NOT_IFW (108)
        if (_36silent_16551 != 0)
        goto L1; // [22] 136
        // SubProg write_buildfile pc: 25 op: STARTLINE (58)

        /** buildsys.e:987					sequence make_command*/
        // SubProg write_buildfile pc: 27 op: STARTLINE (58)

        /** buildsys.e:988					if compiler_type = COMPILER_WATCOM then*/
        // SubProg write_buildfile pc: 29 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 31 op: EQUALS_IFW_I (121)
        if (_56compiler_type_44893 != 2)
        goto L2; // [31] 45
        // SubProg write_buildfile pc: 35 op: STARTLINE (58)

        /** buildsys.e:989						make_command = "wmake /f "*/
        // SubProg write_buildfile pc: 37 op: ASSIGN (18)
        RefDS(_24119);
        DeRefi(_make_command_46018);
        _make_command_46018 = _24119;
        // SubProg write_buildfile pc: 40 op: SEQUENCE_CHECK (97)
        // SubProg write_buildfile pc: 42 op: ELSE (23)
        goto L3; // [42] 53
        // SubProg write_buildfile pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 46010 op: 159
        // SubProg write_buildfile pc: 45 op: STARTLINE (58)

        /** buildsys.e:991						make_command = "make -f "*/
        // SubProg write_buildfile pc: 47 op: ASSIGN (18)
        RefDS(_24120);
        DeRefi(_make_command_46018);
        _make_command_46018 = _24120;
        // SubProg write_buildfile pc: 50 op: SEQUENCE_CHECK (97)
        // SubProg write_buildfile pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 46010 op: 159
        // SubProg write_buildfile pc: 53 op: STARTLINE (58)

        /** buildsys.e:994					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 57 op: PLUS (11)
        _24121 = _36cfile_count_16514 + 2;
        if ((object)((uintptr_t)_24121 + (uintptr_t)HIGH_BITS) >= 0){
            _24121 = NewDouble((eudouble)_24121);
        }
        // SubProg write_buildfile pc: 61 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24121;
        _24122 = MAKE_SEQ(_1);
        _24121 = NOVALUE;
        // SubProg write_buildfile pc: 65 op: PROC (27)
        _42ShowMsg(1, 170, _24122, 1);
        _24122 = NOVALUE;
        // SubProg write_buildfile pc: 71 op: STARTLINE (58)

        /** buildsys.e:996					if sequence(output_dir) and length(output_dir) > 0 then*/
        // SubProg write_buildfile pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 75 op: IS_A_SEQUENCE (68)
        _24123 = 1;
        // SubProg write_buildfile pc: 78 op: SC1_AND_IF (146)
        if (_24123 == 0) {
            goto L4; // [78] 118
        }
        // SubProg write_buildfile pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 84 op: LENGTH (42)
        if (IS_SEQUENCE(_58output_dir_42100)){
                _24125 = SEQ_PTR(_58output_dir_42100)->length;
        }
        else {
            _24125 = 1;
        }
        // SubProg write_buildfile pc: 87 op: GREATER (6)
        _24126 = (_24125 > 0);
        _24125 = NOVALUE;
        // SubProg write_buildfile pc: 91 op: NOP1 (159)
        // SubProg write_buildfile pc: 92 op: IF (20)
        if (_24126 == 0)
        {
            DeRef(_24126);
            _24126 = NOVALUE;
            goto L4; // [92] 118
        }
        else{
            DeRef(_24126);
            _24126 = NOVALUE;
        }
        // SubProg write_buildfile pc: 95 op: STARTLINE (58)

        /** buildsys.e:997						ShowMsg(1, 174, { output_dir, make_command, file0 })*/
        // SubProg write_buildfile pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 99 op: PRIVATE_INIT_CHECK (30)
        // SubProg write_buildfile pc: 101 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 103 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_58output_dir_42100);
        ((intptr_t*)_2)[1] = _58output_dir_42100;
        RefDS(_make_command_46018);
        ((intptr_t*)_2)[2] = _make_command_46018;
        RefDS(_58file0_44053);
        ((intptr_t*)_2)[3] = _58file0_44053;
        _24127 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 109 op: PROC (27)
        _42ShowMsg(1, 174, _24127, 1);
        _24127 = NOVALUE;
        // SubProg write_buildfile pc: 115 op: ELSE (23)
        goto L5; // [115] 135
        // SubProg write_buildfile pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 46010 op: 159
        // SubProg write_buildfile pc: 118 op: STARTLINE (58)

        /** buildsys.e:999						ShowMsg(1, 172, { make_command, file0 })*/
        // SubProg write_buildfile pc: 120 op: PRIVATE_INIT_CHECK (30)
        // SubProg write_buildfile pc: 122 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 124 op: RIGHT_BRACE_2 (85)
        RefDS(_58file0_44053);
        RefDS(_make_command_46018);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _make_command_46018;
        ((intptr_t *)_2)[2] = _58file0_44053;
        _24128 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 128 op: PROC (27)
        _42ShowMsg(1, 172, _24128, 1);
        _24128 = NOVALUE;
        // SubProg write_buildfile pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 46010 op: 159
        // SubProg write_buildfile pc: 135 op: NOP1 (159)
L1: // addr: 136 pc: 135 sub: 46010 op: 159
        // SubProg write_buildfile pc: 136 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var make_command_46018
        DeRefi(_make_command_46018);
        _make_command_46018 = NOVALUE;
        // SubProg write_buildfile pc: 138 op: ELSE (23)
        goto L6; // [138] 263
        // SubProg write_buildfile pc: 140 op: STARTLINE (58)

        /** buildsys.e:1003			case BUILD_MAKEFILE_PARTIAL then*/
        // SubProg write_buildfile pc: 142 op: CASE (186)
        case 1:
        // SubProg write_buildfile pc: 144 op: STARTLINE (58)

        /** buildsys.e:1004				write_makefile_partial()*/
        // SubProg write_buildfile pc: 146 op: PROC (27)
        _56write_makefile_partial();
        // SubProg write_buildfile pc: 148 op: STARTLINE (58)

        /** buildsys.e:1006				if not silent then*/
        // SubProg write_buildfile pc: 150 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 152 op: NOT_IFW (108)
        if (_36silent_16551 != 0)
        goto L6; // [152] 263
        // SubProg write_buildfile pc: 155 op: STARTLINE (58)

        /** buildsys.e:1007					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 159 op: PLUS (11)
        _24130 = _36cfile_count_16514 + 2;
        if ((object)((uintptr_t)_24130 + (uintptr_t)HIGH_BITS) >= 0){
            _24130 = NewDouble((eudouble)_24130);
        }
        // SubProg write_buildfile pc: 163 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24130;
        _24131 = MAKE_SEQ(_1);
        _24130 = NOVALUE;
        // SubProg write_buildfile pc: 167 op: PROC (27)
        _42ShowMsg(1, 170, _24131, 1);
        _24131 = NOVALUE;
        // SubProg write_buildfile pc: 173 op: STARTLINE (58)

        /** buildsys.e:1008					ShowMsg(1, 173, { file0 })*/
        // SubProg write_buildfile pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 177 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_58file0_44053);
        ((intptr_t*)_2)[1] = _58file0_44053;
        _24132 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 181 op: PROC (27)
        _42ShowMsg(1, 173, _24132, 1);
        _24132 = NOVALUE;
        // SubProg write_buildfile pc: 187 op: NOP1 (159)
        // SubProg write_buildfile pc: 188 op: ELSE (23)
        goto L6; // [188] 263
        // SubProg write_buildfile pc: 190 op: STARTLINE (58)

        /** buildsys.e:1011			case BUILD_DIRECT then*/
        // SubProg write_buildfile pc: 192 op: CASE (186)
        case 3:
        // SubProg write_buildfile pc: 194 op: STARTLINE (58)

        /** buildsys.e:1012				build_direct()*/
        // SubProg write_buildfile pc: 196 op: PROC (27)
        RefDS(_21933);
        _56build_direct(0, _21933);
        // SubProg write_buildfile pc: 200 op: STARTLINE (58)

        /** buildsys.e:1014				if not silent then*/
        // SubProg write_buildfile pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 204 op: NOT_IFW (108)
        if (_36silent_16551 != 0)
        goto L7; // [204] 215
        // SubProg write_buildfile pc: 207 op: STARTLINE (58)

        /** buildsys.e:1015					sequence settings = setup_build()*/
        // SubProg write_buildfile pc: 209 op: PROC (27)
        _0 = _settings_46058;
        _settings_46058 = _56setup_build();
        DeRef(_0);
        // SubProg write_buildfile pc: 212 op: SEQUENCE_CHECK (97)
        // SubProg write_buildfile pc: 214 op: NOP1 (159)
L7: // addr: 215 pc: 214 sub: 46010 op: 159
        // SubProg write_buildfile pc: 215 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var settings_46058
        DeRef(_settings_46058);
        _settings_46058 = NOVALUE;
        // SubProg write_buildfile pc: 217 op: ELSE (23)
        goto L6; // [217] 263
        // SubProg write_buildfile pc: 219 op: STARTLINE (58)

        /** buildsys.e:1019			case BUILD_NONE then*/
        // SubProg write_buildfile pc: 221 op: CASE (186)
        case 0:
        // SubProg write_buildfile pc: 223 op: STARTLINE (58)

        /** buildsys.e:1020				if not silent then*/
        // SubProg write_buildfile pc: 225 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 227 op: NOT_IFW (108)
        if (_36silent_16551 != 0)
        goto L6; // [227] 263
        // SubProg write_buildfile pc: 230 op: STARTLINE (58)

        /** buildsys.e:1021					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 232 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 234 op: PLUS (11)
        _24136 = _36cfile_count_16514 + 2;
        if ((object)((uintptr_t)_24136 + (uintptr_t)HIGH_BITS) >= 0){
            _24136 = NewDouble((eudouble)_24136);
        }
        // SubProg write_buildfile pc: 238 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24136;
        _24137 = MAKE_SEQ(_1);
        _24136 = NOVALUE;
        // SubProg write_buildfile pc: 242 op: PROC (27)
        _42ShowMsg(1, 170, _24137, 1);
        _24137 = NOVALUE;
        // SubProg write_buildfile pc: 248 op: NOP1 (159)
        // SubProg write_buildfile pc: 249 op: ELSE (23)
        goto L6; // [249] 263
        // SubProg write_buildfile pc: 251 op: STARTLINE (58)

        /** buildsys.e:1026			case else*/
        // SubProg write_buildfile pc: 253 op: CASE (186)
        default:
        // SubProg write_buildfile pc: 255 op: STARTLINE (58)

        /** buildsys.e:1027				CompileErr(151)*/
        // SubProg write_buildfile pc: 257 op: PROC (27)
        RefDS(_21933);
        _50CompileErr(151, _21933, 0);
        // SubProg write_buildfile pc: 262 op: NOPSWITCH (187)
    ;}L6: // addr: 263 pc: 262 sub: 46010 op: 187
    // SubProg write_buildfile pc: 263 op: STARTLINE (58)

    /** buildsys.e:1029	end procedure*/
    // SubProg write_buildfile pc: 265 op: RETURNP (29)

// Exiting block BLOCK: write_buildfile
    return;
    // SubProg write_buildfile pc: 268 op: BADRETURNF (43)
    ;
}



// 0x6087F481
