// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _70set_colors(object _pColorList_65346)
{
    object _lColorName_65347 = NOVALUE;
    object _32583 = NOVALUE; // 65382 32583
// skipping _32581  name type: 0
    object _32580 = NOVALUE; // 65378 32580
// skipping _32578  name type: 0
    object _32577 = NOVALUE; // 65374 32577
// skipping _32575  name type: 0
    object _32574 = NOVALUE; // 65370 32574
// skipping _32572  name type: 0
    object _32571 = NOVALUE; // 65366 32571
// skipping _32569  name type: 0
    object _32568 = NOVALUE; // 65362 32568
// skipping _32566  name type: 0
    object _32565 = NOVALUE; // 65358 32565
// skipping _32561  name type: 0
    object _32560 = NOVALUE; // 65352 32560
    object _32559 = NOVALUE; // 65351 32559
    object _32558 = NOVALUE; // 65350 32558
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_colors pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_colors pc: 3 op: STARTLINE (58)

    /** syncolor.e:48		for i = 1 to length(pColorList) do*/
    // SubProg set_colors pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_pColorList_65346)){
            _32558 = SEQ_PTR(_pColorList_65346)->length;
    }
    else {
        _32558 = 1;
    }
    // SubProg set_colors pc: 8 op: FOR_I (125)
    {
        object _i_65349;
        _i_65349 = 1;
L1: // addr: 15 pc: 8 sub: 65344 op: 125
        if (_i_65349 > _32558){
            goto L2; // [8] 168
        }
        // SubProg set_colors pc: 15 op: STARTLINE (58)

        /** syncolor.e:49			lColorName = text:upper(pColorList[i][1])*/
        // SubProg set_colors pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pColorList_65346);
        _32559 = (object)*(((s1_ptr)_2)->base + _i_65349);
        // SubProg set_colors pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_32559);
        _32560 = (object)*(((s1_ptr)_2)->base + 1);
        _32559 = NOVALUE;
        // SubProg set_colors pc: 25 op: PROC (27)
        Ref(_32560);
        _0 = _lColorName_65347;
        _lColorName_65347 = _15upper(_32560);
        DeRef(_0);
        _32560 = NOVALUE;
        // SubProg set_colors pc: 29 op: SEQUENCE_CHECK (97)
        // SubProg set_colors pc: 31 op: STARTLINE (58)

        /** syncolor.e:50			switch lColorName do*/
        // SubProg set_colors pc: 33 op: SWITCH (185)
        _1 = find(_lColorName_65347, _32562);
        switch ( _1 ){ 
            // SubProg set_colors pc: 38 op: STARTLINE (58)

            /** syncolor.e:51				case "NORMAL" then*/
            // SubProg set_colors pc: 40 op: CASE (186)
            case 1:
            // SubProg set_colors pc: 42 op: STARTLINE (58)

            /** syncolor.e:52					NORMAL_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 44 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65346);
            _32565 = (object)*(((s1_ptr)_2)->base + _i_65349);
            // SubProg set_colors pc: 48 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32565);
            _70NORMAL_COLOR_65335 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70NORMAL_COLOR_65335)){
                _70NORMAL_COLOR_65335 = (object)DBL_PTR(_70NORMAL_COLOR_65335)->dbl;
            }
            _32565 = NOVALUE;
            // SubProg set_colors pc: 54 op: ELSE (23)
            goto L3; // [54] 161
            // SubProg set_colors pc: 56 op: STARTLINE (58)

            /** syncolor.e:53				case "COMMENT" then*/
            // SubProg set_colors pc: 58 op: CASE (186)
            case 2:
            // SubProg set_colors pc: 60 op: STARTLINE (58)

            /** syncolor.e:54					COMMENT_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 62 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65346);
            _32568 = (object)*(((s1_ptr)_2)->base + _i_65349);
            // SubProg set_colors pc: 66 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32568);
            _70COMMENT_COLOR_65336 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70COMMENT_COLOR_65336)){
                _70COMMENT_COLOR_65336 = (object)DBL_PTR(_70COMMENT_COLOR_65336)->dbl;
            }
            _32568 = NOVALUE;
            // SubProg set_colors pc: 72 op: ELSE (23)
            goto L3; // [72] 161
            // SubProg set_colors pc: 74 op: STARTLINE (58)

            /** syncolor.e:55				case "KEYWORD" then*/
            // SubProg set_colors pc: 76 op: CASE (186)
            case 3:
            // SubProg set_colors pc: 78 op: STARTLINE (58)

            /** syncolor.e:56					KEYWORD_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 80 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65346);
            _32571 = (object)*(((s1_ptr)_2)->base + _i_65349);
            // SubProg set_colors pc: 84 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32571);
            _70KEYWORD_COLOR_65337 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70KEYWORD_COLOR_65337)){
                _70KEYWORD_COLOR_65337 = (object)DBL_PTR(_70KEYWORD_COLOR_65337)->dbl;
            }
            _32571 = NOVALUE;
            // SubProg set_colors pc: 90 op: ELSE (23)
            goto L3; // [90] 161
            // SubProg set_colors pc: 92 op: STARTLINE (58)

            /** syncolor.e:57				case "BUILTIN" then*/
            // SubProg set_colors pc: 94 op: CASE (186)
            case 4:
            // SubProg set_colors pc: 96 op: STARTLINE (58)

            /** syncolor.e:58					BUILTIN_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 98 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65346);
            _32574 = (object)*(((s1_ptr)_2)->base + _i_65349);
            // SubProg set_colors pc: 102 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32574);
            _70BUILTIN_COLOR_65338 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70BUILTIN_COLOR_65338)){
                _70BUILTIN_COLOR_65338 = (object)DBL_PTR(_70BUILTIN_COLOR_65338)->dbl;
            }
            _32574 = NOVALUE;
            // SubProg set_colors pc: 108 op: ELSE (23)
            goto L3; // [108] 161
            // SubProg set_colors pc: 110 op: STARTLINE (58)

            /** syncolor.e:59				case "STRING" then*/
            // SubProg set_colors pc: 112 op: CASE (186)
            case 5:
            // SubProg set_colors pc: 114 op: STARTLINE (58)

            /** syncolor.e:60					STRING_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 116 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65346);
            _32577 = (object)*(((s1_ptr)_2)->base + _i_65349);
            // SubProg set_colors pc: 120 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32577);
            _70STRING_COLOR_65339 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70STRING_COLOR_65339)){
                _70STRING_COLOR_65339 = (object)DBL_PTR(_70STRING_COLOR_65339)->dbl;
            }
            _32577 = NOVALUE;
            // SubProg set_colors pc: 126 op: ELSE (23)
            goto L3; // [126] 161
            // SubProg set_colors pc: 128 op: STARTLINE (58)

            /** syncolor.e:61				case "BRACKET" then*/
            // SubProg set_colors pc: 130 op: CASE (186)
            case 6:
            // SubProg set_colors pc: 132 op: STARTLINE (58)

            /** syncolor.e:62					BRACKET_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 134 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65346);
            _32580 = (object)*(((s1_ptr)_2)->base + _i_65349);
            // SubProg set_colors pc: 138 op: RHS_SUBS_CHECK (92)
            DeRef(_70BRACKET_COLOR_65340);
            _2 = (object)SEQ_PTR(_32580);
            _70BRACKET_COLOR_65340 = (object)*(((s1_ptr)_2)->base + 2);
            Ref(_70BRACKET_COLOR_65340);
            _32580 = NOVALUE;
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
            RefDS(_lColorName_65347);
            ((intptr_t*)_2)[1] = _lColorName_65347;
            _32583 = MAKE_SEQ(_1);
            // SubProg set_colors pc: 156 op: PRINTF (38)
            EPrintf(2, _32582, _32583);
            DeRefDS(_32583);
            _32583 = NOVALUE;
            // SubProg set_colors pc: 160 op: NOPSWITCH (187)
        ;}L3: // addr: 161 pc: 160 sub: 65344 op: 187
        // SubProg set_colors pc: 161 op: STARTLINE (58)

        /** syncolor.e:66		end for*/
        // SubProg set_colors pc: 163 op: ENDFOR_INT_UP1 (54)
        _i_65349 = _i_65349 + 1;
        goto L1; // [163] 15
L2: // addr: 168 pc: 163 sub: 65344 op: 54
        ;
    }
    // SubProg set_colors pc: 168 op: STARTLINE (58)

    /** syncolor.e:67	end procedure*/
    // SubProg set_colors pc: 170 op: RETURNP (29)

// Exiting block BLOCK: set_colors

// block var pColorList_65346
    DeRefDS(_pColorList_65346);

// block var lColorName_65347
    DeRef(_lColorName_65347);
    return;
    // SubProg set_colors pc: 173 op: BADRETURNF (43)
    ;
}


