// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _6get_ch()
{
// skipping _6062  name type: 0
// skipping _6061  name type: 0
// skipping _6060  name type: 0
// skipping _6059  name type: 0
// skipping _6058  name type: 0
// skipping _6057  name type: 0
    object _6056 = NOVALUE; // 10816 6056
    object _6055 = NOVALUE; // 10814 6055
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_ch pc: 1 op: STARTLINE (58)

    /** get.e:47		if sequence(input_string) then*/
    // SubProg get_ch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 5 op: IS_A_SEQUENCE (68)
    _6055 = IS_SEQUENCE(_6input_string_10808);
    // SubProg get_ch pc: 8 op: IF (20)
    if (_6055 == 0)
    {
        _6055 = NOVALUE;
        goto L1; // [8] 56
    }
    else{
        _6055 = NOVALUE;
    }
    // SubProg get_ch pc: 11 op: STARTLINE (58)

    /** get.e:48			if string_next <= length(input_string) then*/
    // SubProg get_ch pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_6input_string_10808)){
            _6056 = SEQ_PTR(_6input_string_10808)->length;
    }
    else {
        _6056 = 1;
    }
    // SubProg get_ch pc: 20 op: LESSEQ_IFW_I (123)
    if (_6string_next_10809 > _6056)
    goto L2; // [20] 47
    // SubProg get_ch pc: 24 op: STARTLINE (58)

    /** get.e:49				ch = input_string[string_next]*/
    // SubProg get_ch pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 30 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6input_string_10808);
    _6ch_10810 = (object)*(((s1_ptr)_2)->base + _6string_next_10809);
    if (!IS_ATOM_INT(_6ch_10810)){
        _6ch_10810 = (object)DBL_PTR(_6ch_10810)->dbl;
    }
    // SubProg get_ch pc: 36 op: STARTLINE (58)

    /** get.e:50				string_next += 1*/
    // SubProg get_ch pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 40 op: PLUS1_I (117)
    _6string_next_10809 = _6string_next_10809 + 1;
    // SubProg get_ch pc: 44 op: ELSE (23)
    goto L3; // [44] 81
    // SubProg get_ch pc: 46 op: NOP1 (159)
L2: // addr: 47 pc: 46 sub: 10811 op: 159
    // SubProg get_ch pc: 47 op: STARTLINE (58)

    /** get.e:52				ch = GET_EOF*/
    // SubProg get_ch pc: 49 op: ASSIGN_I (113)
    _6ch_10810 = -1;
    // SubProg get_ch pc: 52 op: NOP1 (159)
    // SubProg get_ch pc: 53 op: ELSE (23)
    goto L3; // [53] 81
    // SubProg get_ch pc: 55 op: NOP1 (159)
L1: // addr: 56 pc: 55 sub: 10811 op: 159
    // SubProg get_ch pc: 56 op: STARTLINE (58)

    /** get.e:55			ch = getc(input_file)*/
    // SubProg get_ch pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 60 op: GETC (33)
    if (_6input_file_10807 != last_r_file_no) {
        last_r_file_ptr = which_file(_6input_file_10807, EF_READ);
        last_r_file_no = _6input_file_10807;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _6ch_10810 = getc((FILE*)xstdin);
        }
        else{
            _6ch_10810 = getc(last_r_file_ptr);
        }
    }
    else{
        _6ch_10810 = getc(last_r_file_ptr);
    }
    // SubProg get_ch pc: 63 op: STARTLINE (58)

    /** get.e:56			if ch = GET_EOF then*/
    // SubProg get_ch pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 67 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != -1)
    goto L4; // [67] 80
    // SubProg get_ch pc: 71 op: STARTLINE (58)

    /** get.e:57				string_next += 1*/
    // SubProg get_ch pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 75 op: PLUS1_I (117)
    _6string_next_10809 = _6string_next_10809 + 1;
    // SubProg get_ch pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 10811 op: 159
    // SubProg get_ch pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 10811 op: 159
    // SubProg get_ch pc: 81 op: STARTLINE (58)

    /** get.e:60	end procedure*/
    // SubProg get_ch pc: 83 op: RETURNP (29)

// Exiting block BLOCK: get_ch
    return;
    // SubProg get_ch pc: 86 op: BADRETURNF (43)
    ;
}


object _6escape_char(object _c_10837)
{
    object _i_10838 = NOVALUE;
    object _6068 = NOVALUE; // 10843 6068
// skipping _6067  name type: 0
// skipping _6066  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg escape_char pc: 1 op: INTEGER_CHECK (96)
    // SubProg escape_char pc: 3 op: STARTLINE (58)

    /** get.e:79		i = find(c, ESCAPE_CHARS)*/
    // SubProg escape_char pc: 5 op: FIND_FROM (176)
    _i_10838 = find_from(_c_10837, _6ESCAPE_CHARS_10831, 1);
    // SubProg escape_char pc: 10 op: STARTLINE (58)

    /** get.e:80		if i = 0 then*/
    // SubProg escape_char pc: 12 op: EQUALS_IFW_I (121)
    if (_i_10838 != 0)
    goto L1; // [12] 25
    // SubProg escape_char pc: 16 op: STARTLINE (58)

    /** get.e:81			return GET_FAIL*/
    // SubProg escape_char pc: 18 op: RETURNF (28)

// Exiting block BLOCK: escape_char

// block var c_10837

// block var i_10838
    return 1;
    // SubProg escape_char pc: 22 op: ELSE (23)
    goto L2; // [22] 36
    // SubProg escape_char pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 10835 op: 159
    // SubProg escape_char pc: 25 op: STARTLINE (58)

    /** get.e:83			return ESCAPED_CHARS[i]*/
    // SubProg escape_char pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6ESCAPED_CHARS_10833);
    _6068 = (object)*(((s1_ptr)_2)->base + _i_10838);
    // SubProg escape_char pc: 31 op: RETURNF (28)
    Ref(_6068);

// Exiting block BLOCK: escape_char

// block var c_10837

// block var i_10838
    return _6068;
    // SubProg escape_char pc: 35 op: NOP1 (159)
L2: // addr: 36 pc: 35 sub: 10835 op: 159
    // SubProg escape_char pc: 36 op: BADRETURNF (43)
    ;
}


object _6get_qchar()
{
    object _c_10846 = NOVALUE;
    object _6077 = NOVALUE; // 10860 6077
    object _6076 = NOVALUE; // 10858 6076
// skipping _6075  name type: 0
    object _6074 = NOVALUE; // 10855 6074
// skipping _6073  name type: 0
    object _6072 = NOVALUE; // 10852 6072
// skipping _6071  name type: 0
// skipping _6070  name type: 0
// skipping _6069  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_qchar pc: 1 op: STARTLINE (58)

    /** get.e:92		get_ch()*/
    // SubProg get_qchar pc: 3 op: PROC (27)
    _6get_ch();
    // SubProg get_qchar pc: 5 op: STARTLINE (58)

    /** get.e:93		c = ch*/
    // SubProg get_qchar pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 9 op: ASSIGN_I (113)
    _c_10846 = _6ch_10810;
    // SubProg get_qchar pc: 12 op: STARTLINE (58)

    /** get.e:94		if ch = '\\' then*/
    // SubProg get_qchar pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 16 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 92)
    goto L1; // [16] 54
    // SubProg get_qchar pc: 20 op: STARTLINE (58)

    /** get.e:95			get_ch()*/
    // SubProg get_qchar pc: 22 op: PROC (27)
    _6get_ch();
    // SubProg get_qchar pc: 24 op: STARTLINE (58)

    /** get.e:96			c = escape_char(ch)*/
    // SubProg get_qchar pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 28 op: PROC (27)
    _c_10846 = _6escape_char(_6ch_10810);
    // SubProg get_qchar pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_10846)) {
        _1 = (object)(DBL_PTR(_c_10846)->dbl);
        DeRefDS(_c_10846);
        _c_10846 = _1;
    }
    // SubProg get_qchar pc: 34 op: STARTLINE (58)

    /** get.e:97			if c = GET_FAIL then*/
    // SubProg get_qchar pc: 36 op: EQUALS_IFW_I (121)
    if (_c_10846 != 1)
    goto L2; // [36] 74
    // SubProg get_qchar pc: 40 op: STARTLINE (58)

    /** get.e:98				return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 42 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6072 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 46 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_10846
    return _6072;
    // SubProg get_qchar pc: 50 op: NOP1 (159)
    // SubProg get_qchar pc: 51 op: ELSE (23)
    goto L2; // [51] 74
    // SubProg get_qchar pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 10844 op: 159
    // SubProg get_qchar pc: 54 op: STARTLINE (58)

    /** get.e:100		elsif ch = '\'' then*/
    // SubProg get_qchar pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 58 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 39)
    goto L3; // [58] 73
    // SubProg get_qchar pc: 62 op: STARTLINE (58)

    /** get.e:101			return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 64 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6074 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 68 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_10846
    DeRef(_6072);
    _6072 = NOVALUE;
    return _6074;
    // SubProg get_qchar pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 10844 op: 159
    // SubProg get_qchar pc: 73 op: NOP1 (159)
L2: // addr: 74 pc: 73 sub: 10844 op: 159
    // SubProg get_qchar pc: 74 op: STARTLINE (58)

    /** get.e:103		get_ch()*/
    // SubProg get_qchar pc: 76 op: PROC (27)
    _6get_ch();
    // SubProg get_qchar pc: 78 op: STARTLINE (58)

    /** get.e:104		if ch != '\'' then*/
    // SubProg get_qchar pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 82 op: NOTEQ_IFW_I (122)
    if (_6ch_10810 == 39)
    goto L4; // [82] 99
    // SubProg get_qchar pc: 86 op: STARTLINE (58)

    /** get.e:105			return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 88 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6076 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 92 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_10846
    DeRef(_6074);
    _6074 = NOVALUE;
    DeRef(_6072);
    _6072 = NOVALUE;
    return _6076;
    // SubProg get_qchar pc: 96 op: ELSE (23)
    goto L5; // [96] 114
    // SubProg get_qchar pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 10844 op: 159
    // SubProg get_qchar pc: 99 op: STARTLINE (58)

    /** get.e:107			get_ch()*/
    // SubProg get_qchar pc: 101 op: PROC (27)
    _6get_ch();
    // SubProg get_qchar pc: 103 op: STARTLINE (58)

    /** get.e:108			return {GET_SUCCESS, c}*/
    // SubProg get_qchar pc: 105 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _c_10846;
    _6077 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 109 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_10846
    DeRef(_6074);
    _6074 = NOVALUE;
    DeRef(_6072);
    _6072 = NOVALUE;
    DeRef(_6076);
    _6076 = NOVALUE;
    return _6077;
    // SubProg get_qchar pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 10844 op: 159
    // SubProg get_qchar pc: 114 op: BADRETURNF (43)
    ;
}


object _6get_heredoc(object _terminator_10863)
{
    object _text_10864 = NOVALUE;
    object _ends_at_10865 = NOVALUE;
    object _6092 = NOVALUE; // 10882 6092
    object _6091 = NOVALUE; // 10881 6091
    object _6090 = NOVALUE; // 10880 6090
    object _6089 = NOVALUE; // 10879 6089
    object _6088 = NOVALUE; // 10878 6088
// skipping _6087  name type: 0
// skipping _6086  name type: 0
    object _6085 = NOVALUE; // 10875 6085
// skipping _6084  name type: 0
    object _6083 = NOVALUE; // 10872 6083
    object _6082 = NOVALUE; // 10871 6082
    object _6081 = NOVALUE; // 10870 6081
    object _6080 = NOVALUE; // 10869 6080
// skipping _6079  name type: 0
    object _6078 = NOVALUE; // 10866 6078
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_heredoc pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_heredoc pc: 3 op: STARTLINE (58)

    /** get.e:113		sequence text = ""*/
    // SubProg get_heredoc pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_text_10864);
    _text_10864 = _5;
    // SubProg get_heredoc pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg get_heredoc pc: 10 op: STARTLINE (58)

    /** get.e:114		integer ends_at = 1 - length( terminator )*/
    // SubProg get_heredoc pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_terminator_10863)){
            _6078 = SEQ_PTR(_terminator_10863)->length;
    }
    else {
        _6078 = 1;
    }
    // SubProg get_heredoc pc: 15 op: MINUS_I (116)
    _ends_at_10865 = 1 - _6078;
    _6078 = NOVALUE;
    // SubProg get_heredoc pc: 19 op: STARTLINE (58)

    /** get.e:115		while ends_at < 1 or not match( terminator, text, ends_at ) with entry do*/
    // SubProg get_heredoc pc: 21 op: ELSE (23)
    goto L1; // [21] 69
    // SubProg get_heredoc pc: 23 op: NOPWHILE (158)
L2: // addr: 24 pc: 23 sub: 10861 op: 158
    // SubProg get_heredoc pc: 24 op: LESS (1)
    _6080 = (_ends_at_10865 < 1);
    // SubProg get_heredoc pc: 28 op: SC1_OR (143)
    if (_6080 != 0) {
        DeRef(_6081);
        _6081 = 1;
        goto L3; // [28] 44
    }
    // SubProg get_heredoc pc: 32 op: MATCH_FROM (177)
    _6082 = e_match_from(_terminator_10863, _text_10864, _ends_at_10865);
    // SubProg get_heredoc pc: 37 op: NOT (7)
    _6083 = (_6082 == 0);
    _6082 = NOVALUE;
    // SubProg get_heredoc pc: 40 op: SC2_OR (144)
    _6081 = (_6083 != 0);
    // SubProg get_heredoc pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 10861 op: 159
    // SubProg get_heredoc pc: 44 op: WHILE (47)
    if (_6081 == 0)
    {
        _6081 = NOVALUE;
        goto L4; // [44] 92
    }
    else{
        _6081 = NOVALUE;
    }
    // SubProg get_heredoc pc: 47 op: STARTLINE (58)

    /** get.e:116			if ch = GET_EOF then*/
    // SubProg get_heredoc pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_heredoc pc: 51 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != -1)
    goto L5; // [51] 66
    // SubProg get_heredoc pc: 55 op: STARTLINE (58)

    /** get.e:117				return { GET_FAIL, 0 }*/
    // SubProg get_heredoc pc: 57 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6085 = MAKE_SEQ(_1);
    // SubProg get_heredoc pc: 61 op: RETURNF (28)

// Exiting block BLOCK: get_heredoc

// block var terminator_10863
    DeRefDSi(_terminator_10863);

// block var text_10864
    DeRefi(_text_10864);

// block var ends_at_10865
    DeRef(_6083);
    _6083 = NOVALUE;
    DeRef(_6080);
    _6080 = NOVALUE;
    return _6085;
    // SubProg get_heredoc pc: 65 op: NOP1 (159)
L5: // addr: 66 pc: 65 sub: 10861 op: 159
    // SubProg get_heredoc pc: 66 op: STARTLINE (58)

    /** get.e:119		entry*/
    // SubProg get_heredoc pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 10861 op: 159
    // SubProg get_heredoc pc: 69 op: STARTLINE (58)

    /** get.e:120			get_ch()*/
    // SubProg get_heredoc pc: 71 op: PROC (27)
    _6get_ch();
    // SubProg get_heredoc pc: 73 op: STARTLINE (58)

    /** get.e:121			text &= ch*/
    // SubProg get_heredoc pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_heredoc pc: 77 op: CONCAT (15)
    Append(&_text_10864, _text_10864, _6ch_10810);
    // SubProg get_heredoc pc: 81 op: STARTLINE (58)

    /** get.e:122			ends_at += 1*/
    // SubProg get_heredoc pc: 83 op: PLUS1_I (117)
    _ends_at_10865 = _ends_at_10865 + 1;
    // SubProg get_heredoc pc: 87 op: STARTLINE (58)

    /** get.e:123		end while*/
    // SubProg get_heredoc pc: 89 op: ENDWHILE (22)
    goto L2; // [89] 24
    // SubProg get_heredoc pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 10861 op: 159
    // SubProg get_heredoc pc: 92 op: STARTLINE (58)

    /** get.e:124		return { GET_SUCCESS, head( text, length( text ) - length( terminator ) ) }*/
    // SubProg get_heredoc pc: 94 op: LENGTH (42)
    if (IS_SEQUENCE(_text_10864)){
            _6088 = SEQ_PTR(_text_10864)->length;
    }
    else {
        _6088 = 1;
    }
    // SubProg get_heredoc pc: 97 op: LENGTH (42)
    if (IS_SEQUENCE(_terminator_10863)){
            _6089 = SEQ_PTR(_terminator_10863)->length;
    }
    else {
        _6089 = 1;
    }
    // SubProg get_heredoc pc: 100 op: MINUS (10)
    _6090 = _6088 - _6089;
    _6088 = NOVALUE;
    _6089 = NOVALUE;
    // SubProg get_heredoc pc: 104 op: HEAD (198)
    {
        int len = SEQ_PTR(_text_10864)->length;
        int size = (IS_ATOM_INT(_6090)) ? _6090 : (object)(DBL_PTR(_6090)->dbl);
        if (size <= 0){
            DeRef( _6091 );
            _6091 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_text_10864);
            DeRef(_6091);
            _6091 = _text_10864;
        }
        else{
            Head(SEQ_PTR(_text_10864),size+1,&_6091);
        }
    }
    _6090 = NOVALUE;
    // SubProg get_heredoc pc: 108 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _6091;
    _6092 = MAKE_SEQ(_1);
    _6091 = NOVALUE;
    // SubProg get_heredoc pc: 112 op: RETURNF (28)

// Exiting block BLOCK: get_heredoc

// block var terminator_10863
    DeRefDSi(_terminator_10863);

// block var text_10864
    DeRefDSi(_text_10864);

// block var ends_at_10865
    DeRef(_6083);
    _6083 = NOVALUE;
    DeRef(_6085);
    _6085 = NOVALUE;
    DeRef(_6080);
    _6080 = NOVALUE;
    return _6092;
    // SubProg get_heredoc pc: 116 op: BADRETURNF (43)
    ;
}


object _6get_string()
{
    object _text_10885 = NOVALUE;
// skipping _6110  name type: 0
    object _6109 = NOVALUE; // 10909 6109
// skipping _6108  name type: 0
// skipping _6107  name type: 0
// skipping _6106  name type: 0
    object _6105 = NOVALUE; // 10903 6105
    object _6104 = NOVALUE; // 10902 6104
// skipping _6102  name type: 0
    object _6101 = NOVALUE; // 10898 6101
    object _6100 = NOVALUE; // 10897 6100
    object _6099 = NOVALUE; // 10896 6099
    object _6098 = NOVALUE; // 10895 6098
// skipping _6097  name type: 0
    object _6096 = NOVALUE; // 10891 6096
    object _6095 = NOVALUE; // 10890 6095
// skipping _6094  name type: 0
    object _6093 = NOVALUE; // 10888 6093
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_string pc: 1 op: STARTLINE (58)

