// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _67intoptions()
{
    object _pause_msg_64072 = NOVALUE;
    object _opts_array_64082 = NOVALUE;
    object _opts_64087 = NOVALUE;
    object _opt_keys_64096 = NOVALUE;
    object _option_w_64098 = NOVALUE;
    object _key_64102 = NOVALUE;
    object _val_64104 = NOVALUE;
// skipping _31857  name type: 0
    object _31856 = NOVALUE; // 64140 31856
    object _31854 = NOVALUE; // 64136 31854
    object _31853 = NOVALUE; // 64134 31853
    object _31852 = NOVALUE; // 64133 31852
    object _31850 = NOVALUE; // 64127 31850
    object _31849 = NOVALUE; // 64125 31849
    object _31848 = NOVALUE; // 64124 31848
    object _31847 = NOVALUE; // 64123 31847
    object _31846 = NOVALUE; // 64122 31846
    object _31845 = NOVALUE; // 64113 31845
    object _31844 = NOVALUE; // 64111 31844
// skipping _31841  name type: 0
// skipping _31840  name type: 0
    object _31839 = NOVALUE; // 64101 31839
// skipping _31838  name type: 0
// skipping _31837  name type: 0
    object _31836 = NOVALUE; // 64092 31836
// skipping _31835  name type: 0
    object _31834 = NOVALUE; // 64085 31834
// skipping _31833  name type: 0
// skipping _31832  name type: 0
// skipping _31831  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg intoptions pc: 1 op: STARTLINE (58)

    /** intinit.e:43		sequence pause_msg = GetMsgText(278, 0)*/
    // SubProg intoptions pc: 3 op: PROC (27)
    RefDS(_21958);
    _0 = _pause_msg_64072;
    _pause_msg_64072 = _40GetMsgText(278, 0, _21958);
    DeRef(_0);
    // SubProg intoptions pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 11 op: STARTLINE (58)

    /** intinit.e:45		Argv = expand_config_options(Argv)*/
    // SubProg intoptions pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 15 op: PROC (27)
    RefDS(_5Argv_12488);
    _0 = _47expand_config_options(_5Argv_12488);
    DeRefDS(_5Argv_12488);
    _5Argv_12488 = _0;
    // SubProg intoptions pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 21 op: STARTLINE (58)

    /** intinit.e:46		Argc = length(Argv)*/
    // SubProg intoptions pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_5Argv_12488)){
            _5Argc_12487 = SEQ_PTR(_5Argv_12488)->length;
    }
    else {
        _5Argc_12487 = 1;
    }
    // SubProg intoptions pc: 28 op: INTEGER_CHECK (96)
    // SubProg intoptions pc: 30 op: STARTLINE (58)

    /** intinit.e:48		sequence opts_array = sort( get_options() )*/
    // SubProg intoptions pc: 32 op: PROC (27)
    _31834 = _47get_options();
    // SubProg intoptions pc: 35 op: PROC (27)
    _0 = _opts_array_64082;
    _opts_array_64082 = _25sort(_31834, 1);
    DeRef(_0);
    _31834 = NOVALUE;
    // SubProg intoptions pc: 40 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 42 op: STARTLINE (58)

    /** intinit.e:50		m:map opts = cmd_parse( opts_array, */
    // SubProg intoptions pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 50 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 4;
    ((intptr_t*)_2)[3] = 8;
    RefDS(_pause_msg_64072);
    ((intptr_t*)_2)[4] = _pause_msg_64072;
    _31836 = MAKE_SEQ(_1);
    // SubProg intoptions pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 59 op: PROC (27)
    RefDS(_opts_array_64082);
    RefDS(_5Argv_12488);
    _0 = _opts_64087;
    _opts_64087 = _48cmd_parse(_opts_array_64082, _31836, _5Argv_12488);
    DeRef(_0);
    _31836 = NOVALUE;
    // SubProg intoptions pc: 65 op: STARTLINE (58)

    /** intinit.e:53		handle_common_options(opts)*/
    // SubProg intoptions pc: 67 op: PROC (27)
    Ref(_opts_64087);
    _47handle_common_options(_opts_64087);
    // SubProg intoptions pc: 70 op: STARTLINE (58)

    /** intinit.e:55		sequence opt_keys = map:keys(opts)*/
    // SubProg intoptions pc: 72 op: PROC (27)
    Ref(_opts_64087);
    _0 = _opt_keys_64096;
    _opt_keys_64096 = _33keys(_opts_64087, 0);
    DeRef(_0);
    // SubProg intoptions pc: 77 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 79 op: STARTLINE (58)

    /** intinit.e:56		integer option_w = 0*/
    // SubProg intoptions pc: 81 op: ASSIGN_I (113)
    _option_w_64098 = 0;
    // SubProg intoptions pc: 84 op: STARTLINE (58)

    /** intinit.e:58		for idx = 1 to length(opt_keys) do*/
    // SubProg intoptions pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_keys_64096)){
            _31839 = SEQ_PTR(_opt_keys_64096)->length;
    }
    else {
        _31839 = 1;
    }
    // SubProg intoptions pc: 89 op: FOR_I (125)
    {
        object _idx_64100;
        _idx_64100 = 1;
L1: // addr: 96 pc: 89 sub: 64070 op: 125
        if (_idx_64100 > _31839){
            goto L2; // [89] 204
        }
        // SubProg intoptions pc: 96 op: STARTLINE (58)

        /** intinit.e:59			sequence key = opt_keys[idx]*/
        // SubProg intoptions pc: 98 op: RHS_SUBS (25)
        DeRef(_key_64102);
        _2 = (object)SEQ_PTR(_opt_keys_64096);
        _key_64102 = (object)*(((s1_ptr)_2)->base + _idx_64100);
        Ref(_key_64102);
        // SubProg intoptions pc: 102 op: SEQUENCE_CHECK (97)
        // SubProg intoptions pc: 104 op: STARTLINE (58)

        /** intinit.e:60			object val = map:get(opts, key)*/
        // SubProg intoptions pc: 106 op: PROC (27)
        Ref(_opts_64087);
        RefDS(_key_64102);
        _0 = _val_64104;
        _val_64104 = _33get(_opts_64087, _key_64102, 0);
        DeRef(_0);
        // SubProg intoptions pc: 112 op: STARTLINE (58)

        /** intinit.e:62			switch key do*/
        // SubProg intoptions pc: 114 op: SWITCH (185)
        _1 = find(_key_64102, _31842);
        switch ( _1 ){ 
            // SubProg intoptions pc: 119 op: STARTLINE (58)

            /** intinit.e:63				case "coverage" then*/
            // SubProg intoptions pc: 121 op: CASE (186)
            case 1:
            // SubProg intoptions pc: 123 op: STARTLINE (58)

            /** intinit.e:64					for i = 1 to length( val ) do*/
            // SubProg intoptions pc: 125 op: LENGTH (42)
            if (IS_SEQUENCE(_val_64104)){
                    _31844 = SEQ_PTR(_val_64104)->length;
            }
            else {
                _31844 = 1;
            }
            // SubProg intoptions pc: 128 op: FOR_I (125)
            {
                object _i_64110;
                _i_64110 = 1;
L3: // addr: 135 pc: 128 sub: 64070 op: 125
                if (_i_64110 > _31844){
                    goto L4; // [128] 151
                }
                // SubProg intoptions pc: 135 op: STARTLINE (58)

                /** intinit.e:65						add_coverage( val[i] )*/
                // SubProg intoptions pc: 137 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_64104);
                _31845 = (object)*(((s1_ptr)_2)->base + _i_64110);
                // SubProg intoptions pc: 141 op: PROC (27)
                Ref(_31845);
                _50add_coverage(_31845);
                _31845 = NOVALUE;
                // SubProg intoptions pc: 144 op: STARTLINE (58)

                /** intinit.e:66					end for*/
                // SubProg intoptions pc: 146 op: ENDFOR_INT_UP1 (54)
                _i_64110 = _i_64110 + 1;
                goto L3; // [146] 135
L4: // addr: 151 pc: 146 sub: 64070 op: 54
                ;
            }
            // SubProg intoptions pc: 151 op: ELSE (23)
            goto L5; // [151] 195
            // SubProg intoptions pc: 153 op: STARTLINE (58)

            /** intinit.e:68				case "coverage-db" then*/
            // SubProg intoptions pc: 155 op: CASE (186)
            case 2:
            // SubProg intoptions pc: 157 op: STARTLINE (58)

            /** intinit.e:69					coverage_db( val )*/
            // SubProg intoptions pc: 159 op: PROC (27)
            Ref(_val_64104);
            _50coverage_db(_val_64104);
            // SubProg intoptions pc: 162 op: ELSE (23)
            goto L5; // [162] 195
            // SubProg intoptions pc: 164 op: STARTLINE (58)

            /** intinit.e:71				case "coverage-erase" then*/
            // SubProg intoptions pc: 166 op: CASE (186)
            case 3:
            // SubProg intoptions pc: 168 op: STARTLINE (58)

            /** intinit.e:72					new_coverage_db()*/
            // SubProg intoptions pc: 170 op: PROC (27)
            _50new_coverage_db();
            // SubProg intoptions pc: 172 op: ELSE (23)
            goto L5; // [172] 195
            // SubProg intoptions pc: 174 op: STARTLINE (58)

            /** intinit.e:74				case "coverage-exclude" then*/
            // SubProg intoptions pc: 176 op: CASE (186)
            case 4:
            // SubProg intoptions pc: 178 op: STARTLINE (58)

            /** intinit.e:75					coverage_exclude( val )*/
            // SubProg intoptions pc: 180 op: PROC (27)
            Ref(_val_64104);
            _50coverage_exclude(_val_64104);
            // SubProg intoptions pc: 183 op: ELSE (23)
            goto L5; // [183] 195
            // SubProg intoptions pc: 185 op: STARTLINE (58)

            /** intinit.e:77				case "debugger" then*/
            // SubProg intoptions pc: 187 op: CASE (186)
            case 5:
            // SubProg intoptions pc: 189 op: STARTLINE (58)

            /** intinit.e:78					external_debugger = val*/
            // SubProg intoptions pc: 191 op: ASSIGN (18)
            Ref(_val_64104);
            DeRef(_67external_debugger_64069);
            _67external_debugger_64069 = _val_64104;
            // SubProg intoptions pc: 194 op: NOPSWITCH (187)
        ;}L5: // addr: 195 pc: 194 sub: 64070 op: 187
        // SubProg intoptions pc: 195 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var key_64102
        DeRef(_key_64102);
        _key_64102 = NOVALUE;

// block var val_64104
        DeRef(_val_64104);
        _val_64104 = NOVALUE;
        // SubProg intoptions pc: 197 op: STARTLINE (58)

        /** intinit.e:81		end for*/
        // SubProg intoptions pc: 199 op: ENDFOR_INT_UP1 (54)
        _idx_64100 = _idx_64100 + 1;
        goto L1; // [199] 96
L2: // addr: 204 pc: 199 sub: 64070 op: 54
        ;
    }
    // SubProg intoptions pc: 204 op: STARTLINE (58)

    /** intinit.e:83		if length(m:get(opts, cmdline:EXTRAS)) = 0 and not repl then*/
    // SubProg intoptions pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 208 op: PROC (27)
    Ref(_opts_64087);
    RefDS(_48EXTRAS_20250);
    _31846 = _33get(_opts_64087, _48EXTRAS_20250, 0);
    // SubProg intoptions pc: 214 op: LENGTH (42)
    if (IS_SEQUENCE(_31846)){
            _31847 = SEQ_PTR(_31846)->length;
    }
    else {
        _31847 = 1;
    }
    DeRef(_31846);
    _31846 = NOVALUE;
    // SubProg intoptions pc: 217 op: EQUALS (3)
    _31848 = (_31847 == 0);
    _31847 = NOVALUE;
    // SubProg intoptions pc: 221 op: SC1_AND_IF (146)
    if (_31848 == 0) {
        goto L6; // [221] 278
    }
    // SubProg intoptions pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 227 op: NOT (7)
    _31850 = (0 == 0);
    // SubProg intoptions pc: 230 op: NOP1 (159)
    // SubProg intoptions pc: 231 op: IF (20)
    if (_31850 == 0)
    {
        DeRef(_31850);
        _31850 = NOVALUE;
        goto L6; // [231] 278
    }
    else{
        DeRef(_31850);
        _31850 = NOVALUE;
    }
    // SubProg intoptions pc: 234 op: STARTLINE (58)

    /** intinit.e:84			show_banner()*/
    // SubProg intoptions pc: 236 op: PROC (27)
    _47show_banner();
    // SubProg intoptions pc: 238 op: STARTLINE (58)

    /** intinit.e:85			ShowMsg(2, 249)*/
    // SubProg intoptions pc: 240 op: PROC (27)
    RefDS(_21958);
    _40ShowMsg(2, 249, _21958, 1);
    // SubProg intoptions pc: 246 op: STARTLINE (58)

    /** intinit.e:87			if not batch_job and not test_only then*/
    // SubProg intoptions pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 250 op: NOT (7)
    _31852 = (_5batch_job_12490 == 0);
    // SubProg intoptions pc: 253 op: SC1_AND_IF (146)
    if (_31852 == 0) {
        goto L7; // [253] 273
    }
    // SubProg intoptions pc: 257 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 259 op: NOT (7)
    _31854 = (_5test_only_12489 == 0);
    // SubProg intoptions pc: 262 op: NOP1 (159)
    // SubProg intoptions pc: 263 op: IF (20)
    if (_31854 == 0)
    {
        DeRef(_31854);
        _31854 = NOVALUE;
        goto L7; // [263] 273
    }
    else{
        DeRef(_31854);
        _31854 = NOVALUE;
    }
    // SubProg intoptions pc: 266 op: STARTLINE (58)

    /** intinit.e:88				maybe_any_key(pause_msg)*/
    // SubProg intoptions pc: 268 op: PROC (27)
    RefDS(_pause_msg_64072);
    _37maybe_any_key(_pause_msg_64072, 1);
    // SubProg intoptions pc: 272 op: NOP1 (159)