void _70init_class()
{
// skipping _32592  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg init_class pc: 1 op: STARTLINE (58)

    /** syncolor.e:71		NORMAL_COLOR  = #330033*/
    // SubProg init_class pc: 3 op: ASSIGN_I (113)
    _70NORMAL_COLOR_65335 = 3342387;
    // SubProg init_class pc: 6 op: STARTLINE (58)

    /** syncolor.e:72		COMMENT_COLOR = #FF0055*/
    // SubProg init_class pc: 8 op: ASSIGN_I (113)
    _70COMMENT_COLOR_65336 = 16711765;
    // SubProg init_class pc: 11 op: STARTLINE (58)

    /** syncolor.e:73		KEYWORD_COLOR = #0000FF*/
    // SubProg init_class pc: 13 op: ASSIGN_I (113)
    _70KEYWORD_COLOR_65337 = 255;
    // SubProg init_class pc: 16 op: STARTLINE (58)

    /** syncolor.e:74		BUILTIN_COLOR = #FF00FF*/
    // SubProg init_class pc: 18 op: ASSIGN_I (113)
    _70BUILTIN_COLOR_65338 = 16711935;
    // SubProg init_class pc: 21 op: STARTLINE (58)

    /** syncolor.e:75		STRING_COLOR  = #00A033*/
    // SubProg init_class pc: 23 op: ASSIGN_I (113)
    _70STRING_COLOR_65339 = 41011;
    // SubProg init_class pc: 26 op: STARTLINE (58)

    /** syncolor.e:76		BRACKET_COLOR = {NORMAL_COLOR, #993333, #0000FF, #5500FF, #00FF00}*/
    // SubProg init_class pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_class pc: 30 op: RIGHT_BRACE_N (31)
    _0 = _70BRACKET_COLOR_65340;
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 3342387;
    ((intptr_t*)_2)[2] = 10040115;
    ((intptr_t*)_2)[3] = 255;
    ((intptr_t*)_2)[4] = 5570815;
    ((intptr_t*)_2)[5] = 65280;
    _70BRACKET_COLOR_65340 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg init_class pc: 38 op: STARTLINE (58)

    /** syncolor.e:78	end procedure*/
    // SubProg init_class pc: 40 op: RETURNP (29)

// Exiting block BLOCK: init_class
    return;
    // SubProg init_class pc: 43 op: BADRETURNF (43)
    ;
}


void _70seg_flush(object _new_color_65402)
{
// skipping _32599  name type: 0
    object _32598 = NOVALUE; // 65410 32598
    object _32597 = NOVALUE; // 65409 32597
// skipping _32596  name type: 0
    object _32595 = NOVALUE; // 65407 32595
// skipping _32594  name type: 0
// skipping _32593  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg seg_flush pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_color_65402)) {
        _1 = (object)(DBL_PTR(_new_color_65402)->dbl);
        DeRefDS(_new_color_65402);
        _new_color_65402 = _1;
    }
    // SubProg seg_flush pc: 3 op: STARTLINE (58)

    /** syncolor.e:91		if new_color != current_color then*/
    // SubProg seg_flush pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 7 op: NOTEQ_IFW_I (122)
    if (_new_color_65402 == _70current_color_65398)
    goto L1; // [7] 49
    // SubProg seg_flush pc: 11 op: STARTLINE (58)

    /** syncolor.e:92			if current_color != DONT_CARE then*/
    // SubProg seg_flush pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 15 op: NOTEQ_IFW_I (122)
    if (_70current_color_65398 == -1)
    goto L2; // [15] 43
    // SubProg seg_flush pc: 19 op: STARTLINE (58)

    /** syncolor.e:93				color_segments = append(color_segments,*/
    // SubProg seg_flush pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 27 op: RIGHT_BRACE_2 (85)
    RefDS(_70linebuf_65397);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _70current_color_65398;
    ((intptr_t *)_2)[2] = _70linebuf_65397;
    _32595 = MAKE_SEQ(_1);
    // SubProg seg_flush pc: 31 op: APPEND (35)
    RefDS(_32595);
    Append(&_70color_segments_65396, _70color_segments_65396, _32595);
    DeRefDS(_32595);
    _32595 = NOVALUE;
    // SubProg seg_flush pc: 35 op: STARTLINE (58)

    /** syncolor.e:95				linebuf = ""*/
    // SubProg seg_flush pc: 37 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_70linebuf_65397);
    _70linebuf_65397 = _21936;
    // SubProg seg_flush pc: 40 op: SEQUENCE_CHECK (97)
    // SubProg seg_flush pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 65400 op: 159
    // SubProg seg_flush pc: 43 op: STARTLINE (58)

    /** syncolor.e:97			current_color = new_color*/
    // SubProg seg_flush pc: 45 op: ASSIGN_I (113)
    _70current_color_65398 = _new_color_65402;
    // SubProg seg_flush pc: 48 op: NOP1 (159)
L1: // addr: 49 pc: 48 sub: 65400 op: 159
    // SubProg seg_flush pc: 49 op: STARTLINE (58)

    /** syncolor.e:99		linebuf &= line[seg][tokenize:TDATA]*/
    // SubProg seg_flush pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg seg_flush pc: 57 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_70line_65395);
    _32597 = (object)*(((s1_ptr)_2)->base + _70seg_65399);
    // SubProg seg_flush pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32597);
    _32598 = (object)*(((s1_ptr)_2)->base + 2);
    _32597 = NOVALUE;
    // SubProg seg_flush pc: 65 op: CONCAT (15)
    if (IS_SEQUENCE(_70linebuf_65397) && IS_ATOM(_32598)) {
        Ref(_32598);
        Append(&_70linebuf_65397, _70linebuf_65397, _32598);
    }
    else if (IS_ATOM(_70linebuf_65397) && IS_SEQUENCE(_32598)) {
    }
    else {
        Concat((object_ptr)&_70linebuf_65397, _70linebuf_65397, _32598);
    }
    _32598 = NOVALUE;
    // SubProg seg_flush pc: 69 op: STARTLINE (58)

    /** syncolor.e:100	end procedure*/
    // SubProg seg_flush pc: 71 op: RETURNP (29)

// Exiting block BLOCK: seg_flush

// block var new_color_65402
    return;
    // SubProg seg_flush pc: 74 op: BADRETURNF (43)
    ;
}


object _70default_state(object _token_65414)
{
    object _32602 = NOVALUE; // 65418 32602
// skipping _32601  name type: 0
// skipping _32600  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg default_state pc: 1 op: STARTLINE (58)

    /** syncolor.e:103		if not token then*/
    // SubProg default_state pc: 3 op: NOT_IFW (108)
    if (IS_ATOM_INT(_token_65414)) {
        if (_token_65414 != 0){
            goto L1; // [3] 12
        }
    }
    else {
        if (DBL_PTR(_token_65414)->dbl != 0.0){
            goto L1; // [3] 12
        }
    }
    // SubProg default_state pc: 6 op: STARTLINE (58)

    /** syncolor.e:104			token = tokenize:new()*/
    // SubProg default_state pc: 8 op: PROC (27)
    _0 = _token_65414;
    _token_65414 = _71new();
    DeRef(_0);
    // SubProg default_state pc: 11 op: NOP1 (159)
L1: // addr: 12 pc: 11 sub: 65412 op: 159
    // SubProg default_state pc: 12 op: STARTLINE (58)

    /** syncolor.e:106		return {*/
    // SubProg default_state pc: 14 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_token_65414);
    ((intptr_t*)_2)[1] = _token_65414;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _32602 = MAKE_SEQ(_1);
    // SubProg default_state pc: 20 op: RETURNF (28)

// Exiting block BLOCK: default_state

// block var token_65414
    DeRef(_token_65414);
    return _32602;
    // SubProg default_state pc: 24 op: BADRETURNF (43)
    ;
}


