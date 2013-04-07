// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _64is_file_newer(object _f1_23670, object _f2_23671)
{
    object _d1_23672 = NOVALUE;
    object _d2_23675 = NOVALUE;
    object _diff_2__tmp_at33_23684 = NOVALUE;
    object _diff_1__tmp_at33_23683 = NOVALUE;
    object _diff_inlined_diff_at_33_23682 = NOVALUE;
// skipping _13491  name type: 0
    object _13490 = NOVALUE; // 23679 13490
// skipping _13489  name type: 0
// skipping _13488  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_file_newer pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 5 op: STARTLINE (58)

    /** preproc.e:22		object d1 = file_timestamp(f1)*/
    // SubProg is_file_newer pc: 7 op: PROC (27)
    RefDS(_f1_23670);
    _0 = _d1_23672;
    _d1_23672 = _20file_timestamp(_f1_23670);
    DeRef(_0);
    // SubProg is_file_newer pc: 11 op: STARTLINE (58)

    /** preproc.e:23		object d2 = file_timestamp(f2)*/
    // SubProg is_file_newer pc: 13 op: PROC (27)
    RefDS(_f2_23671);
    _0 = _d2_23675;
    _d2_23675 = _20file_timestamp(_f2_23671);
    DeRef(_0);
    // SubProg is_file_newer pc: 17 op: STARTLINE (58)

    /** preproc.e:25		if atom(d2) then return 1 end if*/
    // SubProg is_file_newer pc: 19 op: IS_AN_ATOM (67)
    _13490 = IS_ATOM(_d2_23675);
    // SubProg is_file_newer pc: 22 op: IF (20)
    if (_13490 == 0)
    {
        _13490 = NOVALUE;
        goto L1; // [22] 30
    }
    else{
        _13490 = NOVALUE;
    }
    // SubProg is_file_newer pc: 25 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23670
    DeRefDS(_f1_23670);

// block var f2_23671
    DeRefDS(_f2_23671);

// block var d1_23672
    DeRef(_d1_23672);

// block var d2_23675
    DeRef(_d2_23675);
    return 1;
    // SubProg is_file_newer pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 23668 op: 159
    // SubProg is_file_newer pc: 30 op: STARTLINE (58)

    /** preproc.e:27		if dt:diff(d1, d2) < 0 then*/
    // SubProg is_file_newer pc: 32 op: STARTLINE (58)

    /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
    // SubProg is_file_newer pc: 34 op: PROC (27)
    Ref(_d2_23675);
    _0 = _diff_1__tmp_at33_23683;
    _diff_1__tmp_at33_23683 = _21datetimeToSeconds(_d2_23675);
    DeRef(_0);
    // SubProg is_file_newer pc: 38 op: PROC (27)
    Ref(_d1_23672);
    _0 = _diff_2__tmp_at33_23684;
    _diff_2__tmp_at33_23684 = _21datetimeToSeconds(_d1_23672);
    DeRef(_0);
    // SubProg is_file_newer pc: 42 op: MINUS (10)
    DeRef(_diff_inlined_diff_at_33_23682);
    if (IS_ATOM_INT(_diff_1__tmp_at33_23683) && IS_ATOM_INT(_diff_2__tmp_at33_23684)) {
        _diff_inlined_diff_at_33_23682 = _diff_1__tmp_at33_23683 - _diff_2__tmp_at33_23684;
        if ((object)((uintptr_t)_diff_inlined_diff_at_33_23682 +(uintptr_t) HIGH_BITS) >= 0){
            _diff_inlined_diff_at_33_23682 = NewDouble((eudouble)_diff_inlined_diff_at_33_23682);
        }
    }
    else {
        _diff_inlined_diff_at_33_23682 = binary_op(MINUS, _diff_1__tmp_at33_23683, _diff_2__tmp_at33_23684);
    }
    // SubProg is_file_newer pc: 46 op: NOP1 (159)
    // SubProg is_file_newer pc: 47 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-diff from is_file_newer @ 33

// block var diff_1__tmp_at33_23683
    DeRef(_diff_1__tmp_at33_23683);
    _diff_1__tmp_at33_23683 = NOVALUE;

// block var diff_2__tmp_at33_23684
    DeRef(_diff_2__tmp_at33_23684);
    _diff_2__tmp_at33_23684 = NOVALUE;
    // SubProg is_file_newer pc: 49 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _diff_inlined_diff_at_33_23682, 0)){
        goto L2; // [49] 60
    }
    // SubProg is_file_newer pc: 53 op: STARTLINE (58)

    /** preproc.e:28			return 1*/
    // SubProg is_file_newer pc: 55 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23670
    DeRefDS(_f1_23670);

// block var f2_23671
    DeRefDS(_f2_23671);

// block var d1_23672
    DeRef(_d1_23672);

// block var d2_23675
    DeRef(_d2_23675);
    return 1;
    // SubProg is_file_newer pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 23668 op: 159
    // SubProg is_file_newer pc: 60 op: STARTLINE (58)

    /** preproc.e:31		return 0*/
    // SubProg is_file_newer pc: 62 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_23670
    DeRefDS(_f1_23670);

// block var f2_23671
    DeRefDS(_f2_23671);

// block var d1_23672
    DeRef(_d1_23672);

// block var d2_23675
    DeRef(_d2_23675);
    return 0;
    // SubProg is_file_newer pc: 66 op: BADRETURNF (43)
    ;
}


