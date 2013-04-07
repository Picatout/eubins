// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _55update_checksum(object _raw_data_44931)
{
// skipping _23550  name type: 0
    object _23549 = NOVALUE; // 44932 23549
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_checksum pc: 1 op: STARTLINE (58)

    /** buildsys.e:213		cfile_check = xor_bits(cfile_check, hash( raw_data, stdhash:HSIEH32))*/
    // SubProg update_checksum pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_checksum pc: 5 op: HASH (194)
    _23549 = calc_hash(_raw_data_44931, -5);
    // SubProg update_checksum pc: 9 op: XOR_BITS (26)
    _0 = _55cfile_check_44912;
    if (IS_ATOM_INT(_55cfile_check_44912) && IS_ATOM_INT(_23549)) {
        {uintptr_t tu;
             tu = (uintptr_t)_55cfile_check_44912 ^ (uintptr_t)_23549;
             _55cfile_check_44912 = MAKE_UINT(tu);
        }
    }
    else {
        if (IS_ATOM_INT(_55cfile_check_44912)) {
            temp_d.dbl = (eudouble)_55cfile_check_44912;
            _55cfile_check_44912 = Dxor_bits(&temp_d, DBL_PTR(_23549));
        }
        else {
            if (IS_ATOM_INT(_23549)) {
                temp_d.dbl = (eudouble)_23549;
                _55cfile_check_44912 = Dxor_bits(DBL_PTR(_55cfile_check_44912), &temp_d);
            }
            else
            _55cfile_check_44912 = Dxor_bits(DBL_PTR(_55cfile_check_44912), DBL_PTR(_23549));
        }
    }
    DeRef(_0);
    DeRef(_23549);
    _23549 = NOVALUE;
    // SubProg update_checksum pc: 13 op: STARTLINE (58)

    /** buildsys.e:214	end procedure*/
    // SubProg update_checksum pc: 15 op: RETURNP (29)

// Exiting block BLOCK: update_checksum

// block var raw_data_44931
    DeRef(_raw_data_44931);
    return;
    // SubProg update_checksum pc: 18 op: BADRETURNF (43)
    ;
}


void _55write_checksum(object _file_44936)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_checksum pc: 1 op: INTEGER_CHECK (96)
    // SubProg write_checksum pc: 3 op: STARTLINE (58)

    /** buildsys.e:219		printf( file, "\n// 0x%08x\n", cfile_check )*/
    // SubProg write_checksum pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_checksum pc: 7 op: PRINTF (38)
    EPrintf(_file_44936, _23551, _55cfile_check_44912);
    // SubProg write_checksum pc: 11 op: STARTLINE (58)

    /** buildsys.e:220		cfile_check = 0*/
    // SubProg write_checksum pc: 13 op: ASSIGN (18)
    DeRef(_55cfile_check_44912);
    _55cfile_check_44912 = 0;
    // SubProg write_checksum pc: 16 op: STARTLINE (58)

    /** buildsys.e:221	end procedure*/
    // SubProg write_checksum pc: 18 op: RETURNP (29)

// Exiting block BLOCK: write_checksum

// block var file_44936
    return;
    // SubProg write_checksum pc: 21 op: BADRETURNF (43)
    ;
}


object _55adjust_for_command_line_passing(object _long_path_44984)
{
    object _slash_44985 = NOVALUE;
// skipping _23574  name type: 0
// skipping _23573  name type: 0
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
    _slash_44985 = 47;
    // SubProg adjust_for_command_line_passing pc: 42 op: INTEGER_CHECK (96)
    // SubProg adjust_for_command_line_passing pc: 44 op: NOP1 (159)
    // SubProg adjust_for_command_line_passing pc: 45 op: STARTLINE (58)

    /** buildsys.e:317		ifdef UNIX then*/
    // SubProg adjust_for_command_line_passing pc: 47 op: STARTLINE (58)

    /** buildsys.e:318			return long_path*/
    // SubProg adjust_for_command_line_passing pc: 49 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_command_line_passing

// block var slash_44985
    return _long_path_44984;
    // SubProg adjust_for_command_line_passing pc: 53 op: BADRETURNF (43)
    ;
}


object _55adjust_for_build_file(object _long_path_44994)
{
    object _short_path_44995 = NOVALUE;
    object _23581 = NOVALUE; // 45006 23581
    object _23580 = NOVALUE; // 45003 23580
    object _23579 = NOVALUE; // 45002 23579
    object _23578 = NOVALUE; // 45001 23578
    object _23577 = NOVALUE; // 45000 23577
    object _23576 = NOVALUE; // 44998 23576
// skipping _23575  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_for_build_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_for_build_file pc: 3 op: STARTLINE (58)

    /** buildsys.e:355	    object short_path = adjust_for_command_line_passing(long_path)*/
    // SubProg adjust_for_build_file pc: 5 op: PROC (27)
    RefDS(_long_path_44994);
    _0 = _short_path_44995;
    _short_path_44995 = _55adjust_for_command_line_passing(_long_path_44994);
    DeRef(_0);
    // SubProg adjust_for_build_file pc: 9 op: STARTLINE (58)

    /** buildsys.e:356	    if atom(short_path) then*/
    // SubProg adjust_for_build_file pc: 11 op: IS_AN_ATOM (67)
    _23576 = IS_ATOM(_short_path_44995);
    // SubProg adjust_for_build_file pc: 14 op: IF (20)
    if (_23576 == 0)
    {
        _23576 = NOVALUE;
        goto L1; // [14] 24
    }
    else{
        _23576 = NOVALUE;
    }
    // SubProg adjust_for_build_file pc: 17 op: STARTLINE (58)

    /** buildsys.e:357	    	return short_path*/
    // SubProg adjust_for_build_file pc: 19 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_44994
    DeRefDS(_long_path_44994);
    return _short_path_44995;
    // SubProg adjust_for_build_file pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 44992 op: 159
    // SubProg adjust_for_build_file pc: 24 op: STARTLINE (58)

    /** buildsys.e:359		if compiler_type = COMPILER_GCC and build_system_type != BUILD_DIRECT and TWINDOWS then*/
    // SubProg adjust_for_build_file pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 28 op: EQUALS (3)
    _23577 = (0 == 1);
    // SubProg adjust_for_build_file pc: 32 op: SC1_AND (141)
    if (_23577 == 0) {
        _23578 = 0;
        goto L2; // [32] 46
    }
    // SubProg adjust_for_build_file pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 38 op: NOTEQ (4)
    _23579 = (3 != 3);
    // SubProg adjust_for_build_file pc: 42 op: SC2_AND (142)
    _23578 = (_23579 != 0);
    // SubProg adjust_for_build_file pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 44992 op: 159
    // SubProg adjust_for_build_file pc: 46 op: SC1_AND_IF (146)
    if (_23578 == 0) {
        goto L3; // [46] 69
    }
    // SubProg adjust_for_build_file pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_for_build_file pc: 52 op: NOP1 (159)
    // SubProg adjust_for_build_file pc: 53 op: IF (20)
    goto L3; // [53] 69
    // SubProg adjust_for_build_file pc: 56 op: STARTLINE (58)

    /** buildsys.e:360			return windows_to_mingw_path(short_path)*/
    // SubProg adjust_for_build_file pc: 58 op: PROC (27)
    Ref(_short_path_44995);
    _23581 = _55windows_to_mingw_path(_short_path_44995);
    // SubProg adjust_for_build_file pc: 62 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_44994
    DeRefDS(_long_path_44994);

// block var short_path_44995
    DeRef(_short_path_44995);
    DeRef(_23577);
    _23577 = NOVALUE;
    DeRef(_23579);
    _23579 = NOVALUE;
    return _23581;
    // SubProg adjust_for_build_file pc: 66 op: ELSE (23)
    goto L4; // [66] 76
    // SubProg adjust_for_build_file pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 44992 op: 159
    // SubProg adjust_for_build_file pc: 69 op: STARTLINE (58)

    /** buildsys.e:362			return short_path*/
    // SubProg adjust_for_build_file pc: 71 op: RETURNF (28)

// Exiting block BLOCK: adjust_for_build_file

// block var long_path_44994
    DeRefDS(_long_path_44994);
    DeRef(_23581);
    _23581 = NOVALUE;
    DeRef(_23577);
    _23577 = NOVALUE;
    DeRef(_23579);
    _23579 = NOVALUE;
    return _short_path_44995;
    // SubProg adjust_for_build_file pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 44992 op: 159
    // SubProg adjust_for_build_file pc: 76 op: BADRETURNF (43)
    ;
}


object _55setup_build()
{
    object _c_exe_45010 = NOVALUE;
    object _c_flags_45011 = NOVALUE;
    object _l_exe_45012 = NOVALUE;
    object _l_flags_45013 = NOVALUE;
    object _obj_ext_45014 = NOVALUE;
    object _exe_ext_45015 = NOVALUE;
    object _l_flags_begin_45016 = NOVALUE;
    object _rc_comp_45017 = NOVALUE;
    object _l_names_45018 = NOVALUE;
    object _l_ext_45019 = NOVALUE;
    object _t_slash_45020 = NOVALUE;
    object _eudir_45062 = NOVALUE;
    object _locations_45087 = NOVALUE;
    object _compile_dir_45139 = NOVALUE;
    object _bits_45150 = NOVALUE;
    object _m_flag_45160 = NOVALUE;
    object _23750 = NOVALUE; // 45303 23750
// skipping _23749  name type: 0
// skipping _23748  name type: 0
    object _23747 = NOVALUE; // 45299 23747
    object _23746 = NOVALUE; // 45297 23746
// skipping _23745  name type: 0
// skipping _23744  name type: 0
    object _23743 = NOVALUE; // 45293 23743
    object _23742 = NOVALUE; // 45291 23742
// skipping _23741  name type: 0
    object _23739 = NOVALUE; // 45285 23739
    object _23738 = NOVALUE; // 45284 23738
// skipping _23736  name type: 0
    object _23735 = NOVALUE; // 45280 23735
    object _23734 = NOVALUE; // 45279 23734
// skipping _23732  name type: 0
// skipping _23730  name type: 0
// skipping _23728  name type: 0
    object _23727 = NOVALUE; // 45268 23727
    object _23726 = NOVALUE; // 45267 23726
// skipping _23724  name type: 0
// skipping _23722  name type: 0
    object _23721 = NOVALUE; // 45261 23721
    object _23720 = NOVALUE; // 45260 23720
// skipping _23718  name type: 0
// skipping _23716  name type: 0
    object _23715 = NOVALUE; // 45253 23715
    object _23714 = NOVALUE; // 45252 23714
// skipping _23712  name type: 0
    object _23711 = NOVALUE; // 45248 23711
    object _23710 = NOVALUE; // 45247 23710
// skipping _23708  name type: 0
// skipping _23704  name type: 0
// skipping _23702  name type: 0
// skipping _23700  name type: 0
    object _23698 = NOVALUE; // 45231 23698
    object _23697 = NOVALUE; // 45230 23697
// skipping _23695  name type: 0
// skipping _23693  name type: 0
// skipping _23692  name type: 0
// skipping _23691  name type: 0
// skipping _23689  name type: 0
// skipping _23687  name type: 0
// skipping _23685  name type: 0
// skipping _23683  name type: 0
    object _23682 = NOVALUE; // 45201 23682
    object _23681 = NOVALUE; // 45200 23681
// skipping _23679  name type: 0
// skipping _23678  name type: 0
// skipping _23676  name type: 0
// skipping _23675  name type: 0
    object _23673 = NOVALUE; // 45189 23673
// skipping _23672  name type: 0
    object _23671 = NOVALUE; // 45185 23671
    object _23670 = NOVALUE; // 45184 23670
    object _23669 = NOVALUE; // 45183 23669
    object _23668 = NOVALUE; // 45182 23668
// skipping _23666  name type: 0
    object _23664 = NOVALUE; // 45177 23664
    object _23663 = NOVALUE; // 45175 23663
// skipping _23662  name type: 0
// skipping _23660  name type: 0
// skipping _23658  name type: 0
// skipping _23656  name type: 0
// skipping _23654  name type: 0
// skipping _23653  name type: 0
    object _23649 = NOVALUE; // 45149 23649
    object _23648 = NOVALUE; // 45148 23648
// skipping _23646  name type: 0
    object _23645 = NOVALUE; // 45144 23645
// skipping _23644  name type: 0
// skipping _23639  name type: 0
// skipping _23637  name type: 0
// skipping _23635  name type: 0
// skipping _23634  name type: 0
    object _23633 = NOVALUE; // 45112 23633
// skipping _23632  name type: 0
    object _23631 = NOVALUE; // 45107 23631
    object _23630 = NOVALUE; // 45106 23630
    object _23629 = NOVALUE; // 45105 23629
    object _23628 = NOVALUE; // 45103 23628
    object _23627 = NOVALUE; // 45102 23627
    object _23626 = NOVALUE; // 45101 23626
    object _23625 = NOVALUE; // 45100 23625
    object _23624 = NOVALUE; // 45099 23624
    object _23623 = NOVALUE; // 45096 23623
    object _23622 = NOVALUE; // 45093 23622
// skipping _23620  name type: 0
    object _23617 = NOVALUE; // 45086 23617
// skipping _23616  name type: 0
// skipping _23615  name type: 0
    object _23614 = NOVALUE; // 45081 23614
    object _23613 = NOVALUE; // 45080 23613
    object _23612 = NOVALUE; // 45079 23612
    object _23609 = NOVALUE; // 45075 23609
    object _23608 = NOVALUE; // 45072 23608
    object _23607 = NOVALUE; // 45071 23607
// skipping _23605  name type: 0
    object _23604 = NOVALUE; // 45067 23604
// skipping _23603  name type: 0
    object _23600 = NOVALUE; // 45057 23600
    object _23599 = NOVALUE; // 45056 23599
    object _23597 = NOVALUE; // 45054 23597
    object _23596 = NOVALUE; // 45051 23596
    object _23595 = NOVALUE; // 45049 23595
    object _23594 = NOVALUE; // 45046 23594
// skipping _23593  name type: 0
// skipping _23592  name type: 0
// skipping _23591  name type: 0
// skipping _23588  name type: 0
    object _23587 = NOVALUE; // 45034 23587
    object _23586 = NOVALUE; // 45029 23586
    object _23585 = NOVALUE; // 45027 23585
    object _23584 = NOVALUE; // 45026 23584
    object _23583 = NOVALUE; // 45025 23583
    object _23582 = NOVALUE; // 45023 23582
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg setup_build pc: 1 op: STARTLINE (58)

    /** buildsys.e:373			c_exe   = "",*/
    // SubProg setup_build pc: 3 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_c_exe_45010);
    _c_exe_45010 = _21936;
    // SubProg setup_build pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 8 op: STARTLINE (58)

    /** buildsys.e:374			c_flags = "",*/
    // SubProg setup_build pc: 10 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_c_flags_45011);
    _c_flags_45011 = _21936;
    // SubProg setup_build pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 15 op: STARTLINE (58)

    /** buildsys.e:375			l_exe   = "",*/
    // SubProg setup_build pc: 17 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_l_exe_45012);
    _l_exe_45012 = _21936;
    // SubProg setup_build pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 22 op: STARTLINE (58)

    /** buildsys.e:376			l_flags = "",*/
    // SubProg setup_build pc: 24 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_l_flags_45013);
    _l_flags_45013 = _21936;
    // SubProg setup_build pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 29 op: STARTLINE (58)

    /** buildsys.e:377			obj_ext = "",*/
    // SubProg setup_build pc: 31 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_obj_ext_45014);
    _obj_ext_45014 = _21936;
    // SubProg setup_build pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 36 op: STARTLINE (58)

    /** buildsys.e:378			exe_ext = "",*/
    // SubProg setup_build pc: 38 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_exe_ext_45015);
    _exe_ext_45015 = _21936;
    // SubProg setup_build pc: 41 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 43 op: STARTLINE (58)

    /** buildsys.e:379			l_flags_begin = "",*/
    // SubProg setup_build pc: 45 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_l_flags_begin_45016);
    _l_flags_begin_45016 = _21936;
    // SubProg setup_build pc: 48 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 50 op: STARTLINE (58)

    /** buildsys.e:380			rc_comp = "",*/
    // SubProg setup_build pc: 52 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_rc_comp_45017);
    _rc_comp_45017 = _21936;
    // SubProg setup_build pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 57 op: STARTLINE (58)

    /** buildsys.e:385		if dll_option*/
    // SubProg setup_build pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 61 op: SC1_AND (141)
    if (_57dll_option_42088 == 0) {
        _23582 = 0;
        goto L1; // [61] 78
    }
    // SubProg setup_build pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 67 op: LENGTH (42)
    // Known sequence length:
    _23583 = 0;
    // SubProg setup_build pc: 70 op: GREATER (6)
    _23584 = (0 > 0);
    _23583 = NOVALUE;
    // SubProg setup_build pc: 74 op: SC2_AND (142)
    _23582 = (_23584 != 0);
    // SubProg setup_build pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 45008 op: 159
    // SubProg setup_build pc: 78 op: SC1_AND_IF (146)
    if (_23582 == 0) {
        goto L2; // [78] 101
    }
    // SubProg setup_build pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 84 op: NOT (7)
    _23586 = (0 == 0);
    // SubProg setup_build pc: 87 op: NOP1 (159)
    // SubProg setup_build pc: 88 op: IF (20)
    if (_23586 == 0)
    {
        DeRef(_23586);
        _23586 = NOVALUE;
        goto L2; // [88] 101
    }
    else{
        DeRef(_23586);
        _23586 = NOVALUE;
    }
    // SubProg setup_build pc: 91 op: STARTLINE (58)

    /** buildsys.e:388			user_library = user_pic_library*/
    // SubProg setup_build pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 95 op: ASSIGN (18)
    RefDS(_57user_pic_library_42101);
    DeRef(_57user_library_42100);
    _57user_library_42100 = _57user_pic_library_42101;
    // SubProg setup_build pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 100 op: NOP1 (159)
L2: // addr: 101 pc: 100 sub: 45008 op: 159
    // SubProg setup_build pc: 101 op: STARTLINE (58)

    /** buildsys.e:391		if length(user_library) = 0 then*/
    // SubProg setup_build pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_57user_library_42100)){
            _23587 = SEQ_PTR(_57user_library_42100)->length;
    }
    else {
        _23587 = 1;
    }
    // SubProg setup_build pc: 108 op: EQUALS_IFW_I (121)
    if (_23587 != 0)
    goto L3; // [108] 456
    // SubProg setup_build pc: 112 op: STARTLINE (58)

    /** buildsys.e:392			if debug_option then*/
    // SubProg setup_build pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 116 op: IF (20)
    if (_57debug_option_42098 == 0)
    {
        goto L4; // [116] 128
    }
    else{
    }
    // SubProg setup_build pc: 119 op: STARTLINE (58)

    /** buildsys.e:393				l_names = { "eudbg", "eu" }*/
    // SubProg setup_build pc: 121 op: RIGHT_BRACE_2 (85)
    RefDS(_23590);
    RefDS(_23589);
    DeRef(_l_names_45018);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23589;
    ((intptr_t *)_2)[2] = _23590;
    _l_names_45018 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 125 op: ELSE (23)
    goto L5; // [125] 135
    // SubProg setup_build pc: 127 op: NOP1 (159)
L4: // addr: 128 pc: 127 sub: 45008 op: 159
    // SubProg setup_build pc: 128 op: STARTLINE (58)

    /** buildsys.e:395				l_names = { "eu", "eudbg" }*/
    // SubProg setup_build pc: 130 op: RIGHT_BRACE_2 (85)
    RefDS(_23589);
    RefDS(_23590);
    DeRef(_l_names_45018);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23590;
    ((intptr_t *)_2)[2] = _23589;
    _l_names_45018 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 45008 op: 159
    // SubProg setup_build pc: 135 op: STARTLINE (58)

    /** buildsys.e:400			if TUNIX or compiler_type = COMPILER_GCC then*/
    // SubProg setup_build pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 139 op: SC1_OR_IF (147)
    if (_39TUNIX_19966 != 0) {
        goto L6; // [139] 154
    }
    // SubProg setup_build pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 145 op: EQUALS (3)
    _23594 = (0 == 1);
    // SubProg setup_build pc: 149 op: NOP1 (159)
    // SubProg setup_build pc: 150 op: IF (20)
    if (_23594 == 0)
    {
        DeRef(_23594);
        _23594 = NOVALUE;
        goto L7; // [150] 224
    }
    else{
        DeRef(_23594);
        _23594 = NOVALUE;
    }
    // SubProg setup_build pc: 153 op: NOP1 (159)
L6: // addr: 154 pc: 153 sub: 45008 op: 159
    // SubProg setup_build pc: 154 op: STARTLINE (58)

    /** buildsys.e:401				l_ext = "a"*/
    // SubProg setup_build pc: 156 op: ASSIGN (18)
    RefDS(_22217);
    DeRefi(_l_ext_45019);
    _l_ext_45019 = _22217;
    // SubProg setup_build pc: 159 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 161 op: STARTLINE (58)

    /** buildsys.e:402				t_slash = "/"*/
    // SubProg setup_build pc: 163 op: ASSIGN (18)
    RefDS(_23512);
    DeRefi(_t_slash_45020);
    _t_slash_45020 = _23512;
    // SubProg setup_build pc: 166 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 168 op: STARTLINE (58)

    /** buildsys.e:403				if dll_option and not TWINDOWS then*/
    // SubProg setup_build pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 172 op: SC1_AND_IF (146)
    if (_57dll_option_42088 == 0) {
        goto L8; // [172] 247
    }
    // SubProg setup_build pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 178 op: NOT (7)
    _23596 = (0 == 0);
    // SubProg setup_build pc: 181 op: NOP1 (159)
    // SubProg setup_build pc: 182 op: IF (20)
    if (_23596 == 0)
    {
        DeRef(_23596);
        _23596 = NOVALUE;
        goto L8; // [182] 247
    }
    else{
        DeRef(_23596);
        _23596 = NOVALUE;
    }
    // SubProg setup_build pc: 185 op: STARTLINE (58)

    /** buildsys.e:404					for i = 1 to length( l_names ) do*/
    // SubProg setup_build pc: 187 op: PRIVATE_INIT_CHECK (30)
    // SubProg setup_build pc: 189 op: LENGTH (42)
    if (IS_SEQUENCE(_l_names_45018)){
            _23597 = SEQ_PTR(_l_names_45018)->length;
    }
    else {
        _23597 = 1;
    }
    // SubProg setup_build pc: 192 op: FOR_I (125)
    {
        object _i_45053;
        _i_45053 = 1;
L9: // addr: 199 pc: 192 sub: 45008 op: 125
        if (_i_45053 > _23597){
            goto LA; // [192] 220
        }
        // SubProg setup_build pc: 199 op: STARTLINE (58)

        /** buildsys.e:406						l_names[i] &= "so"*/
        // SubProg setup_build pc: 201 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_l_names_45018);
        _23599 = (object)*(((s1_ptr)_2)->base + _i_45053);
        // SubProg setup_build pc: 205 op: CONCAT (15)
        if (IS_SEQUENCE(_23599) && IS_ATOM(_23598)) {
        }
        else if (IS_ATOM(_23599) && IS_SEQUENCE(_23598)) {
            Ref(_23599);
            Prepend(&_23600, _23598, _23599);
        }
        else {
            Concat((object_ptr)&_23600, _23599, _23598);
            _23599 = NOVALUE;
        }
        _23599 = NOVALUE;
        // SubProg setup_build pc: 209 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_l_names_45018);
        _2 = (object)(((s1_ptr)_2)->base + _i_45053);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _23600;
        if( _1 != _23600 ){
            DeRef(_1);
        }
        _23600 = NOVALUE;
        // SubProg setup_build pc: 213 op: STARTLINE (58)

        /** buildsys.e:407					end for*/
        // SubProg setup_build pc: 215 op: ENDFOR_INT_UP1 (54)
        _i_45053 = _i_45053 + 1;
        goto L9; // [215] 199
LA: // addr: 220 pc: 215 sub: 45008 op: 54
        ;
    }
    // SubProg setup_build pc: 220 op: NOP1 (159)
    // SubProg setup_build pc: 221 op: ELSE (23)
    goto L8; // [221] 247
    // SubProg setup_build pc: 223 op: NOP1 (159)
