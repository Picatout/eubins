// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _47add_options(object _new_options_49243)
{
// skipping _25496  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_options pc: 3 op: STARTLINE (58)

    /** cominit.e:65		options = splice(options, new_options, COMMON_OPTIONS_SPLICE_IDX)*/
    // SubProg add_options pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_options pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_options pc: 9 op: SPLICE (190)
    {
        s1_ptr assign_space;
        insert_pos = 16;
        if (insert_pos <= 0) {
            Concat(&_47options_49239,_new_options_49243,_47options_49239);
        }
        else if (insert_pos > SEQ_PTR(_47options_49239)->length){
            Concat(&_47options_49239,_47options_49239,_new_options_49243);
        }
        else if (IS_SEQUENCE(_new_options_49243)) {
            if( _47options_49239 != _47options_49239 || SEQ_PTR( _47options_49239 )->ref != 1 ){
                DeRef( _47options_49239 );
                RefDS( _47options_49239 );
            }
            assign_space = Add_internal_space( _47options_49239, insert_pos,((s1_ptr)SEQ_PTR(_new_options_49243))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_new_options_49243), _47options_49239 == _47options_49239 );
            _47options_49239 = MAKE_SEQ( assign_space );
        }
        else {
            if( _47options_49239 != _47options_49239 && SEQ_PTR( _47options_49239 )->ref != 1 ){
                _47options_49239 = Insert( _47options_49239, _new_options_49243, insert_pos);
            }
            else {
                DeRef( _47options_49239 );
                RefDS( _47options_49239 );
                _47options_49239 = Insert( _47options_49239, _new_options_49243, insert_pos);
            }
        }
    }
    // SubProg add_options pc: 14 op: STARTLINE (58)

    /** cominit.e:67	end procedure*/
    // SubProg add_options pc: 16 op: RETURNP (29)

// Exiting block BLOCK: add_options

// block var new_options_49243
    DeRefDS(_new_options_49243);
    return;
    // SubProg add_options pc: 19 op: BADRETURNF (43)
    ;
}


object _47get_options()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_options pc: 1 op: STARTLINE (58)

    /** cominit.e:73		return options*/
    // SubProg get_options pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_options pc: 5 op: RETURNF (28)
    RefDS(_47options_49239);

// Exiting block BLOCK: get_options
    return _47options_49239;
    // SubProg get_options pc: 9 op: BADRETURNF (43)
    ;
}


object _47get_switches()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_switches pc: 1 op: STARTLINE (58)

    /** cominit.e:87		return switches*/
    // SubProg get_switches pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_switches pc: 5 op: RETURNF (28)
    RefDS(_47switches_49128);

// Exiting block BLOCK: get_switches
    return _47switches_49128;
    // SubProg get_switches pc: 9 op: BADRETURNF (43)
    ;
}


void _47show_copyrights()
{
    object _notices_49253 = NOVALUE;
    object _25506 = NOVALUE; // 49267 25506
    object _25505 = NOVALUE; // 49266 25505
    object _25503 = NOVALUE; // 49264 25503
    object _25502 = NOVALUE; // 49263 25502
    object _25501 = NOVALUE; // 49261 25501
    object _25500 = NOVALUE; // 49260 25500
    object _25498 = NOVALUE; // 49258 25498
// skipping _25497  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_copyrights pc: 1 op: STARTLINE (58)

    /** cominit.e:94		sequence notices = all_copyrights()*/
    // SubProg show_copyrights pc: 3 op: PROC (27)
    _0 = _notices_49253;
    _notices_49253 = _32all_copyrights();
    DeRef(_0);
    // SubProg show_copyrights pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg show_copyrights pc: 8 op: STARTLINE (58)

    /** cominit.e:95		for i = 1 to length(notices) do*/
    // SubProg show_copyrights pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_notices_49253)){
            _25498 = SEQ_PTR(_notices_49253)->length;
    }
    else {
        _25498 = 1;
    }
    // SubProg show_copyrights pc: 13 op: FOR_I (125)
    {
        object _i_49257;
        _i_49257 = 1;
L1: // addr: 20 pc: 13 sub: 49251 op: 125
        if (_i_49257 > _25498){
            goto L2; // [13] 60
        }
        // SubProg show_copyrights pc: 20 op: STARTLINE (58)

        /** cominit.e:96			printf(2, "%s\n  %s\n\n", { notices[i][1], match_replace("\n", notices[i][2], "\n  ") })*/
        // SubProg show_copyrights pc: 22 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_notices_49253);
        _25500 = (object)*(((s1_ptr)_2)->base + _i_49257);
        // SubProg show_copyrights pc: 26 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25500);
        _25501 = (object)*(((s1_ptr)_2)->base + 1);
        _25500 = NOVALUE;
        // SubProg show_copyrights pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_notices_49253);
        _25502 = (object)*(((s1_ptr)_2)->base + _i_49257);
        // SubProg show_copyrights pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25502);
        _25503 = (object)*(((s1_ptr)_2)->base + 2);
        _25502 = NOVALUE;
        // SubProg show_copyrights pc: 38 op: PROC (27)
        RefDS(_22165);
        Ref(_25503);
        RefDS(_25504);
        _25505 = _22match_replace(_22165, _25503, _25504, 0);
        _25503 = NOVALUE;
        // SubProg show_copyrights pc: 45 op: RIGHT_BRACE_2 (85)
        Ref(_25501);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25501;
        ((intptr_t *)_2)[2] = _25505;
        _25506 = MAKE_SEQ(_1);
        _25505 = NOVALUE;
        _25501 = NOVALUE;
        // SubProg show_copyrights pc: 49 op: PRINTF (38)
        EPrintf(2, _25499, _25506);
        DeRefDS(_25506);
        _25506 = NOVALUE;
        // SubProg show_copyrights pc: 53 op: STARTLINE (58)

        /** cominit.e:97		end for*/
        // SubProg show_copyrights pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_49257 = _i_49257 + 1;
        goto L1; // [55] 20
L2: // addr: 60 pc: 55 sub: 49251 op: 54
        ;
    }
    // SubProg show_copyrights pc: 60 op: STARTLINE (58)

    /** cominit.e:98	end procedure*/
    // SubProg show_copyrights pc: 62 op: RETURNP (29)

// Exiting block BLOCK: show_copyrights

// block var notices_49253
    DeRef(_notices_49253);
    return;
    // SubProg show_copyrights pc: 65 op: BADRETURNF (43)
    ;
}


void _47show_banner()
{
    object _version_type_inlined_version_type_at_210_49321 = NOVALUE;
    object _version_string_short_1__tmp_at194_49319 = NOVALUE;
    object _version_string_short_inlined_version_string_short_at_194_49318 = NOVALUE;
    object _version_revision_inlined_version_revision_at_125_49300 = NOVALUE;
    object _platform_name_inlined_platform_name_at_86_49292 = NOVALUE;
    object _prod_name_49270 = NOVALUE;
    object _memory_type_49271 = NOVALUE;
    object _misc_info_49289 = NOVALUE;
    object _EuConsole_49304 = NOVALUE;
    object _25531 = NOVALUE; // 49324 25531
    object _25530 = NOVALUE; // 49323 25530
    object _25529 = NOVALUE; // 49322 25529
// skipping _25527  name type: 0
    object _25526 = NOVALUE; // 49311 25526
    object _25525 = NOVALUE; // 49309 25525
// skipping _25523  name type: 0
    object _25521 = NOVALUE; // 49303 25521
    object _25520 = NOVALUE; // 49302 25520
    object _25519 = NOVALUE; // 49301 25519
    object _25517 = NOVALUE; // 49297 25517
// skipping _25516  name type: 0
    object _25515 = NOVALUE; // 49294 25515
    object _25514 = NOVALUE; // 49293 25514
    object _25513 = NOVALUE; // 49290 25513
// skipping _25512  name type: 0
// skipping _25511  name type: 0
// skipping _25510  name type: 0
// skipping _25509  name type: 0
    object _25508 = NOVALUE; // 49276 25508
    object _25507 = NOVALUE; // 49274 25507
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_banner pc: 1 op: STARTLINE (58)

    /** cominit.e:109		if INTERPRET and not BIND then*/
    // SubProg show_banner pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 5 op: SC1_AND_IF (146)
    if (_5INTERPRET_12094 == 0) {
        goto L1; // [5] 31
    }
    // SubProg show_banner pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 11 op: NOT (7)
    _25508 = (_5BIND_12100 == 0);
    // SubProg show_banner pc: 14 op: NOP1 (159)
    // SubProg show_banner pc: 15 op: IF (20)
    if (_25508 == 0)
    {
        DeRef(_25508);
        _25508 = NOVALUE;
        goto L1; // [15] 31
    }
    else{
        DeRef(_25508);
        _25508 = NOVALUE;
    }
    // SubProg show_banner pc: 18 op: STARTLINE (58)

    /** cominit.e:110			prod_name = GetMsgText(270,0)*/
    // SubProg show_banner pc: 20 op: PROC (27)
    RefDS(_21958);
    _0 = _prod_name_49270;
    _prod_name_49270 = _40GetMsgText(270, 0, _21958);
    DeRef(_0);
    // SubProg show_banner pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 28 op: ELSE (23)
    goto L2; // [28] 70
    // SubProg show_banner pc: 30 op: NOP1 (159)
L1: // addr: 31 pc: 30 sub: 49268 op: 159
    // SubProg show_banner pc: 31 op: STARTLINE (58)

    /** cominit.e:112		elsif TRANSLATE then*/
    // SubProg show_banner pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 35 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L3; // [35] 51
    }
    else{
    }
    // SubProg show_banner pc: 38 op: STARTLINE (58)

    /** cominit.e:113			prod_name = GetMsgText(271,0)*/
    // SubProg show_banner pc: 40 op: PROC (27)
    RefDS(_21958);
    _0 = _prod_name_49270;
    _prod_name_49270 = _40GetMsgText(271, 0, _21958);
    DeRef(_0);
    // SubProg show_banner pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 48 op: ELSE (23)
    goto L2; // [48] 70
    // SubProg show_banner pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 49268 op: 159
    // SubProg show_banner pc: 51 op: STARTLINE (58)

    /** cominit.e:115		elsif BIND then*/
    // SubProg show_banner pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 55 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L4; // [55] 69
    }
    else{
    }
    // SubProg show_banner pc: 58 op: STARTLINE (58)

    /** cominit.e:116			prod_name = GetMsgText(272,0)*/
    // SubProg show_banner pc: 60 op: PROC (27)
    RefDS(_21958);
    _0 = _prod_name_49270;
    _prod_name_49270 = _40GetMsgText(272, 0, _21958);
    DeRef(_0);
    // SubProg show_banner pc: 66 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 49268 op: 159
    // SubProg show_banner pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 49268 op: 159
    // SubProg show_banner pc: 70 op: STARTLINE (58)

    /** cominit.e:119		ifdef EU_MANAGED_MEM then*/
    // SubProg show_banner pc: 72 op: STARTLINE (58)

    /** cominit.e:122			memory_type = GetMsgText(274,0)*/
    // SubProg show_banner pc: 74 op: PROC (27)
    RefDS(_21958);
    _0 = _memory_type_49271;
    _memory_type_49271 = _40GetMsgText(274, 0, _21958);
    DeRef(_0);
    // SubProg show_banner pc: 80 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 82 op: STARTLINE (58)

    /** cominit.e:125		sequence misc_info = {*/
    // SubProg show_banner pc: 84 op: PROC (27)
    _25513 = _32arch_bits();
    // SubProg show_banner pc: 87 op: STARTLINE (58)

    /** info.e:48		ifdef WINDOWS then*/
    // SubProg show_banner pc: 89 op: STARTLINE (58)

    /** info.e:51			return "Linux"*/
    // SubProg show_banner pc: 91 op: ASSIGN (18)
    RefDS(_6714);
    DeRefi(_platform_name_inlined_platform_name_at_86_49292);
    _platform_name_inlined_platform_name_at_86_49292 = _6714;
    // SubProg show_banner pc: 94 op: NOP1 (159)
    // SubProg show_banner pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg show_banner pc: 97 op: PROC (27)
    _25514 = _32version_date(0);
    // SubProg show_banner pc: 101 op: PROC (27)
    _25515 = _32version_node(0);
    // SubProg show_banner pc: 105 op: RIGHT_BRACE_N (31)
    _0 = _misc_info_49289;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25513;
    RefDS(_platform_name_inlined_platform_name_at_86_49292);
    ((intptr_t*)_2)[2] = _platform_name_inlined_platform_name_at_86_49292;
    RefDS(_memory_type_49271);
    ((intptr_t*)_2)[3] = _memory_type_49271;
    RefDS(_21958);
    ((intptr_t*)_2)[4] = _21958;
    ((intptr_t*)_2)[5] = _25514;
    ((intptr_t*)_2)[6] = _25515;
    _misc_info_49289 = MAKE_SEQ(_1);
    DeRef(_0);
    _25515 = NOVALUE;
    _25514 = NOVALUE;
    _25513 = NOVALUE;
    // SubProg show_banner pc: 114 op: STARTLINE (58)

    /** cominit.e:134		if info:is_developmental then*/
    // SubProg show_banner pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 118 op: IF (20)
    if (_32is_developmental_12620 == 0)
    {
        goto L5; // [118] 152
    }
    else{
    }
    // SubProg show_banner pc: 121 op: STARTLINE (58)

    /** cominit.e:135			misc_info[$] = sprintf("%d:%s", { info:version_revision(), info:version_node() })*/
    // SubProg show_banner pc: 123 op: LENGTH (42)
    // Known sequence length:
    _25517 = 6;
    // SubProg show_banner pc: 126 op: STARTLINE (58)

    /** info.e:157		return version_info[REVISION]*/
    // SubProg show_banner pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 130 op: RHS_SUBS_CHECK (92)
    DeRef(_version_revision_inlined_version_revision_at_125_49300);
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _version_revision_inlined_version_revision_at_125_49300 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_125_49300);
    // SubProg show_banner pc: 134 op: NOP1 (159)
    // SubProg show_banner pc: 135 op: PROC (27)
    _25519 = _32version_node(0);
    // SubProg show_banner pc: 139 op: RIGHT_BRACE_2 (85)
    Ref(_version_revision_inlined_version_revision_at_125_49300);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _version_revision_inlined_version_revision_at_125_49300;
    ((intptr_t *)_2)[2] = _25519;
    _25520 = MAKE_SEQ(_1);
    _25519 = NOVALUE;
    // SubProg show_banner pc: 143 op: SPRINTF (53)
    _25521 = EPrintf(-9999999, _25518, _25520);
    DeRefDS(_25520);
    _25520 = NOVALUE;
    // SubProg show_banner pc: 147 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_misc_info_49289);
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25521;
    if( _1 != _25521 ){
        DeRef(_1);
    }
    _25521 = NOVALUE;
    // SubProg show_banner pc: 151 op: NOP1 (159)
L5: // addr: 152 pc: 151 sub: 49268 op: 159
    // SubProg show_banner pc: 152 op: STARTLINE (58)

    /** cominit.e:138		object EuConsole = getenv("EUCONS")*/
    // SubProg show_banner pc: 154 op: GETENV (91)
    DeRefi(_EuConsole_49304);
    _EuConsole_49304 = EGetEnv(_25522);
    // SubProg show_banner pc: 157 op: STARTLINE (58)

    /** cominit.e:139		if equal(EuConsole, "1") then*/
    // SubProg show_banner pc: 159 op: EQUAL (153)
    if (_EuConsole_49304 == _25524)
    _25525 = 1;
    else if (IS_ATOM_INT(_EuConsole_49304) && IS_ATOM_INT(_25524))
    _25525 = 0;
    else
    _25525 = (compare(_EuConsole_49304, _25524) == 0);
    // SubProg show_banner pc: 163 op: IF (20)
    if (_25525 == 0)
    {
        _25525 = NOVALUE;
        goto L6; // [163] 181
    }
    else{
        _25525 = NOVALUE;
    }
    // SubProg show_banner pc: 166 op: STARTLINE (58)

    /** cominit.e:140			misc_info[4] = GetMsgText(275,0)*/
    // SubProg show_banner pc: 168 op: PROC (27)
    RefDS(_21958);
    _25526 = _40GetMsgText(275, 0, _21958);
    // SubProg show_banner pc: 174 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_misc_info_49289);
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25526;
    if( _1 != _25526 ){
        DeRef(_1);
    }
    _25526 = NOVALUE;
    // SubProg show_banner pc: 178 op: ELSE (23)
    goto L7; // [178] 189
    // SubProg show_banner pc: 180 op: NOP1 (159)
L6: // addr: 181 pc: 180 sub: 49268 op: 159
    // SubProg show_banner pc: 181 op: STARTLINE (58)

    /** cominit.e:142			misc_info = remove(misc_info, 4)*/
    // SubProg show_banner pc: 183 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_misc_info_49289);
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
                Head( SEQ_PTR(_misc_info_49289), start, &_misc_info_49289 );
            }
            else Tail(SEQ_PTR(_misc_info_49289), stop+1, &_misc_info_49289);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_misc_info_49289), start, &_misc_info_49289);
        }
        else {
            assign_slice_seq = &assign_space;
            _misc_info_49289 = Remove_elements(start, stop, (SEQ_PTR(_misc_info_49289)->ref == 1));
        }
    }
    // SubProg show_banner pc: 188 op: NOP1 (159)
L7: // addr: 189 pc: 188 sub: 49268 op: 159
    // SubProg show_banner pc: 189 op: STARTLINE (58)

    /** cominit.e:145		screen_output(STDERR, sprintf("%s v%s %s\n   %s %s, %s\n   Revision Date: %s, Id: %s\n", {*/
    // SubProg show_banner pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 193 op: PRIVATE_INIT_CHECK (30)
    // SubProg show_banner pc: 195 op: STARTLINE (58)

    /** info.e:261		return sprintf("%d.%d.%d", version_info[MAJ_VER..PAT_VER])*/
    // SubProg show_banner pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 199 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_version_string_short_1__tmp_at194_49319;
    RHS_Slice(_32version_info_12618, 1, 3);
    // SubProg show_banner pc: 204 op: SPRINTF (53)
    DeRefi(_version_string_short_inlined_version_string_short_at_194_49318);
    _version_string_short_inlined_version_string_short_at_194_49318 = EPrintf(-9999999, _6955, _version_string_short_1__tmp_at194_49319);
    // SubProg show_banner pc: 208 op: NOP1 (159)
    // SubProg show_banner pc: 209 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-version_string_short from show_banner @ 194

// block var version_string_short_1__tmp_at194_49319
    DeRef(_version_string_short_1__tmp_at194_49319);
    _version_string_short_1__tmp_at194_49319 = NOVALUE;
    // SubProg show_banner pc: 211 op: STARTLINE (58)

    /** info.e:202		return version_info[VER_TYPE]*/
    // SubProg show_banner pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 215 op: RHS_SUBS_CHECK (92)
    DeRef(_version_type_inlined_version_type_at_210_49321);
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _version_type_inlined_version_type_at_210_49321 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_version_type_inlined_version_type_at_210_49321);
    // SubProg show_banner pc: 219 op: NOP1 (159)
    // SubProg show_banner pc: 220 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_prod_name_49270);
    ((intptr_t*)_2)[1] = _prod_name_49270;
    RefDS(_version_string_short_inlined_version_string_short_at_194_49318);
    ((intptr_t*)_2)[2] = _version_string_short_inlined_version_string_short_at_194_49318;
    Ref(_version_type_inlined_version_type_at_210_49321);
    ((intptr_t*)_2)[3] = _version_type_inlined_version_type_at_210_49321;
    _25529 = MAKE_SEQ(_1);
    // SubProg show_banner pc: 226 op: CONCAT (15)
    Concat((object_ptr)&_25530, _25529, _misc_info_49289);
    DeRefDS(_25529);
    _25529 = NOVALUE;
    DeRef(_25529);
    _25529 = NOVALUE;
    // SubProg show_banner pc: 230 op: SPRINTF (53)
    _25531 = EPrintf(-9999999, _25528, _25530);
    DeRefDS(_25530);
    _25530 = NOVALUE;
    // SubProg show_banner pc: 234 op: PROC (27)
    _49screen_output(2, _25531);
    _25531 = NOVALUE;
    // SubProg show_banner pc: 238 op: STARTLINE (58)

    /** cominit.e:147	end procedure*/
    // SubProg show_banner pc: 240 op: RETURNP (29)

// Exiting block BLOCK: show_banner

// block var prod_name_49270
    DeRefDS(_prod_name_49270);

// block var memory_type_49271
    DeRef(_memory_type_49271);

// block var misc_info_49289
    DeRefDS(_misc_info_49289);

