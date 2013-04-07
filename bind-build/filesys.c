// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _16find_first_wildcard(object _name_7570, object _from_7571)
{
    object _asterisk_at_7572 = NOVALUE;
    object _question_at_7574 = NOVALUE;
    object _first_wildcard_at_7576 = NOVALUE;
    object _4016 = NOVALUE;
    object _4015 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:247		integer asterisk_at = eu:find('*', name, from)*/
    _asterisk_at_7572 = find_from(42, _name_7570, _from_7571);

    /** filesys.e:248		integer question_at = eu:find('?', name, from)*/
    _question_at_7574 = find_from(63, _name_7570, _from_7571);

    /** filesys.e:249		integer first_wildcard_at = asterisk_at*/
    _first_wildcard_at_7576 = _asterisk_at_7572;

    /** filesys.e:250		if asterisk_at or question_at then*/
    if (_asterisk_at_7572 != 0) {
        goto L1; // [26] 35
    }
    if (_question_at_7574 == 0)
    {
        goto L2; // [31] 56
    }
    else{
    }
L1: 

    /** filesys.e:253			if question_at and question_at < asterisk_at then*/
    if (_question_at_7574 == 0) {
        goto L3; // [37] 55
    }
    _4016 = (_question_at_7574 < _asterisk_at_7572);
    if (_4016 == 0)
    {
        DeRef(_4016);
        _4016 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        DeRef(_4016);
        _4016 = NOVALUE;
    }

    /** filesys.e:254				first_wildcard_at = question_at*/
    _first_wildcard_at_7576 = _question_at_7574;
L3: 
L2: 

    /** filesys.e:257		return first_wildcard_at*/
    DeRefDS(_name_7570);
    return _first_wildcard_at_7576;
    ;
}


object _16dir(object _name_7584)
{
    object _dir_data_7585 = NOVALUE;
    object _data_7586 = NOVALUE;
    object _the_name_7587 = NOVALUE;
    object _the_dir_7588 = NOVALUE;
    object _the_suffix_7589 = NOVALUE;
    object _idx_7590 = NOVALUE;
    object _first_wildcard_at_7591 = NOVALUE;
    object _next_slash_7606 = NOVALUE;
    object _wild_data_7638 = NOVALUE;
    object _interim_dir_7642 = NOVALUE;
    object _dir_results_7646 = NOVALUE;
    object _4059 = NOVALUE;
    object _4058 = NOVALUE;
    object _4057 = NOVALUE;
    object _4055 = NOVALUE;
    object _4054 = NOVALUE;
    object _4053 = NOVALUE;
    object _4051 = NOVALUE;
    object _4049 = NOVALUE;
    object _4048 = NOVALUE;
    object _4047 = NOVALUE;
    object _4046 = NOVALUE;
    object _4044 = NOVALUE;
    object _4042 = NOVALUE;
    object _4041 = NOVALUE;
    object _4040 = NOVALUE;
    object _4039 = NOVALUE;
    object _4038 = NOVALUE;
    object _4037 = NOVALUE;
    object _4034 = NOVALUE;
    object _4033 = NOVALUE;
    object _4031 = NOVALUE;
    object _4029 = NOVALUE;
    object _4028 = NOVALUE;
    object _4021 = NOVALUE;
    object _4019 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** filesys.e:358		ifdef WINDOWS then*/

    /** filesys.e:361			object dir_data, data, the_name, the_dir, the_suffix = 0*/
    DeRef(_the_suffix_7589);
    _the_suffix_7589 = 0;

    /** filesys.e:362			integer idx*/

    /** filesys.e:365			integer first_wildcard_at = find_first_wildcard( name )*/
    RefDS(_name_7584);
    _first_wildcard_at_7591 = _16find_first_wildcard(_name_7584, 1);
    if (!IS_ATOM_INT(_first_wildcard_at_7591)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_7591)->dbl);
        DeRefDS(_first_wildcard_at_7591);
        _first_wildcard_at_7591 = _1;
    }

    /** filesys.e:366			if first_wildcard_at = 0 then*/
    if (_first_wildcard_at_7591 != 0)
    goto L1; // [23] 38

    /** filesys.e:367				return machine_func(M_DIR, name)*/
    _4019 = machine(22, _name_7584);
    DeRefDS(_name_7584);
    DeRef(_dir_data_7585);
    DeRef(_data_7586);
    DeRef(_the_name_7587);
    DeRef(_the_dir_7588);
    return _4019;
L1: 

    /** filesys.e:371			if first_wildcard_at then*/
    if (_first_wildcard_at_7591 == 0)
    {
        goto L2; // [40] 56
    }
    else{
    }

    /** filesys.e:372				idx = search:rfind(SLASH, name, first_wildcard_at )*/
    RefDS(_name_7584);
    _idx_7590 = _15rfind(47, _name_7584, _first_wildcard_at_7591);
    if (!IS_ATOM_INT(_idx_7590)) {
        _1 = (object)(DBL_PTR(_idx_7590)->dbl);
        DeRefDS(_idx_7590);
        _idx_7590 = _1;
    }
    goto L3; // [53] 70
L2: 

    /** filesys.e:374				idx = search:rfind(SLASH, name )*/
    if (IS_SEQUENCE(_name_7584)){
            _4021 = SEQ_PTR(_name_7584)->length;
    }
    else {
        _4021 = 1;
    }
    RefDS(_name_7584);
    _idx_7590 = _15rfind(47, _name_7584, _4021);
    _4021 = NOVALUE;
    if (!IS_ATOM_INT(_idx_7590)) {
        _1 = (object)(DBL_PTR(_idx_7590)->dbl);
        DeRefDS(_idx_7590);
        _idx_7590 = _1;
    }
L3: 

    /** filesys.e:377			if idx = 0 then*/
    if (_idx_7590 != 0)
    goto L4; // [74] 91

    /** filesys.e:378				the_dir = "."*/
    RefDS(_4024);
    DeRef(_the_dir_7588);
    _the_dir_7588 = _4024;

    /** filesys.e:379				the_name = name*/
    RefDS(_name_7584);
    DeRef(_the_name_7587);
    _the_name_7587 = _name_7584;
    goto L5; // [88] 187
L4: 

    /** filesys.e:383				the_dir = name[1 .. idx]*/
    rhs_slice_target = (object_ptr)&_the_dir_7588;
    RHS_Slice(_name_7584, 1, _idx_7590);

    /** filesys.e:384				integer next_slash = 0*/
    _next_slash_7606 = 0;

    /** filesys.e:385				if first_wildcard_at then*/
    if (_first_wildcard_at_7591 == 0)
    {
        goto L6; // [105] 116
    }
    else{
    }

    /** filesys.e:386					next_slash = eu:find( SLASH, name, first_wildcard_at )*/
    _next_slash_7606 = find_from(47, _name_7584, _first_wildcard_at_7591);
L6: 

    /** filesys.e:389				if next_slash then*/
    if (_next_slash_7606 == 0)
    {
        goto L7; // [118] 164
    }
    else{
    }

    /** filesys.e:390					first_wildcard_at = find_first_wildcard( name, next_slash )*/
    RefDS(_name_7584);
    _first_wildcard_at_7591 = _16find_first_wildcard(_name_7584, _next_slash_7606);
    if (!IS_ATOM_INT(_first_wildcard_at_7591)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_7591)->dbl);
        DeRefDS(_first_wildcard_at_7591);
        _first_wildcard_at_7591 = _1;
    }

    /** filesys.e:391					if first_wildcard_at then*/
    if (_first_wildcard_at_7591 == 0)
    {
        goto L8; // [132] 184
    }
    else{
    }

    /** filesys.e:392						the_name = name[idx+1..next_slash-1]*/
    _4028 = _idx_7590 + 1;
    if (_4028 > MAXINT){
        _4028 = NewDouble((eudouble)_4028);
    }
    _4029 = _next_slash_7606 - 1;
    rhs_slice_target = (object_ptr)&_the_name_7587;
    RHS_Slice(_name_7584, _4028, _4029);

    /** filesys.e:393						the_suffix = name[next_slash..$]*/
    if (IS_SEQUENCE(_name_7584)){
            _4031 = SEQ_PTR(_name_7584)->length;
    }
    else {
        _4031 = 1;
    }
    rhs_slice_target = (object_ptr)&_the_suffix_7589;
    RHS_Slice(_name_7584, _next_slash_7606, _4031);
    goto L8; // [161] 184
L7: 

    /** filesys.e:396					the_name = name[idx+1 .. $]*/
    _4033 = _idx_7590 + 1;
    if (_4033 > MAXINT){
        _4033 = NewDouble((eudouble)_4033);
    }
    if (IS_SEQUENCE(_name_7584)){
            _4034 = SEQ_PTR(_name_7584)->length;
    }
    else {
        _4034 = 1;
    }
    rhs_slice_target = (object_ptr)&_the_name_7587;
    RHS_Slice(_name_7584, _4033, _4034);

    /** filesys.e:397					the_suffix = 0*/
    DeRef(_the_suffix_7589);
    _the_suffix_7589 = 0;
L8: 
L5: 

    /** filesys.e:403			dir_data = dir( the_dir )*/
    Ref(_the_dir_7588);
    _0 = _dir_data_7585;
    _dir_data_7585 = _16dir(_the_dir_7588);
    DeRef(_0);

    /** filesys.e:406			if atom(dir_data) then*/
    _4037 = IS_ATOM(_dir_data_7585);
    if (_4037 == 0)
    {
        _4037 = NOVALUE;
        goto L9; // [200] 210
    }
    else{
        _4037 = NOVALUE;
    }

    /** filesys.e:407				return dir_data*/
    DeRefDS(_name_7584);
    DeRef(_data_7586);
    DeRef(_the_name_7587);
    DeRef(_the_dir_7588);
    DeRef(_the_suffix_7589);
    DeRef(_4033);
    _4033 = NOVALUE;
    DeRef(_4028);
    _4028 = NOVALUE;
    DeRef(_4019);
    _4019 = NOVALUE;
    DeRef(_4029);
    _4029 = NOVALUE;
    return _dir_data_7585;
L9: 

    /** filesys.e:412			data = {}*/
    RefDS(_5);
    DeRef(_data_7586);
    _data_7586 = _5;

    /** filesys.e:413			for i = 1 to length(dir_data) do*/
    if (IS_SEQUENCE(_dir_data_7585)){
            _4038 = SEQ_PTR(_dir_data_7585)->length;
    }
    else {
        _4038 = 1;
    }
    {
        object _i_7625;
        _i_7625 = 1;
LA: 
        if (_i_7625 > _4038){
            goto LB; // [220] 265
        }

        /** filesys.e:414				if wildcard:is_match(the_name, dir_data[i][1]) then*/
        _2 = (object)SEQ_PTR(_dir_data_7585);
        _4039 = (object)*(((s1_ptr)_2)->base + _i_7625);
        _2 = (object)SEQ_PTR(_4039);
        _4040 = (object)*(((s1_ptr)_2)->base + 1);
        _4039 = NOVALUE;
        Ref(_the_name_7587);
        Ref(_4040);
        _4041 = _24is_match(_the_name_7587, _4040);
        _4040 = NOVALUE;
        if (_4041 == 0) {
            DeRef(_4041);
            _4041 = NOVALUE;
            goto LC; // [244] 258
        }
        else {
            if (!IS_ATOM_INT(_4041) && DBL_PTR(_4041)->dbl == 0.0){
                DeRef(_4041);
                _4041 = NOVALUE;
                goto LC; // [244] 258
            }
            DeRef(_4041);
            _4041 = NOVALUE;
        }
        DeRef(_4041);
        _4041 = NOVALUE;

        /** filesys.e:415						data = append(data, dir_data[i])*/
        _2 = (object)SEQ_PTR(_dir_data_7585);
        _4042 = (object)*(((s1_ptr)_2)->base + _i_7625);
        Ref(_4042);
        Append(&_data_7586, _data_7586, _4042);
        _4042 = NOVALUE;
LC: 

        /** filesys.e:417			end for*/
        _i_7625 = _i_7625 + 1;
        goto LA; // [260] 227
LB: 
        ;
    }

    /** filesys.e:419			if not length(data) then*/
    if (IS_SEQUENCE(_data_7586)){
            _4044 = SEQ_PTR(_data_7586)->length;
    }
    else {
        _4044 = 1;
    }
    if (_4044 != 0)
    goto LD; // [270] 280
    _4044 = NOVALUE;

    /** filesys.e:421				return -1*/
    DeRefDS(_name_7584);
    DeRef(_dir_data_7585);
    DeRef(_data_7586);
    DeRef(_the_name_7587);
    DeRef(_the_dir_7588);
    DeRef(_the_suffix_7589);
    DeRef(_4033);
    _4033 = NOVALUE;
    DeRef(_4028);
    _4028 = NOVALUE;
    DeRef(_4019);
    _4019 = NOVALUE;
    DeRef(_4029);
    _4029 = NOVALUE;
    return -1;
LD: 

    /** filesys.e:424			if sequence( the_suffix ) then*/
    _4046 = IS_SEQUENCE(_the_suffix_7589);
    if (_4046 == 0)
    {
        _4046 = NOVALUE;
        goto LE; // [285] 406
    }
    else{
        _4046 = NOVALUE;
    }

    /** filesys.e:425				sequence wild_data = {}*/
    RefDS(_5);
    DeRef(_wild_data_7638);
    _wild_data_7638 = _5;

    /** filesys.e:426				for i = 1 to length( dir_data ) do*/
    if (IS_SEQUENCE(_dir_data_7585)){
            _4047 = SEQ_PTR(_dir_data_7585)->length;
    }
    else {
        _4047 = 1;
    }
    {
        object _i_7640;
        _i_7640 = 1;
LF: 
        if (_i_7640 > _4047){
            goto L10; // [300] 399
        }

        /** filesys.e:427					sequence interim_dir = the_dir & dir_data[i][D_NAME] & SLASH*/
        _2 = (object)SEQ_PTR(_dir_data_7585);
        _4048 = (object)*(((s1_ptr)_2)->base + _i_7640);
        _2 = (object)SEQ_PTR(_4048);
        _4049 = (object)*(((s1_ptr)_2)->base + 1);
        _4048 = NOVALUE;
        {
            object concat_list[3];

            concat_list[0] = 47;
            concat_list[1] = _4049;
            concat_list[2] = _the_dir_7588;
            Concat_N((object_ptr)&_interim_dir_7642, concat_list, 3);
        }
        _4049 = NOVALUE;

        /** filesys.e:428					object dir_results = dir( interim_dir & the_suffix )*/
        if (IS_SEQUENCE(_interim_dir_7642) && IS_ATOM(_the_suffix_7589)) {
            Ref(_the_suffix_7589);
            Append(&_4051, _interim_dir_7642, _the_suffix_7589);
        }
        else if (IS_ATOM(_interim_dir_7642) && IS_SEQUENCE(_the_suffix_7589)) {
        }
        else {
            Concat((object_ptr)&_4051, _interim_dir_7642, _the_suffix_7589);
        }
        _0 = _dir_results_7646;
        _dir_results_7646 = _16dir(_4051);
        DeRef(_0);
        _4051 = NOVALUE;

        /** filesys.e:429					if sequence( dir_results ) then*/
        _4053 = IS_SEQUENCE(_dir_results_7646);
        if (_4053 == 0)
        {
            _4053 = NOVALUE;
            goto L11; // [338] 390
        }
        else{
            _4053 = NOVALUE;
        }

        /** filesys.e:430						for j = 1 to length( dir_results ) do*/
        if (IS_SEQUENCE(_dir_results_7646)){
                _4054 = SEQ_PTR(_dir_results_7646)->length;
        }
        else {
            _4054 = 1;
        }
        {
            object _j_7652;
            _j_7652 = 1;
L12: 
            if (_j_7652 > _4054){
                goto L13; // [346] 383
            }

            /** filesys.e:431							dir_results[j][D_NAME] = interim_dir & dir_results[j][D_NAME]*/
            _2 = (object)SEQ_PTR(_dir_results_7646);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _dir_results_7646 = MAKE_SEQ(_2);
            }
            _3 = (object)(_j_7652 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(_dir_results_7646);
            _4057 = (object)*(((s1_ptr)_2)->base + _j_7652);
            _2 = (object)SEQ_PTR(_4057);
            _4058 = (object)*(((s1_ptr)_2)->base + 1);
            _4057 = NOVALUE;
            if (IS_SEQUENCE(_interim_dir_7642) && IS_ATOM(_4058)) {
                Ref(_4058);
                Append(&_4059, _interim_dir_7642, _4058);
            }
            else if (IS_ATOM(_interim_dir_7642) && IS_SEQUENCE(_4058)) {
            }
            else {
                Concat((object_ptr)&_4059, _interim_dir_7642, _4058);
            }
            _4058 = NOVALUE;
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 1);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _4059;
            if( _1 != _4059 ){
                DeRef(_1);
            }
            _4059 = NOVALUE;
            _4055 = NOVALUE;

            /** filesys.e:432						end for*/
            _j_7652 = _j_7652 + 1;
            goto L12; // [378] 353
L13: 
            ;
        }

        /** filesys.e:433						wild_data &= dir_results*/
        if (IS_SEQUENCE(_wild_data_7638) && IS_ATOM(_dir_results_7646)) {
            Ref(_dir_results_7646);
            Append(&_wild_data_7638, _wild_data_7638, _dir_results_7646);
        }
        else if (IS_ATOM(_wild_data_7638) && IS_SEQUENCE(_dir_results_7646)) {
        }
        else {
            Concat((object_ptr)&_wild_data_7638, _wild_data_7638, _dir_results_7646);
        }
L11: 
        DeRef(_interim_dir_7642);
        _interim_dir_7642 = NOVALUE;
        DeRef(_dir_results_7646);
        _dir_results_7646 = NOVALUE;

        /** filesys.e:435				end for*/
        _i_7640 = _i_7640 + 1;
        goto LF; // [394] 307
