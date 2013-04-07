// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _51add_options(object _new_options_49170)
{
    object _0, _1, _2;
    

    /** cominit.e:65		options = splice(options, new_options, COMMON_OPTIONS_SPLICE_IDX)*/
    {
        s1_ptr assign_space;
        insert_pos = 16;
        if (insert_pos <= 0) {
            Concat(&_51options_49166,_new_options_49170,_51options_49166);
        }
        else if (insert_pos > SEQ_PTR(_51options_49166)->length){
            Concat(&_51options_49166,_51options_49166,_new_options_49170);
        }
        else if (IS_SEQUENCE(_new_options_49170)) {
            if( _51options_49166 != _51options_49166 || SEQ_PTR( _51options_49166 )->ref != 1 ){
                DeRef( _51options_49166 );
                RefDS( _51options_49166 );
            }
            assign_space = Add_internal_space( _51options_49166, insert_pos,((s1_ptr)SEQ_PTR(_new_options_49170))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_new_options_49170), _51options_49166 == _51options_49166 );
            _51options_49166 = MAKE_SEQ( assign_space );
        }
        else {
            if( _51options_49166 != _51options_49166 && SEQ_PTR( _51options_49166 )->ref != 1 ){
                _51options_49166 = Insert( _51options_49166, _new_options_49170, insert_pos);
            }
            else {
                DeRef( _51options_49166 );
                RefDS( _51options_49166 );
                _51options_49166 = Insert( _51options_49166, _new_options_49170, insert_pos);
            }
        }
    }

    /** cominit.e:67	end procedure*/
    DeRefDS(_new_options_49170);
    return;
    ;
}


object _51get_options()
{
    object _0, _1, _2;
    

    /** cominit.e:73		return options*/
    RefDS(_51options_49166);
    return _51options_49166;
    ;
}


object _51get_switches()
{
    object _0, _1, _2;
    

    /** cominit.e:87		return switches*/
    RefDS(_51switches_49055);
    return _51switches_49055;
    ;
}


void _51show_copyrights()
{
    object _notices_49180 = NOVALUE;
    object _25430 = NOVALUE;
    object _25429 = NOVALUE;
    object _25427 = NOVALUE;
    object _25426 = NOVALUE;
    object _25425 = NOVALUE;
    object _25424 = NOVALUE;
    object _25422 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:94		sequence notices = all_copyrights()*/
    _0 = _notices_49180;
    _notices_49180 = _27all_copyrights();
    DeRef(_0);

    /** cominit.e:95		for i = 1 to length(notices) do*/
    if (IS_SEQUENCE(_notices_49180)){
            _25422 = SEQ_PTR(_notices_49180)->length;
    }
    else {
        _25422 = 1;
    }
    {
        object _i_49184;
        _i_49184 = 1;
L1: 
        if (_i_49184 > _25422){
            goto L2; // [13] 60
        }

        /** cominit.e:96			printf(2, "%s\n  %s\n\n", { notices[i][1], match_replace("\n", notices[i][2], "\n  ") })*/
        _2 = (object)SEQ_PTR(_notices_49180);
        _25424 = (object)*(((s1_ptr)_2)->base + _i_49184);
        _2 = (object)SEQ_PTR(_25424);
        _25425 = (object)*(((s1_ptr)_2)->base + 1);
        _25424 = NOVALUE;
        _2 = (object)SEQ_PTR(_notices_49180);
        _25426 = (object)*(((s1_ptr)_2)->base + _i_49184);
        _2 = (object)SEQ_PTR(_25426);
        _25427 = (object)*(((s1_ptr)_2)->base + 2);
        _25426 = NOVALUE;
        RefDS(_22123);
        Ref(_25427);
        RefDS(_25428);
        _25429 = _15match_replace(_22123, _25427, _25428, 0);
        _25427 = NOVALUE;
        Ref(_25425);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25425;
        ((intptr_t *)_2)[2] = _25429;
        _25430 = MAKE_SEQ(_1);
        _25429 = NOVALUE;
        _25425 = NOVALUE;
        EPrintf(2, _25423, _25430);
        DeRefDS(_25430);
        _25430 = NOVALUE;

        /** cominit.e:97		end for*/
        _i_49184 = _i_49184 + 1;
        goto L1; // [55] 20
L2: 
        ;
    }

    /** cominit.e:98	end procedure*/
    DeRef(_notices_49180);
    return;
    ;
}


void _51show_banner()
{
    object _version_type_inlined_version_type_at_210_49248 = NOVALUE;
    object _version_string_short_1__tmp_at194_49246 = NOVALUE;
    object _version_string_short_inlined_version_string_short_at_194_49245 = NOVALUE;
    object _version_revision_inlined_version_revision_at_125_49227 = NOVALUE;
    object _platform_name_inlined_platform_name_at_86_49219 = NOVALUE;
    object _prod_name_49197 = NOVALUE;
    object _memory_type_49198 = NOVALUE;
    object _misc_info_49216 = NOVALUE;
    object _EuConsole_49231 = NOVALUE;
    object _25455 = NOVALUE;
    object _25454 = NOVALUE;
    object _25453 = NOVALUE;
    object _25450 = NOVALUE;
    object _25449 = NOVALUE;
    object _25445 = NOVALUE;
    object _25444 = NOVALUE;
    object _25443 = NOVALUE;
    object _25441 = NOVALUE;
    object _25439 = NOVALUE;
    object _25438 = NOVALUE;
    object _25437 = NOVALUE;
    object _25432 = NOVALUE;
    object _25431 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:109		if INTERPRET and not BIND then*/
    if (_39INTERPRET_16437 == 0) {
        goto L1; // [5] 31
    }
    _25432 = (_39BIND_16443 == 0);
    if (_25432 == 0)
    {
        DeRef(_25432);
        _25432 = NOVALUE;
        goto L1; // [15] 31
    }
    else{
        DeRef(_25432);
        _25432 = NOVALUE;
    }

    /** cominit.e:110			prod_name = GetMsgText(270,0)*/
    RefDS(_21928);
    _0 = _prod_name_49197;
    _prod_name_49197 = _44GetMsgText(270, 0, _21928);
    DeRef(_0);
    goto L2; // [28] 70
L1: 

    /** cominit.e:112		elsif TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L3; // [35] 51
    }
    else{
    }

    /** cominit.e:113			prod_name = GetMsgText(271,0)*/
    RefDS(_21928);
    _0 = _prod_name_49197;
    _prod_name_49197 = _44GetMsgText(271, 0, _21928);
    DeRef(_0);
    goto L2; // [48] 70
L3: 

    /** cominit.e:115		elsif BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L4; // [55] 69
    }
    else{
    }

    /** cominit.e:116			prod_name = GetMsgText(272,0)*/
    RefDS(_21928);
    _0 = _prod_name_49197;
    _prod_name_49197 = _44GetMsgText(272, 0, _21928);
    DeRef(_0);
L4: 
L2: 

    /** cominit.e:119		ifdef EU_MANAGED_MEM then*/

    /** cominit.e:122			memory_type = GetMsgText(274,0)*/
    RefDS(_21928);
    _0 = _memory_type_49198;
    _memory_type_49198 = _44GetMsgText(274, 0, _21928);
    DeRef(_0);

    /** cominit.e:125		sequence misc_info = {*/
    _25437 = _27arch_bits();

    /** info.e:48		ifdef WINDOWS then*/

    /** info.e:51			return "Linux"*/
    RefDS(_6355);
    DeRefi(_platform_name_inlined_platform_name_at_86_49219);
    _platform_name_inlined_platform_name_at_86_49219 = _6355;
    _25438 = _27version_date(0);
    _25439 = _27version_node(0);
    _0 = _misc_info_49216;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25437;
    RefDS(_platform_name_inlined_platform_name_at_86_49219);
    ((intptr_t*)_2)[2] = _platform_name_inlined_platform_name_at_86_49219;
    RefDS(_memory_type_49198);
    ((intptr_t*)_2)[3] = _memory_type_49198;
    RefDS(_21928);
    ((intptr_t*)_2)[4] = _21928;
    ((intptr_t*)_2)[5] = _25438;
    ((intptr_t*)_2)[6] = _25439;
    _misc_info_49216 = MAKE_SEQ(_1);
    DeRef(_0);
    _25439 = NOVALUE;
    _25438 = NOVALUE;
    _25437 = NOVALUE;

    /** cominit.e:134		if info:is_developmental then*/
    if (_27is_developmental_11319 == 0)
    {
        goto L5; // [118] 152
    }
    else{
    }

    /** cominit.e:135			misc_info[$] = sprintf("%d:%s", { info:version_revision(), info:version_node() })*/
    _25441 = 6;

    /** info.e:157		return version_info[REVISION]*/
    DeRef(_version_revision_inlined_version_revision_at_125_49227);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _version_revision_inlined_version_revision_at_125_49227 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_125_49227);
    _25443 = _27version_node(0);
    Ref(_version_revision_inlined_version_revision_at_125_49227);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _version_revision_inlined_version_revision_at_125_49227;
    ((intptr_t *)_2)[2] = _25443;
    _25444 = MAKE_SEQ(_1);
    _25443 = NOVALUE;
    _25445 = EPrintf(-9999999, _25442, _25444);
    DeRefDS(_25444);
    _25444 = NOVALUE;
    _2 = (object)SEQ_PTR(_misc_info_49216);
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25445;
    if( _1 != _25445 ){
        DeRef(_1);
    }
    _25445 = NOVALUE;
L5: 

    /** cominit.e:138		object EuConsole = getenv("EUCONS")*/
    DeRefi(_EuConsole_49231);
    _EuConsole_49231 = EGetEnv(_25446);

    /** cominit.e:139		if equal(EuConsole, "1") then*/
    if (_EuConsole_49231 == _25448)
    _25449 = 1;
    else if (IS_ATOM_INT(_EuConsole_49231) && IS_ATOM_INT(_25448))
    _25449 = 0;
    else
    _25449 = (compare(_EuConsole_49231, _25448) == 0);
    if (_25449 == 0)
    {
        _25449 = NOVALUE;
        goto L6; // [163] 181
    }
    else{
        _25449 = NOVALUE;
    }

    /** cominit.e:140			misc_info[4] = GetMsgText(275,0)*/
    RefDS(_21928);
    _25450 = _44GetMsgText(275, 0, _21928);
    _2 = (object)SEQ_PTR(_misc_info_49216);
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25450;
    if( _1 != _25450 ){
        DeRef(_1);
    }
    _25450 = NOVALUE;
    goto L7; // [178] 189
L6: 

    /** cominit.e:142			misc_info = remove(misc_info, 4)*/
    {
        s1_ptr assign_space = SEQ_PTR(_misc_info_49216);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(4)) ? 4 : (object)(DBL_PTR(4)->dbl);
        int stop = (IS_ATOM_INT(4)) ? 4 : (object)(DBL_PTR(4)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_misc_info_49216), start, &_misc_info_49216 );
            }
            else Tail(SEQ_PTR(_misc_info_49216), stop+1, &_misc_info_49216);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_misc_info_49216), start, &_misc_info_49216);
        }
        else {
            assign_slice_seq = &assign_space;
            _misc_info_49216 = Remove_elements(start, stop, (SEQ_PTR(_misc_info_49216)->ref == 1));
        }
    }
