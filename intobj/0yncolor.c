// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _70set_colors(object _pColorList_65406)
{
    object _lColorName_65407 = NOVALUE;
    object _32639 = NOVALUE; // 65442 32639
// skipping _32637  name type: 0
    object _32636 = NOVALUE; // 65438 32636
// skipping _32634  name type: 0
    object _32633 = NOVALUE; // 65434 32633
// skipping _32631  name type: 0
    object _32630 = NOVALUE; // 65430 32630
// skipping _32628  name type: 0
    object _32627 = NOVALUE; // 65426 32627
// skipping _32625  name type: 0
    object _32624 = NOVALUE; // 65422 32624
// skipping _32622  name type: 0
    object _32621 = NOVALUE; // 65418 32621
// skipping _32617  name type: 0
    object _32616 = NOVALUE; // 65412 32616
    object _32615 = NOVALUE; // 65411 32615
    object _32614 = NOVALUE; // 65410 32614
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_colors pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_colors pc: 3 op: STARTLINE (58)

    /** syncolor.e:48		for i = 1 to length(pColorList) do*/
    // SubProg set_colors pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_pColorList_65406)){
            _32614 = SEQ_PTR(_pColorList_65406)->length;
    }
    else {
        _32614 = 1;
    }
    // SubProg set_colors pc: 8 op: FOR_I (125)
    {
        object _i_65409;
        _i_65409 = 1;
L1: // addr: 15 pc: 8 sub: 65404 op: 125
        if (_i_65409 > _32614){
            goto L2; // [8] 168
        }
        // SubProg set_colors pc: 15 op: STARTLINE (58)

        /** syncolor.e:49			lColorName = text:upper(pColorList[i][1])*/
        // SubProg set_colors pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pColorList_65406);
        _32615 = (object)*(((s1_ptr)_2)->base + _i_65409);
        // SubProg set_colors pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_32615);
        _32616 = (object)*(((s1_ptr)_2)->base + 1);
        _32615 = NOVALUE;
        // SubProg set_colors pc: 25 op: PROC (27)
        Ref(_32616);
        _0 = _lColorName_65407;
        _lColorName_65407 = _20upper(_32616);
        DeRef(_0);
        _32616 = NOVALUE;
        // SubProg set_colors pc: 29 op: SEQUENCE_CHECK (97)
        // SubProg set_colors pc: 31 op: STARTLINE (58)

        /** syncolor.e:50			switch lColorName do*/
        // SubProg set_colors pc: 33 op: SWITCH (185)
        _1 = find(_lColorName_65407, _32618);
        switch ( _1 ){ 
            // SubProg set_colors pc: 38 op: STARTLINE (58)

            /** syncolor.e:51				case "NORMAL" then*/
            // SubProg set_colors pc: 40 op: CASE (186)
            case 1:
            // SubProg set_colors pc: 42 op: STARTLINE (58)

            /** syncolor.e:52					NORMAL_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 44 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65406);
            _32621 = (object)*(((s1_ptr)_2)->base + _i_65409);
            // SubProg set_colors pc: 48 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32621);
            _70NORMAL_COLOR_65395 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70NORMAL_COLOR_65395)){
                _70NORMAL_COLOR_65395 = (object)DBL_PTR(_70NORMAL_COLOR_65395)->dbl;
            }
            _32621 = NOVALUE;
            // SubProg set_colors pc: 54 op: ELSE (23)
            goto L3; // [54] 161
            // SubProg set_colors pc: 56 op: STARTLINE (58)

            /** syncolor.e:53				case "COMMENT" then*/
            // SubProg set_colors pc: 58 op: CASE (186)
            case 2:
            // SubProg set_colors pc: 60 op: STARTLINE (58)

            /** syncolor.e:54					COMMENT_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 62 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65406);
            _32624 = (object)*(((s1_ptr)_2)->base + _i_65409);
            // SubProg set_colors pc: 66 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32624);
            _70COMMENT_COLOR_65396 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70COMMENT_COLOR_65396)){
                _70COMMENT_COLOR_65396 = (object)DBL_PTR(_70COMMENT_COLOR_65396)->dbl;
            }
            _32624 = NOVALUE;
            // SubProg set_colors pc: 72 op: ELSE (23)
            goto L3; // [72] 161
            // SubProg set_colors pc: 74 op: STARTLINE (58)

            /** syncolor.e:55				case "KEYWORD" then*/
            // SubProg set_colors pc: 76 op: CASE (186)
            case 3:
            // SubProg set_colors pc: 78 op: STARTLINE (58)

            /** syncolor.e:56					KEYWORD_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 80 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65406);
            _32627 = (object)*(((s1_ptr)_2)->base + _i_65409);
            // SubProg set_colors pc: 84 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32627);
            _70KEYWORD_COLOR_65397 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70KEYWORD_COLOR_65397)){
                _70KEYWORD_COLOR_65397 = (object)DBL_PTR(_70KEYWORD_COLOR_65397)->dbl;
            }
            _32627 = NOVALUE;
            // SubProg set_colors pc: 90 op: ELSE (23)
            goto L3; // [90] 161
            // SubProg set_colors pc: 92 op: STARTLINE (58)

            /** syncolor.e:57				case "BUILTIN" then*/
            // SubProg set_colors pc: 94 op: CASE (186)
            case 4:
            // SubProg set_colors pc: 96 op: STARTLINE (58)

            /** syncolor.e:58					BUILTIN_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 98 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65406);
            _32630 = (object)*(((s1_ptr)_2)->base + _i_65409);
            // SubProg set_colors pc: 102 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32630);
            _70BUILTIN_COLOR_65398 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70BUILTIN_COLOR_65398)){
                _70BUILTIN_COLOR_65398 = (object)DBL_PTR(_70BUILTIN_COLOR_65398)->dbl;
            }
            _32630 = NOVALUE;
            // SubProg set_colors pc: 108 op: ELSE (23)
            goto L3; // [108] 161
            // SubProg set_colors pc: 110 op: STARTLINE (58)

            /** syncolor.e:59				case "STRING" then*/
            // SubProg set_colors pc: 112 op: CASE (186)
            case 5:
            // SubProg set_colors pc: 114 op: STARTLINE (58)

            /** syncolor.e:60					STRING_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 116 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65406);
            _32633 = (object)*(((s1_ptr)_2)->base + _i_65409);
            // SubProg set_colors pc: 120 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32633);
            _70STRING_COLOR_65399 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70STRING_COLOR_65399)){
                _70STRING_COLOR_65399 = (object)DBL_PTR(_70STRING_COLOR_65399)->dbl;
            }
            _32633 = NOVALUE;
            // SubProg set_colors pc: 126 op: ELSE (23)
            goto L3; // [126] 161
            // SubProg set_colors pc: 128 op: STARTLINE (58)

            /** syncolor.e:61				case "BRACKET" then*/
            // SubProg set_colors pc: 130 op: CASE (186)
            case 6:
            // SubProg set_colors pc: 132 op: STARTLINE (58)

            /** syncolor.e:62					BRACKET_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 134 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65406);
            _32636 = (object)*(((s1_ptr)_2)->base + _i_65409);
            // SubProg set_colors pc: 138 op: RHS_SUBS_CHECK (92)
            DeRef(_70BRACKET_COLOR_65400);
            _2 = (object)SEQ_PTR(_32636);
            _70BRACKET_COLOR_65400 = (object)*(((s1_ptr)_2)->base + 2);
            Ref(_70BRACKET_COLOR_65400);
            _32636 = NOVALUE;
            // SubProg set_colors pc: 142 op: SEQUENCE_CHECK (97)
            // SubProg set_colors pc: 144 op: ELSE (23)
            goto L3; // [144] 161
            // SubProg set_colors pc: 146 op: STARTLINE (58)

            /** syncolor.e:63				case else*/
            // SubProg set_colors pc: 148 op: CASE (186)
            case 0:
            // SubProg set_colors pc: 150 op: STARTLINE (58)

            /** syncolor.e:64					printf(2, "syncolor.e: Unknown color name '%s', ignored.\n", {lColorName})*/
            // SubProg set_colors pc: 152 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            RefDS(_lColorName_65407);
            ((intptr_t*)_2)[1] = _lColorName_65407;
            _32639 = MAKE_SEQ(_1);
            // SubProg set_colors pc: 156 op: PRINTF (38)
            EPrintf(2, _32638, _32639);
            DeRefDS(_32639);
            _32639 = NOVALUE;
            // SubProg set_colors pc: 160 op: NOPSWITCH (187)
        ;}L3: // addr: 161 pc: 160 sub: 65404 op: 187
        // SubProg set_colors pc: 161 op: STARTLINE (58)

        /** syncolor.e:66		end for*/
        // SubProg set_colors pc: 163 op: ENDFOR_INT_UP1 (54)
        _i_65409 = _i_65409 + 1;
        goto L1; // [163] 15
L2: // addr: 168 pc: 163 sub: 65404 op: 54
        ;
    }
    // SubProg set_colors pc: 168 op: STARTLINE (58)

    /** syncolor.e:67	end procedure*/
    // SubProg set_colors pc: 170 op: RETURNP (29)

