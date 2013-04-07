// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _49add_options(object _new_options_49167)
{
// skipping _25425  name type: 0
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
            Concat(&_49options_49163,_new_options_49167,_49options_49163);
        }
        else if (insert_pos > SEQ_PTR(_49options_49163)->length){
            Concat(&_49options_49163,_49options_49163,_new_options_49167);
        }
        else if (IS_SEQUENCE(_new_options_49167)) {
            if( _49options_49163 != _49options_49163 || SEQ_PTR( _49options_49163 )->ref != 1 ){
                DeRef( _49options_49163 );
                RefDS( _49options_49163 );
            }
            assign_space = Add_internal_space( _49options_49163, insert_pos,((s1_ptr)SEQ_PTR(_new_options_49167))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_new_options_49167), _49options_49163 == _49options_49163 );
            _49options_49163 = MAKE_SEQ( assign_space );
        }
        else {
            if( _49options_49163 != _49options_49163 && SEQ_PTR( _49options_49163 )->ref != 1 ){
                _49options_49163 = Insert( _49options_49163, _new_options_49167, insert_pos);
            }
            else {
                DeRef( _49options_49163 );
                RefDS( _49options_49163 );
                _49options_49163 = Insert( _49options_49163, _new_options_49167, insert_pos);
            }
        }
    }
    // SubProg add_options pc: 14 op: STARTLINE (58)

    /** cominit.e:67	end procedure*/
    // SubProg add_options pc: 16 op: RETURNP (29)

// Exiting block BLOCK: add_options

// block var new_options_49167
    DeRefDS(_new_options_49167);
    return;
    // SubProg add_options pc: 19 op: BADRETURNF (43)
    ;
}


object _49get_options()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_options pc: 1 op: STARTLINE (58)

    /** cominit.e:73		return options*/
    // SubProg get_options pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_options pc: 5 op: RETURNF (28)
    RefDS(_49options_49163);

// Exiting block BLOCK: get_options
    return _49options_49163;
    // SubProg get_options pc: 9 op: BADRETURNF (43)
    ;
}


object _49get_switches()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_switches pc: 1 op: STARTLINE (58)

    /** cominit.e:87		return switches*/
    // SubProg get_switches pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_switches pc: 5 op: RETURNF (28)
    RefDS(_49switches_49052);

// Exiting block BLOCK: get_switches
    return _49switches_49052;
    // SubProg get_switches pc: 9 op: BADRETURNF (43)
    ;
}


void _49show_copyrights()
{
    object _notices_49177 = NOVALUE;
    object _25435 = NOVALUE; // 49191 25435
    object _25434 = NOVALUE; // 49190 25434
    object _25432 = NOVALUE; // 49188 25432
    object _25431 = NOVALUE; // 49187 25431
    object _25430 = NOVALUE; // 49185 25430
    object _25429 = NOVALUE; // 49184 25429
    object _25427 = NOVALUE; // 49182 25427
// skipping _25426  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_copyrights pc: 1 op: STARTLINE (58)

    /** cominit.e:94		sequence notices = all_copyrights()*/
    // SubProg show_copyrights pc: 3 op: PROC (27)
    _0 = _notices_49177;
    _notices_49177 = _33all_copyrights();
    DeRef(_0);
    // SubProg show_copyrights pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg show_copyrights pc: 8 op: STARTLINE (58)

    /** cominit.e:95		for i = 1 to length(notices) do*/
    // SubProg show_copyrights pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_notices_49177)){
            _25427 = SEQ_PTR(_notices_49177)->length;
    }
    else {
        _25427 = 1;
    }
    // SubProg show_copyrights pc: 13 op: FOR_I (125)
    {
        object _i_49181;
        _i_49181 = 1;
L1: // addr: 20 pc: 13 sub: 49175 op: 125
        if (_i_49181 > _25427){
            goto L2; // [13] 60
        }
        // SubProg show_copyrights pc: 20 op: STARTLINE (58)

        /** cominit.e:96			printf(2, "%s\n  %s\n\n", { notices[i][1], match_replace("\n", notices[i][2], "\n  ") })*/
        // SubProg show_copyrights pc: 22 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_notices_49177);
        _25429 = (object)*(((s1_ptr)_2)->base + _i_49181);
        // SubProg show_copyrights pc: 26 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25429);
        _25430 = (object)*(((s1_ptr)_2)->base + 1);
        _25429 = NOVALUE;
        // SubProg show_copyrights pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_notices_49177);
        _25431 = (object)*(((s1_ptr)_2)->base + _i_49181);
        // SubProg show_copyrights pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25431);
        _25432 = (object)*(((s1_ptr)_2)->base + 2);
        _25431 = NOVALUE;
        // SubProg show_copyrights pc: 38 op: PROC (27)
        RefDS(_22128);
        Ref(_25432);
        RefDS(_25433);
        _25434 = _19match_replace(_22128, _25432, _25433, 0);
        _25432 = NOVALUE;
        // SubProg show_copyrights pc: 45 op: RIGHT_BRACE_2 (85)
        Ref(_25430);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25430;
        ((intptr_t *)_2)[2] = _25434;
        _25435 = MAKE_SEQ(_1);
        _25434 = NOVALUE;
        _25430 = NOVALUE;
        // SubProg show_copyrights pc: 49 op: PRINTF (38)
        EPrintf(2, _25428, _25435);
        DeRefDS(_25435);
        _25435 = NOVALUE;
        // SubProg show_copyrights pc: 53 op: STARTLINE (58)

        /** cominit.e:97		end for*/
        // SubProg show_copyrights pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_49181 = _i_49181 + 1;
        goto L1; // [55] 20
L2: // addr: 60 pc: 55 sub: 49175 op: 54
        ;
    }
    // SubProg show_copyrights pc: 60 op: STARTLINE (58)

    /** cominit.e:98	end procedure*/
    // SubProg show_copyrights pc: 62 op: RETURNP (29)

// Exiting block BLOCK: show_copyrights

// block var notices_49177
    DeRef(_notices_49177);
    return;
    // SubProg show_copyrights pc: 65 op: BADRETURNF (43)
    ;
}


void _49show_banner()
{
    object _version_type_inlined_version_type_at_210_49245 = NOVALUE;
    object _version_string_short_1__tmp_at194_49243 = NOVALUE;
    object _version_string_short_inlined_version_string_short_at_194_49242 = NOVALUE;
    object _version_revision_inlined_version_revision_at_125_49224 = NOVALUE;
    object _platform_name_inlined_platform_name_at_86_49216 = NOVALUE;
    object _prod_name_49194 = NOVALUE;
    object _memory_type_49195 = NOVALUE;
    object _misc_info_49213 = NOVALUE;
    object _EuConsole_49228 = NOVALUE;
    object _25460 = NOVALUE; // 49248 25460
    object _25459 = NOVALUE; // 49247 25459
    object _25458 = NOVALUE; // 49246 25458
// skipping _25456  name type: 0
    object _25455 = NOVALUE; // 49235 25455
    object _25454 = NOVALUE; // 49233 25454
// skipping _25452  name type: 0
    object _25450 = NOVALUE; // 49227 25450
    object _25449 = NOVALUE; // 49226 25449
    object _25448 = NOVALUE; // 49225 25448
    object _25446 = NOVALUE; // 49221 25446
// skipping _25445  name type: 0
    object _25444 = NOVALUE; // 49218 25444
    object _25443 = NOVALUE; // 49217 25443
    object _25442 = NOVALUE; // 49214 25442
// skipping _25441  name type: 0
// skipping _25440  name type: 0
// skipping _25439  name type: 0
// skipping _25438  name type: 0
    object _25437 = NOVALUE; // 49200 25437
    object _25436 = NOVALUE; // 49198 25436
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_banner pc: 1 op: STARTLINE (58)

    /** cominit.e:109		if INTERPRET and not BIND then*/
    // SubProg show_banner pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 5 op: SC1_AND_IF (146)
    if (_36INTERPRET_16058 == 0) {
        goto L1; // [5] 31
    }
    // SubProg show_banner pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 11 op: NOT (7)
    _25437 = (_36BIND_16064 == 0);
    // SubProg show_banner pc: 14 op: NOP1 (159)
    // SubProg show_banner pc: 15 op: IF (20)
    if (_25437 == 0)
    {
        DeRef(_25437);
        _25437 = NOVALUE;
        goto L1; // [15] 31
    }
    else{
        DeRef(_25437);
        _25437 = NOVALUE;
    }
    // SubProg show_banner pc: 18 op: STARTLINE (58)

    /** cominit.e:110			prod_name = GetMsgText(270,0)*/
    // SubProg show_banner pc: 20 op: PROC (27)
    RefDS(_21933);
    _0 = _prod_name_49194;
    _prod_name_49194 = _42GetMsgText(270, 0, _21933);
    DeRef(_0);
    // SubProg show_banner pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 28 op: ELSE (23)
    goto L2; // [28] 70
    // SubProg show_banner pc: 30 op: NOP1 (159)
L1: // addr: 31 pc: 30 sub: 49192 op: 159
    // SubProg show_banner pc: 31 op: STARTLINE (58)

    /** cominit.e:112		elsif TRANSLATE then*/
    // SubProg show_banner pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 35 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L3; // [35] 51
    }
    else{
    }
    // SubProg show_banner pc: 38 op: STARTLINE (58)

    /** cominit.e:113			prod_name = GetMsgText(271,0)*/
    // SubProg show_banner pc: 40 op: PROC (27)
    RefDS(_21933);
    _0 = _prod_name_49194;
    _prod_name_49194 = _42GetMsgText(271, 0, _21933);
    DeRef(_0);
    // SubProg show_banner pc: 46 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 48 op: ELSE (23)
    goto L2; // [48] 70
    // SubProg show_banner pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 49192 op: 159
    // SubProg show_banner pc: 51 op: STARTLINE (58)

    /** cominit.e:115		elsif BIND then*/
    // SubProg show_banner pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 55 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L4; // [55] 69
    }
    else{
    }
    // SubProg show_banner pc: 58 op: STARTLINE (58)

    /** cominit.e:116			prod_name = GetMsgText(272,0)*/
    // SubProg show_banner pc: 60 op: PROC (27)
    RefDS(_21933);
    _0 = _prod_name_49194;
    _prod_name_49194 = _42GetMsgText(272, 0, _21933);
    DeRef(_0);
    // SubProg show_banner pc: 66 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 49192 op: 159
    // SubProg show_banner pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 49192 op: 159
    // SubProg show_banner pc: 70 op: STARTLINE (58)

    /** cominit.e:119		ifdef EU_MANAGED_MEM then*/
    // SubProg show_banner pc: 72 op: STARTLINE (58)

    /** cominit.e:122			memory_type = GetMsgText(274,0)*/
    // SubProg show_banner pc: 74 op: PROC (27)
    RefDS(_21933);
    _0 = _memory_type_49195;
    _memory_type_49195 = _42GetMsgText(274, 0, _21933);
    DeRef(_0);
    // SubProg show_banner pc: 80 op: SEQUENCE_CHECK (97)
    // SubProg show_banner pc: 82 op: STARTLINE (58)

    /** cominit.e:125		sequence misc_info = {*/
    // SubProg show_banner pc: 84 op: PROC (27)
    _25442 = _33arch_bits();
    // SubProg show_banner pc: 87 op: STARTLINE (58)

    /** info.e:48		ifdef WINDOWS then*/
    // SubProg show_banner pc: 89 op: STARTLINE (58)

    /** info.e:51			return "Linux"*/
    // SubProg show_banner pc: 91 op: ASSIGN (18)
    RefDS(_6750);
    DeRefi(_platform_name_inlined_platform_name_at_86_49216);
    _platform_name_inlined_platform_name_at_86_49216 = _6750;
    // SubProg show_banner pc: 94 op: NOP1 (159)
    // SubProg show_banner pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg show_banner pc: 97 op: PROC (27)
    _25443 = _33version_date(0);
    // SubProg show_banner pc: 101 op: PROC (27)
    _25444 = _33version_node(0);
    // SubProg show_banner pc: 105 op: RIGHT_BRACE_N (31)
    _0 = _misc_info_49213;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25442;
    RefDS(_platform_name_inlined_platform_name_at_86_49216);
    ((intptr_t*)_2)[2] = _platform_name_inlined_platform_name_at_86_49216;
    RefDS(_memory_type_49195);
    ((intptr_t*)_2)[3] = _memory_type_49195;
    RefDS(_21933);
    ((intptr_t*)_2)[4] = _21933;
    ((intptr_t*)_2)[5] = _25443;
    ((intptr_t*)_2)[6] = _25444;
    _misc_info_49213 = MAKE_SEQ(_1);
    DeRef(_0);
    _25444 = NOVALUE;
    _25443 = NOVALUE;
    _25442 = NOVALUE;
    // SubProg show_banner pc: 114 op: STARTLINE (58)

    /** cominit.e:134		if info:is_developmental then*/
    // SubProg show_banner pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 118 op: IF (20)
    if (_33is_developmental_12053 == 0)
    {
        goto L5; // [118] 152
    }
    else{
    }
    // SubProg show_banner pc: 121 op: STARTLINE (58)

    /** cominit.e:135			misc_info[$] = sprintf("%d:%s", { info:version_revision(), info:version_node() })*/
    // SubProg show_banner pc: 123 op: LENGTH (42)
    // Known sequence length:
    _25446 = 6;
    // SubProg show_banner pc: 126 op: STARTLINE (58)

    /** info.e:157		return version_info[REVISION]*/
    // SubProg show_banner pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 130 op: RHS_SUBS_CHECK (92)
    DeRef(_version_revision_inlined_version_revision_at_125_49224);
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _version_revision_inlined_version_revision_at_125_49224 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_125_49224);
    // SubProg show_banner pc: 134 op: NOP1 (159)
    // SubProg show_banner pc: 135 op: PROC (27)
    _25448 = _33version_node(0);
    // SubProg show_banner pc: 139 op: RIGHT_BRACE_2 (85)
    Ref(_version_revision_inlined_version_revision_at_125_49224);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _version_revision_inlined_version_revision_at_125_49224;
    ((intptr_t *)_2)[2] = _25448;
    _25449 = MAKE_SEQ(_1);
    _25448 = NOVALUE;
    // SubProg show_banner pc: 143 op: SPRINTF (53)
    _25450 = EPrintf(-9999999, _25447, _25449);
    DeRefDS(_25449);
    _25449 = NOVALUE;
    // SubProg show_banner pc: 147 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_misc_info_49213);
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25450;
    if( _1 != _25450 ){
        DeRef(_1);
    }
    _25450 = NOVALUE;
    // SubProg show_banner pc: 151 op: NOP1 (159)
L5: // addr: 152 pc: 151 sub: 49192 op: 159
    // SubProg show_banner pc: 152 op: STARTLINE (58)

    /** cominit.e:138		object EuConsole = getenv("EUCONS")*/
    // SubProg show_banner pc: 154 op: GETENV (91)
    DeRefi(_EuConsole_49228);
    _EuConsole_49228 = EGetEnv(_25451);
    // SubProg show_banner pc: 157 op: STARTLINE (58)

    /** cominit.e:139		if equal(EuConsole, "1") then*/
    // SubProg show_banner pc: 159 op: EQUAL (153)
    if (_EuConsole_49228 == _25453)
    _25454 = 1;
    else if (IS_ATOM_INT(_EuConsole_49228) && IS_ATOM_INT(_25453))
    _25454 = 0;
    else
    _25454 = (compare(_EuConsole_49228, _25453) == 0);
    // SubProg show_banner pc: 163 op: IF (20)
    if (_25454 == 0)
    {
        _25454 = NOVALUE;
        goto L6; // [163] 181
    }
    else{
        _25454 = NOVALUE;
    }
    // SubProg show_banner pc: 166 op: STARTLINE (58)

    /** cominit.e:140			misc_info[4] = GetMsgText(275,0)*/
    // SubProg show_banner pc: 168 op: PROC (27)
    RefDS(_21933);
    _25455 = _42GetMsgText(275, 0, _21933);
    // SubProg show_banner pc: 174 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_misc_info_49213);
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _25455;
    if( _1 != _25455 ){
        DeRef(_1);
    }
    _25455 = NOVALUE;
    // SubProg show_banner pc: 178 op: ELSE (23)
    goto L7; // [178] 189
    // SubProg show_banner pc: 180 op: NOP1 (159)
L6: // addr: 181 pc: 180 sub: 49192 op: 159
    // SubProg show_banner pc: 181 op: STARTLINE (58)

    /** cominit.e:142			misc_info = remove(misc_info, 4)*/
    // SubProg show_banner pc: 183 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_misc_info_49213);
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
                Head( SEQ_PTR(_misc_info_49213), start, &_misc_info_49213 );
            }
            else Tail(SEQ_PTR(_misc_info_49213), stop+1, &_misc_info_49213);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_misc_info_49213), start, &_misc_info_49213);
        }
        else {
            assign_slice_seq = &assign_space;
            _misc_info_49213 = Remove_elements(start, stop, (SEQ_PTR(_misc_info_49213)->ref == 1));
        }
    }
    // SubProg show_banner pc: 188 op: NOP1 (159)
L7: // addr: 189 pc: 188 sub: 49192 op: 159
    // SubProg show_banner pc: 189 op: STARTLINE (58)

    /** cominit.e:145		screen_output(STDERR, sprintf("%s v%s %s\n   %s %s, %s\n   Revision Date: %s, Id: %s\n", {*/
    // SubProg show_banner pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 193 op: PRIVATE_INIT_CHECK (30)
    // SubProg show_banner pc: 195 op: STARTLINE (58)

    /** info.e:261		return sprintf("%d.%d.%d", version_info[MAJ_VER..PAT_VER])*/
    // SubProg show_banner pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 199 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_version_string_short_1__tmp_at194_49243;
    RHS_Slice(_33version_info_12051, 1, 3);
    // SubProg show_banner pc: 204 op: SPRINTF (53)
    DeRefi(_version_string_short_inlined_version_string_short_at_194_49242);
    _version_string_short_inlined_version_string_short_at_194_49242 = EPrintf(-9999999, _6807, _version_string_short_1__tmp_at194_49243);
    // SubProg show_banner pc: 208 op: NOP1 (159)
    // SubProg show_banner pc: 209 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-version_string_short from show_banner @ 194

// block var version_string_short_1__tmp_at194_49243
    DeRef(_version_string_short_1__tmp_at194_49243);
    _version_string_short_1__tmp_at194_49243 = NOVALUE;
    // SubProg show_banner pc: 211 op: STARTLINE (58)

    /** info.e:202		return version_info[VER_TYPE]*/
    // SubProg show_banner pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_banner pc: 215 op: RHS_SUBS_CHECK (92)
    DeRef(_version_type_inlined_version_type_at_210_49245);
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _version_type_inlined_version_type_at_210_49245 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_version_type_inlined_version_type_at_210_49245);
    // SubProg show_banner pc: 219 op: NOP1 (159)
    // SubProg show_banner pc: 220 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_prod_name_49194);
    ((intptr_t*)_2)[1] = _prod_name_49194;
    RefDS(_version_string_short_inlined_version_string_short_at_194_49242);
    ((intptr_t*)_2)[2] = _version_string_short_inlined_version_string_short_at_194_49242;
    Ref(_version_type_inlined_version_type_at_210_49245);
    ((intptr_t*)_2)[3] = _version_type_inlined_version_type_at_210_49245;
    _25458 = MAKE_SEQ(_1);
    // SubProg show_banner pc: 226 op: CONCAT (15)
    Concat((object_ptr)&_25459, _25458, _misc_info_49213);
    DeRefDS(_25458);
    _25458 = NOVALUE;
    DeRef(_25458);
    _25458 = NOVALUE;
    // SubProg show_banner pc: 230 op: SPRINTF (53)
    _25460 = EPrintf(-9999999, _25457, _25459);
    DeRefDS(_25459);
    _25459 = NOVALUE;
    // SubProg show_banner pc: 234 op: PROC (27)
    _50screen_output(2, _25460);
    _25460 = NOVALUE;
    // SubProg show_banner pc: 238 op: STARTLINE (58)

    /** cominit.e:147	end procedure*/
    // SubProg show_banner pc: 240 op: RETURNP (29)