    /** get.e:132		text = ""*/
    // SubProg get_string pc: 3 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_text_10885);
    _text_10885 = _5;
    // SubProg get_string pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg get_string pc: 8 op: STARTLINE (58)

    /** get.e:133		while TRUE do*/
    // SubProg get_string pc: 10 op: NOP2 (110)
    // SubProg get_string pc: 12 op: NOPWHILE (158)
L1: // addr: 13 pc: 12 sub: 10883 op: 158
    // SubProg get_string pc: 13 op: STARTLINE (58)

    /** get.e:134			get_ch()*/
    // SubProg get_string pc: 15 op: PROC (27)
    _6get_ch();
    // SubProg get_string pc: 17 op: STARTLINE (58)

    /** get.e:135			if ch = GET_EOF or ch = '\n' then*/
    // SubProg get_string pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 21 op: EQUALS (3)
    _6093 = (_6ch_10810 == -1);
    // SubProg get_string pc: 25 op: SC1_OR_IF (147)
    if (_6093 != 0) {
        goto L2; // [25] 40
    }
    // SubProg get_string pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 31 op: EQUALS (3)
    _6095 = (_6ch_10810 == 10);
    // SubProg get_string pc: 35 op: NOP1 (159)
    // SubProg get_string pc: 36 op: IF (20)
    if (_6095 == 0)
    {
        DeRef(_6095);
        _6095 = NOVALUE;
        goto L3; // [36] 53
    }
    else{
        DeRef(_6095);
        _6095 = NOVALUE;
    }
    // SubProg get_string pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 10883 op: 159
    // SubProg get_string pc: 40 op: STARTLINE (58)

    /** get.e:136				return {GET_FAIL, 0}*/
    // SubProg get_string pc: 42 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6096 = MAKE_SEQ(_1);
    // SubProg get_string pc: 46 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_10885
    DeRefi(_text_10885);
    DeRef(_6093);
    _6093 = NOVALUE;
    return _6096;
    // SubProg get_string pc: 50 op: ELSE (23)
    goto L4; // [50] 164
    // SubProg get_string pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 10883 op: 159
    // SubProg get_string pc: 53 op: STARTLINE (58)

    /** get.e:137			elsif ch = '"' then*/
    // SubProg get_string pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 57 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 34)
    goto L5; // [57] 121
    // SubProg get_string pc: 61 op: STARTLINE (58)

    /** get.e:138				get_ch()*/
    // SubProg get_string pc: 63 op: PROC (27)
    _6get_ch();
    // SubProg get_string pc: 65 op: STARTLINE (58)

    /** get.e:139				if length( text ) = 0 and ch = '"' then*/
    // SubProg get_string pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_text_10885)){
            _6098 = SEQ_PTR(_text_10885)->length;
    }
    else {
        _6098 = 1;
    }
    // SubProg get_string pc: 70 op: EQUALS (3)
    _6099 = (_6098 == 0);
    _6098 = NOVALUE;
    // SubProg get_string pc: 74 op: SC1_AND_IF (146)
    if (_6099 == 0) {
        goto L6; // [74] 108
    }
    // SubProg get_string pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 80 op: EQUALS (3)
    _6101 = (_6ch_10810 == 34);
    // SubProg get_string pc: 84 op: NOP1 (159)
    // SubProg get_string pc: 85 op: IF (20)
    if (_6101 == 0)
    {
        DeRef(_6101);
        _6101 = NOVALUE;
        goto L6; // [85] 108
    }
    else{
        DeRef(_6101);
        _6101 = NOVALUE;
    }
    // SubProg get_string pc: 88 op: STARTLINE (58)

    /** get.e:140					if ch = '"' then*/
    // SubProg get_string pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 92 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 34)
    goto L7; // [92] 107
    // SubProg get_string pc: 96 op: STARTLINE (58)

    /** get.e:141						return get_heredoc( `"""` )*/
    // SubProg get_string pc: 98 op: PROC (27)
    RefDS(_6103);
    _6104 = _6get_heredoc(_6103);
    // SubProg get_string pc: 102 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_10885
    DeRefi(_text_10885);
    DeRef(_6093);
    _6093 = NOVALUE;
    DeRef(_6099);
    _6099 = NOVALUE;
    DeRef(_6096);
    _6096 = NOVALUE;
    return _6104;
    // SubProg get_string pc: 106 op: NOP1 (159)
L7: // addr: 107 pc: 106 sub: 10883 op: 159
    // SubProg get_string pc: 107 op: NOP1 (159)
L6: // addr: 108 pc: 107 sub: 10883 op: 159
    // SubProg get_string pc: 108 op: STARTLINE (58)

    /** get.e:144				return {GET_SUCCESS, text}*/
    // SubProg get_string pc: 110 op: RIGHT_BRACE_2 (85)
    RefDS(_text_10885);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _text_10885;
    _6105 = MAKE_SEQ(_1);
    // SubProg get_string pc: 114 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_10885
    DeRefDSi(_text_10885);
    DeRef(_6093);
    _6093 = NOVALUE;
    DeRef(_6104);
    _6104 = NOVALUE;
    DeRef(_6099);
    _6099 = NOVALUE;
    DeRef(_6096);
    _6096 = NOVALUE;
    return _6105;
    // SubProg get_string pc: 118 op: ELSE (23)
    goto L4; // [118] 164
    // SubProg get_string pc: 120 op: NOP1 (159)
L5: // addr: 121 pc: 120 sub: 10883 op: 159
    // SubProg get_string pc: 121 op: STARTLINE (58)

    /** get.e:145			elsif ch = '\\' then*/
    // SubProg get_string pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 125 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 92)
    goto L8; // [125] 163
    // SubProg get_string pc: 129 op: STARTLINE (58)

    /** get.e:146				get_ch()*/
    // SubProg get_string pc: 131 op: PROC (27)
    _6get_ch();
    // SubProg get_string pc: 133 op: STARTLINE (58)

    /** get.e:147				ch = escape_char(ch)*/
    // SubProg get_string pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 137 op: PROC (27)
    _0 = _6escape_char(_6ch_10810);
    _6ch_10810 = _0;
    // SubProg get_string pc: 141 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_6ch_10810)) {
        _1 = (object)(DBL_PTR(_6ch_10810)->dbl);
        DeRefDS(_6ch_10810);
        _6ch_10810 = _1;
    }
    // SubProg get_string pc: 143 op: STARTLINE (58)

    /** get.e:148				if ch = GET_FAIL then*/
    // SubProg get_string pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 147 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 1)
    goto L9; // [147] 162
    // SubProg get_string pc: 151 op: STARTLINE (58)

    /** get.e:149					return {GET_FAIL, 0}*/
    // SubProg get_string pc: 153 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6109 = MAKE_SEQ(_1);
    // SubProg get_string pc: 157 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_10885
    DeRefi(_text_10885);
    DeRef(_6093);
    _6093 = NOVALUE;
    DeRef(_6104);
    _6104 = NOVALUE;
    DeRef(_6099);
    _6099 = NOVALUE;
    DeRef(_6105);
    _6105 = NOVALUE;
    DeRef(_6096);
    _6096 = NOVALUE;
    return _6109;
    // SubProg get_string pc: 161 op: NOP1 (159)
L9: // addr: 162 pc: 161 sub: 10883 op: 159
    // SubProg get_string pc: 162 op: NOP1 (159)
L8: // addr: 163 pc: 162 sub: 10883 op: 159
    // SubProg get_string pc: 163 op: NOP1 (159)
L4: // addr: 164 pc: 163 sub: 10883 op: 159
    // SubProg get_string pc: 164 op: STARTLINE (58)

    /** get.e:152			text = text & ch*/
    // SubProg get_string pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 168 op: CONCAT (15)
    Append(&_text_10885, _text_10885, _6ch_10810);
    // SubProg get_string pc: 172 op: STARTLINE (58)

    /** get.e:153		end while*/
    // SubProg get_string pc: 174 op: ENDWHILE (22)
    goto L1; // [174] 13
    // SubProg get_string pc: 176 op: NOP1 (159)
    // SubProg get_string pc: 177 op: BADRETURNF (43)
    ;
}


object _6read_comment()
{
    object _6130 = NOVALUE; // 10944 6130
    object _6129 = NOVALUE; // 10943 6129
// skipping _6128  name type: 0
    object _6127 = NOVALUE; // 10941 6127
// skipping _6126  name type: 0
    object _6125 = NOVALUE; // 10939 6125
// skipping _6124  name type: 0
    object _6123 = NOVALUE; // 10936 6123
    object _6122 = NOVALUE; // 10932 6122
    object _6121 = NOVALUE; // 10930 6121
// skipping _6120  name type: 0
    object _6119 = NOVALUE; // 10927 6119
    object _6118 = NOVALUE; // 10926 6118
    object _6117 = NOVALUE; // 10925 6117
    object _6116 = NOVALUE; // 10924 6116
    object _6115 = NOVALUE; // 10923 6115
    object _6114 = NOVALUE; // 10921 6114
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_comment pc: 1 op: STARTLINE (58)

    /** get.e:163		if atom(input_string) then*/
    // SubProg read_comment pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 5 op: IS_AN_ATOM (67)
    _6114 = IS_ATOM(_6input_string_10808);
    // SubProg read_comment pc: 8 op: IF (20)
    if (_6114 == 0)
    {
        _6114 = NOVALUE;
        goto L1; // [8] 98
    }
    else{
        _6114 = NOVALUE;
    }
    // SubProg read_comment pc: 11 op: STARTLINE (58)

    /** get.e:164			while ch!='\n' and ch!='\r' and ch!=-1 do*/
    // SubProg read_comment pc: 13 op: NOP2 (110)
    // SubProg read_comment pc: 15 op: NOPWHILE (158)
L2: // addr: 16 pc: 15 sub: 10918 op: 158
    // SubProg read_comment pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 18 op: NOTEQ (4)
    _6115 = (_6ch_10810 != 10);
    // SubProg read_comment pc: 22 op: SC1_AND (141)
    if (_6115 == 0) {
        _6116 = 0;
        goto L3; // [22] 36
    }
    // SubProg read_comment pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 28 op: NOTEQ (4)
    _6117 = (_6ch_10810 != 13);
    // SubProg read_comment pc: 32 op: SC2_AND (142)
    _6116 = (_6117 != 0);
    // SubProg read_comment pc: 35 op: NOP1 (159)
L3: // addr: 36 pc: 35 sub: 10918 op: 159
    // SubProg read_comment pc: 36 op: SC1_AND_IF (146)
    if (_6116 == 0) {
        goto L4; // [36] 59
    }
    // SubProg read_comment pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 42 op: NOTEQ (4)
    _6119 = (_6ch_10810 != -1);
    // SubProg read_comment pc: 46 op: NOP1 (159)
    // SubProg read_comment pc: 47 op: WHILE (47)
    if (_6119 == 0)
    {
        DeRef(_6119);
        _6119 = NOVALUE;
        goto L4; // [47] 59
    }
    else{
        DeRef(_6119);
        _6119 = NOVALUE;
    }
    // SubProg read_comment pc: 50 op: STARTLINE (58)

    /** get.e:165				get_ch()*/
    // SubProg read_comment pc: 52 op: PROC (27)
    _6get_ch();
    // SubProg read_comment pc: 54 op: STARTLINE (58)

    /** get.e:166			end while*/
    // SubProg read_comment pc: 56 op: ENDWHILE (22)
    goto L2; // [56] 16
    // SubProg read_comment pc: 58 op: NOP1 (159)
L4: // addr: 59 pc: 58 sub: 10918 op: 159
    // SubProg read_comment pc: 59 op: STARTLINE (58)

    /** get.e:167			get_ch()*/
    // SubProg read_comment pc: 61 op: PROC (27)
    _6get_ch();
    // SubProg read_comment pc: 63 op: STARTLINE (58)

    /** get.e:168			if ch=-1 then*/
    // SubProg read_comment pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 67 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != -1)
    goto L5; // [67] 84
    // SubProg read_comment pc: 71 op: STARTLINE (58)

    /** get.e:169				return {GET_EOF, 0}*/
    // SubProg read_comment pc: 73 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _6121 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 77 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_6117);
    _6117 = NOVALUE;
    DeRef(_6115);
    _6115 = NOVALUE;
    return _6121;
    // SubProg read_comment pc: 81 op: ELSE (23)
    goto L6; // [81] 182
    // SubProg read_comment pc: 83 op: NOP1 (159)
L5: // addr: 84 pc: 83 sub: 10918 op: 159
    // SubProg read_comment pc: 84 op: STARTLINE (58)

    /** get.e:171				return {GET_IGNORE, 0}*/
    // SubProg read_comment pc: 86 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _6122 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 90 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_6121);
    _6121 = NOVALUE;
    DeRef(_6117);
    _6117 = NOVALUE;
    DeRef(_6115);
    _6115 = NOVALUE;
    return _6122;
    // SubProg read_comment pc: 94 op: NOP1 (159)
    // SubProg read_comment pc: 95 op: ELSE (23)
    goto L6; // [95] 182
    // SubProg read_comment pc: 97 op: NOP1 (159)
L1: // addr: 98 pc: 97 sub: 10918 op: 159
    // SubProg read_comment pc: 98 op: STARTLINE (58)

    /** get.e:174			for i=string_next to length(input_string) do*/
    // SubProg read_comment pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 104 op: LENGTH (42)
    if (IS_SEQUENCE(_6input_string_10808)){
            _6123 = SEQ_PTR(_6input_string_10808)->length;
    }
    else {
        _6123 = 1;
    }
    // SubProg read_comment pc: 107 op: FOR_I (125)
    {
        object _i_10935;
        _i_10935 = _6string_next_10809;
L7: // addr: 114 pc: 107 sub: 10918 op: 125
        if (_i_10935 > _6123){
            goto L8; // [107] 171
        }
        // SubProg read_comment pc: 114 op: STARTLINE (58)

        /** get.e:175				ch=input_string[i]*/
        // SubProg read_comment pc: 116 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 118 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6input_string_10808);
        _6ch_10810 = (object)*(((s1_ptr)_2)->base + _i_10935);
        if (!IS_ATOM_INT(_6ch_10810)){
            _6ch_10810 = (object)DBL_PTR(_6ch_10810)->dbl;
        }
        // SubProg read_comment pc: 124 op: STARTLINE (58)

        /** get.e:176				if ch='\n' or ch='\r' then*/
        // SubProg read_comment pc: 126 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 128 op: EQUALS (3)
        _6125 = (_6ch_10810 == 10);
        // SubProg read_comment pc: 132 op: SC1_OR_IF (147)
        if (_6125 != 0) {
            goto L9; // [132] 147
        }
        // SubProg read_comment pc: 136 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 138 op: EQUALS (3)
        _6127 = (_6ch_10810 == 13);
        // SubProg read_comment pc: 142 op: NOP1 (159)
        // SubProg read_comment pc: 143 op: IF (20)
        if (_6127 == 0)
        {
            DeRef(_6127);
            _6127 = NOVALUE;
            goto LA; // [143] 164
        }
        else{
            DeRef(_6127);
            _6127 = NOVALUE;
        }
        // SubProg read_comment pc: 146 op: NOP1 (159)
L9: // addr: 147 pc: 146 sub: 10918 op: 159
        // SubProg read_comment pc: 147 op: STARTLINE (58)

        /** get.e:177					string_next=i+1*/
        // SubProg read_comment pc: 149 op: PLUS1_I (117)
        _6string_next_10809 = _i_10935 + 1;
        // SubProg read_comment pc: 153 op: STARTLINE (58)

        /** get.e:178					return {GET_IGNORE, 0}*/
        // SubProg read_comment pc: 155 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = 0;
        _6129 = MAKE_SEQ(_1);
        // SubProg read_comment pc: 159 op: RETURNF (28)

// Exiting block BLOCK: read_comment
        DeRef(_6125);
        _6125 = NOVALUE;
        DeRef(_6121);
        _6121 = NOVALUE;
        DeRef(_6122);
        _6122 = NOVALUE;
        DeRef(_6117);
        _6117 = NOVALUE;
        DeRef(_6115);
        _6115 = NOVALUE;
        return _6129;
        // SubProg read_comment pc: 163 op: NOP1 (159)
LA: // addr: 164 pc: 163 sub: 10918 op: 159
        // SubProg read_comment pc: 164 op: STARTLINE (58)

        /** get.e:180			end for*/
        // SubProg read_comment pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_10935 = _i_10935 + 1;
        goto L7; // [166] 114
L8: // addr: 171 pc: 166 sub: 10918 op: 54
        ;
    }
    // SubProg read_comment pc: 171 op: STARTLINE (58)

    /** get.e:181			return {GET_EOF, 0}*/
    // SubProg read_comment pc: 173 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _6130 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 177 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_6125);
    _6125 = NOVALUE;
    DeRef(_6121);
    _6121 = NOVALUE;
    DeRef(_6122);
    _6122 = NOVALUE;
    DeRef(_6117);
    _6117 = NOVALUE;
    DeRef(_6129);
    _6129 = NOVALUE;
    DeRef(_6115);
    _6115 = NOVALUE;
    return _6130;
    // SubProg read_comment pc: 181 op: NOP1 (159)
L6: // addr: 182 pc: 181 sub: 10918 op: 159
    // SubProg read_comment pc: 182 op: BADRETURNF (43)
    ;
}


object _6get_number()
{
    object _sign_10947 = NOVALUE;
    object _e_sign_10948 = NOVALUE;
    object _ndigits_10949 = NOVALUE;
    object _hex_digit_10950 = NOVALUE;
    object _mantissa_10951 = NOVALUE;
    object _dec_10952 = NOVALUE;
    object _e_mag_10953 = NOVALUE;
    object _number_string_10954 = NOVALUE;
    object _6190 = NOVALUE; // 11034 6190
// skipping _6189  name type: 0
    object _6188 = NOVALUE; // 11031 6188
// skipping _6187  name type: 0
    object _6186 = NOVALUE; // 11028 6186
    object _6185 = NOVALUE; // 11027 6185
    object _6184 = NOVALUE; // 11026 6184
    object _6183 = NOVALUE; // 11024 6183
    object _6182 = NOVALUE; // 11023 6182
    object _6181 = NOVALUE; // 11022 6181
// skipping _6180  name type: 0
// skipping _6179  name type: 0
// skipping _6178  name type: 0
// skipping _6177  name type: 0
// skipping _6176  name type: 0
    object _6175 = NOVALUE; // 11013 6175
// skipping _6174  name type: 0
    object _6173 = NOVALUE; // 11011 6173
// skipping _6172  name type: 0
    object _6171 = NOVALUE; // 11008 6171
// skipping _6170  name type: 0
// skipping _6169  name type: 0
// skipping _6168  name type: 0
// skipping _6167  name type: 0
    object _6166 = NOVALUE; // 11002 6166
    object _6165 = NOVALUE; // 11001 6165
// skipping _6164  name type: 0
    object _6163 = NOVALUE; // 10999 6163
    object _6162 = NOVALUE; // 10998 6162
    object _6161 = NOVALUE; // 10997 6161
// skipping _6160  name type: 0
// skipping _6159  name type: 0
// skipping _6158  name type: 0
// skipping _6157  name type: 0
    object _6156 = NOVALUE; // 10990 6156
    object _6155 = NOVALUE; // 10989 6155
// skipping _6154  name type: 0
    object _6153 = NOVALUE; // 10987 6153
    object _6152 = NOVALUE; // 10986 6152
    object _6151 = NOVALUE; // 10985 6151
    object _6150 = NOVALUE; // 10983 6150
    object _6149 = NOVALUE; // 10981 6149
    object _6148 = NOVALUE; // 10980 6148
// skipping _6147  name type: 0
// skipping _6146  name type: 0
// skipping _6145  name type: 0
    object _6144 = NOVALUE; // 10974 6144
// skipping _6143  name type: 0
// skipping _6142  name type: 0
// skipping _6141  name type: 0
    object _6140 = NOVALUE; // 10969 6140
// skipping _6139  name type: 0
// skipping _6138  name type: 0
// skipping _6137  name type: 0
// skipping _6136  name type: 0
    object _6135 = NOVALUE; // 10961 6135
// skipping _6134  name type: 0
// skipping _6133  name type: 0
// skipping _6132  name type: 0
// skipping _6131  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_number pc: 1 op: STARTLINE (58)

