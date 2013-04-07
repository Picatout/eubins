// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _18get_ch()
{
// skipping _4599  name type: 0
// skipping _4598  name type: 0
// skipping _4597  name type: 0
// skipping _4596  name type: 0
// skipping _4595  name type: 0
// skipping _4594  name type: 0
    object _4593 = NOVALUE; // 8400 4593
    object _4592 = NOVALUE; // 8398 4592
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_ch pc: 1 op: STARTLINE (58)

    /** get.e:47		if sequence(input_string) then*/
    // SubProg get_ch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 5 op: IS_A_SEQUENCE (68)
    _4592 = IS_SEQUENCE(_18input_string_8392);
    // SubProg get_ch pc: 8 op: IF (20)
    if (_4592 == 0)
    {
        _4592 = NOVALUE;
        goto L1; // [8] 56
    }
    else{
        _4592 = NOVALUE;
    }
    // SubProg get_ch pc: 11 op: STARTLINE (58)

    /** get.e:48			if string_next <= length(input_string) then*/
    // SubProg get_ch pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_18input_string_8392)){
            _4593 = SEQ_PTR(_18input_string_8392)->length;
    }
    else {
        _4593 = 1;
    }
    // SubProg get_ch pc: 20 op: LESSEQ_IFW_I (123)
    if (_18string_next_8393 > _4593)
    goto L2; // [20] 47
    // SubProg get_ch pc: 24 op: STARTLINE (58)

    /** get.e:49				ch = input_string[string_next]*/
    // SubProg get_ch pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 30 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_18input_string_8392);
    _18ch_8394 = (object)*(((s1_ptr)_2)->base + _18string_next_8393);
    if (!IS_ATOM_INT(_18ch_8394)){
        _18ch_8394 = (object)DBL_PTR(_18ch_8394)->dbl;
    }
    // SubProg get_ch pc: 36 op: STARTLINE (58)

    /** get.e:50				string_next += 1*/
    // SubProg get_ch pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 40 op: PLUS1_I (117)
    _18string_next_8393 = _18string_next_8393 + 1;
    // SubProg get_ch pc: 44 op: ELSE (23)
    goto L3; // [44] 81
    // SubProg get_ch pc: 46 op: NOP1 (159)
L2: // addr: 47 pc: 46 sub: 8395 op: 159
    // SubProg get_ch pc: 47 op: STARTLINE (58)

    /** get.e:52				ch = GET_EOF*/
    // SubProg get_ch pc: 49 op: ASSIGN_I (113)
    _18ch_8394 = -1;
    // SubProg get_ch pc: 52 op: NOP1 (159)
    // SubProg get_ch pc: 53 op: ELSE (23)
    goto L3; // [53] 81
    // SubProg get_ch pc: 55 op: NOP1 (159)
L1: // addr: 56 pc: 55 sub: 8395 op: 159
    // SubProg get_ch pc: 56 op: STARTLINE (58)

    /** get.e:55			ch = getc(input_file)*/
    // SubProg get_ch pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 60 op: GETC (33)
    if (_18input_file_8391 != last_r_file_no) {
        last_r_file_ptr = which_file(_18input_file_8391, EF_READ);
        last_r_file_no = _18input_file_8391;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _18ch_8394 = getc((FILE*)xstdin);
        }
        else{
            _18ch_8394 = getc(last_r_file_ptr);
        }
    }
    else{
        _18ch_8394 = getc(last_r_file_ptr);
    }
    // SubProg get_ch pc: 63 op: STARTLINE (58)

    /** get.e:56			if ch = GET_EOF then*/
    // SubProg get_ch pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 67 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != -1)
    goto L4; // [67] 80
    // SubProg get_ch pc: 71 op: STARTLINE (58)

    /** get.e:57				string_next += 1*/
    // SubProg get_ch pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 75 op: PLUS1_I (117)
    _18string_next_8393 = _18string_next_8393 + 1;
    // SubProg get_ch pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 8395 op: 159
    // SubProg get_ch pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 8395 op: 159
    // SubProg get_ch pc: 81 op: STARTLINE (58)

    /** get.e:60	end procedure*/
    // SubProg get_ch pc: 83 op: RETURNP (29)

// Exiting block BLOCK: get_ch
    return;
    // SubProg get_ch pc: 86 op: BADRETURNF (43)
    ;
}


object _18escape_char(object _c_8421)
{
    object _i_8422 = NOVALUE;
    object _4605 = NOVALUE; // 8427 4605
// skipping _4604  name type: 0
// skipping _4603  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg escape_char pc: 1 op: INTEGER_CHECK (96)
    // SubProg escape_char pc: 3 op: STARTLINE (58)

    /** get.e:79		i = find(c, ESCAPE_CHARS)*/
    // SubProg escape_char pc: 5 op: FIND_FROM (176)
    _i_8422 = find_from(_c_8421, _18ESCAPE_CHARS_8415, 1);
    // SubProg escape_char pc: 10 op: STARTLINE (58)

    /** get.e:80		if i = 0 then*/
    // SubProg escape_char pc: 12 op: EQUALS_IFW_I (121)
    if (_i_8422 != 0)
    goto L1; // [12] 25
    // SubProg escape_char pc: 16 op: STARTLINE (58)

    /** get.e:81			return GET_FAIL*/
    // SubProg escape_char pc: 18 op: RETURNF (28)

// Exiting block BLOCK: escape_char

// block var c_8421

// block var i_8422
    return 1;
    // SubProg escape_char pc: 22 op: ELSE (23)
    goto L2; // [22] 36
    // SubProg escape_char pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 8419 op: 159
    // SubProg escape_char pc: 25 op: STARTLINE (58)

    /** get.e:83			return ESCAPED_CHARS[i]*/
    // SubProg escape_char pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_18ESCAPED_CHARS_8417);
    _4605 = (object)*(((s1_ptr)_2)->base + _i_8422);
    // SubProg escape_char pc: 31 op: RETURNF (28)
    Ref(_4605);

// Exiting block BLOCK: escape_char

// block var c_8421

// block var i_8422
    return _4605;
    // SubProg escape_char pc: 35 op: NOP1 (159)
L2: // addr: 36 pc: 35 sub: 8419 op: 159
    // SubProg escape_char pc: 36 op: BADRETURNF (43)
    ;
}


object _18get_qchar()
{
    object _c_8430 = NOVALUE;
    object _4614 = NOVALUE; // 8444 4614
    object _4613 = NOVALUE; // 8442 4613
// skipping _4612  name type: 0
    object _4611 = NOVALUE; // 8439 4611
// skipping _4610  name type: 0
    object _4609 = NOVALUE; // 8436 4609
// skipping _4608  name type: 0
// skipping _4607  name type: 0
// skipping _4606  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_qchar pc: 1 op: STARTLINE (58)

    /** get.e:92		get_ch()*/
    // SubProg get_qchar pc: 3 op: PROC (27)
    _18get_ch();
    // SubProg get_qchar pc: 5 op: STARTLINE (58)

    /** get.e:93		c = ch*/
    // SubProg get_qchar pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 9 op: ASSIGN_I (113)
    _c_8430 = _18ch_8394;
    // SubProg get_qchar pc: 12 op: STARTLINE (58)

    /** get.e:94		if ch = '\\' then*/
    // SubProg get_qchar pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 16 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 92)
    goto L1; // [16] 54
    // SubProg get_qchar pc: 20 op: STARTLINE (58)

    /** get.e:95			get_ch()*/
    // SubProg get_qchar pc: 22 op: PROC (27)
    _18get_ch();
    // SubProg get_qchar pc: 24 op: STARTLINE (58)

    /** get.e:96			c = escape_char(ch)*/
    // SubProg get_qchar pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 28 op: PROC (27)
    _c_8430 = _18escape_char(_18ch_8394);
    // SubProg get_qchar pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_8430)) {
        _1 = (object)(DBL_PTR(_c_8430)->dbl);
        DeRefDS(_c_8430);
        _c_8430 = _1;
    }
    // SubProg get_qchar pc: 34 op: STARTLINE (58)

    /** get.e:97			if c = GET_FAIL then*/
    // SubProg get_qchar pc: 36 op: EQUALS_IFW_I (121)
    if (_c_8430 != 1)
    goto L2; // [36] 74
    // SubProg get_qchar pc: 40 op: STARTLINE (58)

    /** get.e:98				return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 42 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4609 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 46 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_8430
    return _4609;
    // SubProg get_qchar pc: 50 op: NOP1 (159)
    // SubProg get_qchar pc: 51 op: ELSE (23)
    goto L2; // [51] 74
    // SubProg get_qchar pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 8428 op: 159
    // SubProg get_qchar pc: 54 op: STARTLINE (58)

    /** get.e:100		elsif ch = '\'' then*/
    // SubProg get_qchar pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 58 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 39)
    goto L3; // [58] 73
    // SubProg get_qchar pc: 62 op: STARTLINE (58)

    /** get.e:101			return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 64 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4611 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 68 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_8430
    DeRef(_4609);
    _4609 = NOVALUE;
    return _4611;
    // SubProg get_qchar pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 8428 op: 159
    // SubProg get_qchar pc: 73 op: NOP1 (159)
L2: // addr: 74 pc: 73 sub: 8428 op: 159
    // SubProg get_qchar pc: 74 op: STARTLINE (58)

    /** get.e:103		get_ch()*/
    // SubProg get_qchar pc: 76 op: PROC (27)
    _18get_ch();
    // SubProg get_qchar pc: 78 op: STARTLINE (58)

    /** get.e:104		if ch != '\'' then*/
    // SubProg get_qchar pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 82 op: NOTEQ_IFW_I (122)
    if (_18ch_8394 == 39)
    goto L4; // [82] 99
    // SubProg get_qchar pc: 86 op: STARTLINE (58)

    /** get.e:105			return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 88 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4613 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 92 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_8430
    DeRef(_4611);
    _4611 = NOVALUE;
    DeRef(_4609);
    _4609 = NOVALUE;
    return _4613;
    // SubProg get_qchar pc: 96 op: ELSE (23)
    goto L5; // [96] 114
    // SubProg get_qchar pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 8428 op: 159
    // SubProg get_qchar pc: 99 op: STARTLINE (58)

    /** get.e:107			get_ch()*/
    // SubProg get_qchar pc: 101 op: PROC (27)
    _18get_ch();
    // SubProg get_qchar pc: 103 op: STARTLINE (58)

    /** get.e:108			return {GET_SUCCESS, c}*/
    // SubProg get_qchar pc: 105 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _c_8430;
    _4614 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 109 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_8430
    DeRef(_4613);
    _4613 = NOVALUE;
    DeRef(_4611);
    _4611 = NOVALUE;
    DeRef(_4609);
    _4609 = NOVALUE;
    return _4614;
    // SubProg get_qchar pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 8428 op: 159
    // SubProg get_qchar pc: 114 op: BADRETURNF (43)
    ;
}


object _18get_heredoc(object _terminator_8447)
{
    object _text_8448 = NOVALUE;
    object _ends_at_8449 = NOVALUE;
    object _4629 = NOVALUE; // 8466 4629
    object _4628 = NOVALUE; // 8465 4628
    object _4627 = NOVALUE; // 8464 4627
    object _4626 = NOVALUE; // 8463 4626
    object _4625 = NOVALUE; // 8462 4625
// skipping _4624  name type: 0
// skipping _4623  name type: 0
    object _4622 = NOVALUE; // 8459 4622
// skipping _4621  name type: 0
    object _4620 = NOVALUE; // 8456 4620
    object _4619 = NOVALUE; // 8455 4619
    object _4618 = NOVALUE; // 8454 4618
    object _4617 = NOVALUE; // 8453 4617
// skipping _4616  name type: 0
    object _4615 = NOVALUE; // 8450 4615
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_heredoc pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_heredoc pc: 3 op: STARTLINE (58)

    /** get.e:113		sequence text = ""*/
    // SubProg get_heredoc pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_text_8448);
    _text_8448 = _5;
    // SubProg get_heredoc pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg get_heredoc pc: 10 op: STARTLINE (58)

    /** get.e:114		integer ends_at = 1 - length( terminator )*/
    // SubProg get_heredoc pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_terminator_8447)){
            _4615 = SEQ_PTR(_terminator_8447)->length;
    }
    else {
        _4615 = 1;
    }
    // SubProg get_heredoc pc: 15 op: MINUS_I (116)
    _ends_at_8449 = 1 - _4615;
    _4615 = NOVALUE;
    // SubProg get_heredoc pc: 19 op: STARTLINE (58)

    /** get.e:115		while ends_at < 1 or not match( terminator, text, ends_at ) with entry do*/
    // SubProg get_heredoc pc: 21 op: ELSE (23)
    goto L1; // [21] 69
    // SubProg get_heredoc pc: 23 op: NOPWHILE (158)
L2: // addr: 24 pc: 23 sub: 8445 op: 158
    // SubProg get_heredoc pc: 24 op: LESS (1)
    _4617 = (_ends_at_8449 < 1);
    // SubProg get_heredoc pc: 28 op: SC1_OR (143)
    if (_4617 != 0) {
        DeRef(_4618);
        _4618 = 1;
        goto L3; // [28] 44
    }
    // SubProg get_heredoc pc: 32 op: MATCH_FROM (177)
    _4619 = e_match_from(_terminator_8447, _text_8448, _ends_at_8449);
    // SubProg get_heredoc pc: 37 op: NOT (7)
    _4620 = (_4619 == 0);
    _4619 = NOVALUE;
    // SubProg get_heredoc pc: 40 op: SC2_OR (144)
    _4618 = (_4620 != 0);
    // SubProg get_heredoc pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 8445 op: 159
    // SubProg get_heredoc pc: 44 op: WHILE (47)
    if (_4618 == 0)
    {
        _4618 = NOVALUE;
        goto L4; // [44] 92
    }
    else{
        _4618 = NOVALUE;
    }
    // SubProg get_heredoc pc: 47 op: STARTLINE (58)

    /** get.e:116			if ch = GET_EOF then*/
    // SubProg get_heredoc pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_heredoc pc: 51 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != -1)
    goto L5; // [51] 66
    // SubProg get_heredoc pc: 55 op: STARTLINE (58)

    /** get.e:117				return { GET_FAIL, 0 }*/
    // SubProg get_heredoc pc: 57 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4622 = MAKE_SEQ(_1);
    // SubProg get_heredoc pc: 61 op: RETURNF (28)

// Exiting block BLOCK: get_heredoc

// block var terminator_8447
    DeRefDSi(_terminator_8447);

// block var text_8448
    DeRefi(_text_8448);

// block var ends_at_8449
    DeRef(_4620);
    _4620 = NOVALUE;
    DeRef(_4617);
    _4617 = NOVALUE;
    return _4622;
    // SubProg get_heredoc pc: 65 op: NOP1 (159)
L5: // addr: 66 pc: 65 sub: 8445 op: 159
    // SubProg get_heredoc pc: 66 op: STARTLINE (58)

    /** get.e:119		entry*/
    // SubProg get_heredoc pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 8445 op: 159
    // SubProg get_heredoc pc: 69 op: STARTLINE (58)

    /** get.e:120			get_ch()*/
    // SubProg get_heredoc pc: 71 op: PROC (27)
    _18get_ch();
    // SubProg get_heredoc pc: 73 op: STARTLINE (58)

    /** get.e:121			text &= ch*/
    // SubProg get_heredoc pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_heredoc pc: 77 op: CONCAT (15)
    Append(&_text_8448, _text_8448, _18ch_8394);
    // SubProg get_heredoc pc: 81 op: STARTLINE (58)

    /** get.e:122			ends_at += 1*/
    // SubProg get_heredoc pc: 83 op: PLUS1_I (117)
    _ends_at_8449 = _ends_at_8449 + 1;
    // SubProg get_heredoc pc: 87 op: STARTLINE (58)

    /** get.e:123		end while*/
    // SubProg get_heredoc pc: 89 op: ENDWHILE (22)
    goto L2; // [89] 24
    // SubProg get_heredoc pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 8445 op: 159
    // SubProg get_heredoc pc: 92 op: STARTLINE (58)

    /** get.e:124		return { GET_SUCCESS, head( text, length( text ) - length( terminator ) ) }*/
    // SubProg get_heredoc pc: 94 op: LENGTH (42)
    if (IS_SEQUENCE(_text_8448)){
            _4625 = SEQ_PTR(_text_8448)->length;
    }
    else {
        _4625 = 1;
    }
    // SubProg get_heredoc pc: 97 op: LENGTH (42)
    if (IS_SEQUENCE(_terminator_8447)){
            _4626 = SEQ_PTR(_terminator_8447)->length;
    }
    else {
        _4626 = 1;
    }
    // SubProg get_heredoc pc: 100 op: MINUS (10)
    _4627 = _4625 - _4626;
    _4625 = NOVALUE;
    _4626 = NOVALUE;
    // SubProg get_heredoc pc: 104 op: HEAD (198)
    {
        int len = SEQ_PTR(_text_8448)->length;
        int size = (IS_ATOM_INT(_4627)) ? _4627 : (object)(DBL_PTR(_4627)->dbl);
        if (size <= 0){
            DeRef( _4628 );
            _4628 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_text_8448);
            DeRef(_4628);
            _4628 = _text_8448;
        }
        else{
            Head(SEQ_PTR(_text_8448),size+1,&_4628);
        }
    }
    _4627 = NOVALUE;
    // SubProg get_heredoc pc: 108 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _4628;
    _4629 = MAKE_SEQ(_1);
    _4628 = NOVALUE;
    // SubProg get_heredoc pc: 112 op: RETURNF (28)

// Exiting block BLOCK: get_heredoc

// block var terminator_8447
    DeRefDSi(_terminator_8447);

// block var text_8448
    DeRefDSi(_text_8448);

// block var ends_at_8449
    DeRef(_4620);
    _4620 = NOVALUE;
    DeRef(_4617);
    _4617 = NOVALUE;
    DeRef(_4622);
    _4622 = NOVALUE;
    return _4629;
    // SubProg get_heredoc pc: 116 op: BADRETURNF (43)
    ;
}


object _18get_string()
{
    object _text_8469 = NOVALUE;
// skipping _4647  name type: 0
    object _4646 = NOVALUE; // 8493 4646
// skipping _4645  name type: 0
// skipping _4644  name type: 0
// skipping _4643  name type: 0
    object _4642 = NOVALUE; // 8487 4642
    object _4641 = NOVALUE; // 8486 4641
// skipping _4639  name type: 0
    object _4638 = NOVALUE; // 8482 4638
    object _4637 = NOVALUE; // 8481 4637
    object _4636 = NOVALUE; // 8480 4636
    object _4635 = NOVALUE; // 8479 4635
// skipping _4634  name type: 0
    object _4633 = NOVALUE; // 8475 4633
    object _4632 = NOVALUE; // 8474 4632
// skipping _4631  name type: 0
    object _4630 = NOVALUE; // 8472 4630
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_string pc: 1 op: STARTLINE (58)

    /** get.e:132		text = ""*/
    // SubProg get_string pc: 3 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_text_8469);
    _text_8469 = _5;
    // SubProg get_string pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg get_string pc: 8 op: STARTLINE (58)

