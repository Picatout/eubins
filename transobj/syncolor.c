// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _70set_colors(object _pColorList_65897)
{
    object _lColorName_65898 = NOVALUE;
    object _32814 = NOVALUE; // 65933 32814
// skipping _32812  name type: 0
    object _32811 = NOVALUE; // 65929 32811
// skipping _32809  name type: 0
    object _32808 = NOVALUE; // 65925 32808
// skipping _32806  name type: 0
    object _32805 = NOVALUE; // 65921 32805
// skipping _32803  name type: 0
    object _32802 = NOVALUE; // 65917 32802
// skipping _32800  name type: 0
    object _32799 = NOVALUE; // 65913 32799
// skipping _32797  name type: 0
    object _32796 = NOVALUE; // 65909 32796
// skipping _32792  name type: 0
    object _32791 = NOVALUE; // 65903 32791
    object _32790 = NOVALUE; // 65902 32790
    object _32789 = NOVALUE; // 65901 32789
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_colors pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_colors pc: 3 op: STARTLINE (58)

    /** syncolor.e:48		for i = 1 to length(pColorList) do*/
    // SubProg set_colors pc: 5 op: LENGTH (42)
    // Known sequence length:
    _32789 = 6;
    // SubProg set_colors pc: 8 op: FOR_I (125)
    {
        object _i_65900;
        _i_65900 = 1;
L1: // addr: 15 pc: 8 sub: 65895 op: 125
        if (_i_65900 > 6){
            goto L2; // [8] 168
        }
        // SubProg set_colors pc: 15 op: STARTLINE (58)

        /** syncolor.e:49			lColorName = text:upper(pColorList[i][1])*/
        // SubProg set_colors pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_pColorList_65897);
        _32790 = (object)*(((s1_ptr)_2)->base + _i_65900);
        // SubProg set_colors pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_32790);
        _32791 = (object)*(((s1_ptr)_2)->base + 1);
        _32790 = NOVALUE;
        // SubProg set_colors pc: 25 op: PROC (27)
        Ref(_32791);
        _0 = _lColorName_65898;
        _lColorName_65898 = _17upper(_32791);
        DeRef(_0);
        _32791 = NOVALUE;
        // SubProg set_colors pc: 29 op: SEQUENCE_CHECK (97)
        // SubProg set_colors pc: 31 op: STARTLINE (58)

        /** syncolor.e:50			switch lColorName do*/
        // SubProg set_colors pc: 33 op: SWITCH (185)
        _1 = find(_lColorName_65898, _32793);
        switch ( _1 ){ 
            // SubProg set_colors pc: 38 op: STARTLINE (58)

            /** syncolor.e:51				case "NORMAL" then*/
            // SubProg set_colors pc: 40 op: CASE (186)
            case 1:
            // SubProg set_colors pc: 42 op: STARTLINE (58)

            /** syncolor.e:52					NORMAL_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 44 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65897);
            _32796 = (object)*(((s1_ptr)_2)->base + _i_65900);
            // SubProg set_colors pc: 48 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32796);
            _70NORMAL_COLOR_65886 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70NORMAL_COLOR_65886)){
                _70NORMAL_COLOR_65886 = (object)DBL_PTR(_70NORMAL_COLOR_65886)->dbl;
            }
            _32796 = NOVALUE;
            // SubProg set_colors pc: 54 op: ELSE (23)
            goto L3; // [54] 161
            // SubProg set_colors pc: 56 op: STARTLINE (58)

            /** syncolor.e:53				case "COMMENT" then*/
            // SubProg set_colors pc: 58 op: CASE (186)
            case 2:
            // SubProg set_colors pc: 60 op: STARTLINE (58)

            /** syncolor.e:54					COMMENT_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 62 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65897);
            _32799 = (object)*(((s1_ptr)_2)->base + _i_65900);
            // SubProg set_colors pc: 66 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32799);
            _70COMMENT_COLOR_65887 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70COMMENT_COLOR_65887)){
                _70COMMENT_COLOR_65887 = (object)DBL_PTR(_70COMMENT_COLOR_65887)->dbl;
            }
            _32799 = NOVALUE;
            // SubProg set_colors pc: 72 op: ELSE (23)
            goto L3; // [72] 161
            // SubProg set_colors pc: 74 op: STARTLINE (58)

            /** syncolor.e:55				case "KEYWORD" then*/
            // SubProg set_colors pc: 76 op: CASE (186)
            case 3:
            // SubProg set_colors pc: 78 op: STARTLINE (58)

            /** syncolor.e:56					KEYWORD_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 80 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65897);
            _32802 = (object)*(((s1_ptr)_2)->base + _i_65900);
            // SubProg set_colors pc: 84 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32802);
            _70KEYWORD_COLOR_65888 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70KEYWORD_COLOR_65888)){
                _70KEYWORD_COLOR_65888 = (object)DBL_PTR(_70KEYWORD_COLOR_65888)->dbl;
            }
            _32802 = NOVALUE;
            // SubProg set_colors pc: 90 op: ELSE (23)
            goto L3; // [90] 161
            // SubProg set_colors pc: 92 op: STARTLINE (58)

            /** syncolor.e:57				case "BUILTIN" then*/
            // SubProg set_colors pc: 94 op: CASE (186)
            case 4:
            // SubProg set_colors pc: 96 op: STARTLINE (58)

            /** syncolor.e:58					BUILTIN_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 98 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65897);
            _32805 = (object)*(((s1_ptr)_2)->base + _i_65900);
            // SubProg set_colors pc: 102 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32805);
            _70BUILTIN_COLOR_65889 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70BUILTIN_COLOR_65889)){
                _70BUILTIN_COLOR_65889 = (object)DBL_PTR(_70BUILTIN_COLOR_65889)->dbl;
            }
            _32805 = NOVALUE;
            // SubProg set_colors pc: 108 op: ELSE (23)
            goto L3; // [108] 161
            // SubProg set_colors pc: 110 op: STARTLINE (58)

            /** syncolor.e:59				case "STRING" then*/
            // SubProg set_colors pc: 112 op: CASE (186)
            case 5:
            // SubProg set_colors pc: 114 op: STARTLINE (58)

            /** syncolor.e:60					STRING_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 116 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65897);
            _32808 = (object)*(((s1_ptr)_2)->base + _i_65900);
            // SubProg set_colors pc: 120 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_32808);
            _70STRING_COLOR_65890 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_70STRING_COLOR_65890)){
                _70STRING_COLOR_65890 = (object)DBL_PTR(_70STRING_COLOR_65890)->dbl;
            }
            _32808 = NOVALUE;
            // SubProg set_colors pc: 126 op: ELSE (23)
            goto L3; // [126] 161
            // SubProg set_colors pc: 128 op: STARTLINE (58)

            /** syncolor.e:61				case "BRACKET" then*/
            // SubProg set_colors pc: 130 op: CASE (186)
            case 6:
            // SubProg set_colors pc: 132 op: STARTLINE (58)

            /** syncolor.e:62					BRACKET_COLOR  = pColorList[i][2]*/
            // SubProg set_colors pc: 134 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_pColorList_65897);
            _32811 = (object)*(((s1_ptr)_2)->base + _i_65900);
            // SubProg set_colors pc: 138 op: RHS_SUBS_CHECK (92)
            DeRef(_70BRACKET_COLOR_65891);
            _2 = (object)SEQ_PTR(_32811);
            _70BRACKET_COLOR_65891 = (object)*(((s1_ptr)_2)->base + 2);
            Ref(_70BRACKET_COLOR_65891);
            _32811 = NOVALUE;
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
            RefDS(_lColorName_65898);
            ((intptr_t*)_2)[1] = _lColorName_65898;
            _32814 = MAKE_SEQ(_1);
            // SubProg set_colors pc: 156 op: PRINTF (38)
            EPrintf(2, _32813, _32814);
            DeRefDS(_32814);
            _32814 = NOVALUE;
            // SubProg set_colors pc: 160 op: NOPSWITCH (187)
        ;}L3: // addr: 161 pc: 160 sub: 65895 op: 187
        // SubProg set_colors pc: 161 op: STARTLINE (58)

        /** syncolor.e:66		end for*/
        // SubProg set_colors pc: 163 op: ENDFOR_INT_UP1 (54)
        _i_65900 = _i_65900 + 1;
        goto L1; // [163] 15
L2: // addr: 168 pc: 163 sub: 65895 op: 54
        ;
    }
    // SubProg set_colors pc: 168 op: STARTLINE (58)

    /** syncolor.e:67	end procedure*/
    // SubProg set_colors pc: 170 op: RETURNP (29)

// Exiting block BLOCK: set_colors

// block var pColorList_65897
    DeRefDS(_pColorList_65897);

// block var lColorName_65898
    DeRef(_lColorName_65898);
    return;
    // SubProg set_colors pc: 173 op: BADRETURNF (43)
    ;
}


