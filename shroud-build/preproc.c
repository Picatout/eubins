// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _65is_file_newer(object _f1_23672, object _f2_23673)
{
    object _d1_23674 = NOVALUE;
    object _d2_23677 = NOVALUE;
    object _diff_2__tmp_at33_23686 = NOVALUE;
    object _diff_1__tmp_at33_23685 = NOVALUE;
    object _diff_inlined_diff_at_33_23684 = NOVALUE;
    object _13484 = NOVALUE;
    object _0, _1, _2;
    

    /** preproc.e:22		object d1 = file_timestamp(f1)*/
    RefDS(_f1_23672);
    _0 = _d1_23674;
    _d1_23674 = _16file_timestamp(_f1_23672);
    DeRef(_0);

    /** preproc.e:23		object d2 = file_timestamp(f2)*/
    RefDS(_f2_23673);
    _0 = _d2_23677;
    _d2_23677 = _16file_timestamp(_f2_23673);
    DeRef(_0);

    /** preproc.e:25		if atom(d2) then return 1 end if*/
    _13484 = IS_ATOM(_d2_23677);
    if (_13484 == 0)
    {
        _13484 = NOVALUE;
        goto L1; // [22] 30
    }
    else{
        _13484 = NOVALUE;
    }
    DeRefDS(_f1_23672);
    DeRefDS(_f2_23673);
    DeRef(_d1_23674);
    DeRef(_d2_23677);
    return 1;
L1: 

    /** preproc.e:27		if dt:diff(d1, d2) < 0 then*/

    /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
    Ref(_d2_23677);
    _0 = _diff_1__tmp_at33_23685;
    _diff_1__tmp_at33_23685 = _17datetimeToSeconds(_d2_23677);
    DeRef(_0);
    Ref(_d1_23674);
    _0 = _diff_2__tmp_at33_23686;
    _diff_2__tmp_at33_23686 = _17datetimeToSeconds(_d1_23674);
    DeRef(_0);
    DeRef(_diff_inlined_diff_at_33_23684);
    if (IS_ATOM_INT(_diff_1__tmp_at33_23685) && IS_ATOM_INT(_diff_2__tmp_at33_23686)) {
        _diff_inlined_diff_at_33_23684 = _diff_1__tmp_at33_23685 - _diff_2__tmp_at33_23686;
        if ((object)((uintptr_t)_diff_inlined_diff_at_33_23684 +(uintptr_t) HIGH_BITS) >= 0){
            _diff_inlined_diff_at_33_23684 = NewDouble((eudouble)_diff_inlined_diff_at_33_23684);
        }
    }
    else {
        _diff_inlined_diff_at_33_23684 = binary_op(MINUS, _diff_1__tmp_at33_23685, _diff_2__tmp_at33_23686);
    }
    DeRef(_diff_1__tmp_at33_23685);
    _diff_1__tmp_at33_23685 = NOVALUE;
    DeRef(_diff_2__tmp_at33_23686);
    _diff_2__tmp_at33_23686 = NOVALUE;
    if (binary_op_a(GREATEREQ, _diff_inlined_diff_at_33_23684, 0)){
        goto L2; // [49] 60
    }

    /** preproc.e:28			return 1*/
    DeRefDS(_f1_23672);
    DeRefDS(_f2_23673);
    DeRef(_d1_23674);
    DeRef(_d2_23677);
    return 1;
L2: 

    /** preproc.e:31		return 0*/
    DeRefDS(_f1_23672);
    DeRefDS(_f2_23673);
    DeRef(_d1_23674);
    DeRef(_d2_23677);
    return 0;
    ;
}