object _70new()
{
    object _state_65424 = NOVALUE;
// skipping _32605  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** syncolor.e:124		atom state = eumem:malloc()*/
    // SubProg new pc: 3 op: PROC (27)
    _0 = _state_65424;
    _state_65424 = _29malloc(1, 1);
    DeRef(_0);
    // SubProg new pc: 8 op: STARTLINE (58)

    /** syncolor.e:126		reset(state)*/
    // SubProg new pc: 10 op: PROC (27)
    Ref(_state_65424);
    _70reset(_state_65424);
    // SubProg new pc: 13 op: STARTLINE (58)

    /** syncolor.e:128		return state*/
    // SubProg new pc: 15 op: RETURNF (28)

// Exiting block BLOCK: new
    return _state_65424;
    // SubProg new pc: 19 op: BADRETURNF (43)
    ;
}


void _70tokenize_reset(object _token_65429)
{
    object _reset_1__tmp_at7_65432 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tokenize_reset pc: 1 op: STARTLINE (58)

    /** syncolor.e:138		if token then*/
    // SubProg tokenize_reset pc: 3 op: IF (20)
    if (_token_65429 == 0) {
        goto L1; // [3] 27
    }
    else {
        if (!IS_ATOM_INT(_token_65429) && DBL_PTR(_token_65429)->dbl == 0.0){
            goto L1; // [3] 27
        }
    }
    // SubProg tokenize_reset pc: 6 op: STARTLINE (58)

    /** syncolor.e:139			tokenize:reset(token)*/
    // SubProg tokenize_reset pc: 8 op: STARTLINE (58)

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    // SubProg tokenize_reset pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_reset pc: 12 op: PROC (27)
    _0 = _reset_1__tmp_at7_65432;
    _reset_1__tmp_at7_65432 = _71default_state();
    DeRef(_0);
    // SubProg tokenize_reset pc: 15 op: ASSIGN_SUBS (16)
    Ref(_reset_1__tmp_at7_65432);
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65429))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65429)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _token_65429);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _reset_1__tmp_at7_65432;
    DeRef(_1);
    // SubProg tokenize_reset pc: 19 op: STARTLINE (58)

    /** tokenize.e:213	end procedure*/
    // SubProg tokenize_reset pc: 21 op: ELSE (23)
    goto L2; // [21] 24
    // SubProg tokenize_reset pc: 23 op: NOP1 (159)
L2: // addr: 24 pc: 23 sub: 65427 op: 159
    // SubProg tokenize_reset pc: 24 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-reset from tokenize_reset @ 7

// block var reset_1__tmp_at7_65432
    DeRef(_reset_1__tmp_at7_65432);
    _reset_1__tmp_at7_65432 = NOVALUE;
    // SubProg tokenize_reset pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 65427 op: 159
    // SubProg tokenize_reset pc: 27 op: STARTLINE (58)

    /** syncolor.e:141	end procedure*/
    // SubProg tokenize_reset pc: 29 op: RETURNP (29)

// Exiting block BLOCK: tokenize_reset

// block var token_65429
    DeRef(_token_65429);
    return;
    // SubProg tokenize_reset pc: 32 op: BADRETURNF (43)
    ;
}


void _70reset(object _state_65435)
{
    object _token_65436 = NOVALUE;
    object _32609 = NOVALUE; // 65440 32609
    object _32608 = NOVALUE; // 65439 32608
// skipping _32607  name type: 0
    object _32606 = NOVALUE; // 65437 32606
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reset pc: 1 op: STARTLINE (58)

    /** syncolor.e:144		atom token = eumem:ram_space[state][S_TOKENIZER]*/
    // SubProg reset pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65435)){
        _32606 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65435)->dbl));
    }
    else{
        _32606 = (object)*(((s1_ptr)_2)->base + _state_65435);
    }
    // SubProg reset pc: 9 op: RHS_SUBS_CHECK (92)
    DeRef(_token_65436);
    _2 = (object)SEQ_PTR(_32606);
    _token_65436 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_token_65436);
    _32606 = NOVALUE;
    // SubProg reset pc: 13 op: STARTLINE (58)

    /** syncolor.e:145		tokenize_reset(token)*/
    // SubProg reset pc: 15 op: PROC (27)
    Ref(_token_65436);
    _70tokenize_reset(_token_65436);
    // SubProg reset pc: 18 op: STARTLINE (58)

    /** syncolor.e:146		eumem:ram_space[state] = default_state(token)*/
    // SubProg reset pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 22 op: PROC (27)
    Ref(_token_65436);
    _32608 = _70default_state(_token_65436);
    // SubProg reset pc: 26 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65435))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65435)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65435);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32608;
    if( _1 != _32608 ){
        DeRef(_1);
    }
    _32608 = NOVALUE;
    // SubProg reset pc: 30 op: STARTLINE (58)

    /** syncolor.e:147		eumem:ram_space[state] = default_state()*/
    // SubProg reset pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 34 op: PROC (27)
    _32609 = _70default_state(0);
    // SubProg reset pc: 38 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65435))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65435)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65435);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32609;
    if( _1 != _32609 ){
        DeRef(_1);
    }
    _32609 = NOVALUE;
    // SubProg reset pc: 42 op: STARTLINE (58)

    /** syncolor.e:148	end procedure*/
    // SubProg reset pc: 44 op: RETURNP (29)

// Exiting block BLOCK: reset

// block var state_65435
    DeRef(_state_65435);

// block var token_65436
    DeRef(_token_65436);
    return;
    // SubProg reset pc: 47 op: BADRETURNF (43)
    ;
}


object _70SyntaxColor(object _pline_65449, object _state_65450, object _multi_65452)
{
    object _class_65453 = NOVALUE;
    object _last_65454 = NOVALUE;
    object _i_65455 = NOVALUE;
    object _word_65456 = NOVALUE;
    object _c_65457 = NOVALUE;
    object _token_65458 = NOVALUE;
    object _keep_builtins_2__tmp_at19_65463 = NOVALUE;
    object _keep_builtins_1__tmp_at19_65462 = NOVALUE;
    object _keep_keywords_2__tmp_at41_65466 = NOVALUE;
    object _keep_keywords_1__tmp_at41_65465 = NOVALUE;
    object _keep_whitespace_3__tmp_at63_65470 = NOVALUE;
    object _keep_whitespace_2__tmp_at63_65469 = NOVALUE;
    object _keep_whitespace_1__tmp_at63_65468 = NOVALUE;
    object _keep_newlines_3__tmp_at88_65474 = NOVALUE;
    object _keep_newlines_2__tmp_at88_65473 = NOVALUE;
    object _keep_newlines_1__tmp_at88_65472 = NOVALUE;
    object _keep_comments_3__tmp_at113_65478 = NOVALUE;
    object _keep_comments_2__tmp_at113_65477 = NOVALUE;
    object _keep_comments_1__tmp_at113_65476 = NOVALUE;
    object _string_numbers_2__tmp_at138_65481 = NOVALUE;
    object _string_numbers_1__tmp_at138_65480 = NOVALUE;
    object _return_literal_string_2__tmp_at160_65484 = NOVALUE;
    object _return_literal_string_1__tmp_at160_65483 = NOVALUE;
    object _string_strip_quotes_3__tmp_at182_65488 = NOVALUE;
    object _string_strip_quotes_2__tmp_at182_65487 = NOVALUE;
    object _string_strip_quotes_1__tmp_at182_65486 = NOVALUE;
    object _ret_65576 = NOVALUE;
    object _32682 = NOVALUE; // 65578 32682
    object _32681 = NOVALUE; // 65577 32681
// skipping _32680  name type: 0
// skipping _32679  name type: 0
    object _32678 = NOVALUE; // 65571 32678
// skipping _32677  name type: 0
    object _32676 = NOVALUE; // 65569 32676
// skipping _32675  name type: 0
// skipping _32674  name type: 0
// skipping _32673  name type: 0
    object _32672 = NOVALUE; // 65562 32672
// skipping _32671  name type: 0
    object _32670 = NOVALUE; // 65559 32670
    object _32669 = NOVALUE; // 65558 32669
    object _32668 = NOVALUE; // 65556 32668
    object _32667 = NOVALUE; // 65555 32667
// skipping _32666  name type: 0
    object _32665 = NOVALUE; // 65551 32665
    object _32664 = NOVALUE; // 65550 32664
// skipping _32663  name type: 0
    object _32662 = NOVALUE; // 65548 32662
    object _32661 = NOVALUE; // 65547 32661
// skipping _32660  name type: 0
    object _32659 = NOVALUE; // 65545 32659
    object _32658 = NOVALUE; // 65544 32658
    object _32657 = NOVALUE; // 65543 32657
    object _32656 = NOVALUE; // 65540 32656
    object _32655 = NOVALUE; // 65539 32655
    object _32654 = NOVALUE; // 65538 32654
    object _32653 = NOVALUE; // 65537 32653
    object _32652 = NOVALUE; // 65536 32652
    object _32651 = NOVALUE; // 65535 32651
    object _32650 = NOVALUE; // 65534 32650
    object _32649 = NOVALUE; // 65533 32649
    object _32648 = NOVALUE; // 65532 32648
    object _32647 = NOVALUE; // 65531 32647
    object _32646 = NOVALUE; // 65530 32646
    object _32645 = NOVALUE; // 65528 32645
    object _32644 = NOVALUE; // 65527 32644
// skipping _32643  name type: 0
    object _32642 = NOVALUE; // 65525 32642
    object _32641 = NOVALUE; // 65524 32641
// skipping _32640  name type: 0
    object _32639 = NOVALUE; // 65522 32639
    object _32638 = NOVALUE; // 65521 32638
    object _32637 = NOVALUE; // 65520 32637
    object _32636 = NOVALUE; // 65518 32636
// skipping _32635  name type: 0
    object _32634 = NOVALUE; // 65516 32634
    object _32633 = NOVALUE; // 65515 32633
    object _32632 = NOVALUE; // 65514 32632
    object _32631 = NOVALUE; // 65513 32631
    object _32630 = NOVALUE; // 65512 32630
    object _32629 = NOVALUE; // 65511 32629
    object _32628 = NOVALUE; // 65510 32628
    object _32627 = NOVALUE; // 65509 32627
    object _32626 = NOVALUE; // 65508 32626
// skipping _32625  name type: 0
// skipping _32624  name type: 0
// skipping _32623  name type: 0
// skipping _32622  name type: 0
    object _32621 = NOVALUE; // 65499 32621
// skipping _32620  name type: 0
// skipping _32619  name type: 0
// skipping _32618  name type: 0
// skipping _32617  name type: 0
    object _32616 = NOVALUE; // 65493 32616
// skipping _32615  name type: 0
// skipping _32614  name type: 0
// skipping _32613  name type: 0
    object _32612 = NOVALUE; // 65459 32612
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg SyntaxColor pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 3 op: STARTLINE (58)