void _70init_class()
{
// skipping _32823  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg init_class pc: 1 op: STARTLINE (58)

    /** syncolor.e:71		NORMAL_COLOR  = #330033*/
    // SubProg init_class pc: 3 op: ASSIGN_I (113)
    _70NORMAL_COLOR_65886 = 3342387;
    // SubProg init_class pc: 6 op: STARTLINE (58)

    /** syncolor.e:72		COMMENT_COLOR = #FF0055*/
    // SubProg init_class pc: 8 op: ASSIGN_I (113)
    _70COMMENT_COLOR_65887 = 16711765;
    // SubProg init_class pc: 11 op: STARTLINE (58)

    /** syncolor.e:73		KEYWORD_COLOR = #0000FF*/
    // SubProg init_class pc: 13 op: ASSIGN_I (113)
    _70KEYWORD_COLOR_65888 = 255;
    // SubProg init_class pc: 16 op: STARTLINE (58)

    /** syncolor.e:74		BUILTIN_COLOR = #FF00FF*/
    // SubProg init_class pc: 18 op: ASSIGN_I (113)
    _70BUILTIN_COLOR_65889 = 16711935;
    // SubProg init_class pc: 21 op: STARTLINE (58)

    /** syncolor.e:75		STRING_COLOR  = #00A033*/
    // SubProg init_class pc: 23 op: ASSIGN_I (113)
    _70STRING_COLOR_65890 = 41011;
    // SubProg init_class pc: 26 op: STARTLINE (58)

    /** syncolor.e:76		BRACKET_COLOR = {NORMAL_COLOR, #993333, #0000FF, #5500FF, #00FF00}*/
    // SubProg init_class pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_class pc: 30 op: RIGHT_BRACE_N (31)
    _0 = _70BRACKET_COLOR_65891;
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 3342387;
    ((intptr_t*)_2)[2] = 10040115;
    ((intptr_t*)_2)[3] = 255;
    ((intptr_t*)_2)[4] = 5570815;
    ((intptr_t*)_2)[5] = 65280;
    _70BRACKET_COLOR_65891 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg init_class pc: 38 op: STARTLINE (58)

    /** syncolor.e:78	end procedure*/
    // SubProg init_class pc: 40 op: RETURNP (29)

// Exiting block BLOCK: init_class
    return;
    // SubProg init_class pc: 43 op: BADRETURNF (43)
    ;
}