// Exiting block BLOCK: set_colors

// block var pColorList_65406
    DeRefDS(_pColorList_65406);

// block var lColorName_65407
    DeRef(_lColorName_65407);
    return;
    // SubProg set_colors pc: 173 op: BADRETURNF (43)
    ;
}


void _70init_class()
{
// skipping _32647  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg init_class pc: 1 op: STARTLINE (58)

    /** syncolor.e:71		NORMAL_COLOR  = #330033*/
    // SubProg init_class pc: 3 op: ASSIGN_I (113)
    _70NORMAL_COLOR_65395 = 3342387;
    // SubProg init_class pc: 6 op: STARTLINE (58)

    /** syncolor.e:72		COMMENT_COLOR = #FF0055*/
    // SubProg init_class pc: 8 op: ASSIGN_I (113)
    _70COMMENT_COLOR_65396 = 16711765;
    // SubProg init_class pc: 11 op: STARTLINE (58)

    /** syncolor.e:73		KEYWORD_COLOR = #0000FF*/
    // SubProg init_class pc: 13 op: ASSIGN_I (113)
    _70KEYWORD_COLOR_65397 = 255;
    // SubProg init_class pc: 16 op: STARTLINE (58)

    /** syncolor.e:74		BUILTIN_COLOR = #FF00FF*/
    // SubProg init_class pc: 18 op: ASSIGN_I (113)
    _70BUILTIN_COLOR_65398 = 16711935;
    // SubProg init_class pc: 21 op: STARTLINE (58)

    /** syncolor.e:75		STRING_COLOR  = #00A033*/
    // SubProg init_class pc: 23 op: ASSIGN_I (113)
    _70STRING_COLOR_65399 = 41011;
    // SubProg init_class pc: 26 op: STARTLINE (58)

    /** syncolor.e:76		BRACKET_COLOR = {NORMAL_COLOR, #993333, #0000FF, #5500FF, #00FF00}*/
    // SubProg init_class pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_class pc: 30 op: RIGHT_BRACE_N (31)
    _0 = _70BRACKET_COLOR_65400;
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 3342387;
    ((intptr_t*)_2)[2] = 10040115;
    ((intptr_t*)_2)[3] = 255;
    ((intptr_t*)_2)[4] = 5570815;
    ((intptr_t*)_2)[5] = 65280;
    _70BRACKET_COLOR_65400 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg init_class pc: 38 op: STARTLINE (58)

    /** syncolor.e:78	end procedure*/
    // SubProg init_class pc: 40 op: RETURNP (29)

// Exiting block BLOCK: init_class
    return;
    // SubProg init_class pc: 43 op: BADRETURNF (43)
    ;
}


void _70seg_flush(object _new_color_65461)
{
// skipping _32654  name type: 0
    object _32653 = NOVALUE; // 65469 32653
    object _32652 = NOVALUE; // 65468 32652
// skipping _32651  name type: 0
    object _32650 = NOVALUE; // 65466 32650
// skipping _32649  name type: 0
// skipping _32648  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg seg_flush pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_color_65461)) {
        _1 = (object)(DBL_PTR(_new_color_65461)->dbl);
        DeRefDS(_new_color_65461);
        _new_color_65461 = _1;
    }
    // SubProg seg_flush pc: 3 op: STARTLINE (58)

    /** syncolor.e:91		if new_color != current_color then*/
    // SubProg seg_flush pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 7 op: NOTEQ_IFW_I (122)
    if (_new_color_65461 == _70current_color_65457)
    goto L1; // [7] 49
    // SubProg seg_flush pc: 11 op: STARTLINE (58)

    /** syncolor.e:92			if current_color != DONT_CARE then*/
    // SubProg seg_flush pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 15 op: NOTEQ_IFW_I (122)
    if (_70current_color_65457 == -1)
    goto L2; // [15] 43
    // SubProg seg_flush pc: 19 op: STARTLINE (58)

    /** syncolor.e:93				color_segments = append(color_segments,*/
    // SubProg seg_flush pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 27 op: RIGHT_BRACE_2 (85)
    RefDS(_70linebuf_65456);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _70current_color_65457;
    ((intptr_t *)_2)[2] = _70linebuf_65456;
    _32650 = MAKE_SEQ(_1);
    // SubProg seg_flush pc: 31 op: APPEND (35)
    RefDS(_32650);
    Append(&_70color_segments_65455, _70color_segments_65455, _32650);
    DeRefDS(_32650);
    _32650 = NOVALUE;
    // SubProg seg_flush pc: 35 op: STARTLINE (58)

    /** syncolor.e:95				linebuf = ""*/
    // SubProg seg_flush pc: 37 op: ASSIGN (18)
    RefDS(_21958);
    DeRefDS(_70linebuf_65456);
    _70linebuf_65456 = _21958;
    // SubProg seg_flush pc: 40 op: SEQUENCE_CHECK (97)
    // SubProg seg_flush pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 65459 op: 159
    // SubProg seg_flush pc: 43 op: STARTLINE (58)

    /** syncolor.e:97			current_color = new_color*/
    // SubProg seg_flush pc: 45 op: ASSIGN_I (113)
    _70current_color_65457 = _new_color_65461;
    // SubProg seg_flush pc: 48 op: NOP1 (159)
L1: // addr: 49 pc: 48 sub: 65459 op: 159
    // SubProg seg_flush pc: 49 op: STARTLINE (58)

    /** syncolor.e:99		linebuf &= line[seg][tokenize:TDATA]*/
    // SubProg seg_flush pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 57 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_70line_65454);
    _32652 = (object)*(((s1_ptr)_2)->base + _70seg_65458);
    // SubProg seg_flush pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32652);
    _32653 = (object)*(((s1_ptr)_2)->base + 2);
    _32652 = NOVALUE;
    // SubProg seg_flush pc: 65 op: CONCAT (15)
    if (IS_SEQUENCE(_70linebuf_65456) && IS_ATOM(_32653)) {
        Ref(_32653);
        Append(&_70linebuf_65456, _70linebuf_65456, _32653);
    }
    else if (IS_ATOM(_70linebuf_65456) && IS_SEQUENCE(_32653)) {
    }
    else {
        Concat((object_ptr)&_70linebuf_65456, _70linebuf_65456, _32653);
    }
    _32653 = NOVALUE;
    // SubProg seg_flush pc: 69 op: STARTLINE (58)

    /** syncolor.e:100	end procedure*/
    // SubProg seg_flush pc: 71 op: RETURNP (29)

// Exiting block BLOCK: seg_flush

// block var new_color_65461
    return;
    // SubProg seg_flush pc: 74 op: BADRETURNF (43)
    ;
}


object _70default_state(object _token_65473)
{
    object _32657 = NOVALUE; // 65477 32657
// skipping _32656  name type: 0
// skipping _32655  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg default_state pc: 1 op: STARTLINE (58)

    /** syncolor.e:103		if not token then*/
    // SubProg default_state pc: 3 op: NOT_IFW (108)
    if (IS_ATOM_INT(_token_65473)) {
        if (_token_65473 != 0){
            goto L1; // [3] 12
        }
    }
    else {
        if (DBL_PTR(_token_65473)->dbl != 0.0){
            goto L1; // [3] 12
        }
    }
    // SubProg default_state pc: 6 op: STARTLINE (58)

    /** syncolor.e:104			token = tokenize:new()*/
    // SubProg default_state pc: 8 op: PROC (27)
    _0 = _token_65473;
    _token_65473 = _71new();
    DeRef(_0);
    // SubProg default_state pc: 11 op: NOP1 (159)
L1: // addr: 12 pc: 11 sub: 65471 op: 159
    // SubProg default_state pc: 12 op: STARTLINE (58)