    /** get.e:133		while TRUE do*/
    // SubProg get_string pc: 10 op: NOP2 (110)
    // SubProg get_string pc: 12 op: NOPWHILE (158)
L1: // addr: 13 pc: 12 sub: 8467 op: 158
    // SubProg get_string pc: 13 op: STARTLINE (58)

    /** get.e:134			get_ch()*/
    // SubProg get_string pc: 15 op: PROC (27)
    _18get_ch();
    // SubProg get_string pc: 17 op: STARTLINE (58)

    /** get.e:135			if ch = GET_EOF or ch = '\n' then*/
    // SubProg get_string pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 21 op: EQUALS (3)
    _4630 = (_18ch_8394 == -1);
    // SubProg get_string pc: 25 op: SC1_OR_IF (147)
    if (_4630 != 0) {
        goto L2; // [25] 40
    }
    // SubProg get_string pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 31 op: EQUALS (3)
    _4632 = (_18ch_8394 == 10);
    // SubProg get_string pc: 35 op: NOP1 (159)
    // SubProg get_string pc: 36 op: IF (20)
    if (_4632 == 0)
    {
        DeRef(_4632);
        _4632 = NOVALUE;
        goto L3; // [36] 53
    }
    else{
        DeRef(_4632);
        _4632 = NOVALUE;
    }
    // SubProg get_string pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 8467 op: 159
    // SubProg get_string pc: 40 op: STARTLINE (58)

    /** get.e:136				return {GET_FAIL, 0}*/
    // SubProg get_string pc: 42 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4633 = MAKE_SEQ(_1);
    // SubProg get_string pc: 46 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_8469
    DeRefi(_text_8469);
    DeRef(_4630);
    _4630 = NOVALUE;
    return _4633;
    // SubProg get_string pc: 50 op: ELSE (23)
    goto L4; // [50] 164
    // SubProg get_string pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 8467 op: 159
    // SubProg get_string pc: 53 op: STARTLINE (58)

    /** get.e:137			elsif ch = '"' then*/
    // SubProg get_string pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 57 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 34)
    goto L5; // [57] 121
    // SubProg get_string pc: 61 op: STARTLINE (58)

    /** get.e:138				get_ch()*/
    // SubProg get_string pc: 63 op: PROC (27)
    _18get_ch();
    // SubProg get_string pc: 65 op: STARTLINE (58)

    /** get.e:139				if length( text ) = 0 and ch = '"' then*/
    // SubProg get_string pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_text_8469)){
            _4635 = SEQ_PTR(_text_8469)->length;
    }
    else {
        _4635 = 1;
    }
    // SubProg get_string pc: 70 op: EQUALS (3)
    _4636 = (_4635 == 0);
    _4635 = NOVALUE;
    // SubProg get_string pc: 74 op: SC1_AND_IF (146)
    if (_4636 == 0) {
        goto L6; // [74] 108
    }
    // SubProg get_string pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 80 op: EQUALS (3)
    _4638 = (_18ch_8394 == 34);
    // SubProg get_string pc: 84 op: NOP1 (159)
    // SubProg get_string pc: 85 op: IF (20)
    if (_4638 == 0)
    {
        DeRef(_4638);
        _4638 = NOVALUE;
        goto L6; // [85] 108
    }
    else{
        DeRef(_4638);
        _4638 = NOVALUE;
    }
    // SubProg get_string pc: 88 op: STARTLINE (58)

    /** get.e:140					if ch = '"' then*/
    // SubProg get_string pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 92 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 34)
    goto L7; // [92] 107
    // SubProg get_string pc: 96 op: STARTLINE (58)

    /** get.e:141						return get_heredoc( `"""` )*/
    // SubProg get_string pc: 98 op: PROC (27)
    RefDS(_4640);
    _4641 = _18get_heredoc(_4640);
    // SubProg get_string pc: 102 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_8469
    DeRefi(_text_8469);
    DeRef(_4630);
    _4630 = NOVALUE;
    DeRef(_4636);
    _4636 = NOVALUE;
    DeRef(_4633);
    _4633 = NOVALUE;
    return _4641;
    // SubProg get_string pc: 106 op: NOP1 (159)
L7: // addr: 107 pc: 106 sub: 8467 op: 159
    // SubProg get_string pc: 107 op: NOP1 (159)
L6: // addr: 108 pc: 107 sub: 8467 op: 159
    // SubProg get_string pc: 108 op: STARTLINE (58)

    /** get.e:144				return {GET_SUCCESS, text}*/
    // SubProg get_string pc: 110 op: RIGHT_BRACE_2 (85)
    RefDS(_text_8469);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _text_8469;
    _4642 = MAKE_SEQ(_1);
    // SubProg get_string pc: 114 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_8469
    DeRefDSi(_text_8469);
    DeRef(_4630);
    _4630 = NOVALUE;
    DeRef(_4636);
    _4636 = NOVALUE;
    DeRef(_4633);
    _4633 = NOVALUE;
    DeRef(_4641);
    _4641 = NOVALUE;
    return _4642;
    // SubProg get_string pc: 118 op: ELSE (23)
    goto L4; // [118] 164
    // SubProg get_string pc: 120 op: NOP1 (159)
L5: // addr: 121 pc: 120 sub: 8467 op: 159
    // SubProg get_string pc: 121 op: STARTLINE (58)

    /** get.e:145			elsif ch = '\\' then*/
    // SubProg get_string pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 125 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 92)
    goto L8; // [125] 163
    // SubProg get_string pc: 129 op: STARTLINE (58)

    /** get.e:146				get_ch()*/
    // SubProg get_string pc: 131 op: PROC (27)
    _18get_ch();
    // SubProg get_string pc: 133 op: STARTLINE (58)

    /** get.e:147				ch = escape_char(ch)*/
    // SubProg get_string pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 137 op: PROC (27)
    _0 = _18escape_char(_18ch_8394);
    _18ch_8394 = _0;
    // SubProg get_string pc: 141 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_18ch_8394)) {
        _1 = (object)(DBL_PTR(_18ch_8394)->dbl);
        DeRefDS(_18ch_8394);
        _18ch_8394 = _1;
    }
    // SubProg get_string pc: 143 op: STARTLINE (58)

    /** get.e:148				if ch = GET_FAIL then*/
    // SubProg get_string pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 147 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 1)
    goto L9; // [147] 162
    // SubProg get_string pc: 151 op: STARTLINE (58)

    /** get.e:149					return {GET_FAIL, 0}*/
    // SubProg get_string pc: 153 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4646 = MAKE_SEQ(_1);
    // SubProg get_string pc: 157 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_8469
    DeRefi(_text_8469);
    DeRef(_4630);
    _4630 = NOVALUE;
    DeRef(_4642);
    _4642 = NOVALUE;
    DeRef(_4636);
    _4636 = NOVALUE;
    DeRef(_4633);
    _4633 = NOVALUE;
    DeRef(_4641);
    _4641 = NOVALUE;
    return _4646;
    // SubProg get_string pc: 161 op: NOP1 (159)
L9: // addr: 162 pc: 161 sub: 8467 op: 159
    // SubProg get_string pc: 162 op: NOP1 (159)
L8: // addr: 163 pc: 162 sub: 8467 op: 159
    // SubProg get_string pc: 163 op: NOP1 (159)
L4: // addr: 164 pc: 163 sub: 8467 op: 159
    // SubProg get_string pc: 164 op: STARTLINE (58)

    /** get.e:152			text = text & ch*/
    // SubProg get_string pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 168 op: CONCAT (15)
    Append(&_text_8469, _text_8469, _18ch_8394);
    // SubProg get_string pc: 172 op: STARTLINE (58)

    /** get.e:153		end while*/
    // SubProg get_string pc: 174 op: ENDWHILE (22)
    goto L1; // [174] 13
    // SubProg get_string pc: 176 op: NOP1 (159)
    // SubProg get_string pc: 177 op: BADRETURNF (43)
    ;
}


object _18read_comment()
{
    object _4667 = NOVALUE; // 8528 4667
    object _4666 = NOVALUE; // 8527 4666
// skipping _4665  name type: 0
    object _4664 = NOVALUE; // 8525 4664
// skipping _4663  name type: 0
    object _4662 = NOVALUE; // 8523 4662
// skipping _4661  name type: 0
    object _4660 = NOVALUE; // 8520 4660
    object _4659 = NOVALUE; // 8516 4659
    object _4658 = NOVALUE; // 8514 4658
// skipping _4657  name type: 0
    object _4656 = NOVALUE; // 8511 4656
    object _4655 = NOVALUE; // 8510 4655
    object _4654 = NOVALUE; // 8509 4654
    object _4653 = NOVALUE; // 8508 4653
    object _4652 = NOVALUE; // 8507 4652
    object _4651 = NOVALUE; // 8505 4651
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_comment pc: 1 op: STARTLINE (58)

    /** get.e:163		if atom(input_string) then*/
    // SubProg read_comment pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 5 op: IS_AN_ATOM (67)
    _4651 = IS_ATOM(_18input_string_8392);
    // SubProg read_comment pc: 8 op: IF (20)
    if (_4651 == 0)
    {
        _4651 = NOVALUE;
        goto L1; // [8] 98
    }
    else{
        _4651 = NOVALUE;
    }
    // SubProg read_comment pc: 11 op: STARTLINE (58)

    /** get.e:164			while ch!='\n' and ch!='\r' and ch!=-1 do*/
    // SubProg read_comment pc: 13 op: NOP2 (110)
    // SubProg read_comment pc: 15 op: NOPWHILE (158)
L2: // addr: 16 pc: 15 sub: 8502 op: 158
    // SubProg read_comment pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 18 op: NOTEQ (4)
    _4652 = (_18ch_8394 != 10);
    // SubProg read_comment pc: 22 op: SC1_AND (141)
    if (_4652 == 0) {
        _4653 = 0;
        goto L3; // [22] 36
    }
    // SubProg read_comment pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 28 op: NOTEQ (4)
    _4654 = (_18ch_8394 != 13);
    // SubProg read_comment pc: 32 op: SC2_AND (142)
    _4653 = (_4654 != 0);
    // SubProg read_comment pc: 35 op: NOP1 (159)
L3: // addr: 36 pc: 35 sub: 8502 op: 159
    // SubProg read_comment pc: 36 op: SC1_AND_IF (146)
    if (_4653 == 0) {
        goto L4; // [36] 59
    }
    // SubProg read_comment pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 42 op: NOTEQ (4)
    _4656 = (_18ch_8394 != -1);
    // SubProg read_comment pc: 46 op: NOP1 (159)
    // SubProg read_comment pc: 47 op: WHILE (47)
    if (_4656 == 0)
    {
        DeRef(_4656);
        _4656 = NOVALUE;
        goto L4; // [47] 59
    }
    else{
        DeRef(_4656);
        _4656 = NOVALUE;
    }
    // SubProg read_comment pc: 50 op: STARTLINE (58)

    /** get.e:165				get_ch()*/
    // SubProg read_comment pc: 52 op: PROC (27)
    _18get_ch();
    // SubProg read_comment pc: 54 op: STARTLINE (58)

    /** get.e:166			end while*/
    // SubProg read_comment pc: 56 op: ENDWHILE (22)
    goto L2; // [56] 16
    // SubProg read_comment pc: 58 op: NOP1 (159)
L4: // addr: 59 pc: 58 sub: 8502 op: 159
    // SubProg read_comment pc: 59 op: STARTLINE (58)

    /** get.e:167			get_ch()*/
    // SubProg read_comment pc: 61 op: PROC (27)
    _18get_ch();
    // SubProg read_comment pc: 63 op: STARTLINE (58)

    /** get.e:168			if ch=-1 then*/
    // SubProg read_comment pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 67 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != -1)
    goto L5; // [67] 84
    // SubProg read_comment pc: 71 op: STARTLINE (58)

    /** get.e:169				return {GET_EOF, 0}*/
    // SubProg read_comment pc: 73 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _4658 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 77 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_4654);
    _4654 = NOVALUE;
    DeRef(_4652);
    _4652 = NOVALUE;
    return _4658;
    // SubProg read_comment pc: 81 op: ELSE (23)
    goto L6; // [81] 182
    // SubProg read_comment pc: 83 op: NOP1 (159)
L5: // addr: 84 pc: 83 sub: 8502 op: 159
    // SubProg read_comment pc: 84 op: STARTLINE (58)

    /** get.e:171				return {GET_IGNORE, 0}*/
    // SubProg read_comment pc: 86 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _4659 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 90 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_4654);
    _4654 = NOVALUE;
    DeRef(_4658);
    _4658 = NOVALUE;
    DeRef(_4652);
    _4652 = NOVALUE;
    return _4659;
    // SubProg read_comment pc: 94 op: NOP1 (159)
    // SubProg read_comment pc: 95 op: ELSE (23)
    goto L6; // [95] 182
    // SubProg read_comment pc: 97 op: NOP1 (159)
L1: // addr: 98 pc: 97 sub: 8502 op: 159
    // SubProg read_comment pc: 98 op: STARTLINE (58)

    /** get.e:174			for i=string_next to length(input_string) do*/
    // SubProg read_comment pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 104 op: LENGTH (42)
    if (IS_SEQUENCE(_18input_string_8392)){
            _4660 = SEQ_PTR(_18input_string_8392)->length;
    }
    else {
        _4660 = 1;
    }
    // SubProg read_comment pc: 107 op: FOR_I (125)
    {
        object _i_8519;
        _i_8519 = _18string_next_8393;
L7: // addr: 114 pc: 107 sub: 8502 op: 125
        if (_i_8519 > _4660){
            goto L8; // [107] 171
        }
        // SubProg read_comment pc: 114 op: STARTLINE (58)

        /** get.e:175				ch=input_string[i]*/
        // SubProg read_comment pc: 116 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 118 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_18input_string_8392);
        _18ch_8394 = (object)*(((s1_ptr)_2)->base + _i_8519);
        if (!IS_ATOM_INT(_18ch_8394)){
            _18ch_8394 = (object)DBL_PTR(_18ch_8394)->dbl;
        }
        // SubProg read_comment pc: 124 op: STARTLINE (58)

        /** get.e:176				if ch='\n' or ch='\r' then*/
        // SubProg read_comment pc: 126 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 128 op: EQUALS (3)
        _4662 = (_18ch_8394 == 10);
        // SubProg read_comment pc: 132 op: SC1_OR_IF (147)
        if (_4662 != 0) {
            goto L9; // [132] 147
        }
        // SubProg read_comment pc: 136 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 138 op: EQUALS (3)
        _4664 = (_18ch_8394 == 13);
        // SubProg read_comment pc: 142 op: NOP1 (159)
        // SubProg read_comment pc: 143 op: IF (20)
        if (_4664 == 0)
        {
            DeRef(_4664);
            _4664 = NOVALUE;
            goto LA; // [143] 164
        }
        else{
            DeRef(_4664);
            _4664 = NOVALUE;
        }
        // SubProg read_comment pc: 146 op: NOP1 (159)
L9: // addr: 147 pc: 146 sub: 8502 op: 159
        // SubProg read_comment pc: 147 op: STARTLINE (58)

        /** get.e:177					string_next=i+1*/
        // SubProg read_comment pc: 149 op: PLUS1_I (117)
        _18string_next_8393 = _i_8519 + 1;
        // SubProg read_comment pc: 153 op: STARTLINE (58)

        /** get.e:178					return {GET_IGNORE, 0}*/
        // SubProg read_comment pc: 155 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = 0;
        _4666 = MAKE_SEQ(_1);
        // SubProg read_comment pc: 159 op: RETURNF (28)

// Exiting block BLOCK: read_comment
        DeRef(_4654);
        _4654 = NOVALUE;
        DeRef(_4658);
        _4658 = NOVALUE;
        DeRef(_4652);
        _4652 = NOVALUE;
        DeRef(_4662);
        _4662 = NOVALUE;
        DeRef(_4659);
        _4659 = NOVALUE;
        return _4666;
        // SubProg read_comment pc: 163 op: NOP1 (159)
LA: // addr: 164 pc: 163 sub: 8502 op: 159
        // SubProg read_comment pc: 164 op: STARTLINE (58)

        /** get.e:180			end for*/
        // SubProg read_comment pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_8519 = _i_8519 + 1;
        goto L7; // [166] 114
L8: // addr: 171 pc: 166 sub: 8502 op: 54
        ;
    }
    // SubProg read_comment pc: 171 op: STARTLINE (58)

    /** get.e:181			return {GET_EOF, 0}*/
    // SubProg read_comment pc: 173 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _4667 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 177 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_4666);
    _4666 = NOVALUE;
    DeRef(_4654);
    _4654 = NOVALUE;
    DeRef(_4658);
    _4658 = NOVALUE;
    DeRef(_4652);
    _4652 = NOVALUE;
    DeRef(_4662);
    _4662 = NOVALUE;
    DeRef(_4659);
    _4659 = NOVALUE;
    return _4667;
    // SubProg read_comment pc: 181 op: NOP1 (159)
L6: // addr: 182 pc: 181 sub: 8502 op: 159
    // SubProg read_comment pc: 182 op: BADRETURNF (43)
    ;
}


object _18get_number()
{
    object _sign_8531 = NOVALUE;
    object _e_sign_8532 = NOVALUE;
    object _ndigits_8533 = NOVALUE;
    object _hex_digit_8534 = NOVALUE;
    object _mantissa_8535 = NOVALUE;
    object _dec_8536 = NOVALUE;
    object _e_mag_8537 = NOVALUE;
    object _number_string_8538 = NOVALUE;
    object _4727 = NOVALUE; // 8618 4727
// skipping _4726  name type: 0
    object _4725 = NOVALUE; // 8615 4725
// skipping _4724  name type: 0
    object _4723 = NOVALUE; // 8612 4723
    object _4722 = NOVALUE; // 8611 4722
    object _4721 = NOVALUE; // 8610 4721
    object _4720 = NOVALUE; // 8608 4720
    object _4719 = NOVALUE; // 8607 4719
    object _4718 = NOVALUE; // 8606 4718
// skipping _4717  name type: 0
// skipping _4716  name type: 0
// skipping _4715  name type: 0
// skipping _4714  name type: 0
// skipping _4713  name type: 0
    object _4712 = NOVALUE; // 8597 4712
// skipping _4711  name type: 0
    object _4710 = NOVALUE; // 8595 4710
// skipping _4709  name type: 0
    object _4708 = NOVALUE; // 8592 4708
// skipping _4707  name type: 0
// skipping _4706  name type: 0
// skipping _4705  name type: 0
// skipping _4704  name type: 0
    object _4703 = NOVALUE; // 8586 4703
    object _4702 = NOVALUE; // 8585 4702
// skipping _4701  name type: 0
    object _4700 = NOVALUE; // 8583 4700
    object _4699 = NOVALUE; // 8582 4699
    object _4698 = NOVALUE; // 8581 4698
// skipping _4697  name type: 0
// skipping _4696  name type: 0
// skipping _4695  name type: 0
// skipping _4694  name type: 0
    object _4693 = NOVALUE; // 8574 4693
    object _4692 = NOVALUE; // 8573 4692
// skipping _4691  name type: 0
    object _4690 = NOVALUE; // 8571 4690
    object _4689 = NOVALUE; // 8570 4689
    object _4688 = NOVALUE; // 8569 4688
    object _4687 = NOVALUE; // 8567 4687
    object _4686 = NOVALUE; // 8565 4686
    object _4685 = NOVALUE; // 8564 4685
// skipping _4684  name type: 0
// skipping _4683  name type: 0
// skipping _4682  name type: 0
    object _4681 = NOVALUE; // 8558 4681
// skipping _4680  name type: 0
// skipping _4679  name type: 0
// skipping _4678  name type: 0
    object _4677 = NOVALUE; // 8553 4677
// skipping _4676  name type: 0
// skipping _4675  name type: 0
// skipping _4674  name type: 0
// skipping _4673  name type: 0
    object _4672 = NOVALUE; // 8545 4672
// skipping _4671  name type: 0
// skipping _4670  name type: 0
// skipping _4669  name type: 0
// skipping _4668  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_number pc: 1 op: STARTLINE (58)

