// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _3extract_options(object _s_63927)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg extract_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg extract_options pc: 3 op: STARTLINE (58)

    /** traninit.e:69		return s*/
    // SubProg extract_options pc: 5 op: RETURNF (28)

// Exiting block BLOCK: extract_options
    return _s_63927;
    // SubProg extract_options pc: 9 op: BADRETURNF (43)
    ;
}


void _3transoptions()
{
    object _tranopts_64088 = NOVALUE;
    object _opts_64100 = NOVALUE;
    object _opt_keys_64106 = NOVALUE;
    object _option_w_64108 = NOVALUE;
    object _key_64112 = NOVALUE;
    object _val_64114 = NOVALUE;
    object _tmp_64217 = NOVALUE;
    object _tmp_64237 = NOVALUE;
    object _filetype_64262 = NOVALUE;
    object _31937 = NOVALUE; // 64427 31937
    object _31936 = NOVALUE; // 64426 31936
    object _31935 = NOVALUE; // 64420 31935
    object _31934 = NOVALUE; // 64419 31934
    object _31932 = NOVALUE; // 64417 31932
    object _31931 = NOVALUE; // 64416 31931
    object _31930 = NOVALUE; // 64408 31930
    object _31929 = NOVALUE; // 64407 31929
    object _31928 = NOVALUE; // 64402 31928
    object _31927 = NOVALUE; // 64401 31927
// skipping _31925  name type: 0
// skipping _31924  name type: 0
// skipping _31923  name type: 0
    object _31922 = NOVALUE; // 64391 31922
    object _31921 = NOVALUE; // 64390 31921
    object _31920 = NOVALUE; // 64389 31920
// skipping _31919  name type: 0
    object _31917 = NOVALUE; // 64384 31917
    object _31916 = NOVALUE; // 64380 31916
    object _31915 = NOVALUE; // 64379 31915
    object _31914 = NOVALUE; // 64377 31914
    object _31913 = NOVALUE; // 64376 31913
// skipping _31912  name type: 0
// skipping _31911  name type: 0
    object _31910 = NOVALUE; // 64368 31910
// skipping _31909  name type: 0
    object _31907 = NOVALUE; // 64361 31907
    object _31906 = NOVALUE; // 64359 31906
    object _31905 = NOVALUE; // 64358 31905
    object _31904 = NOVALUE; // 64356 31904
// skipping _31903  name type: 0
    object _31902 = NOVALUE; // 64352 31902
// skipping _31900  name type: 0
    object _31899 = NOVALUE; // 64346 31899
    object _31898 = NOVALUE; // 64345 31898
    object _31897 = NOVALUE; // 64342 31897
    object _31896 = NOVALUE; // 64341 31896
    object _31895 = NOVALUE; // 64335 31895
    object _31894 = NOVALUE; // 64334 31894
    object _31893 = NOVALUE; // 64330 31893
    object _31892 = NOVALUE; // 64326 31892
    object _31891 = NOVALUE; // 64325 31891
    object _31890 = NOVALUE; // 64324 31890
    object _31889 = NOVALUE; // 64320 31889
    object _31888 = NOVALUE; // 64319 31888
    object _31887 = NOVALUE; // 64318 31887
// skipping _31886  name type: 0
// skipping _31885  name type: 0
// skipping _31884  name type: 0
    object _31883 = NOVALUE; // 64294 31883
// skipping _31882  name type: 0
// skipping _31881  name type: 0
    object _31880 = NOVALUE; // 64280 31880
    object _31879 = NOVALUE; // 64279 31879
    object _31878 = NOVALUE; // 64278 31878
// skipping _31877  name type: 0
// skipping _31876  name type: 0
// skipping _31875  name type: 0
// skipping _31874  name type: 0
// skipping _31873  name type: 0
    object _31872 = NOVALUE; // 64241 31872
// skipping _31871  name type: 0
// skipping _31870  name type: 0
    object _31869 = NOVALUE; // 64229 31869
    object _31868 = NOVALUE; // 64228 31868
// skipping _31867  name type: 0
    object _31866 = NOVALUE; // 64225 31866
// skipping _31865  name type: 0
    object _31864 = NOVALUE; // 64221 31864
// skipping _31863  name type: 0
// skipping _31862  name type: 0
// skipping _31861  name type: 0
    object _31860 = NOVALUE; // 64207 31860
    object _31850 = NOVALUE; // 64177 31850
// skipping _31849  name type: 0
    object _31848 = NOVALUE; // 64173 31848
// skipping _31846  name type: 0
    object _31845 = NOVALUE; // 64166 31845
    object _31843 = NOVALUE; // 64144 31843
// skipping _31842  name type: 0
    object _31841 = NOVALUE; // 64141 31841
    object _31840 = NOVALUE; // 64140 31840
    object _31839 = NOVALUE; // 64135 31839
    object _31838 = NOVALUE; // 64134 31838
    object _31837 = NOVALUE; // 64128 31837
// skipping _31834  name type: 0
// skipping _31833  name type: 0
    object _31832 = NOVALUE; // 64111 31832
// skipping _31831  name type: 0
// skipping _31830  name type: 0
// skipping _31829  name type: 0
// skipping _31828  name type: 0
// skipping _31827  name type: 0
    object _31826 = NOVALUE; // 64091 31826
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg transoptions pc: 1 op: STARTLINE (58)

    /** traninit.e:112		sequence tranopts = sort( get_options() )*/
    // SubProg transoptions pc: 3 op: PROC (27)
    _31826 = _49get_options();
    // SubProg transoptions pc: 6 op: PROC (27)
    _0 = _tranopts_64088;
    _tranopts_64088 = _24sort(_31826, 1);
    DeRef(_0);
    _31826 = NOVALUE;
    // SubProg transoptions pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 13 op: STARTLINE (58)

    /** traninit.e:114		Argv = expand_config_options( Argv )*/
    // SubProg transoptions pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 17 op: PROC (27)
    RefDS(_36Argv_16447);
    _0 = _49expand_config_options(_36Argv_16447);
    DeRefDS(_36Argv_16447);
    _36Argv_16447 = _0;
    // SubProg transoptions pc: 21 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 23 op: STARTLINE (58)

    /** traninit.e:115		Argc = length(Argv)*/
    // SubProg transoptions pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_36Argv_16447)){
            _36Argc_16446 = SEQ_PTR(_36Argv_16447)->length;
    }
    else {
        _36Argc_16446 = 1;
    }
    // SubProg transoptions pc: 30 op: INTEGER_CHECK (96)
    // SubProg transoptions pc: 32 op: STARTLINE (58)

    /** traninit.e:117		map:map opts = cmd_parse( tranopts, NO_HELP_ON_ERROR, Argv)*/
    // SubProg transoptions pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 38 op: PROC (27)
    RefDS(_tranopts_64088);
    RefDS(_36Argv_16447);
    _0 = _opts_64100;
    _opts_64100 = _4cmd_parse(_tranopts_64088, 10, _36Argv_16447);
    DeRef(_0);
    // SubProg transoptions pc: 44 op: STARTLINE (58)

    /** traninit.e:119		handle_common_options(opts)*/
    // SubProg transoptions pc: 46 op: PROC (27)
    Ref(_opts_64100);
    _49handle_common_options(_opts_64100);
    // SubProg transoptions pc: 49 op: STARTLINE (58)

    /** traninit.e:121		sequence opt_keys = map:keys(opts)*/
    // SubProg transoptions pc: 51 op: PROC (27)
    Ref(_opts_64100);
    _0 = _opt_keys_64106;
    _opt_keys_64106 = _29keys(_opts_64100, 0);
    DeRef(_0);
    // SubProg transoptions pc: 56 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 58 op: STARTLINE (58)

    /** traninit.e:122		integer option_w = 0*/
    // SubProg transoptions pc: 60 op: ASSIGN_I (113)
    _option_w_64108 = 0;
    // SubProg transoptions pc: 63 op: STARTLINE (58)

    /** traninit.e:124		for idx = 1 to length(opt_keys) do*/
    // SubProg transoptions pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_keys_64106)){
            _31832 = SEQ_PTR(_opt_keys_64106)->length;
    }
    else {
        _31832 = 1;
    }
    // SubProg transoptions pc: 68 op: FOR_I (125)
    {
        object _idx_64110;
        _idx_64110 = 1;
L1: // addr: 75 pc: 68 sub: 64086 op: 125
        if (_idx_64110 > _31832){
            goto L2; // [68] 878
        }
        // SubProg transoptions pc: 75 op: STARTLINE (58)

        /** traninit.e:126			sequence key = opt_keys[idx]*/
        // SubProg transoptions pc: 77 op: RHS_SUBS (25)
        DeRef(_key_64112);
        _2 = (object)SEQ_PTR(_opt_keys_64106);
        _key_64112 = (object)*(((s1_ptr)_2)->base + _idx_64110);
        Ref(_key_64112);
        // SubProg transoptions pc: 81 op: SEQUENCE_CHECK (97)
        // SubProg transoptions pc: 83 op: STARTLINE (58)

        /** traninit.e:127			object val = map:get(opts, key)*/
        // SubProg transoptions pc: 85 op: PROC (27)
        Ref(_opts_64100);
        RefDS(_key_64112);
        _0 = _val_64114;
        _val_64114 = _29get(_opts_64100, _key_64112, 0);
        DeRef(_0);
        // SubProg transoptions pc: 91 op: STARTLINE (58)

        /** traninit.e:129			switch key do*/
        // SubProg transoptions pc: 93 op: SWITCH (185)
        _1 = find(_key_64112, _31835);
        switch ( _1 ){ 
            // SubProg transoptions pc: 98 op: STARTLINE (58)

            /** traninit.e:130				case "silent" then*/
            // SubProg transoptions pc: 100 op: CASE (186)
            case 1:
            // SubProg transoptions pc: 102 op: STARTLINE (58)

            /** traninit.e:131					silent = TRUE*/
            // SubProg transoptions pc: 104 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 106 op: ASSIGN (18)
            _36silent_16551 = _13TRUE_452;
            // SubProg transoptions pc: 109 op: ELSE (23)
            goto L3; // [109] 869
            // SubProg transoptions pc: 111 op: STARTLINE (58)

            /** traninit.e:133				case "verbose" then*/
            // SubProg transoptions pc: 113 op: CASE (186)
            case 2:
            // SubProg transoptions pc: 115 op: STARTLINE (58)

            /** traninit.e:134					verbose = TRUE*/
            // SubProg transoptions pc: 117 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 119 op: ASSIGN (18)
            _36verbose_16554 = _13TRUE_452;
            // SubProg transoptions pc: 122 op: ELSE (23)
            goto L3; // [122] 869
            // SubProg transoptions pc: 124 op: STARTLINE (58)

            /** traninit.e:136				case "rc-file" then*/
            // SubProg transoptions pc: 126 op: CASE (186)
            case 3:
            // SubProg transoptions pc: 128 op: STARTLINE (58)

            /** traninit.e:137					rc_file[D_NAME] = canonical_path(val)*/
            // SubProg transoptions pc: 130 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 132 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 134 op: PROC (27)
            Ref(_val_64114);
            _31837 = _20canonical_path(_val_64114, 0, 0);
            // SubProg transoptions pc: 140 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_56rc_file_44902);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _56rc_file_44902 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 1);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _31837;
            if( _1 != _31837 ){
                DeRef(_1);
            }
            _31837 = NOVALUE;
            // SubProg transoptions pc: 144 op: STARTLINE (58)

            /** traninit.e:138					rc_file[D_ALTNAME] = adjust_for_command_line_passing((rc_file[D_NAME]))*/
            // SubProg transoptions pc: 146 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 148 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 150 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 152 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 154 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_56rc_file_44902);
            _31838 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg transoptions pc: 158 op: PROC (27)
            Ref(_31838);
            _31839 = _56adjust_for_command_line_passing(_31838);
            _31838 = NOVALUE;
            // SubProg transoptions pc: 162 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_56rc_file_44902);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _56rc_file_44902 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 11);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _31839;
            if( _1 != _31839 ){
                DeRef(_1);
            }
            _31839 = NOVALUE;
            // SubProg transoptions pc: 166 op: STARTLINE (58)

            /** traninit.e:139					if not file_exists(rc_file[D_NAME]) then*/
            // SubProg transoptions pc: 168 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 170 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 172 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_56rc_file_44902);
            _31840 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg transoptions pc: 176 op: PROC (27)
            Ref(_31840);
            _31841 = _20file_exists(_31840);
            _31840 = NOVALUE;
            // SubProg transoptions pc: 180 op: NOT_IFW (108)
            if (IS_ATOM_INT(_31841)) {
                if (_31841 != 0){
                    DeRef(_31841);
                    _31841 = NOVALUE;
                    goto L3; // [180] 869
                }
            }
            else {
                if (DBL_PTR(_31841)->dbl != 0.0){
                    DeRef(_31841);
                    _31841 = NOVALUE;
                    goto L3; // [180] 869
                }
            }
            DeRef(_31841);
            _31841 = NOVALUE;
            // SubProg transoptions pc: 183 op: STARTLINE (58)

            /** traninit.e:140						ShowMsg(2, 349, { val })*/
            // SubProg transoptions pc: 185 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_val_64114);
            ((intptr_t*)_2)[1] = _val_64114;
            _31843 = MAKE_SEQ(_1);
            // SubProg transoptions pc: 189 op: PROC (27)
            _42ShowMsg(2, 349, _31843, 1);
            _31843 = NOVALUE;
            // SubProg transoptions pc: 195 op: STARTLINE (58)

            /** traninit.e:141						abort(1)*/
            // SubProg transoptions pc: 197 op: ABORT (126)
            UserCleanup(1);
            // SubProg transoptions pc: 199 op: NOP1 (159)
            // SubProg transoptions pc: 200 op: ELSE (23)
            goto L3; // [200] 869
            // SubProg transoptions pc: 202 op: STARTLINE (58)

            /** traninit.e:144				case "cflags" then*/
            // SubProg transoptions pc: 204 op: CASE (186)
            case 4:
            // SubProg transoptions pc: 206 op: STARTLINE (58)

            /** traninit.e:145					cflags = val*/
            // SubProg transoptions pc: 208 op: ASSIGN (18)
            Ref(_val_64114);
            DeRef(_56cflags_44911);
            _56cflags_44911 = _val_64114;
            // SubProg transoptions pc: 211 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 213 op: ELSE (23)
            goto L3; // [213] 869
            // SubProg transoptions pc: 215 op: STARTLINE (58)

            /** traninit.e:147				case "extra-cflags" then*/
            // SubProg transoptions pc: 217 op: CASE (186)
            case 5:
            // SubProg transoptions pc: 219 op: STARTLINE (58)

            /** traninit.e:148					extra_cflags = val*/
            // SubProg transoptions pc: 221 op: ASSIGN (18)
            Ref(_val_64114);
            DeRef(_56extra_cflags_44912);
            _56extra_cflags_44912 = _val_64114;
            // SubProg transoptions pc: 224 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 226 op: ELSE (23)
            goto L3; // [226] 869
            // SubProg transoptions pc: 228 op: STARTLINE (58)

            /** traninit.e:150				case "lflags" then*/
            // SubProg transoptions pc: 230 op: CASE (186)
            case 6:
            // SubProg transoptions pc: 232 op: STARTLINE (58)

            /** traninit.e:151					lflags = val*/
            // SubProg transoptions pc: 234 op: ASSIGN (18)
            Ref(_val_64114);
            DeRef(_56lflags_44913);
            _56lflags_44913 = _val_64114;
            // SubProg transoptions pc: 237 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 239 op: ELSE (23)
            goto L3; // [239] 869
            // SubProg transoptions pc: 241 op: STARTLINE (58)

            /** traninit.e:153				case "extra-lflags" then*/
            // SubProg transoptions pc: 243 op: CASE (186)
            case 7:
            // SubProg transoptions pc: 245 op: STARTLINE (58)

            /** traninit.e:154					extra_lflags = val*/
            // SubProg transoptions pc: 247 op: ASSIGN (18)
            Ref(_val_64114);
            DeRef(_56extra_lflags_44914);
            _56extra_lflags_44914 = _val_64114;
            // SubProg transoptions pc: 250 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 252 op: ELSE (23)
            goto L3; // [252] 869
            // SubProg transoptions pc: 254 op: STARTLINE (58)

            /** traninit.e:156				case "wat" then*/
            // SubProg transoptions pc: 256 op: CASE (186)
            case 8:
            // SubProg transoptions pc: 258 op: STARTLINE (58)

            /** traninit.e:157					compiler_type = COMPILER_WATCOM*/
            // SubProg transoptions pc: 260 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 262 op: ASSIGN (18)
            _56compiler_type_44893 = 2;
            // SubProg transoptions pc: 265 op: INTEGER_CHECK (96)
            // SubProg transoptions pc: 267 op: ELSE (23)
            goto L3; // [267] 869
            // SubProg transoptions pc: 269 op: STARTLINE (58)

            /** traninit.e:159				case "gcc" then*/
            // SubProg transoptions pc: 271 op: CASE (186)
            case 9:
            // SubProg transoptions pc: 273 op: STARTLINE (58)

            /** traninit.e:160					compiler_type = COMPILER_GCC*/
            // SubProg transoptions pc: 275 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 277 op: ASSIGN (18)
            _56compiler_type_44893 = 1;
            // SubProg transoptions pc: 280 op: INTEGER_CHECK (96)
            // SubProg transoptions pc: 282 op: ELSE (23)
            goto L3; // [282] 869
            // SubProg transoptions pc: 284 op: STARTLINE (58)

            /** traninit.e:162				case "com" then*/
            // SubProg transoptions pc: 286 op: CASE (186)
            case 10:
            // SubProg transoptions pc: 288 op: STARTLINE (58)

            /** traninit.e:163					compiler_dir = val*/
            // SubProg transoptions pc: 290 op: ASSIGN (18)
            Ref(_val_64114);
            DeRef(_56compiler_dir_44895);
            _56compiler_dir_44895 = _val_64114;
            // SubProg transoptions pc: 293 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 295 op: ELSE (23)
            goto L3; // [295] 869
            // SubProg transoptions pc: 297 op: STARTLINE (58)

            /** traninit.e:165				case "con" then*/
            // SubProg transoptions pc: 299 op: CASE (186)
            case 11:
            // SubProg transoptions pc: 301 op: STARTLINE (58)

            /** traninit.e:166					con_option = TRUE*/
            // SubProg transoptions pc: 303 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 305 op: ASSIGN (18)
            _58con_option_42088 = _13TRUE_452;
            // SubProg transoptions pc: 308 op: STARTLINE (58)

            /** traninit.e:167					OpDefines &= { "CONSOLE" }*/
            // SubProg transoptions pc: 310 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 312 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            RefDS(_31844);
            ((intptr_t*)_2)[1] = _31844;
            _31845 = MAKE_SEQ(_1);
            // SubProg transoptions pc: 316 op: CONCAT (15)
            Concat((object_ptr)&_36OpDefines_16509, _36OpDefines_16509, _31845);
            DeRefDS(_31845);
            _31845 = NOVALUE;
            // SubProg transoptions pc: 320 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 322 op: ELSE (23)
            goto L3; // [322] 869
            // SubProg transoptions pc: 324 op: STARTLINE (58)

            /** traninit.e:169				case "dll", "so" then*/
            // SubProg transoptions pc: 326 op: CASE (186)
            case 12:
            // SubProg transoptions pc: 328 op: CASE (186)
            case 13:
            // SubProg transoptions pc: 330 op: STARTLINE (58)

            /** traninit.e:170					dll_option = TRUE*/
            // SubProg transoptions pc: 332 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 334 op: ASSIGN (18)
            _58dll_option_42086 = _13TRUE_452;
            // SubProg transoptions pc: 337 op: STARTLINE (58)

            /** traninit.e:171					OpDefines &= { "EUC_DLL" }*/
            // SubProg transoptions pc: 339 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 341 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            RefDS(_31847);
            ((intptr_t*)_2)[1] = _31847;
            _31848 = MAKE_SEQ(_1);
            // SubProg transoptions pc: 345 op: CONCAT (15)
            Concat((object_ptr)&_36OpDefines_16509, _36OpDefines_16509, _31848);
            DeRefDS(_31848);
            _31848 = NOVALUE;
            // SubProg transoptions pc: 349 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 351 op: ELSE (23)
            goto L3; // [351] 869
            // SubProg transoptions pc: 353 op: STARTLINE (58)

            /** traninit.e:173				case "plat" then*/
            // SubProg transoptions pc: 355 op: CASE (186)
            case 14:
            // SubProg transoptions pc: 357 op: STARTLINE (58)

            /** traninit.e:174					switch upper(val) do*/
            // SubProg transoptions pc: 359 op: PROC (27)
            Ref(_val_64114);
            _31850 = _17upper(_val_64114);
            // SubProg transoptions pc: 363 op: SWITCH (185)
            _1 = find(_31850, _31851);
            DeRef(_31850);
            _31850 = NOVALUE;
            switch ( _1 ){ 
                // SubProg transoptions pc: 368 op: STARTLINE (58)

                /** traninit.e:178						case "WINDOWS" then*/
                // SubProg transoptions pc: 370 op: CASE (186)
                case 1:
                // SubProg transoptions pc: 372 op: STARTLINE (58)

                /** traninit.e:179							set_host_platform( WIN32 )*/
                // SubProg transoptions pc: 374 op: GLOBAL_INIT_CHECK (109)
                // SubProg transoptions pc: 376 op: PROC (27)
                _41set_host_platform(2);
                // SubProg transoptions pc: 379 op: ELSE (23)
                goto L3; // [379] 869
                // SubProg transoptions pc: 381 op: STARTLINE (58)

                /** traninit.e:181						case "LINUX" then*/
                // SubProg transoptions pc: 383 op: CASE (186)
                case 2:
                // SubProg transoptions pc: 385 op: STARTLINE (58)

                /** traninit.e:182							set_host_platform( ULINUX )*/
                // SubProg transoptions pc: 387 op: GLOBAL_INIT_CHECK (109)
                // SubProg transoptions pc: 389 op: PROC (27)
                _41set_host_platform(3);
                // SubProg transoptions pc: 392 op: ELSE (23)
                goto L3; // [392] 869
                // SubProg transoptions pc: 394 op: STARTLINE (58)

                /** traninit.e:184						case "FREEBSD" then*/
                // SubProg transoptions pc: 396 op: CASE (186)
                case 3:
                // SubProg transoptions pc: 398 op: STARTLINE (58)

                /** traninit.e:185							set_host_platform( UFREEBSD )*/
                // SubProg transoptions pc: 400 op: GLOBAL_INIT_CHECK (109)
                // SubProg transoptions pc: 402 op: PROC (27)
                _41set_host_platform(8);
                // SubProg transoptions pc: 405 op: ELSE (23)
                goto L3; // [405] 869
                // SubProg transoptions pc: 407 op: STARTLINE (58)

                /** traninit.e:187						case "OSX" then*/
                // SubProg transoptions pc: 409 op: CASE (186)
                case 4:
                // SubProg transoptions pc: 411 op: STARTLINE (58)

                /** traninit.e:188							set_host_platform( UOSX )*/
                // SubProg transoptions pc: 413 op: GLOBAL_INIT_CHECK (109)
                // SubProg transoptions pc: 415 op: PROC (27)
                _41set_host_platform(4);
                // SubProg transoptions pc: 418 op: ELSE (23)
                goto L3; // [418] 869
                // SubProg transoptions pc: 420 op: STARTLINE (58)

                /** traninit.e:190						case "OPENBSD" then*/
                // SubProg transoptions pc: 422 op: CASE (186)
                case 5:
                // SubProg transoptions pc: 424 op: STARTLINE (58)

                /** traninit.e:191							set_host_platform( UOPENBSD )*/
                // SubProg transoptions pc: 426 op: GLOBAL_INIT_CHECK (109)
                // SubProg transoptions pc: 428 op: PROC (27)
                _41set_host_platform(6);
                // SubProg transoptions pc: 431 op: ELSE (23)
                goto L3; // [431] 869
                // SubProg transoptions pc: 433 op: STARTLINE (58)

                /** traninit.e:193						case "NETBSD" then*/
                // SubProg transoptions pc: 435 op: CASE (186)
                case 6:
                // SubProg transoptions pc: 437 op: STARTLINE (58)

                /** traninit.e:194							set_host_platform( UNETBSD )*/
                // SubProg transoptions pc: 439 op: GLOBAL_INIT_CHECK (109)
                // SubProg transoptions pc: 441 op: PROC (27)
                _41set_host_platform(7);
                // SubProg transoptions pc: 444 op: ELSE (23)
                goto L3; // [444] 869
                // SubProg transoptions pc: 446 op: STARTLINE (58)

                /** traninit.e:196						case else*/
                // SubProg transoptions pc: 448 op: CASE (186)
                case 0:
                // SubProg transoptions pc: 450 op: STARTLINE (58)

                /** traninit.e:197							ShowMsg(2, 201, { val, "WINDOWS, LINUX, FREEBSD, OSX, OPENBSD, NETBSD" })*/
                // SubProg transoptions pc: 452 op: RIGHT_BRACE_2 (85)
                RefDS(_31859);
                Ref(_val_64114);
                _1 = NewS1(2);
                _2 = (object)((s1_ptr)_1)->base;
                ((intptr_t *)_2)[1] = _val_64114;
                ((intptr_t *)_2)[2] = _31859;
                _31860 = MAKE_SEQ(_1);
                // SubProg transoptions pc: 456 op: PROC (27)
                _42ShowMsg(2, 201, _31860, 1);
                _31860 = NOVALUE;
                // SubProg transoptions pc: 462 op: STARTLINE (58)

                /** traninit.e:198							abort(1)*/
                // SubProg transoptions pc: 464 op: ABORT (126)
                UserCleanup(1);
                // SubProg transoptions pc: 466 op: NOPSWITCH (187)
            ;}            // SubProg transoptions pc: 467 op: ELSE (23)
            goto L3; // [467] 869
            // SubProg transoptions pc: 469 op: STARTLINE (58)

            /** traninit.e:201				case "lib" then*/
            // SubProg transoptions pc: 471 op: CASE (186)
            case 15:
            // SubProg transoptions pc: 473 op: STARTLINE (58)

            /** traninit.e:202					user_library = canonical_path(val)*/
            // SubProg transoptions pc: 475 op: PROC (27)
            Ref(_val_64114);
            _0 = _20canonical_path(_val_64114, 0, 0);
            DeRef(_58user_library_42098);
            _58user_library_42098 = _0;
            // SubProg transoptions pc: 481 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 483 op: ELSE (23)
            goto L3; // [483] 869
            // SubProg transoptions pc: 485 op: STARTLINE (58)

            /** traninit.e:204				case "lib-pic" then*/
            // SubProg transoptions pc: 487 op: CASE (186)
            case 16:
            // SubProg transoptions pc: 489 op: STARTLINE (58)

            /** traninit.e:205					user_pic_library = canonical_path( val )*/
            // SubProg transoptions pc: 491 op: PROC (27)
            Ref(_val_64114);
            _0 = _20canonical_path(_val_64114, 0, 0);
            DeRef(_58user_pic_library_42099);
            _58user_pic_library_42099 = _0;
            // SubProg transoptions pc: 497 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 499 op: ELSE (23)
            goto L3; // [499] 869
            // SubProg transoptions pc: 501 op: STARTLINE (58)

            /** traninit.e:207				case "stack" then*/
            // SubProg transoptions pc: 503 op: CASE (186)
            case 17:
            // SubProg transoptions pc: 505 op: STARTLINE (58)

            /** traninit.e:208					sequence tmp = value(val)*/
            // SubProg transoptions pc: 507 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 509 op: PROC (27)
            Ref(_val_64114);
            _0 = _tmp_64217;
            _tmp_64217 = _6value(_val_64114, 1, _6GET_SHORT_ANSWER_11242);
            DeRef(_0);
            // SubProg transoptions pc: 515 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 517 op: STARTLINE (58)

            /** traninit.e:209					if tmp[1] = GET_SUCCESS then*/
            // SubProg transoptions pc: 519 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_tmp_64217);
            _31864 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg transoptions pc: 523 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 525 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _31864, 0)){
                _31864 = NOVALUE;
                goto L4; // [525] 557
            }
            _31864 = NOVALUE;
            // SubProg transoptions pc: 529 op: STARTLINE (58)

            /** traninit.e:210						if tmp[2] >= 16384 then*/
            // SubProg transoptions pc: 531 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_tmp_64217);
            _31866 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg transoptions pc: 535 op: GREATEREQ_IFW (103)
            if (binary_op_a(LESS, _31866, 16384)){
                _31866 = NOVALUE;
                goto L5; // [535] 556
            }
            _31866 = NOVALUE;
            // SubProg transoptions pc: 539 op: STARTLINE (58)

            /** traninit.e:211							total_stack_size = floor(tmp[2] / 4) * 4*/
            // SubProg transoptions pc: 541 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_tmp_64217);
            _31868 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg transoptions pc: 545 op: FLOOR_DIV (63)
            if (IS_ATOM_INT(_31868)) {
                if (4 > 0 && _31868 >= 0) {
                    _31869 = _31868 / 4;
                }
                else {
                    temp_dbl = EUFLOOR((eudouble)_31868 / (eudouble)4);
                    if (_31868 != MININT)
                    _31869 = (object)temp_dbl;
                    else
                    _31869 = NewDouble(temp_dbl);
                }
            }
            else {
                _2 = binary_op(DIVIDE, _31868, 4);
                _31869 = unary_op(FLOOR, _2);
                DeRef(_2);
            }
            _31868 = NOVALUE;
            // SubProg transoptions pc: 549 op: MULTIPLY (13)
            if (IS_ATOM_INT(_31869)) {
                _58total_stack_size_42101 = _31869 * 4;
            }
            else {
                _58total_stack_size_42101 = binary_op(MULTIPLY, _31869, 4);
            }
            DeRef(_31869);
            _31869 = NOVALUE;
            // SubProg transoptions pc: 553 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_58total_stack_size_42101)) {
                _1 = (object)(DBL_PTR(_58total_stack_size_42101)->dbl);
                DeRefDS(_58total_stack_size_42101);
                _58total_stack_size_42101 = _1;
            }
            // SubProg transoptions pc: 555 op: NOP1 (159)