void _65add_preprocessor(object _file_ext_23690, object _command_23691, object _params_23692)
{
    object _tmp_23695 = NOVALUE;
    object _file_exts_23705 = NOVALUE;
    object _exts_23711 = NOVALUE;
    object _13501 = NOVALUE;
    object _13500 = NOVALUE;
    object _13499 = NOVALUE;
    object _13498 = NOVALUE;
    object _13496 = NOVALUE;
    object _13491 = NOVALUE;
    object _13486 = NOVALUE;
    object _0, _1, _2;
    

    /** preproc.e:46		if atom(command) then*/
    _13486 = 1;
    if (_13486 == 0)
    {
        _13486 = NOVALUE;
        goto L1; // [8] 53
    }
    else{
        _13486 = NOVALUE;
    }

    /** preproc.e:47			sequence tmp = split( file_ext, ":")*/
    RefDS(_file_ext_23690);
    RefDS(_13487);
    _0 = _tmp_23695;
    _tmp_23695 = _22split(_file_ext_23690, _13487, 0, 0);
    DeRef(_0);

    /** preproc.e:48			file_ext = tmp[1]*/
    DeRefDS(_file_ext_23690);
    _2 = (object)SEQ_PTR(_tmp_23695);
    _file_ext_23690 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_file_ext_23690);

    /** preproc.e:49			command = tmp[2]*/
    _2 = (object)SEQ_PTR(_tmp_23695);
    _command_23691 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_command_23691);

    /** preproc.e:50			if length(tmp) >= 3 then*/
    if (IS_SEQUENCE(_tmp_23695)){
            _13491 = SEQ_PTR(_tmp_23695)->length;
    }
    else {
        _13491 = 1;
    }
    if (_13491 < 3)
    goto L2; // [41] 52

    /** preproc.e:51				params = tmp[3]*/
    _2 = (object)SEQ_PTR(_tmp_23695);
    _params_23692 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_params_23692);
L2: 
L1: 
    DeRef(_tmp_23695);
    _tmp_23695 = NOVALUE;

    /** preproc.e:55		sequence file_exts = split( file_ext, "," )*/
    RefDS(_file_ext_23690);
    RefDS(_13494);
    _0 = _file_exts_23705;
    _file_exts_23705 = _22split(_file_ext_23690, _13494, 0, 0);
    DeRef(_0);

    /** preproc.e:57		if atom(params) then*/
    _13496 = IS_ATOM(_params_23692);
    if (_13496 == 0)
    {
        _13496 = NOVALUE;
        goto L3; // [71] 80
    }
    else{
        _13496 = NOVALUE;
    }

    /** preproc.e:58			params = ""*/
    RefDS(_5);
    DeRef(_params_23692);
    _params_23692 = _5;
L3: 

    /** preproc.e:61		sequence exts = split(file_ext, ",")*/
    RefDS(_file_ext_23690);
    RefDS(_13494);
    _0 = _exts_23711;
    _exts_23711 = _22split(_file_ext_23690, _13494, 0, 0);
    DeRef(_0);

    /** preproc.e:62		for i = 1 to length(exts) do*/
    if (IS_SEQUENCE(_exts_23711)){
            _13498 = SEQ_PTR(_exts_23711)->length;
    }
    else {
        _13498 = 1;
    }
    {
        object _i_23715;
        _i_23715 = 1;
L4: 
        if (_i_23715 > _13498){
            goto L5; // [96] 135
        }

        /** preproc.e:63			preprocessors &= { { exts[i], command, params, -1 } }*/
        _2 = (object)SEQ_PTR(_exts_23711);
        _13499 = (object)*(((s1_ptr)_2)->base + _i_23715);
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_13499);
        ((intptr_t*)_2)[1] = _13499;
        Ref(_command_23691);
        ((intptr_t*)_2)[2] = _command_23691;
        Ref(_params_23692);
        ((intptr_t*)_2)[3] = _params_23692;
        ((intptr_t*)_2)[4] = -1;
        _13500 = MAKE_SEQ(_1);
        _13499 = NOVALUE;
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _13500;
        _13501 = MAKE_SEQ(_1);
        _13500 = NOVALUE;
        Concat((object_ptr)&_36preprocessors_15421, _36preprocessors_15421, _13501);
        DeRefDS(_13501);
        _13501 = NOVALUE;

        /** preproc.e:64		end for*/
        _i_23715 = _i_23715 + 1;
        goto L4; // [130] 103
L5: 
        ;
    }

    /** preproc.e:65	end procedure */
    DeRefDS(_file_ext_23690);
    DeRef(_command_23691);
    DeRef(_params_23692);
    DeRef(_file_exts_23705);
    DeRef(_exts_23711);
    return;
    ;
}