L7: // addr: 273 pc: 272 sub: 64070 op: 159
    // SubProg intoptions pc: 273 op: STARTLINE (58)

    /** intinit.e:91			abort(1)*/
    // SubProg intoptions pc: 275 op: ABORT (126)
    UserCleanup(1);
    // SubProg intoptions pc: 277 op: NOP1 (159)
L6: // addr: 278 pc: 277 sub: 64070 op: 159
    // SubProg intoptions pc: 278 op: STARTLINE (58)

    /** intinit.e:94		OpDefines &= { "EUI" }*/
    // SubProg intoptions pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 282 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_31855);
    ((intptr_t*)_2)[1] = _31855;
    _31856 = MAKE_SEQ(_1);
    // SubProg intoptions pc: 286 op: CONCAT (15)
    Concat((object_ptr)&_5OpDefines_12551, _5OpDefines_12551, _31856);
    DeRefDS(_31856);
    _31856 = NOVALUE;
    // SubProg intoptions pc: 290 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 292 op: STARTLINE (58)

    /** intinit.e:96		finalize_command_line(opts)*/
    // SubProg intoptions pc: 294 op: PROC (27)
    Ref(_opts_64087);
    _47finalize_command_line(_opts_64087);
    // SubProg intoptions pc: 297 op: STARTLINE (58)

    /** intinit.e:97	end procedure*/
    // SubProg intoptions pc: 299 op: RETURNP (29)

// Exiting block BLOCK: intoptions

// block var pause_msg_64072
    DeRef(_pause_msg_64072);

// block var opts_array_64082
    DeRef(_opts_array_64082);

// block var opts_64087
    DeRef(_opts_64087);

// block var opt_keys_64096
    DeRef(_opt_keys_64096);

// block var option_w_64098
    DeRef(_31848);
    _31848 = NOVALUE;
    DeRef(_31852);
    _31852 = NOVALUE;
    _31846 = NOVALUE;
    return;
    // SubProg intoptions pc: 302 op: BADRETURNF (43)
    ;
}



// 0x755B486F