// Exiting block BLOCK: show_banner

// block var prod_name_49194
    DeRefDS(_prod_name_49194);

// block var memory_type_49195
    DeRef(_memory_type_49195);

// block var misc_info_49213
    DeRefDS(_misc_info_49213);

// block var EuConsole_49228
    DeRefi(_EuConsole_49228);
    return;
    // SubProg show_banner pc: 243 op: BADRETURNF (43)
    ;
}


object _49find_opt(object _name_type_49257, object _opt_49258, object _opts_49259)
{
    object _o_49263 = NOVALUE;
    object _has_case_49265 = NOVALUE;
    object _25473 = NOVALUE; // 49279 25473
    object _25472 = NOVALUE; // 49278 25472
    object _25471 = NOVALUE; // 49277 25471
    object _25470 = NOVALUE; // 49276 25470
    object _25469 = NOVALUE; // 49275 25469
    object _25468 = NOVALUE; // 49274 25468
    object _25467 = NOVALUE; // 49272 25467
    object _25466 = NOVALUE; // 49271 25466
    object _25465 = NOVALUE; // 49270 25465
// skipping _25464  name type: 0
    object _25463 = NOVALUE; // 49267 25463
// skipping _25462  name type: 0
    object _25461 = NOVALUE; // 49262 25461
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg find_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg find_opt pc: 7 op: STARTLINE (58)

    /** cominit.e:172		for i = 1 to length(opts) do*/
    // SubProg find_opt pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_opts_49259)){
            _25461 = SEQ_PTR(_opts_49259)->length;
    }
    else {
        _25461 = 1;
    }
    // SubProg find_opt pc: 12 op: FOR_I (125)
    {
        object _i_49261;
        _i_49261 = 1;
L1: // addr: 19 pc: 12 sub: 49255 op: 125
        if (_i_49261 > _25461){
            goto L2; // [12] 113
        }
        // SubProg find_opt pc: 19 op: STARTLINE (58)

        /** cominit.e:173			sequence o = opts[i]		*/
        // SubProg find_opt pc: 21 op: RHS_SUBS (25)
        DeRef(_o_49263);
        _2 = (object)SEQ_PTR(_opts_49259);
        _o_49263 = (object)*(((s1_ptr)_2)->base + _i_49261);
        Ref(_o_49263);
        // SubProg find_opt pc: 25 op: SEQUENCE_CHECK (97)
        // SubProg find_opt pc: 27 op: STARTLINE (58)

        /** cominit.e:174			integer has_case = find(HAS_CASE, o[OPTIONS])*/
        // SubProg find_opt pc: 29 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_opt pc: 31 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49263);
        _25463 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg find_opt pc: 35 op: FIND_FROM (176)
        _has_case_49265 = find_from(99, _25463, 1);
        _25463 = NOVALUE;
        // SubProg find_opt pc: 40 op: STARTLINE (58)

        /** cominit.e:176			if has_case and equal(o[name_type], opt) then*/
        // SubProg find_opt pc: 42 op: SC1_AND_IF (146)
        if (_has_case_49265 == 0) {
            goto L3; // [42] 67
        }
        // SubProg find_opt pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49263);
        _25466 = (object)*(((s1_ptr)_2)->base + _name_type_49257);
        // SubProg find_opt pc: 50 op: EQUAL (153)
        if (_25466 == _opt_49258)
        _25467 = 1;
        else if (IS_ATOM_INT(_25466) && IS_ATOM_INT(_opt_49258))
        _25467 = 0;
        else
        _25467 = (compare(_25466, _opt_49258) == 0);
        _25466 = NOVALUE;
        // SubProg find_opt pc: 54 op: NOP1 (159)
        // SubProg find_opt pc: 55 op: IF (20)
        if (_25467 == 0)
        {
            _25467 = NOVALUE;
            goto L3; // [55] 67
        }
        else{
            _25467 = NOVALUE;
        }
        // SubProg find_opt pc: 58 op: STARTLINE (58)

        /** cominit.e:177				return o*/
        // SubProg find_opt pc: 60 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var has_case_49265

// Exiting block BLOCK: find_opt

// block var name_type_49257

// block var opt_49258
        DeRefDS(_opt_49258);

// block var opts_49259
        DeRefDS(_opts_49259);
        return _o_49263;
        // SubProg find_opt pc: 64 op: ELSE (23)
        goto L4; // [64] 104
        // SubProg find_opt pc: 66 op: NOP1 (159)
L3: // addr: 67 pc: 66 sub: 49255 op: 159
        // SubProg find_opt pc: 67 op: STARTLINE (58)

        /** cominit.e:178			elsif not has_case and equal(text:lower(o[name_type]), text:lower(opt)) then*/
        // SubProg find_opt pc: 69 op: NOT (7)
        _25468 = (_has_case_49265 == 0);
        // SubProg find_opt pc: 72 op: SC1_AND_IF (146)
        if (_25468 == 0) {
            goto L5; // [72] 103
        }
        // SubProg find_opt pc: 76 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_o_49263);
        _25470 = (object)*(((s1_ptr)_2)->base + _name_type_49257);
        // SubProg find_opt pc: 80 op: PROC (27)
        Ref(_25470);
        _25471 = _17lower(_25470);
        _25470 = NOVALUE;
        // SubProg find_opt pc: 84 op: PROC (27)
        RefDS(_opt_49258);
        _25472 = _17lower(_opt_49258);
        // SubProg find_opt pc: 88 op: EQUAL (153)
        if (_25471 == _25472)
        _25473 = 1;
        else if (IS_ATOM_INT(_25471) && IS_ATOM_INT(_25472))
        _25473 = 0;
        else
        _25473 = (compare(_25471, _25472) == 0);
        DeRef(_25471);
        _25471 = NOVALUE;
        DeRef(_25472);
        _25472 = NOVALUE;
        // SubProg find_opt pc: 92 op: NOP1 (159)
        // SubProg find_opt pc: 93 op: IF (20)
        if (_25473 == 0)
        {
            _25473 = NOVALUE;
            goto L5; // [93] 103
        }
        else{
            _25473 = NOVALUE;
        }
        // SubProg find_opt pc: 96 op: STARTLINE (58)

        /** cominit.e:179				return o*/
        // SubProg find_opt pc: 98 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var has_case_49265

// Exiting block BLOCK: find_opt

// block var name_type_49257

// block var opt_49258
        DeRefDS(_opt_49258);

// block var opts_49259
        DeRefDS(_opts_49259);
        DeRef(_25468);
        _25468 = NOVALUE;
        return _o_49263;
        // SubProg find_opt pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 49255 op: 159
        // SubProg find_opt pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 49255 op: 159
        // SubProg find_opt pc: 104 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var o_49263
        DeRef(_o_49263);
        _o_49263 = NOVALUE;

// block var has_case_49265
        // SubProg find_opt pc: 106 op: STARTLINE (58)

        /** cominit.e:181		end for*/
        // SubProg find_opt pc: 108 op: ENDFOR_INT_UP1 (54)
        _i_49261 = _i_49261 + 1;
        goto L1; // [108] 19
L2: // addr: 113 pc: 108 sub: 49255 op: 54
        ;
    }
    // SubProg find_opt pc: 113 op: STARTLINE (58)

    /** cominit.e:183		return {}*/
    // SubProg find_opt pc: 115 op: RETURNF (28)
    RefDS(_21933);

// Exiting block BLOCK: find_opt

// block var name_type_49257

// block var opt_49258
    DeRefDS(_opt_49258);

// block var opts_49259
    DeRefDS(_opts_49259);
    DeRef(_25468);
    _25468 = NOVALUE;
    return _21933;
    // SubProg find_opt pc: 119 op: BADRETURNF (43)
    ;
}


object _49merge_parameters(object _a_49282, object _b_49283, object _opts_49284, object _dedupe_49285)
{
    object _i_49286 = NOVALUE;
    object _opt_49290 = NOVALUE;
    object _this_opt_49296 = NOVALUE;
    object _bi_49297 = NOVALUE;
    object _beginLen_49357 = NOVALUE;
    object _first_extra_49379 = NOVALUE;
    object _opt_49383 = NOVALUE;
    object _this_opt_49388 = NOVALUE;
    object _25567 = NOVALUE; // 49418 25567
    object _25566 = NOVALUE; // 49417 25566
// skipping _25565  name type: 0
// skipping _25564  name type: 0
    object _25563 = NOVALUE; // 49412 25563
    object _25562 = NOVALUE; // 49411 25562
    object _25561 = NOVALUE; // 49408 25561
// skipping _25560  name type: 0
    object _25559 = NOVALUE; // 49405 25559
    object _25558 = NOVALUE; // 49404 25558
    object _25557 = NOVALUE; // 49403 25557
    object _25556 = NOVALUE; // 49402 25556
// skipping _25555  name type: 0
    object _25554 = NOVALUE; // 49400 25554
    object _25553 = NOVALUE; // 49399 25553
// skipping _25552  name type: 0
    object _25551 = NOVALUE; // 49396 25551
    object _25550 = NOVALUE; // 49395 25550
    object _25549 = NOVALUE; // 49394 25549
    object _25548 = NOVALUE; // 49393 25548
    object _25547 = NOVALUE; // 49392 25547
    object _25546 = NOVALUE; // 49391 25546
    object _25545 = NOVALUE; // 49390 25545
// skipping _25544  name type: 0
    object _25543 = NOVALUE; // 49386 25543
// skipping _25542  name type: 0
// skipping _25541  name type: 0
    object _25540 = NOVALUE; // 49381 25540
    object _25539 = NOVALUE; // 49378 25539
// skipping _25538  name type: 0
// skipping _25537  name type: 0
// skipping _25536  name type: 0
// skipping _25535  name type: 0
    object _25534 = NOVALUE; // 49370 25534
// skipping _25533  name type: 0
    object _25532 = NOVALUE; // 49367 25532
    object _25531 = NOVALUE; // 49366 25531
    object _25530 = NOVALUE; // 49365 25530
    object _25529 = NOVALUE; // 49364 25529
    object _25528 = NOVALUE; // 49363 25528
    object _25527 = NOVALUE; // 49362 25527
    object _25526 = NOVALUE; // 49361 25526
    object _25525 = NOVALUE; // 49360 25525
// skipping _25524  name type: 0
// skipping _25523  name type: 0
// skipping _25522  name type: 0
    object _25521 = NOVALUE; // 49352 25521
    object _25520 = NOVALUE; // 49351 25520
    object _25519 = NOVALUE; // 49350 25519
    object _25518 = NOVALUE; // 49346 25518
    object _25517 = NOVALUE; // 49345 25517
    object _25516 = NOVALUE; // 49344 25516
    object _25515 = NOVALUE; // 49342 25515
    object _25514 = NOVALUE; // 49341 25514
    object _25513 = NOVALUE; // 49339 25513
    object _25512 = NOVALUE; // 49338 25512
    object _25511 = NOVALUE; // 49337 25511
    object _25510 = NOVALUE; // 49336 25510
    object _25509 = NOVALUE; // 49335 25509
    object _25508 = NOVALUE; // 49334 25508
    object _25507 = NOVALUE; // 49333 25507
// skipping _25506  name type: 0
    object _25505 = NOVALUE; // 49331 25505
    object _25504 = NOVALUE; // 49330 25504
    object _25503 = NOVALUE; // 49329 25503
    object _25502 = NOVALUE; // 49328 25502
    object _25501 = NOVALUE; // 49327 25501
    object _25500 = NOVALUE; // 49326 25500
    object _25499 = NOVALUE; // 49325 25499
    object _25498 = NOVALUE; // 49323 25498
// skipping _25497  name type: 0
    object _25496 = NOVALUE; // 49319 25496
    object _25495 = NOVALUE; // 49318 25495
    object _25494 = NOVALUE; // 49317 25494
    object _25493 = NOVALUE; // 49316 25493
// skipping _25492  name type: 0
    object _25491 = NOVALUE; // 49314 25491
    object _25490 = NOVALUE; // 49313 25490
    object _25489 = NOVALUE; // 49311 25489
    object _25488 = NOVALUE; // 49310 25488
    object _25487 = NOVALUE; // 49309 25487
    object _25486 = NOVALUE; // 49308 25486
    object _25485 = NOVALUE; // 49306 25485
// skipping _25484  name type: 0
    object _25483 = NOVALUE; // 49302 25483
    object _25482 = NOVALUE; // 49301 25482
// skipping _25481  name type: 0
    object _25480 = NOVALUE; // 49299 25480
// skipping _25479  name type: 0
// skipping _25478  name type: 0
    object _25477 = NOVALUE; // 49293 25477
// skipping _25476  name type: 0
// skipping _25475  name type: 0
    object _25474 = NOVALUE; // 49288 25474
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg merge_parameters pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 7 op: INTEGER_CHECK (96)
    // SubProg merge_parameters pc: 9 op: STARTLINE (58)

    /** cominit.e:199		integer i = 1*/
    // SubProg merge_parameters pc: 11 op: ASSIGN_I (113)
    _i_49286 = 1;
    // SubProg merge_parameters pc: 14 op: STARTLINE (58)

    /** cominit.e:201		while i <= length(a) do*/
    // SubProg merge_parameters pc: 16 op: NOP2 (110)
    // SubProg merge_parameters pc: 18 op: NOPWHILE (158)
L1: // addr: 19 pc: 18 sub: 49280 op: 158
    // SubProg merge_parameters pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49282)){
            _25474 = SEQ_PTR(_a_49282)->length;
    }
    else {
        _25474 = 1;
    }
    // SubProg merge_parameters pc: 22 op: LESSEQ_IFW_I (123)
    if (_i_49286 > _25474)
    goto L2; // [22] 465
    // SubProg merge_parameters pc: 26 op: STARTLINE (58)

    /** cominit.e:202			sequence opt = a[i]*/
    // SubProg merge_parameters pc: 28 op: RHS_SUBS (25)
    DeRef(_opt_49290);
    _2 = (object)SEQ_PTR(_a_49282);
    _opt_49290 = (object)*(((s1_ptr)_2)->base + _i_49286);
    Ref(_opt_49290);
    // SubProg merge_parameters pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 34 op: STARTLINE (58)

    /** cominit.e:203			if length(opt) < 2 then*/
    // SubProg merge_parameters pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49290)){
            _25477 = SEQ_PTR(_opt_49290)->length;
    }
    else {
        _25477 = 1;
    }
    // SubProg merge_parameters pc: 39 op: LESS_IFW_I (119)
    if (_25477 >= 2)
    goto L3; // [39] 56
    // SubProg merge_parameters pc: 43 op: STARTLINE (58)

    /** cominit.e:204				i += 1*/
    // SubProg merge_parameters pc: 45 op: PLUS1_I (117)
    _i_49286 = _i_49286 + 1;
    // SubProg merge_parameters pc: 49 op: STARTLINE (58)

    /** cominit.e:205				continue*/
    // SubProg merge_parameters pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49290
    DeRefDS(_opt_49290);
    _opt_49290 = NOVALUE;

// block var this_opt_49296
    DeRef(_this_opt_49296);
    _this_opt_49296 = NOVALUE;

// block var bi_49297
    // SubProg merge_parameters pc: 53 op: ELSE (23)
    goto L1; // [53] 19
    // SubProg merge_parameters pc: 55 op: NOP1 (159)
