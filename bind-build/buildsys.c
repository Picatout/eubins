// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _58update_checksum(object _raw_data_44932)
{
    object _23541 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:213		cfile_check = xor_bits(cfile_check, hash( raw_data, stdhash:HSIEH32))*/
    _23541 = calc_hash(_raw_data_44932, -5);
    _0 = _58cfile_check_44913;
    if (IS_ATOM_INT(_58cfile_check_44913) && IS_ATOM_INT(_23541)) {
        {uintptr_t tu;
             tu = (uintptr_t)_58cfile_check_44913 ^ (uintptr_t)_23541;
             _58cfile_check_44913 = MAKE_UINT(tu);
        }
    }
    else {
        if (IS_ATOM_INT(_58cfile_check_44913)) {
            temp_d.dbl = (eudouble)_58cfile_check_44913;
            _58cfile_check_44913 = Dxor_bits(&temp_d, DBL_PTR(_23541));
        }
        else {
            if (IS_ATOM_INT(_23541)) {
                temp_d.dbl = (eudouble)_23541;
                _58cfile_check_44913 = Dxor_bits(DBL_PTR(_58cfile_check_44913), &temp_d);
            }
            else
            _58cfile_check_44913 = Dxor_bits(DBL_PTR(_58cfile_check_44913), DBL_PTR(_23541));
        }
    }
    DeRef(_0);
    DeRef(_23541);
    _23541 = NOVALUE;

    /** buildsys.e:214	end procedure*/
    DeRef(_raw_data_44932);
    return;
    ;
}


void _58write_checksum(object _file_44937)
{
    object _0, _1, _2;
    

    /** buildsys.e:219		printf( file, "\n// 0x%08x\n", cfile_check )*/
    EPrintf(_file_44937, _23543, _58cfile_check_44913);

    /** buildsys.e:220		cfile_check = 0*/
    DeRef(_58cfile_check_44913);
    _58cfile_check_44913 = 0;

    /** buildsys.e:221	end procedure*/
    return;
    ;
}


object _58adjust_for_command_line_passing(object _long_path_44985)
{
    object _slash_44986 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:310		if compiler_type = COMPILER_GCC then*/

    /** buildsys.e:312		elsif compiler_type = COMPILER_WATCOM then*/

    /** buildsys.e:315			slash = SLASH*/
    _slash_44986 = 47;

    /** buildsys.e:317		ifdef UNIX then*/

    /** buildsys.e:318			return long_path*/
    return _long_path_44985;
    ;
}


object _58adjust_for_build_file(object _long_path_44995)
{
    object _short_path_44996 = NOVALUE;
    object _23573 = NOVALUE;
    object _23572 = NOVALUE;
    object _23571 = NOVALUE;
    object _23570 = NOVALUE;
    object _23569 = NOVALUE;
    object _23568 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:355	    object short_path = adjust_for_command_line_passing(long_path)*/
    RefDS(_long_path_44995);
    _0 = _short_path_44996;
    _short_path_44996 = _58adjust_for_command_line_passing(_long_path_44995);
    DeRef(_0);

    /** buildsys.e:356	    if atom(short_path) then*/
    _23568 = IS_ATOM(_short_path_44996);
    if (_23568 == 0)
    {
        _23568 = NOVALUE;
        goto L1; // [14] 24
    }
    else{
        _23568 = NOVALUE;
    }

    /** buildsys.e:357	    	return short_path*/
    DeRefDS(_long_path_44995);
    return _short_path_44996;
L1: 

    /** buildsys.e:359		if compiler_type = COMPILER_GCC and build_system_type != BUILD_DIRECT and TWINDOWS then*/
    _23569 = (0 == 1);
    if (_23569 == 0) {
        _23570 = 0;
        goto L2; // [32] 46
    }
    _23571 = (3 != 3);
    _23570 = (_23571 != 0);
L2: 
    if (_23570 == 0) {
        goto L3; // [46] 69
    }
    goto L3; // [53] 69

    /** buildsys.e:360			return windows_to_mingw_path(short_path)*/
    Ref(_short_path_44996);
    _23573 = _58windows_to_mingw_path(_short_path_44996);
    DeRefDS(_long_path_44995);
    DeRef(_short_path_44996);
    DeRef(_23571);
    _23571 = NOVALUE;
    DeRef(_23569);
    _23569 = NOVALUE;
    return _23573;
    goto L4; // [66] 76
L3: 

    /** buildsys.e:362			return short_path*/
    DeRefDS(_long_path_44995);
    DeRef(_23573);
    _23573 = NOVALUE;
    DeRef(_23571);
    _23571 = NOVALUE;
    DeRef(_23569);
    _23569 = NOVALUE;
    return _short_path_44996;
L4: 
    ;
}


object _58setup_build()
{
    object _c_exe_45011 = NOVALUE;
    object _c_flags_45012 = NOVALUE;
    object _l_exe_45013 = NOVALUE;
    object _l_flags_45014 = NOVALUE;
    object _obj_ext_45015 = NOVALUE;
    object _exe_ext_45016 = NOVALUE;
    object _l_flags_begin_45017 = NOVALUE;
    object _rc_comp_45018 = NOVALUE;
    object _l_names_45019 = NOVALUE;
    object _l_ext_45020 = NOVALUE;
    object _t_slash_45021 = NOVALUE;
    object _eudir_45063 = NOVALUE;
    object _locations_45088 = NOVALUE;
    object _compile_dir_45140 = NOVALUE;
    object _bits_45151 = NOVALUE;
    object _m_flag_45161 = NOVALUE;
    object _23742 = NOVALUE;
    object _23739 = NOVALUE;
    object _23738 = NOVALUE;
    object _23735 = NOVALUE;
    object _23734 = NOVALUE;
    object _23731 = NOVALUE;
    object _23730 = NOVALUE;
    object _23727 = NOVALUE;
    object _23726 = NOVALUE;
    object _23719 = NOVALUE;
    object _23718 = NOVALUE;
    object _23713 = NOVALUE;
    object _23712 = NOVALUE;
    object _23707 = NOVALUE;
    object _23706 = NOVALUE;
    object _23703 = NOVALUE;
    object _23702 = NOVALUE;
    object _23690 = NOVALUE;
    object _23689 = NOVALUE;
    object _23674 = NOVALUE;
    object _23673 = NOVALUE;
    object _23665 = NOVALUE;
    object _23663 = NOVALUE;
    object _23662 = NOVALUE;
    object _23661 = NOVALUE;
    object _23660 = NOVALUE;
    object _23656 = NOVALUE;
    object _23655 = NOVALUE;
    object _23641 = NOVALUE;
    object _23640 = NOVALUE;
    object _23637 = NOVALUE;
    object _23625 = NOVALUE;
    object _23623 = NOVALUE;
    object _23622 = NOVALUE;
    object _23621 = NOVALUE;
    object _23620 = NOVALUE;
    object _23619 = NOVALUE;
    object _23618 = NOVALUE;
    object _23617 = NOVALUE;
    object _23616 = NOVALUE;
    object _23615 = NOVALUE;
    object _23614 = NOVALUE;
    object _23609 = NOVALUE;
    object _23606 = NOVALUE;
    object _23605 = NOVALUE;
    object _23604 = NOVALUE;
    object _23601 = NOVALUE;
    object _23600 = NOVALUE;
    object _23599 = NOVALUE;
    object _23596 = NOVALUE;
    object _23592 = NOVALUE;
    object _23591 = NOVALUE;
    object _23589 = NOVALUE;
    object _23588 = NOVALUE;
    object _23587 = NOVALUE;
    object _23586 = NOVALUE;
    object _23579 = NOVALUE;
    object _23578 = NOVALUE;
    object _23577 = NOVALUE;
    object _23576 = NOVALUE;
    object _23575 = NOVALUE;
    object _23574 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:373			c_exe   = "",*/
    RefDS(_21928);
    DeRef(_c_exe_45011);
    _c_exe_45011 = _21928;

    /** buildsys.e:374			c_flags = "",*/
    RefDS(_21928);
    DeRef(_c_flags_45012);
    _c_flags_45012 = _21928;

    /** buildsys.e:375			l_exe   = "",*/
    RefDS(_21928);
    DeRef(_l_exe_45013);
    _l_exe_45013 = _21928;

    /** buildsys.e:376			l_flags = "",*/
    RefDS(_21928);
    DeRefi(_l_flags_45014);
    _l_flags_45014 = _21928;

    /** buildsys.e:377			obj_ext = "",*/
    RefDS(_21928);
    DeRefi(_obj_ext_45015);
    _obj_ext_45015 = _21928;

    /** buildsys.e:378			exe_ext = "",*/
    RefDS(_21928);
    DeRefi(_exe_ext_45016);
    _exe_ext_45016 = _21928;

    /** buildsys.e:379			l_flags_begin = "",*/
    RefDS(_21928);
    DeRefi(_l_flags_begin_45017);
    _l_flags_begin_45017 = _21928;

    /** buildsys.e:380			rc_comp = "",*/
    RefDS(_21928);
    DeRef(_rc_comp_45018);
    _rc_comp_45018 = _21928;

    /** buildsys.e:385		if dll_option*/
    if (_60dll_option_42089 == 0) {
        _23574 = 0;
        goto L1; // [61] 78
    }
    _23575 = 0;
    _23576 = (0 > 0);
    _23575 = NOVALUE;
    _23574 = (_23576 != 0);
L1: 
    if (_23574 == 0) {
        goto L2; // [78] 101
    }
    _23578 = (0 == 0);
    if (_23578 == 0)
    {
        DeRef(_23578);
        _23578 = NOVALUE;
        goto L2; // [88] 101
    }
    else{
        DeRef(_23578);
        _23578 = NOVALUE;
    }

    /** buildsys.e:388			user_library = user_pic_library*/
    RefDS(_60user_pic_library_42102);
    DeRef(_60user_library_42101);
    _60user_library_42101 = _60user_pic_library_42102;
L2: 

    /** buildsys.e:391		if length(user_library) = 0 then*/
    if (IS_SEQUENCE(_60user_library_42101)){
            _23579 = SEQ_PTR(_60user_library_42101)->length;
    }
    else {
        _23579 = 1;
    }
    if (_23579 != 0)
    goto L3; // [108] 456

    /** buildsys.e:392			if debug_option then*/
    if (_60debug_option_42099 == 0)
    {
        goto L4; // [116] 128
    }
    else{
    }

    /** buildsys.e:393				l_names = { "eudbg", "eu" }*/
    RefDS(_23582);
    RefDS(_23581);
    DeRef(_l_names_45019);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23581;
    ((intptr_t *)_2)[2] = _23582;
    _l_names_45019 = MAKE_SEQ(_1);
    goto L5; // [125] 135
L4: 

    /** buildsys.e:395				l_names = { "eu", "eudbg" }*/
    RefDS(_23581);
    RefDS(_23582);
    DeRef(_l_names_45019);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23582;
    ((intptr_t *)_2)[2] = _23581;
    _l_names_45019 = MAKE_SEQ(_1);
L5: 

    /** buildsys.e:400			if TUNIX or compiler_type = COMPILER_GCC then*/
    if (_43TUNIX_21592 != 0) {
        goto L6; // [139] 154
    }
    _23586 = (0 == 1);
    if (_23586 == 0)
    {
        DeRef(_23586);
        _23586 = NOVALUE;
        goto L7; // [150] 224
    }
    else{
        DeRef(_23586);
        _23586 = NOVALUE;
    }
L6: 

    /** buildsys.e:401				l_ext = "a"*/
    RefDS(_22209);
    DeRefi(_l_ext_45020);
    _l_ext_45020 = _22209;

    /** buildsys.e:402				t_slash = "/"*/
    RefDS(_23504);
    DeRefi(_t_slash_45021);
    _t_slash_45021 = _23504;

    /** buildsys.e:403				if dll_option and not TWINDOWS then*/
    if (_60dll_option_42089 == 0) {
        goto L8; // [172] 247
    }
    _23588 = (0 == 0);
    if (_23588 == 0)
    {
        DeRef(_23588);
        _23588 = NOVALUE;
        goto L8; // [182] 247
    }
    else{
        DeRef(_23588);
        _23588 = NOVALUE;
    }

    /** buildsys.e:404					for i = 1 to length( l_names ) do*/
    if (IS_SEQUENCE(_l_names_45019)){
            _23589 = SEQ_PTR(_l_names_45019)->length;
    }
    else {
        _23589 = 1;
    }
    {
        object _i_45054;
        _i_45054 = 1;
L9: 
        if (_i_45054 > _23589){
            goto LA; // [192] 220
        }

        /** buildsys.e:406						l_names[i] &= "so"*/
        _2 = (object)SEQ_PTR(_l_names_45019);
        _23591 = (object)*(((s1_ptr)_2)->base + _i_45054);
        if (IS_SEQUENCE(_23591) && IS_ATOM(_23590)) {
        }
        else if (IS_ATOM(_23591) && IS_SEQUENCE(_23590)) {
            Ref(_23591);
            Prepend(&_23592, _23590, _23591);
        }
        else {
            Concat((object_ptr)&_23592, _23591, _23590);
            _23591 = NOVALUE;
        }
        _23591 = NOVALUE;
        _2 = (object)SEQ_PTR(_l_names_45019);
        _2 = (object)(((s1_ptr)_2)->base + _i_45054);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _23592;
        if( _1 != _23592 ){
            DeRef(_1);
        }
        _23592 = NOVALUE;

        /** buildsys.e:407					end for*/
        _i_45054 = _i_45054 + 1;
        goto L9; // [215] 199
LA: 
        ;
    }
    goto L8; // [221] 247
L7: 

    /** buildsys.e:409			elsif TWINDOWS then*/
L8: 

    /** buildsys.e:414			object eudir = get_eucompiledir()*/
    _0 = _eudir_45063;
    _eudir_45063 = _60get_eucompiledir();
    DeRef(_0);

    /** buildsys.e:415			if not file_exists(eudir) then*/
    Ref(_eudir_45063);
    _23596 = _16file_exists(_eudir_45063);
    if (IS_ATOM_INT(_23596)) {
        if (_23596 != 0){
            DeRef(_23596);
            _23596 = NOVALUE;
            goto LB; // [258] 279
        }
    }
    else {
        if (DBL_PTR(_23596)->dbl != 0.0){
            DeRef(_23596);
            _23596 = NOVALUE;
            goto LB; // [258] 279
        }
    }
    DeRef(_23596);
    _23596 = NOVALUE;

