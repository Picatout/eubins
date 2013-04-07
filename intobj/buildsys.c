// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _55update_checksum(object _raw_data_44987)
{
// skipping _23600  name type: 0
    object _23599 = NOVALUE; // 44988 23599
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_checksum pc: 1 op: STARTLINE (58)

    /** buildsys.e:213		cfile_check = xor_bits(cfile_check, hash( raw_data, stdhash:HSIEH32))*/
    // SubProg update_checksum pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_checksum pc: 5 op: HASH (194)
    _23599 = calc_hash(_raw_data_44987, -5);
    // SubProg update_checksum pc: 9 op: XOR_BITS (26)
    _0 = _55cfile_check_44968;
    if (IS_ATOM_INT(_55cfile_check_44968) && IS_ATOM_INT(_23599)) {
        {uintptr_t tu;
             tu = (uintptr_t)_55cfile_check_44968 ^ (uintptr_t)_23599;
             _55cfile_check_44968 = MAKE_UINT(tu);
        }
    }
    else {
        if (IS_ATOM_INT(_55cfile_check_44968)) {
            temp_d.dbl = (eudouble)_55cfile_check_44968;
            _55cfile_check_44968 = Dxor_bits(&temp_d, DBL_PTR(_23599));
        }
        else {
            if (IS_ATOM_INT(_23599)) {
                temp_d.dbl = (eudouble)_23599;
                _55cfile_check_44968 = Dxor_bits(DBL_PTR(_55cfile_check_44968), &temp_d);
            }
            else
            _55cfile_check_44968 = Dxor_bits(DBL_PTR(_55cfile_check_44968), DBL_PTR(_23599));
        }
    }
    DeRef(_0);
    DeRef(_23599);
    _23599 = NOVALUE;
    // SubProg update_checksum pc: 13 op: STARTLINE (58)

    /** buildsys.e:214	end procedure*/
    // SubProg update_checksum pc: 15 op: RETURNP (29)

// Exiting block BLOCK: update_checksum

// block var raw_data_44987
    DeRef(_raw_data_44987);
    return;
    // SubProg update_checksum pc: 18 op: BADRETURNF (43)
    ;
}


void _55write_checksum(object _file_44992)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_checksum pc: 1 op: INTEGER_CHECK (96)
    // SubProg write_checksum pc: 3 op: STARTLINE (58)

    /** buildsys.e:219		printf( file, "\n// 0x%08x\n", cfile_check )*/
    // SubProg write_checksum pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_checksum pc: 7 op: PRINTF (38)
    EPrintf(_file_44992, _23601, _55cfile_check_44968);
    // SubProg write_checksum pc: 11 op: STARTLINE (58)

    /** buildsys.e:220		cfile_check = 0*/
    // SubProg write_checksum pc: 13 op: ASSIGN (18)
    DeRef(_55cfile_check_44968);
    _55cfile_check_44968 = 0;
    // SubProg write_checksum pc: 16 op: STARTLINE (58)

    /** buildsys.e:221	end procedure*/
    // SubProg write_checksum pc: 18 op: RETURNP (29)

// Exiting block BLOCK: write_checksum

// block var file_44992
    return;
    // SubProg write_checksum pc: 21 op: BADRETURNF (43)
    ;
}


object _55adjust_for_command_line_passing(object _long_path_45040)
{
    object _slash_45041 = NOVALUE;
// skipping _23625  name type: 0
// skipping _23623  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_for_command_line_passing pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_for_command_line_passing pc: 3 op: STARTLINE (58)

    /** buildsys.e:310		if compiler_type = COMPILER_GCC then*/
    // SubProg adjust_for_command_line_passing pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_command_line_passing pc: 7 op: EQUALS_IFW_I (121)
    // SubProg adjust_for_command_line_passing pc: 19 op: STARTLINE (58)

    /** buildsys.e:312		elsif compiler_type = COMPILER_WATCOM then*/
    // SubProg adjust_for_command_line_passing pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_command_line_passing pc: 23 op: EQUALS_IFW_I (121)
    // SubProg adjust_for_command_line_passing pc: 35 op: STARTLINE (58)

    /** buildsys.e:315			slash = SLASH*/
    // SubProg adjust_for_command_line_passing pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_command_line_passing pc: 39 op: ASSIGN (18)
    _slash_45041 = 47;
    // SubProg adjust_for_command_line_passing pc: 42 op: INTEGER_CHECK (96)
    // SubProg adjust_for_command_line_passing pc: 44 op: NOP1 (159)
    // SubProg adjust_for_command_line_passing pc: 45 op: STARTLINE (58)

    /** buildsys.e:317		ifdef UNIX then*/
    // SubProg adjust_for_command_line_passing pc: 47 op: STARTLINE (58)

    /** buildsys.e:318			return long_path*/
    // SubProg adjust_for_command_line_passing pc: 49 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_command_line_passing

// block var slash_45041
    return _long_path_45040;
    // SubProg adjust_for_command_line_passing pc: 53 op: BADRETURNF (43)
    ;
}


object _55adjust_for_build_file(object _long_path_45051)
{
    object _short_path_45052 = NOVALUE;
    object _23632 = NOVALUE; // 45063 23632
    object _23631 = NOVALUE; // 45060 23631
    object _23630 = NOVALUE; // 45059 23630
    object _23629 = NOVALUE; // 45058 23629
    object _23628 = NOVALUE; // 45057 23628
    object _23627 = NOVALUE; // 45055 23627
// skipping _23626  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_for_build_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_for_build_file pc: 3 op: STARTLINE (58)

    /** buildsys.e:355	    object short_path = adjust_for_command_line_passing(long_path)*/
    // SubProg adjust_for_build_file pc: 5 op: PROC (27)
    RefDS(_long_path_45051);
    _0 = _short_path_45052;
    _short_path_45052 = _55adjust_for_command_line_passing(_long_path_45051);
    DeRef(_0);
    // SubProg adjust_for_build_file pc: 9 op: STARTLINE (58)

    /** buildsys.e:356	    if atom(short_path) then*/
    // SubProg adjust_for_build_file pc: 11 op: IS_AN_ATOM (67)
    _23627 = IS_ATOM(_short_path_45052);
    // SubProg adjust_for_build_file pc: 14 op: IF (20)
    if (_23627 == 0)
    {
        _23627 = NOVALUE;
        goto L1; // [14] 24
    }
    else{
        _23627 = NOVALUE;
    }
    // SubProg adjust_for_build_file pc: 17 op: STARTLINE (58)

    /** buildsys.e:357	    	return short_path*/
    // SubProg adjust_for_build_file pc: 19 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_45051
    DeRefDS(_long_path_45051);
    return _short_path_45052;
    // SubProg adjust_for_build_file pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 45049 op: 159
    // SubProg adjust_for_build_file pc: 24 op: STARTLINE (58)

    /** buildsys.e:359		if compiler_type = COMPILER_GCC and build_system_type != BUILD_DIRECT and TWINDOWS then*/
    // SubProg adjust_for_build_file pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 28 op: EQUALS (3)
    _23628 = (0 == 1);
    // SubProg adjust_for_build_file pc: 32 op: SC1_AND (141)
    if (_23628 == 0) {
        _23629 = 0;
        goto L2; // [32] 46
    }
    // SubProg adjust_for_build_file pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 38 op: NOTEQ (4)
    _23630 = (3 != 3);
    // SubProg adjust_for_build_file pc: 42 op: SC2_AND (142)
    _23629 = (_23630 != 0);
    // SubProg adjust_for_build_file pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 45049 op: 159
    // SubProg adjust_for_build_file pc: 46 op: SC1_AND_IF (146)
    if (_23629 == 0) {
        goto L3; // [46] 69
    }
    // SubProg adjust_for_build_file pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 52 op: NOP1 (159)
    // SubProg adjust_for_build_file pc: 53 op: IF (20)
    goto L3; // [53] 69
    // SubProg adjust_for_build_file pc: 56 op: STARTLINE (58)

    /** buildsys.e:360			return windows_to_mingw_path(short_path)*/
    // SubProg adjust_for_build_file pc: 58 op: PROC (27)
    Ref(_short_path_45052);
    _23632 = _55windows_to_mingw_path(_short_path_45052);
    // SubProg adjust_for_build_file pc: 62 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_45051
    DeRefDS(_long_path_45051);

// block var short_path_45052
    DeRef(_short_path_45052);
    DeRef(_23628);
    _23628 = NOVALUE;
    DeRef(_23630);
    _23630 = NOVALUE;
    return _23632;
    // SubProg adjust_for_build_file pc: 66 op: ELSE (23)
    goto L4; // [66] 76
    // SubProg adjust_for_build_file pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 45049 op: 159
    // SubProg adjust_for_build_file pc: 69 op: STARTLINE (58)

    /** buildsys.e:362			return short_path*/
    // SubProg adjust_for_build_file pc: 71 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_45051
    DeRefDS(_long_path_45051);
    DeRef(_23632);
    _23632 = NOVALUE;
    DeRef(_23628);
    _23628 = NOVALUE;
    DeRef(_23630);
    _23630 = NOVALUE;
    return _short_path_45052;
    // SubProg adjust_for_build_file pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 45049 op: 159
    // SubProg adjust_for_build_file pc: 76 op: BADRETURNF (43)
    ;
}


object _55setup_build()
{
    object _c_exe_45067 = NOVALUE;
    object _c_flags_45068 = NOVALUE;
    object _l_exe_45069 = NOVALUE;
    object _l_flags_45070 = NOVALUE;
    object _obj_ext_45071 = NOVALUE;
    object _exe_ext_45072 = NOVALUE;
    object _l_flags_begin_45073 = NOVALUE;
    object _rc_comp_45074 = NOVALUE;
    object _l_names_45075 = NOVALUE;
    object _l_ext_45076 = NOVALUE;
    object _t_slash_45077 = NOVALUE;
    object _eudir_45119 = NOVALUE;
    object _locations_45144 = NOVALUE;
    object _compile_dir_45196 = NOVALUE;
    object _bits_45207 = NOVALUE;
    object _m_flag_45217 = NOVALUE;
    object _23802 = NOVALUE; // 45361 23802
// skipping _23801  name type: 0
// skipping _23800  name type: 0
    object _23799 = NOVALUE; // 45357 23799
    object _23798 = NOVALUE; // 45355 23798
// skipping _23797  name type: 0
// skipping _23796  name type: 0
    object _23795 = NOVALUE; // 45351 23795
    object _23794 = NOVALUE; // 45349 23794
// skipping _23792  name type: 0
    object _23790 = NOVALUE; // 45342 23790
    object _23789 = NOVALUE; // 45341 23789
// skipping _23787  name type: 0
    object _23786 = NOVALUE; // 45337 23786
    object _23785 = NOVALUE; // 45336 23785
// skipping _23783  name type: 0
// skipping _23781  name type: 0
// skipping _23779  name type: 0
    object _23778 = NOVALUE; // 45325 23778
    object _23777 = NOVALUE; // 45324 23777
// skipping _23775  name type: 0
// skipping _23773  name type: 0
    object _23772 = NOVALUE; // 45318 23772
    object _23771 = NOVALUE; // 45317 23771
// skipping _23769  name type: 0
// skipping _23767  name type: 0
    object _23766 = NOVALUE; // 45310 23766
    object _23765 = NOVALUE; // 45309 23765
// skipping _23763  name type: 0
    object _23762 = NOVALUE; // 45305 23762
    object _23761 = NOVALUE; // 45304 23761
// skipping _23759  name type: 0
// skipping _23755  name type: 0
// skipping _23753  name type: 0
// skipping _23751  name type: 0
    object _23749 = NOVALUE; // 45288 23749
    object _23748 = NOVALUE; // 45287 23748
// skipping _23746  name type: 0
// skipping _23744  name type: 0
// skipping _23743  name type: 0
// skipping _23742  name type: 0
// skipping _23740  name type: 0
// skipping _23738  name type: 0
// skipping _23736  name type: 0
// skipping _23734  name type: 0
    object _23733 = NOVALUE; // 45258 23733
    object _23732 = NOVALUE; // 45257 23732
// skipping _23730  name type: 0
// skipping _23729  name type: 0
// skipping _23727  name type: 0
// skipping _23726  name type: 0
    object _23724 = NOVALUE; // 45246 23724
// skipping _23723  name type: 0
    object _23722 = NOVALUE; // 45242 23722
    object _23721 = NOVALUE; // 45241 23721
    object _23720 = NOVALUE; // 45240 23720
    object _23719 = NOVALUE; // 45239 23719
// skipping _23717  name type: 0
    object _23715 = NOVALUE; // 45234 23715
    object _23714 = NOVALUE; // 45232 23714
// skipping _23713  name type: 0
// skipping _23711  name type: 0
// skipping _23709  name type: 0
// skipping _23707  name type: 0
// skipping _23705  name type: 0
// skipping _23704  name type: 0
    object _23700 = NOVALUE; // 45206 23700
    object _23699 = NOVALUE; // 45205 23699
// skipping _23697  name type: 0
    object _23696 = NOVALUE; // 45201 23696
// skipping _23695  name type: 0
// skipping _23690  name type: 0
// skipping _23688  name type: 0
// skipping _23686  name type: 0
// skipping _23685  name type: 0
    object _23684 = NOVALUE; // 45169 23684
// skipping _23683  name type: 0
    object _23682 = NOVALUE; // 45164 23682
    object _23681 = NOVALUE; // 45163 23681
    object _23680 = NOVALUE; // 45162 23680
    object _23679 = NOVALUE; // 45160 23679
    object _23678 = NOVALUE; // 45159 23678
    object _23677 = NOVALUE; // 45158 23677
    object _23676 = NOVALUE; // 45157 23676
    object _23675 = NOVALUE; // 45156 23675
    object _23674 = NOVALUE; // 45153 23674
    object _23673 = NOVALUE; // 45150 23673
// skipping _23671  name type: 0
    object _23668 = NOVALUE; // 45143 23668
// skipping _23667  name type: 0
// skipping _23666  name type: 0
    object _23665 = NOVALUE; // 45138 23665
    object _23664 = NOVALUE; // 45137 23664
    object _23663 = NOVALUE; // 45136 23663
    object _23660 = NOVALUE; // 45132 23660
    object _23659 = NOVALUE; // 45129 23659
    object _23658 = NOVALUE; // 45128 23658
// skipping _23656  name type: 0
    object _23655 = NOVALUE; // 45124 23655
// skipping _23654  name type: 0
    object _23651 = NOVALUE; // 45114 23651
    object _23650 = NOVALUE; // 45113 23650
    object _23648 = NOVALUE; // 45111 23648
    object _23647 = NOVALUE; // 45108 23647
    object _23646 = NOVALUE; // 45106 23646
    object _23645 = NOVALUE; // 45103 23645
// skipping _23644  name type: 0
// skipping _23643  name type: 0
// skipping _23642  name type: 0
// skipping _23639  name type: 0
    object _23638 = NOVALUE; // 45091 23638
    object _23637 = NOVALUE; // 45086 23637
    object _23636 = NOVALUE; // 45084 23636
    object _23635 = NOVALUE; // 45083 23635
    object _23634 = NOVALUE; // 45082 23634
    object _23633 = NOVALUE; // 45080 23633
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg setup_build pc: 1 op: STARTLINE (58)

    /** buildsys.e:373			c_exe   = "",*/
    // SubProg setup_build pc: 3 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_c_exe_45067);
    _c_exe_45067 = _21958;
    // SubProg setup_build pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 8 op: STARTLINE (58)

    /** buildsys.e:374			c_flags = "",*/
    // SubProg setup_build pc: 10 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_c_flags_45068);
    _c_flags_45068 = _21958;
    // SubProg setup_build pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 15 op: STARTLINE (58)

    /** buildsys.e:375			l_exe   = "",*/
    // SubProg setup_build pc: 17 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_l_exe_45069);
    _l_exe_45069 = _21958;
    // SubProg setup_build pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 22 op: STARTLINE (58)

    /** buildsys.e:376			l_flags = "",*/
    // SubProg setup_build pc: 24 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_l_flags_45070);
    _l_flags_45070 = _21958;
    // SubProg setup_build pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 29 op: STARTLINE (58)

    /** buildsys.e:377			obj_ext = "",*/
    // SubProg setup_build pc: 31 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_obj_ext_45071);
    _obj_ext_45071 = _21958;
    // SubProg setup_build pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 36 op: STARTLINE (58)

    /** buildsys.e:378			exe_ext = "",*/
    // SubProg setup_build pc: 38 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_exe_ext_45072);
    _exe_ext_45072 = _21958;
    // SubProg setup_build pc: 41 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 43 op: STARTLINE (58)

    /** buildsys.e:379			l_flags_begin = "",*/
    // SubProg setup_build pc: 45 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_l_flags_begin_45073);
    _l_flags_begin_45073 = _21958;
    // SubProg setup_build pc: 48 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 50 op: STARTLINE (58)

    /** buildsys.e:380			rc_comp = "",*/
    // SubProg setup_build pc: 52 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_rc_comp_45074);
    _rc_comp_45074 = _21958;
    // SubProg setup_build pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 57 op: STARTLINE (58)

    /** buildsys.e:385		if dll_option*/
    // SubProg setup_build pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 61 op: SC1_AND (141)
    if (_57dll_option_42130 == 0) {
        _23633 = 0;
        goto L1; // [61] 78
    }
    // SubProg setup_build pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 67 op: LENGTH (42)
    // Known sequence length:
    _23634 = 0;
    // SubProg setup_build pc: 70 op: GREATER (6)
    _23635 = (0 > 0);
    _23634 = NOVALUE;
    // SubProg setup_build pc: 74 op: SC2_AND (142)
    _23633 = (_23635 != 0);
    // SubProg setup_build pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 45065 op: 159
    // SubProg setup_build pc: 78 op: SC1_AND_IF (146)
    if (_23633 == 0) {
        goto L2; // [78] 101
    }
    // SubProg setup_build pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 84 op: NOT (7)
    _23637 = (0 == 0);
    // SubProg setup_build pc: 87 op: NOP1 (159)
    // SubProg setup_build pc: 88 op: IF (20)
    if (_23637 == 0)
    {
        DeRef(_23637);
        _23637 = NOVALUE;
        goto L2; // [88] 101
    }
    else{
        DeRef(_23637);
        _23637 = NOVALUE;
    }
    // SubProg setup_build pc: 91 op: STARTLINE (58)

    /** buildsys.e:388			user_library = user_pic_library*/
    // SubProg setup_build pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 95 op: ASSIGN (18)
    RefDS(_57user_pic_library_42143);
    DeRef(_57user_library_42142);
    _57user_library_42142 = _57user_pic_library_42143;
    // SubProg setup_build pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 100 op: NOP1 (159)
L2: // addr: 101 pc: 100 sub: 45065 op: 159
    // SubProg setup_build pc: 101 op: STARTLINE (58)

    /** buildsys.e:391		if length(user_library) = 0 then*/
    // SubProg setup_build pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_57user_library_42142)){
            _23638 = SEQ_PTR(_57user_library_42142)->length;
    }
    else {
        _23638 = 1;
    }
    // SubProg setup_build pc: 108 op: EQUALS_IFW_I (121)
    if (_23638 != 0)
    goto L3; // [108] 456
    // SubProg setup_build pc: 112 op: STARTLINE (58)

    /** buildsys.e:392			if debug_option then*/
    // SubProg setup_build pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 116 op: IF (20)
    if (_57debug_option_42140 == 0)
    {
        goto L4; // [116] 128
    }
    else{
    }
    // SubProg setup_build pc: 119 op: STARTLINE (58)

    /** buildsys.e:393				l_names = { "eudbg", "eu" }*/
    // SubProg setup_build pc: 121 op: RIGHT_BRACE_2 (85)
    RefDS(_23641);
    RefDS(_23640);
    DeRef(_l_names_45075);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23640;
    ((intptr_t *)_2)[2] = _23641;
    _l_names_45075 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 125 op: ELSE (23)
    goto L5; // [125] 135
    // SubProg setup_build pc: 127 op: NOP1 (159)
L4: // addr: 128 pc: 127 sub: 45065 op: 159
    // SubProg setup_build pc: 128 op: STARTLINE (58)

    /** buildsys.e:395				l_names = { "eu", "eudbg" }*/
    // SubProg setup_build pc: 130 op: RIGHT_BRACE_2 (85)
    RefDS(_23640);
    RefDS(_23641);
    DeRef(_l_names_45075);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23641;
    ((intptr_t *)_2)[2] = _23640;
    _l_names_45075 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 45065 op: 159
    // SubProg setup_build pc: 135 op: STARTLINE (58)

    /** buildsys.e:400			if TUNIX or compiler_type = COMPILER_GCC then*/
    // SubProg setup_build pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 139 op: SC1_OR_IF (147)
    if (_39TUNIX_19987 != 0) {
        goto L6; // [139] 154
    }
    // SubProg setup_build pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 145 op: EQUALS (3)
    _23645 = (0 == 1);
    // SubProg setup_build pc: 149 op: NOP1 (159)
    // SubProg setup_build pc: 150 op: IF (20)
    if (_23645 == 0)
    {
        DeRef(_23645);
        _23645 = NOVALUE;
        goto L7; // [150] 224
    }
    else{
        DeRef(_23645);
        _23645 = NOVALUE;
    }
    // SubProg setup_build pc: 153 op: NOP1 (159)
L6: // addr: 154 pc: 153 sub: 45065 op: 159
    // SubProg setup_build pc: 154 op: STARTLINE (58)

    /** buildsys.e:401				l_ext = "a"*/
    // SubProg setup_build pc: 156 op: ASSIGN (18)
    RefDS(_22251);
    DeRefi(_l_ext_45076);
    _l_ext_45076 = _22251;
    // SubProg setup_build pc: 159 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 161 op: STARTLINE (58)

    /** buildsys.e:402				t_slash = "/"*/
    // SubProg setup_build pc: 163 op: ASSIGN (18)
    RefDS(_23562);
    DeRefi(_t_slash_45077);
    _t_slash_45077 = _23562;
    // SubProg setup_build pc: 166 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 168 op: STARTLINE (58)

    /** buildsys.e:403				if dll_option and not TWINDOWS then*/
    // SubProg setup_build pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 172 op: SC1_AND_IF (146)
    if (_57dll_option_42130 == 0) {
        goto L8; // [172] 247
    }
    // SubProg setup_build pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 178 op: NOT (7)
    _23647 = (0 == 0);
    // SubProg setup_build pc: 181 op: NOP1 (159)
    // SubProg setup_build pc: 182 op: IF (20)
    if (_23647 == 0)
    {
        DeRef(_23647);
        _23647 = NOVALUE;
        goto L8; // [182] 247
    }
    else{
        DeRef(_23647);
        _23647 = NOVALUE;
    }
    // SubProg setup_build pc: 185 op: STARTLINE (58)

    /** buildsys.e:404					for i = 1 to length( l_names ) do*/
    // SubProg setup_build pc: 187 op: PRIVATE_INIT_CHECK (30)
    // SubProg setup_build pc: 189 op: LENGTH (42)
    if (IS_SEQUENCE(_l_names_45075)){
            _23648 = SEQ_PTR(_l_names_45075)->length;
    }
    else {
        _23648 = 1;
    }
    // SubProg setup_build pc: 192 op: FOR_I (125)
    {
        object _i_45110;
        _i_45110 = 1;
L9: // addr: 199 pc: 192 sub: 45065 op: 125
        if (_i_45110 > _23648){
            goto LA; // [192] 220
        }
        // SubProg setup_build pc: 199 op: STARTLINE (58)

        /** buildsys.e:406						l_names[i] &= "so"*/
        // SubProg setup_build pc: 201 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_l_names_45075);
        _23650 = (object)*(((s1_ptr)_2)->base + _i_45110);
        // SubProg setup_build pc: 205 op: CONCAT (15)
        if (IS_SEQUENCE(_23650) && IS_ATOM(_23649)) {
        }
        else if (IS_ATOM(_23650) && IS_SEQUENCE(_23649)) {
            Ref(_23650);
            Prepend(&_23651, _23649, _23650);
        }
        else {
            Concat((object_ptr)&_23651, _23650, _23649);
            _23650 = NOVALUE;
        }
        _23650 = NOVALUE;
        // SubProg setup_build pc: 209 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_l_names_45075);
        _2 = (object)(((s1_ptr)_2)->base + _i_45110);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _23651;
        if( _1 != _23651 ){
            DeRef(_1);
        }
        _23651 = NOVALUE;
        // SubProg setup_build pc: 213 op: STARTLINE (58)

        /** buildsys.e:407					end for*/
        // SubProg setup_build pc: 215 op: ENDFOR_INT_UP1 (54)
        _i_45110 = _i_45110 + 1;
        goto L9; // [215] 199
LA: // addr: 220 pc: 215 sub: 45065 op: 54
        ;
    }
    // SubProg setup_build pc: 220 op: NOP1 (159)
    // SubProg setup_build pc: 221 op: ELSE (23)
    goto L8; // [221] 247
    // SubProg setup_build pc: 223 op: NOP1 (159)