// block var EuConsole_49304
    DeRefi(_EuConsole_49304);
    return;
    // SubProg show_banner pc: 243 op: BADRETURNF (43)
    ;
}


object _47find_opt(object _name_type_49333, object _opt_49334, object _opts_49335)
{
    object _o_49339 = NOVALUE;
    object _has_case_49341 = NOVALUE;
    object _25544 = NOVALUE; // 49355 25544
    object _25543 = NOVALUE; // 49354 25543
    object _25542 = NOVALUE; // 49353 25542
    object _25541 = NOVALUE; // 49352 25541
    object _25540 = NOVALUE; // 49351 25540
    object _25539 = NOVALUE; // 49350 25539
    object _25538 = NOVALUE; // 49348 25538
    object _25537 = NOVALUE; // 49347 25537
    object _25536 = NOVALUE; // 49346 25536
// skipping _25535  name type: 0
    object _25534 = NOVALUE; // 49343 25534
// skipping _25533  name type: 0
    object _25532 = NOVALUE; // 49338 25532
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg find_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 7 op: STARTLINE (58)

    /** cominit.e:172		for i = 1 to length(opts) do*/
    // SubProg find_opt pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_49335)){
            _25532 = SEQ_PTR(_opts_49335)->length;
    }
    else {
        _25532 = 1;
    }
    // SubProg find_opt pc: 12 op: FOR_I (125)
    {
        object _i_49337;
        _i_49337 = 1;
L1: // addr: 19 pc: 12 sub: 49331 op: 125
        if (_i_49337 > _25532){
            goto L2; // [12] 113
        }
        // SubProg find_opt pc: 19 op: STARTLINE (58)

        /** cominit.e:173			sequence o = opts[i]		*/
        // SubProg find_opt pc: 21 op: RHS_SUBS (25)
        DeRef(_o_49339);
        _2 = (object)SEQ_PTR(_opts_49335);
        _o_49339 = (object)*(((s1_ptr)_2)->base + _i_49337);
        Ref(_o_49339);
        // SubProg find_opt pc: 25 op: SEQUENCE_CHECK (97)
        // SubProg find_opt pc: 27 op: STARTLINE (58)

        /** cominit.e:174			integer has_case = find(HAS_CASE, o[OPTIONS])*/
        // SubProg find_opt pc: 29 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_opt pc: 31 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49339);
        _25534 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg find_opt pc: 35 op: FIND_FROM (176)
        _has_case_49341 = find_from(99, _25534, 1);
        _25534 = NOVALUE;
        // SubProg find_opt pc: 40 op: STARTLINE (58)

        /** cominit.e:176			if has_case and equal(o[name_type], opt) then*/
        // SubProg find_opt pc: 42 op: SC1_AND_IF (146)
        if (_has_case_49341 == 0) {
            goto L3; // [42] 67
        }
        // SubProg find_opt pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49339);
        _25537 = (object)*(((s1_ptr)_2)->base + _name_type_49333);
        // SubProg find_opt pc: 50 op: EQUAL (153)
        if (_25537 == _opt_49334)
        _25538 = 1;
        else if (IS_ATOM_INT(_25537) && IS_ATOM_INT(_opt_49334))
        _25538 = 0;
        else
        _25538 = (compare(_25537, _opt_49334) == 0);
        _25537 = NOVALUE;
        // SubProg find_opt pc: 54 op: NOP1 (159)
        // SubProg find_opt pc: 55 op: IF (20)
        if (_25538 == 0)
        {
            _25538 = NOVALUE;
            goto L3; // [55] 67
        }
        else{
            _25538 = NOVALUE;
        }
        // SubProg find_opt pc: 58 op: STARTLINE (58)

        /** cominit.e:177				return o*/
        // SubProg find_opt pc: 60 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var has_case_49341

// Exiting block BLOCK: find_opt

// block var name_type_49333

// block var opt_49334
        DeRefDS(_opt_49334);

// block var opts_49335
        DeRefDS(_opts_49335);
        return _o_49339;
        // SubProg find_opt pc: 64 op: ELSE (23)
        goto L4; // [64] 104
        // SubProg find_opt pc: 66 op: NOP1 (159)
L3: // addr: 67 pc: 66 sub: 49331 op: 159
        // SubProg find_opt pc: 67 op: STARTLINE (58)

        /** cominit.e:178			elsif not has_case and equal(text:lower(o[name_type]), text:lower(opt)) then*/
        // SubProg find_opt pc: 69 op: NOT (7)
        _25539 = (_has_case_49341 == 0);
        // SubProg find_opt pc: 72 op: SC1_AND_IF (146)
        if (_25539 == 0) {
            goto L5; // [72] 103
        }
        // SubProg find_opt pc: 76 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49339);
        _25541 = (object)*(((s1_ptr)_2)->base + _name_type_49333);
        // SubProg find_opt pc: 80 op: PROC (27)
        Ref(_25541);
        _25542 = _20lower(_25541);
        _25541 = NOVALUE;
        // SubProg find_opt pc: 84 op: PROC (27)
        RefDS(_opt_49334);
        _25543 = _20lower(_opt_49334);
        // SubProg find_opt pc: 88 op: EQUAL (153)
        if (_25542 == _25543)
        _25544 = 1;
        else if (IS_ATOM_INT(_25542) && IS_ATOM_INT(_25543))
        _25544 = 0;
        else
        _25544 = (compare(_25542, _25543) == 0);
        DeRef(_25542);
        _25542 = NOVALUE;
        DeRef(_25543);
        _25543 = NOVALUE;
        // SubProg find_opt pc: 92 op: NOP1 (159)
        // SubProg find_opt pc: 93 op: IF (20)
        if (_25544 == 0)
        {
            _25544 = NOVALUE;
            goto L5; // [93] 103
        }
        else{
            _25544 = NOVALUE;
        }
        // SubProg find_opt pc: 96 op: STARTLINE (58)

        /** cominit.e:179				return o*/
        // SubProg find_opt pc: 98 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var has_case_49341

// Exiting block BLOCK: find_opt

// block var name_type_49333

// block var opt_49334
        DeRefDS(_opt_49334);

// block var opts_49335
        DeRefDS(_opts_49335);
        DeRef(_25539);
        _25539 = NOVALUE;
        return _o_49339;
        // SubProg find_opt pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 49331 op: 159
        // SubProg find_opt pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 49331 op: 159
        // SubProg find_opt pc: 104 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var o_49339
        DeRef(_o_49339);
        _o_49339 = NOVALUE;

// block var has_case_49341
        // SubProg find_opt pc: 106 op: STARTLINE (58)

        /** cominit.e:181		end for*/
        // SubProg find_opt pc: 108 op: ENDFOR_INT_UP1 (54)
        _i_49337 = _i_49337 + 1;
        goto L1; // [108] 19
L2: // addr: 113 pc: 108 sub: 49331 op: 54
        ;
    }
    // SubProg find_opt pc: 113 op: STARTLINE (58)

    /** cominit.e:183		return {}*/
    // SubProg find_opt pc: 115 op: RETURNF (28)
    RefDS(_21958);

// Exiting block BLOCK: find_opt

// block var name_type_49333

// block var opt_49334
    DeRefDS(_opt_49334);

// block var opts_49335
    DeRefDS(_opts_49335);
    DeRef(_25539);
    _25539 = NOVALUE;
    return _21958;
    // SubProg find_opt pc: 119 op: BADRETURNF (43)
    ;
}


object _47merge_parameters(object _a_49358, object _b_49359, object _opts_49360, object _dedupe_49361)
{
    object _i_49362 = NOVALUE;
    object _opt_49366 = NOVALUE;
    object _this_opt_49372 = NOVALUE;
    object _bi_49373 = NOVALUE;
    object _beginLen_49433 = NOVALUE;
    object _first_extra_49455 = NOVALUE;
    object _opt_49459 = NOVALUE;
    object _this_opt_49464 = NOVALUE;
    object _25638 = NOVALUE; // 49494 25638
    object _25637 = NOVALUE; // 49493 25637
// skipping _25636  name type: 0
// skipping _25635  name type: 0
    object _25634 = NOVALUE; // 49488 25634
    object _25633 = NOVALUE; // 49487 25633
    object _25632 = NOVALUE; // 49484 25632
// skipping _25631  name type: 0
    object _25630 = NOVALUE; // 49481 25630
    object _25629 = NOVALUE; // 49480 25629
    object _25628 = NOVALUE; // 49479 25628
    object _25627 = NOVALUE; // 49478 25627
// skipping _25626  name type: 0
    object _25625 = NOVALUE; // 49476 25625
    object _25624 = NOVALUE; // 49475 25624
// skipping _25623  name type: 0
    object _25622 = NOVALUE; // 49472 25622
    object _25621 = NOVALUE; // 49471 25621
    object _25620 = NOVALUE; // 49470 25620
    object _25619 = NOVALUE; // 49469 25619
    object _25618 = NOVALUE; // 49468 25618
    object _25617 = NOVALUE; // 49467 25617
    object _25616 = NOVALUE; // 49466 25616
// skipping _25615  name type: 0
    object _25614 = NOVALUE; // 49462 25614
// skipping _25613  name type: 0
// skipping _25612  name type: 0
    object _25611 = NOVALUE; // 49457 25611
    object _25610 = NOVALUE; // 49454 25610
// skipping _25609  name type: 0
// skipping _25608  name type: 0
// skipping _25607  name type: 0
// skipping _25606  name type: 0
    object _25605 = NOVALUE; // 49446 25605
// skipping _25604  name type: 0
    object _25603 = NOVALUE; // 49443 25603
    object _25602 = NOVALUE; // 49442 25602
    object _25601 = NOVALUE; // 49441 25601
    object _25600 = NOVALUE; // 49440 25600
    object _25599 = NOVALUE; // 49439 25599
    object _25598 = NOVALUE; // 49438 25598
    object _25597 = NOVALUE; // 49437 25597
    object _25596 = NOVALUE; // 49436 25596
// skipping _25595  name type: 0
// skipping _25594  name type: 0
// skipping _25593  name type: 0
    object _25592 = NOVALUE; // 49428 25592
    object _25591 = NOVALUE; // 49427 25591
    object _25590 = NOVALUE; // 49426 25590
    object _25589 = NOVALUE; // 49422 25589
    object _25588 = NOVALUE; // 49421 25588
    object _25587 = NOVALUE; // 49420 25587
    object _25586 = NOVALUE; // 49418 25586
    object _25585 = NOVALUE; // 49417 25585
    object _25584 = NOVALUE; // 49415 25584
    object _25583 = NOVALUE; // 49414 25583
    object _25582 = NOVALUE; // 49413 25582
    object _25581 = NOVALUE; // 49412 25581
    object _25580 = NOVALUE; // 49411 25580
    object _25579 = NOVALUE; // 49410 25579
    object _25578 = NOVALUE; // 49409 25578
// skipping _25577  name type: 0
    object _25576 = NOVALUE; // 49407 25576
    object _25575 = NOVALUE; // 49406 25575
    object _25574 = NOVALUE; // 49405 25574
    object _25573 = NOVALUE; // 49404 25573
    object _25572 = NOVALUE; // 49403 25572
    object _25571 = NOVALUE; // 49402 25571
    object _25570 = NOVALUE; // 49401 25570
    object _25569 = NOVALUE; // 49399 25569
// skipping _25568  name type: 0
    object _25567 = NOVALUE; // 49395 25567
    object _25566 = NOVALUE; // 49394 25566
    object _25565 = NOVALUE; // 49393 25565
    object _25564 = NOVALUE; // 49392 25564
// skipping _25563  name type: 0
    object _25562 = NOVALUE; // 49390 25562
    object _25561 = NOVALUE; // 49389 25561
    object _25560 = NOVALUE; // 49387 25560
    object _25559 = NOVALUE; // 49386 25559
    object _25558 = NOVALUE; // 49385 25558
    object _25557 = NOVALUE; // 49384 25557
    object _25556 = NOVALUE; // 49382 25556
// skipping _25555  name type: 0
    object _25554 = NOVALUE; // 49378 25554
    object _25553 = NOVALUE; // 49377 25553
// skipping _25552  name type: 0
    object _25551 = NOVALUE; // 49375 25551
// skipping _25550  name type: 0
// skipping _25549  name type: 0
    object _25548 = NOVALUE; // 49369 25548
// skipping _25547  name type: 0
// skipping _25546  name type: 0
    object _25545 = NOVALUE; // 49364 25545
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg merge_parameters pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 7 op: INTEGER_CHECK (96)
    // SubProg merge_parameters pc: 9 op: STARTLINE (58)

    /** cominit.e:199		integer i = 1*/
    // SubProg merge_parameters pc: 11 op: ASSIGN_I (113)
    _i_49362 = 1;
    // SubProg merge_parameters pc: 14 op: STARTLINE (58)

    /** cominit.e:201		while i <= length(a) do*/
    // SubProg merge_parameters pc: 16 op: NOP2 (110)
    // SubProg merge_parameters pc: 18 op: NOPWHILE (158)
L1: // addr: 19 pc: 18 sub: 49356 op: 158
    // SubProg merge_parameters pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49358)){
            _25545 = SEQ_PTR(_a_49358)->length;
    }
    else {
        _25545 = 1;
    }
    // SubProg merge_parameters pc: 22 op: LESSEQ_IFW_I (123)
    if (_i_49362 > _25545)
    goto L2; // [22] 465
    // SubProg merge_parameters pc: 26 op: STARTLINE (58)

    /** cominit.e:202			sequence opt = a[i]*/
    // SubProg merge_parameters pc: 28 op: RHS_SUBS (25)
    DeRef(_opt_49366);
    _2 = (object)SEQ_PTR(_a_49358);
    _opt_49366 = (object)*(((s1_ptr)_2)->base + _i_49362);
    Ref(_opt_49366);
    // SubProg merge_parameters pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 34 op: STARTLINE (58)

    /** cominit.e:203			if length(opt) < 2 then*/
    // SubProg merge_parameters pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49366)){
            _25548 = SEQ_PTR(_opt_49366)->length;
    }
    else {
        _25548 = 1;
    }
    // SubProg merge_parameters pc: 39 op: LESS_IFW_I (119)
    if (_25548 >= 2)
    goto L3; // [39] 56
    // SubProg merge_parameters pc: 43 op: STARTLINE (58)

    /** cominit.e:204				i += 1*/
    // SubProg merge_parameters pc: 45 op: PLUS1_I (117)
    _i_49362 = _i_49362 + 1;
    // SubProg merge_parameters pc: 49 op: STARTLINE (58)

    /** cominit.e:205				continue*/
    // SubProg merge_parameters pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49366
    DeRefDS(_opt_49366);
    _opt_49366 = NOVALUE;

// block var this_opt_49372
    DeRef(_this_opt_49372);
    _this_opt_49372 = NOVALUE;

// block var bi_49373
    // SubProg merge_parameters pc: 53 op: ELSE (23)
    goto L1; // [53] 19
    // SubProg merge_parameters pc: 55 op: NOP1 (159)
L3: // addr: 56 pc: 55 sub: 49356 op: 159
    // SubProg merge_parameters pc: 56 op: STARTLINE (58)

    /** cominit.e:208			sequence this_opt = {}*/
    // SubProg merge_parameters pc: 58 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_this_opt_49372);
    _this_opt_49372 = _21958;
    // SubProg merge_parameters pc: 61 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 63 op: STARTLINE (58)

    /** cominit.e:209			integer bi = 0*/
    // SubProg merge_parameters pc: 65 op: ASSIGN_I (113)
    _bi_49373 = 0;
    // SubProg merge_parameters pc: 68 op: STARTLINE (58)

    /** cominit.e:211			if opt[2] = '-' then*/
    // SubProg merge_parameters pc: 70 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49366);
    _25551 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg merge_parameters pc: 74 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25551, 45)){
        _25551 = NOVALUE;
        goto L4; // [74] 149
    }
    _25551 = NOVALUE;
    // SubProg merge_parameters pc: 78 op: STARTLINE (58)

    /** cominit.e:214				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    // SubProg merge_parameters pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49366)){
            _25553 = SEQ_PTR(_opt_49366)->length;
    }
    else {
        _25553 = 1;
    }
    // SubProg merge_parameters pc: 83 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25554;
    RHS_Slice(_opt_49366, 3, _25553);
    // SubProg merge_parameters pc: 88 op: PROC (27)
    RefDS(_opts_49360);
    _0 = _this_opt_49372;
    _this_opt_49372 = _47find_opt(2, _25554, _opts_49360);
    DeRefDS(_0);
    _25554 = NOVALUE;
    // SubProg merge_parameters pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 96 op: STARTLINE (58)

    /** cominit.e:216				for j = 1 to length(b) do*/
    // SubProg merge_parameters pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49359)){
            _25556 = SEQ_PTR(_b_49359)->length;
    }
    else {
        _25556 = 1;
    }
    // SubProg merge_parameters pc: 101 op: FOR_I (125)
    {
        object _j_49381;
        _j_49381 = 1;
L5: // addr: 108 pc: 101 sub: 49356 op: 125
        if (_j_49381 > _25556){
            goto L6; // [101] 146
        }
        // SubProg merge_parameters pc: 108 op: STARTLINE (58)

        /** cominit.e:217					if equal(text:lower(b[j]), text:lower(opt)) then*/
        // SubProg merge_parameters pc: 110 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49359);
        _25557 = (object)*(((s1_ptr)_2)->base + _j_49381);
        // SubProg merge_parameters pc: 114 op: PROC (27)
        Ref(_25557);
        _25558 = _20lower(_25557);
        _25557 = NOVALUE;
        // SubProg merge_parameters pc: 118 op: PROC (27)
        RefDS(_opt_49366);
        _25559 = _20lower(_opt_49366);
        // SubProg merge_parameters pc: 122 op: EQUAL (153)
        if (_25558 == _25559)
        _25560 = 1;
        else if (IS_ATOM_INT(_25558) && IS_ATOM_INT(_25559))
        _25560 = 0;
        else
        _25560 = (compare(_25558, _25559) == 0);
        DeRef(_25558);
        _25558 = NOVALUE;
        DeRef(_25559);
        _25559 = NOVALUE;
        // SubProg merge_parameters pc: 126 op: IF (20)
        if (_25560 == 0)
        {
            _25560 = NOVALUE;
            goto L7; // [126] 139
        }
        else{
            _25560 = NOVALUE;
        }
        // SubProg merge_parameters pc: 129 op: STARTLINE (58)

        /** cominit.e:218						bi = j*/
        // SubProg merge_parameters pc: 131 op: ASSIGN_I (113)
        _bi_49373 = _j_49381;
        // SubProg merge_parameters pc: 134 op: STARTLINE (58)

        /** cominit.e:219						exit*/
        // SubProg merge_parameters pc: 136 op: EXIT (61)
        goto L6; // [136] 146
        // SubProg merge_parameters pc: 138 op: NOP1 (159)
L7: // addr: 139 pc: 138 sub: 49356 op: 159
        // SubProg merge_parameters pc: 139 op: STARTLINE (58)

        /** cominit.e:221				end for*/
        // SubProg merge_parameters pc: 141 op: ENDFOR_INT_UP1 (54)
        _j_49381 = _j_49381 + 1;
        goto L5; // [141] 108
L6: // addr: 146 pc: 141 sub: 49356 op: 54
        ;
    }
    // SubProg merge_parameters pc: 146 op: ELSE (23)
    goto L8; // [146] 292
    // SubProg merge_parameters pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 49356 op: 159
    // SubProg merge_parameters pc: 149 op: STARTLINE (58)

    /** cominit.e:223			elsif opt[1] = '-' or opt[1] = '/' then*/
    // SubProg merge_parameters pc: 151 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49366);
    _25561 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 155 op: EQUALS (3)
    if (IS_ATOM_INT(_25561)) {
        _25562 = (_25561 == 45);
    }
    else {
        _25562 = binary_op(EQUALS, _25561, 45);
    }
    _25561 = NOVALUE;
    // SubProg merge_parameters pc: 159 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_25562)) {
        if (_25562 != 0) {
            goto L9; // [159] 176
        }
    }
    else {
        if (DBL_PTR(_25562)->dbl != 0.0) {
            goto L9; // [159] 176
        }
    }
    // SubProg merge_parameters pc: 163 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49366);
    _25564 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 167 op: EQUALS (3)
    if (IS_ATOM_INT(_25564)) {
        _25565 = (_25564 == 47);
    }
    else {
        _25565 = binary_op(EQUALS, _25564, 47);
    }
    _25564 = NOVALUE;
    // SubProg merge_parameters pc: 171 op: NOP1 (159)
    // SubProg merge_parameters pc: 172 op: IF (20)
    if (_25565 == 0) {
        DeRef(_25565);
        _25565 = NOVALUE;
        goto LA; // [172] 291
    }
    else {
        if (!IS_ATOM_INT(_25565) && DBL_PTR(_25565)->dbl == 0.0){
            DeRef(_25565);
            _25565 = NOVALUE;
            goto LA; // [172] 291
        }
        DeRef(_25565);
        _25565 = NOVALUE;
    }
    DeRef(_25565);
    _25565 = NOVALUE;
    // SubProg merge_parameters pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 49356 op: 159
    // SubProg merge_parameters pc: 176 op: STARTLINE (58)

    /** cominit.e:226				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    // SubProg merge_parameters pc: 178 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49366)){
            _25566 = SEQ_PTR(_opt_49366)->length;
    }
    else {
        _25566 = 1;
    }
    // SubProg merge_parameters pc: 181 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25567;
    RHS_Slice(_opt_49366, 2, _25566);
    // SubProg merge_parameters pc: 186 op: PROC (27)
    RefDS(_opts_49360);
    _0 = _this_opt_49372;
    _this_opt_49372 = _47find_opt(1, _25567, _opts_49360);
    DeRef(_0);
    _25567 = NOVALUE;
    // SubProg merge_parameters pc: 192 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 194 op: STARTLINE (58)

    /** cominit.e:228				for j = 1 to length(b) do*/
    // SubProg merge_parameters pc: 196 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49359)){
            _25569 = SEQ_PTR(_b_49359)->length;
    }
    else {
        _25569 = 1;
    }
    // SubProg merge_parameters pc: 199 op: FOR_I (125)
    {
        object _j_49398;
        _j_49398 = 1;
LB: // addr: 206 pc: 199 sub: 49356 op: 125
        if (_j_49398 > _25569){
            goto LC; // [199] 290
        }
        // SubProg merge_parameters pc: 206 op: STARTLINE (58)

        /** cominit.e:229					if equal(text:lower(b[j]), '-' & text:lower(opt[2..$])) or */
        // SubProg merge_parameters pc: 208 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49359);
        _25570 = (object)*(((s1_ptr)_2)->base + _j_49398);
        // SubProg merge_parameters pc: 212 op: PROC (27)
        Ref(_25570);
        _25571 = _20lower(_25570);
        _25570 = NOVALUE;
        // SubProg merge_parameters pc: 216 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_49366)){
                _25572 = SEQ_PTR(_opt_49366)->length;
        }
        else {
            _25572 = 1;
        }
        // SubProg merge_parameters pc: 219 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25573;
        RHS_Slice(_opt_49366, 2, _25572);
        // SubProg merge_parameters pc: 224 op: PROC (27)
        _25574 = _20lower(_25573);
        _25573 = NOVALUE;
        // SubProg merge_parameters pc: 228 op: CONCAT (15)
        if (IS_SEQUENCE(45) && IS_ATOM(_25574)) {
        }
        else if (IS_ATOM(45) && IS_SEQUENCE(_25574)) {
            Prepend(&_25575, _25574, 45);
        }
        else {
            Concat((object_ptr)&_25575, 45, _25574);
        }
        DeRef(_25574);
        _25574 = NOVALUE;
        // SubProg merge_parameters pc: 232 op: EQUAL (153)
        if (_25571 == _25575)
        _25576 = 1;
        else if (IS_ATOM_INT(_25571) && IS_ATOM_INT(_25575))
        _25576 = 0;
        else
        _25576 = (compare(_25571, _25575) == 0);
        DeRef(_25571);
        _25571 = NOVALUE;
        DeRefDS(_25575);
        _25575 = NOVALUE;
        // SubProg merge_parameters pc: 236 op: SC1_OR_IF (147)
        if (_25576 != 0) {
            goto LD; // [236] 273
        }
        // SubProg merge_parameters pc: 240 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49359);
        _25578 = (object)*(((s1_ptr)_2)->base + _j_49398);
        // SubProg merge_parameters pc: 244 op: PROC (27)
        Ref(_25578);
        _25579 = _20lower(_25578);
        _25578 = NOVALUE;
        // SubProg merge_parameters pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_49366)){
                _25580 = SEQ_PTR(_opt_49366)->length;
        }
        else {
            _25580 = 1;
        }
        // SubProg merge_parameters pc: 251 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25581;
        RHS_Slice(_opt_49366, 2, _25580);
        // SubProg merge_parameters pc: 256 op: PROC (27)
        _25582 = _20lower(_25581);
        _25581 = NOVALUE;
        // SubProg merge_parameters pc: 260 op: CONCAT (15)
        if (IS_SEQUENCE(47) && IS_ATOM(_25582)) {
        }
        else if (IS_ATOM(47) && IS_SEQUENCE(_25582)) {
            Prepend(&_25583, _25582, 47);
        }
        else {
            Concat((object_ptr)&_25583, 47, _25582);
        }
        DeRef(_25582);
        _25582 = NOVALUE;
        // SubProg merge_parameters pc: 264 op: EQUAL (153)
        if (_25579 == _25583)
        _25584 = 1;
        else if (IS_ATOM_INT(_25579) && IS_ATOM_INT(_25583))
        _25584 = 0;
        else
        _25584 = (compare(_25579, _25583) == 0);
        DeRef(_25579);
        _25579 = NOVALUE;
        DeRefDS(_25583);
        _25583 = NOVALUE;
        // SubProg merge_parameters pc: 268 op: NOP1 (159)
        // SubProg merge_parameters pc: 269 op: IF (20)
        if (_25584 == 0)
        {
            _25584 = NOVALUE;
            goto LE; // [269] 283
        }
        else{
            _25584 = NOVALUE;
        }
        // SubProg merge_parameters pc: 272 op: NOP1 (159)
