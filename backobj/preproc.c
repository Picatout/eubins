// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _63is_file_newer(object _f1_23673, object _f2_23674)
{
    object _d1_23675 = NOVALUE;
    object _d2_23678 = NOVALUE;
    object _diff_2__tmp_at33_23687 = NOVALUE;
    object _diff_1__tmp_at33_23686 = NOVALUE;
    object _diff_inlined_diff_at_33_23685 = NOVALUE;
// skipping _13495  name type: 0
    object _13494 = NOVALUE; // 23682 13494
// skipping _13493  name type: 0
// skipping _13492  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_file_newer pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 5 op: STARTLINE (58)

    /** preproc.e:22		object d1 = file_timestamp(f1)*/
    // SubProg is_file_newer pc: 7 op: PROC (27)
    RefDS(_f1_23673);
    _0 = _d1_23675;
    _d1_23675 = _18file_timestamp(_f1_23673);
    DeRef(_0);
    // SubProg is_file_newer pc: 11 op: STARTLINE (58)

    /** preproc.e:23		object d2 = file_timestamp(f2)*/
    // SubProg is_file_newer pc: 13 op: PROC (27)
    RefDS(_f2_23674);
    _0 = _d2_23678;
    _d2_23678 = _18file_timestamp(_f2_23674);
    DeRef(_0);
    // SubProg is_file_newer pc: 17 op: STARTLINE (58)

    /** preproc.e:25		if atom(d2) then return 1 end if*/
    // SubProg is_file_newer pc: 19 op: IS_AN_ATOM (67)
    _13494 = IS_ATOM(_d2_23678);
    // SubProg is_file_newer pc: 22 op: IF (20)
    if (_13494 == 0)
    {
        _13494 = NOVALUE;
        goto L1; // [22] 30
    }
    else{
        _13494 = NOVALUE;
    }
    // SubProg is_file_newer pc: 25 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23673
    DeRefDS(_f1_23673);

// block var f2_23674
    DeRefDS(_f2_23674);

// block var d1_23675
    DeRef(_d1_23675);

// block var d2_23678
    DeRef(_d2_23678);
    return 1;
    // SubProg is_file_newer pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 23671 op: 159
    // SubProg is_file_newer pc: 30 op: STARTLINE (58)

    /** preproc.e:27		if dt:diff(d1, d2) < 0 then*/
    // SubProg is_file_newer pc: 32 op: STARTLINE (58)

    /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
    // SubProg is_file_newer pc: 34 op: PROC (27)
    Ref(_d2_23678);
    _0 = _diff_1__tmp_at33_23686;
    _diff_1__tmp_at33_23686 = _19datetimeToSeconds(_d2_23678);
    DeRef(_0);
    // SubProg is_file_newer pc: 38 op: PROC (27)
    Ref(_d1_23675);
    _0 = _diff_2__tmp_at33_23687;
    _diff_2__tmp_at33_23687 = _19datetimeToSeconds(_d1_23675);
    DeRef(_0);
    // SubProg is_file_newer pc: 42 op: MINUS (10)
    DeRef(_diff_inlined_diff_at_33_23685);
    if (IS_ATOM_INT(_diff_1__tmp_at33_23686) && IS_ATOM_INT(_diff_2__tmp_at33_23687)) {
        _diff_inlined_diff_at_33_23685 = _diff_1__tmp_at33_23686 - _diff_2__tmp_at33_23687;
        if ((object)((uintptr_t)_diff_inlined_diff_at_33_23685 +(uintptr_t) HIGH_BITS) >= 0){
            _diff_inlined_diff_at_33_23685 = NewDouble((eudouble)_diff_inlined_diff_at_33_23685);
        }
    }
    else {
        _diff_inlined_diff_at_33_23685 = binary_op(MINUS, _diff_1__tmp_at33_23686, _diff_2__tmp_at33_23687);
    }
    // SubProg is_file_newer pc: 46 op: NOP1 (159)
    // SubProg is_file_newer pc: 47 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-diff from is_file_newer @ 33

// block var diff_1__tmp_at33_23686
    DeRef(_diff_1__tmp_at33_23686);
    _diff_1__tmp_at33_23686 = NOVALUE;

// block var diff_2__tmp_at33_23687
    DeRef(_diff_2__tmp_at33_23687);
    _diff_2__tmp_at33_23687 = NOVALUE;
    // SubProg is_file_newer pc: 49 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _diff_inlined_diff_at_33_23685, 0)){
        goto L2; // [49] 60
    }
    // SubProg is_file_newer pc: 53 op: STARTLINE (58)

    /** preproc.e:28			return 1*/
    // SubProg is_file_newer pc: 55 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23673
    DeRefDS(_f1_23673);

// block var f2_23674
    DeRefDS(_f2_23674);

// block var d1_23675
    DeRef(_d1_23675);

// block var d2_23678
    DeRef(_d2_23678);
    return 1;
    // SubProg is_file_newer pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 23671 op: 159
    // SubProg is_file_newer pc: 60 op: STARTLINE (58)

    /** preproc.e:31		return 0*/
    // SubProg is_file_newer pc: 62 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23673
    DeRefDS(_f1_23673);

// block var f2_23674
    DeRefDS(_f2_23674);

// block var d1_23675
    DeRef(_d1_23675);

// block var d2_23678
    DeRef(_d2_23678);
    return 0;
    // SubProg is_file_newer pc: 66 op: BADRETURNF (43)
    ;
}


