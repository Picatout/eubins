// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _63is_file_newer(object _f1_23694, object _f2_23695)
{
    object _d1_23696 = NOVALUE;
    object _d2_23699 = NOVALUE;
    object _diff_2__tmp_at33_23708 = NOVALUE;
    object _diff_1__tmp_at33_23707 = NOVALUE;
    object _diff_inlined_diff_at_33_23706 = NOVALUE;
// skipping _13510  name type: 0
    object _13509 = NOVALUE; // 23703 13509
// skipping _13508  name type: 0
// skipping _13507  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_file_newer pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 5 op: STARTLINE (58)

    /** preproc.e:22		object d1 = file_timestamp(f1)*/
    // SubProg is_file_newer pc: 7 op: PROC (27)
    RefDS(_f1_23694);
    _0 = _d1_23696;
    _d1_23696 = _16file_timestamp(_f1_23694);
    DeRef(_0);
    // SubProg is_file_newer pc: 11 op: STARTLINE (58)

    /** preproc.e:23		object d2 = file_timestamp(f2)*/
    // SubProg is_file_newer pc: 13 op: PROC (27)
    RefDS(_f2_23695);
    _0 = _d2_23699;
    _d2_23699 = _16file_timestamp(_f2_23695);
    DeRef(_0);
    // SubProg is_file_newer pc: 17 op: STARTLINE (58)

    /** preproc.e:25		if atom(d2) then return 1 end if*/
    // SubProg is_file_newer pc: 19 op: IS_AN_ATOM (67)
    _13509 = IS_ATOM(_d2_23699);
    // SubProg is_file_newer pc: 22 op: IF (20)
    if (_13509 == 0)
    {
        _13509 = NOVALUE;
        goto L1; // [22] 30
    }
    else{
        _13509 = NOVALUE;
    }
    // SubProg is_file_newer pc: 25 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23694
    DeRefDS(_f1_23694);

// block var f2_23695
    DeRefDS(_f2_23695);

// block var d1_23696
    DeRef(_d1_23696);

// block var d2_23699
    DeRef(_d2_23699);
    return 1;
    // SubProg is_file_newer pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 23692 op: 159
    // SubProg is_file_newer pc: 30 op: STARTLINE (58)

    /** preproc.e:27		if dt:diff(d1, d2) < 0 then*/
    // SubProg is_file_newer pc: 32 op: STARTLINE (58)

    /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
    // SubProg is_file_newer pc: 34 op: PROC (27)
    Ref(_d2_23699);
    _0 = _diff_1__tmp_at33_23707;
    _diff_1__tmp_at33_23707 = _17datetimeToSeconds(_d2_23699);
    DeRef(_0);
    // SubProg is_file_newer pc: 38 op: PROC (27)
    Ref(_d1_23696);
    _0 = _diff_2__tmp_at33_23708;
    _diff_2__tmp_at33_23708 = _17datetimeToSeconds(_d1_23696);
    DeRef(_0);
    // SubProg is_file_newer pc: 42 op: MINUS (10)
    DeRef(_diff_inlined_diff_at_33_23706);
    if (IS_ATOM_INT(_diff_1__tmp_at33_23707) && IS_ATOM_INT(_diff_2__tmp_at33_23708)) {
        _diff_inlined_diff_at_33_23706 = _diff_1__tmp_at33_23707 - _diff_2__tmp_at33_23708;
        if ((object)((uintptr_t)_diff_inlined_diff_at_33_23706 +(uintptr_t) HIGH_BITS) >= 0){
            _diff_inlined_diff_at_33_23706 = NewDouble((eudouble)_diff_inlined_diff_at_33_23706);
        }
    }
    else {
        _diff_inlined_diff_at_33_23706 = binary_op(MINUS, _diff_1__tmp_at33_23707, _diff_2__tmp_at33_23708);
    }
    // SubProg is_file_newer pc: 46 op: NOP1 (159)
    // SubProg is_file_newer pc: 47 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-diff from is_file_newer @ 33

// block var diff_1__tmp_at33_23707
    DeRef(_diff_1__tmp_at33_23707);
    _diff_1__tmp_at33_23707 = NOVALUE;

// block var diff_2__tmp_at33_23708
    DeRef(_diff_2__tmp_at33_23708);
    _diff_2__tmp_at33_23708 = NOVALUE;
    // SubProg is_file_newer pc: 49 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _diff_inlined_diff_at_33_23706, 0)){
        goto L2; // [49] 60
    }
    // SubProg is_file_newer pc: 53 op: STARTLINE (58)

    /** preproc.e:28			return 1*/
    // SubProg is_file_newer pc: 55 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23694
    DeRefDS(_f1_23694);

// block var f2_23695
    DeRefDS(_f2_23695);

// block var d1_23696
    DeRef(_d1_23696);

// block var d2_23699
    DeRef(_d2_23699);
    return 1;
    // SubProg is_file_newer pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 23692 op: 159
    // SubProg is_file_newer pc: 60 op: STARTLINE (58)

    /** preproc.e:31		return 0*/
    // SubProg is_file_newer pc: 62 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23694
    DeRefDS(_f1_23694);

// block var f2_23695
    DeRefDS(_f2_23695);

// block var d1_23696
    DeRef(_d1_23696);

// block var d2_23699
    DeRef(_d2_23699);
    return 0;
    // SubProg is_file_newer pc: 66 op: BADRETURNF (43)
    ;
}