L10: 
        ;
    }

    /** filesys.e:436				return wild_data*/
    DeRefDS(_name_7584);
    DeRef(_dir_data_7585);
    DeRef(_data_7586);
    DeRef(_the_name_7587);
    DeRef(_the_dir_7588);
    DeRef(_the_suffix_7589);
    DeRef(_4033);
    _4033 = NOVALUE;
    DeRef(_4028);
    _4028 = NOVALUE;
    DeRef(_4019);
    _4019 = NOVALUE;
    DeRef(_4029);
    _4029 = NOVALUE;
    return _wild_data_7638;
LE: 
    DeRef(_wild_data_7638);
    _wild_data_7638 = NOVALUE;

    /** filesys.e:439			return data*/
    DeRefDS(_name_7584);
    DeRef(_dir_data_7585);
    DeRef(_the_name_7587);
    DeRef(_the_dir_7588);
    DeRef(_the_suffix_7589);
    DeRef(_4033);
    _4033 = NOVALUE;
    DeRef(_4028);
    _4028 = NOVALUE;
    DeRef(_4019);
    _4019 = NOVALUE;
    DeRef(_4029);
    _4029 = NOVALUE;
    return _data_7586;
    ;
}


object _16current_dir()
{
    object _4061 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:465		return machine_func(M_CURRENT_DIR, 0)*/
    _4061 = machine(23, 0);
    return _4061;
    ;
}


object _16chdir(object _newdir_7665)
{
    object _4062 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:501		return machine_func(M_CHDIR, newdir)*/
    _4062 = machine(63, _newdir_7665);
    DeRefDS(_newdir_7665);
    return _4062;
    ;
}


object _16delete_file(object _name_7798)
{
    object _pfilename_7799 = NOVALUE;
    object _success_7801 = NOVALUE;
    object _4139 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:802		atom pfilename = machine:allocate_string(name)*/
    RefDS(_name_7798);
    _0 = _pfilename_7799;
    _pfilename_7799 = _4allocate_string(_name_7798, 0);
    DeRef(_0);

    /** filesys.e:803		integer success = c_func(xDeleteFile, {pfilename})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_pfilename_7799);
    ((intptr_t*)_2)[1] = _pfilename_7799;
    _4139 = MAKE_SEQ(_1);
    _success_7801 = call_c(1, _16xDeleteFile_7516, _4139);
    DeRefDS(_4139);
    _4139 = NOVALUE;
    if (!IS_ATOM_INT(_success_7801)) {
        _1 = (object)(DBL_PTR(_success_7801)->dbl);
        DeRefDS(_success_7801);
        _success_7801 = _1;
    }

    /** filesys.e:805		ifdef UNIX then*/

    /** filesys.e:806			success = not success*/
    _success_7801 = (_success_7801 == 0);

    /** filesys.e:809		machine:free(pfilename)*/
    Ref(_pfilename_7799);
    _4free(_pfilename_7799);

    /** filesys.e:811		return success*/
    DeRefDS(_name_7798);
    DeRef(_pfilename_7799);
    return _success_7801;
    ;
}


object _16curdir(object _drive_id_7807)
{
    object _lCurDir_7808 = NOVALUE;
    object _current_dir_inlined_current_dir_at_6_7810 = NOVALUE;
    object _4143 = NOVALUE;
    object _4142 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:847		ifdef not LINUX then*/

    /** filesys.e:862	    lCurDir = current_dir()*/

    /** filesys.e:465		return machine_func(M_CURRENT_DIR, 0)*/
    DeRefi(_lCurDir_7808);
    _lCurDir_7808 = machine(23, 0);

    /** filesys.e:863		ifdef not LINUX then*/

    /** filesys.e:870		if (lCurDir[$] != SLASH) then*/
    if (IS_SEQUENCE(_lCurDir_7808)){
            _4142 = SEQ_PTR(_lCurDir_7808)->length;
    }
    else {
        _4142 = 1;
    }
    _2 = (object)SEQ_PTR(_lCurDir_7808);
    _4143 = (object)*(((s1_ptr)_2)->base + _4142);
    if (_4143 == 47)
    goto L1; // [27] 38

    /** filesys.e:871			lCurDir &= SLASH*/
    Append(&_lCurDir_7808, _lCurDir_7808, 47);
L1: 

    /** filesys.e:874		return lCurDir*/
    _4143 = NOVALUE;
    return _lCurDir_7808;
    ;
}


object _16pathinfo(object _path_7941, object _std_slash_7942)
{
    object _slash_7943 = NOVALUE;
    object _period_7944 = NOVALUE;
    object _ch_7945 = NOVALUE;
    object _dir_name_7946 = NOVALUE;
    object _file_name_7947 = NOVALUE;
    object _file_ext_7948 = NOVALUE;
    object _file_full_7949 = NOVALUE;
    object _drive_id_7950 = NOVALUE;
    object _from_slash_7982 = NOVALUE;
    object _4245 = NOVALUE;
    object _4238 = NOVALUE;
    object _4237 = NOVALUE;
    object _4234 = NOVALUE;
    object _4233 = NOVALUE;
    object _4231 = NOVALUE;
    object _4230 = NOVALUE;
    object _4227 = NOVALUE;
    object _4225 = NOVALUE;
    object _4224 = NOVALUE;
    object _4223 = NOVALUE;
    object _4222 = NOVALUE;
    object _4220 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1196		dir_name  = ""*/
    RefDS(_5);
    DeRef(_dir_name_7946);
    _dir_name_7946 = _5;

    /** filesys.e:1197		file_name = ""*/
    RefDS(_5);
    DeRef(_file_name_7947);
    _file_name_7947 = _5;

    /** filesys.e:1198		file_ext  = ""*/
    RefDS(_5);
    DeRef(_file_ext_7948);
    _file_ext_7948 = _5;

    /** filesys.e:1199		file_full = ""*/
    RefDS(_5);
    DeRef(_file_full_7949);
    _file_full_7949 = _5;

    /** filesys.e:1200		drive_id  = ""*/
    RefDS(_5);
    DeRef(_drive_id_7950);
    _drive_id_7950 = _5;

    /** filesys.e:1202		slash = 0*/
    _slash_7943 = 0;

    /** filesys.e:1203		period = 0*/
    _period_7944 = 0;

    /** filesys.e:1205		for i = length(path) to 1 by -1 do*/
    if (IS_SEQUENCE(_path_7941)){
            _4220 = SEQ_PTR(_path_7941)->length;
    }
    else {
        _4220 = 1;
    }
    {
        object _i_7952;
        _i_7952 = _4220;
L1: 
        if (_i_7952 < 1){
            goto L2; // [55] 122
        }

        /** filesys.e:1206			ch = path[i]*/
        _2 = (object)SEQ_PTR(_path_7941);
        _ch_7945 = (object)*(((s1_ptr)_2)->base + _i_7952);
        if (!IS_ATOM_INT(_ch_7945))
        _ch_7945 = (object)DBL_PTR(_ch_7945)->dbl;

        /** filesys.e:1207			if period = 0 and ch = '.' then*/
        _4222 = (_period_7944 == 0);
        if (_4222 == 0) {
            goto L3; // [74] 94
        }
        _4224 = (_ch_7945 == 46);
        if (_4224 == 0)
        {
            DeRef(_4224);
            _4224 = NOVALUE;
            goto L3; // [83] 94
        }
        else{
            DeRef(_4224);
            _4224 = NOVALUE;
        }

        /** filesys.e:1208				period = i*/
        _period_7944 = _i_7952;
        goto L4; // [91] 115
L3: 

        /** filesys.e:1209			elsif eu:find(ch, SLASHES) then*/
        _4225 = find_from(_ch_7945, _16SLASHES_7540, 1);
        if (_4225 == 0)
        {
            _4225 = NOVALUE;
            goto L5; // [101] 114
        }
        else{
            _4225 = NOVALUE;
        }

        /** filesys.e:1210				slash = i*/
        _slash_7943 = _i_7952;

        /** filesys.e:1211				exit*/
        goto L2; // [111] 122
L5: 
L4: 

        /** filesys.e:1213		end for*/
        _i_7952 = _i_7952 + -1;
        goto L1; // [117] 62
L2: 
        ;
    }

    /** filesys.e:1215		if slash > 0 then*/
    if (_slash_7943 <= 0)
    goto L6; // [124] 142

    /** filesys.e:1216			dir_name = path[1..slash-1]*/
    _4227 = _slash_7943 - 1;
    rhs_slice_target = (object_ptr)&_dir_name_7946;
    RHS_Slice(_path_7941, 1, _4227);

    /** filesys.e:1218			ifdef not UNIX then*/
L6: 

    /** filesys.e:1226		if period > 0 then*/
    if (_period_7944 <= 0)
    goto L7; // [144] 188

    /** filesys.e:1227			file_name = path[slash+1..period-1]*/
    _4230 = _slash_7943 + 1;
    if (_4230 > MAXINT){
        _4230 = NewDouble((eudouble)_4230);
    }
    _4231 = _period_7944 - 1;
    rhs_slice_target = (object_ptr)&_file_name_7947;
    RHS_Slice(_path_7941, _4230, _4231);

    /** filesys.e:1228			file_ext = path[period+1..$]*/
    _4233 = _period_7944 + 1;
    if (_4233 > MAXINT){
        _4233 = NewDouble((eudouble)_4233);
    }
    if (IS_SEQUENCE(_path_7941)){
            _4234 = SEQ_PTR(_path_7941)->length;
    }
    else {
        _4234 = 1;
    }
    rhs_slice_target = (object_ptr)&_file_ext_7948;
    RHS_Slice(_path_7941, _4233, _4234);

    /** filesys.e:1229			file_full = file_name & '.' & file_ext*/
    {
        object concat_list[3];

        concat_list[0] = _file_ext_7948;
        concat_list[1] = 46;
        concat_list[2] = _file_name_7947;
        Concat_N((object_ptr)&_file_full_7949, concat_list, 3);
    }
    goto L8; // [185] 210
L7: 

    /** filesys.e:1231			file_name = path[slash+1..$]*/
    _4237 = _slash_7943 + 1;
    if (_4237 > MAXINT){
        _4237 = NewDouble((eudouble)_4237);
    }
    if (IS_SEQUENCE(_path_7941)){
            _4238 = SEQ_PTR(_path_7941)->length;
    }
    else {
        _4238 = 1;
    }
    rhs_slice_target = (object_ptr)&_file_name_7947;
    RHS_Slice(_path_7941, _4237, _4238);

    /** filesys.e:1232			file_full = file_name*/
    RefDS(_file_name_7947);
    DeRef(_file_full_7949);
    _file_full_7949 = _file_name_7947;
L8: 

    /** filesys.e:1235		if std_slash != 0 then*/
    if (_std_slash_7942 == 0)
    goto L9; // [212] 278

    /** filesys.e:1236			if std_slash < 0 then*/
    if (_std_slash_7942 >= 0)
    goto LA; // [218] 254

    /** filesys.e:1237				std_slash = SLASH*/
    _std_slash_7942 = 47;

    /** filesys.e:1238				ifdef UNIX then*/

    /** filesys.e:1239				sequence from_slash = "\\"*/
    RefDS(_1404);
    DeRefi(_from_slash_7982);
    _from_slash_7982 = _1404;

    /** filesys.e:1243				dir_name = search:match_replace(from_slash, dir_name, std_slash)*/
    RefDS(_from_slash_7982);
    RefDS(_dir_name_7946);
    _0 = _dir_name_7946;
    _dir_name_7946 = _15match_replace(_from_slash_7982, _dir_name_7946, 47, 0);
    DeRefDS(_0);
    DeRefDSi(_from_slash_7982);
    _from_slash_7982 = NOVALUE;
    goto LB; // [251] 277
LA: 

    /** filesys.e:1245				dir_name = search:match_replace("\\", dir_name, std_slash)*/
    RefDS(_1404);
    RefDS(_dir_name_7946);
    _0 = _dir_name_7946;
    _dir_name_7946 = _15match_replace(_1404, _dir_name_7946, _std_slash_7942, 0);
    DeRefDS(_0);

    /** filesys.e:1246				dir_name = search:match_replace("/", dir_name, std_slash)*/
    RefDS(_4003);
    RefDS(_dir_name_7946);
    _0 = _dir_name_7946;
    _dir_name_7946 = _15match_replace(_4003, _dir_name_7946, _std_slash_7942, 0);
    DeRefDS(_0);
LB: 
L9: 

    /** filesys.e:1250		return {dir_name, file_full, file_name, file_ext, drive_id }*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_dir_name_7946);
    ((intptr_t*)_2)[1] = _dir_name_7946;
    RefDS(_file_full_7949);
    ((intptr_t*)_2)[2] = _file_full_7949;
    RefDS(_file_name_7947);
    ((intptr_t*)_2)[3] = _file_name_7947;
    RefDS(_file_ext_7948);
    ((intptr_t*)_2)[4] = _file_ext_7948;
    RefDS(_drive_id_7950);
    ((intptr_t*)_2)[5] = _drive_id_7950;
    _4245 = MAKE_SEQ(_1);
    DeRefDS(_path_7941);
    DeRefDS(_dir_name_7946);
    DeRefDS(_file_name_7947);
    DeRefDS(_file_ext_7948);
    DeRefDS(_file_full_7949);
    DeRefDS(_drive_id_7950);
    DeRef(_4231);
    _4231 = NOVALUE;
    DeRef(_4230);
    _4230 = NOVALUE;
    DeRef(_4233);
    _4233 = NOVALUE;
    DeRef(_4237);
    _4237 = NOVALUE;
    DeRef(_4222);
    _4222 = NOVALUE;
    DeRef(_4227);
    _4227 = NOVALUE;
    return _4245;
    ;
}


object _16dirname(object _path_7990, object _pcd_7991)
{
    object _data_7992 = NOVALUE;
    object _4250 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1279		data = pathinfo(path)*/
    RefDS(_path_7990);
    _0 = _data_7992;
    _data_7992 = _16pathinfo(_path_7990, 0);
    DeRef(_0);

    /** filesys.e:1280		if pcd then*/

    /** filesys.e:1285		return data[1]*/
    _2 = (object)SEQ_PTR(_data_7992);
    _4250 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_4250);
    DeRefDS(_path_7990);
    DeRefDS(_data_7992);
    return _4250;
    ;
}


object _16filebase(object _path_8019)
{
    object _data_8020 = NOVALUE;
    object _4259 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1375		data = pathinfo(path)*/
    RefDS(_path_8019);
    _0 = _data_8020;
    _data_8020 = _16pathinfo(_path_8019, 0);
    DeRef(_0);

    /** filesys.e:1377		return data[3]*/
    _2 = (object)SEQ_PTR(_data_8020);
    _4259 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_4259);
    DeRefDS(_path_8019);
    DeRefDS(_data_8020);
    return _4259;
    ;
}


object _16fileext(object _path_8025)
{
    object _data_8026 = NOVALUE;
    object _4261 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1403		data = pathinfo(path)*/
    RefDS(_path_8025);
    _0 = _data_8026;
    _data_8026 = _16pathinfo(_path_8025, 0);
    DeRef(_0);

    /** filesys.e:1404		return data[4]*/
    _2 = (object)SEQ_PTR(_data_8026);
    _4261 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_4261);
    DeRefDS(_path_8025);
    DeRefDS(_data_8026);
    return _4261;
    ;
}


object _16defaultext(object _path_8037, object _defext_8038)
{
    object _4276 = NOVALUE;
    object _4273 = NOVALUE;
    object _4271 = NOVALUE;
    object _4270 = NOVALUE;
    object _4269 = NOVALUE;
    object _4267 = NOVALUE;
    object _4266 = NOVALUE;
    object _4264 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1455		if length(defext) = 0 then*/
    _4264 = 3;

    /** filesys.e:1459		for i = length(path) to 1 by -1 do*/
    if (IS_SEQUENCE(_path_8037)){
            _4266 = SEQ_PTR(_path_8037)->length;
    }
    else {
        _4266 = 1;
    }
    {
        object _i_8043;
        _i_8043 = _4266;
L1: 
        if (_i_8043 < 1){
            goto L2; // [26] 95
        }

        /** filesys.e:1460			if path[i] = '.' then*/
        _2 = (object)SEQ_PTR(_path_8037);
        _4267 = (object)*(((s1_ptr)_2)->base + _i_8043);
        if (binary_op_a(NOTEQ, _4267, 46)){
            _4267 = NOVALUE;
            goto L3; // [39] 50
        }
        _4267 = NOVALUE;

        /** filesys.e:1462				return path*/
        DeRefDSi(_defext_8038);
        return _path_8037;
L3: 

        /** filesys.e:1464			if find(path[i], SLASHES) then*/
        _2 = (object)SEQ_PTR(_path_8037);
        _4269 = (object)*(((s1_ptr)_2)->base + _i_8043);
        _4270 = find_from(_4269, _16SLASHES_7540, 1);
        _4269 = NOVALUE;
        if (_4270 == 0)
        {
            _4270 = NOVALUE;
            goto L4; // [61] 88
        }
        else{
            _4270 = NOVALUE;
        }

        /** filesys.e:1465				if i = length(path) then*/
        if (IS_SEQUENCE(_path_8037)){
                _4271 = SEQ_PTR(_path_8037)->length;
        }
        else {
            _4271 = 1;
        }
        if (_i_8043 != _4271)
        goto L2; // [69] 95

        /** filesys.e:1467					return path*/
        DeRefDSi(_defext_8038);
        return _path_8037;
        goto L5; // [79] 87

        /** filesys.e:1470					exit*/
        goto L2; // [84] 95
L5: 
L4: 

        /** filesys.e:1473		end for*/
        _i_8043 = _i_8043 + -1;
        goto L1; // [90] 33
L2: 
        ;
    }

    /** filesys.e:1475		if defext[1] != '.' then*/
    _2 = (object)SEQ_PTR(_defext_8038);
    _4273 = (object)*(((s1_ptr)_2)->base + 1);
    if (_4273 == 46)
    goto L6; // [101] 112

    /** filesys.e:1476			path &= '.'*/
    Append(&_path_8037, _path_8037, 46);
L6: 

    /** filesys.e:1479		return path & defext*/
    Concat((object_ptr)&_4276, _path_8037, _defext_8038);
    DeRefDS(_path_8037);
    DeRefDSi(_defext_8038);
    _4273 = NOVALUE;
    return _4276;
    ;
}