    /** buildsys.e:416				printf(2,"Supplied directory \'%s\' is not a valid EUDIR\n",{get_eucompiledir()})*/
    _23599 = _60get_eucompiledir();
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23599;
    _23600 = MAKE_SEQ(_1);
    _23599 = NOVALUE;
    EPrintf(2, _23598, _23600);
    DeRefDS(_23600);
    _23600 = NOVALUE;

    /** buildsys.e:417				abort(1)*/
    UserCleanup(1);
LB: 

    /** buildsys.e:419			for tk = 1 to length(l_names) label "translation kind" do*/
    if (IS_SEQUENCE(_l_names_45019)){
            _23601 = SEQ_PTR(_l_names_45019)->length;
    }
    else {
        _23601 = 1;
    }
    {
        object _tk_45075;
        _tk_45075 = 1;
LC: 
        if (_tk_45075 > _23601){
            goto LD; // [286] 455
        }

        /** buildsys.e:420				user_library = eudir & sprintf("%sbin%s%s.%s",{t_slash, t_slash, l_names[tk],l_ext})*/
        _2 = (object)SEQ_PTR(_l_names_45019);
        _23604 = (object)*(((s1_ptr)_2)->base + _tk_45075);
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        RefDSn(_t_slash_45021, 2);
        ((intptr_t*)_2)[1] = _t_slash_45021;
        ((intptr_t*)_2)[2] = _t_slash_45021;
        Ref(_23604);
        ((intptr_t*)_2)[3] = _23604;
        RefDS(_l_ext_45020);
        ((intptr_t*)_2)[4] = _l_ext_45020;
        _23605 = MAKE_SEQ(_1);
        _23604 = NOVALUE;
        _23606 = EPrintf(-9999999, _23603, _23605);
        DeRefDS(_23605);
        _23605 = NOVALUE;
        if (IS_SEQUENCE(_eudir_45063) && IS_ATOM(_23606)) {
        }
        else if (IS_ATOM(_eudir_45063) && IS_SEQUENCE(_23606)) {
            Ref(_eudir_45063);
            Prepend(&_60user_library_42101, _23606, _eudir_45063);
        }
        else {
            Concat((object_ptr)&_60user_library_42101, _eudir_45063, _23606);
        }
        DeRefDS(_23606);
        _23606 = NOVALUE;

        /** buildsys.e:421				if TUNIX or compiler_type = COMPILER_GCC then*/
        if (_43TUNIX_21592 != 0) {
            goto LE; // [324] 339
        }
        _23609 = (0 == 1);
        if (_23609 == 0)
        {
            DeRef(_23609);
            _23609 = NOVALUE;
            goto LF; // [335] 430
        }
        else{
            DeRef(_23609);
            _23609 = NOVALUE;
        }
LE: 

        /** buildsys.e:422					ifdef UNIX then*/

        /** buildsys.e:423						sequence locations = { "/usr/local/lib/%s.a", "/usr/lib/%s.a"}*/
        RefDS(_23611);
        RefDS(_23610);
        DeRef(_locations_45088);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23610;
        ((intptr_t *)_2)[2] = _23611;
        _locations_45088 = MAKE_SEQ(_1);

        /** buildsys.e:424						if match( "/share/euphoria", eudir ) then*/
        _23614 = e_match_from(_23613, _eudir_45063, 1);
        if (_23614 == 0)
        {
            _23614 = NOVALUE;
            goto L10; // [354] 429
        }
        else{
            _23614 = NOVALUE;
        }

        /** buildsys.e:426							for i = 1 to length(locations) do*/
        _23615 = 2;
        {
            object _i_45096;
            _i_45096 = 1;
L11: 
            if (_i_45096 > 2){
                goto L12; // [362] 428
            }

            /** buildsys.e:427								if file_exists( sprintf(locations[i],{l_names[tk]}) ) then*/
            _2 = (object)SEQ_PTR(_locations_45088);
            _23616 = (object)*(((s1_ptr)_2)->base + _i_45096);
            _2 = (object)SEQ_PTR(_l_names_45019);
            _23617 = (object)*(((s1_ptr)_2)->base + _tk_45075);
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23617);
            ((intptr_t*)_2)[1] = _23617;
            _23618 = MAKE_SEQ(_1);
            _23617 = NOVALUE;
            _23619 = EPrintf(-9999999, _23616, _23618);
            _23616 = NOVALUE;
            DeRefDS(_23618);
            _23618 = NOVALUE;
            _23620 = _16file_exists(_23619);
            _23619 = NOVALUE;
            if (_23620 == 0) {
                DeRef(_23620);
                _23620 = NOVALUE;
                goto L13; // [391] 421
            }
            else {
                if (!IS_ATOM_INT(_23620) && DBL_PTR(_23620)->dbl == 0.0){
                    DeRef(_23620);
                    _23620 = NOVALUE;
                    goto L13; // [391] 421
                }
                DeRef(_23620);
                _23620 = NOVALUE;
            }
            DeRef(_23620);
            _23620 = NOVALUE;

            /** buildsys.e:428									user_library = sprintf(locations[i],{l_names[tk]})*/
            _2 = (object)SEQ_PTR(_locations_45088);
            _23621 = (object)*(((s1_ptr)_2)->base + _i_45096);
            _2 = (object)SEQ_PTR(_l_names_45019);
            _23622 = (object)*(((s1_ptr)_2)->base + _tk_45075);
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_23622);
            ((intptr_t*)_2)[1] = _23622;
            _23623 = MAKE_SEQ(_1);
            _23622 = NOVALUE;
            DeRef(_60user_library_42101);
            _60user_library_42101 = EPrintf(-9999999, _23621, _23623);
            _23621 = NOVALUE;
            DeRefDS(_23623);
            _23623 = NOVALUE;

            /** buildsys.e:429									exit "translation kind"*/
            DeRefDS(_locations_45088);
            _locations_45088 = NOVALUE;
            goto LD; // [418] 455
L13: 

            /** buildsys.e:431							end for*/
            _i_45096 = _i_45096 + 1;
            goto L11; // [423] 369
L12: 
            ;
        }
L10: 
LF: 
        DeRef(_locations_45088);
        _locations_45088 = NOVALUE;

        /** buildsys.e:436				if file_exists(user_library) then*/
        RefDS(_60user_library_42101);
        _23625 = _16file_exists(_60user_library_42101);
        if (_23625 == 0) {
            DeRef(_23625);
            _23625 = NOVALUE;
            goto L14; // [440] 448
        }
        else {
            if (!IS_ATOM_INT(_23625) && DBL_PTR(_23625)->dbl == 0.0){
                DeRef(_23625);
                _23625 = NOVALUE;
                goto L14; // [440] 448
            }
            DeRef(_23625);
            _23625 = NOVALUE;
        }
        DeRef(_23625);
        _23625 = NOVALUE;

        /** buildsys.e:437					exit "translation kind"*/
        goto LD; // [445] 455
L14: 

        /** buildsys.e:439			end for -- tk*/
        _tk_45075 = _tk_45075 + 1;
        goto LC; // [450] 293
LD: 
        ;
    }
L3: 
    DeRef(_eudir_45063);
    _eudir_45063 = NOVALUE;

    /** buildsys.e:441		user_library = adjust_for_build_file(user_library)*/
    RefDS(_60user_library_42101);
    _0 = _58adjust_for_build_file(_60user_library_42101);
    DeRefDS(_60user_library_42101);
    _60user_library_42101 = _0;

    /** buildsys.e:443		if TWINDOWS then*/

    /** buildsys.e:455		elsif TOSX then*/

    /** buildsys.e:460			if dll_option then*/
    if (_60dll_option_42089 == 0)
    {
        goto L15; // [556] 567
    }
    else{
    }

    /** buildsys.e:461				exe_ext = ".so"*/
    RefDS(_23635);
    DeRefi(_exe_ext_45016);
    _exe_ext_45016 = _23635;
L15: 

    /** buildsys.e:465		object compile_dir = get_eucompiledir()*/
    _0 = _compile_dir_45140;
    _compile_dir_45140 = _60get_eucompiledir();
    DeRef(_0);

    /** buildsys.e:466		if not file_exists(compile_dir) then*/
    Ref(_compile_dir_45140);
    _23637 = _16file_exists(_compile_dir_45140);
    if (IS_ATOM_INT(_23637)) {
        if (_23637 != 0){
            DeRef(_23637);
            _23637 = NOVALUE;
            goto L16; // [579] 600
        }
    }
    else {
        if (DBL_PTR(_23637)->dbl != 0.0){
            DeRef(_23637);
            _23637 = NOVALUE;
            goto L16; // [579] 600
        }
    }
    DeRef(_23637);
    _23637 = NOVALUE;

    /** buildsys.e:467			printf(2,"Couldn't get include directory '%s'",{get_eucompiledir()})*/
    _23640 = _60get_eucompiledir();
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23640;
    _23641 = MAKE_SEQ(_1);
    _23640 = NOVALUE;
    EPrintf(2, _23639, _23641);
    DeRefDS(_23641);
    _23641 = NOVALUE;

    /** buildsys.e:468			abort(1)*/
    UserCleanup(1);