L7: // addr: 224 pc: 223 sub: 45065 op: 159
    // SubProg setup_build pc: 224 op: STARTLINE (58)

    /** buildsys.e:409			elsif TWINDOWS then*/
    // SubProg setup_build pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 228 op: IF (20)
    // SubProg setup_build pc: 246 op: NOP1 (159)
L8: // addr: 247 pc: 246 sub: 45065 op: 159
    // SubProg setup_build pc: 247 op: STARTLINE (58)

    /** buildsys.e:414			object eudir = get_eucompiledir()*/
    // SubProg setup_build pc: 249 op: PROC (27)
    _0 = _eudir_45119;
    _eudir_45119 = _57get_eucompiledir();
    DeRef(_0);
    // SubProg setup_build pc: 252 op: STARTLINE (58)

    /** buildsys.e:415			if not file_exists(eudir) then*/
    // SubProg setup_build pc: 254 op: PROC (27)
    Ref(_eudir_45119);
    _23655 = _16file_exists(_eudir_45119);
    // SubProg setup_build pc: 258 op: NOT_IFW (108)
    if (IS_ATOM_INT(_23655)) {
        if (_23655 != 0){
            DeRef(_23655);
            _23655 = NOVALUE;
            goto LB; // [258] 279
        }
    }
    else {
        if (DBL_PTR(_23655)->dbl != 0.0){
            DeRef(_23655);
            _23655 = NOVALUE;
            goto LB; // [258] 279
        }
    }
    DeRef(_23655);
    _23655 = NOVALUE;
    // SubProg setup_build pc: 261 op: STARTLINE (58)

    /** buildsys.e:416				printf(2,"Supplied directory \'%s\' is not a valid EUDIR\n",{get_eucompiledir()})*/
    // SubProg setup_build pc: 263 op: PROC (27)
    _23658 = _57get_eucompiledir();
    // SubProg setup_build pc: 266 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23658;
    _23659 = MAKE_SEQ(_1);
    _23658 = NOVALUE;
    // SubProg setup_build pc: 270 op: PRINTF (38)
    EPrintf(2, _23657, _23659);
    DeRefDS(_23659);
    _23659 = NOVALUE;
    // SubProg setup_build pc: 274 op: STARTLINE (58)

    /** buildsys.e:417				abort(1)*/
    // SubProg setup_build pc: 276 op: ABORT (126)
    UserCleanup(1);
    // SubProg setup_build pc: 278 op: NOP1 (159)
LB: // addr: 279 pc: 278 sub: 45065 op: 159
    // SubProg setup_build pc: 279 op: STARTLINE (58)

    /** buildsys.e:419			for tk = 1 to length(l_names) label "translation kind" do*/
    // SubProg setup_build pc: 281 op: PRIVATE_INIT_CHECK (30)
    // SubProg setup_build pc: 283 op: LENGTH (42)
    if (IS_SEQUENCE(_l_names_45075)){
            _23660 = SEQ_PTR(_l_names_45075)->length;
    }
    else {
        _23660 = 1;
    }
    // SubProg setup_build pc: 286 op: FOR_I (125)
    {
        object _tk_45131;
        _tk_45131 = 1;
LC: // addr: 293 pc: 286 sub: 45065 op: 125
        if (_tk_45131 > _23660){
            goto LD; // [286] 455
        }
        // SubProg setup_build pc: 293 op: STARTLINE (58)

        /** buildsys.e:420				user_library = eudir & sprintf("%sbin%s%s.%s",{t_slash, t_slash, l_names[tk],l_ext})*/
        // SubProg setup_build pc: 295 op: PRIVATE_INIT_CHECK (30)
        // SubProg setup_build pc: 297 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_l_names_45075);
        _23663 = (object)*(((s1_ptr)_2)->base + _tk_45131);
        // SubProg setup_build pc: 301 op: PRIVATE_INIT_CHECK (30)
        // SubProg setup_build pc: 303 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        RefDSn(_t_slash_45077, 2);
        ((intptr_t*)_2)[1] = _t_slash_45077;
        ((intptr_t*)_2)[2] = _t_slash_45077;
        Ref(_23663);
        ((intptr_t*)_2)[3] = _23663;
        RefDS(_l_ext_45076);
        ((intptr_t*)_2)[4] = _l_ext_45076;
        _23664 = MAKE_SEQ(_1);
        _23663 = NOVALUE;
        // SubProg setup_build pc: 310 op: SPRINTF (53)
        _23665 = EPrintf(-9999999, _23662, _23664);
        DeRefDS(_23664);
        _23664 = NOVALUE;
        // SubProg setup_build pc: 314 op: CONCAT (15)
        if (IS_SEQUENCE(_eudir_45119) && IS_ATOM(_23665)) {
        }
        else if (IS_ATOM(_eudir_45119) && IS_SEQUENCE(_23665)) {
            Ref(_eudir_45119);
            Prepend(&_57user_library_42142, _23665, _eudir_45119);
        }
        else {
            Concat((object_ptr)&_57user_library_42142, _eudir_45119, _23665);
        }
        DeRefDS(_23665);
        _23665 = NOVALUE;
        // SubProg setup_build pc: 318 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 320 op: STARTLINE (58)

        /** buildsys.e:421				if TUNIX or compiler_type = COMPILER_GCC then*/
        // SubProg setup_build pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 324 op: SC1_OR_IF (147)
        if (_39TUNIX_19987 != 0) {
            goto LE; // [324] 339
        }
        // SubProg setup_build pc: 328 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 330 op: EQUALS (3)
        _23668 = (0 == 1);
        // SubProg setup_build pc: 334 op: NOP1 (159)
        // SubProg setup_build pc: 335 op: IF (20)
        if (_23668 == 0)
        {
            DeRef(_23668);
            _23668 = NOVALUE;
            goto LF; // [335] 430
        }
        else{
            DeRef(_23668);
            _23668 = NOVALUE;
        }
        // SubProg setup_build pc: 338 op: NOP1 (159)
LE: // addr: 339 pc: 338 sub: 45065 op: 159
        // SubProg setup_build pc: 339 op: STARTLINE (58)

        /** buildsys.e:422					ifdef UNIX then*/
        // SubProg setup_build pc: 341 op: STARTLINE (58)

        /** buildsys.e:423						sequence locations = { "/usr/local/lib/%s.a", "/usr/lib/%s.a"}*/
        // SubProg setup_build pc: 343 op: RIGHT_BRACE_2 (85)
        RefDS(_23670);
        RefDS(_23669);
        DeRef(_locations_45144);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23669;
        ((intptr_t *)_2)[2] = _23670;
        _locations_45144 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 347 op: STARTLINE (58)

        /** buildsys.e:424						if match( "/share/euphoria", eudir ) then*/
        // SubProg setup_build pc: 349 op: MATCH_FROM (177)
        _23673 = e_match_from(_23672, _eudir_45119, 1);
        // SubProg setup_build pc: 354 op: IF (20)
        if (_23673 == 0)
        {
            _23673 = NOVALUE;
            goto L10; // [354] 429
        }
        else{
            _23673 = NOVALUE;
        }
        // SubProg setup_build pc: 357 op: STARTLINE (58)

        /** buildsys.e:426							for i = 1 to length(locations) do*/
        // SubProg setup_build pc: 359 op: LENGTH (42)
        // Known sequence length:
        _23674 = 2;
        // SubProg setup_build pc: 362 op: FOR_I (125)
        {
            object _i_45152;
            _i_45152 = 1;
L11: // addr: 369 pc: 362 sub: 45065 op: 125
            if (_i_45152 > 2){
                goto L12; // [362] 428
            }
            // SubProg setup_build pc: 369 op: STARTLINE (58)

            /** buildsys.e:427								if file_exists( sprintf(locations[i],{l_names[tk]}) ) then*/
            // SubProg setup_build pc: 371 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_locations_45144);
            _23675 = (object)*(((s1_ptr)_2)->base + _i_45152);
            // SubProg setup_build pc: 375 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_l_names_45075);
            _23676 = (object)*(((s1_ptr)_2)->base + _tk_45131);
            // SubProg setup_build pc: 379 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23676);
            ((intptr_t*)_2)[1] = _23676;
            _23677 = MAKE_SEQ(_1);
            _23676 = NOVALUE;
            // SubProg setup_build pc: 383 op: SPRINTF (53)
            _23678 = EPrintf(-9999999, _23675, _23677);
            _23675 = NOVALUE;
            DeRefDS(_23677);
            _23677 = NOVALUE;
            // SubProg setup_build pc: 387 op: PROC (27)
            _23679 = _16file_exists(_23678);
            _23678 = NOVALUE;
            // SubProg setup_build pc: 391 op: IF (20)
            if (_23679 == 0) {
                DeRef(_23679);
                _23679 = NOVALUE;
                goto L13; // [391] 421
            }
            else {
                if (!IS_ATOM_INT(_23679) && DBL_PTR(_23679)->dbl == 0.0){
                    DeRef(_23679);
                    _23679 = NOVALUE;
                    goto L13; // [391] 421
                }
                DeRef(_23679);
                _23679 = NOVALUE;
            }
            DeRef(_23679);
            _23679 = NOVALUE;
            // SubProg setup_build pc: 394 op: STARTLINE (58)

            /** buildsys.e:428									user_library = sprintf(locations[i],{l_names[tk]})*/
            // SubProg setup_build pc: 396 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_locations_45144);
            _23680 = (object)*(((s1_ptr)_2)->base + _i_45152);
            // SubProg setup_build pc: 400 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_l_names_45075);
            _23681 = (object)*(((s1_ptr)_2)->base + _tk_45131);
            // SubProg setup_build pc: 404 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23681);
            ((intptr_t*)_2)[1] = _23681;
            _23682 = MAKE_SEQ(_1);
            _23681 = NOVALUE;
            // SubProg setup_build pc: 408 op: SPRINTF (53)
            DeRef(_57user_library_42142);
            _57user_library_42142 = EPrintf(-9999999, _23680, _23682);
            _23680 = NOVALUE;
            DeRefDS(_23682);
            _23682 = NOVALUE;
            // SubProg setup_build pc: 412 op: SEQUENCE_CHECK (97)
            // SubProg setup_build pc: 414 op: STARTLINE (58)

            /** buildsys.e:429									exit "translation kind"*/
            // SubProg setup_build pc: 416 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var locations_45144
            DeRefDS(_locations_45144);
            _locations_45144 = NOVALUE;
            // SubProg setup_build pc: 418 op: EXIT (61)
            goto LD; // [418] 455
            // SubProg setup_build pc: 420 op: NOP1 (159)
L13: // addr: 421 pc: 420 sub: 45065 op: 159
            // SubProg setup_build pc: 421 op: STARTLINE (58)

            /** buildsys.e:431							end for*/
            // SubProg setup_build pc: 423 op: ENDFOR_INT_UP1 (54)
            _i_45152 = _i_45152 + 1;
            goto L11; // [423] 369
L12: // addr: 428 pc: 423 sub: 45065 op: 54
            ;
        }
        // SubProg setup_build pc: 428 op: NOP1 (159)
L10: // addr: 429 pc: 428 sub: 45065 op: 159
        // SubProg setup_build pc: 429 op: NOP1 (159)
LF: // addr: 430 pc: 429 sub: 45065 op: 159
        // SubProg setup_build pc: 430 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var locations_45144
        DeRef(_locations_45144);
        _locations_45144 = NOVALUE;
        // SubProg setup_build pc: 432 op: STARTLINE (58)

        /** buildsys.e:436				if file_exists(user_library) then*/
        // SubProg setup_build pc: 434 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 436 op: PROC (27)
        RefDS(_57user_library_42142);
        _23684 = _16file_exists(_57user_library_42142);
        // SubProg setup_build pc: 440 op: IF (20)
        if (_23684 == 0) {
            DeRef(_23684);
            _23684 = NOVALUE;
            goto L14; // [440] 448
        }
        else {
            if (!IS_ATOM_INT(_23684) && DBL_PTR(_23684)->dbl == 0.0){
                DeRef(_23684);
                _23684 = NOVALUE;
                goto L14; // [440] 448
            }
            DeRef(_23684);
            _23684 = NOVALUE;
        }
        DeRef(_23684);
        _23684 = NOVALUE;
        // SubProg setup_build pc: 443 op: STARTLINE (58)

        /** buildsys.e:437					exit "translation kind"*/
        // SubProg setup_build pc: 445 op: EXIT (61)
        goto LD; // [445] 455
        // SubProg setup_build pc: 447 op: NOP1 (159)
L14: // addr: 448 pc: 447 sub: 45065 op: 159
        // SubProg setup_build pc: 448 op: STARTLINE (58)

        /** buildsys.e:439			end for -- tk*/
        // SubProg setup_build pc: 450 op: ENDFOR_INT_UP1 (54)
        _tk_45131 = _tk_45131 + 1;
        goto LC; // [450] 293
LD: // addr: 455 pc: 450 sub: 45065 op: 54
        ;
    }
    // SubProg setup_build pc: 455 op: NOP1 (159)
L3: // addr: 456 pc: 455 sub: 45065 op: 159
    // SubProg setup_build pc: 456 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var eudir_45119
    DeRef(_eudir_45119);
    _eudir_45119 = NOVALUE;
    // SubProg setup_build pc: 458 op: STARTLINE (58)

    /** buildsys.e:441		user_library = adjust_for_build_file(user_library)*/
    // SubProg setup_build pc: 460 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 462 op: PROC (27)
    RefDS(_57user_library_42142);
    _0 = _55adjust_for_build_file(_57user_library_42142);
    DeRefDS(_57user_library_42142);
    _57user_library_42142 = _0;
    // SubProg setup_build pc: 466 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 468 op: STARTLINE (58)

    /** buildsys.e:443		if TWINDOWS then*/
    // SubProg setup_build pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 472 op: IF (20)
    // SubProg setup_build pc: 527 op: STARTLINE (58)

    /** buildsys.e:455		elsif TOSX then*/
    // SubProg setup_build pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 531 op: IF (20)
    // SubProg setup_build pc: 552 op: STARTLINE (58)

    /** buildsys.e:460			if dll_option then*/
    // SubProg setup_build pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 556 op: IF (20)
    if (_57dll_option_42130 == 0)
    {
        goto L15; // [556] 567
    }
    else{
    }
    // SubProg setup_build pc: 559 op: STARTLINE (58)

    /** buildsys.e:461				exe_ext = ".so"*/
    // SubProg setup_build pc: 561 op: ASSIGN (18)
    RefDS(_23694);
    DeRefi(_exe_ext_45072);
    _exe_ext_45072 = _23694;
    // SubProg setup_build pc: 564 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 566 op: NOP1 (159)
L15: // addr: 567 pc: 566 sub: 45065 op: 159
    // SubProg setup_build pc: 567 op: NOP1 (159)
    // SubProg setup_build pc: 568 op: STARTLINE (58)

    /** buildsys.e:465		object compile_dir = get_eucompiledir()*/
    // SubProg setup_build pc: 570 op: PROC (27)
    _0 = _compile_dir_45196;
    _compile_dir_45196 = _57get_eucompiledir();
    DeRef(_0);
    // SubProg setup_build pc: 573 op: STARTLINE (58)

    /** buildsys.e:466		if not file_exists(compile_dir) then*/
    // SubProg setup_build pc: 575 op: PROC (27)
    Ref(_compile_dir_45196);
    _23696 = _16file_exists(_compile_dir_45196);
    // SubProg setup_build pc: 579 op: NOT_IFW (108)
    if (IS_ATOM_INT(_23696)) {
        if (_23696 != 0){
            DeRef(_23696);
            _23696 = NOVALUE;
            goto L16; // [579] 600
        }
    }
    else {
        if (DBL_PTR(_23696)->dbl != 0.0){
            DeRef(_23696);
            _23696 = NOVALUE;
            goto L16; // [579] 600
        }
    }
    DeRef(_23696);
    _23696 = NOVALUE;
    // SubProg setup_build pc: 582 op: STARTLINE (58)

    /** buildsys.e:467			printf(2,"Couldn't get include directory '%s'",{get_eucompiledir()})*/
    // SubProg setup_build pc: 584 op: PROC (27)
    _23699 = _57get_eucompiledir();
    // SubProg setup_build pc: 587 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23699;
    _23700 = MAKE_SEQ(_1);
    _23699 = NOVALUE;
    // SubProg setup_build pc: 591 op: PRINTF (38)
    EPrintf(2, _23698, _23700);
    DeRefDS(_23700);
    _23700 = NOVALUE;
    // SubProg setup_build pc: 595 op: STARTLINE (58)

    /** buildsys.e:468			abort(1)*/
    // SubProg setup_build pc: 597 op: ABORT (126)
    UserCleanup(1);
    // SubProg setup_build pc: 599 op: NOP1 (159)
L16: // addr: 600 pc: 599 sub: 45065 op: 159
    // SubProg setup_build pc: 600 op: STARTLINE (58)

    /** buildsys.e:471		integer bits = 32*/
    // SubProg setup_build pc: 602 op: ASSIGN_I (113)
    _bits_45207 = 32;
    // SubProg setup_build pc: 605 op: STARTLINE (58)

    /** buildsys.e:472		if TX86_64 then*/
    // SubProg setup_build pc: 607 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 609 op: IF (20)
    // SubProg setup_build pc: 618 op: STARTLINE (58)

    /** buildsys.e:476		switch compiler_type do*/
    // SubProg setup_build pc: 620 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 622 op: SWITCH_I (193)
    _0 = 0;
    switch ( _0 ){ 
        // SubProg setup_build pc: 627 op: STARTLINE (58)

        /** buildsys.e:477			case COMPILER_GCC then*/
        // SubProg setup_build pc: 629 op: CASE (186)
        case 1:
        // SubProg setup_build pc: 631 op: STARTLINE (58)

        /** buildsys.e:478				c_exe = compiler_prefix & "gcc"*/
        // SubProg setup_build pc: 633 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 635 op: CONCAT (15)
        Concat((object_ptr)&_c_exe_45067, _55compiler_prefix_44952, _23703);
        // SubProg setup_build pc: 639 op: STARTLINE (58)

        /** buildsys.e:479				l_exe = compiler_prefix & "gcc"*/
        // SubProg setup_build pc: 641 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 643 op: CONCAT (15)
        Concat((object_ptr)&_l_exe_45069, _55compiler_prefix_44952, _23703);
        // SubProg setup_build pc: 647 op: STARTLINE (58)

        /** buildsys.e:480				obj_ext = "o"*/
        // SubProg setup_build pc: 649 op: ASSIGN (18)
        RefDS(_23706);
        DeRefi(_obj_ext_45071);
        _obj_ext_45071 = _23706;
        // SubProg setup_build pc: 652 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 654 op: STARTLINE (58)

        /** buildsys.e:482				sequence m_flag = ""*/
        // SubProg setup_build pc: 656 op: ASSIGN (18)
        RefDS(_21958);
        DeRefi(_m_flag_45217);
        _m_flag_45217 = _21958;
        // SubProg setup_build pc: 659 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 661 op: STARTLINE (58)

        /** buildsys.e:483				if not TARM then*/
        // SubProg setup_build pc: 663 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 665 op: NOT_IFW (108)
        // SubProg setup_build pc: 668 op: STARTLINE (58)

        /** buildsys.e:485					m_flag = sprintf( "-m%d", bits )*/
        // SubProg setup_build pc: 670 op: SPRINTF (53)
        DeRefDSi(_m_flag_45217);
        _m_flag_45217 = EPrintf(-9999999, _23708, _bits_45207);
        // SubProg setup_build pc: 674 op: NOP1 (159)
        // SubProg setup_build pc: 675 op: STARTLINE (58)

        /** buildsys.e:488				if debug_option then*/
        // SubProg setup_build pc: 677 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 679 op: IF (20)
        if (_57debug_option_42140 == 0)
        {
            goto L17; // [679] 691
        }
        else{
        }
        // SubProg setup_build pc: 682 op: STARTLINE (58)

        /** buildsys.e:489					c_flags &= " -g3"*/
        // SubProg setup_build pc: 684 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45068, _c_flags_45068, _23710);
        // SubProg setup_build pc: 688 op: ELSE (23)
        goto L18; // [688] 698
        // SubProg setup_build pc: 690 op: NOP1 (159)
L17: // addr: 691 pc: 690 sub: 45065 op: 159
        // SubProg setup_build pc: 691 op: STARTLINE (58)

        /** buildsys.e:491					c_flags &= " -fomit-frame-pointer"*/
        // SubProg setup_build pc: 693 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45068, _c_flags_45068, _23712);
        // SubProg setup_build pc: 697 op: NOP1 (159)
L18: // addr: 698 pc: 697 sub: 45065 op: 159
        // SubProg setup_build pc: 698 op: STARTLINE (58)

        /** buildsys.e:494				if dll_option and not TWINDOWS then*/
        // SubProg setup_build pc: 700 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 702 op: SC1_AND_IF (146)
        if (_57dll_option_42130 == 0) {
            goto L19; // [702] 722
        }
        // SubProg setup_build pc: 706 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 708 op: NOT (7)
        _23715 = (0 == 0);
        // SubProg setup_build pc: 711 op: NOP1 (159)
        // SubProg setup_build pc: 712 op: IF (20)
        if (_23715 == 0)
        {
            DeRef(_23715);
            _23715 = NOVALUE;
            goto L19; // [712] 722
        }
        else{
            DeRef(_23715);
            _23715 = NOVALUE;
        }
        // SubProg setup_build pc: 715 op: STARTLINE (58)

        /** buildsys.e:495					c_flags &= " -fPIC"*/
        // SubProg setup_build pc: 717 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45068, _c_flags_45068, _23716);
        // SubProg setup_build pc: 721 op: NOP1 (159)
L19: // addr: 722 pc: 721 sub: 45065 op: 159
        // SubProg setup_build pc: 722 op: STARTLINE (58)

        /** buildsys.e:498				c_flags &= sprintf(" -c -w -fsigned-char -O2 %s -I%s -ffast-math",*/
        // SubProg setup_build pc: 724 op: PROC (27)
        _23719 = _57get_eucompiledir();
        // SubProg setup_build pc: 727 op: PROC (27)
        _23720 = _55adjust_for_build_file(_23719);
        _23719 = NOVALUE;
        // SubProg setup_build pc: 731 op: RIGHT_BRACE_2 (85)
        RefDS(_m_flag_45217);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _m_flag_45217;
        ((intptr_t *)_2)[2] = _23720;
        _23721 = MAKE_SEQ(_1);
        _23720 = NOVALUE;
        // SubProg setup_build pc: 735 op: SPRINTF (53)
        _23722 = EPrintf(-9999999, _23718, _23721);
        DeRefDS(_23721);
        _23721 = NOVALUE;
        // SubProg setup_build pc: 739 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45068, _c_flags_45068, _23722);
        DeRefDS(_23722);
        _23722 = NOVALUE;
        // SubProg setup_build pc: 743 op: STARTLINE (58)

        /** buildsys.e:501				if TWINDOWS and mno_cygwin then*/
        // SubProg setup_build pc: 745 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 747 op: SC1_AND_IF (146)
        if (0 == 0) {
            goto L1A; // [747] 764
        }
        // SubProg setup_build pc: 751 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 753 op: NOP1 (159)
        // SubProg setup_build pc: 754 op: IF (20)
        goto L1A; // [754] 764
        // SubProg setup_build pc: 757 op: STARTLINE (58)

        /** buildsys.e:504					c_flags &= " -mno-cygwin"*/
        // SubProg setup_build pc: 759 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45068, _c_flags_45068, _23725);
        // SubProg setup_build pc: 763 op: NOP1 (159)
L1A: // addr: 764 pc: 763 sub: 45065 op: 159
        // SubProg setup_build pc: 764 op: STARTLINE (58)

        /** buildsys.e:507				if build_system_type != BUILD_DIRECT then*/
        // SubProg setup_build pc: 766 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 768 op: NOTEQ_IFW_I (122)
        // SubProg setup_build pc: 785 op: STARTLINE (58)

        /** buildsys.e:510					l_flags = sprintf( " %s %s",*/
        // SubProg setup_build pc: 787 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 789 op: PROC (27)
        RefDS(_57user_library_42142);
        _23732 = _55adjust_for_command_line_passing(_57user_library_42142);
        // SubProg setup_build pc: 793 op: RIGHT_BRACE_2 (85)
        RefDS(_m_flag_45217);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23732;
        ((intptr_t *)_2)[2] = _m_flag_45217;
        _23733 = MAKE_SEQ(_1);
        _23732 = NOVALUE;
        // SubProg setup_build pc: 797 op: SPRINTF (53)
        DeRefi(_l_flags_45070);
        _l_flags_45070 = EPrintf(-9999999, _23731, _23733);
        DeRefDS(_23733);
        _23733 = NOVALUE;
        // SubProg setup_build pc: 801 op: NOP1 (159)
        // SubProg setup_build pc: 802 op: STARTLINE (58)

        /** buildsys.e:514				if dll_option then*/
        // SubProg setup_build pc: 804 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 806 op: IF (20)
        if (_57dll_option_42130 == 0)
        {
            goto L1B; // [806] 816
        }
        else{
        }
        // SubProg setup_build pc: 809 op: STARTLINE (58)

        /** buildsys.e:515					l_flags &= " -shared "*/
        // SubProg setup_build pc: 811 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _l_flags_45070, _23735);
        // SubProg setup_build pc: 815 op: NOP1 (159)
L1B: // addr: 816 pc: 815 sub: 45065 op: 159
        // SubProg setup_build pc: 816 op: STARTLINE (58)

        /** buildsys.e:518				if TLINUX then*/
        // SubProg setup_build pc: 818 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 820 op: IF (20)
        if (_39TLINUX_19985 == 0)
        {
            goto L1C; // [820] 832
        }
        else{
        }
        // SubProg setup_build pc: 823 op: STARTLINE (58)

        /** buildsys.e:519					l_flags &= " -ldl -lm -lpthread"*/
        // SubProg setup_build pc: 825 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _l_flags_45070, _23737);
        // SubProg setup_build pc: 829 op: ELSE (23)
        goto L1D; // [829] 901
        // SubProg setup_build pc: 831 op: NOP1 (159)
L1C: // addr: 832 pc: 831 sub: 45065 op: 159
        // SubProg setup_build pc: 832 op: STARTLINE (58)

        /** buildsys.e:520				elsif TBSD then*/
        // SubProg setup_build pc: 834 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 836 op: IF (20)
        // SubProg setup_build pc: 848 op: STARTLINE (58)

        /** buildsys.e:522				elsif TOSX then*/
        // SubProg setup_build pc: 850 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 852 op: IF (20)
        // SubProg setup_build pc: 864 op: STARTLINE (58)

        /** buildsys.e:524				elsif TWINDOWS then*/
        // SubProg setup_build pc: 866 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 868 op: IF (20)
        // SubProg setup_build pc: 900 op: NOP1 (159)
L1D: // addr: 901 pc: 900 sub: 45065 op: 159
        // SubProg setup_build pc: 901 op: STARTLINE (58)

        /** buildsys.e:537				rc_comp = compiler_prefix & "windres -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" [1] -O coff -o [2]"*/
        // SubProg setup_build pc: 903 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 905 op: PROC (27)
        _23748 = _16current_dir();
        // SubProg setup_build pc: 908 op: PROC (27)
        _23749 = _55adjust_for_build_file(_23748);
        _23748 = NOVALUE;
        // SubProg setup_build pc: 912 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _23750;
            concat_list[1] = _23749;
            concat_list[2] = _23747;
            concat_list[3] = _55compiler_prefix_44952;
            Concat_N((object_ptr)&_rc_comp_45074, concat_list, 4);
        }
        DeRef(_23749);
        _23749 = NOVALUE;
        // SubProg setup_build pc: 919 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var m_flag_45217
        DeRefi(_m_flag_45217);
        _m_flag_45217 = NOVALUE;
        // SubProg setup_build pc: 921 op: ELSE (23)
        goto L1E; // [921] 1125
        // SubProg setup_build pc: 923 op: STARTLINE (58)

        /** buildsys.e:539			case COMPILER_WATCOM then*/
        // SubProg setup_build pc: 925 op: CASE (186)
        case 2:
        // SubProg setup_build pc: 927 op: STARTLINE (58)

        /** buildsys.e:540				c_exe = compiler_prefix & "wcc386"*/
        // SubProg setup_build pc: 929 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 931 op: CONCAT (15)
        Concat((object_ptr)&_c_exe_45067, _55compiler_prefix_44952, _23752);
        // SubProg setup_build pc: 935 op: STARTLINE (58)

        /** buildsys.e:541				l_exe = compiler_prefix & "wlink"*/
        // SubProg setup_build pc: 937 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 939 op: CONCAT (15)
        Concat((object_ptr)&_l_exe_45069, _55compiler_prefix_44952, _23754);
        // SubProg setup_build pc: 943 op: STARTLINE (58)

        /** buildsys.e:542				obj_ext = "obj"*/
        // SubProg setup_build pc: 945 op: ASSIGN (18)
        RefDS(_23756);
        DeRefi(_obj_ext_45071);
        _obj_ext_45071 = _23756;
        // SubProg setup_build pc: 948 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 950 op: STARTLINE (58)

        /** buildsys.e:544				if debug_option then*/
        // SubProg setup_build pc: 952 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 954 op: IF (20)
        if (_57debug_option_42140 == 0)
        {
            goto L1F; // [954] 971
        }
        else{
        }
        // SubProg setup_build pc: 957 op: STARTLINE (58)

        /** buildsys.e:545					c_flags = " /d3"*/
        // SubProg setup_build pc: 959 op: ASSIGN (18)
        RefDS(_23757);
        DeRef(_c_flags_45068);
        _c_flags_45068 = _23757;
        // SubProg setup_build pc: 962 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 964 op: STARTLINE (58)

        /** buildsys.e:546					l_flags_begin &= " DEBUG ALL "*/
        // SubProg setup_build pc: 966 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_begin_45073, _l_flags_begin_45073, _23758);
        // SubProg setup_build pc: 970 op: NOP1 (159)