void _64add_preprocessor(object _file_ext_23688, object _command_23689, object _params_23690)
{
    object _tmp_23693 = NOVALUE;
    object _file_exts_23703 = NOVALUE;
    object _exts_23709 = NOVALUE;
// skipping _13508  name type: 0
    object _13507 = NOVALUE; // 23718 13507
    object _13506 = NOVALUE; // 23717 13506
    object _13505 = NOVALUE; // 23716 13505
    object _13504 = NOVALUE; // 23714 13504
// skipping _13503  name type: 0
    object _13502 = NOVALUE; // 23708 13502
// skipping _13501  name type: 0
// skipping _13499  name type: 0
// skipping _13498  name type: 0
    object _13497 = NOVALUE; // 23700 13497
// skipping _13496  name type: 0
// skipping _13495  name type: 0
// skipping _13494  name type: 0
    object _13492 = NOVALUE; // 23692 13492
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_preprocessor pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 3 op: STARTLINE (58)

    /** preproc.e:46		if atom(command) then*/
    // SubProg add_preprocessor pc: 5 op: IS_AN_ATOM (67)
    _13492 = 1;
    // SubProg add_preprocessor pc: 8 op: IF (20)
    if (_13492 == 0)
    {
        _13492 = NOVALUE;
        goto L1; // [8] 53
    }
    else{
        _13492 = NOVALUE;
    }
    // SubProg add_preprocessor pc: 11 op: STARTLINE (58)

    /** preproc.e:47			sequence tmp = split( file_ext, ":")*/
    // SubProg add_preprocessor pc: 13 op: PROC (27)
    RefDS(_file_ext_23688);
    RefDS(_13493);
    _0 = _tmp_23693;
    _tmp_23693 = _23split(_file_ext_23688, _13493, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 22 op: STARTLINE (58)

    /** preproc.e:48			file_ext = tmp[1]*/
    // SubProg add_preprocessor pc: 24 op: RHS_SUBS (25)
    DeRefDS(_file_ext_23688);
    _2 = (object)SEQ_PTR(_tmp_23693);
    _file_ext_23688 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_file_ext_23688);
    // SubProg add_preprocessor pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 30 op: STARTLINE (58)

    /** preproc.e:49			command = tmp[2]*/
    // SubProg add_preprocessor pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_tmp_23693);
    _command_23689 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_command_23689);
    // SubProg add_preprocessor pc: 36 op: STARTLINE (58)

    /** preproc.e:50			if length(tmp) >= 3 then*/
    // SubProg add_preprocessor pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_tmp_23693)){
            _13497 = SEQ_PTR(_tmp_23693)->length;
    }
    else {
        _13497 = 1;
    }
    // SubProg add_preprocessor pc: 41 op: GREATEREQ_IFW_I (120)
    if (_13497 < 3)
    goto L2; // [41] 52
    // SubProg add_preprocessor pc: 45 op: STARTLINE (58)

    /** preproc.e:51				params = tmp[3]*/
    // SubProg add_preprocessor pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_tmp_23693);
    _params_23690 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_params_23690);
    // SubProg add_preprocessor pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 23686 op: 159
    // SubProg add_preprocessor pc: 52 op: NOP1 (159)
L1: // addr: 53 pc: 52 sub: 23686 op: 159
    // SubProg add_preprocessor pc: 53 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tmp_23693
    DeRef(_tmp_23693);
    _tmp_23693 = NOVALUE;
    // SubProg add_preprocessor pc: 55 op: STARTLINE (58)

    /** preproc.e:55		sequence file_exts = split( file_ext, "," )*/
    // SubProg add_preprocessor pc: 57 op: PROC (27)
    RefDS(_file_ext_23688);
    RefDS(_13500);
    _0 = _file_exts_23703;
    _file_exts_23703 = _23split(_file_ext_23688, _13500, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 64 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 66 op: STARTLINE (58)

    /** preproc.e:57		if atom(params) then*/
    // SubProg add_preprocessor pc: 68 op: IS_AN_ATOM (67)
    _13502 = IS_ATOM(_params_23690);
    // SubProg add_preprocessor pc: 71 op: IF (20)
    if (_13502 == 0)
    {
        _13502 = NOVALUE;
        goto L3; // [71] 80
    }
    else{
        _13502 = NOVALUE;
    }
    // SubProg add_preprocessor pc: 74 op: STARTLINE (58)

    /** preproc.e:58			params = ""*/
    // SubProg add_preprocessor pc: 76 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_params_23690);
    _params_23690 = _5;
    // SubProg add_preprocessor pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 23686 op: 159
    // SubProg add_preprocessor pc: 80 op: STARTLINE (58)

    /** preproc.e:61		sequence exts = split(file_ext, ",")*/
    // SubProg add_preprocessor pc: 82 op: PROC (27)
    RefDS(_file_ext_23688);
    RefDS(_13500);
    _0 = _exts_23709;
    _exts_23709 = _23split(_file_ext_23688, _13500, 0, 0);
    DeRef(_0);
    // SubProg add_preprocessor pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg add_preprocessor pc: 91 op: STARTLINE (58)

    /** preproc.e:62		for i = 1 to length(exts) do*/
    // SubProg add_preprocessor pc: 93 op: LENGTH (42)
    if (IS_SEQUENCE(_exts_23709)){
            _13504 = SEQ_PTR(_exts_23709)->length;
    }
    else {
        _13504 = 1;
    }
    // SubProg add_preprocessor pc: 96 op: FOR_I (125)
    {
        object _i_23713;
        _i_23713 = 1;
L4: // addr: 103 pc: 96 sub: 23686 op: 125
        if (_i_23713 > _13504){
            goto L5; // [96] 135
        }
        // SubProg add_preprocessor pc: 103 op: STARTLINE (58)

        /** preproc.e:63			preprocessors &= { { exts[i], command, params, -1 } }*/
        // SubProg add_preprocessor pc: 105 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_preprocessor pc: 107 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exts_23709);
        _13505 = (object)*(((s1_ptr)_2)->base + _i_23713);
        // SubProg add_preprocessor pc: 111 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_13505);
        ((intptr_t*)_2)[1] = _13505;
        Ref(_command_23689);
        ((intptr_t*)_2)[2] = _command_23689;
        Ref(_params_23690);
        ((intptr_t*)_2)[3] = _params_23690;
        ((intptr_t*)_2)[4] = -1;
        _13506 = MAKE_SEQ(_1);
        _13505 = NOVALUE;
        // SubProg add_preprocessor pc: 118 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _13506;
        _13507 = MAKE_SEQ(_1);
        _13506 = NOVALUE;
        // SubProg add_preprocessor pc: 122 op: CONCAT (15)
        Concat((object_ptr)&_37preprocessors_15422, _37preprocessors_15422, _13507);
        DeRefDS(_13507);
        _13507 = NOVALUE;
        // SubProg add_preprocessor pc: 126 op: SEQUENCE_CHECK (97)
        // SubProg add_preprocessor pc: 128 op: STARTLINE (58)

        /** preproc.e:64		end for*/
        // SubProg add_preprocessor pc: 130 op: ENDFOR_INT_UP1 (54)
        _i_23713 = _i_23713 + 1;
        goto L4; // [130] 103
L5: // addr: 135 pc: 130 sub: 23686 op: 54
        ;
    }
    // SubProg add_preprocessor pc: 135 op: STARTLINE (58)

    /** preproc.e:65	end procedure */
    // SubProg add_preprocessor pc: 137 op: RETURNP (29)

// Exiting block BLOCK: add_preprocessor

// block var file_ext_23688
    DeRefDS(_file_ext_23688);

// block var command_23689
    DeRef(_command_23689);

// block var params_23690
    DeRef(_params_23690);

// block var file_exts_23703
    DeRef(_file_exts_23703);

// block var exts_23709
    DeRef(_exts_23709);
    return;
    // SubProg add_preprocessor pc: 140 op: BADRETURNF (43)
    ;
}