L3: // addr: 56 pc: 55 sub: 49280 op: 159
    // SubProg merge_parameters pc: 56 op: STARTLINE (58)

    /** cominit.e:208			sequence this_opt = {}*/
    // SubProg merge_parameters pc: 58 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_this_opt_49296);
    _this_opt_49296 = _21933;
    // SubProg merge_parameters pc: 61 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 63 op: STARTLINE (58)

    /** cominit.e:209			integer bi = 0*/
    // SubProg merge_parameters pc: 65 op: ASSIGN_I (113)
    _bi_49297 = 0;
    // SubProg merge_parameters pc: 68 op: STARTLINE (58)

    /** cominit.e:211			if opt[2] = '-' then*/
    // SubProg merge_parameters pc: 70 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49290);
    _25480 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg merge_parameters pc: 74 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25480, 45)){
        _25480 = NOVALUE;
        goto L4; // [74] 149
    }
    _25480 = NOVALUE;
    // SubProg merge_parameters pc: 78 op: STARTLINE (58)

    /** cominit.e:214				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    // SubProg merge_parameters pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49290)){
            _25482 = SEQ_PTR(_opt_49290)->length;
    }
    else {
        _25482 = 1;
    }
    // SubProg merge_parameters pc: 83 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25483;
    RHS_Slice(_opt_49290, 3, _25482);
    // SubProg merge_parameters pc: 88 op: PROC (27)
    RefDS(_opts_49284);
    _0 = _this_opt_49296;
    _this_opt_49296 = _49find_opt(2, _25483, _opts_49284);
    DeRefDS(_0);
    _25483 = NOVALUE;
    // SubProg merge_parameters pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 96 op: STARTLINE (58)

    /** cominit.e:216				for j = 1 to length(b) do*/
    // SubProg merge_parameters pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49283)){
            _25485 = SEQ_PTR(_b_49283)->length;
    }
    else {
        _25485 = 1;
    }
    // SubProg merge_parameters pc: 101 op: FOR_I (125)
    {
        object _j_49305;
        _j_49305 = 1;
L5: // addr: 108 pc: 101 sub: 49280 op: 125
        if (_j_49305 > _25485){
            goto L6; // [101] 146
        }
        // SubProg merge_parameters pc: 108 op: STARTLINE (58)

        /** cominit.e:217					if equal(text:lower(b[j]), text:lower(opt)) then*/
        // SubProg merge_parameters pc: 110 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49283);
        _25486 = (object)*(((s1_ptr)_2)->base + _j_49305);
        // SubProg merge_parameters pc: 114 op: PROC (27)
        Ref(_25486);
        _25487 = _17lower(_25486);
        _25486 = NOVALUE;
        // SubProg merge_parameters pc: 118 op: PROC (27)
        RefDS(_opt_49290);
        _25488 = _17lower(_opt_49290);
        // SubProg merge_parameters pc: 122 op: EQUAL (153)
        if (_25487 == _25488)
        _25489 = 1;
        else if (IS_ATOM_INT(_25487) && IS_ATOM_INT(_25488))
        _25489 = 0;
        else
        _25489 = (compare(_25487, _25488) == 0);
        DeRef(_25487);
        _25487 = NOVALUE;
        DeRef(_25488);
        _25488 = NOVALUE;
        // SubProg merge_parameters pc: 126 op: IF (20)
        if (_25489 == 0)
        {
            _25489 = NOVALUE;
            goto L7; // [126] 139
        }
        else{
            _25489 = NOVALUE;
        }
        // SubProg merge_parameters pc: 129 op: STARTLINE (58)

        /** cominit.e:218						bi = j*/
        // SubProg merge_parameters pc: 131 op: ASSIGN_I (113)
        _bi_49297 = _j_49305;
        // SubProg merge_parameters pc: 134 op: STARTLINE (58)

        /** cominit.e:219						exit*/
        // SubProg merge_parameters pc: 136 op: EXIT (61)
        goto L6; // [136] 146
        // SubProg merge_parameters pc: 138 op: NOP1 (159)
L7: // addr: 139 pc: 138 sub: 49280 op: 159
        // SubProg merge_parameters pc: 139 op: STARTLINE (58)

        /** cominit.e:221				end for*/
        // SubProg merge_parameters pc: 141 op: ENDFOR_INT_UP1 (54)
        _j_49305 = _j_49305 + 1;
        goto L5; // [141] 108
L6: // addr: 146 pc: 141 sub: 49280 op: 54
        ;
    }
    // SubProg merge_parameters pc: 146 op: ELSE (23)
    goto L8; // [146] 292
    // SubProg merge_parameters pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 49280 op: 159
    // SubProg merge_parameters pc: 149 op: STARTLINE (58)

    /** cominit.e:223			elsif opt[1] = '-' or opt[1] = '/' then*/
    // SubProg merge_parameters pc: 151 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49290);
    _25490 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 155 op: EQUALS (3)
    if (IS_ATOM_INT(_25490)) {
        _25491 = (_25490 == 45);
    }
    else {
        _25491 = binary_op(EQUALS, _25490, 45);
    }
    _25490 = NOVALUE;
    // SubProg merge_parameters pc: 159 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_25491)) {
        if (_25491 != 0) {
            goto L9; // [159] 176
        }
    }
    else {
        if (DBL_PTR(_25491)->dbl != 0.0) {
            goto L9; // [159] 176
        }
    }
    // SubProg merge_parameters pc: 163 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49290);
    _25493 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 167 op: EQUALS (3)
    if (IS_ATOM_INT(_25493)) {
        _25494 = (_25493 == 47);
    }
    else {
        _25494 = binary_op(EQUALS, _25493, 47);
    }
    _25493 = NOVALUE;
    // SubProg merge_parameters pc: 171 op: NOP1 (159)
    // SubProg merge_parameters pc: 172 op: IF (20)
    if (_25494 == 0) {
        DeRef(_25494);
        _25494 = NOVALUE;
        goto LA; // [172] 291
    }
    else {
        if (!IS_ATOM_INT(_25494) && DBL_PTR(_25494)->dbl == 0.0){
            DeRef(_25494);
            _25494 = NOVALUE;
            goto LA; // [172] 291
        }
        DeRef(_25494);
        _25494 = NOVALUE;
    }
    DeRef(_25494);
    _25494 = NOVALUE;
    // SubProg merge_parameters pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 49280 op: 159
    // SubProg merge_parameters pc: 176 op: STARTLINE (58)

    /** cominit.e:226				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    // SubProg merge_parameters pc: 178 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49290)){
            _25495 = SEQ_PTR(_opt_49290)->length;
    }
    else {
        _25495 = 1;
    }
    // SubProg merge_parameters pc: 181 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25496;
    RHS_Slice(_opt_49290, 2, _25495);
    // SubProg merge_parameters pc: 186 op: PROC (27)
    RefDS(_opts_49284);
    _0 = _this_opt_49296;
    _this_opt_49296 = _49find_opt(1, _25496, _opts_49284);
    DeRef(_0);
    _25496 = NOVALUE;
    // SubProg merge_parameters pc: 192 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 194 op: STARTLINE (58)

    /** cominit.e:228				for j = 1 to length(b) do*/
    // SubProg merge_parameters pc: 196 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49283)){
            _25498 = SEQ_PTR(_b_49283)->length;
    }
    else {
        _25498 = 1;
    }
    // SubProg merge_parameters pc: 199 op: FOR_I (125)
    {
        object _j_49322;
        _j_49322 = 1;
LB: // addr: 206 pc: 199 sub: 49280 op: 125
        if (_j_49322 > _25498){
            goto LC; // [199] 290
        }
        // SubProg merge_parameters pc: 206 op: STARTLINE (58)

        /** cominit.e:229					if equal(text:lower(b[j]), '-' & text:lower(opt[2..$])) or */
        // SubProg merge_parameters pc: 208 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49283);
        _25499 = (object)*(((s1_ptr)_2)->base + _j_49322);
        // SubProg merge_parameters pc: 212 op: PROC (27)
        Ref(_25499);
        _25500 = _17lower(_25499);
        _25499 = NOVALUE;
        // SubProg merge_parameters pc: 216 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_49290)){
                _25501 = SEQ_PTR(_opt_49290)->length;
        }
        else {
            _25501 = 1;
        }
        // SubProg merge_parameters pc: 219 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25502;
        RHS_Slice(_opt_49290, 2, _25501);
        // SubProg merge_parameters pc: 224 op: PROC (27)
        _25503 = _17lower(_25502);
        _25502 = NOVALUE;
        // SubProg merge_parameters pc: 228 op: CONCAT (15)
        if (IS_SEQUENCE(45) && IS_ATOM(_25503)) {
        }
        else if (IS_ATOM(45) && IS_SEQUENCE(_25503)) {
            Prepend(&_25504, _25503, 45);
        }
        else {
            Concat((object_ptr)&_25504, 45, _25503);
        }
        DeRef(_25503);
        _25503 = NOVALUE;
        // SubProg merge_parameters pc: 232 op: EQUAL (153)
        if (_25500 == _25504)
        _25505 = 1;
        else if (IS_ATOM_INT(_25500) && IS_ATOM_INT(_25504))
        _25505 = 0;
        else
        _25505 = (compare(_25500, _25504) == 0);
        DeRef(_25500);
        _25500 = NOVALUE;
        DeRefDS(_25504);
        _25504 = NOVALUE;
        // SubProg merge_parameters pc: 236 op: SC1_OR_IF (147)
        if (_25505 != 0) {
            goto LD; // [236] 273
        }
        // SubProg merge_parameters pc: 240 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_b_49283);
        _25507 = (object)*(((s1_ptr)_2)->base + _j_49322);
        // SubProg merge_parameters pc: 244 op: PROC (27)
        Ref(_25507);
        _25508 = _17lower(_25507);
        _25507 = NOVALUE;
        // SubProg merge_parameters pc: 248 op: LENGTH (42)
        if (IS_SEQUENCE(_opt_49290)){
                _25509 = SEQ_PTR(_opt_49290)->length;
        }
        else {
            _25509 = 1;
        }
        // SubProg merge_parameters pc: 251 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_25510;
        RHS_Slice(_opt_49290, 2, _25509);
        // SubProg merge_parameters pc: 256 op: PROC (27)
        _25511 = _17lower(_25510);
        _25510 = NOVALUE;
        // SubProg merge_parameters pc: 260 op: CONCAT (15)
        if (IS_SEQUENCE(47) && IS_ATOM(_25511)) {
        }
        else if (IS_ATOM(47) && IS_SEQUENCE(_25511)) {
            Prepend(&_25512, _25511, 47);
        }
        else {
            Concat((object_ptr)&_25512, 47, _25511);
        }
        DeRef(_25511);
        _25511 = NOVALUE;
        // SubProg merge_parameters pc: 264 op: EQUAL (153)
        if (_25508 == _25512)
        _25513 = 1;
        else if (IS_ATOM_INT(_25508) && IS_ATOM_INT(_25512))
        _25513 = 0;
        else
        _25513 = (compare(_25508, _25512) == 0);
        DeRef(_25508);
        _25508 = NOVALUE;
        DeRefDS(_25512);
        _25512 = NOVALUE;
        // SubProg merge_parameters pc: 268 op: NOP1 (159)
        // SubProg merge_parameters pc: 269 op: IF (20)
        if (_25513 == 0)
        {
            _25513 = NOVALUE;
            goto LE; // [269] 283
        }
        else{
            _25513 = NOVALUE;
        }
        // SubProg merge_parameters pc: 272 op: NOP1 (159)
LD: // addr: 273 pc: 272 sub: 49280 op: 159
        // SubProg merge_parameters pc: 273 op: STARTLINE (58)

        /** cominit.e:232						bi = j*/
        // SubProg merge_parameters pc: 275 op: ASSIGN_I (113)
        _bi_49297 = _j_49322;
        // SubProg merge_parameters pc: 278 op: STARTLINE (58)

        /** cominit.e:233						exit*/
        // SubProg merge_parameters pc: 280 op: EXIT (61)
        goto LC; // [280] 290
        // SubProg merge_parameters pc: 282 op: NOP1 (159)
LE: // addr: 283 pc: 282 sub: 49280 op: 159
        // SubProg merge_parameters pc: 283 op: STARTLINE (58)

        /** cominit.e:235				end for*/
        // SubProg merge_parameters pc: 285 op: ENDFOR_INT_UP1 (54)
        _j_49322 = _j_49322 + 1;
        goto LB; // [285] 206
LC: // addr: 290 pc: 285 sub: 49280 op: 54
        ;
    }
    // SubProg merge_parameters pc: 290 op: NOP1 (159)
LA: // addr: 291 pc: 290 sub: 49280 op: 159
    // SubProg merge_parameters pc: 291 op: NOP1 (159)
L8: // addr: 292 pc: 291 sub: 49280 op: 159
    // SubProg merge_parameters pc: 292 op: STARTLINE (58)

    /** cominit.e:243			if length(this_opt) and not find(MULTIPLE, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49296)){
            _25514 = SEQ_PTR(_this_opt_49296)->length;
    }
    else {
        _25514 = 1;
    }
    // SubProg merge_parameters pc: 297 op: SC1_AND_IF (146)
    if (_25514 == 0) {
        goto LF; // [297] 451
    }
    // SubProg merge_parameters pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 303 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49296);
    _25516 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 307 op: FIND_FROM (176)
    _25517 = find_from(42, _25516, 1);
    _25516 = NOVALUE;
    // SubProg merge_parameters pc: 312 op: NOT (7)
    _25518 = (_25517 == 0);
    _25517 = NOVALUE;
    // SubProg merge_parameters pc: 315 op: NOP1 (159)
    // SubProg merge_parameters pc: 316 op: IF (20)
    if (_25518 == 0)
    {
        DeRef(_25518);
        _25518 = NOVALUE;
        goto LF; // [316] 451
    }
    else{
        DeRef(_25518);
        _25518 = NOVALUE;
    }
    // SubProg merge_parameters pc: 319 op: STARTLINE (58)

    /** cominit.e:244				if bi then*/
    // SubProg merge_parameters pc: 321 op: IF (20)
    if (_bi_49297 == 0)
    {
        goto L10; // [321] 365
    }
    else{
    }
    // SubProg merge_parameters pc: 324 op: STARTLINE (58)

    /** cominit.e:245					if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 328 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49296);
    _25519 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 332 op: FIND_FROM (176)
    _25520 = find_from(112, _25519, 1);
    _25519 = NOVALUE;
    // SubProg merge_parameters pc: 337 op: IF (20)
    if (_25520 == 0)
    {
        _25520 = NOVALUE;
        goto L11; // [337] 354
    }
    else{
        _25520 = NOVALUE;
    }
    // SubProg merge_parameters pc: 340 op: STARTLINE (58)

    /** cominit.e:247						a = remove(a, i, i + 1)*/
    // SubProg merge_parameters pc: 342 op: PLUS1 (93)
    _25521 = _i_49286 + 1;
    if (_25521 > MAXINT){
        _25521 = NewDouble((eudouble)_25521);
    }
    // SubProg merge_parameters pc: 346 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_a_49282);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49286)) ? _i_49286 : (object)(DBL_PTR(_i_49286)->dbl);
        int stop = (IS_ATOM_INT(_25521)) ? _25521 : (object)(DBL_PTR(_25521)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49282), start, &_a_49282 );
            }
            else Tail(SEQ_PTR(_a_49282), stop+1, &_a_49282);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49282), start, &_a_49282);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49282 = Remove_elements(start, stop, (SEQ_PTR(_a_49282)->ref == 1));
        }
    }
    DeRef(_25521);
    _25521 = NOVALUE;
    // SubProg merge_parameters pc: 351 op: ELSE (23)
    goto L12; // [351] 458
    // SubProg merge_parameters pc: 353 op: NOP1 (159)
L11: // addr: 354 pc: 353 sub: 49280 op: 159
    // SubProg merge_parameters pc: 354 op: STARTLINE (58)

    /** cominit.e:250						a = remove(a, i)*/
    // SubProg merge_parameters pc: 356 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_a_49282);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_49286)) ? _i_49286 : (object)(DBL_PTR(_i_49286)->dbl);
        int stop = (IS_ATOM_INT(_i_49286)) ? _i_49286 : (object)(DBL_PTR(_i_49286)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_a_49282), start, &_a_49282 );
            }
            else Tail(SEQ_PTR(_a_49282), stop+1, &_a_49282);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_a_49282), start, &_a_49282);
        }
        else {
            assign_slice_seq = &assign_space;
            _a_49282 = Remove_elements(start, stop, (SEQ_PTR(_a_49282)->ref == 1));
        }
    }
    // SubProg merge_parameters pc: 361 op: NOP1 (159)
    // SubProg merge_parameters pc: 362 op: ELSE (23)
    goto L12; // [362] 458
    // SubProg merge_parameters pc: 364 op: NOP1 (159)
L10: // addr: 365 pc: 364 sub: 49280 op: 159
    // SubProg merge_parameters pc: 365 op: STARTLINE (58)

    /** cominit.e:265					integer beginLen = length(a)*/
    // SubProg merge_parameters pc: 367 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49282)){
            _beginLen_49357 = SEQ_PTR(_a_49282)->length;
    }
    else {
        _beginLen_49357 = 1;
    }
    // SubProg merge_parameters pc: 370 op: STARTLINE (58)

    /** cominit.e:267					if dedupe = 0 and i < beginLen then*/
    // SubProg merge_parameters pc: 372 op: EQUALS (3)
    _25525 = (_dedupe_49285 == 0);
    // SubProg merge_parameters pc: 376 op: SC1_AND_IF (146)
    if (_25525 == 0) {
        goto L13; // [376] 438
    }
    // SubProg merge_parameters pc: 380 op: LESS (1)
    _25527 = (_i_49286 < _beginLen_49357);
    // SubProg merge_parameters pc: 384 op: NOP1 (159)
    // SubProg merge_parameters pc: 385 op: IF (20)
    if (_25527 == 0)
    {
        DeRef(_25527);
        _25527 = NOVALUE;
        goto L13; // [385] 438
    }
    else{
        DeRef(_25527);
        _25527 = NOVALUE;
    }
    // SubProg merge_parameters pc: 388 op: STARTLINE (58)

    /** cominit.e:268						a = merge_parameters( a[i + 1..$], a[1..i], opts, 1)*/
    // SubProg merge_parameters pc: 390 op: PLUS1 (93)
    _25528 = _i_49286 + 1;
    if (_25528 > MAXINT){
        _25528 = NewDouble((eudouble)_25528);
    }
    // SubProg merge_parameters pc: 394 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49282)){
            _25529 = SEQ_PTR(_a_49282)->length;
    }
    else {
        _25529 = 1;
    }
    // SubProg merge_parameters pc: 397 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25530;
    RHS_Slice(_a_49282, _25528, _25529);
    // SubProg merge_parameters pc: 402 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25531;
    RHS_Slice(_a_49282, 1, _i_49286);
    // SubProg merge_parameters pc: 407 op: ASSIGN (18)
    RefDS(_opts_49284);
    DeRef(_25532);
    _25532 = _opts_49284;
    // SubProg merge_parameters pc: 410 op: PROC (27)
    _0 = _a_49282;
    _a_49282 = _49merge_parameters(_25530, _25531, _25532, 1);
    DeRefDS(_0);
    _25530 = NOVALUE;
    _25531 = NOVALUE;
    _25532 = NOVALUE;
    // SubProg merge_parameters pc: 417 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 419 op: STARTLINE (58)

    /** cominit.e:270						if beginLen = length(a) then*/
    // SubProg merge_parameters pc: 421 op: LENGTH (42)
    if (IS_SEQUENCE(_a_49282)){
            _25534 = SEQ_PTR(_a_49282)->length;
    }
    else {
        _25534 = 1;
    }
    // SubProg merge_parameters pc: 424 op: EQUALS_IFW_I (121)
    if (_beginLen_49357 != _25534)
    goto L14; // [424] 445
    // SubProg merge_parameters pc: 428 op: STARTLINE (58)

    /** cominit.e:272							i += 1*/
    // SubProg merge_parameters pc: 430 op: PLUS1_I (117)
    _i_49286 = _i_49286 + 1;
    // SubProg merge_parameters pc: 434 op: NOP1 (159)
    // SubProg merge_parameters pc: 435 op: ELSE (23)
    goto L14; // [435] 445
    // SubProg merge_parameters pc: 437 op: NOP1 (159)
L13: // addr: 438 pc: 437 sub: 49280 op: 159
    // SubProg merge_parameters pc: 438 op: STARTLINE (58)

    /** cominit.e:276						i += 1*/
    // SubProg merge_parameters pc: 440 op: PLUS1_I (117)
    _i_49286 = _i_49286 + 1;
    // SubProg merge_parameters pc: 444 op: NOP1 (159)
L14: // addr: 445 pc: 444 sub: 49280 op: 159
    // SubProg merge_parameters pc: 445 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var beginLen_49357
    // SubProg merge_parameters pc: 447 op: NOP1 (159)
    // SubProg merge_parameters pc: 448 op: ELSE (23)
    goto L12; // [448] 458
    // SubProg merge_parameters pc: 450 op: NOP1 (159)
LF: // addr: 451 pc: 450 sub: 49280 op: 159
    // SubProg merge_parameters pc: 451 op: STARTLINE (58)

    /** cominit.e:282				i += 1*/
    // SubProg merge_parameters pc: 453 op: PLUS1_I (117)
    _i_49286 = _i_49286 + 1;
    // SubProg merge_parameters pc: 457 op: NOP1 (159)
L12: // addr: 458 pc: 457 sub: 49280 op: 159
    // SubProg merge_parameters pc: 458 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49290
    DeRef(_opt_49290);
    _opt_49290 = NOVALUE;

// block var this_opt_49296
    DeRef(_this_opt_49296);
    _this_opt_49296 = NOVALUE;

// block var bi_49297
    // SubProg merge_parameters pc: 460 op: STARTLINE (58)

    /** cominit.e:284		end while*/
    // SubProg merge_parameters pc: 462 op: ENDWHILE (22)
    goto L1; // [462] 19
    // SubProg merge_parameters pc: 464 op: NOP1 (159)
L2: // addr: 465 pc: 464 sub: 49280 op: 159
    // SubProg merge_parameters pc: 465 op: STARTLINE (58)

    /** cominit.e:286		if dedupe then*/
    // SubProg merge_parameters pc: 467 op: IF (20)
    if (_dedupe_49285 == 0)
    {
        goto L15; // [467] 481
    }
    else{
    }
    // SubProg merge_parameters pc: 470 op: STARTLINE (58)

    /** cominit.e:287			return b & a*/
    // SubProg merge_parameters pc: 472 op: CONCAT (15)
    Concat((object_ptr)&_25539, _b_49283, _a_49282);
    // SubProg merge_parameters pc: 476 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49282
    DeRefDS(_a_49282);

// block var b_49283
    DeRefDS(_b_49283);

// block var opts_49284
    DeRefDS(_opts_49284);

// block var dedupe_49285

// block var i_49286

// block var first_extra_49379
    DeRef(_25525);
    _25525 = NOVALUE;
    DeRef(_25491);
    _25491 = NOVALUE;
    DeRef(_25528);
    _25528 = NOVALUE;
    return _25539;
    // SubProg merge_parameters pc: 480 op: NOP1 (159)
L15: // addr: 481 pc: 480 sub: 49280 op: 159
    // SubProg merge_parameters pc: 481 op: STARTLINE (58)

    /** cominit.e:290		integer first_extra = 0*/
    // SubProg merge_parameters pc: 483 op: ASSIGN_I (113)
    _first_extra_49379 = 0;
    // SubProg merge_parameters pc: 486 op: STARTLINE (58)

    /** cominit.e:292		i = 1*/
    // SubProg merge_parameters pc: 488 op: ASSIGN_I (113)
    _i_49286 = 1;
    // SubProg merge_parameters pc: 491 op: STARTLINE (58)

    /** cominit.e:295		while i <= length(b) do*/
    // SubProg merge_parameters pc: 493 op: NOP2 (110)
    // SubProg merge_parameters pc: 495 op: NOPWHILE (158)