L5: // addr: 556 pc: 555 sub: 64086 op: 159
            // SubProg transoptions pc: 556 op: NOP1 (159)
L4: // addr: 557 pc: 556 sub: 64086 op: 159
            // SubProg transoptions pc: 557 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var tmp_64217
            DeRef(_tmp_64217);
            _tmp_64217 = NOVALUE;
            // SubProg transoptions pc: 559 op: ELSE (23)
            goto L3; // [559] 869
            // SubProg transoptions pc: 561 op: STARTLINE (58)

            /** traninit.e:215				case "debug" then*/
            // SubProg transoptions pc: 563 op: CASE (186)
            case 18:
            // SubProg transoptions pc: 565 op: STARTLINE (58)

            /** traninit.e:216					debug_option = TRUE*/
            // SubProg transoptions pc: 567 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 569 op: ASSIGN (18)
            _58debug_option_42096 = _13TRUE_452;
            // SubProg transoptions pc: 572 op: STARTLINE (58)

            /** traninit.e:217					keep = TRUE -- you'll need the sources to debug*/
            // SubProg transoptions pc: 574 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 576 op: ASSIGN (18)
            _58keep_42093 = _13TRUE_452;
            // SubProg transoptions pc: 579 op: ELSE (23)
            goto L3; // [579] 869
            // SubProg transoptions pc: 581 op: STARTLINE (58)

            /** traninit.e:219				case "maxsize" then*/
            // SubProg transoptions pc: 583 op: CASE (186)
            case 19:
            // SubProg transoptions pc: 585 op: STARTLINE (58)

            /** traninit.e:220					sequence tmp = value(val)*/
            // SubProg transoptions pc: 587 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 589 op: PROC (27)
            Ref(_val_64114);
            _0 = _tmp_64237;
            _tmp_64237 = _6value(_val_64114, 1, _6GET_SHORT_ANSWER_11242);
            DeRef(_0);
            // SubProg transoptions pc: 595 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 597 op: STARTLINE (58)

            /** traninit.e:221					if tmp[1] = GET_SUCCESS then*/
            // SubProg transoptions pc: 599 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_tmp_64237);
            _31872 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg transoptions pc: 603 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 605 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _31872, 0)){
                _31872 = NOVALUE;
                goto L6; // [605] 620
            }
            _31872 = NOVALUE;
            // SubProg transoptions pc: 609 op: STARTLINE (58)

            /** traninit.e:222						max_cfile_size = tmp[2]*/
            // SubProg transoptions pc: 611 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_tmp_64237);
            _56max_cfile_size_44909 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_56max_cfile_size_44909)){
                _56max_cfile_size_44909 = (object)DBL_PTR(_56max_cfile_size_44909)->dbl;
            }
            // SubProg transoptions pc: 617 op: ELSE (23)
            goto L7; // [617] 633
            // SubProg transoptions pc: 619 op: NOP1 (159)