L16: 

    /** buildsys.e:471		integer bits = 32*/
    _bits_45151 = 32;

    /** buildsys.e:472		if TX86_64 then*/

    /** buildsys.e:476		switch compiler_type do*/
    _0 = 0;
    switch ( _0 ){ 

        /** buildsys.e:477			case COMPILER_GCC then*/
        case 1:

        /** buildsys.e:478				c_exe = compiler_prefix & "gcc"*/
        Concat((object_ptr)&_c_exe_45011, _58compiler_prefix_44897, _23644);

        /** buildsys.e:479				l_exe = compiler_prefix & "gcc"*/
        Concat((object_ptr)&_l_exe_45013, _58compiler_prefix_44897, _23644);

        /** buildsys.e:480				obj_ext = "o"*/
        RefDS(_23647);
        DeRefi(_obj_ext_45015);
        _obj_ext_45015 = _23647;

        /** buildsys.e:482				sequence m_flag = ""*/
        RefDS(_21928);
        DeRefi(_m_flag_45161);
        _m_flag_45161 = _21928;

        /** buildsys.e:483				if not TARM then*/

        /** buildsys.e:485					m_flag = sprintf( "-m%d", bits )*/
        DeRefDSi(_m_flag_45161);
        _m_flag_45161 = EPrintf(-9999999, _23649, _bits_45151);

        /** buildsys.e:488				if debug_option then*/
        if (_60debug_option_42099 == 0)
        {
            goto L17; // [679] 691
        }
        else{
        }

        /** buildsys.e:489					c_flags &= " -g3"*/
        Concat((object_ptr)&_c_flags_45012, _c_flags_45012, _23651);
        goto L18; // [688] 698
L17: 

        /** buildsys.e:491					c_flags &= " -fomit-frame-pointer"*/
        Concat((object_ptr)&_c_flags_45012, _c_flags_45012, _23653);
L18: 

        /** buildsys.e:494				if dll_option and not TWINDOWS then*/
        if (_60dll_option_42089 == 0) {
            goto L19; // [702] 722
        }
        _23656 = (0 == 0);
        if (_23656 == 0)
        {
            DeRef(_23656);
            _23656 = NOVALUE;
            goto L19; // [712] 722
        }
        else{
            DeRef(_23656);
            _23656 = NOVALUE;
        }

        /** buildsys.e:495					c_flags &= " -fPIC"*/
        Concat((object_ptr)&_c_flags_45012, _c_flags_45012, _23657);
L19: 

        /** buildsys.e:498				c_flags &= sprintf(" -c -w -fsigned-char -O2 %s -I%s -ffast-math",*/
        _23660 = _60get_eucompiledir();
        _23661 = _58adjust_for_build_file(_23660);
        _23660 = NOVALUE;
        RefDS(_m_flag_45161);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _m_flag_45161;
        ((intptr_t *)_2)[2] = _23661;
        _23662 = MAKE_SEQ(_1);
        _23661 = NOVALUE;
        _23663 = EPrintf(-9999999, _23659, _23662);
        DeRefDS(_23662);
        _23662 = NOVALUE;
        Concat((object_ptr)&_c_flags_45012, _c_flags_45012, _23663);
        DeRefDS(_23663);
        _23663 = NOVALUE;

        /** buildsys.e:501				if TWINDOWS and mno_cygwin then*/
        if (0 == 0) {
            goto L1A; // [747] 764
        }
        goto L1A; // [754] 764

        /** buildsys.e:504					c_flags &= " -mno-cygwin"*/
        Concat((object_ptr)&_c_flags_45012, _c_flags_45012, _23666);
L1A: 

        /** buildsys.e:507				if build_system_type != BUILD_DIRECT then*/

        /** buildsys.e:510					l_flags = sprintf( " %s %s",*/
        RefDS(_60user_library_42101);
        _23673 = _58adjust_for_command_line_passing(_60user_library_42101);
        RefDS(_m_flag_45161);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23673;
        ((intptr_t *)_2)[2] = _m_flag_45161;
        _23674 = MAKE_SEQ(_1);
        _23673 = NOVALUE;
        DeRefi(_l_flags_45014);
        _l_flags_45014 = EPrintf(-9999999, _23672, _23674);
        DeRefDS(_23674);
        _23674 = NOVALUE;

        /** buildsys.e:514				if dll_option then*/
        if (_60dll_option_42089 == 0)
        {
            goto L1B; // [806] 816
        }
        else{
        }

        /** buildsys.e:515					l_flags &= " -shared "*/
        Concat((object_ptr)&_l_flags_45014, _l_flags_45014, _23676);
L1B: 

        /** buildsys.e:518				if TLINUX then*/
        if (_43TLINUX_21590 == 0)
        {
            goto L1C; // [820] 832
        }
        else{
        }

        /** buildsys.e:519					l_flags &= " -ldl -lm -lpthread"*/
        Concat((object_ptr)&_l_flags_45014, _l_flags_45014, _23678);
        goto L1D; // [829] 901
L1C: 

        /** buildsys.e:520				elsif TBSD then*/

        /** buildsys.e:522				elsif TOSX then*/

        /** buildsys.e:524				elsif TWINDOWS then*/
L1D: 

        /** buildsys.e:537				rc_comp = compiler_prefix & "windres -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" [1] -O coff -o [2]"*/
        _23689 = _16current_dir();
        _23690 = _58adjust_for_build_file(_23689);
        _23689 = NOVALUE;
        {
            object concat_list[4];

            concat_list[0] = _23691;
            concat_list[1] = _23690;
            concat_list[2] = _23688;
            concat_list[3] = _58compiler_prefix_44897;
            Concat_N((object_ptr)&_rc_comp_45018, concat_list, 4);
        }
        DeRef(_23690);
        _23690 = NOVALUE;
        DeRefi(_m_flag_45161);
        _m_flag_45161 = NOVALUE;
        goto L1E; // [921] 1125

        /** buildsys.e:539			case COMPILER_WATCOM then*/
        case 2:

        /** buildsys.e:540				c_exe = compiler_prefix & "wcc386"*/
        Concat((object_ptr)&_c_exe_45011, _58compiler_prefix_44897, _23693);

        /** buildsys.e:541				l_exe = compiler_prefix & "wlink"*/
        Concat((object_ptr)&_l_exe_45013, _58compiler_prefix_44897, _23695);

        /** buildsys.e:542				obj_ext = "obj"*/
        RefDS(_23697);
        DeRefi(_obj_ext_45015);
        _obj_ext_45015 = _23697;

        /** buildsys.e:544				if debug_option then*/
        if (_60debug_option_42099 == 0)
        {
            goto L1F; // [954] 971
        }
        else{
        }

        /** buildsys.e:545					c_flags = " /d3"*/
        RefDS(_23698);
        DeRef(_c_flags_45012);
        _c_flags_45012 = _23698;

        /** buildsys.e:546					l_flags_begin &= " DEBUG ALL "*/
        Concat((object_ptr)&_l_flags_begin_45017, _l_flags_begin_45017, _23699);
L1F: 

        /** buildsys.e:549				l_flags &= sprintf(" OPTION STACK=%d ", { total_stack_size })*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _60total_stack_size_42104;
        _23702 = MAKE_SEQ(_1);
        _23703 = EPrintf(-9999999, _23701, _23702);
        DeRefDS(_23702);
        _23702 = NOVALUE;
        Concat((object_ptr)&_l_flags_45014, _l_flags_45014, _23703);
        DeRefDS(_23703);
        _23703 = NOVALUE;

        /** buildsys.e:550				l_flags &= sprintf(" COMMIT STACK=%d ", { total_stack_size })*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _60total_stack_size_42104;
        _23706 = MAKE_SEQ(_1);
        _23707 = EPrintf(-9999999, _23705, _23706);
        DeRefDS(_23706);
        _23706 = NOVALUE;
        Concat((object_ptr)&_l_flags_45014, _l_flags_45014, _23707);
        DeRefDS(_23707);
        _23707 = NOVALUE;

        /** buildsys.e:551				l_flags &= " OPTION QUIET OPTION ELIMINATE OPTION CASEEXACT"*/
        Concat((object_ptr)&_l_flags_45014, _l_flags_45014, _23709);

        /** buildsys.e:553				if dll_option then*/
        if (_60dll_option_42089 == 0)
        {
            goto L20; // [1013] 1039
        }
        else{
        }

        /** buildsys.e:554					c_flags &= " /bd /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir) */
        Ref(_compile_dir_45140);
        _23712 = _58adjust_for_build_file(_compile_dir_45140);
        if (IS_SEQUENCE(_23711) && IS_ATOM(_23712)) {
            Ref(_23712);
            Append(&_23713, _23711, _23712);
        }
        else if (IS_ATOM(_23711) && IS_SEQUENCE(_23712)) {
        }
        else {
            Concat((object_ptr)&_23713, _23711, _23712);
        }
        DeRef(_23712);
        _23712 = NOVALUE;
        Concat((object_ptr)&_c_flags_45012, _c_flags_45012, _23713);
        DeRefDS(_23713);
        _23713 = NOVALUE;

        /** buildsys.e:555					l_flags &= " SYSTEM NT_DLL initinstance terminstance"*/
        Concat((object_ptr)&_l_flags_45014, _l_flags_45014, _23715);
        goto L21; // [1036] 1077
L20: 

        /** buildsys.e:557					c_flags &= " /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s /I" & adjust_for_build_file(compile_dir)*/
        Ref(_compile_dir_45140);
        _23718 = _58adjust_for_build_file(_compile_dir_45140);
        if (IS_SEQUENCE(_23717) && IS_ATOM(_23718)) {
            Ref(_23718);
            Append(&_23719, _23717, _23718);
        }
        else if (IS_ATOM(_23717) && IS_SEQUENCE(_23718)) {
        }
        else {
            Concat((object_ptr)&_23719, _23717, _23718);
        }
        DeRef(_23718);
        _23718 = NOVALUE;
        Concat((object_ptr)&_c_flags_45012, _c_flags_45012, _23719);
        DeRefDS(_23719);
        _23719 = NOVALUE;

        /** buildsys.e:558					if con_option then*/
        if (_60con_option_42091 == 0)
        {
            goto L22; // [1057] 1069
        }
        else{
        }

        /** buildsys.e:560						l_flags = " SYSTEM NT" & l_flags*/
        Concat((object_ptr)&_l_flags_45014, _23721, _l_flags_45014);
        goto L23; // [1066] 1076
L22: 

        /** buildsys.e:562						l_flags = " SYSTEM NT_WIN RUNTIME WINDOWS=4.0" & l_flags*/
        Concat((object_ptr)&_l_flags_45014, _23723, _l_flags_45014);
L23: 
L21: 

        /** buildsys.e:566				l_flags &= sprintf(" FILE %s", { (user_library) })*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_60user_library_42101);
        ((intptr_t*)_2)[1] = _60user_library_42101;
        _23726 = MAKE_SEQ(_1);
        _23727 = EPrintf(-9999999, _23725, _23726);
        DeRefDS(_23726);
        _23726 = NOVALUE;
        Concat((object_ptr)&_l_flags_45014, _l_flags_45014, _23727);
        DeRefDS(_23727);
        _23727 = NOVALUE;

        /** buildsys.e:570				rc_comp = compiler_prefix &"wrc -DSRCDIR=\"" & adjust_for_build_file(current_dir()) & "\" -q -fo=[2] -ad [1] [3]"*/
        _23730 = _16current_dir();
        _23731 = _58adjust_for_build_file(_23730);
        _23730 = NOVALUE;
        {
            object concat_list[4];

            concat_list[0] = _23732;
            concat_list[1] = _23731;
            concat_list[2] = _23729;
            concat_list[3] = _58compiler_prefix_44897;
            Concat_N((object_ptr)&_rc_comp_45018, concat_list, 4);
        }
        DeRef(_23731);
        _23731 = NOVALUE;
        goto L1E; // [1111] 1125

        /** buildsys.e:571			case else*/
        default:

        /** buildsys.e:572				CompileErr(43)*/
        RefDS(_21928);
        _52CompileErr(43, _21928, 0);
    ;}L1E: 

    /** buildsys.e:575		if length(cflags) then*/
    _23734 = 0;

    /** buildsys.e:580		if length(extra_cflags) then*/
    _23735 = 0;

    /** buildsys.e:584		if length(lflags) then*/
    _23738 = 0;

    /** buildsys.e:589		if length(extra_lflags) then*/
    _23739 = 0;

    /** buildsys.e:593		return { */
    _1 = NewS1(9);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_c_exe_45011);
    ((intptr_t*)_2)[1] = _c_exe_45011;
    RefDS(_c_flags_45012);
    ((intptr_t*)_2)[2] = _c_flags_45012;
    RefDS(_l_exe_45013);
    ((intptr_t*)_2)[3] = _l_exe_45013;
    RefDS(_l_flags_45014);
    ((intptr_t*)_2)[4] = _l_flags_45014;
    RefDS(_obj_ext_45015);
    ((intptr_t*)_2)[5] = _obj_ext_45015;
    RefDS(_exe_ext_45016);
    ((intptr_t*)_2)[6] = _exe_ext_45016;
    RefDS(_l_flags_begin_45017);
    ((intptr_t*)_2)[7] = _l_flags_begin_45017;
    RefDS(_rc_comp_45018);
    ((intptr_t*)_2)[8] = _rc_comp_45018;
    RefDS(_60user_library_42101);
    ((intptr_t*)_2)[9] = _60user_library_42101;
    _23742 = MAKE_SEQ(_1);
    DeRefDS(_c_exe_45011);
    DeRefDS(_c_flags_45012);
    DeRefDS(_l_exe_45013);
    DeRefDSi(_l_flags_45014);
    DeRefDSi(_obj_ext_45015);
    DeRefDSi(_exe_ext_45016);
    DeRefDSi(_l_flags_begin_45017);
    DeRefDS(_rc_comp_45018);
    DeRef(_l_names_45019);
    DeRefi(_l_ext_45020);
    DeRefi(_t_slash_45021);
    DeRef(_compile_dir_45140);
    DeRef(_23576);
    _23576 = NOVALUE;
    return _23742;
    ;
}


void _58ensure_exename(object _ext_45307)
{
    object _23749 = NOVALUE;
    object _23748 = NOVALUE;
    object _23747 = NOVALUE;
    object _23746 = NOVALUE;
    object _23744 = NOVALUE;
    object _23743 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:602		if length(exe_name[D_ALTNAME]) = 0 then*/
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _23743 = (object)*(((s1_ptr)_2)->base + 11);
    if (IS_SEQUENCE(_23743)){
            _23744 = SEQ_PTR(_23743)->length;
    }
    else {
        _23744 = 1;
    }
    _23743 = NOVALUE;
    if (_23744 != 0)
    goto L1; // [16] 67

    /** buildsys.e:603			exe_name[D_NAME] = current_dir() & SLASH & file0 & ext*/
    _23746 = _16current_dir();
    {
        object concat_list[4];

        concat_list[0] = _ext_45307;
        concat_list[1] = _60file0_44056;
        concat_list[2] = 47;
        concat_list[3] = _23746;
        Concat_N((object_ptr)&_23747, concat_list, 4);
    }
    DeRef(_23746);
    _23746 = NOVALUE;
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23747;
    if( _1 != _23747 ){
        DeRef(_1);
    }
    _23747 = NOVALUE;

    /** buildsys.e:604			exe_name[D_ALTNAME] = adjust_for_command_line_passing(exe_name[D_NAME])*/
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _23748 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_23748);
    _23749 = _58adjust_for_command_line_passing(_23748);
    _23748 = NOVALUE;
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23749;
    if( _1 != _23749 ){
        DeRef(_1);
    }
    _23749 = NOVALUE;
L1: 

    /** buildsys.e:606	end procedure*/
    DeRefDS(_ext_45307);
    _23743 = NOVALUE;
    return;
    ;
}


void _58write_objlink_file()
{
    object _settings_45325 = NOVALUE;
    object _fh_45327 = NOVALUE;
    object _s_45375 = NOVALUE;
    object _23798 = NOVALUE;
    object _23796 = NOVALUE;
    object _23795 = NOVALUE;
    object _23794 = NOVALUE;
    object _23793 = NOVALUE;
    object _23792 = NOVALUE;
    object _23791 = NOVALUE;
    object _23790 = NOVALUE;
    object _23789 = NOVALUE;
    object _23788 = NOVALUE;
    object _23787 = NOVALUE;
    object _23786 = NOVALUE;
    object _23785 = NOVALUE;
    object _23783 = NOVALUE;
    object _23782 = NOVALUE;
    object _23781 = NOVALUE;
    object _23780 = NOVALUE;
    object _23778 = NOVALUE;
    object _23777 = NOVALUE;
    object _23776 = NOVALUE;
    object _23775 = NOVALUE;
    object _23774 = NOVALUE;
    object _23773 = NOVALUE;
    object _23767 = NOVALUE;
    object _23766 = NOVALUE;
    object _23763 = NOVALUE;
    object _23762 = NOVALUE;
    object _23761 = NOVALUE;
    object _23760 = NOVALUE;
    object _23759 = NOVALUE;
    object _23757 = NOVALUE;
    object _23756 = NOVALUE;
    object _23755 = NOVALUE;
    object _23752 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:612		sequence settings = setup_build()*/
    _0 = _settings_45325;
    _settings_45325 = _58setup_build();
    DeRef(_0);

    /** buildsys.e:613		integer fh = open(output_dir & file0 & ".lnk", "wb")*/
    {
        object concat_list[3];

        concat_list[0] = _23751;
        concat_list[1] = _60file0_44056;
        concat_list[2] = _60output_dir_42103;
        Concat_N((object_ptr)&_23752, concat_list, 3);
    }
    _fh_45327 = EOpen(_23752, _23753, 0);
    DeRefDS(_23752);
    _23752 = NOVALUE;

    /** buildsys.e:615		ensure_exename(settings[SETUP_EXE_EXT])*/
    _2 = (object)SEQ_PTR(_settings_45325);
    _23755 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_23755);
    _58ensure_exename(_23755);
    _23755 = NOVALUE;

    /** buildsys.e:617		if length(settings[SETUP_LFLAGS_BEGIN]) > 0 then*/
    _2 = (object)SEQ_PTR(_settings_45325);
    _23756 = (object)*(((s1_ptr)_2)->base + 7);
    if (IS_SEQUENCE(_23756)){
            _23757 = SEQ_PTR(_23756)->length;
    }
    else {
        _23757 = 1;
    }
    _23756 = NOVALUE;
    if (_23757 <= 0)
    goto L1; // [43] 63

    /** buildsys.e:618			puts(fh, settings[SETUP_LFLAGS_BEGIN] & HOSTNL)*/
    _2 = (object)SEQ_PTR(_settings_45325);
    _23759 = (object)*(((s1_ptr)_2)->base + 7);
    if (IS_SEQUENCE(_23759) && IS_ATOM(_43HOSTNL_21610)) {
    }
    else if (IS_ATOM(_23759) && IS_SEQUENCE(_43HOSTNL_21610)) {
        Ref(_23759);
        Prepend(&_23760, _43HOSTNL_21610, _23759);
    }
    else {
        Concat((object_ptr)&_23760, _23759, _43HOSTNL_21610);
        _23759 = NOVALUE;
    }
    _23759 = NOVALUE;
    EPuts(_fh_45327, _23760); // DJP 
    DeRefDS(_23760);
    _23760 = NOVALUE;