    /** syncolor.e:106		return {*/
    // SubProg default_state pc: 14 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_token_65473);
    ((intptr_t*)_2)[1] = _token_65473;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _32657 = MAKE_SEQ(_1);
    // SubProg default_state pc: 20 op: RETURNF (28)

// Exiting block BLOCK: default_state

// block var token_65473
    DeRef(_token_65473);
    return _32657;
    // SubProg default_state pc: 24 op: BADRETURNF (43)
    ;
}


object _70new()
{
    object _state_65483 = NOVALUE;
// skipping _32660  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** syncolor.e:124		atom state = eumem:malloc()*/
    // SubProg new pc: 3 op: PROC (27)
    _0 = _state_65483;
    _state_65483 = _34malloc(1, 1);
    DeRef(_0);
    // SubProg new pc: 8 op: STARTLINE (58)

    /** syncolor.e:126		reset(state)*/
    // SubProg new pc: 10 op: PROC (27)
    Ref(_state_65483);
    _70reset(_state_65483);
    // SubProg new pc: 13 op: STARTLINE (58)

    /** syncolor.e:128		return state*/
    // SubProg new pc: 15 op: RETURNF (28)

// Exiting block BLOCK: new
    return _state_65483;
    // SubProg new pc: 19 op: BADRETURNF (43)
    ;
}


void _70tokenize_reset(object _token_65488)
{
    object _reset_1__tmp_at7_65491 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tokenize_reset pc: 1 op: STARTLINE (58)

    /** syncolor.e:138		if token then*/
    // SubProg tokenize_reset pc: 3 op: IF (20)
    if (_token_65488 == 0) {
        goto L1; // [3] 27
    }
    else {
        if (!IS_ATOM_INT(_token_65488) && DBL_PTR(_token_65488)->dbl == 0.0){
            goto L1; // [3] 27
        }
    }
    // SubProg tokenize_reset pc: 6 op: STARTLINE (58)

    /** syncolor.e:139			tokenize:reset(token)*/
    // SubProg tokenize_reset pc: 8 op: STARTLINE (58)

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    // SubProg tokenize_reset pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_reset pc: 12 op: PROC (27)
    _0 = _reset_1__tmp_at7_65491;
    _reset_1__tmp_at7_65491 = _71default_state();
    DeRef(_0);
    // SubProg tokenize_reset pc: 15 op: ASSIGN_SUBS (16)
    Ref(_reset_1__tmp_at7_65491);
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65488))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65488)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _token_65488);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _reset_1__tmp_at7_65491;
    DeRef(_1);
    // SubProg tokenize_reset pc: 19 op: STARTLINE (58)

    /** tokenize.e:213	end procedure*/
    // SubProg tokenize_reset pc: 21 op: ELSE (23)
    goto L2; // [21] 24
    // SubProg tokenize_reset pc: 23 op: NOP1 (159)
L2: // addr: 24 pc: 23 sub: 65486 op: 159
    // SubProg tokenize_reset pc: 24 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-reset from tokenize_reset @ 7

// block var reset_1__tmp_at7_65491
    DeRef(_reset_1__tmp_at7_65491);
    _reset_1__tmp_at7_65491 = NOVALUE;
    // SubProg tokenize_reset pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 65486 op: 159
    // SubProg tokenize_reset pc: 27 op: STARTLINE (58)

    /** syncolor.e:141	end procedure*/
    // SubProg tokenize_reset pc: 29 op: RETURNP (29)

// Exiting block BLOCK: tokenize_reset

// block var token_65488
    DeRef(_token_65488);
    return;
    // SubProg tokenize_reset pc: 32 op: BADRETURNF (43)
    ;
}


void _70reset(object _state_65494)
{
    object _token_65495 = NOVALUE;
    object _32664 = NOVALUE; // 65499 32664
    object _32663 = NOVALUE; // 65498 32663
// skipping _32662  name type: 0
    object _32661 = NOVALUE; // 65496 32661
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reset pc: 1 op: STARTLINE (58)

    /** syncolor.e:144		atom token = eumem:ram_space[state][S_TOKENIZER]*/
    // SubProg reset pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65494)){
        _32661 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65494)->dbl));
    }
    else{
        _32661 = (object)*(((s1_ptr)_2)->base + _state_65494);
    }
    // SubProg reset pc: 9 op: RHS_SUBS_CHECK (92)
    DeRef(_token_65495);
    _2 = (object)SEQ_PTR(_32661);
    _token_65495 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_token_65495);
    _32661 = NOVALUE;
    // SubProg reset pc: 13 op: STARTLINE (58)

    /** syncolor.e:145		tokenize_reset(token)*/
    // SubProg reset pc: 15 op: PROC (27)
    Ref(_token_65495);
    _70tokenize_reset(_token_65495);
    // SubProg reset pc: 18 op: STARTLINE (58)

    /** syncolor.e:146		eumem:ram_space[state] = default_state(token)*/
    // SubProg reset pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 22 op: PROC (27)
    Ref(_token_65495);
    _32663 = _70default_state(_token_65495);
    // SubProg reset pc: 26 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65494))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65494)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65494);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32663;
    if( _1 != _32663 ){
        DeRef(_1);
    }
    _32663 = NOVALUE;
    // SubProg reset pc: 30 op: STARTLINE (58)

    /** syncolor.e:147		eumem:ram_space[state] = default_state()*/
    // SubProg reset pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 34 op: PROC (27)
    _32664 = _70default_state(0);
    // SubProg reset pc: 38 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65494))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65494)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65494);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32664;
    if( _1 != _32664 ){
        DeRef(_1);
    }
    _32664 = NOVALUE;
    // SubProg reset pc: 42 op: STARTLINE (58)

    /** syncolor.e:148	end procedure*/
    // SubProg reset pc: 44 op: RETURNP (29)

// Exiting block BLOCK: reset

// block var state_65494
    DeRef(_state_65494);

// block var token_65495
    DeRef(_token_65495);
    return;
    // SubProg reset pc: 47 op: BADRETURNF (43)
    ;
}


