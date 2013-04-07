// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _47add_options(object _new_options_49169)
{
// skipping _25428  name type: 0
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
            Concat(&_47options_49165,_new_options_49169,_47options_49165);
        }
        else if (insert_pos > SEQ_PTR(_47options_49165)->length){
            Concat(&_47options_49165,_47options_49165,_new_options_49169);
        }
        else if (IS_SEQUENCE(_new_options_49169)) {
            if( _47options_49165 != _47options_49165 || SEQ_PTR( _47options_49165 )->ref != 1 ){
                DeRef( _47options_49165 );
                RefDS( _47options_49165 );
            }
            assign_space = Add_internal_space( _47options_49165, insert_pos,((s1_ptr)SEQ_PTR(_new_options_49169))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_new_options_49169), _47options_49165 == _47options_49165 );
            _47options_49165 = MAKE_SEQ( assign_space );
        }
        else {
            if( _47options_49165 != _47options_49165 && SEQ_PTR( _47options_49165 )->ref != 1 ){
                _47options_49165 = Insert( _47options_49165, _new_options_49169, insert_pos);
            }
            else {
                DeRef( _47options_49165 );
                RefDS( _47options_49165 );
                _47options_49165 = Insert( _47options_49165, _new_options_49169, insert_pos);
            }
        }
    }
    // SubProg add_options pc: 14 op: STARTLINE (58)

    /** cominit.e:67	end procedure*/
    // SubProg add_options pc: 16 op: RETURNP (29)

// Exiting block BLOCK: add_options

// block var new_options_49169
    DeRefDS(_new_options_49169);
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
    RefDS(_47options_49165);

// Exiting block BLOCK: get_options
    return _47options_49165;
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
    RefDS(_47switches_49054);

// Exiting block BLOCK: get_switches
    return _47switches_49054;
    // SubProg get_switches pc: 9 op: BADRETURNF (43)
    ;
}


void _47show_copyrights()
{
    object _notices_49179 = NOVALUE;
    object _25438 = NOVALUE; // 49193 25438
    object _25437 = NOVALUE; // 49192 25437
    object _25435 = NOVALUE; // 49190 25435
    object _25434 = NOVALUE; // 49189 25434
    object _25433 = NOVALUE; // 49187 25433
    object _25432 = NOVALUE; // 49186 25432
    object _25430 = NOVALUE; // 49184 25430
// skipping _25429  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_copyrights pc: 1 op: STARTLINE (58)

    /** cominit.e:94		sequence notices = all_copyrights()*/
    // SubProg show_copyrights pc: 3 op: PROC (27)
    _0 = _notices_49179;
    _notices_49179 = _32all_copyrights();
    DeRef(_0);
    // SubProg show_copyrights pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg show_copyrights pc: 8 op: STARTLINE (58)

    /** cominit.e:95		for i = 1 to length(notices) do*/
    // SubProg show_copyrights pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_notices_49179)){
            _25430 = SEQ_PTR(_notices_49179)->length;
    }
    else {
        _25430 = 1;
    }
    // SubProg show_copyrights pc: 13 op: FOR_I (125)
    {
        object _i_49183;
        _i_49183 = 1;
L1: // addr: 20 pc: 13 sub: 49177 op: 125
        if (_i_49183 > _25430){
            goto L2; // [13] 60
        }
        // SubProg show_copyrights pc: 20 op: STARTLINE (58)

        /** cominit.e:96			printf(2, "%s\n  %s\n\n", { notices[i][1], match_replace("\n", notices[i][2], "\n  ") })*/
        // SubProg show_copyrights pc: 22 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_notices_49179);
        _25432 = (object)*(((s1_ptr)_2)->base + _i_49183);
        // SubProg show_copyrights pc: 26 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25432);
        _25433 = (object)*(((s1_ptr)_2)->base + 1);
        _25432 = NOVALUE;
        // SubProg show_copyrights pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_notices_49179);
        _25434 = (object)*(((s1_ptr)_2)->base + _i_49183);
        // SubProg show_copyrights pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25434);
        _25435 = (object)*(((s1_ptr)_2)->base + 2);
        _25434 = NOVALUE;
        // SubProg show_copyrights pc: 38 op: PROC (27)
        RefDS(_22131);
        Ref(_25435);
        RefDS(_25436);
        _25437 = _17match_replace(_22131, _25435, _25436, 0);
        _25435 = NOVALUE;
        // SubProg show_copyrights pc: 45 op: RIGHT_BRACE_2 (85)
        Ref(_25433);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25433;
        ((intptr_t *)_2)[2] = _25437;
        _25438 = MAKE_SEQ(_1);
        _25437 = NOVALUE;
        _25433 = NOVALUE;
        // SubProg show_copyrights pc: 49 op: PRINTF (38)
        EPrintf(2, _25431, _25438);
        DeRefDS(_25438);
        _25438 = NOVALUE;
        // SubProg show_copyrights pc: 53 op: STARTLINE (58)

        /** cominit.e:97		end for*/
        // SubProg show_copyrights pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_49183 = _i_49183 + 1;
        goto L1; // [55] 20
L2: // addr: 60 pc: 55 sub: 49177 op: 54
        ;
    }
    // SubProg show_copyrights pc: 60 op: STARTLINE (58)

    /** cominit.e:98	end procedure*/
    // SubProg show_copyrights pc: 62 op: RETURNP (29)

// Exiting block BLOCK: show_copyrights

// block var notices_49179
    DeRef(_notices_49179);
    return;
    // SubProg show_copyrights pc: 65 op: BADRETURNF (43)
    ;
}


void _47show_banner()
{
    object _version_type_inlined_version_type_at_210_49247 = NOVALUE;
    object _version_string_short_1__tmp_at194_49245 = NOVALUE;
    object _version_string_short_inlined_version_string_short_at_194_49244 = NOVALUE;
    object _version_revision_inlined_version_revision_at_125_49226 = NOVALUE;
    object _platform_name_inlined_platform_name_at_86_49218 = NOVALUE;
    object _prod_name_49196 = NOVALUE;
    object _memory_type_49197 = NOVALUE;
    object _misc_info_49215 = NOVALUE;
    object _EuConsole_49230 = NOVALUE;
    object _25463 = NOVALUE; // 49250 25463
    object _25462 = NOVALUE; // 49249 25462
    object _25461 = NOVALUE; // 49248 25461
// skipping _25459  name type: 0
    object _25458 = NOVALUE; // 49237 25458
    object _25457 = NOVALUE; // 49235 25457
// skipping _25455  name type: 0
    object _25453 = NOVALUE; // 49229 25453
    object _25452 = NOVALUE; // 49228 25452
    object _25451 = NOVALUE; // 49227 25451
    object _25449 = NOVALUE; // 49223 25449
// skipping _25448  name type: 0
    object _25447 = NOVALUE; // 49220 25447
    object _25446 = NOVALUE; // 49219 25446
    object _25445 = NOVALUE; // 49216 25445
// skipping _25444  name type: 0
// skipping _25443  name type: 0
// skipping _25442  name type: 0
// skipping _25441  name type: 0
    object _25440 = NOVALUE; // 49202 25440
    object _25439 = NOVALUE; // 49200 25439
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_banner pc: 1 op: STARTLINE (58)

    /** cominit.e:109		if INTERPRET and not BIND then*/
    // SubProg show_banner pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 5 op: SC1_AND_IF (146)
    if (_34INTERPRET_14810 == 0) {
        goto L1; // [5] 31
    }
    // SubProg show_banner pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 11 op: NOT (7)
    _25440 = (_34BIND_14816 == 0);
    // SubProg show_banner pc: 14 op: NOP1 (159)
    // SubProg show_banner pc: 15 op: IF (20)
    if (_25440 == 0)
    {
        DeRef(_25440);
        _25440 = NOVALUE;
        goto L1; // [15] 31
    }
    else{
        DeRef(_25440);
        _25440 = NOVALUE;
    }
    // SubProg show_banner pc: 18 op: STARTLINE (58)

    /** cominit.e:110			prod_name = GetMsgText(270,0)*/
    // SubProg show_banner pc: 20 op: PROC (27)
    RefDS(_21936);
    _0 = _prod_name_49196;
    _prod_name_49196 = _40GetMsgText(270, 0, _21936);
    DeRef(_0);
    // SubProg show_banner pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 28 op: ELSE (23)
    goto L2; // [28] 70
    // SubProg show_banner pc: 30 op: NOP1 (159)
L1: // addr: 31 pc: 30 sub: 49194 op: 159
    // SubProg show_banner pc: 31 op: STARTLINE (58)

    /** cominit.e:112		elsif TRANSLATE then*/
    // SubProg show_banner pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 35 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L3; // [35] 51
    }
    else{
    }
    // SubProg show_banner pc: 38 op: STARTLINE (58)

    /** cominit.e:113			prod_name = GetMsgText(271,0)*/
    // SubProg show_banner pc: 40 op: PROC (27)
    RefDS(_21936);
    _0 = _prod_name_49196;
    _prod_name_49196 = _40GetMsgText(271, 0, _21936);
    DeRef(_0);
    // SubProg show_banner pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 48 op: ELSE (23)
    goto L2; // [48] 70
    // SubProg show_banner pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 49194 op: 159
    // SubProg show_banner pc: 51 op: STARTLINE (58)

    /** cominit.e:115		elsif BIND then*/
    // SubProg show_banner pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 55 op: IF (20)
    if (_34BIND_14816 == 0)
    {
        goto L4; // [55] 69
    }
    else{
    }
    // SubProg show_banner pc: 58 op: STARTLINE (58)

    /** cominit.e:116			prod_name = GetMsgText(272,0)*/
    // SubProg show_banner pc: 60 op: PROC (27)
    RefDS(_21936);
    _0 = _prod_name_49196;
    _prod_name_49196 = _40GetMsgText(272, 0, _21936);
    DeRef(_0);
    // SubProg show_banner pc: 66 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 49194 op: 159
    // SubProg show_banner pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 49194 op: 159
    // SubProg show_banner pc: 70 op: STARTLINE (58)

    /** cominit.e:119		ifdef EU_MANAGED_MEM then*/
    // SubProg show_banner pc: 72 op: STARTLINE (58)

    /** cominit.e:122			memory_type = GetMsgText(274,0)*/
    // SubProg show_banner pc: 74 op: PROC (27)
    RefDS(_21936);
    _0 = _memory_type_49197;
    _memory_type_49197 = _40GetMsgText(274, 0, _21936);
    DeRef(_0);
    // SubProg show_banner pc: 80 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 82 op: STARTLINE (58)

    /** cominit.e:125		sequence misc_info = {*/
    // SubProg show_banner pc: 84 op: PROC (27)
    _25445 = _32arch_bits();
    // SubProg show_banner pc: 87 op: STARTLINE (58)

    /** info.e:48		ifdef WINDOWS then*/
    // SubProg show_banner pc: 89 op: STARTLINE (58)

    /** info.e:51			return "Linux"*/
    // SubProg show_banner pc: 91 op: ASSIGN (18)
    RefDS(_6785);
    DeRefi(_platform_name_inlined_platform_name_at_86_49218);
    _platform_name_inlined_platform_name_at_86_49218 = _6785;
    // SubProg show_banner pc: 94 op: NOP1 (159)
    // SubProg show_banner pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg show_banner pc: 97 op: PROC (27)
    _25446 = _32version_date(0);
    // SubProg show_banner pc: 101 op: PROC (27)
    _25447 = _32version_node(0);
    // SubProg show_banner pc: 105 op: RIGHT_BRACE_N (31)
    _0 = _misc_info_49215;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25445;
    RefDS(_platform_name_inlined_platform_name_at_86_49218);
    ((intptr_t*)_2)[2] = _platform_name_inlined_platform_name_at_86_49218;
    RefDS(_memory_type_49197);
    ((intptr_t*)_2)[3] = _memory_type_49197;
    RefDS(_21936);
    ((intptr_t*)_2)[4] = _21936;
    ((intptr_t*)_2)[5] = _25446;
    ((intptr_t*)_2)[6] = _25447;
    _misc_info_49215 = MAKE_SEQ(_1);
    DeRef(_0);
    _25447 = NOVALUE;
    _25446 = NOVALUE;
    _25445 = NOVALUE;
    // SubProg show_banner pc: 114 op: STARTLINE (58)

    /** cominit.e:134		if info:is_developmental then*/
    // SubProg show_banner pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 118 op: IF (20)
    if (_32is_developmental_12123 == 0)
    {
        goto L5; // [118] 152
    }
    else{
    }
    // SubProg show_banner pc: 121 op: STARTLINE (58)

    /** cominit.e:135			misc_info[$] = sprintf("%d:%s", { info:version_revision(), info:version_node() })*/
    // SubProg show_banner pc: 123 op: LENGTH (42)
    // Known sequence length:
    _25449 = 6;
    // SubProg show_banner pc: 126 op: STARTLINE (58)

    /** info.e:157		return version_info[REVISION]*/
    // SubProg show_banner pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 130 op: RHS_SUBS_CHECK (92)
    DeRef(_version_revision_inlined_version_revision_at_125_49226);
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _version_revision_inlined_version_revision_at_125_49226 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_125_49226);
    // SubProg show_banner pc: 134 op: NOP1 (159)
    // SubProg show_banner pc: 135 op: PROC (27)
    _25451 = _32version_node(0);
    // SubProg show_banner pc: 139 op: RIGHT_BRACE_2 (85)
    Ref(_version_revision_inlined_version_revision_at_125_49226);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _version_revision_inlined_version_revision_at_125_49226;
    ((intptr_t *)_2)[2] = _25451;
    _25452 = MAKE_SEQ(_1);
    _25451 = NOVALUE;
    // SubProg show_banner pc: 143 op: SPRINTF (53)
    _25453 = EPrintf(-9999999, _25450, _25452);
    DeRefDS(_25452);
    _25452 = NOVALUE;
    // SubProg show_banner pc: 147 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_misc_info_49215);
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25453;
    if( _1 != _25453 ){
        DeRef(_1);
    }
    _25453 = NOVALUE;
    // SubProg show_banner pc: 151 op: NOP1 (159)
L5: // addr: 152 pc: 151 sub: 49194 op: 159
    // SubProg show_banner pc: 152 op: STARTLINE (58)

    /** cominit.e:138		object EuConsole = getenv("EUCONS")*/
    // SubProg show_banner pc: 154 op: GETENV (91)
    DeRefi(_EuConsole_49230);
    _EuConsole_49230 = EGetEnv(_25454);
    // SubProg show_banner pc: 157 op: STARTLINE (58)

    /** cominit.e:139		if equal(EuConsole, "1") then*/
    // SubProg show_banner pc: 159 op: EQUAL (153)
    if (_EuConsole_49230 == _25456)
    _25457 = 1;
    else if (IS_ATOM_INT(_EuConsole_49230) && IS_ATOM_INT(_25456))
    _25457 = 0;
    else
    _25457 = (compare(_EuConsole_49230, _25456) == 0);
    // SubProg show_banner pc: 163 op: IF (20)
    if (_25457 == 0)
    {
        _25457 = NOVALUE;
        goto L6; // [163] 181
    }
    else{
        _25457 = NOVALUE;
    }
    // SubProg show_banner pc: 166 op: STARTLINE (58)

    /** cominit.e:140			misc_info[4] = GetMsgText(275,0)*/
    // SubProg show_banner pc: 168 op: PROC (27)
    RefDS(_21936);
    _25458 = _40GetMsgText(275, 0, _21936);
    // SubProg show_banner pc: 174 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_misc_info_49215);
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25458;
    if( _1 != _25458 ){
        DeRef(_1);
    }
    _25458 = NOVALUE;
    // SubProg show_banner pc: 178 op: ELSE (23)
    goto L7; // [178] 189
    // SubProg show_banner pc: 180 op: NOP1 (159)
L6: // addr: 181 pc: 180 sub: 49194 op: 159
    // SubProg show_banner pc: 181 op: STARTLINE (58)

    /** cominit.e:142			misc_info = remove(misc_info, 4)*/
    // SubProg show_banner pc: 183 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_misc_info_49215);
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
                Head( SEQ_PTR(_misc_info_49215), start, &_misc_info_49215 );
            }
            else Tail(SEQ_PTR(_misc_info_49215), stop+1, &_misc_info_49215);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_misc_info_49215), start, &_misc_info_49215);
        }
        else {
            assign_slice_seq = &assign_space;
            _misc_info_49215 = Remove_elements(start, stop, (SEQ_PTR(_misc_info_49215)->ref == 1));
        }
    }
    // SubProg show_banner pc: 188 op: NOP1 (159)
L7: // addr: 189 pc: 188 sub: 49194 op: 159
    // SubProg show_banner pc: 189 op: STARTLINE (58)

    /** cominit.e:145		screen_output(STDERR, sprintf("%s v%s %s\n   %s %s, %s\n   Revision Date: %s, Id: %s\n", {*/
    // SubProg show_banner pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 193 op: PRIVATE_INIT_CHECK (30)
    // SubProg show_banner pc: 195 op: STARTLINE (58)

    /** info.e:261		return sprintf("%d.%d.%d", version_info[MAJ_VER..PAT_VER])*/
    // SubProg show_banner pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 199 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_version_string_short_1__tmp_at194_49245;
    RHS_Slice(_32version_info_12121, 1, 3);
    // SubProg show_banner pc: 204 op: SPRINTF (53)
    DeRefi(_version_string_short_inlined_version_string_short_at_194_49244);
    _version_string_short_inlined_version_string_short_at_194_49244 = EPrintf(-9999999, _6841, _version_string_short_1__tmp_at194_49245);
    // SubProg show_banner pc: 208 op: NOP1 (159)
    // SubProg show_banner pc: 209 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-version_string_short from show_banner @ 194

// block var version_string_short_1__tmp_at194_49245
    DeRef(_version_string_short_1__tmp_at194_49245);
    _version_string_short_1__tmp_at194_49245 = NOVALUE;
    // SubProg show_banner pc: 211 op: STARTLINE (58)

    /** info.e:202		return version_info[VER_TYPE]*/
    // SubProg show_banner pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 215 op: RHS_SUBS_CHECK (92)
    DeRef(_version_type_inlined_version_type_at_210_49247);
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _version_type_inlined_version_type_at_210_49247 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_version_type_inlined_version_type_at_210_49247);
    // SubProg show_banner pc: 219 op: NOP1 (159)
    // SubProg show_banner pc: 220 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_prod_name_49196);
    ((intptr_t*)_2)[1] = _prod_name_49196;
    RefDS(_version_string_short_inlined_version_string_short_at_194_49244);
    ((intptr_t*)_2)[2] = _version_string_short_inlined_version_string_short_at_194_49244;
    Ref(_version_type_inlined_version_type_at_210_49247);
    ((intptr_t*)_2)[3] = _version_type_inlined_version_type_at_210_49247;
    _25461 = MAKE_SEQ(_1);
    // SubProg show_banner pc: 226 op: CONCAT (15)
    Concat((object_ptr)&_25462, _25461, _misc_info_49215);
    DeRefDS(_25461);
    _25461 = NOVALUE;
    DeRef(_25461);
    _25461 = NOVALUE;
    // SubProg show_banner pc: 230 op: SPRINTF (53)
    _25463 = EPrintf(-9999999, _25460, _25462);
    DeRefDS(_25462);
    _25462 = NOVALUE;
    // SubProg show_banner pc: 234 op: PROC (27)
    _49screen_output(2, _25463);
    _25463 = NOVALUE;
    // SubProg show_banner pc: 238 op: STARTLINE (58)

    /** cominit.e:147	end procedure*/
    // SubProg show_banner pc: 240 op: RETURNP (29)