    /** syncolor.e:183		atom token = eumem:ram_space[state][S_TOKENIZER]*/
    // SubProg SyntaxColor pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65450)){
        _32612 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65450)->dbl));
    }
    else{
        _32612 = (object)*(((s1_ptr)_2)->base + _state_65450);
    }
    // SubProg SyntaxColor pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_token_65458);
    _2 = (object)SEQ_PTR(_32612);
    _token_65458 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_token_65458);
    _32612 = NOVALUE;
    // SubProg SyntaxColor pc: 15 op: STARTLINE (58)

    /** syncolor.e:185		tokenize:keep_builtins(,token)*/
    // SubProg SyntaxColor pc: 17 op: STARTLINE (58)

    /** tokenize.e:235		eumem:ram_space[state][ID_BUILTIN] = val*/
    // SubProg SyntaxColor pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 21 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
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
L1: // addr: 35 pc: 34 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 35 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_builtins from SyntaxColor @ 19

// block var keep_builtins_1__tmp_at19_65462

// block var keep_builtins_2__tmp_at19_65463
    // SubProg SyntaxColor pc: 37 op: STARTLINE (58)

    /** syncolor.e:186		tokenize:keep_keywords(,token)*/
    // SubProg SyntaxColor pc: 39 op: STARTLINE (58)

    /** tokenize.e:244		eumem:ram_space[state][ID_KEYWORD] = val*/
    // SubProg SyntaxColor pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 43 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
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
L2: // addr: 57 pc: 56 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 57 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_keywords from SyntaxColor @ 41

// block var keep_keywords_1__tmp_at41_65465

// block var keep_keywords_2__tmp_at41_65466
    // SubProg SyntaxColor pc: 59 op: STARTLINE (58)

    /** syncolor.e:187		tokenize:keep_whitespace(,token)*/
    // SubProg SyntaxColor pc: 61 op: STARTLINE (58)

    /** tokenize.e:253		eumem:ram_space[state][DELETE_WHITE] = not val*/
    // SubProg SyntaxColor pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 65 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 70 op: NOT (7)
    _keep_whitespace_3__tmp_at63_65470 = (1 == 0);
    // SubProg SyntaxColor pc: 73 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_whitespace_3__tmp_at63_65470;
    DeRef(_1);
    // SubProg SyntaxColor pc: 77 op: STARTLINE (58)

    /** tokenize.e:254	end procedure*/
    // SubProg SyntaxColor pc: 79 op: ELSE (23)
    goto L3; // [79] 82
    // SubProg SyntaxColor pc: 81 op: NOP1 (159)
L3: // addr: 82 pc: 81 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 82 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_whitespace from SyntaxColor @ 63

// block var keep_whitespace_1__tmp_at63_65468

// block var keep_whitespace_2__tmp_at63_65469

// block var keep_whitespace_3__tmp_at63_65470
    // SubProg SyntaxColor pc: 84 op: STARTLINE (58)

    /** syncolor.e:188		tokenize:keep_newlines(,token)*/
    // SubProg SyntaxColor pc: 86 op: STARTLINE (58)

    /** tokenize.e:262		eumem:ram_space[state][IGNORE_NEWLINES] = not val*/
    // SubProg SyntaxColor pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 90 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 95 op: NOT (7)
    _keep_newlines_3__tmp_at88_65474 = (1 == 0);
    // SubProg SyntaxColor pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_newlines_3__tmp_at88_65474;
    DeRef(_1);
    // SubProg SyntaxColor pc: 102 op: STARTLINE (58)

    /** tokenize.e:263	end procedure*/
    // SubProg SyntaxColor pc: 104 op: ELSE (23)
    goto L4; // [104] 107
    // SubProg SyntaxColor pc: 106 op: NOP1 (159)
L4: // addr: 107 pc: 106 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 107 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_newlines from SyntaxColor @ 88

// block var keep_newlines_1__tmp_at88_65472

// block var keep_newlines_2__tmp_at88_65473

// block var keep_newlines_3__tmp_at88_65474
    // SubProg SyntaxColor pc: 109 op: STARTLINE (58)

    /** syncolor.e:189		tokenize:keep_comments(,token)*/
    // SubProg SyntaxColor pc: 111 op: STARTLINE (58)

    /** tokenize.e:272		eumem:ram_space[state][IGNORE_COMMENTS] = not val*/
    // SubProg SyntaxColor pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 115 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 120 op: NOT (7)
    _keep_comments_3__tmp_at113_65478 = (1 == 0);
    // SubProg SyntaxColor pc: 123 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_comments_3__tmp_at113_65478;
    DeRef(_1);
    // SubProg SyntaxColor pc: 127 op: STARTLINE (58)

    /** tokenize.e:273	end procedure*/
    // SubProg SyntaxColor pc: 129 op: ELSE (23)
    goto L5; // [129] 132
    // SubProg SyntaxColor pc: 131 op: NOP1 (159)
L5: // addr: 132 pc: 131 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 132 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-keep_comments from SyntaxColor @ 113

// block var keep_comments_1__tmp_at113_65476

// block var keep_comments_2__tmp_at113_65477

// block var keep_comments_3__tmp_at113_65478
    // SubProg SyntaxColor pc: 134 op: STARTLINE (58)

    /** syncolor.e:190		tokenize:string_numbers(,token)*/
    // SubProg SyntaxColor pc: 136 op: STARTLINE (58)

    /** tokenize.e:310		eumem:ram_space[state][STRING_NUMBERS] = val*/
    // SubProg SyntaxColor pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 140 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
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
L6: // addr: 154 pc: 153 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 154 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-string_numbers from SyntaxColor @ 138

// block var string_numbers_1__tmp_at138_65480

