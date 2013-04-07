// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _71set_colors(object _pColorList_65345)
{
    object _lColorName_65346 = NOVALUE;
    object _32575 = NOVALUE;
    object _32572 = NOVALUE;
    object _32569 = NOVALUE;
    object _32566 = NOVALUE;
    object _32563 = NOVALUE;
    object _32560 = NOVALUE;
    object _32557 = NOVALUE;
    object _32552 = NOVALUE;
    object _32551 = NOVALUE;
    object _32550 = NOVALUE;
    object _0, _1, _2;
    

    /** syncolor.e:48		for i = 1 to length(pColorList) do*/
    if (IS_SEQUENCE(_pColorList_65345)){
            _32550 = SEQ_PTR(_pColorList_65345)->length;
    }
    else {
        _32550 = 1;
    }
    {
        object _i_65348;
        _i_65348 = 1;
L1: 
        if (_i_65348 > _32550){
            goto L2; // [8] 168
        }

        /** syncolor.e:49			lColorName = text:upper(pColorList[i][1])*/
        _2 = (object)SEQ_PTR(_pColorList_65345);
        _32551 = (object)*(((s1_ptr)_2)->base + _i_65348);
        _2 = (object)SEQ_PTR(_32551);
        _32552 = (object)*(((s1_ptr)_2)->base + 1);
        _32551 = NOVALUE;
        Ref(_32552);
        _0 = _lColorName_65346;
        _lColorName_65346 = _13upper(_32552);
        DeRef(_0);
        _32552 = NOVALUE;

        /** syncolor.e:50			switch lColorName do*/
        _1 = find(_lColorName_65346, _32554);
        switch ( _1 ){ 

            /** syncolor.e:51				case "NORMAL" then*/
            case 1:

            /** syncolor.e:52					NORMAL_COLOR  = pColorList[i][2]*/
            _2 = (object)SEQ_PTR(_pColorList_65345);
            _32557 = (object)*(((s1_ptr)_2)->base + _i_65348);
            _2 = (object)SEQ_PTR(_32557);
            _71NORMAL_COLOR_65334 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_71NORMAL_COLOR_65334)){
                _71NORMAL_COLOR_65334 = (object)DBL_PTR(_71NORMAL_COLOR_65334)->dbl;
            }
            _32557 = NOVALUE;
            goto L3; // [54] 161

            /** syncolor.e:53				case "COMMENT" then*/
            case 2:

            /** syncolor.e:54					COMMENT_COLOR  = pColorList[i][2]*/
            _2 = (object)SEQ_PTR(_pColorList_65345);
            _32560 = (object)*(((s1_ptr)_2)->base + _i_65348);
            _2 = (object)SEQ_PTR(_32560);
            _71COMMENT_COLOR_65335 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_71COMMENT_COLOR_65335)){
                _71COMMENT_COLOR_65335 = (object)DBL_PTR(_71COMMENT_COLOR_65335)->dbl;
            }
            _32560 = NOVALUE;
            goto L3; // [72] 161

            /** syncolor.e:55				case "KEYWORD" then*/
            case 3:

            /** syncolor.e:56					KEYWORD_COLOR  = pColorList[i][2]*/
            _2 = (object)SEQ_PTR(_pColorList_65345);
            _32563 = (object)*(((s1_ptr)_2)->base + _i_65348);
            _2 = (object)SEQ_PTR(_32563);
            _71KEYWORD_COLOR_65336 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_71KEYWORD_COLOR_65336)){
                _71KEYWORD_COLOR_65336 = (object)DBL_PTR(_71KEYWORD_COLOR_65336)->dbl;
            }
            _32563 = NOVALUE;
            goto L3; // [90] 161

            /** syncolor.e:57				case "BUILTIN" then*/
            case 4:

            /** syncolor.e:58					BUILTIN_COLOR  = pColorList[i][2]*/
            _2 = (object)SEQ_PTR(_pColorList_65345);
            _32566 = (object)*(((s1_ptr)_2)->base + _i_65348);
            _2 = (object)SEQ_PTR(_32566);
            _71BUILTIN_COLOR_65337 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_71BUILTIN_COLOR_65337)){
                _71BUILTIN_COLOR_65337 = (object)DBL_PTR(_71BUILTIN_COLOR_65337)->dbl;
            }
            _32566 = NOVALUE;
            goto L3; // [108] 161

            /** syncolor.e:59				case "STRING" then*/
            case 5:

            /** syncolor.e:60					STRING_COLOR  = pColorList[i][2]*/
            _2 = (object)SEQ_PTR(_pColorList_65345);
            _32569 = (object)*(((s1_ptr)_2)->base + _i_65348);
            _2 = (object)SEQ_PTR(_32569);
            _71STRING_COLOR_65338 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_71STRING_COLOR_65338)){
                _71STRING_COLOR_65338 = (object)DBL_PTR(_71STRING_COLOR_65338)->dbl;
            }
            _32569 = NOVALUE;
            goto L3; // [126] 161

            /** syncolor.e:61				case "BRACKET" then*/
            case 6:

            /** syncolor.e:62					BRACKET_COLOR  = pColorList[i][2]*/
            _2 = (object)SEQ_PTR(_pColorList_65345);
            _32572 = (object)*(((s1_ptr)_2)->base + _i_65348);
            DeRef(_71BRACKET_COLOR_65339);
            _2 = (object)SEQ_PTR(_32572);
            _71BRACKET_COLOR_65339 = (object)*(((s1_ptr)_2)->base + 2);
            Ref(_71BRACKET_COLOR_65339);
            _32572 = NOVALUE;
            goto L3; // [144] 161

            /** syncolor.e:63				case else*/
            case 0:

            /** syncolor.e:64					printf(2, "syncolor.e: Unknown color name '%s', ignored.\n", {lColorName})*/
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            RefDS(_lColorName_65346);
            ((intptr_t*)_2)[1] = _lColorName_65346;
            _32575 = MAKE_SEQ(_1);
            EPrintf(2, _32574, _32575);
            DeRefDS(_32575);
            _32575 = NOVALUE;
        ;}L3: 

        /** syncolor.e:66		end for*/
        _i_65348 = _i_65348 + 1;
        goto L1; // [163] 15