object _16absolute_path(object _filename_8062)
{
    object _4280 = NOVALUE;
    object _4279 = NOVALUE;
    object _4277 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1514		if length(filename) = 0 then*/
    if (IS_SEQUENCE(_filename_8062)){
            _4277 = SEQ_PTR(_filename_8062)->length;
    }
    else {
        _4277 = 1;
    }
    if (_4277 != 0)
    goto L1; // [8] 19

    /** filesys.e:1515			return 0*/
    DeRefDS(_filename_8062);
    return 0;
L1: 

    /** filesys.e:1518		if eu:find(filename[1], SLASHES) then*/
    _2 = (object)SEQ_PTR(_filename_8062);
    _4279 = (object)*(((s1_ptr)_2)->base + 1);
    _4280 = find_from(_4279, _16SLASHES_7540, 1);
    _4279 = NOVALUE;
    if (_4280 == 0)
    {
        _4280 = NOVALUE;
        goto L2; // [30] 40
    }
    else{
        _4280 = NOVALUE;
    }

    /** filesys.e:1519			return 1*/
    DeRefDS(_filename_8062);
    return 1;
L2: 

    /** filesys.e:1522		ifdef WINDOWS then*/

    /** filesys.e:1539		return 0*/
    DeRefDS(_filename_8062);
    return 0;
    ;
}


object _16canonical_path(object _path_in_8082, object _directory_given_8083, object _case_flags_8084)
{
    object _lPath_8085 = NOVALUE;
    object _lPosA_8086 = NOVALUE;
    object _lPosB_8087 = NOVALUE;
    object _lLevel_8088 = NOVALUE;
    object _lHome_8089 = NOVALUE;
    object _wildcard_suffix_8131 = NOVALUE;
    object _first_wildcard_at_8132 = NOVALUE;
    object _last_slash_8135 = NOVALUE;
    object _sl_8188 = NOVALUE;
    object _short_name_8191 = NOVALUE;
    object _correct_name_8194 = NOVALUE;
    object _lower_name_8197 = NOVALUE;
    object _part_8213 = NOVALUE;
    object _list_8217 = NOVALUE;
    object _supplied_name_8220 = NOVALUE;
    object _read_name_8239 = NOVALUE;
    object _read_name_8264 = NOVALUE;
    object _4460 = NOVALUE;
    object _4458 = NOVALUE;
    object _4457 = NOVALUE;
    object _4456 = NOVALUE;
    object _4455 = NOVALUE;
    object _4454 = NOVALUE;
    object _4452 = NOVALUE;
    object _4451 = NOVALUE;
    object _4450 = NOVALUE;
    object _4449 = NOVALUE;
    object _4448 = NOVALUE;
    object _4447 = NOVALUE;
    object _4446 = NOVALUE;
    object _4445 = NOVALUE;
    object _4443 = NOVALUE;
    object _4442 = NOVALUE;
    object _4441 = NOVALUE;
    object _4440 = NOVALUE;
    object _4439 = NOVALUE;
    object _4438 = NOVALUE;
    object _4437 = NOVALUE;
    object _4436 = NOVALUE;
    object _4435 = NOVALUE;
    object _4433 = NOVALUE;
    object _4432 = NOVALUE;
    object _4431 = NOVALUE;
    object _4430 = NOVALUE;
    object _4429 = NOVALUE;
    object _4428 = NOVALUE;
    object _4427 = NOVALUE;
    object _4426 = NOVALUE;
    object _4425 = NOVALUE;
    object _4424 = NOVALUE;
    object _4423 = NOVALUE;
    object _4422 = NOVALUE;
    object _4421 = NOVALUE;
    object _4420 = NOVALUE;
    object _4419 = NOVALUE;
    object _4417 = NOVALUE;
    object _4416 = NOVALUE;
    object _4415 = NOVALUE;
    object _4414 = NOVALUE;
    object _4413 = NOVALUE;
    object _4411 = NOVALUE;
    object _4410 = NOVALUE;
    object _4409 = NOVALUE;
    object _4408 = NOVALUE;
    object _4407 = NOVALUE;
    object _4406 = NOVALUE;
    object _4405 = NOVALUE;
    object _4404 = NOVALUE;
    object _4403 = NOVALUE;
    object _4402 = NOVALUE;
    object _4401 = NOVALUE;
    object _4400 = NOVALUE;
    object _4399 = NOVALUE;
    object _4397 = NOVALUE;
    object _4396 = NOVALUE;
    object _4394 = NOVALUE;
    object _4393 = NOVALUE;
    object _4392 = NOVALUE;
    object _4391 = NOVALUE;
    object _4390 = NOVALUE;
    object _4388 = NOVALUE;
    object _4387 = NOVALUE;
    object _4386 = NOVALUE;
    object _4385 = NOVALUE;
    object _4384 = NOVALUE;
    object _4382 = NOVALUE;
    object _4380 = NOVALUE;
    object _4379 = NOVALUE;
    object _4377 = NOVALUE;
    object _4376 = NOVALUE;
    object _4374 = NOVALUE;
    object _4373 = NOVALUE;
    object _4372 = NOVALUE;
    object _4370 = NOVALUE;
    object _4369 = NOVALUE;
    object _4367 = NOVALUE;
    object _4365 = NOVALUE;
    object _4363 = NOVALUE;
    object _4356 = NOVALUE;
    object _4353 = NOVALUE;
    object _4352 = NOVALUE;
    object _4351 = NOVALUE;
    object _4350 = NOVALUE;
    object _4344 = NOVALUE;
    object _4340 = NOVALUE;
    object _4339 = NOVALUE;
    object _4338 = NOVALUE;
    object _4337 = NOVALUE;
    object _4336 = NOVALUE;
    object _4334 = NOVALUE;
    object _4333 = NOVALUE;
    object _4332 = NOVALUE;
    object _4330 = NOVALUE;
    object _4329 = NOVALUE;
    object _4328 = NOVALUE;
    object _4327 = NOVALUE;
    object _4325 = NOVALUE;
    object _4323 = NOVALUE;
    object _4319 = NOVALUE;
    object _4318 = NOVALUE;
    object _4316 = NOVALUE;
    object _4315 = NOVALUE;
    object _4314 = NOVALUE;
    object _4313 = NOVALUE;
    object _4312 = NOVALUE;
    object _4311 = NOVALUE;
    object _4310 = NOVALUE;
    object _4307 = NOVALUE;
    object _4306 = NOVALUE;
    object _4301 = NOVALUE;
    object _4300 = NOVALUE;
    object _4299 = NOVALUE;
    object _4298 = NOVALUE;
    object _4297 = NOVALUE;
    object _4295 = NOVALUE;
    object _4294 = NOVALUE;
    object _4293 = NOVALUE;
    object _4292 = NOVALUE;
    object _4291 = NOVALUE;
    object _4290 = NOVALUE;
    object _4289 = NOVALUE;
    object _4288 = NOVALUE;
    object _4287 = NOVALUE;
    object _4286 = NOVALUE;
    object _4285 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1607	    sequence lPath = ""*/
    RefDS(_5);
    DeRef(_lPath_8085);
    _lPath_8085 = _5;

    /** filesys.e:1608	    integer lPosA = -1*/
    _lPosA_8086 = -1;

    /** filesys.e:1609	    integer lPosB = -1*/
    _lPosB_8087 = -1;

    /** filesys.e:1610	    sequence lLevel = ""*/
    RefDS(_5);
    DeRefi(_lLevel_8088);
    _lLevel_8088 = _5;

    /** filesys.e:1612	    path_in = path_in*/
    RefDS(_path_in_8082);
    DeRefDS(_path_in_8082);
    _path_in_8082 = _path_in_8082;

    /** filesys.e:1614		ifdef UNIX then*/

    /** filesys.e:1615			lPath = path_in*/
    RefDS(_path_in_8082);
    DeRefDS(_lPath_8085);
    _lPath_8085 = _path_in_8082;

    /** filesys.e:1623	    if (length(lPath) > 2 and lPath[1] = '"' and lPath[$] = '"') then*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4285 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4285 = 1;
    }
    _4286 = (_4285 > 2);
    _4285 = NOVALUE;
    if (_4286 == 0) {
        _4287 = 0;
        goto L1; // [56] 72
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4288 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_4288)) {
        _4289 = (_4288 == 34);
    }
    else {
        _4289 = binary_op(EQUALS, _4288, 34);
    }
    _4288 = NOVALUE;
    if (IS_ATOM_INT(_4289))
    _4287 = (_4289 != 0);
    else
    _4287 = DBL_PTR(_4289)->dbl != 0.0;
L1: 
    if (_4287 == 0) {
        DeRef(_4290);
        _4290 = 0;
        goto L2; // [72] 91
    }
    if (IS_SEQUENCE(_lPath_8085)){
            _4291 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4291 = 1;
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4292 = (object)*(((s1_ptr)_2)->base + _4291);
    if (IS_ATOM_INT(_4292)) {
        _4293 = (_4292 == 34);
    }
    else {
        _4293 = binary_op(EQUALS, _4292, 34);
    }
    _4292 = NOVALUE;
    if (IS_ATOM_INT(_4293))
    _4290 = (_4293 != 0);
    else
    _4290 = DBL_PTR(_4293)->dbl != 0.0;
L2: 
    if (_4290 == 0)
    {
        _4290 = NOVALUE;
        goto L3; // [91] 109
    }
    else{
        _4290 = NOVALUE;
    }

    /** filesys.e:1624	        lPath = lPath[2..$-1]*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4294 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4294 = 1;
    }
    _4295 = _4294 - 1;
    _4294 = NOVALUE;
    rhs_slice_target = (object_ptr)&_lPath_8085;
    RHS_Slice(_lPath_8085, 2, _4295);
L3: 

    /** filesys.e:1628	    if (length(lPath) > 0 and lPath[1] = '~') then*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4297 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4297 = 1;
    }
    _4298 = (_4297 > 0);
    _4297 = NOVALUE;
    if (_4298 == 0) {
        DeRef(_4299);
        _4299 = 0;
        goto L4; // [118] 134
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4300 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_4300)) {
        _4301 = (_4300 == 126);
    }
    else {
        _4301 = binary_op(EQUALS, _4300, 126);
    }
    _4300 = NOVALUE;
    if (IS_ATOM_INT(_4301))
    _4299 = (_4301 != 0);
    else
    _4299 = DBL_PTR(_4301)->dbl != 0.0;
L4: 
    if (_4299 == 0)
    {
        _4299 = NOVALUE;
        goto L5; // [134] 222
    }
    else{
        _4299 = NOVALUE;
    }

    /** filesys.e:1630			lHome = getenv("HOME")*/
    DeRefi(_lHome_8089);
    _lHome_8089 = EGetEnv(_4302);

    /** filesys.e:1631			ifdef WINDOWS then*/

    /** filesys.e:1637			if lHome[$] != SLASH then*/
    if (IS_SEQUENCE(_lHome_8089)){
            _4306 = SEQ_PTR(_lHome_8089)->length;
    }
    else {
        _4306 = 1;
    }
    _2 = (object)SEQ_PTR(_lHome_8089);
    _4307 = (object)*(((s1_ptr)_2)->base + _4306);
    if (_4307 == 47)
    goto L6; // [153] 164

    /** filesys.e:1638				lHome &= SLASH*/
    if (IS_SEQUENCE(_lHome_8089) && IS_ATOM(47)) {
        Append(&_lHome_8089, _lHome_8089, 47);
    }
    else if (IS_ATOM(_lHome_8089) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_lHome_8089, _lHome_8089, 47);
    }
L6: 

    /** filesys.e:1641			if length(lPath) > 1 and lPath[2] = SLASH then*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4310 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4310 = 1;
    }
    _4311 = (_4310 > 1);
    _4310 = NOVALUE;
    if (_4311 == 0) {
        goto L7; // [173] 206
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4313 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_4313)) {
        _4314 = (_4313 == 47);
    }
    else {
        _4314 = binary_op(EQUALS, _4313, 47);
    }
    _4313 = NOVALUE;
    if (_4314 == 0) {
        DeRef(_4314);
        _4314 = NOVALUE;
        goto L7; // [186] 206
    }
    else {
        if (!IS_ATOM_INT(_4314) && DBL_PTR(_4314)->dbl == 0.0){
            DeRef(_4314);
            _4314 = NOVALUE;
            goto L7; // [186] 206
        }
        DeRef(_4314);
        _4314 = NOVALUE;
    }
    DeRef(_4314);
    _4314 = NOVALUE;

    /** filesys.e:1642				lPath = lHome & lPath[3 .. $]*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4315 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4315 = 1;
    }
    rhs_slice_target = (object_ptr)&_4316;
    RHS_Slice(_lPath_8085, 3, _4315);
    if (IS_SEQUENCE(_lHome_8089) && IS_ATOM(_4316)) {
    }
    else if (IS_ATOM(_lHome_8089) && IS_SEQUENCE(_4316)) {
        Ref(_lHome_8089);
        Prepend(&_lPath_8085, _4316, _lHome_8089);
    }
    else {
        Concat((object_ptr)&_lPath_8085, _lHome_8089, _4316);
    }
    DeRefDS(_4316);
    _4316 = NOVALUE;
    goto L8; // [203] 221
L7: 

    /** filesys.e:1644				lPath = lHome & lPath[2 .. $]*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4318 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4318 = 1;
    }
    rhs_slice_target = (object_ptr)&_4319;
    RHS_Slice(_lPath_8085, 2, _4318);
    if (IS_SEQUENCE(_lHome_8089) && IS_ATOM(_4319)) {
    }
    else if (IS_ATOM(_lHome_8089) && IS_SEQUENCE(_4319)) {
        Ref(_lHome_8089);
        Prepend(&_lPath_8085, _4319, _lHome_8089);
    }
    else {
        Concat((object_ptr)&_lPath_8085, _lHome_8089, _4319);
    }
    DeRefDS(_4319);
    _4319 = NOVALUE;
L8: 
L5: 

    /** filesys.e:1648		ifdef WINDOWS then*/

    /** filesys.e:1658		sequence wildcard_suffix*/

    /** filesys.e:1659		integer first_wildcard_at = find_first_wildcard( lPath )*/
    RefDS(_lPath_8085);
    _first_wildcard_at_8132 = _16find_first_wildcard(_lPath_8085, 1);
    if (!IS_ATOM_INT(_first_wildcard_at_8132)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_8132)->dbl);
        DeRefDS(_first_wildcard_at_8132);
        _first_wildcard_at_8132 = _1;
    }

    /** filesys.e:1660		if first_wildcard_at then*/
    if (_first_wildcard_at_8132 == 0)
    {
        goto L9; // [237] 298
    }
    else{
    }

    /** filesys.e:1661			integer last_slash = search:rfind( SLASH, lPath, first_wildcard_at )*/
    RefDS(_lPath_8085);
    _last_slash_8135 = _15rfind(47, _lPath_8085, _first_wildcard_at_8132);
    if (!IS_ATOM_INT(_last_slash_8135)) {
        _1 = (object)(DBL_PTR(_last_slash_8135)->dbl);
        DeRefDS(_last_slash_8135);
        _last_slash_8135 = _1;
    }

    /** filesys.e:1662			if last_slash then*/
    if (_last_slash_8135 == 0)
    {
        goto LA; // [252] 278
    }
    else{
    }

    /** filesys.e:1663				wildcard_suffix = lPath[last_slash..$]*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4323 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4323 = 1;
    }
    rhs_slice_target = (object_ptr)&_wildcard_suffix_8131;
    RHS_Slice(_lPath_8085, _last_slash_8135, _4323);

    /** filesys.e:1664				lPath = remove( lPath, last_slash, length( lPath ) )*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4325 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4325 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_8085);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_last_slash_8135)) ? _last_slash_8135 : (object)(DBL_PTR(_last_slash_8135)->dbl);
        int stop = (IS_ATOM_INT(_4325)) ? _4325 : (object)(DBL_PTR(_4325)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_8085), start, &_lPath_8085 );
            }
            else Tail(SEQ_PTR(_lPath_8085), stop+1, &_lPath_8085);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_8085), start, &_lPath_8085);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_8085 = Remove_elements(start, stop, (SEQ_PTR(_lPath_8085)->ref == 1));
        }
    }
    _4325 = NOVALUE;
    goto LB; // [275] 293
LA: 

    /** filesys.e:1666				wildcard_suffix = lPath*/
    RefDS(_lPath_8085);
    DeRef(_wildcard_suffix_8131);
    _wildcard_suffix_8131 = _lPath_8085;

    /** filesys.e:1667				lPath = ""*/
    RefDS(_5);
    DeRefDS(_lPath_8085);
    _lPath_8085 = _5;
LB: 
    goto LC; // [295] 306
L9: 

    /** filesys.e:1670			wildcard_suffix = ""*/
    RefDS(_5);
    DeRef(_wildcard_suffix_8131);
    _wildcard_suffix_8131 = _5;
LC: 

    /** filesys.e:1674		if ((length(lPath) = 0) or not find(lPath[1], "/\\")) then*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4327 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4327 = 1;
    }
    _4328 = (_4327 == 0);
    _4327 = NOVALUE;
    if (_4328 != 0) {
        DeRef(_4329);
        _4329 = 1;
        goto LD; // [315] 335
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4330 = (object)*(((s1_ptr)_2)->base + 1);
    _4332 = find_from(_4330, _4331, 1);
    _4330 = NOVALUE;
    _4333 = (_4332 == 0);
    _4332 = NOVALUE;
    _4329 = (_4333 != 0);
LD: 
    if (_4329 == 0)
    {
        _4329 = NOVALUE;
        goto LE; // [335] 351
    }
    else{
        _4329 = NOVALUE;
    }

    /** filesys.e:1675			ifdef UNIX then*/

    /** filesys.e:1676				lPath = curdir() & lPath*/
    _4334 = _16curdir(0);
    if (IS_SEQUENCE(_4334) && IS_ATOM(_lPath_8085)) {
    }
    else if (IS_ATOM(_4334) && IS_SEQUENCE(_lPath_8085)) {
        Ref(_4334);
        Prepend(&_lPath_8085, _lPath_8085, _4334);
    }
    else {
        Concat((object_ptr)&_lPath_8085, _4334, _lPath_8085);
        DeRef(_4334);
        _4334 = NOVALUE;
    }
    DeRef(_4334);
    _4334 = NOVALUE;