void _63add_preprocessor(object _file_ext_23712, object _command_23713, object _params_23714)
{
    object _tmp_23717 = NOVALUE;
    object _file_exts_23727 = NOVALUE;
    object _exts_23733 = NOVALUE;
// skipping _13527  name type: 0
    object _13526 = NOVALUE; // 23742 13526
    object _13525 = NOVALUE; // 23741 13525
    object _13524 = NOVALUE; // 23740 13524
    object _13523 = NOVALUE; // 23738 13523
// skipping _13522  name type: 0
    object _13521 = NOVALUE; // 23732 13521
// skipping _13520  name type: 0
// skipping _13518  name type: 0
// skipping _13517  name type: 0
    object _13516 = NOVALUE; // 23724 13516
// skipping _13515  name type: 0
// skipping _13514  name type: 0
// skipping _13513  name type: 0
    object _13511 = NOVALUE; // 23716 13511
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_preprocessor pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 3 op: STARTLINE (58)

    /** preproc.e:46		if atom(command) then*/
    // SubProg add_preprocessor pc: 5 op: IS_AN_ATOM (67)
    _13511 = 1;
    // SubProg add_preprocessor pc: 8 op: IF (20)
    if (_13511 == 0)
    {
        _13511 = NOVALUE;
        goto L1; // [8] 53
    }
    else{
        _13511 = NOVALUE;
    }
    // SubProg add_preprocessor pc: 11 op: STARTLINE (58)

    /** preproc.e:47			sequence tmp = split( file_ext, ":")*/
    // SubProg add_preprocessor pc: 13 op: PROC (27)
    RefDS(_file_ext_23712);
    RefDS(_13512);
    _0 = _tmp_23717;
    _tmp_23717 = _24split(_file_ext_23712, _13512, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 22 op: STARTLINE (58)

    /** preproc.e:48			file_ext = tmp[1]*/
    // SubProg add_preprocessor pc: 24 op: RHS_SUBS (25)
    DeRefDS(_file_ext_23712);
    _2 = (object)SEQ_PTR(_tmp_23717);
    _file_ext_23712 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_file_ext_23712);
    // SubProg add_preprocessor pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 30 op: STARTLINE (58)

    /** preproc.e:49			command = tmp[2]*/
    // SubProg add_preprocessor pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_tmp_23717);
    _command_23713 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_command_23713);
    // SubProg add_preprocessor pc: 36 op: STARTLINE (58)

    /** preproc.e:50			if length(tmp) >= 3 then*/
    // SubProg add_preprocessor pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_tmp_23717)){
            _13516 = SEQ_PTR(_tmp_23717)->length;
    }
    else {
        _13516 = 1;
    }
    // SubProg add_preprocessor pc: 41 op: GREATEREQ_IFW_I (120)
    if (_13516 < 3)
    goto L2; // [41] 52
    // SubProg add_preprocessor pc: 45 op: STARTLINE (58)

    /** preproc.e:51				params = tmp[3]*/
    // SubProg add_preprocessor pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_tmp_23717);
    _params_23714 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_params_23714);
    // SubProg add_preprocessor pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 23710 op: 159
    // SubProg add_preprocessor pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 23710 op: 159
    // SubProg add_preprocessor pc: 53 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tmp_23717
    DeRef(_tmp_23717);
    _tmp_23717 = NOVALUE;
    // SubProg add_preprocessor pc: 55 op: STARTLINE (58)

    /** preproc.e:55		sequence file_exts = split( file_ext, "," )*/
    // SubProg add_preprocessor pc: 57 op: PROC (27)
    RefDS(_file_ext_23712);
    RefDS(_13519);
    _0 = _file_exts_23727;
    _file_exts_23727 = _24split(_file_ext_23712, _13519, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 64 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 66 op: STARTLINE (58)

    /** preproc.e:57		if atom(params) then*/
    // SubProg add_preprocessor pc: 68 op: IS_AN_ATOM (67)
    _13521 = IS_ATOM(_params_23714);
    // SubProg add_preprocessor pc: 71 op: IF (20)
    if (_13521 == 0)
    {
        _13521 = NOVALUE;
        goto L3; // [71] 80
    }
    else{
        _13521 = NOVALUE;
    }
    // SubProg add_preprocessor pc: 74 op: STARTLINE (58)

    /** preproc.e:58			params = ""*/
    // SubProg add_preprocessor pc: 76 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_params_23714);
    _params_23714 = _5;
    // SubProg add_preprocessor pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 23710 op: 159
    // SubProg add_preprocessor pc: 80 op: STARTLINE (58)

    /** preproc.e:61		sequence exts = split(file_ext, ",")*/
    // SubProg add_preprocessor pc: 82 op: PROC (27)
    RefDS(_file_ext_23712);
    RefDS(_13519);
    _0 = _exts_23733;
    _exts_23733 = _24split(_file_ext_23712, _13519, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 91 op: STARTLINE (58)

    /** preproc.e:62		for i = 1 to length(exts) do*/
    // SubProg add_preprocessor pc: 93 op: LENGTH (42)
    if (IS_SEQUENCE(_exts_23733)){
            _13523 = SEQ_PTR(_exts_23733)->length;
    }
    else {
        _13523 = 1;
    }
    // SubProg add_preprocessor pc: 96 op: FOR_I (125)
    {
        object _i_23737;
        _i_23737 = 1;
L4: // addr: 103 pc: 96 sub: 23710 op: 125
        if (_i_23737 > _13523){
            goto L5; // [96] 135
        }
        // SubProg add_preprocessor pc: 103 op: STARTLINE (58)

        /** preproc.e:63			preprocessors &= { { exts[i], command, params, -1 } }*/
        // SubProg add_preprocessor pc: 105 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_preprocessor pc: 107 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exts_23733);
        _13524 = (object)*(((s1_ptr)_2)->base + _i_23737);
        // SubProg add_preprocessor pc: 111 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_13524);
        ((intptr_t*)_2)[1] = _13524;
        Ref(_command_23713);
        ((intptr_t*)_2)[2] = _command_23713;
        Ref(_params_23714);
        ((intptr_t*)_2)[3] = _params_23714;
        ((intptr_t*)_2)[4] = -1;
        _13525 = MAKE_SEQ(_1);
        _13524 = NOVALUE;
        // SubProg add_preprocessor pc: 118 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _13525;
        _13526 = MAKE_SEQ(_1);
        _13525 = NOVALUE;
        // SubProg add_preprocessor pc: 122 op: CONCAT (15)
        Concat((object_ptr)&_7preprocessors_11407, _7preprocessors_11407, _13526);
        DeRefDS(_13526);
        _13526 = NOVALUE;
        // SubProg add_preprocessor pc: 126 op: SEQUENCE_CHECK (97)
        // SubProg add_preprocessor pc: 128 op: STARTLINE (58)

        /** preproc.e:64		end for*/
        // SubProg add_preprocessor pc: 130 op: ENDFOR_INT_UP1 (54)
        _i_23737 = _i_23737 + 1;
        goto L4; // [130] 103
L5: // addr: 135 pc: 130 sub: 23710 op: 54
        ;
    }
    // SubProg add_preprocessor pc: 135 op: STARTLINE (58)

    /** preproc.e:65	end procedure */
    // SubProg add_preprocessor pc: 137 op: RETURNP (29)

// Exiting block BLOCK: add_preprocessor

// block var file_ext_23712
    DeRefDS(_file_ext_23712);

// block var command_23713
    DeRef(_command_23713);

// block var params_23714
    DeRef(_params_23714);

// block var file_exts_23727
    DeRef(_file_exts_23727);

// block var exts_23733
    DeRef(_exts_23733);
    return;
    // SubProg add_preprocessor pc: 140 op: BADRETURNF (43)
    ;
}


object _63maybe_preprocess(object _fname_23746)
{
    object _pp_23747 = NOVALUE;
    object _pp_id_23748 = NOVALUE;
    object _fext_23752 = NOVALUE;
    object _post_fname_23769 = NOVALUE;
    object _rid_23797 = NOVALUE;
    object _dll_id_23801 = NOVALUE;
    object _public_cmd_args_23837 = NOVALUE;
    object _cmd_args_23840 = NOVALUE;
    object _cmd_23869 = NOVALUE;
    object _pcmd_23874 = NOVALUE;
    object _result_23879 = NOVALUE;
    object _13605 = NOVALUE; // 23886 13605
    object _13604 = NOVALUE; // 23885 13604
// skipping _13602  name type: 0
// skipping _13601  name type: 0
// skipping _13600  name type: 0
    object _13599 = NOVALUE; // 23877 13599
    object _13598 = NOVALUE; // 23876 13598
// skipping _13597  name type: 0
    object _13596 = NOVALUE; // 23872 13596
    object _13595 = NOVALUE; // 23871 13595
// skipping _13594  name type: 0
    object _13593 = NOVALUE; // 23867 13593
// skipping _13592  name type: 0
    object _13591 = NOVALUE; // 23865 13591
    object _13590 = NOVALUE; // 23864 13590
    object _13588 = NOVALUE; // 23860 13588
// skipping _13586  name type: 0
    object _13585 = NOVALUE; // 23855 13585
// skipping _13584  name type: 0
    object _13583 = NOVALUE; // 23853 13583
    object _13581 = NOVALUE; // 23851 13581
    object _13579 = NOVALUE; // 23849 13579
    object _13578 = NOVALUE; // 23848 13578
// skipping _13577  name type: 0
    object _13576 = NOVALUE; // 23844 13576
    object _13575 = NOVALUE; // 23842 13575
// skipping _13574  name type: 0
    object _13573 = NOVALUE; // 23838 13573
// skipping _13571  name type: 0
    object _13570 = NOVALUE; // 23831 13570
    object _13569 = NOVALUE; // 23830 13569
    object _13568 = NOVALUE; // 23829 13568
// skipping _13567  name type: 0
    object _13566 = NOVALUE; // 23826 13566
// skipping _13564  name type: 0
// skipping _13563  name type: 0
    object _13562 = NOVALUE; // 23817 13562
    object _13560 = NOVALUE; // 23811 13560
    object _13559 = NOVALUE; // 23810 13559
    object _13558 = NOVALUE; // 23809 13558
// skipping _13556  name type: 0
// skipping _13555  name type: 0
    object _13554 = NOVALUE; // 23803 13554
// skipping _13553  name type: 0
// skipping _13552  name type: 0
    object _13551 = NOVALUE; // 23796 13551
    object _13550 = NOVALUE; // 23794 13550
    object _13549 = NOVALUE; // 23793 13549
// skipping _13548  name type: 0
    object _13547 = NOVALUE; // 23789 13547
// skipping _13546  name type: 0
// skipping _13545  name type: 0
    object _13544 = NOVALUE; // 23782 13544
// skipping _13543  name type: 0
    object _13542 = NOVALUE; // 23779 13542
    object _13541 = NOVALUE; // 23778 13541
// skipping _13540  name type: 0
    object _13539 = NOVALUE; // 23774 13539
    object _13537 = NOVALUE; // 23771 13537
// skipping _13536  name type: 0
    object _13535 = NOVALUE; // 23767 13535
// skipping _13534  name type: 0
    object _13533 = NOVALUE; // 23763 13533
    object _13532 = NOVALUE; // 23762 13532
    object _13531 = NOVALUE; // 23761 13531
    object _13530 = NOVALUE; // 23758 13530
// skipping _13529  name type: 0
    object _13528 = NOVALUE; // 23751 13528
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg maybe_preprocess pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 3 op: STARTLINE (58)

    /** preproc.e:81		sequence pp = {}*/
    // SubProg maybe_preprocess pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_pp_23747);
    _pp_23747 = _5;
    // SubProg maybe_preprocess pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 10 op: STARTLINE (58)

    /** preproc.e:84		if length(preprocessors) then*/
    // SubProg maybe_preprocess pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_7preprocessors_11407)){
            _13528 = SEQ_PTR(_7preprocessors_11407)->length;
    }
    else {
        _13528 = 1;
    }
    // SubProg maybe_preprocess pc: 17 op: IF (20)
    if (_13528 == 0)
    {
        _13528 = NOVALUE;
        goto L1; // [17] 89
    }
    else{
        _13528 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 20 op: STARTLINE (58)

    /** preproc.e:85			sequence fext = fileext(fname)*/
    // SubProg maybe_preprocess pc: 22 op: PROC (27)
    RefDS(_fname_23746);
    _0 = _fext_23752;
    _fext_23752 = _16fileext(_fname_23746);
    DeRef(_0);
    // SubProg maybe_preprocess pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 28 op: STARTLINE (58)

    /** preproc.e:87			for i = 1 to length(preprocessors) do*/
    // SubProg maybe_preprocess pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_7preprocessors_11407)){
            _13530 = SEQ_PTR(_7preprocessors_11407)->length;
    }
    else {
        _13530 = 1;
    }
    // SubProg maybe_preprocess pc: 35 op: FOR_I (125)
    {
        object _i_23756;
        _i_23756 = 1;
L2: // addr: 42 pc: 35 sub: 23744 op: 125
        if (_i_23756 > _13530){
            goto L3; // [35] 88
        }
        // SubProg maybe_preprocess pc: 42 op: STARTLINE (58)

        /** preproc.e:88				if equal(fext, preprocessors[i][1]) then*/
        // SubProg maybe_preprocess pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg maybe_preprocess pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7preprocessors_11407);
        _13531 = (object)*(((s1_ptr)_2)->base + _i_23756);
        // SubProg maybe_preprocess pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13531);
        _13532 = (object)*(((s1_ptr)_2)->base + 1);
        _13531 = NOVALUE;
        // SubProg maybe_preprocess pc: 54 op: EQUAL (153)
        if (_fext_23752 == _13532)
        _13533 = 1;
        else if (IS_ATOM_INT(_fext_23752) && IS_ATOM_INT(_13532))
        _13533 = 0;
        else
        _13533 = (compare(_fext_23752, _13532) == 0);
        _13532 = NOVALUE;
        // SubProg maybe_preprocess pc: 58 op: IF (20)
        if (_13533 == 0)
        {
            _13533 = NOVALUE;
            goto L4; // [58] 81
        }
        else{
            _13533 = NOVALUE;
        }
        // SubProg maybe_preprocess pc: 61 op: STARTLINE (58)

        /** preproc.e:89					pp_id = i*/
        // SubProg maybe_preprocess pc: 63 op: ASSIGN_I (113)
        _pp_id_23748 = _i_23756;
        // SubProg maybe_preprocess pc: 66 op: STARTLINE (58)

        /** preproc.e:90					pp = preprocessors[pp_id]*/
        // SubProg maybe_preprocess pc: 68 op: GLOBAL_INIT_CHECK (109)
        // SubProg maybe_preprocess pc: 70 op: RHS_SUBS_CHECK (92)
        DeRef(_pp_23747);
        _2 = (object)SEQ_PTR(_7preprocessors_11407);
        _pp_23747 = (object)*(((s1_ptr)_2)->base + _pp_id_23748);
        RefDS(_pp_23747);
        // SubProg maybe_preprocess pc: 74 op: SEQUENCE_CHECK (97)
        // SubProg maybe_preprocess pc: 76 op: STARTLINE (58)

        /** preproc.e:91					exit*/
        // SubProg maybe_preprocess pc: 78 op: EXIT (61)
        goto L3; // [78] 88
        // SubProg maybe_preprocess pc: 80 op: NOP1 (159)
L4: // addr: 81 pc: 80 sub: 23744 op: 159
        // SubProg maybe_preprocess pc: 81 op: STARTLINE (58)

        /** preproc.e:93			end for*/
        // SubProg maybe_preprocess pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_23756 = _i_23756 + 1;
        goto L2; // [83] 42
L3: // addr: 88 pc: 83 sub: 23744 op: 54
        ;
    }
    // SubProg maybe_preprocess pc: 88 op: NOP1 (159)
L1: // addr: 89 pc: 88 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 89 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fext_23752
    DeRef(_fext_23752);
    _fext_23752 = NOVALUE;
    // SubProg maybe_preprocess pc: 91 op: STARTLINE (58)

    /** preproc.e:96		if length(pp) = 0 then */
    // SubProg maybe_preprocess pc: 93 op: LENGTH (42)
    if (IS_SEQUENCE(_pp_23747)){
            _13535 = SEQ_PTR(_pp_23747)->length;
    }
    else {
        _13535 = 1;
    }
    // SubProg maybe_preprocess pc: 96 op: EQUALS_IFW_I (121)
    if (_13535 != 0)
    goto L5; // [96] 107
    // SubProg maybe_preprocess pc: 100 op: STARTLINE (58)

    /** preproc.e:97			return fname*/
    // SubProg maybe_preprocess pc: 102 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var pp_23747
    DeRefDS(_pp_23747);

// block var pp_id_23748

// block var post_fname_23769
    DeRef(_post_fname_23769);
    return _fname_23746;
    // SubProg maybe_preprocess pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 107 op: STARTLINE (58)

    /** preproc.e:100		sequence post_fname = filebase(fname) & ".pp." & fileext(fname)*/
    // SubProg maybe_preprocess pc: 109 op: PROC (27)
    RefDS(_fname_23746);
    _13537 = _16filebase(_fname_23746);
    // SubProg maybe_preprocess pc: 113 op: PROC (27)
    RefDS(_fname_23746);
    _13539 = _16fileext(_fname_23746);
    // SubProg maybe_preprocess pc: 117 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _13539;
        concat_list[1] = _13538;
        concat_list[2] = _13537;
        Concat_N((object_ptr)&_post_fname_23769, concat_list, 3);
    }
    DeRef(_13539);
    _13539 = NOVALUE;
    DeRef(_13537);
    _13537 = NOVALUE;
    // SubProg maybe_preprocess pc: 123 op: STARTLINE (58)

    /** preproc.e:101		if length(dirname(fname)) > 0 then*/
    // SubProg maybe_preprocess pc: 125 op: PROC (27)
    RefDS(_fname_23746);
    _13541 = _16dirname(_fname_23746, 0);
    // SubProg maybe_preprocess pc: 130 op: LENGTH (42)
    if (IS_SEQUENCE(_13541)){
            _13542 = SEQ_PTR(_13541)->length;
    }
    else {
        _13542 = 1;
    }
    DeRef(_13541);
    _13541 = NOVALUE;
    // SubProg maybe_preprocess pc: 133 op: GREATER_IFW_I (124)
    if (_13542 <= 0)
    goto L6; // [133] 153
    // SubProg maybe_preprocess pc: 137 op: STARTLINE (58)

    /** preproc.e:102			post_fname = dirname(fname) & SLASH & post_fname*/
    // SubProg maybe_preprocess pc: 139 op: PROC (27)
    RefDS(_fname_23746);
    _13544 = _16dirname(_fname_23746, 0);
    // SubProg maybe_preprocess pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 146 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _post_fname_23769;
        concat_list[1] = 47;
        concat_list[2] = _13544;
        Concat_N((object_ptr)&_post_fname_23769, concat_list, 3);
    }
    DeRef(_13544);
    _13544 = NOVALUE;
    // SubProg maybe_preprocess pc: 152 op: NOP1 (159)