    /** get.e:192		sequence number_string = { ch }*/
    // SubProg get_number pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 5 op: RIGHT_BRACE_N (31)
    _0 = _number_string_10954;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6ch_10810;
    _number_string_10954 = MAKE_SEQ(_1);
    DeRefi(_0);
    // SubProg get_number pc: 9 op: STARTLINE (58)

    /** get.e:194		sign = +1*/
    // SubProg get_number pc: 11 op: ASSIGN_I (113)
    _sign_10947 = 1;
    // SubProg get_number pc: 14 op: STARTLINE (58)

    /** get.e:195		mantissa = 0*/
    // SubProg get_number pc: 16 op: ASSIGN (18)
    DeRef(_mantissa_10951);
    _mantissa_10951 = 0;
    // SubProg get_number pc: 19 op: STARTLINE (58)

    /** get.e:196		ndigits = 0*/
    // SubProg get_number pc: 21 op: ASSIGN_I (113)
    _ndigits_10949 = 0;
    // SubProg get_number pc: 24 op: STARTLINE (58)

    /** get.e:199		if ch = '-' then*/
    // SubProg get_number pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 28 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 45)
    goto L1; // [28] 70
    // SubProg get_number pc: 32 op: STARTLINE (58)

    /** get.e:200			sign = -1*/
    // SubProg get_number pc: 34 op: ASSIGN_I (113)
    _sign_10947 = -1;
    // SubProg get_number pc: 37 op: STARTLINE (58)

    /** get.e:201			get_ch()*/
    // SubProg get_number pc: 39 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 41 op: STARTLINE (58)

    /** get.e:202			number_string &= ch*/
    // SubProg get_number pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 45 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 49 op: STARTLINE (58)

    /** get.e:203			if ch='-' then*/
    // SubProg get_number pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 53 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 45)
    goto L2; // [53] 92
    // SubProg get_number pc: 57 op: STARTLINE (58)

    /** get.e:204				return read_comment()*/
    // SubProg get_number pc: 59 op: PROC (27)
    _6135 = _6read_comment();
    // SubProg get_number pc: 62 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_10947

// block var ndigits_10949

// block var hex_digit_10950

// block var mantissa_10951

// block var dec_10952
    DeRef(_dec_10952);

// block var number_string_10954
    DeRefDSi(_number_string_10954);
    return _6135;
    // SubProg get_number pc: 66 op: NOP1 (159)
    // SubProg get_number pc: 67 op: ELSE (23)
    goto L2; // [67] 92
    // SubProg get_number pc: 69 op: NOP1 (159)
L1: // addr: 70 pc: 69 sub: 10945 op: 159
    // SubProg get_number pc: 70 op: STARTLINE (58)

    /** get.e:206		elsif ch = '+' then*/
    // SubProg get_number pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 74 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 43)
    goto L3; // [74] 91
    // SubProg get_number pc: 78 op: STARTLINE (58)

    /** get.e:207			get_ch()*/
    // SubProg get_number pc: 80 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 82 op: STARTLINE (58)

    /** get.e:208			number_string &= ch*/
    // SubProg get_number pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 86 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 90 op: NOP1 (159)
L3: // addr: 91 pc: 90 sub: 10945 op: 159
    // SubProg get_number pc: 91 op: NOP1 (159)
L2: // addr: 92 pc: 91 sub: 10945 op: 159
    // SubProg get_number pc: 92 op: STARTLINE (58)

    /** get.e:212		if ch = '#' then*/
    // SubProg get_number pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 96 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 35)
    goto L4; // [96] 210
    // SubProg get_number pc: 100 op: STARTLINE (58)

    /** get.e:214			get_ch()*/
    // SubProg get_number pc: 102 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 104 op: STARTLINE (58)

    /** get.e:215			number_string &= ch*/
    // SubProg get_number pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 108 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 112 op: STARTLINE (58)

    /** get.e:216			while TRUE do*/
    // SubProg get_number pc: 114 op: NOP2 (110)
    // SubProg get_number pc: 116 op: NOPWHILE (158)
L5: // addr: 117 pc: 116 sub: 10945 op: 158
    // SubProg get_number pc: 117 op: STARTLINE (58)

    /** get.e:217				hex_digit = find(ch, HEX_DIGITS)-1*/
    // SubProg get_number pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 123 op: FIND_FROM (176)
    _6140 = find_from(_6ch_10810, _6HEX_DIGITS_10790, 1);
    // SubProg get_number pc: 128 op: MINUS_I (116)
    _hex_digit_10950 = _6140 - 1;
    _6140 = NOVALUE;
    // SubProg get_number pc: 132 op: STARTLINE (58)

    /** get.e:218				if hex_digit >= 0 then*/
    // SubProg get_number pc: 134 op: GREATEREQ_IFW_I (120)
    if (_hex_digit_10950 < 0)
    goto L6; // [134] 169
    // SubProg get_number pc: 138 op: STARTLINE (58)

    /** get.e:219					ndigits += 1*/
    // SubProg get_number pc: 140 op: PLUS1_I (117)
    _ndigits_10949 = _ndigits_10949 + 1;
    // SubProg get_number pc: 144 op: STARTLINE (58)

    /** get.e:220					mantissa = mantissa * 16 + hex_digit*/
    // SubProg get_number pc: 146 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_10951)) {
        if (_mantissa_10951 == (short)_mantissa_10951){
            _6144 = _mantissa_10951 * 16;
        }
        else{
            _6144 = NewDouble(_mantissa_10951 * (eudouble)16);
        }
    }
    else {
        _6144 = NewDouble(DBL_PTR(_mantissa_10951)->dbl * (eudouble)16);
    }
    // SubProg get_number pc: 150 op: PLUS (11)
    DeRef(_mantissa_10951);
    if (IS_ATOM_INT(_6144)) {
        _mantissa_10951 = _6144 + _hex_digit_10950;
        if ((object)((uintptr_t)_mantissa_10951 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_10951 = NewDouble((eudouble)_mantissa_10951);
        }
    }
    else {
        _mantissa_10951 = NewDouble(DBL_PTR(_6144)->dbl + (eudouble)_hex_digit_10950);
    }
    DeRef(_6144);
    _6144 = NOVALUE;
    // SubProg get_number pc: 154 op: STARTLINE (58)

    /** get.e:221					get_ch()*/
    // SubProg get_number pc: 156 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 158 op: STARTLINE (58)

    /** get.e:222					number_string &= ch*/
    // SubProg get_number pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 162 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 166 op: ELSE (23)
    goto L5; // [166] 117
    // SubProg get_number pc: 168 op: NOP1 (159)
L6: // addr: 169 pc: 168 sub: 10945 op: 159
    // SubProg get_number pc: 169 op: STARTLINE (58)

    /** get.e:224					if ndigits > 0 then*/
    // SubProg get_number pc: 171 op: GREATER_IFW_I (124)
    if (_ndigits_10949 <= 0)
    goto L7; // [171] 192
    // SubProg get_number pc: 175 op: STARTLINE (58)

    /** get.e:225						return {GET_SUCCESS, sign * mantissa}*/
    // SubProg get_number pc: 177 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_10951)) {
        if (_sign_10947 == (short)_sign_10947 && _mantissa_10951 <= INT15 && _mantissa_10951 >= -INT15){
            _6148 = _sign_10947 * _mantissa_10951;
        }
        else{
            _6148 = NewDouble(_sign_10947 * (eudouble)_mantissa_10951);
        }
    }
    else {
        _6148 = NewDouble((eudouble)_sign_10947 * DBL_PTR(_mantissa_10951)->dbl);
    }
    // SubProg get_number pc: 181 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _6148;
    _6149 = MAKE_SEQ(_1);
    _6148 = NOVALUE;
    // SubProg get_number pc: 185 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_10947

// block var ndigits_10949

// block var hex_digit_10950

// block var mantissa_10951
    DeRef(_mantissa_10951);

// block var dec_10952
    DeRef(_dec_10952);

// block var number_string_10954
    DeRefi(_number_string_10954);
    DeRef(_6135);
    _6135 = NOVALUE;
    return _6149;
    // SubProg get_number pc: 189 op: ELSE (23)
    goto L5; // [189] 117
    // SubProg get_number pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 10945 op: 159
    // SubProg get_number pc: 192 op: STARTLINE (58)

    /** get.e:227						return {GET_FAIL, 0}*/
    // SubProg get_number pc: 194 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6150 = MAKE_SEQ(_1);
    // SubProg get_number pc: 198 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_10947

// block var ndigits_10949

// block var hex_digit_10950

// block var mantissa_10951
    DeRef(_mantissa_10951);

// block var dec_10952
    DeRef(_dec_10952);

// block var number_string_10954
    DeRefi(_number_string_10954);
    DeRef(_6149);
    _6149 = NOVALUE;
    DeRef(_6135);
    _6135 = NOVALUE;
    return _6150;
    // SubProg get_number pc: 202 op: NOP1 (159)
    // SubProg get_number pc: 203 op: NOP1 (159)
    // SubProg get_number pc: 204 op: STARTLINE (58)

    /** get.e:230			end while*/
    // SubProg get_number pc: 206 op: ENDWHILE (22)
    goto L5; // [206] 117
    // SubProg get_number pc: 208 op: NOP1 (159)
    // SubProg get_number pc: 209 op: NOP1 (159)
L4: // addr: 210 pc: 209 sub: 10945 op: 159
    // SubProg get_number pc: 210 op: STARTLINE (58)

    /** get.e:234		while ch >= '0' and ch <= '9' do*/
    // SubProg get_number pc: 212 op: NOP2 (110)
    // SubProg get_number pc: 214 op: NOPWHILE (158)