// Exiting block BLOCK: show_banner

// block var prod_name_49196
    DeRefDS(_prod_name_49196);

// block var memory_type_49197
    DeRef(_memory_type_49197);

// block var misc_info_49215
    DeRefDS(_misc_info_49215);

// block var EuConsole_49230
    DeRefi(_EuConsole_49230);
    return;
    // SubProg show_banner pc: 243 op: BADRETURNF (43)
    ;
}


object _47find_opt(object _name_type_49259, object _opt_49260, object _opts_49261)
{
    object _o_49265 = NOVALUE;
    object _has_case_49267 = NOVALUE;
    object _25476 = NOVALUE; // 49281 25476
    object _25475 = NOVALUE; // 49280 25475
    object _25474 = NOVALUE; // 49279 25474
    object _25473 = NOVALUE; // 49278 25473
    object _25472 = NOVALUE; // 49277 25472
    object _25471 = NOVALUE; // 49276 25471
    object _25470 = NOVALUE; // 49274 25470
    object _25469 = NOVALUE; // 49273 25469
    object _25468 = NOVALUE; // 49272 25468
// skipping _25467  name type: 0
    object _25466 = NOVALUE; // 49269 25466
// skipping _25465  name type: 0
    object _25464 = NOVALUE; // 49264 25464
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg find_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 7 op: STARTLINE (58)

    /** cominit.e:172		for i = 1 to length(opts) do*/
    // SubProg find_opt pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_49261)){
            _25464 = SEQ_PTR(_opts_49261)->length;
    }
    else {
        _25464 = 1;
    }
    // SubProg find_opt pc: 12 op: FOR_I (125)
    {
        object _i_49263;
        _i_49263 = 1;
L1: // addr: 19 pc: 12 sub: 49257 op: 125
        if (_i_49263 > _25464){
            goto L2; // [12] 113
        }
        // SubProg find_opt pc: 19 op: STARTLINE (58)

        /** cominit.e:173			sequence o = opts[i]		*/
        // SubProg find_opt pc: 21 op: RHS_SUBS (25)
        DeRef(_o_49265);
        _2 = (object)SEQ_PTR(_opts_49261);
        _o_49265 = (object)*(((s1_ptr)_2)->base + _i_49263);
        Ref(_o_49265);
        // SubProg find_opt pc: 25 op: SEQUENCE_CHECK (97)
        // SubProg find_opt pc: 27 op: STARTLINE (58)

        /** cominit.e:174			integer has_case = find(HAS_CASE, o[OPTIONS])*/
        // SubProg find_opt pc: 29 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_opt pc: 31 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49265);
        _25466 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg find_opt pc: 35 op: FIND_FROM (176)
        _has_case_49267 = find_from(99, _25466, 1);
        _25466 = NOVALUE;
        // SubProg find_opt pc: 40 op: STARTLINE (58)

        /** cominit.e:176			if has_case and equal(o[name_type], opt) then*/
        // SubProg find_opt pc: 42 op: SC1_AND_IF (146)
        if (_has_case_49267 == 0) {
            goto L3; // [42] 67
        }
        // SubProg find_opt pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49265);
        _25469 = (object)*(((s1_ptr)_2)->base + _name_type_49259);
        // SubProg find_opt pc: 50 op: EQUAL (153)
        if (_25469 == _opt_49260)
        _25470 = 1;
        else if (IS_ATOM_INT(_25469) && IS_ATOM_INT(_opt_49260))
        _25470 = 0;
        else
        _25470 = (compare(_25469, _opt_49260) == 0);
        _25469 = NOVALUE;
        // SubProg find_opt pc: 54 op: NOP1 (159)
        // SubProg find_opt pc: 55 op: IF (20)
        if (_25470 == 0)
        {
            _25470 = NOVALUE;
            goto L3; // [55] 67
        }
        else{
            _25470 = NOVALUE;
        }
        // SubProg find_opt pc: 58 op: STARTLINE (58)

        /** cominit.e:177				return o*/
        // SubProg find_opt pc: 60 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var has_case_49267

// Exiting block BLOCK: find_opt

// block var name_type_49259

// block var opt_49260
        DeRefDS(_opt_49260);

// block var opts_49261
        DeRefDS(_opts_49261);
        return _o_49265;
        // SubProg find_opt pc: 64 op: ELSE (23)
        goto L4; // [64] 104
        // SubProg find_opt pc: 66 op: NOP1 (159)
L3: // addr: 67 pc: 66 sub: 49257 op: 159
        // SubProg find_opt pc: 67 op: STARTLINE (58)

        /** cominit.e:178			elsif not has_case and equal(text:lower(o[name_type]), text:lower(opt)) then*/
        // SubProg find_opt pc: 69 op: NOT (7)
        _25471 = (_has_case_49267 == 0);
        // SubProg find_opt pc: 72 op: SC1_AND_IF (146)
        if (_25471 == 0) {
            goto L5; // [72] 103
        }
        // SubProg find_opt pc: 76 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49265);
        _25473 = (object)*(((s1_ptr)_2)->base + _name_type_49259);
        // SubProg find_opt pc: 80 op: PROC (27)
        Ref(_25473);
        _25474 = _15lower(_25473);
        _25473 = NOVALUE;
        // SubProg find_opt pc: 84 op: PROC (27)
        RefDS(_opt_49260);
        _25475 = _15lower(_opt_49260);
        // SubProg find_opt pc: 88 op: EQUAL (153)
        if (_25474 == _25475)
        _25476 = 1;
        else if (IS_ATOM_INT(_25474) && IS_ATOM_INT(_25475))
        _25476 = 0;
        else
        _25476 = (compare(_25474, _25475) == 0);
        DeRef(_25474);
        _25474 = NOVALUE;
        DeRef(_25475);
        _25475 = NOVALUE;
        // SubProg find_opt pc: 92 op: NOP1 (159)
        // SubProg find_opt pc: 93 op: IF (20)
        if (_25476 == 0)
        {
            _25476 = NOVALUE;
            goto L5; // [93] 103
        }
        else{
            _25476 = NOVALUE;
        }
        // SubProg find_opt pc: 96 op: STARTLINE (58)

        /** cominit.e:179				return o*/
        // SubProg find_opt pc: 98 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var has_case_49267

// Exiting block BLOCK: find_opt

// block var name_type_49259

// block var opt_49260
        DeRefDS(_opt_49260);

// block var opts_49261
        DeRefDS(_opts_49261);
        DeRef(_25471);
        _25471 = NOVALUE;
        return _o_49265;
        // SubProg find_opt pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 49257 op: 159
        // SubProg find_opt pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 49257 op: 159
        // SubProg find_opt pc: 104 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var o_49265
        DeRef(_o_49265);
        _o_49265 = NOVALUE;

// block var has_case_49267
        // SubProg find_opt pc: 106 op: STARTLINE (58)

        /** cominit.e:181		end for*/
        // SubProg find_opt pc: 108 op: ENDFOR_INT_UP1 (54)
        _i_49263 = _i_49263 + 1;
        goto L1; // [108] 19
L2: // addr: 113 pc: 108 sub: 49257 op: 54
        ;
    }
    // SubProg find_opt pc: 113 op: STARTLINE (58)

    /** cominit.e:183		return {}*/
    // SubProg find_opt pc: 115 op: RETURNF (28)
    RefDS(_21936);

// Exiting block BLOCK: find_opt

// block var name_type_49259

// block var opt_49260
    DeRefDS(_opt_49260);

// block var opts_49261
    DeRefDS(_opts_49261);
    DeRef(_25471);
    _25471 = NOVALUE;
    return _21936;
    // SubProg find_opt pc: 119 op: BADRETURNF (43)
    ;
}


object _47merge_parameters(object _a_49284, object _b_49285, object _opts_49286, object _dedupe_49287)
{
    object _i_49288 = NOVALUE;
    object _opt_49292 = NOVALUE;
    object _this_opt_49298 = NOVALUE;
    object _bi_49299 = NOVALUE;
    object _beginLen_49359 = NOVALUE;
    object _first_extra_49381 = NOVALUE;
    object _opt_49385 = NOVALUE;
    object _this_opt_49390 = NOVALUE;
    object _25570 = NOVALUE; // 49420 25570
    object _25569 = NOVALUE; // 49419 25569
// skipping _25568  name type: 0
// skipping _25567  name type: 0
    object _25566 = NOVALUE; // 49414 25566
    object _25565 = NOVALUE; // 49413 25565
    object _25564 = NOVALUE; // 49410 25564
// skipping _25563  name type: 0
    object _25562 = NOVALUE; // 49407 25562
    object _25561 = NOVALUE; // 49406 25561
    object _25560 = NOVALUE; // 49405 25560
    object _25559 = NOVALUE; // 49404 25559
// skipping _25558  name type: 0
    object _25557 = NOVALUE; // 49402 25557
    object _25556 = NOVALUE; // 49401 25556
// skipping _25555  name type: 0
    object _25554 = NOVALUE; // 49398 25554
    object _25553 = NOVALUE; // 49397 25553
    object _25552 = NOVALUE; // 49396 25552
    object _25551 = NOVALUE; // 49395 25551
    object _25550 = NOVALUE; // 49394 25550
    object _25549 = NOVALUE; // 49393 25549
    object _25548 = NOVALUE; // 49392 25548
// skipping _25547  name type: 0
    object _25546 = NOVALUE; // 49388 25546
// skipping _25545  name type: 0
// skipping _25544  name type: 0
    object _25543 = NOVALUE; // 49383 25543
    object _25542 = NOVALUE; // 49380 25542
// skipping _25541  name type: 0
// skipping _25540  name type: 0
// skipping _25539  name type: 0
// skipping _25538  name type: 0
    object _25537 = NOVALUE; // 49372 25537
// skipping _25536  name type: 0
    object _25535 = NOVALUE; // 49369 25535
    object _25534 = NOVALUE; // 49368 25534
    object _25533 = NOVALUE; // 49367 25533
    object _25532 = NOVALUE; // 49366 25532
    object _25531 = NOVALUE; // 49365 25531
    object _25530 = NOVALUE; // 49364 25530
    object _25529 = NOVALUE; // 49363 25529
    object _25528 = NOVALUE; // 49362 25528
// skipping _25527  name type: 0
// skipping _25526  name type: 0
// skipping _25525  name type: 0
    object _25524 = NOVALUE; // 49354 25524
    object _25523 = NOVALUE; // 49353 25523
    object _25522 = NOVALUE; // 49352 25522
    object _25521 = NOVALUE; // 49348 25521
    object _25520 = NOVALUE; // 49347 25520
    object _25519 = NOVALUE; // 49346 25519
    object _25518 = NOVALUE; // 49344 25518
    object _25517 = NOVALUE; // 49343 25517
    object _25516 = NOVALUE; // 49341 25516
    object _25515 = NOVALUE; // 49340 25515
    object _25514 = NOVALUE; // 49339 25514
    object _25513 = NOVALUE; // 49338 25513
    object _25512 = NOVALUE; // 49337 25512
    object _25511 = NOVALUE; // 49336 25511
    object _25510 = NOVALUE; // 49335 25510
// skipping _25509  name type: 0
    object _25508 = NOVALUE; // 49333 25508
    object _25507 = NOVALUE; // 49332 25507
    object _25506 = NOVALUE; // 49331 25506
    object _25505 = NOVALUE; // 49330 25505
    object _25504 = NOVALUE; // 49329 25504
    object _25503 = NOVALUE; // 49328 25503
    object _25502 = NOVALUE; // 49327 25502
    object _25501 = NOVALUE; // 49325 25501
// skipping _25500  name type: 0
    object _25499 = NOVALUE; // 49321 25499
    object _25498 = NOVALUE; // 49320 25498
    object _25497 = NOVALUE; // 49319 25497
    object _25496 = NOVALUE; // 49318 25496
// skipping _25495  name type: 0
    object _25494 = NOVALUE; // 49316 25494
    object _25493 = NOVALUE; // 49315 25493
    object _25492 = NOVALUE; // 49313 25492
    object _25491 = NOVALUE; // 49312 25491
    object _25490 = NOVALUE; // 49311 25490
    object _25489 = NOVALUE; // 49310 25489
    object _25488 = NOVALUE; // 49308 25488
// skipping _25487  name type: 0
    object _25486 = NOVALUE; // 49304 25486
    object _25485 = NOVALUE; // 49303 25485
// skipping _25484  name type: 0
    object _25483 = NOVALUE; // 49301 25483
// skipping _25482  name type: 0
// skipping _25481  name type: 0
    object _25480 = NOVALUE; // 49295 25480
// skipping _25479  name type: 0
// skipping _25478  name type: 0
    object _25477 = NOVALUE; // 49290 25477
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg merge_parameters pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 7 op: INTEGER_CHECK (96)
    // SubProg merge_parameters pc: 9 op: STARTLINE (58)

    /** cominit.e:199		integer i = 1*/
    // SubProg merge_parameters pc: 11 op: ASSIGN_I (113)
    _i_49288 = 1;
    // SubProg merge_parameters pc: 14 op: STARTLINE (58)

    /** cominit.e:201		while i <= length(a) do*/
    // SubProg merge_parameters pc: 16 op: NOP2 (110)
    // SubProg merge_parameters pc: 18 op: NOPWHILE (158)
L1: // addr: 19 pc: 18 sub: 49282 op: 158
    // SubProg merge_parameters pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49284)){
            _25477 = SEQ_PTR(_a_49284)->length;
    }
    else {
        _25477 = 1;
    }
    // SubProg merge_parameters pc: 22 op: LESSEQ_IFW_I (123)
    if (_i_49288 > _25477)
    goto L2; // [22] 465
    // SubProg merge_parameters pc: 26 op: STARTLINE (58)

    /** cominit.e:202			sequence opt = a[i]*/
    // SubProg merge_parameters pc: 28 op: RHS_SUBS (25)
    DeRef(_opt_49292);
    _2 = (object)SEQ_PTR(_a_49284);
    _opt_49292 = (object)*(((s1_ptr)_2)->base + _i_49288);
    Ref(_opt_49292);
    // SubProg merge_parameters pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 34 op: STARTLINE (58)

    /** cominit.e:203			if length(opt) < 2 then*/
    // SubProg merge_parameters pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49292)){
            _25480 = SEQ_PTR(_opt_49292)->length;
    }
    else {
        _25480 = 1;
    }
    // SubProg merge_parameters pc: 39 op: LESS_IFW_I (119)
    if (_25480 >= 2)
    goto L3; // [39] 56
    // SubProg merge_parameters pc: 43 op: STARTLINE (58)

    /** cominit.e:204				i += 1*/
    // SubProg merge_parameters pc: 45 op: PLUS1_I (117)
    _i_49288 = _i_49288 + 1;
    // SubProg merge_parameters pc: 49 op: STARTLINE (58)

    /** cominit.e:205				continue*/
    // SubProg merge_parameters pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49292
    DeRefDS(_opt_49292);
    _opt_49292 = NOVALUE;

// block var this_opt_49298
    DeRef(_this_opt_49298);
    _this_opt_49298 = NOVALUE;

// block var bi_49299
    // SubProg merge_parameters pc: 53 op: ELSE (23)
    goto L1; // [53] 19
    // SubProg merge_parameters pc: 55 op: NOP1 (159)