object _70SyntaxColor(object _pline_65508, object _state_65509, object _multi_65511)
{
    object _class_65512 = NOVALUE;
    object _last_65513 = NOVALUE;
    object _i_65514 = NOVALUE;
    object _word_65515 = NOVALUE;
    object _c_65516 = NOVALUE;
    object _token_65517 = NOVALUE;
    object _keep_builtins_2__tmp_at19_65522 = NOVALUE;
    object _keep_builtins_1__tmp_at19_65521 = NOVALUE;
    object _keep_keywords_2__tmp_at41_65525 = NOVALUE;
    object _keep_keywords_1__tmp_at41_65524 = NOVALUE;
    object _keep_whitespace_3__tmp_at63_65529 = NOVALUE;
    object _keep_whitespace_2__tmp_at63_65528 = NOVALUE;
    object _keep_whitespace_1__tmp_at63_65527 = NOVALUE;
    object _keep_newlines_3__tmp_at88_65533 = NOVALUE;
    object _keep_newlines_2__tmp_at88_65532 = NOVALUE;
    object _keep_newlines_1__tmp_at88_65531 = NOVALUE;
    object _keep_comments_3__tmp_at113_65537 = NOVALUE;
    object _keep_comments_2__tmp_at113_65536 = NOVALUE;
    object _keep_comments_1__tmp_at113_65535 = NOVALUE;
    object _string_numbers_2__tmp_at138_65540 = NOVALUE;
    object _string_numbers_1__tmp_at138_65539 = NOVALUE;
    object _return_literal_string_2__tmp_at160_65543 = NOVALUE;
    object _return_literal_string_1__tmp_at160_65542 = NOVALUE;
    object _string_strip_quotes_3__tmp_at182_65547 = NOVALUE;
    object _string_strip_quotes_2__tmp_at182_65546 = NOVALUE;
    object _string_strip_quotes_1__tmp_at182_65545 = NOVALUE;
    object _ret_65635 = NOVALUE;
    object _32737 = NOVALUE; // 65637 32737
    object _32736 = NOVALUE; // 65636 32736
// skipping _32735  name type: 0
// skipping _32734  name type: 0
    object _32733 = NOVALUE; // 65630 32733
// skipping _32732  name type: 0
    object _32731 = NOVALUE; // 65628 32731
// skipping _32730  name type: 0
// skipping _32729  name type: 0
// skipping _32728  name type: 0
    object _32727 = NOVALUE; // 65621 32727
// skipping _32726  name type: 0
    object _32725 = NOVALUE; // 65618 32725
    object _32724 = NOVALUE; // 65617 32724
    object _32723 = NOVALUE; // 65615 32723
    object _32722 = NOVALUE; // 65614 32722
// skipping _32721  name type: 0
    object _32720 = NOVALUE; // 65610 32720
    object _32719 = NOVALUE; // 65609 32719
// skipping _32718  name type: 0
    object _32717 = NOVALUE; // 65607 32717
    object _32716 = NOVALUE; // 65606 32716
// skipping _32715  name type: 0
    object _32714 = NOVALUE; // 65604 32714
    object _32713 = NOVALUE; // 65603 32713
    object _32712 = NOVALUE; // 65602 32712
    object _32711 = NOVALUE; // 65599 32711
    object _32710 = NOVALUE; // 65598 32710
    object _32709 = NOVALUE; // 65597 32709
    object _32708 = NOVALUE; // 65596 32708
    object _32707 = NOVALUE; // 65595 32707
    object _32706 = NOVALUE; // 65594 32706
    object _32705 = NOVALUE; // 65593 32705
    object _32704 = NOVALUE; // 65592 32704
    object _32703 = NOVALUE; // 65591 32703
    object _32702 = NOVALUE; // 65590 32702
    object _32701 = NOVALUE; // 65589 32701
    object _32700 = NOVALUE; // 65587 32700
    object _32699 = NOVALUE; // 65586 32699
// skipping _32698  name type: 0
    object _32697 = NOVALUE; // 65584 32697
    object _32696 = NOVALUE; // 65583 32696
// skipping _32695  name type: 0
    object _32694 = NOVALUE; // 65581 32694
    object _32693 = NOVALUE; // 65580 32693
    object _32692 = NOVALUE; // 65579 32692
    object _32691 = NOVALUE; // 65577 32691
// skipping _32690  name type: 0
    object _32689 = NOVALUE; // 65575 32689
    object _32688 = NOVALUE; // 65574 32688
    object _32687 = NOVALUE; // 65573 32687
    object _32686 = NOVALUE; // 65572 32686
    object _32685 = NOVALUE; // 65571 32685
    object _32684 = NOVALUE; // 65570 32684
    object _32683 = NOVALUE; // 65569 32683
    object _32682 = NOVALUE; // 65568 32682
    object _32681 = NOVALUE; // 65567 32681
// skipping _32680  name type: 0
// skipping _32679  name type: 0
// skipping _32678  name type: 0
// skipping _32677  name type: 0
    object _32676 = NOVALUE; // 65558 32676
// skipping _32675  name type: 0
// skipping _32674  name type: 0
// skipping _32673  name type: 0
// skipping _32672  name type: 0
    object _32671 = NOVALUE; // 65552 32671
// skipping _32670  name type: 0
// skipping _32669  name type: 0
// skipping _32668  name type: 0
    object _32667 = NOVALUE; // 65518 32667
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg SyntaxColor pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 3 op: STARTLINE (58)

    /** syncolor.e:183		atom token = eumem:ram_space[state][S_TOKENIZER]*/
    // SubProg SyntaxColor pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65509)){
        _32667 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65509)->dbl));
    }
    else{
        _32667 = (object)*(((s1_ptr)_2)->base + _state_65509);
    }
    // SubProg SyntaxColor pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_token_65517);
    _2 = (object)SEQ_PTR(_32667);
    _token_65517 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_token_65517);
    _32667 = NOVALUE;
    // SubProg SyntaxColor pc: 15 op: STARTLINE (58)

    /** syncolor.e:185		tokenize:keep_builtins(,token)*/
    // SubProg SyntaxColor pc: 17 op: STARTLINE (58)

    /** tokenize.e:235		eumem:ram_space[state][ID_BUILTIN] = val*/
    // SubProg SyntaxColor pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 21 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 26 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg SyntaxColor pc: 30 op: STARTLINE (58)

    /** tokenize.e:236	end procedure*/
    // SubProg SyntaxColor pc: 32 op: ELSE (23)
    goto L1; // [32] 35
    // SubProg SyntaxColor pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 35 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_builtins from SyntaxColor @ 19

// block var keep_builtins_1__tmp_at19_65521

// block var keep_builtins_2__tmp_at19_65522
    // SubProg SyntaxColor pc: 37 op: STARTLINE (58)

    /** syncolor.e:186		tokenize:keep_keywords(,token)*/
    // SubProg SyntaxColor pc: 39 op: STARTLINE (58)

    /** tokenize.e:244		eumem:ram_space[state][ID_KEYWORD] = val*/
    // SubProg SyntaxColor pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 43 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 48 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg SyntaxColor pc: 52 op: STARTLINE (58)

    /** tokenize.e:245	end procedure*/
    // SubProg SyntaxColor pc: 54 op: ELSE (23)
    goto L2; // [54] 57
    // SubProg SyntaxColor pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 57 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_keywords from SyntaxColor @ 41

// block var keep_keywords_1__tmp_at41_65524

// block var keep_keywords_2__tmp_at41_65525
    // SubProg SyntaxColor pc: 59 op: STARTLINE (58)

    /** syncolor.e:187		tokenize:keep_whitespace(,token)*/
    // SubProg SyntaxColor pc: 61 op: STARTLINE (58)

    /** tokenize.e:253		eumem:ram_space[state][DELETE_WHITE] = not val*/
    // SubProg SyntaxColor pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 65 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 70 op: NOT (7)
    _keep_whitespace_3__tmp_at63_65529 = (1 == 0);
    // SubProg SyntaxColor pc: 73 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_whitespace_3__tmp_at63_65529;
    DeRef(_1);
    // SubProg SyntaxColor pc: 77 op: STARTLINE (58)

    /** tokenize.e:254	end procedure*/
    // SubProg SyntaxColor pc: 79 op: ELSE (23)
    goto L3; // [79] 82
    // SubProg SyntaxColor pc: 81 op: NOP1 (159)
L3: // addr: 82 pc: 81 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 82 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_whitespace from SyntaxColor @ 63

// block var keep_whitespace_1__tmp_at63_65527

// block var keep_whitespace_2__tmp_at63_65528

// block var keep_whitespace_3__tmp_at63_65529
    // SubProg SyntaxColor pc: 84 op: STARTLINE (58)

    /** syncolor.e:188		tokenize:keep_newlines(,token)*/
    // SubProg SyntaxColor pc: 86 op: STARTLINE (58)

    /** tokenize.e:262		eumem:ram_space[state][IGNORE_NEWLINES] = not val*/
    // SubProg SyntaxColor pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 90 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 95 op: NOT (7)
    _keep_newlines_3__tmp_at88_65533 = (1 == 0);
    // SubProg SyntaxColor pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_newlines_3__tmp_at88_65533;
    DeRef(_1);
    // SubProg SyntaxColor pc: 102 op: STARTLINE (58)

    /** tokenize.e:263	end procedure*/
    // SubProg SyntaxColor pc: 104 op: ELSE (23)
    goto L4; // [104] 107
    // SubProg SyntaxColor pc: 106 op: NOP1 (159)
L4: // addr: 107 pc: 106 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 107 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_newlines from SyntaxColor @ 88

// block var keep_newlines_1__tmp_at88_65531

// block var keep_newlines_2__tmp_at88_65532

// block var keep_newlines_3__tmp_at88_65533
    // SubProg SyntaxColor pc: 109 op: STARTLINE (58)

    /** syncolor.e:189		tokenize:keep_comments(,token)*/
    // SubProg SyntaxColor pc: 111 op: STARTLINE (58)

    /** tokenize.e:272		eumem:ram_space[state][IGNORE_COMMENTS] = not val*/
    // SubProg SyntaxColor pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 115 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 120 op: NOT (7)
    _keep_comments_3__tmp_at113_65537 = (1 == 0);
    // SubProg SyntaxColor pc: 123 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_comments_3__tmp_at113_65537;
    DeRef(_1);
    // SubProg SyntaxColor pc: 127 op: STARTLINE (58)

    /** tokenize.e:273	end procedure*/
    // SubProg SyntaxColor pc: 129 op: ELSE (23)
    goto L5; // [129] 132
    // SubProg SyntaxColor pc: 131 op: NOP1 (159)
L5: // addr: 132 pc: 131 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 132 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_comments from SyntaxColor @ 113

// block var keep_comments_1__tmp_at113_65535

// block var keep_comments_2__tmp_at113_65536