L6: // addr: 620 pc: 619 sub: 64086 op: 159
            // SubProg transoptions pc: 620 op: STARTLINE (58)

            /** traninit.e:224						ShowMsg(2, 202)*/
            // SubProg transoptions pc: 622 op: PROC (27)
            RefDS(_21933);
            _42ShowMsg(2, 202, _21933, 1);
            // SubProg transoptions pc: 628 op: STARTLINE (58)

            /** traninit.e:225						abort(1)*/
            // SubProg transoptions pc: 630 op: ABORT (126)
            UserCleanup(1);
            // SubProg transoptions pc: 632 op: NOP1 (159)
L7: // addr: 633 pc: 632 sub: 64086 op: 159
            // SubProg transoptions pc: 633 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var tmp_64237
            DeRef(_tmp_64237);
            _tmp_64237 = NOVALUE;
            // SubProg transoptions pc: 635 op: ELSE (23)
            goto L3; // [635] 869
            // SubProg transoptions pc: 637 op: STARTLINE (58)

            /** traninit.e:228				case "keep" then*/
            // SubProg transoptions pc: 639 op: CASE (186)
            case 20:
            // SubProg transoptions pc: 641 op: STARTLINE (58)

            /** traninit.e:229					keep = TRUE*/
            // SubProg transoptions pc: 643 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 645 op: ASSIGN (18)
            _58keep_42093 = _13TRUE_452;
            // SubProg transoptions pc: 648 op: ELSE (23)
            goto L3; // [648] 869
            // SubProg transoptions pc: 650 op: STARTLINE (58)

            /** traninit.e:231				case "makefile-partial" then*/
            // SubProg transoptions pc: 652 op: CASE (186)
            case 21:
            // SubProg transoptions pc: 654 op: STARTLINE (58)

            /** traninit.e:232					build_system_type = BUILD_MAKEFILE_PARTIAL*/
            // SubProg transoptions pc: 656 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 658 op: ASSIGN (18)
            _56build_system_type_44889 = 1;
            // SubProg transoptions pc: 661 op: INTEGER_CHECK (96)
            // SubProg transoptions pc: 663 op: ELSE (23)
            goto L3; // [663] 869
            // SubProg transoptions pc: 665 op: STARTLINE (58)

            /** traninit.e:234				case "makefile" then*/
            // SubProg transoptions pc: 667 op: CASE (186)
            case 22:
            // SubProg transoptions pc: 669 op: STARTLINE (58)

            /** traninit.e:235					build_system_type = BUILD_MAKEFILE_FULL*/
            // SubProg transoptions pc: 671 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 673 op: ASSIGN (18)
            _56build_system_type_44889 = 2;
            // SubProg transoptions pc: 676 op: INTEGER_CHECK (96)
            // SubProg transoptions pc: 678 op: ELSE (23)
            goto L3; // [678] 869
            // SubProg transoptions pc: 680 op: STARTLINE (58)

            /** traninit.e:237				case "nobuild" then*/
            // SubProg transoptions pc: 682 op: CASE (186)
            case 23:
            // SubProg transoptions pc: 684 op: STARTLINE (58)

            /** traninit.e:238					build_system_type = BUILD_NONE*/
            // SubProg transoptions pc: 686 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 688 op: ASSIGN (18)
            _56build_system_type_44889 = 0;
            // SubProg transoptions pc: 691 op: INTEGER_CHECK (96)
            // SubProg transoptions pc: 693 op: ELSE (23)
            goto L3; // [693] 869
            // SubProg transoptions pc: 695 op: STARTLINE (58)

            /** traninit.e:240				case "build-dir" then*/
            // SubProg transoptions pc: 697 op: CASE (186)
            case 24:
            // SubProg transoptions pc: 699 op: STARTLINE (58)

            /** traninit.e:241					output_dir = val*/
            // SubProg transoptions pc: 701 op: ASSIGN (18)
            Ref(_val_64114);
            DeRef(_58output_dir_42100);
            _58output_dir_42100 = _val_64114;
            // SubProg transoptions pc: 704 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 706 op: STARTLINE (58)

            /** traninit.e:242					integer filetype = file_type( output_dir )*/
            // SubProg transoptions pc: 708 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 710 op: PROC (27)
            RefDS(_58output_dir_42100);
            _filetype_64262 = _20file_type(_58output_dir_42100);
            // SubProg transoptions pc: 714 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_filetype_64262)) {
                _1 = (object)(DBL_PTR(_filetype_64262)->dbl);
                DeRefDS(_filetype_64262);
                _filetype_64262 = _1;
            }
            // SubProg transoptions pc: 716 op: STARTLINE (58)

            /** traninit.e:244					if filetype = FILETYPE_FILE then*/
            // SubProg transoptions pc: 718 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 720 op: EQUALS_IFW (104)
            if (_filetype_64262 != 1)
            goto L8; // [720] 741
            // SubProg transoptions pc: 724 op: STARTLINE (58)

            /** traninit.e:245						ShowMsg( 2, BUILDDIR_IS_FILE )*/
            // SubProg transoptions pc: 726 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 728 op: PROC (27)
            RefDS(_21933);
            _42ShowMsg(2, 605, _21933, 1);
            // SubProg transoptions pc: 734 op: STARTLINE (58)

            /** traninit.e:246						abort(1)*/
            // SubProg transoptions pc: 736 op: ABORT (126)
            UserCleanup(1);
            // SubProg transoptions pc: 738 op: ELSE (23)
            goto L9; // [738] 765
            // SubProg transoptions pc: 740 op: NOP1 (159)