object _64maybe_preprocess(object _fname_23722)
{
    object _pp_23723 = NOVALUE;
    object _pp_id_23724 = NOVALUE;
    object _fext_23728 = NOVALUE;
    object _post_fname_23745 = NOVALUE;
    object _rid_23773 = NOVALUE;
    object _dll_id_23777 = NOVALUE;
    object _public_cmd_args_23813 = NOVALUE;
    object _cmd_args_23816 = NOVALUE;
    object _cmd_23845 = NOVALUE;
    object _pcmd_23850 = NOVALUE;
    object _result_23855 = NOVALUE;
    object _13586 = NOVALUE; // 23862 13586
    object _13585 = NOVALUE; // 23861 13585
// skipping _13583  name type: 0
// skipping _13582  name type: 0
// skipping _13581  name type: 0
    object _13580 = NOVALUE; // 23853 13580
    object _13579 = NOVALUE; // 23852 13579
// skipping _13578  name type: 0
    object _13577 = NOVALUE; // 23848 13577
    object _13576 = NOVALUE; // 23847 13576
// skipping _13575  name type: 0
    object _13574 = NOVALUE; // 23843 13574
// skipping _13573  name type: 0
    object _13572 = NOVALUE; // 23841 13572
    object _13571 = NOVALUE; // 23840 13571
    object _13569 = NOVALUE; // 23836 13569
// skipping _13567  name type: 0
    object _13566 = NOVALUE; // 23831 13566
// skipping _13565  name type: 0
    object _13564 = NOVALUE; // 23829 13564
    object _13562 = NOVALUE; // 23827 13562
    object _13560 = NOVALUE; // 23825 13560
    object _13559 = NOVALUE; // 23824 13559
// skipping _13558  name type: 0
    object _13557 = NOVALUE; // 23820 13557
    object _13556 = NOVALUE; // 23818 13556
// skipping _13555  name type: 0
    object _13554 = NOVALUE; // 23814 13554
// skipping _13552  name type: 0
    object _13551 = NOVALUE; // 23807 13551
    object _13550 = NOVALUE; // 23806 13550
    object _13549 = NOVALUE; // 23805 13549
// skipping _13548  name type: 0
    object _13547 = NOVALUE; // 23802 13547
// skipping _13545  name type: 0
// skipping _13544  name type: 0
    object _13543 = NOVALUE; // 23793 13543
    object _13541 = NOVALUE; // 23787 13541
    object _13540 = NOVALUE; // 23786 13540
    object _13539 = NOVALUE; // 23785 13539
// skipping _13537  name type: 0
// skipping _13536  name type: 0
    object _13535 = NOVALUE; // 23779 13535
// skipping _13534  name type: 0
// skipping _13533  name type: 0
    object _13532 = NOVALUE; // 23772 13532
    object _13531 = NOVALUE; // 23770 13531
    object _13530 = NOVALUE; // 23769 13530
// skipping _13529  name type: 0
    object _13528 = NOVALUE; // 23765 13528
// skipping _13527  name type: 0
// skipping _13526  name type: 0
    object _13525 = NOVALUE; // 23758 13525
// skipping _13524  name type: 0
    object _13523 = NOVALUE; // 23755 13523
    object _13522 = NOVALUE; // 23754 13522
// skipping _13521  name type: 0
    object _13520 = NOVALUE; // 23750 13520
    object _13518 = NOVALUE; // 23747 13518
// skipping _13517  name type: 0
    object _13516 = NOVALUE; // 23743 13516
// skipping _13515  name type: 0
    object _13514 = NOVALUE; // 23739 13514
    object _13513 = NOVALUE; // 23738 13513
    object _13512 = NOVALUE; // 23737 13512
    object _13511 = NOVALUE; // 23734 13511
// skipping _13510  name type: 0
    object _13509 = NOVALUE; // 23727 13509
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg maybe_preprocess pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 3 op: STARTLINE (58)