LD: // addr: 273 pc: 272 sub: 49356 op: 159
        // SubProg merge_parameters pc: 273 op: STARTLINE (58)

        /** cominit.e:232						bi = j*/
        // SubProg merge_parameters pc: 275 op: ASSIGN_I (113)
        _bi_49373 = _j_49398;
        // SubProg merge_parameters pc: 278 op: STARTLINE (58)

        /** cominit.e:233						exit*/
        // SubProg merge_parameters pc: 280 op: EXIT (61)
        goto LC; // [280] 290
        // SubProg merge_parameters pc: 282 op: NOP1 (159)
LE: // addr: 283 pc: 282 sub: 49356 op: 159
        // SubProg merge_parameters pc: 283 op: STARTLINE (58)

        /** cominit.e:235				end for*/
        // SubProg merge_parameters pc: 285 op: ENDFOR_INT_UP1 (54)
        _j_49398 = _j_49398 + 1;
        goto LB; // [285] 206
LC: // addr: 290 pc: 285 sub: 49356 op: 54
        ;
    }
    // SubProg merge_parameters pc: 290 op: NOP1 (159)
LA: // addr: 291 pc: 290 sub: 49356 op: 159
    // SubProg merge_parameters pc: 291 op: NOP1 (159)
L8: // addr: 292 pc: 291 sub: 49356 op: 159
    // SubProg merge_parameters pc: 292 op: STARTLINE (58)

    /** cominit.e:243			if length(this_opt) and not find(MULTIPLE, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49372)){
            _25585 = SEQ_PTR(_this_opt_49372)->length;
    }
    else {
        _25585 = 1;
    }
    // SubProg merge_parameters pc: 297 op: SC1_AND_IF (146)
    if (_25585 == 0) {
        goto LF; // [297] 451
    }
    // SubProg merge_parameters pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 303 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49372);
    _25587 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 307 op: FIND_FROM (176)
    _25588 = find_from(42, _25587, 1);
    _25587 = NOVALUE;
    // SubProg merge_parameters pc: 312 op: NOT (7)
    _25589 = (_25588 == 0);
    _25588 = NOVALUE;
    // SubProg merge_parameters pc: 315 op: NOP1 (159)
    // SubProg merge_parameters pc: 316 op: IF (20)
    if (_25589 == 0)
    {
        DeRef(_25589);
        _25589 = NOVALUE;
        goto LF; // [316] 451
    }
    else{
        DeRef(_25589);
        _25589 = NOVALUE;
    }
    // SubProg merge_parameters pc: 319 op: STARTLINE (58)

    /** cominit.e:244				if bi then*/
    // SubProg merge_parameters pc: 321 op: IF (20)
    if (_bi_49373 == 0)
    {
        goto L10; // [321] 365
    }
    else{
    }
    // SubProg merge_parameters pc: 324 op: STARTLINE (58)

    /** cominit.e:245					if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 328 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49372);
    _25590 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 332 op: FIND_FROM (176)
    _25591 = find_from(112, _25590, 1);
    _25590 = NOVALUE;
    // SubProg merge_parameters pc: 337 op: IF (20)
    if (_25591 == 0)
    {
        _25591 = NOVALUE;
        goto L11; // [337] 354
    }
    else{
        _25591 = NOVALUE;
    }
    // SubProg merge_parameters pc: 340 op: STARTLINE (58)

    /** cominit.e:247						a = remove(a, i, i + 1)*/
    // SubProg merge_parameters pc: 342 op: PLUS1 (93)
    _25592 = _i_49362 + 1;
    if (_25592 > MAXINT){
        _25592 = NewDouble((eudouble)_25592);
    }
    // SubProg merge_parameters pc: 346 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_a_49358);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49362)) ? _i_49362 : (object)(DBL_PTR(_i_49362)->dbl);
        int stop = (IS_ATOM_INT(_25592)) ? _25592 : (object)(DBL_PTR(_25592)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49358), start, &_a_49358 );
            }
            else Tail(SEQ_PTR(_a_49358), stop+1, &_a_49358);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49358), start, &_a_49358);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49358 = Remove_elements(start, stop, (SEQ_PTR(_a_49358)->ref == 1));
        }
    }
    DeRef(_25592);
    _25592 = NOVALUE;
    // SubProg merge_parameters pc: 351 op: ELSE (23)
    goto L12; // [351] 458
    // SubProg merge_parameters pc: 353 op: NOP1 (159)
L11: // addr: 354 pc: 353 sub: 49356 op: 159
    // SubProg merge_parameters pc: 354 op: STARTLINE (58)

    /** cominit.e:250						a = remove(a, i)*/
    // SubProg merge_parameters pc: 356 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_a_49358);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49362)) ? _i_49362 : (object)(DBL_PTR(_i_49362)->dbl);
        int stop = (IS_ATOM_INT(_i_49362)) ? _i_49362 : (object)(DBL_PTR(_i_49362)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49358), start, &_a_49358 );
            }
            else Tail(SEQ_PTR(_a_49358), stop+1, &_a_49358);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49358), start, &_a_49358);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49358 = Remove_elements(start, stop, (SEQ_PTR(_a_49358)->ref == 1));
        }
    }
    // SubProg merge_parameters pc: 361 op: NOP1 (159)
    // SubProg merge_parameters pc: 362 op: ELSE (23)
    goto L12; // [362] 458
    // SubProg merge_parameters pc: 364 op: NOP1 (159)
L10: // addr: 365 pc: 364 sub: 49356 op: 159
    // SubProg merge_parameters pc: 365 op: STARTLINE (58)

    /** cominit.e:265					integer beginLen = length(a)*/
    // SubProg merge_parameters pc: 367 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49358)){
            _beginLen_49433 = SEQ_PTR(_a_49358)->length;
    }
    else {
        _beginLen_49433 = 1;
    }
    // SubProg merge_parameters pc: 370 op: STARTLINE (58)

    /** cominit.e:267					if dedupe = 0 and i < beginLen then*/
    // SubProg merge_parameters pc: 372 op: EQUALS (3)
    _25596 = (_dedupe_49361 == 0);
    // SubProg merge_parameters pc: 376 op: SC1_AND_IF (146)
    if (_25596 == 0) {
        goto L13; // [376] 438
    }
    // SubProg merge_parameters pc: 380 op: LESS (1)
    _25598 = (_i_49362 < _beginLen_49433);
    // SubProg merge_parameters pc: 384 op: NOP1 (159)
    // SubProg merge_parameters pc: 385 op: IF (20)
    if (_25598 == 0)
    {
        DeRef(_25598);
        _25598 = NOVALUE;
        goto L13; // [385] 438
    }
    else{
        DeRef(_25598);
        _25598 = NOVALUE;
    }
    // SubProg merge_parameters pc: 388 op: STARTLINE (58)

    /** cominit.e:268						a = merge_parameters( a[i + 1..$], a[1..i], opts, 1)*/
    // SubProg merge_parameters pc: 390 op: PLUS1 (93)
    _25599 = _i_49362 + 1;
    if (_25599 > MAXINT){
        _25599 = NewDouble((eudouble)_25599);
    }
    // SubProg merge_parameters pc: 394 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49358)){
            _25600 = SEQ_PTR(_a_49358)->length;
    }
    else {
        _25600 = 1;
    }
    // SubProg merge_parameters pc: 397 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25601;
    RHS_Slice(_a_49358, _25599, _25600);
    // SubProg merge_parameters pc: 402 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25602;
    RHS_Slice(_a_49358, 1, _i_49362);
    // SubProg merge_parameters pc: 407 op: ASSIGN (18)
    RefDS(_opts_49360);
    DeRef(_25603);
    _25603 = _opts_49360;
    // SubProg merge_parameters pc: 410 op: PROC (27)
    _0 = _a_49358;
    _a_49358 = _47merge_parameters(_25601, _25602, _25603, 1);
    DeRefDS(_0);
    _25601 = NOVALUE;
    _25602 = NOVALUE;
    _25603 = NOVALUE;
    // SubProg merge_parameters pc: 417 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 419 op: STARTLINE (58)

    /** cominit.e:270						if beginLen = length(a) then*/
    // SubProg merge_parameters pc: 421 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49358)){
            _25605 = SEQ_PTR(_a_49358)->length;
    }
    else {
        _25605 = 1;
    }
    // SubProg merge_parameters pc: 424 op: EQUALS_IFW_I (121)
    if (_beginLen_49433 != _25605)
    goto L14; // [424] 445
    // SubProg merge_parameters pc: 428 op: STARTLINE (58)

    /** cominit.e:272							i += 1*/
    // SubProg merge_parameters pc: 430 op: PLUS1_I (117)
    _i_49362 = _i_49362 + 1;
    // SubProg merge_parameters pc: 434 op: NOP1 (159)
    // SubProg merge_parameters pc: 435 op: ELSE (23)
    goto L14; // [435] 445
    // SubProg merge_parameters pc: 437 op: NOP1 (159)
L13: // addr: 438 pc: 437 sub: 49356 op: 159
    // SubProg merge_parameters pc: 438 op: STARTLINE (58)

    /** cominit.e:276						i += 1*/
    // SubProg merge_parameters pc: 440 op: PLUS1_I (117)
    _i_49362 = _i_49362 + 1;
    // SubProg merge_parameters pc: 444 op: NOP1 (159)
L14: // addr: 445 pc: 444 sub: 49356 op: 159
    // SubProg merge_parameters pc: 445 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var beginLen_49433
    // SubProg merge_parameters pc: 447 op: NOP1 (159)
    // SubProg merge_parameters pc: 448 op: ELSE (23)
    goto L12; // [448] 458
    // SubProg merge_parameters pc: 450 op: NOP1 (159)
LF: // addr: 451 pc: 450 sub: 49356 op: 159
    // SubProg merge_parameters pc: 451 op: STARTLINE (58)

    /** cominit.e:282				i += 1*/
    // SubProg merge_parameters pc: 453 op: PLUS1_I (117)
    _i_49362 = _i_49362 + 1;
    // SubProg merge_parameters pc: 457 op: NOP1 (159)
L12: // addr: 458 pc: 457 sub: 49356 op: 159
    // SubProg merge_parameters pc: 458 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49366
    DeRef(_opt_49366);
    _opt_49366 = NOVALUE;

// block var this_opt_49372
    DeRef(_this_opt_49372);
    _this_opt_49372 = NOVALUE;

// block var bi_49373
    // SubProg merge_parameters pc: 460 op: STARTLINE (58)

    /** cominit.e:284		end while*/
    // SubProg merge_parameters pc: 462 op: ENDWHILE (22)
    goto L1; // [462] 19
    // SubProg merge_parameters pc: 464 op: NOP1 (159)
L2: // addr: 465 pc: 464 sub: 49356 op: 159
    // SubProg merge_parameters pc: 465 op: STARTLINE (58)

    /** cominit.e:286		if dedupe then*/
    // SubProg merge_parameters pc: 467 op: IF (20)
    if (_dedupe_49361 == 0)
    {
        goto L15; // [467] 481
    }
    else{
    }
    // SubProg merge_parameters pc: 470 op: STARTLINE (58)

    /** cominit.e:287			return b & a*/
    // SubProg merge_parameters pc: 472 op: CONCAT (15)
    Concat((object_ptr)&_25610, _b_49359, _a_49358);
    // SubProg merge_parameters pc: 476 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49358
    DeRefDS(_a_49358);

// block var b_49359
    DeRefDS(_b_49359);

// block var opts_49360
    DeRefDS(_opts_49360);

// block var dedupe_49361

// block var i_49362

// block var first_extra_49455
    DeRef(_25599);
    _25599 = NOVALUE;
    DeRef(_25596);
    _25596 = NOVALUE;
    DeRef(_25562);
    _25562 = NOVALUE;
    return _25610;
    // SubProg merge_parameters pc: 480 op: NOP1 (159)
L15: // addr: 481 pc: 480 sub: 49356 op: 159
    // SubProg merge_parameters pc: 481 op: STARTLINE (58)

    /** cominit.e:290		integer first_extra = 0*/
    // SubProg merge_parameters pc: 483 op: ASSIGN_I (113)
    _first_extra_49455 = 0;
    // SubProg merge_parameters pc: 486 op: STARTLINE (58)

    /** cominit.e:292		i = 1*/
    // SubProg merge_parameters pc: 488 op: ASSIGN_I (113)
    _i_49362 = 1;
    // SubProg merge_parameters pc: 491 op: STARTLINE (58)

    /** cominit.e:295		while i <= length(b) do*/
    // SubProg merge_parameters pc: 493 op: NOP2 (110)
    // SubProg merge_parameters pc: 495 op: NOPWHILE (158)
L16: // addr: 496 pc: 495 sub: 49356 op: 158
    // SubProg merge_parameters pc: 496 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49359)){
            _25611 = SEQ_PTR(_b_49359)->length;
    }
    else {
        _25611 = 1;
    }
    // SubProg merge_parameters pc: 499 op: LESSEQ_IFW_I (123)
    if (_i_49362 > _25611)
    goto L17; // [499] 692
    // SubProg merge_parameters pc: 503 op: STARTLINE (58)

    /** cominit.e:296			sequence opt = b[i]*/
    // SubProg merge_parameters pc: 505 op: RHS_SUBS (25)
    DeRef(_opt_49459);
    _2 = (object)SEQ_PTR(_b_49359);
    _opt_49459 = (object)*(((s1_ptr)_2)->base + _i_49362);
    Ref(_opt_49459);
    // SubProg merge_parameters pc: 509 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 511 op: STARTLINE (58)

    /** cominit.e:299			if length(opt) <= 1 then*/
    // SubProg merge_parameters pc: 513 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49459)){
            _25614 = SEQ_PTR(_opt_49459)->length;
    }
    else {
        _25614 = 1;
    }
    // SubProg merge_parameters pc: 516 op: LESSEQ_IFW_I (123)
    if (_25614 > 1)
    goto L18; // [516] 532
    // SubProg merge_parameters pc: 520 op: STARTLINE (58)

    /** cominit.e:300				first_extra = i*/
    // SubProg merge_parameters pc: 522 op: ASSIGN_I (113)
    _first_extra_49455 = _i_49362;
    // SubProg merge_parameters pc: 525 op: STARTLINE (58)

    /** cominit.e:301				exit*/
    // SubProg merge_parameters pc: 527 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49459
    DeRefDS(_opt_49459);
    _opt_49459 = NOVALUE;

// block var this_opt_49464
    DeRef(_this_opt_49464);
    _this_opt_49464 = NOVALUE;
    // SubProg merge_parameters pc: 529 op: EXIT (61)
    goto L17; // [529] 692
    // SubProg merge_parameters pc: 531 op: NOP1 (159)