L1F: // addr: 971 pc: 970 sub: 45065 op: 159
        // SubProg setup_build pc: 971 op: STARTLINE (58)

        /** buildsys.e:549				l_flags &= sprintf(" OPTION STACK=%d ", { total_stack_size })*/
        // SubProg setup_build pc: 973 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 975 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _57total_stack_size_42145;
        _23761 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 979 op: SPRINTF (53)
        _23762 = EPrintf(-9999999, _23760, _23761);
        DeRefDS(_23761);
        _23761 = NOVALUE;
        // SubProg setup_build pc: 983 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _l_flags_45070, _23762);
        DeRefDS(_23762);
        _23762 = NOVALUE;
        // SubProg setup_build pc: 987 op: STARTLINE (58)

        /** buildsys.e:550				l_flags &= sprintf(" COMMIT STACK=%d ", { total_stack_size })*/
        // SubProg setup_build pc: 989 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 991 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _57total_stack_size_42145;
        _23765 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 995 op: SPRINTF (53)
        _23766 = EPrintf(-9999999, _23764, _23765);
        DeRefDS(_23765);
        _23765 = NOVALUE;
        // SubProg setup_build pc: 999 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _l_flags_45070, _23766);
        DeRefDS(_23766);
        _23766 = NOVALUE;
        // SubProg setup_build pc: 1003 op: STARTLINE (58)

        /** buildsys.e:551				l_flags &= " OPTION QUIET OPTION ELIMINATE OPTION CASEEXACT"*/
        // SubProg setup_build pc: 1005 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _l_flags_45070, _23768);
        // SubProg setup_build pc: 1009 op: STARTLINE (58)

        /** buildsys.e:553				if dll_option then*/
        // SubProg setup_build pc: 1011 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1013 op: IF (20)
        if (_57dll_option_42130 == 0)
        {
            goto L20; // [1013] 1039
        }
        else{
        }
        // SubProg setup_build pc: 1016 op: STARTLINE (58)

        /** buildsys.e:554					c_flags &= " /bd /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir) */
        // SubProg setup_build pc: 1018 op: PROC (27)
        Ref(_compile_dir_45196);
        _23771 = _55adjust_for_build_file(_compile_dir_45196);
        // SubProg setup_build pc: 1022 op: CONCAT (15)
        if (IS_SEQUENCE(_23770) && IS_ATOM(_23771)) {
            Ref(_23771);
            Append(&_23772, _23770, _23771);
        }
        else if (IS_ATOM(_23770) && IS_SEQUENCE(_23771)) {
        }
        else {
            Concat((object_ptr)&_23772, _23770, _23771);
        }
        DeRef(_23771);
        _23771 = NOVALUE;
        // SubProg setup_build pc: 1026 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45068, _c_flags_45068, _23772);
        DeRefDS(_23772);
        _23772 = NOVALUE;
        // SubProg setup_build pc: 1030 op: STARTLINE (58)

        /** buildsys.e:555					l_flags &= " SYSTEM NT_DLL initinstance terminstance"*/
        // SubProg setup_build pc: 1032 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _l_flags_45070, _23774);
        // SubProg setup_build pc: 1036 op: ELSE (23)
        goto L21; // [1036] 1077
        // SubProg setup_build pc: 1038 op: NOP1 (159)
L20: // addr: 1039 pc: 1038 sub: 45065 op: 159
        // SubProg setup_build pc: 1039 op: STARTLINE (58)

        /** buildsys.e:557					c_flags &= " /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir)*/
        // SubProg setup_build pc: 1041 op: PROC (27)
        Ref(_compile_dir_45196);
        _23777 = _55adjust_for_build_file(_compile_dir_45196);
        // SubProg setup_build pc: 1045 op: CONCAT (15)
        if (IS_SEQUENCE(_23776) && IS_ATOM(_23777)) {
            Ref(_23777);
            Append(&_23778, _23776, _23777);
        }
        else if (IS_ATOM(_23776) && IS_SEQUENCE(_23777)) {
        }
        else {
            Concat((object_ptr)&_23778, _23776, _23777);
        }
        DeRef(_23777);
        _23777 = NOVALUE;
        // SubProg setup_build pc: 1049 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45068, _c_flags_45068, _23778);
        DeRefDS(_23778);
        _23778 = NOVALUE;
        // SubProg setup_build pc: 1053 op: STARTLINE (58)

        /** buildsys.e:558					if con_option then*/
        // SubProg setup_build pc: 1055 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1057 op: IF (20)
        if (_57con_option_42132 == 0)
        {
            goto L22; // [1057] 1069
        }
        else{
        }
        // SubProg setup_build pc: 1060 op: STARTLINE (58)

        /** buildsys.e:560						l_flags = " SYSTEM NT" & l_flags*/
        // SubProg setup_build pc: 1062 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _23780, _l_flags_45070);
        // SubProg setup_build pc: 1066 op: ELSE (23)
        goto L23; // [1066] 1076
        // SubProg setup_build pc: 1068 op: NOP1 (159)
L22: // addr: 1069 pc: 1068 sub: 45065 op: 159
        // SubProg setup_build pc: 1069 op: STARTLINE (58)

        /** buildsys.e:562						l_flags = " SYSTEM NT_WIN RUNTIME WINDOWS=4.0" & l_flags*/
        // SubProg setup_build pc: 1071 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _23782, _l_flags_45070);
        // SubProg setup_build pc: 1075 op: NOP1 (159)
L23: // addr: 1076 pc: 1075 sub: 45065 op: 159
        // SubProg setup_build pc: 1076 op: NOP1 (159)
L21: // addr: 1077 pc: 1076 sub: 45065 op: 159
        // SubProg setup_build pc: 1077 op: STARTLINE (58)

        /** buildsys.e:566				l_flags &= sprintf(" FILE %s", { (user_library) })*/
        // SubProg setup_build pc: 1079 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1081 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_57user_library_42142);
        ((intptr_t*)_2)[1] = _57user_library_42142;
        _23785 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 1085 op: SPRINTF (53)
        _23786 = EPrintf(-9999999, _23784, _23785);
        DeRefDS(_23785);
        _23785 = NOVALUE;
        // SubProg setup_build pc: 1089 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45070, _l_flags_45070, _23786);
        DeRefDS(_23786);
        _23786 = NOVALUE;
        // SubProg setup_build pc: 1093 op: STARTLINE (58)

        /** buildsys.e:570				rc_comp = compiler_prefix &"wrc -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" -q -fo=[2] -ad [1] [3]"*/
        // SubProg setup_build pc: 1095 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1097 op: PROC (27)
        _23789 = _16current_dir();
        // SubProg setup_build pc: 1100 op: PROC (27)
        _23790 = _55adjust_for_build_file(_23789);
        _23789 = NOVALUE;
        // SubProg setup_build pc: 1104 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _23791;
            concat_list[1] = _23790;
            concat_list[2] = _23788;
            concat_list[3] = _55compiler_prefix_44952;
            Concat_N((object_ptr)&_rc_comp_45074, concat_list, 4);
        }
        DeRef(_23790);
        _23790 = NOVALUE;
        // SubProg setup_build pc: 1111 op: ELSE (23)
        goto L1E; // [1111] 1125
        // SubProg setup_build pc: 1113 op: STARTLINE (58)

        /** buildsys.e:571			case else*/
        // SubProg setup_build pc: 1115 op: CASE (186)
        default:
        // SubProg setup_build pc: 1117 op: STARTLINE (58)

        /** buildsys.e:572				CompileErr(43)*/
        // SubProg setup_build pc: 1119 op: PROC (27)
        RefDS(_21958);
        _49CompileErr(43, _21958, 0);
        // SubProg setup_build pc: 1124 op: NOPSWITCH (187)
    ;}L1E: // addr: 1125 pc: 1124 sub: 45065 op: 187
    // SubProg setup_build pc: 1125 op: STARTLINE (58)

    /** buildsys.e:575		if length(cflags) then*/
    // SubProg setup_build pc: 1127 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1129 op: LENGTH (42)
    // Known sequence length:
    _23794 = 0;
    // SubProg setup_build pc: 1132 op: IF (20)
    // SubProg setup_build pc: 1145 op: STARTLINE (58)

    /** buildsys.e:580		if length(extra_cflags) then*/
    // SubProg setup_build pc: 1147 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1149 op: LENGTH (42)
    // Known sequence length:
    _23795 = 0;
    // SubProg setup_build pc: 1152 op: IF (20)
    // SubProg setup_build pc: 1168 op: STARTLINE (58)

    /** buildsys.e:584		if length(lflags) then*/
    // SubProg setup_build pc: 1170 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1172 op: LENGTH (42)
    // Known sequence length:
    _23798 = 0;
    // SubProg setup_build pc: 1175 op: IF (20)
    // SubProg setup_build pc: 1195 op: STARTLINE (58)

    /** buildsys.e:589		if length(extra_lflags) then*/
    // SubProg setup_build pc: 1197 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1199 op: LENGTH (42)
    // Known sequence length:
    _23799 = 0;
    // SubProg setup_build pc: 1202 op: IF (20)
    // SubProg setup_build pc: 1218 op: STARTLINE (58)

    /** buildsys.e:593		return { */
    // SubProg setup_build pc: 1220 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1222 op: RIGHT_BRACE_N (31)
    _1 = NewS1(9);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_c_exe_45067);
    ((intptr_t*)_2)[1] = _c_exe_45067;
    RefDS(_c_flags_45068);
    ((intptr_t*)_2)[2] = _c_flags_45068;
    RefDS(_l_exe_45069);
    ((intptr_t*)_2)[3] = _l_exe_45069;
    RefDS(_l_flags_45070);
    ((intptr_t*)_2)[4] = _l_flags_45070;
    RefDS(_obj_ext_45071);
    ((intptr_t*)_2)[5] = _obj_ext_45071;
    RefDS(_exe_ext_45072);
    ((intptr_t*)_2)[6] = _exe_ext_45072;
    RefDS(_l_flags_begin_45073);
    ((intptr_t*)_2)[7] = _l_flags_begin_45073;
    RefDS(_rc_comp_45074);
    ((intptr_t*)_2)[8] = _rc_comp_45074;
    RefDS(_57user_library_42142);
    ((intptr_t*)_2)[9] = _57user_library_42142;
    _23802 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 1234 op: RETURNF (28)

// Exiting block BLOCK: setup_build

// block var c_exe_45067
    DeRefDS(_c_exe_45067);

// block var c_flags_45068
    DeRefDS(_c_flags_45068);

// block var l_exe_45069
    DeRefDS(_l_exe_45069);

// block var l_flags_45070
    DeRefDSi(_l_flags_45070);

// block var obj_ext_45071
    DeRefDSi(_obj_ext_45071);

// block var exe_ext_45072
    DeRefDSi(_exe_ext_45072);

// block var l_flags_begin_45073
    DeRefDSi(_l_flags_begin_45073);

// block var rc_comp_45074
    DeRefDS(_rc_comp_45074);

// block var l_names_45075
    DeRef(_l_names_45075);

// block var l_ext_45076
    DeRefi(_l_ext_45076);

// block var t_slash_45077
    DeRefi(_t_slash_45077);

// block var compile_dir_45196
    DeRef(_compile_dir_45196);

// block var bits_45207
    DeRef(_23635);
    _23635 = NOVALUE;
    return _23802;
    // SubProg setup_build pc: 1238 op: BADRETURNF (43)
    ;
}


void _55ensure_exename(object _ext_45364)
{
    object _23809 = NOVALUE; // 45379 23809
    object _23808 = NOVALUE; // 45378 23808
    object _23807 = NOVALUE; // 45375 23807
    object _23806 = NOVALUE; // 45372 23806
// skipping _23805  name type: 0
    object _23804 = NOVALUE; // 45368 23804
    object _23803 = NOVALUE; // 45367 23803
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ensure_exename pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ensure_exename pc: 3 op: STARTLINE (58)

    /** buildsys.e:602		if length(exe_name[D_ALTNAME]) = 0 then*/
    // SubProg ensure_exename pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 9 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _23803 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg ensure_exename pc: 13 op: LENGTH (42)
    if (IS_SEQUENCE(_23803)){
            _23804 = SEQ_PTR(_23803)->length;
    }
    else {
        _23804 = 1;
    }
    _23803 = NOVALUE;
    // SubProg ensure_exename pc: 16 op: EQUALS_IFW_I (121)
    if (_23804 != 0)
    goto L1; // [16] 67
    // SubProg ensure_exename pc: 20 op: STARTLINE (58)

    /** buildsys.e:603			exe_name[D_NAME] = current_dir() & SLASH & file0 & ext*/
    // SubProg ensure_exename pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 26 op: PROC (27)
    _23806 = _16current_dir();
    // SubProg ensure_exename pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 33 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _ext_45364;
        concat_list[1] = _57file0_44102;
        concat_list[2] = 47;
        concat_list[3] = _23806;
        Concat_N((object_ptr)&_23807, concat_list, 4);
    }
    DeRef(_23806);
    _23806 = NOVALUE;
    // SubProg ensure_exename pc: 40 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23807;
    if( _1 != _23807 ){
        DeRef(_1);
    }
    _23807 = NOVALUE;
    // SubProg ensure_exename pc: 44 op: STARTLINE (58)

    /** buildsys.e:604			exe_name[D_ALTNAME] = adjust_for_command_line_passing(exe_name[D_NAME])*/
    // SubProg ensure_exename pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 54 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _23808 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ensure_exename pc: 58 op: PROC (27)
    Ref(_23808);
    _23809 = _55adjust_for_command_line_passing(_23808);
    _23808 = NOVALUE;
    // SubProg ensure_exename pc: 62 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23809;
    if( _1 != _23809 ){
        DeRef(_1);
    }
    _23809 = NOVALUE;
    // SubProg ensure_exename pc: 66 op: NOP1 (159)
L1: // addr: 67 pc: 66 sub: 45362 op: 159
    // SubProg ensure_exename pc: 67 op: STARTLINE (58)

    /** buildsys.e:606	end procedure*/
    // SubProg ensure_exename pc: 69 op: RETURNP (29)

// Exiting block BLOCK: ensure_exename

// block var ext_45364
    DeRefDS(_ext_45364);
    _23803 = NOVALUE;
    return;
    // SubProg ensure_exename pc: 72 op: BADRETURNF (43)
    ;
}


void _55write_objlink_file()
{
    object _settings_45382 = NOVALUE;
    object _fh_45384 = NOVALUE;
    object _s_45432 = NOVALUE;
// skipping _23859  name type: 0
    object _23858 = NOVALUE; // 45477 23858
// skipping _23857  name type: 0
    object _23856 = NOVALUE; // 45471 23856
    object _23855 = NOVALUE; // 45469 23855
    object _23854 = NOVALUE; // 45468 23854
    object _23853 = NOVALUE; // 45467 23853
    object _23852 = NOVALUE; // 45465 23852
    object _23851 = NOVALUE; // 45463 23851
    object _23850 = NOVALUE; // 45461 23850
    object _23849 = NOVALUE; // 45459 23849
    object _23848 = NOVALUE; // 45457 23848
    object _23847 = NOVALUE; // 45455 23847
    object _23846 = NOVALUE; // 45453 23846
    object _23845 = NOVALUE; // 45451 23845
    object _23843 = NOVALUE; // 45448 23843
    object _23842 = NOVALUE; // 45445 23842
    object _23841 = NOVALUE; // 45443 23841
    object _23840 = NOVALUE; // 45441 23840
// skipping _23839  name type: 0
    object _23838 = NOVALUE; // 45435 23838
    object _23837 = NOVALUE; // 45429 23837
    object _23836 = NOVALUE; // 45428 23836
    object _23835 = NOVALUE; // 45426 23835
    object _23834 = NOVALUE; // 45425 23834
    object _23833 = NOVALUE; // 45423 23833
// skipping _23832  name type: 0
// skipping _23831  name type: 0
// skipping _23830  name type: 0
// skipping _23828  name type: 0
    object _23827 = NOVALUE; // 45413 23827
    object _23826 = NOVALUE; // 45411 23826
// skipping _23824  name type: 0
    object _23823 = NOVALUE; // 45406 23823
    object _23822 = NOVALUE; // 45405 23822
    object _23821 = NOVALUE; // 45402 23821
    object _23820 = NOVALUE; // 45398 23820
    object _23819 = NOVALUE; // 45396 23819
// skipping _23818  name type: 0
    object _23817 = NOVALUE; // 45394 23817
    object _23816 = NOVALUE; // 45393 23816
    object _23815 = NOVALUE; // 45391 23815
// skipping _23814  name type: 0
    object _23812 = NOVALUE; // 45388 23812
// skipping _23810  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_objlink_file pc: 1 op: STARTLINE (58)

    /** buildsys.e:612		sequence settings = setup_build()*/
    // SubProg write_objlink_file pc: 3 op: PROC (27)
    _0 = _settings_45382;
    _settings_45382 = _55setup_build();
    DeRef(_0);
    // SubProg write_objlink_file pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_objlink_file pc: 8 op: STARTLINE (58)

    /** buildsys.e:613		integer fh = open(output_dir & file0 & ".lnk", "wb")*/
    // SubProg write_objlink_file pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 14 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23811;
        concat_list[1] = _57file0_44102;
        concat_list[2] = _57output_dir_42144;
        Concat_N((object_ptr)&_23812, concat_list, 3);
    }
    // SubProg write_objlink_file pc: 20 op: OPEN (37)
    _fh_45384 = EOpen(_23812, _23813, 0);
    DeRefDS(_23812);
    _23812 = NOVALUE;
    // SubProg write_objlink_file pc: 25 op: STARTLINE (58)

    /** buildsys.e:615		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg write_objlink_file pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45382);
    _23815 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg write_objlink_file pc: 31 op: PROC (27)
    Ref(_23815);
    _55ensure_exename(_23815);
    _23815 = NOVALUE;
    // SubProg write_objlink_file pc: 34 op: STARTLINE (58)

    /** buildsys.e:617		if length(settings[SETUP_LFLAGS_BEGIN]) > 0 then*/
    // SubProg write_objlink_file pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45382);
    _23816 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg write_objlink_file pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_23816)){
            _23817 = SEQ_PTR(_23816)->length;
    }
    else {
        _23817 = 1;
    }
    _23816 = NOVALUE;
    // SubProg write_objlink_file pc: 43 op: GREATER_IFW_I (124)
    if (_23817 <= 0)
    goto L1; // [43] 63
    // SubProg write_objlink_file pc: 47 op: STARTLINE (58)

    /** buildsys.e:618			puts(fh, settings[SETUP_LFLAGS_BEGIN] & HOSTNL)*/
    // SubProg write_objlink_file pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45382);
    _23819 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg write_objlink_file pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 55 op: CONCAT (15)
    if (IS_SEQUENCE(_23819) && IS_ATOM(_39HOSTNL_20005)) {
    }
    else if (IS_ATOM(_23819) && IS_SEQUENCE(_39HOSTNL_20005)) {
        Ref(_23819);
        Prepend(&_23820, _39HOSTNL_20005, _23819);
    }
    else {
        Concat((object_ptr)&_23820, _23819, _39HOSTNL_20005);
        _23819 = NOVALUE;
    }
    _23819 = NOVALUE;
    // SubProg write_objlink_file pc: 59 op: PUTS (44)
    EPuts(_fh_45384, _23820); // DJP 
    DeRefDS(_23820);
    _23820 = NOVALUE;
    // SubProg write_objlink_file pc: 62 op: NOP1 (159)