L7: 

    /** cominit.e:145		screen_output(STDERR, sprintf("%s v%s %s\n   %s %s, %s\n   Revision Date: %s, Id: %s\n", {*/

    /** info.e:261		return sprintf("%d.%d.%d", version_info[MAJ_VER..PAT_VER])*/
    rhs_slice_target = (object_ptr)&_version_string_short_1__tmp_at194_49246;
    RHS_Slice(_27version_info_11317, 1, 3);
    DeRefi(_version_string_short_inlined_version_string_short_at_194_49245);
    _version_string_short_inlined_version_string_short_at_194_49245 = EPrintf(-9999999, _6412, _version_string_short_1__tmp_at194_49246);
    DeRef(_version_string_short_1__tmp_at194_49246);
    _version_string_short_1__tmp_at194_49246 = NOVALUE;

    /** info.e:202		return version_info[VER_TYPE]*/
    DeRef(_version_type_inlined_version_type_at_210_49248);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _version_type_inlined_version_type_at_210_49248 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_version_type_inlined_version_type_at_210_49248);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_prod_name_49197);
    ((intptr_t*)_2)[1] = _prod_name_49197;
    RefDS(_version_string_short_inlined_version_string_short_at_194_49245);
    ((intptr_t*)_2)[2] = _version_string_short_inlined_version_string_short_at_194_49245;
    Ref(_version_type_inlined_version_type_at_210_49248);
    ((intptr_t*)_2)[3] = _version_type_inlined_version_type_at_210_49248;
    _25453 = MAKE_SEQ(_1);
    Concat((object_ptr)&_25454, _25453, _misc_info_49216);
    DeRefDS(_25453);
    _25453 = NOVALUE;
    DeRef(_25453);
    _25453 = NOVALUE;
    _25455 = EPrintf(-9999999, _25452, _25454);
    DeRefDS(_25454);
    _25454 = NOVALUE;
    _52screen_output(2, _25455);
    _25455 = NOVALUE;

    /** cominit.e:147	end procedure*/
    DeRefDS(_prod_name_49197);
    DeRef(_memory_type_49198);
    DeRefDS(_misc_info_49216);
    DeRefi(_EuConsole_49231);
    return;
    ;
}


object _51find_opt(object _name_type_49260, object _opt_49261, object _opts_49262)
{
    object _o_49266 = NOVALUE;
    object _has_case_49268 = NOVALUE;
    object _25468 = NOVALUE;
    object _25467 = NOVALUE;
    object _25466 = NOVALUE;
    object _25465 = NOVALUE;
    object _25464 = NOVALUE;
    object _25463 = NOVALUE;
    object _25462 = NOVALUE;
    object _25461 = NOVALUE;
    object _25460 = NOVALUE;
    object _25458 = NOVALUE;
    object _25456 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:172		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_49262)){
            _25456 = SEQ_PTR(_opts_49262)->length;
    }
    else {
        _25456 = 1;
    }
    {
        object _i_49264;
        _i_49264 = 1;
L1: 
        if (_i_49264 > _25456){
            goto L2; // [12] 113
        }

        /** cominit.e:173			sequence o = opts[i]		*/
        DeRef(_o_49266);
        _2 = (object)SEQ_PTR(_opts_49262);
        _o_49266 = (object)*(((s1_ptr)_2)->base + _i_49264);
        Ref(_o_49266);

        /** cominit.e:174			integer has_case = find(HAS_CASE, o[OPTIONS])*/
        _2 = (object)SEQ_PTR(_o_49266);
        _25458 = (object)*(((s1_ptr)_2)->base + 4);
        _has_case_49268 = find_from(99, _25458, 1);
        _25458 = NOVALUE;

        /** cominit.e:176			if has_case and equal(o[name_type], opt) then*/
        if (_has_case_49268 == 0) {
            goto L3; // [42] 67
        }
        _2 = (object)SEQ_PTR(_o_49266);
        _25461 = (object)*(((s1_ptr)_2)->base + _name_type_49260);
        if (_25461 == _opt_49261)
        _25462 = 1;
        else if (IS_ATOM_INT(_25461) && IS_ATOM_INT(_opt_49261))
        _25462 = 0;
        else
        _25462 = (compare(_25461, _opt_49261) == 0);
        _25461 = NOVALUE;
        if (_25462 == 0)
        {
            _25462 = NOVALUE;
            goto L3; // [55] 67
        }
        else{
            _25462 = NOVALUE;
        }

        /** cominit.e:177				return o*/
        DeRefDS(_opt_49261);
        DeRefDS(_opts_49262);
        return _o_49266;
        goto L4; // [64] 104
L3: 

        /** cominit.e:178			elsif not has_case and equal(text:lower(o[name_type]), text:lower(opt)) then*/
        _25463 = (_has_case_49268 == 0);
        if (_25463 == 0) {
            goto L5; // [72] 103
        }
        _2 = (object)SEQ_PTR(_o_49266);
        _25465 = (object)*(((s1_ptr)_2)->base + _name_type_49260);
        Ref(_25465);
        _25466 = _13lower(_25465);
        _25465 = NOVALUE;
        RefDS(_opt_49261);
        _25467 = _13lower(_opt_49261);
        if (_25466 == _25467)
        _25468 = 1;
        else if (IS_ATOM_INT(_25466) && IS_ATOM_INT(_25467))
        _25468 = 0;
        else
        _25468 = (compare(_25466, _25467) == 0);
        DeRef(_25466);
        _25466 = NOVALUE;
        DeRef(_25467);
        _25467 = NOVALUE;
        if (_25468 == 0)
        {
            _25468 = NOVALUE;
            goto L5; // [93] 103
        }
        else{
            _25468 = NOVALUE;
        }

        /** cominit.e:179				return o*/
        DeRefDS(_opt_49261);
        DeRefDS(_opts_49262);
        DeRef(_25463);
        _25463 = NOVALUE;
        return _o_49266;
L5: 
L4: 
        DeRef(_o_49266);
        _o_49266 = NOVALUE;

        /** cominit.e:181		end for*/
        _i_49264 = _i_49264 + 1;
        goto L1; // [108] 19
L2: 
        ;
    }

    /** cominit.e:183		return {}*/
    RefDS(_21928);
    DeRefDS(_opt_49261);
    DeRefDS(_opts_49262);
    DeRef(_25463);
    _25463 = NOVALUE;
    return _21928;
    ;
}


object _51merge_parameters(object _a_49285, object _b_49286, object _opts_49287, object _dedupe_49288)
{
    object _i_49289 = NOVALUE;
    object _opt_49293 = NOVALUE;
    object _this_opt_49299 = NOVALUE;
    object _bi_49300 = NOVALUE;
    object _beginLen_49360 = NOVALUE;
    object _first_extra_49382 = NOVALUE;
    object _opt_49386 = NOVALUE;
    object _this_opt_49391 = NOVALUE;
    object _25562 = NOVALUE;
    object _25561 = NOVALUE;
    object _25558 = NOVALUE;
    object _25557 = NOVALUE;
    object _25556 = NOVALUE;
    object _25554 = NOVALUE;
    object _25553 = NOVALUE;
    object _25552 = NOVALUE;
    object _25551 = NOVALUE;
    object _25549 = NOVALUE;
    object _25548 = NOVALUE;
    object _25546 = NOVALUE;
    object _25545 = NOVALUE;
    object _25544 = NOVALUE;
    object _25543 = NOVALUE;
    object _25542 = NOVALUE;
    object _25541 = NOVALUE;
    object _25540 = NOVALUE;
    object _25538 = NOVALUE;
    object _25535 = NOVALUE;
    object _25534 = NOVALUE;
    object _25529 = NOVALUE;
    object _25527 = NOVALUE;
    object _25526 = NOVALUE;
    object _25525 = NOVALUE;
    object _25524 = NOVALUE;
    object _25523 = NOVALUE;
    object _25522 = NOVALUE;
    object _25521 = NOVALUE;
    object _25520 = NOVALUE;
    object _25516 = NOVALUE;
    object _25515 = NOVALUE;
    object _25514 = NOVALUE;
    object _25513 = NOVALUE;
    object _25512 = NOVALUE;
    object _25511 = NOVALUE;
    object _25510 = NOVALUE;
    object _25509 = NOVALUE;
    object _25508 = NOVALUE;
    object _25507 = NOVALUE;
    object _25506 = NOVALUE;
    object _25505 = NOVALUE;
    object _25504 = NOVALUE;
    object _25503 = NOVALUE;
    object _25502 = NOVALUE;
    object _25500 = NOVALUE;
    object _25499 = NOVALUE;
    object _25498 = NOVALUE;
    object _25497 = NOVALUE;
    object _25496 = NOVALUE;
    object _25495 = NOVALUE;
    object _25494 = NOVALUE;
    object _25493 = NOVALUE;
    object _25491 = NOVALUE;
    object _25490 = NOVALUE;
    object _25489 = NOVALUE;
    object _25488 = NOVALUE;
    object _25486 = NOVALUE;
    object _25485 = NOVALUE;
    object _25484 = NOVALUE;
    object _25483 = NOVALUE;
    object _25482 = NOVALUE;
    object _25481 = NOVALUE;
    object _25480 = NOVALUE;
    object _25478 = NOVALUE;
    object _25477 = NOVALUE;
    object _25475 = NOVALUE;
    object _25472 = NOVALUE;
    object _25469 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:199		integer i = 1*/
    _i_49289 = 1;

    /** cominit.e:201		while i <= length(a) do*/
L1: 
    if (IS_SEQUENCE(_a_49285)){
            _25469 = SEQ_PTR(_a_49285)->length;
    }
    else {
        _25469 = 1;
    }
    if (_i_49289 > _25469)
    goto L2; // [22] 465

    /** cominit.e:202			sequence opt = a[i]*/
    DeRef(_opt_49293);
    _2 = (object)SEQ_PTR(_a_49285);
    _opt_49293 = (object)*(((s1_ptr)_2)->base + _i_49289);
    Ref(_opt_49293);

    /** cominit.e:203			if length(opt) < 2 then*/
    if (IS_SEQUENCE(_opt_49293)){
            _25472 = SEQ_PTR(_opt_49293)->length;
    }
    else {
        _25472 = 1;
    }
    if (_25472 >= 2)
    goto L3; // [39] 56

    /** cominit.e:204				i += 1*/
    _i_49289 = _i_49289 + 1;

    /** cominit.e:205				continue*/
    DeRefDS(_opt_49293);
    _opt_49293 = NOVALUE;
    DeRef(_this_opt_49299);
    _this_opt_49299 = NOVALUE;
    goto L1; // [53] 19
L3: 

    /** cominit.e:208			sequence this_opt = {}*/
    RefDS(_21928);
    DeRef(_this_opt_49299);
    _this_opt_49299 = _21928;

    /** cominit.e:209			integer bi = 0*/
    _bi_49300 = 0;

    /** cominit.e:211			if opt[2] = '-' then*/
    _2 = (object)SEQ_PTR(_opt_49293);
    _25475 = (object)*(((s1_ptr)_2)->base + 2);
    if (binary_op_a(NOTEQ, _25475, 45)){
        _25475 = NOVALUE;
        goto L4; // [74] 149
    }
    _25475 = NOVALUE;

    /** cominit.e:214				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    if (IS_SEQUENCE(_opt_49293)){
            _25477 = SEQ_PTR(_opt_49293)->length;
    }
    else {
        _25477 = 1;
    }
    rhs_slice_target = (object_ptr)&_25478;
    RHS_Slice(_opt_49293, 3, _25477);
    RefDS(_opts_49287);
    _0 = _this_opt_49299;
    _this_opt_49299 = _51find_opt(2, _25478, _opts_49287);
    DeRefDS(_0);
    _25478 = NOVALUE;

    /** cominit.e:216				for j = 1 to length(b) do*/
    if (IS_SEQUENCE(_b_49286)){
            _25480 = SEQ_PTR(_b_49286)->length;
    }
    else {
        _25480 = 1;
    }
    {
        object _j_49308;
        _j_49308 = 1;
L5: 
        if (_j_49308 > _25480){
            goto L6; // [101] 146
        }

        /** cominit.e:217					if equal(text:lower(b[j]), text:lower(opt)) then*/
        _2 = (object)SEQ_PTR(_b_49286);
        _25481 = (object)*(((s1_ptr)_2)->base + _j_49308);
        Ref(_25481);
        _25482 = _13lower(_25481);
        _25481 = NOVALUE;
        RefDS(_opt_49293);
        _25483 = _13lower(_opt_49293);
        if (_25482 == _25483)
        _25484 = 1;
        else if (IS_ATOM_INT(_25482) && IS_ATOM_INT(_25483))
        _25484 = 0;
        else
        _25484 = (compare(_25482, _25483) == 0);
        DeRef(_25482);
        _25482 = NOVALUE;
        DeRef(_25483);
        _25483 = NOVALUE;
        if (_25484 == 0)
        {
            _25484 = NOVALUE;
            goto L7; // [126] 139
        }
        else{
            _25484 = NOVALUE;
        }

        /** cominit.e:218						bi = j*/
        _bi_49300 = _j_49308;

        /** cominit.e:219						exit*/
        goto L6; // [136] 146
L7: 

        /** cominit.e:221				end for*/
        _j_49308 = _j_49308 + 1;
        goto L5; // [141] 108
L6: 
        ;
    }
    goto L8; // [146] 292
L4: 