L2: 
        ;
    }

    /** syncolor.e:67	end procedure*/
    DeRefDS(_pColorList_65345);
    DeRef(_lColorName_65346);
    return;
    ;
}


void _71init_class()
{
    object _0, _1, _2;
    

    /** syncolor.e:71		NORMAL_COLOR  = #330033*/
    _71NORMAL_COLOR_65334 = 3342387;

    /** syncolor.e:72		COMMENT_COLOR = #FF0055*/
    _71COMMENT_COLOR_65335 = 16711765;

    /** syncolor.e:73		KEYWORD_COLOR = #0000FF*/
    _71KEYWORD_COLOR_65336 = 255;

    /** syncolor.e:74		BUILTIN_COLOR = #FF00FF*/
    _71BUILTIN_COLOR_65337 = 16711935;

    /** syncolor.e:75		STRING_COLOR  = #00A033*/
    _71STRING_COLOR_65338 = 41011;

    /** syncolor.e:76		BRACKET_COLOR = {NORMAL_COLOR, #993333, #0000FF, #5500FF, #00FF00}*/
    _0 = _71BRACKET_COLOR_65339;
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 3342387;
    ((intptr_t*)_2)[2] = 10040115;
    ((intptr_t*)_2)[3] = 255;
    ((intptr_t*)_2)[4] = 5570815;
    ((intptr_t*)_2)[5] = 65280;
    _71BRACKET_COLOR_65339 = MAKE_SEQ(_1);
    DeRef(_0);

    /** syncolor.e:78	end procedure*/
    return;
    ;
}


void _71seg_flush(object _new_color_65401)
{
    object _32590 = NOVALUE;
    object _32589 = NOVALUE;
    object _32587 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_new_color_65401)) {
        _1 = (object)(DBL_PTR(_new_color_65401)->dbl);
        DeRefDS(_new_color_65401);
        _new_color_65401 = _1;
    }

    /** syncolor.e:91		if new_color != current_color then*/
    if (_new_color_65401 == _71current_color_65397)
    goto L1; // [7] 49

    /** syncolor.e:92			if current_color != DONT_CARE then*/
    if (_71current_color_65397 == -1)
    goto L2; // [15] 43

    /** syncolor.e:93				color_segments = append(color_segments,*/
    RefDS(_71linebuf_65396);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _71current_color_65397;
    ((intptr_t *)_2)[2] = _71linebuf_65396;
    _32587 = MAKE_SEQ(_1);
    RefDS(_32587);
    Append(&_71color_segments_65395, _71color_segments_65395, _32587);
    DeRefDS(_32587);
    _32587 = NOVALUE;

    /** syncolor.e:95				linebuf = ""*/
    RefDS(_21928);
    DeRefDS(_71linebuf_65396);
    _71linebuf_65396 = _21928;
L2: 

    /** syncolor.e:97			current_color = new_color*/
    _71current_color_65397 = _new_color_65401;