L8: // addr: 215 pc: 214 sub: 10945 op: 158
    // SubProg get_number pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 217 op: GREATEREQ (2)
    _6151 = (_6ch_10810 >= 48);
    // SubProg get_number pc: 221 op: SC1_AND_IF (146)
    if (_6151 == 0) {
        goto L9; // [221] 274
    }
    // SubProg get_number pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 227 op: LESSEQ (5)
    _6153 = (_6ch_10810 <= 57);
    // SubProg get_number pc: 231 op: NOP1 (159)
    // SubProg get_number pc: 232 op: WHILE (47)
    if (_6153 == 0)
    {
        DeRef(_6153);
        _6153 = NOVALUE;
        goto L9; // [232] 274
    }
    else{
        DeRef(_6153);
        _6153 = NOVALUE;
    }
    // SubProg get_number pc: 235 op: STARTLINE (58)

    /** get.e:235			ndigits += 1*/
    // SubProg get_number pc: 237 op: PLUS1_I (117)
    _ndigits_10949 = _ndigits_10949 + 1;
    // SubProg get_number pc: 241 op: STARTLINE (58)

    /** get.e:236			mantissa = mantissa * 10 + (ch - '0')*/
    // SubProg get_number pc: 243 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_10951)) {
        if (_mantissa_10951 == (short)_mantissa_10951){
            _6155 = _mantissa_10951 * 10;
        }
        else{
            _6155 = NewDouble(_mantissa_10951 * (eudouble)10);
        }
    }
    else {
        _6155 = NewDouble(DBL_PTR(_mantissa_10951)->dbl * (eudouble)10);
    }
    // SubProg get_number pc: 247 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 249 op: MINUS (10)
    _6156 = _6ch_10810 - 48;
    if ((object)((uintptr_t)_6156 +(uintptr_t) HIGH_BITS) >= 0){
        _6156 = NewDouble((eudouble)_6156);
    }
    // SubProg get_number pc: 253 op: PLUS (11)
    DeRef(_mantissa_10951);
    if (IS_ATOM_INT(_6155) && IS_ATOM_INT(_6156)) {
        _mantissa_10951 = _6155 + _6156;
        if ((object)((uintptr_t)_mantissa_10951 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_10951 = NewDouble((eudouble)_mantissa_10951);
        }
    }
    else {
        if (IS_ATOM_INT(_6155)) {
            _mantissa_10951 = NewDouble((eudouble)_6155 + DBL_PTR(_6156)->dbl);
        }
        else {
            if (IS_ATOM_INT(_6156)) {
                _mantissa_10951 = NewDouble(DBL_PTR(_6155)->dbl + (eudouble)_6156);
            }
            else
            _mantissa_10951 = NewDouble(DBL_PTR(_6155)->dbl + DBL_PTR(_6156)->dbl);
        }
    }
    DeRef(_6155);
    _6155 = NOVALUE;
    DeRef(_6156);
    _6156 = NOVALUE;
    // SubProg get_number pc: 257 op: STARTLINE (58)

    /** get.e:237			get_ch()*/
    // SubProg get_number pc: 259 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 261 op: STARTLINE (58)

    /** get.e:238			number_string &= ch*/
    // SubProg get_number pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 265 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 269 op: STARTLINE (58)

    /** get.e:239		end while*/
    // SubProg get_number pc: 271 op: ENDWHILE (22)
    goto L8; // [271] 215
    // SubProg get_number pc: 273 op: NOP1 (159)
L9: // addr: 274 pc: 273 sub: 10945 op: 159
    // SubProg get_number pc: 274 op: STARTLINE (58)

    /** get.e:241		if ch = '.' then*/
    // SubProg get_number pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 278 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 46)
    goto LA; // [278] 370
    // SubProg get_number pc: 282 op: STARTLINE (58)

    /** get.e:243			get_ch()*/
    // SubProg get_number pc: 284 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 286 op: STARTLINE (58)

    /** get.e:244			number_string &= ch*/
    // SubProg get_number pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 290 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 294 op: STARTLINE (58)

    /** get.e:245			dec = 10*/
    // SubProg get_number pc: 296 op: ASSIGN (18)
    DeRef(_dec_10952);
    _dec_10952 = 10;
    // SubProg get_number pc: 299 op: STARTLINE (58)

    /** get.e:246			while ch >= '0' and ch <= '9' do*/
    // SubProg get_number pc: 301 op: NOP2 (110)
    // SubProg get_number pc: 303 op: NOPWHILE (158)
LB: // addr: 304 pc: 303 sub: 10945 op: 158
    // SubProg get_number pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 306 op: GREATEREQ (2)
    _6161 = (_6ch_10810 >= 48);
    // SubProg get_number pc: 310 op: SC1_AND_IF (146)
    if (_6161 == 0) {
        goto LC; // [310] 369
    }
    // SubProg get_number pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 316 op: LESSEQ (5)
    _6163 = (_6ch_10810 <= 57);
    // SubProg get_number pc: 320 op: NOP1 (159)
    // SubProg get_number pc: 321 op: WHILE (47)
    if (_6163 == 0)
    {
        DeRef(_6163);
        _6163 = NOVALUE;
        goto LC; // [321] 369
    }
    else{
        DeRef(_6163);
        _6163 = NOVALUE;
    }
    // SubProg get_number pc: 324 op: STARTLINE (58)

    /** get.e:247				ndigits += 1*/
    // SubProg get_number pc: 326 op: PLUS1_I (117)
    _ndigits_10949 = _ndigits_10949 + 1;
    // SubProg get_number pc: 330 op: STARTLINE (58)

    /** get.e:248				mantissa += (ch - '0') / dec*/
    // SubProg get_number pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 334 op: MINUS (10)
    _6165 = _6ch_10810 - 48;
    if ((object)((uintptr_t)_6165 +(uintptr_t) HIGH_BITS) >= 0){
        _6165 = NewDouble((eudouble)_6165);
    }
    // SubProg get_number pc: 338 op: DIVIDE (14)
    if (IS_ATOM_INT(_6165) && IS_ATOM_INT(_dec_10952)) {
        _6166 = (_6165 % _dec_10952) ? NewDouble((eudouble)_6165 / _dec_10952) : (_6165 / _dec_10952);
    }
    else {
        if (IS_ATOM_INT(_6165)) {
            _6166 = NewDouble((eudouble)_6165 / DBL_PTR(_dec_10952)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_10952)) {
                _6166 = NewDouble(DBL_PTR(_6165)->dbl / (eudouble)_dec_10952);
            }
            else
            _6166 = NewDouble(DBL_PTR(_6165)->dbl / DBL_PTR(_dec_10952)->dbl);
        }
    }
    DeRef(_6165);
    _6165 = NOVALUE;
    // SubProg get_number pc: 342 op: PLUS (11)
    _0 = _mantissa_10951;
    if (IS_ATOM_INT(_mantissa_10951) && IS_ATOM_INT(_6166)) {
        _mantissa_10951 = _mantissa_10951 + _6166;
        if ((object)((uintptr_t)_mantissa_10951 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_10951 = NewDouble((eudouble)_mantissa_10951);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_10951)) {
            _mantissa_10951 = NewDouble((eudouble)_mantissa_10951 + DBL_PTR(_6166)->dbl);
        }
        else {
            if (IS_ATOM_INT(_6166)) {
                _mantissa_10951 = NewDouble(DBL_PTR(_mantissa_10951)->dbl + (eudouble)_6166);
            }
            else
            _mantissa_10951 = NewDouble(DBL_PTR(_mantissa_10951)->dbl + DBL_PTR(_6166)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_6166);
    _6166 = NOVALUE;
    // SubProg get_number pc: 346 op: STARTLINE (58)

    /** get.e:249				dec *= 10*/
    // SubProg get_number pc: 348 op: MULTIPLY (13)
    _0 = _dec_10952;
    if (IS_ATOM_INT(_dec_10952)) {
        if (_dec_10952 == (short)_dec_10952){
            _dec_10952 = _dec_10952 * 10;
        }
        else{
            _dec_10952 = NewDouble(_dec_10952 * (eudouble)10);
        }
    }
    else {
        _dec_10952 = NewDouble(DBL_PTR(_dec_10952)->dbl * (eudouble)10);
    }
    DeRef(_0);
    // SubProg get_number pc: 352 op: STARTLINE (58)

    /** get.e:250				get_ch()*/
    // SubProg get_number pc: 354 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 356 op: STARTLINE (58)

    /** get.e:251				number_string &= ch*/
    // SubProg get_number pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 360 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 364 op: STARTLINE (58)

    /** get.e:252			end while*/
    // SubProg get_number pc: 366 op: ENDWHILE (22)
    goto LB; // [366] 304
    // SubProg get_number pc: 368 op: NOP1 (159)
LC: // addr: 369 pc: 368 sub: 10945 op: 159
    // SubProg get_number pc: 369 op: NOP1 (159)
LA: // addr: 370 pc: 369 sub: 10945 op: 159
    // SubProg get_number pc: 370 op: STARTLINE (58)

    /** get.e:255		if ndigits = 0 then*/
    // SubProg get_number pc: 372 op: EQUALS_IFW_I (121)
    if (_ndigits_10949 != 0)
    goto LD; // [372] 387
    // SubProg get_number pc: 376 op: STARTLINE (58)

    /** get.e:256			return {GET_FAIL, 0}*/
    // SubProg get_number pc: 378 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6171 = MAKE_SEQ(_1);
    // SubProg get_number pc: 382 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_10947

// block var ndigits_10949

// block var hex_digit_10950

// block var mantissa_10951
    DeRef(_mantissa_10951);

// block var dec_10952
    DeRef(_dec_10952);

// block var number_string_10954
    DeRefi(_number_string_10954);
    DeRef(_6149);
    _6149 = NOVALUE;
    DeRef(_6135);
    _6135 = NOVALUE;
    DeRef(_6161);
    _6161 = NOVALUE;
    DeRef(_6150);
    _6150 = NOVALUE;
    DeRef(_6151);
    _6151 = NOVALUE;
    return _6171;
    // SubProg get_number pc: 386 op: NOP1 (159)
LD: // addr: 387 pc: 386 sub: 10945 op: 159
    // SubProg get_number pc: 387 op: STARTLINE (58)

    /** get.e:259		mantissa = sign * mantissa*/
    // SubProg get_number pc: 389 op: MULTIPLY (13)
    _0 = _mantissa_10951;
    if (IS_ATOM_INT(_mantissa_10951)) {
        if (_sign_10947 == (short)_sign_10947 && _mantissa_10951 <= INT15 && _mantissa_10951 >= -INT15){
            _mantissa_10951 = _sign_10947 * _mantissa_10951;
        }
        else{
            _mantissa_10951 = NewDouble(_sign_10947 * (eudouble)_mantissa_10951);
        }
    }
    else {
        _mantissa_10951 = NewDouble((eudouble)_sign_10947 * DBL_PTR(_mantissa_10951)->dbl);
    }
    DeRef(_0);
    // SubProg get_number pc: 393 op: STARTLINE (58)

    /** get.e:261		if ch = 'e' or ch = 'E' then*/
    // SubProg get_number pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 397 op: EQUALS (3)
    _6173 = (_6ch_10810 == 101);
    // SubProg get_number pc: 401 op: SC1_OR_IF (147)
    if (_6173 != 0) {
        goto LE; // [401] 416
    }
    // SubProg get_number pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 407 op: EQUALS (3)
    _6175 = (_6ch_10810 == 69);
    // SubProg get_number pc: 411 op: NOP1 (159)
    // SubProg get_number pc: 412 op: IF (20)
    if (_6175 == 0)
    {
        DeRef(_6175);
        _6175 = NOVALUE;
        goto LF; // [412] 565
    }
    else{
        DeRef(_6175);
        _6175 = NOVALUE;
    }
    // SubProg get_number pc: 415 op: NOP1 (159)
LE: // addr: 416 pc: 415 sub: 10945 op: 159
    // SubProg get_number pc: 416 op: STARTLINE (58)

    /** get.e:264			get_ch()*/
    // SubProg get_number pc: 418 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 420 op: STARTLINE (58)

    /** get.e:265			number_string &= ch*/
    // SubProg get_number pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 424 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 428 op: STARTLINE (58)

    /** get.e:266			if ch = '-' then*/
    // SubProg get_number pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 432 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 45)
    goto L10; // [432] 451
    // SubProg get_number pc: 436 op: STARTLINE (58)

    /** get.e:267				get_ch()*/
    // SubProg get_number pc: 438 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 440 op: STARTLINE (58)

    /** get.e:268				number_string &= ch*/
    // SubProg get_number pc: 442 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 444 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 448 op: ELSE (23)
    goto L11; // [448] 473
    // SubProg get_number pc: 450 op: NOP1 (159)
L10: // addr: 451 pc: 450 sub: 10945 op: 159
    // SubProg get_number pc: 451 op: STARTLINE (58)

    /** get.e:269			elsif ch = '+' then*/
    // SubProg get_number pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 455 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 43)
    goto L12; // [455] 472
    // SubProg get_number pc: 459 op: STARTLINE (58)

    /** get.e:270				get_ch()*/
    // SubProg get_number pc: 461 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 463 op: STARTLINE (58)

    /** get.e:271				number_string &= ch*/
    // SubProg get_number pc: 465 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 467 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 471 op: NOP1 (159)
L12: // addr: 472 pc: 471 sub: 10945 op: 159
    // SubProg get_number pc: 472 op: NOP1 (159)
L11: // addr: 473 pc: 472 sub: 10945 op: 159
    // SubProg get_number pc: 473 op: STARTLINE (58)

    /** get.e:275			if ch >= '0' and ch <= '9' then*/
    // SubProg get_number pc: 475 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 477 op: GREATEREQ (2)
    _6181 = (_6ch_10810 >= 48);
    // SubProg get_number pc: 481 op: SC1_AND_IF (146)
    if (_6181 == 0) {
        goto L13; // [481] 546
    }
    // SubProg get_number pc: 485 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 487 op: LESSEQ (5)
    _6183 = (_6ch_10810 <= 57);
    // SubProg get_number pc: 491 op: NOP1 (159)
    // SubProg get_number pc: 492 op: IF (20)
    if (_6183 == 0)
    {
        DeRef(_6183);
        _6183 = NOVALUE;
        goto L13; // [492] 546
    }
    else{
        DeRef(_6183);
        _6183 = NOVALUE;
    }
    // SubProg get_number pc: 495 op: STARTLINE (58)

    /** get.e:277				while ch >= '0' and ch <= '9' with entry do*/
    // SubProg get_number pc: 497 op: ELSE (23)
    goto L14; // [497] 534
    // SubProg get_number pc: 499 op: NOPWHILE (158)
L15: // addr: 500 pc: 499 sub: 10945 op: 158
    // SubProg get_number pc: 500 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 502 op: GREATEREQ (2)
    _6184 = (_6ch_10810 >= 48);
    // SubProg get_number pc: 506 op: SC1_AND (141)
    if (_6184 == 0) {
        DeRef(_6185);
        _6185 = 0;
        goto L16; // [506] 520
    }
    // SubProg get_number pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 512 op: LESSEQ (5)
    _6186 = (_6ch_10810 <= 57);
    // SubProg get_number pc: 516 op: SC2_AND (142)
    _6185 = (_6186 != 0);
    // SubProg get_number pc: 519 op: NOP1 (159)
L16: // addr: 520 pc: 519 sub: 10945 op: 159
    // SubProg get_number pc: 520 op: WHILE (47)
    if (_6185 == 0)
    {
        _6185 = NOVALUE;
        goto L17; // [520] 557
    }
    else{
        _6185 = NOVALUE;
    }
    // SubProg get_number pc: 523 op: STARTLINE (58)

    /** get.e:278					number_string &= ch*/
    // SubProg get_number pc: 525 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 527 op: CONCAT (15)
    Append(&_number_string_10954, _number_string_10954, _6ch_10810);
    // SubProg get_number pc: 531 op: STARTLINE (58)

    /** get.e:279				entry*/
    // SubProg get_number pc: 533 op: NOP1 (159)
L14: // addr: 534 pc: 533 sub: 10945 op: 159
    // SubProg get_number pc: 534 op: STARTLINE (58)

    /** get.e:280					get_ch()*/
    // SubProg get_number pc: 536 op: PROC (27)
    _6get_ch();
    // SubProg get_number pc: 538 op: STARTLINE (58)

    /** get.e:281				end while*/
    // SubProg get_number pc: 540 op: ENDWHILE (22)
    goto L15; // [540] 500
    // SubProg get_number pc: 542 op: NOP1 (159)
    // SubProg get_number pc: 543 op: ELSE (23)
    goto L17; // [543] 557
    // SubProg get_number pc: 545 op: NOP1 (159)
L13: // addr: 546 pc: 545 sub: 10945 op: 159
    // SubProg get_number pc: 546 op: STARTLINE (58)

    /** get.e:283				return {GET_FAIL, 0} -- no exponent*/
    // SubProg get_number pc: 548 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6188 = MAKE_SEQ(_1);
    // SubProg get_number pc: 552 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_10947

// block var ndigits_10949

// block var hex_digit_10950

// block var mantissa_10951
    DeRef(_mantissa_10951);

// block var dec_10952
    DeRef(_dec_10952);

// block var number_string_10954
    DeRefi(_number_string_10954);
    DeRef(_6173);
    _6173 = NOVALUE;
    DeRef(_6186);
    _6186 = NOVALUE;
    DeRef(_6149);
    _6149 = NOVALUE;
    DeRef(_6181);
    _6181 = NOVALUE;
    DeRef(_6135);
    _6135 = NOVALUE;
    DeRef(_6171);
    _6171 = NOVALUE;
    DeRef(_6161);
    _6161 = NOVALUE;
    DeRef(_6150);
    _6150 = NOVALUE;
    DeRef(_6151);
    _6151 = NOVALUE;
    DeRef(_6184);
    _6184 = NOVALUE;
    return _6188;
    // SubProg get_number pc: 556 op: NOP1 (159)
L17: // addr: 557 pc: 556 sub: 10945 op: 159
    // SubProg get_number pc: 557 op: STARTLINE (58)

    /** get.e:286			mantissa = scientific_to_atom( number_string )*/
    // SubProg get_number pc: 559 op: PROC (27)
    RefDS(_number_string_10954);
    _0 = _mantissa_10951;
    _mantissa_10951 = _28scientific_to_atom(_number_string_10954, 1);
    DeRef(_0);
    // SubProg get_number pc: 564 op: NOP1 (159)
LF: // addr: 565 pc: 564 sub: 10945 op: 159
    // SubProg get_number pc: 565 op: STARTLINE (58)

    /** get.e:289		return {GET_SUCCESS, mantissa}*/
    // SubProg get_number pc: 567 op: RIGHT_BRACE_2 (85)
    Ref(_mantissa_10951);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _mantissa_10951;
    _6190 = MAKE_SEQ(_1);
    // SubProg get_number pc: 571 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_10947

// block var ndigits_10949

// block var hex_digit_10950

// block var mantissa_10951
    DeRef(_mantissa_10951);

// block var dec_10952
    DeRef(_dec_10952);

// block var number_string_10954
    DeRefi(_number_string_10954);
    DeRef(_6173);
    _6173 = NOVALUE;
    DeRef(_6188);
    _6188 = NOVALUE;
    DeRef(_6186);
    _6186 = NOVALUE;
    DeRef(_6149);
    _6149 = NOVALUE;
    DeRef(_6181);
    _6181 = NOVALUE;
    DeRef(_6135);
    _6135 = NOVALUE;
    DeRef(_6171);
    _6171 = NOVALUE;
    DeRef(_6161);
    _6161 = NOVALUE;
    DeRef(_6150);
    _6150 = NOVALUE;
    DeRef(_6151);
    _6151 = NOVALUE;
    DeRef(_6184);
    _6184 = NOVALUE;
    return _6190;
    // SubProg get_number pc: 575 op: BADRETURNF (43)
    ;
}


object _6Get()
{
    object _skip_blanks_1__tmp_at328_11081 = NOVALUE;
    object _skip_blanks_1__tmp_at177_11062 = NOVALUE;
    object _skip_blanks_1__tmp_at88_11053 = NOVALUE;
    object _s_11037 = NOVALUE;
    object _e_11038 = NOVALUE;
    object _e1_11039 = NOVALUE;
    object _6229 = NOVALUE; // 11107 6229
    object _6228 = NOVALUE; // 11105 6228
// skipping _6227  name type: 0
    object _6226 = NOVALUE; // 11102 6226
// skipping _6224  name type: 0
    object _6223 = NOVALUE; // 11098 6223
// skipping _6222  name type: 0
    object _6221 = NOVALUE; // 11095 6221
// skipping _6220  name type: 0
    object _6219 = NOVALUE; // 11092 6219
// skipping _6218  name type: 0
    object _6217 = NOVALUE; // 11090 6217
// skipping _6216  name type: 0
// skipping _6215  name type: 0
    object _6214 = NOVALUE; // 11084 6214
// skipping _6213  name type: 0
    object _6212 = NOVALUE; // 11078 6212
// skipping _6211  name type: 0
// skipping _6210  name type: 0
// skipping _6209  name type: 0
    object _6208 = NOVALUE; // 11072 6208
// skipping _6207  name type: 0
// skipping _6206  name type: 0
// skipping _6205  name type: 0
    object _6204 = NOVALUE; // 11065 6204
// skipping _6203  name type: 0
// skipping _6202  name type: 0
    object _6201 = NOVALUE; // 11058 6201
    object _6200 = NOVALUE; // 11057 6200
// skipping _6199  name type: 0
    object _6198 = NOVALUE; // 11055 6198
// skipping _6197  name type: 0
    object _6196 = NOVALUE; // 11050 6196
// skipping _6195  name type: 0
    object _6194 = NOVALUE; // 11047 6194
    object _6193 = NOVALUE; // 11044 6193
// skipping _6192  name type: 0
    object _6191 = NOVALUE; // 11041 6191
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Get pc: 1 op: STARTLINE (58)

    /** get.e:300		while find(ch, white_space) do*/
    // SubProg Get pc: 3 op: NOP2 (110)
    // SubProg Get pc: 5 op: NOPWHILE (158)
L1: // addr: 6 pc: 5 sub: 11035 op: 158
    // SubProg Get pc: 6 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 8 op: FIND_FROM (176)
    _6191 = find_from(_6ch_10810, _6white_space_10826, 1);
    // SubProg Get pc: 13 op: WHILE (47)
    if (_6191 == 0)
    {
        _6191 = NOVALUE;
        goto L2; // [13] 25
    }
    else{
        _6191 = NOVALUE;
    }
    // SubProg Get pc: 16 op: STARTLINE (58)

    /** get.e:301			get_ch()*/
    // SubProg Get pc: 18 op: PROC (27)
    _6get_ch();
    // SubProg Get pc: 20 op: STARTLINE (58)

    /** get.e:302		end while*/
    // SubProg Get pc: 22 op: ENDWHILE (22)
    goto L1; // [22] 6
    // SubProg Get pc: 24 op: NOP1 (159)
L2: // addr: 25 pc: 24 sub: 11035 op: 159
    // SubProg Get pc: 25 op: STARTLINE (58)

    /** get.e:304		if ch = -1 then -- string is made of whitespace only*/
    // SubProg Get pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 29 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != -1)
    goto L3; // [29] 44
    // SubProg Get pc: 33 op: STARTLINE (58)

    /** get.e:305			return {GET_EOF, 0}*/
    // SubProg Get pc: 35 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _6193 = MAKE_SEQ(_1);
    // SubProg Get pc: 39 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    return _6193;
    // SubProg Get pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 11035 op: 159
    // SubProg Get pc: 44 op: STARTLINE (58)

    /** get.e:308		while 1 do*/
    // SubProg Get pc: 46 op: NOP2 (110)
    // SubProg Get pc: 48 op: NOPWHILE (158)
L4: // addr: 49 pc: 48 sub: 11035 op: 158
    // SubProg Get pc: 49 op: STARTLINE (58)

    /** get.e:309			if find(ch, START_NUMERIC) then*/
    // SubProg Get pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 55 op: FIND_FROM (176)
    _6194 = find_from(_6ch_10810, _6START_NUMERIC_10793, 1);
    // SubProg Get pc: 60 op: IF (20)
    if (_6194 == 0)
    {
        _6194 = NOVALUE;
        goto L5; // [60] 157
    }
    else{
        _6194 = NOVALUE;
    }
    // SubProg Get pc: 63 op: STARTLINE (58)

    /** get.e:310				e = get_number()*/
    // SubProg Get pc: 65 op: PROC (27)
    _0 = _e_11038;
    _e_11038 = _6get_number();
    DeRef(_0);
    // SubProg Get pc: 68 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 70 op: STARTLINE (58)

    /** get.e:311				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    // SubProg Get pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_11038);
    _6196 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get pc: 76 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _6196, -2)){
        _6196 = NOVALUE;
        goto L6; // [76] 87
    }
    _6196 = NOVALUE;
    // SubProg Get pc: 80 op: STARTLINE (58)

    /** get.e:312					return e*/
    // SubProg Get pc: 82 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e1_11039
    DeRef(_6193);
    _6193 = NOVALUE;
    return _e_11038;
    // SubProg Get pc: 86 op: NOP1 (159)
L6: // addr: 87 pc: 86 sub: 11035 op: 159
    // SubProg Get pc: 87 op: STARTLINE (58)

    /** get.e:314				skip_blanks()*/
    // SubProg Get pc: 89 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 91 op: NOP2 (110)
    // SubProg Get pc: 93 op: NOPWHILE (158)
L7: // addr: 94 pc: 93 sub: 11035 op: 158
    // SubProg Get pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 96 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at88_11053 = find_from(_6ch_10810, _6white_space_10826, 1);
    // SubProg Get pc: 101 op: WHILE (47)
    if (_skip_blanks_1__tmp_at88_11053 == 0)
    {
        goto L8; // [101] 118
    }
    else{
    }
    // SubProg Get pc: 104 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 106 op: PROC (27)
    _6get_ch();
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
L8: // addr: 118 pc: 117 sub: 11035 op: 159
    // SubProg Get pc: 118 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 88

// block var skip_blanks_1__tmp_at88_11053
    // SubProg Get pc: 120 op: STARTLINE (58)

    /** get.e:315				if ch=-1 or ch='}' then -- '}' is expected only in the "{--\n}" case*/
    // SubProg Get pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 124 op: EQUALS (3)
    _6198 = (_6ch_10810 == -1);
    // SubProg Get pc: 128 op: SC1_OR_IF (147)
    if (_6198 != 0) {
        goto L9; // [128] 143
    }
    // SubProg Get pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 134 op: EQUALS (3)
    _6200 = (_6ch_10810 == 125);
    // SubProg Get pc: 138 op: NOP1 (159)
    // SubProg Get pc: 139 op: IF (20)
    if (_6200 == 0)
    {
        DeRef(_6200);
        _6200 = NOVALUE;
        goto L4; // [139] 49
    }
    else{
        DeRef(_6200);
        _6200 = NOVALUE;
    }
    // SubProg Get pc: 142 op: NOP1 (159)
L9: // addr: 143 pc: 142 sub: 11035 op: 159
    // SubProg Get pc: 143 op: STARTLINE (58)

    /** get.e:316					return {GET_NOTHING, 0} -- just a comment*/
    // SubProg Get pc: 145 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _6201 = MAKE_SEQ(_1);
    // SubProg Get pc: 149 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6201;
    // SubProg Get pc: 153 op: NOP1 (159)
    // SubProg Get pc: 154 op: ELSE (23)
    goto L4; // [154] 49
    // SubProg Get pc: 156 op: NOP1 (159)
L5: // addr: 157 pc: 156 sub: 11035 op: 159
    // SubProg Get pc: 157 op: STARTLINE (58)

    /** get.e:318			elsif ch = '{' then*/
    // SubProg Get pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 161 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 123)
    goto LA; // [161] 465
    // SubProg Get pc: 165 op: STARTLINE (58)

    /** get.e:320				s = {}*/
    // SubProg Get pc: 167 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_s_11037);
    _s_11037 = _5;
    // SubProg Get pc: 170 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 172 op: STARTLINE (58)

    /** get.e:321				get_ch()*/
    // SubProg Get pc: 174 op: PROC (27)
    _6get_ch();
    // SubProg Get pc: 176 op: STARTLINE (58)

    /** get.e:322				skip_blanks()*/
    // SubProg Get pc: 178 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 180 op: NOP2 (110)
    // SubProg Get pc: 182 op: NOPWHILE (158)
LB: // addr: 183 pc: 182 sub: 11035 op: 158
    // SubProg Get pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 185 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at177_11062 = find_from(_6ch_10810, _6white_space_10826, 1);
    // SubProg Get pc: 190 op: WHILE (47)
    if (_skip_blanks_1__tmp_at177_11062 == 0)
    {
        goto LC; // [190] 207
    }
    else{
    }
    // SubProg Get pc: 193 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 195 op: PROC (27)
    _6get_ch();
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
LC: // addr: 207 pc: 206 sub: 11035 op: 159
    // SubProg Get pc: 207 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 177

// block var skip_blanks_1__tmp_at177_11062
    // SubProg Get pc: 209 op: STARTLINE (58)

    /** get.e:323				if ch = '}' then -- empty sequence*/
    // SubProg Get pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 213 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 125)
    goto LD; // [213] 232
    // SubProg Get pc: 217 op: STARTLINE (58)

    /** get.e:324					get_ch()*/
    // SubProg Get pc: 219 op: PROC (27)
    _6get_ch();
    // SubProg Get pc: 221 op: STARTLINE (58)

    /** get.e:325					return {GET_SUCCESS, s} -- empty sequence*/
    // SubProg Get pc: 223 op: RIGHT_BRACE_2 (85)
    RefDS(_s_11037);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_11037;
    _6204 = MAKE_SEQ(_1);
    // SubProg Get pc: 227 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRefDS(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6204;
    // SubProg Get pc: 231 op: NOP1 (159)
LD: // addr: 232 pc: 231 sub: 11035 op: 159
    // SubProg Get pc: 232 op: STARTLINE (58)

    /** get.e:328				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
    // SubProg Get pc: 234 op: NOP2 (110)
    // SubProg Get pc: 236 op: NOPWHILE (158)
LE: // addr: 237 pc: 236 sub: 11035 op: 158
    // SubProg Get pc: 237 op: STARTLINE (58)

    /** get.e:329					while 1 do -- read zero or more comments and an element*/
    // SubProg Get pc: 239 op: NOP2 (110)
    // SubProg Get pc: 241 op: NOPWHILE (158)
LF: // addr: 242 pc: 241 sub: 11035 op: 158
    // SubProg Get pc: 242 op: STARTLINE (58)

    /** get.e:330						e = Get() -- read next element, using standard function*/
    // SubProg Get pc: 244 op: PROC (27)
    _0 = _e_11038;
    _e_11038 = _6Get();
    DeRef(_0);
    // SubProg Get pc: 247 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 249 op: STARTLINE (58)

    /** get.e:331						e1 = e[1]*/
    // SubProg Get pc: 251 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_e_11038);
    _e1_11039 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_11039))
    _e1_11039 = (object)DBL_PTR(_e1_11039)->dbl;
    // SubProg Get pc: 255 op: STARTLINE (58)

    /** get.e:332						if e1 = GET_SUCCESS then*/
    // SubProg Get pc: 257 op: EQUALS_IFW_I (121)
    if (_e1_11039 != 0)
    goto L10; // [257] 278
    // SubProg Get pc: 261 op: STARTLINE (58)

    /** get.e:333							s = append(s, e[2])*/
    // SubProg Get pc: 263 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_11038);
    _6208 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Get pc: 267 op: APPEND (35)
    Ref(_6208);
    Append(&_s_11037, _s_11037, _6208);
    _6208 = NOVALUE;
    // SubProg Get pc: 271 op: STARTLINE (58)

    /** get.e:334							exit  -- element read and added to result*/
    // SubProg Get pc: 273 op: EXIT (61)
    goto L11; // [273] 322
    // SubProg Get pc: 275 op: ELSE (23)
    goto LF; // [275] 242
    // SubProg Get pc: 277 op: NOP1 (159)