    /** cominit.e:223			elsif opt[1] = '-' or opt[1] = '/' then*/
    _2 = (object)SEQ_PTR(_opt_49293);
    _25485 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_25485)) {
        _25486 = (_25485 == 45);
    }
    else {
        _25486 = binary_op(EQUALS, _25485, 45);
    }
    _25485 = NOVALUE;
    if (IS_ATOM_INT(_25486)) {
        if (_25486 != 0) {
            goto L9; // [159] 176
        }
    }
    else {
        if (DBL_PTR(_25486)->dbl != 0.0) {
            goto L9; // [159] 176
        }
    }
    _2 = (object)SEQ_PTR(_opt_49293);
    _25488 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_25488)) {
        _25489 = (_25488 == 47);
    }
    else {
        _25489 = binary_op(EQUALS, _25488, 47);
    }
    _25488 = NOVALUE;
    if (_25489 == 0) {
        DeRef(_25489);
        _25489 = NOVALUE;
        goto LA; // [172] 291
    }
    else {
        if (!IS_ATOM_INT(_25489) && DBL_PTR(_25489)->dbl == 0.0){
            DeRef(_25489);
            _25489 = NOVALUE;
            goto LA; // [172] 291
        }
        DeRef(_25489);
        _25489 = NOVALUE;
    }
    DeRef(_25489);
    _25489 = NOVALUE;
L9: 

    /** cominit.e:226				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    if (IS_SEQUENCE(_opt_49293)){
            _25490 = SEQ_PTR(_opt_49293)->length;
    }
    else {
        _25490 = 1;
    }
    rhs_slice_target = (object_ptr)&_25491;
    RHS_Slice(_opt_49293, 2, _25490);
    RefDS(_opts_49287);
    _0 = _this_opt_49299;
    _this_opt_49299 = _51find_opt(1, _25491, _opts_49287);
    DeRef(_0);
    _25491 = NOVALUE;

    /** cominit.e:228				for j = 1 to length(b) do*/
    if (IS_SEQUENCE(_b_49286)){
            _25493 = SEQ_PTR(_b_49286)->length;
    }
    else {
        _25493 = 1;
    }
    {
        object _j_49325;
        _j_49325 = 1;
LB: 
        if (_j_49325 > _25493){
            goto LC; // [199] 290
        }

        /** cominit.e:229					if equal(text:lower(b[j]), '-' & text:lower(opt[2..$])) or */
        _2 = (object)SEQ_PTR(_b_49286);
        _25494 = (object)*(((s1_ptr)_2)->base + _j_49325);
        Ref(_25494);
        _25495 = _13lower(_25494);
        _25494 = NOVALUE;
        if (IS_SEQUENCE(_opt_49293)){
                _25496 = SEQ_PTR(_opt_49293)->length;
        }
        else {
            _25496 = 1;
        }
        rhs_slice_target = (object_ptr)&_25497;
        RHS_Slice(_opt_49293, 2, _25496);
        _25498 = _13lower(_25497);
        _25497 = NOVALUE;
        if (IS_SEQUENCE(45) && IS_ATOM(_25498)) {
        }
        else if (IS_ATOM(45) && IS_SEQUENCE(_25498)) {
            Prepend(&_25499, _25498, 45);
        }
        else {
            Concat((object_ptr)&_25499, 45, _25498);
        }
        DeRef(_25498);
        _25498 = NOVALUE;
        if (_25495 == _25499)
        _25500 = 1;
        else if (IS_ATOM_INT(_25495) && IS_ATOM_INT(_25499))
        _25500 = 0;
        else
        _25500 = (compare(_25495, _25499) == 0);
        DeRef(_25495);
        _25495 = NOVALUE;
        DeRefDS(_25499);
        _25499 = NOVALUE;
        if (_25500 != 0) {
            goto LD; // [236] 273
        }
        _2 = (object)SEQ_PTR(_b_49286);
        _25502 = (object)*(((s1_ptr)_2)->base + _j_49325);
        Ref(_25502);
        _25503 = _13lower(_25502);
        _25502 = NOVALUE;
        if (IS_SEQUENCE(_opt_49293)){
                _25504 = SEQ_PTR(_opt_49293)->length;
        }
        else {
            _25504 = 1;
        }
        rhs_slice_target = (object_ptr)&_25505;
        RHS_Slice(_opt_49293, 2, _25504);
        _25506 = _13lower(_25505);
        _25505 = NOVALUE;
        if (IS_SEQUENCE(47) && IS_ATOM(_25506)) {
        }
        else if (IS_ATOM(47) && IS_SEQUENCE(_25506)) {
            Prepend(&_25507, _25506, 47);
        }
        else {
            Concat((object_ptr)&_25507, 47, _25506);
        }
        DeRef(_25506);
        _25506 = NOVALUE;
        if (_25503 == _25507)
        _25508 = 1;
        else if (IS_ATOM_INT(_25503) && IS_ATOM_INT(_25507))
        _25508 = 0;
        else
        _25508 = (compare(_25503, _25507) == 0);
        DeRef(_25503);
        _25503 = NOVALUE;
        DeRefDS(_25507);
        _25507 = NOVALUE;
        if (_25508 == 0)
        {
            _25508 = NOVALUE;
            goto LE; // [269] 283
        }
        else{
            _25508 = NOVALUE;
        }
LD: 

        /** cominit.e:232						bi = j*/
        _bi_49300 = _j_49325;

        /** cominit.e:233						exit*/
        goto LC; // [280] 290
LE: 

        /** cominit.e:235				end for*/
        _j_49325 = _j_49325 + 1;
        goto LB; // [285] 206
LC: 
        ;
    }
LA: 
L8: 

    /** cominit.e:243			if length(this_opt) and not find(MULTIPLE, this_opt[OPTIONS]) then*/
    if (IS_SEQUENCE(_this_opt_49299)){
            _25509 = SEQ_PTR(_this_opt_49299)->length;
    }
    else {
        _25509 = 1;
    }
    if (_25509 == 0) {
        goto LF; // [297] 451
    }
    _2 = (object)SEQ_PTR(_this_opt_49299);
    _25511 = (object)*(((s1_ptr)_2)->base + 4);
    _25512 = find_from(42, _25511, 1);
    _25511 = NOVALUE;
    _25513 = (_25512 == 0);
    _25512 = NOVALUE;
    if (_25513 == 0)
    {
        DeRef(_25513);
        _25513 = NOVALUE;
        goto LF; // [316] 451
    }
    else{
        DeRef(_25513);
        _25513 = NOVALUE;
    }

    /** cominit.e:244				if bi then*/
    if (_bi_49300 == 0)
    {
        goto L10; // [321] 365
    }
    else{
    }

    /** cominit.e:245					if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    _2 = (object)SEQ_PTR(_this_opt_49299);
    _25514 = (object)*(((s1_ptr)_2)->base + 4);
    _25515 = find_from(112, _25514, 1);
    _25514 = NOVALUE;
    if (_25515 == 0)
    {
        _25515 = NOVALUE;
        goto L11; // [337] 354
    }
    else{
        _25515 = NOVALUE;
    }

    /** cominit.e:247						a = remove(a, i, i + 1)*/
    _25516 = _i_49289 + 1;
    if (_25516 > MAXINT){
        _25516 = NewDouble((eudouble)_25516);
    }
    {
        s1_ptr assign_space = SEQ_PTR(_a_49285);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49289)) ? _i_49289 : (object)(DBL_PTR(_i_49289)->dbl);
        int stop = (IS_ATOM_INT(_25516)) ? _25516 : (object)(DBL_PTR(_25516)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49285), start, &_a_49285 );
            }
            else Tail(SEQ_PTR(_a_49285), stop+1, &_a_49285);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49285), start, &_a_49285);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49285 = Remove_elements(start, stop, (SEQ_PTR(_a_49285)->ref == 1));
        }
    }
    DeRef(_25516);
    _25516 = NOVALUE;
    goto L12; // [351] 458
L11: 

    /** cominit.e:250						a = remove(a, i)*/
    {
        s1_ptr assign_space = SEQ_PTR(_a_49285);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49289)) ? _i_49289 : (object)(DBL_PTR(_i_49289)->dbl);
        int stop = (IS_ATOM_INT(_i_49289)) ? _i_49289 : (object)(DBL_PTR(_i_49289)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49285), start, &_a_49285 );
            }
            else Tail(SEQ_PTR(_a_49285), stop+1, &_a_49285);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49285), start, &_a_49285);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49285 = Remove_elements(start, stop, (SEQ_PTR(_a_49285)->ref == 1));
        }
    }
    goto L12; // [362] 458
L10: 

    /** cominit.e:265					integer beginLen = length(a)*/
    if (IS_SEQUENCE(_a_49285)){
            _beginLen_49360 = SEQ_PTR(_a_49285)->length;
    }
    else {
        _beginLen_49360 = 1;
    }

    /** cominit.e:267					if dedupe = 0 and i < beginLen then*/
    _25520 = (_dedupe_49288 == 0);
    if (_25520 == 0) {
        goto L13; // [376] 438
    }
    _25522 = (_i_49289 < _beginLen_49360);
    if (_25522 == 0)
    {
        DeRef(_25522);
        _25522 = NOVALUE;
        goto L13; // [385] 438
    }
    else{
        DeRef(_25522);
        _25522 = NOVALUE;
    }

    /** cominit.e:268						a = merge_parameters( a[i + 1..$], a[1..i], opts, 1)*/
    _25523 = _i_49289 + 1;
    if (_25523 > MAXINT){
        _25523 = NewDouble((eudouble)_25523);
    }
    if (IS_SEQUENCE(_a_49285)){
            _25524 = SEQ_PTR(_a_49285)->length;
    }
    else {
        _25524 = 1;
    }
    rhs_slice_target = (object_ptr)&_25525;
    RHS_Slice(_a_49285, _25523, _25524);
    rhs_slice_target = (object_ptr)&_25526;
    RHS_Slice(_a_49285, 1, _i_49289);
    RefDS(_opts_49287);
    DeRef(_25527);
    _25527 = _opts_49287;
    _0 = _a_49285;
    _a_49285 = _51merge_parameters(_25525, _25526, _25527, 1);
    DeRefDS(_0);
    _25525 = NOVALUE;
    _25526 = NOVALUE;
    _25527 = NOVALUE;

    /** cominit.e:270						if beginLen = length(a) then*/
    if (IS_SEQUENCE(_a_49285)){
            _25529 = SEQ_PTR(_a_49285)->length;
    }
    else {
        _25529 = 1;
    }
    if (_beginLen_49360 != _25529)
    goto L14; // [424] 445

    /** cominit.e:272							i += 1*/
    _i_49289 = _i_49289 + 1;
    goto L14; // [435] 445
L13: 

    /** cominit.e:276						i += 1*/
    _i_49289 = _i_49289 + 1;
L14: 
    goto L12; // [448] 458
LF: 

    /** cominit.e:282				i += 1*/
    _i_49289 = _i_49289 + 1;
L12: 
    DeRef(_opt_49293);
    _opt_49293 = NOVALUE;
    DeRef(_this_opt_49299);
    _this_opt_49299 = NOVALUE;

    /** cominit.e:284		end while*/
    goto L1; // [462] 19
L2: 

    /** cominit.e:286		if dedupe then*/
    if (_dedupe_49288 == 0)
    {
        goto L15; // [467] 481
    }
    else{
    }

    /** cominit.e:287			return b & a*/
    Concat((object_ptr)&_25534, _b_49286, _a_49285);
    DeRefDS(_a_49285);
    DeRefDS(_b_49286);
    DeRefDS(_opts_49287);
    DeRef(_25523);
    _25523 = NOVALUE;
    DeRef(_25486);
    _25486 = NOVALUE;
    DeRef(_25520);
    _25520 = NOVALUE;
    return _25534;