L8: // addr: 741 pc: 740 sub: 64086 op: 159
            // SubProg transoptions pc: 741 op: STARTLINE (58)

            /** traninit.e:247					elsif filetype = FILETYPE_UNDEFINED then*/
            // SubProg transoptions pc: 743 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 745 op: EQUALS_IFW (104)
            if (_filetype_64262 != -1)
            goto LA; // [745] 764
            // SubProg transoptions pc: 749 op: STARTLINE (58)

            /** traninit.e:248						ShowMsg( 2, BUILDDIR_IS_UNDEFINED )*/
            // SubProg transoptions pc: 751 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 753 op: PROC (27)
            RefDS(_21933);
            _42ShowMsg(2, 606, _21933, 1);
            // SubProg transoptions pc: 759 op: STARTLINE (58)

            /** traninit.e:249						abort(1)*/
            // SubProg transoptions pc: 761 op: ABORT (126)
            UserCleanup(1);
            // SubProg transoptions pc: 763 op: NOP1 (159)
LA: // addr: 764 pc: 763 sub: 64086 op: 159
            // SubProg transoptions pc: 764 op: NOP1 (159)
L9: // addr: 765 pc: 764 sub: 64086 op: 159
            // SubProg transoptions pc: 765 op: STARTLINE (58)

            /** traninit.e:251					if find(output_dir[$], "/\\") = 0 then*/
            // SubProg transoptions pc: 767 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 769 op: LENGTH (42)
            if (IS_SEQUENCE(_58output_dir_42100)){
                    _31878 = SEQ_PTR(_58output_dir_42100)->length;
            }
            else {
                _31878 = 1;
            }
            // SubProg transoptions pc: 772 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_58output_dir_42100);
            _31879 = (object)*(((s1_ptr)_2)->base + _31878);
            // SubProg transoptions pc: 776 op: FIND_FROM (176)
            _31880 = find_from(_31879, _23836, 1);
            _31879 = NOVALUE;
            // SubProg transoptions pc: 781 op: EQUALS_IFW_I (121)
            if (_31880 != 0)
            goto LB; // [781] 796
            // SubProg transoptions pc: 785 op: STARTLINE (58)

            /** traninit.e:252						output_dir &= '/'*/
            // SubProg transoptions pc: 787 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 789 op: CONCAT (15)
            Append(&_58output_dir_42100, _58output_dir_42100, 47);
            // SubProg transoptions pc: 793 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 795 op: NOP1 (159)
LB: // addr: 796 pc: 795 sub: 64086 op: 159
            // SubProg transoptions pc: 796 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var filetype_64262
            // SubProg transoptions pc: 798 op: ELSE (23)
            goto L3; // [798] 869
            // SubProg transoptions pc: 800 op: STARTLINE (58)

            /** traninit.e:255				case "force-build" then*/
            // SubProg transoptions pc: 802 op: CASE (186)
            case 25:
            // SubProg transoptions pc: 804 op: STARTLINE (58)

            /** traninit.e:256					force_build = 1*/
            // SubProg transoptions pc: 806 op: ASSIGN (18)
            _56force_build_44915 = 1;
            // SubProg transoptions pc: 809 op: INTEGER_CHECK (96)
            // SubProg transoptions pc: 811 op: ELSE (23)
            goto L3; // [811] 869
            // SubProg transoptions pc: 813 op: STARTLINE (58)

            /** traninit.e:258				case "o" then*/
            // SubProg transoptions pc: 815 op: CASE (186)
            case 26:
            // SubProg transoptions pc: 817 op: STARTLINE (58)

            /** traninit.e:259					exe_name[D_NAME] = val*/
            // SubProg transoptions pc: 819 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 821 op: GLOBAL_INIT_CHECK (109)
            // SubProg transoptions pc: 823 op: ASSIGN_SUBS (16)
            Ref(_val_64114);
            _2 = (object)SEQ_PTR(_56exe_name_44896);
            _2 = (object)(((s1_ptr)_2)->base + 1);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _val_64114;
            DeRef(_1);
            // SubProg transoptions pc: 827 op: ELSE (23)
            goto L3; // [827] 869
            // SubProg transoptions pc: 829 op: STARTLINE (58)

            /** traninit.e:261				case "no-cygwin" then*/
            // SubProg transoptions pc: 831 op: CASE (186)
            case 27:
            // SubProg transoptions pc: 833 op: STARTLINE (58)

            /** traninit.e:262					mno_cygwin = 1*/
            // SubProg transoptions pc: 835 op: ASSIGN (18)
            _56mno_cygwin_44917 = 1;
            // SubProg transoptions pc: 838 op: INTEGER_CHECK (96)
            // SubProg transoptions pc: 840 op: ELSE (23)
            goto L3; // [840] 869
            // SubProg transoptions pc: 842 op: STARTLINE (58)

            /** traninit.e:264				case "arch" then*/
            // SubProg transoptions pc: 844 op: CASE (186)
            case 28:
            // SubProg transoptions pc: 846 op: STARTLINE (58)

            /** traninit.e:265					set_target_arch( upper( val ) )*/
            // SubProg transoptions pc: 848 op: PROC (27)
            Ref(_val_64114);
            _31883 = _17upper(_val_64114);
            // SubProg transoptions pc: 852 op: PROC (27)
            _41set_target_arch(_31883);
            _31883 = NOVALUE;
            // SubProg transoptions pc: 855 op: ELSE (23)
            goto L3; // [855] 869
            // SubProg transoptions pc: 857 op: STARTLINE (58)

            /** traninit.e:267				case "cc-prefix" then*/
            // SubProg transoptions pc: 859 op: CASE (186)
            case 29:
            // SubProg transoptions pc: 861 op: STARTLINE (58)

            /** traninit.e:268					compiler_prefix = val*/
            // SubProg transoptions pc: 863 op: ASSIGN (18)
            Ref(_val_64114);
            DeRef(_56compiler_prefix_44894);
            _56compiler_prefix_44894 = _val_64114;
            // SubProg transoptions pc: 866 op: SEQUENCE_CHECK (97)
            // SubProg transoptions pc: 868 op: NOPSWITCH (187)
        ;}L3: // addr: 869 pc: 868 sub: 64086 op: 187
        // SubProg transoptions pc: 869 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var key_64112
        DeRef(_key_64112);
        _key_64112 = NOVALUE;

// block var val_64114
        DeRef(_val_64114);
        _val_64114 = NOVALUE;
        // SubProg transoptions pc: 871 op: STARTLINE (58)

        /** traninit.e:271		end for*/
        // SubProg transoptions pc: 873 op: ENDFOR_INT_UP1 (54)
        _idx_64110 = _idx_64110 + 1;
        goto L1; // [873] 75
L2: // addr: 878 pc: 873 sub: 64086 op: 54
        ;
    }
    // SubProg transoptions pc: 878 op: STARTLINE (58)

    /** traninit.e:274		if dll_option then*/
    // SubProg transoptions pc: 880 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 882 op: IF (20)
    if (_58dll_option_42086 == 0)
    {
        goto LC; // [882] 919
    }
    else{
    }
    // SubProg transoptions pc: 885 op: STARTLINE (58)

    /** traninit.e:275			if TX86_64  then*/
    // SubProg transoptions pc: 887 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 889 op: IF (20)
    if (_41TX86_64_21226 == 0)
    {
        goto LD; // [889] 905
    }
    else{
    }
    // SubProg transoptions pc: 892 op: STARTLINE (58)

    /** traninit.e:277				user_pic_library = check_library( user_pic_library )*/
    // SubProg transoptions pc: 894 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 896 op: PROC (27)
    RefDS(_58user_pic_library_42099);
    _0 = _3check_library(_58user_pic_library_42099);
    DeRefDS(_58user_pic_library_42099);
    _58user_pic_library_42099 = _0;
    // SubProg transoptions pc: 900 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 902 op: ELSE (23)
    goto LE; // [902] 930
    // SubProg transoptions pc: 904 op: NOP1 (159)
LD: // addr: 905 pc: 904 sub: 64086 op: 159
    // SubProg transoptions pc: 905 op: STARTLINE (58)

    /** traninit.e:279				user_library = check_library( user_library )*/
    // SubProg transoptions pc: 907 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 909 op: PROC (27)
    RefDS(_58user_library_42098);
    _0 = _3check_library(_58user_library_42098);
    DeRefDS(_58user_library_42098);
    _58user_library_42098 = _0;
    // SubProg transoptions pc: 913 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 915 op: NOP1 (159)
    // SubProg transoptions pc: 916 op: ELSE (23)
    goto LE; // [916] 930
    // SubProg transoptions pc: 918 op: NOP1 (159)
LC: // addr: 919 pc: 918 sub: 64086 op: 159
    // SubProg transoptions pc: 919 op: STARTLINE (58)

    /** traninit.e:282			user_library = check_library( user_library )*/
    // SubProg transoptions pc: 921 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 923 op: PROC (27)
    RefDS(_58user_library_42098);
    _0 = _3check_library(_58user_library_42098);
    DeRefDS(_58user_library_42098);
    _58user_library_42098 = _0;
    // SubProg transoptions pc: 927 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 929 op: NOP1 (159)
