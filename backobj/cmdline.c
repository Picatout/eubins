// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _48local_abort(object _lvl_20243)
{
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248 = NOVALUE;
// skipping _11519  name type: 0
    object _11518 = NOVALUE; // 20245 11518
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg local_abort pc: 1 op: INTEGER_CHECK (96)
    // SubProg local_abort pc: 3 op: STARTLINE (58)

    /** cmdline.e:171		if length(pause_msg) != 0 then*/
    // SubProg local_abort pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg local_abort pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_48pause_msg_20240)){
            _11518 = SEQ_PTR(_48pause_msg_20240)->length;
    }
    else {
        _11518 = 1;
    }
    // SubProg local_abort pc: 10 op: NOTEQ_IFW_I (122)
    if (_11518 == 0)
    goto L1; // [10] 45
    // SubProg local_abort pc: 14 op: STARTLINE (58)

    /** cmdline.e:172			console:maybe_any_key(pause_msg, 1)*/
    // SubProg local_abort pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg local_abort pc: 18 op: STARTLINE (58)

    /** console.e:923		if not has_console() then*/
    // SubProg local_abort pc: 20 op: STARTLINE (58)

    /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
    // SubProg local_abort pc: 22 op: MACHINE_FUNC (111)
    DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248);
    _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248 = machine(99, 0);
    // SubProg local_abort pc: 26 op: NOP1 (159)
    // SubProg local_abort pc: 27 op: NOT_IFW (108)
    if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248)) {
        if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248 != 0){
            goto L2; // [27] 42
        }
    }
    else {
        if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248)->dbl != 0.0){
            goto L2; // [27] 42
        }
    }
    // SubProg local_abort pc: 30 op: STARTLINE (58)

    /** console.e:924			any_key(prompt, con)*/
    // SubProg local_abort pc: 32 op: PROC (27)
    RefDS(_48pause_msg_20240);
    _27any_key(_48pause_msg_20240, 1);
    // SubProg local_abort pc: 36 op: NOP1 (159)
    // SubProg local_abort pc: 37 op: STARTLINE (58)

    /** console.e:926	end procedure*/
    // SubProg local_abort pc: 39 op: ELSE (23)
    goto L2; // [39] 42
    // SubProg local_abort pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 20241 op: 159
    // SubProg local_abort pc: 42 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from local_abort @ 17

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248
    DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248);
    _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_20248 = NOVALUE;
    // SubProg local_abort pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 20241 op: 159
    // SubProg local_abort pc: 45 op: STARTLINE (58)

    /** cmdline.e:175		abort(lvl)*/
    // SubProg local_abort pc: 47 op: ABORT (126)
    UserCleanup(_lvl_20243);
    // SubProg local_abort pc: 49 op: STARTLINE (58)

    /** cmdline.e:176	end procedure*/
    // SubProg local_abort pc: 51 op: RETURNP (29)

// Exiting block BLOCK: local_abort

// block var lvl_20243
    return;
    // SubProg local_abort pc: 54 op: BADRETURNF (43)
    ;
}


void _48check_for_bad_combos(object _opts_20251, object _opt1_20252, object _opt2_20253, object _error_message_20254)
{
    object _msg_inlined_crash_at_38_20262 = NOVALUE;
    object _11523 = NOVALUE; // 20260 11523
    object _11522 = NOVALUE; // 20259 11522
    object _11521 = NOVALUE; // 20257 11521
    object _11520 = NOVALUE; // 20256 11520
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_bad_combos pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_for_bad_combos pc: 3 op: INTEGER_CHECK (96)
    // SubProg check_for_bad_combos pc: 5 op: INTEGER_CHECK (96)
    // SubProg check_for_bad_combos pc: 7 op: SEQUENCE_CHECK (97)
    // SubProg check_for_bad_combos pc: 9 op: STARTLINE (58)

    /** cmdline.e:180		if find( opt1, opts[OPTIONS]) then*/
    // SubProg check_for_bad_combos pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20251);
    _11520 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg check_for_bad_combos pc: 15 op: FIND_FROM (176)
    _11521 = find_from(_opt1_20252, _11520, 1);
    _11520 = NOVALUE;
    // SubProg check_for_bad_combos pc: 20 op: IF (20)
    if (_11521 == 0)
    {
        _11521 = NOVALUE;
        goto L1; // [20] 59
    }
    else{
        _11521 = NOVALUE;
    }
    // SubProg check_for_bad_combos pc: 23 op: STARTLINE (58)

    /** cmdline.e:181			if find( opt2, opts[OPTIONS]) then*/
    // SubProg check_for_bad_combos pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20251);
    _11522 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg check_for_bad_combos pc: 29 op: FIND_FROM (176)
    _11523 = find_from(_opt2_20253, _11522, 1);
    _11522 = NOVALUE;
    // SubProg check_for_bad_combos pc: 34 op: IF (20)
    if (_11523 == 0)
    {
        _11523 = NOVALUE;
        goto L2; // [34] 58
    }
    else{
        _11523 = NOVALUE;
    }
    // SubProg check_for_bad_combos pc: 37 op: STARTLINE (58)

    /** cmdline.e:182				error:crash( error_message )*/
    // SubProg check_for_bad_combos pc: 39 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg check_for_bad_combos pc: 41 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_38_20262);
    _msg_inlined_crash_at_38_20262 = EPrintf(-9999999, _error_message_20254, _5);
    // SubProg check_for_bad_combos pc: 45 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg check_for_bad_combos pc: 47 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_38_20262);
    // SubProg check_for_bad_combos pc: 50 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg check_for_bad_combos pc: 52 op: ELSE (23)
    goto L3; // [52] 55
    // SubProg check_for_bad_combos pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 20249 op: 159
    // SubProg check_for_bad_combos pc: 55 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_bad_combos @ 38

// block var msg_inlined_crash_at_38_20262
    DeRefi(_msg_inlined_crash_at_38_20262);
    _msg_inlined_crash_at_38_20262 = NOVALUE;
    // SubProg check_for_bad_combos pc: 57 op: NOP1 (159)
L2: // addr: 58 pc: 57 sub: 20249 op: 159
    // SubProg check_for_bad_combos pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 20249 op: 159
    // SubProg check_for_bad_combos pc: 59 op: STARTLINE (58)

    /** cmdline.e:185	end procedure*/
    // SubProg check_for_bad_combos pc: 61 op: RETURNP (29)

// Exiting block BLOCK: check_for_bad_combos

// block var opts_20251
    DeRefDS(_opts_20251);

// block var opt1_20252

// block var opt2_20253

// block var error_message_20254
    DeRefDSi(_error_message_20254);
    return;
    // SubProg check_for_bad_combos pc: 64 op: BADRETURNF (43)
    ;
}


object _48has_duplicate(object _opts_20265, object _opt_20266, object _name_type_20267, object _start_from_20268)
{
    object _opt_name_20272 = NOVALUE;
    object _11531 = NOVALUE; // 20281 11531
    object _11530 = NOVALUE; // 20280 11530
    object _11529 = NOVALUE; // 20279 11529
    object _11528 = NOVALUE; // 20277 11528
    object _11527 = NOVALUE; // 20276 11527
// skipping _11526  name type: 0
    object _11525 = NOVALUE; // 20271 11525
    object _11524 = NOVALUE; // 20270 11524
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_duplicate pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 5 op: INTEGER_CHECK (96)
    // SubProg has_duplicate pc: 7 op: INTEGER_CHECK (96)
    // SubProg has_duplicate pc: 9 op: STARTLINE (58)

    /** cmdline.e:188		if sequence( opt[name_type] ) then*/
    // SubProg has_duplicate pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20266);
    _11524 = (object)*(((s1_ptr)_2)->base + _name_type_20267);
    // SubProg has_duplicate pc: 15 op: IS_A_SEQUENCE (68)
    _11525 = IS_SEQUENCE(_11524);
    _11524 = NOVALUE;
    // SubProg has_duplicate pc: 18 op: IF (20)
    if (_11525 == 0)
    {
        _11525 = NOVALUE;
        goto L1; // [18] 77
    }
    else{
        _11525 = NOVALUE;
    }
    // SubProg has_duplicate pc: 21 op: STARTLINE (58)

    /** cmdline.e:189			sequence opt_name = opt[name_type]*/
    // SubProg has_duplicate pc: 23 op: RHS_SUBS (25)
    DeRef(_opt_name_20272);
    _2 = (object)SEQ_PTR(_opt_20266);
    _opt_name_20272 = (object)*(((s1_ptr)_2)->base + _name_type_20267);
    Ref(_opt_name_20272);
    // SubProg has_duplicate pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 29 op: STARTLINE (58)

    /** cmdline.e:190			for i = start_from + 1 to length( opts ) do*/
    // SubProg has_duplicate pc: 31 op: PLUS1 (93)
    _11527 = _start_from_20268 + 1;
    // SubProg has_duplicate pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20265)){
            _11528 = SEQ_PTR(_opts_20265)->length;
    }
    else {
        _11528 = 1;
    }
    // SubProg has_duplicate pc: 38 op: FOR (21)
    {
        object _i_20275;
        _i_20275 = _11527;
L2: // addr: 45 pc: 38 sub: 20263 op: 21
        if (_i_20275 > _11528){
            goto L3; // [38] 76
        }
        // SubProg has_duplicate pc: 45 op: STARTLINE (58)

        /** cmdline.e:191				if equal( opt_name, opts[i][name_type] ) then*/
        // SubProg has_duplicate pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20265);
        _11529 = (object)*(((s1_ptr)_2)->base + _i_20275);
        // SubProg has_duplicate pc: 51 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11529);
        _11530 = (object)*(((s1_ptr)_2)->base + _name_type_20267);
        _11529 = NOVALUE;
        // SubProg has_duplicate pc: 55 op: EQUAL (153)
        if (_opt_name_20272 == _11530)
        _11531 = 1;
        else if (IS_ATOM_INT(_opt_name_20272) && IS_ATOM_INT(_11530))
        _11531 = 0;
        else
        _11531 = (compare(_opt_name_20272, _11530) == 0);
        _11530 = NOVALUE;
        // SubProg has_duplicate pc: 59 op: IF (20)
        if (_11531 == 0)
        {
            _11531 = NOVALUE;
            goto L4; // [59] 69
        }
        else{
            _11531 = NOVALUE;
        }
        // SubProg has_duplicate pc: 62 op: STARTLINE (58)

        /** cmdline.e:192					return 1*/
        // SubProg has_duplicate pc: 64 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var opt_name_20272
        DeRefDS(_opt_name_20272);

// Exiting block BLOCK: has_duplicate

// block var opts_20265
        DeRefDS(_opts_20265);

// block var opt_20266
        DeRefDS(_opt_20266);

// block var name_type_20267

// block var start_from_20268
        DeRef(_11527);
        _11527 = NOVALUE;
        return 1;
        // SubProg has_duplicate pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 20263 op: 159
        // SubProg has_duplicate pc: 69 op: STARTLINE (58)

        /** cmdline.e:194			end for*/
        // SubProg has_duplicate pc: 71 op: ENDFOR_INT_UP1 (54)
        _i_20275 = _i_20275 + 1;
        goto L2; // [71] 45
L3: // addr: 76 pc: 71 sub: 20263 op: 54
        ;
    }
    // SubProg has_duplicate pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 20263 op: 159
    // SubProg has_duplicate pc: 77 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var opt_name_20272
    DeRef(_opt_name_20272);
    _opt_name_20272 = NOVALUE;
    // SubProg has_duplicate pc: 79 op: STARTLINE (58)

    /** cmdline.e:196		return 0*/
    // SubProg has_duplicate pc: 81 op: RETURNF (28)

// Exiting block BLOCK: has_duplicate

// block var opts_20265
    DeRefDS(_opts_20265);

// block var opt_20266
    DeRefDS(_opt_20266);

// block var name_type_20267

// block var start_from_20268
    DeRef(_11527);
    _11527 = NOVALUE;
    return 0;
    // SubProg has_duplicate pc: 85 op: BADRETURNF (43)
    ;
}


void _48check_for_duplicates(object _opts_20284)
{
    object _opt_20288 = NOVALUE;
    object _msg_inlined_crash_at_49_20297 = NOVALUE;
    object _data_inlined_crash_at_46_20296 = NOVALUE;
    object _msg_inlined_crash_at_95_20305 = NOVALUE;
    object _data_inlined_crash_at_92_20304 = NOVALUE;
    object _11541 = NOVALUE; // 20302 11541
    object _11540 = NOVALUE; // 20301 11540
    object _11538 = NOVALUE; // 20299 11538
    object _11537 = NOVALUE; // 20294 11537
    object _11536 = NOVALUE; // 20293 11536
    object _11534 = NOVALUE; // 20291 11534
// skipping _11533  name type: 0
    object _11532 = NOVALUE; // 20287 11532
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_duplicates pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_for_duplicates pc: 3 op: STARTLINE (58)

    /** cmdline.e:201		for i = 1 to length(opts) do*/
    // SubProg check_for_duplicates pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20284)){
            _11532 = SEQ_PTR(_opts_20284)->length;
    }
    else {
        _11532 = 1;
    }
    // SubProg check_for_duplicates pc: 8 op: FOR_I (125)
    {
        object _i_20286;
        _i_20286 = 1;
L1: // addr: 15 pc: 8 sub: 20282 op: 125
        if (_i_20286 > _11532){
            goto L2; // [8] 125
        }
        // SubProg check_for_duplicates pc: 15 op: STARTLINE (58)

        /** cmdline.e:202			sequence opt*/
        // SubProg check_for_duplicates pc: 17 op: STARTLINE (58)

        /** cmdline.e:203			opt = opts[i]*/
        // SubProg check_for_duplicates pc: 19 op: RHS_SUBS (25)
        DeRef(_opt_20288);
        _2 = (object)SEQ_PTR(_opts_20284);
        _opt_20288 = (object)*(((s1_ptr)_2)->base + _i_20286);
        Ref(_opt_20288);
        // SubProg check_for_duplicates pc: 23 op: SEQUENCE_CHECK (97)
        // SubProg check_for_duplicates pc: 25 op: STARTLINE (58)

        /** cmdline.e:204			if has_duplicate( opts, opt, SHORTNAME, i ) then*/
        // SubProg check_for_duplicates pc: 27 op: PROC (27)
        RefDS(_opts_20284);
        RefDS(_opt_20288);
        _11534 = _48has_duplicate(_opts_20284, _opt_20288, 1, _i_20286);
        // SubProg check_for_duplicates pc: 34 op: IF (20)
        if (_11534 == 0) {
            DeRef(_11534);
            _11534 = NOVALUE;
            goto L3; // [34] 71
        }
        else {
            if (!IS_ATOM_INT(_11534) && DBL_PTR(_11534)->dbl == 0.0){
                DeRef(_11534);
                _11534 = NOVALUE;
                goto L3; // [34] 71
            }
            DeRef(_11534);
            _11534 = NOVALUE;
        }
        DeRef(_11534);
        _11534 = NOVALUE;
        // SubProg check_for_duplicates pc: 37 op: STARTLINE (58)

        /** cmdline.e:206				error:crash("cmd_opts: Duplicate Short Names (%s) are not allowed in an option record.\n",*/
        // SubProg check_for_duplicates pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20288);
        _11536 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg check_for_duplicates pc: 43 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_11536);
        ((intptr_t*)_2)[1] = _11536;
        _11537 = MAKE_SEQ(_1);
        _11536 = NOVALUE;
        // SubProg check_for_duplicates pc: 47 op: ASSIGN (18)
        DeRef(_data_inlined_crash_at_46_20296);
        _data_inlined_crash_at_46_20296 = _11537;
        _11537 = NOVALUE;
        // SubProg check_for_duplicates pc: 50 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg check_for_duplicates pc: 52 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_49_20297);
        _msg_inlined_crash_at_49_20297 = EPrintf(-9999999, _11535, _data_inlined_crash_at_46_20296);
        // SubProg check_for_duplicates pc: 56 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg check_for_duplicates pc: 58 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_49_20297);
        // SubProg check_for_duplicates pc: 61 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg check_for_duplicates pc: 63 op: ELSE (23)
        goto L4; // [63] 66
        // SubProg check_for_duplicates pc: 65 op: NOP1 (159)
L4: // addr: 66 pc: 65 sub: 20282 op: 159
        // SubProg check_for_duplicates pc: 66 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_duplicates @ 46

// block var data_inlined_crash_at_46_20296
        DeRef(_data_inlined_crash_at_46_20296);
        _data_inlined_crash_at_46_20296 = NOVALUE;

// block var msg_inlined_crash_at_49_20297
        DeRefi(_msg_inlined_crash_at_49_20297);
        _msg_inlined_crash_at_49_20297 = NOVALUE;
        // SubProg check_for_duplicates pc: 68 op: ELSE (23)
        goto L5; // [68] 116
        // SubProg check_for_duplicates pc: 70 op: NOP1 (159)
L3: // addr: 71 pc: 70 sub: 20282 op: 159
        // SubProg check_for_duplicates pc: 71 op: STARTLINE (58)

        /** cmdline.e:209			elsif has_duplicate( opts, opt, LONGNAME, i ) then*/
        // SubProg check_for_duplicates pc: 73 op: PROC (27)
        RefDS(_opts_20284);
        RefDS(_opt_20288);
        _11538 = _48has_duplicate(_opts_20284, _opt_20288, 2, _i_20286);
        // SubProg check_for_duplicates pc: 80 op: IF (20)
        if (_11538 == 0) {
            DeRef(_11538);
            _11538 = NOVALUE;
            goto L6; // [80] 115
        }
        else {
            if (!IS_ATOM_INT(_11538) && DBL_PTR(_11538)->dbl == 0.0){
                DeRef(_11538);
                _11538 = NOVALUE;
                goto L6; // [80] 115
            }
            DeRef(_11538);
            _11538 = NOVALUE;
        }
        DeRef(_11538);
        _11538 = NOVALUE;
        // SubProg check_for_duplicates pc: 83 op: STARTLINE (58)

        /** cmdline.e:211				error:crash("cmd_opts: Duplicate Long Names (%s) are not allowed in an option record.\n",*/
        // SubProg check_for_duplicates pc: 85 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20288);
        _11540 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg check_for_duplicates pc: 89 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_11540);
        ((intptr_t*)_2)[1] = _11540;
        _11541 = MAKE_SEQ(_1);
        _11540 = NOVALUE;
        // SubProg check_for_duplicates pc: 93 op: ASSIGN (18)
        DeRef(_data_inlined_crash_at_92_20304);
        _data_inlined_crash_at_92_20304 = _11541;
        _11541 = NOVALUE;
        // SubProg check_for_duplicates pc: 96 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg check_for_duplicates pc: 98 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_95_20305);
        _msg_inlined_crash_at_95_20305 = EPrintf(-9999999, _11539, _data_inlined_crash_at_92_20304);
        // SubProg check_for_duplicates pc: 102 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg check_for_duplicates pc: 104 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_95_20305);
        // SubProg check_for_duplicates pc: 107 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg check_for_duplicates pc: 109 op: ELSE (23)
        goto L7; // [109] 112
        // SubProg check_for_duplicates pc: 111 op: NOP1 (159)
L7: // addr: 112 pc: 111 sub: 20282 op: 159
        // SubProg check_for_duplicates pc: 112 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_duplicates @ 92

// block var data_inlined_crash_at_92_20304
        DeRef(_data_inlined_crash_at_92_20304);
        _data_inlined_crash_at_92_20304 = NOVALUE;

// block var msg_inlined_crash_at_95_20305
        DeRefi(_msg_inlined_crash_at_95_20305);
        _msg_inlined_crash_at_95_20305 = NOVALUE;
        // SubProg check_for_duplicates pc: 114 op: NOP1 (159)
L6: // addr: 115 pc: 114 sub: 20282 op: 159
        // SubProg check_for_duplicates pc: 115 op: NOP1 (159)
L5: // addr: 116 pc: 115 sub: 20282 op: 159
        // SubProg check_for_duplicates pc: 116 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var opt_20288
        DeRef(_opt_20288);
        _opt_20288 = NOVALUE;
        // SubProg check_for_duplicates pc: 118 op: STARTLINE (58)

        /** cmdline.e:214		end for*/
        // SubProg check_for_duplicates pc: 120 op: ENDFOR_INT_UP1 (54)
        _i_20286 = _i_20286 + 1;
        goto L1; // [120] 15
L2: // addr: 125 pc: 120 sub: 20282 op: 54
        ;
    }
    // SubProg check_for_duplicates pc: 125 op: STARTLINE (58)

    /** cmdline.e:216	end procedure*/
    // SubProg check_for_duplicates pc: 127 op: RETURNP (29)

// Exiting block BLOCK: check_for_duplicates

// block var opts_20284
    DeRefDS(_opts_20284);
    return;
    // SubProg check_for_duplicates pc: 130 op: BADRETURNF (43)
    ;
}


object _48update_opts(object _opts_20308)
{
    object _lExtras_20309 = NOVALUE;
    object _opt_20313 = NOVALUE;
    object _msg_inlined_crash_at_162_20346 = NOVALUE;
    object _msg_inlined_crash_at_323_20377 = NOVALUE;
    object _11612 = NOVALUE; // 20409 11612
    object _11611 = NOVALUE; // 20408 11611
    object _11610 = NOVALUE; // 20407 11610
    object _11609 = NOVALUE; // 20405 11609
    object _11608 = NOVALUE; // 20404 11608
    object _11607 = NOVALUE; // 20403 11607
    object _11606 = NOVALUE; // 20401 11606
    object _11605 = NOVALUE; // 20400 11605
    object _11604 = NOVALUE; // 20398 11604
    object _11603 = NOVALUE; // 20397 11603
    object _11602 = NOVALUE; // 20396 11602
    object _11601 = NOVALUE; // 20395 11601
    object _11600 = NOVALUE; // 20394 11600
    object _11599 = NOVALUE; // 20393 11599
// skipping _11598  name type: 0
    object _11597 = NOVALUE; // 20390 11597
// skipping _11596  name type: 0
    object _11595 = NOVALUE; // 20387 11595
    object _11594 = NOVALUE; // 20386 11594
    object _11593 = NOVALUE; // 20384 11593
    object _11592 = NOVALUE; // 20383 11592
// skipping _11586  name type: 0
    object _11585 = NOVALUE; // 20373 11585
    object _11584 = NOVALUE; // 20372 11584
    object _11583 = NOVALUE; // 20371 11583
    object _11582 = NOVALUE; // 20370 11582
    object _11581 = NOVALUE; // 20369 11581
    object _11580 = NOVALUE; // 20367 11580
    object _11579 = NOVALUE; // 20366 11579
    object _11578 = NOVALUE; // 20361 11578
    object _11576 = NOVALUE; // 20359 11576
    object _11575 = NOVALUE; // 20358 11575
    object _11574 = NOVALUE; // 20356 11574
    object _11573 = NOVALUE; // 20355 11573
    object _11572 = NOVALUE; // 20353 11572
    object _11571 = NOVALUE; // 20352 11571
    object _11570 = NOVALUE; // 20350 11570
    object _11569 = NOVALUE; // 20349 11569
// skipping _11567  name type: 0
    object _11566 = NOVALUE; // 20341 11566
    object _11565 = NOVALUE; // 20340 11565
    object _11564 = NOVALUE; // 20339 11564
    object _11563 = NOVALUE; // 20338 11563
    object _11562 = NOVALUE; // 20337 11562
    object _11561 = NOVALUE; // 20335 11561
    object _11560 = NOVALUE; // 20334 11560
    object _11559 = NOVALUE; // 20333 11559
    object _11558 = NOVALUE; // 20332 11558
    object _11557 = NOVALUE; // 20331 11557
    object _11556 = NOVALUE; // 20330 11556
    object _11555 = NOVALUE; // 20328 11555
    object _11554 = NOVALUE; // 20327 11554
    object _11553 = NOVALUE; // 20326 11553
    object _11552 = NOVALUE; // 20325 11552
    object _11551 = NOVALUE; // 20324 11551
    object _11550 = NOVALUE; // 20323 11550
// skipping _11549  name type: 0
    object _11548 = NOVALUE; // 20320 11548
    object _11547 = NOVALUE; // 20319 11547
    object _11546 = NOVALUE; // 20318 11546
// skipping _11545  name type: 0
    object _11544 = NOVALUE; // 20316 11544
// skipping _11543  name type: 0
    object _11542 = NOVALUE; // 20312 11542
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_opts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg update_opts pc: 3 op: STARTLINE (58)

    /** cmdline.e:223		integer lExtras = 0 -- Ensure that there is zero or one 'extras' record only.*/
    // SubProg update_opts pc: 5 op: ASSIGN_I (113)
    _lExtras_20309 = 0;
    // SubProg update_opts pc: 8 op: STARTLINE (58)

    /** cmdline.e:224		for i = 1 to length(opts) do*/
    // SubProg update_opts pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20308)){
            _11542 = SEQ_PTR(_opts_20308)->length;
    }
    else {
        _11542 = 1;
    }
    // SubProg update_opts pc: 13 op: FOR_I (125)
    {
        object _i_20311;
        _i_20311 = 1;
L1: // addr: 20 pc: 13 sub: 20306 op: 125
        if (_i_20311 > _11542){
            goto L2; // [13] 565
        }
        // SubProg update_opts pc: 20 op: STARTLINE (58)

        /** cmdline.e:225			sequence opt = opts[i]*/
        // SubProg update_opts pc: 22 op: RHS_SUBS (25)
        DeRef(_opt_20313);
        _2 = (object)SEQ_PTR(_opts_20308);
        _opt_20313 = (object)*(((s1_ptr)_2)->base + _i_20311);
        Ref(_opt_20313);
        // SubProg update_opts pc: 26 op: SEQUENCE_CHECK (97)
        // SubProg update_opts pc: 28 op: STARTLINE (58)

        /** cmdline.e:226			opts[i] = 0*/
        // SubProg update_opts pc: 30 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opts_20308);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20308 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_20311);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 34 op: STARTLINE (58)

        /** cmdline.e:228			if length(opt) < MAPNAME then*/
        // SubProg update_opts pc: 36 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_20313)){
                _11544 = SEQ_PTR(_opt_20313)->length;
        }
        else {
            _11544 = 1;
        }
        // SubProg update_opts pc: 39 op: LESS_IFW_I (119)
        if (_11544 >= 6)
        goto L3; // [39] 61
        // SubProg update_opts pc: 43 op: STARTLINE (58)

        /** cmdline.e:229				opt &= repeat(-1, MAPNAME - length(opt))*/
        // SubProg update_opts pc: 45 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_20313)){
                _11546 = SEQ_PTR(_opt_20313)->length;
        }
        else {
            _11546 = 1;
        }
        // SubProg update_opts pc: 48 op: MINUS (10)
        _11547 = 6 - _11546;
        _11546 = NOVALUE;
        // SubProg update_opts pc: 52 op: REPEAT (32)
        _11548 = Repeat(-1, _11547);
        _11547 = NOVALUE;
        // SubProg update_opts pc: 56 op: CONCAT (15)
        Concat((object_ptr)&_opt_20313, _opt_20313, _11548);
        DeRefDS(_11548);
        _11548 = NOVALUE;
        // SubProg update_opts pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 20306 op: 159
        // SubProg update_opts pc: 61 op: STARTLINE (58)

        /** cmdline.e:232			if sequence(opt[SHORTNAME]) and length(opt[SHORTNAME]) = 0 then*/
        // SubProg update_opts pc: 63 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11550 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 67 op: IS_A_SEQUENCE (68)
        _11551 = IS_SEQUENCE(_11550);
        _11550 = NOVALUE;
        // SubProg update_opts pc: 70 op: SC1_AND_IF (146)
        if (_11551 == 0) {
            goto L4; // [70] 96
        }
        // SubProg update_opts pc: 74 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11553 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 78 op: LENGTH (42)
        if (IS_SEQUENCE(_11553)){
                _11554 = SEQ_PTR(_11553)->length;
        }
        else {
            _11554 = 1;
        }
        _11553 = NOVALUE;
        // SubProg update_opts pc: 81 op: EQUALS (3)
        _11555 = (_11554 == 0);
        _11554 = NOVALUE;
        // SubProg update_opts pc: 85 op: NOP1 (159)
        // SubProg update_opts pc: 86 op: IF (20)
        if (_11555 == 0)
        {
            DeRef(_11555);
            _11555 = NOVALUE;
            goto L4; // [86] 96
        }
        else{
            DeRef(_11555);
            _11555 = NOVALUE;
        }
        // SubProg update_opts pc: 89 op: STARTLINE (58)

        /** cmdline.e:233				opt[SHORTNAME] = 0*/
        // SubProg update_opts pc: 91 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 95 op: NOP1 (159)
L4: // addr: 96 pc: 95 sub: 20306 op: 159
        // SubProg update_opts pc: 96 op: STARTLINE (58)

        /** cmdline.e:236			if sequence(opt[LONGNAME]) and length(opt[LONGNAME]) = 0 then*/
        // SubProg update_opts pc: 98 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11556 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 102 op: IS_A_SEQUENCE (68)
        _11557 = IS_SEQUENCE(_11556);
        _11556 = NOVALUE;
        // SubProg update_opts pc: 105 op: SC1_AND_IF (146)
        if (_11557 == 0) {
            goto L5; // [105] 131
        }
        // SubProg update_opts pc: 109 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11559 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 113 op: LENGTH (42)
        if (IS_SEQUENCE(_11559)){
                _11560 = SEQ_PTR(_11559)->length;
        }
        else {
            _11560 = 1;
        }
        _11559 = NOVALUE;
        // SubProg update_opts pc: 116 op: EQUALS (3)
        _11561 = (_11560 == 0);
        _11560 = NOVALUE;
        // SubProg update_opts pc: 120 op: NOP1 (159)
        // SubProg update_opts pc: 121 op: IF (20)
        if (_11561 == 0)
        {
            DeRef(_11561);
            _11561 = NOVALUE;
            goto L5; // [121] 131
        }
        else{
            DeRef(_11561);
            _11561 = NOVALUE;
        }
        // SubProg update_opts pc: 124 op: STARTLINE (58)

        /** cmdline.e:237				opt[LONGNAME] = 0*/
        // SubProg update_opts pc: 126 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 130 op: NOP1 (159)
L5: // addr: 131 pc: 130 sub: 20306 op: 159
        // SubProg update_opts pc: 131 op: STARTLINE (58)

        /** cmdline.e:240			if atom(opt[LONGNAME]) and atom(opt[SHORTNAME]) then*/
        // SubProg update_opts pc: 133 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11562 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 137 op: IS_AN_ATOM (67)
        _11563 = IS_ATOM(_11562);
        _11562 = NOVALUE;
        // SubProg update_opts pc: 140 op: SC1_AND_IF (146)
        if (_11563 == 0) {
            goto L6; // [140] 212
        }
        // SubProg update_opts pc: 144 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11565 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 148 op: IS_AN_ATOM (67)
        _11566 = IS_ATOM(_11565);
        _11565 = NOVALUE;
        // SubProg update_opts pc: 151 op: NOP1 (159)
        // SubProg update_opts pc: 152 op: IF (20)
        if (_11566 == 0)
        {
            _11566 = NOVALUE;
            goto L6; // [152] 212
        }
        else{
            _11566 = NOVALUE;
        }
        // SubProg update_opts pc: 155 op: STARTLINE (58)

        /** cmdline.e:241				if lExtras != 0 then*/
        // SubProg update_opts pc: 157 op: NOTEQ_IFW_I (122)
        if (_lExtras_20309 == 0)
        goto L7; // [157] 184
        // SubProg update_opts pc: 161 op: STARTLINE (58)

        /** cmdline.e:242					error:crash("cmd_opts: There must be less than two 'extras' option records.\n")*/
        // SubProg update_opts pc: 163 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg update_opts pc: 165 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_162_20346);
        _msg_inlined_crash_at_162_20346 = EPrintf(-9999999, _11568, _5);
        // SubProg update_opts pc: 169 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg update_opts pc: 171 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_162_20346);
        // SubProg update_opts pc: 174 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg update_opts pc: 176 op: ELSE (23)
        goto L8; // [176] 179
        // SubProg update_opts pc: 178 op: NOP1 (159)
L8: // addr: 179 pc: 178 sub: 20306 op: 159
        // SubProg update_opts pc: 179 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from update_opts @ 162

// block var msg_inlined_crash_at_162_20346
        DeRefi(_msg_inlined_crash_at_162_20346);
        _msg_inlined_crash_at_162_20346 = NOVALUE;
        // SubProg update_opts pc: 181 op: ELSE (23)
        goto L9; // [181] 211
        // SubProg update_opts pc: 183 op: NOP1 (159)
L7: // addr: 184 pc: 183 sub: 20306 op: 159
        // SubProg update_opts pc: 184 op: STARTLINE (58)

        /** cmdline.e:244					lExtras = i*/
        // SubProg update_opts pc: 186 op: ASSIGN_I (113)
        _lExtras_20309 = _i_20311;
        // SubProg update_opts pc: 189 op: STARTLINE (58)

        /** cmdline.e:245					if atom(opt[MAPNAME]) then*/
        // SubProg update_opts pc: 191 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11569 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 195 op: IS_AN_ATOM (67)
        _11570 = IS_ATOM(_11569);
        _11569 = NOVALUE;
        // SubProg update_opts pc: 198 op: IF (20)
        if (_11570 == 0)
        {
            _11570 = NOVALUE;
            goto LA; // [198] 210
        }
        else{
            _11570 = NOVALUE;
        }
        // SubProg update_opts pc: 201 op: STARTLINE (58)

        /** cmdline.e:246						opt[MAPNAME] = EXTRAS*/
        // SubProg update_opts pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_opts pc: 205 op: ASSIGN_SUBS (16)
        RefDS(_48EXTRAS_20229);
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _48EXTRAS_20229;
        DeRef(_1);
        // SubProg update_opts pc: 209 op: NOP1 (159)
LA: // addr: 210 pc: 209 sub: 20306 op: 159
        // SubProg update_opts pc: 210 op: NOP1 (159)
L9: // addr: 211 pc: 210 sub: 20306 op: 159
        // SubProg update_opts pc: 211 op: NOP1 (159)
L6: // addr: 212 pc: 211 sub: 20306 op: 159
        // SubProg update_opts pc: 212 op: STARTLINE (58)

        /** cmdline.e:251			if atom(opt[DESCRIPTION]) then*/
        // SubProg update_opts pc: 214 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11571 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg update_opts pc: 218 op: IS_AN_ATOM (67)
        _11572 = IS_ATOM(_11571);
        _11571 = NOVALUE;
        // SubProg update_opts pc: 221 op: IF (20)
        if (_11572 == 0)
        {
            _11572 = NOVALUE;
            goto LB; // [221] 231
        }
        else{
            _11572 = NOVALUE;
        }
        // SubProg update_opts pc: 224 op: STARTLINE (58)

        /** cmdline.e:252				opt[DESCRIPTION] = ""*/
        // SubProg update_opts pc: 226 op: ASSIGN_SUBS (16)
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
        // SubProg update_opts pc: 230 op: NOP1 (159)
LB: // addr: 231 pc: 230 sub: 20306 op: 159
        // SubProg update_opts pc: 231 op: STARTLINE (58)

        /** cmdline.e:256			if atom(opt[OPTIONS]) then*/
        // SubProg update_opts pc: 233 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11573 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 237 op: IS_AN_ATOM (67)
        _11574 = IS_ATOM(_11573);
        _11573 = NOVALUE;
        // SubProg update_opts pc: 240 op: IF (20)
        if (_11574 == 0)
        {
            _11574 = NOVALUE;
            goto LC; // [240] 279
        }
        else{
            _11574 = NOVALUE;
        }
        // SubProg update_opts pc: 243 op: STARTLINE (58)

        /** cmdline.e:257				if equal(opt[OPTIONS], HAS_PARAMETER) then*/
        // SubProg update_opts pc: 245 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11575 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 249 op: EQUAL (153)
        if (_11575 == 112)
        _11576 = 1;
        else if (IS_ATOM_INT(_11575) && IS_ATOM_INT(112))
        _11576 = 0;
        else
        _11576 = (compare(_11575, 112) == 0);
        _11575 = NOVALUE;
        // SubProg update_opts pc: 253 op: IF (20)
        if (_11576 == 0)
        {
            _11576 = NOVALUE;
            goto LD; // [253] 269
        }
        else{
            _11576 = NOVALUE;
        }
        // SubProg update_opts pc: 256 op: STARTLINE (58)

        /** cmdline.e:258					opt[OPTIONS] = {HAS_PARAMETER,"x"}*/
        // SubProg update_opts pc: 258 op: RIGHT_BRACE_2 (85)
        RefDS(_11577);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 112;
        ((intptr_t *)_2)[2] = _11577;
        _11578 = MAKE_SEQ(_1);
        // SubProg update_opts pc: 262 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11578;
        if( _1 != _11578 ){
            DeRef(_1);
        }
        _11578 = NOVALUE;
        // SubProg update_opts pc: 266 op: ELSE (23)
        goto LE; // [266] 383
        // SubProg update_opts pc: 268 op: NOP1 (159)
LD: // addr: 269 pc: 268 sub: 20306 op: 159
        // SubProg update_opts pc: 269 op: STARTLINE (58)

        /** cmdline.e:260					opt[OPTIONS] = {}*/
        // SubProg update_opts pc: 271 op: ASSIGN_SUBS (16)
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
        // SubProg update_opts pc: 275 op: NOP1 (159)
        // SubProg update_opts pc: 276 op: ELSE (23)
        goto LE; // [276] 383
        // SubProg update_opts pc: 278 op: NOP1 (159)
LC: // addr: 279 pc: 278 sub: 20306 op: 159
        // SubProg update_opts pc: 279 op: STARTLINE (58)

        /** cmdline.e:263				for j = 1 to length(opt[OPTIONS]) do*/
        // SubProg update_opts pc: 281 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11579 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 285 op: LENGTH (42)
        if (IS_SEQUENCE(_11579)){
                _11580 = SEQ_PTR(_11579)->length;
        }
        else {
            _11580 = 1;
        }
        _11579 = NOVALUE;
        // SubProg update_opts pc: 288 op: FOR_I (125)
        {
            object _j_20365;
            _j_20365 = 1;
LF: // addr: 295 pc: 288 sub: 20306 op: 125
            if (_j_20365 > _11580){
                goto L10; // [288] 350
            }
            // SubProg update_opts pc: 295 op: STARTLINE (58)

            /** cmdline.e:264					if find(opt[OPTIONS][j], opt[OPTIONS], j + 1) != 0 then*/
            // SubProg update_opts pc: 297 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_opt_20313);
            _11581 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg update_opts pc: 301 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_11581);
            _11582 = (object)*(((s1_ptr)_2)->base + _j_20365);
            _11581 = NOVALUE;
            // SubProg update_opts pc: 305 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_opt_20313);
            _11583 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg update_opts pc: 309 op: PLUS1 (93)
            _11584 = _j_20365 + 1;
            // SubProg update_opts pc: 313 op: FIND_FROM (176)
            _11585 = find_from(_11582, _11583, _11584);
            _11582 = NOVALUE;
            _11583 = NOVALUE;
            _11584 = NOVALUE;
            // SubProg update_opts pc: 318 op: NOTEQ_IFW_I (122)
            if (_11585 == 0)
            goto L11; // [318] 343
            // SubProg update_opts pc: 322 op: STARTLINE (58)

            /** cmdline.e:265						error:crash("cmd_opts: Duplicate processing options are not allowed in an option record.\n")*/
            // SubProg update_opts pc: 324 op: STARTLINE (58)

            /** error.e:51		msg = sprintf(fmt, data)*/
            // SubProg update_opts pc: 326 op: SPRINTF (53)
            DeRefi(_msg_inlined_crash_at_323_20377);
            _msg_inlined_crash_at_323_20377 = EPrintf(-9999999, _11587, _5);
            // SubProg update_opts pc: 330 op: STARTLINE (58)

            /** error.e:52		machine_proc(M_CRASH, msg)*/
            // SubProg update_opts pc: 332 op: MACHINE_PROC (112)
            machine(67, _msg_inlined_crash_at_323_20377);
            // SubProg update_opts pc: 335 op: STARTLINE (58)

            /** error.e:53	end procedure*/
            // SubProg update_opts pc: 337 op: ELSE (23)
            goto L12; // [337] 340
            // SubProg update_opts pc: 339 op: NOP1 (159)
L12: // addr: 340 pc: 339 sub: 20306 op: 159
            // SubProg update_opts pc: 340 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from update_opts @ 323

// block var msg_inlined_crash_at_323_20377
            DeRefi(_msg_inlined_crash_at_323_20377);
            _msg_inlined_crash_at_323_20377 = NOVALUE;
            // SubProg update_opts pc: 342 op: NOP1 (159)
L11: // addr: 343 pc: 342 sub: 20306 op: 159
            // SubProg update_opts pc: 343 op: STARTLINE (58)

            /** cmdline.e:267				end for*/
            // SubProg update_opts pc: 345 op: ENDFOR_INT_UP1 (54)
            _j_20365 = _j_20365 + 1;
            goto LF; // [345] 295
L10: // addr: 350 pc: 345 sub: 20306 op: 54
            ;
        }
        // SubProg update_opts pc: 350 op: STARTLINE (58)

        /** cmdline.e:269				check_for_bad_combos( opt, HAS_PARAMETER, NO_PARAMETER, */
        // SubProg update_opts pc: 352 op: PROC (27)
        RefDS(_opt_20313);
        RefDS(_11588);
        _48check_for_bad_combos(_opt_20313, 112, 110, _11588);
        // SubProg update_opts pc: 358 op: STARTLINE (58)

        /** cmdline.e:272				check_for_bad_combos( opt, HAS_CASE, NO_CASE, */
        // SubProg update_opts pc: 360 op: PROC (27)
        RefDS(_opt_20313);
        RefDS(_11589);
        _48check_for_bad_combos(_opt_20313, 99, 105, _11589);
        // SubProg update_opts pc: 366 op: STARTLINE (58)

        /** cmdline.e:275				check_for_bad_combos( opt, MANDATORY, OPTIONAL, */
        // SubProg update_opts pc: 368 op: PROC (27)
        RefDS(_opt_20313);
        RefDS(_11590);
        _48check_for_bad_combos(_opt_20313, 109, 111, _11590);
        // SubProg update_opts pc: 374 op: STARTLINE (58)

        /** cmdline.e:278				check_for_bad_combos( opt, ONCE, MULTIPLE, */
        // SubProg update_opts pc: 376 op: PROC (27)
        RefDS(_opt_20313);
        RefDS(_11591);
        _48check_for_bad_combos(_opt_20313, 49, 42, _11591);
        // SubProg update_opts pc: 382 op: NOP1 (159)
LE: // addr: 383 pc: 382 sub: 20306 op: 159
        // SubProg update_opts pc: 383 op: STARTLINE (58)

        /** cmdline.e:283			if sequence(opt[CALLBACK]) then*/
        // SubProg update_opts pc: 385 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11592 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 389 op: IS_A_SEQUENCE (68)
        _11593 = IS_SEQUENCE(_11592);
        _11592 = NOVALUE;
        // SubProg update_opts pc: 392 op: IF (20)
        if (_11593 == 0)
        {
            _11593 = NOVALUE;
            goto L13; // [392] 404
        }
        else{
            _11593 = NOVALUE;
        }
        // SubProg update_opts pc: 395 op: STARTLINE (58)

        /** cmdline.e:284				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 397 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 401 op: ELSE (23)
        goto L14; // [401] 443
        // SubProg update_opts pc: 403 op: NOP1 (159)
L13: // addr: 404 pc: 403 sub: 20306 op: 159
        // SubProg update_opts pc: 404 op: STARTLINE (58)

        /** cmdline.e:285			elsif not integer(opt[CALLBACK]) then*/
        // SubProg update_opts pc: 406 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11594 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 410 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_11594))
        _11595 = 1;
        else if (IS_ATOM_DBL(_11594))
        _11595 = IS_ATOM_INT(DoubleToInt(_11594));
        else
        _11595 = 0;
        _11594 = NOVALUE;
        // SubProg update_opts pc: 413 op: NOT_IFW (108)
        if (_11595 != 0)
        goto L15; // [413] 425
        _11595 = NOVALUE;
        // SubProg update_opts pc: 416 op: STARTLINE (58)

        /** cmdline.e:286				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 418 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 422 op: ELSE (23)
        goto L14; // [422] 443
        // SubProg update_opts pc: 424 op: NOP1 (159)
L15: // addr: 425 pc: 424 sub: 20306 op: 159
        // SubProg update_opts pc: 425 op: STARTLINE (58)

        /** cmdline.e:287			elsif opt[CALLBACK] < 0 then*/
        // SubProg update_opts pc: 427 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11597 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 431 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _11597, 0)){
            _11597 = NOVALUE;
            goto L16; // [431] 442
        }
        _11597 = NOVALUE;
        // SubProg update_opts pc: 435 op: STARTLINE (58)

        /** cmdline.e:288				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 437 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 441 op: NOP1 (159)
L16: // addr: 442 pc: 441 sub: 20306 op: 159
        // SubProg update_opts pc: 442 op: NOP1 (159)
L14: // addr: 443 pc: 442 sub: 20306 op: 159
        // SubProg update_opts pc: 443 op: STARTLINE (58)

        /** cmdline.e:291			if sequence(opt[MAPNAME]) and length(opt[MAPNAME]) = 0 then*/
        // SubProg update_opts pc: 445 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11599 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 449 op: IS_A_SEQUENCE (68)
        _11600 = IS_SEQUENCE(_11599);
        _11599 = NOVALUE;
        // SubProg update_opts pc: 452 op: SC1_AND_IF (146)
        if (_11600 == 0) {
            goto L17; // [452] 478
        }
        // SubProg update_opts pc: 456 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11602 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 460 op: LENGTH (42)
        if (IS_SEQUENCE(_11602)){
                _11603 = SEQ_PTR(_11602)->length;
        }
        else {
            _11603 = 1;
        }
        _11602 = NOVALUE;
        // SubProg update_opts pc: 463 op: EQUALS (3)
        _11604 = (_11603 == 0);
        _11603 = NOVALUE;
        // SubProg update_opts pc: 467 op: NOP1 (159)
        // SubProg update_opts pc: 468 op: IF (20)
        if (_11604 == 0)
        {
            DeRef(_11604);
            _11604 = NOVALUE;
            goto L17; // [468] 478
        }
        else{
            DeRef(_11604);
            _11604 = NOVALUE;
        }
        // SubProg update_opts pc: 471 op: STARTLINE (58)

        /** cmdline.e:292				opt[MAPNAME] = 0*/
        // SubProg update_opts pc: 473 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 477 op: NOP1 (159)
L17: // addr: 478 pc: 477 sub: 20306 op: 159
        // SubProg update_opts pc: 478 op: STARTLINE (58)

        /** cmdline.e:295			if atom(opt[MAPNAME]) then*/
        // SubProg update_opts pc: 480 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11605 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 484 op: IS_AN_ATOM (67)
        _11606 = IS_ATOM(_11605);
        _11605 = NOVALUE;
        // SubProg update_opts pc: 487 op: IF (20)
        if (_11606 == 0)
        {
            _11606 = NOVALUE;
            goto L18; // [487] 550
        }
        else{
            _11606 = NOVALUE;
        }
        // SubProg update_opts pc: 490 op: STARTLINE (58)

        /** cmdline.e:296				if sequence(opt[LONGNAME]) then*/
        // SubProg update_opts pc: 492 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11607 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 496 op: IS_A_SEQUENCE (68)
        _11608 = IS_SEQUENCE(_11607);
        _11607 = NOVALUE;
        // SubProg update_opts pc: 499 op: IF (20)
        if (_11608 == 0)
        {
            _11608 = NOVALUE;
            goto L19; // [499] 515
        }
        else{
            _11608 = NOVALUE;
        }
        // SubProg update_opts pc: 502 op: STARTLINE (58)

        /** cmdline.e:297					opt[MAPNAME] = opt[LONGNAME]*/
        // SubProg update_opts pc: 504 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11609 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 508 op: ASSIGN_SUBS (16)
        Ref(_11609);
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11609;
        if( _1 != _11609 ){
            DeRef(_1);
        }
        _11609 = NOVALUE;
        // SubProg update_opts pc: 512 op: ELSE (23)
        goto L1A; // [512] 549
        // SubProg update_opts pc: 514 op: NOP1 (159)
L19: // addr: 515 pc: 514 sub: 20306 op: 159
        // SubProg update_opts pc: 515 op: STARTLINE (58)

        /** cmdline.e:298				elsif sequence(opt[SHORTNAME]) then*/
        // SubProg update_opts pc: 517 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11610 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 521 op: IS_A_SEQUENCE (68)
        _11611 = IS_SEQUENCE(_11610);
        _11610 = NOVALUE;
        // SubProg update_opts pc: 524 op: IF (20)
        if (_11611 == 0)
        {
            _11611 = NOVALUE;
            goto L1B; // [524] 540
        }
        else{
            _11611 = NOVALUE;
        }
        // SubProg update_opts pc: 527 op: STARTLINE (58)

        /** cmdline.e:299					opt[MAPNAME] = opt[SHORTNAME]*/
        // SubProg update_opts pc: 529 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_20313);
        _11612 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 533 op: ASSIGN_SUBS (16)
        Ref(_11612);
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11612;
        if( _1 != _11612 ){
            DeRef(_1);
        }
        _11612 = NOVALUE;
        // SubProg update_opts pc: 537 op: ELSE (23)
        goto L1A; // [537] 549
        // SubProg update_opts pc: 539 op: NOP1 (159)
L1B: // addr: 540 pc: 539 sub: 20306 op: 159
        // SubProg update_opts pc: 540 op: STARTLINE (58)

        /** cmdline.e:301					opt[MAPNAME] = EXTRAS*/
        // SubProg update_opts pc: 542 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_opts pc: 544 op: ASSIGN_SUBS (16)
        RefDS(_48EXTRAS_20229);
        _2 = (object)SEQ_PTR(_opt_20313);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_20313 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _48EXTRAS_20229;
        DeRef(_1);
        // SubProg update_opts pc: 548 op: NOP1 (159)
L1A: // addr: 549 pc: 548 sub: 20306 op: 159
        // SubProg update_opts pc: 549 op: NOP1 (159)
L18: // addr: 550 pc: 549 sub: 20306 op: 159
        // SubProg update_opts pc: 550 op: STARTLINE (58)

        /** cmdline.e:305			opts[i] = opt*/
        // SubProg update_opts pc: 552 op: ASSIGN_SUBS (16)
        RefDS(_opt_20313);
        _2 = (object)SEQ_PTR(_opts_20308);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20308 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_20311);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _opt_20313;
        DeRef(_1);
        // SubProg update_opts pc: 556 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var opt_20313
        DeRefDS(_opt_20313);
        _opt_20313 = NOVALUE;
        // SubProg update_opts pc: 558 op: STARTLINE (58)

        /** cmdline.e:306		end for*/
        // SubProg update_opts pc: 560 op: ENDFOR_INT_UP1 (54)
        _i_20311 = _i_20311 + 1;
        goto L1; // [560] 20
L2: // addr: 565 pc: 560 sub: 20306 op: 54
        ;
    }
    // SubProg update_opts pc: 565 op: STARTLINE (58)

    /** cmdline.e:307		return opts*/
    // SubProg update_opts pc: 567 op: RETURNF (28)

// Exiting block BLOCK: update_opts

// block var lExtras_20309
    _11579 = NOVALUE;
    _11553 = NOVALUE;
    _11602 = NOVALUE;
    _11559 = NOVALUE;
    return _opts_20308;
    // SubProg update_opts pc: 571 op: BADRETURNF (43)
    ;
}


object _48standardize_help_options(object _opts_20413, object _auto_help_switches_20414)
{
    object _has_h_20415 = NOVALUE;
    object _has_help_20416 = NOVALUE;
    object _has_question_20417 = NOVALUE;
    object _appended_opts_20437 = NOVALUE;
// skipping _11641  name type: 0
// skipping _11640  name type: 0
    object _11639 = NOVALUE; // 20455 11639
// skipping _11638  name type: 0
// skipping _11637  name type: 0
    object _11636 = NOVALUE; // 20451 11636
// skipping _11635  name type: 0
// skipping _11634  name type: 0
    object _11633 = NOVALUE; // 20447 11633
// skipping _11632  name type: 0
// skipping _11631  name type: 0
    object _11630 = NOVALUE; // 20443 11630
    object _11628 = NOVALUE; // 20441 11628
    object _11627 = NOVALUE; // 20440 11627
    object _11626 = NOVALUE; // 20439 11626
    object _11625 = NOVALUE; // 20435 11625
    object _11623 = NOVALUE; // 20433 11623
    object _11622 = NOVALUE; // 20432 11622
    object _11621 = NOVALUE; // 20430 11621
    object _11619 = NOVALUE; // 20428 11619
    object _11618 = NOVALUE; // 20427 11618
    object _11617 = NOVALUE; // 20425 11617
    object _11615 = NOVALUE; // 20423 11615
    object _11614 = NOVALUE; // 20422 11614
    object _11613 = NOVALUE; // 20420 11613
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg standardize_help_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg standardize_help_options pc: 3 op: INTEGER_CHECK (96)
    // SubProg standardize_help_options pc: 5 op: STARTLINE (58)

    /** cmdline.e:313		integer has_h = 0, has_help = 0, has_question = 0*/
    // SubProg standardize_help_options pc: 7 op: ASSIGN_I (113)
    _has_h_20415 = 0;
    // SubProg standardize_help_options pc: 10 op: ASSIGN_I (113)
    _has_help_20416 = 0;
    // SubProg standardize_help_options pc: 13 op: ASSIGN_I (113)
    _has_question_20417 = 0;
    // SubProg standardize_help_options pc: 16 op: STARTLINE (58)

    /** cmdline.e:314		for i = 1 to length(opts) do*/
    // SubProg standardize_help_options pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20413)){
            _11613 = SEQ_PTR(_opts_20413)->length;
    }
    else {
        _11613 = 1;
    }
    // SubProg standardize_help_options pc: 21 op: FOR_I (125)
    {
        object _i_20419;
        _i_20419 = 1;
L1: // addr: 28 pc: 21 sub: 20411 op: 125
        if (_i_20419 > _11613){
            goto L2; // [21] 107
        }
        // SubProg standardize_help_options pc: 28 op: STARTLINE (58)

        /** cmdline.e:315			if equal(opts[i][SHORTNAME], "h") then*/
        // SubProg standardize_help_options pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20413);
        _11614 = (object)*(((s1_ptr)_2)->base + _i_20419);
        // SubProg standardize_help_options pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11614);
        _11615 = (object)*(((s1_ptr)_2)->base + 1);
        _11614 = NOVALUE;
        // SubProg standardize_help_options pc: 38 op: EQUAL (153)
        if (_11615 == _11616)
        _11617 = 1;
        else if (IS_ATOM_INT(_11615) && IS_ATOM_INT(_11616))
        _11617 = 0;
        else
        _11617 = (compare(_11615, _11616) == 0);
        _11615 = NOVALUE;
        // SubProg standardize_help_options pc: 42 op: IF (20)
        if (_11617 == 0)
        {
            _11617 = NOVALUE;
            goto L3; // [42] 53
        }
        else{
            _11617 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 45 op: STARTLINE (58)

        /** cmdline.e:316				has_h = 1*/
        // SubProg standardize_help_options pc: 47 op: ASSIGN_I (113)
        _has_h_20415 = 1;
        // SubProg standardize_help_options pc: 50 op: ELSE (23)
        goto L4; // [50] 77
        // SubProg standardize_help_options pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 20411 op: 159
        // SubProg standardize_help_options pc: 53 op: STARTLINE (58)

        /** cmdline.e:317			elsif equal(opts[i][SHORTNAME], "?") then*/
        // SubProg standardize_help_options pc: 55 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20413);
        _11618 = (object)*(((s1_ptr)_2)->base + _i_20419);
        // SubProg standardize_help_options pc: 59 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11618);
        _11619 = (object)*(((s1_ptr)_2)->base + 1);
        _11618 = NOVALUE;
        // SubProg standardize_help_options pc: 63 op: EQUAL (153)
        if (_11619 == _11620)
        _11621 = 1;
        else if (IS_ATOM_INT(_11619) && IS_ATOM_INT(_11620))
        _11621 = 0;
        else
        _11621 = (compare(_11619, _11620) == 0);
        _11619 = NOVALUE;
        // SubProg standardize_help_options pc: 67 op: IF (20)
        if (_11621 == 0)
        {
            _11621 = NOVALUE;
            goto L5; // [67] 76
        }
        else{
            _11621 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 70 op: STARTLINE (58)

        /** cmdline.e:318				has_question = 1*/
        // SubProg standardize_help_options pc: 72 op: ASSIGN_I (113)
        _has_question_20417 = 1;
        // SubProg standardize_help_options pc: 75 op: NOP1 (159)
L5: // addr: 76 pc: 75 sub: 20411 op: 159
        // SubProg standardize_help_options pc: 76 op: NOP1 (159)
L4: // addr: 77 pc: 76 sub: 20411 op: 159
        // SubProg standardize_help_options pc: 77 op: STARTLINE (58)

        /** cmdline.e:321			if equal(opts[i][LONGNAME], "help") then*/
        // SubProg standardize_help_options pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20413);
        _11622 = (object)*(((s1_ptr)_2)->base + _i_20419);
        // SubProg standardize_help_options pc: 83 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11622);
        _11623 = (object)*(((s1_ptr)_2)->base + 2);
        _11622 = NOVALUE;
        // SubProg standardize_help_options pc: 87 op: EQUAL (153)
        if (_11623 == _11624)
        _11625 = 1;
        else if (IS_ATOM_INT(_11623) && IS_ATOM_INT(_11624))
        _11625 = 0;
        else
        _11625 = (compare(_11623, _11624) == 0);
        _11623 = NOVALUE;
        // SubProg standardize_help_options pc: 91 op: IF (20)
        if (_11625 == 0)
        {
            _11625 = NOVALUE;
            goto L6; // [91] 100
        }
        else{
            _11625 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 94 op: STARTLINE (58)

        /** cmdline.e:322				has_help = 1*/
        // SubProg standardize_help_options pc: 96 op: ASSIGN_I (113)
        _has_help_20416 = 1;
        // SubProg standardize_help_options pc: 99 op: NOP1 (159)
L6: // addr: 100 pc: 99 sub: 20411 op: 159
        // SubProg standardize_help_options pc: 100 op: STARTLINE (58)

        /** cmdline.e:324		end for*/
        // SubProg standardize_help_options pc: 102 op: ENDFOR_INT_UP1 (54)
        _i_20419 = _i_20419 + 1;
        goto L1; // [102] 28
L2: // addr: 107 pc: 102 sub: 20411 op: 54
        ;
    }
    // SubProg standardize_help_options pc: 107 op: STARTLINE (58)

    /** cmdline.e:326		if auto_help_switches then*/
    // SubProg standardize_help_options pc: 109 op: IF (20)
    if (_auto_help_switches_20414 == 0)
    {
        goto L7; // [109] 249
    }
    else{
    }
    // SubProg standardize_help_options pc: 112 op: STARTLINE (58)

    /** cmdline.e:327			integer appended_opts = 0*/
    // SubProg standardize_help_options pc: 114 op: ASSIGN_I (113)
    _appended_opts_20437 = 0;
    // SubProg standardize_help_options pc: 117 op: STARTLINE (58)

    /** cmdline.e:328			if not has_h and not has_help then*/
    // SubProg standardize_help_options pc: 119 op: NOT (7)
    _11626 = (_has_h_20415 == 0);
    // SubProg standardize_help_options pc: 122 op: SC1_AND_IF (146)
    if (_11626 == 0) {
        goto L8; // [122] 155
    }
    // SubProg standardize_help_options pc: 126 op: NOT (7)
    _11628 = (_has_help_20416 == 0);
    // SubProg standardize_help_options pc: 129 op: NOP1 (159)
    // SubProg standardize_help_options pc: 130 op: IF (20)
    if (_11628 == 0)
    {
        DeRef(_11628);
        _11628 = NOVALUE;
        goto L8; // [130] 155
    }
    else{
        DeRef(_11628);
        _11628 = NOVALUE;
    }
    // SubProg standardize_help_options pc: 133 op: STARTLINE (58)

    /** cmdline.e:329				opts = append(opts, {"h", "help", "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 135 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11616);
    ((intptr_t*)_2)[1] = _11616;
    RefDS(_11624);
    ((intptr_t*)_2)[2] = _11624;
    RefDS(_11629);
    ((intptr_t*)_2)[3] = _11629;
    RefDS(_11616);
    ((intptr_t*)_2)[4] = _11616;
    ((intptr_t*)_2)[5] = -1;
    _11630 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 143 op: APPEND (35)
    RefDS(_11630);
    Append(&_opts_20413, _opts_20413, _11630);
    DeRefDS(_11630);
    _11630 = NOVALUE;
    // SubProg standardize_help_options pc: 147 op: STARTLINE (58)

    /** cmdline.e:330				appended_opts = 1*/
    // SubProg standardize_help_options pc: 149 op: ASSIGN_I (113)
    _appended_opts_20437 = 1;
    // SubProg standardize_help_options pc: 152 op: ELSE (23)
    goto L9; // [152] 208
    // SubProg standardize_help_options pc: 154 op: NOP1 (159)
L8: // addr: 155 pc: 154 sub: 20411 op: 159
    // SubProg standardize_help_options pc: 155 op: STARTLINE (58)

    /** cmdline.e:332			elsif not has_h then*/
    // SubProg standardize_help_options pc: 157 op: NOT_IFW (108)
    if (_has_h_20415 != 0)
    goto LA; // [157] 182
    // SubProg standardize_help_options pc: 160 op: STARTLINE (58)

    /** cmdline.e:333				opts = append(opts, {"h", 0, "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 162 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11616);
    ((intptr_t*)_2)[1] = _11616;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_11629);
    ((intptr_t*)_2)[3] = _11629;
    RefDS(_11616);
    ((intptr_t*)_2)[4] = _11616;
    ((intptr_t*)_2)[5] = -1;
    _11633 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 170 op: APPEND (35)
    RefDS(_11633);
    Append(&_opts_20413, _opts_20413, _11633);
    DeRefDS(_11633);
    _11633 = NOVALUE;
    // SubProg standardize_help_options pc: 174 op: STARTLINE (58)

    /** cmdline.e:334				appended_opts = 1*/
    // SubProg standardize_help_options pc: 176 op: ASSIGN_I (113)
    _appended_opts_20437 = 1;
    // SubProg standardize_help_options pc: 179 op: ELSE (23)
    goto L9; // [179] 208
    // SubProg standardize_help_options pc: 181 op: NOP1 (159)
LA: // addr: 182 pc: 181 sub: 20411 op: 159
    // SubProg standardize_help_options pc: 182 op: STARTLINE (58)

    /** cmdline.e:336			elsif not has_help then*/
    // SubProg standardize_help_options pc: 184 op: NOT_IFW (108)
    if (_has_help_20416 != 0)
    goto LB; // [184] 207
    // SubProg standardize_help_options pc: 187 op: STARTLINE (58)

    /** cmdline.e:337				opts = append(opts, {0, "help", "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 189 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_11624);
    ((intptr_t*)_2)[2] = _11624;
    RefDS(_11629);
    ((intptr_t*)_2)[3] = _11629;
    RefDS(_11616);
    ((intptr_t*)_2)[4] = _11616;
    ((intptr_t*)_2)[5] = -1;
    _11636 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 197 op: APPEND (35)
    RefDS(_11636);
    Append(&_opts_20413, _opts_20413, _11636);
    DeRefDS(_11636);
    _11636 = NOVALUE;
    // SubProg standardize_help_options pc: 201 op: STARTLINE (58)

    /** cmdline.e:338				appended_opts = 1*/
    // SubProg standardize_help_options pc: 203 op: ASSIGN_I (113)
    _appended_opts_20437 = 1;
    // SubProg standardize_help_options pc: 206 op: NOP1 (159)
LB: // addr: 207 pc: 206 sub: 20411 op: 159
    // SubProg standardize_help_options pc: 207 op: NOP1 (159)
L9: // addr: 208 pc: 207 sub: 20411 op: 159
    // SubProg standardize_help_options pc: 208 op: STARTLINE (58)

    /** cmdline.e:342			if not has_question then			*/
    // SubProg standardize_help_options pc: 210 op: NOT_IFW (108)
    if (_has_question_20417 != 0)
    goto LC; // [210] 233
    // SubProg standardize_help_options pc: 213 op: STARTLINE (58)

    /** cmdline.e:343				opts = append(opts, {"?", 0, "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 215 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11620);
    ((intptr_t*)_2)[1] = _11620;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_11629);
    ((intptr_t*)_2)[3] = _11629;
    RefDS(_11616);
    ((intptr_t*)_2)[4] = _11616;
    ((intptr_t*)_2)[5] = -1;
    _11639 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 223 op: APPEND (35)
    RefDS(_11639);
    Append(&_opts_20413, _opts_20413, _11639);
    DeRefDS(_11639);
    _11639 = NOVALUE;
    // SubProg standardize_help_options pc: 227 op: STARTLINE (58)

    /** cmdline.e:344				appended_opts = 1*/
    // SubProg standardize_help_options pc: 229 op: ASSIGN_I (113)
    _appended_opts_20437 = 1;
    // SubProg standardize_help_options pc: 232 op: NOP1 (159)
LC: // addr: 233 pc: 232 sub: 20411 op: 159
    // SubProg standardize_help_options pc: 233 op: STARTLINE (58)

    /** cmdline.e:347			if appended_opts then*/
    // SubProg standardize_help_options pc: 235 op: IF (20)
    if (_appended_opts_20437 == 0)
    {
        goto LD; // [235] 248
    }
    else{
    }
    // SubProg standardize_help_options pc: 238 op: STARTLINE (58)

    /** cmdline.e:349				opts = standardize_opts(opts, 0)*/
    // SubProg standardize_help_options pc: 240 op: PROC (27)
    RefDS(_opts_20413);
    _0 = _opts_20413;
    _opts_20413 = _48standardize_opts(_opts_20413, 0);
    DeRefDS(_0);
    // SubProg standardize_help_options pc: 245 op: SEQUENCE_CHECK (97)
    // SubProg standardize_help_options pc: 247 op: NOP1 (159)
LD: // addr: 248 pc: 247 sub: 20411 op: 159
    // SubProg standardize_help_options pc: 248 op: NOP1 (159)
L7: // addr: 249 pc: 248 sub: 20411 op: 159
    // SubProg standardize_help_options pc: 249 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var appended_opts_20437
    // SubProg standardize_help_options pc: 251 op: STARTLINE (58)

    /** cmdline.e:352		return opts*/
    // SubProg standardize_help_options pc: 253 op: RETURNF (28)

// Exiting block BLOCK: standardize_help_options

// block var auto_help_switches_20414

// block var has_h_20415

// block var has_help_20416

// block var has_question_20417
    DeRef(_11626);
    _11626 = NOVALUE;
    return _opts_20413;
    // SubProg standardize_help_options pc: 257 op: BADRETURNF (43)
    ;
}


object _48standardize_opts(object _opts_20462, object _auto_help_switches_20463)
{
    object _11678 = NOVALUE; // 20505 11678
    object _11677 = NOVALUE; // 20504 11677
// skipping _11676  name type: 0
    object _11675 = NOVALUE; // 20502 11675
    object _11674 = NOVALUE; // 20501 11674
    object _11673 = NOVALUE; // 20500 11673
    object _11672 = NOVALUE; // 20499 11672
    object _11671 = NOVALUE; // 20498 11671
    object _11670 = NOVALUE; // 20497 11670
    object _11669 = NOVALUE; // 20496 11669
    object _11668 = NOVALUE; // 20495 11668
    object _11667 = NOVALUE; // 20494 11667
    object _11666 = NOVALUE; // 20493 11666
    object _11665 = NOVALUE; // 20491 11665
    object _11664 = NOVALUE; // 20490 11664
// skipping _11663  name type: 0
    object _11662 = NOVALUE; // 20488 11662
    object _11661 = NOVALUE; // 20487 11661
    object _11660 = NOVALUE; // 20486 11660
    object _11659 = NOVALUE; // 20485 11659
    object _11658 = NOVALUE; // 20484 11658
    object _11657 = NOVALUE; // 20483 11657
    object _11656 = NOVALUE; // 20482 11656
    object _11655 = NOVALUE; // 20481 11655
    object _11654 = NOVALUE; // 20480 11654
    object _11653 = NOVALUE; // 20479 11653
    object _11652 = NOVALUE; // 20477 11652
    object _11651 = NOVALUE; // 20476 11651
// skipping _11650  name type: 0
    object _11649 = NOVALUE; // 20474 11649
// skipping _11648  name type: 0
    object _11647 = NOVALUE; // 20472 11647
    object _11646 = NOVALUE; // 20471 11646
    object _11645 = NOVALUE; // 20470 11645
    object _11644 = NOVALUE; // 20468 11644
// skipping _11643  name type: 0
// skipping _11642  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg standardize_opts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 3 op: INTEGER_CHECK (96)
    // SubProg standardize_opts pc: 5 op: STARTLINE (58)

    /** cmdline.e:357		opts = update_opts( opts )*/
    // SubProg standardize_opts pc: 7 op: PROC (27)
    RefDS(_opts_20462);
    _0 = _opts_20462;
    _opts_20462 = _48update_opts(_opts_20462);
    DeRefDS(_0);
    // SubProg standardize_opts pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 13 op: STARTLINE (58)

    /** cmdline.e:359		check_for_duplicates( opts )*/
    // SubProg standardize_opts pc: 15 op: PROC (27)
    RefDS(_opts_20462);
    _48check_for_duplicates(_opts_20462);
    // SubProg standardize_opts pc: 18 op: STARTLINE (58)

    /** cmdline.e:361		opts = standardize_help_options( opts, auto_help_switches )*/
    // SubProg standardize_opts pc: 20 op: PROC (27)
    RefDS(_opts_20462);
    _0 = _opts_20462;
    _opts_20462 = _48standardize_help_options(_opts_20462, _auto_help_switches_20463);
    DeRefDS(_0);
    // SubProg standardize_opts pc: 25 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 27 op: STARTLINE (58)

    /** cmdline.e:364		for i = 1 to length(opts) do*/
    // SubProg standardize_opts pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20462)){
            _11644 = SEQ_PTR(_opts_20462)->length;
    }
    else {
        _11644 = 1;
    }
    // SubProg standardize_opts pc: 32 op: FOR_I (125)
    {
        object _i_20467;
        _i_20467 = 1;
L1: // addr: 39 pc: 32 sub: 20460 op: 125
        if (_i_20467 > _11644){
            goto L2; // [32] 208
        }
        // SubProg standardize_opts pc: 39 op: STARTLINE (58)

        /** cmdline.e:365			if not find(HAS_PARAMETER, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20462);
        _11645 = (object)*(((s1_ptr)_2)->base + _i_20467);
        // SubProg standardize_opts pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11645);
        _11646 = (object)*(((s1_ptr)_2)->base + 4);
        _11645 = NOVALUE;
        // SubProg standardize_opts pc: 49 op: FIND_FROM (176)
        _11647 = find_from(112, _11646, 1);
        _11646 = NOVALUE;
        // SubProg standardize_opts pc: 54 op: NOT_IFW (108)
        if (_11647 != 0)
        goto L3; // [54] 77
        _11647 = NOVALUE;
        // SubProg standardize_opts pc: 57 op: STARTLINE (58)

        /** cmdline.e:366				opts[i][OPTIONS] &= NO_PARAMETER*/
        // SubProg standardize_opts pc: 59 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_20462);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20462 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_20467 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 64 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _11651 = (object)*(((s1_ptr)_2)->base + 4);
        _11649 = NOVALUE;
        // SubProg standardize_opts pc: 68 op: CONCAT (15)
        if (IS_SEQUENCE(_11651) && IS_ATOM(110)) {
            Append(&_11652, _11651, 110);
        }
        else if (IS_ATOM(_11651) && IS_SEQUENCE(110)) {
        }
        else {
            Concat((object_ptr)&_11652, _11651, 110);
            _11651 = NOVALUE;
        }
        _11651 = NOVALUE;
        // SubProg standardize_opts pc: 72 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11652;
        if( _1 != _11652 ){
            DeRef(_1);
        }
        _11652 = NOVALUE;
        _11649 = NOVALUE;
        // SubProg standardize_opts pc: 76 op: NOP1 (159)
L3: // addr: 77 pc: 76 sub: 20460 op: 159
        // SubProg standardize_opts pc: 77 op: STARTLINE (58)

        /** cmdline.e:369			if not find(MULTIPLE, opts[i][OPTIONS]) and not find(ONCE, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20462);
        _11653 = (object)*(((s1_ptr)_2)->base + _i_20467);
        // SubProg standardize_opts pc: 83 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11653);
        _11654 = (object)*(((s1_ptr)_2)->base + 4);
        _11653 = NOVALUE;
        // SubProg standardize_opts pc: 87 op: FIND_FROM (176)
        _11655 = find_from(42, _11654, 1);
        _11654 = NOVALUE;
        // SubProg standardize_opts pc: 92 op: NOT (7)
        _11656 = (_11655 == 0);
        _11655 = NOVALUE;
        // SubProg standardize_opts pc: 95 op: SC1_AND_IF (146)
        if (_11656 == 0) {
            goto L4; // [95] 139
        }
        // SubProg standardize_opts pc: 99 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20462);
        _11658 = (object)*(((s1_ptr)_2)->base + _i_20467);
        // SubProg standardize_opts pc: 103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11658);
        _11659 = (object)*(((s1_ptr)_2)->base + 4);
        _11658 = NOVALUE;
        // SubProg standardize_opts pc: 107 op: FIND_FROM (176)
        _11660 = find_from(49, _11659, 1);
        _11659 = NOVALUE;
        // SubProg standardize_opts pc: 112 op: NOT (7)
        _11661 = (_11660 == 0);
        _11660 = NOVALUE;
        // SubProg standardize_opts pc: 115 op: NOP1 (159)
        // SubProg standardize_opts pc: 116 op: IF (20)
        if (_11661 == 0)
        {
            DeRef(_11661);
            _11661 = NOVALUE;
            goto L4; // [116] 139
        }
        else{
            DeRef(_11661);
            _11661 = NOVALUE;
        }
        // SubProg standardize_opts pc: 119 op: STARTLINE (58)

        /** cmdline.e:370				opts[i][OPTIONS] &= ONCE*/
        // SubProg standardize_opts pc: 121 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_20462);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20462 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_20467 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 126 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _11664 = (object)*(((s1_ptr)_2)->base + 4);
        _11662 = NOVALUE;
        // SubProg standardize_opts pc: 130 op: CONCAT (15)
        if (IS_SEQUENCE(_11664) && IS_ATOM(49)) {
            Append(&_11665, _11664, 49);
        }
        else if (IS_ATOM(_11664) && IS_SEQUENCE(49)) {
        }
        else {
            Concat((object_ptr)&_11665, _11664, 49);
            _11664 = NOVALUE;
        }
        _11664 = NOVALUE;
        // SubProg standardize_opts pc: 134 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11665;
        if( _1 != _11665 ){
            DeRef(_1);
        }
        _11665 = NOVALUE;
        _11662 = NOVALUE;
        // SubProg standardize_opts pc: 138 op: NOP1 (159)
L4: // addr: 139 pc: 138 sub: 20460 op: 159
        // SubProg standardize_opts pc: 139 op: STARTLINE (58)

        /** cmdline.e:373			if not find(HAS_CASE, opts[i][OPTIONS]) and not find(NO_CASE, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 141 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20462);
        _11666 = (object)*(((s1_ptr)_2)->base + _i_20467);
        // SubProg standardize_opts pc: 145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11666);
        _11667 = (object)*(((s1_ptr)_2)->base + 4);
        _11666 = NOVALUE;
        // SubProg standardize_opts pc: 149 op: FIND_FROM (176)
        _11668 = find_from(99, _11667, 1);
        _11667 = NOVALUE;
        // SubProg standardize_opts pc: 154 op: NOT (7)
        _11669 = (_11668 == 0);
        _11668 = NOVALUE;
        // SubProg standardize_opts pc: 157 op: SC1_AND_IF (146)
        if (_11669 == 0) {
            goto L5; // [157] 201
        }
        // SubProg standardize_opts pc: 161 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20462);
        _11671 = (object)*(((s1_ptr)_2)->base + _i_20467);
        // SubProg standardize_opts pc: 165 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11671);
        _11672 = (object)*(((s1_ptr)_2)->base + 4);
        _11671 = NOVALUE;
        // SubProg standardize_opts pc: 169 op: FIND_FROM (176)
        _11673 = find_from(105, _11672, 1);
        _11672 = NOVALUE;
        // SubProg standardize_opts pc: 174 op: NOT (7)
        _11674 = (_11673 == 0);
        _11673 = NOVALUE;
        // SubProg standardize_opts pc: 177 op: NOP1 (159)
        // SubProg standardize_opts pc: 178 op: IF (20)
        if (_11674 == 0)
        {
            DeRef(_11674);
            _11674 = NOVALUE;
            goto L5; // [178] 201
        }
        else{
            DeRef(_11674);
            _11674 = NOVALUE;
        }
        // SubProg standardize_opts pc: 181 op: STARTLINE (58)

        /** cmdline.e:374				opts[i][OPTIONS] &= NO_CASE*/
        // SubProg standardize_opts pc: 183 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_20462);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_20462 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_20467 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 188 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _11677 = (object)*(((s1_ptr)_2)->base + 4);
        _11675 = NOVALUE;
        // SubProg standardize_opts pc: 192 op: CONCAT (15)
        if (IS_SEQUENCE(_11677) && IS_ATOM(105)) {
            Append(&_11678, _11677, 105);
        }
        else if (IS_ATOM(_11677) && IS_SEQUENCE(105)) {
        }
        else {
            Concat((object_ptr)&_11678, _11677, 105);
            _11677 = NOVALUE;
        }
        _11677 = NOVALUE;
        // SubProg standardize_opts pc: 196 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11678;
        if( _1 != _11678 ){
            DeRef(_1);
        }
        _11678 = NOVALUE;
        _11675 = NOVALUE;
        // SubProg standardize_opts pc: 200 op: NOP1 (159)
L5: // addr: 201 pc: 200 sub: 20460 op: 159
        // SubProg standardize_opts pc: 201 op: STARTLINE (58)

        /** cmdline.e:376		end for*/
        // SubProg standardize_opts pc: 203 op: ENDFOR_INT_UP1 (54)
        _i_20467 = _i_20467 + 1;
        goto L1; // [203] 39
L2: // addr: 208 pc: 203 sub: 20460 op: 54
        ;
    }
    // SubProg standardize_opts pc: 208 op: STARTLINE (58)

    /** cmdline.e:378		return opts*/
    // SubProg standardize_opts pc: 210 op: RETURNF (28)

// Exiting block BLOCK: standardize_opts

// block var auto_help_switches_20463
    DeRef(_11656);
    _11656 = NOVALUE;
    DeRef(_11669);
    _11669 = NOVALUE;
    return _opts_20462;
    // SubProg standardize_opts pc: 214 op: BADRETURNF (43)
    ;
}


object _48print_help(object _opts_20508, object _cmds_20509)
{
    object _pad_size_20510 = NOVALUE;
    object _this_size_20511 = NOVALUE;
    object _extras_mandatory_20512 = NOVALUE;
    object _extras_opt_20513 = NOVALUE;
    object _param_name_20514 = NOVALUE;
    object _has_param_20515 = NOVALUE;
    object _11767 = NOVALUE; // 20625 11767
    object _11766 = NOVALUE; // 20623 11766
    object _11765 = NOVALUE; // 20622 11765
    object _11764 = NOVALUE; // 20621 11764
// skipping _11763  name type: 0
    object _11762 = NOVALUE; // 20618 11762
    object _11761 = NOVALUE; // 20617 11761
    object _11760 = NOVALUE; // 20616 11760
    object _11759 = NOVALUE; // 20615 11759
    object _11758 = NOVALUE; // 20614 11758
    object _11757 = NOVALUE; // 20613 11757
    object _11756 = NOVALUE; // 20612 11756
    object _11755 = NOVALUE; // 20610 11755
    object _11754 = NOVALUE; // 20607 11754
    object _11753 = NOVALUE; // 20606 11753
// skipping _11751  name type: 0
// skipping _11750  name type: 0
// skipping _11749  name type: 0
    object _11748 = NOVALUE; // 20600 11748
    object _11747 = NOVALUE; // 20599 11747
// skipping _11746  name type: 0
    object _11745 = NOVALUE; // 20595 11745
    object _11744 = NOVALUE; // 20594 11744
    object _11743 = NOVALUE; // 20593 11743
    object _11742 = NOVALUE; // 20592 11742
    object _11741 = NOVALUE; // 20591 11741
    object _11740 = NOVALUE; // 20590 11740
// skipping _11739  name type: 0
    object _11738 = NOVALUE; // 20587 11738
    object _11737 = NOVALUE; // 20586 11737
    object _11736 = NOVALUE; // 20585 11736
// skipping _11735  name type: 0
// skipping _11734  name type: 0
// skipping _11733  name type: 0
    object _11732 = NOVALUE; // 20579 11732
    object _11731 = NOVALUE; // 20578 11731
// skipping _11730  name type: 0
    object _11729 = NOVALUE; // 20576 11729
    object _11728 = NOVALUE; // 20575 11728
    object _11727 = NOVALUE; // 20574 11727
    object _11726 = NOVALUE; // 20573 11726
    object _11725 = NOVALUE; // 20572 11725
    object _11724 = NOVALUE; // 20571 11724
    object _11723 = NOVALUE; // 20570 11723
// skipping _11722  name type: 0
// skipping _11721  name type: 0
    object _11720 = NOVALUE; // 20566 11720
    object _11719 = NOVALUE; // 20565 11719
    object _11718 = NOVALUE; // 20564 11718
// skipping _11717  name type: 0
    object _11716 = NOVALUE; // 20561 11716
    object _11715 = NOVALUE; // 20560 11715
    object _11714 = NOVALUE; // 20559 11714
    object _11713 = NOVALUE; // 20558 11713
    object _11712 = NOVALUE; // 20557 11712
    object _11711 = NOVALUE; // 20556 11711
    object _11710 = NOVALUE; // 20555 11710
// skipping _11709  name type: 0
// skipping _11708  name type: 0
    object _11707 = NOVALUE; // 20551 11707
    object _11706 = NOVALUE; // 20550 11706
    object _11705 = NOVALUE; // 20549 11705
// skipping _11704  name type: 0
    object _11703 = NOVALUE; // 20546 11703
    object _11702 = NOVALUE; // 20545 11702
    object _11701 = NOVALUE; // 20544 11701
    object _11700 = NOVALUE; // 20543 11700
    object _11699 = NOVALUE; // 20542 11699
    object _11698 = NOVALUE; // 20541 11698
    object _11697 = NOVALUE; // 20540 11697
    object _11696 = NOVALUE; // 20538 11696
    object _11695 = NOVALUE; // 20537 11695
    object _11694 = NOVALUE; // 20536 11694
    object _11693 = NOVALUE; // 20534 11693
    object _11692 = NOVALUE; // 20533 11692
    object _11691 = NOVALUE; // 20532 11691
    object _11690 = NOVALUE; // 20531 11690
    object _11689 = NOVALUE; // 20530 11689
    object _11688 = NOVALUE; // 20529 11688
    object _11687 = NOVALUE; // 20528 11687
    object _11686 = NOVALUE; // 20526 11686
    object _11685 = NOVALUE; // 20525 11685
    object _11684 = NOVALUE; // 20524 11684
    object _11683 = NOVALUE; // 20523 11683
    object _11682 = NOVALUE; // 20522 11682
    object _11681 = NOVALUE; // 20521 11681
    object _11680 = NOVALUE; // 20520 11680
    object _11679 = NOVALUE; // 20518 11679
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_help pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg print_help pc: 5 op: STARTLINE (58)

    /** cmdline.e:384		integer pad_size = 0*/
    // SubProg print_help pc: 7 op: ASSIGN_I (113)
    _pad_size_20510 = 0;
    // SubProg print_help pc: 10 op: STARTLINE (58)

    /** cmdline.e:386		integer extras_mandatory = 0*/
    // SubProg print_help pc: 12 op: ASSIGN_I (113)
    _extras_mandatory_20512 = 0;
    // SubProg print_help pc: 15 op: STARTLINE (58)

    /** cmdline.e:387		integer extras_opt = 0*/
    // SubProg print_help pc: 17 op: ASSIGN_I (113)
    _extras_opt_20513 = 0;
    // SubProg print_help pc: 20 op: STARTLINE (58)

    /** cmdline.e:391		for i = 1 to length(opts) do*/
    // SubProg print_help pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20508)){
            _11679 = SEQ_PTR(_opts_20508)->length;
    }
    else {
        _11679 = 1;
    }
    // SubProg print_help pc: 25 op: FOR_I (125)
    {
        object _i_20517;
        _i_20517 = 1;
L1: // addr: 32 pc: 25 sub: 20506 op: 125
        if (_i_20517 > _11679){
            goto L2; // [25] 456
        }
        // SubProg print_help pc: 32 op: STARTLINE (58)

        /** cmdline.e:392			this_size = 0*/
        // SubProg print_help pc: 34 op: ASSIGN_I (113)
        _this_size_20511 = 0;
        // SubProg print_help pc: 37 op: STARTLINE (58)

        /** cmdline.e:393			param_name = ""*/
        // SubProg print_help pc: 39 op: ASSIGN (18)
        RefDS(_5);
        DeRef(_param_name_20514);
        _param_name_20514 = _5;
        // SubProg print_help pc: 42 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 44 op: STARTLINE (58)

        /** cmdline.e:395			if atom(opts[i][SHORTNAME]) and opts[i][SHORTNAME] = HEADER then*/
        // SubProg print_help pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11680 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11680);
        _11681 = (object)*(((s1_ptr)_2)->base + 1);
        _11680 = NOVALUE;
        // SubProg print_help pc: 54 op: IS_AN_ATOM (67)
        _11682 = IS_ATOM(_11681);
        _11681 = NOVALUE;
        // SubProg print_help pc: 57 op: SC1_AND_IF (146)
        if (_11682 == 0) {
            goto L3; // [57] 82
        }
        // SubProg print_help pc: 61 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11684 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 65 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11684);
        _11685 = (object)*(((s1_ptr)_2)->base + 1);
        _11684 = NOVALUE;
        // SubProg print_help pc: 69 op: EQUALS (3)
        if (IS_ATOM_INT(_11685)) {
            _11686 = (_11685 == 72);
        }
        else {
            _11686 = binary_op(EQUALS, _11685, 72);
        }
        _11685 = NOVALUE;
        // SubProg print_help pc: 73 op: NOP1 (159)
        // SubProg print_help pc: 74 op: IF (20)
        if (_11686 == 0) {
            DeRef(_11686);
            _11686 = NOVALUE;
            goto L3; // [74] 82
        }
        else {
            if (!IS_ATOM_INT(_11686) && DBL_PTR(_11686)->dbl == 0.0){
                DeRef(_11686);
                _11686 = NOVALUE;
                goto L3; // [74] 82
            }
            DeRef(_11686);
            _11686 = NOVALUE;
        }
        DeRef(_11686);
        _11686 = NOVALUE;
        // SubProg print_help pc: 77 op: STARTLINE (58)

        /** cmdline.e:396				continue*/
        // SubProg print_help pc: 79 op: ELSE (23)
        goto L4; // [79] 451
        // SubProg print_help pc: 81 op: NOP1 (159)
L3: // addr: 82 pc: 81 sub: 20506 op: 159
        // SubProg print_help pc: 82 op: STARTLINE (58)

        /** cmdline.e:399			if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 84 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11687 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11687);
        _11688 = (object)*(((s1_ptr)_2)->base + 1);
        _11687 = NOVALUE;
        // SubProg print_help pc: 92 op: IS_AN_ATOM (67)
        _11689 = IS_ATOM(_11688);
        _11688 = NOVALUE;
        // SubProg print_help pc: 95 op: SC1_AND_IF (146)
        if (_11689 == 0) {
            goto L5; // [95] 148
        }
        // SubProg print_help pc: 99 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11691 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11691);
        _11692 = (object)*(((s1_ptr)_2)->base + 2);
        _11691 = NOVALUE;
        // SubProg print_help pc: 107 op: IS_AN_ATOM (67)
        _11693 = IS_ATOM(_11692);
        _11692 = NOVALUE;
        // SubProg print_help pc: 110 op: NOP1 (159)
        // SubProg print_help pc: 111 op: IF (20)
        if (_11693 == 0)
        {
            _11693 = NOVALUE;
            goto L5; // [111] 148
        }
        else{
            _11693 = NOVALUE;
        }
        // SubProg print_help pc: 114 op: STARTLINE (58)

        /** cmdline.e:400				extras_opt = i*/
        // SubProg print_help pc: 116 op: ASSIGN_I (113)
        _extras_opt_20513 = _i_20517;
        // SubProg print_help pc: 119 op: STARTLINE (58)

        /** cmdline.e:401				if find(MANDATORY, opts[i][OPTIONS]) then*/
        // SubProg print_help pc: 121 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11694 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 125 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11694);
        _11695 = (object)*(((s1_ptr)_2)->base + 4);
        _11694 = NOVALUE;
        // SubProg print_help pc: 129 op: FIND_FROM (176)
        _11696 = find_from(109, _11695, 1);
        _11695 = NOVALUE;
        // SubProg print_help pc: 134 op: IF (20)
        if (_11696 == 0)
        {
            _11696 = NOVALUE;
            goto L4; // [134] 451
        }
        else{
            _11696 = NOVALUE;
        }
        // SubProg print_help pc: 137 op: STARTLINE (58)

        /** cmdline.e:402					extras_mandatory = 1*/
        // SubProg print_help pc: 139 op: ASSIGN_I (113)
        _extras_mandatory_20512 = 1;
        // SubProg print_help pc: 142 op: NOP1 (159)
        // SubProg print_help pc: 143 op: STARTLINE (58)

        /** cmdline.e:405				continue*/
        // SubProg print_help pc: 145 op: ELSE (23)
        goto L4; // [145] 451
        // SubProg print_help pc: 147 op: NOP1 (159)
L5: // addr: 148 pc: 147 sub: 20506 op: 159
        // SubProg print_help pc: 148 op: STARTLINE (58)

        /** cmdline.e:408			if sequence(opts[i][SHORTNAME]) then*/
        // SubProg print_help pc: 150 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11697 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 154 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11697);
        _11698 = (object)*(((s1_ptr)_2)->base + 1);
        _11697 = NOVALUE;
        // SubProg print_help pc: 158 op: IS_A_SEQUENCE (68)
        _11699 = IS_SEQUENCE(_11698);
        _11698 = NOVALUE;
        // SubProg print_help pc: 161 op: IF (20)
        if (_11699 == 0)
        {
            _11699 = NOVALUE;
            goto L6; // [161] 214
        }
        else{
            _11699 = NOVALUE;
        }
        // SubProg print_help pc: 164 op: STARTLINE (58)

        /** cmdline.e:409				this_size += length(opts[i][SHORTNAME]) + 1 -- Allow for "-"*/
        // SubProg print_help pc: 166 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11700 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 170 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11700);
        _11701 = (object)*(((s1_ptr)_2)->base + 1);
        _11700 = NOVALUE;
        // SubProg print_help pc: 174 op: LENGTH (42)
        if (IS_SEQUENCE(_11701)){
                _11702 = SEQ_PTR(_11701)->length;
        }
        else {
            _11702 = 1;
        }
        _11701 = NOVALUE;
        // SubProg print_help pc: 177 op: PLUS1 (93)
        _11703 = _11702 + 1;
        _11702 = NOVALUE;
        // SubProg print_help pc: 181 op: PLUS (11)
        _this_size_20511 = _this_size_20511 + _11703;
        _11703 = NOVALUE;
        // SubProg print_help pc: 187 op: STARTLINE (58)

        /** cmdline.e:410				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        // SubProg print_help pc: 189 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11705 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 193 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11705);
        _11706 = (object)*(((s1_ptr)_2)->base + 4);
        _11705 = NOVALUE;
        // SubProg print_help pc: 197 op: FIND_FROM (176)
        _11707 = find_from(109, _11706, 1);
        _11706 = NOVALUE;
        // SubProg print_help pc: 202 op: EQUALS_IFW_I (121)
        if (_11707 != 0)
        goto L7; // [202] 213
        // SubProg print_help pc: 206 op: STARTLINE (58)

        /** cmdline.e:411					this_size += 2 -- Allow for '[' ']'*/
        // SubProg print_help pc: 208 op: PLUS_I (115)
        _this_size_20511 = _this_size_20511 + 2;
        // SubProg print_help pc: 212 op: NOP1 (159)
L7: // addr: 213 pc: 212 sub: 20506 op: 159
        // SubProg print_help pc: 213 op: NOP1 (159)
L6: // addr: 214 pc: 213 sub: 20506 op: 159
        // SubProg print_help pc: 214 op: STARTLINE (58)

        /** cmdline.e:415			if sequence(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 216 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11710 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 220 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11710);
        _11711 = (object)*(((s1_ptr)_2)->base + 2);
        _11710 = NOVALUE;
        // SubProg print_help pc: 224 op: IS_A_SEQUENCE (68)
        _11712 = IS_SEQUENCE(_11711);
        _11711 = NOVALUE;
        // SubProg print_help pc: 227 op: IF (20)
        if (_11712 == 0)
        {
            _11712 = NOVALUE;
            goto L8; // [227] 280
        }
        else{
            _11712 = NOVALUE;
        }
        // SubProg print_help pc: 230 op: STARTLINE (58)

        /** cmdline.e:416				this_size += length(opts[i][LONGNAME]) + 2 -- Allow for "--"*/
        // SubProg print_help pc: 232 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11713 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 236 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11713);
        _11714 = (object)*(((s1_ptr)_2)->base + 2);
        _11713 = NOVALUE;
        // SubProg print_help pc: 240 op: LENGTH (42)
        if (IS_SEQUENCE(_11714)){
                _11715 = SEQ_PTR(_11714)->length;
        }
        else {
            _11715 = 1;
        }
        _11714 = NOVALUE;
        // SubProg print_help pc: 243 op: PLUS (11)
        _11716 = _11715 + 2;
        _11715 = NOVALUE;
        // SubProg print_help pc: 247 op: PLUS (11)
        _this_size_20511 = _this_size_20511 + _11716;
        _11716 = NOVALUE;
        // SubProg print_help pc: 253 op: STARTLINE (58)

        /** cmdline.e:417				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        // SubProg print_help pc: 255 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11718 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 259 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11718);
        _11719 = (object)*(((s1_ptr)_2)->base + 4);
        _11718 = NOVALUE;
        // SubProg print_help pc: 263 op: FIND_FROM (176)
        _11720 = find_from(109, _11719, 1);
        _11719 = NOVALUE;
        // SubProg print_help pc: 268 op: EQUALS_IFW_I (121)
        if (_11720 != 0)
        goto L9; // [268] 279
        // SubProg print_help pc: 272 op: STARTLINE (58)

        /** cmdline.e:418					this_size += 2 -- Allow for '[' ']'*/
        // SubProg print_help pc: 274 op: PLUS_I (115)
        _this_size_20511 = _this_size_20511 + 2;
        // SubProg print_help pc: 278 op: NOP1 (159)
L9: // addr: 279 pc: 278 sub: 20506 op: 159
        // SubProg print_help pc: 279 op: NOP1 (159)
L8: // addr: 280 pc: 279 sub: 20506 op: 159
        // SubProg print_help pc: 280 op: STARTLINE (58)

        /** cmdline.e:422			if sequence(opts[i][SHORTNAME]) and sequence(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 282 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11723 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 286 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11723);
        _11724 = (object)*(((s1_ptr)_2)->base + 1);
        _11723 = NOVALUE;
        // SubProg print_help pc: 290 op: IS_A_SEQUENCE (68)
        _11725 = IS_SEQUENCE(_11724);
        _11724 = NOVALUE;
        // SubProg print_help pc: 293 op: SC1_AND_IF (146)
        if (_11725 == 0) {
            goto LA; // [293] 319
        }
        // SubProg print_help pc: 297 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11727 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 301 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11727);
        _11728 = (object)*(((s1_ptr)_2)->base + 2);
        _11727 = NOVALUE;
        // SubProg print_help pc: 305 op: IS_A_SEQUENCE (68)
        _11729 = IS_SEQUENCE(_11728);
        _11728 = NOVALUE;
        // SubProg print_help pc: 308 op: NOP1 (159)
        // SubProg print_help pc: 309 op: IF (20)
        if (_11729 == 0)
        {
            _11729 = NOVALUE;
            goto LA; // [309] 319
        }
        else{
            _11729 = NOVALUE;
        }
        // SubProg print_help pc: 312 op: STARTLINE (58)

        /** cmdline.e:423				this_size += 2 -- Allow for ", " between short and long names*/
        // SubProg print_help pc: 314 op: PLUS_I (115)
        _this_size_20511 = _this_size_20511 + 2;
        // SubProg print_help pc: 318 op: NOP1 (159)
LA: // addr: 319 pc: 318 sub: 20506 op: 159
        // SubProg print_help pc: 319 op: STARTLINE (58)

        /** cmdline.e:426			has_param = find(HAS_PARAMETER, opts[i][OPTIONS])*/
        // SubProg print_help pc: 321 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11731 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 325 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11731);
        _11732 = (object)*(((s1_ptr)_2)->base + 4);
        _11731 = NOVALUE;
        // SubProg print_help pc: 329 op: FIND_FROM (176)
        _has_param_20515 = find_from(112, _11732, 1);
        _11732 = NOVALUE;
        // SubProg print_help pc: 334 op: STARTLINE (58)

        /** cmdline.e:427			if has_param != 0 then*/
        // SubProg print_help pc: 336 op: NOTEQ_IFW_I (122)
        if (_has_param_20515 == 0)
        goto LB; // [336] 437
        // SubProg print_help pc: 340 op: STARTLINE (58)

        /** cmdline.e:428				this_size += 1 -- Allow for " "*/
        // SubProg print_help pc: 342 op: PLUS1_I (117)
        _this_size_20511 = _this_size_20511 + 1;
        // SubProg print_help pc: 346 op: STARTLINE (58)

        /** cmdline.e:429				if has_param < length(opts[i][OPTIONS]) then*/
        // SubProg print_help pc: 348 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11736 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 352 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11736);
        _11737 = (object)*(((s1_ptr)_2)->base + 4);
        _11736 = NOVALUE;
        // SubProg print_help pc: 356 op: LENGTH (42)
        if (IS_SEQUENCE(_11737)){
                _11738 = SEQ_PTR(_11737)->length;
        }
        else {
            _11738 = 1;
        }
        _11737 = NOVALUE;
        // SubProg print_help pc: 359 op: LESS_IFW_I (119)
        if (_has_param_20515 >= _11738)
        goto LC; // [359] 413
        // SubProg print_help pc: 363 op: STARTLINE (58)

        /** cmdline.e:431					if sequence(opts[i][OPTIONS][has_param]) then*/
        // SubProg print_help pc: 365 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11740 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11740);
        _11741 = (object)*(((s1_ptr)_2)->base + 4);
        _11740 = NOVALUE;
        // SubProg print_help pc: 373 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11741);
        _11742 = (object)*(((s1_ptr)_2)->base + _has_param_20515);
        _11741 = NOVALUE;
        // SubProg print_help pc: 377 op: IS_A_SEQUENCE (68)
        _11743 = IS_SEQUENCE(_11742);
        _11742 = NOVALUE;
        // SubProg print_help pc: 380 op: IF (20)
        if (_11743 == 0)
        {
            _11743 = NOVALUE;
            goto LD; // [380] 402
        }
        else{
            _11743 = NOVALUE;
        }
        // SubProg print_help pc: 383 op: STARTLINE (58)

        /** cmdline.e:432						param_name = opts[i][OPTIONS][has_param]*/
        // SubProg print_help pc: 385 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11744 = (object)*(((s1_ptr)_2)->base + _i_20517);
        // SubProg print_help pc: 389 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11744);
        _11745 = (object)*(((s1_ptr)_2)->base + 4);
        _11744 = NOVALUE;
        // SubProg print_help pc: 393 op: RHS_SUBS_CHECK (92)
        DeRef(_param_name_20514);
        _2 = (object)SEQ_PTR(_11745);
        _param_name_20514 = (object)*(((s1_ptr)_2)->base + _has_param_20515);
        Ref(_param_name_20514);
        _11745 = NOVALUE;
        // SubProg print_help pc: 397 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 399 op: ELSE (23)
        goto LE; // [399] 421
        // SubProg print_help pc: 401 op: NOP1 (159)
LD: // addr: 402 pc: 401 sub: 20506 op: 159
        // SubProg print_help pc: 402 op: STARTLINE (58)

        /** cmdline.e:434						param_name = "x"*/
        // SubProg print_help pc: 404 op: ASSIGN (18)
        RefDS(_11577);
        DeRef(_param_name_20514);
        _param_name_20514 = _11577;
        // SubProg print_help pc: 407 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 409 op: NOP1 (159)
        // SubProg print_help pc: 410 op: ELSE (23)
        goto LE; // [410] 421
        // SubProg print_help pc: 412 op: NOP1 (159)
LC: // addr: 413 pc: 412 sub: 20506 op: 159
        // SubProg print_help pc: 413 op: STARTLINE (58)

        /** cmdline.e:437					param_name = "x"*/
        // SubProg print_help pc: 415 op: ASSIGN (18)
        RefDS(_11577);
        DeRef(_param_name_20514);
        _param_name_20514 = _11577;
        // SubProg print_help pc: 418 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 420 op: NOP1 (159)
LE: // addr: 421 pc: 420 sub: 20506 op: 159
        // SubProg print_help pc: 421 op: STARTLINE (58)

        /** cmdline.e:439				this_size += 2 + length(param_name)*/
        // SubProg print_help pc: 423 op: LENGTH (42)
        if (IS_SEQUENCE(_param_name_20514)){
                _11747 = SEQ_PTR(_param_name_20514)->length;
        }
        else {
            _11747 = 1;
        }
        // SubProg print_help pc: 426 op: PLUS (11)
        _11748 = 2 + _11747;
        _11747 = NOVALUE;
        // SubProg print_help pc: 430 op: PLUS (11)
        _this_size_20511 = _this_size_20511 + _11748;
        _11748 = NOVALUE;
        // SubProg print_help pc: 436 op: NOP1 (159)
LB: // addr: 437 pc: 436 sub: 20506 op: 159
        // SubProg print_help pc: 437 op: STARTLINE (58)

        /** cmdline.e:442			if pad_size < this_size then*/
        // SubProg print_help pc: 439 op: LESS_IFW_I (119)
        if (_pad_size_20510 >= _this_size_20511)
        goto LF; // [439] 449
        // SubProg print_help pc: 443 op: STARTLINE (58)

        /** cmdline.e:443				pad_size = this_size*/
        // SubProg print_help pc: 445 op: ASSIGN_I (113)
        _pad_size_20510 = _this_size_20511;
        // SubProg print_help pc: 448 op: NOP1 (159)
LF: // addr: 449 pc: 448 sub: 20506 op: 159
        // SubProg print_help pc: 449 op: STARTLINE (58)

        /** cmdline.e:445		end for*/
        // SubProg print_help pc: 451 op: ENDFOR_INT_UP1 (54)
L4: // addr: 451 pc: 451 sub: 20506 op: 54
        _i_20517 = _i_20517 + 1;
        goto L1; // [451] 32
L2: // addr: 456 pc: 451 sub: 20506 op: 54
        ;
    }
    // SubProg print_help pc: 456 op: STARTLINE (58)

    /** cmdline.e:446		pad_size += 3 -- Allow for minimum gap between cmd and its description*/
    // SubProg print_help pc: 458 op: PLUS_I (115)
    _pad_size_20510 = _pad_size_20510 + 3;
    // SubProg print_help pc: 462 op: STARTLINE (58)

    /** cmdline.e:448		printf(1, "%s options:\n", {cmds[2]})*/
    // SubProg print_help pc: 464 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmds_20509);
    _11753 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_help pc: 468 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_11753);
    ((intptr_t*)_2)[1] = _11753;
    _11754 = MAKE_SEQ(_1);
    _11753 = NOVALUE;
    // SubProg print_help pc: 472 op: PRINTF (38)
    EPrintf(1, _11752, _11754);
    DeRefDS(_11754);
    _11754 = NOVALUE;
    // SubProg print_help pc: 476 op: STARTLINE (58)

    /** cmdline.e:450		for i = 1 to length(opts) do*/
    // SubProg print_help pc: 478 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20508)){
            _11755 = SEQ_PTR(_opts_20508)->length;
    }
    else {
        _11755 = 1;
    }
    // SubProg print_help pc: 481 op: FOR_I (125)
    {
        object _i_20609;
        _i_20609 = 1;
L10: // addr: 488 pc: 481 sub: 20506 op: 125
        if (_i_20609 > _11755){
            goto L11; // [481] 574
        }
        // SubProg print_help pc: 488 op: STARTLINE (58)

        /** cmdline.e:451			if atom(opts[i][1]) and opts[i][1] = HEADER then*/
        // SubProg print_help pc: 490 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11756 = (object)*(((s1_ptr)_2)->base + _i_20609);
        // SubProg print_help pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11756);
        _11757 = (object)*(((s1_ptr)_2)->base + 1);
        _11756 = NOVALUE;
        // SubProg print_help pc: 498 op: IS_AN_ATOM (67)
        _11758 = IS_ATOM(_11757);
        _11757 = NOVALUE;
        // SubProg print_help pc: 501 op: SC1_AND_IF (146)
        if (_11758 == 0) {
            goto L12; // [501] 557
        }
        // SubProg print_help pc: 505 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11760 = (object)*(((s1_ptr)_2)->base + _i_20609);
        // SubProg print_help pc: 509 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11760);
        _11761 = (object)*(((s1_ptr)_2)->base + 1);
        _11760 = NOVALUE;
        // SubProg print_help pc: 513 op: EQUALS (3)
        if (IS_ATOM_INT(_11761)) {
            _11762 = (_11761 == 72);
        }
        else {
            _11762 = binary_op(EQUALS, _11761, 72);
        }
        _11761 = NOVALUE;
        // SubProg print_help pc: 517 op: NOP1 (159)
        // SubProg print_help pc: 518 op: IF (20)
        if (_11762 == 0) {
            DeRef(_11762);
            _11762 = NOVALUE;
            goto L12; // [518] 557
        }
        else {
            if (!IS_ATOM_INT(_11762) && DBL_PTR(_11762)->dbl == 0.0){
                DeRef(_11762);
                _11762 = NOVALUE;
                goto L12; // [518] 557
            }
            DeRef(_11762);
            _11762 = NOVALUE;
        }
        DeRef(_11762);
        _11762 = NOVALUE;
        // SubProg print_help pc: 521 op: STARTLINE (58)

        /** cmdline.e:452				if i > 1 then*/
        // SubProg print_help pc: 523 op: GREATER_IFW_I (124)
        if (_i_20609 <= 1)
        goto L13; // [523] 534
        // SubProg print_help pc: 527 op: STARTLINE (58)

        /** cmdline.e:453					printf(1, "\n")*/
        // SubProg print_help pc: 529 op: PRINTF (38)
        EPrintf(1, _9157, _5);
        // SubProg print_help pc: 533 op: NOP1 (159)
L13: // addr: 534 pc: 533 sub: 20506 op: 159
        // SubProg print_help pc: 534 op: STARTLINE (58)

        /** cmdline.e:456				printf(1, "%s\n", { opts[i][2] })*/
        // SubProg print_help pc: 536 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11764 = (object)*(((s1_ptr)_2)->base + _i_20609);
        // SubProg print_help pc: 540 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11764);
        _11765 = (object)*(((s1_ptr)_2)->base + 2);
        _11764 = NOVALUE;
        // SubProg print_help pc: 544 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_11765);
        ((intptr_t*)_2)[1] = _11765;
        _11766 = MAKE_SEQ(_1);
        _11765 = NOVALUE;
        // SubProg print_help pc: 548 op: PRINTF (38)
        EPrintf(1, _9169, _11766);
        DeRefDS(_11766);
        _11766 = NOVALUE;
        // SubProg print_help pc: 552 op: STARTLINE (58)

        /** cmdline.e:457				continue*/
        // SubProg print_help pc: 554 op: ELSE (23)
        goto L14; // [554] 569
        // SubProg print_help pc: 556 op: NOP1 (159)
L12: // addr: 557 pc: 556 sub: 20506 op: 159
        // SubProg print_help pc: 557 op: STARTLINE (58)

        /** cmdline.e:460			print_option_help( opts[i], pad_size )*/
        // SubProg print_help pc: 559 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20508);
        _11767 = (object)*(((s1_ptr)_2)->base + _i_20609);
        // SubProg print_help pc: 563 op: PROC (27)
        Ref(_11767);
        _48print_option_help(_11767, _pad_size_20510);
        _11767 = NOVALUE;
        // SubProg print_help pc: 567 op: STARTLINE (58)

        /** cmdline.e:461		end for*/
        // SubProg print_help pc: 569 op: ENDFOR_INT_UP1 (54)
L14: // addr: 569 pc: 569 sub: 20506 op: 54
        _i_20609 = _i_20609 + 1;
        goto L10; // [569] 488
L11: // addr: 574 pc: 569 sub: 20506 op: 54
        ;
    }
    // SubProg print_help pc: 574 op: STARTLINE (58)

    /** cmdline.e:463		print_extras_help( opts, extras_mandatory, extras_opt )*/
    // SubProg print_help pc: 576 op: PROC (27)
    RefDS(_opts_20508);
    _48print_extras_help(_opts_20508, _extras_mandatory_20512, _extras_opt_20513);
    // SubProg print_help pc: 581 op: STARTLINE (58)

    /** cmdline.e:465		return pad_size*/
    // SubProg print_help pc: 583 op: RETURNF (28)

// Exiting block BLOCK: print_help

// block var opts_20508
    DeRefDS(_opts_20508);

// block var cmds_20509
    DeRefDS(_cmds_20509);

// block var this_size_20511

// block var extras_mandatory_20512

// block var extras_opt_20513

// block var param_name_20514
    DeRef(_param_name_20514);

// block var has_param_20515
    _11701 = NOVALUE;
    _11737 = NOVALUE;
    _11714 = NOVALUE;
    return _pad_size_20510;
    // SubProg print_help pc: 587 op: BADRETURNF (43)
    ;
}


void _48print_extras_help(object _opts_20629, object _extras_mandatory_20630, object _extras_opt_20631)
{
    object _11784 = NOVALUE; // 20653 11784
    object _11783 = NOVALUE; // 20652 11783
    object _11782 = NOVALUE; // 20651 11782
// skipping _11781  name type: 0
    object _11780 = NOVALUE; // 20649 11780
    object _11779 = NOVALUE; // 20648 11779
    object _11778 = NOVALUE; // 20647 11778
// skipping _11777  name type: 0
    object _11775 = NOVALUE; // 20641 11775
    object _11774 = NOVALUE; // 20640 11774
    object _11773 = NOVALUE; // 20639 11773
// skipping _11772  name type: 0
    object _11771 = NOVALUE; // 20637 11771
    object _11770 = NOVALUE; // 20636 11770
    object _11769 = NOVALUE; // 20635 11769
// skipping _11768  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_extras_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_extras_help pc: 3 op: INTEGER_CHECK (96)
    // SubProg print_extras_help pc: 5 op: INTEGER_CHECK (96)
    // SubProg print_extras_help pc: 7 op: STARTLINE (58)

    /** cmdline.e:470		if extras_mandatory != 0 then*/
    // SubProg print_extras_help pc: 9 op: NOTEQ_IFW_I (122)
    if (_extras_mandatory_20630 == 0)
    goto L1; // [9] 64
    // SubProg print_extras_help pc: 13 op: STARTLINE (58)

    /** cmdline.e:471			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    // SubProg print_extras_help pc: 15 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20629);
    _11769 = (object)*(((s1_ptr)_2)->base + _extras_opt_20631);
    // SubProg print_extras_help pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11769);
    _11770 = (object)*(((s1_ptr)_2)->base + 3);
    _11769 = NOVALUE;
    // SubProg print_extras_help pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_11770)){
            _11771 = SEQ_PTR(_11770)->length;
    }
    else {
        _11771 = 1;
    }
    _11770 = NOVALUE;
    // SubProg print_extras_help pc: 26 op: GREATER_IFW_I (124)
    if (_11771 <= 0)
    goto L2; // [26] 55
    // SubProg print_extras_help pc: 30 op: STARTLINE (58)

    /** cmdline.e:472				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    // SubProg print_extras_help pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20629);
    _11773 = (object)*(((s1_ptr)_2)->base + _extras_opt_20631);
    // SubProg print_extras_help pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11773);
    _11774 = (object)*(((s1_ptr)_2)->base + 3);
    _11773 = NOVALUE;
    // SubProg print_extras_help pc: 40 op: CONCAT (15)
    if (IS_SEQUENCE(_9157) && IS_ATOM(_11774)) {
        Ref(_11774);
        Append(&_11775, _9157, _11774);
    }
    else if (IS_ATOM(_9157) && IS_SEQUENCE(_11774)) {
    }
    else {
        Concat((object_ptr)&_11775, _9157, _11774);
    }
    _11774 = NOVALUE;
    // SubProg print_extras_help pc: 44 op: PUTS (44)
    EPuts(1, _11775); // DJP 
    DeRefDS(_11775);
    _11775 = NOVALUE;
    // SubProg print_extras_help pc: 47 op: STARTLINE (58)

    /** cmdline.e:473				puts(1, '\n')*/
    // SubProg print_extras_help pc: 49 op: PUTS (44)
    EPuts(1, 10); // DJP 
    // SubProg print_extras_help pc: 52 op: ELSE (23)
    goto L3; // [52] 120
    // SubProg print_extras_help pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 20627 op: 159
    // SubProg print_extras_help pc: 55 op: STARTLINE (58)

    /** cmdline.e:475				puts(1, "One or more additional arguments are also required\n")*/
    // SubProg print_extras_help pc: 57 op: PUTS (44)
    EPuts(1, _11776); // DJP 
    // SubProg print_extras_help pc: 60 op: NOP1 (159)
    // SubProg print_extras_help pc: 61 op: ELSE (23)
    goto L3; // [61] 120
    // SubProg print_extras_help pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 20627 op: 159
    // SubProg print_extras_help pc: 64 op: STARTLINE (58)

    /** cmdline.e:477		elsif extras_opt > 0 then*/
    // SubProg print_extras_help pc: 66 op: GREATER_IFW_I (124)
    if (_extras_opt_20631 <= 0)
    goto L4; // [66] 119
    // SubProg print_extras_help pc: 70 op: STARTLINE (58)

    /** cmdline.e:478			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    // SubProg print_extras_help pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20629);
    _11778 = (object)*(((s1_ptr)_2)->base + _extras_opt_20631);
    // SubProg print_extras_help pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11778);
    _11779 = (object)*(((s1_ptr)_2)->base + 3);
    _11778 = NOVALUE;
    // SubProg print_extras_help pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_11779)){
            _11780 = SEQ_PTR(_11779)->length;
    }
    else {
        _11780 = 1;
    }
    _11779 = NOVALUE;
    // SubProg print_extras_help pc: 83 op: GREATER_IFW_I (124)
    if (_11780 <= 0)
    goto L5; // [83] 112
    // SubProg print_extras_help pc: 87 op: STARTLINE (58)

    /** cmdline.e:479				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    // SubProg print_extras_help pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_20629);
    _11782 = (object)*(((s1_ptr)_2)->base + _extras_opt_20631);
    // SubProg print_extras_help pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11782);
    _11783 = (object)*(((s1_ptr)_2)->base + 3);
    _11782 = NOVALUE;
    // SubProg print_extras_help pc: 97 op: CONCAT (15)
    if (IS_SEQUENCE(_9157) && IS_ATOM(_11783)) {
        Ref(_11783);
        Append(&_11784, _9157, _11783);
    }
    else if (IS_ATOM(_9157) && IS_SEQUENCE(_11783)) {
    }
    else {
        Concat((object_ptr)&_11784, _9157, _11783);
    }
    _11783 = NOVALUE;
    // SubProg print_extras_help pc: 101 op: PUTS (44)
    EPuts(1, _11784); // DJP 
    DeRefDS(_11784);
    _11784 = NOVALUE;
    // SubProg print_extras_help pc: 104 op: STARTLINE (58)

    /** cmdline.e:480				puts(1, '\n')*/
    // SubProg print_extras_help pc: 106 op: PUTS (44)
    EPuts(1, 10); // DJP 
    // SubProg print_extras_help pc: 109 op: ELSE (23)
    goto L6; // [109] 118
    // SubProg print_extras_help pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 20627 op: 159
    // SubProg print_extras_help pc: 112 op: STARTLINE (58)

    /** cmdline.e:482				puts(1, "One or more additional arguments can be supplied.\n")*/
    // SubProg print_extras_help pc: 114 op: PUTS (44)
    EPuts(1, _11785); // DJP 
    // SubProg print_extras_help pc: 117 op: NOP1 (159)
L6: // addr: 118 pc: 117 sub: 20627 op: 159
    // SubProg print_extras_help pc: 118 op: NOP1 (159)
L4: // addr: 119 pc: 118 sub: 20627 op: 159
    // SubProg print_extras_help pc: 119 op: NOP1 (159)
L3: // addr: 120 pc: 119 sub: 20627 op: 159
    // SubProg print_extras_help pc: 120 op: STARTLINE (58)

    /** cmdline.e:485	end procedure*/
    // SubProg print_extras_help pc: 122 op: RETURNP (29)

// Exiting block BLOCK: print_extras_help

// block var opts_20629
    DeRefDS(_opts_20629);

// block var extras_mandatory_20630

// block var extras_opt_20631
    _11779 = NOVALUE;
    _11770 = NOVALUE;
    return;
    // SubProg print_extras_help pc: 125 op: BADRETURNF (43)
    ;
}


void _48local_help(object _opts_20658, object _add_help_rid_20659, object _cmds_20660, object _std_20662, object _parse_options_20663)
{
    object _cmd_20664 = NOVALUE;
    object _is_mandatory_20665 = NOVALUE;
    object _extras_mandatory_20666 = NOVALUE;
    object _extras_opt_20667 = NOVALUE;
    object _auto_help_20668 = NOVALUE;
    object _po_20669 = NOVALUE;
    object _msg_inlined_crash_at_94_20688 = NOVALUE;
    object _pad_size_20695 = NOVALUE;
// skipping _11802  name type: 0
// skipping _11801  name type: 0
// skipping _11800  name type: 0
// skipping _11799  name type: 0
// skipping _11797  name type: 0
// skipping _11796  name type: 0
// skipping _11795  name type: 0
    object _11794 = NOVALUE; // 20681 11794
    object _11791 = NOVALUE; // 20676 11791
// skipping _11790  name type: 0
    object _11789 = NOVALUE; // 20674 11789
// skipping _11788  name type: 0
    object _11787 = NOVALUE; // 20671 11787
// skipping _11786  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg local_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 5 op: INTEGER_CHECK (96)
    // SubProg local_help pc: 7 op: STARTLINE (58)

    /** cmdline.e:492		integer extras_mandatory = 0*/
    // SubProg local_help pc: 9 op: ASSIGN_I (113)
    _extras_mandatory_20666 = 0;
    // SubProg local_help pc: 12 op: STARTLINE (58)

    /** cmdline.e:493		integer extras_opt = 0*/
    // SubProg local_help pc: 14 op: ASSIGN_I (113)
    _extras_opt_20667 = 0;
    // SubProg local_help pc: 17 op: STARTLINE (58)

    /** cmdline.e:494		integer auto_help = 1*/
    // SubProg local_help pc: 19 op: ASSIGN_I (113)
    _auto_help_20668 = 1;
    // SubProg local_help pc: 22 op: STARTLINE (58)

    /** cmdline.e:496		integer po = 1*/
    // SubProg local_help pc: 24 op: ASSIGN_I (113)
    _po_20669 = 1;
    // SubProg local_help pc: 27 op: STARTLINE (58)

    /** cmdline.e:497		if atom(parse_options) then*/
    // SubProg local_help pc: 29 op: IS_AN_ATOM (67)
    _11787 = IS_ATOM(_parse_options_20663);
    // SubProg local_help pc: 32 op: IF (20)
    if (_11787 == 0)
    {
        _11787 = NOVALUE;
        goto L1; // [32] 42
    }
    else{
        _11787 = NOVALUE;
    }
    // SubProg local_help pc: 35 op: STARTLINE (58)

    /** cmdline.e:498			parse_options = {parse_options}*/
    // SubProg local_help pc: 37 op: RIGHT_BRACE_N (31)
    _0 = _parse_options_20663;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_parse_options_20663);
    ((intptr_t*)_2)[1] = _parse_options_20663;
    _parse_options_20663 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg local_help pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 20656 op: 159
    // SubProg local_help pc: 42 op: STARTLINE (58)

    /** cmdline.e:501		while po <= length(parse_options) do*/
    // SubProg local_help pc: 44 op: NOP2 (110)
    // SubProg local_help pc: 46 op: NOPWHILE (158)
L2: // addr: 47 pc: 46 sub: 20656 op: 158
    // SubProg local_help pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_parse_options_20663)){
            _11789 = SEQ_PTR(_parse_options_20663)->length;
    }
    else {
        _11789 = 1;
    }
    // SubProg local_help pc: 50 op: LESSEQ_IFW_I (123)
    if (_po_20669 > _11789)
    goto L3; // [50] 143
    // SubProg local_help pc: 54 op: STARTLINE (58)

    /** cmdline.e:502			switch parse_options[po] do*/
    // SubProg local_help pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_parse_options_20663);
    _11791 = (object)*(((s1_ptr)_2)->base + _po_20669);
    // SubProg local_help pc: 60 op: SWITCH_I (193)
    if (IS_SEQUENCE(_11791) ){
        goto L4; // [60] 129
    }
    if(!IS_ATOM_INT(_11791)){
        if( (DBL_PTR(_11791)->dbl != (eudouble) ((object) DBL_PTR(_11791)->dbl) ) ){
            goto L4; // [60] 129
        }
        _0 = (object) DBL_PTR(_11791)->dbl;
    }
    else {
        _0 = _11791;
    };
    _11791 = NOVALUE;
    switch ( _0 ){ 
        // SubProg local_help pc: 65 op: STARTLINE (58)

        /** cmdline.e:503				case HELP_RID then*/
        // SubProg local_help pc: 67 op: CASE (186)
        case 1:
        // SubProg local_help pc: 69 op: STARTLINE (58)

        /** cmdline.e:504					if po < length(parse_options) then*/
        // SubProg local_help pc: 71 op: LENGTH (42)
        if (IS_SEQUENCE(_parse_options_20663)){
                _11794 = SEQ_PTR(_parse_options_20663)->length;
        }
        else {
            _11794 = 1;
        }
        // SubProg local_help pc: 74 op: LESS_IFW_I (119)
        if (_po_20669 >= _11794)
        goto L5; // [74] 93
        // SubProg local_help pc: 78 op: STARTLINE (58)

        /** cmdline.e:505						po += 1*/
        // SubProg local_help pc: 80 op: PLUS1_I (117)
        _po_20669 = _po_20669 + 1;
        // SubProg local_help pc: 84 op: STARTLINE (58)

        /** cmdline.e:506						add_help_rid = parse_options[po]*/
        // SubProg local_help pc: 86 op: RHS_SUBS_CHECK (92)
        DeRef(_add_help_rid_20659);
        _2 = (object)SEQ_PTR(_parse_options_20663);
        _add_help_rid_20659 = (object)*(((s1_ptr)_2)->base + _po_20669);
        Ref(_add_help_rid_20659);
        // SubProg local_help pc: 90 op: ELSE (23)
        goto L6; // [90] 132
        // SubProg local_help pc: 92 op: NOP1 (159)
L5: // addr: 93 pc: 92 sub: 20656 op: 159
        // SubProg local_help pc: 93 op: STARTLINE (58)

        /** cmdline.e:508						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/
        // SubProg local_help pc: 95 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg local_help pc: 97 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_94_20688);
        _msg_inlined_crash_at_94_20688 = EPrintf(-9999999, _11798, _5);
        // SubProg local_help pc: 101 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg local_help pc: 103 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_94_20688);
        // SubProg local_help pc: 106 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg local_help pc: 108 op: ELSE (23)
        goto L7; // [108] 111
        // SubProg local_help pc: 110 op: NOP1 (159)
L7: // addr: 111 pc: 110 sub: 20656 op: 159
        // SubProg local_help pc: 111 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from local_help @ 94

// block var msg_inlined_crash_at_94_20688
        DeRefi(_msg_inlined_crash_at_94_20688);
        _msg_inlined_crash_at_94_20688 = NOVALUE;
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
        _auto_help_20668 = 0;
        // SubProg local_help pc: 125 op: ELSE (23)
        goto L6; // [125] 132
        // SubProg local_help pc: 127 op: STARTLINE (58)

        /** cmdline.e:514				case else*/
        // SubProg local_help pc: 129 op: CASE (186)
        default:
L4: // addr: 129 pc: 129 sub: 20656 op: 186
        // SubProg local_help pc: 131 op: NOPSWITCH (187)
    ;}L6: // addr: 132 pc: 131 sub: 20656 op: 187
    // SubProg local_help pc: 132 op: STARTLINE (58)

    /** cmdline.e:518			po += 1*/
    // SubProg local_help pc: 134 op: PLUS1_I (117)
    _po_20669 = _po_20669 + 1;
    // SubProg local_help pc: 138 op: STARTLINE (58)

    /** cmdline.e:519		end while*/
    // SubProg local_help pc: 140 op: ENDWHILE (22)
    goto L2; // [140] 47
    // SubProg local_help pc: 142 op: NOP1 (159)
L3: // addr: 143 pc: 142 sub: 20656 op: 159
    // SubProg local_help pc: 143 op: STARTLINE (58)

    /** cmdline.e:521		if std = 0 then*/
    // SubProg local_help pc: 145 op: EQUALS_IFW_I (121)
    if (_std_20662 != 0)
    goto L8; // [145] 159
    // SubProg local_help pc: 149 op: STARTLINE (58)

    /** cmdline.e:522			opts = standardize_opts(opts, auto_help)*/
    // SubProg local_help pc: 151 op: PROC (27)
    RefDS(_opts_20658);
    _0 = _opts_20658;
    _opts_20658 = _48standardize_opts(_opts_20658, _auto_help_20668);
    DeRefDS(_0);
    // SubProg local_help pc: 156 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 158 op: NOP1 (159)
L8: // addr: 159 pc: 158 sub: 20656 op: 159
    // SubProg local_help pc: 159 op: STARTLINE (58)

    /** cmdline.e:525		integer pad_size = print_help( opts, cmds )*/
    // SubProg local_help pc: 161 op: PROC (27)
    RefDS(_opts_20658);
    RefDS(_cmds_20660);
    _pad_size_20695 = _48print_help(_opts_20658, _cmds_20660);
    // SubProg local_help pc: 166 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pad_size_20695)) {
        _1 = (object)(DBL_PTR(_pad_size_20695)->dbl);
        DeRefDS(_pad_size_20695);
        _pad_size_20695 = _1;
    }
    // SubProg local_help pc: 168 op: STARTLINE (58)

    /** cmdline.e:527		call_user_help( add_help_rid )*/
    // SubProg local_help pc: 170 op: PROC (27)
    Ref(_add_help_rid_20659);
    _48call_user_help(_add_help_rid_20659);
    // SubProg local_help pc: 173 op: STARTLINE (58)

    /** cmdline.e:529	end procedure*/
    // SubProg local_help pc: 175 op: RETURNP (29)

// Exiting block BLOCK: local_help

// block var opts_20658
    DeRefDS(_opts_20658);

// block var add_help_rid_20659
    DeRef(_add_help_rid_20659);

// block var cmds_20660
    DeRefDS(_cmds_20660);

// block var std_20662

// block var parse_options_20663
    DeRef(_parse_options_20663);

// block var extras_mandatory_20666

// block var extras_opt_20667

// block var auto_help_20668

// block var po_20669

// block var pad_size_20695
    return;
    // SubProg local_help pc: 178 op: BADRETURNF (43)
    ;
}


void _48call_user_help(object _add_help_rid_20700)
{
    object _11818 = NOVALUE; // 20724 11818
    object _11817 = NOVALUE; // 20723 11817
    object _11816 = NOVALUE; // 20722 11816
    object _11815 = NOVALUE; // 20721 11815
// skipping _11814  name type: 0
    object _11813 = NOVALUE; // 20719 11813
    object _11812 = NOVALUE; // 20718 11812
    object _11811 = NOVALUE; // 20717 11811
    object _11810 = NOVALUE; // 20715 11810
    object _11809 = NOVALUE; // 20714 11809
// skipping _11808  name type: 0
    object _11807 = NOVALUE; // 20710 11807
// skipping _11806  name type: 0
    object _11805 = NOVALUE; // 20707 11805
// skipping _11804  name type: 0
    object _11803 = NOVALUE; // 20702 11803
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg call_user_help pc: 1 op: STARTLINE (58)

    /** cmdline.e:532		if atom(add_help_rid) then*/
    // SubProg call_user_help pc: 3 op: IS_AN_ATOM (67)
    _11803 = IS_ATOM(_add_help_rid_20700);
    // SubProg call_user_help pc: 6 op: IF (20)
    if (_11803 == 0)
    {
        _11803 = NOVALUE;
        goto L1; // [6] 34
    }
    else{
        _11803 = NOVALUE;
    }
    // SubProg call_user_help pc: 9 op: STARTLINE (58)

    /** cmdline.e:533			if add_help_rid >= 0 then*/
    // SubProg call_user_help pc: 11 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _add_help_rid_20700, 0)){
        goto L2; // [11] 142
    }
    // SubProg call_user_help pc: 15 op: STARTLINE (58)

    /** cmdline.e:534				puts(1, "\n")*/
    // SubProg call_user_help pc: 17 op: PUTS (44)
    EPuts(1, _9157); // DJP 
    // SubProg call_user_help pc: 20 op: STARTLINE (58)

    /** cmdline.e:535				call_proc(add_help_rid, {})*/
    // SubProg call_user_help pc: 22 op: CALL_PROC (136)
    _0 = (object)_00[_add_help_rid_20700].addr;
    (*(intptr_t (*)())_0)(
                         );
    // SubProg call_user_help pc: 25 op: STARTLINE (58)

    /** cmdline.e:536				puts(1, "\n")*/
    // SubProg call_user_help pc: 27 op: PUTS (44)
    EPuts(1, _9157); // DJP 
    // SubProg call_user_help pc: 30 op: NOP1 (159)
    // SubProg call_user_help pc: 31 op: ELSE (23)
    goto L2; // [31] 142
    // SubProg call_user_help pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 20698 op: 159
    // SubProg call_user_help pc: 34 op: STARTLINE (58)

    /** cmdline.e:539			if length(add_help_rid) > 0 then*/
    // SubProg call_user_help pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_add_help_rid_20700)){
            _11805 = SEQ_PTR(_add_help_rid_20700)->length;
    }
    else {
        _11805 = 1;
    }
    // SubProg call_user_help pc: 39 op: GREATER_IFW_I (124)
    if (_11805 <= 0)
    goto L3; // [39] 141
    // SubProg call_user_help pc: 43 op: STARTLINE (58)

    /** cmdline.e:540				puts(1, "\n")*/
    // SubProg call_user_help pc: 45 op: PUTS (44)
    EPuts(1, _9157); // DJP 
    // SubProg call_user_help pc: 48 op: STARTLINE (58)

    /** cmdline.e:541				if types:t_display(add_help_rid) then*/
    // SubProg call_user_help pc: 50 op: PROC (27)
    Ref(_add_help_rid_20700);
    _11807 = _8t_display(_add_help_rid_20700);
    // SubProg call_user_help pc: 54 op: IF (20)
    if (_11807 == 0) {
        DeRef(_11807);
        _11807 = NOVALUE;
        goto L4; // [54] 64
    }
    else {
        if (!IS_ATOM_INT(_11807) && DBL_PTR(_11807)->dbl == 0.0){
            DeRef(_11807);
            _11807 = NOVALUE;
            goto L4; // [54] 64
        }
        DeRef(_11807);
        _11807 = NOVALUE;
    }
    DeRef(_11807);
    _11807 = NOVALUE;
    // SubProg call_user_help pc: 57 op: STARTLINE (58)

    /** cmdline.e:542					add_help_rid = {add_help_rid}*/
    // SubProg call_user_help pc: 59 op: RIGHT_BRACE_N (31)
    _0 = _add_help_rid_20700;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_add_help_rid_20700);
    ((intptr_t*)_2)[1] = _add_help_rid_20700;
    _add_help_rid_20700 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg call_user_help pc: 63 op: NOP1 (159)
L4: // addr: 64 pc: 63 sub: 20698 op: 159
    // SubProg call_user_help pc: 64 op: STARTLINE (58)

    /** cmdline.e:545				for i = 1 to length(add_help_rid) do*/
    // SubProg call_user_help pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_add_help_rid_20700)){
            _11809 = SEQ_PTR(_add_help_rid_20700)->length;
    }
    else {
        _11809 = 1;
    }
    // SubProg call_user_help pc: 69 op: FOR_I (125)
    {
        object _i_20713;
        _i_20713 = 1;
L5: // addr: 76 pc: 69 sub: 20698 op: 125
        if (_i_20713 > _11809){
            goto L6; // [69] 135
        }
        // SubProg call_user_help pc: 76 op: STARTLINE (58)

        /** cmdline.e:546					puts(1, add_help_rid[i])*/
        // SubProg call_user_help pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_20700);
        _11810 = (object)*(((s1_ptr)_2)->base + _i_20713);
        // SubProg call_user_help pc: 82 op: PUTS (44)
        EPuts(1, _11810); // DJP 
        _11810 = NOVALUE;
        // SubProg call_user_help pc: 85 op: STARTLINE (58)

        /** cmdline.e:547					if length(add_help_rid[i]) = 0 or add_help_rid[i][$] != '\n' then*/
        // SubProg call_user_help pc: 87 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_20700);
        _11811 = (object)*(((s1_ptr)_2)->base + _i_20713);
        // SubProg call_user_help pc: 91 op: LENGTH (42)
        if (IS_SEQUENCE(_11811)){
                _11812 = SEQ_PTR(_11811)->length;
        }
        else {
            _11812 = 1;
        }
        _11811 = NOVALUE;
        // SubProg call_user_help pc: 94 op: EQUALS (3)
        _11813 = (_11812 == 0);
        _11812 = NOVALUE;
        // SubProg call_user_help pc: 98 op: SC1_OR_IF (147)
        if (_11813 != 0) {
            goto L7; // [98] 122
        }
        // SubProg call_user_help pc: 102 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_20700);
        _11815 = (object)*(((s1_ptr)_2)->base + _i_20713);
        // SubProg call_user_help pc: 106 op: LENGTH (42)
        if (IS_SEQUENCE(_11815)){
                _11816 = SEQ_PTR(_11815)->length;
        }
        else {
            _11816 = 1;
        }
        // SubProg call_user_help pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11815);
        _11817 = (object)*(((s1_ptr)_2)->base + _11816);
        _11815 = NOVALUE;
        // SubProg call_user_help pc: 113 op: NOTEQ (4)
        if (IS_ATOM_INT(_11817)) {
            _11818 = (_11817 != 10);
        }
        else {
            _11818 = binary_op(NOTEQ, _11817, 10);
        }
        _11817 = NOVALUE;
        // SubProg call_user_help pc: 117 op: NOP1 (159)
        // SubProg call_user_help pc: 118 op: IF (20)
        if (_11818 == 0) {
            DeRef(_11818);
            _11818 = NOVALUE;
            goto L8; // [118] 128
        }
        else {
            if (!IS_ATOM_INT(_11818) && DBL_PTR(_11818)->dbl == 0.0){
                DeRef(_11818);
                _11818 = NOVALUE;
                goto L8; // [118] 128
            }
            DeRef(_11818);
            _11818 = NOVALUE;
        }
        DeRef(_11818);
        _11818 = NOVALUE;
        // SubProg call_user_help pc: 121 op: NOP1 (159)
L7: // addr: 122 pc: 121 sub: 20698 op: 159
        // SubProg call_user_help pc: 122 op: STARTLINE (58)

        /** cmdline.e:548						puts(1, '\n')*/
        // SubProg call_user_help pc: 124 op: PUTS (44)
        EPuts(1, 10); // DJP 
        // SubProg call_user_help pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 20698 op: 159
        // SubProg call_user_help pc: 128 op: STARTLINE (58)

        /** cmdline.e:550				end for*/
        // SubProg call_user_help pc: 130 op: ENDFOR_INT_UP1 (54)
        _i_20713 = _i_20713 + 1;
        goto L5; // [130] 76
L6: // addr: 135 pc: 130 sub: 20698 op: 54
        ;
    }
    // SubProg call_user_help pc: 135 op: STARTLINE (58)

    /** cmdline.e:552				puts(1, "\n")*/
    // SubProg call_user_help pc: 137 op: PUTS (44)
    EPuts(1, _9157); // DJP 
    // SubProg call_user_help pc: 140 op: NOP1 (159)
L3: // addr: 141 pc: 140 sub: 20698 op: 159
    // SubProg call_user_help pc: 141 op: NOP1 (159)
L2: // addr: 142 pc: 141 sub: 20698 op: 159
    // SubProg call_user_help pc: 142 op: STARTLINE (58)

    /** cmdline.e:555	end procedure*/
    // SubProg call_user_help pc: 144 op: RETURNP (29)

// Exiting block BLOCK: call_user_help

// block var add_help_rid_20700
    DeRef(_add_help_rid_20700);
    _11811 = NOVALUE;
    DeRef(_11813);
    _11813 = NOVALUE;
    return;
    // SubProg call_user_help pc: 147 op: BADRETURNF (43)
    ;
}


void _48print_option_help(object _opt_20727, object _pad_size_20728)
{
    object _has_param_20735 = NOVALUE;
    object _param_name_20738 = NOVALUE;
    object _is_mandatory_20754 = NOVALUE;
    object _cmd_20758 = NOVALUE;
    object _11877 = NOVALUE; // 20808 11877
    object _11876 = NOVALUE; // 20807 11876
    object _11875 = NOVALUE; // 20806 11875
    object _11874 = NOVALUE; // 20805 11874
    object _11873 = NOVALUE; // 20803 11873
    object _11872 = NOVALUE; // 20802 11872
    object _11871 = NOVALUE; // 20801 11871
// skipping _11869  name type: 0
    object _11868 = NOVALUE; // 20798 11868
// skipping _11867  name type: 0
// skipping _11866  name type: 0
// skipping _11865  name type: 0
    object _11864 = NOVALUE; // 20792 11864
// skipping _11863  name type: 0
// skipping _11862  name type: 0
    object _11861 = NOVALUE; // 20788 11861
    object _11860 = NOVALUE; // 20787 11860
// skipping _11858  name type: 0
// skipping _11857  name type: 0
// skipping _11856  name type: 0
// skipping _11854  name type: 0
    object _11853 = NOVALUE; // 20779 11853
    object _11852 = NOVALUE; // 20777 11852
    object _11851 = NOVALUE; // 20776 11851
// skipping _11850  name type: 0
// skipping _11849  name type: 0
// skipping _11848  name type: 0
    object _11847 = NOVALUE; // 20770 11847
// skipping _11846  name type: 0
// skipping _11845  name type: 0
    object _11844 = NOVALUE; // 20766 11844
    object _11843 = NOVALUE; // 20765 11843
// skipping _11842  name type: 0
// skipping _11841  name type: 0
    object _11840 = NOVALUE; // 20761 11840
    object _11839 = NOVALUE; // 20760 11839
// skipping _11838  name type: 0
    object _11837 = NOVALUE; // 20756 11837
    object _11836 = NOVALUE; // 20755 11836
// skipping _11835  name type: 0
    object _11834 = NOVALUE; // 20750 11834
    object _11833 = NOVALUE; // 20749 11833
    object _11832 = NOVALUE; // 20748 11832
    object _11831 = NOVALUE; // 20747 11831
// skipping _11830  name type: 0
// skipping _11829  name type: 0
    object _11828 = NOVALUE; // 20743 11828
    object _11827 = NOVALUE; // 20742 11827
// skipping _11826  name type: 0
// skipping _11825  name type: 0
    object _11824 = NOVALUE; // 20736 11824
    object _11823 = NOVALUE; // 20734 11823
    object _11822 = NOVALUE; // 20733 11822
    object _11821 = NOVALUE; // 20732 11821
    object _11820 = NOVALUE; // 20731 11820
    object _11819 = NOVALUE; // 20730 11819
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_option_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 3 op: INTEGER_CHECK (96)
    // SubProg print_option_help pc: 5 op: STARTLINE (58)

    /** cmdline.e:558		if atom(opt[SHORTNAME]) and atom(opt[LONGNAME]) then*/
    // SubProg print_option_help pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11819 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 11 op: IS_AN_ATOM (67)
    _11820 = IS_ATOM(_11819);
    _11819 = NOVALUE;
    // SubProg print_option_help pc: 14 op: SC1_AND_IF (146)
    if (_11820 == 0) {
        goto L1; // [14] 35
    }
    // SubProg print_option_help pc: 18 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11822 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 22 op: IS_AN_ATOM (67)
    _11823 = IS_ATOM(_11822);
    _11822 = NOVALUE;
    // SubProg print_option_help pc: 25 op: NOP1 (159)
    // SubProg print_option_help pc: 26 op: IF (20)
    if (_11823 == 0)
    {
        _11823 = NOVALUE;
        goto L1; // [26] 35
    }
    else{
        _11823 = NOVALUE;
    }
    // SubProg print_option_help pc: 29 op: STARTLINE (58)

    /** cmdline.e:560			return*/
    // SubProg print_option_help pc: 31 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: print_option_help

// block var opt_20727
    DeRefDS(_opt_20727);

// block var pad_size_20728

// block var has_param_20735

// block var param_name_20738
    DeRef(_param_name_20738);

// block var is_mandatory_20754

// block var cmd_20758
    DeRef(_cmd_20758);
    return;
    // SubProg print_option_help pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 20725 op: 159
    // SubProg print_option_help pc: 35 op: STARTLINE (58)

    /** cmdline.e:563		integer has_param = find(HAS_PARAMETER, opt[OPTIONS])*/
    // SubProg print_option_help pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11824 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 41 op: FIND_FROM (176)
    _has_param_20735 = find_from(112, _11824, 1);
    _11824 = NOVALUE;
    // SubProg print_option_help pc: 46 op: STARTLINE (58)

    /** cmdline.e:564		sequence param_name*/
    // SubProg print_option_help pc: 48 op: STARTLINE (58)

    /** cmdline.e:565		if has_param != 0 then*/
    // SubProg print_option_help pc: 50 op: NOTEQ_IFW_I (122)
    if (_has_param_20735 == 0)
    goto L2; // [50] 124
    // SubProg print_option_help pc: 54 op: STARTLINE (58)

    /** cmdline.e:566			if has_param < length(opt[OPTIONS]) then*/
    // SubProg print_option_help pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11827 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_11827)){
            _11828 = SEQ_PTR(_11827)->length;
    }
    else {
        _11828 = 1;
    }
    _11827 = NOVALUE;
    // SubProg print_option_help pc: 63 op: LESS_IFW_I (119)
    if (_has_param_20735 >= _11828)
    goto L3; // [63] 115
    // SubProg print_option_help pc: 67 op: STARTLINE (58)

    /** cmdline.e:567				has_param += 1*/
    // SubProg print_option_help pc: 69 op: PLUS1_I (117)
    _has_param_20735 = _has_param_20735 + 1;
    // SubProg print_option_help pc: 73 op: STARTLINE (58)

    /** cmdline.e:568				if sequence(opt[OPTIONS][has_param]) then*/
    // SubProg print_option_help pc: 75 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11831 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_11831);
    _11832 = (object)*(((s1_ptr)_2)->base + _has_param_20735);
    _11831 = NOVALUE;
    // SubProg print_option_help pc: 83 op: IS_A_SEQUENCE (68)
    _11833 = IS_SEQUENCE(_11832);
    _11832 = NOVALUE;
    // SubProg print_option_help pc: 86 op: IF (20)
    if (_11833 == 0)
    {
        _11833 = NOVALUE;
        goto L4; // [86] 104
    }
    else{
        _11833 = NOVALUE;
    }
    // SubProg print_option_help pc: 89 op: STARTLINE (58)

    /** cmdline.e:569					param_name = opt[OPTIONS][has_param]*/
    // SubProg print_option_help pc: 91 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11834 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 95 op: RHS_SUBS_CHECK (92)
    DeRef(_param_name_20738);
    _2 = (object)SEQ_PTR(_11834);
    _param_name_20738 = (object)*(((s1_ptr)_2)->base + _has_param_20735);
    Ref(_param_name_20738);
    _11834 = NOVALUE;
    // SubProg print_option_help pc: 99 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 101 op: ELSE (23)
    goto L5; // [101] 123
    // SubProg print_option_help pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 20725 op: 159
    // SubProg print_option_help pc: 104 op: STARTLINE (58)

    /** cmdline.e:571					param_name = "x"*/
    // SubProg print_option_help pc: 106 op: ASSIGN (18)
    RefDS(_11577);
    DeRef(_param_name_20738);
    _param_name_20738 = _11577;
    // SubProg print_option_help pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 111 op: NOP1 (159)
    // SubProg print_option_help pc: 112 op: ELSE (23)
    goto L5; // [112] 123
    // SubProg print_option_help pc: 114 op: NOP1 (159)
L3: // addr: 115 pc: 114 sub: 20725 op: 159
    // SubProg print_option_help pc: 115 op: STARTLINE (58)

    /** cmdline.e:574				param_name = "x"*/
    // SubProg print_option_help pc: 117 op: ASSIGN (18)
    RefDS(_11577);
    DeRef(_param_name_20738);
    _param_name_20738 = _11577;
    // SubProg print_option_help pc: 120 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 20725 op: 159
    // SubProg print_option_help pc: 123 op: NOP1 (159)
L2: // addr: 124 pc: 123 sub: 20725 op: 159
    // SubProg print_option_help pc: 124 op: STARTLINE (58)

    /** cmdline.e:577		integer is_mandatory = (find(MANDATORY, opt[OPTIONS]) != 0)*/
    // SubProg print_option_help pc: 126 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11836 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 130 op: FIND_FROM (176)
    _11837 = find_from(109, _11836, 1);
    _11836 = NOVALUE;
    // SubProg print_option_help pc: 135 op: NOTEQ (4)
    _is_mandatory_20754 = (_11837 != 0);
    _11837 = NOVALUE;
    // SubProg print_option_help pc: 139 op: STARTLINE (58)

    /** cmdline.e:578		sequence cmd = ""*/
    // SubProg print_option_help pc: 141 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_cmd_20758);
    _cmd_20758 = _5;
    // SubProg print_option_help pc: 144 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 146 op: STARTLINE (58)

    /** cmdline.e:580		if sequence(opt[SHORTNAME]) then*/
    // SubProg print_option_help pc: 148 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11839 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 152 op: IS_A_SEQUENCE (68)
    _11840 = IS_SEQUENCE(_11839);
    _11839 = NOVALUE;
    // SubProg print_option_help pc: 155 op: IF (20)
    if (_11840 == 0)
    {
        _11840 = NOVALUE;
        goto L6; // [155] 216
    }
    else{
        _11840 = NOVALUE;
    }
    // SubProg print_option_help pc: 158 op: STARTLINE (58)

    /** cmdline.e:581			if not is_mandatory then*/
    // SubProg print_option_help pc: 160 op: NOT_IFW (108)
    if (_is_mandatory_20754 != 0)
    goto L7; // [160] 170
    // SubProg print_option_help pc: 163 op: STARTLINE (58)

    /** cmdline.e:582				cmd &= '['*/
    // SubProg print_option_help pc: 165 op: CONCAT (15)
    Append(&_cmd_20758, _cmd_20758, 91);
    // SubProg print_option_help pc: 169 op: NOP1 (159)
L7: // addr: 170 pc: 169 sub: 20725 op: 159
    // SubProg print_option_help pc: 170 op: STARTLINE (58)

    /** cmdline.e:584			cmd &= '-' & opt[SHORTNAME]*/
    // SubProg print_option_help pc: 172 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11843 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 176 op: CONCAT (15)
    if (IS_SEQUENCE(45) && IS_ATOM(_11843)) {
    }
    else if (IS_ATOM(45) && IS_SEQUENCE(_11843)) {
        Prepend(&_11844, _11843, 45);
    }
    else {
        Concat((object_ptr)&_11844, 45, _11843);
    }
    _11843 = NOVALUE;
    // SubProg print_option_help pc: 180 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20758, _cmd_20758, _11844);
    DeRefDS(_11844);
    _11844 = NOVALUE;
    // SubProg print_option_help pc: 184 op: STARTLINE (58)

    /** cmdline.e:585			if has_param != 0 then*/
    // SubProg print_option_help pc: 186 op: NOTEQ_IFW_I (122)
    if (_has_param_20735 == 0)
    goto L8; // [186] 203
    // SubProg print_option_help pc: 190 op: STARTLINE (58)

    /** cmdline.e:586				cmd &= ' ' & param_name*/
    // SubProg print_option_help pc: 192 op: PRIVATE_INIT_CHECK (30)
    // SubProg print_option_help pc: 194 op: CONCAT (15)
    Prepend(&_11847, _param_name_20738, 32);
    // SubProg print_option_help pc: 198 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20758, _cmd_20758, _11847);
    DeRefDS(_11847);
    _11847 = NOVALUE;
    // SubProg print_option_help pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 20725 op: 159
    // SubProg print_option_help pc: 203 op: STARTLINE (58)

    /** cmdline.e:588			if not is_mandatory then*/
    // SubProg print_option_help pc: 205 op: NOT_IFW (108)
    if (_is_mandatory_20754 != 0)
    goto L9; // [205] 215
    // SubProg print_option_help pc: 208 op: STARTLINE (58)

    /** cmdline.e:589				cmd &= ']'*/
    // SubProg print_option_help pc: 210 op: CONCAT (15)
    Append(&_cmd_20758, _cmd_20758, 93);
    // SubProg print_option_help pc: 214 op: NOP1 (159)
L9: // addr: 215 pc: 214 sub: 20725 op: 159
    // SubProg print_option_help pc: 215 op: NOP1 (159)
L6: // addr: 216 pc: 215 sub: 20725 op: 159
    // SubProg print_option_help pc: 216 op: STARTLINE (58)

    /** cmdline.e:593		if sequence(opt[LONGNAME]) then*/
    // SubProg print_option_help pc: 218 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11851 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 222 op: IS_A_SEQUENCE (68)
    _11852 = IS_SEQUENCE(_11851);
    _11851 = NOVALUE;
    // SubProg print_option_help pc: 225 op: IF (20)
    if (_11852 == 0)
    {
        _11852 = NOVALUE;
        goto LA; // [225] 300
    }
    else{
        _11852 = NOVALUE;
    }
    // SubProg print_option_help pc: 228 op: STARTLINE (58)

    /** cmdline.e:594			if length(cmd) > 0 then cmd &= ", " end if*/
    // SubProg print_option_help pc: 230 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_20758)){
            _11853 = SEQ_PTR(_cmd_20758)->length;
    }
    else {
        _11853 = 1;
    }
    // SubProg print_option_help pc: 233 op: GREATER_IFW_I (124)
    if (_11853 <= 0)
    goto LB; // [233] 242
    // SubProg print_option_help pc: 237 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20758, _cmd_20758, _11855);
    // SubProg print_option_help pc: 241 op: NOP1 (159)
LB: // addr: 242 pc: 241 sub: 20725 op: 159
    // SubProg print_option_help pc: 242 op: STARTLINE (58)

    /** cmdline.e:595			if not is_mandatory then*/
    // SubProg print_option_help pc: 244 op: NOT_IFW (108)
    if (_is_mandatory_20754 != 0)
    goto LC; // [244] 254
    // SubProg print_option_help pc: 247 op: STARTLINE (58)

    /** cmdline.e:596				cmd &= '['*/
    // SubProg print_option_help pc: 249 op: CONCAT (15)
    Append(&_cmd_20758, _cmd_20758, 91);
    // SubProg print_option_help pc: 253 op: NOP1 (159)
LC: // addr: 254 pc: 253 sub: 20725 op: 159
    // SubProg print_option_help pc: 254 op: STARTLINE (58)

    /** cmdline.e:598			cmd &= "--" & opt[LONGNAME]*/
    // SubProg print_option_help pc: 256 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11860 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 260 op: CONCAT (15)
    if (IS_SEQUENCE(_11859) && IS_ATOM(_11860)) {
        Ref(_11860);
        Append(&_11861, _11859, _11860);
    }
    else if (IS_ATOM(_11859) && IS_SEQUENCE(_11860)) {
    }
    else {
        Concat((object_ptr)&_11861, _11859, _11860);
    }
    _11860 = NOVALUE;
    // SubProg print_option_help pc: 264 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20758, _cmd_20758, _11861);
    DeRefDS(_11861);
    _11861 = NOVALUE;
    // SubProg print_option_help pc: 268 op: STARTLINE (58)

    /** cmdline.e:599			if has_param != 0 then*/
    // SubProg print_option_help pc: 270 op: NOTEQ_IFW_I (122)
    if (_has_param_20735 == 0)
    goto LD; // [270] 287
    // SubProg print_option_help pc: 274 op: STARTLINE (58)

    /** cmdline.e:600				cmd &= '=' & param_name*/
    // SubProg print_option_help pc: 276 op: PRIVATE_INIT_CHECK (30)
    // SubProg print_option_help pc: 278 op: CONCAT (15)
    Prepend(&_11864, _param_name_20738, 61);
    // SubProg print_option_help pc: 282 op: CONCAT (15)
    Concat((object_ptr)&_cmd_20758, _cmd_20758, _11864);
    DeRefDS(_11864);
    _11864 = NOVALUE;
    // SubProg print_option_help pc: 286 op: NOP1 (159)
LD: // addr: 287 pc: 286 sub: 20725 op: 159
    // SubProg print_option_help pc: 287 op: STARTLINE (58)

    /** cmdline.e:602			if not is_mandatory then*/
    // SubProg print_option_help pc: 289 op: NOT_IFW (108)
    if (_is_mandatory_20754 != 0)
    goto LE; // [289] 299
    // SubProg print_option_help pc: 292 op: STARTLINE (58)

    /** cmdline.e:603				cmd &= ']'*/
    // SubProg print_option_help pc: 294 op: CONCAT (15)
    Append(&_cmd_20758, _cmd_20758, 93);
    // SubProg print_option_help pc: 298 op: NOP1 (159)
LE: // addr: 299 pc: 298 sub: 20725 op: 159
    // SubProg print_option_help pc: 299 op: NOP1 (159)
LA: // addr: 300 pc: 299 sub: 20725 op: 159
    // SubProg print_option_help pc: 300 op: STARTLINE (58)

    /** cmdline.e:610		if length(cmd) > pad_size then*/
    // SubProg print_option_help pc: 302 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_20758)){
            _11868 = SEQ_PTR(_cmd_20758)->length;
    }
    else {
        _11868 = 1;
    }
    // SubProg print_option_help pc: 305 op: GREATER_IFW_I (124)
    if (_11868 <= _pad_size_20728)
    goto LF; // [305] 336
    // SubProg print_option_help pc: 309 op: STARTLINE (58)

    /** cmdline.e:611			puts(1, "   " & cmd & '\n')*/
    // SubProg print_option_help pc: 311 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 10;
        concat_list[1] = _cmd_20758;
        concat_list[2] = _11870;
        Concat_N((object_ptr)&_11871, concat_list, 3);
    }
    // SubProg print_option_help pc: 317 op: PUTS (44)
    EPuts(1, _11871); // DJP 
    DeRefDS(_11871);
    _11871 = NOVALUE;
    // SubProg print_option_help pc: 320 op: STARTLINE (58)

    /** cmdline.e:612			puts(1, repeat(' ', pad_size + 3))*/
    // SubProg print_option_help pc: 322 op: PLUS (11)
    _11872 = _pad_size_20728 + 3;
    // SubProg print_option_help pc: 326 op: REPEAT (32)
    _11873 = Repeat(32, _11872);
    _11872 = NOVALUE;
    // SubProg print_option_help pc: 330 op: PUTS (44)
    EPuts(1, _11873); // DJP 
    DeRefDS(_11873);
    _11873 = NOVALUE;
    // SubProg print_option_help pc: 333 op: ELSE (23)
    goto L10; // [333] 352
    // SubProg print_option_help pc: 335 op: NOP1 (159)
LF: // addr: 336 pc: 335 sub: 20725 op: 159
    // SubProg print_option_help pc: 336 op: STARTLINE (58)

    /** cmdline.e:614			puts(1, "   " & stdseq:pad_tail(cmd, pad_size))*/
    // SubProg print_option_help pc: 338 op: PROC (27)
    RefDS(_cmd_20758);
    _11874 = _23pad_tail(_cmd_20758, _pad_size_20728, 32);
    // SubProg print_option_help pc: 344 op: CONCAT (15)
    if (IS_SEQUENCE(_11870) && IS_ATOM(_11874)) {
        Ref(_11874);
        Append(&_11875, _11870, _11874);
    }
    else if (IS_ATOM(_11870) && IS_SEQUENCE(_11874)) {
    }
    else {
        Concat((object_ptr)&_11875, _11870, _11874);
    }
    DeRef(_11874);
    _11874 = NOVALUE;
    // SubProg print_option_help pc: 348 op: PUTS (44)
    EPuts(1, _11875); // DJP 
    DeRefDS(_11875);
    _11875 = NOVALUE;
    // SubProg print_option_help pc: 351 op: NOP1 (159)
L10: // addr: 352 pc: 351 sub: 20725 op: 159
    // SubProg print_option_help pc: 352 op: STARTLINE (58)

    /** cmdline.e:617		puts(1, opt[DESCRIPTION] & '\n')*/
    // SubProg print_option_help pc: 354 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_20727);
    _11876 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg print_option_help pc: 358 op: CONCAT (15)
    if (IS_SEQUENCE(_11876) && IS_ATOM(10)) {
        Append(&_11877, _11876, 10);
    }
    else if (IS_ATOM(_11876) && IS_SEQUENCE(10)) {
    }
    else {
        Concat((object_ptr)&_11877, _11876, 10);
        _11876 = NOVALUE;
    }
    _11876 = NOVALUE;
    // SubProg print_option_help pc: 362 op: PUTS (44)
    EPuts(1, _11877); // DJP 
    DeRefDS(_11877);
    _11877 = NOVALUE;
    // SubProg print_option_help pc: 365 op: STARTLINE (58)

    /** cmdline.e:618	end procedure*/
    // SubProg print_option_help pc: 367 op: RETURNP (29)

// Exiting block BLOCK: print_option_help

// block var opt_20727
    DeRefDS(_opt_20727);

// block var pad_size_20728

// block var has_param_20735

// block var param_name_20738
    DeRef(_param_name_20738);

// block var is_mandatory_20754

// block var cmd_20758
    DeRef(_cmd_20758);
    _11827 = NOVALUE;
    return;
    // SubProg print_option_help pc: 370 op: BADRETURNF (43)
    ;
}


object _48find_opt(object _opts_20818, object _opt_style_20819, object _cmd_text_20820)
{
    object _opt_name_20821 = NOVALUE;
    object _opt_param_20822 = NOVALUE;
    object _param_found_20823 = NOVALUE;
    object _reversed_20824 = NOVALUE;
    object _11980 = NOVALUE; // 20954 11980
    object _11978 = NOVALUE; // 20952 11978
    object _11977 = NOVALUE; // 20951 11977
// skipping _11976  name type: 0
    object _11975 = NOVALUE; // 20949 11975
    object _11974 = NOVALUE; // 20948 11974
    object _11973 = NOVALUE; // 20947 11973
    object _11972 = NOVALUE; // 20944 11972
    object _11971 = NOVALUE; // 20942 11971
// skipping _11969  name type: 0
    object _11968 = NOVALUE; // 20938 11968
    object _11967 = NOVALUE; // 20937 11967
    object _11966 = NOVALUE; // 20936 11966
// skipping _11965  name type: 0
    object _11964 = NOVALUE; // 20933 11964
    object _11963 = NOVALUE; // 20932 11963
    object _11962 = NOVALUE; // 20931 11962
    object _11961 = NOVALUE; // 20930 11961
// skipping _11960  name type: 0
    object _11959 = NOVALUE; // 20926 11959
    object _11958 = NOVALUE; // 20925 11958
    object _11957 = NOVALUE; // 20924 11957
    object _11956 = NOVALUE; // 20923 11956
    object _11955 = NOVALUE; // 20922 11955
    object _11954 = NOVALUE; // 20921 11954
    object _11953 = NOVALUE; // 20919 11953
    object _11952 = NOVALUE; // 20918 11952
    object _11951 = NOVALUE; // 20917 11951
    object _11950 = NOVALUE; // 20915 11950
    object _11949 = NOVALUE; // 20912 11949
    object _11948 = NOVALUE; // 20911 11948
    object _11941 = NOVALUE; // 20904 11941
    object _11940 = NOVALUE; // 20902 11940
    object _11939 = NOVALUE; // 20901 11939
    object _11932 = NOVALUE; // 20894 11932
    object _11931 = NOVALUE; // 20891 11931
// skipping _11930  name type: 0
    object _11929 = NOVALUE; // 20888 11929
// skipping _11928  name type: 0
    object _11927 = NOVALUE; // 20885 11927
    object _11926 = NOVALUE; // 20884 11926
// skipping _11925  name type: 0
    object _11924 = NOVALUE; // 20882 11924
    object _11923 = NOVALUE; // 20881 11923
    object _11922 = NOVALUE; // 20880 11922
    object _11921 = NOVALUE; // 20878 11921
    object _11920 = NOVALUE; // 20877 11920
// skipping _11919  name type: 0
    object _11918 = NOVALUE; // 20875 11918
    object _11917 = NOVALUE; // 20874 11917
// skipping _11916  name type: 0
    object _11915 = NOVALUE; // 20871 11915
// skipping _11914  name type: 0
    object _11913 = NOVALUE; // 20868 11913
    object _11912 = NOVALUE; // 20867 11912
// skipping _11911  name type: 0
    object _11910 = NOVALUE; // 20865 11910
    object _11909 = NOVALUE; // 20864 11909
    object _11907 = NOVALUE; // 20862 11907
    object _11906 = NOVALUE; // 20860 11906
// skipping _11905  name type: 0
    object _11904 = NOVALUE; // 20856 11904
    object _11903 = NOVALUE; // 20855 11903
// skipping _11901  name type: 0
    object _11900 = NOVALUE; // 20852 11900
// skipping _11899  name type: 0
    object _11898 = NOVALUE; // 20849 11898
    object _11897 = NOVALUE; // 20848 11897
    object _11895 = NOVALUE; // 20846 11895
// skipping _11894  name type: 0
    object _11893 = NOVALUE; // 20843 11893
// skipping _11892  name type: 0
    object _11891 = NOVALUE; // 20840 11891
    object _11890 = NOVALUE; // 20839 11890
// skipping _11889  name type: 0
    object _11888 = NOVALUE; // 20837 11888
    object _11887 = NOVALUE; // 20836 11887
    object _11886 = NOVALUE; // 20835 11886
    object _11885 = NOVALUE; // 20833 11885
    object _11884 = NOVALUE; // 20832 11884
// skipping _11883  name type: 0
    object _11882 = NOVALUE; // 20830 11882
    object _11881 = NOVALUE; // 20829 11881
// skipping _11880  name type: 0
    object _11879 = NOVALUE; // 20826 11879
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_opt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 5 op: STARTLINE (58)

    /** cmdline.e:793		integer param_found = 0*/
    // SubProg find_opt pc: 7 op: ASSIGN_I (113)
    _param_found_20823 = 0;
    // SubProg find_opt pc: 10 op: STARTLINE (58)

    /** cmdline.e:794		integer reversed = 0*/
    // SubProg find_opt pc: 12 op: ASSIGN_I (113)
    _reversed_20824 = 0;
    // SubProg find_opt pc: 15 op: STARTLINE (58)

    /** cmdline.e:796		if length(cmd_text) >= 2 then*/
    // SubProg find_opt pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11879 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11879 = 1;
    }
    // SubProg find_opt pc: 20 op: GREATEREQ_IFW_I (120)
    if (_11879 < 2)
    goto L1; // [20] 85
    // SubProg find_opt pc: 24 op: STARTLINE (58)

    /** cmdline.e:798			if cmd_text[1] = '\'' or cmd_text[1] = '"' then*/
    // SubProg find_opt pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20820);
    _11881 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 30 op: EQUALS (3)
    if (IS_ATOM_INT(_11881)) {
        _11882 = (_11881 == 39);
    }
    else {
        _11882 = binary_op(EQUALS, _11881, 39);
    }
    _11881 = NOVALUE;
    // SubProg find_opt pc: 34 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_11882)) {
        if (_11882 != 0) {
            goto L2; // [34] 51
        }
    }
    else {
        if (DBL_PTR(_11882)->dbl != 0.0) {
            goto L2; // [34] 51
        }
    }
    // SubProg find_opt pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20820);
    _11884 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 42 op: EQUALS (3)
    if (IS_ATOM_INT(_11884)) {
        _11885 = (_11884 == 34);
    }
    else {
        _11885 = binary_op(EQUALS, _11884, 34);
    }
    _11884 = NOVALUE;
    // SubProg find_opt pc: 46 op: NOP1 (159)
    // SubProg find_opt pc: 47 op: IF (20)
    if (_11885 == 0) {
        DeRef(_11885);
        _11885 = NOVALUE;
        goto L3; // [47] 84
    }
    else {
        if (!IS_ATOM_INT(_11885) && DBL_PTR(_11885)->dbl == 0.0){
            DeRef(_11885);
            _11885 = NOVALUE;
            goto L3; // [47] 84
        }
        DeRef(_11885);
        _11885 = NOVALUE;
    }
    DeRef(_11885);
    _11885 = NOVALUE;
    // SubProg find_opt pc: 50 op: NOP1 (159)
L2: // addr: 51 pc: 50 sub: 20816 op: 159
    // SubProg find_opt pc: 51 op: STARTLINE (58)

    /** cmdline.e:799				if cmd_text[$] = cmd_text[1] then*/
    // SubProg find_opt pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11886 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11886 = 1;
    }
    // SubProg find_opt pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20820);
    _11887 = (object)*(((s1_ptr)_2)->base + _11886);
    // SubProg find_opt pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20820);
    _11888 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 64 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _11887, _11888)){
        _11887 = NOVALUE;
        _11888 = NOVALUE;
        goto L4; // [64] 83
    }
    _11887 = NOVALUE;
    _11888 = NOVALUE;
    // SubProg find_opt pc: 68 op: STARTLINE (58)

    /** cmdline.e:800					cmd_text = cmd_text[2 .. $-1]*/
    // SubProg find_opt pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11890 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11890 = 1;
    }
    // SubProg find_opt pc: 73 op: MINUS (10)
    _11891 = _11890 - 1;
    _11890 = NOVALUE;
    // SubProg find_opt pc: 77 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_text_20820;
    RHS_Slice(_cmd_text_20820, 2, _11891);
    // SubProg find_opt pc: 82 op: NOP1 (159)
L4: // addr: 83 pc: 82 sub: 20816 op: 159
    // SubProg find_opt pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 20816 op: 159
    // SubProg find_opt pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 20816 op: 159
    // SubProg find_opt pc: 85 op: STARTLINE (58)

    /** cmdline.e:805		if length(cmd_text) > 0 then*/
    // SubProg find_opt pc: 87 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11893 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11893 = 1;
    }
    // SubProg find_opt pc: 90 op: GREATER_IFW_I (124)
    if (_11893 <= 0)
    goto L5; // [90] 125
    // SubProg find_opt pc: 94 op: STARTLINE (58)

    /** cmdline.e:806			if find(cmd_text[1], "!-") then*/
    // SubProg find_opt pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_20820);
    _11895 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 100 op: FIND_FROM (176)
    _11897 = find_from(_11895, _11896, 1);
    _11895 = NOVALUE;
    // SubProg find_opt pc: 105 op: IF (20)
    if (_11897 == 0)
    {
        _11897 = NOVALUE;
        goto L6; // [105] 124
    }
    else{
        _11897 = NOVALUE;
    }
    // SubProg find_opt pc: 108 op: STARTLINE (58)

    /** cmdline.e:807				reversed = 1*/
    // SubProg find_opt pc: 110 op: ASSIGN_I (113)
    _reversed_20824 = 1;
    // SubProg find_opt pc: 113 op: STARTLINE (58)

    /** cmdline.e:808				cmd_text = cmd_text[2 .. $]*/
    // SubProg find_opt pc: 115 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11898 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11898 = 1;
    }
    // SubProg find_opt pc: 118 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_text_20820;
    RHS_Slice(_cmd_text_20820, 2, _11898);
    // SubProg find_opt pc: 123 op: NOP1 (159)
L6: // addr: 124 pc: 123 sub: 20816 op: 159
    // SubProg find_opt pc: 124 op: NOP1 (159)
L5: // addr: 125 pc: 124 sub: 20816 op: 159
    // SubProg find_opt pc: 125 op: STARTLINE (58)

    /** cmdline.e:812		if length(cmd_text) < 1 then*/
    // SubProg find_opt pc: 127 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11900 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11900 = 1;
    }
    // SubProg find_opt pc: 130 op: LESS_IFW_I (119)
    if (_11900 >= 1)
    goto L7; // [130] 145
    // SubProg find_opt pc: 134 op: STARTLINE (58)

    /** cmdline.e:813			return {-1, "Empty command text"}*/
    // SubProg find_opt pc: 136 op: RIGHT_BRACE_2 (85)
    RefDS(_11902);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _11902;
    _11903 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 140 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20818
    DeRefDS(_opts_20818);

// block var opt_style_20819
    DeRefDS(_opt_style_20819);

// block var cmd_text_20820
    DeRef(_cmd_text_20820);

// block var opt_name_20821
    DeRef(_opt_name_20821);

// block var opt_param_20822
    DeRef(_opt_param_20822);

// block var param_found_20823

// block var reversed_20824
    DeRef(_11882);
    _11882 = NOVALUE;
    DeRef(_11891);
    _11891 = NOVALUE;
    return _11903;
    // SubProg find_opt pc: 144 op: NOP1 (159)
L7: // addr: 145 pc: 144 sub: 20816 op: 159
    // SubProg find_opt pc: 145 op: STARTLINE (58)

    /** cmdline.e:816		opt_name = repeat(' ', length(cmd_text))*/
    // SubProg find_opt pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11904 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11904 = 1;
    }
    // SubProg find_opt pc: 150 op: REPEAT (32)
    DeRef(_opt_name_20821);
    _opt_name_20821 = Repeat(32, _11904);
    _11904 = NOVALUE;
    // SubProg find_opt pc: 154 op: STARTLINE (58)

    /** cmdline.e:817		opt_param = 0*/
    // SubProg find_opt pc: 156 op: ASSIGN (18)
    DeRef(_opt_param_20822);
    _opt_param_20822 = 0;
    // SubProg find_opt pc: 159 op: STARTLINE (58)

    /** cmdline.e:818		for i = 1 to length(cmd_text) do*/
    // SubProg find_opt pc: 161 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_20820)){
            _11906 = SEQ_PTR(_cmd_text_20820)->length;
    }
    else {
        _11906 = 1;
    }
    // SubProg find_opt pc: 164 op: FOR_I (125)
    {
        object _i_20859;
        _i_20859 = 1;
L8: // addr: 171 pc: 164 sub: 20816 op: 125
        if (_i_20859 > _11906){
            goto L9; // [164] 320
        }
        // SubProg find_opt pc: 171 op: STARTLINE (58)

        /** cmdline.e:819			if find(cmd_text[i], ":=") then*/
        // SubProg find_opt pc: 173 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cmd_text_20820);
        _11907 = (object)*(((s1_ptr)_2)->base + _i_20859);
        // SubProg find_opt pc: 177 op: FIND_FROM (176)
        _11909 = find_from(_11907, _11908, 1);
        _11907 = NOVALUE;
        // SubProg find_opt pc: 182 op: IF (20)
        if (_11909 == 0)
        {
            _11909 = NOVALUE;
            goto LA; // [182] 302
        }
        else{
            _11909 = NOVALUE;
        }
        // SubProg find_opt pc: 185 op: STARTLINE (58)

        /** cmdline.e:820				opt_name = opt_name[1 .. i - 1]*/
        // SubProg find_opt pc: 187 op: MINUS (10)
        _11910 = _i_20859 - 1;
        // SubProg find_opt pc: 191 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_name_20821;
        RHS_Slice(_opt_name_20821, 1, _11910);
        // SubProg find_opt pc: 196 op: STARTLINE (58)

        /** cmdline.e:821				opt_param = cmd_text[i + 1 .. $]*/
        // SubProg find_opt pc: 198 op: PLUS1 (93)
        _11912 = _i_20859 + 1;
        // SubProg find_opt pc: 202 op: LENGTH (42)
        if (IS_SEQUENCE(_cmd_text_20820)){
                _11913 = SEQ_PTR(_cmd_text_20820)->length;
        }
        else {
            _11913 = 1;
        }
        // SubProg find_opt pc: 205 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_param_20822;
        RHS_Slice(_cmd_text_20820, _11912, _11913);
        // SubProg find_opt pc: 210 op: STARTLINE (58)

        /** cmdline.e:822				if length(opt_param) >= 2 then*/
        // SubProg find_opt pc: 212 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20822)){
                _11915 = SEQ_PTR(_opt_param_20822)->length;
        }
        else {
            _11915 = 1;
        }
        // SubProg find_opt pc: 215 op: GREATEREQ_IFW_I (120)
        if (_11915 < 2)
        goto LB; // [215] 280
        // SubProg find_opt pc: 219 op: STARTLINE (58)

        /** cmdline.e:824					if opt_param[1] = '\'' or opt_param[1] = '"' then*/
        // SubProg find_opt pc: 221 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20822);
        _11917 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 225 op: EQUALS (3)
        if (IS_ATOM_INT(_11917)) {
            _11918 = (_11917 == 39);
        }
        else {
            _11918 = binary_op(EQUALS, _11917, 39);
        }
        _11917 = NOVALUE;
        // SubProg find_opt pc: 229 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_11918)) {
            if (_11918 != 0) {
                goto LC; // [229] 246
            }
        }
        else {
            if (DBL_PTR(_11918)->dbl != 0.0) {
                goto LC; // [229] 246
            }
        }
        // SubProg find_opt pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20822);
        _11920 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 237 op: EQUALS (3)
        if (IS_ATOM_INT(_11920)) {
            _11921 = (_11920 == 34);
        }
        else {
            _11921 = binary_op(EQUALS, _11920, 34);
        }
        _11920 = NOVALUE;
        // SubProg find_opt pc: 241 op: NOP1 (159)
        // SubProg find_opt pc: 242 op: IF (20)
        if (_11921 == 0) {
            DeRef(_11921);
            _11921 = NOVALUE;
            goto LD; // [242] 279
        }
        else {
            if (!IS_ATOM_INT(_11921) && DBL_PTR(_11921)->dbl == 0.0){
                DeRef(_11921);
                _11921 = NOVALUE;
                goto LD; // [242] 279
            }
            DeRef(_11921);
            _11921 = NOVALUE;
        }
        DeRef(_11921);
        _11921 = NOVALUE;
        // SubProg find_opt pc: 245 op: NOP1 (159)
LC: // addr: 246 pc: 245 sub: 20816 op: 159
        // SubProg find_opt pc: 246 op: STARTLINE (58)

        /** cmdline.e:825						if opt_param[$] = opt_param[1] then*/
        // SubProg find_opt pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20822)){
                _11922 = SEQ_PTR(_opt_param_20822)->length;
        }
        else {
            _11922 = 1;
        }
        // SubProg find_opt pc: 251 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20822);
        _11923 = (object)*(((s1_ptr)_2)->base + _11922);
        // SubProg find_opt pc: 255 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_20822);
        _11924 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 259 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _11923, _11924)){
            _11923 = NOVALUE;
            _11924 = NOVALUE;
            goto LE; // [259] 278
        }
        _11923 = NOVALUE;
        _11924 = NOVALUE;
        // SubProg find_opt pc: 263 op: STARTLINE (58)

        /** cmdline.e:826							opt_param = opt_param[2 .. $-1]*/
        // SubProg find_opt pc: 265 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20822)){
                _11926 = SEQ_PTR(_opt_param_20822)->length;
        }
        else {
            _11926 = 1;
        }
        // SubProg find_opt pc: 268 op: MINUS (10)
        _11927 = _11926 - 1;
        _11926 = NOVALUE;
        // SubProg find_opt pc: 272 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_param_20822;
        RHS_Slice(_opt_param_20822, 2, _11927);
        // SubProg find_opt pc: 277 op: NOP1 (159)
LE: // addr: 278 pc: 277 sub: 20816 op: 159
        // SubProg find_opt pc: 278 op: NOP1 (159)
LD: // addr: 279 pc: 278 sub: 20816 op: 159
        // SubProg find_opt pc: 279 op: NOP1 (159)
LB: // addr: 280 pc: 279 sub: 20816 op: 159
        // SubProg find_opt pc: 280 op: STARTLINE (58)

        /** cmdline.e:831				if length(opt_param) > 0 then*/
        // SubProg find_opt pc: 282 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_20822)){
                _11929 = SEQ_PTR(_opt_param_20822)->length;
        }
        else {
            _11929 = 1;
        }
        // SubProg find_opt pc: 285 op: GREATER_IFW_I (124)
        if (_11929 <= 0)
        goto L9; // [285] 320
        // SubProg find_opt pc: 289 op: STARTLINE (58)

        /** cmdline.e:832					param_found = 1*/
        // SubProg find_opt pc: 291 op: ASSIGN_I (113)
        _param_found_20823 = 1;
        // SubProg find_opt pc: 294 op: NOP1 (159)
        // SubProg find_opt pc: 295 op: STARTLINE (58)

        /** cmdline.e:835				exit*/
        // SubProg find_opt pc: 297 op: EXIT (61)
        goto L9; // [297] 320
        // SubProg find_opt pc: 299 op: ELSE (23)
        goto LF; // [299] 313
        // SubProg find_opt pc: 301 op: NOP1 (159)
LA: // addr: 302 pc: 301 sub: 20816 op: 159
        // SubProg find_opt pc: 302 op: STARTLINE (58)

        /** cmdline.e:837				opt_name[i] = cmd_text[i]*/
        // SubProg find_opt pc: 304 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cmd_text_20820);
        _11931 = (object)*(((s1_ptr)_2)->base + _i_20859);
        // SubProg find_opt pc: 308 op: ASSIGN_SUBS (16)
        Ref(_11931);
        _2 = (object)SEQ_PTR(_opt_name_20821);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_name_20821 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_20859);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _11931;
        if( _1 != _11931 ){
            DeRef(_1);
        }
        _11931 = NOVALUE;
        // SubProg find_opt pc: 312 op: NOP1 (159)
LF: // addr: 313 pc: 312 sub: 20816 op: 159
        // SubProg find_opt pc: 313 op: STARTLINE (58)

        /** cmdline.e:839		end for*/
        // SubProg find_opt pc: 315 op: ENDFOR_INT_UP1 (54)
        _i_20859 = _i_20859 + 1;
        goto L8; // [315] 171
L9: // addr: 320 pc: 315 sub: 20816 op: 54
        ;
    }
    // SubProg find_opt pc: 320 op: STARTLINE (58)

    /** cmdline.e:841		if param_found then*/
    // SubProg find_opt pc: 322 op: IF (20)
    if (_param_found_20823 == 0)
    {
        goto L10; // [322] 388
    }
    else{
    }
    // SubProg find_opt pc: 325 op: STARTLINE (58)

    /** cmdline.e:842			if find( text:lower(opt_param), {"1", "on", "yes", "y", "true", "ok", "+"}) then*/
    // SubProg find_opt pc: 327 op: PROC (27)
    Ref(_opt_param_20822);
    _11932 = _15lower(_opt_param_20822);
    // SubProg find_opt pc: 331 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_10293);
    ((intptr_t*)_2)[1] = _10293;
    RefDS(_11933);
    ((intptr_t*)_2)[2] = _11933;
    RefDS(_11934);
    ((intptr_t*)_2)[3] = _11934;
    RefDS(_11935);
    ((intptr_t*)_2)[4] = _11935;
    RefDS(_11936);
    ((intptr_t*)_2)[5] = _11936;
    RefDS(_11937);
    ((intptr_t*)_2)[6] = _11937;
    RefDS(_11938);
    ((intptr_t*)_2)[7] = _11938;
    _11939 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 341 op: FIND_FROM (176)
    _11940 = find_from(_11932, _11939, 1);
    DeRef(_11932);
    _11932 = NOVALUE;
    DeRefDS(_11939);
    _11939 = NOVALUE;
    // SubProg find_opt pc: 346 op: IF (20)
    if (_11940 == 0)
    {
        _11940 = NOVALUE;
        goto L11; // [346] 357
    }
    else{
        _11940 = NOVALUE;
    }
    // SubProg find_opt pc: 349 op: STARTLINE (58)

    /** cmdline.e:843				opt_param = 1*/
    // SubProg find_opt pc: 351 op: ASSIGN (18)
    DeRef(_opt_param_20822);
    _opt_param_20822 = 1;
    // SubProg find_opt pc: 354 op: ELSE (23)
    goto L12; // [354] 387
    // SubProg find_opt pc: 356 op: NOP1 (159)
L11: // addr: 357 pc: 356 sub: 20816 op: 159
    // SubProg find_opt pc: 357 op: STARTLINE (58)

    /** cmdline.e:844			elsif find( text:lower(opt_param), {"0", "off", "no", "n", "false", "-"}) then*/
    // SubProg find_opt pc: 359 op: PROC (27)
    Ref(_opt_param_20822);
    _11941 = _15lower(_opt_param_20822);
    // SubProg find_opt pc: 363 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11942);
    ((intptr_t*)_2)[1] = _11942;
    RefDS(_11943);
    ((intptr_t*)_2)[2] = _11943;
    RefDS(_11944);
    ((intptr_t*)_2)[3] = _11944;
    RefDS(_11945);
    ((intptr_t*)_2)[4] = _11945;
    RefDS(_11946);
    ((intptr_t*)_2)[5] = _11946;
    RefDS(_11947);
    ((intptr_t*)_2)[6] = _11947;
    _11948 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 372 op: FIND_FROM (176)
    _11949 = find_from(_11941, _11948, 1);
    DeRef(_11941);
    _11941 = NOVALUE;
    DeRefDS(_11948);
    _11948 = NOVALUE;
    // SubProg find_opt pc: 377 op: IF (20)
    if (_11949 == 0)
    {
        _11949 = NOVALUE;
        goto L13; // [377] 386
    }
    else{
        _11949 = NOVALUE;
    }
    // SubProg find_opt pc: 380 op: STARTLINE (58)

    /** cmdline.e:845				opt_param = 0*/
    // SubProg find_opt pc: 382 op: ASSIGN (18)
    DeRef(_opt_param_20822);
    _opt_param_20822 = 0;
    // SubProg find_opt pc: 385 op: NOP1 (159)
L13: // addr: 386 pc: 385 sub: 20816 op: 159
    // SubProg find_opt pc: 386 op: NOP1 (159)
L12: // addr: 387 pc: 386 sub: 20816 op: 159
    // SubProg find_opt pc: 387 op: NOP1 (159)
L10: // addr: 388 pc: 387 sub: 20816 op: 159
    // SubProg find_opt pc: 388 op: STARTLINE (58)

    /** cmdline.e:849		for i = 1 to length(opts) do*/
    // SubProg find_opt pc: 390 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20818)){
            _11950 = SEQ_PTR(_opts_20818)->length;
    }
    else {
        _11950 = 1;
    }
    // SubProg find_opt pc: 393 op: FOR_I (125)
    {
        object _i_20914;
        _i_20914 = 1;
L14: // addr: 400 pc: 393 sub: 20816 op: 125
        if (_i_20914 > _11950){
            goto L15; // [393] 592
        }
        // SubProg find_opt pc: 400 op: STARTLINE (58)

        /** cmdline.e:850			if find(NO_CASE,  opts[i][OPTIONS]) then*/
        // SubProg find_opt pc: 402 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20818);
        _11951 = (object)*(((s1_ptr)_2)->base + _i_20914);
        // SubProg find_opt pc: 406 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11951);
        _11952 = (object)*(((s1_ptr)_2)->base + 4);
        _11951 = NOVALUE;
        // SubProg find_opt pc: 410 op: FIND_FROM (176)
        _11953 = find_from(105, _11952, 1);
        _11952 = NOVALUE;
        // SubProg find_opt pc: 415 op: IF (20)
        if (_11953 == 0)
        {
            _11953 = NOVALUE;
            goto L16; // [415] 455
        }
        else{
            _11953 = NOVALUE;
        }
        // SubProg find_opt pc: 418 op: STARTLINE (58)

        /** cmdline.e:851				if not equal( text:lower(opt_name), text:lower(opts[i][opt_style[1]])) then*/
        // SubProg find_opt pc: 420 op: PROC (27)
        RefDS(_opt_name_20821);
        _11954 = _15lower(_opt_name_20821);
        // SubProg find_opt pc: 424 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20818);
        _11955 = (object)*(((s1_ptr)_2)->base + _i_20914);
        // SubProg find_opt pc: 428 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_style_20819);
        _11956 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11955);
        if (!IS_ATOM_INT(_11956)){
            _11957 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_11956)->dbl));
        }
        else{
            _11957 = (object)*(((s1_ptr)_2)->base + _11956);
        }
        _11955 = NOVALUE;
        // SubProg find_opt pc: 436 op: PROC (27)
        Ref(_11957);
        _11958 = _15lower(_11957);
        _11957 = NOVALUE;
        // SubProg find_opt pc: 440 op: EQUAL (153)
        if (_11954 == _11958)
        _11959 = 1;
        else if (IS_ATOM_INT(_11954) && IS_ATOM_INT(_11958))
        _11959 = 0;
        else
        _11959 = (compare(_11954, _11958) == 0);
        DeRef(_11954);
        _11954 = NOVALUE;
        DeRef(_11958);
        _11958 = NOVALUE;
        // SubProg find_opt pc: 444 op: NOT_IFW (108)
        if (_11959 != 0)
        goto L17; // [444] 482
        _11959 = NOVALUE;
        // SubProg find_opt pc: 447 op: STARTLINE (58)

        /** cmdline.e:852					continue*/
        // SubProg find_opt pc: 449 op: ELSE (23)
        goto L18; // [449] 587
        // SubProg find_opt pc: 451 op: NOP1 (159)
        // SubProg find_opt pc: 452 op: ELSE (23)
        goto L17; // [452] 482
        // SubProg find_opt pc: 454 op: NOP1 (159)
L16: // addr: 455 pc: 454 sub: 20816 op: 159
        // SubProg find_opt pc: 455 op: STARTLINE (58)

        /** cmdline.e:855				if not equal(opt_name, opts[i][opt_style[1]]) then*/
        // SubProg find_opt pc: 457 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20818);
        _11961 = (object)*(((s1_ptr)_2)->base + _i_20914);
        // SubProg find_opt pc: 461 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_style_20819);
        _11962 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 465 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11961);
        if (!IS_ATOM_INT(_11962)){
            _11963 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_11962)->dbl));
        }
        else{
            _11963 = (object)*(((s1_ptr)_2)->base + _11962);
        }
        _11961 = NOVALUE;
        // SubProg find_opt pc: 469 op: EQUAL (153)
        if (_opt_name_20821 == _11963)
        _11964 = 1;
        else if (IS_ATOM_INT(_opt_name_20821) && IS_ATOM_INT(_11963))
        _11964 = 0;
        else
        _11964 = (compare(_opt_name_20821, _11963) == 0);
        _11963 = NOVALUE;
        // SubProg find_opt pc: 473 op: NOT_IFW (108)
        if (_11964 != 0)
        goto L19; // [473] 481
        _11964 = NOVALUE;
        // SubProg find_opt pc: 476 op: STARTLINE (58)

        /** cmdline.e:856					continue*/
        // SubProg find_opt pc: 478 op: ELSE (23)
        goto L18; // [478] 587
        // SubProg find_opt pc: 480 op: NOP1 (159)
L19: // addr: 481 pc: 480 sub: 20816 op: 159
        // SubProg find_opt pc: 481 op: NOP1 (159)
L17: // addr: 482 pc: 481 sub: 20816 op: 159
        // SubProg find_opt pc: 482 op: STARTLINE (58)

        /** cmdline.e:860			if find(HAS_PARAMETER,  opts[i][OPTIONS]) = 0 then*/
        // SubProg find_opt pc: 484 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20818);
        _11966 = (object)*(((s1_ptr)_2)->base + _i_20914);
        // SubProg find_opt pc: 488 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11966);
        _11967 = (object)*(((s1_ptr)_2)->base + 4);
        _11966 = NOVALUE;
        // SubProg find_opt pc: 492 op: FIND_FROM (176)
        _11968 = find_from(112, _11967, 1);
        _11967 = NOVALUE;
        // SubProg find_opt pc: 497 op: EQUALS_IFW_I (121)
        if (_11968 != 0)
        goto L1A; // [497] 518
        // SubProg find_opt pc: 501 op: STARTLINE (58)

        /** cmdline.e:861				if param_found then*/
        // SubProg find_opt pc: 503 op: IF (20)
        if (_param_found_20823 == 0)
        {
            goto L1B; // [503] 517
        }
        else{
        }
        // SubProg find_opt pc: 506 op: STARTLINE (58)

        /** cmdline.e:862					return {0, "Option should not have a parameter"}*/
        // SubProg find_opt pc: 508 op: RIGHT_BRACE_2 (85)
        RefDS(_11970);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 0;
        ((intptr_t *)_2)[2] = _11970;
        _11971 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 512 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20818
        DeRefDS(_opts_20818);

// block var opt_style_20819
        DeRefDS(_opt_style_20819);

// block var cmd_text_20820
        DeRef(_cmd_text_20820);

// block var opt_name_20821
        DeRef(_opt_name_20821);

// block var opt_param_20822
        DeRef(_opt_param_20822);

// block var param_found_20823

// block var reversed_20824
        DeRef(_11927);
        _11927 = NOVALUE;
        DeRef(_11903);
        _11903 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        _11956 = NOVALUE;
        DeRef(_11882);
        _11882 = NOVALUE;
        DeRef(_11891);
        _11891 = NOVALUE;
        DeRef(_11912);
        _11912 = NOVALUE;
        DeRef(_11910);
        _11910 = NOVALUE;
        _11962 = NOVALUE;
        return _11971;
        // SubProg find_opt pc: 516 op: NOP1 (159)
L1B: // addr: 517 pc: 516 sub: 20816 op: 159
        // SubProg find_opt pc: 517 op: NOP1 (159)
L1A: // addr: 518 pc: 517 sub: 20816 op: 159
        // SubProg find_opt pc: 518 op: STARTLINE (58)

        /** cmdline.e:866			if param_found then*/
        // SubProg find_opt pc: 520 op: IF (20)
        if (_param_found_20823 == 0)
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
        ((intptr_t*)_2)[1] = _i_20914;
        RefDS(_opt_name_20821);
        ((intptr_t*)_2)[2] = _opt_name_20821;
        ((intptr_t*)_2)[3] = _reversed_20824;
        Ref(_opt_param_20822);
        ((intptr_t*)_2)[4] = _opt_param_20822;
        _11972 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 532 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20818
        DeRefDS(_opts_20818);

// block var opt_style_20819
        DeRefDS(_opt_style_20819);

// block var cmd_text_20820
        DeRef(_cmd_text_20820);

// block var opt_name_20821
        DeRefDS(_opt_name_20821);

// block var opt_param_20822
        DeRef(_opt_param_20822);

// block var param_found_20823

// block var reversed_20824
        DeRef(_11927);
        _11927 = NOVALUE;
        DeRef(_11903);
        _11903 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        _11956 = NOVALUE;
        DeRef(_11882);
        _11882 = NOVALUE;
        DeRef(_11971);
        _11971 = NOVALUE;
        DeRef(_11891);
        _11891 = NOVALUE;
        DeRef(_11912);
        _11912 = NOVALUE;
        DeRef(_11910);
        _11910 = NOVALUE;
        _11962 = NOVALUE;
        return _11972;
        // SubProg find_opt pc: 536 op: ELSE (23)
        goto L1D; // [536] 585
        // SubProg find_opt pc: 538 op: NOP1 (159)
L1C: // addr: 539 pc: 538 sub: 20816 op: 159
        // SubProg find_opt pc: 539 op: STARTLINE (58)

        /** cmdline.e:869				if find(HAS_PARAMETER, opts[i][OPTIONS]) = 0 then*/
        // SubProg find_opt pc: 541 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20818);
        _11973 = (object)*(((s1_ptr)_2)->base + _i_20914);
        // SubProg find_opt pc: 545 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11973);
        _11974 = (object)*(((s1_ptr)_2)->base + 4);
        _11973 = NOVALUE;
        // SubProg find_opt pc: 549 op: FIND_FROM (176)
        _11975 = find_from(112, _11974, 1);
        _11974 = NOVALUE;
        // SubProg find_opt pc: 554 op: EQUALS_IFW_I (121)
        if (_11975 != 0)
        goto L1E; // [554] 572
        // SubProg find_opt pc: 558 op: STARTLINE (58)

        /** cmdline.e:870					return {i, opt_name, reversed, 1 }*/
        // SubProg find_opt pc: 560 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_20914;
        RefDS(_opt_name_20821);
        ((intptr_t*)_2)[2] = _opt_name_20821;
        ((intptr_t*)_2)[3] = _reversed_20824;
        ((intptr_t*)_2)[4] = 1;
        _11977 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 567 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20818
        DeRefDS(_opts_20818);

// block var opt_style_20819
        DeRefDS(_opt_style_20819);

// block var cmd_text_20820
        DeRef(_cmd_text_20820);

// block var opt_name_20821
        DeRefDS(_opt_name_20821);

// block var opt_param_20822
        DeRef(_opt_param_20822);

// block var param_found_20823

// block var reversed_20824
        DeRef(_11927);
        _11927 = NOVALUE;
        DeRef(_11903);
        _11903 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        _11956 = NOVALUE;
        DeRef(_11882);
        _11882 = NOVALUE;
        DeRef(_11972);
        _11972 = NOVALUE;
        DeRef(_11971);
        _11971 = NOVALUE;
        DeRef(_11891);
        _11891 = NOVALUE;
        DeRef(_11912);
        _11912 = NOVALUE;
        DeRef(_11910);
        _11910 = NOVALUE;
        _11962 = NOVALUE;
        return _11977;
        // SubProg find_opt pc: 571 op: NOP1 (159)
L1E: // addr: 572 pc: 571 sub: 20816 op: 159
        // SubProg find_opt pc: 572 op: STARTLINE (58)

        /** cmdline.e:873				return {i, opt_name, reversed}*/
        // SubProg find_opt pc: 574 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_20914;
        RefDS(_opt_name_20821);
        ((intptr_t*)_2)[2] = _opt_name_20821;
        ((intptr_t*)_2)[3] = _reversed_20824;
        _11978 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 580 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20818
        DeRefDS(_opts_20818);

// block var opt_style_20819
        DeRefDS(_opt_style_20819);

// block var cmd_text_20820
        DeRef(_cmd_text_20820);

// block var opt_name_20821
        DeRefDS(_opt_name_20821);

// block var opt_param_20822
        DeRef(_opt_param_20822);

// block var param_found_20823

// block var reversed_20824
        DeRef(_11927);
        _11927 = NOVALUE;
        DeRef(_11903);
        _11903 = NOVALUE;
        DeRef(_11977);
        _11977 = NOVALUE;
        DeRef(_11918);
        _11918 = NOVALUE;
        _11956 = NOVALUE;
        DeRef(_11882);
        _11882 = NOVALUE;
        DeRef(_11972);
        _11972 = NOVALUE;
        DeRef(_11971);
        _11971 = NOVALUE;
        DeRef(_11891);
        _11891 = NOVALUE;
        DeRef(_11912);
        _11912 = NOVALUE;
        DeRef(_11910);
        _11910 = NOVALUE;
        _11962 = NOVALUE;
        return _11978;
        // SubProg find_opt pc: 584 op: NOP1 (159)
L1D: // addr: 585 pc: 584 sub: 20816 op: 159
        // SubProg find_opt pc: 585 op: STARTLINE (58)

        /** cmdline.e:875		end for*/
        // SubProg find_opt pc: 587 op: ENDFOR_INT_UP1 (54)
L18: // addr: 587 pc: 587 sub: 20816 op: 54
        _i_20914 = _i_20914 + 1;
        goto L14; // [587] 400
L15: // addr: 592 pc: 587 sub: 20816 op: 54
        ;
    }
    // SubProg find_opt pc: 592 op: STARTLINE (58)

    /** cmdline.e:877		return {0, "Unrecognised"}*/
    // SubProg find_opt pc: 594 op: RIGHT_BRACE_2 (85)
    RefDS(_11979);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _11979;
    _11980 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 598 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_20818
    DeRefDS(_opts_20818);

// block var opt_style_20819
    DeRefDS(_opt_style_20819);

// block var cmd_text_20820
    DeRef(_cmd_text_20820);

// block var opt_name_20821
    DeRef(_opt_name_20821);

// block var opt_param_20822
    DeRef(_opt_param_20822);

// block var param_found_20823

// block var reversed_20824
    DeRef(_11978);
    _11978 = NOVALUE;
    DeRef(_11927);
    _11927 = NOVALUE;
    DeRef(_11903);
    _11903 = NOVALUE;
    DeRef(_11977);
    _11977 = NOVALUE;
    DeRef(_11918);
    _11918 = NOVALUE;
    _11956 = NOVALUE;
    DeRef(_11882);
    _11882 = NOVALUE;
    DeRef(_11972);
    _11972 = NOVALUE;
    DeRef(_11971);
    _11971 = NOVALUE;
    DeRef(_11891);
    _11891 = NOVALUE;
    DeRef(_11912);
    _11912 = NOVALUE;
    DeRef(_11910);
    _11910 = NOVALUE;
    _11962 = NOVALUE;
    return _11980;
    // SubProg find_opt pc: 602 op: BADRETURNF (43)
    ;
}


object _48get_help_options(object _opts_20957)
{
    object _help_opts_20958 = NOVALUE;
// skipping _12004  name type: 0
    object _12003 = NOVALUE; // 20989 12003
    object _12002 = NOVALUE; // 20988 12002
    object _12001 = NOVALUE; // 20987 12001
// skipping _12000  name type: 0
    object _11999 = NOVALUE; // 20983 11999
    object _11998 = NOVALUE; // 20982 11998
    object _11997 = NOVALUE; // 20981 11997
// skipping _11996  name type: 0
    object _11995 = NOVALUE; // 20978 11995
    object _11994 = NOVALUE; // 20977 11994
    object _11993 = NOVALUE; // 20976 11993
    object _11992 = NOVALUE; // 20975 11992
    object _11991 = NOVALUE; // 20974 11991
// skipping _11990  name type: 0
    object _11989 = NOVALUE; // 20971 11989
    object _11988 = NOVALUE; // 20970 11988
    object _11987 = NOVALUE; // 20969 11987
    object _11986 = NOVALUE; // 20968 11986
    object _11985 = NOVALUE; // 20967 11985
    object _11984 = NOVALUE; // 20965 11984
    object _11983 = NOVALUE; // 20964 11983
    object _11982 = NOVALUE; // 20963 11982
    object _11981 = NOVALUE; // 20961 11981
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_help_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_help_options pc: 3 op: STARTLINE (58)

    /** cmdline.e:881		sequence help_opts = {}*/
    // SubProg get_help_options pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_help_opts_20958);
    _help_opts_20958 = _5;
    // SubProg get_help_options pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg get_help_options pc: 10 op: STARTLINE (58)

    /** cmdline.e:883		for i = 1 to length(opts) do*/
    // SubProg get_help_options pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_20957)){
            _11981 = SEQ_PTR(_opts_20957)->length;
    }
    else {
        _11981 = 1;
    }
    // SubProg get_help_options pc: 15 op: FOR_I (125)
    {
        object _i_20960;
        _i_20960 = 1;
L1: // addr: 22 pc: 15 sub: 20955 op: 125
        if (_i_20960 > _11981){
            goto L2; // [15] 170
        }
        // SubProg get_help_options pc: 22 op: STARTLINE (58)

        /** cmdline.e:884			if find(HELP, opts[i][OPTIONS]) then*/
        // SubProg get_help_options pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20957);
        _11982 = (object)*(((s1_ptr)_2)->base + _i_20960);
        // SubProg get_help_options pc: 28 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11982);
        _11983 = (object)*(((s1_ptr)_2)->base + 4);
        _11982 = NOVALUE;
        // SubProg get_help_options pc: 32 op: FIND_FROM (176)
        _11984 = find_from(104, _11983, 1);
        _11983 = NOVALUE;
        // SubProg get_help_options pc: 37 op: IF (20)
        if (_11984 == 0)
        {
            _11984 = NOVALUE;
            goto L3; // [37] 163
        }
        else{
            _11984 = NOVALUE;
        }
        // SubProg get_help_options pc: 40 op: STARTLINE (58)

        /** cmdline.e:885				if sequence(opts[i][SHORTNAME]) then*/
        // SubProg get_help_options pc: 42 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20957);
        _11985 = (object)*(((s1_ptr)_2)->base + _i_20960);
        // SubProg get_help_options pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11985);
        _11986 = (object)*(((s1_ptr)_2)->base + 1);
        _11985 = NOVALUE;
        // SubProg get_help_options pc: 50 op: IS_A_SEQUENCE (68)
        _11987 = IS_SEQUENCE(_11986);
        _11986 = NOVALUE;
        // SubProg get_help_options pc: 53 op: IF (20)
        if (_11987 == 0)
        {
            _11987 = NOVALUE;
            goto L4; // [53] 71
        }
        else{
            _11987 = NOVALUE;
        }
        // SubProg get_help_options pc: 56 op: STARTLINE (58)

        /** cmdline.e:886					help_opts = append(help_opts, opts[i][SHORTNAME])*/
        // SubProg get_help_options pc: 58 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20957);
        _11988 = (object)*(((s1_ptr)_2)->base + _i_20960);
        // SubProg get_help_options pc: 62 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11988);
        _11989 = (object)*(((s1_ptr)_2)->base + 1);
        _11988 = NOVALUE;
        // SubProg get_help_options pc: 66 op: APPEND (35)
        Ref(_11989);
        Append(&_help_opts_20958, _help_opts_20958, _11989);
        _11989 = NOVALUE;
        // SubProg get_help_options pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 20955 op: 159
        // SubProg get_help_options pc: 71 op: STARTLINE (58)

        /** cmdline.e:889				if sequence(opts[i][LONGNAME]) then*/
        // SubProg get_help_options pc: 73 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20957);
        _11991 = (object)*(((s1_ptr)_2)->base + _i_20960);
        // SubProg get_help_options pc: 77 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11991);
        _11992 = (object)*(((s1_ptr)_2)->base + 2);
        _11991 = NOVALUE;
        // SubProg get_help_options pc: 81 op: IS_A_SEQUENCE (68)
        _11993 = IS_SEQUENCE(_11992);
        _11992 = NOVALUE;
        // SubProg get_help_options pc: 84 op: IF (20)
        if (_11993 == 0)
        {
            _11993 = NOVALUE;
            goto L5; // [84] 102
        }
        else{
            _11993 = NOVALUE;
        }
        // SubProg get_help_options pc: 87 op: STARTLINE (58)

        /** cmdline.e:890					help_opts = append(help_opts, opts[i][LONGNAME])*/
        // SubProg get_help_options pc: 89 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20957);
        _11994 = (object)*(((s1_ptr)_2)->base + _i_20960);
        // SubProg get_help_options pc: 93 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11994);
        _11995 = (object)*(((s1_ptr)_2)->base + 2);
        _11994 = NOVALUE;
        // SubProg get_help_options pc: 97 op: APPEND (35)
        Ref(_11995);
        Append(&_help_opts_20958, _help_opts_20958, _11995);
        _11995 = NOVALUE;
        // SubProg get_help_options pc: 101 op: NOP1 (159)
L5: // addr: 102 pc: 101 sub: 20955 op: 159
        // SubProg get_help_options pc: 102 op: STARTLINE (58)

        /** cmdline.e:893				if find(NO_CASE, opts[i][OPTIONS]) then*/
        // SubProg get_help_options pc: 104 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_20957);
        _11997 = (object)*(((s1_ptr)_2)->base + _i_20960);
        // SubProg get_help_options pc: 108 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11997);
        _11998 = (object)*(((s1_ptr)_2)->base + 4);
        _11997 = NOVALUE;
        // SubProg get_help_options pc: 112 op: FIND_FROM (176)
        _11999 = find_from(105, _11998, 1);
        _11998 = NOVALUE;
        // SubProg get_help_options pc: 117 op: IF (20)
        if (_11999 == 0)
        {
            _11999 = NOVALUE;
            goto L6; // [117] 162
        }
        else{
            _11999 = NOVALUE;
        }
        // SubProg get_help_options pc: 120 op: STARTLINE (58)

        /** cmdline.e:894					help_opts = text:lower(help_opts)*/
        // SubProg get_help_options pc: 122 op: PROC (27)
        RefDS(_help_opts_20958);
        _0 = _help_opts_20958;
        _help_opts_20958 = _15lower(_help_opts_20958);
        DeRefDS(_0);
        // SubProg get_help_options pc: 126 op: SEQUENCE_CHECK (97)
        // SubProg get_help_options pc: 128 op: STARTLINE (58)

        /** cmdline.e:895					for j = 1 to length(help_opts) do*/
        // SubProg get_help_options pc: 130 op: LENGTH (42)
        if (IS_SEQUENCE(_help_opts_20958)){
                _12001 = SEQ_PTR(_help_opts_20958)->length;
        }
        else {
            _12001 = 1;
        }
        // SubProg get_help_options pc: 133 op: FOR_I (125)
        {
            object _j_20986;
            _j_20986 = 1;
L7: // addr: 140 pc: 133 sub: 20955 op: 125
            if (_j_20986 > _12001){
                goto L8; // [133] 161
            }
            // SubProg get_help_options pc: 140 op: STARTLINE (58)

            /** cmdline.e:896						help_opts = append( help_opts, text:upper(help_opts[j]) )*/
            // SubProg get_help_options pc: 142 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_help_opts_20958);
            _12002 = (object)*(((s1_ptr)_2)->base + _j_20986);
            // SubProg get_help_options pc: 146 op: PROC (27)
            Ref(_12002);
            _12003 = _15upper(_12002);
            _12002 = NOVALUE;
            // SubProg get_help_options pc: 150 op: APPEND (35)
            Ref(_12003);
            Append(&_help_opts_20958, _help_opts_20958, _12003);
            DeRef(_12003);
            _12003 = NOVALUE;
            // SubProg get_help_options pc: 154 op: STARTLINE (58)

            /** cmdline.e:897					end for*/
            // SubProg get_help_options pc: 156 op: ENDFOR_INT_UP1 (54)
            _j_20986 = _j_20986 + 1;
            goto L7; // [156] 140
L8: // addr: 161 pc: 156 sub: 20955 op: 54
            ;
        }
        // SubProg get_help_options pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 20955 op: 159
        // SubProg get_help_options pc: 162 op: NOP1 (159)
L3: // addr: 163 pc: 162 sub: 20955 op: 159
        // SubProg get_help_options pc: 163 op: STARTLINE (58)

        /** cmdline.e:900		end for*/
        // SubProg get_help_options pc: 165 op: ENDFOR_INT_UP1 (54)
        _i_20960 = _i_20960 + 1;
        goto L1; // [165] 22
L2: // addr: 170 pc: 165 sub: 20955 op: 54
        ;
    }
    // SubProg get_help_options pc: 170 op: STARTLINE (58)

    /** cmdline.e:901		return help_opts*/
    // SubProg get_help_options pc: 172 op: RETURNF (28)

// Exiting block BLOCK: get_help_options

// block var opts_20957
    DeRefDS(_opts_20957);
    return _help_opts_20958;
    // SubProg get_help_options pc: 176 op: BADRETURNF (43)
    ;
}


object _48parse_at_cmds(object _cmd_20993, object _cmds_20994, object _opts_20995, object _arg_idx_20996, object _add_help_rid_20997, object _parse_options_20998, object _help_on_error_20999, object _auto_help_21000)
{
    object _at_cmds_21001 = NOVALUE;
    object _j_21002 = NOVALUE;
    object _cmdex_21086 = NOVALUE;
// skipping _12086  name type: 0
// skipping _12085  name type: 0
    object _12084 = NOVALUE; // 21094 12084
    object _12083 = NOVALUE; // 21093 12083
// skipping _12082  name type: 0
// skipping _12081  name type: 0
    object _12080 = NOVALUE; // 21090 12080
    object _12079 = NOVALUE; // 21089 12079
    object _12078 = NOVALUE; // 21088 12078
    object _12077 = NOVALUE; // 21087 12077
    object _12076 = NOVALUE; // 21085 12076
    object _12075 = NOVALUE; // 21084 12075
    object _12074 = NOVALUE; // 21083 12074
    object _12073 = NOVALUE; // 21082 12073
    object _12072 = NOVALUE; // 21081 12072
    object _12071 = NOVALUE; // 21080 12071
    object _12070 = NOVALUE; // 21079 12070
    object _12069 = NOVALUE; // 21078 12069
    object _12068 = NOVALUE; // 21077 12068
    object _12067 = NOVALUE; // 21076 12067
    object _12066 = NOVALUE; // 21075 12066
    object _12065 = NOVALUE; // 21074 12065
    object _12064 = NOVALUE; // 21072 12064
    object _12063 = NOVALUE; // 21071 12063
    object _12062 = NOVALUE; // 21070 12062
    object _12061 = NOVALUE; // 21069 12061
    object _12060 = NOVALUE; // 21068 12060
    object _12059 = NOVALUE; // 21067 12059
    object _12058 = NOVALUE; // 21066 12058
    object _12057 = NOVALUE; // 21065 12057
    object _12056 = NOVALUE; // 21064 12056
    object _12055 = NOVALUE; // 21063 12055
    object _12054 = NOVALUE; // 21062 12054
    object _12053 = NOVALUE; // 21061 12053
    object _12052 = NOVALUE; // 21060 12052
    object _12051 = NOVALUE; // 21059 12051
    object _12050 = NOVALUE; // 21058 12050
    object _12049 = NOVALUE; // 21057 12049
// skipping _12048  name type: 0
// skipping _12047  name type: 0
    object _12046 = NOVALUE; // 21053 12046
    object _12045 = NOVALUE; // 21052 12045
    object _12044 = NOVALUE; // 21051 12044
    object _12043 = NOVALUE; // 21050 12043
    object _12042 = NOVALUE; // 21049 12042
// skipping _12041  name type: 0
    object _12040 = NOVALUE; // 21047 12040
    object _12039 = NOVALUE; // 21046 12039
// skipping _12038  name type: 0
// skipping _12037  name type: 0
    object _12036 = NOVALUE; // 21042 12036
    object _12035 = NOVALUE; // 21041 12035
    object _12034 = NOVALUE; // 21040 12034
    object _12033 = NOVALUE; // 21039 12033
    object _12032 = NOVALUE; // 21038 12032
// skipping _12031  name type: 0
    object _12030 = NOVALUE; // 21036 12030
    object _12029 = NOVALUE; // 21035 12029
    object _12028 = NOVALUE; // 21033 12028
    object _12027 = NOVALUE; // 21032 12027
// skipping _12026  name type: 0
// skipping _12025  name type: 0
    object _12024 = NOVALUE; // 21029 12024
    object _12022 = NOVALUE; // 21024 12022
    object _12021 = NOVALUE; // 21023 12021
    object _12020 = NOVALUE; // 21022 12020
    object _12018 = NOVALUE; // 21020 12018
// skipping _12017  name type: 0
    object _12016 = NOVALUE; // 21017 12016
    object _12015 = NOVALUE; // 21016 12015
// skipping _12014  name type: 0
    object _12013 = NOVALUE; // 21013 12013
// skipping _12012  name type: 0
    object _12011 = NOVALUE; // 21010 12011
    object _12010 = NOVALUE; // 21009 12010
    object _12009 = NOVALUE; // 21008 12009
    object _12008 = NOVALUE; // 21007 12008
    object _12007 = NOVALUE; // 21006 12007
    object _12006 = NOVALUE; // 21005 12006
    object _12005 = NOVALUE; // 21004 12005
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
    if (IS_SEQUENCE(_cmd_20993)){
            _12005 = SEQ_PTR(_cmd_20993)->length;
    }
    else {
        _12005 = 1;
    }
    // SubProg parse_at_cmds pc: 18 op: GREATER (6)
    _12006 = (_12005 > 2);
    _12005 = NOVALUE;
    // SubProg parse_at_cmds pc: 22 op: SC1_AND_IF (146)
    if (_12006 == 0) {
        goto L1; // [22] 78
    }
    // SubProg parse_at_cmds pc: 26 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_20993);
    _12008 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg parse_at_cmds pc: 30 op: EQUALS (3)
    if (IS_ATOM_INT(_12008)) {
        _12009 = (_12008 == 64);
    }
    else {
        _12009 = binary_op(EQUALS, _12008, 64);
    }
    _12008 = NOVALUE;
    // SubProg parse_at_cmds pc: 34 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 35 op: IF (20)
    if (_12009 == 0) {
        DeRef(_12009);
        _12009 = NOVALUE;
        goto L1; // [35] 78
    }
    else {
        if (!IS_ATOM_INT(_12009) && DBL_PTR(_12009)->dbl == 0.0){
            DeRef(_12009);
            _12009 = NOVALUE;
            goto L1; // [35] 78
        }
        DeRef(_12009);
        _12009 = NOVALUE;
    }
    DeRef(_12009);
    _12009 = NOVALUE;
    // SubProg parse_at_cmds pc: 38 op: STARTLINE (58)

    /** cmdline.e:914			at_cmds = io:read_lines(cmd[3..$])*/
    // SubProg parse_at_cmds pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_20993)){
            _12010 = SEQ_PTR(_cmd_20993)->length;
    }
    else {
        _12010 = 1;
    }
    // SubProg parse_at_cmds pc: 43 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12011;
    RHS_Slice(_cmd_20993, 3, _12010);
    // SubProg parse_at_cmds pc: 48 op: PROC (27)
    _0 = _at_cmds_21001;
    _at_cmds_21001 = _14read_lines(_12011);
    DeRef(_0);
    _12011 = NOVALUE;
    // SubProg parse_at_cmds pc: 52 op: STARTLINE (58)

    /** cmdline.e:915			if equal(at_cmds, -1) then*/
    // SubProg parse_at_cmds pc: 54 op: EQUAL (153)
    if (_at_cmds_21001 == -1)
    _12013 = 1;
    else if (IS_ATOM_INT(_at_cmds_21001) && IS_ATOM_INT(-1))
    _12013 = 0;
    else
    _12013 = (compare(_at_cmds_21001, -1) == 0);
    // SubProg parse_at_cmds pc: 58 op: IF (20)
    if (_12013 == 0)
    {
        _12013 = NOVALUE;
        goto L2; // [58] 156
    }
    else{
        _12013 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 61 op: STARTLINE (58)

    /** cmdline.e:918				cmds = eu:remove(cmds, arg_idx)*/
    // SubProg parse_at_cmds pc: 63 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_cmds_20994);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_arg_idx_20996)) ? _arg_idx_20996 : (object)(DBL_PTR(_arg_idx_20996)->dbl);
        int stop = (IS_ATOM_INT(_arg_idx_20996)) ? _arg_idx_20996 : (object)(DBL_PTR(_arg_idx_20996)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_cmds_20994), start, &_cmds_20994 );
            }
            else Tail(SEQ_PTR(_cmds_20994), stop+1, &_cmds_20994);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_cmds_20994), start, &_cmds_20994);
        }
        else {
            assign_slice_seq = &assign_space;
            _cmds_20994 = Remove_elements(start, stop, (SEQ_PTR(_cmds_20994)->ref == 1));
        }
    }
    // SubProg parse_at_cmds pc: 68 op: STARTLINE (58)

    /** cmdline.e:919				return cmds*/
    // SubProg parse_at_cmds pc: 70 op: RETURNF (28)

// Exiting block BLOCK: parse_at_cmds

// block var cmd_20993
    DeRefDS(_cmd_20993);

// block var opts_20995
    DeRefDS(_opts_20995);

// block var arg_idx_20996

// block var add_help_rid_20997
    DeRef(_add_help_rid_20997);

// block var parse_options_20998
    DeRef(_parse_options_20998);

// block var help_on_error_20999

// block var auto_help_21000

// block var at_cmds_21001
    DeRef(_at_cmds_21001);

// block var j_21002
    DeRef(_12006);
    _12006 = NOVALUE;
    return _cmds_20994;
    // SubProg parse_at_cmds pc: 74 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 75 op: ELSE (23)
    goto L2; // [75] 156
    // SubProg parse_at_cmds pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 78 op: STARTLINE (58)

    /** cmdline.e:923			at_cmds = io:read_lines(cmd[2..$])*/
    // SubProg parse_at_cmds pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_20993)){
            _12015 = SEQ_PTR(_cmd_20993)->length;
    }
    else {
        _12015 = 1;
    }
    // SubProg parse_at_cmds pc: 83 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12016;
    RHS_Slice(_cmd_20993, 2, _12015);
    // SubProg parse_at_cmds pc: 88 op: PROC (27)
    _0 = _at_cmds_21001;
    _at_cmds_21001 = _14read_lines(_12016);
    DeRef(_0);
    _12016 = NOVALUE;
    // SubProg parse_at_cmds pc: 92 op: STARTLINE (58)

    /** cmdline.e:924			if equal(at_cmds, -1) then*/
    // SubProg parse_at_cmds pc: 94 op: EQUAL (153)
    if (_at_cmds_21001 == -1)
    _12018 = 1;
    else if (IS_ATOM_INT(_at_cmds_21001) && IS_ATOM_INT(-1))
    _12018 = 0;
    else
    _12018 = (compare(_at_cmds_21001, -1) == 0);
    // SubProg parse_at_cmds pc: 98 op: IF (20)
    if (_12018 == 0)
    {
        _12018 = NOVALUE;
        goto L3; // [98] 155
    }
    else{
        _12018 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 101 op: STARTLINE (58)

    /** cmdline.e:925				printf(2, "Cannot access '@' argument file '%s'\n", {cmd[2..$]})*/
    // SubProg parse_at_cmds pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_20993)){
            _12020 = SEQ_PTR(_cmd_20993)->length;
    }
    else {
        _12020 = 1;
    }
    // SubProg parse_at_cmds pc: 106 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12021;
    RHS_Slice(_cmd_20993, 2, _12020);
    // SubProg parse_at_cmds pc: 111 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12021;
    _12022 = MAKE_SEQ(_1);
    _12021 = NOVALUE;
    // SubProg parse_at_cmds pc: 115 op: PRINTF (38)
    EPrintf(2, _12019, _12022);
    DeRefDS(_12022);
    _12022 = NOVALUE;
    // SubProg parse_at_cmds pc: 119 op: STARTLINE (58)

    /** cmdline.e:926				if help_on_error then*/
    // SubProg parse_at_cmds pc: 121 op: IF (20)
    if (_help_on_error_20999 == 0)
    {
        goto L4; // [121] 136
    }
    else{
    }
    // SubProg parse_at_cmds pc: 124 op: STARTLINE (58)

    /** cmdline.e:927					local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_at_cmds pc: 126 op: PROC (27)
    RefDS(_opts_20995);
    Ref(_add_help_rid_20997);
    RefDS(_cmds_20994);
    Ref(_parse_options_20998);
    _48local_help(_opts_20995, _add_help_rid_20997, _cmds_20994, 1, _parse_options_20998);
    // SubProg parse_at_cmds pc: 133 op: ELSE (23)
    goto L5; // [133] 149
    // SubProg parse_at_cmds pc: 135 op: NOP1 (159)
L4: // addr: 136 pc: 135 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 136 op: STARTLINE (58)

    /** cmdline.e:928				elsif auto_help then*/
    // SubProg parse_at_cmds pc: 138 op: IF (20)
    if (_auto_help_21000 == 0)
    {
        goto L6; // [138] 148
    }
    else{
    }
    // SubProg parse_at_cmds pc: 141 op: STARTLINE (58)

    /** cmdline.e:929					printf(2,"Try '--help' for more information.\n",{})          */
    // SubProg parse_at_cmds pc: 143 op: PRINTF (38)
    EPrintf(2, _12023, _5);
    // SubProg parse_at_cmds pc: 147 op: NOP1 (159)
L6: // addr: 148 pc: 147 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 148 op: NOP1 (159)
L5: // addr: 149 pc: 148 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 149 op: STARTLINE (58)

    /** cmdline.e:931				local_abort(1)*/
    // SubProg parse_at_cmds pc: 151 op: PROC (27)
    _48local_abort(1);
    // SubProg parse_at_cmds pc: 154 op: NOP1 (159)
L3: // addr: 155 pc: 154 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 155 op: NOP1 (159)
L2: // addr: 156 pc: 155 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 156 op: STARTLINE (58)

    /** cmdline.e:936		j = 0*/
    // SubProg parse_at_cmds pc: 158 op: ASSIGN_I (113)
    _j_21002 = 0;
    // SubProg parse_at_cmds pc: 161 op: STARTLINE (58)

    /** cmdline.e:937		while j < length(at_cmds) do*/
    // SubProg parse_at_cmds pc: 163 op: NOP2 (110)
    // SubProg parse_at_cmds pc: 165 op: NOPWHILE (158)
L7: // addr: 166 pc: 165 sub: 20991 op: 158
    // SubProg parse_at_cmds pc: 166 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_at_cmds pc: 168 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_21001)){
            _12024 = SEQ_PTR(_at_cmds_21001)->length;
    }
    else {
        _12024 = 1;
    }
    // SubProg parse_at_cmds pc: 171 op: LESS_IFW_I (119)
    if (_j_21002 >= _12024)
    goto L8; // [171] 492
    // SubProg parse_at_cmds pc: 175 op: STARTLINE (58)

    /** cmdline.e:938			j += 1*/
    // SubProg parse_at_cmds pc: 177 op: PLUS1_I (117)
    _j_21002 = _j_21002 + 1;
    // SubProg parse_at_cmds pc: 181 op: STARTLINE (58)

    /** cmdline.e:939			at_cmds[j] = text:trim(at_cmds[j])*/
    // SubProg parse_at_cmds pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12027 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 187 op: PROC (27)
    Ref(_12027);
    RefDS(_4573);
    _12028 = _15trim(_12027, _4573, 0);
    _12027 = NOVALUE;
    // SubProg parse_at_cmds pc: 193 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_21001 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_21002);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _12028;
    if( _1 != _12028 ){
        DeRef(_1);
    }
    _12028 = NOVALUE;
    // SubProg parse_at_cmds pc: 197 op: STARTLINE (58)

    /** cmdline.e:940			if length(at_cmds[j]) = 0 then*/
    // SubProg parse_at_cmds pc: 199 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12029 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 203 op: LENGTH (42)
    if (IS_SEQUENCE(_12029)){
            _12030 = SEQ_PTR(_12029)->length;
    }
    else {
        _12030 = 1;
    }
    _12029 = NOVALUE;
    // SubProg parse_at_cmds pc: 206 op: EQUALS_IFW_I (121)
    if (_12030 != 0)
    goto L9; // [206] 246
    // SubProg parse_at_cmds pc: 210 op: STARTLINE (58)

    /** cmdline.e:941				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    // SubProg parse_at_cmds pc: 212 op: MINUS (10)
    _12032 = _j_21002 - 1;
    // SubProg parse_at_cmds pc: 216 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12033;
    RHS_Slice(_at_cmds_21001, 1, _12032);
    // SubProg parse_at_cmds pc: 221 op: PLUS1 (93)
    _12034 = _j_21002 + 1;
    if (_12034 > MAXINT){
        _12034 = NewDouble((eudouble)_12034);
    }
    // SubProg parse_at_cmds pc: 225 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_21001)){
            _12035 = SEQ_PTR(_at_cmds_21001)->length;
    }
    else {
        _12035 = 1;
    }
    // SubProg parse_at_cmds pc: 228 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12036;
    RHS_Slice(_at_cmds_21001, _12034, _12035);
    // SubProg parse_at_cmds pc: 233 op: CONCAT (15)
    Concat((object_ptr)&_at_cmds_21001, _12033, _12036);
    DeRefDS(_12033);
    _12033 = NOVALUE;
    DeRef(_12033);
    _12033 = NOVALUE;
    DeRefDS(_12036);
    _12036 = NOVALUE;
    // SubProg parse_at_cmds pc: 237 op: STARTLINE (58)

    /** cmdline.e:942				j -= 1*/
    // SubProg parse_at_cmds pc: 239 op: MINUS_I (116)
    _j_21002 = _j_21002 - 1;
    // SubProg parse_at_cmds pc: 243 op: ELSE (23)
    goto L7; // [243] 166
    // SubProg parse_at_cmds pc: 245 op: NOP1 (159)
L9: // addr: 246 pc: 245 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 246 op: STARTLINE (58)

    /** cmdline.e:944			elsif at_cmds[j][1] = '#' then*/
    // SubProg parse_at_cmds pc: 248 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12039 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12039);
    _12040 = (object)*(((s1_ptr)_2)->base + 1);
    _12039 = NOVALUE;
    // SubProg parse_at_cmds pc: 256 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12040, 35)){
        _12040 = NOVALUE;
        goto LA; // [256] 296
    }
    _12040 = NOVALUE;
    // SubProg parse_at_cmds pc: 260 op: STARTLINE (58)

    /** cmdline.e:945				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    // SubProg parse_at_cmds pc: 262 op: MINUS (10)
    _12042 = _j_21002 - 1;
    // SubProg parse_at_cmds pc: 266 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12043;
    RHS_Slice(_at_cmds_21001, 1, _12042);
    // SubProg parse_at_cmds pc: 271 op: PLUS1 (93)
    _12044 = _j_21002 + 1;
    if (_12044 > MAXINT){
        _12044 = NewDouble((eudouble)_12044);
    }
    // SubProg parse_at_cmds pc: 275 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_21001)){
            _12045 = SEQ_PTR(_at_cmds_21001)->length;
    }
    else {
        _12045 = 1;
    }
    // SubProg parse_at_cmds pc: 278 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12046;
    RHS_Slice(_at_cmds_21001, _12044, _12045);
    // SubProg parse_at_cmds pc: 283 op: CONCAT (15)
    Concat((object_ptr)&_at_cmds_21001, _12043, _12046);
    DeRefDS(_12043);
    _12043 = NOVALUE;
    DeRef(_12043);
    _12043 = NOVALUE;
    DeRefDS(_12046);
    _12046 = NOVALUE;
    // SubProg parse_at_cmds pc: 287 op: STARTLINE (58)

    /** cmdline.e:946				j -= 1*/
    // SubProg parse_at_cmds pc: 289 op: MINUS_I (116)
    _j_21002 = _j_21002 - 1;
    // SubProg parse_at_cmds pc: 293 op: ELSE (23)
    goto L7; // [293] 166
    // SubProg parse_at_cmds pc: 295 op: NOP1 (159)
LA: // addr: 296 pc: 295 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 296 op: STARTLINE (58)

    /** cmdline.e:948			elsif at_cmds[j][1] = '"' and at_cmds[j][$] = '"' and length(at_cmds[j]) >= 2 then*/
    // SubProg parse_at_cmds pc: 298 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12049 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 302 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12049);
    _12050 = (object)*(((s1_ptr)_2)->base + 1);
    _12049 = NOVALUE;
    // SubProg parse_at_cmds pc: 306 op: EQUALS (3)
    if (IS_ATOM_INT(_12050)) {
        _12051 = (_12050 == 34);
    }
    else {
        _12051 = binary_op(EQUALS, _12050, 34);
    }
    _12050 = NOVALUE;
    // SubProg parse_at_cmds pc: 310 op: SC1_AND (141)
    if (IS_ATOM_INT(_12051)) {
        if (_12051 == 0) {
            DeRef(_12052);
            _12052 = 0;
            goto LB; // [310] 333
        }
    }
    else {
        if (DBL_PTR(_12051)->dbl == 0.0) {
            DeRef(_12052);
            _12052 = 0;
            goto LB; // [310] 333
        }
    }
    // SubProg parse_at_cmds pc: 314 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12053 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 318 op: LENGTH (42)
    if (IS_SEQUENCE(_12053)){
            _12054 = SEQ_PTR(_12053)->length;
    }
    else {
        _12054 = 1;
    }
    // SubProg parse_at_cmds pc: 321 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12053);
    _12055 = (object)*(((s1_ptr)_2)->base + _12054);
    _12053 = NOVALUE;
    // SubProg parse_at_cmds pc: 325 op: EQUALS (3)
    if (IS_ATOM_INT(_12055)) {
        _12056 = (_12055 == 34);
    }
    else {
        _12056 = binary_op(EQUALS, _12055, 34);
    }
    _12055 = NOVALUE;
    // SubProg parse_at_cmds pc: 329 op: SC2_AND (142)
    DeRef(_12052);
    if (IS_ATOM_INT(_12056))
    _12052 = (_12056 != 0);
    else
    _12052 = DBL_PTR(_12056)->dbl != 0.0;
    // SubProg parse_at_cmds pc: 332 op: NOP1 (159)
LB: // addr: 333 pc: 332 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 333 op: SC1_AND_IF (146)
    if (_12052 == 0) {
        goto LC; // [333] 377
    }
    // SubProg parse_at_cmds pc: 337 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12058 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 341 op: LENGTH (42)
    if (IS_SEQUENCE(_12058)){
            _12059 = SEQ_PTR(_12058)->length;
    }
    else {
        _12059 = 1;
    }
    _12058 = NOVALUE;
    // SubProg parse_at_cmds pc: 344 op: GREATEREQ (2)
    _12060 = (_12059 >= 2);
    _12059 = NOVALUE;
    // SubProg parse_at_cmds pc: 348 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 349 op: IF (20)
    if (_12060 == 0)
    {
        DeRef(_12060);
        _12060 = NOVALUE;
        goto LC; // [349] 377
    }
    else{
        DeRef(_12060);
        _12060 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 352 op: STARTLINE (58)

    /** cmdline.e:949				at_cmds[j] = at_cmds[j][2 .. $-1]*/
    // SubProg parse_at_cmds pc: 354 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12061 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 358 op: LENGTH (42)
    if (IS_SEQUENCE(_12061)){
            _12062 = SEQ_PTR(_12061)->length;
    }
    else {
        _12062 = 1;
    }
    // SubProg parse_at_cmds pc: 361 op: MINUS (10)
    _12063 = _12062 - 1;
    _12062 = NOVALUE;
    // SubProg parse_at_cmds pc: 365 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12064;
    RHS_Slice(_12061, 2, _12063);
    _12061 = NOVALUE;
    // SubProg parse_at_cmds pc: 370 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_21001 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_21002);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _12064;
    if( _1 != _12064 ){
        DeRef(_1);
    }
    _12064 = NOVALUE;
    // SubProg parse_at_cmds pc: 374 op: ELSE (23)
    goto L7; // [374] 166
    // SubProg parse_at_cmds pc: 376 op: NOP1 (159)
LC: // addr: 377 pc: 376 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 377 op: STARTLINE (58)

    /** cmdline.e:951			elsif at_cmds[j][1] = '\'' and at_cmds[j][$] = '\'' and length(at_cmds[j]) >= 2 then*/
    // SubProg parse_at_cmds pc: 379 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12065 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 383 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12065);
    _12066 = (object)*(((s1_ptr)_2)->base + 1);
    _12065 = NOVALUE;
    // SubProg parse_at_cmds pc: 387 op: EQUALS (3)
    if (IS_ATOM_INT(_12066)) {
        _12067 = (_12066 == 39);
    }
    else {
        _12067 = binary_op(EQUALS, _12066, 39);
    }
    _12066 = NOVALUE;
    // SubProg parse_at_cmds pc: 391 op: SC1_AND (141)
    if (IS_ATOM_INT(_12067)) {
        if (_12067 == 0) {
            DeRef(_12068);
            _12068 = 0;
            goto LD; // [391] 414
        }
    }
    else {
        if (DBL_PTR(_12067)->dbl == 0.0) {
            DeRef(_12068);
            _12068 = 0;
            goto LD; // [391] 414
        }
    }
    // SubProg parse_at_cmds pc: 395 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12069 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 399 op: LENGTH (42)
    if (IS_SEQUENCE(_12069)){
            _12070 = SEQ_PTR(_12069)->length;
    }
    else {
        _12070 = 1;
    }
    // SubProg parse_at_cmds pc: 402 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12069);
    _12071 = (object)*(((s1_ptr)_2)->base + _12070);
    _12069 = NOVALUE;
    // SubProg parse_at_cmds pc: 406 op: EQUALS (3)
    if (IS_ATOM_INT(_12071)) {
        _12072 = (_12071 == 39);
    }
    else {
        _12072 = binary_op(EQUALS, _12071, 39);
    }
    _12071 = NOVALUE;
    // SubProg parse_at_cmds pc: 410 op: SC2_AND (142)
    DeRef(_12068);
    if (IS_ATOM_INT(_12072))
    _12068 = (_12072 != 0);
    else
    _12068 = DBL_PTR(_12072)->dbl != 0.0;
    // SubProg parse_at_cmds pc: 413 op: NOP1 (159)
LD: // addr: 414 pc: 413 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 414 op: SC1_AND_IF (146)
    if (_12068 == 0) {
        goto LE; // [414] 484
    }
    // SubProg parse_at_cmds pc: 418 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12074 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 422 op: LENGTH (42)
    if (IS_SEQUENCE(_12074)){
            _12075 = SEQ_PTR(_12074)->length;
    }
    else {
        _12075 = 1;
    }
    _12074 = NOVALUE;
    // SubProg parse_at_cmds pc: 425 op: GREATEREQ (2)
    _12076 = (_12075 >= 2);
    _12075 = NOVALUE;
    // SubProg parse_at_cmds pc: 429 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 430 op: IF (20)
    if (_12076 == 0)
    {
        DeRef(_12076);
        _12076 = NOVALUE;
        goto LE; // [430] 484
    }
    else{
        DeRef(_12076);
        _12076 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 433 op: STARTLINE (58)

    /** cmdline.e:952				sequence cmdex = stdseq:split(at_cmds[j][2 .. $-1],' ', 1) -- Empty words removed.*/
    // SubProg parse_at_cmds pc: 435 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_21001);
    _12077 = (object)*(((s1_ptr)_2)->base + _j_21002);
    // SubProg parse_at_cmds pc: 439 op: LENGTH (42)
    if (IS_SEQUENCE(_12077)){
            _12078 = SEQ_PTR(_12077)->length;
    }
    else {
        _12078 = 1;
    }
    // SubProg parse_at_cmds pc: 442 op: MINUS (10)
    _12079 = _12078 - 1;
    _12078 = NOVALUE;
    // SubProg parse_at_cmds pc: 446 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12080;
    RHS_Slice(_12077, 2, _12079);
    _12077 = NOVALUE;
    // SubProg parse_at_cmds pc: 451 op: PROC (27)
    _0 = _cmdex_21086;
    _cmdex_21086 = _23split(_12080, 32, 1, 0);
    DeRef(_0);
    _12080 = NOVALUE;
    // SubProg parse_at_cmds pc: 458 op: SEQUENCE_CHECK (97)
    // SubProg parse_at_cmds pc: 460 op: STARTLINE (58)

    /** cmdline.e:954				at_cmds = replace(at_cmds, cmdex, j)*/
    // SubProg parse_at_cmds pc: 462 op: REPLACE (201)
    {
        intptr_t p1 = _at_cmds_21001;
        intptr_t p2 = _cmdex_21086;
        intptr_t p3 = _j_21002;
        intptr_t p4 = _j_21002;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_at_cmds_21001;
        Replace( &replace_params );
    }
    // SubProg parse_at_cmds pc: 468 op: STARTLINE (58)

    /** cmdline.e:955				j = j + length(cmdex) - 1*/
    // SubProg parse_at_cmds pc: 470 op: LENGTH (42)
    if (IS_SEQUENCE(_cmdex_21086)){
            _12083 = SEQ_PTR(_cmdex_21086)->length;
    }
    else {
        _12083 = 1;
    }
    // SubProg parse_at_cmds pc: 473 op: PLUS (11)
    _12084 = _j_21002 + _12083;
    if ((object)((uintptr_t)_12084 + (uintptr_t)HIGH_BITS) >= 0){
        _12084 = NewDouble((eudouble)_12084);
    }
    _12083 = NOVALUE;
    // SubProg parse_at_cmds pc: 477 op: MINUS (10)
    if (IS_ATOM_INT(_12084)) {
        _j_21002 = _12084 - 1;
    }
    else {
        _j_21002 = NewDouble(DBL_PTR(_12084)->dbl - (eudouble)1);
    }
    DeRef(_12084);
    _12084 = NOVALUE;
    // SubProg parse_at_cmds pc: 481 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_21002)) {
        _1 = (object)(DBL_PTR(_j_21002)->dbl);
        DeRefDS(_j_21002);
        _j_21002 = _1;
    }
    // SubProg parse_at_cmds pc: 483 op: NOP1 (159)
LE: // addr: 484 pc: 483 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 484 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cmdex_21086
    DeRef(_cmdex_21086);
    _cmdex_21086 = NOVALUE;
    // SubProg parse_at_cmds pc: 486 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 487 op: STARTLINE (58)

    /** cmdline.e:958		end while*/
    // SubProg parse_at_cmds pc: 489 op: ENDWHILE (22)
    goto L7; // [489] 166
    // SubProg parse_at_cmds pc: 491 op: NOP1 (159)
L8: // addr: 492 pc: 491 sub: 20991 op: 159
    // SubProg parse_at_cmds pc: 492 op: STARTLINE (58)

    /** cmdline.e:961		cmds = replace(cmds, at_cmds, arg_idx)*/
    // SubProg parse_at_cmds pc: 494 op: REPLACE (201)
    {
        intptr_t p1 = _cmds_20994;
        intptr_t p2 = _at_cmds_21001;
        intptr_t p3 = _arg_idx_20996;
        intptr_t p4 = _arg_idx_20996;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_cmds_20994;
        Replace( &replace_params );
    }
    // SubProg parse_at_cmds pc: 500 op: STARTLINE (58)

    /** cmdline.e:962		return cmds*/
    // SubProg parse_at_cmds pc: 502 op: RETURNF (28)

// Exiting block BLOCK: parse_at_cmds

// block var cmd_20993
    DeRefDS(_cmd_20993);

// block var opts_20995
    DeRefDS(_opts_20995);

// block var arg_idx_20996

// block var add_help_rid_20997
    DeRef(_add_help_rid_20997);

// block var parse_options_20998
    DeRef(_parse_options_20998);

// block var help_on_error_20999

// block var auto_help_21000

// block var at_cmds_21001
    DeRef(_at_cmds_21001);

// block var j_21002
    DeRef(_12034);
    _12034 = NOVALUE;
    DeRef(_12006);
    _12006 = NOVALUE;
    DeRef(_12063);
    _12063 = NOVALUE;
    _12029 = NOVALUE;
    DeRef(_12044);
    _12044 = NOVALUE;
    DeRef(_12051);
    _12051 = NOVALUE;
    DeRef(_12079);
    _12079 = NOVALUE;
    _12058 = NOVALUE;
    DeRef(_12032);
    _12032 = NOVALUE;
    DeRef(_12067);
    _12067 = NOVALUE;
    DeRef(_12042);
    _12042 = NOVALUE;
    _12074 = NOVALUE;
    DeRef(_12072);
    _12072 = NOVALUE;
    DeRef(_12056);
    _12056 = NOVALUE;
    return _cmds_20994;
    // SubProg parse_at_cmds pc: 506 op: BADRETURNF (43)
    ;
}


void _48check_mandatory(object _opts_21099, object _parsed_opts_21101, object _add_help_rid_21102, object _cmds_21103, object _parse_options_21104, object _help_on_error_21105, object _auto_help_21106)
{
    object _12111 = NOVALUE; // 21140 12111
    object _12110 = NOVALUE; // 21139 12110
    object _12109 = NOVALUE; // 21138 12109
// skipping _12107  name type: 0
    object _12106 = NOVALUE; // 21135 12106
    object _12105 = NOVALUE; // 21134 12105
    object _12104 = NOVALUE; // 21133 12104
// skipping _12102  name type: 0
    object _12101 = NOVALUE; // 21126 12101
    object _12100 = NOVALUE; // 21125 12100
    object _12099 = NOVALUE; // 21124 12099
    object _12098 = NOVALUE; // 21123 12098
    object _12097 = NOVALUE; // 21121 12097
    object _12096 = NOVALUE; // 21120 12096
    object _12095 = NOVALUE; // 21119 12095
    object _12094 = NOVALUE; // 21118 12094
    object _12093 = NOVALUE; // 21117 12093
    object _12092 = NOVALUE; // 21116 12092
    object _12091 = NOVALUE; // 21115 12091
    object _12090 = NOVALUE; // 21113 12090
    object _12089 = NOVALUE; // 21112 12089
    object _12088 = NOVALUE; // 21111 12088
    object _12087 = NOVALUE; // 21109 12087
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_mandatory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_mandatory pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg check_mandatory pc: 5 op: INTEGER_CHECK (96)
    // SubProg check_mandatory pc: 7 op: INTEGER_CHECK (96)
    // SubProg check_mandatory pc: 9 op: STARTLINE (58)

    /** cmdline.e:969		for i = 1 to length(opts) do*/
    // SubProg check_mandatory pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_21099)){
            _12087 = SEQ_PTR(_opts_21099)->length;
    }
    else {
        _12087 = 1;
    }
    // SubProg check_mandatory pc: 14 op: FOR_I (125)
    {
        object _i_21108;
        _i_21108 = 1;
L1: // addr: 21 pc: 14 sub: 21097 op: 125
        if (_i_21108 > _12087){
            goto L2; // [14] 219
        }
        // SubProg check_mandatory pc: 21 op: STARTLINE (58)

        /** cmdline.e:970			if find(MANDATORY, opts[i][OPTIONS]) then*/
        // SubProg check_mandatory pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21099);
        _12088 = (object)*(((s1_ptr)_2)->base + _i_21108);
        // SubProg check_mandatory pc: 27 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12088);
        _12089 = (object)*(((s1_ptr)_2)->base + 4);
        _12088 = NOVALUE;
        // SubProg check_mandatory pc: 31 op: FIND_FROM (176)
        _12090 = find_from(109, _12089, 1);
        _12089 = NOVALUE;
        // SubProg check_mandatory pc: 36 op: IF (20)
        if (_12090 == 0)
        {
            _12090 = NOVALUE;
            goto L3; // [36] 212
        }
        else{
            _12090 = NOVALUE;
        }
        // SubProg check_mandatory pc: 39 op: STARTLINE (58)

        /** cmdline.e:971				if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        // SubProg check_mandatory pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21099);
        _12091 = (object)*(((s1_ptr)_2)->base + _i_21108);
        // SubProg check_mandatory pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12091);
        _12092 = (object)*(((s1_ptr)_2)->base + 1);
        _12091 = NOVALUE;
        // SubProg check_mandatory pc: 49 op: IS_AN_ATOM (67)
        _12093 = IS_ATOM(_12092);
        _12092 = NOVALUE;
        // SubProg check_mandatory pc: 52 op: SC1_AND_IF (146)
        if (_12093 == 0) {
            goto L4; // [52] 138
        }
        // SubProg check_mandatory pc: 56 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21099);
        _12095 = (object)*(((s1_ptr)_2)->base + _i_21108);
        // SubProg check_mandatory pc: 60 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12095);
        _12096 = (object)*(((s1_ptr)_2)->base + 2);
        _12095 = NOVALUE;
        // SubProg check_mandatory pc: 64 op: IS_AN_ATOM (67)
        _12097 = IS_ATOM(_12096);
        _12096 = NOVALUE;
        // SubProg check_mandatory pc: 67 op: NOP1 (159)
        // SubProg check_mandatory pc: 68 op: IF (20)
        if (_12097 == 0)
        {
            _12097 = NOVALUE;
            goto L4; // [68] 138
        }
        else{
            _12097 = NOVALUE;
        }
        // SubProg check_mandatory pc: 71 op: STARTLINE (58)

        /** cmdline.e:972					if length(map:get(parsed_opts, opts[i][MAPNAME])) = 0 then*/
        // SubProg check_mandatory pc: 73 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21099);
        _12098 = (object)*(((s1_ptr)_2)->base + _i_21108);
        // SubProg check_mandatory pc: 77 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12098);
        _12099 = (object)*(((s1_ptr)_2)->base + 6);
        _12098 = NOVALUE;
        // SubProg check_mandatory pc: 81 op: PROC (27)
        Ref(_parsed_opts_21101);
        Ref(_12099);
        _12100 = _28get(_parsed_opts_21101, _12099, 0);
        _12099 = NOVALUE;
        // SubProg check_mandatory pc: 87 op: LENGTH (42)
        if (IS_SEQUENCE(_12100)){
                _12101 = SEQ_PTR(_12100)->length;
        }
        else {
            _12101 = 1;
        }
        DeRef(_12100);
        _12100 = NOVALUE;
        // SubProg check_mandatory pc: 90 op: EQUALS_IFW_I (121)
        if (_12101 != 0)
        goto L5; // [90] 211
        // SubProg check_mandatory pc: 94 op: STARTLINE (58)

        /** cmdline.e:973						puts(1, "Additional arguments were expected.\n\n")*/
        // SubProg check_mandatory pc: 96 op: PUTS (44)
        EPuts(1, _12103); // DJP 
        // SubProg check_mandatory pc: 99 op: STARTLINE (58)

        /** cmdline.e:974						if help_on_error then*/
        // SubProg check_mandatory pc: 101 op: IF (20)
        if (_help_on_error_21105 == 0)
        {
            goto L6; // [101] 116
        }
        else{
        }
        // SubProg check_mandatory pc: 104 op: STARTLINE (58)

        /** cmdline.e:975							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        // SubProg check_mandatory pc: 106 op: PROC (27)
        RefDS(_opts_21099);
        Ref(_add_help_rid_21102);
        RefDS(_cmds_21103);
        Ref(_parse_options_21104);
        _48local_help(_opts_21099, _add_help_rid_21102, _cmds_21103, 1, _parse_options_21104);
        // SubProg check_mandatory pc: 113 op: ELSE (23)
        goto L7; // [113] 129
        // SubProg check_mandatory pc: 115 op: NOP1 (159)
L6: // addr: 116 pc: 115 sub: 21097 op: 159
        // SubProg check_mandatory pc: 116 op: STARTLINE (58)

        /** cmdline.e:976						elsif auto_help then*/
        // SubProg check_mandatory pc: 118 op: IF (20)
        if (_auto_help_21106 == 0)
        {
            goto L8; // [118] 128
        }
        else{
        }
        // SubProg check_mandatory pc: 121 op: STARTLINE (58)

        /** cmdline.e:977							printf(2,"Try '--help' for more information.\n",{})          */
        // SubProg check_mandatory pc: 123 op: PRINTF (38)
        EPrintf(2, _12023, _5);
        // SubProg check_mandatory pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 21097 op: 159
        // SubProg check_mandatory pc: 128 op: NOP1 (159)
L7: // addr: 129 pc: 128 sub: 21097 op: 159
        // SubProg check_mandatory pc: 129 op: STARTLINE (58)

        /** cmdline.e:979						local_abort(1)*/
        // SubProg check_mandatory pc: 131 op: PROC (27)
        _48local_abort(1);
        // SubProg check_mandatory pc: 134 op: NOP1 (159)
        // SubProg check_mandatory pc: 135 op: ELSE (23)
        goto L5; // [135] 211
        // SubProg check_mandatory pc: 137 op: NOP1 (159)
L4: // addr: 138 pc: 137 sub: 21097 op: 159
        // SubProg check_mandatory pc: 138 op: STARTLINE (58)

        /** cmdline.e:982					if not map:has(parsed_opts, opts[i][MAPNAME]) then*/
        // SubProg check_mandatory pc: 140 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21099);
        _12104 = (object)*(((s1_ptr)_2)->base + _i_21108);
        // SubProg check_mandatory pc: 144 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12104);
        _12105 = (object)*(((s1_ptr)_2)->base + 6);
        _12104 = NOVALUE;
        // SubProg check_mandatory pc: 148 op: PROC (27)
        Ref(_parsed_opts_21101);
        Ref(_12105);
        _12106 = _28has(_parsed_opts_21101, _12105);
        _12105 = NOVALUE;
        // SubProg check_mandatory pc: 153 op: NOT_IFW (108)
        if (IS_ATOM_INT(_12106)) {
            if (_12106 != 0){
                DeRef(_12106);
                _12106 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        else {
            if (DBL_PTR(_12106)->dbl != 0.0){
                DeRef(_12106);
                _12106 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        DeRef(_12106);
        _12106 = NOVALUE;
        // SubProg check_mandatory pc: 156 op: STARTLINE (58)

        /** cmdline.e:983						printf(1, "option '%s' is mandatory but was not supplied.\n\n", {opts[i][MAPNAME]})*/
        // SubProg check_mandatory pc: 158 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_21099);
        _12109 = (object)*(((s1_ptr)_2)->base + _i_21108);
        // SubProg check_mandatory pc: 162 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12109);
        _12110 = (object)*(((s1_ptr)_2)->base + 6);
        _12109 = NOVALUE;
        // SubProg check_mandatory pc: 166 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_12110);
        ((intptr_t*)_2)[1] = _12110;
        _12111 = MAKE_SEQ(_1);
        _12110 = NOVALUE;
        // SubProg check_mandatory pc: 170 op: PRINTF (38)
        EPrintf(1, _12108, _12111);
        DeRefDS(_12111);
        _12111 = NOVALUE;
        // SubProg check_mandatory pc: 174 op: STARTLINE (58)

        /** cmdline.e:984						if help_on_error then*/
        // SubProg check_mandatory pc: 176 op: IF (20)
        if (_help_on_error_21105 == 0)
        {
            goto LA; // [176] 191
        }
        else{
        }
        // SubProg check_mandatory pc: 179 op: STARTLINE (58)

        /** cmdline.e:985							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        // SubProg check_mandatory pc: 181 op: PROC (27)
        RefDS(_opts_21099);
        Ref(_add_help_rid_21102);
        RefDS(_cmds_21103);
        Ref(_parse_options_21104);
        _48local_help(_opts_21099, _add_help_rid_21102, _cmds_21103, 1, _parse_options_21104);
        // SubProg check_mandatory pc: 188 op: ELSE (23)
        goto LB; // [188] 204
        // SubProg check_mandatory pc: 190 op: NOP1 (159)
LA: // addr: 191 pc: 190 sub: 21097 op: 159
        // SubProg check_mandatory pc: 191 op: STARTLINE (58)

        /** cmdline.e:986						elsif auto_help then*/
        // SubProg check_mandatory pc: 193 op: IF (20)
        if (_auto_help_21106 == 0)
        {
            goto LC; // [193] 203
        }
        else{
        }
        // SubProg check_mandatory pc: 196 op: STARTLINE (58)

        /** cmdline.e:987							printf(2,"Try '--help' for more information.\n",{})          */
        // SubProg check_mandatory pc: 198 op: PRINTF (38)
        EPrintf(2, _12023, _5);
        // SubProg check_mandatory pc: 202 op: NOP1 (159)
LC: // addr: 203 pc: 202 sub: 21097 op: 159
        // SubProg check_mandatory pc: 203 op: NOP1 (159)
LB: // addr: 204 pc: 203 sub: 21097 op: 159
        // SubProg check_mandatory pc: 204 op: STARTLINE (58)

        /** cmdline.e:989						local_abort(1)*/
        // SubProg check_mandatory pc: 206 op: PROC (27)
        _48local_abort(1);
        // SubProg check_mandatory pc: 209 op: NOP1 (159)
L9: // addr: 210 pc: 209 sub: 21097 op: 159
        // SubProg check_mandatory pc: 210 op: NOP1 (159)
L5: // addr: 211 pc: 210 sub: 21097 op: 159
        // SubProg check_mandatory pc: 211 op: NOP1 (159)
L3: // addr: 212 pc: 211 sub: 21097 op: 159
        // SubProg check_mandatory pc: 212 op: STARTLINE (58)

        /** cmdline.e:993		end for*/
        // SubProg check_mandatory pc: 214 op: ENDFOR_INT_UP1 (54)
        _i_21108 = _i_21108 + 1;
        goto L1; // [214] 21
L2: // addr: 219 pc: 214 sub: 21097 op: 54
        ;
    }
    // SubProg check_mandatory pc: 219 op: STARTLINE (58)

    /** cmdline.e:994	end procedure*/
    // SubProg check_mandatory pc: 221 op: RETURNP (29)

// Exiting block BLOCK: check_mandatory

// block var opts_21099
    DeRefDS(_opts_21099);

// block var parsed_opts_21101
    DeRef(_parsed_opts_21101);

// block var add_help_rid_21102
    DeRef(_add_help_rid_21102);

// block var cmds_21103
    DeRefDS(_cmds_21103);

// block var parse_options_21104
    DeRef(_parse_options_21104);

// block var help_on_error_21105

// block var auto_help_21106
    _12100 = NOVALUE;
    return;
    // SubProg check_mandatory pc: 224 op: BADRETURNF (43)
    ;
}


void _48parse_abort(object _format_msg_21145, object _msg_data_21146, object _opts_21147, object _add_help_rid_21148, object _cmds_21149, object _parse_options_21150, object _help_on_error_21151, object _auto_help_21152)
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
    EPrintf(1, _format_msg_21145, _msg_data_21146);
    // SubProg parse_abort pc: 19 op: STARTLINE (58)

    /** cmdline.e:1000		if help_on_error then*/
    // SubProg parse_abort pc: 21 op: IF (20)
    if (_help_on_error_21151 == 0)
    {
        goto L1; // [21] 36
    }
    else{
    }
    // SubProg parse_abort pc: 24 op: STARTLINE (58)

    /** cmdline.e:1001			local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_abort pc: 26 op: PROC (27)
    RefDS(_opts_21147);
    Ref(_add_help_rid_21148);
    RefDS(_cmds_21149);
    Ref(_parse_options_21150);
    _48local_help(_opts_21147, _add_help_rid_21148, _cmds_21149, 1, _parse_options_21150);
    // SubProg parse_abort pc: 33 op: ELSE (23)
    goto L2; // [33] 49
    // SubProg parse_abort pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 21143 op: 159
    // SubProg parse_abort pc: 36 op: STARTLINE (58)

    /** cmdline.e:1002		elsif auto_help then*/
    // SubProg parse_abort pc: 38 op: IF (20)
    if (_auto_help_21152 == 0)
    {
        goto L3; // [38] 48
    }
    else{
    }
    // SubProg parse_abort pc: 41 op: STARTLINE (58)

    /** cmdline.e:1003			printf(2,"Try '--help' for more information.\n",{})          */
    // SubProg parse_abort pc: 43 op: PRINTF (38)
    EPrintf(2, _12023, _5);
    // SubProg parse_abort pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 21143 op: 159
    // SubProg parse_abort pc: 48 op: NOP1 (159)
L2: // addr: 49 pc: 48 sub: 21143 op: 159
    // SubProg parse_abort pc: 49 op: STARTLINE (58)

    /** cmdline.e:1005		local_abort(1)*/
    // SubProg parse_abort pc: 51 op: PROC (27)
    _48local_abort(1);
    // SubProg parse_abort pc: 54 op: STARTLINE (58)

    /** cmdline.e:1006	end procedure*/
    // SubProg parse_abort pc: 56 op: RETURNP (29)

// Exiting block BLOCK: parse_abort

// block var format_msg_21145
    DeRefDSi(_format_msg_21145);

// block var msg_data_21146
    DeRefDS(_msg_data_21146);

// block var opts_21147
    DeRefDS(_opts_21147);

// block var add_help_rid_21148
    DeRef(_add_help_rid_21148);

// block var cmds_21149
    DeRefDS(_cmds_21149);

// block var parse_options_21150
    DeRef(_parse_options_21150);

// block var help_on_error_21151

// block var auto_help_21152
    return;
    // SubProg parse_abort pc: 59 op: BADRETURNF (43)
    ;
}


object _48parse_commands(object _cmds_21157, object _opts_21158, object _parsed_opts_21160, object _help_opts_21161, object _add_help_rid_21162, object _parse_options_21163, object _use_at_21164, object _validation_21165, object _has_extra_21166, object _call_count_21167, object _help_on_error_21168, object _auto_help_21169)
{
    object _arg_idx_21170 = NOVALUE;
    object _opts_done_21171 = NOVALUE;
    object _find_result_21172 = NOVALUE;
    object _type__21173 = NOVALUE;
    object _from__21174 = NOVALUE;
    object _cmd_21175 = NOVALUE;
    object _handle_result_21240 = NOVALUE;
    object _12163 = NOVALUE; // 21245 12163
// skipping _12162  name type: 0
// skipping _12161  name type: 0
// skipping _12160  name type: 0
    object _12159 = NOVALUE; // 21239 12159
    object _12158 = NOVALUE; // 21238 12158
    object _12156 = NOVALUE; // 21236 12156
    object _12155 = NOVALUE; // 21235 12155
    object _12154 = NOVALUE; // 21234 12154
// skipping _12153  name type: 0
    object _12152 = NOVALUE; // 21232 12152
// skipping _12151  name type: 0
    object _12150 = NOVALUE; // 21229 12150
// skipping _12149  name type: 0
    object _12148 = NOVALUE; // 21226 12148
// skipping _12147  name type: 0
    object _12146 = NOVALUE; // 21223 12146
    object _12145 = NOVALUE; // 21222 12145
    object _12144 = NOVALUE; // 21221 12144
    object _12143 = NOVALUE; // 21220 12143
    object _12142 = NOVALUE; // 21219 12142
// skipping _12141  name type: 0
// skipping _12140  name type: 0
// skipping _12139  name type: 0
    object _12138 = NOVALUE; // 21213 12138
// skipping _12137  name type: 0
    object _12136 = NOVALUE; // 21210 12136
    object _12135 = NOVALUE; // 21209 12135
    object _12134 = NOVALUE; // 21207 12134
    object _12133 = NOVALUE; // 21204 12133
    object _12132 = NOVALUE; // 21203 12132
    object _12131 = NOVALUE; // 21202 12131
// skipping _12130  name type: 0
    object _12129 = NOVALUE; // 21197 12129
    object _12128 = NOVALUE; // 21196 12128
    object _12127 = NOVALUE; // 21195 12127
    object _12126 = NOVALUE; // 21194 12126
    object _12125 = NOVALUE; // 21193 12125
    object _12124 = NOVALUE; // 21192 12124
    object _12123 = NOVALUE; // 21191 12123
// skipping _12122  name type: 0
// skipping _12121  name type: 0
    object _12120 = NOVALUE; // 21187 12120
    object _12119 = NOVALUE; // 21186 12119
    object _12118 = NOVALUE; // 21185 12118
// skipping _12117  name type: 0
    object _12116 = NOVALUE; // 21182 12116
// skipping _12115  name type: 0
// skipping _12114  name type: 0
// skipping _12113  name type: 0
    object _12112 = NOVALUE; // 21177 12112
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
    _arg_idx_21170 = 2;
    // SubProg parse_commands pc: 24 op: STARTLINE (58)

    /** cmdline.e:1017		integer opts_done = 0*/
    // SubProg parse_commands pc: 26 op: ASSIGN_I (113)
    _opts_done_21171 = 0;
    // SubProg parse_commands pc: 29 op: STARTLINE (58)

    /** cmdline.e:1023		while arg_idx < length(cmds) do*/
    // SubProg parse_commands pc: 31 op: NOP2 (110)
    // SubProg parse_commands pc: 33 op: NOPWHILE (158)
L1: // addr: 34 pc: 33 sub: 21155 op: 158
    // SubProg parse_commands pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_21157)){
            _12112 = SEQ_PTR(_cmds_21157)->length;
    }
    else {
        _12112 = 1;
    }
    // SubProg parse_commands pc: 37 op: LESS_IFW_I (119)
    if (_arg_idx_21170 >= _12112)
    goto L2; // [37] 488
    // SubProg parse_commands pc: 41 op: STARTLINE (58)

    /** cmdline.e:1024			arg_idx += 1*/
    // SubProg parse_commands pc: 43 op: PLUS1_I (117)
    _arg_idx_21170 = _arg_idx_21170 + 1;
    // SubProg parse_commands pc: 47 op: STARTLINE (58)

    /** cmdline.e:1026			cmd = cmds[arg_idx]*/
    // SubProg parse_commands pc: 49 op: RHS_SUBS (25)
    DeRef(_cmd_21175);
    _2 = (object)SEQ_PTR(_cmds_21157);
    _cmd_21175 = (object)*(((s1_ptr)_2)->base + _arg_idx_21170);
    Ref(_cmd_21175);
    // SubProg parse_commands pc: 53 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 55 op: STARTLINE (58)

    /** cmdline.e:1027			if length(cmd) = 0 then*/
    // SubProg parse_commands pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21175)){
            _12116 = SEQ_PTR(_cmd_21175)->length;
    }
    else {
        _12116 = 1;
    }
    // SubProg parse_commands pc: 60 op: EQUALS_IFW_I (121)
    if (_12116 != 0)
    goto L3; // [60] 69
    // SubProg parse_commands pc: 64 op: STARTLINE (58)

    /** cmdline.e:1028				continue*/
    // SubProg parse_commands pc: 66 op: ELSE (23)
    goto L1; // [66] 34
    // SubProg parse_commands pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 21155 op: 159
    // SubProg parse_commands pc: 69 op: STARTLINE (58)

    /** cmdline.e:1031			if cmd[1] = '@' and use_at then*/
    // SubProg parse_commands pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_21175);
    _12118 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 75 op: EQUALS (3)
    if (IS_ATOM_INT(_12118)) {
        _12119 = (_12118 == 64);
    }
    else {
        _12119 = binary_op(EQUALS, _12118, 64);
    }
    _12118 = NOVALUE;
    // SubProg parse_commands pc: 79 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12119)) {
        if (_12119 == 0) {
            goto L4; // [79] 113
        }
    }
    else {
        if (DBL_PTR(_12119)->dbl == 0.0) {
            goto L4; // [79] 113
        }
    }
    // SubProg parse_commands pc: 83 op: NOP1 (159)
    // SubProg parse_commands pc: 84 op: IF (20)
    if (_use_at_21164 == 0)
    {
        goto L4; // [84] 113
    }
    else{
    }
    // SubProg parse_commands pc: 87 op: STARTLINE (58)

    /** cmdline.e:1032				cmds = parse_at_cmds( cmd, cmds, opts, arg_idx, add_help_rid, parse_options, help_on_error, auto_help )*/
    // SubProg parse_commands pc: 89 op: PROC (27)
    RefDS(_cmd_21175);
    RefDS(_cmds_21157);
    RefDS(_opts_21158);
    Ref(_add_help_rid_21162);
    Ref(_parse_options_21163);
    _0 = _cmds_21157;
    _cmds_21157 = _48parse_at_cmds(_cmd_21175, _cmds_21157, _opts_21158, _arg_idx_21170, _add_help_rid_21162, _parse_options_21163, _help_on_error_21168, _auto_help_21169);
    DeRefDS(_0);
    // SubProg parse_commands pc: 100 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 102 op: STARTLINE (58)

    /** cmdline.e:1033				arg_idx -= 1*/
    // SubProg parse_commands pc: 104 op: MINUS_I (116)
    _arg_idx_21170 = _arg_idx_21170 - 1;
    // SubProg parse_commands pc: 108 op: STARTLINE (58)

    /** cmdline.e:1034				continue*/
    // SubProg parse_commands pc: 110 op: ELSE (23)
    goto L1; // [110] 34
    // SubProg parse_commands pc: 112 op: NOP1 (159)
L4: // addr: 113 pc: 112 sub: 21155 op: 159
    // SubProg parse_commands pc: 113 op: STARTLINE (58)

    /** cmdline.e:1037			if (opts_done or find(cmd[1], os:CMD_SWITCHES) = 0 or length(cmd) = 1)*/
    // SubProg parse_commands pc: 115 op: SC1_OR (143)
    if (_opts_done_21171 != 0) {
        _12123 = 1;
        goto L5; // [115] 136
    }
    // SubProg parse_commands pc: 119 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_21175);
    _12124 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 123 op: FIND_FROM (176)
    _12125 = find_from(_12124, _13CMD_SWITCHES_2341, 1);
    _12124 = NOVALUE;
    // SubProg parse_commands pc: 128 op: EQUALS (3)
    _12126 = (_12125 == 0);
    _12125 = NOVALUE;
    // SubProg parse_commands pc: 132 op: SC2_OR (144)
    _12123 = (_12126 != 0);
    // SubProg parse_commands pc: 135 op: NOP1 (159)
L5: // addr: 136 pc: 135 sub: 21155 op: 159
    // SubProg parse_commands pc: 136 op: SC1_OR (143)
    if (_12123 != 0) {
        DeRef(_12127);
        _12127 = 1;
        goto L6; // [136] 151
    }
    // SubProg parse_commands pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21175)){
            _12128 = SEQ_PTR(_cmd_21175)->length;
    }
    else {
        _12128 = 1;
    }
    // SubProg parse_commands pc: 143 op: EQUALS (3)
    _12129 = (_12128 == 1);
    _12128 = NOVALUE;
    // SubProg parse_commands pc: 147 op: SC2_OR (144)
    _12127 = (_12129 != 0);
    // SubProg parse_commands pc: 150 op: NOP1 (159)
L6: // addr: 151 pc: 150 sub: 21155 op: 159
    // SubProg parse_commands pc: 151 op: IF (20)
    if (_12127 == 0)
    {
        _12127 = NOVALUE;
        goto L7; // [151] 227
    }
    else{
        _12127 = NOVALUE;
    }
    // SubProg parse_commands pc: 154 op: STARTLINE (58)

    /** cmdline.e:1039				map:put(parsed_opts, EXTRAS, cmd, map:APPEND)*/
    // SubProg parse_commands pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg parse_commands pc: 158 op: PROC (27)
    Ref(_parsed_opts_21160);
    RefDS(_48EXTRAS_20229);
    RefDS(_cmd_21175);
    _28put(_parsed_opts_21160, _48EXTRAS_20229, _cmd_21175, 6, 0);
    // SubProg parse_commands pc: 165 op: STARTLINE (58)

    /** cmdline.e:1040				has_extra = 1*/
    // SubProg parse_commands pc: 167 op: ASSIGN_I (113)
    _has_extra_21166 = 1;
    // SubProg parse_commands pc: 170 op: STARTLINE (58)

    /** cmdline.e:1041				if validation = NO_VALIDATION_AFTER_FIRST_EXTRA then*/
    // SubProg parse_commands pc: 172 op: EQUALS_IFW_I (121)
    if (_validation_21165 != 4)
    goto L1; // [172] 34
    // SubProg parse_commands pc: 176 op: STARTLINE (58)

    /** cmdline.e:1042					for i = arg_idx + 1 to length(cmds) do*/
    // SubProg parse_commands pc: 178 op: PLUS1 (93)
    _12131 = _arg_idx_21170 + 1;
    if (_12131 > MAXINT){
        _12131 = NewDouble((eudouble)_12131);
    }
    // SubProg parse_commands pc: 182 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_21157)){
            _12132 = SEQ_PTR(_cmds_21157)->length;
    }
    else {
        _12132 = 1;
    }
    // SubProg parse_commands pc: 185 op: FOR (21)
    {
        object _i_21201;
        Ref(_12131);
        _i_21201 = _12131;
L8: // addr: 192 pc: 185 sub: 21155 op: 21
        if (binary_op_a(GREATER, _i_21201, _12132)){
            goto L9; // [185] 214
        }
        // SubProg parse_commands pc: 192 op: STARTLINE (58)

        /** cmdline.e:1043						map:put(parsed_opts, EXTRAS, cmds[i], map:APPEND)*/
        // SubProg parse_commands pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg parse_commands pc: 196 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_cmds_21157);
        if (!IS_ATOM_INT(_i_21201)){
            _12133 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_21201)->dbl));
        }
        else{
            _12133 = (object)*(((s1_ptr)_2)->base + _i_21201);
        }
        // SubProg parse_commands pc: 200 op: PROC (27)
        Ref(_parsed_opts_21160);
        RefDS(_48EXTRAS_20229);
        Ref(_12133);
        _28put(_parsed_opts_21160, _48EXTRAS_20229, _12133, 6, 0);
        _12133 = NOVALUE;
        // SubProg parse_commands pc: 207 op: STARTLINE (58)

        /** cmdline.e:1044					end for*/
        // SubProg parse_commands pc: 209 op: ENDFOR_INT_UP1 (54)
        _0 = _i_21201;
        if (IS_ATOM_INT(_i_21201)) {
            _i_21201 = _i_21201 + 1;
            if ((object)((uintptr_t)_i_21201 +(uintptr_t) HIGH_BITS) >= 0){
                _i_21201 = NewDouble((eudouble)_i_21201);
            }
        }
        else {
            _i_21201 = binary_op_a(PLUS, _i_21201, 1);
        }
        DeRef(_0);
        goto L8; // [209] 192
L9: // addr: 214 pc: 209 sub: 21155 op: 54
        ;
        DeRef(_i_21201);
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
LA: // addr: 226 pc: 225 sub: 21155 op: 159
    // SubProg parse_commands pc: 226 op: NOP1 (159)
L7: // addr: 227 pc: 226 sub: 21155 op: 159
    // SubProg parse_commands pc: 227 op: STARTLINE (58)

    /** cmdline.e:1052			if equal(cmd, "--") then*/
    // SubProg parse_commands pc: 229 op: EQUAL (153)
    if (_cmd_21175 == _11859)
    _12134 = 1;
    else if (IS_ATOM_INT(_cmd_21175) && IS_ATOM_INT(_11859))
    _12134 = 0;
    else
    _12134 = (compare(_cmd_21175, _11859) == 0);
    // SubProg parse_commands pc: 233 op: IF (20)
    if (_12134 == 0)
    {
        _12134 = NOVALUE;
        goto LB; // [233] 246
    }
    else{
        _12134 = NOVALUE;
    }
    // SubProg parse_commands pc: 236 op: STARTLINE (58)

    /** cmdline.e:1053				opts_done = 1*/
    // SubProg parse_commands pc: 238 op: ASSIGN_I (113)
    _opts_done_21171 = 1;
    // SubProg parse_commands pc: 241 op: STARTLINE (58)

    /** cmdline.e:1054				continue*/
    // SubProg parse_commands pc: 243 op: ELSE (23)
    goto L1; // [243] 34
    // SubProg parse_commands pc: 245 op: NOP1 (159)
LB: // addr: 246 pc: 245 sub: 21155 op: 159
    // SubProg parse_commands pc: 246 op: STARTLINE (58)

    /** cmdline.e:1057			if equal(cmd[1..2], "--") then	  -- found --opt-name*/
    // SubProg parse_commands pc: 248 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12135;
    RHS_Slice(_cmd_21175, 1, 2);
    // SubProg parse_commands pc: 253 op: EQUAL (153)
    if (_12135 == _11859)
    _12136 = 1;
    else if (IS_ATOM_INT(_12135) && IS_ATOM_INT(_11859))
    _12136 = 0;
    else
    _12136 = (compare(_12135, _11859) == 0);
    DeRefDS(_12135);
    _12135 = NOVALUE;
    // SubProg parse_commands pc: 257 op: IF (20)
    if (_12136 == 0)
    {
        _12136 = NOVALUE;
        goto LC; // [257] 274
    }
    else{
        _12136 = NOVALUE;
    }
    // SubProg parse_commands pc: 260 op: STARTLINE (58)

    /** cmdline.e:1058				type_ = {LONGNAME, "--"}*/
    // SubProg parse_commands pc: 262 op: RIGHT_BRACE_2 (85)
    RefDS(_11859);
    DeRef(_type__21173);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = _11859;
    _type__21173 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 266 op: STARTLINE (58)

    /** cmdline.e:1059				from_ = 3*/
    // SubProg parse_commands pc: 268 op: ASSIGN_I (113)
    _from__21174 = 3;
    // SubProg parse_commands pc: 271 op: ELSE (23)
    goto LD; // [271] 310
    // SubProg parse_commands pc: 273 op: NOP1 (159)
LC: // addr: 274 pc: 273 sub: 21155 op: 159
    // SubProg parse_commands pc: 274 op: STARTLINE (58)

    /** cmdline.e:1060			elsif cmd[1] = '-' then -- found -opt*/
    // SubProg parse_commands pc: 276 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_21175);
    _12138 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 280 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12138, 45)){
        _12138 = NOVALUE;
        goto LE; // [280] 298
    }
    _12138 = NOVALUE;
    // SubProg parse_commands pc: 284 op: STARTLINE (58)

    /** cmdline.e:1061				type_ = {SHORTNAME, "-"}*/
    // SubProg parse_commands pc: 286 op: RIGHT_BRACE_2 (85)
    RefDS(_11947);
    DeRef(_type__21173);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _11947;
    _type__21173 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 290 op: STARTLINE (58)

    /** cmdline.e:1062				from_ = 2*/
    // SubProg parse_commands pc: 292 op: ASSIGN_I (113)
    _from__21174 = 2;
    // SubProg parse_commands pc: 295 op: ELSE (23)
    goto LD; // [295] 310
    // SubProg parse_commands pc: 297 op: NOP1 (159)
LE: // addr: 298 pc: 297 sub: 21155 op: 159
    // SubProg parse_commands pc: 298 op: STARTLINE (58)

    /** cmdline.e:1064				type_ = {SHORTNAME, "/"}*/
    // SubProg parse_commands pc: 300 op: RIGHT_BRACE_2 (85)
    RefDS(_11366);
    DeRef(_type__21173);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _11366;
    _type__21173 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 304 op: STARTLINE (58)

    /** cmdline.e:1065				from_ = 2*/
    // SubProg parse_commands pc: 306 op: ASSIGN_I (113)
    _from__21174 = 2;
    // SubProg parse_commands pc: 309 op: NOP1 (159)
LD: // addr: 310 pc: 309 sub: 21155 op: 159
    // SubProg parse_commands pc: 310 op: STARTLINE (58)

    /** cmdline.e:1068			if find(cmd[from_..$], help_opts) then*/
    // SubProg parse_commands pc: 312 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_commands pc: 314 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21175)){
            _12142 = SEQ_PTR(_cmd_21175)->length;
    }
    else {
        _12142 = 1;
    }
    // SubProg parse_commands pc: 317 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12143;
    RHS_Slice(_cmd_21175, _from__21174, _12142);
    // SubProg parse_commands pc: 322 op: FIND_FROM (176)
    _12144 = find_from(_12143, _help_opts_21161, 1);
    DeRefDS(_12143);
    _12143 = NOVALUE;
    // SubProg parse_commands pc: 327 op: IF (20)
    if (_12144 == 0)
    {
        _12144 = NOVALUE;
        goto LF; // [327] 347
    }
    else{
        _12144 = NOVALUE;
    }
    // SubProg parse_commands pc: 330 op: STARTLINE (58)

    /** cmdline.e:1069				local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_commands pc: 332 op: PROC (27)
    RefDS(_opts_21158);
    Ref(_add_help_rid_21162);
    RefDS(_cmds_21157);
    Ref(_parse_options_21163);
    _48local_help(_opts_21158, _add_help_rid_21162, _cmds_21157, 1, _parse_options_21163);
    // SubProg parse_commands pc: 339 op: STARTLINE (58)

    /** cmdline.e:1070				ifdef UNITTEST then*/
    // SubProg parse_commands pc: 341 op: STARTLINE (58)

    /** cmdline.e:1073				local_abort(0)*/
    // SubProg parse_commands pc: 343 op: PROC (27)
    _48local_abort(0);
    // SubProg parse_commands pc: 346 op: NOP1 (159)
LF: // addr: 347 pc: 346 sub: 21155 op: 159
    // SubProg parse_commands pc: 347 op: STARTLINE (58)

    /** cmdline.e:1076			find_result = find_opt(opts, type_, cmd[from_..$])*/
    // SubProg parse_commands pc: 349 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_commands pc: 351 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_21175)){
            _12145 = SEQ_PTR(_cmd_21175)->length;
    }
    else {
        _12145 = 1;
    }
    // SubProg parse_commands pc: 354 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_12146;
    RHS_Slice(_cmd_21175, _from__21174, _12145);
    // SubProg parse_commands pc: 359 op: PROC (27)
    RefDS(_opts_21158);
    RefDS(_type__21173);
    _0 = _find_result_21172;
    _find_result_21172 = _48find_opt(_opts_21158, _type__21173, _12146);
    DeRef(_0);
    _12146 = NOVALUE;
    // SubProg parse_commands pc: 365 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 367 op: STARTLINE (58)

    /** cmdline.e:1078			if find_result[1] < 0 then*/
    // SubProg parse_commands pc: 369 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21172);
    _12148 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 373 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _12148, 0)){
        _12148 = NOVALUE;
        goto L10; // [373] 382
    }
    _12148 = NOVALUE;
    // SubProg parse_commands pc: 377 op: STARTLINE (58)

    /** cmdline.e:1079				continue -- Couldn't use this command argument for anything.*/
    // SubProg parse_commands pc: 379 op: ELSE (23)
    goto L1; // [379] 34
    // SubProg parse_commands pc: 381 op: NOP1 (159)
L10: // addr: 382 pc: 381 sub: 21155 op: 159
    // SubProg parse_commands pc: 382 op: STARTLINE (58)

    /** cmdline.e:1082			if find_result[1] = 0 then*/
    // SubProg parse_commands pc: 384 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21172);
    _12150 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 388 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12150, 0)){
        _12150 = NOVALUE;
        goto L11; // [388] 449
    }
    _12150 = NOVALUE;
    // SubProg parse_commands pc: 392 op: STARTLINE (58)

    /** cmdline.e:1083				if validation = VALIDATE_ALL or*/
    // SubProg parse_commands pc: 394 op: EQUALS (3)
    _12152 = (_validation_21165 == 2);
    // SubProg parse_commands pc: 398 op: SC1_OR_IF (147)
    if (_12152 != 0) {
        goto L12; // [398] 423
    }
    // SubProg parse_commands pc: 402 op: EQUALS (3)
    _12154 = (_validation_21165 == 4);
    // SubProg parse_commands pc: 406 op: SC1_AND (141)
    if (_12154 == 0) {
        DeRef(_12155);
        _12155 = 0;
        goto L13; // [406] 418
    }
    // SubProg parse_commands pc: 410 op: EQUALS (3)
    _12156 = (_has_extra_21166 == 0);
    // SubProg parse_commands pc: 414 op: SC2_AND (142)
    _12155 = (_12156 != 0);
    // SubProg parse_commands pc: 417 op: NOP1 (159)
L13: // addr: 418 pc: 417 sub: 21155 op: 159
    // SubProg parse_commands pc: 418 op: NOP1 (159)
    // SubProg parse_commands pc: 419 op: IF (20)
    if (_12155 == 0)
    {
        _12155 = NOVALUE;
        goto L1; // [419] 34
    }
    else{
        _12155 = NOVALUE;
    }
    // SubProg parse_commands pc: 422 op: NOP1 (159)
L12: // addr: 423 pc: 422 sub: 21155 op: 159
    // SubProg parse_commands pc: 423 op: STARTLINE (58)

    /** cmdline.e:1087					parse_abort( "option '%s': %s\n\n", {cmd, find_result[2]}, */
    // SubProg parse_commands pc: 425 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21172);
    _12158 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg parse_commands pc: 429 op: RIGHT_BRACE_2 (85)
    Ref(_12158);
    RefDS(_cmd_21175);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmd_21175;
    ((intptr_t *)_2)[2] = _12158;
    _12159 = MAKE_SEQ(_1);
    _12158 = NOVALUE;
    // SubProg parse_commands pc: 433 op: PROC (27)
    RefDS(_12157);
    RefDS(_opts_21158);
    Ref(_add_help_rid_21162);
    RefDS(_cmds_21157);
    Ref(_parse_options_21163);
    _48parse_abort(_12157, _12159, _opts_21158, _add_help_rid_21162, _cmds_21157, _parse_options_21163, _help_on_error_21168, _auto_help_21169);
    _12159 = NOVALUE;
    // SubProg parse_commands pc: 443 op: NOP1 (159)
    // SubProg parse_commands pc: 444 op: STARTLINE (58)

    /** cmdline.e:1091				continue*/
    // SubProg parse_commands pc: 446 op: ELSE (23)
    goto L1; // [446] 34
    // SubProg parse_commands pc: 448 op: NOP1 (159)
L11: // addr: 449 pc: 448 sub: 21155 op: 159
    // SubProg parse_commands pc: 449 op: STARTLINE (58)

    /** cmdline.e:1094			sequence handle_result = handle_opt( find_result, arg_idx, opts, parsed_opts, cmds, add_help_rid,*/
    // SubProg parse_commands pc: 451 op: PROC (27)
    RefDS(_find_result_21172);
    RefDS(_opts_21158);
    Ref(_parsed_opts_21160);
    RefDS(_cmds_21157);
    Ref(_add_help_rid_21162);
    Ref(_parse_options_21163);
    RefDS(_call_count_21167);
    _0 = _handle_result_21240;
    _handle_result_21240 = _48handle_opt(_find_result_21172, _arg_idx_21170, _opts_21158, _parsed_opts_21160, _cmds_21157, _add_help_rid_21162, _parse_options_21163, _call_count_21167, _validation_21165, _help_on_error_21168, _auto_help_21169);
    DeRef(_0);
    // SubProg parse_commands pc: 465 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 467 op: STARTLINE (58)

    /** cmdline.e:1096			arg_idx     = handle_result[1]*/
    // SubProg parse_commands pc: 469 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_handle_result_21240);
    _arg_idx_21170 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_arg_idx_21170))
    _arg_idx_21170 = (object)DBL_PTR(_arg_idx_21170)->dbl;
    // SubProg parse_commands pc: 473 op: STARTLINE (58)

    /** cmdline.e:1097			call_count = handle_result[2]*/
    // SubProg parse_commands pc: 475 op: RHS_SUBS (25)
    DeRefDS(_call_count_21167);
    _2 = (object)SEQ_PTR(_handle_result_21240);
    _call_count_21167 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_21167);
    // SubProg parse_commands pc: 479 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var handle_result_21240
    DeRefDS(_handle_result_21240);
    _handle_result_21240 = NOVALUE;
    // SubProg parse_commands pc: 483 op: STARTLINE (58)

    /** cmdline.e:1098		end while*/
    // SubProg parse_commands pc: 485 op: ENDWHILE (22)
    goto L1; // [485] 34
    // SubProg parse_commands pc: 487 op: NOP1 (159)
L2: // addr: 488 pc: 487 sub: 21155 op: 159
    // SubProg parse_commands pc: 488 op: STARTLINE (58)

    /** cmdline.e:1099		return { cmds, call_count }*/
    // SubProg parse_commands pc: 490 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_21167);
    RefDS(_cmds_21157);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmds_21157;
    ((intptr_t *)_2)[2] = _call_count_21167;
    _12163 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 494 op: RETURNF (28)

// Exiting block BLOCK: parse_commands

// block var cmds_21157
    DeRefDS(_cmds_21157);

// block var opts_21158
    DeRefDS(_opts_21158);

// block var parsed_opts_21160
    DeRef(_parsed_opts_21160);

// block var help_opts_21161
    DeRefDS(_help_opts_21161);

// block var add_help_rid_21162
    DeRef(_add_help_rid_21162);

// block var parse_options_21163
    DeRef(_parse_options_21163);

// block var use_at_21164

// block var validation_21165

// block var has_extra_21166

// block var call_count_21167
    DeRefDS(_call_count_21167);

// block var help_on_error_21168

// block var auto_help_21169

// block var arg_idx_21170

// block var opts_done_21171

// block var find_result_21172
    DeRef(_find_result_21172);

// block var type__21173
    DeRef(_type__21173);

// block var from__21174

// block var cmd_21175
    DeRef(_cmd_21175);
    DeRef(_12131);
    _12131 = NOVALUE;
    DeRef(_12152);
    _12152 = NOVALUE;
    DeRef(_12119);
    _12119 = NOVALUE;
    DeRef(_12156);
    _12156 = NOVALUE;
    DeRef(_12129);
    _12129 = NOVALUE;
    DeRef(_12154);
    _12154 = NOVALUE;
    DeRef(_12126);
    _12126 = NOVALUE;
    return _12163;
    // SubProg parse_commands pc: 498 op: BADRETURNF (43)
    ;
}


object _48handle_opt(object _find_result_21248, object _arg_idx_21249, object _opts_21250, object _parsed_opts_21252, object _cmds_21253, object _add_help_rid_21254, object _parse_options_21255, object _call_count_21256, object _validation_21257, object _help_on_error_21258, object _auto_help_21259)
{
    object _map_add_operation_21260 = NOVALUE;
    object _opt_21261 = NOVALUE;
    object _param_21264 = NOVALUE;
    object _pos_21302 = NOVALUE;
    object _ver_pos_21348 = NOVALUE;
    object _msg_inlined_crash_at_524_21365 = NOVALUE;
    object _fmt_inlined_crash_at_521_21364 = NOVALUE;
    object _12242 = NOVALUE; // 21366 12242
    object _12241 = NOVALUE; // 21362 12241
    object _12238 = NOVALUE; // 21358 12238
    object _12237 = NOVALUE; // 21357 12237
    object _12236 = NOVALUE; // 21356 12236
// skipping _12235  name type: 0
    object _12234 = NOVALUE; // 21354 12234
    object _12233 = NOVALUE; // 21353 12233
// skipping _12232  name type: 0
    object _12231 = NOVALUE; // 21350 12231
    object _12230 = NOVALUE; // 21349 12230
    object _12229 = NOVALUE; // 21347 12229
    object _12228 = NOVALUE; // 21346 12228
    object _12227 = NOVALUE; // 21344 12227
    object _12226 = NOVALUE; // 21342 12226
    object _12225 = NOVALUE; // 21340 12225
    object _12224 = NOVALUE; // 21339 12224
    object _12222 = NOVALUE; // 21337 12222
    object _12221 = NOVALUE; // 21336 12221
// skipping _12220  name type: 0
    object _12219 = NOVALUE; // 21334 12219
    object _12218 = NOVALUE; // 21333 12218
    object _12217 = NOVALUE; // 21331 12217
    object _12216 = NOVALUE; // 21330 12216
    object _12215 = NOVALUE; // 21329 12215
    object _12214 = NOVALUE; // 21328 12214
    object _12213 = NOVALUE; // 21327 12213
    object _12212 = NOVALUE; // 21326 12212
// skipping _12211  name type: 0
    object _12210 = NOVALUE; // 21323 12210
    object _12209 = NOVALUE; // 21322 12209
    object _12208 = NOVALUE; // 21319 12208
// skipping _12207  name type: 0
    object _12206 = NOVALUE; // 21317 12206
    object _12205 = NOVALUE; // 21315 12205
// skipping _12204  name type: 0
    object _12203 = NOVALUE; // 21313 12203
    object _12202 = NOVALUE; // 21312 12202
    object _12201 = NOVALUE; // 21311 12201
    object _12200 = NOVALUE; // 21310 12200
    object _12199 = NOVALUE; // 21309 12199
    object _12198 = NOVALUE; // 21308 12198
    object _12197 = NOVALUE; // 21307 12197
    object _12196 = NOVALUE; // 21305 12196
    object _12195 = NOVALUE; // 21304 12195
// skipping _12194  name type: 0
// skipping _12193  name type: 0
    object _12192 = NOVALUE; // 21300 12192
// skipping _12191  name type: 0
// skipping _12190  name type: 0
    object _12189 = NOVALUE; // 21294 12189
    object _12188 = NOVALUE; // 21293 12188
    object _12186 = NOVALUE; // 21291 12186
    object _12185 = NOVALUE; // 21290 12185
    object _12184 = NOVALUE; // 21289 12184
    object _12183 = NOVALUE; // 21288 12183
    object _12182 = NOVALUE; // 21287 12182
    object _12181 = NOVALUE; // 21286 12181
    object _12180 = NOVALUE; // 21283 12180
    object _12178 = NOVALUE; // 21281 12178
    object _12177 = NOVALUE; // 21280 12177
    object _12176 = NOVALUE; // 21279 12176
    object _12175 = NOVALUE; // 21278 12175
// skipping _12174  name type: 0
// skipping _12173  name type: 0
    object _12172 = NOVALUE; // 21274 12172
// skipping _12171  name type: 0
// skipping _12170  name type: 0
    object _12169 = NOVALUE; // 21270 12169
// skipping _12168  name type: 0
    object _12167 = NOVALUE; // 21267 12167
    object _12166 = NOVALUE; // 21266 12166
// skipping _12165  name type: 0
    object _12164 = NOVALUE; // 21262 12164
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
    _map_add_operation_21260 = 2;
    // SubProg handle_opt pc: 22 op: STARTLINE (58)

    /** cmdline.e:1111		sequence opt = opts[find_result[1]]*/
    // SubProg handle_opt pc: 24 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21248);
    _12164 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 28 op: RHS_SUBS (25)
    DeRef(_opt_21261);
    _2 = (object)SEQ_PTR(_opts_21250);
    if (!IS_ATOM_INT(_12164)){
        _opt_21261 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_12164)->dbl));
    }
    else{
        _opt_21261 = (object)*(((s1_ptr)_2)->base + _12164);
    }
    Ref(_opt_21261);
    // SubProg handle_opt pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 34 op: STARTLINE (58)

    /** cmdline.e:1114		if find(HAS_PARAMETER, opt[OPTIONS]) != 0 then*/
    // SubProg handle_opt pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12166 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 40 op: FIND_FROM (176)
    _12167 = find_from(112, _12166, 1);
    _12166 = NOVALUE;
    // SubProg handle_opt pc: 45 op: NOTEQ_IFW_I (122)
    if (_12167 == 0)
    goto L1; // [45] 194
    // SubProg handle_opt pc: 49 op: STARTLINE (58)

    /** cmdline.e:1115			map_add_operation = map:APPEND*/
    // SubProg handle_opt pc: 51 op: ASSIGN_I (113)
    _map_add_operation_21260 = 6;
    // SubProg handle_opt pc: 54 op: STARTLINE (58)

    /** cmdline.e:1116			if length(find_result) < 4 then*/
    // SubProg handle_opt pc: 56 op: LENGTH (42)
    if (IS_SEQUENCE(_find_result_21248)){
            _12169 = SEQ_PTR(_find_result_21248)->length;
    }
    else {
        _12169 = 1;
    }
    // SubProg handle_opt pc: 59 op: LESS_IFW_I (119)
    if (_12169 >= 4)
    goto L2; // [59] 184
    // SubProg handle_opt pc: 63 op: STARTLINE (58)

    /** cmdline.e:1117				arg_idx += 1*/
    // SubProg handle_opt pc: 65 op: PLUS1_I (117)
    _arg_idx_21249 = _arg_idx_21249 + 1;
    // SubProg handle_opt pc: 69 op: STARTLINE (58)

    /** cmdline.e:1118				if arg_idx <= length(cmds) then*/
    // SubProg handle_opt pc: 71 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_21253)){
            _12172 = SEQ_PTR(_cmds_21253)->length;
    }
    else {
        _12172 = 1;
    }
    // SubProg handle_opt pc: 74 op: LESSEQ_IFW_I (123)
    if (_arg_idx_21249 > _12172)
    goto L3; // [74] 119
    // SubProg handle_opt pc: 78 op: STARTLINE (58)

    /** cmdline.e:1119					param = cmds[arg_idx]*/
    // SubProg handle_opt pc: 80 op: RHS_SUBS (25)
    DeRef(_param_21264);
    _2 = (object)SEQ_PTR(_cmds_21253);
    _param_21264 = (object)*(((s1_ptr)_2)->base + _arg_idx_21249);
    Ref(_param_21264);
    // SubProg handle_opt pc: 84 op: STARTLINE (58)

    /** cmdline.e:1120					if length(param) = 2 and find(param[1], "-/") then*/
    // SubProg handle_opt pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_param_21264)){
            _12175 = SEQ_PTR(_param_21264)->length;
    }
    else {
        _12175 = 1;
    }
    // SubProg handle_opt pc: 89 op: EQUALS (3)
    _12176 = (_12175 == 2);
    _12175 = NOVALUE;
    // SubProg handle_opt pc: 93 op: SC1_AND_IF (146)
    if (_12176 == 0) {
        goto L4; // [93] 125
    }
    // SubProg handle_opt pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_param_21264);
    _12178 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 101 op: FIND_FROM (176)
    _12180 = find_from(_12178, _12179, 1);
    _12178 = NOVALUE;
    // SubProg handle_opt pc: 106 op: NOP1 (159)
    // SubProg handle_opt pc: 107 op: IF (20)
    if (_12180 == 0)
    {
        _12180 = NOVALUE;
        goto L4; // [107] 125
    }
    else{
        _12180 = NOVALUE;
    }
    // SubProg handle_opt pc: 110 op: STARTLINE (58)

    /** cmdline.e:1121						param = ""*/
    // SubProg handle_opt pc: 112 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_param_21264);
    _param_21264 = _5;
    // SubProg handle_opt pc: 115 op: NOP1 (159)
    // SubProg handle_opt pc: 116 op: ELSE (23)
    goto L4; // [116] 125
    // SubProg handle_opt pc: 118 op: NOP1 (159)
L3: // addr: 119 pc: 118 sub: 21246 op: 159
    // SubProg handle_opt pc: 119 op: STARTLINE (58)

    /** cmdline.e:1124					param = ""*/
    // SubProg handle_opt pc: 121 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_param_21264);
    _param_21264 = _5;
    // SubProg handle_opt pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 21246 op: 159
    // SubProg handle_opt pc: 125 op: STARTLINE (58)

    /** cmdline.e:1127				if length(param) = 0 and (validation = VALIDATE_ALL or (*/
    // SubProg handle_opt pc: 127 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 129 op: LENGTH (42)
    if (IS_SEQUENCE(_param_21264)){
            _12181 = SEQ_PTR(_param_21264)->length;
    }
    else {
        _12181 = 1;
    }
    // SubProg handle_opt pc: 132 op: EQUALS (3)
    _12182 = (_12181 == 0);
    _12181 = NOVALUE;
    // SubProg handle_opt pc: 136 op: SC1_AND_IF (146)
    if (_12182 == 0) {
        goto L5; // [136] 201
    }
    // SubProg handle_opt pc: 140 op: EQUALS (3)
    _12184 = (_validation_21257 == 2);
    // SubProg handle_opt pc: 144 op: SC1_OR (143)
    if (_12184 != 0) {
        DeRef(_12185);
        _12185 = 1;
        goto L6; // [144] 156
    }
    // SubProg handle_opt pc: 148 op: EQUALS (3)
    _12186 = (_validation_21257 == 4);
    // SubProg handle_opt pc: 152 op: SC2_OR (144)
    _12185 = (_12186 != 0);
    // SubProg handle_opt pc: 155 op: NOP1 (159)
L6: // addr: 156 pc: 155 sub: 21246 op: 159
    // SubProg handle_opt pc: 156 op: NOP1 (159)
    // SubProg handle_opt pc: 157 op: IF (20)
    if (_12185 == 0)
    {
        _12185 = NOVALUE;
        goto L5; // [157] 201
    }
    else{
        _12185 = NOVALUE;
    }
    // SubProg handle_opt pc: 160 op: STARTLINE (58)

    /** cmdline.e:1130					parse_abort( "option '%s' must have a parameter\n\n", {find_result[2]}, */
    // SubProg handle_opt pc: 162 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21248);
    _12188 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg handle_opt pc: 166 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12188);
    ((intptr_t*)_2)[1] = _12188;
    _12189 = MAKE_SEQ(_1);
    _12188 = NOVALUE;
    // SubProg handle_opt pc: 170 op: PROC (27)
    RefDS(_12187);
    RefDS(_opts_21250);
    Ref(_add_help_rid_21254);
    RefDS(_cmds_21253);
    Ref(_parse_options_21255);
    _48parse_abort(_12187, _12189, _opts_21250, _add_help_rid_21254, _cmds_21253, _parse_options_21255, _help_on_error_21258, _auto_help_21259);
    _12189 = NOVALUE;
    // SubProg handle_opt pc: 180 op: NOP1 (159)
    // SubProg handle_opt pc: 181 op: ELSE (23)
    goto L5; // [181] 201
    // SubProg handle_opt pc: 183 op: NOP1 (159)
L2: // addr: 184 pc: 183 sub: 21246 op: 159
    // SubProg handle_opt pc: 184 op: STARTLINE (58)

    /** cmdline.e:1134				param = find_result[4]*/
    // SubProg handle_opt pc: 186 op: RHS_SUBS (25)
    DeRef(_param_21264);
    _2 = (object)SEQ_PTR(_find_result_21248);
    _param_21264 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_21264);
    // SubProg handle_opt pc: 190 op: NOP1 (159)
    // SubProg handle_opt pc: 191 op: ELSE (23)
    goto L5; // [191] 201
    // SubProg handle_opt pc: 193 op: NOP1 (159)
L1: // addr: 194 pc: 193 sub: 21246 op: 159
    // SubProg handle_opt pc: 194 op: STARTLINE (58)

    /** cmdline.e:1137			param = find_result[4]*/
    // SubProg handle_opt pc: 196 op: RHS_SUBS (25)
    DeRef(_param_21264);
    _2 = (object)SEQ_PTR(_find_result_21248);
    _param_21264 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_21264);
    // SubProg handle_opt pc: 200 op: NOP1 (159)
L5: // addr: 201 pc: 200 sub: 21246 op: 159
    // SubProg handle_opt pc: 201 op: STARTLINE (58)

    /** cmdline.e:1140		if opt[CALLBACK] >= 0 then*/
    // SubProg handle_opt pc: 203 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12192 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg handle_opt pc: 207 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _12192, 0)){
        _12192 = NOVALUE;
        goto L7; // [207] 282
    }
    _12192 = NOVALUE;
    // SubProg handle_opt pc: 211 op: STARTLINE (58)

    /** cmdline.e:1141			integer pos = find_result[1]*/
    // SubProg handle_opt pc: 213 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_find_result_21248);
    _pos_21302 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_pos_21302))
    _pos_21302 = (object)DBL_PTR(_pos_21302)->dbl;
    // SubProg handle_opt pc: 217 op: STARTLINE (58)

    /** cmdline.e:1142			call_count[pos] += 1*/
    // SubProg handle_opt pc: 219 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_call_count_21256);
    _12195 = (object)*(((s1_ptr)_2)->base + _pos_21302);
    // SubProg handle_opt pc: 223 op: PLUS1 (93)
    if (IS_ATOM_INT(_12195)) {
        _12196 = _12195 + 1;
        if (_12196 > MAXINT){
            _12196 = NewDouble((eudouble)_12196);
        }
    }
    else
    _12196 = binary_op(PLUS, 1, _12195);
    _12195 = NOVALUE;
    // SubProg handle_opt pc: 227 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_call_count_21256);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _call_count_21256 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pos_21302);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _12196;
    if( _1 != _12196 ){
        DeRef(_1);
    }
    _12196 = NOVALUE;
    // SubProg handle_opt pc: 231 op: STARTLINE (58)

    /** cmdline.e:1144			if call_func(opt[CALLBACK], {{find_result[1], call_count[pos], param,  find_result[3]}}) = 0 then*/
    // SubProg handle_opt pc: 233 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12197 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg handle_opt pc: 237 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21248);
    _12198 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 241 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_call_count_21256);
    _12199 = (object)*(((s1_ptr)_2)->base + _pos_21302);
    // SubProg handle_opt pc: 245 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 247 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21248);
    _12200 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg handle_opt pc: 251 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12198);
    ((intptr_t*)_2)[1] = _12198;
    Ref(_12199);
    ((intptr_t*)_2)[2] = _12199;
    Ref(_param_21264);
    ((intptr_t*)_2)[3] = _param_21264;
    Ref(_12200);
    ((intptr_t*)_2)[4] = _12200;
    _12201 = MAKE_SEQ(_1);
    _12200 = NOVALUE;
    _12199 = NOVALUE;
    _12198 = NOVALUE;
    // SubProg handle_opt pc: 258 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12201;
    _12202 = MAKE_SEQ(_1);
    _12201 = NOVALUE;
    // SubProg handle_opt pc: 262 op: CALL_FUNC (137)
    _1 = (object)SEQ_PTR(_12202);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_12197].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    _1 = (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRef(_12203);
    _12203 = _1;
    DeRefDS(_12202);
    _12202 = NOVALUE;
    // SubProg handle_opt pc: 266 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12203, 0)){
        DeRef(_12203);
        _12203 = NOVALUE;
        goto L8; // [266] 281
    }
    DeRef(_12203);
    _12203 = NOVALUE;
    // SubProg handle_opt pc: 270 op: STARTLINE (58)

    /** cmdline.e:1145				return { arg_idx, call_count }*/
    // SubProg handle_opt pc: 272 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_21256);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_21249;
    ((intptr_t *)_2)[2] = _call_count_21256;
    _12205 = MAKE_SEQ(_1);
    // SubProg handle_opt pc: 276 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var pos_21302

// Exiting block BLOCK: handle_opt

// block var find_result_21248
    DeRefDS(_find_result_21248);

// block var arg_idx_21249

// block var opts_21250
    DeRefDS(_opts_21250);

// block var parsed_opts_21252
    DeRef(_parsed_opts_21252);

// block var cmds_21253
    DeRefDS(_cmds_21253);

// block var add_help_rid_21254
    DeRef(_add_help_rid_21254);

// block var parse_options_21255
    DeRef(_parse_options_21255);

// block var call_count_21256
    DeRefDS(_call_count_21256);

// block var validation_21257

// block var help_on_error_21258

// block var auto_help_21259

// block var map_add_operation_21260

// block var opt_21261
    DeRefDS(_opt_21261);

// block var param_21264
    DeRef(_param_21264);
    DeRef(_12184);
    _12184 = NOVALUE;
    DeRef(_12186);
    _12186 = NOVALUE;
    _12164 = NOVALUE;
    DeRef(_12182);
    _12182 = NOVALUE;
    _12197 = NOVALUE;
    DeRef(_12176);
    _12176 = NOVALUE;
    return _12205;
    // SubProg handle_opt pc: 280 op: NOP1 (159)
L8: // addr: 281 pc: 280 sub: 21246 op: 159
    // SubProg handle_opt pc: 281 op: NOP1 (159)
L7: // addr: 282 pc: 281 sub: 21246 op: 159
    // SubProg handle_opt pc: 282 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pos_21302
    // SubProg handle_opt pc: 284 op: STARTLINE (58)

    /** cmdline.e:1149		if find_result[3] = 1 then*/
    // SubProg handle_opt pc: 286 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21248);
    _12206 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg handle_opt pc: 290 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _12206, 1)){
        _12206 = NOVALUE;
        goto L9; // [290] 307
    }
    _12206 = NOVALUE;
    // SubProg handle_opt pc: 294 op: STARTLINE (58)

    /** cmdline.e:1150			map:remove(parsed_opts, opt[MAPNAME])*/
    // SubProg handle_opt pc: 296 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12208 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 300 op: PROC (27)
    Ref(_parsed_opts_21252);
    Ref(_12208);
    _28remove(_parsed_opts_21252, _12208);
    _12208 = NOVALUE;
    // SubProg handle_opt pc: 304 op: ELSE (23)
    goto LA; // [304] 446
    // SubProg handle_opt pc: 306 op: NOP1 (159)
L9: // addr: 307 pc: 306 sub: 21246 op: 159
    // SubProg handle_opt pc: 307 op: STARTLINE (58)

    /** cmdline.e:1152			if find(MULTIPLE, opt[OPTIONS]) = 0 then*/
    // SubProg handle_opt pc: 309 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12209 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 313 op: FIND_FROM (176)
    _12210 = find_from(42, _12209, 1);
    _12209 = NOVALUE;
    // SubProg handle_opt pc: 318 op: EQUALS_IFW_I (121)
    if (_12210 != 0)
    goto LB; // [318] 429
    // SubProg handle_opt pc: 322 op: STARTLINE (58)

    /** cmdline.e:1153				if map:has(parsed_opts, opt[MAPNAME]) and (validation = VALIDATE_ALL or*/
    // SubProg handle_opt pc: 324 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12212 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 328 op: PROC (27)
    Ref(_parsed_opts_21252);
    Ref(_12212);
    _12213 = _28has(_parsed_opts_21252, _12212);
    _12212 = NOVALUE;
    // SubProg handle_opt pc: 333 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12213)) {
        if (_12213 == 0) {
            goto LC; // [333] 410
        }
    }
    else {
        if (DBL_PTR(_12213)->dbl == 0.0) {
            goto LC; // [333] 410
        }
    }
    // SubProg handle_opt pc: 337 op: EQUALS (3)
    _12215 = (_validation_21257 == 2);
    // SubProg handle_opt pc: 341 op: SC1_OR (143)
    if (_12215 != 0) {
        DeRef(_12216);
        _12216 = 1;
        goto LD; // [341] 353
    }
    // SubProg handle_opt pc: 345 op: EQUALS (3)
    _12217 = (_validation_21257 == 4);
    // SubProg handle_opt pc: 349 op: SC2_OR (144)
    _12216 = (_12217 != 0);
    // SubProg handle_opt pc: 352 op: NOP1 (159)
LD: // addr: 353 pc: 352 sub: 21246 op: 159
    // SubProg handle_opt pc: 353 op: NOP1 (159)
    // SubProg handle_opt pc: 354 op: IF (20)
    if (_12216 == 0)
    {
        _12216 = NOVALUE;
        goto LC; // [354] 410
    }
    else{
        _12216 = NOVALUE;
    }
    // SubProg handle_opt pc: 357 op: STARTLINE (58)

    /** cmdline.e:1156					if find(HAS_PARAMETER, opt[OPTIONS]) or find(ONCE, opt[OPTIONS]) then*/
    // SubProg handle_opt pc: 359 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12218 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 363 op: FIND_FROM (176)
    _12219 = find_from(112, _12218, 1);
    _12218 = NOVALUE;
    // SubProg handle_opt pc: 368 op: SC1_OR_IF (147)
    if (_12219 != 0) {
        goto LE; // [368] 386
    }
    // SubProg handle_opt pc: 372 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12221 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 376 op: FIND_FROM (176)
    _12222 = find_from(49, _12221, 1);
    _12221 = NOVALUE;
    // SubProg handle_opt pc: 381 op: NOP1 (159)
    // SubProg handle_opt pc: 382 op: IF (20)
    if (_12222 == 0)
    {
        _12222 = NOVALUE;
        goto LF; // [382] 445
    }
    else{
        _12222 = NOVALUE;
    }
    // SubProg handle_opt pc: 385 op: NOP1 (159)
LE: // addr: 386 pc: 385 sub: 21246 op: 159
    // SubProg handle_opt pc: 386 op: STARTLINE (58)

    /** cmdline.e:1157						parse_abort( "option '%s' must not occur more than once in the command line.\n\n", */
    // SubProg handle_opt pc: 388 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_21248);
    _12224 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg handle_opt pc: 392 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12224);
    ((intptr_t*)_2)[1] = _12224;
    _12225 = MAKE_SEQ(_1);
    _12224 = NOVALUE;
    // SubProg handle_opt pc: 396 op: PROC (27)
    RefDS(_12223);
    RefDS(_opts_21250);
    Ref(_add_help_rid_21254);
    RefDS(_cmds_21253);
    Ref(_parse_options_21255);
    _48parse_abort(_12223, _12225, _opts_21250, _add_help_rid_21254, _cmds_21253, _parse_options_21255, _help_on_error_21258, _auto_help_21259);
    _12225 = NOVALUE;
    // SubProg handle_opt pc: 406 op: NOP1 (159)
    // SubProg handle_opt pc: 407 op: ELSE (23)
    goto LF; // [407] 445
    // SubProg handle_opt pc: 409 op: NOP1 (159)
LC: // addr: 410 pc: 409 sub: 21246 op: 159
    // SubProg handle_opt pc: 410 op: STARTLINE (58)

    /** cmdline.e:1161					map:put(parsed_opts, opt[MAPNAME], param)*/
    // SubProg handle_opt pc: 412 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12226 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 416 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 418 op: PROC (27)
    Ref(_parsed_opts_21252);
    Ref(_12226);
    Ref(_param_21264);
    _28put(_parsed_opts_21252, _12226, _param_21264, 1, 0);
    _12226 = NOVALUE;
    // SubProg handle_opt pc: 425 op: NOP1 (159)
    // SubProg handle_opt pc: 426 op: ELSE (23)
    goto LF; // [426] 445
    // SubProg handle_opt pc: 428 op: NOP1 (159)
LB: // addr: 429 pc: 428 sub: 21246 op: 159
    // SubProg handle_opt pc: 429 op: STARTLINE (58)

    /** cmdline.e:1164				map:put(parsed_opts, opt[MAPNAME], param, map_add_operation)*/
    // SubProg handle_opt pc: 431 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12227 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 435 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 437 op: PROC (27)
    Ref(_parsed_opts_21252);
    Ref(_12227);
    Ref(_param_21264);
    _28put(_parsed_opts_21252, _12227, _param_21264, _map_add_operation_21260, 0);
    _12227 = NOVALUE;
    // SubProg handle_opt pc: 444 op: NOP1 (159)
LF: // addr: 445 pc: 444 sub: 21246 op: 159
    // SubProg handle_opt pc: 445 op: NOP1 (159)
LA: // addr: 446 pc: 445 sub: 21246 op: 159
    // SubProg handle_opt pc: 446 op: STARTLINE (58)

    /** cmdline.e:1168		if find(VERSIONING, opt[OPTIONS]) then*/
    // SubProg handle_opt pc: 448 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12228 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 452 op: FIND_FROM (176)
    _12229 = find_from(118, _12228, 1);
    _12228 = NOVALUE;
    // SubProg handle_opt pc: 457 op: IF (20)
    if (_12229 == 0)
    {
        _12229 = NOVALUE;
        goto L10; // [457] 544
    }
    else{
        _12229 = NOVALUE;
    }
    // SubProg handle_opt pc: 460 op: STARTLINE (58)

    /** cmdline.e:1169			integer ver_pos = find(VERSIONING, opt[OPTIONS]) + 1*/
    // SubProg handle_opt pc: 462 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12230 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 466 op: FIND_FROM (176)
    _12231 = find_from(118, _12230, 1);
    _12230 = NOVALUE;
    // SubProg handle_opt pc: 471 op: PLUS1_I (117)
    _ver_pos_21348 = _12231 + 1;
    _12231 = NOVALUE;
    // SubProg handle_opt pc: 475 op: STARTLINE (58)

    /** cmdline.e:1170			if length(opt[OPTIONS]) >= ver_pos then*/
    // SubProg handle_opt pc: 477 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12233 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 481 op: LENGTH (42)
    if (IS_SEQUENCE(_12233)){
            _12234 = SEQ_PTR(_12233)->length;
    }
    else {
        _12234 = 1;
    }
    _12233 = NOVALUE;
    // SubProg handle_opt pc: 484 op: GREATEREQ_IFW_I (120)
    if (_12234 < _ver_pos_21348)
    goto L11; // [484] 513
    // SubProg handle_opt pc: 488 op: STARTLINE (58)

    /** cmdline.e:1171				printf(1, "%s\n", { opt[OPTIONS][ver_pos] })*/
    // SubProg handle_opt pc: 490 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_21261);
    _12236 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 494 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_12236);
    _12237 = (object)*(((s1_ptr)_2)->base + _ver_pos_21348);
    _12236 = NOVALUE;
    // SubProg handle_opt pc: 498 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_12237);
    ((intptr_t*)_2)[1] = _12237;
    _12238 = MAKE_SEQ(_1);
    _12237 = NOVALUE;
    // SubProg handle_opt pc: 502 op: PRINTF (38)
    EPrintf(1, _9169, _12238);
    DeRefDS(_12238);
    _12238 = NOVALUE;
    // SubProg handle_opt pc: 506 op: STARTLINE (58)

    /** cmdline.e:1172				abort(0)*/
    // SubProg handle_opt pc: 508 op: ABORT (126)
    UserCleanup(0);
    // SubProg handle_opt pc: 510 op: ELSE (23)
    goto L12; // [510] 543
    // SubProg handle_opt pc: 512 op: NOP1 (159)
L11: // addr: 513 pc: 512 sub: 21246 op: 159
    // SubProg handle_opt pc: 513 op: STARTLINE (58)

    /** cmdline.e:1174				error:crash("help options are incorrect,\n" &*/
    // SubProg handle_opt pc: 515 op: CONCAT (15)
    Concat((object_ptr)&_12241, _12239, _12240);
    // SubProg handle_opt pc: 519 op: ASSIGN (18)
    DeRefi(_fmt_inlined_crash_at_521_21364);
    _fmt_inlined_crash_at_521_21364 = _12241;
    _12241 = NOVALUE;
    // SubProg handle_opt pc: 522 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 524 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg handle_opt pc: 526 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_524_21365);
    _msg_inlined_crash_at_524_21365 = EPrintf(-9999999, _fmt_inlined_crash_at_521_21364, _5);
    // SubProg handle_opt pc: 530 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg handle_opt pc: 532 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_524_21365);
    // SubProg handle_opt pc: 535 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg handle_opt pc: 537 op: ELSE (23)
    goto L13; // [537] 540
    // SubProg handle_opt pc: 539 op: NOP1 (159)
L13: // addr: 540 pc: 539 sub: 21246 op: 159
    // SubProg handle_opt pc: 540 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from handle_opt @ 521

// block var fmt_inlined_crash_at_521_21364
    DeRefi(_fmt_inlined_crash_at_521_21364);
    _fmt_inlined_crash_at_521_21364 = NOVALUE;

// block var msg_inlined_crash_at_524_21365
    DeRefi(_msg_inlined_crash_at_524_21365);
    _msg_inlined_crash_at_524_21365 = NOVALUE;
    // SubProg handle_opt pc: 542 op: NOP1 (159)
L12: // addr: 543 pc: 542 sub: 21246 op: 159
    // SubProg handle_opt pc: 543 op: NOP1 (159)
L10: // addr: 544 pc: 543 sub: 21246 op: 159
    // SubProg handle_opt pc: 544 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ver_pos_21348
    // SubProg handle_opt pc: 546 op: STARTLINE (58)

    /** cmdline.e:1178		return {arg_idx, call_count}*/
    // SubProg handle_opt pc: 548 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_21256);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_21249;
    ((intptr_t *)_2)[2] = _call_count_21256;
    _12242 = MAKE_SEQ(_1);
    // SubProg handle_opt pc: 552 op: RETURNF (28)

// Exiting block BLOCK: handle_opt

// block var find_result_21248
    DeRefDS(_find_result_21248);

// block var arg_idx_21249

// block var opts_21250
    DeRefDS(_opts_21250);

// block var parsed_opts_21252
    DeRef(_parsed_opts_21252);

// block var cmds_21253
    DeRefDS(_cmds_21253);

// block var add_help_rid_21254
    DeRef(_add_help_rid_21254);

// block var parse_options_21255
    DeRef(_parse_options_21255);

// block var call_count_21256
    DeRefDS(_call_count_21256);

// block var validation_21257

// block var help_on_error_21258

// block var auto_help_21259

// block var map_add_operation_21260

// block var opt_21261
    DeRef(_opt_21261);

// block var param_21264
    DeRef(_param_21264);
    DeRef(_12184);
    _12184 = NOVALUE;
    _12233 = NOVALUE;
    DeRef(_12186);
    _12186 = NOVALUE;
    _12164 = NOVALUE;
    DeRef(_12213);
    _12213 = NOVALUE;
    DeRef(_12182);
    _12182 = NOVALUE;
    _12197 = NOVALUE;
    DeRef(_12176);
    _12176 = NOVALUE;
    DeRef(_12205);
    _12205 = NOVALUE;
    DeRef(_12215);
    _12215 = NOVALUE;
    DeRef(_12217);
    _12217 = NOVALUE;
    return _12242;
    // SubProg handle_opt pc: 556 op: BADRETURNF (43)
    ;
}


object _48cmd_parse(object _opts_21369, object _parse_options_21370, object _cmds_21371)
{
    object _cmd_21373 = NOVALUE;
    object _help_opts_21374 = NOVALUE;
    object _call_count_21375 = NOVALUE;
    object _add_help_rid_21376 = NOVALUE;
    object _validation_21377 = NOVALUE;
    object _has_extra_21378 = NOVALUE;
    object _use_at_21379 = NOVALUE;
    object _auto_help_21380 = NOVALUE;
    object _help_on_error_21381 = NOVALUE;
    object _po_21382 = NOVALUE;
    object _msg_inlined_crash_at_161_21406 = NOVALUE;
    object _msg_inlined_crash_at_225_21417 = NOVALUE;
    object _msg_inlined_crash_at_263_21424 = NOVALUE;
    object _fmt_inlined_crash_at_260_21423 = NOVALUE;
    object _parsed_opts_21429 = NOVALUE;
    object _new_1__tmp_at315_21432 = NOVALUE;
    object _new_inlined_new_at_315_21431 = NOVALUE;
    object _cmds_ok_21434 = NOVALUE;
// skipping _12271  name type: 0
// skipping _12270  name type: 0
    object _12269 = NOVALUE; // 21437 12269
// skipping _12268  name type: 0
// skipping _12267  name type: 0
// skipping _12266  name type: 0
    object _12265 = NOVALUE; // 21427 12265
// skipping _12264  name type: 0
// skipping _12263  name type: 0
    object _12262 = NOVALUE; // 21421 12262
    object _12261 = NOVALUE; // 21420 12261
// skipping _12258  name type: 0
// skipping _12257  name type: 0
// skipping _12256  name type: 0
    object _12255 = NOVALUE; // 21410 12255
// skipping _12254  name type: 0
// skipping _12253  name type: 0
// skipping _12252  name type: 0
    object _12251 = NOVALUE; // 21400 12251
    object _12248 = NOVALUE; // 21389 12248
// skipping _12247  name type: 0
    object _12246 = NOVALUE; // 21387 12246
// skipping _12245  name type: 0
    object _12244 = NOVALUE; // 21384 12244
// skipping _12243  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cmd_parse pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 5 op: STARTLINE (58)

    /** cmdline.e:1428		object add_help_rid = -1*/
    // SubProg cmd_parse pc: 7 op: ASSIGN (18)
    DeRef(_add_help_rid_21376);
    _add_help_rid_21376 = -1;
    // SubProg cmd_parse pc: 10 op: STARTLINE (58)

    /** cmdline.e:1429		integer validation = VALIDATE_ALL*/
    // SubProg cmd_parse pc: 12 op: ASSIGN_I (113)
    _validation_21377 = 2;
    // SubProg cmd_parse pc: 15 op: STARTLINE (58)

    /** cmdline.e:1430		integer has_extra = 0*/
    // SubProg cmd_parse pc: 17 op: ASSIGN_I (113)
    _has_extra_21378 = 0;
    // SubProg cmd_parse pc: 20 op: STARTLINE (58)

    /** cmdline.e:1431		integer use_at = 1*/
    // SubProg cmd_parse pc: 22 op: ASSIGN_I (113)
    _use_at_21379 = 1;
    // SubProg cmd_parse pc: 25 op: STARTLINE (58)

    /** cmdline.e:1432		integer auto_help = 1*/
    // SubProg cmd_parse pc: 27 op: ASSIGN_I (113)
    _auto_help_21380 = 1;
    // SubProg cmd_parse pc: 30 op: STARTLINE (58)

    /** cmdline.e:1433		integer help_on_error = 1*/
    // SubProg cmd_parse pc: 32 op: ASSIGN_I (113)
    _help_on_error_21381 = 1;
    // SubProg cmd_parse pc: 35 op: STARTLINE (58)

    /** cmdline.e:1435		integer po = 1*/
    // SubProg cmd_parse pc: 37 op: ASSIGN_I (113)
    _po_21382 = 1;
    // SubProg cmd_parse pc: 40 op: STARTLINE (58)

    /** cmdline.e:1436		if atom(parse_options) then*/
    // SubProg cmd_parse pc: 42 op: IS_AN_ATOM (67)
    _12244 = 0;
    // SubProg cmd_parse pc: 45 op: IF (20)
    if (_12244 == 0)
    {
        _12244 = NOVALUE;
        goto L1; // [45] 55
    }
    else{
        _12244 = NOVALUE;
    }
    // SubProg cmd_parse pc: 48 op: STARTLINE (58)

    /** cmdline.e:1437			parse_options = {parse_options}*/
    // SubProg cmd_parse pc: 50 op: RIGHT_BRACE_N (31)
    _0 = _parse_options_21370;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_parse_options_21370);
    ((intptr_t*)_2)[1] = _parse_options_21370;
    _parse_options_21370 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg cmd_parse pc: 54 op: NOP1 (159)
L1: // addr: 55 pc: 54 sub: 21367 op: 159
    // SubProg cmd_parse pc: 55 op: STARTLINE (58)

    /** cmdline.e:1441		while po <= length(parse_options) do*/
    // SubProg cmd_parse pc: 57 op: NOP2 (110)
    // SubProg cmd_parse pc: 59 op: NOPWHILE (158)
L2: // addr: 60 pc: 59 sub: 21367 op: 158
    // SubProg cmd_parse pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_parse_options_21370)){
            _12246 = SEQ_PTR(_parse_options_21370)->length;
    }
    else {
        _12246 = 1;
    }
    // SubProg cmd_parse pc: 63 op: LESSEQ_IFW_I (123)
    if (_po_21382 > _12246)
    goto L3; // [63] 296
    // SubProg cmd_parse pc: 67 op: STARTLINE (58)

    /** cmdline.e:1442			switch parse_options[po] do*/
    // SubProg cmd_parse pc: 69 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_parse_options_21370);
    _12248 = (object)*(((s1_ptr)_2)->base + _po_21382);
    // SubProg cmd_parse pc: 73 op: SWITCH_I (193)
    if (IS_SEQUENCE(_12248) ){
        goto L4; // [73] 249
    }
    if(!IS_ATOM_INT(_12248)){
        if( (DBL_PTR(_12248)->dbl != (eudouble) ((object) DBL_PTR(_12248)->dbl) ) ){
            goto L4; // [73] 249
        }
        _0 = (object) DBL_PTR(_12248)->dbl;
    }
    else {
        _0 = _12248;
    };
    _12248 = NOVALUE;
    switch ( _0 ){ 
        // SubProg cmd_parse pc: 78 op: STARTLINE (58)

        /** cmdline.e:1444				case NO_HELP then                         auto_help = 0*/
        // SubProg cmd_parse pc: 80 op: CASE (186)
        case 9:
        // SubProg cmd_parse pc: 82 op: ASSIGN_I (113)
        _auto_help_21380 = 0;
        // SubProg cmd_parse pc: 85 op: ELSE (23)
        goto L5; // [85] 285
        // SubProg cmd_parse pc: 87 op: STARTLINE (58)

        /** cmdline.e:1445				case VALIDATE_ALL then                    validation = VALIDATE_ALL*/
        // SubProg cmd_parse pc: 89 op: CASE (186)
        case 2:
        // SubProg cmd_parse pc: 91 op: ASSIGN_I (113)
        _validation_21377 = 2;
        // SubProg cmd_parse pc: 94 op: ELSE (23)
        goto L5; // [94] 285
        // SubProg cmd_parse pc: 96 op: STARTLINE (58)

        /** cmdline.e:1446				case NO_VALIDATION then                   validation = NO_VALIDATION*/
        // SubProg cmd_parse pc: 98 op: CASE (186)
        case 3:
        // SubProg cmd_parse pc: 100 op: ASSIGN_I (113)
        _validation_21377 = 3;
        // SubProg cmd_parse pc: 103 op: ELSE (23)
        goto L5; // [103] 285
        // SubProg cmd_parse pc: 105 op: STARTLINE (58)

        /** cmdline.e:1447				case NO_VALIDATION_AFTER_FIRST_EXTRA then validation = NO_VALIDATION_AFTER_FIRST_EXTRA*/
        // SubProg cmd_parse pc: 107 op: CASE (186)
        case 4:
        // SubProg cmd_parse pc: 109 op: ASSIGN_I (113)
        _validation_21377 = 4;
        // SubProg cmd_parse pc: 112 op: ELSE (23)
        goto L5; // [112] 285
        // SubProg cmd_parse pc: 114 op: STARTLINE (58)

        /** cmdline.e:1448				case NO_AT_EXPANSION then                 use_at = 0*/
        // SubProg cmd_parse pc: 116 op: CASE (186)
        case 7:
        // SubProg cmd_parse pc: 118 op: ASSIGN_I (113)
        _use_at_21379 = 0;
        // SubProg cmd_parse pc: 121 op: ELSE (23)
        goto L5; // [121] 285
        // SubProg cmd_parse pc: 123 op: STARTLINE (58)

        /** cmdline.e:1449				case AT_EXPANSION then                    use_at = 1*/
        // SubProg cmd_parse pc: 125 op: CASE (186)
        case 6:
        // SubProg cmd_parse pc: 127 op: ASSIGN_I (113)
        _use_at_21379 = 1;
        // SubProg cmd_parse pc: 130 op: ELSE (23)
        goto L5; // [130] 285
        // SubProg cmd_parse pc: 132 op: STARTLINE (58)

        /** cmdline.e:1451				case HELP_RID then*/
        // SubProg cmd_parse pc: 134 op: CASE (186)
        case 1:
        // SubProg cmd_parse pc: 136 op: STARTLINE (58)

        /** cmdline.e:1452					if po < length(parse_options) then*/
        // SubProg cmd_parse pc: 138 op: LENGTH (42)
        if (IS_SEQUENCE(_parse_options_21370)){
                _12251 = SEQ_PTR(_parse_options_21370)->length;
        }
        else {
            _12251 = 1;
        }
        // SubProg cmd_parse pc: 141 op: LESS_IFW_I (119)
        if (_po_21382 >= _12251)
        goto L6; // [141] 160
        // SubProg cmd_parse pc: 145 op: STARTLINE (58)

        /** cmdline.e:1453						po += 1*/
        // SubProg cmd_parse pc: 147 op: PLUS1_I (117)
        _po_21382 = _po_21382 + 1;
        // SubProg cmd_parse pc: 151 op: STARTLINE (58)

        /** cmdline.e:1454						add_help_rid = parse_options[po]*/
        // SubProg cmd_parse pc: 153 op: RHS_SUBS_CHECK (92)
        DeRef(_add_help_rid_21376);
        _2 = (object)SEQ_PTR(_parse_options_21370);
        _add_help_rid_21376 = (object)*(((s1_ptr)_2)->base + _po_21382);
        Ref(_add_help_rid_21376);
        // SubProg cmd_parse pc: 157 op: ELSE (23)
        goto L5; // [157] 285
        // SubProg cmd_parse pc: 159 op: NOP1 (159)
L6: // addr: 160 pc: 159 sub: 21367 op: 159
        // SubProg cmd_parse pc: 160 op: STARTLINE (58)

        /** cmdline.e:1456						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/
        // SubProg cmd_parse pc: 162 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 164 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_161_21406);
        _msg_inlined_crash_at_161_21406 = EPrintf(-9999999, _11798, _5);
        // SubProg cmd_parse pc: 168 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 170 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_161_21406);
        // SubProg cmd_parse pc: 173 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 175 op: ELSE (23)
        goto L7; // [175] 178
        // SubProg cmd_parse pc: 177 op: NOP1 (159)
L7: // addr: 178 pc: 177 sub: 21367 op: 159
        // SubProg cmd_parse pc: 178 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 161

// block var msg_inlined_crash_at_161_21406
        DeRefi(_msg_inlined_crash_at_161_21406);
        _msg_inlined_crash_at_161_21406 = NOVALUE;
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
        _help_on_error_21381 = 0;
        // SubProg cmd_parse pc: 192 op: ELSE (23)
        goto L5; // [192] 285
        // SubProg cmd_parse pc: 194 op: STARTLINE (58)

        /** cmdline.e:1463				case PAUSE_MSG then*/
        // SubProg cmd_parse pc: 196 op: CASE (186)
        case 8:
        // SubProg cmd_parse pc: 198 op: STARTLINE (58)

        /** cmdline.e:1464					if po < length(parse_options) then*/
        // SubProg cmd_parse pc: 200 op: LENGTH (42)
        if (IS_SEQUENCE(_parse_options_21370)){
                _12255 = SEQ_PTR(_parse_options_21370)->length;
        }
        else {
            _12255 = 1;
        }
        // SubProg cmd_parse pc: 203 op: LESS_IFW_I (119)
        if (_po_21382 >= _12255)
        goto L8; // [203] 224
        // SubProg cmd_parse pc: 207 op: STARTLINE (58)

        /** cmdline.e:1465						po += 1*/
        // SubProg cmd_parse pc: 209 op: PLUS1_I (117)
        _po_21382 = _po_21382 + 1;
        // SubProg cmd_parse pc: 213 op: STARTLINE (58)

        /** cmdline.e:1466						pause_msg = parse_options[po]*/
        // SubProg cmd_parse pc: 215 op: RHS_SUBS_CHECK (92)
        DeRef(_48pause_msg_20240);
        _2 = (object)SEQ_PTR(_parse_options_21370);
        _48pause_msg_20240 = (object)*(((s1_ptr)_2)->base + _po_21382);
        Ref(_48pause_msg_20240);
        // SubProg cmd_parse pc: 219 op: SEQUENCE_CHECK (97)
        // SubProg cmd_parse pc: 221 op: ELSE (23)
        goto L5; // [221] 285
        // SubProg cmd_parse pc: 223 op: NOP1 (159)
L8: // addr: 224 pc: 223 sub: 21367 op: 159
        // SubProg cmd_parse pc: 224 op: STARTLINE (58)

        /** cmdline.e:1468						error:crash("PAUSE_MSG was given to cmd_parse with no actual message text")*/
        // SubProg cmd_parse pc: 226 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 228 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_225_21417);
        _msg_inlined_crash_at_225_21417 = EPrintf(-9999999, _12259, _5);
        // SubProg cmd_parse pc: 232 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 234 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_225_21417);
        // SubProg cmd_parse pc: 237 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 239 op: ELSE (23)
        goto L9; // [239] 242
        // SubProg cmd_parse pc: 241 op: NOP1 (159)
L9: // addr: 242 pc: 241 sub: 21367 op: 159
        // SubProg cmd_parse pc: 242 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 225

// block var msg_inlined_crash_at_225_21417
        DeRefi(_msg_inlined_crash_at_225_21417);
        _msg_inlined_crash_at_225_21417 = NOVALUE;
        // SubProg cmd_parse pc: 244 op: NOP1 (159)
        // SubProg cmd_parse pc: 245 op: ELSE (23)
        goto L5; // [245] 285
        // SubProg cmd_parse pc: 247 op: STARTLINE (58)

        /** cmdline.e:1471				case else*/
        // SubProg cmd_parse pc: 249 op: CASE (186)
        default:
L4: // addr: 249 pc: 249 sub: 21367 op: 186
        // SubProg cmd_parse pc: 251 op: STARTLINE (58)

        /** cmdline.e:1472					error:crash(sprintf("Unrecognised cmdline PARSE OPTION - %d", parse_options[po]) )*/
        // SubProg cmd_parse pc: 253 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_parse_options_21370);
        _12261 = (object)*(((s1_ptr)_2)->base + _po_21382);
        // SubProg cmd_parse pc: 257 op: SPRINTF (53)
        _12262 = EPrintf(-9999999, _12260, _12261);
        _12261 = NOVALUE;
        // SubProg cmd_parse pc: 261 op: ASSIGN (18)
        DeRefi(_fmt_inlined_crash_at_260_21423);
        _fmt_inlined_crash_at_260_21423 = _12262;
        _12262 = NOVALUE;
        // SubProg cmd_parse pc: 264 op: SEQUENCE_CHECK (97)
        // SubProg cmd_parse pc: 266 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 268 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_263_21424);
        _msg_inlined_crash_at_263_21424 = EPrintf(-9999999, _fmt_inlined_crash_at_260_21423, _5);
        // SubProg cmd_parse pc: 272 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 274 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_263_21424);
        // SubProg cmd_parse pc: 277 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 279 op: ELSE (23)
        goto LA; // [279] 282
        // SubProg cmd_parse pc: 281 op: NOP1 (159)
LA: // addr: 282 pc: 281 sub: 21367 op: 159
        // SubProg cmd_parse pc: 282 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 260

// block var fmt_inlined_crash_at_260_21423
        DeRefi(_fmt_inlined_crash_at_260_21423);
        _fmt_inlined_crash_at_260_21423 = NOVALUE;

// block var msg_inlined_crash_at_263_21424
        DeRefi(_msg_inlined_crash_at_263_21424);
        _msg_inlined_crash_at_263_21424 = NOVALUE;
        // SubProg cmd_parse pc: 284 op: NOPSWITCH (187)
    ;}L5: // addr: 285 pc: 284 sub: 21367 op: 187
    // SubProg cmd_parse pc: 285 op: STARTLINE (58)

    /** cmdline.e:1475			po += 1*/
    // SubProg cmd_parse pc: 287 op: PLUS1_I (117)
    _po_21382 = _po_21382 + 1;
    // SubProg cmd_parse pc: 291 op: STARTLINE (58)

    /** cmdline.e:1476		end while*/
    // SubProg cmd_parse pc: 293 op: ENDWHILE (22)
    goto L2; // [293] 60
    // SubProg cmd_parse pc: 295 op: NOP1 (159)
L3: // addr: 296 pc: 295 sub: 21367 op: 159
    // SubProg cmd_parse pc: 296 op: STARTLINE (58)

    /** cmdline.e:1478		opts = standardize_opts(opts, auto_help)*/
    // SubProg cmd_parse pc: 298 op: PROC (27)
    RefDS(_opts_21369);
    _0 = _opts_21369;
    _opts_21369 = _48standardize_opts(_opts_21369, _auto_help_21380);
    DeRefDS(_0);
    // SubProg cmd_parse pc: 303 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 305 op: STARTLINE (58)

    /** cmdline.e:1479		call_count = repeat(0, length(opts))*/
    // SubProg cmd_parse pc: 307 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_21369)){
            _12265 = SEQ_PTR(_opts_21369)->length;
    }
    else {
        _12265 = 1;
    }
    // SubProg cmd_parse pc: 310 op: REPEAT (32)
    DeRef(_call_count_21375);
    _call_count_21375 = Repeat(0, _12265);
    _12265 = NOVALUE;
    // SubProg cmd_parse pc: 314 op: STARTLINE (58)

    /** cmdline.e:1481		map:map parsed_opts = map:new()*/
    // SubProg cmd_parse pc: 316 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg cmd_parse pc: 318 op: PROC (27)
    _0 = _new_1__tmp_at315_21432;
    _new_1__tmp_at315_21432 = _28new_map_seq(8);
    DeRef(_0);
    // SubProg cmd_parse pc: 322 op: PROC (27)
    Ref(_new_1__tmp_at315_21432);
    _0 = _parsed_opts_21429;
    _parsed_opts_21429 = _29malloc(_new_1__tmp_at315_21432, 1);
    DeRef(_0);
    // SubProg cmd_parse pc: 327 op: NOP1 (159)
    // SubProg cmd_parse pc: 328 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from cmd_parse @ 315

// block var new_1__tmp_at315_21432
    DeRef(_new_1__tmp_at315_21432);
    _new_1__tmp_at315_21432 = NOVALUE;
    // SubProg cmd_parse pc: 330 op: STARTLINE (58)

    /** cmdline.e:1482		map:put(parsed_opts, EXTRAS, {})*/
    // SubProg cmd_parse pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg cmd_parse pc: 334 op: PROC (27)
    Ref(_parsed_opts_21429);
    RefDS(_48EXTRAS_20229);
    RefDS(_5);
    _28put(_parsed_opts_21429, _48EXTRAS_20229, _5, 1, 0);
    // SubProg cmd_parse pc: 341 op: STARTLINE (58)

    /** cmdline.e:1485		help_opts = get_help_options( opts )*/
    // SubProg cmd_parse pc: 343 op: PROC (27)
    RefDS(_opts_21369);
    _0 = _help_opts_21374;
    _help_opts_21374 = _48get_help_options(_opts_21369);
    DeRef(_0);
    // SubProg cmd_parse pc: 347 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 349 op: STARTLINE (58)

    /** cmdline.e:1487		object cmds_ok = parse_commands( cmds, opts, parsed_opts, help_opts, add_help_rid, parse_options, */
    // SubProg cmd_parse pc: 351 op: PROC (27)
    RefDS(_cmds_21371);
    RefDS(_opts_21369);
    Ref(_parsed_opts_21429);
    RefDS(_help_opts_21374);
    Ref(_add_help_rid_21376);
    Ref(_parse_options_21370);
    RefDS(_call_count_21375);
    _0 = _cmds_ok_21434;
    _cmds_ok_21434 = _48parse_commands(_cmds_21371, _opts_21369, _parsed_opts_21429, _help_opts_21374, _add_help_rid_21376, _parse_options_21370, _use_at_21379, _validation_21377, _has_extra_21378, _call_count_21375, _help_on_error_21381, _auto_help_21380);
    DeRef(_0);
    // SubProg cmd_parse pc: 366 op: STARTLINE (58)

    /** cmdline.e:1489		if atom( cmds_ok ) then*/
    // SubProg cmd_parse pc: 368 op: IS_AN_ATOM (67)
    _12269 = IS_ATOM(_cmds_ok_21434);
    // SubProg cmd_parse pc: 371 op: IF (20)
    if (_12269 == 0)
    {
        _12269 = NOVALUE;
        goto LB; // [371] 381
    }
    else{
        _12269 = NOVALUE;
    }
    // SubProg cmd_parse pc: 374 op: STARTLINE (58)

    /** cmdline.e:1490			return 0*/
    // SubProg cmd_parse pc: 376 op: RETURNF (28)

// Exiting block BLOCK: cmd_parse

// block var opts_21369
    DeRefDS(_opts_21369);

// block var parse_options_21370
    DeRef(_parse_options_21370);

// block var cmds_21371
    DeRefDS(_cmds_21371);

// block var help_opts_21374
    DeRefDS(_help_opts_21374);

// block var call_count_21375
    DeRefDS(_call_count_21375);

// block var add_help_rid_21376
    DeRef(_add_help_rid_21376);

// block var validation_21377

// block var has_extra_21378

// block var use_at_21379

// block var auto_help_21380

// block var help_on_error_21381

// block var po_21382

// block var parsed_opts_21429
    DeRef(_parsed_opts_21429);

// block var cmds_ok_21434
    DeRef(_cmds_ok_21434);
    return 0;
    // SubProg cmd_parse pc: 380 op: NOP1 (159)
LB: // addr: 381 pc: 380 sub: 21367 op: 159
    // SubProg cmd_parse pc: 381 op: STARTLINE (58)

    /** cmdline.e:1492		cmds       = cmds_ok[1]*/
    // SubProg cmd_parse pc: 383 op: RHS_SUBS_CHECK (92)
    DeRefDS(_cmds_21371);
    _2 = (object)SEQ_PTR(_cmds_ok_21434);
    _cmds_21371 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_cmds_21371);
    // SubProg cmd_parse pc: 387 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 389 op: STARTLINE (58)

    /** cmdline.e:1493		call_count = cmds_ok[2]*/
    // SubProg cmd_parse pc: 391 op: RHS_SUBS_CHECK (92)
    DeRef(_call_count_21375);
    _2 = (object)SEQ_PTR(_cmds_ok_21434);
    _call_count_21375 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_21375);
    // SubProg cmd_parse pc: 395 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 397 op: STARTLINE (58)

    /** cmdline.e:1496		check_mandatory( opts, parsed_opts, add_help_rid, cmds, parse_options, help_on_error, auto_help )*/
    // SubProg cmd_parse pc: 399 op: PROC (27)
    RefDS(_opts_21369);
    Ref(_parsed_opts_21429);
    Ref(_add_help_rid_21376);
    RefDS(_cmds_21371);
    Ref(_parse_options_21370);
    _48check_mandatory(_opts_21369, _parsed_opts_21429, _add_help_rid_21376, _cmds_21371, _parse_options_21370, _help_on_error_21381, _auto_help_21380);
    // SubProg cmd_parse pc: 408 op: STARTLINE (58)

    /** cmdline.e:1498		return parsed_opts*/
    // SubProg cmd_parse pc: 410 op: RETURNF (28)

// Exiting block BLOCK: cmd_parse

// block var opts_21369
    DeRefDS(_opts_21369);

// block var parse_options_21370
    DeRef(_parse_options_21370);

// block var cmds_21371
    DeRefDS(_cmds_21371);

// block var help_opts_21374
    DeRef(_help_opts_21374);

// block var call_count_21375
    DeRefDS(_call_count_21375);

// block var add_help_rid_21376
    DeRef(_add_help_rid_21376);

// block var validation_21377

// block var has_extra_21378

// block var use_at_21379

// block var auto_help_21380

// block var help_on_error_21381

// block var po_21382

// block var cmds_ok_21434
    DeRef(_cmds_ok_21434);
    return _parsed_opts_21429;
    // SubProg cmd_parse pc: 414 op: BADRETURNF (43)
    ;
}


object _48build_commandline(object _cmds_21442)
{
    object _12275 = NOVALUE; // 21446 12275
    object _12274 = NOVALUE; // 21445 12274
    object _12272 = NOVALUE; // 21443 12272
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg build_commandline pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg build_commandline pc: 3 op: STARTLINE (58)

    /** cmdline.e:1551		return stdseq:flatten( text:quote( cmds,,'\\'," " ), " ")*/
    // SubProg build_commandline pc: 5 op: RIGHT_BRACE_2 (85)
    RefDS(_5550);
    RefDS(_5550);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5550;
    ((intptr_t *)_2)[2] = _5550;
    _12272 = MAKE_SEQ(_1);
    // SubProg build_commandline pc: 9 op: PROC (27)
    RefDS(_cmds_21442);
    RefDS(_12273);
    _12274 = _15quote(_cmds_21442, _12272, 92, _12273);
    _12272 = NOVALUE;
    // SubProg build_commandline pc: 16 op: PROC (27)
    RefDS(_12273);
    _12275 = _23flatten(_12274, _12273);
    _12274 = NOVALUE;
    // SubProg build_commandline pc: 21 op: RETURNF (28)

// Exiting block BLOCK: build_commandline

// block var cmds_21442
    DeRefDS(_cmds_21442);
    return _12275;
    // SubProg build_commandline pc: 25 op: BADRETURNF (43)
    ;
}



// 0x1B7FFFE0