L1: // addr: 63 pc: 62 sub: 45380 op: 159
    // SubProg write_objlink_file pc: 63 op: STARTLINE (58)

    /** buildsys.e:621		for i = 1 to length(generated_files) do*/
    // SubProg write_objlink_file pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42134)){
            _23821 = SEQ_PTR(_57generated_files_42134)->length;
    }
    else {
        _23821 = 1;
    }
    // SubProg write_objlink_file pc: 70 op: FOR_I (125)
    {
        object _i_45400;
        _i_45400 = 1;
L2: // addr: 77 pc: 70 sub: 45380 op: 125
        if (_i_45400 > _23821){
            goto L3; // [70] 132
        }
        // SubProg write_objlink_file pc: 77 op: STARTLINE (58)

        /** buildsys.e:622			if match(".o", generated_files[i]) then*/
        // SubProg write_objlink_file pc: 79 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 81 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _23822 = (object)*(((s1_ptr)_2)->base + _i_45400);
        // SubProg write_objlink_file pc: 85 op: MATCH_FROM (177)
        _23823 = e_match_from(_23129, _23822, 1);
        _23822 = NOVALUE;
        // SubProg write_objlink_file pc: 90 op: IF (20)
        if (_23823 == 0)
        {
            _23823 = NOVALUE;
            goto L4; // [90] 125
        }
        else{
            _23823 = NOVALUE;
        }
        // SubProg write_objlink_file pc: 93 op: STARTLINE (58)

        /** buildsys.e:623				if compiler_type = COMPILER_WATCOM then*/
        // SubProg write_objlink_file pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 97 op: EQUALS_IFW_I (121)
        // SubProg write_objlink_file pc: 107 op: STARTLINE (58)

        /** buildsys.e:627				puts(fh, generated_files[i] & HOSTNL)*/
        // SubProg write_objlink_file pc: 109 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 111 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _23826 = (object)*(((s1_ptr)_2)->base + _i_45400);
        // SubProg write_objlink_file pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 117 op: CONCAT (15)
        Concat((object_ptr)&_23827, _23826, _39HOSTNL_20005);
        _23826 = NOVALUE;
        _23826 = NOVALUE;
        // SubProg write_objlink_file pc: 121 op: PUTS (44)
        EPuts(_fh_45384, _23827); // DJP 
        DeRefDS(_23827);
        _23827 = NOVALUE;
        // SubProg write_objlink_file pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 45380 op: 159
        // SubProg write_objlink_file pc: 125 op: STARTLINE (58)

        /** buildsys.e:629		end for*/
        // SubProg write_objlink_file pc: 127 op: ENDFOR_INT_UP1 (54)
        _i_45400 = _i_45400 + 1;
        goto L2; // [127] 77
L3: // addr: 132 pc: 127 sub: 45380 op: 54
        ;
    }
    // SubProg write_objlink_file pc: 132 op: STARTLINE (58)

    /** buildsys.e:631		if compiler_type = COMPILER_WATCOM then*/
    // SubProg write_objlink_file pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 136 op: EQUALS_IFW_I (121)
    // SubProg write_objlink_file pc: 165 op: STARTLINE (58)

    /** buildsys.e:635		puts(fh, trim(settings[SETUP_LFLAGS] & HOSTNL))*/
    // SubProg write_objlink_file pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45382);
    _23833 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg write_objlink_file pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 173 op: CONCAT (15)
    if (IS_SEQUENCE(_23833) && IS_ATOM(_39HOSTNL_20005)) {
    }
    else if (IS_ATOM(_23833) && IS_SEQUENCE(_39HOSTNL_20005)) {
        Ref(_23833);
        Prepend(&_23834, _39HOSTNL_20005, _23833);
    }
    else {
        Concat((object_ptr)&_23834, _23833, _39HOSTNL_20005);
        _23833 = NOVALUE;
    }
    _23833 = NOVALUE;
    // SubProg write_objlink_file pc: 177 op: PROC (27)
    RefDS(_3069);
    _23835 = _20trim(_23834, _3069, 0);
    _23834 = NOVALUE;
    // SubProg write_objlink_file pc: 183 op: PUTS (44)
    EPuts(_fh_45384, _23835); // DJP 
    DeRef(_23835);
    _23835 = NOVALUE;
    // SubProg write_objlink_file pc: 186 op: STARTLINE (58)

    /** buildsys.e:637		if compiler_type = COMPILER_WATCOM and dll_option then*/
    // SubProg write_objlink_file pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 190 op: EQUALS (3)
    _23836 = (0 == 2);
    // SubProg write_objlink_file pc: 194 op: SC1_AND_IF (146)
    if (_23836 == 0) {
        goto L5; // [194] 361
    }
    // SubProg write_objlink_file pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 200 op: NOP1 (159)
    // SubProg write_objlink_file pc: 201 op: IF (20)
    if (_57dll_option_42130 == 0)
    {
        goto L5; // [201] 361
    }
    else{
    }
    // SubProg write_objlink_file pc: 204 op: STARTLINE (58)

    /** buildsys.e:638			puts(fh, HOSTNL)*/
    // SubProg write_objlink_file pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 208 op: PUTS (44)
    EPuts(_fh_45384, _39HOSTNL_20005); // DJP 
    // SubProg write_objlink_file pc: 211 op: STARTLINE (58)

    /** buildsys.e:640			object s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg write_objlink_file pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 217 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23838 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
    // SubProg write_objlink_file pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 223 op: RHS_SUBS_CHECK (92)
    DeRef(_s_45432);
    _2 = (object)SEQ_PTR(_23838);
    _s_45432 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45432);
    _23838 = NOVALUE;
    // SubProg write_objlink_file pc: 227 op: STARTLINE (58)

    /** buildsys.e:641			while s do*/
    // SubProg write_objlink_file pc: 229 op: NOP2 (110)
    // SubProg write_objlink_file pc: 231 op: NOPWHILE (158)
L6: // addr: 232 pc: 231 sub: 45380 op: 158
    // SubProg write_objlink_file pc: 232 op: WHILE (47)
    if (_s_45432 <= 0) {
        if (_s_45432 == 0) {
            goto L7; // [232] 360
        }
        else {
            if (!IS_ATOM_INT(_s_45432) && DBL_PTR(_s_45432)->dbl == 0.0){
                goto L7; // [232] 360
            }
        }
    }
    // SubProg write_objlink_file pc: 235 op: STARTLINE (58)

    /** buildsys.e:642				if eu:find(SymTab[s][S_TOKEN], RTN_TOKS) then*/
    // SubProg write_objlink_file pc: 237 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 239 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_s_45432)){
        _23840 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45432)->dbl));
    }
    else{
        _23840 = (object)*(((s1_ptr)_2)->base + _s_45432);
    }
    // SubProg write_objlink_file pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 245 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23840);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _23841 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _23841 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _23840 = NOVALUE;
    // SubProg write_objlink_file pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 251 op: FIND_FROM (176)
    _23842 = find_from(_23841, _29RTN_TOKS_12080, 1);
    _23841 = NOVALUE;
    // SubProg write_objlink_file pc: 256 op: IF (20)
    if (_23842 == 0)
    {
        _23842 = NOVALUE;
        goto L8; // [256] 341
    }
    else{
        _23842 = NOVALUE;
    }
    // SubProg write_objlink_file pc: 259 op: STARTLINE (58)

    /** buildsys.e:643					if is_exported( s ) then*/
    // SubProg write_objlink_file pc: 261 op: PROC (27)
    Ref(_s_45432);
    _23843 = _57is_exported(_s_45432);
    // SubProg write_objlink_file pc: 265 op: IF (20)
    if (_23843 == 0) {
        DeRef(_23843);
        _23843 = NOVALUE;
        goto L9; // [265] 340
    }
    else {
        if (!IS_ATOM_INT(_23843) && DBL_PTR(_23843)->dbl == 0.0){
            DeRef(_23843);
            _23843 = NOVALUE;
            goto L9; // [265] 340
        }
        DeRef(_23843);
        _23843 = NOVALUE;
    }
    DeRef(_23843);
    _23843 = NOVALUE;
    // SubProg write_objlink_file pc: 268 op: STARTLINE (58)

    /** buildsys.e:644						printf(fh, "EXPORT %s='__%d%s@%d'" & HOSTNL,*/
    // SubProg write_objlink_file pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 272 op: CONCAT (15)
    Concat((object_ptr)&_23845, _23844, _39HOSTNL_20005);
    // SubProg write_objlink_file pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_s_45432)){
        _23846 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45432)->dbl));
    }
    else{
        _23846 = (object)*(((s1_ptr)_2)->base + _s_45432);
    }
    // SubProg write_objlink_file pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23846);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _23847 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _23847 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _23846 = NOVALUE;
    // SubProg write_objlink_file pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 290 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_s_45432)){
        _23848 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45432)->dbl));
    }
    else{
        _23848 = (object)*(((s1_ptr)_2)->base + _s_45432);
    }
    // SubProg write_objlink_file pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 296 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23848);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _23849 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _23849 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _23848 = NOVALUE;
    // SubProg write_objlink_file pc: 300 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 302 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_s_45432)){
        _23850 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45432)->dbl));
    }
    else{
        _23850 = (object)*(((s1_ptr)_2)->base + _s_45432);
    }
    // SubProg write_objlink_file pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 308 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23850);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _23851 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _23851 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _23850 = NOVALUE;
    // SubProg write_objlink_file pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 314 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_s_45432)){
        _23852 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45432)->dbl));
    }
    else{
        _23852 = (object)*(((s1_ptr)_2)->base + _s_45432);
    }
    // SubProg write_objlink_file pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 320 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23852);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _23853 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _23853 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _23852 = NOVALUE;
    // SubProg write_objlink_file pc: 324 op: MULTIPLY (13)
    if (IS_ATOM_INT(_23853)) {
        if (_23853 == (short)_23853){
            _23854 = _23853 * 4;
        }
        else{
            _23854 = NewDouble(_23853 * (eudouble)4);
        }
    }
    else {
        _23854 = binary_op(MULTIPLY, _23853, 4);
    }
    _23853 = NOVALUE;
    // SubProg write_objlink_file pc: 328 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23847);
    ((intptr_t*)_2)[1] = _23847;
    Ref(_23849);
    ((intptr_t*)_2)[2] = _23849;
    Ref(_23851);
    ((intptr_t*)_2)[3] = _23851;
    ((intptr_t*)_2)[4] = _23854;
    _23855 = MAKE_SEQ(_1);
    _23854 = NOVALUE;
    _23851 = NOVALUE;
    _23849 = NOVALUE;
    _23847 = NOVALUE;
    // SubProg write_objlink_file pc: 335 op: PRINTF (38)
    EPrintf(_fh_45384, _23845, _23855);
    DeRefDS(_23845);
    _23845 = NOVALUE;
    DeRefDS(_23855);
    _23855 = NOVALUE;
    // SubProg write_objlink_file pc: 339 op: NOP1 (159)
L9: // addr: 340 pc: 339 sub: 45380 op: 159
    // SubProg write_objlink_file pc: 340 op: NOP1 (159)
L8: // addr: 341 pc: 340 sub: 45380 op: 159
    // SubProg write_objlink_file pc: 341 op: STARTLINE (58)

    /** buildsys.e:649				s = SymTab[s][S_NEXT]*/
    // SubProg write_objlink_file pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 345 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_s_45432)){
        _23856 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45432)->dbl));
    }
    else{
        _23856 = (object)*(((s1_ptr)_2)->base + _s_45432);
    }
    // SubProg write_objlink_file pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 351 op: RHS_SUBS_CHECK (92)
    DeRef(_s_45432);
    _2 = (object)SEQ_PTR(_23856);
    _s_45432 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45432);
    _23856 = NOVALUE;
    // SubProg write_objlink_file pc: 355 op: STARTLINE (58)

    /** buildsys.e:650			end while*/
    // SubProg write_objlink_file pc: 357 op: ENDWHILE (22)
    goto L6; // [357] 232
    // SubProg write_objlink_file pc: 359 op: NOP1 (159)
L7: // addr: 360 pc: 359 sub: 45380 op: 159
    // SubProg write_objlink_file pc: 360 op: NOP1 (159)
L5: // addr: 361 pc: 360 sub: 45380 op: 159
    // SubProg write_objlink_file pc: 361 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var s_45432
    DeRef(_s_45432);
    _s_45432 = NOVALUE;
    // SubProg write_objlink_file pc: 363 op: STARTLINE (58)

    /** buildsys.e:653		close(fh)*/
    // SubProg write_objlink_file pc: 365 op: CLOSE (86)
    EClose(_fh_45384);
    // SubProg write_objlink_file pc: 367 op: STARTLINE (58)

    /** buildsys.e:655		generated_files = append(generated_files, file0 & ".lnk")*/
    // SubProg write_objlink_file pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 371 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 373 op: CONCAT (15)
    Concat((object_ptr)&_23858, _57file0_44102, _23811);
    // SubProg write_objlink_file pc: 377 op: APPEND (35)
    RefDS(_23858);
    Append(&_57generated_files_42134, _57generated_files_42134, _23858);
    DeRefDS(_23858);
    _23858 = NOVALUE;
    // SubProg write_objlink_file pc: 381 op: SEQUENCE_CHECK (97)
    // SubProg write_objlink_file pc: 383 op: STARTLINE (58)

    /** buildsys.e:656	end procedure*/
    // SubProg write_objlink_file pc: 385 op: RETURNP (29)

// Exiting block BLOCK: write_objlink_file

// block var settings_45382
    DeRef(_settings_45382);

// block var fh_45384
    _23816 = NOVALUE;
    DeRef(_23836);
    _23836 = NOVALUE;
    return;
    // SubProg write_objlink_file pc: 388 op: BADRETURNF (43)
    ;
}


void _55write_makefile_srcobj_list(object _fh_45481)
{
    object _file_count_45512 = NOVALUE;
    object _23891 = NOVALUE; // 45544 23891
    object _23890 = NOVALUE; // 45543 23890
    object _23889 = NOVALUE; // 45541 23889
// skipping _23888  name type: 0
    object _23887 = NOVALUE; // 45537 23887
    object _23886 = NOVALUE; // 45533 23886
    object _23885 = NOVALUE; // 45532 23885
    object _23883 = NOVALUE; // 45527 23883
    object _23882 = NOVALUE; // 45526 23882
// skipping _23881  name type: 0
    object _23880 = NOVALUE; // 45523 23880
    object _23879 = NOVALUE; // 45520 23879
    object _23878 = NOVALUE; // 45519 23878
    object _23877 = NOVALUE; // 45516 23877
    object _23876 = NOVALUE; // 45511 23876
    object _23875 = NOVALUE; // 45510 23875
    object _23873 = NOVALUE; // 45505 23873
    object _23872 = NOVALUE; // 45504 23872
    object _23871 = NOVALUE; // 45502 23871
// skipping _23869  name type: 0
// skipping _23868  name type: 0
    object _23866 = NOVALUE; // 45495 23866
    object _23865 = NOVALUE; // 45494 23865
    object _23864 = NOVALUE; // 45493 23864
    object _23863 = NOVALUE; // 45490 23863
    object _23862 = NOVALUE; // 45486 23862
    object _23861 = NOVALUE; // 45485 23861
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_srcobj_list pc: 1 op: INTEGER_CHECK (96)
    // SubProg write_makefile_srcobj_list pc: 3 op: STARTLINE (58)

    /** buildsys.e:660		printf(fh, "%s_SOURCES =", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 7 op: PROC (27)
    RefDS(_57file0_44102);
    _23861 = _20upper(_57file0_44102);
    // SubProg write_makefile_srcobj_list pc: 11 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23861;
    _23862 = MAKE_SEQ(_1);
    _23861 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 15 op: PRINTF (38)
    EPrintf(_fh_45481, _23860, _23862);
    DeRefDS(_23862);
    _23862 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 19 op: STARTLINE (58)

    /** buildsys.e:661		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42134)){
            _23863 = SEQ_PTR(_57generated_files_42134)->length;
    }
    else {
        _23863 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 26 op: FOR_I (125)
    {
        object _i_45488;
        _i_45488 = 1;
L1: // addr: 33 pc: 26 sub: 45479 op: 125
        if (_i_45488 > _23863){
            goto L2; // [26] 94
        }
        // SubProg write_makefile_srcobj_list pc: 33 op: STARTLINE (58)

        /** buildsys.e:662			if generated_files[i][$] = 'c' then*/
        // SubProg write_makefile_srcobj_list pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _23864 = (object)*(((s1_ptr)_2)->base + _i_45488);
        // SubProg write_makefile_srcobj_list pc: 41 op: LENGTH (42)
        if (IS_SEQUENCE(_23864)){
                _23865 = SEQ_PTR(_23864)->length;
        }
        else {
            _23865 = 1;
        }
        // SubProg write_makefile_srcobj_list pc: 44 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23864);
        _23866 = (object)*(((s1_ptr)_2)->base + _23865);
        _23864 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 48 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _23866, 99)){
            _23866 = NOVALUE;
            goto L3; // [48] 87
        }
        _23866 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 52 op: STARTLINE (58)

        /** buildsys.e:663				if i > 1 then*/
        // SubProg write_makefile_srcobj_list pc: 54 op: GREATER_IFW_I (124)
        if (_i_45488 <= 1)
        goto L4; // [54] 71
        // SubProg write_makefile_srcobj_list pc: 58 op: STARTLINE (58)

        /** buildsys.e:664					printf(fh, " \\%s\t", { HOSTNL }  )*/
        // SubProg write_makefile_srcobj_list pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 62 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_39HOSTNL_20005);
        ((intptr_t*)_2)[1] = _39HOSTNL_20005;
        _23871 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 66 op: PRINTF (38)
        EPrintf(_fh_45481, _23870, _23871);
        DeRefDS(_23871);
        _23871 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 45479 op: 159
        // SubProg write_makefile_srcobj_list pc: 71 op: STARTLINE (58)

        /** buildsys.e:666				puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 75 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _23872 = (object)*(((s1_ptr)_2)->base + _i_45488);
        // SubProg write_makefile_srcobj_list pc: 79 op: CONCAT (15)
        Concat((object_ptr)&_23873, _23377, _23872);
        _23872 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 83 op: PUTS (44)
        EPuts(_fh_45481, _23873); // DJP 
        DeRefDS(_23873);
        _23873 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 45479 op: 159
        // SubProg write_makefile_srcobj_list pc: 87 op: STARTLINE (58)

        /** buildsys.e:668		end for*/
        // SubProg write_makefile_srcobj_list pc: 89 op: ENDFOR_INT_UP1 (54)
        _i_45488 = _i_45488 + 1;
        goto L1; // [89] 33
L2: // addr: 94 pc: 89 sub: 45479 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 94 op: STARTLINE (58)

    /** buildsys.e:669		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 98 op: PUTS (44)
    EPuts(_fh_45481, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_srcobj_list pc: 101 op: STARTLINE (58)

    /** buildsys.e:671		printf(fh, "%s_OBJECTS =", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 105 op: PROC (27)
    RefDS(_57file0_44102);
    _23875 = _20upper(_57file0_44102);
    // SubProg write_makefile_srcobj_list pc: 109 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23875;
    _23876 = MAKE_SEQ(_1);
    _23875 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 113 op: PRINTF (38)
    EPrintf(_fh_45481, _23874, _23876);
    DeRefDS(_23876);
    _23876 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 117 op: STARTLINE (58)

    /** buildsys.e:672		integer file_count = 0*/
    // SubProg write_makefile_srcobj_list pc: 119 op: ASSIGN_I (113)
    _file_count_45512 = 0;
    // SubProg write_makefile_srcobj_list pc: 122 op: STARTLINE (58)

    /** buildsys.e:673		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42134)){
            _23877 = SEQ_PTR(_57generated_files_42134)->length;
    }
    else {
        _23877 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 129 op: FOR_I (125)
    {
        object _i_45514;
        _i_45514 = 1;
L5: // addr: 136 pc: 129 sub: 45479 op: 125
        if (_i_45514 > _23877){
            goto L6; // [129] 199
        }
        // SubProg write_makefile_srcobj_list pc: 136 op: STARTLINE (58)

        /** buildsys.e:674			if match(".o", generated_files[i]) then*/
        // SubProg write_makefile_srcobj_list pc: 138 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 140 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _23878 = (object)*(((s1_ptr)_2)->base + _i_45514);
        // SubProg write_makefile_srcobj_list pc: 144 op: MATCH_FROM (177)
        _23879 = e_match_from(_23129, _23878, 1);
        _23878 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 149 op: IF (20)
        if (_23879 == 0)
        {
            _23879 = NOVALUE;
            goto L7; // [149] 192
        }
        else{
            _23879 = NOVALUE;
        }
        // SubProg write_makefile_srcobj_list pc: 152 op: STARTLINE (58)

        /** buildsys.e:675				if file_count then*/
        // SubProg write_makefile_srcobj_list pc: 154 op: IF (20)
        if (_file_count_45512 == 0)
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
        RefDS(_39HOSTNL_20005);
        ((intptr_t*)_2)[1] = _39HOSTNL_20005;
        _23880 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 165 op: PRINTF (38)
        EPrintf(_fh_45481, _23870, _23880);
        DeRefDS(_23880);
        _23880 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 169 op: NOP1 (159)
L8: // addr: 170 pc: 169 sub: 45479 op: 159
        // SubProg write_makefile_srcobj_list pc: 170 op: STARTLINE (58)

        /** buildsys.e:678				file_count += 1*/
        // SubProg write_makefile_srcobj_list pc: 172 op: PLUS1_I (117)
        _file_count_45512 = _file_count_45512 + 1;
        // SubProg write_makefile_srcobj_list pc: 176 op: STARTLINE (58)

        /** buildsys.e:679				puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 178 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 180 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _23882 = (object)*(((s1_ptr)_2)->base + _i_45514);
        // SubProg write_makefile_srcobj_list pc: 184 op: CONCAT (15)
        Concat((object_ptr)&_23883, _23377, _23882);
        _23882 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 188 op: PUTS (44)
        EPuts(_fh_45481, _23883); // DJP 
        DeRefDS(_23883);
        _23883 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 45479 op: 159
        // SubProg write_makefile_srcobj_list pc: 192 op: STARTLINE (58)

        /** buildsys.e:681		end for*/
        // SubProg write_makefile_srcobj_list pc: 194 op: ENDFOR_INT_UP1 (54)
        _i_45514 = _i_45514 + 1;
        goto L5; // [194] 136