LE: // addr: 930 pc: 929 sub: 64086 op: 159
    // SubProg transoptions pc: 930 op: STARTLINE (58)

    /** traninit.e:285		if length(exe_name[D_NAME]) and not absolute_path(exe_name[D_NAME]) then*/
    // SubProg transoptions pc: 932 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 934 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 936 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _31887 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg transoptions pc: 940 op: LENGTH (42)
    if (IS_SEQUENCE(_31887)){
            _31888 = SEQ_PTR(_31887)->length;
    }
    else {
        _31888 = 1;
    }
    _31887 = NOVALUE;
    // SubProg transoptions pc: 943 op: SC1_AND_IF (146)
    if (_31888 == 0) {
        goto LF; // [943] 996
    }
    // SubProg transoptions pc: 947 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 949 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 951 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _31890 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg transoptions pc: 955 op: PROC (27)
    Ref(_31890);
    _31891 = _20absolute_path(_31890);
    _31890 = NOVALUE;
    // SubProg transoptions pc: 959 op: NOT (7)
    if (IS_ATOM_INT(_31891)) {
        _31892 = (_31891 == 0);
    }
    else {
        _31892 = unary_op(NOT, _31891);
    }
    DeRef(_31891);
    _31891 = NOVALUE;
    // SubProg transoptions pc: 962 op: NOP1 (159)
    // SubProg transoptions pc: 963 op: IF (20)
    if (_31892 == 0) {
        DeRef(_31892);
        _31892 = NOVALUE;
        goto LF; // [963] 996
    }
    else {
        if (!IS_ATOM_INT(_31892) && DBL_PTR(_31892)->dbl == 0.0){
            DeRef(_31892);
            _31892 = NOVALUE;
            goto LF; // [963] 996
        }
        DeRef(_31892);
        _31892 = NOVALUE;
    }
    DeRef(_31892);
    _31892 = NOVALUE;
    // SubProg transoptions pc: 966 op: STARTLINE (58)

    /** traninit.e:286			exe_name[D_NAME] = current_dir() & SLASH & exe_name[D_NAME]*/
    // SubProg transoptions pc: 968 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 970 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 972 op: PROC (27)
    _31893 = _20current_dir();
    // SubProg transoptions pc: 975 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 977 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 979 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 981 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _31894 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg transoptions pc: 985 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _31894;
        concat_list[1] = 47;
        concat_list[2] = _31893;
        Concat_N((object_ptr)&_31895, concat_list, 3);
    }
    _31894 = NOVALUE;
    DeRef(_31893);
    _31893 = NOVALUE;
    // SubProg transoptions pc: 991 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31895;
    if( _1 != _31895 ){
        DeRef(_1);
    }
    _31895 = NOVALUE;
    // SubProg transoptions pc: 995 op: NOP1 (159)
LF: // addr: 996 pc: 995 sub: 64086 op: 159
    // SubProg transoptions pc: 996 op: STARTLINE (58)

    /** traninit.e:288		exe_name[D_ALTNAME] = adjust_for_command_line_passing(exe_name[D_NAME])*/
    // SubProg transoptions pc: 998 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1000 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1002 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1004 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1006 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _31896 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg transoptions pc: 1010 op: PROC (27)
    Ref(_31896);
    _31897 = _56adjust_for_command_line_passing(_31896);
    _31896 = NOVALUE;
    // SubProg transoptions pc: 1014 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_56exe_name_44896);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31897;
    if( _1 != _31897 ){
        DeRef(_1);
    }
    _31897 = NOVALUE;
    // SubProg transoptions pc: 1018 op: STARTLINE (58)

    /** traninit.e:290		if length(map:get(opts, OPT_EXTRAS)) = 0 then*/
    // SubProg transoptions pc: 1020 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1022 op: PROC (27)
    Ref(_opts_64100);
    RefDS(_4OPT_EXTRAS_14179);
    _31898 = _29get(_opts_64100, _4OPT_EXTRAS_14179, 0);
    // SubProg transoptions pc: 1028 op: LENGTH (42)
    if (IS_SEQUENCE(_31898)){
            _31899 = SEQ_PTR(_31898)->length;
    }
    else {
        _31899 = 1;
    }
    DeRef(_31898);
    _31898 = NOVALUE;
    // SubProg transoptions pc: 1031 op: EQUALS_IFW_I (121)
    if (_31899 != 0)
    goto L10; // [1031] 1052
    // SubProg transoptions pc: 1035 op: STARTLINE (58)

    /** traninit.e:292			show_banner()*/
    // SubProg transoptions pc: 1037 op: PROC (27)
    _49show_banner();
    // SubProg transoptions pc: 1039 op: STARTLINE (58)

    /** traninit.e:293			ShowMsg(2, 203)*/
    // SubProg transoptions pc: 1041 op: PROC (27)
    RefDS(_21933);
    _42ShowMsg(2, 203, _21933, 1);
    // SubProg transoptions pc: 1047 op: STARTLINE (58)

    /** traninit.e:296			abort(1)*/
    // SubProg transoptions pc: 1049 op: ABORT (126)
    UserCleanup(1);
    // SubProg transoptions pc: 1051 op: NOP1 (159)
L10: // addr: 1052 pc: 1051 sub: 64086 op: 159
    // SubProg transoptions pc: 1052 op: STARTLINE (58)

    /** traninit.e:299		OpDefines &= { "EUC" }*/
    // SubProg transoptions pc: 1054 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1056 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_31901);
    ((intptr_t*)_2)[1] = _31901;
    _31902 = MAKE_SEQ(_1);
    // SubProg transoptions pc: 1060 op: CONCAT (15)
    Concat((object_ptr)&_36OpDefines_16509, _36OpDefines_16509, _31902);
    DeRefDS(_31902);
    _31902 = NOVALUE;
    // SubProg transoptions pc: 1064 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 1066 op: STARTLINE (58)

    /** traninit.e:301		if host_platform() = WIN32 and not con_option then*/
    // SubProg transoptions pc: 1068 op: PROC (27)
    _31904 = _41host_platform();
    // SubProg transoptions pc: 1071 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1073 op: EQUALS (3)
    if (IS_ATOM_INT(_31904)) {
        _31905 = (_31904 == 2);
    }
    else {
        _31905 = binary_op(EQUALS, _31904, 2);
    }
    DeRef(_31904);
    _31904 = NOVALUE;
    // SubProg transoptions pc: 1077 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31905)) {
        if (_31905 == 0) {
            goto L11; // [1077] 1103
        }
    }
    else {
        if (DBL_PTR(_31905)->dbl == 0.0) {
            goto L11; // [1077] 1103
        }
    }
    // SubProg transoptions pc: 1081 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1083 op: NOT (7)
    _31907 = (_58con_option_42088 == 0);
    // SubProg transoptions pc: 1086 op: NOP1 (159)
    // SubProg transoptions pc: 1087 op: IF (20)
    if (_31907 == 0)
    {
        DeRef(_31907);
        _31907 = NOVALUE;
        goto L11; // [1087] 1103
    }
    else{
        DeRef(_31907);
        _31907 = NOVALUE;
    }
    // SubProg transoptions pc: 1090 op: STARTLINE (58)

    /** traninit.e:302			OpDefines = append( OpDefines, "GUI" )*/
    // SubProg transoptions pc: 1092 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1094 op: APPEND (35)
    RefDS(_31908);
    Append(&_36OpDefines_16509, _36OpDefines_16509, _31908);
    // SubProg transoptions pc: 1098 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 1100 op: ELSE (23)
    goto L12; // [1100] 1127
    // SubProg transoptions pc: 1102 op: NOP1 (159)
L11: // addr: 1103 pc: 1102 sub: 64086 op: 159
    // SubProg transoptions pc: 1103 op: STARTLINE (58)

    /** traninit.e:303		elsif not find( "CONSOLE", OpDefines ) then*/
    // SubProg transoptions pc: 1105 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1107 op: FIND_FROM (176)
    _31910 = find_from(_31844, _36OpDefines_16509, 1);
    // SubProg transoptions pc: 1112 op: NOT_IFW (108)
    if (_31910 != 0)
    goto L13; // [1112] 1126
    _31910 = NOVALUE;
    // SubProg transoptions pc: 1115 op: STARTLINE (58)

    /** traninit.e:304			OpDefines = append( OpDefines, "CONSOLE" )*/
    // SubProg transoptions pc: 1117 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1119 op: APPEND (35)
    RefDS(_31844);
    Append(&_36OpDefines_16509, _36OpDefines_16509, _31844);
    // SubProg transoptions pc: 1123 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 1125 op: NOP1 (159)
L13: // addr: 1126 pc: 1125 sub: 64086 op: 159
    // SubProg transoptions pc: 1126 op: NOP1 (159)
L12: // addr: 1127 pc: 1126 sub: 64086 op: 159
    // SubProg transoptions pc: 1127 op: STARTLINE (58)

    /** traninit.e:307		ifdef not EUDIS then*/
    // SubProg transoptions pc: 1129 op: STARTLINE (58)

    /** traninit.e:308			if build_system_type = BUILD_DIRECT and length(output_dir) = 0 then*/
    // SubProg transoptions pc: 1131 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1133 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1135 op: EQUALS (3)
    _31913 = (_56build_system_type_44889 == 3);
    // SubProg transoptions pc: 1139 op: SC1_AND_IF (146)
    if (_31913 == 0) {
        goto L14; // [1139] 1237
    }
    // SubProg transoptions pc: 1143 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1145 op: LENGTH (42)
    if (IS_SEQUENCE(_58output_dir_42100)){
            _31915 = SEQ_PTR(_58output_dir_42100)->length;
    }
    else {
        _31915 = 1;
    }
    // SubProg transoptions pc: 1148 op: EQUALS (3)
    _31916 = (_31915 == 0);
    _31915 = NOVALUE;
    // SubProg transoptions pc: 1152 op: NOP1 (159)
    // SubProg transoptions pc: 1153 op: IF (20)
    if (_31916 == 0)
    {
        DeRef(_31916);
        _31916 = NOVALUE;
        goto L14; // [1153] 1237
    }
    else{
        DeRef(_31916);
        _31916 = NOVALUE;
    }
    // SubProg transoptions pc: 1156 op: STARTLINE (58)

    /** traninit.e:309				output_dir = temp_file("." & SLASH, "build-", "")*/
    // SubProg transoptions pc: 1158 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1160 op: CONCAT (15)
    Append(&_31917, _23124, 47);
    // SubProg transoptions pc: 1164 op: PROC (27)
    RefDS(_31918);
    RefDS(_21933);
    _0 = _20temp_file(_31917, _31918, _21933, 0);
    DeRef(_58output_dir_42100);
    _58output_dir_42100 = _0;
    _31917 = NOVALUE;
    // SubProg transoptions pc: 1171 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 1173 op: STARTLINE (58)

    /** traninit.e:310				if find(output_dir[$], "/\\") = 0 then*/
    // SubProg transoptions pc: 1175 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1177 op: LENGTH (42)
    if (IS_SEQUENCE(_58output_dir_42100)){
            _31920 = SEQ_PTR(_58output_dir_42100)->length;
    }
    else {
        _31920 = 1;
    }
    // SubProg transoptions pc: 1180 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_58output_dir_42100);
    _31921 = (object)*(((s1_ptr)_2)->base + _31920);
    // SubProg transoptions pc: 1184 op: FIND_FROM (176)
    _31922 = find_from(_31921, _23836, 1);
    _31921 = NOVALUE;
    // SubProg transoptions pc: 1189 op: EQUALS_IFW_I (121)
    if (_31922 != 0)
    goto L15; // [1189] 1204
    // SubProg transoptions pc: 1193 op: STARTLINE (58)

    /** traninit.e:311					output_dir &= '/'*/
    // SubProg transoptions pc: 1195 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1197 op: CONCAT (15)
    Append(&_58output_dir_42100, _58output_dir_42100, 47);
    // SubProg transoptions pc: 1201 op: SEQUENCE_CHECK (97)
    // SubProg transoptions pc: 1203 op: NOP1 (159)