L1: 

    /** buildsys.e:621		for i = 1 to length(generated_files) do*/
    if (IS_SEQUENCE(_60generated_files_42093)){
            _23761 = SEQ_PTR(_60generated_files_42093)->length;
    }
    else {
        _23761 = 1;
    }
    {
        object _i_45343;
        _i_45343 = 1;
L2: 
        if (_i_45343 > _23761){
            goto L3; // [70] 132
        }

        /** buildsys.e:622			if match(".o", generated_files[i]) then*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23762 = (object)*(((s1_ptr)_2)->base + _i_45343);
        _23763 = e_match_from(_23080, _23762, 1);
        _23762 = NOVALUE;
        if (_23763 == 0)
        {
            _23763 = NOVALUE;
            goto L4; // [90] 125
        }
        else{
            _23763 = NOVALUE;
        }

        /** buildsys.e:623				if compiler_type = COMPILER_WATCOM then*/

        /** buildsys.e:627				puts(fh, generated_files[i] & HOSTNL)*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23766 = (object)*(((s1_ptr)_2)->base + _i_45343);
        Concat((object_ptr)&_23767, _23766, _43HOSTNL_21610);
        _23766 = NOVALUE;
        _23766 = NOVALUE;
        EPuts(_fh_45327, _23767); // DJP 
        DeRefDS(_23767);
        _23767 = NOVALUE;
L4: 

        /** buildsys.e:629		end for*/
        _i_45343 = _i_45343 + 1;
        goto L2; // [127] 77
L3: 
        ;
    }

    /** buildsys.e:631		if compiler_type = COMPILER_WATCOM then*/

    /** buildsys.e:635		puts(fh, trim(settings[SETUP_LFLAGS] & HOSTNL))*/
    _2 = (object)SEQ_PTR(_settings_45325);
    _23773 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_SEQUENCE(_23773) && IS_ATOM(_43HOSTNL_21610)) {
    }
    else if (IS_ATOM(_23773) && IS_SEQUENCE(_43HOSTNL_21610)) {
        Ref(_23773);
        Prepend(&_23774, _43HOSTNL_21610, _23773);
    }
    else {
        Concat((object_ptr)&_23774, _23773, _43HOSTNL_21610);
        _23773 = NOVALUE;
    }
    _23773 = NOVALUE;
    RefDS(_4749);
    _23775 = _13trim(_23774, _4749, 0);
    _23774 = NOVALUE;
    EPuts(_fh_45327, _23775); // DJP 
    DeRef(_23775);
    _23775 = NOVALUE;

    /** buildsys.e:637		if compiler_type = COMPILER_WATCOM and dll_option then*/
    _23776 = (0 == 2);
    if (_23776 == 0) {
        goto L5; // [194] 361
    }
    if (_60dll_option_42089 == 0)
    {
        goto L5; // [201] 361
    }
    else{
    }

    /** buildsys.e:638			puts(fh, HOSTNL)*/
    EPuts(_fh_45327, _43HOSTNL_21610); // DJP 

    /** buildsys.e:640			object s = SymTab[TopLevelSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _23778 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    DeRef(_s_45375);
    _2 = (object)SEQ_PTR(_23778);
    _s_45375 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45375);
    _23778 = NOVALUE;

    /** buildsys.e:641			while s do*/
L6: 
    if (_s_45375 <= 0) {
        if (_s_45375 == 0) {
            goto L7; // [232] 360
        }
        else {
            if (!IS_ATOM_INT(_s_45375) && DBL_PTR(_s_45375)->dbl == 0.0){
                goto L7; // [232] 360
            }
        }
    }

    /** buildsys.e:642				if eu:find(SymTab[s][S_TOKEN], RTN_TOKS) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_s_45375)){
        _23780 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45375)->dbl));
    }
    else{
        _23780 = (object)*(((s1_ptr)_2)->base + _s_45375);
    }
    _2 = (object)SEQ_PTR(_23780);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _23781 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _23781 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _23780 = NOVALUE;
    _23782 = find_from(_23781, _40RTN_TOKS_16423, 1);
    _23781 = NOVALUE;
    if (_23782 == 0)
    {
        _23782 = NOVALUE;
        goto L8; // [256] 341
    }
    else{
        _23782 = NOVALUE;
    }

    /** buildsys.e:643					if is_exported( s ) then*/
    Ref(_s_45375);
    _23783 = _60is_exported(_s_45375);
    if (_23783 == 0) {
        DeRef(_23783);
        _23783 = NOVALUE;
        goto L9; // [265] 340
    }
    else {
        if (!IS_ATOM_INT(_23783) && DBL_PTR(_23783)->dbl == 0.0){
            DeRef(_23783);
            _23783 = NOVALUE;
            goto L9; // [265] 340
        }
        DeRef(_23783);
        _23783 = NOVALUE;
    }
    DeRef(_23783);
    _23783 = NOVALUE;

    /** buildsys.e:644						printf(fh, "EXPORT %s='__%d%s@%d'" & HOSTNL,*/
    Concat((object_ptr)&_23785, _23784, _43HOSTNL_21610);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_s_45375)){
        _23786 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45375)->dbl));
    }
    else{
        _23786 = (object)*(((s1_ptr)_2)->base + _s_45375);
    }
    _2 = (object)SEQ_PTR(_23786);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _23787 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _23787 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _23786 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_s_45375)){
        _23788 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45375)->dbl));
    }
    else{
        _23788 = (object)*(((s1_ptr)_2)->base + _s_45375);
    }
    _2 = (object)SEQ_PTR(_23788);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _23789 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _23789 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _23788 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_s_45375)){
        _23790 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45375)->dbl));
    }
    else{
        _23790 = (object)*(((s1_ptr)_2)->base + _s_45375);
    }
    _2 = (object)SEQ_PTR(_23790);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _23791 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _23791 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _23790 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_s_45375)){
        _23792 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45375)->dbl));
    }
    else{
        _23792 = (object)*(((s1_ptr)_2)->base + _s_45375);
    }
    _2 = (object)SEQ_PTR(_23792);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _23793 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _23793 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _23792 = NOVALUE;
    if (IS_ATOM_INT(_23793)) {
        if (_23793 == (short)_23793){
            _23794 = _23793 * 4;
        }
        else{
            _23794 = NewDouble(_23793 * (eudouble)4);
        }
    }
    else {
        _23794 = binary_op(MULTIPLY, _23793, 4);
    }
    _23793 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23787);
    ((intptr_t*)_2)[1] = _23787;
    Ref(_23789);
    ((intptr_t*)_2)[2] = _23789;
    Ref(_23791);
    ((intptr_t*)_2)[3] = _23791;
    ((intptr_t*)_2)[4] = _23794;
    _23795 = MAKE_SEQ(_1);
    _23794 = NOVALUE;
    _23791 = NOVALUE;
    _23789 = NOVALUE;
    _23787 = NOVALUE;
    EPrintf(_fh_45327, _23785, _23795);
    DeRefDS(_23785);
    _23785 = NOVALUE;
    DeRefDS(_23795);
    _23795 = NOVALUE;
L9: 
L8: 

    /** buildsys.e:649				s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_s_45375)){
        _23796 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_s_45375)->dbl));
    }
    else{
        _23796 = (object)*(((s1_ptr)_2)->base + _s_45375);
    }
    DeRef(_s_45375);
    _2 = (object)SEQ_PTR(_23796);
    _s_45375 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_s_45375);
    _23796 = NOVALUE;

    /** buildsys.e:650			end while*/
    goto L6; // [357] 232
L7: 
L5: 
    DeRef(_s_45375);
    _s_45375 = NOVALUE;

    /** buildsys.e:653		close(fh)*/
    EClose(_fh_45327);

    /** buildsys.e:655		generated_files = append(generated_files, file0 & ".lnk")*/
    Concat((object_ptr)&_23798, _60file0_44056, _23751);
    RefDS(_23798);
    Append(&_60generated_files_42093, _60generated_files_42093, _23798);
    DeRefDS(_23798);
    _23798 = NOVALUE;

    /** buildsys.e:656	end procedure*/
    DeRef(_settings_45325);
    DeRef(_23776);
    _23776 = NOVALUE;
    _23756 = NOVALUE;
    return;
    ;
}


void _58write_makefile_srcobj_list(object _fh_45424)
{
    object _file_count_45454 = NOVALUE;
    object _23830 = NOVALUE;
    object _23829 = NOVALUE;
    object _23828 = NOVALUE;
    object _23826 = NOVALUE;
    object _23825 = NOVALUE;
    object _23824 = NOVALUE;
    object _23822 = NOVALUE;
    object _23821 = NOVALUE;
    object _23819 = NOVALUE;
    object _23818 = NOVALUE;
    object _23817 = NOVALUE;
    object _23816 = NOVALUE;
    object _23815 = NOVALUE;
    object _23814 = NOVALUE;
    object _23812 = NOVALUE;
    object _23811 = NOVALUE;
    object _23810 = NOVALUE;
    object _23806 = NOVALUE;
    object _23805 = NOVALUE;
    object _23804 = NOVALUE;
    object _23803 = NOVALUE;
    object _23802 = NOVALUE;
    object _23801 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:660		printf(fh, "%s_SOURCES =", { upper(file0) })*/
    RefDS(_60file0_44056);
    _23801 = _13upper(_60file0_44056);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23801;
    _23802 = MAKE_SEQ(_1);
    _23801 = NOVALUE;
    EPrintf(_fh_45424, _23800, _23802);
    DeRefDS(_23802);
    _23802 = NOVALUE;

    /** buildsys.e:661		for i = 1 to length(generated_files) do*/
    if (IS_SEQUENCE(_60generated_files_42093)){
            _23803 = SEQ_PTR(_60generated_files_42093)->length;
    }
    else {
        _23803 = 1;
    }
    {
        object _i_45431;
        _i_45431 = 1;
L1: 
        if (_i_45431 > _23803){
            goto L2; // [26] 94
        }

        /** buildsys.e:662			if generated_files[i][$] = 'c' then*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23804 = (object)*(((s1_ptr)_2)->base + _i_45431);
        if (IS_SEQUENCE(_23804)){
                _23805 = SEQ_PTR(_23804)->length;
        }
        else {
            _23805 = 1;
        }
        _2 = (object)SEQ_PTR(_23804);
        _23806 = (object)*(((s1_ptr)_2)->base + _23805);
        _23804 = NOVALUE;
        if (binary_op_a(NOTEQ, _23806, 99)){
            _23806 = NOVALUE;
            goto L3; // [48] 87
        }
        _23806 = NOVALUE;

        /** buildsys.e:663				if i > 1 then*/
        if (_i_45431 <= 1)
        goto L4; // [54] 71

        /** buildsys.e:664					printf(fh, " \\%s\t", { HOSTNL }  )*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_43HOSTNL_21610);
        ((intptr_t*)_2)[1] = _43HOSTNL_21610;
        _23810 = MAKE_SEQ(_1);
        EPrintf(_fh_45424, _23809, _23810);
        DeRefDS(_23810);
        _23810 = NOVALUE;
L4: 

        /** buildsys.e:666				puts(fh, " " & generated_files[i])*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23811 = (object)*(((s1_ptr)_2)->base + _i_45431);
        Concat((object_ptr)&_23812, _23320, _23811);
        _23811 = NOVALUE;
        EPuts(_fh_45424, _23812); // DJP 
        DeRefDS(_23812);
        _23812 = NOVALUE;
L3: 

        /** buildsys.e:668		end for*/
        _i_45431 = _i_45431 + 1;
        goto L1; // [89] 33
L2: 
        ;
    }

    /** buildsys.e:669		puts(fh, HOSTNL)*/
    EPuts(_fh_45424, _43HOSTNL_21610); // DJP 

    /** buildsys.e:671		printf(fh, "%s_OBJECTS =", { upper(file0) })*/
    RefDS(_60file0_44056);
    _23814 = _13upper(_60file0_44056);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23814;
    _23815 = MAKE_SEQ(_1);
    _23814 = NOVALUE;
    EPrintf(_fh_45424, _23813, _23815);
    DeRefDS(_23815);
    _23815 = NOVALUE;

    /** buildsys.e:672		integer file_count = 0*/
    _file_count_45454 = 0;

    /** buildsys.e:673		for i = 1 to length(generated_files) do*/
    if (IS_SEQUENCE(_60generated_files_42093)){
            _23816 = SEQ_PTR(_60generated_files_42093)->length;
    }
    else {
        _23816 = 1;
    }
    {
        object _i_45456;
        _i_45456 = 1;
L5: 
        if (_i_45456 > _23816){
            goto L6; // [129] 199
        }

        /** buildsys.e:674			if match(".o", generated_files[i]) then*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23817 = (object)*(((s1_ptr)_2)->base + _i_45456);
        _23818 = e_match_from(_23080, _23817, 1);
        _23817 = NOVALUE;
        if (_23818 == 0)
        {
            _23818 = NOVALUE;
            goto L7; // [149] 192
        }
        else{
            _23818 = NOVALUE;
        }

        /** buildsys.e:675				if file_count then*/
        if (_file_count_45454 == 0)
        {
            goto L8; // [154] 170
        }
        else{
        }

        /** buildsys.e:676					printf(fh, " \\%s\t", { HOSTNL }  )*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_43HOSTNL_21610);
        ((intptr_t*)_2)[1] = _43HOSTNL_21610;
        _23819 = MAKE_SEQ(_1);
        EPrintf(_fh_45424, _23809, _23819);
        DeRefDS(_23819);
        _23819 = NOVALUE;
L8: 

        /** buildsys.e:678				file_count += 1*/
        _file_count_45454 = _file_count_45454 + 1;

        /** buildsys.e:679				puts(fh, " " & generated_files[i])*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23821 = (object)*(((s1_ptr)_2)->base + _i_45456);
        Concat((object_ptr)&_23822, _23320, _23821);
        _23821 = NOVALUE;
        EPuts(_fh_45424, _23822); // DJP 
        DeRefDS(_23822);
        _23822 = NOVALUE;
L7: 

        /** buildsys.e:681		end for*/
        _i_45456 = _i_45456 + 1;
        goto L5; // [194] 136
L6: 
        ;
    }

    /** buildsys.e:682		puts(fh, HOSTNL)*/
    EPuts(_fh_45424, _43HOSTNL_21610); // DJP 

    /** buildsys.e:684		printf(fh, "%s_GENERATED_FILES = ", { upper(file0) })*/
    RefDS(_60file0_44056);
    _23824 = _13upper(_60file0_44056);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23824;
    _23825 = MAKE_SEQ(_1);
    _23824 = NOVALUE;
    EPrintf(_fh_45424, _23823, _23825);
    DeRefDS(_23825);
    _23825 = NOVALUE;

    /** buildsys.e:685		for i = 1 to length(generated_files) do*/
    if (IS_SEQUENCE(_60generated_files_42093)){
            _23826 = SEQ_PTR(_60generated_files_42093)->length;
    }
    else {
        _23826 = 1;
    }
    {
        object _i_45477;
        _i_45477 = 1;
L9: 
        if (_i_45477 > _23826){
            goto LA; // [229] 277
        }

        /** buildsys.e:686			if i > 1 then*/
        if (_i_45477 <= 1)
        goto LB; // [238] 255

        /** buildsys.e:687				printf(fh, " \\%s\t", { HOSTNL }  )*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_43HOSTNL_21610);
        ((intptr_t*)_2)[1] = _43HOSTNL_21610;
        _23828 = MAKE_SEQ(_1);
        EPrintf(_fh_45424, _23809, _23828);
        DeRefDS(_23828);
        _23828 = NOVALUE;
LB: 

        /** buildsys.e:689			puts(fh, " " & generated_files[i])*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23829 = (object)*(((s1_ptr)_2)->base + _i_45477);
        Concat((object_ptr)&_23830, _23320, _23829);
        _23829 = NOVALUE;
        EPuts(_fh_45424, _23830); // DJP 
        DeRefDS(_23830);
        _23830 = NOVALUE;

        /** buildsys.e:690		end for*/
        _i_45477 = _i_45477 + 1;
        goto L9; // [272] 236
LA: 
        ;
    }

    /** buildsys.e:691		puts(fh, HOSTNL)*/
    EPuts(_fh_45424, _43HOSTNL_21610); // DJP 

    /** buildsys.e:692	end procedure*/
    return;
    ;
}