L16: // addr: 496 pc: 495 sub: 49280 op: 158
    // SubProg merge_parameters pc: 496 op: LENGTH (42)
    if (IS_SEQUENCE(_b_49283)){
            _25540 = SEQ_PTR(_b_49283)->length;
    }
    else {
        _25540 = 1;
    }
    // SubProg merge_parameters pc: 499 op: LESSEQ_IFW_I (123)
    if (_i_49286 > _25540)
    goto L17; // [499] 692
    // SubProg merge_parameters pc: 503 op: STARTLINE (58)

    /** cominit.e:296			sequence opt = b[i]*/
    // SubProg merge_parameters pc: 505 op: RHS_SUBS (25)
    DeRef(_opt_49383);
    _2 = (object)SEQ_PTR(_b_49283);
    _opt_49383 = (object)*(((s1_ptr)_2)->base + _i_49286);
    Ref(_opt_49383);
    // SubProg merge_parameters pc: 509 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 511 op: STARTLINE (58)

    /** cominit.e:299			if length(opt) <= 1 then*/
    // SubProg merge_parameters pc: 513 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49383)){
            _25543 = SEQ_PTR(_opt_49383)->length;
    }
    else {
        _25543 = 1;
    }
    // SubProg merge_parameters pc: 516 op: LESSEQ_IFW_I (123)
    if (_25543 > 1)
    goto L18; // [516] 532
    // SubProg merge_parameters pc: 520 op: STARTLINE (58)

    /** cominit.e:300				first_extra = i*/
    // SubProg merge_parameters pc: 522 op: ASSIGN_I (113)
    _first_extra_49379 = _i_49286;
    // SubProg merge_parameters pc: 525 op: STARTLINE (58)

    /** cominit.e:301				exit*/
    // SubProg merge_parameters pc: 527 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49383
    DeRefDS(_opt_49383);
    _opt_49383 = NOVALUE;

// block var this_opt_49388
    DeRef(_this_opt_49388);
    _this_opt_49388 = NOVALUE;
    // SubProg merge_parameters pc: 529 op: EXIT (61)
    goto L17; // [529] 692
    // SubProg merge_parameters pc: 531 op: NOP1 (159)
L18: // addr: 532 pc: 531 sub: 49280 op: 159
    // SubProg merge_parameters pc: 532 op: STARTLINE (58)

    /** cominit.e:304			sequence this_opt = {}*/
    // SubProg merge_parameters pc: 534 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_this_opt_49388);
    _this_opt_49388 = _21933;
    // SubProg merge_parameters pc: 537 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 539 op: STARTLINE (58)

    /** cominit.e:305			if opt[2] = '-' and opt[1] = '-' then*/
    // SubProg merge_parameters pc: 541 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49383);
    _25545 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg merge_parameters pc: 545 op: EQUALS (3)
    if (IS_ATOM_INT(_25545)) {
        _25546 = (_25545 == 45);
    }
    else {
        _25546 = binary_op(EQUALS, _25545, 45);
    }
    _25545 = NOVALUE;
    // SubProg merge_parameters pc: 549 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_25546)) {
        if (_25546 == 0) {
            goto L19; // [549] 586
        }
    }
    else {
        if (DBL_PTR(_25546)->dbl == 0.0) {
            goto L19; // [549] 586
        }
    }
    // SubProg merge_parameters pc: 553 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49383);
    _25548 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 557 op: EQUALS (3)
    if (IS_ATOM_INT(_25548)) {
        _25549 = (_25548 == 45);
    }
    else {
        _25549 = binary_op(EQUALS, _25548, 45);
    }
    _25548 = NOVALUE;
    // SubProg merge_parameters pc: 561 op: NOP1 (159)
    // SubProg merge_parameters pc: 562 op: IF (20)
    if (_25549 == 0) {
        DeRef(_25549);
        _25549 = NOVALUE;
        goto L19; // [562] 586
    }
    else {
        if (!IS_ATOM_INT(_25549) && DBL_PTR(_25549)->dbl == 0.0){
            DeRef(_25549);
            _25549 = NOVALUE;
            goto L19; // [562] 586
        }
        DeRef(_25549);
        _25549 = NOVALUE;
    }
    DeRef(_25549);
    _25549 = NOVALUE;
    // SubProg merge_parameters pc: 565 op: STARTLINE (58)

    /** cominit.e:306				this_opt = find_opt(LONGNAME, opt[3..$], opts)*/
    // SubProg merge_parameters pc: 567 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49383)){
            _25550 = SEQ_PTR(_opt_49383)->length;
    }
    else {
        _25550 = 1;
    }
    // SubProg merge_parameters pc: 570 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25551;
    RHS_Slice(_opt_49383, 3, _25550);
    // SubProg merge_parameters pc: 575 op: PROC (27)
    RefDS(_opts_49284);
    _0 = _this_opt_49388;
    _this_opt_49388 = _49find_opt(2, _25551, _opts_49284);
    DeRef(_0);
    _25551 = NOVALUE;
    // SubProg merge_parameters pc: 581 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 583 op: ELSE (23)
    goto L1A; // [583] 633
    // SubProg merge_parameters pc: 585 op: NOP1 (159)
L19: // addr: 586 pc: 585 sub: 49280 op: 159
    // SubProg merge_parameters pc: 586 op: STARTLINE (58)

    /** cominit.e:307			elsif opt[1] = '-' or opt[1] = '/' then*/
    // SubProg merge_parameters pc: 588 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49383);
    _25553 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 592 op: EQUALS (3)
    if (IS_ATOM_INT(_25553)) {
        _25554 = (_25553 == 45);
    }
    else {
        _25554 = binary_op(EQUALS, _25553, 45);
    }
    _25553 = NOVALUE;
    // SubProg merge_parameters pc: 596 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_25554)) {
        if (_25554 != 0) {
            goto L1B; // [596] 613
        }
    }
    else {
        if (DBL_PTR(_25554)->dbl != 0.0) {
            goto L1B; // [596] 613
        }
    }
    // SubProg merge_parameters pc: 600 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_opt_49383);
    _25556 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg merge_parameters pc: 604 op: EQUALS (3)
    if (IS_ATOM_INT(_25556)) {
        _25557 = (_25556 == 47);
    }
    else {
        _25557 = binary_op(EQUALS, _25556, 47);
    }
    _25556 = NOVALUE;
    // SubProg merge_parameters pc: 608 op: NOP1 (159)
    // SubProg merge_parameters pc: 609 op: IF (20)
    if (_25557 == 0) {
        DeRef(_25557);
        _25557 = NOVALUE;
        goto L1C; // [609] 632
    }
    else {
        if (!IS_ATOM_INT(_25557) && DBL_PTR(_25557)->dbl == 0.0){
            DeRef(_25557);
            _25557 = NOVALUE;
            goto L1C; // [609] 632
        }
        DeRef(_25557);
        _25557 = NOVALUE;
    }
    DeRef(_25557);
    _25557 = NOVALUE;
    // SubProg merge_parameters pc: 612 op: NOP1 (159)
L1B: // addr: 613 pc: 612 sub: 49280 op: 159
    // SubProg merge_parameters pc: 613 op: STARTLINE (58)

    /** cominit.e:308				this_opt = find_opt(SHORTNAME, opt[2..$], opts)*/
    // SubProg merge_parameters pc: 615 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_49383)){
            _25558 = SEQ_PTR(_opt_49383)->length;
    }
    else {
        _25558 = 1;
    }
    // SubProg merge_parameters pc: 618 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25559;
    RHS_Slice(_opt_49383, 2, _25558);
    // SubProg merge_parameters pc: 623 op: PROC (27)
    RefDS(_opts_49284);
    _0 = _this_opt_49388;
    _this_opt_49388 = _49find_opt(1, _25559, _opts_49284);
    DeRef(_0);
    _25559 = NOVALUE;
    // SubProg merge_parameters pc: 629 op: SEQUENCE_CHECK (97)
    // SubProg merge_parameters pc: 631 op: NOP1 (159)
L1C: // addr: 632 pc: 631 sub: 49280 op: 159
    // SubProg merge_parameters pc: 632 op: NOP1 (159)
L1A: // addr: 633 pc: 632 sub: 49280 op: 159
    // SubProg merge_parameters pc: 633 op: STARTLINE (58)

    /** cominit.e:311			if length(this_opt) then*/
    // SubProg merge_parameters pc: 635 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49388)){
            _25561 = SEQ_PTR(_this_opt_49388)->length;
    }
    else {
        _25561 = 1;
    }
    // SubProg merge_parameters pc: 638 op: IF (20)
    if (_25561 == 0)
    {
        _25561 = NOVALUE;
        goto L1D; // [638] 667
    }
    else{
        _25561 = NOVALUE;
    }
    // SubProg merge_parameters pc: 641 op: STARTLINE (58)

    /** cominit.e:312				if find(HAS_PARAMETER, this_opt[OPTIONS]) then*/
    // SubProg merge_parameters pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg merge_parameters pc: 645 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49388);
    _25562 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg merge_parameters pc: 649 op: FIND_FROM (176)
    _25563 = find_from(112, _25562, 1);
    _25562 = NOVALUE;
    // SubProg merge_parameters pc: 654 op: IF (20)
    if (_25563 == 0)
    {
        _25563 = NOVALUE;
        goto L1E; // [654] 679
    }
    else{
        _25563 = NOVALUE;
    }
    // SubProg merge_parameters pc: 657 op: STARTLINE (58)

    /** cominit.e:313					i += 1*/
    // SubProg merge_parameters pc: 659 op: PLUS1_I (117)
    _i_49286 = _i_49286 + 1;
    // SubProg merge_parameters pc: 663 op: NOP1 (159)
    // SubProg merge_parameters pc: 664 op: ELSE (23)
    goto L1E; // [664] 679
    // SubProg merge_parameters pc: 666 op: NOP1 (159)
L1D: // addr: 667 pc: 666 sub: 49280 op: 159
    // SubProg merge_parameters pc: 667 op: STARTLINE (58)

    /** cominit.e:316				first_extra = i*/
    // SubProg merge_parameters pc: 669 op: ASSIGN_I (113)
    _first_extra_49379 = _i_49286;
    // SubProg merge_parameters pc: 672 op: STARTLINE (58)

    /** cominit.e:317				exit*/
    // SubProg merge_parameters pc: 674 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49383
    DeRef(_opt_49383);
    _opt_49383 = NOVALUE;

// block var this_opt_49388
    DeRef(_this_opt_49388);
    _this_opt_49388 = NOVALUE;
    // SubProg merge_parameters pc: 676 op: EXIT (61)
    goto L17; // [676] 692
    // SubProg merge_parameters pc: 678 op: NOP1 (159)
L1E: // addr: 679 pc: 678 sub: 49280 op: 159
    // SubProg merge_parameters pc: 679 op: STARTLINE (58)

    /** cominit.e:320			i += 1*/
    // SubProg merge_parameters pc: 681 op: PLUS1_I (117)
    _i_49286 = _i_49286 + 1;
    // SubProg merge_parameters pc: 685 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var opt_49383
    DeRef(_opt_49383);
    _opt_49383 = NOVALUE;

// block var this_opt_49388
    DeRef(_this_opt_49388);
    _this_opt_49388 = NOVALUE;
    // SubProg merge_parameters pc: 687 op: STARTLINE (58)

    /** cominit.e:321		end while*/
    // SubProg merge_parameters pc: 689 op: ENDWHILE (22)
    goto L16; // [689] 496
    // SubProg merge_parameters pc: 691 op: NOP1 (159)
L17: // addr: 692 pc: 691 sub: 49280 op: 159
    // SubProg merge_parameters pc: 692 op: STARTLINE (58)

    /** cominit.e:323		if first_extra then*/
    // SubProg merge_parameters pc: 694 op: IF (20)
    if (_first_extra_49379 == 0)
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
        insert_pos = _first_extra_49379;
        if (insert_pos <= 0) {
            Concat(&_25566,_a_49282,_b_49283);
        }
        else if (insert_pos > SEQ_PTR(_b_49283)->length){
            Concat(&_25566,_b_49283,_a_49282);
        }
        else if (IS_SEQUENCE(_a_49282)) {
            if( _25566 != _b_49283 || SEQ_PTR( _b_49283 )->ref != 1 ){
                DeRef( _25566 );
                RefDS( _b_49283 );
            }
            assign_space = Add_internal_space( _b_49283, insert_pos,((s1_ptr)SEQ_PTR(_a_49282))->length);
            assign_slice_seq = &assign_space;
            assign_space = Copy_elements( insert_pos, SEQ_PTR(_a_49282), _b_49283 == _25566 );
            _25566 = MAKE_SEQ( assign_space );
        }
        else {
            if( _25566 != _b_49283 && SEQ_PTR( _b_49283 )->ref != 1 ){
                _25566 = Insert( _b_49283, _a_49282, insert_pos);
            }
            else {
                DeRef( _25566 );
                RefDS( _b_49283 );
                _25566 = Insert( _b_49283, _a_49282, insert_pos);
            }
        }
    }
    // SubProg merge_parameters pc: 704 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49282
    DeRefDS(_a_49282);

// block var b_49283
    DeRefDS(_b_49283);

// block var opts_49284
    DeRefDS(_opts_49284);

// block var dedupe_49285

// block var i_49286

// block var first_extra_49379
    DeRef(_25554);
    _25554 = NOVALUE;
    DeRef(_25525);
    _25525 = NOVALUE;
    DeRef(_25546);
    _25546 = NOVALUE;
    DeRef(_25539);
    _25539 = NOVALUE;
    DeRef(_25491);
    _25491 = NOVALUE;
    DeRef(_25528);
    _25528 = NOVALUE;
    return _25566;
    // SubProg merge_parameters pc: 708 op: NOP1 (159)
L1F: // addr: 709 pc: 708 sub: 49280 op: 159
    // SubProg merge_parameters pc: 709 op: STARTLINE (58)

    /** cominit.e:328		return b & a*/
    // SubProg merge_parameters pc: 711 op: CONCAT (15)
    Concat((object_ptr)&_25567, _b_49283, _a_49282);
    // SubProg merge_parameters pc: 715 op: RETURNF (28)

// Exiting block BLOCK: merge_parameters

// block var a_49282
    DeRefDS(_a_49282);

// block var b_49283
    DeRefDS(_b_49283);

// block var opts_49284
    DeRefDS(_opts_49284);

// block var dedupe_49285

// block var i_49286

// block var first_extra_49379
    DeRef(_25554);
    _25554 = NOVALUE;
    DeRef(_25566);
    _25566 = NOVALUE;
    DeRef(_25525);
    _25525 = NOVALUE;
    DeRef(_25546);
    _25546 = NOVALUE;
    DeRef(_25539);
    _25539 = NOVALUE;
    DeRef(_25491);
    _25491 = NOVALUE;
    DeRef(_25528);
    _25528 = NOVALUE;
    return _25567;
    // SubProg merge_parameters pc: 719 op: BADRETURNF (43)
    ;
}


object _49validate_opt(object _opt_type_49421, object _arg_49422, object _args_49423, object _ix_49424)
{
    object _opt_49425 = NOVALUE;
    object _this_opt_49433 = NOVALUE;
    object _25586 = NOVALUE; // 49455 25586
    object _25585 = NOVALUE; // 49454 25585
    object _25584 = NOVALUE; // 49452 25584
    object _25583 = NOVALUE; // 49451 25583
    object _25582 = NOVALUE; // 49449 25582
// skipping _25581  name type: 0
    object _25580 = NOVALUE; // 49445 25580
    object _25579 = NOVALUE; // 49444 25579
    object _25578 = NOVALUE; // 49442 25578
    object _25577 = NOVALUE; // 49441 25577
    object _25576 = NOVALUE; // 49438 25576
// skipping _25575  name type: 0
    object _25574 = NOVALUE; // 49436 25574
// skipping _25573  name type: 0
// skipping _25572  name type: 0
    object _25571 = NOVALUE; // 49431 25571
// skipping _25570  name type: 0
    object _25569 = NOVALUE; // 49428 25569
// skipping _25568  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg validate_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg validate_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 7 op: INTEGER_CHECK (96)
    // SubProg validate_opt pc: 9 op: STARTLINE (58)

    /** cominit.e:336		if opt_type = SHORTNAME then*/
    // SubProg validate_opt pc: 11 op: EQUALS_IFW_I (121)
    if (_opt_type_49421 != 1)
    goto L1; // [11] 28
    // SubProg validate_opt pc: 15 op: STARTLINE (58)

    /** cominit.e:337			opt = arg[2..$]*/
    // SubProg validate_opt pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49422)){
            _25569 = SEQ_PTR(_arg_49422)->length;
    }
    else {
        _25569 = 1;
    }
    // SubProg validate_opt pc: 20 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_opt_49425;
    RHS_Slice(_arg_49422, 2, _25569);
    // SubProg validate_opt pc: 25 op: ELSE (23)
    goto L2; // [25] 39
    // SubProg validate_opt pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 49419 op: 159
    // SubProg validate_opt pc: 28 op: STARTLINE (58)

    /** cominit.e:339			opt = arg[3..$]*/
    // SubProg validate_opt pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49422)){
            _25571 = SEQ_PTR(_arg_49422)->length;
    }
    else {
        _25571 = 1;
    }
    // SubProg validate_opt pc: 33 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_opt_49425;
    RHS_Slice(_arg_49422, 3, _25571);
    // SubProg validate_opt pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 49419 op: 159
    // SubProg validate_opt pc: 39 op: STARTLINE (58)

    /** cominit.e:342		sequence this_opt = find_opt( opt_type, opt, options )*/
    // SubProg validate_opt pc: 41 op: PRIVATE_INIT_CHECK (30)
    // SubProg validate_opt pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 45 op: PROC (27)
    RefDS(_opt_49425);
    RefDS(_49options_49163);
    _0 = _this_opt_49433;
    _this_opt_49433 = _49find_opt(_opt_type_49421, _opt_49425, _49options_49163);
    DeRef(_0);
    // SubProg validate_opt pc: 51 op: SEQUENCE_CHECK (97)
    // SubProg validate_opt pc: 53 op: STARTLINE (58)

    /** cominit.e:343		if not length( this_opt ) then*/
    // SubProg validate_opt pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_this_opt_49433)){
            _25574 = SEQ_PTR(_this_opt_49433)->length;
    }
    else {
        _25574 = 1;
    }
    // SubProg validate_opt pc: 58 op: NOT_IFW (108)
    if (_25574 != 0)
    goto L3; // [58] 72
    _25574 = NOVALUE;
    // SubProg validate_opt pc: 61 op: STARTLINE (58)

    /** cominit.e:345			return { 0, 0 }*/
    // SubProg validate_opt pc: 63 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _25576 = MAKE_SEQ(_1);
    // SubProg validate_opt pc: 67 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49421

// block var arg_49422
    DeRefDS(_arg_49422);

// block var args_49423
    DeRefDS(_args_49423);

// block var ix_49424

// block var opt_49425
    DeRefDS(_opt_49425);

// block var this_opt_49433
    DeRefDS(_this_opt_49433);
    return _25576;
    // SubProg validate_opt pc: 71 op: NOP1 (159)