L6: // addr: 199 pc: 194 sub: 45479 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 199 op: STARTLINE (58)

    /** buildsys.e:682		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 203 op: PUTS (44)
    EPuts(_fh_45481, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_srcobj_list pc: 206 op: STARTLINE (58)

    /** buildsys.e:684		printf(fh, "%s_GENERATED_FILES = ", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 210 op: PROC (27)
    RefDS(_57file0_44102);
    _23885 = _20upper(_57file0_44102);
    // SubProg write_makefile_srcobj_list pc: 214 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23885;
    _23886 = MAKE_SEQ(_1);
    _23885 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 218 op: PRINTF (38)
    EPrintf(_fh_45481, _23884, _23886);
    DeRefDS(_23886);
    _23886 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 222 op: STARTLINE (58)

    /** buildsys.e:685		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 226 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42134)){
            _23887 = SEQ_PTR(_57generated_files_42134)->length;
    }
    else {
        _23887 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 229 op: FOR_I (125)
    {
        object _i_45535;
        _i_45535 = 1;
L9: // addr: 236 pc: 229 sub: 45479 op: 125
        if (_i_45535 > _23887){
            goto LA; // [229] 277
        }
        // SubProg write_makefile_srcobj_list pc: 236 op: STARTLINE (58)

        /** buildsys.e:686			if i > 1 then*/
        // SubProg write_makefile_srcobj_list pc: 238 op: GREATER_IFW_I (124)
        if (_i_45535 <= 1)
        goto LB; // [238] 255
        // SubProg write_makefile_srcobj_list pc: 242 op: STARTLINE (58)

        /** buildsys.e:687				printf(fh, " \\%s\t", { HOSTNL }  )*/
        // SubProg write_makefile_srcobj_list pc: 244 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 246 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_39HOSTNL_20005);
        ((intptr_t*)_2)[1] = _39HOSTNL_20005;
        _23889 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 250 op: PRINTF (38)
        EPrintf(_fh_45481, _23870, _23889);
        DeRefDS(_23889);
        _23889 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 254 op: NOP1 (159)
LB: // addr: 255 pc: 254 sub: 45479 op: 159
        // SubProg write_makefile_srcobj_list pc: 255 op: STARTLINE (58)

        /** buildsys.e:689			puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 259 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _23890 = (object)*(((s1_ptr)_2)->base + _i_45535);
        // SubProg write_makefile_srcobj_list pc: 263 op: CONCAT (15)
        Concat((object_ptr)&_23891, _23377, _23890);
        _23890 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 267 op: PUTS (44)
        EPuts(_fh_45481, _23891); // DJP 
        DeRefDS(_23891);
        _23891 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 270 op: STARTLINE (58)

        /** buildsys.e:690		end for*/
        // SubProg write_makefile_srcobj_list pc: 272 op: ENDFOR_INT_UP1 (54)
        _i_45535 = _i_45535 + 1;
        goto L9; // [272] 236
LA: // addr: 277 pc: 272 sub: 45479 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 277 op: STARTLINE (58)

    /** buildsys.e:691		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 281 op: PUTS (44)
    EPuts(_fh_45481, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_srcobj_list pc: 284 op: STARTLINE (58)

    /** buildsys.e:692	end procedure*/
    // SubProg write_makefile_srcobj_list pc: 286 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_srcobj_list

// block var fh_45481

// block var file_count_45512
    return;
    // SubProg write_makefile_srcobj_list pc: 289 op: BADRETURNF (43)
    ;
}


object _55windows_to_mingw_path(object _s_45548)
{
    object _23893 = NOVALUE; // 45550 23893
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg windows_to_mingw_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg windows_to_mingw_path pc: 3 op: STARTLINE (58)

    /** buildsys.e:701		ifdef TEST_FOR_WIN9X_ON_MING then*/
    // SubProg windows_to_mingw_path pc: 5 op: STARTLINE (58)

    /** buildsys.e:711		return search:find_replace('\\',s,'/')*/
    // SubProg windows_to_mingw_path pc: 7 op: PROC (27)
    RefDS(_s_45548);
    _23893 = _22find_replace(92, _s_45548, 47, 0);
    // SubProg windows_to_mingw_path pc: 14 op: RETURNF (28)

// Exiting block BLOCK: windows_to_mingw_path

// block var s_45548
    DeRefDS(_s_45548);
    return _23893;
    // SubProg windows_to_mingw_path pc: 18 op: BADRETURNF (43)
    ;
}