L15: // addr: 1204 pc: 1203 sub: 64086 op: 159
    // SubProg transoptions pc: 1204 op: STARTLINE (58)

    /** traninit.e:314				if not silent then*/
    // SubProg transoptions pc: 1206 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1208 op: NOT_IFW (108)
    if (_36silent_16551 != 0)
    goto L16; // [1208] 1229
    // SubProg transoptions pc: 1211 op: STARTLINE (58)

    /** traninit.e:315					printf(1, "Build directory: %s\n", { abbreviate_path(output_dir) })*/
    // SubProg transoptions pc: 1213 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1215 op: PROC (27)
    RefDS(_58output_dir_42100);
    RefDS(_21933);
    _31927 = _20abbreviate_path(_58output_dir_42100, _21933);
    // SubProg transoptions pc: 1220 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31927;
    _31928 = MAKE_SEQ(_1);
    _31927 = NOVALUE;
    // SubProg transoptions pc: 1224 op: PRINTF (38)
    EPrintf(1, _31926, _31928);
    DeRefDS(_31928);
    _31928 = NOVALUE;
    // SubProg transoptions pc: 1228 op: NOP1 (159)
L16: // addr: 1229 pc: 1228 sub: 64086 op: 159
    // SubProg transoptions pc: 1229 op: STARTLINE (58)

    /** traninit.e:318				remove_output_dir = 1*/
    // SubProg transoptions pc: 1231 op: ASSIGN (18)
    _56remove_output_dir_44916 = 1;
    // SubProg transoptions pc: 1234 op: INTEGER_CHECK (96)
    // SubProg transoptions pc: 1236 op: NOP1 (159)
L14: // addr: 1237 pc: 1236 sub: 64086 op: 159
    // SubProg transoptions pc: 1237 op: STARTLINE (58)

    /** traninit.e:322		if length(rc_file[D_NAME]) then*/
    // SubProg transoptions pc: 1239 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1241 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1243 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _31929 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg transoptions pc: 1247 op: LENGTH (42)
    if (IS_SEQUENCE(_31929)){
            _31930 = SEQ_PTR(_31929)->length;
    }
    else {
        _31930 = 1;
    }
    _31929 = NOVALUE;
    // SubProg transoptions pc: 1250 op: IF (20)
    if (_31930 == 0)
    {
        _31930 = NOVALUE;
        goto L17; // [1250] 1312
    }
    else{
        _31930 = NOVALUE;
    }
    // SubProg transoptions pc: 1253 op: STARTLINE (58)

    /** traninit.e:323			res_file[D_NAME] = canonical_path(output_dir & filebase(rc_file[D_NAME]) & ".res")*/
    // SubProg transoptions pc: 1255 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1257 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1259 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1261 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1263 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1265 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_56rc_file_44902);
    _31931 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg transoptions pc: 1269 op: PROC (27)
    Ref(_31931);
    _31932 = _20filebase(_31931);
    _31931 = NOVALUE;
    // SubProg transoptions pc: 1273 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _31933;
        concat_list[1] = _31932;
        concat_list[2] = _58output_dir_42100;
        Concat_N((object_ptr)&_31934, concat_list, 3);
    }
    DeRef(_31932);
    _31932 = NOVALUE;
    // SubProg transoptions pc: 1279 op: PROC (27)
    _31935 = _20canonical_path(_31934, 0, 0);
    _31934 = NOVALUE;
    // SubProg transoptions pc: 1285 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _56res_file_44908 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31935;
    if( _1 != _31935 ){
        DeRef(_1);
    }
    _31935 = NOVALUE;
    // SubProg transoptions pc: 1289 op: STARTLINE (58)

    /** traninit.e:324			res_file[D_ALTNAME] = adjust_for_command_line_passing(res_file[D_NAME])*/
    // SubProg transoptions pc: 1291 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1293 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1295 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1297 op: GLOBAL_INIT_CHECK (109)
    // SubProg transoptions pc: 1299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    _31936 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg transoptions pc: 1303 op: PROC (27)
    Ref(_31936);
    _31937 = _56adjust_for_command_line_passing(_31936);
    _31936 = NOVALUE;
    // SubProg transoptions pc: 1307 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_56res_file_44908);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _56res_file_44908 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31937;
    if( _1 != _31937 ){
        DeRef(_1);
    }
    _31937 = NOVALUE;
    // SubProg transoptions pc: 1311 op: NOP1 (159)
L17: // addr: 1312 pc: 1311 sub: 64086 op: 159
    // SubProg transoptions pc: 1312 op: STARTLINE (58)

    /** traninit.e:327		finalize_command_line(opts)*/
    // SubProg transoptions pc: 1314 op: PROC (27)
    Ref(_opts_64100);
    _49finalize_command_line(_opts_64100);
    // SubProg transoptions pc: 1317 op: STARTLINE (58)

    /** traninit.e:328	end procedure*/
    // SubProg transoptions pc: 1319 op: RETURNP (29)

// Exiting block BLOCK: transoptions

// block var tranopts_64088
    DeRef(_tranopts_64088);

// block var opts_64100
    DeRef(_opts_64100);

// block var opt_keys_64106
    DeRef(_opt_keys_64106);

// block var option_w_64108
    DeRef(_31905);
    _31905 = NOVALUE;
    _31898 = NOVALUE;
    _31887 = NOVALUE;
    _31929 = NOVALUE;
    DeRef(_31913);
    _31913 = NOVALUE;
    return;
    // SubProg transoptions pc: 1322 op: BADRETURNF (43)
    ;
}


void _3OpenCFiles()
{
    object _32001 = NOVALUE; // 64603 32001
// skipping _31952  name type: 0
// skipping _31951  name type: 0
    object _31950 = NOVALUE; // 64461 31950
// skipping _31945  name type: 0
// skipping _31944  name type: 0
    object _31943 = NOVALUE; // 64443 31943
    object _31941 = NOVALUE; // 64437 31941
    object _31940 = NOVALUE; // 64436 31940
    object _31939 = NOVALUE; // 64434 31939
    object _31938 = NOVALUE; // 64433 31938
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg OpenCFiles pc: 1 op: STARTLINE (58)

    /** traninit.e:333		if sequence(output_dir) and length(output_dir) > 0 then*/
    // SubProg OpenCFiles pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 5 op: IS_A_SEQUENCE (68)
    _31938 = 1;
    // SubProg OpenCFiles pc: 8 op: SC1_AND_IF (146)
    if (_31938 == 0) {
        goto L1; // [8] 38
    }
    // SubProg OpenCFiles pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_58output_dir_42100)){
            _31940 = SEQ_PTR(_58output_dir_42100)->length;
    }
    else {
        _31940 = 1;
    }
    // SubProg OpenCFiles pc: 17 op: GREATER (6)
    _31941 = (_31940 > 0);
    _31940 = NOVALUE;
    // SubProg OpenCFiles pc: 21 op: NOP1 (159)
    // SubProg OpenCFiles pc: 22 op: IF (20)
    if (_31941 == 0)
    {
        DeRef(_31941);
        _31941 = NOVALUE;
        goto L1; // [22] 38
    }
    else{
        DeRef(_31941);
        _31941 = NOVALUE;
    }
    // SubProg OpenCFiles pc: 25 op: STARTLINE (58)

    /** traninit.e:334			create_directory(output_dir)*/
    // SubProg OpenCFiles pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 29 op: PROC (27)
    RefDS(_58output_dir_42100);
    _32001 = _20create_directory(_58output_dir_42100, 448, 1);
    // SubProg OpenCFiles pc: 35 op: DEREF_TEMP (208)
    DeRef(_32001);
    _32001 = NOVALUE;
    // SubProg OpenCFiles pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 64429 op: 159
    // SubProg OpenCFiles pc: 38 op: STARTLINE (58)

    /** traninit.e:337		c_code = open(output_dir & "init-.c", "w")*/
    // SubProg OpenCFiles pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 42 op: CONCAT (15)
    Concat((object_ptr)&_31943, _58output_dir_42100, _31942);
    // SubProg OpenCFiles pc: 46 op: OPEN (37)
    _55c_code_46102 = EOpen(_31943, _22069, 0);
    DeRefDS(_31943);
    _31943 = NOVALUE;
    // SubProg OpenCFiles pc: 51 op: INTEGER_CHECK (96)
    // SubProg OpenCFiles pc: 53 op: STARTLINE (58)

    /** traninit.e:338		if c_code = -1 then*/
    // SubProg OpenCFiles pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 57 op: EQUALS_IFW (104)
    if (_55c_code_46102 != -1)
    goto L2; // [57] 69
    // SubProg OpenCFiles pc: 61 op: STARTLINE (58)

    /** traninit.e:339			CompileErr(55)*/
    // SubProg OpenCFiles pc: 63 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(55, _21933, 0);
    // SubProg OpenCFiles pc: 68 op: NOP1 (159)
L2: // addr: 69 pc: 68 sub: 64429 op: 159
    // SubProg OpenCFiles pc: 69 op: STARTLINE (58)

    /** traninit.e:342		add_file("init-.c")*/
    // SubProg OpenCFiles pc: 71 op: PROC (27)
    RefDS(_31942);
    RefDS(_21933);
    _58add_file(_31942, _21933);
    // SubProg OpenCFiles pc: 75 op: STARTLINE (58)

    /** traninit.e:344		emit_c_output = TRUE*/
    // SubProg OpenCFiles pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 79 op: ASSIGN (18)
    _55emit_c_output_46099 = _13TRUE_452;
    // SubProg OpenCFiles pc: 82 op: STARTLINE (58)

    /** traninit.e:346		c_puts("#include \"")*/
    // SubProg OpenCFiles pc: 84 op: PROC (27)
    RefDS(_31947);
    _55c_puts(_31947);
    // SubProg OpenCFiles pc: 87 op: STARTLINE (58)

    /** traninit.e:347		c_puts("include/euphoria.h\"\n")*/
    // SubProg OpenCFiles pc: 89 op: PROC (27)
    RefDS(_31948);
    _55c_puts(_31948);
    // SubProg OpenCFiles pc: 92 op: STARTLINE (58)

    /** traninit.e:349		c_puts("#include \"main-.h\"\n\n")*/
    // SubProg OpenCFiles pc: 94 op: PROC (27)
    RefDS(_22075);
    _55c_puts(_22075);
    // SubProg OpenCFiles pc: 97 op: STARTLINE (58)

    /** traninit.e:350		c_h = open(output_dir & "main-.h", "w")*/
    // SubProg OpenCFiles pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 101 op: CONCAT (15)
    Concat((object_ptr)&_31950, _58output_dir_42100, _31949);
    // SubProg OpenCFiles pc: 105 op: OPEN (37)
    _55c_h_46103 = EOpen(_31950, _22069, 0);
    DeRefDS(_31950);
    _31950 = NOVALUE;
    // SubProg OpenCFiles pc: 110 op: INTEGER_CHECK (96)
    // SubProg OpenCFiles pc: 112 op: STARTLINE (58)

    /** traninit.e:351		if c_h = -1 then*/
    // SubProg OpenCFiles pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenCFiles pc: 116 op: EQUALS_IFW (104)
    if (_55c_h_46103 != -1)
    goto L3; // [116] 128
    // SubProg OpenCFiles pc: 120 op: STARTLINE (58)

    /** traninit.e:352			CompileErr(47)*/
    // SubProg OpenCFiles pc: 122 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(47, _21933, 0);
    // SubProg OpenCFiles pc: 127 op: NOP1 (159)
L3: // addr: 128 pc: 127 sub: 64429 op: 159
    // SubProg OpenCFiles pc: 128 op: STARTLINE (58)

    /** traninit.e:354		c_hputs("#include \"include/euphoria.h\"\n")*/
    // SubProg OpenCFiles pc: 130 op: PROC (27)
    RefDS(_22074);
    _55c_hputs(_22074);
    // SubProg OpenCFiles pc: 133 op: STARTLINE (58)

    /** traninit.e:356		add_file("main-.h")*/
    // SubProg OpenCFiles pc: 135 op: PROC (27)
    RefDS(_31949);
    RefDS(_21933);
    _58add_file(_31949, _21933);
    // SubProg OpenCFiles pc: 139 op: STARTLINE (58)

    /** traninit.e:357	end procedure*/
    // SubProg OpenCFiles pc: 141 op: RETURNP (29)

// Exiting block BLOCK: OpenCFiles
    return;
    // SubProg OpenCFiles pc: 144 op: BADRETURNF (43)
    ;
}