void _63add_preprocessor(object _file_ext_23691, object _command_23692, object _params_23693)
{
    object _tmp_23696 = NOVALUE;
    object _file_exts_23706 = NOVALUE;
    object _exts_23712 = NOVALUE;
// skipping _13512  name type: 0
    object _13511 = NOVALUE; // 23721 13511
    object _13510 = NOVALUE; // 23720 13510
    object _13509 = NOVALUE; // 23719 13509
    object _13508 = NOVALUE; // 23717 13508
// skipping _13507  name type: 0
    object _13506 = NOVALUE; // 23711 13506
// skipping _13505  name type: 0
// skipping _13503  name type: 0
// skipping _13502  name type: 0
    object _13501 = NOVALUE; // 23703 13501
// skipping _13500  name type: 0
// skipping _13499  name type: 0
// skipping _13498  name type: 0
    object _13496 = NOVALUE; // 23695 13496
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_preprocessor pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 3 op: STARTLINE (58)

    /** preproc.e:46		if atom(command) then*/
    // SubProg add_preprocessor pc: 5 op: IS_AN_ATOM (67)
    _13496 = 1;
    // SubProg add_preprocessor pc: 8 op: IF (20)
    if (_13496 == 0)
    {
        _13496 = NOVALUE;
        goto L1; // [8] 53
    }
    else{
        _13496 = NOVALUE;
    }
    // SubProg add_preprocessor pc: 11 op: STARTLINE (58)

    /** preproc.e:47			sequence tmp = split( file_ext, ":")*/
    // SubProg add_preprocessor pc: 13 op: PROC (27)
    RefDS(_file_ext_23691);
    RefDS(_13497);
    _0 = _tmp_23696;
    _tmp_23696 = _23split(_file_ext_23691, _13497, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 22 op: STARTLINE (58)

    /** preproc.e:48			file_ext = tmp[1]*/
    // SubProg add_preprocessor pc: 24 op: RHS_SUBS (25)
    DeRefDS(_file_ext_23691);
    _2 = (object)SEQ_PTR(_tmp_23696);
    _file_ext_23691 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_file_ext_23691);
    // SubProg add_preprocessor pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 30 op: STARTLINE (58)

    /** preproc.e:49			command = tmp[2]*/
    // SubProg add_preprocessor pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_tmp_23696);
    _command_23692 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_command_23692);
    // SubProg add_preprocessor pc: 36 op: STARTLINE (58)

    /** preproc.e:50			if length(tmp) >= 3 then*/
    // SubProg add_preprocessor pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_tmp_23696)){
            _13501 = SEQ_PTR(_tmp_23696)->length;
    }
    else {
        _13501 = 1;
    }
    // SubProg add_preprocessor pc: 41 op: GREATEREQ_IFW_I (120)
    if (_13501 < 3)
    goto L2; // [41] 52
    // SubProg add_preprocessor pc: 45 op: STARTLINE (58)

    /** preproc.e:51				params = tmp[3]*/
    // SubProg add_preprocessor pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_tmp_23696);
    _params_23693 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_params_23693);
    // SubProg add_preprocessor pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 23689 op: 159
    // SubProg add_preprocessor pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 23689 op: 159
    // SubProg add_preprocessor pc: 53 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tmp_23696
    DeRef(_tmp_23696);
    _tmp_23696 = NOVALUE;
    // SubProg add_preprocessor pc: 55 op: STARTLINE (58)

    /** preproc.e:55		sequence file_exts = split( file_ext, "," )*/
    // SubProg add_preprocessor pc: 57 op: PROC (27)
    RefDS(_file_ext_23691);
    RefDS(_13504);
    _0 = _file_exts_23706;
    _file_exts_23706 = _23split(_file_ext_23691, _13504, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 64 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 66 op: STARTLINE (58)

    /** preproc.e:57		if atom(params) then*/
    // SubProg add_preprocessor pc: 68 op: IS_AN_ATOM (67)
    _13506 = IS_ATOM(_params_23693);
    // SubProg add_preprocessor pc: 71 op: IF (20)
    if (_13506 == 0)
    {
        _13506 = NOVALUE;
        goto L3; // [71] 80
    }
    else{
        _13506 = NOVALUE;
    }
    // SubProg add_preprocessor pc: 74 op: STARTLINE (58)

    /** preproc.e:58			params = ""*/
    // SubProg add_preprocessor pc: 76 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_params_23693);
    _params_23693 = _5;
    // SubProg add_preprocessor pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 23689 op: 159
    // SubProg add_preprocessor pc: 80 op: STARTLINE (58)

    /** preproc.e:61		sequence exts = split(file_ext, ",")*/
    // SubProg add_preprocessor pc: 82 op: PROC (27)
    RefDS(_file_ext_23691);
    RefDS(_13504);
    _0 = _exts_23712;
    _exts_23712 = _23split(_file_ext_23691, _13504, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 91 op: STARTLINE (58)

    /** preproc.e:62		for i = 1 to length(exts) do*/
    // SubProg add_preprocessor pc: 93 op: LENGTH (42)
    if (IS_SEQUENCE(_exts_23712)){
            _13508 = SEQ_PTR(_exts_23712)->length;
    }
    else {
        _13508 = 1;
    }
    // SubProg add_preprocessor pc: 96 op: FOR_I (125)
    {
        object _i_23716;
        _i_23716 = 1;
L4: // addr: 103 pc: 96 sub: 23689 op: 125
        if (_i_23716 > _13508){
            goto L5; // [96] 135
        }
        // SubProg add_preprocessor pc: 103 op: STARTLINE (58)

        /** preproc.e:63			preprocessors &= { { exts[i], command, params, -1 } }*/
        // SubProg add_preprocessor pc: 105 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_preprocessor pc: 107 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exts_23712);
        _13509 = (object)*(((s1_ptr)_2)->base + _i_23716);
        // SubProg add_preprocessor pc: 111 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_13509);
        ((intptr_t*)_2)[1] = _13509;
        Ref(_command_23692);
        ((intptr_t*)_2)[2] = _command_23692;
        Ref(_params_23693);
        ((intptr_t*)_2)[3] = _params_23693;
        ((intptr_t*)_2)[4] = -1;
        _13510 = MAKE_SEQ(_1);
        _13509 = NOVALUE;
        // SubProg add_preprocessor pc: 118 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _13510;
        _13511 = MAKE_SEQ(_1);
        _13510 = NOVALUE;
        // SubProg add_preprocessor pc: 122 op: CONCAT (15)
        Concat((object_ptr)&_35preprocessors_14173, _35preprocessors_14173, _13511);
        DeRefDS(_13511);
        _13511 = NOVALUE;
        // SubProg add_preprocessor pc: 126 op: SEQUENCE_CHECK (97)
        // SubProg add_preprocessor pc: 128 op: STARTLINE (58)

        /** preproc.e:64		end for*/
        // SubProg add_preprocessor pc: 130 op: ENDFOR_INT_UP1 (54)
        _i_23716 = _i_23716 + 1;
        goto L4; // [130] 103
L5: // addr: 135 pc: 130 sub: 23689 op: 54
        ;
    }
    // SubProg add_preprocessor pc: 135 op: STARTLINE (58)

    /** preproc.e:65	end procedure */
    // SubProg add_preprocessor pc: 137 op: RETURNP (29)

// Exiting block BLOCK: add_preprocessor

// block var file_ext_23691
    DeRefDS(_file_ext_23691);

// block var command_23692
    DeRef(_command_23692);

// block var params_23693
    DeRef(_params_23693);

// block var file_exts_23706
    DeRef(_file_exts_23706);

// block var exts_23712
    DeRef(_exts_23712);
    return;
    // SubProg add_preprocessor pc: 140 op: BADRETURNF (43)
    ;
}


object _63maybe_preprocess(object _fname_23725)
{
    object _pp_23726 = NOVALUE;
    object _pp_id_23727 = NOVALUE;
    object _fext_23731 = NOVALUE;
    object _post_fname_23748 = NOVALUE;
    object _rid_23776 = NOVALUE;
    object _dll_id_23780 = NOVALUE;
    object _public_cmd_args_23816 = NOVALUE;
    object _cmd_args_23819 = NOVALUE;
    object _cmd_23848 = NOVALUE;
    object _pcmd_23853 = NOVALUE;
    object _result_23858 = NOVALUE;
    object _13590 = NOVALUE; // 23865 13590
    object _13589 = NOVALUE; // 23864 13589
// skipping _13587  name type: 0
// skipping _13586  name type: 0
// skipping _13585  name type: 0
    object _13584 = NOVALUE; // 23856 13584
    object _13583 = NOVALUE; // 23855 13583
// skipping _13582  name type: 0
    object _13581 = NOVALUE; // 23851 13581
    object _13580 = NOVALUE; // 23850 13580
// skipping _13579  name type: 0
    object _13578 = NOVALUE; // 23846 13578
// skipping _13577  name type: 0
    object _13576 = NOVALUE; // 23844 13576
    object _13575 = NOVALUE; // 23843 13575
    object _13573 = NOVALUE; // 23839 13573
// skipping _13571  name type: 0
    object _13570 = NOVALUE; // 23834 13570
// skipping _13569  name type: 0
    object _13568 = NOVALUE; // 23832 13568
    object _13566 = NOVALUE; // 23830 13566
    object _13564 = NOVALUE; // 23828 13564
    object _13563 = NOVALUE; // 23827 13563
// skipping _13562  name type: 0
    object _13561 = NOVALUE; // 23823 13561
    object _13560 = NOVALUE; // 23821 13560
// skipping _13559  name type: 0
    object _13558 = NOVALUE; // 23817 13558
// skipping _13556  name type: 0
    object _13555 = NOVALUE; // 23810 13555
    object _13554 = NOVALUE; // 23809 13554
    object _13553 = NOVALUE; // 23808 13553
// skipping _13552  name type: 0
    object _13551 = NOVALUE; // 23805 13551
// skipping _13549  name type: 0
// skipping _13548  name type: 0
    object _13547 = NOVALUE; // 23796 13547
    object _13545 = NOVALUE; // 23790 13545
    object _13544 = NOVALUE; // 23789 13544
    object _13543 = NOVALUE; // 23788 13543
// skipping _13541  name type: 0
// skipping _13540  name type: 0
    object _13539 = NOVALUE; // 23782 13539
// skipping _13538  name type: 0
// skipping _13537  name type: 0
    object _13536 = NOVALUE; // 23775 13536
    object _13535 = NOVALUE; // 23773 13535
    object _13534 = NOVALUE; // 23772 13534
// skipping _13533  name type: 0
    object _13532 = NOVALUE; // 23768 13532
// skipping _13531  name type: 0
// skipping _13530  name type: 0
    object _13529 = NOVALUE; // 23761 13529
// skipping _13528  name type: 0
    object _13527 = NOVALUE; // 23758 13527
    object _13526 = NOVALUE; // 23757 13526
// skipping _13525  name type: 0
    object _13524 = NOVALUE; // 23753 13524
    object _13522 = NOVALUE; // 23750 13522
// skipping _13521  name type: 0
    object _13520 = NOVALUE; // 23746 13520
// skipping _13519  name type: 0
    object _13518 = NOVALUE; // 23742 13518
    object _13517 = NOVALUE; // 23741 13517
    object _13516 = NOVALUE; // 23740 13516
    object _13515 = NOVALUE; // 23737 13515
// skipping _13514  name type: 0
    object _13513 = NOVALUE; // 23730 13513
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg maybe_preprocess pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 3 op: STARTLINE (58)

    /** preproc.e:81		sequence pp = {}*/
    // SubProg maybe_preprocess pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_pp_23726);
    _pp_23726 = _5;
    // SubProg maybe_preprocess pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 10 op: STARTLINE (58)

    /** preproc.e:84		if length(preprocessors) then*/
    // SubProg maybe_preprocess pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_35preprocessors_14173)){
            _13513 = SEQ_PTR(_35preprocessors_14173)->length;
    }
    else {
        _13513 = 1;
    }
    // SubProg maybe_preprocess pc: 17 op: IF (20)
    if (_13513 == 0)
    {
        _13513 = NOVALUE;
        goto L1; // [17] 89
    }
    else{
        _13513 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 20 op: STARTLINE (58)

    /** preproc.e:85			sequence fext = fileext(fname)*/
    // SubProg maybe_preprocess pc: 22 op: PROC (27)
    RefDS(_fname_23725);
    _0 = _fext_23731;
    _fext_23731 = _18fileext(_fname_23725);
    DeRef(_0);
    // SubProg maybe_preprocess pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 28 op: STARTLINE (58)

    /** preproc.e:87			for i = 1 to length(preprocessors) do*/
    // SubProg maybe_preprocess pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_35preprocessors_14173)){
            _13515 = SEQ_PTR(_35preprocessors_14173)->length;
    }
    else {
        _13515 = 1;
    }
    // SubProg maybe_preprocess pc: 35 op: FOR_I (125)
    {
        object _i_23735;
        _i_23735 = 1;
L2: // addr: 42 pc: 35 sub: 23723 op: 125
        if (_i_23735 > _13515){
            goto L3; // [35] 88
        }
        // SubProg maybe_preprocess pc: 42 op: STARTLINE (58)

        /** preproc.e:88				if equal(fext, preprocessors[i][1]) then*/
        // SubProg maybe_preprocess pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg maybe_preprocess pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35preprocessors_14173);
        _13516 = (object)*(((s1_ptr)_2)->base + _i_23735);
        // SubProg maybe_preprocess pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13516);
        _13517 = (object)*(((s1_ptr)_2)->base + 1);
        _13516 = NOVALUE;
        // SubProg maybe_preprocess pc: 54 op: EQUAL (153)
        if (_fext_23731 == _13517)
        _13518 = 1;
        else if (IS_ATOM_INT(_fext_23731) && IS_ATOM_INT(_13517))
        _13518 = 0;
        else
        _13518 = (compare(_fext_23731, _13517) == 0);
        _13517 = NOVALUE;
        // SubProg maybe_preprocess pc: 58 op: IF (20)
        if (_13518 == 0)
        {
            _13518 = NOVALUE;
            goto L4; // [58] 81
        }
        else{
            _13518 = NOVALUE;
        }
        // SubProg maybe_preprocess pc: 61 op: STARTLINE (58)

        /** preproc.e:89					pp_id = i*/
        // SubProg maybe_preprocess pc: 63 op: ASSIGN_I (113)
        _pp_id_23727 = _i_23735;
        // SubProg maybe_preprocess pc: 66 op: STARTLINE (58)

        /** preproc.e:90					pp = preprocessors[pp_id]*/
        // SubProg maybe_preprocess pc: 68 op: GLOBAL_INIT_CHECK (109)
        // SubProg maybe_preprocess pc: 70 op: RHS_SUBS_CHECK (92)
        DeRef(_pp_23726);
        _2 = (object)SEQ_PTR(_35preprocessors_14173);
        _pp_23726 = (object)*(((s1_ptr)_2)->base + _pp_id_23727);
        RefDS(_pp_23726);
        // SubProg maybe_preprocess pc: 74 op: SEQUENCE_CHECK (97)
        // SubProg maybe_preprocess pc: 76 op: STARTLINE (58)

        /** preproc.e:91					exit*/
        // SubProg maybe_preprocess pc: 78 op: EXIT (61)
        goto L3; // [78] 88
        // SubProg maybe_preprocess pc: 80 op: NOP1 (159)
L4: // addr: 81 pc: 80 sub: 23723 op: 159
        // SubProg maybe_preprocess pc: 81 op: STARTLINE (58)

        /** preproc.e:93			end for*/
        // SubProg maybe_preprocess pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_23735 = _i_23735 + 1;
        goto L2; // [83] 42
L3: // addr: 88 pc: 83 sub: 23723 op: 54
        ;
    }
    // SubProg maybe_preprocess pc: 88 op: NOP1 (159)
L1: // addr: 89 pc: 88 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 89 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fext_23731
    DeRef(_fext_23731);
    _fext_23731 = NOVALUE;
    // SubProg maybe_preprocess pc: 91 op: STARTLINE (58)

    /** preproc.e:96		if length(pp) = 0 then */
    // SubProg maybe_preprocess pc: 93 op: LENGTH (42)
    if (IS_SEQUENCE(_pp_23726)){
            _13520 = SEQ_PTR(_pp_23726)->length;
    }
    else {
        _13520 = 1;
    }
    // SubProg maybe_preprocess pc: 96 op: EQUALS_IFW_I (121)
    if (_13520 != 0)
    goto L5; // [96] 107
    // SubProg maybe_preprocess pc: 100 op: STARTLINE (58)

    /** preproc.e:97			return fname*/
    // SubProg maybe_preprocess pc: 102 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var pp_23726
    DeRefDS(_pp_23726);

// block var pp_id_23727

// block var post_fname_23748
    DeRef(_post_fname_23748);
    return _fname_23725;
    // SubProg maybe_preprocess pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 107 op: STARTLINE (58)

    /** preproc.e:100		sequence post_fname = filebase(fname) & ".pp." & fileext(fname)*/
    // SubProg maybe_preprocess pc: 109 op: PROC (27)
    RefDS(_fname_23725);
    _13522 = _18filebase(_fname_23725);
    // SubProg maybe_preprocess pc: 113 op: PROC (27)
    RefDS(_fname_23725);
    _13524 = _18fileext(_fname_23725);
    // SubProg maybe_preprocess pc: 117 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _13524;
        concat_list[1] = _13523;
        concat_list[2] = _13522;
        Concat_N((object_ptr)&_post_fname_23748, concat_list, 3);
    }
    DeRef(_13524);
    _13524 = NOVALUE;
    DeRef(_13522);
    _13522 = NOVALUE;
    // SubProg maybe_preprocess pc: 123 op: STARTLINE (58)

    /** preproc.e:101		if length(dirname(fname)) > 0 then*/
    // SubProg maybe_preprocess pc: 125 op: PROC (27)
    RefDS(_fname_23725);
    _13526 = _18dirname(_fname_23725, 0);
    // SubProg maybe_preprocess pc: 130 op: LENGTH (42)
    if (IS_SEQUENCE(_13526)){
            _13527 = SEQ_PTR(_13526)->length;
    }
    else {
        _13527 = 1;
    }
    DeRef(_13526);
    _13526 = NOVALUE;
    // SubProg maybe_preprocess pc: 133 op: GREATER_IFW_I (124)
    if (_13527 <= 0)
    goto L6; // [133] 153
    // SubProg maybe_preprocess pc: 137 op: STARTLINE (58)

    /** preproc.e:102			post_fname = dirname(fname) & SLASH & post_fname*/
    // SubProg maybe_preprocess pc: 139 op: PROC (27)
    RefDS(_fname_23725);
    _13529 = _18dirname(_fname_23725, 0);
    // SubProg maybe_preprocess pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 146 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _post_fname_23748;
        concat_list[1] = 47;
        concat_list[2] = _13529;
        Concat_N((object_ptr)&_post_fname_23748, concat_list, 3);
    }
    DeRef(_13529);
    _13529 = NOVALUE;
    // SubProg maybe_preprocess pc: 152 op: NOP1 (159)