L3: // addr: 56 pc: 55 sub: 49282 op: 159
    // SubProg merge_parameters pc: 56 op: STARTLINE (58)

    /** cominit.e:208			sequence this_opt = {}*/
    // SubProg merge_parameters pc: 58 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_this_opt_49298);
    _this_opt_49298 = _21936;
    // SubProg merge_parameters pc: 61 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 63 op: STARTLINE (58)

    /** cominit.e:209			integer bi = 0*/
    // SubProg merge_parameters pc: 65 op: ASSIGN_I (113)
    _bi_49299 = 0;
    // SubProg merge_parameters pc: 68 op: STARTLINE (58)

    /** cominit.e:211			if opt[2] = '-' then*/
    // SubProg merge_parameters pc: 70 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49292);
    _25483 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg merge_parameters pc: 74 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25483, 45)){
        _25483 = NOVALUE;
        goto L4; // [74] 149
    }
    _25483 = NOVALUE;
    // SubProg merge_parameters pc: 78 op: STARTLINE (58)

    /** cominit.e:214				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    // SubProg merge_parameters pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49292)){
            _25485 = SEQ_PTR(_opt_49292)->length;
    }
    else {
        _25485 = 1;
    }
    // SubProg merge_parameters pc: 83 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25486;
    RHS_Slice(_opt_49292, 3, _25485);
    // SubProg merge_parameters pc: 88 op: PROC (27)
    RefDS(_opts_49286);
    _0 = _this_opt_49298;
    _this_opt_49298 = _47find_opt(2, _25486, _opts_49286);
    DeRefDS(_0);
    _25486 = NOVALUE;
    // SubProg merge_parameters pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 96 op: STARTLINE (58)

    /** cominit.e:216				for j = 1 to length(b) do*/
    // SubProg merge_parameters pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49285)){
            _25488 = SEQ_PTR(_b_49285)->length;
    }
    else {
        _25488 = 1;
    }
    // SubProg merge_parameters pc: 101 op: FOR_I (125)
    {
        object _j_49307;
        _j_49307 = 1;
L5: // addr: 108 pc: 101 sub: 49282 op: 125
        if (_j_49307 > _25488){
            goto L6; // [101] 146
        }
        // SubProg merge_parameters pc: 108 op: STARTLINE (58)

        /** cominit.e:217					if equal(text:lower(b[j]), text:lower(opt)) then*/
        // SubProg merge_parameters pc: 110 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49285);
        _25489 = (object)*(((s1_ptr)_2)->base + _j_49307);
        // SubProg merge_parameters pc: 114 op: PROC (27)
        Ref(_25489);
        _25490 = _15lower(_25489);
        _25489 = NOVALUE;
        // SubProg merge_parameters pc: 118 op: PROC (27)
        RefDS(_opt_49292);
        _25491 = _15lower(_opt_49292);
        // SubProg merge_parameters pc: 122 op: EQUAL (153)
        if (_25490 == _25491)
        _25492 = 1;
        else if (IS_ATOM_INT(_25490) && IS_ATOM_INT(_25491))
        _25492 = 0;
        else
        _25492 = (compare(_25490, _25491) == 0);
        DeRef(_25490);
        _25490 = NOVALUE;
        DeRef(_25491);
        _25491 = NOVALUE;
        // SubProg merge_parameters pc: 126 op: IF (20)
        if (_25492 == 0)
        {
            _25492 = NOVALUE;
            goto L7; // [126] 139
        }
        else{
            _25492 = NOVALUE;
        }
        // SubProg merge_parameters pc: 129 op: STARTLINE (58)

        /** cominit.e:218						bi = j*/
        // SubProg merge_parameters pc: 131 op: ASSIGN_I (113)
        _bi_49299 = _j_49307;
        // SubProg merge_parameters pc: 134 op: STARTLINE (58)

        /** cominit.e:219						exit*/
        // SubProg merge_parameters pc: 136 op: EXIT (61)
        goto L6; // [136] 146
        // SubProg merge_parameters pc: 138 op: NOP1 (159)
L7: // addr: 139 pc: 138 sub: 49282 op: 159
        // SubProg merge_parameters pc: 139 op: STARTLINE (58)

        /** cominit.e:221				end for*/
        // SubProg merge_parameters pc: 141 op: ENDFOR_INT_UP1 (54)
        _j_49307 = _j_49307 + 1;
        goto L5; // [141] 108
L6: // addr: 146 pc: 141 sub: 49282 op: 54
        ;
    }
    // SubProg merge_parameters pc: 146 op: ELSE (23)
    goto L8; // [146] 292
    // SubProg merge_parameters pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 49282 op: 159
    // SubProg merge_parameters pc: 149 op: STARTLINE (58)

    /** cominit.e:223			elsif opt[1] = '-' or opt[1] = '/' then*/
    // SubProg merge_parameters pc: 151 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49292);
    _25493 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 155 op: EQUALS (3)
    if (IS_ATOM_INT(_25493)) {
        _25494 = (_25493 == 45);
    }
    else {
        _25494 = binary_op(EQUALS, _25493, 45);
    }
    _25493 = NOVALUE;
    // SubProg merge_parameters pc: 159 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_25494)) {
        if (_25494 != 0) {
            goto L9; // [159] 176
        }
    }
    else {
        if (DBL_PTR(_25494)->dbl != 0.0) {
            goto L9; // [159] 176
        }
    }
    // SubProg merge_parameters pc: 163 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49292);
    _25496 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 167 op: EQUALS (3)
    if (IS_ATOM_INT(_25496)) {
        _25497 = (_25496 == 47);
    }
    else {
        _25497 = binary_op(EQUALS, _25496, 47);
    }
    _25496 = NOVALUE;
    // SubProg merge_parameters pc: 171 op: NOP1 (159)
    // SubProg merge_parameters pc: 172 op: IF (20)
    if (_25497 == 0) {
        DeRef(_25497);
        _25497 = NOVALUE;
        goto LA; // [172] 291
    }
    else {
        if (!IS_ATOM_INT(_25497) && DBL_PTR(_25497)->dbl == 0.0){
            DeRef(_25497);
            _25497 = NOVALUE;
            goto LA; // [172] 291
        }
        DeRef(_25497);
        _25497 = NOVALUE;
    }
    DeRef(_25497);
    _25497 = NOVALUE;
    // SubProg merge_parameters pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 49282 op: 159
    // SubProg merge_parameters pc: 176 op: STARTLINE (58)

    /** cominit.e:226				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    // SubProg merge_parameters pc: 178 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49292)){
            _25498 = SEQ_PTR(_opt_49292)->length;
    }
    else {
        _25498 = 1;
    }
    // SubProg merge_parameters pc: 181 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25499;
    RHS_Slice(_opt_49292, 2, _25498);
    // SubProg merge_parameters pc: 186 op: PROC (27)
    RefDS(_opts_49286);
    _0 = _this_opt_49298;
    _this_opt_49298 = _47find_opt(1, _25499, _opts_49286);
    DeRef(_0);
    _25499 = NOVALUE;
    // SubProg merge_parameters pc: 192 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 194 op: STARTLINE (58)

    /** cominit.e:228				for j = 1 to length(b) do*/
    // SubProg merge_parameters pc: 196 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49285)){
            _25501 = SEQ_PTR(_b_49285)->length;
    }
    else {
        _25501 = 1;
    }
    // SubProg merge_parameters pc: 199 op: FOR_I (125)
    {
        object _j_49324;
        _j_49324 = 1;
LB: // addr: 206 pc: 199 sub: 49282 op: 125
        if (_j_49324 > _25501){
            goto LC; // [199] 290
        }
        // SubProg merge_parameters pc: 206 op: STARTLINE (58)

        /** cominit.e:229					if equal(text:lower(b[j]), '-' & text:lower(opt[2..$])) or */
        // SubProg merge_parameters pc: 208 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49285);
        _25502 = (object)*(((s1_ptr)_2)->base + _j_49324);
        // SubProg merge_parameters pc: 212 op: PROC (27)
        Ref(_25502);
        _25503 = _15lower(_25502);
        _25502 = NOVALUE;
        // SubProg merge_parameters pc: 216 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_49292)){
                _25504 = SEQ_PTR(_opt_49292)->length;
        }
        else {
            _25504 = 1;
        }
        // SubProg merge_parameters pc: 219 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25505;
        RHS_Slice(_opt_49292, 2, _25504);
        // SubProg merge_parameters pc: 224 op: PROC (27)
        _25506 = _15lower(_25505);
        _25505 = NOVALUE;
        // SubProg merge_parameters pc: 228 op: CONCAT (15)
        if (IS_SEQUENCE(45) && IS_ATOM(_25506)) {
        }
        else if (IS_ATOM(45) && IS_SEQUENCE(_25506)) {
            Prepend(&_25507, _25506, 45);
        }
        else {
            Concat((object_ptr)&_25507, 45, _25506);
        }
        DeRef(_25506);
        _25506 = NOVALUE;
        // SubProg merge_parameters pc: 232 op: EQUAL (153)
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
        // SubProg merge_parameters pc: 236 op: SC1_OR_IF (147)
        if (_25508 != 0) {
            goto LD; // [236] 273
        }
        // SubProg merge_parameters pc: 240 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49285);
        _25510 = (object)*(((s1_ptr)_2)->base + _j_49324);
        // SubProg merge_parameters pc: 244 op: PROC (27)
        Ref(_25510);
        _25511 = _15lower(_25510);
        _25510 = NOVALUE;
        // SubProg merge_parameters pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_49292)){
                _25512 = SEQ_PTR(_opt_49292)->length;
        }
        else {
            _25512 = 1;
        }
        // SubProg merge_parameters pc: 251 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25513;
        RHS_Slice(_opt_49292, 2, _25512);
        // SubProg merge_parameters pc: 256 op: PROC (27)
        _25514 = _15lower(_25513);
        _25513 = NOVALUE;
        // SubProg merge_parameters pc: 260 op: CONCAT (15)
        if (IS_SEQUENCE(47) && IS_ATOM(_25514)) {
        }
        else if (IS_ATOM(47) && IS_SEQUENCE(_25514)) {
            Prepend(&_25515, _25514, 47);
        }
        else {
            Concat((object_ptr)&_25515, 47, _25514);
        }
        DeRef(_25514);
        _25514 = NOVALUE;
        // SubProg merge_parameters pc: 264 op: EQUAL (153)
        if (_25511 == _25515)
        _25516 = 1;
        else if (IS_ATOM_INT(_25511) && IS_ATOM_INT(_25515))
        _25516 = 0;
        else
        _25516 = (compare(_25511, _25515) == 0);
        DeRef(_25511);
        _25511 = NOVALUE;
        DeRefDS(_25515);
        _25515 = NOVALUE;
        // SubProg merge_parameters pc: 268 op: NOP1 (159)
        // SubProg merge_parameters pc: 269 op: IF (20)
        if (_25516 == 0)
        {
            _25516 = NOVALUE;
            goto LE; // [269] 283
        }
        else{
            _25516 = NOVALUE;
        }
        // SubProg merge_parameters pc: 272 op: NOP1 (159)
LD: // addr: 273 pc: 272 sub: 49282 op: 159
        // SubProg merge_parameters pc: 273 op: STARTLINE (58)

        /** cominit.e:232						bi = j*/
        // SubProg merge_parameters pc: 275 op: ASSIGN_I (113)
        _bi_49299 = _j_49324;
        // SubProg merge_parameters pc: 278 op: STARTLINE (58)

        /** cominit.e:233						exit*/
        // SubProg merge_parameters pc: 280 op: EXIT (61)
        goto LC; // [280] 290
        // SubProg merge_parameters pc: 282 op: NOP1 (159)
LE: // addr: 283 pc: 282 sub: 49282 op: 159
        // SubProg merge_parameters pc: 283 op: STARTLINE (58)

        /** cominit.e:235				end for*/
        // SubProg merge_parameters pc: 285 op: ENDFOR_INT_UP1 (54)
        _j_49324 = _j_49324 + 1;
        goto LB; // [285] 206
LC: // addr: 290 pc: 285 sub: 49282 op: 54
        ;
    }
    // SubProg merge_parameters pc: 290 op: NOP1 (159)
LA: // addr: 291 pc: 290 sub: 49282 op: 159
    // SubProg merge_parameters pc: 291 op: NOP1 (159)
L8: // addr: 292 pc: 291 sub: 49282 op: 159
    // SubProg merge_parameters pc: 292 op: STARTLINE (58)

    /** cominit.e:243			if length(this_opt) and not find(MULTIPLE, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49298)){
            _25517 = SEQ_PTR(_this_opt_49298)->length;
    }
    else {
        _25517 = 1;
    }
    // SubProg merge_parameters pc: 297 op: SC1_AND_IF (146)
    if (_25517 == 0) {
        goto LF; // [297] 451
    }
    // SubProg merge_parameters pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 303 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49298);
    _25519 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 307 op: FIND_FROM (176)
    _25520 = find_from(42, _25519, 1);
    _25519 = NOVALUE;
    // SubProg merge_parameters pc: 312 op: NOT (7)
    _25521 = (_25520 == 0);
    _25520 = NOVALUE;
    // SubProg merge_parameters pc: 315 op: NOP1 (159)
    // SubProg merge_parameters pc: 316 op: IF (20)
    if (_25521 == 0)
    {
        DeRef(_25521);
        _25521 = NOVALUE;
        goto LF; // [316] 451
    }
    else{
        DeRef(_25521);
        _25521 = NOVALUE;
    }
    // SubProg merge_parameters pc: 319 op: STARTLINE (58)

    /** cominit.e:244				if bi then*/
    // SubProg merge_parameters pc: 321 op: IF (20)
    if (_bi_49299 == 0)
    {
        goto L10; // [321] 365
    }
    else{
    }
    // SubProg merge_parameters pc: 324 op: STARTLINE (58)

    /** cominit.e:245					if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 328 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49298);
    _25522 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 332 op: FIND_FROM (176)
    _25523 = find_from(112, _25522, 1);
    _25522 = NOVALUE;
    // SubProg merge_parameters pc: 337 op: IF (20)
    if (_25523 == 0)
    {
        _25523 = NOVALUE;
        goto L11; // [337] 354
    }
    else{
        _25523 = NOVALUE;
    }
    // SubProg merge_parameters pc: 340 op: STARTLINE (58)

    /** cominit.e:247						a = remove(a, i, i + 1)*/
    // SubProg merge_parameters pc: 342 op: PLUS1 (93)
    _25524 = _i_49288 + 1;
    if (_25524 > MAXINT){
        _25524 = NewDouble((eudouble)_25524);
    }
    // SubProg merge_parameters pc: 346 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_a_49284);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49288)) ? _i_49288 : (object)(DBL_PTR(_i_49288)->dbl);
        int stop = (IS_ATOM_INT(_25524)) ? _25524 : (object)(DBL_PTR(_25524)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49284), start, &_a_49284 );
            }
            else Tail(SEQ_PTR(_a_49284), stop+1, &_a_49284);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49284), start, &_a_49284);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49284 = Remove_elements(start, stop, (SEQ_PTR(_a_49284)->ref == 1));
        }
    }
    DeRef(_25524);
    _25524 = NOVALUE;
    // SubProg merge_parameters pc: 351 op: ELSE (23)
    goto L12; // [351] 458
    // SubProg merge_parameters pc: 353 op: NOP1 (159)
L11: // addr: 354 pc: 353 sub: 49282 op: 159
    // SubProg merge_parameters pc: 354 op: STARTLINE (58)

    /** cominit.e:250						a = remove(a, i)*/
    // SubProg merge_parameters pc: 356 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_a_49284);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49288)) ? _i_49288 : (object)(DBL_PTR(_i_49288)->dbl);
        int stop = (IS_ATOM_INT(_i_49288)) ? _i_49288 : (object)(DBL_PTR(_i_49288)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49284), start, &_a_49284 );
            }
            else Tail(SEQ_PTR(_a_49284), stop+1, &_a_49284);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49284), start, &_a_49284);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49284 = Remove_elements(start, stop, (SEQ_PTR(_a_49284)->ref == 1));
        }
    }
    // SubProg merge_parameters pc: 361 op: NOP1 (159)
    // SubProg merge_parameters pc: 362 op: ELSE (23)
    goto L12; // [362] 458
    // SubProg merge_parameters pc: 364 op: NOP1 (159)
L10: // addr: 365 pc: 364 sub: 49282 op: 159
    // SubProg merge_parameters pc: 365 op: STARTLINE (58)

    /** cominit.e:265					integer beginLen = length(a)*/
    // SubProg merge_parameters pc: 367 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49284)){
            _beginLen_49359 = SEQ_PTR(_a_49284)->length;
    }
    else {
        _beginLen_49359 = 1;
    }
    // SubProg merge_parameters pc: 370 op: STARTLINE (58)

    /** cominit.e:267					if dedupe = 0 and i < beginLen then*/
    // SubProg merge_parameters pc: 372 op: EQUALS (3)
    _25528 = (_dedupe_49287 == 0);
    // SubProg merge_parameters pc: 376 op: SC1_AND_IF (146)
    if (_25528 == 0) {
        goto L13; // [376] 438
    }
    // SubProg merge_parameters pc: 380 op: LESS (1)
    _25530 = (_i_49288 < _beginLen_49359);
    // SubProg merge_parameters pc: 384 op: NOP1 (159)
    // SubProg merge_parameters pc: 385 op: IF (20)
    if (_25530 == 0)
    {
        DeRef(_25530);
        _25530 = NOVALUE;
        goto L13; // [385] 438
    }
    else{
        DeRef(_25530);
        _25530 = NOVALUE;
    }
    // SubProg merge_parameters pc: 388 op: STARTLINE (58)

    /** cominit.e:268						a = merge_parameters( a[i + 1..$], a[1..i], opts, 1)*/
    // SubProg merge_parameters pc: 390 op: PLUS1 (93)
    _25531 = _i_49288 + 1;
    if (_25531 > MAXINT){
        _25531 = NewDouble((eudouble)_25531);
    }
    // SubProg merge_parameters pc: 394 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49284)){
            _25532 = SEQ_PTR(_a_49284)->length;
    }
    else {
        _25532 = 1;
    }
    // SubProg merge_parameters pc: 397 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25533;
    RHS_Slice(_a_49284, _25531, _25532);
    // SubProg merge_parameters pc: 402 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25534;
    RHS_Slice(_a_49284, 1, _i_49288);
    // SubProg merge_parameters pc: 407 op: ASSIGN (18)
    RefDS(_opts_49286);
    DeRef(_25535);
    _25535 = _opts_49286;
    // SubProg merge_parameters pc: 410 op: PROC (27)
    _0 = _a_49284;
    _a_49284 = _47merge_parameters(_25533, _25534, _25535, 1);
    DeRefDS(_0);
    _25533 = NOVALUE;
    _25534 = NOVALUE;
    _25535 = NOVALUE;
    // SubProg merge_parameters pc: 417 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 419 op: STARTLINE (58)

    /** cominit.e:270						if beginLen = length(a) then*/
    // SubProg merge_parameters pc: 421 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49284)){
            _25537 = SEQ_PTR(_a_49284)->length;
    }
    else {
        _25537 = 1;
    }
    // SubProg merge_parameters pc: 424 op: EQUALS_IFW_I (121)
    if (_beginLen_49359 != _25537)
    goto L14; // [424] 445
    // SubProg merge_parameters pc: 428 op: STARTLINE (58)

    /** cominit.e:272							i += 1*/
    // SubProg merge_parameters pc: 430 op: PLUS1_I (117)
    _i_49288 = _i_49288 + 1;
    // SubProg merge_parameters pc: 434 op: NOP1 (159)
    // SubProg merge_parameters pc: 435 op: ELSE (23)
    goto L14; // [435] 445
    // SubProg merge_parameters pc: 437 op: NOP1 (159)
L13: // addr: 438 pc: 437 sub: 49282 op: 159
    // SubProg merge_parameters pc: 438 op: STARTLINE (58)

    /** cominit.e:276						i += 1*/
    // SubProg merge_parameters pc: 440 op: PLUS1_I (117)
    _i_49288 = _i_49288 + 1;
    // SubProg merge_parameters pc: 444 op: NOP1 (159)
L14: // addr: 445 pc: 444 sub: 49282 op: 159
    // SubProg merge_parameters pc: 445 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var beginLen_49359
    // SubProg merge_parameters pc: 447 op: NOP1 (159)
    // SubProg merge_parameters pc: 448 op: ELSE (23)
    goto L12; // [448] 458
    // SubProg merge_parameters pc: 450 op: NOP1 (159)
LF: // addr: 451 pc: 450 sub: 49282 op: 159
    // SubProg merge_parameters pc: 451 op: STARTLINE (58)

    /** cominit.e:282				i += 1*/
    // SubProg merge_parameters pc: 453 op: PLUS1_I (117)
    _i_49288 = _i_49288 + 1;
    // SubProg merge_parameters pc: 457 op: NOP1 (159)
L12: // addr: 458 pc: 457 sub: 49282 op: 159
    // SubProg merge_parameters pc: 458 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49292
    DeRef(_opt_49292);
    _opt_49292 = NOVALUE;

// block var this_opt_49298
    DeRef(_this_opt_49298);
    _this_opt_49298 = NOVALUE;

// block var bi_49299
    // SubProg merge_parameters pc: 460 op: STARTLINE (58)

    /** cominit.e:284		end while*/
    // SubProg merge_parameters pc: 462 op: ENDWHILE (22)
    goto L1; // [462] 19
    // SubProg merge_parameters pc: 464 op: NOP1 (159)
L2: // addr: 465 pc: 464 sub: 49282 op: 159
    // SubProg merge_parameters pc: 465 op: STARTLINE (58)

    /** cominit.e:286		if dedupe then*/
    // SubProg merge_parameters pc: 467 op: IF (20)
    if (_dedupe_49287 == 0)
    {
        goto L15; // [467] 481
    }
    else{
    }
    // SubProg merge_parameters pc: 470 op: STARTLINE (58)

    /** cominit.e:287			return b & a*/
    // SubProg merge_parameters pc: 472 op: CONCAT (15)
    Concat((object_ptr)&_25542, _b_49285, _a_49284);
    // SubProg merge_parameters pc: 476 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49284
    DeRefDS(_a_49284);

// block var b_49285
    DeRefDS(_b_49285);

// block var opts_49286
    DeRefDS(_opts_49286);

// block var dedupe_49287

// block var i_49288

// block var first_extra_49381
    DeRef(_25528);
    _25528 = NOVALUE;
    DeRef(_25531);
    _25531 = NOVALUE;
    DeRef(_25494);
    _25494 = NOVALUE;
    return _25542;
    // SubProg merge_parameters pc: 480 op: NOP1 (159)
L15: // addr: 481 pc: 480 sub: 49282 op: 159
    // SubProg merge_parameters pc: 481 op: STARTLINE (58)

    /** cominit.e:290		integer first_extra = 0*/
    // SubProg merge_parameters pc: 483 op: ASSIGN_I (113)
    _first_extra_49381 = 0;
    // SubProg merge_parameters pc: 486 op: STARTLINE (58)

    /** cominit.e:292		i = 1*/
    // SubProg merge_parameters pc: 488 op: ASSIGN_I (113)
    _i_49288 = 1;
    // SubProg merge_parameters pc: 491 op: STARTLINE (58)

    /** cominit.e:295		while i <= length(b) do*/
    // SubProg merge_parameters pc: 493 op: NOP2 (110)
    // SubProg merge_parameters pc: 495 op: NOPWHILE (158)