L7: // addr: 224 pc: 223 sub: 45008 op: 159
    // SubProg setup_build pc: 224 op: STARTLINE (58)

    /** buildsys.e:409			elsif TWINDOWS then*/
    // SubProg setup_build pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 228 op: IF (20)
    // SubProg setup_build pc: 246 op: NOP1 (159)
L8: // addr: 247 pc: 246 sub: 45008 op: 159
    // SubProg setup_build pc: 247 op: STARTLINE (58)

    /** buildsys.e:414			object eudir = get_eucompiledir()*/
    // SubProg setup_build pc: 249 op: PROC (27)
    _0 = _eudir_45062;
    _eudir_45062 = _57get_eucompiledir();
    DeRef(_0);
    // SubProg setup_build pc: 252 op: STARTLINE (58)

    /** buildsys.e:415			if not file_exists(eudir) then*/
    // SubProg setup_build pc: 254 op: PROC (27)
    Ref(_eudir_45062);
    _23604 = _18file_exists(_eudir_45062);
    // SubProg setup_build pc: 258 op: NOT_IFW (108)
    if (IS_ATOM_INT(_23604)) {
        if (_23604 != 0){
            DeRef(_23604);
            _23604 = NOVALUE;
            goto LB; // [258] 279
        }
    }
    else {
        if (DBL_PTR(_23604)->dbl != 0.0){
            DeRef(_23604);
            _23604 = NOVALUE;
            goto LB; // [258] 279
        }
    }
    DeRef(_23604);
    _23604 = NOVALUE;
    // SubProg setup_build pc: 261 op: STARTLINE (58)

    /** buildsys.e:416				printf(2,"Supplied directory \'%s\' is not a valid EUDIR\n",{get_eucompiledir()})*/
    // SubProg setup_build pc: 263 op: PROC (27)
    _23607 = _57get_eucompiledir();
    // SubProg setup_build pc: 266 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23607;
    _23608 = MAKE_SEQ(_1);
    _23607 = NOVALUE;
    // SubProg setup_build pc: 270 op: PRINTF (38)
    EPrintf(2, _23606, _23608);
    DeRefDS(_23608);
    _23608 = NOVALUE;
    // SubProg setup_build pc: 274 op: STARTLINE (58)

    /** buildsys.e:417				abort(1)*/
    // SubProg setup_build pc: 276 op: ABORT (126)
    UserCleanup(1);
    // SubProg setup_build pc: 278 op: NOP1 (159)
LB: // addr: 279 pc: 278 sub: 45008 op: 159
    // SubProg setup_build pc: 279 op: STARTLINE (58)

    /** buildsys.e:419			for tk = 1 to length(l_names) label "translation kind" do*/
    // SubProg setup_build pc: 281 op: PRIVATE_INIT_CHECK (30)
    // SubProg setup_build pc: 283 op: LENGTH (42)
    if (IS_SEQUENCE(_l_names_45018)){
            _23609 = SEQ_PTR(_l_names_45018)->length;
    }
    else {
        _23609 = 1;
    }
    // SubProg setup_build pc: 286 op: FOR_I (125)
    {
        object _tk_45074;
        _tk_45074 = 1;
LC: // addr: 293 pc: 286 sub: 45008 op: 125
        if (_tk_45074 > _23609){
            goto LD; // [286] 455
        }
        // SubProg setup_build pc: 293 op: STARTLINE (58)

        /** buildsys.e:420				user_library = eudir & sprintf("%sbin%s%s.%s",{t_slash, t_slash, l_names[tk],l_ext})*/
        // SubProg setup_build pc: 295 op: PRIVATE_INIT_CHECK (30)
        // SubProg setup_build pc: 297 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_l_names_45018);
        _23612 = (object)*(((s1_ptr)_2)->base + _tk_45074);
        // SubProg setup_build pc: 301 op: PRIVATE_INIT_CHECK (30)
        // SubProg setup_build pc: 303 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        RefDSn(_t_slash_45020, 2);
        ((intptr_t*)_2)[1] = _t_slash_45020;
        ((intptr_t*)_2)[2] = _t_slash_45020;
        Ref(_23612);
        ((intptr_t*)_2)[3] = _23612;
        RefDS(_l_ext_45019);
        ((intptr_t*)_2)[4] = _l_ext_45019;
        _23613 = MAKE_SEQ(_1);
        _23612 = NOVALUE;
        // SubProg setup_build pc: 310 op: SPRINTF (53)
        _23614 = EPrintf(-9999999, _23611, _23613);
        DeRefDS(_23613);
        _23613 = NOVALUE;
        // SubProg setup_build pc: 314 op: CONCAT (15)
        if (IS_SEQUENCE(_eudir_45062) && IS_ATOM(_23614)) {
        }
        else if (IS_ATOM(_eudir_45062) && IS_SEQUENCE(_23614)) {
            Ref(_eudir_45062);
            Prepend(&_57user_library_42100, _23614, _eudir_45062);
        }
        else {
            Concat((object_ptr)&_57user_library_42100, _eudir_45062, _23614);
        }
        DeRefDS(_23614);
        _23614 = NOVALUE;
        // SubProg setup_build pc: 318 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 320 op: STARTLINE (58)

        /** buildsys.e:421				if TUNIX or compiler_type = COMPILER_GCC then*/
        // SubProg setup_build pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 324 op: SC1_OR_IF (147)
        if (_39TUNIX_19966 != 0) {
            goto LE; // [324] 339
        }
        // SubProg setup_build pc: 328 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 330 op: EQUALS (3)
        _23617 = (0 == 1);
        // SubProg setup_build pc: 334 op: NOP1 (159)
        // SubProg setup_build pc: 335 op: IF (20)
        if (_23617 == 0)
        {
            DeRef(_23617);
            _23617 = NOVALUE;
            goto LF; // [335] 430
        }
        else{
            DeRef(_23617);
            _23617 = NOVALUE;
        }
        // SubProg setup_build pc: 338 op: NOP1 (159)
LE: // addr: 339 pc: 338 sub: 45008 op: 159
        // SubProg setup_build pc: 339 op: STARTLINE (58)

        /** buildsys.e:422					ifdef UNIX then*/
        // SubProg setup_build pc: 341 op: STARTLINE (58)

        /** buildsys.e:423						sequence locations = { "/usr/local/lib/%s.a", "/usr/lib/%s.a"}*/
        // SubProg setup_build pc: 343 op: RIGHT_BRACE_2 (85)
        RefDS(_23619);
        RefDS(_23618);
        DeRef(_locations_45087);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23618;
        ((intptr_t *)_2)[2] = _23619;
        _locations_45087 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 347 op: STARTLINE (58)

        /** buildsys.e:424						if match( "/share/euphoria", eudir ) then*/
        // SubProg setup_build pc: 349 op: MATCH_FROM (177)
        _23622 = e_match_from(_23621, _eudir_45062, 1);
        // SubProg setup_build pc: 354 op: IF (20)
        if (_23622 == 0)
        {
            _23622 = NOVALUE;
            goto L10; // [354] 429
        }
        else{
            _23622 = NOVALUE;
        }
        // SubProg setup_build pc: 357 op: STARTLINE (58)

        /** buildsys.e:426							for i = 1 to length(locations) do*/
        // SubProg setup_build pc: 359 op: LENGTH (42)
        // Known sequence length:
        _23623 = 2;
        // SubProg setup_build pc: 362 op: FOR_I (125)
        {
            object _i_45095;
            _i_45095 = 1;
L11: // addr: 369 pc: 362 sub: 45008 op: 125
            if (_i_45095 > 2){
                goto L12; // [362] 428
            }
            // SubProg setup_build pc: 369 op: STARTLINE (58)

            /** buildsys.e:427								if file_exists( sprintf(locations[i],{l_names[tk]}) ) then*/
            // SubProg setup_build pc: 371 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_locations_45087);
            _23624 = (object)*(((s1_ptr)_2)->base + _i_45095);
            // SubProg setup_build pc: 375 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_l_names_45018);
            _23625 = (object)*(((s1_ptr)_2)->base + _tk_45074);
            // SubProg setup_build pc: 379 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23625);
            ((intptr_t*)_2)[1] = _23625;
            _23626 = MAKE_SEQ(_1);
            _23625 = NOVALUE;
            // SubProg setup_build pc: 383 op: SPRINTF (53)
            _23627 = EPrintf(-9999999, _23624, _23626);
            _23624 = NOVALUE;
            DeRefDS(_23626);
            _23626 = NOVALUE;
            // SubProg setup_build pc: 387 op: PROC (27)
            _23628 = _18file_exists(_23627);
            _23627 = NOVALUE;
            // SubProg setup_build pc: 391 op: IF (20)
            if (_23628 == 0) {
                DeRef(_23628);
                _23628 = NOVALUE;
                goto L13; // [391] 421
            }
            else {
                if (!IS_ATOM_INT(_23628) && DBL_PTR(_23628)->dbl == 0.0){
                    DeRef(_23628);
                    _23628 = NOVALUE;
                    goto L13; // [391] 421
                }
                DeRef(_23628);
                _23628 = NOVALUE;
            }
            DeRef(_23628);
            _23628 = NOVALUE;
            // SubProg setup_build pc: 394 op: STARTLINE (58)

            /** buildsys.e:428									user_library = sprintf(locations[i],{l_names[tk]})*/
            // SubProg setup_build pc: 396 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_locations_45087);
            _23629 = (object)*(((s1_ptr)_2)->base + _i_45095);
            // SubProg setup_build pc: 400 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_l_names_45018);
            _23630 = (object)*(((s1_ptr)_2)->base + _tk_45074);
            // SubProg setup_build pc: 404 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23630);
            ((intptr_t*)_2)[1] = _23630;
            _23631 = MAKE_SEQ(_1);
            _23630 = NOVALUE;
            // SubProg setup_build pc: 408 op: SPRINTF (53)
            DeRef(_57user_library_42100);
            _57user_library_42100 = EPrintf(-9999999, _23629, _23631);
            _23629 = NOVALUE;
            DeRefDS(_23631);
            _23631 = NOVALUE;
            // SubProg setup_build pc: 412 op: SEQUENCE_CHECK (97)
            // SubProg setup_build pc: 414 op: STARTLINE (58)

            /** buildsys.e:429									exit "translation kind"*/
            // SubProg setup_build pc: 416 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var locations_45087
            DeRefDS(_locations_45087);
            _locations_45087 = NOVALUE;
            // SubProg setup_build pc: 418 op: EXIT (61)
            goto LD; // [418] 455
            // SubProg setup_build pc: 420 op: NOP1 (159)
L13: // addr: 421 pc: 420 sub: 45008 op: 159
            // SubProg setup_build pc: 421 op: STARTLINE (58)

            /** buildsys.e:431							end for*/
            // SubProg setup_build pc: 423 op: ENDFOR_INT_UP1 (54)
            _i_45095 = _i_45095 + 1;
            goto L11; // [423] 369
L12: // addr: 428 pc: 423 sub: 45008 op: 54
            ;
        }
        // SubProg setup_build pc: 428 op: NOP1 (159)
L10: // addr: 429 pc: 428 sub: 45008 op: 159
        // SubProg setup_build pc: 429 op: NOP1 (159)
LF: // addr: 430 pc: 429 sub: 45008 op: 159
        // SubProg setup_build pc: 430 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var locations_45087
        DeRef(_locations_45087);
        _locations_45087 = NOVALUE;
        // SubProg setup_build pc: 432 op: STARTLINE (58)

        /** buildsys.e:436				if file_exists(user_library) then*/
        // SubProg setup_build pc: 434 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 436 op: PROC (27)
        RefDS(_57user_library_42100);
        _23633 = _18file_exists(_57user_library_42100);
        // SubProg setup_build pc: 440 op: IF (20)
        if (_23633 == 0) {
            DeRef(_23633);
            _23633 = NOVALUE;
            goto L14; // [440] 448
        }
        else {
            if (!IS_ATOM_INT(_23633) && DBL_PTR(_23633)->dbl == 0.0){
                DeRef(_23633);
                _23633 = NOVALUE;
                goto L14; // [440] 448
            }
            DeRef(_23633);
            _23633 = NOVALUE;
        }
        DeRef(_23633);
        _23633 = NOVALUE;
        // SubProg setup_build pc: 443 op: STARTLINE (58)

        /** buildsys.e:437					exit "translation kind"*/
        // SubProg setup_build pc: 445 op: EXIT (61)
        goto LD; // [445] 455
        // SubProg setup_build pc: 447 op: NOP1 (159)
L14: // addr: 448 pc: 447 sub: 45008 op: 159
        // SubProg setup_build pc: 448 op: STARTLINE (58)

        /** buildsys.e:439			end for -- tk*/
        // SubProg setup_build pc: 450 op: ENDFOR_INT_UP1 (54)
        _tk_45074 = _tk_45074 + 1;
        goto LC; // [450] 293
LD: // addr: 455 pc: 450 sub: 45008 op: 54
        ;
    }
    // SubProg setup_build pc: 455 op: NOP1 (159)
L3: // addr: 456 pc: 455 sub: 45008 op: 159
    // SubProg setup_build pc: 456 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var eudir_45062
    DeRef(_eudir_45062);
    _eudir_45062 = NOVALUE;
    // SubProg setup_build pc: 458 op: STARTLINE (58)

    /** buildsys.e:441		user_library = adjust_for_build_file(user_library)*/
    // SubProg setup_build pc: 460 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 462 op: PROC (27)
    RefDS(_57user_library_42100);
    _0 = _55adjust_for_build_file(_57user_library_42100);
    DeRefDS(_57user_library_42100);
    _57user_library_42100 = _0;
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
    if (_57dll_option_42088 == 0)
    {
        goto L15; // [556] 567
    }
    else{
    }
    // SubProg setup_build pc: 559 op: STARTLINE (58)

    /** buildsys.e:461				exe_ext = ".so"*/
    // SubProg setup_build pc: 561 op: ASSIGN (18)
    RefDS(_23643);
    DeRefi(_exe_ext_45015);
    _exe_ext_45015 = _23643;
    // SubProg setup_build pc: 564 op: SEQUENCE_CHECK (97)
    // SubProg setup_build pc: 566 op: NOP1 (159)
L15: // addr: 567 pc: 566 sub: 45008 op: 159
    // SubProg setup_build pc: 567 op: NOP1 (159)
    // SubProg setup_build pc: 568 op: STARTLINE (58)

    /** buildsys.e:465		object compile_dir = get_eucompiledir()*/
    // SubProg setup_build pc: 570 op: PROC (27)
    _0 = _compile_dir_45139;
    _compile_dir_45139 = _57get_eucompiledir();
    DeRef(_0);
    // SubProg setup_build pc: 573 op: STARTLINE (58)

    /** buildsys.e:466		if not file_exists(compile_dir) then*/
    // SubProg setup_build pc: 575 op: PROC (27)
    Ref(_compile_dir_45139);
    _23645 = _18file_exists(_compile_dir_45139);
    // SubProg setup_build pc: 579 op: NOT_IFW (108)
    if (IS_ATOM_INT(_23645)) {
        if (_23645 != 0){
            DeRef(_23645);
            _23645 = NOVALUE;
            goto L16; // [579] 600
        }
    }
    else {
        if (DBL_PTR(_23645)->dbl != 0.0){
            DeRef(_23645);
            _23645 = NOVALUE;
            goto L16; // [579] 600
        }
    }
    DeRef(_23645);
    _23645 = NOVALUE;
    // SubProg setup_build pc: 582 op: STARTLINE (58)

    /** buildsys.e:467			printf(2,"Couldn't get include directory '%s'",{get_eucompiledir()})*/
    // SubProg setup_build pc: 584 op: PROC (27)
    _23648 = _57get_eucompiledir();
    // SubProg setup_build pc: 587 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23648;
    _23649 = MAKE_SEQ(_1);
    _23648 = NOVALUE;
    // SubProg setup_build pc: 591 op: PRINTF (38)
    EPrintf(2, _23647, _23649);
    DeRefDS(_23649);
    _23649 = NOVALUE;
    // SubProg setup_build pc: 595 op: STARTLINE (58)

    /** buildsys.e:468			abort(1)*/
    // SubProg setup_build pc: 597 op: ABORT (126)
    UserCleanup(1);
    // SubProg setup_build pc: 599 op: NOP1 (159)
L16: // addr: 600 pc: 599 sub: 45008 op: 159
    // SubProg setup_build pc: 600 op: STARTLINE (58)

    /** buildsys.e:471		integer bits = 32*/
    // SubProg setup_build pc: 602 op: ASSIGN_I (113)
    _bits_45150 = 32;
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
        Concat((object_ptr)&_c_exe_45010, _55compiler_prefix_44896, _23652);
        // SubProg setup_build pc: 639 op: STARTLINE (58)

        /** buildsys.e:479				l_exe = compiler_prefix & "gcc"*/
        // SubProg setup_build pc: 641 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 643 op: CONCAT (15)
        Concat((object_ptr)&_l_exe_45012, _55compiler_prefix_44896, _23652);
        // SubProg setup_build pc: 647 op: STARTLINE (58)

        /** buildsys.e:480				obj_ext = "o"*/
        // SubProg setup_build pc: 649 op: ASSIGN (18)
        RefDS(_23655);
        DeRefi(_obj_ext_45014);
        _obj_ext_45014 = _23655;
        // SubProg setup_build pc: 652 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 654 op: STARTLINE (58)

        /** buildsys.e:482				sequence m_flag = ""*/
        // SubProg setup_build pc: 656 op: ASSIGN (18)
        RefDS(_21936);
        DeRefi(_m_flag_45160);
        _m_flag_45160 = _21936;
        // SubProg setup_build pc: 659 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 661 op: STARTLINE (58)

        /** buildsys.e:483				if not TARM then*/
        // SubProg setup_build pc: 663 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 665 op: NOT_IFW (108)
        // SubProg setup_build pc: 668 op: STARTLINE (58)

        /** buildsys.e:485					m_flag = sprintf( "-m%d", bits )*/
        // SubProg setup_build pc: 670 op: SPRINTF (53)
        DeRefDSi(_m_flag_45160);
        _m_flag_45160 = EPrintf(-9999999, _23657, _bits_45150);
        // SubProg setup_build pc: 674 op: NOP1 (159)
        // SubProg setup_build pc: 675 op: STARTLINE (58)

        /** buildsys.e:488				if debug_option then*/
        // SubProg setup_build pc: 677 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 679 op: IF (20)
        if (_57debug_option_42098 == 0)
        {
            goto L17; // [679] 691
        }
        else{
        }
        // SubProg setup_build pc: 682 op: STARTLINE (58)

        /** buildsys.e:489					c_flags &= " -g3"*/
        // SubProg setup_build pc: 684 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45011, _c_flags_45011, _23659);
        // SubProg setup_build pc: 688 op: ELSE (23)
        goto L18; // [688] 698
        // SubProg setup_build pc: 690 op: NOP1 (159)
L17: // addr: 691 pc: 690 sub: 45008 op: 159
        // SubProg setup_build pc: 691 op: STARTLINE (58)

        /** buildsys.e:491					c_flags &= " -fomit-frame-pointer"*/
        // SubProg setup_build pc: 693 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45011, _c_flags_45011, _23661);
        // SubProg setup_build pc: 697 op: NOP1 (159)
L18: // addr: 698 pc: 697 sub: 45008 op: 159
        // SubProg setup_build pc: 698 op: STARTLINE (58)

        /** buildsys.e:494				if dll_option and not TWINDOWS then*/
        // SubProg setup_build pc: 700 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 702 op: SC1_AND_IF (146)
        if (_57dll_option_42088 == 0) {
            goto L19; // [702] 722
        }
        // SubProg setup_build pc: 706 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 708 op: NOT (7)
        _23664 = (0 == 0);
        // SubProg setup_build pc: 711 op: NOP1 (159)
        // SubProg setup_build pc: 712 op: IF (20)
        if (_23664 == 0)
        {
            DeRef(_23664);
            _23664 = NOVALUE;
            goto L19; // [712] 722
        }
        else{
            DeRef(_23664);
            _23664 = NOVALUE;
        }
        // SubProg setup_build pc: 715 op: STARTLINE (58)

        /** buildsys.e:495					c_flags &= " -fPIC"*/
        // SubProg setup_build pc: 717 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45011, _c_flags_45011, _23665);
        // SubProg setup_build pc: 721 op: NOP1 (159)
L19: // addr: 722 pc: 721 sub: 45008 op: 159
        // SubProg setup_build pc: 722 op: STARTLINE (58)

        /** buildsys.e:498				c_flags &= sprintf(" -c -w -fsigned-char -O2 %s -I%s -ffast-math",*/
        // SubProg setup_build pc: 724 op: PROC (27)
        _23668 = _57get_eucompiledir();
        // SubProg setup_build pc: 727 op: PROC (27)
        _23669 = _55adjust_for_build_file(_23668);
        _23668 = NOVALUE;
        // SubProg setup_build pc: 731 op: RIGHT_BRACE_2 (85)
        RefDS(_m_flag_45160);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _m_flag_45160;
        ((intptr_t *)_2)[2] = _23669;
        _23670 = MAKE_SEQ(_1);
        _23669 = NOVALUE;
        // SubProg setup_build pc: 735 op: SPRINTF (53)
        _23671 = EPrintf(-9999999, _23667, _23670);
        DeRefDS(_23670);
        _23670 = NOVALUE;
        // SubProg setup_build pc: 739 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45011, _c_flags_45011, _23671);
        DeRefDS(_23671);
        _23671 = NOVALUE;
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
        Concat((object_ptr)&_c_flags_45011, _c_flags_45011, _23674);
        // SubProg setup_build pc: 763 op: NOP1 (159)