object _65maybe_preprocess(object _fname_23724)
{
    object _pp_23725 = NOVALUE;
    object _pp_id_23726 = NOVALUE;
    object _fext_23730 = NOVALUE;
    object _post_fname_23747 = NOVALUE;
    object _rid_23775 = NOVALUE;
    object _dll_id_23779 = NOVALUE;
    object _public_cmd_args_23815 = NOVALUE;
    object _cmd_args_23818 = NOVALUE;
    object _cmd_23847 = NOVALUE;
    object _pcmd_23852 = NOVALUE;
    object _result_23857 = NOVALUE;
    object _13580 = NOVALUE;
    object _13579 = NOVALUE;
    object _13574 = NOVALUE;
    object _13573 = NOVALUE;
    object _13571 = NOVALUE;
    object _13570 = NOVALUE;
    object _13568 = NOVALUE;
    object _13566 = NOVALUE;
    object _13565 = NOVALUE;
    object _13563 = NOVALUE;
    object _13560 = NOVALUE;
    object _13558 = NOVALUE;
    object _13556 = NOVALUE;
    object _13554 = NOVALUE;
    object _13553 = NOVALUE;
    object _13551 = NOVALUE;
    object _13550 = NOVALUE;
    object _13548 = NOVALUE;
    object _13545 = NOVALUE;
    object _13544 = NOVALUE;
    object _13543 = NOVALUE;
    object _13541 = NOVALUE;
    object _13537 = NOVALUE;
    object _13535 = NOVALUE;
    object _13534 = NOVALUE;
    object _13533 = NOVALUE;
    object _13529 = NOVALUE;
    object _13526 = NOVALUE;
    object _13525 = NOVALUE;
    object _13524 = NOVALUE;
    object _13522 = NOVALUE;
    object _13519 = NOVALUE;
    object _13517 = NOVALUE;
    object _13516 = NOVALUE;
    object _13514 = NOVALUE;
    object _13512 = NOVALUE;
    object _13510 = NOVALUE;
    object _13508 = NOVALUE;
    object _13507 = NOVALUE;
    object _13506 = NOVALUE;
    object _13505 = NOVALUE;
    object _13503 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** preproc.e:81		sequence pp = {}*/
    RefDS(_5);
    DeRef(_pp_23725);
    _pp_23725 = _5;

    /** preproc.e:84		if length(preprocessors) then*/
    if (IS_SEQUENCE(_36preprocessors_15421)){
            _13503 = SEQ_PTR(_36preprocessors_15421)->length;
    }
    else {
        _13503 = 1;
    }
    if (_13503 == 0)
    {
        _13503 = NOVALUE;
        goto L1; // [17] 89
    }
    else{
        _13503 = NOVALUE;
    }

    /** preproc.e:85			sequence fext = fileext(fname)*/
    RefDS(_fname_23724);
    _0 = _fext_23730;
    _fext_23730 = _16fileext(_fname_23724);
    DeRef(_0);

    /** preproc.e:87			for i = 1 to length(preprocessors) do*/
    if (IS_SEQUENCE(_36preprocessors_15421)){
            _13505 = SEQ_PTR(_36preprocessors_15421)->length;
    }
    else {
        _13505 = 1;
    }
    {
        object _i_23734;
        _i_23734 = 1;
L2: 
        if (_i_23734 > _13505){
            goto L3; // [35] 88
        }

        /** preproc.e:88				if equal(fext, preprocessors[i][1]) then*/
        _2 = (object)SEQ_PTR(_36preprocessors_15421);
        _13506 = (object)*(((s1_ptr)_2)->base + _i_23734);
        _2 = (object)SEQ_PTR(_13506);
        _13507 = (object)*(((s1_ptr)_2)->base + 1);
        _13506 = NOVALUE;
        if (_fext_23730 == _13507)
        _13508 = 1;
        else if (IS_ATOM_INT(_fext_23730) && IS_ATOM_INT(_13507))
        _13508 = 0;
        else
        _13508 = (compare(_fext_23730, _13507) == 0);
        _13507 = NOVALUE;
        if (_13508 == 0)
        {
            _13508 = NOVALUE;
            goto L4; // [58] 81
        }
        else{
            _13508 = NOVALUE;
        }

        /** preproc.e:89					pp_id = i*/
        _pp_id_23726 = _i_23734;

        /** preproc.e:90					pp = preprocessors[pp_id]*/
        DeRef(_pp_23725);
        _2 = (object)SEQ_PTR(_36preprocessors_15421);
        _pp_23725 = (object)*(((s1_ptr)_2)->base + _pp_id_23726);
        RefDS(_pp_23725);

        /** preproc.e:91					exit*/
        goto L3; // [78] 88
L4: 

        /** preproc.e:93			end for*/
        _i_23734 = _i_23734 + 1;
        goto L2; // [83] 42
L3: 
        ;
    }
L1: 
    DeRef(_fext_23730);
    _fext_23730 = NOVALUE;