L6: // addr: 153 pc: 152 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 153 op: STARTLINE (58)

    /** preproc.e:105		if not force_preprocessor then*/
    // SubProg maybe_preprocess pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 157 op: NOT_IFW (108)
    if (_7force_preprocessor_11408 != 0)
    goto L7; // [157] 178
    // SubProg maybe_preprocess pc: 160 op: STARTLINE (58)

    /** preproc.e:106			if not is_file_newer(fname, post_fname) then*/
    // SubProg maybe_preprocess pc: 162 op: PROC (27)
    RefDS(_fname_23746);
    RefDS(_post_fname_23769);
    _13547 = _63is_file_newer(_fname_23746, _post_fname_23769);
    // SubProg maybe_preprocess pc: 167 op: NOT_IFW (108)
    if (IS_ATOM_INT(_13547)) {
        if (_13547 != 0){
            DeRef(_13547);
            _13547 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    else {
        if (DBL_PTR(_13547)->dbl != 0.0){
            DeRef(_13547);
            _13547 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    DeRef(_13547);
    _13547 = NOVALUE;
    // SubProg maybe_preprocess pc: 170 op: STARTLINE (58)

    /** preproc.e:107				return post_fname*/
    // SubProg maybe_preprocess pc: 172 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var fname_23746
    DeRefDS(_fname_23746);

// block var pp_23747
    DeRef(_pp_23747);

// block var pp_id_23748
    _13541 = NOVALUE;
    return _post_fname_23769;
    // SubProg maybe_preprocess pc: 176 op: NOP1 (159)
L8: // addr: 177 pc: 176 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 177 op: NOP1 (159)
L7: // addr: 178 pc: 177 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 178 op: STARTLINE (58)

    /** preproc.e:112		if equal(fileext(pp[PP_COMMAND]), SHARED_LIB_EXT) then*/
    // SubProg maybe_preprocess pc: 180 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13549 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 184 op: PROC (27)
    Ref(_13549);
    _13550 = _16fileext(_13549);
    _13549 = NOVALUE;
    // SubProg maybe_preprocess pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 190 op: EQUAL (153)
    if (_13550 == _16SHARED_LIB_EXT_9832)
    _13551 = 1;
    else if (IS_ATOM_INT(_13550) && IS_ATOM_INT(_16SHARED_LIB_EXT_9832))
    _13551 = 0;
    else
    _13551 = (compare(_13550, _16SHARED_LIB_EXT_9832) == 0);
    DeRef(_13550);
    _13550 = NOVALUE;
    // SubProg maybe_preprocess pc: 194 op: IF (20)
    if (_13551 == 0)
    {
        _13551 = NOVALUE;
        goto L9; // [194] 348
    }
    else{
        _13551 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 197 op: STARTLINE (58)

    /** preproc.e:113			integer rid = pp[PP_RID]*/
    // SubProg maybe_preprocess pc: 199 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_pp_23747);
    _rid_23797 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_rid_23797))
    _rid_23797 = (object)DBL_PTR(_rid_23797)->dbl;
    // SubProg maybe_preprocess pc: 203 op: STARTLINE (58)

    /** preproc.e:114			if rid = -1 then*/
    // SubProg maybe_preprocess pc: 205 op: EQUALS_IFW_I (121)
    if (_rid_23797 != -1)
    goto LA; // [205] 307
    // SubProg maybe_preprocess pc: 209 op: STARTLINE (58)

    /** preproc.e:115				integer dll_id = open_dll(pp[PP_COMMAND])*/
    // SubProg maybe_preprocess pc: 211 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13554 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 215 op: PROC (27)
    Ref(_13554);
    _dll_id_23801 = _12open_dll(_13554);
    _13554 = NOVALUE;
    // SubProg maybe_preprocess pc: 219 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_dll_id_23801)) {
        _1 = (object)(DBL_PTR(_dll_id_23801)->dbl);
        DeRefDS(_dll_id_23801);
        _dll_id_23801 = _1;
    }
    // SubProg maybe_preprocess pc: 221 op: STARTLINE (58)

    /** preproc.e:116				if dll_id = -1 then*/
    // SubProg maybe_preprocess pc: 223 op: EQUALS_IFW_I (121)
    if (_dll_id_23801 != -1)
    goto LB; // [223] 247
    // SubProg maybe_preprocess pc: 227 op: STARTLINE (58)

    /** preproc.e:117					CompileErr(sprintf("Preprocessor shared library '%s' could not be loaded\n",*/
    // SubProg maybe_preprocess pc: 229 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13558 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 233 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13558);
    ((intptr_t*)_2)[1] = _13558;
    _13559 = MAKE_SEQ(_1);
    _13558 = NOVALUE;
    // SubProg maybe_preprocess pc: 237 op: SPRINTF (53)
    _13560 = EPrintf(-9999999, _13557, _13559);
    DeRefDS(_13559);
    _13559 = NOVALUE;
    // SubProg maybe_preprocess pc: 241 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(_13560, _21958, 1);
    _13560 = NOVALUE;
    // SubProg maybe_preprocess pc: 246 op: NOP1 (159)
LB: // addr: 247 pc: 246 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 247 op: STARTLINE (58)

    /** preproc.e:121				rid = define_c_func(dll_id, "preprocess", { E_SEQUENCE, E_SEQUENCE, E_SEQUENCE }, */
    // SubProg maybe_preprocess pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 255 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 134217732;
    ((intptr_t*)_2)[2] = 134217732;
    ((intptr_t*)_2)[3] = 134217732;
    _13562 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 263 op: PROC (27)
    RefDS(_13561);
    _rid_23797 = _12define_c_func(_dll_id_23801, _13561, _13562, 100663300);
    _13562 = NOVALUE;
    // SubProg maybe_preprocess pc: 270 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_rid_23797)) {
        _1 = (object)(DBL_PTR(_rid_23797)->dbl);
        DeRefDS(_rid_23797);
        _rid_23797 = _1;
    }
    // SubProg maybe_preprocess pc: 272 op: STARTLINE (58)

    /** preproc.e:123				if rid = -1 then*/
    // SubProg maybe_preprocess pc: 274 op: EQUALS_IFW_I (121)
    if (_rid_23797 != -1)
    goto LC; // [274] 291
    // SubProg maybe_preprocess pc: 278 op: STARTLINE (58)

    /** preproc.e:124					CompileErr("Preprocessor entry point cound not be found\n",,1)*/
    // SubProg maybe_preprocess pc: 280 op: PROC (27)
    RefDS(_13565);
    RefDS(_21958);
    _49CompileErr(_13565, _21958, 1);
    // SubProg maybe_preprocess pc: 285 op: STARTLINE (58)

    /** preproc.e:126					Cleanup(1)*/
    // SubProg maybe_preprocess pc: 287 op: PROC (27)
    _49Cleanup(1);
    // SubProg maybe_preprocess pc: 290 op: NOP1 (159)
LC: // addr: 291 pc: 290 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 291 op: STARTLINE (58)

    /** preproc.e:129				preprocessors[pp_id][PP_RID] = rid*/
    // SubProg maybe_preprocess pc: 293 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 295 op: PRIVATE_INIT_CHECK (30)
    // SubProg maybe_preprocess pc: 297 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7preprocessors_11407);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7preprocessors_11407 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pp_id_23748 + ((s1_ptr)_2)->base);
    // SubProg maybe_preprocess pc: 302 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _rid_23797;
    DeRef(_1);
    _13566 = NOVALUE;
    // SubProg maybe_preprocess pc: 306 op: NOP1 (159)
LA: // addr: 307 pc: 306 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 307 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var dll_id_23801
    // SubProg maybe_preprocess pc: 309 op: STARTLINE (58)

    /** preproc.e:132			if c_func(rid, { fname, post_fname, pp[PP_PARAMS] }) != 0 then*/
    // SubProg maybe_preprocess pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13568 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 315 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_fname_23746);
    ((intptr_t*)_2)[1] = _fname_23746;
    RefDS(_post_fname_23769);
    ((intptr_t*)_2)[2] = _post_fname_23769;
    Ref(_13568);
    ((intptr_t*)_2)[3] = _13568;
    _13569 = MAKE_SEQ(_1);
    _13568 = NOVALUE;
    // SubProg maybe_preprocess pc: 321 op: C_FUNC (133)
    _13570 = call_c(1, _rid_23797, _13569);
    DeRefDS(_13569);
    _13569 = NOVALUE;
    // SubProg maybe_preprocess pc: 326 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _13570, 0)){
        DeRef(_13570);
        _13570 = NOVALUE;
        goto LD; // [326] 343
    }
    DeRef(_13570);
    _13570 = NOVALUE;
    // SubProg maybe_preprocess pc: 330 op: STARTLINE (58)

    /** preproc.e:133				CompileErr("Preprocessor call failed\n",,1)*/
    // SubProg maybe_preprocess pc: 332 op: PROC (27)
    RefDS(_13572);
    RefDS(_21958);
    _49CompileErr(_13572, _21958, 1);
    // SubProg maybe_preprocess pc: 337 op: STARTLINE (58)

    /** preproc.e:135				Cleanup(1)*/
    // SubProg maybe_preprocess pc: 339 op: PROC (27)
    _49Cleanup(1);
    // SubProg maybe_preprocess pc: 342 op: NOP1 (159)