L1: 

    /** syncolor.e:99		linebuf &= line[seg][tokenize:TDATA]*/
    _2 = (object)SEQ_PTR(_71line_65394);
    _32589 = (object)*(((s1_ptr)_2)->base + _71seg_65398);
    _2 = (object)SEQ_PTR(_32589);
    _32590 = (object)*(((s1_ptr)_2)->base + 2);
    _32589 = NOVALUE;
    if (IS_SEQUENCE(_71linebuf_65396) && IS_ATOM(_32590)) {
        Ref(_32590);
        Append(&_71linebuf_65396, _71linebuf_65396, _32590);
    }
    else if (IS_ATOM(_71linebuf_65396) && IS_SEQUENCE(_32590)) {
    }
    else {
        Concat((object_ptr)&_71linebuf_65396, _71linebuf_65396, _32590);
    }
    _32590 = NOVALUE;

    /** syncolor.e:100	end procedure*/
    return;
    ;
}


object _71default_state(object _token_65413)
{
    object _32594 = NOVALUE;
    object _0, _1, _2;
    

    /** syncolor.e:103		if not token then*/
    if (IS_ATOM_INT(_token_65413)) {
        if (_token_65413 != 0){
            goto L1; // [3] 12
        }
    }
    else {
        if (DBL_PTR(_token_65413)->dbl != 0.0){
            goto L1; // [3] 12
        }
    }

    /** syncolor.e:104			token = tokenize:new()*/
    _0 = _token_65413;
    _token_65413 = _72new();
    DeRef(_0);
L1: 

    /** syncolor.e:106		return {*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_token_65413);
    ((intptr_t*)_2)[1] = _token_65413;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _32594 = MAKE_SEQ(_1);
    DeRef(_token_65413);
    return _32594;
    ;
}


object _71new()
{
    object _state_65423 = NOVALUE;
    object _0, _1, _2;
    

    /** syncolor.e:124		atom state = eumem:malloc()*/
    _0 = _state_65423;
    _state_65423 = _31malloc(1, 1);
    DeRef(_0);

    /** syncolor.e:126		reset(state)*/
    Ref(_state_65423);
    _71reset(_state_65423);

    /** syncolor.e:128		return state*/
    return _state_65423;
    ;
}


void _71tokenize_reset(object _token_65428)
{
    object _reset_1__tmp_at7_65431 = NOVALUE;
    object _0, _1, _2;
    

    /** syncolor.e:138		if token then*/
    if (_token_65428 == 0) {
        goto L1; // [3] 27
    }
    else {
        if (!IS_ATOM_INT(_token_65428) && DBL_PTR(_token_65428)->dbl == 0.0){
            goto L1; // [3] 27
        }
    }

    /** syncolor.e:139			tokenize:reset(token)*/

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    _0 = _reset_1__tmp_at7_65431;
    _reset_1__tmp_at7_65431 = _72default_state();
    DeRef(_0);
    Ref(_reset_1__tmp_at7_65431);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65428))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65428)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _token_65428);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _reset_1__tmp_at7_65431;
    DeRef(_1);

    /** tokenize.e:213	end procedure*/
    goto L2; // [21] 24
L2: 
    DeRef(_reset_1__tmp_at7_65431);
    _reset_1__tmp_at7_65431 = NOVALUE;
L1: 

    /** syncolor.e:141	end procedure*/
    DeRef(_token_65428);
    return;
    ;
}


void _71reset(object _state_65434)
{
    object _token_65435 = NOVALUE;
    object _32601 = NOVALUE;
    object _32600 = NOVALUE;
    object _32598 = NOVALUE;
    object _0, _1, _2;
    

    /** syncolor.e:144		atom token = eumem:ram_space[state][S_TOKENIZER]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65434)){
        _32598 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65434)->dbl));
    }
    else{
        _32598 = (object)*(((s1_ptr)_2)->base + _state_65434);
    }
    DeRef(_token_65435);
    _2 = (object)SEQ_PTR(_32598);
    _token_65435 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_token_65435);
    _32598 = NOVALUE;

    /** syncolor.e:145		tokenize_reset(token)*/
    Ref(_token_65435);
    _71tokenize_reset(_token_65435);

    /** syncolor.e:146		eumem:ram_space[state] = default_state(token)*/
    Ref(_token_65435);
    _32600 = _71default_state(_token_65435);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65434))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65434)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65434);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32600;
    if( _1 != _32600 ){
        DeRef(_1);
    }
    _32600 = NOVALUE;

    /** syncolor.e:147		eumem:ram_space[state] = default_state()*/
    _32601 = _71default_state(0);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65434))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65434)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65434);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32601;
    if( _1 != _32601 ){
        DeRef(_1);
    }
    _32601 = NOVALUE;

    /** syncolor.e:148	end procedure*/
    DeRef(_state_65434);
    DeRef(_token_65435);
    return;
    ;
}