// block var keep_comments_3__tmp_at113_65537
    // SubProg SyntaxColor pc: 134 op: STARTLINE (58)

    /** syncolor.e:190		tokenize:string_numbers(,token)*/
    // SubProg SyntaxColor pc: 136 op: STARTLINE (58)

    /** tokenize.e:310		eumem:ram_space[state][STRING_NUMBERS] = val*/
    // SubProg SyntaxColor pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 140 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 145 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg SyntaxColor pc: 149 op: STARTLINE (58)

    /** tokenize.e:311	end procedure*/
    // SubProg SyntaxColor pc: 151 op: ELSE (23)
    goto L6; // [151] 154
    // SubProg SyntaxColor pc: 153 op: NOP1 (159)
L6: // addr: 154 pc: 153 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 154 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-string_numbers from SyntaxColor @ 138

// block var string_numbers_1__tmp_at138_65539

// block var string_numbers_2__tmp_at138_65540
    // SubProg SyntaxColor pc: 156 op: STARTLINE (58)

    /** syncolor.e:191		tokenize:return_literal_string(,token)*/
    // SubProg SyntaxColor pc: 158 op: STARTLINE (58)

    /** tokenize.e:286		eumem:ram_space[state][LITERAL_STRING] = val*/
    // SubProg SyntaxColor pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 162 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 167 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg SyntaxColor pc: 171 op: STARTLINE (58)

    /** tokenize.e:287	end procedure*/
    // SubProg SyntaxColor pc: 173 op: ELSE (23)
    goto L7; // [173] 176
    // SubProg SyntaxColor pc: 175 op: NOP1 (159)
L7: // addr: 176 pc: 175 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 176 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-return_literal_string from SyntaxColor @ 160

// block var return_literal_string_1__tmp_at160_65542

// block var return_literal_string_2__tmp_at160_65543
    // SubProg SyntaxColor pc: 178 op: STARTLINE (58)

    /** syncolor.e:192		tokenize:string_strip_quotes(0,token)*/
    // SubProg SyntaxColor pc: 180 op: STARTLINE (58)

    /** tokenize.e:296		eumem:ram_space[state][STRING_KEEP_QUOTES] = not val*/
    // SubProg SyntaxColor pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 184 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65517))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65517)->dbl));
    else
    _3 = (object)(_token_65517 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 189 op: NOT (7)
    _string_strip_quotes_3__tmp_at182_65547 = (0 == 0);
    // SubProg SyntaxColor pc: 192 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _string_strip_quotes_3__tmp_at182_65547;
    DeRef(_1);
    // SubProg SyntaxColor pc: 196 op: STARTLINE (58)

    /** tokenize.e:297	end procedure*/
    // SubProg SyntaxColor pc: 198 op: ELSE (23)
    goto L8; // [198] 201
    // SubProg SyntaxColor pc: 200 op: NOP1 (159)
L8: // addr: 201 pc: 200 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 201 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-string_strip_quotes from SyntaxColor @ 182

// block var string_strip_quotes_1__tmp_at182_65545

// block var string_strip_quotes_2__tmp_at182_65546

// block var string_strip_quotes_3__tmp_at182_65547
    // SubProg SyntaxColor pc: 203 op: STARTLINE (58)

    /** syncolor.e:194		line = tokenize:tokenize_string(pline, token, 0, multi)*/
    // SubProg SyntaxColor pc: 205 op: PROC (27)
    RefDS(_pline_65508);
    Ref(_token_65517);
    _0 = _71tokenize_string(_pline_65508, _token_65517, 0, _multi_65511);
    DeRef(_70line_65454);
    _70line_65454 = _0;
    // SubProg SyntaxColor pc: 212 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 214 op: STARTLINE (58)

    /** syncolor.e:196		line = line[1]*/
    // SubProg SyntaxColor pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 218 op: RHS_SUBS (25)
    _0 = _70line_65454;
    _2 = (object)SEQ_PTR(_70line_65454);
    _70line_65454 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_70line_65454);
    DeRefDS(_0);
    // SubProg SyntaxColor pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 224 op: STARTLINE (58)

    /** syncolor.e:197		current_color = DONT_CARE*/
    // SubProg SyntaxColor pc: 226 op: ASSIGN_I (113)
    _70current_color_65457 = -1;
    // SubProg SyntaxColor pc: 229 op: STARTLINE (58)

    /** syncolor.e:198		seg = 1*/
    // SubProg SyntaxColor pc: 231 op: ASSIGN_I (113)
    _70seg_65458 = 1;
    // SubProg SyntaxColor pc: 234 op: STARTLINE (58)

    /** syncolor.e:199		color_segments = {}*/
    // SubProg SyntaxColor pc: 236 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_70color_segments_65455);
    _70color_segments_65455 = _21958;
    // SubProg SyntaxColor pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 241 op: STARTLINE (58)

    /** syncolor.e:201		while 1 do*/
    // SubProg SyntaxColor pc: 243 op: NOP2 (110)
    // SubProg SyntaxColor pc: 245 op: NOPWHILE (158)
L9: // addr: 246 pc: 245 sub: 65506 op: 158
    // SubProg SyntaxColor pc: 246 op: STARTLINE (58)

    /** syncolor.e:202			if seg > length(line) then*/
    // SubProg SyntaxColor pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 252 op: LENGTH (42)
    if (IS_SEQUENCE(_70line_65454)){
            _32671 = SEQ_PTR(_70line_65454)->length;
    }
    else {
        _32671 = 1;
    }
    // SubProg SyntaxColor pc: 255 op: GREATER_IFW_I (124)
    if (_70seg_65458 <= _32671)
    goto LA; // [255] 264
    // SubProg SyntaxColor pc: 259 op: STARTLINE (58)

    /** syncolor.e:203				exit*/
    // SubProg SyntaxColor pc: 261 op: EXIT (61)
    goto LB; // [261] 747
    // SubProg SyntaxColor pc: 263 op: NOP1 (159)
LA: // addr: 264 pc: 263 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 264 op: STARTLINE (58)

    /** syncolor.e:206			c = line[seg]*/
    // SubProg SyntaxColor pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 270 op: RHS_SUBS (25)
    DeRef(_c_65516);
    _2 = (object)SEQ_PTR(_70line_65454);
    _c_65516 = (object)*(((s1_ptr)_2)->base + _70seg_65458);
    Ref(_c_65516);
    // SubProg SyntaxColor pc: 274 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 276 op: STARTLINE (58)

    /** syncolor.e:207			class = c[tokenize:TTYPE]*/
    // SubProg SyntaxColor pc: 278 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_c_65516);
    _class_65512 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_class_65512))
    _class_65512 = (object)DBL_PTR(_class_65512)->dbl;
    // SubProg SyntaxColor pc: 282 op: STARTLINE (58)

    /** syncolor.e:209			if class = tokenize:T_WHITE then*/
    // SubProg SyntaxColor pc: 284 op: EQUALS_IFW_I (121)
    if (_class_65512 != 40)
    goto LC; // [284] 303
    // SubProg SyntaxColor pc: 288 op: STARTLINE (58)

    /** syncolor.e:210				linebuf &= c[tokenize:TDATA]-- continue with current color*/
    // SubProg SyntaxColor pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 292 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_c_65516);
    _32676 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SyntaxColor pc: 296 op: CONCAT (15)
    if (IS_SEQUENCE(_70linebuf_65456) && IS_ATOM(_32676)) {
        Ref(_32676);
        Append(&_70linebuf_65456, _70linebuf_65456, _32676);
    }
    else if (IS_ATOM(_70linebuf_65456) && IS_SEQUENCE(_32676)) {
    }
    else {
        Concat((object_ptr)&_70linebuf_65456, _70linebuf_65456, _32676);
    }
    _32676 = NOVALUE;
    // SubProg SyntaxColor pc: 300 op: ELSE (23)
    goto LD; // [300] 734
    // SubProg SyntaxColor pc: 302 op: NOP1 (159)
LC: // addr: 303 pc: 302 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 303 op: STARTLINE (58)

    /** syncolor.e:211			elsif class = tokenize:T_KEYWORD then*/
    // SubProg SyntaxColor pc: 305 op: EQUALS_IFW_I (121)
    if (_class_65512 != 10)
    goto LE; // [305] 319
    // SubProg SyntaxColor pc: 309 op: STARTLINE (58)

    /** syncolor.e:212				seg_flush(KEYWORD_COLOR)*/
    // SubProg SyntaxColor pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 313 op: PROC (27)
    _70seg_flush(_70KEYWORD_COLOR_65397);
    // SubProg SyntaxColor pc: 316 op: ELSE (23)
    goto LD; // [316] 734
    // SubProg SyntaxColor pc: 318 op: NOP1 (159)