L6: // addr: 153 pc: 152 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 153 op: STARTLINE (58)

    /** preproc.e:105		if not force_preprocessor then*/
    // SubProg maybe_preprocess pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 157 op: NOT_IFW (108)
    if (_35force_preprocessor_14174 != 0)
    goto L7; // [157] 178
    // SubProg maybe_preprocess pc: 160 op: STARTLINE (58)

    /** preproc.e:106			if not is_file_newer(fname, post_fname) then*/
    // SubProg maybe_preprocess pc: 162 op: PROC (27)
    RefDS(_fname_23725);
    RefDS(_post_fname_23748);
    _13532 = _63is_file_newer(_fname_23725, _post_fname_23748);
    // SubProg maybe_preprocess pc: 167 op: NOT_IFW (108)
    if (IS_ATOM_INT(_13532)) {
        if (_13532 != 0){
            DeRef(_13532);
            _13532 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    else {
        if (DBL_PTR(_13532)->dbl != 0.0){
            DeRef(_13532);
            _13532 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    DeRef(_13532);
    _13532 = NOVALUE;
    // SubProg maybe_preprocess pc: 170 op: STARTLINE (58)

    /** preproc.e:107				return post_fname*/
    // SubProg maybe_preprocess pc: 172 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var fname_23725
    DeRefDS(_fname_23725);

// block var pp_23726
    DeRef(_pp_23726);

// block var pp_id_23727
    _13526 = NOVALUE;
    return _post_fname_23748;
    // SubProg maybe_preprocess pc: 176 op: NOP1 (159)
L8: // addr: 177 pc: 176 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 177 op: NOP1 (159)
L7: // addr: 178 pc: 177 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 178 op: STARTLINE (58)

    /** preproc.e:112		if equal(fileext(pp[PP_COMMAND]), SHARED_LIB_EXT) then*/
    // SubProg maybe_preprocess pc: 180 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13534 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 184 op: PROC (27)
    Ref(_13534);
    _13535 = _18fileext(_13534);
    _13534 = NOVALUE;
    // SubProg maybe_preprocess pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 190 op: EQUAL (153)
    if (_13535 == _18SHARED_LIB_EXT_7158)
    _13536 = 1;
    else if (IS_ATOM_INT(_13535) && IS_ATOM_INT(_18SHARED_LIB_EXT_7158))
    _13536 = 0;
    else
    _13536 = (compare(_13535, _18SHARED_LIB_EXT_7158) == 0);
    DeRef(_13535);
    _13535 = NOVALUE;
    // SubProg maybe_preprocess pc: 194 op: IF (20)
    if (_13536 == 0)
    {
        _13536 = NOVALUE;
        goto L9; // [194] 348
    }
    else{
        _13536 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 197 op: STARTLINE (58)

    /** preproc.e:113			integer rid = pp[PP_RID]*/
    // SubProg maybe_preprocess pc: 199 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_pp_23726);
    _rid_23776 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_rid_23776))
    _rid_23776 = (object)DBL_PTR(_rid_23776)->dbl;
    // SubProg maybe_preprocess pc: 203 op: STARTLINE (58)

    /** preproc.e:114			if rid = -1 then*/
    // SubProg maybe_preprocess pc: 205 op: EQUALS_IFW_I (121)
    if (_rid_23776 != -1)
    goto LA; // [205] 307
    // SubProg maybe_preprocess pc: 209 op: STARTLINE (58)

    /** preproc.e:115				integer dll_id = open_dll(pp[PP_COMMAND])*/
    // SubProg maybe_preprocess pc: 211 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13539 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 215 op: PROC (27)
    Ref(_13539);
    _dll_id_23780 = _6open_dll(_13539);
    _13539 = NOVALUE;
    // SubProg maybe_preprocess pc: 219 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_dll_id_23780)) {
        _1 = (object)(DBL_PTR(_dll_id_23780)->dbl);
        DeRefDS(_dll_id_23780);
        _dll_id_23780 = _1;
    }
    // SubProg maybe_preprocess pc: 221 op: STARTLINE (58)

    /** preproc.e:116				if dll_id = -1 then*/
    // SubProg maybe_preprocess pc: 223 op: EQUALS_IFW_I (121)
    if (_dll_id_23780 != -1)
    goto LB; // [223] 247
    // SubProg maybe_preprocess pc: 227 op: STARTLINE (58)

    /** preproc.e:117					CompileErr(sprintf("Preprocessor shared library '%s' could not be loaded\n",*/
    // SubProg maybe_preprocess pc: 229 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13543 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 233 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13543);
    ((intptr_t*)_2)[1] = _13543;
    _13544 = MAKE_SEQ(_1);
    _13543 = NOVALUE;
    // SubProg maybe_preprocess pc: 237 op: SPRINTF (53)
    _13545 = EPrintf(-9999999, _13542, _13544);
    DeRefDS(_13544);
    _13544 = NOVALUE;
    // SubProg maybe_preprocess pc: 241 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(_13545, _21936, 1);
    _13545 = NOVALUE;
    // SubProg maybe_preprocess pc: 246 op: NOP1 (159)
LB: // addr: 247 pc: 246 sub: 23723 op: 159
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
    _13547 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 263 op: PROC (27)
    RefDS(_13546);
    _rid_23776 = _6define_c_func(_dll_id_23780, _13546, _13547, 100663300);
    _13547 = NOVALUE;
    // SubProg maybe_preprocess pc: 270 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_rid_23776)) {
        _1 = (object)(DBL_PTR(_rid_23776)->dbl);
        DeRefDS(_rid_23776);
        _rid_23776 = _1;
    }
    // SubProg maybe_preprocess pc: 272 op: STARTLINE (58)

    /** preproc.e:123				if rid = -1 then*/
    // SubProg maybe_preprocess pc: 274 op: EQUALS_IFW_I (121)
    if (_rid_23776 != -1)
    goto LC; // [274] 291
    // SubProg maybe_preprocess pc: 278 op: STARTLINE (58)

    /** preproc.e:124					CompileErr("Preprocessor entry point cound not be found\n",,1)*/
    // SubProg maybe_preprocess pc: 280 op: PROC (27)
    RefDS(_13550);
    RefDS(_21936);
    _49CompileErr(_13550, _21936, 1);
    // SubProg maybe_preprocess pc: 285 op: STARTLINE (58)

    /** preproc.e:126					Cleanup(1)*/
    // SubProg maybe_preprocess pc: 287 op: PROC (27)
    _49Cleanup(1);
    // SubProg maybe_preprocess pc: 290 op: NOP1 (159)
LC: // addr: 291 pc: 290 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 291 op: STARTLINE (58)

    /** preproc.e:129				preprocessors[pp_id][PP_RID] = rid*/
    // SubProg maybe_preprocess pc: 293 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 295 op: PRIVATE_INIT_CHECK (30)
    // SubProg maybe_preprocess pc: 297 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35preprocessors_14173);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35preprocessors_14173 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pp_id_23727 + ((s1_ptr)_2)->base);
    // SubProg maybe_preprocess pc: 302 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _rid_23776;
    DeRef(_1);
    _13551 = NOVALUE;
    // SubProg maybe_preprocess pc: 306 op: NOP1 (159)
LA: // addr: 307 pc: 306 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 307 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var dll_id_23780
    // SubProg maybe_preprocess pc: 309 op: STARTLINE (58)

    /** preproc.e:132			if c_func(rid, { fname, post_fname, pp[PP_PARAMS] }) != 0 then*/
    // SubProg maybe_preprocess pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13553 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 315 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_fname_23725);
    ((intptr_t*)_2)[1] = _fname_23725;
    RefDS(_post_fname_23748);
    ((intptr_t*)_2)[2] = _post_fname_23748;
    Ref(_13553);
    ((intptr_t*)_2)[3] = _13553;
    _13554 = MAKE_SEQ(_1);
    _13553 = NOVALUE;
    // SubProg maybe_preprocess pc: 321 op: C_FUNC (133)
    _13555 = call_c(1, _rid_23776, _13554);
    DeRefDS(_13554);
    _13554 = NOVALUE;
    // SubProg maybe_preprocess pc: 326 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _13555, 0)){
        DeRef(_13555);
        _13555 = NOVALUE;
        goto LD; // [326] 343
    }
    DeRef(_13555);
    _13555 = NOVALUE;
    // SubProg maybe_preprocess pc: 330 op: STARTLINE (58)

    /** preproc.e:133				CompileErr("Preprocessor call failed\n",,1)*/
    // SubProg maybe_preprocess pc: 332 op: PROC (27)
    RefDS(_13557);
    RefDS(_21936);
    _49CompileErr(_13557, _21936, 1);
    // SubProg maybe_preprocess pc: 337 op: STARTLINE (58)

    /** preproc.e:135				Cleanup(1)*/
    // SubProg maybe_preprocess pc: 339 op: PROC (27)
    _49Cleanup(1);
    // SubProg maybe_preprocess pc: 342 op: NOP1 (159)