LE: 

    /** filesys.e:1694		if ((directory_given != 0) and (lPath[$] != SLASH) ) then*/
    _4336 = (_directory_given_8083 != 0);
    if (_4336 == 0) {
        DeRef(_4337);
        _4337 = 0;
        goto LF; // [357] 376
    }
    if (IS_SEQUENCE(_lPath_8085)){
            _4338 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4338 = 1;
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4339 = (object)*(((s1_ptr)_2)->base + _4338);
    if (IS_ATOM_INT(_4339)) {
        _4340 = (_4339 != 47);
    }
    else {
        _4340 = binary_op(NOTEQ, _4339, 47);
    }
    _4339 = NOVALUE;
    if (IS_ATOM_INT(_4340))
    _4337 = (_4340 != 0);
    else
    _4337 = DBL_PTR(_4340)->dbl != 0.0;
LF: 
    if (_4337 == 0)
    {
        _4337 = NOVALUE;
        goto L10; // [376] 386
    }
    else{
        _4337 = NOVALUE;
    }

    /** filesys.e:1695			lPath &= SLASH*/
    Append(&_lPath_8085, _lPath_8085, 47);
L10: 

    /** filesys.e:1699		lLevel = SLASH & '.' & SLASH*/
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = 46;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_8088, concat_list, 3);
    }

    /** filesys.e:1700		lPosA = 1*/
    _lPosA_8086 = 1;

    /** filesys.e:1701		while( lPosA != 0 ) with entry do*/
    goto L11; // [401] 422
L12: 
    if (_lPosA_8086 == 0)
    goto L13; // [404] 434

    /** filesys.e:1702			lPath = eu:remove(lPath, lPosA, lPosA + 1)*/
    _4344 = _lPosA_8086 + 1;
    if (_4344 > MAXINT){
        _4344 = NewDouble((eudouble)_4344);
    }
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_8085);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosA_8086)) ? _lPosA_8086 : (object)(DBL_PTR(_lPosA_8086)->dbl);
        int stop = (IS_ATOM_INT(_4344)) ? _4344 : (object)(DBL_PTR(_4344)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_8085), start, &_lPath_8085 );
            }
            else Tail(SEQ_PTR(_lPath_8085), stop+1, &_lPath_8085);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_8085), start, &_lPath_8085);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_8085 = Remove_elements(start, stop, (SEQ_PTR(_lPath_8085)->ref == 1));
        }
    }
    DeRef(_4344);
    _4344 = NOVALUE;

    /** filesys.e:1704		  entry*/
L11: 

    /** filesys.e:1705			lPosA = match(lLevel, lPath, lPosA )*/
    _lPosA_8086 = e_match_from(_lLevel_8088, _lPath_8085, _lPosA_8086);

    /** filesys.e:1706		end while*/
    goto L12; // [431] 404
L13: 

    /** filesys.e:1709		lLevel = SLASH & ".." & SLASH*/
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = _4091;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_8088, concat_list, 3);
    }

    /** filesys.e:1711		lPosB = 1*/
    _lPosB_8087 = 1;

    /** filesys.e:1712		while( lPosA != 0 ) with entry do*/
    goto L14; // [449] 527
L15: 
    if (_lPosA_8086 == 0)
    goto L16; // [452] 539

    /** filesys.e:1714			lPosB = lPosA-1*/
    _lPosB_8087 = _lPosA_8086 - 1;

    /** filesys.e:1715			while((lPosB > 0) and (lPath[lPosB] != SLASH)) do*/
L17: 
    _4350 = (_lPosB_8087 > 0);
    if (_4350 == 0) {
        DeRef(_4351);
        _4351 = 0;
        goto L18; // [471] 487
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4352 = (object)*(((s1_ptr)_2)->base + _lPosB_8087);
    if (IS_ATOM_INT(_4352)) {
        _4353 = (_4352 != 47);
    }
    else {
        _4353 = binary_op(NOTEQ, _4352, 47);
    }
    _4352 = NOVALUE;
    if (IS_ATOM_INT(_4353))
    _4351 = (_4353 != 0);
    else
    _4351 = DBL_PTR(_4353)->dbl != 0.0;
L18: 
    if (_4351 == 0)
    {
        _4351 = NOVALUE;
        goto L19; // [487] 501
    }
    else{
        _4351 = NOVALUE;
    }

    /** filesys.e:1716				lPosB -= 1*/
    _lPosB_8087 = _lPosB_8087 - 1;

    /** filesys.e:1717			end while*/
    goto L17; // [498] 467
L19: 

    /** filesys.e:1718			if (lPosB <= 0) then*/
    if (_lPosB_8087 > 0)
    goto L1A; // [503] 513

    /** filesys.e:1719				lPosB = 1*/
    _lPosB_8087 = 1;
L1A: 

    /** filesys.e:1721			lPath = eu:remove(lPath, lPosB, lPosA + 2)*/
    _4356 = _lPosA_8086 + 2;
    if ((object)((uintptr_t)_4356 + (uintptr_t)HIGH_BITS) >= 0){
        _4356 = NewDouble((eudouble)_4356);
    }
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_8085);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosB_8087)) ? _lPosB_8087 : (object)(DBL_PTR(_lPosB_8087)->dbl);
        int stop = (IS_ATOM_INT(_4356)) ? _4356 : (object)(DBL_PTR(_4356)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_8085), start, &_lPath_8085 );
            }
            else Tail(SEQ_PTR(_lPath_8085), stop+1, &_lPath_8085);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_8085), start, &_lPath_8085);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_8085 = Remove_elements(start, stop, (SEQ_PTR(_lPath_8085)->ref == 1));
        }
    }
    DeRef(_4356);
    _4356 = NOVALUE;

    /** filesys.e:1723		  entry*/
L14: 

    /** filesys.e:1724			lPosA = match(lLevel, lPath, lPosB )*/
    _lPosA_8086 = e_match_from(_lLevel_8088, _lPath_8085, _lPosB_8087);

    /** filesys.e:1725		end while*/
    goto L15; // [536] 452
L16: 

    /** filesys.e:1727		if case_flags = TO_LOWER then*/
    if (_case_flags_8084 != 1)
    goto L1B; // [541] 556

    /** filesys.e:1728			lPath = lower( lPath )*/
    RefDS(_lPath_8085);
    _0 = _lPath_8085;
    _lPath_8085 = _13lower(_lPath_8085);
    DeRefDS(_0);
    goto L1C; // [553] 1153
L1B: 

    /** filesys.e:1730		elsif case_flags != AS_IS then*/
    if (_case_flags_8084 == 0)
    goto L1D; // [558] 1150

    /** filesys.e:1731			sequence sl = find_all(SLASH,lPath) -- split apart lPath*/
    RefDS(_lPath_8085);
    _0 = _sl_8188;
    _sl_8188 = _15find_all(47, _lPath_8085, 1);
    DeRef(_0);

    /** filesys.e:1732			integer short_name = and_bits(TO_SHORT,case_flags)=TO_SHORT*/
    {uintptr_t tu;
         tu = (uintptr_t)4 & (uintptr_t)_case_flags_8084;
         _4363 = MAKE_UINT(tu);
    }
    if (IS_ATOM_INT(_4363)) {
        _short_name_8191 = (_4363 == 4);
    }
    else {
        _short_name_8191 = (DBL_PTR(_4363)->dbl == (eudouble)4);
    }
    DeRef(_4363);
    _4363 = NOVALUE;

    /** filesys.e:1733			integer correct_name = and_bits(case_flags,CORRECT)=CORRECT*/
    {uintptr_t tu;
         tu = (uintptr_t)_case_flags_8084 & (uintptr_t)2;
         _4365 = MAKE_UINT(tu);
    }
    if (IS_ATOM_INT(_4365)) {
        _correct_name_8194 = (_4365 == 2);
    }
    else {
        _correct_name_8194 = (DBL_PTR(_4365)->dbl == (eudouble)2);
    }
    DeRef(_4365);
    _4365 = NOVALUE;

    /** filesys.e:1734			integer lower_name = and_bits(TO_LOWER,case_flags)=TO_LOWER*/
    {uintptr_t tu;
         tu = (uintptr_t)1 & (uintptr_t)_case_flags_8084;
         _4367 = MAKE_UINT(tu);
    }
    if (IS_ATOM_INT(_4367)) {
        _lower_name_8197 = (_4367 == 1);
    }
    else {
        _lower_name_8197 = (DBL_PTR(_4367)->dbl == (eudouble)1);
    }
    DeRef(_4367);
    _4367 = NOVALUE;

    /** filesys.e:1735			if lPath[$] != SLASH then*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4369 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4369 = 1;
    }
    _2 = (object)SEQ_PTR(_lPath_8085);
    _4370 = (object)*(((s1_ptr)_2)->base + _4369);
    if (binary_op_a(EQUALS, _4370, 47)){
        _4370 = NOVALUE;
        goto L1E; // [611] 633
    }
    _4370 = NOVALUE;

    /** filesys.e:1736				sl = sl & {length(lPath)+1}*/
    if (IS_SEQUENCE(_lPath_8085)){
            _4372 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4372 = 1;
    }
    _4373 = _4372 + 1;
    _4372 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _4373;
    _4374 = MAKE_SEQ(_1);
    _4373 = NOVALUE;
    Concat((object_ptr)&_sl_8188, _sl_8188, _4374);
    DeRefDS(_4374);
    _4374 = NOVALUE;
L1E: 

    /** filesys.e:1739			for i = length(sl)-1 to 1 by -1 label "partloop" do*/
    if (IS_SEQUENCE(_sl_8188)){
            _4376 = SEQ_PTR(_sl_8188)->length;
    }
    else {
        _4376 = 1;
    }
    _4377 = _4376 - 1;
    _4376 = NOVALUE;
    {
        object _i_8209;
        _i_8209 = _4377;
L1F: 
        if (_i_8209 < 1){
            goto L20; // [642] 1115
        }

        /** filesys.e:1740				ifdef WINDOWS then*/

        /** filesys.e:1743					sequence part = lPath[1..sl[i]-1]*/
        _2 = (object)SEQ_PTR(_sl_8188);
        _4379 = (object)*(((s1_ptr)_2)->base + _i_8209);
        if (IS_ATOM_INT(_4379)) {
            _4380 = _4379 - 1;
        }
        else {
            _4380 = binary_op(MINUS, _4379, 1);
        }
        _4379 = NOVALUE;
        rhs_slice_target = (object_ptr)&_part_8213;
        RHS_Slice(_lPath_8085, 1, _4380);

        /** filesys.e:1746				object list = dir( part & SLASH )*/
        Append(&_4382, _part_8213, 47);
        _0 = _list_8217;
        _list_8217 = _16dir(_4382);
        DeRef(_0);
        _4382 = NOVALUE;

        /** filesys.e:1747				sequence supplied_name = lPath[sl[i]+1..sl[i+1]-1]*/
        _2 = (object)SEQ_PTR(_sl_8188);
        _4384 = (object)*(((s1_ptr)_2)->base + _i_8209);
        if (IS_ATOM_INT(_4384)) {
            _4385 = _4384 + 1;
            if (_4385 > MAXINT){
                _4385 = NewDouble((eudouble)_4385);
            }
        }
        else
        _4385 = binary_op(PLUS, 1, _4384);
        _4384 = NOVALUE;
        _4386 = _i_8209 + 1;
        _2 = (object)SEQ_PTR(_sl_8188);
        _4387 = (object)*(((s1_ptr)_2)->base + _4386);
        if (IS_ATOM_INT(_4387)) {
            _4388 = _4387 - 1;
        }
        else {
            _4388 = binary_op(MINUS, _4387, 1);
        }
        _4387 = NOVALUE;
        rhs_slice_target = (object_ptr)&_supplied_name_8220;
        RHS_Slice(_lPath_8085, _4385, _4388);

        /** filesys.e:1749				if atom(list) then*/
        _4390 = IS_ATOM(_list_8217);
        if (_4390 == 0)
        {
            _4390 = NOVALUE;
            goto L21; // [710] 748
        }
        else{
            _4390 = NOVALUE;
        }

        /** filesys.e:1750					if lower_name then*/
        if (_lower_name_8197 == 0)
        {
            goto L22; // [715] 741
        }
        else{
        }

        /** filesys.e:1751						lPath = part & lower(lPath[sl[i]..$])*/
        _2 = (object)SEQ_PTR(_sl_8188);
        _4391 = (object)*(((s1_ptr)_2)->base + _i_8209);
        if (IS_SEQUENCE(_lPath_8085)){
                _4392 = SEQ_PTR(_lPath_8085)->length;
        }
        else {
            _4392 = 1;
        }
        rhs_slice_target = (object_ptr)&_4393;
        RHS_Slice(_lPath_8085, _4391, _4392);
        _4394 = _13lower(_4393);
        _4393 = NOVALUE;
        if (IS_SEQUENCE(_part_8213) && IS_ATOM(_4394)) {
            Ref(_4394);
            Append(&_lPath_8085, _part_8213, _4394);
        }
        else if (IS_ATOM(_part_8213) && IS_SEQUENCE(_4394)) {
        }
        else {
            Concat((object_ptr)&_lPath_8085, _part_8213, _4394);
        }
        DeRef(_4394);
        _4394 = NOVALUE;
L22: 

        /** filesys.e:1753					continue*/
        DeRef(_part_8213);
        _part_8213 = NOVALUE;
        DeRef(_list_8217);
        _list_8217 = NOVALUE;
        DeRef(_supplied_name_8220);
        _supplied_name_8220 = NOVALUE;
        goto L23; // [745] 1110
L21: 

        /** filesys.e:1757				for j = 1 to length(list) do*/
        if (IS_SEQUENCE(_list_8217)){
                _4396 = SEQ_PTR(_list_8217)->length;
        }
        else {
            _4396 = 1;
        }
        {
            object _j_8237;
            _j_8237 = 1;
L24: 
            if (_j_8237 > _4396){
                goto L25; // [753] 878
            }

            /** filesys.e:1758					sequence read_name = list[j][D_NAME]*/
            _2 = (object)SEQ_PTR(_list_8217);
            _4397 = (object)*(((s1_ptr)_2)->base + _j_8237);
            DeRef(_read_name_8239);
            _2 = (object)SEQ_PTR(_4397);
            _read_name_8239 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_8239);
            _4397 = NOVALUE;

            /** filesys.e:1759					if equal(read_name, supplied_name) then*/
            if (_read_name_8239 == _supplied_name_8220)
            _4399 = 1;
            else if (IS_ATOM_INT(_read_name_8239) && IS_ATOM_INT(_supplied_name_8220))
            _4399 = 0;
            else
            _4399 = (compare(_read_name_8239, _supplied_name_8220) == 0);
            if (_4399 == 0)
            {
                _4399 = NOVALUE;
                goto L26; // [778] 869
            }
            else{
                _4399 = NOVALUE;
            }

            /** filesys.e:1760						if short_name and sequence(list[j][D_ALTNAME]) then*/
            if (_short_name_8191 == 0) {
                goto L27; // [783] 860
            }
            _2 = (object)SEQ_PTR(_list_8217);
            _4401 = (object)*(((s1_ptr)_2)->base + _j_8237);
            _2 = (object)SEQ_PTR(_4401);
            _4402 = (object)*(((s1_ptr)_2)->base + 11);
            _4401 = NOVALUE;
            _4403 = IS_SEQUENCE(_4402);
            _4402 = NOVALUE;
            if (_4403 == 0)
            {
                _4403 = NOVALUE;
                goto L27; // [799] 860
            }
            else{
                _4403 = NOVALUE;
            }

            /** filesys.e:1761							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            _2 = (object)SEQ_PTR(_sl_8188);
            _4404 = (object)*(((s1_ptr)_2)->base + _i_8209);
            rhs_slice_target = (object_ptr)&_4405;
            RHS_Slice(_lPath_8085, 1, _4404);
            _2 = (object)SEQ_PTR(_list_8217);
            _4406 = (object)*(((s1_ptr)_2)->base + _j_8237);
            _2 = (object)SEQ_PTR(_4406);
            _4407 = (object)*(((s1_ptr)_2)->base + 11);
            _4406 = NOVALUE;
            _4408 = _i_8209 + 1;
            _2 = (object)SEQ_PTR(_sl_8188);
            _4409 = (object)*(((s1_ptr)_2)->base + _4408);
            if (IS_SEQUENCE(_lPath_8085)){
                    _4410 = SEQ_PTR(_lPath_8085)->length;
            }
            else {
                _4410 = 1;
            }
            rhs_slice_target = (object_ptr)&_4411;
            RHS_Slice(_lPath_8085, _4409, _4410);
            {
                object concat_list[3];

                concat_list[0] = _4411;
                concat_list[1] = _4407;
                concat_list[2] = _4405;
                Concat_N((object_ptr)&_lPath_8085, concat_list, 3);
            }
            DeRefDS(_4411);
            _4411 = NOVALUE;
            _4407 = NOVALUE;
            DeRefDS(_4405);
            _4405 = NOVALUE;

            /** filesys.e:1762							sl[$] = length(lPath)+1*/
            if (IS_SEQUENCE(_sl_8188)){
                    _4413 = SEQ_PTR(_sl_8188)->length;
            }
            else {
                _4413 = 1;
            }
            if (IS_SEQUENCE(_lPath_8085)){
                    _4414 = SEQ_PTR(_lPath_8085)->length;
            }
            else {
                _4414 = 1;
            }
            _4415 = _4414 + 1;
            _4414 = NOVALUE;
            _2 = (object)SEQ_PTR(_sl_8188);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_8188 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _4413);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _4415;
            if( _1 != _4415 ){
                DeRef(_1);
            }
            _4415 = NOVALUE;
L27: 

            /** filesys.e:1764						continue "partloop"*/
            DeRef(_read_name_8239);
            _read_name_8239 = NOVALUE;
            DeRef(_part_8213);
            _part_8213 = NOVALUE;
            DeRef(_list_8217);
            _list_8217 = NOVALUE;
            DeRef(_supplied_name_8220);
            _supplied_name_8220 = NOVALUE;
            goto L23; // [866] 1110