    /** get.e:192		sequence number_string = { ch }*/
    // SubProg get_number pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 5 op: RIGHT_BRACE_N (31)
    _0 = _number_string_8538;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _18ch_8394;
    _number_string_8538 = MAKE_SEQ(_1);
    DeRefi(_0);
    // SubProg get_number pc: 9 op: STARTLINE (58)

    /** get.e:194		sign = +1*/
    // SubProg get_number pc: 11 op: ASSIGN_I (113)
    _sign_8531 = 1;
    // SubProg get_number pc: 14 op: STARTLINE (58)

    /** get.e:195		mantissa = 0*/
    // SubProg get_number pc: 16 op: ASSIGN (18)
    DeRef(_mantissa_8535);
    _mantissa_8535 = 0;
    // SubProg get_number pc: 19 op: STARTLINE (58)

    /** get.e:196		ndigits = 0*/
    // SubProg get_number pc: 21 op: ASSIGN_I (113)
    _ndigits_8533 = 0;
    // SubProg get_number pc: 24 op: STARTLINE (58)

    /** get.e:199		if ch = '-' then*/
    // SubProg get_number pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 28 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 45)
    goto L1; // [28] 70
    // SubProg get_number pc: 32 op: STARTLINE (58)

    /** get.e:200			sign = -1*/
    // SubProg get_number pc: 34 op: ASSIGN_I (113)
    _sign_8531 = -1;
    // SubProg get_number pc: 37 op: STARTLINE (58)

    /** get.e:201			get_ch()*/
    // SubProg get_number pc: 39 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 41 op: STARTLINE (58)

    /** get.e:202			number_string &= ch*/
    // SubProg get_number pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 45 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 49 op: STARTLINE (58)

    /** get.e:203			if ch='-' then*/
    // SubProg get_number pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 53 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 45)
    goto L2; // [53] 92
    // SubProg get_number pc: 57 op: STARTLINE (58)

    /** get.e:204				return read_comment()*/
    // SubProg get_number pc: 59 op: PROC (27)
    _4672 = _18read_comment();
    // SubProg get_number pc: 62 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_8531

// block var ndigits_8533

// block var hex_digit_8534

// block var mantissa_8535

// block var dec_8536
    DeRef(_dec_8536);

// block var number_string_8538
    DeRefDSi(_number_string_8538);
    return _4672;
    // SubProg get_number pc: 66 op: NOP1 (159)
    // SubProg get_number pc: 67 op: ELSE (23)
    goto L2; // [67] 92
    // SubProg get_number pc: 69 op: NOP1 (159)
L1: // addr: 70 pc: 69 sub: 8529 op: 159
    // SubProg get_number pc: 70 op: STARTLINE (58)

    /** get.e:206		elsif ch = '+' then*/
    // SubProg get_number pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 74 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 43)
    goto L3; // [74] 91
    // SubProg get_number pc: 78 op: STARTLINE (58)

    /** get.e:207			get_ch()*/
    // SubProg get_number pc: 80 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 82 op: STARTLINE (58)

    /** get.e:208			number_string &= ch*/
    // SubProg get_number pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 86 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 90 op: NOP1 (159)
L3: // addr: 91 pc: 90 sub: 8529 op: 159
    // SubProg get_number pc: 91 op: NOP1 (159)
L2: // addr: 92 pc: 91 sub: 8529 op: 159
    // SubProg get_number pc: 92 op: STARTLINE (58)

    /** get.e:212		if ch = '#' then*/
    // SubProg get_number pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 96 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 35)
    goto L4; // [96] 210
    // SubProg get_number pc: 100 op: STARTLINE (58)

    /** get.e:214			get_ch()*/
    // SubProg get_number pc: 102 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 104 op: STARTLINE (58)

    /** get.e:215			number_string &= ch*/
    // SubProg get_number pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 108 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 112 op: STARTLINE (58)

    /** get.e:216			while TRUE do*/
    // SubProg get_number pc: 114 op: NOP2 (110)
    // SubProg get_number pc: 116 op: NOPWHILE (158)
L5: // addr: 117 pc: 116 sub: 8529 op: 158
    // SubProg get_number pc: 117 op: STARTLINE (58)

    /** get.e:217				hex_digit = find(ch, HEX_DIGITS)-1*/
    // SubProg get_number pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 123 op: FIND_FROM (176)
    _4677 = find_from(_18ch_8394, _18HEX_DIGITS_8374, 1);
    // SubProg get_number pc: 128 op: MINUS_I (116)
    _hex_digit_8534 = _4677 - 1;
    _4677 = NOVALUE;
    // SubProg get_number pc: 132 op: STARTLINE (58)

    /** get.e:218				if hex_digit >= 0 then*/
    // SubProg get_number pc: 134 op: GREATEREQ_IFW_I (120)
    if (_hex_digit_8534 < 0)
    goto L6; // [134] 169
    // SubProg get_number pc: 138 op: STARTLINE (58)

    /** get.e:219					ndigits += 1*/
    // SubProg get_number pc: 140 op: PLUS1_I (117)
    _ndigits_8533 = _ndigits_8533 + 1;
    // SubProg get_number pc: 144 op: STARTLINE (58)

    /** get.e:220					mantissa = mantissa * 16 + hex_digit*/
    // SubProg get_number pc: 146 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_8535)) {
        if (_mantissa_8535 == (short)_mantissa_8535){
            _4681 = _mantissa_8535 * 16;
        }
        else{
            _4681 = NewDouble(_mantissa_8535 * (eudouble)16);
        }
    }
    else {
        _4681 = NewDouble(DBL_PTR(_mantissa_8535)->dbl * (eudouble)16);
    }
    // SubProg get_number pc: 150 op: PLUS (11)
    DeRef(_mantissa_8535);
    if (IS_ATOM_INT(_4681)) {
        _mantissa_8535 = _4681 + _hex_digit_8534;
        if ((object)((uintptr_t)_mantissa_8535 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_8535 = NewDouble((eudouble)_mantissa_8535);
        }
    }
    else {
        _mantissa_8535 = NewDouble(DBL_PTR(_4681)->dbl + (eudouble)_hex_digit_8534);
    }
    DeRef(_4681);
    _4681 = NOVALUE;
    // SubProg get_number pc: 154 op: STARTLINE (58)

    /** get.e:221					get_ch()*/
    // SubProg get_number pc: 156 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 158 op: STARTLINE (58)

    /** get.e:222					number_string &= ch*/
    // SubProg get_number pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 162 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 166 op: ELSE (23)
    goto L5; // [166] 117
    // SubProg get_number pc: 168 op: NOP1 (159)
L6: // addr: 169 pc: 168 sub: 8529 op: 159
    // SubProg get_number pc: 169 op: STARTLINE (58)

    /** get.e:224					if ndigits > 0 then*/
    // SubProg get_number pc: 171 op: GREATER_IFW_I (124)
    if (_ndigits_8533 <= 0)
    goto L7; // [171] 192
    // SubProg get_number pc: 175 op: STARTLINE (58)

    /** get.e:225						return {GET_SUCCESS, sign * mantissa}*/
    // SubProg get_number pc: 177 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_8535)) {
        if (_sign_8531 == (short)_sign_8531 && _mantissa_8535 <= INT15 && _mantissa_8535 >= -INT15){
            _4685 = _sign_8531 * _mantissa_8535;
        }
        else{
            _4685 = NewDouble(_sign_8531 * (eudouble)_mantissa_8535);
        }
    }
    else {
        _4685 = NewDouble((eudouble)_sign_8531 * DBL_PTR(_mantissa_8535)->dbl);
    }
    // SubProg get_number pc: 181 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _4685;
    _4686 = MAKE_SEQ(_1);
    _4685 = NOVALUE;
    // SubProg get_number pc: 185 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_8531

// block var ndigits_8533

// block var hex_digit_8534

// block var mantissa_8535
    DeRef(_mantissa_8535);

// block var dec_8536
    DeRef(_dec_8536);

// block var number_string_8538
    DeRefi(_number_string_8538);
    DeRef(_4672);
    _4672 = NOVALUE;
    return _4686;
    // SubProg get_number pc: 189 op: ELSE (23)
    goto L5; // [189] 117
    // SubProg get_number pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 8529 op: 159
    // SubProg get_number pc: 192 op: STARTLINE (58)

    /** get.e:227						return {GET_FAIL, 0}*/
    // SubProg get_number pc: 194 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4687 = MAKE_SEQ(_1);
    // SubProg get_number pc: 198 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_8531

// block var ndigits_8533

// block var hex_digit_8534

// block var mantissa_8535
    DeRef(_mantissa_8535);

// block var dec_8536
    DeRef(_dec_8536);

// block var number_string_8538
    DeRefi(_number_string_8538);
    DeRef(_4686);
    _4686 = NOVALUE;
    DeRef(_4672);
    _4672 = NOVALUE;
    return _4687;
    // SubProg get_number pc: 202 op: NOP1 (159)
    // SubProg get_number pc: 203 op: NOP1 (159)
    // SubProg get_number pc: 204 op: STARTLINE (58)

    /** get.e:230			end while*/
    // SubProg get_number pc: 206 op: ENDWHILE (22)
    goto L5; // [206] 117
    // SubProg get_number pc: 208 op: NOP1 (159)
    // SubProg get_number pc: 209 op: NOP1 (159)
L4: // addr: 210 pc: 209 sub: 8529 op: 159
    // SubProg get_number pc: 210 op: STARTLINE (58)

    /** get.e:234		while ch >= '0' and ch <= '9' do*/
    // SubProg get_number pc: 212 op: NOP2 (110)
    // SubProg get_number pc: 214 op: NOPWHILE (158)