    /** preproc.e:96		if length(pp) = 0 then */
    if (IS_SEQUENCE(_pp_23725)){
            _13510 = SEQ_PTR(_pp_23725)->length;
    }
    else {
        _13510 = 1;
    }
    if (_13510 != 0)
    goto L5; // [96] 107

    /** preproc.e:97			return fname*/
    DeRefDS(_pp_23725);
    DeRef(_post_fname_23747);
    return _fname_23724;
L5: 

    /** preproc.e:100		sequence post_fname = filebase(fname) & ".pp." & fileext(fname)*/
    RefDS(_fname_23724);
    _13512 = _16filebase(_fname_23724);
    RefDS(_fname_23724);
    _13514 = _16fileext(_fname_23724);
    {
        object concat_list[3];

        concat_list[0] = _13514;
        concat_list[1] = _13513;
        concat_list[2] = _13512;
        Concat_N((object_ptr)&_post_fname_23747, concat_list, 3);
    }
    DeRef(_13514);
    _13514 = NOVALUE;
    DeRef(_13512);
    _13512 = NOVALUE;

    /** preproc.e:101		if length(dirname(fname)) > 0 then*/
    RefDS(_fname_23724);
    _13516 = _16dirname(_fname_23724, 0);
    if (IS_SEQUENCE(_13516)){
            _13517 = SEQ_PTR(_13516)->length;
    }
    else {
        _13517 = 1;
    }
    DeRef(_13516);
    _13516 = NOVALUE;
    if (_13517 <= 0)
    goto L6; // [133] 153

    /** preproc.e:102			post_fname = dirname(fname) & SLASH & post_fname*/
    RefDS(_fname_23724);
    _13519 = _16dirname(_fname_23724, 0);
    {
        object concat_list[3];

        concat_list[0] = _post_fname_23747;
        concat_list[1] = 47;
        concat_list[2] = _13519;
        Concat_N((object_ptr)&_post_fname_23747, concat_list, 3);
    }
    DeRef(_13519);
    _13519 = NOVALUE;
L6: 

    /** preproc.e:105		if not force_preprocessor then*/
    if (_36force_preprocessor_15422 != 0)
    goto L7; // [157] 178