void _55write_makefile_full()
{
    object _settings_45553 = NOVALUE;
    object _fh_45556 = NOVALUE;
    object _24020 = NOVALUE; // 45778 24020
    object _24018 = NOVALUE; // 45775 24018
    object _24016 = NOVALUE; // 45771 24016
    object _24015 = NOVALUE; // 45770 24015
    object _24014 = NOVALUE; // 45768 24014
    object _24013 = NOVALUE; // 45766 24013
    object _24012 = NOVALUE; // 45763 24012
    object _24010 = NOVALUE; // 45760 24010
    object _24009 = NOVALUE; // 45757 24009
    object _24007 = NOVALUE; // 45753 24007
    object _24006 = NOVALUE; // 45752 24006
    object _24005 = NOVALUE; // 45750 24005
    object _24004 = NOVALUE; // 45747 24004
    object _24002 = NOVALUE; // 45744 24002
    object _24001 = NOVALUE; // 45742 24001
    object _23999 = NOVALUE; // 45738 23999
    object _23998 = NOVALUE; // 45735 23998
    object _23996 = NOVALUE; // 45731 23996
    object _23995 = NOVALUE; // 45730 23995
    object _23994 = NOVALUE; // 45729 23994
    object _23993 = NOVALUE; // 45727 23993
    object _23992 = NOVALUE; // 45726 23992
    object _23991 = NOVALUE; // 45723 23991
    object _23990 = NOVALUE; // 45720 23990
    object _23989 = NOVALUE; // 45718 23989
    object _23987 = NOVALUE; // 45715 23987
    object _23986 = NOVALUE; // 45714 23986
    object _23985 = NOVALUE; // 45712 23985
    object _23984 = NOVALUE; // 45710 23984
    object _23983 = NOVALUE; // 45708 23983
    object _23982 = NOVALUE; // 45706 23982
    object _23981 = NOVALUE; // 45705 23981
    object _23980 = NOVALUE; // 45702 23980
    object _23979 = NOVALUE; // 45701 23979
    object _23978 = NOVALUE; // 45699 23978
    object _23977 = NOVALUE; // 45696 23977
    object _23976 = NOVALUE; // 45695 23976
    object _23975 = NOVALUE; // 45693 23975
    object _23973 = NOVALUE; // 45690 23973
    object _23972 = NOVALUE; // 45689 23972
// skipping _23970  name type: 0
// skipping _23968  name type: 0
// skipping _23966  name type: 0
// skipping _23965  name type: 0
// skipping _23964  name type: 0
// skipping _23963  name type: 0
// skipping _23962  name type: 0
// skipping _23961  name type: 0
// skipping _23960  name type: 0
// skipping _23959  name type: 0
// skipping _23958  name type: 0
// skipping _23957  name type: 0
// skipping _23956  name type: 0
// skipping _23955  name type: 0
// skipping _23954  name type: 0
// skipping _23953  name type: 0
// skipping _23951  name type: 0
// skipping _23950  name type: 0
// skipping _23949  name type: 0
// skipping _23948  name type: 0
// skipping _23947  name type: 0
// skipping _23946  name type: 0
// skipping _23945  name type: 0
// skipping _23944  name type: 0
// skipping _23943  name type: 0
// skipping _23941  name type: 0
// skipping _23940  name type: 0
// skipping _23939  name type: 0
// skipping _23938  name type: 0
// skipping _23936  name type: 0
// skipping _23935  name type: 0
// skipping _23934  name type: 0
// skipping _23933  name type: 0
// skipping _23932  name type: 0
// skipping _23931  name type: 0
// skipping _23929  name type: 0
// skipping _23928  name type: 0
// skipping _23927  name type: 0
// skipping _23926  name type: 0
// skipping _23925  name type: 0
// skipping _23924  name type: 0
// skipping _23923  name type: 0
// skipping _23921  name type: 0
// skipping _23920  name type: 0
// skipping _23919  name type: 0
// skipping _23918  name type: 0
// skipping _23916  name type: 0
// skipping _23915  name type: 0
// skipping _23914  name type: 0
// skipping _23913  name type: 0
// skipping _23911  name type: 0
    object _23910 = NOVALUE; // 45576 23910
    object _23909 = NOVALUE; // 45575 23909
    object _23908 = NOVALUE; // 45574 23908
    object _23906 = NOVALUE; // 45571 23906
    object _23905 = NOVALUE; // 45570 23905
    object _23904 = NOVALUE; // 45569 23904
    object _23902 = NOVALUE; // 45566 23902
    object _23901 = NOVALUE; // 45565 23901
    object _23900 = NOVALUE; // 45564 23900
// skipping _23898  name type: 0
    object _23897 = NOVALUE; // 45560 23897
    object _23895 = NOVALUE; // 45555 23895
// skipping _23894  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_full pc: 1 op: STARTLINE (58)

    /** buildsys.e:718		sequence settings = setup_build()*/
    // SubProg write_makefile_full pc: 3 op: PROC (27)
    _0 = _settings_45553;
    _settings_45553 = _55setup_build();
    DeRef(_0);
    // SubProg write_makefile_full pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_makefile_full pc: 8 op: STARTLINE (58)

    /** buildsys.e:720		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg write_makefile_full pc: 10 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45553);
    _23895 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg write_makefile_full pc: 14 op: PROC (27)
    Ref(_23895);
    _55ensure_exename(_23895);
    _23895 = NOVALUE;
    // SubProg write_makefile_full pc: 17 op: STARTLINE (58)

    /** buildsys.e:722		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    // SubProg write_makefile_full pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 23 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23896;
        concat_list[1] = _57file0_44102;
        concat_list[2] = _57output_dir_42144;
        Concat_N((object_ptr)&_23897, concat_list, 3);
    }
    // SubProg write_makefile_full pc: 29 op: OPEN (37)
    _fh_45556 = EOpen(_23897, _23813, 0);
    DeRefDS(_23897);
    _23897 = NOVALUE;
    // SubProg write_makefile_full pc: 34 op: STARTLINE (58)

    /** buildsys.e:724		printf(fh, "CC     = %s" & HOSTNL, { settings[SETUP_CEXE] })*/
    // SubProg write_makefile_full pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 38 op: CONCAT (15)
    Concat((object_ptr)&_23900, _23899, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 42 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45553);
    _23901 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg write_makefile_full pc: 46 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23901);
    ((intptr_t*)_2)[1] = _23901;
    _23902 = MAKE_SEQ(_1);
    _23901 = NOVALUE;
    // SubProg write_makefile_full pc: 50 op: PRINTF (38)
    EPrintf(_fh_45556, _23900, _23902);
    DeRefDS(_23900);
    _23900 = NOVALUE;
    DeRefDS(_23902);
    _23902 = NOVALUE;
    // SubProg write_makefile_full pc: 54 op: STARTLINE (58)

    /** buildsys.e:725		printf(fh, "CFLAGS = %s" & HOSTNL, { settings[SETUP_CFLAGS] })*/
    // SubProg write_makefile_full pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 58 op: CONCAT (15)
    Concat((object_ptr)&_23904, _23903, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 62 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45553);
    _23905 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg write_makefile_full pc: 66 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23905);
    ((intptr_t*)_2)[1] = _23905;
    _23906 = MAKE_SEQ(_1);
    _23905 = NOVALUE;
    // SubProg write_makefile_full pc: 70 op: PRINTF (38)
    EPrintf(_fh_45556, _23904, _23906);
    DeRefDS(_23904);
    _23904 = NOVALUE;
    DeRefDS(_23906);
    _23906 = NOVALUE;
    // SubProg write_makefile_full pc: 74 op: STARTLINE (58)

    /** buildsys.e:726		printf(fh, "LINKER = %s" & HOSTNL, { settings[SETUP_LEXE] })*/
    // SubProg write_makefile_full pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 78 op: CONCAT (15)
    Concat((object_ptr)&_23908, _23907, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45553);
    _23909 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg write_makefile_full pc: 86 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23909);
    ((intptr_t*)_2)[1] = _23909;
    _23910 = MAKE_SEQ(_1);
    _23909 = NOVALUE;
    // SubProg write_makefile_full pc: 90 op: PRINTF (38)
    EPrintf(_fh_45556, _23908, _23910);
    DeRefDS(_23908);
    _23908 = NOVALUE;
    DeRefDS(_23910);
    _23910 = NOVALUE;
    // SubProg write_makefile_full pc: 94 op: STARTLINE (58)

    /** buildsys.e:728		if compiler_type = COMPILER_GCC then*/
    // SubProg write_makefile_full pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 98 op: EQUALS_IFW_I (121)
    // SubProg write_makefile_full pc: 125 op: STARTLINE (58)

    /** buildsys.e:731			write_objlink_file()*/
    // SubProg write_makefile_full pc: 127 op: PROC (27)
    _55write_objlink_file();
    // SubProg write_makefile_full pc: 129 op: NOP1 (159)
    // SubProg write_makefile_full pc: 130 op: STARTLINE (58)

    /** buildsys.e:734		write_makefile_srcobj_list(fh)*/
    // SubProg write_makefile_full pc: 132 op: PROC (27)
    _55write_makefile_srcobj_list(_fh_45556);
    // SubProg write_makefile_full pc: 135 op: STARTLINE (58)

    /** buildsys.e:735		puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 139 op: PUTS (44)
    EPuts(_fh_45556, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_full pc: 142 op: STARTLINE (58)

    /** buildsys.e:737		if compiler_type = COMPILER_WATCOM then*/
    // SubProg write_makefile_full pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 146 op: EQUALS_IFW_I (121)
    // SubProg write_makefile_full pc: 575 op: STARTLINE (58)

    /** buildsys.e:770			printf(fh, "RUNTIME_LIBRARY=%s\n", { settings[SETUP_RUNTIME_LIBRARY] } )*/
    // SubProg write_makefile_full pc: 577 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45553);
    _23972 = (object)*(((s1_ptr)_2)->base + 9);
    // SubProg write_makefile_full pc: 581 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23972);
    ((intptr_t*)_2)[1] = _23972;
    _23973 = MAKE_SEQ(_1);
    _23972 = NOVALUE;
    // SubProg write_makefile_full pc: 585 op: PRINTF (38)
    EPrintf(_fh_45556, _23971, _23973);
    DeRefDS(_23973);
    _23973 = NOVALUE;
    // SubProg write_makefile_full pc: 589 op: STARTLINE (58)

    /** buildsys.e:771			printf(fh, "%s: $(%s_OBJECTS) $(RUNTIME_LIBRARY) %s " & HOSTNL, { adjust_for_build_file(exe_name[D_ALTNAME]), upper(file0), rc_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 591 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 593 op: CONCAT (15)
    Concat((object_ptr)&_23975, _23974, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 599 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 601 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _23976 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 605 op: PROC (27)
    Ref(_23976);
    _23977 = _55adjust_for_build_file(_23976);
    _23976 = NOVALUE;
    // SubProg write_makefile_full pc: 609 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 611 op: PROC (27)
    RefDS(_57file0_44102);
    _23978 = _20upper(_57file0_44102);
    // SubProg write_makefile_full pc: 615 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 617 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 619 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _23979 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 623 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23977;
    ((intptr_t*)_2)[2] = _23978;
    RefDS(_23979);
    ((intptr_t*)_2)[3] = _23979;
    _23980 = MAKE_SEQ(_1);
    _23979 = NOVALUE;
    _23978 = NOVALUE;
    _23977 = NOVALUE;
    // SubProg write_makefile_full pc: 629 op: PRINTF (38)
    EPrintf(_fh_45556, _23975, _23980);
    DeRefDS(_23975);
    _23975 = NOVALUE;
    DeRefDS(_23980);
    _23980 = NOVALUE;
    // SubProg write_makefile_full pc: 633 op: STARTLINE (58)

    /** buildsys.e:772			if length(rc_file[D_ALTNAME]) then*/
    // SubProg write_makefile_full pc: 635 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 637 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 639 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _23981 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 643 op: LENGTH (42)
    if (IS_SEQUENCE(_23981)){
            _23982 = SEQ_PTR(_23981)->length;
    }
    else {
        _23982 = 1;
    }
    _23981 = NOVALUE;
    // SubProg write_makefile_full pc: 646 op: IF (20)
    if (_23982 == 0)
    {
        _23982 = NOVALUE;
        goto L1; // [646] 690
    }
    else{
        _23982 = NOVALUE;
    }
    // SubProg write_makefile_full pc: 649 op: STARTLINE (58)

    /** buildsys.e:773				writef(fh, "\t" & settings[SETUP_RC_COMPILER] & HOSTNL, { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 651 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45553);
    _23983 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg write_makefile_full pc: 655 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 657 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _39HOSTNL_20005;
        concat_list[1] = _23983;
        concat_list[2] = _23930;
        Concat_N((object_ptr)&_23984, concat_list, 3);
    }
    _23983 = NOVALUE;
    // SubProg write_makefile_full pc: 663 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 665 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 667 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _23985 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 673 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 675 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _23986 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 679 op: RIGHT_BRACE_2 (85)
    RefDS(_23986);
    RefDS(_23985);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23985;
    ((intptr_t *)_2)[2] = _23986;
    _23987 = MAKE_SEQ(_1);
    _23986 = NOVALUE;
    _23985 = NOVALUE;
    // SubProg write_makefile_full pc: 683 op: PROC (27)
    _19writef(_fh_45556, _23984, _23987, 0);
    _23984 = NOVALUE;
    _23987 = NOVALUE;
    // SubProg write_makefile_full pc: 689 op: NOP1 (159)
L1: // addr: 690 pc: 689 sub: 45551 op: 159
    // SubProg write_makefile_full pc: 690 op: STARTLINE (58)

    /** buildsys.e:775			printf(fh, "\t$(LINKER) -o %s $(%s_OBJECTS) %s $(LFLAGS)" & HOSTNL, {*/
    // SubProg write_makefile_full pc: 692 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 694 op: CONCAT (15)
    Concat((object_ptr)&_23989, _23988, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 698 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 700 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 702 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _23990 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 706 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 708 op: PROC (27)
    RefDS(_57file0_44102);
    _23991 = _20upper(_57file0_44102);
    // SubProg write_makefile_full pc: 712 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 714 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 716 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _23992 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 720 op: LENGTH (42)
    if (IS_SEQUENCE(_23992)){
            _23993 = SEQ_PTR(_23992)->length;
    }
    else {
        _23993 = 1;
    }
    _23992 = NOVALUE;
    // SubProg write_makefile_full pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 725 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 727 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _23994 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 731 op: PROC (27)
    RefDS(_23994);
    RefDS(_21958);
    _23995 = _56iif(_23993, _23994, _21958);
    _23993 = NOVALUE;
    _23994 = NOVALUE;
    // SubProg write_makefile_full pc: 737 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23990);
    ((intptr_t*)_2)[1] = _23990;
    ((intptr_t*)_2)[2] = _23991;
    ((intptr_t*)_2)[3] = _23995;
    _23996 = MAKE_SEQ(_1);
    _23995 = NOVALUE;
    _23991 = NOVALUE;
    _23990 = NOVALUE;
    // SubProg write_makefile_full pc: 743 op: PRINTF (38)
    EPrintf(_fh_45556, _23989, _23996);
    DeRefDS(_23989);
    _23989 = NOVALUE;
    DeRefDS(_23996);
    _23996 = NOVALUE;
    // SubProg write_makefile_full pc: 747 op: STARTLINE (58)

    /** buildsys.e:777			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 749 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 751 op: PUTS (44)
    EPuts(_fh_45556, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_full pc: 754 op: STARTLINE (58)

    /** buildsys.e:778			printf(fh, ".PHONY: %s-clean %s-clean-all" & HOSTNL, { file0, file0 })*/
    // SubProg write_makefile_full pc: 756 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 758 op: CONCAT (15)
    Concat((object_ptr)&_23998, _23997, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 762 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 764 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 766 op: RIGHT_BRACE_2 (85)
    RefDS(_57file0_44102);
    RefDS(_57file0_44102);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _57file0_44102;
    ((intptr_t *)_2)[2] = _57file0_44102;
    _23999 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 770 op: PRINTF (38)
    EPrintf(_fh_45556, _23998, _23999);
    DeRefDS(_23998);
    _23998 = NOVALUE;
    DeRefDS(_23999);
    _23999 = NOVALUE;
    // SubProg write_makefile_full pc: 774 op: STARTLINE (58)

    /** buildsys.e:779			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 778 op: PUTS (44)
    EPuts(_fh_45556, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_full pc: 781 op: STARTLINE (58)

    /** buildsys.e:780			printf(fh, "%s-clean:" & HOSTNL, { file0 })*/
    // SubProg write_makefile_full pc: 783 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 785 op: CONCAT (15)
    Concat((object_ptr)&_24001, _24000, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 789 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 791 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_57file0_44102);
    ((intptr_t*)_2)[1] = _57file0_44102;
    _24002 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 795 op: PRINTF (38)
    EPrintf(_fh_45556, _24001, _24002);
    DeRefDS(_24001);
    _24001 = NOVALUE;
    DeRefDS(_24002);
    _24002 = NOVALUE;
    // SubProg write_makefile_full pc: 799 op: STARTLINE (58)

    /** buildsys.e:781			printf(fh, "\trm -rf $(%s_OBJECTS) %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 803 op: CONCAT (15)
    Concat((object_ptr)&_24004, _24003, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 807 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 809 op: PROC (27)
    RefDS(_57file0_44102);
    _24005 = _20upper(_57file0_44102);
    // SubProg write_makefile_full pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 817 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _24006 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 821 op: RIGHT_BRACE_2 (85)
    RefDS(_24006);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24005;
    ((intptr_t *)_2)[2] = _24006;
    _24007 = MAKE_SEQ(_1);
    _24006 = NOVALUE;
    _24005 = NOVALUE;
    // SubProg write_makefile_full pc: 825 op: PRINTF (38)
    EPrintf(_fh_45556, _24004, _24007);
    DeRefDS(_24004);
    _24004 = NOVALUE;
    DeRefDS(_24007);
    _24007 = NOVALUE;
    // SubProg write_makefile_full pc: 829 op: STARTLINE (58)

    /** buildsys.e:782			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 831 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 833 op: PUTS (44)
    EPuts(_fh_45556, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_full pc: 836 op: STARTLINE (58)

    /** buildsys.e:783			printf(fh, "%s-clean-all: %s-clean" & HOSTNL, { file0, file0 })*/
    // SubProg write_makefile_full pc: 838 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 840 op: CONCAT (15)
    Concat((object_ptr)&_24009, _24008, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 844 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 846 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 848 op: RIGHT_BRACE_2 (85)
    RefDS(_57file0_44102);
    RefDS(_57file0_44102);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _57file0_44102;
    ((intptr_t *)_2)[2] = _57file0_44102;
    _24010 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 852 op: PRINTF (38)
    EPrintf(_fh_45556, _24009, _24010);
    DeRefDS(_24009);
    _24009 = NOVALUE;
    DeRefDS(_24010);
    _24010 = NOVALUE;
    // SubProg write_makefile_full pc: 856 op: STARTLINE (58)

    /** buildsys.e:784			printf(fh, "\trm -rf $(%s_SOURCES) %s %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 860 op: CONCAT (15)
    Concat((object_ptr)&_24012, _24011, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 864 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 866 op: PROC (27)
    RefDS(_57file0_44102);
    _24013 = _20upper(_57file0_44102);
    // SubProg write_makefile_full pc: 870 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 872 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 874 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _24014 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 878 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 880 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 882 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _24015 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 886 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24013;
    RefDS(_24014);
    ((intptr_t*)_2)[2] = _24014;
    Ref(_24015);
    ((intptr_t*)_2)[3] = _24015;
    _24016 = MAKE_SEQ(_1);
    _24015 = NOVALUE;
    _24014 = NOVALUE;
    _24013 = NOVALUE;
    // SubProg write_makefile_full pc: 892 op: PRINTF (38)
    EPrintf(_fh_45556, _24012, _24016);
    DeRefDS(_24012);
    _24012 = NOVALUE;
    DeRefDS(_24016);
    _24016 = NOVALUE;
    // SubProg write_makefile_full pc: 896 op: STARTLINE (58)

    /** buildsys.e:785			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 898 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 900 op: PUTS (44)
    EPuts(_fh_45556, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_full pc: 903 op: STARTLINE (58)

    /** buildsys.e:786			puts(fh, "%.o: %.c" & HOSTNL)*/
    // SubProg write_makefile_full pc: 905 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 907 op: CONCAT (15)
    Concat((object_ptr)&_24018, _24017, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 911 op: PUTS (44)
    EPuts(_fh_45556, _24018); // DJP 
    DeRefDS(_24018);
    _24018 = NOVALUE;
    // SubProg write_makefile_full pc: 914 op: STARTLINE (58)

    /** buildsys.e:787			puts(fh, "\t$(CC) $(CFLAGS) $*.c -o $*.o" & HOSTNL)*/
    // SubProg write_makefile_full pc: 916 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 918 op: CONCAT (15)
    Concat((object_ptr)&_24020, _24019, _39HOSTNL_20005);
    // SubProg write_makefile_full pc: 922 op: PUTS (44)
    EPuts(_fh_45556, _24020); // DJP 
    DeRefDS(_24020);
    _24020 = NOVALUE;
    // SubProg write_makefile_full pc: 925 op: STARTLINE (58)

    /** buildsys.e:788			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 927 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 929 op: PUTS (44)
    EPuts(_fh_45556, _39HOSTNL_20005); // DJP 
    // SubProg write_makefile_full pc: 932 op: NOP1 (159)
    // SubProg write_makefile_full pc: 933 op: STARTLINE (58)

    /** buildsys.e:791		close(fh)*/
    // SubProg write_makefile_full pc: 935 op: CLOSE (86)
    EClose(_fh_45556);
    // SubProg write_makefile_full pc: 937 op: STARTLINE (58)

    /** buildsys.e:792	end procedure*/
    // SubProg write_makefile_full pc: 939 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_full

// block var settings_45553
    DeRef(_settings_45553);

// block var fh_45556
    _23981 = NOVALUE;
    _23992 = NOVALUE;
    return;
    // SubProg write_makefile_full pc: 942 op: BADRETURNF (43)
    ;
}


void _55write_makefile_partial()
{
    object _settings_45782 = NOVALUE;
    object _fh_45784 = NOVALUE;
// skipping _24023  name type: 0
    object _24022 = NOVALUE; // 45787 24022
// skipping _24021  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_partial pc: 1 op: STARTLINE (58)

    /** buildsys.e:798		sequence settings = setup_build()*/
    // SubProg write_makefile_partial pc: 3 op: PROC (27)
    _0 = _settings_45782;
    _settings_45782 = _55setup_build();
    DeRef(_0);
    // SubProg write_makefile_partial pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_makefile_partial pc: 8 op: STARTLINE (58)

    /** buildsys.e:799		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    // SubProg write_makefile_partial pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_partial pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_partial pc: 14 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23896;
        concat_list[1] = _57file0_44102;
        concat_list[2] = _57output_dir_42144;
        Concat_N((object_ptr)&_24022, concat_list, 3);
    }
    // SubProg write_makefile_partial pc: 20 op: OPEN (37)
    _fh_45784 = EOpen(_24022, _23813, 0);
    DeRefDS(_24022);
    _24022 = NOVALUE;
    // SubProg write_makefile_partial pc: 25 op: STARTLINE (58)

    /** buildsys.e:801		write_makefile_srcobj_list(fh)*/
    // SubProg write_makefile_partial pc: 27 op: PROC (27)
    _55write_makefile_srcobj_list(_fh_45784);
    // SubProg write_makefile_partial pc: 30 op: STARTLINE (58)

    /** buildsys.e:803		close(fh)*/
    // SubProg write_makefile_partial pc: 32 op: CLOSE (86)
    EClose(_fh_45784);
    // SubProg write_makefile_partial pc: 34 op: STARTLINE (58)

    /** buildsys.e:804	end procedure*/
    // SubProg write_makefile_partial pc: 36 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_partial

// block var settings_45782
    DeRefDS(_settings_45782);

// block var fh_45784
    return;
    // SubProg write_makefile_partial pc: 39 op: BADRETURNF (43)
    ;
}


void _55build_direct(object _link_only_45791, object _the_file0_45792)
{
    object _cmd_45798 = NOVALUE;
    object _objs_45799 = NOVALUE;
    object _settings_45800 = NOVALUE;
    object _cwd_45802 = NOVALUE;
    object _status_45805 = NOVALUE;
    object _link_files_45834 = NOVALUE;
    object _pdone_45860 = NOVALUE;
    object _files_45907 = NOVALUE;
    object _31794 = NOVALUE; // 64007 31794
    object _31793 = NOVALUE; // 64006 31793
    object _31792 = NOVALUE; // 64005 31792
    object _31791 = NOVALUE; // 64004 31791
    object _31790 = NOVALUE; // 64003 31790
// skipping _31789  name type: 0
    object _31788 = NOVALUE; // 64001 31788
// skipping _24171  name type: 0
// skipping _24170  name type: 0
// skipping _24169  name type: 0
// skipping _24168  name type: 0
    object _24167 = NOVALUE; // 46058 24167
    object _24166 = NOVALUE; // 46055 24166
    object _24165 = NOVALUE; // 46054 24165
    object _24164 = NOVALUE; // 46051 24164
    object _24163 = NOVALUE; // 46048 24163
    object _24162 = NOVALUE; // 46047 24162
    object _24161 = NOVALUE; // 46042 24161
// skipping _24160  name type: 0
    object _24159 = NOVALUE; // 46035 24159
    object _24158 = NOVALUE; // 46033 24158
    object _24157 = NOVALUE; // 46032 24157
    object _24156 = NOVALUE; // 46030 24156
// skipping _24155  name type: 0
// skipping _24154  name type: 0
// skipping _24153  name type: 0
    object _24152 = NOVALUE; // 46023 24152
    object _24151 = NOVALUE; // 46022 24151
    object _24150 = NOVALUE; // 46020 24150
    object _24149 = NOVALUE; // 46018 24149
    object _24148 = NOVALUE; // 46016 24148
    object _24147 = NOVALUE; // 46015 24147
    object _24146 = NOVALUE; // 46014 24146
    object _24145 = NOVALUE; // 46013 24145
    object _24144 = NOVALUE; // 46012 24144
    object _24143 = NOVALUE; // 46011 24143
    object _24142 = NOVALUE; // 46010 24142
    object _24141 = NOVALUE; // 46009 24141
    object _24140 = NOVALUE; // 46006 24140
    object _24139 = NOVALUE; // 46004 24139
    object _24138 = NOVALUE; // 46003 24138
// skipping _24137  name type: 0
// skipping _24136  name type: 0
    object _24135 = NOVALUE; // 45997 24135
    object _24134 = NOVALUE; // 45994 24134
    object _24133 = NOVALUE; // 45993 24133
    object _24132 = NOVALUE; // 45992 24132
// skipping _24131  name type: 0
// skipping _24130  name type: 0
    object _24129 = NOVALUE; // 45982 24129
// skipping _24128  name type: 0
    object _24127 = NOVALUE; // 45978 24127
    object _24126 = NOVALUE; // 45977 24126
    object _24125 = NOVALUE; // 45976 24125
    object _24124 = NOVALUE; // 45974 24124
    object _24123 = NOVALUE; // 45973 24123
    object _24122 = NOVALUE; // 45971 24122
// skipping _24120  name type: 0
    object _24119 = NOVALUE; // 45967 24119
    object _24118 = NOVALUE; // 45965 24118
    object _24114 = NOVALUE; // 45960 24114
    object _24113 = NOVALUE; // 45958 24113
    object _24112 = NOVALUE; // 45957 24112
// skipping _24111  name type: 0
// skipping _24110  name type: 0
// skipping _24109  name type: 0
    object _24108 = NOVALUE; // 45950 24108
    object _24107 = NOVALUE; // 45949 24107
    object _24106 = NOVALUE; // 45947 24106
    object _24105 = NOVALUE; // 45945 24105
    object _24104 = NOVALUE; // 45944 24104
    object _24103 = NOVALUE; // 45943 24103
    object _24102 = NOVALUE; // 45942 24102
    object _24101 = NOVALUE; // 45941 24101
    object _24100 = NOVALUE; // 45940 24100
    object _24099 = NOVALUE; // 45939 24099
    object _24098 = NOVALUE; // 45938 24098
    object _24097 = NOVALUE; // 45935 24097
// skipping _24096  name type: 0
    object _24095 = NOVALUE; // 45929 24095
    object _24094 = NOVALUE; // 45926 24094
    object _24093 = NOVALUE; // 45925 24093
    object _24092 = NOVALUE; // 45924 24092
    object _24091 = NOVALUE; // 45923 24091
// skipping _24090  name type: 0
    object _24089 = NOVALUE; // 45919 24089
    object _24088 = NOVALUE; // 45918 24088
    object _24087 = NOVALUE; // 45917 24087
    object _24086 = NOVALUE; // 45916 24086
    object _24085 = NOVALUE; // 45914 24085
// skipping _24084  name type: 0
    object _24083 = NOVALUE; // 45910 24083
// skipping _24082  name type: 0
    object _24081 = NOVALUE; // 45904 24081
    object _24080 = NOVALUE; // 45903 24080
    object _24079 = NOVALUE; // 45901 24079
    object _24078 = NOVALUE; // 45900 24078
    object _24076 = NOVALUE; // 45896 24076
    object _24075 = NOVALUE; // 45894 24075
    object _24074 = NOVALUE; // 45893 24074
// skipping _24073  name type: 0
// skipping _24072  name type: 0
    object _24071 = NOVALUE; // 45887 24071
    object _24070 = NOVALUE; // 45884 24070
    object _24069 = NOVALUE; // 45883 24069
    object _24068 = NOVALUE; // 45879 24068
    object _24067 = NOVALUE; // 45878 24067
    object _24066 = NOVALUE; // 45875 24066
    object _24065 = NOVALUE; // 45874 24065
    object _24064 = NOVALUE; // 45873 24064
    object _24063 = NOVALUE; // 45872 24063
    object _24062 = NOVALUE; // 45870 24062
// skipping _24061  name type: 0
// skipping _24060  name type: 0
    object _24059 = NOVALUE; // 45864 24059
    object _24058 = NOVALUE; // 45863 24058
// skipping _24056  name type: 0
// skipping _24055  name type: 0
    object _24054 = NOVALUE; // 45855 24054
// skipping _24053  name type: 0
    object _24052 = NOVALUE; // 45852 24052
    object _24051 = NOVALUE; // 45851 24051
    object _24050 = NOVALUE; // 45849 24050
    object _24049 = NOVALUE; // 45848 24049
// skipping _24047  name type: 0
    object _24046 = NOVALUE; // 45845 24046
    object _24045 = NOVALUE; // 45844 24045
    object _24044 = NOVALUE; // 45843 24044
    object _24043 = NOVALUE; // 45840 24043
// skipping _24042  name type: 0
    object _24041 = NOVALUE; // 45831 24041
    object _24040 = NOVALUE; // 45830 24040
    object _24039 = NOVALUE; // 45828 24039
    object _24038 = NOVALUE; // 45827 24038
    object _24037 = NOVALUE; // 45824 24037
// skipping _24035  name type: 0
    object _24034 = NOVALUE; // 45817 24034
// skipping _24032  name type: 0
// skipping _24029  name type: 0
    object _24028 = NOVALUE; // 45806 24028
// skipping _24027  name type: 0
// skipping _24026  name type: 0
// skipping _24025  name type: 0
    object _24024 = NOVALUE; // 45794 24024
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg build_direct pc: 1 op: INTEGER_CHECK (96)
    // SubProg build_direct pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 5 op: STARTLINE (58)

    /** buildsys.e:810		if length(the_file0) then*/
    // SubProg build_direct pc: 7 op: LENGTH (42)
    // Known sequence length:
    _24024 = 0;
    // SubProg build_direct pc: 10 op: IF (20)
    // SubProg build_direct pc: 22 op: STARTLINE (58)

    /** buildsys.e:813		sequence cmd, objs = "", settings = setup_build(), cwd = current_dir()*/
    // SubProg build_direct pc: 24 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_objs_45799);
    _objs_45799 = _21958;
    // SubProg build_direct pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 29 op: PROC (27)
    _0 = _settings_45800;
    _settings_45800 = _55setup_build();
    DeRef(_0);
    // SubProg build_direct pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 34 op: PROC (27)
    _0 = _cwd_45802;
    _cwd_45802 = _16current_dir();
    DeRef(_0);
    // SubProg build_direct pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 39 op: STARTLINE (58)

    /** buildsys.e:814		integer status*/
    // SubProg build_direct pc: 41 op: STARTLINE (58)

    /** buildsys.e:816		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg build_direct pc: 43 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45800);
    _24028 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg build_direct pc: 47 op: PROC (27)
    Ref(_24028);
    _55ensure_exename(_24028);
    _24028 = NOVALUE;
    // SubProg build_direct pc: 50 op: STARTLINE (58)

    /** buildsys.e:818		if not link_only then*/
    // SubProg build_direct pc: 52 op: NOT_IFW (108)
    // SubProg build_direct pc: 55 op: STARTLINE (58)

    /** buildsys.e:819			switch compiler_type do*/
    // SubProg build_direct pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 59 op: SWITCH_I (193)
    _0 = 0;
    switch ( _0 ){ 
        // SubProg build_direct pc: 64 op: STARTLINE (58)

        /** buildsys.e:820				case COMPILER_GCC then*/
        // SubProg build_direct pc: 66 op: CASE (186)
        case 1:
        // SubProg build_direct pc: 68 op: STARTLINE (58)

        /** buildsys.e:821					if not silent then*/
        // SubProg build_direct pc: 70 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 72 op: NOT_IFW (108)
        if (_5silent_12593 != 0)
        goto L1; // [72] 119
        // SubProg build_direct pc: 75 op: STARTLINE (58)

        /** buildsys.e:822						ShowMsg(1, 176, {"GCC"})*/
        // SubProg build_direct pc: 77 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24033);
        ((intptr_t*)_2)[1] = _24033;
        _24034 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 81 op: PROC (27)
        _40ShowMsg(1, 176, _24034, 1);
        _24034 = NOVALUE;
        // SubProg build_direct pc: 87 op: NOP1 (159)
        // SubProg build_direct pc: 88 op: ELSE (23)
        goto L1; // [88] 119
        // SubProg build_direct pc: 90 op: STARTLINE (58)

        /** buildsys.e:825				case COMPILER_WATCOM then*/
        // SubProg build_direct pc: 92 op: CASE (186)
        case 2:
        // SubProg build_direct pc: 94 op: STARTLINE (58)

        /** buildsys.e:826					write_objlink_file()*/
        // SubProg build_direct pc: 96 op: PROC (27)
        _55write_objlink_file();
        // SubProg build_direct pc: 98 op: STARTLINE (58)

        /** buildsys.e:828					if not silent then*/
        // SubProg build_direct pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 102 op: NOT_IFW (108)
        if (_5silent_12593 != 0)
        goto L2; // [102] 118
        // SubProg build_direct pc: 105 op: STARTLINE (58)

        /** buildsys.e:829						ShowMsg(1, 176, {"Watcom"})*/
        // SubProg build_direct pc: 107 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24036);
        ((intptr_t*)_2)[1] = _24036;
        _24037 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 111 op: PROC (27)
        _40ShowMsg(1, 176, _24037, 1);
        _24037 = NOVALUE;
        // SubProg build_direct pc: 117 op: NOP1 (159)
L2: // addr: 118 pc: 117 sub: 45789 op: 159
        // SubProg build_direct pc: 118 op: NOPSWITCH (187)
    ;}L1: // addr: 119 pc: 118 sub: 45789 op: 187
    // SubProg build_direct pc: 119 op: NOP1 (159)
    // SubProg build_direct pc: 120 op: STARTLINE (58)

    /** buildsys.e:834		if sequence(output_dir) and length(output_dir) > 0 then*/
    // SubProg build_direct pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 124 op: IS_A_SEQUENCE (68)
    _24038 = 1;
    // SubProg build_direct pc: 127 op: SC1_AND_IF (146)
    if (_24038 == 0) {
        goto L3; // [127] 155
    }
    // SubProg build_direct pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 133 op: LENGTH (42)
    // Known sequence length:
    _24040 = 0;
    // SubProg build_direct pc: 136 op: GREATER (6)
    _24041 = (0 > 0);
    _24040 = NOVALUE;
    // SubProg build_direct pc: 140 op: NOP1 (159)
    // SubProg build_direct pc: 141 op: IF (20)
    if (_24041 == 0)
    {
        DeRef(_24041);
        _24041 = NOVALUE;
        goto L3; // [141] 155
    }
    else{
        DeRef(_24041);
        _24041 = NOVALUE;
    }
    // SubProg build_direct pc: 144 op: STARTLINE (58)

    /** buildsys.e:835			chdir(output_dir)*/
    // SubProg build_direct pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 148 op: PROC (27)
    RefDS(_57output_dir_42144);
    _31794 = _16chdir(_57output_dir_42144);
    // SubProg build_direct pc: 152 op: DEREF_TEMP (208)
    DeRef(_31794);
    _31794 = NOVALUE;
    // SubProg build_direct pc: 154 op: NOP1 (159)
L3: // addr: 155 pc: 154 sub: 45789 op: 159
    // SubProg build_direct pc: 155 op: STARTLINE (58)

    /** buildsys.e:838		sequence link_files = {}*/
    // SubProg build_direct pc: 157 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_link_files_45834);
    _link_files_45834 = _21958;
    // SubProg build_direct pc: 160 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 162 op: STARTLINE (58)

    /** buildsys.e:840		if not link_only then*/
    // SubProg build_direct pc: 164 op: NOT_IFW (108)
    if (_link_only_45791 != 0)
    goto L4; // [164] 468
    // SubProg build_direct pc: 167 op: STARTLINE (58)

    /** buildsys.e:841			for i = 1 to length(generated_files) do*/
    // SubProg build_direct pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 171 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42134)){
            _24043 = SEQ_PTR(_57generated_files_42134)->length;
    }
    else {
        _24043 = 1;
    }
    // SubProg build_direct pc: 174 op: FOR_I (125)
    {
        object _i_45838;
        _i_45838 = 1;
L5: // addr: 181 pc: 174 sub: 45789 op: 125
        if (_i_45838 > _24043){
            goto L6; // [174] 465
        }
        // SubProg build_direct pc: 181 op: STARTLINE (58)

        /** buildsys.e:842				if generated_files[i][$] = 'c' then*/
        // SubProg build_direct pc: 183 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 185 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24044 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 189 op: LENGTH (42)
        if (IS_SEQUENCE(_24044)){
                _24045 = SEQ_PTR(_24044)->length;
        }
        else {
            _24045 = 1;
        }
        // SubProg build_direct pc: 192 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24044);
        _24046 = (object)*(((s1_ptr)_2)->base + _24045);
        _24044 = NOVALUE;
        // SubProg build_direct pc: 196 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24046, 99)){
            _24046 = NOVALUE;
            goto L7; // [196] 424
        }
        _24046 = NOVALUE;
        // SubProg build_direct pc: 200 op: STARTLINE (58)

        /** buildsys.e:843					cmd = sprintf("%s %s %s", { settings[SETUP_CEXE], settings[SETUP_CFLAGS],*/
        // SubProg build_direct pc: 202 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45800);
        _24049 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg build_direct pc: 206 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45800);
        _24050 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg build_direct pc: 210 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24051 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 216 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_24049);
        ((intptr_t*)_2)[1] = _24049;
        Ref(_24050);
        ((intptr_t*)_2)[2] = _24050;
        RefDS(_24051);
        ((intptr_t*)_2)[3] = _24051;
        _24052 = MAKE_SEQ(_1);
        _24051 = NOVALUE;
        _24050 = NOVALUE;
        _24049 = NOVALUE;
        // SubProg build_direct pc: 222 op: SPRINTF (53)
        DeRef(_cmd_45798);
        _cmd_45798 = EPrintf(-9999999, _24048, _24052);
        DeRefDS(_24052);
        _24052 = NOVALUE;
        // SubProg build_direct pc: 226 op: STARTLINE (58)

        /** buildsys.e:846					link_files = append(link_files, generated_files[i])*/
        // SubProg build_direct pc: 228 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 230 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24054 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 234 op: APPEND (35)
        RefDS(_24054);
        Append(&_link_files_45834, _link_files_45834, _24054);
        _24054 = NOVALUE;
        // SubProg build_direct pc: 238 op: STARTLINE (58)

        /** buildsys.e:848					if not silent then*/
        // SubProg build_direct pc: 240 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 242 op: NOT_IFW (108)
        if (_5silent_12593 != 0)
        goto L8; // [242] 364
        // SubProg build_direct pc: 245 op: STARTLINE (58)

        /** buildsys.e:849						atom pdone = 100 * (i / length(generated_files))*/
        // SubProg build_direct pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 249 op: LENGTH (42)
        if (IS_SEQUENCE(_57generated_files_42134)){
                _24058 = SEQ_PTR(_57generated_files_42134)->length;
        }
        else {
            _24058 = 1;
        }
        // SubProg build_direct pc: 252 op: DIVIDE (14)
        _24059 = (_i_45838 % _24058) ? NewDouble((eudouble)_i_45838 / _24058) : (_i_45838 / _24058);
        _24058 = NOVALUE;
        // SubProg build_direct pc: 256 op: MULTIPLY (13)
        DeRef(_pdone_45860);
        if (IS_ATOM_INT(_24059)) {
            if (_24059 <= INT15 && _24059 >= -INT15){
                _pdone_45860 = 100 * _24059;
            }
            else{
                _pdone_45860 = NewDouble(100 * (eudouble)_24059);
            }
        }
        else {
            _pdone_45860 = NewDouble((eudouble)100 * DBL_PTR(_24059)->dbl);
        }
        DeRef(_24059);
        _24059 = NOVALUE;
        // SubProg build_direct pc: 260 op: STARTLINE (58)

        /** buildsys.e:850						if not verbose then*/
        // SubProg build_direct pc: 262 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 264 op: NOT_IFW (108)
        if (_5verbose_12596 != 0)
        goto L9; // [264] 350
        // SubProg build_direct pc: 267 op: STARTLINE (58)

        /** buildsys.e:853							if 0 and outdated_files[i] = 0 and force_build = 0 then*/
        // SubProg build_direct pc: 269 op: SC1_AND (141)
        if (0 == 0) {
            _24062 = 0;
            goto LA; // [269] 287
        }
        // SubProg build_direct pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 275 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57outdated_files_42135);
        _24063 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 279 op: EQUALS (3)
        if (IS_ATOM_INT(_24063)) {
            _24064 = (_24063 == 0);
        }
        else {
            _24064 = binary_op(EQUALS, _24063, 0);
        }
        _24063 = NOVALUE;
        // SubProg build_direct pc: 283 op: SC2_AND (142)
        if (IS_ATOM_INT(_24064))
        _24062 = (_24064 != 0);
        else
        _24062 = DBL_PTR(_24064)->dbl != 0.0;
        // SubProg build_direct pc: 286 op: NOP1 (159)
LA: // addr: 287 pc: 286 sub: 45789 op: 159
        // SubProg build_direct pc: 287 op: SC1_AND_IF (146)
        if (_24062 == 0) {
            goto LB; // [287] 328
        }
        // SubProg build_direct pc: 291 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 293 op: EQUALS (3)
        _24066 = (0 == 0);
        // SubProg build_direct pc: 297 op: NOP1 (159)
        // SubProg build_direct pc: 298 op: IF (20)
        if (_24066 == 0)
        {
            DeRef(_24066);
            _24066 = NOVALUE;
            goto LB; // [298] 328
        }
        else{
            DeRef(_24066);
            _24066 = NOVALUE;
        }
        // SubProg build_direct pc: 301 op: STARTLINE (58)

        /** buildsys.e:854								ShowMsg(1, 325, { pdone, generated_files[i] })*/
        // SubProg build_direct pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 305 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24067 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 309 op: RIGHT_BRACE_2 (85)
        RefDS(_24067);
        Ref(_pdone_45860);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45860;
        ((intptr_t *)_2)[2] = _24067;
        _24068 = MAKE_SEQ(_1);
        _24067 = NOVALUE;
        // SubProg build_direct pc: 313 op: PROC (27)
        _40ShowMsg(1, 325, _24068, 1);
        _24068 = NOVALUE;
        // SubProg build_direct pc: 319 op: STARTLINE (58)

        /** buildsys.e:855								continue*/
        // SubProg build_direct pc: 321 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pdone_45860
        DeRef(_pdone_45860);
        _pdone_45860 = NOVALUE;
        // SubProg build_direct pc: 323 op: ELSE (23)
        goto LC; // [323] 460
        // SubProg build_direct pc: 325 op: ELSE (23)
        goto LD; // [325] 363
        // SubProg build_direct pc: 327 op: NOP1 (159)
LB: // addr: 328 pc: 327 sub: 45789 op: 159
        // SubProg build_direct pc: 328 op: STARTLINE (58)

        /** buildsys.e:857								ShowMsg(1, 163, { pdone, generated_files[i] })*/
        // SubProg build_direct pc: 330 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 332 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24069 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 336 op: RIGHT_BRACE_2 (85)
        RefDS(_24069);
        Ref(_pdone_45860);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45860;
        ((intptr_t *)_2)[2] = _24069;
        _24070 = MAKE_SEQ(_1);
        _24069 = NOVALUE;
        // SubProg build_direct pc: 340 op: PROC (27)
        _40ShowMsg(1, 163, _24070, 1);
        _24070 = NOVALUE;
        // SubProg build_direct pc: 346 op: NOP1 (159)
        // SubProg build_direct pc: 347 op: ELSE (23)
        goto LD; // [347] 363
        // SubProg build_direct pc: 349 op: NOP1 (159)
L9: // addr: 350 pc: 349 sub: 45789 op: 159
        // SubProg build_direct pc: 350 op: STARTLINE (58)

        /** buildsys.e:860							ShowMsg(1, 163, { pdone, cmd })*/
        // SubProg build_direct pc: 352 op: RIGHT_BRACE_2 (85)
        RefDS(_cmd_45798);
        Ref(_pdone_45860);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45860;
        ((intptr_t *)_2)[2] = _cmd_45798;
        _24071 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 356 op: PROC (27)
        _40ShowMsg(1, 163, _24071, 1);
        _24071 = NOVALUE;
        // SubProg build_direct pc: 362 op: NOP1 (159)
LD: // addr: 363 pc: 362 sub: 45789 op: 159
        // SubProg build_direct pc: 363 op: NOP1 (159)
L8: // addr: 364 pc: 363 sub: 45789 op: 159
        // SubProg build_direct pc: 364 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pdone_45860
        DeRef(_pdone_45860);
        _pdone_45860 = NOVALUE;
        // SubProg build_direct pc: 366 op: STARTLINE (58)

        /** buildsys.e:865					status = system_exec(cmd, 0)*/
        // SubProg build_direct pc: 368 op: SYSTEM_EXEC (154)
        _status_45805 = system_exec_call(_cmd_45798, 0);
        // SubProg build_direct pc: 372 op: STARTLINE (58)

        /** buildsys.e:866					if status != 0 then*/
        // SubProg build_direct pc: 374 op: NOTEQ_IFW_I (122)
        if (_status_45805 == 0)
        goto LE; // [374] 458
        // SubProg build_direct pc: 378 op: STARTLINE (58)

        /** buildsys.e:867						ShowMsg(2, 164, { generated_files[i] })*/
        // SubProg build_direct pc: 380 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 382 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24074 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 386 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24074);
        ((intptr_t*)_2)[1] = _24074;
        _24075 = MAKE_SEQ(_1);
        _24074 = NOVALUE;
        // SubProg build_direct pc: 390 op: PROC (27)
        _40ShowMsg(2, 164, _24075, 1);
        _24075 = NOVALUE;
        // SubProg build_direct pc: 396 op: STARTLINE (58)

        /** buildsys.e:868						ShowMsg(2, 165, { status, cmd })*/
        // SubProg build_direct pc: 398 op: RIGHT_BRACE_2 (85)
        RefDS(_cmd_45798);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _status_45805;
        ((intptr_t *)_2)[2] = _cmd_45798;
        _24076 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 402 op: PROC (27)
        _40ShowMsg(2, 165, _24076, 1);
        _24076 = NOVALUE;
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
        goto GF;
        // SubProg build_direct pc: 420 op: NOP1 (159)
        // SubProg build_direct pc: 421 op: ELSE (23)
        goto LE; // [421] 458
        // SubProg build_direct pc: 423 op: NOP1 (159)
L7: // addr: 424 pc: 423 sub: 45789 op: 159
        // SubProg build_direct pc: 424 op: STARTLINE (58)

        /** buildsys.e:871				elsif match(".o", generated_files[i]) then*/
        // SubProg build_direct pc: 426 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 428 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24078 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 432 op: MATCH_FROM (177)
        _24079 = e_match_from(_23129, _24078, 1);
        _24078 = NOVALUE;
        // SubProg build_direct pc: 437 op: IF (20)
        if (_24079 == 0)
        {
            _24079 = NOVALUE;
            goto L10; // [437] 457
        }
        else{
            _24079 = NOVALUE;
        }
        // SubProg build_direct pc: 440 op: STARTLINE (58)

        /** buildsys.e:872					objs &= " " & generated_files[i]*/
        // SubProg build_direct pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 444 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24080 = (object)*(((s1_ptr)_2)->base + _i_45838);
        // SubProg build_direct pc: 448 op: CONCAT (15)
        Concat((object_ptr)&_24081, _23377, _24080);
        _24080 = NOVALUE;
        // SubProg build_direct pc: 452 op: CONCAT (15)
        Concat((object_ptr)&_objs_45799, _objs_45799, _24081);
        DeRefDS(_24081);
        _24081 = NOVALUE;
        // SubProg build_direct pc: 456 op: NOP1 (159)
L10: // addr: 457 pc: 456 sub: 45789 op: 159
        // SubProg build_direct pc: 457 op: NOP1 (159)
LE: // addr: 458 pc: 457 sub: 45789 op: 159
        // SubProg build_direct pc: 458 op: STARTLINE (58)

        /** buildsys.e:874			end for*/
        // SubProg build_direct pc: 460 op: ENDFOR_INT_UP1 (54)
LC: // addr: 460 pc: 460 sub: 45789 op: 54
        _i_45838 = _i_45838 + 1;
        goto L5; // [460] 181
L6: // addr: 465 pc: 460 sub: 45789 op: 54
        ;
    }
    // SubProg build_direct pc: 465 op: ELSE (23)
    goto L11; // [465] 527
    // SubProg build_direct pc: 467 op: NOP1 (159)