object _58windows_to_mingw_path(object _s_45490)
{
    object _23832 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:701		ifdef TEST_FOR_WIN9X_ON_MING then*/

    /** buildsys.e:711		return search:find_replace('\\',s,'/')*/
    RefDS(_s_45490);
    _23832 = _15find_replace(92, _s_45490, 47, 0);
    DeRefDS(_s_45490);
    return _23832;
    ;
}


void _58write_makefile_full()
{
    object _settings_45495 = NOVALUE;
    object _fh_45498 = NOVALUE;
    object _23959 = NOVALUE;
    object _23957 = NOVALUE;
    object _23955 = NOVALUE;
    object _23954 = NOVALUE;
    object _23953 = NOVALUE;
    object _23952 = NOVALUE;
    object _23951 = NOVALUE;
    object _23949 = NOVALUE;
    object _23948 = NOVALUE;
    object _23946 = NOVALUE;
    object _23945 = NOVALUE;
    object _23944 = NOVALUE;
    object _23943 = NOVALUE;
    object _23941 = NOVALUE;
    object _23940 = NOVALUE;
    object _23938 = NOVALUE;
    object _23937 = NOVALUE;
    object _23935 = NOVALUE;
    object _23934 = NOVALUE;
    object _23933 = NOVALUE;
    object _23932 = NOVALUE;
    object _23931 = NOVALUE;
    object _23930 = NOVALUE;
    object _23929 = NOVALUE;
    object _23928 = NOVALUE;
    object _23926 = NOVALUE;
    object _23925 = NOVALUE;
    object _23924 = NOVALUE;
    object _23923 = NOVALUE;
    object _23922 = NOVALUE;
    object _23921 = NOVALUE;
    object _23920 = NOVALUE;
    object _23919 = NOVALUE;
    object _23918 = NOVALUE;
    object _23917 = NOVALUE;
    object _23916 = NOVALUE;
    object _23915 = NOVALUE;
    object _23914 = NOVALUE;
    object _23912 = NOVALUE;
    object _23911 = NOVALUE;
    object _23849 = NOVALUE;
    object _23848 = NOVALUE;
    object _23847 = NOVALUE;
    object _23845 = NOVALUE;
    object _23844 = NOVALUE;
    object _23843 = NOVALUE;
    object _23841 = NOVALUE;
    object _23840 = NOVALUE;
    object _23839 = NOVALUE;
    object _23836 = NOVALUE;
    object _23834 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:718		sequence settings = setup_build()*/
    _0 = _settings_45495;
    _settings_45495 = _58setup_build();
    DeRef(_0);

    /** buildsys.e:720		ensure_exename(settings[SETUP_EXE_EXT])*/
    _2 = (object)SEQ_PTR(_settings_45495);
    _23834 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_23834);
    _58ensure_exename(_23834);
    _23834 = NOVALUE;

    /** buildsys.e:722		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    {
        object concat_list[3];

        concat_list[0] = _23835;
        concat_list[1] = _60file0_44056;
        concat_list[2] = _60output_dir_42103;
        Concat_N((object_ptr)&_23836, concat_list, 3);
    }
    _fh_45498 = EOpen(_23836, _23753, 0);
    DeRefDS(_23836);
    _23836 = NOVALUE;

    /** buildsys.e:724		printf(fh, "CC     = %s" & HOSTNL, { settings[SETUP_CEXE] })*/
    Concat((object_ptr)&_23839, _23838, _43HOSTNL_21610);
    _2 = (object)SEQ_PTR(_settings_45495);
    _23840 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23840);
    ((intptr_t*)_2)[1] = _23840;
    _23841 = MAKE_SEQ(_1);
    _23840 = NOVALUE;
    EPrintf(_fh_45498, _23839, _23841);
    DeRefDS(_23839);
    _23839 = NOVALUE;
    DeRefDS(_23841);
    _23841 = NOVALUE;

    /** buildsys.e:725		printf(fh, "CFLAGS = %s" & HOSTNL, { settings[SETUP_CFLAGS] })*/
    Concat((object_ptr)&_23843, _23842, _43HOSTNL_21610);
    _2 = (object)SEQ_PTR(_settings_45495);
    _23844 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23844);
    ((intptr_t*)_2)[1] = _23844;
    _23845 = MAKE_SEQ(_1);
    _23844 = NOVALUE;
    EPrintf(_fh_45498, _23843, _23845);
    DeRefDS(_23843);
    _23843 = NOVALUE;
    DeRefDS(_23845);
    _23845 = NOVALUE;

    /** buildsys.e:726		printf(fh, "LINKER = %s" & HOSTNL, { settings[SETUP_LEXE] })*/
    Concat((object_ptr)&_23847, _23846, _43HOSTNL_21610);
    _2 = (object)SEQ_PTR(_settings_45495);
    _23848 = (object)*(((s1_ptr)_2)->base + 3);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23848);
    ((intptr_t*)_2)[1] = _23848;
    _23849 = MAKE_SEQ(_1);
    _23848 = NOVALUE;
    EPrintf(_fh_45498, _23847, _23849);
    DeRefDS(_23847);
    _23847 = NOVALUE;
    DeRefDS(_23849);
    _23849 = NOVALUE;

    /** buildsys.e:728		if compiler_type = COMPILER_GCC then*/

    /** buildsys.e:731			write_objlink_file()*/
    _58write_objlink_file();

    /** buildsys.e:734		write_makefile_srcobj_list(fh)*/
    _58write_makefile_srcobj_list(_fh_45498);

    /** buildsys.e:735		puts(fh, HOSTNL)*/
    EPuts(_fh_45498, _43HOSTNL_21610); // DJP 

    /** buildsys.e:737		if compiler_type = COMPILER_WATCOM then*/

    /** buildsys.e:770			printf(fh, "RUNTIME_LIBRARY=%s\n", { settings[SETUP_RUNTIME_LIBRARY] } )*/
    _2 = (object)SEQ_PTR(_settings_45495);
    _23911 = (object)*(((s1_ptr)_2)->base + 9);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23911);
    ((intptr_t*)_2)[1] = _23911;
    _23912 = MAKE_SEQ(_1);
    _23911 = NOVALUE;
    EPrintf(_fh_45498, _23910, _23912);
    DeRefDS(_23912);
    _23912 = NOVALUE;

    /** buildsys.e:771			printf(fh, "%s: $(%s_OBJECTS) $(RUNTIME_LIBRARY) %s " & HOSTNL, { adjust_for_build_file(exe_name[D_ALTNAME]), upper(file0), rc_file[D_ALTNAME] })*/
    Concat((object_ptr)&_23914, _23913, _43HOSTNL_21610);
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _23915 = (object)*(((s1_ptr)_2)->base + 11);
    Ref(_23915);
    _23916 = _58adjust_for_build_file(_23915);
    _23915 = NOVALUE;
    RefDS(_60file0_44056);
    _23917 = _13upper(_60file0_44056);
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _23918 = (object)*(((s1_ptr)_2)->base + 11);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23916;
    ((intptr_t*)_2)[2] = _23917;
    RefDS(_23918);
    ((intptr_t*)_2)[3] = _23918;
    _23919 = MAKE_SEQ(_1);
    _23918 = NOVALUE;
    _23917 = NOVALUE;
    _23916 = NOVALUE;
    EPrintf(_fh_45498, _23914, _23919);
    DeRefDS(_23914);
    _23914 = NOVALUE;
    DeRefDS(_23919);
    _23919 = NOVALUE;

    /** buildsys.e:772			if length(rc_file[D_ALTNAME]) then*/
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _23920 = (object)*(((s1_ptr)_2)->base + 11);
    if (IS_SEQUENCE(_23920)){
            _23921 = SEQ_PTR(_23920)->length;
    }
    else {
        _23921 = 1;
    }
    _23920 = NOVALUE;
    if (_23921 == 0)
    {
        _23921 = NOVALUE;
        goto L1; // [646] 690
    }
    else{
        _23921 = NOVALUE;
    }

    /** buildsys.e:773				writef(fh, "\t" & settings[SETUP_RC_COMPILER] & HOSTNL, { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    _2 = (object)SEQ_PTR(_settings_45495);
    _23922 = (object)*(((s1_ptr)_2)->base + 8);
    {
        object concat_list[3];

        concat_list[0] = _43HOSTNL_21610;
        concat_list[1] = _23922;
        concat_list[2] = _23869;
        Concat_N((object_ptr)&_23923, concat_list, 3);
    }
    _23922 = NOVALUE;
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _23924 = (object)*(((s1_ptr)_2)->base + 11);
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _23925 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_23925);
    RefDS(_23924);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23924;
    ((intptr_t *)_2)[2] = _23925;
    _23926 = MAKE_SEQ(_1);
    _23925 = NOVALUE;
    _23924 = NOVALUE;
    _19writef(_fh_45498, _23923, _23926, 0);
    _23923 = NOVALUE;
    _23926 = NOVALUE;
L1: 

    /** buildsys.e:775			printf(fh, "\t$(LINKER) -o %s $(%s_OBJECTS) %s $(LFLAGS)" & HOSTNL, {*/
    Concat((object_ptr)&_23928, _23927, _43HOSTNL_21610);
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _23929 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_60file0_44056);
    _23930 = _13upper(_60file0_44056);
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _23931 = (object)*(((s1_ptr)_2)->base + 11);
    if (IS_SEQUENCE(_23931)){
            _23932 = SEQ_PTR(_23931)->length;
    }
    else {
        _23932 = 1;
    }
    _23931 = NOVALUE;
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _23933 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_23933);
    RefDS(_21928);
    _23934 = _59iif(_23932, _23933, _21928);
    _23932 = NOVALUE;
    _23933 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_23929);
    ((intptr_t*)_2)[1] = _23929;
    ((intptr_t*)_2)[2] = _23930;
    ((intptr_t*)_2)[3] = _23934;
    _23935 = MAKE_SEQ(_1);
    _23934 = NOVALUE;
    _23930 = NOVALUE;
    _23929 = NOVALUE;
    EPrintf(_fh_45498, _23928, _23935);
    DeRefDS(_23928);
    _23928 = NOVALUE;
    DeRefDS(_23935);
    _23935 = NOVALUE;

    /** buildsys.e:777			puts(fh, HOSTNL)*/
    EPuts(_fh_45498, _43HOSTNL_21610); // DJP 

    /** buildsys.e:778			printf(fh, ".PHONY: %s-clean %s-clean-all" & HOSTNL, { file0, file0 })*/
    Concat((object_ptr)&_23937, _23936, _43HOSTNL_21610);
    RefDS(_60file0_44056);
    RefDS(_60file0_44056);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _60file0_44056;
    ((intptr_t *)_2)[2] = _60file0_44056;
    _23938 = MAKE_SEQ(_1);
    EPrintf(_fh_45498, _23937, _23938);
    DeRefDS(_23937);
    _23937 = NOVALUE;
    DeRefDS(_23938);
    _23938 = NOVALUE;

    /** buildsys.e:779			puts(fh, HOSTNL)*/
    EPuts(_fh_45498, _43HOSTNL_21610); // DJP 

    /** buildsys.e:780			printf(fh, "%s-clean:" & HOSTNL, { file0 })*/
    Concat((object_ptr)&_23940, _23939, _43HOSTNL_21610);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_60file0_44056);
    ((intptr_t*)_2)[1] = _60file0_44056;
    _23941 = MAKE_SEQ(_1);
    EPrintf(_fh_45498, _23940, _23941);
    DeRefDS(_23940);
    _23940 = NOVALUE;
    DeRefDS(_23941);
    _23941 = NOVALUE;

    /** buildsys.e:781			printf(fh, "\trm -rf $(%s_OBJECTS) %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME] })*/
    Concat((object_ptr)&_23943, _23942, _43HOSTNL_21610);
    RefDS(_60file0_44056);
    _23944 = _13upper(_60file0_44056);
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _23945 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_23945);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _23944;
    ((intptr_t *)_2)[2] = _23945;
    _23946 = MAKE_SEQ(_1);
    _23945 = NOVALUE;
    _23944 = NOVALUE;
    EPrintf(_fh_45498, _23943, _23946);
    DeRefDS(_23943);
    _23943 = NOVALUE;
    DeRefDS(_23946);
    _23946 = NOVALUE;

    /** buildsys.e:782			puts(fh, HOSTNL)*/
    EPuts(_fh_45498, _43HOSTNL_21610); // DJP 

    /** buildsys.e:783			printf(fh, "%s-clean-all: %s-clean" & HOSTNL, { file0, file0 })*/
    Concat((object_ptr)&_23948, _23947, _43HOSTNL_21610);
    RefDS(_60file0_44056);
    RefDS(_60file0_44056);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _60file0_44056;
    ((intptr_t *)_2)[2] = _60file0_44056;
    _23949 = MAKE_SEQ(_1);
    EPrintf(_fh_45498, _23948, _23949);
    DeRefDS(_23948);
    _23948 = NOVALUE;
    DeRefDS(_23949);
    _23949 = NOVALUE;

    /** buildsys.e:784			printf(fh, "\trm -rf $(%s_SOURCES) %s %s" & HOSTNL, { upper(file0), res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    Concat((object_ptr)&_23951, _23950, _43HOSTNL_21610);
    RefDS(_60file0_44056);
    _23952 = _13upper(_60file0_44056);
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _23953 = (object)*(((s1_ptr)_2)->base + 11);
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _23954 = (object)*(((s1_ptr)_2)->base + 11);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _23952;
    RefDS(_23953);
    ((intptr_t*)_2)[2] = _23953;
    Ref(_23954);
    ((intptr_t*)_2)[3] = _23954;
    _23955 = MAKE_SEQ(_1);
    _23954 = NOVALUE;
    _23953 = NOVALUE;
    _23952 = NOVALUE;
    EPrintf(_fh_45498, _23951, _23955);
    DeRefDS(_23951);
    _23951 = NOVALUE;
    DeRefDS(_23955);
    _23955 = NOVALUE;

    /** buildsys.e:785			puts(fh, HOSTNL)*/
    EPuts(_fh_45498, _43HOSTNL_21610); // DJP 

    /** buildsys.e:786			puts(fh, "%.o: %.c" & HOSTNL)*/
    Concat((object_ptr)&_23957, _23956, _43HOSTNL_21610);
    EPuts(_fh_45498, _23957); // DJP 
    DeRefDS(_23957);
    _23957 = NOVALUE;

    /** buildsys.e:787			puts(fh, "\t$(CC) $(CFLAGS) $*.c -o $*.o" & HOSTNL)*/
    Concat((object_ptr)&_23959, _23958, _43HOSTNL_21610);
    EPuts(_fh_45498, _23959); // DJP 
    DeRefDS(_23959);
    _23959 = NOVALUE;

    /** buildsys.e:788			puts(fh, HOSTNL)*/
    EPuts(_fh_45498, _43HOSTNL_21610); // DJP 

    /** buildsys.e:791		close(fh)*/
    EClose(_fh_45498);

    /** buildsys.e:792	end procedure*/
    DeRef(_settings_45495);
    _23920 = NOVALUE;
    _23931 = NOVALUE;
    return;
    ;
}