L1A: // addr: 764 pc: 763 sub: 45008 op: 159
        // SubProg setup_build pc: 764 op: STARTLINE (58)

        /** buildsys.e:507				if build_system_type != BUILD_DIRECT then*/
        // SubProg setup_build pc: 766 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 768 op: NOTEQ_IFW_I (122)
        // SubProg setup_build pc: 785 op: STARTLINE (58)

        /** buildsys.e:510					l_flags = sprintf( " %s %s",*/
        // SubProg setup_build pc: 787 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 789 op: PROC (27)
        RefDS(_57user_library_42100);
        _23681 = _55adjust_for_command_line_passing(_57user_library_42100);
        // SubProg setup_build pc: 793 op: RIGHT_BRACE_2 (85)
        RefDS(_m_flag_45160);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23681;
        ((intptr_t *)_2)[2] = _m_flag_45160;
        _23682 = MAKE_SEQ(_1);
        _23681 = NOVALUE;
        // SubProg setup_build pc: 797 op: SPRINTF (53)
        DeRefi(_l_flags_45013);
        _l_flags_45013 = EPrintf(-9999999, _23680, _23682);
        DeRefDS(_23682);
        _23682 = NOVALUE;
        // SubProg setup_build pc: 801 op: NOP1 (159)
        // SubProg setup_build pc: 802 op: STARTLINE (58)

        /** buildsys.e:514				if dll_option then*/
        // SubProg setup_build pc: 804 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 806 op: IF (20)
        if (_57dll_option_42088 == 0)
        {
            goto L1B; // [806] 816
        }
        else{
        }
        // SubProg setup_build pc: 809 op: STARTLINE (58)

        /** buildsys.e:515					l_flags &= " -shared "*/
        // SubProg setup_build pc: 811 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _l_flags_45013, _23684);
        // SubProg setup_build pc: 815 op: NOP1 (159)
L1B: // addr: 816 pc: 815 sub: 45008 op: 159
        // SubProg setup_build pc: 816 op: STARTLINE (58)

        /** buildsys.e:518				if TLINUX then*/
        // SubProg setup_build pc: 818 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 820 op: IF (20)
        if (_39TLINUX_19964 == 0)
        {
            goto L1C; // [820] 832
        }
        else{
        }
        // SubProg setup_build pc: 823 op: STARTLINE (58)

        /** buildsys.e:519					l_flags &= " -ldl -lm -lpthread"*/
        // SubProg setup_build pc: 825 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _l_flags_45013, _23686);
        // SubProg setup_build pc: 829 op: ELSE (23)
        goto L1D; // [829] 901
        // SubProg setup_build pc: 831 op: NOP1 (159)
L1C: // addr: 832 pc: 831 sub: 45008 op: 159
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
L1D: // addr: 901 pc: 900 sub: 45008 op: 159
        // SubProg setup_build pc: 901 op: STARTLINE (58)

        /** buildsys.e:537				rc_comp = compiler_prefix & "windres -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" [1] -O coff -o [2]"*/
        // SubProg setup_build pc: 903 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 905 op: PROC (27)
        _23697 = _18current_dir();
        // SubProg setup_build pc: 908 op: PROC (27)
        _23698 = _55adjust_for_build_file(_23697);
        _23697 = NOVALUE;
        // SubProg setup_build pc: 912 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _23699;
            concat_list[1] = _23698;
            concat_list[2] = _23696;
            concat_list[3] = _55compiler_prefix_44896;
            Concat_N((object_ptr)&_rc_comp_45017, concat_list, 4);
        }
        DeRef(_23698);
        _23698 = NOVALUE;
        // SubProg setup_build pc: 919 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var m_flag_45160
        DeRefi(_m_flag_45160);
        _m_flag_45160 = NOVALUE;
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
        Concat((object_ptr)&_c_exe_45010, _55compiler_prefix_44896, _23701);
        // SubProg setup_build pc: 935 op: STARTLINE (58)

        /** buildsys.e:541				l_exe = compiler_prefix & "wlink"*/
        // SubProg setup_build pc: 937 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 939 op: CONCAT (15)
        Concat((object_ptr)&_l_exe_45012, _55compiler_prefix_44896, _23703);
        // SubProg setup_build pc: 943 op: STARTLINE (58)

        /** buildsys.e:542				obj_ext = "obj"*/
        // SubProg setup_build pc: 945 op: ASSIGN (18)
        RefDS(_23705);
        DeRefi(_obj_ext_45014);
        _obj_ext_45014 = _23705;
        // SubProg setup_build pc: 948 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 950 op: STARTLINE (58)

        /** buildsys.e:544				if debug_option then*/
        // SubProg setup_build pc: 952 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 954 op: IF (20)
        if (_57debug_option_42098 == 0)
        {
            goto L1F; // [954] 971
        }
        else{
        }
        // SubProg setup_build pc: 957 op: STARTLINE (58)

        /** buildsys.e:545					c_flags = " /d3"*/
        // SubProg setup_build pc: 959 op: ASSIGN (18)
        RefDS(_23706);
        DeRef(_c_flags_45011);
        _c_flags_45011 = _23706;
        // SubProg setup_build pc: 962 op: SEQUENCE_CHECK (97)
        // SubProg setup_build pc: 964 op: STARTLINE (58)

        /** buildsys.e:546					l_flags_begin &= " DEBUG ALL "*/
        // SubProg setup_build pc: 966 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_begin_45016, _l_flags_begin_45016, _23707);
        // SubProg setup_build pc: 970 op: NOP1 (159)
L1F: // addr: 971 pc: 970 sub: 45008 op: 159
        // SubProg setup_build pc: 971 op: STARTLINE (58)

        /** buildsys.e:549				l_flags &= sprintf(" OPTION STACK=%d ", { total_stack_size })*/
        // SubProg setup_build pc: 973 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 975 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _57total_stack_size_42103;
        _23710 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 979 op: SPRINTF (53)
        _23711 = EPrintf(-9999999, _23709, _23710);
        DeRefDS(_23710);
        _23710 = NOVALUE;
        // SubProg setup_build pc: 983 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _l_flags_45013, _23711);
        DeRefDS(_23711);
        _23711 = NOVALUE;
        // SubProg setup_build pc: 987 op: STARTLINE (58)

        /** buildsys.e:550				l_flags &= sprintf(" COMMIT STACK=%d ", { total_stack_size })*/
        // SubProg setup_build pc: 989 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 991 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _57total_stack_size_42103;
        _23714 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 995 op: SPRINTF (53)
        _23715 = EPrintf(-9999999, _23713, _23714);
        DeRefDS(_23714);
        _23714 = NOVALUE;
        // SubProg setup_build pc: 999 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _l_flags_45013, _23715);
        DeRefDS(_23715);
        _23715 = NOVALUE;
        // SubProg setup_build pc: 1003 op: STARTLINE (58)

        /** buildsys.e:551				l_flags &= " OPTION QUIET OPTION ELIMINATE OPTION CASEEXACT"*/
        // SubProg setup_build pc: 1005 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _l_flags_45013, _23717);
        // SubProg setup_build pc: 1009 op: STARTLINE (58)

        /** buildsys.e:553				if dll_option then*/
        // SubProg setup_build pc: 1011 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1013 op: IF (20)
        if (_57dll_option_42088 == 0)
        {
            goto L20; // [1013] 1039
        }
        else{
        }
        // SubProg setup_build pc: 1016 op: STARTLINE (58)

        /** buildsys.e:554					c_flags &= " /bd /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir) */
        // SubProg setup_build pc: 1018 op: PROC (27)
        Ref(_compile_dir_45139);
        _23720 = _55adjust_for_build_file(_compile_dir_45139);
        // SubProg setup_build pc: 1022 op: CONCAT (15)
        if (IS_SEQUENCE(_23719) && IS_ATOM(_23720)) {
            Ref(_23720);
            Append(&_23721, _23719, _23720);
        }
        else if (IS_ATOM(_23719) && IS_SEQUENCE(_23720)) {
        }
        else {
            Concat((object_ptr)&_23721, _23719, _23720);
        }
        DeRef(_23720);
        _23720 = NOVALUE;
        // SubProg setup_build pc: 1026 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45011, _c_flags_45011, _23721);
        DeRefDS(_23721);
        _23721 = NOVALUE;
        // SubProg setup_build pc: 1030 op: STARTLINE (58)

        /** buildsys.e:555					l_flags &= " SYSTEM NT_DLL initinstance terminstance"*/
        // SubProg setup_build pc: 1032 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _l_flags_45013, _23723);
        // SubProg setup_build pc: 1036 op: ELSE (23)
        goto L21; // [1036] 1077
        // SubProg setup_build pc: 1038 op: NOP1 (159)
L20: // addr: 1039 pc: 1038 sub: 45008 op: 159
        // SubProg setup_build pc: 1039 op: STARTLINE (58)

        /** buildsys.e:557					c_flags &= " /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir)*/
        // SubProg setup_build pc: 1041 op: PROC (27)
        Ref(_compile_dir_45139);
        _23726 = _55adjust_for_build_file(_compile_dir_45139);
        // SubProg setup_build pc: 1045 op: CONCAT (15)
        if (IS_SEQUENCE(_23725) && IS_ATOM(_23726)) {
            Ref(_23726);
            Append(&_23727, _23725, _23726);
        }
        else if (IS_ATOM(_23725) && IS_SEQUENCE(_23726)) {
        }
        else {
            Concat((object_ptr)&_23727, _23725, _23726);
        }
        DeRef(_23726);
        _23726 = NOVALUE;
        // SubProg setup_build pc: 1049 op: CONCAT (15)
        Concat((object_ptr)&_c_flags_45011, _c_flags_45011, _23727);
        DeRefDS(_23727);
        _23727 = NOVALUE;
        // SubProg setup_build pc: 1053 op: STARTLINE (58)

        /** buildsys.e:558					if con_option then*/
        // SubProg setup_build pc: 1055 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1057 op: IF (20)
        if (_57con_option_42090 == 0)
        {
            goto L22; // [1057] 1069
        }
        else{
        }
        // SubProg setup_build pc: 1060 op: STARTLINE (58)

        /** buildsys.e:560						l_flags = " SYSTEM NT" & l_flags*/
        // SubProg setup_build pc: 1062 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _23729, _l_flags_45013);
        // SubProg setup_build pc: 1066 op: ELSE (23)
        goto L23; // [1066] 1076
        // SubProg setup_build pc: 1068 op: NOP1 (159)
L22: // addr: 1069 pc: 1068 sub: 45008 op: 159
        // SubProg setup_build pc: 1069 op: STARTLINE (58)

        /** buildsys.e:562						l_flags = " SYSTEM NT_WIN RUNTIME WINDOWS=4.0" & l_flags*/
        // SubProg setup_build pc: 1071 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _23731, _l_flags_45013);
        // SubProg setup_build pc: 1075 op: NOP1 (159)
L23: // addr: 1076 pc: 1075 sub: 45008 op: 159
        // SubProg setup_build pc: 1076 op: NOP1 (159)
L21: // addr: 1077 pc: 1076 sub: 45008 op: 159
        // SubProg setup_build pc: 1077 op: STARTLINE (58)

        /** buildsys.e:566				l_flags &= sprintf(" FILE %s", { (user_library) })*/
        // SubProg setup_build pc: 1079 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1081 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_57user_library_42100);
        ((intptr_t*)_2)[1] = _57user_library_42100;
        _23734 = MAKE_SEQ(_1);
        // SubProg setup_build pc: 1085 op: SPRINTF (53)
        _23735 = EPrintf(-9999999, _23733, _23734);
        DeRefDS(_23734);
        _23734 = NOVALUE;
        // SubProg setup_build pc: 1089 op: CONCAT (15)
        Concat((object_ptr)&_l_flags_45013, _l_flags_45013, _23735);
        DeRefDS(_23735);
        _23735 = NOVALUE;
        // SubProg setup_build pc: 1093 op: STARTLINE (58)

        /** buildsys.e:570				rc_comp = compiler_prefix &"wrc -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" -q -fo=[2] -ad [1] [3]"*/
        // SubProg setup_build pc: 1095 op: GLOBAL_INIT_CHECK (109)
        // SubProg setup_build pc: 1097 op: PROC (27)
        _23738 = _18current_dir();
        // SubProg setup_build pc: 1100 op: PROC (27)
        _23739 = _55adjust_for_build_file(_23738);
        _23738 = NOVALUE;
        // SubProg setup_build pc: 1104 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _23740;
            concat_list[1] = _23739;
            concat_list[2] = _23737;
            concat_list[3] = _55compiler_prefix_44896;
            Concat_N((object_ptr)&_rc_comp_45017, concat_list, 4);
        }
        DeRef(_23739);
        _23739 = NOVALUE;
        // SubProg setup_build pc: 1111 op: ELSE (23)
        goto L1E; // [1111] 1125
        // SubProg setup_build pc: 1113 op: STARTLINE (58)

        /** buildsys.e:571			case else*/
        // SubProg setup_build pc: 1115 op: CASE (186)
        default:
        // SubProg setup_build pc: 1117 op: STARTLINE (58)

        /** buildsys.e:572				CompileErr(43)*/
        // SubProg setup_build pc: 1119 op: PROC (27)
        RefDS(_21936);
        _49CompileErr(43, _21936, 0);
        // SubProg setup_build pc: 1124 op: NOPSWITCH (187)
    ;}L1E: // addr: 1125 pc: 1124 sub: 45008 op: 187
    // SubProg setup_build pc: 1125 op: STARTLINE (58)

    /** buildsys.e:575		if length(cflags) then*/
    // SubProg setup_build pc: 1127 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1129 op: LENGTH (42)
    // Known sequence length:
    _23742 = 0;
    // SubProg setup_build pc: 1132 op: IF (20)
    // SubProg setup_build pc: 1145 op: STARTLINE (58)

    /** buildsys.e:580		if length(extra_cflags) then*/
    // SubProg setup_build pc: 1147 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1149 op: LENGTH (42)
    // Known sequence length:
    _23743 = 0;
    // SubProg setup_build pc: 1152 op: IF (20)
    // SubProg setup_build pc: 1168 op: STARTLINE (58)

    /** buildsys.e:584		if length(lflags) then*/
    // SubProg setup_build pc: 1170 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1172 op: LENGTH (42)
    // Known sequence length:
    _23746 = 0;
    // SubProg setup_build pc: 1175 op: IF (20)
    // SubProg setup_build pc: 1195 op: STARTLINE (58)

    /** buildsys.e:589		if length(extra_lflags) then*/
    // SubProg setup_build pc: 1197 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1199 op: LENGTH (42)
    // Known sequence length:
    _23747 = 0;
    // SubProg setup_build pc: 1202 op: IF (20)
    // SubProg setup_build pc: 1218 op: STARTLINE (58)

    /** buildsys.e:593		return { */
    // SubProg setup_build pc: 1220 op: GLOBAL_INIT_CHECK (109)
    // SubProg setup_build pc: 1222 op: RIGHT_BRACE_N (31)
    _1 = NewS1(9);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_c_exe_45010);
    ((intptr_t*)_2)[1] = _c_exe_45010;
    RefDS(_c_flags_45011);
    ((intptr_t*)_2)[2] = _c_flags_45011;
    RefDS(_l_exe_45012);
    ((intptr_t*)_2)[3] = _l_exe_45012;
    RefDS(_l_flags_45013);
    ((intptr_t*)_2)[4] = _l_flags_45013;
    RefDS(_obj_ext_45014);
    ((intptr_t*)_2)[5] = _obj_ext_45014;
    RefDS(_exe_ext_45015);
    ((intptr_t*)_2)[6] = _exe_ext_45015;
    RefDS(_l_flags_begin_45016);
    ((intptr_t*)_2)[7] = _l_flags_begin_45016;
    RefDS(_rc_comp_45017);
    ((intptr_t*)_2)[8] = _rc_comp_45017;
    RefDS(_57user_library_42100);
    ((intptr_t*)_2)[9] = _57user_library_42100;
    _23750 = MAKE_SEQ(_1);
    // SubProg setup_build pc: 1234 op: RETURNF (28)

// Exiting block BLOCK: setup_build

// block var c_exe_45010
    DeRefDS(_c_exe_45010);

// block var c_flags_45011
    DeRefDS(_c_flags_45011);

// block var l_exe_45012
    DeRefDS(_l_exe_45012);

// block var l_flags_45013
    DeRefDSi(_l_flags_45013);

// block var obj_ext_45014
    DeRefDSi(_obj_ext_45014);

// block var exe_ext_45015
    DeRefDSi(_exe_ext_45015);

// block var l_flags_begin_45016
    DeRefDSi(_l_flags_begin_45016);

// block var rc_comp_45017
    DeRefDS(_rc_comp_45017);

// block var l_names_45018
    DeRef(_l_names_45018);

// block var l_ext_45019
    DeRefi(_l_ext_45019);

// block var t_slash_45020
    DeRefi(_t_slash_45020);

// block var compile_dir_45139
    DeRef(_compile_dir_45139);

// block var bits_45150
    DeRef(_23584);
    _23584 = NOVALUE;
    return _23750;
    // SubProg setup_build pc: 1238 op: BADRETURNF (43)
    ;
}


void _55ensure_exename(object _ext_45306)
{
    object _23757 = NOVALUE; // 45321 23757
    object _23756 = NOVALUE; // 45320 23756
    object _23755 = NOVALUE; // 45317 23755
    object _23754 = NOVALUE; // 45314 23754
// skipping _23753  name type: 0
    object _23752 = NOVALUE; // 45310 23752
    object _23751 = NOVALUE; // 45309 23751
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ensure_exename pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg ensure_exename pc: 3 op: STARTLINE (58)

    /** buildsys.e:602		if length(exe_name[D_ALTNAME]) = 0 then*/
    // SubProg ensure_exename pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 9 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _23751 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg ensure_exename pc: 13 op: LENGTH (42)
    if (IS_SEQUENCE(_23751)){
            _23752 = SEQ_PTR(_23751)->length;
    }
    else {
        _23752 = 1;
    }
    _23751 = NOVALUE;
    // SubProg ensure_exename pc: 16 op: EQUALS_IFW_I (121)
    if (_23752 != 0)
    goto L1; // [16] 67
    // SubProg ensure_exename pc: 20 op: STARTLINE (58)

    /** buildsys.e:603			exe_name[D_NAME] = current_dir() & SLASH & file0 & ext*/
    // SubProg ensure_exename pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 26 op: PROC (27)
    _23754 = _18current_dir();
    // SubProg ensure_exename pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 33 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _ext_45306;
        concat_list[1] = _57file0_44055;
        concat_list[2] = 47;
        concat_list[3] = _23754;
        Concat_N((object_ptr)&_23755, concat_list, 4);
    }
    DeRef(_23754);
    _23754 = NOVALUE;
    // SubProg ensure_exename pc: 40 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23755;
    if( _1 != _23755 ){
        DeRef(_1);
    }
    _23755 = NOVALUE;
    // SubProg ensure_exename pc: 44 op: STARTLINE (58)

    /** buildsys.e:604			exe_name[D_ALTNAME] = adjust_for_command_line_passing(exe_name[D_NAME])*/
    // SubProg ensure_exename pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg ensure_exename pc: 54 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _23756 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ensure_exename pc: 58 op: PROC (27)
    Ref(_23756);
    _23757 = _55adjust_for_command_line_passing(_23756);
    _23756 = NOVALUE;
    // SubProg ensure_exename pc: 62 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23757;
    if( _1 != _23757 ){
        DeRef(_1);
    }
    _23757 = NOVALUE;
    // SubProg ensure_exename pc: 66 op: NOP1 (159)
L1: // addr: 67 pc: 66 sub: 45304 op: 159
    // SubProg ensure_exename pc: 67 op: STARTLINE (58)

    /** buildsys.e:606	end procedure*/
    // SubProg ensure_exename pc: 69 op: RETURNP (29)

// Exiting block BLOCK: ensure_exename

// block var ext_45306
    DeRefDS(_ext_45306);
    _23751 = NOVALUE;
    return;
    // SubProg ensure_exename pc: 72 op: BADRETURNF (43)
    ;
}


void _55write_objlink_file()
{
    object _settings_45324 = NOVALUE;
    object _fh_45326 = NOVALUE;
    object _s_45374 = NOVALUE;
// skipping _23807  name type: 0
    object _23806 = NOVALUE; // 45419 23806
// skipping _23805  name type: 0
    object _23804 = NOVALUE; // 45413 23804
    object _23803 = NOVALUE; // 45411 23803
    object _23802 = NOVALUE; // 45410 23802
    object _23801 = NOVALUE; // 45409 23801
    object _23800 = NOVALUE; // 45407 23800
    object _23799 = NOVALUE; // 45405 23799
    object _23798 = NOVALUE; // 45403 23798
    object _23797 = NOVALUE; // 45401 23797
    object _23796 = NOVALUE; // 45399 23796
    object _23795 = NOVALUE; // 45397 23795
    object _23794 = NOVALUE; // 45395 23794
    object _23793 = NOVALUE; // 45393 23793
    object _23791 = NOVALUE; // 45390 23791
    object _23790 = NOVALUE; // 45387 23790
    object _23789 = NOVALUE; // 45385 23789
    object _23788 = NOVALUE; // 45383 23788
// skipping _23787  name type: 0
    object _23786 = NOVALUE; // 45377 23786
    object _23785 = NOVALUE; // 45371 23785
    object _23784 = NOVALUE; // 45370 23784
    object _23783 = NOVALUE; // 45368 23783
    object _23782 = NOVALUE; // 45367 23782
    object _23781 = NOVALUE; // 45365 23781
// skipping _23780  name type: 0
// skipping _23779  name type: 0
// skipping _23778  name type: 0
// skipping _23776  name type: 0
    object _23775 = NOVALUE; // 45355 23775
    object _23774 = NOVALUE; // 45353 23774
// skipping _23772  name type: 0
    object _23771 = NOVALUE; // 45348 23771
    object _23770 = NOVALUE; // 45347 23770
    object _23769 = NOVALUE; // 45344 23769
    object _23768 = NOVALUE; // 45340 23768
    object _23767 = NOVALUE; // 45338 23767
// skipping _23766  name type: 0
    object _23765 = NOVALUE; // 45336 23765
    object _23764 = NOVALUE; // 45335 23764
    object _23763 = NOVALUE; // 45333 23763
// skipping _23762  name type: 0
    object _23760 = NOVALUE; // 45330 23760
// skipping _23758  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_objlink_file pc: 1 op: STARTLINE (58)

    /** buildsys.e:612		sequence settings = setup_build()*/
    // SubProg write_objlink_file pc: 3 op: PROC (27)
    _0 = _settings_45324;
    _settings_45324 = _55setup_build();
    DeRef(_0);
    // SubProg write_objlink_file pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_objlink_file pc: 8 op: STARTLINE (58)

    /** buildsys.e:613		integer fh = open(output_dir & file0 & ".lnk", "wb")*/
    // SubProg write_objlink_file pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 14 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23759;
        concat_list[1] = _57file0_44055;
        concat_list[2] = _57output_dir_42102;
        Concat_N((object_ptr)&_23760, concat_list, 3);
    }
    // SubProg write_objlink_file pc: 20 op: OPEN (37)
    _fh_45326 = EOpen(_23760, _23761, 0);
    DeRefDS(_23760);
    _23760 = NOVALUE;
    // SubProg write_objlink_file pc: 25 op: STARTLINE (58)

    /** buildsys.e:615		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg write_objlink_file pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45324);
    _23763 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg write_objlink_file pc: 31 op: PROC (27)
    Ref(_23763);
    _55ensure_exename(_23763);
    _23763 = NOVALUE;
    // SubProg write_objlink_file pc: 34 op: STARTLINE (58)

    /** buildsys.e:617		if length(settings[SETUP_LFLAGS_BEGIN]) > 0 then*/
    // SubProg write_objlink_file pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45324);
    _23764 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg write_objlink_file pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_23764)){
            _23765 = SEQ_PTR(_23764)->length;
    }
    else {
        _23765 = 1;
    }
    _23764 = NOVALUE;
    // SubProg write_objlink_file pc: 43 op: GREATER_IFW_I (124)
    if (_23765 <= 0)
    goto L1; // [43] 63
    // SubProg write_objlink_file pc: 47 op: STARTLINE (58)

    /** buildsys.e:618			puts(fh, settings[SETUP_LFLAGS_BEGIN] & HOSTNL)*/
    // SubProg write_objlink_file pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45324);
    _23767 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg write_objlink_file pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 55 op: CONCAT (15)
    if (IS_SEQUENCE(_23767) && IS_ATOM(_39HOSTNL_19984)) {
    }
    else if (IS_ATOM(_23767) && IS_SEQUENCE(_39HOSTNL_19984)) {
        Ref(_23767);
        Prepend(&_23768, _39HOSTNL_19984, _23767);
    }
    else {
        Concat((object_ptr)&_23768, _23767, _39HOSTNL_19984);
        _23767 = NOVALUE;
    }
    _23767 = NOVALUE;
    // SubProg write_objlink_file pc: 59 op: PUTS (44)
    EPuts(_fh_45326, _23768); // DJP 
    DeRefDS(_23768);
    _23768 = NOVALUE;
    // SubProg write_objlink_file pc: 62 op: NOP1 (159)