object _71SyntaxColor(object _pline_65448, object _state_65449, object _multi_65451)
{
    object _class_65452 = NOVALUE;
    object _last_65453 = NOVALUE;
    object _i_65454 = NOVALUE;
    object _word_65455 = NOVALUE;
    object _c_65456 = NOVALUE;
    object _token_65457 = NOVALUE;
    object _keep_builtins_2__tmp_at19_65462 = NOVALUE;
    object _keep_builtins_1__tmp_at19_65461 = NOVALUE;
    object _keep_keywords_2__tmp_at41_65465 = NOVALUE;
    object _keep_keywords_1__tmp_at41_65464 = NOVALUE;
    object _keep_whitespace_3__tmp_at63_65469 = NOVALUE;
    object _keep_whitespace_2__tmp_at63_65468 = NOVALUE;
    object _keep_whitespace_1__tmp_at63_65467 = NOVALUE;
    object _keep_newlines_3__tmp_at88_65473 = NOVALUE;
    object _keep_newlines_2__tmp_at88_65472 = NOVALUE;
    object _keep_newlines_1__tmp_at88_65471 = NOVALUE;
    object _keep_comments_3__tmp_at113_65477 = NOVALUE;
    object _keep_comments_2__tmp_at113_65476 = NOVALUE;
    object _keep_comments_1__tmp_at113_65475 = NOVALUE;
    object _string_numbers_2__tmp_at138_65480 = NOVALUE;
    object _string_numbers_1__tmp_at138_65479 = NOVALUE;
    object _return_literal_string_2__tmp_at160_65483 = NOVALUE;
    object _return_literal_string_1__tmp_at160_65482 = NOVALUE;
    object _string_strip_quotes_3__tmp_at182_65487 = NOVALUE;
    object _string_strip_quotes_2__tmp_at182_65486 = NOVALUE;
    object _string_strip_quotes_1__tmp_at182_65485 = NOVALUE;
    object _ret_65575 = NOVALUE;
    object _32674 = NOVALUE;
    object _32673 = NOVALUE;
    object _32670 = NOVALUE;
    object _32668 = NOVALUE;
    object _32664 = NOVALUE;
    object _32662 = NOVALUE;
    object _32661 = NOVALUE;
    object _32660 = NOVALUE;
    object _32659 = NOVALUE;
    object _32657 = NOVALUE;
    object _32656 = NOVALUE;
    object _32654 = NOVALUE;
    object _32653 = NOVALUE;
    object _32651 = NOVALUE;
    object _32650 = NOVALUE;
    object _32649 = NOVALUE;
    object _32648 = NOVALUE;
    object _32647 = NOVALUE;
    object _32646 = NOVALUE;
    object _32645 = NOVALUE;
    object _32644 = NOVALUE;
    object _32643 = NOVALUE;
    object _32642 = NOVALUE;
    object _32641 = NOVALUE;
    object _32640 = NOVALUE;
    object _32639 = NOVALUE;
    object _32638 = NOVALUE;
    object _32637 = NOVALUE;
    object _32636 = NOVALUE;
    object _32634 = NOVALUE;
    object _32633 = NOVALUE;
    object _32631 = NOVALUE;
    object _32630 = NOVALUE;
    object _32629 = NOVALUE;
    object _32628 = NOVALUE;
    object _32626 = NOVALUE;
    object _32625 = NOVALUE;
    object _32624 = NOVALUE;
    object _32623 = NOVALUE;
    object _32622 = NOVALUE;
    object _32621 = NOVALUE;
    object _32620 = NOVALUE;
    object _32619 = NOVALUE;
    object _32618 = NOVALUE;
    object _32613 = NOVALUE;
    object _32608 = NOVALUE;
    object _32604 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** syncolor.e:183		atom token = eumem:ram_space[state][S_TOKENIZER]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65449)){
        _32604 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65449)->dbl));
    }
    else{
        _32604 = (object)*(((s1_ptr)_2)->base + _state_65449);
    }
    DeRef(_token_65457);
    _2 = (object)SEQ_PTR(_32604);
    _token_65457 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_token_65457);
    _32604 = NOVALUE;

    /** syncolor.e:185		tokenize:keep_builtins(,token)*/

    /** tokenize.e:235		eumem:ram_space[state][ID_BUILTIN] = val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:236	end procedure*/
    goto L1; // [32] 35
L1: 

    /** syncolor.e:186		tokenize:keep_keywords(,token)*/

    /** tokenize.e:244		eumem:ram_space[state][ID_KEYWORD] = val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:245	end procedure*/
    goto L2; // [54] 57
L2: 

    /** syncolor.e:187		tokenize:keep_whitespace(,token)*/

    /** tokenize.e:253		eumem:ram_space[state][DELETE_WHITE] = not val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _keep_whitespace_3__tmp_at63_65469 = (1 == 0);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_whitespace_3__tmp_at63_65469;
    DeRef(_1);

    /** tokenize.e:254	end procedure*/
    goto L3; // [79] 82