L10: // addr: 278 pc: 277 sub: 11035 op: 159
    // SubProg Get pc: 278 op: STARTLINE (58)

    /** get.e:335						elsif e1 != GET_IGNORE then*/
    // SubProg Get pc: 280 op: NOTEQ_IFW_I (122)
    if (_e1_11039 == -2)
    goto L12; // [280] 293
    // SubProg Get pc: 284 op: STARTLINE (58)

    /** get.e:336							return e*/
    // SubProg Get pc: 286 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _e_11038;
    // SubProg Get pc: 290 op: ELSE (23)
    goto LF; // [290] 242
    // SubProg Get pc: 292 op: NOP1 (159)
L12: // addr: 293 pc: 292 sub: 11035 op: 159
    // SubProg Get pc: 293 op: STARTLINE (58)

    /** get.e:338						elsif ch='}' then*/
    // SubProg Get pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 297 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 125)
    goto LF; // [297] 242
    // SubProg Get pc: 301 op: STARTLINE (58)

    /** get.e:339							get_ch()*/
    // SubProg Get pc: 303 op: PROC (27)
    _6get_ch();
    // SubProg Get pc: 305 op: STARTLINE (58)

    /** get.e:340							return {GET_SUCCESS, s} -- empty sequence*/
    // SubProg Get pc: 307 op: RIGHT_BRACE_2 (85)
    RefDS(_s_11037);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_11037;
    _6212 = MAKE_SEQ(_1);
    // SubProg Get pc: 311 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRefDS(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6212;
    // SubProg Get pc: 315 op: NOP1 (159)
    // SubProg Get pc: 316 op: NOP1 (159)
    // SubProg Get pc: 317 op: STARTLINE (58)

    /** get.e:342					end while*/
    // SubProg Get pc: 319 op: ENDWHILE (22)
    goto LF; // [319] 242
    // SubProg Get pc: 321 op: NOP1 (159)
L11: // addr: 322 pc: 321 sub: 11035 op: 159
    // SubProg Get pc: 322 op: STARTLINE (58)

    /** get.e:344					while 1 do -- now read zero or more post element comments*/
    // SubProg Get pc: 324 op: NOP2 (110)
    // SubProg Get pc: 326 op: NOPWHILE (158)
L13: // addr: 327 pc: 326 sub: 11035 op: 158
    // SubProg Get pc: 327 op: STARTLINE (58)

    /** get.e:345						skip_blanks()*/
    // SubProg Get pc: 329 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 331 op: NOP2 (110)
    // SubProg Get pc: 333 op: NOPWHILE (158)
L14: // addr: 334 pc: 333 sub: 11035 op: 158
    // SubProg Get pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 336 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at328_11081 = find_from(_6ch_10810, _6white_space_10826, 1);
    // SubProg Get pc: 341 op: WHILE (47)
    if (_skip_blanks_1__tmp_at328_11081 == 0)
    {
        goto L15; // [341] 358
    }
    else{
    }
    // SubProg Get pc: 344 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 346 op: PROC (27)
    _6get_ch();
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
L15: // addr: 358 pc: 357 sub: 11035 op: 159
    // SubProg Get pc: 358 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 328

// block var skip_blanks_1__tmp_at328_11081
    // SubProg Get pc: 360 op: STARTLINE (58)

    /** get.e:346						if ch = '}' then*/
    // SubProg Get pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 364 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 125)
    goto L16; // [364] 385
    // SubProg Get pc: 368 op: STARTLINE (58)

    /** get.e:347							get_ch()*/
    // SubProg Get pc: 370 op: PROC (27)
    _6get_ch();
    // SubProg Get pc: 372 op: STARTLINE (58)

    /** get.e:348						return {GET_SUCCESS, s}*/
    // SubProg Get pc: 374 op: RIGHT_BRACE_2 (85)
    RefDS(_s_11037);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_11037;
    _6214 = MAKE_SEQ(_1);
    // SubProg Get pc: 378 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRefDS(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6212);
    _6212 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6214;
    // SubProg Get pc: 382 op: ELSE (23)
    goto L13; // [382] 327
    // SubProg Get pc: 384 op: NOP1 (159)
L16: // addr: 385 pc: 384 sub: 11035 op: 159
    // SubProg Get pc: 385 op: STARTLINE (58)

    /** get.e:349						elsif ch!='-' then*/
    // SubProg Get pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 389 op: NOTEQ_IFW_I (122)
    if (_6ch_10810 == 45)
    goto L17; // [389] 400
    // SubProg Get pc: 393 op: STARTLINE (58)

    /** get.e:350							exit*/
    // SubProg Get pc: 395 op: EXIT (61)
    goto L18; // [395] 434
    // SubProg Get pc: 397 op: ELSE (23)
    goto L13; // [397] 327
    // SubProg Get pc: 399 op: NOP1 (159)
L17: // addr: 400 pc: 399 sub: 11035 op: 159
    // SubProg Get pc: 400 op: STARTLINE (58)

    /** get.e:352							e = get_number() -- reads anything starting with '-'*/
    // SubProg Get pc: 402 op: PROC (27)
    _0 = _e_11038;
    _e_11038 = _6get_number();
    DeRef(_0);
    // SubProg Get pc: 405 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 407 op: STARTLINE (58)

    /** get.e:353							if e[1] != GET_IGNORE then  -- it wasn't a comment, this is illegal*/
    // SubProg Get pc: 409 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_11038);
    _6217 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get pc: 413 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _6217, -2)){
        _6217 = NOVALUE;
        goto L13; // [413] 327
    }
    _6217 = NOVALUE;
    // SubProg Get pc: 417 op: STARTLINE (58)

    /** get.e:354								return {GET_FAIL, 0}*/
    // SubProg Get pc: 419 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6219 = MAKE_SEQ(_1);
    // SubProg Get pc: 423 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRefDS(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6214);
    _6214 = NOVALUE;
    DeRef(_6212);
    _6212 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6219;
    // SubProg Get pc: 427 op: NOP1 (159)
    // SubProg Get pc: 428 op: NOP1 (159)
    // SubProg Get pc: 429 op: STARTLINE (58)

    /** get.e:358				end while*/
    // SubProg Get pc: 431 op: ENDWHILE (22)
    goto L13; // [431] 327
    // SubProg Get pc: 433 op: NOP1 (159)
L18: // addr: 434 pc: 433 sub: 11035 op: 159
    // SubProg Get pc: 434 op: STARTLINE (58)

    /** get.e:359					if ch != ',' then*/
    // SubProg Get pc: 436 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 438 op: NOTEQ_IFW_I (122)
    if (_6ch_10810 == 44)
    goto L19; // [438] 453
    // SubProg Get pc: 442 op: STARTLINE (58)

    /** get.e:360					return {GET_FAIL, 0}*/
    // SubProg Get pc: 444 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6221 = MAKE_SEQ(_1);
    // SubProg Get pc: 448 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6214);
    _6214 = NOVALUE;
    DeRef(_6212);
    _6212 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6219);
    _6219 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6221;
    // SubProg Get pc: 452 op: NOP1 (159)
L19: // addr: 453 pc: 452 sub: 11035 op: 159
    // SubProg Get pc: 453 op: STARTLINE (58)

    /** get.e:362				get_ch() -- skip comma*/
    // SubProg Get pc: 455 op: PROC (27)
    _6get_ch();
    // SubProg Get pc: 457 op: STARTLINE (58)

    /** get.e:363				end while*/
    // SubProg Get pc: 459 op: ENDWHILE (22)
    goto LE; // [459] 237
    // SubProg Get pc: 461 op: NOP1 (159)
    // SubProg Get pc: 462 op: ELSE (23)
    goto L4; // [462] 49
    // SubProg Get pc: 464 op: NOP1 (159)
LA: // addr: 465 pc: 464 sub: 11035 op: 159
    // SubProg Get pc: 465 op: STARTLINE (58)

    /** get.e:365			elsif ch = '\"' then*/
    // SubProg Get pc: 467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 469 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 34)
    goto L1A; // [469] 485
    // SubProg Get pc: 473 op: STARTLINE (58)

    /** get.e:366				return get_string()*/
    // SubProg Get pc: 475 op: PROC (27)
    _6223 = _6get_string();
    // SubProg Get pc: 478 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6221);
    _6221 = NOVALUE;
    DeRef(_6214);
    _6214 = NOVALUE;
    DeRef(_6212);
    _6212 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6219);
    _6219 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6223;
    // SubProg Get pc: 482 op: ELSE (23)
    goto L4; // [482] 49
    // SubProg Get pc: 484 op: NOP1 (159)
L1A: // addr: 485 pc: 484 sub: 11035 op: 159
    // SubProg Get pc: 485 op: STARTLINE (58)

    /** get.e:367			elsif ch = '`' then*/
    // SubProg Get pc: 487 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 489 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 96)
    goto L1B; // [489] 506
    // SubProg Get pc: 493 op: STARTLINE (58)

    /** get.e:368				return get_heredoc("`")*/
    // SubProg Get pc: 495 op: PROC (27)
    RefDS(_6225);
    _6226 = _6get_heredoc(_6225);
    // SubProg Get pc: 499 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6221);
    _6221 = NOVALUE;
    DeRef(_6214);
    _6214 = NOVALUE;
    DeRef(_6223);
    _6223 = NOVALUE;
    DeRef(_6212);
    _6212 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6219);
    _6219 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6226;
    // SubProg Get pc: 503 op: ELSE (23)
    goto L4; // [503] 49
    // SubProg Get pc: 505 op: NOP1 (159)
L1B: // addr: 506 pc: 505 sub: 11035 op: 159
    // SubProg Get pc: 506 op: STARTLINE (58)

    /** get.e:369			elsif ch = '\'' then*/
    // SubProg Get pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 510 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 39)
    goto L1C; // [510] 526
    // SubProg Get pc: 514 op: STARTLINE (58)

    /** get.e:370				return get_qchar()*/
    // SubProg Get pc: 516 op: PROC (27)
    _6228 = _6get_qchar();
    // SubProg Get pc: 519 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6226);
    _6226 = NOVALUE;
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6221);
    _6221 = NOVALUE;
    DeRef(_6214);
    _6214 = NOVALUE;
    DeRef(_6223);
    _6223 = NOVALUE;
    DeRef(_6212);
    _6212 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6219);
    _6219 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6228;
    // SubProg Get pc: 523 op: ELSE (23)
    goto L4; // [523] 49
    // SubProg Get pc: 525 op: NOP1 (159)
L1C: // addr: 526 pc: 525 sub: 11035 op: 159
    // SubProg Get pc: 526 op: STARTLINE (58)

    /** get.e:372				return {GET_FAIL, 0}*/
    // SubProg Get pc: 528 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _6229 = MAKE_SEQ(_1);
    // SubProg Get pc: 532 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_11037
    DeRef(_s_11037);

// block var e_11038
    DeRef(_e_11038);

// block var e1_11039
    DeRef(_6226);
    _6226 = NOVALUE;
    DeRef(_6198);
    _6198 = NOVALUE;
    DeRef(_6221);
    _6221 = NOVALUE;
    DeRef(_6214);
    _6214 = NOVALUE;
    DeRef(_6223);
    _6223 = NOVALUE;
    DeRef(_6212);
    _6212 = NOVALUE;
    DeRef(_6204);
    _6204 = NOVALUE;
    DeRef(_6228);
    _6228 = NOVALUE;
    DeRef(_6201);
    _6201 = NOVALUE;
    DeRef(_6219);
    _6219 = NOVALUE;
    DeRef(_6193);
    _6193 = NOVALUE;
    return _6229;
    // SubProg Get pc: 536 op: NOP1 (159)
    // SubProg Get pc: 537 op: STARTLINE (58)

    /** get.e:376		end while*/
    // SubProg Get pc: 539 op: ENDWHILE (22)
    goto L4; // [539] 49
    // SubProg Get pc: 541 op: NOP1 (159)
    // SubProg Get pc: 542 op: BADRETURNF (43)
    ;
}