L16: // addr: 496 pc: 495 sub: 49282 op: 158
    // SubProg merge_parameters pc: 496 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49285)){
            _25543 = SEQ_PTR(_b_49285)->length;
    }
    else {
        _25543 = 1;
    }
    // SubProg merge_parameters pc: 499 op: LESSEQ_IFW_I (123)
    if (_i_49288 > _25543)
    goto L17; // [499] 692
    // SubProg merge_parameters pc: 503 op: STARTLINE (58)

    /** cominit.e:296			sequence opt = b[i]*/
    // SubProg merge_parameters pc: 505 op: RHS_SUBS (25)
    DeRef(_opt_49385);
    _2 = (object)SEQ_PTR(_b_49285);
    _opt_49385 = (object)*(((s1_ptr)_2)->base + _i_49288);
    Ref(_opt_49385);
    // SubProg merge_parameters pc: 509 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 511 op: STARTLINE (58)

    /** cominit.e:299			if length(opt) <= 1 then*/
    // SubProg merge_parameters pc: 513 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49385)){
            _25546 = SEQ_PTR(_opt_49385)->length;
    }
    else {
        _25546 = 1;
    }
    // SubProg merge_parameters pc: 516 op: LESSEQ_IFW_I (123)
    if (_25546 > 1)
    goto L18; // [516] 532
    // SubProg merge_parameters pc: 520 op: STARTLINE (58)

    /** cominit.e:300				first_extra = i*/
    // SubProg merge_parameters pc: 522 op: ASSIGN_I (113)
    _first_extra_49381 = _i_49288;
    // SubProg merge_parameters pc: 525 op: STARTLINE (58)

    /** cominit.e:301				exit*/
    // SubProg merge_parameters pc: 527 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49385
    DeRefDS(_opt_49385);
    _opt_49385 = NOVALUE;

// block var this_opt_49390
    DeRef(_this_opt_49390);
    _this_opt_49390 = NOVALUE;
    // SubProg merge_parameters pc: 529 op: EXIT (61)
    goto L17; // [529] 692
    // SubProg merge_parameters pc: 531 op: NOP1 (159)
L18: // addr: 532 pc: 531 sub: 49282 op: 159
    // SubProg merge_parameters pc: 532 op: STARTLINE (58)

    /** cominit.e:304			sequence this_opt = {}*/
    // SubProg merge_parameters pc: 534 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_this_opt_49390);
    _this_opt_49390 = _21936;
    // SubProg merge_parameters pc: 537 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 539 op: STARTLINE (58)

    /** cominit.e:305			if opt[2] = '-' and opt[1] = '-' then*/
    // SubProg merge_parameters pc: 541 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49385);
    _25548 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg merge_parameters pc: 545 op: EQUALS (3)
    if (IS_ATOM_INT(_25548)) {
        _25549 = (_25548 == 45);
    }
    else {
        _25549 = binary_op(EQUALS, _25548, 45);
    }
    _25548 = NOVALUE;
    // SubProg merge_parameters pc: 549 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_25549)) {
        if (_25549 == 0) {
            goto L19; // [549] 586
        }
    }
    else {
        if (DBL_PTR(_25549)->dbl == 0.0) {
            goto L19; // [549] 586
        }
    }
    // SubProg merge_parameters pc: 553 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49385);
    _25551 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 557 op: EQUALS (3)
    if (IS_ATOM_INT(_25551)) {
        _25552 = (_25551 == 45);
    }
    else {
        _25552 = binary_op(EQUALS, _25551, 45);
    }
    _25551 = NOVALUE;
    // SubProg merge_parameters pc: 561 op: NOP1 (159)
    // SubProg merge_parameters pc: 562 op: IF (20)
    if (_25552 == 0) {
        DeRef(_25552);
        _25552 = NOVALUE;
        goto L19; // [562] 586
    }
    else {
        if (!IS_ATOM_INT(_25552) && DBL_PTR(_25552)->dbl == 0.0){
            DeRef(_25552);
            _25552 = NOVALUE;
            goto L19; // [562] 586
        }
        DeRef(_25552);
        _25552 = NOVALUE;
    }
    DeRef(_25552);
    _25552 = NOVALUE;
    // SubProg merge_parameters pc: 565 op: STARTLINE (58)

    /** cominit.e:306				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    // SubProg merge_parameters pc: 567 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49385)){
            _25553 = SEQ_PTR(_opt_49385)->length;
    }
    else {
        _25553 = 1;
    }
    // SubProg merge_parameters pc: 570 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25554;
    RHS_Slice(_opt_49385, 3, _25553);
    // SubProg merge_parameters pc: 575 op: PROC (27)
    RefDS(_opts_49286);
    _0 = _this_opt_49390;
    _this_opt_49390 = _47find_opt(2, _25554, _opts_49286);
    DeRef(_0);
    _25554 = NOVALUE;
    // SubProg merge_parameters pc: 581 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 583 op: ELSE (23)
    goto L1A; // [583] 633
    // SubProg merge_parameters pc: 585 op: NOP1 (159)
L19: // addr: 586 pc: 585 sub: 49282 op: 159
    // SubProg merge_parameters pc: 586 op: STARTLINE (58)

    /** cominit.e:307			elsif opt[1] = '-' or opt[1] = '/' then*/
    // SubProg merge_parameters pc: 588 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49385);
    _25556 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 592 op: EQUALS (3)
    if (IS_ATOM_INT(_25556)) {
        _25557 = (_25556 == 45);
    }
    else {
        _25557 = binary_op(EQUALS, _25556, 45);
    }
    _25556 = NOVALUE;
    // SubProg merge_parameters pc: 596 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_25557)) {
        if (_25557 != 0) {
            goto L1B; // [596] 613
        }
    }
    else {
        if (DBL_PTR(_25557)->dbl != 0.0) {
            goto L1B; // [596] 613
        }
    }
    // SubProg merge_parameters pc: 600 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49385);
    _25559 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 604 op: EQUALS (3)
    if (IS_ATOM_INT(_25559)) {
        _25560 = (_25559 == 47);
    }
    else {
        _25560 = binary_op(EQUALS, _25559, 47);
    }
    _25559 = NOVALUE;
    // SubProg merge_parameters pc: 608 op: NOP1 (159)
    // SubProg merge_parameters pc: 609 op: IF (20)
    if (_25560 == 0) {
        DeRef(_25560);
        _25560 = NOVALUE;
        goto L1C; // [609] 632
    }
    else {
        if (!IS_ATOM_INT(_25560) && DBL_PTR(_25560)->dbl == 0.0){
            DeRef(_25560);
            _25560 = NOVALUE;
            goto L1C; // [609] 632
        }
        DeRef(_25560);
        _25560 = NOVALUE;
    }
    DeRef(_25560);
    _25560 = NOVALUE;
    // SubProg merge_parameters pc: 612 op: NOP1 (159)
L1B: // addr: 613 pc: 612 sub: 49282 op: 159
    // SubProg merge_parameters pc: 613 op: STARTLINE (58)

    /** cominit.e:308				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    // SubProg merge_parameters pc: 615 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49385)){
            _25561 = SEQ_PTR(_opt_49385)->length;
    }
    else {
        _25561 = 1;
    }
    // SubProg merge_parameters pc: 618 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25562;
    RHS_Slice(_opt_49385, 2, _25561);
    // SubProg merge_parameters pc: 623 op: PROC (27)
    RefDS(_opts_49286);
    _0 = _this_opt_49390;
    _this_opt_49390 = _47find_opt(1, _25562, _opts_49286);
    DeRef(_0);
    _25562 = NOVALUE;
    // SubProg merge_parameters pc: 629 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 631 op: NOP1 (159)
L1C: // addr: 632 pc: 631 sub: 49282 op: 159
    // SubProg merge_parameters pc: 632 op: NOP1 (159)
L1A: // addr: 633 pc: 632 sub: 49282 op: 159
    // SubProg merge_parameters pc: 633 op: STARTLINE (58)

    /** cominit.e:311			if length(this_opt) then*/
    // SubProg merge_parameters pc: 635 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49390)){
            _25564 = SEQ_PTR(_this_opt_49390)->length;
    }
    else {
        _25564 = 1;
    }
    // SubProg merge_parameters pc: 638 op: IF (20)
    if (_25564 == 0)
    {
        _25564 = NOVALUE;
        goto L1D; // [638] 667
    }
    else{
        _25564 = NOVALUE;
    }
    // SubProg merge_parameters pc: 641 op: STARTLINE (58)

    /** cominit.e:312				if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 645 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49390);
    _25565 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 649 op: FIND_FROM (176)
    _25566 = find_from(112, _25565, 1);
    _25565 = NOVALUE;
    // SubProg merge_parameters pc: 654 op: IF (20)
    if (_25566 == 0)
    {
        _25566 = NOVALUE;
        goto L1E; // [654] 679
    }
    else{
        _25566 = NOVALUE;
    }
    // SubProg merge_parameters pc: 657 op: STARTLINE (58)

    /** cominit.e:313					i += 1*/
    // SubProg merge_parameters pc: 659 op: PLUS1_I (117)
    _i_49288 = _i_49288 + 1;
    // SubProg merge_parameters pc: 663 op: NOP1 (159)
    // SubProg merge_parameters pc: 664 op: ELSE (23)
    goto L1E; // [664] 679
    // SubProg merge_parameters pc: 666 op: NOP1 (159)
L1D: // addr: 667 pc: 666 sub: 49282 op: 159
    // SubProg merge_parameters pc: 667 op: STARTLINE (58)

    /** cominit.e:316				first_extra = i*/
    // SubProg merge_parameters pc: 669 op: ASSIGN_I (113)
    _first_extra_49381 = _i_49288;
    // SubProg merge_parameters pc: 672 op: STARTLINE (58)

    /** cominit.e:317				exit*/
    // SubProg merge_parameters pc: 674 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49385
    DeRef(_opt_49385);
    _opt_49385 = NOVALUE;

// block var this_opt_49390
    DeRef(_this_opt_49390);
    _this_opt_49390 = NOVALUE;
    // SubProg merge_parameters pc: 676 op: EXIT (61)
    goto L17; // [676] 692
    // SubProg merge_parameters pc: 678 op: NOP1 (159)
L1E: // addr: 679 pc: 678 sub: 49282 op: 159
    // SubProg merge_parameters pc: 679 op: STARTLINE (58)

    /** cominit.e:320			i += 1*/
    // SubProg merge_parameters pc: 681 op: PLUS1_I (117)
    _i_49288 = _i_49288 + 1;
    // SubProg merge_parameters pc: 685 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49385
    DeRef(_opt_49385);
    _opt_49385 = NOVALUE;

// block var this_opt_49390
    DeRef(_this_opt_49390);
    _this_opt_49390 = NOVALUE;
    // SubProg merge_parameters pc: 687 op: STARTLINE (58)

    /** cominit.e:321		end while*/
    // SubProg merge_parameters pc: 689 op: ENDWHILE (22)
    goto L16; // [689] 496
    // SubProg merge_parameters pc: 691 op: NOP1 (159)
L17: // addr: 692 pc: 691 sub: 49282 op: 159
    // SubProg merge_parameters pc: 692 op: STARTLINE (58)

    /** cominit.e:323		if first_extra then*/
    // SubProg merge_parameters pc: 694 op: IF (20)
    if (_first_extra_49381 == 0)
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
        insert_pos = _first_extra_49381;
        if (insert_pos <= 0) {
            Concat(&_25569,_a_49284,_b_49285);
        }
        else if (insert_pos > SEQ_PTR(_b_49285)->length){
            Concat(&_25569,_b_49285,_a_49284);
        }
        else if (IS_SEQUENCE(_a_49284)) {
            if( _25569 != _b_49285 || SEQ_PTR( _b_49285 )->ref != 1 ){
                DeRef( _25569 );
                RefDS( _b_49285 );
            }
            assign_space = Add_internal_space( _b_49285, insert_pos,((s1_ptr)SEQ_PTR(_a_49284))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_a_49284), _b_49285 == _25569 );
            _25569 = MAKE_SEQ( assign_space );
        }
        else {
            if( _25569 != _b_49285 && SEQ_PTR( _b_49285 )->ref != 1 ){
                _25569 = Insert( _b_49285, _a_49284, insert_pos);
            }
            else {
                DeRef( _25569 );
                RefDS( _b_49285 );
                _25569 = Insert( _b_49285, _a_49284, insert_pos);
            }
        }
    }
    // SubProg merge_parameters pc: 704 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49284
    DeRefDS(_a_49284);

// block var b_49285
    DeRefDS(_b_49285);

// block var opts_49286
    DeRefDS(_opts_49286);

// block var dedupe_49287

// block var i_49288

// block var first_extra_49381
    DeRef(_25542);
    _25542 = NOVALUE;
    DeRef(_25549);
    _25549 = NOVALUE;
    DeRef(_25528);
    _25528 = NOVALUE;
    DeRef(_25557);
    _25557 = NOVALUE;
    DeRef(_25531);
    _25531 = NOVALUE;
    DeRef(_25494);
    _25494 = NOVALUE;
    return _25569;
    // SubProg merge_parameters pc: 708 op: NOP1 (159)
L1F: // addr: 709 pc: 708 sub: 49282 op: 159
    // SubProg merge_parameters pc: 709 op: STARTLINE (58)

    /** cominit.e:328		return b & a*/
    // SubProg merge_parameters pc: 711 op: CONCAT (15)
    Concat((object_ptr)&_25570, _b_49285, _a_49284);
    // SubProg merge_parameters pc: 715 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49284
    DeRefDS(_a_49284);

// block var b_49285
    DeRefDS(_b_49285);

// block var opts_49286
    DeRefDS(_opts_49286);

// block var dedupe_49287

// block var i_49288

// block var first_extra_49381
    DeRef(_25542);
    _25542 = NOVALUE;
    DeRef(_25549);
    _25549 = NOVALUE;
    DeRef(_25528);
    _25528 = NOVALUE;
    DeRef(_25557);
    _25557 = NOVALUE;
    DeRef(_25531);
    _25531 = NOVALUE;
    DeRef(_25569);
    _25569 = NOVALUE;
    DeRef(_25494);
    _25494 = NOVALUE;
    return _25570;
    // SubProg merge_parameters pc: 719 op: BADRETURNF (43)
    ;
}


object _47validate_opt(object _opt_type_49423, object _arg_49424, object _args_49425, object _ix_49426)
{
    object _opt_49427 = NOVALUE;
    object _this_opt_49435 = NOVALUE;
    object _25589 = NOVALUE; // 49457 25589
    object _25588 = NOVALUE; // 49456 25588
    object _25587 = NOVALUE; // 49454 25587
    object _25586 = NOVALUE; // 49453 25586
    object _25585 = NOVALUE; // 49451 25585
// skipping _25584  name type: 0
    object _25583 = NOVALUE; // 49447 25583
    object _25582 = NOVALUE; // 49446 25582
    object _25581 = NOVALUE; // 49444 25581
    object _25580 = NOVALUE; // 49443 25580
    object _25579 = NOVALUE; // 49440 25579
// skipping _25578  name type: 0
    object _25577 = NOVALUE; // 49438 25577
// skipping _25576  name type: 0
// skipping _25575  name type: 0
    object _25574 = NOVALUE; // 49433 25574
// skipping _25573  name type: 0
    object _25572 = NOVALUE; // 49430 25572
// skipping _25571  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg validate_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg validate_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 7 op: INTEGER_CHECK (96)
    // SubProg validate_opt pc: 9 op: STARTLINE (58)

    /** cominit.e:336		if opt_type = SHORTNAME then*/
    // SubProg validate_opt pc: 11 op: EQUALS_IFW_I (121)
    if (_opt_type_49423 != 1)
    goto L1; // [11] 28
    // SubProg validate_opt pc: 15 op: STARTLINE (58)

    /** cominit.e:337			opt = arg[2..$]*/
    // SubProg validate_opt pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49424)){
            _25572 = SEQ_PTR(_arg_49424)->length;
    }
    else {
        _25572 = 1;
    }
    // SubProg validate_opt pc: 20 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_opt_49427;
    RHS_Slice(_arg_49424, 2, _25572);
    // SubProg validate_opt pc: 25 op: ELSE (23)
    goto L2; // [25] 39
    // SubProg validate_opt pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 49421 op: 159
    // SubProg validate_opt pc: 28 op: STARTLINE (58)

    /** cominit.e:339			opt = arg[3..$]*/
    // SubProg validate_opt pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49424)){
            _25574 = SEQ_PTR(_arg_49424)->length;
    }
    else {
        _25574 = 1;
    }
    // SubProg validate_opt pc: 33 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_opt_49427;
    RHS_Slice(_arg_49424, 3, _25574);
    // SubProg validate_opt pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 49421 op: 159
    // SubProg validate_opt pc: 39 op: STARTLINE (58)

    /** cominit.e:342		sequence this_opt = find_opt( opt_type, opt, options )*/
    // SubProg validate_opt pc: 41 op: PRIVATE_INIT_CHECK (30)
    // SubProg validate_opt pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 45 op: PROC (27)
    RefDS(_opt_49427);
    RefDS(_47options_49165);
    _0 = _this_opt_49435;
    _this_opt_49435 = _47find_opt(_opt_type_49423, _opt_49427, _47options_49165);
    DeRef(_0);
    // SubProg validate_opt pc: 51 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 53 op: STARTLINE (58)

    /** cominit.e:343		if not length( this_opt ) then*/
    // SubProg validate_opt pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49435)){
            _25577 = SEQ_PTR(_this_opt_49435)->length;
    }
    else {
        _25577 = 1;
    }
    // SubProg validate_opt pc: 58 op: NOT_IFW (108)
    if (_25577 != 0)
    goto L3; // [58] 72
    _25577 = NOVALUE;
    // SubProg validate_opt pc: 61 op: STARTLINE (58)

    /** cominit.e:345			return { 0, 0 }*/
    // SubProg validate_opt pc: 63 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _25579 = MAKE_SEQ(_1);
    // SubProg validate_opt pc: 67 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49423

// block var arg_49424
    DeRefDS(_arg_49424);

// block var args_49425
    DeRefDS(_args_49425);

// block var ix_49426

// block var opt_49427
    DeRefDS(_opt_49427);

// block var this_opt_49435
    DeRefDS(_this_opt_49435);
    return _25579;
    // SubProg validate_opt pc: 71 op: NOP1 (159)