void _3InitBackEnd(object _c_64471)
{
    object _31983 = NOVALUE; // 64559 31983
    object _31982 = NOVALUE; // 64558 31982
// skipping _31981  name type: 0
    object _31980 = NOVALUE; // 64553 31980
    object _31979 = NOVALUE; // 64552 31979
    object _31978 = NOVALUE; // 64551 31978
    object _31977 = NOVALUE; // 64549 31977
    object _31976 = NOVALUE; // 64548 31976
    object _31973 = NOVALUE; // 64541 31973
    object _31972 = NOVALUE; // 64536 31972
// skipping _31971  name type: 0
// skipping _31970  name type: 0
    object _31969 = NOVALUE; // 64528 31969
    object _31968 = NOVALUE; // 64527 31968
    object _31965 = NOVALUE; // 64517 31965
    object _31964 = NOVALUE; // 64516 31964
    object _31962 = NOVALUE; // 64511 31962
// skipping _31960  name type: 0
    object _31959 = NOVALUE; // 64499 31959
// skipping _31958  name type: 0
// skipping _31954  name type: 0
// skipping _31953  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InitBackEnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_64471)) {
        _1 = (object)(DBL_PTR(_c_64471)->dbl);
        DeRefDS(_c_64471);
        _c_64471 = _1;
    }
    // SubProg InitBackEnd pc: 3 op: STARTLINE (58)

    /** traninit.e:363		if c = 1 then*/
    // SubProg InitBackEnd pc: 5 op: EQUALS_IFW_I (121)
    if (_c_64471 != 1)
    goto L1; // [5] 19
    // SubProg InitBackEnd pc: 9 op: STARTLINE (58)

    /** traninit.e:364			OpenCFiles()*/
    // SubProg InitBackEnd pc: 11 op: PROC (27)
    _3OpenCFiles();
    // SubProg InitBackEnd pc: 13 op: STARTLINE (58)

    /** traninit.e:366			return*/
    // SubProg InitBackEnd pc: 15 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: InitBackEnd

// block var c_64471
    return;
    // SubProg InitBackEnd pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 64469 op: 159
    // SubProg InitBackEnd pc: 19 op: STARTLINE (58)

    /** traninit.e:369		init_opcodes()*/
    // SubProg InitBackEnd pc: 21 op: PROC (27)
    _59init_opcodes();
    // SubProg InitBackEnd pc: 23 op: STARTLINE (58)

    /** traninit.e:370		transoptions()*/
    // SubProg InitBackEnd pc: 25 op: PROC (27)
    _3transoptions();
    // SubProg InitBackEnd pc: 27 op: STARTLINE (58)

    /** traninit.e:372		if compiler_type = COMPILER_UNKNOWN then*/
    // SubProg InitBackEnd pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 33 op: EQUALS_IFW (104)
    if (_56compiler_type_44893 != 0)
    goto L2; // [33] 75
    // SubProg InitBackEnd pc: 37 op: STARTLINE (58)

    /** traninit.e:373			if TWINDOWS then*/
    // SubProg InitBackEnd pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 41 op: IF (20)
    if (_41TWINDOWS_21210 == 0)
    {
        goto L3; // [41] 56
    }
    else{
    }
    // SubProg InitBackEnd pc: 44 op: STARTLINE (58)

    /** traninit.e:374				compiler_type = COMPILER_WATCOM*/
    // SubProg InitBackEnd pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 48 op: ASSIGN (18)
    _56compiler_type_44893 = 2;
    // SubProg InitBackEnd pc: 51 op: INTEGER_CHECK (96)
    // SubProg InitBackEnd pc: 53 op: ELSE (23)
    goto L4; // [53] 74
    // SubProg InitBackEnd pc: 55 op: NOP1 (159)
L3: // addr: 56 pc: 55 sub: 64469 op: 159
    // SubProg InitBackEnd pc: 56 op: STARTLINE (58)

    /** traninit.e:375			elsif TUNIX then*/
    // SubProg InitBackEnd pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 60 op: IF (20)
    if (_41TUNIX_21214 == 0)
    {
        goto L5; // [60] 73
    }
    else{
    }
    // SubProg InitBackEnd pc: 63 op: STARTLINE (58)

    /** traninit.e:376				compiler_type = COMPILER_GCC*/
    // SubProg InitBackEnd pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 67 op: ASSIGN (18)
    _56compiler_type_44893 = 1;
    // SubProg InitBackEnd pc: 70 op: INTEGER_CHECK (96)
    // SubProg InitBackEnd pc: 72 op: NOP1 (159)
L5: // addr: 73 pc: 72 sub: 64469 op: 159
    // SubProg InitBackEnd pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 64469 op: 159
    // SubProg InitBackEnd pc: 74 op: NOP1 (159)
L2: // addr: 75 pc: 74 sub: 64469 op: 159
    // SubProg InitBackEnd pc: 75 op: STARTLINE (58)

    /** traninit.e:380		switch compiler_type do*/
    // SubProg InitBackEnd pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 79 op: SWITCH_I (193)
    _0 = _56compiler_type_44893;
    switch ( _0 ){ 
        // SubProg InitBackEnd pc: 84 op: STARTLINE (58)

        /** traninit.e:381		  	case COMPILER_GCC then*/
        // SubProg InitBackEnd pc: 86 op: CASE (186)
        case 1:
        // SubProg InitBackEnd pc: 88 op: STARTLINE (58)

        /** traninit.e:383				break -- to avoid empty block warning*/
        // SubProg InitBackEnd pc: 90 op: ELSE (23)
        goto L6; // [90] 328
        // SubProg InitBackEnd pc: 92 op: ELSE (23)
        goto L6; // [92] 328
        // SubProg InitBackEnd pc: 94 op: STARTLINE (58)

        /** traninit.e:385			case COMPILER_WATCOM then*/
        // SubProg InitBackEnd pc: 96 op: CASE (186)
        case 2:
        // SubProg InitBackEnd pc: 98 op: STARTLINE (58)

        /** traninit.e:386				wat_path = getenv("WATCOM")*/
        // SubProg InitBackEnd pc: 100 op: GETENV (91)
        DeRefi(_36wat_path_16513);
        _36wat_path_16513 = EGetEnv(_31957);
        // SubProg InitBackEnd pc: 103 op: STARTLINE (58)

        /** traninit.e:388				if atom(wat_path) then*/
        // SubProg InitBackEnd pc: 105 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 107 op: IS_AN_ATOM (67)
        _31959 = IS_ATOM(_36wat_path_16513);
        // SubProg InitBackEnd pc: 110 op: IF (20)
        if (_31959 == 0)
        {
            _31959 = NOVALUE;
            goto L7; // [110] 146
        }
        else{
            _31959 = NOVALUE;
        }
        // SubProg InitBackEnd pc: 113 op: STARTLINE (58)

        /** traninit.e:389					if build_system_type = BUILD_DIRECT then*/
        // SubProg InitBackEnd pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 117 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 119 op: EQUALS_IFW (104)
        if (_56build_system_type_44889 != 3)
        goto L8; // [119] 133
        // SubProg InitBackEnd pc: 123 op: STARTLINE (58)

        /** traninit.e:392						CompileErr(159)*/
        // SubProg InitBackEnd pc: 125 op: PROC (27)
        RefDS(_21933);
        _50CompileErr(159, _21933, 0);
        // SubProg InitBackEnd pc: 130 op: ELSE (23)
        goto L6; // [130] 328
        // SubProg InitBackEnd pc: 132 op: NOP1 (159)
L8: // addr: 133 pc: 132 sub: 64469 op: 159
        // SubProg InitBackEnd pc: 133 op: STARTLINE (58)

        /** traninit.e:397						Warning(159, translator_warning_flag)*/
        // SubProg InitBackEnd pc: 135 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 137 op: PROC (27)
        RefDS(_21933);
        _50Warning(159, 128, _21933);
        // SubProg InitBackEnd pc: 142 op: NOP1 (159)
        // SubProg InitBackEnd pc: 143 op: ELSE (23)
        goto L6; // [143] 328
        // SubProg InitBackEnd pc: 145 op: NOP1 (159)
L7: // addr: 146 pc: 145 sub: 64469 op: 159
        // SubProg InitBackEnd pc: 146 op: STARTLINE (58)

        /** traninit.e:399				elsif find(' ', wat_path) then*/
        // SubProg InitBackEnd pc: 148 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 150 op: FIND_FROM (176)
        _31962 = find_from(32, _36wat_path_16513, 1);
        // SubProg InitBackEnd pc: 155 op: IF (20)
        if (_31962 == 0)
        {
            _31962 = NOVALUE;
            goto L9; // [155] 170
        }
        else{
            _31962 = NOVALUE;
        }
        // SubProg InitBackEnd pc: 158 op: STARTLINE (58)

        /** traninit.e:400					Warning( 214, translator_warning_flag)*/
        // SubProg InitBackEnd pc: 160 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 162 op: PROC (27)
        RefDS(_21933);
        _50Warning(214, 128, _21933);
        // SubProg InitBackEnd pc: 167 op: ELSE (23)
        goto L6; // [167] 328
        // SubProg InitBackEnd pc: 169 op: NOP1 (159)
L9: // addr: 170 pc: 169 sub: 64469 op: 159
        // SubProg InitBackEnd pc: 170 op: STARTLINE (58)

        /** traninit.e:401				elsif atom(getenv("INCLUDE")) then*/
        // SubProg InitBackEnd pc: 172 op: GETENV (91)
        _31964 = EGetEnv(_31963);
        // SubProg InitBackEnd pc: 175 op: IS_AN_ATOM (67)
        _31965 = IS_ATOM(_31964);
        DeRef(_31964);
        _31964 = NOVALUE;
        // SubProg InitBackEnd pc: 178 op: IF (20)
        if (_31965 == 0)
        {
            _31965 = NOVALUE;
            goto LA; // [178] 193
        }
        else{
            _31965 = NOVALUE;
        }
        // SubProg InitBackEnd pc: 181 op: STARTLINE (58)

        /** traninit.e:402					Warning( 215, translator_warning_flag )*/
        // SubProg InitBackEnd pc: 183 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 185 op: PROC (27)
        RefDS(_21933);
        _50Warning(215, 128, _21933);
        // SubProg InitBackEnd pc: 190 op: ELSE (23)
        goto L6; // [190] 328
        // SubProg InitBackEnd pc: 192 op: NOP1 (159)
LA: // addr: 193 pc: 192 sub: 64469 op: 159
        // SubProg InitBackEnd pc: 193 op: STARTLINE (58)

        /** traninit.e:403				elsif not file_exists(wat_path & SLASH & "binnt" & SLASH & "wcc386.exe") then*/
        // SubProg InitBackEnd pc: 195 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 197 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 199 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 201 op: CONCAT_N (157)
        {
            object concat_list[5];

            concat_list[0] = _31967;
            concat_list[1] = 47;
            concat_list[2] = _31966;
            concat_list[3] = 47;
            concat_list[4] = _36wat_path_16513;
            Concat_N((object_ptr)&_31968, concat_list, 5);
        }
        // SubProg InitBackEnd pc: 209 op: PROC (27)
        _31969 = _20file_exists(_31968);
        _31968 = NOVALUE;
        // SubProg InitBackEnd pc: 213 op: NOT_IFW (108)
        if (IS_ATOM_INT(_31969)) {
            if (_31969 != 0){
                DeRef(_31969);
                _31969 = NOVALUE;
                goto LB; // [213] 261
            }
        }
        else {
            if (DBL_PTR(_31969)->dbl != 0.0){
                DeRef(_31969);
                _31969 = NOVALUE;
                goto LB; // [213] 261
            }
        }
        DeRef(_31969);
        _31969 = NOVALUE;
        // SubProg InitBackEnd pc: 216 op: STARTLINE (58)

        /** traninit.e:404					if build_system_type = BUILD_DIRECT then*/
        // SubProg InitBackEnd pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 220 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 222 op: EQUALS_IFW (104)
        if (_56build_system_type_44889 != 3)
        goto LC; // [222] 242
        // SubProg InitBackEnd pc: 226 op: STARTLINE (58)

        /** traninit.e:405						CompileErr( 352, {wat_path})*/
        // SubProg InitBackEnd pc: 228 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 230 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_36wat_path_16513);
        ((intptr_t*)_2)[1] = _36wat_path_16513;
        _31972 = MAKE_SEQ(_1);
        // SubProg InitBackEnd pc: 234 op: PROC (27)
        _50CompileErr(352, _31972, 0);
        _31972 = NOVALUE;
        // SubProg InitBackEnd pc: 239 op: ELSE (23)
        goto L6; // [239] 328
        // SubProg InitBackEnd pc: 241 op: NOP1 (159)
LC: // addr: 242 pc: 241 sub: 64469 op: 159
        // SubProg InitBackEnd pc: 242 op: STARTLINE (58)

        /** traninit.e:407						Warning( 352, translator_warning_flag, {wat_path})*/
        // SubProg InitBackEnd pc: 244 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 246 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 248 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_36wat_path_16513);
        ((intptr_t*)_2)[1] = _36wat_path_16513;
        _31973 = MAKE_SEQ(_1);
        // SubProg InitBackEnd pc: 252 op: PROC (27)
        _50Warning(352, 128, _31973);
        _31973 = NOVALUE;
        // SubProg InitBackEnd pc: 257 op: NOP1 (159)
        // SubProg InitBackEnd pc: 258 op: ELSE (23)
        goto L6; // [258] 328
        // SubProg InitBackEnd pc: 260 op: NOP1 (159)
LB: // addr: 261 pc: 260 sub: 64469 op: 159
        // SubProg InitBackEnd pc: 261 op: STARTLINE (58)

        /** traninit.e:409				elsif match(upper(wat_path & "\\H;" & wat_path & "\\H\\NT"),*/
        // SubProg InitBackEnd pc: 263 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 265 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 267 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _31975;
            concat_list[1] = _36wat_path_16513;
            concat_list[2] = _31974;
            concat_list[3] = _36wat_path_16513;
            Concat_N((object_ptr)&_31976, concat_list, 4);
        }
        // SubProg InitBackEnd pc: 274 op: PROC (27)
        _31977 = _17upper(_31976);
        _31976 = NOVALUE;
        // SubProg InitBackEnd pc: 278 op: GETENV (91)
        _31978 = EGetEnv(_31963);
        // SubProg InitBackEnd pc: 281 op: PROC (27)
        _31979 = _17upper(_31978);
        _31978 = NOVALUE;
        // SubProg InitBackEnd pc: 285 op: MATCH_FROM (177)
        _31980 = e_match_from(_31977, _31979, 1);
        DeRef(_31977);
        _31977 = NOVALUE;
        DeRef(_31979);
        _31979 = NOVALUE;
        // SubProg InitBackEnd pc: 290 op: NOTEQ_IFW (105)
        if (_31980 == 1)
        goto L6; // [290] 328
        // SubProg InitBackEnd pc: 294 op: STARTLINE (58)

        /** traninit.e:412					Warning( 216, translator_warning_flag, {wat_path,getenv("INCLUDE")} )*/
        // SubProg InitBackEnd pc: 296 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitBackEnd pc: 300 op: GETENV (91)
        _31982 = EGetEnv(_31963);
        // SubProg InitBackEnd pc: 303 op: RIGHT_BRACE_2 (85)
        Ref(_36wat_path_16513);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _36wat_path_16513;
        ((intptr_t *)_2)[2] = _31982;
        _31983 = MAKE_SEQ(_1);
        _31982 = NOVALUE;
        // SubProg InitBackEnd pc: 307 op: PROC (27)
        _50Warning(216, 128, _31983);
        _31983 = NOVALUE;
        // SubProg InitBackEnd pc: 312 op: NOP1 (159)
        // SubProg InitBackEnd pc: 313 op: NOP1 (159)
        // SubProg InitBackEnd pc: 314 op: ELSE (23)
        goto L6; // [314] 328
        // SubProg InitBackEnd pc: 316 op: STARTLINE (58)

        /** traninit.e:415			case else*/
        // SubProg InitBackEnd pc: 318 op: CASE (186)
        default:
        // SubProg InitBackEnd pc: 320 op: STARTLINE (58)

        /** traninit.e:416				CompileErr(150)*/
        // SubProg InitBackEnd pc: 322 op: PROC (27)
        RefDS(_21933);
        _50CompileErr(150, _21933, 0);
        // SubProg InitBackEnd pc: 327 op: NOPSWITCH (187)
    ;}L6: // addr: 328 pc: 327 sub: 64469 op: 187
    // SubProg InitBackEnd pc: 328 op: STARTLINE (58)

    /** traninit.e:419	end procedure*/
    // SubProg InitBackEnd pc: 330 op: RETURNP (29)