L3: 

    /** syncolor.e:188		tokenize:keep_newlines(,token)*/

    /** tokenize.e:262		eumem:ram_space[state][IGNORE_NEWLINES] = not val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _keep_newlines_3__tmp_at88_65473 = (1 == 0);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_newlines_3__tmp_at88_65473;
    DeRef(_1);

    /** tokenize.e:263	end procedure*/
    goto L4; // [104] 107
L4: 

    /** syncolor.e:189		tokenize:keep_comments(,token)*/

    /** tokenize.e:272		eumem:ram_space[state][IGNORE_COMMENTS] = not val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _keep_comments_3__tmp_at113_65477 = (1 == 0);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _keep_comments_3__tmp_at113_65477;
    DeRef(_1);

    /** tokenize.e:273	end procedure*/
    goto L5; // [129] 132
L5: 

    /** syncolor.e:190		tokenize:string_numbers(,token)*/

    /** tokenize.e:310		eumem:ram_space[state][STRING_NUMBERS] = val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:311	end procedure*/
    goto L6; // [151] 154
L6: 

    /** syncolor.e:191		tokenize:return_literal_string(,token)*/

    /** tokenize.e:286		eumem:ram_space[state][LITERAL_STRING] = val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:287	end procedure*/
    goto L7; // [173] 176
L7: 

    /** syncolor.e:192		tokenize:string_strip_quotes(0,token)*/

    /** tokenize.e:296		eumem:ram_space[state][STRING_KEEP_QUOTES] = not val*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65457))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65457)->dbl));
    else
    _3 = (object)(_token_65457 + ((s1_ptr)_2)->base);
    _string_strip_quotes_3__tmp_at182_65487 = (0 == 0);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _string_strip_quotes_3__tmp_at182_65487;
    DeRef(_1);

    /** tokenize.e:297	end procedure*/
    goto L8; // [198] 201
L8: 

    /** syncolor.e:194		line = tokenize:tokenize_string(pline, token, 0, multi)*/
    RefDS(_pline_65448);
    Ref(_token_65457);
    _0 = _72tokenize_string(_pline_65448, _token_65457, 0, _multi_65451);
    DeRef(_71line_65394);
    _71line_65394 = _0;

    /** syncolor.e:196		line = line[1]*/
    _0 = _71line_65394;
    _2 = (object)SEQ_PTR(_71line_65394);
    _71line_65394 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_71line_65394);
    DeRefDS(_0);

    /** syncolor.e:197		current_color = DONT_CARE*/
    _71current_color_65397 = -1;

    /** syncolor.e:198		seg = 1*/
    _71seg_65398 = 1;

    /** syncolor.e:199		color_segments = {}*/
    RefDS(_21928);
    DeRef(_71color_segments_65395);
    _71color_segments_65395 = _21928;

    /** syncolor.e:201		while 1 do*/
L9: 

    /** syncolor.e:202			if seg > length(line) then*/
    if (IS_SEQUENCE(_71line_65394)){
            _32608 = SEQ_PTR(_71line_65394)->length;
    }
    else {
        _32608 = 1;
    }
    if (_71seg_65398 <= _32608)
    goto LA; // [255] 264

    /** syncolor.e:203				exit*/
    goto LB; // [261] 747
LA: 

    /** syncolor.e:206			c = line[seg]*/
    DeRef(_c_65456);
    _2 = (object)SEQ_PTR(_71line_65394);
    _c_65456 = (object)*(((s1_ptr)_2)->base + _71seg_65398);
    Ref(_c_65456);

    /** syncolor.e:207			class = c[tokenize:TTYPE]*/
    _2 = (object)SEQ_PTR(_c_65456);
    _class_65452 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_class_65452))
    _class_65452 = (object)DBL_PTR(_class_65452)->dbl;

    /** syncolor.e:209			if class = tokenize:T_WHITE then*/
    if (_class_65452 != 40)
    goto LC; // [284] 303

    /** syncolor.e:210				linebuf &= c[tokenize:TDATA]-- continue with current color*/
    _2 = (object)SEQ_PTR(_c_65456);
    _32613 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_71linebuf_65396) && IS_ATOM(_32613)) {
        Ref(_32613);
        Append(&_71linebuf_65396, _71linebuf_65396, _32613);
    }
    else if (IS_ATOM(_71linebuf_65396) && IS_SEQUENCE(_32613)) {
    }
    else {
        Concat((object_ptr)&_71linebuf_65396, _71linebuf_65396, _32613);
    }
    _32613 = NOVALUE;
    goto LD; // [300] 734
LC: 

    /** syncolor.e:211			elsif class = tokenize:T_KEYWORD then*/
    if (_class_65452 != 10)
    goto LE; // [305] 319

    /** syncolor.e:212				seg_flush(KEYWORD_COLOR)*/
    _71seg_flush(_71KEYWORD_COLOR_65336);
    goto LD; // [316] 734