L8: // addr: 215 pc: 214 sub: 8529 op: 158
    // SubProg get_number pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 217 op: GREATEREQ (2)
    _4688 = (_18ch_8394 >= 48);
    // SubProg get_number pc: 221 op: SC1_AND_IF (146)
    if (_4688 == 0) {
        goto L9; // [221] 274
    }
    // SubProg get_number pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 227 op: LESSEQ (5)
    _4690 = (_18ch_8394 <= 57);
    // SubProg get_number pc: 231 op: NOP1 (159)
    // SubProg get_number pc: 232 op: WHILE (47)
    if (_4690 == 0)
    {
        DeRef(_4690);
        _4690 = NOVALUE;
        goto L9; // [232] 274
    }
    else{
        DeRef(_4690);
        _4690 = NOVALUE;
    }
    // SubProg get_number pc: 235 op: STARTLINE (58)

    /** get.e:235			ndigits += 1*/
    // SubProg get_number pc: 237 op: PLUS1_I (117)
    _ndigits_8533 = _ndigits_8533 + 1;
    // SubProg get_number pc: 241 op: STARTLINE (58)

    /** get.e:236			mantissa = mantissa * 10 + (ch - '0')*/
    // SubProg get_number pc: 243 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_8535)) {
        if (_mantissa_8535 == (short)_mantissa_8535){
            _4692 = _mantissa_8535 * 10;
        }
        else{
            _4692 = NewDouble(_mantissa_8535 * (eudouble)10);
        }
    }
    else {
        _4692 = NewDouble(DBL_PTR(_mantissa_8535)->dbl * (eudouble)10);
    }
    // SubProg get_number pc: 247 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 249 op: MINUS (10)
    _4693 = _18ch_8394 - 48;
    if ((object)((uintptr_t)_4693 +(uintptr_t) HIGH_BITS) >= 0){
        _4693 = NewDouble((eudouble)_4693);
    }
    // SubProg get_number pc: 253 op: PLUS (11)
    DeRef(_mantissa_8535);
    if (IS_ATOM_INT(_4692) && IS_ATOM_INT(_4693)) {
        _mantissa_8535 = _4692 + _4693;
        if ((object)((uintptr_t)_mantissa_8535 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_8535 = NewDouble((eudouble)_mantissa_8535);
        }
    }
    else {
        if (IS_ATOM_INT(_4692)) {
            _mantissa_8535 = NewDouble((eudouble)_4692 + DBL_PTR(_4693)->dbl);
        }
        else {
            if (IS_ATOM_INT(_4693)) {
                _mantissa_8535 = NewDouble(DBL_PTR(_4692)->dbl + (eudouble)_4693);
            }
            else
            _mantissa_8535 = NewDouble(DBL_PTR(_4692)->dbl + DBL_PTR(_4693)->dbl);
        }
    }
    DeRef(_4692);
    _4692 = NOVALUE;
    DeRef(_4693);
    _4693 = NOVALUE;
    // SubProg get_number pc: 257 op: STARTLINE (58)

    /** get.e:237			get_ch()*/
    // SubProg get_number pc: 259 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 261 op: STARTLINE (58)

    /** get.e:238			number_string &= ch*/
    // SubProg get_number pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 265 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 269 op: STARTLINE (58)

    /** get.e:239		end while*/
    // SubProg get_number pc: 271 op: ENDWHILE (22)
    goto L8; // [271] 215
    // SubProg get_number pc: 273 op: NOP1 (159)
L9: // addr: 274 pc: 273 sub: 8529 op: 159
    // SubProg get_number pc: 274 op: STARTLINE (58)

    /** get.e:241		if ch = '.' then*/
    // SubProg get_number pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 278 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 46)
    goto LA; // [278] 370
    // SubProg get_number pc: 282 op: STARTLINE (58)

    /** get.e:243			get_ch()*/
    // SubProg get_number pc: 284 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 286 op: STARTLINE (58)

    /** get.e:244			number_string &= ch*/
    // SubProg get_number pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 290 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 294 op: STARTLINE (58)

    /** get.e:245			dec = 10*/
    // SubProg get_number pc: 296 op: ASSIGN (18)
    DeRef(_dec_8536);
    _dec_8536 = 10;
    // SubProg get_number pc: 299 op: STARTLINE (58)

    /** get.e:246			while ch >= '0' and ch <= '9' do*/
    // SubProg get_number pc: 301 op: NOP2 (110)
    // SubProg get_number pc: 303 op: NOPWHILE (158)
LB: // addr: 304 pc: 303 sub: 8529 op: 158
    // SubProg get_number pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 306 op: GREATEREQ (2)
    _4698 = (_18ch_8394 >= 48);
    // SubProg get_number pc: 310 op: SC1_AND_IF (146)
    if (_4698 == 0) {
        goto LC; // [310] 369
    }
    // SubProg get_number pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 316 op: LESSEQ (5)
    _4700 = (_18ch_8394 <= 57);
    // SubProg get_number pc: 320 op: NOP1 (159)
    // SubProg get_number pc: 321 op: WHILE (47)
    if (_4700 == 0)
    {
        DeRef(_4700);
        _4700 = NOVALUE;
        goto LC; // [321] 369
    }
    else{
        DeRef(_4700);
        _4700 = NOVALUE;
    }
    // SubProg get_number pc: 324 op: STARTLINE (58)

    /** get.e:247				ndigits += 1*/
    // SubProg get_number pc: 326 op: PLUS1_I (117)
    _ndigits_8533 = _ndigits_8533 + 1;
    // SubProg get_number pc: 330 op: STARTLINE (58)

    /** get.e:248				mantissa += (ch - '0') / dec*/
    // SubProg get_number pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 334 op: MINUS (10)
    _4702 = _18ch_8394 - 48;
    if ((object)((uintptr_t)_4702 +(uintptr_t) HIGH_BITS) >= 0){
        _4702 = NewDouble((eudouble)_4702);
    }
    // SubProg get_number pc: 338 op: DIVIDE (14)
    if (IS_ATOM_INT(_4702) && IS_ATOM_INT(_dec_8536)) {
        _4703 = (_4702 % _dec_8536) ? NewDouble((eudouble)_4702 / _dec_8536) : (_4702 / _dec_8536);
    }
    else {
        if (IS_ATOM_INT(_4702)) {
            _4703 = NewDouble((eudouble)_4702 / DBL_PTR(_dec_8536)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_8536)) {
                _4703 = NewDouble(DBL_PTR(_4702)->dbl / (eudouble)_dec_8536);
            }
            else
            _4703 = NewDouble(DBL_PTR(_4702)->dbl / DBL_PTR(_dec_8536)->dbl);
        }
    }
    DeRef(_4702);
    _4702 = NOVALUE;
    // SubProg get_number pc: 342 op: PLUS (11)
    _0 = _mantissa_8535;
    if (IS_ATOM_INT(_mantissa_8535) && IS_ATOM_INT(_4703)) {
        _mantissa_8535 = _mantissa_8535 + _4703;
        if ((object)((uintptr_t)_mantissa_8535 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_8535 = NewDouble((eudouble)_mantissa_8535);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_8535)) {
            _mantissa_8535 = NewDouble((eudouble)_mantissa_8535 + DBL_PTR(_4703)->dbl);
        }
        else {
            if (IS_ATOM_INT(_4703)) {
                _mantissa_8535 = NewDouble(DBL_PTR(_mantissa_8535)->dbl + (eudouble)_4703);
            }
            else
            _mantissa_8535 = NewDouble(DBL_PTR(_mantissa_8535)->dbl + DBL_PTR(_4703)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_4703);
    _4703 = NOVALUE;
    // SubProg get_number pc: 346 op: STARTLINE (58)

    /** get.e:249				dec *= 10*/
    // SubProg get_number pc: 348 op: MULTIPLY (13)
    _0 = _dec_8536;
    if (IS_ATOM_INT(_dec_8536)) {
        if (_dec_8536 == (short)_dec_8536){
            _dec_8536 = _dec_8536 * 10;
        }
        else{
            _dec_8536 = NewDouble(_dec_8536 * (eudouble)10);
        }
    }
    else {
        _dec_8536 = NewDouble(DBL_PTR(_dec_8536)->dbl * (eudouble)10);
    }
    DeRef(_0);
    // SubProg get_number pc: 352 op: STARTLINE (58)

    /** get.e:250				get_ch()*/
    // SubProg get_number pc: 354 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 356 op: STARTLINE (58)

    /** get.e:251				number_string &= ch*/
    // SubProg get_number pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 360 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 364 op: STARTLINE (58)

    /** get.e:252			end while*/
    // SubProg get_number pc: 366 op: ENDWHILE (22)
    goto LB; // [366] 304
    // SubProg get_number pc: 368 op: NOP1 (159)
LC: // addr: 369 pc: 368 sub: 8529 op: 159
    // SubProg get_number pc: 369 op: NOP1 (159)
LA: // addr: 370 pc: 369 sub: 8529 op: 159
    // SubProg get_number pc: 370 op: STARTLINE (58)

    /** get.e:255		if ndigits = 0 then*/
    // SubProg get_number pc: 372 op: EQUALS_IFW_I (121)
    if (_ndigits_8533 != 0)
    goto LD; // [372] 387
    // SubProg get_number pc: 376 op: STARTLINE (58)

    /** get.e:256			return {GET_FAIL, 0}*/
    // SubProg get_number pc: 378 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4708 = MAKE_SEQ(_1);
    // SubProg get_number pc: 382 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_8531

// block var ndigits_8533

// block var hex_digit_8534

// block var mantissa_8535
    DeRef(_mantissa_8535);

// block var dec_8536
    DeRef(_dec_8536);

// block var number_string_8538
    DeRefi(_number_string_8538);
    DeRef(_4687);
    _4687 = NOVALUE;
    DeRef(_4686);
    _4686 = NOVALUE;
    DeRef(_4698);
    _4698 = NOVALUE;
    DeRef(_4688);
    _4688 = NOVALUE;
    DeRef(_4672);
    _4672 = NOVALUE;
    return _4708;
    // SubProg get_number pc: 386 op: NOP1 (159)
LD: // addr: 387 pc: 386 sub: 8529 op: 159
    // SubProg get_number pc: 387 op: STARTLINE (58)

    /** get.e:259		mantissa = sign * mantissa*/
    // SubProg get_number pc: 389 op: MULTIPLY (13)
    _0 = _mantissa_8535;
    if (IS_ATOM_INT(_mantissa_8535)) {
        if (_sign_8531 == (short)_sign_8531 && _mantissa_8535 <= INT15 && _mantissa_8535 >= -INT15){
            _mantissa_8535 = _sign_8531 * _mantissa_8535;
        }
        else{
            _mantissa_8535 = NewDouble(_sign_8531 * (eudouble)_mantissa_8535);
        }
    }
    else {
        _mantissa_8535 = NewDouble((eudouble)_sign_8531 * DBL_PTR(_mantissa_8535)->dbl);
    }
    DeRef(_0);
    // SubProg get_number pc: 393 op: STARTLINE (58)

    /** get.e:261		if ch = 'e' or ch = 'E' then*/
    // SubProg get_number pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 397 op: EQUALS (3)
    _4710 = (_18ch_8394 == 101);
    // SubProg get_number pc: 401 op: SC1_OR_IF (147)
    if (_4710 != 0) {
        goto LE; // [401] 416
    }
    // SubProg get_number pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 407 op: EQUALS (3)
    _4712 = (_18ch_8394 == 69);
    // SubProg get_number pc: 411 op: NOP1 (159)
    // SubProg get_number pc: 412 op: IF (20)
    if (_4712 == 0)
    {
        DeRef(_4712);
        _4712 = NOVALUE;
        goto LF; // [412] 565
    }
    else{
        DeRef(_4712);
        _4712 = NOVALUE;
    }
    // SubProg get_number pc: 415 op: NOP1 (159)
LE: // addr: 416 pc: 415 sub: 8529 op: 159
    // SubProg get_number pc: 416 op: STARTLINE (58)

    /** get.e:264			get_ch()*/
    // SubProg get_number pc: 418 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 420 op: STARTLINE (58)

    /** get.e:265			number_string &= ch*/
    // SubProg get_number pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 424 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 428 op: STARTLINE (58)

    /** get.e:266			if ch = '-' then*/
    // SubProg get_number pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 432 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 45)
    goto L10; // [432] 451
    // SubProg get_number pc: 436 op: STARTLINE (58)

    /** get.e:267				get_ch()*/
    // SubProg get_number pc: 438 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 440 op: STARTLINE (58)

    /** get.e:268				number_string &= ch*/
    // SubProg get_number pc: 442 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 444 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 448 op: ELSE (23)
    goto L11; // [448] 473
    // SubProg get_number pc: 450 op: NOP1 (159)
L10: // addr: 451 pc: 450 sub: 8529 op: 159
    // SubProg get_number pc: 451 op: STARTLINE (58)

    /** get.e:269			elsif ch = '+' then*/
    // SubProg get_number pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 455 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 43)
    goto L12; // [455] 472
    // SubProg get_number pc: 459 op: STARTLINE (58)

    /** get.e:270				get_ch()*/
    // SubProg get_number pc: 461 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 463 op: STARTLINE (58)

    /** get.e:271				number_string &= ch*/
    // SubProg get_number pc: 465 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 467 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 471 op: NOP1 (159)
L12: // addr: 472 pc: 471 sub: 8529 op: 159
    // SubProg get_number pc: 472 op: NOP1 (159)
L11: // addr: 473 pc: 472 sub: 8529 op: 159
    // SubProg get_number pc: 473 op: STARTLINE (58)

    /** get.e:275			if ch >= '0' and ch <= '9' then*/
    // SubProg get_number pc: 475 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 477 op: GREATEREQ (2)
    _4718 = (_18ch_8394 >= 48);
    // SubProg get_number pc: 481 op: SC1_AND_IF (146)
    if (_4718 == 0) {
        goto L13; // [481] 546
    }
    // SubProg get_number pc: 485 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 487 op: LESSEQ (5)
    _4720 = (_18ch_8394 <= 57);
    // SubProg get_number pc: 491 op: NOP1 (159)
    // SubProg get_number pc: 492 op: IF (20)
    if (_4720 == 0)
    {
        DeRef(_4720);
        _4720 = NOVALUE;
        goto L13; // [492] 546
    }
    else{
        DeRef(_4720);
        _4720 = NOVALUE;
    }
    // SubProg get_number pc: 495 op: STARTLINE (58)

    /** get.e:277				while ch >= '0' and ch <= '9' with entry do*/
    // SubProg get_number pc: 497 op: ELSE (23)
    goto L14; // [497] 534
    // SubProg get_number pc: 499 op: NOPWHILE (158)
L15: // addr: 500 pc: 499 sub: 8529 op: 158
    // SubProg get_number pc: 500 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 502 op: GREATEREQ (2)
    _4721 = (_18ch_8394 >= 48);
    // SubProg get_number pc: 506 op: SC1_AND (141)
    if (_4721 == 0) {
        DeRef(_4722);
        _4722 = 0;
        goto L16; // [506] 520
    }
    // SubProg get_number pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 512 op: LESSEQ (5)
    _4723 = (_18ch_8394 <= 57);
    // SubProg get_number pc: 516 op: SC2_AND (142)
    _4722 = (_4723 != 0);
    // SubProg get_number pc: 519 op: NOP1 (159)
L16: // addr: 520 pc: 519 sub: 8529 op: 159
    // SubProg get_number pc: 520 op: WHILE (47)
    if (_4722 == 0)
    {
        _4722 = NOVALUE;
        goto L17; // [520] 557
    }
    else{
        _4722 = NOVALUE;
    }
    // SubProg get_number pc: 523 op: STARTLINE (58)

    /** get.e:278					number_string &= ch*/
    // SubProg get_number pc: 525 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 527 op: CONCAT (15)
    Append(&_number_string_8538, _number_string_8538, _18ch_8394);
    // SubProg get_number pc: 531 op: STARTLINE (58)

    /** get.e:279				entry*/
    // SubProg get_number pc: 533 op: NOP1 (159)
L14: // addr: 534 pc: 533 sub: 8529 op: 159
    // SubProg get_number pc: 534 op: STARTLINE (58)

    /** get.e:280					get_ch()*/
    // SubProg get_number pc: 536 op: PROC (27)
    _18get_ch();
    // SubProg get_number pc: 538 op: STARTLINE (58)

    /** get.e:281				end while*/
    // SubProg get_number pc: 540 op: ENDWHILE (22)
    goto L15; // [540] 500
    // SubProg get_number pc: 542 op: NOP1 (159)
    // SubProg get_number pc: 543 op: ELSE (23)
    goto L17; // [543] 557
    // SubProg get_number pc: 545 op: NOP1 (159)
L13: // addr: 546 pc: 545 sub: 8529 op: 159
    // SubProg get_number pc: 546 op: STARTLINE (58)

    /** get.e:283				return {GET_FAIL, 0} -- no exponent*/
    // SubProg get_number pc: 548 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4725 = MAKE_SEQ(_1);
    // SubProg get_number pc: 552 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_8531

// block var ndigits_8533

// block var hex_digit_8534

// block var mantissa_8535
    DeRef(_mantissa_8535);

// block var dec_8536
    DeRef(_dec_8536);

// block var number_string_8538
    DeRefi(_number_string_8538);
    DeRef(_4687);
    _4687 = NOVALUE;
    DeRef(_4686);
    _4686 = NOVALUE;
    DeRef(_4723);
    _4723 = NOVALUE;
    DeRef(_4698);
    _4698 = NOVALUE;
    DeRef(_4688);
    _4688 = NOVALUE;
    DeRef(_4721);
    _4721 = NOVALUE;
    DeRef(_4710);
    _4710 = NOVALUE;
    DeRef(_4718);
    _4718 = NOVALUE;
    DeRef(_4708);
    _4708 = NOVALUE;
    DeRef(_4672);
    _4672 = NOVALUE;
    return _4725;
    // SubProg get_number pc: 556 op: NOP1 (159)
L17: // addr: 557 pc: 556 sub: 8529 op: 159
    // SubProg get_number pc: 557 op: STARTLINE (58)

    /** get.e:286			mantissa = scientific_to_atom( number_string )*/
    // SubProg get_number pc: 559 op: PROC (27)
    RefDS(_number_string_8538);
    _0 = _mantissa_8535;
    _mantissa_8535 = _27scientific_to_atom(_number_string_8538, 1);
    DeRef(_0);
    // SubProg get_number pc: 564 op: NOP1 (159)
LF: // addr: 565 pc: 564 sub: 8529 op: 159
    // SubProg get_number pc: 565 op: STARTLINE (58)

    /** get.e:289		return {GET_SUCCESS, mantissa}*/
    // SubProg get_number pc: 567 op: RIGHT_BRACE_2 (85)
    Ref(_mantissa_8535);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _mantissa_8535;
    _4727 = MAKE_SEQ(_1);
    // SubProg get_number pc: 571 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_8531

// block var ndigits_8533

// block var hex_digit_8534

// block var mantissa_8535
    DeRef(_mantissa_8535);

// block var dec_8536
    DeRef(_dec_8536);

// block var number_string_8538
    DeRefi(_number_string_8538);
    DeRef(_4687);
    _4687 = NOVALUE;
    DeRef(_4686);
    _4686 = NOVALUE;
    DeRef(_4725);
    _4725 = NOVALUE;
    DeRef(_4723);
    _4723 = NOVALUE;
    DeRef(_4698);
    _4698 = NOVALUE;
    DeRef(_4688);
    _4688 = NOVALUE;
    DeRef(_4721);
    _4721 = NOVALUE;
    DeRef(_4710);
    _4710 = NOVALUE;
    DeRef(_4718);
    _4718 = NOVALUE;
    DeRef(_4708);
    _4708 = NOVALUE;
    DeRef(_4672);
    _4672 = NOVALUE;
    return _4727;
    // SubProg get_number pc: 575 op: BADRETURNF (43)
    ;
}


object _18Get()
{
    object _skip_blanks_1__tmp_at328_8665 = NOVALUE;
    object _skip_blanks_1__tmp_at177_8646 = NOVALUE;
    object _skip_blanks_1__tmp_at88_8637 = NOVALUE;
    object _s_8621 = NOVALUE;
    object _e_8622 = NOVALUE;
    object _e1_8623 = NOVALUE;
    object _4766 = NOVALUE; // 8691 4766
    object _4765 = NOVALUE; // 8689 4765
// skipping _4764  name type: 0
    object _4763 = NOVALUE; // 8686 4763
// skipping _4761  name type: 0
    object _4760 = NOVALUE; // 8682 4760
// skipping _4759  name type: 0
    object _4758 = NOVALUE; // 8679 4758
// skipping _4757  name type: 0
    object _4756 = NOVALUE; // 8676 4756
// skipping _4755  name type: 0
    object _4754 = NOVALUE; // 8674 4754
// skipping _4753  name type: 0
// skipping _4752  name type: 0
    object _4751 = NOVALUE; // 8668 4751
// skipping _4750  name type: 0
    object _4749 = NOVALUE; // 8662 4749
// skipping _4748  name type: 0
// skipping _4747  name type: 0
// skipping _4746  name type: 0
    object _4745 = NOVALUE; // 8656 4745
// skipping _4744  name type: 0
// skipping _4743  name type: 0
// skipping _4742  name type: 0
    object _4741 = NOVALUE; // 8649 4741
// skipping _4740  name type: 0
// skipping _4739  name type: 0
    object _4738 = NOVALUE; // 8642 4738
    object _4737 = NOVALUE; // 8641 4737
// skipping _4736  name type: 0
    object _4735 = NOVALUE; // 8639 4735
// skipping _4734  name type: 0
    object _4733 = NOVALUE; // 8634 4733
// skipping _4732  name type: 0
    object _4731 = NOVALUE; // 8631 4731
    object _4730 = NOVALUE; // 8628 4730
// skipping _4729  name type: 0
    object _4728 = NOVALUE; // 8625 4728
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Get pc: 1 op: STARTLINE (58)

    /** get.e:300		while find(ch, white_space) do*/
    // SubProg Get pc: 3 op: NOP2 (110)
    // SubProg Get pc: 5 op: NOPWHILE (158)
L1: // addr: 6 pc: 5 sub: 8619 op: 158
    // SubProg Get pc: 6 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 8 op: FIND_FROM (176)
    _4728 = find_from(_18ch_8394, _18white_space_8410, 1);
    // SubProg Get pc: 13 op: WHILE (47)
    if (_4728 == 0)
    {
        _4728 = NOVALUE;
        goto L2; // [13] 25
    }
    else{
        _4728 = NOVALUE;
    }
    // SubProg Get pc: 16 op: STARTLINE (58)

    /** get.e:301			get_ch()*/
    // SubProg Get pc: 18 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 20 op: STARTLINE (58)

    /** get.e:302		end while*/
    // SubProg Get pc: 22 op: ENDWHILE (22)
    goto L1; // [22] 6
    // SubProg Get pc: 24 op: NOP1 (159)
L2: // addr: 25 pc: 24 sub: 8619 op: 159
    // SubProg Get pc: 25 op: STARTLINE (58)

    /** get.e:304		if ch = -1 then -- string is made of whitespace only*/
    // SubProg Get pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 29 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != -1)
    goto L3; // [29] 44
    // SubProg Get pc: 33 op: STARTLINE (58)

    /** get.e:305			return {GET_EOF, 0}*/
    // SubProg Get pc: 35 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _4730 = MAKE_SEQ(_1);
    // SubProg Get pc: 39 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    return _4730;
    // SubProg Get pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 8619 op: 159
    // SubProg Get pc: 44 op: STARTLINE (58)

    /** get.e:308		while 1 do*/
    // SubProg Get pc: 46 op: NOP2 (110)
    // SubProg Get pc: 48 op: NOPWHILE (158)
L4: // addr: 49 pc: 48 sub: 8619 op: 158
    // SubProg Get pc: 49 op: STARTLINE (58)

    /** get.e:309			if find(ch, START_NUMERIC) then*/
    // SubProg Get pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 55 op: FIND_FROM (176)
    _4731 = find_from(_18ch_8394, _18START_NUMERIC_8377, 1);
    // SubProg Get pc: 60 op: IF (20)
    if (_4731 == 0)
    {
        _4731 = NOVALUE;
        goto L5; // [60] 157
    }
    else{
        _4731 = NOVALUE;
    }
    // SubProg Get pc: 63 op: STARTLINE (58)

    /** get.e:310				e = get_number()*/
    // SubProg Get pc: 65 op: PROC (27)
    _0 = _e_8622;
    _e_8622 = _18get_number();
    DeRef(_0);
    // SubProg Get pc: 68 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 70 op: STARTLINE (58)

    /** get.e:311				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    // SubProg Get pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_8622);
    _4733 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get pc: 76 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _4733, -2)){
        _4733 = NOVALUE;
        goto L6; // [76] 87
    }
    _4733 = NOVALUE;
    // SubProg Get pc: 80 op: STARTLINE (58)

    /** get.e:312					return e*/
    // SubProg Get pc: 82 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e1_8623
    DeRef(_4730);
    _4730 = NOVALUE;
    return _e_8622;
    // SubProg Get pc: 86 op: NOP1 (159)
L6: // addr: 87 pc: 86 sub: 8619 op: 159
    // SubProg Get pc: 87 op: STARTLINE (58)

    /** get.e:314				skip_blanks()*/
    // SubProg Get pc: 89 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 91 op: NOP2 (110)
    // SubProg Get pc: 93 op: NOPWHILE (158)
L7: // addr: 94 pc: 93 sub: 8619 op: 158
    // SubProg Get pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 96 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at88_8637 = find_from(_18ch_8394, _18white_space_8410, 1);
    // SubProg Get pc: 101 op: WHILE (47)
    if (_skip_blanks_1__tmp_at88_8637 == 0)
    {
        goto L8; // [101] 118
    }
    else{
    }
    // SubProg Get pc: 104 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 106 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 108 op: STARTLINE (58)

    /** get.e:69		end while*/
    // SubProg Get pc: 110 op: ENDWHILE (22)
    goto L7; // [110] 94
    // SubProg Get pc: 112 op: NOP1 (159)
    // SubProg Get pc: 113 op: STARTLINE (58)

    /** get.e:70	end procedure*/
    // SubProg Get pc: 115 op: ELSE (23)
    goto L8; // [115] 118
    // SubProg Get pc: 117 op: NOP1 (159)
L8: // addr: 118 pc: 117 sub: 8619 op: 159
    // SubProg Get pc: 118 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 88

// block var skip_blanks_1__tmp_at88_8637
    // SubProg Get pc: 120 op: STARTLINE (58)

    /** get.e:315				if ch=-1 or ch='}' then -- '}' is expected only in the "{--\n}" case*/
    // SubProg Get pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 124 op: EQUALS (3)
    _4735 = (_18ch_8394 == -1);
    // SubProg Get pc: 128 op: SC1_OR_IF (147)
    if (_4735 != 0) {
        goto L9; // [128] 143
    }
    // SubProg Get pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 134 op: EQUALS (3)
    _4737 = (_18ch_8394 == 125);
    // SubProg Get pc: 138 op: NOP1 (159)
    // SubProg Get pc: 139 op: IF (20)
    if (_4737 == 0)
    {
        DeRef(_4737);
        _4737 = NOVALUE;
        goto L4; // [139] 49
    }
    else{
        DeRef(_4737);
        _4737 = NOVALUE;
    }
    // SubProg Get pc: 142 op: NOP1 (159)
L9: // addr: 143 pc: 142 sub: 8619 op: 159
    // SubProg Get pc: 143 op: STARTLINE (58)

    /** get.e:316					return {GET_NOTHING, 0} -- just a comment*/
    // SubProg Get pc: 145 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _4738 = MAKE_SEQ(_1);
    // SubProg Get pc: 149 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    return _4738;
    // SubProg Get pc: 153 op: NOP1 (159)
    // SubProg Get pc: 154 op: ELSE (23)
    goto L4; // [154] 49
    // SubProg Get pc: 156 op: NOP1 (159)
L5: // addr: 157 pc: 156 sub: 8619 op: 159
    // SubProg Get pc: 157 op: STARTLINE (58)

    /** get.e:318			elsif ch = '{' then*/
    // SubProg Get pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 161 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 123)
    goto LA; // [161] 465
    // SubProg Get pc: 165 op: STARTLINE (58)

    /** get.e:320				s = {}*/
    // SubProg Get pc: 167 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_s_8621);
    _s_8621 = _5;
    // SubProg Get pc: 170 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 172 op: STARTLINE (58)

    /** get.e:321				get_ch()*/
    // SubProg Get pc: 174 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 176 op: STARTLINE (58)

    /** get.e:322				skip_blanks()*/
    // SubProg Get pc: 178 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 180 op: NOP2 (110)
    // SubProg Get pc: 182 op: NOPWHILE (158)
LB: // addr: 183 pc: 182 sub: 8619 op: 158
    // SubProg Get pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 185 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at177_8646 = find_from(_18ch_8394, _18white_space_8410, 1);
    // SubProg Get pc: 190 op: WHILE (47)
    if (_skip_blanks_1__tmp_at177_8646 == 0)
    {
        goto LC; // [190] 207
    }
    else{
    }
    // SubProg Get pc: 193 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 195 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 197 op: STARTLINE (58)

    /** get.e:69		end while*/
    // SubProg Get pc: 199 op: ENDWHILE (22)
    goto LB; // [199] 183
    // SubProg Get pc: 201 op: NOP1 (159)
    // SubProg Get pc: 202 op: STARTLINE (58)

    /** get.e:70	end procedure*/
    // SubProg Get pc: 204 op: ELSE (23)
    goto LC; // [204] 207
    // SubProg Get pc: 206 op: NOP1 (159)
LC: // addr: 207 pc: 206 sub: 8619 op: 159
    // SubProg Get pc: 207 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 177

// block var skip_blanks_1__tmp_at177_8646
    // SubProg Get pc: 209 op: STARTLINE (58)

    /** get.e:323				if ch = '}' then -- empty sequence*/
    // SubProg Get pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 213 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 125)
    goto LD; // [213] 232
    // SubProg Get pc: 217 op: STARTLINE (58)

    /** get.e:324					get_ch()*/
    // SubProg Get pc: 219 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 221 op: STARTLINE (58)

    /** get.e:325					return {GET_SUCCESS, s} -- empty sequence*/
    // SubProg Get pc: 223 op: RIGHT_BRACE_2 (85)
    RefDS(_s_8621);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_8621;
    _4741 = MAKE_SEQ(_1);
    // SubProg Get pc: 227 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRefDS(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    return _4741;
    // SubProg Get pc: 231 op: NOP1 (159)
LD: // addr: 232 pc: 231 sub: 8619 op: 159
    // SubProg Get pc: 232 op: STARTLINE (58)

    /** get.e:328				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
    // SubProg Get pc: 234 op: NOP2 (110)
    // SubProg Get pc: 236 op: NOPWHILE (158)
LE: // addr: 237 pc: 236 sub: 8619 op: 158
    // SubProg Get pc: 237 op: STARTLINE (58)

    /** get.e:329					while 1 do -- read zero or more comments and an element*/
    // SubProg Get pc: 239 op: NOP2 (110)
    // SubProg Get pc: 241 op: NOPWHILE (158)
LF: // addr: 242 pc: 241 sub: 8619 op: 158
    // SubProg Get pc: 242 op: STARTLINE (58)

    /** get.e:330						e = Get() -- read next element, using standard function*/
    // SubProg Get pc: 244 op: PROC (27)
    _0 = _e_8622;
    _e_8622 = _18Get();
    DeRef(_0);
    // SubProg Get pc: 247 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 249 op: STARTLINE (58)

    /** get.e:331						e1 = e[1]*/
    // SubProg Get pc: 251 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_e_8622);
    _e1_8623 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_8623))
    _e1_8623 = (object)DBL_PTR(_e1_8623)->dbl;
    // SubProg Get pc: 255 op: STARTLINE (58)

    /** get.e:332						if e1 = GET_SUCCESS then*/
    // SubProg Get pc: 257 op: EQUALS_IFW_I (121)
    if (_e1_8623 != 0)
    goto L10; // [257] 278
    // SubProg Get pc: 261 op: STARTLINE (58)

    /** get.e:333							s = append(s, e[2])*/
    // SubProg Get pc: 263 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_8622);
    _4745 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Get pc: 267 op: APPEND (35)
    Ref(_4745);
    Append(&_s_8621, _s_8621, _4745);
    _4745 = NOVALUE;
    // SubProg Get pc: 271 op: STARTLINE (58)

    /** get.e:334							exit  -- element read and added to result*/
    // SubProg Get pc: 273 op: EXIT (61)
    goto L11; // [273] 322
    // SubProg Get pc: 275 op: ELSE (23)
    goto LF; // [275] 242
    // SubProg Get pc: 277 op: NOP1 (159)