void _58write_makefile_partial()
{
    object _settings_45724 = NOVALUE;
    object _fh_45726 = NOVALUE;
    object _23961 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:798		sequence settings = setup_build()*/
    _0 = _settings_45724;
    _settings_45724 = _58setup_build();
    DeRef(_0);

    /** buildsys.e:799		integer fh = open(output_dir & file0 & ".mak", "wb")*/
    {
        object concat_list[3];

        concat_list[0] = _23835;
        concat_list[1] = _60file0_44056;
        concat_list[2] = _60output_dir_42103;
        Concat_N((object_ptr)&_23961, concat_list, 3);
    }
    _fh_45726 = EOpen(_23961, _23753, 0);
    DeRefDS(_23961);
    _23961 = NOVALUE;

    /** buildsys.e:801		write_makefile_srcobj_list(fh)*/
    _58write_makefile_srcobj_list(_fh_45726);

    /** buildsys.e:803		close(fh)*/
    EClose(_fh_45726);

    /** buildsys.e:804	end procedure*/
    DeRefDS(_settings_45724);
    return;
    ;
}


void _58build_direct(object _link_only_45733, object _the_file0_45734)
{
    object _cmd_45740 = NOVALUE;
    object _objs_45741 = NOVALUE;
    object _settings_45742 = NOVALUE;
    object _cwd_45744 = NOVALUE;
    object _status_45747 = NOVALUE;
    object _link_files_45776 = NOVALUE;
    object _pdone_45802 = NOVALUE;
    object _files_45848 = NOVALUE;
    object _31698 = NOVALUE;
    object _31697 = NOVALUE;
    object _31696 = NOVALUE;
    object _31695 = NOVALUE;
    object _31694 = NOVALUE;
    object _31692 = NOVALUE;
    object _24105 = NOVALUE;
    object _24104 = NOVALUE;
    object _24103 = NOVALUE;
    object _24102 = NOVALUE;
    object _24101 = NOVALUE;
    object _24100 = NOVALUE;
    object _24099 = NOVALUE;
    object _24097 = NOVALUE;
    object _24096 = NOVALUE;
    object _24095 = NOVALUE;
    object _24094 = NOVALUE;
    object _24090 = NOVALUE;
    object _24089 = NOVALUE;
    object _24088 = NOVALUE;
    object _24087 = NOVALUE;
    object _24086 = NOVALUE;
    object _24085 = NOVALUE;
    object _24084 = NOVALUE;
    object _24083 = NOVALUE;
    object _24082 = NOVALUE;
    object _24081 = NOVALUE;
    object _24080 = NOVALUE;
    object _24079 = NOVALUE;
    object _24078 = NOVALUE;
    object _24077 = NOVALUE;
    object _24076 = NOVALUE;
    object _24073 = NOVALUE;
    object _24072 = NOVALUE;
    object _24071 = NOVALUE;
    object _24070 = NOVALUE;
    object _24067 = NOVALUE;
    object _24065 = NOVALUE;
    object _24064 = NOVALUE;
    object _24063 = NOVALUE;
    object _24062 = NOVALUE;
    object _24061 = NOVALUE;
    object _24060 = NOVALUE;
    object _24057 = NOVALUE;
    object _24056 = NOVALUE;
    object _24052 = NOVALUE;
    object _24051 = NOVALUE;
    object _24050 = NOVALUE;
    object _24046 = NOVALUE;
    object _24045 = NOVALUE;
    object _24044 = NOVALUE;
    object _24043 = NOVALUE;
    object _24042 = NOVALUE;
    object _24041 = NOVALUE;
    object _24040 = NOVALUE;
    object _24039 = NOVALUE;
    object _24038 = NOVALUE;
    object _24037 = NOVALUE;
    object _24036 = NOVALUE;
    object _24035 = NOVALUE;
    object _24033 = NOVALUE;
    object _24032 = NOVALUE;
    object _24031 = NOVALUE;
    object _24030 = NOVALUE;
    object _24029 = NOVALUE;
    object _24027 = NOVALUE;
    object _24026 = NOVALUE;
    object _24025 = NOVALUE;
    object _24024 = NOVALUE;
    object _24023 = NOVALUE;
    object _24021 = NOVALUE;
    object _24019 = NOVALUE;
    object _24018 = NOVALUE;
    object _24017 = NOVALUE;
    object _24016 = NOVALUE;
    object _24014 = NOVALUE;
    object _24013 = NOVALUE;
    object _24012 = NOVALUE;
    object _24009 = NOVALUE;
    object _24008 = NOVALUE;
    object _24007 = NOVALUE;
    object _24006 = NOVALUE;
    object _24005 = NOVALUE;
    object _24004 = NOVALUE;
    object _24003 = NOVALUE;
    object _24002 = NOVALUE;
    object _24001 = NOVALUE;
    object _24000 = NOVALUE;
    object _23997 = NOVALUE;
    object _23996 = NOVALUE;
    object _23993 = NOVALUE;
    object _23991 = NOVALUE;
    object _23990 = NOVALUE;
    object _23989 = NOVALUE;
    object _23988 = NOVALUE;
    object _23985 = NOVALUE;
    object _23984 = NOVALUE;
    object _23983 = NOVALUE;
    object _23982 = NOVALUE;
    object _23980 = NOVALUE;
    object _23979 = NOVALUE;
    object _23978 = NOVALUE;
    object _23977 = NOVALUE;
    object _23976 = NOVALUE;
    object _23973 = NOVALUE;
    object _23967 = NOVALUE;
    object _23963 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:810		if length(the_file0) then*/
    _23963 = 0;

    /** buildsys.e:813		sequence cmd, objs = "", settings = setup_build(), cwd = current_dir()*/
    RefDS(_21928);
    DeRef(_objs_45741);
    _objs_45741 = _21928;
    _0 = _settings_45742;
    _settings_45742 = _58setup_build();
    DeRef(_0);
    _0 = _cwd_45744;
    _cwd_45744 = _16current_dir();
    DeRef(_0);

    /** buildsys.e:814		integer status*/

    /** buildsys.e:816		ensure_exename(settings[SETUP_EXE_EXT])*/
    _2 = (object)SEQ_PTR(_settings_45742);
    _23967 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_23967);
    _58ensure_exename(_23967);
    _23967 = NOVALUE;

    /** buildsys.e:818		if not link_only then*/

    /** buildsys.e:819			switch compiler_type do*/
    _0 = 0;
    switch ( _0 ){ 

        /** buildsys.e:820				case COMPILER_GCC then*/
        case 1:

        /** buildsys.e:821					if not silent then*/
        if (_39silent_16930 != 0)
        goto L1; // [72] 119

        /** buildsys.e:822						ShowMsg(1, 176, {"GCC"})*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23972);
        ((intptr_t*)_2)[1] = _23972;
        _23973 = MAKE_SEQ(_1);
        _44ShowMsg(1, 176, _23973, 1);
        _23973 = NOVALUE;
        goto L1; // [88] 119

        /** buildsys.e:825				case COMPILER_WATCOM then*/
        case 2:

        /** buildsys.e:826					write_objlink_file()*/
        _58write_objlink_file();

        /** buildsys.e:828					if not silent then*/
        if (_39silent_16930 != 0)
        goto L2; // [102] 118

        /** buildsys.e:829						ShowMsg(1, 176, {"Watcom"})*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_23975);
        ((intptr_t*)_2)[1] = _23975;
        _23976 = MAKE_SEQ(_1);
        _44ShowMsg(1, 176, _23976, 1);
        _23976 = NOVALUE;
L2: 
    ;}L1: 

    /** buildsys.e:834		if sequence(output_dir) and length(output_dir) > 0 then*/
    _23977 = 1;
    if (_23977 == 0) {
        goto L3; // [127] 155
    }
    _23979 = 0;
    _23980 = (0 > 0);
    _23979 = NOVALUE;
    if (_23980 == 0)
    {
        DeRef(_23980);
        _23980 = NOVALUE;
        goto L3; // [141] 155
    }
    else{
        DeRef(_23980);
        _23980 = NOVALUE;
    }

    /** buildsys.e:835			chdir(output_dir)*/
    RefDS(_60output_dir_42103);
    _31698 = _16chdir(_60output_dir_42103);
    DeRef(_31698);
    _31698 = NOVALUE;
L3: 

    /** buildsys.e:838		sequence link_files = {}*/
    RefDS(_21928);
    DeRef(_link_files_45776);
    _link_files_45776 = _21928;

    /** buildsys.e:840		if not link_only then*/
    if (_link_only_45733 != 0)
    goto L4; // [164] 468

    /** buildsys.e:841			for i = 1 to length(generated_files) do*/
    if (IS_SEQUENCE(_60generated_files_42093)){
            _23982 = SEQ_PTR(_60generated_files_42093)->length;
    }
    else {
        _23982 = 1;
    }
    {
        object _i_45780;
        _i_45780 = 1;
L5: 
        if (_i_45780 > _23982){
            goto L6; // [174] 465
        }

        /** buildsys.e:842				if generated_files[i][$] = 'c' then*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23983 = (object)*(((s1_ptr)_2)->base + _i_45780);
        if (IS_SEQUENCE(_23983)){
                _23984 = SEQ_PTR(_23983)->length;
        }
        else {
            _23984 = 1;
        }
        _2 = (object)SEQ_PTR(_23983);
        _23985 = (object)*(((s1_ptr)_2)->base + _23984);
        _23983 = NOVALUE;
        if (binary_op_a(NOTEQ, _23985, 99)){
            _23985 = NOVALUE;
            goto L7; // [196] 424
        }
        _23985 = NOVALUE;

        /** buildsys.e:843					cmd = sprintf("%s %s %s", { settings[SETUP_CEXE], settings[SETUP_CFLAGS],*/
        _2 = (object)SEQ_PTR(_settings_45742);
        _23988 = (object)*(((s1_ptr)_2)->base + 1);
        _2 = (object)SEQ_PTR(_settings_45742);
        _23989 = (object)*(((s1_ptr)_2)->base + 2);
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23990 = (object)*(((s1_ptr)_2)->base + _i_45780);
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_23988);
        ((intptr_t*)_2)[1] = _23988;
        Ref(_23989);
        ((intptr_t*)_2)[2] = _23989;
        RefDS(_23990);
        ((intptr_t*)_2)[3] = _23990;
        _23991 = MAKE_SEQ(_1);
        _23990 = NOVALUE;
        _23989 = NOVALUE;
        _23988 = NOVALUE;
        DeRef(_cmd_45740);
        _cmd_45740 = EPrintf(-9999999, _23987, _23991);
        DeRefDS(_23991);
        _23991 = NOVALUE;

        /** buildsys.e:846					link_files = append(link_files, generated_files[i])*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _23993 = (object)*(((s1_ptr)_2)->base + _i_45780);
        RefDS(_23993);
        Append(&_link_files_45776, _link_files_45776, _23993);
        _23993 = NOVALUE;

        /** buildsys.e:848					if not silent then*/
        if (_39silent_16930 != 0)
        goto L8; // [242] 364

        /** buildsys.e:849						atom pdone = 100 * (i / length(generated_files))*/
        if (IS_SEQUENCE(_60generated_files_42093)){
                _23996 = SEQ_PTR(_60generated_files_42093)->length;
        }
        else {
            _23996 = 1;
        }
        _23997 = (_i_45780 % _23996) ? NewDouble((eudouble)_i_45780 / _23996) : (_i_45780 / _23996);
        _23996 = NOVALUE;
        DeRef(_pdone_45802);
        if (IS_ATOM_INT(_23997)) {
            if (_23997 <= INT15 && _23997 >= -INT15){
                _pdone_45802 = 100 * _23997;
            }
            else{
                _pdone_45802 = NewDouble(100 * (eudouble)_23997);
            }
        }
        else {
            _pdone_45802 = NewDouble((eudouble)100 * DBL_PTR(_23997)->dbl);
        }
        DeRef(_23997);
        _23997 = NOVALUE;

        /** buildsys.e:850						if not verbose then*/
        if (_39verbose_16933 != 0)
        goto L9; // [264] 350

        /** buildsys.e:853							if 0 and outdated_files[i] = 0 and force_build = 0 then*/
        if (0 == 0) {
            _24000 = 0;
            goto LA; // [269] 287
        }
        _2 = (object)SEQ_PTR(_60outdated_files_42094);
        _24001 = (object)*(((s1_ptr)_2)->base + _i_45780);
        if (IS_ATOM_INT(_24001)) {
            _24002 = (_24001 == 0);
        }
        else {
            _24002 = binary_op(EQUALS, _24001, 0);
        }
        _24001 = NOVALUE;
        if (IS_ATOM_INT(_24002))
        _24000 = (_24002 != 0);
        else
        _24000 = DBL_PTR(_24002)->dbl != 0.0;
LA: 
        if (_24000 == 0) {
            goto LB; // [287] 328
        }
        _24004 = (0 == 0);
        if (_24004 == 0)
        {
            DeRef(_24004);
            _24004 = NOVALUE;
            goto LB; // [298] 328
        }
        else{
            DeRef(_24004);
            _24004 = NOVALUE;
        }

        /** buildsys.e:854								ShowMsg(1, 325, { pdone, generated_files[i] })*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _24005 = (object)*(((s1_ptr)_2)->base + _i_45780);
        RefDS(_24005);
        Ref(_pdone_45802);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45802;
        ((intptr_t *)_2)[2] = _24005;
        _24006 = MAKE_SEQ(_1);
        _24005 = NOVALUE;
        _44ShowMsg(1, 325, _24006, 1);
        _24006 = NOVALUE;

        /** buildsys.e:855								continue*/
        DeRef(_pdone_45802);
        _pdone_45802 = NOVALUE;
        goto LC; // [323] 460
        goto LD; // [325] 363
LB: 

        /** buildsys.e:857								ShowMsg(1, 163, { pdone, generated_files[i] })*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _24007 = (object)*(((s1_ptr)_2)->base + _i_45780);
        RefDS(_24007);
        Ref(_pdone_45802);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45802;
        ((intptr_t *)_2)[2] = _24007;
        _24008 = MAKE_SEQ(_1);
        _24007 = NOVALUE;
        _44ShowMsg(1, 163, _24008, 1);
        _24008 = NOVALUE;
        goto LD; // [347] 363
L9: 

        /** buildsys.e:860							ShowMsg(1, 163, { pdone, cmd })*/
        RefDS(_cmd_45740);
        Ref(_pdone_45802);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _pdone_45802;
        ((intptr_t *)_2)[2] = _cmd_45740;
        _24009 = MAKE_SEQ(_1);
        _44ShowMsg(1, 163, _24009, 1);
        _24009 = NOVALUE;
LD: 
L8: 
        DeRef(_pdone_45802);
        _pdone_45802 = NOVALUE;

        /** buildsys.e:865					status = system_exec(cmd, 0)*/
        _status_45747 = system_exec_call(_cmd_45740, 0);

        /** buildsys.e:866					if status != 0 then*/
        if (_status_45747 == 0)
        goto LE; // [374] 458

        /** buildsys.e:867						ShowMsg(2, 164, { generated_files[i] })*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _24012 = (object)*(((s1_ptr)_2)->base + _i_45780);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24012);
        ((intptr_t*)_2)[1] = _24012;
        _24013 = MAKE_SEQ(_1);
        _24012 = NOVALUE;
        _44ShowMsg(2, 164, _24013, 1);
        _24013 = NOVALUE;

        /** buildsys.e:868						ShowMsg(2, 165, { status, cmd })*/
        RefDS(_cmd_45740);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _status_45747;
        ((intptr_t *)_2)[2] = _cmd_45740;
        _24014 = MAKE_SEQ(_1);
        _44ShowMsg(2, 165, _24014, 1);
        _24014 = NOVALUE;

        /** buildsys.e:869						goto "build_direct_cleanup"*/
        goto GF;
        goto LE; // [421] 458
L7: 

        /** buildsys.e:871				elsif match(".o", generated_files[i]) then*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _24016 = (object)*(((s1_ptr)_2)->base + _i_45780);
        _24017 = e_match_from(_23080, _24016, 1);
        _24016 = NOVALUE;
        if (_24017 == 0)
        {
            _24017 = NOVALUE;
            goto L10; // [437] 457
        }
        else{
            _24017 = NOVALUE;
        }

        /** buildsys.e:872					objs &= " " & generated_files[i]*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _24018 = (object)*(((s1_ptr)_2)->base + _i_45780);
        Concat((object_ptr)&_24019, _23320, _24018);
        _24018 = NOVALUE;
        Concat((object_ptr)&_objs_45741, _objs_45741, _24019);
        DeRefDS(_24019);
        _24019 = NOVALUE;
L10: 
LE: 

        /** buildsys.e:874			end for*/
LC: 
        _i_45780 = _i_45780 + 1;
        goto L5; // [460] 181
L6: 
        ;
    }
    goto L11; // [465] 527