L26: 
            DeRef(_read_name_8239);
            _read_name_8239 = NOVALUE;

            /** filesys.e:1766				end for*/
            _j_8237 = _j_8237 + 1;
            goto L24; // [873] 760
L25: 
            ;
        }

        /** filesys.e:1770				for j = 1 to length(list) do*/
        if (IS_SEQUENCE(_list_8217)){
                _4416 = SEQ_PTR(_list_8217)->length;
        }
        else {
            _4416 = 1;
        }
        {
            object _j_8262;
            _j_8262 = 1;
L28: 
            if (_j_8262 > _4416){
                goto L29; // [883] 1055
            }

            /** filesys.e:1771					sequence read_name = list[j][D_NAME]*/
            _2 = (object)SEQ_PTR(_list_8217);
            _4417 = (object)*(((s1_ptr)_2)->base + _j_8262);
            DeRef(_read_name_8264);
            _2 = (object)SEQ_PTR(_4417);
            _read_name_8264 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_8264);
            _4417 = NOVALUE;

            /** filesys.e:1772					if equal(lower(read_name), lower(supplied_name)) then*/
            RefDS(_read_name_8264);
            _4419 = _13lower(_read_name_8264);
            RefDS(_supplied_name_8220);
            _4420 = _13lower(_supplied_name_8220);
            if (_4419 == _4420)
            _4421 = 1;
            else if (IS_ATOM_INT(_4419) && IS_ATOM_INT(_4420))
            _4421 = 0;
            else
            _4421 = (compare(_4419, _4420) == 0);
            DeRef(_4419);
            _4419 = NOVALUE;
            DeRef(_4420);
            _4420 = NOVALUE;
            if (_4421 == 0)
            {
                _4421 = NOVALUE;
                goto L2A; // [916] 1046
            }
            else{
                _4421 = NOVALUE;
            }

            /** filesys.e:1773						if short_name and sequence(list[j][D_ALTNAME]) then*/
            if (_short_name_8191 == 0) {
                goto L2B; // [921] 998
            }
            _2 = (object)SEQ_PTR(_list_8217);
            _4423 = (object)*(((s1_ptr)_2)->base + _j_8262);
            _2 = (object)SEQ_PTR(_4423);
            _4424 = (object)*(((s1_ptr)_2)->base + 11);
            _4423 = NOVALUE;
            _4425 = IS_SEQUENCE(_4424);
            _4424 = NOVALUE;
            if (_4425 == 0)
            {
                _4425 = NOVALUE;
                goto L2B; // [937] 998
            }
            else{
                _4425 = NOVALUE;
            }

            /** filesys.e:1774							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            _2 = (object)SEQ_PTR(_sl_8188);
            _4426 = (object)*(((s1_ptr)_2)->base + _i_8209);
            rhs_slice_target = (object_ptr)&_4427;
            RHS_Slice(_lPath_8085, 1, _4426);
            _2 = (object)SEQ_PTR(_list_8217);
            _4428 = (object)*(((s1_ptr)_2)->base + _j_8262);
            _2 = (object)SEQ_PTR(_4428);
            _4429 = (object)*(((s1_ptr)_2)->base + 11);
            _4428 = NOVALUE;
            _4430 = _i_8209 + 1;
            _2 = (object)SEQ_PTR(_sl_8188);
            _4431 = (object)*(((s1_ptr)_2)->base + _4430);
            if (IS_SEQUENCE(_lPath_8085)){
                    _4432 = SEQ_PTR(_lPath_8085)->length;
            }
            else {
                _4432 = 1;
            }
            rhs_slice_target = (object_ptr)&_4433;
            RHS_Slice(_lPath_8085, _4431, _4432);
            {
                object concat_list[3];

                concat_list[0] = _4433;
                concat_list[1] = _4429;
                concat_list[2] = _4427;
                Concat_N((object_ptr)&_lPath_8085, concat_list, 3);
            }
            DeRefDS(_4433);
            _4433 = NOVALUE;
            _4429 = NOVALUE;
            DeRefDS(_4427);
            _4427 = NOVALUE;

            /** filesys.e:1775							sl[$] = length(lPath)+1*/
            if (IS_SEQUENCE(_sl_8188)){
                    _4435 = SEQ_PTR(_sl_8188)->length;
            }
            else {
                _4435 = 1;
            }
            if (IS_SEQUENCE(_lPath_8085)){
                    _4436 = SEQ_PTR(_lPath_8085)->length;
            }
            else {
                _4436 = 1;
            }
            _4437 = _4436 + 1;
            _4436 = NOVALUE;
            _2 = (object)SEQ_PTR(_sl_8188);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_8188 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _4435);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _4437;
            if( _1 != _4437 ){
                DeRef(_1);
            }
            _4437 = NOVALUE;
L2B: 

            /** filesys.e:1777						if correct_name then*/
            if (_correct_name_8194 == 0)
            {
                goto L2C; // [1000] 1037
            }
            else{
            }

            /** filesys.e:1778							lPath = lPath[1..sl[i]] & read_name & lPath[sl[i+1]..$]*/
            _2 = (object)SEQ_PTR(_sl_8188);
            _4438 = (object)*(((s1_ptr)_2)->base + _i_8209);
            rhs_slice_target = (object_ptr)&_4439;
            RHS_Slice(_lPath_8085, 1, _4438);
            _4440 = _i_8209 + 1;
            _2 = (object)SEQ_PTR(_sl_8188);
            _4441 = (object)*(((s1_ptr)_2)->base + _4440);
            if (IS_SEQUENCE(_lPath_8085)){
                    _4442 = SEQ_PTR(_lPath_8085)->length;
            }
            else {
                _4442 = 1;
            }
            rhs_slice_target = (object_ptr)&_4443;
            RHS_Slice(_lPath_8085, _4441, _4442);
            {
                object concat_list[3];

                concat_list[0] = _4443;
                concat_list[1] = _read_name_8264;
                concat_list[2] = _4439;
                Concat_N((object_ptr)&_lPath_8085, concat_list, 3);
            }
            DeRefDS(_4443);
            _4443 = NOVALUE;
            DeRefDS(_4439);
            _4439 = NOVALUE;
L2C: 

            /** filesys.e:1780						continue "partloop"*/
            DeRef(_read_name_8264);
            _read_name_8264 = NOVALUE;
            DeRef(_part_8213);
            _part_8213 = NOVALUE;
            DeRef(_list_8217);
            _list_8217 = NOVALUE;
            DeRef(_supplied_name_8220);
            _supplied_name_8220 = NOVALUE;
            goto L23; // [1043] 1110
L2A: 
            DeRef(_read_name_8264);
            _read_name_8264 = NOVALUE;

            /** filesys.e:1782				end for*/
            _j_8262 = _j_8262 + 1;
            goto L28; // [1050] 890
L29: 
            ;
        }

        /** filesys.e:1786				if and_bits(TO_LOWER,case_flags) then*/
        {uintptr_t tu;
             tu = (uintptr_t)1 & (uintptr_t)_case_flags_8084;
             _4445 = MAKE_UINT(tu);
        }
        if (_4445 == 0) {
            DeRef(_4445);
            _4445 = NOVALUE;
            goto L2D; // [1061] 1100
        }
        else {
            if (!IS_ATOM_INT(_4445) && DBL_PTR(_4445)->dbl == 0.0){
                DeRef(_4445);
                _4445 = NOVALUE;
                goto L2D; // [1061] 1100
            }
            DeRef(_4445);
            _4445 = NOVALUE;
        }
        DeRef(_4445);
        _4445 = NOVALUE;

        /** filesys.e:1787					lPath = lPath[1..sl[i]-1] & lower(lPath[sl[i]..$])*/
        _2 = (object)SEQ_PTR(_sl_8188);
        _4446 = (object)*(((s1_ptr)_2)->base + _i_8209);
        if (IS_ATOM_INT(_4446)) {
            _4447 = _4446 - 1;
        }
        else {
            _4447 = binary_op(MINUS, _4446, 1);
        }
        _4446 = NOVALUE;
        rhs_slice_target = (object_ptr)&_4448;
        RHS_Slice(_lPath_8085, 1, _4447);
        _2 = (object)SEQ_PTR(_sl_8188);
        _4449 = (object)*(((s1_ptr)_2)->base + _i_8209);
        if (IS_SEQUENCE(_lPath_8085)){
                _4450 = SEQ_PTR(_lPath_8085)->length;
        }
        else {
            _4450 = 1;
        }
        rhs_slice_target = (object_ptr)&_4451;
        RHS_Slice(_lPath_8085, _4449, _4450);
        _4452 = _13lower(_4451);
        _4451 = NOVALUE;
        if (IS_SEQUENCE(_4448) && IS_ATOM(_4452)) {
            Ref(_4452);
            Append(&_lPath_8085, _4448, _4452);
        }
        else if (IS_ATOM(_4448) && IS_SEQUENCE(_4452)) {
        }
        else {
            Concat((object_ptr)&_lPath_8085, _4448, _4452);
            DeRefDS(_4448);
            _4448 = NOVALUE;
        }
        DeRef(_4448);
        _4448 = NOVALUE;
        DeRef(_4452);
        _4452 = NOVALUE;
L2D: 

        /** filesys.e:1789				exit*/
        DeRef(_part_8213);
        _part_8213 = NOVALUE;
        DeRef(_list_8217);
        _list_8217 = NOVALUE;
        DeRef(_supplied_name_8220);
        _supplied_name_8220 = NOVALUE;
        goto L20; // [1104] 1115

        /** filesys.e:1790			end for*/
L23: 
        _i_8209 = _i_8209 + -1;
        goto L1F; // [1110] 649
L20: 
        ;
    }

    /** filesys.e:1791			if and_bits(case_flags,or_bits(CORRECT,TO_LOWER))=TO_LOWER and length(lPath) then*/
    {uintptr_t tu;
         tu = (uintptr_t)2 | (uintptr_t)1;
         _4454 = MAKE_UINT(tu);
    }
    if (IS_ATOM_INT(_4454)) {
        {uintptr_t tu;
             tu = (uintptr_t)_case_flags_8084 & (uintptr_t)_4454;
             _4455 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_case_flags_8084;
        _4455 = Dand_bits(&temp_d, DBL_PTR(_4454));
    }
    DeRef(_4454);
    _4454 = NOVALUE;
    if (IS_ATOM_INT(_4455)) {
        _4456 = (_4455 == 1);
    }
    else {
        _4456 = (DBL_PTR(_4455)->dbl == (eudouble)1);
    }
    DeRef(_4455);
    _4455 = NOVALUE;
    if (_4456 == 0) {
        goto L2E; // [1129] 1149
    }
    if (IS_SEQUENCE(_lPath_8085)){
            _4458 = SEQ_PTR(_lPath_8085)->length;
    }
    else {
        _4458 = 1;
    }
    if (_4458 == 0)
    {
        _4458 = NOVALUE;
        goto L2E; // [1137] 1149
    }
    else{
        _4458 = NOVALUE;
    }

    /** filesys.e:1792				lPath = lower(lPath)*/
    RefDS(_lPath_8085);
    _0 = _lPath_8085;
    _lPath_8085 = _13lower(_lPath_8085);
    DeRefDS(_0);
L2E: 
L1D: 
    DeRef(_sl_8188);
    _sl_8188 = NOVALUE;
L1C: 

    /** filesys.e:1796		ifdef WINDOWS then*/

    /** filesys.e:1810		return lPath & wildcard_suffix*/
    Concat((object_ptr)&_4460, _lPath_8085, _wildcard_suffix_8131);
    DeRefDS(_path_in_8082);
    DeRefDS(_lPath_8085);
    DeRefi(_lLevel_8088);
    DeRefi(_lHome_8089);
    DeRefDS(_wildcard_suffix_8131);
    DeRef(_4295);
    _4295 = NOVALUE;
    DeRef(_4430);
    _4430 = NOVALUE;
    DeRef(_4447);
    _4447 = NOVALUE;
    _4449 = NOVALUE;
    DeRef(_4350);
    _4350 = NOVALUE;
    _4307 = NOVALUE;
    DeRef(_4456);
    _4456 = NOVALUE;
    _4404 = NOVALUE;
    _4438 = NOVALUE;
    _4426 = NOVALUE;
    DeRef(_4293);
    _4293 = NOVALUE;
    DeRef(_4380);
    _4380 = NOVALUE;
    DeRef(_4408);
    _4408 = NOVALUE;
    DeRef(_4385);
    _4385 = NOVALUE;
    DeRef(_4386);
    _4386 = NOVALUE;
    _4441 = NOVALUE;
    _4431 = NOVALUE;
    DeRef(_4301);
    _4301 = NOVALUE;
    DeRef(_4336);
    _4336 = NOVALUE;
    DeRef(_4289);
    _4289 = NOVALUE;
    DeRef(_4328);
    _4328 = NOVALUE;
    DeRef(_4311);
    _4311 = NOVALUE;
    _4391 = NOVALUE;
    DeRef(_4286);
    _4286 = NOVALUE;
    DeRef(_4388);
    _4388 = NOVALUE;
    DeRef(_4298);
    _4298 = NOVALUE;
    DeRef(_4377);
    _4377 = NOVALUE;
    _4409 = NOVALUE;
    DeRef(_4333);
    _4333 = NOVALUE;
    DeRef(_4353);
    _4353 = NOVALUE;
    DeRef(_4340);
    _4340 = NOVALUE;
    DeRef(_4440);
    _4440 = NOVALUE;
    return _4460;
    ;
}


object _16abbreviate_path(object _orig_path_8323, object _base_paths_8324)
{
    object _expanded_path_8325 = NOVALUE;
    object _fs_case_inlined_fs_case_at_61_8335 = NOVALUE;
    object _lowered_expanded_path_8336 = NOVALUE;
    object _fs_case_inlined_fs_case_at_73_8338 = NOVALUE;
    object _fs_case_inlined_fs_case_at_216_8365 = NOVALUE;
    object _s_inlined_fs_case_at_213_8364 = NOVALUE;
    object _4496 = NOVALUE;
    object _4495 = NOVALUE;
    object _4492 = NOVALUE;
    object _4491 = NOVALUE;
    object _4490 = NOVALUE;
    object _4489 = NOVALUE;
    object _4488 = NOVALUE;
    object _4486 = NOVALUE;
    object _4485 = NOVALUE;
    object _4484 = NOVALUE;
    object _4483 = NOVALUE;
    object _4482 = NOVALUE;
    object _4481 = NOVALUE;
    object _4480 = NOVALUE;
    object _4479 = NOVALUE;
    object _4476 = NOVALUE;
    object _4475 = NOVALUE;
    object _4474 = NOVALUE;
    object _4473 = NOVALUE;
    object _4472 = NOVALUE;
    object _4471 = NOVALUE;
    object _4470 = NOVALUE;
    object _4469 = NOVALUE;
    object _4468 = NOVALUE;
    object _4467 = NOVALUE;
    object _4466 = NOVALUE;
    object _4465 = NOVALUE;
    object _4464 = NOVALUE;
    object _4462 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:1881		expanded_path = canonical_path(orig_path)*/
    RefDS(_orig_path_8323);
    _0 = _expanded_path_8325;
    _expanded_path_8325 = _16canonical_path(_orig_path_8323, 0, 0);
    DeRef(_0);

    /** filesys.e:1884		base_paths = append(base_paths, curdir())*/
    _4462 = _16curdir(0);
    Ref(_4462);
    Append(&_base_paths_8324, _base_paths_8324, _4462);
    DeRef(_4462);
    _4462 = NOVALUE;

    /** filesys.e:1886		for i = 1 to length(base_paths) do*/
    _4464 = 1;
    {
        object _i_8330;
        _i_8330 = 1;
L1: 
        if (_i_8330 > 1){
            goto L2; // [30] 60
        }

        /** filesys.e:1887			base_paths[i] = canonical_path(base_paths[i], 1) -- assume each base path is meant to be a directory.*/
        _2 = (object)SEQ_PTR(_base_paths_8324);
        _4465 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_4465);
        _4466 = _16canonical_path(_4465, 1, 0);
        _4465 = NOVALUE;
        _2 = (object)SEQ_PTR(_base_paths_8324);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _base_paths_8324 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4466;
        if( _1 != _4466 ){
            DeRef(_1);
        }
        _4466 = NOVALUE;