L10: // addr: 278 pc: 277 sub: 8619 op: 159
    // SubProg Get pc: 278 op: STARTLINE (58)

    /** get.e:335						elsif e1 != GET_IGNORE then*/
    // SubProg Get pc: 280 op: NOTEQ_IFW_I (122)
    if (_e1_8623 == -2)
    goto L12; // [280] 293
    // SubProg Get pc: 284 op: STARTLINE (58)

    /** get.e:336							return e*/
    // SubProg Get pc: 286 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e1_8623
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    return _e_8622;
    // SubProg Get pc: 290 op: ELSE (23)
    goto LF; // [290] 242
    // SubProg Get pc: 292 op: NOP1 (159)
L12: // addr: 293 pc: 292 sub: 8619 op: 159
    // SubProg Get pc: 293 op: STARTLINE (58)

    /** get.e:338						elsif ch='}' then*/
    // SubProg Get pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 297 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 125)
    goto LF; // [297] 242
    // SubProg Get pc: 301 op: STARTLINE (58)

    /** get.e:339							get_ch()*/
    // SubProg Get pc: 303 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 305 op: STARTLINE (58)

    /** get.e:340							return {GET_SUCCESS, s} -- empty sequence*/
    // SubProg Get pc: 307 op: RIGHT_BRACE_2 (85)
    RefDS(_s_8621);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_8621;
    _4749 = MAKE_SEQ(_1);
    // SubProg Get pc: 311 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRefDS(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    return _4749;
    // SubProg Get pc: 315 op: NOP1 (159)
    // SubProg Get pc: 316 op: NOP1 (159)
    // SubProg Get pc: 317 op: STARTLINE (58)

    /** get.e:342					end while*/
    // SubProg Get pc: 319 op: ENDWHILE (22)
    goto LF; // [319] 242
    // SubProg Get pc: 321 op: NOP1 (159)
L11: // addr: 322 pc: 321 sub: 8619 op: 159
    // SubProg Get pc: 322 op: STARTLINE (58)

    /** get.e:344					while 1 do -- now read zero or more post element comments*/
    // SubProg Get pc: 324 op: NOP2 (110)
    // SubProg Get pc: 326 op: NOPWHILE (158)
L13: // addr: 327 pc: 326 sub: 8619 op: 158
    // SubProg Get pc: 327 op: STARTLINE (58)

    /** get.e:345						skip_blanks()*/
    // SubProg Get pc: 329 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 331 op: NOP2 (110)
    // SubProg Get pc: 333 op: NOPWHILE (158)
L14: // addr: 334 pc: 333 sub: 8619 op: 158
    // SubProg Get pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 336 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at328_8665 = find_from(_18ch_8394, _18white_space_8410, 1);
    // SubProg Get pc: 341 op: WHILE (47)
    if (_skip_blanks_1__tmp_at328_8665 == 0)
    {
        goto L15; // [341] 358
    }
    else{
    }
    // SubProg Get pc: 344 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 346 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 348 op: STARTLINE (58)

    /** get.e:69		end while*/
    // SubProg Get pc: 350 op: ENDWHILE (22)
    goto L14; // [350] 334
    // SubProg Get pc: 352 op: NOP1 (159)
    // SubProg Get pc: 353 op: STARTLINE (58)

    /** get.e:70	end procedure*/
    // SubProg Get pc: 355 op: ELSE (23)
    goto L15; // [355] 358
    // SubProg Get pc: 357 op: NOP1 (159)
L15: // addr: 358 pc: 357 sub: 8619 op: 159
    // SubProg Get pc: 358 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 328

// block var skip_blanks_1__tmp_at328_8665
    // SubProg Get pc: 360 op: STARTLINE (58)

    /** get.e:346						if ch = '}' then*/
    // SubProg Get pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 364 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 125)
    goto L16; // [364] 385
    // SubProg Get pc: 368 op: STARTLINE (58)

    /** get.e:347							get_ch()*/
    // SubProg Get pc: 370 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 372 op: STARTLINE (58)

    /** get.e:348						return {GET_SUCCESS, s}*/
    // SubProg Get pc: 374 op: RIGHT_BRACE_2 (85)
    RefDS(_s_8621);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_8621;
    _4751 = MAKE_SEQ(_1);
    // SubProg Get pc: 378 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRefDS(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4749);
    _4749 = NOVALUE;
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    return _4751;
    // SubProg Get pc: 382 op: ELSE (23)
    goto L13; // [382] 327
    // SubProg Get pc: 384 op: NOP1 (159)
L16: // addr: 385 pc: 384 sub: 8619 op: 159
    // SubProg Get pc: 385 op: STARTLINE (58)

    /** get.e:349						elsif ch!='-' then*/
    // SubProg Get pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 389 op: NOTEQ_IFW_I (122)
    if (_18ch_8394 == 45)
    goto L17; // [389] 400
    // SubProg Get pc: 393 op: STARTLINE (58)

    /** get.e:350							exit*/
    // SubProg Get pc: 395 op: EXIT (61)
    goto L18; // [395] 434
    // SubProg Get pc: 397 op: ELSE (23)
    goto L13; // [397] 327
    // SubProg Get pc: 399 op: NOP1 (159)
L17: // addr: 400 pc: 399 sub: 8619 op: 159
    // SubProg Get pc: 400 op: STARTLINE (58)

    /** get.e:352							e = get_number() -- reads anything starting with '-'*/
    // SubProg Get pc: 402 op: PROC (27)
    _0 = _e_8622;
    _e_8622 = _18get_number();
    DeRef(_0);
    // SubProg Get pc: 405 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 407 op: STARTLINE (58)

    /** get.e:353							if e[1] != GET_IGNORE then  -- it wasn't a comment, this is illegal*/
    // SubProg Get pc: 409 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_8622);
    _4754 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get pc: 413 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _4754, -2)){
        _4754 = NOVALUE;
        goto L13; // [413] 327
    }
    _4754 = NOVALUE;
    // SubProg Get pc: 417 op: STARTLINE (58)

    /** get.e:354								return {GET_FAIL, 0}*/
    // SubProg Get pc: 419 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4756 = MAKE_SEQ(_1);
    // SubProg Get pc: 423 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRefDS(_e_8622);

// block var e1_8623
    DeRef(_4749);
    _4749 = NOVALUE;
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    DeRef(_4751);
    _4751 = NOVALUE;
    return _4756;
    // SubProg Get pc: 427 op: NOP1 (159)
    // SubProg Get pc: 428 op: NOP1 (159)
    // SubProg Get pc: 429 op: STARTLINE (58)

    /** get.e:358				end while*/
    // SubProg Get pc: 431 op: ENDWHILE (22)
    goto L13; // [431] 327
    // SubProg Get pc: 433 op: NOP1 (159)
L18: // addr: 434 pc: 433 sub: 8619 op: 159
    // SubProg Get pc: 434 op: STARTLINE (58)

    /** get.e:359					if ch != ',' then*/
    // SubProg Get pc: 436 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 438 op: NOTEQ_IFW_I (122)
    if (_18ch_8394 == 44)
    goto L19; // [438] 453
    // SubProg Get pc: 442 op: STARTLINE (58)

    /** get.e:360					return {GET_FAIL, 0}*/
    // SubProg Get pc: 444 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4758 = MAKE_SEQ(_1);
    // SubProg Get pc: 448 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4749);
    _4749 = NOVALUE;
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    DeRef(_4751);
    _4751 = NOVALUE;
    DeRef(_4756);
    _4756 = NOVALUE;
    return _4758;
    // SubProg Get pc: 452 op: NOP1 (159)
L19: // addr: 453 pc: 452 sub: 8619 op: 159
    // SubProg Get pc: 453 op: STARTLINE (58)

    /** get.e:362				get_ch() -- skip comma*/
    // SubProg Get pc: 455 op: PROC (27)
    _18get_ch();
    // SubProg Get pc: 457 op: STARTLINE (58)

    /** get.e:363				end while*/
    // SubProg Get pc: 459 op: ENDWHILE (22)
    goto LE; // [459] 237
    // SubProg Get pc: 461 op: NOP1 (159)
    // SubProg Get pc: 462 op: ELSE (23)
    goto L4; // [462] 49
    // SubProg Get pc: 464 op: NOP1 (159)
LA: // addr: 465 pc: 464 sub: 8619 op: 159
    // SubProg Get pc: 465 op: STARTLINE (58)

    /** get.e:365			elsif ch = '\"' then*/
    // SubProg Get pc: 467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 469 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 34)
    goto L1A; // [469] 485
    // SubProg Get pc: 473 op: STARTLINE (58)

    /** get.e:366				return get_string()*/
    // SubProg Get pc: 475 op: PROC (27)
    _4760 = _18get_string();
    // SubProg Get pc: 478 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4749);
    _4749 = NOVALUE;
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    DeRef(_4751);
    _4751 = NOVALUE;
    DeRef(_4758);
    _4758 = NOVALUE;
    DeRef(_4756);
    _4756 = NOVALUE;
    return _4760;
    // SubProg Get pc: 482 op: ELSE (23)
    goto L4; // [482] 49
    // SubProg Get pc: 484 op: NOP1 (159)
L1A: // addr: 485 pc: 484 sub: 8619 op: 159
    // SubProg Get pc: 485 op: STARTLINE (58)

    /** get.e:367			elsif ch = '`' then*/
    // SubProg Get pc: 487 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 489 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 96)
    goto L1B; // [489] 506
    // SubProg Get pc: 493 op: STARTLINE (58)

    /** get.e:368				return get_heredoc("`")*/
    // SubProg Get pc: 495 op: PROC (27)
    RefDS(_4762);
    _4763 = _18get_heredoc(_4762);
    // SubProg Get pc: 499 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4749);
    _4749 = NOVALUE;
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    DeRef(_4751);
    _4751 = NOVALUE;
    DeRef(_4758);
    _4758 = NOVALUE;
    DeRef(_4760);
    _4760 = NOVALUE;
    DeRef(_4756);
    _4756 = NOVALUE;
    return _4763;
    // SubProg Get pc: 503 op: ELSE (23)
    goto L4; // [503] 49
    // SubProg Get pc: 505 op: NOP1 (159)
L1B: // addr: 506 pc: 505 sub: 8619 op: 159
    // SubProg Get pc: 506 op: STARTLINE (58)

    /** get.e:369			elsif ch = '\'' then*/
    // SubProg Get pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 510 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 39)
    goto L1C; // [510] 526
    // SubProg Get pc: 514 op: STARTLINE (58)

    /** get.e:370				return get_qchar()*/
    // SubProg Get pc: 516 op: PROC (27)
    _4765 = _18get_qchar();
    // SubProg Get pc: 519 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4749);
    _4749 = NOVALUE;
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4763);
    _4763 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    DeRef(_4751);
    _4751 = NOVALUE;
    DeRef(_4758);
    _4758 = NOVALUE;
    DeRef(_4760);
    _4760 = NOVALUE;
    DeRef(_4756);
    _4756 = NOVALUE;
    return _4765;
    // SubProg Get pc: 523 op: ELSE (23)
    goto L4; // [523] 49
    // SubProg Get pc: 525 op: NOP1 (159)
L1C: // addr: 526 pc: 525 sub: 8619 op: 159
    // SubProg Get pc: 526 op: STARTLINE (58)

    /** get.e:372				return {GET_FAIL, 0}*/
    // SubProg Get pc: 528 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _4766 = MAKE_SEQ(_1);
    // SubProg Get pc: 532 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_8621
    DeRef(_s_8621);

// block var e_8622
    DeRef(_e_8622);

// block var e1_8623
    DeRef(_4749);
    _4749 = NOVALUE;
    DeRef(_4735);
    _4735 = NOVALUE;
    DeRef(_4741);
    _4741 = NOVALUE;
    DeRef(_4763);
    _4763 = NOVALUE;
    DeRef(_4730);
    _4730 = NOVALUE;
    DeRef(_4738);
    _4738 = NOVALUE;
    DeRef(_4765);
    _4765 = NOVALUE;
    DeRef(_4751);
    _4751 = NOVALUE;
    DeRef(_4758);
    _4758 = NOVALUE;
    DeRef(_4760);
    _4760 = NOVALUE;
    DeRef(_4756);
    _4756 = NOVALUE;
    return _4766;
    // SubProg Get pc: 536 op: NOP1 (159)
    // SubProg Get pc: 537 op: STARTLINE (58)

    /** get.e:376		end while*/
    // SubProg Get pc: 539 op: ENDWHILE (22)
    goto L4; // [539] 49
    // SubProg Get pc: 541 op: NOP1 (159)
    // SubProg Get pc: 542 op: BADRETURNF (43)
    ;
}