LD: // addr: 343 pc: 342 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 343 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var rid_23776
    // SubProg maybe_preprocess pc: 345 op: ELSE (23)
    goto LE; // [345] 520
    // SubProg maybe_preprocess pc: 347 op: NOP1 (159)
L9: // addr: 348 pc: 347 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 348 op: STARTLINE (58)

    /** preproc.e:138			sequence public_cmd_args = {pp[PP_COMMAND]}*/
    // SubProg maybe_preprocess pc: 350 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13558 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 354 op: RIGHT_BRACE_N (31)
    _0 = _public_cmd_args_23816;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13558);
    ((intptr_t*)_2)[1] = _13558;
    _public_cmd_args_23816 = MAKE_SEQ(_1);
    DeRef(_0);
    _13558 = NOVALUE;
    // SubProg maybe_preprocess pc: 358 op: STARTLINE (58)

    /** preproc.e:139			sequence cmd_args = {canonical_path(pp[PP_COMMAND],,TO_SHORT)}*/
    // SubProg maybe_preprocess pc: 360 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13560 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 366 op: PROC (27)
    Ref(_13560);
    _13561 = _18canonical_path(_13560, 0, 4);
    _13560 = NOVALUE;
    // SubProg maybe_preprocess pc: 372 op: RIGHT_BRACE_N (31)
    _0 = _cmd_args_23819;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _13561;
    _cmd_args_23819 = MAKE_SEQ(_1);
    DeRef(_0);
    _13561 = NOVALUE;
    // SubProg maybe_preprocess pc: 376 op: STARTLINE (58)

    /** preproc.e:141			if equal(fileext(pp[PP_COMMAND]), "ex") then*/
    // SubProg maybe_preprocess pc: 378 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13563 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 382 op: PROC (27)
    Ref(_13563);
    _13564 = _18fileext(_13563);
    _13563 = NOVALUE;
    // SubProg maybe_preprocess pc: 386 op: EQUAL (153)
    if (_13564 == _13565)
    _13566 = 1;
    else if (IS_ATOM_INT(_13564) && IS_ATOM_INT(_13565))
    _13566 = 0;
    else
    _13566 = (compare(_13564, _13565) == 0);
    DeRef(_13564);
    _13564 = NOVALUE;
    // SubProg maybe_preprocess pc: 390 op: IF (20)
    if (_13566 == 0)
    {
        _13566 = NOVALUE;
        goto LF; // [390] 414
    }
    else{
        _13566 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 393 op: STARTLINE (58)

    /** preproc.e:142				public_cmd_args = { "eui" } & public_cmd_args*/
    // SubProg maybe_preprocess pc: 395 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13567);
    ((intptr_t*)_2)[1] = _13567;
    _13568 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 399 op: CONCAT (15)
    Concat((object_ptr)&_public_cmd_args_23816, _13568, _public_cmd_args_23816);
    DeRefDS(_13568);
    _13568 = NOVALUE;
    DeRef(_13568);
    _13568 = NOVALUE;
    // SubProg maybe_preprocess pc: 403 op: STARTLINE (58)

    /** preproc.e:143				cmd_args = { "eui" } & cmd_args*/
    // SubProg maybe_preprocess pc: 405 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13567);
    ((intptr_t*)_2)[1] = _13567;
    _13570 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 409 op: CONCAT (15)
    Concat((object_ptr)&_cmd_args_23819, _13570, _cmd_args_23819);
    DeRefDS(_13570);
    _13570 = NOVALUE;
    DeRef(_13570);
    _13570 = NOVALUE;
    // SubProg maybe_preprocess pc: 413 op: NOP1 (159)
LF: // addr: 414 pc: 413 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 414 op: STARTLINE (58)

    /** preproc.e:146			cmd_args &= { "-i", canonical_path(fname,,TO_SHORT), "-o", canonical_path(post_fname,,TO_SHORT) }*/
    // SubProg maybe_preprocess pc: 416 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 418 op: PROC (27)
    RefDS(_fname_23725);
    _13573 = _18canonical_path(_fname_23725, 0, 4);
    // SubProg maybe_preprocess pc: 424 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 426 op: PROC (27)
    RefDS(_post_fname_23748);
    _13575 = _18canonical_path(_post_fname_23748, 0, 4);
    // SubProg maybe_preprocess pc: 432 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13572);
    ((intptr_t*)_2)[1] = _13572;
    ((intptr_t*)_2)[2] = _13573;
    RefDS(_13574);
    ((intptr_t*)_2)[3] = _13574;
    ((intptr_t*)_2)[4] = _13575;
    _13576 = MAKE_SEQ(_1);
    _13575 = NOVALUE;
    _13573 = NOVALUE;
    // SubProg maybe_preprocess pc: 439 op: CONCAT (15)
    Concat((object_ptr)&_cmd_args_23819, _cmd_args_23819, _13576);
    DeRefDS(_13576);
    _13576 = NOVALUE;
    // SubProg maybe_preprocess pc: 443 op: STARTLINE (58)

    /** preproc.e:147			public_cmd_args &= { "-i", fname, "-o", post_fname }*/
    // SubProg maybe_preprocess pc: 445 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13572);
    ((intptr_t*)_2)[1] = _13572;
    RefDS(_fname_23725);
    ((intptr_t*)_2)[2] = _fname_23725;
    RefDS(_13574);
    ((intptr_t*)_2)[3] = _13574;
    RefDS(_post_fname_23748);
    ((intptr_t*)_2)[4] = _post_fname_23748;
    _13578 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 452 op: CONCAT (15)
    Concat((object_ptr)&_public_cmd_args_23816, _public_cmd_args_23816, _13578);
    DeRefDS(_13578);
    _13578 = NOVALUE;
    // SubProg maybe_preprocess pc: 456 op: STARTLINE (58)

    /** preproc.e:148			sequence cmd = build_commandline( cmd_args ) & pp[PP_PARAMS]*/
    // SubProg maybe_preprocess pc: 458 op: PROC (27)
    RefDS(_cmd_args_23819);
    _13580 = _48build_commandline(_cmd_args_23819);
    // SubProg maybe_preprocess pc: 462 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13581 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 466 op: CONCAT (15)
    if (IS_SEQUENCE(_13580) && IS_ATOM(_13581)) {
        Ref(_13581);
        Append(&_cmd_23848, _13580, _13581);
    }
    else if (IS_ATOM(_13580) && IS_SEQUENCE(_13581)) {
        Ref(_13580);
        Prepend(&_cmd_23848, _13581, _13580);
    }
    else {
        Concat((object_ptr)&_cmd_23848, _13580, _13581);
        DeRef(_13580);
        _13580 = NOVALUE;
    }
    DeRef(_13580);
    _13580 = NOVALUE;
    _13581 = NOVALUE;
    // SubProg maybe_preprocess pc: 470 op: STARTLINE (58)

    /** preproc.e:149			sequence pcmd = build_commandline(public_cmd_args) & pp[PP_PARAMS]*/
    // SubProg maybe_preprocess pc: 472 op: PROC (27)
    RefDS(_public_cmd_args_23816);
    _13583 = _48build_commandline(_public_cmd_args_23816);
    // SubProg maybe_preprocess pc: 476 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23726);
    _13584 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 480 op: CONCAT (15)
    if (IS_SEQUENCE(_13583) && IS_ATOM(_13584)) {
        Ref(_13584);
        Append(&_pcmd_23853, _13583, _13584);
    }
    else if (IS_ATOM(_13583) && IS_SEQUENCE(_13584)) {
        Ref(_13583);
        Prepend(&_pcmd_23853, _13584, _13583);
    }
    else {
        Concat((object_ptr)&_pcmd_23853, _13583, _13584);
        DeRef(_13583);
        _13583 = NOVALUE;
    }
    DeRef(_13583);
    _13583 = NOVALUE;
    _13584 = NOVALUE;
    // SubProg maybe_preprocess pc: 484 op: STARTLINE (58)

    /** preproc.e:150			integer result = system_exec(cmd, 2)*/
    // SubProg maybe_preprocess pc: 486 op: SYSTEM_EXEC (154)
    _result_23858 = system_exec_call(_cmd_23848, 2);
    // SubProg maybe_preprocess pc: 490 op: STARTLINE (58)

    /** preproc.e:151			if result != 0 then*/
    // SubProg maybe_preprocess pc: 492 op: NOTEQ_IFW_I (122)
    if (_result_23858 == 0)
    goto L10; // [492] 517
    // SubProg maybe_preprocess pc: 496 op: STARTLINE (58)

    /** preproc.e:152				CompileErr(sprintf("Preprocessor command failed (%d): %s\n", { result, pcmd } ),,1)*/
    // SubProg maybe_preprocess pc: 498 op: RIGHT_BRACE_2 (85)
    RefDS(_pcmd_23853);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _result_23858;
    ((intptr_t *)_2)[2] = _pcmd_23853;
    _13589 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 502 op: SPRINTF (53)
    _13590 = EPrintf(-9999999, _13588, _13589);
    DeRefDS(_13589);
    _13589 = NOVALUE;
    // SubProg maybe_preprocess pc: 506 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(_13590, _21936, 1);
    _13590 = NOVALUE;
    // SubProg maybe_preprocess pc: 511 op: STARTLINE (58)

    /** preproc.e:154				Cleanup(1)*/
    // SubProg maybe_preprocess pc: 513 op: PROC (27)
    _49Cleanup(1);
    // SubProg maybe_preprocess pc: 516 op: NOP1 (159)
L10: // addr: 517 pc: 516 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 517 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var public_cmd_args_23816
    DeRef(_public_cmd_args_23816);
    _public_cmd_args_23816 = NOVALUE;

// block var cmd_args_23819
    DeRef(_cmd_args_23819);
    _cmd_args_23819 = NOVALUE;

// block var cmd_23848
    DeRef(_cmd_23848);
    _cmd_23848 = NOVALUE;

// block var pcmd_23853
    DeRef(_pcmd_23853);
    _pcmd_23853 = NOVALUE;

// block var result_23858
    // SubProg maybe_preprocess pc: 519 op: NOP1 (159)
LE: // addr: 520 pc: 519 sub: 23723 op: 159
    // SubProg maybe_preprocess pc: 520 op: STARTLINE (58)

    /** preproc.e:158		return post_fname*/
    // SubProg maybe_preprocess pc: 522 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var fname_23725
    DeRefDS(_fname_23725);

// block var pp_23726
    DeRef(_pp_23726);

// block var pp_id_23727
    _13526 = NOVALUE;
    return _post_fname_23748;
    // SubProg maybe_preprocess pc: 526 op: BADRETURNF (43)
    ;
}



// 0x6FEA93FA