L18: // addr: 532 pc: 531 sub: 49356 op: 159
    // SubProg merge_parameters pc: 532 op: STARTLINE (58)

    /** cominit.e:304			sequence this_opt = {}*/
    // SubProg merge_parameters pc: 534 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_this_opt_49464);
    _this_opt_49464 = _21958;
    // SubProg merge_parameters pc: 537 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 539 op: STARTLINE (58)

    /** cominit.e:305			if opt[2] = '-' and opt[1] = '-' then*/
    // SubProg merge_parameters pc: 541 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49459);
    _25616 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg merge_parameters pc: 545 op: EQUALS (3)
    if (IS_ATOM_INT(_25616)) {
        _25617 = (_25616 == 45);
    }
    else {
        _25617 = binary_op(EQUALS, _25616, 45);
    }
    _25616 = NOVALUE;
    // SubProg merge_parameters pc: 549 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_25617)) {
        if (_25617 == 0) {
            goto L19; // [549] 586
        }
    }
    else {
        if (DBL_PTR(_25617)->dbl == 0.0) {
            goto L19; // [549] 586
        }
    }
    // SubProg merge_parameters pc: 553 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49459);
    _25619 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 557 op: EQUALS (3)
    if (IS_ATOM_INT(_25619)) {
        _25620 = (_25619 == 45);
    }
    else {
        _25620 = binary_op(EQUALS, _25619, 45);
    }
    _25619 = NOVALUE;
    // SubProg merge_parameters pc: 561 op: NOP1 (159)
    // SubProg merge_parameters pc: 562 op: IF (20)
    if (_25620 == 0) {
        DeRef(_25620);
        _25620 = NOVALUE;
        goto L19; // [562] 586
    }
    else {
        if (!IS_ATOM_INT(_25620) && DBL_PTR(_25620)->dbl == 0.0){
            DeRef(_25620);
            _25620 = NOVALUE;
            goto L19; // [562] 586
        }
        DeRef(_25620);
        _25620 = NOVALUE;
    }
    DeRef(_25620);
    _25620 = NOVALUE;
    // SubProg merge_parameters pc: 565 op: STARTLINE (58)

    /** cominit.e:306				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    // SubProg merge_parameters pc: 567 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49459)){
            _25621 = SEQ_PTR(_opt_49459)->length;
    }
    else {
        _25621 = 1;
    }
    // SubProg merge_parameters pc: 570 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25622;
    RHS_Slice(_opt_49459, 3, _25621);
    // SubProg merge_parameters pc: 575 op: PROC (27)
    RefDS(_opts_49360);
    _0 = _this_opt_49464;
    _this_opt_49464 = _47find_opt(2, _25622, _opts_49360);
    DeRef(_0);
    _25622 = NOVALUE;
    // SubProg merge_parameters pc: 581 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 583 op: ELSE (23)
    goto L1A; // [583] 633
    // SubProg merge_parameters pc: 585 op: NOP1 (159)
L19: // addr: 586 pc: 585 sub: 49356 op: 159
    // SubProg merge_parameters pc: 586 op: STARTLINE (58)

    /** cominit.e:307			elsif opt[1] = '-' or opt[1] = '/' then*/
    // SubProg merge_parameters pc: 588 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49459);
    _25624 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 592 op: EQUALS (3)
    if (IS_ATOM_INT(_25624)) {
        _25625 = (_25624 == 45);
    }
    else {
        _25625 = binary_op(EQUALS, _25624, 45);
    }
    _25624 = NOVALUE;
    // SubProg merge_parameters pc: 596 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_25625)) {
        if (_25625 != 0) {
            goto L1B; // [596] 613
        }
    }
    else {
        if (DBL_PTR(_25625)->dbl != 0.0) {
            goto L1B; // [596] 613
        }
    }
    // SubProg merge_parameters pc: 600 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49459);
    _25627 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 604 op: EQUALS (3)
    if (IS_ATOM_INT(_25627)) {
        _25628 = (_25627 == 47);
    }
    else {
        _25628 = binary_op(EQUALS, _25627, 47);
    }
    _25627 = NOVALUE;
    // SubProg merge_parameters pc: 608 op: NOP1 (159)
    // SubProg merge_parameters pc: 609 op: IF (20)
    if (_25628 == 0) {
        DeRef(_25628);
        _25628 = NOVALUE;
        goto L1C; // [609] 632
    }
    else {
        if (!IS_ATOM_INT(_25628) && DBL_PTR(_25628)->dbl == 0.0){
            DeRef(_25628);
            _25628 = NOVALUE;
            goto L1C; // [609] 632
        }
        DeRef(_25628);
        _25628 = NOVALUE;
    }
    DeRef(_25628);
    _25628 = NOVALUE;
    // SubProg merge_parameters pc: 612 op: NOP1 (159)
L1B: // addr: 613 pc: 612 sub: 49356 op: 159
    // SubProg merge_parameters pc: 613 op: STARTLINE (58)

    /** cominit.e:308				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    // SubProg merge_parameters pc: 615 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49459)){
            _25629 = SEQ_PTR(_opt_49459)->length;
    }
    else {
        _25629 = 1;
    }
    // SubProg merge_parameters pc: 618 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25630;
    RHS_Slice(_opt_49459, 2, _25629);
    // SubProg merge_parameters pc: 623 op: PROC (27)
    RefDS(_opts_49360);
    _0 = _this_opt_49464;
    _this_opt_49464 = _47find_opt(1, _25630, _opts_49360);
    DeRef(_0);
    _25630 = NOVALUE;
    // SubProg merge_parameters pc: 629 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 631 op: NOP1 (159)
L1C: // addr: 632 pc: 631 sub: 49356 op: 159
    // SubProg merge_parameters pc: 632 op: NOP1 (159)
L1A: // addr: 633 pc: 632 sub: 49356 op: 159
    // SubProg merge_parameters pc: 633 op: STARTLINE (58)

    /** cominit.e:311			if length(this_opt) then*/
    // SubProg merge_parameters pc: 635 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49464)){
            _25632 = SEQ_PTR(_this_opt_49464)->length;
    }
    else {
        _25632 = 1;
    }
    // SubProg merge_parameters pc: 638 op: IF (20)
    if (_25632 == 0)
    {
        _25632 = NOVALUE;
        goto L1D; // [638] 667
    }
    else{
        _25632 = NOVALUE;
    }
    // SubProg merge_parameters pc: 641 op: STARTLINE (58)

    /** cominit.e:312				if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 645 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49464);
    _25633 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 649 op: FIND_FROM (176)
    _25634 = find_from(112, _25633, 1);
    _25633 = NOVALUE;
    // SubProg merge_parameters pc: 654 op: IF (20)
    if (_25634 == 0)
    {
        _25634 = NOVALUE;
        goto L1E; // [654] 679
    }
    else{
        _25634 = NOVALUE;
    }
    // SubProg merge_parameters pc: 657 op: STARTLINE (58)

    /** cominit.e:313					i += 1*/
    // SubProg merge_parameters pc: 659 op: PLUS1_I (117)
    _i_49362 = _i_49362 + 1;
    // SubProg merge_parameters pc: 663 op: NOP1 (159)
    // SubProg merge_parameters pc: 664 op: ELSE (23)
    goto L1E; // [664] 679
    // SubProg merge_parameters pc: 666 op: NOP1 (159)
L1D: // addr: 667 pc: 666 sub: 49356 op: 159
    // SubProg merge_parameters pc: 667 op: STARTLINE (58)

    /** cominit.e:316				first_extra = i*/
    // SubProg merge_parameters pc: 669 op: ASSIGN_I (113)
    _first_extra_49455 = _i_49362;
    // SubProg merge_parameters pc: 672 op: STARTLINE (58)

    /** cominit.e:317				exit*/
    // SubProg merge_parameters pc: 674 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49459
    DeRef(_opt_49459);
    _opt_49459 = NOVALUE;

// block var this_opt_49464
    DeRef(_this_opt_49464);
    _this_opt_49464 = NOVALUE;
    // SubProg merge_parameters pc: 676 op: EXIT (61)
    goto L17; // [676] 692
    // SubProg merge_parameters pc: 678 op: NOP1 (159)
L1E: // addr: 679 pc: 678 sub: 49356 op: 159
    // SubProg merge_parameters pc: 679 op: STARTLINE (58)

    /** cominit.e:320			i += 1*/
    // SubProg merge_parameters pc: 681 op: PLUS1_I (117)
    _i_49362 = _i_49362 + 1;
    // SubProg merge_parameters pc: 685 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49459
    DeRef(_opt_49459);
    _opt_49459 = NOVALUE;

// block var this_opt_49464
    DeRef(_this_opt_49464);
    _this_opt_49464 = NOVALUE;
    // SubProg merge_parameters pc: 687 op: STARTLINE (58)

    /** cominit.e:321		end while*/
    // SubProg merge_parameters pc: 689 op: ENDWHILE (22)
    goto L16; // [689] 496
    // SubProg merge_parameters pc: 691 op: NOP1 (159)
L17: // addr: 692 pc: 691 sub: 49356 op: 159
    // SubProg merge_parameters pc: 692 op: STARTLINE (58)

    /** cominit.e:323		if first_extra then*/
    // SubProg merge_parameters pc: 694 op: IF (20)
    if (_first_extra_49455 == 0)
    {
        goto L1F; // [694] 709
    }
    else{
    }
    // SubProg merge_parameters pc: 697 op: STARTLINE (58)

    /** cominit.e:324			return splice(b, a, first_extra)*/
    // SubProg merge_parameters pc: 699 op: SPLICE (190)
    {
        s1_ptr assign_space;
        insert_pos = _first_extra_49455;
        if (insert_pos <= 0) {
            Concat(&_25637,_a_49358,_b_49359);
        }
        else if (insert_pos > SEQ_PTR(_b_49359)->length){
            Concat(&_25637,_b_49359,_a_49358);
        }
        else if (IS_SEQUENCE(_a_49358)) {
            if( _25637 != _b_49359 || SEQ_PTR( _b_49359 )->ref != 1 ){
                DeRef( _25637 );
                RefDS( _b_49359 );
            }
            assign_space = Add_internal_space( _b_49359, insert_pos,((s1_ptr)SEQ_PTR(_a_49358))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_a_49358), _b_49359 == _25637 );
            _25637 = MAKE_SEQ( assign_space );
        }
        else {
            if( _25637 != _b_49359 && SEQ_PTR( _b_49359 )->ref != 1 ){
                _25637 = Insert( _b_49359, _a_49358, insert_pos);
            }
            else {
                DeRef( _25637 );
                RefDS( _b_49359 );
                _25637 = Insert( _b_49359, _a_49358, insert_pos);
            }
        }
    }
    // SubProg merge_parameters pc: 704 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49358
    DeRefDS(_a_49358);

// block var b_49359
    DeRefDS(_b_49359);

// block var opts_49360
    DeRefDS(_opts_49360);

// block var dedupe_49361

// block var i_49362

// block var first_extra_49455
    DeRef(_25599);
    _25599 = NOVALUE;
    DeRef(_25625);
    _25625 = NOVALUE;
    DeRef(_25610);
    _25610 = NOVALUE;
    DeRef(_25596);
    _25596 = NOVALUE;
    DeRef(_25562);
    _25562 = NOVALUE;
    DeRef(_25617);
    _25617 = NOVALUE;
    return _25637;
    // SubProg merge_parameters pc: 708 op: NOP1 (159)
L1F: // addr: 709 pc: 708 sub: 49356 op: 159
    // SubProg merge_parameters pc: 709 op: STARTLINE (58)

    /** cominit.e:328		return b & a*/
    // SubProg merge_parameters pc: 711 op: CONCAT (15)
    Concat((object_ptr)&_25638, _b_49359, _a_49358);
    // SubProg merge_parameters pc: 715 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49358
    DeRefDS(_a_49358);

// block var b_49359
    DeRefDS(_b_49359);

// block var opts_49360
    DeRefDS(_opts_49360);

// block var dedupe_49361

// block var i_49362

// block var first_extra_49455
    DeRef(_25599);
    _25599 = NOVALUE;
    DeRef(_25625);
    _25625 = NOVALUE;
    DeRef(_25637);
    _25637 = NOVALUE;
    DeRef(_25610);
    _25610 = NOVALUE;
    DeRef(_25596);
    _25596 = NOVALUE;
    DeRef(_25562);
    _25562 = NOVALUE;
    DeRef(_25617);
    _25617 = NOVALUE;
    return _25638;
    // SubProg merge_parameters pc: 719 op: BADRETURNF (43)
    ;
}


object _47validate_opt(object _opt_type_49497, object _arg_49498, object _args_49499, object _ix_49500)
{
    object _opt_49501 = NOVALUE;
    object _this_opt_49509 = NOVALUE;
    object _25657 = NOVALUE; // 49531 25657
    object _25656 = NOVALUE; // 49530 25656
    object _25655 = NOVALUE; // 49528 25655
    object _25654 = NOVALUE; // 49527 25654
    object _25653 = NOVALUE; // 49525 25653
// skipping _25652  name type: 0
    object _25651 = NOVALUE; // 49521 25651
    object _25650 = NOVALUE; // 49520 25650
    object _25649 = NOVALUE; // 49518 25649
    object _25648 = NOVALUE; // 49517 25648
    object _25647 = NOVALUE; // 49514 25647
// skipping _25646  name type: 0
    object _25645 = NOVALUE; // 49512 25645
// skipping _25644  name type: 0
// skipping _25643  name type: 0
    object _25642 = NOVALUE; // 49507 25642
// skipping _25641  name type: 0
    object _25640 = NOVALUE; // 49504 25640
// skipping _25639  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg validate_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg validate_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 7 op: INTEGER_CHECK (96)
    // SubProg validate_opt pc: 9 op: STARTLINE (58)

    /** cominit.e:336		if opt_type = SHORTNAME then*/
    // SubProg validate_opt pc: 11 op: EQUALS_IFW_I (121)
    if (_opt_type_49497 != 1)
    goto L1; // [11] 28
    // SubProg validate_opt pc: 15 op: STARTLINE (58)

    /** cominit.e:337			opt = arg[2..$]*/
    // SubProg validate_opt pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49498)){
            _25640 = SEQ_PTR(_arg_49498)->length;
    }
    else {
        _25640 = 1;
    }
    // SubProg validate_opt pc: 20 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_opt_49501;
    RHS_Slice(_arg_49498, 2, _25640);
    // SubProg validate_opt pc: 25 op: ELSE (23)
    goto L2; // [25] 39
    // SubProg validate_opt pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 49495 op: 159
    // SubProg validate_opt pc: 28 op: STARTLINE (58)

    /** cominit.e:339			opt = arg[3..$]*/
    // SubProg validate_opt pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49498)){
            _25642 = SEQ_PTR(_arg_49498)->length;
    }
    else {
        _25642 = 1;
    }
    // SubProg validate_opt pc: 33 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_opt_49501;
    RHS_Slice(_arg_49498, 3, _25642);
    // SubProg validate_opt pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 49495 op: 159
    // SubProg validate_opt pc: 39 op: STARTLINE (58)

    /** cominit.e:342		sequence this_opt = find_opt( opt_type, opt, options )*/
    // SubProg validate_opt pc: 41 op: PRIVATE_INIT_CHECK (30)
    // SubProg validate_opt pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 45 op: PROC (27)
    RefDS(_opt_49501);
    RefDS(_47options_49239);
    _0 = _this_opt_49509;
    _this_opt_49509 = _47find_opt(_opt_type_49497, _opt_49501, _47options_49239);
    DeRef(_0);
    // SubProg validate_opt pc: 51 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 53 op: STARTLINE (58)

    /** cominit.e:343		if not length( this_opt ) then*/
    // SubProg validate_opt pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49509)){
            _25645 = SEQ_PTR(_this_opt_49509)->length;
    }
    else {
        _25645 = 1;
    }
    // SubProg validate_opt pc: 58 op: NOT_IFW (108)
    if (_25645 != 0)
    goto L3; // [58] 72
    _25645 = NOVALUE;
    // SubProg validate_opt pc: 61 op: STARTLINE (58)

    /** cominit.e:345			return { 0, 0 }*/
    // SubProg validate_opt pc: 63 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _25647 = MAKE_SEQ(_1);
    // SubProg validate_opt pc: 67 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49497

// block var arg_49498
    DeRefDS(_arg_49498);

// block var args_49499
    DeRefDS(_args_49499);

// block var ix_49500

// block var opt_49501
    DeRefDS(_opt_49501);

// block var this_opt_49509
    DeRefDS(_this_opt_49509);
    return _25647;
    // SubProg validate_opt pc: 71 op: NOP1 (159)
L3: // addr: 72 pc: 71 sub: 49495 op: 159
    // SubProg validate_opt pc: 72 op: STARTLINE (58)

    /** cominit.e:348		if find( HAS_PARAMETER, this_opt[OPTIONS] ) then*/
    // SubProg validate_opt pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49509);
    _25648 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg validate_opt pc: 80 op: FIND_FROM (176)
    _25649 = find_from(112, _25648, 1);
    _25648 = NOVALUE;
    // SubProg validate_opt pc: 85 op: IF (20)
    if (_25649 == 0)
    {
        _25649 = NOVALUE;
        goto L4; // [85] 135
    }
    else{
        _25649 = NOVALUE;
    }
    // SubProg validate_opt pc: 88 op: STARTLINE (58)

    /** cominit.e:349			if ix = length( args ) - 1 then*/
    // SubProg validate_opt pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49499)){
            _25650 = SEQ_PTR(_args_49499)->length;
    }
    else {
        _25650 = 1;
    }
    // SubProg validate_opt pc: 93 op: MINUS (10)
    _25651 = _25650 - 1;
    _25650 = NOVALUE;
    // SubProg validate_opt pc: 97 op: EQUALS_IFW (104)
    if (_ix_49500 != _25651)
    goto L5; // [97] 117
    // SubProg validate_opt pc: 101 op: STARTLINE (58)

    /** cominit.e:351				CompileErr( MISSING_CMD_PARAMETER, { arg } )*/
    // SubProg validate_opt pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 105 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_arg_49498);
    ((intptr_t*)_2)[1] = _arg_49498;
    _25653 = MAKE_SEQ(_1);
    // SubProg validate_opt pc: 109 op: PROC (27)
    _49CompileErr(353, _25653, 0);
    _25653 = NOVALUE;
    // SubProg validate_opt pc: 114 op: ELSE (23)
    goto L6; // [114] 150
    // SubProg validate_opt pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 49495 op: 159
    // SubProg validate_opt pc: 117 op: STARTLINE (58)

    /** cominit.e:353				return { ix, ix + 2 }*/
    // SubProg validate_opt pc: 119 op: PLUS (11)
    _25654 = _ix_49500 + 2;
    if ((object)((uintptr_t)_25654 + (uintptr_t)HIGH_BITS) >= 0){
        _25654 = NewDouble((eudouble)_25654);
    }
    // SubProg validate_opt pc: 123 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49500;
    ((intptr_t *)_2)[2] = _25654;
    _25655 = MAKE_SEQ(_1);
    _25654 = NOVALUE;
    // SubProg validate_opt pc: 127 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49497

// block var arg_49498
    DeRefDS(_arg_49498);

// block var args_49499
    DeRefDS(_args_49499);

// block var ix_49500

// block var opt_49501
    DeRef(_opt_49501);

// block var this_opt_49509
    DeRef(_this_opt_49509);
    DeRef(_25647);
    _25647 = NOVALUE;
    DeRef(_25651);
    _25651 = NOVALUE;
    return _25655;
    // SubProg validate_opt pc: 131 op: NOP1 (159)
    // SubProg validate_opt pc: 132 op: ELSE (23)
    goto L6; // [132] 150
    // SubProg validate_opt pc: 134 op: NOP1 (159)
L4: // addr: 135 pc: 134 sub: 49495 op: 159
    // SubProg validate_opt pc: 135 op: STARTLINE (58)

    /** cominit.e:356			return { ix, ix + 1 }*/
    // SubProg validate_opt pc: 137 op: PLUS1 (93)
    _25656 = _ix_49500 + 1;
    if (_25656 > MAXINT){
        _25656 = NewDouble((eudouble)_25656);
    }
    // SubProg validate_opt pc: 141 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49500;
    ((intptr_t *)_2)[2] = _25656;
    _25657 = MAKE_SEQ(_1);
    _25656 = NOVALUE;
    // SubProg validate_opt pc: 145 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49497

// block var arg_49498
    DeRefDS(_arg_49498);

// block var args_49499
    DeRefDS(_args_49499);

// block var ix_49500

// block var opt_49501
    DeRef(_opt_49501);

// block var this_opt_49509
    DeRef(_this_opt_49509);
    DeRef(_25647);
    _25647 = NOVALUE;
    DeRef(_25651);
    _25651 = NOVALUE;
    DeRef(_25655);
    _25655 = NOVALUE;
    return _25657;
    // SubProg validate_opt pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 49495 op: 159
    // SubProg validate_opt pc: 150 op: BADRETURNF (43)
    ;
}