L1: // addr: 63 pc: 62 sub: 45322 op: 159
    // SubProg write_objlink_file pc: 63 op: STARTLINE (58)

    /** buildsys.e:621		for i = 1 to length(generated_files) do*/
    // SubProg write_objlink_file pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42092)){
            _23769 = SEQ_PTR(_57generated_files_42092)->length;
    }
    else {
        _23769 = 1;
    }
    // SubProg write_objlink_file pc: 70 op: FOR_I (125)
    {
        object _i_45342;
        _i_45342 = 1;
L2: // addr: 77 pc: 70 sub: 45322 op: 125
        if (_i_45342 > _23769){
            goto L3; // [70] 132
        }
        // SubProg write_objlink_file pc: 77 op: STARTLINE (58)

        /** buildsys.e:622			if match(".o", generated_files[i]) then*/
        // SubProg write_objlink_file pc: 79 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 81 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23770 = (object)*(((s1_ptr)_2)->base + _i_45342);
        // SubProg write_objlink_file pc: 85 op: MATCH_FROM (177)
        _23771 = e_match_from(_23088, _23770, 1);
        _23770 = NOVALUE;
        // SubProg write_objlink_file pc: 90 op: IF (20)
        if (_23771 == 0)
        {
            _23771 = NOVALUE;
            goto L4; // [90] 125
        }
        else{
            _23771 = NOVALUE;
        }
        // SubProg write_objlink_file pc: 93 op: STARTLINE (58)

        /** buildsys.e:623				if compiler_type = COMPILER_WATCOM then*/
        // SubProg write_objlink_file pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 97 op: EQUALS_IFW_I (121)
        // SubProg write_objlink_file pc: 107 op: STARTLINE (58)

        /** buildsys.e:627				puts(fh, generated_files[i] & HOSTNL)*/
        // SubProg write_objlink_file pc: 109 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 111 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23774 = (object)*(((s1_ptr)_2)->base + _i_45342);
        // SubProg write_objlink_file pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_objlink_file pc: 117 op: CONCAT (15)
        Concat((object_ptr)&_23775, _23774, _39HOSTNL_19984);
        _23774 = NOVALUE;
        _23774 = NOVALUE;
        // SubProg write_objlink_file pc: 121 op: PUTS (44)
        EPuts(_fh_45326, _23775); // DJP 
        DeRefDS(_23775);
        _23775 = NOVALUE;
        // SubProg write_objlink_file pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 45322 op: 159
        // SubProg write_objlink_file pc: 125 op: STARTLINE (58)

        /** buildsys.e:629		end for*/
        // SubProg write_objlink_file pc: 127 op: ENDFOR_INT_UP1 (54)
        _i_45342 = _i_45342 + 1;
        goto L2; // [127] 77
L3: // addr: 132 pc: 127 sub: 45322 op: 54
        ;
    }
    // SubProg write_objlink_file pc: 132 op: STARTLINE (58)

    /** buildsys.e:631		if compiler_type = COMPILER_WATCOM then*/
    // SubProg write_objlink_file pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 136 op: EQUALS_IFW_I (121)
    // SubProg write_objlink_file pc: 165 op: STARTLINE (58)

    /** buildsys.e:635		puts(fh, trim(settings[SETUP_LFLAGS] & HOSTNL))*/
    // SubProg write_objlink_file pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45324);
    _23781 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg write_objlink_file pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 173 op: CONCAT (15)
    if (IS_SEQUENCE(_23781) && IS_ATOM(_39HOSTNL_19984)) {
    }
    else if (IS_ATOM(_23781) && IS_SEQUENCE(_39HOSTNL_19984)) {
        Ref(_23781);
        Prepend(&_23782, _39HOSTNL_19984, _23781);
    }
    else {
        Concat((object_ptr)&_23782, _23781, _39HOSTNL_19984);
        _23781 = NOVALUE;
    }
    _23781 = NOVALUE;
    // SubProg write_objlink_file pc: 177 op: PROC (27)
    RefDS(_4573);
    _23783 = _15trim(_23782, _4573, 0);
    _23782 = NOVALUE;
    // SubProg write_objlink_file pc: 183 op: PUTS (44)
    EPuts(_fh_45326, _23783); // DJP 
    DeRef(_23783);
    _23783 = NOVALUE;
    // SubProg write_objlink_file pc: 186 op: STARTLINE (58)

    /** buildsys.e:637		if compiler_type = COMPILER_WATCOM and dll_option then*/
    // SubProg write_objlink_file pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 190 op: EQUALS (3)
    _23784 = (0 == 2);
    // SubProg write_objlink_file pc: 194 op: SC1_AND_IF (146)
    if (_23784 == 0) {
        goto L5; // [194] 361
    }
    // SubProg write_objlink_file pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 200 op: NOP1 (159)
    // SubProg write_objlink_file pc: 201 op: IF (20)
    if (_57dll_option_42088 == 0)
    {
        goto L5; // [201] 361
    }
    else{
    }
    // SubProg write_objlink_file pc: 204 op: STARTLINE (58)

    /** buildsys.e:638			puts(fh, HOSTNL)*/
    // SubProg write_objlink_file pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 208 op: PUTS (44)
    EPuts(_fh_45326, _39HOSTNL_19984); // DJP 
    // SubProg write_objlink_file pc: 211 op: STARTLINE (58)

    /** buildsys.e:640			object s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg write_objlink_file pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 217 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _23786 = (object)*(((s1_ptr)_2)->base + _34TopLevelSub_15195);
    // SubProg write_objlink_file pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 223 op: RHS_SUBS_CHECK (92)
    DeRef(_s_45374);
    _2 = (object)SEQ_PTR(_23786);
    _s_45374 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45374);
    _23786 = NOVALUE;
    // SubProg write_objlink_file pc: 227 op: STARTLINE (58)

    /** buildsys.e:641			while s do*/
    // SubProg write_objlink_file pc: 229 op: NOP2 (110)
    // SubProg write_objlink_file pc: 231 op: NOPWHILE (158)
L6: // addr: 232 pc: 231 sub: 45322 op: 158
    // SubProg write_objlink_file pc: 232 op: WHILE (47)
    if (_s_45374 <= 0) {
        if (_s_45374 == 0) {
            goto L7; // [232] 360
        }
        else {
            if (!IS_ATOM_INT(_s_45374) && DBL_PTR(_s_45374)->dbl == 0.0){
                goto L7; // [232] 360
            }
        }
    }
    // SubProg write_objlink_file pc: 235 op: STARTLINE (58)

    /** buildsys.e:642				if eu:find(SymTab[s][S_TOKEN], RTN_TOKS) then*/
    // SubProg write_objlink_file pc: 237 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 239 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_s_45374)){
        _23788 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45374)->dbl));
    }
    else{
        _23788 = (object)*(((s1_ptr)_2)->base + _s_45374);
    }
    // SubProg write_objlink_file pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 245 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23788);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _23789 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _23789 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _23788 = NOVALUE;
    // SubProg write_objlink_file pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 251 op: FIND_FROM (176)
    _23790 = find_from(_23789, _36RTN_TOKS_14796, 1);
    _23789 = NOVALUE;
    // SubProg write_objlink_file pc: 256 op: IF (20)
    if (_23790 == 0)
    {
        _23790 = NOVALUE;
        goto L8; // [256] 341
    }
    else{
        _23790 = NOVALUE;
    }
    // SubProg write_objlink_file pc: 259 op: STARTLINE (58)

    /** buildsys.e:643					if is_exported( s ) then*/
    // SubProg write_objlink_file pc: 261 op: PROC (27)
    Ref(_s_45374);
    _23791 = _57is_exported(_s_45374);
    // SubProg write_objlink_file pc: 265 op: IF (20)
    if (_23791 == 0) {
        DeRef(_23791);
        _23791 = NOVALUE;
        goto L9; // [265] 340
    }
    else {
        if (!IS_ATOM_INT(_23791) && DBL_PTR(_23791)->dbl == 0.0){
            DeRef(_23791);
            _23791 = NOVALUE;
            goto L9; // [265] 340
        }
        DeRef(_23791);
        _23791 = NOVALUE;
    }
    DeRef(_23791);
    _23791 = NOVALUE;
    // SubProg write_objlink_file pc: 268 op: STARTLINE (58)

    /** buildsys.e:644						printf(fh, "EXPORT %s='__%d%s@%d'" & HOSTNL,*/
    // SubProg write_objlink_file pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 272 op: CONCAT (15)
    Concat((object_ptr)&_23793, _23792, _39HOSTNL_19984);
    // SubProg write_objlink_file pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_s_45374)){
        _23794 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45374)->dbl));
    }
    else{
        _23794 = (object)*(((s1_ptr)_2)->base + _s_45374);
    }
    // SubProg write_objlink_file pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23794);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _23795 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _23795 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _23794 = NOVALUE;
    // SubProg write_objlink_file pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 290 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_s_45374)){
        _23796 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45374)->dbl));
    }
    else{
        _23796 = (object)*(((s1_ptr)_2)->base + _s_45374);
    }
    // SubProg write_objlink_file pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 296 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23796);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _23797 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _23797 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _23796 = NOVALUE;
    // SubProg write_objlink_file pc: 300 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 302 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_s_45374)){
        _23798 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45374)->dbl));
    }
    else{
        _23798 = (object)*(((s1_ptr)_2)->base + _s_45374);
    }
    // SubProg write_objlink_file pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 308 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23798);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _23799 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _23799 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _23798 = NOVALUE;
    // SubProg write_objlink_file pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 314 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_s_45374)){
        _23800 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45374)->dbl));
    }
    else{
        _23800 = (object)*(((s1_ptr)_2)->base + _s_45374);
    }
    // SubProg write_objlink_file pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 320 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23800);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _23801 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _23801 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _23800 = NOVALUE;
    // SubProg write_objlink_file pc: 324 op: MULTIPLY (13)
    if (IS_ATOM_INT(_23801)) {
        if (_23801 == (short)_23801){
            _23802 = _23801 * 4;
        }
        else{
            _23802 = NewDouble(_23801 * (eudouble)4);
        }
    }
    else {
        _23802 = binary_op(MULTIPLY, _23801, 4);
    }
    _23801 = NOVALUE;
    // SubProg write_objlink_file pc: 328 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23795);
    ((intptr_t*)_2)[1] = _23795;
    Ref(_23797);
    ((intptr_t*)_2)[2] = _23797;
    Ref(_23799);
    ((intptr_t*)_2)[3] = _23799;
    ((intptr_t*)_2)[4] = _23802;
    _23803 = MAKE_SEQ(_1);
    _23802 = NOVALUE;
    _23799 = NOVALUE;
    _23797 = NOVALUE;
    _23795 = NOVALUE;
    // SubProg write_objlink_file pc: 335 op: PRINTF (38)
    EPrintf(_fh_45326, _23793, _23803);
    DeRefDS(_23793);
    _23793 = NOVALUE;
    DeRefDS(_23803);
    _23803 = NOVALUE;
    // SubProg write_objlink_file pc: 339 op: NOP1 (159)
L9: // addr: 340 pc: 339 sub: 45322 op: 159
    // SubProg write_objlink_file pc: 340 op: NOP1 (159)
L8: // addr: 341 pc: 340 sub: 45322 op: 159
    // SubProg write_objlink_file pc: 341 op: STARTLINE (58)

    /** buildsys.e:649				s = SymTab[s][S_NEXT]*/
    // SubProg write_objlink_file pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 345 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_s_45374)){
        _23804 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45374)->dbl));
    }
    else{
        _23804 = (object)*(((s1_ptr)_2)->base + _s_45374);
    }
    // SubProg write_objlink_file pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 351 op: RHS_SUBS_CHECK (92)
    DeRef(_s_45374);
    _2 = (object)SEQ_PTR(_23804);
    _s_45374 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45374);
    _23804 = NOVALUE;
    // SubProg write_objlink_file pc: 355 op: STARTLINE (58)

    /** buildsys.e:650			end while*/
    // SubProg write_objlink_file pc: 357 op: ENDWHILE (22)
    goto L6; // [357] 232
    // SubProg write_objlink_file pc: 359 op: NOP1 (159)
L7: // addr: 360 pc: 359 sub: 45322 op: 159
    // SubProg write_objlink_file pc: 360 op: NOP1 (159)
L5: // addr: 361 pc: 360 sub: 45322 op: 159
    // SubProg write_objlink_file pc: 361 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var s_45374
    DeRef(_s_45374);
    _s_45374 = NOVALUE;
    // SubProg write_objlink_file pc: 363 op: STARTLINE (58)

    /** buildsys.e:653		close(fh)*/
    // SubProg write_objlink_file pc: 365 op: CLOSE (86)
    EClose(_fh_45326);
    // SubProg write_objlink_file pc: 367 op: STARTLINE (58)

    /** buildsys.e:655		generated_files = append(generated_files, file0 & ".lnk")*/
    // SubProg write_objlink_file pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 371 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_objlink_file pc: 373 op: CONCAT (15)
    Concat((object_ptr)&_23806, _57file0_44055, _23759);
    // SubProg write_objlink_file pc: 377 op: APPEND (35)
    RefDS(_23806);
    Append(&_57generated_files_42092, _57generated_files_42092, _23806);
    DeRefDS(_23806);
    _23806 = NOVALUE;
    // SubProg write_objlink_file pc: 381 op: SEQUENCE_CHECK (97)
    // SubProg write_objlink_file pc: 383 op: STARTLINE (58)

    /** buildsys.e:656	end procedure*/
    // SubProg write_objlink_file pc: 385 op: RETURNP (29)

// Exiting block BLOCK: write_objlink_file

// block var settings_45324
    DeRef(_settings_45324);

// block var fh_45326
    _23764 = NOVALUE;
    DeRef(_23784);
    _23784 = NOVALUE;
    return;
    // SubProg write_objlink_file pc: 388 op: BADRETURNF (43)
    ;
}


void _55write_makefile_srcobj_list(object _fh_45423)
{
    object _file_count_45453 = NOVALUE;
    object _23838 = NOVALUE; // 45485 23838
    object _23837 = NOVALUE; // 45484 23837
    object _23836 = NOVALUE; // 45482 23836
// skipping _23835  name type: 0
    object _23834 = NOVALUE; // 45478 23834
    object _23833 = NOVALUE; // 45474 23833
    object _23832 = NOVALUE; // 45473 23832
    object _23830 = NOVALUE; // 45468 23830
    object _23829 = NOVALUE; // 45467 23829
// skipping _23828  name type: 0
    object _23827 = NOVALUE; // 45464 23827
    object _23826 = NOVALUE; // 45461 23826
    object _23825 = NOVALUE; // 45460 23825
    object _23824 = NOVALUE; // 45457 23824
    object _23823 = NOVALUE; // 45452 23823
    object _23822 = NOVALUE; // 45451 23822
    object _23820 = NOVALUE; // 45446 23820
    object _23819 = NOVALUE; // 45445 23819
    object _23818 = NOVALUE; // 45443 23818
// skipping _23816  name type: 0
// skipping _23815  name type: 0
    object _23814 = NOVALUE; // 45437 23814
    object _23813 = NOVALUE; // 45436 23813
    object _23812 = NOVALUE; // 45435 23812
    object _23811 = NOVALUE; // 45432 23811
    object _23810 = NOVALUE; // 45428 23810
    object _23809 = NOVALUE; // 45427 23809
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_srcobj_list pc: 1 op: INTEGER_CHECK (96)
    // SubProg write_makefile_srcobj_list pc: 3 op: STARTLINE (58)

    /** buildsys.e:660		printf(fh, "%s_SOURCES =", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 7 op: PROC (27)
    RefDS(_57file0_44055);
    _23809 = _15upper(_57file0_44055);
    // SubProg write_makefile_srcobj_list pc: 11 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23809;
    _23810 = MAKE_SEQ(_1);
    _23809 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 15 op: PRINTF (38)
    EPrintf(_fh_45423, _23808, _23810);
    DeRefDS(_23810);
    _23810 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 19 op: STARTLINE (58)

    /** buildsys.e:661		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42092)){
            _23811 = SEQ_PTR(_57generated_files_42092)->length;
    }
    else {
        _23811 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 26 op: FOR_I (125)
    {
        object _i_45430;
        _i_45430 = 1;
L1: // addr: 33 pc: 26 sub: 45421 op: 125
        if (_i_45430 > _23811){
            goto L2; // [26] 94
        }
        // SubProg write_makefile_srcobj_list pc: 33 op: STARTLINE (58)

        /** buildsys.e:662			if generated_files[i][$] = 'c' then*/
        // SubProg write_makefile_srcobj_list pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 37 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23812 = (object)*(((s1_ptr)_2)->base + _i_45430);
        // SubProg write_makefile_srcobj_list pc: 41 op: LENGTH (42)
        if (IS_SEQUENCE(_23812)){
                _23813 = SEQ_PTR(_23812)->length;
        }
        else {
            _23813 = 1;
        }
        // SubProg write_makefile_srcobj_list pc: 44 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23812);
        _23814 = (object)*(((s1_ptr)_2)->base + _23813);
        _23812 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 48 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _23814, 99)){
            _23814 = NOVALUE;
            goto L3; // [48] 87
        }
        _23814 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 52 op: STARTLINE (58)

        /** buildsys.e:663				if i > 1 then*/
        // SubProg write_makefile_srcobj_list pc: 54 op: GREATER_IFW_I (124)
        if (_i_45430 <= 1)
        goto L4; // [54] 71
        // SubProg write_makefile_srcobj_list pc: 58 op: STARTLINE (58)

        /** buildsys.e:664					printf(fh, " \\%s\t", { HOSTNL }  )*/
        // SubProg write_makefile_srcobj_list pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 62 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_39HOSTNL_19984);
        ((intptr_t*)_2)[1] = _39HOSTNL_19984;
        _23818 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 66 op: PRINTF (38)
        EPrintf(_fh_45423, _23817, _23818);
        DeRefDS(_23818);
        _23818 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 45421 op: 159
        // SubProg write_makefile_srcobj_list pc: 71 op: STARTLINE (58)

        /** buildsys.e:666				puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 75 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23819 = (object)*(((s1_ptr)_2)->base + _i_45430);
        // SubProg write_makefile_srcobj_list pc: 79 op: CONCAT (15)
        Concat((object_ptr)&_23820, _23328, _23819);
        _23819 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 83 op: PUTS (44)
        EPuts(_fh_45423, _23820); // DJP 
        DeRefDS(_23820);
        _23820 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 45421 op: 159
        // SubProg write_makefile_srcobj_list pc: 87 op: STARTLINE (58)

        /** buildsys.e:668		end for*/
        // SubProg write_makefile_srcobj_list pc: 89 op: ENDFOR_INT_UP1 (54)
        _i_45430 = _i_45430 + 1;
        goto L1; // [89] 33
L2: // addr: 94 pc: 89 sub: 45421 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 94 op: STARTLINE (58)

    /** buildsys.e:669		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 98 op: PUTS (44)
    EPuts(_fh_45423, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_srcobj_list pc: 101 op: STARTLINE (58)

    /** buildsys.e:671		printf(fh, "%s_OBJECTS =", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 105 op: PROC (27)
    RefDS(_57file0_44055);
    _23822 = _15upper(_57file0_44055);
    // SubProg write_makefile_srcobj_list pc: 109 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23822;
    _23823 = MAKE_SEQ(_1);
    _23822 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 113 op: PRINTF (38)
    EPrintf(_fh_45423, _23821, _23823);
    DeRefDS(_23823);
    _23823 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 117 op: STARTLINE (58)

    /** buildsys.e:672		integer file_count = 0*/
    // SubProg write_makefile_srcobj_list pc: 119 op: ASSIGN_I (113)
    _file_count_45453 = 0;
    // SubProg write_makefile_srcobj_list pc: 122 op: STARTLINE (58)

    /** buildsys.e:673		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42092)){
            _23824 = SEQ_PTR(_57generated_files_42092)->length;
    }
    else {
        _23824 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 129 op: FOR_I (125)
    {
        object _i_45455;
        _i_45455 = 1;
L5: // addr: 136 pc: 129 sub: 45421 op: 125
        if (_i_45455 > _23824){
            goto L6; // [129] 199
        }
        // SubProg write_makefile_srcobj_list pc: 136 op: STARTLINE (58)

        /** buildsys.e:674			if match(".o", generated_files[i]) then*/
        // SubProg write_makefile_srcobj_list pc: 138 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 140 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23825 = (object)*(((s1_ptr)_2)->base + _i_45455);
        // SubProg write_makefile_srcobj_list pc: 144 op: MATCH_FROM (177)
        _23826 = e_match_from(_23088, _23825, 1);
        _23825 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 149 op: IF (20)
        if (_23826 == 0)
        {
            _23826 = NOVALUE;
            goto L7; // [149] 192
        }
        else{
            _23826 = NOVALUE;
        }
        // SubProg write_makefile_srcobj_list pc: 152 op: STARTLINE (58)

        /** buildsys.e:675				if file_count then*/
        // SubProg write_makefile_srcobj_list pc: 154 op: IF (20)
        if (_file_count_45453 == 0)
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
        RefDS(_39HOSTNL_19984);
        ((intptr_t*)_2)[1] = _39HOSTNL_19984;
        _23827 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 165 op: PRINTF (38)
        EPrintf(_fh_45423, _23817, _23827);
        DeRefDS(_23827);
        _23827 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 169 op: NOP1 (159)