// block var string_numbers_2__tmp_at138_65481
    // SubProg SyntaxColor pc: 156 op: STARTLINE (58)

    /** syncolor.e:191		tokenize:return_literal_string(,token)*/
    // SubProg SyntaxColor pc: 158 op: STARTLINE (58)

    /** tokenize.e:286		eumem:ram_space[state][LITERAL_STRING] = val*/
    // SubProg SyntaxColor pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 162 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
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
L7: // addr: 176 pc: 175 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 176 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-return_literal_string from SyntaxColor @ 160

// block var return_literal_string_1__tmp_at160_65483

// block var return_literal_string_2__tmp_at160_65484
    // SubProg SyntaxColor pc: 178 op: STARTLINE (58)

    /** syncolor.e:192		tokenize:string_strip_quotes(0,token)*/
    // SubProg SyntaxColor pc: 180 op: STARTLINE (58)

    /** tokenize.e:296		eumem:ram_space[state][STRING_KEEP_QUOTES] = not val*/
    // SubProg SyntaxColor pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 184 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65458))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65458)->dbl));
    else
    _3 = (object)(_token_65458 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 189 op: NOT (7)
    _string_strip_quotes_3__tmp_at182_65488 = (0 == 0);
    // SubProg SyntaxColor pc: 192 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _string_strip_quotes_3__tmp_at182_65488;
    DeRef(_1);
    // SubProg SyntaxColor pc: 196 op: STARTLINE (58)

    /** tokenize.e:297	end procedure*/
    // SubProg SyntaxColor pc: 198 op: ELSE (23)
    goto L8; // [198] 201
    // SubProg SyntaxColor pc: 200 op: NOP1 (159)
L8: // addr: 201 pc: 200 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 201 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-string_strip_quotes from SyntaxColor @ 182

// block var string_strip_quotes_1__tmp_at182_65486

// block var string_strip_quotes_2__tmp_at182_65487

// block var string_strip_quotes_3__tmp_at182_65488
    // SubProg SyntaxColor pc: 203 op: STARTLINE (58)

    /** syncolor.e:194		line = tokenize:tokenize_string(pline, token, 0, multi)*/
    // SubProg SyntaxColor pc: 205 op: PROC (27)
    RefDS(_pline_65449);
    Ref(_token_65458);
    _0 = _71tokenize_string(_pline_65449, _token_65458, 0, _multi_65452);
    DeRef(_70line_65395);
    _70line_65395 = _0;
    // SubProg SyntaxColor pc: 212 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 214 op: STARTLINE (58)

    /** syncolor.e:196		line = line[1]*/
    // SubProg SyntaxColor pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 218 op: RHS_SUBS (25)
    _0 = _70line_65395;
    _2 = (object)SEQ_PTR(_70line_65395);
    _70line_65395 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_70line_65395);
    DeRefDS(_0);
    // SubProg SyntaxColor pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 224 op: STARTLINE (58)

    /** syncolor.e:197		current_color = DONT_CARE*/
    // SubProg SyntaxColor pc: 226 op: ASSIGN_I (113)
    _70current_color_65398 = -1;
    // SubProg SyntaxColor pc: 229 op: STARTLINE (58)

    /** syncolor.e:198		seg = 1*/
    // SubProg SyntaxColor pc: 231 op: ASSIGN_I (113)
    _70seg_65399 = 1;
    // SubProg SyntaxColor pc: 234 op: STARTLINE (58)

    /** syncolor.e:199		color_segments = {}*/
    // SubProg SyntaxColor pc: 236 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_70color_segments_65396);
    _70color_segments_65396 = _21936;
    // SubProg SyntaxColor pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 241 op: STARTLINE (58)

    /** syncolor.e:201		while 1 do*/
    // SubProg SyntaxColor pc: 243 op: NOP2 (110)
    // SubProg SyntaxColor pc: 245 op: NOPWHILE (158)
L9: // addr: 246 pc: 245 sub: 65447 op: 158
    // SubProg SyntaxColor pc: 246 op: STARTLINE (58)

    /** syncolor.e:202			if seg > length(line) then*/
    // SubProg SyntaxColor pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 252 op: LENGTH (42)
    if (IS_SEQUENCE(_70line_65395)){
            _32616 = SEQ_PTR(_70line_65395)->length;
    }
    else {
        _32616 = 1;
    }
    // SubProg SyntaxColor pc: 255 op: GREATER_IFW_I (124)
    if (_70seg_65399 <= _32616)
    goto LA; // [255] 264
    // SubProg SyntaxColor pc: 259 op: STARTLINE (58)

    /** syncolor.e:203				exit*/
    // SubProg SyntaxColor pc: 261 op: EXIT (61)
    goto LB; // [261] 747
    // SubProg SyntaxColor pc: 263 op: NOP1 (159)
LA: // addr: 264 pc: 263 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 264 op: STARTLINE (58)

    /** syncolor.e:206			c = line[seg]*/
    // SubProg SyntaxColor pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 270 op: RHS_SUBS (25)
    DeRef(_c_65457);
    _2 = (object)SEQ_PTR(_70line_65395);
    _c_65457 = (object)*(((s1_ptr)_2)->base + _70seg_65399);
    Ref(_c_65457);
    // SubProg SyntaxColor pc: 274 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 276 op: STARTLINE (58)

    /** syncolor.e:207			class = c[tokenize:TTYPE]*/
    // SubProg SyntaxColor pc: 278 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_c_65457);
    _class_65453 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_class_65453))
    _class_65453 = (object)DBL_PTR(_class_65453)->dbl;
    // SubProg SyntaxColor pc: 282 op: STARTLINE (58)

    /** syncolor.e:209			if class = tokenize:T_WHITE then*/
    // SubProg SyntaxColor pc: 284 op: EQUALS_IFW_I (121)
    if (_class_65453 != 40)
    goto LC; // [284] 303
    // SubProg SyntaxColor pc: 288 op: STARTLINE (58)

    /** syncolor.e:210				linebuf &= c[tokenize:TDATA]-- continue with current color*/
    // SubProg SyntaxColor pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 292 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_c_65457);
    _32621 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SyntaxColor pc: 296 op: CONCAT (15)
    if (IS_SEQUENCE(_70linebuf_65397) && IS_ATOM(_32621)) {
        Ref(_32621);
        Append(&_70linebuf_65397, _70linebuf_65397, _32621);
    }
    else if (IS_ATOM(_70linebuf_65397) && IS_SEQUENCE(_32621)) {
    }
    else {
        Concat((object_ptr)&_70linebuf_65397, _70linebuf_65397, _32621);
    }
    _32621 = NOVALUE;
    // SubProg SyntaxColor pc: 300 op: ELSE (23)
    goto LD; // [300] 734
    // SubProg SyntaxColor pc: 302 op: NOP1 (159)
LC: // addr: 303 pc: 302 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 303 op: STARTLINE (58)

    /** syncolor.e:211			elsif class = tokenize:T_KEYWORD then*/
    // SubProg SyntaxColor pc: 305 op: EQUALS_IFW_I (121)
    if (_class_65453 != 10)
    goto LE; // [305] 319
    // SubProg SyntaxColor pc: 309 op: STARTLINE (58)

    /** syncolor.e:212				seg_flush(KEYWORD_COLOR)*/
    // SubProg SyntaxColor pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 313 op: PROC (27)
    _70seg_flush(_70KEYWORD_COLOR_65337);
    // SubProg SyntaxColor pc: 316 op: ELSE (23)
    goto LD; // [316] 734
    // SubProg SyntaxColor pc: 318 op: NOP1 (159)
LE: // addr: 319 pc: 318 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 319 op: STARTLINE (58)

    /** syncolor.e:214			elsif class = tokenize:T_BUILTIN then*/
    // SubProg SyntaxColor pc: 321 op: EQUALS_IFW_I (121)
    if (_class_65453 != 41)
    goto LF; // [321] 335
    // SubProg SyntaxColor pc: 325 op: STARTLINE (58)

    /** syncolor.e:215				seg_flush(KEYWORD_COLOR)*/
    // SubProg SyntaxColor pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 329 op: PROC (27)
    _70seg_flush(_70KEYWORD_COLOR_65337);
    // SubProg SyntaxColor pc: 332 op: ELSE (23)
    goto LD; // [332] 734
    // SubProg SyntaxColor pc: 334 op: NOP1 (159)