    /** preproc.e:106			if not is_file_newer(fname, post_fname) then*/
    RefDS(_fname_23724);
    RefDS(_post_fname_23747);
    _13522 = _65is_file_newer(_fname_23724, _post_fname_23747);
    if (IS_ATOM_INT(_13522)) {
        if (_13522 != 0){
            DeRef(_13522);
            _13522 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    else {
        if (DBL_PTR(_13522)->dbl != 0.0){
            DeRef(_13522);
            _13522 = NOVALUE;
            goto L8; // [167] 177
        }
    }
    DeRef(_13522);
    _13522 = NOVALUE;

    /** preproc.e:107				return post_fname*/
    DeRefDS(_fname_23724);
    DeRef(_pp_23725);
    _13516 = NOVALUE;
    return _post_fname_23747;
L8: 
L7: 

    /** preproc.e:112		if equal(fileext(pp[PP_COMMAND]), SHARED_LIB_EXT) then*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _13524 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_13524);
    _13525 = _16fileext(_13524);
    _13524 = NOVALUE;
    if (_13525 == _16SHARED_LIB_EXT_7547)
    _13526 = 1;
    else if (IS_ATOM_INT(_13525) && IS_ATOM_INT(_16SHARED_LIB_EXT_7547))
    _13526 = 0;
    else
    _13526 = (compare(_13525, _16SHARED_LIB_EXT_7547) == 0);
    DeRef(_13525);
    _13525 = NOVALUE;
    if (_13526 == 0)
    {
        _13526 = NOVALUE;
        goto L9; // [194] 348
    }
    else{
        _13526 = NOVALUE;
    }

    /** preproc.e:113			integer rid = pp[PP_RID]*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _rid_23775 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_rid_23775))
    _rid_23775 = (object)DBL_PTR(_rid_23775)->dbl;

    /** preproc.e:114			if rid = -1 then*/
    if (_rid_23775 != -1)
    goto LA; // [205] 307

    /** preproc.e:115				integer dll_id = open_dll(pp[PP_COMMAND])*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _13529 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_13529);
    _dll_id_23779 = _7open_dll(_13529);
    _13529 = NOVALUE;
    if (!IS_ATOM_INT(_dll_id_23779)) {
        _1 = (object)(DBL_PTR(_dll_id_23779)->dbl);
        DeRefDS(_dll_id_23779);
        _dll_id_23779 = _1;
    }

    /** preproc.e:116				if dll_id = -1 then*/
    if (_dll_id_23779 != -1)
    goto LB; // [223] 247

    /** preproc.e:117					CompileErr(sprintf("Preprocessor shared library '%s' could not be loaded\n",*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _13533 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13533);
    ((intptr_t*)_2)[1] = _13533;
    _13534 = MAKE_SEQ(_1);
    _13533 = NOVALUE;
    _13535 = EPrintf(-9999999, _13532, _13534);
    DeRefDS(_13534);
    _13534 = NOVALUE;
    RefDS(_21928);
    _52CompileErr(_13535, _21928, 1);
    _13535 = NOVALUE;
LB: 

    /** preproc.e:121				rid = define_c_func(dll_id, "preprocess", { E_SEQUENCE, E_SEQUENCE, E_SEQUENCE }, */
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 134217732;
    ((intptr_t*)_2)[2] = 134217732;
    ((intptr_t*)_2)[3] = 134217732;
    _13537 = MAKE_SEQ(_1);
    RefDS(_13536);
    _rid_23775 = _7define_c_func(_dll_id_23779, _13536, _13537, 100663300);
    _13537 = NOVALUE;
    if (!IS_ATOM_INT(_rid_23775)) {
        _1 = (object)(DBL_PTR(_rid_23775)->dbl);
        DeRefDS(_rid_23775);
        _rid_23775 = _1;
    }

    /** preproc.e:123				if rid = -1 then*/
    if (_rid_23775 != -1)
    goto LC; // [274] 291

    /** preproc.e:124					CompileErr("Preprocessor entry point cound not be found\n",,1)*/
    RefDS(_13540);
    RefDS(_21928);
    _52CompileErr(_13540, _21928, 1);

    /** preproc.e:126					Cleanup(1)*/
    _52Cleanup(1);
LC: 

    /** preproc.e:129				preprocessors[pp_id][PP_RID] = rid*/
    _2 = (object)SEQ_PTR(_36preprocessors_15421);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36preprocessors_15421 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pp_id_23726 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _rid_23775;
    DeRef(_1);
    _13541 = NOVALUE;
LA: 

    /** preproc.e:132			if c_func(rid, { fname, post_fname, pp[PP_PARAMS] }) != 0 then*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _13543 = (object)*(((s1_ptr)_2)->base + 3);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_fname_23724);
    ((intptr_t*)_2)[1] = _fname_23724;
    RefDS(_post_fname_23747);
    ((intptr_t*)_2)[2] = _post_fname_23747;
    Ref(_13543);
    ((intptr_t*)_2)[3] = _13543;
    _13544 = MAKE_SEQ(_1);
    _13543 = NOVALUE;
    _13545 = call_c(1, _rid_23775, _13544);
    DeRefDS(_13544);
    _13544 = NOVALUE;
    if (binary_op_a(EQUALS, _13545, 0)){
        DeRef(_13545);
        _13545 = NOVALUE;
        goto LD; // [326] 343
    }
    DeRef(_13545);
    _13545 = NOVALUE;

    /** preproc.e:133				CompileErr("Preprocessor call failed\n",,1)*/
    RefDS(_13547);
    RefDS(_21928);
    _52CompileErr(_13547, _21928, 1);

    /** preproc.e:135				Cleanup(1)*/
    _52Cleanup(1);
LD: 
    goto LE; // [345] 520
L9: 

    /** preproc.e:138			sequence public_cmd_args = {pp[PP_COMMAND]}*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _13548 = (object)*(((s1_ptr)_2)->base + 2);
    _0 = _public_cmd_args_23815;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_13548);
    ((intptr_t*)_2)[1] = _13548;
    _public_cmd_args_23815 = MAKE_SEQ(_1);
    DeRef(_0);
    _13548 = NOVALUE;

    /** preproc.e:139			sequence cmd_args = {canonical_path(pp[PP_COMMAND],,TO_SHORT)}*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _13550 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_13550);
    _13551 = _16canonical_path(_13550, 0, 4);
    _13550 = NOVALUE;
    _0 = _cmd_args_23818;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _13551;
    _cmd_args_23818 = MAKE_SEQ(_1);
    DeRef(_0);
    _13551 = NOVALUE;

    /** preproc.e:141			if equal(fileext(pp[PP_COMMAND]), "ex") then*/
    _2 = (object)SEQ_PTR(_pp_23725);
    _13553 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_13553);
    _13554 = _16fileext(_13553);
    _13553 = NOVALUE;
    if (_13554 == _13555)
    _13556 = 1;
    else if (IS_ATOM_INT(_13554) && IS_ATOM_INT(_13555))
    _13556 = 0;
    else
    _13556 = (compare(_13554, _13555) == 0);
    DeRef(_13554);
    _13554 = NOVALUE;
    if (_13556 == 0)
    {
        _13556 = NOVALUE;
        goto LF; // [390] 414
    }
    else{
        _13556 = NOVALUE;
    }

    /** preproc.e:142				public_cmd_args = { "eui" } & public_cmd_args*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13557);
    ((intptr_t*)_2)[1] = _13557;
    _13558 = MAKE_SEQ(_1);
    Concat((object_ptr)&_public_cmd_args_23815, _13558, _public_cmd_args_23815);
    DeRefDS(_13558);
    _13558 = NOVALUE;
    DeRef(_13558);
    _13558 = NOVALUE;

    /** preproc.e:143				cmd_args = { "eui" } & cmd_args*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13557);
    ((intptr_t*)_2)[1] = _13557;
    _13560 = MAKE_SEQ(_1);
    Concat((object_ptr)&_cmd_args_23818, _13560, _cmd_args_23818);
    DeRefDS(_13560);
    _13560 = NOVALUE;
    DeRef(_13560);
    _13560 = NOVALUE;
LF: 

    /** preproc.e:146			cmd_args &= { "-i", canonical_path(fname,,TO_SHORT), "-o", canonical_path(post_fname,,TO_SHORT) }*/
    RefDS(_fname_23724);
    _13563 = _16canonical_path(_fname_23724, 0, 4);
    RefDS(_post_fname_23747);
    _13565 = _16canonical_path(_post_fname_23747, 0, 4);
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13562);
    ((intptr_t*)_2)[1] = _13562;
    ((intptr_t*)_2)[2] = _13563;
    RefDS(_13564);
    ((intptr_t*)_2)[3] = _13564;
    ((intptr_t*)_2)[4] = _13565;
    _13566 = MAKE_SEQ(_1);
    _13565 = NOVALUE;
    _13563 = NOVALUE;
    Concat((object_ptr)&_cmd_args_23818, _cmd_args_23818, _13566);
    DeRefDS(_13566);
    _13566 = NOVALUE;