object _47find_next_opt(object _ix_49534, object _args_49535)
{
    object _arg_49539 = NOVALUE;
    object _25679 = NOVALUE; // 49566 25679
    object _25678 = NOVALUE; // 49565 25678
// skipping _25677  name type: 0
    object _25676 = NOVALUE; // 49563 25676
    object _25675 = NOVALUE; // 49562 25675
    object _25674 = NOVALUE; // 49560 25674
    object _25673 = NOVALUE; // 49559 25673
    object _25672 = NOVALUE; // 49557 25672
    object _25671 = NOVALUE; // 49555 25671
    object _25670 = NOVALUE; // 49554 25670
    object _25669 = NOVALUE; // 49553 25669
// skipping _25668  name type: 0
    object _25667 = NOVALUE; // 49551 25667
// skipping _25666  name type: 0
    object _25665 = NOVALUE; // 49548 25665
// skipping _25664  name type: 0
    object _25663 = NOVALUE; // 49545 25663
// skipping _25662  name type: 0
    object _25661 = NOVALUE; // 49542 25661
// skipping _25660  name type: 0
// skipping _25659  name type: 0
    object _25658 = NOVALUE; // 49537 25658
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_next_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg find_next_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_next_opt pc: 5 op: STARTLINE (58)

    /** cominit.e:374		while ix < length( args ) do*/
    // SubProg find_next_opt pc: 7 op: NOP2 (110)
    // SubProg find_next_opt pc: 9 op: NOPWHILE (158)
L1: // addr: 10 pc: 9 sub: 49532 op: 158
    // SubProg find_next_opt pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49535)){
            _25658 = SEQ_PTR(_args_49535)->length;
    }
    else {
        _25658 = 1;
    }
    // SubProg find_next_opt pc: 13 op: LESS_IFW_I (119)
    if (_ix_49534 >= _25658)
    goto L2; // [13] 157
    // SubProg find_next_opt pc: 17 op: STARTLINE (58)

    /** cominit.e:375			sequence arg = args[ix]*/
    // SubProg find_next_opt pc: 19 op: RHS_SUBS (25)
    DeRef(_arg_49539);
    _2 = (object)SEQ_PTR(_args_49535);
    _arg_49539 = (object)*(((s1_ptr)_2)->base + _ix_49534);
    Ref(_arg_49539);
    // SubProg find_next_opt pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg find_next_opt pc: 25 op: STARTLINE (58)

    /** cominit.e:376			if length( arg ) > 1 then*/
    // SubProg find_next_opt pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49539)){
            _25661 = SEQ_PTR(_arg_49539)->length;
    }
    else {
        _25661 = 1;
    }
    // SubProg find_next_opt pc: 30 op: GREATER_IFW_I (124)
    if (_25661 <= 1)
    goto L3; // [30] 129
    // SubProg find_next_opt pc: 34 op: STARTLINE (58)

    /** cominit.e:377				if arg[1] = '-' then*/
    // SubProg find_next_opt pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_arg_49539);
    _25663 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_next_opt pc: 40 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25663, 45)){
        _25663 = NOVALUE;
        goto L4; // [40] 111
    }
    _25663 = NOVALUE;
    // SubProg find_next_opt pc: 44 op: STARTLINE (58)

    /** cominit.e:378					if arg[2] = '-' then*/
    // SubProg find_next_opt pc: 46 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_arg_49539);
    _25665 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg find_next_opt pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25665, 45)){
        _25665 = NOVALUE;
        goto L5; // [50] 94
    }
    _25665 = NOVALUE;
    // SubProg find_next_opt pc: 54 op: STARTLINE (58)

    /** cominit.e:380						if length( arg ) = 2 then*/
    // SubProg find_next_opt pc: 56 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49539)){
            _25667 = SEQ_PTR(_arg_49539)->length;
    }
    else {
        _25667 = 1;
    }
    // SubProg find_next_opt pc: 59 op: EQUALS_IFW_I (121)
    if (_25667 != 2)
    goto L6; // [59] 78
    // SubProg find_next_opt pc: 63 op: STARTLINE (58)

    /** cominit.e:382							return { 0, ix - 1 }*/
    // SubProg find_next_opt pc: 65 op: MINUS (10)
    _25669 = _ix_49534 - 1;
    if ((object)((uintptr_t)_25669 +(uintptr_t) HIGH_BITS) >= 0){
        _25669 = NewDouble((eudouble)_25669);
    }
    // SubProg find_next_opt pc: 69 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25669;
    _25670 = MAKE_SEQ(_1);
    _25669 = NOVALUE;
    // SubProg find_next_opt pc: 73 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49539
    DeRefDS(_arg_49539);

// Exiting block BLOCK: find_next_opt

// block var ix_49534

// block var args_49535
    DeRefDS(_args_49535);
    return _25670;
    // SubProg find_next_opt pc: 77 op: NOP1 (159)
L6: // addr: 78 pc: 77 sub: 49532 op: 159
    // SubProg find_next_opt pc: 78 op: STARTLINE (58)

    /** cominit.e:385						return validate_opt( LONGNAME, arg, args, ix )*/
    // SubProg find_next_opt pc: 80 op: PROC (27)
    RefDS(_arg_49539);
    RefDS(_args_49535);
    _25671 = _47validate_opt(2, _arg_49539, _args_49535, _ix_49534);
    // SubProg find_next_opt pc: 87 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49539
    DeRefDS(_arg_49539);

// Exiting block BLOCK: find_next_opt

// block var ix_49534

// block var args_49535
    DeRefDS(_args_49535);
    DeRef(_25670);
    _25670 = NOVALUE;
    return _25671;
    // SubProg find_next_opt pc: 91 op: ELSE (23)
    goto L7; // [91] 144
    // SubProg find_next_opt pc: 93 op: NOP1 (159)
L5: // addr: 94 pc: 93 sub: 49532 op: 159
    // SubProg find_next_opt pc: 94 op: STARTLINE (58)

    /** cominit.e:389						return validate_opt( SHORTNAME, arg, args, ix )*/
    // SubProg find_next_opt pc: 96 op: PROC (27)
    RefDS(_arg_49539);
    RefDS(_args_49535);
    _25672 = _47validate_opt(1, _arg_49539, _args_49535, _ix_49534);
    // SubProg find_next_opt pc: 103 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49539
    DeRefDS(_arg_49539);

// Exiting block BLOCK: find_next_opt

// block var ix_49534

// block var args_49535
    DeRefDS(_args_49535);
    DeRef(_25670);
    _25670 = NOVALUE;
    DeRef(_25671);
    _25671 = NOVALUE;
    return _25672;
    // SubProg find_next_opt pc: 107 op: NOP1 (159)
    // SubProg find_next_opt pc: 108 op: ELSE (23)
    goto L7; // [108] 144
    // SubProg find_next_opt pc: 110 op: NOP1 (159)
L4: // addr: 111 pc: 110 sub: 49532 op: 159
    // SubProg find_next_opt pc: 111 op: STARTLINE (58)

    /** cominit.e:393					return {0, ix-1}*/
    // SubProg find_next_opt pc: 113 op: MINUS (10)
    _25673 = _ix_49534 - 1;
    if ((object)((uintptr_t)_25673 +(uintptr_t) HIGH_BITS) >= 0){
        _25673 = NewDouble((eudouble)_25673);
    }
    // SubProg find_next_opt pc: 117 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25673;
    _25674 = MAKE_SEQ(_1);
    _25673 = NOVALUE;
    // SubProg find_next_opt pc: 121 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49539
    DeRef(_arg_49539);

// Exiting block BLOCK: find_next_opt

// block var ix_49534

// block var args_49535
    DeRefDS(_args_49535);
    DeRef(_25670);
    _25670 = NOVALUE;
    DeRef(_25672);
    _25672 = NOVALUE;
    DeRef(_25671);
    _25671 = NOVALUE;
    return _25674;
    // SubProg find_next_opt pc: 125 op: NOP1 (159)
    // SubProg find_next_opt pc: 126 op: ELSE (23)
    goto L7; // [126] 144
    // SubProg find_next_opt pc: 128 op: NOP1 (159)
L3: // addr: 129 pc: 128 sub: 49532 op: 159
    // SubProg find_next_opt pc: 129 op: STARTLINE (58)

    /** cominit.e:397				return { 0, ix-1 }*/
    // SubProg find_next_opt pc: 131 op: MINUS (10)
    _25675 = _ix_49534 - 1;
    if ((object)((uintptr_t)_25675 +(uintptr_t) HIGH_BITS) >= 0){
        _25675 = NewDouble((eudouble)_25675);
    }
    // SubProg find_next_opt pc: 135 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25675;
    _25676 = MAKE_SEQ(_1);
    _25675 = NOVALUE;
    // SubProg find_next_opt pc: 139 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49539
    DeRef(_arg_49539);

// Exiting block BLOCK: find_next_opt

// block var ix_49534

// block var args_49535
    DeRefDS(_args_49535);
    DeRef(_25670);
    _25670 = NOVALUE;
    DeRef(_25672);
    _25672 = NOVALUE;
    DeRef(_25671);
    _25671 = NOVALUE;
    DeRef(_25674);
    _25674 = NOVALUE;
    return _25676;
    // SubProg find_next_opt pc: 143 op: NOP1 (159)
L7: // addr: 144 pc: 143 sub: 49532 op: 159
    // SubProg find_next_opt pc: 144 op: STARTLINE (58)

    /** cominit.e:400			ix += 1*/
    // SubProg find_next_opt pc: 146 op: PLUS1_I (117)
    _ix_49534 = _ix_49534 + 1;
    // SubProg find_next_opt pc: 150 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var arg_49539
    DeRef(_arg_49539);
    _arg_49539 = NOVALUE;
    // SubProg find_next_opt pc: 152 op: STARTLINE (58)

    /** cominit.e:401		end while*/
    // SubProg find_next_opt pc: 154 op: ENDWHILE (22)
    goto L1; // [154] 10
    // SubProg find_next_opt pc: 156 op: NOP1 (159)
L2: // addr: 157 pc: 156 sub: 49532 op: 159
    // SubProg find_next_opt pc: 157 op: STARTLINE (58)

    /** cominit.e:402		return {0, ix-1}*/
    // SubProg find_next_opt pc: 159 op: MINUS (10)
    _25678 = _ix_49534 - 1;
    if ((object)((uintptr_t)_25678 +(uintptr_t) HIGH_BITS) >= 0){
        _25678 = NewDouble((eudouble)_25678);
    }
    // SubProg find_next_opt pc: 163 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25678;
    _25679 = MAKE_SEQ(_1);
    _25678 = NOVALUE;
    // SubProg find_next_opt pc: 167 op: RETURNF (28)

// Exiting block BLOCK: find_next_opt

// block var ix_49534

// block var args_49535
    DeRefDS(_args_49535);
    DeRef(_25670);
    _25670 = NOVALUE;
    DeRef(_25672);
    _25672 = NOVALUE;
    DeRef(_25671);
    _25671 = NOVALUE;
    DeRef(_25674);
    _25674 = NOVALUE;
    DeRef(_25676);
    _25676 = NOVALUE;
    return _25679;
    // SubProg find_next_opt pc: 171 op: BADRETURNF (43)
    ;
}


object _47expand_config_options(object _args_49569)
{
    object _idx_49570 = NOVALUE;
    object _next_idx_49571 = NOVALUE;
    object _files_49572 = NOVALUE;
    object _cmd_1_2_49573 = NOVALUE;
    object _25702 = NOVALUE; // 49601 25702
    object _25701 = NOVALUE; // 49600 25701
    object _25700 = NOVALUE; // 49599 25700
    object _25699 = NOVALUE; // 49598 25699
    object _25698 = NOVALUE; // 49597 25698
    object _25697 = NOVALUE; // 49596 25697
    object _25696 = NOVALUE; // 49595 25696
    object _25695 = NOVALUE; // 49594 25695
    object _25694 = NOVALUE; // 49593 25694
// skipping _25693  name type: 0
// skipping _25692  name type: 0
// skipping _25691  name type: 0
// skipping _25690  name type: 0
    object _25689 = NOVALUE; // 49586 25689
// skipping _25688  name type: 0
    object _25687 = NOVALUE; // 49584 25687
    object _25686 = NOVALUE; // 49583 25686
    object _25685 = NOVALUE; // 49582 25685
    object _25683 = NOVALUE; // 49580 25683
    object _25682 = NOVALUE; // 49579 25682
// skipping _25681  name type: 0
// skipping _25680  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expand_config_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 3 op: STARTLINE (58)

    /** cominit.e:410		integer idx = 1*/
    // SubProg expand_config_options pc: 5 op: ASSIGN_I (113)
    _idx_49570 = 1;
    // SubProg expand_config_options pc: 8 op: STARTLINE (58)

    /** cominit.e:412		sequence files = {}*/
    // SubProg expand_config_options pc: 10 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_files_49572);
    _files_49572 = _21958;
    // SubProg expand_config_options pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 15 op: STARTLINE (58)

    /** cominit.e:413		sequence cmd_1_2 = args[1..2]*/
    // SubProg expand_config_options pc: 17 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_1_2_49573;
    RHS_Slice(_args_49569, 1, 2);
    // SubProg expand_config_options pc: 22 op: STARTLINE (58)

    /** cominit.e:414		args = remove( args, 1, 2 )*/
    // SubProg expand_config_options pc: 24 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_args_49569);
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
                Head( SEQ_PTR(_args_49569), start, &_args_49569 );
            }
            else Tail(SEQ_PTR(_args_49569), stop+1, &_args_49569);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49569), start, &_args_49569);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49569 = Remove_elements(start, stop, (SEQ_PTR(_args_49569)->ref == 1));
        }
    }
    // SubProg expand_config_options pc: 29 op: STARTLINE (58)

    /** cominit.e:416		while idx with entry do*/
    // SubProg expand_config_options pc: 31 op: ELSE (23)
    goto L1; // [31] 94
    // SubProg expand_config_options pc: 33 op: NOPWHILE (158)
L2: // addr: 34 pc: 33 sub: 49567 op: 158
    // SubProg expand_config_options pc: 34 op: WHILE (47)
    if (_idx_49570 == 0)
    {
        goto L3; // [34] 114
    }
    else{
    }
    // SubProg expand_config_options pc: 37 op: STARTLINE (58)

    /** cominit.e:417			if equal(upper(args[idx]), "-C") then*/
    // SubProg expand_config_options pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_args_49569);
    _25682 = (object)*(((s1_ptr)_2)->base + _idx_49570);
    // SubProg expand_config_options pc: 43 op: PROC (27)
    Ref(_25682);
    _25683 = _20upper(_25682);
    _25682 = NOVALUE;
    // SubProg expand_config_options pc: 47 op: EQUAL (153)
    if (_25683 == _25684)
    _25685 = 1;
    else if (IS_ATOM_INT(_25683) && IS_ATOM_INT(_25684))
    _25685 = 0;
    else
    _25685 = (compare(_25683, _25684) == 0);
    DeRef(_25683);
    _25683 = NOVALUE;
    // SubProg expand_config_options pc: 51 op: IF (20)
    if (_25685 == 0)
    {
        _25685 = NOVALUE;
        goto L4; // [51] 82
    }
    else{
        _25685 = NOVALUE;
    }
    // SubProg expand_config_options pc: 54 op: STARTLINE (58)

    /** cominit.e:418				files = append( files, args[idx+1] )*/
    // SubProg expand_config_options pc: 56 op: PLUS1 (93)
    _25686 = _idx_49570 + 1;
    // SubProg expand_config_options pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_args_49569);
    _25687 = (object)*(((s1_ptr)_2)->base + _25686);
    // SubProg expand_config_options pc: 64 op: APPEND (35)
    Ref(_25687);
    Append(&_files_49572, _files_49572, _25687);
    _25687 = NOVALUE;
    // SubProg expand_config_options pc: 68 op: STARTLINE (58)

    /** cominit.e:419				args = remove( args, idx, idx + 1 )*/
    // SubProg expand_config_options pc: 70 op: PLUS1 (93)
    _25689 = _idx_49570 + 1;
    if (_25689 > MAXINT){
        _25689 = NewDouble((eudouble)_25689);
    }
    // SubProg expand_config_options pc: 74 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_args_49569);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_idx_49570)) ? _idx_49570 : (object)(DBL_PTR(_idx_49570)->dbl);
        int stop = (IS_ATOM_INT(_25689)) ? _25689 : (object)(DBL_PTR(_25689)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_args_49569), start, &_args_49569 );
            }
            else Tail(SEQ_PTR(_args_49569), stop+1, &_args_49569);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49569), start, &_args_49569);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49569 = Remove_elements(start, stop, (SEQ_PTR(_args_49569)->ref == 1));
        }
    }
    DeRef(_25689);
    _25689 = NOVALUE;
    // SubProg expand_config_options pc: 79 op: ELSE (23)
    goto L5; // [79] 91
    // SubProg expand_config_options pc: 81 op: NOP1 (159)
L4: // addr: 82 pc: 81 sub: 49567 op: 159
    // SubProg expand_config_options pc: 82 op: STARTLINE (58)

    /** cominit.e:422				idx = next_idx[2]*/
    // SubProg expand_config_options pc: 84 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_config_options pc: 86 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_next_idx_49571);
    _idx_49570 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_idx_49570))
    _idx_49570 = (object)DBL_PTR(_idx_49570)->dbl;
    // SubProg expand_config_options pc: 90 op: NOP1 (159)
L5: // addr: 91 pc: 90 sub: 49567 op: 159
    // SubProg expand_config_options pc: 91 op: STARTLINE (58)

    /** cominit.e:424		entry*/
    // SubProg expand_config_options pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 49567 op: 159
    // SubProg expand_config_options pc: 94 op: STARTLINE (58)

    /** cominit.e:425			next_idx = find_next_opt( idx, args )*/
    // SubProg expand_config_options pc: 96 op: PROC (27)
    RefDS(_args_49569);
    _0 = _next_idx_49571;
    _next_idx_49571 = _47find_next_opt(_idx_49570, _args_49569);
    DeRef(_0);
    // SubProg expand_config_options pc: 101 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 103 op: STARTLINE (58)

    /** cominit.e:426			idx = next_idx[1]*/
    // SubProg expand_config_options pc: 105 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_next_idx_49571);
    _idx_49570 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_idx_49570))
    _idx_49570 = (object)DBL_PTR(_idx_49570)->dbl;
    // SubProg expand_config_options pc: 109 op: STARTLINE (58)

    /** cominit.e:427		end while*/
    // SubProg expand_config_options pc: 111 op: ENDWHILE (22)
    goto L2; // [111] 34
    // SubProg expand_config_options pc: 113 op: NOP1 (159)
L3: // addr: 114 pc: 113 sub: 49567 op: 159
    // SubProg expand_config_options pc: 114 op: STARTLINE (58)

    /** cominit.e:428		return cmd_1_2 & merge_parameters( GetDefaultArgs( files ), args[1..next_idx[2]], options, 1 ) & args[next_idx[2]+1..$]*/
    // SubProg expand_config_options pc: 116 op: PROC (27)
    RefDS(_files_49572);
    _25694 = _46GetDefaultArgs(_files_49572);
    // SubProg expand_config_options pc: 120 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_config_options pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_next_idx_49571);
    _25695 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg expand_config_options pc: 126 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25696;
    RHS_Slice(_args_49569, 1, _25695);
    // SubProg expand_config_options pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_config_options pc: 133 op: PROC (27)
    RefDS(_47options_49239);
    _25697 = _47merge_parameters(_25694, _25696, _47options_49239, 1);
    _25694 = NOVALUE;
    _25696 = NOVALUE;
    // SubProg expand_config_options pc: 140 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_next_idx_49571);
    _25698 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg expand_config_options pc: 144 op: PLUS1 (93)
    if (IS_ATOM_INT(_25698)) {
        _25699 = _25698 + 1;
        if (_25699 > MAXINT){
            _25699 = NewDouble((eudouble)_25699);
        }
    }
    else
    _25699 = binary_op(PLUS, 1, _25698);
    _25698 = NOVALUE;
    // SubProg expand_config_options pc: 148 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49569)){
            _25700 = SEQ_PTR(_args_49569)->length;
    }
    else {
        _25700 = 1;
    }
    // SubProg expand_config_options pc: 151 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25701;
    RHS_Slice(_args_49569, _25699, _25700);
    // SubProg expand_config_options pc: 156 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _25701;
        concat_list[1] = _25697;
        concat_list[2] = _cmd_1_2_49573;
        Concat_N((object_ptr)&_25702, concat_list, 3);
    }
    DeRefDS(_25701);
    _25701 = NOVALUE;
    DeRef(_25697);
    _25697 = NOVALUE;
    // SubProg expand_config_options pc: 162 op: RETURNF (28)