    /** preproc.e:81		sequence pp = {}*/
    // SubProg maybe_preprocess pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_pp_23723);
    _pp_23723 = _5;
    // SubProg maybe_preprocess pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 10 op: STARTLINE (58)

    /** preproc.e:84		if length(preprocessors) then*/
    // SubProg maybe_preprocess pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_37preprocessors_15422)){
            _13509 = SEQ_PTR(_37preprocessors_15422)->length;
    }
    else {
        _13509 = 1;
    }
    // SubProg maybe_preprocess pc: 17 op: IF (20)
    if (_13509 == 0)
    {
        _13509 = NOVALUE;
        goto L1; // [17] 89
    }
    else{
        _13509 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 20 op: STARTLINE (58)

    /** preproc.e:85			sequence fext = fileext(fname)*/
    // SubProg maybe_preprocess pc: 22 op: PROC (27)
    RefDS(_fname_23722);
    _0 = _fext_23728;
    _fext_23728 = _20fileext(_fname_23722);
    DeRef(_0);
    // SubProg maybe_preprocess pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg maybe_preprocess pc: 28 op: STARTLINE (58)

    /** preproc.e:87			for i = 1 to length(preprocessors) do*/
    // SubProg maybe_preprocess pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_37preprocessors_15422)){
            _13511 = SEQ_PTR(_37preprocessors_15422)->length;
    }
    else {
        _13511 = 1;
    }
    // SubProg maybe_preprocess pc: 35 op: FOR_I (125)
    {
        object _i_23732;
        _i_23732 = 1;
L2: // addr: 42 pc: 35 sub: 23720 op: 125
        if (_i_23732 > _13511){
            goto L3; // [35] 88
        }
        // SubProg maybe_preprocess pc: 42 op: STARTLINE (58)

        /** preproc.e:88				if equal(fext, preprocessors[i][1]) then*/
        // SubProg maybe_preprocess pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg maybe_preprocess pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37preprocessors_15422);
        _13512 = (object)*(((s1_ptr)_2)->base + _i_23732);
        // SubProg maybe_preprocess pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13512);
        _13513 = (object)*(((s1_ptr)_2)->base + 1);
        _13512 = NOVALUE;
        // SubProg maybe_preprocess pc: 54 op: EQUAL (153)
        if (_fext_23728 == _13513)
        _13514 = 1;
        else if (IS_ATOM_INT(_fext_23728) && IS_ATOM_INT(_13513))
        _13514 = 0;
        else
        _13514 = (compare(_fext_23728, _13513) == 0);
        _13513 = NOVALUE;
        // SubProg maybe_preprocess pc: 58 op: IF (20)
        if (_13514 == 0)
        {
            _13514 = NOVALUE;
            goto L4; // [58] 81
        }
        else{
            _13514 = NOVALUE;
        }
        // SubProg maybe_preprocess pc: 61 op: STARTLINE (58)

        /** preproc.e:89					pp_id = i*/
        // SubProg maybe_preprocess pc: 63 op: ASSIGN_I (113)
        _pp_id_23724 = _i_23732;
        // SubProg maybe_preprocess pc: 66 op: STARTLINE (58)

        /** preproc.e:90					pp = preprocessors[pp_id]*/
        // SubProg maybe_preprocess pc: 68 op: GLOBAL_INIT_CHECK (109)
        // SubProg maybe_preprocess pc: 70 op: RHS_SUBS_CHECK (92)
        DeRef(_pp_23723);
        _2 = (object)SEQ_PTR(_37preprocessors_15422);
        _pp_23723 = (object)*(((s1_ptr)_2)->base + _pp_id_23724);
        RefDS(_pp_23723);
        // SubProg maybe_preprocess pc: 74 op: SEQUENCE_CHECK (97)
        // SubProg maybe_preprocess pc: 76 op: STARTLINE (58)

        /** preproc.e:91					exit*/
        // SubProg maybe_preprocess pc: 78 op: EXIT (61)
        goto L3; // [78] 88
        // SubProg maybe_preprocess pc: 80 op: NOP1 (159)
L4: // addr: 81 pc: 80 sub: 23720 op: 159
        // SubProg maybe_preprocess pc: 81 op: STARTLINE (58)

        /** preproc.e:93			end for*/
        // SubProg maybe_preprocess pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_23732 = _i_23732 + 1;
        goto L2; // [83] 42
L3: // addr: 88 pc: 83 sub: 23720 op: 54
        ;
    }
    // SubProg maybe_preprocess pc: 88 op: NOP1 (159)
L1: // addr: 89 pc: 88 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 89 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fext_23728
    DeRef(_fext_23728);
    _fext_23728 = NOVALUE;
    // SubProg maybe_preprocess pc: 91 op: STARTLINE (58)

    /** preproc.e:96		if length(pp) = 0 then */
    // SubProg maybe_preprocess pc: 93 op: LENGTH (42)
    if (IS_SEQUENCE(_pp_23723)){
            _13516 = SEQ_PTR(_pp_23723)->length;
    }
    else {
        _13516 = 1;
    }
    // SubProg maybe_preprocess pc: 96 op: EQUALS_IFW_I (121)
    if (_13516 != 0)
    goto L5; // [96] 107
    // SubProg maybe_preprocess pc: 100 op: STARTLINE (58)

    /** preproc.e:97			return fname*/
    // SubProg maybe_preprocess pc: 102 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var pp_23723
    DeRefDS(_pp_23723);