L15: 

    /** cominit.e:290		integer first_extra = 0*/
    _first_extra_49382 = 0;

    /** cominit.e:292		i = 1*/
    _i_49289 = 1;

    /** cominit.e:295		while i <= length(b) do*/
L16: 
    if (IS_SEQUENCE(_b_49286)){
            _25535 = SEQ_PTR(_b_49286)->length;
    }
    else {
        _25535 = 1;
    }
    if (_i_49289 > _25535)
    goto L17; // [499] 692

    /** cominit.e:296			sequence opt = b[i]*/
    DeRef(_opt_49386);
    _2 = (object)SEQ_PTR(_b_49286);
    _opt_49386 = (object)*(((s1_ptr)_2)->base + _i_49289);
    Ref(_opt_49386);

    /** cominit.e:299			if length(opt) <= 1 then*/
    if (IS_SEQUENCE(_opt_49386)){
            _25538 = SEQ_PTR(_opt_49386)->length;
    }
    else {
        _25538 = 1;
    }
    if (_25538 > 1)
    goto L18; // [516] 532

    /** cominit.e:300				first_extra = i*/
    _first_extra_49382 = _i_49289;

    /** cominit.e:301				exit*/
    DeRefDS(_opt_49386);
    _opt_49386 = NOVALUE;
    DeRef(_this_opt_49391);
    _this_opt_49391 = NOVALUE;
    goto L17; // [529] 692
L18: 

    /** cominit.e:304			sequence this_opt = {}*/
    RefDS(_21928);
    DeRef(_this_opt_49391);
    _this_opt_49391 = _21928;

    /** cominit.e:305			if opt[2] = '-' and opt[1] = '-' then*/
    _2 = (object)SEQ_PTR(_opt_49386);
    _25540 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_25540)) {
        _25541 = (_25540 == 45);
    }
    else {
        _25541 = binary_op(EQUALS, _25540, 45);
    }
    _25540 = NOVALUE;
    if (IS_ATOM_INT(_25541)) {
        if (_25541 == 0) {
            goto L19; // [549] 586
        }
    }
    else {
        if (DBL_PTR(_25541)->dbl == 0.0) {
            goto L19; // [549] 586
        }
    }
    _2 = (object)SEQ_PTR(_opt_49386);
    _25543 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_25543)) {
        _25544 = (_25543 == 45);
    }
    else {
        _25544 = binary_op(EQUALS, _25543, 45);
    }
    _25543 = NOVALUE;
    if (_25544 == 0) {
        DeRef(_25544);
        _25544 = NOVALUE;
        goto L19; // [562] 586
    }
    else {
        if (!IS_ATOM_INT(_25544) && DBL_PTR(_25544)->dbl == 0.0){
            DeRef(_25544);
            _25544 = NOVALUE;
            goto L19; // [562] 586
        }
        DeRef(_25544);
        _25544 = NOVALUE;
    }
    DeRef(_25544);
    _25544 = NOVALUE;

    /** cominit.e:306				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    if (IS_SEQUENCE(_opt_49386)){
            _25545 = SEQ_PTR(_opt_49386)->length;
    }
    else {
        _25545 = 1;
    }
    rhs_slice_target = (object_ptr)&_25546;
    RHS_Slice(_opt_49386, 3, _25545);
    RefDS(_opts_49287);
    _0 = _this_opt_49391;
    _this_opt_49391 = _51find_opt(2, _25546, _opts_49287);
    DeRef(_0);
    _25546 = NOVALUE;
    goto L1A; // [583] 633
L19: 

    /** cominit.e:307			elsif opt[1] = '-' or opt[1] = '/' then*/
    _2 = (object)SEQ_PTR(_opt_49386);
    _25548 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_25548)) {
        _25549 = (_25548 == 45);
    }
    else {
        _25549 = binary_op(EQUALS, _25548, 45);
    }
    _25548 = NOVALUE;
    if (IS_ATOM_INT(_25549)) {
        if (_25549 != 0) {
            goto L1B; // [596] 613
        }
    }
    else {
        if (DBL_PTR(_25549)->dbl != 0.0) {
            goto L1B; // [596] 613
        }
    }
    _2 = (object)SEQ_PTR(_opt_49386);
    _25551 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_25551)) {
        _25552 = (_25551 == 47);
    }
    else {
        _25552 = binary_op(EQUALS, _25551, 47);
    }
    _25551 = NOVALUE;
    if (_25552 == 0) {
        DeRef(_25552);
        _25552 = NOVALUE;
        goto L1C; // [609] 632
    }
    else {
        if (!IS_ATOM_INT(_25552) && DBL_PTR(_25552)->dbl == 0.0){
            DeRef(_25552);
            _25552 = NOVALUE;
            goto L1C; // [609] 632
        }
        DeRef(_25552);
        _25552 = NOVALUE;
    }
    DeRef(_25552);
    _25552 = NOVALUE;
L1B: 

    /** cominit.e:308				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    if (IS_SEQUENCE(_opt_49386)){
            _25553 = SEQ_PTR(_opt_49386)->length;
    }
    else {
        _25553 = 1;
    }
    rhs_slice_target = (object_ptr)&_25554;
    RHS_Slice(_opt_49386, 2, _25553);
    RefDS(_opts_49287);
    _0 = _this_opt_49391;
    _this_opt_49391 = _51find_opt(1, _25554, _opts_49287);
    DeRef(_0);
    _25554 = NOVALUE;
L1C: 
L1A: 

    /** cominit.e:311			if length(this_opt) then*/
    if (IS_SEQUENCE(_this_opt_49391)){
            _25556 = SEQ_PTR(_this_opt_49391)->length;
    }
    else {
        _25556 = 1;
    }
    if (_25556 == 0)
    {
        _25556 = NOVALUE;
        goto L1D; // [638] 667
    }
    else{
        _25556 = NOVALUE;
    }

    /** cominit.e:312				if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    _2 = (object)SEQ_PTR(_this_opt_49391);
    _25557 = (object)*(((s1_ptr)_2)->base + 4);
    _25558 = find_from(112, _25557, 1);
    _25557 = NOVALUE;
    if (_25558 == 0)
    {
        _25558 = NOVALUE;
        goto L1E; // [654] 679
    }
    else{
        _25558 = NOVALUE;
    }

    /** cominit.e:313					i += 1*/
    _i_49289 = _i_49289 + 1;
    goto L1E; // [664] 679
L1D: 

    /** cominit.e:316				first_extra = i*/
    _first_extra_49382 = _i_49289;

    /** cominit.e:317				exit*/
    DeRef(_opt_49386);
    _opt_49386 = NOVALUE;
    DeRef(_this_opt_49391);
    _this_opt_49391 = NOVALUE;
    goto L17; // [676] 692
L1E: 

    /** cominit.e:320			i += 1*/
    _i_49289 = _i_49289 + 1;
    DeRef(_opt_49386);
    _opt_49386 = NOVALUE;
    DeRef(_this_opt_49391);
    _this_opt_49391 = NOVALUE;

    /** cominit.e:321		end while*/
    goto L16; // [689] 496
L17: 

    /** cominit.e:323		if first_extra then*/
    if (_first_extra_49382 == 0)
    {
        goto L1F; // [694] 709
    }
    else{
    }

    /** cominit.e:324			return splice(b, a, first_extra)*/
    {
        s1_ptr assign_space;
        insert_pos = _first_extra_49382;
        if (insert_pos <= 0) {
            Concat(&_25561,_a_49285,_b_49286);
        }
        else if (insert_pos > SEQ_PTR(_b_49286)->length){
            Concat(&_25561,_b_49286,_a_49285);
        }
        else if (IS_SEQUENCE(_a_49285)) {
            if( _25561 != _b_49286 || SEQ_PTR( _b_49286 )->ref != 1 ){
                DeRef( _25561 );
                RefDS( _b_49286 );
            }
            assign_space = Add_internal_space( _b_49286, insert_pos,((s1_ptr)SEQ_PTR(_a_49285))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_a_49285), _b_49286 == _25561 );
            _25561 = MAKE_SEQ( assign_space );
        }
        else {
            if( _25561 != _b_49286 && SEQ_PTR( _b_49286 )->ref != 1 ){
                _25561 = Insert( _b_49286, _a_49285, insert_pos);
            }
            else {
                DeRef( _25561 );
                RefDS( _b_49286 );
                _25561 = Insert( _b_49286, _a_49285, insert_pos);
            }
        }
    }
    DeRefDS(_a_49285);
    DeRefDS(_b_49286);
    DeRefDS(_opts_49287);
    DeRef(_25549);
    _25549 = NOVALUE;
    DeRef(_25523);
    _25523 = NOVALUE;
    DeRef(_25541);
    _25541 = NOVALUE;
    DeRef(_25534);
    _25534 = NOVALUE;
    DeRef(_25486);
    _25486 = NOVALUE;
    DeRef(_25520);
    _25520 = NOVALUE;
    return _25561;
L1F: 

    /** cominit.e:328		return b & a*/
    Concat((object_ptr)&_25562, _b_49286, _a_49285);
    DeRefDS(_a_49285);
    DeRefDS(_b_49286);
    DeRefDS(_opts_49287);
    DeRef(_25549);
    _25549 = NOVALUE;
    DeRef(_25523);
    _25523 = NOVALUE;
    DeRef(_25541);
    _25541 = NOVALUE;
    DeRef(_25561);
    _25561 = NOVALUE;
    DeRef(_25534);
    _25534 = NOVALUE;
    DeRef(_25486);
    _25486 = NOVALUE;
    DeRef(_25520);
    _25520 = NOVALUE;
    return _25562;
    ;
}


object _51validate_opt(object _opt_type_49424, object _arg_49425, object _args_49426, object _ix_49427)
{
    object _opt_49428 = NOVALUE;
    object _this_opt_49436 = NOVALUE;
    object _25581 = NOVALUE;
    object _25580 = NOVALUE;
    object _25579 = NOVALUE;
    object _25578 = NOVALUE;
    object _25577 = NOVALUE;
    object _25575 = NOVALUE;
    object _25574 = NOVALUE;
    object _25573 = NOVALUE;
    object _25572 = NOVALUE;
    object _25571 = NOVALUE;
    object _25569 = NOVALUE;
    object _25566 = NOVALUE;
    object _25564 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:336		if opt_type = SHORTNAME then*/
    if (_opt_type_49424 != 1)
    goto L1; // [11] 28

    /** cominit.e:337			opt = arg[2..$]*/
    if (IS_SEQUENCE(_arg_49425)){
            _25564 = SEQ_PTR(_arg_49425)->length;
    }
    else {
        _25564 = 1;
    }
    rhs_slice_target = (object_ptr)&_opt_49428;
    RHS_Slice(_arg_49425, 2, _25564);
    goto L2; // [25] 39
L1: 

    /** cominit.e:339			opt = arg[3..$]*/
    if (IS_SEQUENCE(_arg_49425)){
            _25566 = SEQ_PTR(_arg_49425)->length;
    }
    else {
        _25566 = 1;
    }
    rhs_slice_target = (object_ptr)&_opt_49428;
    RHS_Slice(_arg_49425, 3, _25566);
L2: 

    /** cominit.e:342		sequence this_opt = find_opt( opt_type, opt, options )*/
    RefDS(_opt_49428);
    RefDS(_51options_49166);
    _0 = _this_opt_49436;
    _this_opt_49436 = _51find_opt(_opt_type_49424, _opt_49428, _51options_49166);
    DeRef(_0);

    /** cominit.e:343		if not length( this_opt ) then*/
    if (IS_SEQUENCE(_this_opt_49436)){
            _25569 = SEQ_PTR(_this_opt_49436)->length;
    }
    else {
        _25569 = 1;
    }
    if (_25569 != 0)
    goto L3; // [58] 72
    _25569 = NOVALUE;

    /** cominit.e:345			return { 0, 0 }*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _25571 = MAKE_SEQ(_1);
    DeRefDS(_arg_49425);
    DeRefDS(_args_49426);
    DeRefDS(_opt_49428);
    DeRefDS(_this_opt_49436);
    return _25571;
L3: 

    /** cominit.e:348		if find( HAS_PARAMETER, this_opt[OPTIONS] ) then*/
    _2 = (object)SEQ_PTR(_this_opt_49436);
    _25572 = (object)*(((s1_ptr)_2)->base + 4);
    _25573 = find_from(112, _25572, 1);
    _25572 = NOVALUE;
    if (_25573 == 0)
    {
        _25573 = NOVALUE;
        goto L4; // [85] 135
    }
    else{
        _25573 = NOVALUE;
    }