// Exiting block BLOCK: expand_config_options

// block var args_49569
    DeRefDS(_args_49569);

// block var idx_49570

// block var next_idx_49571
    DeRefDS(_next_idx_49571);

// block var files_49572
    DeRefDS(_files_49572);

// block var cmd_1_2_49573
    DeRefDS(_cmd_1_2_49573);
    DeRef(_25686);
    _25686 = NOVALUE;
    _25695 = NOVALUE;
    DeRef(_25699);
    _25699 = NOVALUE;
    return _25702;
    // SubProg expand_config_options pc: 166 op: BADRETURNF (43)
    ;
}


void _47handle_common_options(object _opts_49604)
{
    object _opt_keys_49605 = NOVALUE;
    object _option_w_49607 = NOVALUE;
    object _key_49611 = NOVALUE;
    object _val_49613 = NOVALUE;
    object _this_warn_49659 = NOVALUE;
    object _auto_add_warn_49661 = NOVALUE;
    object _n_49667 = NOVALUE;
    object _this_warn_49690 = NOVALUE;
    object _auto_add_warn_49692 = NOVALUE;
    object _n_49698 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_615_49733 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_689_49745 = NOVALUE;
// skipping _25764  name type: 0
// skipping _25762  name type: 0
    object _25761 = NOVALUE; // 49765 25761
    object _25760 = NOVALUE; // 49762 25760
// skipping _25759  name type: 0
    object _25758 = NOVALUE; // 49757 25758
// skipping _25757  name type: 0
    object _25756 = NOVALUE; // 49753 25756
// skipping _25755  name type: 0
    object _25754 = NOVALUE; // 49743 25754
    object _25753 = NOVALUE; // 49741 25753
    object _25752 = NOVALUE; // 49739 25752
    object _25751 = NOVALUE; // 49738 25751
    object _25750 = NOVALUE; // 49731 25750
    object _25749 = NOVALUE; // 49729 25749
    object _25748 = NOVALUE; // 49727 25748
    object _25747 = NOVALUE; // 49726 25747
// skipping _25746  name type: 0
    object _25745 = NOVALUE; // 49716 25745
// skipping _25744  name type: 0
    object _25743 = NOVALUE; // 49710 25743
    object _25742 = NOVALUE; // 49709 25742
    object _25741 = NOVALUE; // 49705 25741
// skipping _25740  name type: 0
// skipping _25739  name type: 0
// skipping _25738  name type: 0
// skipping _25737  name type: 0
    object _25736 = NOVALUE; // 49696 25736
// skipping _25735  name type: 0
    object _25734 = NOVALUE; // 49694 25734
// skipping _25733  name type: 0
    object _25732 = NOVALUE; // 49689 25732
// skipping _25731  name type: 0
// skipping _25730  name type: 0
    object _25729 = NOVALUE; // 49678 25729
    object _25728 = NOVALUE; // 49674 25728
// skipping _25727  name type: 0
// skipping _25726  name type: 0
// skipping _25725  name type: 0
// skipping _25724  name type: 0
    object _25723 = NOVALUE; // 49665 25723
// skipping _25722  name type: 0
    object _25721 = NOVALUE; // 49663 25721
// skipping _25720  name type: 0
    object _25719 = NOVALUE; // 49658 25719
// skipping _25718  name type: 0
    object _25717 = NOVALUE; // 49651 25717
    object _25716 = NOVALUE; // 49649 25716
    object _25715 = NOVALUE; // 49648 25715
    object _25714 = NOVALUE; // 49643 25714
    object _25713 = NOVALUE; // 49637 25713
    object _25712 = NOVALUE; // 49635 25712
// skipping _25711  name type: 0
    object _25710 = NOVALUE; // 49622 25710
    object _25709 = NOVALUE; // 49620 25709
// skipping _25706  name type: 0
// skipping _25705  name type: 0
    object _25704 = NOVALUE; // 49610 25704
// skipping _25703  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg handle_common_options pc: 1 op: STARTLINE (58)

    /** cominit.e:435		sequence opt_keys = m:keys(opts)*/
    // SubProg handle_common_options pc: 3 op: PROC (27)
    Ref(_opts_49604);
    _0 = _opt_keys_49605;
    _opt_keys_49605 = _33keys(_opts_49604, 0);
    DeRef(_0);
    // SubProg handle_common_options pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg handle_common_options pc: 10 op: STARTLINE (58)

    /** cominit.e:436		integer option_w = 0*/
    // SubProg handle_common_options pc: 12 op: ASSIGN_I (113)
    _option_w_49607 = 0;
    // SubProg handle_common_options pc: 15 op: STARTLINE (58)

    /** cominit.e:438		for idx = 1 to length(opt_keys) do*/
    // SubProg handle_common_options pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_keys_49605)){
            _25704 = SEQ_PTR(_opt_keys_49605)->length;
    }
    else {
        _25704 = 1;
    }
    // SubProg handle_common_options pc: 20 op: FOR_I (125)
    {
        object _idx_49609;
        _idx_49609 = 1;
L1: // addr: 27 pc: 20 sub: 49602 op: 125
        if (_idx_49609 > _25704){
            goto L2; // [20] 791
        }
        // SubProg handle_common_options pc: 27 op: STARTLINE (58)

        /** cominit.e:439			sequence key = opt_keys[idx]*/
        // SubProg handle_common_options pc: 29 op: RHS_SUBS (25)
        DeRef(_key_49611);
        _2 = (object)SEQ_PTR(_opt_keys_49605);
        _key_49611 = (object)*(((s1_ptr)_2)->base + _idx_49609);
        Ref(_key_49611);
        // SubProg handle_common_options pc: 33 op: SEQUENCE_CHECK (97)
        // SubProg handle_common_options pc: 35 op: STARTLINE (58)

        /** cominit.e:440			object val = m:get(opts, key)*/
        // SubProg handle_common_options pc: 37 op: PROC (27)
        Ref(_opts_49604);
        RefDS(_key_49611);
        _0 = _val_49613;
        _val_49613 = _33get(_opts_49604, _key_49611, 0);
        DeRef(_0);
        // SubProg handle_common_options pc: 43 op: STARTLINE (58)

        /** cominit.e:442			switch key do*/
        // SubProg handle_common_options pc: 45 op: SWITCH (185)
        _1 = find(_key_49611, _25707);
        switch ( _1 ){ 
            // SubProg handle_common_options pc: 50 op: STARTLINE (58)

            /** cominit.e:443				case "i" then*/
            // SubProg handle_common_options pc: 52 op: CASE (186)
            case 1:
            // SubProg handle_common_options pc: 54 op: STARTLINE (58)

            /** cominit.e:444					for i = 1 to length(val) do*/
            // SubProg handle_common_options pc: 56 op: LENGTH (42)
            if (IS_SEQUENCE(_val_49613)){
                    _25709 = SEQ_PTR(_val_49613)->length;
            }
            else {
                _25709 = 1;
            }
            // SubProg handle_common_options pc: 59 op: FOR_I (125)
            {
                object _i_49619;
                _i_49619 = 1;
L3: // addr: 66 pc: 59 sub: 49602 op: 125
                if (_i_49619 > _25709){
                    goto L4; // [59] 82
                }
                // SubProg handle_common_options pc: 66 op: STARTLINE (58)

                /** cominit.e:445						add_include_directory(val[i])*/
                // SubProg handle_common_options pc: 68 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49613);
                _25710 = (object)*(((s1_ptr)_2)->base + _i_49619);
                // SubProg handle_common_options pc: 72 op: PROC (27)
                Ref(_25710);
                _46add_include_directory(_25710);
                _25710 = NOVALUE;
                // SubProg handle_common_options pc: 75 op: STARTLINE (58)

                /** cominit.e:446					end for*/
                // SubProg handle_common_options pc: 77 op: ENDFOR_INT_UP1 (54)
                _i_49619 = _i_49619 + 1;
                goto L3; // [77] 66
L4: // addr: 82 pc: 77 sub: 49602 op: 54
                ;
            }
            // SubProg handle_common_options pc: 82 op: ELSE (23)
            goto L5; // [82] 782
            // SubProg handle_common_options pc: 84 op: STARTLINE (58)

            /** cominit.e:448				case "d" then*/
            // SubProg handle_common_options pc: 86 op: CASE (186)
            case 2:
            // SubProg handle_common_options pc: 88 op: STARTLINE (58)

            /** cominit.e:449					OpDefines &= val*/
            // SubProg handle_common_options pc: 90 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 92 op: CONCAT (15)
            if (IS_SEQUENCE(_5OpDefines_12551) && IS_ATOM(_val_49613)) {
                Ref(_val_49613);
                Append(&_5OpDefines_12551, _5OpDefines_12551, _val_49613);
            }
            else if (IS_ATOM(_5OpDefines_12551) && IS_SEQUENCE(_val_49613)) {
            }
            else {
                Concat((object_ptr)&_5OpDefines_12551, _5OpDefines_12551, _val_49613);
            }
            // SubProg handle_common_options pc: 96 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 98 op: ELSE (23)
            goto L5; // [98] 782
            // SubProg handle_common_options pc: 100 op: STARTLINE (58)

            /** cominit.e:451				case "batch" then*/
            // SubProg handle_common_options pc: 102 op: CASE (186)
            case 3:
            // SubProg handle_common_options pc: 104 op: STARTLINE (58)

            /** cominit.e:452					batch_job = 1*/
            // SubProg handle_common_options pc: 106 op: ASSIGN (18)
            _5batch_job_12490 = 1;
            // SubProg handle_common_options pc: 109 op: INTEGER_CHECK (96)
            // SubProg handle_common_options pc: 111 op: ELSE (23)
            goto L5; // [111] 782
            // SubProg handle_common_options pc: 113 op: STARTLINE (58)

            /** cominit.e:454				case "test" then*/
            // SubProg handle_common_options pc: 115 op: CASE (186)
            case 4:
            // SubProg handle_common_options pc: 117 op: STARTLINE (58)

            /** cominit.e:455					test_only = 1*/
            // SubProg handle_common_options pc: 119 op: ASSIGN (18)
            _5test_only_12489 = 1;
            // SubProg handle_common_options pc: 122 op: INTEGER_CHECK (96)
            // SubProg handle_common_options pc: 124 op: ELSE (23)
            goto L5; // [124] 782
            // SubProg handle_common_options pc: 126 op: STARTLINE (58)

            /** cominit.e:457				case "strict" then*/
            // SubProg handle_common_options pc: 128 op: CASE (186)
            case 5:
            // SubProg handle_common_options pc: 130 op: STARTLINE (58)

            /** cominit.e:458					Strict_is_on = 1*/
            // SubProg handle_common_options pc: 132 op: ASSIGN (18)
            _5Strict_is_on_12543 = 1;
            // SubProg handle_common_options pc: 135 op: INTEGER_CHECK (96)
            // SubProg handle_common_options pc: 137 op: ELSE (23)
            goto L5; // [137] 782
            // SubProg handle_common_options pc: 139 op: STARTLINE (58)

            /** cominit.e:460				case "p" then*/
            // SubProg handle_common_options pc: 141 op: CASE (186)
            case 6:
            // SubProg handle_common_options pc: 143 op: STARTLINE (58)

            /** cominit.e:461					for i = 1 to length(val) do*/
            // SubProg handle_common_options pc: 145 op: LENGTH (42)
            if (IS_SEQUENCE(_val_49613)){
                    _25712 = SEQ_PTR(_val_49613)->length;
            }
            else {
                _25712 = 1;
            }
            // SubProg handle_common_options pc: 148 op: FOR_I (125)
            {
                object _i_49634;
                _i_49634 = 1;
L6: // addr: 155 pc: 148 sub: 49602 op: 125
                if (_i_49634 > _25712){
                    goto L7; // [148] 173
                }
                // SubProg handle_common_options pc: 155 op: STARTLINE (58)

                /** cominit.e:462						add_preprocessor(val[i])*/
                // SubProg handle_common_options pc: 157 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49613);
                _25713 = (object)*(((s1_ptr)_2)->base + _i_49634);
                // SubProg handle_common_options pc: 161 op: PROC (27)
                Ref(_25713);
                _63add_preprocessor(_25713, 0, 0);
                _25713 = NOVALUE;
                // SubProg handle_common_options pc: 166 op: STARTLINE (58)

                /** cominit.e:463					end for*/
                // SubProg handle_common_options pc: 168 op: ENDFOR_INT_UP1 (54)
                _i_49634 = _i_49634 + 1;
                goto L6; // [168] 155
L7: // addr: 173 pc: 168 sub: 49602 op: 54
                ;
            }
            // SubProg handle_common_options pc: 173 op: ELSE (23)
            goto L5; // [173] 782
            // SubProg handle_common_options pc: 175 op: STARTLINE (58)

            /** cominit.e:465				case "pf" then*/
            // SubProg handle_common_options pc: 177 op: CASE (186)
            case 7:
            // SubProg handle_common_options pc: 179 op: STARTLINE (58)

            /** cominit.e:466					force_preprocessor = 1*/
            // SubProg handle_common_options pc: 181 op: ASSIGN (18)
            _7force_preprocessor_11408 = 1;
            // SubProg handle_common_options pc: 184 op: INTEGER_CHECK (96)
            // SubProg handle_common_options pc: 186 op: ELSE (23)
            goto L5; // [186] 782
            // SubProg handle_common_options pc: 188 op: STARTLINE (58)

            /** cominit.e:468				case "l" then*/
            // SubProg handle_common_options pc: 190 op: CASE (186)
            case 8:
            // SubProg handle_common_options pc: 192 op: STARTLINE (58)

            /** cominit.e:469					for i = 1 to length(val) do*/
            // SubProg handle_common_options pc: 194 op: LENGTH (42)
            if (IS_SEQUENCE(_val_49613)){
                    _25714 = SEQ_PTR(_val_49613)->length;
            }
            else {
                _25714 = 1;
            }
            // SubProg handle_common_options pc: 197 op: FOR_I (125)
            {
                object _i_49642;
                _i_49642 = 1;
L8: // addr: 204 pc: 197 sub: 49602 op: 125
                if (_i_49642 > _25714){
                    goto L9; // [197] 238
                }
                // SubProg handle_common_options pc: 204 op: STARTLINE (58)

                /** cominit.e:470						LocalizeQual = append(LocalizeQual, (filter(lower(val[i]), STDFLTR_ALPHA)))*/
                // SubProg handle_common_options pc: 206 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 208 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49613);
                _25715 = (object)*(((s1_ptr)_2)->base + _i_49642);
                // SubProg handle_common_options pc: 212 op: PROC (27)
                Ref(_25715);
                _25716 = _20lower(_25715);
                _25715 = NOVALUE;
                // SubProg handle_common_options pc: 216 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 218 op: PROC (27)
                RefDS(_21958);
                RefDS(_5);
                _25717 = _24filter(_25716, _24STDFLTR_ALPHA_4687, _21958, _5);
                _25716 = NOVALUE;
                // SubProg handle_common_options pc: 225 op: APPEND (35)
                Ref(_25717);
                Append(&_7LocalizeQual_11409, _7LocalizeQual_11409, _25717);
                DeRef(_25717);
                _25717 = NOVALUE;
                // SubProg handle_common_options pc: 229 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 231 op: STARTLINE (58)

                /** cominit.e:471					end for*/
                // SubProg handle_common_options pc: 233 op: ENDFOR_INT_UP1 (54)
                _i_49642 = _i_49642 + 1;
                goto L8; // [233] 204
L9: // addr: 238 pc: 233 sub: 49602 op: 54
                ;
            }
            // SubProg handle_common_options pc: 238 op: ELSE (23)
            goto L5; // [238] 782
            // SubProg handle_common_options pc: 240 op: STARTLINE (58)

            /** cominit.e:473				case "ldb" then*/
            // SubProg handle_common_options pc: 242 op: CASE (186)
            case 9:
            // SubProg handle_common_options pc: 244 op: STARTLINE (58)

            /** cominit.e:474					LocalDB = val*/
            // SubProg handle_common_options pc: 246 op: ASSIGN (18)
            Ref(_val_49613);
            DeRef(_7LocalDB_11410);
            _7LocalDB_11410 = _val_49613;
            // SubProg handle_common_options pc: 249 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 251 op: ELSE (23)
            goto L5; // [251] 782
            // SubProg handle_common_options pc: 253 op: STARTLINE (58)

            /** cominit.e:476				case "w" then*/
            // SubProg handle_common_options pc: 255 op: CASE (186)
            case 10:
            // SubProg handle_common_options pc: 257 op: STARTLINE (58)

            /** cominit.e:477					for i = 1 to length(val) do*/
            // SubProg handle_common_options pc: 259 op: LENGTH (42)
            if (IS_SEQUENCE(_val_49613)){
                    _25719 = SEQ_PTR(_val_49613)->length;
            }
            else {
                _25719 = 1;
            }
            // SubProg handle_common_options pc: 262 op: FOR_I (125)
            {
                object _i_49657;
                _i_49657 = 1;
LA: // addr: 269 pc: 262 sub: 49602 op: 125
                if (_i_49657 > _25719){
                    goto LB; // [262] 392
                }
                // SubProg handle_common_options pc: 269 op: STARTLINE (58)

                /** cominit.e:478						sequence this_warn = val[i]*/
                // SubProg handle_common_options pc: 271 op: RHS_SUBS_CHECK (92)
                DeRef(_this_warn_49659);
                _2 = (object)SEQ_PTR(_val_49613);
                _this_warn_49659 = (object)*(((s1_ptr)_2)->base + _i_49657);
                Ref(_this_warn_49659);
                // SubProg handle_common_options pc: 275 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 277 op: STARTLINE (58)

                /** cominit.e:479						integer auto_add_warn = 0*/
                // SubProg handle_common_options pc: 279 op: ASSIGN_I (113)
                _auto_add_warn_49661 = 0;
                // SubProg handle_common_options pc: 282 op: STARTLINE (58)

                /** cominit.e:480						if this_warn[1] = '+' then*/
                // SubProg handle_common_options pc: 284 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_this_warn_49659);
                _25721 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg handle_common_options pc: 288 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _25721, 43)){
                    _25721 = NOVALUE;
                    goto LC; // [288] 308
                }
                _25721 = NOVALUE;
                // SubProg handle_common_options pc: 292 op: STARTLINE (58)

                /** cominit.e:481							auto_add_warn = 1*/
                // SubProg handle_common_options pc: 294 op: ASSIGN_I (113)
                _auto_add_warn_49661 = 1;
                // SubProg handle_common_options pc: 297 op: STARTLINE (58)

                /** cominit.e:482							this_warn = this_warn[2 .. $]*/
                // SubProg handle_common_options pc: 299 op: LENGTH (42)
                if (IS_SEQUENCE(_this_warn_49659)){
                        _25723 = SEQ_PTR(_this_warn_49659)->length;
                }
                else {
                    _25723 = 1;
                }
                // SubProg handle_common_options pc: 302 op: RHS_SLICE (46)
                rhs_slice_target = (object_ptr)&_this_warn_49659;
                RHS_Slice(_this_warn_49659, 2, _25723);
                // SubProg handle_common_options pc: 307 op: NOP1 (159)
LC: // addr: 308 pc: 307 sub: 49602 op: 159
                // SubProg handle_common_options pc: 308 op: STARTLINE (58)

                /** cominit.e:484						integer n = find(this_warn, warning_names)*/
                // SubProg handle_common_options pc: 310 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 312 op: FIND_FROM (176)
                _n_49667 = find_from(_this_warn_49659, _5warning_names_12522, 1);
                // SubProg handle_common_options pc: 317 op: STARTLINE (58)

                /** cominit.e:485						if n != 0 then*/
                // SubProg handle_common_options pc: 319 op: NOTEQ_IFW_I (122)
                if (_n_49667 == 0)
                goto LD; // [319] 383
                // SubProg handle_common_options pc: 323 op: STARTLINE (58)

                /** cominit.e:486							if auto_add_warn or option_w = 1 then*/
                // SubProg handle_common_options pc: 325 op: SC1_OR_IF (147)
                if (_auto_add_warn_49661 != 0) {
                    goto LE; // [325] 338
                }
                // SubProg handle_common_options pc: 329 op: EQUALS (3)
                _25728 = (_option_w_49607 == 1);
                // SubProg handle_common_options pc: 333 op: NOP1 (159)
                // SubProg handle_common_options pc: 334 op: IF (20)
                if (_25728 == 0)
                {
                    DeRef(_25728);
                    _25728 = NOVALUE;
                    goto LF; // [334] 357
                }
                else{
                    DeRef(_25728);
                    _25728 = NOVALUE;
                }
                // SubProg handle_common_options pc: 337 op: NOP1 (159)
LE: // addr: 338 pc: 337 sub: 49602 op: 159
                // SubProg handle_common_options pc: 338 op: STARTLINE (58)

                /** cominit.e:487								OpWarning = or_bits(OpWarning, warning_flags[n])*/
                // SubProg handle_common_options pc: 340 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 342 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 344 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_5warning_flags_12520);
                _25729 = (object)*(((s1_ptr)_2)->base + _n_49667);
                // SubProg handle_common_options pc: 348 op: OR_BITS (24)
                {uintptr_t tu;
                     tu = (uintptr_t)_5OpWarning_12545 | (uintptr_t)_25729;
                     _5OpWarning_12545 = MAKE_UINT(tu);
                }
                _25729 = NOVALUE;
                // SubProg handle_common_options pc: 352 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_5OpWarning_12545)) {
                    _1 = (object)(DBL_PTR(_5OpWarning_12545)->dbl);
                    DeRefDS(_5OpWarning_12545);
                    _5OpWarning_12545 = _1;
                }
                // SubProg handle_common_options pc: 354 op: ELSE (23)
                goto L10; // [354] 373
                // SubProg handle_common_options pc: 356 op: NOP1 (159)