// block var pp_id_23724

// block var post_fname_23745
    DeRef(_post_fname_23745);
    return _fname_23722;
    // SubProg maybe_preprocess pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 107 op: STARTLINE (58)

    /** preproc.e:100		sequence post_fname = filebase(fname) & ".pp." & fileext(fname)*/
    // SubProg maybe_preprocess pc: 109 op: PROC (27)
    RefDS(_fname_23722);
    _13518 = _20filebase(_fname_23722);
    // SubProg maybe_preprocess pc: 113 op: PROC (27)
    RefDS(_fname_23722);
    _13520 = _20fileext(_fname_23722);
    // SubProg maybe_preprocess pc: 117 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _13520;
        concat_list[1] = _13519;
        concat_list[2] = _13518;
        Concat_N((object_ptr)&_post_fname_23745, concat_list, 3);
    }
    DeRef(_13520);
    _13520 = NOVALUE;
    DeRef(_13518);
    _13518 = NOVALUE;
    // SubProg maybe_preprocess pc: 123 op: STARTLINE (58)

    /** preproc.e:101		if length(dirname(fname)) > 0 then*/
    // SubProg maybe_preprocess pc: 125 op: PROC (27)
    RefDS(_fname_23722);
    _13522 = _20dirname(_fname_23722, 0);
    // SubProg maybe_preprocess pc: 130 op: LENGTH (42)
    if (IS_SEQUENCE(_13522)){
            _13523 = SEQ_PTR(_13522)->length;
    }
    else {
        _13523 = 1;
    }
    DeRef(_13522);
    _13522 = NOVALUE;
    // SubProg maybe_preprocess pc: 133 op: GREATER_IFW_I (124)
    if (_13523 <= 0)
    goto L6; // [133] 153
    // SubProg maybe_preprocess pc: 137 op: STARTLINE (58)

    /** preproc.e:102			post_fname = dirname(fname) & SLASH & post_fname*/
    // SubProg maybe_preprocess pc: 139 op: PROC (27)
    RefDS(_fname_23722);
    _13525 = _20dirname(_fname_23722, 0);
    // SubProg maybe_preprocess pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 146 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _post_fname_23745;
        concat_list[1] = 47;
        concat_list[2] = _13525;
        Concat_N((object_ptr)&_post_fname_23745, concat_list, 3);
    }
    DeRef(_13525);
    _13525 = NOVALUE;
    // SubProg maybe_preprocess pc: 152 op: NOP1 (159)