    /** cominit.e:349			if ix = length( args ) - 1 then*/
    if (IS_SEQUENCE(_args_49426)){
            _25574 = SEQ_PTR(_args_49426)->length;
    }
    else {
        _25574 = 1;
    }
    _25575 = _25574 - 1;
    _25574 = NOVALUE;
    if (_ix_49427 != _25575)
    goto L5; // [97] 117

    /** cominit.e:351				CompileErr( MISSING_CMD_PARAMETER, { arg } )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_arg_49425);
    ((intptr_t*)_2)[1] = _arg_49425;
    _25577 = MAKE_SEQ(_1);
    _52CompileErr(353, _25577, 0);
    _25577 = NOVALUE;
    goto L6; // [114] 150
L5: 

    /** cominit.e:353				return { ix, ix + 2 }*/
    _25578 = _ix_49427 + 2;
    if ((object)((uintptr_t)_25578 + (uintptr_t)HIGH_BITS) >= 0){
        _25578 = NewDouble((eudouble)_25578);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49427;
    ((intptr_t *)_2)[2] = _25578;
    _25579 = MAKE_SEQ(_1);
    _25578 = NOVALUE;
    DeRefDS(_arg_49425);
    DeRefDS(_args_49426);
    DeRef(_opt_49428);
    DeRef(_this_opt_49436);
    DeRef(_25571);
    _25571 = NOVALUE;
    DeRef(_25575);
    _25575 = NOVALUE;
    return _25579;
    goto L6; // [132] 150
L4: 

    /** cominit.e:356			return { ix, ix + 1 }*/
    _25580 = _ix_49427 + 1;
    if (_25580 > MAXINT){
        _25580 = NewDouble((eudouble)_25580);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49427;
    ((intptr_t *)_2)[2] = _25580;
    _25581 = MAKE_SEQ(_1);
    _25580 = NOVALUE;
    DeRefDS(_arg_49425);
    DeRefDS(_args_49426);
    DeRef(_opt_49428);
    DeRef(_this_opt_49436);
    DeRef(_25579);
    _25579 = NOVALUE;
    DeRef(_25571);
    _25571 = NOVALUE;
    DeRef(_25575);
    _25575 = NOVALUE;
    return _25581;
L6: 
    ;
}


object _51find_next_opt(object _ix_49461, object _args_49462)
{
    object _arg_49466 = NOVALUE;
    object _25603 = NOVALUE;
    object _25602 = NOVALUE;
    object _25600 = NOVALUE;
    object _25599 = NOVALUE;
    object _25598 = NOVALUE;
    object _25597 = NOVALUE;
    object _25596 = NOVALUE;
    object _25595 = NOVALUE;
    object _25594 = NOVALUE;
    object _25593 = NOVALUE;
    object _25591 = NOVALUE;
    object _25589 = NOVALUE;
    object _25587 = NOVALUE;
    object _25585 = NOVALUE;
    object _25582 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:374		while ix < length( args ) do*/
L1: 
    if (IS_SEQUENCE(_args_49462)){
            _25582 = SEQ_PTR(_args_49462)->length;
    }
    else {
        _25582 = 1;
    }
    if (_ix_49461 >= _25582)
    goto L2; // [13] 157

    /** cominit.e:375			sequence arg = args[ix]*/
    DeRef(_arg_49466);
    _2 = (object)SEQ_PTR(_args_49462);
    _arg_49466 = (object)*(((s1_ptr)_2)->base + _ix_49461);
    Ref(_arg_49466);

    /** cominit.e:376			if length( arg ) > 1 then*/
    if (IS_SEQUENCE(_arg_49466)){
            _25585 = SEQ_PTR(_arg_49466)->length;
    }
    else {
        _25585 = 1;
    }
    if (_25585 <= 1)
    goto L3; // [30] 129

    /** cominit.e:377				if arg[1] = '-' then*/
    _2 = (object)SEQ_PTR(_arg_49466);
    _25587 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _25587, 45)){
        _25587 = NOVALUE;
        goto L4; // [40] 111
    }
    _25587 = NOVALUE;

    /** cominit.e:378					if arg[2] = '-' then*/
    _2 = (object)SEQ_PTR(_arg_49466);
    _25589 = (object)*(((s1_ptr)_2)->base + 2);
    if (binary_op_a(NOTEQ, _25589, 45)){
        _25589 = NOVALUE;
        goto L5; // [50] 94
    }
    _25589 = NOVALUE;

    /** cominit.e:380						if length( arg ) = 2 then*/
    if (IS_SEQUENCE(_arg_49466)){
            _25591 = SEQ_PTR(_arg_49466)->length;
    }
    else {
        _25591 = 1;
    }
    if (_25591 != 2)
    goto L6; // [59] 78

    /** cominit.e:382							return { 0, ix - 1 }*/
    _25593 = _ix_49461 - 1;
    if ((object)((uintptr_t)_25593 +(uintptr_t) HIGH_BITS) >= 0){
        _25593 = NewDouble((eudouble)_25593);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25593;
    _25594 = MAKE_SEQ(_1);
    _25593 = NOVALUE;
    DeRefDS(_arg_49466);
    DeRefDS(_args_49462);
    return _25594;
L6: 

    /** cominit.e:385						return validate_opt( LONGNAME, arg, args, ix )*/
    RefDS(_arg_49466);
    RefDS(_args_49462);
    _25595 = _51validate_opt(2, _arg_49466, _args_49462, _ix_49461);
    DeRefDS(_arg_49466);
    DeRefDS(_args_49462);
    DeRef(_25594);
    _25594 = NOVALUE;
    return _25595;
    goto L7; // [91] 144
L5: 

    /** cominit.e:389						return validate_opt( SHORTNAME, arg, args, ix )*/
    RefDS(_arg_49466);
    RefDS(_args_49462);
    _25596 = _51validate_opt(1, _arg_49466, _args_49462, _ix_49461);
    DeRefDS(_arg_49466);
    DeRefDS(_args_49462);
    DeRef(_25595);
    _25595 = NOVALUE;
    DeRef(_25594);
    _25594 = NOVALUE;
    return _25596;
    goto L7; // [108] 144
L4: 

    /** cominit.e:393					return {0, ix-1}*/
    _25597 = _ix_49461 - 1;
    if ((object)((uintptr_t)_25597 +(uintptr_t) HIGH_BITS) >= 0){
        _25597 = NewDouble((eudouble)_25597);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25597;
    _25598 = MAKE_SEQ(_1);
    _25597 = NOVALUE;
    DeRef(_arg_49466);
    DeRefDS(_args_49462);
    DeRef(_25595);
    _25595 = NOVALUE;
    DeRef(_25596);
    _25596 = NOVALUE;
    DeRef(_25594);
    _25594 = NOVALUE;
    return _25598;
    goto L7; // [126] 144
L3: 

    /** cominit.e:397				return { 0, ix-1 }*/
    _25599 = _ix_49461 - 1;
    if ((object)((uintptr_t)_25599 +(uintptr_t) HIGH_BITS) >= 0){
        _25599 = NewDouble((eudouble)_25599);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25599;
    _25600 = MAKE_SEQ(_1);
    _25599 = NOVALUE;
    DeRef(_arg_49466);
    DeRefDS(_args_49462);
    DeRef(_25595);
    _25595 = NOVALUE;
    DeRef(_25596);
    _25596 = NOVALUE;
    DeRef(_25598);
    _25598 = NOVALUE;
    DeRef(_25594);
    _25594 = NOVALUE;
    return _25600;
L7: 

    /** cominit.e:400			ix += 1*/
    _ix_49461 = _ix_49461 + 1;
    DeRef(_arg_49466);
    _arg_49466 = NOVALUE;

    /** cominit.e:401		end while*/
    goto L1; // [154] 10
L2: 

    /** cominit.e:402		return {0, ix-1}*/
    _25602 = _ix_49461 - 1;
    if ((object)((uintptr_t)_25602 +(uintptr_t) HIGH_BITS) >= 0){
        _25602 = NewDouble((eudouble)_25602);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25602;
    _25603 = MAKE_SEQ(_1);
    _25602 = NOVALUE;
    DeRefDS(_args_49462);
    DeRef(_25595);
    _25595 = NOVALUE;
    DeRef(_25596);
    _25596 = NOVALUE;
    DeRef(_25600);
    _25600 = NOVALUE;
    DeRef(_25598);
    _25598 = NOVALUE;
    DeRef(_25594);
    _25594 = NOVALUE;
    return _25603;
    ;
}


object _51expand_config_options(object _args_49496)
{
    object _idx_49497 = NOVALUE;
    object _next_idx_49498 = NOVALUE;
    object _files_49499 = NOVALUE;
    object _cmd_1_2_49500 = NOVALUE;
    object _25626 = NOVALUE;
    object _25625 = NOVALUE;
    object _25624 = NOVALUE;
    object _25623 = NOVALUE;
    object _25622 = NOVALUE;
    object _25621 = NOVALUE;
    object _25620 = NOVALUE;
    object _25619 = NOVALUE;
    object _25618 = NOVALUE;
    object _25613 = NOVALUE;
    object _25611 = NOVALUE;
    object _25610 = NOVALUE;
    object _25609 = NOVALUE;
    object _25607 = NOVALUE;
    object _25606 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:410		integer idx = 1*/
    _idx_49497 = 1;

    /** cominit.e:412		sequence files = {}*/
    RefDS(_21928);
    DeRef(_files_49499);
    _files_49499 = _21928;

    /** cominit.e:413		sequence cmd_1_2 = args[1..2]*/
    rhs_slice_target = (object_ptr)&_cmd_1_2_49500;
    RHS_Slice(_args_49496, 1, 2);

    /** cominit.e:414		args = remove( args, 1, 2 )*/
    {
        s1_ptr assign_space = SEQ_PTR(_args_49496);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(2)) ? 2 : (object)(DBL_PTR(2)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_args_49496), start, &_args_49496 );
            }
            else Tail(SEQ_PTR(_args_49496), stop+1, &_args_49496);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49496), start, &_args_49496);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49496 = Remove_elements(start, stop, (SEQ_PTR(_args_49496)->ref == 1));
        }
    }

    /** cominit.e:416		while idx with entry do*/
    goto L1; // [31] 94
L2: 
    if (_idx_49497 == 0)
    {
        goto L3; // [34] 114
    }
    else{
    }

    /** cominit.e:417			if equal(upper(args[idx]), "-C") then*/
    _2 = (object)SEQ_PTR(_args_49496);
    _25606 = (object)*(((s1_ptr)_2)->base + _idx_49497);
    Ref(_25606);
    _25607 = _13upper(_25606);
    _25606 = NOVALUE;
    if (_25607 == _25608)
    _25609 = 1;
    else if (IS_ATOM_INT(_25607) && IS_ATOM_INT(_25608))
    _25609 = 0;
    else
    _25609 = (compare(_25607, _25608) == 0);
    DeRef(_25607);
    _25607 = NOVALUE;
    if (_25609 == 0)
    {
        _25609 = NOVALUE;
        goto L4; // [51] 82
    }
    else{
        _25609 = NOVALUE;
    }

    /** cominit.e:418				files = append( files, args[idx+1] )*/
    _25610 = _idx_49497 + 1;
    _2 = (object)SEQ_PTR(_args_49496);
    _25611 = (object)*(((s1_ptr)_2)->base + _25610);
    Ref(_25611);
    Append(&_files_49499, _files_49499, _25611);
    _25611 = NOVALUE;

    /** cominit.e:419				args = remove( args, idx, idx + 1 )*/
    _25613 = _idx_49497 + 1;
    if (_25613 > MAXINT){
        _25613 = NewDouble((eudouble)_25613);
    }
    {
        s1_ptr assign_space = SEQ_PTR(_args_49496);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_idx_49497)) ? _idx_49497 : (object)(DBL_PTR(_idx_49497)->dbl);
        int stop = (IS_ATOM_INT(_25613)) ? _25613 : (object)(DBL_PTR(_25613)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_args_49496), start, &_args_49496 );
            }
            else Tail(SEQ_PTR(_args_49496), stop+1, &_args_49496);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49496), start, &_args_49496);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49496 = Remove_elements(start, stop, (SEQ_PTR(_args_49496)->ref == 1));
        }
    }
    DeRef(_25613);
    _25613 = NOVALUE;
    goto L5; // [79] 91