L4: // addr: 468 pc: 467 sub: 45789 op: 159
    // SubProg build_direct pc: 468 op: STARTLINE (58)

    /** buildsys.e:876			object files = read_lines(file0 & ".bld")*/
    // SubProg build_direct pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 472 op: CONCAT (15)
    Concat((object_ptr)&_24083, _57file0_44102, _23582);
    // SubProg build_direct pc: 476 op: PROC (27)
    _0 = _files_45907;
    _files_45907 = _19read_lines(_24083);
    DeRef(_0);
    _24083 = NOVALUE;
    // SubProg build_direct pc: 480 op: STARTLINE (58)

    /** buildsys.e:877			for i = 1 to length(files) do*/
    // SubProg build_direct pc: 482 op: LENGTH (42)
    if (IS_SEQUENCE(_files_45907)){
            _24085 = SEQ_PTR(_files_45907)->length;
    }
    else {
        _24085 = 1;
    }
    // SubProg build_direct pc: 485 op: FOR_I (125)
    {
        object _i_45913;
        _i_45913 = 1;
L12: // addr: 492 pc: 485 sub: 45789 op: 125
        if (_i_45913 > _24085){
            goto L13; // [485] 524
        }
        // SubProg build_direct pc: 492 op: STARTLINE (58)

        /** buildsys.e:878				objs &= " " & filebase(files[i]) & "." & settings[SETUP_OBJ_EXT]*/
        // SubProg build_direct pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_files_45907);
        _24086 = (object)*(((s1_ptr)_2)->base + _i_45913);
        // SubProg build_direct pc: 498 op: PROC (27)
        Ref(_24086);
        _24087 = _16filebase(_24086);
        _24086 = NOVALUE;
        // SubProg build_direct pc: 502 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45800);
        _24088 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg build_direct pc: 506 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _24088;
            concat_list[1] = _23171;
            concat_list[2] = _24087;
            concat_list[3] = _23377;
            Concat_N((object_ptr)&_24089, concat_list, 4);
        }
        _24088 = NOVALUE;
        DeRef(_24087);
        _24087 = NOVALUE;
        // SubProg build_direct pc: 513 op: CONCAT (15)
        Concat((object_ptr)&_objs_45799, _objs_45799, _24089);
        DeRefDS(_24089);
        _24089 = NOVALUE;
        // SubProg build_direct pc: 517 op: STARTLINE (58)

        /** buildsys.e:879			end for*/
        // SubProg build_direct pc: 519 op: ENDFOR_INT_UP1 (54)
        _i_45913 = _i_45913 + 1;
        goto L12; // [519] 492
L13: // addr: 524 pc: 519 sub: 45789 op: 54
        ;
    }
    // SubProg build_direct pc: 524 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var files_45907
    DeRef(_files_45907);
    _files_45907 = NOVALUE;
    // SubProg build_direct pc: 526 op: NOP1 (159)
L11: // addr: 527 pc: 526 sub: 45789 op: 159
    // SubProg build_direct pc: 527 op: STARTLINE (58)

    /** buildsys.e:882		if keep and not link_only and length(link_files) then*/
    // SubProg build_direct pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 531 op: SC1_AND (141)
    if (_57keep_42137 == 0) {
        _24091 = 0;
        goto L14; // [531] 542
    }
    // SubProg build_direct pc: 535 op: NOT (7)
    _24092 = (_link_only_45791 == 0);
    // SubProg build_direct pc: 538 op: SC2_AND (142)
    _24091 = (_24092 != 0);
    // SubProg build_direct pc: 541 op: NOP1 (159)
L14: // addr: 542 pc: 541 sub: 45789 op: 159
    // SubProg build_direct pc: 542 op: SC1_AND_IF (146)
    if (_24091 == 0) {
        goto L15; // [542] 571
    }
    // SubProg build_direct pc: 546 op: LENGTH (42)
    if (IS_SEQUENCE(_link_files_45834)){
            _24094 = SEQ_PTR(_link_files_45834)->length;
    }
    else {
        _24094 = 1;
    }
    // SubProg build_direct pc: 549 op: NOP1 (159)
    // SubProg build_direct pc: 550 op: IF (20)
    if (_24094 == 0)
    {
        _24094 = NOVALUE;
        goto L15; // [550] 571
    }
    else{
        _24094 = NOVALUE;
    }
    // SubProg build_direct pc: 553 op: STARTLINE (58)

    /** buildsys.e:883			write_lines(file0 & ".bld", link_files)*/
    // SubProg build_direct pc: 555 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 557 op: CONCAT (15)
    Concat((object_ptr)&_24095, _57file0_44102, _23582);
    // SubProg build_direct pc: 561 op: PROC (27)
    RefDS(_link_files_45834);
    _31793 = _19write_lines(_24095, _link_files_45834);
    _24095 = NOVALUE;
    // SubProg build_direct pc: 566 op: DEREF_TEMP (208)
    DeRef(_31793);
    _31793 = NOVALUE;
    // SubProg build_direct pc: 568 op: ELSE (23)
    goto L16; // [568] 595
    // SubProg build_direct pc: 570 op: NOP1 (159)
L15: // addr: 571 pc: 570 sub: 45789 op: 159
    // SubProg build_direct pc: 571 op: STARTLINE (58)

    /** buildsys.e:884		elsif keep = 0 then*/
    // SubProg build_direct pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 575 op: EQUALS_IFW (104)
    if (_57keep_42137 != 0)
    goto L17; // [575] 594
    // SubProg build_direct pc: 579 op: STARTLINE (58)

    /** buildsys.e:886			delete_file(file0 & ".bld")*/
    // SubProg build_direct pc: 581 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 583 op: CONCAT (15)
    Concat((object_ptr)&_24097, _57file0_44102, _23582);
    // SubProg build_direct pc: 587 op: PROC (27)
    _31792 = _16delete_file(_24097);
    _24097 = NOVALUE;
    // SubProg build_direct pc: 591 op: DEREF_TEMP (208)
    DeRef(_31792);
    _31792 = NOVALUE;
    // SubProg build_direct pc: 593 op: NOP1 (159)
L17: // addr: 594 pc: 593 sub: 45789 op: 159
    // SubProg build_direct pc: 594 op: NOP1 (159)
L16: // addr: 595 pc: 594 sub: 45789 op: 159
    // SubProg build_direct pc: 595 op: STARTLINE (58)

    /** buildsys.e:890		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_GCC then*/
    // SubProg build_direct pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 599 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 601 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _24098 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 605 op: LENGTH (42)
    if (IS_SEQUENCE(_24098)){
            _24099 = SEQ_PTR(_24098)->length;
    }
    else {
        _24099 = 1;
    }
    _24098 = NOVALUE;
    // SubProg build_direct pc: 608 op: SC1_AND (141)
    if (_24099 == 0) {
        _24100 = 0;
        goto L18; // [608] 623
    }
    // SubProg build_direct pc: 612 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45800);
    _24101 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 616 op: LENGTH (42)
    if (IS_SEQUENCE(_24101)){
            _24102 = SEQ_PTR(_24101)->length;
    }
    else {
        _24102 = 1;
    }
    _24101 = NOVALUE;
    // SubProg build_direct pc: 619 op: SC2_AND (142)
    _24100 = (_24102 != 0);
    // SubProg build_direct pc: 622 op: NOP1 (159)
L18: // addr: 623 pc: 622 sub: 45789 op: 159
    // SubProg build_direct pc: 623 op: SC1_AND_IF (146)
    if (_24100 == 0) {
        goto L19; // [623] 724
    }
    // SubProg build_direct pc: 627 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 629 op: EQUALS (3)
    _24104 = (0 == 1);
    // SubProg build_direct pc: 633 op: NOP1 (159)
    // SubProg build_direct pc: 634 op: IF (20)
    if (_24104 == 0)
    {
        DeRef(_24104);
        _24104 = NOVALUE;
        goto L19; // [634] 724
    }
    else{
        DeRef(_24104);
        _24104 = NOVALUE;
    }
    // SubProg build_direct pc: 637 op: STARTLINE (58)

    /** buildsys.e:891			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    // SubProg build_direct pc: 639 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45800);
    _24105 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 645 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 647 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _24106 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 651 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 653 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 655 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _24107 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 659 op: RIGHT_BRACE_2 (85)
    RefDS(_24107);
    RefDS(_24106);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24106;
    ((intptr_t *)_2)[2] = _24107;
    _24108 = MAKE_SEQ(_1);
    _24107 = NOVALUE;
    _24106 = NOVALUE;
    // SubProg build_direct pc: 663 op: PROC (27)
    Ref(_24105);
    _0 = _cmd_45798;
    _cmd_45798 = _20format(_24105, _24108);
    DeRef(_0);
    _24105 = NOVALUE;
    _24108 = NOVALUE;
    // SubProg build_direct pc: 668 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 670 op: STARTLINE (58)

    /** buildsys.e:892			status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 672 op: SYSTEM_EXEC (154)
    _status_45805 = system_exec_call(_cmd_45798, 0);
    // SubProg build_direct pc: 676 op: STARTLINE (58)

    /** buildsys.e:893			if status != 0 then*/
    // SubProg build_direct pc: 678 op: NOTEQ_IFW_I (122)
    if (_status_45805 == 0)
    goto L1A; // [678] 723
    // SubProg build_direct pc: 682 op: STARTLINE (58)

    /** buildsys.e:894				ShowMsg(2, 350, { rc_file[D_NAME] })*/
    // SubProg build_direct pc: 684 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 686 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 688 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _24112 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 692 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24112);
    ((intptr_t*)_2)[1] = _24112;
    _24113 = MAKE_SEQ(_1);
    _24112 = NOVALUE;
    // SubProg build_direct pc: 696 op: PROC (27)
    _40ShowMsg(2, 350, _24113, 1);
    _24113 = NOVALUE;
    // SubProg build_direct pc: 702 op: STARTLINE (58)

    /** buildsys.e:895				ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 704 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45798);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45805;
    ((intptr_t *)_2)[2] = _cmd_45798;
    _24114 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 708 op: PROC (27)
    _40ShowMsg(2, 169, _24114, 1);
    _24114 = NOVALUE;
    // SubProg build_direct pc: 714 op: STARTLINE (58)

    /** buildsys.e:897				goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 716 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 718 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 720 op: GOTO (188)
    goto GF;
    // SubProg build_direct pc: 722 op: NOP1 (159)
L1A: // addr: 723 pc: 722 sub: 45789 op: 159
    // SubProg build_direct pc: 723 op: NOP1 (159)
L19: // addr: 724 pc: 723 sub: 45789 op: 159
    // SubProg build_direct pc: 724 op: STARTLINE (58)

    /** buildsys.e:901		switch compiler_type do*/
    // SubProg build_direct pc: 726 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 728 op: SWITCH_I (193)
    _0 = 0;
    switch ( _0 ){ 
        // SubProg build_direct pc: 733 op: STARTLINE (58)

        /** buildsys.e:902			case COMPILER_WATCOM then*/
        // SubProg build_direct pc: 735 op: CASE (186)
        case 2:
        // SubProg build_direct pc: 737 op: STARTLINE (58)

        /** buildsys.e:903				cmd = sprintf("%s @%s.lnk", { settings[SETUP_LEXE], file0 })*/
        // SubProg build_direct pc: 739 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45800);
        _24118 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg build_direct pc: 743 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 745 op: RIGHT_BRACE_2 (85)
        RefDS(_57file0_44102);
        Ref(_24118);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _24118;
        ((intptr_t *)_2)[2] = _57file0_44102;
        _24119 = MAKE_SEQ(_1);
        _24118 = NOVALUE;
        // SubProg build_direct pc: 749 op: SPRINTF (53)
        DeRef(_cmd_45798);
        _cmd_45798 = EPrintf(-9999999, _24117, _24119);
        DeRefDS(_24119);
        _24119 = NOVALUE;
        // SubProg build_direct pc: 753 op: ELSE (23)
        goto L1B; // [753] 828
        // SubProg build_direct pc: 755 op: STARTLINE (58)

        /** buildsys.e:905			case COMPILER_GCC then*/
        // SubProg build_direct pc: 757 op: CASE (186)
        case 1:
        // SubProg build_direct pc: 759 op: STARTLINE (58)

        /** buildsys.e:906				cmd = sprintf("%s -o %s %s %s %s", { */
        // SubProg build_direct pc: 761 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45800);
        _24122 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg build_direct pc: 765 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 767 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 769 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_55exe_name_44954);
        _24123 = (object)*(((s1_ptr)_2)->base + 11);
        // SubProg build_direct pc: 773 op: PROC (27)
        Ref(_24123);
        _24124 = _55adjust_for_build_file(_24123);
        _24123 = NOVALUE;
        // SubProg build_direct pc: 777 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 779 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 781 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_55res_file_44966);
        _24125 = (object)*(((s1_ptr)_2)->base + 11);
        // SubProg build_direct pc: 785 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45800);
        _24126 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg build_direct pc: 789 op: RIGHT_BRACE_N (31)
        _1 = NewS1(5);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_24122);
        ((intptr_t*)_2)[1] = _24122;
        ((intptr_t*)_2)[2] = _24124;
        RefDS(_objs_45799);
        ((intptr_t*)_2)[3] = _objs_45799;
        RefDS(_24125);
        ((intptr_t*)_2)[4] = _24125;
        Ref(_24126);
        ((intptr_t*)_2)[5] = _24126;
        _24127 = MAKE_SEQ(_1);
        _24126 = NOVALUE;
        _24125 = NOVALUE;
        _24124 = NOVALUE;
        _24122 = NOVALUE;
        // SubProg build_direct pc: 797 op: SPRINTF (53)
        DeRef(_cmd_45798);
        _cmd_45798 = EPrintf(-9999999, _24121, _24127);
        DeRefDS(_24127);
        _24127 = NOVALUE;
        // SubProg build_direct pc: 801 op: ELSE (23)
        goto L1B; // [801] 828
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
        ((intptr_t*)_2)[1] = 0;
        _24129 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 815 op: PROC (27)
        _40ShowMsg(2, 167, _24129, 1);
        _24129 = NOVALUE;
        // SubProg build_direct pc: 821 op: STARTLINE (58)

        /** buildsys.e:918				goto "build_direct_cleanup"*/
        // SubProg build_direct pc: 823 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-
        // SubProg build_direct pc: 825 op: GOTO (188)
        goto GF;
        // SubProg build_direct pc: 827 op: NOPSWITCH (187)
    ;}L1B: // addr: 828 pc: 827 sub: 45789 op: 187
    // SubProg build_direct pc: 828 op: STARTLINE (58)

    /** buildsys.e:921		if not silent then*/
    // SubProg build_direct pc: 830 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 832 op: NOT_IFW (108)
    if (_5silent_12593 != 0)
    goto L1C; // [832] 886
    // SubProg build_direct pc: 835 op: STARTLINE (58)

    /** buildsys.e:922			if not verbose then*/
    // SubProg build_direct pc: 837 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 839 op: NOT_IFW (108)
    if (_5verbose_12596 != 0)
    goto L1D; // [839] 870
    // SubProg build_direct pc: 842 op: STARTLINE (58)

    /** buildsys.e:923				ShowMsg(1, 166, { abbreviate_path(exe_name[D_NAME]) })*/
    // SubProg build_direct pc: 844 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 846 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 848 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _24132 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 852 op: PROC (27)
    Ref(_24132);
    RefDS(_21958);
    _24133 = _16abbreviate_path(_24132, _21958);
    _24132 = NOVALUE;
    // SubProg build_direct pc: 857 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24133;
    _24134 = MAKE_SEQ(_1);
    _24133 = NOVALUE;
    // SubProg build_direct pc: 861 op: PROC (27)
    _40ShowMsg(1, 166, _24134, 1);
    _24134 = NOVALUE;
    // SubProg build_direct pc: 867 op: ELSE (23)
    goto L1E; // [867] 885
    // SubProg build_direct pc: 869 op: NOP1 (159)
L1D: // addr: 870 pc: 869 sub: 45789 op: 159
    // SubProg build_direct pc: 870 op: STARTLINE (58)

    /** buildsys.e:925				ShowMsg(1, 166, { cmd })*/
    // SubProg build_direct pc: 872 op: PRIVATE_INIT_CHECK (30)
    // SubProg build_direct pc: 874 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_cmd_45798);
    ((intptr_t*)_2)[1] = _cmd_45798;
    _24135 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 878 op: PROC (27)
    _40ShowMsg(1, 166, _24135, 1);
    _24135 = NOVALUE;
    // SubProg build_direct pc: 884 op: NOP1 (159)
L1E: // addr: 885 pc: 884 sub: 45789 op: 159
    // SubProg build_direct pc: 885 op: NOP1 (159)