LE: 

    /** syncolor.e:214			elsif class = tokenize:T_BUILTIN then*/
    if (_class_65452 != 41)
    goto LF; // [321] 335

    /** syncolor.e:215				seg_flush(KEYWORD_COLOR)*/
    _71seg_flush(_71KEYWORD_COLOR_65336);
    goto LD; // [332] 734
LF: 

    /** syncolor.e:217			elsif class = tokenize:T_IDENTIFIER then*/
    if (_class_65452 != 9)
    goto L10; // [337] 351

    /** syncolor.e:218				seg_flush(NORMAL_COLOR)*/
    _71seg_flush(_71NORMAL_COLOR_65334);
    goto LD; // [348] 734
L10: 

    /** syncolor.e:220			elsif class = tokenize:T_LPAREN or class = tokenize:T_RPAREN or*/
    _32618 = (_class_65452 == 28);
    if (_32618 != 0) {
        _32619 = 1;
        goto L11; // [357] 369
    }
    _32620 = (_class_65452 == 29);
    _32619 = (_32620 != 0);
L11: 
    if (_32619 != 0) {
        _32621 = 1;
        goto L12; // [369] 381
    }
    _32622 = (_class_65452 == 32);
    _32621 = (_32622 != 0);
L12: 
    if (_32621 != 0) {
        _32623 = 1;
        goto L13; // [381] 393
    }
    _32624 = (_class_65452 == 33);
    _32623 = (_32624 != 0);
L13: 
    if (_32623 != 0) {
        _32625 = 1;
        goto L14; // [393] 405
    }
    _32626 = (_class_65452 == 30);
    _32625 = (_32626 != 0);
L14: 
    if (_32625 != 0) {
        goto L15; // [405] 418
    }
    _32628 = (_class_65452 == 31);
    if (_32628 == 0)
    {
        DeRef(_32628);
        _32628 = NOVALUE;
        goto L16; // [414] 602
    }
    else{
        DeRef(_32628);
        _32628 = NOVALUE;
    }
L15: 

    /** syncolor.e:223				if class = tokenize:T_LPAREN or class = tokenize:T_LBRACKET or*/
    _32629 = (_class_65452 == 28);
    if (_32629 != 0) {
        _32630 = 1;
        goto L17; // [424] 436
    }
    _32631 = (_class_65452 == 32);
    _32630 = (_32631 != 0);
L17: 
    if (_32630 != 0) {
        goto L18; // [436] 449
    }
    _32633 = (_class_65452 == 30);
    if (_32633 == 0)
    {
        DeRef(_32633);
        _32633 = NOVALUE;
        goto L19; // [445] 471
    }
    else{
        DeRef(_32633);
        _32633 = NOVALUE;
    }
L18: 

    /** syncolor.e:225					eumem:ram_space[state][S_BRACKET_LEVEL] += 1*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65449))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65449)->dbl));
    else
    _3 = (object)(_state_65449 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _32636 = (object)*(((s1_ptr)_2)->base + 2);
    _32634 = NOVALUE;
    if (IS_ATOM_INT(_32636)) {
        _32637 = _32636 + 1;
        if (_32637 > MAXINT){
            _32637 = NewDouble((eudouble)_32637);
        }
    }
    else
    _32637 = binary_op(PLUS, 1, _32636);
    _32636 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32637;
    if( _1 != _32637 ){
        DeRef(_1);
    }
    _32637 = NOVALUE;
    _32634 = NOVALUE;
L19: 

    /** syncolor.e:228				if eumem:ram_space[state][S_BRACKET_LEVEL] >= 1 and*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65449)){
        _32638 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65449)->dbl));
    }
    else{
        _32638 = (object)*(((s1_ptr)_2)->base + _state_65449);
    }
    _2 = (object)SEQ_PTR(_32638);
    _32639 = (object)*(((s1_ptr)_2)->base + 2);
    _32638 = NOVALUE;
    if (IS_ATOM_INT(_32639)) {
        _32640 = (_32639 >= 1);
    }
    else {
        _32640 = binary_op(GREATEREQ, _32639, 1);
    }
    _32639 = NOVALUE;
    if (IS_ATOM_INT(_32640)) {
        if (_32640 == 0) {
            goto L1A; // [487] 538
        }
    }
    else {
        if (DBL_PTR(_32640)->dbl == 0.0) {
            goto L1A; // [487] 538
        }
    }
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65449)){
        _32642 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65449)->dbl));
    }
    else{
        _32642 = (object)*(((s1_ptr)_2)->base + _state_65449);
    }
    _2 = (object)SEQ_PTR(_32642);
    _32643 = (object)*(((s1_ptr)_2)->base + 2);
    _32642 = NOVALUE;
    if (IS_SEQUENCE(_71BRACKET_COLOR_65339)){
            _32644 = SEQ_PTR(_71BRACKET_COLOR_65339)->length;
    }
    else {
        _32644 = 1;
    }
    if (IS_ATOM_INT(_32643)) {
        _32645 = (_32643 <= _32644);
    }
    else {
        _32645 = binary_op(LESSEQ, _32643, _32644);
    }
    _32643 = NOVALUE;
    _32644 = NOVALUE;
    if (_32645 == 0) {
        DeRef(_32645);
        _32645 = NOVALUE;
        goto L1A; // [511] 538
    }
    else {
        if (!IS_ATOM_INT(_32645) && DBL_PTR(_32645)->dbl == 0.0){
            DeRef(_32645);
            _32645 = NOVALUE;
            goto L1A; // [511] 538
        }
        DeRef(_32645);
        _32645 = NOVALUE;
    }
    DeRef(_32645);
    _32645 = NOVALUE;

    /** syncolor.e:231					seg_flush(BRACKET_COLOR[eumem:ram_space[state][S_BRACKET_LEVEL]])*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65449)){
        _32646 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65449)->dbl));
    }
    else{
        _32646 = (object)*(((s1_ptr)_2)->base + _state_65449);
    }
    _2 = (object)SEQ_PTR(_32646);
    _32647 = (object)*(((s1_ptr)_2)->base + 2);
    _32646 = NOVALUE;
    _2 = (object)SEQ_PTR(_71BRACKET_COLOR_65339);
    if (!IS_ATOM_INT(_32647)){
        _32648 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32647)->dbl));
    }
    else{
        _32648 = (object)*(((s1_ptr)_2)->base + _32647);
    }
    Ref(_32648);
    _71seg_flush(_32648);
    _32648 = NOVALUE;
    goto L1B; // [535] 546
L1A: 

    /** syncolor.e:233					seg_flush(NORMAL_COLOR)*/
    _71seg_flush(_71NORMAL_COLOR_65334);