        /** filesys.e:1888		end for*/
        _i_8330 = 1 + 1;
        goto L1; // [55] 37
L2: 
        ;
    }

    /** filesys.e:1892		base_paths = fs_case(base_paths)*/

    /** filesys.e:1825		ifdef WINDOWS then*/

    /** filesys.e:1828			return s*/
    RefDS(_base_paths_8324);
    DeRefDS(_base_paths_8324);
    _base_paths_8324 = _base_paths_8324;

    /** filesys.e:1893		sequence lowered_expanded_path = fs_case(expanded_path)*/

    /** filesys.e:1825		ifdef WINDOWS then*/

    /** filesys.e:1828			return s*/
    RefDS(_expanded_path_8325);
    DeRef(_lowered_expanded_path_8336);
    _lowered_expanded_path_8336 = _expanded_path_8325;

    /** filesys.e:1896		for i = 1 to length(base_paths) do*/
    if (IS_SEQUENCE(_base_paths_8324)){
            _4467 = SEQ_PTR(_base_paths_8324)->length;
    }
    else {
        _4467 = 1;
    }
    {
        object _i_8340;
        _i_8340 = 1;
L3: 
        if (_i_8340 > _4467){
            goto L4; // [89] 143
        }

        /** filesys.e:1897			if search:begins(base_paths[i], lowered_expanded_path) then*/
        _2 = (object)SEQ_PTR(_base_paths_8324);
        _4468 = (object)*(((s1_ptr)_2)->base + _i_8340);
        Ref(_4468);
        RefDS(_lowered_expanded_path_8336);
        _4469 = _15begins(_4468, _lowered_expanded_path_8336);
        _4468 = NOVALUE;
        if (_4469 == 0) {
            DeRef(_4469);
            _4469 = NOVALUE;
            goto L5; // [107] 136
        }
        else {
            if (!IS_ATOM_INT(_4469) && DBL_PTR(_4469)->dbl == 0.0){
                DeRef(_4469);
                _4469 = NOVALUE;
                goto L5; // [107] 136
            }
            DeRef(_4469);
            _4469 = NOVALUE;
        }
        DeRef(_4469);
        _4469 = NOVALUE;

        /** filesys.e:1899				return expanded_path[length(base_paths[i]) + 1 .. $]*/
        _2 = (object)SEQ_PTR(_base_paths_8324);
        _4470 = (object)*(((s1_ptr)_2)->base + _i_8340);
        if (IS_SEQUENCE(_4470)){
                _4471 = SEQ_PTR(_4470)->length;
        }
        else {
            _4471 = 1;
        }
        _4470 = NOVALUE;
        _4472 = _4471 + 1;
        _4471 = NOVALUE;
        if (IS_SEQUENCE(_expanded_path_8325)){
                _4473 = SEQ_PTR(_expanded_path_8325)->length;
        }
        else {
            _4473 = 1;
        }
        rhs_slice_target = (object_ptr)&_4474;
        RHS_Slice(_expanded_path_8325, _4472, _4473);
        DeRefDS(_orig_path_8323);
        DeRefDS(_base_paths_8324);
        DeRefDS(_expanded_path_8325);
        DeRefDS(_lowered_expanded_path_8336);
        _4472 = NOVALUE;
        _4470 = NOVALUE;
        return _4474;
L5: 

        /** filesys.e:1901		end for*/
        _i_8340 = _i_8340 + 1;
        goto L3; // [138] 96
L4: 
        ;
    }

    /** filesys.e:1904		ifdef WINDOWS then*/

    /** filesys.e:1912		base_paths = stdseq:split(base_paths[$], SLASH)*/
    if (IS_SEQUENCE(_base_paths_8324)){
            _4475 = SEQ_PTR(_base_paths_8324)->length;
    }
    else {
        _4475 = 1;
    }
    _2 = (object)SEQ_PTR(_base_paths_8324);
    _4476 = (object)*(((s1_ptr)_2)->base + _4475);
    Ref(_4476);
    _0 = _base_paths_8324;
    _base_paths_8324 = _22split(_4476, 47, 0, 0);
    DeRefDS(_0);
    _4476 = NOVALUE;

    /** filesys.e:1914		expanded_path = stdseq:split(expanded_path, SLASH)*/
    RefDS(_expanded_path_8325);
    _0 = _expanded_path_8325;
    _expanded_path_8325 = _22split(_expanded_path_8325, 47, 0, 0);
    DeRefDS(_0);

    /** filesys.e:1915		lowered_expanded_path = ""*/
    RefDS(_5);
    DeRef(_lowered_expanded_path_8336);
    _lowered_expanded_path_8336 = _5;

    /** filesys.e:1918		for i = 1 to math:min({length(expanded_path), length(base_paths) - 1}) do*/
    if (IS_SEQUENCE(_expanded_path_8325)){
            _4479 = SEQ_PTR(_expanded_path_8325)->length;
    }
    else {
        _4479 = 1;
    }
    if (IS_SEQUENCE(_base_paths_8324)){
            _4480 = SEQ_PTR(_base_paths_8324)->length;
    }
    else {
        _4480 = 1;
    }
    _4481 = _4480 - 1;
    _4480 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4479;
    ((intptr_t *)_2)[2] = _4481;
    _4482 = MAKE_SEQ(_1);
    _4481 = NOVALUE;
    _4479 = NOVALUE;
    _4483 = _10min(_4482);
    _4482 = NOVALUE;
    {
        object _i_8355;
        _i_8355 = 1;
L6: 
        if (binary_op_a(GREATER, _i_8355, _4483)){
            goto L7; // [201] 305
        }

        /** filesys.e:1919			if not equal(fs_case(expanded_path[i]), base_paths[i]) then*/
        _2 = (object)SEQ_PTR(_expanded_path_8325);
        if (!IS_ATOM_INT(_i_8355)){
            _4484 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_8355)->dbl));
        }
        else{
            _4484 = (object)*(((s1_ptr)_2)->base + _i_8355);
        }
        Ref(_4484);
        DeRef(_s_inlined_fs_case_at_213_8364);
        _s_inlined_fs_case_at_213_8364 = _4484;
        _4484 = NOVALUE;

        /** filesys.e:1825		ifdef WINDOWS then*/

        /** filesys.e:1828			return s*/
        Ref(_s_inlined_fs_case_at_213_8364);
        DeRef(_fs_case_inlined_fs_case_at_216_8365);
        _fs_case_inlined_fs_case_at_216_8365 = _s_inlined_fs_case_at_213_8364;
        DeRef(_s_inlined_fs_case_at_213_8364);
        _s_inlined_fs_case_at_213_8364 = NOVALUE;
        _2 = (object)SEQ_PTR(_base_paths_8324);
        if (!IS_ATOM_INT(_i_8355)){
            _4485 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_8355)->dbl));
        }
        else{
            _4485 = (object)*(((s1_ptr)_2)->base + _i_8355);
        }
        if (_fs_case_inlined_fs_case_at_216_8365 == _4485)
        _4486 = 1;
        else if (IS_ATOM_INT(_fs_case_inlined_fs_case_at_216_8365) && IS_ATOM_INT(_4485))
        _4486 = 0;
        else
        _4486 = (compare(_fs_case_inlined_fs_case_at_216_8365, _4485) == 0);
        _4485 = NOVALUE;
        if (_4486 != 0)
        goto L8; // [237] 298
        _4486 = NOVALUE;

        /** filesys.e:1923				expanded_path = repeat("..", length(base_paths) - i) & expanded_path[i .. $]*/
        if (IS_SEQUENCE(_base_paths_8324)){
                _4488 = SEQ_PTR(_base_paths_8324)->length;
        }
        else {
            _4488 = 1;
        }
        if (IS_ATOM_INT(_i_8355)) {
            _4489 = _4488 - _i_8355;
        }
        else {
            _4489 = NewDouble((eudouble)_4488 - DBL_PTR(_i_8355)->dbl);
        }
        _4488 = NOVALUE;
        _4490 = Repeat(_4091, _4489);
        DeRef(_4489);
        _4489 = NOVALUE;
        if (IS_SEQUENCE(_expanded_path_8325)){
                _4491 = SEQ_PTR(_expanded_path_8325)->length;
        }
        else {
            _4491 = 1;
        }
        rhs_slice_target = (object_ptr)&_4492;
        RHS_Slice(_expanded_path_8325, _i_8355, _4491);
        Concat((object_ptr)&_expanded_path_8325, _4490, _4492);
        DeRefDS(_4490);
        _4490 = NOVALUE;
        DeRef(_4490);
        _4490 = NOVALUE;
        DeRefDS(_4492);
        _4492 = NOVALUE;

        /** filesys.e:1924				expanded_path = stdseq:join(expanded_path, SLASH)*/
        RefDS(_expanded_path_8325);
        _0 = _expanded_path_8325;
        _expanded_path_8325 = _22join(_expanded_path_8325, 47);
        DeRefDS(_0);

        /** filesys.e:1925				if length(expanded_path) < length(orig_path) then*/
        if (IS_SEQUENCE(_expanded_path_8325)){
                _4495 = SEQ_PTR(_expanded_path_8325)->length;
        }
        else {
            _4495 = 1;
        }
        if (IS_SEQUENCE(_orig_path_8323)){
                _4496 = SEQ_PTR(_orig_path_8323)->length;
        }
        else {
            _4496 = 1;
        }
        if (_4495 >= _4496)
        goto L7; // [282] 305

        /** filesys.e:1927			  		return expanded_path*/
        DeRef(_i_8355);
        DeRefDS(_orig_path_8323);
        DeRefDS(_base_paths_8324);
        DeRef(_lowered_expanded_path_8336);
        DeRef(_4472);
        _4472 = NOVALUE;
        DeRef(_4474);
        _4474 = NOVALUE;
        _4470 = NOVALUE;
        DeRef(_4483);
        _4483 = NOVALUE;
        return _expanded_path_8325;

        /** filesys.e:1929				exit*/
        goto L7; // [295] 305
L8: 

        /** filesys.e:1931		end for*/
        _0 = _i_8355;
        if (IS_ATOM_INT(_i_8355)) {
            _i_8355 = _i_8355 + 1;
            if ((object)((uintptr_t)_i_8355 +(uintptr_t) HIGH_BITS) >= 0){
                _i_8355 = NewDouble((eudouble)_i_8355);
            }
        }
        else {
            _i_8355 = binary_op_a(PLUS, _i_8355, 1);
        }
        DeRef(_0);
        goto L6; // [300] 208
L7: 
        ;
        DeRef(_i_8355);
    }

    /** filesys.e:1934		return orig_path*/
    DeRefDS(_base_paths_8324);
    DeRef(_expanded_path_8325);
    DeRef(_lowered_expanded_path_8336);
    DeRef(_4472);
    _4472 = NOVALUE;
    DeRef(_4474);
    _4474 = NOVALUE;
    _4470 = NOVALUE;
    DeRef(_4483);
    _4483 = NOVALUE;
    return _orig_path_8323;
    ;
}


object _16file_type(object _filename_8413)
{
    object _dirfil_8414 = NOVALUE;
    object _4529 = NOVALUE;
    object _4528 = NOVALUE;
    object _4527 = NOVALUE;
    object _4526 = NOVALUE;
    object _4525 = NOVALUE;
    object _4523 = NOVALUE;
    object _4522 = NOVALUE;
    object _4521 = NOVALUE;
    object _4520 = NOVALUE;
    object _4519 = NOVALUE;
    object _4518 = NOVALUE;
    object _4517 = NOVALUE;
    object _4515 = NOVALUE;
    object _4513 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:2040		if eu:find('*', filename) or eu:find('?', filename) then return FILETYPE_UNDEFINED end if*/
    _4513 = find_from(42, _filename_8413, 1);
    if (_4513 != 0) {
        goto L1; // [10] 24
    }
    _4515 = find_from(63, _filename_8413, 1);
    if (_4515 == 0)
    {
        _4515 = NOVALUE;
        goto L2; // [20] 29
    }
    else{
        _4515 = NOVALUE;
    }
L1: 
    DeRefDS(_filename_8413);
    DeRef(_dirfil_8414);
    return -1;
L2: 

    /** filesys.e:2042		ifdef WINDOWS then*/

    /** filesys.e:2048		dirfil = dir(filename)*/
    RefDS(_filename_8413);
    _0 = _dirfil_8414;
    _dirfil_8414 = _16dir(_filename_8413);
    DeRef(_0);

    /** filesys.e:2049		if sequence(dirfil) then*/
    _4517 = IS_SEQUENCE(_dirfil_8414);
    if (_4517 == 0)
    {
        _4517 = NOVALUE;
        goto L3; // [42] 126
    }
    else{
        _4517 = NOVALUE;
    }

    /** filesys.e:2050			if length( dirfil ) > 1 or eu:find('d', dirfil[1][2]) or (length(filename)=3 and filename[2]=':') then*/
    if (IS_SEQUENCE(_dirfil_8414)){
            _4518 = SEQ_PTR(_dirfil_8414)->length;
    }
    else {
        _4518 = 1;
    }
    _4519 = (_4518 > 1);
    _4518 = NOVALUE;
    if (_4519 != 0) {
        _4520 = 1;
        goto L4; // [54] 75
    }
    _2 = (object)SEQ_PTR(_dirfil_8414);
    _4521 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_4521);
    _4522 = (object)*(((s1_ptr)_2)->base + 2);
    _4521 = NOVALUE;
    _4523 = find_from(100, _4522, 1);
    _4522 = NOVALUE;
    _4520 = (_4523 != 0);
L4: 
    if (_4520 != 0) {
        goto L5; // [75] 107
    }
    if (IS_SEQUENCE(_filename_8413)){
            _4525 = SEQ_PTR(_filename_8413)->length;
    }
    else {
        _4525 = 1;
    }
    _4526 = (_4525 == 3);
    _4525 = NOVALUE;
    if (_4526 == 0) {
        DeRef(_4527);
        _4527 = 0;
        goto L6; // [86] 102
    }
    _2 = (object)SEQ_PTR(_filename_8413);
    _4528 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_4528)) {
        _4529 = (_4528 == 58);
    }
    else {
        _4529 = binary_op(EQUALS, _4528, 58);
    }
    _4528 = NOVALUE;
    if (IS_ATOM_INT(_4529))
    _4527 = (_4529 != 0);
    else
    _4527 = DBL_PTR(_4529)->dbl != 0.0;
L6: 
    if (_4527 == 0)
    {
        _4527 = NOVALUE;
        goto L7; // [103] 116
    }
    else{
        _4527 = NOVALUE;
    }
L5: 

    /** filesys.e:2051				return FILETYPE_DIRECTORY*/
    DeRefDS(_filename_8413);
    DeRef(_dirfil_8414);
    DeRef(_4519);
    _4519 = NOVALUE;
    DeRef(_4526);
    _4526 = NOVALUE;
    DeRef(_4529);
    _4529 = NOVALUE;
    return 2;
    goto L8; // [113] 133
L7: 

    /** filesys.e:2053				return FILETYPE_FILE*/
    DeRefDS(_filename_8413);
    DeRef(_dirfil_8414);
    DeRef(_4519);
    _4519 = NOVALUE;
    DeRef(_4526);
    _4526 = NOVALUE;
    DeRef(_4529);
    _4529 = NOVALUE;
    return 1;
    goto L8; // [123] 133
L3: 

    /** filesys.e:2056			return FILETYPE_NOT_FOUND*/
    DeRefDS(_filename_8413);
    DeRef(_dirfil_8414);
    DeRef(_4519);
    _4519 = NOVALUE;
    DeRef(_4526);
    _4526 = NOVALUE;
    DeRef(_4529);
    _4529 = NOVALUE;
    return 0;
L8: 
    ;
}


object _16file_exists(object _name_8453)
{
    object _pName_8456 = NOVALUE;
    object _r_8458 = NOVALUE;
    object _4534 = NOVALUE;
    object _4532 = NOVALUE;
    object _4530 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:2103		if atom(name) then*/
    _4530 = IS_ATOM(_name_8453);
    if (_4530 == 0)
    {
        _4530 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _4530 = NOVALUE;
    }

    /** filesys.e:2104			return 0*/
    DeRef(_name_8453);
    DeRef(_pName_8456);
    DeRef(_r_8458);
    return 0;
L1: 

    /** filesys.e:2107		ifdef WINDOWS then*/

    /** filesys.e:2115			atom pName = machine:allocate_string(name)*/
    Ref(_name_8453);
    _0 = _pName_8456;
    _pName_8456 = _4allocate_string(_name_8453, 0);
    DeRef(_0);

    /** filesys.e:2116			atom r = c_func(xGetFileAttributes, {pName, 0})*/
    Ref(_pName_8456);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pName_8456;
    ((intptr_t *)_2)[2] = 0;
    _4532 = MAKE_SEQ(_1);
    DeRef(_r_8458);
    _r_8458 = call_c(1, _16xGetFileAttributes_7528, _4532);
    DeRefDS(_4532);
    _4532 = NOVALUE;

    /** filesys.e:2117			machine:free(pName)*/
    Ref(_pName_8456);
    _4free(_pName_8456);

    /** filesys.e:2119			return r = 0*/
    if (IS_ATOM_INT(_r_8458)) {
        _4534 = (_r_8458 == 0);
    }
    else {
        _4534 = (DBL_PTR(_r_8458)->dbl == (eudouble)0);
    }
    DeRef(_name_8453);
    DeRef(_pName_8456);
    DeRef(_r_8458);
    return _4534;
    ;
}


object _16file_timestamp(object _fname_8464)
{
    object _d_8465 = NOVALUE;
    object _4549 = NOVALUE;
    object _4548 = NOVALUE;
    object _4547 = NOVALUE;
    object _4546 = NOVALUE;
    object _4545 = NOVALUE;
    object _4544 = NOVALUE;
    object _4543 = NOVALUE;
    object _4542 = NOVALUE;
    object _4541 = NOVALUE;
    object _4540 = NOVALUE;
    object _4539 = NOVALUE;
    object _4538 = NOVALUE;
    object _4537 = NOVALUE;
    object _4536 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:2139		object d = dir(fname)*/
    RefDS(_fname_8464);
    _0 = _d_8465;
    _d_8465 = _16dir(_fname_8464);
    DeRef(_0);

    /** filesys.e:2140		if atom(d) then return -1 end if*/
    _4536 = IS_ATOM(_d_8465);
    if (_4536 == 0)
    {
        _4536 = NOVALUE;
        goto L1; // [14] 22
    }
    else{
        _4536 = NOVALUE;
    }
    DeRefDS(_fname_8464);
    DeRef(_d_8465);
    return -1;
L1: 

    /** filesys.e:2142		return datetime:new(d[1][D_YEAR], d[1][D_MONTH], d[1][D_DAY],*/
    _2 = (object)SEQ_PTR(_d_8465);
    _4537 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_4537);
    _4538 = (object)*(((s1_ptr)_2)->base + 4);
    _4537 = NOVALUE;
    _2 = (object)SEQ_PTR(_d_8465);
    _4539 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_4539);
    _4540 = (object)*(((s1_ptr)_2)->base + 5);
    _4539 = NOVALUE;
    _2 = (object)SEQ_PTR(_d_8465);
    _4541 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_4541);
    _4542 = (object)*(((s1_ptr)_2)->base + 6);
    _4541 = NOVALUE;
    _2 = (object)SEQ_PTR(_d_8465);
    _4543 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_4543);
    _4544 = (object)*(((s1_ptr)_2)->base + 7);
    _4543 = NOVALUE;
    _2 = (object)SEQ_PTR(_d_8465);
    _4545 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_4545);
    _4546 = (object)*(((s1_ptr)_2)->base + 8);
    _4545 = NOVALUE;
    _2 = (object)SEQ_PTR(_d_8465);
    _4547 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_4547);
    _4548 = (object)*(((s1_ptr)_2)->base + 9);
    _4547 = NOVALUE;
    Ref(_4538);
    Ref(_4540);
    Ref(_4542);
    Ref(_4544);
    Ref(_4546);
    Ref(_4548);
    _4549 = _17new(_4538, _4540, _4542, _4544, _4546, _4548);
    _4538 = NOVALUE;
    _4540 = NOVALUE;
    _4542 = NOVALUE;
    _4544 = NOVALUE;
    _4546 = NOVALUE;
    _4548 = NOVALUE;
    DeRefDS(_fname_8464);
    DeRef(_d_8465);
    return _4549;
    ;
}