L1C: // addr: 886 pc: 885 sub: 45789 op: 159
    // SubProg build_direct pc: 886 op: STARTLINE (58)

    /** buildsys.e:929		status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 888 op: PRIVATE_INIT_CHECK (30)
    // SubProg build_direct pc: 890 op: SYSTEM_EXEC (154)
    _status_45805 = system_exec_call(_cmd_45798, 0);
    // SubProg build_direct pc: 894 op: STARTLINE (58)

    /** buildsys.e:930		if status != 0 then*/
    // SubProg build_direct pc: 896 op: NOTEQ_IFW_I (122)
    if (_status_45805 == 0)
    goto L1F; // [896] 939
    // SubProg build_direct pc: 900 op: STARTLINE (58)

    /** buildsys.e:931			ShowMsg(2, 168, { exe_name[D_NAME] })*/
    // SubProg build_direct pc: 902 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 904 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 906 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _24138 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 910 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24138);
    ((intptr_t*)_2)[1] = _24138;
    _24139 = MAKE_SEQ(_1);
    _24138 = NOVALUE;
    // SubProg build_direct pc: 914 op: PROC (27)
    _40ShowMsg(2, 168, _24139, 1);
    _24139 = NOVALUE;
    // SubProg build_direct pc: 920 op: STARTLINE (58)

    /** buildsys.e:932			ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 922 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45798);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45805;
    ((intptr_t *)_2)[2] = _cmd_45798;
    _24140 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 926 op: PROC (27)
    _40ShowMsg(2, 169, _24140, 1);
    _24140 = NOVALUE;
    // SubProg build_direct pc: 932 op: STARTLINE (58)

    /** buildsys.e:934			goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 934 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 936 op: GOTO (188)
    goto GF;
    // SubProg build_direct pc: 938 op: NOP1 (159)
L1F: // addr: 939 pc: 938 sub: 45789 op: 159
    // SubProg build_direct pc: 939 op: STARTLINE (58)

    /** buildsys.e:938		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_WATCOM then*/
    // SubProg build_direct pc: 941 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 943 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 945 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _24141 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 949 op: LENGTH (42)
    if (IS_SEQUENCE(_24141)){
            _24142 = SEQ_PTR(_24141)->length;
    }
    else {
        _24142 = 1;
    }
    _24141 = NOVALUE;
    // SubProg build_direct pc: 952 op: SC1_AND (141)
    if (_24142 == 0) {
        _24143 = 0;
        goto L20; // [952] 967
    }
    // SubProg build_direct pc: 956 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45800);
    _24144 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 960 op: LENGTH (42)
    if (IS_SEQUENCE(_24144)){
            _24145 = SEQ_PTR(_24144)->length;
    }
    else {
        _24145 = 1;
    }
    _24144 = NOVALUE;
    // SubProg build_direct pc: 963 op: SC2_AND (142)
    _24143 = (_24145 != 0);
    // SubProg build_direct pc: 966 op: NOP1 (159)
L20: // addr: 967 pc: 966 sub: 45789 op: 159
    // SubProg build_direct pc: 967 op: SC1_AND_IF (146)
    if (_24143 == 0) {
        goto L21; // [967] 1086
    }
    // SubProg build_direct pc: 971 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 973 op: EQUALS (3)
    _24147 = (0 == 2);
    // SubProg build_direct pc: 977 op: NOP1 (159)
    // SubProg build_direct pc: 978 op: IF (20)
    if (_24147 == 0)
    {
        DeRef(_24147);
        _24147 = NOVALUE;
        goto L21; // [978] 1086
    }
    else{
        DeRef(_24147);
        _24147 = NOVALUE;
    }
    // SubProg build_direct pc: 981 op: STARTLINE (58)

    /** buildsys.e:939			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    // SubProg build_direct pc: 983 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45800);
    _24148 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 987 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 989 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 991 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _24149 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 995 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 997 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 999 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _24150 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1003 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1005 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1007 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _24151 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1011 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24149);
    ((intptr_t*)_2)[1] = _24149;
    RefDS(_24150);
    ((intptr_t*)_2)[2] = _24150;
    Ref(_24151);
    ((intptr_t*)_2)[3] = _24151;
    _24152 = MAKE_SEQ(_1);
    _24151 = NOVALUE;
    _24150 = NOVALUE;
    _24149 = NOVALUE;
    // SubProg build_direct pc: 1017 op: PROC (27)
    Ref(_24148);
    _0 = _cmd_45798;
    _cmd_45798 = _20format(_24148, _24152);
    DeRef(_0);
    _24148 = NOVALUE;
    _24152 = NOVALUE;
    // SubProg build_direct pc: 1022 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 1024 op: STARTLINE (58)

    /** buildsys.e:940			status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 1026 op: SYSTEM_EXEC (154)
    _status_45805 = system_exec_call(_cmd_45798, 0);
    // SubProg build_direct pc: 1030 op: STARTLINE (58)

    /** buildsys.e:941			if status != 0 then*/
    // SubProg build_direct pc: 1032 op: NOTEQ_IFW_I (122)
    if (_status_45805 == 0)
    goto L22; // [1032] 1085
    // SubProg build_direct pc: 1036 op: STARTLINE (58)

    /** buildsys.e:942				ShowMsg(2, 187, { rc_file[D_NAME], exe_name[D_NAME] })*/
    // SubProg build_direct pc: 1038 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1040 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1042 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44960);
    _24156 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 1046 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1048 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1050 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44954);
    _24157 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 1054 op: RIGHT_BRACE_2 (85)
    Ref(_24157);
    RefDS(_24156);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24156;
    ((intptr_t *)_2)[2] = _24157;
    _24158 = MAKE_SEQ(_1);
    _24157 = NOVALUE;
    _24156 = NOVALUE;
    // SubProg build_direct pc: 1058 op: PROC (27)
    _40ShowMsg(2, 187, _24158, 1);
    _24158 = NOVALUE;
    // SubProg build_direct pc: 1064 op: STARTLINE (58)

    /** buildsys.e:943				ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 1066 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45798);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45805;
    ((intptr_t *)_2)[2] = _cmd_45798;
    _24159 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 1070 op: PROC (27)
    _40ShowMsg(2, 169, _24159, 1);
    _24159 = NOVALUE;
    // SubProg build_direct pc: 1076 op: STARTLINE (58)

    /** buildsys.e:945				goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 1078 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 1080 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 1082 op: GOTO (188)
    goto GF;
    // SubProg build_direct pc: 1084 op: NOP1 (159)
L22: // addr: 1085 pc: 1084 sub: 45789 op: 159
    // SubProg build_direct pc: 1085 op: NOP1 (159)
L21: // addr: 1086 pc: 1085 sub: 45789 op: 159
    // SubProg build_direct pc: 1086 op: STARTLINE (58)

    /** buildsys.e:949	label "build_direct_cleanup"*/
    // SubProg build_direct pc: 1088 op: GLABEL (189)
GF:
    // SubProg build_direct pc: 1090 op: STARTLINE (58)

    /** buildsys.e:950		if keep = 0 then*/
    // SubProg build_direct pc: 1092 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1094 op: EQUALS_IFW (104)
    if (_57keep_42137 != 0)
    goto L23; // [1094] 1241
    // SubProg build_direct pc: 1098 op: STARTLINE (58)

    /** buildsys.e:951			for i = 1 to length(generated_files) do*/
    // SubProg build_direct pc: 1100 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1102 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42134)){
            _24161 = SEQ_PTR(_57generated_files_42134)->length;
    }
    else {
        _24161 = 1;
    }
    // SubProg build_direct pc: 1105 op: FOR_I (125)
    {
        object _i_46040;
        _i_46040 = 1;
L24: // addr: 1112 pc: 1105 sub: 45789 op: 125
        if (_i_46040 > _24161){
            goto L25; // [1105] 1159
        }
        // SubProg build_direct pc: 1112 op: STARTLINE (58)

        /** buildsys.e:952				if verbose then*/
        // SubProg build_direct pc: 1114 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1116 op: IF (20)
        if (_5verbose_12596 == 0)
        {
            goto L26; // [1116] 1138
        }
        else{
        }
        // SubProg build_direct pc: 1119 op: STARTLINE (58)

        /** buildsys.e:953					ShowMsg(1, 347, { generated_files[i] })*/
        // SubProg build_direct pc: 1121 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1123 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24162 = (object)*(((s1_ptr)_2)->base + _i_46040);
        // SubProg build_direct pc: 1127 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24162);
        ((intptr_t*)_2)[1] = _24162;
        _24163 = MAKE_SEQ(_1);
        _24162 = NOVALUE;
        // SubProg build_direct pc: 1131 op: PROC (27)
        _40ShowMsg(1, 347, _24163, 1);
        _24163 = NOVALUE;
        // SubProg build_direct pc: 1137 op: NOP1 (159)
L26: // addr: 1138 pc: 1137 sub: 45789 op: 159
        // SubProg build_direct pc: 1138 op: STARTLINE (58)

        /** buildsys.e:955				delete_file(generated_files[i])*/
        // SubProg build_direct pc: 1140 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1142 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42134);
        _24164 = (object)*(((s1_ptr)_2)->base + _i_46040);
        // SubProg build_direct pc: 1146 op: PROC (27)
        RefDS(_24164);
        _31791 = _16delete_file(_24164);
        _24164 = NOVALUE;
        // SubProg build_direct pc: 1150 op: DEREF_TEMP (208)
        DeRef(_31791);
        _31791 = NOVALUE;
        // SubProg build_direct pc: 1152 op: STARTLINE (58)

        /** buildsys.e:956			end for*/
        // SubProg build_direct pc: 1154 op: ENDFOR_INT_UP1 (54)
        _i_46040 = _i_46040 + 1;
        goto L24; // [1154] 1112
L25: // addr: 1159 pc: 1154 sub: 45789 op: 54
        ;
    }
    // SubProg build_direct pc: 1159 op: STARTLINE (58)

    /** buildsys.e:958			if length(res_file[D_ALTNAME]) then*/
    // SubProg build_direct pc: 1161 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1163 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1165 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _24165 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1169 op: LENGTH (42)
    if (IS_SEQUENCE(_24165)){
            _24166 = SEQ_PTR(_24165)->length;
    }
    else {
        _24166 = 1;
    }
    _24165 = NOVALUE;
    // SubProg build_direct pc: 1172 op: IF (20)
    if (_24166 == 0)
    {
        _24166 = NOVALUE;
        goto L27; // [1172] 1192
    }
    else{
        _24166 = NOVALUE;
    }
    // SubProg build_direct pc: 1175 op: STARTLINE (58)

    /** buildsys.e:959				delete_file(res_file[D_ALTNAME])*/
    // SubProg build_direct pc: 1177 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1179 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1181 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44966);
    _24167 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1185 op: PROC (27)
    RefDS(_24167);
    _31790 = _16delete_file(_24167);
    _24167 = NOVALUE;
    // SubProg build_direct pc: 1189 op: DEREF_TEMP (208)
    DeRef(_31790);
    _31790 = NOVALUE;
    // SubProg build_direct pc: 1191 op: NOP1 (159)
L27: // addr: 1192 pc: 1191 sub: 45789 op: 159
    // SubProg build_direct pc: 1192 op: STARTLINE (58)

    /** buildsys.e:962			if remove_output_dir then*/
    // SubProg build_direct pc: 1194 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1196 op: IF (20)
    // SubProg build_direct pc: 1240 op: NOP1 (159)
L23: // addr: 1241 pc: 1240 sub: 45789 op: 159
    // SubProg build_direct pc: 1241 op: STARTLINE (58)

    /** buildsys.e:972		chdir(cwd)*/
    // SubProg build_direct pc: 1243 op: PROC (27)
    RefDS(_cwd_45802);
    _31788 = _16chdir(_cwd_45802);
    // SubProg build_direct pc: 1247 op: DEREF_TEMP (208)
    DeRef(_31788);
    _31788 = NOVALUE;
    // SubProg build_direct pc: 1249 op: STARTLINE (58)

    /** buildsys.e:973	end procedure*/
    // SubProg build_direct pc: 1251 op: RETURNP (29)

// Exiting block BLOCK: build_direct

// block var link_only_45791

// block var the_file0_45792
    DeRefDS(_the_file0_45792);

// block var cmd_45798
    DeRef(_cmd_45798);

// block var objs_45799
    DeRef(_objs_45799);

// block var settings_45800
    DeRef(_settings_45800);

// block var cwd_45802
    DeRefDS(_cwd_45802);

// block var status_45805

// block var link_files_45834
    DeRef(_link_files_45834);
    _24141 = NOVALUE;
    DeRef(_24064);
    _24064 = NOVALUE;
    _24098 = NOVALUE;
    _24165 = NOVALUE;
    DeRef(_24092);
    _24092 = NOVALUE;
    _24144 = NOVALUE;
    _24101 = NOVALUE;
    return;
    // SubProg build_direct pc: 1254 op: BADRETURNF (43)
    ;
}


void _55write_buildfile()
{
    object _make_command_46080 = NOVALUE;
    object _settings_46120 = NOVALUE;
    object _24194 = NOVALUE; // 46129 24194
    object _24193 = NOVALUE; // 46128 24193
// skipping _24192  name type: 0
// skipping _24191  name type: 0
// skipping _24190  name type: 0
    object _24189 = NOVALUE; // 46115 24189
    object _24188 = NOVALUE; // 46112 24188
    object _24187 = NOVALUE; // 46111 24187
// skipping _24186  name type: 0
    object _24185 = NOVALUE; // 46104 24185
    object _24184 = NOVALUE; // 46100 24184
    object _24183 = NOVALUE; // 46096 24183
    object _24182 = NOVALUE; // 46095 24182
    object _24181 = NOVALUE; // 46093 24181
    object _24180 = NOVALUE; // 46092 24180
    object _24179 = NOVALUE; // 46089 24179
    object _24178 = NOVALUE; // 46088 24178
// skipping _24175  name type: 0
// skipping _24174  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_buildfile pc: 1 op: STARTLINE (58)

    /** buildsys.e:982		switch build_system_type do*/
    // SubProg write_buildfile pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_buildfile pc: 5 op: SWITCH_I (193)
    _0 = 3;
    switch ( _0 ){ 
        // SubProg write_buildfile pc: 10 op: STARTLINE (58)

        /** buildsys.e:983			case BUILD_MAKEFILE_FULL then*/
        // SubProg write_buildfile pc: 12 op: CASE (186)
        case 2:
        // SubProg write_buildfile pc: 14 op: STARTLINE (58)

        /** buildsys.e:984				write_makefile_full()*/
        // SubProg write_buildfile pc: 16 op: PROC (27)
        _55write_makefile_full();
        // SubProg write_buildfile pc: 18 op: STARTLINE (58)

        /** buildsys.e:986				if not silent then*/
        // SubProg write_buildfile pc: 20 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 22 op: NOT_IFW (108)
        if (_5silent_12593 != 0)
        goto L1; // [22] 136
        // SubProg write_buildfile pc: 25 op: STARTLINE (58)

        /** buildsys.e:987					sequence make_command*/
        // SubProg write_buildfile pc: 27 op: STARTLINE (58)

        /** buildsys.e:988					if compiler_type = COMPILER_WATCOM then*/
        // SubProg write_buildfile pc: 29 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 31 op: EQUALS_IFW_I (121)
        // SubProg write_buildfile pc: 45 op: STARTLINE (58)

        /** buildsys.e:991						make_command = "make -f "*/
        // SubProg write_buildfile pc: 47 op: ASSIGN (18)
        RefDS(_24177);
        DeRefi(_make_command_46080);
        _make_command_46080 = _24177;
        // SubProg write_buildfile pc: 50 op: SEQUENCE_CHECK (97)
        // SubProg write_buildfile pc: 52 op: NOP1 (159)
        // SubProg write_buildfile pc: 53 op: STARTLINE (58)

        /** buildsys.e:994					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 57 op: PLUS (11)
        _24178 = _5cfile_count_12556 + 2;
        if ((object)((uintptr_t)_24178 + (uintptr_t)HIGH_BITS) >= 0){
            _24178 = NewDouble((eudouble)_24178);
        }
        // SubProg write_buildfile pc: 61 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24178;
        _24179 = MAKE_SEQ(_1);
        _24178 = NOVALUE;
        // SubProg write_buildfile pc: 65 op: PROC (27)
        _40ShowMsg(1, 170, _24179, 1);
        _24179 = NOVALUE;
        // SubProg write_buildfile pc: 71 op: STARTLINE (58)

        /** buildsys.e:996					if sequence(output_dir) and length(output_dir) > 0 then*/
        // SubProg write_buildfile pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 75 op: IS_A_SEQUENCE (68)
        _24180 = 1;
        // SubProg write_buildfile pc: 78 op: SC1_AND_IF (146)
        if (_24180 == 0) {
            goto L2; // [78] 118
        }
        // SubProg write_buildfile pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 84 op: LENGTH (42)
        // Known sequence length:
        _24182 = 0;
        // SubProg write_buildfile pc: 87 op: GREATER (6)
        _24183 = (0 > 0);
        _24182 = NOVALUE;
        // SubProg write_buildfile pc: 91 op: NOP1 (159)
        // SubProg write_buildfile pc: 92 op: IF (20)
        if (_24183 == 0)
        {
            DeRef(_24183);
            _24183 = NOVALUE;
            goto L2; // [92] 118
        }
        else{
            DeRef(_24183);
            _24183 = NOVALUE;
        }
        // SubProg write_buildfile pc: 95 op: STARTLINE (58)

        /** buildsys.e:997						ShowMsg(1, 174, { output_dir, make_command, file0 })*/
        // SubProg write_buildfile pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 99 op: PRIVATE_INIT_CHECK (30)
        // SubProg write_buildfile pc: 101 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 103 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_57output_dir_42144);
        ((intptr_t*)_2)[1] = _57output_dir_42144;
        RefDS(_make_command_46080);
        ((intptr_t*)_2)[2] = _make_command_46080;
        RefDS(_57file0_44102);
        ((intptr_t*)_2)[3] = _57file0_44102;
        _24184 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 109 op: PROC (27)
        _40ShowMsg(1, 174, _24184, 1);
        _24184 = NOVALUE;
        // SubProg write_buildfile pc: 115 op: ELSE (23)
        goto L3; // [115] 135
        // SubProg write_buildfile pc: 117 op: NOP1 (159)
L2: // addr: 118 pc: 117 sub: 46072 op: 159
        // SubProg write_buildfile pc: 118 op: STARTLINE (58)

        /** buildsys.e:999						ShowMsg(1, 172, { make_command, file0 })*/
        // SubProg write_buildfile pc: 120 op: PRIVATE_INIT_CHECK (30)
        // SubProg write_buildfile pc: 122 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 124 op: RIGHT_BRACE_2 (85)
        RefDS(_57file0_44102);
        RefDS(_make_command_46080);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _make_command_46080;
        ((intptr_t *)_2)[2] = _57file0_44102;
        _24185 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 128 op: PROC (27)
        _40ShowMsg(1, 172, _24185, 1);
        _24185 = NOVALUE;
        // SubProg write_buildfile pc: 134 op: NOP1 (159)
L3: // addr: 135 pc: 134 sub: 46072 op: 159
        // SubProg write_buildfile pc: 135 op: NOP1 (159)
L1: // addr: 136 pc: 135 sub: 46072 op: 159
        // SubProg write_buildfile pc: 136 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var make_command_46080
        DeRefi(_make_command_46080);
        _make_command_46080 = NOVALUE;
        // SubProg write_buildfile pc: 138 op: ELSE (23)
        goto L4; // [138] 263
        // SubProg write_buildfile pc: 140 op: STARTLINE (58)

        /** buildsys.e:1003			case BUILD_MAKEFILE_PARTIAL then*/
        // SubProg write_buildfile pc: 142 op: CASE (186)
        case 1:
        // SubProg write_buildfile pc: 144 op: STARTLINE (58)

        /** buildsys.e:1004				write_makefile_partial()*/
        // SubProg write_buildfile pc: 146 op: PROC (27)
        _55write_makefile_partial();
        // SubProg write_buildfile pc: 148 op: STARTLINE (58)

        /** buildsys.e:1006				if not silent then*/
        // SubProg write_buildfile pc: 150 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 152 op: NOT_IFW (108)
        if (_5silent_12593 != 0)
        goto L4; // [152] 263
        // SubProg write_buildfile pc: 155 op: STARTLINE (58)

        /** buildsys.e:1007					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 159 op: PLUS (11)
        _24187 = _5cfile_count_12556 + 2;
        if ((object)((uintptr_t)_24187 + (uintptr_t)HIGH_BITS) >= 0){
            _24187 = NewDouble((eudouble)_24187);
        }
        // SubProg write_buildfile pc: 163 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24187;
        _24188 = MAKE_SEQ(_1);
        _24187 = NOVALUE;
        // SubProg write_buildfile pc: 167 op: PROC (27)
        _40ShowMsg(1, 170, _24188, 1);
        _24188 = NOVALUE;
        // SubProg write_buildfile pc: 173 op: STARTLINE (58)

        /** buildsys.e:1008					ShowMsg(1, 173, { file0 })*/
        // SubProg write_buildfile pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 177 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_57file0_44102);
        ((intptr_t*)_2)[1] = _57file0_44102;
        _24189 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 181 op: PROC (27)
        _40ShowMsg(1, 173, _24189, 1);
        _24189 = NOVALUE;
        // SubProg write_buildfile pc: 187 op: NOP1 (159)
        // SubProg write_buildfile pc: 188 op: ELSE (23)
        goto L4; // [188] 263
        // SubProg write_buildfile pc: 190 op: STARTLINE (58)

        /** buildsys.e:1011			case BUILD_DIRECT then*/
        // SubProg write_buildfile pc: 192 op: CASE (186)
        case 3:
        // SubProg write_buildfile pc: 194 op: STARTLINE (58)

        /** buildsys.e:1012				build_direct()*/
        // SubProg write_buildfile pc: 196 op: PROC (27)
        RefDS(_21958);
        _55build_direct(0, _21958);
        // SubProg write_buildfile pc: 200 op: STARTLINE (58)

        /** buildsys.e:1014				if not silent then*/
        // SubProg write_buildfile pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 204 op: NOT_IFW (108)
        if (_5silent_12593 != 0)
        goto L5; // [204] 215
        // SubProg write_buildfile pc: 207 op: STARTLINE (58)

        /** buildsys.e:1015					sequence settings = setup_build()*/
        // SubProg write_buildfile pc: 209 op: PROC (27)
        _0 = _settings_46120;
        _settings_46120 = _55setup_build();
        DeRef(_0);
        // SubProg write_buildfile pc: 212 op: SEQUENCE_CHECK (97)
        // SubProg write_buildfile pc: 214 op: NOP1 (159)
L5: // addr: 215 pc: 214 sub: 46072 op: 159
        // SubProg write_buildfile pc: 215 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var settings_46120
        DeRef(_settings_46120);
        _settings_46120 = NOVALUE;
        // SubProg write_buildfile pc: 217 op: ELSE (23)
        goto L4; // [217] 263
        // SubProg write_buildfile pc: 219 op: STARTLINE (58)

        /** buildsys.e:1019			case BUILD_NONE then*/
        // SubProg write_buildfile pc: 221 op: CASE (186)
        case 0:
        // SubProg write_buildfile pc: 223 op: STARTLINE (58)

        /** buildsys.e:1020				if not silent then*/
        // SubProg write_buildfile pc: 225 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 227 op: NOT_IFW (108)
        if (_5silent_12593 != 0)
        goto L4; // [227] 263
        // SubProg write_buildfile pc: 230 op: STARTLINE (58)

        /** buildsys.e:1021					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 232 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 234 op: PLUS (11)
        _24193 = _5cfile_count_12556 + 2;
        if ((object)((uintptr_t)_24193 + (uintptr_t)HIGH_BITS) >= 0){
            _24193 = NewDouble((eudouble)_24193);
        }
        // SubProg write_buildfile pc: 238 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24193;
        _24194 = MAKE_SEQ(_1);
        _24193 = NOVALUE;
        // SubProg write_buildfile pc: 242 op: PROC (27)
        _40ShowMsg(1, 170, _24194, 1);
        _24194 = NOVALUE;
        // SubProg write_buildfile pc: 248 op: NOP1 (159)
        // SubProg write_buildfile pc: 249 op: ELSE (23)
        goto L4; // [249] 263
        // SubProg write_buildfile pc: 251 op: STARTLINE (58)

        /** buildsys.e:1026			case else*/
        // SubProg write_buildfile pc: 253 op: CASE (186)
        default:
        // SubProg write_buildfile pc: 255 op: STARTLINE (58)

        /** buildsys.e:1027				CompileErr(151)*/
        // SubProg write_buildfile pc: 257 op: PROC (27)
        RefDS(_21958);
        _49CompileErr(151, _21958, 0);
        // SubProg write_buildfile pc: 262 op: NOPSWITCH (187)
    ;}L4: // addr: 263 pc: 262 sub: 46072 op: 187
    // SubProg write_buildfile pc: 263 op: STARTLINE (58)

    /** buildsys.e:1029	end procedure*/
    // SubProg write_buildfile pc: 265 op: RETURNP (29)

// Exiting block BLOCK: write_buildfile
    return;
    // SubProg write_buildfile pc: 268 op: BADRETURNF (43)
    ;
}



// 0x5C2F607D