object _70default_state(object _token_65965)
{
    object _32833 = NOVALUE; // 65969 32833
// skipping _32832  name type: 0
// skipping _32831  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg default_state pc: 1 op: STARTLINE (58)

    /** syncolor.e:103		if not token then*/
    // SubProg default_state pc: 3 op: NOT_IFW (108)
    if (IS_ATOM_INT(_token_65965)) {
        if (_token_65965 != 0){
            goto L1; // [3] 12
        }
    }
    else {
        if (DBL_PTR(_token_65965)->dbl != 0.0){
            goto L1; // [3] 12
        }
    }
    // SubProg default_state pc: 6 op: STARTLINE (58)

    /** syncolor.e:104			token = tokenize:new()*/
    // SubProg default_state pc: 8 op: PROC (27)
    _0 = _token_65965;
    _token_65965 = _71new();
    DeRef(_0);
    // SubProg default_state pc: 11 op: NOP1 (159)
L1: // addr: 12 pc: 11 sub: 65963 op: 159
    // SubProg default_state pc: 12 op: STARTLINE (58)

    /** syncolor.e:106		return {*/
    // SubProg default_state pc: 14 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_token_65965);
    ((intptr_t*)_2)[1] = _token_65965;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _32833 = MAKE_SEQ(_1);
    // SubProg default_state pc: 20 op: RETURNF (28)

// Exiting block BLOCK: default_state

// block var token_65965
    DeRef(_token_65965);
    return _32833;
    // SubProg default_state pc: 24 op: BADRETURNF (43)
    ;
}


object _70new()
{
    object _state_65975 = NOVALUE;
// skipping _32836  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** syncolor.e:124		atom state = eumem:malloc()*/
    // SubProg new pc: 3 op: PROC (27)
    _0 = _state_65975;
    _state_65975 = _30malloc(1, 1);
    DeRef(_0);
    // SubProg new pc: 8 op: STARTLINE (58)

    /** syncolor.e:126		reset(state)*/
    // SubProg new pc: 10 op: PROC (27)
    Ref(_state_65975);
    _70reset(_state_65975);
    // SubProg new pc: 13 op: STARTLINE (58)

    /** syncolor.e:128		return state*/
    // SubProg new pc: 15 op: RETURNF (28)

// Exiting block BLOCK: new
    return _state_65975;
    // SubProg new pc: 19 op: BADRETURNF (43)
    ;
}