// Exiting block BLOCK: InitBackEnd

// block var c_64471
    return;
    // SubProg InitBackEnd pc: 333 op: BADRETURNF (43)
    ;
}


void _3CheckPlatform()
{
// skipping _31991  name type: 0
    object _31990 = NOVALUE; // 64578 31990
// skipping _31989  name type: 0
    object _31988 = NOVALUE; // 64574 31988
    object _31987 = NOVALUE; // 64572 31987
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg CheckPlatform pc: 1 op: STARTLINE (58)

    /** traninit.e:425		OpDefines = eu:remove(OpDefines,*/
    // SubProg CheckPlatform pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg CheckPlatform pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg CheckPlatform pc: 7 op: FIND_FROM (176)
    _31987 = find_from(_25275, _36OpDefines_16509, 1);
    // SubProg CheckPlatform pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg CheckPlatform pc: 14 op: FIND_FROM (176)
    _31988 = find_from(_25276, _36OpDefines_16509, 1);
    // SubProg CheckPlatform pc: 19 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_36OpDefines_16509);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_31987)) ? _31987 : (object)(DBL_PTR(_31987)->dbl);
        int stop = (IS_ATOM_INT(_31988)) ? _31988 : (object)(DBL_PTR(_31988)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_36OpDefines_16509), start, &_36OpDefines_16509 );
            }
            else Tail(SEQ_PTR(_36OpDefines_16509), stop+1, &_36OpDefines_16509);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_36OpDefines_16509), start, &_36OpDefines_16509);
        }
        else {
            assign_slice_seq = &assign_space;
            _36OpDefines_16509 = Remove_elements(start, stop, (SEQ_PTR(_36OpDefines_16509)->ref == 1));
        }
    }
    _31987 = NOVALUE;
    _31988 = NOVALUE;
    // SubProg CheckPlatform pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg CheckPlatform pc: 26 op: STARTLINE (58)

    /** traninit.e:428		OpDefines &= GetPlatformDefines(1)*/
    // SubProg CheckPlatform pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg CheckPlatform pc: 30 op: PROC (27)
    _31990 = _41GetPlatformDefines(1);
    // SubProg CheckPlatform pc: 34 op: CONCAT (15)
    if (IS_SEQUENCE(_36OpDefines_16509) && IS_ATOM(_31990)) {
        Ref(_31990);
        Append(&_36OpDefines_16509, _36OpDefines_16509, _31990);
    }
    else if (IS_ATOM(_36OpDefines_16509) && IS_SEQUENCE(_31990)) {
    }
    else {
        Concat((object_ptr)&_36OpDefines_16509, _36OpDefines_16509, _31990);
    }
    DeRef(_31990);
    _31990 = NOVALUE;
    // SubProg CheckPlatform pc: 38 op: SEQUENCE_CHECK (97)
    // SubProg CheckPlatform pc: 40 op: STARTLINE (58)

    /** traninit.e:429	end procedure*/
    // SubProg CheckPlatform pc: 42 op: RETURNP (29)

// Exiting block BLOCK: CheckPlatform
    return;
    // SubProg CheckPlatform pc: 45 op: BADRETURNF (43)
    ;
}


object _3check_library(object _lib_64586)
{
    object _32000 = NOVALUE; // 64602 32000
    object _31999 = NOVALUE; // 64600 31999
// skipping _31998  name type: 0
    object _31997 = NOVALUE; // 64594 31997
// skipping _31996  name type: 0
    object _31995 = NOVALUE; // 64591 31995
    object _31994 = NOVALUE; // 64588 31994
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_library pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_library pc: 3 op: STARTLINE (58)

    /** traninit.e:433		if equal( lib, "" ) then*/
    // SubProg check_library pc: 5 op: EQUAL (153)
    if (_lib_64586 == _21933)
    _31994 = 1;
    else if (IS_ATOM_INT(_lib_64586) && IS_ATOM_INT(_21933))
    _31994 = 0;
    else
    _31994 = (compare(_lib_64586, _21933) == 0);
    // SubProg check_library pc: 9 op: IF (20)
    if (_31994 == 0)
    {
        _31994 = NOVALUE;
        goto L1; // [9] 19
    }
    else{
        _31994 = NOVALUE;
    }
    // SubProg check_library pc: 12 op: STARTLINE (58)

    /** traninit.e:434			return ""*/
    // SubProg check_library pc: 14 op: RETURNF (28)
    RefDS(_21933);

// Exiting block BLOCK: check_library

// block var lib_64586
    DeRefDS(_lib_64586);
    return _21933;
    // SubProg check_library pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 64584 op: 159
    // SubProg check_library pc: 19 op: STARTLINE (58)

    /** traninit.e:437		if not file_exists( lib ) then*/
    // SubProg check_library pc: 21 op: PROC (27)
    RefDS(_lib_64586);
    _31995 = _20file_exists(_lib_64586);
    // SubProg check_library pc: 25 op: NOT_IFW (108)
    if (IS_ATOM_INT(_31995)) {
        if (_31995 != 0){
            DeRef(_31995);
            _31995 = NOVALUE;
            goto L2; // [25] 67
        }
    }
    else {
        if (DBL_PTR(_31995)->dbl != 0.0){
            DeRef(_31995);
            _31995 = NOVALUE;
            goto L2; // [25] 67
        }
    }
    DeRef(_31995);
    _31995 = NOVALUE;
    // SubProg check_library pc: 28 op: STARTLINE (58)

    /** traninit.e:438			ShowMsg(2, 348, { lib })*/
    // SubProg check_library pc: 30 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_lib_64586);
    ((intptr_t*)_2)[1] = _lib_64586;
    _31997 = MAKE_SEQ(_1);
    // SubProg check_library pc: 34 op: PROC (27)
    _42ShowMsg(2, 348, _31997, 1);
    _31997 = NOVALUE;
    // SubProg check_library pc: 40 op: STARTLINE (58)

    /** traninit.e:439			if force_build or build_system_type = BUILD_DIRECT then*/
    // SubProg check_library pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_library pc: 44 op: SC1_OR_IF (147)
    if (_56force_build_44915 != 0) {
        goto L3; // [44] 61
    }
    // SubProg check_library pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_library pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_library pc: 52 op: EQUALS (3)
    _31999 = (_56build_system_type_44889 == 3);
    // SubProg check_library pc: 56 op: NOP1 (159)
    // SubProg check_library pc: 57 op: IF (20)
    if (_31999 == 0)
    {
        DeRef(_31999);
        _31999 = NOVALUE;
        goto L4; // [57] 66
    }
    else{
        DeRef(_31999);
        _31999 = NOVALUE;
    }
    // SubProg check_library pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 64584 op: 159
    // SubProg check_library pc: 61 op: STARTLINE (58)

    /** traninit.e:440				abort(1)*/
    // SubProg check_library pc: 63 op: ABORT (126)
    UserCleanup(1);
    // SubProg check_library pc: 65 op: NOP1 (159)
L4: // addr: 66 pc: 65 sub: 64584 op: 159
    // SubProg check_library pc: 66 op: NOP1 (159)
L2: // addr: 67 pc: 66 sub: 64584 op: 159
    // SubProg check_library pc: 67 op: STARTLINE (58)

    /** traninit.e:443		return canonical_path( lib )*/
    // SubProg check_library pc: 69 op: PROC (27)
    RefDS(_lib_64586);
    _32000 = _20canonical_path(_lib_64586, 0, 0);
    // SubProg check_library pc: 75 op: RETURNF (28)

// Exiting block BLOCK: check_library

// block var lib_64586
    DeRefDS(_lib_64586);
    return _32000;
    // SubProg check_library pc: 79 op: BADRETURNF (43)
    ;
}



// 0xE6B4DEF7