L3: // addr: 72 pc: 71 sub: 49419 op: 159
    // SubProg validate_opt pc: 72 op: STARTLINE (58)

    /** cominit.e:348		if find( HAS_PARAMETER, this_opt[OPTIONS] ) then*/
    // SubProg validate_opt pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_this_opt_49433);
    _25577 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg validate_opt pc: 80 op: FIND_FROM (176)
    _25578 = find_from(112, _25577, 1);
    _25577 = NOVALUE;
    // SubProg validate_opt pc: 85 op: IF (20)
    if (_25578 == 0)
    {
        _25578 = NOVALUE;
        goto L4; // [85] 135
    }
    else{
        _25578 = NOVALUE;
    }
    // SubProg validate_opt pc: 88 op: STARTLINE (58)

    /** cominit.e:349			if ix = length( args ) - 1 then*/
    // SubProg validate_opt pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49423)){
            _25579 = SEQ_PTR(_args_49423)->length;
    }
    else {
        _25579 = 1;
    }
    // SubProg validate_opt pc: 93 op: MINUS (10)
    _25580 = _25579 - 1;
    _25579 = NOVALUE;
    // SubProg validate_opt pc: 97 op: EQUALS_IFW (104)
    if (_ix_49424 != _25580)
    goto L5; // [97] 117
    // SubProg validate_opt pc: 101 op: STARTLINE (58)

    /** cominit.e:351				CompileErr( MISSING_CMD_PARAMETER, { arg } )*/
    // SubProg validate_opt pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg validate_opt pc: 105 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_arg_49422);
    ((intptr_t*)_2)[1] = _arg_49422;
    _25582 = MAKE_SEQ(_1);
    // SubProg validate_opt pc: 109 op: PROC (27)
    _50CompileErr(353, _25582, 0);
    _25582 = NOVALUE;
    // SubProg validate_opt pc: 114 op: ELSE (23)
    goto L6; // [114] 150
    // SubProg validate_opt pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 49419 op: 159
    // SubProg validate_opt pc: 117 op: STARTLINE (58)

    /** cominit.e:353				return { ix, ix + 2 }*/
    // SubProg validate_opt pc: 119 op: PLUS (11)
    _25583 = _ix_49424 + 2;
    if ((object)((uintptr_t)_25583 + (uintptr_t)HIGH_BITS) >= 0){
        _25583 = NewDouble((eudouble)_25583);
    }
    // SubProg validate_opt pc: 123 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49424;
    ((intptr_t *)_2)[2] = _25583;
    _25584 = MAKE_SEQ(_1);
    _25583 = NOVALUE;
    // SubProg validate_opt pc: 127 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49421

// block var arg_49422
    DeRefDS(_arg_49422);

// block var args_49423
    DeRefDS(_args_49423);

// block var ix_49424

// block var opt_49425
    DeRef(_opt_49425);

// block var this_opt_49433
    DeRef(_this_opt_49433);
    DeRef(_25576);
    _25576 = NOVALUE;
    DeRef(_25580);
    _25580 = NOVALUE;
    return _25584;
    // SubProg validate_opt pc: 131 op: NOP1 (159)
    // SubProg validate_opt pc: 132 op: ELSE (23)
    goto L6; // [132] 150
    // SubProg validate_opt pc: 134 op: NOP1 (159)
L4: // addr: 135 pc: 134 sub: 49419 op: 159
    // SubProg validate_opt pc: 135 op: STARTLINE (58)

    /** cominit.e:356			return { ix, ix + 1 }*/
    // SubProg validate_opt pc: 137 op: PLUS1 (93)
    _25585 = _ix_49424 + 1;
    if (_25585 > MAXINT){
        _25585 = NewDouble((eudouble)_25585);
    }
    // SubProg validate_opt pc: 141 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _ix_49424;
    ((intptr_t *)_2)[2] = _25585;
    _25586 = MAKE_SEQ(_1);
    _25585 = NOVALUE;
    // SubProg validate_opt pc: 145 op: RETURNF (28)

// Exiting block BLOCK: validate_opt

// block var opt_type_49421

// block var arg_49422
    DeRefDS(_arg_49422);

// block var args_49423
    DeRefDS(_args_49423);

// block var ix_49424

// block var opt_49425
    DeRef(_opt_49425);

// block var this_opt_49433
    DeRef(_this_opt_49433);
    DeRef(_25584);
    _25584 = NOVALUE;
    DeRef(_25576);
    _25576 = NOVALUE;
    DeRef(_25580);
    _25580 = NOVALUE;
    return _25586;
    // SubProg validate_opt pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 49419 op: 159
    // SubProg validate_opt pc: 150 op: BADRETURNF (43)
    ;
}


object _49find_next_opt(object _ix_49458, object _args_49459)
{
    object _arg_49463 = NOVALUE;
    object _25608 = NOVALUE; // 49490 25608
    object _25607 = NOVALUE; // 49489 25607
// skipping _25606  name type: 0
    object _25605 = NOVALUE; // 49487 25605
    object _25604 = NOVALUE; // 49486 25604
    object _25603 = NOVALUE; // 49484 25603
    object _25602 = NOVALUE; // 49483 25602
    object _25601 = NOVALUE; // 49481 25601
    object _25600 = NOVALUE; // 49479 25600
    object _25599 = NOVALUE; // 49478 25599
    object _25598 = NOVALUE; // 49477 25598
// skipping _25597  name type: 0
    object _25596 = NOVALUE; // 49475 25596
// skipping _25595  name type: 0
    object _25594 = NOVALUE; // 49472 25594
// skipping _25593  name type: 0
    object _25592 = NOVALUE; // 49469 25592
// skipping _25591  name type: 0
    object _25590 = NOVALUE; // 49466 25590
// skipping _25589  name type: 0
// skipping _25588  name type: 0
    object _25587 = NOVALUE; // 49461 25587
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_next_opt pc: 1 op: INTEGER_CHECK (96)
    // SubProg find_next_opt pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg find_next_opt pc: 5 op: STARTLINE (58)

    /** cominit.e:374		while ix < length( args ) do*/
    // SubProg find_next_opt pc: 7 op: NOP2 (110)
    // SubProg find_next_opt pc: 9 op: NOPWHILE (158)
L1: // addr: 10 pc: 9 sub: 49456 op: 158
    // SubProg find_next_opt pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49459)){
            _25587 = SEQ_PTR(_args_49459)->length;
    }
    else {
        _25587 = 1;
    }
    // SubProg find_next_opt pc: 13 op: LESS_IFW_I (119)
    if (_ix_49458 >= _25587)
    goto L2; // [13] 157
    // SubProg find_next_opt pc: 17 op: STARTLINE (58)

    /** cominit.e:375			sequence arg = args[ix]*/
    // SubProg find_next_opt pc: 19 op: RHS_SUBS (25)
    DeRef(_arg_49463);
    _2 = (object)SEQ_PTR(_args_49459);
    _arg_49463 = (object)*(((s1_ptr)_2)->base + _ix_49458);
    Ref(_arg_49463);
    // SubProg find_next_opt pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg find_next_opt pc: 25 op: STARTLINE (58)

    /** cominit.e:376			if length( arg ) > 1 then*/
    // SubProg find_next_opt pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49463)){
            _25590 = SEQ_PTR(_arg_49463)->length;
    }
    else {
        _25590 = 1;
    }
    // SubProg find_next_opt pc: 30 op: GREATER_IFW_I (124)
    if (_25590 <= 1)
    goto L3; // [30] 129
    // SubProg find_next_opt pc: 34 op: STARTLINE (58)

    /** cominit.e:377				if arg[1] = '-' then*/
    // SubProg find_next_opt pc: 36 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_arg_49463);
    _25592 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_next_opt pc: 40 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25592, 45)){
        _25592 = NOVALUE;
        goto L4; // [40] 111
    }
    _25592 = NOVALUE;
    // SubProg find_next_opt pc: 44 op: STARTLINE (58)

    /** cominit.e:378					if arg[2] = '-' then*/
    // SubProg find_next_opt pc: 46 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_arg_49463);
    _25594 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg find_next_opt pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25594, 45)){
        _25594 = NOVALUE;
        goto L5; // [50] 94
    }
    _25594 = NOVALUE;
    // SubProg find_next_opt pc: 54 op: STARTLINE (58)

    /** cominit.e:380						if length( arg ) = 2 then*/
    // SubProg find_next_opt pc: 56 op: LENGTH (42)
    if (IS_SEQUENCE(_arg_49463)){
            _25596 = SEQ_PTR(_arg_49463)->length;
    }
    else {
        _25596 = 1;
    }
    // SubProg find_next_opt pc: 59 op: EQUALS_IFW_I (121)
    if (_25596 != 2)
    goto L6; // [59] 78
    // SubProg find_next_opt pc: 63 op: STARTLINE (58)

    /** cominit.e:382							return { 0, ix - 1 }*/
    // SubProg find_next_opt pc: 65 op: MINUS (10)
    _25598 = _ix_49458 - 1;
    if ((object)((uintptr_t)_25598 +(uintptr_t) HIGH_BITS) >= 0){
        _25598 = NewDouble((eudouble)_25598);
    }
    // SubProg find_next_opt pc: 69 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25598;
    _25599 = MAKE_SEQ(_1);
    _25598 = NOVALUE;
    // SubProg find_next_opt pc: 73 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49463
    DeRefDS(_arg_49463);

// Exiting block BLOCK: find_next_opt

// block var ix_49458

// block var args_49459
    DeRefDS(_args_49459);
    return _25599;
    // SubProg find_next_opt pc: 77 op: NOP1 (159)
L6: // addr: 78 pc: 77 sub: 49456 op: 159
    // SubProg find_next_opt pc: 78 op: STARTLINE (58)

    /** cominit.e:385						return validate_opt( LONGNAME, arg, args, ix )*/
    // SubProg find_next_opt pc: 80 op: PROC (27)
    RefDS(_arg_49463);
    RefDS(_args_49459);
    _25600 = _49validate_opt(2, _arg_49463, _args_49459, _ix_49458);
    // SubProg find_next_opt pc: 87 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49463
    DeRefDS(_arg_49463);

// Exiting block BLOCK: find_next_opt

// block var ix_49458

// block var args_49459
    DeRefDS(_args_49459);
    DeRef(_25599);
    _25599 = NOVALUE;
    return _25600;
    // SubProg find_next_opt pc: 91 op: ELSE (23)
    goto L7; // [91] 144
    // SubProg find_next_opt pc: 93 op: NOP1 (159)
L5: // addr: 94 pc: 93 sub: 49456 op: 159
    // SubProg find_next_opt pc: 94 op: STARTLINE (58)

    /** cominit.e:389						return validate_opt( SHORTNAME, arg, args, ix )*/
    // SubProg find_next_opt pc: 96 op: PROC (27)
    RefDS(_arg_49463);
    RefDS(_args_49459);
    _25601 = _49validate_opt(1, _arg_49463, _args_49459, _ix_49458);
    // SubProg find_next_opt pc: 103 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49463
    DeRefDS(_arg_49463);

// Exiting block BLOCK: find_next_opt

// block var ix_49458

// block var args_49459
    DeRefDS(_args_49459);
    DeRef(_25600);
    _25600 = NOVALUE;
    DeRef(_25599);
    _25599 = NOVALUE;
    return _25601;
    // SubProg find_next_opt pc: 107 op: NOP1 (159)
    // SubProg find_next_opt pc: 108 op: ELSE (23)
    goto L7; // [108] 144
    // SubProg find_next_opt pc: 110 op: NOP1 (159)
L4: // addr: 111 pc: 110 sub: 49456 op: 159
    // SubProg find_next_opt pc: 111 op: STARTLINE (58)

    /** cominit.e:393					return {0, ix-1}*/
    // SubProg find_next_opt pc: 113 op: MINUS (10)
    _25602 = _ix_49458 - 1;
    if ((object)((uintptr_t)_25602 +(uintptr_t) HIGH_BITS) >= 0){
        _25602 = NewDouble((eudouble)_25602);
    }
    // SubProg find_next_opt pc: 117 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25602;
    _25603 = MAKE_SEQ(_1);
    _25602 = NOVALUE;
    // SubProg find_next_opt pc: 121 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49463
    DeRef(_arg_49463);

// Exiting block BLOCK: find_next_opt

// block var ix_49458

// block var args_49459
    DeRefDS(_args_49459);
    DeRef(_25600);
    _25600 = NOVALUE;
    DeRef(_25599);
    _25599 = NOVALUE;
    DeRef(_25601);
    _25601 = NOVALUE;
    return _25603;
    // SubProg find_next_opt pc: 125 op: NOP1 (159)
    // SubProg find_next_opt pc: 126 op: ELSE (23)
    goto L7; // [126] 144
    // SubProg find_next_opt pc: 128 op: NOP1 (159)
L3: // addr: 129 pc: 128 sub: 49456 op: 159
    // SubProg find_next_opt pc: 129 op: STARTLINE (58)

    /** cominit.e:397				return { 0, ix-1 }*/
    // SubProg find_next_opt pc: 131 op: MINUS (10)
    _25604 = _ix_49458 - 1;
    if ((object)((uintptr_t)_25604 +(uintptr_t) HIGH_BITS) >= 0){
        _25604 = NewDouble((eudouble)_25604);
    }
    // SubProg find_next_opt pc: 135 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25604;
    _25605 = MAKE_SEQ(_1);
    _25604 = NOVALUE;
    // SubProg find_next_opt pc: 139 op: RETURNF (28)

// Exiting block BLOCK: WHILE-

// block var arg_49463
    DeRef(_arg_49463);

// Exiting block BLOCK: find_next_opt

// block var ix_49458

// block var args_49459
    DeRefDS(_args_49459);
    DeRef(_25603);
    _25603 = NOVALUE;
    DeRef(_25600);
    _25600 = NOVALUE;
    DeRef(_25599);
    _25599 = NOVALUE;
    DeRef(_25601);
    _25601 = NOVALUE;
    return _25605;
    // SubProg find_next_opt pc: 143 op: NOP1 (159)
L7: // addr: 144 pc: 143 sub: 49456 op: 159
    // SubProg find_next_opt pc: 144 op: STARTLINE (58)

    /** cominit.e:400			ix += 1*/
    // SubProg find_next_opt pc: 146 op: PLUS1_I (117)
    _ix_49458 = _ix_49458 + 1;
    // SubProg find_next_opt pc: 150 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var arg_49463
    DeRef(_arg_49463);
    _arg_49463 = NOVALUE;
    // SubProg find_next_opt pc: 152 op: STARTLINE (58)

    /** cominit.e:401		end while*/
    // SubProg find_next_opt pc: 154 op: ENDWHILE (22)
    goto L1; // [154] 10
    // SubProg find_next_opt pc: 156 op: NOP1 (159)
L2: // addr: 157 pc: 156 sub: 49456 op: 159
    // SubProg find_next_opt pc: 157 op: STARTLINE (58)

    /** cominit.e:402		return {0, ix-1}*/
    // SubProg find_next_opt pc: 159 op: MINUS (10)
    _25607 = _ix_49458 - 1;
    if ((object)((uintptr_t)_25607 +(uintptr_t) HIGH_BITS) >= 0){
        _25607 = NewDouble((eudouble)_25607);
    }
    // SubProg find_next_opt pc: 163 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _25607;
    _25608 = MAKE_SEQ(_1);
    _25607 = NOVALUE;
    // SubProg find_next_opt pc: 167 op: RETURNF (28)

// Exiting block BLOCK: find_next_opt

// block var ix_49458

// block var args_49459
    DeRefDS(_args_49459);
    DeRef(_25603);
    _25603 = NOVALUE;
    DeRef(_25605);
    _25605 = NOVALUE;
    DeRef(_25600);
    _25600 = NOVALUE;
    DeRef(_25599);
    _25599 = NOVALUE;
    DeRef(_25601);
    _25601 = NOVALUE;
    return _25608;
    // SubProg find_next_opt pc: 171 op: BADRETURNF (43)
    ;
}


object _49expand_config_options(object _args_49493)
{
    object _idx_49494 = NOVALUE;
    object _next_idx_49495 = NOVALUE;
    object _files_49496 = NOVALUE;
    object _cmd_1_2_49497 = NOVALUE;
    object _25631 = NOVALUE; // 49525 25631
    object _25630 = NOVALUE; // 49524 25630
    object _25629 = NOVALUE; // 49523 25629
    object _25628 = NOVALUE; // 49522 25628
    object _25627 = NOVALUE; // 49521 25627
    object _25626 = NOVALUE; // 49520 25626
    object _25625 = NOVALUE; // 49519 25625
    object _25624 = NOVALUE; // 49518 25624
    object _25623 = NOVALUE; // 49517 25623
// skipping _25622  name type: 0
// skipping _25621  name type: 0
// skipping _25620  name type: 0
// skipping _25619  name type: 0
    object _25618 = NOVALUE; // 49510 25618
// skipping _25617  name type: 0
    object _25616 = NOVALUE; // 49508 25616
    object _25615 = NOVALUE; // 49507 25615
    object _25614 = NOVALUE; // 49506 25614
    object _25612 = NOVALUE; // 49504 25612
    object _25611 = NOVALUE; // 49503 25611
// skipping _25610  name type: 0
// skipping _25609  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expand_config_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 3 op: STARTLINE (58)

    /** cominit.e:410		integer idx = 1*/
    // SubProg expand_config_options pc: 5 op: ASSIGN_I (113)
    _idx_49494 = 1;
    // SubProg expand_config_options pc: 8 op: STARTLINE (58)

    /** cominit.e:412		sequence files = {}*/
    // SubProg expand_config_options pc: 10 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_files_49496);
    _files_49496 = _21933;
    // SubProg expand_config_options pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 15 op: STARTLINE (58)

    /** cominit.e:413		sequence cmd_1_2 = args[1..2]*/
    // SubProg expand_config_options pc: 17 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_cmd_1_2_49497;
    RHS_Slice(_args_49493, 1, 2);
    // SubProg expand_config_options pc: 22 op: STARTLINE (58)

    /** cominit.e:414		args = remove( args, 1, 2 )*/
    // SubProg expand_config_options pc: 24 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_args_49493);
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
                Head( SEQ_PTR(_args_49493), start, &_args_49493 );
            }
            else Tail(SEQ_PTR(_args_49493), stop+1, &_args_49493);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49493), start, &_args_49493);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49493 = Remove_elements(start, stop, (SEQ_PTR(_args_49493)->ref == 1));
        }
    }
    // SubProg expand_config_options pc: 29 op: STARTLINE (58)

    /** cominit.e:416		while idx with entry do*/
    // SubProg expand_config_options pc: 31 op: ELSE (23)
    goto L1; // [31] 94
    // SubProg expand_config_options pc: 33 op: NOPWHILE (158)
L2: // addr: 34 pc: 33 sub: 49491 op: 158
    // SubProg expand_config_options pc: 34 op: WHILE (47)
    if (_idx_49494 == 0)
    {
        goto L3; // [34] 114
    }
    else{
    }
    // SubProg expand_config_options pc: 37 op: STARTLINE (58)

    /** cominit.e:417			if equal(upper(args[idx]), "-C") then*/
    // SubProg expand_config_options pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_args_49493);
    _25611 = (object)*(((s1_ptr)_2)->base + _idx_49494);
    // SubProg expand_config_options pc: 43 op: PROC (27)
    Ref(_25611);
    _25612 = _17upper(_25611);
    _25611 = NOVALUE;
    // SubProg expand_config_options pc: 47 op: EQUAL (153)
    if (_25612 == _25613)
    _25614 = 1;
    else if (IS_ATOM_INT(_25612) && IS_ATOM_INT(_25613))
    _25614 = 0;
    else
    _25614 = (compare(_25612, _25613) == 0);
    DeRef(_25612);
    _25612 = NOVALUE;
    // SubProg expand_config_options pc: 51 op: IF (20)
    if (_25614 == 0)
    {
        _25614 = NOVALUE;
        goto L4; // [51] 82
    }
    else{
        _25614 = NOVALUE;
    }
    // SubProg expand_config_options pc: 54 op: STARTLINE (58)

    /** cominit.e:418				files = append( files, args[idx+1] )*/
    // SubProg expand_config_options pc: 56 op: PLUS1 (93)
    _25615 = _idx_49494 + 1;
    // SubProg expand_config_options pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_args_49493);
    _25616 = (object)*(((s1_ptr)_2)->base + _25615);
    // SubProg expand_config_options pc: 64 op: APPEND (35)
    Ref(_25616);
    Append(&_files_49496, _files_49496, _25616);
    _25616 = NOVALUE;
    // SubProg expand_config_options pc: 68 op: STARTLINE (58)

    /** cominit.e:419				args = remove( args, idx, idx + 1 )*/
    // SubProg expand_config_options pc: 70 op: PLUS1 (93)
    _25618 = _idx_49494 + 1;
    if (_25618 > MAXINT){
        _25618 = NewDouble((eudouble)_25618);
    }
    // SubProg expand_config_options pc: 74 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_args_49493);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_idx_49494)) ? _idx_49494 : (object)(DBL_PTR(_idx_49494)->dbl);
        int stop = (IS_ATOM_INT(_25618)) ? _25618 : (object)(DBL_PTR(_25618)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_args_49493), start, &_args_49493 );
            }
            else Tail(SEQ_PTR(_args_49493), stop+1, &_args_49493);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_args_49493), start, &_args_49493);
        }
        else {
            assign_slice_seq = &assign_space;
            _args_49493 = Remove_elements(start, stop, (SEQ_PTR(_args_49493)->ref == 1));
        }
    }
    DeRef(_25618);
    _25618 = NOVALUE;
    // SubProg expand_config_options pc: 79 op: ELSE (23)
    goto L5; // [79] 91
    // SubProg expand_config_options pc: 81 op: NOP1 (159)