L1B: 

    /** syncolor.e:236				if class = tokenize:T_RPAREN or class = tokenize:T_RBRACKET or*/
    _32649 = (_class_65452 == 29);
    if (_32649 != 0) {
        _32650 = 1;
        goto L1C; // [552] 564
    }
    _32651 = (_class_65452 == 33);
    _32650 = (_32651 != 0);
L1C: 
    if (_32650 != 0) {
        goto L1D; // [564] 577
    }
    _32653 = (_class_65452 == 31);
    if (_32653 == 0)
    {
        DeRef(_32653);
        _32653 = NOVALUE;
        goto LD; // [573] 734
    }
    else{
        DeRef(_32653);
        _32653 = NOVALUE;
    }
L1D: 

    /** syncolor.e:238					eumem:ram_space[state][S_BRACKET_LEVEL] -= 1*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65449))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65449)->dbl));
    else
    _3 = (object)(_state_65449 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _32656 = (object)*(((s1_ptr)_2)->base + 2);
    _32654 = NOVALUE;
    if (IS_ATOM_INT(_32656)) {
        _32657 = _32656 - 1;
        if ((object)((uintptr_t)_32657 +(uintptr_t) HIGH_BITS) >= 0){
            _32657 = NewDouble((eudouble)_32657);
        }
    }
    else {
        _32657 = binary_op(MINUS, _32656, 1);
    }
    _32656 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32657;
    if( _1 != _32657 ){
        DeRef(_1);
    }
    _32657 = NOVALUE;
    _32654 = NOVALUE;
    goto LD; // [599] 734
L16: 

    /** syncolor.e:241			elsif class = tokenize:T_NEWLINE then*/
    if (_class_65452 != 4)
    goto L1E; // [604] 668

    /** syncolor.e:242				if eumem:ram_space[state][S_KEEP_NEWLINES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65449)){
        _32659 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65449)->dbl));
    }
    else{
        _32659 = (object)*(((s1_ptr)_2)->base + _state_65449);
    }
    _2 = (object)SEQ_PTR(_32659);
    _32660 = (object)*(((s1_ptr)_2)->base + 3);
    _32659 = NOVALUE;
    if (_32660 == 0) {
        _32660 = NOVALUE;
        goto LB; // [620] 747
    }
    else {
        if (!IS_ATOM_INT(_32660) && DBL_PTR(_32660)->dbl == 0.0){
            _32660 = NOVALUE;
            goto LB; // [620] 747
        }
        _32660 = NOVALUE;
    }
    _32660 = NOVALUE;

    /** syncolor.e:244					if equal(c[tokenize:TDATA],"") then*/
    _2 = (object)SEQ_PTR(_c_65456);
    _32661 = (object)*(((s1_ptr)_2)->base + 2);
    if (_32661 == _21928)
    _32662 = 1;
    else if (IS_ATOM_INT(_32661) && IS_ATOM_INT(_21928))
    _32662 = 0;
    else
    _32662 = (compare(_32661, _21928) == 0);
    _32661 = NOVALUE;
    if (_32662 == 0)
    {
        _32662 = NOVALUE;
        goto L1F; // [633] 647
    }
    else{
        _32662 = NOVALUE;
    }

    /** syncolor.e:245						linebuf &= '\n'*/
    Append(&_71linebuf_65396, _71linebuf_65396, 10);
    goto LB; // [644] 747