L4: 

    /** cominit.e:422				idx = next_idx[2]*/
    _2 = (object)SEQ_PTR(_next_idx_49498);
    _idx_49497 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_idx_49497))
    _idx_49497 = (object)DBL_PTR(_idx_49497)->dbl;
L5: 

    /** cominit.e:424		entry*/
L1: 

    /** cominit.e:425			next_idx = find_next_opt( idx, args )*/
    RefDS(_args_49496);
    _0 = _next_idx_49498;
    _next_idx_49498 = _51find_next_opt(_idx_49497, _args_49496);
    DeRef(_0);

    /** cominit.e:426			idx = next_idx[1]*/
    _2 = (object)SEQ_PTR(_next_idx_49498);
    _idx_49497 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_idx_49497))
    _idx_49497 = (object)DBL_PTR(_idx_49497)->dbl;

    /** cominit.e:427		end while*/
    goto L2; // [111] 34
L3: 

    /** cominit.e:428		return cmd_1_2 & merge_parameters( GetDefaultArgs( files ), args[1..next_idx[2]], options, 1 ) & args[next_idx[2]+1..$]*/
    RefDS(_files_49499);
    _25618 = _50GetDefaultArgs(_files_49499);
    _2 = (object)SEQ_PTR(_next_idx_49498);
    _25619 = (object)*(((s1_ptr)_2)->base + 2);
    rhs_slice_target = (object_ptr)&_25620;
    RHS_Slice(_args_49496, 1, _25619);
    RefDS(_51options_49166);
    _25621 = _51merge_parameters(_25618, _25620, _51options_49166, 1);
    _25618 = NOVALUE;
    _25620 = NOVALUE;
    _2 = (object)SEQ_PTR(_next_idx_49498);
    _25622 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_25622)) {
        _25623 = _25622 + 1;
        if (_25623 > MAXINT){
            _25623 = NewDouble((eudouble)_25623);
        }
    }
    else
    _25623 = binary_op(PLUS, 1, _25622);
    _25622 = NOVALUE;
    if (IS_SEQUENCE(_args_49496)){
            _25624 = SEQ_PTR(_args_49496)->length;
    }
    else {
        _25624 = 1;
    }
    rhs_slice_target = (object_ptr)&_25625;
    RHS_Slice(_args_49496, _25623, _25624);
    {
        object concat_list[3];

        concat_list[0] = _25625;
        concat_list[1] = _25621;
        concat_list[2] = _cmd_1_2_49500;
        Concat_N((object_ptr)&_25626, concat_list, 3);
    }
    DeRefDS(_25625);
    _25625 = NOVALUE;
    DeRef(_25621);
    _25621 = NOVALUE;
    DeRefDS(_args_49496);
    DeRefDS(_next_idx_49498);
    DeRefDS(_files_49499);
    DeRefDS(_cmd_1_2_49500);
    DeRef(_25623);
    _25623 = NOVALUE;
    _25619 = NOVALUE;
    DeRef(_25610);
    _25610 = NOVALUE;
    return _25626;
    ;
}