object _16locate_file(object _filename_8654, object _search_list_8655, object _subdir_8656)
{
    object _extra_paths_8657 = NOVALUE;
    object _this_path_8658 = NOVALUE;
    object _4722 = NOVALUE;
    object _4721 = NOVALUE;
    object _4719 = NOVALUE;
    object _4717 = NOVALUE;
    object _4715 = NOVALUE;
    object _4714 = NOVALUE;
    object _4713 = NOVALUE;
    object _4711 = NOVALUE;
    object _4710 = NOVALUE;
    object _4709 = NOVALUE;
    object _4707 = NOVALUE;
    object _4706 = NOVALUE;
    object _4705 = NOVALUE;
    object _4702 = NOVALUE;
    object _4701 = NOVALUE;
    object _4699 = NOVALUE;
    object _4697 = NOVALUE;
    object _4696 = NOVALUE;
    object _4693 = NOVALUE;
    object _4688 = NOVALUE;
    object _4684 = NOVALUE;
    object _4674 = NOVALUE;
    object _4671 = NOVALUE;
    object _4668 = NOVALUE;
    object _4667 = NOVALUE;
    object _4663 = NOVALUE;
    object _4660 = NOVALUE;
    object _4658 = NOVALUE;
    object _4654 = NOVALUE;
    object _4652 = NOVALUE;
    object _4651 = NOVALUE;
    object _4647 = NOVALUE;
    object _4646 = NOVALUE;
    object _4643 = NOVALUE;
    object _4641 = NOVALUE;
    object _4640 = NOVALUE;
    object _0, _1, _2;
    

    /** filesys.e:2509		if absolute_path(filename) then*/
    RefDS(_filename_8654);
    _4640 = _16absolute_path(_filename_8654);
    if (_4640 == 0) {
        DeRef(_4640);
        _4640 = NOVALUE;
        goto L1; // [13] 23
    }
    else {
        if (!IS_ATOM_INT(_4640) && DBL_PTR(_4640)->dbl == 0.0){
            DeRef(_4640);
            _4640 = NOVALUE;
            goto L1; // [13] 23
        }
        DeRef(_4640);
        _4640 = NOVALUE;
    }
    DeRef(_4640);
    _4640 = NOVALUE;

    /** filesys.e:2510			return filename*/
    DeRefDS(_search_list_8655);
    DeRefDS(_subdir_8656);
    DeRef(_extra_paths_8657);
    DeRef(_this_path_8658);
    return _filename_8654;
L1: 

    /** filesys.e:2513		if length(search_list) = 0 then*/
    if (IS_SEQUENCE(_search_list_8655)){
            _4641 = SEQ_PTR(_search_list_8655)->length;
    }
    else {
        _4641 = 1;
    }
    if (_4641 != 0)
    goto L2; // [28] 283

    /** filesys.e:2514			search_list = append(search_list, "." & SLASH)*/
    Append(&_4643, _4024, 47);
    RefDS(_4643);
    Append(&_search_list_8655, _search_list_8655, _4643);
    DeRefDS(_4643);
    _4643 = NOVALUE;

    /** filesys.e:2516			extra_paths = command_line()*/
    DeRef(_extra_paths_8657);
    _extra_paths_8657 = Command_Line();

    /** filesys.e:2517			extra_paths = canonical_path(dirname(extra_paths[2]), 1)*/
    _2 = (object)SEQ_PTR(_extra_paths_8657);
    _4646 = (object)*(((s1_ptr)_2)->base + 2);
    RefDS(_4646);
    _4647 = _16dirname(_4646, 0);
    _4646 = NOVALUE;
    _0 = _extra_paths_8657;
    _extra_paths_8657 = _16canonical_path(_4647, 1, 0);
    DeRefDS(_0);
    _4647 = NOVALUE;

    /** filesys.e:2518			search_list = append(search_list, extra_paths)*/
    Ref(_extra_paths_8657);
    Append(&_search_list_8655, _search_list_8655, _extra_paths_8657);

    /** filesys.e:2520			ifdef UNIX then*/

    /** filesys.e:2521				extra_paths = getenv("HOME")*/
    DeRef(_extra_paths_8657);
    _extra_paths_8657 = EGetEnv(_4302);

    /** filesys.e:2527			if sequence(extra_paths) then*/
    _4651 = IS_SEQUENCE(_extra_paths_8657);
    if (_4651 == 0)
    {
        _4651 = NOVALUE;
        goto L3; // [81] 95
    }
    else{
        _4651 = NOVALUE;
    }

    /** filesys.e:2528				search_list = append(search_list, extra_paths & SLASH)*/
    if (IS_SEQUENCE(_extra_paths_8657) && IS_ATOM(47)) {
        Append(&_4652, _extra_paths_8657, 47);
    }
    else if (IS_ATOM(_extra_paths_8657) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_4652, _extra_paths_8657, 47);
    }
    RefDS(_4652);
    Append(&_search_list_8655, _search_list_8655, _4652);
    DeRefDS(_4652);
    _4652 = NOVALUE;
L3: 

    /** filesys.e:2531			search_list = append(search_list, ".." & SLASH)*/
    Append(&_4654, _4091, 47);
    RefDS(_4654);
    Append(&_search_list_8655, _search_list_8655, _4654);
    DeRefDS(_4654);
    _4654 = NOVALUE;

    /** filesys.e:2533			extra_paths = getenv("EUDIR")*/
    DeRef(_extra_paths_8657);
    _extra_paths_8657 = EGetEnv(_4656);

    /** filesys.e:2534			if sequence(extra_paths) then*/
    _4658 = IS_SEQUENCE(_extra_paths_8657);
    if (_4658 == 0)
    {
        _4658 = NOVALUE;
        goto L4; // [115] 145
    }
    else{
        _4658 = NOVALUE;
    }

    /** filesys.e:2535				search_list = append(search_list, extra_paths & SLASH & "bin" & SLASH)*/
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4659;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8657;
        Concat_N((object_ptr)&_4660, concat_list, 4);
    }
    RefDS(_4660);
    Append(&_search_list_8655, _search_list_8655, _4660);
    DeRefDS(_4660);
    _4660 = NOVALUE;

    /** filesys.e:2536				search_list = append(search_list, extra_paths & SLASH & "docs" & SLASH)*/
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4662;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8657;
        Concat_N((object_ptr)&_4663, concat_list, 4);
    }
    RefDS(_4663);
    Append(&_search_list_8655, _search_list_8655, _4663);
    DeRefDS(_4663);
    _4663 = NOVALUE;
L4: 

    /** filesys.e:2539			extra_paths = getenv("EUDIST")*/
    DeRef(_extra_paths_8657);
    _extra_paths_8657 = EGetEnv(_4665);

    /** filesys.e:2540			if sequence(extra_paths) then*/
    _4667 = IS_SEQUENCE(_extra_paths_8657);
    if (_4667 == 0)
    {
        _4667 = NOVALUE;
        goto L5; // [155] 195
    }
    else{
        _4667 = NOVALUE;
    }

    /** filesys.e:2541				search_list = append(search_list, extra_paths & SLASH)*/
    if (IS_SEQUENCE(_extra_paths_8657) && IS_ATOM(47)) {
        Append(&_4668, _extra_paths_8657, 47);
    }
    else if (IS_ATOM(_extra_paths_8657) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_4668, _extra_paths_8657, 47);
    }
    RefDS(_4668);
    Append(&_search_list_8655, _search_list_8655, _4668);
    DeRefDS(_4668);
    _4668 = NOVALUE;

    /** filesys.e:2542				search_list = append(search_list, extra_paths & SLASH & "etc" & SLASH)*/
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4670;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8657;
        Concat_N((object_ptr)&_4671, concat_list, 4);
    }
    RefDS(_4671);
    Append(&_search_list_8655, _search_list_8655, _4671);
    DeRefDS(_4671);
    _4671 = NOVALUE;

    /** filesys.e:2543				search_list = append(search_list, extra_paths & SLASH & "data" & SLASH)*/
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4673;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8657;
        Concat_N((object_ptr)&_4674, concat_list, 4);
    }
    RefDS(_4674);
    Append(&_search_list_8655, _search_list_8655, _4674);
    DeRefDS(_4674);
    _4674 = NOVALUE;
L5: 

    /** filesys.e:2546			ifdef UNIX then*/

    /** filesys.e:2548				search_list = append( search_list, "/usr/local/share/euphoria/bin/" )*/
    RefDS(_4676);
    Append(&_search_list_8655, _search_list_8655, _4676);

    /** filesys.e:2549				search_list = append( search_list, "/usr/share/euphoria/bin/" )*/
    RefDS(_4678);
    Append(&_search_list_8655, _search_list_8655, _4678);

    /** filesys.e:2552			search_list &= include_paths(1)*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_4683);
    ((intptr_t*)_2)[1] = _4683;
    RefDS(_4682);
    ((intptr_t*)_2)[2] = _4682;
    RefDS(_4681);
    ((intptr_t*)_2)[3] = _4681;
    RefDS(_4680);
    ((intptr_t*)_2)[4] = _4680;
    _4684 = MAKE_SEQ(_1);
    Concat((object_ptr)&_search_list_8655, _search_list_8655, _4684);
    DeRefDS(_4684);
    _4684 = NOVALUE;

    /** filesys.e:2555			extra_paths = getenv("USERPATH")*/
    DeRef(_extra_paths_8657);
    _extra_paths_8657 = EGetEnv(_4686);

    /** filesys.e:2556			if sequence(extra_paths) then*/
    _4688 = IS_SEQUENCE(_extra_paths_8657);
    if (_4688 == 0)
    {
        _4688 = NOVALUE;
        goto L6; // [232] 251
    }
    else{
        _4688 = NOVALUE;
    }

    /** filesys.e:2557				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    Ref(_extra_paths_8657);
    _0 = _extra_paths_8657;
    _extra_paths_8657 = _22split(_extra_paths_8657, 58, 0, 0);
    DeRefi(_0);

    /** filesys.e:2558				search_list &= extra_paths*/
    if (IS_SEQUENCE(_search_list_8655) && IS_ATOM(_extra_paths_8657)) {
        Ref(_extra_paths_8657);
        Append(&_search_list_8655, _search_list_8655, _extra_paths_8657);
    }
    else if (IS_ATOM(_search_list_8655) && IS_SEQUENCE(_extra_paths_8657)) {
    }
    else {
        Concat((object_ptr)&_search_list_8655, _search_list_8655, _extra_paths_8657);
    }
L6: 

    /** filesys.e:2561			extra_paths = getenv("PATH")*/
    DeRef(_extra_paths_8657);
    _extra_paths_8657 = EGetEnv(_4691);

    /** filesys.e:2562			if sequence(extra_paths) then*/
    _4693 = IS_SEQUENCE(_extra_paths_8657);
    if (_4693 == 0)
    {
        _4693 = NOVALUE;
        goto L7; // [261] 308
    }
    else{
        _4693 = NOVALUE;
    }

    /** filesys.e:2563				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    Ref(_extra_paths_8657);
    _0 = _extra_paths_8657;
    _extra_paths_8657 = _22split(_extra_paths_8657, 58, 0, 0);
    DeRefi(_0);

    /** filesys.e:2564				search_list &= extra_paths*/
    if (IS_SEQUENCE(_search_list_8655) && IS_ATOM(_extra_paths_8657)) {
        Ref(_extra_paths_8657);
        Append(&_search_list_8655, _search_list_8655, _extra_paths_8657);
    }
    else if (IS_ATOM(_search_list_8655) && IS_SEQUENCE(_extra_paths_8657)) {
    }
    else {
        Concat((object_ptr)&_search_list_8655, _search_list_8655, _extra_paths_8657);
    }
    goto L7; // [280] 308
L2: 

    /** filesys.e:2567			if integer(search_list[1]) then*/
    _2 = (object)SEQ_PTR(_search_list_8655);
    _4696 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_4696))
    _4697 = 1;
    else if (IS_ATOM_DBL(_4696))
    _4697 = IS_ATOM_INT(DoubleToInt(_4696));
    else
    _4697 = 0;
    _4696 = NOVALUE;
    if (_4697 == 0)
    {
        _4697 = NOVALUE;
        goto L8; // [292] 307
    }
    else{
        _4697 = NOVALUE;
    }

    /** filesys.e:2568				search_list = stdseq:split(search_list, PATHSEP)*/
    RefDS(_search_list_8655);
    _0 = _search_list_8655;
    _search_list_8655 = _22split(_search_list_8655, 58, 0, 0);
    DeRefDS(_0);
L8: 
L7: 

    /** filesys.e:2572		if length(subdir) > 0 then*/
    if (IS_SEQUENCE(_subdir_8656)){
            _4699 = SEQ_PTR(_subdir_8656)->length;
    }
    else {
        _4699 = 1;
    }
    if (_4699 <= 0)
    goto L9; // [313] 338

    /** filesys.e:2573			if subdir[$] != SLASH then*/
    if (IS_SEQUENCE(_subdir_8656)){
            _4701 = SEQ_PTR(_subdir_8656)->length;
    }
    else {
        _4701 = 1;
    }
    _2 = (object)SEQ_PTR(_subdir_8656);
    _4702 = (object)*(((s1_ptr)_2)->base + _4701);
    if (binary_op_a(EQUALS, _4702, 47)){
        _4702 = NOVALUE;
        goto LA; // [326] 337
    }
    _4702 = NOVALUE;

    /** filesys.e:2574				subdir &= SLASH*/
    Append(&_subdir_8656, _subdir_8656, 47);
LA: 
L9: 

    /** filesys.e:2578		for i = 1 to length(search_list) do*/
    if (IS_SEQUENCE(_search_list_8655)){
            _4705 = SEQ_PTR(_search_list_8655)->length;
    }
    else {
        _4705 = 1;
    }
    {
        object _i_8736;
        _i_8736 = 1;
LB: 
        if (_i_8736 > _4705){
            goto LC; // [343] 466
        }

        /** filesys.e:2579			if length(search_list[i]) = 0 then*/
        _2 = (object)SEQ_PTR(_search_list_8655);
        _4706 = (object)*(((s1_ptr)_2)->base + _i_8736);
        if (IS_SEQUENCE(_4706)){
                _4707 = SEQ_PTR(_4706)->length;
        }
        else {
            _4707 = 1;
        }
        _4706 = NOVALUE;
        if (_4707 != 0)
        goto LD; // [359] 368

        /** filesys.e:2580				continue*/
        goto LE; // [365] 461
LD: 

        /** filesys.e:2583			if search_list[i][$] != SLASH then*/
        _2 = (object)SEQ_PTR(_search_list_8655);
        _4709 = (object)*(((s1_ptr)_2)->base + _i_8736);
        if (IS_SEQUENCE(_4709)){
                _4710 = SEQ_PTR(_4709)->length;
        }
        else {
            _4710 = 1;
        }
        _2 = (object)SEQ_PTR(_4709);
        _4711 = (object)*(((s1_ptr)_2)->base + _4710);
        _4709 = NOVALUE;
        if (binary_op_a(EQUALS, _4711, 47)){
            _4711 = NOVALUE;
            goto LF; // [381] 400
        }
        _4711 = NOVALUE;

        /** filesys.e:2584				search_list[i] &= SLASH*/
        _2 = (object)SEQ_PTR(_search_list_8655);
        _4713 = (object)*(((s1_ptr)_2)->base + _i_8736);
        if (IS_SEQUENCE(_4713) && IS_ATOM(47)) {
            Append(&_4714, _4713, 47);
        }
        else if (IS_ATOM(_4713) && IS_SEQUENCE(47)) {
        }
        else {
            Concat((object_ptr)&_4714, _4713, 47);
            _4713 = NOVALUE;
        }
        _4713 = NOVALUE;
        _2 = (object)SEQ_PTR(_search_list_8655);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _search_list_8655 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_8736);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4714;
        if( _1 != _4714 ){
            DeRef(_1);
        }
        _4714 = NOVALUE;
LF: 

        /** filesys.e:2588			if length(subdir) > 0 then*/
        if (IS_SEQUENCE(_subdir_8656)){
                _4715 = SEQ_PTR(_subdir_8656)->length;
        }
        else {
            _4715 = 1;
        }
        if (_4715 <= 0)
        goto L10; // [405] 424

        /** filesys.e:2589				this_path = search_list[i] & subdir & filename*/
        _2 = (object)SEQ_PTR(_search_list_8655);
        _4717 = (object)*(((s1_ptr)_2)->base + _i_8736);
        {
            object concat_list[3];

            concat_list[0] = _filename_8654;
            concat_list[1] = _subdir_8656;
            concat_list[2] = _4717;
            Concat_N((object_ptr)&_this_path_8658, concat_list, 3);
        }
        _4717 = NOVALUE;
        goto L11; // [421] 435
L10: 

        /** filesys.e:2591				this_path = search_list[i] & filename*/
        _2 = (object)SEQ_PTR(_search_list_8655);
        _4719 = (object)*(((s1_ptr)_2)->base + _i_8736);
        if (IS_SEQUENCE(_4719) && IS_ATOM(_filename_8654)) {
        }
        else if (IS_ATOM(_4719) && IS_SEQUENCE(_filename_8654)) {
            Ref(_4719);
            Prepend(&_this_path_8658, _filename_8654, _4719);
        }
        else {
            Concat((object_ptr)&_this_path_8658, _4719, _filename_8654);
            _4719 = NOVALUE;
        }
        _4719 = NOVALUE;