L3: // addr: 72 pc: 71 sub: 49421 op: 159
    // SubProg validate_opt pc: 72 op: STARTLINE (58)

    /** cominit.e:348		if find( HAS_PARAMETER, this_opt[OPTIONS] ) then*/
    // SubProg validate_opt pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49435);
    _25580 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg validate_opt pc: 80 op: FIND_FROM (176)
    _25581 = find_from(112, _25580, 1);
    _25580 = NOVALUE;
    // SubProg validate_opt pc: 85 op: IF (20)
    if (_25581 == 0)
    {
        _25581 = NOVALUE;
        goto L4; // [85] 135
    }
    else{
        _25581 = NOVALUE;
    }
    // SubProg validate_opt pc: 88 op: STARTLINE (58)

    /** cominit.e:349			if ix = length( args ) - 1 then*/
    // SubProg validate_opt pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49425)){
            _25582 = SEQ_PTR(_args_49425)->length;
    }
    else {
        _25582 = 1;
    }
    // SubProg validate_opt pc: 93 op: MINUS (10)
    _25583 = _25582 - 1;
    _25582 = NOVALUE;
    // SubProg validate_opt pc: 97 op: EQUALS_IFW (104)
    if (_ix_49426 != _25583)
    goto L5; // [97] 117
    // SubProg validate_opt pc: 101 op: STARTLINE (58)

    /** cominit.e:351				CompileErr( MISSING_CMD_PARAMETER, { arg } )*/
    // SubProg validate_opt pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 105 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_arg_49424);
    ((intptr_t*)_2)[1] = _arg_49424;
    _25585 = MAKE_SEQ(_1);
    // SubProg validate_opt pc: 109 op: PROC (27)
    _49CompileErr(353, _25585, 0);
    _25585 = NOVALUE;
    // SubProg validate_opt pc: 114 op: ELSE (23)
    goto L6; // [114] 150
    // SubProg validate_opt pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 49421 op: 159
    // SubProg validate_opt pc: 117 op: STARTLINE (58)

    /** cominit.e:353				return { ix, ix + 2 }*/
    // SubProg validate_opt pc: 119 op: PLUS (11)
    _25586 = _ix_49426 + 2;
    if ((object)((uintptr_t)_25586 + (uintptr_t)HIGH_BITS) >= 0){
        _25586 = NewDouble((eudouble)_25586);
    }
    // SubProg validate_opt pc: 123 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49426;
    ((intptr_t *)_2)[2] = _25586;
    _25587 = MAKE_SEQ(_1);
    _25586 = NOVALUE;
    // SubProg validate_opt pc: 127 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49423

// block var arg_49424
    DeRefDS(_arg_49424);

// block var args_49425
    DeRefDS(_args_49425);

// block var ix_49426

// block var opt_49427
    DeRef(_opt_49427);

// block var this_opt_49435
    DeRef(_this_opt_49435);
    DeRef(_25579);
    _25579 = NOVALUE;
    DeRef(_25583);
    _25583 = NOVALUE;
    return _25587;
    // SubProg validate_opt pc: 131 op: NOP1 (159)
    // SubProg validate_opt pc: 132 op: ELSE (23)
    goto L6; // [132] 150
    // SubProg validate_opt pc: 134 op: NOP1 (159)
L4: // addr: 135 pc: 134 sub: 49421 op: 159
    // SubProg validate_opt pc: 135 op: STARTLINE (58)

    /** cominit.e:356			return { ix, ix + 1 }*/
    // SubProg validate_opt pc: 137 op: PLUS1 (93)
    _25588 = _ix_49426 + 1;
    if (_25588 > MAXINT){
        _25588 = NewDouble((eudouble)_25588);
    }
    // SubProg validate_opt pc: 141 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49426;
    ((intptr_t *)_2)[2] = _25588;
    _25589 = MAKE_SEQ(_1);
    _25588 = NOVALUE;
    // SubProg validate_opt pc: 145 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49423

// block var arg_49424
    DeRefDS(_arg_49424);

// block var args_49425
    DeRefDS(_args_49425);

// block var ix_49426

// block var opt_49427
    DeRef(_opt_49427);

// block var this_opt_49435
    DeRef(_this_opt_49435);
    DeRef(_25579);
    _25579 = NOVALUE;
    DeRef(_25587);
    _25587 = NOVALUE;
    DeRef(_25583);
    _25583 = NOVALUE;
    return _25589;
    // SubProg validate_opt pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 49421 op: 159
    // SubProg validate_opt pc: 150 op: BADRETURNF (43)
    ;
}


object _47find_next_opt(object _ix_49460, object _args_49461)
{
    object _arg_49465 = NOVALUE;
    object _25611 = NOVALUE; // 49492 25611
    object _25610 = NOVALUE; // 49491 25610
// skipping _25609  name type: 0
    object _25608 = NOVALUE; // 49489 25608
    object _25607 = NOVALUE; // 49488 25607
    object _25606 = NOVALUE; // 49486 25606
    object _25605 = NOVALUE; // 49485 25605
    object _25604 = NOVALUE; // 49483 25604
    object _25603 = NOVALUE; // 49481 25603
    object _25602 = NOVALUE; // 49480 25602
    object _25601 = NOVALUE; // 49479 25601
// skipping _25600  name type: 0
    object _25599 = NOVALUE; // 49477 25599
// skipping _25598  name type: 0
    object _25597 = NOVALUE; // 49474 25597
// skipping _25596  name type: 0
    object _25595 = NOVALUE; // 49471 25595
// skipping _25594  name type: 0
    object _25593 = NOVALUE; // 49468 25593
// skipping _25592  name type: 0
// skipping _25591  name type: 0
    object _25590 = NOVALUE; // 49463 25590
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_next_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg find_next_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_next_opt pc: 5 op: STARTLINE (58)

    /** cominit.e:374		while ix < length( args ) do*/
    // SubProg find_next_opt pc: 7 op: NOP2 (110)
    // SubProg find_next_opt pc: 9 op: NOPWHILE (158)
L1: // addr: 10 pc: 9 sub: 49458 op: 158
    // SubProg find_next_opt pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49461)){
            _25590 = SEQ_PTR(_args_49461)->length;
    }
    else {
        _25590 = 1;
    }
    // SubProg find_next_opt pc: 13 op: LESS_IFW_I (119)
    if (_ix_49460 >= _25590)
    goto L2; // [13] 157
    // SubProg find_next_opt pc: 17 op: STARTLINE (58)

    /** cominit.e:375			sequence arg = args[ix]*/
    // SubProg find_next_opt pc: 19 op: RHS_SUBS (25)
    DeRef(_arg_49465);
    _2 = (object)SEQ_PTR(_args_49461);
    _arg_49465 = (object)*(((s1_ptr)_2)->base + _ix_49460);
    Ref(_arg_49465);
    // SubProg find_next_opt pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg find_next_opt pc: 25 op: STARTLINE (58)

    /** cominit.e:376			if length( arg ) > 1 then*/
    // SubProg find_next_opt pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49465)){
            _25593 = SEQ_PTR(_arg_49465)->length;
    }
    else {
        _25593 = 1;
    }
    // SubProg find_next_opt pc: 30 op: GREATER_IFW_I (124)
    if (_25593 <= 1)
    goto L3; // [30] 129
    // SubProg find_next_opt pc: 34 op: STARTLINE (58)

    /** cominit.e:377				if arg[1] = '-' then*/
    // SubProg find_next_opt pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_arg_49465);
    _25595 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_next_opt pc: 40 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25595, 45)){
        _25595 = NOVALUE;
        goto L4; // [40] 111
    }
    _25595 = NOVALUE;
    // SubProg find_next_opt pc: 44 op: STARTLINE (58)

    /** cominit.e:378					if arg[2] = '-' then*/
    // SubProg find_next_opt pc: 46 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_arg_49465);
    _25597 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg find_next_opt pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25597, 45)){
        _25597 = NOVALUE;
        goto L5; // [50] 94
    }
    _25597 = NOVALUE;
    // SubProg find_next_opt pc: 54 op: STARTLINE (58)

    /** cominit.e:380						if length( arg ) = 2 then*/
    // SubProg find_next_opt pc: 56 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49465)){
            _25599 = SEQ_PTR(_arg_49465)->length;
    }
    else {
        _25599 = 1;
    }
    // SubProg find_next_opt pc: 59 op: EQUALS_IFW_I (121)
    if (_25599 != 2)
    goto L6; // [59] 78
    // SubProg find_next_opt pc: 63 op: STARTLINE (58)

    /** cominit.e:382							return { 0, ix - 1 }*/
    // SubProg find_next_opt pc: 65 op: MINUS (10)
    _25601 = _ix_49460 - 1;
    if ((object)((uintptr_t)_25601 +(uintptr_t) HIGH_BITS) >= 0){
        _25601 = NewDouble((eudouble)_25601);
    }
    // SubProg find_next_opt pc: 69 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25601;
    _25602 = MAKE_SEQ(_1);
    _25601 = NOVALUE;
    // SubProg find_next_opt pc: 73 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49465
    DeRefDS(_arg_49465);

// Exiting block BLOCK: find_next_opt

// block var ix_49460

// block var args_49461
    DeRefDS(_args_49461);
    return _25602;
    // SubProg find_next_opt pc: 77 op: NOP1 (159)
L6: // addr: 78 pc: 77 sub: 49458 op: 159
    // SubProg find_next_opt pc: 78 op: STARTLINE (58)

    /** cominit.e:385						return validate_opt( LONGNAME, arg, args, ix )*/
    // SubProg find_next_opt pc: 80 op: PROC (27)
    RefDS(_arg_49465);
    RefDS(_args_49461);
    _25603 = _47validate_opt(2, _arg_49465, _args_49461, _ix_49460);
    // SubProg find_next_opt pc: 87 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49465
    DeRefDS(_arg_49465);

// Exiting block BLOCK: find_next_opt

// block var ix_49460

// block var args_49461
    DeRefDS(_args_49461);
    DeRef(_25602);
    _25602 = NOVALUE;
    return _25603;
    // SubProg find_next_opt pc: 91 op: ELSE (23)
    goto L7; // [91] 144
    // SubProg find_next_opt pc: 93 op: NOP1 (159)
L5: // addr: 94 pc: 93 sub: 49458 op: 159
    // SubProg find_next_opt pc: 94 op: STARTLINE (58)

    /** cominit.e:389						return validate_opt( SHORTNAME, arg, args, ix )*/
    // SubProg find_next_opt pc: 96 op: PROC (27)
    RefDS(_arg_49465);
    RefDS(_args_49461);
    _25604 = _47validate_opt(1, _arg_49465, _args_49461, _ix_49460);
    // SubProg find_next_opt pc: 103 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49465
    DeRefDS(_arg_49465);

// Exiting block BLOCK: find_next_opt

// block var ix_49460

// block var args_49461
    DeRefDS(_args_49461);
    DeRef(_25602);
    _25602 = NOVALUE;
    DeRef(_25603);
    _25603 = NOVALUE;
    return _25604;
    // SubProg find_next_opt pc: 107 op: NOP1 (159)
    // SubProg find_next_opt pc: 108 op: ELSE (23)
    goto L7; // [108] 144
    // SubProg find_next_opt pc: 110 op: NOP1 (159)
L4: // addr: 111 pc: 110 sub: 49458 op: 159
    // SubProg find_next_opt pc: 111 op: STARTLINE (58)

    /** cominit.e:393					return {0, ix-1}*/
    // SubProg find_next_opt pc: 113 op: MINUS (10)
    _25605 = _ix_49460 - 1;
    if ((object)((uintptr_t)_25605 +(uintptr_t) HIGH_BITS) >= 0){
        _25605 = NewDouble((eudouble)_25605);
    }
    // SubProg find_next_opt pc: 117 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25605;
    _25606 = MAKE_SEQ(_1);
    _25605 = NOVALUE;
    // SubProg find_next_opt pc: 121 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49465
    DeRef(_arg_49465);

// Exiting block BLOCK: find_next_opt

// block var ix_49460

// block var args_49461
    DeRefDS(_args_49461);
    DeRef(_25602);
    _25602 = NOVALUE;
    DeRef(_25604);
    _25604 = NOVALUE;
    DeRef(_25603);
    _25603 = NOVALUE;
    return _25606;
    // SubProg find_next_opt pc: 125 op: NOP1 (159)
    // SubProg find_next_opt pc: 126 op: ELSE (23)
    goto L7; // [126] 144
    // SubProg find_next_opt pc: 128 op: NOP1 (159)
L3: // addr: 129 pc: 128 sub: 49458 op: 159
    // SubProg find_next_opt pc: 129 op: STARTLINE (58)

    /** cominit.e:397				return { 0, ix-1 }*/
    // SubProg find_next_opt pc: 131 op: MINUS (10)
    _25607 = _ix_49460 - 1;
    if ((object)((uintptr_t)_25607 +(uintptr_t) HIGH_BITS) >= 0){
        _25607 = NewDouble((eudouble)_25607);
    }
    // SubProg find_next_opt pc: 135 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25607;
    _25608 = MAKE_SEQ(_1);
    _25607 = NOVALUE;
    // SubProg find_next_opt pc: 139 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49465
    DeRef(_arg_49465);

// Exiting block BLOCK: find_next_opt

// block var ix_49460

// block var args_49461
    DeRefDS(_args_49461);
    DeRef(_25606);
    _25606 = NOVALUE;
    DeRef(_25602);
    _25602 = NOVALUE;
    DeRef(_25604);
    _25604 = NOVALUE;
    DeRef(_25603);
    _25603 = NOVALUE;
    return _25608;
    // SubProg find_next_opt pc: 143 op: NOP1 (159)
L7: // addr: 144 pc: 143 sub: 49458 op: 159
    // SubProg find_next_opt pc: 144 op: STARTLINE (58)

    /** cominit.e:400			ix += 1*/
    // SubProg find_next_opt pc: 146 op: PLUS1_I (117)
    _ix_49460 = _ix_49460 + 1;
    // SubProg find_next_opt pc: 150 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var arg_49465
    DeRef(_arg_49465);
    _arg_49465 = NOVALUE;
    // SubProg find_next_opt pc: 152 op: STARTLINE (58)

    /** cominit.e:401		end while*/
    // SubProg find_next_opt pc: 154 op: ENDWHILE (22)
    goto L1; // [154] 10
    // SubProg find_next_opt pc: 156 op: NOP1 (159)
L2: // addr: 157 pc: 156 sub: 49458 op: 159
    // SubProg find_next_opt pc: 157 op: STARTLINE (58)

    /** cominit.e:402		return {0, ix-1}*/
    // SubProg find_next_opt pc: 159 op: MINUS (10)
    _25610 = _ix_49460 - 1;
    if ((object)((uintptr_t)_25610 +(uintptr_t) HIGH_BITS) >= 0){
        _25610 = NewDouble((eudouble)_25610);
    }
    // SubProg find_next_opt pc: 163 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25610;
    _25611 = MAKE_SEQ(_1);
    _25610 = NOVALUE;
    // SubProg find_next_opt pc: 167 op: RETURNF (28)

// Exiting block BLOCK: find_next_opt

// block var ix_49460

// block var args_49461
    DeRefDS(_args_49461);
    DeRef(_25606);
    _25606 = NOVALUE;
    DeRef(_25602);
    _25602 = NOVALUE;
    DeRef(_25608);
    _25608 = NOVALUE;
    DeRef(_25604);
    _25604 = NOVALUE;
    DeRef(_25603);
    _25603 = NOVALUE;
    return _25611;
    // SubProg find_next_opt pc: 171 op: BADRETURNF (43)
    ;
}


object _47expand_config_options(object _args_49495)
{
    object _idx_49496 = NOVALUE;
    object _next_idx_49497 = NOVALUE;
    object _files_49498 = NOVALUE;
    object _cmd_1_2_49499 = NOVALUE;
    object _25634 = NOVALUE; // 49527 25634
    object _25633 = NOVALUE; // 49526 25633
    object _25632 = NOVALUE; // 49525 25632
    object _25631 = NOVALUE; // 49524 25631
    object _25630 = NOVALUE; // 49523 25630
    object _25629 = NOVALUE; // 49522 25629
    object _25628 = NOVALUE; // 49521 25628
    object _25627 = NOVALUE; // 49520 25627
    object _25626 = NOVALUE; // 49519 25626
// skipping _25625  name type: 0
// skipping _25624  name type: 0
// skipping _25623  name type: 0
// skipping _25622  name type: 0
    object _25621 = NOVALUE; // 49512 25621
// skipping _25620  name type: 0
    object _25619 = NOVALUE; // 49510 25619
    object _25618 = NOVALUE; // 49509 25618
    object _25617 = NOVALUE; // 49508 25617
    object _25615 = NOVALUE; // 49506 25615
    object _25614 = NOVALUE; // 49505 25614
// skipping _25613  name type: 0
// skipping _25612  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expand_config_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 3 op: STARTLINE (58)

    /** cominit.e:410		integer idx = 1*/
    // SubProg expand_config_options pc: 5 op: ASSIGN_I (113)
    _idx_49496 = 1;
    // SubProg expand_config_options pc: 8 op: STARTLINE (58)

    /** cominit.e:412		sequence files = {}*/
    // SubProg expand_config_options pc: 10 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_files_49498);
    _files_49498 = _21936;
    // SubProg expand_config_options pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 15 op: STARTLINE (58)

    /** cominit.e:413		sequence cmd_1_2 = args[1..2]*/
    // SubProg expand_config_options pc: 17 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_1_2_49499;
    RHS_Slice(_args_49495, 1, 2);
    // SubProg expand_config_options pc: 22 op: STARTLINE (58)

    /** cominit.e:414		args = remove( args, 1, 2 )*/
    // SubProg expand_config_options pc: 24 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_args_49495);
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
                Head( SEQ_PTR(_args_49495), start, &_args_49495 );
            }
            else Tail(SEQ_PTR(_args_49495), stop+1, &_args_49495);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49495), start, &_args_49495);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49495 = Remove_elements(start, stop, (SEQ_PTR(_args_49495)->ref == 1));
        }
    }
    // SubProg expand_config_options pc: 29 op: STARTLINE (58)

    /** cominit.e:416		while idx with entry do*/
    // SubProg expand_config_options pc: 31 op: ELSE (23)
    goto L1; // [31] 94
    // SubProg expand_config_options pc: 33 op: NOPWHILE (158)
L2: // addr: 34 pc: 33 sub: 49493 op: 158
    // SubProg expand_config_options pc: 34 op: WHILE (47)
    if (_idx_49496 == 0)
    {
        goto L3; // [34] 114
    }
    else{
    }
    // SubProg expand_config_options pc: 37 op: STARTLINE (58)

    /** cominit.e:417			if equal(upper(args[idx]), "-C") then*/
    // SubProg expand_config_options pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_args_49495);
    _25614 = (object)*(((s1_ptr)_2)->base + _idx_49496);
    // SubProg expand_config_options pc: 43 op: PROC (27)
    Ref(_25614);
    _25615 = _15upper(_25614);
    _25614 = NOVALUE;
    // SubProg expand_config_options pc: 47 op: EQUAL (153)
    if (_25615 == _25616)
    _25617 = 1;
    else if (IS_ATOM_INT(_25615) && IS_ATOM_INT(_25616))
    _25617 = 0;
    else
    _25617 = (compare(_25615, _25616) == 0);
    DeRef(_25615);
    _25615 = NOVALUE;
    // SubProg expand_config_options pc: 51 op: IF (20)
    if (_25617 == 0)
    {
        _25617 = NOVALUE;
        goto L4; // [51] 82
    }
    else{
        _25617 = NOVALUE;
    }
    // SubProg expand_config_options pc: 54 op: STARTLINE (58)

    /** cominit.e:418				files = append( files, args[idx+1] )*/
    // SubProg expand_config_options pc: 56 op: PLUS1 (93)
    _25618 = _idx_49496 + 1;
    // SubProg expand_config_options pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_args_49495);
    _25619 = (object)*(((s1_ptr)_2)->base + _25618);
    // SubProg expand_config_options pc: 64 op: APPEND (35)
    Ref(_25619);
    Append(&_files_49498, _files_49498, _25619);
    _25619 = NOVALUE;
    // SubProg expand_config_options pc: 68 op: STARTLINE (58)

    /** cominit.e:419				args = remove( args, idx, idx + 1 )*/
    // SubProg expand_config_options pc: 70 op: PLUS1 (93)
    _25621 = _idx_49496 + 1;
    if (_25621 > MAXINT){
        _25621 = NewDouble((eudouble)_25621);
    }
    // SubProg expand_config_options pc: 74 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_args_49495);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_idx_49496)) ? _idx_49496 : (object)(DBL_PTR(_idx_49496)->dbl);
        int stop = (IS_ATOM_INT(_25621)) ? _25621 : (object)(DBL_PTR(_25621)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_args_49495), start, &_args_49495 );
            }
            else Tail(SEQ_PTR(_args_49495), stop+1, &_args_49495);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49495), start, &_args_49495);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49495 = Remove_elements(start, stop, (SEQ_PTR(_args_49495)->ref == 1));
        }
    }
    DeRef(_25621);
    _25621 = NOVALUE;
    // SubProg expand_config_options pc: 79 op: ELSE (23)
    goto L5; // [79] 91
    // SubProg expand_config_options pc: 81 op: NOP1 (159)