void _51handle_common_options(object _opts_49531)
{
    object _opt_keys_49532 = NOVALUE;
    object _option_w_49534 = NOVALUE;
    object _key_49538 = NOVALUE;
    object _val_49540 = NOVALUE;
    object _this_warn_49586 = NOVALUE;
    object _auto_add_warn_49588 = NOVALUE;
    object _n_49594 = NOVALUE;
    object _this_warn_49617 = NOVALUE;
    object _auto_add_warn_49619 = NOVALUE;
    object _n_49625 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_615_49660 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_689_49672 = NOVALUE;
    object _25685 = NOVALUE;
    object _25684 = NOVALUE;
    object _25682 = NOVALUE;
    object _25680 = NOVALUE;
    object _25678 = NOVALUE;
    object _25677 = NOVALUE;
    object _25676 = NOVALUE;
    object _25675 = NOVALUE;
    object _25674 = NOVALUE;
    object _25673 = NOVALUE;
    object _25672 = NOVALUE;
    object _25671 = NOVALUE;
    object _25669 = NOVALUE;
    object _25667 = NOVALUE;
    object _25666 = NOVALUE;
    object _25665 = NOVALUE;
    object _25660 = NOVALUE;
    object _25658 = NOVALUE;
    object _25656 = NOVALUE;
    object _25653 = NOVALUE;
    object _25652 = NOVALUE;
    object _25647 = NOVALUE;
    object _25645 = NOVALUE;
    object _25643 = NOVALUE;
    object _25641 = NOVALUE;
    object _25640 = NOVALUE;
    object _25639 = NOVALUE;
    object _25638 = NOVALUE;
    object _25637 = NOVALUE;
    object _25636 = NOVALUE;
    object _25634 = NOVALUE;
    object _25633 = NOVALUE;
    object _25628 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:435		sequence opt_keys = m:keys(opts)*/
    Ref(_opts_49531);
    _0 = _opt_keys_49532;
    _opt_keys_49532 = _30keys(_opts_49531, 0);
    DeRef(_0);

    /** cominit.e:436		integer option_w = 0*/
    _option_w_49534 = 0;

    /** cominit.e:438		for idx = 1 to length(opt_keys) do*/
    if (IS_SEQUENCE(_opt_keys_49532)){
            _25628 = SEQ_PTR(_opt_keys_49532)->length;
    }
    else {
        _25628 = 1;
    }
    {
        object _idx_49536;
        _idx_49536 = 1;
L1: 
        if (_idx_49536 > _25628){
            goto L2; // [20] 791
        }

        /** cominit.e:439			sequence key = opt_keys[idx]*/
        DeRef(_key_49538);
        _2 = (object)SEQ_PTR(_opt_keys_49532);
        _key_49538 = (object)*(((s1_ptr)_2)->base + _idx_49536);
        Ref(_key_49538);

        /** cominit.e:440			object val = m:get(opts, key)*/
        Ref(_opts_49531);
        RefDS(_key_49538);
        _0 = _val_49540;
        _val_49540 = _30get(_opts_49531, _key_49538, 0);
        DeRef(_0);

        /** cominit.e:442			switch key do*/
        _1 = find(_key_49538, _25631);
        switch ( _1 ){ 

            /** cominit.e:443				case "i" then*/
            case 1:

            /** cominit.e:444					for i = 1 to length(val) do*/
            if (IS_SEQUENCE(_val_49540)){
                    _25633 = SEQ_PTR(_val_49540)->length;
            }
            else {
                _25633 = 1;
            }
            {
                object _i_49546;
                _i_49546 = 1;
L3: 
                if (_i_49546 > _25633){
                    goto L4; // [59] 82
                }

                /** cominit.e:445						add_include_directory(val[i])*/
                _2 = (object)SEQ_PTR(_val_49540);
                _25634 = (object)*(((s1_ptr)_2)->base + _i_49546);
                Ref(_25634);
                _50add_include_directory(_25634);
                _25634 = NOVALUE;

                /** cominit.e:446					end for*/
                _i_49546 = _i_49546 + 1;
                goto L3; // [77] 66
L4: 
                ;
            }
            goto L5; // [82] 782

            /** cominit.e:448				case "d" then*/
            case 2:

            /** cominit.e:449					OpDefines &= val*/
            if (IS_SEQUENCE(_39OpDefines_16888) && IS_ATOM(_val_49540)) {
                Ref(_val_49540);
                Append(&_39OpDefines_16888, _39OpDefines_16888, _val_49540);
            }
            else if (IS_ATOM(_39OpDefines_16888) && IS_SEQUENCE(_val_49540)) {
            }
            else {
                Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _val_49540);
            }
            goto L5; // [98] 782

            /** cominit.e:451				case "batch" then*/
            case 3:

            /** cominit.e:452					batch_job = 1*/
            _39batch_job_16828 = 1;
            goto L5; // [111] 782

            /** cominit.e:454				case "test" then*/
            case 4:

            /** cominit.e:455					test_only = 1*/
            _39test_only_16827 = 1;
            goto L5; // [124] 782

            /** cominit.e:457				case "strict" then*/
            case 5:

            /** cominit.e:458					Strict_is_on = 1*/
            _39Strict_is_on_16880 = 1;
            goto L5; // [137] 782

            /** cominit.e:460				case "p" then*/
            case 6:

            /** cominit.e:461					for i = 1 to length(val) do*/
            if (IS_SEQUENCE(_val_49540)){
                    _25636 = SEQ_PTR(_val_49540)->length;
            }
            else {
                _25636 = 1;
            }
            {
                object _i_49561;
                _i_49561 = 1;
L6: 
                if (_i_49561 > _25636){
                    goto L7; // [148] 173
                }

                /** cominit.e:462						add_preprocessor(val[i])*/
                _2 = (object)SEQ_PTR(_val_49540);
                _25637 = (object)*(((s1_ptr)_2)->base + _i_49561);
                Ref(_25637);
                _65add_preprocessor(_25637, 0, 0);
                _25637 = NOVALUE;

                /** cominit.e:463					end for*/
                _i_49561 = _i_49561 + 1;
                goto L6; // [168] 155
L7: 
                ;
            }
            goto L5; // [173] 782

            /** cominit.e:465				case "pf" then*/
            case 7:

            /** cominit.e:466					force_preprocessor = 1*/
            _36force_preprocessor_15422 = 1;
            goto L5; // [186] 782

            /** cominit.e:468				case "l" then*/
            case 8:

            /** cominit.e:469					for i = 1 to length(val) do*/
            if (IS_SEQUENCE(_val_49540)){
                    _25638 = SEQ_PTR(_val_49540)->length;
            }
            else {
                _25638 = 1;
            }
            {
                object _i_49569;
                _i_49569 = 1;
L8: 
                if (_i_49569 > _25638){
                    goto L9; // [197] 238
                }

                /** cominit.e:470						LocalizeQual = append(LocalizeQual, (filter(lower(val[i]), STDFLTR_ALPHA)))*/
                _2 = (object)SEQ_PTR(_val_49540);
                _25639 = (object)*(((s1_ptr)_2)->base + _i_49569);
                Ref(_25639);
                _25640 = _13lower(_25639);
                _25639 = NOVALUE;
                RefDS(_21928);
                RefDS(_5);
                _25641 = _22filter(_25640, _22STDFLTR_ALPHA_6664, _21928, _5);
                _25640 = NOVALUE;
                Ref(_25641);
                Append(&_36LocalizeQual_15423, _36LocalizeQual_15423, _25641);
                DeRef(_25641);
                _25641 = NOVALUE;

                /** cominit.e:471					end for*/
                _i_49569 = _i_49569 + 1;
                goto L8; // [233] 204
L9: 
                ;
            }
            goto L5; // [238] 782

            /** cominit.e:473				case "ldb" then*/
            case 9:

            /** cominit.e:474					LocalDB = val*/
            Ref(_val_49540);
            DeRef(_36LocalDB_15424);
            _36LocalDB_15424 = _val_49540;
            goto L5; // [251] 782

            /** cominit.e:476				case "w" then*/
            case 10:

            /** cominit.e:477					for i = 1 to length(val) do*/
            if (IS_SEQUENCE(_val_49540)){
                    _25643 = SEQ_PTR(_val_49540)->length;
            }
            else {
                _25643 = 1;
            }
            {
                object _i_49584;
                _i_49584 = 1;
LA: 
                if (_i_49584 > _25643){
                    goto LB; // [262] 392
                }

                /** cominit.e:478						sequence this_warn = val[i]*/
                DeRef(_this_warn_49586);
                _2 = (object)SEQ_PTR(_val_49540);
                _this_warn_49586 = (object)*(((s1_ptr)_2)->base + _i_49584);
                Ref(_this_warn_49586);

                /** cominit.e:479						integer auto_add_warn = 0*/
                _auto_add_warn_49588 = 0;

                /** cominit.e:480						if this_warn[1] = '+' then*/
                _2 = (object)SEQ_PTR(_this_warn_49586);
                _25645 = (object)*(((s1_ptr)_2)->base + 1);
                if (binary_op_a(NOTEQ, _25645, 43)){
                    _25645 = NOVALUE;
                    goto LC; // [288] 308
                }
                _25645 = NOVALUE;

                /** cominit.e:481							auto_add_warn = 1*/
                _auto_add_warn_49588 = 1;

                /** cominit.e:482							this_warn = this_warn[2 .. $]*/
                if (IS_SEQUENCE(_this_warn_49586)){
                        _25647 = SEQ_PTR(_this_warn_49586)->length;
                }
                else {
                    _25647 = 1;
                }
                rhs_slice_target = (object_ptr)&_this_warn_49586;
                RHS_Slice(_this_warn_49586, 2, _25647);
LC: 

                /** cominit.e:484						integer n = find(this_warn, warning_names)*/
                _n_49594 = find_from(_this_warn_49586, _39warning_names_16859, 1);

                /** cominit.e:485						if n != 0 then*/
                if (_n_49594 == 0)
                goto LD; // [319] 383

                /** cominit.e:486							if auto_add_warn or option_w = 1 then*/
                if (_auto_add_warn_49588 != 0) {
                    goto LE; // [325] 338
                }
                _25652 = (_option_w_49534 == 1);
                if (_25652 == 0)
                {
                    DeRef(_25652);
                    _25652 = NOVALUE;
                    goto LF; // [334] 357
                }
                else{
                    DeRef(_25652);
                    _25652 = NOVALUE;
                }
LE: 

                /** cominit.e:487								OpWarning = or_bits(OpWarning, warning_flags[n])*/
                _2 = (object)SEQ_PTR(_39warning_flags_16857);
                _25653 = (object)*(((s1_ptr)_2)->base + _n_49594);
                {uintptr_t tu;
                     tu = (uintptr_t)_39OpWarning_16882 | (uintptr_t)_25653;
                     _39OpWarning_16882 = MAKE_UINT(tu);
                }
                _25653 = NOVALUE;
                if (!IS_ATOM_INT(_39OpWarning_16882)) {
                    _1 = (object)(DBL_PTR(_39OpWarning_16882)->dbl);
                    DeRefDS(_39OpWarning_16882);
                    _39OpWarning_16882 = _1;
                }
                goto L10; // [354] 373
LF: 

                /** cominit.e:489								option_w = 1*/
                _option_w_49534 = 1;

                /** cominit.e:490								OpWarning = warning_flags[n]*/
                _2 = (object)SEQ_PTR(_39warning_flags_16857);
                _39OpWarning_16882 = (object)*(((s1_ptr)_2)->base + _n_49594);
L10: 

                /** cominit.e:493							prev_OpWarning = OpWarning*/
                _39prev_OpWarning_16883 = _39OpWarning_16882;
LD: 
                DeRef(_this_warn_49586);
                _this_warn_49586 = NOVALUE;

                /** cominit.e:495					end for*/
                _i_49584 = _i_49584 + 1;
                goto LA; // [387] 269
LB: 
                ;
            }
            goto L5; // [392] 782

            /** cominit.e:497				case "x" then*/
            case 11:

            /** cominit.e:498					for i = 1 to length(val) do*/
            if (IS_SEQUENCE(_val_49540)){
                    _25656 = SEQ_PTR(_val_49540)->length;
            }
            else {
                _25656 = 1;
            }
            {
                object _i_49615;
                _i_49615 = 1;
L11: 
                if (_i_49615 > _25656){
                    goto L12; // [403] 542
                }

                /** cominit.e:499						sequence this_warn = val[i]*/
                DeRef(_this_warn_49617);
                _2 = (object)SEQ_PTR(_val_49540);
                _this_warn_49617 = (object)*(((s1_ptr)_2)->base + _i_49615);
                Ref(_this_warn_49617);

                /** cominit.e:500						integer auto_add_warn = 0*/
                _auto_add_warn_49619 = 0;

                /** cominit.e:501						if this_warn[1] = '+' then*/
                _2 = (object)SEQ_PTR(_this_warn_49617);
                _25658 = (object)*(((s1_ptr)_2)->base + 1);
                if (binary_op_a(NOTEQ, _25658, 43)){
                    _25658 = NOVALUE;
                    goto L13; // [429] 449
                }
                _25658 = NOVALUE;

                /** cominit.e:502							auto_add_warn = 1*/
                _auto_add_warn_49619 = 1;

                /** cominit.e:503							this_warn = this_warn[2 .. $]*/
                if (IS_SEQUENCE(_this_warn_49617)){
                        _25660 = SEQ_PTR(_this_warn_49617)->length;
                }
                else {
                    _25660 = 1;
                }
                rhs_slice_target = (object_ptr)&_this_warn_49617;
                RHS_Slice(_this_warn_49617, 2, _25660);
L13: 

                /** cominit.e:505						integer n = find(this_warn, warning_names)*/
                _n_49625 = find_from(_this_warn_49617, _39warning_names_16859, 1);

                /** cominit.e:506						if n != 0 then*/
                if (_n_49625 == 0)
                goto L14; // [460] 533

                /** cominit.e:507							if auto_add_warn or option_w = -1 then*/
                if (_auto_add_warn_49619 != 0) {
                    goto L15; // [466] 479
                }
                _25665 = (_option_w_49534 == -1);
                if (_25665 == 0)
                {
                    DeRef(_25665);
                    _25665 = NOVALUE;
                    goto L16; // [475] 501
                }
                else{
                    DeRef(_25665);
                    _25665 = NOVALUE;
                }
L15: 

                /** cominit.e:508								OpWarning = and_bits(OpWarning, not_bits(warning_flags[n]))*/
                _2 = (object)SEQ_PTR(_39warning_flags_16857);
                _25666 = (object)*(((s1_ptr)_2)->base + _n_49625);
                _25667 = not_bits(_25666);
                _25666 = NOVALUE;
                if (IS_ATOM_INT(_25667)) {
                    {uintptr_t tu;
                         tu = (uintptr_t)_39OpWarning_16882 & (uintptr_t)_25667;
                         _39OpWarning_16882 = MAKE_UINT(tu);
                    }
                }
                else {
                    temp_d.dbl = (eudouble)_39OpWarning_16882;
                    _39OpWarning_16882 = Dand_bits(&temp_d, DBL_PTR(_25667));
                }
                DeRef(_25667);
                _25667 = NOVALUE;
                if (!IS_ATOM_INT(_39OpWarning_16882)) {
                    _1 = (object)(DBL_PTR(_39OpWarning_16882)->dbl);
                    DeRefDS(_39OpWarning_16882);
                    _39OpWarning_16882 = _1;
                }
                goto L17; // [498] 523
L16: 

                /** cominit.e:510								option_w = -1*/
                _option_w_49534 = -1;

                /** cominit.e:511								OpWarning = all_warning_flag - warning_flags[n]*/
                _2 = (object)SEQ_PTR(_39warning_flags_16857);
                _25669 = (object)*(((s1_ptr)_2)->base + _n_49625);
                _39OpWarning_16882 = 32767 - _25669;
                _25669 = NOVALUE;
L17: 

                /** cominit.e:514							prev_OpWarning = OpWarning*/
                _39prev_OpWarning_16883 = _39OpWarning_16882;
L14: 
                DeRef(_this_warn_49617);
                _this_warn_49617 = NOVALUE;

                /** cominit.e:516					end for*/
                _i_49615 = _i_49615 + 1;
                goto L11; // [537] 410
L12: 
                ;
            }
            goto L5; // [542] 782

            /** cominit.e:518				case "wf" then*/
            case 12:

            /** cominit.e:519					TempWarningName = val*/
            Ref(_val_49540);
            DeRef(_39TempWarningName_16829);
            _39TempWarningName_16829 = _val_49540;

            /** cominit.e:520				  	error:warning_file(TempWarningName)*/
            Ref(_39TempWarningName_16829);
            _8warning_file(_39TempWarningName_16829);
            goto L5; // [560] 782

            /** cominit.e:522				case "v", "version" then*/
            case 13:
            case 14:

            /** cominit.e:523					show_banner()*/
            _51show_banner();

            /** cominit.e:524					if not batch_job and not test_only then*/
            _25671 = (_39batch_job_16828 == 0);
            if (_25671 == 0) {
                goto L18; // [579] 632
            }
            _25673 = (_39test_only_16827 == 0);
            if (_25673 == 0)
            {
                DeRef(_25673);
                _25673 = NOVALUE;
                goto L18; // [589] 632
            }
            else{
                DeRef(_25673);
                _25673 = NOVALUE;
            }

            /** cominit.e:525						console:maybe_any_key(GetMsgText(278,0), 2)*/
            RefDS(_21928);
            _25674 = _44GetMsgText(278, 0, _21928);
            DeRef(_prompt_inlined_maybe_any_key_at_615_49660);
            _prompt_inlined_maybe_any_key_at_615_49660 = _25674;
            _25674 = NOVALUE;

            /** console.e:923		if not has_console() then*/

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661 = machine(99, 0);
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661 != 0){
                    goto L19; // [614] 629
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661)->dbl != 0.0){
                    goto L19; // [614] 629
                }
            }

            /** console.e:924			any_key(prompt, con)*/
            Ref(_prompt_inlined_maybe_any_key_at_615_49660);
            _29any_key(_prompt_inlined_maybe_any_key_at_615_49660, 2);

            /** console.e:926	end procedure*/
            goto L19; // [626] 629
L19: 
            DeRef(_prompt_inlined_maybe_any_key_at_615_49660);
            _prompt_inlined_maybe_any_key_at_615_49660 = NOVALUE;
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49661 = NOVALUE;
L18: 

            /** cominit.e:528					abort(0)*/
            UserCleanup(0);
            goto L5; // [636] 782

            /** cominit.e:530				case "copyright" then*/
            case 15:

            /** cominit.e:531					show_copyrights()*/
            _51show_copyrights();

            /** cominit.e:532					if not batch_job and not test_only then*/
            _25675 = (_39batch_job_16828 == 0);
            if (_25675 == 0) {
                goto L1A; // [653] 706
            }
            _25677 = (_39test_only_16827 == 0);
            if (_25677 == 0)
            {
                DeRef(_25677);
                _25677 = NOVALUE;
                goto L1A; // [663] 706
            }
            else{
                DeRef(_25677);
                _25677 = NOVALUE;
            }

            /** cominit.e:533						console:maybe_any_key(GetMsgText(278,0), 2)*/
            RefDS(_21928);
            _25678 = _44GetMsgText(278, 0, _21928);
            DeRef(_prompt_inlined_maybe_any_key_at_689_49672);
            _prompt_inlined_maybe_any_key_at_689_49672 = _25678;
            _25678 = NOVALUE;

            /** console.e:923		if not has_console() then*/

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673 = machine(99, 0);
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673 != 0){
                    goto L1B; // [688] 703
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673)->dbl != 0.0){
                    goto L1B; // [688] 703
                }
            }

            /** console.e:924			any_key(prompt, con)*/
            Ref(_prompt_inlined_maybe_any_key_at_689_49672);
            _29any_key(_prompt_inlined_maybe_any_key_at_689_49672, 2);

            /** console.e:926	end procedure*/
            goto L1B; // [700] 703