LF: // addr: 357 pc: 356 sub: 49602 op: 159
                // SubProg handle_common_options pc: 357 op: STARTLINE (58)

                /** cominit.e:489								option_w = 1*/
                // SubProg handle_common_options pc: 359 op: ASSIGN_I (113)
                _option_w_49607 = 1;
                // SubProg handle_common_options pc: 362 op: STARTLINE (58)

                /** cominit.e:490								OpWarning = warning_flags[n]*/
                // SubProg handle_common_options pc: 364 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 366 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_5warning_flags_12520);
                _5OpWarning_12545 = (object)*(((s1_ptr)_2)->base + _n_49667);
                // SubProg handle_common_options pc: 372 op: NOP1 (159)
L10: // addr: 373 pc: 372 sub: 49602 op: 159
                // SubProg handle_common_options pc: 373 op: STARTLINE (58)

                /** cominit.e:493							prev_OpWarning = OpWarning*/
                // SubProg handle_common_options pc: 375 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 377 op: ASSIGN (18)
                _5prev_OpWarning_12546 = _5OpWarning_12545;
                // SubProg handle_common_options pc: 380 op: INTEGER_CHECK (96)
                // SubProg handle_common_options pc: 382 op: NOP1 (159)
LD: // addr: 383 pc: 382 sub: 49602 op: 159
                // SubProg handle_common_options pc: 383 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var this_warn_49659
                DeRef(_this_warn_49659);
                _this_warn_49659 = NOVALUE;

// block var auto_add_warn_49661

// block var n_49667
                // SubProg handle_common_options pc: 385 op: STARTLINE (58)

                /** cominit.e:495					end for*/
                // SubProg handle_common_options pc: 387 op: ENDFOR_INT_UP1 (54)
                _i_49657 = _i_49657 + 1;
                goto LA; // [387] 269
LB: // addr: 392 pc: 387 sub: 49602 op: 54
                ;
            }
            // SubProg handle_common_options pc: 392 op: ELSE (23)
            goto L5; // [392] 782
            // SubProg handle_common_options pc: 394 op: STARTLINE (58)

            /** cominit.e:497				case "x" then*/
            // SubProg handle_common_options pc: 396 op: CASE (186)
            case 11:
            // SubProg handle_common_options pc: 398 op: STARTLINE (58)

            /** cominit.e:498					for i = 1 to length(val) do*/
            // SubProg handle_common_options pc: 400 op: LENGTH (42)
            if (IS_SEQUENCE(_val_49613)){
                    _25732 = SEQ_PTR(_val_49613)->length;
            }
            else {
                _25732 = 1;
            }
            // SubProg handle_common_options pc: 403 op: FOR_I (125)
            {
                object _i_49688;
                _i_49688 = 1;
L11: // addr: 410 pc: 403 sub: 49602 op: 125
                if (_i_49688 > _25732){
                    goto L12; // [403] 542
                }
                // SubProg handle_common_options pc: 410 op: STARTLINE (58)

                /** cominit.e:499						sequence this_warn = val[i]*/
                // SubProg handle_common_options pc: 412 op: RHS_SUBS_CHECK (92)
                DeRef(_this_warn_49690);
                _2 = (object)SEQ_PTR(_val_49613);
                _this_warn_49690 = (object)*(((s1_ptr)_2)->base + _i_49688);
                Ref(_this_warn_49690);
                // SubProg handle_common_options pc: 416 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 418 op: STARTLINE (58)

                /** cominit.e:500						integer auto_add_warn = 0*/
                // SubProg handle_common_options pc: 420 op: ASSIGN_I (113)
                _auto_add_warn_49692 = 0;
                // SubProg handle_common_options pc: 423 op: STARTLINE (58)

                /** cominit.e:501						if this_warn[1] = '+' then*/
                // SubProg handle_common_options pc: 425 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_this_warn_49690);
                _25734 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg handle_common_options pc: 429 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _25734, 43)){
                    _25734 = NOVALUE;
                    goto L13; // [429] 449
                }
                _25734 = NOVALUE;
                // SubProg handle_common_options pc: 433 op: STARTLINE (58)

                /** cominit.e:502							auto_add_warn = 1*/
                // SubProg handle_common_options pc: 435 op: ASSIGN_I (113)
                _auto_add_warn_49692 = 1;
                // SubProg handle_common_options pc: 438 op: STARTLINE (58)

                /** cominit.e:503							this_warn = this_warn[2 .. $]*/
                // SubProg handle_common_options pc: 440 op: LENGTH (42)
                if (IS_SEQUENCE(_this_warn_49690)){
                        _25736 = SEQ_PTR(_this_warn_49690)->length;
                }
                else {
                    _25736 = 1;
                }
                // SubProg handle_common_options pc: 443 op: RHS_SLICE (46)
                rhs_slice_target = (object_ptr)&_this_warn_49690;
                RHS_Slice(_this_warn_49690, 2, _25736);
                // SubProg handle_common_options pc: 448 op: NOP1 (159)
L13: // addr: 449 pc: 448 sub: 49602 op: 159
                // SubProg handle_common_options pc: 449 op: STARTLINE (58)

                /** cominit.e:505						integer n = find(this_warn, warning_names)*/
                // SubProg handle_common_options pc: 451 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 453 op: FIND_FROM (176)
                _n_49698 = find_from(_this_warn_49690, _5warning_names_12522, 1);
                // SubProg handle_common_options pc: 458 op: STARTLINE (58)

                /** cominit.e:506						if n != 0 then*/
                // SubProg handle_common_options pc: 460 op: NOTEQ_IFW_I (122)
                if (_n_49698 == 0)
                goto L14; // [460] 533
                // SubProg handle_common_options pc: 464 op: STARTLINE (58)

                /** cominit.e:507							if auto_add_warn or option_w = -1 then*/
                // SubProg handle_common_options pc: 466 op: SC1_OR_IF (147)
                if (_auto_add_warn_49692 != 0) {
                    goto L15; // [466] 479
                }
                // SubProg handle_common_options pc: 470 op: EQUALS (3)
                _25741 = (_option_w_49607 == -1);
                // SubProg handle_common_options pc: 474 op: NOP1 (159)
                // SubProg handle_common_options pc: 475 op: IF (20)
                if (_25741 == 0)
                {
                    DeRef(_25741);
                    _25741 = NOVALUE;
                    goto L16; // [475] 501
                }
                else{
                    DeRef(_25741);
                    _25741 = NOVALUE;
                }
                // SubProg handle_common_options pc: 478 op: NOP1 (159)
L15: // addr: 479 pc: 478 sub: 49602 op: 159
                // SubProg handle_common_options pc: 479 op: STARTLINE (58)

                /** cominit.e:508								OpWarning = and_bits(OpWarning, not_bits(warning_flags[n]))*/
                // SubProg handle_common_options pc: 481 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 483 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 485 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_5warning_flags_12520);
                _25742 = (object)*(((s1_ptr)_2)->base + _n_49698);
                // SubProg handle_common_options pc: 489 op: NOT_BITS (51)
                _25743 = not_bits(_25742);
                _25742 = NOVALUE;
                // SubProg handle_common_options pc: 492 op: AND_BITS (56)
                if (IS_ATOM_INT(_25743)) {
                    {uintptr_t tu;
                         tu = (uintptr_t)_5OpWarning_12545 & (uintptr_t)_25743;
                         _5OpWarning_12545 = MAKE_UINT(tu);
                    }
                }
                else {
                    temp_d.dbl = (eudouble)_5OpWarning_12545;
                    _5OpWarning_12545 = Dand_bits(&temp_d, DBL_PTR(_25743));
                }
                DeRef(_25743);
                _25743 = NOVALUE;
                // SubProg handle_common_options pc: 496 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_5OpWarning_12545)) {
                    _1 = (object)(DBL_PTR(_5OpWarning_12545)->dbl);
                    DeRefDS(_5OpWarning_12545);
                    _5OpWarning_12545 = _1;
                }
                // SubProg handle_common_options pc: 498 op: ELSE (23)
                goto L17; // [498] 523
                // SubProg handle_common_options pc: 500 op: NOP1 (159)
L16: // addr: 501 pc: 500 sub: 49602 op: 159
                // SubProg handle_common_options pc: 501 op: STARTLINE (58)

                /** cominit.e:510								option_w = -1*/
                // SubProg handle_common_options pc: 503 op: ASSIGN_I (113)
                _option_w_49607 = -1;
                // SubProg handle_common_options pc: 506 op: STARTLINE (58)

                /** cominit.e:511								OpWarning = all_warning_flag - warning_flags[n]*/
                // SubProg handle_common_options pc: 508 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 510 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 512 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_5warning_flags_12520);
                _25745 = (object)*(((s1_ptr)_2)->base + _n_49698);
                // SubProg handle_common_options pc: 516 op: MINUS (10)
                _5OpWarning_12545 = 32767 - _25745;
                _25745 = NOVALUE;
                // SubProg handle_common_options pc: 522 op: NOP1 (159)
L17: // addr: 523 pc: 522 sub: 49602 op: 159
                // SubProg handle_common_options pc: 523 op: STARTLINE (58)

                /** cominit.e:514							prev_OpWarning = OpWarning*/
                // SubProg handle_common_options pc: 525 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 527 op: ASSIGN (18)
                _5prev_OpWarning_12546 = _5OpWarning_12545;
                // SubProg handle_common_options pc: 530 op: INTEGER_CHECK (96)
                // SubProg handle_common_options pc: 532 op: NOP1 (159)
L14: // addr: 533 pc: 532 sub: 49602 op: 159
                // SubProg handle_common_options pc: 533 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var this_warn_49690
                DeRef(_this_warn_49690);
                _this_warn_49690 = NOVALUE;

// block var auto_add_warn_49692

// block var n_49698
                // SubProg handle_common_options pc: 535 op: STARTLINE (58)

                /** cominit.e:516					end for*/
                // SubProg handle_common_options pc: 537 op: ENDFOR_INT_UP1 (54)
                _i_49688 = _i_49688 + 1;
                goto L11; // [537] 410
L12: // addr: 542 pc: 537 sub: 49602 op: 54
                ;
            }
            // SubProg handle_common_options pc: 542 op: ELSE (23)
            goto L5; // [542] 782
            // SubProg handle_common_options pc: 544 op: STARTLINE (58)

            /** cominit.e:518				case "wf" then*/
            // SubProg handle_common_options pc: 546 op: CASE (186)
            case 12:
            // SubProg handle_common_options pc: 548 op: STARTLINE (58)

            /** cominit.e:519					TempWarningName = val*/
            // SubProg handle_common_options pc: 550 op: ASSIGN (18)
            Ref(_val_49613);
            DeRef(_5TempWarningName_12491);
            _5TempWarningName_12491 = _val_49613;
            // SubProg handle_common_options pc: 553 op: STARTLINE (58)

            /** cominit.e:520				  	error:warning_file(TempWarningName)*/
            // SubProg handle_common_options pc: 555 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 557 op: PROC (27)
            Ref(_5TempWarningName_12491);
            _3warning_file(_5TempWarningName_12491);
            // SubProg handle_common_options pc: 560 op: ELSE (23)
            goto L5; // [560] 782
            // SubProg handle_common_options pc: 562 op: STARTLINE (58)

            /** cominit.e:522				case "v", "version" then*/
            // SubProg handle_common_options pc: 564 op: CASE (186)
            case 13:
            // SubProg handle_common_options pc: 566 op: CASE (186)
            case 14:
            // SubProg handle_common_options pc: 568 op: STARTLINE (58)

            /** cominit.e:523					show_banner()*/
            // SubProg handle_common_options pc: 570 op: PROC (27)
            _47show_banner();
            // SubProg handle_common_options pc: 572 op: STARTLINE (58)

            /** cominit.e:524					if not batch_job and not test_only then*/
            // SubProg handle_common_options pc: 574 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 576 op: NOT (7)
            _25747 = (_5batch_job_12490 == 0);
            // SubProg handle_common_options pc: 579 op: SC1_AND_IF (146)
            if (_25747 == 0) {
                goto L18; // [579] 632
            }
            // SubProg handle_common_options pc: 583 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 585 op: NOT (7)
            _25749 = (_5test_only_12489 == 0);
            // SubProg handle_common_options pc: 588 op: NOP1 (159)
            // SubProg handle_common_options pc: 589 op: IF (20)
            if (_25749 == 0)
            {
                DeRef(_25749);
                _25749 = NOVALUE;
                goto L18; // [589] 632
            }
            else{
                DeRef(_25749);
                _25749 = NOVALUE;
            }
            // SubProg handle_common_options pc: 592 op: STARTLINE (58)

            /** cominit.e:525						console:maybe_any_key(GetMsgText(278,0), 2)*/
            // SubProg handle_common_options pc: 594 op: PROC (27)
            RefDS(_21958);
            _25750 = _40GetMsgText(278, 0, _21958);
            // SubProg handle_common_options pc: 600 op: ASSIGN (18)
            DeRef(_prompt_inlined_maybe_any_key_at_615_49733);
            _prompt_inlined_maybe_any_key_at_615_49733 = _25750;
            _25750 = NOVALUE;
            // SubProg handle_common_options pc: 603 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 605 op: STARTLINE (58)

            /** console.e:923		if not has_console() then*/
            // SubProg handle_common_options pc: 607 op: STARTLINE (58)

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            // SubProg handle_common_options pc: 609 op: MACHINE_FUNC (111)
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734 = machine(99, 0);
            // SubProg handle_common_options pc: 613 op: NOP1 (159)
            // SubProg handle_common_options pc: 614 op: NOT_IFW (108)
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734 != 0){
                    goto L19; // [614] 629
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734)->dbl != 0.0){
                    goto L19; // [614] 629
                }
            }
            // SubProg handle_common_options pc: 617 op: STARTLINE (58)

            /** console.e:924			any_key(prompt, con)*/
            // SubProg handle_common_options pc: 619 op: PROC (27)
            Ref(_prompt_inlined_maybe_any_key_at_615_49733);
            _37any_key(_prompt_inlined_maybe_any_key_at_615_49733, 2);
            // SubProg handle_common_options pc: 623 op: NOP1 (159)
            // SubProg handle_common_options pc: 624 op: STARTLINE (58)

            /** console.e:926	end procedure*/
            // SubProg handle_common_options pc: 626 op: ELSE (23)
            goto L19; // [626] 629
            // SubProg handle_common_options pc: 628 op: NOP1 (159)
L19: // addr: 629 pc: 628 sub: 49602 op: 159
            // SubProg handle_common_options pc: 629 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from handle_common_options @ 615

// block var prompt_inlined_maybe_any_key_at_615_49733
            DeRef(_prompt_inlined_maybe_any_key_at_615_49733);
            _prompt_inlined_maybe_any_key_at_615_49733 = NOVALUE;

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49734 = NOVALUE;
            // SubProg handle_common_options pc: 631 op: NOP1 (159)
L18: // addr: 632 pc: 631 sub: 49602 op: 159
            // SubProg handle_common_options pc: 632 op: STARTLINE (58)

            /** cominit.e:528					abort(0)*/
            // SubProg handle_common_options pc: 634 op: ABORT (126)
            UserCleanup(0);
            // SubProg handle_common_options pc: 636 op: ELSE (23)
            goto L5; // [636] 782
            // SubProg handle_common_options pc: 638 op: STARTLINE (58)

            /** cominit.e:530				case "copyright" then*/
            // SubProg handle_common_options pc: 640 op: CASE (186)
            case 15:
            // SubProg handle_common_options pc: 642 op: STARTLINE (58)

            /** cominit.e:531					show_copyrights()*/
            // SubProg handle_common_options pc: 644 op: PROC (27)
            _47show_copyrights();
            // SubProg handle_common_options pc: 646 op: STARTLINE (58)

            /** cominit.e:532					if not batch_job and not test_only then*/
            // SubProg handle_common_options pc: 648 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 650 op: NOT (7)
            _25751 = (_5batch_job_12490 == 0);
            // SubProg handle_common_options pc: 653 op: SC1_AND_IF (146)
            if (_25751 == 0) {
                goto L1A; // [653] 706
            }
            // SubProg handle_common_options pc: 657 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 659 op: NOT (7)
            _25753 = (_5test_only_12489 == 0);
            // SubProg handle_common_options pc: 662 op: NOP1 (159)
            // SubProg handle_common_options pc: 663 op: IF (20)
            if (_25753 == 0)
            {
                DeRef(_25753);
                _25753 = NOVALUE;
                goto L1A; // [663] 706
            }
            else{
                DeRef(_25753);
                _25753 = NOVALUE;
            }
            // SubProg handle_common_options pc: 666 op: STARTLINE (58)

            /** cominit.e:533						console:maybe_any_key(GetMsgText(278,0), 2)*/
            // SubProg handle_common_options pc: 668 op: PROC (27)
            RefDS(_21958);
            _25754 = _40GetMsgText(278, 0, _21958);
            // SubProg handle_common_options pc: 674 op: ASSIGN (18)
            DeRef(_prompt_inlined_maybe_any_key_at_689_49745);
            _prompt_inlined_maybe_any_key_at_689_49745 = _25754;
            _25754 = NOVALUE;
            // SubProg handle_common_options pc: 677 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 679 op: STARTLINE (58)

            /** console.e:923		if not has_console() then*/
            // SubProg handle_common_options pc: 681 op: STARTLINE (58)

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            // SubProg handle_common_options pc: 683 op: MACHINE_FUNC (111)
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746 = machine(99, 0);
            // SubProg handle_common_options pc: 687 op: NOP1 (159)
            // SubProg handle_common_options pc: 688 op: NOT_IFW (108)
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746 != 0){
                    goto L1B; // [688] 703
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746)->dbl != 0.0){
                    goto L1B; // [688] 703
                }
            }
            // SubProg handle_common_options pc: 691 op: STARTLINE (58)

            /** console.e:924			any_key(prompt, con)*/
            // SubProg handle_common_options pc: 693 op: PROC (27)
            Ref(_prompt_inlined_maybe_any_key_at_689_49745);
            _37any_key(_prompt_inlined_maybe_any_key_at_689_49745, 2);
            // SubProg handle_common_options pc: 697 op: NOP1 (159)
            // SubProg handle_common_options pc: 698 op: STARTLINE (58)

            /** console.e:926	end procedure*/
            // SubProg handle_common_options pc: 700 op: ELSE (23)
            goto L1B; // [700] 703
            // SubProg handle_common_options pc: 702 op: NOP1 (159)
L1B: // addr: 703 pc: 702 sub: 49602 op: 159
            // SubProg handle_common_options pc: 703 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from handle_common_options @ 689

// block var prompt_inlined_maybe_any_key_at_689_49745
            DeRef(_prompt_inlined_maybe_any_key_at_689_49745);
            _prompt_inlined_maybe_any_key_at_689_49745 = NOVALUE;

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49746 = NOVALUE;
            // SubProg handle_common_options pc: 705 op: NOP1 (159)