L1F: 

    /** syncolor.e:247						linebuf &= c[tokenize:TDATA]*/
    _2 = (object)SEQ_PTR(_c_65456);
    _32664 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_71linebuf_65396) && IS_ATOM(_32664)) {
        Ref(_32664);
        Append(&_71linebuf_65396, _71linebuf_65396, _32664);
    }
    else if (IS_ATOM(_71linebuf_65396) && IS_SEQUENCE(_32664)) {
    }
    else {
        Concat((object_ptr)&_71linebuf_65396, _71linebuf_65396, _32664);
    }
    _32664 = NOVALUE;

    /** syncolor.e:250				exit  -- end of line*/
    goto LB; // [663] 747
    goto LD; // [665] 734
L1E: 

    /** syncolor.e:252			elsif class = tokenize:T_EOF then*/
    if (_class_65452 != 1)
    goto L20; // [670] 681

    /** syncolor.e:253				exit  -- end of line*/
    goto LB; // [676] 747
    goto LD; // [678] 734
L20: 

    /** syncolor.e:255			elsif class = tokenize:T_COMMENT then*/
    if (_class_65452 != 5)
    goto L21; // [683] 697

    /** syncolor.e:256				seg_flush(COMMENT_COLOR)*/
    _71seg_flush(_71COMMENT_COLOR_65335);
    goto LD; // [694] 734
L21: 

    /** syncolor.e:258			elsif class = tokenize:T_STRING or class = tokenize:T_CHAR then*/
    _32668 = (_class_65452 == 8);
    if (_32668 != 0) {
        goto L22; // [703] 716
    }
    _32670 = (_class_65452 == 7);
    if (_32670 == 0)
    {
        DeRef(_32670);
        _32670 = NOVALUE;
        goto L23; // [712] 726
    }
    else{
        DeRef(_32670);
        _32670 = NOVALUE;
    }
L22: 

    /** syncolor.e:259				seg_flush(STRING_COLOR)*/
    _71seg_flush(_71STRING_COLOR_65338);
    goto LD; // [723] 734
L23: 

    /** syncolor.e:262				seg_flush(NORMAL_COLOR)*/
    _71seg_flush(_71NORMAL_COLOR_65334);
LD: 

    /** syncolor.e:264			seg += 1*/
    _71seg_65398 = _71seg_65398 + 1;

    /** syncolor.e:265		end while*/
    goto L9; // [744] 246
LB: 

    /** syncolor.e:268		if current_color = DONT_CARE then*/
    if (_71current_color_65397 != -1)
    goto L24; // [751] 763

    /** syncolor.e:269			current_color = NORMAL_COLOR*/
    _71current_color_65397 = _71NORMAL_COLOR_65334;
L24: 

    /** syncolor.e:272		sequence ret = linebuf*/
    RefDS(_71linebuf_65396);
    DeRef(_ret_65575);
    _ret_65575 = _71linebuf_65396;

    /** syncolor.e:273		linebuf = ""*/
    RefDS(_21928);
    DeRefDS(_71linebuf_65396);
    _71linebuf_65396 = _21928;

    /** syncolor.e:274		return append(color_segments, {current_color, ret})*/
    RefDS(_ret_65575);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _71current_color_65397;
    ((intptr_t *)_2)[2] = _ret_65575;
    _32673 = MAKE_SEQ(_1);
    RefDS(_32673);
    Append(&_32674, _71color_segments_65395, _32673);
    DeRefDS(_32673);
    _32673 = NOVALUE;
    DeRefDS(_pline_65448);
    DeRef(_state_65449);
    DeRef(_c_65456);
    DeRef(_token_65457);
    DeRefDS(_ret_65575);
    DeRef(_32629);
    _32629 = NOVALUE;
    _32647 = NOVALUE;
    DeRef(_32668);
    _32668 = NOVALUE;
    DeRef(_32620);
    _32620 = NOVALUE;
    DeRef(_32631);
    _32631 = NOVALUE;
    DeRef(_32626);
    _32626 = NOVALUE;
    DeRef(_32640);
    _32640 = NOVALUE;
    DeRef(_32624);
    _32624 = NOVALUE;
    DeRef(_32651);
    _32651 = NOVALUE;
    DeRef(_32618);
    _32618 = NOVALUE;
    DeRef(_32622);
    _32622 = NOVALUE;
    DeRef(_32649);
    _32649 = NOVALUE;
    return _32674;
    ;
}



// 0x1C0D1DD3