L4: 

    /** buildsys.e:876			object files = read_lines(file0 & ".bld")*/
    Concat((object_ptr)&_24021, _60file0_44056, _23524);
    _0 = _files_45848;
    _files_45848 = _19read_lines(_24021);
    DeRef(_0);
    _24021 = NOVALUE;

    /** buildsys.e:877			for i = 1 to length(files) do*/
    if (IS_SEQUENCE(_files_45848)){
            _24023 = SEQ_PTR(_files_45848)->length;
    }
    else {
        _24023 = 1;
    }
    {
        object _i_45854;
        _i_45854 = 1;
L12: 
        if (_i_45854 > _24023){
            goto L13; // [485] 524
        }

        /** buildsys.e:878				objs &= " " & filebase(files[i]) & "." & settings[SETUP_OBJ_EXT]*/
        _2 = (object)SEQ_PTR(_files_45848);
        _24024 = (object)*(((s1_ptr)_2)->base + _i_45854);
        Ref(_24024);
        _24025 = _16filebase(_24024);
        _24024 = NOVALUE;
        _2 = (object)SEQ_PTR(_settings_45742);
        _24026 = (object)*(((s1_ptr)_2)->base + 5);
        {
            object concat_list[4];

            concat_list[0] = _24026;
            concat_list[1] = _23119;
            concat_list[2] = _24025;
            concat_list[3] = _23320;
            Concat_N((object_ptr)&_24027, concat_list, 4);
        }
        _24026 = NOVALUE;
        DeRef(_24025);
        _24025 = NOVALUE;
        Concat((object_ptr)&_objs_45741, _objs_45741, _24027);
        DeRefDS(_24027);
        _24027 = NOVALUE;

        /** buildsys.e:879			end for*/
        _i_45854 = _i_45854 + 1;
        goto L12; // [519] 492
L13: 
        ;
    }
    DeRef(_files_45848);
    _files_45848 = NOVALUE;
L11: 

    /** buildsys.e:882		if keep and not link_only and length(link_files) then*/
    if (_60keep_42096 == 0) {
        _24029 = 0;
        goto L14; // [531] 542
    }
    _24030 = (_link_only_45733 == 0);
    _24029 = (_24030 != 0);
L14: 
    if (_24029 == 0) {
        goto L15; // [542] 571
    }
    if (IS_SEQUENCE(_link_files_45776)){
            _24032 = SEQ_PTR(_link_files_45776)->length;
    }
    else {
        _24032 = 1;
    }
    if (_24032 == 0)
    {
        _24032 = NOVALUE;
        goto L15; // [550] 571
    }
    else{
        _24032 = NOVALUE;
    }

    /** buildsys.e:883			write_lines(file0 & ".bld", link_files)*/
    Concat((object_ptr)&_24033, _60file0_44056, _23524);
    RefDS(_link_files_45776);
    _31697 = _19write_lines(_24033, _link_files_45776);
    _24033 = NOVALUE;
    DeRef(_31697);
    _31697 = NOVALUE;
    goto L16; // [568] 595
L15: 

    /** buildsys.e:884		elsif keep = 0 then*/
    if (_60keep_42096 != 0)
    goto L17; // [575] 594

    /** buildsys.e:886			delete_file(file0 & ".bld")*/
    Concat((object_ptr)&_24035, _60file0_44056, _23524);
    _31696 = _16delete_file(_24035);
    _24035 = NOVALUE;
    DeRef(_31696);
    _31696 = NOVALUE;
L17: 
L16: 

    /** buildsys.e:890		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_GCC then*/
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _24036 = (object)*(((s1_ptr)_2)->base + 11);
    if (IS_SEQUENCE(_24036)){
            _24037 = SEQ_PTR(_24036)->length;
    }
    else {
        _24037 = 1;
    }
    _24036 = NOVALUE;
    if (_24037 == 0) {
        _24038 = 0;
        goto L18; // [608] 623
    }
    _2 = (object)SEQ_PTR(_settings_45742);
    _24039 = (object)*(((s1_ptr)_2)->base + 8);
    if (IS_SEQUENCE(_24039)){
            _24040 = SEQ_PTR(_24039)->length;
    }
    else {
        _24040 = 1;
    }
    _24039 = NOVALUE;
    _24038 = (_24040 != 0);
L18: 
    if (_24038 == 0) {
        goto L19; // [623] 724
    }
    _24042 = (0 == 1);
    if (_24042 == 0)
    {
        DeRef(_24042);
        _24042 = NOVALUE;
        goto L19; // [634] 724
    }
    else{
        DeRef(_24042);
        _24042 = NOVALUE;
    }

    /** buildsys.e:891			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME] })*/
    _2 = (object)SEQ_PTR(_settings_45742);
    _24043 = (object)*(((s1_ptr)_2)->base + 8);
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _24044 = (object)*(((s1_ptr)_2)->base + 11);
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _24045 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_24045);
    RefDS(_24044);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24044;
    ((intptr_t *)_2)[2] = _24045;
    _24046 = MAKE_SEQ(_1);
    _24045 = NOVALUE;
    _24044 = NOVALUE;
    Ref(_24043);
    _0 = _cmd_45740;
    _cmd_45740 = _13format(_24043, _24046);
    DeRef(_0);
    _24043 = NOVALUE;
    _24046 = NOVALUE;

    /** buildsys.e:892			status = system_exec(cmd, 0)*/
    _status_45747 = system_exec_call(_cmd_45740, 0);

    /** buildsys.e:893			if status != 0 then*/
    if (_status_45747 == 0)
    goto L1A; // [678] 723

    /** buildsys.e:894				ShowMsg(2, 350, { rc_file[D_NAME] })*/
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _24050 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24050);
    ((intptr_t*)_2)[1] = _24050;
    _24051 = MAKE_SEQ(_1);
    _24050 = NOVALUE;
    _44ShowMsg(2, 350, _24051, 1);
    _24051 = NOVALUE;

    /** buildsys.e:895				ShowMsg(2, 169, { status, cmd })*/
    RefDS(_cmd_45740);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45747;
    ((intptr_t *)_2)[2] = _cmd_45740;
    _24052 = MAKE_SEQ(_1);
    _44ShowMsg(2, 169, _24052, 1);
    _24052 = NOVALUE;

    /** buildsys.e:897				goto "build_direct_cleanup"*/
    goto GF;
L1A: 
L19: 

    /** buildsys.e:901		switch compiler_type do*/
    _0 = 0;
    switch ( _0 ){ 

        /** buildsys.e:902			case COMPILER_WATCOM then*/
        case 2:

        /** buildsys.e:903				cmd = sprintf("%s @%s.lnk", { settings[SETUP_LEXE], file0 })*/
        _2 = (object)SEQ_PTR(_settings_45742);
        _24056 = (object)*(((s1_ptr)_2)->base + 3);
        RefDS(_60file0_44056);
        Ref(_24056);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _24056;
        ((intptr_t *)_2)[2] = _60file0_44056;
        _24057 = MAKE_SEQ(_1);
        _24056 = NOVALUE;
        DeRef(_cmd_45740);
        _cmd_45740 = EPrintf(-9999999, _24055, _24057);
        DeRefDS(_24057);
        _24057 = NOVALUE;
        goto L1B; // [753] 828

        /** buildsys.e:905			case COMPILER_GCC then*/
        case 1:

        /** buildsys.e:906				cmd = sprintf("%s -o %s %s %s %s", { */
        _2 = (object)SEQ_PTR(_settings_45742);
        _24060 = (object)*(((s1_ptr)_2)->base + 3);
        _2 = (object)SEQ_PTR(_58exe_name_44899);
        _24061 = (object)*(((s1_ptr)_2)->base + 11);
        Ref(_24061);
        _24062 = _58adjust_for_build_file(_24061);
        _24061 = NOVALUE;
        _2 = (object)SEQ_PTR(_58res_file_44911);
        _24063 = (object)*(((s1_ptr)_2)->base + 11);
        _2 = (object)SEQ_PTR(_settings_45742);
        _24064 = (object)*(((s1_ptr)_2)->base + 4);
        _1 = NewS1(5);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_24060);
        ((intptr_t*)_2)[1] = _24060;
        ((intptr_t*)_2)[2] = _24062;
        RefDS(_objs_45741);
        ((intptr_t*)_2)[3] = _objs_45741;
        RefDS(_24063);
        ((intptr_t*)_2)[4] = _24063;
        Ref(_24064);
        ((intptr_t*)_2)[5] = _24064;
        _24065 = MAKE_SEQ(_1);
        _24064 = NOVALUE;
        _24063 = NOVALUE;
        _24062 = NOVALUE;
        _24060 = NOVALUE;
        DeRef(_cmd_45740);
        _cmd_45740 = EPrintf(-9999999, _24059, _24065);
        DeRefDS(_24065);
        _24065 = NOVALUE;
        goto L1B; // [801] 828

        /** buildsys.e:915			case else*/
        default:

        /** buildsys.e:916				ShowMsg(2, 167, { compiler_type })*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 0;
        _24067 = MAKE_SEQ(_1);
        _44ShowMsg(2, 167, _24067, 1);
        _24067 = NOVALUE;

        /** buildsys.e:918				goto "build_direct_cleanup"*/
        goto GF;
    ;}L1B: 

    /** buildsys.e:921		if not silent then*/
    if (_39silent_16930 != 0)
    goto L1C; // [832] 886

    /** buildsys.e:922			if not verbose then*/
    if (_39verbose_16933 != 0)
    goto L1D; // [839] 870

    /** buildsys.e:923				ShowMsg(1, 166, { abbreviate_path(exe_name[D_NAME]) })*/
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _24070 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_24070);
    RefDS(_21928);
    _24071 = _16abbreviate_path(_24070, _21928);
    _24070 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24071;
    _24072 = MAKE_SEQ(_1);
    _24071 = NOVALUE;
    _44ShowMsg(1, 166, _24072, 1);
    _24072 = NOVALUE;
    goto L1E; // [867] 885