object _6Get2()
{
    object _skip_blanks_1__tmp_at464_11182 = NOVALUE;
    object _skip_blanks_1__tmp_at233_11149 = NOVALUE;
    object _s_11111 = NOVALUE;
    object _e_11112 = NOVALUE;
    object _e1_11113 = NOVALUE;
    object _offset_11114 = NOVALUE;
    object _6329 = NOVALUE; // 11241 6329
    object _6328 = NOVALUE; // 11240 6328
    object _6327 = NOVALUE; // 11239 6327
    object _6326 = NOVALUE; // 11238 6326
    object _6325 = NOVALUE; // 11237 6325
    object _6324 = NOVALUE; // 11235 6324
    object _6323 = NOVALUE; // 11234 6323
    object _6322 = NOVALUE; // 11233 6322
    object _6321 = NOVALUE; // 11232 6321
    object _6320 = NOVALUE; // 11231 6320
    object _6319 = NOVALUE; // 11230 6319
// skipping _6318  name type: 0
// skipping _6317  name type: 0
    object _6316 = NOVALUE; // 11226 6316
    object _6315 = NOVALUE; // 11225 6315
    object _6314 = NOVALUE; // 11224 6314
    object _6313 = NOVALUE; // 11223 6313
    object _6312 = NOVALUE; // 11222 6312
    object _6311 = NOVALUE; // 11221 6311
// skipping _6310  name type: 0
// skipping _6309  name type: 0
    object _6308 = NOVALUE; // 11217 6308
    object _6307 = NOVALUE; // 11216 6307
    object _6306 = NOVALUE; // 11215 6306
    object _6305 = NOVALUE; // 11214 6305
    object _6304 = NOVALUE; // 11213 6304
    object _6303 = NOVALUE; // 11212 6303
// skipping _6302  name type: 0
// skipping _6301  name type: 0
    object _6300 = NOVALUE; // 11208 6300
    object _6299 = NOVALUE; // 11207 6299
    object _6298 = NOVALUE; // 11206 6298
    object _6297 = NOVALUE; // 11205 6297
    object _6296 = NOVALUE; // 11204 6296
// skipping _6295  name type: 0
    object _6294 = NOVALUE; // 11201 6294
    object _6293 = NOVALUE; // 11200 6293
    object _6292 = NOVALUE; // 11199 6292
    object _6291 = NOVALUE; // 11198 6291
    object _6290 = NOVALUE; // 11197 6290
// skipping _6289  name type: 0
    object _6288 = NOVALUE; // 11195 6288
// skipping _6287  name type: 0
// skipping _6286  name type: 0
    object _6285 = NOVALUE; // 11189 6285
    object _6284 = NOVALUE; // 11188 6284
    object _6283 = NOVALUE; // 11187 6283
    object _6282 = NOVALUE; // 11186 6282
    object _6281 = NOVALUE; // 11185 6281
// skipping _6280  name type: 0
    object _6279 = NOVALUE; // 11179 6279
    object _6278 = NOVALUE; // 11178 6278
    object _6277 = NOVALUE; // 11177 6277
    object _6276 = NOVALUE; // 11176 6276
    object _6275 = NOVALUE; // 11175 6275
// skipping _6274  name type: 0
    object _6273 = NOVALUE; // 11172 6273
    object _6272 = NOVALUE; // 11171 6272
    object _6271 = NOVALUE; // 11170 6271
    object _6270 = NOVALUE; // 11169 6270
    object _6269 = NOVALUE; // 11168 6269
    object _6268 = NOVALUE; // 11167 6268
// skipping _6267  name type: 0
// skipping _6266  name type: 0
    object _6265 = NOVALUE; // 11163 6265
// skipping _6264  name type: 0
// skipping _6263  name type: 0
// skipping _6262  name type: 0
    object _6261 = NOVALUE; // 11156 6261
    object _6260 = NOVALUE; // 11155 6260
    object _6259 = NOVALUE; // 11154 6259
    object _6258 = NOVALUE; // 11153 6258
    object _6257 = NOVALUE; // 11152 6257
// skipping _6256  name type: 0
// skipping _6255  name type: 0
    object _6254 = NOVALUE; // 11145 6254
    object _6253 = NOVALUE; // 11144 6253
    object _6252 = NOVALUE; // 11143 6252
    object _6251 = NOVALUE; // 11142 6251
    object _6250 = NOVALUE; // 11141 6250
// skipping _6249  name type: 0
    object _6248 = NOVALUE; // 11138 6248
    object _6247 = NOVALUE; // 11137 6247
    object _6246 = NOVALUE; // 11136 6246
    object _6245 = NOVALUE; // 11135 6245
    object _6244 = NOVALUE; // 11134 6244
    object _6243 = NOVALUE; // 11133 6243
// skipping _6242  name type: 0
    object _6241 = NOVALUE; // 11131 6241
// skipping _6240  name type: 0
    object _6239 = NOVALUE; // 11128 6239
// skipping _6238  name type: 0
    object _6237 = NOVALUE; // 11124 6237
    object _6236 = NOVALUE; // 11123 6236
    object _6235 = NOVALUE; // 11122 6235
    object _6234 = NOVALUE; // 11121 6234
    object _6233 = NOVALUE; // 11120 6233
// skipping _6232  name type: 0
    object _6231 = NOVALUE; // 11117 6231
// skipping _6230  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Get2 pc: 1 op: STARTLINE (58)

    /** get.e:392		offset = string_next-1*/
    // SubProg Get2 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 5 op: MINUS_I (116)
    _offset_11114 = _6string_next_10809 - 1;
    // SubProg Get2 pc: 9 op: STARTLINE (58)

    /** get.e:393		get_ch()*/
    // SubProg Get2 pc: 11 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 13 op: STARTLINE (58)

    /** get.e:394		while find(ch, white_space) do*/
    // SubProg Get2 pc: 15 op: NOP2 (110)
    // SubProg Get2 pc: 17 op: NOPWHILE (158)
L1: // addr: 18 pc: 17 sub: 11109 op: 158
    // SubProg Get2 pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 20 op: FIND_FROM (176)
    _6231 = find_from(_6ch_10810, _6white_space_10826, 1);
    // SubProg Get2 pc: 25 op: WHILE (47)
    if (_6231 == 0)
    {
        _6231 = NOVALUE;
        goto L2; // [25] 37
    }
    else{
        _6231 = NOVALUE;
    }
    // SubProg Get2 pc: 28 op: STARTLINE (58)

    /** get.e:395			get_ch()*/
    // SubProg Get2 pc: 30 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 32 op: STARTLINE (58)

    /** get.e:396		end while*/
    // SubProg Get2 pc: 34 op: ENDWHILE (22)
    goto L1; // [34] 18
    // SubProg Get2 pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 11109 op: 159
    // SubProg Get2 pc: 37 op: STARTLINE (58)

    /** get.e:398		if ch = -1 then -- string is made of whitespace only*/
    // SubProg Get2 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 41 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != -1)
    goto L3; // [41] 75
    // SubProg Get2 pc: 45 op: STARTLINE (58)

    /** get.e:399			return {GET_EOF, 0, string_next-1-offset ,string_next-1}*/
    // SubProg Get2 pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 49 op: MINUS (10)
    _6233 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6233 +(uintptr_t) HIGH_BITS) >= 0){
        _6233 = NewDouble((eudouble)_6233);
    }
    // SubProg Get2 pc: 53 op: MINUS (10)
    if (IS_ATOM_INT(_6233)) {
        _6234 = _6233 - _offset_11114;
        if ((object)((uintptr_t)_6234 +(uintptr_t) HIGH_BITS) >= 0){
            _6234 = NewDouble((eudouble)_6234);
        }
    }
    else {
        _6234 = NewDouble(DBL_PTR(_6233)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6233);
    _6233 = NOVALUE;
    // SubProg Get2 pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 59 op: MINUS (10)
    _6235 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6235 +(uintptr_t) HIGH_BITS) >= 0){
        _6235 = NewDouble((eudouble)_6235);
    }
    // SubProg Get2 pc: 63 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _6234;
    ((intptr_t*)_2)[4] = _6235;
    _6236 = MAKE_SEQ(_1);
    _6235 = NOVALUE;
    _6234 = NOVALUE;
    // SubProg Get2 pc: 70 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRef(_e_11112);

// block var e1_11113

// block var offset_11114
    return _6236;
    // SubProg Get2 pc: 74 op: NOP1 (159)
L3: // addr: 75 pc: 74 sub: 11109 op: 159
    // SubProg Get2 pc: 75 op: STARTLINE (58)

    /** get.e:402		leading_whitespace = string_next-2-offset -- index of the last whitespace: string_next points past the first non whitespace*/
    // SubProg Get2 pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 79 op: MINUS (10)
    _6237 = _6string_next_10809 - 2;
    if ((object)((uintptr_t)_6237 +(uintptr_t) HIGH_BITS) >= 0){
        _6237 = NewDouble((eudouble)_6237);
    }
    // SubProg Get2 pc: 83 op: MINUS (10)
    if (IS_ATOM_INT(_6237)) {
        _6leading_whitespace_11108 = _6237 - _offset_11114;
    }
    else {
        _6leading_whitespace_11108 = NewDouble(DBL_PTR(_6237)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6237);
    _6237 = NOVALUE;
    // SubProg Get2 pc: 87 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_6leading_whitespace_11108)) {
        _1 = (object)(DBL_PTR(_6leading_whitespace_11108)->dbl);
        DeRefDS(_6leading_whitespace_11108);
        _6leading_whitespace_11108 = _1;
    }
    // SubProg Get2 pc: 89 op: STARTLINE (58)

    /** get.e:404		while 1 do*/
    // SubProg Get2 pc: 91 op: NOP2 (110)
    // SubProg Get2 pc: 93 op: NOPWHILE (158)
L4: // addr: 94 pc: 93 sub: 11109 op: 158
    // SubProg Get2 pc: 94 op: STARTLINE (58)

    /** get.e:405			if find(ch, START_NUMERIC) then*/
    // SubProg Get2 pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 100 op: FIND_FROM (176)
    _6239 = find_from(_6ch_10810, _6START_NUMERIC_10793, 1);
    // SubProg Get2 pc: 105 op: IF (20)
    if (_6239 == 0)
    {
        _6239 = NOVALUE;
        goto L5; // [105] 213
    }
    else{
        _6239 = NOVALUE;
    }
    // SubProg Get2 pc: 108 op: STARTLINE (58)

    /** get.e:406				e = get_number()*/
    // SubProg Get2 pc: 110 op: PROC (27)
    _0 = _e_11112;
    _e_11112 = _6get_number();
    DeRef(_0);
    // SubProg Get2 pc: 113 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 115 op: STARTLINE (58)

    /** get.e:407				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    // SubProg Get2 pc: 117 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_11112);
    _6241 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get2 pc: 121 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _6241, -2)){
        _6241 = NOVALUE;
        goto L6; // [121] 162
    }
    _6241 = NOVALUE;
    // SubProg Get2 pc: 125 op: STARTLINE (58)

    /** get.e:408					return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 129 op: MINUS (10)
    _6243 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6243 +(uintptr_t) HIGH_BITS) >= 0){
        _6243 = NewDouble((eudouble)_6243);
    }
    // SubProg Get2 pc: 133 op: MINUS (10)
    if (IS_ATOM_INT(_6243)) {
        _6244 = _6243 - _offset_11114;
        if ((object)((uintptr_t)_6244 +(uintptr_t) HIGH_BITS) >= 0){
            _6244 = NewDouble((eudouble)_6244);
        }
    }
    else {
        _6244 = NewDouble(DBL_PTR(_6243)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6243);
    _6243 = NOVALUE;
    // SubProg Get2 pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 139 op: NOTEQ (4)
    _6245 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 143 op: MINUS (10)
    if (IS_ATOM_INT(_6244)) {
        _6246 = _6244 - _6245;
        if ((object)((uintptr_t)_6246 +(uintptr_t) HIGH_BITS) >= 0){
            _6246 = NewDouble((eudouble)_6246);
        }
    }
    else {
        _6246 = NewDouble(DBL_PTR(_6244)->dbl - (eudouble)_6245);
    }
    DeRef(_6244);
    _6244 = NOVALUE;
    _6245 = NOVALUE;
    // SubProg Get2 pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 149 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6246;
    ((intptr_t *)_2)[2] = _6leading_whitespace_11108;
    _6247 = MAKE_SEQ(_1);
    _6246 = NOVALUE;
    // SubProg Get2 pc: 153 op: CONCAT (15)
    Concat((object_ptr)&_6248, _e_11112, _6247);
    DeRefDS(_6247);
    _6247 = NOVALUE;
    // SubProg Get2 pc: 157 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRefDS(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6236);
    _6236 = NOVALUE;
    return _6248;
    // SubProg Get2 pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 11109 op: 159
    // SubProg Get2 pc: 162 op: STARTLINE (58)

    /** get.e:410				get_ch()*/
    // SubProg Get2 pc: 164 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 166 op: STARTLINE (58)

    /** get.e:411				if ch=-1 then*/
    // SubProg Get2 pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 170 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != -1)
    goto L4; // [170] 94
    // SubProg Get2 pc: 174 op: STARTLINE (58)

    /** get.e:412					return {GET_NOTHING, 0, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 178 op: MINUS (10)
    _6250 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6250 +(uintptr_t) HIGH_BITS) >= 0){
        _6250 = NewDouble((eudouble)_6250);
    }
    // SubProg Get2 pc: 182 op: MINUS (10)
    if (IS_ATOM_INT(_6250)) {
        _6251 = _6250 - _offset_11114;
        if ((object)((uintptr_t)_6251 +(uintptr_t) HIGH_BITS) >= 0){
            _6251 = NewDouble((eudouble)_6251);
        }
    }
    else {
        _6251 = NewDouble(DBL_PTR(_6250)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6250);
    _6250 = NOVALUE;
    // SubProg Get2 pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 188 op: NOTEQ (4)
    _6252 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 192 op: MINUS (10)
    if (IS_ATOM_INT(_6251)) {
        _6253 = _6251 - _6252;
        if ((object)((uintptr_t)_6253 +(uintptr_t) HIGH_BITS) >= 0){
            _6253 = NewDouble((eudouble)_6253);
        }
    }
    else {
        _6253 = NewDouble(DBL_PTR(_6251)->dbl - (eudouble)_6252);
    }
    DeRef(_6251);
    _6251 = NOVALUE;
    _6252 = NOVALUE;
    // SubProg Get2 pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 198 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _6253;
    ((intptr_t*)_2)[4] = _6leading_whitespace_11108;
    _6254 = MAKE_SEQ(_1);
    _6253 = NOVALUE;
    // SubProg Get2 pc: 205 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRef(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    return _6254;
    // SubProg Get2 pc: 209 op: NOP1 (159)
    // SubProg Get2 pc: 210 op: ELSE (23)
    goto L4; // [210] 94
    // SubProg Get2 pc: 212 op: NOP1 (159)
L5: // addr: 213 pc: 212 sub: 11109 op: 159
    // SubProg Get2 pc: 213 op: STARTLINE (58)

    /** get.e:415			elsif ch = '{' then*/
    // SubProg Get2 pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 217 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 123)
    goto L7; // [217] 676
    // SubProg Get2 pc: 221 op: STARTLINE (58)

    /** get.e:417				s = {}*/
    // SubProg Get2 pc: 223 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_s_11111);
    _s_11111 = _5;
    // SubProg Get2 pc: 226 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 228 op: STARTLINE (58)

    /** get.e:418				get_ch()*/
    // SubProg Get2 pc: 230 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 232 op: STARTLINE (58)

    /** get.e:419				skip_blanks()*/
    // SubProg Get2 pc: 234 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get2 pc: 236 op: NOP2 (110)
    // SubProg Get2 pc: 238 op: NOPWHILE (158)
L8: // addr: 239 pc: 238 sub: 11109 op: 158
    // SubProg Get2 pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 241 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at233_11149 = find_from(_6ch_10810, _6white_space_10826, 1);
    // SubProg Get2 pc: 246 op: WHILE (47)
    if (_skip_blanks_1__tmp_at233_11149 == 0)
    {
        goto L9; // [246] 263
    }
    else{
    }
    // SubProg Get2 pc: 249 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get2 pc: 251 op: PROC (27)
    _6get_ch();
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
L9: // addr: 263 pc: 262 sub: 11109 op: 159
    // SubProg Get2 pc: 263 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get2 @ 233

// block var skip_blanks_1__tmp_at233_11149
    // SubProg Get2 pc: 265 op: STARTLINE (58)

    /** get.e:420				if ch = '}' then -- empty sequence*/
    // SubProg Get2 pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 269 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 125)
    goto LA; // [269] 313
    // SubProg Get2 pc: 273 op: STARTLINE (58)

    /** get.e:421					get_ch()*/
    // SubProg Get2 pc: 275 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 277 op: STARTLINE (58)

    /** get.e:422					return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 281 op: MINUS (10)
    _6257 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6257 +(uintptr_t) HIGH_BITS) >= 0){
        _6257 = NewDouble((eudouble)_6257);
    }
    // SubProg Get2 pc: 285 op: MINUS (10)
    if (IS_ATOM_INT(_6257)) {
        _6258 = _6257 - _offset_11114;
        if ((object)((uintptr_t)_6258 +(uintptr_t) HIGH_BITS) >= 0){
            _6258 = NewDouble((eudouble)_6258);
        }
    }
    else {
        _6258 = NewDouble(DBL_PTR(_6257)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6257);
    _6257 = NOVALUE;
    // SubProg Get2 pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 291 op: NOTEQ (4)
    _6259 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 295 op: MINUS (10)
    if (IS_ATOM_INT(_6258)) {
        _6260 = _6258 - _6259;
        if ((object)((uintptr_t)_6260 +(uintptr_t) HIGH_BITS) >= 0){
            _6260 = NewDouble((eudouble)_6260);
        }
    }
    else {
        _6260 = NewDouble(DBL_PTR(_6258)->dbl - (eudouble)_6259);
    }
    DeRef(_6258);
    _6258 = NOVALUE;
    _6259 = NOVALUE;
    // SubProg Get2 pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 301 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_11111);
    ((intptr_t*)_2)[2] = _s_11111;
    ((intptr_t*)_2)[3] = _6260;
    ((intptr_t*)_2)[4] = _6leading_whitespace_11108;
    _6261 = MAKE_SEQ(_1);
    _6260 = NOVALUE;
    // SubProg Get2 pc: 308 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRefDS(_s_11111);

// block var e_11112
    DeRef(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    return _6261;
    // SubProg Get2 pc: 312 op: NOP1 (159)
LA: // addr: 313 pc: 312 sub: 11109 op: 159
    // SubProg Get2 pc: 313 op: STARTLINE (58)

    /** get.e:425				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
    // SubProg Get2 pc: 315 op: NOP2 (110)
    // SubProg Get2 pc: 317 op: NOPWHILE (158)
LB: // addr: 318 pc: 317 sub: 11109 op: 158
    // SubProg Get2 pc: 318 op: STARTLINE (58)

    /** get.e:426					while 1 do -- read zero or more comments and an element*/
    // SubProg Get2 pc: 320 op: NOP2 (110)
    // SubProg Get2 pc: 322 op: NOPWHILE (158)
LC: // addr: 323 pc: 322 sub: 11109 op: 158
    // SubProg Get2 pc: 323 op: STARTLINE (58)

    /** get.e:427						e = Get() -- read next element, using standard function*/
    // SubProg Get2 pc: 325 op: PROC (27)
    _0 = _e_11112;
    _e_11112 = _6Get();
    DeRef(_0);
    // SubProg Get2 pc: 328 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 330 op: STARTLINE (58)

    /** get.e:428						e1 = e[1]*/
    // SubProg Get2 pc: 332 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_e_11112);
    _e1_11113 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_11113))
    _e1_11113 = (object)DBL_PTR(_e1_11113)->dbl;
    // SubProg Get2 pc: 336 op: STARTLINE (58)

    /** get.e:429						if e1 = GET_SUCCESS then*/
    // SubProg Get2 pc: 338 op: EQUALS_IFW_I (121)
    if (_e1_11113 != 0)
    goto LD; // [338] 359
    // SubProg Get2 pc: 342 op: STARTLINE (58)

    /** get.e:430							s = append(s, e[2])*/
    // SubProg Get2 pc: 344 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_11112);
    _6265 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Get2 pc: 348 op: APPEND (35)
    Ref(_6265);
    Append(&_s_11111, _s_11111, _6265);
    _6265 = NOVALUE;
    // SubProg Get2 pc: 352 op: STARTLINE (58)

    /** get.e:431							exit  -- element read and added to result*/
    // SubProg Get2 pc: 354 op: EXIT (61)
    goto LE; // [354] 458
    // SubProg Get2 pc: 356 op: ELSE (23)
    goto LC; // [356] 323
    // SubProg Get2 pc: 358 op: NOP1 (159)