L1A: // addr: 706 pc: 705 sub: 49602 op: 159
            // SubProg handle_common_options pc: 706 op: STARTLINE (58)

            /** cominit.e:535					abort(0)*/
            // SubProg handle_common_options pc: 708 op: ABORT (126)
            UserCleanup(0);
            // SubProg handle_common_options pc: 710 op: ELSE (23)
            goto L5; // [710] 782
            // SubProg handle_common_options pc: 712 op: STARTLINE (58)

            /** cominit.e:537				case "eudir" then*/
            // SubProg handle_common_options pc: 714 op: CASE (186)
            case 16:
            // SubProg handle_common_options pc: 716 op: STARTLINE (58)

            /** cominit.e:538					set_eudir( val )*/
            // SubProg handle_common_options pc: 718 op: PROC (27)
            Ref(_val_49613);
            _7set_eudir(_val_49613);
            // SubProg handle_common_options pc: 721 op: ELSE (23)
            goto L5; // [721] 782
            // SubProg handle_common_options pc: 723 op: STARTLINE (58)

            /** cominit.e:540				case "trace-lines" then*/
            // SubProg handle_common_options pc: 725 op: CASE (186)
            case 17:
            // SubProg handle_common_options pc: 727 op: STARTLINE (58)

            /** cominit.e:541					val = value( val )*/
            // SubProg handle_common_options pc: 729 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 731 op: PROC (27)
            Ref(_val_49613);
            _0 = _val_49613;
            _val_49613 = _18value(_val_49613, 1, _18GET_SHORT_ANSWER_8826);
            DeRef(_0);
            // SubProg handle_common_options pc: 737 op: STARTLINE (58)

            /** cominit.e:542					if val[1] = GET_SUCCESS then*/
            // SubProg handle_common_options pc: 739 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_val_49613);
            _25756 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg handle_common_options pc: 743 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 745 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _25756, 0)){
                _25756 = NOVALUE;
                goto L1C; // [745] 763
            }
            _25756 = NOVALUE;
            // SubProg handle_common_options pc: 749 op: STARTLINE (58)

            /** cominit.e:543						trace_lines = floor( val[2] )*/
            // SubProg handle_common_options pc: 751 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_val_49613);
            _25758 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg handle_common_options pc: 755 op: FLOOR (83)
            if (IS_ATOM_INT(_25758))
            _5trace_lines_63969 = e_floor(_25758);
            else
            _5trace_lines_63969 = unary_op(FLOOR, _25758);
            _25758 = NOVALUE;
            // SubProg handle_common_options pc: 758 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_5trace_lines_63969)) {
                _1 = (object)(DBL_PTR(_5trace_lines_63969)->dbl);
                DeRefDS(_5trace_lines_63969);
                _5trace_lines_63969 = _1;
            }
            // SubProg handle_common_options pc: 760 op: ELSE (23)
            goto L1D; // [760] 781
            // SubProg handle_common_options pc: 762 op: NOP1 (159)
L1C: // addr: 763 pc: 762 sub: 49602 op: 159
            // SubProg handle_common_options pc: 763 op: STARTLINE (58)

            /** cominit.e:545						puts(2, GetMsgText( BAD_TRACE_LINES ) )*/
            // SubProg handle_common_options pc: 765 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 767 op: PROC (27)
            RefDS(_21958);
            _25760 = _40GetMsgText(604, 1, _21958);
            // SubProg handle_common_options pc: 773 op: PUTS (44)
            EPuts(2, _25760); // DJP 
            DeRef(_25760);
            _25760 = NOVALUE;
            // SubProg handle_common_options pc: 776 op: STARTLINE (58)

            /** cominit.e:546						abort( 1 )*/
            // SubProg handle_common_options pc: 778 op: ABORT (126)
            UserCleanup(1);
            // SubProg handle_common_options pc: 780 op: NOP1 (159)
L1D: // addr: 781 pc: 780 sub: 49602 op: 159
            // SubProg handle_common_options pc: 781 op: NOPSWITCH (187)
        ;}L5: // addr: 782 pc: 781 sub: 49602 op: 187
        // SubProg handle_common_options pc: 782 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var key_49611
        DeRef(_key_49611);
        _key_49611 = NOVALUE;

// block var val_49613
        DeRef(_val_49613);
        _val_49613 = NOVALUE;
        // SubProg handle_common_options pc: 784 op: STARTLINE (58)

        /** cominit.e:549		end for*/
        // SubProg handle_common_options pc: 786 op: ENDFOR_INT_UP1 (54)
        _idx_49609 = _idx_49609 + 1;
        goto L1; // [786] 27
L2: // addr: 791 pc: 786 sub: 49602 op: 54
        ;
    }
    // SubProg handle_common_options pc: 791 op: STARTLINE (58)

    /** cominit.e:551		if length(LocalizeQual) = 0 then*/
    // SubProg handle_common_options pc: 793 op: GLOBAL_INIT_CHECK (109)
    // SubProg handle_common_options pc: 795 op: LENGTH (42)
    if (IS_SEQUENCE(_7LocalizeQual_11409)){
            _25761 = SEQ_PTR(_7LocalizeQual_11409)->length;
    }
    else {
        _25761 = 1;
    }
    // SubProg handle_common_options pc: 798 op: EQUALS_IFW_I (121)
    if (_25761 != 0)
    goto L1E; // [798] 811
    // SubProg handle_common_options pc: 802 op: STARTLINE (58)

    /** cominit.e:552			LocalizeQual = {"en"}*/
    // SubProg handle_common_options pc: 804 op: RIGHT_BRACE_N (31)
    _0 = _7LocalizeQual_11409;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_25763);
    ((intptr_t*)_2)[1] = _25763;
    _7LocalizeQual_11409 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg handle_common_options pc: 808 op: SEQUENCE_CHECK (97)
    // SubProg handle_common_options pc: 810 op: NOP1 (159)
L1E: // addr: 811 pc: 810 sub: 49602 op: 159
    // SubProg handle_common_options pc: 811 op: STARTLINE (58)

    /** cominit.e:554	end procedure*/
    // SubProg handle_common_options pc: 813 op: RETURNP (29)

// Exiting block BLOCK: handle_common_options

// block var opts_49604
    DeRef(_opts_49604);

// block var opt_keys_49605
    DeRef(_opt_keys_49605);

// block var option_w_49607
    DeRef(_25747);
    _25747 = NOVALUE;
    DeRef(_25751);
    _25751 = NOVALUE;
    return;
    // SubProg handle_common_options pc: 816 op: BADRETURNF (43)
    ;
}


void _47finalize_command_line(object _opts_49772)
{
    object _extras_49779 = NOVALUE;
    object _pairs_49784 = NOVALUE;
    object _pair_49789 = NOVALUE;
// skipping _25796  name type: 0
// skipping _25795  name type: 0
// skipping _25794  name type: 0
    object _25793 = NOVALUE; // 49822 25793
// skipping _25792  name type: 0
    object _25791 = NOVALUE; // 49818 25791
// skipping _25790  name type: 0
// skipping _25789  name type: 0
    object _25788 = NOVALUE; // 49813 25788
    object _25787 = NOVALUE; // 49812 25787
    object _25786 = NOVALUE; // 49811 25786
    object _25785 = NOVALUE; // 49810 25785
    object _25784 = NOVALUE; // 49809 25784
    object _25783 = NOVALUE; // 49808 25783
    object _25782 = NOVALUE; // 49805 25782
    object _25781 = NOVALUE; // 49804 25781
    object _25780 = NOVALUE; // 49803 25780
    object _25779 = NOVALUE; // 49802 25779
    object _25778 = NOVALUE; // 49801 25778
    object _25777 = NOVALUE; // 49800 25777
    object _25776 = NOVALUE; // 49798 25776
    object _25775 = NOVALUE; // 49797 25775
    object _25774 = NOVALUE; // 49795 25774
    object _25773 = NOVALUE; // 49794 25773
    object _25772 = NOVALUE; // 49793 25772
    object _25771 = NOVALUE; // 49792 25771
// skipping _25770  name type: 0
    object _25769 = NOVALUE; // 49788 25769
// skipping _25768  name type: 0
// skipping _25767  name type: 0
    object _25766 = NOVALUE; // 49782 25766
// skipping _25765  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg finalize_command_line pc: 1 op: STARTLINE (58)

    /** cominit.e:562		if Strict_is_on then -- overrides any -W/-X switches*/
    // SubProg finalize_command_line pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 5 op: IF (20)
    if (_5Strict_is_on_12543 == 0)
    {
        goto L1; // [5] 27
    }
    else{
    }
    // SubProg finalize_command_line pc: 8 op: STARTLINE (58)

    /** cominit.e:563			OpWarning = all_warning_flag*/
    // SubProg finalize_command_line pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 12 op: ASSIGN (18)
    _5OpWarning_12545 = 32767;
    // SubProg finalize_command_line pc: 15 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 17 op: STARTLINE (58)

    /** cominit.e:564			prev_OpWarning = OpWarning*/
    // SubProg finalize_command_line pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 21 op: ASSIGN (18)
    _5prev_OpWarning_12546 = 32767;
    // SubProg finalize_command_line pc: 24 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 49770 op: 159
    // SubProg finalize_command_line pc: 27 op: STARTLINE (58)

    /** cominit.e:569		sequence extras = m:get(opts, cmdline:EXTRAS)*/
    // SubProg finalize_command_line pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 31 op: PROC (27)
    Ref(_opts_49772);
    RefDS(_48EXTRAS_20250);
    _0 = _extras_49779;
    _extras_49779 = _33get(_opts_49772, _48EXTRAS_20250, 0);
    DeRef(_0);
    // SubProg finalize_command_line pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 39 op: STARTLINE (58)

    /** cominit.e:570		if length(extras) > 0 then*/
    // SubProg finalize_command_line pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_extras_49779)){
            _25766 = SEQ_PTR(_extras_49779)->length;
    }
    else {
        _25766 = 1;
    }
    // SubProg finalize_command_line pc: 44 op: GREATER_IFW_I (124)
    if (_25766 <= 0)
    goto L2; // [44] 270
    // SubProg finalize_command_line pc: 48 op: STARTLINE (58)

    /** cominit.e:571			sequence pairs = m:pairs( opts )*/
    // SubProg finalize_command_line pc: 50 op: PROC (27)
    Ref(_opts_49772);
    _0 = _pairs_49784;
    _pairs_49784 = _33pairs(_opts_49772, 0);
    DeRef(_0);
    // SubProg finalize_command_line pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 57 op: STARTLINE (58)

    /** cominit.e:573			for i = 1 to length( pairs ) do*/
    // SubProg finalize_command_line pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_pairs_49784)){
            _25769 = SEQ_PTR(_pairs_49784)->length;
    }
    else {
        _25769 = 1;
    }
    // SubProg finalize_command_line pc: 62 op: FOR_I (125)
    {
        object _i_49787;
        _i_49787 = 1;
L3: // addr: 69 pc: 62 sub: 49770 op: 125
        if (_i_49787 > _25769){
            goto L4; // [62] 237
        }
        // SubProg finalize_command_line pc: 69 op: STARTLINE (58)

        /** cominit.e:574				sequence pair = pairs[i]*/
        // SubProg finalize_command_line pc: 71 op: RHS_SUBS (25)
        DeRef(_pair_49789);
        _2 = (object)SEQ_PTR(_pairs_49784);
        _pair_49789 = (object)*(((s1_ptr)_2)->base + _i_49787);
        Ref(_pair_49789);
        // SubProg finalize_command_line pc: 75 op: SEQUENCE_CHECK (97)
        // SubProg finalize_command_line pc: 77 op: STARTLINE (58)

        /** cominit.e:575				if equal( pair[1], cmdline:EXTRAS ) then*/
        // SubProg finalize_command_line pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49789);
        _25771 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 85 op: EQUAL (153)
        if (_25771 == _48EXTRAS_20250)
        _25772 = 1;
        else if (IS_ATOM_INT(_25771) && IS_ATOM_INT(_48EXTRAS_20250))
        _25772 = 0;
        else
        _25772 = (compare(_25771, _48EXTRAS_20250) == 0);
        _25771 = NOVALUE;
        // SubProg finalize_command_line pc: 89 op: IF (20)
        if (_25772 == 0)
        {
            _25772 = NOVALUE;
            goto L5; // [89] 99
        }
        else{
            _25772 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 92 op: STARTLINE (58)

        /** cominit.e:576					continue*/
        // SubProg finalize_command_line pc: 94 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var pair_49789
        DeRefDS(_pair_49789);
        _pair_49789 = NOVALUE;
        // SubProg finalize_command_line pc: 96 op: ELSE (23)
        goto L6; // [96] 232
        // SubProg finalize_command_line pc: 98 op: NOP1 (159)
L5: // addr: 99 pc: 98 sub: 49770 op: 159
        // SubProg finalize_command_line pc: 99 op: STARTLINE (58)

        /** cominit.e:578				pair[1] = prepend( pair[1], '-' )*/
        // SubProg finalize_command_line pc: 101 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49789);
        _25773 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 105 op: PREPEND (57)
        Prepend(&_25774, _25773, 45);
        _25773 = NOVALUE;
        // SubProg finalize_command_line pc: 109 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_pair_49789);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pair_49789 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25774;
        if( _1 != _25774 ){
            DeRef(_1);
        }
        _25774 = NOVALUE;
        // SubProg finalize_command_line pc: 113 op: STARTLINE (58)

        /** cominit.e:579				if sequence( pair[2] ) then*/
        // SubProg finalize_command_line pc: 115 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49789);
        _25775 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 119 op: IS_A_SEQUENCE (68)
        _25776 = IS_SEQUENCE(_25775);
        _25775 = NOVALUE;
        // SubProg finalize_command_line pc: 122 op: IF (20)
        if (_25776 == 0)
        {
            _25776 = NOVALUE;
            goto L7; // [122] 215
        }
        else{
            _25776 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 125 op: STARTLINE (58)

        /** cominit.e:580					if length( pair[2] ) and sequence( pair[2][1] ) then*/
        // SubProg finalize_command_line pc: 127 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49789);
        _25777 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 131 op: LENGTH (42)
        if (IS_SEQUENCE(_25777)){
                _25778 = SEQ_PTR(_25777)->length;
        }
        else {
            _25778 = 1;
        }
        _25777 = NOVALUE;
        // SubProg finalize_command_line pc: 134 op: SC1_AND_IF (146)
        if (_25778 == 0) {
            goto L8; // [134] 203
        }
        // SubProg finalize_command_line pc: 138 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49789);
        _25780 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 142 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25780);
        _25781 = (object)*(((s1_ptr)_2)->base + 1);
        _25780 = NOVALUE;
        // SubProg finalize_command_line pc: 146 op: IS_A_SEQUENCE (68)
        _25782 = IS_SEQUENCE(_25781);
        _25781 = NOVALUE;
        // SubProg finalize_command_line pc: 149 op: NOP1 (159)
        // SubProg finalize_command_line pc: 150 op: IF (20)
        if (_25782 == 0)
        {
            _25782 = NOVALUE;
            goto L8; // [150] 203
        }
        else{
            _25782 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 153 op: STARTLINE (58)

        /** cominit.e:581						for j = 1 to length( pair[2] ) do*/
        // SubProg finalize_command_line pc: 155 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49789);
        _25783 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 159 op: LENGTH (42)
        if (IS_SEQUENCE(_25783)){
                _25784 = SEQ_PTR(_25783)->length;
        }
        else {
            _25784 = 1;
        }
        _25783 = NOVALUE;
        // SubProg finalize_command_line pc: 162 op: FOR_I (125)
        {
            object _j_49807;
            _j_49807 = 1;
L9: // addr: 169 pc: 162 sub: 49770 op: 125
            if (_j_49807 > _25784){
                goto LA; // [162] 200
            }
            // SubProg finalize_command_line pc: 169 op: STARTLINE (58)

            /** cominit.e:582							switches &= { pair[1], pair[2][j] }*/
            // SubProg finalize_command_line pc: 171 op: GLOBAL_INIT_CHECK (109)
            // SubProg finalize_command_line pc: 173 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pair_49789);
            _25785 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg finalize_command_line pc: 177 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pair_49789);
            _25786 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg finalize_command_line pc: 181 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_25786);
            _25787 = (object)*(((s1_ptr)_2)->base + _j_49807);
            _25786 = NOVALUE;
            // SubProg finalize_command_line pc: 185 op: RIGHT_BRACE_2 (85)
            Ref(_25787);
            Ref(_25785);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _25785;
            ((intptr_t *)_2)[2] = _25787;
            _25788 = MAKE_SEQ(_1);
            _25787 = NOVALUE;
            _25785 = NOVALUE;
            // SubProg finalize_command_line pc: 189 op: CONCAT (15)
            Concat((object_ptr)&_47switches_49128, _47switches_49128, _25788);
            DeRefDS(_25788);
            _25788 = NOVALUE;
            // SubProg finalize_command_line pc: 193 op: STARTLINE (58)

            /** cominit.e:583						end for*/
            // SubProg finalize_command_line pc: 195 op: ENDFOR_INT_UP1 (54)
            _j_49807 = _j_49807 + 1;
            goto L9; // [195] 169
LA: // addr: 200 pc: 195 sub: 49770 op: 54
            ;
        }
        // SubProg finalize_command_line pc: 200 op: ELSE (23)
        goto LB; // [200] 228
        // SubProg finalize_command_line pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 49770 op: 159
        // SubProg finalize_command_line pc: 203 op: STARTLINE (58)

        /** cominit.e:585						switches &= pair*/
        // SubProg finalize_command_line pc: 205 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 207 op: CONCAT (15)
        Concat((object_ptr)&_47switches_49128, _47switches_49128, _pair_49789);
        // SubProg finalize_command_line pc: 211 op: NOP1 (159)
        // SubProg finalize_command_line pc: 212 op: ELSE (23)
        goto LB; // [212] 228
        // SubProg finalize_command_line pc: 214 op: NOP1 (159)
L7: // addr: 215 pc: 214 sub: 49770 op: 159
        // SubProg finalize_command_line pc: 215 op: STARTLINE (58)

        /** cominit.e:588					switches = append( switches, pair[1] )*/
        // SubProg finalize_command_line pc: 217 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 219 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49789);
        _25791 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 223 op: APPEND (35)
        Ref(_25791);
        Append(&_47switches_49128, _47switches_49128, _25791);
        _25791 = NOVALUE;
        // SubProg finalize_command_line pc: 227 op: NOP1 (159)
LB: // addr: 228 pc: 227 sub: 49770 op: 159
        // SubProg finalize_command_line pc: 228 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var pair_49789
        DeRef(_pair_49789);
        _pair_49789 = NOVALUE;
        // SubProg finalize_command_line pc: 230 op: STARTLINE (58)

        /** cominit.e:590			end for*/
        // SubProg finalize_command_line pc: 232 op: ENDFOR_INT_UP1 (54)
L6: // addr: 232 pc: 232 sub: 49770 op: 54
        _i_49787 = _i_49787 + 1;
        goto L3; // [232] 69
L4: // addr: 237 pc: 232 sub: 49770 op: 54
        ;
    }
    // SubProg finalize_command_line pc: 237 op: STARTLINE (58)

    /** cominit.e:592			Argv = Argv[2..3] & extras*/
    // SubProg finalize_command_line pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 241 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25793;
    RHS_Slice(_5Argv_12488, 2, 3);
    // SubProg finalize_command_line pc: 246 op: CONCAT (15)
    Concat((object_ptr)&_5Argv_12488, _25793, _extras_49779);
    DeRefDS(_25793);
    _25793 = NOVALUE;
    DeRef(_25793);
    _25793 = NOVALUE;
    // SubProg finalize_command_line pc: 250 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 252 op: STARTLINE (58)

    /** cominit.e:593			Argc = length(Argv)*/
    // SubProg finalize_command_line pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 256 op: LENGTH (42)
    if (IS_SEQUENCE(_5Argv_12488)){
            _5Argc_12487 = SEQ_PTR(_5Argv_12488)->length;
    }
    else {
        _5Argc_12487 = 1;
    }
    // SubProg finalize_command_line pc: 259 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 261 op: STARTLINE (58)

    /** cominit.e:595			src_name = extras[1]*/
    // SubProg finalize_command_line pc: 263 op: RHS_SUBS (25)
    DeRef(_47src_name_49127);
    _2 = (object)SEQ_PTR(_extras_49779);
    _47src_name_49127 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_47src_name_49127);
    // SubProg finalize_command_line pc: 267 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 269 op: NOP1 (159)
L2: // addr: 270 pc: 269 sub: 49770 op: 159
    // SubProg finalize_command_line pc: 270 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pairs_49784
    DeRef(_pairs_49784);
    _pairs_49784 = NOVALUE;
    // SubProg finalize_command_line pc: 272 op: STARTLINE (58)

    /** cominit.e:597	end procedure*/
    // SubProg finalize_command_line pc: 274 op: RETURNP (29)

// Exiting block BLOCK: finalize_command_line

// block var opts_49772
    DeRef(_opts_49772);

// block var extras_49779
    DeRef(_extras_49779);
    _25777 = NOVALUE;
    _25783 = NOVALUE;
    return;
    // SubProg finalize_command_line pc: 277 op: BADRETURNF (43)
    ;
}



// 0xEF991FF1