L1B: 
            DeRef(_prompt_inlined_maybe_any_key_at_689_49672);
            _prompt_inlined_maybe_any_key_at_689_49672 = NOVALUE;
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49673 = NOVALUE;
L1A: 

            /** cominit.e:535					abort(0)*/
            UserCleanup(0);
            goto L5; // [710] 782

            /** cominit.e:537				case "eudir" then*/
            case 16:

            /** cominit.e:538					set_eudir( val )*/
            Ref(_val_49540);
            _36set_eudir(_val_49540);
            goto L5; // [721] 782

            /** cominit.e:540				case "trace-lines" then*/
            case 17:

            /** cominit.e:541					val = value( val )*/
            Ref(_val_49540);
            _0 = _val_49540;
            _val_49540 = _18value(_val_49540, 1, _18GET_SHORT_ANSWER_4548);
            DeRef(_0);

            /** cominit.e:542					if val[1] = GET_SUCCESS then*/
            _2 = (object)SEQ_PTR(_val_49540);
            _25680 = (object)*(((s1_ptr)_2)->base + 1);
            if (binary_op_a(NOTEQ, _25680, 0)){
                _25680 = NOVALUE;
                goto L1C; // [745] 763
            }
            _25680 = NOVALUE;

            /** cominit.e:543						trace_lines = floor( val[2] )*/
            _2 = (object)SEQ_PTR(_val_49540);
            _25682 = (object)*(((s1_ptr)_2)->base + 2);
            if (IS_ATOM_INT(_25682))
            _39trace_lines_63876 = e_floor(_25682);
            else
            _39trace_lines_63876 = unary_op(FLOOR, _25682);
            _25682 = NOVALUE;
            if (!IS_ATOM_INT(_39trace_lines_63876)) {
                _1 = (object)(DBL_PTR(_39trace_lines_63876)->dbl);
                DeRefDS(_39trace_lines_63876);
                _39trace_lines_63876 = _1;
            }
            goto L1D; // [760] 781
L1C: 

            /** cominit.e:545						puts(2, GetMsgText( BAD_TRACE_LINES ) )*/
            RefDS(_21928);
            _25684 = _44GetMsgText(604, 1, _21928);
            EPuts(2, _25684); // DJP 
            DeRef(_25684);
            _25684 = NOVALUE;

            /** cominit.e:546						abort( 1 )*/
            UserCleanup(1);
L1D: 
        ;}L5: 
        DeRef(_key_49538);
        _key_49538 = NOVALUE;
        DeRef(_val_49540);
        _val_49540 = NOVALUE;

        /** cominit.e:549		end for*/
        _idx_49536 = _idx_49536 + 1;
        goto L1; // [786] 27
L2: 
        ;
    }

    /** cominit.e:551		if length(LocalizeQual) = 0 then*/
    if (IS_SEQUENCE(_36LocalizeQual_15423)){
            _25685 = SEQ_PTR(_36LocalizeQual_15423)->length;
    }
    else {
        _25685 = 1;
    }
    if (_25685 != 0)
    goto L1E; // [798] 811

    /** cominit.e:552			LocalizeQual = {"en"}*/
    _0 = _36LocalizeQual_15423;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_25687);
    ((intptr_t*)_2)[1] = _25687;
    _36LocalizeQual_15423 = MAKE_SEQ(_1);
    DeRefDS(_0);
L1E: 

    /** cominit.e:554	end procedure*/
    DeRef(_opts_49531);
    DeRef(_opt_keys_49532);
    DeRef(_25671);
    _25671 = NOVALUE;
    DeRef(_25675);
    _25675 = NOVALUE;
    return;
    ;
}


void _51finalize_command_line(object _opts_49699)
{
    object _extras_49706 = NOVALUE;
    object _pairs_49711 = NOVALUE;
    object _pair_49716 = NOVALUE;
    object _25717 = NOVALUE;
    object _25715 = NOVALUE;
    object _25712 = NOVALUE;
    object _25711 = NOVALUE;
    object _25710 = NOVALUE;
    object _25709 = NOVALUE;
    object _25708 = NOVALUE;
    object _25707 = NOVALUE;
    object _25706 = NOVALUE;
    object _25705 = NOVALUE;
    object _25704 = NOVALUE;
    object _25703 = NOVALUE;
    object _25702 = NOVALUE;
    object _25701 = NOVALUE;
    object _25700 = NOVALUE;
    object _25699 = NOVALUE;
    object _25698 = NOVALUE;
    object _25697 = NOVALUE;
    object _25696 = NOVALUE;
    object _25695 = NOVALUE;
    object _25693 = NOVALUE;
    object _25690 = NOVALUE;
    object _0, _1, _2;
    

    /** cominit.e:562		if Strict_is_on then -- overrides any -W/-X switches*/
    if (_39Strict_is_on_16880 == 0)
    {
        goto L1; // [5] 27
    }
    else{
    }

    /** cominit.e:563			OpWarning = all_warning_flag*/
    _39OpWarning_16882 = 32767;

    /** cominit.e:564			prev_OpWarning = OpWarning*/
    _39prev_OpWarning_16883 = 32767;
L1: 

    /** cominit.e:569		sequence extras = m:get(opts, cmdline:EXTRAS)*/
    Ref(_opts_49699);
    RefDS(_28EXTRAS_14176);
    _0 = _extras_49706;
    _extras_49706 = _30get(_opts_49699, _28EXTRAS_14176, 0);
    DeRef(_0);

    /** cominit.e:570		if length(extras) > 0 then*/
    if (IS_SEQUENCE(_extras_49706)){
            _25690 = SEQ_PTR(_extras_49706)->length;
    }
    else {
        _25690 = 1;
    }
    if (_25690 <= 0)
    goto L2; // [44] 270

    /** cominit.e:571			sequence pairs = m:pairs( opts )*/
    Ref(_opts_49699);
    _0 = _pairs_49711;
    _pairs_49711 = _30pairs(_opts_49699, 0);
    DeRef(_0);

    /** cominit.e:573			for i = 1 to length( pairs ) do*/
    if (IS_SEQUENCE(_pairs_49711)){
            _25693 = SEQ_PTR(_pairs_49711)->length;
    }
    else {
        _25693 = 1;
    }
    {
        object _i_49714;
        _i_49714 = 1;
L3: 
        if (_i_49714 > _25693){
            goto L4; // [62] 237
        }

        /** cominit.e:574				sequence pair = pairs[i]*/
        DeRef(_pair_49716);
        _2 = (object)SEQ_PTR(_pairs_49711);
        _pair_49716 = (object)*(((s1_ptr)_2)->base + _i_49714);
        Ref(_pair_49716);

        /** cominit.e:575				if equal( pair[1], cmdline:EXTRAS ) then*/
        _2 = (object)SEQ_PTR(_pair_49716);
        _25695 = (object)*(((s1_ptr)_2)->base + 1);
        if (_25695 == _28EXTRAS_14176)
        _25696 = 1;
        else if (IS_ATOM_INT(_25695) && IS_ATOM_INT(_28EXTRAS_14176))
        _25696 = 0;
        else
        _25696 = (compare(_25695, _28EXTRAS_14176) == 0);
        _25695 = NOVALUE;
        if (_25696 == 0)
        {
            _25696 = NOVALUE;
            goto L5; // [89] 99
        }
        else{
            _25696 = NOVALUE;
        }

        /** cominit.e:576					continue*/
        DeRefDS(_pair_49716);
        _pair_49716 = NOVALUE;
        goto L6; // [96] 232
L5: 

        /** cominit.e:578				pair[1] = prepend( pair[1], '-' )*/
        _2 = (object)SEQ_PTR(_pair_49716);
        _25697 = (object)*(((s1_ptr)_2)->base + 1);
        Prepend(&_25698, _25697, 45);
        _25697 = NOVALUE;
        _2 = (object)SEQ_PTR(_pair_49716);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pair_49716 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25698;
        if( _1 != _25698 ){
            DeRef(_1);
        }
        _25698 = NOVALUE;

        /** cominit.e:579				if sequence( pair[2] ) then*/
        _2 = (object)SEQ_PTR(_pair_49716);
        _25699 = (object)*(((s1_ptr)_2)->base + 2);
        _25700 = IS_SEQUENCE(_25699);
        _25699 = NOVALUE;
        if (_25700 == 0)
        {
            _25700 = NOVALUE;
            goto L7; // [122] 215
        }
        else{
            _25700 = NOVALUE;
        }

        /** cominit.e:580					if length( pair[2] ) and sequence( pair[2][1] ) then*/
        _2 = (object)SEQ_PTR(_pair_49716);
        _25701 = (object)*(((s1_ptr)_2)->base + 2);
        if (IS_SEQUENCE(_25701)){
                _25702 = SEQ_PTR(_25701)->length;
        }
        else {
            _25702 = 1;
        }
        _25701 = NOVALUE;
        if (_25702 == 0) {
            goto L8; // [134] 203
        }
        _2 = (object)SEQ_PTR(_pair_49716);
        _25704 = (object)*(((s1_ptr)_2)->base + 2);
        _2 = (object)SEQ_PTR(_25704);
        _25705 = (object)*(((s1_ptr)_2)->base + 1);
        _25704 = NOVALUE;
        _25706 = IS_SEQUENCE(_25705);
        _25705 = NOVALUE;
        if (_25706 == 0)
        {
            _25706 = NOVALUE;
            goto L8; // [150] 203
        }
        else{
            _25706 = NOVALUE;
        }

        /** cominit.e:581						for j = 1 to length( pair[2] ) do*/
        _2 = (object)SEQ_PTR(_pair_49716);
        _25707 = (object)*(((s1_ptr)_2)->base + 2);
        if (IS_SEQUENCE(_25707)){
                _25708 = SEQ_PTR(_25707)->length;
        }
        else {
            _25708 = 1;
        }
        _25707 = NOVALUE;
        {
            object _j_49734;
            _j_49734 = 1;
L9: 
            if (_j_49734 > _25708){
                goto LA; // [162] 200
            }

            /** cominit.e:582							switches &= { pair[1], pair[2][j] }*/
            _2 = (object)SEQ_PTR(_pair_49716);
            _25709 = (object)*(((s1_ptr)_2)->base + 1);
            _2 = (object)SEQ_PTR(_pair_49716);
            _25710 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_25710);
            _25711 = (object)*(((s1_ptr)_2)->base + _j_49734);
            _25710 = NOVALUE;
            Ref(_25711);
            Ref(_25709);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _25709;
            ((intptr_t *)_2)[2] = _25711;
            _25712 = MAKE_SEQ(_1);
            _25711 = NOVALUE;
            _25709 = NOVALUE;
            Concat((object_ptr)&_51switches_49055, _51switches_49055, _25712);
            DeRefDS(_25712);
            _25712 = NOVALUE;

            /** cominit.e:583						end for*/
            _j_49734 = _j_49734 + 1;
            goto L9; // [195] 169
LA: 
            ;
        }
        goto LB; // [200] 228
L8: 

        /** cominit.e:585						switches &= pair*/
        Concat((object_ptr)&_51switches_49055, _51switches_49055, _pair_49716);
        goto LB; // [212] 228
L7: 

        /** cominit.e:588					switches = append( switches, pair[1] )*/
        _2 = (object)SEQ_PTR(_pair_49716);
        _25715 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_25715);
        Append(&_51switches_49055, _51switches_49055, _25715);
        _25715 = NOVALUE;
LB: 
        DeRef(_pair_49716);
        _pair_49716 = NOVALUE;

        /** cominit.e:590			end for*/
L6: 
        _i_49714 = _i_49714 + 1;
        goto L3; // [232] 69
L4: 
        ;
    }

    /** cominit.e:592			Argv = Argv[2..3] & extras*/
    rhs_slice_target = (object_ptr)&_25717;
    RHS_Slice(_39Argv_16826, 2, 3);
    Concat((object_ptr)&_39Argv_16826, _25717, _extras_49706);
    DeRefDS(_25717);
    _25717 = NOVALUE;
    DeRef(_25717);
    _25717 = NOVALUE;

    /** cominit.e:593			Argc = length(Argv)*/
    if (IS_SEQUENCE(_39Argv_16826)){
            _39Argc_16825 = SEQ_PTR(_39Argv_16826)->length;
    }
    else {
        _39Argc_16825 = 1;
    }

    /** cominit.e:595			src_name = extras[1]*/
    DeRef(_51src_name_49054);
    _2 = (object)SEQ_PTR(_extras_49706);
    _51src_name_49054 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_51src_name_49054);
L2: 
    DeRef(_pairs_49711);
    _pairs_49711 = NOVALUE;

    /** cominit.e:597	end procedure*/
    DeRef(_opts_49699);
    DeRef(_extras_49706);
    _25707 = NOVALUE;
    _25701 = NOVALUE;
    return;
    ;
}



// 0xAEF67ECA