L4: // addr: 82 pc: 81 sub: 49493 op: 159
    // SubProg expand_config_options pc: 82 op: STARTLINE (58)

    /** cominit.e:422				idx = next_idx[2]*/
    // SubProg expand_config_options pc: 84 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_config_options pc: 86 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_next_idx_49497);
    _idx_49496 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_idx_49496))
    _idx_49496 = (object)DBL_PTR(_idx_49496)->dbl;
    // SubProg expand_config_options pc: 90 op: NOP1 (159)
L5: // addr: 91 pc: 90 sub: 49493 op: 159
    // SubProg expand_config_options pc: 91 op: STARTLINE (58)

    /** cominit.e:424		entry*/
    // SubProg expand_config_options pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 49493 op: 159
    // SubProg expand_config_options pc: 94 op: STARTLINE (58)

    /** cominit.e:425			next_idx = find_next_opt( idx, args )*/
    // SubProg expand_config_options pc: 96 op: PROC (27)
    RefDS(_args_49495);
    _0 = _next_idx_49497;
    _next_idx_49497 = _47find_next_opt(_idx_49496, _args_49495);
    DeRef(_0);
    // SubProg expand_config_options pc: 101 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 103 op: STARTLINE (58)

    /** cominit.e:426			idx = next_idx[1]*/
    // SubProg expand_config_options pc: 105 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_next_idx_49497);
    _idx_49496 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_idx_49496))
    _idx_49496 = (object)DBL_PTR(_idx_49496)->dbl;
    // SubProg expand_config_options pc: 109 op: STARTLINE (58)

    /** cominit.e:427		end while*/
    // SubProg expand_config_options pc: 111 op: ENDWHILE (22)
    goto L2; // [111] 34
    // SubProg expand_config_options pc: 113 op: NOP1 (159)
L3: // addr: 114 pc: 113 sub: 49493 op: 159
    // SubProg expand_config_options pc: 114 op: STARTLINE (58)

    /** cominit.e:428		return cmd_1_2 & merge_parameters( GetDefaultArgs( files ), args[1..next_idx[2]], options, 1 ) & args[next_idx[2]+1..$]*/
    // SubProg expand_config_options pc: 116 op: PROC (27)
    RefDS(_files_49498);
    _25626 = _46GetDefaultArgs(_files_49498);
    // SubProg expand_config_options pc: 120 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_config_options pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_next_idx_49497);
    _25627 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg expand_config_options pc: 126 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25628;
    RHS_Slice(_args_49495, 1, _25627);
    // SubProg expand_config_options pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_config_options pc: 133 op: PROC (27)
    RefDS(_47options_49165);
    _25629 = _47merge_parameters(_25626, _25628, _47options_49165, 1);
    _25626 = NOVALUE;
    _25628 = NOVALUE;
    // SubProg expand_config_options pc: 140 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_next_idx_49497);
    _25630 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg expand_config_options pc: 144 op: PLUS1 (93)
    if (IS_ATOM_INT(_25630)) {
        _25631 = _25630 + 1;
        if (_25631 > MAXINT){
            _25631 = NewDouble((eudouble)_25631);
        }
    }
    else
    _25631 = binary_op(PLUS, 1, _25630);
    _25630 = NOVALUE;
    // SubProg expand_config_options pc: 148 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49495)){
            _25632 = SEQ_PTR(_args_49495)->length;
    }
    else {
        _25632 = 1;
    }
    // SubProg expand_config_options pc: 151 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25633;
    RHS_Slice(_args_49495, _25631, _25632);
    // SubProg expand_config_options pc: 156 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _25633;
        concat_list[1] = _25629;
        concat_list[2] = _cmd_1_2_49499;
        Concat_N((object_ptr)&_25634, concat_list, 3);
    }
    DeRefDS(_25633);
    _25633 = NOVALUE;
    DeRef(_25629);
    _25629 = NOVALUE;
    // SubProg expand_config_options pc: 162 op: RETURNF (28)

// Exiting block BLOCK: expand_config_options

// block var args_49495
    DeRefDS(_args_49495);

// block var idx_49496

// block var next_idx_49497
    DeRefDS(_next_idx_49497);

// block var files_49498
    DeRefDS(_files_49498);

// block var cmd_1_2_49499
    DeRefDS(_cmd_1_2_49499);
    DeRef(_25618);
    _25618 = NOVALUE;
    DeRef(_25631);
    _25631 = NOVALUE;
    _25627 = NOVALUE;
    return _25634;
    // SubProg expand_config_options pc: 166 op: BADRETURNF (43)
    ;
}