LF: // addr: 335 pc: 334 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 335 op: STARTLINE (58)

    /** syncolor.e:217			elsif class = tokenize:T_IDENTIFIER then*/
    // SubProg SyntaxColor pc: 337 op: EQUALS_IFW_I (121)
    if (_class_65453 != 9)
    goto L10; // [337] 351
    // SubProg SyntaxColor pc: 341 op: STARTLINE (58)

    /** syncolor.e:218				seg_flush(NORMAL_COLOR)*/
    // SubProg SyntaxColor pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 345 op: PROC (27)
    _70seg_flush(_70NORMAL_COLOR_65335);
    // SubProg SyntaxColor pc: 348 op: ELSE (23)
    goto LD; // [348] 734
    // SubProg SyntaxColor pc: 350 op: NOP1 (159)
L10: // addr: 351 pc: 350 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 351 op: STARTLINE (58)

    /** syncolor.e:220			elsif class = tokenize:T_LPAREN or class = tokenize:T_RPAREN or*/
    // SubProg SyntaxColor pc: 353 op: EQUALS (3)
    _32626 = (_class_65453 == 28);
    // SubProg SyntaxColor pc: 357 op: SC1_OR (143)
    if (_32626 != 0) {
        _32627 = 1;
        goto L11; // [357] 369
    }
    // SubProg SyntaxColor pc: 361 op: EQUALS (3)
    _32628 = (_class_65453 == 29);
    // SubProg SyntaxColor pc: 365 op: SC2_OR (144)
    _32627 = (_32628 != 0);
    // SubProg SyntaxColor pc: 368 op: NOP1 (159)
L11: // addr: 369 pc: 368 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 369 op: SC1_OR (143)
    if (_32627 != 0) {
        _32629 = 1;
        goto L12; // [369] 381
    }
    // SubProg SyntaxColor pc: 373 op: EQUALS (3)
    _32630 = (_class_65453 == 32);
    // SubProg SyntaxColor pc: 377 op: SC2_OR (144)
    _32629 = (_32630 != 0);
    // SubProg SyntaxColor pc: 380 op: NOP1 (159)
L12: // addr: 381 pc: 380 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 381 op: SC1_OR (143)
    if (_32629 != 0) {
        _32631 = 1;
        goto L13; // [381] 393
    }
    // SubProg SyntaxColor pc: 385 op: EQUALS (3)
    _32632 = (_class_65453 == 33);
    // SubProg SyntaxColor pc: 389 op: SC2_OR (144)
    _32631 = (_32632 != 0);
    // SubProg SyntaxColor pc: 392 op: NOP1 (159)
L13: // addr: 393 pc: 392 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 393 op: SC1_OR (143)
    if (_32631 != 0) {
        _32633 = 1;
        goto L14; // [393] 405
    }
    // SubProg SyntaxColor pc: 397 op: EQUALS (3)
    _32634 = (_class_65453 == 30);
    // SubProg SyntaxColor pc: 401 op: SC2_OR (144)
    _32633 = (_32634 != 0);
    // SubProg SyntaxColor pc: 404 op: NOP1 (159)
L14: // addr: 405 pc: 404 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 405 op: SC1_OR_IF (147)
    if (_32633 != 0) {
        goto L15; // [405] 418
    }
    // SubProg SyntaxColor pc: 409 op: EQUALS (3)
    _32636 = (_class_65453 == 31);
    // SubProg SyntaxColor pc: 413 op: NOP1 (159)
    // SubProg SyntaxColor pc: 414 op: IF (20)
    if (_32636 == 0)
    {
        DeRef(_32636);
        _32636 = NOVALUE;
        goto L16; // [414] 602
    }
    else{
        DeRef(_32636);
        _32636 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 417 op: NOP1 (159)
L15: // addr: 418 pc: 417 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 418 op: STARTLINE (58)

    /** syncolor.e:223				if class = tokenize:T_LPAREN or class = tokenize:T_LBRACKET or*/
    // SubProg SyntaxColor pc: 420 op: EQUALS (3)
    _32637 = (_class_65453 == 28);
    // SubProg SyntaxColor pc: 424 op: SC1_OR (143)
    if (_32637 != 0) {
        _32638 = 1;
        goto L17; // [424] 436
    }
    // SubProg SyntaxColor pc: 428 op: EQUALS (3)
    _32639 = (_class_65453 == 32);
    // SubProg SyntaxColor pc: 432 op: SC2_OR (144)
    _32638 = (_32639 != 0);
    // SubProg SyntaxColor pc: 435 op: NOP1 (159)
L17: // addr: 436 pc: 435 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 436 op: SC1_OR_IF (147)
    if (_32638 != 0) {
        goto L18; // [436] 449
    }
    // SubProg SyntaxColor pc: 440 op: EQUALS (3)
    _32641 = (_class_65453 == 30);
    // SubProg SyntaxColor pc: 444 op: NOP1 (159)
    // SubProg SyntaxColor pc: 445 op: IF (20)
    if (_32641 == 0)
    {
        DeRef(_32641);
        _32641 = NOVALUE;
        goto L19; // [445] 471
    }
    else{
        DeRef(_32641);
        _32641 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 448 op: NOP1 (159)
L18: // addr: 449 pc: 448 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 449 op: STARTLINE (58)

    /** syncolor.e:225					eumem:ram_space[state][S_BRACKET_LEVEL] += 1*/
    // SubProg SyntaxColor pc: 451 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 453 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65450))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65450)->dbl));
    else
    _3 = (object)(_state_65450 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 458 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _32644 = (object)*(((s1_ptr)_2)->base + 2);
    _32642 = NOVALUE;
    // SubProg SyntaxColor pc: 462 op: PLUS1 (93)
    if (IS_ATOM_INT(_32644)) {
        _32645 = _32644 + 1;
        if (_32645 > MAXINT){
            _32645 = NewDouble((eudouble)_32645);
        }
    }
    else
    _32645 = binary_op(PLUS, 1, _32644);
    _32644 = NOVALUE;
    // SubProg SyntaxColor pc: 466 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32645;
    if( _1 != _32645 ){
        DeRef(_1);
    }
    _32645 = NOVALUE;
    _32642 = NOVALUE;
    // SubProg SyntaxColor pc: 470 op: NOP1 (159)
L19: // addr: 471 pc: 470 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 471 op: STARTLINE (58)

    /** syncolor.e:228				if eumem:ram_space[state][S_BRACKET_LEVEL] >= 1 and*/
    // SubProg SyntaxColor pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 475 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65450)){
        _32646 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65450)->dbl));
    }
    else{
        _32646 = (object)*(((s1_ptr)_2)->base + _state_65450);
    }
    // SubProg SyntaxColor pc: 479 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32646);
    _32647 = (object)*(((s1_ptr)_2)->base + 2);
    _32646 = NOVALUE;
    // SubProg SyntaxColor pc: 483 op: GREATEREQ (2)
    if (IS_ATOM_INT(_32647)) {
        _32648 = (_32647 >= 1);
    }
    else {
        _32648 = binary_op(GREATEREQ, _32647, 1);
    }
    _32647 = NOVALUE;
    // SubProg SyntaxColor pc: 487 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_32648)) {
        if (_32648 == 0) {
            goto L1A; // [487] 538
        }
    }
    else {
        if (DBL_PTR(_32648)->dbl == 0.0) {
            goto L1A; // [487] 538
        }
    }
    // SubProg SyntaxColor pc: 491 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 493 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65450)){
        _32650 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65450)->dbl));
    }
    else{
        _32650 = (object)*(((s1_ptr)_2)->base + _state_65450);
    }
    // SubProg SyntaxColor pc: 497 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32650);
    _32651 = (object)*(((s1_ptr)_2)->base + 2);
    _32650 = NOVALUE;
    // SubProg SyntaxColor pc: 501 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 503 op: LENGTH (42)
    if (IS_SEQUENCE(_70BRACKET_COLOR_65340)){
            _32652 = SEQ_PTR(_70BRACKET_COLOR_65340)->length;
    }
    else {
        _32652 = 1;
    }
    // SubProg SyntaxColor pc: 506 op: LESSEQ (5)
    if (IS_ATOM_INT(_32651)) {
        _32653 = (_32651 <= _32652);
    }
    else {
        _32653 = binary_op(LESSEQ, _32651, _32652);
    }
    _32651 = NOVALUE;
    _32652 = NOVALUE;
    // SubProg SyntaxColor pc: 510 op: NOP1 (159)
    // SubProg SyntaxColor pc: 511 op: IF (20)
    if (_32653 == 0) {
        DeRef(_32653);
        _32653 = NOVALUE;
        goto L1A; // [511] 538
    }
    else {
        if (!IS_ATOM_INT(_32653) && DBL_PTR(_32653)->dbl == 0.0){
            DeRef(_32653);
            _32653 = NOVALUE;
            goto L1A; // [511] 538
        }
        DeRef(_32653);
        _32653 = NOVALUE;
    }
    DeRef(_32653);
    _32653 = NOVALUE;
    // SubProg SyntaxColor pc: 514 op: STARTLINE (58)

    /** syncolor.e:231					seg_flush(BRACKET_COLOR[eumem:ram_space[state][S_BRACKET_LEVEL]])*/
    // SubProg SyntaxColor pc: 516 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 518 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 520 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65450)){
        _32654 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65450)->dbl));
    }
    else{
        _32654 = (object)*(((s1_ptr)_2)->base + _state_65450);
    }
    // SubProg SyntaxColor pc: 524 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32654);
    _32655 = (object)*(((s1_ptr)_2)->base + 2);
    _32654 = NOVALUE;
    // SubProg SyntaxColor pc: 528 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_70BRACKET_COLOR_65340);
    if (!IS_ATOM_INT(_32655)){
        _32656 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32655)->dbl));
    }
    else{
        _32656 = (object)*(((s1_ptr)_2)->base + _32655);
    }
    // SubProg SyntaxColor pc: 532 op: PROC (27)
    Ref(_32656);
    _70seg_flush(_32656);
    _32656 = NOVALUE;
    // SubProg SyntaxColor pc: 535 op: ELSE (23)
    goto L1B; // [535] 546
    // SubProg SyntaxColor pc: 537 op: NOP1 (159)