L4: // addr: 82 pc: 81 sub: 49491 op: 159
    // SubProg expand_config_options pc: 82 op: STARTLINE (58)

    /** cominit.e:422				idx = next_idx[2]*/
    // SubProg expand_config_options pc: 84 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_config_options pc: 86 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_next_idx_49495);
    _idx_49494 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_idx_49494))
    _idx_49494 = (object)DBL_PTR(_idx_49494)->dbl;
    // SubProg expand_config_options pc: 90 op: NOP1 (159)
L5: // addr: 91 pc: 90 sub: 49491 op: 159
    // SubProg expand_config_options pc: 91 op: STARTLINE (58)

    /** cominit.e:424		entry*/
    // SubProg expand_config_options pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 49491 op: 159
    // SubProg expand_config_options pc: 94 op: STARTLINE (58)

    /** cominit.e:425			next_idx = find_next_opt( idx, args )*/
    // SubProg expand_config_options pc: 96 op: PROC (27)
    RefDS(_args_49493);
    _0 = _next_idx_49495;
    _next_idx_49495 = _49find_next_opt(_idx_49494, _args_49493);
    DeRef(_0);
    // SubProg expand_config_options pc: 101 op: SEQUENCE_CHECK (97)
    // SubProg expand_config_options pc: 103 op: STARTLINE (58)

    /** cominit.e:426			idx = next_idx[1]*/
    // SubProg expand_config_options pc: 105 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_next_idx_49495);
    _idx_49494 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_idx_49494))
    _idx_49494 = (object)DBL_PTR(_idx_49494)->dbl;
    // SubProg expand_config_options pc: 109 op: STARTLINE (58)

    /** cominit.e:427		end while*/
    // SubProg expand_config_options pc: 111 op: ENDWHILE (22)
    goto L2; // [111] 34
    // SubProg expand_config_options pc: 113 op: NOP1 (159)
L3: // addr: 114 pc: 113 sub: 49491 op: 159
    // SubProg expand_config_options pc: 114 op: STARTLINE (58)

    /** cominit.e:428		return cmd_1_2 & merge_parameters( GetDefaultArgs( files ), args[1..next_idx[2]], options, 1 ) & args[next_idx[2]+1..$]*/
    // SubProg expand_config_options pc: 116 op: PROC (27)
    RefDS(_files_49496);
    _25623 = _48GetDefaultArgs(_files_49496);
    // SubProg expand_config_options pc: 120 op: PRIVATE_INIT_CHECK (30)
    // SubProg expand_config_options pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_next_idx_49495);
    _25624 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg expand_config_options pc: 126 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25625;
    RHS_Slice(_args_49493, 1, _25624);
    // SubProg expand_config_options pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg expand_config_options pc: 133 op: PROC (27)
    RefDS(_49options_49163);
    _25626 = _49merge_parameters(_25623, _25625, _49options_49163, 1);
    _25623 = NOVALUE;
    _25625 = NOVALUE;
    // SubProg expand_config_options pc: 140 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_next_idx_49495);
    _25627 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg expand_config_options pc: 144 op: PLUS1 (93)
    if (IS_ATOM_INT(_25627)) {
        _25628 = _25627 + 1;
        if (_25628 > MAXINT){
            _25628 = NewDouble((eudouble)_25628);
        }
    }
    else
    _25628 = binary_op(PLUS, 1, _25627);
    _25627 = NOVALUE;
    // SubProg expand_config_options pc: 148 op: LENGTH (42)
    if (IS_SEQUENCE(_args_49493)){
            _25629 = SEQ_PTR(_args_49493)->length;
    }
    else {
        _25629 = 1;
    }
    // SubProg expand_config_options pc: 151 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25630;
    RHS_Slice(_args_49493, _25628, _25629);
    // SubProg expand_config_options pc: 156 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _25630;
        concat_list[1] = _25626;
        concat_list[2] = _cmd_1_2_49497;
        Concat_N((object_ptr)&_25631, concat_list, 3);
    }
    DeRefDS(_25630);
    _25630 = NOVALUE;
    DeRef(_25626);
    _25626 = NOVALUE;
    // SubProg expand_config_options pc: 162 op: RETURNF (28)

// Exiting block BLOCK: expand_config_options

// block var args_49493
    DeRefDS(_args_49493);

// block var idx_49494

// block var next_idx_49495
    DeRefDS(_next_idx_49495);

// block var files_49496
    DeRefDS(_files_49496);

// block var cmd_1_2_49497
    DeRefDS(_cmd_1_2_49497);
    _25624 = NOVALUE;
    DeRef(_25628);
    _25628 = NOVALUE;
    DeRef(_25615);
    _25615 = NOVALUE;
    return _25631;
    // SubProg expand_config_options pc: 166 op: BADRETURNF (43)
    ;
}