void _47handle_common_options(object _opts_49530)
{
    object _opt_keys_49531 = NOVALUE;
    object _option_w_49533 = NOVALUE;
    object _key_49537 = NOVALUE;
    object _val_49539 = NOVALUE;
    object _this_warn_49585 = NOVALUE;
    object _auto_add_warn_49587 = NOVALUE;
    object _n_49593 = NOVALUE;
    object _this_warn_49616 = NOVALUE;
    object _auto_add_warn_49618 = NOVALUE;
    object _n_49624 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_615_49659 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_689_49671 = NOVALUE;
// skipping _25696  name type: 0
// skipping _25694  name type: 0
    object _25693 = NOVALUE; // 49691 25693
    object _25692 = NOVALUE; // 49688 25692
// skipping _25691  name type: 0
    object _25690 = NOVALUE; // 49683 25690
// skipping _25689  name type: 0
    object _25688 = NOVALUE; // 49679 25688
// skipping _25687  name type: 0
    object _25686 = NOVALUE; // 49669 25686
    object _25685 = NOVALUE; // 49667 25685
    object _25684 = NOVALUE; // 49665 25684
    object _25683 = NOVALUE; // 49664 25683
    object _25682 = NOVALUE; // 49657 25682
    object _25681 = NOVALUE; // 49655 25681
    object _25680 = NOVALUE; // 49653 25680
    object _25679 = NOVALUE; // 49652 25679
// skipping _25678  name type: 0
    object _25677 = NOVALUE; // 49642 25677
// skipping _25676  name type: 0
    object _25675 = NOVALUE; // 49636 25675
    object _25674 = NOVALUE; // 49635 25674
    object _25673 = NOVALUE; // 49631 25673
// skipping _25672  name type: 0
// skipping _25671  name type: 0
// skipping _25670  name type: 0
// skipping _25669  name type: 0
    object _25668 = NOVALUE; // 49622 25668
// skipping _25667  name type: 0
    object _25666 = NOVALUE; // 49620 25666
// skipping _25665  name type: 0
    object _25664 = NOVALUE; // 49615 25664
// skipping _25663  name type: 0
// skipping _25662  name type: 0
    object _25661 = NOVALUE; // 49604 25661
    object _25660 = NOVALUE; // 49600 25660
// skipping _25659  name type: 0
// skipping _25658  name type: 0
// skipping _25657  name type: 0
// skipping _25656  name type: 0
    object _25655 = NOVALUE; // 49591 25655
// skipping _25654  name type: 0
    object _25653 = NOVALUE; // 49589 25653
// skipping _25652  name type: 0
    object _25651 = NOVALUE; // 49584 25651
// skipping _25650  name type: 0
    object _25649 = NOVALUE; // 49577 25649
    object _25648 = NOVALUE; // 49575 25648
    object _25647 = NOVALUE; // 49574 25647
    object _25646 = NOVALUE; // 49569 25646
    object _25645 = NOVALUE; // 49563 25645
    object _25644 = NOVALUE; // 49561 25644
// skipping _25643  name type: 0
    object _25642 = NOVALUE; // 49548 25642
    object _25641 = NOVALUE; // 49546 25641
// skipping _25638  name type: 0
// skipping _25637  name type: 0
    object _25636 = NOVALUE; // 49536 25636
// skipping _25635  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg handle_common_options pc: 1 op: STARTLINE (58)

    /** cominit.e:435		sequence opt_keys = m:keys(opts)*/
    // SubProg handle_common_options pc: 3 op: PROC (27)
    Ref(_opts_49530);
    _0 = _opt_keys_49531;
    _opt_keys_49531 = _28keys(_opts_49530, 0);
    DeRef(_0);
    // SubProg handle_common_options pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg handle_common_options pc: 10 op: STARTLINE (58)

    /** cominit.e:436		integer option_w = 0*/
    // SubProg handle_common_options pc: 12 op: ASSIGN_I (113)
    _option_w_49533 = 0;
    // SubProg handle_common_options pc: 15 op: STARTLINE (58)

    /** cominit.e:438		for idx = 1 to length(opt_keys) do*/
    // SubProg handle_common_options pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_keys_49531)){
            _25636 = SEQ_PTR(_opt_keys_49531)->length;
    }
    else {
        _25636 = 1;
    }
    // SubProg handle_common_options pc: 20 op: FOR_I (125)
    {
        object _idx_49535;
        _idx_49535 = 1;
L1: // addr: 27 pc: 20 sub: 49528 op: 125
        if (_idx_49535 > _25636){
            goto L2; // [20] 791
        }
        // SubProg handle_common_options pc: 27 op: STARTLINE (58)

        /** cominit.e:439			sequence key = opt_keys[idx]*/
        // SubProg handle_common_options pc: 29 op: RHS_SUBS (25)
        DeRef(_key_49537);
        _2 = (object)SEQ_PTR(_opt_keys_49531);
        _key_49537 = (object)*(((s1_ptr)_2)->base + _idx_49535);
        Ref(_key_49537);
        // SubProg handle_common_options pc: 33 op: SEQUENCE_CHECK (97)
        // SubProg handle_common_options pc: 35 op: STARTLINE (58)

        /** cominit.e:440			object val = m:get(opts, key)*/
        // SubProg handle_common_options pc: 37 op: PROC (27)
        Ref(_opts_49530);
        RefDS(_key_49537);
        _0 = _val_49539;
        _val_49539 = _28get(_opts_49530, _key_49537, 0);
        DeRef(_0);
        // SubProg handle_common_options pc: 43 op: STARTLINE (58)

        /** cominit.e:442			switch key do*/
        // SubProg handle_common_options pc: 45 op: SWITCH (185)
        _1 = find(_key_49537, _25639);
        switch ( _1 ){ 
            // SubProg handle_common_options pc: 50 op: STARTLINE (58)

            /** cominit.e:443				case "i" then*/
            // SubProg handle_common_options pc: 52 op: CASE (186)
            case 1:
            // SubProg handle_common_options pc: 54 op: STARTLINE (58)

            /** cominit.e:444					for i = 1 to length(val) do*/
            // SubProg handle_common_options pc: 56 op: LENGTH (42)
            if (IS_SEQUENCE(_val_49539)){
                    _25641 = SEQ_PTR(_val_49539)->length;
            }
            else {
                _25641 = 1;
            }
            // SubProg handle_common_options pc: 59 op: FOR_I (125)
            {
                object _i_49545;
                _i_49545 = 1;
L3: // addr: 66 pc: 59 sub: 49528 op: 125
                if (_i_49545 > _25641){
                    goto L4; // [59] 82
                }
                // SubProg handle_common_options pc: 66 op: STARTLINE (58)

                /** cominit.e:445						add_include_directory(val[i])*/
                // SubProg handle_common_options pc: 68 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49539);
                _25642 = (object)*(((s1_ptr)_2)->base + _i_49545);
                // SubProg handle_common_options pc: 72 op: PROC (27)
                Ref(_25642);
                _46add_include_directory(_25642);
                _25642 = NOVALUE;
                // SubProg handle_common_options pc: 75 op: STARTLINE (58)

                /** cominit.e:446					end for*/
                // SubProg handle_common_options pc: 77 op: ENDFOR_INT_UP1 (54)
                _i_49545 = _i_49545 + 1;
                goto L3; // [77] 66
L4: // addr: 82 pc: 77 sub: 49528 op: 54
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
            if (IS_SEQUENCE(_34OpDefines_15261) && IS_ATOM(_val_49539)) {
                Ref(_val_49539);
                Append(&_34OpDefines_15261, _34OpDefines_15261, _val_49539);
            }
            else if (IS_ATOM(_34OpDefines_15261) && IS_SEQUENCE(_val_49539)) {
            }
            else {
                Concat((object_ptr)&_34OpDefines_15261, _34OpDefines_15261, _val_49539);
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
            _34batch_job_15201 = 1;
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
            _34test_only_15200 = 1;
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
            _34Strict_is_on_15253 = 1;
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
            if (IS_SEQUENCE(_val_49539)){
                    _25644 = SEQ_PTR(_val_49539)->length;
            }
            else {
                _25644 = 1;
            }
            // SubProg handle_common_options pc: 148 op: FOR_I (125)
            {
                object _i_49560;
                _i_49560 = 1;
L6: // addr: 155 pc: 148 sub: 49528 op: 125
                if (_i_49560 > _25644){
                    goto L7; // [148] 173
                }
                // SubProg handle_common_options pc: 155 op: STARTLINE (58)

                /** cominit.e:462						add_preprocessor(val[i])*/
                // SubProg handle_common_options pc: 157 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49539);
                _25645 = (object)*(((s1_ptr)_2)->base + _i_49560);
                // SubProg handle_common_options pc: 161 op: PROC (27)
                Ref(_25645);
                _63add_preprocessor(_25645, 0, 0);
                _25645 = NOVALUE;
                // SubProg handle_common_options pc: 166 op: STARTLINE (58)

                /** cominit.e:463					end for*/
                // SubProg handle_common_options pc: 168 op: ENDFOR_INT_UP1 (54)
                _i_49560 = _i_49560 + 1;
                goto L6; // [168] 155
L7: // addr: 173 pc: 168 sub: 49528 op: 54
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
            _35force_preprocessor_14174 = 1;
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
            if (IS_SEQUENCE(_val_49539)){
                    _25646 = SEQ_PTR(_val_49539)->length;
            }
            else {
                _25646 = 1;
            }
            // SubProg handle_common_options pc: 197 op: FOR_I (125)
            {
                object _i_49568;
                _i_49568 = 1;
L8: // addr: 204 pc: 197 sub: 49528 op: 125
                if (_i_49568 > _25646){
                    goto L9; // [197] 238
                }
                // SubProg handle_common_options pc: 204 op: STARTLINE (58)

                /** cominit.e:470						LocalizeQual = append(LocalizeQual, (filter(lower(val[i]), STDFLTR_ALPHA)))*/
                // SubProg handle_common_options pc: 206 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 208 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49539);
                _25647 = (object)*(((s1_ptr)_2)->base + _i_49568);
                // SubProg handle_common_options pc: 212 op: PROC (27)
                Ref(_25647);
                _25648 = _15lower(_25647);
                _25647 = NOVALUE;
                // SubProg handle_common_options pc: 216 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 218 op: PROC (27)
                RefDS(_21936);
                RefDS(_5);
                _25649 = _23filter(_25648, _23STDFLTR_ALPHA_6365, _21936, _5);
                _25648 = NOVALUE;
                // SubProg handle_common_options pc: 225 op: APPEND (35)
                Ref(_25649);
                Append(&_35LocalizeQual_14175, _35LocalizeQual_14175, _25649);
                DeRef(_25649);
                _25649 = NOVALUE;
                // SubProg handle_common_options pc: 229 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 231 op: STARTLINE (58)

                /** cominit.e:471					end for*/
                // SubProg handle_common_options pc: 233 op: ENDFOR_INT_UP1 (54)
                _i_49568 = _i_49568 + 1;
                goto L8; // [233] 204
L9: // addr: 238 pc: 233 sub: 49528 op: 54
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
            Ref(_val_49539);
            DeRef(_35LocalDB_14176);
            _35LocalDB_14176 = _val_49539;
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
            if (IS_SEQUENCE(_val_49539)){
                    _25651 = SEQ_PTR(_val_49539)->length;
            }
            else {
                _25651 = 1;
            }
            // SubProg handle_common_options pc: 262 op: FOR_I (125)
            {
                object _i_49583;
                _i_49583 = 1;
LA: // addr: 269 pc: 262 sub: 49528 op: 125
                if (_i_49583 > _25651){
                    goto LB; // [262] 392
                }
                // SubProg handle_common_options pc: 269 op: STARTLINE (58)

                /** cominit.e:478						sequence this_warn = val[i]*/
                // SubProg handle_common_options pc: 271 op: RHS_SUBS_CHECK (92)
                DeRef(_this_warn_49585);
                _2 = (object)SEQ_PTR(_val_49539);
                _this_warn_49585 = (object)*(((s1_ptr)_2)->base + _i_49583);
                Ref(_this_warn_49585);
                // SubProg handle_common_options pc: 275 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 277 op: STARTLINE (58)

                /** cominit.e:479						integer auto_add_warn = 0*/
                // SubProg handle_common_options pc: 279 op: ASSIGN_I (113)
                _auto_add_warn_49587 = 0;
                // SubProg handle_common_options pc: 282 op: STARTLINE (58)

                /** cominit.e:480						if this_warn[1] = '+' then*/
                // SubProg handle_common_options pc: 284 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_this_warn_49585);
                _25653 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg handle_common_options pc: 288 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _25653, 43)){
                    _25653 = NOVALUE;
                    goto LC; // [288] 308
                }
                _25653 = NOVALUE;
                // SubProg handle_common_options pc: 292 op: STARTLINE (58)

                /** cominit.e:481							auto_add_warn = 1*/
                // SubProg handle_common_options pc: 294 op: ASSIGN_I (113)
                _auto_add_warn_49587 = 1;
                // SubProg handle_common_options pc: 297 op: STARTLINE (58)

                /** cominit.e:482							this_warn = this_warn[2 .. $]*/
                // SubProg handle_common_options pc: 299 op: LENGTH (42)
                if (IS_SEQUENCE(_this_warn_49585)){
                        _25655 = SEQ_PTR(_this_warn_49585)->length;
                }
                else {
                    _25655 = 1;
                }
                // SubProg handle_common_options pc: 302 op: RHS_SLICE (46)
                rhs_slice_target = (object_ptr)&_this_warn_49585;
                RHS_Slice(_this_warn_49585, 2, _25655);
                // SubProg handle_common_options pc: 307 op: NOP1 (159)
LC: // addr: 308 pc: 307 sub: 49528 op: 159
                // SubProg handle_common_options pc: 308 op: STARTLINE (58)

                /** cominit.e:484						integer n = find(this_warn, warning_names)*/
                // SubProg handle_common_options pc: 310 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 312 op: FIND_FROM (176)
                _n_49593 = find_from(_this_warn_49585, _34warning_names_15232, 1);
                // SubProg handle_common_options pc: 317 op: STARTLINE (58)

                /** cominit.e:485						if n != 0 then*/
                // SubProg handle_common_options pc: 319 op: NOTEQ_IFW_I (122)
                if (_n_49593 == 0)
                goto LD; // [319] 383
                // SubProg handle_common_options pc: 323 op: STARTLINE (58)

                /** cominit.e:486							if auto_add_warn or option_w = 1 then*/
                // SubProg handle_common_options pc: 325 op: SC1_OR_IF (147)
                if (_auto_add_warn_49587 != 0) {
                    goto LE; // [325] 338
                }
                // SubProg handle_common_options pc: 329 op: EQUALS (3)
                _25660 = (_option_w_49533 == 1);
                // SubProg handle_common_options pc: 333 op: NOP1 (159)
                // SubProg handle_common_options pc: 334 op: IF (20)
                if (_25660 == 0)
                {
                    DeRef(_25660);
                    _25660 = NOVALUE;
                    goto LF; // [334] 357
                }
                else{
                    DeRef(_25660);
                    _25660 = NOVALUE;
                }
                // SubProg handle_common_options pc: 337 op: NOP1 (159)
LE: // addr: 338 pc: 337 sub: 49528 op: 159
                // SubProg handle_common_options pc: 338 op: STARTLINE (58)

                /** cominit.e:487								OpWarning = or_bits(OpWarning, warning_flags[n])*/
                // SubProg handle_common_options pc: 340 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 342 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 344 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_34warning_flags_15230);
                _25661 = (object)*(((s1_ptr)_2)->base + _n_49593);
                // SubProg handle_common_options pc: 348 op: OR_BITS (24)
                {uintptr_t tu;
                     tu = (uintptr_t)_34OpWarning_15255 | (uintptr_t)_25661;
                     _34OpWarning_15255 = MAKE_UINT(tu);
                }
                _25661 = NOVALUE;
                // SubProg handle_common_options pc: 352 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_34OpWarning_15255)) {
                    _1 = (object)(DBL_PTR(_34OpWarning_15255)->dbl);
                    DeRefDS(_34OpWarning_15255);
                    _34OpWarning_15255 = _1;
                }
                // SubProg handle_common_options pc: 354 op: ELSE (23)
                goto L10; // [354] 373
                // SubProg handle_common_options pc: 356 op: NOP1 (159)
LF: // addr: 357 pc: 356 sub: 49528 op: 159
                // SubProg handle_common_options pc: 357 op: STARTLINE (58)

                /** cominit.e:489								option_w = 1*/
                // SubProg handle_common_options pc: 359 op: ASSIGN_I (113)
                _option_w_49533 = 1;
                // SubProg handle_common_options pc: 362 op: STARTLINE (58)

                /** cominit.e:490								OpWarning = warning_flags[n]*/
                // SubProg handle_common_options pc: 364 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 366 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_34warning_flags_15230);
                _34OpWarning_15255 = (object)*(((s1_ptr)_2)->base + _n_49593);
                // SubProg handle_common_options pc: 372 op: NOP1 (159)
L10: // addr: 373 pc: 372 sub: 49528 op: 159
                // SubProg handle_common_options pc: 373 op: STARTLINE (58)

                /** cominit.e:493							prev_OpWarning = OpWarning*/
                // SubProg handle_common_options pc: 375 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 377 op: ASSIGN (18)
                _34prev_OpWarning_15256 = _34OpWarning_15255;
                // SubProg handle_common_options pc: 380 op: INTEGER_CHECK (96)
                // SubProg handle_common_options pc: 382 op: NOP1 (159)
LD: // addr: 383 pc: 382 sub: 49528 op: 159
                // SubProg handle_common_options pc: 383 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var this_warn_49585
                DeRef(_this_warn_49585);
                _this_warn_49585 = NOVALUE;

// block var auto_add_warn_49587

// block var n_49593
                // SubProg handle_common_options pc: 385 op: STARTLINE (58)

                /** cominit.e:495					end for*/
                // SubProg handle_common_options pc: 387 op: ENDFOR_INT_UP1 (54)
                _i_49583 = _i_49583 + 1;
                goto LA; // [387] 269
LB: // addr: 392 pc: 387 sub: 49528 op: 54
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
            if (IS_SEQUENCE(_val_49539)){
                    _25664 = SEQ_PTR(_val_49539)->length;
            }
            else {
                _25664 = 1;
            }
            // SubProg handle_common_options pc: 403 op: FOR_I (125)
            {
                object _i_49614;
                _i_49614 = 1;
L11: // addr: 410 pc: 403 sub: 49528 op: 125
                if (_i_49614 > _25664){
                    goto L12; // [403] 542
                }
                // SubProg handle_common_options pc: 410 op: STARTLINE (58)

                /** cominit.e:499						sequence this_warn = val[i]*/
                // SubProg handle_common_options pc: 412 op: RHS_SUBS_CHECK (92)
                DeRef(_this_warn_49616);
                _2 = (object)SEQ_PTR(_val_49539);
                _this_warn_49616 = (object)*(((s1_ptr)_2)->base + _i_49614);
                Ref(_this_warn_49616);
                // SubProg handle_common_options pc: 416 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 418 op: STARTLINE (58)

                /** cominit.e:500						integer auto_add_warn = 0*/
                // SubProg handle_common_options pc: 420 op: ASSIGN_I (113)
                _auto_add_warn_49618 = 0;
                // SubProg handle_common_options pc: 423 op: STARTLINE (58)

                /** cominit.e:501						if this_warn[1] = '+' then*/
                // SubProg handle_common_options pc: 425 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_this_warn_49616);
                _25666 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg handle_common_options pc: 429 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _25666, 43)){
                    _25666 = NOVALUE;
                    goto L13; // [429] 449
                }
                _25666 = NOVALUE;
                // SubProg handle_common_options pc: 433 op: STARTLINE (58)

                /** cominit.e:502							auto_add_warn = 1*/
                // SubProg handle_common_options pc: 435 op: ASSIGN_I (113)
                _auto_add_warn_49618 = 1;
                // SubProg handle_common_options pc: 438 op: STARTLINE (58)

                /** cominit.e:503							this_warn = this_warn[2 .. $]*/
                // SubProg handle_common_options pc: 440 op: LENGTH (42)
                if (IS_SEQUENCE(_this_warn_49616)){
                        _25668 = SEQ_PTR(_this_warn_49616)->length;
                }
                else {
                    _25668 = 1;
                }
                // SubProg handle_common_options pc: 443 op: RHS_SLICE (46)
                rhs_slice_target = (object_ptr)&_this_warn_49616;
                RHS_Slice(_this_warn_49616, 2, _25668);
                // SubProg handle_common_options pc: 448 op: NOP1 (159)
L13: // addr: 449 pc: 448 sub: 49528 op: 159
                // SubProg handle_common_options pc: 449 op: STARTLINE (58)

                /** cominit.e:505						integer n = find(this_warn, warning_names)*/
                // SubProg handle_common_options pc: 451 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 453 op: FIND_FROM (176)
                _n_49624 = find_from(_this_warn_49616, _34warning_names_15232, 1);
                // SubProg handle_common_options pc: 458 op: STARTLINE (58)

                /** cominit.e:506						if n != 0 then*/
                // SubProg handle_common_options pc: 460 op: NOTEQ_IFW_I (122)
                if (_n_49624 == 0)
                goto L14; // [460] 533
                // SubProg handle_common_options pc: 464 op: STARTLINE (58)

                /** cominit.e:507							if auto_add_warn or option_w = -1 then*/
                // SubProg handle_common_options pc: 466 op: SC1_OR_IF (147)
                if (_auto_add_warn_49618 != 0) {
                    goto L15; // [466] 479
                }
                // SubProg handle_common_options pc: 470 op: EQUALS (3)
                _25673 = (_option_w_49533 == -1);
                // SubProg handle_common_options pc: 474 op: NOP1 (159)
                // SubProg handle_common_options pc: 475 op: IF (20)
                if (_25673 == 0)
                {
                    DeRef(_25673);
                    _25673 = NOVALUE;
                    goto L16; // [475] 501
                }
                else{
                    DeRef(_25673);
                    _25673 = NOVALUE;
                }
                // SubProg handle_common_options pc: 478 op: NOP1 (159)
L15: // addr: 479 pc: 478 sub: 49528 op: 159
                // SubProg handle_common_options pc: 479 op: STARTLINE (58)

                /** cominit.e:508								OpWarning = and_bits(OpWarning, not_bits(warning_flags[n]))*/
                // SubProg handle_common_options pc: 481 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 483 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 485 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_34warning_flags_15230);
                _25674 = (object)*(((s1_ptr)_2)->base + _n_49624);
                // SubProg handle_common_options pc: 489 op: NOT_BITS (51)
                _25675 = not_bits(_25674);
                _25674 = NOVALUE;
                // SubProg handle_common_options pc: 492 op: AND_BITS (56)
                if (IS_ATOM_INT(_25675)) {
                    {uintptr_t tu;
                         tu = (uintptr_t)_34OpWarning_15255 & (uintptr_t)_25675;
                         _34OpWarning_15255 = MAKE_UINT(tu);
                    }
                }
                else {
                    temp_d.dbl = (eudouble)_34OpWarning_15255;
                    _34OpWarning_15255 = Dand_bits(&temp_d, DBL_PTR(_25675));
                }
                DeRef(_25675);
                _25675 = NOVALUE;
                // SubProg handle_common_options pc: 496 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_34OpWarning_15255)) {
                    _1 = (object)(DBL_PTR(_34OpWarning_15255)->dbl);
                    DeRefDS(_34OpWarning_15255);
                    _34OpWarning_15255 = _1;
                }
                // SubProg handle_common_options pc: 498 op: ELSE (23)
                goto L17; // [498] 523
                // SubProg handle_common_options pc: 500 op: NOP1 (159)
L16: // addr: 501 pc: 500 sub: 49528 op: 159
                // SubProg handle_common_options pc: 501 op: STARTLINE (58)

                /** cominit.e:510								option_w = -1*/
                // SubProg handle_common_options pc: 503 op: ASSIGN_I (113)
                _option_w_49533 = -1;
                // SubProg handle_common_options pc: 506 op: STARTLINE (58)

                /** cominit.e:511								OpWarning = all_warning_flag - warning_flags[n]*/
                // SubProg handle_common_options pc: 508 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 510 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 512 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_34warning_flags_15230);
                _25677 = (object)*(((s1_ptr)_2)->base + _n_49624);
                // SubProg handle_common_options pc: 516 op: MINUS (10)
                _34OpWarning_15255 = 32767 - _25677;
                _25677 = NOVALUE;
                // SubProg handle_common_options pc: 522 op: NOP1 (159)
L17: // addr: 523 pc: 522 sub: 49528 op: 159
                // SubProg handle_common_options pc: 523 op: STARTLINE (58)

                /** cominit.e:514							prev_OpWarning = OpWarning*/
                // SubProg handle_common_options pc: 525 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 527 op: ASSIGN (18)
                _34prev_OpWarning_15256 = _34OpWarning_15255;
                // SubProg handle_common_options pc: 530 op: INTEGER_CHECK (96)
                // SubProg handle_common_options pc: 532 op: NOP1 (159)
L14: // addr: 533 pc: 532 sub: 49528 op: 159
                // SubProg handle_common_options pc: 533 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var this_warn_49616
                DeRef(_this_warn_49616);
                _this_warn_49616 = NOVALUE;

// block var auto_add_warn_49618

// block var n_49624
                // SubProg handle_common_options pc: 535 op: STARTLINE (58)

                /** cominit.e:516					end for*/
                // SubProg handle_common_options pc: 537 op: ENDFOR_INT_UP1 (54)
                _i_49614 = _i_49614 + 1;
                goto L11; // [537] 410
L12: // addr: 542 pc: 537 sub: 49528 op: 54
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
            Ref(_val_49539);
            DeRef(_34TempWarningName_15202);
            _34TempWarningName_15202 = _val_49539;
            // SubProg handle_common_options pc: 553 op: STARTLINE (58)

            /** cominit.e:520				  	error:warning_file(TempWarningName)*/
            // SubProg handle_common_options pc: 555 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 557 op: PROC (27)
            Ref(_34TempWarningName_15202);
            _7warning_file(_34TempWarningName_15202);
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
            _25679 = (_34batch_job_15201 == 0);
            // SubProg handle_common_options pc: 579 op: SC1_AND_IF (146)
            if (_25679 == 0) {
                goto L18; // [579] 632
            }
            // SubProg handle_common_options pc: 583 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 585 op: NOT (7)
            _25681 = (_34test_only_15200 == 0);
            // SubProg handle_common_options pc: 588 op: NOP1 (159)
            // SubProg handle_common_options pc: 589 op: IF (20)
            if (_25681 == 0)
            {
                DeRef(_25681);
                _25681 = NOVALUE;
                goto L18; // [589] 632
            }
            else{
                DeRef(_25681);
                _25681 = NOVALUE;
            }
            // SubProg handle_common_options pc: 592 op: STARTLINE (58)

            /** cominit.e:525						console:maybe_any_key(GetMsgText(278,0), 2)*/
            // SubProg handle_common_options pc: 594 op: PROC (27)
            RefDS(_21936);
            _25682 = _40GetMsgText(278, 0, _21936);
            // SubProg handle_common_options pc: 600 op: ASSIGN (18)
            DeRef(_prompt_inlined_maybe_any_key_at_615_49659);
            _prompt_inlined_maybe_any_key_at_615_49659 = _25682;
            _25682 = NOVALUE;
            // SubProg handle_common_options pc: 603 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 605 op: STARTLINE (58)

            /** console.e:923		if not has_console() then*/
            // SubProg handle_common_options pc: 607 op: STARTLINE (58)

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            // SubProg handle_common_options pc: 609 op: MACHINE_FUNC (111)
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660 = machine(99, 0);
            // SubProg handle_common_options pc: 613 op: NOP1 (159)
            // SubProg handle_common_options pc: 614 op: NOT_IFW (108)
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660 != 0){
                    goto L19; // [614] 629
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660)->dbl != 0.0){
                    goto L19; // [614] 629
                }
            }
            // SubProg handle_common_options pc: 617 op: STARTLINE (58)

            /** console.e:924			any_key(prompt, con)*/
            // SubProg handle_common_options pc: 619 op: PROC (27)
            Ref(_prompt_inlined_maybe_any_key_at_615_49659);
            _27any_key(_prompt_inlined_maybe_any_key_at_615_49659, 2);
            // SubProg handle_common_options pc: 623 op: NOP1 (159)
            // SubProg handle_common_options pc: 624 op: STARTLINE (58)

            /** console.e:926	end procedure*/
            // SubProg handle_common_options pc: 626 op: ELSE (23)
            goto L19; // [626] 629
            // SubProg handle_common_options pc: 628 op: NOP1 (159)
L19: // addr: 629 pc: 628 sub: 49528 op: 159
            // SubProg handle_common_options pc: 629 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from handle_common_options @ 615

// block var prompt_inlined_maybe_any_key_at_615_49659
            DeRef(_prompt_inlined_maybe_any_key_at_615_49659);
            _prompt_inlined_maybe_any_key_at_615_49659 = NOVALUE;

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49660 = NOVALUE;
            // SubProg handle_common_options pc: 631 op: NOP1 (159)
L18: // addr: 632 pc: 631 sub: 49528 op: 159
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
            _25683 = (_34batch_job_15201 == 0);
            // SubProg handle_common_options pc: 653 op: SC1_AND_IF (146)
            if (_25683 == 0) {
                goto L1A; // [653] 706
            }
            // SubProg handle_common_options pc: 657 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 659 op: NOT (7)
            _25685 = (_34test_only_15200 == 0);
            // SubProg handle_common_options pc: 662 op: NOP1 (159)
            // SubProg handle_common_options pc: 663 op: IF (20)
            if (_25685 == 0)
            {
                DeRef(_25685);
                _25685 = NOVALUE;
                goto L1A; // [663] 706
            }
            else{
                DeRef(_25685);
                _25685 = NOVALUE;
            }
            // SubProg handle_common_options pc: 666 op: STARTLINE (58)

            /** cominit.e:533						console:maybe_any_key(GetMsgText(278,0), 2)*/
            // SubProg handle_common_options pc: 668 op: PROC (27)
            RefDS(_21936);
            _25686 = _40GetMsgText(278, 0, _21936);
            // SubProg handle_common_options pc: 674 op: ASSIGN (18)
            DeRef(_prompt_inlined_maybe_any_key_at_689_49671);
            _prompt_inlined_maybe_any_key_at_689_49671 = _25686;
            _25686 = NOVALUE;
            // SubProg handle_common_options pc: 677 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 679 op: STARTLINE (58)

            /** console.e:923		if not has_console() then*/
            // SubProg handle_common_options pc: 681 op: STARTLINE (58)

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            // SubProg handle_common_options pc: 683 op: MACHINE_FUNC (111)
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672 = machine(99, 0);
            // SubProg handle_common_options pc: 687 op: NOP1 (159)
            // SubProg handle_common_options pc: 688 op: NOT_IFW (108)
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672 != 0){
                    goto L1B; // [688] 703
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672)->dbl != 0.0){
                    goto L1B; // [688] 703
                }
            }
            // SubProg handle_common_options pc: 691 op: STARTLINE (58)

            /** console.e:924			any_key(prompt, con)*/
            // SubProg handle_common_options pc: 693 op: PROC (27)
            Ref(_prompt_inlined_maybe_any_key_at_689_49671);
            _27any_key(_prompt_inlined_maybe_any_key_at_689_49671, 2);
            // SubProg handle_common_options pc: 697 op: NOP1 (159)
            // SubProg handle_common_options pc: 698 op: STARTLINE (58)

            /** console.e:926	end procedure*/
            // SubProg handle_common_options pc: 700 op: ELSE (23)
            goto L1B; // [700] 703
            // SubProg handle_common_options pc: 702 op: NOP1 (159)
L1B: // addr: 703 pc: 702 sub: 49528 op: 159
            // SubProg handle_common_options pc: 703 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from handle_common_options @ 689

// block var prompt_inlined_maybe_any_key_at_689_49671
            DeRef(_prompt_inlined_maybe_any_key_at_689_49671);
            _prompt_inlined_maybe_any_key_at_689_49671 = NOVALUE;

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49672 = NOVALUE;
            // SubProg handle_common_options pc: 705 op: NOP1 (159)