LD: // addr: 359 pc: 358 sub: 11109 op: 159
    // SubProg Get2 pc: 359 op: STARTLINE (58)

    /** get.e:432						elsif e1 != GET_IGNORE then*/
    // SubProg Get2 pc: 361 op: NOTEQ_IFW_I (122)
    if (_e1_11113 == -2)
    goto LF; // [361] 404
    // SubProg Get2 pc: 365 op: STARTLINE (58)

    /** get.e:433							return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 369 op: MINUS (10)
    _6268 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6268 +(uintptr_t) HIGH_BITS) >= 0){
        _6268 = NewDouble((eudouble)_6268);
    }
    // SubProg Get2 pc: 373 op: MINUS (10)
    if (IS_ATOM_INT(_6268)) {
        _6269 = _6268 - _offset_11114;
        if ((object)((uintptr_t)_6269 +(uintptr_t) HIGH_BITS) >= 0){
            _6269 = NewDouble((eudouble)_6269);
        }
    }
    else {
        _6269 = NewDouble(DBL_PTR(_6268)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6268);
    _6268 = NOVALUE;
    // SubProg Get2 pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 379 op: NOTEQ (4)
    _6270 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 383 op: MINUS (10)
    if (IS_ATOM_INT(_6269)) {
        _6271 = _6269 - _6270;
        if ((object)((uintptr_t)_6271 +(uintptr_t) HIGH_BITS) >= 0){
            _6271 = NewDouble((eudouble)_6271);
        }
    }
    else {
        _6271 = NewDouble(DBL_PTR(_6269)->dbl - (eudouble)_6270);
    }
    DeRef(_6269);
    _6269 = NOVALUE;
    _6270 = NOVALUE;
    // SubProg Get2 pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 389 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6271;
    ((intptr_t *)_2)[2] = _6leading_whitespace_11108;
    _6272 = MAKE_SEQ(_1);
    _6271 = NOVALUE;
    // SubProg Get2 pc: 393 op: CONCAT (15)
    Concat((object_ptr)&_6273, _e_11112, _6272);
    DeRefDS(_6272);
    _6272 = NOVALUE;
    // SubProg Get2 pc: 397 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRefDS(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    return _6273;
    // SubProg Get2 pc: 401 op: ELSE (23)
    goto LC; // [401] 323
    // SubProg Get2 pc: 403 op: NOP1 (159)
LF: // addr: 404 pc: 403 sub: 11109 op: 159
    // SubProg Get2 pc: 404 op: STARTLINE (58)

    /** get.e:435						elsif ch='}' then*/
    // SubProg Get2 pc: 406 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 408 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 125)
    goto LC; // [408] 323
    // SubProg Get2 pc: 412 op: STARTLINE (58)

    /** get.e:436							get_ch()*/
    // SubProg Get2 pc: 414 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 416 op: STARTLINE (58)

    /** get.e:437							return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1),leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 420 op: MINUS (10)
    _6275 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6275 +(uintptr_t) HIGH_BITS) >= 0){
        _6275 = NewDouble((eudouble)_6275);
    }
    // SubProg Get2 pc: 424 op: MINUS (10)
    if (IS_ATOM_INT(_6275)) {
        _6276 = _6275 - _offset_11114;
        if ((object)((uintptr_t)_6276 +(uintptr_t) HIGH_BITS) >= 0){
            _6276 = NewDouble((eudouble)_6276);
        }
    }
    else {
        _6276 = NewDouble(DBL_PTR(_6275)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6275);
    _6275 = NOVALUE;
    // SubProg Get2 pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 430 op: NOTEQ (4)
    _6277 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 434 op: MINUS (10)
    if (IS_ATOM_INT(_6276)) {
        _6278 = _6276 - _6277;
        if ((object)((uintptr_t)_6278 +(uintptr_t) HIGH_BITS) >= 0){
            _6278 = NewDouble((eudouble)_6278);
        }
    }
    else {
        _6278 = NewDouble(DBL_PTR(_6276)->dbl - (eudouble)_6277);
    }
    DeRef(_6276);
    _6276 = NOVALUE;
    _6277 = NOVALUE;
    // SubProg Get2 pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 440 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_11111);
    ((intptr_t*)_2)[2] = _s_11111;
    ((intptr_t*)_2)[3] = _6278;
    ((intptr_t*)_2)[4] = _6leading_whitespace_11108;
    _6279 = MAKE_SEQ(_1);
    _6278 = NOVALUE;
    // SubProg Get2 pc: 447 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRefDS(_s_11111);

// block var e_11112
    DeRef(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    return _6279;
    // SubProg Get2 pc: 451 op: NOP1 (159)
    // SubProg Get2 pc: 452 op: NOP1 (159)
    // SubProg Get2 pc: 453 op: STARTLINE (58)

    /** get.e:439					end while*/
    // SubProg Get2 pc: 455 op: ENDWHILE (22)
    goto LC; // [455] 323
    // SubProg Get2 pc: 457 op: NOP1 (159)
LE: // addr: 458 pc: 457 sub: 11109 op: 159
    // SubProg Get2 pc: 458 op: STARTLINE (58)

    /** get.e:441					while 1 do -- now read zero or more post element comments*/
    // SubProg Get2 pc: 460 op: NOP2 (110)
    // SubProg Get2 pc: 462 op: NOPWHILE (158)
L10: // addr: 463 pc: 462 sub: 11109 op: 158
    // SubProg Get2 pc: 463 op: STARTLINE (58)

    /** get.e:442						skip_blanks()*/
    // SubProg Get2 pc: 465 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get2 pc: 467 op: NOP2 (110)
    // SubProg Get2 pc: 469 op: NOPWHILE (158)
L11: // addr: 470 pc: 469 sub: 11109 op: 158
    // SubProg Get2 pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 472 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at464_11182 = find_from(_6ch_10810, _6white_space_10826, 1);
    // SubProg Get2 pc: 477 op: WHILE (47)
    if (_skip_blanks_1__tmp_at464_11182 == 0)
    {
        goto L12; // [477] 494
    }
    else{
    }
    // SubProg Get2 pc: 480 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get2 pc: 482 op: PROC (27)
    _6get_ch();
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
L12: // addr: 494 pc: 493 sub: 11109 op: 159
    // SubProg Get2 pc: 494 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get2 @ 464

// block var skip_blanks_1__tmp_at464_11182
    // SubProg Get2 pc: 496 op: STARTLINE (58)

    /** get.e:443						if ch = '}' then*/
    // SubProg Get2 pc: 498 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 500 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 125)
    goto L13; // [500] 546
    // SubProg Get2 pc: 504 op: STARTLINE (58)

    /** get.e:444							get_ch()*/
    // SubProg Get2 pc: 506 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 508 op: STARTLINE (58)

    /** get.e:445						return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 512 op: MINUS (10)
    _6281 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6281 +(uintptr_t) HIGH_BITS) >= 0){
        _6281 = NewDouble((eudouble)_6281);
    }
    // SubProg Get2 pc: 516 op: MINUS (10)
    if (IS_ATOM_INT(_6281)) {
        _6282 = _6281 - _offset_11114;
        if ((object)((uintptr_t)_6282 +(uintptr_t) HIGH_BITS) >= 0){
            _6282 = NewDouble((eudouble)_6282);
        }
    }
    else {
        _6282 = NewDouble(DBL_PTR(_6281)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6281);
    _6281 = NOVALUE;
    // SubProg Get2 pc: 520 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 522 op: NOTEQ (4)
    _6283 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 526 op: MINUS (10)
    if (IS_ATOM_INT(_6282)) {
        _6284 = _6282 - _6283;
        if ((object)((uintptr_t)_6284 +(uintptr_t) HIGH_BITS) >= 0){
            _6284 = NewDouble((eudouble)_6284);
        }
    }
    else {
        _6284 = NewDouble(DBL_PTR(_6282)->dbl - (eudouble)_6283);
    }
    DeRef(_6282);
    _6282 = NOVALUE;
    _6283 = NOVALUE;
    // SubProg Get2 pc: 530 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 532 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_11111);
    ((intptr_t*)_2)[2] = _s_11111;
    ((intptr_t*)_2)[3] = _6284;
    ((intptr_t*)_2)[4] = _6leading_whitespace_11108;
    _6285 = MAKE_SEQ(_1);
    _6284 = NOVALUE;
    // SubProg Get2 pc: 539 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRefDS(_s_11111);

// block var e_11112
    DeRef(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    return _6285;
    // SubProg Get2 pc: 543 op: ELSE (23)
    goto L10; // [543] 463
    // SubProg Get2 pc: 545 op: NOP1 (159)
L13: // addr: 546 pc: 545 sub: 11109 op: 159
    // SubProg Get2 pc: 546 op: STARTLINE (58)

    /** get.e:446						elsif ch!='-' then*/
    // SubProg Get2 pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 550 op: NOTEQ_IFW_I (122)
    if (_6ch_10810 == 45)
    goto L14; // [550] 561
    // SubProg Get2 pc: 554 op: STARTLINE (58)

    /** get.e:447							exit*/
    // SubProg Get2 pc: 556 op: EXIT (61)
    goto L15; // [556] 620
    // SubProg Get2 pc: 558 op: ELSE (23)
    goto L10; // [558] 463
    // SubProg Get2 pc: 560 op: NOP1 (159)
L14: // addr: 561 pc: 560 sub: 11109 op: 159
    // SubProg Get2 pc: 561 op: STARTLINE (58)

    /** get.e:449							e = get_number() -- reads anything starting with '-'*/
    // SubProg Get2 pc: 563 op: PROC (27)
    _0 = _e_11112;
    _e_11112 = _6get_number();
    DeRef(_0);
    // SubProg Get2 pc: 566 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 568 op: STARTLINE (58)

    /** get.e:450							if e[1] != GET_IGNORE then  -- it was not a comment, this is illegal*/
    // SubProg Get2 pc: 570 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_11112);
    _6288 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get2 pc: 574 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _6288, -2)){
        _6288 = NOVALUE;
        goto L10; // [574] 463
    }
    _6288 = NOVALUE;
    // SubProg Get2 pc: 578 op: STARTLINE (58)

    /** get.e:451								return {GET_FAIL, 0, string_next-1-offset-(ch!=-1),leading_whitespace}*/
    // SubProg Get2 pc: 580 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 582 op: MINUS (10)
    _6290 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6290 +(uintptr_t) HIGH_BITS) >= 0){
        _6290 = NewDouble((eudouble)_6290);
    }
    // SubProg Get2 pc: 586 op: MINUS (10)
    if (IS_ATOM_INT(_6290)) {
        _6291 = _6290 - _offset_11114;
        if ((object)((uintptr_t)_6291 +(uintptr_t) HIGH_BITS) >= 0){
            _6291 = NewDouble((eudouble)_6291);
        }
    }
    else {
        _6291 = NewDouble(DBL_PTR(_6290)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6290);
    _6290 = NOVALUE;
    // SubProg Get2 pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 592 op: NOTEQ (4)
    _6292 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 596 op: MINUS (10)
    if (IS_ATOM_INT(_6291)) {
        _6293 = _6291 - _6292;
        if ((object)((uintptr_t)_6293 +(uintptr_t) HIGH_BITS) >= 0){
            _6293 = NewDouble((eudouble)_6293);
        }
    }
    else {
        _6293 = NewDouble(DBL_PTR(_6291)->dbl - (eudouble)_6292);
    }
    DeRef(_6291);
    _6291 = NOVALUE;
    _6292 = NOVALUE;
    // SubProg Get2 pc: 600 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 602 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _6293;
    ((intptr_t*)_2)[4] = _6leading_whitespace_11108;
    _6294 = MAKE_SEQ(_1);
    _6293 = NOVALUE;
    // SubProg Get2 pc: 609 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRefDS(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6285);
    _6285 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    return _6294;
    // SubProg Get2 pc: 613 op: NOP1 (159)
    // SubProg Get2 pc: 614 op: NOP1 (159)
    // SubProg Get2 pc: 615 op: STARTLINE (58)

    /** get.e:455				end while*/
    // SubProg Get2 pc: 617 op: ENDWHILE (22)
    goto L10; // [617] 463
    // SubProg Get2 pc: 619 op: NOP1 (159)
L15: // addr: 620 pc: 619 sub: 11109 op: 159
    // SubProg Get2 pc: 620 op: STARTLINE (58)

    /** get.e:456					if ch != ',' then*/
    // SubProg Get2 pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 624 op: NOTEQ_IFW_I (122)
    if (_6ch_10810 == 44)
    goto L16; // [624] 664
    // SubProg Get2 pc: 628 op: STARTLINE (58)

    /** get.e:457					return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 630 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 632 op: MINUS (10)
    _6296 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6296 +(uintptr_t) HIGH_BITS) >= 0){
        _6296 = NewDouble((eudouble)_6296);
    }
    // SubProg Get2 pc: 636 op: MINUS (10)
    if (IS_ATOM_INT(_6296)) {
        _6297 = _6296 - _offset_11114;
        if ((object)((uintptr_t)_6297 +(uintptr_t) HIGH_BITS) >= 0){
            _6297 = NewDouble((eudouble)_6297);
        }
    }
    else {
        _6297 = NewDouble(DBL_PTR(_6296)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6296);
    _6296 = NOVALUE;
    // SubProg Get2 pc: 640 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 642 op: NOTEQ (4)
    _6298 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 646 op: MINUS (10)
    if (IS_ATOM_INT(_6297)) {
        _6299 = _6297 - _6298;
        if ((object)((uintptr_t)_6299 +(uintptr_t) HIGH_BITS) >= 0){
            _6299 = NewDouble((eudouble)_6299);
        }
    }
    else {
        _6299 = NewDouble(DBL_PTR(_6297)->dbl - (eudouble)_6298);
    }
    DeRef(_6297);
    _6297 = NOVALUE;
    _6298 = NOVALUE;
    // SubProg Get2 pc: 650 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 652 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _6299;
    ((intptr_t*)_2)[4] = _6leading_whitespace_11108;
    _6300 = MAKE_SEQ(_1);
    _6299 = NOVALUE;
    // SubProg Get2 pc: 659 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRef(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6285);
    _6285 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6294);
    _6294 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    return _6300;
    // SubProg Get2 pc: 663 op: NOP1 (159)
L16: // addr: 664 pc: 663 sub: 11109 op: 159
    // SubProg Get2 pc: 664 op: STARTLINE (58)

    /** get.e:459				get_ch() -- skip comma*/
    // SubProg Get2 pc: 666 op: PROC (27)
    _6get_ch();
    // SubProg Get2 pc: 668 op: STARTLINE (58)

    /** get.e:460				end while*/
    // SubProg Get2 pc: 670 op: ENDWHILE (22)
    goto LB; // [670] 318
    // SubProg Get2 pc: 672 op: NOP1 (159)
    // SubProg Get2 pc: 673 op: ELSE (23)
    goto L4; // [673] 94
    // SubProg Get2 pc: 675 op: NOP1 (159)
L7: // addr: 676 pc: 675 sub: 11109 op: 159
    // SubProg Get2 pc: 676 op: STARTLINE (58)

    /** get.e:462			elsif ch = '\"' then*/
    // SubProg Get2 pc: 678 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 680 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 34)
    goto L17; // [680] 730
    // SubProg Get2 pc: 684 op: STARTLINE (58)

    /** get.e:463				e = get_string()*/
    // SubProg Get2 pc: 686 op: PROC (27)
    _0 = _e_11112;
    _e_11112 = _6get_string();
    DeRef(_0);
    // SubProg Get2 pc: 689 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 691 op: STARTLINE (58)

    /** get.e:464				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 695 op: MINUS (10)
    _6303 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6303 +(uintptr_t) HIGH_BITS) >= 0){
        _6303 = NewDouble((eudouble)_6303);
    }
    // SubProg Get2 pc: 699 op: MINUS (10)
    if (IS_ATOM_INT(_6303)) {
        _6304 = _6303 - _offset_11114;
        if ((object)((uintptr_t)_6304 +(uintptr_t) HIGH_BITS) >= 0){
            _6304 = NewDouble((eudouble)_6304);
        }
    }
    else {
        _6304 = NewDouble(DBL_PTR(_6303)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6303);
    _6303 = NOVALUE;
    // SubProg Get2 pc: 703 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 705 op: NOTEQ (4)
    _6305 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 709 op: MINUS (10)
    if (IS_ATOM_INT(_6304)) {
        _6306 = _6304 - _6305;
        if ((object)((uintptr_t)_6306 +(uintptr_t) HIGH_BITS) >= 0){
            _6306 = NewDouble((eudouble)_6306);
        }
    }
    else {
        _6306 = NewDouble(DBL_PTR(_6304)->dbl - (eudouble)_6305);
    }
    DeRef(_6304);
    _6304 = NOVALUE;
    _6305 = NOVALUE;
    // SubProg Get2 pc: 713 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 715 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6306;
    ((intptr_t *)_2)[2] = _6leading_whitespace_11108;
    _6307 = MAKE_SEQ(_1);
    _6306 = NOVALUE;
    // SubProg Get2 pc: 719 op: CONCAT (15)
    Concat((object_ptr)&_6308, _e_11112, _6307);
    DeRefDS(_6307);
    _6307 = NOVALUE;
    // SubProg Get2 pc: 723 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRefDS(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6300);
    _6300 = NOVALUE;
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6285);
    _6285 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6294);
    _6294 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    return _6308;
    // SubProg Get2 pc: 727 op: ELSE (23)
    goto L4; // [727] 94
    // SubProg Get2 pc: 729 op: NOP1 (159)
L17: // addr: 730 pc: 729 sub: 11109 op: 159
    // SubProg Get2 pc: 730 op: STARTLINE (58)

    /** get.e:465			elsif ch = '`' then*/
    // SubProg Get2 pc: 732 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 734 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 96)
    goto L18; // [734] 785
    // SubProg Get2 pc: 738 op: STARTLINE (58)

    /** get.e:466				e = get_heredoc("`")*/
    // SubProg Get2 pc: 740 op: PROC (27)
    RefDS(_6225);
    _0 = _e_11112;
    _e_11112 = _6get_heredoc(_6225);
    DeRef(_0);
    // SubProg Get2 pc: 744 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 746 op: STARTLINE (58)

    /** get.e:467				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 748 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 750 op: MINUS (10)
    _6311 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6311 +(uintptr_t) HIGH_BITS) >= 0){
        _6311 = NewDouble((eudouble)_6311);
    }
    // SubProg Get2 pc: 754 op: MINUS (10)
    if (IS_ATOM_INT(_6311)) {
        _6312 = _6311 - _offset_11114;
        if ((object)((uintptr_t)_6312 +(uintptr_t) HIGH_BITS) >= 0){
            _6312 = NewDouble((eudouble)_6312);
        }
    }
    else {
        _6312 = NewDouble(DBL_PTR(_6311)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6311);
    _6311 = NOVALUE;
    // SubProg Get2 pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 760 op: NOTEQ (4)
    _6313 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 764 op: MINUS (10)
    if (IS_ATOM_INT(_6312)) {
        _6314 = _6312 - _6313;
        if ((object)((uintptr_t)_6314 +(uintptr_t) HIGH_BITS) >= 0){
            _6314 = NewDouble((eudouble)_6314);
        }
    }
    else {
        _6314 = NewDouble(DBL_PTR(_6312)->dbl - (eudouble)_6313);
    }
    DeRef(_6312);
    _6312 = NOVALUE;
    _6313 = NOVALUE;
    // SubProg Get2 pc: 768 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 770 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6314;
    ((intptr_t *)_2)[2] = _6leading_whitespace_11108;
    _6315 = MAKE_SEQ(_1);
    _6314 = NOVALUE;
    // SubProg Get2 pc: 774 op: CONCAT (15)
    Concat((object_ptr)&_6316, _e_11112, _6315);
    DeRefDS(_6315);
    _6315 = NOVALUE;
    // SubProg Get2 pc: 778 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRefDS(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6300);
    _6300 = NOVALUE;
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6285);
    _6285 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6308);
    _6308 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6294);
    _6294 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    return _6316;
    // SubProg Get2 pc: 782 op: ELSE (23)
    goto L4; // [782] 94
    // SubProg Get2 pc: 784 op: NOP1 (159)
L18: // addr: 785 pc: 784 sub: 11109 op: 159
    // SubProg Get2 pc: 785 op: STARTLINE (58)

    /** get.e:468			elsif ch = '\'' then*/
    // SubProg Get2 pc: 787 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 789 op: EQUALS_IFW_I (121)
    if (_6ch_10810 != 39)
    goto L19; // [789] 839
    // SubProg Get2 pc: 793 op: STARTLINE (58)

    /** get.e:469				e = get_qchar()*/
    // SubProg Get2 pc: 795 op: PROC (27)
    _0 = _e_11112;
    _e_11112 = _6get_qchar();
    DeRef(_0);
    // SubProg Get2 pc: 798 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 800 op: STARTLINE (58)

    /** get.e:470				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 802 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 804 op: MINUS (10)
    _6319 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6319 +(uintptr_t) HIGH_BITS) >= 0){
        _6319 = NewDouble((eudouble)_6319);
    }
    // SubProg Get2 pc: 808 op: MINUS (10)
    if (IS_ATOM_INT(_6319)) {
        _6320 = _6319 - _offset_11114;
        if ((object)((uintptr_t)_6320 +(uintptr_t) HIGH_BITS) >= 0){
            _6320 = NewDouble((eudouble)_6320);
        }
    }
    else {
        _6320 = NewDouble(DBL_PTR(_6319)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6319);
    _6319 = NOVALUE;
    // SubProg Get2 pc: 812 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 814 op: NOTEQ (4)
    _6321 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 818 op: MINUS (10)
    if (IS_ATOM_INT(_6320)) {
        _6322 = _6320 - _6321;
        if ((object)((uintptr_t)_6322 +(uintptr_t) HIGH_BITS) >= 0){
            _6322 = NewDouble((eudouble)_6322);
        }
    }
    else {
        _6322 = NewDouble(DBL_PTR(_6320)->dbl - (eudouble)_6321);
    }
    DeRef(_6320);
    _6320 = NOVALUE;
    _6321 = NOVALUE;
    // SubProg Get2 pc: 822 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 824 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6322;
    ((intptr_t *)_2)[2] = _6leading_whitespace_11108;
    _6323 = MAKE_SEQ(_1);
    _6322 = NOVALUE;
    // SubProg Get2 pc: 828 op: CONCAT (15)
    Concat((object_ptr)&_6324, _e_11112, _6323);
    DeRefDS(_6323);
    _6323 = NOVALUE;
    // SubProg Get2 pc: 832 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRefDS(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6300);
    _6300 = NOVALUE;
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6285);
    _6285 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6308);
    _6308 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6294);
    _6294 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    DeRef(_6316);
    _6316 = NOVALUE;
    return _6324;
    // SubProg Get2 pc: 836 op: ELSE (23)
    goto L4; // [836] 94
    // SubProg Get2 pc: 838 op: NOP1 (159)
L19: // addr: 839 pc: 838 sub: 11109 op: 159
    // SubProg Get2 pc: 839 op: STARTLINE (58)

    /** get.e:472				return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 841 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 843 op: MINUS (10)
    _6325 = _6string_next_10809 - 1;
    if ((object)((uintptr_t)_6325 +(uintptr_t) HIGH_BITS) >= 0){
        _6325 = NewDouble((eudouble)_6325);
    }
    // SubProg Get2 pc: 847 op: MINUS (10)
    if (IS_ATOM_INT(_6325)) {
        _6326 = _6325 - _offset_11114;
        if ((object)((uintptr_t)_6326 +(uintptr_t) HIGH_BITS) >= 0){
            _6326 = NewDouble((eudouble)_6326);
        }
    }
    else {
        _6326 = NewDouble(DBL_PTR(_6325)->dbl - (eudouble)_offset_11114);
    }
    DeRef(_6325);
    _6325 = NOVALUE;
    // SubProg Get2 pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 853 op: NOTEQ (4)
    _6327 = (_6ch_10810 != -1);
    // SubProg Get2 pc: 857 op: MINUS (10)
    if (IS_ATOM_INT(_6326)) {
        _6328 = _6326 - _6327;
        if ((object)((uintptr_t)_6328 +(uintptr_t) HIGH_BITS) >= 0){
            _6328 = NewDouble((eudouble)_6328);
        }
    }
    else {
        _6328 = NewDouble(DBL_PTR(_6326)->dbl - (eudouble)_6327);
    }
    DeRef(_6326);
    _6326 = NOVALUE;
    _6327 = NOVALUE;
    // SubProg Get2 pc: 861 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 863 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _6328;
    ((intptr_t*)_2)[4] = _6leading_whitespace_11108;
    _6329 = MAKE_SEQ(_1);
    _6328 = NOVALUE;
    // SubProg Get2 pc: 870 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_11111
    DeRef(_s_11111);

// block var e_11112
    DeRef(_e_11112);

// block var e1_11113

// block var offset_11114
    DeRef(_6300);
    _6300 = NOVALUE;
    DeRef(_6248);
    _6248 = NOVALUE;
    DeRef(_6285);
    _6285 = NOVALUE;
    DeRef(_6324);
    _6324 = NOVALUE;
    DeRef(_6254);
    _6254 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6308);
    _6308 = NOVALUE;
    DeRef(_6236);
    _6236 = NOVALUE;
    DeRef(_6294);
    _6294 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6261);
    _6261 = NOVALUE;
    DeRef(_6316);
    _6316 = NOVALUE;
    return _6329;
    // SubProg Get2 pc: 874 op: NOP1 (159)
    // SubProg Get2 pc: 875 op: STARTLINE (58)

    /** get.e:476		end while*/
    // SubProg Get2 pc: 877 op: ENDWHILE (22)
    goto L4; // [877] 94
    // SubProg Get2 pc: 879 op: NOP1 (159)
    // SubProg Get2 pc: 880 op: BADRETURNF (43)
    ;
}