L8: // addr: 170 pc: 169 sub: 45421 op: 159
        // SubProg write_makefile_srcobj_list pc: 170 op: STARTLINE (58)

        /** buildsys.e:678				file_count += 1*/
        // SubProg write_makefile_srcobj_list pc: 172 op: PLUS1_I (117)
        _file_count_45453 = _file_count_45453 + 1;
        // SubProg write_makefile_srcobj_list pc: 176 op: STARTLINE (58)

        /** buildsys.e:679				puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 178 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 180 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23829 = (object)*(((s1_ptr)_2)->base + _i_45455);
        // SubProg write_makefile_srcobj_list pc: 184 op: CONCAT (15)
        Concat((object_ptr)&_23830, _23328, _23829);
        _23829 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 188 op: PUTS (44)
        EPuts(_fh_45423, _23830); // DJP 
        DeRefDS(_23830);
        _23830 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 45421 op: 159
        // SubProg write_makefile_srcobj_list pc: 192 op: STARTLINE (58)

        /** buildsys.e:681		end for*/
        // SubProg write_makefile_srcobj_list pc: 194 op: ENDFOR_INT_UP1 (54)
        _i_45455 = _i_45455 + 1;
        goto L5; // [194] 136
L6: // addr: 199 pc: 194 sub: 45421 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 199 op: STARTLINE (58)

    /** buildsys.e:682		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 203 op: PUTS (44)
    EPuts(_fh_45423, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_srcobj_list pc: 206 op: STARTLINE (58)

    /** buildsys.e:684		printf(fh, "%s_GENERATED_FILES = ", { upper(file0) })*/
    // SubProg write_makefile_srcobj_list pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 210 op: PROC (27)
    RefDS(_57file0_44055);
    _23832 = _15upper(_57file0_44055);
    // SubProg write_makefile_srcobj_list pc: 214 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23832;
    _23833 = MAKE_SEQ(_1);
    _23832 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 218 op: PRINTF (38)
    EPrintf(_fh_45423, _23831, _23833);
    DeRefDS(_23833);
    _23833 = NOVALUE;
    // SubProg write_makefile_srcobj_list pc: 222 op: STARTLINE (58)

    /** buildsys.e:685		for i = 1 to length(generated_files) do*/
    // SubProg write_makefile_srcobj_list pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 226 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42092)){
            _23834 = SEQ_PTR(_57generated_files_42092)->length;
    }
    else {
        _23834 = 1;
    }
    // SubProg write_makefile_srcobj_list pc: 229 op: FOR_I (125)
    {
        object _i_45476;
        _i_45476 = 1;
L9: // addr: 236 pc: 229 sub: 45421 op: 125
        if (_i_45476 > _23834){
            goto LA; // [229] 277
        }
        // SubProg write_makefile_srcobj_list pc: 236 op: STARTLINE (58)

        /** buildsys.e:686			if i > 1 then*/
        // SubProg write_makefile_srcobj_list pc: 238 op: GREATER_IFW_I (124)
        if (_i_45476 <= 1)
        goto LB; // [238] 255
        // SubProg write_makefile_srcobj_list pc: 242 op: STARTLINE (58)

        /** buildsys.e:687				printf(fh, " \\%s\t", { HOSTNL }  )*/
        // SubProg write_makefile_srcobj_list pc: 244 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 246 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_39HOSTNL_19984);
        ((intptr_t*)_2)[1] = _39HOSTNL_19984;
        _23836 = MAKE_SEQ(_1);
        // SubProg write_makefile_srcobj_list pc: 250 op: PRINTF (38)
        EPrintf(_fh_45423, _23817, _23836);
        DeRefDS(_23836);
        _23836 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 254 op: NOP1 (159)
LB: // addr: 255 pc: 254 sub: 45421 op: 159
        // SubProg write_makefile_srcobj_list pc: 255 op: STARTLINE (58)

        /** buildsys.e:689			puts(fh, " " & generated_files[i])*/
        // SubProg write_makefile_srcobj_list pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_makefile_srcobj_list pc: 259 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23837 = (object)*(((s1_ptr)_2)->base + _i_45476);
        // SubProg write_makefile_srcobj_list pc: 263 op: CONCAT (15)
        Concat((object_ptr)&_23838, _23328, _23837);
        _23837 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 267 op: PUTS (44)
        EPuts(_fh_45423, _23838); // DJP 
        DeRefDS(_23838);
        _23838 = NOVALUE;
        // SubProg write_makefile_srcobj_list pc: 270 op: STARTLINE (58)

        /** buildsys.e:690		end for*/
        // SubProg write_makefile_srcobj_list pc: 272 op: ENDFOR_INT_UP1 (54)
        _i_45476 = _i_45476 + 1;
        goto L9; // [272] 236
LA: // addr: 277 pc: 272 sub: 45421 op: 54
        ;
    }
    // SubProg write_makefile_srcobj_list pc: 277 op: STARTLINE (58)

    /** buildsys.e:691		puts(fh, HOSTNL)*/
    // SubProg write_makefile_srcobj_list pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_srcobj_list pc: 281 op: PUTS (44)
    EPuts(_fh_45423, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_srcobj_list pc: 284 op: STARTLINE (58)

    /** buildsys.e:692	end procedure*/
    // SubProg write_makefile_srcobj_list pc: 286 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_srcobj_list

// block var fh_45423

// block var file_count_45453
    return;
    // SubProg write_makefile_srcobj_list pc: 289 op: BADRETURNF (43)
    ;
}


object _55windows_to_mingw_path(object _s_45489)
{
    object _23840 = NOVALUE; // 45491 23840
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg windows_to_mingw_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg windows_to_mingw_path pc: 3 op: STARTLINE (58)

    /** buildsys.e:701		ifdef TEST_FOR_WIN9X_ON_MING then*/
    // SubProg windows_to_mingw_path pc: 5 op: STARTLINE (58)

    /** buildsys.e:711		return search:find_replace('\\',s,'/')*/
    // SubProg windows_to_mingw_path pc: 7 op: PROC (27)
    RefDS(_s_45489);
    _23840 = _17find_replace(92, _s_45489, 47, 0);
    // SubProg windows_to_mingw_path pc: 14 op: RETURNF (28)

// Exiting block BLOCK: windows_to_mingw_path

// block var s_45489
    DeRefDS(_s_45489);
    return _23840;
    // SubProg windows_to_mingw_path pc: 18 op: BADRETURNF (43)
    ;
}