LE: // addr: 319 pc: 318 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 319 op: STARTLINE (58)

    /** syncolor.e:214			elsif class = tokenize:T_BUILTIN then*/
    // SubProg SyntaxColor pc: 321 op: EQUALS_IFW_I (121)
    if (_class_65512 != 41)
    goto LF; // [321] 335
    // SubProg SyntaxColor pc: 325 op: STARTLINE (58)

    /** syncolor.e:215				seg_flush(KEYWORD_COLOR)*/
    // SubProg SyntaxColor pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 329 op: PROC (27)
    _70seg_flush(_70KEYWORD_COLOR_65397);
    // SubProg SyntaxColor pc: 332 op: ELSE (23)
    goto LD; // [332] 734
    // SubProg SyntaxColor pc: 334 op: NOP1 (159)
LF: // addr: 335 pc: 334 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 335 op: STARTLINE (58)

    /** syncolor.e:217			elsif class = tokenize:T_IDENTIFIER then*/
    // SubProg SyntaxColor pc: 337 op: EQUALS_IFW_I (121)
    if (_class_65512 != 9)
    goto L10; // [337] 351
    // SubProg SyntaxColor pc: 341 op: STARTLINE (58)

    /** syncolor.e:218				seg_flush(NORMAL_COLOR)*/
    // SubProg SyntaxColor pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 345 op: PROC (27)
    _70seg_flush(_70NORMAL_COLOR_65395);
    // SubProg SyntaxColor pc: 348 op: ELSE (23)
    goto LD; // [348] 734
    // SubProg SyntaxColor pc: 350 op: NOP1 (159)
L10: // addr: 351 pc: 350 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 351 op: STARTLINE (58)

    /** syncolor.e:220			elsif class = tokenize:T_LPAREN or class = tokenize:T_RPAREN or*/
    // SubProg SyntaxColor pc: 353 op: EQUALS (3)
    _32681 = (_class_65512 == 28);
    // SubProg SyntaxColor pc: 357 op: SC1_OR (143)
    if (_32681 != 0) {
        _32682 = 1;
        goto L11; // [357] 369
    }
    // SubProg SyntaxColor pc: 361 op: EQUALS (3)
    _32683 = (_class_65512 == 29);
    // SubProg SyntaxColor pc: 365 op: SC2_OR (144)
    _32682 = (_32683 != 0);
    // SubProg SyntaxColor pc: 368 op: NOP1 (159)
L11: // addr: 369 pc: 368 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 369 op: SC1_OR (143)
    if (_32682 != 0) {
        _32684 = 1;
        goto L12; // [369] 381
    }
    // SubProg SyntaxColor pc: 373 op: EQUALS (3)
    _32685 = (_class_65512 == 32);
    // SubProg SyntaxColor pc: 377 op: SC2_OR (144)
    _32684 = (_32685 != 0);
    // SubProg SyntaxColor pc: 380 op: NOP1 (159)
L12: // addr: 381 pc: 380 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 381 op: SC1_OR (143)
    if (_32684 != 0) {
        _32686 = 1;
        goto L13; // [381] 393
    }
    // SubProg SyntaxColor pc: 385 op: EQUALS (3)
    _32687 = (_class_65512 == 33);
    // SubProg SyntaxColor pc: 389 op: SC2_OR (144)
    _32686 = (_32687 != 0);
    // SubProg SyntaxColor pc: 392 op: NOP1 (159)
L13: // addr: 393 pc: 392 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 393 op: SC1_OR (143)
    if (_32686 != 0) {
        _32688 = 1;
        goto L14; // [393] 405
    }
    // SubProg SyntaxColor pc: 397 op: EQUALS (3)
    _32689 = (_class_65512 == 30);
    // SubProg SyntaxColor pc: 401 op: SC2_OR (144)
    _32688 = (_32689 != 0);
    // SubProg SyntaxColor pc: 404 op: NOP1 (159)
L14: // addr: 405 pc: 404 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 405 op: SC1_OR_IF (147)
    if (_32688 != 0) {
        goto L15; // [405] 418
    }
    // SubProg SyntaxColor pc: 409 op: EQUALS (3)
    _32691 = (_class_65512 == 31);
    // SubProg SyntaxColor pc: 413 op: NOP1 (159)
    // SubProg SyntaxColor pc: 414 op: IF (20)
    if (_32691 == 0)
    {
        DeRef(_32691);
        _32691 = NOVALUE;
        goto L16; // [414] 602
    }
    else{
        DeRef(_32691);
        _32691 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 417 op: NOP1 (159)
L15: // addr: 418 pc: 417 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 418 op: STARTLINE (58)

    /** syncolor.e:223				if class = tokenize:T_LPAREN or class = tokenize:T_LBRACKET or*/
    // SubProg SyntaxColor pc: 420 op: EQUALS (3)
    _32692 = (_class_65512 == 28);
    // SubProg SyntaxColor pc: 424 op: SC1_OR (143)
    if (_32692 != 0) {
        _32693 = 1;
        goto L17; // [424] 436
    }
    // SubProg SyntaxColor pc: 428 op: EQUALS (3)
    _32694 = (_class_65512 == 32);
    // SubProg SyntaxColor pc: 432 op: SC2_OR (144)
    _32693 = (_32694 != 0);
    // SubProg SyntaxColor pc: 435 op: NOP1 (159)
L17: // addr: 436 pc: 435 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 436 op: SC1_OR_IF (147)
    if (_32693 != 0) {
        goto L18; // [436] 449
    }
    // SubProg SyntaxColor pc: 440 op: EQUALS (3)
    _32696 = (_class_65512 == 30);
    // SubProg SyntaxColor pc: 444 op: NOP1 (159)
    // SubProg SyntaxColor pc: 445 op: IF (20)
    if (_32696 == 0)
    {
        DeRef(_32696);
        _32696 = NOVALUE;
        goto L19; // [445] 471
    }
    else{
        DeRef(_32696);
        _32696 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 448 op: NOP1 (159)
L18: // addr: 449 pc: 448 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 449 op: STARTLINE (58)

    /** syncolor.e:225					eumem:ram_space[state][S_BRACKET_LEVEL] += 1*/
    // SubProg SyntaxColor pc: 451 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 453 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65509))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65509)->dbl));
    else
    _3 = (object)(_state_65509 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 458 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _32699 = (object)*(((s1_ptr)_2)->base + 2);
    _32697 = NOVALUE;
    // SubProg SyntaxColor pc: 462 op: PLUS1 (93)
    if (IS_ATOM_INT(_32699)) {
        _32700 = _32699 + 1;
        if (_32700 > MAXINT){
            _32700 = NewDouble((eudouble)_32700);
        }
    }
    else
    _32700 = binary_op(PLUS, 1, _32699);
    _32699 = NOVALUE;
    // SubProg SyntaxColor pc: 466 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32700;
    if( _1 != _32700 ){
        DeRef(_1);
    }
    _32700 = NOVALUE;
    _32697 = NOVALUE;
    // SubProg SyntaxColor pc: 470 op: NOP1 (159)
L19: // addr: 471 pc: 470 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 471 op: STARTLINE (58)

    /** syncolor.e:228				if eumem:ram_space[state][S_BRACKET_LEVEL] >= 1 and*/
    // SubProg SyntaxColor pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 475 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65509)){
        _32701 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65509)->dbl));
    }
    else{
        _32701 = (object)*(((s1_ptr)_2)->base + _state_65509);
    }
    // SubProg SyntaxColor pc: 479 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32701);
    _32702 = (object)*(((s1_ptr)_2)->base + 2);
    _32701 = NOVALUE;
    // SubProg SyntaxColor pc: 483 op: GREATEREQ (2)
    if (IS_ATOM_INT(_32702)) {
        _32703 = (_32702 >= 1);
    }
    else {
        _32703 = binary_op(GREATEREQ, _32702, 1);
    }
    _32702 = NOVALUE;
    // SubProg SyntaxColor pc: 487 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32703)) {
        if (_32703 == 0) {
            goto L1A; // [487] 538
        }
    }
    else {
        if (DBL_PTR(_32703)->dbl == 0.0) {
            goto L1A; // [487] 538
        }
    }
    // SubProg SyntaxColor pc: 491 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 493 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65509)){
        _32705 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65509)->dbl));
    }
    else{
        _32705 = (object)*(((s1_ptr)_2)->base + _state_65509);
    }
    // SubProg SyntaxColor pc: 497 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32705);
    _32706 = (object)*(((s1_ptr)_2)->base + 2);
    _32705 = NOVALUE;
    // SubProg SyntaxColor pc: 501 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 503 op: LENGTH (42)
    if (IS_SEQUENCE(_70BRACKET_COLOR_65400)){
            _32707 = SEQ_PTR(_70BRACKET_COLOR_65400)->length;
    }
    else {
        _32707 = 1;
    }
    // SubProg SyntaxColor pc: 506 op: LESSEQ (5)
    if (IS_ATOM_INT(_32706)) {
        _32708 = (_32706 <= _32707);
    }
    else {
        _32708 = binary_op(LESSEQ, _32706, _32707);
    }
    _32706 = NOVALUE;
    _32707 = NOVALUE;
    // SubProg SyntaxColor pc: 510 op: NOP1 (159)
    // SubProg SyntaxColor pc: 511 op: IF (20)
    if (_32708 == 0) {
        DeRef(_32708);
        _32708 = NOVALUE;
        goto L1A; // [511] 538
    }
    else {
        if (!IS_ATOM_INT(_32708) && DBL_PTR(_32708)->dbl == 0.0){
            DeRef(_32708);
            _32708 = NOVALUE;
            goto L1A; // [511] 538
        }
        DeRef(_32708);
        _32708 = NOVALUE;
    }
    DeRef(_32708);
    _32708 = NOVALUE;
    // SubProg SyntaxColor pc: 514 op: STARTLINE (58)

    /** syncolor.e:231					seg_flush(BRACKET_COLOR[eumem:ram_space[state][S_BRACKET_LEVEL]])*/
    // SubProg SyntaxColor pc: 516 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 518 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 520 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65509)){
        _32709 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65509)->dbl));
    }
    else{
        _32709 = (object)*(((s1_ptr)_2)->base + _state_65509);
    }
    // SubProg SyntaxColor pc: 524 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32709);
    _32710 = (object)*(((s1_ptr)_2)->base + 2);
    _32709 = NOVALUE;
    // SubProg SyntaxColor pc: 528 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_70BRACKET_COLOR_65400);
    if (!IS_ATOM_INT(_32710)){
        _32711 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32710)->dbl));
    }
    else{
        _32711 = (object)*(((s1_ptr)_2)->base + _32710);
    }
    // SubProg SyntaxColor pc: 532 op: PROC (27)
    Ref(_32711);
    _70seg_flush(_32711);
    _32711 = NOVALUE;
    // SubProg SyntaxColor pc: 535 op: ELSE (23)
    goto L1B; // [535] 546
    // SubProg SyntaxColor pc: 537 op: NOP1 (159)