L6: // addr: 153 pc: 152 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 153 op: STARTLINE (58)

    /** preproc.e:105		if not force_preprocessor then*/
    // SubProg maybe_preprocess pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 157 op: NOT_IFW (108)
    if (_37force_preprocessor_15423 != 0)
    goto L7; // [157] 178
    // SubProg maybe_preprocess pc: 160 op: STARTLINE (58)

    /** preproc.e:106			if not is_file_newer(fname, post_fname) then*/
    // SubProg maybe_preprocess pc: 162 op: PROC (27)
    RefDS(_fname_23722);
    RefDS(_post_fname_23745);
    _13528 = _64is_file_newer(_fname_23722, _post_fname_23745);
    // SubProg maybe_preprocess pc: 167 op: NOT_IFW (108)
    if (IS_ATOM_INT(_13528)) {
        if (_13528 != 0){
            DeRef(_13528);
            _13528 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    else {
        if (DBL_PTR(_13528)->dbl != 0.0){
            DeRef(_13528);
            _13528 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    DeRef(_13528);
    _13528 = NOVALUE;
    // SubProg maybe_preprocess pc: 170 op: STARTLINE (58)

    /** preproc.e:107				return post_fname*/
    // SubProg maybe_preprocess pc: 172 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var fname_23722
    DeRefDS(_fname_23722);

// block var pp_23723
    DeRef(_pp_23723);

// block var pp_id_23724
    _13522 = NOVALUE;
    return _post_fname_23745;
    // SubProg maybe_preprocess pc: 176 op: NOP1 (159)
L8: // addr: 177 pc: 176 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 177 op: NOP1 (159)
L7: // addr: 178 pc: 177 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 178 op: STARTLINE (58)

    /** preproc.e:112		if equal(fileext(pp[PP_COMMAND]), SHARED_LIB_EXT) then*/
    // SubProg maybe_preprocess pc: 180 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13530 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 184 op: PROC (27)
    Ref(_13530);
    _13531 = _20fileext(_13530);
    _13530 = NOVALUE;
    // SubProg maybe_preprocess pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 190 op: EQUAL (153)
    if (_13531 == _20SHARED_LIB_EXT_6095)
    _13532 = 1;
    else if (IS_ATOM_INT(_13531) && IS_ATOM_INT(_20SHARED_LIB_EXT_6095))
    _13532 = 0;
    else
    _13532 = (compare(_13531, _20SHARED_LIB_EXT_6095) == 0);
    DeRef(_13531);
    _13531 = NOVALUE;
    // SubProg maybe_preprocess pc: 194 op: IF (20)
    if (_13532 == 0)
    {
        _13532 = NOVALUE;
        goto L9; // [194] 348
    }
    else{
        _13532 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 197 op: STARTLINE (58)

    /** preproc.e:113			integer rid = pp[PP_RID]*/
    // SubProg maybe_preprocess pc: 199 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_pp_23723);
    _rid_23773 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_rid_23773))
    _rid_23773 = (object)DBL_PTR(_rid_23773)->dbl;
    // SubProg maybe_preprocess pc: 203 op: STARTLINE (58)

    /** preproc.e:114			if rid = -1 then*/
    // SubProg maybe_preprocess pc: 205 op: EQUALS_IFW_I (121)
    if (_rid_23773 != -1)
    goto LA; // [205] 307
    // SubProg maybe_preprocess pc: 209 op: STARTLINE (58)

    /** preproc.e:115				integer dll_id = open_dll(pp[PP_COMMAND])*/
    // SubProg maybe_preprocess pc: 211 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13535 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 215 op: PROC (27)
    Ref(_13535);
    _dll_id_23777 = _12open_dll(_13535);
    _13535 = NOVALUE;
    // SubProg maybe_preprocess pc: 219 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_dll_id_23777)) {
        _1 = (object)(DBL_PTR(_dll_id_23777)->dbl);
        DeRefDS(_dll_id_23777);
        _dll_id_23777 = _1;
    }
    // SubProg maybe_preprocess pc: 221 op: STARTLINE (58)

    /** preproc.e:116				if dll_id = -1 then*/
    // SubProg maybe_preprocess pc: 223 op: EQUALS_IFW_I (121)
    if (_dll_id_23777 != -1)
    goto LB; // [223] 247
    // SubProg maybe_preprocess pc: 227 op: STARTLINE (58)

    /** preproc.e:117					CompileErr(sprintf("Preprocessor shared library '%s' could not be loaded\n",*/
    // SubProg maybe_preprocess pc: 229 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13539 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 233 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13539);
    ((intptr_t*)_2)[1] = _13539;
    _13540 = MAKE_SEQ(_1);
    _13539 = NOVALUE;
    // SubProg maybe_preprocess pc: 237 op: SPRINTF (53)
    _13541 = EPrintf(-9999999, _13538, _13540);
    DeRefDS(_13540);
    _13540 = NOVALUE;
    // SubProg maybe_preprocess pc: 241 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(_13541, _21933, 1);
    _13541 = NOVALUE;
    // SubProg maybe_preprocess pc: 246 op: NOP1 (159)
LB: // addr: 247 pc: 246 sub: 23720 op: 159
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
    _13543 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 263 op: PROC (27)
    RefDS(_13542);
    _rid_23773 = _12define_c_func(_dll_id_23777, _13542, _13543, 100663300);
    _13543 = NOVALUE;
    // SubProg maybe_preprocess pc: 270 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_rid_23773)) {
        _1 = (object)(DBL_PTR(_rid_23773)->dbl);
        DeRefDS(_rid_23773);
        _rid_23773 = _1;
    }
    // SubProg maybe_preprocess pc: 272 op: STARTLINE (58)

    /** preproc.e:123				if rid = -1 then*/
    // SubProg maybe_preprocess pc: 274 op: EQUALS_IFW_I (121)
    if (_rid_23773 != -1)
    goto LC; // [274] 291
    // SubProg maybe_preprocess pc: 278 op: STARTLINE (58)

    /** preproc.e:124					CompileErr("Preprocessor entry point cound not be found\n",,1)*/
    // SubProg maybe_preprocess pc: 280 op: PROC (27)
    RefDS(_13546);
    RefDS(_21933);
    _50CompileErr(_13546, _21933, 1);
    // SubProg maybe_preprocess pc: 285 op: STARTLINE (58)

    /** preproc.e:126					Cleanup(1)*/
    // SubProg maybe_preprocess pc: 287 op: PROC (27)
    _50Cleanup(1);
    // SubProg maybe_preprocess pc: 290 op: NOP1 (159)
LC: // addr: 291 pc: 290 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 291 op: STARTLINE (58)

    /** preproc.e:129				preprocessors[pp_id][PP_RID] = rid*/
    // SubProg maybe_preprocess pc: 293 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 295 op: PRIVATE_INIT_CHECK (30)
    // SubProg maybe_preprocess pc: 297 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37preprocessors_15422);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37preprocessors_15422 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pp_id_23724 + ((s1_ptr)_2)->base);
    // SubProg maybe_preprocess pc: 302 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _rid_23773;
    DeRef(_1);
    _13547 = NOVALUE;
    // SubProg maybe_preprocess pc: 306 op: NOP1 (159)
LA: // addr: 307 pc: 306 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 307 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var dll_id_23777
    // SubProg maybe_preprocess pc: 309 op: STARTLINE (58)

    /** preproc.e:132			if c_func(rid, { fname, post_fname, pp[PP_PARAMS] }) != 0 then*/
    // SubProg maybe_preprocess pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13549 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 315 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_fname_23722);
    ((intptr_t*)_2)[1] = _fname_23722;
    RefDS(_post_fname_23745);
    ((intptr_t*)_2)[2] = _post_fname_23745;
    Ref(_13549);
    ((intptr_t*)_2)[3] = _13549;
    _13550 = MAKE_SEQ(_1);
    _13549 = NOVALUE;
    // SubProg maybe_preprocess pc: 321 op: C_FUNC (133)
    _13551 = call_c(1, _rid_23773, _13550);
    DeRefDS(_13550);
    _13550 = NOVALUE;
    // SubProg maybe_preprocess pc: 326 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _13551, 0)){
        DeRef(_13551);
        _13551 = NOVALUE;
        goto LD; // [326] 343
    }
    DeRef(_13551);
    _13551 = NOVALUE;
    // SubProg maybe_preprocess pc: 330 op: STARTLINE (58)

    /** preproc.e:133				CompileErr("Preprocessor call failed\n",,1)*/
    // SubProg maybe_preprocess pc: 332 op: PROC (27)
    RefDS(_13553);
    RefDS(_21933);
    _50CompileErr(_13553, _21933, 1);
    // SubProg maybe_preprocess pc: 337 op: STARTLINE (58)

    /** preproc.e:135				Cleanup(1)*/
    // SubProg maybe_preprocess pc: 339 op: PROC (27)
    _50Cleanup(1);
    // SubProg maybe_preprocess pc: 342 op: NOP1 (159)