void _55write_makefile_full()
{
    object _settings_45494 = NOVALUE;
    object _fh_45497 = NOVALUE;
    object _23967 = NOVALUE; // 45719 23967
    object _23965 = NOVALUE; // 45716 23965
    object _23963 = NOVALUE; // 45712 23963
    object _23962 = NOVALUE; // 45711 23962
    object _23961 = NOVALUE; // 45709 23961
    object _23960 = NOVALUE; // 45707 23960
    object _23959 = NOVALUE; // 45704 23959
    object _23957 = NOVALUE; // 45701 23957
    object _23956 = NOVALUE; // 45698 23956
    object _23954 = NOVALUE; // 45694 23954
    object _23953 = NOVALUE; // 45693 23953
    object _23952 = NOVALUE; // 45691 23952
    object _23951 = NOVALUE; // 45688 23951
    object _23949 = NOVALUE; // 45685 23949
    object _23948 = NOVALUE; // 45683 23948
    object _23946 = NOVALUE; // 45679 23946
    object _23945 = NOVALUE; // 45676 23945
    object _23943 = NOVALUE; // 45672 23943
    object _23942 = NOVALUE; // 45671 23942
    object _23941 = NOVALUE; // 45670 23941
    object _23940 = NOVALUE; // 45668 23940
    object _23939 = NOVALUE; // 45667 23939
    object _23938 = NOVALUE; // 45664 23938
    object _23937 = NOVALUE; // 45661 23937
    object _23936 = NOVALUE; // 45659 23936
    object _23934 = NOVALUE; // 45656 23934
    object _23933 = NOVALUE; // 45655 23933
    object _23932 = NOVALUE; // 45653 23932
    object _23931 = NOVALUE; // 45651 23931
    object _23930 = NOVALUE; // 45649 23930
    object _23929 = NOVALUE; // 45647 23929
    object _23928 = NOVALUE; // 45646 23928
    object _23927 = NOVALUE; // 45643 23927
    object _23926 = NOVALUE; // 45642 23926
    object _23925 = NOVALUE; // 45640 23925
    object _23924 = NOVALUE; // 45637 23924
    object _23923 = NOVALUE; // 45636 23923
    object _23922 = NOVALUE; // 45634 23922
    object _23920 = NOVALUE; // 45631 23920
    object _23919 = NOVALUE; // 45630 23919
// skipping _23917  name type: 0
// skipping _23915  name type: 0
// skipping _23913  name type: 0
// skipping _23912  name type: 0
// skipping _23911  name type: 0
// skipping _23910  name type: 0
// skipping _23909  name type: 0
// skipping _23908  name type: 0
// skipping _23907  name type: 0
// skipping _23906  name type: 0
// skipping _23905  name type: 0
// skipping _23904  name type: 0
// skipping _23903  name type: 0
// skipping _23902  name type: 0
// skipping _23901  name type: 0
// skipping _23900  name type: 0
// skipping _23898  name type: 0
// skipping _23897  name type: 0
// skipping _23896  name type: 0
// skipping _23895  name type: 0
// skipping _23894  name type: 0
// skipping _23893  name type: 0
// skipping _23892  name type: 0
// skipping _23891  name type: 0
// skipping _23890  name type: 0
// skipping _23888  name type: 0
// skipping _23887  name type: 0
// skipping _23886  name type: 0
// skipping _23885  name type: 0
// skipping _23883  name type: 0
// skipping _23882  name type: 0
// skipping _23881  name type: 0
// skipping _23880  name type: 0
// skipping _23879  name type: 0
// skipping _23878  name type: 0
// skipping _23876  name type: 0
// skipping _23875  name type: 0
// skipping _23874  name type: 0
// skipping _23873  name type: 0
// skipping _23872  name type: 0
// skipping _23871  name type: 0
// skipping _23870  name type: 0
// skipping _23868  name type: 0
// skipping _23867  name type: 0
// skipping _23866  name type: 0
// skipping _23865  name type: 0
// skipping _23863  name type: 0
// skipping _23862  name type: 0
// skipping _23861  name type: 0
// skipping _23860  name type: 0
// skipping _23858  name type: 0
    object _23857 = NOVALUE; // 45517 23857
    object _23856 = NOVALUE; // 45516 23856
    object _23855 = NOVALUE; // 45515 23855
    object _23853 = NOVALUE; // 45512 23853
    object _23852 = NOVALUE; // 45511 23852
    object _23851 = NOVALUE; // 45510 23851
    object _23849 = NOVALUE; // 45507 23849
    object _23848 = NOVALUE; // 45506 23848
    object _23847 = NOVALUE; // 45505 23847
// skipping _23845  name type: 0
    object _23844 = NOVALUE; // 45501 23844
    object _23842 = NOVALUE; // 45496 23842
// skipping _23841  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_full pc: 1 op: STARTLINE (58)

    /** buildsys.e:718		sequence settings = setup_build()*/
    // SubProg write_makefile_full pc: 3 op: PROC (27)
    _0 = _settings_45494;
    _settings_45494 = _55setup_build();
    DeRef(_0);
    // SubProg write_makefile_full pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_makefile_full pc: 8 op: STARTLINE (58)

    /** buildsys.e:720		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg write_makefile_full pc: 10 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45494);
    _23842 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg write_makefile_full pc: 14 op: PROC (27)
    Ref(_23842);
    _55ensure_exename(_23842);
    _23842 = NOVALUE;
    // SubProg write_makefile_full pc: 17 op: STARTLINE (58)

    /** buildsys.e:722		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    // SubProg write_makefile_full pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 23 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23843;
        concat_list[1] = _57file0_44055;
        concat_list[2] = _57output_dir_42102;
        Concat_N((object_ptr)&_23844, concat_list, 3);
    }
    // SubProg write_makefile_full pc: 29 op: OPEN (37)
    _fh_45497 = EOpen(_23844, _23761, 0);
    DeRefDS(_23844);
    _23844 = NOVALUE;
    // SubProg write_makefile_full pc: 34 op: STARTLINE (58)

    /** buildsys.e:724		printf(fh, "CC     = %s" & HOSTNL, { settings[SETUP_CEXE] })*/
    // SubProg write_makefile_full pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 38 op: CONCAT (15)
    Concat((object_ptr)&_23847, _23846, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 42 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45494);
    _23848 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg write_makefile_full pc: 46 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23848);
    ((intptr_t*)_2)[1] = _23848;
    _23849 = MAKE_SEQ(_1);
    _23848 = NOVALUE;
    // SubProg write_makefile_full pc: 50 op: PRINTF (38)
    EPrintf(_fh_45497, _23847, _23849);
    DeRefDS(_23847);
    _23847 = NOVALUE;
    DeRefDS(_23849);
    _23849 = NOVALUE;
    // SubProg write_makefile_full pc: 54 op: STARTLINE (58)

    /** buildsys.e:725		printf(fh, "CFLAGS = %s" & HOSTNL, { settings[SETUP_CFLAGS] })*/
    // SubProg write_makefile_full pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 58 op: CONCAT (15)
    Concat((object_ptr)&_23851, _23850, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 62 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45494);
    _23852 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg write_makefile_full pc: 66 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23852);
    ((intptr_t*)_2)[1] = _23852;
    _23853 = MAKE_SEQ(_1);
    _23852 = NOVALUE;
    // SubProg write_makefile_full pc: 70 op: PRINTF (38)
    EPrintf(_fh_45497, _23851, _23853);
    DeRefDS(_23851);
    _23851 = NOVALUE;
    DeRefDS(_23853);
    _23853 = NOVALUE;
    // SubProg write_makefile_full pc: 74 op: STARTLINE (58)

    /** buildsys.e:726		printf(fh, "LINKER = %s" & HOSTNL, { settings[SETUP_LEXE] })*/
    // SubProg write_makefile_full pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 78 op: CONCAT (15)
    Concat((object_ptr)&_23855, _23854, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45494);
    _23856 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg write_makefile_full pc: 86 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23856);
    ((intptr_t*)_2)[1] = _23856;
    _23857 = MAKE_SEQ(_1);
    _23856 = NOVALUE;
    // SubProg write_makefile_full pc: 90 op: PRINTF (38)
    EPrintf(_fh_45497, _23855, _23857);
    DeRefDS(_23855);
    _23855 = NOVALUE;
    DeRefDS(_23857);
    _23857 = NOVALUE;
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
    _55write_makefile_srcobj_list(_fh_45497);
    // SubProg write_makefile_full pc: 135 op: STARTLINE (58)

    /** buildsys.e:735		puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 139 op: PUTS (44)
    EPuts(_fh_45497, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_full pc: 142 op: STARTLINE (58)

    /** buildsys.e:737		if compiler_type = COMPILER_WATCOM then*/
    // SubProg write_makefile_full pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 146 op: EQUALS_IFW_I (121)
    // SubProg write_makefile_full pc: 575 op: STARTLINE (58)

    /** buildsys.e:770			printf(fh, "RUNTIME_LIBRARY=%s\n", { settings[SETUP_RUNTIME_LIBRARY] } )*/
    // SubProg write_makefile_full pc: 577 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45494);
    _23919 = (object)*(((s1_ptr)_2)->base + 9);
    // SubProg write_makefile_full pc: 581 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23919);
    ((intptr_t*)_2)[1] = _23919;
    _23920 = MAKE_SEQ(_1);
    _23919 = NOVALUE;
    // SubProg write_makefile_full pc: 585 op: PRINTF (38)
    EPrintf(_fh_45497, _23918, _23920);
    DeRefDS(_23920);
    _23920 = NOVALUE;
    // SubProg write_makefile_full pc: 589 op: STARTLINE (58)

    /** buildsys.e:771			printf(fh, "%s: $(%s_OBJECTS) $(RUNTIME_LIBRARY) %s " & HOSTNL, { adjust_for_build_file(exe_name[D_ALTNAME]), upper(file0), rc_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 591 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 593 op: CONCAT (15)
    Concat((object_ptr)&_23922, _23921, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 599 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 601 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _23923 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 605 op: PROC (27)
    Ref(_23923);
    _23924 = _55adjust_for_build_file(_23923);
    _23923 = NOVALUE;
    // SubProg write_makefile_full pc: 609 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 611 op: PROC (27)
    RefDS(_57file0_44055);
    _23925 = _15upper(_57file0_44055);
    // SubProg write_makefile_full pc: 615 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 617 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 619 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _23926 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 623 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23924;
    ((intptr_t*)_2)[2] = _23925;
    RefDS(_23926);
    ((intptr_t*)_2)[3] = _23926;
    _23927 = MAKE_SEQ(_1);
    _23926 = NOVALUE;
    _23925 = NOVALUE;
    _23924 = NOVALUE;
    // SubProg write_makefile_full pc: 629 op: PRINTF (38)
    EPrintf(_fh_45497, _23922, _23927);
    DeRefDS(_23922);
    _23922 = NOVALUE;
    DeRefDS(_23927);
    _23927 = NOVALUE;
    // SubProg write_makefile_full pc: 633 op: STARTLINE (58)

    /** buildsys.e:772			if length(rc_file[D_ALTNAME]) then*/
    // SubProg write_makefile_full pc: 635 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 637 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 639 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _23928 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 643 op: LENGTH (42)
    if (IS_SEQUENCE(_23928)){
            _23929 = SEQ_PTR(_23928)->length;
    }
    else {
        _23929 = 1;
    }
    _23928 = NOVALUE;
    // SubProg write_makefile_full pc: 646 op: IF (20)
    if (_23929 == 0)
    {
        _23929 = NOVALUE;
        goto L1; // [646] 690
    }
    else{
        _23929 = NOVALUE;
    }
    // SubProg write_makefile_full pc: 649 op: STARTLINE (58)

    /** buildsys.e:773				writef(fh, "\t" & settings[SETUP_RC_COMPILER] & HOSTNL, { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 651 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45494);
    _23930 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg write_makefile_full pc: 655 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 657 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _39HOSTNL_19984;
        concat_list[1] = _23930;
        concat_list[2] = _23877;
        Concat_N((object_ptr)&_23931, concat_list, 3);
    }
    _23930 = NOVALUE;
    // SubProg write_makefile_full pc: 663 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 665 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 667 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _23932 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 673 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 675 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _23933 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 679 op: RIGHT_BRACE_2 (85)
    RefDS(_23933);
    RefDS(_23932);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23932;
    ((intptr_t *)_2)[2] = _23933;
    _23934 = MAKE_SEQ(_1);
    _23933 = NOVALUE;
    _23932 = NOVALUE;
    // SubProg write_makefile_full pc: 683 op: PROC (27)
    _14writef(_fh_45497, _23931, _23934, 0);
    _23931 = NOVALUE;
    _23934 = NOVALUE;
    // SubProg write_makefile_full pc: 689 op: NOP1 (159)
L1: // addr: 690 pc: 689 sub: 45492 op: 159
    // SubProg write_makefile_full pc: 690 op: STARTLINE (58)

    /** buildsys.e:775			printf(fh, "\t$(LINKER) -o %s $(%s_OBJECTS) %s $(LFLAGS)" & HOSTNL, {*/
    // SubProg write_makefile_full pc: 692 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 694 op: CONCAT (15)
    Concat((object_ptr)&_23936, _23935, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 698 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 700 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 702 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _23937 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 706 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 708 op: PROC (27)
    RefDS(_57file0_44055);
    _23938 = _15upper(_57file0_44055);
    // SubProg write_makefile_full pc: 712 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 714 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 716 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _23939 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 720 op: LENGTH (42)
    if (IS_SEQUENCE(_23939)){
            _23940 = SEQ_PTR(_23939)->length;
    }
    else {
        _23940 = 1;
    }
    _23939 = NOVALUE;
    // SubProg write_makefile_full pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 725 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 727 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _23941 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 731 op: PROC (27)
    RefDS(_23941);
    RefDS(_21936);
    _23942 = _56iif(_23940, _23941, _21936);
    _23940 = NOVALUE;
    _23941 = NOVALUE;
    // SubProg write_makefile_full pc: 737 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23937);
    ((intptr_t*)_2)[1] = _23937;
    ((intptr_t*)_2)[2] = _23938;
    ((intptr_t*)_2)[3] = _23942;
    _23943 = MAKE_SEQ(_1);
    _23942 = NOVALUE;
    _23938 = NOVALUE;
    _23937 = NOVALUE;
    // SubProg write_makefile_full pc: 743 op: PRINTF (38)
    EPrintf(_fh_45497, _23936, _23943);
    DeRefDS(_23936);
    _23936 = NOVALUE;
    DeRefDS(_23943);
    _23943 = NOVALUE;
    // SubProg write_makefile_full pc: 747 op: STARTLINE (58)

    /** buildsys.e:777			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 749 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 751 op: PUTS (44)
    EPuts(_fh_45497, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_full pc: 754 op: STARTLINE (58)

    /** buildsys.e:778			printf(fh, ".PHONY: %s-clean %s-clean-all" & HOSTNL, { file0, file0 })*/
    // SubProg write_makefile_full pc: 756 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 758 op: CONCAT (15)
    Concat((object_ptr)&_23945, _23944, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 762 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 764 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 766 op: RIGHT_BRACE_2 (85)
    RefDS(_57file0_44055);
    RefDS(_57file0_44055);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _57file0_44055;
    ((intptr_t *)_2)[2] = _57file0_44055;
    _23946 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 770 op: PRINTF (38)
    EPrintf(_fh_45497, _23945, _23946);
    DeRefDS(_23945);
    _23945 = NOVALUE;
    DeRefDS(_23946);
    _23946 = NOVALUE;
    // SubProg write_makefile_full pc: 774 op: STARTLINE (58)

    /** buildsys.e:779			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 778 op: PUTS (44)
    EPuts(_fh_45497, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_full pc: 781 op: STARTLINE (58)

    /** buildsys.e:780			printf(fh, "%s-clean:" & HOSTNL, { file0 })*/
    // SubProg write_makefile_full pc: 783 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 785 op: CONCAT (15)
    Concat((object_ptr)&_23948, _23947, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 789 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 791 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_57file0_44055);
    ((intptr_t*)_2)[1] = _57file0_44055;
    _23949 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 795 op: PRINTF (38)
    EPrintf(_fh_45497, _23948, _23949);
    DeRefDS(_23948);
    _23948 = NOVALUE;
    DeRefDS(_23949);
    _23949 = NOVALUE;
    // SubProg write_makefile_full pc: 799 op: STARTLINE (58)

    /** buildsys.e:781			printf(fh, "\trm -rf $(%s_OBJECTS) %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 803 op: CONCAT (15)
    Concat((object_ptr)&_23951, _23950, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 807 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 809 op: PROC (27)
    RefDS(_57file0_44055);
    _23952 = _15upper(_57file0_44055);
    // SubProg write_makefile_full pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 817 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _23953 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 821 op: RIGHT_BRACE_2 (85)
    RefDS(_23953);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23952;
    ((intptr_t *)_2)[2] = _23953;
    _23954 = MAKE_SEQ(_1);
    _23953 = NOVALUE;
    _23952 = NOVALUE;
    // SubProg write_makefile_full pc: 825 op: PRINTF (38)
    EPrintf(_fh_45497, _23951, _23954);
    DeRefDS(_23951);
    _23951 = NOVALUE;
    DeRefDS(_23954);
    _23954 = NOVALUE;
    // SubProg write_makefile_full pc: 829 op: STARTLINE (58)

    /** buildsys.e:782			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 831 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 833 op: PUTS (44)
    EPuts(_fh_45497, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_full pc: 836 op: STARTLINE (58)

    /** buildsys.e:783			printf(fh, "%s-clean-all: %s-clean" & HOSTNL, { file0, file0 })*/
    // SubProg write_makefile_full pc: 838 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 840 op: CONCAT (15)
    Concat((object_ptr)&_23956, _23955, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 844 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 846 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 848 op: RIGHT_BRACE_2 (85)
    RefDS(_57file0_44055);
    RefDS(_57file0_44055);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _57file0_44055;
    ((intptr_t *)_2)[2] = _57file0_44055;
    _23957 = MAKE_SEQ(_1);
    // SubProg write_makefile_full pc: 852 op: PRINTF (38)
    EPrintf(_fh_45497, _23956, _23957);
    DeRefDS(_23956);
    _23956 = NOVALUE;
    DeRefDS(_23957);
    _23957 = NOVALUE;
    // SubProg write_makefile_full pc: 856 op: STARTLINE (58)

    /** buildsys.e:784			printf(fh, "\trm -rf $(%s_SOURCES) %s %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    // SubProg write_makefile_full pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 860 op: CONCAT (15)
    Concat((object_ptr)&_23959, _23958, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 864 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 866 op: PROC (27)
    RefDS(_57file0_44055);
    _23960 = _15upper(_57file0_44055);
    // SubProg write_makefile_full pc: 870 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 872 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 874 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _23961 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 878 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 880 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 882 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _23962 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg write_makefile_full pc: 886 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23960;
    RefDS(_23961);
    ((intptr_t*)_2)[2] = _23961;
    Ref(_23962);
    ((intptr_t*)_2)[3] = _23962;
    _23963 = MAKE_SEQ(_1);
    _23962 = NOVALUE;
    _23961 = NOVALUE;
    _23960 = NOVALUE;
    // SubProg write_makefile_full pc: 892 op: PRINTF (38)
    EPrintf(_fh_45497, _23959, _23963);
    DeRefDS(_23959);
    _23959 = NOVALUE;
    DeRefDS(_23963);
    _23963 = NOVALUE;
    // SubProg write_makefile_full pc: 896 op: STARTLINE (58)

    /** buildsys.e:785			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 898 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 900 op: PUTS (44)
    EPuts(_fh_45497, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_full pc: 903 op: STARTLINE (58)

    /** buildsys.e:786			puts(fh, "%.o: %.c" & HOSTNL)*/
    // SubProg write_makefile_full pc: 905 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 907 op: CONCAT (15)
    Concat((object_ptr)&_23965, _23964, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 911 op: PUTS (44)
    EPuts(_fh_45497, _23965); // DJP 
    DeRefDS(_23965);
    _23965 = NOVALUE;
    // SubProg write_makefile_full pc: 914 op: STARTLINE (58)

    /** buildsys.e:787			puts(fh, "\t$(CC) $(CFLAGS) $*.c -o $*.o" & HOSTNL)*/
    // SubProg write_makefile_full pc: 916 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 918 op: CONCAT (15)
    Concat((object_ptr)&_23967, _23966, _39HOSTNL_19984);
    // SubProg write_makefile_full pc: 922 op: PUTS (44)
    EPuts(_fh_45497, _23967); // DJP 
    DeRefDS(_23967);
    _23967 = NOVALUE;
    // SubProg write_makefile_full pc: 925 op: STARTLINE (58)

    /** buildsys.e:788			puts(fh, HOSTNL)*/
    // SubProg write_makefile_full pc: 927 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_full pc: 929 op: PUTS (44)
    EPuts(_fh_45497, _39HOSTNL_19984); // DJP 
    // SubProg write_makefile_full pc: 932 op: NOP1 (159)
    // SubProg write_makefile_full pc: 933 op: STARTLINE (58)

    /** buildsys.e:791		close(fh)*/
    // SubProg write_makefile_full pc: 935 op: CLOSE (86)
    EClose(_fh_45497);
    // SubProg write_makefile_full pc: 937 op: STARTLINE (58)

    /** buildsys.e:792	end procedure*/
    // SubProg write_makefile_full pc: 939 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_full

// block var settings_45494
    DeRef(_settings_45494);

// block var fh_45497
    _23928 = NOVALUE;
    _23939 = NOVALUE;
    return;
    // SubProg write_makefile_full pc: 942 op: BADRETURNF (43)
    ;
}


void _55write_makefile_partial()
{
    object _settings_45723 = NOVALUE;
    object _fh_45725 = NOVALUE;
// skipping _23970  name type: 0
    object _23969 = NOVALUE; // 45728 23969
// skipping _23968  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_makefile_partial pc: 1 op: STARTLINE (58)

    /** buildsys.e:798		sequence settings = setup_build()*/
    // SubProg write_makefile_partial pc: 3 op: PROC (27)
    _0 = _settings_45723;
    _settings_45723 = _55setup_build();
    DeRef(_0);
    // SubProg write_makefile_partial pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg write_makefile_partial pc: 8 op: STARTLINE (58)

    /** buildsys.e:799		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    // SubProg write_makefile_partial pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_partial pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_makefile_partial pc: 14 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23843;
        concat_list[1] = _57file0_44055;
        concat_list[2] = _57output_dir_42102;
        Concat_N((object_ptr)&_23969, concat_list, 3);
    }
    // SubProg write_makefile_partial pc: 20 op: OPEN (37)
    _fh_45725 = EOpen(_23969, _23761, 0);
    DeRefDS(_23969);
    _23969 = NOVALUE;
    // SubProg write_makefile_partial pc: 25 op: STARTLINE (58)

    /** buildsys.e:801		write_makefile_srcobj_list(fh)*/
    // SubProg write_makefile_partial pc: 27 op: PROC (27)
    _55write_makefile_srcobj_list(_fh_45725);
    // SubProg write_makefile_partial pc: 30 op: STARTLINE (58)

    /** buildsys.e:803		close(fh)*/
    // SubProg write_makefile_partial pc: 32 op: CLOSE (86)
    EClose(_fh_45725);
    // SubProg write_makefile_partial pc: 34 op: STARTLINE (58)

    /** buildsys.e:804	end procedure*/
    // SubProg write_makefile_partial pc: 36 op: RETURNP (29)

// Exiting block BLOCK: write_makefile_partial

// block var settings_45723
    DeRefDS(_settings_45723);

// block var fh_45725
    return;
    // SubProg write_makefile_partial pc: 39 op: BADRETURNF (43)
    ;
}


void _55build_direct(object _link_only_45732, object _the_file0_45733)
{
    object _cmd_45739 = NOVALUE;
    object _objs_45740 = NOVALUE;
    object _settings_45741 = NOVALUE;
    object _cwd_45743 = NOVALUE;
    object _status_45746 = NOVALUE;
    object _link_files_45775 = NOVALUE;
    object _pdone_45801 = NOVALUE;
    object _files_45847 = NOVALUE;
    object _31706 = NOVALUE; // 63913 31706
    object _31705 = NOVALUE; // 63912 31705
    object _31704 = NOVALUE; // 63911 31704
    object _31703 = NOVALUE; // 63910 31703
    object _31702 = NOVALUE; // 63909 31702
// skipping _31701  name type: 0
    object _31700 = NOVALUE; // 63907 31700
// skipping _24117  name type: 0
// skipping _24116  name type: 0
// skipping _24115  name type: 0
// skipping _24114  name type: 0
    object _24113 = NOVALUE; // 45998 24113
    object _24112 = NOVALUE; // 45995 24112
    object _24111 = NOVALUE; // 45994 24111
    object _24110 = NOVALUE; // 45991 24110
    object _24109 = NOVALUE; // 45988 24109
    object _24108 = NOVALUE; // 45987 24108
    object _24107 = NOVALUE; // 45982 24107
// skipping _24106  name type: 0
    object _24105 = NOVALUE; // 45975 24105
    object _24104 = NOVALUE; // 45973 24104
    object _24103 = NOVALUE; // 45972 24103
    object _24102 = NOVALUE; // 45970 24102
// skipping _24101  name type: 0
// skipping _24100  name type: 0
// skipping _24099  name type: 0
    object _24098 = NOVALUE; // 45963 24098
    object _24097 = NOVALUE; // 45962 24097
    object _24096 = NOVALUE; // 45960 24096
    object _24095 = NOVALUE; // 45958 24095
    object _24094 = NOVALUE; // 45956 24094
    object _24093 = NOVALUE; // 45955 24093
    object _24092 = NOVALUE; // 45954 24092
    object _24091 = NOVALUE; // 45953 24091
    object _24090 = NOVALUE; // 45952 24090
    object _24089 = NOVALUE; // 45951 24089
    object _24088 = NOVALUE; // 45950 24088
    object _24087 = NOVALUE; // 45949 24087
    object _24086 = NOVALUE; // 45946 24086
    object _24085 = NOVALUE; // 45944 24085
    object _24084 = NOVALUE; // 45943 24084
// skipping _24083  name type: 0
// skipping _24082  name type: 0
    object _24081 = NOVALUE; // 45937 24081
    object _24080 = NOVALUE; // 45934 24080
    object _24079 = NOVALUE; // 45933 24079
    object _24078 = NOVALUE; // 45932 24078
// skipping _24077  name type: 0
// skipping _24076  name type: 0
    object _24075 = NOVALUE; // 45922 24075
// skipping _24074  name type: 0
    object _24073 = NOVALUE; // 45918 24073
    object _24072 = NOVALUE; // 45917 24072
    object _24071 = NOVALUE; // 45916 24071
    object _24070 = NOVALUE; // 45914 24070
    object _24069 = NOVALUE; // 45913 24069
    object _24068 = NOVALUE; // 45911 24068
// skipping _24066  name type: 0
    object _24065 = NOVALUE; // 45907 24065
    object _24064 = NOVALUE; // 45905 24064
    object _24060 = NOVALUE; // 45900 24060
    object _24059 = NOVALUE; // 45898 24059
    object _24058 = NOVALUE; // 45897 24058
// skipping _24057  name type: 0
// skipping _24056  name type: 0
// skipping _24055  name type: 0
    object _24054 = NOVALUE; // 45890 24054
    object _24053 = NOVALUE; // 45889 24053
    object _24052 = NOVALUE; // 45887 24052
    object _24051 = NOVALUE; // 45885 24051
    object _24050 = NOVALUE; // 45884 24050
    object _24049 = NOVALUE; // 45883 24049
    object _24048 = NOVALUE; // 45882 24048
    object _24047 = NOVALUE; // 45881 24047
    object _24046 = NOVALUE; // 45880 24046
    object _24045 = NOVALUE; // 45879 24045
    object _24044 = NOVALUE; // 45878 24044
    object _24043 = NOVALUE; // 45875 24043
// skipping _24042  name type: 0
    object _24041 = NOVALUE; // 45869 24041
    object _24040 = NOVALUE; // 45866 24040
    object _24039 = NOVALUE; // 45865 24039
    object _24038 = NOVALUE; // 45864 24038
    object _24037 = NOVALUE; // 45863 24037
// skipping _24036  name type: 0
    object _24035 = NOVALUE; // 45859 24035
    object _24034 = NOVALUE; // 45858 24034
    object _24033 = NOVALUE; // 45857 24033
    object _24032 = NOVALUE; // 45856 24032
    object _24031 = NOVALUE; // 45854 24031
// skipping _24030  name type: 0
    object _24029 = NOVALUE; // 45850 24029
// skipping _24028  name type: 0
    object _24027 = NOVALUE; // 45844 24027
    object _24026 = NOVALUE; // 45843 24026
    object _24025 = NOVALUE; // 45841 24025
    object _24024 = NOVALUE; // 45840 24024
    object _24022 = NOVALUE; // 45836 24022
    object _24021 = NOVALUE; // 45834 24021
    object _24020 = NOVALUE; // 45833 24020
// skipping _24019  name type: 0
// skipping _24018  name type: 0
    object _24017 = NOVALUE; // 45827 24017
    object _24016 = NOVALUE; // 45824 24016
    object _24015 = NOVALUE; // 45823 24015
    object _24014 = NOVALUE; // 45819 24014
    object _24013 = NOVALUE; // 45818 24013
    object _24012 = NOVALUE; // 45815 24012
    object _24011 = NOVALUE; // 45814 24011
    object _24010 = NOVALUE; // 45813 24010
    object _24009 = NOVALUE; // 45812 24009
    object _24008 = NOVALUE; // 45810 24008
// skipping _24007  name type: 0
// skipping _24006  name type: 0
    object _24005 = NOVALUE; // 45804 24005
    object _24004 = NOVALUE; // 45803 24004
// skipping _24003  name type: 0
// skipping _24002  name type: 0
    object _24001 = NOVALUE; // 45796 24001
// skipping _24000  name type: 0
    object _23999 = NOVALUE; // 45793 23999
    object _23998 = NOVALUE; // 45792 23998
    object _23997 = NOVALUE; // 45790 23997
    object _23996 = NOVALUE; // 45789 23996
// skipping _23994  name type: 0
    object _23993 = NOVALUE; // 45786 23993
    object _23992 = NOVALUE; // 45785 23992
    object _23991 = NOVALUE; // 45784 23991
    object _23990 = NOVALUE; // 45781 23990
// skipping _23989  name type: 0
    object _23988 = NOVALUE; // 45772 23988
    object _23987 = NOVALUE; // 45771 23987
    object _23986 = NOVALUE; // 45769 23986
    object _23985 = NOVALUE; // 45768 23985
    object _23984 = NOVALUE; // 45765 23984
// skipping _23982  name type: 0
    object _23981 = NOVALUE; // 45758 23981
// skipping _23979  name type: 0
// skipping _23976  name type: 0
    object _23975 = NOVALUE; // 45747 23975
// skipping _23974  name type: 0
// skipping _23973  name type: 0
// skipping _23972  name type: 0
    object _23971 = NOVALUE; // 45735 23971
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg build_direct pc: 1 op: INTEGER_CHECK (96)
    // SubProg build_direct pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 5 op: STARTLINE (58)

    /** buildsys.e:810		if length(the_file0) then*/
    // SubProg build_direct pc: 7 op: LENGTH (42)
    // Known sequence length:
    _23971 = 0;
    // SubProg build_direct pc: 10 op: IF (20)
    // SubProg build_direct pc: 22 op: STARTLINE (58)

    /** buildsys.e:813		sequence cmd, objs = "", settings = setup_build(), cwd = current_dir()*/
    // SubProg build_direct pc: 24 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_objs_45740);
    _objs_45740 = _21936;
    // SubProg build_direct pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 29 op: PROC (27)
    _0 = _settings_45741;
    _settings_45741 = _55setup_build();
    DeRef(_0);
    // SubProg build_direct pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 34 op: PROC (27)
    _0 = _cwd_45743;
    _cwd_45743 = _18current_dir();
    DeRef(_0);
    // SubProg build_direct pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 39 op: STARTLINE (58)

    /** buildsys.e:814		integer status*/
    // SubProg build_direct pc: 41 op: STARTLINE (58)

    /** buildsys.e:816		ensure_exename(settings[SETUP_EXE_EXT])*/
    // SubProg build_direct pc: 43 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45741);
    _23975 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg build_direct pc: 47 op: PROC (27)
    Ref(_23975);
    _55ensure_exename(_23975);
    _23975 = NOVALUE;
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
        if (_34silent_15303 != 0)
        goto L1; // [72] 119
        // SubProg build_direct pc: 75 op: STARTLINE (58)

        /** buildsys.e:822						ShowMsg(1, 176, {"GCC"})*/
        // SubProg build_direct pc: 77 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23980);
        ((intptr_t*)_2)[1] = _23980;
        _23981 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 81 op: PROC (27)
        _40ShowMsg(1, 176, _23981, 1);
        _23981 = NOVALUE;
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
        if (_34silent_15303 != 0)
        goto L2; // [102] 118
        // SubProg build_direct pc: 105 op: STARTLINE (58)

        /** buildsys.e:829						ShowMsg(1, 176, {"Watcom"})*/
        // SubProg build_direct pc: 107 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23983);
        ((intptr_t*)_2)[1] = _23983;
        _23984 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 111 op: PROC (27)
        _40ShowMsg(1, 176, _23984, 1);
        _23984 = NOVALUE;
        // SubProg build_direct pc: 117 op: NOP1 (159)
L2: // addr: 118 pc: 117 sub: 45730 op: 159
        // SubProg build_direct pc: 118 op: NOPSWITCH (187)
    ;}L1: // addr: 119 pc: 118 sub: 45730 op: 187
    // SubProg build_direct pc: 119 op: NOP1 (159)
    // SubProg build_direct pc: 120 op: STARTLINE (58)

    /** buildsys.e:834		if sequence(output_dir) and length(output_dir) > 0 then*/
    // SubProg build_direct pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 124 op: IS_A_SEQUENCE (68)
    _23985 = 1;
    // SubProg build_direct pc: 127 op: SC1_AND_IF (146)
    if (_23985 == 0) {
        goto L3; // [127] 155
    }
    // SubProg build_direct pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 133 op: LENGTH (42)
    // Known sequence length:
    _23987 = 0;
    // SubProg build_direct pc: 136 op: GREATER (6)
    _23988 = (0 > 0);
    _23987 = NOVALUE;
    // SubProg build_direct pc: 140 op: NOP1 (159)
    // SubProg build_direct pc: 141 op: IF (20)
    if (_23988 == 0)
    {
        DeRef(_23988);
        _23988 = NOVALUE;
        goto L3; // [141] 155
    }
    else{
        DeRef(_23988);
        _23988 = NOVALUE;
    }
    // SubProg build_direct pc: 144 op: STARTLINE (58)

    /** buildsys.e:835			chdir(output_dir)*/
    // SubProg build_direct pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 148 op: PROC (27)
    RefDS(_57output_dir_42102);
    _31706 = _18chdir(_57output_dir_42102);
    // SubProg build_direct pc: 152 op: DEREF_TEMP (208)
    DeRef(_31706);
    _31706 = NOVALUE;
    // SubProg build_direct pc: 154 op: NOP1 (159)
L3: // addr: 155 pc: 154 sub: 45730 op: 159
    // SubProg build_direct pc: 155 op: STARTLINE (58)

    /** buildsys.e:838		sequence link_files = {}*/
    // SubProg build_direct pc: 157 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_link_files_45775);
    _link_files_45775 = _21936;
    // SubProg build_direct pc: 160 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 162 op: STARTLINE (58)

    /** buildsys.e:840		if not link_only then*/
    // SubProg build_direct pc: 164 op: NOT_IFW (108)
    if (_link_only_45732 != 0)
    goto L4; // [164] 468
    // SubProg build_direct pc: 167 op: STARTLINE (58)

    /** buildsys.e:841			for i = 1 to length(generated_files) do*/
    // SubProg build_direct pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 171 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42092)){
            _23990 = SEQ_PTR(_57generated_files_42092)->length;
    }
    else {
        _23990 = 1;
    }
    // SubProg build_direct pc: 174 op: FOR_I (125)
    {
        object _i_45779;
        _i_45779 = 1;
L5: // addr: 181 pc: 174 sub: 45730 op: 125
        if (_i_45779 > _23990){
            goto L6; // [174] 465
        }
        // SubProg build_direct pc: 181 op: STARTLINE (58)

        /** buildsys.e:842				if generated_files[i][$] = 'c' then*/
        // SubProg build_direct pc: 183 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 185 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23991 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 189 op: LENGTH (42)
        if (IS_SEQUENCE(_23991)){
                _23992 = SEQ_PTR(_23991)->length;
        }
        else {
            _23992 = 1;
        }
        // SubProg build_direct pc: 192 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23991);
        _23993 = (object)*(((s1_ptr)_2)->base + _23992);
        _23991 = NOVALUE;
        // SubProg build_direct pc: 196 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _23993, 99)){
            _23993 = NOVALUE;
            goto L7; // [196] 424
        }
        _23993 = NOVALUE;
        // SubProg build_direct pc: 200 op: STARTLINE (58)

        /** buildsys.e:843					cmd = sprintf("%s %s %s", { settings[SETUP_CEXE], settings[SETUP_CFLAGS],*/
        // SubProg build_direct pc: 202 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45741);
        _23996 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg build_direct pc: 206 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45741);
        _23997 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg build_direct pc: 210 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _23998 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 216 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_23996);
        ((intptr_t*)_2)[1] = _23996;
        Ref(_23997);
        ((intptr_t*)_2)[2] = _23997;
        RefDS(_23998);
        ((intptr_t*)_2)[3] = _23998;
        _23999 = MAKE_SEQ(_1);
        _23998 = NOVALUE;
        _23997 = NOVALUE;
        _23996 = NOVALUE;
        // SubProg build_direct pc: 222 op: SPRINTF (53)
        DeRef(_cmd_45739);
        _cmd_45739 = EPrintf(-9999999, _23995, _23999);
        DeRefDS(_23999);
        _23999 = NOVALUE;
        // SubProg build_direct pc: 226 op: STARTLINE (58)

        /** buildsys.e:846					link_files = append(link_files, generated_files[i])*/
        // SubProg build_direct pc: 228 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 230 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24001 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 234 op: APPEND (35)
        RefDS(_24001);
        Append(&_link_files_45775, _link_files_45775, _24001);
        _24001 = NOVALUE;
        // SubProg build_direct pc: 238 op: STARTLINE (58)

        /** buildsys.e:848					if not silent then*/
        // SubProg build_direct pc: 240 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 242 op: NOT_IFW (108)
        if (_34silent_15303 != 0)
        goto L8; // [242] 364
        // SubProg build_direct pc: 245 op: STARTLINE (58)

        /** buildsys.e:849						atom pdone = 100 * (i / length(generated_files))*/
        // SubProg build_direct pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 249 op: LENGTH (42)
        if (IS_SEQUENCE(_57generated_files_42092)){
                _24004 = SEQ_PTR(_57generated_files_42092)->length;
        }
        else {
            _24004 = 1;
        }
        // SubProg build_direct pc: 252 op: DIVIDE (14)
        _24005 = (_i_45779 % _24004) ? NewDouble((eudouble)_i_45779 / _24004) : (_i_45779 / _24004);
        _24004 = NOVALUE;
        // SubProg build_direct pc: 256 op: MULTIPLY (13)
        DeRef(_pdone_45801);
        if (IS_ATOM_INT(_24005)) {
            if (_24005 <= INT15 && _24005 >= -INT15){
                _pdone_45801 = 100 * _24005;
            }
            else{
                _pdone_45801 = NewDouble(100 * (eudouble)_24005);
            }
        }
        else {
            _pdone_45801 = NewDouble((eudouble)100 * DBL_PTR(_24005)->dbl);
        }
        DeRef(_24005);
        _24005 = NOVALUE;
        // SubProg build_direct pc: 260 op: STARTLINE (58)

        /** buildsys.e:850						if not verbose then*/
        // SubProg build_direct pc: 262 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 264 op: NOT_IFW (108)
        if (_34verbose_15306 != 0)
        goto L9; // [264] 350
        // SubProg build_direct pc: 267 op: STARTLINE (58)

        /** buildsys.e:853							if 0 and outdated_files[i] = 0 and force_build = 0 then*/
        // SubProg build_direct pc: 269 op: SC1_AND (141)
        if (0 == 0) {
            _24008 = 0;
            goto LA; // [269] 287
        }
        // SubProg build_direct pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 275 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57outdated_files_42093);
        _24009 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 279 op: EQUALS (3)
        if (IS_ATOM_INT(_24009)) {
            _24010 = (_24009 == 0);
        }
        else {
            _24010 = binary_op(EQUALS, _24009, 0);
        }
        _24009 = NOVALUE;
        // SubProg build_direct pc: 283 op: SC2_AND (142)
        if (IS_ATOM_INT(_24010))
        _24008 = (_24010 != 0);
        else
        _24008 = DBL_PTR(_24010)->dbl != 0.0;
        // SubProg build_direct pc: 286 op: NOP1 (159)