void _49handle_common_options(object _opts_49528)
{
    object _opt_keys_49529 = NOVALUE;
    object _option_w_49531 = NOVALUE;
    object _key_49535 = NOVALUE;
    object _val_49537 = NOVALUE;
    object _this_warn_49583 = NOVALUE;
    object _auto_add_warn_49585 = NOVALUE;
    object _n_49591 = NOVALUE;
    object _this_warn_49614 = NOVALUE;
    object _auto_add_warn_49616 = NOVALUE;
    object _n_49622 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_615_49657 = NOVALUE;
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670 = NOVALUE;
    object _prompt_inlined_maybe_any_key_at_689_49669 = NOVALUE;
// skipping _25693  name type: 0
// skipping _25691  name type: 0
    object _25690 = NOVALUE; // 49689 25690
    object _25689 = NOVALUE; // 49686 25689
// skipping _25688  name type: 0
    object _25687 = NOVALUE; // 49681 25687
// skipping _25686  name type: 0
    object _25685 = NOVALUE; // 49677 25685
// skipping _25684  name type: 0
    object _25683 = NOVALUE; // 49667 25683
    object _25682 = NOVALUE; // 49665 25682
    object _25681 = NOVALUE; // 49663 25681
    object _25680 = NOVALUE; // 49662 25680
    object _25679 = NOVALUE; // 49655 25679
    object _25678 = NOVALUE; // 49653 25678
    object _25677 = NOVALUE; // 49651 25677
    object _25676 = NOVALUE; // 49650 25676
// skipping _25675  name type: 0
    object _25674 = NOVALUE; // 49640 25674
// skipping _25673  name type: 0
    object _25672 = NOVALUE; // 49634 25672
    object _25671 = NOVALUE; // 49633 25671
    object _25670 = NOVALUE; // 49629 25670
// skipping _25669  name type: 0
// skipping _25668  name type: 0
// skipping _25667  name type: 0
// skipping _25666  name type: 0
    object _25665 = NOVALUE; // 49620 25665
// skipping _25664  name type: 0
    object _25663 = NOVALUE; // 49618 25663
// skipping _25662  name type: 0
    object _25661 = NOVALUE; // 49613 25661
// skipping _25660  name type: 0
// skipping _25659  name type: 0
    object _25658 = NOVALUE; // 49602 25658
    object _25657 = NOVALUE; // 49598 25657
// skipping _25656  name type: 0
// skipping _25655  name type: 0
// skipping _25654  name type: 0
// skipping _25653  name type: 0
    object _25652 = NOVALUE; // 49589 25652
// skipping _25651  name type: 0
    object _25650 = NOVALUE; // 49587 25650
// skipping _25649  name type: 0
    object _25648 = NOVALUE; // 49582 25648
// skipping _25647  name type: 0
    object _25646 = NOVALUE; // 49575 25646
    object _25645 = NOVALUE; // 49573 25645
    object _25644 = NOVALUE; // 49572 25644
    object _25643 = NOVALUE; // 49567 25643
    object _25642 = NOVALUE; // 49561 25642
    object _25641 = NOVALUE; // 49559 25641
// skipping _25640  name type: 0
    object _25639 = NOVALUE; // 49546 25639
    object _25638 = NOVALUE; // 49544 25638
// skipping _25635  name type: 0
// skipping _25634  name type: 0
    object _25633 = NOVALUE; // 49534 25633
// skipping _25632  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg handle_common_options pc: 1 op: STARTLINE (58)

    /** cominit.e:435		sequence opt_keys = m:keys(opts)*/
    // SubProg handle_common_options pc: 3 op: PROC (27)
    Ref(_opts_49528);
    _0 = _opt_keys_49529;
    _opt_keys_49529 = _29keys(_opts_49528, 0);
    DeRef(_0);
    // SubProg handle_common_options pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg handle_common_options pc: 10 op: STARTLINE (58)

    /** cominit.e:436		integer option_w = 0*/
    // SubProg handle_common_options pc: 12 op: ASSIGN_I (113)
    _option_w_49531 = 0;
    // SubProg handle_common_options pc: 15 op: STARTLINE (58)

    /** cominit.e:438		for idx = 1 to length(opt_keys) do*/
    // SubProg handle_common_options pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_opt_keys_49529)){
            _25633 = SEQ_PTR(_opt_keys_49529)->length;
    }
    else {
        _25633 = 1;
    }
    // SubProg handle_common_options pc: 20 op: FOR_I (125)
    {
        object _idx_49533;
        _idx_49533 = 1;
L1: // addr: 27 pc: 20 sub: 49526 op: 125
        if (_idx_49533 > _25633){
            goto L2; // [20] 791
        }
        // SubProg handle_common_options pc: 27 op: STARTLINE (58)

        /** cominit.e:439			sequence key = opt_keys[idx]*/
        // SubProg handle_common_options pc: 29 op: RHS_SUBS (25)
        DeRef(_key_49535);
        _2 = (object)SEQ_PTR(_opt_keys_49529);
        _key_49535 = (object)*(((s1_ptr)_2)->base + _idx_49533);
        Ref(_key_49535);
        // SubProg handle_common_options pc: 33 op: SEQUENCE_CHECK (97)
        // SubProg handle_common_options pc: 35 op: STARTLINE (58)

        /** cominit.e:440			object val = m:get(opts, key)*/
        // SubProg handle_common_options pc: 37 op: PROC (27)
        Ref(_opts_49528);
        RefDS(_key_49535);
        _0 = _val_49537;
        _val_49537 = _29get(_opts_49528, _key_49535, 0);
        DeRef(_0);
        // SubProg handle_common_options pc: 43 op: STARTLINE (58)

        /** cominit.e:442			switch key do*/
        // SubProg handle_common_options pc: 45 op: SWITCH (185)
        _1 = find(_key_49535, _25636);
        switch ( _1 ){ 
            // SubProg handle_common_options pc: 50 op: STARTLINE (58)

            /** cominit.e:443				case "i" then*/
            // SubProg handle_common_options pc: 52 op: CASE (186)
            case 1:
            // SubProg handle_common_options pc: 54 op: STARTLINE (58)

            /** cominit.e:444					for i = 1 to length(val) do*/
            // SubProg handle_common_options pc: 56 op: LENGTH (42)
            if (IS_SEQUENCE(_val_49537)){
                    _25638 = SEQ_PTR(_val_49537)->length;
            }
            else {
                _25638 = 1;
            }
            // SubProg handle_common_options pc: 59 op: FOR_I (125)
            {
                object _i_49543;
                _i_49543 = 1;
L3: // addr: 66 pc: 59 sub: 49526 op: 125
                if (_i_49543 > _25638){
                    goto L4; // [59] 82
                }
                // SubProg handle_common_options pc: 66 op: STARTLINE (58)

                /** cominit.e:445						add_include_directory(val[i])*/
                // SubProg handle_common_options pc: 68 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49537);
                _25639 = (object)*(((s1_ptr)_2)->base + _i_49543);
                // SubProg handle_common_options pc: 72 op: PROC (27)
                Ref(_25639);
                _48add_include_directory(_25639);
                _25639 = NOVALUE;
                // SubProg handle_common_options pc: 75 op: STARTLINE (58)

                /** cominit.e:446					end for*/
                // SubProg handle_common_options pc: 77 op: ENDFOR_INT_UP1 (54)
                _i_49543 = _i_49543 + 1;
                goto L3; // [77] 66
L4: // addr: 82 pc: 77 sub: 49526 op: 54
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
            if (IS_SEQUENCE(_36OpDefines_16509) && IS_ATOM(_val_49537)) {
                Ref(_val_49537);
                Append(&_36OpDefines_16509, _36OpDefines_16509, _val_49537);
            }
            else if (IS_ATOM(_36OpDefines_16509) && IS_SEQUENCE(_val_49537)) {
            }
            else {
                Concat((object_ptr)&_36OpDefines_16509, _36OpDefines_16509, _val_49537);
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
            _36batch_job_16449 = 1;
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
            _36test_only_16448 = 1;
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
            _36Strict_is_on_16501 = 1;
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
            if (IS_SEQUENCE(_val_49537)){
                    _25641 = SEQ_PTR(_val_49537)->length;
            }
            else {
                _25641 = 1;
            }
            // SubProg handle_common_options pc: 148 op: FOR_I (125)
            {
                object _i_49558;
                _i_49558 = 1;
L6: // addr: 155 pc: 148 sub: 49526 op: 125
                if (_i_49558 > _25641){
                    goto L7; // [148] 173
                }
                // SubProg handle_common_options pc: 155 op: STARTLINE (58)

                /** cominit.e:462						add_preprocessor(val[i])*/
                // SubProg handle_common_options pc: 157 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49537);
                _25642 = (object)*(((s1_ptr)_2)->base + _i_49558);
                // SubProg handle_common_options pc: 161 op: PROC (27)
                Ref(_25642);
                _64add_preprocessor(_25642, 0, 0);
                _25642 = NOVALUE;
                // SubProg handle_common_options pc: 166 op: STARTLINE (58)

                /** cominit.e:463					end for*/
                // SubProg handle_common_options pc: 168 op: ENDFOR_INT_UP1 (54)
                _i_49558 = _i_49558 + 1;
                goto L6; // [168] 155
L7: // addr: 173 pc: 168 sub: 49526 op: 54
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
            _37force_preprocessor_15423 = 1;
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
            if (IS_SEQUENCE(_val_49537)){
                    _25643 = SEQ_PTR(_val_49537)->length;
            }
            else {
                _25643 = 1;
            }
            // SubProg handle_common_options pc: 197 op: FOR_I (125)
            {
                object _i_49566;
                _i_49566 = 1;
L8: // addr: 204 pc: 197 sub: 49526 op: 125
                if (_i_49566 > _25643){
                    goto L9; // [197] 238
                }
                // SubProg handle_common_options pc: 204 op: STARTLINE (58)

                /** cominit.e:470						LocalizeQual = append(LocalizeQual, (filter(lower(val[i]), STDFLTR_ALPHA)))*/
                // SubProg handle_common_options pc: 206 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 208 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_val_49537);
                _25644 = (object)*(((s1_ptr)_2)->base + _i_49566);
                // SubProg handle_common_options pc: 212 op: PROC (27)
                Ref(_25644);
                _25645 = _17lower(_25644);
                _25644 = NOVALUE;
                // SubProg handle_common_options pc: 216 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 218 op: PROC (27)
                RefDS(_21933);
                RefDS(_5);
                _25646 = _23filter(_25645, _23STDFLTR_ALPHA_5211, _21933, _5);
                _25645 = NOVALUE;
                // SubProg handle_common_options pc: 225 op: APPEND (35)
                Ref(_25646);
                Append(&_37LocalizeQual_15424, _37LocalizeQual_15424, _25646);
                DeRef(_25646);
                _25646 = NOVALUE;
                // SubProg handle_common_options pc: 229 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 231 op: STARTLINE (58)

                /** cominit.e:471					end for*/
                // SubProg handle_common_options pc: 233 op: ENDFOR_INT_UP1 (54)
                _i_49566 = _i_49566 + 1;
                goto L8; // [233] 204
L9: // addr: 238 pc: 233 sub: 49526 op: 54
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
            Ref(_val_49537);
            DeRef(_37LocalDB_15425);
            _37LocalDB_15425 = _val_49537;
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
            if (IS_SEQUENCE(_val_49537)){
                    _25648 = SEQ_PTR(_val_49537)->length;
            }
            else {
                _25648 = 1;
            }
            // SubProg handle_common_options pc: 262 op: FOR_I (125)
            {
                object _i_49581;
                _i_49581 = 1;
LA: // addr: 269 pc: 262 sub: 49526 op: 125
                if (_i_49581 > _25648){
                    goto LB; // [262] 392
                }
                // SubProg handle_common_options pc: 269 op: STARTLINE (58)

                /** cominit.e:478						sequence this_warn = val[i]*/
                // SubProg handle_common_options pc: 271 op: RHS_SUBS_CHECK (92)
                DeRef(_this_warn_49583);
                _2 = (object)SEQ_PTR(_val_49537);
                _this_warn_49583 = (object)*(((s1_ptr)_2)->base + _i_49581);
                Ref(_this_warn_49583);
                // SubProg handle_common_options pc: 275 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 277 op: STARTLINE (58)

                /** cominit.e:479						integer auto_add_warn = 0*/
                // SubProg handle_common_options pc: 279 op: ASSIGN_I (113)
                _auto_add_warn_49585 = 0;
                // SubProg handle_common_options pc: 282 op: STARTLINE (58)

                /** cominit.e:480						if this_warn[1] = '+' then*/
                // SubProg handle_common_options pc: 284 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_this_warn_49583);
                _25650 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg handle_common_options pc: 288 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _25650, 43)){
                    _25650 = NOVALUE;
                    goto LC; // [288] 308
                }
                _25650 = NOVALUE;
                // SubProg handle_common_options pc: 292 op: STARTLINE (58)

                /** cominit.e:481							auto_add_warn = 1*/
                // SubProg handle_common_options pc: 294 op: ASSIGN_I (113)
                _auto_add_warn_49585 = 1;
                // SubProg handle_common_options pc: 297 op: STARTLINE (58)

                /** cominit.e:482							this_warn = this_warn[2 .. $]*/
                // SubProg handle_common_options pc: 299 op: LENGTH (42)
                if (IS_SEQUENCE(_this_warn_49583)){
                        _25652 = SEQ_PTR(_this_warn_49583)->length;
                }
                else {
                    _25652 = 1;
                }
                // SubProg handle_common_options pc: 302 op: RHS_SLICE (46)
                rhs_slice_target = (object_ptr)&_this_warn_49583;
                RHS_Slice(_this_warn_49583, 2, _25652);
                // SubProg handle_common_options pc: 307 op: NOP1 (159)
LC: // addr: 308 pc: 307 sub: 49526 op: 159
                // SubProg handle_common_options pc: 308 op: STARTLINE (58)

                /** cominit.e:484						integer n = find(this_warn, warning_names)*/
                // SubProg handle_common_options pc: 310 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 312 op: FIND_FROM (176)
                _n_49591 = find_from(_this_warn_49583, _36warning_names_16480, 1);
                // SubProg handle_common_options pc: 317 op: STARTLINE (58)

                /** cominit.e:485						if n != 0 then*/
                // SubProg handle_common_options pc: 319 op: NOTEQ_IFW_I (122)
                if (_n_49591 == 0)
                goto LD; // [319] 383
                // SubProg handle_common_options pc: 323 op: STARTLINE (58)

                /** cominit.e:486							if auto_add_warn or option_w = 1 then*/
                // SubProg handle_common_options pc: 325 op: SC1_OR_IF (147)
                if (_auto_add_warn_49585 != 0) {
                    goto LE; // [325] 338
                }
                // SubProg handle_common_options pc: 329 op: EQUALS (3)
                _25657 = (_option_w_49531 == 1);
                // SubProg handle_common_options pc: 333 op: NOP1 (159)
                // SubProg handle_common_options pc: 334 op: IF (20)
                if (_25657 == 0)
                {
                    DeRef(_25657);
                    _25657 = NOVALUE;
                    goto LF; // [334] 357
                }
                else{
                    DeRef(_25657);
                    _25657 = NOVALUE;
                }
                // SubProg handle_common_options pc: 337 op: NOP1 (159)
LE: // addr: 338 pc: 337 sub: 49526 op: 159
                // SubProg handle_common_options pc: 338 op: STARTLINE (58)

                /** cominit.e:487								OpWarning = or_bits(OpWarning, warning_flags[n])*/
                // SubProg handle_common_options pc: 340 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 342 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 344 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_36warning_flags_16478);
                _25658 = (object)*(((s1_ptr)_2)->base + _n_49591);
                // SubProg handle_common_options pc: 348 op: OR_BITS (24)
                {uintptr_t tu;
                     tu = (uintptr_t)_36OpWarning_16503 | (uintptr_t)_25658;
                     _36OpWarning_16503 = MAKE_UINT(tu);
                }
                _25658 = NOVALUE;
                // SubProg handle_common_options pc: 352 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_36OpWarning_16503)) {
                    _1 = (object)(DBL_PTR(_36OpWarning_16503)->dbl);
                    DeRefDS(_36OpWarning_16503);
                    _36OpWarning_16503 = _1;
                }
                // SubProg handle_common_options pc: 354 op: ELSE (23)
                goto L10; // [354] 373
                // SubProg handle_common_options pc: 356 op: NOP1 (159)
LF: // addr: 357 pc: 356 sub: 49526 op: 159
                // SubProg handle_common_options pc: 357 op: STARTLINE (58)

                /** cominit.e:489								option_w = 1*/
                // SubProg handle_common_options pc: 359 op: ASSIGN_I (113)
                _option_w_49531 = 1;
                // SubProg handle_common_options pc: 362 op: STARTLINE (58)

                /** cominit.e:490								OpWarning = warning_flags[n]*/
                // SubProg handle_common_options pc: 364 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 366 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_36warning_flags_16478);
                _36OpWarning_16503 = (object)*(((s1_ptr)_2)->base + _n_49591);
                // SubProg handle_common_options pc: 372 op: NOP1 (159)
L10: // addr: 373 pc: 372 sub: 49526 op: 159
                // SubProg handle_common_options pc: 373 op: STARTLINE (58)

                /** cominit.e:493							prev_OpWarning = OpWarning*/
                // SubProg handle_common_options pc: 375 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 377 op: ASSIGN (18)
                _36prev_OpWarning_16504 = _36OpWarning_16503;
                // SubProg handle_common_options pc: 380 op: INTEGER_CHECK (96)
                // SubProg handle_common_options pc: 382 op: NOP1 (159)
LD: // addr: 383 pc: 382 sub: 49526 op: 159
                // SubProg handle_common_options pc: 383 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var this_warn_49583
                DeRef(_this_warn_49583);
                _this_warn_49583 = NOVALUE;

// block var auto_add_warn_49585

// block var n_49591
                // SubProg handle_common_options pc: 385 op: STARTLINE (58)

                /** cominit.e:495					end for*/
                // SubProg handle_common_options pc: 387 op: ENDFOR_INT_UP1 (54)
                _i_49581 = _i_49581 + 1;
                goto LA; // [387] 269
LB: // addr: 392 pc: 387 sub: 49526 op: 54
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
            if (IS_SEQUENCE(_val_49537)){
                    _25661 = SEQ_PTR(_val_49537)->length;
            }
            else {
                _25661 = 1;
            }
            // SubProg handle_common_options pc: 403 op: FOR_I (125)
            {
                object _i_49612;
                _i_49612 = 1;
L11: // addr: 410 pc: 403 sub: 49526 op: 125
                if (_i_49612 > _25661){
                    goto L12; // [403] 542
                }
                // SubProg handle_common_options pc: 410 op: STARTLINE (58)

                /** cominit.e:499						sequence this_warn = val[i]*/
                // SubProg handle_common_options pc: 412 op: RHS_SUBS_CHECK (92)
                DeRef(_this_warn_49614);
                _2 = (object)SEQ_PTR(_val_49537);
                _this_warn_49614 = (object)*(((s1_ptr)_2)->base + _i_49612);
                Ref(_this_warn_49614);
                // SubProg handle_common_options pc: 416 op: SEQUENCE_CHECK (97)
                // SubProg handle_common_options pc: 418 op: STARTLINE (58)

                /** cominit.e:500						integer auto_add_warn = 0*/
                // SubProg handle_common_options pc: 420 op: ASSIGN_I (113)
                _auto_add_warn_49616 = 0;
                // SubProg handle_common_options pc: 423 op: STARTLINE (58)

                /** cominit.e:501						if this_warn[1] = '+' then*/
                // SubProg handle_common_options pc: 425 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_this_warn_49614);
                _25663 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg handle_common_options pc: 429 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _25663, 43)){
                    _25663 = NOVALUE;
                    goto L13; // [429] 449
                }
                _25663 = NOVALUE;
                // SubProg handle_common_options pc: 433 op: STARTLINE (58)

                /** cominit.e:502							auto_add_warn = 1*/
                // SubProg handle_common_options pc: 435 op: ASSIGN_I (113)
                _auto_add_warn_49616 = 1;
                // SubProg handle_common_options pc: 438 op: STARTLINE (58)

                /** cominit.e:503							this_warn = this_warn[2 .. $]*/
                // SubProg handle_common_options pc: 440 op: LENGTH (42)
                if (IS_SEQUENCE(_this_warn_49614)){
                        _25665 = SEQ_PTR(_this_warn_49614)->length;
                }
                else {
                    _25665 = 1;
                }
                // SubProg handle_common_options pc: 443 op: RHS_SLICE (46)
                rhs_slice_target = (object_ptr)&_this_warn_49614;
                RHS_Slice(_this_warn_49614, 2, _25665);
                // SubProg handle_common_options pc: 448 op: NOP1 (159)
L13: // addr: 449 pc: 448 sub: 49526 op: 159
                // SubProg handle_common_options pc: 449 op: STARTLINE (58)

                /** cominit.e:505						integer n = find(this_warn, warning_names)*/
                // SubProg handle_common_options pc: 451 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 453 op: FIND_FROM (176)
                _n_49622 = find_from(_this_warn_49614, _36warning_names_16480, 1);
                // SubProg handle_common_options pc: 458 op: STARTLINE (58)

                /** cominit.e:506						if n != 0 then*/
                // SubProg handle_common_options pc: 460 op: NOTEQ_IFW_I (122)
                if (_n_49622 == 0)
                goto L14; // [460] 533
                // SubProg handle_common_options pc: 464 op: STARTLINE (58)

                /** cominit.e:507							if auto_add_warn or option_w = -1 then*/
                // SubProg handle_common_options pc: 466 op: SC1_OR_IF (147)
                if (_auto_add_warn_49616 != 0) {
                    goto L15; // [466] 479
                }
                // SubProg handle_common_options pc: 470 op: EQUALS (3)
                _25670 = (_option_w_49531 == -1);
                // SubProg handle_common_options pc: 474 op: NOP1 (159)
                // SubProg handle_common_options pc: 475 op: IF (20)
                if (_25670 == 0)
                {
                    DeRef(_25670);
                    _25670 = NOVALUE;
                    goto L16; // [475] 501
                }
                else{
                    DeRef(_25670);
                    _25670 = NOVALUE;
                }
                // SubProg handle_common_options pc: 478 op: NOP1 (159)
L15: // addr: 479 pc: 478 sub: 49526 op: 159
                // SubProg handle_common_options pc: 479 op: STARTLINE (58)

                /** cominit.e:508								OpWarning = and_bits(OpWarning, not_bits(warning_flags[n]))*/
                // SubProg handle_common_options pc: 481 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 483 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 485 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_36warning_flags_16478);
                _25671 = (object)*(((s1_ptr)_2)->base + _n_49622);
                // SubProg handle_common_options pc: 489 op: NOT_BITS (51)
                _25672 = not_bits(_25671);
                _25671 = NOVALUE;
                // SubProg handle_common_options pc: 492 op: AND_BITS (56)
                if (IS_ATOM_INT(_25672)) {
                    {uintptr_t tu;
                         tu = (uintptr_t)_36OpWarning_16503 & (uintptr_t)_25672;
                         _36OpWarning_16503 = MAKE_UINT(tu);
                    }
                }
                else {
                    temp_d.dbl = (eudouble)_36OpWarning_16503;
                    _36OpWarning_16503 = Dand_bits(&temp_d, DBL_PTR(_25672));
                }
                DeRef(_25672);
                _25672 = NOVALUE;
                // SubProg handle_common_options pc: 496 op: INTEGER_CHECK (96)
                if (!IS_ATOM_INT(_36OpWarning_16503)) {
                    _1 = (object)(DBL_PTR(_36OpWarning_16503)->dbl);
                    DeRefDS(_36OpWarning_16503);
                    _36OpWarning_16503 = _1;
                }
                // SubProg handle_common_options pc: 498 op: ELSE (23)
                goto L17; // [498] 523
                // SubProg handle_common_options pc: 500 op: NOP1 (159)
L16: // addr: 501 pc: 500 sub: 49526 op: 159
                // SubProg handle_common_options pc: 501 op: STARTLINE (58)

                /** cominit.e:510								option_w = -1*/
                // SubProg handle_common_options pc: 503 op: ASSIGN_I (113)
                _option_w_49531 = -1;
                // SubProg handle_common_options pc: 506 op: STARTLINE (58)

                /** cominit.e:511								OpWarning = all_warning_flag - warning_flags[n]*/
                // SubProg handle_common_options pc: 508 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 510 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 512 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_36warning_flags_16478);
                _25674 = (object)*(((s1_ptr)_2)->base + _n_49622);
                // SubProg handle_common_options pc: 516 op: MINUS (10)
                _36OpWarning_16503 = 32767 - _25674;
                _25674 = NOVALUE;
                // SubProg handle_common_options pc: 522 op: NOP1 (159)
L17: // addr: 523 pc: 522 sub: 49526 op: 159
                // SubProg handle_common_options pc: 523 op: STARTLINE (58)

                /** cominit.e:514							prev_OpWarning = OpWarning*/
                // SubProg handle_common_options pc: 525 op: GLOBAL_INIT_CHECK (109)
                // SubProg handle_common_options pc: 527 op: ASSIGN (18)
                _36prev_OpWarning_16504 = _36OpWarning_16503;
                // SubProg handle_common_options pc: 530 op: INTEGER_CHECK (96)
                // SubProg handle_common_options pc: 532 op: NOP1 (159)
L14: // addr: 533 pc: 532 sub: 49526 op: 159
                // SubProg handle_common_options pc: 533 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var this_warn_49614
                DeRef(_this_warn_49614);
                _this_warn_49614 = NOVALUE;

// block var auto_add_warn_49616

// block var n_49622
                // SubProg handle_common_options pc: 535 op: STARTLINE (58)

                /** cominit.e:516					end for*/
                // SubProg handle_common_options pc: 537 op: ENDFOR_INT_UP1 (54)
                _i_49612 = _i_49612 + 1;
                goto L11; // [537] 410
L12: // addr: 542 pc: 537 sub: 49526 op: 54
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
            Ref(_val_49537);
            DeRef(_36TempWarningName_16450);
            _36TempWarningName_16450 = _val_49537;
            // SubProg handle_common_options pc: 553 op: STARTLINE (58)

            /** cominit.e:520				  	error:warning_file(TempWarningName)*/
            // SubProg handle_common_options pc: 555 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 557 op: PROC (27)
            Ref(_36TempWarningName_16450);
            _7warning_file(_36TempWarningName_16450);
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
            _49show_banner();
            // SubProg handle_common_options pc: 572 op: STARTLINE (58)

            /** cominit.e:524					if not batch_job and not test_only then*/
            // SubProg handle_common_options pc: 574 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 576 op: NOT (7)
            _25676 = (_36batch_job_16449 == 0);
            // SubProg handle_common_options pc: 579 op: SC1_AND_IF (146)
            if (_25676 == 0) {
                goto L18; // [579] 632
            }
            // SubProg handle_common_options pc: 583 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 585 op: NOT (7)
            _25678 = (_36test_only_16448 == 0);
            // SubProg handle_common_options pc: 588 op: NOP1 (159)
            // SubProg handle_common_options pc: 589 op: IF (20)
            if (_25678 == 0)
            {
                DeRef(_25678);
                _25678 = NOVALUE;
                goto L18; // [589] 632
            }
            else{
                DeRef(_25678);
                _25678 = NOVALUE;
            }
            // SubProg handle_common_options pc: 592 op: STARTLINE (58)

            /** cominit.e:525						console:maybe_any_key(GetMsgText(278,0), 2)*/
            // SubProg handle_common_options pc: 594 op: PROC (27)
            RefDS(_21933);
            _25679 = _42GetMsgText(278, 0, _21933);
            // SubProg handle_common_options pc: 600 op: ASSIGN (18)
            DeRef(_prompt_inlined_maybe_any_key_at_615_49657);
            _prompt_inlined_maybe_any_key_at_615_49657 = _25679;
            _25679 = NOVALUE;
            // SubProg handle_common_options pc: 603 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 605 op: STARTLINE (58)

            /** console.e:923		if not has_console() then*/
            // SubProg handle_common_options pc: 607 op: STARTLINE (58)

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            // SubProg handle_common_options pc: 609 op: MACHINE_FUNC (111)
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658 = machine(99, 0);
            // SubProg handle_common_options pc: 613 op: NOP1 (159)
            // SubProg handle_common_options pc: 614 op: NOT_IFW (108)
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658 != 0){
                    goto L19; // [614] 629
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658)->dbl != 0.0){
                    goto L19; // [614] 629
                }
            }
            // SubProg handle_common_options pc: 617 op: STARTLINE (58)

            /** console.e:924			any_key(prompt, con)*/
            // SubProg handle_common_options pc: 619 op: PROC (27)
            Ref(_prompt_inlined_maybe_any_key_at_615_49657);
            _5any_key(_prompt_inlined_maybe_any_key_at_615_49657, 2);
            // SubProg handle_common_options pc: 623 op: NOP1 (159)
            // SubProg handle_common_options pc: 624 op: STARTLINE (58)

            /** console.e:926	end procedure*/
            // SubProg handle_common_options pc: 626 op: ELSE (23)
            goto L19; // [626] 629
            // SubProg handle_common_options pc: 628 op: NOP1 (159)
L19: // addr: 629 pc: 628 sub: 49526 op: 159
            // SubProg handle_common_options pc: 629 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from handle_common_options @ 615

// block var prompt_inlined_maybe_any_key_at_615_49657
            DeRef(_prompt_inlined_maybe_any_key_at_615_49657);
            _prompt_inlined_maybe_any_key_at_615_49657 = NOVALUE;

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_618_49658 = NOVALUE;
            // SubProg handle_common_options pc: 631 op: NOP1 (159)
L18: // addr: 632 pc: 631 sub: 49526 op: 159
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
            _49show_copyrights();
            // SubProg handle_common_options pc: 646 op: STARTLINE (58)

            /** cominit.e:532					if not batch_job and not test_only then*/
            // SubProg handle_common_options pc: 648 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 650 op: NOT (7)
            _25680 = (_36batch_job_16449 == 0);
            // SubProg handle_common_options pc: 653 op: SC1_AND_IF (146)
            if (_25680 == 0) {
                goto L1A; // [653] 706
            }
            // SubProg handle_common_options pc: 657 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 659 op: NOT (7)
            _25682 = (_36test_only_16448 == 0);
            // SubProg handle_common_options pc: 662 op: NOP1 (159)
            // SubProg handle_common_options pc: 663 op: IF (20)
            if (_25682 == 0)
            {
                DeRef(_25682);
                _25682 = NOVALUE;
                goto L1A; // [663] 706
            }
            else{
                DeRef(_25682);
                _25682 = NOVALUE;
            }
            // SubProg handle_common_options pc: 666 op: STARTLINE (58)

            /** cominit.e:533						console:maybe_any_key(GetMsgText(278,0), 2)*/
            // SubProg handle_common_options pc: 668 op: PROC (27)
            RefDS(_21933);
            _25683 = _42GetMsgText(278, 0, _21933);
            // SubProg handle_common_options pc: 674 op: ASSIGN (18)
            DeRef(_prompt_inlined_maybe_any_key_at_689_49669);
            _prompt_inlined_maybe_any_key_at_689_49669 = _25683;
            _25683 = NOVALUE;
            // SubProg handle_common_options pc: 677 op: SEQUENCE_CHECK (97)
            // SubProg handle_common_options pc: 679 op: STARTLINE (58)

            /** console.e:923		if not has_console() then*/
            // SubProg handle_common_options pc: 681 op: STARTLINE (58)

            /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
            // SubProg handle_common_options pc: 683 op: MACHINE_FUNC (111)
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670 = machine(99, 0);
            // SubProg handle_common_options pc: 687 op: NOP1 (159)
            // SubProg handle_common_options pc: 688 op: NOT_IFW (108)
            if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670)) {
                if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670 != 0){
                    goto L1B; // [688] 703
                }
            }
            else {
                if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670)->dbl != 0.0){
                    goto L1B; // [688] 703
                }
            }
            // SubProg handle_common_options pc: 691 op: STARTLINE (58)

            /** console.e:924			any_key(prompt, con)*/
            // SubProg handle_common_options pc: 693 op: PROC (27)
            Ref(_prompt_inlined_maybe_any_key_at_689_49669);
            _5any_key(_prompt_inlined_maybe_any_key_at_689_49669, 2);
            // SubProg handle_common_options pc: 697 op: NOP1 (159)
            // SubProg handle_common_options pc: 698 op: STARTLINE (58)

            /** console.e:926	end procedure*/
            // SubProg handle_common_options pc: 700 op: ELSE (23)
            goto L1B; // [700] 703
            // SubProg handle_common_options pc: 702 op: NOP1 (159)
L1B: // addr: 703 pc: 702 sub: 49526 op: 159
            // SubProg handle_common_options pc: 703 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-maybe_any_key from handle_common_options @ 689

// block var prompt_inlined_maybe_any_key_at_689_49669
            DeRef(_prompt_inlined_maybe_any_key_at_689_49669);
            _prompt_inlined_maybe_any_key_at_689_49669 = NOVALUE;

// block var has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670
            DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670);
            _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_692_49670 = NOVALUE;
            // SubProg handle_common_options pc: 705 op: NOP1 (159)