LD: // addr: 343 pc: 342 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 343 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var rid_23773
    // SubProg maybe_preprocess pc: 345 op: ELSE (23)
    goto LE; // [345] 520
    // SubProg maybe_preprocess pc: 347 op: NOP1 (159)
L9: // addr: 348 pc: 347 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 348 op: STARTLINE (58)

    /** preproc.e:138			sequence public_cmd_args = {pp[PP_COMMAND]}*/
    // SubProg maybe_preprocess pc: 350 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13554 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 354 op: RIGHT_BRACE_N (31)
    _0 = _public_cmd_args_23813;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13554);
    ((intptr_t*)_2)[1] = _13554;
    _public_cmd_args_23813 = MAKE_SEQ(_1);
    DeRef(_0);
    _13554 = NOVALUE;
    // SubProg maybe_preprocess pc: 358 op: STARTLINE (58)

    /** preproc.e:139			sequence cmd_args = {canonical_path(pp[PP_COMMAND],,TO_SHORT)}*/
    // SubProg maybe_preprocess pc: 360 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13556 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 366 op: PROC (27)
    Ref(_13556);
    _13557 = _20canonical_path(_13556, 0, 4);
    _13556 = NOVALUE;
    // SubProg maybe_preprocess pc: 372 op: RIGHT_BRACE_N (31)
    _0 = _cmd_args_23816;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _13557;
    _cmd_args_23816 = MAKE_SEQ(_1);
    DeRef(_0);
    _13557 = NOVALUE;
    // SubProg maybe_preprocess pc: 376 op: STARTLINE (58)

    /** preproc.e:141			if equal(fileext(pp[PP_COMMAND]), "ex") then*/
    // SubProg maybe_preprocess pc: 378 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13559 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg maybe_preprocess pc: 382 op: PROC (27)
    Ref(_13559);
    _13560 = _20fileext(_13559);
    _13559 = NOVALUE;
    // SubProg maybe_preprocess pc: 386 op: EQUAL (153)
    if (_13560 == _13561)
    _13562 = 1;
    else if (IS_ATOM_INT(_13560) && IS_ATOM_INT(_13561))
    _13562 = 0;
    else
    _13562 = (compare(_13560, _13561) == 0);
    DeRef(_13560);
    _13560 = NOVALUE;
    // SubProg maybe_preprocess pc: 390 op: IF (20)
    if (_13562 == 0)
    {
        _13562 = NOVALUE;
        goto LF; // [390] 414
    }
    else{
        _13562 = NOVALUE;
    }
    // SubProg maybe_preprocess pc: 393 op: STARTLINE (58)

    /** preproc.e:142				public_cmd_args = { "eui" } & public_cmd_args*/
    // SubProg maybe_preprocess pc: 395 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13563);
    ((intptr_t*)_2)[1] = _13563;
    _13564 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 399 op: CONCAT (15)
    Concat((object_ptr)&_public_cmd_args_23813, _13564, _public_cmd_args_23813);
    DeRefDS(_13564);
    _13564 = NOVALUE;
    DeRef(_13564);
    _13564 = NOVALUE;
    // SubProg maybe_preprocess pc: 403 op: STARTLINE (58)

    /** preproc.e:143				cmd_args = { "eui" } & cmd_args*/
    // SubProg maybe_preprocess pc: 405 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13563);
    ((intptr_t*)_2)[1] = _13563;
    _13566 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 409 op: CONCAT (15)
    Concat((object_ptr)&_cmd_args_23816, _13566, _cmd_args_23816);
    DeRefDS(_13566);
    _13566 = NOVALUE;
    DeRef(_13566);
    _13566 = NOVALUE;
    // SubProg maybe_preprocess pc: 413 op: NOP1 (159)