LA: // addr: 287 pc: 286 sub: 45730 op: 159
        // SubProg build_direct pc: 287 op: SC1_AND_IF (146)
        if (_24008 == 0) {
            goto LB; // [287] 328
        }
        // SubProg build_direct pc: 291 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 293 op: EQUALS (3)
        _24012 = (0 == 0);
        // SubProg build_direct pc: 297 op: NOP1 (159)
        // SubProg build_direct pc: 298 op: IF (20)
        if (_24012 == 0)
        {
            DeRef(_24012);
            _24012 = NOVALUE;
            goto LB; // [298] 328
        }
        else{
            DeRef(_24012);
            _24012 = NOVALUE;
        }
        // SubProg build_direct pc: 301 op: STARTLINE (58)

        /** buildsys.e:854								ShowMsg(1, 325, { pdone, generated_files[i] })*/
        // SubProg build_direct pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 305 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24013 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 309 op: RIGHT_BRACE_2 (85)
        RefDS(_24013);
        Ref(_pdone_45801);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45801;
        ((intptr_t *)_2)[2] = _24013;
        _24014 = MAKE_SEQ(_1);
        _24013 = NOVALUE;
        // SubProg build_direct pc: 313 op: PROC (27)
        _40ShowMsg(1, 325, _24014, 1);
        _24014 = NOVALUE;
        // SubProg build_direct pc: 319 op: STARTLINE (58)

        /** buildsys.e:855								continue*/
        // SubProg build_direct pc: 321 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pdone_45801
        DeRef(_pdone_45801);
        _pdone_45801 = NOVALUE;
        // SubProg build_direct pc: 323 op: ELSE (23)
        goto LC; // [323] 460
        // SubProg build_direct pc: 325 op: ELSE (23)
        goto LD; // [325] 363
        // SubProg build_direct pc: 327 op: NOP1 (159)
LB: // addr: 328 pc: 327 sub: 45730 op: 159
        // SubProg build_direct pc: 328 op: STARTLINE (58)

        /** buildsys.e:857								ShowMsg(1, 163, { pdone, generated_files[i] })*/
        // SubProg build_direct pc: 330 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 332 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24015 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 336 op: RIGHT_BRACE_2 (85)
        RefDS(_24015);
        Ref(_pdone_45801);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45801;
        ((intptr_t *)_2)[2] = _24015;
        _24016 = MAKE_SEQ(_1);
        _24015 = NOVALUE;
        // SubProg build_direct pc: 340 op: PROC (27)
        _40ShowMsg(1, 163, _24016, 1);
        _24016 = NOVALUE;
        // SubProg build_direct pc: 346 op: NOP1 (159)
        // SubProg build_direct pc: 347 op: ELSE (23)
        goto LD; // [347] 363
        // SubProg build_direct pc: 349 op: NOP1 (159)
L9: // addr: 350 pc: 349 sub: 45730 op: 159
        // SubProg build_direct pc: 350 op: STARTLINE (58)

        /** buildsys.e:860							ShowMsg(1, 163, { pdone, cmd })*/
        // SubProg build_direct pc: 352 op: RIGHT_BRACE_2 (85)
        RefDS(_cmd_45739);
        Ref(_pdone_45801);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45801;
        ((intptr_t *)_2)[2] = _cmd_45739;
        _24017 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 356 op: PROC (27)
        _40ShowMsg(1, 163, _24017, 1);
        _24017 = NOVALUE;
        // SubProg build_direct pc: 362 op: NOP1 (159)
LD: // addr: 363 pc: 362 sub: 45730 op: 159
        // SubProg build_direct pc: 363 op: NOP1 (159)
L8: // addr: 364 pc: 363 sub: 45730 op: 159
        // SubProg build_direct pc: 364 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pdone_45801
        DeRef(_pdone_45801);
        _pdone_45801 = NOVALUE;
        // SubProg build_direct pc: 366 op: STARTLINE (58)

        /** buildsys.e:865					status = system_exec(cmd, 0)*/
        // SubProg build_direct pc: 368 op: SYSTEM_EXEC (154)
        _status_45746 = system_exec_call(_cmd_45739, 0);
        // SubProg build_direct pc: 372 op: STARTLINE (58)

        /** buildsys.e:866					if status != 0 then*/
        // SubProg build_direct pc: 374 op: NOTEQ_IFW_I (122)
        if (_status_45746 == 0)
        goto LE; // [374] 458
        // SubProg build_direct pc: 378 op: STARTLINE (58)

        /** buildsys.e:867						ShowMsg(2, 164, { generated_files[i] })*/
        // SubProg build_direct pc: 380 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 382 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24020 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 386 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24020);
        ((intptr_t*)_2)[1] = _24020;
        _24021 = MAKE_SEQ(_1);
        _24020 = NOVALUE;
        // SubProg build_direct pc: 390 op: PROC (27)
        _40ShowMsg(2, 164, _24021, 1);
        _24021 = NOVALUE;
        // SubProg build_direct pc: 396 op: STARTLINE (58)

        /** buildsys.e:868						ShowMsg(2, 165, { status, cmd })*/
        // SubProg build_direct pc: 398 op: RIGHT_BRACE_2 (85)
        RefDS(_cmd_45739);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _status_45746;
        ((intptr_t *)_2)[2] = _cmd_45739;
        _24022 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 402 op: PROC (27)
        _40ShowMsg(2, 165, _24022, 1);
        _24022 = NOVALUE;
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
L7: // addr: 424 pc: 423 sub: 45730 op: 159
        // SubProg build_direct pc: 424 op: STARTLINE (58)

        /** buildsys.e:871				elsif match(".o", generated_files[i]) then*/
        // SubProg build_direct pc: 426 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 428 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24024 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 432 op: MATCH_FROM (177)
        _24025 = e_match_from(_23088, _24024, 1);
        _24024 = NOVALUE;
        // SubProg build_direct pc: 437 op: IF (20)
        if (_24025 == 0)
        {
            _24025 = NOVALUE;
            goto L10; // [437] 457
        }
        else{
            _24025 = NOVALUE;
        }
        // SubProg build_direct pc: 440 op: STARTLINE (58)

        /** buildsys.e:872					objs &= " " & generated_files[i]*/
        // SubProg build_direct pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 444 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24026 = (object)*(((s1_ptr)_2)->base + _i_45779);
        // SubProg build_direct pc: 448 op: CONCAT (15)
        Concat((object_ptr)&_24027, _23328, _24026);
        _24026 = NOVALUE;
        // SubProg build_direct pc: 452 op: CONCAT (15)
        Concat((object_ptr)&_objs_45740, _objs_45740, _24027);
        DeRefDS(_24027);
        _24027 = NOVALUE;
        // SubProg build_direct pc: 456 op: NOP1 (159)
L10: // addr: 457 pc: 456 sub: 45730 op: 159
        // SubProg build_direct pc: 457 op: NOP1 (159)
LE: // addr: 458 pc: 457 sub: 45730 op: 159
        // SubProg build_direct pc: 458 op: STARTLINE (58)

        /** buildsys.e:874			end for*/
        // SubProg build_direct pc: 460 op: ENDFOR_INT_UP1 (54)
LC: // addr: 460 pc: 460 sub: 45730 op: 54
        _i_45779 = _i_45779 + 1;
        goto L5; // [460] 181
L6: // addr: 465 pc: 460 sub: 45730 op: 54
        ;
    }
    // SubProg build_direct pc: 465 op: ELSE (23)
    goto L11; // [465] 527
    // SubProg build_direct pc: 467 op: NOP1 (159)
L4: // addr: 468 pc: 467 sub: 45730 op: 159
    // SubProg build_direct pc: 468 op: STARTLINE (58)

    /** buildsys.e:876			object files = read_lines(file0 & ".bld")*/
    // SubProg build_direct pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 472 op: CONCAT (15)
    Concat((object_ptr)&_24029, _57file0_44055, _23532);
    // SubProg build_direct pc: 476 op: PROC (27)
    _0 = _files_45847;
    _files_45847 = _14read_lines(_24029);
    DeRef(_0);
    _24029 = NOVALUE;
    // SubProg build_direct pc: 480 op: STARTLINE (58)

    /** buildsys.e:877			for i = 1 to length(files) do*/
    // SubProg build_direct pc: 482 op: LENGTH (42)
    if (IS_SEQUENCE(_files_45847)){
            _24031 = SEQ_PTR(_files_45847)->length;
    }
    else {
        _24031 = 1;
    }
    // SubProg build_direct pc: 485 op: FOR_I (125)
    {
        object _i_45853;
        _i_45853 = 1;
L12: // addr: 492 pc: 485 sub: 45730 op: 125
        if (_i_45853 > _24031){
            goto L13; // [485] 524
        }
        // SubProg build_direct pc: 492 op: STARTLINE (58)

        /** buildsys.e:878				objs &= " " & filebase(files[i]) & "." & settings[SETUP_OBJ_EXT]*/
        // SubProg build_direct pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_files_45847);
        _24032 = (object)*(((s1_ptr)_2)->base + _i_45853);
        // SubProg build_direct pc: 498 op: PROC (27)
        Ref(_24032);
        _24033 = _18filebase(_24032);
        _24032 = NOVALUE;
        // SubProg build_direct pc: 502 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45741);
        _24034 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg build_direct pc: 506 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _24034;
            concat_list[1] = _23127;
            concat_list[2] = _24033;
            concat_list[3] = _23328;
            Concat_N((object_ptr)&_24035, concat_list, 4);
        }
        _24034 = NOVALUE;
        DeRef(_24033);
        _24033 = NOVALUE;
        // SubProg build_direct pc: 513 op: CONCAT (15)
        Concat((object_ptr)&_objs_45740, _objs_45740, _24035);
        DeRefDS(_24035);
        _24035 = NOVALUE;
        // SubProg build_direct pc: 517 op: STARTLINE (58)

        /** buildsys.e:879			end for*/
        // SubProg build_direct pc: 519 op: ENDFOR_INT_UP1 (54)
        _i_45853 = _i_45853 + 1;
        goto L12; // [519] 492
L13: // addr: 524 pc: 519 sub: 45730 op: 54
        ;
    }
    // SubProg build_direct pc: 524 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var files_45847
    DeRef(_files_45847);
    _files_45847 = NOVALUE;
    // SubProg build_direct pc: 526 op: NOP1 (159)
L11: // addr: 527 pc: 526 sub: 45730 op: 159
    // SubProg build_direct pc: 527 op: STARTLINE (58)

    /** buildsys.e:882		if keep and not link_only and length(link_files) then*/
    // SubProg build_direct pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 531 op: SC1_AND (141)
    if (_57keep_42095 == 0) {
        _24037 = 0;
        goto L14; // [531] 542
    }
    // SubProg build_direct pc: 535 op: NOT (7)
    _24038 = (_link_only_45732 == 0);
    // SubProg build_direct pc: 538 op: SC2_AND (142)
    _24037 = (_24038 != 0);
    // SubProg build_direct pc: 541 op: NOP1 (159)
L14: // addr: 542 pc: 541 sub: 45730 op: 159
    // SubProg build_direct pc: 542 op: SC1_AND_IF (146)
    if (_24037 == 0) {
        goto L15; // [542] 571
    }
    // SubProg build_direct pc: 546 op: LENGTH (42)
    if (IS_SEQUENCE(_link_files_45775)){
            _24040 = SEQ_PTR(_link_files_45775)->length;
    }
    else {
        _24040 = 1;
    }
    // SubProg build_direct pc: 549 op: NOP1 (159)
    // SubProg build_direct pc: 550 op: IF (20)
    if (_24040 == 0)
    {
        _24040 = NOVALUE;
        goto L15; // [550] 571
    }
    else{
        _24040 = NOVALUE;
    }
    // SubProg build_direct pc: 553 op: STARTLINE (58)

    /** buildsys.e:883			write_lines(file0 & ".bld", link_files)*/
    // SubProg build_direct pc: 555 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 557 op: CONCAT (15)
    Concat((object_ptr)&_24041, _57file0_44055, _23532);
    // SubProg build_direct pc: 561 op: PROC (27)
    RefDS(_link_files_45775);
    _31705 = _14write_lines(_24041, _link_files_45775);
    _24041 = NOVALUE;
    // SubProg build_direct pc: 566 op: DEREF_TEMP (208)
    DeRef(_31705);
    _31705 = NOVALUE;
    // SubProg build_direct pc: 568 op: ELSE (23)
    goto L16; // [568] 595
    // SubProg build_direct pc: 570 op: NOP1 (159)
L15: // addr: 571 pc: 570 sub: 45730 op: 159
    // SubProg build_direct pc: 571 op: STARTLINE (58)

    /** buildsys.e:884		elsif keep = 0 then*/
    // SubProg build_direct pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 575 op: EQUALS_IFW (104)
    if (_57keep_42095 != 0)
    goto L17; // [575] 594
    // SubProg build_direct pc: 579 op: STARTLINE (58)

    /** buildsys.e:886			delete_file(file0 & ".bld")*/
    // SubProg build_direct pc: 581 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 583 op: CONCAT (15)
    Concat((object_ptr)&_24043, _57file0_44055, _23532);
    // SubProg build_direct pc: 587 op: PROC (27)
    _31704 = _18delete_file(_24043);
    _24043 = NOVALUE;
    // SubProg build_direct pc: 591 op: DEREF_TEMP (208)
    DeRef(_31704);
    _31704 = NOVALUE;
    // SubProg build_direct pc: 593 op: NOP1 (159)
L17: // addr: 594 pc: 593 sub: 45730 op: 159
    // SubProg build_direct pc: 594 op: NOP1 (159)
L16: // addr: 595 pc: 594 sub: 45730 op: 159
    // SubProg build_direct pc: 595 op: STARTLINE (58)

    /** buildsys.e:890		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_GCC then*/
    // SubProg build_direct pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 599 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 601 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _24044 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 605 op: LENGTH (42)
    if (IS_SEQUENCE(_24044)){
            _24045 = SEQ_PTR(_24044)->length;
    }
    else {
        _24045 = 1;
    }
    _24044 = NOVALUE;
    // SubProg build_direct pc: 608 op: SC1_AND (141)
    if (_24045 == 0) {
        _24046 = 0;
        goto L18; // [608] 623
    }
    // SubProg build_direct pc: 612 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45741);
    _24047 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 616 op: LENGTH (42)
    if (IS_SEQUENCE(_24047)){
            _24048 = SEQ_PTR(_24047)->length;
    }
    else {
        _24048 = 1;
    }
    _24047 = NOVALUE;
    // SubProg build_direct pc: 619 op: SC2_AND (142)
    _24046 = (_24048 != 0);
    // SubProg build_direct pc: 622 op: NOP1 (159)
L18: // addr: 623 pc: 622 sub: 45730 op: 159
    // SubProg build_direct pc: 623 op: SC1_AND_IF (146)
    if (_24046 == 0) {
        goto L19; // [623] 724
    }
    // SubProg build_direct pc: 627 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 629 op: EQUALS (3)
    _24050 = (0 == 1);
    // SubProg build_direct pc: 633 op: NOP1 (159)
    // SubProg build_direct pc: 634 op: IF (20)
    if (_24050 == 0)
    {
        DeRef(_24050);
        _24050 = NOVALUE;
        goto L19; // [634] 724
    }
    else{
        DeRef(_24050);
        _24050 = NOVALUE;
    }
    // SubProg build_direct pc: 637 op: STARTLINE (58)

    /** buildsys.e:891			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    // SubProg build_direct pc: 639 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45741);
    _24051 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 645 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 647 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _24052 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 651 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 653 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 655 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _24053 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 659 op: RIGHT_BRACE_2 (85)
    RefDS(_24053);
    RefDS(_24052);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24052;
    ((intptr_t *)_2)[2] = _24053;
    _24054 = MAKE_SEQ(_1);
    _24053 = NOVALUE;
    _24052 = NOVALUE;
    // SubProg build_direct pc: 663 op: PROC (27)
    Ref(_24051);
    _0 = _cmd_45739;
    _cmd_45739 = _15format(_24051, _24054);
    DeRef(_0);
    _24051 = NOVALUE;
    _24054 = NOVALUE;
    // SubProg build_direct pc: 668 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 670 op: STARTLINE (58)

    /** buildsys.e:892			status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 672 op: SYSTEM_EXEC (154)
    _status_45746 = system_exec_call(_cmd_45739, 0);
    // SubProg build_direct pc: 676 op: STARTLINE (58)

    /** buildsys.e:893			if status != 0 then*/
    // SubProg build_direct pc: 678 op: NOTEQ_IFW_I (122)
    if (_status_45746 == 0)
    goto L1A; // [678] 723
    // SubProg build_direct pc: 682 op: STARTLINE (58)

    /** buildsys.e:894				ShowMsg(2, 350, { rc_file[D_NAME] })*/
    // SubProg build_direct pc: 684 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 686 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 688 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _24058 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 692 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24058);
    ((intptr_t*)_2)[1] = _24058;
    _24059 = MAKE_SEQ(_1);
    _24058 = NOVALUE;
    // SubProg build_direct pc: 696 op: PROC (27)
    _40ShowMsg(2, 350, _24059, 1);
    _24059 = NOVALUE;
    // SubProg build_direct pc: 702 op: STARTLINE (58)

    /** buildsys.e:895				ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 704 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45739);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45746;
    ((intptr_t *)_2)[2] = _cmd_45739;
    _24060 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 708 op: PROC (27)
    _40ShowMsg(2, 169, _24060, 1);
    _24060 = NOVALUE;
    // SubProg build_direct pc: 714 op: STARTLINE (58)

    /** buildsys.e:897				goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 716 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 718 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 720 op: GOTO (188)
    goto GF;
    // SubProg build_direct pc: 722 op: NOP1 (159)
L1A: // addr: 723 pc: 722 sub: 45730 op: 159
    // SubProg build_direct pc: 723 op: NOP1 (159)
L19: // addr: 724 pc: 723 sub: 45730 op: 159
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
        _2 = (object)SEQ_PTR(_settings_45741);
        _24064 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg build_direct pc: 743 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 745 op: RIGHT_BRACE_2 (85)
        RefDS(_57file0_44055);
        Ref(_24064);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _24064;
        ((intptr_t *)_2)[2] = _57file0_44055;
        _24065 = MAKE_SEQ(_1);
        _24064 = NOVALUE;
        // SubProg build_direct pc: 749 op: SPRINTF (53)
        DeRef(_cmd_45739);
        _cmd_45739 = EPrintf(-9999999, _24063, _24065);
        DeRefDS(_24065);
        _24065 = NOVALUE;
        // SubProg build_direct pc: 753 op: ELSE (23)
        goto L1B; // [753] 828
        // SubProg build_direct pc: 755 op: STARTLINE (58)

        /** buildsys.e:905			case COMPILER_GCC then*/
        // SubProg build_direct pc: 757 op: CASE (186)
        case 1:
        // SubProg build_direct pc: 759 op: STARTLINE (58)

        /** buildsys.e:906				cmd = sprintf("%s -o %s %s %s %s", { */
        // SubProg build_direct pc: 761 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45741);
        _24068 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg build_direct pc: 765 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 767 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 769 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_55exe_name_44898);
        _24069 = (object)*(((s1_ptr)_2)->base + 11);
        // SubProg build_direct pc: 773 op: PROC (27)
        Ref(_24069);
        _24070 = _55adjust_for_build_file(_24069);
        _24069 = NOVALUE;
        // SubProg build_direct pc: 777 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 779 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 781 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_55res_file_44910);
        _24071 = (object)*(((s1_ptr)_2)->base + 11);
        // SubProg build_direct pc: 785 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_settings_45741);
        _24072 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg build_direct pc: 789 op: RIGHT_BRACE_N (31)
        _1 = NewS1(5);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_24068);
        ((intptr_t*)_2)[1] = _24068;
        ((intptr_t*)_2)[2] = _24070;
        RefDS(_objs_45740);
        ((intptr_t*)_2)[3] = _objs_45740;
        RefDS(_24071);
        ((intptr_t*)_2)[4] = _24071;
        Ref(_24072);
        ((intptr_t*)_2)[5] = _24072;
        _24073 = MAKE_SEQ(_1);
        _24072 = NOVALUE;
        _24071 = NOVALUE;
        _24070 = NOVALUE;
        _24068 = NOVALUE;
        // SubProg build_direct pc: 797 op: SPRINTF (53)
        DeRef(_cmd_45739);
        _cmd_45739 = EPrintf(-9999999, _24067, _24073);
        DeRefDS(_24073);
        _24073 = NOVALUE;
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
        _24075 = MAKE_SEQ(_1);
        // SubProg build_direct pc: 815 op: PROC (27)
        _40ShowMsg(2, 167, _24075, 1);
        _24075 = NOVALUE;
        // SubProg build_direct pc: 821 op: STARTLINE (58)

        /** buildsys.e:918				goto "build_direct_cleanup"*/
        // SubProg build_direct pc: 823 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-
        // SubProg build_direct pc: 825 op: GOTO (188)
        goto GF;
        // SubProg build_direct pc: 827 op: NOPSWITCH (187)
    ;}L1B: // addr: 828 pc: 827 sub: 45730 op: 187
    // SubProg build_direct pc: 828 op: STARTLINE (58)

    /** buildsys.e:921		if not silent then*/
    // SubProg build_direct pc: 830 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 832 op: NOT_IFW (108)
    if (_34silent_15303 != 0)
    goto L1C; // [832] 886
    // SubProg build_direct pc: 835 op: STARTLINE (58)

    /** buildsys.e:922			if not verbose then*/
    // SubProg build_direct pc: 837 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 839 op: NOT_IFW (108)
    if (_34verbose_15306 != 0)
    goto L1D; // [839] 870
    // SubProg build_direct pc: 842 op: STARTLINE (58)

    /** buildsys.e:923				ShowMsg(1, 166, { abbreviate_path(exe_name[D_NAME]) })*/
    // SubProg build_direct pc: 844 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 846 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 848 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _24078 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 852 op: PROC (27)
    Ref(_24078);
    RefDS(_21936);
    _24079 = _18abbreviate_path(_24078, _21936);
    _24078 = NOVALUE;
    // SubProg build_direct pc: 857 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24079;
    _24080 = MAKE_SEQ(_1);
    _24079 = NOVALUE;
    // SubProg build_direct pc: 861 op: PROC (27)
    _40ShowMsg(1, 166, _24080, 1);
    _24080 = NOVALUE;
    // SubProg build_direct pc: 867 op: ELSE (23)
    goto L1E; // [867] 885
    // SubProg build_direct pc: 869 op: NOP1 (159)