L11: 

        /** filesys.e:2594			if file_exists(this_path) then*/
        RefDS(_this_path_8658);
        _4721 = _16file_exists(_this_path_8658);
        if (_4721 == 0) {
            DeRef(_4721);
            _4721 = NOVALUE;
            goto L12; // [443] 459
        }
        else {
            if (!IS_ATOM_INT(_4721) && DBL_PTR(_4721)->dbl == 0.0){
                DeRef(_4721);
                _4721 = NOVALUE;
                goto L12; // [443] 459
            }
            DeRef(_4721);
            _4721 = NOVALUE;
        }
        DeRef(_4721);
        _4721 = NOVALUE;

        /** filesys.e:2595				return canonical_path(this_path)*/
        RefDS(_this_path_8658);
        _4722 = _16canonical_path(_this_path_8658, 0, 0);
        DeRefDS(_filename_8654);
        DeRefDS(_search_list_8655);
        DeRefDS(_subdir_8656);
        DeRef(_extra_paths_8657);
        DeRefDS(_this_path_8658);
        _4706 = NOVALUE;
        return _4722;
L12: 

        /** filesys.e:2598		end for*/
LE: 
        _i_8736 = _i_8736 + 1;
        goto LB; // [461] 350
LC: 
        ;
    }

    /** filesys.e:2599		return filename*/
    DeRefDS(_search_list_8655);
    DeRefDS(_subdir_8656);
    DeRef(_extra_paths_8657);
    DeRef(_this_path_8658);
    DeRef(_4722);
    _4722 = NOVALUE;
    _4706 = NOVALUE;
    return _filename_8654;
    ;
}


object _16count_files(object _orig_path_8834, object _dir_info_8835, object _inst_8836)
{
    object _pos_8837 = NOVALUE;
    object _ext_8838 = NOVALUE;
    object _fileext_inlined_fileext_at_218_8879 = NOVALUE;
    object _data_inlined_fileext_at_218_8878 = NOVALUE;
    object _path_inlined_fileext_at_215_8877 = NOVALUE;
    object _4824 = NOVALUE;
    object _4823 = NOVALUE;
    object _4822 = NOVALUE;
    object _4820 = NOVALUE;
    object _4819 = NOVALUE;
    object _4818 = NOVALUE;
    object _4817 = NOVALUE;
    object _4815 = NOVALUE;
    object _4814 = NOVALUE;
    object _4812 = NOVALUE;
    object _4811 = NOVALUE;
    object _4810 = NOVALUE;
    object _4809 = NOVALUE;
    object _4808 = NOVALUE;
    object _4807 = NOVALUE;
    object _4806 = NOVALUE;
    object _4804 = NOVALUE;
    object _4803 = NOVALUE;
    object _4801 = NOVALUE;
    object _4800 = NOVALUE;
    object _4799 = NOVALUE;
    object _4798 = NOVALUE;
    object _4797 = NOVALUE;
    object _4796 = NOVALUE;
    object _4795 = NOVALUE;
    object _4794 = NOVALUE;
    object _4793 = NOVALUE;
    object _4792 = NOVALUE;
    object _4791 = NOVALUE;
    object _4790 = NOVALUE;
    object _4789 = NOVALUE;
    object _4787 = NOVALUE;
    object _4786 = NOVALUE;
    object _4785 = NOVALUE;
    object _4784 = NOVALUE;
    object _4782 = NOVALUE;
    object _4781 = NOVALUE;
    object _4780 = NOVALUE;
    object _4779 = NOVALUE;
    object _4778 = NOVALUE;
    object _4777 = NOVALUE;
    object _4776 = NOVALUE;
    object _4774 = NOVALUE;
    object _4773 = NOVALUE;
    object _4772 = NOVALUE;
    object _4771 = NOVALUE;
    object _4770 = NOVALUE;
    object _4769 = NOVALUE;
    object _4766 = NOVALUE;
    object _4765 = NOVALUE;
    object _4764 = NOVALUE;
    object _4763 = NOVALUE;
    object _4762 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** filesys.e:2761		integer pos = 0*/
    _pos_8837 = 0;

    /** filesys.e:2764		orig_path = orig_path*/
    RefDS(_orig_path_8834);
    DeRefDS(_orig_path_8834);
    _orig_path_8834 = _orig_path_8834;

    /** filesys.e:2765		if equal(dir_info[D_NAME], ".") then*/
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4762 = (object)*(((s1_ptr)_2)->base + 1);
    if (_4762 == _4024)
    _4763 = 1;
    else if (IS_ATOM_INT(_4762) && IS_ATOM_INT(_4024))
    _4763 = 0;
    else
    _4763 = (compare(_4762, _4024) == 0);
    _4762 = NOVALUE;
    if (_4763 == 0)
    {
        _4763 = NOVALUE;
        goto L1; // [29] 39
    }
    else{
        _4763 = NOVALUE;
    }

    /** filesys.e:2766			return 0*/
    DeRefDS(_orig_path_8834);
    DeRefDS(_dir_info_8835);
    DeRefDS(_inst_8836);
    DeRef(_ext_8838);
    return 0;
L1: 

    /** filesys.e:2768		if equal(dir_info[D_NAME], "..") then*/
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4764 = (object)*(((s1_ptr)_2)->base + 1);
    if (_4764 == _4091)
    _4765 = 1;
    else if (IS_ATOM_INT(_4764) && IS_ATOM_INT(_4091))
    _4765 = 0;
    else
    _4765 = (compare(_4764, _4091) == 0);
    _4764 = NOVALUE;
    if (_4765 == 0)
    {
        _4765 = NOVALUE;
        goto L2; // [49] 59
    }
    else{
        _4765 = NOVALUE;
    }

    /** filesys.e:2769			return 0*/
    DeRefDS(_orig_path_8834);
    DeRefDS(_dir_info_8835);
    DeRefDS(_inst_8836);
    DeRef(_ext_8838);
    return 0;
L2: 

    /** filesys.e:2773		if inst[1] = 0 then -- count all is false*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4766 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _4766, 0)){
        _4766 = NOVALUE;
        goto L3; // [65] 112
    }
    _4766 = NOVALUE;

    /** filesys.e:2774			if find('h', dir_info[D_ATTRIBUTES]) then*/
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4769 = (object)*(((s1_ptr)_2)->base + 2);
    _4770 = find_from(104, _4769, 1);
    _4769 = NOVALUE;
    if (_4770 == 0)
    {
        _4770 = NOVALUE;
        goto L4; // [80] 90
    }
    else{
        _4770 = NOVALUE;
    }

    /** filesys.e:2775				return 0*/
    DeRefDS(_orig_path_8834);
    DeRefDS(_dir_info_8835);
    DeRefDS(_inst_8836);
    DeRef(_ext_8838);
    return 0;
L4: 

    /** filesys.e:2778			if find('s', dir_info[D_ATTRIBUTES]) then*/
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4771 = (object)*(((s1_ptr)_2)->base + 2);
    _4772 = find_from(115, _4771, 1);
    _4771 = NOVALUE;
    if (_4772 == 0)
    {
        _4772 = NOVALUE;
        goto L5; // [101] 111
    }
    else{
        _4772 = NOVALUE;
    }

    /** filesys.e:2779				return 0*/
    DeRefDS(_orig_path_8834);
    DeRefDS(_dir_info_8835);
    DeRefDS(_inst_8836);
    DeRef(_ext_8838);
    return 0;
L5: 
L3: 

    /** filesys.e:2783		file_counters[inst[2]][COUNT_SIZE] += dir_info[D_SIZE]*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4773 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_8831 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4773))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4773)->dbl));
    else
    _3 = (object)(_4773 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4776 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4777 = (object)*(((s1_ptr)_2)->base + 3);
    _4774 = NOVALUE;
    if (IS_ATOM_INT(_4777) && IS_ATOM_INT(_4776)) {
        _4778 = _4777 + _4776;
        if ((object)((uintptr_t)_4778 + (uintptr_t)HIGH_BITS) >= 0){
            _4778 = NewDouble((eudouble)_4778);
        }
    }
    else {
        _4778 = binary_op(PLUS, _4777, _4776);
    }
    _4777 = NOVALUE;
    _4776 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4778;
    if( _1 != _4778 ){
        DeRef(_1);
    }
    _4778 = NOVALUE;
    _4774 = NOVALUE;

    /** filesys.e:2784		if find('d', dir_info[D_ATTRIBUTES]) then*/
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4779 = (object)*(((s1_ptr)_2)->base + 2);
    _4780 = find_from(100, _4779, 1);
    _4779 = NOVALUE;
    if (_4780 == 0)
    {
        _4780 = NOVALUE;
        goto L6; // [152] 183
    }
    else{
        _4780 = NOVALUE;
    }

    /** filesys.e:2785			file_counters[inst[2]][COUNT_DIRS] += 1*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4781 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_8831 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4781))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4781)->dbl));
    else
    _3 = (object)(_4781 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4784 = (object)*(((s1_ptr)_2)->base + 1);
    _4782 = NOVALUE;
    if (IS_ATOM_INT(_4784)) {
        _4785 = _4784 + 1;
        if (_4785 > MAXINT){
            _4785 = NewDouble((eudouble)_4785);
        }
    }
    else
    _4785 = binary_op(PLUS, 1, _4784);
    _4784 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4785;
    if( _1 != _4785 ){
        DeRef(_1);
    }
    _4785 = NOVALUE;
    _4782 = NOVALUE;
    goto L7; // [180] 460
L6: 

    /** filesys.e:2787			file_counters[inst[2]][COUNT_FILES] += 1*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4786 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_8831 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4786))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4786)->dbl));
    else
    _3 = (object)(_4786 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4789 = (object)*(((s1_ptr)_2)->base + 2);
    _4787 = NOVALUE;
    if (IS_ATOM_INT(_4789)) {
        _4790 = _4789 + 1;
        if (_4790 > MAXINT){
            _4790 = NewDouble((eudouble)_4790);
        }
    }
    else
    _4790 = binary_op(PLUS, 1, _4789);
    _4789 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4790;
    if( _1 != _4790 ){
        DeRef(_1);
    }
    _4790 = NOVALUE;
    _4787 = NOVALUE;

    /** filesys.e:2788			ifdef not UNIX then*/

    /** filesys.e:2791				ext = fileext(dir_info[D_NAME])*/
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4791 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_4791);
    DeRef(_path_inlined_fileext_at_215_8877);
    _path_inlined_fileext_at_215_8877 = _4791;
    _4791 = NOVALUE;

    /** filesys.e:1403		data = pathinfo(path)*/
    Ref(_path_inlined_fileext_at_215_8877);
    _0 = _data_inlined_fileext_at_218_8878;
    _data_inlined_fileext_at_218_8878 = _16pathinfo(_path_inlined_fileext_at_215_8877, 0);
    DeRef(_0);

    /** filesys.e:1404		return data[4]*/
    DeRef(_ext_8838);
    _2 = (object)SEQ_PTR(_data_inlined_fileext_at_218_8878);
    _ext_8838 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_ext_8838);
    DeRef(_path_inlined_fileext_at_215_8877);
    _path_inlined_fileext_at_215_8877 = NOVALUE;
    DeRef(_data_inlined_fileext_at_218_8878);
    _data_inlined_fileext_at_218_8878 = NOVALUE;

    /** filesys.e:2794			pos = 0*/
    _pos_8837 = 0;

    /** filesys.e:2795			for i = 1 to length(file_counters[inst[2]][COUNT_TYPES]) do*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4792 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!IS_ATOM_INT(_4792)){
        _4793 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4792)->dbl));
    }
    else{
        _4793 = (object)*(((s1_ptr)_2)->base + _4792);
    }
    _2 = (object)SEQ_PTR(_4793);
    _4794 = (object)*(((s1_ptr)_2)->base + 4);
    _4793 = NOVALUE;
    if (IS_SEQUENCE(_4794)){
            _4795 = SEQ_PTR(_4794)->length;
    }
    else {
        _4795 = 1;
    }
    _4794 = NOVALUE;
    {
        object _i_8881;
        _i_8881 = 1;
L8: 
        if (_i_8881 > _4795){
            goto L9; // [265] 322
        }

        /** filesys.e:2796				if equal(file_counters[inst[2]][COUNT_TYPES][i][EXT_NAME], ext) then*/
        _2 = (object)SEQ_PTR(_inst_8836);
        _4796 = (object)*(((s1_ptr)_2)->base + 2);
        _2 = (object)SEQ_PTR(_16file_counters_8831);
        if (!IS_ATOM_INT(_4796)){
            _4797 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4796)->dbl));
        }
        else{
            _4797 = (object)*(((s1_ptr)_2)->base + _4796);
        }
        _2 = (object)SEQ_PTR(_4797);
        _4798 = (object)*(((s1_ptr)_2)->base + 4);
        _4797 = NOVALUE;
        _2 = (object)SEQ_PTR(_4798);
        _4799 = (object)*(((s1_ptr)_2)->base + _i_8881);
        _4798 = NOVALUE;
        _2 = (object)SEQ_PTR(_4799);
        _4800 = (object)*(((s1_ptr)_2)->base + 1);
        _4799 = NOVALUE;
        if (_4800 == _ext_8838)
        _4801 = 1;
        else if (IS_ATOM_INT(_4800) && IS_ATOM_INT(_ext_8838))
        _4801 = 0;
        else
        _4801 = (compare(_4800, _ext_8838) == 0);
        _4800 = NOVALUE;
        if (_4801 == 0)
        {
            _4801 = NOVALUE;
            goto LA; // [302] 315
        }
        else{
            _4801 = NOVALUE;
        }

        /** filesys.e:2797					pos = i*/
        _pos_8837 = _i_8881;

        /** filesys.e:2798					exit*/
        goto L9; // [312] 322
LA: 

        /** filesys.e:2800			end for*/
        _i_8881 = _i_8881 + 1;
        goto L8; // [317] 272
L9: 
        ;
    }

    /** filesys.e:2802			if pos = 0 then*/
    if (_pos_8837 != 0)
    goto LB; // [324] 385

    /** filesys.e:2803				file_counters[inst[2]][COUNT_TYPES] &= {{ext, 0, 0}}*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4803 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_8831 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4803))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4803)->dbl));
    else
    _3 = (object)(_4803 + ((s1_ptr)_2)->base);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_ext_8838);
    ((intptr_t*)_2)[1] = _ext_8838;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _4806 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _4806;
    _4807 = MAKE_SEQ(_1);
    _4806 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4808 = (object)*(((s1_ptr)_2)->base + 4);
    _4804 = NOVALUE;
    if (IS_SEQUENCE(_4808) && IS_ATOM(_4807)) {
    }
    else if (IS_ATOM(_4808) && IS_SEQUENCE(_4807)) {
        Ref(_4808);
        Prepend(&_4809, _4807, _4808);
    }
    else {
        Concat((object_ptr)&_4809, _4808, _4807);
        _4808 = NOVALUE;
    }
    _4808 = NOVALUE;
    DeRefDS(_4807);
    _4807 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4809;
    if( _1 != _4809 ){
        DeRef(_1);
    }
    _4809 = NOVALUE;
    _4804 = NOVALUE;

    /** filesys.e:2804				pos = length(file_counters[inst[2]][COUNT_TYPES])*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4810 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!IS_ATOM_INT(_4810)){
        _4811 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4810)->dbl));
    }
    else{
        _4811 = (object)*(((s1_ptr)_2)->base + _4810);
    }
    _2 = (object)SEQ_PTR(_4811);
    _4812 = (object)*(((s1_ptr)_2)->base + 4);
    _4811 = NOVALUE;
    if (IS_SEQUENCE(_4812)){
            _pos_8837 = SEQ_PTR(_4812)->length;
    }
    else {
        _pos_8837 = 1;
    }
    _4812 = NOVALUE;
LB: 

    /** filesys.e:2807			file_counters[inst[2]][COUNT_TYPES][pos][EXT_COUNT] += 1*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4814 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_8831 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4814))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4814)->dbl));
    else
    _3 = (object)(_4814 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _4815 = NOVALUE;
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_8837 + ((s1_ptr)_2)->base);
    _4815 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4817 = (object)*(((s1_ptr)_2)->base + 2);
    _4815 = NOVALUE;
    if (IS_ATOM_INT(_4817)) {
        _4818 = _4817 + 1;
        if (_4818 > MAXINT){
            _4818 = NewDouble((eudouble)_4818);
        }
    }
    else
    _4818 = binary_op(PLUS, 1, _4817);
    _4817 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4818;
    if( _1 != _4818 ){
        DeRef(_1);
    }
    _4818 = NOVALUE;
    _4815 = NOVALUE;

    /** filesys.e:2808			file_counters[inst[2]][COUNT_TYPES][pos][EXT_SIZE] += dir_info[D_SIZE]*/
    _2 = (object)SEQ_PTR(_inst_8836);
    _4819 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_16file_counters_8831);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_8831 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4819))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4819)->dbl));
    else
    _3 = (object)(_4819 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _4820 = NOVALUE;
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_8837 + ((s1_ptr)_2)->base);
    _4820 = NOVALUE;
    _2 = (object)SEQ_PTR(_dir_info_8835);
    _4822 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4823 = (object)*(((s1_ptr)_2)->base + 3);
    _4820 = NOVALUE;
    if (IS_ATOM_INT(_4823) && IS_ATOM_INT(_4822)) {
        _4824 = _4823 + _4822;
        if ((object)((uintptr_t)_4824 + (uintptr_t)HIGH_BITS) >= 0){
            _4824 = NewDouble((eudouble)_4824);
        }
    }
    else {
        _4824 = binary_op(PLUS, _4823, _4822);
    }
    _4823 = NOVALUE;
    _4822 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4824;
    if( _1 != _4824 ){
        DeRef(_1);
    }
    _4824 = NOVALUE;
    _4820 = NOVALUE;
L7: 

    /** filesys.e:2811		return 0*/
    DeRefDS(_orig_path_8834);
    DeRefDS(_dir_info_8835);
    DeRefDS(_inst_8836);
    DeRef(_ext_8838);
    _4794 = NOVALUE;
    _4814 = NOVALUE;
    _4781 = NOVALUE;
    _4796 = NOVALUE;
    _4773 = NOVALUE;
    _4810 = NOVALUE;
    _4819 = NOVALUE;
    _4803 = NOVALUE;
    _4786 = NOVALUE;
    _4812 = NOVALUE;
    _4792 = NOVALUE;
    return 0;
    ;
}



// 0xF1B85685
