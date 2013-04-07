// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _48local_abort(object _lvl_20264)
{
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269 = NOVALUE;
// skipping _11534  name type: 0
    object _11533 = NOVALUE; // 20266 11533
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg local_abort pc: 1 op: INTEGER_CHECK (96)
    // SubProg local_abort pc: 3 op: STARTLINE (58)

    /** cmdline.e:171		if length(pause_msg) != 0 then*/
    // SubProg local_abort pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg local_abort pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_48pause_msg_20261)){
            _11533 = SEQ_PTR(_48pause_msg_20261)->length;
    }
    else {
        _11533 = 1;
    }
    // SubProg local_abort pc: 10 op: NOTEQ_IFW_I (122)
    if (_11533 == 0)
    goto L1; // [10] 45
    // SubProg local_abort pc: 14 op: STARTLINE (58)

    /** cmdline.e:172			console:maybe_any_key(pause_msg, 1)*/
    // SubProg local_abort pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg local_abort pc: 18 op: STARTLINE (58)

    /** console.e:923		if not has_console() then*/
    // SubProg local_abort pc: 20 op: STARTLINE (58)

    /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
    // SubProg local_abort pc: 22 op: MACHINE_FUNC (111)
    DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269);
    _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269 = machine(99, 0);
    // SubProg local_abort pc: 26 op: NOP1 (159)
    // SubProg local_abort pc: 27 op: NOT_IFW (108)
    if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269)) {
        if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269 != 0){
            goto L2; // [27] 42
        }
    }
    else {
        if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269)->dbl != 0.0){
            goto L2; // [27] 42
        }
    }
    // SubProg local_abort pc: 30 op: STARTLINE (58)

    /** console.e:924			any_key(prompt, con)*/
    // SubProg local_abort pc: 32 op: PROC (27)
    RefDS(_48pause_msg_20261);
    _37any_key(_48pause_msg_20261, 1);
    // SubProg local_abort pc: 36 op: NOP1 (159)
    // SubProg local_abort pc: 37 op: STARTLINE (58)

    /** console.e:926	end procedure*/
    // SubProg local_abort pc: 39 op: ELSE (23)
    goto L2; // [39] 42
    // SubProg local_abort pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 20262 op: 159
    // SubProg local_abort pc: 42 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from local_abort @ 17

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269
    DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269);
    _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20269 = NOVALUE;
    // SubProg local_abort pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 20262 op: 159
    // SubProg local_abort pc: 45 op: STARTLINE (58)

    /** cmdline.e:175		abort(lvl)*/
    // SubProg local_abort pc: 47 op: ABORT (126)
    UserCleanup(_lvl_20264);
    // SubProg local_abort pc: 49 op: STARTLINE (58)

    /** cmdline.e:176	end procedure*/
    // SubProg local_abort pc: 51 op: RETURNP (29)

// Exiting block BLOCK: local_abort

// block var lvl_20264
    return;
    // SubProg local_abort pc: 54 op: BADRETURNF (43)
    ;
}


void _48check_for_bad_combos(object _opts_20272, object _opt1_20273, object _opt2_20274, object _error_message_20275)
{
    object _msg_inlined_crash_at_38_20283 = NOVALUE;
    object _11538 = NOVALUE; // 20281 11538
    object _11537 = NOVALUE; // 20280 11537
    object _11536 = NOVALUE; // 20278 11536
    object _11535 = NOVALUE; // 20277 11535
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_bad_combos pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_for_bad_combos pc: 3 op: INTEGER_CHECK (96)
    // SubProg check_for_bad_combos pc: 5 op: INTEGER_CHECK (96)
    // SubProg check_for_bad_combos pc: 7 op: SEQUENCE_CHECK (97)
    // SubProg check_for_bad_combos pc: 9 op: STARTLINE (58)

    /** cmdline.e:180		if find( opt1, opts[OPTIONS]) then*/
    // SubProg check_for_bad_combos pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20272);
    _11535 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg check_for_bad_combos pc: 15 op: FIND_FROM (176)
    _11536 = find_from(_opt1_20273, _11535, 1);
    _11535 = NOVALUE;
    // SubProg check_for_bad_combos pc: 20 op: IF (20)
    if (_11536 == 0)
    {
        _11536 = NOVALUE;
        goto L1; // [20] 59
    }
    else{
        _11536 = NOVALUE;
    }
    // SubProg check_for_bad_combos pc: 23 op: STARTLINE (58)

    /** cmdline.e:181			if find( opt2, opts[OPTIONS]) then*/
    // SubProg check_for_bad_combos pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20272);
    _11537 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg check_for_bad_combos pc: 29 op: FIND_FROM (176)
    _11538 = find_from(_opt2_20274, _11537, 1);
    _11537 = NOVALUE;
    // SubProg check_for_bad_combos pc: 34 op: IF (20)
    if (_11538 == 0)
    {
        _11538 = NOVALUE;
        goto L2; // [34] 58
    }
    else{
        _11538 = NOVALUE;
    }
    // SubProg check_for_bad_combos pc: 37 op: STARTLINE (58)

    /** cmdline.e:182				error:crash( error_message )*/
    // SubProg check_for_bad_combos pc: 39 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg check_for_bad_combos pc: 41 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_38_20283);
    _msg_inlined_crash_at_38_20283 = EPrintf(-9999999, _error_message_20275, _5);
    // SubProg check_for_bad_combos pc: 45 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg check_for_bad_combos pc: 47 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_38_20283);
    // SubProg check_for_bad_combos pc: 50 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg check_for_bad_combos pc: 52 op: ELSE (23)
    goto L3; // [52] 55
    // SubProg check_for_bad_combos pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 20270 op: 159
    // SubProg check_for_bad_combos pc: 55 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_bad_combos @ 38

// block var msg_inlined_crash_at_38_20283
    DeRefi(_msg_inlined_crash_at_38_20283);
    _msg_inlined_crash_at_38_20283 = NOVALUE;
    // SubProg check_for_bad_combos pc: 57 op: NOP1 (159)
L2: // addr: 58 pc: 57 sub: 20270 op: 159
    // SubProg check_for_bad_combos pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 20270 op: 159
    // SubProg check_for_bad_combos pc: 59 op: STARTLINE (58)

    /** cmdline.e:185	end procedure*/
    // SubProg check_for_bad_combos pc: 61 op: RETURNP (29)

// Exiting block BLOCK: check_for_bad_combos

// block var opts_20272
    DeRefDS(_opts_20272);

// block var opt1_20273

// block var opt2_20274

// block var error_message_20275
    DeRefDSi(_error_message_20275);
    return;
    // SubProg check_for_bad_combos pc: 64 op: BADRETURNF (43)
    ;
}


object _48has_duplicate(object _opts_20286, object _opt_20287, object _name_type_20288, object _start_from_20289)
{
    object _opt_name_20293 = NOVALUE;
    object _11546 = NOVALUE; // 20302 11546
    object _11545 = NOVALUE; // 20301 11545
    object _11544 = NOVALUE; // 20300 11544
    object _11543 = NOVALUE; // 20298 11543
    object _11542 = NOVALUE; // 20297 11542
// skipping _11541  name type: 0
    object _11540 = NOVALUE; // 20292 11540
    object _11539 = NOVALUE; // 20291 11539
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_duplicate pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 5 op: INTEGER_CHECK (96)
    // SubProg has_duplicate pc: 7 op: INTEGER_CHECK (96)
    // SubProg has_duplicate pc: 9 op: STARTLINE (58)

    /** cmdline.e:188		if sequence( opt[name_type] ) then*/
    // SubProg has_duplicate pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20287);
    _11539 = (object)*(((s1_ptr)_2)->base + _name_type_20288);
    // SubProg has_duplicate pc: 15 op: IS_A_SEQUENCE (68)
    _11540 = IS_SEQUENCE(_11539);
    _11539 = NOVALUE;
    // SubProg has_duplicate pc: 18 op: IF (20)
    if (_11540 == 0)
    {
        _11540 = NOVALUE;
        goto L1; // [18] 77
    }
    else{
        _11540 = NOVALUE;
    }
    // SubProg has_duplicate pc: 21 op: STARTLINE (58)

    /** cmdline.e:189			sequence opt_name = opt[name_type]*/
    // SubProg has_duplicate pc: 23 op: RHS_SUBS (25)
    DeRef(_opt_name_20293);
    _2 = (object)SEQ_PTR(_opt_20287);
    _opt_name_20293 = (object)*(((s1_ptr)_2)->base + _name_type_20288);
    Ref(_opt_name_20293);
    // SubProg has_duplicate pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 29 op: STARTLINE (58)

    /** cmdline.e:190			for i = start_from + 1 to length( opts ) do*/
    // SubProg has_duplicate pc: 31 op: PLUS1 (93)
    _11542 = _start_from_20289 + 1;
    // SubProg has_duplicate pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20286)){
            _11543 = SEQ_PTR(_opts_20286)->length;
    }
    else {
        _11543 = 1;
    }
    // SubProg has_duplicate pc: 38 op: FOR (21)
    {
        object _i_20296;
        _i_20296 = _11542;
L2: // addr: 45 pc: 38 sub: 20284 op: 21
        if (_i_20296 > _11543){
            goto L3; // [38] 76
        }
        // SubProg has_duplicate pc: 45 op: STARTLINE (58)

        /** cmdline.e:191				if equal( opt_name, opts[i][name_type] ) then*/
        // SubProg has_duplicate pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20286);
        _11544 = (object)*(((s1_ptr)_2)->base + _i_20296);
        // SubProg has_duplicate pc: 51 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11544);
        _11545 = (object)*(((s1_ptr)_2)->base + _name_type_20288);
        _11544 = NOVALUE;
        // SubProg has_duplicate pc: 55 op: EQUAL (153)
        if (_opt_name_20293 == _11545)
        _11546 = 1;
        else if (IS_ATOM_INT(_opt_name_20293) && IS_ATOM_INT(_11545))
        _11546 = 0;
        else
        _11546 = (compare(_opt_name_20293, _11545) == 0);
        _11545 = NOVALUE;
        // SubProg has_duplicate pc: 59 op: IF (20)
        if (_11546 == 0)
        {
            _11546 = NOVALUE;
            goto L4; // [59] 69
        }
        else{
            _11546 = NOVALUE;
        }
        // SubProg has_duplicate pc: 62 op: STARTLINE (58)

        /** cmdline.e:192					return 1*/
        // SubProg has_duplicate pc: 64 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var opt_name_20293
        DeRefDS(_opt_name_20293);

// Exiting block BLOCK: has_duplicate

// block var opts_20286
        DeRefDS(_opts_20286);

// block var opt_20287
        DeRefDS(_opt_20287);

// block var name_type_20288

// block var start_from_20289
        DeRef(_11542);
        _11542 = NOVALUE;
        return 1;
        // SubProg has_duplicate pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 20284 op: 159
        // SubProg has_duplicate pc: 69 op: STARTLINE (58)

        /** cmdline.e:194			end for*/
        // SubProg has_duplicate pc: 71 op: ENDFOR_INT_UP1 (54)
        _i_20296 = _i_20296 + 1;
        goto L2; // [71] 45
L3: // addr: 76 pc: 71 sub: 20284 op: 54
        ;
    }
    // SubProg has_duplicate pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 20284 op: 159
    // SubProg has_duplicate pc: 77 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var opt_name_20293
    DeRef(_opt_name_20293);
    _opt_name_20293 = NOVALUE;
    // SubProg has_duplicate pc: 79 op: STARTLINE (58)

    /** cmdline.e:196		return 0*/
    // SubProg has_duplicate pc: 81 op: RETURNF (28)

// Exiting block BLOCK: has_duplicate

// block var opts_20286
    DeRefDS(_opts_20286);

// block var opt_20287
    DeRefDS(_opt_20287);

// block var name_type_20288

// block var start_from_20289
    DeRef(_11542);
    _11542 = NOVALUE;
    return 0;
    // SubProg has_duplicate pc: 85 op: BADRETURNF (43)
    ;
}


void _48check_for_duplicates(object _opts_20305)
{
    object _opt_20309 = NOVALUE;
    object _msg_inlined_crash_at_49_20318 = NOVALUE;
    object _data_inlined_crash_at_46_20317 = NOVALUE;
    object _msg_inlined_crash_at_95_20326 = NOVALUE;
    object _data_inlined_crash_at_92_20325 = NOVALUE;
    object _11556 = NOVALUE; // 20323 11556
    object _11555 = NOVALUE; // 20322 11555
    object _11553 = NOVALUE; // 20320 11553
    object _11552 = NOVALUE; // 20315 11552
    object _11551 = NOVALUE; // 20314 11551
    object _11549 = NOVALUE; // 20312 11549
// skipping _11548  name type: 0
    object _11547 = NOVALUE; // 20308 11547
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_duplicates pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_for_duplicates pc: 3 op: STARTLINE (58)

    /** cmdline.e:201		for i = 1 to length(opts) do*/
    // SubProg check_for_duplicates pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20305)){
            _11547 = SEQ_PTR(_opts_20305)->length;
    }
    else {
        _11547 = 1;
    }
    // SubProg check_for_duplicates pc: 8 op: FOR_I (125)
    {
        object _i_20307;
        _i_20307 = 1;
L1: // addr: 15 pc: 8 sub: 20303 op: 125
        if (_i_20307 > _11547){
            goto L2; // [8] 125
        }
        // SubProg check_for_duplicates pc: 15 op: STARTLINE (58)

        /** cmdline.e:202			sequence opt*/
        // SubProg check_for_duplicates pc: 17 op: STARTLINE (58)

        /** cmdline.e:203			opt = opts[i]*/
        // SubProg check_for_duplicates pc: 19 op: RHS_SUBS (25)
        DeRef(_opt_20309);
        _2 = (object)SEQ_PTR(_opts_20305);
        _opt_20309 = (object)*(((s1_ptr)_2)->base + _i_20307);
        Ref(_opt_20309);
        // SubProg check_for_duplicates pc: 23 op: SEQUENCE_CHECK (97)
        // SubProg check_for_duplicates pc: 25 op: STARTLINE (58)

        /** cmdline.e:204			if has_duplicate( opts, opt, SHORTNAME, i ) then*/
        // SubProg check_for_duplicates pc: 27 op: PROC (27)
        RefDS(_opts_20305);
        RefDS(_opt_20309);
        _11549 = _48has_duplicate(_opts_20305, _opt_20309, 1, _i_20307);
        // SubProg check_for_duplicates pc: 34 op: IF (20)
        if (_11549 == 0) {
            DeRef(_11549);
            _11549 = NOVALUE;
            goto L3; // [34] 71
        }
        else {
            if (!IS_ATOM_INT(_11549) && DBL_PTR(_11549)->dbl == 0.0){
                DeRef(_11549);
                _11549 = NOVALUE;
                goto L3; // [34] 71
            }
            DeRef(_11549);
            _11549 = NOVALUE;
        }
        DeRef(_11549);
        _11549 = NOVALUE;
        // SubProg check_for_duplicates pc: 37 op: STARTLINE (58)

        /** cmdline.e:206				error:crash("cmd_opts: Duplicate Short Names (%s) are not allowed in an option record.\n",*/
        // SubProg check_for_duplicates pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20309);
        _11551 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg check_for_duplicates pc: 43 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_11551);
        ((intptr_t*)_2)[1] = _11551;
        _11552 = MAKE_SEQ(_1);
        _11551 = NOVALUE;
        // SubProg check_for_duplicates pc: 47 op: ASSIGN (18)
        DeRef(_data_inlined_crash_at_46_20317);
        _data_inlined_crash_at_46_20317 = _11552;
        _11552 = NOVALUE;
        // SubProg check_for_duplicates pc: 50 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg check_for_duplicates pc: 52 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_49_20318);
        _msg_inlined_crash_at_49_20318 = EPrintf(-9999999, _11550, _data_inlined_crash_at_46_20317);
        // SubProg check_for_duplicates pc: 56 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg check_for_duplicates pc: 58 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_49_20318);
        // SubProg check_for_duplicates pc: 61 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg check_for_duplicates pc: 63 op: ELSE (23)
        goto L4; // [63] 66
        // SubProg check_for_duplicates pc: 65 op: NOP1 (159)
L4: // addr: 66 pc: 65 sub: 20303 op: 159
        // SubProg check_for_duplicates pc: 66 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_duplicates @ 46

// block var data_inlined_crash_at_46_20317
        DeRef(_data_inlined_crash_at_46_20317);
        _data_inlined_crash_at_46_20317 = NOVALUE;

// block var msg_inlined_crash_at_49_20318
        DeRefi(_msg_inlined_crash_at_49_20318);
        _msg_inlined_crash_at_49_20318 = NOVALUE;
        // SubProg check_for_duplicates pc: 68 op: ELSE (23)
        goto L5; // [68] 116
        // SubProg check_for_duplicates pc: 70 op: NOP1 (159)
L3: // addr: 71 pc: 70 sub: 20303 op: 159
        // SubProg check_for_duplicates pc: 71 op: STARTLINE (58)

        /** cmdline.e:209			elsif has_duplicate( opts, opt, LONGNAME, i ) then*/
        // SubProg check_for_duplicates pc: 73 op: PROC (27)
        RefDS(_opts_20305);
        RefDS(_opt_20309);
        _11553 = _48has_duplicate(_opts_20305, _opt_20309, 2, _i_20307);
        // SubProg check_for_duplicates pc: 80 op: IF (20)
        if (_11553 == 0) {
            DeRef(_11553);
            _11553 = NOVALUE;
            goto L6; // [80] 115
        }
        else {
            if (!IS_ATOM_INT(_11553) && DBL_PTR(_11553)->dbl == 0.0){
                DeRef(_11553);
                _11553 = NOVALUE;
                goto L6; // [80] 115
            }
            DeRef(_11553);
            _11553 = NOVALUE;
        }
        DeRef(_11553);
        _11553 = NOVALUE;
        // SubProg check_for_duplicates pc: 83 op: STARTLINE (58)

        /** cmdline.e:211				error:crash("cmd_opts: Duplicate Long Names (%s) are not allowed in an option record.\n",*/
        // SubProg check_for_duplicates pc: 85 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20309);
        _11555 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg check_for_duplicates pc: 89 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_11555);
        ((intptr_t*)_2)[1] = _11555;
        _11556 = MAKE_SEQ(_1);
        _11555 = NOVALUE;
        // SubProg check_for_duplicates pc: 93 op: ASSIGN (18)
        DeRef(_data_inlined_crash_at_92_20325);
        _data_inlined_crash_at_92_20325 = _11556;
        _11556 = NOVALUE;
        // SubProg check_for_duplicates pc: 96 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg check_for_duplicates pc: 98 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_95_20326);
        _msg_inlined_crash_at_95_20326 = EPrintf(-9999999, _11554, _data_inlined_crash_at_92_20325);
        // SubProg check_for_duplicates pc: 102 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg check_for_duplicates pc: 104 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_95_20326);
        // SubProg check_for_duplicates pc: 107 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg check_for_duplicates pc: 109 op: ELSE (23)
        goto L7; // [109] 112
        // SubProg check_for_duplicates pc: 111 op: NOP1 (159)
L7: // addr: 112 pc: 111 sub: 20303 op: 159
        // SubProg check_for_duplicates pc: 112 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_duplicates @ 92

// block var data_inlined_crash_at_92_20325
        DeRef(_data_inlined_crash_at_92_20325);
        _data_inlined_crash_at_92_20325 = NOVALUE;

// block var msg_inlined_crash_at_95_20326
        DeRefi(_msg_inlined_crash_at_95_20326);
        _msg_inlined_crash_at_95_20326 = NOVALUE;
        // SubProg check_for_duplicates pc: 114 op: NOP1 (159)
L6: // addr: 115 pc: 114 sub: 20303 op: 159
        // SubProg check_for_duplicates pc: 115 op: NOP1 (159)
L5: // addr: 116 pc: 115 sub: 20303 op: 159
        // SubProg check_for_duplicates pc: 116 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var opt_20309
        DeRef(_opt_20309);
        _opt_20309 = NOVALUE;
        // SubProg check_for_duplicates pc: 118 op: STARTLINE (58)

        /** cmdline.e:214		end for*/
        // SubProg check_for_duplicates pc: 120 op: ENDFOR_INT_UP1 (54)
        _i_20307 = _i_20307 + 1;
        goto L1; // [120] 15
L2: // addr: 125 pc: 120 sub: 20303 op: 54
        ;
    }
    // SubProg check_for_duplicates pc: 125 op: STARTLINE (58)

    /** cmdline.e:216	end procedure*/
    // SubProg check_for_duplicates pc: 127 op: RETURNP (29)

// Exiting block BLOCK: check_for_duplicates

// block var opts_20305
    DeRefDS(_opts_20305);
    return;
    // SubProg check_for_duplicates pc: 130 op: BADRETURNF (43)
    ;
}


object _48update_opts(object _opts_20329)
{
    object _lExtras_20330 = NOVALUE;
    object _opt_20334 = NOVALUE;
    object _msg_inlined_crash_at_162_20367 = NOVALUE;
    object _msg_inlined_crash_at_323_20398 = NOVALUE;
    object _11627 = NOVALUE; // 20430 11627
    object _11626 = NOVALUE; // 20429 11626
    object _11625 = NOVALUE; // 20428 11625
    object _11624 = NOVALUE; // 20426 11624
    object _11623 = NOVALUE; // 20425 11623
    object _11622 = NOVALUE; // 20424 11622
    object _11621 = NOVALUE; // 20422 11621
    object _11620 = NOVALUE; // 20421 11620
    object _11619 = NOVALUE; // 20419 11619
    object _11618 = NOVALUE; // 20418 11618
    object _11617 = NOVALUE; // 20417 11617
    object _11616 = NOVALUE; // 20416 11616
    object _11615 = NOVALUE; // 20415 11615
    object _11614 = NOVALUE; // 20414 11614
// skipping _11613  name type: 0
    object _11612 = NOVALUE; // 20411 11612
// skipping _11611  name type: 0
    object _11610 = NOVALUE; // 20408 11610
    object _11609 = NOVALUE; // 20407 11609
    object _11608 = NOVALUE; // 20405 11608
    object _11607 = NOVALUE; // 20404 11607
// skipping _11601  name type: 0
    object _11600 = NOVALUE; // 20394 11600
    object _11599 = NOVALUE; // 20393 11599
    object _11598 = NOVALUE; // 20392 11598
    object _11597 = NOVALUE; // 20391 11597
    object _11596 = NOVALUE; // 20390 11596
    object _11595 = NOVALUE; // 20388 11595
    object _11594 = NOVALUE; // 20387 11594
    object _11593 = NOVALUE; // 20382 11593
    object _11591 = NOVALUE; // 20380 11591
    object _11590 = NOVALUE; // 20379 11590
    object _11589 = NOVALUE; // 20377 11589
    object _11588 = NOVALUE; // 20376 11588
    object _11587 = NOVALUE; // 20374 11587
    object _11586 = NOVALUE; // 20373 11586
    object _11585 = NOVALUE; // 20371 11585
    object _11584 = NOVALUE; // 20370 11584
// skipping _11582  name type: 0
    object _11581 = NOVALUE; // 20362 11581
    object _11580 = NOVALUE; // 20361 11580
    object _11579 = NOVALUE; // 20360 11579
    object _11578 = NOVALUE; // 20359 11578
    object _11577 = NOVALUE; // 20358 11577
    object _11576 = NOVALUE; // 20356 11576
    object _11575 = NOVALUE; // 20355 11575
    object _11574 = NOVALUE; // 20354 11574
    object _11573 = NOVALUE; // 20353 11573
    object _11572 = NOVALUE; // 20352 11572
    object _11571 = NOVALUE; // 20351 11571
    object _11570 = NOVALUE; // 20349 11570
    object _11569 = NOVALUE; // 20348 11569
    object _11568 = NOVALUE; // 20347 11568
    object _11567 = NOVALUE; // 20346 11567
    object _11566 = NOVALUE; // 20345 11566
    object _11565 = NOVALUE; // 20344 11565
// skipping _11564  name type: 0
    object _11563 = NOVALUE; // 20341 11563
    object _11562 = NOVALUE; // 20340 11562
    object _11561 = NOVALUE; // 20339 11561
// skipping _11560  name type: 0
    object _11559 = NOVALUE; // 20337 11559
// skipping _11558  name type: 0
    object _11557 = NOVALUE; // 20333 11557
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_opts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg update_opts pc: 3 op: STARTLINE (58)

    /** cmdline.e:223		integer lExtras = 0 -- Ensure that there is zero or one 'extras' record only.*/
    // SubProg update_opts pc: 5 op: ASSIGN_I (113)
    _lExtras_20330 = 0;
    // SubProg update_opts pc: 8 op: STARTLINE (58)

    /** cmdline.e:224		for i = 1 to length(opts) do*/
    // SubProg update_opts pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20329)){
            _11557 = SEQ_PTR(_opts_20329)->length;
    }
    else {
        _11557 = 1;
    }
    // SubProg update_opts pc: 13 op: FOR_I (125)
    {
        object _i_20332;
        _i_20332 = 1;
L1: // addr: 20 pc: 13 sub: 20327 op: 125
        if (_i_20332 > _11557){
            goto L2; // [13] 565
        }
        // SubProg update_opts pc: 20 op: STARTLINE (58)

        /** cmdline.e:225			sequence opt = opts[i]*/
        // SubProg update_opts pc: 22 op: RHS_SUBS (25)
        DeRef(_opt_20334);
        _2 = (object)SEQ_PTR(_opts_20329);
        _opt_20334 = (object)*(((s1_ptr)_2)->base + _i_20332);
        Ref(_opt_20334);
        // SubProg update_opts pc: 26 op: SEQUENCE_CHECK (97)
        // SubProg update_opts pc: 28 op: STARTLINE (58)

        /** cmdline.e:226			opts[i] = 0*/
        // SubProg update_opts pc: 30 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opts_20329);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20329 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_20332);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 34 op: STARTLINE (58)

        /** cmdline.e:228			if length(opt) < MAPNAME then*/
        // SubProg update_opts pc: 36 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_20334)){
                _11559 = SEQ_PTR(_opt_20334)->length;
        }
        else {
            _11559 = 1;
        }
        // SubProg update_opts pc: 39 op: LESS_IFW_I (119)
        if (_11559 >= 6)
        goto L3; // [39] 61
        // SubProg update_opts pc: 43 op: STARTLINE (58)

        /** cmdline.e:229				opt &= repeat(-1, MAPNAME - length(opt))*/
        // SubProg update_opts pc: 45 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_20334)){
                _11561 = SEQ_PTR(_opt_20334)->length;
        }
        else {
            _11561 = 1;
        }
        // SubProg update_opts pc: 48 op: MINUS (10)
        _11562 = 6 - _11561;
        _11561 = NOVALUE;
        // SubProg update_opts pc: 52 op: REPEAT (32)
        _11563 = Repeat(-1, _11562);
        _11562 = NOVALUE;
        // SubProg update_opts pc: 56 op: CONCAT (15)
        Concat((object_ptr)&_opt_20334, _opt_20334, _11563);
        DeRefDS(_11563);
        _11563 = NOVALUE;
        // SubProg update_opts pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 20327 op: 159
        // SubProg update_opts pc: 61 op: STARTLINE (58)

        /** cmdline.e:232			if sequence(opt[SHORTNAME]) and length(opt[SHORTNAME]) = 0 then*/
        // SubProg update_opts pc: 63 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11565 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 67 op: IS_A_SEQUENCE (68)
        _11566 = IS_SEQUENCE(_11565);
        _11565 = NOVALUE;
        // SubProg update_opts pc: 70 op: SC1_AND_IF (146)
        if (_11566 == 0) {
            goto L4; // [70] 96
        }
        // SubProg update_opts pc: 74 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11568 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 78 op: LENGTH (42)
        if (IS_SEQUENCE(_11568)){
                _11569 = SEQ_PTR(_11568)->length;
        }
        else {
            _11569 = 1;
        }
        _11568 = NOVALUE;
        // SubProg update_opts pc: 81 op: EQUALS (3)
        _11570 = (_11569 == 0);
        _11569 = NOVALUE;
        // SubProg update_opts pc: 85 op: NOP1 (159)
        // SubProg update_opts pc: 86 op: IF (20)
        if (_11570 == 0)
        {
            DeRef(_11570);
            _11570 = NOVALUE;
            goto L4; // [86] 96
        }
        else{
            DeRef(_11570);
            _11570 = NOVALUE;
        }
        // SubProg update_opts pc: 89 op: STARTLINE (58)

        /** cmdline.e:233				opt[SHORTNAME] = 0*/
        // SubProg update_opts pc: 91 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 95 op: NOP1 (159)
L4: // addr: 96 pc: 95 sub: 20327 op: 159
        // SubProg update_opts pc: 96 op: STARTLINE (58)

        /** cmdline.e:236			if sequence(opt[LONGNAME]) and length(opt[LONGNAME]) = 0 then*/
        // SubProg update_opts pc: 98 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11571 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 102 op: IS_A_SEQUENCE (68)
        _11572 = IS_SEQUENCE(_11571);
        _11571 = NOVALUE;
        // SubProg update_opts pc: 105 op: SC1_AND_IF (146)
        if (_11572 == 0) {
            goto L5; // [105] 131
        }
        // SubProg update_opts pc: 109 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11574 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 113 op: LENGTH (42)
        if (IS_SEQUENCE(_11574)){
                _11575 = SEQ_PTR(_11574)->length;
        }
        else {
            _11575 = 1;
        }
        _11574 = NOVALUE;
        // SubProg update_opts pc: 116 op: EQUALS (3)
        _11576 = (_11575 == 0);
        _11575 = NOVALUE;
        // SubProg update_opts pc: 120 op: NOP1 (159)
        // SubProg update_opts pc: 121 op: IF (20)
        if (_11576 == 0)
        {
            DeRef(_11576);
            _11576 = NOVALUE;
            goto L5; // [121] 131
        }
        else{
            DeRef(_11576);
            _11576 = NOVALUE;
        }
        // SubProg update_opts pc: 124 op: STARTLINE (58)

        /** cmdline.e:237				opt[LONGNAME] = 0*/
        // SubProg update_opts pc: 126 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 130 op: NOP1 (159)
L5: // addr: 131 pc: 130 sub: 20327 op: 159
        // SubProg update_opts pc: 131 op: STARTLINE (58)

        /** cmdline.e:240			if atom(opt[LONGNAME]) and atom(opt[SHORTNAME]) then*/
        // SubProg update_opts pc: 133 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11577 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 137 op: IS_AN_ATOM (67)
        _11578 = IS_ATOM(_11577);
        _11577 = NOVALUE;
        // SubProg update_opts pc: 140 op: SC1_AND_IF (146)
        if (_11578 == 0) {
            goto L6; // [140] 212
        }
        // SubProg update_opts pc: 144 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11580 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 148 op: IS_AN_ATOM (67)
        _11581 = IS_ATOM(_11580);
        _11580 = NOVALUE;
        // SubProg update_opts pc: 151 op: NOP1 (159)
        // SubProg update_opts pc: 152 op: IF (20)
        if (_11581 == 0)
        {
            _11581 = NOVALUE;
            goto L6; // [152] 212
        }
        else{
            _11581 = NOVALUE;
        }
        // SubProg update_opts pc: 155 op: STARTLINE (58)

        /** cmdline.e:241				if lExtras != 0 then*/
        // SubProg update_opts pc: 157 op: NOTEQ_IFW_I (122)
        if (_lExtras_20330 == 0)
        goto L7; // [157] 184
        // SubProg update_opts pc: 161 op: STARTLINE (58)

        /** cmdline.e:242					error:crash("cmd_opts: There must be less than two 'extras' option records.\n")*/
        // SubProg update_opts pc: 163 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg update_opts pc: 165 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_162_20367);
        _msg_inlined_crash_at_162_20367 = EPrintf(-9999999, _11583, _5);
        // SubProg update_opts pc: 169 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg update_opts pc: 171 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_162_20367);
        // SubProg update_opts pc: 174 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg update_opts pc: 176 op: ELSE (23)
        goto L8; // [176] 179
        // SubProg update_opts pc: 178 op: NOP1 (159)
L8: // addr: 179 pc: 178 sub: 20327 op: 159
        // SubProg update_opts pc: 179 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from update_opts @ 162

// block var msg_inlined_crash_at_162_20367
        DeRefi(_msg_inlined_crash_at_162_20367);
        _msg_inlined_crash_at_162_20367 = NOVALUE;
        // SubProg update_opts pc: 181 op: ELSE (23)
        goto L9; // [181] 211
        // SubProg update_opts pc: 183 op: NOP1 (159)
L7: // addr: 184 pc: 183 sub: 20327 op: 159
        // SubProg update_opts pc: 184 op: STARTLINE (58)

        /** cmdline.e:244					lExtras = i*/
        // SubProg update_opts pc: 186 op: ASSIGN_I (113)
        _lExtras_20330 = _i_20332;
        // SubProg update_opts pc: 189 op: STARTLINE (58)

        /** cmdline.e:245					if atom(opt[MAPNAME]) then*/
        // SubProg update_opts pc: 191 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11584 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 195 op: IS_AN_ATOM (67)
        _11585 = IS_ATOM(_11584);
        _11584 = NOVALUE;
        // SubProg update_opts pc: 198 op: IF (20)
        if (_11585 == 0)
        {
            _11585 = NOVALUE;
            goto LA; // [198] 210
        }
        else{
            _11585 = NOVALUE;
        }
        // SubProg update_opts pc: 201 op: STARTLINE (58)

        /** cmdline.e:246						opt[MAPNAME] = EXTRAS*/
        // SubProg update_opts pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_opts pc: 205 op: ASSIGN_SUBS (16)
        RefDS(_48EXTRAS_20250);
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _48EXTRAS_20250;
        DeRef(_1);
        // SubProg update_opts pc: 209 op: NOP1 (159)
LA: // addr: 210 pc: 209 sub: 20327 op: 159
        // SubProg update_opts pc: 210 op: NOP1 (159)
L9: // addr: 211 pc: 210 sub: 20327 op: 159
        // SubProg update_opts pc: 211 op: NOP1 (159)
L6: // addr: 212 pc: 211 sub: 20327 op: 159
        // SubProg update_opts pc: 212 op: STARTLINE (58)

        /** cmdline.e:251			if atom(opt[DESCRIPTION]) then*/
        // SubProg update_opts pc: 214 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11586 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg update_opts pc: 218 op: IS_AN_ATOM (67)
        _11587 = IS_ATOM(_11586);
        _11586 = NOVALUE;
        // SubProg update_opts pc: 221 op: IF (20)
        if (_11587 == 0)
        {
            _11587 = NOVALUE;
            goto LB; // [221] 231
        }
        else{
            _11587 = NOVALUE;
        }
        // SubProg update_opts pc: 224 op: STARTLINE (58)

        /** cmdline.e:252				opt[DESCRIPTION] = ""*/
        // SubProg update_opts pc: 226 op: ASSIGN_SUBS (16)
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
        // SubProg update_opts pc: 230 op: NOP1 (159)
LB: // addr: 231 pc: 230 sub: 20327 op: 159
        // SubProg update_opts pc: 231 op: STARTLINE (58)

        /** cmdline.e:256			if atom(opt[OPTIONS]) then*/
        // SubProg update_opts pc: 233 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11588 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 237 op: IS_AN_ATOM (67)
        _11589 = IS_ATOM(_11588);
        _11588 = NOVALUE;
        // SubProg update_opts pc: 240 op: IF (20)
        if (_11589 == 0)
        {
            _11589 = NOVALUE;
            goto LC; // [240] 279
        }
        else{
            _11589 = NOVALUE;
        }
        // SubProg update_opts pc: 243 op: STARTLINE (58)

        /** cmdline.e:257				if equal(opt[OPTIONS], HAS_PARAMETER) then*/
        // SubProg update_opts pc: 245 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11590 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 249 op: EQUAL (153)
        if (_11590 == 112)
        _11591 = 1;
        else if (IS_ATOM_INT(_11590) && IS_ATOM_INT(112))
        _11591 = 0;
        else
        _11591 = (compare(_11590, 112) == 0);
        _11590 = NOVALUE;
        // SubProg update_opts pc: 253 op: IF (20)
        if (_11591 == 0)
        {
            _11591 = NOVALUE;
            goto LD; // [253] 269
        }
        else{
            _11591 = NOVALUE;
        }
        // SubProg update_opts pc: 256 op: STARTLINE (58)

        /** cmdline.e:258					opt[OPTIONS] = {HAS_PARAMETER,"x"}*/
        // SubProg update_opts pc: 258 op: RIGHT_BRACE_2 (85)
        RefDS(_11592);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 112;
        ((intptr_t *)_2)[2] = _11592;
        _11593 = MAKE_SEQ(_1);
        // SubProg update_opts pc: 262 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11593;
        if( _1 != _11593 ){
            DeRef(_1);
        }
        _11593 = NOVALUE;
        // SubProg update_opts pc: 266 op: ELSE (23)
        goto LE; // [266] 383
        // SubProg update_opts pc: 268 op: NOP1 (159)
LD: // addr: 269 pc: 268 sub: 20327 op: 159
        // SubProg update_opts pc: 269 op: STARTLINE (58)

        /** cmdline.e:260					opt[OPTIONS] = {}*/
        // SubProg update_opts pc: 271 op: ASSIGN_SUBS (16)
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
        // SubProg update_opts pc: 275 op: NOP1 (159)
        // SubProg update_opts pc: 276 op: ELSE (23)
        goto LE; // [276] 383
        // SubProg update_opts pc: 278 op: NOP1 (159)
LC: // addr: 279 pc: 278 sub: 20327 op: 159
        // SubProg update_opts pc: 279 op: STARTLINE (58)

        /** cmdline.e:263				for j = 1 to length(opt[OPTIONS]) do*/
        // SubProg update_opts pc: 281 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11594 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 285 op: LENGTH (42)
        if (IS_SEQUENCE(_11594)){
                _11595 = SEQ_PTR(_11594)->length;
        }
        else {
            _11595 = 1;
        }
        _11594 = NOVALUE;
        // SubProg update_opts pc: 288 op: FOR_I (125)
        {
            object _j_20386;
            _j_20386 = 1;
LF: // addr: 295 pc: 288 sub: 20327 op: 125
            if (_j_20386 > _11595){
                goto L10; // [288] 350
            }
            // SubProg update_opts pc: 295 op: STARTLINE (58)

            /** cmdline.e:264					if find(opt[OPTIONS][j], opt[OPTIONS], j + 1) != 0 then*/
            // SubProg update_opts pc: 297 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_opt_20334);
            _11596 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg update_opts pc: 301 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_11596);
            _11597 = (object)*(((s1_ptr)_2)->base + _j_20386);
            _11596 = NOVALUE;
            // SubProg update_opts pc: 305 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_opt_20334);
            _11598 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg update_opts pc: 309 op: PLUS1 (93)
            _11599 = _j_20386 + 1;
            // SubProg update_opts pc: 313 op: FIND_FROM (176)
            _11600 = find_from(_11597, _11598, _11599);
            _11597 = NOVALUE;
            _11598 = NOVALUE;
            _11599 = NOVALUE;
            // SubProg update_opts pc: 318 op: NOTEQ_IFW_I (122)
            if (_11600 == 0)
            goto L11; // [318] 343
            // SubProg update_opts pc: 322 op: STARTLINE (58)

            /** cmdline.e:265						error:crash("cmd_opts: Duplicate processing options are not allowed in an option record.\n")*/
            // SubProg update_opts pc: 324 op: STARTLINE (58)

            /** error.e:51		msg = sprintf(fmt, data)*/
            // SubProg update_opts pc: 326 op: SPRINTF (53)
            DeRefi(_msg_inlined_crash_at_323_20398);
            _msg_inlined_crash_at_323_20398 = EPrintf(-9999999, _11602, _5);
            // SubProg update_opts pc: 330 op: STARTLINE (58)

            /** error.e:52		machine_proc(M_CRASH, msg)*/
            // SubProg update_opts pc: 332 op: MACHINE_PROC (112)
            machine(67, _msg_inlined_crash_at_323_20398);
            // SubProg update_opts pc: 335 op: STARTLINE (58)

            /** error.e:53	end procedure*/
            // SubProg update_opts pc: 337 op: ELSE (23)
            goto L12; // [337] 340
            // SubProg update_opts pc: 339 op: NOP1 (159)
L12: // addr: 340 pc: 339 sub: 20327 op: 159
            // SubProg update_opts pc: 340 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from update_opts @ 323

// block var msg_inlined_crash_at_323_20398
            DeRefi(_msg_inlined_crash_at_323_20398);
            _msg_inlined_crash_at_323_20398 = NOVALUE;
            // SubProg update_opts pc: 342 op: NOP1 (159)
L11: // addr: 343 pc: 342 sub: 20327 op: 159
            // SubProg update_opts pc: 343 op: STARTLINE (58)

            /** cmdline.e:267				end for*/
            // SubProg update_opts pc: 345 op: ENDFOR_INT_UP1 (54)
            _j_20386 = _j_20386 + 1;
            goto LF; // [345] 295
L10: // addr: 350 pc: 345 sub: 20327 op: 54
            ;
        }
        // SubProg update_opts pc: 350 op: STARTLINE (58)

        /** cmdline.e:269				check_for_bad_combos( opt, HAS_PARAMETER, NO_PARAMETER, */
        // SubProg update_opts pc: 352 op: PROC (27)
        RefDS(_opt_20334);
        RefDS(_11603);
        _48check_for_bad_combos(_opt_20334, 112, 110, _11603);
        // SubProg update_opts pc: 358 op: STARTLINE (58)

        /** cmdline.e:272				check_for_bad_combos( opt, HAS_CASE, NO_CASE, */
        // SubProg update_opts pc: 360 op: PROC (27)
        RefDS(_opt_20334);
        RefDS(_11604);
        _48check_for_bad_combos(_opt_20334, 99, 105, _11604);
        // SubProg update_opts pc: 366 op: STARTLINE (58)

        /** cmdline.e:275				check_for_bad_combos( opt, MANDATORY, OPTIONAL, */
        // SubProg update_opts pc: 368 op: PROC (27)
        RefDS(_opt_20334);
        RefDS(_11605);
        _48check_for_bad_combos(_opt_20334, 109, 111, _11605);
        // SubProg update_opts pc: 374 op: STARTLINE (58)

        /** cmdline.e:278				check_for_bad_combos( opt, ONCE, MULTIPLE, */
        // SubProg update_opts pc: 376 op: PROC (27)
        RefDS(_opt_20334);
        RefDS(_11606);
        _48check_for_bad_combos(_opt_20334, 49, 42, _11606);
        // SubProg update_opts pc: 382 op: NOP1 (159)
LE: // addr: 383 pc: 382 sub: 20327 op: 159
        // SubProg update_opts pc: 383 op: STARTLINE (58)

        /** cmdline.e:283			if sequence(opt[CALLBACK]) then*/
        // SubProg update_opts pc: 385 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11607 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 389 op: IS_A_SEQUENCE (68)
        _11608 = IS_SEQUENCE(_11607);
        _11607 = NOVALUE;
        // SubProg update_opts pc: 392 op: IF (20)
        if (_11608 == 0)
        {
            _11608 = NOVALUE;
            goto L13; // [392] 404
        }
        else{
            _11608 = NOVALUE;
        }
        // SubProg update_opts pc: 395 op: STARTLINE (58)

        /** cmdline.e:284				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 397 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 401 op: ELSE (23)
        goto L14; // [401] 443
        // SubProg update_opts pc: 403 op: NOP1 (159)
L13: // addr: 404 pc: 403 sub: 20327 op: 159
        // SubProg update_opts pc: 404 op: STARTLINE (58)

        /** cmdline.e:285			elsif not integer(opt[CALLBACK]) then*/
        // SubProg update_opts pc: 406 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11609 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 410 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_11609))
        _11610 = 1;
        else if (IS_ATOM_DBL(_11609))
        _11610 = IS_ATOM_INT(DoubleToInt(_11609));
        else
        _11610 = 0;
        _11609 = NOVALUE;
        // SubProg update_opts pc: 413 op: NOT_IFW (108)
        if (_11610 != 0)
        goto L15; // [413] 425
        _11610 = NOVALUE;
        // SubProg update_opts pc: 416 op: STARTLINE (58)

        /** cmdline.e:286				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 418 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 422 op: ELSE (23)
        goto L14; // [422] 443
        // SubProg update_opts pc: 424 op: NOP1 (159)
L15: // addr: 425 pc: 424 sub: 20327 op: 159
        // SubProg update_opts pc: 425 op: STARTLINE (58)

        /** cmdline.e:287			elsif opt[CALLBACK] < 0 then*/
        // SubProg update_opts pc: 427 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11612 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 431 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _11612, 0)){
            _11612 = NOVALUE;
            goto L16; // [431] 442
        }
        _11612 = NOVALUE;
        // SubProg update_opts pc: 435 op: STARTLINE (58)

        /** cmdline.e:288				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 437 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 441 op: NOP1 (159)
L16: // addr: 442 pc: 441 sub: 20327 op: 159
        // SubProg update_opts pc: 442 op: NOP1 (159)
L14: // addr: 443 pc: 442 sub: 20327 op: 159
        // SubProg update_opts pc: 443 op: STARTLINE (58)

        /** cmdline.e:291			if sequence(opt[MAPNAME]) and length(opt[MAPNAME]) = 0 then*/
        // SubProg update_opts pc: 445 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11614 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 449 op: IS_A_SEQUENCE (68)
        _11615 = IS_SEQUENCE(_11614);
        _11614 = NOVALUE;
        // SubProg update_opts pc: 452 op: SC1_AND_IF (146)
        if (_11615 == 0) {
            goto L17; // [452] 478
        }
        // SubProg update_opts pc: 456 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11617 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 460 op: LENGTH (42)
        if (IS_SEQUENCE(_11617)){
                _11618 = SEQ_PTR(_11617)->length;
        }
        else {
            _11618 = 1;
        }
        _11617 = NOVALUE;
        // SubProg update_opts pc: 463 op: EQUALS (3)
        _11619 = (_11618 == 0);
        _11618 = NOVALUE;
        // SubProg update_opts pc: 467 op: NOP1 (159)
        // SubProg update_opts pc: 468 op: IF (20)
        if (_11619 == 0)
        {
            DeRef(_11619);
            _11619 = NOVALUE;
            goto L17; // [468] 478
        }
        else{
            DeRef(_11619);
            _11619 = NOVALUE;
        }
        // SubProg update_opts pc: 471 op: STARTLINE (58)

        /** cmdline.e:292				opt[MAPNAME] = 0*/
        // SubProg update_opts pc: 473 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 477 op: NOP1 (159)
L17: // addr: 478 pc: 477 sub: 20327 op: 159
        // SubProg update_opts pc: 478 op: STARTLINE (58)

        /** cmdline.e:295			if atom(opt[MAPNAME]) then*/
        // SubProg update_opts pc: 480 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11620 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 484 op: IS_AN_ATOM (67)
        _11621 = IS_ATOM(_11620);
        _11620 = NOVALUE;
        // SubProg update_opts pc: 487 op: IF (20)
        if (_11621 == 0)
        {
            _11621 = NOVALUE;
            goto L18; // [487] 550
        }
        else{
            _11621 = NOVALUE;
        }
        // SubProg update_opts pc: 490 op: STARTLINE (58)

        /** cmdline.e:296				if sequence(opt[LONGNAME]) then*/
        // SubProg update_opts pc: 492 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11622 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 496 op: IS_A_SEQUENCE (68)
        _11623 = IS_SEQUENCE(_11622);
        _11622 = NOVALUE;
        // SubProg update_opts pc: 499 op: IF (20)
        if (_11623 == 0)
        {
            _11623 = NOVALUE;
            goto L19; // [499] 515
        }
        else{
            _11623 = NOVALUE;
        }
        // SubProg update_opts pc: 502 op: STARTLINE (58)

        /** cmdline.e:297					opt[MAPNAME] = opt[LONGNAME]*/
        // SubProg update_opts pc: 504 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11624 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 508 op: ASSIGN_SUBS (16)
        Ref(_11624);
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11624;
        if( _1 != _11624 ){
            DeRef(_1);
        }
        _11624 = NOVALUE;
        // SubProg update_opts pc: 512 op: ELSE (23)
        goto L1A; // [512] 549
        // SubProg update_opts pc: 514 op: NOP1 (159)
L19: // addr: 515 pc: 514 sub: 20327 op: 159
        // SubProg update_opts pc: 515 op: STARTLINE (58)

        /** cmdline.e:298				elsif sequence(opt[SHORTNAME]) then*/
        // SubProg update_opts pc: 517 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11625 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 521 op: IS_A_SEQUENCE (68)
        _11626 = IS_SEQUENCE(_11625);
        _11625 = NOVALUE;
        // SubProg update_opts pc: 524 op: IF (20)
        if (_11626 == 0)
        {
            _11626 = NOVALUE;
            goto L1B; // [524] 540
        }
        else{
            _11626 = NOVALUE;
        }
        // SubProg update_opts pc: 527 op: STARTLINE (58)

        /** cmdline.e:299					opt[MAPNAME] = opt[SHORTNAME]*/
        // SubProg update_opts pc: 529 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20334);
        _11627 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 533 op: ASSIGN_SUBS (16)
        Ref(_11627);
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11627;
        if( _1 != _11627 ){
            DeRef(_1);
        }
        _11627 = NOVALUE;
        // SubProg update_opts pc: 537 op: ELSE (23)
        goto L1A; // [537] 549
        // SubProg update_opts pc: 539 op: NOP1 (159)
L1B: // addr: 540 pc: 539 sub: 20327 op: 159
        // SubProg update_opts pc: 540 op: STARTLINE (58)

        /** cmdline.e:301					opt[MAPNAME] = EXTRAS*/
        // SubProg update_opts pc: 542 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_opts pc: 544 op: ASSIGN_SUBS (16)
        RefDS(_48EXTRAS_20250);
        _2 = (object)SEQ_PTR(_opt_20334);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20334 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _48EXTRAS_20250;
        DeRef(_1);
        // SubProg update_opts pc: 548 op: NOP1 (159)
L1A: // addr: 549 pc: 548 sub: 20327 op: 159
        // SubProg update_opts pc: 549 op: NOP1 (159)
L18: // addr: 550 pc: 549 sub: 20327 op: 159
        // SubProg update_opts pc: 550 op: STARTLINE (58)

        /** cmdline.e:305			opts[i] = opt*/
        // SubProg update_opts pc: 552 op: ASSIGN_SUBS (16)
        RefDS(_opt_20334);
        _2 = (object)SEQ_PTR(_opts_20329);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20329 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_20332);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _opt_20334;
        DeRef(_1);
        // SubProg update_opts pc: 556 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var opt_20334
        DeRefDS(_opt_20334);
        _opt_20334 = NOVALUE;
        // SubProg update_opts pc: 558 op: STARTLINE (58)

        /** cmdline.e:306		end for*/
        // SubProg update_opts pc: 560 op: ENDFOR_INT_UP1 (54)
        _i_20332 = _i_20332 + 1;
        goto L1; // [560] 20
L2: // addr: 565 pc: 560 sub: 20327 op: 54
        ;
    }
    // SubProg update_opts pc: 565 op: STARTLINE (58)

    /** cmdline.e:307		return opts*/
    // SubProg update_opts pc: 567 op: RETURNF (28)

// Exiting block BLOCK: update_opts

// block var lExtras_20330
    _11617 = NOVALUE;
    _11594 = NOVALUE;
    _11574 = NOVALUE;
    _11568 = NOVALUE;
    return _opts_20329;
    // SubProg update_opts pc: 571 op: BADRETURNF (43)
    ;
}


object _48standardize_help_options(object _opts_20434, object _auto_help_switches_20435)
{
    object _has_h_20436 = NOVALUE;
    object _has_help_20437 = NOVALUE;
    object _has_question_20438 = NOVALUE;
    object _appended_opts_20458 = NOVALUE;
// skipping _11656  name type: 0
// skipping _11655  name type: 0
    object _11654 = NOVALUE; // 20476 11654
// skipping _11653  name type: 0
// skipping _11652  name type: 0
    object _11651 = NOVALUE; // 20472 11651
// skipping _11650  name type: 0
// skipping _11649  name type: 0
    object _11648 = NOVALUE; // 20468 11648
// skipping _11647  name type: 0
// skipping _11646  name type: 0
    object _11645 = NOVALUE; // 20464 11645
    object _11643 = NOVALUE; // 20462 11643
    object _11642 = NOVALUE; // 20461 11642
    object _11641 = NOVALUE; // 20460 11641
    object _11640 = NOVALUE; // 20456 11640
    object _11638 = NOVALUE; // 20454 11638
    object _11637 = NOVALUE; // 20453 11637
    object _11636 = NOVALUE; // 20451 11636
    object _11634 = NOVALUE; // 20449 11634
    object _11633 = NOVALUE; // 20448 11633
    object _11632 = NOVALUE; // 20446 11632
    object _11630 = NOVALUE; // 20444 11630
    object _11629 = NOVALUE; // 20443 11629
    object _11628 = NOVALUE; // 20441 11628
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg standardize_help_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg standardize_help_options pc: 3 op: INTEGER_CHECK (96)
    // SubProg standardize_help_options pc: 5 op: STARTLINE (58)

    /** cmdline.e:313		integer has_h = 0, has_help = 0, has_question = 0*/
    // SubProg standardize_help_options pc: 7 op: ASSIGN_I (113)
    _has_h_20436 = 0;
    // SubProg standardize_help_options pc: 10 op: ASSIGN_I (113)
    _has_help_20437 = 0;
    // SubProg standardize_help_options pc: 13 op: ASSIGN_I (113)
    _has_question_20438 = 0;
    // SubProg standardize_help_options pc: 16 op: STARTLINE (58)

    /** cmdline.e:314		for i = 1 to length(opts) do*/
    // SubProg standardize_help_options pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20434)){
            _11628 = SEQ_PTR(_opts_20434)->length;
    }
    else {
        _11628 = 1;
    }
    // SubProg standardize_help_options pc: 21 op: FOR_I (125)
    {
        object _i_20440;
        _i_20440 = 1;
L1: // addr: 28 pc: 21 sub: 20432 op: 125
        if (_i_20440 > _11628){
            goto L2; // [21] 107
        }
        // SubProg standardize_help_options pc: 28 op: STARTLINE (58)

        /** cmdline.e:315			if equal(opts[i][SHORTNAME], "h") then*/
        // SubProg standardize_help_options pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20434);
        _11629 = (object)*(((s1_ptr)_2)->base + _i_20440);
        // SubProg standardize_help_options pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11629);
        _11630 = (object)*(((s1_ptr)_2)->base + 1);
        _11629 = NOVALUE;
        // SubProg standardize_help_options pc: 38 op: EQUAL (153)
        if (_11630 == _11631)
        _11632 = 1;
        else if (IS_ATOM_INT(_11630) && IS_ATOM_INT(_11631))
        _11632 = 0;
        else
        _11632 = (compare(_11630, _11631) == 0);
        _11630 = NOVALUE;
        // SubProg standardize_help_options pc: 42 op: IF (20)
        if (_11632 == 0)
        {
            _11632 = NOVALUE;
            goto L3; // [42] 53
        }
        else{
            _11632 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 45 op: STARTLINE (58)

        /** cmdline.e:316				has_h = 1*/
        // SubProg standardize_help_options pc: 47 op: ASSIGN_I (113)
        _has_h_20436 = 1;
        // SubProg standardize_help_options pc: 50 op: ELSE (23)
        goto L4; // [50] 77
        // SubProg standardize_help_options pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 20432 op: 159
        // SubProg standardize_help_options pc: 53 op: STARTLINE (58)

        /** cmdline.e:317			elsif equal(opts[i][SHORTNAME], "?") then*/
        // SubProg standardize_help_options pc: 55 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20434);
        _11633 = (object)*(((s1_ptr)_2)->base + _i_20440);
        // SubProg standardize_help_options pc: 59 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11633);
        _11634 = (object)*(((s1_ptr)_2)->base + 1);
        _11633 = NOVALUE;
        // SubProg standardize_help_options pc: 63 op: EQUAL (153)
        if (_11634 == _11635)
        _11636 = 1;
        else if (IS_ATOM_INT(_11634) && IS_ATOM_INT(_11635))
        _11636 = 0;
        else
        _11636 = (compare(_11634, _11635) == 0);
        _11634 = NOVALUE;
        // SubProg standardize_help_options pc: 67 op: IF (20)
        if (_11636 == 0)
        {
            _11636 = NOVALUE;
            goto L5; // [67] 76
        }
        else{
            _11636 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 70 op: STARTLINE (58)

        /** cmdline.e:318				has_question = 1*/
        // SubProg standardize_help_options pc: 72 op: ASSIGN_I (113)
        _has_question_20438 = 1;
        // SubProg standardize_help_options pc: 75 op: NOP1 (159)
L5: // addr: 76 pc: 75 sub: 20432 op: 159
        // SubProg standardize_help_options pc: 76 op: NOP1 (159)
L4: // addr: 77 pc: 76 sub: 20432 op: 159
        // SubProg standardize_help_options pc: 77 op: STARTLINE (58)

        /** cmdline.e:321			if equal(opts[i][LONGNAME], "help") then*/
        // SubProg standardize_help_options pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20434);
        _11637 = (object)*(((s1_ptr)_2)->base + _i_20440);
        // SubProg standardize_help_options pc: 83 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11637);
        _11638 = (object)*(((s1_ptr)_2)->base + 2);
        _11637 = NOVALUE;
        // SubProg standardize_help_options pc: 87 op: EQUAL (153)
        if (_11638 == _11639)
        _11640 = 1;
        else if (IS_ATOM_INT(_11638) && IS_ATOM_INT(_11639))
        _11640 = 0;
        else
        _11640 = (compare(_11638, _11639) == 0);
        _11638 = NOVALUE;
        // SubProg standardize_help_options pc: 91 op: IF (20)
        if (_11640 == 0)
        {
            _11640 = NOVALUE;
            goto L6; // [91] 100
        }
        else{
            _11640 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 94 op: STARTLINE (58)

        /** cmdline.e:322				has_help = 1*/
        // SubProg standardize_help_options pc: 96 op: ASSIGN_I (113)
        _has_help_20437 = 1;
        // SubProg standardize_help_options pc: 99 op: NOP1 (159)
L6: // addr: 100 pc: 99 sub: 20432 op: 159
        // SubProg standardize_help_options pc: 100 op: STARTLINE (58)

        /** cmdline.e:324		end for*/
        // SubProg standardize_help_options pc: 102 op: ENDFOR_INT_UP1 (54)
        _i_20440 = _i_20440 + 1;
        goto L1; // [102] 28
L2: // addr: 107 pc: 102 sub: 20432 op: 54
        ;
    }
    // SubProg standardize_help_options pc: 107 op: STARTLINE (58)

    /** cmdline.e:326		if auto_help_switches then*/
    // SubProg standardize_help_options pc: 109 op: IF (20)
    if (_auto_help_switches_20435 == 0)
    {
        goto L7; // [109] 249
    }
    else{
    }
    // SubProg standardize_help_options pc: 112 op: STARTLINE (58)

    /** cmdline.e:327			integer appended_opts = 0*/
    // SubProg standardize_help_options pc: 114 op: ASSIGN_I (113)
    _appended_opts_20458 = 0;
    // SubProg standardize_help_options pc: 117 op: STARTLINE (58)

    /** cmdline.e:328			if not has_h and not has_help then*/
    // SubProg standardize_help_options pc: 119 op: NOT (7)
    _11641 = (_has_h_20436 == 0);
    // SubProg standardize_help_options pc: 122 op: SC1_AND_IF (146)
    if (_11641 == 0) {
        goto L8; // [122] 155
    }
    // SubProg standardize_help_options pc: 126 op: NOT (7)
    _11643 = (_has_help_20437 == 0);
    // SubProg standardize_help_options pc: 129 op: NOP1 (159)
    // SubProg standardize_help_options pc: 130 op: IF (20)
    if (_11643 == 0)
    {
        DeRef(_11643);
        _11643 = NOVALUE;
        goto L8; // [130] 155
    }
    else{
        DeRef(_11643);
        _11643 = NOVALUE;
    }
    // SubProg standardize_help_options pc: 133 op: STARTLINE (58)

    /** cmdline.e:329				opts = append(opts, {"h", "help", "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 135 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11631);
    ((intptr_t*)_2)[1] = _11631;
    RefDS(_11639);
    ((intptr_t*)_2)[2] = _11639;
    RefDS(_11644);
    ((intptr_t*)_2)[3] = _11644;
    RefDS(_11631);
    ((intptr_t*)_2)[4] = _11631;
    ((intptr_t*)_2)[5] = -1;
    _11645 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 143 op: APPEND (35)
    RefDS(_11645);
    Append(&_opts_20434, _opts_20434, _11645);
    DeRefDS(_11645);
    _11645 = NOVALUE;
    // SubProg standardize_help_options pc: 147 op: STARTLINE (58)

    /** cmdline.e:330				appended_opts = 1*/
    // SubProg standardize_help_options pc: 149 op: ASSIGN_I (113)
    _appended_opts_20458 = 1;
    // SubProg standardize_help_options pc: 152 op: ELSE (23)
    goto L9; // [152] 208
    // SubProg standardize_help_options pc: 154 op: NOP1 (159)
L8: // addr: 155 pc: 154 sub: 20432 op: 159
    // SubProg standardize_help_options pc: 155 op: STARTLINE (58)

    /** cmdline.e:332			elsif not has_h then*/
    // SubProg standardize_help_options pc: 157 op: NOT_IFW (108)
    if (_has_h_20436 != 0)
    goto LA; // [157] 182
    // SubProg standardize_help_options pc: 160 op: STARTLINE (58)

    /** cmdline.e:333				opts = append(opts, {"h", 0, "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 162 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11631);
    ((intptr_t*)_2)[1] = _11631;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_11644);
    ((intptr_t*)_2)[3] = _11644;
    RefDS(_11631);
    ((intptr_t*)_2)[4] = _11631;
    ((intptr_t*)_2)[5] = -1;
    _11648 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 170 op: APPEND (35)
    RefDS(_11648);
    Append(&_opts_20434, _opts_20434, _11648);
    DeRefDS(_11648);
    _11648 = NOVALUE;
    // SubProg standardize_help_options pc: 174 op: STARTLINE (58)

    /** cmdline.e:334				appended_opts = 1*/
    // SubProg standardize_help_options pc: 176 op: ASSIGN_I (113)
    _appended_opts_20458 = 1;
    // SubProg standardize_help_options pc: 179 op: ELSE (23)
    goto L9; // [179] 208
    // SubProg standardize_help_options pc: 181 op: NOP1 (159)
LA: // addr: 182 pc: 181 sub: 20432 op: 159
    // SubProg standardize_help_options pc: 182 op: STARTLINE (58)

    /** cmdline.e:336			elsif not has_help then*/
    // SubProg standardize_help_options pc: 184 op: NOT_IFW (108)
    if (_has_help_20437 != 0)
    goto LB; // [184] 207
    // SubProg standardize_help_options pc: 187 op: STARTLINE (58)

    /** cmdline.e:337				opts = append(opts, {0, "help", "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 189 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_11639);
    ((intptr_t*)_2)[2] = _11639;
    RefDS(_11644);
    ((intptr_t*)_2)[3] = _11644;
    RefDS(_11631);
    ((intptr_t*)_2)[4] = _11631;
    ((intptr_t*)_2)[5] = -1;
    _11651 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 197 op: APPEND (35)
    RefDS(_11651);
    Append(&_opts_20434, _opts_20434, _11651);
    DeRefDS(_11651);
    _11651 = NOVALUE;
    // SubProg standardize_help_options pc: 201 op: STARTLINE (58)

    /** cmdline.e:338				appended_opts = 1*/
    // SubProg standardize_help_options pc: 203 op: ASSIGN_I (113)
    _appended_opts_20458 = 1;
    // SubProg standardize_help_options pc: 206 op: NOP1 (159)
LB: // addr: 207 pc: 206 sub: 20432 op: 159
    // SubProg standardize_help_options pc: 207 op: NOP1 (159)
L9: // addr: 208 pc: 207 sub: 20432 op: 159
    // SubProg standardize_help_options pc: 208 op: STARTLINE (58)

    /** cmdline.e:342			if not has_question then			*/
    // SubProg standardize_help_options pc: 210 op: NOT_IFW (108)
    if (_has_question_20438 != 0)
    goto LC; // [210] 233
    // SubProg standardize_help_options pc: 213 op: STARTLINE (58)

    /** cmdline.e:343				opts = append(opts, {"?", 0, "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 215 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11635);
    ((intptr_t*)_2)[1] = _11635;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_11644);
    ((intptr_t*)_2)[3] = _11644;
    RefDS(_11631);
    ((intptr_t*)_2)[4] = _11631;
    ((intptr_t*)_2)[5] = -1;
    _11654 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 223 op: APPEND (35)
    RefDS(_11654);
    Append(&_opts_20434, _opts_20434, _11654);
    DeRefDS(_11654);
    _11654 = NOVALUE;
    // SubProg standardize_help_options pc: 227 op: STARTLINE (58)

    /** cmdline.e:344				appended_opts = 1*/
    // SubProg standardize_help_options pc: 229 op: ASSIGN_I (113)
    _appended_opts_20458 = 1;
    // SubProg standardize_help_options pc: 232 op: NOP1 (159)
LC: // addr: 233 pc: 232 sub: 20432 op: 159
    // SubProg standardize_help_options pc: 233 op: STARTLINE (58)

    /** cmdline.e:347			if appended_opts then*/
    // SubProg standardize_help_options pc: 235 op: IF (20)
    if (_appended_opts_20458 == 0)
    {
        goto LD; // [235] 248
    }
    else{
    }
    // SubProg standardize_help_options pc: 238 op: STARTLINE (58)

    /** cmdline.e:349				opts = standardize_opts(opts, 0)*/
    // SubProg standardize_help_options pc: 240 op: PROC (27)
    RefDS(_opts_20434);
    _0 = _opts_20434;
    _opts_20434 = _48standardize_opts(_opts_20434, 0);
    DeRefDS(_0);
    // SubProg standardize_help_options pc: 245 op: SEQUENCE_CHECK (97)
    // SubProg standardize_help_options pc: 247 op: NOP1 (159)
LD: // addr: 248 pc: 247 sub: 20432 op: 159
    // SubProg standardize_help_options pc: 248 op: NOP1 (159)
L7: // addr: 249 pc: 248 sub: 20432 op: 159
    // SubProg standardize_help_options pc: 249 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var appended_opts_20458
    // SubProg standardize_help_options pc: 251 op: STARTLINE (58)

    /** cmdline.e:352		return opts*/
    // SubProg standardize_help_options pc: 253 op: RETURNF (28)

// Exiting block BLOCK: standardize_help_options

// block var auto_help_switches_20435

// block var has_h_20436

// block var has_help_20437

// block var has_question_20438
    DeRef(_11641);
    _11641 = NOVALUE;
    return _opts_20434;
    // SubProg standardize_help_options pc: 257 op: BADRETURNF (43)
    ;
}


object _48standardize_opts(object _opts_20483, object _auto_help_switches_20484)
{
    object _11693 = NOVALUE; // 20526 11693
    object _11692 = NOVALUE; // 20525 11692
// skipping _11691  name type: 0
    object _11690 = NOVALUE; // 20523 11690
    object _11689 = NOVALUE; // 20522 11689
    object _11688 = NOVALUE; // 20521 11688
    object _11687 = NOVALUE; // 20520 11687
    object _11686 = NOVALUE; // 20519 11686
    object _11685 = NOVALUE; // 20518 11685
    object _11684 = NOVALUE; // 20517 11684
    object _11683 = NOVALUE; // 20516 11683
    object _11682 = NOVALUE; // 20515 11682
    object _11681 = NOVALUE; // 20514 11681
    object _11680 = NOVALUE; // 20512 11680
    object _11679 = NOVALUE; // 20511 11679
// skipping _11678  name type: 0
    object _11677 = NOVALUE; // 20509 11677
    object _11676 = NOVALUE; // 20508 11676
    object _11675 = NOVALUE; // 20507 11675
    object _11674 = NOVALUE; // 20506 11674
    object _11673 = NOVALUE; // 20505 11673
    object _11672 = NOVALUE; // 20504 11672
    object _11671 = NOVALUE; // 20503 11671
    object _11670 = NOVALUE; // 20502 11670
    object _11669 = NOVALUE; // 20501 11669
    object _11668 = NOVALUE; // 20500 11668
    object _11667 = NOVALUE; // 20498 11667
    object _11666 = NOVALUE; // 20497 11666
// skipping _11665  name type: 0
    object _11664 = NOVALUE; // 20495 11664
// skipping _11663  name type: 0
    object _11662 = NOVALUE; // 20493 11662
    object _11661 = NOVALUE; // 20492 11661
    object _11660 = NOVALUE; // 20491 11660
    object _11659 = NOVALUE; // 20489 11659
// skipping _11658  name type: 0
// skipping _11657  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg standardize_opts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 3 op: INTEGER_CHECK (96)
    // SubProg standardize_opts pc: 5 op: STARTLINE (58)

    /** cmdline.e:357		opts = update_opts( opts )*/
    // SubProg standardize_opts pc: 7 op: PROC (27)
    RefDS(_opts_20483);
    _0 = _opts_20483;
    _opts_20483 = _48update_opts(_opts_20483);
    DeRefDS(_0);
    // SubProg standardize_opts pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 13 op: STARTLINE (58)

    /** cmdline.e:359		check_for_duplicates( opts )*/
    // SubProg standardize_opts pc: 15 op: PROC (27)
    RefDS(_opts_20483);
    _48check_for_duplicates(_opts_20483);
    // SubProg standardize_opts pc: 18 op: STARTLINE (58)

    /** cmdline.e:361		opts = standardize_help_options( opts, auto_help_switches )*/
    // SubProg standardize_opts pc: 20 op: PROC (27)
    RefDS(_opts_20483);
    _0 = _opts_20483;
    _opts_20483 = _48standardize_help_options(_opts_20483, _auto_help_switches_20484);
    DeRefDS(_0);
    // SubProg standardize_opts pc: 25 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 27 op: STARTLINE (58)

    /** cmdline.e:364		for i = 1 to length(opts) do*/
    // SubProg standardize_opts pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20483)){
            _11659 = SEQ_PTR(_opts_20483)->length;
    }
    else {
        _11659 = 1;
    }
    // SubProg standardize_opts pc: 32 op: FOR_I (125)
    {
        object _i_20488;
        _i_20488 = 1;
L1: // addr: 39 pc: 32 sub: 20481 op: 125
        if (_i_20488 > _11659){
            goto L2; // [32] 208
        }
        // SubProg standardize_opts pc: 39 op: STARTLINE (58)

        /** cmdline.e:365			if not find(HAS_PARAMETER, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20483);
        _11660 = (object)*(((s1_ptr)_2)->base + _i_20488);
        // SubProg standardize_opts pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11660);
        _11661 = (object)*(((s1_ptr)_2)->base + 4);
        _11660 = NOVALUE;
        // SubProg standardize_opts pc: 49 op: FIND_FROM (176)
        _11662 = find_from(112, _11661, 1);
        _11661 = NOVALUE;
        // SubProg standardize_opts pc: 54 op: NOT_IFW (108)
        if (_11662 != 0)
        goto L3; // [54] 77
        _11662 = NOVALUE;
        // SubProg standardize_opts pc: 57 op: STARTLINE (58)

        /** cmdline.e:366				opts[i][OPTIONS] &= NO_PARAMETER*/
        // SubProg standardize_opts pc: 59 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_20483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20483 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_20488 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 64 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _11666 = (object)*(((s1_ptr)_2)->base + 4);
        _11664 = NOVALUE;
        // SubProg standardize_opts pc: 68 op: CONCAT (15)
        if (IS_SEQUENCE(_11666) && IS_ATOM(110)) {
            Append(&_11667, _11666, 110);
        }
        else if (IS_ATOM(_11666) && IS_SEQUENCE(110)) {
        }
        else {
            Concat((object_ptr)&_11667, _11666, 110);
            _11666 = NOVALUE;
        }
        _11666 = NOVALUE;
        // SubProg standardize_opts pc: 72 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11667;
        if( _1 != _11667 ){
            DeRef(_1);
        }
        _11667 = NOVALUE;
        _11664 = NOVALUE;
        // SubProg standardize_opts pc: 76 op: NOP1 (159)
L3: // addr: 77 pc: 76 sub: 20481 op: 159
        // SubProg standardize_opts pc: 77 op: STARTLINE (58)

        /** cmdline.e:369			if not find(MULTIPLE, opts[i][OPTIONS]) and not find(ONCE, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20483);
        _11668 = (object)*(((s1_ptr)_2)->base + _i_20488);
        // SubProg standardize_opts pc: 83 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11668);
        _11669 = (object)*(((s1_ptr)_2)->base + 4);
        _11668 = NOVALUE;
        // SubProg standardize_opts pc: 87 op: FIND_FROM (176)
        _11670 = find_from(42, _11669, 1);
        _11669 = NOVALUE;
        // SubProg standardize_opts pc: 92 op: NOT (7)
        _11671 = (_11670 == 0);
        _11670 = NOVALUE;
        // SubProg standardize_opts pc: 95 op: SC1_AND_IF (146)
        if (_11671 == 0) {
            goto L4; // [95] 139
        }
        // SubProg standardize_opts pc: 99 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20483);
        _11673 = (object)*(((s1_ptr)_2)->base + _i_20488);
        // SubProg standardize_opts pc: 103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11673);
        _11674 = (object)*(((s1_ptr)_2)->base + 4);
        _11673 = NOVALUE;
        // SubProg standardize_opts pc: 107 op: FIND_FROM (176)
        _11675 = find_from(49, _11674, 1);
        _11674 = NOVALUE;
        // SubProg standardize_opts pc: 112 op: NOT (7)
        _11676 = (_11675 == 0);
        _11675 = NOVALUE;
        // SubProg standardize_opts pc: 115 op: NOP1 (159)
        // SubProg standardize_opts pc: 116 op: IF (20)
        if (_11676 == 0)
        {
            DeRef(_11676);
            _11676 = NOVALUE;
            goto L4; // [116] 139
        }
        else{
            DeRef(_11676);
            _11676 = NOVALUE;
        }
        // SubProg standardize_opts pc: 119 op: STARTLINE (58)

        /** cmdline.e:370				opts[i][OPTIONS] &= ONCE*/
        // SubProg standardize_opts pc: 121 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_20483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20483 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_20488 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 126 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _11679 = (object)*(((s1_ptr)_2)->base + 4);
        _11677 = NOVALUE;
        // SubProg standardize_opts pc: 130 op: CONCAT (15)
        if (IS_SEQUENCE(_11679) && IS_ATOM(49)) {
            Append(&_11680, _11679, 49);
        }
        else if (IS_ATOM(_11679) && IS_SEQUENCE(49)) {
        }
        else {
            Concat((object_ptr)&_11680, _11679, 49);
            _11679 = NOVALUE;
        }
        _11679 = NOVALUE;
        // SubProg standardize_opts pc: 134 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11680;
        if( _1 != _11680 ){
            DeRef(_1);
        }
        _11680 = NOVALUE;
        _11677 = NOVALUE;
        // SubProg standardize_opts pc: 138 op: NOP1 (159)
L4: // addr: 139 pc: 138 sub: 20481 op: 159
        // SubProg standardize_opts pc: 139 op: STARTLINE (58)

        /** cmdline.e:373			if not find(HAS_CASE, opts[i][OPTIONS]) and not find(NO_CASE, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 141 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20483);
        _11681 = (object)*(((s1_ptr)_2)->base + _i_20488);
        // SubProg standardize_opts pc: 145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11681);
        _11682 = (object)*(((s1_ptr)_2)->base + 4);
        _11681 = NOVALUE;
        // SubProg standardize_opts pc: 149 op: FIND_FROM (176)
        _11683 = find_from(99, _11682, 1);
        _11682 = NOVALUE;
        // SubProg standardize_opts pc: 154 op: NOT (7)
        _11684 = (_11683 == 0);
        _11683 = NOVALUE;
        // SubProg standardize_opts pc: 157 op: SC1_AND_IF (146)
        if (_11684 == 0) {
            goto L5; // [157] 201
        }
        // SubProg standardize_opts pc: 161 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20483);
        _11686 = (object)*(((s1_ptr)_2)->base + _i_20488);
        // SubProg standardize_opts pc: 165 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11686);
        _11687 = (object)*(((s1_ptr)_2)->base + 4);
        _11686 = NOVALUE;
        // SubProg standardize_opts pc: 169 op: FIND_FROM (176)
        _11688 = find_from(105, _11687, 1);
        _11687 = NOVALUE;
        // SubProg standardize_opts pc: 174 op: NOT (7)
        _11689 = (_11688 == 0);
        _11688 = NOVALUE;
        // SubProg standardize_opts pc: 177 op: NOP1 (159)
        // SubProg standardize_opts pc: 178 op: IF (20)
        if (_11689 == 0)
        {
            DeRef(_11689);
            _11689 = NOVALUE;
            goto L5; // [178] 201
        }
        else{
            DeRef(_11689);
            _11689 = NOVALUE;
        }
        // SubProg standardize_opts pc: 181 op: STARTLINE (58)

        /** cmdline.e:374				opts[i][OPTIONS] &= NO_CASE*/
        // SubProg standardize_opts pc: 183 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_20483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20483 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_20488 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 188 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _11692 = (object)*(((s1_ptr)_2)->base + 4);
        _11690 = NOVALUE;
        // SubProg standardize_opts pc: 192 op: CONCAT (15)
        if (IS_SEQUENCE(_11692) && IS_ATOM(105)) {
            Append(&_11693, _11692, 105);
        }
        else if (IS_ATOM(_11692) && IS_SEQUENCE(105)) {
        }
        else {
            Concat((object_ptr)&_11693, _11692, 105);
            _11692 = NOVALUE;
        }
        _11692 = NOVALUE;
        // SubProg standardize_opts pc: 196 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11693;
        if( _1 != _11693 ){
            DeRef(_1);
        }
        _11693 = NOVALUE;
        _11690 = NOVALUE;
        // SubProg standardize_opts pc: 200 op: NOP1 (159)
L5: // addr: 201 pc: 200 sub: 20481 op: 159
        // SubProg standardize_opts pc: 201 op: STARTLINE (58)

        /** cmdline.e:376		end for*/
        // SubProg standardize_opts pc: 203 op: ENDFOR_INT_UP1 (54)
        _i_20488 = _i_20488 + 1;
        goto L1; // [203] 39
L2: // addr: 208 pc: 203 sub: 20481 op: 54
        ;
    }
    // SubProg standardize_opts pc: 208 op: STARTLINE (58)

    /** cmdline.e:378		return opts*/
    // SubProg standardize_opts pc: 210 op: RETURNF (28)

// Exiting block BLOCK: standardize_opts

// block var auto_help_switches_20484
    DeRef(_11684);
    _11684 = NOVALUE;
    DeRef(_11671);
    _11671 = NOVALUE;
    return _opts_20483;
    // SubProg standardize_opts pc: 214 op: BADRETURNF (43)
    ;
}


object _48print_help(object _opts_20529, object _cmds_20530)
{
    object _pad_size_20531 = NOVALUE;
    object _this_size_20532 = NOVALUE;
    object _extras_mandatory_20533 = NOVALUE;
    object _extras_opt_20534 = NOVALUE;
    object _param_name_20535 = NOVALUE;
    object _has_param_20536 = NOVALUE;
    object _11782 = NOVALUE; // 20646 11782
    object _11781 = NOVALUE; // 20644 11781
    object _11780 = NOVALUE; // 20643 11780
    object _11779 = NOVALUE; // 20642 11779
// skipping _11778  name type: 0
    object _11777 = NOVALUE; // 20639 11777
    object _11776 = NOVALUE; // 20638 11776
    object _11775 = NOVALUE; // 20637 11775
    object _11774 = NOVALUE; // 20636 11774
    object _11773 = NOVALUE; // 20635 11773
    object _11772 = NOVALUE; // 20634 11772
    object _11771 = NOVALUE; // 20633 11771
    object _11770 = NOVALUE; // 20631 11770
    object _11769 = NOVALUE; // 20628 11769
    object _11768 = NOVALUE; // 20627 11768
// skipping _11766  name type: 0
// skipping _11765  name type: 0
// skipping _11764  name type: 0
    object _11763 = NOVALUE; // 20621 11763
    object _11762 = NOVALUE; // 20620 11762
// skipping _11761  name type: 0
    object _11760 = NOVALUE; // 20616 11760
    object _11759 = NOVALUE; // 20615 11759
    object _11758 = NOVALUE; // 20614 11758
    object _11757 = NOVALUE; // 20613 11757
    object _11756 = NOVALUE; // 20612 11756
    object _11755 = NOVALUE; // 20611 11755
// skipping _11754  name type: 0
    object _11753 = NOVALUE; // 20608 11753
    object _11752 = NOVALUE; // 20607 11752
    object _11751 = NOVALUE; // 20606 11751
// skipping _11750  name type: 0
// skipping _11749  name type: 0
// skipping _11748  name type: 0
    object _11747 = NOVALUE; // 20600 11747
    object _11746 = NOVALUE; // 20599 11746
// skipping _11745  name type: 0
    object _11744 = NOVALUE; // 20597 11744
    object _11743 = NOVALUE; // 20596 11743
    object _11742 = NOVALUE; // 20595 11742
    object _11741 = NOVALUE; // 20594 11741
    object _11740 = NOVALUE; // 20593 11740
    object _11739 = NOVALUE; // 20592 11739
    object _11738 = NOVALUE; // 20591 11738
// skipping _11737  name type: 0
// skipping _11736  name type: 0
    object _11735 = NOVALUE; // 20587 11735
    object _11734 = NOVALUE; // 20586 11734
    object _11733 = NOVALUE; // 20585 11733
// skipping _11732  name type: 0
    object _11731 = NOVALUE; // 20582 11731
    object _11730 = NOVALUE; // 20581 11730
    object _11729 = NOVALUE; // 20580 11729
    object _11728 = NOVALUE; // 20579 11728
    object _11727 = NOVALUE; // 20578 11727
    object _11726 = NOVALUE; // 20577 11726
    object _11725 = NOVALUE; // 20576 11725
// skipping _11724  name type: 0
// skipping _11723  name type: 0
    object _11722 = NOVALUE; // 20572 11722
    object _11721 = NOVALUE; // 20571 11721
    object _11720 = NOVALUE; // 20570 11720
// skipping _11719  name type: 0
    object _11718 = NOVALUE; // 20567 11718
    object _11717 = NOVALUE; // 20566 11717
    object _11716 = NOVALUE; // 20565 11716
    object _11715 = NOVALUE; // 20564 11715
    object _11714 = NOVALUE; // 20563 11714
    object _11713 = NOVALUE; // 20562 11713
    object _11712 = NOVALUE; // 20561 11712
    object _11711 = NOVALUE; // 20559 11711
    object _11710 = NOVALUE; // 20558 11710
    object _11709 = NOVALUE; // 20557 11709
    object _11708 = NOVALUE; // 20555 11708
    object _11707 = NOVALUE; // 20554 11707
    object _11706 = NOVALUE; // 20553 11706
    object _11705 = NOVALUE; // 20552 11705
    object _11704 = NOVALUE; // 20551 11704
    object _11703 = NOVALUE; // 20550 11703
    object _11702 = NOVALUE; // 20549 11702
    object _11701 = NOVALUE; // 20547 11701
    object _11700 = NOVALUE; // 20546 11700
    object _11699 = NOVALUE; // 20545 11699
    object _11698 = NOVALUE; // 20544 11698
    object _11697 = NOVALUE; // 20543 11697
    object _11696 = NOVALUE; // 20542 11696
    object _11695 = NOVALUE; // 20541 11695
    object _11694 = NOVALUE; // 20539 11694
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_help pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg print_help pc: 5 op: STARTLINE (58)

    /** cmdline.e:384		integer pad_size = 0*/
    // SubProg print_help pc: 7 op: ASSIGN_I (113)
    _pad_size_20531 = 0;
    // SubProg print_help pc: 10 op: STARTLINE (58)

    /** cmdline.e:386		integer extras_mandatory = 0*/
    // SubProg print_help pc: 12 op: ASSIGN_I (113)
    _extras_mandatory_20533 = 0;
    // SubProg print_help pc: 15 op: STARTLINE (58)

    /** cmdline.e:387		integer extras_opt = 0*/
    // SubProg print_help pc: 17 op: ASSIGN_I (113)
    _extras_opt_20534 = 0;
    // SubProg print_help pc: 20 op: STARTLINE (58)

    /** cmdline.e:391		for i = 1 to length(opts) do*/
    // SubProg print_help pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20529)){
            _11694 = SEQ_PTR(_opts_20529)->length;
    }
    else {
        _11694 = 1;
    }
    // SubProg print_help pc: 25 op: FOR_I (125)
    {
        object _i_20538;
        _i_20538 = 1;
L1: // addr: 32 pc: 25 sub: 20527 op: 125
        if (_i_20538 > _11694){
            goto L2; // [25] 456
        }
        // SubProg print_help pc: 32 op: STARTLINE (58)

        /** cmdline.e:392			this_size = 0*/
        // SubProg print_help pc: 34 op: ASSIGN_I (113)
        _this_size_20532 = 0;
        // SubProg print_help pc: 37 op: STARTLINE (58)

        /** cmdline.e:393			param_name = ""*/
        // SubProg print_help pc: 39 op: ASSIGN (18)
        RefDS(_5);
        DeRef(_param_name_20535);
        _param_name_20535 = _5;
        // SubProg print_help pc: 42 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 44 op: STARTLINE (58)

        /** cmdline.e:395			if atom(opts[i][SHORTNAME]) and opts[i][SHORTNAME] = HEADER then*/
        // SubProg print_help pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11695 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11695);
        _11696 = (object)*(((s1_ptr)_2)->base + 1);
        _11695 = NOVALUE;
        // SubProg print_help pc: 54 op: IS_AN_ATOM (67)
        _11697 = IS_ATOM(_11696);
        _11696 = NOVALUE;
        // SubProg print_help pc: 57 op: SC1_AND_IF (146)
        if (_11697 == 0) {
            goto L3; // [57] 82
        }
        // SubProg print_help pc: 61 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11699 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 65 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11699);
        _11700 = (object)*(((s1_ptr)_2)->base + 1);
        _11699 = NOVALUE;
        // SubProg print_help pc: 69 op: EQUALS (3)
        if (IS_ATOM_INT(_11700)) {
            _11701 = (_11700 == 72);
        }
        else {
            _11701 = binary_op(EQUALS, _11700, 72);
        }
        _11700 = NOVALUE;
        // SubProg print_help pc: 73 op: NOP1 (159)
        // SubProg print_help pc: 74 op: IF (20)
        if (_11701 == 0) {
            DeRef(_11701);
            _11701 = NOVALUE;
            goto L3; // [74] 82
        }
        else {
            if (!IS_ATOM_INT(_11701) && DBL_PTR(_11701)->dbl == 0.0){
                DeRef(_11701);
                _11701 = NOVALUE;
                goto L3; // [74] 82
            }
            DeRef(_11701);
            _11701 = NOVALUE;
        }
        DeRef(_11701);
        _11701 = NOVALUE;
        // SubProg print_help pc: 77 op: STARTLINE (58)

        /** cmdline.e:396				continue*/
        // SubProg print_help pc: 79 op: ELSE (23)
        goto L4; // [79] 451
        // SubProg print_help pc: 81 op: NOP1 (159)
L3: // addr: 82 pc: 81 sub: 20527 op: 159
        // SubProg print_help pc: 82 op: STARTLINE (58)

        /** cmdline.e:399			if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 84 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11702 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11702);
        _11703 = (object)*(((s1_ptr)_2)->base + 1);
        _11702 = NOVALUE;
        // SubProg print_help pc: 92 op: IS_AN_ATOM (67)
        _11704 = IS_ATOM(_11703);
        _11703 = NOVALUE;
        // SubProg print_help pc: 95 op: SC1_AND_IF (146)
        if (_11704 == 0) {
            goto L5; // [95] 148
        }
        // SubProg print_help pc: 99 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11706 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11706);
        _11707 = (object)*(((s1_ptr)_2)->base + 2);
        _11706 = NOVALUE;
        // SubProg print_help pc: 107 op: IS_AN_ATOM (67)
        _11708 = IS_ATOM(_11707);
        _11707 = NOVALUE;
        // SubProg print_help pc: 110 op: NOP1 (159)
        // SubProg print_help pc: 111 op: IF (20)
        if (_11708 == 0)
        {
            _11708 = NOVALUE;
            goto L5; // [111] 148
        }
        else{
            _11708 = NOVALUE;
        }
        // SubProg print_help pc: 114 op: STARTLINE (58)

        /** cmdline.e:400				extras_opt = i*/
        // SubProg print_help pc: 116 op: ASSIGN_I (113)
        _extras_opt_20534 = _i_20538;
        // SubProg print_help pc: 119 op: STARTLINE (58)

        /** cmdline.e:401				if find(MANDATORY, opts[i][OPTIONS]) then*/
        // SubProg print_help pc: 121 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11709 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 125 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11709);
        _11710 = (object)*(((s1_ptr)_2)->base + 4);
        _11709 = NOVALUE;
        // SubProg print_help pc: 129 op: FIND_FROM (176)
        _11711 = find_from(109, _11710, 1);
        _11710 = NOVALUE;
        // SubProg print_help pc: 134 op: IF (20)
        if (_11711 == 0)
        {
            _11711 = NOVALUE;
            goto L4; // [134] 451
        }
        else{
            _11711 = NOVALUE;
        }
        // SubProg print_help pc: 137 op: STARTLINE (58)

        /** cmdline.e:402					extras_mandatory = 1*/
        // SubProg print_help pc: 139 op: ASSIGN_I (113)
        _extras_mandatory_20533 = 1;
        // SubProg print_help pc: 142 op: NOP1 (159)
        // SubProg print_help pc: 143 op: STARTLINE (58)

        /** cmdline.e:405				continue*/
        // SubProg print_help pc: 145 op: ELSE (23)
        goto L4; // [145] 451
        // SubProg print_help pc: 147 op: NOP1 (159)
L5: // addr: 148 pc: 147 sub: 20527 op: 159
        // SubProg print_help pc: 148 op: STARTLINE (58)

        /** cmdline.e:408			if sequence(opts[i][SHORTNAME]) then*/
        // SubProg print_help pc: 150 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11712 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 154 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11712);
        _11713 = (object)*(((s1_ptr)_2)->base + 1);
        _11712 = NOVALUE;
        // SubProg print_help pc: 158 op: IS_A_SEQUENCE (68)
        _11714 = IS_SEQUENCE(_11713);
        _11713 = NOVALUE;
        // SubProg print_help pc: 161 op: IF (20)
        if (_11714 == 0)
        {
            _11714 = NOVALUE;
            goto L6; // [161] 214
        }
        else{
            _11714 = NOVALUE;
        }
        // SubProg print_help pc: 164 op: STARTLINE (58)

        /** cmdline.e:409				this_size += length(opts[i][SHORTNAME]) + 1 -- Allow for "-"*/
        // SubProg print_help pc: 166 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11715 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 170 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11715);
        _11716 = (object)*(((s1_ptr)_2)->base + 1);
        _11715 = NOVALUE;
        // SubProg print_help pc: 174 op: LENGTH (42)
        if (IS_SEQUENCE(_11716)){
                _11717 = SEQ_PTR(_11716)->length;
        }
        else {
            _11717 = 1;
        }
        _11716 = NOVALUE;
        // SubProg print_help pc: 177 op: PLUS1 (93)
        _11718 = _11717 + 1;
        _11717 = NOVALUE;
        // SubProg print_help pc: 181 op: PLUS (11)
        _this_size_20532 = _this_size_20532 + _11718;
        _11718 = NOVALUE;
        // SubProg print_help pc: 187 op: STARTLINE (58)

        /** cmdline.e:410				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        // SubProg print_help pc: 189 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11720 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 193 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11720);
        _11721 = (object)*(((s1_ptr)_2)->base + 4);
        _11720 = NOVALUE;
        // SubProg print_help pc: 197 op: FIND_FROM (176)
        _11722 = find_from(109, _11721, 1);
        _11721 = NOVALUE;
        // SubProg print_help pc: 202 op: EQUALS_IFW_I (121)
        if (_11722 != 0)
        goto L7; // [202] 213
        // SubProg print_help pc: 206 op: STARTLINE (58)

        /** cmdline.e:411					this_size += 2 -- Allow for '[' ']'*/
        // SubProg print_help pc: 208 op: PLUS_I (115)
        _this_size_20532 = _this_size_20532 + 2;
        // SubProg print_help pc: 212 op: NOP1 (159)
L7: // addr: 213 pc: 212 sub: 20527 op: 159
        // SubProg print_help pc: 213 op: NOP1 (159)
L6: // addr: 214 pc: 213 sub: 20527 op: 159
        // SubProg print_help pc: 214 op: STARTLINE (58)

        /** cmdline.e:415			if sequence(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 216 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11725 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 220 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11725);
        _11726 = (object)*(((s1_ptr)_2)->base + 2);
        _11725 = NOVALUE;
        // SubProg print_help pc: 224 op: IS_A_SEQUENCE (68)
        _11727 = IS_SEQUENCE(_11726);
        _11726 = NOVALUE;
        // SubProg print_help pc: 227 op: IF (20)
        if (_11727 == 0)
        {
            _11727 = NOVALUE;
            goto L8; // [227] 280
        }
        else{
            _11727 = NOVALUE;
        }
        // SubProg print_help pc: 230 op: STARTLINE (58)

        /** cmdline.e:416				this_size += length(opts[i][LONGNAME]) + 2 -- Allow for "--"*/
        // SubProg print_help pc: 232 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11728 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 236 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11728);
        _11729 = (object)*(((s1_ptr)_2)->base + 2);
        _11728 = NOVALUE;
        // SubProg print_help pc: 240 op: LENGTH (42)
        if (IS_SEQUENCE(_11729)){
                _11730 = SEQ_PTR(_11729)->length;
        }
        else {
            _11730 = 1;
        }
        _11729 = NOVALUE;
        // SubProg print_help pc: 243 op: PLUS (11)
        _11731 = _11730 + 2;
        _11730 = NOVALUE;
        // SubProg print_help pc: 247 op: PLUS (11)
        _this_size_20532 = _this_size_20532 + _11731;
        _11731 = NOVALUE;
        // SubProg print_help pc: 253 op: STARTLINE (58)

        /** cmdline.e:417				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        // SubProg print_help pc: 255 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11733 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 259 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11733);
        _11734 = (object)*(((s1_ptr)_2)->base + 4);
        _11733 = NOVALUE;
        // SubProg print_help pc: 263 op: FIND_FROM (176)
        _11735 = find_from(109, _11734, 1);
        _11734 = NOVALUE;
        // SubProg print_help pc: 268 op: EQUALS_IFW_I (121)
        if (_11735 != 0)
        goto L9; // [268] 279
        // SubProg print_help pc: 272 op: STARTLINE (58)

        /** cmdline.e:418					this_size += 2 -- Allow for '[' ']'*/
        // SubProg print_help pc: 274 op: PLUS_I (115)
        _this_size_20532 = _this_size_20532 + 2;
        // SubProg print_help pc: 278 op: NOP1 (159)
L9: // addr: 279 pc: 278 sub: 20527 op: 159
        // SubProg print_help pc: 279 op: NOP1 (159)
L8: // addr: 280 pc: 279 sub: 20527 op: 159
        // SubProg print_help pc: 280 op: STARTLINE (58)

        /** cmdline.e:422			if sequence(opts[i][SHORTNAME]) and sequence(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 282 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11738 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 286 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11738);
        _11739 = (object)*(((s1_ptr)_2)->base + 1);
        _11738 = NOVALUE;
        // SubProg print_help pc: 290 op: IS_A_SEQUENCE (68)
        _11740 = IS_SEQUENCE(_11739);
        _11739 = NOVALUE;
        // SubProg print_help pc: 293 op: SC1_AND_IF (146)
        if (_11740 == 0) {
            goto LA; // [293] 319
        }
        // SubProg print_help pc: 297 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11742 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 301 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11742);
        _11743 = (object)*(((s1_ptr)_2)->base + 2);
        _11742 = NOVALUE;
        // SubProg print_help pc: 305 op: IS_A_SEQUENCE (68)
        _11744 = IS_SEQUENCE(_11743);
        _11743 = NOVALUE;
        // SubProg print_help pc: 308 op: NOP1 (159)
        // SubProg print_help pc: 309 op: IF (20)
        if (_11744 == 0)
        {
            _11744 = NOVALUE;
            goto LA; // [309] 319
        }
        else{
            _11744 = NOVALUE;
        }
        // SubProg print_help pc: 312 op: STARTLINE (58)

        /** cmdline.e:423				this_size += 2 -- Allow for ", " between short and long names*/
        // SubProg print_help pc: 314 op: PLUS_I (115)
        _this_size_20532 = _this_size_20532 + 2;
        // SubProg print_help pc: 318 op: NOP1 (159)
LA: // addr: 319 pc: 318 sub: 20527 op: 159
        // SubProg print_help pc: 319 op: STARTLINE (58)

        /** cmdline.e:426			has_param = find(HAS_PARAMETER, opts[i][OPTIONS])*/
        // SubProg print_help pc: 321 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11746 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 325 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11746);
        _11747 = (object)*(((s1_ptr)_2)->base + 4);
        _11746 = NOVALUE;
        // SubProg print_help pc: 329 op: FIND_FROM (176)
        _has_param_20536 = find_from(112, _11747, 1);
        _11747 = NOVALUE;
        // SubProg print_help pc: 334 op: STARTLINE (58)

        /** cmdline.e:427			if has_param != 0 then*/
        // SubProg print_help pc: 336 op: NOTEQ_IFW_I (122)
        if (_has_param_20536 == 0)
        goto LB; // [336] 437
        // SubProg print_help pc: 340 op: STARTLINE (58)

        /** cmdline.e:428				this_size += 1 -- Allow for " "*/
        // SubProg print_help pc: 342 op: PLUS1_I (117)
        _this_size_20532 = _this_size_20532 + 1;
        // SubProg print_help pc: 346 op: STARTLINE (58)

        /** cmdline.e:429				if has_param < length(opts[i][OPTIONS]) then*/
        // SubProg print_help pc: 348 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11751 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 352 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11751);
        _11752 = (object)*(((s1_ptr)_2)->base + 4);
        _11751 = NOVALUE;
        // SubProg print_help pc: 356 op: LENGTH (42)
        if (IS_SEQUENCE(_11752)){
                _11753 = SEQ_PTR(_11752)->length;
        }
        else {
            _11753 = 1;
        }
        _11752 = NOVALUE;
        // SubProg print_help pc: 359 op: LESS_IFW_I (119)
        if (_has_param_20536 >= _11753)
        goto LC; // [359] 413
        // SubProg print_help pc: 363 op: STARTLINE (58)

        /** cmdline.e:431					if sequence(opts[i][OPTIONS][has_param]) then*/
        // SubProg print_help pc: 365 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11755 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11755);
        _11756 = (object)*(((s1_ptr)_2)->base + 4);
        _11755 = NOVALUE;
        // SubProg print_help pc: 373 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11756);
        _11757 = (object)*(((s1_ptr)_2)->base + _has_param_20536);
        _11756 = NOVALUE;
        // SubProg print_help pc: 377 op: IS_A_SEQUENCE (68)
        _11758 = IS_SEQUENCE(_11757);
        _11757 = NOVALUE;
        // SubProg print_help pc: 380 op: IF (20)
        if (_11758 == 0)
        {
            _11758 = NOVALUE;
            goto LD; // [380] 402
        }
        else{
            _11758 = NOVALUE;
        }
        // SubProg print_help pc: 383 op: STARTLINE (58)

        /** cmdline.e:432						param_name = opts[i][OPTIONS][has_param]*/
        // SubProg print_help pc: 385 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11759 = (object)*(((s1_ptr)_2)->base + _i_20538);
        // SubProg print_help pc: 389 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11759);
        _11760 = (object)*(((s1_ptr)_2)->base + 4);
        _11759 = NOVALUE;
        // SubProg print_help pc: 393 op: RHS_SUBS_CHECK (92)
        DeRef(_param_name_20535);
        _2 = (object)SEQ_PTR(_11760);
        _param_name_20535 = (object)*(((s1_ptr)_2)->base + _has_param_20536);
        Ref(_param_name_20535);
        _11760 = NOVALUE;
        // SubProg print_help pc: 397 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 399 op: ELSE (23)
        goto LE; // [399] 421
        // SubProg print_help pc: 401 op: NOP1 (159)
LD: // addr: 402 pc: 401 sub: 20527 op: 159
        // SubProg print_help pc: 402 op: STARTLINE (58)

        /** cmdline.e:434						param_name = "x"*/
        // SubProg print_help pc: 404 op: ASSIGN (18)
        RefDS(_11592);
        DeRef(_param_name_20535);
        _param_name_20535 = _11592;
        // SubProg print_help pc: 407 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 409 op: NOP1 (159)
        // SubProg print_help pc: 410 op: ELSE (23)
        goto LE; // [410] 421
        // SubProg print_help pc: 412 op: NOP1 (159)
LC: // addr: 413 pc: 412 sub: 20527 op: 159
        // SubProg print_help pc: 413 op: STARTLINE (58)

        /** cmdline.e:437					param_name = "x"*/
        // SubProg print_help pc: 415 op: ASSIGN (18)
        RefDS(_11592);
        DeRef(_param_name_20535);
        _param_name_20535 = _11592;
        // SubProg print_help pc: 418 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 420 op: NOP1 (159)
LE: // addr: 421 pc: 420 sub: 20527 op: 159
        // SubProg print_help pc: 421 op: STARTLINE (58)

        /** cmdline.e:439				this_size += 2 + length(param_name)*/
        // SubProg print_help pc: 423 op: LENGTH (42)
        if (IS_SEQUENCE(_param_name_20535)){
                _11762 = SEQ_PTR(_param_name_20535)->length;
        }
        else {
            _11762 = 1;
        }
        // SubProg print_help pc: 426 op: PLUS (11)
        _11763 = 2 + _11762;
        _11762 = NOVALUE;
        // SubProg print_help pc: 430 op: PLUS (11)
        _this_size_20532 = _this_size_20532 + _11763;
        _11763 = NOVALUE;
        // SubProg print_help pc: 436 op: NOP1 (159)
LB: // addr: 437 pc: 436 sub: 20527 op: 159
        // SubProg print_help pc: 437 op: STARTLINE (58)

        /** cmdline.e:442			if pad_size < this_size then*/
        // SubProg print_help pc: 439 op: LESS_IFW_I (119)
        if (_pad_size_20531 >= _this_size_20532)
        goto LF; // [439] 449
        // SubProg print_help pc: 443 op: STARTLINE (58)

        /** cmdline.e:443				pad_size = this_size*/
        // SubProg print_help pc: 445 op: ASSIGN_I (113)
        _pad_size_20531 = _this_size_20532;
        // SubProg print_help pc: 448 op: NOP1 (159)
LF: // addr: 449 pc: 448 sub: 20527 op: 159
        // SubProg print_help pc: 449 op: STARTLINE (58)

        /** cmdline.e:445		end for*/
        // SubProg print_help pc: 451 op: ENDFOR_INT_UP1 (54)
L4: // addr: 451 pc: 451 sub: 20527 op: 54
        _i_20538 = _i_20538 + 1;
        goto L1; // [451] 32
L2: // addr: 456 pc: 451 sub: 20527 op: 54
        ;
    }
    // SubProg print_help pc: 456 op: STARTLINE (58)

    /** cmdline.e:446		pad_size += 3 -- Allow for minimum gap between cmd and its description*/
    // SubProg print_help pc: 458 op: PLUS_I (115)
    _pad_size_20531 = _pad_size_20531 + 3;
    // SubProg print_help pc: 462 op: STARTLINE (58)

    /** cmdline.e:448		printf(1, "%s options:\n", {cmds[2]})*/
    // SubProg print_help pc: 464 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmds_20530);
    _11768 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_help pc: 468 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_11768);
    ((intptr_t*)_2)[1] = _11768;
    _11769 = MAKE_SEQ(_1);
    _11768 = NOVALUE;
    // SubProg print_help pc: 472 op: PRINTF (38)
    EPrintf(1, _11767, _11769);
    DeRefDS(_11769);
    _11769 = NOVALUE;
    // SubProg print_help pc: 476 op: STARTLINE (58)

    /** cmdline.e:450		for i = 1 to length(opts) do*/
    // SubProg print_help pc: 478 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20529)){
            _11770 = SEQ_PTR(_opts_20529)->length;
    }
    else {
        _11770 = 1;
    }
    // SubProg print_help pc: 481 op: FOR_I (125)
    {
        object _i_20630;
        _i_20630 = 1;
L10: // addr: 488 pc: 481 sub: 20527 op: 125
        if (_i_20630 > _11770){
            goto L11; // [481] 574
        }
        // SubProg print_help pc: 488 op: STARTLINE (58)

        /** cmdline.e:451			if atom(opts[i][1]) and opts[i][1] = HEADER then*/
        // SubProg print_help pc: 490 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11771 = (object)*(((s1_ptr)_2)->base + _i_20630);
        // SubProg print_help pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11771);
        _11772 = (object)*(((s1_ptr)_2)->base + 1);
        _11771 = NOVALUE;
        // SubProg print_help pc: 498 op: IS_AN_ATOM (67)
        _11773 = IS_ATOM(_11772);
        _11772 = NOVALUE;
        // SubProg print_help pc: 501 op: SC1_AND_IF (146)
        if (_11773 == 0) {
            goto L12; // [501] 557
        }
        // SubProg print_help pc: 505 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11775 = (object)*(((s1_ptr)_2)->base + _i_20630);
        // SubProg print_help pc: 509 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11775);
        _11776 = (object)*(((s1_ptr)_2)->base + 1);
        _11775 = NOVALUE;
        // SubProg print_help pc: 513 op: EQUALS (3)
        if (IS_ATOM_INT(_11776)) {
            _11777 = (_11776 == 72);
        }
        else {
            _11777 = binary_op(EQUALS, _11776, 72);
        }
        _11776 = NOVALUE;
        // SubProg print_help pc: 517 op: NOP1 (159)
        // SubProg print_help pc: 518 op: IF (20)
        if (_11777 == 0) {
            DeRef(_11777);
            _11777 = NOVALUE;
            goto L12; // [518] 557
        }
        else {
            if (!IS_ATOM_INT(_11777) && DBL_PTR(_11777)->dbl == 0.0){
                DeRef(_11777);
                _11777 = NOVALUE;
                goto L12; // [518] 557
            }
            DeRef(_11777);
            _11777 = NOVALUE;
        }
        DeRef(_11777);
        _11777 = NOVALUE;
        // SubProg print_help pc: 521 op: STARTLINE (58)

        /** cmdline.e:452				if i > 1 then*/
        // SubProg print_help pc: 523 op: GREATER_IFW_I (124)
        if (_i_20630 <= 1)
        goto L13; // [523] 534
        // SubProg print_help pc: 527 op: STARTLINE (58)

        /** cmdline.e:453					printf(1, "\n")*/
        // SubProg print_help pc: 529 op: PRINTF (38)
        EPrintf(1, _4048, _5);
        // SubProg print_help pc: 533 op: NOP1 (159)
L13: // addr: 534 pc: 533 sub: 20527 op: 159
        // SubProg print_help pc: 534 op: STARTLINE (58)

        /** cmdline.e:456				printf(1, "%s\n", { opts[i][2] })*/
        // SubProg print_help pc: 536 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11779 = (object)*(((s1_ptr)_2)->base + _i_20630);
        // SubProg print_help pc: 540 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11779);
        _11780 = (object)*(((s1_ptr)_2)->base + 2);
        _11779 = NOVALUE;
        // SubProg print_help pc: 544 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_11780);
        ((intptr_t*)_2)[1] = _11780;
        _11781 = MAKE_SEQ(_1);
        _11780 = NOVALUE;
        // SubProg print_help pc: 548 op: PRINTF (38)
        EPrintf(1, _9164, _11781);
        DeRefDS(_11781);
        _11781 = NOVALUE;
        // SubProg print_help pc: 552 op: STARTLINE (58)

        /** cmdline.e:457				continue*/
        // SubProg print_help pc: 554 op: ELSE (23)
        goto L14; // [554] 569
        // SubProg print_help pc: 556 op: NOP1 (159)
L12: // addr: 557 pc: 556 sub: 20527 op: 159
        // SubProg print_help pc: 557 op: STARTLINE (58)

        /** cmdline.e:460			print_option_help( opts[i], pad_size )*/
        // SubProg print_help pc: 559 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20529);
        _11782 = (object)*(((s1_ptr)_2)->base + _i_20630);
        // SubProg print_help pc: 563 op: PROC (27)
        Ref(_11782);
        _48print_option_help(_11782, _pad_size_20531);
        _11782 = NOVALUE;
        // SubProg print_help pc: 567 op: STARTLINE (58)

        /** cmdline.e:461		end for*/
        // SubProg print_help pc: 569 op: ENDFOR_INT_UP1 (54)
L14: // addr: 569 pc: 569 sub: 20527 op: 54
        _i_20630 = _i_20630 + 1;
        goto L10; // [569] 488
L11: // addr: 574 pc: 569 sub: 20527 op: 54
        ;
    }
    // SubProg print_help pc: 574 op: STARTLINE (58)

    /** cmdline.e:463		print_extras_help( opts, extras_mandatory, extras_opt )*/
    // SubProg print_help pc: 576 op: PROC (27)
    RefDS(_opts_20529);
    _48print_extras_help(_opts_20529, _extras_mandatory_20533, _extras_opt_20534);
    // SubProg print_help pc: 581 op: STARTLINE (58)

    /** cmdline.e:465		return pad_size*/
    // SubProg print_help pc: 583 op: RETURNF (28)

// Exiting block BLOCK: print_help

// block var opts_20529
    DeRefDS(_opts_20529);

// block var cmds_20530
    DeRefDS(_cmds_20530);

// block var this_size_20532

// block var extras_mandatory_20533

// block var extras_opt_20534

// block var param_name_20535
    DeRef(_param_name_20535);

// block var has_param_20536
    _11729 = NOVALUE;
    _11752 = NOVALUE;
    _11716 = NOVALUE;
    return _pad_size_20531;
    // SubProg print_help pc: 587 op: BADRETURNF (43)
    ;
}


void _48print_extras_help(object _opts_20650, object _extras_mandatory_20651, object _extras_opt_20652)
{
    object _11799 = NOVALUE; // 20674 11799
    object _11798 = NOVALUE; // 20673 11798
    object _11797 = NOVALUE; // 20672 11797
// skipping _11796  name type: 0
    object _11795 = NOVALUE; // 20670 11795
    object _11794 = NOVALUE; // 20669 11794
    object _11793 = NOVALUE; // 20668 11793
// skipping _11792  name type: 0
    object _11790 = NOVALUE; // 20662 11790
    object _11789 = NOVALUE; // 20661 11789
    object _11788 = NOVALUE; // 20660 11788
// skipping _11787  name type: 0
    object _11786 = NOVALUE; // 20658 11786
    object _11785 = NOVALUE; // 20657 11785
    object _11784 = NOVALUE; // 20656 11784
// skipping _11783  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_extras_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_extras_help pc: 3 op: INTEGER_CHECK (96)
    // SubProg print_extras_help pc: 5 op: INTEGER_CHECK (96)
    // SubProg print_extras_help pc: 7 op: STARTLINE (58)

    /** cmdline.e:470		if extras_mandatory != 0 then*/
    // SubProg print_extras_help pc: 9 op: NOTEQ_IFW_I (122)
    if (_extras_mandatory_20651 == 0)
    goto L1; // [9] 64
    // SubProg print_extras_help pc: 13 op: STARTLINE (58)

    /** cmdline.e:471			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    // SubProg print_extras_help pc: 15 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20650);
    _11784 = (object)*(((s1_ptr)_2)->base + _extras_opt_20652);
    // SubProg print_extras_help pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11784);
    _11785 = (object)*(((s1_ptr)_2)->base + 3);
    _11784 = NOVALUE;
    // SubProg print_extras_help pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_11785)){
            _11786 = SEQ_PTR(_11785)->length;
    }
    else {
        _11786 = 1;
    }
    _11785 = NOVALUE;
    // SubProg print_extras_help pc: 26 op: GREATER_IFW_I (124)
    if (_11786 <= 0)
    goto L2; // [26] 55
    // SubProg print_extras_help pc: 30 op: STARTLINE (58)

    /** cmdline.e:472				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    // SubProg print_extras_help pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20650);
    _11788 = (object)*(((s1_ptr)_2)->base + _extras_opt_20652);
    // SubProg print_extras_help pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11788);
    _11789 = (object)*(((s1_ptr)_2)->base + 3);
    _11788 = NOVALUE;
    // SubProg print_extras_help pc: 40 op: CONCAT (15)
    if (IS_SEQUENCE(_4048) && IS_ATOM(_11789)) {
        Ref(_11789);
        Append(&_11790, _4048, _11789);
    }
    else if (IS_ATOM(_4048) && IS_SEQUENCE(_11789)) {
    }
    else {
        Concat((object_ptr)&_11790, _4048, _11789);
    }
    _11789 = NOVALUE;
    // SubProg print_extras_help pc: 44 op: PUTS (44)
    EPuts(1, _11790); // DJP 
    DeRefDS(_11790);
    _11790 = NOVALUE;
    // SubProg print_extras_help pc: 47 op: STARTLINE (58)

    /** cmdline.e:473				puts(1, '\n')*/
    // SubProg print_extras_help pc: 49 op: PUTS (44)
    EPuts(1, 10); // DJP 
    // SubProg print_extras_help pc: 52 op: ELSE (23)
    goto L3; // [52] 120
    // SubProg print_extras_help pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 20648 op: 159
    // SubProg print_extras_help pc: 55 op: STARTLINE (58)

    /** cmdline.e:475				puts(1, "One or more additional arguments are also required\n")*/
    // SubProg print_extras_help pc: 57 op: PUTS (44)
    EPuts(1, _11791); // DJP 
    // SubProg print_extras_help pc: 60 op: NOP1 (159)
    // SubProg print_extras_help pc: 61 op: ELSE (23)
    goto L3; // [61] 120
    // SubProg print_extras_help pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 20648 op: 159
    // SubProg print_extras_help pc: 64 op: STARTLINE (58)

    /** cmdline.e:477		elsif extras_opt > 0 then*/
    // SubProg print_extras_help pc: 66 op: GREATER_IFW_I (124)
    if (_extras_opt_20652 <= 0)
    goto L4; // [66] 119
    // SubProg print_extras_help pc: 70 op: STARTLINE (58)

    /** cmdline.e:478			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    // SubProg print_extras_help pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20650);
    _11793 = (object)*(((s1_ptr)_2)->base + _extras_opt_20652);
    // SubProg print_extras_help pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11793);
    _11794 = (object)*(((s1_ptr)_2)->base + 3);
    _11793 = NOVALUE;
    // SubProg print_extras_help pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_11794)){
            _11795 = SEQ_PTR(_11794)->length;
    }
    else {
        _11795 = 1;
    }
    _11794 = NOVALUE;
    // SubProg print_extras_help pc: 83 op: GREATER_IFW_I (124)
    if (_11795 <= 0)
    goto L5; // [83] 112
    // SubProg print_extras_help pc: 87 op: STARTLINE (58)

    /** cmdline.e:479				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    // SubProg print_extras_help pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20650);
    _11797 = (object)*(((s1_ptr)_2)->base + _extras_opt_20652);
    // SubProg print_extras_help pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11797);
    _11798 = (object)*(((s1_ptr)_2)->base + 3);
    _11797 = NOVALUE;
    // SubProg print_extras_help pc: 97 op: CONCAT (15)
    if (IS_SEQUENCE(_4048) && IS_ATOM(_11798)) {
        Ref(_11798);
        Append(&_11799, _4048, _11798);
    }
    else if (IS_ATOM(_4048) && IS_SEQUENCE(_11798)) {
    }
    else {
        Concat((object_ptr)&_11799, _4048, _11798);
    }
    _11798 = NOVALUE;
    // SubProg print_extras_help pc: 101 op: PUTS (44)
    EPuts(1, _11799); // DJP 
    DeRefDS(_11799);
    _11799 = NOVALUE;
    // SubProg print_extras_help pc: 104 op: STARTLINE (58)

    /** cmdline.e:480				puts(1, '\n')*/
    // SubProg print_extras_help pc: 106 op: PUTS (44)
    EPuts(1, 10); // DJP 
    // SubProg print_extras_help pc: 109 op: ELSE (23)
    goto L6; // [109] 118
    // SubProg print_extras_help pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 20648 op: 159
    // SubProg print_extras_help pc: 112 op: STARTLINE (58)

    /** cmdline.e:482				puts(1, "One or more additional arguments can be supplied.\n")*/
    // SubProg print_extras_help pc: 114 op: PUTS (44)
    EPuts(1, _11800); // DJP 
    // SubProg print_extras_help pc: 117 op: NOP1 (159)
L6: // addr: 118 pc: 117 sub: 20648 op: 159
    // SubProg print_extras_help pc: 118 op: NOP1 (159)
L4: // addr: 119 pc: 118 sub: 20648 op: 159
    // SubProg print_extras_help pc: 119 op: NOP1 (159)
L3: // addr: 120 pc: 119 sub: 20648 op: 159
    // SubProg print_extras_help pc: 120 op: STARTLINE (58)

    /** cmdline.e:485	end procedure*/
    // SubProg print_extras_help pc: 122 op: RETURNP (29)

// Exiting block BLOCK: print_extras_help

// block var opts_20650
    DeRefDS(_opts_20650);

// block var extras_mandatory_20651

// block var extras_opt_20652
    _11794 = NOVALUE;
    _11785 = NOVALUE;
    return;
    // SubProg print_extras_help pc: 125 op: BADRETURNF (43)
    ;
}


void _48local_help(object _opts_20679, object _add_help_rid_20680, object _cmds_20681, object _std_20683, object _parse_options_20684)
{
    object _cmd_20685 = NOVALUE;
    object _is_mandatory_20686 = NOVALUE;
    object _extras_mandatory_20687 = NOVALUE;
    object _extras_opt_20688 = NOVALUE;
    object _auto_help_20689 = NOVALUE;
    object _po_20690 = NOVALUE;
    object _msg_inlined_crash_at_94_20709 = NOVALUE;
    object _pad_size_20716 = NOVALUE;
// skipping _11817  name type: 0
// skipping _11816  name type: 0
// skipping _11815  name type: 0
// skipping _11814  name type: 0
// skipping _11812  name type: 0
// skipping _11811  name type: 0
// skipping _11810  name type: 0
    object _11809 = NOVALUE; // 20702 11809
    object _11806 = NOVALUE; // 20697 11806
// skipping _11805  name type: 0
    object _11804 = NOVALUE; // 20695 11804
// skipping _11803  name type: 0
    object _11802 = NOVALUE; // 20692 11802
// skipping _11801  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg local_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 5 op: INTEGER_CHECK (96)
    // SubProg local_help pc: 7 op: STARTLINE (58)

    /** cmdline.e:492		integer extras_mandatory = 0*/
    // SubProg local_help pc: 9 op: ASSIGN_I (113)
    _extras_mandatory_20687 = 0;
    // SubProg local_help pc: 12 op: STARTLINE (58)

    /** cmdline.e:493		integer extras_opt = 0*/
    // SubProg local_help pc: 14 op: ASSIGN_I (113)
    _extras_opt_20688 = 0;
    // SubProg local_help pc: 17 op: STARTLINE (58)

    /** cmdline.e:494		integer auto_help = 1*/
    // SubProg local_help pc: 19 op: ASSIGN_I (113)
    _auto_help_20689 = 1;
    // SubProg local_help pc: 22 op: STARTLINE (58)

    /** cmdline.e:496		integer po = 1*/
    // SubProg local_help pc: 24 op: ASSIGN_I (113)
    _po_20690 = 1;
    // SubProg local_help pc: 27 op: STARTLINE (58)

    /** cmdline.e:497		if atom(parse_options) then*/
    // SubProg local_help pc: 29 op: IS_AN_ATOM (67)
    _11802 = IS_ATOM(_parse_options_20684);
    // SubProg local_help pc: 32 op: IF (20)
    if (_11802 == 0)
    {
        _11802 = NOVALUE;
        goto L1; // [32] 42
    }
    else{
        _11802 = NOVALUE;
    }
    // SubProg local_help pc: 35 op: STARTLINE (58)

    /** cmdline.e:498			parse_options = {parse_options}*/
    // SubProg local_help pc: 37 op: RIGHT_BRACE_N (31)
    _0 = _parse_options_20684;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_parse_options_20684);
    ((intptr_t*)_2)[1] = _parse_options_20684;
    _parse_options_20684 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg local_help pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 20677 op: 159
    // SubProg local_help pc: 42 op: STARTLINE (58)

    /** cmdline.e:501		while po <= length(parse_options) do*/
    // SubProg local_help pc: 44 op: NOP2 (110)
    // SubProg local_help pc: 46 op: NOPWHILE (158)
L2: // addr: 47 pc: 46 sub: 20677 op: 158
    // SubProg local_help pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_parse_options_20684)){
            _11804 = SEQ_PTR(_parse_options_20684)->length;
    }
    else {
        _11804 = 1;
    }
    // SubProg local_help pc: 50 op: LESSEQ_IFW_I (123)
    if (_po_20690 > _11804)
    goto L3; // [50] 143
    // SubProg local_help pc: 54 op: STARTLINE (58)

    /** cmdline.e:502			switch parse_options[po] do*/
    // SubProg local_help pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_parse_options_20684);
    _11806 = (object)*(((s1_ptr)_2)->base + _po_20690);
    // SubProg local_help pc: 60 op: SWITCH_I (193)
    if (IS_SEQUENCE(_11806) ){
        goto L4; // [60] 129
    }
    if(!IS_ATOM_INT(_11806)){
        if( (DBL_PTR(_11806)->dbl != (eudouble) ((object) DBL_PTR(_11806)->dbl) ) ){
            goto L4; // [60] 129
        }
        _0 = (object) DBL_PTR(_11806)->dbl;
    }
    else {
        _0 = _11806;
    };
    _11806 = NOVALUE;
    switch ( _0 ){ 
        // SubProg local_help pc: 65 op: STARTLINE (58)

        /** cmdline.e:503				case HELP_RID then*/
        // SubProg local_help pc: 67 op: CASE (186)
        case 1:
        // SubProg local_help pc: 69 op: STARTLINE (58)

        /** cmdline.e:504					if po < length(parse_options) then*/
        // SubProg local_help pc: 71 op: LENGTH (42)
        if (IS_SEQUENCE(_parse_options_20684)){
                _11809 = SEQ_PTR(_parse_options_20684)->length;
        }
        else {
            _11809 = 1;
        }
        // SubProg local_help pc: 74 op: LESS_IFW_I (119)
        if (_po_20690 >= _11809)
        goto L5; // [74] 93
        // SubProg local_help pc: 78 op: STARTLINE (58)

        /** cmdline.e:505						po += 1*/
        // SubProg local_help pc: 80 op: PLUS1_I (117)
        _po_20690 = _po_20690 + 1;
        // SubProg local_help pc: 84 op: STARTLINE (58)

        /** cmdline.e:506						add_help_rid = parse_options[po]*/
        // SubProg local_help pc: 86 op: RHS_SUBS_CHECK (92)
        DeRef(_add_help_rid_20680);
        _2 = (object)SEQ_PTR(_parse_options_20684);
        _add_help_rid_20680 = (object)*(((s1_ptr)_2)->base + _po_20690);
        Ref(_add_help_rid_20680);
        // SubProg local_help pc: 90 op: ELSE (23)
        goto L6; // [90] 132
        // SubProg local_help pc: 92 op: NOP1 (159)
L5: // addr: 93 pc: 92 sub: 20677 op: 159
        // SubProg local_help pc: 93 op: STARTLINE (58)

        /** cmdline.e:508						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/
        // SubProg local_help pc: 95 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg local_help pc: 97 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_94_20709);
        _msg_inlined_crash_at_94_20709 = EPrintf(-9999999, _11813, _5);
        // SubProg local_help pc: 101 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg local_help pc: 103 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_94_20709);
        // SubProg local_help pc: 106 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg local_help pc: 108 op: ELSE (23)
        goto L7; // [108] 111
        // SubProg local_help pc: 110 op: NOP1 (159)
L7: // addr: 111 pc: 110 sub: 20677 op: 159
        // SubProg local_help pc: 111 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from local_help @ 94

// block var msg_inlined_crash_at_94_20709
        DeRefi(_msg_inlined_crash_at_94_20709);
        _msg_inlined_crash_at_94_20709 = NOVALUE;
        // SubProg local_help pc: 113 op: NOP1 (159)
        // SubProg local_help pc: 114 op: ELSE (23)
        goto L6; // [114] 132
        // SubProg local_help pc: 116 op: STARTLINE (58)

        /** cmdline.e:511				case NO_HELP then*/
        // SubProg local_help pc: 118 op: CASE (186)
        case 9:
        // SubProg local_help pc: 120 op: STARTLINE (58)

        /** cmdline.e:512					auto_help = 0*/
        // SubProg local_help pc: 122 op: ASSIGN_I (113)
        _auto_help_20689 = 0;
        // SubProg local_help pc: 125 op: ELSE (23)
        goto L6; // [125] 132
        // SubProg local_help pc: 127 op: STARTLINE (58)

        /** cmdline.e:514				case else*/
        // SubProg local_help pc: 129 op: CASE (186)
        default:
L4: // addr: 129 pc: 129 sub: 20677 op: 186
        // SubProg local_help pc: 131 op: NOPSWITCH (187)
    ;}L6: // addr: 132 pc: 131 sub: 20677 op: 187
    // SubProg local_help pc: 132 op: STARTLINE (58)

    /** cmdline.e:518			po += 1*/
    // SubProg local_help pc: 134 op: PLUS1_I (117)
    _po_20690 = _po_20690 + 1;
    // SubProg local_help pc: 138 op: STARTLINE (58)

    /** cmdline.e:519		end while*/
    // SubProg local_help pc: 140 op: ENDWHILE (22)
    goto L2; // [140] 47
    // SubProg local_help pc: 142 op: NOP1 (159)
L3: // addr: 143 pc: 142 sub: 20677 op: 159
    // SubProg local_help pc: 143 op: STARTLINE (58)

    /** cmdline.e:521		if std = 0 then*/
    // SubProg local_help pc: 145 op: EQUALS_IFW_I (121)
    if (_std_20683 != 0)
    goto L8; // [145] 159
    // SubProg local_help pc: 149 op: STARTLINE (58)

    /** cmdline.e:522			opts = standardize_opts(opts, auto_help)*/
    // SubProg local_help pc: 151 op: PROC (27)
    RefDS(_opts_20679);
    _0 = _opts_20679;
    _opts_20679 = _48standardize_opts(_opts_20679, _auto_help_20689);
    DeRefDS(_0);
    // SubProg local_help pc: 156 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 158 op: NOP1 (159)
L8: // addr: 159 pc: 158 sub: 20677 op: 159
    // SubProg local_help pc: 159 op: STARTLINE (58)

    /** cmdline.e:525		integer pad_size = print_help( opts, cmds )*/
    // SubProg local_help pc: 161 op: PROC (27)
    RefDS(_opts_20679);
    RefDS(_cmds_20681);
    _pad_size_20716 = _48print_help(_opts_20679, _cmds_20681);
    // SubProg local_help pc: 166 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pad_size_20716)) {
        _1 = (object)(DBL_PTR(_pad_size_20716)->dbl);
        DeRefDS(_pad_size_20716);
        _pad_size_20716 = _1;
    }
    // SubProg local_help pc: 168 op: STARTLINE (58)

    /** cmdline.e:527		call_user_help( add_help_rid )*/
    // SubProg local_help pc: 170 op: PROC (27)
    Ref(_add_help_rid_20680);
    _48call_user_help(_add_help_rid_20680);
    // SubProg local_help pc: 173 op: STARTLINE (58)

    /** cmdline.e:529	end procedure*/
    // SubProg local_help pc: 175 op: RETURNP (29)

// Exiting block BLOCK: local_help

// block var opts_20679
    DeRefDS(_opts_20679);

// block var add_help_rid_20680
    DeRef(_add_help_rid_20680);

// block var cmds_20681
    DeRefDS(_cmds_20681);

// block var std_20683

// block var parse_options_20684
    DeRef(_parse_options_20684);

// block var extras_mandatory_20687

// block var extras_opt_20688

// block var auto_help_20689

// block var po_20690

// block var pad_size_20716
    return;
    // SubProg local_help pc: 178 op: BADRETURNF (43)
    ;
}


void _48call_user_help(object _add_help_rid_20721)
{
    object _11833 = NOVALUE; // 20745 11833
    object _11832 = NOVALUE; // 20744 11832
    object _11831 = NOVALUE; // 20743 11831
    object _11830 = NOVALUE; // 20742 11830
// skipping _11829  name type: 0
    object _11828 = NOVALUE; // 20740 11828
    object _11827 = NOVALUE; // 20739 11827
    object _11826 = NOVALUE; // 20738 11826
    object _11825 = NOVALUE; // 20736 11825
    object _11824 = NOVALUE; // 20735 11824
// skipping _11823  name type: 0
    object _11822 = NOVALUE; // 20731 11822
// skipping _11821  name type: 0
    object _11820 = NOVALUE; // 20728 11820
// skipping _11819  name type: 0
    object _11818 = NOVALUE; // 20723 11818
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg call_user_help pc: 1 op: STARTLINE (58)

    /** cmdline.e:532		if atom(add_help_rid) then*/
    // SubProg call_user_help pc: 3 op: IS_AN_ATOM (67)
    _11818 = IS_ATOM(_add_help_rid_20721);
    // SubProg call_user_help pc: 6 op: IF (20)
    if (_11818 == 0)
    {
        _11818 = NOVALUE;
        goto L1; // [6] 34
    }
    else{
        _11818 = NOVALUE;
    }
    // SubProg call_user_help pc: 9 op: STARTLINE (58)

    /** cmdline.e:533			if add_help_rid >= 0 then*/
    // SubProg call_user_help pc: 11 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _add_help_rid_20721, 0)){
        goto L2; // [11] 142
    }
    // SubProg call_user_help pc: 15 op: STARTLINE (58)

    /** cmdline.e:534				puts(1, "\n")*/
    // SubProg call_user_help pc: 17 op: PUTS (44)
    EPuts(1, _4048); // DJP 
    // SubProg call_user_help pc: 20 op: STARTLINE (58)

    /** cmdline.e:535				call_proc(add_help_rid, {})*/
    // SubProg call_user_help pc: 22 op: CALL_PROC (136)
    _0 = (object)_00[_add_help_rid_20721].addr;
    (*(intptr_t (*)())_0)(
                         );
    // SubProg call_user_help pc: 25 op: STARTLINE (58)

    /** cmdline.e:536				puts(1, "\n")*/
    // SubProg call_user_help pc: 27 op: PUTS (44)
    EPuts(1, _4048); // DJP 
    // SubProg call_user_help pc: 30 op: NOP1 (159)
    // SubProg call_user_help pc: 31 op: ELSE (23)
    goto L2; // [31] 142
    // SubProg call_user_help pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 20719 op: 159
    // SubProg call_user_help pc: 34 op: STARTLINE (58)

    /** cmdline.e:539			if length(add_help_rid) > 0 then*/
    // SubProg call_user_help pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_add_help_rid_20721)){
            _11820 = SEQ_PTR(_add_help_rid_20721)->length;
    }
    else {
        _11820 = 1;
    }
    // SubProg call_user_help pc: 39 op: GREATER_IFW_I (124)
    if (_11820 <= 0)
    goto L3; // [39] 141
    // SubProg call_user_help pc: 43 op: STARTLINE (58)

    /** cmdline.e:540				puts(1, "\n")*/
    // SubProg call_user_help pc: 45 op: PUTS (44)
    EPuts(1, _4048); // DJP 
    // SubProg call_user_help pc: 48 op: STARTLINE (58)

    /** cmdline.e:541				if types:t_display(add_help_rid) then*/
    // SubProg call_user_help pc: 50 op: PROC (27)
    Ref(_add_help_rid_20721);
    _11822 = _6t_display(_add_help_rid_20721);
    // SubProg call_user_help pc: 54 op: IF (20)
    if (_11822 == 0) {
        DeRef(_11822);
        _11822 = NOVALUE;
        goto L4; // [54] 64
    }
    else {
        if (!IS_ATOM_INT(_11822) && DBL_PTR(_11822)->dbl == 0.0){
            DeRef(_11822);
            _11822 = NOVALUE;
            goto L4; // [54] 64
        }
        DeRef(_11822);
        _11822 = NOVALUE;
    }
    DeRef(_11822);
    _11822 = NOVALUE;
    // SubProg call_user_help pc: 57 op: STARTLINE (58)

    /** cmdline.e:542					add_help_rid = {add_help_rid}*/
    // SubProg call_user_help pc: 59 op: RIGHT_BRACE_N (31)
    _0 = _add_help_rid_20721;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_add_help_rid_20721);
    ((intptr_t*)_2)[1] = _add_help_rid_20721;
    _add_help_rid_20721 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg call_user_help pc: 63 op: NOP1 (159)
L4: // addr: 64 pc: 63 sub: 20719 op: 159
    // SubProg call_user_help pc: 64 op: STARTLINE (58)

    /** cmdline.e:545				for i = 1 to length(add_help_rid) do*/
    // SubProg call_user_help pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_add_help_rid_20721)){
            _11824 = SEQ_PTR(_add_help_rid_20721)->length;
    }
    else {
        _11824 = 1;
    }
    // SubProg call_user_help pc: 69 op: FOR_I (125)
    {
        object _i_20734;
        _i_20734 = 1;
L5: // addr: 76 pc: 69 sub: 20719 op: 125
        if (_i_20734 > _11824){
            goto L6; // [69] 135
        }
        // SubProg call_user_help pc: 76 op: STARTLINE (58)

        /** cmdline.e:546					puts(1, add_help_rid[i])*/
        // SubProg call_user_help pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_20721);
        _11825 = (object)*(((s1_ptr)_2)->base + _i_20734);
        // SubProg call_user_help pc: 82 op: PUTS (44)
        EPuts(1, _11825); // DJP 
        _11825 = NOVALUE;
        // SubProg call_user_help pc: 85 op: STARTLINE (58)

        /** cmdline.e:547					if length(add_help_rid[i]) = 0 or add_help_rid[i][$] != '\n' then*/
        // SubProg call_user_help pc: 87 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_20721);
        _11826 = (object)*(((s1_ptr)_2)->base + _i_20734);
        // SubProg call_user_help pc: 91 op: LENGTH (42)
        if (IS_SEQUENCE(_11826)){
                _11827 = SEQ_PTR(_11826)->length;
        }
        else {
            _11827 = 1;
        }
        _11826 = NOVALUE;
        // SubProg call_user_help pc: 94 op: EQUALS (3)
        _11828 = (_11827 == 0);
        _11827 = NOVALUE;
        // SubProg call_user_help pc: 98 op: SC1_OR_IF (147)
        if (_11828 != 0) {
            goto L7; // [98] 122
        }
        // SubProg call_user_help pc: 102 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_20721);
        _11830 = (object)*(((s1_ptr)_2)->base + _i_20734);
        // SubProg call_user_help pc: 106 op: LENGTH (42)
        if (IS_SEQUENCE(_11830)){
                _11831 = SEQ_PTR(_11830)->length;
        }
        else {
            _11831 = 1;
        }
        // SubProg call_user_help pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11830);
        _11832 = (object)*(((s1_ptr)_2)->base + _11831);
        _11830 = NOVALUE;
        // SubProg call_user_help pc: 113 op: NOTEQ (4)
        if (IS_ATOM_INT(_11832)) {
            _11833 = (_11832 != 10);
        }
        else {
            _11833 = binary_op(NOTEQ, _11832, 10);
        }
        _11832 = NOVALUE;
        // SubProg call_user_help pc: 117 op: NOP1 (159)
        // SubProg call_user_help pc: 118 op: IF (20)
        if (_11833 == 0) {
            DeRef(_11833);
            _11833 = NOVALUE;
            goto L8; // [118] 128
        }
        else {
            if (!IS_ATOM_INT(_11833) && DBL_PTR(_11833)->dbl == 0.0){
                DeRef(_11833);
                _11833 = NOVALUE;
                goto L8; // [118] 128
            }
            DeRef(_11833);
            _11833 = NOVALUE;
        }
        DeRef(_11833);
        _11833 = NOVALUE;
        // SubProg call_user_help pc: 121 op: NOP1 (159)
L7: // addr: 122 pc: 121 sub: 20719 op: 159
        // SubProg call_user_help pc: 122 op: STARTLINE (58)

        /** cmdline.e:548						puts(1, '\n')*/
        // SubProg call_user_help pc: 124 op: PUTS (44)
        EPuts(1, 10); // DJP 
        // SubProg call_user_help pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 20719 op: 159
        // SubProg call_user_help pc: 128 op: STARTLINE (58)

        /** cmdline.e:550				end for*/
        // SubProg call_user_help pc: 130 op: ENDFOR_INT_UP1 (54)
        _i_20734 = _i_20734 + 1;
        goto L5; // [130] 76
L6: // addr: 135 pc: 130 sub: 20719 op: 54
        ;
    }
    // SubProg call_user_help pc: 135 op: STARTLINE (58)

    /** cmdline.e:552				puts(1, "\n")*/
    // SubProg call_user_help pc: 137 op: PUTS (44)
    EPuts(1, _4048); // DJP 
    // SubProg call_user_help pc: 140 op: NOP1 (159)
L3: // addr: 141 pc: 140 sub: 20719 op: 159
    // SubProg call_user_help pc: 141 op: NOP1 (159)
L2: // addr: 142 pc: 141 sub: 20719 op: 159
    // SubProg call_user_help pc: 142 op: STARTLINE (58)

    /** cmdline.e:555	end procedure*/
    // SubProg call_user_help pc: 144 op: RETURNP (29)

// Exiting block BLOCK: call_user_help

// block var add_help_rid_20721
    DeRef(_add_help_rid_20721);
    _11826 = NOVALUE;
    DeRef(_11828);
    _11828 = NOVALUE;
    return;
    // SubProg call_user_help pc: 147 op: BADRETURNF (43)
    ;
}


void _48print_option_help(object _opt_20748, object _pad_size_20749)
{
    object _has_param_20756 = NOVALUE;
    object _param_name_20759 = NOVALUE;
    object _is_mandatory_20775 = NOVALUE;
    object _cmd_20779 = NOVALUE;
    object _11892 = NOVALUE; // 20829 11892
    object _11891 = NOVALUE; // 20828 11891
    object _11890 = NOVALUE; // 20827 11890
    object _11889 = NOVALUE; // 20826 11889
    object _11888 = NOVALUE; // 20824 11888
    object _11887 = NOVALUE; // 20823 11887
    object _11886 = NOVALUE; // 20822 11886
// skipping _11884  name type: 0
    object _11883 = NOVALUE; // 20819 11883
// skipping _11882  name type: 0
// skipping _11881  name type: 0
// skipping _11880  name type: 0
    object _11879 = NOVALUE; // 20813 11879
// skipping _11878  name type: 0
// skipping _11877  name type: 0
    object _11876 = NOVALUE; // 20809 11876
    object _11875 = NOVALUE; // 20808 11875
// skipping _11873  name type: 0
// skipping _11872  name type: 0
// skipping _11871  name type: 0
// skipping _11869  name type: 0
    object _11868 = NOVALUE; // 20800 11868
    object _11867 = NOVALUE; // 20798 11867
    object _11866 = NOVALUE; // 20797 11866
// skipping _11865  name type: 0
// skipping _11864  name type: 0
// skipping _11863  name type: 0
    object _11862 = NOVALUE; // 20791 11862
// skipping _11861  name type: 0
// skipping _11860  name type: 0
    object _11859 = NOVALUE; // 20787 11859
    object _11858 = NOVALUE; // 20786 11858
// skipping _11857  name type: 0
// skipping _11856  name type: 0
    object _11855 = NOVALUE; // 20782 11855
    object _11854 = NOVALUE; // 20781 11854
// skipping _11853  name type: 0
    object _11852 = NOVALUE; // 20777 11852
    object _11851 = NOVALUE; // 20776 11851
// skipping _11850  name type: 0
    object _11849 = NOVALUE; // 20771 11849
    object _11848 = NOVALUE; // 20770 11848
    object _11847 = NOVALUE; // 20769 11847
    object _11846 = NOVALUE; // 20768 11846
// skipping _11845  name type: 0
// skipping _11844  name type: 0
    object _11843 = NOVALUE; // 20764 11843
    object _11842 = NOVALUE; // 20763 11842
// skipping _11841  name type: 0
// skipping _11840  name type: 0
    object _11839 = NOVALUE; // 20757 11839
    object _11838 = NOVALUE; // 20755 11838
    object _11837 = NOVALUE; // 20754 11837
    object _11836 = NOVALUE; // 20753 11836
    object _11835 = NOVALUE; // 20752 11835
    object _11834 = NOVALUE; // 20751 11834
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_option_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 3 op: INTEGER_CHECK (96)
    // SubProg print_option_help pc: 5 op: STARTLINE (58)

    /** cmdline.e:558		if atom(opt[SHORTNAME]) and atom(opt[LONGNAME]) then*/
    // SubProg print_option_help pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11834 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 11 op: IS_AN_ATOM (67)
    _11835 = IS_ATOM(_11834);
    _11834 = NOVALUE;
    // SubProg print_option_help pc: 14 op: SC1_AND_IF (146)
    if (_11835 == 0) {
        goto L1; // [14] 35
    }
    // SubProg print_option_help pc: 18 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11837 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 22 op: IS_AN_ATOM (67)
    _11838 = IS_ATOM(_11837);
    _11837 = NOVALUE;
    // SubProg print_option_help pc: 25 op: NOP1 (159)
    // SubProg print_option_help pc: 26 op: IF (20)
    if (_11838 == 0)
    {
        _11838 = NOVALUE;
        goto L1; // [26] 35
    }
    else{
        _11838 = NOVALUE;
    }
    // SubProg print_option_help pc: 29 op: STARTLINE (58)

    /** cmdline.e:560			return*/
    // SubProg print_option_help pc: 31 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: print_option_help

// block var opt_20748
    DeRefDS(_opt_20748);

// block var pad_size_20749

// block var has_param_20756

// block var param_name_20759
    DeRef(_param_name_20759);

// block var is_mandatory_20775

// block var cmd_20779
    DeRef(_cmd_20779);
    return;
    // SubProg print_option_help pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 20746 op: 159
    // SubProg print_option_help pc: 35 op: STARTLINE (58)

    /** cmdline.e:563		integer has_param = find(HAS_PARAMETER, opt[OPTIONS])*/
    // SubProg print_option_help pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11839 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 41 op: FIND_FROM (176)
    _has_param_20756 = find_from(112, _11839, 1);
    _11839 = NOVALUE;
    // SubProg print_option_help pc: 46 op: STARTLINE (58)

    /** cmdline.e:564		sequence param_name*/
    // SubProg print_option_help pc: 48 op: STARTLINE (58)

    /** cmdline.e:565		if has_param != 0 then*/
    // SubProg print_option_help pc: 50 op: NOTEQ_IFW_I (122)
    if (_has_param_20756 == 0)
    goto L2; // [50] 124
    // SubProg print_option_help pc: 54 op: STARTLINE (58)

    /** cmdline.e:566			if has_param < length(opt[OPTIONS]) then*/
    // SubProg print_option_help pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11842 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_11842)){
            _11843 = SEQ_PTR(_11842)->length;
    }
    else {
        _11843 = 1;
    }
    _11842 = NOVALUE;
    // SubProg print_option_help pc: 63 op: LESS_IFW_I (119)
    if (_has_param_20756 >= _11843)
    goto L3; // [63] 115
    // SubProg print_option_help pc: 67 op: STARTLINE (58)

    /** cmdline.e:567				has_param += 1*/
    // SubProg print_option_help pc: 69 op: PLUS1_I (117)
    _has_param_20756 = _has_param_20756 + 1;
    // SubProg print_option_help pc: 73 op: STARTLINE (58)

    /** cmdline.e:568				if sequence(opt[OPTIONS][has_param]) then*/
    // SubProg print_option_help pc: 75 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11846 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11846);
    _11847 = (object)*(((s1_ptr)_2)->base + _has_param_20756);
    _11846 = NOVALUE;
    // SubProg print_option_help pc: 83 op: IS_A_SEQUENCE (68)
    _11848 = IS_SEQUENCE(_11847);
    _11847 = NOVALUE;
    // SubProg print_option_help pc: 86 op: IF (20)
    if (_11848 == 0)
    {
        _11848 = NOVALUE;
        goto L4; // [86] 104
    }
    else{
        _11848 = NOVALUE;
    }
    // SubProg print_option_help pc: 89 op: STARTLINE (58)

    /** cmdline.e:569					param_name = opt[OPTIONS][has_param]*/
    // SubProg print_option_help pc: 91 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11849 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 95 op: RHS_SUBS_CHECK (92)
    DeRef(_param_name_20759);
    _2 = (object)SEQ_PTR(_11849);
    _param_name_20759 = (object)*(((s1_ptr)_2)->base + _has_param_20756);
    Ref(_param_name_20759);
    _11849 = NOVALUE;
    // SubProg print_option_help pc: 99 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 101 op: ELSE (23)
    goto L5; // [101] 123
    // SubProg print_option_help pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 20746 op: 159
    // SubProg print_option_help pc: 104 op: STARTLINE (58)

    /** cmdline.e:571					param_name = "x"*/
    // SubProg print_option_help pc: 106 op: ASSIGN (18)
    RefDS(_11592);
    DeRef(_param_name_20759);
    _param_name_20759 = _11592;
    // SubProg print_option_help pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 111 op: NOP1 (159)
    // SubProg print_option_help pc: 112 op: ELSE (23)
    goto L5; // [112] 123
    // SubProg print_option_help pc: 114 op: NOP1 (159)
L3: // addr: 115 pc: 114 sub: 20746 op: 159
    // SubProg print_option_help pc: 115 op: STARTLINE (58)

    /** cmdline.e:574				param_name = "x"*/
    // SubProg print_option_help pc: 117 op: ASSIGN (18)
    RefDS(_11592);
    DeRef(_param_name_20759);
    _param_name_20759 = _11592;
    // SubProg print_option_help pc: 120 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 20746 op: 159
    // SubProg print_option_help pc: 123 op: NOP1 (159)
L2: // addr: 124 pc: 123 sub: 20746 op: 159
    // SubProg print_option_help pc: 124 op: STARTLINE (58)

    /** cmdline.e:577		integer is_mandatory = (find(MANDATORY, opt[OPTIONS]) != 0)*/
    // SubProg print_option_help pc: 126 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11851 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 130 op: FIND_FROM (176)
    _11852 = find_from(109, _11851, 1);
    _11851 = NOVALUE;
    // SubProg print_option_help pc: 135 op: NOTEQ (4)
    _is_mandatory_20775 = (_11852 != 0);
    _11852 = NOVALUE;
    // SubProg print_option_help pc: 139 op: STARTLINE (58)

    /** cmdline.e:578		sequence cmd = ""*/
    // SubProg print_option_help pc: 141 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_cmd_20779);
    _cmd_20779 = _5;
    // SubProg print_option_help pc: 144 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 146 op: STARTLINE (58)

    /** cmdline.e:580		if sequence(opt[SHORTNAME]) then*/
    // SubProg print_option_help pc: 148 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11854 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 152 op: IS_A_SEQUENCE (68)
    _11855 = IS_SEQUENCE(_11854);
    _11854 = NOVALUE;
    // SubProg print_option_help pc: 155 op: IF (20)
    if (_11855 == 0)
    {
        _11855 = NOVALUE;
        goto L6; // [155] 216
    }
    else{
        _11855 = NOVALUE;
    }
    // SubProg print_option_help pc: 158 op: STARTLINE (58)

    /** cmdline.e:581			if not is_mandatory then*/
    // SubProg print_option_help pc: 160 op: NOT_IFW (108)
    if (_is_mandatory_20775 != 0)
    goto L7; // [160] 170
    // SubProg print_option_help pc: 163 op: STARTLINE (58)

    /** cmdline.e:582				cmd &= '['*/
    // SubProg print_option_help pc: 165 op: CONCAT (15)
    Append(&_cmd_20779, _cmd_20779, 91);
    // SubProg print_option_help pc: 169 op: NOP1 (159)
L7: // addr: 170 pc: 169 sub: 20746 op: 159
    // SubProg print_option_help pc: 170 op: STARTLINE (58)

    /** cmdline.e:584			cmd &= '-' & opt[SHORTNAME]*/
    // SubProg print_option_help pc: 172 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11858 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 176 op: CONCAT (15)
    if (IS_SEQUENCE(45) && IS_ATOM(_11858)) {
    }
    else if (IS_ATOM(45) && IS_SEQUENCE(_11858)) {
        Prepend(&_11859, _11858, 45);
    }
    else {
        Concat((object_ptr)&_11859, 45, _11858);
    }
    _11858 = NOVALUE;
    // SubProg print_option_help pc: 180 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20779, _cmd_20779, _11859);
    DeRefDS(_11859);
    _11859 = NOVALUE;
    // SubProg print_option_help pc: 184 op: STARTLINE (58)

    /** cmdline.e:585			if has_param != 0 then*/
    // SubProg print_option_help pc: 186 op: NOTEQ_IFW_I (122)
    if (_has_param_20756 == 0)
    goto L8; // [186] 203
    // SubProg print_option_help pc: 190 op: STARTLINE (58)

    /** cmdline.e:586				cmd &= ' ' & param_name*/
    // SubProg print_option_help pc: 192 op: PRIVATE_INIT_CHECK (30)
    // SubProg print_option_help pc: 194 op: CONCAT (15)
    Prepend(&_11862, _param_name_20759, 32);
    // SubProg print_option_help pc: 198 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20779, _cmd_20779, _11862);
    DeRefDS(_11862);
    _11862 = NOVALUE;
    // SubProg print_option_help pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 20746 op: 159
    // SubProg print_option_help pc: 203 op: STARTLINE (58)

    /** cmdline.e:588			if not is_mandatory then*/
    // SubProg print_option_help pc: 205 op: NOT_IFW (108)
    if (_is_mandatory_20775 != 0)
    goto L9; // [205] 215
    // SubProg print_option_help pc: 208 op: STARTLINE (58)

    /** cmdline.e:589				cmd &= ']'*/
    // SubProg print_option_help pc: 210 op: CONCAT (15)
    Append(&_cmd_20779, _cmd_20779, 93);
    // SubProg print_option_help pc: 214 op: NOP1 (159)
L9: // addr: 215 pc: 214 sub: 20746 op: 159
    // SubProg print_option_help pc: 215 op: NOP1 (159)
L6: // addr: 216 pc: 215 sub: 20746 op: 159
    // SubProg print_option_help pc: 216 op: STARTLINE (58)

    /** cmdline.e:593		if sequence(opt[LONGNAME]) then*/
    // SubProg print_option_help pc: 218 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11866 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 222 op: IS_A_SEQUENCE (68)
    _11867 = IS_SEQUENCE(_11866);
    _11866 = NOVALUE;
    // SubProg print_option_help pc: 225 op: IF (20)
    if (_11867 == 0)
    {
        _11867 = NOVALUE;
        goto LA; // [225] 300
    }
    else{
        _11867 = NOVALUE;
    }
    // SubProg print_option_help pc: 228 op: STARTLINE (58)

    /** cmdline.e:594			if length(cmd) > 0 then cmd &= ", " end if*/
    // SubProg print_option_help pc: 230 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_20779)){
            _11868 = SEQ_PTR(_cmd_20779)->length;
    }
    else {
        _11868 = 1;
    }
    // SubProg print_option_help pc: 233 op: GREATER_IFW_I (124)
    if (_11868 <= 0)
    goto LB; // [233] 242
    // SubProg print_option_help pc: 237 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20779, _cmd_20779, _11870);
    // SubProg print_option_help pc: 241 op: NOP1 (159)
LB: // addr: 242 pc: 241 sub: 20746 op: 159
    // SubProg print_option_help pc: 242 op: STARTLINE (58)

    /** cmdline.e:595			if not is_mandatory then*/
    // SubProg print_option_help pc: 244 op: NOT_IFW (108)
    if (_is_mandatory_20775 != 0)
    goto LC; // [244] 254
    // SubProg print_option_help pc: 247 op: STARTLINE (58)

    /** cmdline.e:596				cmd &= '['*/
    // SubProg print_option_help pc: 249 op: CONCAT (15)
    Append(&_cmd_20779, _cmd_20779, 91);
    // SubProg print_option_help pc: 253 op: NOP1 (159)
LC: // addr: 254 pc: 253 sub: 20746 op: 159
    // SubProg print_option_help pc: 254 op: STARTLINE (58)

    /** cmdline.e:598			cmd &= "--" & opt[LONGNAME]*/
    // SubProg print_option_help pc: 256 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11875 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 260 op: CONCAT (15)
    if (IS_SEQUENCE(_11874) && IS_ATOM(_11875)) {
        Ref(_11875);
        Append(&_11876, _11874, _11875);
    }
    else if (IS_ATOM(_11874) && IS_SEQUENCE(_11875)) {
    }
    else {
        Concat((object_ptr)&_11876, _11874, _11875);
    }
    _11875 = NOVALUE;
    // SubProg print_option_help pc: 264 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20779, _cmd_20779, _11876);
    DeRefDS(_11876);
    _11876 = NOVALUE;
    // SubProg print_option_help pc: 268 op: STARTLINE (58)

    /** cmdline.e:599			if has_param != 0 then*/
    // SubProg print_option_help pc: 270 op: NOTEQ_IFW_I (122)
    if (_has_param_20756 == 0)
    goto LD; // [270] 287
    // SubProg print_option_help pc: 274 op: STARTLINE (58)

    /** cmdline.e:600				cmd &= '=' & param_name*/
    // SubProg print_option_help pc: 276 op: PRIVATE_INIT_CHECK (30)
    // SubProg print_option_help pc: 278 op: CONCAT (15)
    Prepend(&_11879, _param_name_20759, 61);
    // SubProg print_option_help pc: 282 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20779, _cmd_20779, _11879);
    DeRefDS(_11879);
    _11879 = NOVALUE;
    // SubProg print_option_help pc: 286 op: NOP1 (159)
LD: // addr: 287 pc: 286 sub: 20746 op: 159
    // SubProg print_option_help pc: 287 op: STARTLINE (58)

    /** cmdline.e:602			if not is_mandatory then*/
    // SubProg print_option_help pc: 289 op: NOT_IFW (108)
    if (_is_mandatory_20775 != 0)
    goto LE; // [289] 299
    // SubProg print_option_help pc: 292 op: STARTLINE (58)

    /** cmdline.e:603				cmd &= ']'*/
    // SubProg print_option_help pc: 294 op: CONCAT (15)
    Append(&_cmd_20779, _cmd_20779, 93);
    // SubProg print_option_help pc: 298 op: NOP1 (159)
LE: // addr: 299 pc: 298 sub: 20746 op: 159
    // SubProg print_option_help pc: 299 op: NOP1 (159)
LA: // addr: 300 pc: 299 sub: 20746 op: 159
    // SubProg print_option_help pc: 300 op: STARTLINE (58)

    /** cmdline.e:610		if length(cmd) > pad_size then*/
    // SubProg print_option_help pc: 302 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_20779)){
            _11883 = SEQ_PTR(_cmd_20779)->length;
    }
    else {
        _11883 = 1;
    }
    // SubProg print_option_help pc: 305 op: GREATER_IFW_I (124)
    if (_11883 <= _pad_size_20749)
    goto LF; // [305] 336
    // SubProg print_option_help pc: 309 op: STARTLINE (58)

    /** cmdline.e:611			puts(1, "   " & cmd & '\n')*/
    // SubProg print_option_help pc: 311 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 10;
        concat_list[1] = _cmd_20779;
        concat_list[2] = _11885;
        Concat_N((object_ptr)&_11886, concat_list, 3);
    }
    // SubProg print_option_help pc: 317 op: PUTS (44)
    EPuts(1, _11886); // DJP 
    DeRefDS(_11886);
    _11886 = NOVALUE;
    // SubProg print_option_help pc: 320 op: STARTLINE (58)

    /** cmdline.e:612			puts(1, repeat(' ', pad_size + 3))*/
    // SubProg print_option_help pc: 322 op: PLUS (11)
    _11887 = _pad_size_20749 + 3;
    // SubProg print_option_help pc: 326 op: REPEAT (32)
    _11888 = Repeat(32, _11887);
    _11887 = NOVALUE;
    // SubProg print_option_help pc: 330 op: PUTS (44)
    EPuts(1, _11888); // DJP 
    DeRefDS(_11888);
    _11888 = NOVALUE;
    // SubProg print_option_help pc: 333 op: ELSE (23)
    goto L10; // [333] 352
    // SubProg print_option_help pc: 335 op: NOP1 (159)
LF: // addr: 336 pc: 335 sub: 20746 op: 159
    // SubProg print_option_help pc: 336 op: STARTLINE (58)

    /** cmdline.e:614			puts(1, "   " & stdseq:pad_tail(cmd, pad_size))*/
    // SubProg print_option_help pc: 338 op: PROC (27)
    RefDS(_cmd_20779);
    _11889 = _24pad_tail(_cmd_20779, _pad_size_20749, 32);
    // SubProg print_option_help pc: 344 op: CONCAT (15)
    if (IS_SEQUENCE(_11885) && IS_ATOM(_11889)) {
        Ref(_11889);
        Append(&_11890, _11885, _11889);
    }
    else if (IS_ATOM(_11885) && IS_SEQUENCE(_11889)) {
    }
    else {
        Concat((object_ptr)&_11890, _11885, _11889);
    }
    DeRef(_11889);
    _11889 = NOVALUE;
    // SubProg print_option_help pc: 348 op: PUTS (44)
    EPuts(1, _11890); // DJP 
    DeRefDS(_11890);
    _11890 = NOVALUE;
    // SubProg print_option_help pc: 351 op: NOP1 (159)
L10: // addr: 352 pc: 351 sub: 20746 op: 159
    // SubProg print_option_help pc: 352 op: STARTLINE (58)

    /** cmdline.e:617		puts(1, opt[DESCRIPTION] & '\n')*/
    // SubProg print_option_help pc: 354 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20748);
    _11891 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg print_option_help pc: 358 op: CONCAT (15)
    if (IS_SEQUENCE(_11891) && IS_ATOM(10)) {
        Append(&_11892, _11891, 10);
    }
    else if (IS_ATOM(_11891) && IS_SEQUENCE(10)) {
    }
    else {
        Concat((object_ptr)&_11892, _11891, 10);
        _11891 = NOVALUE;
    }
    _11891 = NOVALUE;
    // SubProg print_option_help pc: 362 op: PUTS (44)
    EPuts(1, _11892); // DJP 
    DeRefDS(_11892);
    _11892 = NOVALUE;
    // SubProg print_option_help pc: 365 op: STARTLINE (58)

    /** cmdline.e:618	end procedure*/
    // SubProg print_option_help pc: 367 op: RETURNP (29)

// Exiting block BLOCK: print_option_help

// block var opt_20748
    DeRefDS(_opt_20748);

// block var pad_size_20749

// block var has_param_20756

// block var param_name_20759
    DeRef(_param_name_20759);

// block var is_mandatory_20775

// block var cmd_20779
    DeRef(_cmd_20779);
    _11842 = NOVALUE;
    return;
    // SubProg print_option_help pc: 370 op: BADRETURNF (43)
    ;
}


object _48find_opt(object _opts_20839, object _opt_style_20840, object _cmd_text_20841)
{
    object _opt_name_20842 = NOVALUE;
    object _opt_param_20843 = NOVALUE;
    object _param_found_20844 = NOVALUE;
    object _reversed_20845 = NOVALUE;
    object _11995 = NOVALUE; // 20975 11995
    object _11993 = NOVALUE; // 20973 11993
    object _11992 = NOVALUE; // 20972 11992
// skipping _11991  name type: 0
    object _11990 = NOVALUE; // 20970 11990
    object _11989 = NOVALUE; // 20969 11989
    object _11988 = NOVALUE; // 20968 11988
    object _11987 = NOVALUE; // 20965 11987
    object _11986 = NOVALUE; // 20963 11986
// skipping _11984  name type: 0
    object _11983 = NOVALUE; // 20959 11983
    object _11982 = NOVALUE; // 20958 11982
    object _11981 = NOVALUE; // 20957 11981
// skipping _11980  name type: 0
    object _11979 = NOVALUE; // 20954 11979
    object _11978 = NOVALUE; // 20953 11978
    object _11977 = NOVALUE; // 20952 11977
    object _11976 = NOVALUE; // 20951 11976
// skipping _11975  name type: 0
    object _11974 = NOVALUE; // 20947 11974
    object _11973 = NOVALUE; // 20946 11973
    object _11972 = NOVALUE; // 20945 11972
    object _11971 = NOVALUE; // 20944 11971
    object _11970 = NOVALUE; // 20943 11970
    object _11969 = NOVALUE; // 20942 11969
    object _11968 = NOVALUE; // 20940 11968
    object _11967 = NOVALUE; // 20939 11967
    object _11966 = NOVALUE; // 20938 11966
    object _11965 = NOVALUE; // 20936 11965
    object _11964 = NOVALUE; // 20933 11964
    object _11963 = NOVALUE; // 20932 11963
    object _11956 = NOVALUE; // 20925 11956
    object _11955 = NOVALUE; // 20923 11955
    object _11954 = NOVALUE; // 20922 11954
    object _11947 = NOVALUE; // 20915 11947
    object _11946 = NOVALUE; // 20912 11946
// skipping _11945  name type: 0
    object _11944 = NOVALUE; // 20909 11944
// skipping _11943  name type: 0
    object _11942 = NOVALUE; // 20906 11942
    object _11941 = NOVALUE; // 20905 11941
// skipping _11940  name type: 0
    object _11939 = NOVALUE; // 20903 11939
    object _11938 = NOVALUE; // 20902 11938
    object _11937 = NOVALUE; // 20901 11937
    object _11936 = NOVALUE; // 20899 11936
    object _11935 = NOVALUE; // 20898 11935
// skipping _11934  name type: 0
    object _11933 = NOVALUE; // 20896 11933
    object _11932 = NOVALUE; // 20895 11932
// skipping _11931  name type: 0
    object _11930 = NOVALUE; // 20892 11930
// skipping _11929  name type: 0
    object _11928 = NOVALUE; // 20889 11928
    object _11927 = NOVALUE; // 20888 11927
// skipping _11926  name type: 0
    object _11925 = NOVALUE; // 20886 11925
    object _11924 = NOVALUE; // 20885 11924
    object _11922 = NOVALUE; // 20883 11922
    object _11921 = NOVALUE; // 20881 11921
// skipping _11920  name type: 0
    object _11919 = NOVALUE; // 20877 11919
    object _11918 = NOVALUE; // 20876 11918
// skipping _11916  name type: 0
    object _11915 = NOVALUE; // 20873 11915
// skipping _11914  name type: 0
    object _11913 = NOVALUE; // 20870 11913
    object _11912 = NOVALUE; // 20869 11912
    object _11910 = NOVALUE; // 20867 11910
// skipping _11909  name type: 0
    object _11908 = NOVALUE; // 20864 11908
// skipping _11907  name type: 0
    object _11906 = NOVALUE; // 20861 11906
    object _11905 = NOVALUE; // 20860 11905
// skipping _11904  name type: 0
    object _11903 = NOVALUE; // 20858 11903
    object _11902 = NOVALUE; // 20857 11902
    object _11901 = NOVALUE; // 20856 11901
    object _11900 = NOVALUE; // 20854 11900
    object _11899 = NOVALUE; // 20853 11899
// skipping _11898  name type: 0
    object _11897 = NOVALUE; // 20851 11897
    object _11896 = NOVALUE; // 20850 11896
// skipping _11895  name type: 0
    object _11894 = NOVALUE; // 20847 11894
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_opt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 5 op: STARTLINE (58)

    /** cmdline.e:793		integer param_found = 0*/
    // SubProg find_opt pc: 7 op: ASSIGN_I (113)
    _param_found_20844 = 0;
    // SubProg find_opt pc: 10 op: STARTLINE (58)

    /** cmdline.e:794		integer reversed = 0*/
    // SubProg find_opt pc: 12 op: ASSIGN_I (113)
    _reversed_20845 = 0;
    // SubProg find_opt pc: 15 op: STARTLINE (58)

    /** cmdline.e:796		if length(cmd_text) >= 2 then*/
    // SubProg find_opt pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11894 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11894 = 1;
    }
    // SubProg find_opt pc: 20 op: GREATEREQ_IFW_I (120)
    if (_11894 < 2)
    goto L1; // [20] 85
    // SubProg find_opt pc: 24 op: STARTLINE (58)

    /** cmdline.e:798			if cmd_text[1] = '\'' or cmd_text[1] = '"' then*/
    // SubProg find_opt pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20841);
    _11896 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 30 op: EQUALS (3)
    if (IS_ATOM_INT(_11896)) {
        _11897 = (_11896 == 39);
    }
    else {
        _11897 = binary_op(EQUALS, _11896, 39);
    }
    _11896 = NOVALUE;
    // SubProg find_opt pc: 34 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_11897)) {
        if (_11897 != 0) {
            goto L2; // [34] 51
        }
    }
    else {
        if (DBL_PTR(_11897)->dbl != 0.0) {
            goto L2; // [34] 51
        }
    }
    // SubProg find_opt pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20841);
    _11899 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 42 op: EQUALS (3)
    if (IS_ATOM_INT(_11899)) {
        _11900 = (_11899 == 34);
    }
    else {
        _11900 = binary_op(EQUALS, _11899, 34);
    }
    _11899 = NOVALUE;
    // SubProg find_opt pc: 46 op: NOP1 (159)
    // SubProg find_opt pc: 47 op: IF (20)
    if (_11900 == 0) {
        DeRef(_11900);
        _11900 = NOVALUE;
        goto L3; // [47] 84
    }
    else {
        if (!IS_ATOM_INT(_11900) && DBL_PTR(_11900)->dbl == 0.0){
            DeRef(_11900);
            _11900 = NOVALUE;
            goto L3; // [47] 84
        }
        DeRef(_11900);
        _11900 = NOVALUE;
    }
    DeRef(_11900);
    _11900 = NOVALUE;
    // SubProg find_opt pc: 50 op: NOP1 (159)
L2: // addr: 51 pc: 50 sub: 20837 op: 159
    // SubProg find_opt pc: 51 op: STARTLINE (58)

    /** cmdline.e:799				if cmd_text[$] = cmd_text[1] then*/
    // SubProg find_opt pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11901 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11901 = 1;
    }
    // SubProg find_opt pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20841);
    _11902 = (object)*(((s1_ptr)_2)->base + _11901);
    // SubProg find_opt pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20841);
    _11903 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 64 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _11902, _11903)){
        _11902 = NOVALUE;
        _11903 = NOVALUE;
        goto L4; // [64] 83
    }
    _11902 = NOVALUE;
    _11903 = NOVALUE;
    // SubProg find_opt pc: 68 op: STARTLINE (58)

    /** cmdline.e:800					cmd_text = cmd_text[2 .. $-1]*/
    // SubProg find_opt pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11905 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11905 = 1;
    }
    // SubProg find_opt pc: 73 op: MINUS (10)
    _11906 = _11905 - 1;
    _11905 = NOVALUE;
    // SubProg find_opt pc: 77 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_text_20841;
    RHS_Slice(_cmd_text_20841, 2, _11906);
    // SubProg find_opt pc: 82 op: NOP1 (159)
L4: // addr: 83 pc: 82 sub: 20837 op: 159
    // SubProg find_opt pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 20837 op: 159
    // SubProg find_opt pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 20837 op: 159
    // SubProg find_opt pc: 85 op: STARTLINE (58)

    /** cmdline.e:805		if length(cmd_text) > 0 then*/
    // SubProg find_opt pc: 87 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11908 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11908 = 1;
    }
    // SubProg find_opt pc: 90 op: GREATER_IFW_I (124)
    if (_11908 <= 0)
    goto L5; // [90] 125
    // SubProg find_opt pc: 94 op: STARTLINE (58)

    /** cmdline.e:806			if find(cmd_text[1], "!-") then*/
    // SubProg find_opt pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20841);
    _11910 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 100 op: FIND_FROM (176)
    _11912 = find_from(_11910, _11911, 1);
    _11910 = NOVALUE;
    // SubProg find_opt pc: 105 op: IF (20)
    if (_11912 == 0)
    {
        _11912 = NOVALUE;
        goto L6; // [105] 124
    }
    else{
        _11912 = NOVALUE;
    }
    // SubProg find_opt pc: 108 op: STARTLINE (58)

    /** cmdline.e:807				reversed = 1*/
    // SubProg find_opt pc: 110 op: ASSIGN_I (113)
    _reversed_20845 = 1;
    // SubProg find_opt pc: 113 op: STARTLINE (58)

    /** cmdline.e:808				cmd_text = cmd_text[2 .. $]*/
    // SubProg find_opt pc: 115 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11913 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11913 = 1;
    }
    // SubProg find_opt pc: 118 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_text_20841;
    RHS_Slice(_cmd_text_20841, 2, _11913);
    // SubProg find_opt pc: 123 op: NOP1 (159)
L6: // addr: 124 pc: 123 sub: 20837 op: 159
    // SubProg find_opt pc: 124 op: NOP1 (159)
L5: // addr: 125 pc: 124 sub: 20837 op: 159
    // SubProg find_opt pc: 125 op: STARTLINE (58)

    /** cmdline.e:812		if length(cmd_text) < 1 then*/
    // SubProg find_opt pc: 127 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11915 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11915 = 1;
    }
    // SubProg find_opt pc: 130 op: LESS_IFW_I (119)
    if (_11915 >= 1)
    goto L7; // [130] 145
    // SubProg find_opt pc: 134 op: STARTLINE (58)

    /** cmdline.e:813			return {-1, "Empty command text"}*/
    // SubProg find_opt pc: 136 op: RIGHT_BRACE_2 (85)
    RefDS(_11917);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _11917;
    _11918 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 140 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20839
    DeRefDS(_opts_20839);

// block var opt_style_20840
    DeRefDS(_opt_style_20840);

// block var cmd_text_20841
    DeRef(_cmd_text_20841);

// block var opt_name_20842
    DeRef(_opt_name_20842);

// block var opt_param_20843
    DeRef(_opt_param_20843);

// block var param_found_20844

// block var reversed_20845
    DeRef(_11906);
    _11906 = NOVALUE;
    DeRef(_11897);
    _11897 = NOVALUE;
    return _11918;
    // SubProg find_opt pc: 144 op: NOP1 (159)
L7: // addr: 145 pc: 144 sub: 20837 op: 159
    // SubProg find_opt pc: 145 op: STARTLINE (58)

    /** cmdline.e:816		opt_name = repeat(' ', length(cmd_text))*/
    // SubProg find_opt pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11919 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11919 = 1;
    }
    // SubProg find_opt pc: 150 op: REPEAT (32)
    DeRef(_opt_name_20842);
    _opt_name_20842 = Repeat(32, _11919);
    _11919 = NOVALUE;
    // SubProg find_opt pc: 154 op: STARTLINE (58)

    /** cmdline.e:817		opt_param = 0*/
    // SubProg find_opt pc: 156 op: ASSIGN (18)
    DeRef(_opt_param_20843);
    _opt_param_20843 = 0;
    // SubProg find_opt pc: 159 op: STARTLINE (58)

    /** cmdline.e:818		for i = 1 to length(cmd_text) do*/
    // SubProg find_opt pc: 161 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20841)){
            _11921 = SEQ_PTR(_cmd_text_20841)->length;
    }
    else {
        _11921 = 1;
    }
    // SubProg find_opt pc: 164 op: FOR_I (125)
    {
        object _i_20880;
        _i_20880 = 1;
L8: // addr: 171 pc: 164 sub: 20837 op: 125
        if (_i_20880 > _11921){
            goto L9; // [164] 320
        }
        // SubProg find_opt pc: 171 op: STARTLINE (58)

        /** cmdline.e:819			if find(cmd_text[i], ":=") then*/
        // SubProg find_opt pc: 173 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cmd_text_20841);
        _11922 = (object)*(((s1_ptr)_2)->base + _i_20880);
        // SubProg find_opt pc: 177 op: FIND_FROM (176)
        _11924 = find_from(_11922, _11923, 1);
        _11922 = NOVALUE;
        // SubProg find_opt pc: 182 op: IF (20)
        if (_11924 == 0)
        {
            _11924 = NOVALUE;
            goto LA; // [182] 302
        }
        else{
            _11924 = NOVALUE;
        }
        // SubProg find_opt pc: 185 op: STARTLINE (58)

        /** cmdline.e:820				opt_name = opt_name[1 .. i - 1]*/
        // SubProg find_opt pc: 187 op: MINUS (10)
        _11925 = _i_20880 - 1;
        // SubProg find_opt pc: 191 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_name_20842;
        RHS_Slice(_opt_name_20842, 1, _11925);
        // SubProg find_opt pc: 196 op: STARTLINE (58)

        /** cmdline.e:821				opt_param = cmd_text[i + 1 .. $]*/
        // SubProg find_opt pc: 198 op: PLUS1 (93)
        _11927 = _i_20880 + 1;
        // SubProg find_opt pc: 202 op: LENGTH (42)
        if (IS_SEQUENCE(_cmd_text_20841)){
                _11928 = SEQ_PTR(_cmd_text_20841)->length;
        }
        else {
            _11928 = 1;
        }
        // SubProg find_opt pc: 205 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_param_20843;
        RHS_Slice(_cmd_text_20841, _11927, _11928);
        // SubProg find_opt pc: 210 op: STARTLINE (58)

        /** cmdline.e:822				if length(opt_param) >= 2 then*/
        // SubProg find_opt pc: 212 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20843)){
                _11930 = SEQ_PTR(_opt_param_20843)->length;
        }
        else {
            _11930 = 1;
        }
        // SubProg find_opt pc: 215 op: GREATEREQ_IFW_I (120)
        if (_11930 < 2)
        goto LB; // [215] 280
        // SubProg find_opt pc: 219 op: STARTLINE (58)

        /** cmdline.e:824					if opt_param[1] = '\'' or opt_param[1] = '"' then*/
        // SubProg find_opt pc: 221 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20843);
        _11932 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 225 op: EQUALS (3)
        if (IS_ATOM_INT(_11932)) {
            _11933 = (_11932 == 39);
        }
        else {
            _11933 = binary_op(EQUALS, _11932, 39);
        }
        _11932 = NOVALUE;
        // SubProg find_opt pc: 229 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_11933)) {
            if (_11933 != 0) {
                goto LC; // [229] 246
            }
        }
        else {
            if (DBL_PTR(_11933)->dbl != 0.0) {
                goto LC; // [229] 246
            }
        }
        // SubProg find_opt pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20843);
        _11935 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 237 op: EQUALS (3)
        if (IS_ATOM_INT(_11935)) {
            _11936 = (_11935 == 34);
        }
        else {
            _11936 = binary_op(EQUALS, _11935, 34);
        }
        _11935 = NOVALUE;
        // SubProg find_opt pc: 241 op: NOP1 (159)
        // SubProg find_opt pc: 242 op: IF (20)
        if (_11936 == 0) {
            DeRef(_11936);
            _11936 = NOVALUE;
            goto LD; // [242] 279
        }
        else {
            if (!IS_ATOM_INT(_11936) && DBL_PTR(_11936)->dbl == 0.0){
                DeRef(_11936);
                _11936 = NOVALUE;
                goto LD; // [242] 279
            }
            DeRef(_11936);
            _11936 = NOVALUE;
        }
        DeRef(_11936);
        _11936 = NOVALUE;
        // SubProg find_opt pc: 245 op: NOP1 (159)
LC: // addr: 246 pc: 245 sub: 20837 op: 159
        // SubProg find_opt pc: 246 op: STARTLINE (58)

        /** cmdline.e:825						if opt_param[$] = opt_param[1] then*/
        // SubProg find_opt pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20843)){
                _11937 = SEQ_PTR(_opt_param_20843)->length;
        }
        else {
            _11937 = 1;
        }
        // SubProg find_opt pc: 251 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20843);
        _11938 = (object)*(((s1_ptr)_2)->base + _11937);
        // SubProg find_opt pc: 255 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20843);
        _11939 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 259 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _11938, _11939)){
            _11938 = NOVALUE;
            _11939 = NOVALUE;
            goto LE; // [259] 278
        }
        _11938 = NOVALUE;
        _11939 = NOVALUE;
        // SubProg find_opt pc: 263 op: STARTLINE (58)

        /** cmdline.e:826							opt_param = opt_param[2 .. $-1]*/
        // SubProg find_opt pc: 265 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20843)){
                _11941 = SEQ_PTR(_opt_param_20843)->length;
        }
        else {
            _11941 = 1;
        }
        // SubProg find_opt pc: 268 op: MINUS (10)
        _11942 = _11941 - 1;
        _11941 = NOVALUE;
        // SubProg find_opt pc: 272 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_param_20843;
        RHS_Slice(_opt_param_20843, 2, _11942);
        // SubProg find_opt pc: 277 op: NOP1 (159)
LE: // addr: 278 pc: 277 sub: 20837 op: 159
        // SubProg find_opt pc: 278 op: NOP1 (159)
LD: // addr: 279 pc: 278 sub: 20837 op: 159
        // SubProg find_opt pc: 279 op: NOP1 (159)
LB: // addr: 280 pc: 279 sub: 20837 op: 159
        // SubProg find_opt pc: 280 op: STARTLINE (58)

        /** cmdline.e:831				if length(opt_param) > 0 then*/
        // SubProg find_opt pc: 282 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20843)){
                _11944 = SEQ_PTR(_opt_param_20843)->length;
        }
        else {
            _11944 = 1;
        }
        // SubProg find_opt pc: 285 op: GREATER_IFW_I (124)
        if (_11944 <= 0)
        goto L9; // [285] 320
        // SubProg find_opt pc: 289 op: STARTLINE (58)

        /** cmdline.e:832					param_found = 1*/
        // SubProg find_opt pc: 291 op: ASSIGN_I (113)
        _param_found_20844 = 1;
        // SubProg find_opt pc: 294 op: NOP1 (159)
        // SubProg find_opt pc: 295 op: STARTLINE (58)

        /** cmdline.e:835				exit*/
        // SubProg find_opt pc: 297 op: EXIT (61)
        goto L9; // [297] 320
        // SubProg find_opt pc: 299 op: ELSE (23)
        goto LF; // [299] 313
        // SubProg find_opt pc: 301 op: NOP1 (159)
LA: // addr: 302 pc: 301 sub: 20837 op: 159
        // SubProg find_opt pc: 302 op: STARTLINE (58)

        /** cmdline.e:837				opt_name[i] = cmd_text[i]*/
        // SubProg find_opt pc: 304 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cmd_text_20841);
        _11946 = (object)*(((s1_ptr)_2)->base + _i_20880);
        // SubProg find_opt pc: 308 op: ASSIGN_SUBS (16)
        Ref(_11946);
        _2 = (object)SEQ_PTR(_opt_name_20842);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_name_20842 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_20880);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11946;
        if( _1 != _11946 ){
            DeRef(_1);
        }
        _11946 = NOVALUE;
        // SubProg find_opt pc: 312 op: NOP1 (159)
LF: // addr: 313 pc: 312 sub: 20837 op: 159
        // SubProg find_opt pc: 313 op: STARTLINE (58)

        /** cmdline.e:839		end for*/
        // SubProg find_opt pc: 315 op: ENDFOR_INT_UP1 (54)
        _i_20880 = _i_20880 + 1;
        goto L8; // [315] 171
L9: // addr: 320 pc: 315 sub: 20837 op: 54
        ;
    }
    // SubProg find_opt pc: 320 op: STARTLINE (58)

    /** cmdline.e:841		if param_found then*/
    // SubProg find_opt pc: 322 op: IF (20)
    if (_param_found_20844 == 0)
    {
        goto L10; // [322] 388
    }
    else{
    }
    // SubProg find_opt pc: 325 op: STARTLINE (58)

    /** cmdline.e:842			if find( text:lower(opt_param), {"1", "on", "yes", "y", "true", "ok", "+"}) then*/
    // SubProg find_opt pc: 327 op: PROC (27)
    Ref(_opt_param_20843);
    _11947 = _20lower(_opt_param_20843);
    // SubProg find_opt pc: 331 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_10287);
    ((intptr_t*)_2)[1] = _10287;
    RefDS(_11948);
    ((intptr_t*)_2)[2] = _11948;
    RefDS(_11949);
    ((intptr_t*)_2)[3] = _11949;
    RefDS(_11950);
    ((intptr_t*)_2)[4] = _11950;
    RefDS(_11951);
    ((intptr_t*)_2)[5] = _11951;
    RefDS(_11952);
    ((intptr_t*)_2)[6] = _11952;
    RefDS(_11953);
    ((intptr_t*)_2)[7] = _11953;
    _11954 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 341 op: FIND_FROM (176)
    _11955 = find_from(_11947, _11954, 1);
    DeRef(_11947);
    _11947 = NOVALUE;
    DeRefDS(_11954);
    _11954 = NOVALUE;
    // SubProg find_opt pc: 346 op: IF (20)
    if (_11955 == 0)
    {
        _11955 = NOVALUE;
        goto L11; // [346] 357
    }
    else{
        _11955 = NOVALUE;
    }
    // SubProg find_opt pc: 349 op: STARTLINE (58)

    /** cmdline.e:843				opt_param = 1*/
    // SubProg find_opt pc: 351 op: ASSIGN (18)
    DeRef(_opt_param_20843);
    _opt_param_20843 = 1;
    // SubProg find_opt pc: 354 op: ELSE (23)
    goto L12; // [354] 387
    // SubProg find_opt pc: 356 op: NOP1 (159)
L11: // addr: 357 pc: 356 sub: 20837 op: 159
    // SubProg find_opt pc: 357 op: STARTLINE (58)

    /** cmdline.e:844			elsif find( text:lower(opt_param), {"0", "off", "no", "n", "false", "-"}) then*/
    // SubProg find_opt pc: 359 op: PROC (27)
    Ref(_opt_param_20843);
    _11956 = _20lower(_opt_param_20843);
    // SubProg find_opt pc: 363 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11957);
    ((intptr_t*)_2)[1] = _11957;
    RefDS(_11958);
    ((intptr_t*)_2)[2] = _11958;
    RefDS(_11959);
    ((intptr_t*)_2)[3] = _11959;
    RefDS(_11960);
    ((intptr_t*)_2)[4] = _11960;
    RefDS(_11961);
    ((intptr_t*)_2)[5] = _11961;
    RefDS(_11962);
    ((intptr_t*)_2)[6] = _11962;
    _11963 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 372 op: FIND_FROM (176)
    _11964 = find_from(_11956, _11963, 1);
    DeRef(_11956);
    _11956 = NOVALUE;
    DeRefDS(_11963);
    _11963 = NOVALUE;
    // SubProg find_opt pc: 377 op: IF (20)
    if (_11964 == 0)
    {
        _11964 = NOVALUE;
        goto L13; // [377] 386
    }
    else{
        _11964 = NOVALUE;
    }
    // SubProg find_opt pc: 380 op: STARTLINE (58)

    /** cmdline.e:845				opt_param = 0*/
    // SubProg find_opt pc: 382 op: ASSIGN (18)
    DeRef(_opt_param_20843);
    _opt_param_20843 = 0;
    // SubProg find_opt pc: 385 op: NOP1 (159)
L13: // addr: 386 pc: 385 sub: 20837 op: 159
    // SubProg find_opt pc: 386 op: NOP1 (159)
L12: // addr: 387 pc: 386 sub: 20837 op: 159
    // SubProg find_opt pc: 387 op: NOP1 (159)
L10: // addr: 388 pc: 387 sub: 20837 op: 159
    // SubProg find_opt pc: 388 op: STARTLINE (58)

    /** cmdline.e:849		for i = 1 to length(opts) do*/
    // SubProg find_opt pc: 390 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20839)){
            _11965 = SEQ_PTR(_opts_20839)->length;
    }
    else {
        _11965 = 1;
    }
    // SubProg find_opt pc: 393 op: FOR_I (125)
    {
        object _i_20935;
        _i_20935 = 1;
L14: // addr: 400 pc: 393 sub: 20837 op: 125
        if (_i_20935 > _11965){
            goto L15; // [393] 592
        }
        // SubProg find_opt pc: 400 op: STARTLINE (58)

        /** cmdline.e:850			if find(NO_CASE,  opts[i][OPTIONS]) then*/
        // SubProg find_opt pc: 402 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20839);
        _11966 = (object)*(((s1_ptr)_2)->base + _i_20935);
        // SubProg find_opt pc: 406 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11966);
        _11967 = (object)*(((s1_ptr)_2)->base + 4);
        _11966 = NOVALUE;
        // SubProg find_opt pc: 410 op: FIND_FROM (176)
        _11968 = find_from(105, _11967, 1);
        _11967 = NOVALUE;
        // SubProg find_opt pc: 415 op: IF (20)
        if (_11968 == 0)
        {
            _11968 = NOVALUE;
            goto L16; // [415] 455
        }
        else{
            _11968 = NOVALUE;
        }
        // SubProg find_opt pc: 418 op: STARTLINE (58)

        /** cmdline.e:851				if not equal( text:lower(opt_name), text:lower(opts[i][opt_style[1]])) then*/
        // SubProg find_opt pc: 420 op: PROC (27)
        RefDS(_opt_name_20842);
        _11969 = _20lower(_opt_name_20842);
        // SubProg find_opt pc: 424 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20839);
        _11970 = (object)*(((s1_ptr)_2)->base + _i_20935);
        // SubProg find_opt pc: 428 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_style_20840);
        _11971 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11970);
        if (!IS_ATOM_INT(_11971)){
            _11972 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_11971)->dbl));
        }
        else{
            _11972 = (object)*(((s1_ptr)_2)->base + _11971);
        }
        _11970 = NOVALUE;
        // SubProg find_opt pc: 436 op: PROC (27)
        Ref(_11972);
        _11973 = _20lower(_11972);
        _11972 = NOVALUE;
        // SubProg find_opt pc: 440 op: EQUAL (153)
        if (_11969 == _11973)
        _11974 = 1;
        else if (IS_ATOM_INT(_11969) && IS_ATOM_INT(_11973))
        _11974 = 0;
        else
        _11974 = (compare(_11969, _11973) == 0);
        DeRef(_11969);
        _11969 = NOVALUE;
        DeRef(_11973);
        _11973 = NOVALUE;
        // SubProg find_opt pc: 444 op: NOT_IFW (108)
        if (_11974 != 0)
        goto L17; // [444] 482
        _11974 = NOVALUE;
        // SubProg find_opt pc: 447 op: STARTLINE (58)

        /** cmdline.e:852					continue*/
        // SubProg find_opt pc: 449 op: ELSE (23)
        goto L18; // [449] 587
        // SubProg find_opt pc: 451 op: NOP1 (159)
        // SubProg find_opt pc: 452 op: ELSE (23)
        goto L17; // [452] 482
        // SubProg find_opt pc: 454 op: NOP1 (159)
L16: // addr: 455 pc: 454 sub: 20837 op: 159
        // SubProg find_opt pc: 455 op: STARTLINE (58)

        /** cmdline.e:855				if not equal(opt_name, opts[i][opt_style[1]]) then*/
        // SubProg find_opt pc: 457 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20839);
        _11976 = (object)*(((s1_ptr)_2)->base + _i_20935);
        // SubProg find_opt pc: 461 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_style_20840);
        _11977 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 465 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11976);
        if (!IS_ATOM_INT(_11977)){
            _11978 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_11977)->dbl));
        }
        else{
            _11978 = (object)*(((s1_ptr)_2)->base + _11977);
        }
        _11976 = NOVALUE;
        // SubProg find_opt pc: 469 op: EQUAL (153)
        if (_opt_name_20842 == _11978)
        _11979 = 1;
        else if (IS_ATOM_INT(_opt_name_20842) && IS_ATOM_INT(_11978))
        _11979 = 0;
        else
        _11979 = (compare(_opt_name_20842, _11978) == 0);
        _11978 = NOVALUE;
        // SubProg find_opt pc: 473 op: NOT_IFW (108)
        if (_11979 != 0)
        goto L19; // [473] 481
        _11979 = NOVALUE;
        // SubProg find_opt pc: 476 op: STARTLINE (58)

        /** cmdline.e:856					continue*/
        // SubProg find_opt pc: 478 op: ELSE (23)
        goto L18; // [478] 587
        // SubProg find_opt pc: 480 op: NOP1 (159)
L19: // addr: 481 pc: 480 sub: 20837 op: 159
        // SubProg find_opt pc: 481 op: NOP1 (159)
L17: // addr: 482 pc: 481 sub: 20837 op: 159
        // SubProg find_opt pc: 482 op: STARTLINE (58)

        /** cmdline.e:860			if find(HAS_PARAMETER,  opts[i][OPTIONS]) = 0 then*/
        // SubProg find_opt pc: 484 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20839);
        _11981 = (object)*(((s1_ptr)_2)->base + _i_20935);
        // SubProg find_opt pc: 488 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11981);
        _11982 = (object)*(((s1_ptr)_2)->base + 4);
        _11981 = NOVALUE;
        // SubProg find_opt pc: 492 op: FIND_FROM (176)
        _11983 = find_from(112, _11982, 1);
        _11982 = NOVALUE;
        // SubProg find_opt pc: 497 op: EQUALS_IFW_I (121)
        if (_11983 != 0)
        goto L1A; // [497] 518
        // SubProg find_opt pc: 501 op: STARTLINE (58)

        /** cmdline.e:861				if param_found then*/
        // SubProg find_opt pc: 503 op: IF (20)
        if (_param_found_20844 == 0)
        {
            goto L1B; // [503] 517
        }
        else{
        }
        // SubProg find_opt pc: 506 op: STARTLINE (58)

        /** cmdline.e:862					return {0, "Option should not have a parameter"}*/
        // SubProg find_opt pc: 508 op: RIGHT_BRACE_2 (85)
        RefDS(_11985);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 0;
        ((intptr_t *)_2)[2] = _11985;
        _11986 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 512 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20839
        DeRefDS(_opts_20839);

// block var opt_style_20840
        DeRefDS(_opt_style_20840);

// block var cmd_text_20841
        DeRef(_cmd_text_20841);

// block var opt_name_20842
        DeRef(_opt_name_20842);

// block var opt_param_20843
        DeRef(_opt_param_20843);

// block var param_found_20844

// block var reversed_20845
        DeRef(_11927);
        _11927 = NOVALUE;
        _11977 = NOVALUE;
        DeRef(_11925);
        _11925 = NOVALUE;
        DeRef(_11933);
        _11933 = NOVALUE;
        DeRef(_11906);
        _11906 = NOVALUE;
        _11971 = NOVALUE;
        DeRef(_11897);
        _11897 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        DeRef(_11942);
        _11942 = NOVALUE;
        return _11986;
        // SubProg find_opt pc: 516 op: NOP1 (159)
L1B: // addr: 517 pc: 516 sub: 20837 op: 159
        // SubProg find_opt pc: 517 op: NOP1 (159)
L1A: // addr: 518 pc: 517 sub: 20837 op: 159
        // SubProg find_opt pc: 518 op: STARTLINE (58)

        /** cmdline.e:866			if param_found then*/
        // SubProg find_opt pc: 520 op: IF (20)
        if (_param_found_20844 == 0)
        {
            goto L1C; // [520] 539
        }
        else{
        }
        // SubProg find_opt pc: 523 op: STARTLINE (58)

        /** cmdline.e:867				return {i, opt_name, reversed, opt_param}*/
        // SubProg find_opt pc: 525 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_20935;
        RefDS(_opt_name_20842);
        ((intptr_t*)_2)[2] = _opt_name_20842;
        ((intptr_t*)_2)[3] = _reversed_20845;
        Ref(_opt_param_20843);
        ((intptr_t*)_2)[4] = _opt_param_20843;
        _11987 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 532 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20839
        DeRefDS(_opts_20839);

// block var opt_style_20840
        DeRefDS(_opt_style_20840);

// block var cmd_text_20841
        DeRef(_cmd_text_20841);

// block var opt_name_20842
        DeRefDS(_opt_name_20842);

// block var opt_param_20843
        DeRef(_opt_param_20843);

// block var param_found_20844

// block var reversed_20845
        DeRef(_11927);
        _11927 = NOVALUE;
        _11977 = NOVALUE;
        DeRef(_11925);
        _11925 = NOVALUE;
        DeRef(_11933);
        _11933 = NOVALUE;
        DeRef(_11906);
        _11906 = NOVALUE;
        _11971 = NOVALUE;
        DeRef(_11986);
        _11986 = NOVALUE;
        DeRef(_11897);
        _11897 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        DeRef(_11942);
        _11942 = NOVALUE;
        return _11987;
        // SubProg find_opt pc: 536 op: ELSE (23)
        goto L1D; // [536] 585
        // SubProg find_opt pc: 538 op: NOP1 (159)
L1C: // addr: 539 pc: 538 sub: 20837 op: 159
        // SubProg find_opt pc: 539 op: STARTLINE (58)

        /** cmdline.e:869				if find(HAS_PARAMETER, opts[i][OPTIONS]) = 0 then*/
        // SubProg find_opt pc: 541 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20839);
        _11988 = (object)*(((s1_ptr)_2)->base + _i_20935);
        // SubProg find_opt pc: 545 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11988);
        _11989 = (object)*(((s1_ptr)_2)->base + 4);
        _11988 = NOVALUE;
        // SubProg find_opt pc: 549 op: FIND_FROM (176)
        _11990 = find_from(112, _11989, 1);
        _11989 = NOVALUE;
        // SubProg find_opt pc: 554 op: EQUALS_IFW_I (121)
        if (_11990 != 0)
        goto L1E; // [554] 572
        // SubProg find_opt pc: 558 op: STARTLINE (58)

        /** cmdline.e:870					return {i, opt_name, reversed, 1 }*/
        // SubProg find_opt pc: 560 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_20935;
        RefDS(_opt_name_20842);
        ((intptr_t*)_2)[2] = _opt_name_20842;
        ((intptr_t*)_2)[3] = _reversed_20845;
        ((intptr_t*)_2)[4] = 1;
        _11992 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 567 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20839
        DeRefDS(_opts_20839);

// block var opt_style_20840
        DeRefDS(_opt_style_20840);

// block var cmd_text_20841
        DeRef(_cmd_text_20841);

// block var opt_name_20842
        DeRefDS(_opt_name_20842);

// block var opt_param_20843
        DeRef(_opt_param_20843);

// block var param_found_20844

// block var reversed_20845
        DeRef(_11927);
        _11927 = NOVALUE;
        _11977 = NOVALUE;
        DeRef(_11925);
        _11925 = NOVALUE;
        DeRef(_11933);
        _11933 = NOVALUE;
        DeRef(_11906);
        _11906 = NOVALUE;
        _11971 = NOVALUE;
        DeRef(_11986);
        _11986 = NOVALUE;
        DeRef(_11897);
        _11897 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        DeRef(_11987);
        _11987 = NOVALUE;
        DeRef(_11942);
        _11942 = NOVALUE;
        return _11992;
        // SubProg find_opt pc: 571 op: NOP1 (159)
L1E: // addr: 572 pc: 571 sub: 20837 op: 159
        // SubProg find_opt pc: 572 op: STARTLINE (58)

        /** cmdline.e:873				return {i, opt_name, reversed}*/
        // SubProg find_opt pc: 574 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_20935;
        RefDS(_opt_name_20842);
        ((intptr_t*)_2)[2] = _opt_name_20842;
        ((intptr_t*)_2)[3] = _reversed_20845;
        _11993 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 580 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20839
        DeRefDS(_opts_20839);

// block var opt_style_20840
        DeRefDS(_opt_style_20840);

// block var cmd_text_20841
        DeRef(_cmd_text_20841);

// block var opt_name_20842
        DeRefDS(_opt_name_20842);

// block var opt_param_20843
        DeRef(_opt_param_20843);

// block var param_found_20844

// block var reversed_20845
        DeRef(_11927);
        _11927 = NOVALUE;
        _11977 = NOVALUE;
        DeRef(_11925);
        _11925 = NOVALUE;
        DeRef(_11933);
        _11933 = NOVALUE;
        DeRef(_11906);
        _11906 = NOVALUE;
        _11971 = NOVALUE;
        DeRef(_11986);
        _11986 = NOVALUE;
        DeRef(_11897);
        _11897 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        DeRef(_11987);
        _11987 = NOVALUE;
        DeRef(_11942);
        _11942 = NOVALUE;
        DeRef(_11992);
        _11992 = NOVALUE;
        return _11993;
        // SubProg find_opt pc: 584 op: NOP1 (159)
L1D: // addr: 585 pc: 584 sub: 20837 op: 159
        // SubProg find_opt pc: 585 op: STARTLINE (58)

        /** cmdline.e:875		end for*/
        // SubProg find_opt pc: 587 op: ENDFOR_INT_UP1 (54)
L18: // addr: 587 pc: 587 sub: 20837 op: 54
        _i_20935 = _i_20935 + 1;
        goto L14; // [587] 400
L15: // addr: 592 pc: 587 sub: 20837 op: 54
        ;
    }
    // SubProg find_opt pc: 592 op: STARTLINE (58)

    /** cmdline.e:877		return {0, "Unrecognised"}*/
    // SubProg find_opt pc: 594 op: RIGHT_BRACE_2 (85)
    RefDS(_11994);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _11994;
    _11995 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 598 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20839
    DeRefDS(_opts_20839);

// block var opt_style_20840
    DeRefDS(_opt_style_20840);

// block var cmd_text_20841
    DeRef(_cmd_text_20841);

// block var opt_name_20842
    DeRef(_opt_name_20842);

// block var opt_param_20843
    DeRef(_opt_param_20843);

// block var param_found_20844

// block var reversed_20845
    DeRef(_11927);
    _11927 = NOVALUE;
    _11977 = NOVALUE;
    DeRef(_11925);
    _11925 = NOVALUE;
    DeRef(_11933);
    _11933 = NOVALUE;
    DeRef(_11906);
    _11906 = NOVALUE;
    _11971 = NOVALUE;
    DeRef(_11986);
    _11986 = NOVALUE;
    DeRef(_11897);
    _11897 = NOVALUE;
    DeRef(_11918);
    _11918 = NOVALUE;
    DeRef(_11987);
    _11987 = NOVALUE;
    DeRef(_11942);
    _11942 = NOVALUE;
    DeRef(_11993);
    _11993 = NOVALUE;
    DeRef(_11992);
    _11992 = NOVALUE;
    return _11995;
    // SubProg find_opt pc: 602 op: BADRETURNF (43)
    ;
}


object _48get_help_options(object _opts_20978)
{
    object _help_opts_20979 = NOVALUE;
// skipping _12019  name type: 0
    object _12018 = NOVALUE; // 21010 12018
    object _12017 = NOVALUE; // 21009 12017
    object _12016 = NOVALUE; // 21008 12016
// skipping _12015  name type: 0
    object _12014 = NOVALUE; // 21004 12014
    object _12013 = NOVALUE; // 21003 12013
    object _12012 = NOVALUE; // 21002 12012
// skipping _12011  name type: 0
    object _12010 = NOVALUE; // 20999 12010
    object _12009 = NOVALUE; // 20998 12009
    object _12008 = NOVALUE; // 20997 12008
    object _12007 = NOVALUE; // 20996 12007
    object _12006 = NOVALUE; // 20995 12006
// skipping _12005  name type: 0
    object _12004 = NOVALUE; // 20992 12004
    object _12003 = NOVALUE; // 20991 12003
    object _12002 = NOVALUE; // 20990 12002
    object _12001 = NOVALUE; // 20989 12001
    object _12000 = NOVALUE; // 20988 12000
    object _11999 = NOVALUE; // 20986 11999
    object _11998 = NOVALUE; // 20985 11998
    object _11997 = NOVALUE; // 20984 11997
    object _11996 = NOVALUE; // 20982 11996
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_help_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_help_options pc: 3 op: STARTLINE (58)

    /** cmdline.e:881		sequence help_opts = {}*/
    // SubProg get_help_options pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_help_opts_20979);
    _help_opts_20979 = _5;
    // SubProg get_help_options pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg get_help_options pc: 10 op: STARTLINE (58)

    /** cmdline.e:883		for i = 1 to length(opts) do*/
    // SubProg get_help_options pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20978)){
            _11996 = SEQ_PTR(_opts_20978)->length;
    }
    else {
        _11996 = 1;
    }
    // SubProg get_help_options pc: 15 op: FOR_I (125)
    {
        object _i_20981;
        _i_20981 = 1;
L1: // addr: 22 pc: 15 sub: 20976 op: 125
        if (_i_20981 > _11996){
            goto L2; // [15] 170
        }
        // SubProg get_help_options pc: 22 op: STARTLINE (58)

        /** cmdline.e:884			if find(HELP, opts[i][OPTIONS]) then*/
        // SubProg get_help_options pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20978);
        _11997 = (object)*(((s1_ptr)_2)->base + _i_20981);
        // SubProg get_help_options pc: 28 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11997);
        _11998 = (object)*(((s1_ptr)_2)->base + 4);
        _11997 = NOVALUE;
        // SubProg get_help_options pc: 32 op: FIND_FROM (176)
        _11999 = find_from(104, _11998, 1);
        _11998 = NOVALUE;
        // SubProg get_help_options pc: 37 op: IF (20)
        if (_11999 == 0)
        {
            _11999 = NOVALUE;
            goto L3; // [37] 163
        }
        else{
            _11999 = NOVALUE;
        }
        // SubProg get_help_options pc: 40 op: STARTLINE (58)

        /** cmdline.e:885				if sequence(opts[i][SHORTNAME]) then*/
        // SubProg get_help_options pc: 42 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20978);
        _12000 = (object)*(((s1_ptr)_2)->base + _i_20981);
        // SubProg get_help_options pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12000);
        _12001 = (object)*(((s1_ptr)_2)->base + 1);
        _12000 = NOVALUE;
        // SubProg get_help_options pc: 50 op: IS_A_SEQUENCE (68)
        _12002 = IS_SEQUENCE(_12001);
        _12001 = NOVALUE;
        // SubProg get_help_options pc: 53 op: IF (20)
        if (_12002 == 0)
        {
            _12002 = NOVALUE;
            goto L4; // [53] 71
        }
        else{
            _12002 = NOVALUE;
        }
        // SubProg get_help_options pc: 56 op: STARTLINE (58)

        /** cmdline.e:886					help_opts = append(help_opts, opts[i][SHORTNAME])*/
        // SubProg get_help_options pc: 58 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20978);
        _12003 = (object)*(((s1_ptr)_2)->base + _i_20981);
        // SubProg get_help_options pc: 62 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12003);
        _12004 = (object)*(((s1_ptr)_2)->base + 1);
        _12003 = NOVALUE;
        // SubProg get_help_options pc: 66 op: APPEND (35)
        Ref(_12004);
        Append(&_help_opts_20979, _help_opts_20979, _12004);
        _12004 = NOVALUE;
        // SubProg get_help_options pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 20976 op: 159
        // SubProg get_help_options pc: 71 op: STARTLINE (58)

        /** cmdline.e:889				if sequence(opts[i][LONGNAME]) then*/
        // SubProg get_help_options pc: 73 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20978);
        _12006 = (object)*(((s1_ptr)_2)->base + _i_20981);
        // SubProg get_help_options pc: 77 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12006);
        _12007 = (object)*(((s1_ptr)_2)->base + 2);
        _12006 = NOVALUE;
        // SubProg get_help_options pc: 81 op: IS_A_SEQUENCE (68)
        _12008 = IS_SEQUENCE(_12007);
        _12007 = NOVALUE;
        // SubProg get_help_options pc: 84 op: IF (20)
        if (_12008 == 0)
        {
            _12008 = NOVALUE;
            goto L5; // [84] 102
        }
        else{
            _12008 = NOVALUE;
        }
        // SubProg get_help_options pc: 87 op: STARTLINE (58)

        /** cmdline.e:890					help_opts = append(help_opts, opts[i][LONGNAME])*/
        // SubProg get_help_options pc: 89 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20978);
        _12009 = (object)*(((s1_ptr)_2)->base + _i_20981);
        // SubProg get_help_options pc: 93 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12009);
        _12010 = (object)*(((s1_ptr)_2)->base + 2);
        _12009 = NOVALUE;
        // SubProg get_help_options pc: 97 op: APPEND (35)
        Ref(_12010);
        Append(&_help_opts_20979, _help_opts_20979, _12010);
        _12010 = NOVALUE;
        // SubProg get_help_options pc: 101 op: NOP1 (159)
L5: // addr: 102 pc: 101 sub: 20976 op: 159
        // SubProg get_help_options pc: 102 op: STARTLINE (58)

        /** cmdline.e:893				if find(NO_CASE, opts[i][OPTIONS]) then*/
        // SubProg get_help_options pc: 104 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20978);
        _12012 = (object)*(((s1_ptr)_2)->base + _i_20981);
        // SubProg get_help_options pc: 108 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12012);
        _12013 = (object)*(((s1_ptr)_2)->base + 4);
        _12012 = NOVALUE;
        // SubProg get_help_options pc: 112 op: FIND_FROM (176)
        _12014 = find_from(105, _12013, 1);
        _12013 = NOVALUE;
        // SubProg get_help_options pc: 117 op: IF (20)
        if (_12014 == 0)
        {
            _12014 = NOVALUE;
            goto L6; // [117] 162
        }
        else{
            _12014 = NOVALUE;
        }
        // SubProg get_help_options pc: 120 op: STARTLINE (58)

        /** cmdline.e:894					help_opts = text:lower(help_opts)*/
        // SubProg get_help_options pc: 122 op: PROC (27)
        RefDS(_help_opts_20979);
        _0 = _help_opts_20979;
        _help_opts_20979 = _20lower(_help_opts_20979);
        DeRefDS(_0);
        // SubProg get_help_options pc: 126 op: SEQUENCE_CHECK (97)
        // SubProg get_help_options pc: 128 op: STARTLINE (58)

        /** cmdline.e:895					for j = 1 to length(help_opts) do*/
        // SubProg get_help_options pc: 130 op: LENGTH (42)
        if (IS_SEQUENCE(_help_opts_20979)){
                _12016 = SEQ_PTR(_help_opts_20979)->length;
        }
        else {
            _12016 = 1;
        }
        // SubProg get_help_options pc: 133 op: FOR_I (125)
        {
            object _j_21007;
            _j_21007 = 1;
L7: // addr: 140 pc: 133 sub: 20976 op: 125
            if (_j_21007 > _12016){
                goto L8; // [133] 161
            }
            // SubProg get_help_options pc: 140 op: STARTLINE (58)

            /** cmdline.e:896						help_opts = append( help_opts, text:upper(help_opts[j]) )*/
            // SubProg get_help_options pc: 142 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_help_opts_20979);
            _12017 = (object)*(((s1_ptr)_2)->base + _j_21007);
            // SubProg get_help_options pc: 146 op: PROC (27)
            Ref(_12017);
            _12018 = _20upper(_12017);
            _12017 = NOVALUE;
            // SubProg get_help_options pc: 150 op: APPEND (35)
            Ref(_12018);
            Append(&_help_opts_20979, _help_opts_20979, _12018);
            DeRef(_12018);
            _12018 = NOVALUE;
            // SubProg get_help_options pc: 154 op: STARTLINE (58)

            /** cmdline.e:897					end for*/
            // SubProg get_help_options pc: 156 op: ENDFOR_INT_UP1 (54)
            _j_21007 = _j_21007 + 1;
            goto L7; // [156] 140
L8: // addr: 161 pc: 156 sub: 20976 op: 54
            ;
        }
        // SubProg get_help_options pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 20976 op: 159
        // SubProg get_help_options pc: 162 op: NOP1 (159)
L3: // addr: 163 pc: 162 sub: 20976 op: 159
        // SubProg get_help_options pc: 163 op: STARTLINE (58)

        /** cmdline.e:900		end for*/
        // SubProg get_help_options pc: 165 op: ENDFOR_INT_UP1 (54)
        _i_20981 = _i_20981 + 1;
        goto L1; // [165] 22
L2: // addr: 170 pc: 165 sub: 20976 op: 54
        ;
    }
    // SubProg get_help_options pc: 170 op: STARTLINE (58)

    /** cmdline.e:901		return help_opts*/
    // SubProg get_help_options pc: 172 op: RETURNF (28)

// Exiting block BLOCK: get_help_options

// block var opts_20978
    DeRefDS(_opts_20978);
    return _help_opts_20979;
    // SubProg get_help_options pc: 176 op: BADRETURNF (43)
    ;
}


object _48parse_at_cmds(object _cmd_21014, object _cmds_21015, object _opts_21016, object _arg_idx_21017, object _add_help_rid_21018, object _parse_options_21019, object _help_on_error_21020, object _auto_help_21021)
{
    object _at_cmds_21022 = NOVALUE;
    object _j_21023 = NOVALUE;
    object _cmdex_21107 = NOVALUE;
// skipping _12101  name type: 0
// skipping _12100  name type: 0
    object _12099 = NOVALUE; // 21115 12099
    object _12098 = NOVALUE; // 21114 12098
// skipping _12097  name type: 0
// skipping _12096  name type: 0
    object _12095 = NOVALUE; // 21111 12095
    object _12094 = NOVALUE; // 21110 12094
    object _12093 = NOVALUE; // 21109 12093
    object _12092 = NOVALUE; // 21108 12092
    object _12091 = NOVALUE; // 21106 12091
    object _12090 = NOVALUE; // 21105 12090
    object _12089 = NOVALUE; // 21104 12089
    object _12088 = NOVALUE; // 21103 12088
    object _12087 = NOVALUE; // 21102 12087
    object _12086 = NOVALUE; // 21101 12086
    object _12085 = NOVALUE; // 21100 12085
    object _12084 = NOVALUE; // 21099 12084
    object _12083 = NOVALUE; // 21098 12083
    object _12082 = NOVALUE; // 21097 12082
    object _12081 = NOVALUE; // 21096 12081
    object _12080 = NOVALUE; // 21095 12080
    object _12079 = NOVALUE; // 21093 12079
    object _12078 = NOVALUE; // 21092 12078
    object _12077 = NOVALUE; // 21091 12077
    object _12076 = NOVALUE; // 21090 12076
    object _12075 = NOVALUE; // 21089 12075
    object _12074 = NOVALUE; // 21088 12074
    object _12073 = NOVALUE; // 21087 12073
    object _12072 = NOVALUE; // 21086 12072
    object _12071 = NOVALUE; // 21085 12071
    object _12070 = NOVALUE; // 21084 12070
    object _12069 = NOVALUE; // 21083 12069
    object _12068 = NOVALUE; // 21082 12068
    object _12067 = NOVALUE; // 21081 12067
    object _12066 = NOVALUE; // 21080 12066
    object _12065 = NOVALUE; // 21079 12065
    object _12064 = NOVALUE; // 21078 12064
// skipping _12063  name type: 0
// skipping _12062  name type: 0
    object _12061 = NOVALUE; // 21074 12061
    object _12060 = NOVALUE; // 21073 12060
    object _12059 = NOVALUE; // 21072 12059
    object _12058 = NOVALUE; // 21071 12058
    object _12057 = NOVALUE; // 21070 12057
// skipping _12056  name type: 0
    object _12055 = NOVALUE; // 21068 12055
    object _12054 = NOVALUE; // 21067 12054
// skipping _12053  name type: 0
// skipping _12052  name type: 0
    object _12051 = NOVALUE; // 21063 12051
    object _12050 = NOVALUE; // 21062 12050
    object _12049 = NOVALUE; // 21061 12049
    object _12048 = NOVALUE; // 21060 12048
    object _12047 = NOVALUE; // 21059 12047
// skipping _12046  name type: 0
    object _12045 = NOVALUE; // 21057 12045
    object _12044 = NOVALUE; // 21056 12044
    object _12043 = NOVALUE; // 21054 12043
    object _12042 = NOVALUE; // 21053 12042
// skipping _12041  name type: 0
// skipping _12040  name type: 0
    object _12039 = NOVALUE; // 21050 12039
    object _12037 = NOVALUE; // 21045 12037
    object _12036 = NOVALUE; // 21044 12036
    object _12035 = NOVALUE; // 21043 12035
    object _12033 = NOVALUE; // 21041 12033
// skipping _12032  name type: 0
    object _12031 = NOVALUE; // 21038 12031
    object _12030 = NOVALUE; // 21037 12030
// skipping _12029  name type: 0
    object _12028 = NOVALUE; // 21034 12028
// skipping _12027  name type: 0
    object _12026 = NOVALUE; // 21031 12026
    object _12025 = NOVALUE; // 21030 12025
    object _12024 = NOVALUE; // 21029 12024
    object _12023 = NOVALUE; // 21028 12023
    object _12022 = NOVALUE; // 21027 12022
    object _12021 = NOVALUE; // 21026 12021
    object _12020 = NOVALUE; // 21025 12020
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg parse_at_cmds pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg parse_at_cmds pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg parse_at_cmds pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg parse_at_cmds pc: 7 op: INTEGER_CHECK (96)
    // SubProg parse_at_cmds pc: 9 op: INTEGER_CHECK (96)
    // SubProg parse_at_cmds pc: 11 op: INTEGER_CHECK (96)
    // SubProg parse_at_cmds pc: 13 op: STARTLINE (58)

    /** cmdline.e:912		if length(cmd) > 2 and cmd[2] = '@' then*/
    // SubProg parse_at_cmds pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21014)){
            _12020 = SEQ_PTR(_cmd_21014)->length;
    }
    else {
        _12020 = 1;
    }
    // SubProg parse_at_cmds pc: 18 op: GREATER (6)
    _12021 = (_12020 > 2);
    _12020 = NOVALUE;
    // SubProg parse_at_cmds pc: 22 op: SC1_AND_IF (146)
    if (_12021 == 0) {
        goto L1; // [22] 78
    }
    // SubProg parse_at_cmds pc: 26 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_21014);
    _12023 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg parse_at_cmds pc: 30 op: EQUALS (3)
    if (IS_ATOM_INT(_12023)) {
        _12024 = (_12023 == 64);
    }
    else {
        _12024 = binary_op(EQUALS, _12023, 64);
    }
    _12023 = NOVALUE;
    // SubProg parse_at_cmds pc: 34 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 35 op: IF (20)
    if (_12024 == 0) {
        DeRef(_12024);
        _12024 = NOVALUE;
        goto L1; // [35] 78
    }
    else {
        if (!IS_ATOM_INT(_12024) && DBL_PTR(_12024)->dbl == 0.0){
            DeRef(_12024);
            _12024 = NOVALUE;
            goto L1; // [35] 78
        }
        DeRef(_12024);
        _12024 = NOVALUE;
    }
    DeRef(_12024);
    _12024 = NOVALUE;
    // SubProg parse_at_cmds pc: 38 op: STARTLINE (58)

    /** cmdline.e:914			at_cmds = io:read_lines(cmd[3..$])*/
    // SubProg parse_at_cmds pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21014)){
            _12025 = SEQ_PTR(_cmd_21014)->length;
    }
    else {
        _12025 = 1;
    }
    // SubProg parse_at_cmds pc: 43 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12026;
    RHS_Slice(_cmd_21014, 3, _12025);
    // SubProg parse_at_cmds pc: 48 op: PROC (27)
    _0 = _at_cmds_21022;
    _at_cmds_21022 = _19read_lines(_12026);
    DeRef(_0);
    _12026 = NOVALUE;
    // SubProg parse_at_cmds pc: 52 op: STARTLINE (58)

    /** cmdline.e:915			if equal(at_cmds, -1) then*/
    // SubProg parse_at_cmds pc: 54 op: EQUAL (153)
    if (_at_cmds_21022 == -1)
    _12028 = 1;
    else if (IS_ATOM_INT(_at_cmds_21022) && IS_ATOM_INT(-1))
    _12028 = 0;
    else
    _12028 = (compare(_at_cmds_21022, -1) == 0);
    // SubProg parse_at_cmds pc: 58 op: IF (20)
    if (_12028 == 0)
    {
        _12028 = NOVALUE;
        goto L2; // [58] 156
    }
    else{
        _12028 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 61 op: STARTLINE (58)

    /** cmdline.e:918				cmds = eu:remove(cmds, arg_idx)*/
    // SubProg parse_at_cmds pc: 63 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_cmds_21015);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_arg_idx_21017)) ? _arg_idx_21017 : (object)(DBL_PTR(_arg_idx_21017)->dbl);
        int stop = (IS_ATOM_INT(_arg_idx_21017)) ? _arg_idx_21017 : (object)(DBL_PTR(_arg_idx_21017)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_cmds_21015), start, &_cmds_21015 );
            }
            else Tail(SEQ_PTR(_cmds_21015), stop+1, &_cmds_21015);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_cmds_21015), start, &_cmds_21015);
        }
        else {
            assign_slice_seq = &assign_space;
            _cmds_21015 = Remove_elements(start, stop, (SEQ_PTR(_cmds_21015)->ref == 1));
        }
    }
    // SubProg parse_at_cmds pc: 68 op: STARTLINE (58)

    /** cmdline.e:919				return cmds*/
    // SubProg parse_at_cmds pc: 70 op: RETURNF (28)

// Exiting block BLOCK: parse_at_cmds

// block var cmd_21014
    DeRefDS(_cmd_21014);

// block var opts_21016
    DeRefDS(_opts_21016);

// block var arg_idx_21017

// block var add_help_rid_21018
    DeRef(_add_help_rid_21018);

// block var parse_options_21019
    DeRef(_parse_options_21019);

// block var help_on_error_21020

// block var auto_help_21021

// block var at_cmds_21022
    DeRef(_at_cmds_21022);

// block var j_21023
    DeRef(_12021);
    _12021 = NOVALUE;
    return _cmds_21015;
    // SubProg parse_at_cmds pc: 74 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 75 op: ELSE (23)
    goto L2; // [75] 156
    // SubProg parse_at_cmds pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 78 op: STARTLINE (58)

    /** cmdline.e:923			at_cmds = io:read_lines(cmd[2..$])*/
    // SubProg parse_at_cmds pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21014)){
            _12030 = SEQ_PTR(_cmd_21014)->length;
    }
    else {
        _12030 = 1;
    }
    // SubProg parse_at_cmds pc: 83 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12031;
    RHS_Slice(_cmd_21014, 2, _12030);
    // SubProg parse_at_cmds pc: 88 op: PROC (27)
    _0 = _at_cmds_21022;
    _at_cmds_21022 = _19read_lines(_12031);
    DeRef(_0);
    _12031 = NOVALUE;
    // SubProg parse_at_cmds pc: 92 op: STARTLINE (58)

    /** cmdline.e:924			if equal(at_cmds, -1) then*/
    // SubProg parse_at_cmds pc: 94 op: EQUAL (153)
    if (_at_cmds_21022 == -1)
    _12033 = 1;
    else if (IS_ATOM_INT(_at_cmds_21022) && IS_ATOM_INT(-1))
    _12033 = 0;
    else
    _12033 = (compare(_at_cmds_21022, -1) == 0);
    // SubProg parse_at_cmds pc: 98 op: IF (20)
    if (_12033 == 0)
    {
        _12033 = NOVALUE;
        goto L3; // [98] 155
    }
    else{
        _12033 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 101 op: STARTLINE (58)

    /** cmdline.e:925				printf(2, "Cannot access '@' argument file '%s'\n", {cmd[2..$]})*/
    // SubProg parse_at_cmds pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21014)){
            _12035 = SEQ_PTR(_cmd_21014)->length;
    }
    else {
        _12035 = 1;
    }
    // SubProg parse_at_cmds pc: 106 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12036;
    RHS_Slice(_cmd_21014, 2, _12035);
    // SubProg parse_at_cmds pc: 111 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12036;
    _12037 = MAKE_SEQ(_1);
    _12036 = NOVALUE;
    // SubProg parse_at_cmds pc: 115 op: PRINTF (38)
    EPrintf(2, _12034, _12037);
    DeRefDS(_12037);
    _12037 = NOVALUE;
    // SubProg parse_at_cmds pc: 119 op: STARTLINE (58)

    /** cmdline.e:926				if help_on_error then*/
    // SubProg parse_at_cmds pc: 121 op: IF (20)
    if (_help_on_error_21020 == 0)
    {
        goto L4; // [121] 136
    }
    else{
    }
    // SubProg parse_at_cmds pc: 124 op: STARTLINE (58)

    /** cmdline.e:927					local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_at_cmds pc: 126 op: PROC (27)
    RefDS(_opts_21016);
    Ref(_add_help_rid_21018);
    RefDS(_cmds_21015);
    Ref(_parse_options_21019);
    _48local_help(_opts_21016, _add_help_rid_21018, _cmds_21015, 1, _parse_options_21019);
    // SubProg parse_at_cmds pc: 133 op: ELSE (23)
    goto L5; // [133] 149
    // SubProg parse_at_cmds pc: 135 op: NOP1 (159)
L4: // addr: 136 pc: 135 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 136 op: STARTLINE (58)

    /** cmdline.e:928				elsif auto_help then*/
    // SubProg parse_at_cmds pc: 138 op: IF (20)
    if (_auto_help_21021 == 0)
    {
        goto L6; // [138] 148
    }
    else{
    }
    // SubProg parse_at_cmds pc: 141 op: STARTLINE (58)

    /** cmdline.e:929					printf(2,"Try '--help' for more information.\n",{})          */
    // SubProg parse_at_cmds pc: 143 op: PRINTF (38)
    EPrintf(2, _12038, _5);
    // SubProg parse_at_cmds pc: 147 op: NOP1 (159)
L6: // addr: 148 pc: 147 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 148 op: NOP1 (159)
L5: // addr: 149 pc: 148 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 149 op: STARTLINE (58)

    /** cmdline.e:931				local_abort(1)*/
    // SubProg parse_at_cmds pc: 151 op: PROC (27)
    _48local_abort(1);
    // SubProg parse_at_cmds pc: 154 op: NOP1 (159)
L3: // addr: 155 pc: 154 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 155 op: NOP1 (159)
L2: // addr: 156 pc: 155 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 156 op: STARTLINE (58)

    /** cmdline.e:936		j = 0*/
    // SubProg parse_at_cmds pc: 158 op: ASSIGN_I (113)
    _j_21023 = 0;
    // SubProg parse_at_cmds pc: 161 op: STARTLINE (58)

    /** cmdline.e:937		while j < length(at_cmds) do*/
    // SubProg parse_at_cmds pc: 163 op: NOP2 (110)
    // SubProg parse_at_cmds pc: 165 op: NOPWHILE (158)
L7: // addr: 166 pc: 165 sub: 21012 op: 158
    // SubProg parse_at_cmds pc: 166 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_at_cmds pc: 168 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_21022)){
            _12039 = SEQ_PTR(_at_cmds_21022)->length;
    }
    else {
        _12039 = 1;
    }
    // SubProg parse_at_cmds pc: 171 op: LESS_IFW_I (119)
    if (_j_21023 >= _12039)
    goto L8; // [171] 492
    // SubProg parse_at_cmds pc: 175 op: STARTLINE (58)

    /** cmdline.e:938			j += 1*/
    // SubProg parse_at_cmds pc: 177 op: PLUS1_I (117)
    _j_21023 = _j_21023 + 1;
    // SubProg parse_at_cmds pc: 181 op: STARTLINE (58)

    /** cmdline.e:939			at_cmds[j] = text:trim(at_cmds[j])*/
    // SubProg parse_at_cmds pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12042 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 187 op: PROC (27)
    Ref(_12042);
    RefDS(_3069);
    _12043 = _20trim(_12042, _3069, 0);
    _12042 = NOVALUE;
    // SubProg parse_at_cmds pc: 193 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_21022 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_21023);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _12043;
    if( _1 != _12043 ){
        DeRef(_1);
    }
    _12043 = NOVALUE;
    // SubProg parse_at_cmds pc: 197 op: STARTLINE (58)

    /** cmdline.e:940			if length(at_cmds[j]) = 0 then*/
    // SubProg parse_at_cmds pc: 199 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12044 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 203 op: LENGTH (42)
    if (IS_SEQUENCE(_12044)){
            _12045 = SEQ_PTR(_12044)->length;
    }
    else {
        _12045 = 1;
    }
    _12044 = NOVALUE;
    // SubProg parse_at_cmds pc: 206 op: EQUALS_IFW_I (121)
    if (_12045 != 0)
    goto L9; // [206] 246
    // SubProg parse_at_cmds pc: 210 op: STARTLINE (58)

    /** cmdline.e:941				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    // SubProg parse_at_cmds pc: 212 op: MINUS (10)
    _12047 = _j_21023 - 1;
    // SubProg parse_at_cmds pc: 216 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12048;
    RHS_Slice(_at_cmds_21022, 1, _12047);
    // SubProg parse_at_cmds pc: 221 op: PLUS1 (93)
    _12049 = _j_21023 + 1;
    if (_12049 > MAXINT){
        _12049 = NewDouble((eudouble)_12049);
    }
    // SubProg parse_at_cmds pc: 225 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_21022)){
            _12050 = SEQ_PTR(_at_cmds_21022)->length;
    }
    else {
        _12050 = 1;
    }
    // SubProg parse_at_cmds pc: 228 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12051;
    RHS_Slice(_at_cmds_21022, _12049, _12050);
    // SubProg parse_at_cmds pc: 233 op: CONCAT (15)
    Concat((object_ptr)&_at_cmds_21022, _12048, _12051);
    DeRefDS(_12048);
    _12048 = NOVALUE;
    DeRef(_12048);
    _12048 = NOVALUE;
    DeRefDS(_12051);
    _12051 = NOVALUE;
    // SubProg parse_at_cmds pc: 237 op: STARTLINE (58)

    /** cmdline.e:942				j -= 1*/
    // SubProg parse_at_cmds pc: 239 op: MINUS_I (116)
    _j_21023 = _j_21023 - 1;
    // SubProg parse_at_cmds pc: 243 op: ELSE (23)
    goto L7; // [243] 166
    // SubProg parse_at_cmds pc: 245 op: NOP1 (159)
L9: // addr: 246 pc: 245 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 246 op: STARTLINE (58)

    /** cmdline.e:944			elsif at_cmds[j][1] = '#' then*/
    // SubProg parse_at_cmds pc: 248 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12054 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12054);
    _12055 = (object)*(((s1_ptr)_2)->base + 1);
    _12054 = NOVALUE;
    // SubProg parse_at_cmds pc: 256 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12055, 35)){
        _12055 = NOVALUE;
        goto LA; // [256] 296
    }
    _12055 = NOVALUE;
    // SubProg parse_at_cmds pc: 260 op: STARTLINE (58)

    /** cmdline.e:945				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    // SubProg parse_at_cmds pc: 262 op: MINUS (10)
    _12057 = _j_21023 - 1;
    // SubProg parse_at_cmds pc: 266 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12058;
    RHS_Slice(_at_cmds_21022, 1, _12057);
    // SubProg parse_at_cmds pc: 271 op: PLUS1 (93)
    _12059 = _j_21023 + 1;
    if (_12059 > MAXINT){
        _12059 = NewDouble((eudouble)_12059);
    }
    // SubProg parse_at_cmds pc: 275 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_21022)){
            _12060 = SEQ_PTR(_at_cmds_21022)->length;
    }
    else {
        _12060 = 1;
    }
    // SubProg parse_at_cmds pc: 278 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12061;
    RHS_Slice(_at_cmds_21022, _12059, _12060);
    // SubProg parse_at_cmds pc: 283 op: CONCAT (15)
    Concat((object_ptr)&_at_cmds_21022, _12058, _12061);
    DeRefDS(_12058);
    _12058 = NOVALUE;
    DeRef(_12058);
    _12058 = NOVALUE;
    DeRefDS(_12061);
    _12061 = NOVALUE;
    // SubProg parse_at_cmds pc: 287 op: STARTLINE (58)

    /** cmdline.e:946				j -= 1*/
    // SubProg parse_at_cmds pc: 289 op: MINUS_I (116)
    _j_21023 = _j_21023 - 1;
    // SubProg parse_at_cmds pc: 293 op: ELSE (23)
    goto L7; // [293] 166
    // SubProg parse_at_cmds pc: 295 op: NOP1 (159)
LA: // addr: 296 pc: 295 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 296 op: STARTLINE (58)

    /** cmdline.e:948			elsif at_cmds[j][1] = '"' and at_cmds[j][$] = '"' and length(at_cmds[j]) >= 2 then*/
    // SubProg parse_at_cmds pc: 298 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12064 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 302 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12064);
    _12065 = (object)*(((s1_ptr)_2)->base + 1);
    _12064 = NOVALUE;
    // SubProg parse_at_cmds pc: 306 op: EQUALS (3)
    if (IS_ATOM_INT(_12065)) {
        _12066 = (_12065 == 34);
    }
    else {
        _12066 = binary_op(EQUALS, _12065, 34);
    }
    _12065 = NOVALUE;
    // SubProg parse_at_cmds pc: 310 op: SC1_AND (141)
    if (IS_ATOM_INT(_12066)) {
        if (_12066 == 0) {
            DeRef(_12067);
            _12067 = 0;
            goto LB; // [310] 333
        }
    }
    else {
        if (DBL_PTR(_12066)->dbl == 0.0) {
            DeRef(_12067);
            _12067 = 0;
            goto LB; // [310] 333
        }
    }
    // SubProg parse_at_cmds pc: 314 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12068 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 318 op: LENGTH (42)
    if (IS_SEQUENCE(_12068)){
            _12069 = SEQ_PTR(_12068)->length;
    }
    else {
        _12069 = 1;
    }
    // SubProg parse_at_cmds pc: 321 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12068);
    _12070 = (object)*(((s1_ptr)_2)->base + _12069);
    _12068 = NOVALUE;
    // SubProg parse_at_cmds pc: 325 op: EQUALS (3)
    if (IS_ATOM_INT(_12070)) {
        _12071 = (_12070 == 34);
    }
    else {
        _12071 = binary_op(EQUALS, _12070, 34);
    }
    _12070 = NOVALUE;
    // SubProg parse_at_cmds pc: 329 op: SC2_AND (142)
    DeRef(_12067);
    if (IS_ATOM_INT(_12071))
    _12067 = (_12071 != 0);
    else
    _12067 = DBL_PTR(_12071)->dbl != 0.0;
    // SubProg parse_at_cmds pc: 332 op: NOP1 (159)
LB: // addr: 333 pc: 332 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 333 op: SC1_AND_IF (146)
    if (_12067 == 0) {
        goto LC; // [333] 377
    }
    // SubProg parse_at_cmds pc: 337 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12073 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 341 op: LENGTH (42)
    if (IS_SEQUENCE(_12073)){
            _12074 = SEQ_PTR(_12073)->length;
    }
    else {
        _12074 = 1;
    }
    _12073 = NOVALUE;
    // SubProg parse_at_cmds pc: 344 op: GREATEREQ (2)
    _12075 = (_12074 >= 2);
    _12074 = NOVALUE;
    // SubProg parse_at_cmds pc: 348 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 349 op: IF (20)
    if (_12075 == 0)
    {
        DeRef(_12075);
        _12075 = NOVALUE;
        goto LC; // [349] 377
    }
    else{
        DeRef(_12075);
        _12075 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 352 op: STARTLINE (58)

    /** cmdline.e:949				at_cmds[j] = at_cmds[j][2 .. $-1]*/
    // SubProg parse_at_cmds pc: 354 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12076 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 358 op: LENGTH (42)
    if (IS_SEQUENCE(_12076)){
            _12077 = SEQ_PTR(_12076)->length;
    }
    else {
        _12077 = 1;
    }
    // SubProg parse_at_cmds pc: 361 op: MINUS (10)
    _12078 = _12077 - 1;
    _12077 = NOVALUE;
    // SubProg parse_at_cmds pc: 365 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12079;
    RHS_Slice(_12076, 2, _12078);
    _12076 = NOVALUE;
    // SubProg parse_at_cmds pc: 370 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_21022 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_21023);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _12079;
    if( _1 != _12079 ){
        DeRef(_1);
    }
    _12079 = NOVALUE;
    // SubProg parse_at_cmds pc: 374 op: ELSE (23)
    goto L7; // [374] 166
    // SubProg parse_at_cmds pc: 376 op: NOP1 (159)
LC: // addr: 377 pc: 376 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 377 op: STARTLINE (58)

    /** cmdline.e:951			elsif at_cmds[j][1] = '\'' and at_cmds[j][$] = '\'' and length(at_cmds[j]) >= 2 then*/
    // SubProg parse_at_cmds pc: 379 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12080 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 383 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12080);
    _12081 = (object)*(((s1_ptr)_2)->base + 1);
    _12080 = NOVALUE;
    // SubProg parse_at_cmds pc: 387 op: EQUALS (3)
    if (IS_ATOM_INT(_12081)) {
        _12082 = (_12081 == 39);
    }
    else {
        _12082 = binary_op(EQUALS, _12081, 39);
    }
    _12081 = NOVALUE;
    // SubProg parse_at_cmds pc: 391 op: SC1_AND (141)
    if (IS_ATOM_INT(_12082)) {
        if (_12082 == 0) {
            DeRef(_12083);
            _12083 = 0;
            goto LD; // [391] 414
        }
    }
    else {
        if (DBL_PTR(_12082)->dbl == 0.0) {
            DeRef(_12083);
            _12083 = 0;
            goto LD; // [391] 414
        }
    }
    // SubProg parse_at_cmds pc: 395 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12084 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 399 op: LENGTH (42)
    if (IS_SEQUENCE(_12084)){
            _12085 = SEQ_PTR(_12084)->length;
    }
    else {
        _12085 = 1;
    }
    // SubProg parse_at_cmds pc: 402 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12084);
    _12086 = (object)*(((s1_ptr)_2)->base + _12085);
    _12084 = NOVALUE;
    // SubProg parse_at_cmds pc: 406 op: EQUALS (3)
    if (IS_ATOM_INT(_12086)) {
        _12087 = (_12086 == 39);
    }
    else {
        _12087 = binary_op(EQUALS, _12086, 39);
    }
    _12086 = NOVALUE;
    // SubProg parse_at_cmds pc: 410 op: SC2_AND (142)
    DeRef(_12083);
    if (IS_ATOM_INT(_12087))
    _12083 = (_12087 != 0);
    else
    _12083 = DBL_PTR(_12087)->dbl != 0.0;
    // SubProg parse_at_cmds pc: 413 op: NOP1 (159)
LD: // addr: 414 pc: 413 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 414 op: SC1_AND_IF (146)
    if (_12083 == 0) {
        goto LE; // [414] 484
    }
    // SubProg parse_at_cmds pc: 418 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12089 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 422 op: LENGTH (42)
    if (IS_SEQUENCE(_12089)){
            _12090 = SEQ_PTR(_12089)->length;
    }
    else {
        _12090 = 1;
    }
    _12089 = NOVALUE;
    // SubProg parse_at_cmds pc: 425 op: GREATEREQ (2)
    _12091 = (_12090 >= 2);
    _12090 = NOVALUE;
    // SubProg parse_at_cmds pc: 429 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 430 op: IF (20)
    if (_12091 == 0)
    {
        DeRef(_12091);
        _12091 = NOVALUE;
        goto LE; // [430] 484
    }
    else{
        DeRef(_12091);
        _12091 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 433 op: STARTLINE (58)

    /** cmdline.e:952				sequence cmdex = stdseq:split(at_cmds[j][2 .. $-1],' ', 1) -- Empty words removed.*/
    // SubProg parse_at_cmds pc: 435 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21022);
    _12092 = (object)*(((s1_ptr)_2)->base + _j_21023);
    // SubProg parse_at_cmds pc: 439 op: LENGTH (42)
    if (IS_SEQUENCE(_12092)){
            _12093 = SEQ_PTR(_12092)->length;
    }
    else {
        _12093 = 1;
    }
    // SubProg parse_at_cmds pc: 442 op: MINUS (10)
    _12094 = _12093 - 1;
    _12093 = NOVALUE;
    // SubProg parse_at_cmds pc: 446 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12095;
    RHS_Slice(_12092, 2, _12094);
    _12092 = NOVALUE;
    // SubProg parse_at_cmds pc: 451 op: PROC (27)
    _0 = _cmdex_21107;
    _cmdex_21107 = _24split(_12095, 32, 1, 0);
    DeRef(_0);
    _12095 = NOVALUE;
    // SubProg parse_at_cmds pc: 458 op: SEQUENCE_CHECK (97)
    // SubProg parse_at_cmds pc: 460 op: STARTLINE (58)

    /** cmdline.e:954				at_cmds = replace(at_cmds, cmdex, j)*/
    // SubProg parse_at_cmds pc: 462 op: REPLACE (201)
    {
        intptr_t p1 = _at_cmds_21022;
        intptr_t p2 = _cmdex_21107;
        intptr_t p3 = _j_21023;
        intptr_t p4 = _j_21023;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_at_cmds_21022;
        Replace( &replace_params );
    }
    // SubProg parse_at_cmds pc: 468 op: STARTLINE (58)

    /** cmdline.e:955				j = j + length(cmdex) - 1*/
    // SubProg parse_at_cmds pc: 470 op: LENGTH (42)
    if (IS_SEQUENCE(_cmdex_21107)){
            _12098 = SEQ_PTR(_cmdex_21107)->length;
    }
    else {
        _12098 = 1;
    }
    // SubProg parse_at_cmds pc: 473 op: PLUS (11)
    _12099 = _j_21023 + _12098;
    if ((object)((uintptr_t)_12099 + (uintptr_t)HIGH_BITS) >= 0){
        _12099 = NewDouble((eudouble)_12099);
    }
    _12098 = NOVALUE;
    // SubProg parse_at_cmds pc: 477 op: MINUS (10)
    if (IS_ATOM_INT(_12099)) {
        _j_21023 = _12099 - 1;
    }
    else {
        _j_21023 = NewDouble(DBL_PTR(_12099)->dbl - (eudouble)1);
    }
    DeRef(_12099);
    _12099 = NOVALUE;
    // SubProg parse_at_cmds pc: 481 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_21023)) {
        _1 = (object)(DBL_PTR(_j_21023)->dbl);
        DeRefDS(_j_21023);
        _j_21023 = _1;
    }
    // SubProg parse_at_cmds pc: 483 op: NOP1 (159)
LE: // addr: 484 pc: 483 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 484 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cmdex_21107
    DeRef(_cmdex_21107);
    _cmdex_21107 = NOVALUE;
    // SubProg parse_at_cmds pc: 486 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 487 op: STARTLINE (58)

    /** cmdline.e:958		end while*/
    // SubProg parse_at_cmds pc: 489 op: ENDWHILE (22)
    goto L7; // [489] 166
    // SubProg parse_at_cmds pc: 491 op: NOP1 (159)
L8: // addr: 492 pc: 491 sub: 21012 op: 159
    // SubProg parse_at_cmds pc: 492 op: STARTLINE (58)

    /** cmdline.e:961		cmds = replace(cmds, at_cmds, arg_idx)*/
    // SubProg parse_at_cmds pc: 494 op: REPLACE (201)
    {
        intptr_t p1 = _cmds_21015;
        intptr_t p2 = _at_cmds_21022;
        intptr_t p3 = _arg_idx_21017;
        intptr_t p4 = _arg_idx_21017;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_cmds_21015;
        Replace( &replace_params );
    }
    // SubProg parse_at_cmds pc: 500 op: STARTLINE (58)

    /** cmdline.e:962		return cmds*/
    // SubProg parse_at_cmds pc: 502 op: RETURNF (28)

// Exiting block BLOCK: parse_at_cmds

// block var cmd_21014
    DeRefDS(_cmd_21014);

// block var opts_21016
    DeRefDS(_opts_21016);

// block var arg_idx_21017

// block var add_help_rid_21018
    DeRef(_add_help_rid_21018);

// block var parse_options_21019
    DeRef(_parse_options_21019);

// block var help_on_error_21020

// block var auto_help_21021

// block var at_cmds_21022
    DeRef(_at_cmds_21022);

// block var j_21023
    DeRef(_12087);
    _12087 = NOVALUE;
    DeRef(_12049);
    _12049 = NOVALUE;
    DeRef(_12078);
    _12078 = NOVALUE;
    DeRef(_12082);
    _12082 = NOVALUE;
    DeRef(_12021);
    _12021 = NOVALUE;
    DeRef(_12071);
    _12071 = NOVALUE;
    DeRef(_12057);
    _12057 = NOVALUE;
    DeRef(_12047);
    _12047 = NOVALUE;
    _12089 = NOVALUE;
    DeRef(_12059);
    _12059 = NOVALUE;
    _12073 = NOVALUE;
    _12044 = NOVALUE;
    DeRef(_12066);
    _12066 = NOVALUE;
    DeRef(_12094);
    _12094 = NOVALUE;
    return _cmds_21015;
    // SubProg parse_at_cmds pc: 506 op: BADRETURNF (43)
    ;
}


void _48check_mandatory(object _opts_21120, object _parsed_opts_21122, object _add_help_rid_21123, object _cmds_21124, object _parse_options_21125, object _help_on_error_21126, object _auto_help_21127)
{
    object _12126 = NOVALUE; // 21161 12126
    object _12125 = NOVALUE; // 21160 12125
    object _12124 = NOVALUE; // 21159 12124
// skipping _12122  name type: 0
    object _12121 = NOVALUE; // 21156 12121
    object _12120 = NOVALUE; // 21155 12120
    object _12119 = NOVALUE; // 21154 12119
// skipping _12117  name type: 0
    object _12116 = NOVALUE; // 21147 12116
    object _12115 = NOVALUE; // 21146 12115
    object _12114 = NOVALUE; // 21145 12114
    object _12113 = NOVALUE; // 21144 12113
    object _12112 = NOVALUE; // 21142 12112
    object _12111 = NOVALUE; // 21141 12111
    object _12110 = NOVALUE; // 21140 12110
    object _12109 = NOVALUE; // 21139 12109
    object _12108 = NOVALUE; // 21138 12108
    object _12107 = NOVALUE; // 21137 12107
    object _12106 = NOVALUE; // 21136 12106
    object _12105 = NOVALUE; // 21134 12105
    object _12104 = NOVALUE; // 21133 12104
    object _12103 = NOVALUE; // 21132 12103
    object _12102 = NOVALUE; // 21130 12102
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_mandatory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_mandatory pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg check_mandatory pc: 5 op: INTEGER_CHECK (96)
    // SubProg check_mandatory pc: 7 op: INTEGER_CHECK (96)
    // SubProg check_mandatory pc: 9 op: STARTLINE (58)

    /** cmdline.e:969		for i = 1 to length(opts) do*/
    // SubProg check_mandatory pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_21120)){
            _12102 = SEQ_PTR(_opts_21120)->length;
    }
    else {
        _12102 = 1;
    }
    // SubProg check_mandatory pc: 14 op: FOR_I (125)
    {
        object _i_21129;
        _i_21129 = 1;
L1: // addr: 21 pc: 14 sub: 21118 op: 125
        if (_i_21129 > _12102){
            goto L2; // [14] 219
        }
        // SubProg check_mandatory pc: 21 op: STARTLINE (58)

        /** cmdline.e:970			if find(MANDATORY, opts[i][OPTIONS]) then*/
        // SubProg check_mandatory pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21120);
        _12103 = (object)*(((s1_ptr)_2)->base + _i_21129);
        // SubProg check_mandatory pc: 27 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12103);
        _12104 = (object)*(((s1_ptr)_2)->base + 4);
        _12103 = NOVALUE;
        // SubProg check_mandatory pc: 31 op: FIND_FROM (176)
        _12105 = find_from(109, _12104, 1);
        _12104 = NOVALUE;
        // SubProg check_mandatory pc: 36 op: IF (20)
        if (_12105 == 0)
        {
            _12105 = NOVALUE;
            goto L3; // [36] 212
        }
        else{
            _12105 = NOVALUE;
        }
        // SubProg check_mandatory pc: 39 op: STARTLINE (58)

        /** cmdline.e:971				if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        // SubProg check_mandatory pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21120);
        _12106 = (object)*(((s1_ptr)_2)->base + _i_21129);
        // SubProg check_mandatory pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12106);
        _12107 = (object)*(((s1_ptr)_2)->base + 1);
        _12106 = NOVALUE;
        // SubProg check_mandatory pc: 49 op: IS_AN_ATOM (67)
        _12108 = IS_ATOM(_12107);
        _12107 = NOVALUE;
        // SubProg check_mandatory pc: 52 op: SC1_AND_IF (146)
        if (_12108 == 0) {
            goto L4; // [52] 138
        }
        // SubProg check_mandatory pc: 56 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21120);
        _12110 = (object)*(((s1_ptr)_2)->base + _i_21129);
        // SubProg check_mandatory pc: 60 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12110);
        _12111 = (object)*(((s1_ptr)_2)->base + 2);
        _12110 = NOVALUE;
        // SubProg check_mandatory pc: 64 op: IS_AN_ATOM (67)
        _12112 = IS_ATOM(_12111);
        _12111 = NOVALUE;
        // SubProg check_mandatory pc: 67 op: NOP1 (159)
        // SubProg check_mandatory pc: 68 op: IF (20)
        if (_12112 == 0)
        {
            _12112 = NOVALUE;
            goto L4; // [68] 138
        }
        else{
            _12112 = NOVALUE;
        }
        // SubProg check_mandatory pc: 71 op: STARTLINE (58)

        /** cmdline.e:972					if length(map:get(parsed_opts, opts[i][MAPNAME])) = 0 then*/
        // SubProg check_mandatory pc: 73 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21120);
        _12113 = (object)*(((s1_ptr)_2)->base + _i_21129);
        // SubProg check_mandatory pc: 77 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12113);
        _12114 = (object)*(((s1_ptr)_2)->base + 6);
        _12113 = NOVALUE;
        // SubProg check_mandatory pc: 81 op: PROC (27)
        Ref(_parsed_opts_21122);
        Ref(_12114);
        _12115 = _33get(_parsed_opts_21122, _12114, 0);
        _12114 = NOVALUE;
        // SubProg check_mandatory pc: 87 op: LENGTH (42)
        if (IS_SEQUENCE(_12115)){
                _12116 = SEQ_PTR(_12115)->length;
        }
        else {
            _12116 = 1;
        }
        DeRef(_12115);
        _12115 = NOVALUE;
        // SubProg check_mandatory pc: 90 op: EQUALS_IFW_I (121)
        if (_12116 != 0)
        goto L5; // [90] 211
        // SubProg check_mandatory pc: 94 op: STARTLINE (58)

        /** cmdline.e:973						puts(1, "Additional arguments were expected.\n\n")*/
        // SubProg check_mandatory pc: 96 op: PUTS (44)
        EPuts(1, _12118); // DJP 
        // SubProg check_mandatory pc: 99 op: STARTLINE (58)

        /** cmdline.e:974						if help_on_error then*/
        // SubProg check_mandatory pc: 101 op: IF (20)
        if (_help_on_error_21126 == 0)
        {
            goto L6; // [101] 116
        }
        else{
        }
        // SubProg check_mandatory pc: 104 op: STARTLINE (58)

        /** cmdline.e:975							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        // SubProg check_mandatory pc: 106 op: PROC (27)
        RefDS(_opts_21120);
        Ref(_add_help_rid_21123);
        RefDS(_cmds_21124);
        Ref(_parse_options_21125);
        _48local_help(_opts_21120, _add_help_rid_21123, _cmds_21124, 1, _parse_options_21125);
        // SubProg check_mandatory pc: 113 op: ELSE (23)
        goto L7; // [113] 129
        // SubProg check_mandatory pc: 115 op: NOP1 (159)
L6: // addr: 116 pc: 115 sub: 21118 op: 159
        // SubProg check_mandatory pc: 116 op: STARTLINE (58)

        /** cmdline.e:976						elsif auto_help then*/
        // SubProg check_mandatory pc: 118 op: IF (20)
        if (_auto_help_21127 == 0)
        {
            goto L8; // [118] 128
        }
        else{
        }
        // SubProg check_mandatory pc: 121 op: STARTLINE (58)

        /** cmdline.e:977							printf(2,"Try '--help' for more information.\n",{})          */
        // SubProg check_mandatory pc: 123 op: PRINTF (38)
        EPrintf(2, _12038, _5);
        // SubProg check_mandatory pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 21118 op: 159
        // SubProg check_mandatory pc: 128 op: NOP1 (159)
L7: // addr: 129 pc: 128 sub: 21118 op: 159
        // SubProg check_mandatory pc: 129 op: STARTLINE (58)

        /** cmdline.e:979						local_abort(1)*/
        // SubProg check_mandatory pc: 131 op: PROC (27)
        _48local_abort(1);
        // SubProg check_mandatory pc: 134 op: NOP1 (159)
        // SubProg check_mandatory pc: 135 op: ELSE (23)
        goto L5; // [135] 211
        // SubProg check_mandatory pc: 137 op: NOP1 (159)
L4: // addr: 138 pc: 137 sub: 21118 op: 159
        // SubProg check_mandatory pc: 138 op: STARTLINE (58)

        /** cmdline.e:982					if not map:has(parsed_opts, opts[i][MAPNAME]) then*/
        // SubProg check_mandatory pc: 140 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21120);
        _12119 = (object)*(((s1_ptr)_2)->base + _i_21129);
        // SubProg check_mandatory pc: 144 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12119);
        _12120 = (object)*(((s1_ptr)_2)->base + 6);
        _12119 = NOVALUE;
        // SubProg check_mandatory pc: 148 op: PROC (27)
        Ref(_parsed_opts_21122);
        Ref(_12120);
        _12121 = _33has(_parsed_opts_21122, _12120);
        _12120 = NOVALUE;
        // SubProg check_mandatory pc: 153 op: NOT_IFW (108)
        if (IS_ATOM_INT(_12121)) {
            if (_12121 != 0){
                DeRef(_12121);
                _12121 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        else {
            if (DBL_PTR(_12121)->dbl != 0.0){
                DeRef(_12121);
                _12121 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        DeRef(_12121);
        _12121 = NOVALUE;
        // SubProg check_mandatory pc: 156 op: STARTLINE (58)

        /** cmdline.e:983						printf(1, "option '%s' is mandatory but was not supplied.\n\n", {opts[i][MAPNAME]})*/
        // SubProg check_mandatory pc: 158 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21120);
        _12124 = (object)*(((s1_ptr)_2)->base + _i_21129);
        // SubProg check_mandatory pc: 162 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12124);
        _12125 = (object)*(((s1_ptr)_2)->base + 6);
        _12124 = NOVALUE;
        // SubProg check_mandatory pc: 166 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_12125);
        ((intptr_t*)_2)[1] = _12125;
        _12126 = MAKE_SEQ(_1);
        _12125 = NOVALUE;
        // SubProg check_mandatory pc: 170 op: PRINTF (38)
        EPrintf(1, _12123, _12126);
        DeRefDS(_12126);
        _12126 = NOVALUE;
        // SubProg check_mandatory pc: 174 op: STARTLINE (58)

        /** cmdline.e:984						if help_on_error then*/
        // SubProg check_mandatory pc: 176 op: IF (20)
        if (_help_on_error_21126 == 0)
        {
            goto LA; // [176] 191
        }
        else{
        }
        // SubProg check_mandatory pc: 179 op: STARTLINE (58)

        /** cmdline.e:985							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        // SubProg check_mandatory pc: 181 op: PROC (27)
        RefDS(_opts_21120);
        Ref(_add_help_rid_21123);
        RefDS(_cmds_21124);
        Ref(_parse_options_21125);
        _48local_help(_opts_21120, _add_help_rid_21123, _cmds_21124, 1, _parse_options_21125);
        // SubProg check_mandatory pc: 188 op: ELSE (23)
        goto LB; // [188] 204
        // SubProg check_mandatory pc: 190 op: NOP1 (159)
LA: // addr: 191 pc: 190 sub: 21118 op: 159
        // SubProg check_mandatory pc: 191 op: STARTLINE (58)

        /** cmdline.e:986						elsif auto_help then*/
        // SubProg check_mandatory pc: 193 op: IF (20)
        if (_auto_help_21127 == 0)
        {
            goto LC; // [193] 203
        }
        else{
        }
        // SubProg check_mandatory pc: 196 op: STARTLINE (58)

        /** cmdline.e:987							printf(2,"Try '--help' for more information.\n",{})          */
        // SubProg check_mandatory pc: 198 op: PRINTF (38)
        EPrintf(2, _12038, _5);
        // SubProg check_mandatory pc: 202 op: NOP1 (159)
LC: // addr: 203 pc: 202 sub: 21118 op: 159
        // SubProg check_mandatory pc: 203 op: NOP1 (159)
LB: // addr: 204 pc: 203 sub: 21118 op: 159
        // SubProg check_mandatory pc: 204 op: STARTLINE (58)

        /** cmdline.e:989						local_abort(1)*/
        // SubProg check_mandatory pc: 206 op: PROC (27)
        _48local_abort(1);
        // SubProg check_mandatory pc: 209 op: NOP1 (159)
L9: // addr: 210 pc: 209 sub: 21118 op: 159
        // SubProg check_mandatory pc: 210 op: NOP1 (159)
L5: // addr: 211 pc: 210 sub: 21118 op: 159
        // SubProg check_mandatory pc: 211 op: NOP1 (159)
L3: // addr: 212 pc: 211 sub: 21118 op: 159
        // SubProg check_mandatory pc: 212 op: STARTLINE (58)

        /** cmdline.e:993		end for*/
        // SubProg check_mandatory pc: 214 op: ENDFOR_INT_UP1 (54)
        _i_21129 = _i_21129 + 1;
        goto L1; // [214] 21
L2: // addr: 219 pc: 214 sub: 21118 op: 54
        ;
    }
    // SubProg check_mandatory pc: 219 op: STARTLINE (58)

    /** cmdline.e:994	end procedure*/
    // SubProg check_mandatory pc: 221 op: RETURNP (29)

// Exiting block BLOCK: check_mandatory

// block var opts_21120
    DeRefDS(_opts_21120);

// block var parsed_opts_21122
    DeRef(_parsed_opts_21122);

// block var add_help_rid_21123
    DeRef(_add_help_rid_21123);

// block var cmds_21124
    DeRefDS(_cmds_21124);

// block var parse_options_21125
    DeRef(_parse_options_21125);

// block var help_on_error_21126

// block var auto_help_21127
    _12115 = NOVALUE;
    return;
    // SubProg check_mandatory pc: 224 op: BADRETURNF (43)
    ;
}


void _48parse_abort(object _format_msg_21166, object _msg_data_21167, object _opts_21168, object _add_help_rid_21169, object _cmds_21170, object _parse_options_21171, object _help_on_error_21172, object _auto_help_21173)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg parse_abort pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg parse_abort pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg parse_abort pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg parse_abort pc: 7 op: SEQUENCE_CHECK (97)
    // SubProg parse_abort pc: 9 op: INTEGER_CHECK (96)
    // SubProg parse_abort pc: 11 op: INTEGER_CHECK (96)
    // SubProg parse_abort pc: 13 op: STARTLINE (58)

    /** cmdline.e:999		printf(1, format_msg, msg_data)*/
    // SubProg parse_abort pc: 15 op: PRINTF (38)
    EPrintf(1, _format_msg_21166, _msg_data_21167);
    // SubProg parse_abort pc: 19 op: STARTLINE (58)

    /** cmdline.e:1000		if help_on_error then*/
    // SubProg parse_abort pc: 21 op: IF (20)
    if (_help_on_error_21172 == 0)
    {
        goto L1; // [21] 36
    }
    else{
    }
    // SubProg parse_abort pc: 24 op: STARTLINE (58)

    /** cmdline.e:1001			local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_abort pc: 26 op: PROC (27)
    RefDS(_opts_21168);
    Ref(_add_help_rid_21169);
    RefDS(_cmds_21170);
    Ref(_parse_options_21171);
    _48local_help(_opts_21168, _add_help_rid_21169, _cmds_21170, 1, _parse_options_21171);
    // SubProg parse_abort pc: 33 op: ELSE (23)
    goto L2; // [33] 49
    // SubProg parse_abort pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 21164 op: 159
    // SubProg parse_abort pc: 36 op: STARTLINE (58)

    /** cmdline.e:1002		elsif auto_help then*/
    // SubProg parse_abort pc: 38 op: IF (20)
    if (_auto_help_21173 == 0)
    {
        goto L3; // [38] 48
    }
    else{
    }
    // SubProg parse_abort pc: 41 op: STARTLINE (58)

    /** cmdline.e:1003			printf(2,"Try '--help' for more information.\n",{})          */
    // SubProg parse_abort pc: 43 op: PRINTF (38)
    EPrintf(2, _12038, _5);
    // SubProg parse_abort pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 21164 op: 159
    // SubProg parse_abort pc: 48 op: NOP1 (159)
L2: // addr: 49 pc: 48 sub: 21164 op: 159
    // SubProg parse_abort pc: 49 op: STARTLINE (58)

    /** cmdline.e:1005		local_abort(1)*/
    // SubProg parse_abort pc: 51 op: PROC (27)
    _48local_abort(1);
    // SubProg parse_abort pc: 54 op: STARTLINE (58)

    /** cmdline.e:1006	end procedure*/
    // SubProg parse_abort pc: 56 op: RETURNP (29)

// Exiting block BLOCK: parse_abort

// block var format_msg_21166
    DeRefDSi(_format_msg_21166);

// block var msg_data_21167
    DeRefDS(_msg_data_21167);

// block var opts_21168
    DeRefDS(_opts_21168);

// block var add_help_rid_21169
    DeRef(_add_help_rid_21169);

// block var cmds_21170
    DeRefDS(_cmds_21170);

// block var parse_options_21171
    DeRef(_parse_options_21171);

// block var help_on_error_21172

// block var auto_help_21173
    return;
    // SubProg parse_abort pc: 59 op: BADRETURNF (43)
    ;
}


object _48parse_commands(object _cmds_21178, object _opts_21179, object _parsed_opts_21181, object _help_opts_21182, object _add_help_rid_21183, object _parse_options_21184, object _use_at_21185, object _validation_21186, object _has_extra_21187, object _call_count_21188, object _help_on_error_21189, object _auto_help_21190)
{
    object _arg_idx_21191 = NOVALUE;
    object _opts_done_21192 = NOVALUE;
    object _find_result_21193 = NOVALUE;
    object _type__21194 = NOVALUE;
    object _from__21195 = NOVALUE;
    object _cmd_21196 = NOVALUE;
    object _handle_result_21261 = NOVALUE;
    object _12178 = NOVALUE; // 21266 12178
// skipping _12177  name type: 0
// skipping _12176  name type: 0
// skipping _12175  name type: 0
    object _12174 = NOVALUE; // 21260 12174
    object _12173 = NOVALUE; // 21259 12173
    object _12171 = NOVALUE; // 21257 12171
    object _12170 = NOVALUE; // 21256 12170
    object _12169 = NOVALUE; // 21255 12169
// skipping _12168  name type: 0
    object _12167 = NOVALUE; // 21253 12167
// skipping _12166  name type: 0
    object _12165 = NOVALUE; // 21250 12165
// skipping _12164  name type: 0
    object _12163 = NOVALUE; // 21247 12163
// skipping _12162  name type: 0
    object _12161 = NOVALUE; // 21244 12161
    object _12160 = NOVALUE; // 21243 12160
    object _12159 = NOVALUE; // 21242 12159
    object _12158 = NOVALUE; // 21241 12158
    object _12157 = NOVALUE; // 21240 12157
// skipping _12156  name type: 0
// skipping _12155  name type: 0
// skipping _12154  name type: 0
    object _12153 = NOVALUE; // 21234 12153
// skipping _12152  name type: 0
    object _12151 = NOVALUE; // 21231 12151
    object _12150 = NOVALUE; // 21230 12150
    object _12149 = NOVALUE; // 21228 12149
    object _12148 = NOVALUE; // 21225 12148
    object _12147 = NOVALUE; // 21224 12147
    object _12146 = NOVALUE; // 21223 12146
// skipping _12145  name type: 0
    object _12144 = NOVALUE; // 21218 12144
    object _12143 = NOVALUE; // 21217 12143
    object _12142 = NOVALUE; // 21216 12142
    object _12141 = NOVALUE; // 21215 12141
    object _12140 = NOVALUE; // 21214 12140
    object _12139 = NOVALUE; // 21213 12139
    object _12138 = NOVALUE; // 21212 12138
// skipping _12137  name type: 0
// skipping _12136  name type: 0
    object _12135 = NOVALUE; // 21208 12135
    object _12134 = NOVALUE; // 21207 12134
    object _12133 = NOVALUE; // 21206 12133
// skipping _12132  name type: 0
    object _12131 = NOVALUE; // 21203 12131
// skipping _12130  name type: 0
// skipping _12129  name type: 0
// skipping _12128  name type: 0
    object _12127 = NOVALUE; // 21198 12127
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg parse_commands pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 7 op: INTEGER_CHECK (96)
    // SubProg parse_commands pc: 9 op: INTEGER_CHECK (96)
    // SubProg parse_commands pc: 11 op: INTEGER_CHECK (96)
    // SubProg parse_commands pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 15 op: INTEGER_CHECK (96)
    // SubProg parse_commands pc: 17 op: INTEGER_CHECK (96)
    // SubProg parse_commands pc: 19 op: STARTLINE (58)

    /** cmdline.e:1016		integer arg_idx = 2*/
    // SubProg parse_commands pc: 21 op: ASSIGN_I (113)
    _arg_idx_21191 = 2;
    // SubProg parse_commands pc: 24 op: STARTLINE (58)

    /** cmdline.e:1017		integer opts_done = 0*/
    // SubProg parse_commands pc: 26 op: ASSIGN_I (113)
    _opts_done_21192 = 0;
    // SubProg parse_commands pc: 29 op: STARTLINE (58)

    /** cmdline.e:1023		while arg_idx < length(cmds) do*/
    // SubProg parse_commands pc: 31 op: NOP2 (110)
    // SubProg parse_commands pc: 33 op: NOPWHILE (158)
L1: // addr: 34 pc: 33 sub: 21176 op: 158
    // SubProg parse_commands pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_21178)){
            _12127 = SEQ_PTR(_cmds_21178)->length;
    }
    else {
        _12127 = 1;
    }
    // SubProg parse_commands pc: 37 op: LESS_IFW_I (119)
    if (_arg_idx_21191 >= _12127)
    goto L2; // [37] 488
    // SubProg parse_commands pc: 41 op: STARTLINE (58)

    /** cmdline.e:1024			arg_idx += 1*/
    // SubProg parse_commands pc: 43 op: PLUS1_I (117)
    _arg_idx_21191 = _arg_idx_21191 + 1;
    // SubProg parse_commands pc: 47 op: STARTLINE (58)

    /** cmdline.e:1026			cmd = cmds[arg_idx]*/
    // SubProg parse_commands pc: 49 op: RHS_SUBS (25)
    DeRef(_cmd_21196);
    _2 = (object)SEQ_PTR(_cmds_21178);
    _cmd_21196 = (object)*(((s1_ptr)_2)->base + _arg_idx_21191);
    Ref(_cmd_21196);
    // SubProg parse_commands pc: 53 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 55 op: STARTLINE (58)

    /** cmdline.e:1027			if length(cmd) = 0 then*/
    // SubProg parse_commands pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21196)){
            _12131 = SEQ_PTR(_cmd_21196)->length;
    }
    else {
        _12131 = 1;
    }
    // SubProg parse_commands pc: 60 op: EQUALS_IFW_I (121)
    if (_12131 != 0)
    goto L3; // [60] 69
    // SubProg parse_commands pc: 64 op: STARTLINE (58)

    /** cmdline.e:1028				continue*/
    // SubProg parse_commands pc: 66 op: ELSE (23)
    goto L1; // [66] 34
    // SubProg parse_commands pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 21176 op: 159
    // SubProg parse_commands pc: 69 op: STARTLINE (58)

    /** cmdline.e:1031			if cmd[1] = '@' and use_at then*/
    // SubProg parse_commands pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_21196);
    _12133 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 75 op: EQUALS (3)
    if (IS_ATOM_INT(_12133)) {
        _12134 = (_12133 == 64);
    }
    else {
        _12134 = binary_op(EQUALS, _12133, 64);
    }
    _12133 = NOVALUE;
    // SubProg parse_commands pc: 79 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12134)) {
        if (_12134 == 0) {
            goto L4; // [79] 113
        }
    }
    else {
        if (DBL_PTR(_12134)->dbl == 0.0) {
            goto L4; // [79] 113
        }
    }
    // SubProg parse_commands pc: 83 op: NOP1 (159)
    // SubProg parse_commands pc: 84 op: IF (20)
    if (_use_at_21185 == 0)
    {
        goto L4; // [84] 113
    }
    else{
    }
    // SubProg parse_commands pc: 87 op: STARTLINE (58)

    /** cmdline.e:1032				cmds = parse_at_cmds( cmd, cmds, opts, arg_idx, add_help_rid, parse_options, help_on_error, auto_help )*/
    // SubProg parse_commands pc: 89 op: PROC (27)
    RefDS(_cmd_21196);
    RefDS(_cmds_21178);
    RefDS(_opts_21179);
    Ref(_add_help_rid_21183);
    Ref(_parse_options_21184);
    _0 = _cmds_21178;
    _cmds_21178 = _48parse_at_cmds(_cmd_21196, _cmds_21178, _opts_21179, _arg_idx_21191, _add_help_rid_21183, _parse_options_21184, _help_on_error_21189, _auto_help_21190);
    DeRefDS(_0);
    // SubProg parse_commands pc: 100 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 102 op: STARTLINE (58)

    /** cmdline.e:1033				arg_idx -= 1*/
    // SubProg parse_commands pc: 104 op: MINUS_I (116)
    _arg_idx_21191 = _arg_idx_21191 - 1;
    // SubProg parse_commands pc: 108 op: STARTLINE (58)

    /** cmdline.e:1034				continue*/
    // SubProg parse_commands pc: 110 op: ELSE (23)
    goto L1; // [110] 34
    // SubProg parse_commands pc: 112 op: NOP1 (159)
L4: // addr: 113 pc: 112 sub: 21176 op: 159
    // SubProg parse_commands pc: 113 op: STARTLINE (58)

    /** cmdline.e:1037			if (opts_done or find(cmd[1], os:CMD_SWITCHES) = 0 or length(cmd) = 1)*/
    // SubProg parse_commands pc: 115 op: SC1_OR (143)
    if (_opts_done_21192 != 0) {
        _12138 = 1;
        goto L5; // [115] 136
    }
    // SubProg parse_commands pc: 119 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_21196);
    _12139 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 123 op: FIND_FROM (176)
    _12140 = find_from(_12139, _8CMD_SWITCHES_2344, 1);
    _12139 = NOVALUE;
    // SubProg parse_commands pc: 128 op: EQUALS (3)
    _12141 = (_12140 == 0);
    _12140 = NOVALUE;
    // SubProg parse_commands pc: 132 op: SC2_OR (144)
    _12138 = (_12141 != 0);
    // SubProg parse_commands pc: 135 op: NOP1 (159)
L5: // addr: 136 pc: 135 sub: 21176 op: 159
    // SubProg parse_commands pc: 136 op: SC1_OR (143)
    if (_12138 != 0) {
        DeRef(_12142);
        _12142 = 1;
        goto L6; // [136] 151
    }
    // SubProg parse_commands pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21196)){
            _12143 = SEQ_PTR(_cmd_21196)->length;
    }
    else {
        _12143 = 1;
    }
    // SubProg parse_commands pc: 143 op: EQUALS (3)
    _12144 = (_12143 == 1);
    _12143 = NOVALUE;
    // SubProg parse_commands pc: 147 op: SC2_OR (144)
    _12142 = (_12144 != 0);
    // SubProg parse_commands pc: 150 op: NOP1 (159)
L6: // addr: 151 pc: 150 sub: 21176 op: 159
    // SubProg parse_commands pc: 151 op: IF (20)
    if (_12142 == 0)
    {
        _12142 = NOVALUE;
        goto L7; // [151] 227
    }
    else{
        _12142 = NOVALUE;
    }
    // SubProg parse_commands pc: 154 op: STARTLINE (58)

    /** cmdline.e:1039				map:put(parsed_opts, EXTRAS, cmd, map:APPEND)*/
    // SubProg parse_commands pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg parse_commands pc: 158 op: PROC (27)
    Ref(_parsed_opts_21181);
    RefDS(_48EXTRAS_20250);
    RefDS(_cmd_21196);
    _33put(_parsed_opts_21181, _48EXTRAS_20250, _cmd_21196, 6, 0);
    // SubProg parse_commands pc: 165 op: STARTLINE (58)

    /** cmdline.e:1040				has_extra = 1*/
    // SubProg parse_commands pc: 167 op: ASSIGN_I (113)
    _has_extra_21187 = 1;
    // SubProg parse_commands pc: 170 op: STARTLINE (58)

    /** cmdline.e:1041				if validation = NO_VALIDATION_AFTER_FIRST_EXTRA then*/
    // SubProg parse_commands pc: 172 op: EQUALS_IFW_I (121)
    if (_validation_21186 != 4)
    goto L1; // [172] 34
    // SubProg parse_commands pc: 176 op: STARTLINE (58)

    /** cmdline.e:1042					for i = arg_idx + 1 to length(cmds) do*/
    // SubProg parse_commands pc: 178 op: PLUS1 (93)
    _12146 = _arg_idx_21191 + 1;
    if (_12146 > MAXINT){
        _12146 = NewDouble((eudouble)_12146);
    }
    // SubProg parse_commands pc: 182 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_21178)){
            _12147 = SEQ_PTR(_cmds_21178)->length;
    }
    else {
        _12147 = 1;
    }
    // SubProg parse_commands pc: 185 op: FOR (21)
    {
        object _i_21222;
        Ref(_12146);
        _i_21222 = _12146;
L8: // addr: 192 pc: 185 sub: 21176 op: 21
        if (binary_op_a(GREATER, _i_21222, _12147)){
            goto L9; // [185] 214
        }
        // SubProg parse_commands pc: 192 op: STARTLINE (58)

        /** cmdline.e:1043						map:put(parsed_opts, EXTRAS, cmds[i], map:APPEND)*/
        // SubProg parse_commands pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg parse_commands pc: 196 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_cmds_21178);
        if (!IS_ATOM_INT(_i_21222)){
            _12148 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_21222)->dbl));
        }
        else{
            _12148 = (object)*(((s1_ptr)_2)->base + _i_21222);
        }
        // SubProg parse_commands pc: 200 op: PROC (27)
        Ref(_parsed_opts_21181);
        RefDS(_48EXTRAS_20250);
        Ref(_12148);
        _33put(_parsed_opts_21181, _48EXTRAS_20250, _12148, 6, 0);
        _12148 = NOVALUE;
        // SubProg parse_commands pc: 207 op: STARTLINE (58)

        /** cmdline.e:1044					end for*/
        // SubProg parse_commands pc: 209 op: ENDFOR_INT_UP1 (54)
        _0 = _i_21222;
        if (IS_ATOM_INT(_i_21222)) {
            _i_21222 = _i_21222 + 1;
            if ((object)((uintptr_t)_i_21222 +(uintptr_t) HIGH_BITS) >= 0){
                _i_21222 = NewDouble((eudouble)_i_21222);
            }
        }
        else {
            _i_21222 = binary_op_a(PLUS, _i_21222, 1);
        }
        DeRef(_0);
        goto L8; // [209] 192
L9: // addr: 214 pc: 209 sub: 21176 op: 54
        ;
        DeRef(_i_21222);
    }
    // SubProg parse_commands pc: 214 op: STARTLINE (58)

    /** cmdline.e:1046					exit*/
    // SubProg parse_commands pc: 216 op: EXIT (61)
    goto L2; // [216] 488
    // SubProg parse_commands pc: 218 op: ELSE (23)
    goto LA; // [218] 226
    // SubProg parse_commands pc: 220 op: NOP1 (159)
    // SubProg parse_commands pc: 221 op: STARTLINE (58)

    /** cmdline.e:1048					continue*/
    // SubProg parse_commands pc: 223 op: ELSE (23)
    goto L1; // [223] 34
    // SubProg parse_commands pc: 225 op: NOP1 (159)
LA: // addr: 226 pc: 225 sub: 21176 op: 159
    // SubProg parse_commands pc: 226 op: NOP1 (159)
L7: // addr: 227 pc: 226 sub: 21176 op: 159
    // SubProg parse_commands pc: 227 op: STARTLINE (58)

    /** cmdline.e:1052			if equal(cmd, "--") then*/
    // SubProg parse_commands pc: 229 op: EQUAL (153)
    if (_cmd_21196 == _11874)
    _12149 = 1;
    else if (IS_ATOM_INT(_cmd_21196) && IS_ATOM_INT(_11874))
    _12149 = 0;
    else
    _12149 = (compare(_cmd_21196, _11874) == 0);
    // SubProg parse_commands pc: 233 op: IF (20)
    if (_12149 == 0)
    {
        _12149 = NOVALUE;
        goto LB; // [233] 246
    }
    else{
        _12149 = NOVALUE;
    }
    // SubProg parse_commands pc: 236 op: STARTLINE (58)

    /** cmdline.e:1053				opts_done = 1*/
    // SubProg parse_commands pc: 238 op: ASSIGN_I (113)
    _opts_done_21192 = 1;
    // SubProg parse_commands pc: 241 op: STARTLINE (58)

    /** cmdline.e:1054				continue*/
    // SubProg parse_commands pc: 243 op: ELSE (23)
    goto L1; // [243] 34
    // SubProg parse_commands pc: 245 op: NOP1 (159)
LB: // addr: 246 pc: 245 sub: 21176 op: 159
    // SubProg parse_commands pc: 246 op: STARTLINE (58)

    /** cmdline.e:1057			if equal(cmd[1..2], "--") then	  -- found --opt-name*/
    // SubProg parse_commands pc: 248 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12150;
    RHS_Slice(_cmd_21196, 1, 2);
    // SubProg parse_commands pc: 253 op: EQUAL (153)
    if (_12150 == _11874)
    _12151 = 1;
    else if (IS_ATOM_INT(_12150) && IS_ATOM_INT(_11874))
    _12151 = 0;
    else
    _12151 = (compare(_12150, _11874) == 0);
    DeRefDS(_12150);
    _12150 = NOVALUE;
    // SubProg parse_commands pc: 257 op: IF (20)
    if (_12151 == 0)
    {
        _12151 = NOVALUE;
        goto LC; // [257] 274
    }
    else{
        _12151 = NOVALUE;
    }
    // SubProg parse_commands pc: 260 op: STARTLINE (58)

    /** cmdline.e:1058				type_ = {LONGNAME, "--"}*/
    // SubProg parse_commands pc: 262 op: RIGHT_BRACE_2 (85)
    RefDS(_11874);
    DeRef(_type__21194);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = _11874;
    _type__21194 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 266 op: STARTLINE (58)

    /** cmdline.e:1059				from_ = 3*/
    // SubProg parse_commands pc: 268 op: ASSIGN_I (113)
    _from__21195 = 3;
    // SubProg parse_commands pc: 271 op: ELSE (23)
    goto LD; // [271] 310
    // SubProg parse_commands pc: 273 op: NOP1 (159)
LC: // addr: 274 pc: 273 sub: 21176 op: 159
    // SubProg parse_commands pc: 274 op: STARTLINE (58)

    /** cmdline.e:1060			elsif cmd[1] = '-' then -- found -opt*/
    // SubProg parse_commands pc: 276 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_21196);
    _12153 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 280 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12153, 45)){
        _12153 = NOVALUE;
        goto LE; // [280] 298
    }
    _12153 = NOVALUE;
    // SubProg parse_commands pc: 284 op: STARTLINE (58)

    /** cmdline.e:1061				type_ = {SHORTNAME, "-"}*/
    // SubProg parse_commands pc: 286 op: RIGHT_BRACE_2 (85)
    RefDS(_11962);
    DeRef(_type__21194);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _11962;
    _type__21194 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 290 op: STARTLINE (58)

    /** cmdline.e:1062				from_ = 2*/
    // SubProg parse_commands pc: 292 op: ASSIGN_I (113)
    _from__21195 = 2;
    // SubProg parse_commands pc: 295 op: ELSE (23)
    goto LD; // [295] 310
    // SubProg parse_commands pc: 297 op: NOP1 (159)
LE: // addr: 298 pc: 297 sub: 21176 op: 159
    // SubProg parse_commands pc: 298 op: STARTLINE (58)

    /** cmdline.e:1064				type_ = {SHORTNAME, "/"}*/
    // SubProg parse_commands pc: 300 op: RIGHT_BRACE_2 (85)
    RefDS(_11381);
    DeRef(_type__21194);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _11381;
    _type__21194 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 304 op: STARTLINE (58)

    /** cmdline.e:1065				from_ = 2*/
    // SubProg parse_commands pc: 306 op: ASSIGN_I (113)
    _from__21195 = 2;
    // SubProg parse_commands pc: 309 op: NOP1 (159)
LD: // addr: 310 pc: 309 sub: 21176 op: 159
    // SubProg parse_commands pc: 310 op: STARTLINE (58)

    /** cmdline.e:1068			if find(cmd[from_..$], help_opts) then*/
    // SubProg parse_commands pc: 312 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_commands pc: 314 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21196)){
            _12157 = SEQ_PTR(_cmd_21196)->length;
    }
    else {
        _12157 = 1;
    }
    // SubProg parse_commands pc: 317 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12158;
    RHS_Slice(_cmd_21196, _from__21195, _12157);
    // SubProg parse_commands pc: 322 op: FIND_FROM (176)
    _12159 = find_from(_12158, _help_opts_21182, 1);
    DeRefDS(_12158);
    _12158 = NOVALUE;
    // SubProg parse_commands pc: 327 op: IF (20)
    if (_12159 == 0)
    {
        _12159 = NOVALUE;
        goto LF; // [327] 347
    }
    else{
        _12159 = NOVALUE;
    }
    // SubProg parse_commands pc: 330 op: STARTLINE (58)

    /** cmdline.e:1069				local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_commands pc: 332 op: PROC (27)
    RefDS(_opts_21179);
    Ref(_add_help_rid_21183);
    RefDS(_cmds_21178);
    Ref(_parse_options_21184);
    _48local_help(_opts_21179, _add_help_rid_21183, _cmds_21178, 1, _parse_options_21184);
    // SubProg parse_commands pc: 339 op: STARTLINE (58)

    /** cmdline.e:1070				ifdef UNITTEST then*/
    // SubProg parse_commands pc: 341 op: STARTLINE (58)

    /** cmdline.e:1073				local_abort(0)*/
    // SubProg parse_commands pc: 343 op: PROC (27)
    _48local_abort(0);
    // SubProg parse_commands pc: 346 op: NOP1 (159)
LF: // addr: 347 pc: 346 sub: 21176 op: 159
    // SubProg parse_commands pc: 347 op: STARTLINE (58)

    /** cmdline.e:1076			find_result = find_opt(opts, type_, cmd[from_..$])*/
    // SubProg parse_commands pc: 349 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_commands pc: 351 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21196)){
            _12160 = SEQ_PTR(_cmd_21196)->length;
    }
    else {
        _12160 = 1;
    }
    // SubProg parse_commands pc: 354 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12161;
    RHS_Slice(_cmd_21196, _from__21195, _12160);
    // SubProg parse_commands pc: 359 op: PROC (27)
    RefDS(_opts_21179);
    RefDS(_type__21194);
    _0 = _find_result_21193;
    _find_result_21193 = _48find_opt(_opts_21179, _type__21194, _12161);
    DeRef(_0);
    _12161 = NOVALUE;
    // SubProg parse_commands pc: 365 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 367 op: STARTLINE (58)

    /** cmdline.e:1078			if find_result[1] < 0 then*/
    // SubProg parse_commands pc: 369 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21193);
    _12163 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 373 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _12163, 0)){
        _12163 = NOVALUE;
        goto L10; // [373] 382
    }
    _12163 = NOVALUE;
    // SubProg parse_commands pc: 377 op: STARTLINE (58)

    /** cmdline.e:1079				continue -- Couldn't use this command argument for anything.*/
    // SubProg parse_commands pc: 379 op: ELSE (23)
    goto L1; // [379] 34
    // SubProg parse_commands pc: 381 op: NOP1 (159)
L10: // addr: 382 pc: 381 sub: 21176 op: 159
    // SubProg parse_commands pc: 382 op: STARTLINE (58)

    /** cmdline.e:1082			if find_result[1] = 0 then*/
    // SubProg parse_commands pc: 384 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21193);
    _12165 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 388 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12165, 0)){
        _12165 = NOVALUE;
        goto L11; // [388] 449
    }
    _12165 = NOVALUE;
    // SubProg parse_commands pc: 392 op: STARTLINE (58)

    /** cmdline.e:1083				if validation = VALIDATE_ALL or*/
    // SubProg parse_commands pc: 394 op: EQUALS (3)
    _12167 = (_validation_21186 == 2);
    // SubProg parse_commands pc: 398 op: SC1_OR_IF (147)
    if (_12167 != 0) {
        goto L12; // [398] 423
    }
    // SubProg parse_commands pc: 402 op: EQUALS (3)
    _12169 = (_validation_21186 == 4);
    // SubProg parse_commands pc: 406 op: SC1_AND (141)
    if (_12169 == 0) {
        DeRef(_12170);
        _12170 = 0;
        goto L13; // [406] 418
    }
    // SubProg parse_commands pc: 410 op: EQUALS (3)
    _12171 = (_has_extra_21187 == 0);
    // SubProg parse_commands pc: 414 op: SC2_AND (142)
    _12170 = (_12171 != 0);
    // SubProg parse_commands pc: 417 op: NOP1 (159)
L13: // addr: 418 pc: 417 sub: 21176 op: 159
    // SubProg parse_commands pc: 418 op: NOP1 (159)
    // SubProg parse_commands pc: 419 op: IF (20)
    if (_12170 == 0)
    {
        _12170 = NOVALUE;
        goto L1; // [419] 34
    }
    else{
        _12170 = NOVALUE;
    }
    // SubProg parse_commands pc: 422 op: NOP1 (159)
L12: // addr: 423 pc: 422 sub: 21176 op: 159
    // SubProg parse_commands pc: 423 op: STARTLINE (58)

    /** cmdline.e:1087					parse_abort( "option '%s': %s\n\n", {cmd, find_result[2]}, */
    // SubProg parse_commands pc: 425 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21193);
    _12173 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg parse_commands pc: 429 op: RIGHT_BRACE_2 (85)
    Ref(_12173);
    RefDS(_cmd_21196);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmd_21196;
    ((intptr_t *)_2)[2] = _12173;
    _12174 = MAKE_SEQ(_1);
    _12173 = NOVALUE;
    // SubProg parse_commands pc: 433 op: PROC (27)
    RefDS(_12172);
    RefDS(_opts_21179);
    Ref(_add_help_rid_21183);
    RefDS(_cmds_21178);
    Ref(_parse_options_21184);
    _48parse_abort(_12172, _12174, _opts_21179, _add_help_rid_21183, _cmds_21178, _parse_options_21184, _help_on_error_21189, _auto_help_21190);
    _12174 = NOVALUE;
    // SubProg parse_commands pc: 443 op: NOP1 (159)
    // SubProg parse_commands pc: 444 op: STARTLINE (58)

    /** cmdline.e:1091				continue*/
    // SubProg parse_commands pc: 446 op: ELSE (23)
    goto L1; // [446] 34
    // SubProg parse_commands pc: 448 op: NOP1 (159)
L11: // addr: 449 pc: 448 sub: 21176 op: 159
    // SubProg parse_commands pc: 449 op: STARTLINE (58)

    /** cmdline.e:1094			sequence handle_result = handle_opt( find_result, arg_idx, opts, parsed_opts, cmds, add_help_rid,*/
    // SubProg parse_commands pc: 451 op: PROC (27)
    RefDS(_find_result_21193);
    RefDS(_opts_21179);
    Ref(_parsed_opts_21181);
    RefDS(_cmds_21178);
    Ref(_add_help_rid_21183);
    Ref(_parse_options_21184);
    RefDS(_call_count_21188);
    _0 = _handle_result_21261;
    _handle_result_21261 = _48handle_opt(_find_result_21193, _arg_idx_21191, _opts_21179, _parsed_opts_21181, _cmds_21178, _add_help_rid_21183, _parse_options_21184, _call_count_21188, _validation_21186, _help_on_error_21189, _auto_help_21190);
    DeRef(_0);
    // SubProg parse_commands pc: 465 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 467 op: STARTLINE (58)

    /** cmdline.e:1096			arg_idx     = handle_result[1]*/
    // SubProg parse_commands pc: 469 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_handle_result_21261);
    _arg_idx_21191 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_arg_idx_21191))
    _arg_idx_21191 = (object)DBL_PTR(_arg_idx_21191)->dbl;
    // SubProg parse_commands pc: 473 op: STARTLINE (58)

    /** cmdline.e:1097			call_count = handle_result[2]*/
    // SubProg parse_commands pc: 475 op: RHS_SUBS (25)
    DeRefDS(_call_count_21188);
    _2 = (object)SEQ_PTR(_handle_result_21261);
    _call_count_21188 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_21188);
    // SubProg parse_commands pc: 479 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var handle_result_21261
    DeRefDS(_handle_result_21261);
    _handle_result_21261 = NOVALUE;
    // SubProg parse_commands pc: 483 op: STARTLINE (58)

    /** cmdline.e:1098		end while*/
    // SubProg parse_commands pc: 485 op: ENDWHILE (22)
    goto L1; // [485] 34
    // SubProg parse_commands pc: 487 op: NOP1 (159)
L2: // addr: 488 pc: 487 sub: 21176 op: 159
    // SubProg parse_commands pc: 488 op: STARTLINE (58)

    /** cmdline.e:1099		return { cmds, call_count }*/
    // SubProg parse_commands pc: 490 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_21188);
    RefDS(_cmds_21178);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmds_21178;
    ((intptr_t *)_2)[2] = _call_count_21188;
    _12178 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 494 op: RETURNF (28)

// Exiting block BLOCK: parse_commands

// block var cmds_21178
    DeRefDS(_cmds_21178);

// block var opts_21179
    DeRefDS(_opts_21179);

// block var parsed_opts_21181
    DeRef(_parsed_opts_21181);

// block var help_opts_21182
    DeRefDS(_help_opts_21182);

// block var add_help_rid_21183
    DeRef(_add_help_rid_21183);

// block var parse_options_21184
    DeRef(_parse_options_21184);

// block var use_at_21185

// block var validation_21186

// block var has_extra_21187

// block var call_count_21188
    DeRefDS(_call_count_21188);

// block var help_on_error_21189

// block var auto_help_21190

// block var arg_idx_21191

// block var opts_done_21192

// block var find_result_21193
    DeRef(_find_result_21193);

// block var type__21194
    DeRef(_type__21194);

// block var from__21195

// block var cmd_21196
    DeRef(_cmd_21196);
    DeRef(_12141);
    _12141 = NOVALUE;
    DeRef(_12134);
    _12134 = NOVALUE;
    DeRef(_12171);
    _12171 = NOVALUE;
    DeRef(_12144);
    _12144 = NOVALUE;
    DeRef(_12146);
    _12146 = NOVALUE;
    DeRef(_12167);
    _12167 = NOVALUE;
    DeRef(_12169);
    _12169 = NOVALUE;
    return _12178;
    // SubProg parse_commands pc: 498 op: BADRETURNF (43)
    ;
}


object _48handle_opt(object _find_result_21269, object _arg_idx_21270, object _opts_21271, object _parsed_opts_21273, object _cmds_21274, object _add_help_rid_21275, object _parse_options_21276, object _call_count_21277, object _validation_21278, object _help_on_error_21279, object _auto_help_21280)
{
    object _map_add_operation_21281 = NOVALUE;
    object _opt_21282 = NOVALUE;
    object _param_21285 = NOVALUE;
    object _pos_21323 = NOVALUE;
    object _ver_pos_21369 = NOVALUE;
    object _msg_inlined_crash_at_524_21386 = NOVALUE;
    object _fmt_inlined_crash_at_521_21385 = NOVALUE;
    object _12257 = NOVALUE; // 21387 12257
    object _12256 = NOVALUE; // 21383 12256
    object _12253 = NOVALUE; // 21379 12253
    object _12252 = NOVALUE; // 21378 12252
    object _12251 = NOVALUE; // 21377 12251
// skipping _12250  name type: 0
    object _12249 = NOVALUE; // 21375 12249
    object _12248 = NOVALUE; // 21374 12248
// skipping _12247  name type: 0
    object _12246 = NOVALUE; // 21371 12246
    object _12245 = NOVALUE; // 21370 12245
    object _12244 = NOVALUE; // 21368 12244
    object _12243 = NOVALUE; // 21367 12243
    object _12242 = NOVALUE; // 21365 12242
    object _12241 = NOVALUE; // 21363 12241
    object _12240 = NOVALUE; // 21361 12240
    object _12239 = NOVALUE; // 21360 12239
    object _12237 = NOVALUE; // 21358 12237
    object _12236 = NOVALUE; // 21357 12236
// skipping _12235  name type: 0
    object _12234 = NOVALUE; // 21355 12234
    object _12233 = NOVALUE; // 21354 12233
    object _12232 = NOVALUE; // 21352 12232
    object _12231 = NOVALUE; // 21351 12231
    object _12230 = NOVALUE; // 21350 12230
    object _12229 = NOVALUE; // 21349 12229
    object _12228 = NOVALUE; // 21348 12228
    object _12227 = NOVALUE; // 21347 12227
// skipping _12226  name type: 0
    object _12225 = NOVALUE; // 21344 12225
    object _12224 = NOVALUE; // 21343 12224
    object _12223 = NOVALUE; // 21340 12223
// skipping _12222  name type: 0
    object _12221 = NOVALUE; // 21338 12221
    object _12220 = NOVALUE; // 21336 12220
// skipping _12219  name type: 0
    object _12218 = NOVALUE; // 21334 12218
    object _12217 = NOVALUE; // 21333 12217
    object _12216 = NOVALUE; // 21332 12216
    object _12215 = NOVALUE; // 21331 12215
    object _12214 = NOVALUE; // 21330 12214
    object _12213 = NOVALUE; // 21329 12213
    object _12212 = NOVALUE; // 21328 12212
    object _12211 = NOVALUE; // 21326 12211
    object _12210 = NOVALUE; // 21325 12210
// skipping _12209  name type: 0
// skipping _12208  name type: 0
    object _12207 = NOVALUE; // 21321 12207
// skipping _12206  name type: 0
// skipping _12205  name type: 0
    object _12204 = NOVALUE; // 21315 12204
    object _12203 = NOVALUE; // 21314 12203
    object _12201 = NOVALUE; // 21312 12201
    object _12200 = NOVALUE; // 21311 12200
    object _12199 = NOVALUE; // 21310 12199
    object _12198 = NOVALUE; // 21309 12198
    object _12197 = NOVALUE; // 21308 12197
    object _12196 = NOVALUE; // 21307 12196
    object _12195 = NOVALUE; // 21304 12195
    object _12193 = NOVALUE; // 21302 12193
    object _12192 = NOVALUE; // 21301 12192
    object _12191 = NOVALUE; // 21300 12191
    object _12190 = NOVALUE; // 21299 12190
// skipping _12189  name type: 0
// skipping _12188  name type: 0
    object _12187 = NOVALUE; // 21295 12187
// skipping _12186  name type: 0
// skipping _12185  name type: 0
    object _12184 = NOVALUE; // 21291 12184
// skipping _12183  name type: 0
    object _12182 = NOVALUE; // 21288 12182
    object _12181 = NOVALUE; // 21287 12181
// skipping _12180  name type: 0
    object _12179 = NOVALUE; // 21283 12179
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg handle_opt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 3 op: INTEGER_CHECK (96)
    // SubProg handle_opt pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 7 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 11 op: INTEGER_CHECK (96)
    // SubProg handle_opt pc: 13 op: INTEGER_CHECK (96)
    // SubProg handle_opt pc: 15 op: INTEGER_CHECK (96)
    // SubProg handle_opt pc: 17 op: STARTLINE (58)

    /** cmdline.e:1110		integer map_add_operation = map:ADD*/
    // SubProg handle_opt pc: 19 op: ASSIGN_I (113)
    _map_add_operation_21281 = 2;
    // SubProg handle_opt pc: 22 op: STARTLINE (58)

    /** cmdline.e:1111		sequence opt = opts[find_result[1]]*/
    // SubProg handle_opt pc: 24 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21269);
    _12179 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 28 op: RHS_SUBS (25)
    DeRef(_opt_21282);
    _2 = (object)SEQ_PTR(_opts_21271);
    if (!IS_ATOM_INT(_12179)){
        _opt_21282 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_12179)->dbl));
    }
    else{
        _opt_21282 = (object)*(((s1_ptr)_2)->base + _12179);
    }
    Ref(_opt_21282);
    // SubProg handle_opt pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 34 op: STARTLINE (58)

    /** cmdline.e:1114		if find(HAS_PARAMETER, opt[OPTIONS]) != 0 then*/
    // SubProg handle_opt pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12181 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 40 op: FIND_FROM (176)
    _12182 = find_from(112, _12181, 1);
    _12181 = NOVALUE;
    // SubProg handle_opt pc: 45 op: NOTEQ_IFW_I (122)
    if (_12182 == 0)
    goto L1; // [45] 194
    // SubProg handle_opt pc: 49 op: STARTLINE (58)

    /** cmdline.e:1115			map_add_operation = map:APPEND*/
    // SubProg handle_opt pc: 51 op: ASSIGN_I (113)
    _map_add_operation_21281 = 6;
    // SubProg handle_opt pc: 54 op: STARTLINE (58)

    /** cmdline.e:1116			if length(find_result) < 4 then*/
    // SubProg handle_opt pc: 56 op: LENGTH (42)
    if (IS_SEQUENCE(_find_result_21269)){
            _12184 = SEQ_PTR(_find_result_21269)->length;
    }
    else {
        _12184 = 1;
    }
    // SubProg handle_opt pc: 59 op: LESS_IFW_I (119)
    if (_12184 >= 4)
    goto L2; // [59] 184
    // SubProg handle_opt pc: 63 op: STARTLINE (58)

    /** cmdline.e:1117				arg_idx += 1*/
    // SubProg handle_opt pc: 65 op: PLUS1_I (117)
    _arg_idx_21270 = _arg_idx_21270 + 1;
    // SubProg handle_opt pc: 69 op: STARTLINE (58)

    /** cmdline.e:1118				if arg_idx <= length(cmds) then*/
    // SubProg handle_opt pc: 71 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_21274)){
            _12187 = SEQ_PTR(_cmds_21274)->length;
    }
    else {
        _12187 = 1;
    }
    // SubProg handle_opt pc: 74 op: LESSEQ_IFW_I (123)
    if (_arg_idx_21270 > _12187)
    goto L3; // [74] 119
    // SubProg handle_opt pc: 78 op: STARTLINE (58)

    /** cmdline.e:1119					param = cmds[arg_idx]*/
    // SubProg handle_opt pc: 80 op: RHS_SUBS (25)
    DeRef(_param_21285);
    _2 = (object)SEQ_PTR(_cmds_21274);
    _param_21285 = (object)*(((s1_ptr)_2)->base + _arg_idx_21270);
    Ref(_param_21285);
    // SubProg handle_opt pc: 84 op: STARTLINE (58)

    /** cmdline.e:1120					if length(param) = 2 and find(param[1], "-/") then*/
    // SubProg handle_opt pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_param_21285)){
            _12190 = SEQ_PTR(_param_21285)->length;
    }
    else {
        _12190 = 1;
    }
    // SubProg handle_opt pc: 89 op: EQUALS (3)
    _12191 = (_12190 == 2);
    _12190 = NOVALUE;
    // SubProg handle_opt pc: 93 op: SC1_AND_IF (146)
    if (_12191 == 0) {
        goto L4; // [93] 125
    }
    // SubProg handle_opt pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_param_21285);
    _12193 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 101 op: FIND_FROM (176)
    _12195 = find_from(_12193, _12194, 1);
    _12193 = NOVALUE;
    // SubProg handle_opt pc: 106 op: NOP1 (159)
    // SubProg handle_opt pc: 107 op: IF (20)
    if (_12195 == 0)
    {
        _12195 = NOVALUE;
        goto L4; // [107] 125
    }
    else{
        _12195 = NOVALUE;
    }
    // SubProg handle_opt pc: 110 op: STARTLINE (58)

    /** cmdline.e:1121						param = ""*/
    // SubProg handle_opt pc: 112 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_param_21285);
    _param_21285 = _5;
    // SubProg handle_opt pc: 115 op: NOP1 (159)
    // SubProg handle_opt pc: 116 op: ELSE (23)
    goto L4; // [116] 125
    // SubProg handle_opt pc: 118 op: NOP1 (159)
L3: // addr: 119 pc: 118 sub: 21267 op: 159
    // SubProg handle_opt pc: 119 op: STARTLINE (58)

    /** cmdline.e:1124					param = ""*/
    // SubProg handle_opt pc: 121 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_param_21285);
    _param_21285 = _5;
    // SubProg handle_opt pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 21267 op: 159
    // SubProg handle_opt pc: 125 op: STARTLINE (58)

    /** cmdline.e:1127				if length(param) = 0 and (validation = VALIDATE_ALL or (*/
    // SubProg handle_opt pc: 127 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 129 op: LENGTH (42)
    if (IS_SEQUENCE(_param_21285)){
            _12196 = SEQ_PTR(_param_21285)->length;
    }
    else {
        _12196 = 1;
    }
    // SubProg handle_opt pc: 132 op: EQUALS (3)
    _12197 = (_12196 == 0);
    _12196 = NOVALUE;
    // SubProg handle_opt pc: 136 op: SC1_AND_IF (146)
    if (_12197 == 0) {
        goto L5; // [136] 201
    }
    // SubProg handle_opt pc: 140 op: EQUALS (3)
    _12199 = (_validation_21278 == 2);
    // SubProg handle_opt pc: 144 op: SC1_OR (143)
    if (_12199 != 0) {
        DeRef(_12200);
        _12200 = 1;
        goto L6; // [144] 156
    }
    // SubProg handle_opt pc: 148 op: EQUALS (3)
    _12201 = (_validation_21278 == 4);
    // SubProg handle_opt pc: 152 op: SC2_OR (144)
    _12200 = (_12201 != 0);
    // SubProg handle_opt pc: 155 op: NOP1 (159)
L6: // addr: 156 pc: 155 sub: 21267 op: 159
    // SubProg handle_opt pc: 156 op: NOP1 (159)
    // SubProg handle_opt pc: 157 op: IF (20)
    if (_12200 == 0)
    {
        _12200 = NOVALUE;
        goto L5; // [157] 201
    }
    else{
        _12200 = NOVALUE;
    }
    // SubProg handle_opt pc: 160 op: STARTLINE (58)

    /** cmdline.e:1130					parse_abort( "option '%s' must have a parameter\n\n", {find_result[2]}, */
    // SubProg handle_opt pc: 162 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21269);
    _12203 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg handle_opt pc: 166 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12203);
    ((intptr_t*)_2)[1] = _12203;
    _12204 = MAKE_SEQ(_1);
    _12203 = NOVALUE;
    // SubProg handle_opt pc: 170 op: PROC (27)
    RefDS(_12202);
    RefDS(_opts_21271);
    Ref(_add_help_rid_21275);
    RefDS(_cmds_21274);
    Ref(_parse_options_21276);
    _48parse_abort(_12202, _12204, _opts_21271, _add_help_rid_21275, _cmds_21274, _parse_options_21276, _help_on_error_21279, _auto_help_21280);
    _12204 = NOVALUE;
    // SubProg handle_opt pc: 180 op: NOP1 (159)
    // SubProg handle_opt pc: 181 op: ELSE (23)
    goto L5; // [181] 201
    // SubProg handle_opt pc: 183 op: NOP1 (159)
L2: // addr: 184 pc: 183 sub: 21267 op: 159
    // SubProg handle_opt pc: 184 op: STARTLINE (58)

    /** cmdline.e:1134				param = find_result[4]*/
    // SubProg handle_opt pc: 186 op: RHS_SUBS (25)
    DeRef(_param_21285);
    _2 = (object)SEQ_PTR(_find_result_21269);
    _param_21285 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_21285);
    // SubProg handle_opt pc: 190 op: NOP1 (159)
    // SubProg handle_opt pc: 191 op: ELSE (23)
    goto L5; // [191] 201
    // SubProg handle_opt pc: 193 op: NOP1 (159)
L1: // addr: 194 pc: 193 sub: 21267 op: 159
    // SubProg handle_opt pc: 194 op: STARTLINE (58)

    /** cmdline.e:1137			param = find_result[4]*/
    // SubProg handle_opt pc: 196 op: RHS_SUBS (25)
    DeRef(_param_21285);
    _2 = (object)SEQ_PTR(_find_result_21269);
    _param_21285 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_21285);
    // SubProg handle_opt pc: 200 op: NOP1 (159)
L5: // addr: 201 pc: 200 sub: 21267 op: 159
    // SubProg handle_opt pc: 201 op: STARTLINE (58)

    /** cmdline.e:1140		if opt[CALLBACK] >= 0 then*/
    // SubProg handle_opt pc: 203 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12207 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg handle_opt pc: 207 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _12207, 0)){
        _12207 = NOVALUE;
        goto L7; // [207] 282
    }
    _12207 = NOVALUE;
    // SubProg handle_opt pc: 211 op: STARTLINE (58)

    /** cmdline.e:1141			integer pos = find_result[1]*/
    // SubProg handle_opt pc: 213 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_find_result_21269);
    _pos_21323 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_pos_21323))
    _pos_21323 = (object)DBL_PTR(_pos_21323)->dbl;
    // SubProg handle_opt pc: 217 op: STARTLINE (58)

    /** cmdline.e:1142			call_count[pos] += 1*/
    // SubProg handle_opt pc: 219 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_call_count_21277);
    _12210 = (object)*(((s1_ptr)_2)->base + _pos_21323);
    // SubProg handle_opt pc: 223 op: PLUS1 (93)
    if (IS_ATOM_INT(_12210)) {
        _12211 = _12210 + 1;
        if (_12211 > MAXINT){
            _12211 = NewDouble((eudouble)_12211);
        }
    }
    else
    _12211 = binary_op(PLUS, 1, _12210);
    _12210 = NOVALUE;
    // SubProg handle_opt pc: 227 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_call_count_21277);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _call_count_21277 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pos_21323);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _12211;
    if( _1 != _12211 ){
        DeRef(_1);
    }
    _12211 = NOVALUE;
    // SubProg handle_opt pc: 231 op: STARTLINE (58)

    /** cmdline.e:1144			if call_func(opt[CALLBACK], {{find_result[1], call_count[pos], param,  find_result[3]}}) = 0 then*/
    // SubProg handle_opt pc: 233 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12212 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg handle_opt pc: 237 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21269);
    _12213 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 241 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_call_count_21277);
    _12214 = (object)*(((s1_ptr)_2)->base + _pos_21323);
    // SubProg handle_opt pc: 245 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 247 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21269);
    _12215 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg handle_opt pc: 251 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12213);
    ((intptr_t*)_2)[1] = _12213;
    Ref(_12214);
    ((intptr_t*)_2)[2] = _12214;
    Ref(_param_21285);
    ((intptr_t*)_2)[3] = _param_21285;
    Ref(_12215);
    ((intptr_t*)_2)[4] = _12215;
    _12216 = MAKE_SEQ(_1);
    _12215 = NOVALUE;
    _12214 = NOVALUE;
    _12213 = NOVALUE;
    // SubProg handle_opt pc: 258 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12216;
    _12217 = MAKE_SEQ(_1);
    _12216 = NOVALUE;
    // SubProg handle_opt pc: 262 op: CALL_FUNC (137)
    _1 = (object)SEQ_PTR(_12217);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_12212].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    _1 = (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRef(_12218);
    _12218 = _1;
    DeRefDS(_12217);
    _12217 = NOVALUE;
    // SubProg handle_opt pc: 266 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12218, 0)){
        DeRef(_12218);
        _12218 = NOVALUE;
        goto L8; // [266] 281
    }
    DeRef(_12218);
    _12218 = NOVALUE;
    // SubProg handle_opt pc: 270 op: STARTLINE (58)

    /** cmdline.e:1145				return { arg_idx, call_count }*/
    // SubProg handle_opt pc: 272 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_21277);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_21270;
    ((intptr_t *)_2)[2] = _call_count_21277;
    _12220 = MAKE_SEQ(_1);
    // SubProg handle_opt pc: 276 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var pos_21323

// Exiting block BLOCK: handle_opt

// block var find_result_21269
    DeRefDS(_find_result_21269);

// block var arg_idx_21270

// block var opts_21271
    DeRefDS(_opts_21271);

// block var parsed_opts_21273
    DeRef(_parsed_opts_21273);

// block var cmds_21274
    DeRefDS(_cmds_21274);

// block var add_help_rid_21275
    DeRef(_add_help_rid_21275);

// block var parse_options_21276
    DeRef(_parse_options_21276);

// block var call_count_21277
    DeRefDS(_call_count_21277);

// block var validation_21278

// block var help_on_error_21279

// block var auto_help_21280

// block var map_add_operation_21281

// block var opt_21282
    DeRefDS(_opt_21282);

// block var param_21285
    DeRef(_param_21285);
    DeRef(_12201);
    _12201 = NOVALUE;
    DeRef(_12191);
    _12191 = NOVALUE;
    DeRef(_12197);
    _12197 = NOVALUE;
    _12179 = NOVALUE;
    DeRef(_12199);
    _12199 = NOVALUE;
    _12212 = NOVALUE;
    return _12220;
    // SubProg handle_opt pc: 280 op: NOP1 (159)
L8: // addr: 281 pc: 280 sub: 21267 op: 159
    // SubProg handle_opt pc: 281 op: NOP1 (159)
L7: // addr: 282 pc: 281 sub: 21267 op: 159
    // SubProg handle_opt pc: 282 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pos_21323
    // SubProg handle_opt pc: 284 op: STARTLINE (58)

    /** cmdline.e:1149		if find_result[3] = 1 then*/
    // SubProg handle_opt pc: 286 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21269);
    _12221 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg handle_opt pc: 290 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12221, 1)){
        _12221 = NOVALUE;
        goto L9; // [290] 307
    }
    _12221 = NOVALUE;
    // SubProg handle_opt pc: 294 op: STARTLINE (58)

    /** cmdline.e:1150			map:remove(parsed_opts, opt[MAPNAME])*/
    // SubProg handle_opt pc: 296 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12223 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 300 op: PROC (27)
    Ref(_parsed_opts_21273);
    Ref(_12223);
    _33remove(_parsed_opts_21273, _12223);
    _12223 = NOVALUE;
    // SubProg handle_opt pc: 304 op: ELSE (23)
    goto LA; // [304] 446
    // SubProg handle_opt pc: 306 op: NOP1 (159)
L9: // addr: 307 pc: 306 sub: 21267 op: 159
    // SubProg handle_opt pc: 307 op: STARTLINE (58)

    /** cmdline.e:1152			if find(MULTIPLE, opt[OPTIONS]) = 0 then*/
    // SubProg handle_opt pc: 309 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12224 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 313 op: FIND_FROM (176)
    _12225 = find_from(42, _12224, 1);
    _12224 = NOVALUE;
    // SubProg handle_opt pc: 318 op: EQUALS_IFW_I (121)
    if (_12225 != 0)
    goto LB; // [318] 429
    // SubProg handle_opt pc: 322 op: STARTLINE (58)

    /** cmdline.e:1153				if map:has(parsed_opts, opt[MAPNAME]) and (validation = VALIDATE_ALL or*/
    // SubProg handle_opt pc: 324 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12227 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 328 op: PROC (27)
    Ref(_parsed_opts_21273);
    Ref(_12227);
    _12228 = _33has(_parsed_opts_21273, _12227);
    _12227 = NOVALUE;
    // SubProg handle_opt pc: 333 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12228)) {
        if (_12228 == 0) {
            goto LC; // [333] 410
        }
    }
    else {
        if (DBL_PTR(_12228)->dbl == 0.0) {
            goto LC; // [333] 410
        }
    }
    // SubProg handle_opt pc: 337 op: EQUALS (3)
    _12230 = (_validation_21278 == 2);
    // SubProg handle_opt pc: 341 op: SC1_OR (143)
    if (_12230 != 0) {
        DeRef(_12231);
        _12231 = 1;
        goto LD; // [341] 353
    }
    // SubProg handle_opt pc: 345 op: EQUALS (3)
    _12232 = (_validation_21278 == 4);
    // SubProg handle_opt pc: 349 op: SC2_OR (144)
    _12231 = (_12232 != 0);
    // SubProg handle_opt pc: 352 op: NOP1 (159)
LD: // addr: 353 pc: 352 sub: 21267 op: 159
    // SubProg handle_opt pc: 353 op: NOP1 (159)
    // SubProg handle_opt pc: 354 op: IF (20)
    if (_12231 == 0)
    {
        _12231 = NOVALUE;
        goto LC; // [354] 410
    }
    else{
        _12231 = NOVALUE;
    }
    // SubProg handle_opt pc: 357 op: STARTLINE (58)

    /** cmdline.e:1156					if find(HAS_PARAMETER, opt[OPTIONS]) or find(ONCE, opt[OPTIONS]) then*/
    // SubProg handle_opt pc: 359 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12233 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 363 op: FIND_FROM (176)
    _12234 = find_from(112, _12233, 1);
    _12233 = NOVALUE;
    // SubProg handle_opt pc: 368 op: SC1_OR_IF (147)
    if (_12234 != 0) {
        goto LE; // [368] 386
    }
    // SubProg handle_opt pc: 372 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12236 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 376 op: FIND_FROM (176)
    _12237 = find_from(49, _12236, 1);
    _12236 = NOVALUE;
    // SubProg handle_opt pc: 381 op: NOP1 (159)
    // SubProg handle_opt pc: 382 op: IF (20)
    if (_12237 == 0)
    {
        _12237 = NOVALUE;
        goto LF; // [382] 445
    }
    else{
        _12237 = NOVALUE;
    }
    // SubProg handle_opt pc: 385 op: NOP1 (159)
LE: // addr: 386 pc: 385 sub: 21267 op: 159
    // SubProg handle_opt pc: 386 op: STARTLINE (58)

    /** cmdline.e:1157						parse_abort( "option '%s' must not occur more than once in the command line.\n\n", */
    // SubProg handle_opt pc: 388 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21269);
    _12239 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg handle_opt pc: 392 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12239);
    ((intptr_t*)_2)[1] = _12239;
    _12240 = MAKE_SEQ(_1);
    _12239 = NOVALUE;
    // SubProg handle_opt pc: 396 op: PROC (27)
    RefDS(_12238);
    RefDS(_opts_21271);
    Ref(_add_help_rid_21275);
    RefDS(_cmds_21274);
    Ref(_parse_options_21276);
    _48parse_abort(_12238, _12240, _opts_21271, _add_help_rid_21275, _cmds_21274, _parse_options_21276, _help_on_error_21279, _auto_help_21280);
    _12240 = NOVALUE;
    // SubProg handle_opt pc: 406 op: NOP1 (159)
    // SubProg handle_opt pc: 407 op: ELSE (23)
    goto LF; // [407] 445
    // SubProg handle_opt pc: 409 op: NOP1 (159)
LC: // addr: 410 pc: 409 sub: 21267 op: 159
    // SubProg handle_opt pc: 410 op: STARTLINE (58)

    /** cmdline.e:1161					map:put(parsed_opts, opt[MAPNAME], param)*/
    // SubProg handle_opt pc: 412 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12241 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 416 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 418 op: PROC (27)
    Ref(_parsed_opts_21273);
    Ref(_12241);
    Ref(_param_21285);
    _33put(_parsed_opts_21273, _12241, _param_21285, 1, 0);
    _12241 = NOVALUE;
    // SubProg handle_opt pc: 425 op: NOP1 (159)
    // SubProg handle_opt pc: 426 op: ELSE (23)
    goto LF; // [426] 445
    // SubProg handle_opt pc: 428 op: NOP1 (159)
LB: // addr: 429 pc: 428 sub: 21267 op: 159
    // SubProg handle_opt pc: 429 op: STARTLINE (58)

    /** cmdline.e:1164				map:put(parsed_opts, opt[MAPNAME], param, map_add_operation)*/
    // SubProg handle_opt pc: 431 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12242 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 435 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 437 op: PROC (27)
    Ref(_parsed_opts_21273);
    Ref(_12242);
    Ref(_param_21285);
    _33put(_parsed_opts_21273, _12242, _param_21285, _map_add_operation_21281, 0);
    _12242 = NOVALUE;
    // SubProg handle_opt pc: 444 op: NOP1 (159)
LF: // addr: 445 pc: 444 sub: 21267 op: 159
    // SubProg handle_opt pc: 445 op: NOP1 (159)
LA: // addr: 446 pc: 445 sub: 21267 op: 159
    // SubProg handle_opt pc: 446 op: STARTLINE (58)

    /** cmdline.e:1168		if find(VERSIONING, opt[OPTIONS]) then*/
    // SubProg handle_opt pc: 448 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12243 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 452 op: FIND_FROM (176)
    _12244 = find_from(118, _12243, 1);
    _12243 = NOVALUE;
    // SubProg handle_opt pc: 457 op: IF (20)
    if (_12244 == 0)
    {
        _12244 = NOVALUE;
        goto L10; // [457] 544
    }
    else{
        _12244 = NOVALUE;
    }
    // SubProg handle_opt pc: 460 op: STARTLINE (58)

    /** cmdline.e:1169			integer ver_pos = find(VERSIONING, opt[OPTIONS]) + 1*/
    // SubProg handle_opt pc: 462 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12245 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 466 op: FIND_FROM (176)
    _12246 = find_from(118, _12245, 1);
    _12245 = NOVALUE;
    // SubProg handle_opt pc: 471 op: PLUS1_I (117)
    _ver_pos_21369 = _12246 + 1;
    _12246 = NOVALUE;
    // SubProg handle_opt pc: 475 op: STARTLINE (58)

    /** cmdline.e:1170			if length(opt[OPTIONS]) >= ver_pos then*/
    // SubProg handle_opt pc: 477 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12248 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 481 op: LENGTH (42)
    if (IS_SEQUENCE(_12248)){
            _12249 = SEQ_PTR(_12248)->length;
    }
    else {
        _12249 = 1;
    }
    _12248 = NOVALUE;
    // SubProg handle_opt pc: 484 op: GREATEREQ_IFW_I (120)
    if (_12249 < _ver_pos_21369)
    goto L11; // [484] 513
    // SubProg handle_opt pc: 488 op: STARTLINE (58)

    /** cmdline.e:1171				printf(1, "%s\n", { opt[OPTIONS][ver_pos] })*/
    // SubProg handle_opt pc: 490 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21282);
    _12251 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 494 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12251);
    _12252 = (object)*(((s1_ptr)_2)->base + _ver_pos_21369);
    _12251 = NOVALUE;
    // SubProg handle_opt pc: 498 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12252);
    ((intptr_t*)_2)[1] = _12252;
    _12253 = MAKE_SEQ(_1);
    _12252 = NOVALUE;
    // SubProg handle_opt pc: 502 op: PRINTF (38)
    EPrintf(1, _9164, _12253);
    DeRefDS(_12253);
    _12253 = NOVALUE;
    // SubProg handle_opt pc: 506 op: STARTLINE (58)

    /** cmdline.e:1172				abort(0)*/
    // SubProg handle_opt pc: 508 op: ABORT (126)
    UserCleanup(0);
    // SubProg handle_opt pc: 510 op: ELSE (23)
    goto L12; // [510] 543
    // SubProg handle_opt pc: 512 op: NOP1 (159)
L11: // addr: 513 pc: 512 sub: 21267 op: 159
    // SubProg handle_opt pc: 513 op: STARTLINE (58)

    /** cmdline.e:1174				error:crash("help options are incorrect,\n" &*/
    // SubProg handle_opt pc: 515 op: CONCAT (15)
    Concat((object_ptr)&_12256, _12254, _12255);
    // SubProg handle_opt pc: 519 op: ASSIGN (18)
    DeRefi(_fmt_inlined_crash_at_521_21385);
    _fmt_inlined_crash_at_521_21385 = _12256;
    _12256 = NOVALUE;
    // SubProg handle_opt pc: 522 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 524 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg handle_opt pc: 526 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_524_21386);
    _msg_inlined_crash_at_524_21386 = EPrintf(-9999999, _fmt_inlined_crash_at_521_21385, _5);
    // SubProg handle_opt pc: 530 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg handle_opt pc: 532 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_524_21386);
    // SubProg handle_opt pc: 535 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg handle_opt pc: 537 op: ELSE (23)
    goto L13; // [537] 540
    // SubProg handle_opt pc: 539 op: NOP1 (159)
L13: // addr: 540 pc: 539 sub: 21267 op: 159
    // SubProg handle_opt pc: 540 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from handle_opt @ 521

// block var fmt_inlined_crash_at_521_21385
    DeRefi(_fmt_inlined_crash_at_521_21385);
    _fmt_inlined_crash_at_521_21385 = NOVALUE;

// block var msg_inlined_crash_at_524_21386
    DeRefi(_msg_inlined_crash_at_524_21386);
    _msg_inlined_crash_at_524_21386 = NOVALUE;
    // SubProg handle_opt pc: 542 op: NOP1 (159)
L12: // addr: 543 pc: 542 sub: 21267 op: 159
    // SubProg handle_opt pc: 543 op: NOP1 (159)
L10: // addr: 544 pc: 543 sub: 21267 op: 159
    // SubProg handle_opt pc: 544 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ver_pos_21369
    // SubProg handle_opt pc: 546 op: STARTLINE (58)

    /** cmdline.e:1178		return {arg_idx, call_count}*/
    // SubProg handle_opt pc: 548 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_21277);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_21270;
    ((intptr_t *)_2)[2] = _call_count_21277;
    _12257 = MAKE_SEQ(_1);
    // SubProg handle_opt pc: 552 op: RETURNF (28)

// Exiting block BLOCK: handle_opt

// block var find_result_21269
    DeRefDS(_find_result_21269);

// block var arg_idx_21270

// block var opts_21271
    DeRefDS(_opts_21271);

// block var parsed_opts_21273
    DeRef(_parsed_opts_21273);

// block var cmds_21274
    DeRefDS(_cmds_21274);

// block var add_help_rid_21275
    DeRef(_add_help_rid_21275);

// block var parse_options_21276
    DeRef(_parse_options_21276);

// block var call_count_21277
    DeRefDS(_call_count_21277);

// block var validation_21278

// block var help_on_error_21279

// block var auto_help_21280

// block var map_add_operation_21281

// block var opt_21282
    DeRef(_opt_21282);

// block var param_21285
    DeRef(_param_21285);
    DeRef(_12230);
    _12230 = NOVALUE;
    DeRef(_12220);
    _12220 = NOVALUE;
    DeRef(_12201);
    _12201 = NOVALUE;
    DeRef(_12191);
    _12191 = NOVALUE;
    DeRef(_12197);
    _12197 = NOVALUE;
    _12179 = NOVALUE;
    DeRef(_12232);
    _12232 = NOVALUE;
    DeRef(_12228);
    _12228 = NOVALUE;
    DeRef(_12199);
    _12199 = NOVALUE;
    _12212 = NOVALUE;
    _12248 = NOVALUE;
    return _12257;
    // SubProg handle_opt pc: 556 op: BADRETURNF (43)
    ;
}


object _48cmd_parse(object _opts_21390, object _parse_options_21391, object _cmds_21392)
{
    object _cmd_21394 = NOVALUE;
    object _help_opts_21395 = NOVALUE;
    object _call_count_21396 = NOVALUE;
    object _add_help_rid_21397 = NOVALUE;
    object _validation_21398 = NOVALUE;
    object _has_extra_21399 = NOVALUE;
    object _use_at_21400 = NOVALUE;
    object _auto_help_21401 = NOVALUE;
    object _help_on_error_21402 = NOVALUE;
    object _po_21403 = NOVALUE;
    object _msg_inlined_crash_at_161_21427 = NOVALUE;
    object _msg_inlined_crash_at_225_21438 = NOVALUE;
    object _msg_inlined_crash_at_263_21445 = NOVALUE;
    object _fmt_inlined_crash_at_260_21444 = NOVALUE;
    object _parsed_opts_21450 = NOVALUE;
    object _new_1__tmp_at315_21453 = NOVALUE;
    object _new_inlined_new_at_315_21452 = NOVALUE;
    object _cmds_ok_21455 = NOVALUE;
// skipping _12286  name type: 0
// skipping _12285  name type: 0
    object _12284 = NOVALUE; // 21458 12284
// skipping _12283  name type: 0
// skipping _12282  name type: 0
// skipping _12281  name type: 0
    object _12280 = NOVALUE; // 21448 12280
// skipping _12279  name type: 0
// skipping _12278  name type: 0
    object _12277 = NOVALUE; // 21442 12277
    object _12276 = NOVALUE; // 21441 12276
// skipping _12273  name type: 0
// skipping _12272  name type: 0
// skipping _12271  name type: 0
    object _12270 = NOVALUE; // 21431 12270
// skipping _12269  name type: 0
// skipping _12268  name type: 0
// skipping _12267  name type: 0
    object _12266 = NOVALUE; // 21421 12266
    object _12263 = NOVALUE; // 21410 12263
// skipping _12262  name type: 0
    object _12261 = NOVALUE; // 21408 12261
// skipping _12260  name type: 0
    object _12259 = NOVALUE; // 21405 12259
// skipping _12258  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cmd_parse pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 5 op: STARTLINE (58)

    /** cmdline.e:1428		object add_help_rid = -1*/
    // SubProg cmd_parse pc: 7 op: ASSIGN (18)
    DeRef(_add_help_rid_21397);
    _add_help_rid_21397 = -1;
    // SubProg cmd_parse pc: 10 op: STARTLINE (58)

    /** cmdline.e:1429		integer validation = VALIDATE_ALL*/
    // SubProg cmd_parse pc: 12 op: ASSIGN_I (113)
    _validation_21398 = 2;
    // SubProg cmd_parse pc: 15 op: STARTLINE (58)

    /** cmdline.e:1430		integer has_extra = 0*/
    // SubProg cmd_parse pc: 17 op: ASSIGN_I (113)
    _has_extra_21399 = 0;
    // SubProg cmd_parse pc: 20 op: STARTLINE (58)

    /** cmdline.e:1431		integer use_at = 1*/
    // SubProg cmd_parse pc: 22 op: ASSIGN_I (113)
    _use_at_21400 = 1;
    // SubProg cmd_parse pc: 25 op: STARTLINE (58)

    /** cmdline.e:1432		integer auto_help = 1*/
    // SubProg cmd_parse pc: 27 op: ASSIGN_I (113)
    _auto_help_21401 = 1;
    // SubProg cmd_parse pc: 30 op: STARTLINE (58)

    /** cmdline.e:1433		integer help_on_error = 1*/
    // SubProg cmd_parse pc: 32 op: ASSIGN_I (113)
    _help_on_error_21402 = 1;
    // SubProg cmd_parse pc: 35 op: STARTLINE (58)

    /** cmdline.e:1435		integer po = 1*/
    // SubProg cmd_parse pc: 37 op: ASSIGN_I (113)
    _po_21403 = 1;
    // SubProg cmd_parse pc: 40 op: STARTLINE (58)

    /** cmdline.e:1436		if atom(parse_options) then*/
    // SubProg cmd_parse pc: 42 op: IS_AN_ATOM (67)
    _12259 = 0;
    // SubProg cmd_parse pc: 45 op: IF (20)
    if (_12259 == 0)
    {
        _12259 = NOVALUE;
        goto L1; // [45] 55
    }
    else{
        _12259 = NOVALUE;
    }
    // SubProg cmd_parse pc: 48 op: STARTLINE (58)

    /** cmdline.e:1437			parse_options = {parse_options}*/
    // SubProg cmd_parse pc: 50 op: RIGHT_BRACE_N (31)
    _0 = _parse_options_21391;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_parse_options_21391);
    ((intptr_t*)_2)[1] = _parse_options_21391;
    _parse_options_21391 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg cmd_parse pc: 54 op: NOP1 (159)
L1: // addr: 55 pc: 54 sub: 21388 op: 159
    // SubProg cmd_parse pc: 55 op: STARTLINE (58)

    /** cmdline.e:1441		while po <= length(parse_options) do*/
    // SubProg cmd_parse pc: 57 op: NOP2 (110)
    // SubProg cmd_parse pc: 59 op: NOPWHILE (158)
L2: // addr: 60 pc: 59 sub: 21388 op: 158
    // SubProg cmd_parse pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_parse_options_21391)){
            _12261 = SEQ_PTR(_parse_options_21391)->length;
    }
    else {
        _12261 = 1;
    }
    // SubProg cmd_parse pc: 63 op: LESSEQ_IFW_I (123)
    if (_po_21403 > _12261)
    goto L3; // [63] 296
    // SubProg cmd_parse pc: 67 op: STARTLINE (58)

    /** cmdline.e:1442			switch parse_options[po] do*/
    // SubProg cmd_parse pc: 69 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_parse_options_21391);
    _12263 = (object)*(((s1_ptr)_2)->base + _po_21403);
    // SubProg cmd_parse pc: 73 op: SWITCH_I (193)
    if (IS_SEQUENCE(_12263) ){
        goto L4; // [73] 249
    }
    if(!IS_ATOM_INT(_12263)){
        if( (DBL_PTR(_12263)->dbl != (eudouble) ((object) DBL_PTR(_12263)->dbl) ) ){
            goto L4; // [73] 249
        }
        _0 = (object) DBL_PTR(_12263)->dbl;
    }
    else {
        _0 = _12263;
    };
    _12263 = NOVALUE;
    switch ( _0 ){ 
        // SubProg cmd_parse pc: 78 op: STARTLINE (58)

        /** cmdline.e:1444				case NO_HELP then                         auto_help = 0*/
        // SubProg cmd_parse pc: 80 op: CASE (186)
        case 9:
        // SubProg cmd_parse pc: 82 op: ASSIGN_I (113)
        _auto_help_21401 = 0;
        // SubProg cmd_parse pc: 85 op: ELSE (23)
        goto L5; // [85] 285
        // SubProg cmd_parse pc: 87 op: STARTLINE (58)

        /** cmdline.e:1445				case VALIDATE_ALL then                    validation = VALIDATE_ALL*/
        // SubProg cmd_parse pc: 89 op: CASE (186)
        case 2:
        // SubProg cmd_parse pc: 91 op: ASSIGN_I (113)
        _validation_21398 = 2;
        // SubProg cmd_parse pc: 94 op: ELSE (23)
        goto L5; // [94] 285
        // SubProg cmd_parse pc: 96 op: STARTLINE (58)

        /** cmdline.e:1446				case NO_VALIDATION then                   validation = NO_VALIDATION*/
        // SubProg cmd_parse pc: 98 op: CASE (186)
        case 3:
        // SubProg cmd_parse pc: 100 op: ASSIGN_I (113)
        _validation_21398 = 3;
        // SubProg cmd_parse pc: 103 op: ELSE (23)
        goto L5; // [103] 285
        // SubProg cmd_parse pc: 105 op: STARTLINE (58)

        /** cmdline.e:1447				case NO_VALIDATION_AFTER_FIRST_EXTRA then validation = NO_VALIDATION_AFTER_FIRST_EXTRA*/
        // SubProg cmd_parse pc: 107 op: CASE (186)
        case 4:
        // SubProg cmd_parse pc: 109 op: ASSIGN_I (113)
        _validation_21398 = 4;
        // SubProg cmd_parse pc: 112 op: ELSE (23)
        goto L5; // [112] 285
        // SubProg cmd_parse pc: 114 op: STARTLINE (58)

        /** cmdline.e:1448				case NO_AT_EXPANSION then                 use_at = 0*/
        // SubProg cmd_parse pc: 116 op: CASE (186)
        case 7:
        // SubProg cmd_parse pc: 118 op: ASSIGN_I (113)
        _use_at_21400 = 0;
        // SubProg cmd_parse pc: 121 op: ELSE (23)
        goto L5; // [121] 285
        // SubProg cmd_parse pc: 123 op: STARTLINE (58)

        /** cmdline.e:1449				case AT_EXPANSION then                    use_at = 1*/
        // SubProg cmd_parse pc: 125 op: CASE (186)
        case 6:
        // SubProg cmd_parse pc: 127 op: ASSIGN_I (113)
        _use_at_21400 = 1;
        // SubProg cmd_parse pc: 130 op: ELSE (23)
        goto L5; // [130] 285
        // SubProg cmd_parse pc: 132 op: STARTLINE (58)

        /** cmdline.e:1451				case HELP_RID then*/
        // SubProg cmd_parse pc: 134 op: CASE (186)
        case 1:
        // SubProg cmd_parse pc: 136 op: STARTLINE (58)

        /** cmdline.e:1452					if po < length(parse_options) then*/
        // SubProg cmd_parse pc: 138 op: LENGTH (42)
        if (IS_SEQUENCE(_parse_options_21391)){
                _12266 = SEQ_PTR(_parse_options_21391)->length;
        }
        else {
            _12266 = 1;
        }
        // SubProg cmd_parse pc: 141 op: LESS_IFW_I (119)
        if (_po_21403 >= _12266)
        goto L6; // [141] 160
        // SubProg cmd_parse pc: 145 op: STARTLINE (58)

        /** cmdline.e:1453						po += 1*/
        // SubProg cmd_parse pc: 147 op: PLUS1_I (117)
        _po_21403 = _po_21403 + 1;
        // SubProg cmd_parse pc: 151 op: STARTLINE (58)

        /** cmdline.e:1454						add_help_rid = parse_options[po]*/
        // SubProg cmd_parse pc: 153 op: RHS_SUBS_CHECK (92)
        DeRef(_add_help_rid_21397);
        _2 = (object)SEQ_PTR(_parse_options_21391);
        _add_help_rid_21397 = (object)*(((s1_ptr)_2)->base + _po_21403);
        Ref(_add_help_rid_21397);
        // SubProg cmd_parse pc: 157 op: ELSE (23)
        goto L5; // [157] 285
        // SubProg cmd_parse pc: 159 op: NOP1 (159)
L6: // addr: 160 pc: 159 sub: 21388 op: 159
        // SubProg cmd_parse pc: 160 op: STARTLINE (58)

        /** cmdline.e:1456						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/
        // SubProg cmd_parse pc: 162 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 164 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_161_21427);
        _msg_inlined_crash_at_161_21427 = EPrintf(-9999999, _11813, _5);
        // SubProg cmd_parse pc: 168 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 170 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_161_21427);
        // SubProg cmd_parse pc: 173 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 175 op: ELSE (23)
        goto L7; // [175] 178
        // SubProg cmd_parse pc: 177 op: NOP1 (159)
L7: // addr: 178 pc: 177 sub: 21388 op: 159
        // SubProg cmd_parse pc: 178 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 161

// block var msg_inlined_crash_at_161_21427
        DeRefi(_msg_inlined_crash_at_161_21427);
        _msg_inlined_crash_at_161_21427 = NOVALUE;
        // SubProg cmd_parse pc: 180 op: NOP1 (159)
        // SubProg cmd_parse pc: 181 op: ELSE (23)
        goto L5; // [181] 285
        // SubProg cmd_parse pc: 183 op: STARTLINE (58)

        /** cmdline.e:1459				case NO_HELP_ON_ERROR then*/
        // SubProg cmd_parse pc: 185 op: CASE (186)
        case 10:
        // SubProg cmd_parse pc: 187 op: STARTLINE (58)

        /** cmdline.e:1461					help_on_error = 0*/
        // SubProg cmd_parse pc: 189 op: ASSIGN_I (113)
        _help_on_error_21402 = 0;
        // SubProg cmd_parse pc: 192 op: ELSE (23)
        goto L5; // [192] 285
        // SubProg cmd_parse pc: 194 op: STARTLINE (58)

        /** cmdline.e:1463				case PAUSE_MSG then*/
        // SubProg cmd_parse pc: 196 op: CASE (186)
        case 8:
        // SubProg cmd_parse pc: 198 op: STARTLINE (58)

        /** cmdline.e:1464					if po < length(parse_options) then*/
        // SubProg cmd_parse pc: 200 op: LENGTH (42)
        if (IS_SEQUENCE(_parse_options_21391)){
                _12270 = SEQ_PTR(_parse_options_21391)->length;
        }
        else {
            _12270 = 1;
        }
        // SubProg cmd_parse pc: 203 op: LESS_IFW_I (119)
        if (_po_21403 >= _12270)
        goto L8; // [203] 224
        // SubProg cmd_parse pc: 207 op: STARTLINE (58)

        /** cmdline.e:1465						po += 1*/
        // SubProg cmd_parse pc: 209 op: PLUS1_I (117)
        _po_21403 = _po_21403 + 1;
        // SubProg cmd_parse pc: 213 op: STARTLINE (58)

        /** cmdline.e:1466						pause_msg = parse_options[po]*/
        // SubProg cmd_parse pc: 215 op: RHS_SUBS_CHECK (92)
        DeRef(_48pause_msg_20261);
        _2 = (object)SEQ_PTR(_parse_options_21391);
        _48pause_msg_20261 = (object)*(((s1_ptr)_2)->base + _po_21403);
        Ref(_48pause_msg_20261);
        // SubProg cmd_parse pc: 219 op: SEQUENCE_CHECK (97)
        // SubProg cmd_parse pc: 221 op: ELSE (23)
        goto L5; // [221] 285
        // SubProg cmd_parse pc: 223 op: NOP1 (159)
L8: // addr: 224 pc: 223 sub: 21388 op: 159
        // SubProg cmd_parse pc: 224 op: STARTLINE (58)

        /** cmdline.e:1468						error:crash("PAUSE_MSG was given to cmd_parse with no actual message text")*/
        // SubProg cmd_parse pc: 226 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 228 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_225_21438);
        _msg_inlined_crash_at_225_21438 = EPrintf(-9999999, _12274, _5);
        // SubProg cmd_parse pc: 232 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 234 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_225_21438);
        // SubProg cmd_parse pc: 237 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 239 op: ELSE (23)
        goto L9; // [239] 242
        // SubProg cmd_parse pc: 241 op: NOP1 (159)
L9: // addr: 242 pc: 241 sub: 21388 op: 159
        // SubProg cmd_parse pc: 242 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 225

// block var msg_inlined_crash_at_225_21438
        DeRefi(_msg_inlined_crash_at_225_21438);
        _msg_inlined_crash_at_225_21438 = NOVALUE;
        // SubProg cmd_parse pc: 244 op: NOP1 (159)
        // SubProg cmd_parse pc: 245 op: ELSE (23)
        goto L5; // [245] 285
        // SubProg cmd_parse pc: 247 op: STARTLINE (58)

        /** cmdline.e:1471				case else*/
        // SubProg cmd_parse pc: 249 op: CASE (186)
        default:
L4: // addr: 249 pc: 249 sub: 21388 op: 186
        // SubProg cmd_parse pc: 251 op: STARTLINE (58)

        /** cmdline.e:1472					error:crash(sprintf("Unrecognised cmdline PARSE OPTION - %d", parse_options[po]) )*/
        // SubProg cmd_parse pc: 253 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_parse_options_21391);
        _12276 = (object)*(((s1_ptr)_2)->base + _po_21403);
        // SubProg cmd_parse pc: 257 op: SPRINTF (53)
        _12277 = EPrintf(-9999999, _12275, _12276);
        _12276 = NOVALUE;
        // SubProg cmd_parse pc: 261 op: ASSIGN (18)
        DeRefi(_fmt_inlined_crash_at_260_21444);
        _fmt_inlined_crash_at_260_21444 = _12277;
        _12277 = NOVALUE;
        // SubProg cmd_parse pc: 264 op: SEQUENCE_CHECK (97)
        // SubProg cmd_parse pc: 266 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 268 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_263_21445);
        _msg_inlined_crash_at_263_21445 = EPrintf(-9999999, _fmt_inlined_crash_at_260_21444, _5);
        // SubProg cmd_parse pc: 272 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 274 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_263_21445);
        // SubProg cmd_parse pc: 277 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 279 op: ELSE (23)
        goto LA; // [279] 282
        // SubProg cmd_parse pc: 281 op: NOP1 (159)
LA: // addr: 282 pc: 281 sub: 21388 op: 159
        // SubProg cmd_parse pc: 282 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 260

// block var fmt_inlined_crash_at_260_21444
        DeRefi(_fmt_inlined_crash_at_260_21444);
        _fmt_inlined_crash_at_260_21444 = NOVALUE;

// block var msg_inlined_crash_at_263_21445
        DeRefi(_msg_inlined_crash_at_263_21445);
        _msg_inlined_crash_at_263_21445 = NOVALUE;
        // SubProg cmd_parse pc: 284 op: NOPSWITCH (187)
    ;}L5: // addr: 285 pc: 284 sub: 21388 op: 187
    // SubProg cmd_parse pc: 285 op: STARTLINE (58)

    /** cmdline.e:1475			po += 1*/
    // SubProg cmd_parse pc: 287 op: PLUS1_I (117)
    _po_21403 = _po_21403 + 1;
    // SubProg cmd_parse pc: 291 op: STARTLINE (58)

    /** cmdline.e:1476		end while*/
    // SubProg cmd_parse pc: 293 op: ENDWHILE (22)
    goto L2; // [293] 60
    // SubProg cmd_parse pc: 295 op: NOP1 (159)
L3: // addr: 296 pc: 295 sub: 21388 op: 159
    // SubProg cmd_parse pc: 296 op: STARTLINE (58)

    /** cmdline.e:1478		opts = standardize_opts(opts, auto_help)*/
    // SubProg cmd_parse pc: 298 op: PROC (27)
    RefDS(_opts_21390);
    _0 = _opts_21390;
    _opts_21390 = _48standardize_opts(_opts_21390, _auto_help_21401);
    DeRefDS(_0);
    // SubProg cmd_parse pc: 303 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 305 op: STARTLINE (58)

    /** cmdline.e:1479		call_count = repeat(0, length(opts))*/
    // SubProg cmd_parse pc: 307 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_21390)){
            _12280 = SEQ_PTR(_opts_21390)->length;
    }
    else {
        _12280 = 1;
    }
    // SubProg cmd_parse pc: 310 op: REPEAT (32)
    DeRef(_call_count_21396);
    _call_count_21396 = Repeat(0, _12280);
    _12280 = NOVALUE;
    // SubProg cmd_parse pc: 314 op: STARTLINE (58)

    /** cmdline.e:1481		map:map parsed_opts = map:new()*/
    // SubProg cmd_parse pc: 316 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg cmd_parse pc: 318 op: PROC (27)
    _0 = _new_1__tmp_at315_21453;
    _new_1__tmp_at315_21453 = _33new_map_seq(8);
    DeRef(_0);
    // SubProg cmd_parse pc: 322 op: PROC (27)
    Ref(_new_1__tmp_at315_21453);
    _0 = _parsed_opts_21450;
    _parsed_opts_21450 = _34malloc(_new_1__tmp_at315_21453, 1);
    DeRef(_0);
    // SubProg cmd_parse pc: 327 op: NOP1 (159)
    // SubProg cmd_parse pc: 328 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from cmd_parse @ 315

// block var new_1__tmp_at315_21453
    DeRef(_new_1__tmp_at315_21453);
    _new_1__tmp_at315_21453 = NOVALUE;
    // SubProg cmd_parse pc: 330 op: STARTLINE (58)

    /** cmdline.e:1482		map:put(parsed_opts, EXTRAS, {})*/
    // SubProg cmd_parse pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg cmd_parse pc: 334 op: PROC (27)
    Ref(_parsed_opts_21450);
    RefDS(_48EXTRAS_20250);
    RefDS(_5);
    _33put(_parsed_opts_21450, _48EXTRAS_20250, _5, 1, 0);
    // SubProg cmd_parse pc: 341 op: STARTLINE (58)

    /** cmdline.e:1485		help_opts = get_help_options( opts )*/
    // SubProg cmd_parse pc: 343 op: PROC (27)
    RefDS(_opts_21390);
    _0 = _help_opts_21395;
    _help_opts_21395 = _48get_help_options(_opts_21390);
    DeRef(_0);
    // SubProg cmd_parse pc: 347 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 349 op: STARTLINE (58)

    /** cmdline.e:1487		object cmds_ok = parse_commands( cmds, opts, parsed_opts, help_opts, add_help_rid, parse_options, */
    // SubProg cmd_parse pc: 351 op: PROC (27)
    RefDS(_cmds_21392);
    RefDS(_opts_21390);
    Ref(_parsed_opts_21450);
    RefDS(_help_opts_21395);
    Ref(_add_help_rid_21397);
    Ref(_parse_options_21391);
    RefDS(_call_count_21396);
    _0 = _cmds_ok_21455;
    _cmds_ok_21455 = _48parse_commands(_cmds_21392, _opts_21390, _parsed_opts_21450, _help_opts_21395, _add_help_rid_21397, _parse_options_21391, _use_at_21400, _validation_21398, _has_extra_21399, _call_count_21396, _help_on_error_21402, _auto_help_21401);
    DeRef(_0);
    // SubProg cmd_parse pc: 366 op: STARTLINE (58)

    /** cmdline.e:1489		if atom( cmds_ok ) then*/
    // SubProg cmd_parse pc: 368 op: IS_AN_ATOM (67)
    _12284 = IS_ATOM(_cmds_ok_21455);
    // SubProg cmd_parse pc: 371 op: IF (20)
    if (_12284 == 0)
    {
        _12284 = NOVALUE;
        goto LB; // [371] 381
    }
    else{
        _12284 = NOVALUE;
    }
    // SubProg cmd_parse pc: 374 op: STARTLINE (58)

    /** cmdline.e:1490			return 0*/
    // SubProg cmd_parse pc: 376 op: RETURNF (28)

// Exiting block BLOCK: cmd_parse

// block var opts_21390
    DeRefDS(_opts_21390);

// block var parse_options_21391
    DeRef(_parse_options_21391);

// block var cmds_21392
    DeRefDS(_cmds_21392);

// block var help_opts_21395
    DeRefDS(_help_opts_21395);

// block var call_count_21396
    DeRefDS(_call_count_21396);

// block var add_help_rid_21397
    DeRef(_add_help_rid_21397);

// block var validation_21398

// block var has_extra_21399

// block var use_at_21400

// block var auto_help_21401

// block var help_on_error_21402

// block var po_21403

// block var parsed_opts_21450
    DeRef(_parsed_opts_21450);

// block var cmds_ok_21455
    DeRef(_cmds_ok_21455);
    return 0;
    // SubProg cmd_parse pc: 380 op: NOP1 (159)
LB: // addr: 381 pc: 380 sub: 21388 op: 159
    // SubProg cmd_parse pc: 381 op: STARTLINE (58)

    /** cmdline.e:1492		cmds       = cmds_ok[1]*/
    // SubProg cmd_parse pc: 383 op: RHS_SUBS_CHECK (92)
    DeRefDS(_cmds_21392);
    _2 = (object)SEQ_PTR(_cmds_ok_21455);
    _cmds_21392 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_cmds_21392);
    // SubProg cmd_parse pc: 387 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 389 op: STARTLINE (58)

    /** cmdline.e:1493		call_count = cmds_ok[2]*/
    // SubProg cmd_parse pc: 391 op: RHS_SUBS_CHECK (92)
    DeRef(_call_count_21396);
    _2 = (object)SEQ_PTR(_cmds_ok_21455);
    _call_count_21396 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_21396);
    // SubProg cmd_parse pc: 395 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 397 op: STARTLINE (58)

    /** cmdline.e:1496		check_mandatory( opts, parsed_opts, add_help_rid, cmds, parse_options, help_on_error, auto_help )*/
    // SubProg cmd_parse pc: 399 op: PROC (27)
    RefDS(_opts_21390);
    Ref(_parsed_opts_21450);
    Ref(_add_help_rid_21397);
    RefDS(_cmds_21392);
    Ref(_parse_options_21391);
    _48check_mandatory(_opts_21390, _parsed_opts_21450, _add_help_rid_21397, _cmds_21392, _parse_options_21391, _help_on_error_21402, _auto_help_21401);
    // SubProg cmd_parse pc: 408 op: STARTLINE (58)

    /** cmdline.e:1498		return parsed_opts*/
    // SubProg cmd_parse pc: 410 op: RETURNF (28)

// Exiting block BLOCK: cmd_parse

// block var opts_21390
    DeRefDS(_opts_21390);

// block var parse_options_21391
    DeRef(_parse_options_21391);

// block var cmds_21392
    DeRefDS(_cmds_21392);

// block var help_opts_21395
    DeRef(_help_opts_21395);

// block var call_count_21396
    DeRefDS(_call_count_21396);

// block var add_help_rid_21397
    DeRef(_add_help_rid_21397);

// block var validation_21398

// block var has_extra_21399

// block var use_at_21400

// block var auto_help_21401

// block var help_on_error_21402

// block var po_21403

// block var cmds_ok_21455
    DeRef(_cmds_ok_21455);
    return _parsed_opts_21450;
    // SubProg cmd_parse pc: 414 op: BADRETURNF (43)
    ;
}


object _48build_commandline(object _cmds_21463)
{
    object _12290 = NOVALUE; // 21467 12290
    object _12289 = NOVALUE; // 21466 12289
    object _12287 = NOVALUE; // 21464 12287
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg build_commandline pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg build_commandline pc: 3 op: STARTLINE (58)

    /** cmdline.e:1551		return stdseq:flatten( text:quote( cmds,,'\\'," " ), " ")*/
    // SubProg build_commandline pc: 5 op: RIGHT_BRACE_2 (85)
    RefDS(_3442);
    RefDS(_3442);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3442;
    ((intptr_t *)_2)[2] = _3442;
    _12287 = MAKE_SEQ(_1);
    // SubProg build_commandline pc: 9 op: PROC (27)
    RefDS(_cmds_21463);
    RefDS(_12288);
    _12289 = _20quote(_cmds_21463, _12287, 92, _12288);
    _12287 = NOVALUE;
    // SubProg build_commandline pc: 16 op: PROC (27)
    RefDS(_12288);
    _12290 = _24flatten(_12289, _12288);
    _12289 = NOVALUE;
    // SubProg build_commandline pc: 21 op: RETURNF (28)

// Exiting block BLOCK: build_commandline

// block var cmds_21463
    DeRefDS(_cmds_21463);
    return _12290;
    // SubProg build_commandline pc: 25 op: BADRETURNF (43)
    ;
}



// 0x418FFE3F