L1D: // addr: 870 pc: 869 sub: 45730 op: 159
    // SubProg build_direct pc: 870 op: STARTLINE (58)

    /** buildsys.e:925				ShowMsg(1, 166, { cmd })*/
    // SubProg build_direct pc: 872 op: PRIVATE_INIT_CHECK (30)
    // SubProg build_direct pc: 874 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_cmd_45739);
    ((intptr_t*)_2)[1] = _cmd_45739;
    _24081 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 878 op: PROC (27)
    _40ShowMsg(1, 166, _24081, 1);
    _24081 = NOVALUE;
    // SubProg build_direct pc: 884 op: NOP1 (159)
L1E: // addr: 885 pc: 884 sub: 45730 op: 159
    // SubProg build_direct pc: 885 op: NOP1 (159)
L1C: // addr: 886 pc: 885 sub: 45730 op: 159
    // SubProg build_direct pc: 886 op: STARTLINE (58)

    /** buildsys.e:929		status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 888 op: PRIVATE_INIT_CHECK (30)
    // SubProg build_direct pc: 890 op: SYSTEM_EXEC (154)
    _status_45746 = system_exec_call(_cmd_45739, 0);
    // SubProg build_direct pc: 894 op: STARTLINE (58)

    /** buildsys.e:930		if status != 0 then*/
    // SubProg build_direct pc: 896 op: NOTEQ_IFW_I (122)
    if (_status_45746 == 0)
    goto L1F; // [896] 939
    // SubProg build_direct pc: 900 op: STARTLINE (58)

    /** buildsys.e:931			ShowMsg(2, 168, { exe_name[D_NAME] })*/
    // SubProg build_direct pc: 902 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 904 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 906 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _24084 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 910 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24084);
    ((intptr_t*)_2)[1] = _24084;
    _24085 = MAKE_SEQ(_1);
    _24084 = NOVALUE;
    // SubProg build_direct pc: 914 op: PROC (27)
    _40ShowMsg(2, 168, _24085, 1);
    _24085 = NOVALUE;
    // SubProg build_direct pc: 920 op: STARTLINE (58)

    /** buildsys.e:932			ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 922 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45739);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45746;
    ((intptr_t *)_2)[2] = _cmd_45739;
    _24086 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 926 op: PROC (27)
    _40ShowMsg(2, 169, _24086, 1);
    _24086 = NOVALUE;
    // SubProg build_direct pc: 932 op: STARTLINE (58)

    /** buildsys.e:934			goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 934 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 936 op: GOTO (188)
    goto GF;
    // SubProg build_direct pc: 938 op: NOP1 (159)
L1F: // addr: 939 pc: 938 sub: 45730 op: 159
    // SubProg build_direct pc: 939 op: STARTLINE (58)

    /** buildsys.e:938		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_WATCOM then*/
    // SubProg build_direct pc: 941 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 943 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 945 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _24087 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 949 op: LENGTH (42)
    if (IS_SEQUENCE(_24087)){
            _24088 = SEQ_PTR(_24087)->length;
    }
    else {
        _24088 = 1;
    }
    _24087 = NOVALUE;
    // SubProg build_direct pc: 952 op: SC1_AND (141)
    if (_24088 == 0) {
        _24089 = 0;
        goto L20; // [952] 967
    }
    // SubProg build_direct pc: 956 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45741);
    _24090 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 960 op: LENGTH (42)
    if (IS_SEQUENCE(_24090)){
            _24091 = SEQ_PTR(_24090)->length;
    }
    else {
        _24091 = 1;
    }
    _24090 = NOVALUE;
    // SubProg build_direct pc: 963 op: SC2_AND (142)
    _24089 = (_24091 != 0);
    // SubProg build_direct pc: 966 op: NOP1 (159)
L20: // addr: 967 pc: 966 sub: 45730 op: 159
    // SubProg build_direct pc: 967 op: SC1_AND_IF (146)
    if (_24089 == 0) {
        goto L21; // [967] 1086
    }
    // SubProg build_direct pc: 971 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 973 op: EQUALS (3)
    _24093 = (0 == 2);
    // SubProg build_direct pc: 977 op: NOP1 (159)
    // SubProg build_direct pc: 978 op: IF (20)
    if (_24093 == 0)
    {
        DeRef(_24093);
        _24093 = NOVALUE;
        goto L21; // [978] 1086
    }
    else{
        DeRef(_24093);
        _24093 = NOVALUE;
    }
    // SubProg build_direct pc: 981 op: STARTLINE (58)

    /** buildsys.e:939			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    // SubProg build_direct pc: 983 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_settings_45741);
    _24094 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg build_direct pc: 987 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 989 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 991 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _24095 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 995 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 997 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 999 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _24096 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1003 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1005 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1007 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _24097 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1011 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24095);
    ((intptr_t*)_2)[1] = _24095;
    RefDS(_24096);
    ((intptr_t*)_2)[2] = _24096;
    Ref(_24097);
    ((intptr_t*)_2)[3] = _24097;
    _24098 = MAKE_SEQ(_1);
    _24097 = NOVALUE;
    _24096 = NOVALUE;
    _24095 = NOVALUE;
    // SubProg build_direct pc: 1017 op: PROC (27)
    Ref(_24094);
    _0 = _cmd_45739;
    _cmd_45739 = _15format(_24094, _24098);
    DeRef(_0);
    _24094 = NOVALUE;
    _24098 = NOVALUE;
    // SubProg build_direct pc: 1022 op: SEQUENCE_CHECK (97)
    // SubProg build_direct pc: 1024 op: STARTLINE (58)

    /** buildsys.e:940			status = system_exec(cmd, 0)*/
    // SubProg build_direct pc: 1026 op: SYSTEM_EXEC (154)
    _status_45746 = system_exec_call(_cmd_45739, 0);
    // SubProg build_direct pc: 1030 op: STARTLINE (58)

    /** buildsys.e:941			if status != 0 then*/
    // SubProg build_direct pc: 1032 op: NOTEQ_IFW_I (122)
    if (_status_45746 == 0)
    goto L22; // [1032] 1085
    // SubProg build_direct pc: 1036 op: STARTLINE (58)

    /** buildsys.e:942				ShowMsg(2, 187, { rc_file[D_NAME], exe_name[D_NAME] })*/
    // SubProg build_direct pc: 1038 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1040 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1042 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55rc_file_44904);
    _24102 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 1046 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1048 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1050 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55exe_name_44898);
    _24103 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg build_direct pc: 1054 op: RIGHT_BRACE_2 (85)
    Ref(_24103);
    RefDS(_24102);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24102;
    ((intptr_t *)_2)[2] = _24103;
    _24104 = MAKE_SEQ(_1);
    _24103 = NOVALUE;
    _24102 = NOVALUE;
    // SubProg build_direct pc: 1058 op: PROC (27)
    _40ShowMsg(2, 187, _24104, 1);
    _24104 = NOVALUE;
    // SubProg build_direct pc: 1064 op: STARTLINE (58)

    /** buildsys.e:943				ShowMsg(2, 169, { status, cmd })*/
    // SubProg build_direct pc: 1066 op: RIGHT_BRACE_2 (85)
    RefDS(_cmd_45739);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45746;
    ((intptr_t *)_2)[2] = _cmd_45739;
    _24105 = MAKE_SEQ(_1);
    // SubProg build_direct pc: 1070 op: PROC (27)
    _40ShowMsg(2, 169, _24105, 1);
    _24105 = NOVALUE;
    // SubProg build_direct pc: 1076 op: STARTLINE (58)

    /** buildsys.e:945				goto "build_direct_cleanup"*/
    // SubProg build_direct pc: 1078 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 1080 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg build_direct pc: 1082 op: GOTO (188)
    goto GF;
    // SubProg build_direct pc: 1084 op: NOP1 (159)
L22: // addr: 1085 pc: 1084 sub: 45730 op: 159
    // SubProg build_direct pc: 1085 op: NOP1 (159)
L21: // addr: 1086 pc: 1085 sub: 45730 op: 159
    // SubProg build_direct pc: 1086 op: STARTLINE (58)

    /** buildsys.e:949	label "build_direct_cleanup"*/
    // SubProg build_direct pc: 1088 op: GLABEL (189)
GF:
    // SubProg build_direct pc: 1090 op: STARTLINE (58)

    /** buildsys.e:950		if keep = 0 then*/
    // SubProg build_direct pc: 1092 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1094 op: EQUALS_IFW (104)
    if (_57keep_42095 != 0)
    goto L23; // [1094] 1241
    // SubProg build_direct pc: 1098 op: STARTLINE (58)

    /** buildsys.e:951			for i = 1 to length(generated_files) do*/
    // SubProg build_direct pc: 1100 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1102 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42092)){
            _24107 = SEQ_PTR(_57generated_files_42092)->length;
    }
    else {
        _24107 = 1;
    }
    // SubProg build_direct pc: 1105 op: FOR_I (125)
    {
        object _i_45980;
        _i_45980 = 1;
L24: // addr: 1112 pc: 1105 sub: 45730 op: 125
        if (_i_45980 > _24107){
            goto L25; // [1105] 1159
        }
        // SubProg build_direct pc: 1112 op: STARTLINE (58)

        /** buildsys.e:952				if verbose then*/
        // SubProg build_direct pc: 1114 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1116 op: IF (20)
        if (_34verbose_15306 == 0)
        {
            goto L26; // [1116] 1138
        }
        else{
        }
        // SubProg build_direct pc: 1119 op: STARTLINE (58)

        /** buildsys.e:953					ShowMsg(1, 347, { generated_files[i] })*/
        // SubProg build_direct pc: 1121 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1123 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24108 = (object)*(((s1_ptr)_2)->base + _i_45980);
        // SubProg build_direct pc: 1127 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24108);
        ((intptr_t*)_2)[1] = _24108;
        _24109 = MAKE_SEQ(_1);
        _24108 = NOVALUE;
        // SubProg build_direct pc: 1131 op: PROC (27)
        _40ShowMsg(1, 347, _24109, 1);
        _24109 = NOVALUE;
        // SubProg build_direct pc: 1137 op: NOP1 (159)
L26: // addr: 1138 pc: 1137 sub: 45730 op: 159
        // SubProg build_direct pc: 1138 op: STARTLINE (58)

        /** buildsys.e:955				delete_file(generated_files[i])*/
        // SubProg build_direct pc: 1140 op: GLOBAL_INIT_CHECK (109)
        // SubProg build_direct pc: 1142 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_57generated_files_42092);
        _24110 = (object)*(((s1_ptr)_2)->base + _i_45980);
        // SubProg build_direct pc: 1146 op: PROC (27)
        RefDS(_24110);
        _31703 = _18delete_file(_24110);
        _24110 = NOVALUE;
        // SubProg build_direct pc: 1150 op: DEREF_TEMP (208)
        DeRef(_31703);
        _31703 = NOVALUE;
        // SubProg build_direct pc: 1152 op: STARTLINE (58)

        /** buildsys.e:956			end for*/
        // SubProg build_direct pc: 1154 op: ENDFOR_INT_UP1 (54)
        _i_45980 = _i_45980 + 1;
        goto L24; // [1154] 1112
L25: // addr: 1159 pc: 1154 sub: 45730 op: 54
        ;
    }
    // SubProg build_direct pc: 1159 op: STARTLINE (58)

    /** buildsys.e:958			if length(res_file[D_ALTNAME]) then*/
    // SubProg build_direct pc: 1161 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1163 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1165 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _24111 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1169 op: LENGTH (42)
    if (IS_SEQUENCE(_24111)){
            _24112 = SEQ_PTR(_24111)->length;
    }
    else {
        _24112 = 1;
    }
    _24111 = NOVALUE;
    // SubProg build_direct pc: 1172 op: IF (20)
    if (_24112 == 0)
    {
        _24112 = NOVALUE;
        goto L27; // [1172] 1192
    }
    else{
        _24112 = NOVALUE;
    }
    // SubProg build_direct pc: 1175 op: STARTLINE (58)

    /** buildsys.e:959				delete_file(res_file[D_ALTNAME])*/
    // SubProg build_direct pc: 1177 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1179 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1181 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_55res_file_44910);
    _24113 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg build_direct pc: 1185 op: PROC (27)
    RefDS(_24113);
    _31702 = _18delete_file(_24113);
    _24113 = NOVALUE;
    // SubProg build_direct pc: 1189 op: DEREF_TEMP (208)
    DeRef(_31702);
    _31702 = NOVALUE;
    // SubProg build_direct pc: 1191 op: NOP1 (159)
L27: // addr: 1192 pc: 1191 sub: 45730 op: 159
    // SubProg build_direct pc: 1192 op: STARTLINE (58)

    /** buildsys.e:962			if remove_output_dir then*/
    // SubProg build_direct pc: 1194 op: GLOBAL_INIT_CHECK (109)
    // SubProg build_direct pc: 1196 op: IF (20)
    // SubProg build_direct pc: 1240 op: NOP1 (159)
L23: // addr: 1241 pc: 1240 sub: 45730 op: 159
    // SubProg build_direct pc: 1241 op: STARTLINE (58)

    /** buildsys.e:972		chdir(cwd)*/
    // SubProg build_direct pc: 1243 op: PROC (27)
    RefDS(_cwd_45743);
    _31700 = _18chdir(_cwd_45743);
    // SubProg build_direct pc: 1247 op: DEREF_TEMP (208)
    DeRef(_31700);
    _31700 = NOVALUE;
    // SubProg build_direct pc: 1249 op: STARTLINE (58)

    /** buildsys.e:973	end procedure*/
    // SubProg build_direct pc: 1251 op: RETURNP (29)

// Exiting block BLOCK: build_direct

// block var link_only_45732

// block var the_file0_45733
    DeRefDS(_the_file0_45733);

// block var cmd_45739
    DeRef(_cmd_45739);

// block var objs_45740
    DeRef(_objs_45740);

// block var settings_45741
    DeRef(_settings_45741);

// block var cwd_45743
    DeRefDS(_cwd_45743);

// block var status_45746

// block var link_files_45775
    DeRef(_link_files_45775);
    DeRef(_24038);
    _24038 = NOVALUE;
    _24087 = NOVALUE;
    DeRef(_24010);
    _24010 = NOVALUE;
    _24090 = NOVALUE;
    _24111 = NOVALUE;
    _24047 = NOVALUE;
    _24044 = NOVALUE;
    return;
    // SubProg build_direct pc: 1254 op: BADRETURNF (43)
    ;
}


void _55write_buildfile()
{
    object _make_command_46020 = NOVALUE;
    object _settings_46060 = NOVALUE;
    object _24140 = NOVALUE; // 46069 24140
    object _24139 = NOVALUE; // 46068 24139
// skipping _24138  name type: 0
// skipping _24137  name type: 0
// skipping _24136  name type: 0
    object _24135 = NOVALUE; // 46055 24135
    object _24134 = NOVALUE; // 46052 24134
    object _24133 = NOVALUE; // 46051 24133
// skipping _24132  name type: 0
    object _24131 = NOVALUE; // 46044 24131
    object _24130 = NOVALUE; // 46040 24130
    object _24129 = NOVALUE; // 46036 24129
    object _24128 = NOVALUE; // 46035 24128
    object _24127 = NOVALUE; // 46033 24127
    object _24126 = NOVALUE; // 46032 24126
    object _24125 = NOVALUE; // 46029 24125
    object _24124 = NOVALUE; // 46028 24124
// skipping _24121  name type: 0
// skipping _24120  name type: 0
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
        if (_34silent_15303 != 0)
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
        RefDS(_24123);
        DeRefi(_make_command_46020);
        _make_command_46020 = _24123;
        // SubProg write_buildfile pc: 50 op: SEQUENCE_CHECK (97)
        // SubProg write_buildfile pc: 52 op: NOP1 (159)
        // SubProg write_buildfile pc: 53 op: STARTLINE (58)

        /** buildsys.e:994					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 57 op: PLUS (11)
        _24124 = _34cfile_count_15266 + 2;
        if ((object)((uintptr_t)_24124 + (uintptr_t)HIGH_BITS) >= 0){
            _24124 = NewDouble((eudouble)_24124);
        }
        // SubProg write_buildfile pc: 61 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24124;
        _24125 = MAKE_SEQ(_1);
        _24124 = NOVALUE;
        // SubProg write_buildfile pc: 65 op: PROC (27)
        _40ShowMsg(1, 170, _24125, 1);
        _24125 = NOVALUE;
        // SubProg write_buildfile pc: 71 op: STARTLINE (58)

        /** buildsys.e:996					if sequence(output_dir) and length(output_dir) > 0 then*/
        // SubProg write_buildfile pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 75 op: IS_A_SEQUENCE (68)
        _24126 = 1;
        // SubProg write_buildfile pc: 78 op: SC1_AND_IF (146)
        if (_24126 == 0) {
            goto L2; // [78] 118
        }
        // SubProg write_buildfile pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 84 op: LENGTH (42)
        // Known sequence length:
        _24128 = 0;
        // SubProg write_buildfile pc: 87 op: GREATER (6)
        _24129 = (0 > 0);
        _24128 = NOVALUE;
        // SubProg write_buildfile pc: 91 op: NOP1 (159)
        // SubProg write_buildfile pc: 92 op: IF (20)
        if (_24129 == 0)
        {
            DeRef(_24129);
            _24129 = NOVALUE;
            goto L2; // [92] 118
        }
        else{
            DeRef(_24129);
            _24129 = NOVALUE;
        }
        // SubProg write_buildfile pc: 95 op: STARTLINE (58)

        /** buildsys.e:997						ShowMsg(1, 174, { output_dir, make_command, file0 })*/
        // SubProg write_buildfile pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 99 op: PRIVATE_INIT_CHECK (30)
        // SubProg write_buildfile pc: 101 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 103 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_57output_dir_42102);
        ((intptr_t*)_2)[1] = _57output_dir_42102;
        RefDS(_make_command_46020);
        ((intptr_t*)_2)[2] = _make_command_46020;
        RefDS(_57file0_44055);
        ((intptr_t*)_2)[3] = _57file0_44055;
        _24130 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 109 op: PROC (27)
        _40ShowMsg(1, 174, _24130, 1);
        _24130 = NOVALUE;
        // SubProg write_buildfile pc: 115 op: ELSE (23)
        goto L3; // [115] 135
        // SubProg write_buildfile pc: 117 op: NOP1 (159)
L2: // addr: 118 pc: 117 sub: 46012 op: 159
        // SubProg write_buildfile pc: 118 op: STARTLINE (58)

        /** buildsys.e:999						ShowMsg(1, 172, { make_command, file0 })*/
        // SubProg write_buildfile pc: 120 op: PRIVATE_INIT_CHECK (30)
        // SubProg write_buildfile pc: 122 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 124 op: RIGHT_BRACE_2 (85)
        RefDS(_57file0_44055);
        RefDS(_make_command_46020);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _make_command_46020;
        ((intptr_t *)_2)[2] = _57file0_44055;
        _24131 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 128 op: PROC (27)
        _40ShowMsg(1, 172, _24131, 1);
        _24131 = NOVALUE;
        // SubProg write_buildfile pc: 134 op: NOP1 (159)
L3: // addr: 135 pc: 134 sub: 46012 op: 159
        // SubProg write_buildfile pc: 135 op: NOP1 (159)
L1: // addr: 136 pc: 135 sub: 46012 op: 159
        // SubProg write_buildfile pc: 136 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var make_command_46020
        DeRefi(_make_command_46020);
        _make_command_46020 = NOVALUE;
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
        if (_34silent_15303 != 0)
        goto L4; // [152] 263
        // SubProg write_buildfile pc: 155 op: STARTLINE (58)

        /** buildsys.e:1007					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 159 op: PLUS (11)
        _24133 = _34cfile_count_15266 + 2;
        if ((object)((uintptr_t)_24133 + (uintptr_t)HIGH_BITS) >= 0){
            _24133 = NewDouble((eudouble)_24133);
        }
        // SubProg write_buildfile pc: 163 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24133;
        _24134 = MAKE_SEQ(_1);
        _24133 = NOVALUE;
        // SubProg write_buildfile pc: 167 op: PROC (27)
        _40ShowMsg(1, 170, _24134, 1);
        _24134 = NOVALUE;
        // SubProg write_buildfile pc: 173 op: STARTLINE (58)

        /** buildsys.e:1008					ShowMsg(1, 173, { file0 })*/
        // SubProg write_buildfile pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 177 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_57file0_44055);
        ((intptr_t*)_2)[1] = _57file0_44055;
        _24135 = MAKE_SEQ(_1);
        // SubProg write_buildfile pc: 181 op: PROC (27)
        _40ShowMsg(1, 173, _24135, 1);
        _24135 = NOVALUE;
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
        RefDS(_21936);
        _55build_direct(0, _21936);
        // SubProg write_buildfile pc: 200 op: STARTLINE (58)

        /** buildsys.e:1014				if not silent then*/
        // SubProg write_buildfile pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 204 op: NOT_IFW (108)
        if (_34silent_15303 != 0)
        goto L5; // [204] 215
        // SubProg write_buildfile pc: 207 op: STARTLINE (58)

        /** buildsys.e:1015					sequence settings = setup_build()*/
        // SubProg write_buildfile pc: 209 op: PROC (27)
        _0 = _settings_46060;
        _settings_46060 = _55setup_build();
        DeRef(_0);
        // SubProg write_buildfile pc: 212 op: SEQUENCE_CHECK (97)
        // SubProg write_buildfile pc: 214 op: NOP1 (159)
L5: // addr: 215 pc: 214 sub: 46012 op: 159
        // SubProg write_buildfile pc: 215 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var settings_46060
        DeRef(_settings_46060);
        _settings_46060 = NOVALUE;
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
        if (_34silent_15303 != 0)
        goto L4; // [227] 263
        // SubProg write_buildfile pc: 230 op: STARTLINE (58)

        /** buildsys.e:1021					ShowMsg(1, 170, { cfile_count + 2 })*/
        // SubProg write_buildfile pc: 232 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_buildfile pc: 234 op: PLUS (11)
        _24139 = _34cfile_count_15266 + 2;
        if ((object)((uintptr_t)_24139 + (uintptr_t)HIGH_BITS) >= 0){
            _24139 = NewDouble((eudouble)_24139);
        }
        // SubProg write_buildfile pc: 238 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24139;
        _24140 = MAKE_SEQ(_1);
        _24139 = NOVALUE;
        // SubProg write_buildfile pc: 242 op: PROC (27)
        _40ShowMsg(1, 170, _24140, 1);
        _24140 = NOVALUE;
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
        RefDS(_21936);
        _49CompileErr(151, _21936, 0);
        // SubProg write_buildfile pc: 262 op: NOPSWITCH (187)
    ;}L4: // addr: 263 pc: 262 sub: 46012 op: 187
    // SubProg write_buildfile pc: 263 op: STARTLINE (58)

    /** buildsys.e:1029	end procedure*/
    // SubProg write_buildfile pc: 265 op: RETURNP (29)

// Exiting block BLOCK: write_buildfile
    return;
    // SubProg write_buildfile pc: 268 op: BADRETURNF (43)
    ;
}



// 0x315C02C0
