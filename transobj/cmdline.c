// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _4local_abort(object _lvl_14189)
{
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14194 = NOVALUE;
// skipping _7822  name type: 0
    object _7821 = NOVALUE; // 14191 7821
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg local_abort pc: 1 op: INTEGER_CHECK (96)
    // SubProg local_abort pc: 3 op: STARTLINE (58)

    /** cmdline.e:171		if length(pause_msg) != 0 then*/
    // SubProg local_abort pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg local_abort pc: 7 op: LENGTH (42)
    // Known sequence length:
    _7821 = 0;
    // SubProg local_abort pc: 10 op: NOTEQ_IFW_I (122)
    // SubProg local_abort pc: 45 op: STARTLINE (58)

    /** cmdline.e:175		abort(lvl)*/
    // SubProg local_abort pc: 47 op: ABORT (126)
    UserCleanup(_lvl_14189);
    // SubProg local_abort pc: 49 op: STARTLINE (58)

    /** cmdline.e:176	end procedure*/
    // SubProg local_abort pc: 51 op: RETURNP (29)

// Exiting block BLOCK: local_abort

// block var lvl_14189
    return;
    // SubProg local_abort pc: 54 op: BADRETURNF (43)
    ;
}


void _4check_for_bad_combos(object _opts_14197, object _opt1_14198, object _opt2_14199, object _error_message_14200)
{
    object _msg_inlined_crash_at_38_14208 = NOVALUE;
    object _7826 = NOVALUE; // 14206 7826
    object _7825 = NOVALUE; // 14205 7825
    object _7824 = NOVALUE; // 14203 7824
    object _7823 = NOVALUE; // 14202 7823
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_bad_combos pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_for_bad_combos pc: 3 op: INTEGER_CHECK (96)
    // SubProg check_for_bad_combos pc: 5 op: INTEGER_CHECK (96)
    // SubProg check_for_bad_combos pc: 7 op: SEQUENCE_CHECK (97)
    // SubProg check_for_bad_combos pc: 9 op: STARTLINE (58)

    /** cmdline.e:180		if find( opt1, opts[OPTIONS]) then*/
    // SubProg check_for_bad_combos pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_14197);
    _7823 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg check_for_bad_combos pc: 15 op: FIND_FROM (176)
    _7824 = find_from(_opt1_14198, _7823, 1);
    _7823 = NOVALUE;
    // SubProg check_for_bad_combos pc: 20 op: IF (20)
    if (_7824 == 0)
    {
        _7824 = NOVALUE;
        goto L1; // [20] 59
    }
    else{
        _7824 = NOVALUE;
    }
    // SubProg check_for_bad_combos pc: 23 op: STARTLINE (58)

    /** cmdline.e:181			if find( opt2, opts[OPTIONS]) then*/
    // SubProg check_for_bad_combos pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_14197);
    _7825 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg check_for_bad_combos pc: 29 op: FIND_FROM (176)
    _7826 = find_from(_opt2_14199, _7825, 1);
    _7825 = NOVALUE;
    // SubProg check_for_bad_combos pc: 34 op: IF (20)
    if (_7826 == 0)
    {
        _7826 = NOVALUE;
        goto L2; // [34] 58
    }
    else{
        _7826 = NOVALUE;
    }
    // SubProg check_for_bad_combos pc: 37 op: STARTLINE (58)

    /** cmdline.e:182				error:crash( error_message )*/
    // SubProg check_for_bad_combos pc: 39 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg check_for_bad_combos pc: 41 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_38_14208);
    _msg_inlined_crash_at_38_14208 = EPrintf(-9999999, _error_message_14200, _5);
    // SubProg check_for_bad_combos pc: 45 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg check_for_bad_combos pc: 47 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_38_14208);
    // SubProg check_for_bad_combos pc: 50 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg check_for_bad_combos pc: 52 op: ELSE (23)
    goto L3; // [52] 55
    // SubProg check_for_bad_combos pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 14195 op: 159
    // SubProg check_for_bad_combos pc: 55 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_bad_combos @ 38

// block var msg_inlined_crash_at_38_14208
    DeRefi(_msg_inlined_crash_at_38_14208);
    _msg_inlined_crash_at_38_14208 = NOVALUE;
    // SubProg check_for_bad_combos pc: 57 op: NOP1 (159)
L2: // addr: 58 pc: 57 sub: 14195 op: 159
    // SubProg check_for_bad_combos pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 14195 op: 159
    // SubProg check_for_bad_combos pc: 59 op: STARTLINE (58)

    /** cmdline.e:185	end procedure*/
    // SubProg check_for_bad_combos pc: 61 op: RETURNP (29)

// Exiting block BLOCK: check_for_bad_combos

// block var opts_14197
    DeRefDS(_opts_14197);

// block var opt1_14198

// block var opt2_14199

// block var error_message_14200
    DeRefDSi(_error_message_14200);
    return;
    // SubProg check_for_bad_combos pc: 64 op: BADRETURNF (43)
    ;
}


object _4has_duplicate(object _opts_14211, object _opt_14212, object _name_type_14213, object _start_from_14214)
{
    object _opt_name_14218 = NOVALUE;
    object _7834 = NOVALUE; // 14227 7834
    object _7833 = NOVALUE; // 14226 7833
    object _7832 = NOVALUE; // 14225 7832
    object _7831 = NOVALUE; // 14223 7831
    object _7830 = NOVALUE; // 14222 7830
// skipping _7829  name type: 0
    object _7828 = NOVALUE; // 14217 7828
    object _7827 = NOVALUE; // 14216 7827
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_duplicate pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 5 op: INTEGER_CHECK (96)
    // SubProg has_duplicate pc: 7 op: INTEGER_CHECK (96)
    // SubProg has_duplicate pc: 9 op: STARTLINE (58)

    /** cmdline.e:188		if sequence( opt[name_type] ) then*/
    // SubProg has_duplicate pc: 11 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14212);
    _7827 = (object)*(((s1_ptr)_2)->base + _name_type_14213);
    // SubProg has_duplicate pc: 15 op: IS_A_SEQUENCE (68)
    _7828 = IS_SEQUENCE(_7827);
    _7827 = NOVALUE;
    // SubProg has_duplicate pc: 18 op: IF (20)
    if (_7828 == 0)
    {
        _7828 = NOVALUE;
        goto L1; // [18] 77
    }
    else{
        _7828 = NOVALUE;
    }
    // SubProg has_duplicate pc: 21 op: STARTLINE (58)

    /** cmdline.e:189			sequence opt_name = opt[name_type]*/
    // SubProg has_duplicate pc: 23 op: RHS_SUBS (25)
    DeRef(_opt_name_14218);
    _2 = (object)SEQ_PTR(_opt_14212);
    _opt_name_14218 = (object)*(((s1_ptr)_2)->base + _name_type_14213);
    Ref(_opt_name_14218);
    // SubProg has_duplicate pc: 27 op: SEQUENCE_CHECK (97)
    // SubProg has_duplicate pc: 29 op: STARTLINE (58)

    /** cmdline.e:190			for i = start_from + 1 to length( opts ) do*/
    // SubProg has_duplicate pc: 31 op: PLUS1 (93)
    _7830 = _start_from_14214 + 1;
    // SubProg has_duplicate pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14211)){
            _7831 = SEQ_PTR(_opts_14211)->length;
    }
    else {
        _7831 = 1;
    }
    // SubProg has_duplicate pc: 38 op: FOR (21)
    {
        object _i_14221;
        _i_14221 = _7830;
L2: // addr: 45 pc: 38 sub: 14209 op: 21
        if (_i_14221 > _7831){
            goto L3; // [38] 76
        }
        // SubProg has_duplicate pc: 45 op: STARTLINE (58)

        /** cmdline.e:191				if equal( opt_name, opts[i][name_type] ) then*/
        // SubProg has_duplicate pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14211);
        _7832 = (object)*(((s1_ptr)_2)->base + _i_14221);
        // SubProg has_duplicate pc: 51 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7832);
        _7833 = (object)*(((s1_ptr)_2)->base + _name_type_14213);
        _7832 = NOVALUE;
        // SubProg has_duplicate pc: 55 op: EQUAL (153)
        if (_opt_name_14218 == _7833)
        _7834 = 1;
        else if (IS_ATOM_INT(_opt_name_14218) && IS_ATOM_INT(_7833))
        _7834 = 0;
        else
        _7834 = (compare(_opt_name_14218, _7833) == 0);
        _7833 = NOVALUE;
        // SubProg has_duplicate pc: 59 op: IF (20)
        if (_7834 == 0)
        {
            _7834 = NOVALUE;
            goto L4; // [59] 69
        }
        else{
            _7834 = NOVALUE;
        }
        // SubProg has_duplicate pc: 62 op: STARTLINE (58)

        /** cmdline.e:192					return 1*/
        // SubProg has_duplicate pc: 64 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var opt_name_14218
        DeRefDS(_opt_name_14218);

// Exiting block BLOCK: has_duplicate

// block var opts_14211
        DeRefDS(_opts_14211);

// block var opt_14212
        DeRefDS(_opt_14212);

// block var name_type_14213

// block var start_from_14214
        DeRef(_7830);
        _7830 = NOVALUE;
        return 1;
        // SubProg has_duplicate pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 14209 op: 159
        // SubProg has_duplicate pc: 69 op: STARTLINE (58)

        /** cmdline.e:194			end for*/
        // SubProg has_duplicate pc: 71 op: ENDFOR_INT_UP1 (54)
        _i_14221 = _i_14221 + 1;
        goto L2; // [71] 45
L3: // addr: 76 pc: 71 sub: 14209 op: 54
        ;
    }
    // SubProg has_duplicate pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 14209 op: 159
    // SubProg has_duplicate pc: 77 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var opt_name_14218
    DeRef(_opt_name_14218);
    _opt_name_14218 = NOVALUE;
    // SubProg has_duplicate pc: 79 op: STARTLINE (58)

    /** cmdline.e:196		return 0*/
    // SubProg has_duplicate pc: 81 op: RETURNF (28)

// Exiting block BLOCK: has_duplicate

// block var opts_14211
    DeRefDS(_opts_14211);

// block var opt_14212
    DeRefDS(_opt_14212);

// block var name_type_14213

// block var start_from_14214
    DeRef(_7830);
    _7830 = NOVALUE;
    return 0;
    // SubProg has_duplicate pc: 85 op: BADRETURNF (43)
    ;
}


void _4check_for_duplicates(object _opts_14230)
{
    object _opt_14234 = NOVALUE;
    object _msg_inlined_crash_at_49_14243 = NOVALUE;
    object _data_inlined_crash_at_46_14242 = NOVALUE;
    object _msg_inlined_crash_at_95_14251 = NOVALUE;
    object _data_inlined_crash_at_92_14250 = NOVALUE;
    object _7844 = NOVALUE; // 14248 7844
    object _7843 = NOVALUE; // 14247 7843
    object _7841 = NOVALUE; // 14245 7841
    object _7840 = NOVALUE; // 14240 7840
    object _7839 = NOVALUE; // 14239 7839
    object _7837 = NOVALUE; // 14237 7837
// skipping _7836  name type: 0
    object _7835 = NOVALUE; // 14233 7835
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_for_duplicates pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_for_duplicates pc: 3 op: STARTLINE (58)

    /** cmdline.e:201		for i = 1 to length(opts) do*/
    // SubProg check_for_duplicates pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14230)){
            _7835 = SEQ_PTR(_opts_14230)->length;
    }
    else {
        _7835 = 1;
    }
    // SubProg check_for_duplicates pc: 8 op: FOR_I (125)
    {
        object _i_14232;
        _i_14232 = 1;
L1: // addr: 15 pc: 8 sub: 14228 op: 125
        if (_i_14232 > _7835){
            goto L2; // [8] 125
        }
        // SubProg check_for_duplicates pc: 15 op: STARTLINE (58)

        /** cmdline.e:202			sequence opt*/
        // SubProg check_for_duplicates pc: 17 op: STARTLINE (58)

        /** cmdline.e:203			opt = opts[i]*/
        // SubProg check_for_duplicates pc: 19 op: RHS_SUBS (25)
        DeRef(_opt_14234);
        _2 = (object)SEQ_PTR(_opts_14230);
        _opt_14234 = (object)*(((s1_ptr)_2)->base + _i_14232);
        Ref(_opt_14234);
        // SubProg check_for_duplicates pc: 23 op: SEQUENCE_CHECK (97)
        // SubProg check_for_duplicates pc: 25 op: STARTLINE (58)

        /** cmdline.e:204			if has_duplicate( opts, opt, SHORTNAME, i ) then*/
        // SubProg check_for_duplicates pc: 27 op: PROC (27)
        RefDS(_opts_14230);
        RefDS(_opt_14234);
        _7837 = _4has_duplicate(_opts_14230, _opt_14234, 1, _i_14232);
        // SubProg check_for_duplicates pc: 34 op: IF (20)
        if (_7837 == 0) {
            DeRef(_7837);
            _7837 = NOVALUE;
            goto L3; // [34] 71
        }
        else {
            if (!IS_ATOM_INT(_7837) && DBL_PTR(_7837)->dbl == 0.0){
                DeRef(_7837);
                _7837 = NOVALUE;
                goto L3; // [34] 71
            }
            DeRef(_7837);
            _7837 = NOVALUE;
        }
        DeRef(_7837);
        _7837 = NOVALUE;
        // SubProg check_for_duplicates pc: 37 op: STARTLINE (58)

        /** cmdline.e:206				error:crash("cmd_opts: Duplicate Short Names (%s) are not allowed in an option record.\n",*/
        // SubProg check_for_duplicates pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14234);
        _7839 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg check_for_duplicates pc: 43 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_7839);
        ((intptr_t*)_2)[1] = _7839;
        _7840 = MAKE_SEQ(_1);
        _7839 = NOVALUE;
        // SubProg check_for_duplicates pc: 47 op: ASSIGN (18)
        DeRef(_data_inlined_crash_at_46_14242);
        _data_inlined_crash_at_46_14242 = _7840;
        _7840 = NOVALUE;
        // SubProg check_for_duplicates pc: 50 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg check_for_duplicates pc: 52 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_49_14243);
        _msg_inlined_crash_at_49_14243 = EPrintf(-9999999, _7838, _data_inlined_crash_at_46_14242);
        // SubProg check_for_duplicates pc: 56 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg check_for_duplicates pc: 58 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_49_14243);
        // SubProg check_for_duplicates pc: 61 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg check_for_duplicates pc: 63 op: ELSE (23)
        goto L4; // [63] 66
        // SubProg check_for_duplicates pc: 65 op: NOP1 (159)
L4: // addr: 66 pc: 65 sub: 14228 op: 159
        // SubProg check_for_duplicates pc: 66 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_duplicates @ 46

// block var data_inlined_crash_at_46_14242
        DeRef(_data_inlined_crash_at_46_14242);
        _data_inlined_crash_at_46_14242 = NOVALUE;

// block var msg_inlined_crash_at_49_14243
        DeRefi(_msg_inlined_crash_at_49_14243);
        _msg_inlined_crash_at_49_14243 = NOVALUE;
        // SubProg check_for_duplicates pc: 68 op: ELSE (23)
        goto L5; // [68] 116
        // SubProg check_for_duplicates pc: 70 op: NOP1 (159)
L3: // addr: 71 pc: 70 sub: 14228 op: 159
        // SubProg check_for_duplicates pc: 71 op: STARTLINE (58)

        /** cmdline.e:209			elsif has_duplicate( opts, opt, LONGNAME, i ) then*/
        // SubProg check_for_duplicates pc: 73 op: PROC (27)
        RefDS(_opts_14230);
        RefDS(_opt_14234);
        _7841 = _4has_duplicate(_opts_14230, _opt_14234, 2, _i_14232);
        // SubProg check_for_duplicates pc: 80 op: IF (20)
        if (_7841 == 0) {
            DeRef(_7841);
            _7841 = NOVALUE;
            goto L6; // [80] 115
        }
        else {
            if (!IS_ATOM_INT(_7841) && DBL_PTR(_7841)->dbl == 0.0){
                DeRef(_7841);
                _7841 = NOVALUE;
                goto L6; // [80] 115
            }
            DeRef(_7841);
            _7841 = NOVALUE;
        }
        DeRef(_7841);
        _7841 = NOVALUE;
        // SubProg check_for_duplicates pc: 83 op: STARTLINE (58)

        /** cmdline.e:211				error:crash("cmd_opts: Duplicate Long Names (%s) are not allowed in an option record.\n",*/
        // SubProg check_for_duplicates pc: 85 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14234);
        _7843 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg check_for_duplicates pc: 89 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_7843);
        ((intptr_t*)_2)[1] = _7843;
        _7844 = MAKE_SEQ(_1);
        _7843 = NOVALUE;
        // SubProg check_for_duplicates pc: 93 op: ASSIGN (18)
        DeRef(_data_inlined_crash_at_92_14250);
        _data_inlined_crash_at_92_14250 = _7844;
        _7844 = NOVALUE;
        // SubProg check_for_duplicates pc: 96 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg check_for_duplicates pc: 98 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_95_14251);
        _msg_inlined_crash_at_95_14251 = EPrintf(-9999999, _7842, _data_inlined_crash_at_92_14250);
        // SubProg check_for_duplicates pc: 102 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg check_for_duplicates pc: 104 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_95_14251);
        // SubProg check_for_duplicates pc: 107 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg check_for_duplicates pc: 109 op: ELSE (23)
        goto L7; // [109] 112
        // SubProg check_for_duplicates pc: 111 op: NOP1 (159)
L7: // addr: 112 pc: 111 sub: 14228 op: 159
        // SubProg check_for_duplicates pc: 112 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from check_for_duplicates @ 92

// block var data_inlined_crash_at_92_14250
        DeRef(_data_inlined_crash_at_92_14250);
        _data_inlined_crash_at_92_14250 = NOVALUE;

// block var msg_inlined_crash_at_95_14251
        DeRefi(_msg_inlined_crash_at_95_14251);
        _msg_inlined_crash_at_95_14251 = NOVALUE;
        // SubProg check_for_duplicates pc: 114 op: NOP1 (159)
L6: // addr: 115 pc: 114 sub: 14228 op: 159
        // SubProg check_for_duplicates pc: 115 op: NOP1 (159)
L5: // addr: 116 pc: 115 sub: 14228 op: 159
        // SubProg check_for_duplicates pc: 116 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var opt_14234
        DeRef(_opt_14234);
        _opt_14234 = NOVALUE;
        // SubProg check_for_duplicates pc: 118 op: STARTLINE (58)

        /** cmdline.e:214		end for*/
        // SubProg check_for_duplicates pc: 120 op: ENDFOR_INT_UP1 (54)
        _i_14232 = _i_14232 + 1;
        goto L1; // [120] 15
L2: // addr: 125 pc: 120 sub: 14228 op: 54
        ;
    }
    // SubProg check_for_duplicates pc: 125 op: STARTLINE (58)

    /** cmdline.e:216	end procedure*/
    // SubProg check_for_duplicates pc: 127 op: RETURNP (29)

// Exiting block BLOCK: check_for_duplicates

// block var opts_14230
    DeRefDS(_opts_14230);
    return;
    // SubProg check_for_duplicates pc: 130 op: BADRETURNF (43)
    ;
}


object _4update_opts(object _opts_14254)
{
    object _lExtras_14255 = NOVALUE;
    object _opt_14259 = NOVALUE;
    object _msg_inlined_crash_at_162_14292 = NOVALUE;
    object _msg_inlined_crash_at_323_14323 = NOVALUE;
    object _7915 = NOVALUE; // 14355 7915
    object _7914 = NOVALUE; // 14354 7914
    object _7913 = NOVALUE; // 14353 7913
    object _7912 = NOVALUE; // 14351 7912
    object _7911 = NOVALUE; // 14350 7911
    object _7910 = NOVALUE; // 14349 7910
    object _7909 = NOVALUE; // 14347 7909
    object _7908 = NOVALUE; // 14346 7908
    object _7907 = NOVALUE; // 14344 7907
    object _7906 = NOVALUE; // 14343 7906
    object _7905 = NOVALUE; // 14342 7905
    object _7904 = NOVALUE; // 14341 7904
    object _7903 = NOVALUE; // 14340 7903
    object _7902 = NOVALUE; // 14339 7902
// skipping _7901  name type: 0
    object _7900 = NOVALUE; // 14336 7900
// skipping _7899  name type: 0
    object _7898 = NOVALUE; // 14333 7898
    object _7897 = NOVALUE; // 14332 7897
    object _7896 = NOVALUE; // 14330 7896
    object _7895 = NOVALUE; // 14329 7895
// skipping _7889  name type: 0
    object _7888 = NOVALUE; // 14319 7888
    object _7887 = NOVALUE; // 14318 7887
    object _7886 = NOVALUE; // 14317 7886
    object _7885 = NOVALUE; // 14316 7885
    object _7884 = NOVALUE; // 14315 7884
    object _7883 = NOVALUE; // 14313 7883
    object _7882 = NOVALUE; // 14312 7882
    object _7881 = NOVALUE; // 14307 7881
    object _7879 = NOVALUE; // 14305 7879
    object _7878 = NOVALUE; // 14304 7878
    object _7877 = NOVALUE; // 14302 7877
    object _7876 = NOVALUE; // 14301 7876
    object _7875 = NOVALUE; // 14299 7875
    object _7874 = NOVALUE; // 14298 7874
    object _7873 = NOVALUE; // 14296 7873
    object _7872 = NOVALUE; // 14295 7872
// skipping _7870  name type: 0
    object _7869 = NOVALUE; // 14287 7869
    object _7868 = NOVALUE; // 14286 7868
    object _7867 = NOVALUE; // 14285 7867
    object _7866 = NOVALUE; // 14284 7866
    object _7865 = NOVALUE; // 14283 7865
    object _7864 = NOVALUE; // 14281 7864
    object _7863 = NOVALUE; // 14280 7863
    object _7862 = NOVALUE; // 14279 7862
    object _7861 = NOVALUE; // 14278 7861
    object _7860 = NOVALUE; // 14277 7860
    object _7859 = NOVALUE; // 14276 7859
    object _7858 = NOVALUE; // 14274 7858
    object _7857 = NOVALUE; // 14273 7857
    object _7856 = NOVALUE; // 14272 7856
    object _7855 = NOVALUE; // 14271 7855
    object _7854 = NOVALUE; // 14270 7854
    object _7853 = NOVALUE; // 14269 7853
// skipping _7852  name type: 0
    object _7851 = NOVALUE; // 14266 7851
    object _7850 = NOVALUE; // 14265 7850
    object _7849 = NOVALUE; // 14264 7849
// skipping _7848  name type: 0
    object _7847 = NOVALUE; // 14262 7847
// skipping _7846  name type: 0
    object _7845 = NOVALUE; // 14258 7845
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_opts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg update_opts pc: 3 op: STARTLINE (58)

    /** cmdline.e:223		integer lExtras = 0 -- Ensure that there is zero or one 'extras' record only.*/
    // SubProg update_opts pc: 5 op: ASSIGN_I (113)
    _lExtras_14255 = 0;
    // SubProg update_opts pc: 8 op: STARTLINE (58)

    /** cmdline.e:224		for i = 1 to length(opts) do*/
    // SubProg update_opts pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14254)){
            _7845 = SEQ_PTR(_opts_14254)->length;
    }
    else {
        _7845 = 1;
    }
    // SubProg update_opts pc: 13 op: FOR_I (125)
    {
        object _i_14257;
        _i_14257 = 1;
L1: // addr: 20 pc: 13 sub: 14252 op: 125
        if (_i_14257 > _7845){
            goto L2; // [13] 565
        }
        // SubProg update_opts pc: 20 op: STARTLINE (58)

        /** cmdline.e:225			sequence opt = opts[i]*/
        // SubProg update_opts pc: 22 op: RHS_SUBS (25)
        DeRef(_opt_14259);
        _2 = (object)SEQ_PTR(_opts_14254);
        _opt_14259 = (object)*(((s1_ptr)_2)->base + _i_14257);
        Ref(_opt_14259);
        // SubProg update_opts pc: 26 op: SEQUENCE_CHECK (97)
        // SubProg update_opts pc: 28 op: STARTLINE (58)

        /** cmdline.e:226			opts[i] = 0*/
        // SubProg update_opts pc: 30 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opts_14254);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14254 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_14257);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 34 op: STARTLINE (58)

        /** cmdline.e:228			if length(opt) < MAPNAME then*/
        // SubProg update_opts pc: 36 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_14259)){
                _7847 = SEQ_PTR(_opt_14259)->length;
        }
        else {
            _7847 = 1;
        }
        // SubProg update_opts pc: 39 op: LESS_IFW_I (119)
        if (_7847 >= 6)
        goto L3; // [39] 61
        // SubProg update_opts pc: 43 op: STARTLINE (58)

        /** cmdline.e:229				opt &= repeat(-1, MAPNAME - length(opt))*/
        // SubProg update_opts pc: 45 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_14259)){
                _7849 = SEQ_PTR(_opt_14259)->length;
        }
        else {
            _7849 = 1;
        }
        // SubProg update_opts pc: 48 op: MINUS (10)
        _7850 = 6 - _7849;
        _7849 = NOVALUE;
        // SubProg update_opts pc: 52 op: REPEAT (32)
        _7851 = Repeat(-1, _7850);
        _7850 = NOVALUE;
        // SubProg update_opts pc: 56 op: CONCAT (15)
        Concat((object_ptr)&_opt_14259, _opt_14259, _7851);
        DeRefDS(_7851);
        _7851 = NOVALUE;
        // SubProg update_opts pc: 60 op: NOP1 (159)
L3: // addr: 61 pc: 60 sub: 14252 op: 159
        // SubProg update_opts pc: 61 op: STARTLINE (58)

        /** cmdline.e:232			if sequence(opt[SHORTNAME]) and length(opt[SHORTNAME]) = 0 then*/
        // SubProg update_opts pc: 63 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7853 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 67 op: IS_A_SEQUENCE (68)
        _7854 = IS_SEQUENCE(_7853);
        _7853 = NOVALUE;
        // SubProg update_opts pc: 70 op: SC1_AND_IF (146)
        if (_7854 == 0) {
            goto L4; // [70] 96
        }
        // SubProg update_opts pc: 74 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7856 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 78 op: LENGTH (42)
        if (IS_SEQUENCE(_7856)){
                _7857 = SEQ_PTR(_7856)->length;
        }
        else {
            _7857 = 1;
        }
        _7856 = NOVALUE;
        // SubProg update_opts pc: 81 op: EQUALS (3)
        _7858 = (_7857 == 0);
        _7857 = NOVALUE;
        // SubProg update_opts pc: 85 op: NOP1 (159)
        // SubProg update_opts pc: 86 op: IF (20)
        if (_7858 == 0)
        {
            DeRef(_7858);
            _7858 = NOVALUE;
            goto L4; // [86] 96
        }
        else{
            DeRef(_7858);
            _7858 = NOVALUE;
        }
        // SubProg update_opts pc: 89 op: STARTLINE (58)

        /** cmdline.e:233				opt[SHORTNAME] = 0*/
        // SubProg update_opts pc: 91 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 95 op: NOP1 (159)
L4: // addr: 96 pc: 95 sub: 14252 op: 159
        // SubProg update_opts pc: 96 op: STARTLINE (58)

        /** cmdline.e:236			if sequence(opt[LONGNAME]) and length(opt[LONGNAME]) = 0 then*/
        // SubProg update_opts pc: 98 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7859 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 102 op: IS_A_SEQUENCE (68)
        _7860 = IS_SEQUENCE(_7859);
        _7859 = NOVALUE;
        // SubProg update_opts pc: 105 op: SC1_AND_IF (146)
        if (_7860 == 0) {
            goto L5; // [105] 131
        }
        // SubProg update_opts pc: 109 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7862 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 113 op: LENGTH (42)
        if (IS_SEQUENCE(_7862)){
                _7863 = SEQ_PTR(_7862)->length;
        }
        else {
            _7863 = 1;
        }
        _7862 = NOVALUE;
        // SubProg update_opts pc: 116 op: EQUALS (3)
        _7864 = (_7863 == 0);
        _7863 = NOVALUE;
        // SubProg update_opts pc: 120 op: NOP1 (159)
        // SubProg update_opts pc: 121 op: IF (20)
        if (_7864 == 0)
        {
            DeRef(_7864);
            _7864 = NOVALUE;
            goto L5; // [121] 131
        }
        else{
            DeRef(_7864);
            _7864 = NOVALUE;
        }
        // SubProg update_opts pc: 124 op: STARTLINE (58)

        /** cmdline.e:237				opt[LONGNAME] = 0*/
        // SubProg update_opts pc: 126 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 130 op: NOP1 (159)
L5: // addr: 131 pc: 130 sub: 14252 op: 159
        // SubProg update_opts pc: 131 op: STARTLINE (58)

        /** cmdline.e:240			if atom(opt[LONGNAME]) and atom(opt[SHORTNAME]) then*/
        // SubProg update_opts pc: 133 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7865 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 137 op: IS_AN_ATOM (67)
        _7866 = IS_ATOM(_7865);
        _7865 = NOVALUE;
        // SubProg update_opts pc: 140 op: SC1_AND_IF (146)
        if (_7866 == 0) {
            goto L6; // [140] 212
        }
        // SubProg update_opts pc: 144 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7868 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 148 op: IS_AN_ATOM (67)
        _7869 = IS_ATOM(_7868);
        _7868 = NOVALUE;
        // SubProg update_opts pc: 151 op: NOP1 (159)
        // SubProg update_opts pc: 152 op: IF (20)
        if (_7869 == 0)
        {
            _7869 = NOVALUE;
            goto L6; // [152] 212
        }
        else{
            _7869 = NOVALUE;
        }
        // SubProg update_opts pc: 155 op: STARTLINE (58)

        /** cmdline.e:241				if lExtras != 0 then*/
        // SubProg update_opts pc: 157 op: NOTEQ_IFW_I (122)
        if (_lExtras_14255 == 0)
        goto L7; // [157] 184
        // SubProg update_opts pc: 161 op: STARTLINE (58)

        /** cmdline.e:242					error:crash("cmd_opts: There must be less than two 'extras' option records.\n")*/
        // SubProg update_opts pc: 163 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg update_opts pc: 165 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_162_14292);
        _msg_inlined_crash_at_162_14292 = EPrintf(-9999999, _7871, _5);
        // SubProg update_opts pc: 169 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg update_opts pc: 171 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_162_14292);
        // SubProg update_opts pc: 174 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg update_opts pc: 176 op: ELSE (23)
        goto L8; // [176] 179
        // SubProg update_opts pc: 178 op: NOP1 (159)
L8: // addr: 179 pc: 178 sub: 14252 op: 159
        // SubProg update_opts pc: 179 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from update_opts @ 162

// block var msg_inlined_crash_at_162_14292
        DeRefi(_msg_inlined_crash_at_162_14292);
        _msg_inlined_crash_at_162_14292 = NOVALUE;
        // SubProg update_opts pc: 181 op: ELSE (23)
        goto L9; // [181] 211
        // SubProg update_opts pc: 183 op: NOP1 (159)
L7: // addr: 184 pc: 183 sub: 14252 op: 159
        // SubProg update_opts pc: 184 op: STARTLINE (58)

        /** cmdline.e:244					lExtras = i*/
        // SubProg update_opts pc: 186 op: ASSIGN_I (113)
        _lExtras_14255 = _i_14257;
        // SubProg update_opts pc: 189 op: STARTLINE (58)

        /** cmdline.e:245					if atom(opt[MAPNAME]) then*/
        // SubProg update_opts pc: 191 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7872 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 195 op: IS_AN_ATOM (67)
        _7873 = IS_ATOM(_7872);
        _7872 = NOVALUE;
        // SubProg update_opts pc: 198 op: IF (20)
        if (_7873 == 0)
        {
            _7873 = NOVALUE;
            goto LA; // [198] 210
        }
        else{
            _7873 = NOVALUE;
        }
        // SubProg update_opts pc: 201 op: STARTLINE (58)

        /** cmdline.e:246						opt[MAPNAME] = EXTRAS*/
        // SubProg update_opts pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_opts pc: 205 op: ASSIGN_SUBS (16)
        RefDS(_4EXTRAS_14175);
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4EXTRAS_14175;
        DeRef(_1);
        // SubProg update_opts pc: 209 op: NOP1 (159)
LA: // addr: 210 pc: 209 sub: 14252 op: 159
        // SubProg update_opts pc: 210 op: NOP1 (159)
L9: // addr: 211 pc: 210 sub: 14252 op: 159
        // SubProg update_opts pc: 211 op: NOP1 (159)
L6: // addr: 212 pc: 211 sub: 14252 op: 159
        // SubProg update_opts pc: 212 op: STARTLINE (58)

        /** cmdline.e:251			if atom(opt[DESCRIPTION]) then*/
        // SubProg update_opts pc: 214 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7874 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg update_opts pc: 218 op: IS_AN_ATOM (67)
        _7875 = IS_ATOM(_7874);
        _7874 = NOVALUE;
        // SubProg update_opts pc: 221 op: IF (20)
        if (_7875 == 0)
        {
            _7875 = NOVALUE;
            goto LB; // [221] 231
        }
        else{
            _7875 = NOVALUE;
        }
        // SubProg update_opts pc: 224 op: STARTLINE (58)

        /** cmdline.e:252				opt[DESCRIPTION] = ""*/
        // SubProg update_opts pc: 226 op: ASSIGN_SUBS (16)
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
        // SubProg update_opts pc: 230 op: NOP1 (159)
LB: // addr: 231 pc: 230 sub: 14252 op: 159
        // SubProg update_opts pc: 231 op: STARTLINE (58)

        /** cmdline.e:256			if atom(opt[OPTIONS]) then*/
        // SubProg update_opts pc: 233 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7876 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 237 op: IS_AN_ATOM (67)
        _7877 = IS_ATOM(_7876);
        _7876 = NOVALUE;
        // SubProg update_opts pc: 240 op: IF (20)
        if (_7877 == 0)
        {
            _7877 = NOVALUE;
            goto LC; // [240] 279
        }
        else{
            _7877 = NOVALUE;
        }
        // SubProg update_opts pc: 243 op: STARTLINE (58)

        /** cmdline.e:257				if equal(opt[OPTIONS], HAS_PARAMETER) then*/
        // SubProg update_opts pc: 245 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7878 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 249 op: EQUAL (153)
        if (_7878 == 112)
        _7879 = 1;
        else if (IS_ATOM_INT(_7878) && IS_ATOM_INT(112))
        _7879 = 0;
        else
        _7879 = (compare(_7878, 112) == 0);
        _7878 = NOVALUE;
        // SubProg update_opts pc: 253 op: IF (20)
        if (_7879 == 0)
        {
            _7879 = NOVALUE;
            goto LD; // [253] 269
        }
        else{
            _7879 = NOVALUE;
        }
        // SubProg update_opts pc: 256 op: STARTLINE (58)

        /** cmdline.e:258					opt[OPTIONS] = {HAS_PARAMETER,"x"}*/
        // SubProg update_opts pc: 258 op: RIGHT_BRACE_2 (85)
        RefDS(_7880);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 112;
        ((intptr_t *)_2)[2] = _7880;
        _7881 = MAKE_SEQ(_1);
        // SubProg update_opts pc: 262 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7881;
        if( _1 != _7881 ){
            DeRef(_1);
        }
        _7881 = NOVALUE;
        // SubProg update_opts pc: 266 op: ELSE (23)
        goto LE; // [266] 383
        // SubProg update_opts pc: 268 op: NOP1 (159)
LD: // addr: 269 pc: 268 sub: 14252 op: 159
        // SubProg update_opts pc: 269 op: STARTLINE (58)

        /** cmdline.e:260					opt[OPTIONS] = {}*/
        // SubProg update_opts pc: 271 op: ASSIGN_SUBS (16)
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
        // SubProg update_opts pc: 275 op: NOP1 (159)
        // SubProg update_opts pc: 276 op: ELSE (23)
        goto LE; // [276] 383
        // SubProg update_opts pc: 278 op: NOP1 (159)
LC: // addr: 279 pc: 278 sub: 14252 op: 159
        // SubProg update_opts pc: 279 op: STARTLINE (58)

        /** cmdline.e:263				for j = 1 to length(opt[OPTIONS]) do*/
        // SubProg update_opts pc: 281 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7882 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg update_opts pc: 285 op: LENGTH (42)
        if (IS_SEQUENCE(_7882)){
                _7883 = SEQ_PTR(_7882)->length;
        }
        else {
            _7883 = 1;
        }
        _7882 = NOVALUE;
        // SubProg update_opts pc: 288 op: FOR_I (125)
        {
            object _j_14311;
            _j_14311 = 1;
LF: // addr: 295 pc: 288 sub: 14252 op: 125
            if (_j_14311 > _7883){
                goto L10; // [288] 350
            }
            // SubProg update_opts pc: 295 op: STARTLINE (58)

            /** cmdline.e:264					if find(opt[OPTIONS][j], opt[OPTIONS], j + 1) != 0 then*/
            // SubProg update_opts pc: 297 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_opt_14259);
            _7884 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg update_opts pc: 301 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7884);
            _7885 = (object)*(((s1_ptr)_2)->base + _j_14311);
            _7884 = NOVALUE;
            // SubProg update_opts pc: 305 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_opt_14259);
            _7886 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg update_opts pc: 309 op: PLUS1 (93)
            _7887 = _j_14311 + 1;
            // SubProg update_opts pc: 313 op: FIND_FROM (176)
            _7888 = find_from(_7885, _7886, _7887);
            _7885 = NOVALUE;
            _7886 = NOVALUE;
            _7887 = NOVALUE;
            // SubProg update_opts pc: 318 op: NOTEQ_IFW_I (122)
            if (_7888 == 0)
            goto L11; // [318] 343
            // SubProg update_opts pc: 322 op: STARTLINE (58)

            /** cmdline.e:265						error:crash("cmd_opts: Duplicate processing options are not allowed in an option record.\n")*/
            // SubProg update_opts pc: 324 op: STARTLINE (58)

            /** error.e:51		msg = sprintf(fmt, data)*/
            // SubProg update_opts pc: 326 op: SPRINTF (53)
            DeRefi(_msg_inlined_crash_at_323_14323);
            _msg_inlined_crash_at_323_14323 = EPrintf(-9999999, _7890, _5);
            // SubProg update_opts pc: 330 op: STARTLINE (58)

            /** error.e:52		machine_proc(M_CRASH, msg)*/
            // SubProg update_opts pc: 332 op: MACHINE_PROC (112)
            machine(67, _msg_inlined_crash_at_323_14323);
            // SubProg update_opts pc: 335 op: STARTLINE (58)

            /** error.e:53	end procedure*/
            // SubProg update_opts pc: 337 op: ELSE (23)
            goto L12; // [337] 340
            // SubProg update_opts pc: 339 op: NOP1 (159)
L12: // addr: 340 pc: 339 sub: 14252 op: 159
            // SubProg update_opts pc: 340 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from update_opts @ 323

// block var msg_inlined_crash_at_323_14323
            DeRefi(_msg_inlined_crash_at_323_14323);
            _msg_inlined_crash_at_323_14323 = NOVALUE;
            // SubProg update_opts pc: 342 op: NOP1 (159)
L11: // addr: 343 pc: 342 sub: 14252 op: 159
            // SubProg update_opts pc: 343 op: STARTLINE (58)

            /** cmdline.e:267				end for*/
            // SubProg update_opts pc: 345 op: ENDFOR_INT_UP1 (54)
            _j_14311 = _j_14311 + 1;
            goto LF; // [345] 295
L10: // addr: 350 pc: 345 sub: 14252 op: 54
            ;
        }
        // SubProg update_opts pc: 350 op: STARTLINE (58)

        /** cmdline.e:269				check_for_bad_combos( opt, HAS_PARAMETER, NO_PARAMETER, */
        // SubProg update_opts pc: 352 op: PROC (27)
        RefDS(_opt_14259);
        RefDS(_7891);
        _4check_for_bad_combos(_opt_14259, 112, 110, _7891);
        // SubProg update_opts pc: 358 op: STARTLINE (58)

        /** cmdline.e:272				check_for_bad_combos( opt, HAS_CASE, NO_CASE, */
        // SubProg update_opts pc: 360 op: PROC (27)
        RefDS(_opt_14259);
        RefDS(_7892);
        _4check_for_bad_combos(_opt_14259, 99, 105, _7892);
        // SubProg update_opts pc: 366 op: STARTLINE (58)

        /** cmdline.e:275				check_for_bad_combos( opt, MANDATORY, OPTIONAL, */
        // SubProg update_opts pc: 368 op: PROC (27)
        RefDS(_opt_14259);
        RefDS(_7893);
        _4check_for_bad_combos(_opt_14259, 109, 111, _7893);
        // SubProg update_opts pc: 374 op: STARTLINE (58)

        /** cmdline.e:278				check_for_bad_combos( opt, ONCE, MULTIPLE, */
        // SubProg update_opts pc: 376 op: PROC (27)
        RefDS(_opt_14259);
        RefDS(_7894);
        _4check_for_bad_combos(_opt_14259, 49, 42, _7894);
        // SubProg update_opts pc: 382 op: NOP1 (159)
LE: // addr: 383 pc: 382 sub: 14252 op: 159
        // SubProg update_opts pc: 383 op: STARTLINE (58)

        /** cmdline.e:283			if sequence(opt[CALLBACK]) then*/
        // SubProg update_opts pc: 385 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7895 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 389 op: IS_A_SEQUENCE (68)
        _7896 = IS_SEQUENCE(_7895);
        _7895 = NOVALUE;
        // SubProg update_opts pc: 392 op: IF (20)
        if (_7896 == 0)
        {
            _7896 = NOVALUE;
            goto L13; // [392] 404
        }
        else{
            _7896 = NOVALUE;
        }
        // SubProg update_opts pc: 395 op: STARTLINE (58)

        /** cmdline.e:284				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 397 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 401 op: ELSE (23)
        goto L14; // [401] 443
        // SubProg update_opts pc: 403 op: NOP1 (159)
L13: // addr: 404 pc: 403 sub: 14252 op: 159
        // SubProg update_opts pc: 404 op: STARTLINE (58)

        /** cmdline.e:285			elsif not integer(opt[CALLBACK]) then*/
        // SubProg update_opts pc: 406 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7897 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 410 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_7897))
        _7898 = 1;
        else if (IS_ATOM_DBL(_7897))
        _7898 = IS_ATOM_INT(DoubleToInt(_7897));
        else
        _7898 = 0;
        _7897 = NOVALUE;
        // SubProg update_opts pc: 413 op: NOT_IFW (108)
        if (_7898 != 0)
        goto L15; // [413] 425
        _7898 = NOVALUE;
        // SubProg update_opts pc: 416 op: STARTLINE (58)

        /** cmdline.e:286				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 418 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 422 op: ELSE (23)
        goto L14; // [422] 443
        // SubProg update_opts pc: 424 op: NOP1 (159)
L15: // addr: 425 pc: 424 sub: 14252 op: 159
        // SubProg update_opts pc: 425 op: STARTLINE (58)

        /** cmdline.e:287			elsif opt[CALLBACK] < 0 then*/
        // SubProg update_opts pc: 427 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7900 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg update_opts pc: 431 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _7900, 0)){
            _7900 = NOVALUE;
            goto L16; // [431] 442
        }
        _7900 = NOVALUE;
        // SubProg update_opts pc: 435 op: STARTLINE (58)

        /** cmdline.e:288				opt[CALLBACK] = -1*/
        // SubProg update_opts pc: 437 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        // SubProg update_opts pc: 441 op: NOP1 (159)
L16: // addr: 442 pc: 441 sub: 14252 op: 159
        // SubProg update_opts pc: 442 op: NOP1 (159)
L14: // addr: 443 pc: 442 sub: 14252 op: 159
        // SubProg update_opts pc: 443 op: STARTLINE (58)

        /** cmdline.e:291			if sequence(opt[MAPNAME]) and length(opt[MAPNAME]) = 0 then*/
        // SubProg update_opts pc: 445 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7902 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 449 op: IS_A_SEQUENCE (68)
        _7903 = IS_SEQUENCE(_7902);
        _7902 = NOVALUE;
        // SubProg update_opts pc: 452 op: SC1_AND_IF (146)
        if (_7903 == 0) {
            goto L17; // [452] 478
        }
        // SubProg update_opts pc: 456 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7905 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 460 op: LENGTH (42)
        if (IS_SEQUENCE(_7905)){
                _7906 = SEQ_PTR(_7905)->length;
        }
        else {
            _7906 = 1;
        }
        _7905 = NOVALUE;
        // SubProg update_opts pc: 463 op: EQUALS (3)
        _7907 = (_7906 == 0);
        _7906 = NOVALUE;
        // SubProg update_opts pc: 467 op: NOP1 (159)
        // SubProg update_opts pc: 468 op: IF (20)
        if (_7907 == 0)
        {
            DeRef(_7907);
            _7907 = NOVALUE;
            goto L17; // [468] 478
        }
        else{
            DeRef(_7907);
            _7907 = NOVALUE;
        }
        // SubProg update_opts pc: 471 op: STARTLINE (58)

        /** cmdline.e:292				opt[MAPNAME] = 0*/
        // SubProg update_opts pc: 473 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg update_opts pc: 477 op: NOP1 (159)
L17: // addr: 478 pc: 477 sub: 14252 op: 159
        // SubProg update_opts pc: 478 op: STARTLINE (58)

        /** cmdline.e:295			if atom(opt[MAPNAME]) then*/
        // SubProg update_opts pc: 480 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7908 = (object)*(((s1_ptr)_2)->base + 6);
        // SubProg update_opts pc: 484 op: IS_AN_ATOM (67)
        _7909 = IS_ATOM(_7908);
        _7908 = NOVALUE;
        // SubProg update_opts pc: 487 op: IF (20)
        if (_7909 == 0)
        {
            _7909 = NOVALUE;
            goto L18; // [487] 550
        }
        else{
            _7909 = NOVALUE;
        }
        // SubProg update_opts pc: 490 op: STARTLINE (58)

        /** cmdline.e:296				if sequence(opt[LONGNAME]) then*/
        // SubProg update_opts pc: 492 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7910 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 496 op: IS_A_SEQUENCE (68)
        _7911 = IS_SEQUENCE(_7910);
        _7910 = NOVALUE;
        // SubProg update_opts pc: 499 op: IF (20)
        if (_7911 == 0)
        {
            _7911 = NOVALUE;
            goto L19; // [499] 515
        }
        else{
            _7911 = NOVALUE;
        }
        // SubProg update_opts pc: 502 op: STARTLINE (58)

        /** cmdline.e:297					opt[MAPNAME] = opt[LONGNAME]*/
        // SubProg update_opts pc: 504 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7912 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg update_opts pc: 508 op: ASSIGN_SUBS (16)
        Ref(_7912);
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7912;
        if( _1 != _7912 ){
            DeRef(_1);
        }
        _7912 = NOVALUE;
        // SubProg update_opts pc: 512 op: ELSE (23)
        goto L1A; // [512] 549
        // SubProg update_opts pc: 514 op: NOP1 (159)
L19: // addr: 515 pc: 514 sub: 14252 op: 159
        // SubProg update_opts pc: 515 op: STARTLINE (58)

        /** cmdline.e:298				elsif sequence(opt[SHORTNAME]) then*/
        // SubProg update_opts pc: 517 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7913 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 521 op: IS_A_SEQUENCE (68)
        _7914 = IS_SEQUENCE(_7913);
        _7913 = NOVALUE;
        // SubProg update_opts pc: 524 op: IF (20)
        if (_7914 == 0)
        {
            _7914 = NOVALUE;
            goto L1B; // [524] 540
        }
        else{
            _7914 = NOVALUE;
        }
        // SubProg update_opts pc: 527 op: STARTLINE (58)

        /** cmdline.e:299					opt[MAPNAME] = opt[SHORTNAME]*/
        // SubProg update_opts pc: 529 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_14259);
        _7915 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg update_opts pc: 533 op: ASSIGN_SUBS (16)
        Ref(_7915);
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7915;
        if( _1 != _7915 ){
            DeRef(_1);
        }
        _7915 = NOVALUE;
        // SubProg update_opts pc: 537 op: ELSE (23)
        goto L1A; // [537] 549
        // SubProg update_opts pc: 539 op: NOP1 (159)
L1B: // addr: 540 pc: 539 sub: 14252 op: 159
        // SubProg update_opts pc: 540 op: STARTLINE (58)

        /** cmdline.e:301					opt[MAPNAME] = EXTRAS*/
        // SubProg update_opts pc: 542 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_opts pc: 544 op: ASSIGN_SUBS (16)
        RefDS(_4EXTRAS_14175);
        _2 = (object)SEQ_PTR(_opt_14259);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14259 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4EXTRAS_14175;
        DeRef(_1);
        // SubProg update_opts pc: 548 op: NOP1 (159)
L1A: // addr: 549 pc: 548 sub: 14252 op: 159
        // SubProg update_opts pc: 549 op: NOP1 (159)
L18: // addr: 550 pc: 549 sub: 14252 op: 159
        // SubProg update_opts pc: 550 op: STARTLINE (58)

        /** cmdline.e:305			opts[i] = opt*/
        // SubProg update_opts pc: 552 op: ASSIGN_SUBS (16)
        RefDS(_opt_14259);
        _2 = (object)SEQ_PTR(_opts_14254);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14254 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_14257);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _opt_14259;
        DeRef(_1);
        // SubProg update_opts pc: 556 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var opt_14259
        DeRefDS(_opt_14259);
        _opt_14259 = NOVALUE;
        // SubProg update_opts pc: 558 op: STARTLINE (58)

        /** cmdline.e:306		end for*/
        // SubProg update_opts pc: 560 op: ENDFOR_INT_UP1 (54)
        _i_14257 = _i_14257 + 1;
        goto L1; // [560] 20
L2: // addr: 565 pc: 560 sub: 14252 op: 54
        ;
    }
    // SubProg update_opts pc: 565 op: STARTLINE (58)

    /** cmdline.e:307		return opts*/
    // SubProg update_opts pc: 567 op: RETURNF (28)

// Exiting block BLOCK: update_opts

// block var lExtras_14255
    _7862 = NOVALUE;
    _7882 = NOVALUE;
    _7905 = NOVALUE;
    _7856 = NOVALUE;
    return _opts_14254;
    // SubProg update_opts pc: 571 op: BADRETURNF (43)
    ;
}


object _4standardize_help_options(object _opts_14359, object _auto_help_switches_14360)
{
    object _has_h_14361 = NOVALUE;
    object _has_help_14362 = NOVALUE;
    object _has_question_14363 = NOVALUE;
    object _appended_opts_14383 = NOVALUE;
// skipping _7944  name type: 0
// skipping _7943  name type: 0
    object _7942 = NOVALUE; // 14401 7942
// skipping _7941  name type: 0
// skipping _7940  name type: 0
    object _7939 = NOVALUE; // 14397 7939
// skipping _7938  name type: 0
// skipping _7937  name type: 0
    object _7936 = NOVALUE; // 14393 7936
// skipping _7935  name type: 0
// skipping _7934  name type: 0
    object _7933 = NOVALUE; // 14389 7933
    object _7931 = NOVALUE; // 14387 7931
    object _7930 = NOVALUE; // 14386 7930
    object _7929 = NOVALUE; // 14385 7929
    object _7928 = NOVALUE; // 14381 7928
    object _7926 = NOVALUE; // 14379 7926
    object _7925 = NOVALUE; // 14378 7925
    object _7924 = NOVALUE; // 14376 7924
    object _7922 = NOVALUE; // 14374 7922
    object _7921 = NOVALUE; // 14373 7921
    object _7920 = NOVALUE; // 14371 7920
    object _7918 = NOVALUE; // 14369 7918
    object _7917 = NOVALUE; // 14368 7917
    object _7916 = NOVALUE; // 14366 7916
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg standardize_help_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg standardize_help_options pc: 3 op: INTEGER_CHECK (96)
    // SubProg standardize_help_options pc: 5 op: STARTLINE (58)

    /** cmdline.e:313		integer has_h = 0, has_help = 0, has_question = 0*/
    // SubProg standardize_help_options pc: 7 op: ASSIGN_I (113)
    _has_h_14361 = 0;
    // SubProg standardize_help_options pc: 10 op: ASSIGN_I (113)
    _has_help_14362 = 0;
    // SubProg standardize_help_options pc: 13 op: ASSIGN_I (113)
    _has_question_14363 = 0;
    // SubProg standardize_help_options pc: 16 op: STARTLINE (58)

    /** cmdline.e:314		for i = 1 to length(opts) do*/
    // SubProg standardize_help_options pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14359)){
            _7916 = SEQ_PTR(_opts_14359)->length;
    }
    else {
        _7916 = 1;
    }
    // SubProg standardize_help_options pc: 21 op: FOR_I (125)
    {
        object _i_14365;
        _i_14365 = 1;
L1: // addr: 28 pc: 21 sub: 14357 op: 125
        if (_i_14365 > _7916){
            goto L2; // [21] 107
        }
        // SubProg standardize_help_options pc: 28 op: STARTLINE (58)

        /** cmdline.e:315			if equal(opts[i][SHORTNAME], "h") then*/
        // SubProg standardize_help_options pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14359);
        _7917 = (object)*(((s1_ptr)_2)->base + _i_14365);
        // SubProg standardize_help_options pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7917);
        _7918 = (object)*(((s1_ptr)_2)->base + 1);
        _7917 = NOVALUE;
        // SubProg standardize_help_options pc: 38 op: EQUAL (153)
        if (_7918 == _7919)
        _7920 = 1;
        else if (IS_ATOM_INT(_7918) && IS_ATOM_INT(_7919))
        _7920 = 0;
        else
        _7920 = (compare(_7918, _7919) == 0);
        _7918 = NOVALUE;
        // SubProg standardize_help_options pc: 42 op: IF (20)
        if (_7920 == 0)
        {
            _7920 = NOVALUE;
            goto L3; // [42] 53
        }
        else{
            _7920 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 45 op: STARTLINE (58)

        /** cmdline.e:316				has_h = 1*/
        // SubProg standardize_help_options pc: 47 op: ASSIGN_I (113)
        _has_h_14361 = 1;
        // SubProg standardize_help_options pc: 50 op: ELSE (23)
        goto L4; // [50] 77
        // SubProg standardize_help_options pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 14357 op: 159
        // SubProg standardize_help_options pc: 53 op: STARTLINE (58)

        /** cmdline.e:317			elsif equal(opts[i][SHORTNAME], "?") then*/
        // SubProg standardize_help_options pc: 55 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14359);
        _7921 = (object)*(((s1_ptr)_2)->base + _i_14365);
        // SubProg standardize_help_options pc: 59 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7921);
        _7922 = (object)*(((s1_ptr)_2)->base + 1);
        _7921 = NOVALUE;
        // SubProg standardize_help_options pc: 63 op: EQUAL (153)
        if (_7922 == _7923)
        _7924 = 1;
        else if (IS_ATOM_INT(_7922) && IS_ATOM_INT(_7923))
        _7924 = 0;
        else
        _7924 = (compare(_7922, _7923) == 0);
        _7922 = NOVALUE;
        // SubProg standardize_help_options pc: 67 op: IF (20)
        if (_7924 == 0)
        {
            _7924 = NOVALUE;
            goto L5; // [67] 76
        }
        else{
            _7924 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 70 op: STARTLINE (58)

        /** cmdline.e:318				has_question = 1*/
        // SubProg standardize_help_options pc: 72 op: ASSIGN_I (113)
        _has_question_14363 = 1;
        // SubProg standardize_help_options pc: 75 op: NOP1 (159)
L5: // addr: 76 pc: 75 sub: 14357 op: 159
        // SubProg standardize_help_options pc: 76 op: NOP1 (159)
L4: // addr: 77 pc: 76 sub: 14357 op: 159
        // SubProg standardize_help_options pc: 77 op: STARTLINE (58)

        /** cmdline.e:321			if equal(opts[i][LONGNAME], "help") then*/
        // SubProg standardize_help_options pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14359);
        _7925 = (object)*(((s1_ptr)_2)->base + _i_14365);
        // SubProg standardize_help_options pc: 83 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7925);
        _7926 = (object)*(((s1_ptr)_2)->base + 2);
        _7925 = NOVALUE;
        // SubProg standardize_help_options pc: 87 op: EQUAL (153)
        if (_7926 == _7927)
        _7928 = 1;
        else if (IS_ATOM_INT(_7926) && IS_ATOM_INT(_7927))
        _7928 = 0;
        else
        _7928 = (compare(_7926, _7927) == 0);
        _7926 = NOVALUE;
        // SubProg standardize_help_options pc: 91 op: IF (20)
        if (_7928 == 0)
        {
            _7928 = NOVALUE;
            goto L6; // [91] 100
        }
        else{
            _7928 = NOVALUE;
        }
        // SubProg standardize_help_options pc: 94 op: STARTLINE (58)

        /** cmdline.e:322				has_help = 1*/
        // SubProg standardize_help_options pc: 96 op: ASSIGN_I (113)
        _has_help_14362 = 1;
        // SubProg standardize_help_options pc: 99 op: NOP1 (159)
L6: // addr: 100 pc: 99 sub: 14357 op: 159
        // SubProg standardize_help_options pc: 100 op: STARTLINE (58)

        /** cmdline.e:324		end for*/
        // SubProg standardize_help_options pc: 102 op: ENDFOR_INT_UP1 (54)
        _i_14365 = _i_14365 + 1;
        goto L1; // [102] 28
L2: // addr: 107 pc: 102 sub: 14357 op: 54
        ;
    }
    // SubProg standardize_help_options pc: 107 op: STARTLINE (58)

    /** cmdline.e:326		if auto_help_switches then*/
    // SubProg standardize_help_options pc: 109 op: IF (20)
    if (_auto_help_switches_14360 == 0)
    {
        goto L7; // [109] 249
    }
    else{
    }
    // SubProg standardize_help_options pc: 112 op: STARTLINE (58)

    /** cmdline.e:327			integer appended_opts = 0*/
    // SubProg standardize_help_options pc: 114 op: ASSIGN_I (113)
    _appended_opts_14383 = 0;
    // SubProg standardize_help_options pc: 117 op: STARTLINE (58)

    /** cmdline.e:328			if not has_h and not has_help then*/
    // SubProg standardize_help_options pc: 119 op: NOT (7)
    _7929 = (_has_h_14361 == 0);
    // SubProg standardize_help_options pc: 122 op: SC1_AND_IF (146)
    if (_7929 == 0) {
        goto L8; // [122] 155
    }
    // SubProg standardize_help_options pc: 126 op: NOT (7)
    _7931 = (_has_help_14362 == 0);
    // SubProg standardize_help_options pc: 129 op: NOP1 (159)
    // SubProg standardize_help_options pc: 130 op: IF (20)
    if (_7931 == 0)
    {
        DeRef(_7931);
        _7931 = NOVALUE;
        goto L8; // [130] 155
    }
    else{
        DeRef(_7931);
        _7931 = NOVALUE;
    }
    // SubProg standardize_help_options pc: 133 op: STARTLINE (58)

    /** cmdline.e:329				opts = append(opts, {"h", "help", "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 135 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_7919);
    ((intptr_t*)_2)[1] = _7919;
    RefDS(_7927);
    ((intptr_t*)_2)[2] = _7927;
    RefDS(_7932);
    ((intptr_t*)_2)[3] = _7932;
    RefDS(_7919);
    ((intptr_t*)_2)[4] = _7919;
    ((intptr_t*)_2)[5] = -1;
    _7933 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 143 op: APPEND (35)
    RefDS(_7933);
    Append(&_opts_14359, _opts_14359, _7933);
    DeRefDS(_7933);
    _7933 = NOVALUE;
    // SubProg standardize_help_options pc: 147 op: STARTLINE (58)

    /** cmdline.e:330				appended_opts = 1*/
    // SubProg standardize_help_options pc: 149 op: ASSIGN_I (113)
    _appended_opts_14383 = 1;
    // SubProg standardize_help_options pc: 152 op: ELSE (23)
    goto L9; // [152] 208
    // SubProg standardize_help_options pc: 154 op: NOP1 (159)
L8: // addr: 155 pc: 154 sub: 14357 op: 159
    // SubProg standardize_help_options pc: 155 op: STARTLINE (58)

    /** cmdline.e:332			elsif not has_h then*/
    // SubProg standardize_help_options pc: 157 op: NOT_IFW (108)
    if (_has_h_14361 != 0)
    goto LA; // [157] 182
    // SubProg standardize_help_options pc: 160 op: STARTLINE (58)

    /** cmdline.e:333				opts = append(opts, {"h", 0, "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 162 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_7919);
    ((intptr_t*)_2)[1] = _7919;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_7932);
    ((intptr_t*)_2)[3] = _7932;
    RefDS(_7919);
    ((intptr_t*)_2)[4] = _7919;
    ((intptr_t*)_2)[5] = -1;
    _7936 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 170 op: APPEND (35)
    RefDS(_7936);
    Append(&_opts_14359, _opts_14359, _7936);
    DeRefDS(_7936);
    _7936 = NOVALUE;
    // SubProg standardize_help_options pc: 174 op: STARTLINE (58)

    /** cmdline.e:334				appended_opts = 1*/
    // SubProg standardize_help_options pc: 176 op: ASSIGN_I (113)
    _appended_opts_14383 = 1;
    // SubProg standardize_help_options pc: 179 op: ELSE (23)
    goto L9; // [179] 208
    // SubProg standardize_help_options pc: 181 op: NOP1 (159)
LA: // addr: 182 pc: 181 sub: 14357 op: 159
    // SubProg standardize_help_options pc: 182 op: STARTLINE (58)

    /** cmdline.e:336			elsif not has_help then*/
    // SubProg standardize_help_options pc: 184 op: NOT_IFW (108)
    if (_has_help_14362 != 0)
    goto LB; // [184] 207
    // SubProg standardize_help_options pc: 187 op: STARTLINE (58)

    /** cmdline.e:337				opts = append(opts, {0, "help", "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 189 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_7927);
    ((intptr_t*)_2)[2] = _7927;
    RefDS(_7932);
    ((intptr_t*)_2)[3] = _7932;
    RefDS(_7919);
    ((intptr_t*)_2)[4] = _7919;
    ((intptr_t*)_2)[5] = -1;
    _7939 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 197 op: APPEND (35)
    RefDS(_7939);
    Append(&_opts_14359, _opts_14359, _7939);
    DeRefDS(_7939);
    _7939 = NOVALUE;
    // SubProg standardize_help_options pc: 201 op: STARTLINE (58)

    /** cmdline.e:338				appended_opts = 1*/
    // SubProg standardize_help_options pc: 203 op: ASSIGN_I (113)
    _appended_opts_14383 = 1;
    // SubProg standardize_help_options pc: 206 op: NOP1 (159)
LB: // addr: 207 pc: 206 sub: 14357 op: 159
    // SubProg standardize_help_options pc: 207 op: NOP1 (159)
L9: // addr: 208 pc: 207 sub: 14357 op: 159
    // SubProg standardize_help_options pc: 208 op: STARTLINE (58)

    /** cmdline.e:342			if not has_question then			*/
    // SubProg standardize_help_options pc: 210 op: NOT_IFW (108)
    if (_has_question_14363 != 0)
    goto LC; // [210] 233
    // SubProg standardize_help_options pc: 213 op: STARTLINE (58)

    /** cmdline.e:343				opts = append(opts, {"?", 0, "Display the command options", {HELP}, -1})*/
    // SubProg standardize_help_options pc: 215 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_7923);
    ((intptr_t*)_2)[1] = _7923;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_7932);
    ((intptr_t*)_2)[3] = _7932;
    RefDS(_7919);
    ((intptr_t*)_2)[4] = _7919;
    ((intptr_t*)_2)[5] = -1;
    _7942 = MAKE_SEQ(_1);
    // SubProg standardize_help_options pc: 223 op: APPEND (35)
    RefDS(_7942);
    Append(&_opts_14359, _opts_14359, _7942);
    DeRefDS(_7942);
    _7942 = NOVALUE;
    // SubProg standardize_help_options pc: 227 op: STARTLINE (58)

    /** cmdline.e:344				appended_opts = 1*/
    // SubProg standardize_help_options pc: 229 op: ASSIGN_I (113)
    _appended_opts_14383 = 1;
    // SubProg standardize_help_options pc: 232 op: NOP1 (159)
LC: // addr: 233 pc: 232 sub: 14357 op: 159
    // SubProg standardize_help_options pc: 233 op: STARTLINE (58)

    /** cmdline.e:347			if appended_opts then*/
    // SubProg standardize_help_options pc: 235 op: IF (20)
    if (_appended_opts_14383 == 0)
    {
        goto LD; // [235] 248
    }
    else{
    }
    // SubProg standardize_help_options pc: 238 op: STARTLINE (58)

    /** cmdline.e:349				opts = standardize_opts(opts, 0)*/
    // SubProg standardize_help_options pc: 240 op: PROC (27)
    RefDS(_opts_14359);
    _0 = _opts_14359;
    _opts_14359 = _4standardize_opts(_opts_14359, 0);
    DeRefDS(_0);
    // SubProg standardize_help_options pc: 245 op: SEQUENCE_CHECK (97)
    // SubProg standardize_help_options pc: 247 op: NOP1 (159)
LD: // addr: 248 pc: 247 sub: 14357 op: 159
    // SubProg standardize_help_options pc: 248 op: NOP1 (159)
L7: // addr: 249 pc: 248 sub: 14357 op: 159
    // SubProg standardize_help_options pc: 249 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var appended_opts_14383
    // SubProg standardize_help_options pc: 251 op: STARTLINE (58)

    /** cmdline.e:352		return opts*/
    // SubProg standardize_help_options pc: 253 op: RETURNF (28)

// Exiting block BLOCK: standardize_help_options

// block var auto_help_switches_14360

// block var has_h_14361

// block var has_help_14362

// block var has_question_14363
    DeRef(_7929);
    _7929 = NOVALUE;
    return _opts_14359;
    // SubProg standardize_help_options pc: 257 op: BADRETURNF (43)
    ;
}


object _4standardize_opts(object _opts_14408, object _auto_help_switches_14409)
{
    object _7981 = NOVALUE; // 14451 7981
    object _7980 = NOVALUE; // 14450 7980
// skipping _7979  name type: 0
    object _7978 = NOVALUE; // 14448 7978
    object _7977 = NOVALUE; // 14447 7977
    object _7976 = NOVALUE; // 14446 7976
    object _7975 = NOVALUE; // 14445 7975
    object _7974 = NOVALUE; // 14444 7974
    object _7973 = NOVALUE; // 14443 7973
    object _7972 = NOVALUE; // 14442 7972
    object _7971 = NOVALUE; // 14441 7971
    object _7970 = NOVALUE; // 14440 7970
    object _7969 = NOVALUE; // 14439 7969
    object _7968 = NOVALUE; // 14437 7968
    object _7967 = NOVALUE; // 14436 7967
// skipping _7966  name type: 0
    object _7965 = NOVALUE; // 14434 7965
    object _7964 = NOVALUE; // 14433 7964
    object _7963 = NOVALUE; // 14432 7963
    object _7962 = NOVALUE; // 14431 7962
    object _7961 = NOVALUE; // 14430 7961
    object _7960 = NOVALUE; // 14429 7960
    object _7959 = NOVALUE; // 14428 7959
    object _7958 = NOVALUE; // 14427 7958
    object _7957 = NOVALUE; // 14426 7957
    object _7956 = NOVALUE; // 14425 7956
    object _7955 = NOVALUE; // 14423 7955
    object _7954 = NOVALUE; // 14422 7954
// skipping _7953  name type: 0
    object _7952 = NOVALUE; // 14420 7952
// skipping _7951  name type: 0
    object _7950 = NOVALUE; // 14418 7950
    object _7949 = NOVALUE; // 14417 7949
    object _7948 = NOVALUE; // 14416 7948
    object _7947 = NOVALUE; // 14414 7947
// skipping _7946  name type: 0
// skipping _7945  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg standardize_opts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 3 op: INTEGER_CHECK (96)
    // SubProg standardize_opts pc: 5 op: STARTLINE (58)

    /** cmdline.e:357		opts = update_opts( opts )*/
    // SubProg standardize_opts pc: 7 op: PROC (27)
    RefDS(_opts_14408);
    _0 = _opts_14408;
    _opts_14408 = _4update_opts(_opts_14408);
    DeRefDS(_0);
    // SubProg standardize_opts pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 13 op: STARTLINE (58)

    /** cmdline.e:359		check_for_duplicates( opts )*/
    // SubProg standardize_opts pc: 15 op: PROC (27)
    RefDS(_opts_14408);
    _4check_for_duplicates(_opts_14408);
    // SubProg standardize_opts pc: 18 op: STARTLINE (58)

    /** cmdline.e:361		opts = standardize_help_options( opts, auto_help_switches )*/
    // SubProg standardize_opts pc: 20 op: PROC (27)
    RefDS(_opts_14408);
    _0 = _opts_14408;
    _opts_14408 = _4standardize_help_options(_opts_14408, _auto_help_switches_14409);
    DeRefDS(_0);
    // SubProg standardize_opts pc: 25 op: SEQUENCE_CHECK (97)
    // SubProg standardize_opts pc: 27 op: STARTLINE (58)

    /** cmdline.e:364		for i = 1 to length(opts) do*/
    // SubProg standardize_opts pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14408)){
            _7947 = SEQ_PTR(_opts_14408)->length;
    }
    else {
        _7947 = 1;
    }
    // SubProg standardize_opts pc: 32 op: FOR_I (125)
    {
        object _i_14413;
        _i_14413 = 1;
L1: // addr: 39 pc: 32 sub: 14406 op: 125
        if (_i_14413 > _7947){
            goto L2; // [32] 208
        }
        // SubProg standardize_opts pc: 39 op: STARTLINE (58)

        /** cmdline.e:365			if not find(HAS_PARAMETER, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14408);
        _7948 = (object)*(((s1_ptr)_2)->base + _i_14413);
        // SubProg standardize_opts pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7948);
        _7949 = (object)*(((s1_ptr)_2)->base + 4);
        _7948 = NOVALUE;
        // SubProg standardize_opts pc: 49 op: FIND_FROM (176)
        _7950 = find_from(112, _7949, 1);
        _7949 = NOVALUE;
        // SubProg standardize_opts pc: 54 op: NOT_IFW (108)
        if (_7950 != 0)
        goto L3; // [54] 77
        _7950 = NOVALUE;
        // SubProg standardize_opts pc: 57 op: STARTLINE (58)

        /** cmdline.e:366				opts[i][OPTIONS] &= NO_PARAMETER*/
        // SubProg standardize_opts pc: 59 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_14408);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14408 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_14413 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 64 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _7954 = (object)*(((s1_ptr)_2)->base + 4);
        _7952 = NOVALUE;
        // SubProg standardize_opts pc: 68 op: CONCAT (15)
        if (IS_SEQUENCE(_7954) && IS_ATOM(110)) {
            Append(&_7955, _7954, 110);
        }
        else if (IS_ATOM(_7954) && IS_SEQUENCE(110)) {
        }
        else {
            Concat((object_ptr)&_7955, _7954, 110);
            _7954 = NOVALUE;
        }
        _7954 = NOVALUE;
        // SubProg standardize_opts pc: 72 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7955;
        if( _1 != _7955 ){
            DeRef(_1);
        }
        _7955 = NOVALUE;
        _7952 = NOVALUE;
        // SubProg standardize_opts pc: 76 op: NOP1 (159)
L3: // addr: 77 pc: 76 sub: 14406 op: 159
        // SubProg standardize_opts pc: 77 op: STARTLINE (58)

        /** cmdline.e:369			if not find(MULTIPLE, opts[i][OPTIONS]) and not find(ONCE, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14408);
        _7956 = (object)*(((s1_ptr)_2)->base + _i_14413);
        // SubProg standardize_opts pc: 83 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7956);
        _7957 = (object)*(((s1_ptr)_2)->base + 4);
        _7956 = NOVALUE;
        // SubProg standardize_opts pc: 87 op: FIND_FROM (176)
        _7958 = find_from(42, _7957, 1);
        _7957 = NOVALUE;
        // SubProg standardize_opts pc: 92 op: NOT (7)
        _7959 = (_7958 == 0);
        _7958 = NOVALUE;
        // SubProg standardize_opts pc: 95 op: SC1_AND_IF (146)
        if (_7959 == 0) {
            goto L4; // [95] 139
        }
        // SubProg standardize_opts pc: 99 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14408);
        _7961 = (object)*(((s1_ptr)_2)->base + _i_14413);
        // SubProg standardize_opts pc: 103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7961);
        _7962 = (object)*(((s1_ptr)_2)->base + 4);
        _7961 = NOVALUE;
        // SubProg standardize_opts pc: 107 op: FIND_FROM (176)
        _7963 = find_from(49, _7962, 1);
        _7962 = NOVALUE;
        // SubProg standardize_opts pc: 112 op: NOT (7)
        _7964 = (_7963 == 0);
        _7963 = NOVALUE;
        // SubProg standardize_opts pc: 115 op: NOP1 (159)
        // SubProg standardize_opts pc: 116 op: IF (20)
        if (_7964 == 0)
        {
            DeRef(_7964);
            _7964 = NOVALUE;
            goto L4; // [116] 139
        }
        else{
            DeRef(_7964);
            _7964 = NOVALUE;
        }
        // SubProg standardize_opts pc: 119 op: STARTLINE (58)

        /** cmdline.e:370				opts[i][OPTIONS] &= ONCE*/
        // SubProg standardize_opts pc: 121 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_14408);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14408 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_14413 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 126 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _7967 = (object)*(((s1_ptr)_2)->base + 4);
        _7965 = NOVALUE;
        // SubProg standardize_opts pc: 130 op: CONCAT (15)
        if (IS_SEQUENCE(_7967) && IS_ATOM(49)) {
            Append(&_7968, _7967, 49);
        }
        else if (IS_ATOM(_7967) && IS_SEQUENCE(49)) {
        }
        else {
            Concat((object_ptr)&_7968, _7967, 49);
            _7967 = NOVALUE;
        }
        _7967 = NOVALUE;
        // SubProg standardize_opts pc: 134 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7968;
        if( _1 != _7968 ){
            DeRef(_1);
        }
        _7968 = NOVALUE;
        _7965 = NOVALUE;
        // SubProg standardize_opts pc: 138 op: NOP1 (159)
L4: // addr: 139 pc: 138 sub: 14406 op: 159
        // SubProg standardize_opts pc: 139 op: STARTLINE (58)

        /** cmdline.e:373			if not find(HAS_CASE, opts[i][OPTIONS]) and not find(NO_CASE, opts[i][OPTIONS]) then*/
        // SubProg standardize_opts pc: 141 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14408);
        _7969 = (object)*(((s1_ptr)_2)->base + _i_14413);
        // SubProg standardize_opts pc: 145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7969);
        _7970 = (object)*(((s1_ptr)_2)->base + 4);
        _7969 = NOVALUE;
        // SubProg standardize_opts pc: 149 op: FIND_FROM (176)
        _7971 = find_from(99, _7970, 1);
        _7970 = NOVALUE;
        // SubProg standardize_opts pc: 154 op: NOT (7)
        _7972 = (_7971 == 0);
        _7971 = NOVALUE;
        // SubProg standardize_opts pc: 157 op: SC1_AND_IF (146)
        if (_7972 == 0) {
            goto L5; // [157] 201
        }
        // SubProg standardize_opts pc: 161 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14408);
        _7974 = (object)*(((s1_ptr)_2)->base + _i_14413);
        // SubProg standardize_opts pc: 165 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7974);
        _7975 = (object)*(((s1_ptr)_2)->base + 4);
        _7974 = NOVALUE;
        // SubProg standardize_opts pc: 169 op: FIND_FROM (176)
        _7976 = find_from(105, _7975, 1);
        _7975 = NOVALUE;
        // SubProg standardize_opts pc: 174 op: NOT (7)
        _7977 = (_7976 == 0);
        _7976 = NOVALUE;
        // SubProg standardize_opts pc: 177 op: NOP1 (159)
        // SubProg standardize_opts pc: 178 op: IF (20)
        if (_7977 == 0)
        {
            DeRef(_7977);
            _7977 = NOVALUE;
            goto L5; // [178] 201
        }
        else{
            DeRef(_7977);
            _7977 = NOVALUE;
        }
        // SubProg standardize_opts pc: 181 op: STARTLINE (58)

        /** cmdline.e:374				opts[i][OPTIONS] &= NO_CASE*/
        // SubProg standardize_opts pc: 183 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_opts_14408);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14408 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_14413 + ((s1_ptr)_2)->base);
        // SubProg standardize_opts pc: 188 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _7980 = (object)*(((s1_ptr)_2)->base + 4);
        _7978 = NOVALUE;
        // SubProg standardize_opts pc: 192 op: CONCAT (15)
        if (IS_SEQUENCE(_7980) && IS_ATOM(105)) {
            Append(&_7981, _7980, 105);
        }
        else if (IS_ATOM(_7980) && IS_SEQUENCE(105)) {
        }
        else {
            Concat((object_ptr)&_7981, _7980, 105);
            _7980 = NOVALUE;
        }
        _7980 = NOVALUE;
        // SubProg standardize_opts pc: 196 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7981;
        if( _1 != _7981 ){
            DeRef(_1);
        }
        _7981 = NOVALUE;
        _7978 = NOVALUE;
        // SubProg standardize_opts pc: 200 op: NOP1 (159)
L5: // addr: 201 pc: 200 sub: 14406 op: 159
        // SubProg standardize_opts pc: 201 op: STARTLINE (58)

        /** cmdline.e:376		end for*/
        // SubProg standardize_opts pc: 203 op: ENDFOR_INT_UP1 (54)
        _i_14413 = _i_14413 + 1;
        goto L1; // [203] 39
L2: // addr: 208 pc: 203 sub: 14406 op: 54
        ;
    }
    // SubProg standardize_opts pc: 208 op: STARTLINE (58)

    /** cmdline.e:378		return opts*/
    // SubProg standardize_opts pc: 210 op: RETURNF (28)

// Exiting block BLOCK: standardize_opts

// block var auto_help_switches_14409
    DeRef(_7959);
    _7959 = NOVALUE;
    DeRef(_7972);
    _7972 = NOVALUE;
    return _opts_14408;
    // SubProg standardize_opts pc: 214 op: BADRETURNF (43)
    ;
}


object _4print_help(object _opts_14454, object _cmds_14455)
{
    object _pad_size_14456 = NOVALUE;
    object _this_size_14457 = NOVALUE;
    object _extras_mandatory_14458 = NOVALUE;
    object _extras_opt_14459 = NOVALUE;
    object _param_name_14460 = NOVALUE;
    object _has_param_14461 = NOVALUE;
    object _8071 = NOVALUE; // 14572 8071
    object _8070 = NOVALUE; // 14570 8070
    object _8069 = NOVALUE; // 14569 8069
    object _8068 = NOVALUE; // 14568 8068
// skipping _8066  name type: 0
    object _8065 = NOVALUE; // 14564 8065
    object _8064 = NOVALUE; // 14563 8064
    object _8063 = NOVALUE; // 14562 8063
    object _8062 = NOVALUE; // 14561 8062
    object _8061 = NOVALUE; // 14560 8061
    object _8060 = NOVALUE; // 14559 8060
    object _8059 = NOVALUE; // 14558 8059
    object _8058 = NOVALUE; // 14556 8058
    object _8057 = NOVALUE; // 14553 8057
    object _8056 = NOVALUE; // 14552 8056
// skipping _8054  name type: 0
// skipping _8053  name type: 0
// skipping _8052  name type: 0
    object _8051 = NOVALUE; // 14546 8051
    object _8050 = NOVALUE; // 14545 8050
// skipping _8049  name type: 0
    object _8048 = NOVALUE; // 14541 8048
    object _8047 = NOVALUE; // 14540 8047
    object _8046 = NOVALUE; // 14539 8046
    object _8045 = NOVALUE; // 14538 8045
    object _8044 = NOVALUE; // 14537 8044
    object _8043 = NOVALUE; // 14536 8043
// skipping _8042  name type: 0
    object _8041 = NOVALUE; // 14533 8041
    object _8040 = NOVALUE; // 14532 8040
    object _8039 = NOVALUE; // 14531 8039
// skipping _8038  name type: 0
// skipping _8037  name type: 0
// skipping _8036  name type: 0
    object _8035 = NOVALUE; // 14525 8035
    object _8034 = NOVALUE; // 14524 8034
// skipping _8033  name type: 0
    object _8032 = NOVALUE; // 14522 8032
    object _8031 = NOVALUE; // 14521 8031
    object _8030 = NOVALUE; // 14520 8030
    object _8029 = NOVALUE; // 14519 8029
    object _8028 = NOVALUE; // 14518 8028
    object _8027 = NOVALUE; // 14517 8027
    object _8026 = NOVALUE; // 14516 8026
// skipping _8025  name type: 0
// skipping _8024  name type: 0
    object _8023 = NOVALUE; // 14512 8023
    object _8022 = NOVALUE; // 14511 8022
    object _8021 = NOVALUE; // 14510 8021
// skipping _8020  name type: 0
    object _8019 = NOVALUE; // 14507 8019
    object _8018 = NOVALUE; // 14506 8018
    object _8017 = NOVALUE; // 14505 8017
    object _8016 = NOVALUE; // 14504 8016
    object _8015 = NOVALUE; // 14503 8015
    object _8014 = NOVALUE; // 14502 8014
    object _8013 = NOVALUE; // 14501 8013
// skipping _8012  name type: 0
// skipping _8011  name type: 0
    object _8010 = NOVALUE; // 14497 8010
    object _8009 = NOVALUE; // 14496 8009
    object _8008 = NOVALUE; // 14495 8008
// skipping _8007  name type: 0
    object _8006 = NOVALUE; // 14492 8006
    object _8005 = NOVALUE; // 14491 8005
    object _8004 = NOVALUE; // 14490 8004
    object _8003 = NOVALUE; // 14489 8003
    object _8002 = NOVALUE; // 14488 8002
    object _8001 = NOVALUE; // 14487 8001
    object _8000 = NOVALUE; // 14486 8000
    object _7999 = NOVALUE; // 14484 7999
    object _7998 = NOVALUE; // 14483 7998
    object _7997 = NOVALUE; // 14482 7997
    object _7996 = NOVALUE; // 14480 7996
    object _7995 = NOVALUE; // 14479 7995
    object _7994 = NOVALUE; // 14478 7994
    object _7993 = NOVALUE; // 14477 7993
    object _7992 = NOVALUE; // 14476 7992
    object _7991 = NOVALUE; // 14475 7991
    object _7990 = NOVALUE; // 14474 7990
    object _7989 = NOVALUE; // 14472 7989
    object _7988 = NOVALUE; // 14471 7988
    object _7987 = NOVALUE; // 14470 7987
    object _7986 = NOVALUE; // 14469 7986
    object _7985 = NOVALUE; // 14468 7985
    object _7984 = NOVALUE; // 14467 7984
    object _7983 = NOVALUE; // 14466 7983
    object _7982 = NOVALUE; // 14464 7982
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_help pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg print_help pc: 5 op: STARTLINE (58)

    /** cmdline.e:384		integer pad_size = 0*/
    // SubProg print_help pc: 7 op: ASSIGN_I (113)
    _pad_size_14456 = 0;
    // SubProg print_help pc: 10 op: STARTLINE (58)

    /** cmdline.e:386		integer extras_mandatory = 0*/
    // SubProg print_help pc: 12 op: ASSIGN_I (113)
    _extras_mandatory_14458 = 0;
    // SubProg print_help pc: 15 op: STARTLINE (58)

    /** cmdline.e:387		integer extras_opt = 0*/
    // SubProg print_help pc: 17 op: ASSIGN_I (113)
    _extras_opt_14459 = 0;
    // SubProg print_help pc: 20 op: STARTLINE (58)

    /** cmdline.e:391		for i = 1 to length(opts) do*/
    // SubProg print_help pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14454)){
            _7982 = SEQ_PTR(_opts_14454)->length;
    }
    else {
        _7982 = 1;
    }
    // SubProg print_help pc: 25 op: FOR_I (125)
    {
        object _i_14463;
        _i_14463 = 1;
L1: // addr: 32 pc: 25 sub: 14452 op: 125
        if (_i_14463 > _7982){
            goto L2; // [25] 456
        }
        // SubProg print_help pc: 32 op: STARTLINE (58)

        /** cmdline.e:392			this_size = 0*/
        // SubProg print_help pc: 34 op: ASSIGN_I (113)
        _this_size_14457 = 0;
        // SubProg print_help pc: 37 op: STARTLINE (58)

        /** cmdline.e:393			param_name = ""*/
        // SubProg print_help pc: 39 op: ASSIGN (18)
        RefDS(_5);
        DeRef(_param_name_14460);
        _param_name_14460 = _5;
        // SubProg print_help pc: 42 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 44 op: STARTLINE (58)

        /** cmdline.e:395			if atom(opts[i][SHORTNAME]) and opts[i][SHORTNAME] = HEADER then*/
        // SubProg print_help pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _7983 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7983);
        _7984 = (object)*(((s1_ptr)_2)->base + 1);
        _7983 = NOVALUE;
        // SubProg print_help pc: 54 op: IS_AN_ATOM (67)
        _7985 = IS_ATOM(_7984);
        _7984 = NOVALUE;
        // SubProg print_help pc: 57 op: SC1_AND_IF (146)
        if (_7985 == 0) {
            goto L3; // [57] 82
        }
        // SubProg print_help pc: 61 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _7987 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 65 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7987);
        _7988 = (object)*(((s1_ptr)_2)->base + 1);
        _7987 = NOVALUE;
        // SubProg print_help pc: 69 op: EQUALS (3)
        if (IS_ATOM_INT(_7988)) {
            _7989 = (_7988 == 72);
        }
        else {
            _7989 = binary_op(EQUALS, _7988, 72);
        }
        _7988 = NOVALUE;
        // SubProg print_help pc: 73 op: NOP1 (159)
        // SubProg print_help pc: 74 op: IF (20)
        if (_7989 == 0) {
            DeRef(_7989);
            _7989 = NOVALUE;
            goto L3; // [74] 82
        }
        else {
            if (!IS_ATOM_INT(_7989) && DBL_PTR(_7989)->dbl == 0.0){
                DeRef(_7989);
                _7989 = NOVALUE;
                goto L3; // [74] 82
            }
            DeRef(_7989);
            _7989 = NOVALUE;
        }
        DeRef(_7989);
        _7989 = NOVALUE;
        // SubProg print_help pc: 77 op: STARTLINE (58)

        /** cmdline.e:396				continue*/
        // SubProg print_help pc: 79 op: ELSE (23)
        goto L4; // [79] 451
        // SubProg print_help pc: 81 op: NOP1 (159)
L3: // addr: 82 pc: 81 sub: 14452 op: 159
        // SubProg print_help pc: 82 op: STARTLINE (58)

        /** cmdline.e:399			if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 84 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _7990 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7990);
        _7991 = (object)*(((s1_ptr)_2)->base + 1);
        _7990 = NOVALUE;
        // SubProg print_help pc: 92 op: IS_AN_ATOM (67)
        _7992 = IS_ATOM(_7991);
        _7991 = NOVALUE;
        // SubProg print_help pc: 95 op: SC1_AND_IF (146)
        if (_7992 == 0) {
            goto L5; // [95] 148
        }
        // SubProg print_help pc: 99 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _7994 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7994);
        _7995 = (object)*(((s1_ptr)_2)->base + 2);
        _7994 = NOVALUE;
        // SubProg print_help pc: 107 op: IS_AN_ATOM (67)
        _7996 = IS_ATOM(_7995);
        _7995 = NOVALUE;
        // SubProg print_help pc: 110 op: NOP1 (159)
        // SubProg print_help pc: 111 op: IF (20)
        if (_7996 == 0)
        {
            _7996 = NOVALUE;
            goto L5; // [111] 148
        }
        else{
            _7996 = NOVALUE;
        }
        // SubProg print_help pc: 114 op: STARTLINE (58)

        /** cmdline.e:400				extras_opt = i*/
        // SubProg print_help pc: 116 op: ASSIGN_I (113)
        _extras_opt_14459 = _i_14463;
        // SubProg print_help pc: 119 op: STARTLINE (58)

        /** cmdline.e:401				if find(MANDATORY, opts[i][OPTIONS]) then*/
        // SubProg print_help pc: 121 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _7997 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 125 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7997);
        _7998 = (object)*(((s1_ptr)_2)->base + 4);
        _7997 = NOVALUE;
        // SubProg print_help pc: 129 op: FIND_FROM (176)
        _7999 = find_from(109, _7998, 1);
        _7998 = NOVALUE;
        // SubProg print_help pc: 134 op: IF (20)
        if (_7999 == 0)
        {
            _7999 = NOVALUE;
            goto L4; // [134] 451
        }
        else{
            _7999 = NOVALUE;
        }
        // SubProg print_help pc: 137 op: STARTLINE (58)

        /** cmdline.e:402					extras_mandatory = 1*/
        // SubProg print_help pc: 139 op: ASSIGN_I (113)
        _extras_mandatory_14458 = 1;
        // SubProg print_help pc: 142 op: NOP1 (159)
        // SubProg print_help pc: 143 op: STARTLINE (58)

        /** cmdline.e:405				continue*/
        // SubProg print_help pc: 145 op: ELSE (23)
        goto L4; // [145] 451
        // SubProg print_help pc: 147 op: NOP1 (159)
L5: // addr: 148 pc: 147 sub: 14452 op: 159
        // SubProg print_help pc: 148 op: STARTLINE (58)

        /** cmdline.e:408			if sequence(opts[i][SHORTNAME]) then*/
        // SubProg print_help pc: 150 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8000 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 154 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8000);
        _8001 = (object)*(((s1_ptr)_2)->base + 1);
        _8000 = NOVALUE;
        // SubProg print_help pc: 158 op: IS_A_SEQUENCE (68)
        _8002 = IS_SEQUENCE(_8001);
        _8001 = NOVALUE;
        // SubProg print_help pc: 161 op: IF (20)
        if (_8002 == 0)
        {
            _8002 = NOVALUE;
            goto L6; // [161] 214
        }
        else{
            _8002 = NOVALUE;
        }
        // SubProg print_help pc: 164 op: STARTLINE (58)

        /** cmdline.e:409				this_size += length(opts[i][SHORTNAME]) + 1 -- Allow for "-"*/
        // SubProg print_help pc: 166 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8003 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 170 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8003);
        _8004 = (object)*(((s1_ptr)_2)->base + 1);
        _8003 = NOVALUE;
        // SubProg print_help pc: 174 op: LENGTH (42)
        if (IS_SEQUENCE(_8004)){
                _8005 = SEQ_PTR(_8004)->length;
        }
        else {
            _8005 = 1;
        }
        _8004 = NOVALUE;
        // SubProg print_help pc: 177 op: PLUS1 (93)
        _8006 = _8005 + 1;
        _8005 = NOVALUE;
        // SubProg print_help pc: 181 op: PLUS (11)
        _this_size_14457 = _this_size_14457 + _8006;
        _8006 = NOVALUE;
        // SubProg print_help pc: 187 op: STARTLINE (58)

        /** cmdline.e:410				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        // SubProg print_help pc: 189 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8008 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 193 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8008);
        _8009 = (object)*(((s1_ptr)_2)->base + 4);
        _8008 = NOVALUE;
        // SubProg print_help pc: 197 op: FIND_FROM (176)
        _8010 = find_from(109, _8009, 1);
        _8009 = NOVALUE;
        // SubProg print_help pc: 202 op: EQUALS_IFW_I (121)
        if (_8010 != 0)
        goto L7; // [202] 213
        // SubProg print_help pc: 206 op: STARTLINE (58)

        /** cmdline.e:411					this_size += 2 -- Allow for '[' ']'*/
        // SubProg print_help pc: 208 op: PLUS_I (115)
        _this_size_14457 = _this_size_14457 + 2;
        // SubProg print_help pc: 212 op: NOP1 (159)
L7: // addr: 213 pc: 212 sub: 14452 op: 159
        // SubProg print_help pc: 213 op: NOP1 (159)
L6: // addr: 214 pc: 213 sub: 14452 op: 159
        // SubProg print_help pc: 214 op: STARTLINE (58)

        /** cmdline.e:415			if sequence(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 216 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8013 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 220 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8013);
        _8014 = (object)*(((s1_ptr)_2)->base + 2);
        _8013 = NOVALUE;
        // SubProg print_help pc: 224 op: IS_A_SEQUENCE (68)
        _8015 = IS_SEQUENCE(_8014);
        _8014 = NOVALUE;
        // SubProg print_help pc: 227 op: IF (20)
        if (_8015 == 0)
        {
            _8015 = NOVALUE;
            goto L8; // [227] 280
        }
        else{
            _8015 = NOVALUE;
        }
        // SubProg print_help pc: 230 op: STARTLINE (58)

        /** cmdline.e:416				this_size += length(opts[i][LONGNAME]) + 2 -- Allow for "--"*/
        // SubProg print_help pc: 232 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8016 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 236 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8016);
        _8017 = (object)*(((s1_ptr)_2)->base + 2);
        _8016 = NOVALUE;
        // SubProg print_help pc: 240 op: LENGTH (42)
        if (IS_SEQUENCE(_8017)){
                _8018 = SEQ_PTR(_8017)->length;
        }
        else {
            _8018 = 1;
        }
        _8017 = NOVALUE;
        // SubProg print_help pc: 243 op: PLUS (11)
        _8019 = _8018 + 2;
        _8018 = NOVALUE;
        // SubProg print_help pc: 247 op: PLUS (11)
        _this_size_14457 = _this_size_14457 + _8019;
        _8019 = NOVALUE;
        // SubProg print_help pc: 253 op: STARTLINE (58)

        /** cmdline.e:417				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        // SubProg print_help pc: 255 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8021 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 259 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8021);
        _8022 = (object)*(((s1_ptr)_2)->base + 4);
        _8021 = NOVALUE;
        // SubProg print_help pc: 263 op: FIND_FROM (176)
        _8023 = find_from(109, _8022, 1);
        _8022 = NOVALUE;
        // SubProg print_help pc: 268 op: EQUALS_IFW_I (121)
        if (_8023 != 0)
        goto L9; // [268] 279
        // SubProg print_help pc: 272 op: STARTLINE (58)

        /** cmdline.e:418					this_size += 2 -- Allow for '[' ']'*/
        // SubProg print_help pc: 274 op: PLUS_I (115)
        _this_size_14457 = _this_size_14457 + 2;
        // SubProg print_help pc: 278 op: NOP1 (159)
L9: // addr: 279 pc: 278 sub: 14452 op: 159
        // SubProg print_help pc: 279 op: NOP1 (159)
L8: // addr: 280 pc: 279 sub: 14452 op: 159
        // SubProg print_help pc: 280 op: STARTLINE (58)

        /** cmdline.e:422			if sequence(opts[i][SHORTNAME]) and sequence(opts[i][LONGNAME]) then*/
        // SubProg print_help pc: 282 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8026 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 286 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8026);
        _8027 = (object)*(((s1_ptr)_2)->base + 1);
        _8026 = NOVALUE;
        // SubProg print_help pc: 290 op: IS_A_SEQUENCE (68)
        _8028 = IS_SEQUENCE(_8027);
        _8027 = NOVALUE;
        // SubProg print_help pc: 293 op: SC1_AND_IF (146)
        if (_8028 == 0) {
            goto LA; // [293] 319
        }
        // SubProg print_help pc: 297 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8030 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 301 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8030);
        _8031 = (object)*(((s1_ptr)_2)->base + 2);
        _8030 = NOVALUE;
        // SubProg print_help pc: 305 op: IS_A_SEQUENCE (68)
        _8032 = IS_SEQUENCE(_8031);
        _8031 = NOVALUE;
        // SubProg print_help pc: 308 op: NOP1 (159)
        // SubProg print_help pc: 309 op: IF (20)
        if (_8032 == 0)
        {
            _8032 = NOVALUE;
            goto LA; // [309] 319
        }
        else{
            _8032 = NOVALUE;
        }
        // SubProg print_help pc: 312 op: STARTLINE (58)

        /** cmdline.e:423				this_size += 2 -- Allow for ", " between short and long names*/
        // SubProg print_help pc: 314 op: PLUS_I (115)
        _this_size_14457 = _this_size_14457 + 2;
        // SubProg print_help pc: 318 op: NOP1 (159)
LA: // addr: 319 pc: 318 sub: 14452 op: 159
        // SubProg print_help pc: 319 op: STARTLINE (58)

        /** cmdline.e:426			has_param = find(HAS_PARAMETER, opts[i][OPTIONS])*/
        // SubProg print_help pc: 321 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8034 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 325 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8034);
        _8035 = (object)*(((s1_ptr)_2)->base + 4);
        _8034 = NOVALUE;
        // SubProg print_help pc: 329 op: FIND_FROM (176)
        _has_param_14461 = find_from(112, _8035, 1);
        _8035 = NOVALUE;
        // SubProg print_help pc: 334 op: STARTLINE (58)

        /** cmdline.e:427			if has_param != 0 then*/
        // SubProg print_help pc: 336 op: NOTEQ_IFW_I (122)
        if (_has_param_14461 == 0)
        goto LB; // [336] 437
        // SubProg print_help pc: 340 op: STARTLINE (58)

        /** cmdline.e:428				this_size += 1 -- Allow for " "*/
        // SubProg print_help pc: 342 op: PLUS1_I (117)
        _this_size_14457 = _this_size_14457 + 1;
        // SubProg print_help pc: 346 op: STARTLINE (58)

        /** cmdline.e:429				if has_param < length(opts[i][OPTIONS]) then*/
        // SubProg print_help pc: 348 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8039 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 352 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8039);
        _8040 = (object)*(((s1_ptr)_2)->base + 4);
        _8039 = NOVALUE;
        // SubProg print_help pc: 356 op: LENGTH (42)
        if (IS_SEQUENCE(_8040)){
                _8041 = SEQ_PTR(_8040)->length;
        }
        else {
            _8041 = 1;
        }
        _8040 = NOVALUE;
        // SubProg print_help pc: 359 op: LESS_IFW_I (119)
        if (_has_param_14461 >= _8041)
        goto LC; // [359] 413
        // SubProg print_help pc: 363 op: STARTLINE (58)

        /** cmdline.e:431					if sequence(opts[i][OPTIONS][has_param]) then*/
        // SubProg print_help pc: 365 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8043 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8043);
        _8044 = (object)*(((s1_ptr)_2)->base + 4);
        _8043 = NOVALUE;
        // SubProg print_help pc: 373 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8044);
        _8045 = (object)*(((s1_ptr)_2)->base + _has_param_14461);
        _8044 = NOVALUE;
        // SubProg print_help pc: 377 op: IS_A_SEQUENCE (68)
        _8046 = IS_SEQUENCE(_8045);
        _8045 = NOVALUE;
        // SubProg print_help pc: 380 op: IF (20)
        if (_8046 == 0)
        {
            _8046 = NOVALUE;
            goto LD; // [380] 402
        }
        else{
            _8046 = NOVALUE;
        }
        // SubProg print_help pc: 383 op: STARTLINE (58)

        /** cmdline.e:432						param_name = opts[i][OPTIONS][has_param]*/
        // SubProg print_help pc: 385 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8047 = (object)*(((s1_ptr)_2)->base + _i_14463);
        // SubProg print_help pc: 389 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8047);
        _8048 = (object)*(((s1_ptr)_2)->base + 4);
        _8047 = NOVALUE;
        // SubProg print_help pc: 393 op: RHS_SUBS_CHECK (92)
        DeRef(_param_name_14460);
        _2 = (object)SEQ_PTR(_8048);
        _param_name_14460 = (object)*(((s1_ptr)_2)->base + _has_param_14461);
        Ref(_param_name_14460);
        _8048 = NOVALUE;
        // SubProg print_help pc: 397 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 399 op: ELSE (23)
        goto LE; // [399] 421
        // SubProg print_help pc: 401 op: NOP1 (159)
LD: // addr: 402 pc: 401 sub: 14452 op: 159
        // SubProg print_help pc: 402 op: STARTLINE (58)

        /** cmdline.e:434						param_name = "x"*/
        // SubProg print_help pc: 404 op: ASSIGN (18)
        RefDS(_7880);
        DeRef(_param_name_14460);
        _param_name_14460 = _7880;
        // SubProg print_help pc: 407 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 409 op: NOP1 (159)
        // SubProg print_help pc: 410 op: ELSE (23)
        goto LE; // [410] 421
        // SubProg print_help pc: 412 op: NOP1 (159)
LC: // addr: 413 pc: 412 sub: 14452 op: 159
        // SubProg print_help pc: 413 op: STARTLINE (58)

        /** cmdline.e:437					param_name = "x"*/
        // SubProg print_help pc: 415 op: ASSIGN (18)
        RefDS(_7880);
        DeRef(_param_name_14460);
        _param_name_14460 = _7880;
        // SubProg print_help pc: 418 op: SEQUENCE_CHECK (97)
        // SubProg print_help pc: 420 op: NOP1 (159)
LE: // addr: 421 pc: 420 sub: 14452 op: 159
        // SubProg print_help pc: 421 op: STARTLINE (58)

        /** cmdline.e:439				this_size += 2 + length(param_name)*/
        // SubProg print_help pc: 423 op: LENGTH (42)
        if (IS_SEQUENCE(_param_name_14460)){
                _8050 = SEQ_PTR(_param_name_14460)->length;
        }
        else {
            _8050 = 1;
        }
        // SubProg print_help pc: 426 op: PLUS (11)
        _8051 = 2 + _8050;
        _8050 = NOVALUE;
        // SubProg print_help pc: 430 op: PLUS (11)
        _this_size_14457 = _this_size_14457 + _8051;
        _8051 = NOVALUE;
        // SubProg print_help pc: 436 op: NOP1 (159)
LB: // addr: 437 pc: 436 sub: 14452 op: 159
        // SubProg print_help pc: 437 op: STARTLINE (58)

        /** cmdline.e:442			if pad_size < this_size then*/
        // SubProg print_help pc: 439 op: LESS_IFW_I (119)
        if (_pad_size_14456 >= _this_size_14457)
        goto LF; // [439] 449
        // SubProg print_help pc: 443 op: STARTLINE (58)

        /** cmdline.e:443				pad_size = this_size*/
        // SubProg print_help pc: 445 op: ASSIGN_I (113)
        _pad_size_14456 = _this_size_14457;
        // SubProg print_help pc: 448 op: NOP1 (159)
LF: // addr: 449 pc: 448 sub: 14452 op: 159
        // SubProg print_help pc: 449 op: STARTLINE (58)

        /** cmdline.e:445		end for*/
        // SubProg print_help pc: 451 op: ENDFOR_INT_UP1 (54)
L4: // addr: 451 pc: 451 sub: 14452 op: 54
        _i_14463 = _i_14463 + 1;
        goto L1; // [451] 32
L2: // addr: 456 pc: 451 sub: 14452 op: 54
        ;
    }
    // SubProg print_help pc: 456 op: STARTLINE (58)

    /** cmdline.e:446		pad_size += 3 -- Allow for minimum gap between cmd and its description*/
    // SubProg print_help pc: 458 op: PLUS_I (115)
    _pad_size_14456 = _pad_size_14456 + 3;
    // SubProg print_help pc: 462 op: STARTLINE (58)

    /** cmdline.e:448		printf(1, "%s options:\n", {cmds[2]})*/
    // SubProg print_help pc: 464 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmds_14455);
    _8056 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_help pc: 468 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8056);
    ((intptr_t*)_2)[1] = _8056;
    _8057 = MAKE_SEQ(_1);
    _8056 = NOVALUE;
    // SubProg print_help pc: 472 op: PRINTF (38)
    EPrintf(1, _8055, _8057);
    DeRefDS(_8057);
    _8057 = NOVALUE;
    // SubProg print_help pc: 476 op: STARTLINE (58)

    /** cmdline.e:450		for i = 1 to length(opts) do*/
    // SubProg print_help pc: 478 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14454)){
            _8058 = SEQ_PTR(_opts_14454)->length;
    }
    else {
        _8058 = 1;
    }
    // SubProg print_help pc: 481 op: FOR_I (125)
    {
        object _i_14555;
        _i_14555 = 1;
L10: // addr: 488 pc: 481 sub: 14452 op: 125
        if (_i_14555 > _8058){
            goto L11; // [481] 574
        }
        // SubProg print_help pc: 488 op: STARTLINE (58)

        /** cmdline.e:451			if atom(opts[i][1]) and opts[i][1] = HEADER then*/
        // SubProg print_help pc: 490 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8059 = (object)*(((s1_ptr)_2)->base + _i_14555);
        // SubProg print_help pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8059);
        _8060 = (object)*(((s1_ptr)_2)->base + 1);
        _8059 = NOVALUE;
        // SubProg print_help pc: 498 op: IS_AN_ATOM (67)
        _8061 = IS_ATOM(_8060);
        _8060 = NOVALUE;
        // SubProg print_help pc: 501 op: SC1_AND_IF (146)
        if (_8061 == 0) {
            goto L12; // [501] 557
        }
        // SubProg print_help pc: 505 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8063 = (object)*(((s1_ptr)_2)->base + _i_14555);
        // SubProg print_help pc: 509 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8063);
        _8064 = (object)*(((s1_ptr)_2)->base + 1);
        _8063 = NOVALUE;
        // SubProg print_help pc: 513 op: EQUALS (3)
        if (IS_ATOM_INT(_8064)) {
            _8065 = (_8064 == 72);
        }
        else {
            _8065 = binary_op(EQUALS, _8064, 72);
        }
        _8064 = NOVALUE;
        // SubProg print_help pc: 517 op: NOP1 (159)
        // SubProg print_help pc: 518 op: IF (20)
        if (_8065 == 0) {
            DeRef(_8065);
            _8065 = NOVALUE;
            goto L12; // [518] 557
        }
        else {
            if (!IS_ATOM_INT(_8065) && DBL_PTR(_8065)->dbl == 0.0){
                DeRef(_8065);
                _8065 = NOVALUE;
                goto L12; // [518] 557
            }
            DeRef(_8065);
            _8065 = NOVALUE;
        }
        DeRef(_8065);
        _8065 = NOVALUE;
        // SubProg print_help pc: 521 op: STARTLINE (58)

        /** cmdline.e:452				if i > 1 then*/
        // SubProg print_help pc: 523 op: GREATER_IFW_I (124)
        if (_i_14555 <= 1)
        goto L13; // [523] 534
        // SubProg print_help pc: 527 op: STARTLINE (58)

        /** cmdline.e:453					printf(1, "\n")*/
        // SubProg print_help pc: 529 op: PRINTF (38)
        EPrintf(1, _3182, _5);
        // SubProg print_help pc: 533 op: NOP1 (159)
L13: // addr: 534 pc: 533 sub: 14452 op: 159
        // SubProg print_help pc: 534 op: STARTLINE (58)

        /** cmdline.e:456				printf(1, "%s\n", { opts[i][2] })*/
        // SubProg print_help pc: 536 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8068 = (object)*(((s1_ptr)_2)->base + _i_14555);
        // SubProg print_help pc: 540 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8068);
        _8069 = (object)*(((s1_ptr)_2)->base + 2);
        _8068 = NOVALUE;
        // SubProg print_help pc: 544 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_8069);
        ((intptr_t*)_2)[1] = _8069;
        _8070 = MAKE_SEQ(_1);
        _8069 = NOVALUE;
        // SubProg print_help pc: 548 op: PRINTF (38)
        EPrintf(1, _8067, _8070);
        DeRefDS(_8070);
        _8070 = NOVALUE;
        // SubProg print_help pc: 552 op: STARTLINE (58)

        /** cmdline.e:457				continue*/
        // SubProg print_help pc: 554 op: ELSE (23)
        goto L14; // [554] 569
        // SubProg print_help pc: 556 op: NOP1 (159)
L12: // addr: 557 pc: 556 sub: 14452 op: 159
        // SubProg print_help pc: 557 op: STARTLINE (58)

        /** cmdline.e:460			print_option_help( opts[i], pad_size )*/
        // SubProg print_help pc: 559 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14454);
        _8071 = (object)*(((s1_ptr)_2)->base + _i_14555);
        // SubProg print_help pc: 563 op: PROC (27)
        Ref(_8071);
        _4print_option_help(_8071, _pad_size_14456);
        _8071 = NOVALUE;
        // SubProg print_help pc: 567 op: STARTLINE (58)

        /** cmdline.e:461		end for*/
        // SubProg print_help pc: 569 op: ENDFOR_INT_UP1 (54)
L14: // addr: 569 pc: 569 sub: 14452 op: 54
        _i_14555 = _i_14555 + 1;
        goto L10; // [569] 488
L11: // addr: 574 pc: 569 sub: 14452 op: 54
        ;
    }
    // SubProg print_help pc: 574 op: STARTLINE (58)

    /** cmdline.e:463		print_extras_help( opts, extras_mandatory, extras_opt )*/
    // SubProg print_help pc: 576 op: PROC (27)
    RefDS(_opts_14454);
    _4print_extras_help(_opts_14454, _extras_mandatory_14458, _extras_opt_14459);
    // SubProg print_help pc: 581 op: STARTLINE (58)

    /** cmdline.e:465		return pad_size*/
    // SubProg print_help pc: 583 op: RETURNF (28)

// Exiting block BLOCK: print_help

// block var opts_14454
    DeRefDS(_opts_14454);

// block var cmds_14455
    DeRefDS(_cmds_14455);

// block var this_size_14457

// block var extras_mandatory_14458

// block var extras_opt_14459

// block var param_name_14460
    DeRef(_param_name_14460);

// block var has_param_14461
    _8017 = NOVALUE;
    _8004 = NOVALUE;
    _8040 = NOVALUE;
    return _pad_size_14456;
    // SubProg print_help pc: 587 op: BADRETURNF (43)
    ;
}


void _4print_extras_help(object _opts_14576, object _extras_mandatory_14577, object _extras_opt_14578)
{
    object _8089 = NOVALUE; // 14600 8089
    object _8088 = NOVALUE; // 14599 8088
    object _8086 = NOVALUE; // 14598 8086
// skipping _8085  name type: 0
    object _8084 = NOVALUE; // 14596 8084
    object _8083 = NOVALUE; // 14595 8083
    object _8082 = NOVALUE; // 14594 8082
// skipping _8081  name type: 0
    object _8079 = NOVALUE; // 14588 8079
    object _8078 = NOVALUE; // 14587 8078
    object _8077 = NOVALUE; // 14586 8077
// skipping _8076  name type: 0
    object _8075 = NOVALUE; // 14584 8075
    object _8074 = NOVALUE; // 14583 8074
    object _8073 = NOVALUE; // 14582 8073
// skipping _8072  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_extras_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_extras_help pc: 3 op: INTEGER_CHECK (96)
    // SubProg print_extras_help pc: 5 op: INTEGER_CHECK (96)
    // SubProg print_extras_help pc: 7 op: STARTLINE (58)

    /** cmdline.e:470		if extras_mandatory != 0 then*/
    // SubProg print_extras_help pc: 9 op: NOTEQ_IFW_I (122)
    if (_extras_mandatory_14577 == 0)
    goto L1; // [9] 64
    // SubProg print_extras_help pc: 13 op: STARTLINE (58)

    /** cmdline.e:471			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    // SubProg print_extras_help pc: 15 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_14576);
    _8073 = (object)*(((s1_ptr)_2)->base + _extras_opt_14578);
    // SubProg print_extras_help pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8073);
    _8074 = (object)*(((s1_ptr)_2)->base + 3);
    _8073 = NOVALUE;
    // SubProg print_extras_help pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_8074)){
            _8075 = SEQ_PTR(_8074)->length;
    }
    else {
        _8075 = 1;
    }
    _8074 = NOVALUE;
    // SubProg print_extras_help pc: 26 op: GREATER_IFW_I (124)
    if (_8075 <= 0)
    goto L2; // [26] 55
    // SubProg print_extras_help pc: 30 op: STARTLINE (58)

    /** cmdline.e:472				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    // SubProg print_extras_help pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_14576);
    _8077 = (object)*(((s1_ptr)_2)->base + _extras_opt_14578);
    // SubProg print_extras_help pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8077);
    _8078 = (object)*(((s1_ptr)_2)->base + 3);
    _8077 = NOVALUE;
    // SubProg print_extras_help pc: 40 op: CONCAT (15)
    if (IS_SEQUENCE(_3182) && IS_ATOM(_8078)) {
        Ref(_8078);
        Append(&_8079, _3182, _8078);
    }
    else if (IS_ATOM(_3182) && IS_SEQUENCE(_8078)) {
    }
    else {
        Concat((object_ptr)&_8079, _3182, _8078);
    }
    _8078 = NOVALUE;
    // SubProg print_extras_help pc: 44 op: PUTS (44)
    EPuts(1, _8079); // DJP 
    DeRefDS(_8079);
    _8079 = NOVALUE;
    // SubProg print_extras_help pc: 47 op: STARTLINE (58)

    /** cmdline.e:473				puts(1, '\n')*/
    // SubProg print_extras_help pc: 49 op: PUTS (44)
    EPuts(1, 10); // DJP 
    // SubProg print_extras_help pc: 52 op: ELSE (23)
    goto L3; // [52] 120
    // SubProg print_extras_help pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 14574 op: 159
    // SubProg print_extras_help pc: 55 op: STARTLINE (58)

    /** cmdline.e:475				puts(1, "One or more additional arguments are also required\n")*/
    // SubProg print_extras_help pc: 57 op: PUTS (44)
    EPuts(1, _8080); // DJP 
    // SubProg print_extras_help pc: 60 op: NOP1 (159)
    // SubProg print_extras_help pc: 61 op: ELSE (23)
    goto L3; // [61] 120
    // SubProg print_extras_help pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 14574 op: 159
    // SubProg print_extras_help pc: 64 op: STARTLINE (58)

    /** cmdline.e:477		elsif extras_opt > 0 then*/
    // SubProg print_extras_help pc: 66 op: GREATER_IFW_I (124)
    if (_extras_opt_14578 <= 0)
    goto L4; // [66] 119
    // SubProg print_extras_help pc: 70 op: STARTLINE (58)

    /** cmdline.e:478			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    // SubProg print_extras_help pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_14576);
    _8082 = (object)*(((s1_ptr)_2)->base + _extras_opt_14578);
    // SubProg print_extras_help pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8082);
    _8083 = (object)*(((s1_ptr)_2)->base + 3);
    _8082 = NOVALUE;
    // SubProg print_extras_help pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_8083)){
            _8084 = SEQ_PTR(_8083)->length;
    }
    else {
        _8084 = 1;
    }
    _8083 = NOVALUE;
    // SubProg print_extras_help pc: 83 op: GREATER_IFW_I (124)
    if (_8084 <= 0)
    goto L5; // [83] 112
    // SubProg print_extras_help pc: 87 op: STARTLINE (58)

    /** cmdline.e:479				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    // SubProg print_extras_help pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opts_14576);
    _8086 = (object)*(((s1_ptr)_2)->base + _extras_opt_14578);
    // SubProg print_extras_help pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8086);
    _8088 = (object)*(((s1_ptr)_2)->base + 3);
    _8086 = NOVALUE;
    // SubProg print_extras_help pc: 97 op: CONCAT (15)
    if (IS_SEQUENCE(_3182) && IS_ATOM(_8088)) {
        Ref(_8088);
        Append(&_8089, _3182, _8088);
    }
    else if (IS_ATOM(_3182) && IS_SEQUENCE(_8088)) {
    }
    else {
        Concat((object_ptr)&_8089, _3182, _8088);
    }
    _8088 = NOVALUE;
    // SubProg print_extras_help pc: 101 op: PUTS (44)
    EPuts(1, _8089); // DJP 
    DeRefDS(_8089);
    _8089 = NOVALUE;
    // SubProg print_extras_help pc: 104 op: STARTLINE (58)

    /** cmdline.e:480				puts(1, '\n')*/
    // SubProg print_extras_help pc: 106 op: PUTS (44)
    EPuts(1, 10); // DJP 
    // SubProg print_extras_help pc: 109 op: ELSE (23)
    goto L6; // [109] 118
    // SubProg print_extras_help pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 14574 op: 159
    // SubProg print_extras_help pc: 112 op: STARTLINE (58)

    /** cmdline.e:482				puts(1, "One or more additional arguments can be supplied.\n")*/
    // SubProg print_extras_help pc: 114 op: PUTS (44)
    EPuts(1, _8090); // DJP 
    // SubProg print_extras_help pc: 117 op: NOP1 (159)
L6: // addr: 118 pc: 117 sub: 14574 op: 159
    // SubProg print_extras_help pc: 118 op: NOP1 (159)
L4: // addr: 119 pc: 118 sub: 14574 op: 159
    // SubProg print_extras_help pc: 119 op: NOP1 (159)
L3: // addr: 120 pc: 119 sub: 14574 op: 159
    // SubProg print_extras_help pc: 120 op: STARTLINE (58)

    /** cmdline.e:485	end procedure*/
    // SubProg print_extras_help pc: 122 op: RETURNP (29)

// Exiting block BLOCK: print_extras_help

// block var opts_14576
    DeRefDS(_opts_14576);

// block var extras_mandatory_14577

// block var extras_opt_14578
    _8083 = NOVALUE;
    _8074 = NOVALUE;
    return;
    // SubProg print_extras_help pc: 125 op: BADRETURNF (43)
    ;
}


void _4local_help(object _opts_14605, object _add_help_rid_14606, object _cmds_14607, object _std_14609, object _parse_options_14610)
{
    object _cmd_14611 = NOVALUE;
    object _is_mandatory_14612 = NOVALUE;
    object _extras_mandatory_14613 = NOVALUE;
    object _extras_opt_14614 = NOVALUE;
    object _auto_help_14615 = NOVALUE;
    object _po_14616 = NOVALUE;
    object _msg_inlined_crash_at_94_14635 = NOVALUE;
    object _pad_size_14642 = NOVALUE;
// skipping _8107  name type: 0
// skipping _8106  name type: 0
// skipping _8105  name type: 0
// skipping _8104  name type: 0
// skipping _8102  name type: 0
// skipping _8101  name type: 0
// skipping _8100  name type: 0
    object _8099 = NOVALUE; // 14628 8099
    object _8096 = NOVALUE; // 14623 8096
// skipping _8095  name type: 0
    object _8094 = NOVALUE; // 14621 8094
// skipping _8093  name type: 0
    object _8092 = NOVALUE; // 14618 8092
// skipping _8091  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg local_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 5 op: INTEGER_CHECK (96)
    // SubProg local_help pc: 7 op: STARTLINE (58)

    /** cmdline.e:492		integer extras_mandatory = 0*/
    // SubProg local_help pc: 9 op: ASSIGN_I (113)
    _extras_mandatory_14613 = 0;
    // SubProg local_help pc: 12 op: STARTLINE (58)

    /** cmdline.e:493		integer extras_opt = 0*/
    // SubProg local_help pc: 14 op: ASSIGN_I (113)
    _extras_opt_14614 = 0;
    // SubProg local_help pc: 17 op: STARTLINE (58)

    /** cmdline.e:494		integer auto_help = 1*/
    // SubProg local_help pc: 19 op: ASSIGN_I (113)
    _auto_help_14615 = 1;
    // SubProg local_help pc: 22 op: STARTLINE (58)

    /** cmdline.e:496		integer po = 1*/
    // SubProg local_help pc: 24 op: ASSIGN_I (113)
    _po_14616 = 1;
    // SubProg local_help pc: 27 op: STARTLINE (58)

    /** cmdline.e:497		if atom(parse_options) then*/
    // SubProg local_help pc: 29 op: IS_AN_ATOM (67)
    _8092 = IS_ATOM(_parse_options_14610);
    // SubProg local_help pc: 32 op: IF (20)
    if (_8092 == 0)
    {
        _8092 = NOVALUE;
        goto L1; // [32] 42
    }
    else{
        _8092 = NOVALUE;
    }
    // SubProg local_help pc: 35 op: STARTLINE (58)

    /** cmdline.e:498			parse_options = {parse_options}*/
    // SubProg local_help pc: 37 op: RIGHT_BRACE_N (31)
    _0 = _parse_options_14610;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_parse_options_14610);
    ((intptr_t*)_2)[1] = _parse_options_14610;
    _parse_options_14610 = MAKE_SEQ(_1);
    DeRefi(_0);
    // SubProg local_help pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 14603 op: 159
    // SubProg local_help pc: 42 op: STARTLINE (58)

    /** cmdline.e:501		while po <= length(parse_options) do*/
    // SubProg local_help pc: 44 op: NOP2 (110)
    // SubProg local_help pc: 46 op: NOPWHILE (158)
L2: // addr: 47 pc: 46 sub: 14603 op: 158
    // SubProg local_help pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_parse_options_14610)){
            _8094 = SEQ_PTR(_parse_options_14610)->length;
    }
    else {
        _8094 = 1;
    }
    // SubProg local_help pc: 50 op: LESSEQ_IFW_I (123)
    if (_po_14616 > _8094)
    goto L3; // [50] 143
    // SubProg local_help pc: 54 op: STARTLINE (58)

    /** cmdline.e:502			switch parse_options[po] do*/
    // SubProg local_help pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_parse_options_14610);
    _8096 = (object)*(((s1_ptr)_2)->base + _po_14616);
    // SubProg local_help pc: 60 op: SWITCH_I (193)
    if (IS_SEQUENCE(_8096) ){
        goto L4; // [60] 129
    }
    if(!IS_ATOM_INT(_8096)){
        if( (DBL_PTR(_8096)->dbl != (eudouble) ((object) DBL_PTR(_8096)->dbl) ) ){
            goto L4; // [60] 129
        }
        _0 = (object) DBL_PTR(_8096)->dbl;
    }
    else {
        _0 = _8096;
    };
    _8096 = NOVALUE;
    switch ( _0 ){ 
        // SubProg local_help pc: 65 op: STARTLINE (58)

        /** cmdline.e:503				case HELP_RID then*/
        // SubProg local_help pc: 67 op: CASE (186)
        case 1:
        // SubProg local_help pc: 69 op: STARTLINE (58)

        /** cmdline.e:504					if po < length(parse_options) then*/
        // SubProg local_help pc: 71 op: LENGTH (42)
        if (IS_SEQUENCE(_parse_options_14610)){
                _8099 = SEQ_PTR(_parse_options_14610)->length;
        }
        else {
            _8099 = 1;
        }
        // SubProg local_help pc: 74 op: LESS_IFW_I (119)
        if (_po_14616 >= _8099)
        goto L5; // [74] 93
        // SubProg local_help pc: 78 op: STARTLINE (58)

        /** cmdline.e:505						po += 1*/
        // SubProg local_help pc: 80 op: PLUS1_I (117)
        _po_14616 = _po_14616 + 1;
        // SubProg local_help pc: 84 op: STARTLINE (58)

        /** cmdline.e:506						add_help_rid = parse_options[po]*/
        // SubProg local_help pc: 86 op: RHS_SUBS_CHECK (92)
        DeRef(_add_help_rid_14606);
        _2 = (object)SEQ_PTR(_parse_options_14610);
        _add_help_rid_14606 = (object)*(((s1_ptr)_2)->base + _po_14616);
        Ref(_add_help_rid_14606);
        // SubProg local_help pc: 90 op: ELSE (23)
        goto L6; // [90] 132
        // SubProg local_help pc: 92 op: NOP1 (159)
L5: // addr: 93 pc: 92 sub: 14603 op: 159
        // SubProg local_help pc: 93 op: STARTLINE (58)

        /** cmdline.e:508						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/
        // SubProg local_help pc: 95 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg local_help pc: 97 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_94_14635);
        _msg_inlined_crash_at_94_14635 = EPrintf(-9999999, _8103, _5);
        // SubProg local_help pc: 101 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg local_help pc: 103 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_94_14635);
        // SubProg local_help pc: 106 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg local_help pc: 108 op: ELSE (23)
        goto L7; // [108] 111
        // SubProg local_help pc: 110 op: NOP1 (159)
L7: // addr: 111 pc: 110 sub: 14603 op: 159
        // SubProg local_help pc: 111 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from local_help @ 94

// block var msg_inlined_crash_at_94_14635
        DeRefi(_msg_inlined_crash_at_94_14635);
        _msg_inlined_crash_at_94_14635 = NOVALUE;
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
        _auto_help_14615 = 0;
        // SubProg local_help pc: 125 op: ELSE (23)
        goto L6; // [125] 132
        // SubProg local_help pc: 127 op: STARTLINE (58)

        /** cmdline.e:514				case else*/
        // SubProg local_help pc: 129 op: CASE (186)
        default:
L4: // addr: 129 pc: 129 sub: 14603 op: 186
        // SubProg local_help pc: 131 op: NOPSWITCH (187)
    ;}L6: // addr: 132 pc: 131 sub: 14603 op: 187
    // SubProg local_help pc: 132 op: STARTLINE (58)

    /** cmdline.e:518			po += 1*/
    // SubProg local_help pc: 134 op: PLUS1_I (117)
    _po_14616 = _po_14616 + 1;
    // SubProg local_help pc: 138 op: STARTLINE (58)

    /** cmdline.e:519		end while*/
    // SubProg local_help pc: 140 op: ENDWHILE (22)
    goto L2; // [140] 47
    // SubProg local_help pc: 142 op: NOP1 (159)
L3: // addr: 143 pc: 142 sub: 14603 op: 159
    // SubProg local_help pc: 143 op: STARTLINE (58)

    /** cmdline.e:521		if std = 0 then*/
    // SubProg local_help pc: 145 op: EQUALS_IFW_I (121)
    if (_std_14609 != 0)
    goto L8; // [145] 159
    // SubProg local_help pc: 149 op: STARTLINE (58)

    /** cmdline.e:522			opts = standardize_opts(opts, auto_help)*/
    // SubProg local_help pc: 151 op: PROC (27)
    RefDS(_opts_14605);
    _0 = _opts_14605;
    _opts_14605 = _4standardize_opts(_opts_14605, _auto_help_14615);
    DeRefDS(_0);
    // SubProg local_help pc: 156 op: SEQUENCE_CHECK (97)
    // SubProg local_help pc: 158 op: NOP1 (159)
L8: // addr: 159 pc: 158 sub: 14603 op: 159
    // SubProg local_help pc: 159 op: STARTLINE (58)

    /** cmdline.e:525		integer pad_size = print_help( opts, cmds )*/
    // SubProg local_help pc: 161 op: PROC (27)
    RefDS(_opts_14605);
    RefDS(_cmds_14607);
    _pad_size_14642 = _4print_help(_opts_14605, _cmds_14607);
    // SubProg local_help pc: 166 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pad_size_14642)) {
        _1 = (object)(DBL_PTR(_pad_size_14642)->dbl);
        DeRefDS(_pad_size_14642);
        _pad_size_14642 = _1;
    }
    // SubProg local_help pc: 168 op: STARTLINE (58)

    /** cmdline.e:527		call_user_help( add_help_rid )*/
    // SubProg local_help pc: 170 op: PROC (27)
    Ref(_add_help_rid_14606);
    _4call_user_help(_add_help_rid_14606);
    // SubProg local_help pc: 173 op: STARTLINE (58)

    /** cmdline.e:529	end procedure*/
    // SubProg local_help pc: 175 op: RETURNP (29)

// Exiting block BLOCK: local_help

// block var opts_14605
    DeRefDS(_opts_14605);

// block var add_help_rid_14606
    DeRef(_add_help_rid_14606);

// block var cmds_14607
    DeRefDS(_cmds_14607);

// block var std_14609

// block var parse_options_14610
    DeRef(_parse_options_14610);

// block var extras_mandatory_14613

// block var extras_opt_14614

// block var auto_help_14615

// block var po_14616

// block var pad_size_14642
    return;
    // SubProg local_help pc: 178 op: BADRETURNF (43)
    ;
}


void _4call_user_help(object _add_help_rid_14647)
{
    object _8123 = NOVALUE; // 14671 8123
    object _8122 = NOVALUE; // 14670 8122
    object _8121 = NOVALUE; // 14669 8121
    object _8120 = NOVALUE; // 14668 8120
// skipping _8119  name type: 0
    object _8118 = NOVALUE; // 14666 8118
    object _8117 = NOVALUE; // 14665 8117
    object _8116 = NOVALUE; // 14664 8116
    object _8115 = NOVALUE; // 14662 8115
    object _8114 = NOVALUE; // 14661 8114
// skipping _8113  name type: 0
    object _8112 = NOVALUE; // 14657 8112
// skipping _8111  name type: 0
    object _8110 = NOVALUE; // 14654 8110
// skipping _8109  name type: 0
    object _8108 = NOVALUE; // 14649 8108
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg call_user_help pc: 1 op: STARTLINE (58)

    /** cmdline.e:532		if atom(add_help_rid) then*/
    // SubProg call_user_help pc: 3 op: IS_AN_ATOM (67)
    _8108 = IS_ATOM(_add_help_rid_14647);
    // SubProg call_user_help pc: 6 op: IF (20)
    if (_8108 == 0)
    {
        _8108 = NOVALUE;
        goto L1; // [6] 34
    }
    else{
        _8108 = NOVALUE;
    }
    // SubProg call_user_help pc: 9 op: STARTLINE (58)

    /** cmdline.e:533			if add_help_rid >= 0 then*/
    // SubProg call_user_help pc: 11 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _add_help_rid_14647, 0)){
        goto L2; // [11] 142
    }
    // SubProg call_user_help pc: 15 op: STARTLINE (58)

    /** cmdline.e:534				puts(1, "\n")*/
    // SubProg call_user_help pc: 17 op: PUTS (44)
    EPuts(1, _3182); // DJP 
    // SubProg call_user_help pc: 20 op: STARTLINE (58)

    /** cmdline.e:535				call_proc(add_help_rid, {})*/
    // SubProg call_user_help pc: 22 op: CALL_PROC (136)
    _0 = (object)_00[_add_help_rid_14647].addr;
    (*(intptr_t (*)())_0)(
                         );
    // SubProg call_user_help pc: 25 op: STARTLINE (58)

    /** cmdline.e:536				puts(1, "\n")*/
    // SubProg call_user_help pc: 27 op: PUTS (44)
    EPuts(1, _3182); // DJP 
    // SubProg call_user_help pc: 30 op: NOP1 (159)
    // SubProg call_user_help pc: 31 op: ELSE (23)
    goto L2; // [31] 142
    // SubProg call_user_help pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 14645 op: 159
    // SubProg call_user_help pc: 34 op: STARTLINE (58)

    /** cmdline.e:539			if length(add_help_rid) > 0 then*/
    // SubProg call_user_help pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_add_help_rid_14647)){
            _8110 = SEQ_PTR(_add_help_rid_14647)->length;
    }
    else {
        _8110 = 1;
    }
    // SubProg call_user_help pc: 39 op: GREATER_IFW_I (124)
    if (_8110 <= 0)
    goto L3; // [39] 141
    // SubProg call_user_help pc: 43 op: STARTLINE (58)

    /** cmdline.e:540				puts(1, "\n")*/
    // SubProg call_user_help pc: 45 op: PUTS (44)
    EPuts(1, _3182); // DJP 
    // SubProg call_user_help pc: 48 op: STARTLINE (58)

    /** cmdline.e:541				if types:t_display(add_help_rid) then*/
    // SubProg call_user_help pc: 50 op: PROC (27)
    Ref(_add_help_rid_14647);
    _8112 = _13t_display(_add_help_rid_14647);
    // SubProg call_user_help pc: 54 op: IF (20)
    if (_8112 == 0) {
        DeRef(_8112);
        _8112 = NOVALUE;
        goto L4; // [54] 64
    }
    else {
        if (!IS_ATOM_INT(_8112) && DBL_PTR(_8112)->dbl == 0.0){
            DeRef(_8112);
            _8112 = NOVALUE;
            goto L4; // [54] 64
        }
        DeRef(_8112);
        _8112 = NOVALUE;
    }
    DeRef(_8112);
    _8112 = NOVALUE;
    // SubProg call_user_help pc: 57 op: STARTLINE (58)

    /** cmdline.e:542					add_help_rid = {add_help_rid}*/
    // SubProg call_user_help pc: 59 op: RIGHT_BRACE_N (31)
    _0 = _add_help_rid_14647;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_add_help_rid_14647);
    ((intptr_t*)_2)[1] = _add_help_rid_14647;
    _add_help_rid_14647 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg call_user_help pc: 63 op: NOP1 (159)
L4: // addr: 64 pc: 63 sub: 14645 op: 159
    // SubProg call_user_help pc: 64 op: STARTLINE (58)

    /** cmdline.e:545				for i = 1 to length(add_help_rid) do*/
    // SubProg call_user_help pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_add_help_rid_14647)){
            _8114 = SEQ_PTR(_add_help_rid_14647)->length;
    }
    else {
        _8114 = 1;
    }
    // SubProg call_user_help pc: 69 op: FOR_I (125)
    {
        object _i_14660;
        _i_14660 = 1;
L5: // addr: 76 pc: 69 sub: 14645 op: 125
        if (_i_14660 > _8114){
            goto L6; // [69] 135
        }
        // SubProg call_user_help pc: 76 op: STARTLINE (58)

        /** cmdline.e:546					puts(1, add_help_rid[i])*/
        // SubProg call_user_help pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_14647);
        _8115 = (object)*(((s1_ptr)_2)->base + _i_14660);
        // SubProg call_user_help pc: 82 op: PUTS (44)
        EPuts(1, _8115); // DJP 
        _8115 = NOVALUE;
        // SubProg call_user_help pc: 85 op: STARTLINE (58)

        /** cmdline.e:547					if length(add_help_rid[i]) = 0 or add_help_rid[i][$] != '\n' then*/
        // SubProg call_user_help pc: 87 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_14647);
        _8116 = (object)*(((s1_ptr)_2)->base + _i_14660);
        // SubProg call_user_help pc: 91 op: LENGTH (42)
        if (IS_SEQUENCE(_8116)){
                _8117 = SEQ_PTR(_8116)->length;
        }
        else {
            _8117 = 1;
        }
        _8116 = NOVALUE;
        // SubProg call_user_help pc: 94 op: EQUALS (3)
        _8118 = (_8117 == 0);
        _8117 = NOVALUE;
        // SubProg call_user_help pc: 98 op: SC1_OR_IF (147)
        if (_8118 != 0) {
            goto L7; // [98] 122
        }
        // SubProg call_user_help pc: 102 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_add_help_rid_14647);
        _8120 = (object)*(((s1_ptr)_2)->base + _i_14660);
        // SubProg call_user_help pc: 106 op: LENGTH (42)
        if (IS_SEQUENCE(_8120)){
                _8121 = SEQ_PTR(_8120)->length;
        }
        else {
            _8121 = 1;
        }
        // SubProg call_user_help pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8120);
        _8122 = (object)*(((s1_ptr)_2)->base + _8121);
        _8120 = NOVALUE;
        // SubProg call_user_help pc: 113 op: NOTEQ (4)
        if (IS_ATOM_INT(_8122)) {
            _8123 = (_8122 != 10);
        }
        else {
            _8123 = binary_op(NOTEQ, _8122, 10);
        }
        _8122 = NOVALUE;
        // SubProg call_user_help pc: 117 op: NOP1 (159)
        // SubProg call_user_help pc: 118 op: IF (20)
        if (_8123 == 0) {
            DeRef(_8123);
            _8123 = NOVALUE;
            goto L8; // [118] 128
        }
        else {
            if (!IS_ATOM_INT(_8123) && DBL_PTR(_8123)->dbl == 0.0){
                DeRef(_8123);
                _8123 = NOVALUE;
                goto L8; // [118] 128
            }
            DeRef(_8123);
            _8123 = NOVALUE;
        }
        DeRef(_8123);
        _8123 = NOVALUE;
        // SubProg call_user_help pc: 121 op: NOP1 (159)
L7: // addr: 122 pc: 121 sub: 14645 op: 159
        // SubProg call_user_help pc: 122 op: STARTLINE (58)

        /** cmdline.e:548						puts(1, '\n')*/
        // SubProg call_user_help pc: 124 op: PUTS (44)
        EPuts(1, 10); // DJP 
        // SubProg call_user_help pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 14645 op: 159
        // SubProg call_user_help pc: 128 op: STARTLINE (58)

        /** cmdline.e:550				end for*/
        // SubProg call_user_help pc: 130 op: ENDFOR_INT_UP1 (54)
        _i_14660 = _i_14660 + 1;
        goto L5; // [130] 76
L6: // addr: 135 pc: 130 sub: 14645 op: 54
        ;
    }
    // SubProg call_user_help pc: 135 op: STARTLINE (58)

    /** cmdline.e:552				puts(1, "\n")*/
    // SubProg call_user_help pc: 137 op: PUTS (44)
    EPuts(1, _3182); // DJP 
    // SubProg call_user_help pc: 140 op: NOP1 (159)
L3: // addr: 141 pc: 140 sub: 14645 op: 159
    // SubProg call_user_help pc: 141 op: NOP1 (159)
L2: // addr: 142 pc: 141 sub: 14645 op: 159
    // SubProg call_user_help pc: 142 op: STARTLINE (58)

    /** cmdline.e:555	end procedure*/
    // SubProg call_user_help pc: 144 op: RETURNP (29)

// Exiting block BLOCK: call_user_help

// block var add_help_rid_14647
    DeRef(_add_help_rid_14647);
    DeRef(_8118);
    _8118 = NOVALUE;
    _8116 = NOVALUE;
    return;
    // SubProg call_user_help pc: 147 op: BADRETURNF (43)
    ;
}


void _4print_option_help(object _opt_14674, object _pad_size_14675)
{
    object _has_param_14682 = NOVALUE;
    object _param_name_14685 = NOVALUE;
    object _is_mandatory_14701 = NOVALUE;
    object _cmd_14705 = NOVALUE;
    object _8180 = NOVALUE; // 14753 8180
    object _8179 = NOVALUE; // 14752 8179
    object _8178 = NOVALUE; // 14751 8178
    object _8177 = NOVALUE; // 14750 8177
    object _8176 = NOVALUE; // 14748 8176
    object _8175 = NOVALUE; // 14747 8175
    object _8174 = NOVALUE; // 14746 8174
// skipping _8172  name type: 0
    object _8171 = NOVALUE; // 14743 8171
// skipping _8170  name type: 0
// skipping _8169  name type: 0
// skipping _8168  name type: 0
    object _8167 = NOVALUE; // 14737 8167
// skipping _8166  name type: 0
// skipping _8165  name type: 0
    object _8164 = NOVALUE; // 14733 8164
    object _8163 = NOVALUE; // 14732 8163
// skipping _8162  name type: 0
// skipping _8161  name type: 0
// skipping _8160  name type: 0
// skipping _8159  name type: 0
    object _8158 = NOVALUE; // 14726 8158
    object _8157 = NOVALUE; // 14724 8157
    object _8156 = NOVALUE; // 14723 8156
// skipping _8155  name type: 0
// skipping _8154  name type: 0
// skipping _8153  name type: 0
    object _8152 = NOVALUE; // 14717 8152
// skipping _8151  name type: 0
// skipping _8150  name type: 0
    object _8149 = NOVALUE; // 14713 8149
    object _8148 = NOVALUE; // 14712 8148
// skipping _8147  name type: 0
// skipping _8146  name type: 0
    object _8145 = NOVALUE; // 14708 8145
    object _8144 = NOVALUE; // 14707 8144
// skipping _8143  name type: 0
    object _8142 = NOVALUE; // 14703 8142
    object _8141 = NOVALUE; // 14702 8141
// skipping _8140  name type: 0
    object _8139 = NOVALUE; // 14697 8139
    object _8138 = NOVALUE; // 14696 8138
    object _8137 = NOVALUE; // 14695 8137
    object _8136 = NOVALUE; // 14694 8136
// skipping _8135  name type: 0
// skipping _8134  name type: 0
    object _8133 = NOVALUE; // 14690 8133
    object _8132 = NOVALUE; // 14689 8132
// skipping _8131  name type: 0
// skipping _8130  name type: 0
    object _8129 = NOVALUE; // 14683 8129
    object _8128 = NOVALUE; // 14681 8128
    object _8127 = NOVALUE; // 14680 8127
    object _8126 = NOVALUE; // 14679 8126
    object _8125 = NOVALUE; // 14678 8125
    object _8124 = NOVALUE; // 14677 8124
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg print_option_help pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 3 op: INTEGER_CHECK (96)
    // SubProg print_option_help pc: 5 op: STARTLINE (58)

    /** cmdline.e:558		if atom(opt[SHORTNAME]) and atom(opt[LONGNAME]) then*/
    // SubProg print_option_help pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8124 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 11 op: IS_AN_ATOM (67)
    _8125 = IS_ATOM(_8124);
    _8124 = NOVALUE;
    // SubProg print_option_help pc: 14 op: SC1_AND_IF (146)
    if (_8125 == 0) {
        goto L1; // [14] 35
    }
    // SubProg print_option_help pc: 18 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8127 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 22 op: IS_AN_ATOM (67)
    _8128 = IS_ATOM(_8127);
    _8127 = NOVALUE;
    // SubProg print_option_help pc: 25 op: NOP1 (159)
    // SubProg print_option_help pc: 26 op: IF (20)
    if (_8128 == 0)
    {
        _8128 = NOVALUE;
        goto L1; // [26] 35
    }
    else{
        _8128 = NOVALUE;
    }
    // SubProg print_option_help pc: 29 op: STARTLINE (58)

    /** cmdline.e:560			return*/
    // SubProg print_option_help pc: 31 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: print_option_help

// block var opt_14674
    DeRefDS(_opt_14674);

// block var pad_size_14675

// block var has_param_14682

// block var param_name_14685
    DeRef(_param_name_14685);

// block var is_mandatory_14701

// block var cmd_14705
    DeRef(_cmd_14705);
    return;
    // SubProg print_option_help pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 14672 op: 159
    // SubProg print_option_help pc: 35 op: STARTLINE (58)

    /** cmdline.e:563		integer has_param = find(HAS_PARAMETER, opt[OPTIONS])*/
    // SubProg print_option_help pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8129 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 41 op: FIND_FROM (176)
    _has_param_14682 = find_from(112, _8129, 1);
    _8129 = NOVALUE;
    // SubProg print_option_help pc: 46 op: STARTLINE (58)

    /** cmdline.e:564		sequence param_name*/
    // SubProg print_option_help pc: 48 op: STARTLINE (58)

    /** cmdline.e:565		if has_param != 0 then*/
    // SubProg print_option_help pc: 50 op: NOTEQ_IFW_I (122)
    if (_has_param_14682 == 0)
    goto L2; // [50] 124
    // SubProg print_option_help pc: 54 op: STARTLINE (58)

    /** cmdline.e:566			if has_param < length(opt[OPTIONS]) then*/
    // SubProg print_option_help pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8132 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_8132)){
            _8133 = SEQ_PTR(_8132)->length;
    }
    else {
        _8133 = 1;
    }
    _8132 = NOVALUE;
    // SubProg print_option_help pc: 63 op: LESS_IFW_I (119)
    if (_has_param_14682 >= _8133)
    goto L3; // [63] 115
    // SubProg print_option_help pc: 67 op: STARTLINE (58)

    /** cmdline.e:567				has_param += 1*/
    // SubProg print_option_help pc: 69 op: PLUS1_I (117)
    _has_param_14682 = _has_param_14682 + 1;
    // SubProg print_option_help pc: 73 op: STARTLINE (58)

    /** cmdline.e:568				if sequence(opt[OPTIONS][has_param]) then*/
    // SubProg print_option_help pc: 75 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8136 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8136);
    _8137 = (object)*(((s1_ptr)_2)->base + _has_param_14682);
    _8136 = NOVALUE;
    // SubProg print_option_help pc: 83 op: IS_A_SEQUENCE (68)
    _8138 = IS_SEQUENCE(_8137);
    _8137 = NOVALUE;
    // SubProg print_option_help pc: 86 op: IF (20)
    if (_8138 == 0)
    {
        _8138 = NOVALUE;
        goto L4; // [86] 104
    }
    else{
        _8138 = NOVALUE;
    }
    // SubProg print_option_help pc: 89 op: STARTLINE (58)

    /** cmdline.e:569					param_name = opt[OPTIONS][has_param]*/
    // SubProg print_option_help pc: 91 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8139 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 95 op: RHS_SUBS_CHECK (92)
    DeRef(_param_name_14685);
    _2 = (object)SEQ_PTR(_8139);
    _param_name_14685 = (object)*(((s1_ptr)_2)->base + _has_param_14682);
    Ref(_param_name_14685);
    _8139 = NOVALUE;
    // SubProg print_option_help pc: 99 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 101 op: ELSE (23)
    goto L5; // [101] 123
    // SubProg print_option_help pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 14672 op: 159
    // SubProg print_option_help pc: 104 op: STARTLINE (58)

    /** cmdline.e:571					param_name = "x"*/
    // SubProg print_option_help pc: 106 op: ASSIGN (18)
    RefDS(_7880);
    DeRef(_param_name_14685);
    _param_name_14685 = _7880;
    // SubProg print_option_help pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 111 op: NOP1 (159)
    // SubProg print_option_help pc: 112 op: ELSE (23)
    goto L5; // [112] 123
    // SubProg print_option_help pc: 114 op: NOP1 (159)
L3: // addr: 115 pc: 114 sub: 14672 op: 159
    // SubProg print_option_help pc: 115 op: STARTLINE (58)

    /** cmdline.e:574				param_name = "x"*/
    // SubProg print_option_help pc: 117 op: ASSIGN (18)
    RefDS(_7880);
    DeRef(_param_name_14685);
    _param_name_14685 = _7880;
    // SubProg print_option_help pc: 120 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 14672 op: 159
    // SubProg print_option_help pc: 123 op: NOP1 (159)
L2: // addr: 124 pc: 123 sub: 14672 op: 159
    // SubProg print_option_help pc: 124 op: STARTLINE (58)

    /** cmdline.e:577		integer is_mandatory = (find(MANDATORY, opt[OPTIONS]) != 0)*/
    // SubProg print_option_help pc: 126 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8141 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg print_option_help pc: 130 op: FIND_FROM (176)
    _8142 = find_from(109, _8141, 1);
    _8141 = NOVALUE;
    // SubProg print_option_help pc: 135 op: NOTEQ (4)
    _is_mandatory_14701 = (_8142 != 0);
    _8142 = NOVALUE;
    // SubProg print_option_help pc: 139 op: STARTLINE (58)

    /** cmdline.e:578		sequence cmd = ""*/
    // SubProg print_option_help pc: 141 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_cmd_14705);
    _cmd_14705 = _5;
    // SubProg print_option_help pc: 144 op: SEQUENCE_CHECK (97)
    // SubProg print_option_help pc: 146 op: STARTLINE (58)

    /** cmdline.e:580		if sequence(opt[SHORTNAME]) then*/
    // SubProg print_option_help pc: 148 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8144 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 152 op: IS_A_SEQUENCE (68)
    _8145 = IS_SEQUENCE(_8144);
    _8144 = NOVALUE;
    // SubProg print_option_help pc: 155 op: IF (20)
    if (_8145 == 0)
    {
        _8145 = NOVALUE;
        goto L6; // [155] 216
    }
    else{
        _8145 = NOVALUE;
    }
    // SubProg print_option_help pc: 158 op: STARTLINE (58)

    /** cmdline.e:581			if not is_mandatory then*/
    // SubProg print_option_help pc: 160 op: NOT_IFW (108)
    if (_is_mandatory_14701 != 0)
    goto L7; // [160] 170
    // SubProg print_option_help pc: 163 op: STARTLINE (58)

    /** cmdline.e:582				cmd &= '['*/
    // SubProg print_option_help pc: 165 op: CONCAT (15)
    Append(&_cmd_14705, _cmd_14705, 91);
    // SubProg print_option_help pc: 169 op: NOP1 (159)
L7: // addr: 170 pc: 169 sub: 14672 op: 159
    // SubProg print_option_help pc: 170 op: STARTLINE (58)

    /** cmdline.e:584			cmd &= '-' & opt[SHORTNAME]*/
    // SubProg print_option_help pc: 172 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8148 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg print_option_help pc: 176 op: CONCAT (15)
    if (IS_SEQUENCE(45) && IS_ATOM(_8148)) {
    }
    else if (IS_ATOM(45) && IS_SEQUENCE(_8148)) {
        Prepend(&_8149, _8148, 45);
    }
    else {
        Concat((object_ptr)&_8149, 45, _8148);
    }
    _8148 = NOVALUE;
    // SubProg print_option_help pc: 180 op: CONCAT (15)
    Concat((object_ptr)&_cmd_14705, _cmd_14705, _8149);
    DeRefDS(_8149);
    _8149 = NOVALUE;
    // SubProg print_option_help pc: 184 op: STARTLINE (58)

    /** cmdline.e:585			if has_param != 0 then*/
    // SubProg print_option_help pc: 186 op: NOTEQ_IFW_I (122)
    if (_has_param_14682 == 0)
    goto L8; // [186] 203
    // SubProg print_option_help pc: 190 op: STARTLINE (58)

    /** cmdline.e:586				cmd &= ' ' & param_name*/
    // SubProg print_option_help pc: 192 op: PRIVATE_INIT_CHECK (30)
    // SubProg print_option_help pc: 194 op: CONCAT (15)
    Prepend(&_8152, _param_name_14685, 32);
    // SubProg print_option_help pc: 198 op: CONCAT (15)
    Concat((object_ptr)&_cmd_14705, _cmd_14705, _8152);
    DeRefDS(_8152);
    _8152 = NOVALUE;
    // SubProg print_option_help pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 14672 op: 159
    // SubProg print_option_help pc: 203 op: STARTLINE (58)

    /** cmdline.e:588			if not is_mandatory then*/
    // SubProg print_option_help pc: 205 op: NOT_IFW (108)
    if (_is_mandatory_14701 != 0)
    goto L9; // [205] 215
    // SubProg print_option_help pc: 208 op: STARTLINE (58)

    /** cmdline.e:589				cmd &= ']'*/
    // SubProg print_option_help pc: 210 op: CONCAT (15)
    Append(&_cmd_14705, _cmd_14705, 93);
    // SubProg print_option_help pc: 214 op: NOP1 (159)
L9: // addr: 215 pc: 214 sub: 14672 op: 159
    // SubProg print_option_help pc: 215 op: NOP1 (159)
L6: // addr: 216 pc: 215 sub: 14672 op: 159
    // SubProg print_option_help pc: 216 op: STARTLINE (58)

    /** cmdline.e:593		if sequence(opt[LONGNAME]) then*/
    // SubProg print_option_help pc: 218 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8156 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 222 op: IS_A_SEQUENCE (68)
    _8157 = IS_SEQUENCE(_8156);
    _8156 = NOVALUE;
    // SubProg print_option_help pc: 225 op: IF (20)
    if (_8157 == 0)
    {
        _8157 = NOVALUE;
        goto LA; // [225] 300
    }
    else{
        _8157 = NOVALUE;
    }
    // SubProg print_option_help pc: 228 op: STARTLINE (58)

    /** cmdline.e:594			if length(cmd) > 0 then cmd &= ", " end if*/
    // SubProg print_option_help pc: 230 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_14705)){
            _8158 = SEQ_PTR(_cmd_14705)->length;
    }
    else {
        _8158 = 1;
    }
    // SubProg print_option_help pc: 233 op: GREATER_IFW_I (124)
    if (_8158 <= 0)
    goto LB; // [233] 242
    // SubProg print_option_help pc: 237 op: CONCAT (15)
    Concat((object_ptr)&_cmd_14705, _cmd_14705, _1431);
    // SubProg print_option_help pc: 241 op: NOP1 (159)
LB: // addr: 242 pc: 241 sub: 14672 op: 159
    // SubProg print_option_help pc: 242 op: STARTLINE (58)

    /** cmdline.e:595			if not is_mandatory then*/
    // SubProg print_option_help pc: 244 op: NOT_IFW (108)
    if (_is_mandatory_14701 != 0)
    goto LC; // [244] 254
    // SubProg print_option_help pc: 247 op: STARTLINE (58)

    /** cmdline.e:596				cmd &= '['*/
    // SubProg print_option_help pc: 249 op: CONCAT (15)
    Append(&_cmd_14705, _cmd_14705, 91);
    // SubProg print_option_help pc: 253 op: NOP1 (159)
LC: // addr: 254 pc: 253 sub: 14672 op: 159
    // SubProg print_option_help pc: 254 op: STARTLINE (58)

    /** cmdline.e:598			cmd &= "--" & opt[LONGNAME]*/
    // SubProg print_option_help pc: 256 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8163 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg print_option_help pc: 260 op: CONCAT (15)
    if (IS_SEQUENCE(_7162) && IS_ATOM(_8163)) {
        Ref(_8163);
        Append(&_8164, _7162, _8163);
    }
    else if (IS_ATOM(_7162) && IS_SEQUENCE(_8163)) {
    }
    else {
        Concat((object_ptr)&_8164, _7162, _8163);
    }
    _8163 = NOVALUE;
    // SubProg print_option_help pc: 264 op: CONCAT (15)
    Concat((object_ptr)&_cmd_14705, _cmd_14705, _8164);
    DeRefDS(_8164);
    _8164 = NOVALUE;
    // SubProg print_option_help pc: 268 op: STARTLINE (58)

    /** cmdline.e:599			if has_param != 0 then*/
    // SubProg print_option_help pc: 270 op: NOTEQ_IFW_I (122)
    if (_has_param_14682 == 0)
    goto LD; // [270] 287
    // SubProg print_option_help pc: 274 op: STARTLINE (58)

    /** cmdline.e:600				cmd &= '=' & param_name*/
    // SubProg print_option_help pc: 276 op: PRIVATE_INIT_CHECK (30)
    // SubProg print_option_help pc: 278 op: CONCAT (15)
    Prepend(&_8167, _param_name_14685, 61);
    // SubProg print_option_help pc: 282 op: CONCAT (15)
    Concat((object_ptr)&_cmd_14705, _cmd_14705, _8167);
    DeRefDS(_8167);
    _8167 = NOVALUE;
    // SubProg print_option_help pc: 286 op: NOP1 (159)
LD: // addr: 287 pc: 286 sub: 14672 op: 159
    // SubProg print_option_help pc: 287 op: STARTLINE (58)

    /** cmdline.e:602			if not is_mandatory then*/
    // SubProg print_option_help pc: 289 op: NOT_IFW (108)
    if (_is_mandatory_14701 != 0)
    goto LE; // [289] 299
    // SubProg print_option_help pc: 292 op: STARTLINE (58)

    /** cmdline.e:603				cmd &= ']'*/
    // SubProg print_option_help pc: 294 op: CONCAT (15)
    Append(&_cmd_14705, _cmd_14705, 93);
    // SubProg print_option_help pc: 298 op: NOP1 (159)
LE: // addr: 299 pc: 298 sub: 14672 op: 159
    // SubProg print_option_help pc: 299 op: NOP1 (159)
LA: // addr: 300 pc: 299 sub: 14672 op: 159
    // SubProg print_option_help pc: 300 op: STARTLINE (58)

    /** cmdline.e:610		if length(cmd) > pad_size then*/
    // SubProg print_option_help pc: 302 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_14705)){
            _8171 = SEQ_PTR(_cmd_14705)->length;
    }
    else {
        _8171 = 1;
    }
    // SubProg print_option_help pc: 305 op: GREATER_IFW_I (124)
    if (_8171 <= _pad_size_14675)
    goto LF; // [305] 336
    // SubProg print_option_help pc: 309 op: STARTLINE (58)

    /** cmdline.e:611			puts(1, "   " & cmd & '\n')*/
    // SubProg print_option_help pc: 311 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 10;
        concat_list[1] = _cmd_14705;
        concat_list[2] = _8173;
        Concat_N((object_ptr)&_8174, concat_list, 3);
    }
    // SubProg print_option_help pc: 317 op: PUTS (44)
    EPuts(1, _8174); // DJP 
    DeRefDS(_8174);
    _8174 = NOVALUE;
    // SubProg print_option_help pc: 320 op: STARTLINE (58)

    /** cmdline.e:612			puts(1, repeat(' ', pad_size + 3))*/
    // SubProg print_option_help pc: 322 op: PLUS (11)
    _8175 = _pad_size_14675 + 3;
    // SubProg print_option_help pc: 326 op: REPEAT (32)
    _8176 = Repeat(32, _8175);
    _8175 = NOVALUE;
    // SubProg print_option_help pc: 330 op: PUTS (44)
    EPuts(1, _8176); // DJP 
    DeRefDS(_8176);
    _8176 = NOVALUE;
    // SubProg print_option_help pc: 333 op: ELSE (23)
    goto L10; // [333] 352
    // SubProg print_option_help pc: 335 op: NOP1 (159)
LF: // addr: 336 pc: 335 sub: 14672 op: 159
    // SubProg print_option_help pc: 336 op: STARTLINE (58)

    /** cmdline.e:614			puts(1, "   " & stdseq:pad_tail(cmd, pad_size))*/
    // SubProg print_option_help pc: 338 op: PROC (27)
    RefDS(_cmd_14705);
    _8177 = _23pad_tail(_cmd_14705, _pad_size_14675, 32);
    // SubProg print_option_help pc: 344 op: CONCAT (15)
    if (IS_SEQUENCE(_8173) && IS_ATOM(_8177)) {
        Ref(_8177);
        Append(&_8178, _8173, _8177);
    }
    else if (IS_ATOM(_8173) && IS_SEQUENCE(_8177)) {
    }
    else {
        Concat((object_ptr)&_8178, _8173, _8177);
    }
    DeRef(_8177);
    _8177 = NOVALUE;
    // SubProg print_option_help pc: 348 op: PUTS (44)
    EPuts(1, _8178); // DJP 
    DeRefDS(_8178);
    _8178 = NOVALUE;
    // SubProg print_option_help pc: 351 op: NOP1 (159)
L10: // addr: 352 pc: 351 sub: 14672 op: 159
    // SubProg print_option_help pc: 352 op: STARTLINE (58)

    /** cmdline.e:617		puts(1, opt[DESCRIPTION] & '\n')*/
    // SubProg print_option_help pc: 354 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_14674);
    _8179 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg print_option_help pc: 358 op: CONCAT (15)
    if (IS_SEQUENCE(_8179) && IS_ATOM(10)) {
        Append(&_8180, _8179, 10);
    }
    else if (IS_ATOM(_8179) && IS_SEQUENCE(10)) {
    }
    else {
        Concat((object_ptr)&_8180, _8179, 10);
        _8179 = NOVALUE;
    }
    _8179 = NOVALUE;
    // SubProg print_option_help pc: 362 op: PUTS (44)
    EPuts(1, _8180); // DJP 
    DeRefDS(_8180);
    _8180 = NOVALUE;
    // SubProg print_option_help pc: 365 op: STARTLINE (58)

    /** cmdline.e:618	end procedure*/
    // SubProg print_option_help pc: 367 op: RETURNP (29)

// Exiting block BLOCK: print_option_help

// block var opt_14674
    DeRefDS(_opt_14674);

// block var pad_size_14675

// block var has_param_14682

// block var param_name_14685
    DeRef(_param_name_14685);

// block var is_mandatory_14701

// block var cmd_14705
    DeRef(_cmd_14705);
    _8132 = NOVALUE;
    return;
    // SubProg print_option_help pc: 370 op: BADRETURNF (43)
    ;
}


object _4find_opt(object _opts_14763, object _opt_style_14764, object _cmd_text_14765)
{
    object _opt_name_14766 = NOVALUE;
    object _opt_param_14767 = NOVALUE;
    object _param_found_14768 = NOVALUE;
    object _reversed_14769 = NOVALUE;
    object _8282 = NOVALUE; // 14898 8282
    object _8280 = NOVALUE; // 14896 8280
    object _8279 = NOVALUE; // 14895 8279
// skipping _8278  name type: 0
    object _8277 = NOVALUE; // 14893 8277
    object _8276 = NOVALUE; // 14892 8276
    object _8275 = NOVALUE; // 14891 8275
    object _8274 = NOVALUE; // 14888 8274
    object _8273 = NOVALUE; // 14886 8273
// skipping _8271  name type: 0
    object _8270 = NOVALUE; // 14882 8270
    object _8269 = NOVALUE; // 14881 8269
    object _8268 = NOVALUE; // 14880 8268
// skipping _8267  name type: 0
    object _8266 = NOVALUE; // 14877 8266
    object _8265 = NOVALUE; // 14876 8265
    object _8264 = NOVALUE; // 14875 8264
    object _8263 = NOVALUE; // 14874 8263
// skipping _8262  name type: 0
    object _8261 = NOVALUE; // 14870 8261
    object _8260 = NOVALUE; // 14869 8260
    object _8259 = NOVALUE; // 14868 8259
    object _8258 = NOVALUE; // 14867 8258
    object _8257 = NOVALUE; // 14866 8257
    object _8256 = NOVALUE; // 14865 8256
    object _8255 = NOVALUE; // 14863 8255
    object _8254 = NOVALUE; // 14862 8254
    object _8253 = NOVALUE; // 14861 8253
    object _8252 = NOVALUE; // 14859 8252
    object _8251 = NOVALUE; // 14856 8251
    object _8250 = NOVALUE; // 14855 8250
    object _8244 = NOVALUE; // 14849 8244
    object _8243 = NOVALUE; // 14847 8243
    object _8242 = NOVALUE; // 14846 8242
    object _8234 = NOVALUE; // 14838 8234
    object _8233 = NOVALUE; // 14835 8233
// skipping _8232  name type: 0
    object _8231 = NOVALUE; // 14832 8231
// skipping _8230  name type: 0
    object _8229 = NOVALUE; // 14829 8229
    object _8228 = NOVALUE; // 14828 8228
// skipping _8227  name type: 0
    object _8226 = NOVALUE; // 14826 8226
    object _8225 = NOVALUE; // 14825 8225
    object _8224 = NOVALUE; // 14824 8224
    object _8223 = NOVALUE; // 14822 8223
    object _8222 = NOVALUE; // 14821 8222
// skipping _8221  name type: 0
    object _8220 = NOVALUE; // 14819 8220
    object _8219 = NOVALUE; // 14818 8219
// skipping _8218  name type: 0
    object _8217 = NOVALUE; // 14815 8217
// skipping _8216  name type: 0
    object _8215 = NOVALUE; // 14812 8215
    object _8214 = NOVALUE; // 14811 8214
// skipping _8213  name type: 0
    object _8212 = NOVALUE; // 14809 8212
    object _8211 = NOVALUE; // 14808 8211
    object _8210 = NOVALUE; // 14807 8210
    object _8209 = NOVALUE; // 14805 8209
// skipping _8208  name type: 0
    object _8207 = NOVALUE; // 14801 8207
    object _8206 = NOVALUE; // 14800 8206
// skipping _8204  name type: 0
    object _8203 = NOVALUE; // 14797 8203
// skipping _8202  name type: 0
    object _8201 = NOVALUE; // 14794 8201
    object _8200 = NOVALUE; // 14793 8200
    object _8198 = NOVALUE; // 14791 8198
// skipping _8197  name type: 0
    object _8196 = NOVALUE; // 14788 8196
// skipping _8195  name type: 0
    object _8194 = NOVALUE; // 14785 8194
    object _8193 = NOVALUE; // 14784 8193
// skipping _8192  name type: 0
    object _8191 = NOVALUE; // 14782 8191
    object _8190 = NOVALUE; // 14781 8190
    object _8189 = NOVALUE; // 14780 8189
    object _8188 = NOVALUE; // 14778 8188
    object _8187 = NOVALUE; // 14777 8187
// skipping _8186  name type: 0
    object _8185 = NOVALUE; // 14775 8185
    object _8184 = NOVALUE; // 14774 8184
// skipping _8183  name type: 0
    object _8182 = NOVALUE; // 14771 8182
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_opt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 5 op: STARTLINE (58)

    /** cmdline.e:793		integer param_found = 0*/
    // SubProg find_opt pc: 7 op: ASSIGN_I (113)
    _param_found_14768 = 0;
    // SubProg find_opt pc: 10 op: STARTLINE (58)

    /** cmdline.e:794		integer reversed = 0*/
    // SubProg find_opt pc: 12 op: ASSIGN_I (113)
    _reversed_14769 = 0;
    // SubProg find_opt pc: 15 op: STARTLINE (58)

    /** cmdline.e:796		if length(cmd_text) >= 2 then*/
    // SubProg find_opt pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8182 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8182 = 1;
    }
    // SubProg find_opt pc: 20 op: GREATEREQ_IFW_I (120)
    if (_8182 < 2)
    goto L1; // [20] 85
    // SubProg find_opt pc: 24 op: STARTLINE (58)

    /** cmdline.e:798			if cmd_text[1] = '\'' or cmd_text[1] = '"' then*/
    // SubProg find_opt pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_14765);
    _8184 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 30 op: EQUALS (3)
    if (IS_ATOM_INT(_8184)) {
        _8185 = (_8184 == 39);
    }
    else {
        _8185 = binary_op(EQUALS, _8184, 39);
    }
    _8184 = NOVALUE;
    // SubProg find_opt pc: 34 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_8185)) {
        if (_8185 != 0) {
            goto L2; // [34] 51
        }
    }
    else {
        if (DBL_PTR(_8185)->dbl != 0.0) {
            goto L2; // [34] 51
        }
    }
    // SubProg find_opt pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_14765);
    _8187 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 42 op: EQUALS (3)
    if (IS_ATOM_INT(_8187)) {
        _8188 = (_8187 == 34);
    }
    else {
        _8188 = binary_op(EQUALS, _8187, 34);
    }
    _8187 = NOVALUE;
    // SubProg find_opt pc: 46 op: NOP1 (159)
    // SubProg find_opt pc: 47 op: IF (20)
    if (_8188 == 0) {
        DeRef(_8188);
        _8188 = NOVALUE;
        goto L3; // [47] 84
    }
    else {
        if (!IS_ATOM_INT(_8188) && DBL_PTR(_8188)->dbl == 0.0){
            DeRef(_8188);
            _8188 = NOVALUE;
            goto L3; // [47] 84
        }
        DeRef(_8188);
        _8188 = NOVALUE;
    }
    DeRef(_8188);
    _8188 = NOVALUE;
    // SubProg find_opt pc: 50 op: NOP1 (159)
L2: // addr: 51 pc: 50 sub: 14761 op: 159
    // SubProg find_opt pc: 51 op: STARTLINE (58)

    /** cmdline.e:799				if cmd_text[$] = cmd_text[1] then*/
    // SubProg find_opt pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8189 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8189 = 1;
    }
    // SubProg find_opt pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_14765);
    _8190 = (object)*(((s1_ptr)_2)->base + _8189);
    // SubProg find_opt pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_14765);
    _8191 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 64 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _8190, _8191)){
        _8190 = NOVALUE;
        _8191 = NOVALUE;
        goto L4; // [64] 83
    }
    _8190 = NOVALUE;
    _8191 = NOVALUE;
    // SubProg find_opt pc: 68 op: STARTLINE (58)

    /** cmdline.e:800					cmd_text = cmd_text[2 .. $-1]*/
    // SubProg find_opt pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8193 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8193 = 1;
    }
    // SubProg find_opt pc: 73 op: MINUS (10)
    _8194 = _8193 - 1;
    _8193 = NOVALUE;
    // SubProg find_opt pc: 77 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_text_14765;
    RHS_Slice(_cmd_text_14765, 2, _8194);
    // SubProg find_opt pc: 82 op: NOP1 (159)
L4: // addr: 83 pc: 82 sub: 14761 op: 159
    // SubProg find_opt pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 14761 op: 159
    // SubProg find_opt pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 14761 op: 159
    // SubProg find_opt pc: 85 op: STARTLINE (58)

    /** cmdline.e:805		if length(cmd_text) > 0 then*/
    // SubProg find_opt pc: 87 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8196 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8196 = 1;
    }
    // SubProg find_opt pc: 90 op: GREATER_IFW_I (124)
    if (_8196 <= 0)
    goto L5; // [90] 125
    // SubProg find_opt pc: 94 op: STARTLINE (58)

    /** cmdline.e:806			if find(cmd_text[1], "!-") then*/
    // SubProg find_opt pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_cmd_text_14765);
    _8198 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_opt pc: 100 op: FIND_FROM (176)
    _8200 = find_from(_8198, _8199, 1);
    _8198 = NOVALUE;
    // SubProg find_opt pc: 105 op: IF (20)
    if (_8200 == 0)
    {
        _8200 = NOVALUE;
        goto L6; // [105] 124
    }
    else{
        _8200 = NOVALUE;
    }
    // SubProg find_opt pc: 108 op: STARTLINE (58)

    /** cmdline.e:807				reversed = 1*/
    // SubProg find_opt pc: 110 op: ASSIGN_I (113)
    _reversed_14769 = 1;
    // SubProg find_opt pc: 113 op: STARTLINE (58)

    /** cmdline.e:808				cmd_text = cmd_text[2 .. $]*/
    // SubProg find_opt pc: 115 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8201 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8201 = 1;
    }
    // SubProg find_opt pc: 118 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_text_14765;
    RHS_Slice(_cmd_text_14765, 2, _8201);
    // SubProg find_opt pc: 123 op: NOP1 (159)
L6: // addr: 124 pc: 123 sub: 14761 op: 159
    // SubProg find_opt pc: 124 op: NOP1 (159)
L5: // addr: 125 pc: 124 sub: 14761 op: 159
    // SubProg find_opt pc: 125 op: STARTLINE (58)

    /** cmdline.e:812		if length(cmd_text) < 1 then*/
    // SubProg find_opt pc: 127 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8203 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8203 = 1;
    }
    // SubProg find_opt pc: 130 op: LESS_IFW_I (119)
    if (_8203 >= 1)
    goto L7; // [130] 145
    // SubProg find_opt pc: 134 op: STARTLINE (58)

    /** cmdline.e:813			return {-1, "Empty command text"}*/
    // SubProg find_opt pc: 136 op: RIGHT_BRACE_2 (85)
    RefDS(_8205);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _8205;
    _8206 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 140 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_14763
    DeRefDS(_opts_14763);

// block var opt_style_14764
    DeRefDS(_opt_style_14764);

// block var cmd_text_14765
    DeRef(_cmd_text_14765);

// block var opt_name_14766
    DeRef(_opt_name_14766);

// block var opt_param_14767
    DeRef(_opt_param_14767);

// block var param_found_14768

// block var reversed_14769
    DeRef(_8185);
    _8185 = NOVALUE;
    DeRef(_8194);
    _8194 = NOVALUE;
    return _8206;
    // SubProg find_opt pc: 144 op: NOP1 (159)
L7: // addr: 145 pc: 144 sub: 14761 op: 159
    // SubProg find_opt pc: 145 op: STARTLINE (58)

    /** cmdline.e:816		opt_name = repeat(' ', length(cmd_text))*/
    // SubProg find_opt pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8207 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8207 = 1;
    }
    // SubProg find_opt pc: 150 op: REPEAT (32)
    DeRef(_opt_name_14766);
    _opt_name_14766 = Repeat(32, _8207);
    _8207 = NOVALUE;
    // SubProg find_opt pc: 154 op: STARTLINE (58)

    /** cmdline.e:817		opt_param = 0*/
    // SubProg find_opt pc: 156 op: ASSIGN (18)
    DeRef(_opt_param_14767);
    _opt_param_14767 = 0;
    // SubProg find_opt pc: 159 op: STARTLINE (58)

    /** cmdline.e:818		for i = 1 to length(cmd_text) do*/
    // SubProg find_opt pc: 161 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_text_14765)){
            _8209 = SEQ_PTR(_cmd_text_14765)->length;
    }
    else {
        _8209 = 1;
    }
    // SubProg find_opt pc: 164 op: FOR_I (125)
    {
        object _i_14804;
        _i_14804 = 1;
L8: // addr: 171 pc: 164 sub: 14761 op: 125
        if (_i_14804 > _8209){
            goto L9; // [164] 320
        }
        // SubProg find_opt pc: 171 op: STARTLINE (58)

        /** cmdline.e:819			if find(cmd_text[i], ":=") then*/
        // SubProg find_opt pc: 173 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cmd_text_14765);
        _8210 = (object)*(((s1_ptr)_2)->base + _i_14804);
        // SubProg find_opt pc: 177 op: FIND_FROM (176)
        _8211 = find_from(_8210, _4738, 1);
        _8210 = NOVALUE;
        // SubProg find_opt pc: 182 op: IF (20)
        if (_8211 == 0)
        {
            _8211 = NOVALUE;
            goto LA; // [182] 302
        }
        else{
            _8211 = NOVALUE;
        }
        // SubProg find_opt pc: 185 op: STARTLINE (58)

        /** cmdline.e:820				opt_name = opt_name[1 .. i - 1]*/
        // SubProg find_opt pc: 187 op: MINUS (10)
        _8212 = _i_14804 - 1;
        // SubProg find_opt pc: 191 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_name_14766;
        RHS_Slice(_opt_name_14766, 1, _8212);
        // SubProg find_opt pc: 196 op: STARTLINE (58)

        /** cmdline.e:821				opt_param = cmd_text[i + 1 .. $]*/
        // SubProg find_opt pc: 198 op: PLUS1 (93)
        _8214 = _i_14804 + 1;
        // SubProg find_opt pc: 202 op: LENGTH (42)
        if (IS_SEQUENCE(_cmd_text_14765)){
                _8215 = SEQ_PTR(_cmd_text_14765)->length;
        }
        else {
            _8215 = 1;
        }
        // SubProg find_opt pc: 205 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_param_14767;
        RHS_Slice(_cmd_text_14765, _8214, _8215);
        // SubProg find_opt pc: 210 op: STARTLINE (58)

        /** cmdline.e:822				if length(opt_param) >= 2 then*/
        // SubProg find_opt pc: 212 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_14767)){
                _8217 = SEQ_PTR(_opt_param_14767)->length;
        }
        else {
            _8217 = 1;
        }
        // SubProg find_opt pc: 215 op: GREATEREQ_IFW_I (120)
        if (_8217 < 2)
        goto LB; // [215] 280
        // SubProg find_opt pc: 219 op: STARTLINE (58)

        /** cmdline.e:824					if opt_param[1] = '\'' or opt_param[1] = '"' then*/
        // SubProg find_opt pc: 221 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_14767);
        _8219 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 225 op: EQUALS (3)
        if (IS_ATOM_INT(_8219)) {
            _8220 = (_8219 == 39);
        }
        else {
            _8220 = binary_op(EQUALS, _8219, 39);
        }
        _8219 = NOVALUE;
        // SubProg find_opt pc: 229 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_8220)) {
            if (_8220 != 0) {
                goto LC; // [229] 246
            }
        }
        else {
            if (DBL_PTR(_8220)->dbl != 0.0) {
                goto LC; // [229] 246
            }
        }
        // SubProg find_opt pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_14767);
        _8222 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 237 op: EQUALS (3)
        if (IS_ATOM_INT(_8222)) {
            _8223 = (_8222 == 34);
        }
        else {
            _8223 = binary_op(EQUALS, _8222, 34);
        }
        _8222 = NOVALUE;
        // SubProg find_opt pc: 241 op: NOP1 (159)
        // SubProg find_opt pc: 242 op: IF (20)
        if (_8223 == 0) {
            DeRef(_8223);
            _8223 = NOVALUE;
            goto LD; // [242] 279
        }
        else {
            if (!IS_ATOM_INT(_8223) && DBL_PTR(_8223)->dbl == 0.0){
                DeRef(_8223);
                _8223 = NOVALUE;
                goto LD; // [242] 279
            }
            DeRef(_8223);
            _8223 = NOVALUE;
        }
        DeRef(_8223);
        _8223 = NOVALUE;
        // SubProg find_opt pc: 245 op: NOP1 (159)
LC: // addr: 246 pc: 245 sub: 14761 op: 159
        // SubProg find_opt pc: 246 op: STARTLINE (58)

        /** cmdline.e:825						if opt_param[$] = opt_param[1] then*/
        // SubProg find_opt pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_14767)){
                _8224 = SEQ_PTR(_opt_param_14767)->length;
        }
        else {
            _8224 = 1;
        }
        // SubProg find_opt pc: 251 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_14767);
        _8225 = (object)*(((s1_ptr)_2)->base + _8224);
        // SubProg find_opt pc: 255 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_opt_param_14767);
        _8226 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 259 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _8225, _8226)){
            _8225 = NOVALUE;
            _8226 = NOVALUE;
            goto LE; // [259] 278
        }
        _8225 = NOVALUE;
        _8226 = NOVALUE;
        // SubProg find_opt pc: 263 op: STARTLINE (58)

        /** cmdline.e:826							opt_param = opt_param[2 .. $-1]*/
        // SubProg find_opt pc: 265 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_14767)){
                _8228 = SEQ_PTR(_opt_param_14767)->length;
        }
        else {
            _8228 = 1;
        }
        // SubProg find_opt pc: 268 op: MINUS (10)
        _8229 = _8228 - 1;
        _8228 = NOVALUE;
        // SubProg find_opt pc: 272 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_opt_param_14767;
        RHS_Slice(_opt_param_14767, 2, _8229);
        // SubProg find_opt pc: 277 op: NOP1 (159)
LE: // addr: 278 pc: 277 sub: 14761 op: 159
        // SubProg find_opt pc: 278 op: NOP1 (159)
LD: // addr: 279 pc: 278 sub: 14761 op: 159
        // SubProg find_opt pc: 279 op: NOP1 (159)
LB: // addr: 280 pc: 279 sub: 14761 op: 159
        // SubProg find_opt pc: 280 op: STARTLINE (58)

        /** cmdline.e:831				if length(opt_param) > 0 then*/
        // SubProg find_opt pc: 282 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_param_14767)){
                _8231 = SEQ_PTR(_opt_param_14767)->length;
        }
        else {
            _8231 = 1;
        }
        // SubProg find_opt pc: 285 op: GREATER_IFW_I (124)
        if (_8231 <= 0)
        goto L9; // [285] 320
        // SubProg find_opt pc: 289 op: STARTLINE (58)

        /** cmdline.e:832					param_found = 1*/
        // SubProg find_opt pc: 291 op: ASSIGN_I (113)
        _param_found_14768 = 1;
        // SubProg find_opt pc: 294 op: NOP1 (159)
        // SubProg find_opt pc: 295 op: STARTLINE (58)

        /** cmdline.e:835				exit*/
        // SubProg find_opt pc: 297 op: EXIT (61)
        goto L9; // [297] 320
        // SubProg find_opt pc: 299 op: ELSE (23)
        goto LF; // [299] 313
        // SubProg find_opt pc: 301 op: NOP1 (159)
LA: // addr: 302 pc: 301 sub: 14761 op: 159
        // SubProg find_opt pc: 302 op: STARTLINE (58)

        /** cmdline.e:837				opt_name[i] = cmd_text[i]*/
        // SubProg find_opt pc: 304 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cmd_text_14765);
        _8233 = (object)*(((s1_ptr)_2)->base + _i_14804);
        // SubProg find_opt pc: 308 op: ASSIGN_SUBS (16)
        Ref(_8233);
        _2 = (object)SEQ_PTR(_opt_name_14766);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_name_14766 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_14804);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _8233;
        if( _1 != _8233 ){
            DeRef(_1);
        }
        _8233 = NOVALUE;
        // SubProg find_opt pc: 312 op: NOP1 (159)
LF: // addr: 313 pc: 312 sub: 14761 op: 159
        // SubProg find_opt pc: 313 op: STARTLINE (58)

        /** cmdline.e:839		end for*/
        // SubProg find_opt pc: 315 op: ENDFOR_INT_UP1 (54)
        _i_14804 = _i_14804 + 1;
        goto L8; // [315] 171
L9: // addr: 320 pc: 315 sub: 14761 op: 54
        ;
    }
    // SubProg find_opt pc: 320 op: STARTLINE (58)

    /** cmdline.e:841		if param_found then*/
    // SubProg find_opt pc: 322 op: IF (20)
    if (_param_found_14768 == 0)
    {
        goto L10; // [322] 388
    }
    else{
    }
    // SubProg find_opt pc: 325 op: STARTLINE (58)

    /** cmdline.e:842			if find( text:lower(opt_param), {"1", "on", "yes", "y", "true", "ok", "+"}) then*/
    // SubProg find_opt pc: 327 op: PROC (27)
    Ref(_opt_param_14767);
    _8234 = _17lower(_opt_param_14767);
    // SubProg find_opt pc: 331 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_8235);
    ((intptr_t*)_2)[1] = _8235;
    RefDS(_8236);
    ((intptr_t*)_2)[2] = _8236;
    RefDS(_8237);
    ((intptr_t*)_2)[3] = _8237;
    RefDS(_8238);
    ((intptr_t*)_2)[4] = _8238;
    RefDS(_8239);
    ((intptr_t*)_2)[5] = _8239;
    RefDS(_8240);
    ((intptr_t*)_2)[6] = _8240;
    RefDS(_8241);
    ((intptr_t*)_2)[7] = _8241;
    _8242 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 341 op: FIND_FROM (176)
    _8243 = find_from(_8234, _8242, 1);
    DeRef(_8234);
    _8234 = NOVALUE;
    DeRefDS(_8242);
    _8242 = NOVALUE;
    // SubProg find_opt pc: 346 op: IF (20)
    if (_8243 == 0)
    {
        _8243 = NOVALUE;
        goto L11; // [346] 357
    }
    else{
        _8243 = NOVALUE;
    }
    // SubProg find_opt pc: 349 op: STARTLINE (58)

    /** cmdline.e:843				opt_param = 1*/
    // SubProg find_opt pc: 351 op: ASSIGN (18)
    DeRef(_opt_param_14767);
    _opt_param_14767 = 1;
    // SubProg find_opt pc: 354 op: ELSE (23)
    goto L12; // [354] 387
    // SubProg find_opt pc: 356 op: NOP1 (159)
L11: // addr: 357 pc: 356 sub: 14761 op: 159
    // SubProg find_opt pc: 357 op: STARTLINE (58)

    /** cmdline.e:844			elsif find( text:lower(opt_param), {"0", "off", "no", "n", "false", "-"}) then*/
    // SubProg find_opt pc: 359 op: PROC (27)
    Ref(_opt_param_14767);
    _8244 = _17lower(_opt_param_14767);
    // SubProg find_opt pc: 363 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_8245);
    ((intptr_t*)_2)[1] = _8245;
    RefDS(_8246);
    ((intptr_t*)_2)[2] = _8246;
    RefDS(_8247);
    ((intptr_t*)_2)[3] = _8247;
    RefDS(_8248);
    ((intptr_t*)_2)[4] = _8248;
    RefDS(_8249);
    ((intptr_t*)_2)[5] = _8249;
    RefDS(_7138);
    ((intptr_t*)_2)[6] = _7138;
    _8250 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 372 op: FIND_FROM (176)
    _8251 = find_from(_8244, _8250, 1);
    DeRef(_8244);
    _8244 = NOVALUE;
    DeRefDS(_8250);
    _8250 = NOVALUE;
    // SubProg find_opt pc: 377 op: IF (20)
    if (_8251 == 0)
    {
        _8251 = NOVALUE;
        goto L13; // [377] 386
    }
    else{
        _8251 = NOVALUE;
    }
    // SubProg find_opt pc: 380 op: STARTLINE (58)

    /** cmdline.e:845				opt_param = 0*/
    // SubProg find_opt pc: 382 op: ASSIGN (18)
    DeRef(_opt_param_14767);
    _opt_param_14767 = 0;
    // SubProg find_opt pc: 385 op: NOP1 (159)
L13: // addr: 386 pc: 385 sub: 14761 op: 159
    // SubProg find_opt pc: 386 op: NOP1 (159)
L12: // addr: 387 pc: 386 sub: 14761 op: 159
    // SubProg find_opt pc: 387 op: NOP1 (159)
L10: // addr: 388 pc: 387 sub: 14761 op: 159
    // SubProg find_opt pc: 388 op: STARTLINE (58)

    /** cmdline.e:849		for i = 1 to length(opts) do*/
    // SubProg find_opt pc: 390 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14763)){
            _8252 = SEQ_PTR(_opts_14763)->length;
    }
    else {
        _8252 = 1;
    }
    // SubProg find_opt pc: 393 op: FOR_I (125)
    {
        object _i_14858;
        _i_14858 = 1;
L14: // addr: 400 pc: 393 sub: 14761 op: 125
        if (_i_14858 > _8252){
            goto L15; // [393] 592
        }
        // SubProg find_opt pc: 400 op: STARTLINE (58)

        /** cmdline.e:850			if find(NO_CASE,  opts[i][OPTIONS]) then*/
        // SubProg find_opt pc: 402 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14763);
        _8253 = (object)*(((s1_ptr)_2)->base + _i_14858);
        // SubProg find_opt pc: 406 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8253);
        _8254 = (object)*(((s1_ptr)_2)->base + 4);
        _8253 = NOVALUE;
        // SubProg find_opt pc: 410 op: FIND_FROM (176)
        _8255 = find_from(105, _8254, 1);
        _8254 = NOVALUE;
        // SubProg find_opt pc: 415 op: IF (20)
        if (_8255 == 0)
        {
            _8255 = NOVALUE;
            goto L16; // [415] 455
        }
        else{
            _8255 = NOVALUE;
        }
        // SubProg find_opt pc: 418 op: STARTLINE (58)

        /** cmdline.e:851				if not equal( text:lower(opt_name), text:lower(opts[i][opt_style[1]])) then*/
        // SubProg find_opt pc: 420 op: PROC (27)
        RefDS(_opt_name_14766);
        _8256 = _17lower(_opt_name_14766);
        // SubProg find_opt pc: 424 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14763);
        _8257 = (object)*(((s1_ptr)_2)->base + _i_14858);
        // SubProg find_opt pc: 428 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_style_14764);
        _8258 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8257);
        if (!IS_ATOM_INT(_8258)){
            _8259 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_8258)->dbl));
        }
        else{
            _8259 = (object)*(((s1_ptr)_2)->base + _8258);
        }
        _8257 = NOVALUE;
        // SubProg find_opt pc: 436 op: PROC (27)
        Ref(_8259);
        _8260 = _17lower(_8259);
        _8259 = NOVALUE;
        // SubProg find_opt pc: 440 op: EQUAL (153)
        if (_8256 == _8260)
        _8261 = 1;
        else if (IS_ATOM_INT(_8256) && IS_ATOM_INT(_8260))
        _8261 = 0;
        else
        _8261 = (compare(_8256, _8260) == 0);
        DeRef(_8256);
        _8256 = NOVALUE;
        DeRef(_8260);
        _8260 = NOVALUE;
        // SubProg find_opt pc: 444 op: NOT_IFW (108)
        if (_8261 != 0)
        goto L17; // [444] 482
        _8261 = NOVALUE;
        // SubProg find_opt pc: 447 op: STARTLINE (58)

        /** cmdline.e:852					continue*/
        // SubProg find_opt pc: 449 op: ELSE (23)
        goto L18; // [449] 587
        // SubProg find_opt pc: 451 op: NOP1 (159)
        // SubProg find_opt pc: 452 op: ELSE (23)
        goto L17; // [452] 482
        // SubProg find_opt pc: 454 op: NOP1 (159)
L16: // addr: 455 pc: 454 sub: 14761 op: 159
        // SubProg find_opt pc: 455 op: STARTLINE (58)

        /** cmdline.e:855				if not equal(opt_name, opts[i][opt_style[1]]) then*/
        // SubProg find_opt pc: 457 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14763);
        _8263 = (object)*(((s1_ptr)_2)->base + _i_14858);
        // SubProg find_opt pc: 461 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opt_style_14764);
        _8264 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg find_opt pc: 465 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8263);
        if (!IS_ATOM_INT(_8264)){
            _8265 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_8264)->dbl));
        }
        else{
            _8265 = (object)*(((s1_ptr)_2)->base + _8264);
        }
        _8263 = NOVALUE;
        // SubProg find_opt pc: 469 op: EQUAL (153)
        if (_opt_name_14766 == _8265)
        _8266 = 1;
        else if (IS_ATOM_INT(_opt_name_14766) && IS_ATOM_INT(_8265))
        _8266 = 0;
        else
        _8266 = (compare(_opt_name_14766, _8265) == 0);
        _8265 = NOVALUE;
        // SubProg find_opt pc: 473 op: NOT_IFW (108)
        if (_8266 != 0)
        goto L19; // [473] 481
        _8266 = NOVALUE;
        // SubProg find_opt pc: 476 op: STARTLINE (58)

        /** cmdline.e:856					continue*/
        // SubProg find_opt pc: 478 op: ELSE (23)
        goto L18; // [478] 587
        // SubProg find_opt pc: 480 op: NOP1 (159)
L19: // addr: 481 pc: 480 sub: 14761 op: 159
        // SubProg find_opt pc: 481 op: NOP1 (159)
L17: // addr: 482 pc: 481 sub: 14761 op: 159
        // SubProg find_opt pc: 482 op: STARTLINE (58)

        /** cmdline.e:860			if find(HAS_PARAMETER,  opts[i][OPTIONS]) = 0 then*/
        // SubProg find_opt pc: 484 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14763);
        _8268 = (object)*(((s1_ptr)_2)->base + _i_14858);
        // SubProg find_opt pc: 488 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8268);
        _8269 = (object)*(((s1_ptr)_2)->base + 4);
        _8268 = NOVALUE;
        // SubProg find_opt pc: 492 op: FIND_FROM (176)
        _8270 = find_from(112, _8269, 1);
        _8269 = NOVALUE;
        // SubProg find_opt pc: 497 op: EQUALS_IFW_I (121)
        if (_8270 != 0)
        goto L1A; // [497] 518
        // SubProg find_opt pc: 501 op: STARTLINE (58)

        /** cmdline.e:861				if param_found then*/
        // SubProg find_opt pc: 503 op: IF (20)
        if (_param_found_14768 == 0)
        {
            goto L1B; // [503] 517
        }
        else{
        }
        // SubProg find_opt pc: 506 op: STARTLINE (58)

        /** cmdline.e:862					return {0, "Option should not have a parameter"}*/
        // SubProg find_opt pc: 508 op: RIGHT_BRACE_2 (85)
        RefDS(_8272);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 0;
        ((intptr_t *)_2)[2] = _8272;
        _8273 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 512 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_14763
        DeRefDS(_opts_14763);

// block var opt_style_14764
        DeRefDS(_opt_style_14764);

// block var cmd_text_14765
        DeRef(_cmd_text_14765);

// block var opt_name_14766
        DeRef(_opt_name_14766);

// block var opt_param_14767
        DeRef(_opt_param_14767);

// block var param_found_14768

// block var reversed_14769
        DeRef(_8185);
        _8185 = NOVALUE;
        _8264 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8212);
        _8212 = NOVALUE;
        DeRef(_8220);
        _8220 = NOVALUE;
        DeRef(_8229);
        _8229 = NOVALUE;
        DeRef(_8194);
        _8194 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        _8258 = NOVALUE;
        return _8273;
        // SubProg find_opt pc: 516 op: NOP1 (159)
L1B: // addr: 517 pc: 516 sub: 14761 op: 159
        // SubProg find_opt pc: 517 op: NOP1 (159)
L1A: // addr: 518 pc: 517 sub: 14761 op: 159
        // SubProg find_opt pc: 518 op: STARTLINE (58)

        /** cmdline.e:866			if param_found then*/
        // SubProg find_opt pc: 520 op: IF (20)
        if (_param_found_14768 == 0)
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
        ((intptr_t*)_2)[1] = _i_14858;
        RefDS(_opt_name_14766);
        ((intptr_t*)_2)[2] = _opt_name_14766;
        ((intptr_t*)_2)[3] = _reversed_14769;
        Ref(_opt_param_14767);
        ((intptr_t*)_2)[4] = _opt_param_14767;
        _8274 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 532 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_14763
        DeRefDS(_opts_14763);

// block var opt_style_14764
        DeRefDS(_opt_style_14764);

// block var cmd_text_14765
        DeRef(_cmd_text_14765);

// block var opt_name_14766
        DeRefDS(_opt_name_14766);

// block var opt_param_14767
        DeRef(_opt_param_14767);

// block var param_found_14768

// block var reversed_14769
        DeRef(_8185);
        _8185 = NOVALUE;
        _8264 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8273);
        _8273 = NOVALUE;
        DeRef(_8212);
        _8212 = NOVALUE;
        DeRef(_8220);
        _8220 = NOVALUE;
        DeRef(_8229);
        _8229 = NOVALUE;
        DeRef(_8194);
        _8194 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        _8258 = NOVALUE;
        return _8274;
        // SubProg find_opt pc: 536 op: ELSE (23)
        goto L1D; // [536] 585
        // SubProg find_opt pc: 538 op: NOP1 (159)
L1C: // addr: 539 pc: 538 sub: 14761 op: 159
        // SubProg find_opt pc: 539 op: STARTLINE (58)

        /** cmdline.e:869				if find(HAS_PARAMETER, opts[i][OPTIONS]) = 0 then*/
        // SubProg find_opt pc: 541 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14763);
        _8275 = (object)*(((s1_ptr)_2)->base + _i_14858);
        // SubProg find_opt pc: 545 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8275);
        _8276 = (object)*(((s1_ptr)_2)->base + 4);
        _8275 = NOVALUE;
        // SubProg find_opt pc: 549 op: FIND_FROM (176)
        _8277 = find_from(112, _8276, 1);
        _8276 = NOVALUE;
        // SubProg find_opt pc: 554 op: EQUALS_IFW_I (121)
        if (_8277 != 0)
        goto L1E; // [554] 572
        // SubProg find_opt pc: 558 op: STARTLINE (58)

        /** cmdline.e:870					return {i, opt_name, reversed, 1 }*/
        // SubProg find_opt pc: 560 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_14858;
        RefDS(_opt_name_14766);
        ((intptr_t*)_2)[2] = _opt_name_14766;
        ((intptr_t*)_2)[3] = _reversed_14769;
        ((intptr_t*)_2)[4] = 1;
        _8279 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 567 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_14763
        DeRefDS(_opts_14763);

// block var opt_style_14764
        DeRefDS(_opt_style_14764);

// block var cmd_text_14765
        DeRef(_cmd_text_14765);

// block var opt_name_14766
        DeRefDS(_opt_name_14766);

// block var opt_param_14767
        DeRef(_opt_param_14767);

// block var param_found_14768

// block var reversed_14769
        DeRef(_8185);
        _8185 = NOVALUE;
        _8264 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8273);
        _8273 = NOVALUE;
        DeRef(_8212);
        _8212 = NOVALUE;
        DeRef(_8220);
        _8220 = NOVALUE;
        DeRef(_8274);
        _8274 = NOVALUE;
        DeRef(_8229);
        _8229 = NOVALUE;
        DeRef(_8194);
        _8194 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        _8258 = NOVALUE;
        return _8279;
        // SubProg find_opt pc: 571 op: NOP1 (159)
L1E: // addr: 572 pc: 571 sub: 14761 op: 159
        // SubProg find_opt pc: 572 op: STARTLINE (58)

        /** cmdline.e:873				return {i, opt_name, reversed}*/
        // SubProg find_opt pc: 574 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_14858;
        RefDS(_opt_name_14766);
        ((intptr_t*)_2)[2] = _opt_name_14766;
        ((intptr_t*)_2)[3] = _reversed_14769;
        _8280 = MAKE_SEQ(_1);
        // SubProg find_opt pc: 580 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_14763
        DeRefDS(_opts_14763);

// block var opt_style_14764
        DeRefDS(_opt_style_14764);

// block var cmd_text_14765
        DeRef(_cmd_text_14765);

// block var opt_name_14766
        DeRefDS(_opt_name_14766);

// block var opt_param_14767
        DeRef(_opt_param_14767);

// block var param_found_14768

// block var reversed_14769
        DeRef(_8185);
        _8185 = NOVALUE;
        _8264 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8273);
        _8273 = NOVALUE;
        DeRef(_8212);
        _8212 = NOVALUE;
        DeRef(_8220);
        _8220 = NOVALUE;
        DeRef(_8274);
        _8274 = NOVALUE;
        DeRef(_8229);
        _8229 = NOVALUE;
        DeRef(_8279);
        _8279 = NOVALUE;
        DeRef(_8194);
        _8194 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        _8258 = NOVALUE;
        return _8280;
        // SubProg find_opt pc: 584 op: NOP1 (159)
L1D: // addr: 585 pc: 584 sub: 14761 op: 159
        // SubProg find_opt pc: 585 op: STARTLINE (58)

        /** cmdline.e:875		end for*/
        // SubProg find_opt pc: 587 op: ENDFOR_INT_UP1 (54)
L18: // addr: 587 pc: 587 sub: 14761 op: 54
        _i_14858 = _i_14858 + 1;
        goto L14; // [587] 400
L15: // addr: 592 pc: 587 sub: 14761 op: 54
        ;
    }
    // SubProg find_opt pc: 592 op: STARTLINE (58)

    /** cmdline.e:877		return {0, "Unrecognised"}*/
    // SubProg find_opt pc: 594 op: RIGHT_BRACE_2 (85)
    RefDS(_8281);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _8281;
    _8282 = MAKE_SEQ(_1);
    // SubProg find_opt pc: 598 op: RETURNF (28)

// Exiting block BLOCK: find_opt

// block var opts_14763
    DeRefDS(_opts_14763);

// block var opt_style_14764
    DeRefDS(_opt_style_14764);

// block var cmd_text_14765
    DeRef(_cmd_text_14765);

// block var opt_name_14766
    DeRef(_opt_name_14766);

// block var opt_param_14767
    DeRef(_opt_param_14767);

// block var param_found_14768

// block var reversed_14769
    DeRef(_8185);
    _8185 = NOVALUE;
    DeRef(_8280);
    _8280 = NOVALUE;
    _8264 = NOVALUE;
    DeRef(_8206);
    _8206 = NOVALUE;
    DeRef(_8273);
    _8273 = NOVALUE;
    DeRef(_8212);
    _8212 = NOVALUE;
    DeRef(_8220);
    _8220 = NOVALUE;
    DeRef(_8274);
    _8274 = NOVALUE;
    DeRef(_8229);
    _8229 = NOVALUE;
    DeRef(_8279);
    _8279 = NOVALUE;
    DeRef(_8194);
    _8194 = NOVALUE;
    DeRef(_8214);
    _8214 = NOVALUE;
    _8258 = NOVALUE;
    return _8282;
    // SubProg find_opt pc: 602 op: BADRETURNF (43)
    ;
}


object _4get_help_options(object _opts_14901)
{
    object _help_opts_14902 = NOVALUE;
// skipping _8306  name type: 0
    object _8305 = NOVALUE; // 14933 8305
    object _8304 = NOVALUE; // 14932 8304
    object _8303 = NOVALUE; // 14931 8303
// skipping _8302  name type: 0
    object _8301 = NOVALUE; // 14927 8301
    object _8300 = NOVALUE; // 14926 8300
    object _8299 = NOVALUE; // 14925 8299
// skipping _8298  name type: 0
    object _8297 = NOVALUE; // 14922 8297
    object _8296 = NOVALUE; // 14921 8296
    object _8295 = NOVALUE; // 14920 8295
    object _8294 = NOVALUE; // 14919 8294
    object _8293 = NOVALUE; // 14918 8293
// skipping _8292  name type: 0
    object _8291 = NOVALUE; // 14915 8291
    object _8290 = NOVALUE; // 14914 8290
    object _8289 = NOVALUE; // 14913 8289
    object _8288 = NOVALUE; // 14912 8288
    object _8287 = NOVALUE; // 14911 8287
    object _8286 = NOVALUE; // 14909 8286
    object _8285 = NOVALUE; // 14908 8285
    object _8284 = NOVALUE; // 14907 8284
    object _8283 = NOVALUE; // 14905 8283
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_help_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_help_options pc: 3 op: STARTLINE (58)

    /** cmdline.e:881		sequence help_opts = {}*/
    // SubProg get_help_options pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_help_opts_14902);
    _help_opts_14902 = _5;
    // SubProg get_help_options pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg get_help_options pc: 10 op: STARTLINE (58)

    /** cmdline.e:883		for i = 1 to length(opts) do*/
    // SubProg get_help_options pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_14901)){
            _8283 = SEQ_PTR(_opts_14901)->length;
    }
    else {
        _8283 = 1;
    }
    // SubProg get_help_options pc: 15 op: FOR_I (125)
    {
        object _i_14904;
        _i_14904 = 1;
L1: // addr: 22 pc: 15 sub: 14899 op: 125
        if (_i_14904 > _8283){
            goto L2; // [15] 170
        }
        // SubProg get_help_options pc: 22 op: STARTLINE (58)

        /** cmdline.e:884			if find(HELP, opts[i][OPTIONS]) then*/
        // SubProg get_help_options pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14901);
        _8284 = (object)*(((s1_ptr)_2)->base + _i_14904);
        // SubProg get_help_options pc: 28 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8284);
        _8285 = (object)*(((s1_ptr)_2)->base + 4);
        _8284 = NOVALUE;
        // SubProg get_help_options pc: 32 op: FIND_FROM (176)
        _8286 = find_from(104, _8285, 1);
        _8285 = NOVALUE;
        // SubProg get_help_options pc: 37 op: IF (20)
        if (_8286 == 0)
        {
            _8286 = NOVALUE;
            goto L3; // [37] 163
        }
        else{
            _8286 = NOVALUE;
        }
        // SubProg get_help_options pc: 40 op: STARTLINE (58)

        /** cmdline.e:885				if sequence(opts[i][SHORTNAME]) then*/
        // SubProg get_help_options pc: 42 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14901);
        _8287 = (object)*(((s1_ptr)_2)->base + _i_14904);
        // SubProg get_help_options pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8287);
        _8288 = (object)*(((s1_ptr)_2)->base + 1);
        _8287 = NOVALUE;
        // SubProg get_help_options pc: 50 op: IS_A_SEQUENCE (68)
        _8289 = IS_SEQUENCE(_8288);
        _8288 = NOVALUE;
        // SubProg get_help_options pc: 53 op: IF (20)
        if (_8289 == 0)
        {
            _8289 = NOVALUE;
            goto L4; // [53] 71
        }
        else{
            _8289 = NOVALUE;
        }
        // SubProg get_help_options pc: 56 op: STARTLINE (58)

        /** cmdline.e:886					help_opts = append(help_opts, opts[i][SHORTNAME])*/
        // SubProg get_help_options pc: 58 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14901);
        _8290 = (object)*(((s1_ptr)_2)->base + _i_14904);
        // SubProg get_help_options pc: 62 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8290);
        _8291 = (object)*(((s1_ptr)_2)->base + 1);
        _8290 = NOVALUE;
        // SubProg get_help_options pc: 66 op: APPEND (35)
        Ref(_8291);
        Append(&_help_opts_14902, _help_opts_14902, _8291);
        _8291 = NOVALUE;
        // SubProg get_help_options pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 14899 op: 159
        // SubProg get_help_options pc: 71 op: STARTLINE (58)

        /** cmdline.e:889				if sequence(opts[i][LONGNAME]) then*/
        // SubProg get_help_options pc: 73 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14901);
        _8293 = (object)*(((s1_ptr)_2)->base + _i_14904);
        // SubProg get_help_options pc: 77 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8293);
        _8294 = (object)*(((s1_ptr)_2)->base + 2);
        _8293 = NOVALUE;
        // SubProg get_help_options pc: 81 op: IS_A_SEQUENCE (68)
        _8295 = IS_SEQUENCE(_8294);
        _8294 = NOVALUE;
        // SubProg get_help_options pc: 84 op: IF (20)
        if (_8295 == 0)
        {
            _8295 = NOVALUE;
            goto L5; // [84] 102
        }
        else{
            _8295 = NOVALUE;
        }
        // SubProg get_help_options pc: 87 op: STARTLINE (58)

        /** cmdline.e:890					help_opts = append(help_opts, opts[i][LONGNAME])*/
        // SubProg get_help_options pc: 89 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14901);
        _8296 = (object)*(((s1_ptr)_2)->base + _i_14904);
        // SubProg get_help_options pc: 93 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8296);
        _8297 = (object)*(((s1_ptr)_2)->base + 2);
        _8296 = NOVALUE;
        // SubProg get_help_options pc: 97 op: APPEND (35)
        Ref(_8297);
        Append(&_help_opts_14902, _help_opts_14902, _8297);
        _8297 = NOVALUE;
        // SubProg get_help_options pc: 101 op: NOP1 (159)
L5: // addr: 102 pc: 101 sub: 14899 op: 159
        // SubProg get_help_options pc: 102 op: STARTLINE (58)

        /** cmdline.e:893				if find(NO_CASE, opts[i][OPTIONS]) then*/
        // SubProg get_help_options pc: 104 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_14901);
        _8299 = (object)*(((s1_ptr)_2)->base + _i_14904);
        // SubProg get_help_options pc: 108 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8299);
        _8300 = (object)*(((s1_ptr)_2)->base + 4);
        _8299 = NOVALUE;
        // SubProg get_help_options pc: 112 op: FIND_FROM (176)
        _8301 = find_from(105, _8300, 1);
        _8300 = NOVALUE;
        // SubProg get_help_options pc: 117 op: IF (20)
        if (_8301 == 0)
        {
            _8301 = NOVALUE;
            goto L6; // [117] 162
        }
        else{
            _8301 = NOVALUE;
        }
        // SubProg get_help_options pc: 120 op: STARTLINE (58)

        /** cmdline.e:894					help_opts = text:lower(help_opts)*/
        // SubProg get_help_options pc: 122 op: PROC (27)
        RefDS(_help_opts_14902);
        _0 = _help_opts_14902;
        _help_opts_14902 = _17lower(_help_opts_14902);
        DeRefDS(_0);
        // SubProg get_help_options pc: 126 op: SEQUENCE_CHECK (97)
        // SubProg get_help_options pc: 128 op: STARTLINE (58)

        /** cmdline.e:895					for j = 1 to length(help_opts) do*/
        // SubProg get_help_options pc: 130 op: LENGTH (42)
        if (IS_SEQUENCE(_help_opts_14902)){
                _8303 = SEQ_PTR(_help_opts_14902)->length;
        }
        else {
            _8303 = 1;
        }
        // SubProg get_help_options pc: 133 op: FOR_I (125)
        {
            object _j_14930;
            _j_14930 = 1;
L7: // addr: 140 pc: 133 sub: 14899 op: 125
            if (_j_14930 > _8303){
                goto L8; // [133] 161
            }
            // SubProg get_help_options pc: 140 op: STARTLINE (58)

            /** cmdline.e:896						help_opts = append( help_opts, text:upper(help_opts[j]) )*/
            // SubProg get_help_options pc: 142 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_help_opts_14902);
            _8304 = (object)*(((s1_ptr)_2)->base + _j_14930);
            // SubProg get_help_options pc: 146 op: PROC (27)
            Ref(_8304);
            _8305 = _17upper(_8304);
            _8304 = NOVALUE;
            // SubProg get_help_options pc: 150 op: APPEND (35)
            Ref(_8305);
            Append(&_help_opts_14902, _help_opts_14902, _8305);
            DeRef(_8305);
            _8305 = NOVALUE;
            // SubProg get_help_options pc: 154 op: STARTLINE (58)

            /** cmdline.e:897					end for*/
            // SubProg get_help_options pc: 156 op: ENDFOR_INT_UP1 (54)
            _j_14930 = _j_14930 + 1;
            goto L7; // [156] 140
L8: // addr: 161 pc: 156 sub: 14899 op: 54
            ;
        }
        // SubProg get_help_options pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 14899 op: 159
        // SubProg get_help_options pc: 162 op: NOP1 (159)
L3: // addr: 163 pc: 162 sub: 14899 op: 159
        // SubProg get_help_options pc: 163 op: STARTLINE (58)

        /** cmdline.e:900		end for*/
        // SubProg get_help_options pc: 165 op: ENDFOR_INT_UP1 (54)
        _i_14904 = _i_14904 + 1;
        goto L1; // [165] 22
L2: // addr: 170 pc: 165 sub: 14899 op: 54
        ;
    }
    // SubProg get_help_options pc: 170 op: STARTLINE (58)

    /** cmdline.e:901		return help_opts*/
    // SubProg get_help_options pc: 172 op: RETURNF (28)

// Exiting block BLOCK: get_help_options

// block var opts_14901
    DeRefDS(_opts_14901);
    return _help_opts_14902;
    // SubProg get_help_options pc: 176 op: BADRETURNF (43)
    ;
}


object _4parse_at_cmds(object _cmd_14937, object _cmds_14938, object _opts_14939, object _arg_idx_14940, object _add_help_rid_14941, object _parse_options_14942, object _help_on_error_14943, object _auto_help_14944)
{
    object _at_cmds_14945 = NOVALUE;
    object _j_14946 = NOVALUE;
    object _cmdex_15030 = NOVALUE;
// skipping _8388  name type: 0
// skipping _8387  name type: 0
    object _8386 = NOVALUE; // 15038 8386
    object _8385 = NOVALUE; // 15037 8385
// skipping _8384  name type: 0
// skipping _8383  name type: 0
    object _8382 = NOVALUE; // 15034 8382
    object _8381 = NOVALUE; // 15033 8381
    object _8380 = NOVALUE; // 15032 8380
    object _8379 = NOVALUE; // 15031 8379
    object _8378 = NOVALUE; // 15029 8378
    object _8377 = NOVALUE; // 15028 8377
    object _8376 = NOVALUE; // 15027 8376
    object _8375 = NOVALUE; // 15026 8375
    object _8374 = NOVALUE; // 15025 8374
    object _8373 = NOVALUE; // 15024 8373
    object _8372 = NOVALUE; // 15023 8372
    object _8371 = NOVALUE; // 15022 8371
    object _8370 = NOVALUE; // 15021 8370
    object _8369 = NOVALUE; // 15020 8369
    object _8368 = NOVALUE; // 15019 8368
    object _8367 = NOVALUE; // 15018 8367
    object _8366 = NOVALUE; // 15016 8366
    object _8365 = NOVALUE; // 15015 8365
    object _8364 = NOVALUE; // 15014 8364
    object _8363 = NOVALUE; // 15013 8363
    object _8362 = NOVALUE; // 15012 8362
    object _8361 = NOVALUE; // 15011 8361
    object _8360 = NOVALUE; // 15010 8360
    object _8359 = NOVALUE; // 15009 8359
    object _8358 = NOVALUE; // 15008 8358
    object _8357 = NOVALUE; // 15007 8357
    object _8356 = NOVALUE; // 15006 8356
    object _8355 = NOVALUE; // 15005 8355
    object _8354 = NOVALUE; // 15004 8354
    object _8353 = NOVALUE; // 15003 8353
    object _8352 = NOVALUE; // 15002 8352
    object _8351 = NOVALUE; // 15001 8351
// skipping _8350  name type: 0
// skipping _8349  name type: 0
    object _8348 = NOVALUE; // 14997 8348
    object _8347 = NOVALUE; // 14996 8347
    object _8346 = NOVALUE; // 14995 8346
    object _8345 = NOVALUE; // 14994 8345
    object _8344 = NOVALUE; // 14993 8344
// skipping _8343  name type: 0
    object _8342 = NOVALUE; // 14991 8342
    object _8341 = NOVALUE; // 14990 8341
// skipping _8340  name type: 0
// skipping _8339  name type: 0
    object _8338 = NOVALUE; // 14986 8338
    object _8337 = NOVALUE; // 14985 8337
    object _8336 = NOVALUE; // 14984 8336
    object _8335 = NOVALUE; // 14983 8335
    object _8334 = NOVALUE; // 14982 8334
// skipping _8333  name type: 0
    object _8332 = NOVALUE; // 14980 8332
    object _8331 = NOVALUE; // 14979 8331
    object _8330 = NOVALUE; // 14977 8330
    object _8329 = NOVALUE; // 14976 8329
// skipping _8328  name type: 0
// skipping _8327  name type: 0
    object _8326 = NOVALUE; // 14973 8326
    object _8324 = NOVALUE; // 14968 8324
    object _8323 = NOVALUE; // 14967 8323
    object _8322 = NOVALUE; // 14966 8322
    object _8320 = NOVALUE; // 14964 8320
// skipping _8319  name type: 0
    object _8318 = NOVALUE; // 14961 8318
    object _8317 = NOVALUE; // 14960 8317
// skipping _8316  name type: 0
    object _8315 = NOVALUE; // 14957 8315
// skipping _8314  name type: 0
    object _8313 = NOVALUE; // 14954 8313
    object _8312 = NOVALUE; // 14953 8312
    object _8311 = NOVALUE; // 14952 8311
    object _8310 = NOVALUE; // 14951 8310
    object _8309 = NOVALUE; // 14950 8309
    object _8308 = NOVALUE; // 14949 8308
    object _8307 = NOVALUE; // 14948 8307
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
    if (IS_SEQUENCE(_cmd_14937)){
            _8307 = SEQ_PTR(_cmd_14937)->length;
    }
    else {
        _8307 = 1;
    }
    // SubProg parse_at_cmds pc: 18 op: GREATER (6)
    _8308 = (_8307 > 2);
    _8307 = NOVALUE;
    // SubProg parse_at_cmds pc: 22 op: SC1_AND_IF (146)
    if (_8308 == 0) {
        goto L1; // [22] 78
    }
    // SubProg parse_at_cmds pc: 26 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_14937);
    _8310 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg parse_at_cmds pc: 30 op: EQUALS (3)
    if (IS_ATOM_INT(_8310)) {
        _8311 = (_8310 == 64);
    }
    else {
        _8311 = binary_op(EQUALS, _8310, 64);
    }
    _8310 = NOVALUE;
    // SubProg parse_at_cmds pc: 34 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 35 op: IF (20)
    if (_8311 == 0) {
        DeRef(_8311);
        _8311 = NOVALUE;
        goto L1; // [35] 78
    }
    else {
        if (!IS_ATOM_INT(_8311) && DBL_PTR(_8311)->dbl == 0.0){
            DeRef(_8311);
            _8311 = NOVALUE;
            goto L1; // [35] 78
        }
        DeRef(_8311);
        _8311 = NOVALUE;
    }
    DeRef(_8311);
    _8311 = NOVALUE;
    // SubProg parse_at_cmds pc: 38 op: STARTLINE (58)

    /** cmdline.e:914			at_cmds = io:read_lines(cmd[3..$])*/
    // SubProg parse_at_cmds pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_14937)){
            _8312 = SEQ_PTR(_cmd_14937)->length;
    }
    else {
        _8312 = 1;
    }
    // SubProg parse_at_cmds pc: 43 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8313;
    RHS_Slice(_cmd_14937, 3, _8312);
    // SubProg parse_at_cmds pc: 48 op: PROC (27)
    _0 = _at_cmds_14945;
    _at_cmds_14945 = _8read_lines(_8313);
    DeRef(_0);
    _8313 = NOVALUE;
    // SubProg parse_at_cmds pc: 52 op: STARTLINE (58)

    /** cmdline.e:915			if equal(at_cmds, -1) then*/
    // SubProg parse_at_cmds pc: 54 op: EQUAL (153)
    if (_at_cmds_14945 == -1)
    _8315 = 1;
    else if (IS_ATOM_INT(_at_cmds_14945) && IS_ATOM_INT(-1))
    _8315 = 0;
    else
    _8315 = (compare(_at_cmds_14945, -1) == 0);
    // SubProg parse_at_cmds pc: 58 op: IF (20)
    if (_8315 == 0)
    {
        _8315 = NOVALUE;
        goto L2; // [58] 156
    }
    else{
        _8315 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 61 op: STARTLINE (58)

    /** cmdline.e:918				cmds = eu:remove(cmds, arg_idx)*/
    // SubProg parse_at_cmds pc: 63 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_cmds_14938);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_arg_idx_14940)) ? _arg_idx_14940 : (object)(DBL_PTR(_arg_idx_14940)->dbl);
        int stop = (IS_ATOM_INT(_arg_idx_14940)) ? _arg_idx_14940 : (object)(DBL_PTR(_arg_idx_14940)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_cmds_14938), start, &_cmds_14938 );
            }
            else Tail(SEQ_PTR(_cmds_14938), stop+1, &_cmds_14938);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_cmds_14938), start, &_cmds_14938);
        }
        else {
            assign_slice_seq = &assign_space;
            _cmds_14938 = Remove_elements(start, stop, (SEQ_PTR(_cmds_14938)->ref == 1));
        }
    }
    // SubProg parse_at_cmds pc: 68 op: STARTLINE (58)

    /** cmdline.e:919				return cmds*/
    // SubProg parse_at_cmds pc: 70 op: RETURNF (28)

// Exiting block BLOCK: parse_at_cmds

// block var cmd_14937
    DeRefDS(_cmd_14937);

// block var opts_14939
    DeRefDS(_opts_14939);

// block var arg_idx_14940

// block var add_help_rid_14941

// block var parse_options_14942
    DeRefi(_parse_options_14942);

// block var help_on_error_14943

// block var auto_help_14944

// block var at_cmds_14945
    DeRef(_at_cmds_14945);

// block var j_14946
    DeRef(_8308);
    _8308 = NOVALUE;
    return _cmds_14938;
    // SubProg parse_at_cmds pc: 74 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 75 op: ELSE (23)
    goto L2; // [75] 156
    // SubProg parse_at_cmds pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 78 op: STARTLINE (58)

    /** cmdline.e:923			at_cmds = io:read_lines(cmd[2..$])*/
    // SubProg parse_at_cmds pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_14937)){
            _8317 = SEQ_PTR(_cmd_14937)->length;
    }
    else {
        _8317 = 1;
    }
    // SubProg parse_at_cmds pc: 83 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8318;
    RHS_Slice(_cmd_14937, 2, _8317);
    // SubProg parse_at_cmds pc: 88 op: PROC (27)
    _0 = _at_cmds_14945;
    _at_cmds_14945 = _8read_lines(_8318);
    DeRef(_0);
    _8318 = NOVALUE;
    // SubProg parse_at_cmds pc: 92 op: STARTLINE (58)

    /** cmdline.e:924			if equal(at_cmds, -1) then*/
    // SubProg parse_at_cmds pc: 94 op: EQUAL (153)
    if (_at_cmds_14945 == -1)
    _8320 = 1;
    else if (IS_ATOM_INT(_at_cmds_14945) && IS_ATOM_INT(-1))
    _8320 = 0;
    else
    _8320 = (compare(_at_cmds_14945, -1) == 0);
    // SubProg parse_at_cmds pc: 98 op: IF (20)
    if (_8320 == 0)
    {
        _8320 = NOVALUE;
        goto L3; // [98] 155
    }
    else{
        _8320 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 101 op: STARTLINE (58)

    /** cmdline.e:925				printf(2, "Cannot access '@' argument file '%s'\n", {cmd[2..$]})*/
    // SubProg parse_at_cmds pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_14937)){
            _8322 = SEQ_PTR(_cmd_14937)->length;
    }
    else {
        _8322 = 1;
    }
    // SubProg parse_at_cmds pc: 106 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8323;
    RHS_Slice(_cmd_14937, 2, _8322);
    // SubProg parse_at_cmds pc: 111 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _8323;
    _8324 = MAKE_SEQ(_1);
    _8323 = NOVALUE;
    // SubProg parse_at_cmds pc: 115 op: PRINTF (38)
    EPrintf(2, _8321, _8324);
    DeRefDS(_8324);
    _8324 = NOVALUE;
    // SubProg parse_at_cmds pc: 119 op: STARTLINE (58)

    /** cmdline.e:926				if help_on_error then*/
    // SubProg parse_at_cmds pc: 121 op: IF (20)
    if (_help_on_error_14943 == 0)
    {
        goto L4; // [121] 136
    }
    else{
    }
    // SubProg parse_at_cmds pc: 124 op: STARTLINE (58)

    /** cmdline.e:927					local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_at_cmds pc: 126 op: PROC (27)
    RefDS(_opts_14939);
    RefDS(_cmds_14938);
    Ref(_parse_options_14942);
    _4local_help(_opts_14939, _add_help_rid_14941, _cmds_14938, 1, _parse_options_14942);
    // SubProg parse_at_cmds pc: 133 op: ELSE (23)
    goto L5; // [133] 149
    // SubProg parse_at_cmds pc: 135 op: NOP1 (159)
L4: // addr: 136 pc: 135 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 136 op: STARTLINE (58)

    /** cmdline.e:928				elsif auto_help then*/
    // SubProg parse_at_cmds pc: 138 op: IF (20)
    if (_auto_help_14944 == 0)
    {
        goto L6; // [138] 148
    }
    else{
    }
    // SubProg parse_at_cmds pc: 141 op: STARTLINE (58)

    /** cmdline.e:929					printf(2,"Try '--help' for more information.\n",{})          */
    // SubProg parse_at_cmds pc: 143 op: PRINTF (38)
    EPrintf(2, _8325, _5);
    // SubProg parse_at_cmds pc: 147 op: NOP1 (159)
L6: // addr: 148 pc: 147 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 148 op: NOP1 (159)
L5: // addr: 149 pc: 148 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 149 op: STARTLINE (58)

    /** cmdline.e:931				local_abort(1)*/
    // SubProg parse_at_cmds pc: 151 op: PROC (27)
    _4local_abort(1);
    // SubProg parse_at_cmds pc: 154 op: NOP1 (159)
L3: // addr: 155 pc: 154 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 155 op: NOP1 (159)
L2: // addr: 156 pc: 155 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 156 op: STARTLINE (58)

    /** cmdline.e:936		j = 0*/
    // SubProg parse_at_cmds pc: 158 op: ASSIGN_I (113)
    _j_14946 = 0;
    // SubProg parse_at_cmds pc: 161 op: STARTLINE (58)

    /** cmdline.e:937		while j < length(at_cmds) do*/
    // SubProg parse_at_cmds pc: 163 op: NOP2 (110)
    // SubProg parse_at_cmds pc: 165 op: NOPWHILE (158)
L7: // addr: 166 pc: 165 sub: 14935 op: 158
    // SubProg parse_at_cmds pc: 166 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_at_cmds pc: 168 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_14945)){
            _8326 = SEQ_PTR(_at_cmds_14945)->length;
    }
    else {
        _8326 = 1;
    }
    // SubProg parse_at_cmds pc: 171 op: LESS_IFW_I (119)
    if (_j_14946 >= _8326)
    goto L8; // [171] 492
    // SubProg parse_at_cmds pc: 175 op: STARTLINE (58)

    /** cmdline.e:938			j += 1*/
    // SubProg parse_at_cmds pc: 177 op: PLUS1_I (117)
    _j_14946 = _j_14946 + 1;
    // SubProg parse_at_cmds pc: 181 op: STARTLINE (58)

    /** cmdline.e:939			at_cmds[j] = text:trim(at_cmds[j])*/
    // SubProg parse_at_cmds pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8329 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 187 op: PROC (27)
    Ref(_8329);
    RefDS(_3933);
    _8330 = _17trim(_8329, _3933, 0);
    _8329 = NOVALUE;
    // SubProg parse_at_cmds pc: 193 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_14945 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_14946);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8330;
    if( _1 != _8330 ){
        DeRef(_1);
    }
    _8330 = NOVALUE;
    // SubProg parse_at_cmds pc: 197 op: STARTLINE (58)

    /** cmdline.e:940			if length(at_cmds[j]) = 0 then*/
    // SubProg parse_at_cmds pc: 199 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8331 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 203 op: LENGTH (42)
    if (IS_SEQUENCE(_8331)){
            _8332 = SEQ_PTR(_8331)->length;
    }
    else {
        _8332 = 1;
    }
    _8331 = NOVALUE;
    // SubProg parse_at_cmds pc: 206 op: EQUALS_IFW_I (121)
    if (_8332 != 0)
    goto L9; // [206] 246
    // SubProg parse_at_cmds pc: 210 op: STARTLINE (58)

    /** cmdline.e:941				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    // SubProg parse_at_cmds pc: 212 op: MINUS (10)
    _8334 = _j_14946 - 1;
    // SubProg parse_at_cmds pc: 216 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8335;
    RHS_Slice(_at_cmds_14945, 1, _8334);
    // SubProg parse_at_cmds pc: 221 op: PLUS1 (93)
    _8336 = _j_14946 + 1;
    if (_8336 > MAXINT){
        _8336 = NewDouble((eudouble)_8336);
    }
    // SubProg parse_at_cmds pc: 225 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_14945)){
            _8337 = SEQ_PTR(_at_cmds_14945)->length;
    }
    else {
        _8337 = 1;
    }
    // SubProg parse_at_cmds pc: 228 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8338;
    RHS_Slice(_at_cmds_14945, _8336, _8337);
    // SubProg parse_at_cmds pc: 233 op: CONCAT (15)
    Concat((object_ptr)&_at_cmds_14945, _8335, _8338);
    DeRefDS(_8335);
    _8335 = NOVALUE;
    DeRef(_8335);
    _8335 = NOVALUE;
    DeRefDS(_8338);
    _8338 = NOVALUE;
    // SubProg parse_at_cmds pc: 237 op: STARTLINE (58)

    /** cmdline.e:942				j -= 1*/
    // SubProg parse_at_cmds pc: 239 op: MINUS_I (116)
    _j_14946 = _j_14946 - 1;
    // SubProg parse_at_cmds pc: 243 op: ELSE (23)
    goto L7; // [243] 166
    // SubProg parse_at_cmds pc: 245 op: NOP1 (159)
L9: // addr: 246 pc: 245 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 246 op: STARTLINE (58)

    /** cmdline.e:944			elsif at_cmds[j][1] = '#' then*/
    // SubProg parse_at_cmds pc: 248 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8341 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8341);
    _8342 = (object)*(((s1_ptr)_2)->base + 1);
    _8341 = NOVALUE;
    // SubProg parse_at_cmds pc: 256 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _8342, 35)){
        _8342 = NOVALUE;
        goto LA; // [256] 296
    }
    _8342 = NOVALUE;
    // SubProg parse_at_cmds pc: 260 op: STARTLINE (58)

    /** cmdline.e:945				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    // SubProg parse_at_cmds pc: 262 op: MINUS (10)
    _8344 = _j_14946 - 1;
    // SubProg parse_at_cmds pc: 266 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8345;
    RHS_Slice(_at_cmds_14945, 1, _8344);
    // SubProg parse_at_cmds pc: 271 op: PLUS1 (93)
    _8346 = _j_14946 + 1;
    if (_8346 > MAXINT){
        _8346 = NewDouble((eudouble)_8346);
    }
    // SubProg parse_at_cmds pc: 275 op: LENGTH (42)
    if (IS_SEQUENCE(_at_cmds_14945)){
            _8347 = SEQ_PTR(_at_cmds_14945)->length;
    }
    else {
        _8347 = 1;
    }
    // SubProg parse_at_cmds pc: 278 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8348;
    RHS_Slice(_at_cmds_14945, _8346, _8347);
    // SubProg parse_at_cmds pc: 283 op: CONCAT (15)
    Concat((object_ptr)&_at_cmds_14945, _8345, _8348);
    DeRefDS(_8345);
    _8345 = NOVALUE;
    DeRef(_8345);
    _8345 = NOVALUE;
    DeRefDS(_8348);
    _8348 = NOVALUE;
    // SubProg parse_at_cmds pc: 287 op: STARTLINE (58)

    /** cmdline.e:946				j -= 1*/
    // SubProg parse_at_cmds pc: 289 op: MINUS_I (116)
    _j_14946 = _j_14946 - 1;
    // SubProg parse_at_cmds pc: 293 op: ELSE (23)
    goto L7; // [293] 166
    // SubProg parse_at_cmds pc: 295 op: NOP1 (159)
LA: // addr: 296 pc: 295 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 296 op: STARTLINE (58)

    /** cmdline.e:948			elsif at_cmds[j][1] = '"' and at_cmds[j][$] = '"' and length(at_cmds[j]) >= 2 then*/
    // SubProg parse_at_cmds pc: 298 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8351 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 302 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8351);
    _8352 = (object)*(((s1_ptr)_2)->base + 1);
    _8351 = NOVALUE;
    // SubProg parse_at_cmds pc: 306 op: EQUALS (3)
    if (IS_ATOM_INT(_8352)) {
        _8353 = (_8352 == 34);
    }
    else {
        _8353 = binary_op(EQUALS, _8352, 34);
    }
    _8352 = NOVALUE;
    // SubProg parse_at_cmds pc: 310 op: SC1_AND (141)
    if (IS_ATOM_INT(_8353)) {
        if (_8353 == 0) {
            DeRef(_8354);
            _8354 = 0;
            goto LB; // [310] 333
        }
    }
    else {
        if (DBL_PTR(_8353)->dbl == 0.0) {
            DeRef(_8354);
            _8354 = 0;
            goto LB; // [310] 333
        }
    }
    // SubProg parse_at_cmds pc: 314 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8355 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 318 op: LENGTH (42)
    if (IS_SEQUENCE(_8355)){
            _8356 = SEQ_PTR(_8355)->length;
    }
    else {
        _8356 = 1;
    }
    // SubProg parse_at_cmds pc: 321 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8355);
    _8357 = (object)*(((s1_ptr)_2)->base + _8356);
    _8355 = NOVALUE;
    // SubProg parse_at_cmds pc: 325 op: EQUALS (3)
    if (IS_ATOM_INT(_8357)) {
        _8358 = (_8357 == 34);
    }
    else {
        _8358 = binary_op(EQUALS, _8357, 34);
    }
    _8357 = NOVALUE;
    // SubProg parse_at_cmds pc: 329 op: SC2_AND (142)
    DeRef(_8354);
    if (IS_ATOM_INT(_8358))
    _8354 = (_8358 != 0);
    else
    _8354 = DBL_PTR(_8358)->dbl != 0.0;
    // SubProg parse_at_cmds pc: 332 op: NOP1 (159)
LB: // addr: 333 pc: 332 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 333 op: SC1_AND_IF (146)
    if (_8354 == 0) {
        goto LC; // [333] 377
    }
    // SubProg parse_at_cmds pc: 337 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8360 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 341 op: LENGTH (42)
    if (IS_SEQUENCE(_8360)){
            _8361 = SEQ_PTR(_8360)->length;
    }
    else {
        _8361 = 1;
    }
    _8360 = NOVALUE;
    // SubProg parse_at_cmds pc: 344 op: GREATEREQ (2)
    _8362 = (_8361 >= 2);
    _8361 = NOVALUE;
    // SubProg parse_at_cmds pc: 348 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 349 op: IF (20)
    if (_8362 == 0)
    {
        DeRef(_8362);
        _8362 = NOVALUE;
        goto LC; // [349] 377
    }
    else{
        DeRef(_8362);
        _8362 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 352 op: STARTLINE (58)

    /** cmdline.e:949				at_cmds[j] = at_cmds[j][2 .. $-1]*/
    // SubProg parse_at_cmds pc: 354 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8363 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 358 op: LENGTH (42)
    if (IS_SEQUENCE(_8363)){
            _8364 = SEQ_PTR(_8363)->length;
    }
    else {
        _8364 = 1;
    }
    // SubProg parse_at_cmds pc: 361 op: MINUS (10)
    _8365 = _8364 - 1;
    _8364 = NOVALUE;
    // SubProg parse_at_cmds pc: 365 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8366;
    RHS_Slice(_8363, 2, _8365);
    _8363 = NOVALUE;
    // SubProg parse_at_cmds pc: 370 op: ASSIGN_SUBS_CHECK (84)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_14945 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_14946);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8366;
    if( _1 != _8366 ){
        DeRef(_1);
    }
    _8366 = NOVALUE;
    // SubProg parse_at_cmds pc: 374 op: ELSE (23)
    goto L7; // [374] 166
    // SubProg parse_at_cmds pc: 376 op: NOP1 (159)
LC: // addr: 377 pc: 376 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 377 op: STARTLINE (58)

    /** cmdline.e:951			elsif at_cmds[j][1] = '\'' and at_cmds[j][$] = '\'' and length(at_cmds[j]) >= 2 then*/
    // SubProg parse_at_cmds pc: 379 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8367 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 383 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8367);
    _8368 = (object)*(((s1_ptr)_2)->base + 1);
    _8367 = NOVALUE;
    // SubProg parse_at_cmds pc: 387 op: EQUALS (3)
    if (IS_ATOM_INT(_8368)) {
        _8369 = (_8368 == 39);
    }
    else {
        _8369 = binary_op(EQUALS, _8368, 39);
    }
    _8368 = NOVALUE;
    // SubProg parse_at_cmds pc: 391 op: SC1_AND (141)
    if (IS_ATOM_INT(_8369)) {
        if (_8369 == 0) {
            DeRef(_8370);
            _8370 = 0;
            goto LD; // [391] 414
        }
    }
    else {
        if (DBL_PTR(_8369)->dbl == 0.0) {
            DeRef(_8370);
            _8370 = 0;
            goto LD; // [391] 414
        }
    }
    // SubProg parse_at_cmds pc: 395 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8371 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 399 op: LENGTH (42)
    if (IS_SEQUENCE(_8371)){
            _8372 = SEQ_PTR(_8371)->length;
    }
    else {
        _8372 = 1;
    }
    // SubProg parse_at_cmds pc: 402 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8371);
    _8373 = (object)*(((s1_ptr)_2)->base + _8372);
    _8371 = NOVALUE;
    // SubProg parse_at_cmds pc: 406 op: EQUALS (3)
    if (IS_ATOM_INT(_8373)) {
        _8374 = (_8373 == 39);
    }
    else {
        _8374 = binary_op(EQUALS, _8373, 39);
    }
    _8373 = NOVALUE;
    // SubProg parse_at_cmds pc: 410 op: SC2_AND (142)
    DeRef(_8370);
    if (IS_ATOM_INT(_8374))
    _8370 = (_8374 != 0);
    else
    _8370 = DBL_PTR(_8374)->dbl != 0.0;
    // SubProg parse_at_cmds pc: 413 op: NOP1 (159)
LD: // addr: 414 pc: 413 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 414 op: SC1_AND_IF (146)
    if (_8370 == 0) {
        goto LE; // [414] 484
    }
    // SubProg parse_at_cmds pc: 418 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8376 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 422 op: LENGTH (42)
    if (IS_SEQUENCE(_8376)){
            _8377 = SEQ_PTR(_8376)->length;
    }
    else {
        _8377 = 1;
    }
    _8376 = NOVALUE;
    // SubProg parse_at_cmds pc: 425 op: GREATEREQ (2)
    _8378 = (_8377 >= 2);
    _8377 = NOVALUE;
    // SubProg parse_at_cmds pc: 429 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 430 op: IF (20)
    if (_8378 == 0)
    {
        DeRef(_8378);
        _8378 = NOVALUE;
        goto LE; // [430] 484
    }
    else{
        DeRef(_8378);
        _8378 = NOVALUE;
    }
    // SubProg parse_at_cmds pc: 433 op: STARTLINE (58)

    /** cmdline.e:952				sequence cmdex = stdseq:split(at_cmds[j][2 .. $-1],' ', 1) -- Empty words removed.*/
    // SubProg parse_at_cmds pc: 435 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_at_cmds_14945);
    _8379 = (object)*(((s1_ptr)_2)->base + _j_14946);
    // SubProg parse_at_cmds pc: 439 op: LENGTH (42)
    if (IS_SEQUENCE(_8379)){
            _8380 = SEQ_PTR(_8379)->length;
    }
    else {
        _8380 = 1;
    }
    // SubProg parse_at_cmds pc: 442 op: MINUS (10)
    _8381 = _8380 - 1;
    _8380 = NOVALUE;
    // SubProg parse_at_cmds pc: 446 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8382;
    RHS_Slice(_8379, 2, _8381);
    _8379 = NOVALUE;
    // SubProg parse_at_cmds pc: 451 op: PROC (27)
    _0 = _cmdex_15030;
    _cmdex_15030 = _23split(_8382, 32, 1, 0);
    DeRef(_0);
    _8382 = NOVALUE;
    // SubProg parse_at_cmds pc: 458 op: SEQUENCE_CHECK (97)
    // SubProg parse_at_cmds pc: 460 op: STARTLINE (58)

    /** cmdline.e:954				at_cmds = replace(at_cmds, cmdex, j)*/
    // SubProg parse_at_cmds pc: 462 op: REPLACE (201)
    {
        intptr_t p1 = _at_cmds_14945;
        intptr_t p2 = _cmdex_15030;
        intptr_t p3 = _j_14946;
        intptr_t p4 = _j_14946;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_at_cmds_14945;
        Replace( &replace_params );
    }
    // SubProg parse_at_cmds pc: 468 op: STARTLINE (58)

    /** cmdline.e:955				j = j + length(cmdex) - 1*/
    // SubProg parse_at_cmds pc: 470 op: LENGTH (42)
    if (IS_SEQUENCE(_cmdex_15030)){
            _8385 = SEQ_PTR(_cmdex_15030)->length;
    }
    else {
        _8385 = 1;
    }
    // SubProg parse_at_cmds pc: 473 op: PLUS (11)
    _8386 = _j_14946 + _8385;
    if ((object)((uintptr_t)_8386 + (uintptr_t)HIGH_BITS) >= 0){
        _8386 = NewDouble((eudouble)_8386);
    }
    _8385 = NOVALUE;
    // SubProg parse_at_cmds pc: 477 op: MINUS (10)
    if (IS_ATOM_INT(_8386)) {
        _j_14946 = _8386 - 1;
    }
    else {
        _j_14946 = NewDouble(DBL_PTR(_8386)->dbl - (eudouble)1);
    }
    DeRef(_8386);
    _8386 = NOVALUE;
    // SubProg parse_at_cmds pc: 481 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_14946)) {
        _1 = (object)(DBL_PTR(_j_14946)->dbl);
        DeRefDS(_j_14946);
        _j_14946 = _1;
    }
    // SubProg parse_at_cmds pc: 483 op: NOP1 (159)
LE: // addr: 484 pc: 483 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 484 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cmdex_15030
    DeRef(_cmdex_15030);
    _cmdex_15030 = NOVALUE;
    // SubProg parse_at_cmds pc: 486 op: NOP1 (159)
    // SubProg parse_at_cmds pc: 487 op: STARTLINE (58)

    /** cmdline.e:958		end while*/
    // SubProg parse_at_cmds pc: 489 op: ENDWHILE (22)
    goto L7; // [489] 166
    // SubProg parse_at_cmds pc: 491 op: NOP1 (159)
L8: // addr: 492 pc: 491 sub: 14935 op: 159
    // SubProg parse_at_cmds pc: 492 op: STARTLINE (58)

    /** cmdline.e:961		cmds = replace(cmds, at_cmds, arg_idx)*/
    // SubProg parse_at_cmds pc: 494 op: REPLACE (201)
    {
        intptr_t p1 = _cmds_14938;
        intptr_t p2 = _at_cmds_14945;
        intptr_t p3 = _arg_idx_14940;
        intptr_t p4 = _arg_idx_14940;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_cmds_14938;
        Replace( &replace_params );
    }
    // SubProg parse_at_cmds pc: 500 op: STARTLINE (58)

    /** cmdline.e:962		return cmds*/
    // SubProg parse_at_cmds pc: 502 op: RETURNF (28)

// Exiting block BLOCK: parse_at_cmds

// block var cmd_14937
    DeRefDS(_cmd_14937);

// block var opts_14939
    DeRefDS(_opts_14939);

// block var arg_idx_14940

// block var add_help_rid_14941

// block var parse_options_14942
    DeRefi(_parse_options_14942);

// block var help_on_error_14943

// block var auto_help_14944

// block var at_cmds_14945
    DeRef(_at_cmds_14945);

// block var j_14946
    _8331 = NOVALUE;
    DeRef(_8344);
    _8344 = NOVALUE;
    _8376 = NOVALUE;
    DeRef(_8353);
    _8353 = NOVALUE;
    DeRef(_8374);
    _8374 = NOVALUE;
    DeRef(_8308);
    _8308 = NOVALUE;
    DeRef(_8346);
    _8346 = NOVALUE;
    DeRef(_8358);
    _8358 = NOVALUE;
    DeRef(_8365);
    _8365 = NOVALUE;
    DeRef(_8336);
    _8336 = NOVALUE;
    _8360 = NOVALUE;
    DeRef(_8381);
    _8381 = NOVALUE;
    DeRef(_8369);
    _8369 = NOVALUE;
    DeRef(_8334);
    _8334 = NOVALUE;
    return _cmds_14938;
    // SubProg parse_at_cmds pc: 506 op: BADRETURNF (43)
    ;
}


void _4check_mandatory(object _opts_15043, object _parsed_opts_15045, object _add_help_rid_15046, object _cmds_15047, object _parse_options_15048, object _help_on_error_15049, object _auto_help_15050)
{
    object _8413 = NOVALUE; // 15084 8413
    object _8412 = NOVALUE; // 15083 8412
    object _8411 = NOVALUE; // 15082 8411
// skipping _8409  name type: 0
    object _8408 = NOVALUE; // 15079 8408
    object _8407 = NOVALUE; // 15078 8407
    object _8406 = NOVALUE; // 15077 8406
// skipping _8404  name type: 0
    object _8403 = NOVALUE; // 15070 8403
    object _8402 = NOVALUE; // 15069 8402
    object _8401 = NOVALUE; // 15068 8401
    object _8400 = NOVALUE; // 15067 8400
    object _8399 = NOVALUE; // 15065 8399
    object _8398 = NOVALUE; // 15064 8398
    object _8397 = NOVALUE; // 15063 8397
    object _8396 = NOVALUE; // 15062 8396
    object _8395 = NOVALUE; // 15061 8395
    object _8394 = NOVALUE; // 15060 8394
    object _8393 = NOVALUE; // 15059 8393
    object _8392 = NOVALUE; // 15057 8392
    object _8391 = NOVALUE; // 15056 8391
    object _8390 = NOVALUE; // 15055 8390
    object _8389 = NOVALUE; // 15053 8389
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_mandatory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg check_mandatory pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg check_mandatory pc: 5 op: INTEGER_CHECK (96)
    // SubProg check_mandatory pc: 7 op: INTEGER_CHECK (96)
    // SubProg check_mandatory pc: 9 op: STARTLINE (58)

    /** cmdline.e:969		for i = 1 to length(opts) do*/
    // SubProg check_mandatory pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_15043)){
            _8389 = SEQ_PTR(_opts_15043)->length;
    }
    else {
        _8389 = 1;
    }
    // SubProg check_mandatory pc: 14 op: FOR_I (125)
    {
        object _i_15052;
        _i_15052 = 1;
L1: // addr: 21 pc: 14 sub: 15041 op: 125
        if (_i_15052 > _8389){
            goto L2; // [14] 219
        }
        // SubProg check_mandatory pc: 21 op: STARTLINE (58)

        /** cmdline.e:970			if find(MANDATORY, opts[i][OPTIONS]) then*/
        // SubProg check_mandatory pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_15043);
        _8390 = (object)*(((s1_ptr)_2)->base + _i_15052);
        // SubProg check_mandatory pc: 27 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8390);
        _8391 = (object)*(((s1_ptr)_2)->base + 4);
        _8390 = NOVALUE;
        // SubProg check_mandatory pc: 31 op: FIND_FROM (176)
        _8392 = find_from(109, _8391, 1);
        _8391 = NOVALUE;
        // SubProg check_mandatory pc: 36 op: IF (20)
        if (_8392 == 0)
        {
            _8392 = NOVALUE;
            goto L3; // [36] 212
        }
        else{
            _8392 = NOVALUE;
        }
        // SubProg check_mandatory pc: 39 op: STARTLINE (58)

        /** cmdline.e:971				if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        // SubProg check_mandatory pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_15043);
        _8393 = (object)*(((s1_ptr)_2)->base + _i_15052);
        // SubProg check_mandatory pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8393);
        _8394 = (object)*(((s1_ptr)_2)->base + 1);
        _8393 = NOVALUE;
        // SubProg check_mandatory pc: 49 op: IS_AN_ATOM (67)
        _8395 = IS_ATOM(_8394);
        _8394 = NOVALUE;
        // SubProg check_mandatory pc: 52 op: SC1_AND_IF (146)
        if (_8395 == 0) {
            goto L4; // [52] 138
        }
        // SubProg check_mandatory pc: 56 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_15043);
        _8397 = (object)*(((s1_ptr)_2)->base + _i_15052);
        // SubProg check_mandatory pc: 60 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8397);
        _8398 = (object)*(((s1_ptr)_2)->base + 2);
        _8397 = NOVALUE;
        // SubProg check_mandatory pc: 64 op: IS_AN_ATOM (67)
        _8399 = IS_ATOM(_8398);
        _8398 = NOVALUE;
        // SubProg check_mandatory pc: 67 op: NOP1 (159)
        // SubProg check_mandatory pc: 68 op: IF (20)
        if (_8399 == 0)
        {
            _8399 = NOVALUE;
            goto L4; // [68] 138
        }
        else{
            _8399 = NOVALUE;
        }
        // SubProg check_mandatory pc: 71 op: STARTLINE (58)

        /** cmdline.e:972					if length(map:get(parsed_opts, opts[i][MAPNAME])) = 0 then*/
        // SubProg check_mandatory pc: 73 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_15043);
        _8400 = (object)*(((s1_ptr)_2)->base + _i_15052);
        // SubProg check_mandatory pc: 77 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8400);
        _8401 = (object)*(((s1_ptr)_2)->base + 6);
        _8400 = NOVALUE;
        // SubProg check_mandatory pc: 81 op: PROC (27)
        Ref(_parsed_opts_15045);
        Ref(_8401);
        _8402 = _29get(_parsed_opts_15045, _8401, 0);
        _8401 = NOVALUE;
        // SubProg check_mandatory pc: 87 op: LENGTH (42)
        if (IS_SEQUENCE(_8402)){
                _8403 = SEQ_PTR(_8402)->length;
        }
        else {
            _8403 = 1;
        }
        DeRef(_8402);
        _8402 = NOVALUE;
        // SubProg check_mandatory pc: 90 op: EQUALS_IFW_I (121)
        if (_8403 != 0)
        goto L5; // [90] 211
        // SubProg check_mandatory pc: 94 op: STARTLINE (58)

        /** cmdline.e:973						puts(1, "Additional arguments were expected.\n\n")*/
        // SubProg check_mandatory pc: 96 op: PUTS (44)
        EPuts(1, _8405); // DJP 
        // SubProg check_mandatory pc: 99 op: STARTLINE (58)

        /** cmdline.e:974						if help_on_error then*/
        // SubProg check_mandatory pc: 101 op: IF (20)
        if (_help_on_error_15049 == 0)
        {
            goto L6; // [101] 116
        }
        else{
        }
        // SubProg check_mandatory pc: 104 op: STARTLINE (58)

        /** cmdline.e:975							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        // SubProg check_mandatory pc: 106 op: PROC (27)
        RefDS(_opts_15043);
        RefDS(_cmds_15047);
        Ref(_parse_options_15048);
        _4local_help(_opts_15043, _add_help_rid_15046, _cmds_15047, 1, _parse_options_15048);
        // SubProg check_mandatory pc: 113 op: ELSE (23)
        goto L7; // [113] 129
        // SubProg check_mandatory pc: 115 op: NOP1 (159)
L6: // addr: 116 pc: 115 sub: 15041 op: 159
        // SubProg check_mandatory pc: 116 op: STARTLINE (58)

        /** cmdline.e:976						elsif auto_help then*/
        // SubProg check_mandatory pc: 118 op: IF (20)
        if (_auto_help_15050 == 0)
        {
            goto L8; // [118] 128
        }
        else{
        }
        // SubProg check_mandatory pc: 121 op: STARTLINE (58)

        /** cmdline.e:977							printf(2,"Try '--help' for more information.\n",{})          */
        // SubProg check_mandatory pc: 123 op: PRINTF (38)
        EPrintf(2, _8325, _5);
        // SubProg check_mandatory pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 15041 op: 159
        // SubProg check_mandatory pc: 128 op: NOP1 (159)
L7: // addr: 129 pc: 128 sub: 15041 op: 159
        // SubProg check_mandatory pc: 129 op: STARTLINE (58)

        /** cmdline.e:979						local_abort(1)*/
        // SubProg check_mandatory pc: 131 op: PROC (27)
        _4local_abort(1);
        // SubProg check_mandatory pc: 134 op: NOP1 (159)
        // SubProg check_mandatory pc: 135 op: ELSE (23)
        goto L5; // [135] 211
        // SubProg check_mandatory pc: 137 op: NOP1 (159)
L4: // addr: 138 pc: 137 sub: 15041 op: 159
        // SubProg check_mandatory pc: 138 op: STARTLINE (58)

        /** cmdline.e:982					if not map:has(parsed_opts, opts[i][MAPNAME]) then*/
        // SubProg check_mandatory pc: 140 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_15043);
        _8406 = (object)*(((s1_ptr)_2)->base + _i_15052);
        // SubProg check_mandatory pc: 144 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8406);
        _8407 = (object)*(((s1_ptr)_2)->base + 6);
        _8406 = NOVALUE;
        // SubProg check_mandatory pc: 148 op: PROC (27)
        Ref(_parsed_opts_15045);
        Ref(_8407);
        _8408 = _29has(_parsed_opts_15045, _8407);
        _8407 = NOVALUE;
        // SubProg check_mandatory pc: 153 op: NOT_IFW (108)
        if (IS_ATOM_INT(_8408)) {
            if (_8408 != 0){
                DeRef(_8408);
                _8408 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        else {
            if (DBL_PTR(_8408)->dbl != 0.0){
                DeRef(_8408);
                _8408 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        DeRef(_8408);
        _8408 = NOVALUE;
        // SubProg check_mandatory pc: 156 op: STARTLINE (58)

        /** cmdline.e:983						printf(1, "option '%s' is mandatory but was not supplied.\n\n", {opts[i][MAPNAME]})*/
        // SubProg check_mandatory pc: 158 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_opts_15043);
        _8411 = (object)*(((s1_ptr)_2)->base + _i_15052);
        // SubProg check_mandatory pc: 162 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_8411);
        _8412 = (object)*(((s1_ptr)_2)->base + 6);
        _8411 = NOVALUE;
        // SubProg check_mandatory pc: 166 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_8412);
        ((intptr_t*)_2)[1] = _8412;
        _8413 = MAKE_SEQ(_1);
        _8412 = NOVALUE;
        // SubProg check_mandatory pc: 170 op: PRINTF (38)
        EPrintf(1, _8410, _8413);
        DeRefDS(_8413);
        _8413 = NOVALUE;
        // SubProg check_mandatory pc: 174 op: STARTLINE (58)

        /** cmdline.e:984						if help_on_error then*/
        // SubProg check_mandatory pc: 176 op: IF (20)
        if (_help_on_error_15049 == 0)
        {
            goto LA; // [176] 191
        }
        else{
        }
        // SubProg check_mandatory pc: 179 op: STARTLINE (58)

        /** cmdline.e:985							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        // SubProg check_mandatory pc: 181 op: PROC (27)
        RefDS(_opts_15043);
        RefDS(_cmds_15047);
        Ref(_parse_options_15048);
        _4local_help(_opts_15043, _add_help_rid_15046, _cmds_15047, 1, _parse_options_15048);
        // SubProg check_mandatory pc: 188 op: ELSE (23)
        goto LB; // [188] 204
        // SubProg check_mandatory pc: 190 op: NOP1 (159)
LA: // addr: 191 pc: 190 sub: 15041 op: 159
        // SubProg check_mandatory pc: 191 op: STARTLINE (58)

        /** cmdline.e:986						elsif auto_help then*/
        // SubProg check_mandatory pc: 193 op: IF (20)
        if (_auto_help_15050 == 0)
        {
            goto LC; // [193] 203
        }
        else{
        }
        // SubProg check_mandatory pc: 196 op: STARTLINE (58)

        /** cmdline.e:987							printf(2,"Try '--help' for more information.\n",{})          */
        // SubProg check_mandatory pc: 198 op: PRINTF (38)
        EPrintf(2, _8325, _5);
        // SubProg check_mandatory pc: 202 op: NOP1 (159)
LC: // addr: 203 pc: 202 sub: 15041 op: 159
        // SubProg check_mandatory pc: 203 op: NOP1 (159)
LB: // addr: 204 pc: 203 sub: 15041 op: 159
        // SubProg check_mandatory pc: 204 op: STARTLINE (58)

        /** cmdline.e:989						local_abort(1)*/
        // SubProg check_mandatory pc: 206 op: PROC (27)
        _4local_abort(1);
        // SubProg check_mandatory pc: 209 op: NOP1 (159)
L9: // addr: 210 pc: 209 sub: 15041 op: 159
        // SubProg check_mandatory pc: 210 op: NOP1 (159)
L5: // addr: 211 pc: 210 sub: 15041 op: 159
        // SubProg check_mandatory pc: 211 op: NOP1 (159)
L3: // addr: 212 pc: 211 sub: 15041 op: 159
        // SubProg check_mandatory pc: 212 op: STARTLINE (58)

        /** cmdline.e:993		end for*/
        // SubProg check_mandatory pc: 214 op: ENDFOR_INT_UP1 (54)
        _i_15052 = _i_15052 + 1;
        goto L1; // [214] 21
L2: // addr: 219 pc: 214 sub: 15041 op: 54
        ;
    }
    // SubProg check_mandatory pc: 219 op: STARTLINE (58)

    /** cmdline.e:994	end procedure*/
    // SubProg check_mandatory pc: 221 op: RETURNP (29)

// Exiting block BLOCK: check_mandatory

// block var opts_15043
    DeRefDS(_opts_15043);

// block var parsed_opts_15045
    DeRef(_parsed_opts_15045);

// block var add_help_rid_15046

// block var cmds_15047
    DeRefDS(_cmds_15047);

// block var parse_options_15048
    DeRefi(_parse_options_15048);

// block var help_on_error_15049

// block var auto_help_15050
    _8402 = NOVALUE;
    return;
    // SubProg check_mandatory pc: 224 op: BADRETURNF (43)
    ;
}


void _4parse_abort(object _format_msg_15089, object _msg_data_15090, object _opts_15091, object _add_help_rid_15092, object _cmds_15093, object _parse_options_15094, object _help_on_error_15095, object _auto_help_15096)
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
    EPrintf(1, _format_msg_15089, _msg_data_15090);
    // SubProg parse_abort pc: 19 op: STARTLINE (58)

    /** cmdline.e:1000		if help_on_error then*/
    // SubProg parse_abort pc: 21 op: IF (20)
    if (_help_on_error_15095 == 0)
    {
        goto L1; // [21] 36
    }
    else{
    }
    // SubProg parse_abort pc: 24 op: STARTLINE (58)

    /** cmdline.e:1001			local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_abort pc: 26 op: PROC (27)
    RefDS(_opts_15091);
    RefDS(_cmds_15093);
    Ref(_parse_options_15094);
    _4local_help(_opts_15091, _add_help_rid_15092, _cmds_15093, 1, _parse_options_15094);
    // SubProg parse_abort pc: 33 op: ELSE (23)
    goto L2; // [33] 49
    // SubProg parse_abort pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 15087 op: 159
    // SubProg parse_abort pc: 36 op: STARTLINE (58)

    /** cmdline.e:1002		elsif auto_help then*/
    // SubProg parse_abort pc: 38 op: IF (20)
    if (_auto_help_15096 == 0)
    {
        goto L3; // [38] 48
    }
    else{
    }
    // SubProg parse_abort pc: 41 op: STARTLINE (58)

    /** cmdline.e:1003			printf(2,"Try '--help' for more information.\n",{})          */
    // SubProg parse_abort pc: 43 op: PRINTF (38)
    EPrintf(2, _8325, _5);
    // SubProg parse_abort pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 15087 op: 159
    // SubProg parse_abort pc: 48 op: NOP1 (159)
L2: // addr: 49 pc: 48 sub: 15087 op: 159
    // SubProg parse_abort pc: 49 op: STARTLINE (58)

    /** cmdline.e:1005		local_abort(1)*/
    // SubProg parse_abort pc: 51 op: PROC (27)
    _4local_abort(1);
    // SubProg parse_abort pc: 54 op: STARTLINE (58)

    /** cmdline.e:1006	end procedure*/
    // SubProg parse_abort pc: 56 op: RETURNP (29)

// Exiting block BLOCK: parse_abort

// block var format_msg_15089
    DeRefDSi(_format_msg_15089);

// block var msg_data_15090
    DeRefDS(_msg_data_15090);

// block var opts_15091
    DeRefDS(_opts_15091);

// block var add_help_rid_15092

// block var cmds_15093
    DeRefDS(_cmds_15093);

// block var parse_options_15094
    DeRefi(_parse_options_15094);

// block var help_on_error_15095

// block var auto_help_15096
    return;
    // SubProg parse_abort pc: 59 op: BADRETURNF (43)
    ;
}


object _4parse_commands(object _cmds_15101, object _opts_15102, object _parsed_opts_15104, object _help_opts_15105, object _add_help_rid_15106, object _parse_options_15107, object _use_at_15108, object _validation_15109, object _has_extra_15110, object _call_count_15111, object _help_on_error_15112, object _auto_help_15113)
{
    object _arg_idx_15114 = NOVALUE;
    object _opts_done_15115 = NOVALUE;
    object _find_result_15116 = NOVALUE;
    object _type__15117 = NOVALUE;
    object _from__15118 = NOVALUE;
    object _cmd_15119 = NOVALUE;
    object _handle_result_15184 = NOVALUE;
    object _8465 = NOVALUE; // 15189 8465
// skipping _8464  name type: 0
// skipping _8463  name type: 0
// skipping _8462  name type: 0
    object _8461 = NOVALUE; // 15183 8461
    object _8460 = NOVALUE; // 15182 8460
    object _8458 = NOVALUE; // 15180 8458
    object _8457 = NOVALUE; // 15179 8457
    object _8456 = NOVALUE; // 15178 8456
// skipping _8455  name type: 0
    object _8454 = NOVALUE; // 15176 8454
// skipping _8453  name type: 0
    object _8452 = NOVALUE; // 15173 8452
// skipping _8451  name type: 0
    object _8450 = NOVALUE; // 15170 8450
// skipping _8449  name type: 0
    object _8448 = NOVALUE; // 15167 8448
    object _8447 = NOVALUE; // 15166 8447
    object _8446 = NOVALUE; // 15165 8446
    object _8445 = NOVALUE; // 15164 8445
    object _8444 = NOVALUE; // 15163 8444
// skipping _8443  name type: 0
// skipping _8442  name type: 0
// skipping _8441  name type: 0
    object _8440 = NOVALUE; // 15157 8440
// skipping _8439  name type: 0
    object _8438 = NOVALUE; // 15154 8438
    object _8437 = NOVALUE; // 15153 8437
    object _8436 = NOVALUE; // 15151 8436
    object _8435 = NOVALUE; // 15148 8435
    object _8434 = NOVALUE; // 15147 8434
    object _8433 = NOVALUE; // 15146 8433
// skipping _8432  name type: 0
    object _8431 = NOVALUE; // 15141 8431
    object _8430 = NOVALUE; // 15140 8430
    object _8429 = NOVALUE; // 15139 8429
    object _8428 = NOVALUE; // 15138 8428
    object _8427 = NOVALUE; // 15137 8427
    object _8426 = NOVALUE; // 15136 8426
    object _8425 = NOVALUE; // 15135 8425
// skipping _8424  name type: 0
// skipping _8423  name type: 0
    object _8422 = NOVALUE; // 15131 8422
    object _8421 = NOVALUE; // 15130 8421
    object _8420 = NOVALUE; // 15129 8420
// skipping _8419  name type: 0
    object _8418 = NOVALUE; // 15126 8418
// skipping _8417  name type: 0
// skipping _8416  name type: 0
// skipping _8415  name type: 0
    object _8414 = NOVALUE; // 15121 8414
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
    _arg_idx_15114 = 2;
    // SubProg parse_commands pc: 24 op: STARTLINE (58)

    /** cmdline.e:1017		integer opts_done = 0*/
    // SubProg parse_commands pc: 26 op: ASSIGN_I (113)
    _opts_done_15115 = 0;
    // SubProg parse_commands pc: 29 op: STARTLINE (58)

    /** cmdline.e:1023		while arg_idx < length(cmds) do*/
    // SubProg parse_commands pc: 31 op: NOP2 (110)
    // SubProg parse_commands pc: 33 op: NOPWHILE (158)
L1: // addr: 34 pc: 33 sub: 15099 op: 158
    // SubProg parse_commands pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_15101)){
            _8414 = SEQ_PTR(_cmds_15101)->length;
    }
    else {
        _8414 = 1;
    }
    // SubProg parse_commands pc: 37 op: LESS_IFW_I (119)
    if (_arg_idx_15114 >= _8414)
    goto L2; // [37] 488
    // SubProg parse_commands pc: 41 op: STARTLINE (58)

    /** cmdline.e:1024			arg_idx += 1*/
    // SubProg parse_commands pc: 43 op: PLUS1_I (117)
    _arg_idx_15114 = _arg_idx_15114 + 1;
    // SubProg parse_commands pc: 47 op: STARTLINE (58)

    /** cmdline.e:1026			cmd = cmds[arg_idx]*/
    // SubProg parse_commands pc: 49 op: RHS_SUBS (25)
    DeRef(_cmd_15119);
    _2 = (object)SEQ_PTR(_cmds_15101);
    _cmd_15119 = (object)*(((s1_ptr)_2)->base + _arg_idx_15114);
    Ref(_cmd_15119);
    // SubProg parse_commands pc: 53 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 55 op: STARTLINE (58)

    /** cmdline.e:1027			if length(cmd) = 0 then*/
    // SubProg parse_commands pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_15119)){
            _8418 = SEQ_PTR(_cmd_15119)->length;
    }
    else {
        _8418 = 1;
    }
    // SubProg parse_commands pc: 60 op: EQUALS_IFW_I (121)
    if (_8418 != 0)
    goto L3; // [60] 69
    // SubProg parse_commands pc: 64 op: STARTLINE (58)

    /** cmdline.e:1028				continue*/
    // SubProg parse_commands pc: 66 op: ELSE (23)
    goto L1; // [66] 34
    // SubProg parse_commands pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 15099 op: 159
    // SubProg parse_commands pc: 69 op: STARTLINE (58)

    /** cmdline.e:1031			if cmd[1] = '@' and use_at then*/
    // SubProg parse_commands pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_15119);
    _8420 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 75 op: EQUALS (3)
    if (IS_ATOM_INT(_8420)) {
        _8421 = (_8420 == 64);
    }
    else {
        _8421 = binary_op(EQUALS, _8420, 64);
    }
    _8420 = NOVALUE;
    // SubProg parse_commands pc: 79 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_8421)) {
        if (_8421 == 0) {
            goto L4; // [79] 113
        }
    }
    else {
        if (DBL_PTR(_8421)->dbl == 0.0) {
            goto L4; // [79] 113
        }
    }
    // SubProg parse_commands pc: 83 op: NOP1 (159)
    // SubProg parse_commands pc: 84 op: IF (20)
    if (_use_at_15108 == 0)
    {
        goto L4; // [84] 113
    }
    else{
    }
    // SubProg parse_commands pc: 87 op: STARTLINE (58)

    /** cmdline.e:1032				cmds = parse_at_cmds( cmd, cmds, opts, arg_idx, add_help_rid, parse_options, help_on_error, auto_help )*/
    // SubProg parse_commands pc: 89 op: PROC (27)
    RefDS(_cmd_15119);
    RefDS(_cmds_15101);
    RefDS(_opts_15102);
    Ref(_parse_options_15107);
    _0 = _cmds_15101;
    _cmds_15101 = _4parse_at_cmds(_cmd_15119, _cmds_15101, _opts_15102, _arg_idx_15114, _add_help_rid_15106, _parse_options_15107, _help_on_error_15112, _auto_help_15113);
    DeRefDS(_0);
    // SubProg parse_commands pc: 100 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 102 op: STARTLINE (58)

    /** cmdline.e:1033				arg_idx -= 1*/
    // SubProg parse_commands pc: 104 op: MINUS_I (116)
    _arg_idx_15114 = _arg_idx_15114 - 1;
    // SubProg parse_commands pc: 108 op: STARTLINE (58)

    /** cmdline.e:1034				continue*/
    // SubProg parse_commands pc: 110 op: ELSE (23)
    goto L1; // [110] 34
    // SubProg parse_commands pc: 112 op: NOP1 (159)
L4: // addr: 113 pc: 112 sub: 15099 op: 159
    // SubProg parse_commands pc: 113 op: STARTLINE (58)

    /** cmdline.e:1037			if (opts_done or find(cmd[1], os:CMD_SWITCHES) = 0 or length(cmd) = 1)*/
    // SubProg parse_commands pc: 115 op: SC1_OR (143)
    if (_opts_done_15115 != 0) {
        _8425 = 1;
        goto L5; // [115] 136
    }
    // SubProg parse_commands pc: 119 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_15119);
    _8426 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 123 op: FIND_FROM (176)
    _8427 = find_from(_8426, _35CMD_SWITCHES_14079, 1);
    _8426 = NOVALUE;
    // SubProg parse_commands pc: 128 op: EQUALS (3)
    _8428 = (_8427 == 0);
    _8427 = NOVALUE;
    // SubProg parse_commands pc: 132 op: SC2_OR (144)
    _8425 = (_8428 != 0);
    // SubProg parse_commands pc: 135 op: NOP1 (159)
L5: // addr: 136 pc: 135 sub: 15099 op: 159
    // SubProg parse_commands pc: 136 op: SC1_OR (143)
    if (_8425 != 0) {
        DeRef(_8429);
        _8429 = 1;
        goto L6; // [136] 151
    }
    // SubProg parse_commands pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_15119)){
            _8430 = SEQ_PTR(_cmd_15119)->length;
    }
    else {
        _8430 = 1;
    }
    // SubProg parse_commands pc: 143 op: EQUALS (3)
    _8431 = (_8430 == 1);
    _8430 = NOVALUE;
    // SubProg parse_commands pc: 147 op: SC2_OR (144)
    _8429 = (_8431 != 0);
    // SubProg parse_commands pc: 150 op: NOP1 (159)
L6: // addr: 151 pc: 150 sub: 15099 op: 159
    // SubProg parse_commands pc: 151 op: IF (20)
    if (_8429 == 0)
    {
        _8429 = NOVALUE;
        goto L7; // [151] 227
    }
    else{
        _8429 = NOVALUE;
    }
    // SubProg parse_commands pc: 154 op: STARTLINE (58)

    /** cmdline.e:1039				map:put(parsed_opts, EXTRAS, cmd, map:APPEND)*/
    // SubProg parse_commands pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg parse_commands pc: 158 op: PROC (27)
    Ref(_parsed_opts_15104);
    RefDS(_4EXTRAS_14175);
    RefDS(_cmd_15119);
    _29put(_parsed_opts_15104, _4EXTRAS_14175, _cmd_15119, 6, 0);
    // SubProg parse_commands pc: 165 op: STARTLINE (58)

    /** cmdline.e:1040				has_extra = 1*/
    // SubProg parse_commands pc: 167 op: ASSIGN_I (113)
    _has_extra_15110 = 1;
    // SubProg parse_commands pc: 170 op: STARTLINE (58)

    /** cmdline.e:1041				if validation = NO_VALIDATION_AFTER_FIRST_EXTRA then*/
    // SubProg parse_commands pc: 172 op: EQUALS_IFW_I (121)
    if (_validation_15109 != 4)
    goto L1; // [172] 34
    // SubProg parse_commands pc: 176 op: STARTLINE (58)

    /** cmdline.e:1042					for i = arg_idx + 1 to length(cmds) do*/
    // SubProg parse_commands pc: 178 op: PLUS1 (93)
    _8433 = _arg_idx_15114 + 1;
    if (_8433 > MAXINT){
        _8433 = NewDouble((eudouble)_8433);
    }
    // SubProg parse_commands pc: 182 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_15101)){
            _8434 = SEQ_PTR(_cmds_15101)->length;
    }
    else {
        _8434 = 1;
    }
    // SubProg parse_commands pc: 185 op: FOR (21)
    {
        object _i_15145;
        Ref(_8433);
        _i_15145 = _8433;
L8: // addr: 192 pc: 185 sub: 15099 op: 21
        if (binary_op_a(GREATER, _i_15145, _8434)){
            goto L9; // [185] 214
        }
        // SubProg parse_commands pc: 192 op: STARTLINE (58)

        /** cmdline.e:1043						map:put(parsed_opts, EXTRAS, cmds[i], map:APPEND)*/
        // SubProg parse_commands pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg parse_commands pc: 196 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_cmds_15101);
        if (!IS_ATOM_INT(_i_15145)){
            _8435 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_15145)->dbl));
        }
        else{
            _8435 = (object)*(((s1_ptr)_2)->base + _i_15145);
        }
        // SubProg parse_commands pc: 200 op: PROC (27)
        Ref(_parsed_opts_15104);
        RefDS(_4EXTRAS_14175);
        Ref(_8435);
        _29put(_parsed_opts_15104, _4EXTRAS_14175, _8435, 6, 0);
        _8435 = NOVALUE;
        // SubProg parse_commands pc: 207 op: STARTLINE (58)

        /** cmdline.e:1044					end for*/
        // SubProg parse_commands pc: 209 op: ENDFOR_INT_UP1 (54)
        _0 = _i_15145;
        if (IS_ATOM_INT(_i_15145)) {
            _i_15145 = _i_15145 + 1;
            if ((object)((uintptr_t)_i_15145 +(uintptr_t) HIGH_BITS) >= 0){
                _i_15145 = NewDouble((eudouble)_i_15145);
            }
        }
        else {
            _i_15145 = binary_op_a(PLUS, _i_15145, 1);
        }
        DeRef(_0);
        goto L8; // [209] 192
L9: // addr: 214 pc: 209 sub: 15099 op: 54
        ;
        DeRef(_i_15145);
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
LA: // addr: 226 pc: 225 sub: 15099 op: 159
    // SubProg parse_commands pc: 226 op: NOP1 (159)
L7: // addr: 227 pc: 226 sub: 15099 op: 159
    // SubProg parse_commands pc: 227 op: STARTLINE (58)

    /** cmdline.e:1052			if equal(cmd, "--") then*/
    // SubProg parse_commands pc: 229 op: EQUAL (153)
    if (_cmd_15119 == _7162)
    _8436 = 1;
    else if (IS_ATOM_INT(_cmd_15119) && IS_ATOM_INT(_7162))
    _8436 = 0;
    else
    _8436 = (compare(_cmd_15119, _7162) == 0);
    // SubProg parse_commands pc: 233 op: IF (20)
    if (_8436 == 0)
    {
        _8436 = NOVALUE;
        goto LB; // [233] 246
    }
    else{
        _8436 = NOVALUE;
    }
    // SubProg parse_commands pc: 236 op: STARTLINE (58)

    /** cmdline.e:1053				opts_done = 1*/
    // SubProg parse_commands pc: 238 op: ASSIGN_I (113)
    _opts_done_15115 = 1;
    // SubProg parse_commands pc: 241 op: STARTLINE (58)

    /** cmdline.e:1054				continue*/
    // SubProg parse_commands pc: 243 op: ELSE (23)
    goto L1; // [243] 34
    // SubProg parse_commands pc: 245 op: NOP1 (159)
LB: // addr: 246 pc: 245 sub: 15099 op: 159
    // SubProg parse_commands pc: 246 op: STARTLINE (58)

    /** cmdline.e:1057			if equal(cmd[1..2], "--") then	  -- found --opt-name*/
    // SubProg parse_commands pc: 248 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8437;
    RHS_Slice(_cmd_15119, 1, 2);
    // SubProg parse_commands pc: 253 op: EQUAL (153)
    if (_8437 == _7162)
    _8438 = 1;
    else if (IS_ATOM_INT(_8437) && IS_ATOM_INT(_7162))
    _8438 = 0;
    else
    _8438 = (compare(_8437, _7162) == 0);
    DeRefDS(_8437);
    _8437 = NOVALUE;
    // SubProg parse_commands pc: 257 op: IF (20)
    if (_8438 == 0)
    {
        _8438 = NOVALUE;
        goto LC; // [257] 274
    }
    else{
        _8438 = NOVALUE;
    }
    // SubProg parse_commands pc: 260 op: STARTLINE (58)

    /** cmdline.e:1058				type_ = {LONGNAME, "--"}*/
    // SubProg parse_commands pc: 262 op: RIGHT_BRACE_2 (85)
    RefDS(_7162);
    DeRef(_type__15117);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = _7162;
    _type__15117 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 266 op: STARTLINE (58)

    /** cmdline.e:1059				from_ = 3*/
    // SubProg parse_commands pc: 268 op: ASSIGN_I (113)
    _from__15118 = 3;
    // SubProg parse_commands pc: 271 op: ELSE (23)
    goto LD; // [271] 310
    // SubProg parse_commands pc: 273 op: NOP1 (159)
LC: // addr: 274 pc: 273 sub: 15099 op: 159
    // SubProg parse_commands pc: 274 op: STARTLINE (58)

    /** cmdline.e:1060			elsif cmd[1] = '-' then -- found -opt*/
    // SubProg parse_commands pc: 276 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_15119);
    _8440 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 280 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _8440, 45)){
        _8440 = NOVALUE;
        goto LE; // [280] 298
    }
    _8440 = NOVALUE;
    // SubProg parse_commands pc: 284 op: STARTLINE (58)

    /** cmdline.e:1061				type_ = {SHORTNAME, "-"}*/
    // SubProg parse_commands pc: 286 op: RIGHT_BRACE_2 (85)
    RefDS(_7138);
    DeRef(_type__15117);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _7138;
    _type__15117 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 290 op: STARTLINE (58)

    /** cmdline.e:1062				from_ = 2*/
    // SubProg parse_commands pc: 292 op: ASSIGN_I (113)
    _from__15118 = 2;
    // SubProg parse_commands pc: 295 op: ELSE (23)
    goto LD; // [295] 310
    // SubProg parse_commands pc: 297 op: NOP1 (159)
LE: // addr: 298 pc: 297 sub: 15099 op: 159
    // SubProg parse_commands pc: 298 op: STARTLINE (58)

    /** cmdline.e:1064				type_ = {SHORTNAME, "/"}*/
    // SubProg parse_commands pc: 300 op: RIGHT_BRACE_2 (85)
    RefDS(_3181);
    DeRef(_type__15117);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _3181;
    _type__15117 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 304 op: STARTLINE (58)

    /** cmdline.e:1065				from_ = 2*/
    // SubProg parse_commands pc: 306 op: ASSIGN_I (113)
    _from__15118 = 2;
    // SubProg parse_commands pc: 309 op: NOP1 (159)
LD: // addr: 310 pc: 309 sub: 15099 op: 159
    // SubProg parse_commands pc: 310 op: STARTLINE (58)

    /** cmdline.e:1068			if find(cmd[from_..$], help_opts) then*/
    // SubProg parse_commands pc: 312 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_commands pc: 314 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_15119)){
            _8444 = SEQ_PTR(_cmd_15119)->length;
    }
    else {
        _8444 = 1;
    }
    // SubProg parse_commands pc: 317 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8445;
    RHS_Slice(_cmd_15119, _from__15118, _8444);
    // SubProg parse_commands pc: 322 op: FIND_FROM (176)
    _8446 = find_from(_8445, _help_opts_15105, 1);
    DeRefDS(_8445);
    _8445 = NOVALUE;
    // SubProg parse_commands pc: 327 op: IF (20)
    if (_8446 == 0)
    {
        _8446 = NOVALUE;
        goto LF; // [327] 347
    }
    else{
        _8446 = NOVALUE;
    }
    // SubProg parse_commands pc: 330 op: STARTLINE (58)

    /** cmdline.e:1069				local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    // SubProg parse_commands pc: 332 op: PROC (27)
    RefDS(_opts_15102);
    RefDS(_cmds_15101);
    Ref(_parse_options_15107);
    _4local_help(_opts_15102, _add_help_rid_15106, _cmds_15101, 1, _parse_options_15107);
    // SubProg parse_commands pc: 339 op: STARTLINE (58)

    /** cmdline.e:1070				ifdef UNITTEST then*/
    // SubProg parse_commands pc: 341 op: STARTLINE (58)

    /** cmdline.e:1073				local_abort(0)*/
    // SubProg parse_commands pc: 343 op: PROC (27)
    _4local_abort(0);
    // SubProg parse_commands pc: 346 op: NOP1 (159)
LF: // addr: 347 pc: 346 sub: 15099 op: 159
    // SubProg parse_commands pc: 347 op: STARTLINE (58)

    /** cmdline.e:1076			find_result = find_opt(opts, type_, cmd[from_..$])*/
    // SubProg parse_commands pc: 349 op: PRIVATE_INIT_CHECK (30)
    // SubProg parse_commands pc: 351 op: LENGTH (42)
    if (IS_SEQUENCE(_cmd_15119)){
            _8447 = SEQ_PTR(_cmd_15119)->length;
    }
    else {
        _8447 = 1;
    }
    // SubProg parse_commands pc: 354 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8448;
    RHS_Slice(_cmd_15119, _from__15118, _8447);
    // SubProg parse_commands pc: 359 op: PROC (27)
    RefDS(_opts_15102);
    RefDS(_type__15117);
    _0 = _find_result_15116;
    _find_result_15116 = _4find_opt(_opts_15102, _type__15117, _8448);
    DeRef(_0);
    _8448 = NOVALUE;
    // SubProg parse_commands pc: 365 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 367 op: STARTLINE (58)

    /** cmdline.e:1078			if find_result[1] < 0 then*/
    // SubProg parse_commands pc: 369 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15116);
    _8450 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 373 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _8450, 0)){
        _8450 = NOVALUE;
        goto L10; // [373] 382
    }
    _8450 = NOVALUE;
    // SubProg parse_commands pc: 377 op: STARTLINE (58)

    /** cmdline.e:1079				continue -- Couldn't use this command argument for anything.*/
    // SubProg parse_commands pc: 379 op: ELSE (23)
    goto L1; // [379] 34
    // SubProg parse_commands pc: 381 op: NOP1 (159)
L10: // addr: 382 pc: 381 sub: 15099 op: 159
    // SubProg parse_commands pc: 382 op: STARTLINE (58)

    /** cmdline.e:1082			if find_result[1] = 0 then*/
    // SubProg parse_commands pc: 384 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15116);
    _8452 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg parse_commands pc: 388 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _8452, 0)){
        _8452 = NOVALUE;
        goto L11; // [388] 449
    }
    _8452 = NOVALUE;
    // SubProg parse_commands pc: 392 op: STARTLINE (58)

    /** cmdline.e:1083				if validation = VALIDATE_ALL or*/
    // SubProg parse_commands pc: 394 op: EQUALS (3)
    _8454 = (_validation_15109 == 2);
    // SubProg parse_commands pc: 398 op: SC1_OR_IF (147)
    if (_8454 != 0) {
        goto L12; // [398] 423
    }
    // SubProg parse_commands pc: 402 op: EQUALS (3)
    _8456 = (_validation_15109 == 4);
    // SubProg parse_commands pc: 406 op: SC1_AND (141)
    if (_8456 == 0) {
        DeRef(_8457);
        _8457 = 0;
        goto L13; // [406] 418
    }
    // SubProg parse_commands pc: 410 op: EQUALS (3)
    _8458 = (_has_extra_15110 == 0);
    // SubProg parse_commands pc: 414 op: SC2_AND (142)
    _8457 = (_8458 != 0);
    // SubProg parse_commands pc: 417 op: NOP1 (159)
L13: // addr: 418 pc: 417 sub: 15099 op: 159
    // SubProg parse_commands pc: 418 op: NOP1 (159)
    // SubProg parse_commands pc: 419 op: IF (20)
    if (_8457 == 0)
    {
        _8457 = NOVALUE;
        goto L1; // [419] 34
    }
    else{
        _8457 = NOVALUE;
    }
    // SubProg parse_commands pc: 422 op: NOP1 (159)
L12: // addr: 423 pc: 422 sub: 15099 op: 159
    // SubProg parse_commands pc: 423 op: STARTLINE (58)

    /** cmdline.e:1087					parse_abort( "option '%s': %s\n\n", {cmd, find_result[2]}, */
    // SubProg parse_commands pc: 425 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15116);
    _8460 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg parse_commands pc: 429 op: RIGHT_BRACE_2 (85)
    Ref(_8460);
    RefDS(_cmd_15119);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmd_15119;
    ((intptr_t *)_2)[2] = _8460;
    _8461 = MAKE_SEQ(_1);
    _8460 = NOVALUE;
    // SubProg parse_commands pc: 433 op: PROC (27)
    RefDS(_8459);
    RefDS(_opts_15102);
    RefDS(_cmds_15101);
    Ref(_parse_options_15107);
    _4parse_abort(_8459, _8461, _opts_15102, _add_help_rid_15106, _cmds_15101, _parse_options_15107, _help_on_error_15112, _auto_help_15113);
    _8461 = NOVALUE;
    // SubProg parse_commands pc: 443 op: NOP1 (159)
    // SubProg parse_commands pc: 444 op: STARTLINE (58)

    /** cmdline.e:1091				continue*/
    // SubProg parse_commands pc: 446 op: ELSE (23)
    goto L1; // [446] 34
    // SubProg parse_commands pc: 448 op: NOP1 (159)
L11: // addr: 449 pc: 448 sub: 15099 op: 159
    // SubProg parse_commands pc: 449 op: STARTLINE (58)

    /** cmdline.e:1094			sequence handle_result = handle_opt( find_result, arg_idx, opts, parsed_opts, cmds, add_help_rid,*/
    // SubProg parse_commands pc: 451 op: PROC (27)
    RefDS(_find_result_15116);
    RefDS(_opts_15102);
    Ref(_parsed_opts_15104);
    RefDS(_cmds_15101);
    Ref(_parse_options_15107);
    RefDS(_call_count_15111);
    _0 = _handle_result_15184;
    _handle_result_15184 = _4handle_opt(_find_result_15116, _arg_idx_15114, _opts_15102, _parsed_opts_15104, _cmds_15101, _add_help_rid_15106, _parse_options_15107, _call_count_15111, _validation_15109, _help_on_error_15112, _auto_help_15113);
    DeRef(_0);
    // SubProg parse_commands pc: 465 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 467 op: STARTLINE (58)

    /** cmdline.e:1096			arg_idx     = handle_result[1]*/
    // SubProg parse_commands pc: 469 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_handle_result_15184);
    _arg_idx_15114 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_arg_idx_15114))
    _arg_idx_15114 = (object)DBL_PTR(_arg_idx_15114)->dbl;
    // SubProg parse_commands pc: 473 op: STARTLINE (58)

    /** cmdline.e:1097			call_count = handle_result[2]*/
    // SubProg parse_commands pc: 475 op: RHS_SUBS (25)
    DeRefDS(_call_count_15111);
    _2 = (object)SEQ_PTR(_handle_result_15184);
    _call_count_15111 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_15111);
    // SubProg parse_commands pc: 479 op: SEQUENCE_CHECK (97)
    // SubProg parse_commands pc: 481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var handle_result_15184
    DeRefDS(_handle_result_15184);
    _handle_result_15184 = NOVALUE;
    // SubProg parse_commands pc: 483 op: STARTLINE (58)

    /** cmdline.e:1098		end while*/
    // SubProg parse_commands pc: 485 op: ENDWHILE (22)
    goto L1; // [485] 34
    // SubProg parse_commands pc: 487 op: NOP1 (159)
L2: // addr: 488 pc: 487 sub: 15099 op: 159
    // SubProg parse_commands pc: 488 op: STARTLINE (58)

    /** cmdline.e:1099		return { cmds, call_count }*/
    // SubProg parse_commands pc: 490 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_15111);
    RefDS(_cmds_15101);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmds_15101;
    ((intptr_t *)_2)[2] = _call_count_15111;
    _8465 = MAKE_SEQ(_1);
    // SubProg parse_commands pc: 494 op: RETURNF (28)

// Exiting block BLOCK: parse_commands

// block var cmds_15101
    DeRefDS(_cmds_15101);

// block var opts_15102
    DeRefDS(_opts_15102);

// block var parsed_opts_15104
    DeRef(_parsed_opts_15104);

// block var help_opts_15105
    DeRefDS(_help_opts_15105);

// block var add_help_rid_15106

// block var parse_options_15107
    DeRefi(_parse_options_15107);

// block var use_at_15108

// block var validation_15109

// block var has_extra_15110

// block var call_count_15111
    DeRefDS(_call_count_15111);

// block var help_on_error_15112

// block var auto_help_15113

// block var arg_idx_15114

// block var opts_done_15115

// block var find_result_15116
    DeRef(_find_result_15116);

// block var type__15117
    DeRef(_type__15117);

// block var from__15118

// block var cmd_15119
    DeRef(_cmd_15119);
    DeRef(_8421);
    _8421 = NOVALUE;
    DeRef(_8458);
    _8458 = NOVALUE;
    DeRef(_8431);
    _8431 = NOVALUE;
    DeRef(_8433);
    _8433 = NOVALUE;
    DeRef(_8456);
    _8456 = NOVALUE;
    DeRef(_8428);
    _8428 = NOVALUE;
    DeRef(_8454);
    _8454 = NOVALUE;
    return _8465;
    // SubProg parse_commands pc: 498 op: BADRETURNF (43)
    ;
}


object _4handle_opt(object _find_result_15192, object _arg_idx_15193, object _opts_15194, object _parsed_opts_15196, object _cmds_15197, object _add_help_rid_15198, object _parse_options_15199, object _call_count_15200, object _validation_15201, object _help_on_error_15202, object _auto_help_15203)
{
    object _map_add_operation_15204 = NOVALUE;
    object _opt_15205 = NOVALUE;
    object _param_15208 = NOVALUE;
    object _pos_15245 = NOVALUE;
    object _ver_pos_15291 = NOVALUE;
    object _msg_inlined_crash_at_524_15308 = NOVALUE;
    object _fmt_inlined_crash_at_521_15307 = NOVALUE;
    object _8543 = NOVALUE; // 15309 8543
    object _8542 = NOVALUE; // 15305 8542
    object _8539 = NOVALUE; // 15301 8539
    object _8538 = NOVALUE; // 15300 8538
    object _8537 = NOVALUE; // 15299 8537
// skipping _8536  name type: 0
    object _8535 = NOVALUE; // 15297 8535
    object _8534 = NOVALUE; // 15296 8534
// skipping _8533  name type: 0
    object _8532 = NOVALUE; // 15293 8532
    object _8531 = NOVALUE; // 15292 8531
    object _8530 = NOVALUE; // 15290 8530
    object _8529 = NOVALUE; // 15289 8529
    object _8528 = NOVALUE; // 15287 8528
    object _8527 = NOVALUE; // 15285 8527
    object _8526 = NOVALUE; // 15283 8526
    object _8525 = NOVALUE; // 15282 8525
    object _8523 = NOVALUE; // 15280 8523
    object _8522 = NOVALUE; // 15279 8522
// skipping _8521  name type: 0
    object _8520 = NOVALUE; // 15277 8520
    object _8519 = NOVALUE; // 15276 8519
    object _8518 = NOVALUE; // 15274 8518
    object _8517 = NOVALUE; // 15273 8517
    object _8516 = NOVALUE; // 15272 8516
    object _8515 = NOVALUE; // 15271 8515
    object _8514 = NOVALUE; // 15270 8514
    object _8513 = NOVALUE; // 15269 8513
// skipping _8512  name type: 0
    object _8511 = NOVALUE; // 15266 8511
    object _8510 = NOVALUE; // 15265 8510
    object _8509 = NOVALUE; // 15262 8509
// skipping _8508  name type: 0
    object _8507 = NOVALUE; // 15260 8507
    object _8506 = NOVALUE; // 15258 8506
// skipping _8505  name type: 0
    object _8504 = NOVALUE; // 15256 8504
    object _8503 = NOVALUE; // 15255 8503
    object _8502 = NOVALUE; // 15254 8502
    object _8501 = NOVALUE; // 15253 8501
    object _8500 = NOVALUE; // 15252 8500
    object _8499 = NOVALUE; // 15251 8499
    object _8498 = NOVALUE; // 15250 8498
    object _8497 = NOVALUE; // 15248 8497
    object _8496 = NOVALUE; // 15247 8496
// skipping _8495  name type: 0
// skipping _8494  name type: 0
    object _8493 = NOVALUE; // 15243 8493
// skipping _8492  name type: 0
// skipping _8491  name type: 0
    object _8490 = NOVALUE; // 15237 8490
    object _8489 = NOVALUE; // 15236 8489
    object _8487 = NOVALUE; // 15234 8487
    object _8486 = NOVALUE; // 15233 8486
    object _8485 = NOVALUE; // 15232 8485
    object _8484 = NOVALUE; // 15231 8484
    object _8483 = NOVALUE; // 15230 8483
    object _8482 = NOVALUE; // 15229 8482
    object _8481 = NOVALUE; // 15226 8481
    object _8480 = NOVALUE; // 15225 8480
    object _8479 = NOVALUE; // 15224 8479
    object _8478 = NOVALUE; // 15223 8478
    object _8477 = NOVALUE; // 15222 8477
// skipping _8476  name type: 0
// skipping _8475  name type: 0
    object _8474 = NOVALUE; // 15218 8474
// skipping _8473  name type: 0
// skipping _8472  name type: 0
    object _8471 = NOVALUE; // 15214 8471
// skipping _8470  name type: 0
    object _8469 = NOVALUE; // 15211 8469
    object _8468 = NOVALUE; // 15210 8468
// skipping _8467  name type: 0
    object _8466 = NOVALUE; // 15206 8466
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
    _map_add_operation_15204 = 2;
    // SubProg handle_opt pc: 22 op: STARTLINE (58)

    /** cmdline.e:1111		sequence opt = opts[find_result[1]]*/
    // SubProg handle_opt pc: 24 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15192);
    _8466 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 28 op: RHS_SUBS (25)
    DeRef(_opt_15205);
    _2 = (object)SEQ_PTR(_opts_15194);
    if (!IS_ATOM_INT(_8466)){
        _opt_15205 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_8466)->dbl));
    }
    else{
        _opt_15205 = (object)*(((s1_ptr)_2)->base + _8466);
    }
    Ref(_opt_15205);
    // SubProg handle_opt pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 34 op: STARTLINE (58)

    /** cmdline.e:1114		if find(HAS_PARAMETER, opt[OPTIONS]) != 0 then*/
    // SubProg handle_opt pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8468 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 40 op: FIND_FROM (176)
    _8469 = find_from(112, _8468, 1);
    _8468 = NOVALUE;
    // SubProg handle_opt pc: 45 op: NOTEQ_IFW_I (122)
    if (_8469 == 0)
    goto L1; // [45] 194
    // SubProg handle_opt pc: 49 op: STARTLINE (58)

    /** cmdline.e:1115			map_add_operation = map:APPEND*/
    // SubProg handle_opt pc: 51 op: ASSIGN_I (113)
    _map_add_operation_15204 = 6;
    // SubProg handle_opt pc: 54 op: STARTLINE (58)

    /** cmdline.e:1116			if length(find_result) < 4 then*/
    // SubProg handle_opt pc: 56 op: LENGTH (42)
    if (IS_SEQUENCE(_find_result_15192)){
            _8471 = SEQ_PTR(_find_result_15192)->length;
    }
    else {
        _8471 = 1;
    }
    // SubProg handle_opt pc: 59 op: LESS_IFW_I (119)
    if (_8471 >= 4)
    goto L2; // [59] 184
    // SubProg handle_opt pc: 63 op: STARTLINE (58)

    /** cmdline.e:1117				arg_idx += 1*/
    // SubProg handle_opt pc: 65 op: PLUS1_I (117)
    _arg_idx_15193 = _arg_idx_15193 + 1;
    // SubProg handle_opt pc: 69 op: STARTLINE (58)

    /** cmdline.e:1118				if arg_idx <= length(cmds) then*/
    // SubProg handle_opt pc: 71 op: LENGTH (42)
    if (IS_SEQUENCE(_cmds_15197)){
            _8474 = SEQ_PTR(_cmds_15197)->length;
    }
    else {
        _8474 = 1;
    }
    // SubProg handle_opt pc: 74 op: LESSEQ_IFW_I (123)
    if (_arg_idx_15193 > _8474)
    goto L3; // [74] 119
    // SubProg handle_opt pc: 78 op: STARTLINE (58)

    /** cmdline.e:1119					param = cmds[arg_idx]*/
    // SubProg handle_opt pc: 80 op: RHS_SUBS (25)
    DeRef(_param_15208);
    _2 = (object)SEQ_PTR(_cmds_15197);
    _param_15208 = (object)*(((s1_ptr)_2)->base + _arg_idx_15193);
    Ref(_param_15208);
    // SubProg handle_opt pc: 84 op: STARTLINE (58)

    /** cmdline.e:1120					if length(param) = 2 and find(param[1], "-/") then*/
    // SubProg handle_opt pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_param_15208)){
            _8477 = SEQ_PTR(_param_15208)->length;
    }
    else {
        _8477 = 1;
    }
    // SubProg handle_opt pc: 89 op: EQUALS (3)
    _8478 = (_8477 == 2);
    _8477 = NOVALUE;
    // SubProg handle_opt pc: 93 op: SC1_AND_IF (146)
    if (_8478 == 0) {
        goto L4; // [93] 125
    }
    // SubProg handle_opt pc: 97 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_param_15208);
    _8480 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 101 op: FIND_FROM (176)
    _8481 = find_from(_8480, _7783, 1);
    _8480 = NOVALUE;
    // SubProg handle_opt pc: 106 op: NOP1 (159)
    // SubProg handle_opt pc: 107 op: IF (20)
    if (_8481 == 0)
    {
        _8481 = NOVALUE;
        goto L4; // [107] 125
    }
    else{
        _8481 = NOVALUE;
    }
    // SubProg handle_opt pc: 110 op: STARTLINE (58)

    /** cmdline.e:1121						param = ""*/
    // SubProg handle_opt pc: 112 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_param_15208);
    _param_15208 = _5;
    // SubProg handle_opt pc: 115 op: NOP1 (159)
    // SubProg handle_opt pc: 116 op: ELSE (23)
    goto L4; // [116] 125
    // SubProg handle_opt pc: 118 op: NOP1 (159)
L3: // addr: 119 pc: 118 sub: 15190 op: 159
    // SubProg handle_opt pc: 119 op: STARTLINE (58)

    /** cmdline.e:1124					param = ""*/
    // SubProg handle_opt pc: 121 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_param_15208);
    _param_15208 = _5;
    // SubProg handle_opt pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 15190 op: 159
    // SubProg handle_opt pc: 125 op: STARTLINE (58)

    /** cmdline.e:1127				if length(param) = 0 and (validation = VALIDATE_ALL or (*/
    // SubProg handle_opt pc: 127 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 129 op: LENGTH (42)
    if (IS_SEQUENCE(_param_15208)){
            _8482 = SEQ_PTR(_param_15208)->length;
    }
    else {
        _8482 = 1;
    }
    // SubProg handle_opt pc: 132 op: EQUALS (3)
    _8483 = (_8482 == 0);
    _8482 = NOVALUE;
    // SubProg handle_opt pc: 136 op: SC1_AND_IF (146)
    if (_8483 == 0) {
        goto L5; // [136] 201
    }
    // SubProg handle_opt pc: 140 op: EQUALS (3)
    _8485 = (_validation_15201 == 2);
    // SubProg handle_opt pc: 144 op: SC1_OR (143)
    if (_8485 != 0) {
        DeRef(_8486);
        _8486 = 1;
        goto L6; // [144] 156
    }
    // SubProg handle_opt pc: 148 op: EQUALS (3)
    _8487 = (_validation_15201 == 4);
    // SubProg handle_opt pc: 152 op: SC2_OR (144)
    _8486 = (_8487 != 0);
    // SubProg handle_opt pc: 155 op: NOP1 (159)
L6: // addr: 156 pc: 155 sub: 15190 op: 159
    // SubProg handle_opt pc: 156 op: NOP1 (159)
    // SubProg handle_opt pc: 157 op: IF (20)
    if (_8486 == 0)
    {
        _8486 = NOVALUE;
        goto L5; // [157] 201
    }
    else{
        _8486 = NOVALUE;
    }
    // SubProg handle_opt pc: 160 op: STARTLINE (58)

    /** cmdline.e:1130					parse_abort( "option '%s' must have a parameter\n\n", {find_result[2]}, */
    // SubProg handle_opt pc: 162 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15192);
    _8489 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg handle_opt pc: 166 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8489);
    ((intptr_t*)_2)[1] = _8489;
    _8490 = MAKE_SEQ(_1);
    _8489 = NOVALUE;
    // SubProg handle_opt pc: 170 op: PROC (27)
    RefDS(_8488);
    RefDS(_opts_15194);
    RefDS(_cmds_15197);
    Ref(_parse_options_15199);
    _4parse_abort(_8488, _8490, _opts_15194, _add_help_rid_15198, _cmds_15197, _parse_options_15199, _help_on_error_15202, _auto_help_15203);
    _8490 = NOVALUE;
    // SubProg handle_opt pc: 180 op: NOP1 (159)
    // SubProg handle_opt pc: 181 op: ELSE (23)
    goto L5; // [181] 201
    // SubProg handle_opt pc: 183 op: NOP1 (159)
L2: // addr: 184 pc: 183 sub: 15190 op: 159
    // SubProg handle_opt pc: 184 op: STARTLINE (58)

    /** cmdline.e:1134				param = find_result[4]*/
    // SubProg handle_opt pc: 186 op: RHS_SUBS (25)
    DeRef(_param_15208);
    _2 = (object)SEQ_PTR(_find_result_15192);
    _param_15208 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_15208);
    // SubProg handle_opt pc: 190 op: NOP1 (159)
    // SubProg handle_opt pc: 191 op: ELSE (23)
    goto L5; // [191] 201
    // SubProg handle_opt pc: 193 op: NOP1 (159)
L1: // addr: 194 pc: 193 sub: 15190 op: 159
    // SubProg handle_opt pc: 194 op: STARTLINE (58)

    /** cmdline.e:1137			param = find_result[4]*/
    // SubProg handle_opt pc: 196 op: RHS_SUBS (25)
    DeRef(_param_15208);
    _2 = (object)SEQ_PTR(_find_result_15192);
    _param_15208 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_15208);
    // SubProg handle_opt pc: 200 op: NOP1 (159)
L5: // addr: 201 pc: 200 sub: 15190 op: 159
    // SubProg handle_opt pc: 201 op: STARTLINE (58)

    /** cmdline.e:1140		if opt[CALLBACK] >= 0 then*/
    // SubProg handle_opt pc: 203 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8493 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg handle_opt pc: 207 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _8493, 0)){
        _8493 = NOVALUE;
        goto L7; // [207] 282
    }
    _8493 = NOVALUE;
    // SubProg handle_opt pc: 211 op: STARTLINE (58)

    /** cmdline.e:1141			integer pos = find_result[1]*/
    // SubProg handle_opt pc: 213 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_find_result_15192);
    _pos_15245 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_pos_15245))
    _pos_15245 = (object)DBL_PTR(_pos_15245)->dbl;
    // SubProg handle_opt pc: 217 op: STARTLINE (58)

    /** cmdline.e:1142			call_count[pos] += 1*/
    // SubProg handle_opt pc: 219 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_call_count_15200);
    _8496 = (object)*(((s1_ptr)_2)->base + _pos_15245);
    // SubProg handle_opt pc: 223 op: PLUS1 (93)
    if (IS_ATOM_INT(_8496)) {
        _8497 = _8496 + 1;
        if (_8497 > MAXINT){
            _8497 = NewDouble((eudouble)_8497);
        }
    }
    else
    _8497 = binary_op(PLUS, 1, _8496);
    _8496 = NOVALUE;
    // SubProg handle_opt pc: 227 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_call_count_15200);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _call_count_15200 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pos_15245);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8497;
    if( _1 != _8497 ){
        DeRef(_1);
    }
    _8497 = NOVALUE;
    // SubProg handle_opt pc: 231 op: STARTLINE (58)

    /** cmdline.e:1144			if call_func(opt[CALLBACK], {{find_result[1], call_count[pos], param,  find_result[3]}}) = 0 then*/
    // SubProg handle_opt pc: 233 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8498 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg handle_opt pc: 237 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15192);
    _8499 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg handle_opt pc: 241 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_call_count_15200);
    _8500 = (object)*(((s1_ptr)_2)->base + _pos_15245);
    // SubProg handle_opt pc: 245 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 247 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15192);
    _8501 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg handle_opt pc: 251 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8499);
    ((intptr_t*)_2)[1] = _8499;
    Ref(_8500);
    ((intptr_t*)_2)[2] = _8500;
    Ref(_param_15208);
    ((intptr_t*)_2)[3] = _param_15208;
    Ref(_8501);
    ((intptr_t*)_2)[4] = _8501;
    _8502 = MAKE_SEQ(_1);
    _8501 = NOVALUE;
    _8500 = NOVALUE;
    _8499 = NOVALUE;
    // SubProg handle_opt pc: 258 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _8502;
    _8503 = MAKE_SEQ(_1);
    _8502 = NOVALUE;
    // SubProg handle_opt pc: 262 op: CALL_FUNC (137)
    _1 = (object)SEQ_PTR(_8503);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_8498].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    _1 = (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRef(_8504);
    _8504 = _1;
    DeRefDS(_8503);
    _8503 = NOVALUE;
    // SubProg handle_opt pc: 266 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _8504, 0)){
        DeRef(_8504);
        _8504 = NOVALUE;
        goto L8; // [266] 281
    }
    DeRef(_8504);
    _8504 = NOVALUE;
    // SubProg handle_opt pc: 270 op: STARTLINE (58)

    /** cmdline.e:1145				return { arg_idx, call_count }*/
    // SubProg handle_opt pc: 272 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_15200);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_15193;
    ((intptr_t *)_2)[2] = _call_count_15200;
    _8506 = MAKE_SEQ(_1);
    // SubProg handle_opt pc: 276 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var pos_15245

// Exiting block BLOCK: handle_opt

// block var find_result_15192
    DeRefDS(_find_result_15192);

// block var arg_idx_15193

// block var opts_15194
    DeRefDS(_opts_15194);

// block var parsed_opts_15196
    DeRef(_parsed_opts_15196);

// block var cmds_15197
    DeRefDS(_cmds_15197);

// block var add_help_rid_15198

// block var parse_options_15199
    DeRefi(_parse_options_15199);

// block var call_count_15200
    DeRefDS(_call_count_15200);

// block var validation_15201

// block var help_on_error_15202

// block var auto_help_15203

// block var map_add_operation_15204

// block var opt_15205
    DeRefDS(_opt_15205);

// block var param_15208
    DeRef(_param_15208);
    DeRef(_8485);
    _8485 = NOVALUE;
    DeRef(_8478);
    _8478 = NOVALUE;
    DeRef(_8487);
    _8487 = NOVALUE;
    _8498 = NOVALUE;
    DeRef(_8483);
    _8483 = NOVALUE;
    _8466 = NOVALUE;
    return _8506;
    // SubProg handle_opt pc: 280 op: NOP1 (159)
L8: // addr: 281 pc: 280 sub: 15190 op: 159
    // SubProg handle_opt pc: 281 op: NOP1 (159)
L7: // addr: 282 pc: 281 sub: 15190 op: 159
    // SubProg handle_opt pc: 282 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pos_15245
    // SubProg handle_opt pc: 284 op: STARTLINE (58)

    /** cmdline.e:1149		if find_result[3] = 1 then*/
    // SubProg handle_opt pc: 286 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15192);
    _8507 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg handle_opt pc: 290 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _8507, 1)){
        _8507 = NOVALUE;
        goto L9; // [290] 307
    }
    _8507 = NOVALUE;
    // SubProg handle_opt pc: 294 op: STARTLINE (58)

    /** cmdline.e:1150			map:remove(parsed_opts, opt[MAPNAME])*/
    // SubProg handle_opt pc: 296 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8509 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 300 op: PROC (27)
    Ref(_parsed_opts_15196);
    Ref(_8509);
    _29remove(_parsed_opts_15196, _8509);
    _8509 = NOVALUE;
    // SubProg handle_opt pc: 304 op: ELSE (23)
    goto LA; // [304] 446
    // SubProg handle_opt pc: 306 op: NOP1 (159)
L9: // addr: 307 pc: 306 sub: 15190 op: 159
    // SubProg handle_opt pc: 307 op: STARTLINE (58)

    /** cmdline.e:1152			if find(MULTIPLE, opt[OPTIONS]) = 0 then*/
    // SubProg handle_opt pc: 309 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8510 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 313 op: FIND_FROM (176)
    _8511 = find_from(42, _8510, 1);
    _8510 = NOVALUE;
    // SubProg handle_opt pc: 318 op: EQUALS_IFW_I (121)
    if (_8511 != 0)
    goto LB; // [318] 429
    // SubProg handle_opt pc: 322 op: STARTLINE (58)

    /** cmdline.e:1153				if map:has(parsed_opts, opt[MAPNAME]) and (validation = VALIDATE_ALL or*/
    // SubProg handle_opt pc: 324 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8513 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 328 op: PROC (27)
    Ref(_parsed_opts_15196);
    Ref(_8513);
    _8514 = _29has(_parsed_opts_15196, _8513);
    _8513 = NOVALUE;
    // SubProg handle_opt pc: 333 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_8514)) {
        if (_8514 == 0) {
            goto LC; // [333] 410
        }
    }
    else {
        if (DBL_PTR(_8514)->dbl == 0.0) {
            goto LC; // [333] 410
        }
    }
    // SubProg handle_opt pc: 337 op: EQUALS (3)
    _8516 = (_validation_15201 == 2);
    // SubProg handle_opt pc: 341 op: SC1_OR (143)
    if (_8516 != 0) {
        DeRef(_8517);
        _8517 = 1;
        goto LD; // [341] 353
    }
    // SubProg handle_opt pc: 345 op: EQUALS (3)
    _8518 = (_validation_15201 == 4);
    // SubProg handle_opt pc: 349 op: SC2_OR (144)
    _8517 = (_8518 != 0);
    // SubProg handle_opt pc: 352 op: NOP1 (159)
LD: // addr: 353 pc: 352 sub: 15190 op: 159
    // SubProg handle_opt pc: 353 op: NOP1 (159)
    // SubProg handle_opt pc: 354 op: IF (20)
    if (_8517 == 0)
    {
        _8517 = NOVALUE;
        goto LC; // [354] 410
    }
    else{
        _8517 = NOVALUE;
    }
    // SubProg handle_opt pc: 357 op: STARTLINE (58)

    /** cmdline.e:1156					if find(HAS_PARAMETER, opt[OPTIONS]) or find(ONCE, opt[OPTIONS]) then*/
    // SubProg handle_opt pc: 359 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8519 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 363 op: FIND_FROM (176)
    _8520 = find_from(112, _8519, 1);
    _8519 = NOVALUE;
    // SubProg handle_opt pc: 368 op: SC1_OR_IF (147)
    if (_8520 != 0) {
        goto LE; // [368] 386
    }
    // SubProg handle_opt pc: 372 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8522 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 376 op: FIND_FROM (176)
    _8523 = find_from(49, _8522, 1);
    _8522 = NOVALUE;
    // SubProg handle_opt pc: 381 op: NOP1 (159)
    // SubProg handle_opt pc: 382 op: IF (20)
    if (_8523 == 0)
    {
        _8523 = NOVALUE;
        goto LF; // [382] 445
    }
    else{
        _8523 = NOVALUE;
    }
    // SubProg handle_opt pc: 385 op: NOP1 (159)
LE: // addr: 386 pc: 385 sub: 15190 op: 159
    // SubProg handle_opt pc: 386 op: STARTLINE (58)

    /** cmdline.e:1157						parse_abort( "option '%s' must not occur more than once in the command line.\n\n", */
    // SubProg handle_opt pc: 388 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_find_result_15192);
    _8525 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg handle_opt pc: 392 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8525);
    ((intptr_t*)_2)[1] = _8525;
    _8526 = MAKE_SEQ(_1);
    _8525 = NOVALUE;
    // SubProg handle_opt pc: 396 op: PROC (27)
    RefDS(_8524);
    RefDS(_opts_15194);
    RefDS(_cmds_15197);
    Ref(_parse_options_15199);
    _4parse_abort(_8524, _8526, _opts_15194, _add_help_rid_15198, _cmds_15197, _parse_options_15199, _help_on_error_15202, _auto_help_15203);
    _8526 = NOVALUE;
    // SubProg handle_opt pc: 406 op: NOP1 (159)
    // SubProg handle_opt pc: 407 op: ELSE (23)
    goto LF; // [407] 445
    // SubProg handle_opt pc: 409 op: NOP1 (159)
LC: // addr: 410 pc: 409 sub: 15190 op: 159
    // SubProg handle_opt pc: 410 op: STARTLINE (58)

    /** cmdline.e:1161					map:put(parsed_opts, opt[MAPNAME], param)*/
    // SubProg handle_opt pc: 412 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8527 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 416 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 418 op: PROC (27)
    Ref(_parsed_opts_15196);
    Ref(_8527);
    Ref(_param_15208);
    _29put(_parsed_opts_15196, _8527, _param_15208, 1, 0);
    _8527 = NOVALUE;
    // SubProg handle_opt pc: 425 op: NOP1 (159)
    // SubProg handle_opt pc: 426 op: ELSE (23)
    goto LF; // [426] 445
    // SubProg handle_opt pc: 428 op: NOP1 (159)
LB: // addr: 429 pc: 428 sub: 15190 op: 159
    // SubProg handle_opt pc: 429 op: STARTLINE (58)

    /** cmdline.e:1164				map:put(parsed_opts, opt[MAPNAME], param, map_add_operation)*/
    // SubProg handle_opt pc: 431 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8528 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg handle_opt pc: 435 op: PRIVATE_INIT_CHECK (30)
    // SubProg handle_opt pc: 437 op: PROC (27)
    Ref(_parsed_opts_15196);
    Ref(_8528);
    Ref(_param_15208);
    _29put(_parsed_opts_15196, _8528, _param_15208, _map_add_operation_15204, 0);
    _8528 = NOVALUE;
    // SubProg handle_opt pc: 444 op: NOP1 (159)
LF: // addr: 445 pc: 444 sub: 15190 op: 159
    // SubProg handle_opt pc: 445 op: NOP1 (159)
LA: // addr: 446 pc: 445 sub: 15190 op: 159
    // SubProg handle_opt pc: 446 op: STARTLINE (58)

    /** cmdline.e:1168		if find(VERSIONING, opt[OPTIONS]) then*/
    // SubProg handle_opt pc: 448 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8529 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 452 op: FIND_FROM (176)
    _8530 = find_from(118, _8529, 1);
    _8529 = NOVALUE;
    // SubProg handle_opt pc: 457 op: IF (20)
    if (_8530 == 0)
    {
        _8530 = NOVALUE;
        goto L10; // [457] 544
    }
    else{
        _8530 = NOVALUE;
    }
    // SubProg handle_opt pc: 460 op: STARTLINE (58)

    /** cmdline.e:1169			integer ver_pos = find(VERSIONING, opt[OPTIONS]) + 1*/
    // SubProg handle_opt pc: 462 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8531 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 466 op: FIND_FROM (176)
    _8532 = find_from(118, _8531, 1);
    _8531 = NOVALUE;
    // SubProg handle_opt pc: 471 op: PLUS1_I (117)
    _ver_pos_15291 = _8532 + 1;
    _8532 = NOVALUE;
    // SubProg handle_opt pc: 475 op: STARTLINE (58)

    /** cmdline.e:1170			if length(opt[OPTIONS]) >= ver_pos then*/
    // SubProg handle_opt pc: 477 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8534 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 481 op: LENGTH (42)
    if (IS_SEQUENCE(_8534)){
            _8535 = SEQ_PTR(_8534)->length;
    }
    else {
        _8535 = 1;
    }
    _8534 = NOVALUE;
    // SubProg handle_opt pc: 484 op: GREATEREQ_IFW_I (120)
    if (_8535 < _ver_pos_15291)
    goto L11; // [484] 513
    // SubProg handle_opt pc: 488 op: STARTLINE (58)

    /** cmdline.e:1171				printf(1, "%s\n", { opt[OPTIONS][ver_pos] })*/
    // SubProg handle_opt pc: 490 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_15205);
    _8537 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg handle_opt pc: 494 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_8537);
    _8538 = (object)*(((s1_ptr)_2)->base + _ver_pos_15291);
    _8537 = NOVALUE;
    // SubProg handle_opt pc: 498 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8538);
    ((intptr_t*)_2)[1] = _8538;
    _8539 = MAKE_SEQ(_1);
    _8538 = NOVALUE;
    // SubProg handle_opt pc: 502 op: PRINTF (38)
    EPrintf(1, _8067, _8539);
    DeRefDS(_8539);
    _8539 = NOVALUE;
    // SubProg handle_opt pc: 506 op: STARTLINE (58)

    /** cmdline.e:1172				abort(0)*/
    // SubProg handle_opt pc: 508 op: ABORT (126)
    UserCleanup(0);
    // SubProg handle_opt pc: 510 op: ELSE (23)
    goto L12; // [510] 543
    // SubProg handle_opt pc: 512 op: NOP1 (159)
L11: // addr: 513 pc: 512 sub: 15190 op: 159
    // SubProg handle_opt pc: 513 op: STARTLINE (58)

    /** cmdline.e:1174				error:crash("help options are incorrect,\n" &*/
    // SubProg handle_opt pc: 515 op: CONCAT (15)
    Concat((object_ptr)&_8542, _8540, _8541);
    // SubProg handle_opt pc: 519 op: ASSIGN (18)
    DeRefi(_fmt_inlined_crash_at_521_15307);
    _fmt_inlined_crash_at_521_15307 = _8542;
    _8542 = NOVALUE;
    // SubProg handle_opt pc: 522 op: SEQUENCE_CHECK (97)
    // SubProg handle_opt pc: 524 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg handle_opt pc: 526 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_524_15308);
    _msg_inlined_crash_at_524_15308 = EPrintf(-9999999, _fmt_inlined_crash_at_521_15307, _5);
    // SubProg handle_opt pc: 530 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg handle_opt pc: 532 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_524_15308);
    // SubProg handle_opt pc: 535 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg handle_opt pc: 537 op: ELSE (23)
    goto L13; // [537] 540
    // SubProg handle_opt pc: 539 op: NOP1 (159)
L13: // addr: 540 pc: 539 sub: 15190 op: 159
    // SubProg handle_opt pc: 540 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from handle_opt @ 521

// block var fmt_inlined_crash_at_521_15307
    DeRefi(_fmt_inlined_crash_at_521_15307);
    _fmt_inlined_crash_at_521_15307 = NOVALUE;

// block var msg_inlined_crash_at_524_15308
    DeRefi(_msg_inlined_crash_at_524_15308);
    _msg_inlined_crash_at_524_15308 = NOVALUE;
    // SubProg handle_opt pc: 542 op: NOP1 (159)
L12: // addr: 543 pc: 542 sub: 15190 op: 159
    // SubProg handle_opt pc: 543 op: NOP1 (159)
L10: // addr: 544 pc: 543 sub: 15190 op: 159
    // SubProg handle_opt pc: 544 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ver_pos_15291
    // SubProg handle_opt pc: 546 op: STARTLINE (58)

    /** cmdline.e:1178		return {arg_idx, call_count}*/
    // SubProg handle_opt pc: 548 op: RIGHT_BRACE_2 (85)
    RefDS(_call_count_15200);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_15193;
    ((intptr_t *)_2)[2] = _call_count_15200;
    _8543 = MAKE_SEQ(_1);
    // SubProg handle_opt pc: 552 op: RETURNF (28)

// Exiting block BLOCK: handle_opt

// block var find_result_15192
    DeRefDS(_find_result_15192);

// block var arg_idx_15193

// block var opts_15194
    DeRefDS(_opts_15194);

// block var parsed_opts_15196
    DeRef(_parsed_opts_15196);

// block var cmds_15197
    DeRefDS(_cmds_15197);

// block var add_help_rid_15198

// block var parse_options_15199
    DeRefi(_parse_options_15199);

// block var call_count_15200
    DeRefDS(_call_count_15200);

// block var validation_15201

// block var help_on_error_15202

// block var auto_help_15203

// block var map_add_operation_15204

// block var opt_15205
    DeRef(_opt_15205);

// block var param_15208
    DeRef(_param_15208);
    DeRef(_8485);
    _8485 = NOVALUE;
    DeRef(_8478);
    _8478 = NOVALUE;
    DeRef(_8487);
    _8487 = NOVALUE;
    DeRef(_8506);
    _8506 = NOVALUE;
    _8498 = NOVALUE;
    _8534 = NOVALUE;
    DeRef(_8516);
    _8516 = NOVALUE;
    DeRef(_8514);
    _8514 = NOVALUE;
    DeRef(_8483);
    _8483 = NOVALUE;
    _8466 = NOVALUE;
    DeRef(_8518);
    _8518 = NOVALUE;
    return _8543;
    // SubProg handle_opt pc: 556 op: BADRETURNF (43)
    ;
}


object _4cmd_parse(object _opts_15312, object _parse_options_15313, object _cmds_15314)
{
    object _cmd_15316 = NOVALUE;
    object _help_opts_15317 = NOVALUE;
    object _call_count_15318 = NOVALUE;
    object _add_help_rid_15319 = NOVALUE;
    object _validation_15320 = NOVALUE;
    object _has_extra_15321 = NOVALUE;
    object _use_at_15322 = NOVALUE;
    object _auto_help_15323 = NOVALUE;
    object _help_on_error_15324 = NOVALUE;
    object _po_15325 = NOVALUE;
    object _msg_inlined_crash_at_161_15349 = NOVALUE;
    object _msg_inlined_crash_at_225_15360 = NOVALUE;
    object _msg_inlined_crash_at_263_15367 = NOVALUE;
    object _fmt_inlined_crash_at_260_15366 = NOVALUE;
    object _parsed_opts_15372 = NOVALUE;
    object _new_1__tmp_at315_15375 = NOVALUE;
    object _new_inlined_new_at_315_15374 = NOVALUE;
    object _cmds_ok_15377 = NOVALUE;
// skipping _8572  name type: 0
// skipping _8571  name type: 0
    object _8570 = NOVALUE; // 15380 8570
// skipping _8569  name type: 0
// skipping _8568  name type: 0
// skipping _8567  name type: 0
    object _8566 = NOVALUE; // 15370 8566
// skipping _8565  name type: 0
// skipping _8564  name type: 0
    object _8563 = NOVALUE; // 15364 8563
    object _8562 = NOVALUE; // 15363 8562
// skipping _8559  name type: 0
// skipping _8558  name type: 0
// skipping _8557  name type: 0
    object _8556 = NOVALUE; // 15353 8556
// skipping _8555  name type: 0
// skipping _8554  name type: 0
// skipping _8553  name type: 0
    object _8552 = NOVALUE; // 15343 8552
    object _8549 = NOVALUE; // 15332 8549
// skipping _8548  name type: 0
    object _8547 = NOVALUE; // 15330 8547
// skipping _8546  name type: 0
    object _8545 = NOVALUE; // 15327 8545
// skipping _8544  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cmd_parse pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 5 op: STARTLINE (58)

    /** cmdline.e:1428		object add_help_rid = -1*/
    // SubProg cmd_parse pc: 7 op: ASSIGN (18)
    _add_help_rid_15319 = -1;
    // SubProg cmd_parse pc: 10 op: STARTLINE (58)

    /** cmdline.e:1429		integer validation = VALIDATE_ALL*/
    // SubProg cmd_parse pc: 12 op: ASSIGN_I (113)
    _validation_15320 = 2;
    // SubProg cmd_parse pc: 15 op: STARTLINE (58)

    /** cmdline.e:1430		integer has_extra = 0*/
    // SubProg cmd_parse pc: 17 op: ASSIGN_I (113)
    _has_extra_15321 = 0;
    // SubProg cmd_parse pc: 20 op: STARTLINE (58)

    /** cmdline.e:1431		integer use_at = 1*/
    // SubProg cmd_parse pc: 22 op: ASSIGN_I (113)
    _use_at_15322 = 1;
    // SubProg cmd_parse pc: 25 op: STARTLINE (58)

    /** cmdline.e:1432		integer auto_help = 1*/
    // SubProg cmd_parse pc: 27 op: ASSIGN_I (113)
    _auto_help_15323 = 1;
    // SubProg cmd_parse pc: 30 op: STARTLINE (58)

    /** cmdline.e:1433		integer help_on_error = 1*/
    // SubProg cmd_parse pc: 32 op: ASSIGN_I (113)
    _help_on_error_15324 = 1;
    // SubProg cmd_parse pc: 35 op: STARTLINE (58)

    /** cmdline.e:1435		integer po = 1*/
    // SubProg cmd_parse pc: 37 op: ASSIGN_I (113)
    _po_15325 = 1;
    // SubProg cmd_parse pc: 40 op: STARTLINE (58)

    /** cmdline.e:1436		if atom(parse_options) then*/
    // SubProg cmd_parse pc: 42 op: IS_AN_ATOM (67)
    _8545 = 1;
    // SubProg cmd_parse pc: 45 op: IF (20)
    if (_8545 == 0)
    {
        _8545 = NOVALUE;
        goto L1; // [45] 55
    }
    else{
        _8545 = NOVALUE;
    }
    // SubProg cmd_parse pc: 48 op: STARTLINE (58)

    /** cmdline.e:1437			parse_options = {parse_options}*/
    // SubProg cmd_parse pc: 50 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    _parse_options_15313 = MAKE_SEQ(_1);
    // SubProg cmd_parse pc: 54 op: NOP1 (159)
L1: // addr: 55 pc: 54 sub: 15310 op: 159
    // SubProg cmd_parse pc: 55 op: STARTLINE (58)

    /** cmdline.e:1441		while po <= length(parse_options) do*/
    // SubProg cmd_parse pc: 57 op: NOP2 (110)
    // SubProg cmd_parse pc: 59 op: NOPWHILE (158)
L2: // addr: 60 pc: 59 sub: 15310 op: 158
    // SubProg cmd_parse pc: 60 op: LENGTH (42)
    // Known sequence length:
    _8547 = 1;
    // SubProg cmd_parse pc: 63 op: LESSEQ_IFW_I (123)
    if (_po_15325 > 1)
    goto L3; // [63] 296
    // SubProg cmd_parse pc: 67 op: STARTLINE (58)

    /** cmdline.e:1442			switch parse_options[po] do*/
    // SubProg cmd_parse pc: 69 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_parse_options_15313);
    _8549 = (object)*(((s1_ptr)_2)->base + _po_15325);
    // SubProg cmd_parse pc: 73 op: SWITCH_I (193)
    _0 = _8549;
    _8549 = NOVALUE;
    switch ( _0 ){ 
        // SubProg cmd_parse pc: 78 op: STARTLINE (58)

        /** cmdline.e:1444				case NO_HELP then                         auto_help = 0*/
        // SubProg cmd_parse pc: 80 op: CASE (186)
        case 9:
        // SubProg cmd_parse pc: 82 op: ASSIGN_I (113)
        _auto_help_15323 = 0;
        // SubProg cmd_parse pc: 85 op: ELSE (23)
        goto L4; // [85] 285
        // SubProg cmd_parse pc: 87 op: STARTLINE (58)

        /** cmdline.e:1445				case VALIDATE_ALL then                    validation = VALIDATE_ALL*/
        // SubProg cmd_parse pc: 89 op: CASE (186)
        case 2:
        // SubProg cmd_parse pc: 91 op: ASSIGN_I (113)
        _validation_15320 = 2;
        // SubProg cmd_parse pc: 94 op: ELSE (23)
        goto L4; // [94] 285
        // SubProg cmd_parse pc: 96 op: STARTLINE (58)

        /** cmdline.e:1446				case NO_VALIDATION then                   validation = NO_VALIDATION*/
        // SubProg cmd_parse pc: 98 op: CASE (186)
        case 3:
        // SubProg cmd_parse pc: 100 op: ASSIGN_I (113)
        _validation_15320 = 3;
        // SubProg cmd_parse pc: 103 op: ELSE (23)
        goto L4; // [103] 285
        // SubProg cmd_parse pc: 105 op: STARTLINE (58)

        /** cmdline.e:1447				case NO_VALIDATION_AFTER_FIRST_EXTRA then validation = NO_VALIDATION_AFTER_FIRST_EXTRA*/
        // SubProg cmd_parse pc: 107 op: CASE (186)
        case 4:
        // SubProg cmd_parse pc: 109 op: ASSIGN_I (113)
        _validation_15320 = 4;
        // SubProg cmd_parse pc: 112 op: ELSE (23)
        goto L4; // [112] 285
        // SubProg cmd_parse pc: 114 op: STARTLINE (58)

        /** cmdline.e:1448				case NO_AT_EXPANSION then                 use_at = 0*/
        // SubProg cmd_parse pc: 116 op: CASE (186)
        case 7:
        // SubProg cmd_parse pc: 118 op: ASSIGN_I (113)
        _use_at_15322 = 0;
        // SubProg cmd_parse pc: 121 op: ELSE (23)
        goto L4; // [121] 285
        // SubProg cmd_parse pc: 123 op: STARTLINE (58)

        /** cmdline.e:1449				case AT_EXPANSION then                    use_at = 1*/
        // SubProg cmd_parse pc: 125 op: CASE (186)
        case 6:
        // SubProg cmd_parse pc: 127 op: ASSIGN_I (113)
        _use_at_15322 = 1;
        // SubProg cmd_parse pc: 130 op: ELSE (23)
        goto L4; // [130] 285
        // SubProg cmd_parse pc: 132 op: STARTLINE (58)

        /** cmdline.e:1451				case HELP_RID then*/
        // SubProg cmd_parse pc: 134 op: CASE (186)
        case 1:
        // SubProg cmd_parse pc: 136 op: STARTLINE (58)

        /** cmdline.e:1452					if po < length(parse_options) then*/
        // SubProg cmd_parse pc: 138 op: LENGTH (42)
        // Known sequence length:
        _8552 = 1;
        // SubProg cmd_parse pc: 141 op: LESS_IFW_I (119)
        if (_po_15325 >= 1)
        goto L5; // [141] 160
        // SubProg cmd_parse pc: 145 op: STARTLINE (58)

        /** cmdline.e:1453						po += 1*/
        // SubProg cmd_parse pc: 147 op: PLUS1_I (117)
        _po_15325 = _po_15325 + 1;
        // SubProg cmd_parse pc: 151 op: STARTLINE (58)

        /** cmdline.e:1454						add_help_rid = parse_options[po]*/
        // SubProg cmd_parse pc: 153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_parse_options_15313);
        _add_help_rid_15319 = (object)*(((s1_ptr)_2)->base + _po_15325);
        // SubProg cmd_parse pc: 157 op: ELSE (23)
        goto L4; // [157] 285
        // SubProg cmd_parse pc: 159 op: NOP1 (159)
L5: // addr: 160 pc: 159 sub: 15310 op: 159
        // SubProg cmd_parse pc: 160 op: STARTLINE (58)

        /** cmdline.e:1456						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/
        // SubProg cmd_parse pc: 162 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 164 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_161_15349);
        _msg_inlined_crash_at_161_15349 = EPrintf(-9999999, _8103, _5);
        // SubProg cmd_parse pc: 168 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 170 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_161_15349);
        // SubProg cmd_parse pc: 173 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 175 op: ELSE (23)
        goto L6; // [175] 178
        // SubProg cmd_parse pc: 177 op: NOP1 (159)
L6: // addr: 178 pc: 177 sub: 15310 op: 159
        // SubProg cmd_parse pc: 178 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 161

// block var msg_inlined_crash_at_161_15349
        DeRefi(_msg_inlined_crash_at_161_15349);
        _msg_inlined_crash_at_161_15349 = NOVALUE;
        // SubProg cmd_parse pc: 180 op: NOP1 (159)
        // SubProg cmd_parse pc: 181 op: ELSE (23)
        goto L4; // [181] 285
        // SubProg cmd_parse pc: 183 op: STARTLINE (58)

        /** cmdline.e:1459				case NO_HELP_ON_ERROR then*/
        // SubProg cmd_parse pc: 185 op: CASE (186)
        case 10:
        // SubProg cmd_parse pc: 187 op: STARTLINE (58)

        /** cmdline.e:1461					help_on_error = 0*/
        // SubProg cmd_parse pc: 189 op: ASSIGN_I (113)
        _help_on_error_15324 = 0;
        // SubProg cmd_parse pc: 192 op: ELSE (23)
        goto L4; // [192] 285
        // SubProg cmd_parse pc: 194 op: STARTLINE (58)

        /** cmdline.e:1463				case PAUSE_MSG then*/
        // SubProg cmd_parse pc: 196 op: CASE (186)
        case 8:
        // SubProg cmd_parse pc: 198 op: STARTLINE (58)

        /** cmdline.e:1464					if po < length(parse_options) then*/
        // SubProg cmd_parse pc: 200 op: LENGTH (42)
        // Known sequence length:
        _8556 = 1;
        // SubProg cmd_parse pc: 203 op: LESS_IFW_I (119)
        if (_po_15325 >= 1)
        goto L7; // [203] 224
        // SubProg cmd_parse pc: 207 op: STARTLINE (58)

        /** cmdline.e:1465						po += 1*/
        // SubProg cmd_parse pc: 209 op: PLUS1_I (117)
        _po_15325 = _po_15325 + 1;
        // SubProg cmd_parse pc: 213 op: STARTLINE (58)

        /** cmdline.e:1466						pause_msg = parse_options[po]*/
        // SubProg cmd_parse pc: 215 op: RHS_SUBS_CHECK (92)
        DeRef(_4pause_msg_14186);
        _2 = (object)SEQ_PTR(_parse_options_15313);
        _4pause_msg_14186 = (object)*(((s1_ptr)_2)->base + _po_15325);
        // SubProg cmd_parse pc: 219 op: SEQUENCE_CHECK (97)
        // SubProg cmd_parse pc: 221 op: ELSE (23)
        goto L4; // [221] 285
        // SubProg cmd_parse pc: 223 op: NOP1 (159)
L7: // addr: 224 pc: 223 sub: 15310 op: 159
        // SubProg cmd_parse pc: 224 op: STARTLINE (58)

        /** cmdline.e:1468						error:crash("PAUSE_MSG was given to cmd_parse with no actual message text")*/
        // SubProg cmd_parse pc: 226 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 228 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_225_15360);
        _msg_inlined_crash_at_225_15360 = EPrintf(-9999999, _8560, _5);
        // SubProg cmd_parse pc: 232 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 234 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_225_15360);
        // SubProg cmd_parse pc: 237 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 239 op: ELSE (23)
        goto L8; // [239] 242
        // SubProg cmd_parse pc: 241 op: NOP1 (159)
L8: // addr: 242 pc: 241 sub: 15310 op: 159
        // SubProg cmd_parse pc: 242 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 225

// block var msg_inlined_crash_at_225_15360
        DeRefi(_msg_inlined_crash_at_225_15360);
        _msg_inlined_crash_at_225_15360 = NOVALUE;
        // SubProg cmd_parse pc: 244 op: NOP1 (159)
        // SubProg cmd_parse pc: 245 op: ELSE (23)
        goto L4; // [245] 285
        // SubProg cmd_parse pc: 247 op: STARTLINE (58)

        /** cmdline.e:1471				case else*/
        // SubProg cmd_parse pc: 249 op: CASE (186)
        default:
        // SubProg cmd_parse pc: 251 op: STARTLINE (58)

        /** cmdline.e:1472					error:crash(sprintf("Unrecognised cmdline PARSE OPTION - %d", parse_options[po]) )*/
        // SubProg cmd_parse pc: 253 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_parse_options_15313);
        _8562 = (object)*(((s1_ptr)_2)->base + _po_15325);
        // SubProg cmd_parse pc: 257 op: SPRINTF (53)
        _8563 = EPrintf(-9999999, _8561, _8562);
        _8562 = NOVALUE;
        // SubProg cmd_parse pc: 261 op: ASSIGN (18)
        DeRefi(_fmt_inlined_crash_at_260_15366);
        _fmt_inlined_crash_at_260_15366 = _8563;
        _8563 = NOVALUE;
        // SubProg cmd_parse pc: 264 op: SEQUENCE_CHECK (97)
        // SubProg cmd_parse pc: 266 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg cmd_parse pc: 268 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_263_15367);
        _msg_inlined_crash_at_263_15367 = EPrintf(-9999999, _fmt_inlined_crash_at_260_15366, _5);
        // SubProg cmd_parse pc: 272 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg cmd_parse pc: 274 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_263_15367);
        // SubProg cmd_parse pc: 277 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg cmd_parse pc: 279 op: ELSE (23)
        goto L9; // [279] 282
        // SubProg cmd_parse pc: 281 op: NOP1 (159)
L9: // addr: 282 pc: 281 sub: 15310 op: 159
        // SubProg cmd_parse pc: 282 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from cmd_parse @ 260

// block var fmt_inlined_crash_at_260_15366
        DeRefi(_fmt_inlined_crash_at_260_15366);
        _fmt_inlined_crash_at_260_15366 = NOVALUE;

// block var msg_inlined_crash_at_263_15367
        DeRefi(_msg_inlined_crash_at_263_15367);
        _msg_inlined_crash_at_263_15367 = NOVALUE;
        // SubProg cmd_parse pc: 284 op: NOPSWITCH (187)
    ;}L4: // addr: 285 pc: 284 sub: 15310 op: 187
    // SubProg cmd_parse pc: 285 op: STARTLINE (58)

    /** cmdline.e:1475			po += 1*/
    // SubProg cmd_parse pc: 287 op: PLUS1_I (117)
    _po_15325 = _po_15325 + 1;
    // SubProg cmd_parse pc: 291 op: STARTLINE (58)

    /** cmdline.e:1476		end while*/
    // SubProg cmd_parse pc: 293 op: ENDWHILE (22)
    goto L2; // [293] 60
    // SubProg cmd_parse pc: 295 op: NOP1 (159)
L3: // addr: 296 pc: 295 sub: 15310 op: 159
    // SubProg cmd_parse pc: 296 op: STARTLINE (58)

    /** cmdline.e:1478		opts = standardize_opts(opts, auto_help)*/
    // SubProg cmd_parse pc: 298 op: PROC (27)
    RefDS(_opts_15312);
    _0 = _opts_15312;
    _opts_15312 = _4standardize_opts(_opts_15312, _auto_help_15323);
    DeRefDS(_0);
    // SubProg cmd_parse pc: 303 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 305 op: STARTLINE (58)

    /** cmdline.e:1479		call_count = repeat(0, length(opts))*/
    // SubProg cmd_parse pc: 307 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_15312)){
            _8566 = SEQ_PTR(_opts_15312)->length;
    }
    else {
        _8566 = 1;
    }
    // SubProg cmd_parse pc: 310 op: REPEAT (32)
    DeRef(_call_count_15318);
    _call_count_15318 = Repeat(0, _8566);
    _8566 = NOVALUE;
    // SubProg cmd_parse pc: 314 op: STARTLINE (58)

    /** cmdline.e:1481		map:map parsed_opts = map:new()*/
    // SubProg cmd_parse pc: 316 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg cmd_parse pc: 318 op: PROC (27)
    _0 = _new_1__tmp_at315_15375;
    _new_1__tmp_at315_15375 = _29new_map_seq(8);
    DeRef(_0);
    // SubProg cmd_parse pc: 322 op: PROC (27)
    Ref(_new_1__tmp_at315_15375);
    _0 = _parsed_opts_15372;
    _parsed_opts_15372 = _30malloc(_new_1__tmp_at315_15375, 1);
    DeRef(_0);
    // SubProg cmd_parse pc: 327 op: NOP1 (159)
    // SubProg cmd_parse pc: 328 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from cmd_parse @ 315

// block var new_1__tmp_at315_15375
    DeRef(_new_1__tmp_at315_15375);
    _new_1__tmp_at315_15375 = NOVALUE;
    // SubProg cmd_parse pc: 330 op: STARTLINE (58)

    /** cmdline.e:1482		map:put(parsed_opts, EXTRAS, {})*/
    // SubProg cmd_parse pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg cmd_parse pc: 334 op: PROC (27)
    Ref(_parsed_opts_15372);
    RefDS(_4EXTRAS_14175);
    RefDS(_5);
    _29put(_parsed_opts_15372, _4EXTRAS_14175, _5, 1, 0);
    // SubProg cmd_parse pc: 341 op: STARTLINE (58)

    /** cmdline.e:1485		help_opts = get_help_options( opts )*/
    // SubProg cmd_parse pc: 343 op: PROC (27)
    RefDS(_opts_15312);
    _0 = _help_opts_15317;
    _help_opts_15317 = _4get_help_options(_opts_15312);
    DeRef(_0);
    // SubProg cmd_parse pc: 347 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 349 op: STARTLINE (58)

    /** cmdline.e:1487		object cmds_ok = parse_commands( cmds, opts, parsed_opts, help_opts, add_help_rid, parse_options, */
    // SubProg cmd_parse pc: 351 op: PROC (27)
    RefDS(_cmds_15314);
    RefDS(_opts_15312);
    Ref(_parsed_opts_15372);
    RefDS(_help_opts_15317);
    Ref(_parse_options_15313);
    RefDS(_call_count_15318);
    _0 = _cmds_ok_15377;
    _cmds_ok_15377 = _4parse_commands(_cmds_15314, _opts_15312, _parsed_opts_15372, _help_opts_15317, _add_help_rid_15319, _parse_options_15313, _use_at_15322, _validation_15320, _has_extra_15321, _call_count_15318, _help_on_error_15324, _auto_help_15323);
    DeRef(_0);
    // SubProg cmd_parse pc: 366 op: STARTLINE (58)

    /** cmdline.e:1489		if atom( cmds_ok ) then*/
    // SubProg cmd_parse pc: 368 op: IS_AN_ATOM (67)
    _8570 = IS_ATOM(_cmds_ok_15377);
    // SubProg cmd_parse pc: 371 op: IF (20)
    if (_8570 == 0)
    {
        _8570 = NOVALUE;
        goto LA; // [371] 381
    }
    else{
        _8570 = NOVALUE;
    }
    // SubProg cmd_parse pc: 374 op: STARTLINE (58)

    /** cmdline.e:1490			return 0*/
    // SubProg cmd_parse pc: 376 op: RETURNF (28)

// Exiting block BLOCK: cmd_parse

// block var opts_15312
    DeRefDS(_opts_15312);

// block var parse_options_15313
    DeRefi(_parse_options_15313);

// block var cmds_15314
    DeRefDS(_cmds_15314);

// block var help_opts_15317
    DeRefDS(_help_opts_15317);

// block var call_count_15318
    DeRefDS(_call_count_15318);

// block var add_help_rid_15319

// block var validation_15320

// block var has_extra_15321

// block var use_at_15322

// block var auto_help_15323

// block var help_on_error_15324

// block var po_15325

// block var parsed_opts_15372
    DeRef(_parsed_opts_15372);

// block var cmds_ok_15377
    DeRef(_cmds_ok_15377);
    return 0;
    // SubProg cmd_parse pc: 380 op: NOP1 (159)
LA: // addr: 381 pc: 380 sub: 15310 op: 159
    // SubProg cmd_parse pc: 381 op: STARTLINE (58)

    /** cmdline.e:1492		cmds       = cmds_ok[1]*/
    // SubProg cmd_parse pc: 383 op: RHS_SUBS_CHECK (92)
    DeRefDS(_cmds_15314);
    _2 = (object)SEQ_PTR(_cmds_ok_15377);
    _cmds_15314 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_cmds_15314);
    // SubProg cmd_parse pc: 387 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 389 op: STARTLINE (58)

    /** cmdline.e:1493		call_count = cmds_ok[2]*/
    // SubProg cmd_parse pc: 391 op: RHS_SUBS_CHECK (92)
    DeRef(_call_count_15318);
    _2 = (object)SEQ_PTR(_cmds_ok_15377);
    _call_count_15318 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_15318);
    // SubProg cmd_parse pc: 395 op: SEQUENCE_CHECK (97)
    // SubProg cmd_parse pc: 397 op: STARTLINE (58)

    /** cmdline.e:1496		check_mandatory( opts, parsed_opts, add_help_rid, cmds, parse_options, help_on_error, auto_help )*/
    // SubProg cmd_parse pc: 399 op: PROC (27)
    RefDS(_opts_15312);
    Ref(_parsed_opts_15372);
    RefDS(_cmds_15314);
    Ref(_parse_options_15313);
    _4check_mandatory(_opts_15312, _parsed_opts_15372, _add_help_rid_15319, _cmds_15314, _parse_options_15313, _help_on_error_15324, _auto_help_15323);
    // SubProg cmd_parse pc: 408 op: STARTLINE (58)

    /** cmdline.e:1498		return parsed_opts*/
    // SubProg cmd_parse pc: 410 op: RETURNF (28)

// Exiting block BLOCK: cmd_parse

// block var opts_15312
    DeRefDS(_opts_15312);

// block var parse_options_15313
    DeRefi(_parse_options_15313);

// block var cmds_15314
    DeRefDS(_cmds_15314);

// block var help_opts_15317
    DeRef(_help_opts_15317);

// block var call_count_15318
    DeRefDS(_call_count_15318);

// block var add_help_rid_15319

// block var validation_15320

// block var has_extra_15321

// block var use_at_15322

// block var auto_help_15323

// block var help_on_error_15324

// block var po_15325

// block var cmds_ok_15377
    DeRef(_cmds_ok_15377);
    return _parsed_opts_15372;
    // SubProg cmd_parse pc: 414 op: BADRETURNF (43)
    ;
}


object _4build_commandline(object _cmds_15385)
{
    object _8575 = NOVALUE; // 15388 8575
    object _8574 = NOVALUE; // 15387 8574
    object _8573 = NOVALUE; // 15386 8573
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg build_commandline pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg build_commandline pc: 3 op: STARTLINE (58)

    /** cmdline.e:1551		return stdseq:flatten( text:quote( cmds,,'\\'," " ), " ")*/
    // SubProg build_commandline pc: 5 op: RIGHT_BRACE_2 (85)
    RefDS(_4914);
    RefDS(_4914);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4914;
    ((intptr_t *)_2)[2] = _4914;
    _8573 = MAKE_SEQ(_1);
    // SubProg build_commandline pc: 9 op: PROC (27)
    RefDS(_cmds_15385);
    RefDS(_2736);
    _8574 = _17quote(_cmds_15385, _8573, 92, _2736);
    _8573 = NOVALUE;
    // SubProg build_commandline pc: 16 op: PROC (27)
    RefDS(_2736);
    _8575 = _23flatten(_8574, _2736);
    _8574 = NOVALUE;
    // SubProg build_commandline pc: 21 op: RETURNF (28)

// Exiting block BLOCK: build_commandline

// block var cmds_15385
    DeRefDS(_cmds_15385);
    return _8575;
    // SubProg build_commandline pc: 25 op: BADRETURNF (43)
    ;
}



// 0x64B65B0B