object _18Get2()
{
    object _skip_blanks_1__tmp_at464_8766 = NOVALUE;
    object _skip_blanks_1__tmp_at233_8733 = NOVALUE;
    object _s_8695 = NOVALUE;
    object _e_8696 = NOVALUE;
    object _e1_8697 = NOVALUE;
    object _offset_8698 = NOVALUE;
    object _4866 = NOVALUE; // 8825 4866
    object _4865 = NOVALUE; // 8824 4865
    object _4864 = NOVALUE; // 8823 4864
    object _4863 = NOVALUE; // 8822 4863
    object _4862 = NOVALUE; // 8821 4862
    object _4861 = NOVALUE; // 8819 4861
    object _4860 = NOVALUE; // 8818 4860
    object _4859 = NOVALUE; // 8817 4859
    object _4858 = NOVALUE; // 8816 4858
    object _4857 = NOVALUE; // 8815 4857
    object _4856 = NOVALUE; // 8814 4856
// skipping _4855  name type: 0
// skipping _4854  name type: 0
    object _4853 = NOVALUE; // 8810 4853
    object _4852 = NOVALUE; // 8809 4852
    object _4851 = NOVALUE; // 8808 4851
    object _4850 = NOVALUE; // 8807 4850
    object _4849 = NOVALUE; // 8806 4849
    object _4848 = NOVALUE; // 8805 4848
// skipping _4847  name type: 0
// skipping _4846  name type: 0
    object _4845 = NOVALUE; // 8801 4845
    object _4844 = NOVALUE; // 8800 4844
    object _4843 = NOVALUE; // 8799 4843
    object _4842 = NOVALUE; // 8798 4842
    object _4841 = NOVALUE; // 8797 4841
    object _4840 = NOVALUE; // 8796 4840
// skipping _4839  name type: 0
// skipping _4838  name type: 0
    object _4837 = NOVALUE; // 8792 4837
    object _4836 = NOVALUE; // 8791 4836
    object _4835 = NOVALUE; // 8790 4835
    object _4834 = NOVALUE; // 8789 4834
    object _4833 = NOVALUE; // 8788 4833
// skipping _4832  name type: 0
    object _4831 = NOVALUE; // 8785 4831
    object _4830 = NOVALUE; // 8784 4830
    object _4829 = NOVALUE; // 8783 4829
    object _4828 = NOVALUE; // 8782 4828
    object _4827 = NOVALUE; // 8781 4827
// skipping _4826  name type: 0
    object _4825 = NOVALUE; // 8779 4825
// skipping _4824  name type: 0
// skipping _4823  name type: 0
    object _4822 = NOVALUE; // 8773 4822
    object _4821 = NOVALUE; // 8772 4821
    object _4820 = NOVALUE; // 8771 4820
    object _4819 = NOVALUE; // 8770 4819
    object _4818 = NOVALUE; // 8769 4818
// skipping _4817  name type: 0
    object _4816 = NOVALUE; // 8763 4816
    object _4815 = NOVALUE; // 8762 4815
    object _4814 = NOVALUE; // 8761 4814
    object _4813 = NOVALUE; // 8760 4813
    object _4812 = NOVALUE; // 8759 4812
// skipping _4811  name type: 0
    object _4810 = NOVALUE; // 8756 4810
    object _4809 = NOVALUE; // 8755 4809
    object _4808 = NOVALUE; // 8754 4808
    object _4807 = NOVALUE; // 8753 4807
    object _4806 = NOVALUE; // 8752 4806
    object _4805 = NOVALUE; // 8751 4805
// skipping _4804  name type: 0
// skipping _4803  name type: 0
    object _4802 = NOVALUE; // 8747 4802
// skipping _4801  name type: 0
// skipping _4800  name type: 0
// skipping _4799  name type: 0
    object _4798 = NOVALUE; // 8740 4798
    object _4797 = NOVALUE; // 8739 4797
    object _4796 = NOVALUE; // 8738 4796
    object _4795 = NOVALUE; // 8737 4795
    object _4794 = NOVALUE; // 8736 4794
// skipping _4793  name type: 0
// skipping _4792  name type: 0
    object _4791 = NOVALUE; // 8729 4791
    object _4790 = NOVALUE; // 8728 4790
    object _4789 = NOVALUE; // 8727 4789
    object _4788 = NOVALUE; // 8726 4788
    object _4787 = NOVALUE; // 8725 4787
// skipping _4786  name type: 0
    object _4785 = NOVALUE; // 8722 4785
    object _4784 = NOVALUE; // 8721 4784
    object _4783 = NOVALUE; // 8720 4783
    object _4782 = NOVALUE; // 8719 4782
    object _4781 = NOVALUE; // 8718 4781
    object _4780 = NOVALUE; // 8717 4780
// skipping _4779  name type: 0
    object _4778 = NOVALUE; // 8715 4778
// skipping _4777  name type: 0
    object _4776 = NOVALUE; // 8712 4776
// skipping _4775  name type: 0
    object _4774 = NOVALUE; // 8708 4774
    object _4773 = NOVALUE; // 8707 4773
    object _4772 = NOVALUE; // 8706 4772
    object _4771 = NOVALUE; // 8705 4771
    object _4770 = NOVALUE; // 8704 4770
// skipping _4769  name type: 0
    object _4768 = NOVALUE; // 8701 4768
// skipping _4767  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Get2 pc: 1 op: STARTLINE (58)

    /** get.e:392		offset = string_next-1*/
    // SubProg Get2 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 5 op: MINUS_I (116)
    _offset_8698 = _18string_next_8393 - 1;
    // SubProg Get2 pc: 9 op: STARTLINE (58)

    /** get.e:393		get_ch()*/
    // SubProg Get2 pc: 11 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 13 op: STARTLINE (58)

    /** get.e:394		while find(ch, white_space) do*/
    // SubProg Get2 pc: 15 op: NOP2 (110)
    // SubProg Get2 pc: 17 op: NOPWHILE (158)
L1: // addr: 18 pc: 17 sub: 8693 op: 158
    // SubProg Get2 pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 20 op: FIND_FROM (176)
    _4768 = find_from(_18ch_8394, _18white_space_8410, 1);
    // SubProg Get2 pc: 25 op: WHILE (47)
    if (_4768 == 0)
    {
        _4768 = NOVALUE;
        goto L2; // [25] 37
    }
    else{
        _4768 = NOVALUE;
    }
    // SubProg Get2 pc: 28 op: STARTLINE (58)

    /** get.e:395			get_ch()*/
    // SubProg Get2 pc: 30 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 32 op: STARTLINE (58)

    /** get.e:396		end while*/
    // SubProg Get2 pc: 34 op: ENDWHILE (22)
    goto L1; // [34] 18
    // SubProg Get2 pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 8693 op: 159
    // SubProg Get2 pc: 37 op: STARTLINE (58)

    /** get.e:398		if ch = -1 then -- string is made of whitespace only*/
    // SubProg Get2 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 41 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != -1)
    goto L3; // [41] 75
    // SubProg Get2 pc: 45 op: STARTLINE (58)

    /** get.e:399			return {GET_EOF, 0, string_next-1-offset ,string_next-1}*/
    // SubProg Get2 pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 49 op: MINUS (10)
    _4770 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4770 +(uintptr_t) HIGH_BITS) >= 0){
        _4770 = NewDouble((eudouble)_4770);
    }
    // SubProg Get2 pc: 53 op: MINUS (10)
    if (IS_ATOM_INT(_4770)) {
        _4771 = _4770 - _offset_8698;
        if ((object)((uintptr_t)_4771 +(uintptr_t) HIGH_BITS) >= 0){
            _4771 = NewDouble((eudouble)_4771);
        }
    }
    else {
        _4771 = NewDouble(DBL_PTR(_4770)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4770);
    _4770 = NOVALUE;
    // SubProg Get2 pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 59 op: MINUS (10)
    _4772 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4772 +(uintptr_t) HIGH_BITS) >= 0){
        _4772 = NewDouble((eudouble)_4772);
    }
    // SubProg Get2 pc: 63 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _4771;
    ((intptr_t*)_2)[4] = _4772;
    _4773 = MAKE_SEQ(_1);
    _4772 = NOVALUE;
    _4771 = NOVALUE;
    // SubProg Get2 pc: 70 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRef(_e_8696);

// block var e1_8697

// block var offset_8698
    return _4773;
    // SubProg Get2 pc: 74 op: NOP1 (159)
L3: // addr: 75 pc: 74 sub: 8693 op: 159
    // SubProg Get2 pc: 75 op: STARTLINE (58)

    /** get.e:402		leading_whitespace = string_next-2-offset -- index of the last whitespace: string_next points past the first non whitespace*/
    // SubProg Get2 pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 79 op: MINUS (10)
    _4774 = _18string_next_8393 - 2;
    if ((object)((uintptr_t)_4774 +(uintptr_t) HIGH_BITS) >= 0){
        _4774 = NewDouble((eudouble)_4774);
    }
    // SubProg Get2 pc: 83 op: MINUS (10)
    if (IS_ATOM_INT(_4774)) {
        _18leading_whitespace_8692 = _4774 - _offset_8698;
    }
    else {
        _18leading_whitespace_8692 = NewDouble(DBL_PTR(_4774)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4774);
    _4774 = NOVALUE;
    // SubProg Get2 pc: 87 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_18leading_whitespace_8692)) {
        _1 = (object)(DBL_PTR(_18leading_whitespace_8692)->dbl);
        DeRefDS(_18leading_whitespace_8692);
        _18leading_whitespace_8692 = _1;
    }
    // SubProg Get2 pc: 89 op: STARTLINE (58)

    /** get.e:404		while 1 do*/
    // SubProg Get2 pc: 91 op: NOP2 (110)
    // SubProg Get2 pc: 93 op: NOPWHILE (158)
L4: // addr: 94 pc: 93 sub: 8693 op: 158
    // SubProg Get2 pc: 94 op: STARTLINE (58)

    /** get.e:405			if find(ch, START_NUMERIC) then*/
    // SubProg Get2 pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 100 op: FIND_FROM (176)
    _4776 = find_from(_18ch_8394, _18START_NUMERIC_8377, 1);
    // SubProg Get2 pc: 105 op: IF (20)
    if (_4776 == 0)
    {
        _4776 = NOVALUE;
        goto L5; // [105] 213
    }
    else{
        _4776 = NOVALUE;
    }
    // SubProg Get2 pc: 108 op: STARTLINE (58)

    /** get.e:406				e = get_number()*/
    // SubProg Get2 pc: 110 op: PROC (27)
    _0 = _e_8696;
    _e_8696 = _18get_number();
    DeRef(_0);
    // SubProg Get2 pc: 113 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 115 op: STARTLINE (58)

    /** get.e:407				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    // SubProg Get2 pc: 117 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_8696);
    _4778 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get2 pc: 121 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _4778, -2)){
        _4778 = NOVALUE;
        goto L6; // [121] 162
    }
    _4778 = NOVALUE;
    // SubProg Get2 pc: 125 op: STARTLINE (58)

    /** get.e:408					return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 129 op: MINUS (10)
    _4780 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4780 +(uintptr_t) HIGH_BITS) >= 0){
        _4780 = NewDouble((eudouble)_4780);
    }
    // SubProg Get2 pc: 133 op: MINUS (10)
    if (IS_ATOM_INT(_4780)) {
        _4781 = _4780 - _offset_8698;
        if ((object)((uintptr_t)_4781 +(uintptr_t) HIGH_BITS) >= 0){
            _4781 = NewDouble((eudouble)_4781);
        }
    }
    else {
        _4781 = NewDouble(DBL_PTR(_4780)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4780);
    _4780 = NOVALUE;
    // SubProg Get2 pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 139 op: NOTEQ (4)
    _4782 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 143 op: MINUS (10)
    if (IS_ATOM_INT(_4781)) {
        _4783 = _4781 - _4782;
        if ((object)((uintptr_t)_4783 +(uintptr_t) HIGH_BITS) >= 0){
            _4783 = NewDouble((eudouble)_4783);
        }
    }
    else {
        _4783 = NewDouble(DBL_PTR(_4781)->dbl - (eudouble)_4782);
    }
    DeRef(_4781);
    _4781 = NOVALUE;
    _4782 = NOVALUE;
    // SubProg Get2 pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 149 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4783;
    ((intptr_t *)_2)[2] = _18leading_whitespace_8692;
    _4784 = MAKE_SEQ(_1);
    _4783 = NOVALUE;
    // SubProg Get2 pc: 153 op: CONCAT (15)
    Concat((object_ptr)&_4785, _e_8696, _4784);
    DeRefDS(_4784);
    _4784 = NOVALUE;
    // SubProg Get2 pc: 157 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRefDS(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4773);
    _4773 = NOVALUE;
    return _4785;
    // SubProg Get2 pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 8693 op: 159
    // SubProg Get2 pc: 162 op: STARTLINE (58)

    /** get.e:410				get_ch()*/
    // SubProg Get2 pc: 164 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 166 op: STARTLINE (58)

    /** get.e:411				if ch=-1 then*/
    // SubProg Get2 pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 170 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != -1)
    goto L4; // [170] 94
    // SubProg Get2 pc: 174 op: STARTLINE (58)

    /** get.e:412					return {GET_NOTHING, 0, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 178 op: MINUS (10)
    _4787 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4787 +(uintptr_t) HIGH_BITS) >= 0){
        _4787 = NewDouble((eudouble)_4787);
    }
    // SubProg Get2 pc: 182 op: MINUS (10)
    if (IS_ATOM_INT(_4787)) {
        _4788 = _4787 - _offset_8698;
        if ((object)((uintptr_t)_4788 +(uintptr_t) HIGH_BITS) >= 0){
            _4788 = NewDouble((eudouble)_4788);
        }
    }
    else {
        _4788 = NewDouble(DBL_PTR(_4787)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4787);
    _4787 = NOVALUE;
    // SubProg Get2 pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 188 op: NOTEQ (4)
    _4789 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 192 op: MINUS (10)
    if (IS_ATOM_INT(_4788)) {
        _4790 = _4788 - _4789;
        if ((object)((uintptr_t)_4790 +(uintptr_t) HIGH_BITS) >= 0){
            _4790 = NewDouble((eudouble)_4790);
        }
    }
    else {
        _4790 = NewDouble(DBL_PTR(_4788)->dbl - (eudouble)_4789);
    }
    DeRef(_4788);
    _4788 = NOVALUE;
    _4789 = NOVALUE;
    // SubProg Get2 pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 198 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _4790;
    ((intptr_t*)_2)[4] = _18leading_whitespace_8692;
    _4791 = MAKE_SEQ(_1);
    _4790 = NOVALUE;
    // SubProg Get2 pc: 205 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRef(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    return _4791;
    // SubProg Get2 pc: 209 op: NOP1 (159)
    // SubProg Get2 pc: 210 op: ELSE (23)
    goto L4; // [210] 94
    // SubProg Get2 pc: 212 op: NOP1 (159)
L5: // addr: 213 pc: 212 sub: 8693 op: 159
    // SubProg Get2 pc: 213 op: STARTLINE (58)

    /** get.e:415			elsif ch = '{' then*/
    // SubProg Get2 pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 217 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 123)
    goto L7; // [217] 676
    // SubProg Get2 pc: 221 op: STARTLINE (58)

    /** get.e:417				s = {}*/
    // SubProg Get2 pc: 223 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_s_8695);
    _s_8695 = _5;
    // SubProg Get2 pc: 226 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 228 op: STARTLINE (58)

    /** get.e:418				get_ch()*/
    // SubProg Get2 pc: 230 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 232 op: STARTLINE (58)

    /** get.e:419				skip_blanks()*/
    // SubProg Get2 pc: 234 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get2 pc: 236 op: NOP2 (110)
    // SubProg Get2 pc: 238 op: NOPWHILE (158)
L8: // addr: 239 pc: 238 sub: 8693 op: 158
    // SubProg Get2 pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 241 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at233_8733 = find_from(_18ch_8394, _18white_space_8410, 1);
    // SubProg Get2 pc: 246 op: WHILE (47)
    if (_skip_blanks_1__tmp_at233_8733 == 0)
    {
        goto L9; // [246] 263
    }
    else{
    }
    // SubProg Get2 pc: 249 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get2 pc: 251 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 253 op: STARTLINE (58)

    /** get.e:69		end while*/
    // SubProg Get2 pc: 255 op: ENDWHILE (22)
    goto L8; // [255] 239
    // SubProg Get2 pc: 257 op: NOP1 (159)
    // SubProg Get2 pc: 258 op: STARTLINE (58)

    /** get.e:70	end procedure*/
    // SubProg Get2 pc: 260 op: ELSE (23)
    goto L9; // [260] 263
    // SubProg Get2 pc: 262 op: NOP1 (159)
L9: // addr: 263 pc: 262 sub: 8693 op: 159
    // SubProg Get2 pc: 263 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get2 @ 233

// block var skip_blanks_1__tmp_at233_8733
    // SubProg Get2 pc: 265 op: STARTLINE (58)

    /** get.e:420				if ch = '}' then -- empty sequence*/
    // SubProg Get2 pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 269 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 125)
    goto LA; // [269] 313
    // SubProg Get2 pc: 273 op: STARTLINE (58)

    /** get.e:421					get_ch()*/
    // SubProg Get2 pc: 275 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 277 op: STARTLINE (58)

    /** get.e:422					return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 281 op: MINUS (10)
    _4794 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4794 +(uintptr_t) HIGH_BITS) >= 0){
        _4794 = NewDouble((eudouble)_4794);
    }
    // SubProg Get2 pc: 285 op: MINUS (10)
    if (IS_ATOM_INT(_4794)) {
        _4795 = _4794 - _offset_8698;
        if ((object)((uintptr_t)_4795 +(uintptr_t) HIGH_BITS) >= 0){
            _4795 = NewDouble((eudouble)_4795);
        }
    }
    else {
        _4795 = NewDouble(DBL_PTR(_4794)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4794);
    _4794 = NOVALUE;
    // SubProg Get2 pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 291 op: NOTEQ (4)
    _4796 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 295 op: MINUS (10)
    if (IS_ATOM_INT(_4795)) {
        _4797 = _4795 - _4796;
        if ((object)((uintptr_t)_4797 +(uintptr_t) HIGH_BITS) >= 0){
            _4797 = NewDouble((eudouble)_4797);
        }
    }
    else {
        _4797 = NewDouble(DBL_PTR(_4795)->dbl - (eudouble)_4796);
    }
    DeRef(_4795);
    _4795 = NOVALUE;
    _4796 = NOVALUE;
    // SubProg Get2 pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 301 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_8695);
    ((intptr_t*)_2)[2] = _s_8695;
    ((intptr_t*)_2)[3] = _4797;
    ((intptr_t*)_2)[4] = _18leading_whitespace_8692;
    _4798 = MAKE_SEQ(_1);
    _4797 = NOVALUE;
    // SubProg Get2 pc: 308 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRefDS(_s_8695);

// block var e_8696
    DeRef(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    return _4798;
    // SubProg Get2 pc: 312 op: NOP1 (159)
LA: // addr: 313 pc: 312 sub: 8693 op: 159
    // SubProg Get2 pc: 313 op: STARTLINE (58)

    /** get.e:425				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
    // SubProg Get2 pc: 315 op: NOP2 (110)
    // SubProg Get2 pc: 317 op: NOPWHILE (158)
LB: // addr: 318 pc: 317 sub: 8693 op: 158
    // SubProg Get2 pc: 318 op: STARTLINE (58)

    /** get.e:426					while 1 do -- read zero or more comments and an element*/
    // SubProg Get2 pc: 320 op: NOP2 (110)
    // SubProg Get2 pc: 322 op: NOPWHILE (158)
LC: // addr: 323 pc: 322 sub: 8693 op: 158
    // SubProg Get2 pc: 323 op: STARTLINE (58)

    /** get.e:427						e = Get() -- read next element, using standard function*/
    // SubProg Get2 pc: 325 op: PROC (27)
    _0 = _e_8696;
    _e_8696 = _18Get();
    DeRef(_0);
    // SubProg Get2 pc: 328 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 330 op: STARTLINE (58)

    /** get.e:428						e1 = e[1]*/
    // SubProg Get2 pc: 332 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_e_8696);
    _e1_8697 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_8697))
    _e1_8697 = (object)DBL_PTR(_e1_8697)->dbl;
    // SubProg Get2 pc: 336 op: STARTLINE (58)

    /** get.e:429						if e1 = GET_SUCCESS then*/
    // SubProg Get2 pc: 338 op: EQUALS_IFW_I (121)
    if (_e1_8697 != 0)
    goto LD; // [338] 359
    // SubProg Get2 pc: 342 op: STARTLINE (58)

    /** get.e:430							s = append(s, e[2])*/
    // SubProg Get2 pc: 344 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_8696);
    _4802 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Get2 pc: 348 op: APPEND (35)
    Ref(_4802);
    Append(&_s_8695, _s_8695, _4802);
    _4802 = NOVALUE;
    // SubProg Get2 pc: 352 op: STARTLINE (58)

    /** get.e:431							exit  -- element read and added to result*/
    // SubProg Get2 pc: 354 op: EXIT (61)
    goto LE; // [354] 458
    // SubProg Get2 pc: 356 op: ELSE (23)
    goto LC; // [356] 323
    // SubProg Get2 pc: 358 op: NOP1 (159)