L1A: // addr: 706 pc: 705 sub: 49528 op: 159
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
            Ref(_val_49539);
            _35set_eudir(_val_49539);
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
            Ref(_val_49539);
            _0 = _val_49539;
            _val_49539 = _20value(_val_49539, 1, _20GET_SHORT_ANSWER_4252);
            DeRef(_0);
            // SubProg handle_common_options pc: 737 op: STARTLINE (58)

            /** cominit.e:542					if val[1] = GET_SUCCESS then*/
            // SubProg handle_common_options pc: 739 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_val_49539);
            _25688 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg handle_common_options pc: 743 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 745 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _25688, 0)){
                _25688 = NOVALUE;
                goto L1C; // [745] 763
            }
            _25688 = NOVALUE;
            // SubProg handle_common_options pc: 749 op: STARTLINE (58)

            /** cominit.e:543						trace_lines = floor( val[2] )*/
            // SubProg handle_common_options pc: 751 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_val_49539);
            _25690 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg handle_common_options pc: 755 op: FLOOR (83)
            if (IS_ATOM_INT(_25690))
            _34trace_lines_63875 = e_floor(_25690);
            else
            _34trace_lines_63875 = unary_op(FLOOR, _25690);
            _25690 = NOVALUE;
            // SubProg handle_common_options pc: 758 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_34trace_lines_63875)) {
                _1 = (object)(DBL_PTR(_34trace_lines_63875)->dbl);
                DeRefDS(_34trace_lines_63875);
                _34trace_lines_63875 = _1;
            }
            // SubProg handle_common_options pc: 760 op: ELSE (23)
            goto L1D; // [760] 781
            // SubProg handle_common_options pc: 762 op: NOP1 (159)
L1C: // addr: 763 pc: 762 sub: 49528 op: 159
            // SubProg handle_common_options pc: 763 op: STARTLINE (58)

            /** cominit.e:545						puts(2, GetMsgText( BAD_TRACE_LINES ) )*/
            // SubProg handle_common_options pc: 765 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 767 op: PROC (27)
            RefDS(_21936);
            _25692 = _40GetMsgText(604, 1, _21936);
            // SubProg handle_common_options pc: 773 op: PUTS (44)
            EPuts(2, _25692); // DJP 
            DeRef(_25692);
            _25692 = NOVALUE;
            // SubProg handle_common_options pc: 776 op: STARTLINE (58)

            /** cominit.e:546						abort( 1 )*/
            // SubProg handle_common_options pc: 778 op: ABORT (126)
            UserCleanup(1);
            // SubProg handle_common_options pc: 780 op: NOP1 (159)
L1D: // addr: 781 pc: 780 sub: 49528 op: 159
            // SubProg handle_common_options pc: 781 op: NOPSWITCH (187)
        ;}L5: // addr: 782 pc: 781 sub: 49528 op: 187
        // SubProg handle_common_options pc: 782 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var key_49537
        DeRef(_key_49537);
        _key_49537 = NOVALUE;

// block var val_49539
        DeRef(_val_49539);
        _val_49539 = NOVALUE;
        // SubProg handle_common_options pc: 784 op: STARTLINE (58)

        /** cominit.e:549		end for*/
        // SubProg handle_common_options pc: 786 op: ENDFOR_INT_UP1 (54)
        _idx_49535 = _idx_49535 + 1;
        goto L1; // [786] 27
L2: // addr: 791 pc: 786 sub: 49528 op: 54
        ;
    }
    // SubProg handle_common_options pc: 791 op: STARTLINE (58)

    /** cominit.e:551		if length(LocalizeQual) = 0 then*/
    // SubProg handle_common_options pc: 793 op: GLOBAL_INIT_CHECK (109)
    // SubProg handle_common_options pc: 795 op: LENGTH (42)
    if (IS_SEQUENCE(_35LocalizeQual_14175)){
            _25693 = SEQ_PTR(_35LocalizeQual_14175)->length;
    }
    else {
        _25693 = 1;
    }
    // SubProg handle_common_options pc: 798 op: EQUALS_IFW_I (121)
    if (_25693 != 0)
    goto L1E; // [798] 811
    // SubProg handle_common_options pc: 802 op: STARTLINE (58)

    /** cominit.e:552			LocalizeQual = {"en"}*/
    // SubProg handle_common_options pc: 804 op: RIGHT_BRACE_N (31)
    _0 = _35LocalizeQual_14175;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_25695);
    ((intptr_t*)_2)[1] = _25695;
    _35LocalizeQual_14175 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg handle_common_options pc: 808 op: SEQUENCE_CHECK (97)
    // SubProg handle_common_options pc: 810 op: NOP1 (159)
L1E: // addr: 811 pc: 810 sub: 49528 op: 159
    // SubProg handle_common_options pc: 811 op: STARTLINE (58)

    /** cominit.e:554	end procedure*/
    // SubProg handle_common_options pc: 813 op: RETURNP (29)

// Exiting block BLOCK: handle_common_options

// block var opts_49530
    DeRef(_opts_49530);

// block var opt_keys_49531
    DeRef(_opt_keys_49531);

// block var option_w_49533
    DeRef(_25679);
    _25679 = NOVALUE;
    DeRef(_25683);
    _25683 = NOVALUE;
    return;
    // SubProg handle_common_options pc: 816 op: BADRETURNF (43)
    ;
}


void _47finalize_command_line(object _opts_49698)
{
    object _extras_49705 = NOVALUE;
    object _pairs_49710 = NOVALUE;
    object _pair_49715 = NOVALUE;
// skipping _25728  name type: 0
// skipping _25727  name type: 0
// skipping _25726  name type: 0
    object _25725 = NOVALUE; // 49748 25725
// skipping _25724  name type: 0
    object _25723 = NOVALUE; // 49744 25723
// skipping _25722  name type: 0
// skipping _25721  name type: 0
    object _25720 = NOVALUE; // 49739 25720
    object _25719 = NOVALUE; // 49738 25719
    object _25718 = NOVALUE; // 49737 25718
    object _25717 = NOVALUE; // 49736 25717
    object _25716 = NOVALUE; // 49735 25716
    object _25715 = NOVALUE; // 49734 25715
    object _25714 = NOVALUE; // 49731 25714
    object _25713 = NOVALUE; // 49730 25713
    object _25712 = NOVALUE; // 49729 25712
    object _25711 = NOVALUE; // 49728 25711
    object _25710 = NOVALUE; // 49727 25710
    object _25709 = NOVALUE; // 49726 25709
    object _25708 = NOVALUE; // 49724 25708
    object _25707 = NOVALUE; // 49723 25707
    object _25706 = NOVALUE; // 49721 25706
    object _25705 = NOVALUE; // 49720 25705
    object _25704 = NOVALUE; // 49719 25704
    object _25703 = NOVALUE; // 49718 25703
// skipping _25702  name type: 0
    object _25701 = NOVALUE; // 49714 25701
// skipping _25700  name type: 0
// skipping _25699  name type: 0
    object _25698 = NOVALUE; // 49708 25698
// skipping _25697  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg finalize_command_line pc: 1 op: STARTLINE (58)

    /** cominit.e:562		if Strict_is_on then -- overrides any -W/-X switches*/
    // SubProg finalize_command_line pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 5 op: IF (20)
    if (_34Strict_is_on_15253 == 0)
    {
        goto L1; // [5] 27
    }
    else{
    }
    // SubProg finalize_command_line pc: 8 op: STARTLINE (58)

    /** cominit.e:563			OpWarning = all_warning_flag*/
    // SubProg finalize_command_line pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 12 op: ASSIGN (18)
    _34OpWarning_15255 = 32767;
    // SubProg finalize_command_line pc: 15 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 17 op: STARTLINE (58)

    /** cominit.e:564			prev_OpWarning = OpWarning*/
    // SubProg finalize_command_line pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 21 op: ASSIGN (18)
    _34prev_OpWarning_15256 = 32767;
    // SubProg finalize_command_line pc: 24 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 49696 op: 159
    // SubProg finalize_command_line pc: 27 op: STARTLINE (58)

    /** cominit.e:569		sequence extras = m:get(opts, cmdline:EXTRAS)*/
    // SubProg finalize_command_line pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 31 op: PROC (27)
    Ref(_opts_49698);
    RefDS(_48EXTRAS_20229);
    _0 = _extras_49705;
    _extras_49705 = _28get(_opts_49698, _48EXTRAS_20229, 0);
    DeRef(_0);
    // SubProg finalize_command_line pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 39 op: STARTLINE (58)

    /** cominit.e:570		if length(extras) > 0 then*/
    // SubProg finalize_command_line pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_extras_49705)){
            _25698 = SEQ_PTR(_extras_49705)->length;
    }
    else {
        _25698 = 1;
    }
    // SubProg finalize_command_line pc: 44 op: GREATER_IFW_I (124)
    if (_25698 <= 0)
    goto L2; // [44] 270
    // SubProg finalize_command_line pc: 48 op: STARTLINE (58)

    /** cominit.e:571			sequence pairs = m:pairs( opts )*/
    // SubProg finalize_command_line pc: 50 op: PROC (27)
    Ref(_opts_49698);
    _0 = _pairs_49710;
    _pairs_49710 = _28pairs(_opts_49698, 0);
    DeRef(_0);
    // SubProg finalize_command_line pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 57 op: STARTLINE (58)

    /** cominit.e:573			for i = 1 to length( pairs ) do*/
    // SubProg finalize_command_line pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_pairs_49710)){
            _25701 = SEQ_PTR(_pairs_49710)->length;
    }
    else {
        _25701 = 1;
    }
    // SubProg finalize_command_line pc: 62 op: FOR_I (125)
    {
        object _i_49713;
        _i_49713 = 1;
L3: // addr: 69 pc: 62 sub: 49696 op: 125
        if (_i_49713 > _25701){
            goto L4; // [62] 237
        }
        // SubProg finalize_command_line pc: 69 op: STARTLINE (58)

        /** cominit.e:574				sequence pair = pairs[i]*/
        // SubProg finalize_command_line pc: 71 op: RHS_SUBS (25)
        DeRef(_pair_49715);
        _2 = (object)SEQ_PTR(_pairs_49710);
        _pair_49715 = (object)*(((s1_ptr)_2)->base + _i_49713);
        Ref(_pair_49715);
        // SubProg finalize_command_line pc: 75 op: SEQUENCE_CHECK (97)
        // SubProg finalize_command_line pc: 77 op: STARTLINE (58)

        /** cominit.e:575				if equal( pair[1], cmdline:EXTRAS ) then*/
        // SubProg finalize_command_line pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49715);
        _25703 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 85 op: EQUAL (153)
        if (_25703 == _48EXTRAS_20229)
        _25704 = 1;
        else if (IS_ATOM_INT(_25703) && IS_ATOM_INT(_48EXTRAS_20229))
        _25704 = 0;
        else
        _25704 = (compare(_25703, _48EXTRAS_20229) == 0);
        _25703 = NOVALUE;
        // SubProg finalize_command_line pc: 89 op: IF (20)
        if (_25704 == 0)
        {
            _25704 = NOVALUE;
            goto L5; // [89] 99
        }
        else{
            _25704 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 92 op: STARTLINE (58)

        /** cominit.e:576					continue*/
        // SubProg finalize_command_line pc: 94 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var pair_49715
        DeRefDS(_pair_49715);
        _pair_49715 = NOVALUE;
        // SubProg finalize_command_line pc: 96 op: ELSE (23)
        goto L6; // [96] 232
        // SubProg finalize_command_line pc: 98 op: NOP1 (159)
L5: // addr: 99 pc: 98 sub: 49696 op: 159
        // SubProg finalize_command_line pc: 99 op: STARTLINE (58)

        /** cominit.e:578				pair[1] = prepend( pair[1], '-' )*/
        // SubProg finalize_command_line pc: 101 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49715);
        _25705 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 105 op: PREPEND (57)
        Prepend(&_25706, _25705, 45);
        _25705 = NOVALUE;
        // SubProg finalize_command_line pc: 109 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_pair_49715);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pair_49715 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25706;
        if( _1 != _25706 ){
            DeRef(_1);
        }
        _25706 = NOVALUE;
        // SubProg finalize_command_line pc: 113 op: STARTLINE (58)

        /** cominit.e:579				if sequence( pair[2] ) then*/
        // SubProg finalize_command_line pc: 115 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49715);
        _25707 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 119 op: IS_A_SEQUENCE (68)
        _25708 = IS_SEQUENCE(_25707);
        _25707 = NOVALUE;
        // SubProg finalize_command_line pc: 122 op: IF (20)
        if (_25708 == 0)
        {
            _25708 = NOVALUE;
            goto L7; // [122] 215
        }
        else{
            _25708 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 125 op: STARTLINE (58)

        /** cominit.e:580					if length( pair[2] ) and sequence( pair[2][1] ) then*/
        // SubProg finalize_command_line pc: 127 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49715);
        _25709 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 131 op: LENGTH (42)
        if (IS_SEQUENCE(_25709)){
                _25710 = SEQ_PTR(_25709)->length;
        }
        else {
            _25710 = 1;
        }
        _25709 = NOVALUE;
        // SubProg finalize_command_line pc: 134 op: SC1_AND_IF (146)
        if (_25710 == 0) {
            goto L8; // [134] 203
        }
        // SubProg finalize_command_line pc: 138 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49715);
        _25712 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 142 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25712);
        _25713 = (object)*(((s1_ptr)_2)->base + 1);
        _25712 = NOVALUE;
        // SubProg finalize_command_line pc: 146 op: IS_A_SEQUENCE (68)
        _25714 = IS_SEQUENCE(_25713);
        _25713 = NOVALUE;
        // SubProg finalize_command_line pc: 149 op: NOP1 (159)
        // SubProg finalize_command_line pc: 150 op: IF (20)
        if (_25714 == 0)
        {
            _25714 = NOVALUE;
            goto L8; // [150] 203
        }
        else{
            _25714 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 153 op: STARTLINE (58)

        /** cominit.e:581						for j = 1 to length( pair[2] ) do*/
        // SubProg finalize_command_line pc: 155 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49715);
        _25715 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 159 op: LENGTH (42)
        if (IS_SEQUENCE(_25715)){
                _25716 = SEQ_PTR(_25715)->length;
        }
        else {
            _25716 = 1;
        }
        _25715 = NOVALUE;
        // SubProg finalize_command_line pc: 162 op: FOR_I (125)
        {
            object _j_49733;
            _j_49733 = 1;
L9: // addr: 169 pc: 162 sub: 49696 op: 125
            if (_j_49733 > _25716){
                goto LA; // [162] 200
            }
            // SubProg finalize_command_line pc: 169 op: STARTLINE (58)

            /** cominit.e:582							switches &= { pair[1], pair[2][j] }*/
            // SubProg finalize_command_line pc: 171 op: GLOBAL_INIT_CHECK (109)
            // SubProg finalize_command_line pc: 173 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pair_49715);
            _25717 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg finalize_command_line pc: 177 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pair_49715);
            _25718 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg finalize_command_line pc: 181 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_25718);
            _25719 = (object)*(((s1_ptr)_2)->base + _j_49733);
            _25718 = NOVALUE;
            // SubProg finalize_command_line pc: 185 op: RIGHT_BRACE_2 (85)
            Ref(_25719);
            Ref(_25717);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _25717;
            ((intptr_t *)_2)[2] = _25719;
            _25720 = MAKE_SEQ(_1);
            _25719 = NOVALUE;
            _25717 = NOVALUE;
            // SubProg finalize_command_line pc: 189 op: CONCAT (15)
            Concat((object_ptr)&_47switches_49054, _47switches_49054, _25720);
            DeRefDS(_25720);
            _25720 = NOVALUE;
            // SubProg finalize_command_line pc: 193 op: STARTLINE (58)

            /** cominit.e:583						end for*/
            // SubProg finalize_command_line pc: 195 op: ENDFOR_INT_UP1 (54)
            _j_49733 = _j_49733 + 1;
            goto L9; // [195] 169
LA: // addr: 200 pc: 195 sub: 49696 op: 54
            ;
        }
        // SubProg finalize_command_line pc: 200 op: ELSE (23)
        goto LB; // [200] 228
        // SubProg finalize_command_line pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 49696 op: 159
        // SubProg finalize_command_line pc: 203 op: STARTLINE (58)

        /** cominit.e:585						switches &= pair*/
        // SubProg finalize_command_line pc: 205 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 207 op: CONCAT (15)
        Concat((object_ptr)&_47switches_49054, _47switches_49054, _pair_49715);
        // SubProg finalize_command_line pc: 211 op: NOP1 (159)
        // SubProg finalize_command_line pc: 212 op: ELSE (23)
        goto LB; // [212] 228
        // SubProg finalize_command_line pc: 214 op: NOP1 (159)
L7: // addr: 215 pc: 214 sub: 49696 op: 159
        // SubProg finalize_command_line pc: 215 op: STARTLINE (58)

        /** cominit.e:588					switches = append( switches, pair[1] )*/
        // SubProg finalize_command_line pc: 217 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 219 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49715);
        _25723 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 223 op: APPEND (35)
        Ref(_25723);
        Append(&_47switches_49054, _47switches_49054, _25723);
        _25723 = NOVALUE;
        // SubProg finalize_command_line pc: 227 op: NOP1 (159)
LB: // addr: 228 pc: 227 sub: 49696 op: 159
        // SubProg finalize_command_line pc: 228 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var pair_49715
        DeRef(_pair_49715);
        _pair_49715 = NOVALUE;
        // SubProg finalize_command_line pc: 230 op: STARTLINE (58)

        /** cominit.e:590			end for*/
        // SubProg finalize_command_line pc: 232 op: ENDFOR_INT_UP1 (54)
L6: // addr: 232 pc: 232 sub: 49696 op: 54
        _i_49713 = _i_49713 + 1;
        goto L3; // [232] 69
L4: // addr: 237 pc: 232 sub: 49696 op: 54
        ;
    }
    // SubProg finalize_command_line pc: 237 op: STARTLINE (58)

    /** cominit.e:592			Argv = Argv[2..3] & extras*/
    // SubProg finalize_command_line pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 241 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25725;
    RHS_Slice(_34Argv_15199, 2, 3);
    // SubProg finalize_command_line pc: 246 op: CONCAT (15)
    Concat((object_ptr)&_34Argv_15199, _25725, _extras_49705);
    DeRefDS(_25725);
    _25725 = NOVALUE;
    DeRef(_25725);
    _25725 = NOVALUE;
    // SubProg finalize_command_line pc: 250 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 252 op: STARTLINE (58)

    /** cominit.e:593			Argc = length(Argv)*/
    // SubProg finalize_command_line pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 256 op: LENGTH (42)
    if (IS_SEQUENCE(_34Argv_15199)){
            _34Argc_15198 = SEQ_PTR(_34Argv_15199)->length;
    }
    else {
        _34Argc_15198 = 1;
    }
    // SubProg finalize_command_line pc: 259 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 261 op: STARTLINE (58)

    /** cominit.e:595			src_name = extras[1]*/
    // SubProg finalize_command_line pc: 263 op: RHS_SUBS (25)
    DeRef(_47src_name_49053);
    _2 = (object)SEQ_PTR(_extras_49705);
    _47src_name_49053 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_47src_name_49053);
    // SubProg finalize_command_line pc: 267 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 269 op: NOP1 (159)
L2: // addr: 270 pc: 269 sub: 49696 op: 159
    // SubProg finalize_command_line pc: 270 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pairs_49710
    DeRef(_pairs_49710);
    _pairs_49710 = NOVALUE;
    // SubProg finalize_command_line pc: 272 op: STARTLINE (58)

    /** cominit.e:597	end procedure*/
    // SubProg finalize_command_line pc: 274 op: RETURNP (29)

// Exiting block BLOCK: finalize_command_line

// block var opts_49698
    DeRef(_opts_49698);

// block var extras_49705
    DeRef(_extras_49705);
    _25709 = NOVALUE;
    _25715 = NOVALUE;
    return;
    // SubProg finalize_command_line pc: 277 op: BADRETURNF (43)
    ;
}



// 0x598B84D1