LD: // addr: 343 pc: 342 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 343 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var rid_23797
    // SubProg maybe_preprocess pc: 345 op: ELSE (23)
    goto LE; // [345] 520
    // SubProg maybe_preprocess pc: 347 op: NOP1 (159)
L9: // addr: 348 pc: 347 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 348 op: STARTLINE (58)

    /** preproc.e:138			sequence public_cmd_args = {pp[PP_COMMAND]}*/
    // SubProg maybe_preprocess pc: 350 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13573 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 354 op: RIGHT_BRACE_N (31)
    _0 = _public_cmd_args_23837;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13573);
    ((intptr_t*)_2)[1] = _13573;
    _public_cmd_args_23837 = MAKE_SEQ(_1);
    DeRef(_0);
    _13573 = NOVALUE;
    // SubProg maybe_preprocess pc: 358 op: STARTLINE (58)

    /** preproc.e:139			sequence cmd_args = {canonical_path(pp[PP_COMMAND],,TO_SHORT)}*/
    // SubProg maybe_preprocess pc: 360 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13575 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 366 op: PROC (27)
    Ref(_13575);
    _13576 = _16canonical_path(_13575, 0, 4);
    _13575 = NOVALUE;
    // SubProg maybe_preprocess pc: 372 op: RIGHT_BRACE_N (31)
    _0 = _cmd_args_23840;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _13576;
    _cmd_args_23840 = MAKE_SEQ(_1);
    DeRef(_0);
    _13576 = NOVALUE;
    // SubProg maybe_preprocess pc: 376 op: STARTLINE (58)

    /** preproc.e:141			if equal(fileext(pp[PP_COMMAND]), "ex") then*/
    // SubProg maybe_preprocess pc: 378 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13578 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 382 op: PROC (27)
    Ref(_13578);
    _13579 = _16fileext(_13578);
    _13578 = NOVALUE;
    // SubProg maybe_preprocess pc: 386 op: EQUAL (153)
    if (_13579 == _13580)
    _13581 = 1;
    else if (IS_ATOM_INT(_13579) && IS_ATOM_INT(_13580))
    _13581 = 0;
    else
    _13581 = (compare(_13579, _13580) == 0);
    DeRef(_13579);
    _13579 = NOVALUE;
    // SubProg maybe_preprocess pc: 390 op: IF (20)
    if (_13581 == 0)
    {
        _13581 = NOVALUE;
        goto LF; // [390] 414
    }
    else{
        _13581 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 393 op: STARTLINE (58)

    /** preproc.e:142				public_cmd_args = { "eui" } & public_cmd_args*/
    // SubProg maybe_preprocess pc: 395 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13582);
    ((intptr_t*)_2)[1] = _13582;
    _13583 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 399 op: CONCAT (15)
    Concat((object_ptr)&_public_cmd_args_23837, _13583, _public_cmd_args_23837);
    DeRefDS(_13583);
    _13583 = NOVALUE;
    DeRef(_13583);
    _13583 = NOVALUE;
    // SubProg maybe_preprocess pc: 403 op: STARTLINE (58)

    /** preproc.e:143				cmd_args = { "eui" } & cmd_args*/
    // SubProg maybe_preprocess pc: 405 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13582);
    ((intptr_t*)_2)[1] = _13582;
    _13585 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 409 op: CONCAT (15)
    Concat((object_ptr)&_cmd_args_23840, _13585, _cmd_args_23840);
    DeRefDS(_13585);
    _13585 = NOVALUE;
    DeRef(_13585);
    _13585 = NOVALUE;
    // SubProg maybe_preprocess pc: 413 op: NOP1 (159)
LF: // addr: 414 pc: 413 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 414 op: STARTLINE (58)

    /** preproc.e:146			cmd_args &= { "-i", canonical_path(fname,,TO_SHORT), "-o", canonical_path(post_fname,,TO_SHORT) }*/
    // SubProg maybe_preprocess pc: 416 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 418 op: PROC (27)
    RefDS(_fname_23746);
    _13588 = _16canonical_path(_fname_23746, 0, 4);
    // SubProg maybe_preprocess pc: 424 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 426 op: PROC (27)
    RefDS(_post_fname_23769);
    _13590 = _16canonical_path(_post_fname_23769, 0, 4);
    // SubProg maybe_preprocess pc: 432 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13587);
    ((intptr_t*)_2)[1] = _13587;
    ((intptr_t*)_2)[2] = _13588;
    RefDS(_13589);
    ((intptr_t*)_2)[3] = _13589;
    ((intptr_t*)_2)[4] = _13590;
    _13591 = MAKE_SEQ(_1);
    _13590 = NOVALUE;
    _13588 = NOVALUE;
    // SubProg maybe_preprocess pc: 439 op: CONCAT (15)
    Concat((object_ptr)&_cmd_args_23840, _cmd_args_23840, _13591);
    DeRefDS(_13591);
    _13591 = NOVALUE;
    // SubProg maybe_preprocess pc: 443 op: STARTLINE (58)

    /** preproc.e:147			public_cmd_args &= { "-i", fname, "-o", post_fname }*/
    // SubProg maybe_preprocess pc: 445 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13587);
    ((intptr_t*)_2)[1] = _13587;
    RefDS(_fname_23746);
    ((intptr_t*)_2)[2] = _fname_23746;
    RefDS(_13589);
    ((intptr_t*)_2)[3] = _13589;
    RefDS(_post_fname_23769);
    ((intptr_t*)_2)[4] = _post_fname_23769;
    _13593 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 452 op: CONCAT (15)
    Concat((object_ptr)&_public_cmd_args_23837, _public_cmd_args_23837, _13593);
    DeRefDS(_13593);
    _13593 = NOVALUE;
    // SubProg maybe_preprocess pc: 456 op: STARTLINE (58)

    /** preproc.e:148			sequence cmd = build_commandline( cmd_args ) & pp[PP_PARAMS]*/
    // SubProg maybe_preprocess pc: 458 op: PROC (27)
    RefDS(_cmd_args_23840);
    _13595 = _48build_commandline(_cmd_args_23840);
    // SubProg maybe_preprocess pc: 462 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13596 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 466 op: CONCAT (15)
    if (IS_SEQUENCE(_13595) && IS_ATOM(_13596)) {
        Ref(_13596);
        Append(&_cmd_23869, _13595, _13596);
    }
    else if (IS_ATOM(_13595) && IS_SEQUENCE(_13596)) {
        Ref(_13595);
        Prepend(&_cmd_23869, _13596, _13595);
    }
    else {
        Concat((object_ptr)&_cmd_23869, _13595, _13596);
        DeRef(_13595);
        _13595 = NOVALUE;
    }
    DeRef(_13595);
    _13595 = NOVALUE;
    _13596 = NOVALUE;
    // SubProg maybe_preprocess pc: 470 op: STARTLINE (58)

    /** preproc.e:149			sequence pcmd = build_commandline(public_cmd_args) & pp[PP_PARAMS]*/
    // SubProg maybe_preprocess pc: 472 op: PROC (27)
    RefDS(_public_cmd_args_23837);
    _13598 = _48build_commandline(_public_cmd_args_23837);
    // SubProg maybe_preprocess pc: 476 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23747);
    _13599 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 480 op: CONCAT (15)
    if (IS_SEQUENCE(_13598) && IS_ATOM(_13599)) {
        Ref(_13599);
        Append(&_pcmd_23874, _13598, _13599);
    }
    else if (IS_ATOM(_13598) && IS_SEQUENCE(_13599)) {
        Ref(_13598);
        Prepend(&_pcmd_23874, _13599, _13598);
    }
    else {
        Concat((object_ptr)&_pcmd_23874, _13598, _13599);
        DeRef(_13598);
        _13598 = NOVALUE;
    }
    DeRef(_13598);
    _13598 = NOVALUE;
    _13599 = NOVALUE;
    // SubProg maybe_preprocess pc: 484 op: STARTLINE (58)

    /** preproc.e:150			integer result = system_exec(cmd, 2)*/
    // SubProg maybe_preprocess pc: 486 op: SYSTEM_EXEC (154)
    _result_23879 = system_exec_call(_cmd_23869, 2);
    // SubProg maybe_preprocess pc: 490 op: STARTLINE (58)

    /** preproc.e:151			if result != 0 then*/
    // SubProg maybe_preprocess pc: 492 op: NOTEQ_IFW_I (122)
    if (_result_23879 == 0)
    goto L10; // [492] 517
    // SubProg maybe_preprocess pc: 496 op: STARTLINE (58)

    /** preproc.e:152				CompileErr(sprintf("Preprocessor command failed (%d): %s\n", { result, pcmd } ),,1)*/
    // SubProg maybe_preprocess pc: 498 op: RIGHT_BRACE_2 (85)
    RefDS(_pcmd_23874);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _result_23879;
    ((intptr_t *)_2)[2] = _pcmd_23874;
    _13604 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 502 op: SPRINTF (53)
    _13605 = EPrintf(-9999999, _13603, _13604);
    DeRefDS(_13604);
    _13604 = NOVALUE;
    // SubProg maybe_preprocess pc: 506 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(_13605, _21958, 1);
    _13605 = NOVALUE;
    // SubProg maybe_preprocess pc: 511 op: STARTLINE (58)

    /** preproc.e:154				Cleanup(1)*/
    // SubProg maybe_preprocess pc: 513 op: PROC (27)
    _49Cleanup(1);
    // SubProg maybe_preprocess pc: 516 op: NOP1 (159)
L10: // addr: 517 pc: 516 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 517 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var public_cmd_args_23837
    DeRef(_public_cmd_args_23837);
    _public_cmd_args_23837 = NOVALUE;

// block var cmd_args_23840
    DeRef(_cmd_args_23840);
    _cmd_args_23840 = NOVALUE;

// block var cmd_23869
    DeRef(_cmd_23869);
    _cmd_23869 = NOVALUE;

// block var pcmd_23874
    DeRef(_pcmd_23874);
    _pcmd_23874 = NOVALUE;

// block var result_23879
    // SubProg maybe_preprocess pc: 519 op: NOP1 (159)
LE: // addr: 520 pc: 519 sub: 23744 op: 159
    // SubProg maybe_preprocess pc: 520 op: STARTLINE (58)

    /** preproc.e:158		return post_fname*/
    // SubProg maybe_preprocess pc: 522 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var fname_23746
    DeRefDS(_fname_23746);

// block var pp_23747
    DeRef(_pp_23747);

// block var pp_id_23748
    _13541 = NOVALUE;
    return _post_fname_23769;
    // SubProg maybe_preprocess pc: 526 op: BADRETURNF (43)
    ;
}



// 0xCAF7DE3C