LD: // addr: 359 pc: 358 sub: 8693 op: 159
    // SubProg Get2 pc: 359 op: STARTLINE (58)

    /** get.e:432						elsif e1 != GET_IGNORE then*/
    // SubProg Get2 pc: 361 op: NOTEQ_IFW_I (122)
    if (_e1_8697 == -2)
    goto LF; // [361] 404
    // SubProg Get2 pc: 365 op: STARTLINE (58)

    /** get.e:433							return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 369 op: MINUS (10)
    _4805 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4805 +(uintptr_t) HIGH_BITS) >= 0){
        _4805 = NewDouble((eudouble)_4805);
    }
    // SubProg Get2 pc: 373 op: MINUS (10)
    if (IS_ATOM_INT(_4805)) {
        _4806 = _4805 - _offset_8698;
        if ((object)((uintptr_t)_4806 +(uintptr_t) HIGH_BITS) >= 0){
            _4806 = NewDouble((eudouble)_4806);
        }
    }
    else {
        _4806 = NewDouble(DBL_PTR(_4805)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4805);
    _4805 = NOVALUE;
    // SubProg Get2 pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 379 op: NOTEQ (4)
    _4807 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 383 op: MINUS (10)
    if (IS_ATOM_INT(_4806)) {
        _4808 = _4806 - _4807;
        if ((object)((uintptr_t)_4808 +(uintptr_t) HIGH_BITS) >= 0){
            _4808 = NewDouble((eudouble)_4808);
        }
    }
    else {
        _4808 = NewDouble(DBL_PTR(_4806)->dbl - (eudouble)_4807);
    }
    DeRef(_4806);
    _4806 = NOVALUE;
    _4807 = NOVALUE;
    // SubProg Get2 pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 389 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4808;
    ((intptr_t *)_2)[2] = _18leading_whitespace_8692;
    _4809 = MAKE_SEQ(_1);
    _4808 = NOVALUE;
    // SubProg Get2 pc: 393 op: CONCAT (15)
    Concat((object_ptr)&_4810, _e_8696, _4809);
    DeRefDS(_4809);
    _4809 = NOVALUE;
    // SubProg Get2 pc: 397 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRefDS(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4810;
    // SubProg Get2 pc: 401 op: ELSE (23)
    goto LC; // [401] 323
    // SubProg Get2 pc: 403 op: NOP1 (159)
LF: // addr: 404 pc: 403 sub: 8693 op: 159
    // SubProg Get2 pc: 404 op: STARTLINE (58)

    /** get.e:435						elsif ch='}' then*/
    // SubProg Get2 pc: 406 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 408 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 125)
    goto LC; // [408] 323
    // SubProg Get2 pc: 412 op: STARTLINE (58)

    /** get.e:436							get_ch()*/
    // SubProg Get2 pc: 414 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 416 op: STARTLINE (58)

    /** get.e:437							return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1),leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 420 op: MINUS (10)
    _4812 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4812 +(uintptr_t) HIGH_BITS) >= 0){
        _4812 = NewDouble((eudouble)_4812);
    }
    // SubProg Get2 pc: 424 op: MINUS (10)
    if (IS_ATOM_INT(_4812)) {
        _4813 = _4812 - _offset_8698;
        if ((object)((uintptr_t)_4813 +(uintptr_t) HIGH_BITS) >= 0){
            _4813 = NewDouble((eudouble)_4813);
        }
    }
    else {
        _4813 = NewDouble(DBL_PTR(_4812)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4812);
    _4812 = NOVALUE;
    // SubProg Get2 pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 430 op: NOTEQ (4)
    _4814 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 434 op: MINUS (10)
    if (IS_ATOM_INT(_4813)) {
        _4815 = _4813 - _4814;
        if ((object)((uintptr_t)_4815 +(uintptr_t) HIGH_BITS) >= 0){
            _4815 = NewDouble((eudouble)_4815);
        }
    }
    else {
        _4815 = NewDouble(DBL_PTR(_4813)->dbl - (eudouble)_4814);
    }
    DeRef(_4813);
    _4813 = NOVALUE;
    _4814 = NOVALUE;
    // SubProg Get2 pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 440 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_8695);
    ((intptr_t*)_2)[2] = _s_8695;
    ((intptr_t*)_2)[3] = _4815;
    ((intptr_t*)_2)[4] = _18leading_whitespace_8692;
    _4816 = MAKE_SEQ(_1);
    _4815 = NOVALUE;
    // SubProg Get2 pc: 447 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRefDS(_s_8695);

// block var e_8696
    DeRef(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4816;
    // SubProg Get2 pc: 451 op: NOP1 (159)
    // SubProg Get2 pc: 452 op: NOP1 (159)
    // SubProg Get2 pc: 453 op: STARTLINE (58)

    /** get.e:439					end while*/
    // SubProg Get2 pc: 455 op: ENDWHILE (22)
    goto LC; // [455] 323
    // SubProg Get2 pc: 457 op: NOP1 (159)
LE: // addr: 458 pc: 457 sub: 8693 op: 159
    // SubProg Get2 pc: 458 op: STARTLINE (58)

    /** get.e:441					while 1 do -- now read zero or more post element comments*/
    // SubProg Get2 pc: 460 op: NOP2 (110)
    // SubProg Get2 pc: 462 op: NOPWHILE (158)
L10: // addr: 463 pc: 462 sub: 8693 op: 158
    // SubProg Get2 pc: 463 op: STARTLINE (58)

    /** get.e:442						skip_blanks()*/
    // SubProg Get2 pc: 465 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get2 pc: 467 op: NOP2 (110)
    // SubProg Get2 pc: 469 op: NOPWHILE (158)
L11: // addr: 470 pc: 469 sub: 8693 op: 158
    // SubProg Get2 pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 472 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at464_8766 = find_from(_18ch_8394, _18white_space_8410, 1);
    // SubProg Get2 pc: 477 op: WHILE (47)
    if (_skip_blanks_1__tmp_at464_8766 == 0)
    {
        goto L12; // [477] 494
    }
    else{
    }
    // SubProg Get2 pc: 480 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get2 pc: 482 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 484 op: STARTLINE (58)

    /** get.e:69		end while*/
    // SubProg Get2 pc: 486 op: ENDWHILE (22)
    goto L11; // [486] 470
    // SubProg Get2 pc: 488 op: NOP1 (159)
    // SubProg Get2 pc: 489 op: STARTLINE (58)

    /** get.e:70	end procedure*/
    // SubProg Get2 pc: 491 op: ELSE (23)
    goto L12; // [491] 494
    // SubProg Get2 pc: 493 op: NOP1 (159)
L12: // addr: 494 pc: 493 sub: 8693 op: 159
    // SubProg Get2 pc: 494 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get2 @ 464

// block var skip_blanks_1__tmp_at464_8766
    // SubProg Get2 pc: 496 op: STARTLINE (58)

    /** get.e:443						if ch = '}' then*/
    // SubProg Get2 pc: 498 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 500 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 125)
    goto L13; // [500] 546
    // SubProg Get2 pc: 504 op: STARTLINE (58)

    /** get.e:444							get_ch()*/
    // SubProg Get2 pc: 506 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 508 op: STARTLINE (58)

    /** get.e:445						return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 512 op: MINUS (10)
    _4818 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4818 +(uintptr_t) HIGH_BITS) >= 0){
        _4818 = NewDouble((eudouble)_4818);
    }
    // SubProg Get2 pc: 516 op: MINUS (10)
    if (IS_ATOM_INT(_4818)) {
        _4819 = _4818 - _offset_8698;
        if ((object)((uintptr_t)_4819 +(uintptr_t) HIGH_BITS) >= 0){
            _4819 = NewDouble((eudouble)_4819);
        }
    }
    else {
        _4819 = NewDouble(DBL_PTR(_4818)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4818);
    _4818 = NOVALUE;
    // SubProg Get2 pc: 520 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 522 op: NOTEQ (4)
    _4820 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 526 op: MINUS (10)
    if (IS_ATOM_INT(_4819)) {
        _4821 = _4819 - _4820;
        if ((object)((uintptr_t)_4821 +(uintptr_t) HIGH_BITS) >= 0){
            _4821 = NewDouble((eudouble)_4821);
        }
    }
    else {
        _4821 = NewDouble(DBL_PTR(_4819)->dbl - (eudouble)_4820);
    }
    DeRef(_4819);
    _4819 = NOVALUE;
    _4820 = NOVALUE;
    // SubProg Get2 pc: 530 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 532 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_8695);
    ((intptr_t*)_2)[2] = _s_8695;
    ((intptr_t*)_2)[3] = _4821;
    ((intptr_t*)_2)[4] = _18leading_whitespace_8692;
    _4822 = MAKE_SEQ(_1);
    _4821 = NOVALUE;
    // SubProg Get2 pc: 539 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRefDS(_s_8695);

// block var e_8696
    DeRef(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4816);
    _4816 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4822;
    // SubProg Get2 pc: 543 op: ELSE (23)
    goto L10; // [543] 463
    // SubProg Get2 pc: 545 op: NOP1 (159)
L13: // addr: 546 pc: 545 sub: 8693 op: 159
    // SubProg Get2 pc: 546 op: STARTLINE (58)

    /** get.e:446						elsif ch!='-' then*/
    // SubProg Get2 pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 550 op: NOTEQ_IFW_I (122)
    if (_18ch_8394 == 45)
    goto L14; // [550] 561
    // SubProg Get2 pc: 554 op: STARTLINE (58)

    /** get.e:447							exit*/
    // SubProg Get2 pc: 556 op: EXIT (61)
    goto L15; // [556] 620
    // SubProg Get2 pc: 558 op: ELSE (23)
    goto L10; // [558] 463
    // SubProg Get2 pc: 560 op: NOP1 (159)
L14: // addr: 561 pc: 560 sub: 8693 op: 159
    // SubProg Get2 pc: 561 op: STARTLINE (58)

    /** get.e:449							e = get_number() -- reads anything starting with '-'*/
    // SubProg Get2 pc: 563 op: PROC (27)
    _0 = _e_8696;
    _e_8696 = _18get_number();
    DeRef(_0);
    // SubProg Get2 pc: 566 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 568 op: STARTLINE (58)

    /** get.e:450							if e[1] != GET_IGNORE then  -- it was not a comment, this is illegal*/
    // SubProg Get2 pc: 570 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_8696);
    _4825 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get2 pc: 574 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _4825, -2)){
        _4825 = NOVALUE;
        goto L10; // [574] 463
    }
    _4825 = NOVALUE;
    // SubProg Get2 pc: 578 op: STARTLINE (58)

    /** get.e:451								return {GET_FAIL, 0, string_next-1-offset-(ch!=-1),leading_whitespace}*/
    // SubProg Get2 pc: 580 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 582 op: MINUS (10)
    _4827 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4827 +(uintptr_t) HIGH_BITS) >= 0){
        _4827 = NewDouble((eudouble)_4827);
    }
    // SubProg Get2 pc: 586 op: MINUS (10)
    if (IS_ATOM_INT(_4827)) {
        _4828 = _4827 - _offset_8698;
        if ((object)((uintptr_t)_4828 +(uintptr_t) HIGH_BITS) >= 0){
            _4828 = NewDouble((eudouble)_4828);
        }
    }
    else {
        _4828 = NewDouble(DBL_PTR(_4827)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4827);
    _4827 = NOVALUE;
    // SubProg Get2 pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 592 op: NOTEQ (4)
    _4829 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 596 op: MINUS (10)
    if (IS_ATOM_INT(_4828)) {
        _4830 = _4828 - _4829;
        if ((object)((uintptr_t)_4830 +(uintptr_t) HIGH_BITS) >= 0){
            _4830 = NewDouble((eudouble)_4830);
        }
    }
    else {
        _4830 = NewDouble(DBL_PTR(_4828)->dbl - (eudouble)_4829);
    }
    DeRef(_4828);
    _4828 = NOVALUE;
    _4829 = NOVALUE;
    // SubProg Get2 pc: 600 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 602 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _4830;
    ((intptr_t*)_2)[4] = _18leading_whitespace_8692;
    _4831 = MAKE_SEQ(_1);
    _4830 = NOVALUE;
    // SubProg Get2 pc: 609 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRefDS(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4822);
    _4822 = NOVALUE;
    DeRef(_4816);
    _4816 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4831;
    // SubProg Get2 pc: 613 op: NOP1 (159)
    // SubProg Get2 pc: 614 op: NOP1 (159)
    // SubProg Get2 pc: 615 op: STARTLINE (58)

    /** get.e:455				end while*/
    // SubProg Get2 pc: 617 op: ENDWHILE (22)
    goto L10; // [617] 463
    // SubProg Get2 pc: 619 op: NOP1 (159)
L15: // addr: 620 pc: 619 sub: 8693 op: 159
    // SubProg Get2 pc: 620 op: STARTLINE (58)

    /** get.e:456					if ch != ',' then*/
    // SubProg Get2 pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 624 op: NOTEQ_IFW_I (122)
    if (_18ch_8394 == 44)
    goto L16; // [624] 664
    // SubProg Get2 pc: 628 op: STARTLINE (58)

    /** get.e:457					return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 630 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 632 op: MINUS (10)
    _4833 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4833 +(uintptr_t) HIGH_BITS) >= 0){
        _4833 = NewDouble((eudouble)_4833);
    }
    // SubProg Get2 pc: 636 op: MINUS (10)
    if (IS_ATOM_INT(_4833)) {
        _4834 = _4833 - _offset_8698;
        if ((object)((uintptr_t)_4834 +(uintptr_t) HIGH_BITS) >= 0){
            _4834 = NewDouble((eudouble)_4834);
        }
    }
    else {
        _4834 = NewDouble(DBL_PTR(_4833)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4833);
    _4833 = NOVALUE;
    // SubProg Get2 pc: 640 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 642 op: NOTEQ (4)
    _4835 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 646 op: MINUS (10)
    if (IS_ATOM_INT(_4834)) {
        _4836 = _4834 - _4835;
        if ((object)((uintptr_t)_4836 +(uintptr_t) HIGH_BITS) >= 0){
            _4836 = NewDouble((eudouble)_4836);
        }
    }
    else {
        _4836 = NewDouble(DBL_PTR(_4834)->dbl - (eudouble)_4835);
    }
    DeRef(_4834);
    _4834 = NOVALUE;
    _4835 = NOVALUE;
    // SubProg Get2 pc: 650 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 652 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _4836;
    ((intptr_t*)_2)[4] = _18leading_whitespace_8692;
    _4837 = MAKE_SEQ(_1);
    _4836 = NOVALUE;
    // SubProg Get2 pc: 659 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRef(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4822);
    _4822 = NOVALUE;
    DeRef(_4816);
    _4816 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4831);
    _4831 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4837;
    // SubProg Get2 pc: 663 op: NOP1 (159)
L16: // addr: 664 pc: 663 sub: 8693 op: 159
    // SubProg Get2 pc: 664 op: STARTLINE (58)

    /** get.e:459				get_ch() -- skip comma*/
    // SubProg Get2 pc: 666 op: PROC (27)
    _18get_ch();
    // SubProg Get2 pc: 668 op: STARTLINE (58)

    /** get.e:460				end while*/
    // SubProg Get2 pc: 670 op: ENDWHILE (22)
    goto LB; // [670] 318
    // SubProg Get2 pc: 672 op: NOP1 (159)
    // SubProg Get2 pc: 673 op: ELSE (23)
    goto L4; // [673] 94
    // SubProg Get2 pc: 675 op: NOP1 (159)
L7: // addr: 676 pc: 675 sub: 8693 op: 159
    // SubProg Get2 pc: 676 op: STARTLINE (58)

    /** get.e:462			elsif ch = '\"' then*/
    // SubProg Get2 pc: 678 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 680 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 34)
    goto L17; // [680] 730
    // SubProg Get2 pc: 684 op: STARTLINE (58)

    /** get.e:463				e = get_string()*/
    // SubProg Get2 pc: 686 op: PROC (27)
    _0 = _e_8696;
    _e_8696 = _18get_string();
    DeRef(_0);
    // SubProg Get2 pc: 689 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 691 op: STARTLINE (58)

    /** get.e:464				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 695 op: MINUS (10)
    _4840 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4840 +(uintptr_t) HIGH_BITS) >= 0){
        _4840 = NewDouble((eudouble)_4840);
    }
    // SubProg Get2 pc: 699 op: MINUS (10)
    if (IS_ATOM_INT(_4840)) {
        _4841 = _4840 - _offset_8698;
        if ((object)((uintptr_t)_4841 +(uintptr_t) HIGH_BITS) >= 0){
            _4841 = NewDouble((eudouble)_4841);
        }
    }
    else {
        _4841 = NewDouble(DBL_PTR(_4840)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4840);
    _4840 = NOVALUE;
    // SubProg Get2 pc: 703 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 705 op: NOTEQ (4)
    _4842 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 709 op: MINUS (10)
    if (IS_ATOM_INT(_4841)) {
        _4843 = _4841 - _4842;
        if ((object)((uintptr_t)_4843 +(uintptr_t) HIGH_BITS) >= 0){
            _4843 = NewDouble((eudouble)_4843);
        }
    }
    else {
        _4843 = NewDouble(DBL_PTR(_4841)->dbl - (eudouble)_4842);
    }
    DeRef(_4841);
    _4841 = NOVALUE;
    _4842 = NOVALUE;
    // SubProg Get2 pc: 713 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 715 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4843;
    ((intptr_t *)_2)[2] = _18leading_whitespace_8692;
    _4844 = MAKE_SEQ(_1);
    _4843 = NOVALUE;
    // SubProg Get2 pc: 719 op: CONCAT (15)
    Concat((object_ptr)&_4845, _e_8696, _4844);
    DeRefDS(_4844);
    _4844 = NOVALUE;
    // SubProg Get2 pc: 723 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRefDS(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4837);
    _4837 = NOVALUE;
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4822);
    _4822 = NOVALUE;
    DeRef(_4816);
    _4816 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4831);
    _4831 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4845;
    // SubProg Get2 pc: 727 op: ELSE (23)
    goto L4; // [727] 94
    // SubProg Get2 pc: 729 op: NOP1 (159)
L17: // addr: 730 pc: 729 sub: 8693 op: 159
    // SubProg Get2 pc: 730 op: STARTLINE (58)

    /** get.e:465			elsif ch = '`' then*/
    // SubProg Get2 pc: 732 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 734 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 96)
    goto L18; // [734] 785
    // SubProg Get2 pc: 738 op: STARTLINE (58)

    /** get.e:466				e = get_heredoc("`")*/
    // SubProg Get2 pc: 740 op: PROC (27)
    RefDS(_4762);
    _0 = _e_8696;
    _e_8696 = _18get_heredoc(_4762);
    DeRef(_0);
    // SubProg Get2 pc: 744 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 746 op: STARTLINE (58)

    /** get.e:467				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 748 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 750 op: MINUS (10)
    _4848 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4848 +(uintptr_t) HIGH_BITS) >= 0){
        _4848 = NewDouble((eudouble)_4848);
    }
    // SubProg Get2 pc: 754 op: MINUS (10)
    if (IS_ATOM_INT(_4848)) {
        _4849 = _4848 - _offset_8698;
        if ((object)((uintptr_t)_4849 +(uintptr_t) HIGH_BITS) >= 0){
            _4849 = NewDouble((eudouble)_4849);
        }
    }
    else {
        _4849 = NewDouble(DBL_PTR(_4848)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4848);
    _4848 = NOVALUE;
    // SubProg Get2 pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 760 op: NOTEQ (4)
    _4850 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 764 op: MINUS (10)
    if (IS_ATOM_INT(_4849)) {
        _4851 = _4849 - _4850;
        if ((object)((uintptr_t)_4851 +(uintptr_t) HIGH_BITS) >= 0){
            _4851 = NewDouble((eudouble)_4851);
        }
    }
    else {
        _4851 = NewDouble(DBL_PTR(_4849)->dbl - (eudouble)_4850);
    }
    DeRef(_4849);
    _4849 = NOVALUE;
    _4850 = NOVALUE;
    // SubProg Get2 pc: 768 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 770 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4851;
    ((intptr_t *)_2)[2] = _18leading_whitespace_8692;
    _4852 = MAKE_SEQ(_1);
    _4851 = NOVALUE;
    // SubProg Get2 pc: 774 op: CONCAT (15)
    Concat((object_ptr)&_4853, _e_8696, _4852);
    DeRefDS(_4852);
    _4852 = NOVALUE;
    // SubProg Get2 pc: 778 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRefDS(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4837);
    _4837 = NOVALUE;
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4822);
    _4822 = NOVALUE;
    DeRef(_4845);
    _4845 = NOVALUE;
    DeRef(_4816);
    _4816 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4831);
    _4831 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4853;
    // SubProg Get2 pc: 782 op: ELSE (23)
    goto L4; // [782] 94
    // SubProg Get2 pc: 784 op: NOP1 (159)
L18: // addr: 785 pc: 784 sub: 8693 op: 159
    // SubProg Get2 pc: 785 op: STARTLINE (58)

    /** get.e:468			elsif ch = '\'' then*/
    // SubProg Get2 pc: 787 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 789 op: EQUALS_IFW_I (121)
    if (_18ch_8394 != 39)
    goto L19; // [789] 839
    // SubProg Get2 pc: 793 op: STARTLINE (58)

    /** get.e:469				e = get_qchar()*/
    // SubProg Get2 pc: 795 op: PROC (27)
    _0 = _e_8696;
    _e_8696 = _18get_qchar();
    DeRef(_0);
    // SubProg Get2 pc: 798 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 800 op: STARTLINE (58)

    /** get.e:470				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 802 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 804 op: MINUS (10)
    _4856 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4856 +(uintptr_t) HIGH_BITS) >= 0){
        _4856 = NewDouble((eudouble)_4856);
    }
    // SubProg Get2 pc: 808 op: MINUS (10)
    if (IS_ATOM_INT(_4856)) {
        _4857 = _4856 - _offset_8698;
        if ((object)((uintptr_t)_4857 +(uintptr_t) HIGH_BITS) >= 0){
            _4857 = NewDouble((eudouble)_4857);
        }
    }
    else {
        _4857 = NewDouble(DBL_PTR(_4856)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4856);
    _4856 = NOVALUE;
    // SubProg Get2 pc: 812 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 814 op: NOTEQ (4)
    _4858 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 818 op: MINUS (10)
    if (IS_ATOM_INT(_4857)) {
        _4859 = _4857 - _4858;
        if ((object)((uintptr_t)_4859 +(uintptr_t) HIGH_BITS) >= 0){
            _4859 = NewDouble((eudouble)_4859);
        }
    }
    else {
        _4859 = NewDouble(DBL_PTR(_4857)->dbl - (eudouble)_4858);
    }
    DeRef(_4857);
    _4857 = NOVALUE;
    _4858 = NOVALUE;
    // SubProg Get2 pc: 822 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 824 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4859;
    ((intptr_t *)_2)[2] = _18leading_whitespace_8692;
    _4860 = MAKE_SEQ(_1);
    _4859 = NOVALUE;
    // SubProg Get2 pc: 828 op: CONCAT (15)
    Concat((object_ptr)&_4861, _e_8696, _4860);
    DeRefDS(_4860);
    _4860 = NOVALUE;
    // SubProg Get2 pc: 832 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRefDS(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4837);
    _4837 = NOVALUE;
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4822);
    _4822 = NOVALUE;
    DeRef(_4845);
    _4845 = NOVALUE;
    DeRef(_4816);
    _4816 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4831);
    _4831 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4853);
    _4853 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4861;
    // SubProg Get2 pc: 836 op: ELSE (23)
    goto L4; // [836] 94
    // SubProg Get2 pc: 838 op: NOP1 (159)
L19: // addr: 839 pc: 838 sub: 8693 op: 159
    // SubProg Get2 pc: 839 op: STARTLINE (58)

    /** get.e:472				return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 841 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 843 op: MINUS (10)
    _4862 = _18string_next_8393 - 1;
    if ((object)((uintptr_t)_4862 +(uintptr_t) HIGH_BITS) >= 0){
        _4862 = NewDouble((eudouble)_4862);
    }
    // SubProg Get2 pc: 847 op: MINUS (10)
    if (IS_ATOM_INT(_4862)) {
        _4863 = _4862 - _offset_8698;
        if ((object)((uintptr_t)_4863 +(uintptr_t) HIGH_BITS) >= 0){
            _4863 = NewDouble((eudouble)_4863);
        }
    }
    else {
        _4863 = NewDouble(DBL_PTR(_4862)->dbl - (eudouble)_offset_8698);
    }
    DeRef(_4862);
    _4862 = NOVALUE;
    // SubProg Get2 pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 853 op: NOTEQ (4)
    _4864 = (_18ch_8394 != -1);
    // SubProg Get2 pc: 857 op: MINUS (10)
    if (IS_ATOM_INT(_4863)) {
        _4865 = _4863 - _4864;
        if ((object)((uintptr_t)_4865 +(uintptr_t) HIGH_BITS) >= 0){
            _4865 = NewDouble((eudouble)_4865);
        }
    }
    else {
        _4865 = NewDouble(DBL_PTR(_4863)->dbl - (eudouble)_4864);
    }
    DeRef(_4863);
    _4863 = NOVALUE;
    _4864 = NOVALUE;
    // SubProg Get2 pc: 861 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 863 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _4865;
    ((intptr_t*)_2)[4] = _18leading_whitespace_8692;
    _4866 = MAKE_SEQ(_1);
    _4865 = NOVALUE;
    // SubProg Get2 pc: 870 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_8695
    DeRef(_s_8695);

// block var e_8696
    DeRef(_e_8696);

// block var e1_8697

// block var offset_8698
    DeRef(_4837);
    _4837 = NOVALUE;
    DeRef(_4791);
    _4791 = NOVALUE;
    DeRef(_4773);
    _4773 = NOVALUE;
    DeRef(_4861);
    _4861 = NOVALUE;
    DeRef(_4822);
    _4822 = NOVALUE;
    DeRef(_4845);
    _4845 = NOVALUE;
    DeRef(_4816);
    _4816 = NOVALUE;
    DeRef(_4785);
    _4785 = NOVALUE;
    DeRef(_4831);
    _4831 = NOVALUE;
    DeRef(_4810);
    _4810 = NOVALUE;
    DeRef(_4853);
    _4853 = NOVALUE;
    DeRef(_4798);
    _4798 = NOVALUE;
    return _4866;
    // SubProg Get2 pc: 874 op: NOP1 (159)
    // SubProg Get2 pc: 875 op: STARTLINE (58)

    /** get.e:476		end while*/
    // SubProg Get2 pc: 877 op: ENDWHILE (22)
    goto L4; // [877] 94
    // SubProg Get2 pc: 879 op: NOP1 (159)
    // SubProg Get2 pc: 880 op: BADRETURNF (43)
    ;
}