void _70tokenize_reset(object _token_65980)
{
    object _reset_1__tmp_at7_65983 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tokenize_reset pc: 1 op: STARTLINE (58)

    /** syncolor.e:138		if token then*/
    // SubProg tokenize_reset pc: 3 op: IF (20)
    if (_token_65980 == 0) {
        goto L1; // [3] 27
    }
    else {
        if (!IS_ATOM_INT(_token_65980) && DBL_PTR(_token_65980)->dbl == 0.0){
            goto L1; // [3] 27
        }
    }
    // SubProg tokenize_reset pc: 6 op: STARTLINE (58)

    /** syncolor.e:139			tokenize:reset(token)*/
    // SubProg tokenize_reset pc: 8 op: STARTLINE (58)

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    // SubProg tokenize_reset pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg tokenize_reset pc: 12 op: PROC (27)
    _0 = _reset_1__tmp_at7_65983;
    _reset_1__tmp_at7_65983 = _71default_state();
    DeRef(_0);
    // SubProg tokenize_reset pc: 15 op: ASSIGN_SUBS (16)
    Ref(_reset_1__tmp_at7_65983);
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_token_65980))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_token_65980)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _token_65980);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _reset_1__tmp_at7_65983;
    DeRef(_1);
    // SubProg tokenize_reset pc: 19 op: STARTLINE (58)

    /** tokenize.e:213	end procedure*/
    // SubProg tokenize_reset pc: 21 op: ELSE (23)
    goto L2; // [21] 24
    // SubProg tokenize_reset pc: 23 op: NOP1 (159)
L2: // addr: 24 pc: 23 sub: 65978 op: 159
    // SubProg tokenize_reset pc: 24 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-reset from tokenize_reset @ 7

// block var reset_1__tmp_at7_65983
    DeRef(_reset_1__tmp_at7_65983);
    _reset_1__tmp_at7_65983 = NOVALUE;
    // SubProg tokenize_reset pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 65978 op: 159
    // SubProg tokenize_reset pc: 27 op: STARTLINE (58)

    /** syncolor.e:141	end procedure*/
    // SubProg tokenize_reset pc: 29 op: RETURNP (29)

// Exiting block BLOCK: tokenize_reset

// block var token_65980
    DeRef(_token_65980);
    return;
    // SubProg tokenize_reset pc: 32 op: BADRETURNF (43)
    ;
}


void _70reset(object _state_65986)
{
    object _token_65987 = NOVALUE;
    object _32840 = NOVALUE; // 65991 32840
    object _32839 = NOVALUE; // 65990 32839
// skipping _32838  name type: 0
    object _32837 = NOVALUE; // 65988 32837
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reset pc: 1 op: STARTLINE (58)

    /** syncolor.e:144		atom token = eumem:ram_space[state][S_TOKENIZER]*/
    // SubProg reset pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_state_65986)){
        _32837 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65986)->dbl));
    }
    else{
        _32837 = (object)*(((s1_ptr)_2)->base + _state_65986);
    }
    // SubProg reset pc: 9 op: RHS_SUBS_CHECK (92)
    DeRef(_token_65987);
    _2 = (object)SEQ_PTR(_32837);
    _token_65987 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_token_65987);
    _32837 = NOVALUE;
    // SubProg reset pc: 13 op: STARTLINE (58)

    /** syncolor.e:145		tokenize_reset(token)*/
    // SubProg reset pc: 15 op: PROC (27)
    Ref(_token_65987);
    _70tokenize_reset(_token_65987);
    // SubProg reset pc: 18 op: STARTLINE (58)

    /** syncolor.e:146		eumem:ram_space[state] = default_state(token)*/
    // SubProg reset pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 22 op: PROC (27)
    Ref(_token_65987);
    _32839 = _70default_state(_token_65987);
    // SubProg reset pc: 26 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65986))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65986)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65986);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32839;
    if( _1 != _32839 ){
        DeRef(_1);
    }
    _32839 = NOVALUE;
    // SubProg reset pc: 30 op: STARTLINE (58)

    /** syncolor.e:147		eumem:ram_space[state] = default_state()*/
    // SubProg reset pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 34 op: PROC (27)
    _32840 = _70default_state(0);
    // SubProg reset pc: 38 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_65986))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65986)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_65986);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32840;
    if( _1 != _32840 ){
        DeRef(_1);
    }
    _32840 = NOVALUE;
    // SubProg reset pc: 42 op: STARTLINE (58)

    /** syncolor.e:148	end procedure*/
    // SubProg reset pc: 44 op: RETURNP (29)

// Exiting block BLOCK: reset

// block var state_65986
    DeRef(_state_65986);

// block var token_65987
    DeRef(_token_65987);
    return;
    // SubProg reset pc: 47 op: BADRETURNF (43)
    ;
}



// 0x0F179CD2