L1D: 

    /** buildsys.e:925				ShowMsg(1, 166, { cmd })*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_cmd_45740);
    ((intptr_t*)_2)[1] = _cmd_45740;
    _24073 = MAKE_SEQ(_1);
    _44ShowMsg(1, 166, _24073, 1);
    _24073 = NOVALUE;
L1E: 
L1C: 

    /** buildsys.e:929		status = system_exec(cmd, 0)*/
    _status_45747 = system_exec_call(_cmd_45740, 0);

    /** buildsys.e:930		if status != 0 then*/
    if (_status_45747 == 0)
    goto L1F; // [896] 939

    /** buildsys.e:931			ShowMsg(2, 168, { exe_name[D_NAME] })*/
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _24076 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24076);
    ((intptr_t*)_2)[1] = _24076;
    _24077 = MAKE_SEQ(_1);
    _24076 = NOVALUE;
    _44ShowMsg(2, 168, _24077, 1);
    _24077 = NOVALUE;

    /** buildsys.e:932			ShowMsg(2, 169, { status, cmd })*/
    RefDS(_cmd_45740);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45747;
    ((intptr_t *)_2)[2] = _cmd_45740;
    _24078 = MAKE_SEQ(_1);
    _44ShowMsg(2, 169, _24078, 1);
    _24078 = NOVALUE;

    /** buildsys.e:934			goto "build_direct_cleanup"*/
    goto GF;
L1F: 

    /** buildsys.e:938		if length(rc_file[D_ALTNAME]) and length(settings[SETUP_RC_COMPILER]) and compiler_type = COMPILER_WATCOM then*/
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _24079 = (object)*(((s1_ptr)_2)->base + 11);
    if (IS_SEQUENCE(_24079)){
            _24080 = SEQ_PTR(_24079)->length;
    }
    else {
        _24080 = 1;
    }
    _24079 = NOVALUE;
    if (_24080 == 0) {
        _24081 = 0;
        goto L20; // [952] 967
    }
    _2 = (object)SEQ_PTR(_settings_45742);
    _24082 = (object)*(((s1_ptr)_2)->base + 8);
    if (IS_SEQUENCE(_24082)){
            _24083 = SEQ_PTR(_24082)->length;
    }
    else {
        _24083 = 1;
    }
    _24082 = NOVALUE;
    _24081 = (_24083 != 0);
L20: 
    if (_24081 == 0) {
        goto L21; // [967] 1086
    }
    _24085 = (0 == 2);
    if (_24085 == 0)
    {
        DeRef(_24085);
        _24085 = NOVALUE;
        goto L21; // [978] 1086
    }
    else{
        DeRef(_24085);
        _24085 = NOVALUE;
    }

    /** buildsys.e:939			cmd = text:format(settings[SETUP_RC_COMPILER], { rc_file[D_ALTNAME], res_file[D_ALTNAME], exe_name[D_ALTNAME] })*/
    _2 = (object)SEQ_PTR(_settings_45742);
    _24086 = (object)*(((s1_ptr)_2)->base + 8);
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _24087 = (object)*(((s1_ptr)_2)->base + 11);
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _24088 = (object)*(((s1_ptr)_2)->base + 11);
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _24089 = (object)*(((s1_ptr)_2)->base + 11);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24087);
    ((intptr_t*)_2)[1] = _24087;
    RefDS(_24088);
    ((intptr_t*)_2)[2] = _24088;
    Ref(_24089);
    ((intptr_t*)_2)[3] = _24089;
    _24090 = MAKE_SEQ(_1);
    _24089 = NOVALUE;
    _24088 = NOVALUE;
    _24087 = NOVALUE;
    Ref(_24086);
    _0 = _cmd_45740;
    _cmd_45740 = _13format(_24086, _24090);
    DeRef(_0);
    _24086 = NOVALUE;
    _24090 = NOVALUE;

    /** buildsys.e:940			status = system_exec(cmd, 0)*/
    _status_45747 = system_exec_call(_cmd_45740, 0);

    /** buildsys.e:941			if status != 0 then*/
    if (_status_45747 == 0)
    goto L22; // [1032] 1085

    /** buildsys.e:942				ShowMsg(2, 187, { rc_file[D_NAME], exe_name[D_NAME] })*/
    _2 = (object)SEQ_PTR(_58rc_file_44905);
    _24094 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_58exe_name_44899);
    _24095 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_24095);
    RefDS(_24094);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24094;
    ((intptr_t *)_2)[2] = _24095;
    _24096 = MAKE_SEQ(_1);
    _24095 = NOVALUE;
    _24094 = NOVALUE;
    _44ShowMsg(2, 187, _24096, 1);
    _24096 = NOVALUE;

    /** buildsys.e:943				ShowMsg(2, 169, { status, cmd })*/
    RefDS(_cmd_45740);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _status_45747;
    ((intptr_t *)_2)[2] = _cmd_45740;
    _24097 = MAKE_SEQ(_1);
    _44ShowMsg(2, 169, _24097, 1);
    _24097 = NOVALUE;

    /** buildsys.e:945				goto "build_direct_cleanup"*/
    goto GF;
L22: 
L21: 

    /** buildsys.e:949	label "build_direct_cleanup"*/
GF:

    /** buildsys.e:950		if keep = 0 then*/
    if (_60keep_42096 != 0)
    goto L23; // [1094] 1241

    /** buildsys.e:951			for i = 1 to length(generated_files) do*/
    if (IS_SEQUENCE(_60generated_files_42093)){
            _24099 = SEQ_PTR(_60generated_files_42093)->length;
    }
    else {
        _24099 = 1;
    }
    {
        object _i_45981;
        _i_45981 = 1;
L24: 
        if (_i_45981 > _24099){
            goto L25; // [1105] 1159
        }

        /** buildsys.e:952				if verbose then*/
        if (_39verbose_16933 == 0)
        {
            goto L26; // [1116] 1138
        }
        else{
        }

        /** buildsys.e:953					ShowMsg(1, 347, { generated_files[i] })*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _24100 = (object)*(((s1_ptr)_2)->base + _i_45981);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_24100);
        ((intptr_t*)_2)[1] = _24100;
        _24101 = MAKE_SEQ(_1);
        _24100 = NOVALUE;
        _44ShowMsg(1, 347, _24101, 1);
        _24101 = NOVALUE;
L26: 

        /** buildsys.e:955				delete_file(generated_files[i])*/
        _2 = (object)SEQ_PTR(_60generated_files_42093);
        _24102 = (object)*(((s1_ptr)_2)->base + _i_45981);
        RefDS(_24102);
        _31695 = _16delete_file(_24102);
        _24102 = NOVALUE;
        DeRef(_31695);
        _31695 = NOVALUE;

        /** buildsys.e:956			end for*/
        _i_45981 = _i_45981 + 1;
        goto L24; // [1154] 1112
L25: 
        ;
    }

    /** buildsys.e:958			if length(res_file[D_ALTNAME]) then*/
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _24103 = (object)*(((s1_ptr)_2)->base + 11);
    if (IS_SEQUENCE(_24103)){
            _24104 = SEQ_PTR(_24103)->length;
    }
    else {
        _24104 = 1;
    }
    _24103 = NOVALUE;
    if (_24104 == 0)
    {
        _24104 = NOVALUE;
        goto L27; // [1172] 1192
    }
    else{
        _24104 = NOVALUE;
    }

    /** buildsys.e:959				delete_file(res_file[D_ALTNAME])*/
    _2 = (object)SEQ_PTR(_58res_file_44911);
    _24105 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_24105);
    _31694 = _16delete_file(_24105);
    _24105 = NOVALUE;
    DeRef(_31694);
    _31694 = NOVALUE;
L27: 

    /** buildsys.e:962			if remove_output_dir then*/
L23: 

    /** buildsys.e:972		chdir(cwd)*/
    RefDS(_cwd_45744);
    _31692 = _16chdir(_cwd_45744);
    DeRef(_31692);
    _31692 = NOVALUE;

    /** buildsys.e:973	end procedure*/
    DeRefDS(_the_file0_45734);
    DeRef(_cmd_45740);
    DeRef(_objs_45741);
    DeRef(_settings_45742);
    DeRefDS(_cwd_45744);
    DeRef(_link_files_45776);
    _24079 = NOVALUE;
    _24036 = NOVALUE;
    _24103 = NOVALUE;
    _24039 = NOVALUE;
    DeRef(_24002);
    _24002 = NOVALUE;
    DeRef(_24030);
    _24030 = NOVALUE;
    _24082 = NOVALUE;
    return;
    ;
}


void _58write_buildfile()
{
    object _make_command_46021 = NOVALUE;
    object _settings_46061 = NOVALUE;
    object _24132 = NOVALUE;
    object _24131 = NOVALUE;
    object _24127 = NOVALUE;
    object _24126 = NOVALUE;
    object _24125 = NOVALUE;
    object _24123 = NOVALUE;
    object _24122 = NOVALUE;
    object _24121 = NOVALUE;
    object _24120 = NOVALUE;
    object _24119 = NOVALUE;
    object _24118 = NOVALUE;
    object _24117 = NOVALUE;
    object _24116 = NOVALUE;
    object _0, _1, _2;
    

    /** buildsys.e:982		switch build_system_type do*/
    _0 = 3;
    switch ( _0 ){ 

        /** buildsys.e:983			case BUILD_MAKEFILE_FULL then*/
        case 2:

        /** buildsys.e:984				write_makefile_full()*/
        _58write_makefile_full();

        /** buildsys.e:986				if not silent then*/
        if (_39silent_16930 != 0)
        goto L1; // [22] 136

        /** buildsys.e:987					sequence make_command*/

        /** buildsys.e:988					if compiler_type = COMPILER_WATCOM then*/

        /** buildsys.e:991						make_command = "make -f "*/
        RefDS(_24115);
        DeRefi(_make_command_46021);
        _make_command_46021 = _24115;

        /** buildsys.e:994					ShowMsg(1, 170, { cfile_count + 2 })*/
        _24116 = _39cfile_count_16893 + 2;
        if ((object)((uintptr_t)_24116 + (uintptr_t)HIGH_BITS) >= 0){
            _24116 = NewDouble((eudouble)_24116);
        }
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24116;
        _24117 = MAKE_SEQ(_1);
        _24116 = NOVALUE;
        _44ShowMsg(1, 170, _24117, 1);
        _24117 = NOVALUE;

        /** buildsys.e:996					if sequence(output_dir) and length(output_dir) > 0 then*/
        _24118 = 1;
        if (_24118 == 0) {
            goto L2; // [78] 118
        }
        _24120 = 0;
        _24121 = (0 > 0);
        _24120 = NOVALUE;
        if (_24121 == 0)
        {
            DeRef(_24121);
            _24121 = NOVALUE;
            goto L2; // [92] 118
        }
        else{
            DeRef(_24121);
            _24121 = NOVALUE;
        }

        /** buildsys.e:997						ShowMsg(1, 174, { output_dir, make_command, file0 })*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_60output_dir_42103);
        ((intptr_t*)_2)[1] = _60output_dir_42103;
        RefDS(_make_command_46021);
        ((intptr_t*)_2)[2] = _make_command_46021;
        RefDS(_60file0_44056);
        ((intptr_t*)_2)[3] = _60file0_44056;
        _24122 = MAKE_SEQ(_1);
        _44ShowMsg(1, 174, _24122, 1);
        _24122 = NOVALUE;
        goto L3; // [115] 135
L2: 

        /** buildsys.e:999						ShowMsg(1, 172, { make_command, file0 })*/
        RefDS(_60file0_44056);
        RefDS(_make_command_46021);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _make_command_46021;
        ((intptr_t *)_2)[2] = _60file0_44056;
        _24123 = MAKE_SEQ(_1);
        _44ShowMsg(1, 172, _24123, 1);
        _24123 = NOVALUE;
L3: 
L1: 
        DeRefi(_make_command_46021);
        _make_command_46021 = NOVALUE;
        goto L4; // [138] 263

        /** buildsys.e:1003			case BUILD_MAKEFILE_PARTIAL then*/
        case 1:

        /** buildsys.e:1004				write_makefile_partial()*/
        _58write_makefile_partial();

        /** buildsys.e:1006				if not silent then*/
        if (_39silent_16930 != 0)
        goto L4; // [152] 263

        /** buildsys.e:1007					ShowMsg(1, 170, { cfile_count + 2 })*/
        _24125 = _39cfile_count_16893 + 2;
        if ((object)((uintptr_t)_24125 + (uintptr_t)HIGH_BITS) >= 0){
            _24125 = NewDouble((eudouble)_24125);
        }
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24125;
        _24126 = MAKE_SEQ(_1);
        _24125 = NOVALUE;
        _44ShowMsg(1, 170, _24126, 1);
        _24126 = NOVALUE;

        /** buildsys.e:1008					ShowMsg(1, 173, { file0 })*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_60file0_44056);
        ((intptr_t*)_2)[1] = _60file0_44056;
        _24127 = MAKE_SEQ(_1);
        _44ShowMsg(1, 173, _24127, 1);
        _24127 = NOVALUE;
        goto L4; // [188] 263

        /** buildsys.e:1011			case BUILD_DIRECT then*/
        case 3:

        /** buildsys.e:1012				build_direct()*/
        RefDS(_21928);
        _58build_direct(0, _21928);

        /** buildsys.e:1014				if not silent then*/
        if (_39silent_16930 != 0)
        goto L5; // [204] 215

        /** buildsys.e:1015					sequence settings = setup_build()*/
        _0 = _settings_46061;
        _settings_46061 = _58setup_build();
        DeRef(_0);
L5: 
        DeRef(_settings_46061);
        _settings_46061 = NOVALUE;
        goto L4; // [217] 263

        /** buildsys.e:1019			case BUILD_NONE then*/
        case 0:

        /** buildsys.e:1020				if not silent then*/
        if (_39silent_16930 != 0)
        goto L4; // [227] 263

        /** buildsys.e:1021					ShowMsg(1, 170, { cfile_count + 2 })*/
        _24131 = _39cfile_count_16893 + 2;
        if ((object)((uintptr_t)_24131 + (uintptr_t)HIGH_BITS) >= 0){
            _24131 = NewDouble((eudouble)_24131);
        }
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _24131;
        _24132 = MAKE_SEQ(_1);
        _24131 = NOVALUE;
        _44ShowMsg(1, 170, _24132, 1);
        _24132 = NOVALUE;
        goto L4; // [249] 263

        /** buildsys.e:1026			case else*/
        default:

        /** buildsys.e:1027				CompileErr(151)*/
        RefDS(_21928);
        _52CompileErr(151, _21928, 0);
    ;}L4: 

    /** buildsys.e:1029	end procedure*/
    return;
    ;
}



// 0x127A8343