object _18get_value(object _target_8834, object _start_point_8835, object _answer_type_8836)
{
    object _msg_inlined_crash_at_35_8847 = NOVALUE;
    object _data_inlined_crash_at_32_8846 = NOVALUE;
    object _where_inlined_where_at_76_8853 = NOVALUE;
    object _seek_1__tmp_at90_8858 = NOVALUE;
    object _seek_inlined_seek_at_90_8857 = NOVALUE;
    object _pos_inlined_seek_at_87_8856 = NOVALUE;
    object _msg_inlined_crash_at_108_8861 = NOVALUE;
    object _4882 = NOVALUE; // 8865 4882
// skipping _4881  name type: 0
    object _4879 = NOVALUE; // 8854 4879
    object _4878 = NOVALUE; // 8849 4878
    object _4877 = NOVALUE; // 8844 4877
    object _4873 = NOVALUE; // 8840 4873
    object _4872 = NOVALUE; // 8839 4872
    object _4871 = NOVALUE; // 8838 4871
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_value pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_value pc: 3 op: INTEGER_CHECK (96)
    // SubProg get_value pc: 5 op: STARTLINE (58)

    /** get.e:488		if answer_type != GET_SHORT_ANSWER and answer_type != GET_LONG_ANSWER then*/
    // SubProg get_value pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 9 op: NOTEQ (4)
    _4871 = (_answer_type_8836 != _18GET_SHORT_ANSWER_8826);
    // SubProg get_value pc: 13 op: SC1_AND_IF (146)
    if (_4871 == 0) {
        goto L1; // [13] 55
    }
    // SubProg get_value pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 19 op: NOTEQ (4)
    _4873 = (_answer_type_8836 != _18GET_LONG_ANSWER_8829);
    // SubProg get_value pc: 23 op: NOP1 (159)
    // SubProg get_value pc: 24 op: IF (20)
    if (_4873 == 0)
    {
        DeRef(_4873);
        _4873 = NOVALUE;
        goto L1; // [24] 55
    }
    else{
        DeRef(_4873);
        _4873 = NOVALUE;
    }
    // SubProg get_value pc: 27 op: STARTLINE (58)

    /** get.e:489			error:crash("Invalid type of answer, please only use %s (the default) or %s.", {"GET_SHORT_ANSWER", "GET_LONG_ANSWER"})*/
    // SubProg get_value pc: 29 op: RIGHT_BRACE_2 (85)
    RefDS(_4876);
    RefDS(_4875);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4875;
    ((intptr_t *)_2)[2] = _4876;
    _4877 = MAKE_SEQ(_1);
    // SubProg get_value pc: 33 op: ASSIGN (18)
    DeRef(_data_inlined_crash_at_32_8846);
    _data_inlined_crash_at_32_8846 = _4877;
    _4877 = NOVALUE;
    // SubProg get_value pc: 36 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg get_value pc: 38 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_35_8847);
    _msg_inlined_crash_at_35_8847 = EPrintf(-9999999, _4874, _data_inlined_crash_at_32_8846);
    // SubProg get_value pc: 42 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg get_value pc: 44 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_35_8847);
    // SubProg get_value pc: 47 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg get_value pc: 49 op: ELSE (23)
    goto L2; // [49] 52
    // SubProg get_value pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 8832 op: 159
    // SubProg get_value pc: 52 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from get_value @ 32

// block var data_inlined_crash_at_32_8846
    DeRef(_data_inlined_crash_at_32_8846);
    _data_inlined_crash_at_32_8846 = NOVALUE;

// block var msg_inlined_crash_at_35_8847
    DeRefi(_msg_inlined_crash_at_35_8847);
    _msg_inlined_crash_at_35_8847 = NOVALUE;
    // SubProg get_value pc: 54 op: NOP1 (159)
L1: // addr: 55 pc: 54 sub: 8832 op: 159
    // SubProg get_value pc: 55 op: STARTLINE (58)

    /** get.e:491		if atom(target) then -- get()*/
    // SubProg get_value pc: 57 op: IS_AN_ATOM (67)
    _4878 = IS_ATOM(_target_8834);
    // SubProg get_value pc: 60 op: IF (20)
    if (_4878 == 0)
    {
        _4878 = NOVALUE;
        goto L3; // [60] 142
    }
    else{
        _4878 = NOVALUE;
    }
    // SubProg get_value pc: 63 op: STARTLINE (58)

    /** get.e:492			input_file = target*/
    // SubProg get_value pc: 65 op: ASSIGN (18)
    Ref(_target_8834);
    _18input_file_8391 = _target_8834;
    // SubProg get_value pc: 68 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_18input_file_8391)) {
        _1 = (object)(DBL_PTR(_18input_file_8391)->dbl);
        DeRefDS(_18input_file_8391);
        _18input_file_8391 = _1;
    }
    // SubProg get_value pc: 70 op: STARTLINE (58)

    /** get.e:493			if start_point then*/
    // SubProg get_value pc: 72 op: IF (20)
    if (_start_point_8835 == 0)
    {
        goto L4; // [72] 129
    }
    else{
    }
    // SubProg get_value pc: 75 op: STARTLINE (58)

    /** get.e:494				if io:seek(target, io:where(target)+start_point) then*/
    // SubProg get_value pc: 77 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg get_value pc: 79 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_76_8853);
    _where_inlined_where_at_76_8853 = machine(20, _target_8834);
    // SubProg get_value pc: 83 op: NOP1 (159)
    // SubProg get_value pc: 84 op: PLUS (11)
    if (IS_ATOM_INT(_where_inlined_where_at_76_8853)) {
        _4879 = _where_inlined_where_at_76_8853 + _start_point_8835;
        if ((object)((uintptr_t)_4879 + (uintptr_t)HIGH_BITS) >= 0){
            _4879 = NewDouble((eudouble)_4879);
        }
    }
    else {
        _4879 = NewDouble(DBL_PTR(_where_inlined_where_at_76_8853)->dbl + (eudouble)_start_point_8835);
    }
    // SubProg get_value pc: 88 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_87_8856);
    _pos_inlined_seek_at_87_8856 = _4879;
    _4879 = NOVALUE;
    // SubProg get_value pc: 91 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg get_value pc: 93 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_87_8856);
    Ref(_target_8834);
    DeRef(_seek_1__tmp_at90_8858);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _target_8834;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_87_8856;
    _seek_1__tmp_at90_8858 = MAKE_SEQ(_1);
    // SubProg get_value pc: 97 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_90_8857 = machine(19, _seek_1__tmp_at90_8858);
    // SubProg get_value pc: 101 op: NOP1 (159)
    // SubProg get_value pc: 102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from get_value @ 87

// block var pos_inlined_seek_at_87_8856
    DeRef(_pos_inlined_seek_at_87_8856);
    _pos_inlined_seek_at_87_8856 = NOVALUE;

// block var seek_1__tmp_at90_8858
    DeRef(_seek_1__tmp_at90_8858);
    _seek_1__tmp_at90_8858 = NOVALUE;
    // SubProg get_value pc: 104 op: IF (20)
    if (_seek_inlined_seek_at_90_8857 == 0)
    {
        goto L5; // [104] 128
    }
    else{
    }
    // SubProg get_value pc: 107 op: STARTLINE (58)

    /** get.e:495					error:crash("Initial seek() for get() failed!")*/
    // SubProg get_value pc: 109 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg get_value pc: 111 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_108_8861);
    _msg_inlined_crash_at_108_8861 = EPrintf(-9999999, _4880, _5);
    // SubProg get_value pc: 115 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg get_value pc: 117 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_108_8861);
    // SubProg get_value pc: 120 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg get_value pc: 122 op: ELSE (23)
    goto L6; // [122] 125
    // SubProg get_value pc: 124 op: NOP1 (159)
L6: // addr: 125 pc: 124 sub: 8832 op: 159
    // SubProg get_value pc: 125 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from get_value @ 108

// block var msg_inlined_crash_at_108_8861
    DeRefi(_msg_inlined_crash_at_108_8861);
    _msg_inlined_crash_at_108_8861 = NOVALUE;
    // SubProg get_value pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 8832 op: 159
    // SubProg get_value pc: 128 op: NOP1 (159)
L4: // addr: 129 pc: 128 sub: 8832 op: 159
    // SubProg get_value pc: 129 op: STARTLINE (58)

    /** get.e:498			string_next = 1*/
    // SubProg get_value pc: 131 op: ASSIGN_I (113)
    _18string_next_8393 = 1;
    // SubProg get_value pc: 134 op: STARTLINE (58)

    /** get.e:499			input_string = 0*/
    // SubProg get_value pc: 136 op: ASSIGN (18)
    DeRef(_18input_string_8392);
    _18input_string_8392 = 0;
    // SubProg get_value pc: 139 op: ELSE (23)
    goto L7; // [139] 153
    // SubProg get_value pc: 141 op: NOP1 (159)
L3: // addr: 142 pc: 141 sub: 8832 op: 159
    // SubProg get_value pc: 142 op: STARTLINE (58)

    /** get.e:501			input_string = target*/
    // SubProg get_value pc: 144 op: ASSIGN (18)
    Ref(_target_8834);
    DeRef(_18input_string_8392);
    _18input_string_8392 = _target_8834;
    // SubProg get_value pc: 147 op: STARTLINE (58)

    /** get.e:502			string_next = start_point*/
    // SubProg get_value pc: 149 op: ASSIGN_I (113)
    _18string_next_8393 = _start_point_8835;
    // SubProg get_value pc: 152 op: NOP1 (159)
L7: // addr: 153 pc: 152 sub: 8832 op: 159
    // SubProg get_value pc: 153 op: STARTLINE (58)

    /** get.e:504		if answer_type = GET_SHORT_ANSWER then*/
    // SubProg get_value pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 157 op: EQUALS_IFW (104)
    if (_answer_type_8836 != _18GET_SHORT_ANSWER_8826)
    goto L8; // [157] 166
    // SubProg get_value pc: 161 op: STARTLINE (58)

    /** get.e:505			get_ch()*/
    // SubProg get_value pc: 163 op: PROC (27)
    _18get_ch();
    // SubProg get_value pc: 165 op: NOP1 (159)
L8: // addr: 166 pc: 165 sub: 8832 op: 159
    // SubProg get_value pc: 166 op: STARTLINE (58)

    /** get.e:507		return call_func(answer_type, {})*/
    // SubProg get_value pc: 168 op: CALL_FUNC (137)
    _0 = (object)_00[_answer_type_8836].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_4882);
    _4882 = _1;
    // SubProg get_value pc: 172 op: RETURNF (28)

// Exiting block BLOCK: get_value

// block var target_8834
    DeRef(_target_8834);

// block var start_point_8835

// block var answer_type_8836
    DeRef(_4871);
    _4871 = NOVALUE;
    return _4882;
    // SubProg get_value pc: 176 op: BADRETURNF (43)
    ;
}


object _18value(object _st_8874, object _start_point_8875, object _answer_8876)
{
    object _4884 = NOVALUE; // 8877 4884
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg value pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg value pc: 3 op: INTEGER_CHECK (96)
    // SubProg value pc: 5 op: INTEGER_CHECK (96)
    // SubProg value pc: 7 op: STARTLINE (58)

    /** get.e:684		return get_value(st, start_point, answer)*/
    // SubProg value pc: 9 op: PROC (27)
    RefDS(_st_8874);
    _4884 = _18get_value(_st_8874, 1, _answer_8876);
    // SubProg value pc: 15 op: RETURNF (28)

// Exiting block BLOCK: value

// block var st_8874
    DeRefDS(_st_8874);

// block var start_point_8875

// block var answer_8876
    return _4884;
    // SubProg value pc: 19 op: BADRETURNF (43)
    ;
}



// 0x6782CA44