L1A: // addr: 538 pc: 537 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 538 op: STARTLINE (58)

    /** syncolor.e:233					seg_flush(NORMAL_COLOR)*/
    // SubProg SyntaxColor pc: 540 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 542 op: PROC (27)
    _70seg_flush(_70NORMAL_COLOR_65335);
    // SubProg SyntaxColor pc: 545 op: NOP1 (159)
L1B: // addr: 546 pc: 545 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 546 op: STARTLINE (58)

    /** syncolor.e:236				if class = tokenize:T_RPAREN or class = tokenize:T_RBRACKET or*/
    // SubProg SyntaxColor pc: 548 op: EQUALS (3)
    _32657 = (_class_65453 == 29);
    // SubProg SyntaxColor pc: 552 op: SC1_OR (143)
    if (_32657 != 0) {
        _32658 = 1;
        goto L1C; // [552] 564
    }
    // SubProg SyntaxColor pc: 556 op: EQUALS (3)
    _32659 = (_class_65453 == 33);
    // SubProg SyntaxColor pc: 560 op: SC2_OR (144)
    _32658 = (_32659 != 0);
    // SubProg SyntaxColor pc: 563 op: NOP1 (159)
L1C: // addr: 564 pc: 563 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 564 op: SC1_OR_IF (147)
    if (_32658 != 0) {
        goto L1D; // [564] 577
    }
    // SubProg SyntaxColor pc: 568 op: EQUALS (3)
    _32661 = (_class_65453 == 31);
    // SubProg SyntaxColor pc: 572 op: NOP1 (159)
    // SubProg SyntaxColor pc: 573 op: IF (20)
    if (_32661 == 0)
    {
        DeRef(_32661);
        _32661 = NOVALUE;
        goto LD; // [573] 734
    }
    else{
        DeRef(_32661);
        _32661 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 576 op: NOP1 (159)
L1D: // addr: 577 pc: 576 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 577 op: STARTLINE (58)

    /** syncolor.e:238					eumem:ram_space[state][S_BRACKET_LEVEL] -= 1*/
    // SubProg SyntaxColor pc: 579 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 581 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65450))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65450)->dbl));
    else
    _3 = (object)(_state_65450 + ((s1_ptr)_2)->base);
    // SubProg SyntaxColor pc: 586 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _32664 = (object)*(((s1_ptr)_2)->base + 2);
    _32662 = NOVALUE;
    // SubProg SyntaxColor pc: 590 op: MINUS (10)
    if (IS_ATOM_INT(_32664)) {
        _32665 = _32664 - 1;
        if ((object)((uintptr_t)_32665 +(uintptr_t) HIGH_BITS) >= 0){
            _32665 = NewDouble((eudouble)_32665);
        }
    }
    else {
        _32665 = binary_op(MINUS, _32664, 1);
    }
    _32664 = NOVALUE;
    // SubProg SyntaxColor pc: 594 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32665;
    if( _1 != _32665 ){
        DeRef(_1);
    }
    _32665 = NOVALUE;
    _32662 = NOVALUE;
    // SubProg SyntaxColor pc: 598 op: NOP1 (159)
    // SubProg SyntaxColor pc: 599 op: ELSE (23)
    goto LD; // [599] 734
    // SubProg SyntaxColor pc: 601 op: NOP1 (159)
L16: // addr: 602 pc: 601 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 602 op: STARTLINE (58)

    /** syncolor.e:241			elsif class = tokenize:T_NEWLINE then*/
    // SubProg SyntaxColor pc: 604 op: EQUALS_IFW_I (121)
    if (_class_65453 != 4)
    goto L1E; // [604] 668
    // SubProg SyntaxColor pc: 608 op: STARTLINE (58)

    /** syncolor.e:242				if eumem:ram_space[state][S_KEEP_NEWLINES] then*/
    // SubProg SyntaxColor pc: 610 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 612 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_state_65450)){
        _32667 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65450)->dbl));
    }
    else{
        _32667 = (object)*(((s1_ptr)_2)->base + _state_65450);
    }
    // SubProg SyntaxColor pc: 616 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32667);
    _32668 = (object)*(((s1_ptr)_2)->base + 3);
    _32667 = NOVALUE;
    // SubProg SyntaxColor pc: 620 op: IF (20)
    if (_32668 == 0) {
        _32668 = NOVALUE;
        goto LB; // [620] 747
    }
    else {
        if (!IS_ATOM_INT(_32668) && DBL_PTR(_32668)->dbl == 0.0){
            _32668 = NOVALUE;
            goto LB; // [620] 747
        }
        _32668 = NOVALUE;
    }
    _32668 = NOVALUE;
    // SubProg SyntaxColor pc: 623 op: STARTLINE (58)

    /** syncolor.e:244					if equal(c[tokenize:TDATA],"") then*/
    // SubProg SyntaxColor pc: 625 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_c_65457);
    _32669 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SyntaxColor pc: 629 op: EQUAL (153)
    if (_32669 == _21936)
    _32670 = 1;
    else if (IS_ATOM_INT(_32669) && IS_ATOM_INT(_21936))
    _32670 = 0;
    else
    _32670 = (compare(_32669, _21936) == 0);
    _32669 = NOVALUE;
    // SubProg SyntaxColor pc: 633 op: IF (20)
    if (_32670 == 0)
    {
        _32670 = NOVALUE;
        goto L1F; // [633] 647
    }
    else{
        _32670 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 636 op: STARTLINE (58)

    /** syncolor.e:245						linebuf &= '\n'*/
    // SubProg SyntaxColor pc: 638 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 640 op: CONCAT (15)
    Append(&_70linebuf_65397, _70linebuf_65397, 10);
    // SubProg SyntaxColor pc: 644 op: ELSE (23)
    goto LB; // [644] 747
    // SubProg SyntaxColor pc: 646 op: NOP1 (159)
L1F: // addr: 647 pc: 646 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 647 op: STARTLINE (58)

    /** syncolor.e:247						linebuf &= c[tokenize:TDATA]*/
    // SubProg SyntaxColor pc: 649 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 651 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_c_65457);
    _32672 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SyntaxColor pc: 655 op: CONCAT (15)
    if (IS_SEQUENCE(_70linebuf_65397) && IS_ATOM(_32672)) {
        Ref(_32672);
        Append(&_70linebuf_65397, _70linebuf_65397, _32672);
    }
    else if (IS_ATOM(_70linebuf_65397) && IS_SEQUENCE(_32672)) {
    }
    else {
        Concat((object_ptr)&_70linebuf_65397, _70linebuf_65397, _32672);
    }
    _32672 = NOVALUE;
    // SubProg SyntaxColor pc: 659 op: NOP1 (159)
    // SubProg SyntaxColor pc: 660 op: NOP1 (159)
    // SubProg SyntaxColor pc: 661 op: STARTLINE (58)

    /** syncolor.e:250				exit  -- end of line*/
    // SubProg SyntaxColor pc: 663 op: EXIT (61)
    goto LB; // [663] 747
    // SubProg SyntaxColor pc: 665 op: ELSE (23)
    goto LD; // [665] 734
    // SubProg SyntaxColor pc: 667 op: NOP1 (159)
L1E: // addr: 668 pc: 667 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 668 op: STARTLINE (58)

    /** syncolor.e:252			elsif class = tokenize:T_EOF then*/
    // SubProg SyntaxColor pc: 670 op: EQUALS_IFW_I (121)
    if (_class_65453 != 1)
    goto L20; // [670] 681
    // SubProg SyntaxColor pc: 674 op: STARTLINE (58)

    /** syncolor.e:253				exit  -- end of line*/
    // SubProg SyntaxColor pc: 676 op: EXIT (61)
    goto LB; // [676] 747
    // SubProg SyntaxColor pc: 678 op: ELSE (23)
    goto LD; // [678] 734
    // SubProg SyntaxColor pc: 680 op: NOP1 (159)
L20: // addr: 681 pc: 680 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 681 op: STARTLINE (58)

    /** syncolor.e:255			elsif class = tokenize:T_COMMENT then*/
    // SubProg SyntaxColor pc: 683 op: EQUALS_IFW_I (121)
    if (_class_65453 != 5)
    goto L21; // [683] 697
    // SubProg SyntaxColor pc: 687 op: STARTLINE (58)

    /** syncolor.e:256				seg_flush(COMMENT_COLOR)*/
    // SubProg SyntaxColor pc: 689 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 691 op: PROC (27)
    _70seg_flush(_70COMMENT_COLOR_65336);
    // SubProg SyntaxColor pc: 694 op: ELSE (23)
    goto LD; // [694] 734
    // SubProg SyntaxColor pc: 696 op: NOP1 (159)
L21: // addr: 697 pc: 696 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 697 op: STARTLINE (58)

    /** syncolor.e:258			elsif class = tokenize:T_STRING or class = tokenize:T_CHAR then*/
    // SubProg SyntaxColor pc: 699 op: EQUALS (3)
    _32676 = (_class_65453 == 8);
    // SubProg SyntaxColor pc: 703 op: SC1_OR_IF (147)
    if (_32676 != 0) {
        goto L22; // [703] 716
    }
    // SubProg SyntaxColor pc: 707 op: EQUALS (3)
    _32678 = (_class_65453 == 7);
    // SubProg SyntaxColor pc: 711 op: NOP1 (159)
    // SubProg SyntaxColor pc: 712 op: IF (20)
    if (_32678 == 0)
    {
        DeRef(_32678);
        _32678 = NOVALUE;
        goto L23; // [712] 726
    }
    else{
        DeRef(_32678);
        _32678 = NOVALUE;
    }
    // SubProg SyntaxColor pc: 715 op: NOP1 (159)
L22: // addr: 716 pc: 715 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 716 op: STARTLINE (58)

    /** syncolor.e:259				seg_flush(STRING_COLOR)*/
    // SubProg SyntaxColor pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 720 op: PROC (27)
    _70seg_flush(_70STRING_COLOR_65339);
    // SubProg SyntaxColor pc: 723 op: ELSE (23)
    goto LD; // [723] 734
    // SubProg SyntaxColor pc: 725 op: NOP1 (159)
L23: // addr: 726 pc: 725 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 726 op: STARTLINE (58)

    /** syncolor.e:262				seg_flush(NORMAL_COLOR)*/
    // SubProg SyntaxColor pc: 728 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 730 op: PROC (27)
    _70seg_flush(_70NORMAL_COLOR_65335);
    // SubProg SyntaxColor pc: 733 op: NOP1 (159)
LD: // addr: 734 pc: 733 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 734 op: STARTLINE (58)

    /** syncolor.e:264			seg += 1*/
    // SubProg SyntaxColor pc: 736 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 738 op: PLUS1_I (117)
    _70seg_65399 = _70seg_65399 + 1;
    // SubProg SyntaxColor pc: 742 op: STARTLINE (58)

    /** syncolor.e:265		end while*/
    // SubProg SyntaxColor pc: 744 op: ENDWHILE (22)
    goto L9; // [744] 246
    // SubProg SyntaxColor pc: 746 op: NOP1 (159)
LB: // addr: 747 pc: 746 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 747 op: STARTLINE (58)

    /** syncolor.e:268		if current_color = DONT_CARE then*/
    // SubProg SyntaxColor pc: 749 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 751 op: EQUALS_IFW_I (121)
    if (_70current_color_65398 != -1)
    goto L24; // [751] 763
    // SubProg SyntaxColor pc: 755 op: STARTLINE (58)

    /** syncolor.e:269			current_color = NORMAL_COLOR*/
    // SubProg SyntaxColor pc: 757 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 759 op: ASSIGN_I (113)
    _70current_color_65398 = _70NORMAL_COLOR_65335;
    // SubProg SyntaxColor pc: 762 op: NOP1 (159)
L24: // addr: 763 pc: 762 sub: 65447 op: 159
    // SubProg SyntaxColor pc: 763 op: STARTLINE (58)

    /** syncolor.e:272		sequence ret = linebuf*/
    // SubProg SyntaxColor pc: 765 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 767 op: ASSIGN (18)
    RefDS(_70linebuf_65397);
    DeRef(_ret_65576);
    _ret_65576 = _70linebuf_65397;
    // SubProg SyntaxColor pc: 770 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 772 op: STARTLINE (58)

    /** syncolor.e:273		linebuf = ""*/
    // SubProg SyntaxColor pc: 774 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_70linebuf_65397);
    _70linebuf_65397 = _21936;
    // SubProg SyntaxColor pc: 777 op: SEQUENCE_CHECK (97)
    // SubProg SyntaxColor pc: 779 op: STARTLINE (58)

    /** syncolor.e:274		return append(color_segments, {current_color, ret})*/
    // SubProg SyntaxColor pc: 781 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 783 op: GLOBAL_INIT_CHECK (109)
    // SubProg SyntaxColor pc: 785 op: RIGHT_BRACE_2 (85)
    RefDS(_ret_65576);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _70current_color_65398;
    ((intptr_t *)_2)[2] = _ret_65576;
    _32681 = MAKE_SEQ(_1);
    // SubProg SyntaxColor pc: 789 op: APPEND (35)
    RefDS(_32681);
    Append(&_32682, _70color_segments_65396, _32681);
    DeRefDS(_32681);
    _32681 = NOVALUE;
    // SubProg SyntaxColor pc: 793 op: RETURNF (28)

// Exiting block BLOCK: SyntaxColor

// block var pline_65449
    DeRefDS(_pline_65449);

// block var state_65450
    DeRef(_state_65450);

// block var multi_65452

// block var class_65453

// block var c_65457
    DeRef(_c_65457);

// block var token_65458
    DeRef(_token_65458);

// block var ret_65576
    DeRefDS(_ret_65576);
    DeRef(_32657);
    _32657 = NOVALUE;
    _32655 = NOVALUE;
    DeRef(_32659);
    _32659 = NOVALUE;
    DeRef(_32634);
    _32634 = NOVALUE;
    DeRef(_32639);
    _32639 = NOVALUE;
    DeRef(_32628);
    _32628 = NOVALUE;
    DeRef(_32632);
    _32632 = NOVALUE;
    DeRef(_32676);
    _32676 = NOVALUE;
    DeRef(_32637);
    _32637 = NOVALUE;
    DeRef(_32626);
    _32626 = NOVALUE;
    DeRef(_32648);
    _32648 = NOVALUE;
    DeRef(_32630);
    _32630 = NOVALUE;
    return _32682;
    // SubProg SyntaxColor pc: 797 op: BADRETURNF (43)
    ;
}



// 0x84539BED