    /** preproc.e:147			public_cmd_args &= { "-i", fname, "-o", post_fname }*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_13562);
    ((intptr_t*)_2)[1] = _13562;
    RefDS(_fname_23724);
    ((intptr_t*)_2)[2] = _fname_23724;
    RefDS(_13564);
    ((intptr_t*)_2)[3] = _13564;
    RefDS(_post_fname_23747);
    ((intptr_t*)_2)[4] = _post_fname_23747;
    _13568 = MAKE_SEQ(_1);
    Concat((object_ptr)&_public_cmd_args_23815, _public_cmd_args_23815, _13568);
    DeRefDS(_13568);
    _13568 = NOVALUE;

    /** preproc.e:148			sequence cmd = build_commandline( cmd_args ) & pp[PP_PARAMS]*/
    RefDS(_cmd_args_23818);
    _13570 = _28build_commandline(_cmd_args_23818);
    _2 = (object)SEQ_PTR(_pp_23725);
    _13571 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_SEQUENCE(_13570) && IS_ATOM(_13571)) {
        Ref(_13571);
        Append(&_cmd_23847, _13570, _13571);
    }
    else if (IS_ATOM(_13570) && IS_SEQUENCE(_13571)) {
        Ref(_13570);
        Prepend(&_cmd_23847, _13571, _13570);
    }
    else {
        Concat((object_ptr)&_cmd_23847, _13570, _13571);
        DeRef(_13570);
        _13570 = NOVALUE;
    }
    DeRef(_13570);
    _13570 = NOVALUE;
    _13571 = NOVALUE;

    /** preproc.e:149			sequence pcmd = build_commandline(public_cmd_args) & pp[PP_PARAMS]*/
    RefDS(_public_cmd_args_23815);
    _13573 = _28build_commandline(_public_cmd_args_23815);
    _2 = (object)SEQ_PTR(_pp_23725);
    _13574 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_SEQUENCE(_13573) && IS_ATOM(_13574)) {
        Ref(_13574);
        Append(&_pcmd_23852, _13573, _13574);
    }
    else if (IS_ATOM(_13573) && IS_SEQUENCE(_13574)) {
        Ref(_13573);
        Prepend(&_pcmd_23852, _13574, _13573);
    }
    else {
        Concat((object_ptr)&_pcmd_23852, _13573, _13574);
        DeRef(_13573);
        _13573 = NOVALUE;
    }
    DeRef(_13573);
    _13573 = NOVALUE;
    _13574 = NOVALUE;

    /** preproc.e:150			integer result = system_exec(cmd, 2)*/
    _result_23857 = system_exec_call(_cmd_23847, 2);

    /** preproc.e:151			if result != 0 then*/
    if (_result_23857 == 0)
    goto L10; // [492] 517

    /** preproc.e:152				CompileErr(sprintf("Preprocessor command failed (%d): %s\n", { result, pcmd } ),,1)*/
    RefDS(_pcmd_23852);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _result_23857;
    ((intptr_t *)_2)[2] = _pcmd_23852;
    _13579 = MAKE_SEQ(_1);
    _13580 = EPrintf(-9999999, _13578, _13579);
    DeRefDS(_13579);
    _13579 = NOVALUE;
    RefDS(_21928);
    _52CompileErr(_13580, _21928, 1);
    _13580 = NOVALUE;

    /** preproc.e:154				Cleanup(1)*/
    _52Cleanup(1);
L10: 
    DeRef(_public_cmd_args_23815);
    _public_cmd_args_23815 = NOVALUE;
    DeRef(_cmd_args_23818);
    _cmd_args_23818 = NOVALUE;
    DeRef(_cmd_23847);
    _cmd_23847 = NOVALUE;
    DeRef(_pcmd_23852);
    _pcmd_23852 = NOVALUE;
LE: 

    /** preproc.e:158		return post_fname*/
    DeRefDS(_fname_23724);
    DeRef(_pp_23725);
    _13516 = NOVALUE;
    return _post_fname_23747;
    ;
}



// 0x28A5BA1C