L1A: // addr: 706 pc: 705 sub: 49526 op: 159
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
            Ref(_val_49537);
            _37set_eudir(_val_49537);
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
            Ref(_val_49537);
            _0 = _val_49537;
            _val_49537 = _6value(_val_49537, 1, _6GET_SHORT_ANSWER_11242);
            DeRef(_0);
            // SubProg handle_common_options pc: 737 op: STARTLINE (58)

            /** cominit.e:542					if val[1] = GET_SUCCESS then*/
            // SubProg handle_common_options pc: 739 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_val_49537);
            _25685 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg handle_common_options pc: 743 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 745 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _25685, 0)){
                _25685 = NOVALUE;
                goto L1C; // [745] 763
            }
            _25685 = NOVALUE;
            // SubProg handle_common_options pc: 749 op: STARTLINE (58)

            /** cominit.e:543						trace_lines = floor( val[2] )*/
            // SubProg handle_common_options pc: 751 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_val_49537);
            _25687 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg handle_common_options pc: 755 op: FLOOR (83)
            if (IS_ATOM_INT(_25687))
            _36trace_lines_63873 = e_floor(_25687);
            else
            _36trace_lines_63873 = unary_op(FLOOR, _25687);
            _25687 = NOVALUE;
            // SubProg handle_common_options pc: 758 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_36trace_lines_63873)) {
                _1 = (object)(DBL_PTR(_36trace_lines_63873)->dbl);
                DeRefDS(_36trace_lines_63873);
                _36trace_lines_63873 = _1;
            }
            // SubProg handle_common_options pc: 760 op: ELSE (23)
            goto L1D; // [760] 781
            // SubProg handle_common_options pc: 762 op: NOP1 (159)
L1C: // addr: 763 pc: 762 sub: 49526 op: 159
            // SubProg handle_common_options pc: 763 op: STARTLINE (58)

            /** cominit.e:545						puts(2, GetMsgText( BAD_TRACE_LINES ) )*/
            // SubProg handle_common_options pc: 765 op: GLOBAL_INIT_CHECK (109)
            // SubProg handle_common_options pc: 767 op: PROC (27)
            RefDS(_21933);
            _25689 = _42GetMsgText(604, 1, _21933);
            // SubProg handle_common_options pc: 773 op: PUTS (44)
            EPuts(2, _25689); // DJP 
            DeRef(_25689);
            _25689 = NOVALUE;
            // SubProg handle_common_options pc: 776 op: STARTLINE (58)

            /** cominit.e:546						abort( 1 )*/
            // SubProg handle_common_options pc: 778 op: ABORT (126)
            UserCleanup(1);
            // SubProg handle_common_options pc: 780 op: NOP1 (159)
L1D: // addr: 781 pc: 780 sub: 49526 op: 159
            // SubProg handle_common_options pc: 781 op: NOPSWITCH (187)
        ;}L5: // addr: 782 pc: 781 sub: 49526 op: 187
        // SubProg handle_common_options pc: 782 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var key_49535
        DeRef(_key_49535);
        _key_49535 = NOVALUE;

// block var val_49537
        DeRef(_val_49537);
        _val_49537 = NOVALUE;
        // SubProg handle_common_options pc: 784 op: STARTLINE (58)

        /** cominit.e:549		end for*/
        // SubProg handle_common_options pc: 786 op: ENDFOR_INT_UP1 (54)
        _idx_49533 = _idx_49533 + 1;
        goto L1; // [786] 27
L2: // addr: 791 pc: 786 sub: 49526 op: 54
        ;
    }
    // SubProg handle_common_options pc: 791 op: STARTLINE (58)

    /** cominit.e:551		if length(LocalizeQual) = 0 then*/
    // SubProg handle_common_options pc: 793 op: GLOBAL_INIT_CHECK (109)
    // SubProg handle_common_options pc: 795 op: LENGTH (42)
    if (IS_SEQUENCE(_37LocalizeQual_15424)){
            _25690 = SEQ_PTR(_37LocalizeQual_15424)->length;
    }
    else {
        _25690 = 1;
    }
    // SubProg handle_common_options pc: 798 op: EQUALS_IFW_I (121)
    if (_25690 != 0)
    goto L1E; // [798] 811
    // SubProg handle_common_options pc: 802 op: STARTLINE (58)

    /** cominit.e:552			LocalizeQual = {"en"}*/
    // SubProg handle_common_options pc: 804 op: RIGHT_BRACE_N (31)
    _0 = _37LocalizeQual_15424;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_25692);
    ((intptr_t*)_2)[1] = _25692;
    _37LocalizeQual_15424 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg handle_common_options pc: 808 op: SEQUENCE_CHECK (97)
    // SubProg handle_common_options pc: 810 op: NOP1 (159)
L1E: // addr: 811 pc: 810 sub: 49526 op: 159
    // SubProg handle_common_options pc: 811 op: STARTLINE (58)

    /** cominit.e:554	end procedure*/
    // SubProg handle_common_options pc: 813 op: RETURNP (29)

// Exiting block BLOCK: handle_common_options

// block var opts_49528
    DeRef(_opts_49528);

// block var opt_keys_49529
    DeRef(_opt_keys_49529);

// block var option_w_49531
    DeRef(_25680);
    _25680 = NOVALUE;
    DeRef(_25676);
    _25676 = NOVALUE;
    return;
    // SubProg handle_common_options pc: 816 op: BADRETURNF (43)
    ;
}


void _49finalize_command_line(object _opts_49696)
{
    object _extras_49703 = NOVALUE;
    object _pairs_49708 = NOVALUE;
    object _pair_49713 = NOVALUE;
// skipping _25725  name type: 0
// skipping _25724  name type: 0
// skipping _25723  name type: 0
    object _25722 = NOVALUE; // 49746 25722
// skipping _25721  name type: 0
    object _25720 = NOVALUE; // 49742 25720
// skipping _25719  name type: 0
// skipping _25718  name type: 0
    object _25717 = NOVALUE; // 49737 25717
    object _25716 = NOVALUE; // 49736 25716
    object _25715 = NOVALUE; // 49735 25715
    object _25714 = NOVALUE; // 49734 25714
    object _25713 = NOVALUE; // 49733 25713
    object _25712 = NOVALUE; // 49732 25712
    object _25711 = NOVALUE; // 49729 25711
    object _25710 = NOVALUE; // 49728 25710
    object _25709 = NOVALUE; // 49727 25709
    object _25708 = NOVALUE; // 49726 25708
    object _25707 = NOVALUE; // 49725 25707
    object _25706 = NOVALUE; // 49724 25706
    object _25705 = NOVALUE; // 49722 25705
    object _25704 = NOVALUE; // 49721 25704
    object _25703 = NOVALUE; // 49719 25703
    object _25702 = NOVALUE; // 49718 25702
    object _25701 = NOVALUE; // 49717 25701
    object _25700 = NOVALUE; // 49716 25700
// skipping _25699  name type: 0
    object _25698 = NOVALUE; // 49712 25698
// skipping _25697  name type: 0
// skipping _25696  name type: 0
    object _25695 = NOVALUE; // 49706 25695
// skipping _25694  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg finalize_command_line pc: 1 op: STARTLINE (58)

    /** cominit.e:562		if Strict_is_on then -- overrides any -W/-X switches*/
    // SubProg finalize_command_line pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 5 op: IF (20)
    if (_36Strict_is_on_16501 == 0)
    {
        goto L1; // [5] 27
    }
    else{
    }
    // SubProg finalize_command_line pc: 8 op: STARTLINE (58)

    /** cominit.e:563			OpWarning = all_warning_flag*/
    // SubProg finalize_command_line pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 12 op: ASSIGN (18)
    _36OpWarning_16503 = 32767;
    // SubProg finalize_command_line pc: 15 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 17 op: STARTLINE (58)

    /** cominit.e:564			prev_OpWarning = OpWarning*/
    // SubProg finalize_command_line pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 21 op: ASSIGN (18)
    _36prev_OpWarning_16504 = 32767;
    // SubProg finalize_command_line pc: 24 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 49694 op: 159
    // SubProg finalize_command_line pc: 27 op: STARTLINE (58)

    /** cominit.e:569		sequence extras = m:get(opts, cmdline:EXTRAS)*/
    // SubProg finalize_command_line pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 31 op: PROC (27)
    Ref(_opts_49696);
    RefDS(_4EXTRAS_14175);
    _0 = _extras_49703;
    _extras_49703 = _29get(_opts_49696, _4EXTRAS_14175, 0);
    DeRef(_0);
    // SubProg finalize_command_line pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 39 op: STARTLINE (58)

    /** cominit.e:570		if length(extras) > 0 then*/
    // SubProg finalize_command_line pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_extras_49703)){
            _25695 = SEQ_PTR(_extras_49703)->length;
    }
    else {
        _25695 = 1;
    }
    // SubProg finalize_command_line pc: 44 op: GREATER_IFW_I (124)
    if (_25695 <= 0)
    goto L2; // [44] 270
    // SubProg finalize_command_line pc: 48 op: STARTLINE (58)

    /** cominit.e:571			sequence pairs = m:pairs( opts )*/
    // SubProg finalize_command_line pc: 50 op: PROC (27)
    Ref(_opts_49696);
    _0 = _pairs_49708;
    _pairs_49708 = _29pairs(_opts_49696, 0);
    DeRef(_0);
    // SubProg finalize_command_line pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 57 op: STARTLINE (58)

    /** cominit.e:573			for i = 1 to length( pairs ) do*/
    // SubProg finalize_command_line pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_pairs_49708)){
            _25698 = SEQ_PTR(_pairs_49708)->length;
    }
    else {
        _25698 = 1;
    }
    // SubProg finalize_command_line pc: 62 op: FOR_I (125)
    {
        object _i_49711;
        _i_49711 = 1;
L3: // addr: 69 pc: 62 sub: 49694 op: 125
        if (_i_49711 > _25698){
            goto L4; // [62] 237
        }
        // SubProg finalize_command_line pc: 69 op: STARTLINE (58)

        /** cominit.e:574				sequence pair = pairs[i]*/
        // SubProg finalize_command_line pc: 71 op: RHS_SUBS (25)
        DeRef(_pair_49713);
        _2 = (object)SEQ_PTR(_pairs_49708);
        _pair_49713 = (object)*(((s1_ptr)_2)->base + _i_49711);
        Ref(_pair_49713);
        // SubProg finalize_command_line pc: 75 op: SEQUENCE_CHECK (97)
        // SubProg finalize_command_line pc: 77 op: STARTLINE (58)

        /** cominit.e:575				if equal( pair[1], cmdline:EXTRAS ) then*/
        // SubProg finalize_command_line pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49713);
        _25700 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 85 op: EQUAL (153)
        if (_25700 == _4EXTRAS_14175)
        _25701 = 1;
        else if (IS_ATOM_INT(_25700) && IS_ATOM_INT(_4EXTRAS_14175))
        _25701 = 0;
        else
        _25701 = (compare(_25700, _4EXTRAS_14175) == 0);
        _25700 = NOVALUE;
        // SubProg finalize_command_line pc: 89 op: IF (20)
        if (_25701 == 0)
        {
            _25701 = NOVALUE;
            goto L5; // [89] 99
        }
        else{
            _25701 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 92 op: STARTLINE (58)

        /** cominit.e:576					continue*/
        // SubProg finalize_command_line pc: 94 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var pair_49713
        DeRefDS(_pair_49713);
        _pair_49713 = NOVALUE;
        // SubProg finalize_command_line pc: 96 op: ELSE (23)
        goto L6; // [96] 232
        // SubProg finalize_command_line pc: 98 op: NOP1 (159)
L5: // addr: 99 pc: 98 sub: 49694 op: 159
        // SubProg finalize_command_line pc: 99 op: STARTLINE (58)

        /** cominit.e:578				pair[1] = prepend( pair[1], '-' )*/
        // SubProg finalize_command_line pc: 101 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49713);
        _25702 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 105 op: PREPEND (57)
        Prepend(&_25703, _25702, 45);
        _25702 = NOVALUE;
        // SubProg finalize_command_line pc: 109 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_pair_49713);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pair_49713 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _25703;
        if( _1 != _25703 ){
            DeRef(_1);
        }
        _25703 = NOVALUE;
        // SubProg finalize_command_line pc: 113 op: STARTLINE (58)

        /** cominit.e:579				if sequence( pair[2] ) then*/
        // SubProg finalize_command_line pc: 115 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49713);
        _25704 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 119 op: IS_A_SEQUENCE (68)
        _25705 = IS_SEQUENCE(_25704);
        _25704 = NOVALUE;
        // SubProg finalize_command_line pc: 122 op: IF (20)
        if (_25705 == 0)
        {
            _25705 = NOVALUE;
            goto L7; // [122] 215
        }
        else{
            _25705 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 125 op: STARTLINE (58)

        /** cominit.e:580					if length( pair[2] ) and sequence( pair[2][1] ) then*/
        // SubProg finalize_command_line pc: 127 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49713);
        _25706 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 131 op: LENGTH (42)
        if (IS_SEQUENCE(_25706)){
                _25707 = SEQ_PTR(_25706)->length;
        }
        else {
            _25707 = 1;
        }
        _25706 = NOVALUE;
        // SubProg finalize_command_line pc: 134 op: SC1_AND_IF (146)
        if (_25707 == 0) {
            goto L8; // [134] 203
        }
        // SubProg finalize_command_line pc: 138 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49713);
        _25709 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 142 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25709);
        _25710 = (object)*(((s1_ptr)_2)->base + 1);
        _25709 = NOVALUE;
        // SubProg finalize_command_line pc: 146 op: IS_A_SEQUENCE (68)
        _25711 = IS_SEQUENCE(_25710);
        _25710 = NOVALUE;
        // SubProg finalize_command_line pc: 149 op: NOP1 (159)
        // SubProg finalize_command_line pc: 150 op: IF (20)
        if (_25711 == 0)
        {
            _25711 = NOVALUE;
            goto L8; // [150] 203
        }
        else{
            _25711 = NOVALUE;
        }
        // SubProg finalize_command_line pc: 153 op: STARTLINE (58)

        /** cominit.e:581						for j = 1 to length( pair[2] ) do*/
        // SubProg finalize_command_line pc: 155 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49713);
        _25712 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg finalize_command_line pc: 159 op: LENGTH (42)
        if (IS_SEQUENCE(_25712)){
                _25713 = SEQ_PTR(_25712)->length;
        }
        else {
            _25713 = 1;
        }
        _25712 = NOVALUE;
        // SubProg finalize_command_line pc: 162 op: FOR_I (125)
        {
            object _j_49731;
            _j_49731 = 1;
L9: // addr: 169 pc: 162 sub: 49694 op: 125
            if (_j_49731 > _25713){
                goto LA; // [162] 200
            }
            // SubProg finalize_command_line pc: 169 op: STARTLINE (58)

            /** cominit.e:582							switches &= { pair[1], pair[2][j] }*/
            // SubProg finalize_command_line pc: 171 op: GLOBAL_INIT_CHECK (109)
            // SubProg finalize_command_line pc: 173 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pair_49713);
            _25714 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg finalize_command_line pc: 177 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pair_49713);
            _25715 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg finalize_command_line pc: 181 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_25715);
            _25716 = (object)*(((s1_ptr)_2)->base + _j_49731);
            _25715 = NOVALUE;
            // SubProg finalize_command_line pc: 185 op: RIGHT_BRACE_2 (85)
            Ref(_25716);
            Ref(_25714);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _25714;
            ((intptr_t *)_2)[2] = _25716;
            _25717 = MAKE_SEQ(_1);
            _25716 = NOVALUE;
            _25714 = NOVALUE;
            // SubProg finalize_command_line pc: 189 op: CONCAT (15)
            Concat((object_ptr)&_49switches_49052, _49switches_49052, _25717);
            DeRefDS(_25717);
            _25717 = NOVALUE;
            // SubProg finalize_command_line pc: 193 op: STARTLINE (58)

            /** cominit.e:583						end for*/
            // SubProg finalize_command_line pc: 195 op: ENDFOR_INT_UP1 (54)
            _j_49731 = _j_49731 + 1;
            goto L9; // [195] 169
LA: // addr: 200 pc: 195 sub: 49694 op: 54
            ;
        }
        // SubProg finalize_command_line pc: 200 op: ELSE (23)
        goto LB; // [200] 228
        // SubProg finalize_command_line pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 49694 op: 159
        // SubProg finalize_command_line pc: 203 op: STARTLINE (58)

        /** cominit.e:585						switches &= pair*/
        // SubProg finalize_command_line pc: 205 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 207 op: CONCAT (15)
        Concat((object_ptr)&_49switches_49052, _49switches_49052, _pair_49713);
        // SubProg finalize_command_line pc: 211 op: NOP1 (159)
        // SubProg finalize_command_line pc: 212 op: ELSE (23)
        goto LB; // [212] 228
        // SubProg finalize_command_line pc: 214 op: NOP1 (159)
L7: // addr: 215 pc: 214 sub: 49694 op: 159
        // SubProg finalize_command_line pc: 215 op: STARTLINE (58)

        /** cominit.e:588					switches = append( switches, pair[1] )*/
        // SubProg finalize_command_line pc: 217 op: GLOBAL_INIT_CHECK (109)
        // SubProg finalize_command_line pc: 219 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pair_49713);
        _25720 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg finalize_command_line pc: 223 op: APPEND (35)
        Ref(_25720);
        Append(&_49switches_49052, _49switches_49052, _25720);
        _25720 = NOVALUE;
        // SubProg finalize_command_line pc: 227 op: NOP1 (159)
LB: // addr: 228 pc: 227 sub: 49694 op: 159
        // SubProg finalize_command_line pc: 228 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var pair_49713
        DeRef(_pair_49713);
        _pair_49713 = NOVALUE;
        // SubProg finalize_command_line pc: 230 op: STARTLINE (58)

        /** cominit.e:590			end for*/
        // SubProg finalize_command_line pc: 232 op: ENDFOR_INT_UP1 (54)
L6: // addr: 232 pc: 232 sub: 49694 op: 54
        _i_49711 = _i_49711 + 1;
        goto L3; // [232] 69
L4: // addr: 237 pc: 232 sub: 49694 op: 54
        ;
    }
    // SubProg finalize_command_line pc: 237 op: STARTLINE (58)

    /** cominit.e:592			Argv = Argv[2..3] & extras*/
    // SubProg finalize_command_line pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 241 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_25722;
    RHS_Slice(_36Argv_16447, 2, 3);
    // SubProg finalize_command_line pc: 246 op: CONCAT (15)
    Concat((object_ptr)&_36Argv_16447, _25722, _extras_49703);
    DeRefDS(_25722);
    _25722 = NOVALUE;
    DeRef(_25722);
    _25722 = NOVALUE;
    // SubProg finalize_command_line pc: 250 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 252 op: STARTLINE (58)

    /** cominit.e:593			Argc = length(Argv)*/
    // SubProg finalize_command_line pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg finalize_command_line pc: 256 op: LENGTH (42)
    if (IS_SEQUENCE(_36Argv_16447)){
            _36Argc_16446 = SEQ_PTR(_36Argv_16447)->length;
    }
    else {
        _36Argc_16446 = 1;
    }
    // SubProg finalize_command_line pc: 259 op: INTEGER_CHECK (96)
    // SubProg finalize_command_line pc: 261 op: STARTLINE (58)

    /** cominit.e:595			src_name = extras[1]*/
    // SubProg finalize_command_line pc: 263 op: RHS_SUBS (25)
    DeRef(_49src_name_49051);
    _2 = (object)SEQ_PTR(_extras_49703);
    _49src_name_49051 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_49src_name_49051);
    // SubProg finalize_command_line pc: 267 op: SEQUENCE_CHECK (97)
    // SubProg finalize_command_line pc: 269 op: NOP1 (159)
L2: // addr: 270 pc: 269 sub: 49694 op: 159
    // SubProg finalize_command_line pc: 270 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var pairs_49708
    DeRef(_pairs_49708);
    _pairs_49708 = NOVALUE;
    // SubProg finalize_command_line pc: 272 op: STARTLINE (58)

    /** cominit.e:597	end procedure*/
    // SubProg finalize_command_line pc: 274 op: RETURNP (29)

// Exiting block BLOCK: finalize_command_line

// block var opts_49696
    DeRef(_opts_49696);

// block var extras_49703
    DeRef(_extras_49703);
    _25706 = NOVALUE;
    _25712 = NOVALUE;
    return;
    // SubProg finalize_command_line pc: 277 op: BADRETURNF (43)
    ;
}



// 0x3CB1F8A3