L1A: // addr: 538 pc: 537 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 538 op: STARTLINE (58)

    /** syncolor.e:233					seg_flush(NORMAL_COLOR)*/
    // SubProg SyntaxColor pc: 540 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 542 op: PROC (27)
    _70seg_flush(_70NORMAL_COLOR_65395);
    // SubProg SyntaxColor pc: 545 op: NOP1 (159)
L1B: // addr: 546 pc: 545 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 546 op: STARTLINE (58)

    /** syncolor.e:236				if class = tokenize:T_RPAREN or class = tokenize:T_RBRACKET or*/
    // SubProg SyntaxColor pc: 548 op: EQUALS (3)
    _32712 = (_class_65512 == 29);
    // SubProg SyntaxColor pc: 552 op: SC1_OR (143)
    if (_32712 != 0) {
        _32713 = 1;
        goto L1C; // [552] 564
    }
    // SubProg SyntaxColor pc: 556 op: EQUALS (3)
    _32714 = (_class_65512 == 33);
    // SubProg SyntaxColor pc: 560 op: SC2_OR (144)
    _32713 = (_32714 != 0);
    // SubProg SyntaxColor pc: 563 op: NOP1 (159)
L1C: // addr: 564 pc: 563 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 564 op: SC1_OR_IF (147)
    if (_32713 != 0) {
        goto L1D; // [564] 577
    }
    // SubProg SyntaxColor pc: 568 op: EQUALS (3)
    _32716 = (_class_65512 == 31);
    // SubProg SyntaxColor pc: 572 op: NOP1 (159)
    // SubProg SyntaxColor pc: 573 op: IF (20)
    if (_32716 == 0)
    {
        DeRef(_32716);
        _32716 = NOVALUE;
        goto LD; // [573] 734
    }
    else{
        DeRef(_32716);
        _32716 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 576 op: NOP1 (159)
L1D: // addr: 577 pc: 576 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 577 op: STARTLINE (58)

    /** syncolor.e:238					eumem:ram_space[state][S_BRACKET_LEVEL] -= 1*/
    // SubProg SyntaxColor pc: 579 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 581 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65509))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65509)->dbl));
    else
    _3 = (object)(_state_65509 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 586 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _32719 = (object)*(((s1_ptr)_2)->base + 2);
    _32717 = NOVALUE;
    // SubProg SyntaxColor pc: 590 op: MINUS (10)
    if (IS_ATOM_INT(_32719)) {
        _32720 = _32719 - 1;
        if ((object)((uintptr_t)_32720 +(uintptr_t) HIGH_BITS) >= 0){
            _32720 = NewDouble((eudouble)_32720);
        }
    }
    else {
        _32720 = binary_op(MINUS, _32719, 1);
    }
    _32719 = NOVALUE;
    // SubProg SyntaxColor pc: 594 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32720;
    if( _1 != _32720 ){
        DeRef(_1);
    }
    _32720 = NOVALUE;
    _32717 = NOVALUE;
    // SubProg SyntaxColor pc: 598 op: NOP1 (159)
    // SubProg SyntaxColor pc: 599 op: ELSE (23)
    goto LD; // [599] 734
    // SubProg SyntaxColor pc: 601 op: NOP1 (159)
L16: // addr: 602 pc: 601 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 602 op: STARTLINE (58)

    /** syncolor.e:241			elsif class = tokenize:T_NEWLINE then*/
    // SubProg SyntaxColor pc: 604 op: EQUALS_IFW_I (121)
    if (_class_65512 != 4)
    goto L1E; // [604] 668
    // SubProg SyntaxColor pc: 608 op: STARTLINE (58)

    /** syncolor.e:242				if eumem:ram_space[state][S_KEEP_NEWLINES] then*/
    // SubProg SyntaxColor pc: 610 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 612 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_state_65509)){
        _32722 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65509)->dbl));
    }
    else{
        _32722 = (object)*(((s1_ptr)_2)->base + _state_65509);
    }
    // SubProg SyntaxColor pc: 616 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32722);
    _32723 = (object)*(((s1_ptr)_2)->base + 3);
    _32722 = NOVALUE;
    // SubProg SyntaxColor pc: 620 op: IF (20)
    if (_32723 == 0) {
        _32723 = NOVALUE;
        goto LB; // [620] 747
    }
    else {
        if (!IS_ATOM_INT(_32723) && DBL_PTR(_32723)->dbl == 0.0){
            _32723 = NOVALUE;
            goto LB; // [620] 747
        }
        _32723 = NOVALUE;
    }
    _32723 = NOVALUE;
    // SubProg SyntaxColor pc: 623 op: STARTLINE (58)

    /** syncolor.e:244					if equal(c[tokenize:TDATA],"") then*/
    // SubProg SyntaxColor pc: 625 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_c_65516);
    _32724 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SyntaxColor pc: 629 op: EQUAL (153)
    if (_32724 == _21958)
    _32725 = 1;
    else if (IS_ATOM_INT(_32724) && IS_ATOM_INT(_21958))
    _32725 = 0;
    else
    _32725 = (compare(_32724, _21958) == 0);
    _32724 = NOVALUE;
    // SubProg SyntaxColor pc: 633 op: IF (20)
    if (_32725 == 0)
    {
        _32725 = NOVALUE;
        goto L1F; // [633] 647
    }
    else{
        _32725 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 636 op: STARTLINE (58)

    /** syncolor.e:245						linebuf &= '\n'*/
    // SubProg SyntaxColor pc: 638 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 640 op: CONCAT (15)
    Append(&_70linebuf_65456, _70linebuf_65456, 10);
    // SubProg SyntaxColor pc: 644 op: ELSE (23)
    goto LB; // [644] 747
    // SubProg SyntaxColor pc: 646 op: NOP1 (159)
L1F: // addr: 647 pc: 646 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 647 op: STARTLINE (58)

    /** syncolor.e:247						linebuf &= c[tokenize:TDATA]*/
    // SubProg SyntaxColor pc: 649 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 651 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_c_65516);
    _32727 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SyntaxColor pc: 655 op: CONCAT (15)
    if (IS_SEQUENCE(_70linebuf_65456) && IS_ATOM(_32727)) {
        Ref(_32727);
        Append(&_70linebuf_65456, _70linebuf_65456, _32727);
    }
    else if (IS_ATOM(_70linebuf_65456) && IS_SEQUENCE(_32727)) {
    }
    else {
        Concat((object_ptr)&_70linebuf_65456, _70linebuf_65456, _32727);
    }
    _32727 = NOVALUE;
    // SubProg SyntaxColor pc: 659 op: NOP1 (159)
    // SubProg SyntaxColor pc: 660 op: NOP1 (159)
    // SubProg SyntaxColor pc: 661 op: STARTLINE (58)

    /** syncolor.e:250				exit  -- end of line*/
    // SubProg SyntaxColor pc: 663 op: EXIT (61)
    goto LB; // [663] 747
    // SubProg SyntaxColor pc: 665 op: ELSE (23)
    goto LD; // [665] 734
    // SubProg SyntaxColor pc: 667 op: NOP1 (159)
L1E: // addr: 668 pc: 667 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 668 op: STARTLINE (58)

    /** syncolor.e:252			elsif class = tokenize:T_EOF then*/
    // SubProg SyntaxColor pc: 670 op: EQUALS_IFW_I (121)
    if (_class_65512 != 1)
    goto L20; // [670] 681
    // SubProg SyntaxColor pc: 674 op: STARTLINE (58)

    /** syncolor.e:253				exit  -- end of line*/
    // SubProg SyntaxColor pc: 676 op: EXIT (61)
    goto LB; // [676] 747
    // SubProg SyntaxColor pc: 678 op: ELSE (23)
    goto LD; // [678] 734
    // SubProg SyntaxColor pc: 680 op: NOP1 (159)
L20: // addr: 681 pc: 680 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 681 op: STARTLINE (58)

    /** syncolor.e:255			elsif class = tokenize:T_COMMENT then*/
    // SubProg SyntaxColor pc: 683 op: EQUALS_IFW_I (121)
    if (_class_65512 != 5)
    goto L21; // [683] 697
    // SubProg SyntaxColor pc: 687 op: STARTLINE (58)

    /** syncolor.e:256				seg_flush(COMMENT_COLOR)*/
    // SubProg SyntaxColor pc: 689 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 691 op: PROC (27)
    _70seg_flush(_70COMMENT_COLOR_65396);
    // SubProg SyntaxColor pc: 694 op: ELSE (23)
    goto LD; // [694] 734
    // SubProg SyntaxColor pc: 696 op: NOP1 (159)
L21: // addr: 697 pc: 696 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 697 op: STARTLINE (58)

    /** syncolor.e:258			elsif class = tokenize:T_STRING or class = tokenize:T_CHAR then*/
    // SubProg SyntaxColor pc: 699 op: EQUALS (3)
    _32731 = (_class_65512 == 8);
    // SubProg SyntaxColor pc: 703 op: SC1_OR_IF (147)
    if (_32731 != 0) {
        goto L22; // [703] 716
    }
    // SubProg SyntaxColor pc: 707 op: EQUALS (3)
    _32733 = (_class_65512 == 7);
    // SubProg SyntaxColor pc: 711 op: NOP1 (159)
    // SubProg SyntaxColor pc: 712 op: IF (20)
    if (_32733 == 0)
    {
        DeRef(_32733);
        _32733 = NOVALUE;
        goto L23; // [712] 726
    }
    else{
        DeRef(_32733);
        _32733 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 715 op: NOP1 (159)
L22: // addr: 716 pc: 715 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 716 op: STARTLINE (58)

    /** syncolor.e:259				seg_flush(STRING_COLOR)*/
    // SubProg SyntaxColor pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 720 op: PROC (27)
    _70seg_flush(_70STRING_COLOR_65399);
    // SubProg SyntaxColor pc: 723 op: ELSE (23)
    goto LD; // [723] 734
    // SubProg SyntaxColor pc: 725 op: NOP1 (159)
L23: // addr: 726 pc: 725 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 726 op: STARTLINE (58)

    /** syncolor.e:262				seg_flush(NORMAL_COLOR)*/
    // SubProg SyntaxColor pc: 728 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 730 op: PROC (27)
    _70seg_flush(_70NORMAL_COLOR_65395);
    // SubProg SyntaxColor pc: 733 op: NOP1 (159)
LD: // addr: 734 pc: 733 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 734 op: STARTLINE (58)

    /** syncolor.e:264			seg += 1*/
    // SubProg SyntaxColor pc: 736 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 738 op: PLUS1_I (117)
    _70seg_65458 = _70seg_65458 + 1;
    // SubProg SyntaxColor pc: 742 op: STARTLINE (58)

    /** syncolor.e:265		end while*/
    // SubProg SyntaxColor pc: 744 op: ENDWHILE (22)
    goto L9; // [744] 246
    // SubProg SyntaxColor pc: 746 op: NOP1 (159)
LB: // addr: 747 pc: 746 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 747 op: STARTLINE (58)

    /** syncolor.e:268		if current_color = DONT_CARE then*/
    // SubProg SyntaxColor pc: 749 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 751 op: EQUALS_IFW_I (121)
    if (_70current_color_65457 != -1)
    goto L24; // [751] 763
    // SubProg SyntaxColor pc: 755 op: STARTLINE (58)

    /** syncolor.e:269			current_color = NORMAL_COLOR*/
    // SubProg SyntaxColor pc: 757 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 759 op: ASSIGN_I (113)
    _70current_color_65457 = _70NORMAL_COLOR_65395;
    // SubProg SyntaxColor pc: 762 op: NOP1 (159)
L24: // addr: 763 pc: 762 sub: 65506 op: 159
    // SubProg SyntaxColor pc: 763 op: STARTLINE (58)

    /** syncolor.e:272		sequence ret = linebuf*/
    // SubProg SyntaxColor pc: 765 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 767 op: ASSIGN (18)
    RefDS(_70linebuf_65456);
    DeRef(_ret_65635);
    _ret_65635 = _70linebuf_65456;
    // SubProg SyntaxColor pc: 770 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 772 op: STARTLINE (58)

    /** syncolor.e:273		linebuf = ""*/
    // SubProg SyntaxColor pc: 774 op: ASSIGN (18)
    RefDS(_21958);
    DeRefDS(_70linebuf_65456);
    _70linebuf_65456 = _21958;
    // SubProg SyntaxColor pc: 777 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 779 op: STARTLINE (58)

    /** syncolor.e:274		return append(color_segments, {current_color, ret})*/
    // SubProg SyntaxColor pc: 781 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 783 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 785 op: RIGHT_BRACE_2 (85)
    RefDS(_ret_65635);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _70current_color_65457;
    ((intptr_t *)_2)[2] = _ret_65635;
    _32736 = MAKE_SEQ(_1);
    // SubProg SyntaxColor pc: 789 op: APPEND (35)
    RefDS(_32736);
    Append(&_32737, _70color_segments_65455, _32736);
    DeRefDS(_32736);
    _32736 = NOVALUE;
    // SubProg SyntaxColor pc: 793 op: RETURNF (28)

// Exiting block BLOCK: SyntaxColor

// block var pline_65508
    DeRefDS(_pline_65508);

// block var state_65509
    DeRef(_state_65509);

// block var multi_65511

// block var class_65512

// block var c_65516
    DeRef(_c_65516);

// block var token_65517
    DeRef(_token_65517);

// block var ret_65635
    DeRefDS(_ret_65635);
    DeRef(_32712);
    _32712 = NOVALUE;
    DeRef(_32687);
    _32687 = NOVALUE;
    DeRef(_32714);
    _32714 = NOVALUE;
    _32710 = NOVALUE;
    DeRef(_32681);
    _32681 = NOVALUE;
    DeRef(_32685);
    _32685 = NOVALUE;
    DeRef(_32703);
    _32703 = NOVALUE;
    DeRef(_32694);
    _32694 = NOVALUE;
    DeRef(_32683);
    _32683 = NOVALUE;
    DeRef(_32689);
    _32689 = NOVALUE;
    DeRef(_32731);
    _32731 = NOVALUE;
    DeRef(_32692);
    _32692 = NOVALUE;
    return _32737;
    // SubProg SyntaxColor pc: 797 op: BADRETURNF (43)
    ;
}



// 0x3A0E2DE7