object _6get_value(object _target_11250, object _start_point_11251, object _answer_type_11252)
{
    object _msg_inlined_crash_at_35_11263 = NOVALUE;
    object _data_inlined_crash_at_32_11262 = NOVALUE;
    object _where_inlined_where_at_76_11269 = NOVALUE;
    object _seek_1__tmp_at90_11274 = NOVALUE;
    object _seek_inlined_seek_at_90_11273 = NOVALUE;
    object _pos_inlined_seek_at_87_11272 = NOVALUE;
    object _msg_inlined_crash_at_108_11277 = NOVALUE;
    object _6345 = NOVALUE; // 11281 6345
// skipping _6344  name type: 0
    object _6342 = NOVALUE; // 11270 6342
    object _6341 = NOVALUE; // 11265 6341
    object _6340 = NOVALUE; // 11260 6340
    object _6336 = NOVALUE; // 11256 6336
    object _6335 = NOVALUE; // 11255 6335
    object _6334 = NOVALUE; // 11254 6334
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_value pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_value pc: 3 op: INTEGER_CHECK (96)
    // SubProg get_value pc: 5 op: STARTLINE (58)

    /** get.e:488		if answer_type != GET_SHORT_ANSWER and answer_type != GET_LONG_ANSWER then*/
    // SubProg get_value pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 9 op: NOTEQ (4)
    _6334 = (_answer_type_11252 != _6GET_SHORT_ANSWER_11242);
    // SubProg get_value pc: 13 op: SC1_AND_IF (146)
    if (_6334 == 0) {
        goto L1; // [13] 55
    }
    // SubProg get_value pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 19 op: NOTEQ (4)
    _6336 = (_answer_type_11252 != _6GET_LONG_ANSWER_11245);
    // SubProg get_value pc: 23 op: NOP1 (159)
    // SubProg get_value pc: 24 op: IF (20)
    if (_6336 == 0)
    {
        DeRef(_6336);
        _6336 = NOVALUE;
        goto L1; // [24] 55
    }
    else{
        DeRef(_6336);
        _6336 = NOVALUE;
    }
    // SubProg get_value pc: 27 op: STARTLINE (58)

    /** get.e:489			error:crash("Invalid type of answer, please only use %s (the default) or %s.", {"GET_SHORT_ANSWER", "GET_LONG_ANSWER"})*/
    // SubProg get_value pc: 29 op: RIGHT_BRACE_2 (85)
    RefDS(_6339);
    RefDS(_6338);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6338;
    ((intptr_t *)_2)[2] = _6339;
    _6340 = MAKE_SEQ(_1);
    // SubProg get_value pc: 33 op: ASSIGN (18)
    DeRef(_data_inlined_crash_at_32_11262);
    _data_inlined_crash_at_32_11262 = _6340;
    _6340 = NOVALUE;
    // SubProg get_value pc: 36 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg get_value pc: 38 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_35_11263);
    _msg_inlined_crash_at_35_11263 = EPrintf(-9999999, _6337, _data_inlined_crash_at_32_11262);
    // SubProg get_value pc: 42 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg get_value pc: 44 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_35_11263);
    // SubProg get_value pc: 47 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg get_value pc: 49 op: ELSE (23)
    goto L2; // [49] 52
    // SubProg get_value pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 11248 op: 159
    // SubProg get_value pc: 52 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from get_value @ 32

// block var data_inlined_crash_at_32_11262
    DeRef(_data_inlined_crash_at_32_11262);
    _data_inlined_crash_at_32_11262 = NOVALUE;

// block var msg_inlined_crash_at_35_11263
    DeRefi(_msg_inlined_crash_at_35_11263);
    _msg_inlined_crash_at_35_11263 = NOVALUE;
    // SubProg get_value pc: 54 op: NOP1 (159)
L1: // addr: 55 pc: 54 sub: 11248 op: 159
    // SubProg get_value pc: 55 op: STARTLINE (58)

    /** get.e:491		if atom(target) then -- get()*/
    // SubProg get_value pc: 57 op: IS_AN_ATOM (67)
    _6341 = IS_ATOM(_target_11250);
    // SubProg get_value pc: 60 op: IF (20)
    if (_6341 == 0)
    {
        _6341 = NOVALUE;
        goto L3; // [60] 142
    }
    else{
        _6341 = NOVALUE;
    }
    // SubProg get_value pc: 63 op: STARTLINE (58)

    /** get.e:492			input_file = target*/
    // SubProg get_value pc: 65 op: ASSIGN (18)
    Ref(_target_11250);
    _6input_file_10807 = _target_11250;
    // SubProg get_value pc: 68 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_6input_file_10807)) {
        _1 = (object)(DBL_PTR(_6input_file_10807)->dbl);
        DeRefDS(_6input_file_10807);
        _6input_file_10807 = _1;
    }
    // SubProg get_value pc: 70 op: STARTLINE (58)

    /** get.e:493			if start_point then*/
    // SubProg get_value pc: 72 op: IF (20)
    if (_start_point_11251 == 0)
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
    DeRef(_where_inlined_where_at_76_11269);
    _where_inlined_where_at_76_11269 = machine(20, _target_11250);
    // SubProg get_value pc: 83 op: NOP1 (159)
    // SubProg get_value pc: 84 op: PLUS (11)
    if (IS_ATOM_INT(_where_inlined_where_at_76_11269)) {
        _6342 = _where_inlined_where_at_76_11269 + _start_point_11251;
        if ((object)((uintptr_t)_6342 + (uintptr_t)HIGH_BITS) >= 0){
            _6342 = NewDouble((eudouble)_6342);
        }
    }
    else {
        _6342 = NewDouble(DBL_PTR(_where_inlined_where_at_76_11269)->dbl + (eudouble)_start_point_11251);
    }
    // SubProg get_value pc: 88 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_87_11272);
    _pos_inlined_seek_at_87_11272 = _6342;
    _6342 = NOVALUE;
    // SubProg get_value pc: 91 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg get_value pc: 93 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_87_11272);
    Ref(_target_11250);
    DeRef(_seek_1__tmp_at90_11274);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _target_11250;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_87_11272;
    _seek_1__tmp_at90_11274 = MAKE_SEQ(_1);
    // SubProg get_value pc: 97 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_90_11273 = machine(19, _seek_1__tmp_at90_11274);
    // SubProg get_value pc: 101 op: NOP1 (159)
    // SubProg get_value pc: 102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from get_value @ 87

// block var pos_inlined_seek_at_87_11272
    DeRef(_pos_inlined_seek_at_87_11272);
    _pos_inlined_seek_at_87_11272 = NOVALUE;

// block var seek_1__tmp_at90_11274
    DeRef(_seek_1__tmp_at90_11274);
    _seek_1__tmp_at90_11274 = NOVALUE;
    // SubProg get_value pc: 104 op: IF (20)
    if (_seek_inlined_seek_at_90_11273 == 0)
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
    DeRefi(_msg_inlined_crash_at_108_11277);
    _msg_inlined_crash_at_108_11277 = EPrintf(-9999999, _6343, _5);
    // SubProg get_value pc: 115 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg get_value pc: 117 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_108_11277);
    // SubProg get_value pc: 120 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg get_value pc: 122 op: ELSE (23)
    goto L6; // [122] 125
    // SubProg get_value pc: 124 op: NOP1 (159)
L6: // addr: 125 pc: 124 sub: 11248 op: 159
    // SubProg get_value pc: 125 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from get_value @ 108

// block var msg_inlined_crash_at_108_11277
    DeRefi(_msg_inlined_crash_at_108_11277);
    _msg_inlined_crash_at_108_11277 = NOVALUE;
    // SubProg get_value pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 11248 op: 159
    // SubProg get_value pc: 128 op: NOP1 (159)
L4: // addr: 129 pc: 128 sub: 11248 op: 159
    // SubProg get_value pc: 129 op: STARTLINE (58)

    /** get.e:498			string_next = 1*/
    // SubProg get_value pc: 131 op: ASSIGN_I (113)
    _6string_next_10809 = 1;
    // SubProg get_value pc: 134 op: STARTLINE (58)

    /** get.e:499			input_string = 0*/
    // SubProg get_value pc: 136 op: ASSIGN (18)
    DeRef(_6input_string_10808);
    _6input_string_10808 = 0;
    // SubProg get_value pc: 139 op: ELSE (23)
    goto L7; // [139] 153
    // SubProg get_value pc: 141 op: NOP1 (159)
L3: // addr: 142 pc: 141 sub: 11248 op: 159
    // SubProg get_value pc: 142 op: STARTLINE (58)

    /** get.e:501			input_string = target*/
    // SubProg get_value pc: 144 op: ASSIGN (18)
    Ref(_target_11250);
    DeRef(_6input_string_10808);
    _6input_string_10808 = _target_11250;
    // SubProg get_value pc: 147 op: STARTLINE (58)

    /** get.e:502			string_next = start_point*/
    // SubProg get_value pc: 149 op: ASSIGN_I (113)
    _6string_next_10809 = _start_point_11251;
    // SubProg get_value pc: 152 op: NOP1 (159)
L7: // addr: 153 pc: 152 sub: 11248 op: 159
    // SubProg get_value pc: 153 op: STARTLINE (58)

    /** get.e:504		if answer_type = GET_SHORT_ANSWER then*/
    // SubProg get_value pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 157 op: EQUALS_IFW (104)
    if (_answer_type_11252 != _6GET_SHORT_ANSWER_11242)
    goto L8; // [157] 166
    // SubProg get_value pc: 161 op: STARTLINE (58)

    /** get.e:505			get_ch()*/
    // SubProg get_value pc: 163 op: PROC (27)
    _6get_ch();
    // SubProg get_value pc: 165 op: NOP1 (159)
L8: // addr: 166 pc: 165 sub: 11248 op: 159
    // SubProg get_value pc: 166 op: STARTLINE (58)

    /** get.e:507		return call_func(answer_type, {})*/
    // SubProg get_value pc: 168 op: CALL_FUNC (137)
    _0 = (object)_00[_answer_type_11252].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_6345);
    _6345 = _1;
    // SubProg get_value pc: 172 op: RETURNF (28)

// Exiting block BLOCK: get_value

// block var target_11250
    DeRef(_target_11250);

// block var start_point_11251

// block var answer_type_11252
    DeRef(_6334);
    _6334 = NOVALUE;
    return _6345;
    // SubProg get_value pc: 176 op: BADRETURNF (43)
    ;
}


object _6value(object _st_11290, object _start_point_11291, object _answer_11292)
{
    object _6347 = NOVALUE; // 11293 6347
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg value pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg value pc: 3 op: INTEGER_CHECK (96)
    // SubProg value pc: 5 op: INTEGER_CHECK (96)
    // SubProg value pc: 7 op: STARTLINE (58)

    /** get.e:684		return get_value(st, start_point, answer)*/
    // SubProg value pc: 9 op: PROC (27)
    RefDS(_st_11290);
    _6347 = _6get_value(_st_11290, 1, _answer_11292);
    // SubProg value pc: 15 op: RETURNF (28)

// Exiting block BLOCK: value

// block var st_11290
    DeRefDS(_st_11290);

// block var start_point_11291

// block var answer_11292
    return _6347;
    // SubProg value pc: 19 op: BADRETURNF (43)
    ;
}



// 0x7BC4CE2A