LF: // addr: 414 pc: 413 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 414 op: STARTLINE (58)

    /** preproc.e:146			cmd_args &= { "-i", canonical_path(fname,,TO_SHORT), "-o", canonical_path(post_fname,,TO_SHORT) }*/
    // SubProg maybe_preprocess pc: 416 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 418 op: PROC (27)
    RefDS(_fname_23722);
    _13569 = _20canonical_path(_fname_23722, 0, 4);
    // SubProg maybe_preprocess pc: 424 op: GLOBAL_INIT_CHECK (109)
    // SubProg maybe_preprocess pc: 426 op: PROC (27)
    RefDS(_post_fname_23745);
    _13571 = _20canonical_path(_post_fname_23745, 0, 4);
    // SubProg maybe_preprocess pc: 432 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13568);
    ((intptr_t*)_2)[1] = _13568;
    ((intptr_t*)_2)[2] = _13569;
    RefDS(_13570);
    ((intptr_t*)_2)[3] = _13570;
    ((intptr_t*)_2)[4] = _13571;
    _13572 = MAKE_SEQ(_1);
    _13571 = NOVALUE;
    _13569 = NOVALUE;
    // SubProg maybe_preprocess pc: 439 op: CONCAT (15)
    Concat((object_ptr)&_cmd_args_23816, _cmd_args_23816, _13572);
    DeRefDS(_13572);
    _13572 = NOVALUE;
    // SubProg maybe_preprocess pc: 443 op: STARTLINE (58)

    /** preproc.e:147			public_cmd_args &= { "-i", fname, "-o", post_fname }*/
    // SubProg maybe_preprocess pc: 445 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13568);
    ((intptr_t*)_2)[1] = _13568;
    RefDS(_fname_23722);
    ((intptr_t*)_2)[2] = _fname_23722;
    RefDS(_13570);
    ((intptr_t*)_2)[3] = _13570;
    RefDS(_post_fname_23745);
    ((intptr_t*)_2)[4] = _post_fname_23745;
    _13574 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 452 op: CONCAT (15)
    Concat((object_ptr)&_public_cmd_args_23813, _public_cmd_args_23813, _13574);
    DeRefDS(_13574);
    _13574 = NOVALUE;
    // SubProg maybe_preprocess pc: 456 op: STARTLINE (58)

    /** preproc.e:148			sequence cmd = build_commandline( cmd_args ) & pp[PP_PARAMS]*/
    // SubProg maybe_preprocess pc: 458 op: PROC (27)
    RefDS(_cmd_args_23816);
    _13576 = _4build_commandline(_cmd_args_23816);
    // SubProg maybe_preprocess pc: 462 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13577 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 466 op: CONCAT (15)
    if (IS_SEQUENCE(_13576) && IS_ATOM(_13577)) {
        Ref(_13577);
        Append(&_cmd_23845, _13576, _13577);
    }
    else if (IS_ATOM(_13576) && IS_SEQUENCE(_13577)) {
        Ref(_13576);
        Prepend(&_cmd_23845, _13577, _13576);
    }
    else {
        Concat((object_ptr)&_cmd_23845, _13576, _13577);
        DeRef(_13576);
        _13576 = NOVALUE;
    }
    DeRef(_13576);
    _13576 = NOVALUE;
    _13577 = NOVALUE;
    // SubProg maybe_preprocess pc: 470 op: STARTLINE (58)

    /** preproc.e:149			sequence pcmd = build_commandline(public_cmd_args) & pp[PP_PARAMS]*/
    // SubProg maybe_preprocess pc: 472 op: PROC (27)
    RefDS(_public_cmd_args_23813);
    _13579 = _4build_commandline(_public_cmd_args_23813);
    // SubProg maybe_preprocess pc: 476 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_pp_23723);
    _13580 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg maybe_preprocess pc: 480 op: CONCAT (15)
    if (IS_SEQUENCE(_13579) && IS_ATOM(_13580)) {
        Ref(_13580);
        Append(&_pcmd_23850, _13579, _13580);
    }
    else if (IS_ATOM(_13579) && IS_SEQUENCE(_13580)) {
        Ref(_13579);
        Prepend(&_pcmd_23850, _13580, _13579);
    }
    else {
        Concat((object_ptr)&_pcmd_23850, _13579, _13580);
        DeRef(_13579);
        _13579 = NOVALUE;
    }
    DeRef(_13579);
    _13579 = NOVALUE;
    _13580 = NOVALUE;
    // SubProg maybe_preprocess pc: 484 op: STARTLINE (58)

    /** preproc.e:150			integer result = system_exec(cmd, 2)*/
    // SubProg maybe_preprocess pc: 486 op: SYSTEM_EXEC (154)
    _result_23855 = system_exec_call(_cmd_23845, 2);
    // SubProg maybe_preprocess pc: 490 op: STARTLINE (58)

    /** preproc.e:151			if result != 0 then*/
    // SubProg maybe_preprocess pc: 492 op: NOTEQ_IFW_I (122)
    if (_result_23855 == 0)
    goto L10; // [492] 517
    // SubProg maybe_preprocess pc: 496 op: STARTLINE (58)

    /** preproc.e:152				CompileErr(sprintf("Preprocessor command failed (%d): %s\n", { result, pcmd } ),,1)*/
    // SubProg maybe_preprocess pc: 498 op: RIGHT_BRACE_2 (85)
    RefDS(_pcmd_23850);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _result_23855;
    ((intptr_t *)_2)[2] = _pcmd_23850;
    _13585 = MAKE_SEQ(_1);
    // SubProg maybe_preprocess pc: 502 op: SPRINTF (53)
    _13586 = EPrintf(-9999999, _13584, _13585);
    DeRefDS(_13585);
    _13585 = NOVALUE;
    // SubProg maybe_preprocess pc: 506 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(_13586, _21933, 1);
    _13586 = NOVALUE;
    // SubProg maybe_preprocess pc: 511 op: STARTLINE (58)

    /** preproc.e:154				Cleanup(1)*/
    // SubProg maybe_preprocess pc: 513 op: PROC (27)
    _50Cleanup(1);
    // SubProg maybe_preprocess pc: 516 op: NOP1 (159)
L10: // addr: 517 pc: 516 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 517 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var public_cmd_args_23813
    DeRef(_public_cmd_args_23813);
    _public_cmd_args_23813 = NOVALUE;

// block var cmd_args_23816
    DeRef(_cmd_args_23816);
    _cmd_args_23816 = NOVALUE;

// block var cmd_23845
    DeRef(_cmd_23845);
    _cmd_23845 = NOVALUE;

// block var pcmd_23850
    DeRef(_pcmd_23850);
    _pcmd_23850 = NOVALUE;

// block var result_23855
    // SubProg maybe_preprocess pc: 519 op: NOP1 (159)
LE: // addr: 520 pc: 519 sub: 23720 op: 159
    // SubProg maybe_preprocess pc: 520 op: STARTLINE (58)

    /** preproc.e:158		return post_fname*/
    // SubProg maybe_preprocess pc: 522 op: RETURNF (28)

// Exiting block BLOCK: maybe_preprocess

// block var fname_23722
    DeRefDS(_fname_23722);

// block var pp_23723
    DeRef(_pp_23723);

// block var pp_id_23724
    _13522 = NOVALUE;
    return _post_fname_23745;
    // SubProg maybe_preprocess pc: 526 op: BADRETURNF (43)
    ;
}



// 0x59F79726
