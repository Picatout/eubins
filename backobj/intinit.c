// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _67intoptions()
{
    object _pause_msg_63978 = NOVALUE;
    object _opts_array_63988 = NOVALUE;
    object _opts_63993 = NOVALUE;
    object _opt_keys_64002 = NOVALUE;
    object _option_w_64004 = NOVALUE;
    object _key_64008 = NOVALUE;
    object _val_64010 = NOVALUE;
// skipping _31769  name type: 0
    object _31768 = NOVALUE; // 64046 31768
    object _31766 = NOVALUE; // 64042 31766
    object _31765 = NOVALUE; // 64040 31765
    object _31764 = NOVALUE; // 64039 31764
    object _31762 = NOVALUE; // 64033 31762
    object _31761 = NOVALUE; // 64031 31761
    object _31760 = NOVALUE; // 64030 31760
    object _31759 = NOVALUE; // 64029 31759
    object _31758 = NOVALUE; // 64028 31758
    object _31757 = NOVALUE; // 64019 31757
    object _31756 = NOVALUE; // 64017 31756
// skipping _31753  name type: 0
// skipping _31752  name type: 0
    object _31751 = NOVALUE; // 64007 31751
// skipping _31750  name type: 0
// skipping _31749  name type: 0
    object _31748 = NOVALUE; // 63998 31748
// skipping _31747  name type: 0
    object _31746 = NOVALUE; // 63991 31746
// skipping _31745  name type: 0
// skipping _31744  name type: 0
// skipping _31743  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg intoptions pc: 1 op: STARTLINE (58)

    /** intinit.e:43		sequence pause_msg = GetMsgText(278, 0)*/
    // SubProg intoptions pc: 3 op: PROC (27)
    RefDS(_21936);
    _0 = _pause_msg_63978;
    _pause_msg_63978 = _40GetMsgText(278, 0, _21936);
    DeRef(_0);
    // SubProg intoptions pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 11 op: STARTLINE (58)

    /** intinit.e:45		Argv = expand_config_options(Argv)*/
    // SubProg intoptions pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 15 op: PROC (27)
    RefDS(_34Argv_15199);
    _0 = _47expand_config_options(_34Argv_15199);
    DeRefDS(_34Argv_15199);
    _34Argv_15199 = _0;
    // SubProg intoptions pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 21 op: STARTLINE (58)

    /** intinit.e:46		Argc = length(Argv)*/
    // SubProg intoptions pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_34Argv_15199)){
            _34Argc_15198 = SEQ_PTR(_34Argv_15199)->length;
    }
    else {
        _34Argc_15198 = 1;
    }
    // SubProg intoptions pc: 28 op: INTEGER_CHECK (96)
    // SubProg intoptions pc: 30 op: STARTLINE (58)

    /** intinit.e:48		sequence opts_array = sort( get_options() )*/
    // SubProg intoptions pc: 32 op: PROC (27)
    _31746 = _47get_options();
    // SubProg intoptions pc: 35 op: PROC (27)
    _0 = _opts_array_63988;
    _opts_array_63988 = _24sort(_31746, 1);
    DeRef(_0);
    _31746 = NOVALUE;
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
    RefDS(_pause_msg_63978);
    ((intptr_t*)_2)[4] = _pause_msg_63978;
    _31748 = MAKE_SEQ(_1);
    // SubProg intoptions pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 59 op: PROC (27)
    RefDS(_opts_array_63988);
    RefDS(_34Argv_15199);
    _0 = _opts_63993;
    _opts_63993 = _48cmd_parse(_opts_array_63988, _31748, _34Argv_15199);
    DeRef(_0);
    _31748 = NOVALUE;
    // SubProg intoptions pc: 65 op: STARTLINE (58)

    /** intinit.e:53		handle_common_options(opts)*/
    // SubProg intoptions pc: 67 op: PROC (27)
    Ref(_opts_63993);
    _47handle_common_options(_opts_63993);
    // SubProg intoptions pc: 70 op: STARTLINE (58)

    /** intinit.e:55		sequence opt_keys = map:keys(opts)*/
    // SubProg intoptions pc: 72 op: PROC (27)
    Ref(_opts_63993);
    _0 = _opt_keys_64002;
    _opt_keys_64002 = _28keys(_opts_63993, 0);
    DeRef(_0);
    // SubProg intoptions pc: 77 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 79 op: STARTLINE (58)

    /** intinit.e:56		integer option_w = 0*/
    // SubProg intoptions pc: 81 op: ASSIGN_I (113)
    _option_w_64004 = 0;
    // SubProg intoptions pc: 84 op: STARTLINE (58)

    /** intinit.e:58		for idx = 1 to length(opt_keys) do*/
    // SubProg intoptions pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_keys_64002)){
            _31751 = SEQ_PTR(_opt_keys_64002)->length;
    }
    else {
        _31751 = 1;
    }
    // SubProg intoptions pc: 89 op: FOR_I (125)
    {
        object _idx_64006;
        _idx_64006 = 1;
L1: // addr: 96 pc: 89 sub: 63976 op: 125
        if (_idx_64006 > _31751){
            goto L2; // [89] 204
        }
        // SubProg intoptions pc: 96 op: STARTLINE (58)

        /** intinit.e:59			sequence key = opt_keys[idx]*/
        // SubProg intoptions pc: 98 op: RHS_SUBS (25)
        DeRef(_key_64008);
        _2 = (object)SEQ_PTR(_opt_keys_64002);
        _key_64008 = (object)*(((s1_ptr)_2)->base + _idx_64006);
        Ref(_key_64008);
        // SubProg intoptions pc: 102 op: SEQUENCE_CHECK (97)
        // SubProg intoptions pc: 104 op: STARTLINE (58)

        /** intinit.e:60			object val = map:get(opts, key)*/
        // SubProg intoptions pc: 106 op: PROC (27)
        Ref(_opts_63993);
        RefDS(_key_64008);
        _0 = _val_64010;
        _val_64010 = _28get(_opts_63993, _key_64008, 0);
        DeRef(_0);
        // SubProg intoptions pc: 112 op: STARTLINE (58)

        /** intinit.e:62			switch key do*/
        // SubProg intoptions pc: 114 op: SWITCH (185)
        _1 = find(_key_64008, _31754);
        switch ( _1 ){ 
            // SubProg intoptions pc: 119 op: STARTLINE (58)

            /** intinit.e:63				case "coverage" then*/
            // SubProg intoptions pc: 121 op: CASE (186)
            case 1:
            // SubProg intoptions pc: 123 op: STARTLINE (58)

            /** intinit.e:64					for i = 1 to length( val ) do*/
            // SubProg intoptions pc: 125 op: LENGTH (42)
            if (IS_SEQUENCE(_val_64010)){
                    _31756 = SEQ_PTR(_val_64010)->length;
            }
            else {
                _31756 = 1;
            }
            // SubProg intoptions pc: 128 op: FOR_I (125)
            {
                object _i_64016;
                _i_64016 = 1;
L3: // addr: 135 pc: 128 sub: 63976 op: 125
                if (_i_64016 > _31756){
                    goto L4; // [128] 151
                }
                // SubProg intoptions pc: 135 op: STARTLINE (58)

                /** intinit.e:65						add_coverage( val[i] )*/
                // SubProg intoptions pc: 137 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_64010);
                _31757 = (object)*(((s1_ptr)_2)->base + _i_64016);
                // SubProg intoptions pc: 141 op: PROC (27)
                Ref(_31757);
                _50add_coverage(_31757);
                _31757 = NOVALUE;
                // SubProg intoptions pc: 144 op: STARTLINE (58)

                /** intinit.e:66					end for*/
                // SubProg intoptions pc: 146 op: ENDFOR_INT_UP1 (54)
                _i_64016 = _i_64016 + 1;
                goto L3; // [146] 135
L4: // addr: 151 pc: 146 sub: 63976 op: 54
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
            Ref(_val_64010);
            _50coverage_db(_val_64010);
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
            Ref(_val_64010);
            _50coverage_exclude(_val_64010);
            // SubProg intoptions pc: 183 op: ELSE (23)
            goto L5; // [183] 195
            // SubProg intoptions pc: 185 op: STARTLINE (58)

            /** intinit.e:77				case "debugger" then*/
            // SubProg intoptions pc: 187 op: CASE (186)
            case 5:
            // SubProg intoptions pc: 189 op: STARTLINE (58)

            /** intinit.e:78					external_debugger = val*/
            // SubProg intoptions pc: 191 op: ASSIGN (18)
            Ref(_val_64010);
            DeRef(_67external_debugger_63975);
            _67external_debugger_63975 = _val_64010;
            // SubProg intoptions pc: 194 op: NOPSWITCH (187)
        ;}L5: // addr: 195 pc: 194 sub: 63976 op: 187
        // SubProg intoptions pc: 195 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var key_64008
        DeRef(_key_64008);
        _key_64008 = NOVALUE;

// block var val_64010
        DeRef(_val_64010);
        _val_64010 = NOVALUE;
        // SubProg intoptions pc: 197 op: STARTLINE (58)

        /** intinit.e:81		end for*/
        // SubProg intoptions pc: 199 op: ENDFOR_INT_UP1 (54)
        _idx_64006 = _idx_64006 + 1;
        goto L1; // [199] 96
L2: // addr: 204 pc: 199 sub: 63976 op: 54
        ;
    }
    // SubProg intoptions pc: 204 op: STARTLINE (58)

    /** intinit.e:83		if length(m:get(opts, cmdline:EXTRAS)) = 0 and not repl then*/
    // SubProg intoptions pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 208 op: PROC (27)
    Ref(_opts_63993);
    RefDS(_48EXTRAS_20229);
    _31758 = _28get(_opts_63993, _48EXTRAS_20229, 0);
    // SubProg intoptions pc: 214 op: LENGTH (42)
    if (IS_SEQUENCE(_31758)){
            _31759 = SEQ_PTR(_31758)->length;
    }
    else {
        _31759 = 1;
    }
    DeRef(_31758);
    _31758 = NOVALUE;
    // SubProg intoptions pc: 217 op: EQUALS (3)
    _31760 = (_31759 == 0);
    _31759 = NOVALUE;
    // SubProg intoptions pc: 221 op: SC1_AND_IF (146)
    if (_31760 == 0) {
        goto L6; // [221] 278
    }
    // SubProg intoptions pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 227 op: NOT (7)
    _31762 = (0 == 0);
    // SubProg intoptions pc: 230 op: NOP1 (159)
    // SubProg intoptions pc: 231 op: IF (20)
    if (_31762 == 0)
    {
        DeRef(_31762);
        _31762 = NOVALUE;
        goto L6; // [231] 278
    }
    else{
        DeRef(_31762);
        _31762 = NOVALUE;
    }
    // SubProg intoptions pc: 234 op: STARTLINE (58)

    /** intinit.e:84			show_banner()*/
    // SubProg intoptions pc: 236 op: PROC (27)
    _47show_banner();
    // SubProg intoptions pc: 238 op: STARTLINE (58)

    /** intinit.e:85			ShowMsg(2, 249)*/
    // SubProg intoptions pc: 240 op: PROC (27)
    RefDS(_21936);
    _40ShowMsg(2, 249, _21936, 1);
    // SubProg intoptions pc: 246 op: STARTLINE (58)

    /** intinit.e:87			if not batch_job and not test_only then*/
    // SubProg intoptions pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 250 op: NOT (7)
    _31764 = (_34batch_job_15201 == 0);
    // SubProg intoptions pc: 253 op: SC1_AND_IF (146)
    if (_31764 == 0) {
        goto L7; // [253] 273
    }
    // SubProg intoptions pc: 257 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 259 op: NOT (7)
    _31766 = (_34test_only_15200 == 0);
    // SubProg intoptions pc: 262 op: NOP1 (159)
    // SubProg intoptions pc: 263 op: IF (20)
    if (_31766 == 0)
    {
        DeRef(_31766);
        _31766 = NOVALUE;
        goto L7; // [263] 273
    }
    else{
        DeRef(_31766);
        _31766 = NOVALUE;
    }
    // SubProg intoptions pc: 266 op: STARTLINE (58)

    /** intinit.e:88				maybe_any_key(pause_msg)*/
    // SubProg intoptions pc: 268 op: PROC (27)
    RefDS(_pause_msg_63978);
    _27maybe_any_key(_pause_msg_63978, 1);
    // SubProg intoptions pc: 272 op: NOP1 (159)
L7: // addr: 273 pc: 272 sub: 63976 op: 159
    // SubProg intoptions pc: 273 op: STARTLINE (58)

    /** intinit.e:91			abort(1)*/
    // SubProg intoptions pc: 275 op: ABORT (126)
    UserCleanup(1);
    // SubProg intoptions pc: 277 op: NOP1 (159)
L6: // addr: 278 pc: 277 sub: 63976 op: 159
    // SubProg intoptions pc: 278 op: STARTLINE (58)

    /** intinit.e:94		OpDefines &= { "EUI" }*/
    // SubProg intoptions pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg intoptions pc: 282 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_31767);
    ((intptr_t*)_2)[1] = _31767;
    _31768 = MAKE_SEQ(_1);
    // SubProg intoptions pc: 286 op: CONCAT (15)
    Concat((object_ptr)&_34OpDefines_15261, _34OpDefines_15261, _31768);
    DeRefDS(_31768);
    _31768 = NOVALUE;
    // SubProg intoptions pc: 290 op: SEQUENCE_CHECK (97)
    // SubProg intoptions pc: 292 op: STARTLINE (58)

    /** intinit.e:96		finalize_command_line(opts)*/
    // SubProg intoptions pc: 294 op: PROC (27)
    Ref(_opts_63993);
    _47finalize_command_line(_opts_63993);
    // SubProg intoptions pc: 297 op: STARTLINE (58)

    /** intinit.e:97	end procedure*/
    // SubProg intoptions pc: 299 op: RETURNP (29)

// Exiting block BLOCK: intoptions

// block var pause_msg_63978
    DeRef(_pause_msg_63978);

// block var opts_array_63988
    DeRef(_opts_array_63988);

// block var opts_63993
    DeRef(_opts_63993);

// block var opt_keys_64002
    DeRef(_opt_keys_64002);

// block var option_w_64004
    _31758 = NOVALUE;
    DeRef(_31760);
    _31760 = NOVALUE;
    DeRef(_31764);
    _31764 = NOVALUE;
    return;
    // SubProg intoptions pc: 302 op: BADRETURNF (43)
    ;
}



// 0x04B0E441
