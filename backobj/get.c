// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _20get_ch()
{
// skipping _1843  name type: 0
// skipping _1842  name type: 0
// skipping _1841  name type: 0
// skipping _1840  name type: 0
// skipping _1839  name type: 0
// skipping _1838  name type: 0
    object _1837 = NOVALUE; // 3824 1837
    object _1836 = NOVALUE; // 3822 1836
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_ch pc: 1 op: STARTLINE (58)

    /** get.e:47		if sequence(input_string) then*/
    // SubProg get_ch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 5 op: IS_A_SEQUENCE (68)
    _1836 = IS_SEQUENCE(_20input_string_3816);
    // SubProg get_ch pc: 8 op: IF (20)
    if (_1836 == 0)
    {
        _1836 = NOVALUE;
        goto L1; // [8] 56
    }
    else{
        _1836 = NOVALUE;
    }
    // SubProg get_ch pc: 11 op: STARTLINE (58)

    /** get.e:48			if string_next <= length(input_string) then*/
    // SubProg get_ch pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_20input_string_3816)){
            _1837 = SEQ_PTR(_20input_string_3816)->length;
    }
    else {
        _1837 = 1;
    }
    // SubProg get_ch pc: 20 op: LESSEQ_IFW_I (123)
    if (_20string_next_3817 > _1837)
    goto L2; // [20] 47
    // SubProg get_ch pc: 24 op: STARTLINE (58)

    /** get.e:49				ch = input_string[string_next]*/
    // SubProg get_ch pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 30 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_20input_string_3816);
    _20ch_3818 = (object)*(((s1_ptr)_2)->base + _20string_next_3817);
    if (!IS_ATOM_INT(_20ch_3818)){
        _20ch_3818 = (object)DBL_PTR(_20ch_3818)->dbl;
    }
    // SubProg get_ch pc: 36 op: STARTLINE (58)

    /** get.e:50				string_next += 1*/
    // SubProg get_ch pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 40 op: PLUS1_I (117)
    _20string_next_3817 = _20string_next_3817 + 1;
    // SubProg get_ch pc: 44 op: ELSE (23)
    goto L3; // [44] 81
    // SubProg get_ch pc: 46 op: NOP1 (159)
L2: // addr: 47 pc: 46 sub: 3819 op: 159
    // SubProg get_ch pc: 47 op: STARTLINE (58)

    /** get.e:52				ch = GET_EOF*/
    // SubProg get_ch pc: 49 op: ASSIGN_I (113)
    _20ch_3818 = -1;
    // SubProg get_ch pc: 52 op: NOP1 (159)
    // SubProg get_ch pc: 53 op: ELSE (23)
    goto L3; // [53] 81
    // SubProg get_ch pc: 55 op: NOP1 (159)
L1: // addr: 56 pc: 55 sub: 3819 op: 159
    // SubProg get_ch pc: 56 op: STARTLINE (58)

    /** get.e:55			ch = getc(input_file)*/
    // SubProg get_ch pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 60 op: GETC (33)
    if (_20input_file_3815 != last_r_file_no) {
        last_r_file_ptr = which_file(_20input_file_3815, EF_READ);
        last_r_file_no = _20input_file_3815;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _20ch_3818 = getc((FILE*)xstdin);
        }
        else{
            _20ch_3818 = getc(last_r_file_ptr);
        }
    }
    else{
        _20ch_3818 = getc(last_r_file_ptr);
    }
    // SubProg get_ch pc: 63 op: STARTLINE (58)

    /** get.e:56			if ch = GET_EOF then*/
    // SubProg get_ch pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 67 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != -1)
    goto L4; // [67] 80
    // SubProg get_ch pc: 71 op: STARTLINE (58)

    /** get.e:57				string_next += 1*/
    // SubProg get_ch pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_ch pc: 75 op: PLUS1_I (117)
    _20string_next_3817 = _20string_next_3817 + 1;
    // SubProg get_ch pc: 79 op: NOP1 (159)
L4: // addr: 80 pc: 79 sub: 3819 op: 159
    // SubProg get_ch pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 3819 op: 159
    // SubProg get_ch pc: 81 op: STARTLINE (58)

    /** get.e:60	end procedure*/
    // SubProg get_ch pc: 83 op: RETURNP (29)

// Exiting block BLOCK: get_ch
    return;
    // SubProg get_ch pc: 86 op: BADRETURNF (43)
    ;
}


object _20escape_char(object _c_3845)
{
    object _i_3846 = NOVALUE;
    object _1849 = NOVALUE; // 3851 1849
// skipping _1848  name type: 0
// skipping _1847  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg escape_char pc: 1 op: INTEGER_CHECK (96)
    // SubProg escape_char pc: 3 op: STARTLINE (58)

    /** get.e:79		i = find(c, ESCAPE_CHARS)*/
    // SubProg escape_char pc: 5 op: FIND_FROM (176)
    _i_3846 = find_from(_c_3845, _20ESCAPE_CHARS_3839, 1);
    // SubProg escape_char pc: 10 op: STARTLINE (58)

    /** get.e:80		if i = 0 then*/
    // SubProg escape_char pc: 12 op: EQUALS_IFW_I (121)
    if (_i_3846 != 0)
    goto L1; // [12] 25
    // SubProg escape_char pc: 16 op: STARTLINE (58)

    /** get.e:81			return GET_FAIL*/
    // SubProg escape_char pc: 18 op: RETURNF (28)

// Exiting block BLOCK: escape_char

// block var c_3845

// block var i_3846
    return 1;
    // SubProg escape_char pc: 22 op: ELSE (23)
    goto L2; // [22] 36
    // SubProg escape_char pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 3843 op: 159
    // SubProg escape_char pc: 25 op: STARTLINE (58)

    /** get.e:83			return ESCAPED_CHARS[i]*/
    // SubProg escape_char pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_20ESCAPED_CHARS_3841);
    _1849 = (object)*(((s1_ptr)_2)->base + _i_3846);
    // SubProg escape_char pc: 31 op: RETURNF (28)
    Ref(_1849);

// Exiting block BLOCK: escape_char

// block var c_3845

// block var i_3846
    return _1849;
    // SubProg escape_char pc: 35 op: NOP1 (159)
L2: // addr: 36 pc: 35 sub: 3843 op: 159
    // SubProg escape_char pc: 36 op: BADRETURNF (43)
    ;
}


object _20get_qchar()
{
    object _c_3854 = NOVALUE;
    object _1860 = NOVALUE; // 3870 1860
    object _1859 = NOVALUE; // 3868 1859
// skipping _1858  name type: 0
    object _1857 = NOVALUE; // 3865 1857
// skipping _1856  name type: 0
    object _1854 = NOVALUE; // 3861 1854
// skipping _1853  name type: 0
// skipping _1852  name type: 0
// skipping _1851  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_qchar pc: 1 op: STARTLINE (58)

    /** get.e:92		get_ch()*/
    // SubProg get_qchar pc: 3 op: PROC (27)
    _20get_ch();
    // SubProg get_qchar pc: 5 op: STARTLINE (58)

    /** get.e:93		c = ch*/
    // SubProg get_qchar pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 9 op: ASSIGN_I (113)
    _c_3854 = _20ch_3818;
    // SubProg get_qchar pc: 12 op: STARTLINE (58)

    /** get.e:94		if ch = '\\' then*/
    // SubProg get_qchar pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 16 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 92)
    goto L1; // [16] 54
    // SubProg get_qchar pc: 20 op: STARTLINE (58)

    /** get.e:95			get_ch()*/
    // SubProg get_qchar pc: 22 op: PROC (27)
    _20get_ch();
    // SubProg get_qchar pc: 24 op: STARTLINE (58)

    /** get.e:96			c = escape_char(ch)*/
    // SubProg get_qchar pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 28 op: PROC (27)
    _c_3854 = _20escape_char(_20ch_3818);
    // SubProg get_qchar pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_3854)) {
        _1 = (object)(DBL_PTR(_c_3854)->dbl);
        DeRefDS(_c_3854);
        _c_3854 = _1;
    }
    // SubProg get_qchar pc: 34 op: STARTLINE (58)

    /** get.e:97			if c = GET_FAIL then*/
    // SubProg get_qchar pc: 36 op: EQUALS_IFW_I (121)
    if (_c_3854 != 1)
    goto L2; // [36] 74
    // SubProg get_qchar pc: 40 op: STARTLINE (58)

    /** get.e:98				return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 42 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1854 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 46 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_3854
    return _1854;
    // SubProg get_qchar pc: 50 op: NOP1 (159)
    // SubProg get_qchar pc: 51 op: ELSE (23)
    goto L2; // [51] 74
    // SubProg get_qchar pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 3852 op: 159
    // SubProg get_qchar pc: 54 op: STARTLINE (58)

    /** get.e:100		elsif ch = '\'' then*/
    // SubProg get_qchar pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 58 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 39)
    goto L3; // [58] 73
    // SubProg get_qchar pc: 62 op: STARTLINE (58)

    /** get.e:101			return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 64 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1857 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 68 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_3854
    DeRef(_1854);
    _1854 = NOVALUE;
    return _1857;
    // SubProg get_qchar pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 3852 op: 159
    // SubProg get_qchar pc: 73 op: NOP1 (159)
L2: // addr: 74 pc: 73 sub: 3852 op: 159
    // SubProg get_qchar pc: 74 op: STARTLINE (58)

    /** get.e:103		get_ch()*/
    // SubProg get_qchar pc: 76 op: PROC (27)
    _20get_ch();
    // SubProg get_qchar pc: 78 op: STARTLINE (58)

    /** get.e:104		if ch != '\'' then*/
    // SubProg get_qchar pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qchar pc: 82 op: NOTEQ_IFW_I (122)
    if (_20ch_3818 == 39)
    goto L4; // [82] 99
    // SubProg get_qchar pc: 86 op: STARTLINE (58)

    /** get.e:105			return {GET_FAIL, 0}*/
    // SubProg get_qchar pc: 88 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1859 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 92 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_3854
    DeRef(_1857);
    _1857 = NOVALUE;
    DeRef(_1854);
    _1854 = NOVALUE;
    return _1859;
    // SubProg get_qchar pc: 96 op: ELSE (23)
    goto L5; // [96] 114
    // SubProg get_qchar pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 3852 op: 159
    // SubProg get_qchar pc: 99 op: STARTLINE (58)

    /** get.e:107			get_ch()*/
    // SubProg get_qchar pc: 101 op: PROC (27)
    _20get_ch();
    // SubProg get_qchar pc: 103 op: STARTLINE (58)

    /** get.e:108			return {GET_SUCCESS, c}*/
    // SubProg get_qchar pc: 105 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _c_3854;
    _1860 = MAKE_SEQ(_1);
    // SubProg get_qchar pc: 109 op: RETURNF (28)

// Exiting block BLOCK: get_qchar

// block var c_3854
    DeRef(_1857);
    _1857 = NOVALUE;
    DeRef(_1854);
    _1854 = NOVALUE;
    DeRef(_1859);
    _1859 = NOVALUE;
    return _1860;
    // SubProg get_qchar pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 3852 op: 159
    // SubProg get_qchar pc: 114 op: BADRETURNF (43)
    ;
}


object _20get_heredoc(object _terminator_3873)
{
    object _text_3874 = NOVALUE;
    object _ends_at_3875 = NOVALUE;
    object _1875 = NOVALUE; // 3892 1875
    object _1874 = NOVALUE; // 3891 1874
    object _1873 = NOVALUE; // 3890 1873
    object _1872 = NOVALUE; // 3889 1872
    object _1871 = NOVALUE; // 3888 1871
// skipping _1870  name type: 0
// skipping _1869  name type: 0
    object _1868 = NOVALUE; // 3885 1868
// skipping _1867  name type: 0
    object _1866 = NOVALUE; // 3882 1866
    object _1865 = NOVALUE; // 3881 1865
    object _1864 = NOVALUE; // 3880 1864
    object _1863 = NOVALUE; // 3879 1863
// skipping _1862  name type: 0
    object _1861 = NOVALUE; // 3876 1861
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_heredoc pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_heredoc pc: 3 op: STARTLINE (58)

    /** get.e:113		sequence text = ""*/
    // SubProg get_heredoc pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_text_3874);
    _text_3874 = _5;
    // SubProg get_heredoc pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg get_heredoc pc: 10 op: STARTLINE (58)

    /** get.e:114		integer ends_at = 1 - length( terminator )*/
    // SubProg get_heredoc pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_terminator_3873)){
            _1861 = SEQ_PTR(_terminator_3873)->length;
    }
    else {
        _1861 = 1;
    }
    // SubProg get_heredoc pc: 15 op: MINUS_I (116)
    _ends_at_3875 = 1 - _1861;
    _1861 = NOVALUE;
    // SubProg get_heredoc pc: 19 op: STARTLINE (58)

    /** get.e:115		while ends_at < 1 or not match( terminator, text, ends_at ) with entry do*/
    // SubProg get_heredoc pc: 21 op: ELSE (23)
    goto L1; // [21] 69
    // SubProg get_heredoc pc: 23 op: NOPWHILE (158)
L2: // addr: 24 pc: 23 sub: 3871 op: 158
    // SubProg get_heredoc pc: 24 op: LESS (1)
    _1863 = (_ends_at_3875 < 1);
    // SubProg get_heredoc pc: 28 op: SC1_OR (143)
    if (_1863 != 0) {
        DeRef(_1864);
        _1864 = 1;
        goto L3; // [28] 44
    }
    // SubProg get_heredoc pc: 32 op: MATCH_FROM (177)
    _1865 = e_match_from(_terminator_3873, _text_3874, _ends_at_3875);
    // SubProg get_heredoc pc: 37 op: NOT (7)
    _1866 = (_1865 == 0);
    _1865 = NOVALUE;
    // SubProg get_heredoc pc: 40 op: SC2_OR (144)
    _1864 = (_1866 != 0);
    // SubProg get_heredoc pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 3871 op: 159
    // SubProg get_heredoc pc: 44 op: WHILE (47)
    if (_1864 == 0)
    {
        _1864 = NOVALUE;
        goto L4; // [44] 92
    }
    else{
        _1864 = NOVALUE;
    }
    // SubProg get_heredoc pc: 47 op: STARTLINE (58)

    /** get.e:116			if ch = GET_EOF then*/
    // SubProg get_heredoc pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_heredoc pc: 51 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != -1)
    goto L5; // [51] 66
    // SubProg get_heredoc pc: 55 op: STARTLINE (58)

    /** get.e:117				return { GET_FAIL, 0 }*/
    // SubProg get_heredoc pc: 57 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1868 = MAKE_SEQ(_1);
    // SubProg get_heredoc pc: 61 op: RETURNF (28)

// Exiting block BLOCK: get_heredoc

// block var terminator_3873
    DeRefDSi(_terminator_3873);

// block var text_3874
    DeRefi(_text_3874);

// block var ends_at_3875
    DeRef(_1866);
    _1866 = NOVALUE;
    DeRef(_1863);
    _1863 = NOVALUE;
    return _1868;
    // SubProg get_heredoc pc: 65 op: NOP1 (159)
L5: // addr: 66 pc: 65 sub: 3871 op: 159
    // SubProg get_heredoc pc: 66 op: STARTLINE (58)

    /** get.e:119		entry*/
    // SubProg get_heredoc pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 3871 op: 159
    // SubProg get_heredoc pc: 69 op: STARTLINE (58)

    /** get.e:120			get_ch()*/
    // SubProg get_heredoc pc: 71 op: PROC (27)
    _20get_ch();
    // SubProg get_heredoc pc: 73 op: STARTLINE (58)

    /** get.e:121			text &= ch*/
    // SubProg get_heredoc pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_heredoc pc: 77 op: CONCAT (15)
    Append(&_text_3874, _text_3874, _20ch_3818);
    // SubProg get_heredoc pc: 81 op: STARTLINE (58)

    /** get.e:122			ends_at += 1*/
    // SubProg get_heredoc pc: 83 op: PLUS1_I (117)
    _ends_at_3875 = _ends_at_3875 + 1;
    // SubProg get_heredoc pc: 87 op: STARTLINE (58)

    /** get.e:123		end while*/
    // SubProg get_heredoc pc: 89 op: ENDWHILE (22)
    goto L2; // [89] 24
    // SubProg get_heredoc pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 3871 op: 159
    // SubProg get_heredoc pc: 92 op: STARTLINE (58)

    /** get.e:124		return { GET_SUCCESS, head( text, length( text ) - length( terminator ) ) }*/
    // SubProg get_heredoc pc: 94 op: LENGTH (42)
    if (IS_SEQUENCE(_text_3874)){
            _1871 = SEQ_PTR(_text_3874)->length;
    }
    else {
        _1871 = 1;
    }
    // SubProg get_heredoc pc: 97 op: LENGTH (42)
    if (IS_SEQUENCE(_terminator_3873)){
            _1872 = SEQ_PTR(_terminator_3873)->length;
    }
    else {
        _1872 = 1;
    }
    // SubProg get_heredoc pc: 100 op: MINUS (10)
    _1873 = _1871 - _1872;
    _1871 = NOVALUE;
    _1872 = NOVALUE;
    // SubProg get_heredoc pc: 104 op: HEAD (198)
    {
        int len = SEQ_PTR(_text_3874)->length;
        int size = (IS_ATOM_INT(_1873)) ? _1873 : (object)(DBL_PTR(_1873)->dbl);
        if (size <= 0){
            DeRef( _1874 );
            _1874 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_text_3874);
            DeRef(_1874);
            _1874 = _text_3874;
        }
        else{
            Head(SEQ_PTR(_text_3874),size+1,&_1874);
        }
    }
    _1873 = NOVALUE;
    // SubProg get_heredoc pc: 108 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _1874;
    _1875 = MAKE_SEQ(_1);
    _1874 = NOVALUE;
    // SubProg get_heredoc pc: 112 op: RETURNF (28)

// Exiting block BLOCK: get_heredoc

// block var terminator_3873
    DeRefDSi(_terminator_3873);

// block var text_3874
    DeRefDSi(_text_3874);

// block var ends_at_3875
    DeRef(_1868);
    _1868 = NOVALUE;
    DeRef(_1866);
    _1866 = NOVALUE;
    DeRef(_1863);
    _1863 = NOVALUE;
    return _1875;
    // SubProg get_heredoc pc: 116 op: BADRETURNF (43)
    ;
}


object _20get_string()
{
    object _text_3895 = NOVALUE;
// skipping _1893  name type: 0
    object _1892 = NOVALUE; // 3919 1892
// skipping _1891  name type: 0
// skipping _1890  name type: 0
// skipping _1889  name type: 0
    object _1888 = NOVALUE; // 3913 1888
    object _1887 = NOVALUE; // 3912 1887
// skipping _1885  name type: 0
    object _1884 = NOVALUE; // 3908 1884
    object _1883 = NOVALUE; // 3907 1883
    object _1882 = NOVALUE; // 3906 1882
    object _1881 = NOVALUE; // 3905 1881
// skipping _1880  name type: 0
    object _1879 = NOVALUE; // 3901 1879
    object _1878 = NOVALUE; // 3900 1878
// skipping _1877  name type: 0
    object _1876 = NOVALUE; // 3898 1876
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_string pc: 1 op: STARTLINE (58)

    /** get.e:132		text = ""*/
    // SubProg get_string pc: 3 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_text_3895);
    _text_3895 = _5;
    // SubProg get_string pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg get_string pc: 8 op: STARTLINE (58)

    /** get.e:133		while TRUE do*/
    // SubProg get_string pc: 10 op: NOP2 (110)
    // SubProg get_string pc: 12 op: NOPWHILE (158)
L1: // addr: 13 pc: 12 sub: 3893 op: 158
    // SubProg get_string pc: 13 op: STARTLINE (58)

    /** get.e:134			get_ch()*/
    // SubProg get_string pc: 15 op: PROC (27)
    _20get_ch();
    // SubProg get_string pc: 17 op: STARTLINE (58)

    /** get.e:135			if ch = GET_EOF or ch = '\n' then*/
    // SubProg get_string pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 21 op: EQUALS (3)
    _1876 = (_20ch_3818 == -1);
    // SubProg get_string pc: 25 op: SC1_OR_IF (147)
    if (_1876 != 0) {
        goto L2; // [25] 40
    }
    // SubProg get_string pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 31 op: EQUALS (3)
    _1878 = (_20ch_3818 == 10);
    // SubProg get_string pc: 35 op: NOP1 (159)
    // SubProg get_string pc: 36 op: IF (20)
    if (_1878 == 0)
    {
        DeRef(_1878);
        _1878 = NOVALUE;
        goto L3; // [36] 53
    }
    else{
        DeRef(_1878);
        _1878 = NOVALUE;
    }
    // SubProg get_string pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 3893 op: 159
    // SubProg get_string pc: 40 op: STARTLINE (58)

    /** get.e:136				return {GET_FAIL, 0}*/
    // SubProg get_string pc: 42 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1879 = MAKE_SEQ(_1);
    // SubProg get_string pc: 46 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_3895
    DeRefi(_text_3895);
    DeRef(_1876);
    _1876 = NOVALUE;
    return _1879;
    // SubProg get_string pc: 50 op: ELSE (23)
    goto L4; // [50] 164
    // SubProg get_string pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 3893 op: 159
    // SubProg get_string pc: 53 op: STARTLINE (58)

    /** get.e:137			elsif ch = '"' then*/
    // SubProg get_string pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 57 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 34)
    goto L5; // [57] 121
    // SubProg get_string pc: 61 op: STARTLINE (58)

    /** get.e:138				get_ch()*/
    // SubProg get_string pc: 63 op: PROC (27)
    _20get_ch();
    // SubProg get_string pc: 65 op: STARTLINE (58)

    /** get.e:139				if length( text ) = 0 and ch = '"' then*/
    // SubProg get_string pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_text_3895)){
            _1881 = SEQ_PTR(_text_3895)->length;
    }
    else {
        _1881 = 1;
    }
    // SubProg get_string pc: 70 op: EQUALS (3)
    _1882 = (_1881 == 0);
    _1881 = NOVALUE;
    // SubProg get_string pc: 74 op: SC1_AND_IF (146)
    if (_1882 == 0) {
        goto L6; // [74] 108
    }
    // SubProg get_string pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 80 op: EQUALS (3)
    _1884 = (_20ch_3818 == 34);
    // SubProg get_string pc: 84 op: NOP1 (159)
    // SubProg get_string pc: 85 op: IF (20)
    if (_1884 == 0)
    {
        DeRef(_1884);
        _1884 = NOVALUE;
        goto L6; // [85] 108
    }
    else{
        DeRef(_1884);
        _1884 = NOVALUE;
    }
    // SubProg get_string pc: 88 op: STARTLINE (58)

    /** get.e:140					if ch = '"' then*/
    // SubProg get_string pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 92 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 34)
    goto L7; // [92] 107
    // SubProg get_string pc: 96 op: STARTLINE (58)

    /** get.e:141						return get_heredoc( `"""` )*/
    // SubProg get_string pc: 98 op: PROC (27)
    RefDS(_1886);
    _1887 = _20get_heredoc(_1886);
    // SubProg get_string pc: 102 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_3895
    DeRefi(_text_3895);
    DeRef(_1876);
    _1876 = NOVALUE;
    DeRef(_1882);
    _1882 = NOVALUE;
    DeRef(_1879);
    _1879 = NOVALUE;
    return _1887;
    // SubProg get_string pc: 106 op: NOP1 (159)
L7: // addr: 107 pc: 106 sub: 3893 op: 159
    // SubProg get_string pc: 107 op: NOP1 (159)
L6: // addr: 108 pc: 107 sub: 3893 op: 159
    // SubProg get_string pc: 108 op: STARTLINE (58)

    /** get.e:144				return {GET_SUCCESS, text}*/
    // SubProg get_string pc: 110 op: RIGHT_BRACE_2 (85)
    RefDS(_text_3895);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _text_3895;
    _1888 = MAKE_SEQ(_1);
    // SubProg get_string pc: 114 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_3895
    DeRefDSi(_text_3895);
    DeRef(_1876);
    _1876 = NOVALUE;
    DeRef(_1882);
    _1882 = NOVALUE;
    DeRef(_1887);
    _1887 = NOVALUE;
    DeRef(_1879);
    _1879 = NOVALUE;
    return _1888;
    // SubProg get_string pc: 118 op: ELSE (23)
    goto L4; // [118] 164
    // SubProg get_string pc: 120 op: NOP1 (159)
L5: // addr: 121 pc: 120 sub: 3893 op: 159
    // SubProg get_string pc: 121 op: STARTLINE (58)

    /** get.e:145			elsif ch = '\\' then*/
    // SubProg get_string pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 125 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 92)
    goto L8; // [125] 163
    // SubProg get_string pc: 129 op: STARTLINE (58)

    /** get.e:146				get_ch()*/
    // SubProg get_string pc: 131 op: PROC (27)
    _20get_ch();
    // SubProg get_string pc: 133 op: STARTLINE (58)

    /** get.e:147				ch = escape_char(ch)*/
    // SubProg get_string pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 137 op: PROC (27)
    _0 = _20escape_char(_20ch_3818);
    _20ch_3818 = _0;
    // SubProg get_string pc: 141 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_20ch_3818)) {
        _1 = (object)(DBL_PTR(_20ch_3818)->dbl);
        DeRefDS(_20ch_3818);
        _20ch_3818 = _1;
    }
    // SubProg get_string pc: 143 op: STARTLINE (58)

    /** get.e:148				if ch = GET_FAIL then*/
    // SubProg get_string pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 147 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 1)
    goto L9; // [147] 162
    // SubProg get_string pc: 151 op: STARTLINE (58)

    /** get.e:149					return {GET_FAIL, 0}*/
    // SubProg get_string pc: 153 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1892 = MAKE_SEQ(_1);
    // SubProg get_string pc: 157 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var text_3895
    DeRefi(_text_3895);
    DeRef(_1876);
    _1876 = NOVALUE;
    DeRef(_1888);
    _1888 = NOVALUE;
    DeRef(_1882);
    _1882 = NOVALUE;
    DeRef(_1887);
    _1887 = NOVALUE;
    DeRef(_1879);
    _1879 = NOVALUE;
    return _1892;
    // SubProg get_string pc: 161 op: NOP1 (159)
L9: // addr: 162 pc: 161 sub: 3893 op: 159
    // SubProg get_string pc: 162 op: NOP1 (159)
L8: // addr: 163 pc: 162 sub: 3893 op: 159
    // SubProg get_string pc: 163 op: NOP1 (159)
L4: // addr: 164 pc: 163 sub: 3893 op: 159
    // SubProg get_string pc: 164 op: STARTLINE (58)

    /** get.e:152			text = text & ch*/
    // SubProg get_string pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 168 op: CONCAT (15)
    Append(&_text_3895, _text_3895, _20ch_3818);
    // SubProg get_string pc: 172 op: STARTLINE (58)

    /** get.e:153		end while*/
    // SubProg get_string pc: 174 op: ENDWHILE (22)
    goto L1; // [174] 13
    // SubProg get_string pc: 176 op: NOP1 (159)
    // SubProg get_string pc: 177 op: BADRETURNF (43)
    ;
}


object _20read_comment()
{
    object _1913 = NOVALUE; // 3954 1913
    object _1912 = NOVALUE; // 3953 1912
// skipping _1911  name type: 0
    object _1910 = NOVALUE; // 3951 1910
// skipping _1909  name type: 0
    object _1908 = NOVALUE; // 3949 1908
// skipping _1907  name type: 0
    object _1906 = NOVALUE; // 3946 1906
    object _1905 = NOVALUE; // 3942 1905
    object _1904 = NOVALUE; // 3940 1904
// skipping _1903  name type: 0
    object _1902 = NOVALUE; // 3937 1902
    object _1901 = NOVALUE; // 3936 1901
    object _1900 = NOVALUE; // 3935 1900
    object _1899 = NOVALUE; // 3934 1899
    object _1898 = NOVALUE; // 3933 1898
    object _1897 = NOVALUE; // 3931 1897
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_comment pc: 1 op: STARTLINE (58)

    /** get.e:163		if atom(input_string) then*/
    // SubProg read_comment pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 5 op: IS_AN_ATOM (67)
    _1897 = IS_ATOM(_20input_string_3816);
    // SubProg read_comment pc: 8 op: IF (20)
    if (_1897 == 0)
    {
        _1897 = NOVALUE;
        goto L1; // [8] 98
    }
    else{
        _1897 = NOVALUE;
    }
    // SubProg read_comment pc: 11 op: STARTLINE (58)

    /** get.e:164			while ch!='\n' and ch!='\r' and ch!=-1 do*/
    // SubProg read_comment pc: 13 op: NOP2 (110)
    // SubProg read_comment pc: 15 op: NOPWHILE (158)
L2: // addr: 16 pc: 15 sub: 3928 op: 158
    // SubProg read_comment pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 18 op: NOTEQ (4)
    _1898 = (_20ch_3818 != 10);
    // SubProg read_comment pc: 22 op: SC1_AND (141)
    if (_1898 == 0) {
        _1899 = 0;
        goto L3; // [22] 36
    }
    // SubProg read_comment pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 28 op: NOTEQ (4)
    _1900 = (_20ch_3818 != 13);
    // SubProg read_comment pc: 32 op: SC2_AND (142)
    _1899 = (_1900 != 0);
    // SubProg read_comment pc: 35 op: NOP1 (159)
L3: // addr: 36 pc: 35 sub: 3928 op: 159
    // SubProg read_comment pc: 36 op: SC1_AND_IF (146)
    if (_1899 == 0) {
        goto L4; // [36] 59
    }
    // SubProg read_comment pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 42 op: NOTEQ (4)
    _1902 = (_20ch_3818 != -1);
    // SubProg read_comment pc: 46 op: NOP1 (159)
    // SubProg read_comment pc: 47 op: WHILE (47)
    if (_1902 == 0)
    {
        DeRef(_1902);
        _1902 = NOVALUE;
        goto L4; // [47] 59
    }
    else{
        DeRef(_1902);
        _1902 = NOVALUE;
    }
    // SubProg read_comment pc: 50 op: STARTLINE (58)

    /** get.e:165				get_ch()*/
    // SubProg read_comment pc: 52 op: PROC (27)
    _20get_ch();
    // SubProg read_comment pc: 54 op: STARTLINE (58)

    /** get.e:166			end while*/
    // SubProg read_comment pc: 56 op: ENDWHILE (22)
    goto L2; // [56] 16
    // SubProg read_comment pc: 58 op: NOP1 (159)
L4: // addr: 59 pc: 58 sub: 3928 op: 159
    // SubProg read_comment pc: 59 op: STARTLINE (58)

    /** get.e:167			get_ch()*/
    // SubProg read_comment pc: 61 op: PROC (27)
    _20get_ch();
    // SubProg read_comment pc: 63 op: STARTLINE (58)

    /** get.e:168			if ch=-1 then*/
    // SubProg read_comment pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 67 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != -1)
    goto L5; // [67] 84
    // SubProg read_comment pc: 71 op: STARTLINE (58)

    /** get.e:169				return {GET_EOF, 0}*/
    // SubProg read_comment pc: 73 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _1904 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 77 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_1898);
    _1898 = NOVALUE;
    DeRef(_1900);
    _1900 = NOVALUE;
    return _1904;
    // SubProg read_comment pc: 81 op: ELSE (23)
    goto L6; // [81] 182
    // SubProg read_comment pc: 83 op: NOP1 (159)
L5: // addr: 84 pc: 83 sub: 3928 op: 159
    // SubProg read_comment pc: 84 op: STARTLINE (58)

    /** get.e:171				return {GET_IGNORE, 0}*/
    // SubProg read_comment pc: 86 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _1905 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 90 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_1898);
    _1898 = NOVALUE;
    DeRef(_1900);
    _1900 = NOVALUE;
    DeRef(_1904);
    _1904 = NOVALUE;
    return _1905;
    // SubProg read_comment pc: 94 op: NOP1 (159)
    // SubProg read_comment pc: 95 op: ELSE (23)
    goto L6; // [95] 182
    // SubProg read_comment pc: 97 op: NOP1 (159)
L1: // addr: 98 pc: 97 sub: 3928 op: 159
    // SubProg read_comment pc: 98 op: STARTLINE (58)

    /** get.e:174			for i=string_next to length(input_string) do*/
    // SubProg read_comment pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_comment pc: 104 op: LENGTH (42)
    if (IS_SEQUENCE(_20input_string_3816)){
            _1906 = SEQ_PTR(_20input_string_3816)->length;
    }
    else {
        _1906 = 1;
    }
    // SubProg read_comment pc: 107 op: FOR_I (125)
    {
        object _i_3945;
        _i_3945 = _20string_next_3817;
L7: // addr: 114 pc: 107 sub: 3928 op: 125
        if (_i_3945 > _1906){
            goto L8; // [107] 171
        }
        // SubProg read_comment pc: 114 op: STARTLINE (58)

        /** get.e:175				ch=input_string[i]*/
        // SubProg read_comment pc: 116 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 118 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_20input_string_3816);
        _20ch_3818 = (object)*(((s1_ptr)_2)->base + _i_3945);
        if (!IS_ATOM_INT(_20ch_3818)){
            _20ch_3818 = (object)DBL_PTR(_20ch_3818)->dbl;
        }
        // SubProg read_comment pc: 124 op: STARTLINE (58)

        /** get.e:176				if ch='\n' or ch='\r' then*/
        // SubProg read_comment pc: 126 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 128 op: EQUALS (3)
        _1908 = (_20ch_3818 == 10);
        // SubProg read_comment pc: 132 op: SC1_OR_IF (147)
        if (_1908 != 0) {
            goto L9; // [132] 147
        }
        // SubProg read_comment pc: 136 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_comment pc: 138 op: EQUALS (3)
        _1910 = (_20ch_3818 == 13);
        // SubProg read_comment pc: 142 op: NOP1 (159)
        // SubProg read_comment pc: 143 op: IF (20)
        if (_1910 == 0)
        {
            DeRef(_1910);
            _1910 = NOVALUE;
            goto LA; // [143] 164
        }
        else{
            DeRef(_1910);
            _1910 = NOVALUE;
        }
        // SubProg read_comment pc: 146 op: NOP1 (159)
L9: // addr: 147 pc: 146 sub: 3928 op: 159
        // SubProg read_comment pc: 147 op: STARTLINE (58)

        /** get.e:177					string_next=i+1*/
        // SubProg read_comment pc: 149 op: PLUS1_I (117)
        _20string_next_3817 = _i_3945 + 1;
        // SubProg read_comment pc: 153 op: STARTLINE (58)

        /** get.e:178					return {GET_IGNORE, 0}*/
        // SubProg read_comment pc: 155 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = 0;
        _1912 = MAKE_SEQ(_1);
        // SubProg read_comment pc: 159 op: RETURNF (28)

// Exiting block BLOCK: read_comment
        DeRef(_1898);
        _1898 = NOVALUE;
        DeRef(_1900);
        _1900 = NOVALUE;
        DeRef(_1905);
        _1905 = NOVALUE;
        DeRef(_1904);
        _1904 = NOVALUE;
        DeRef(_1908);
        _1908 = NOVALUE;
        return _1912;
        // SubProg read_comment pc: 163 op: NOP1 (159)
LA: // addr: 164 pc: 163 sub: 3928 op: 159
        // SubProg read_comment pc: 164 op: STARTLINE (58)

        /** get.e:180			end for*/
        // SubProg read_comment pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_3945 = _i_3945 + 1;
        goto L7; // [166] 114
L8: // addr: 171 pc: 166 sub: 3928 op: 54
        ;
    }
    // SubProg read_comment pc: 171 op: STARTLINE (58)

    /** get.e:181			return {GET_EOF, 0}*/
    // SubProg read_comment pc: 173 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _1913 = MAKE_SEQ(_1);
    // SubProg read_comment pc: 177 op: RETURNF (28)

// Exiting block BLOCK: read_comment
    DeRef(_1912);
    _1912 = NOVALUE;
    DeRef(_1898);
    _1898 = NOVALUE;
    DeRef(_1900);
    _1900 = NOVALUE;
    DeRef(_1905);
    _1905 = NOVALUE;
    DeRef(_1904);
    _1904 = NOVALUE;
    DeRef(_1908);
    _1908 = NOVALUE;
    return _1913;
    // SubProg read_comment pc: 181 op: NOP1 (159)
L6: // addr: 182 pc: 181 sub: 3928 op: 159
    // SubProg read_comment pc: 182 op: BADRETURNF (43)
    ;
}


object _20get_number()
{
    object _sign_3957 = NOVALUE;
    object _e_sign_3958 = NOVALUE;
    object _ndigits_3959 = NOVALUE;
    object _hex_digit_3960 = NOVALUE;
    object _mantissa_3961 = NOVALUE;
    object _dec_3962 = NOVALUE;
    object _e_mag_3963 = NOVALUE;
    object _number_string_3964 = NOVALUE;
    object _1973 = NOVALUE; // 4044 1973
// skipping _1972  name type: 0
    object _1971 = NOVALUE; // 4041 1971
// skipping _1970  name type: 0
    object _1969 = NOVALUE; // 4038 1969
    object _1968 = NOVALUE; // 4037 1968
    object _1967 = NOVALUE; // 4036 1967
    object _1966 = NOVALUE; // 4034 1966
    object _1965 = NOVALUE; // 4033 1965
    object _1964 = NOVALUE; // 4032 1964
// skipping _1963  name type: 0
// skipping _1962  name type: 0
// skipping _1961  name type: 0
// skipping _1960  name type: 0
// skipping _1959  name type: 0
    object _1958 = NOVALUE; // 4023 1958
// skipping _1957  name type: 0
    object _1956 = NOVALUE; // 4021 1956
// skipping _1955  name type: 0
    object _1954 = NOVALUE; // 4018 1954
// skipping _1953  name type: 0
// skipping _1952  name type: 0
// skipping _1951  name type: 0
// skipping _1950  name type: 0
    object _1949 = NOVALUE; // 4012 1949
    object _1948 = NOVALUE; // 4011 1948
// skipping _1947  name type: 0
    object _1946 = NOVALUE; // 4009 1946
    object _1945 = NOVALUE; // 4008 1945
    object _1944 = NOVALUE; // 4007 1944
// skipping _1943  name type: 0
// skipping _1942  name type: 0
// skipping _1941  name type: 0
// skipping _1940  name type: 0
    object _1939 = NOVALUE; // 4000 1939
    object _1938 = NOVALUE; // 3999 1938
// skipping _1937  name type: 0
    object _1936 = NOVALUE; // 3997 1936
    object _1935 = NOVALUE; // 3996 1935
    object _1934 = NOVALUE; // 3995 1934
    object _1933 = NOVALUE; // 3993 1933
    object _1932 = NOVALUE; // 3991 1932
    object _1931 = NOVALUE; // 3990 1931
// skipping _1930  name type: 0
// skipping _1929  name type: 0
// skipping _1928  name type: 0
    object _1927 = NOVALUE; // 3984 1927
// skipping _1926  name type: 0
// skipping _1925  name type: 0
// skipping _1924  name type: 0
    object _1923 = NOVALUE; // 3979 1923
// skipping _1922  name type: 0
// skipping _1921  name type: 0
// skipping _1920  name type: 0
// skipping _1919  name type: 0
    object _1918 = NOVALUE; // 3971 1918
// skipping _1917  name type: 0
// skipping _1916  name type: 0
// skipping _1915  name type: 0
// skipping _1914  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_number pc: 1 op: STARTLINE (58)

    /** get.e:192		sequence number_string = { ch }*/
    // SubProg get_number pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 5 op: RIGHT_BRACE_N (31)
    _0 = _number_string_3964;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _20ch_3818;
    _number_string_3964 = MAKE_SEQ(_1);
    DeRefi(_0);
    // SubProg get_number pc: 9 op: STARTLINE (58)

    /** get.e:194		sign = +1*/
    // SubProg get_number pc: 11 op: ASSIGN_I (113)
    _sign_3957 = 1;
    // SubProg get_number pc: 14 op: STARTLINE (58)

    /** get.e:195		mantissa = 0*/
    // SubProg get_number pc: 16 op: ASSIGN (18)
    DeRef(_mantissa_3961);
    _mantissa_3961 = 0;
    // SubProg get_number pc: 19 op: STARTLINE (58)

    /** get.e:196		ndigits = 0*/
    // SubProg get_number pc: 21 op: ASSIGN_I (113)
    _ndigits_3959 = 0;
    // SubProg get_number pc: 24 op: STARTLINE (58)

    /** get.e:199		if ch = '-' then*/
    // SubProg get_number pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 28 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 45)
    goto L1; // [28] 70
    // SubProg get_number pc: 32 op: STARTLINE (58)

    /** get.e:200			sign = -1*/
    // SubProg get_number pc: 34 op: ASSIGN_I (113)
    _sign_3957 = -1;
    // SubProg get_number pc: 37 op: STARTLINE (58)

    /** get.e:201			get_ch()*/
    // SubProg get_number pc: 39 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 41 op: STARTLINE (58)

    /** get.e:202			number_string &= ch*/
    // SubProg get_number pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 45 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 49 op: STARTLINE (58)

    /** get.e:203			if ch='-' then*/
    // SubProg get_number pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 53 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 45)
    goto L2; // [53] 92
    // SubProg get_number pc: 57 op: STARTLINE (58)

    /** get.e:204				return read_comment()*/
    // SubProg get_number pc: 59 op: PROC (27)
    _1918 = _20read_comment();
    // SubProg get_number pc: 62 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_3957

// block var ndigits_3959

// block var hex_digit_3960

// block var mantissa_3961

// block var dec_3962
    DeRef(_dec_3962);

// block var number_string_3964
    DeRefDSi(_number_string_3964);
    return _1918;
    // SubProg get_number pc: 66 op: NOP1 (159)
    // SubProg get_number pc: 67 op: ELSE (23)
    goto L2; // [67] 92
    // SubProg get_number pc: 69 op: NOP1 (159)
L1: // addr: 70 pc: 69 sub: 3955 op: 159
    // SubProg get_number pc: 70 op: STARTLINE (58)

    /** get.e:206		elsif ch = '+' then*/
    // SubProg get_number pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 74 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 43)
    goto L3; // [74] 91
    // SubProg get_number pc: 78 op: STARTLINE (58)

    /** get.e:207			get_ch()*/
    // SubProg get_number pc: 80 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 82 op: STARTLINE (58)

    /** get.e:208			number_string &= ch*/
    // SubProg get_number pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 86 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 90 op: NOP1 (159)
L3: // addr: 91 pc: 90 sub: 3955 op: 159
    // SubProg get_number pc: 91 op: NOP1 (159)
L2: // addr: 92 pc: 91 sub: 3955 op: 159
    // SubProg get_number pc: 92 op: STARTLINE (58)

    /** get.e:212		if ch = '#' then*/
    // SubProg get_number pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 96 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 35)
    goto L4; // [96] 210
    // SubProg get_number pc: 100 op: STARTLINE (58)

    /** get.e:214			get_ch()*/
    // SubProg get_number pc: 102 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 104 op: STARTLINE (58)

    /** get.e:215			number_string &= ch*/
    // SubProg get_number pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 108 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 112 op: STARTLINE (58)

    /** get.e:216			while TRUE do*/
    // SubProg get_number pc: 114 op: NOP2 (110)
    // SubProg get_number pc: 116 op: NOPWHILE (158)
L5: // addr: 117 pc: 116 sub: 3955 op: 158
    // SubProg get_number pc: 117 op: STARTLINE (58)

    /** get.e:217				hex_digit = find(ch, HEX_DIGITS)-1*/
    // SubProg get_number pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 123 op: FIND_FROM (176)
    _1923 = find_from(_20ch_3818, _20HEX_DIGITS_3798, 1);
    // SubProg get_number pc: 128 op: MINUS_I (116)
    _hex_digit_3960 = _1923 - 1;
    _1923 = NOVALUE;
    // SubProg get_number pc: 132 op: STARTLINE (58)

    /** get.e:218				if hex_digit >= 0 then*/
    // SubProg get_number pc: 134 op: GREATEREQ_IFW_I (120)
    if (_hex_digit_3960 < 0)
    goto L6; // [134] 169
    // SubProg get_number pc: 138 op: STARTLINE (58)

    /** get.e:219					ndigits += 1*/
    // SubProg get_number pc: 140 op: PLUS1_I (117)
    _ndigits_3959 = _ndigits_3959 + 1;
    // SubProg get_number pc: 144 op: STARTLINE (58)

    /** get.e:220					mantissa = mantissa * 16 + hex_digit*/
    // SubProg get_number pc: 146 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_3961)) {
        if (_mantissa_3961 == (short)_mantissa_3961){
            _1927 = _mantissa_3961 * 16;
        }
        else{
            _1927 = NewDouble(_mantissa_3961 * (eudouble)16);
        }
    }
    else {
        _1927 = NewDouble(DBL_PTR(_mantissa_3961)->dbl * (eudouble)16);
    }
    // SubProg get_number pc: 150 op: PLUS (11)
    DeRef(_mantissa_3961);
    if (IS_ATOM_INT(_1927)) {
        _mantissa_3961 = _1927 + _hex_digit_3960;
        if ((object)((uintptr_t)_mantissa_3961 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_3961 = NewDouble((eudouble)_mantissa_3961);
        }
    }
    else {
        _mantissa_3961 = NewDouble(DBL_PTR(_1927)->dbl + (eudouble)_hex_digit_3960);
    }
    DeRef(_1927);
    _1927 = NOVALUE;
    // SubProg get_number pc: 154 op: STARTLINE (58)

    /** get.e:221					get_ch()*/
    // SubProg get_number pc: 156 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 158 op: STARTLINE (58)

    /** get.e:222					number_string &= ch*/
    // SubProg get_number pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 162 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 166 op: ELSE (23)
    goto L5; // [166] 117
    // SubProg get_number pc: 168 op: NOP1 (159)
L6: // addr: 169 pc: 168 sub: 3955 op: 159
    // SubProg get_number pc: 169 op: STARTLINE (58)

    /** get.e:224					if ndigits > 0 then*/
    // SubProg get_number pc: 171 op: GREATER_IFW_I (124)
    if (_ndigits_3959 <= 0)
    goto L7; // [171] 192
    // SubProg get_number pc: 175 op: STARTLINE (58)

    /** get.e:225						return {GET_SUCCESS, sign * mantissa}*/
    // SubProg get_number pc: 177 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_3961)) {
        if (_sign_3957 == (short)_sign_3957 && _mantissa_3961 <= INT15 && _mantissa_3961 >= -INT15){
            _1931 = _sign_3957 * _mantissa_3961;
        }
        else{
            _1931 = NewDouble(_sign_3957 * (eudouble)_mantissa_3961);
        }
    }
    else {
        _1931 = NewDouble((eudouble)_sign_3957 * DBL_PTR(_mantissa_3961)->dbl);
    }
    // SubProg get_number pc: 181 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _1931;
    _1932 = MAKE_SEQ(_1);
    _1931 = NOVALUE;
    // SubProg get_number pc: 185 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_3957

// block var ndigits_3959

// block var hex_digit_3960

// block var mantissa_3961
    DeRef(_mantissa_3961);

// block var dec_3962
    DeRef(_dec_3962);

// block var number_string_3964
    DeRefi(_number_string_3964);
    DeRef(_1918);
    _1918 = NOVALUE;
    return _1932;
    // SubProg get_number pc: 189 op: ELSE (23)
    goto L5; // [189] 117
    // SubProg get_number pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 3955 op: 159
    // SubProg get_number pc: 192 op: STARTLINE (58)

    /** get.e:227						return {GET_FAIL, 0}*/
    // SubProg get_number pc: 194 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1933 = MAKE_SEQ(_1);
    // SubProg get_number pc: 198 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_3957

// block var ndigits_3959

// block var hex_digit_3960

// block var mantissa_3961
    DeRef(_mantissa_3961);

// block var dec_3962
    DeRef(_dec_3962);

// block var number_string_3964
    DeRefi(_number_string_3964);
    DeRef(_1932);
    _1932 = NOVALUE;
    DeRef(_1918);
    _1918 = NOVALUE;
    return _1933;
    // SubProg get_number pc: 202 op: NOP1 (159)
    // SubProg get_number pc: 203 op: NOP1 (159)
    // SubProg get_number pc: 204 op: STARTLINE (58)

    /** get.e:230			end while*/
    // SubProg get_number pc: 206 op: ENDWHILE (22)
    goto L5; // [206] 117
    // SubProg get_number pc: 208 op: NOP1 (159)
    // SubProg get_number pc: 209 op: NOP1 (159)
L4: // addr: 210 pc: 209 sub: 3955 op: 159
    // SubProg get_number pc: 210 op: STARTLINE (58)

    /** get.e:234		while ch >= '0' and ch <= '9' do*/
    // SubProg get_number pc: 212 op: NOP2 (110)
    // SubProg get_number pc: 214 op: NOPWHILE (158)
L8: // addr: 215 pc: 214 sub: 3955 op: 158
    // SubProg get_number pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 217 op: GREATEREQ (2)
    _1934 = (_20ch_3818 >= 48);
    // SubProg get_number pc: 221 op: SC1_AND_IF (146)
    if (_1934 == 0) {
        goto L9; // [221] 274
    }
    // SubProg get_number pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 227 op: LESSEQ (5)
    _1936 = (_20ch_3818 <= 57);
    // SubProg get_number pc: 231 op: NOP1 (159)
    // SubProg get_number pc: 232 op: WHILE (47)
    if (_1936 == 0)
    {
        DeRef(_1936);
        _1936 = NOVALUE;
        goto L9; // [232] 274
    }
    else{
        DeRef(_1936);
        _1936 = NOVALUE;
    }
    // SubProg get_number pc: 235 op: STARTLINE (58)

    /** get.e:235			ndigits += 1*/
    // SubProg get_number pc: 237 op: PLUS1_I (117)
    _ndigits_3959 = _ndigits_3959 + 1;
    // SubProg get_number pc: 241 op: STARTLINE (58)

    /** get.e:236			mantissa = mantissa * 10 + (ch - '0')*/
    // SubProg get_number pc: 243 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_3961)) {
        if (_mantissa_3961 == (short)_mantissa_3961){
            _1938 = _mantissa_3961 * 10;
        }
        else{
            _1938 = NewDouble(_mantissa_3961 * (eudouble)10);
        }
    }
    else {
        _1938 = NewDouble(DBL_PTR(_mantissa_3961)->dbl * (eudouble)10);
    }
    // SubProg get_number pc: 247 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 249 op: MINUS (10)
    _1939 = _20ch_3818 - 48;
    if ((object)((uintptr_t)_1939 +(uintptr_t) HIGH_BITS) >= 0){
        _1939 = NewDouble((eudouble)_1939);
    }
    // SubProg get_number pc: 253 op: PLUS (11)
    DeRef(_mantissa_3961);
    if (IS_ATOM_INT(_1938) && IS_ATOM_INT(_1939)) {
        _mantissa_3961 = _1938 + _1939;
        if ((object)((uintptr_t)_mantissa_3961 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_3961 = NewDouble((eudouble)_mantissa_3961);
        }
    }
    else {
        if (IS_ATOM_INT(_1938)) {
            _mantissa_3961 = NewDouble((eudouble)_1938 + DBL_PTR(_1939)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1939)) {
                _mantissa_3961 = NewDouble(DBL_PTR(_1938)->dbl + (eudouble)_1939);
            }
            else
            _mantissa_3961 = NewDouble(DBL_PTR(_1938)->dbl + DBL_PTR(_1939)->dbl);
        }
    }
    DeRef(_1938);
    _1938 = NOVALUE;
    DeRef(_1939);
    _1939 = NOVALUE;
    // SubProg get_number pc: 257 op: STARTLINE (58)

    /** get.e:237			get_ch()*/
    // SubProg get_number pc: 259 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 261 op: STARTLINE (58)

    /** get.e:238			number_string &= ch*/
    // SubProg get_number pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 265 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 269 op: STARTLINE (58)

    /** get.e:239		end while*/
    // SubProg get_number pc: 271 op: ENDWHILE (22)
    goto L8; // [271] 215
    // SubProg get_number pc: 273 op: NOP1 (159)
L9: // addr: 274 pc: 273 sub: 3955 op: 159
    // SubProg get_number pc: 274 op: STARTLINE (58)

    /** get.e:241		if ch = '.' then*/
    // SubProg get_number pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 278 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 46)
    goto LA; // [278] 370
    // SubProg get_number pc: 282 op: STARTLINE (58)

    /** get.e:243			get_ch()*/
    // SubProg get_number pc: 284 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 286 op: STARTLINE (58)

    /** get.e:244			number_string &= ch*/
    // SubProg get_number pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 290 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 294 op: STARTLINE (58)

    /** get.e:245			dec = 10*/
    // SubProg get_number pc: 296 op: ASSIGN (18)
    DeRef(_dec_3962);
    _dec_3962 = 10;
    // SubProg get_number pc: 299 op: STARTLINE (58)

    /** get.e:246			while ch >= '0' and ch <= '9' do*/
    // SubProg get_number pc: 301 op: NOP2 (110)
    // SubProg get_number pc: 303 op: NOPWHILE (158)
LB: // addr: 304 pc: 303 sub: 3955 op: 158
    // SubProg get_number pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 306 op: GREATEREQ (2)
    _1944 = (_20ch_3818 >= 48);
    // SubProg get_number pc: 310 op: SC1_AND_IF (146)
    if (_1944 == 0) {
        goto LC; // [310] 369
    }
    // SubProg get_number pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 316 op: LESSEQ (5)
    _1946 = (_20ch_3818 <= 57);
    // SubProg get_number pc: 320 op: NOP1 (159)
    // SubProg get_number pc: 321 op: WHILE (47)
    if (_1946 == 0)
    {
        DeRef(_1946);
        _1946 = NOVALUE;
        goto LC; // [321] 369
    }
    else{
        DeRef(_1946);
        _1946 = NOVALUE;
    }
    // SubProg get_number pc: 324 op: STARTLINE (58)

    /** get.e:247				ndigits += 1*/
    // SubProg get_number pc: 326 op: PLUS1_I (117)
    _ndigits_3959 = _ndigits_3959 + 1;
    // SubProg get_number pc: 330 op: STARTLINE (58)

    /** get.e:248				mantissa += (ch - '0') / dec*/
    // SubProg get_number pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 334 op: MINUS (10)
    _1948 = _20ch_3818 - 48;
    if ((object)((uintptr_t)_1948 +(uintptr_t) HIGH_BITS) >= 0){
        _1948 = NewDouble((eudouble)_1948);
    }
    // SubProg get_number pc: 338 op: DIVIDE (14)
    if (IS_ATOM_INT(_1948) && IS_ATOM_INT(_dec_3962)) {
        _1949 = (_1948 % _dec_3962) ? NewDouble((eudouble)_1948 / _dec_3962) : (_1948 / _dec_3962);
    }
    else {
        if (IS_ATOM_INT(_1948)) {
            _1949 = NewDouble((eudouble)_1948 / DBL_PTR(_dec_3962)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_3962)) {
                _1949 = NewDouble(DBL_PTR(_1948)->dbl / (eudouble)_dec_3962);
            }
            else
            _1949 = NewDouble(DBL_PTR(_1948)->dbl / DBL_PTR(_dec_3962)->dbl);
        }
    }
    DeRef(_1948);
    _1948 = NOVALUE;
    // SubProg get_number pc: 342 op: PLUS (11)
    _0 = _mantissa_3961;
    if (IS_ATOM_INT(_mantissa_3961) && IS_ATOM_INT(_1949)) {
        _mantissa_3961 = _mantissa_3961 + _1949;
        if ((object)((uintptr_t)_mantissa_3961 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_3961 = NewDouble((eudouble)_mantissa_3961);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_3961)) {
            _mantissa_3961 = NewDouble((eudouble)_mantissa_3961 + DBL_PTR(_1949)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1949)) {
                _mantissa_3961 = NewDouble(DBL_PTR(_mantissa_3961)->dbl + (eudouble)_1949);
            }
            else
            _mantissa_3961 = NewDouble(DBL_PTR(_mantissa_3961)->dbl + DBL_PTR(_1949)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_1949);
    _1949 = NOVALUE;
    // SubProg get_number pc: 346 op: STARTLINE (58)

    /** get.e:249				dec *= 10*/
    // SubProg get_number pc: 348 op: MULTIPLY (13)
    _0 = _dec_3962;
    if (IS_ATOM_INT(_dec_3962)) {
        if (_dec_3962 == (short)_dec_3962){
            _dec_3962 = _dec_3962 * 10;
        }
        else{
            _dec_3962 = NewDouble(_dec_3962 * (eudouble)10);
        }
    }
    else {
        _dec_3962 = NewDouble(DBL_PTR(_dec_3962)->dbl * (eudouble)10);
    }
    DeRef(_0);
    // SubProg get_number pc: 352 op: STARTLINE (58)

    /** get.e:250				get_ch()*/
    // SubProg get_number pc: 354 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 356 op: STARTLINE (58)

    /** get.e:251				number_string &= ch*/
    // SubProg get_number pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 360 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 364 op: STARTLINE (58)

    /** get.e:252			end while*/
    // SubProg get_number pc: 366 op: ENDWHILE (22)
    goto LB; // [366] 304
    // SubProg get_number pc: 368 op: NOP1 (159)
LC: // addr: 369 pc: 368 sub: 3955 op: 159
    // SubProg get_number pc: 369 op: NOP1 (159)
LA: // addr: 370 pc: 369 sub: 3955 op: 159
    // SubProg get_number pc: 370 op: STARTLINE (58)

    /** get.e:255		if ndigits = 0 then*/
    // SubProg get_number pc: 372 op: EQUALS_IFW_I (121)
    if (_ndigits_3959 != 0)
    goto LD; // [372] 387
    // SubProg get_number pc: 376 op: STARTLINE (58)

    /** get.e:256			return {GET_FAIL, 0}*/
    // SubProg get_number pc: 378 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1954 = MAKE_SEQ(_1);
    // SubProg get_number pc: 382 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_3957

// block var ndigits_3959

// block var hex_digit_3960

// block var mantissa_3961
    DeRef(_mantissa_3961);

// block var dec_3962
    DeRef(_dec_3962);

// block var number_string_3964
    DeRefi(_number_string_3964);
    DeRef(_1944);
    _1944 = NOVALUE;
    DeRef(_1934);
    _1934 = NOVALUE;
    DeRef(_1932);
    _1932 = NOVALUE;
    DeRef(_1933);
    _1933 = NOVALUE;
    DeRef(_1918);
    _1918 = NOVALUE;
    return _1954;
    // SubProg get_number pc: 386 op: NOP1 (159)
LD: // addr: 387 pc: 386 sub: 3955 op: 159
    // SubProg get_number pc: 387 op: STARTLINE (58)

    /** get.e:259		mantissa = sign * mantissa*/
    // SubProg get_number pc: 389 op: MULTIPLY (13)
    _0 = _mantissa_3961;
    if (IS_ATOM_INT(_mantissa_3961)) {
        if (_sign_3957 == (short)_sign_3957 && _mantissa_3961 <= INT15 && _mantissa_3961 >= -INT15){
            _mantissa_3961 = _sign_3957 * _mantissa_3961;
        }
        else{
            _mantissa_3961 = NewDouble(_sign_3957 * (eudouble)_mantissa_3961);
        }
    }
    else {
        _mantissa_3961 = NewDouble((eudouble)_sign_3957 * DBL_PTR(_mantissa_3961)->dbl);
    }
    DeRef(_0);
    // SubProg get_number pc: 393 op: STARTLINE (58)

    /** get.e:261		if ch = 'e' or ch = 'E' then*/
    // SubProg get_number pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 397 op: EQUALS (3)
    _1956 = (_20ch_3818 == 101);
    // SubProg get_number pc: 401 op: SC1_OR_IF (147)
    if (_1956 != 0) {
        goto LE; // [401] 416
    }
    // SubProg get_number pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 407 op: EQUALS (3)
    _1958 = (_20ch_3818 == 69);
    // SubProg get_number pc: 411 op: NOP1 (159)
    // SubProg get_number pc: 412 op: IF (20)
    if (_1958 == 0)
    {
        DeRef(_1958);
        _1958 = NOVALUE;
        goto LF; // [412] 565
    }
    else{
        DeRef(_1958);
        _1958 = NOVALUE;
    }
    // SubProg get_number pc: 415 op: NOP1 (159)
LE: // addr: 416 pc: 415 sub: 3955 op: 159
    // SubProg get_number pc: 416 op: STARTLINE (58)

    /** get.e:264			get_ch()*/
    // SubProg get_number pc: 418 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 420 op: STARTLINE (58)

    /** get.e:265			number_string &= ch*/
    // SubProg get_number pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 424 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 428 op: STARTLINE (58)

    /** get.e:266			if ch = '-' then*/
    // SubProg get_number pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 432 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 45)
    goto L10; // [432] 451
    // SubProg get_number pc: 436 op: STARTLINE (58)

    /** get.e:267				get_ch()*/
    // SubProg get_number pc: 438 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 440 op: STARTLINE (58)

    /** get.e:268				number_string &= ch*/
    // SubProg get_number pc: 442 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 444 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 448 op: ELSE (23)
    goto L11; // [448] 473
    // SubProg get_number pc: 450 op: NOP1 (159)
L10: // addr: 451 pc: 450 sub: 3955 op: 159
    // SubProg get_number pc: 451 op: STARTLINE (58)

    /** get.e:269			elsif ch = '+' then*/
    // SubProg get_number pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 455 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 43)
    goto L12; // [455] 472
    // SubProg get_number pc: 459 op: STARTLINE (58)

    /** get.e:270				get_ch()*/
    // SubProg get_number pc: 461 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 463 op: STARTLINE (58)

    /** get.e:271				number_string &= ch*/
    // SubProg get_number pc: 465 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 467 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 471 op: NOP1 (159)
L12: // addr: 472 pc: 471 sub: 3955 op: 159
    // SubProg get_number pc: 472 op: NOP1 (159)
L11: // addr: 473 pc: 472 sub: 3955 op: 159
    // SubProg get_number pc: 473 op: STARTLINE (58)

    /** get.e:275			if ch >= '0' and ch <= '9' then*/
    // SubProg get_number pc: 475 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 477 op: GREATEREQ (2)
    _1964 = (_20ch_3818 >= 48);
    // SubProg get_number pc: 481 op: SC1_AND_IF (146)
    if (_1964 == 0) {
        goto L13; // [481] 546
    }
    // SubProg get_number pc: 485 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 487 op: LESSEQ (5)
    _1966 = (_20ch_3818 <= 57);
    // SubProg get_number pc: 491 op: NOP1 (159)
    // SubProg get_number pc: 492 op: IF (20)
    if (_1966 == 0)
    {
        DeRef(_1966);
        _1966 = NOVALUE;
        goto L13; // [492] 546
    }
    else{
        DeRef(_1966);
        _1966 = NOVALUE;
    }
    // SubProg get_number pc: 495 op: STARTLINE (58)

    /** get.e:277				while ch >= '0' and ch <= '9' with entry do*/
    // SubProg get_number pc: 497 op: ELSE (23)
    goto L14; // [497] 534
    // SubProg get_number pc: 499 op: NOPWHILE (158)
L15: // addr: 500 pc: 499 sub: 3955 op: 158
    // SubProg get_number pc: 500 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 502 op: GREATEREQ (2)
    _1967 = (_20ch_3818 >= 48);
    // SubProg get_number pc: 506 op: SC1_AND (141)
    if (_1967 == 0) {
        DeRef(_1968);
        _1968 = 0;
        goto L16; // [506] 520
    }
    // SubProg get_number pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 512 op: LESSEQ (5)
    _1969 = (_20ch_3818 <= 57);
    // SubProg get_number pc: 516 op: SC2_AND (142)
    _1968 = (_1969 != 0);
    // SubProg get_number pc: 519 op: NOP1 (159)
L16: // addr: 520 pc: 519 sub: 3955 op: 159
    // SubProg get_number pc: 520 op: WHILE (47)
    if (_1968 == 0)
    {
        _1968 = NOVALUE;
        goto L17; // [520] 557
    }
    else{
        _1968 = NOVALUE;
    }
    // SubProg get_number pc: 523 op: STARTLINE (58)

    /** get.e:278					number_string &= ch*/
    // SubProg get_number pc: 525 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_number pc: 527 op: CONCAT (15)
    Append(&_number_string_3964, _number_string_3964, _20ch_3818);
    // SubProg get_number pc: 531 op: STARTLINE (58)

    /** get.e:279				entry*/
    // SubProg get_number pc: 533 op: NOP1 (159)
L14: // addr: 534 pc: 533 sub: 3955 op: 159
    // SubProg get_number pc: 534 op: STARTLINE (58)

    /** get.e:280					get_ch()*/
    // SubProg get_number pc: 536 op: PROC (27)
    _20get_ch();
    // SubProg get_number pc: 538 op: STARTLINE (58)

    /** get.e:281				end while*/
    // SubProg get_number pc: 540 op: ENDWHILE (22)
    goto L15; // [540] 500
    // SubProg get_number pc: 542 op: NOP1 (159)
    // SubProg get_number pc: 543 op: ELSE (23)
    goto L17; // [543] 557
    // SubProg get_number pc: 545 op: NOP1 (159)
L13: // addr: 546 pc: 545 sub: 3955 op: 159
    // SubProg get_number pc: 546 op: STARTLINE (58)

    /** get.e:283				return {GET_FAIL, 0} -- no exponent*/
    // SubProg get_number pc: 548 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1971 = MAKE_SEQ(_1);
    // SubProg get_number pc: 552 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_3957

// block var ndigits_3959

// block var hex_digit_3960

// block var mantissa_3961
    DeRef(_mantissa_3961);

// block var dec_3962
    DeRef(_dec_3962);

// block var number_string_3964
    DeRefi(_number_string_3964);
    DeRef(_1969);
    _1969 = NOVALUE;
    DeRef(_1944);
    _1944 = NOVALUE;
    DeRef(_1956);
    _1956 = NOVALUE;
    DeRef(_1934);
    _1934 = NOVALUE;
    DeRef(_1967);
    _1967 = NOVALUE;
    DeRef(_1932);
    _1932 = NOVALUE;
    DeRef(_1964);
    _1964 = NOVALUE;
    DeRef(_1954);
    _1954 = NOVALUE;
    DeRef(_1933);
    _1933 = NOVALUE;
    DeRef(_1918);
    _1918 = NOVALUE;
    return _1971;
    // SubProg get_number pc: 556 op: NOP1 (159)
L17: // addr: 557 pc: 556 sub: 3955 op: 159
    // SubProg get_number pc: 557 op: STARTLINE (58)

    /** get.e:286			mantissa = scientific_to_atom( number_string )*/
    // SubProg get_number pc: 559 op: PROC (27)
    RefDS(_number_string_3964);
    _0 = _mantissa_3961;
    _mantissa_3961 = _21scientific_to_atom(_number_string_3964, 1);
    DeRef(_0);
    // SubProg get_number pc: 564 op: NOP1 (159)
LF: // addr: 565 pc: 564 sub: 3955 op: 159
    // SubProg get_number pc: 565 op: STARTLINE (58)

    /** get.e:289		return {GET_SUCCESS, mantissa}*/
    // SubProg get_number pc: 567 op: RIGHT_BRACE_2 (85)
    Ref(_mantissa_3961);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _mantissa_3961;
    _1973 = MAKE_SEQ(_1);
    // SubProg get_number pc: 571 op: RETURNF (28)

// Exiting block BLOCK: get_number

// block var sign_3957

// block var ndigits_3959

// block var hex_digit_3960

// block var mantissa_3961
    DeRef(_mantissa_3961);

// block var dec_3962
    DeRef(_dec_3962);

// block var number_string_3964
    DeRefi(_number_string_3964);
    DeRef(_1969);
    _1969 = NOVALUE;
    DeRef(_1944);
    _1944 = NOVALUE;
    DeRef(_1956);
    _1956 = NOVALUE;
    DeRef(_1934);
    _1934 = NOVALUE;
    DeRef(_1967);
    _1967 = NOVALUE;
    DeRef(_1932);
    _1932 = NOVALUE;
    DeRef(_1964);
    _1964 = NOVALUE;
    DeRef(_1954);
    _1954 = NOVALUE;
    DeRef(_1933);
    _1933 = NOVALUE;
    DeRef(_1918);
    _1918 = NOVALUE;
    DeRef(_1971);
    _1971 = NOVALUE;
    return _1973;
    // SubProg get_number pc: 575 op: BADRETURNF (43)
    ;
}


object _20Get()
{
    object _skip_blanks_1__tmp_at328_4091 = NOVALUE;
    object _skip_blanks_1__tmp_at177_4072 = NOVALUE;
    object _skip_blanks_1__tmp_at88_4063 = NOVALUE;
    object _s_4047 = NOVALUE;
    object _e_4048 = NOVALUE;
    object _e1_4049 = NOVALUE;
    object _2012 = NOVALUE; // 4117 2012
    object _2011 = NOVALUE; // 4115 2011
// skipping _2010  name type: 0
    object _2009 = NOVALUE; // 4112 2009
// skipping _2007  name type: 0
    object _2006 = NOVALUE; // 4108 2006
// skipping _2005  name type: 0
    object _2004 = NOVALUE; // 4105 2004
// skipping _2003  name type: 0
    object _2002 = NOVALUE; // 4102 2002
// skipping _2001  name type: 0
    object _2000 = NOVALUE; // 4100 2000
// skipping _1999  name type: 0
// skipping _1998  name type: 0
    object _1997 = NOVALUE; // 4094 1997
// skipping _1996  name type: 0
    object _1995 = NOVALUE; // 4088 1995
// skipping _1994  name type: 0
// skipping _1993  name type: 0
// skipping _1992  name type: 0
    object _1991 = NOVALUE; // 4082 1991
// skipping _1990  name type: 0
// skipping _1989  name type: 0
// skipping _1988  name type: 0
    object _1987 = NOVALUE; // 4075 1987
// skipping _1986  name type: 0
// skipping _1985  name type: 0
    object _1984 = NOVALUE; // 4068 1984
    object _1983 = NOVALUE; // 4067 1983
// skipping _1982  name type: 0
    object _1981 = NOVALUE; // 4065 1981
// skipping _1980  name type: 0
    object _1979 = NOVALUE; // 4060 1979
// skipping _1978  name type: 0
    object _1977 = NOVALUE; // 4057 1977
    object _1976 = NOVALUE; // 4054 1976
// skipping _1975  name type: 0
    object _1974 = NOVALUE; // 4051 1974
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Get pc: 1 op: STARTLINE (58)

    /** get.e:300		while find(ch, white_space) do*/
    // SubProg Get pc: 3 op: NOP2 (110)
    // SubProg Get pc: 5 op: NOPWHILE (158)
L1: // addr: 6 pc: 5 sub: 4045 op: 158
    // SubProg Get pc: 6 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 8 op: FIND_FROM (176)
    _1974 = find_from(_20ch_3818, _20white_space_3834, 1);
    // SubProg Get pc: 13 op: WHILE (47)
    if (_1974 == 0)
    {
        _1974 = NOVALUE;
        goto L2; // [13] 25
    }
    else{
        _1974 = NOVALUE;
    }
    // SubProg Get pc: 16 op: STARTLINE (58)

    /** get.e:301			get_ch()*/
    // SubProg Get pc: 18 op: PROC (27)
    _20get_ch();
    // SubProg Get pc: 20 op: STARTLINE (58)

    /** get.e:302		end while*/
    // SubProg Get pc: 22 op: ENDWHILE (22)
    goto L1; // [22] 6
    // SubProg Get pc: 24 op: NOP1 (159)
L2: // addr: 25 pc: 24 sub: 4045 op: 159
    // SubProg Get pc: 25 op: STARTLINE (58)

    /** get.e:304		if ch = -1 then -- string is made of whitespace only*/
    // SubProg Get pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 29 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != -1)
    goto L3; // [29] 44
    // SubProg Get pc: 33 op: STARTLINE (58)

    /** get.e:305			return {GET_EOF, 0}*/
    // SubProg Get pc: 35 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _1976 = MAKE_SEQ(_1);
    // SubProg Get pc: 39 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    return _1976;
    // SubProg Get pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 4045 op: 159
    // SubProg Get pc: 44 op: STARTLINE (58)

    /** get.e:308		while 1 do*/
    // SubProg Get pc: 46 op: NOP2 (110)
    // SubProg Get pc: 48 op: NOPWHILE (158)
L4: // addr: 49 pc: 48 sub: 4045 op: 158
    // SubProg Get pc: 49 op: STARTLINE (58)

    /** get.e:309			if find(ch, START_NUMERIC) then*/
    // SubProg Get pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 55 op: FIND_FROM (176)
    _1977 = find_from(_20ch_3818, _20START_NUMERIC_3801, 1);
    // SubProg Get pc: 60 op: IF (20)
    if (_1977 == 0)
    {
        _1977 = NOVALUE;
        goto L5; // [60] 157
    }
    else{
        _1977 = NOVALUE;
    }
    // SubProg Get pc: 63 op: STARTLINE (58)

    /** get.e:310				e = get_number()*/
    // SubProg Get pc: 65 op: PROC (27)
    _0 = _e_4048;
    _e_4048 = _20get_number();
    DeRef(_0);
    // SubProg Get pc: 68 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 70 op: STARTLINE (58)

    /** get.e:311				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    // SubProg Get pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_4048);
    _1979 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get pc: 76 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _1979, -2)){
        _1979 = NOVALUE;
        goto L6; // [76] 87
    }
    _1979 = NOVALUE;
    // SubProg Get pc: 80 op: STARTLINE (58)

    /** get.e:312					return e*/
    // SubProg Get pc: 82 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e1_4049
    DeRef(_1976);
    _1976 = NOVALUE;
    return _e_4048;
    // SubProg Get pc: 86 op: NOP1 (159)
L6: // addr: 87 pc: 86 sub: 4045 op: 159
    // SubProg Get pc: 87 op: STARTLINE (58)

    /** get.e:314				skip_blanks()*/
    // SubProg Get pc: 89 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 91 op: NOP2 (110)
    // SubProg Get pc: 93 op: NOPWHILE (158)
L7: // addr: 94 pc: 93 sub: 4045 op: 158
    // SubProg Get pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 96 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at88_4063 = find_from(_20ch_3818, _20white_space_3834, 1);
    // SubProg Get pc: 101 op: WHILE (47)
    if (_skip_blanks_1__tmp_at88_4063 == 0)
    {
        goto L8; // [101] 118
    }
    else{
    }
    // SubProg Get pc: 104 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 106 op: PROC (27)
    _20get_ch();
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
L8: // addr: 118 pc: 117 sub: 4045 op: 159
    // SubProg Get pc: 118 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 88

// block var skip_blanks_1__tmp_at88_4063
    // SubProg Get pc: 120 op: STARTLINE (58)

    /** get.e:315				if ch=-1 or ch='}' then -- '}' is expected only in the "{--\n}" case*/
    // SubProg Get pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 124 op: EQUALS (3)
    _1981 = (_20ch_3818 == -1);
    // SubProg Get pc: 128 op: SC1_OR_IF (147)
    if (_1981 != 0) {
        goto L9; // [128] 143
    }
    // SubProg Get pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 134 op: EQUALS (3)
    _1983 = (_20ch_3818 == 125);
    // SubProg Get pc: 138 op: NOP1 (159)
    // SubProg Get pc: 139 op: IF (20)
    if (_1983 == 0)
    {
        DeRef(_1983);
        _1983 = NOVALUE;
        goto L4; // [139] 49
    }
    else{
        DeRef(_1983);
        _1983 = NOVALUE;
    }
    // SubProg Get pc: 142 op: NOP1 (159)
L9: // addr: 143 pc: 142 sub: 4045 op: 159
    // SubProg Get pc: 143 op: STARTLINE (58)

    /** get.e:316					return {GET_NOTHING, 0} -- just a comment*/
    // SubProg Get pc: 145 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _1984 = MAKE_SEQ(_1);
    // SubProg Get pc: 149 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    return _1984;
    // SubProg Get pc: 153 op: NOP1 (159)
    // SubProg Get pc: 154 op: ELSE (23)
    goto L4; // [154] 49
    // SubProg Get pc: 156 op: NOP1 (159)
L5: // addr: 157 pc: 156 sub: 4045 op: 159
    // SubProg Get pc: 157 op: STARTLINE (58)

    /** get.e:318			elsif ch = '{' then*/
    // SubProg Get pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 161 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 123)
    goto LA; // [161] 465
    // SubProg Get pc: 165 op: STARTLINE (58)

    /** get.e:320				s = {}*/
    // SubProg Get pc: 167 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_s_4047);
    _s_4047 = _5;
    // SubProg Get pc: 170 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 172 op: STARTLINE (58)

    /** get.e:321				get_ch()*/
    // SubProg Get pc: 174 op: PROC (27)
    _20get_ch();
    // SubProg Get pc: 176 op: STARTLINE (58)

    /** get.e:322				skip_blanks()*/
    // SubProg Get pc: 178 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 180 op: NOP2 (110)
    // SubProg Get pc: 182 op: NOPWHILE (158)
LB: // addr: 183 pc: 182 sub: 4045 op: 158
    // SubProg Get pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 185 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at177_4072 = find_from(_20ch_3818, _20white_space_3834, 1);
    // SubProg Get pc: 190 op: WHILE (47)
    if (_skip_blanks_1__tmp_at177_4072 == 0)
    {
        goto LC; // [190] 207
    }
    else{
    }
    // SubProg Get pc: 193 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 195 op: PROC (27)
    _20get_ch();
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
LC: // addr: 207 pc: 206 sub: 4045 op: 159
    // SubProg Get pc: 207 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 177

// block var skip_blanks_1__tmp_at177_4072
    // SubProg Get pc: 209 op: STARTLINE (58)

    /** get.e:323				if ch = '}' then -- empty sequence*/
    // SubProg Get pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 213 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 125)
    goto LD; // [213] 232
    // SubProg Get pc: 217 op: STARTLINE (58)

    /** get.e:324					get_ch()*/
    // SubProg Get pc: 219 op: PROC (27)
    _20get_ch();
    // SubProg Get pc: 221 op: STARTLINE (58)

    /** get.e:325					return {GET_SUCCESS, s} -- empty sequence*/
    // SubProg Get pc: 223 op: RIGHT_BRACE_2 (85)
    RefDS(_s_4047);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_4047;
    _1987 = MAKE_SEQ(_1);
    // SubProg Get pc: 227 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRefDS(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    return _1987;
    // SubProg Get pc: 231 op: NOP1 (159)
LD: // addr: 232 pc: 231 sub: 4045 op: 159
    // SubProg Get pc: 232 op: STARTLINE (58)

    /** get.e:328				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
    // SubProg Get pc: 234 op: NOP2 (110)
    // SubProg Get pc: 236 op: NOPWHILE (158)
LE: // addr: 237 pc: 236 sub: 4045 op: 158
    // SubProg Get pc: 237 op: STARTLINE (58)

    /** get.e:329					while 1 do -- read zero or more comments and an element*/
    // SubProg Get pc: 239 op: NOP2 (110)
    // SubProg Get pc: 241 op: NOPWHILE (158)
LF: // addr: 242 pc: 241 sub: 4045 op: 158
    // SubProg Get pc: 242 op: STARTLINE (58)

    /** get.e:330						e = Get() -- read next element, using standard function*/
    // SubProg Get pc: 244 op: PROC (27)
    _0 = _e_4048;
    _e_4048 = _20Get();
    DeRef(_0);
    // SubProg Get pc: 247 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 249 op: STARTLINE (58)

    /** get.e:331						e1 = e[1]*/
    // SubProg Get pc: 251 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_e_4048);
    _e1_4049 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_4049))
    _e1_4049 = (object)DBL_PTR(_e1_4049)->dbl;
    // SubProg Get pc: 255 op: STARTLINE (58)

    /** get.e:332						if e1 = GET_SUCCESS then*/
    // SubProg Get pc: 257 op: EQUALS_IFW_I (121)
    if (_e1_4049 != 0)
    goto L10; // [257] 278
    // SubProg Get pc: 261 op: STARTLINE (58)

    /** get.e:333							s = append(s, e[2])*/
    // SubProg Get pc: 263 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_4048);
    _1991 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Get pc: 267 op: APPEND (35)
    Ref(_1991);
    Append(&_s_4047, _s_4047, _1991);
    _1991 = NOVALUE;
    // SubProg Get pc: 271 op: STARTLINE (58)

    /** get.e:334							exit  -- element read and added to result*/
    // SubProg Get pc: 273 op: EXIT (61)
    goto L11; // [273] 322
    // SubProg Get pc: 275 op: ELSE (23)
    goto LF; // [275] 242
    // SubProg Get pc: 277 op: NOP1 (159)
L10: // addr: 278 pc: 277 sub: 4045 op: 159
    // SubProg Get pc: 278 op: STARTLINE (58)

    /** get.e:335						elsif e1 != GET_IGNORE then*/
    // SubProg Get pc: 280 op: NOTEQ_IFW_I (122)
    if (_e1_4049 == -2)
    goto L12; // [280] 293
    // SubProg Get pc: 284 op: STARTLINE (58)

    /** get.e:336							return e*/
    // SubProg Get pc: 286 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    return _e_4048;
    // SubProg Get pc: 290 op: ELSE (23)
    goto LF; // [290] 242
    // SubProg Get pc: 292 op: NOP1 (159)
L12: // addr: 293 pc: 292 sub: 4045 op: 159
    // SubProg Get pc: 293 op: STARTLINE (58)

    /** get.e:338						elsif ch='}' then*/
    // SubProg Get pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 297 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 125)
    goto LF; // [297] 242
    // SubProg Get pc: 301 op: STARTLINE (58)

    /** get.e:339							get_ch()*/
    // SubProg Get pc: 303 op: PROC (27)
    _20get_ch();
    // SubProg Get pc: 305 op: STARTLINE (58)

    /** get.e:340							return {GET_SUCCESS, s} -- empty sequence*/
    // SubProg Get pc: 307 op: RIGHT_BRACE_2 (85)
    RefDS(_s_4047);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_4047;
    _1995 = MAKE_SEQ(_1);
    // SubProg Get pc: 311 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRefDS(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    return _1995;
    // SubProg Get pc: 315 op: NOP1 (159)
    // SubProg Get pc: 316 op: NOP1 (159)
    // SubProg Get pc: 317 op: STARTLINE (58)

    /** get.e:342					end while*/
    // SubProg Get pc: 319 op: ENDWHILE (22)
    goto LF; // [319] 242
    // SubProg Get pc: 321 op: NOP1 (159)
L11: // addr: 322 pc: 321 sub: 4045 op: 159
    // SubProg Get pc: 322 op: STARTLINE (58)

    /** get.e:344					while 1 do -- now read zero or more post element comments*/
    // SubProg Get pc: 324 op: NOP2 (110)
    // SubProg Get pc: 326 op: NOPWHILE (158)
L13: // addr: 327 pc: 326 sub: 4045 op: 158
    // SubProg Get pc: 327 op: STARTLINE (58)

    /** get.e:345						skip_blanks()*/
    // SubProg Get pc: 329 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get pc: 331 op: NOP2 (110)
    // SubProg Get pc: 333 op: NOPWHILE (158)
L14: // addr: 334 pc: 333 sub: 4045 op: 158
    // SubProg Get pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 336 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at328_4091 = find_from(_20ch_3818, _20white_space_3834, 1);
    // SubProg Get pc: 341 op: WHILE (47)
    if (_skip_blanks_1__tmp_at328_4091 == 0)
    {
        goto L15; // [341] 358
    }
    else{
    }
    // SubProg Get pc: 344 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get pc: 346 op: PROC (27)
    _20get_ch();
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
L15: // addr: 358 pc: 357 sub: 4045 op: 159
    // SubProg Get pc: 358 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get @ 328

// block var skip_blanks_1__tmp_at328_4091
    // SubProg Get pc: 360 op: STARTLINE (58)

    /** get.e:346						if ch = '}' then*/
    // SubProg Get pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 364 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 125)
    goto L16; // [364] 385
    // SubProg Get pc: 368 op: STARTLINE (58)

    /** get.e:347							get_ch()*/
    // SubProg Get pc: 370 op: PROC (27)
    _20get_ch();
    // SubProg Get pc: 372 op: STARTLINE (58)

    /** get.e:348						return {GET_SUCCESS, s}*/
    // SubProg Get pc: 374 op: RIGHT_BRACE_2 (85)
    RefDS(_s_4047);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_4047;
    _1997 = MAKE_SEQ(_1);
    // SubProg Get pc: 378 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRefDS(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_1995);
    _1995 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    return _1997;
    // SubProg Get pc: 382 op: ELSE (23)
    goto L13; // [382] 327
    // SubProg Get pc: 384 op: NOP1 (159)
L16: // addr: 385 pc: 384 sub: 4045 op: 159
    // SubProg Get pc: 385 op: STARTLINE (58)

    /** get.e:349						elsif ch!='-' then*/
    // SubProg Get pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 389 op: NOTEQ_IFW_I (122)
    if (_20ch_3818 == 45)
    goto L17; // [389] 400
    // SubProg Get pc: 393 op: STARTLINE (58)

    /** get.e:350							exit*/
    // SubProg Get pc: 395 op: EXIT (61)
    goto L18; // [395] 434
    // SubProg Get pc: 397 op: ELSE (23)
    goto L13; // [397] 327
    // SubProg Get pc: 399 op: NOP1 (159)
L17: // addr: 400 pc: 399 sub: 4045 op: 159
    // SubProg Get pc: 400 op: STARTLINE (58)

    /** get.e:352							e = get_number() -- reads anything starting with '-'*/
    // SubProg Get pc: 402 op: PROC (27)
    _0 = _e_4048;
    _e_4048 = _20get_number();
    DeRef(_0);
    // SubProg Get pc: 405 op: SEQUENCE_CHECK (97)
    // SubProg Get pc: 407 op: STARTLINE (58)

    /** get.e:353							if e[1] != GET_IGNORE then  -- it wasn't a comment, this is illegal*/
    // SubProg Get pc: 409 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_4048);
    _2000 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get pc: 413 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _2000, -2)){
        _2000 = NOVALUE;
        goto L13; // [413] 327
    }
    _2000 = NOVALUE;
    // SubProg Get pc: 417 op: STARTLINE (58)

    /** get.e:354								return {GET_FAIL, 0}*/
    // SubProg Get pc: 419 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2002 = MAKE_SEQ(_1);
    // SubProg Get pc: 423 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRefDS(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_1995);
    _1995 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    DeRef(_1997);
    _1997 = NOVALUE;
    return _2002;
    // SubProg Get pc: 427 op: NOP1 (159)
    // SubProg Get pc: 428 op: NOP1 (159)
    // SubProg Get pc: 429 op: STARTLINE (58)

    /** get.e:358				end while*/
    // SubProg Get pc: 431 op: ENDWHILE (22)
    goto L13; // [431] 327
    // SubProg Get pc: 433 op: NOP1 (159)
L18: // addr: 434 pc: 433 sub: 4045 op: 159
    // SubProg Get pc: 434 op: STARTLINE (58)

    /** get.e:359					if ch != ',' then*/
    // SubProg Get pc: 436 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 438 op: NOTEQ_IFW_I (122)
    if (_20ch_3818 == 44)
    goto L19; // [438] 453
    // SubProg Get pc: 442 op: STARTLINE (58)

    /** get.e:360					return {GET_FAIL, 0}*/
    // SubProg Get pc: 444 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2004 = MAKE_SEQ(_1);
    // SubProg Get pc: 448 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_2002);
    _2002 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_1995);
    _1995 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    DeRef(_1997);
    _1997 = NOVALUE;
    return _2004;
    // SubProg Get pc: 452 op: NOP1 (159)
L19: // addr: 453 pc: 452 sub: 4045 op: 159
    // SubProg Get pc: 453 op: STARTLINE (58)

    /** get.e:362				get_ch() -- skip comma*/
    // SubProg Get pc: 455 op: PROC (27)
    _20get_ch();
    // SubProg Get pc: 457 op: STARTLINE (58)

    /** get.e:363				end while*/
    // SubProg Get pc: 459 op: ENDWHILE (22)
    goto LE; // [459] 237
    // SubProg Get pc: 461 op: NOP1 (159)
    // SubProg Get pc: 462 op: ELSE (23)
    goto L4; // [462] 49
    // SubProg Get pc: 464 op: NOP1 (159)
LA: // addr: 465 pc: 464 sub: 4045 op: 159
    // SubProg Get pc: 465 op: STARTLINE (58)

    /** get.e:365			elsif ch = '\"' then*/
    // SubProg Get pc: 467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 469 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 34)
    goto L1A; // [469] 485
    // SubProg Get pc: 473 op: STARTLINE (58)

    /** get.e:366				return get_string()*/
    // SubProg Get pc: 475 op: PROC (27)
    _2006 = _20get_string();
    // SubProg Get pc: 478 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_2002);
    _2002 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_1995);
    _1995 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    DeRef(_2004);
    _2004 = NOVALUE;
    DeRef(_1997);
    _1997 = NOVALUE;
    return _2006;
    // SubProg Get pc: 482 op: ELSE (23)
    goto L4; // [482] 49
    // SubProg Get pc: 484 op: NOP1 (159)
L1A: // addr: 485 pc: 484 sub: 4045 op: 159
    // SubProg Get pc: 485 op: STARTLINE (58)

    /** get.e:367			elsif ch = '`' then*/
    // SubProg Get pc: 487 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 489 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 96)
    goto L1B; // [489] 506
    // SubProg Get pc: 493 op: STARTLINE (58)

    /** get.e:368				return get_heredoc("`")*/
    // SubProg Get pc: 495 op: PROC (27)
    RefDS(_2008);
    _2009 = _20get_heredoc(_2008);
    // SubProg Get pc: 499 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_2002);
    _2002 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_2006);
    _2006 = NOVALUE;
    DeRef(_1995);
    _1995 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    DeRef(_2004);
    _2004 = NOVALUE;
    DeRef(_1997);
    _1997 = NOVALUE;
    return _2009;
    // SubProg Get pc: 503 op: ELSE (23)
    goto L4; // [503] 49
    // SubProg Get pc: 505 op: NOP1 (159)
L1B: // addr: 506 pc: 505 sub: 4045 op: 159
    // SubProg Get pc: 506 op: STARTLINE (58)

    /** get.e:369			elsif ch = '\'' then*/
    // SubProg Get pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get pc: 510 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 39)
    goto L1C; // [510] 526
    // SubProg Get pc: 514 op: STARTLINE (58)

    /** get.e:370				return get_qchar()*/
    // SubProg Get pc: 516 op: PROC (27)
    _2011 = _20get_qchar();
    // SubProg Get pc: 519 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_2002);
    _2002 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_2009);
    _2009 = NOVALUE;
    DeRef(_2006);
    _2006 = NOVALUE;
    DeRef(_1995);
    _1995 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    DeRef(_2004);
    _2004 = NOVALUE;
    DeRef(_1997);
    _1997 = NOVALUE;
    return _2011;
    // SubProg Get pc: 523 op: ELSE (23)
    goto L4; // [523] 49
    // SubProg Get pc: 525 op: NOP1 (159)
L1C: // addr: 526 pc: 525 sub: 4045 op: 159
    // SubProg Get pc: 526 op: STARTLINE (58)

    /** get.e:372				return {GET_FAIL, 0}*/
    // SubProg Get pc: 528 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2012 = MAKE_SEQ(_1);
    // SubProg Get pc: 532 op: RETURNF (28)

// Exiting block BLOCK: Get

// block var s_4047
    DeRef(_s_4047);

// block var e_4048
    DeRef(_e_4048);

// block var e1_4049
    DeRef(_1987);
    _1987 = NOVALUE;
    DeRef(_2002);
    _2002 = NOVALUE;
    DeRef(_2011);
    _2011 = NOVALUE;
    DeRef(_1976);
    _1976 = NOVALUE;
    DeRef(_1981);
    _1981 = NOVALUE;
    DeRef(_2009);
    _2009 = NOVALUE;
    DeRef(_2006);
    _2006 = NOVALUE;
    DeRef(_1995);
    _1995 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    DeRef(_2004);
    _2004 = NOVALUE;
    DeRef(_1997);
    _1997 = NOVALUE;
    return _2012;
    // SubProg Get pc: 536 op: NOP1 (159)
    // SubProg Get pc: 537 op: STARTLINE (58)

    /** get.e:376		end while*/
    // SubProg Get pc: 539 op: ENDWHILE (22)
    goto L4; // [539] 49
    // SubProg Get pc: 541 op: NOP1 (159)
    // SubProg Get pc: 542 op: BADRETURNF (43)
    ;
}


object _20Get2()
{
    object _skip_blanks_1__tmp_at464_4192 = NOVALUE;
    object _skip_blanks_1__tmp_at233_4159 = NOVALUE;
    object _s_4121 = NOVALUE;
    object _e_4122 = NOVALUE;
    object _e1_4123 = NOVALUE;
    object _offset_4124 = NOVALUE;
    object _2112 = NOVALUE; // 4251 2112
    object _2111 = NOVALUE; // 4250 2111
    object _2110 = NOVALUE; // 4249 2110
    object _2109 = NOVALUE; // 4248 2109
    object _2108 = NOVALUE; // 4247 2108
    object _2107 = NOVALUE; // 4245 2107
    object _2106 = NOVALUE; // 4244 2106
    object _2105 = NOVALUE; // 4243 2105
    object _2104 = NOVALUE; // 4242 2104
    object _2103 = NOVALUE; // 4241 2103
    object _2102 = NOVALUE; // 4240 2102
// skipping _2101  name type: 0
// skipping _2100  name type: 0
    object _2099 = NOVALUE; // 4236 2099
    object _2098 = NOVALUE; // 4235 2098
    object _2097 = NOVALUE; // 4234 2097
    object _2096 = NOVALUE; // 4233 2096
    object _2095 = NOVALUE; // 4232 2095
    object _2094 = NOVALUE; // 4231 2094
// skipping _2093  name type: 0
// skipping _2092  name type: 0
    object _2091 = NOVALUE; // 4227 2091
    object _2090 = NOVALUE; // 4226 2090
    object _2089 = NOVALUE; // 4225 2089
    object _2088 = NOVALUE; // 4224 2088
    object _2087 = NOVALUE; // 4223 2087
    object _2086 = NOVALUE; // 4222 2086
// skipping _2085  name type: 0
// skipping _2084  name type: 0
    object _2083 = NOVALUE; // 4218 2083
    object _2082 = NOVALUE; // 4217 2082
    object _2081 = NOVALUE; // 4216 2081
    object _2080 = NOVALUE; // 4215 2080
    object _2079 = NOVALUE; // 4214 2079
// skipping _2078  name type: 0
    object _2077 = NOVALUE; // 4211 2077
    object _2076 = NOVALUE; // 4210 2076
    object _2075 = NOVALUE; // 4209 2075
    object _2074 = NOVALUE; // 4208 2074
    object _2073 = NOVALUE; // 4207 2073
// skipping _2072  name type: 0
    object _2071 = NOVALUE; // 4205 2071
// skipping _2070  name type: 0
// skipping _2069  name type: 0
    object _2068 = NOVALUE; // 4199 2068
    object _2067 = NOVALUE; // 4198 2067
    object _2066 = NOVALUE; // 4197 2066
    object _2065 = NOVALUE; // 4196 2065
    object _2064 = NOVALUE; // 4195 2064
// skipping _2063  name type: 0
    object _2062 = NOVALUE; // 4189 2062
    object _2061 = NOVALUE; // 4188 2061
    object _2060 = NOVALUE; // 4187 2060
    object _2059 = NOVALUE; // 4186 2059
    object _2058 = NOVALUE; // 4185 2058
// skipping _2057  name type: 0
    object _2056 = NOVALUE; // 4182 2056
    object _2055 = NOVALUE; // 4181 2055
    object _2054 = NOVALUE; // 4180 2054
    object _2053 = NOVALUE; // 4179 2053
    object _2052 = NOVALUE; // 4178 2052
    object _2051 = NOVALUE; // 4177 2051
// skipping _2050  name type: 0
// skipping _2049  name type: 0
    object _2048 = NOVALUE; // 4173 2048
// skipping _2047  name type: 0
// skipping _2046  name type: 0
// skipping _2045  name type: 0
    object _2044 = NOVALUE; // 4166 2044
    object _2043 = NOVALUE; // 4165 2043
    object _2042 = NOVALUE; // 4164 2042
    object _2041 = NOVALUE; // 4163 2041
    object _2040 = NOVALUE; // 4162 2040
// skipping _2039  name type: 0
// skipping _2038  name type: 0
    object _2037 = NOVALUE; // 4155 2037
    object _2036 = NOVALUE; // 4154 2036
    object _2035 = NOVALUE; // 4153 2035
    object _2034 = NOVALUE; // 4152 2034
    object _2033 = NOVALUE; // 4151 2033
// skipping _2032  name type: 0
    object _2031 = NOVALUE; // 4148 2031
    object _2030 = NOVALUE; // 4147 2030
    object _2029 = NOVALUE; // 4146 2029
    object _2028 = NOVALUE; // 4145 2028
    object _2027 = NOVALUE; // 4144 2027
    object _2026 = NOVALUE; // 4143 2026
// skipping _2025  name type: 0
    object _2024 = NOVALUE; // 4141 2024
// skipping _2023  name type: 0
    object _2022 = NOVALUE; // 4138 2022
// skipping _2021  name type: 0
    object _2020 = NOVALUE; // 4134 2020
    object _2019 = NOVALUE; // 4133 2019
    object _2018 = NOVALUE; // 4132 2018
    object _2017 = NOVALUE; // 4131 2017
    object _2016 = NOVALUE; // 4130 2016
// skipping _2015  name type: 0
    object _2014 = NOVALUE; // 4127 2014
// skipping _2013  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Get2 pc: 1 op: STARTLINE (58)

    /** get.e:392		offset = string_next-1*/
    // SubProg Get2 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 5 op: MINUS_I (116)
    _offset_4124 = _20string_next_3817 - 1;
    // SubProg Get2 pc: 9 op: STARTLINE (58)

    /** get.e:393		get_ch()*/
    // SubProg Get2 pc: 11 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 13 op: STARTLINE (58)

    /** get.e:394		while find(ch, white_space) do*/
    // SubProg Get2 pc: 15 op: NOP2 (110)
    // SubProg Get2 pc: 17 op: NOPWHILE (158)
L1: // addr: 18 pc: 17 sub: 4119 op: 158
    // SubProg Get2 pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 20 op: FIND_FROM (176)
    _2014 = find_from(_20ch_3818, _20white_space_3834, 1);
    // SubProg Get2 pc: 25 op: WHILE (47)
    if (_2014 == 0)
    {
        _2014 = NOVALUE;
        goto L2; // [25] 37
    }
    else{
        _2014 = NOVALUE;
    }
    // SubProg Get2 pc: 28 op: STARTLINE (58)

    /** get.e:395			get_ch()*/
    // SubProg Get2 pc: 30 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 32 op: STARTLINE (58)

    /** get.e:396		end while*/
    // SubProg Get2 pc: 34 op: ENDWHILE (22)
    goto L1; // [34] 18
    // SubProg Get2 pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 4119 op: 159
    // SubProg Get2 pc: 37 op: STARTLINE (58)

    /** get.e:398		if ch = -1 then -- string is made of whitespace only*/
    // SubProg Get2 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 41 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != -1)
    goto L3; // [41] 75
    // SubProg Get2 pc: 45 op: STARTLINE (58)

    /** get.e:399			return {GET_EOF, 0, string_next-1-offset ,string_next-1}*/
    // SubProg Get2 pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 49 op: MINUS (10)
    _2016 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2016 +(uintptr_t) HIGH_BITS) >= 0){
        _2016 = NewDouble((eudouble)_2016);
    }
    // SubProg Get2 pc: 53 op: MINUS (10)
    if (IS_ATOM_INT(_2016)) {
        _2017 = _2016 - _offset_4124;
        if ((object)((uintptr_t)_2017 +(uintptr_t) HIGH_BITS) >= 0){
            _2017 = NewDouble((eudouble)_2017);
        }
    }
    else {
        _2017 = NewDouble(DBL_PTR(_2016)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2016);
    _2016 = NOVALUE;
    // SubProg Get2 pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 59 op: MINUS (10)
    _2018 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2018 +(uintptr_t) HIGH_BITS) >= 0){
        _2018 = NewDouble((eudouble)_2018);
    }
    // SubProg Get2 pc: 63 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2017;
    ((intptr_t*)_2)[4] = _2018;
    _2019 = MAKE_SEQ(_1);
    _2018 = NOVALUE;
    _2017 = NOVALUE;
    // SubProg Get2 pc: 70 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRef(_e_4122);

// block var e1_4123

// block var offset_4124
    return _2019;
    // SubProg Get2 pc: 74 op: NOP1 (159)
L3: // addr: 75 pc: 74 sub: 4119 op: 159
    // SubProg Get2 pc: 75 op: STARTLINE (58)

    /** get.e:402		leading_whitespace = string_next-2-offset -- index of the last whitespace: string_next points past the first non whitespace*/
    // SubProg Get2 pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 79 op: MINUS (10)
    _2020 = _20string_next_3817 - 2;
    if ((object)((uintptr_t)_2020 +(uintptr_t) HIGH_BITS) >= 0){
        _2020 = NewDouble((eudouble)_2020);
    }
    // SubProg Get2 pc: 83 op: MINUS (10)
    if (IS_ATOM_INT(_2020)) {
        _20leading_whitespace_4118 = _2020 - _offset_4124;
    }
    else {
        _20leading_whitespace_4118 = NewDouble(DBL_PTR(_2020)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2020);
    _2020 = NOVALUE;
    // SubProg Get2 pc: 87 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_20leading_whitespace_4118)) {
        _1 = (object)(DBL_PTR(_20leading_whitespace_4118)->dbl);
        DeRefDS(_20leading_whitespace_4118);
        _20leading_whitespace_4118 = _1;
    }
    // SubProg Get2 pc: 89 op: STARTLINE (58)

    /** get.e:404		while 1 do*/
    // SubProg Get2 pc: 91 op: NOP2 (110)
    // SubProg Get2 pc: 93 op: NOPWHILE (158)
L4: // addr: 94 pc: 93 sub: 4119 op: 158
    // SubProg Get2 pc: 94 op: STARTLINE (58)

    /** get.e:405			if find(ch, START_NUMERIC) then*/
    // SubProg Get2 pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 100 op: FIND_FROM (176)
    _2022 = find_from(_20ch_3818, _20START_NUMERIC_3801, 1);
    // SubProg Get2 pc: 105 op: IF (20)
    if (_2022 == 0)
    {
        _2022 = NOVALUE;
        goto L5; // [105] 213
    }
    else{
        _2022 = NOVALUE;
    }
    // SubProg Get2 pc: 108 op: STARTLINE (58)

    /** get.e:406				e = get_number()*/
    // SubProg Get2 pc: 110 op: PROC (27)
    _0 = _e_4122;
    _e_4122 = _20get_number();
    DeRef(_0);
    // SubProg Get2 pc: 113 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 115 op: STARTLINE (58)

    /** get.e:407				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    // SubProg Get2 pc: 117 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_4122);
    _2024 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get2 pc: 121 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _2024, -2)){
        _2024 = NOVALUE;
        goto L6; // [121] 162
    }
    _2024 = NOVALUE;
    // SubProg Get2 pc: 125 op: STARTLINE (58)

    /** get.e:408					return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 129 op: MINUS (10)
    _2026 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2026 +(uintptr_t) HIGH_BITS) >= 0){
        _2026 = NewDouble((eudouble)_2026);
    }
    // SubProg Get2 pc: 133 op: MINUS (10)
    if (IS_ATOM_INT(_2026)) {
        _2027 = _2026 - _offset_4124;
        if ((object)((uintptr_t)_2027 +(uintptr_t) HIGH_BITS) >= 0){
            _2027 = NewDouble((eudouble)_2027);
        }
    }
    else {
        _2027 = NewDouble(DBL_PTR(_2026)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2026);
    _2026 = NOVALUE;
    // SubProg Get2 pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 139 op: NOTEQ (4)
    _2028 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 143 op: MINUS (10)
    if (IS_ATOM_INT(_2027)) {
        _2029 = _2027 - _2028;
        if ((object)((uintptr_t)_2029 +(uintptr_t) HIGH_BITS) >= 0){
            _2029 = NewDouble((eudouble)_2029);
        }
    }
    else {
        _2029 = NewDouble(DBL_PTR(_2027)->dbl - (eudouble)_2028);
    }
    DeRef(_2027);
    _2027 = NOVALUE;
    _2028 = NOVALUE;
    // SubProg Get2 pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 149 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2029;
    ((intptr_t *)_2)[2] = _20leading_whitespace_4118;
    _2030 = MAKE_SEQ(_1);
    _2029 = NOVALUE;
    // SubProg Get2 pc: 153 op: CONCAT (15)
    Concat((object_ptr)&_2031, _e_4122, _2030);
    DeRefDS(_2030);
    _2030 = NOVALUE;
    // SubProg Get2 pc: 157 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRefDS(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    return _2031;
    // SubProg Get2 pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 4119 op: 159
    // SubProg Get2 pc: 162 op: STARTLINE (58)

    /** get.e:410				get_ch()*/
    // SubProg Get2 pc: 164 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 166 op: STARTLINE (58)

    /** get.e:411				if ch=-1 then*/
    // SubProg Get2 pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 170 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != -1)
    goto L4; // [170] 94
    // SubProg Get2 pc: 174 op: STARTLINE (58)

    /** get.e:412					return {GET_NOTHING, 0, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 178 op: MINUS (10)
    _2033 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2033 +(uintptr_t) HIGH_BITS) >= 0){
        _2033 = NewDouble((eudouble)_2033);
    }
    // SubProg Get2 pc: 182 op: MINUS (10)
    if (IS_ATOM_INT(_2033)) {
        _2034 = _2033 - _offset_4124;
        if ((object)((uintptr_t)_2034 +(uintptr_t) HIGH_BITS) >= 0){
            _2034 = NewDouble((eudouble)_2034);
        }
    }
    else {
        _2034 = NewDouble(DBL_PTR(_2033)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2033);
    _2033 = NOVALUE;
    // SubProg Get2 pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 188 op: NOTEQ (4)
    _2035 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 192 op: MINUS (10)
    if (IS_ATOM_INT(_2034)) {
        _2036 = _2034 - _2035;
        if ((object)((uintptr_t)_2036 +(uintptr_t) HIGH_BITS) >= 0){
            _2036 = NewDouble((eudouble)_2036);
        }
    }
    else {
        _2036 = NewDouble(DBL_PTR(_2034)->dbl - (eudouble)_2035);
    }
    DeRef(_2034);
    _2034 = NOVALUE;
    _2035 = NOVALUE;
    // SubProg Get2 pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 198 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2036;
    ((intptr_t*)_2)[4] = _20leading_whitespace_4118;
    _2037 = MAKE_SEQ(_1);
    _2036 = NOVALUE;
    // SubProg Get2 pc: 205 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRef(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    return _2037;
    // SubProg Get2 pc: 209 op: NOP1 (159)
    // SubProg Get2 pc: 210 op: ELSE (23)
    goto L4; // [210] 94
    // SubProg Get2 pc: 212 op: NOP1 (159)
L5: // addr: 213 pc: 212 sub: 4119 op: 159
    // SubProg Get2 pc: 213 op: STARTLINE (58)

    /** get.e:415			elsif ch = '{' then*/
    // SubProg Get2 pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 217 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 123)
    goto L7; // [217] 676
    // SubProg Get2 pc: 221 op: STARTLINE (58)

    /** get.e:417				s = {}*/
    // SubProg Get2 pc: 223 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_s_4121);
    _s_4121 = _5;
    // SubProg Get2 pc: 226 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 228 op: STARTLINE (58)

    /** get.e:418				get_ch()*/
    // SubProg Get2 pc: 230 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 232 op: STARTLINE (58)

    /** get.e:419				skip_blanks()*/
    // SubProg Get2 pc: 234 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get2 pc: 236 op: NOP2 (110)
    // SubProg Get2 pc: 238 op: NOPWHILE (158)
L8: // addr: 239 pc: 238 sub: 4119 op: 158
    // SubProg Get2 pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 241 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at233_4159 = find_from(_20ch_3818, _20white_space_3834, 1);
    // SubProg Get2 pc: 246 op: WHILE (47)
    if (_skip_blanks_1__tmp_at233_4159 == 0)
    {
        goto L9; // [246] 263
    }
    else{
    }
    // SubProg Get2 pc: 249 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get2 pc: 251 op: PROC (27)
    _20get_ch();
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
L9: // addr: 263 pc: 262 sub: 4119 op: 159
    // SubProg Get2 pc: 263 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get2 @ 233

// block var skip_blanks_1__tmp_at233_4159
    // SubProg Get2 pc: 265 op: STARTLINE (58)

    /** get.e:420				if ch = '}' then -- empty sequence*/
    // SubProg Get2 pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 269 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 125)
    goto LA; // [269] 313
    // SubProg Get2 pc: 273 op: STARTLINE (58)

    /** get.e:421					get_ch()*/
    // SubProg Get2 pc: 275 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 277 op: STARTLINE (58)

    /** get.e:422					return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 281 op: MINUS (10)
    _2040 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2040 +(uintptr_t) HIGH_BITS) >= 0){
        _2040 = NewDouble((eudouble)_2040);
    }
    // SubProg Get2 pc: 285 op: MINUS (10)
    if (IS_ATOM_INT(_2040)) {
        _2041 = _2040 - _offset_4124;
        if ((object)((uintptr_t)_2041 +(uintptr_t) HIGH_BITS) >= 0){
            _2041 = NewDouble((eudouble)_2041);
        }
    }
    else {
        _2041 = NewDouble(DBL_PTR(_2040)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2040);
    _2040 = NOVALUE;
    // SubProg Get2 pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 291 op: NOTEQ (4)
    _2042 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 295 op: MINUS (10)
    if (IS_ATOM_INT(_2041)) {
        _2043 = _2041 - _2042;
        if ((object)((uintptr_t)_2043 +(uintptr_t) HIGH_BITS) >= 0){
            _2043 = NewDouble((eudouble)_2043);
        }
    }
    else {
        _2043 = NewDouble(DBL_PTR(_2041)->dbl - (eudouble)_2042);
    }
    DeRef(_2041);
    _2041 = NOVALUE;
    _2042 = NOVALUE;
    // SubProg Get2 pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 301 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_4121);
    ((intptr_t*)_2)[2] = _s_4121;
    ((intptr_t*)_2)[3] = _2043;
    ((intptr_t*)_2)[4] = _20leading_whitespace_4118;
    _2044 = MAKE_SEQ(_1);
    _2043 = NOVALUE;
    // SubProg Get2 pc: 308 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRefDS(_s_4121);

// block var e_4122
    DeRef(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    return _2044;
    // SubProg Get2 pc: 312 op: NOP1 (159)
LA: // addr: 313 pc: 312 sub: 4119 op: 159
    // SubProg Get2 pc: 313 op: STARTLINE (58)

    /** get.e:425				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
    // SubProg Get2 pc: 315 op: NOP2 (110)
    // SubProg Get2 pc: 317 op: NOPWHILE (158)
LB: // addr: 318 pc: 317 sub: 4119 op: 158
    // SubProg Get2 pc: 318 op: STARTLINE (58)

    /** get.e:426					while 1 do -- read zero or more comments and an element*/
    // SubProg Get2 pc: 320 op: NOP2 (110)
    // SubProg Get2 pc: 322 op: NOPWHILE (158)
LC: // addr: 323 pc: 322 sub: 4119 op: 158
    // SubProg Get2 pc: 323 op: STARTLINE (58)

    /** get.e:427						e = Get() -- read next element, using standard function*/
    // SubProg Get2 pc: 325 op: PROC (27)
    _0 = _e_4122;
    _e_4122 = _20Get();
    DeRef(_0);
    // SubProg Get2 pc: 328 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 330 op: STARTLINE (58)

    /** get.e:428						e1 = e[1]*/
    // SubProg Get2 pc: 332 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_e_4122);
    _e1_4123 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_4123))
    _e1_4123 = (object)DBL_PTR(_e1_4123)->dbl;
    // SubProg Get2 pc: 336 op: STARTLINE (58)

    /** get.e:429						if e1 = GET_SUCCESS then*/
    // SubProg Get2 pc: 338 op: EQUALS_IFW_I (121)
    if (_e1_4123 != 0)
    goto LD; // [338] 359
    // SubProg Get2 pc: 342 op: STARTLINE (58)

    /** get.e:430							s = append(s, e[2])*/
    // SubProg Get2 pc: 344 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_4122);
    _2048 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Get2 pc: 348 op: APPEND (35)
    Ref(_2048);
    Append(&_s_4121, _s_4121, _2048);
    _2048 = NOVALUE;
    // SubProg Get2 pc: 352 op: STARTLINE (58)

    /** get.e:431							exit  -- element read and added to result*/
    // SubProg Get2 pc: 354 op: EXIT (61)
    goto LE; // [354] 458
    // SubProg Get2 pc: 356 op: ELSE (23)
    goto LC; // [356] 323
    // SubProg Get2 pc: 358 op: NOP1 (159)
LD: // addr: 359 pc: 358 sub: 4119 op: 159
    // SubProg Get2 pc: 359 op: STARTLINE (58)

    /** get.e:432						elsif e1 != GET_IGNORE then*/
    // SubProg Get2 pc: 361 op: NOTEQ_IFW_I (122)
    if (_e1_4123 == -2)
    goto LF; // [361] 404
    // SubProg Get2 pc: 365 op: STARTLINE (58)

    /** get.e:433							return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 369 op: MINUS (10)
    _2051 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2051 +(uintptr_t) HIGH_BITS) >= 0){
        _2051 = NewDouble((eudouble)_2051);
    }
    // SubProg Get2 pc: 373 op: MINUS (10)
    if (IS_ATOM_INT(_2051)) {
        _2052 = _2051 - _offset_4124;
        if ((object)((uintptr_t)_2052 +(uintptr_t) HIGH_BITS) >= 0){
            _2052 = NewDouble((eudouble)_2052);
        }
    }
    else {
        _2052 = NewDouble(DBL_PTR(_2051)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2051);
    _2051 = NOVALUE;
    // SubProg Get2 pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 379 op: NOTEQ (4)
    _2053 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 383 op: MINUS (10)
    if (IS_ATOM_INT(_2052)) {
        _2054 = _2052 - _2053;
        if ((object)((uintptr_t)_2054 +(uintptr_t) HIGH_BITS) >= 0){
            _2054 = NewDouble((eudouble)_2054);
        }
    }
    else {
        _2054 = NewDouble(DBL_PTR(_2052)->dbl - (eudouble)_2053);
    }
    DeRef(_2052);
    _2052 = NOVALUE;
    _2053 = NOVALUE;
    // SubProg Get2 pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 389 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2054;
    ((intptr_t *)_2)[2] = _20leading_whitespace_4118;
    _2055 = MAKE_SEQ(_1);
    _2054 = NOVALUE;
    // SubProg Get2 pc: 393 op: CONCAT (15)
    Concat((object_ptr)&_2056, _e_4122, _2055);
    DeRefDS(_2055);
    _2055 = NOVALUE;
    // SubProg Get2 pc: 397 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRefDS(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    return _2056;
    // SubProg Get2 pc: 401 op: ELSE (23)
    goto LC; // [401] 323
    // SubProg Get2 pc: 403 op: NOP1 (159)
LF: // addr: 404 pc: 403 sub: 4119 op: 159
    // SubProg Get2 pc: 404 op: STARTLINE (58)

    /** get.e:435						elsif ch='}' then*/
    // SubProg Get2 pc: 406 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 408 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 125)
    goto LC; // [408] 323
    // SubProg Get2 pc: 412 op: STARTLINE (58)

    /** get.e:436							get_ch()*/
    // SubProg Get2 pc: 414 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 416 op: STARTLINE (58)

    /** get.e:437							return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1),leading_whitespace} -- empty sequence*/
    // SubProg Get2 pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 420 op: MINUS (10)
    _2058 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2058 +(uintptr_t) HIGH_BITS) >= 0){
        _2058 = NewDouble((eudouble)_2058);
    }
    // SubProg Get2 pc: 424 op: MINUS (10)
    if (IS_ATOM_INT(_2058)) {
        _2059 = _2058 - _offset_4124;
        if ((object)((uintptr_t)_2059 +(uintptr_t) HIGH_BITS) >= 0){
            _2059 = NewDouble((eudouble)_2059);
        }
    }
    else {
        _2059 = NewDouble(DBL_PTR(_2058)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2058);
    _2058 = NOVALUE;
    // SubProg Get2 pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 430 op: NOTEQ (4)
    _2060 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 434 op: MINUS (10)
    if (IS_ATOM_INT(_2059)) {
        _2061 = _2059 - _2060;
        if ((object)((uintptr_t)_2061 +(uintptr_t) HIGH_BITS) >= 0){
            _2061 = NewDouble((eudouble)_2061);
        }
    }
    else {
        _2061 = NewDouble(DBL_PTR(_2059)->dbl - (eudouble)_2060);
    }
    DeRef(_2059);
    _2059 = NOVALUE;
    _2060 = NOVALUE;
    // SubProg Get2 pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 440 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_4121);
    ((intptr_t*)_2)[2] = _s_4121;
    ((intptr_t*)_2)[3] = _2061;
    ((intptr_t*)_2)[4] = _20leading_whitespace_4118;
    _2062 = MAKE_SEQ(_1);
    _2061 = NOVALUE;
    // SubProg Get2 pc: 447 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRefDS(_s_4121);

// block var e_4122
    DeRef(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    return _2062;
    // SubProg Get2 pc: 451 op: NOP1 (159)
    // SubProg Get2 pc: 452 op: NOP1 (159)
    // SubProg Get2 pc: 453 op: STARTLINE (58)

    /** get.e:439					end while*/
    // SubProg Get2 pc: 455 op: ENDWHILE (22)
    goto LC; // [455] 323
    // SubProg Get2 pc: 457 op: NOP1 (159)
LE: // addr: 458 pc: 457 sub: 4119 op: 159
    // SubProg Get2 pc: 458 op: STARTLINE (58)

    /** get.e:441					while 1 do -- now read zero or more post element comments*/
    // SubProg Get2 pc: 460 op: NOP2 (110)
    // SubProg Get2 pc: 462 op: NOPWHILE (158)
L10: // addr: 463 pc: 462 sub: 4119 op: 158
    // SubProg Get2 pc: 463 op: STARTLINE (58)

    /** get.e:442						skip_blanks()*/
    // SubProg Get2 pc: 465 op: STARTLINE (58)

    /** get.e:67		while find(ch, white_space) do*/
    // SubProg Get2 pc: 467 op: NOP2 (110)
    // SubProg Get2 pc: 469 op: NOPWHILE (158)
L11: // addr: 470 pc: 469 sub: 4119 op: 158
    // SubProg Get2 pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 472 op: FIND_FROM (176)
    _skip_blanks_1__tmp_at464_4192 = find_from(_20ch_3818, _20white_space_3834, 1);
    // SubProg Get2 pc: 477 op: WHILE (47)
    if (_skip_blanks_1__tmp_at464_4192 == 0)
    {
        goto L12; // [477] 494
    }
    else{
    }
    // SubProg Get2 pc: 480 op: STARTLINE (58)

    /** get.e:68			get_ch()*/
    // SubProg Get2 pc: 482 op: PROC (27)
    _20get_ch();
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
L12: // addr: 494 pc: 493 sub: 4119 op: 159
    // SubProg Get2 pc: 494 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-skip_blanks from Get2 @ 464

// block var skip_blanks_1__tmp_at464_4192
    // SubProg Get2 pc: 496 op: STARTLINE (58)

    /** get.e:443						if ch = '}' then*/
    // SubProg Get2 pc: 498 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 500 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 125)
    goto L13; // [500] 546
    // SubProg Get2 pc: 504 op: STARTLINE (58)

    /** get.e:444							get_ch()*/
    // SubProg Get2 pc: 506 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 508 op: STARTLINE (58)

    /** get.e:445						return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 512 op: MINUS (10)
    _2064 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2064 +(uintptr_t) HIGH_BITS) >= 0){
        _2064 = NewDouble((eudouble)_2064);
    }
    // SubProg Get2 pc: 516 op: MINUS (10)
    if (IS_ATOM_INT(_2064)) {
        _2065 = _2064 - _offset_4124;
        if ((object)((uintptr_t)_2065 +(uintptr_t) HIGH_BITS) >= 0){
            _2065 = NewDouble((eudouble)_2065);
        }
    }
    else {
        _2065 = NewDouble(DBL_PTR(_2064)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2064);
    _2064 = NOVALUE;
    // SubProg Get2 pc: 520 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 522 op: NOTEQ (4)
    _2066 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 526 op: MINUS (10)
    if (IS_ATOM_INT(_2065)) {
        _2067 = _2065 - _2066;
        if ((object)((uintptr_t)_2067 +(uintptr_t) HIGH_BITS) >= 0){
            _2067 = NewDouble((eudouble)_2067);
        }
    }
    else {
        _2067 = NewDouble(DBL_PTR(_2065)->dbl - (eudouble)_2066);
    }
    DeRef(_2065);
    _2065 = NOVALUE;
    _2066 = NOVALUE;
    // SubProg Get2 pc: 530 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 532 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_4121);
    ((intptr_t*)_2)[2] = _s_4121;
    ((intptr_t*)_2)[3] = _2067;
    ((intptr_t*)_2)[4] = _20leading_whitespace_4118;
    _2068 = MAKE_SEQ(_1);
    _2067 = NOVALUE;
    // SubProg Get2 pc: 539 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRefDS(_s_4121);

// block var e_4122
    DeRef(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2062);
    _2062 = NOVALUE;
    return _2068;
    // SubProg Get2 pc: 543 op: ELSE (23)
    goto L10; // [543] 463
    // SubProg Get2 pc: 545 op: NOP1 (159)
L13: // addr: 546 pc: 545 sub: 4119 op: 159
    // SubProg Get2 pc: 546 op: STARTLINE (58)

    /** get.e:446						elsif ch!='-' then*/
    // SubProg Get2 pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 550 op: NOTEQ_IFW_I (122)
    if (_20ch_3818 == 45)
    goto L14; // [550] 561
    // SubProg Get2 pc: 554 op: STARTLINE (58)

    /** get.e:447							exit*/
    // SubProg Get2 pc: 556 op: EXIT (61)
    goto L15; // [556] 620
    // SubProg Get2 pc: 558 op: ELSE (23)
    goto L10; // [558] 463
    // SubProg Get2 pc: 560 op: NOP1 (159)
L14: // addr: 561 pc: 560 sub: 4119 op: 159
    // SubProg Get2 pc: 561 op: STARTLINE (58)

    /** get.e:449							e = get_number() -- reads anything starting with '-'*/
    // SubProg Get2 pc: 563 op: PROC (27)
    _0 = _e_4122;
    _e_4122 = _20get_number();
    DeRef(_0);
    // SubProg Get2 pc: 566 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 568 op: STARTLINE (58)

    /** get.e:450							if e[1] != GET_IGNORE then  -- it was not a comment, this is illegal*/
    // SubProg Get2 pc: 570 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_e_4122);
    _2071 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Get2 pc: 574 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _2071, -2)){
        _2071 = NOVALUE;
        goto L10; // [574] 463
    }
    _2071 = NOVALUE;
    // SubProg Get2 pc: 578 op: STARTLINE (58)

    /** get.e:451								return {GET_FAIL, 0, string_next-1-offset-(ch!=-1),leading_whitespace}*/
    // SubProg Get2 pc: 580 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 582 op: MINUS (10)
    _2073 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2073 +(uintptr_t) HIGH_BITS) >= 0){
        _2073 = NewDouble((eudouble)_2073);
    }
    // SubProg Get2 pc: 586 op: MINUS (10)
    if (IS_ATOM_INT(_2073)) {
        _2074 = _2073 - _offset_4124;
        if ((object)((uintptr_t)_2074 +(uintptr_t) HIGH_BITS) >= 0){
            _2074 = NewDouble((eudouble)_2074);
        }
    }
    else {
        _2074 = NewDouble(DBL_PTR(_2073)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2073);
    _2073 = NOVALUE;
    // SubProg Get2 pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 592 op: NOTEQ (4)
    _2075 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 596 op: MINUS (10)
    if (IS_ATOM_INT(_2074)) {
        _2076 = _2074 - _2075;
        if ((object)((uintptr_t)_2076 +(uintptr_t) HIGH_BITS) >= 0){
            _2076 = NewDouble((eudouble)_2076);
        }
    }
    else {
        _2076 = NewDouble(DBL_PTR(_2074)->dbl - (eudouble)_2075);
    }
    DeRef(_2074);
    _2074 = NOVALUE;
    _2075 = NOVALUE;
    // SubProg Get2 pc: 600 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 602 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2076;
    ((intptr_t*)_2)[4] = _20leading_whitespace_4118;
    _2077 = MAKE_SEQ(_1);
    _2076 = NOVALUE;
    // SubProg Get2 pc: 609 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRefDS(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2068);
    _2068 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2062);
    _2062 = NOVALUE;
    return _2077;
    // SubProg Get2 pc: 613 op: NOP1 (159)
    // SubProg Get2 pc: 614 op: NOP1 (159)
    // SubProg Get2 pc: 615 op: STARTLINE (58)

    /** get.e:455				end while*/
    // SubProg Get2 pc: 617 op: ENDWHILE (22)
    goto L10; // [617] 463
    // SubProg Get2 pc: 619 op: NOP1 (159)
L15: // addr: 620 pc: 619 sub: 4119 op: 159
    // SubProg Get2 pc: 620 op: STARTLINE (58)

    /** get.e:456					if ch != ',' then*/
    // SubProg Get2 pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 624 op: NOTEQ_IFW_I (122)
    if (_20ch_3818 == 44)
    goto L16; // [624] 664
    // SubProg Get2 pc: 628 op: STARTLINE (58)

    /** get.e:457					return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 630 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 632 op: MINUS (10)
    _2079 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2079 +(uintptr_t) HIGH_BITS) >= 0){
        _2079 = NewDouble((eudouble)_2079);
    }
    // SubProg Get2 pc: 636 op: MINUS (10)
    if (IS_ATOM_INT(_2079)) {
        _2080 = _2079 - _offset_4124;
        if ((object)((uintptr_t)_2080 +(uintptr_t) HIGH_BITS) >= 0){
            _2080 = NewDouble((eudouble)_2080);
        }
    }
    else {
        _2080 = NewDouble(DBL_PTR(_2079)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2079);
    _2079 = NOVALUE;
    // SubProg Get2 pc: 640 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 642 op: NOTEQ (4)
    _2081 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 646 op: MINUS (10)
    if (IS_ATOM_INT(_2080)) {
        _2082 = _2080 - _2081;
        if ((object)((uintptr_t)_2082 +(uintptr_t) HIGH_BITS) >= 0){
            _2082 = NewDouble((eudouble)_2082);
        }
    }
    else {
        _2082 = NewDouble(DBL_PTR(_2080)->dbl - (eudouble)_2081);
    }
    DeRef(_2080);
    _2080 = NOVALUE;
    _2081 = NOVALUE;
    // SubProg Get2 pc: 650 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 652 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2082;
    ((intptr_t*)_2)[4] = _20leading_whitespace_4118;
    _2083 = MAKE_SEQ(_1);
    _2082 = NOVALUE;
    // SubProg Get2 pc: 659 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRef(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2077);
    _2077 = NOVALUE;
    DeRef(_2068);
    _2068 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2062);
    _2062 = NOVALUE;
    return _2083;
    // SubProg Get2 pc: 663 op: NOP1 (159)
L16: // addr: 664 pc: 663 sub: 4119 op: 159
    // SubProg Get2 pc: 664 op: STARTLINE (58)

    /** get.e:459				get_ch() -- skip comma*/
    // SubProg Get2 pc: 666 op: PROC (27)
    _20get_ch();
    // SubProg Get2 pc: 668 op: STARTLINE (58)

    /** get.e:460				end while*/
    // SubProg Get2 pc: 670 op: ENDWHILE (22)
    goto LB; // [670] 318
    // SubProg Get2 pc: 672 op: NOP1 (159)
    // SubProg Get2 pc: 673 op: ELSE (23)
    goto L4; // [673] 94
    // SubProg Get2 pc: 675 op: NOP1 (159)
L7: // addr: 676 pc: 675 sub: 4119 op: 159
    // SubProg Get2 pc: 676 op: STARTLINE (58)

    /** get.e:462			elsif ch = '\"' then*/
    // SubProg Get2 pc: 678 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 680 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 34)
    goto L17; // [680] 730
    // SubProg Get2 pc: 684 op: STARTLINE (58)

    /** get.e:463				e = get_string()*/
    // SubProg Get2 pc: 686 op: PROC (27)
    _0 = _e_4122;
    _e_4122 = _20get_string();
    DeRef(_0);
    // SubProg Get2 pc: 689 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 691 op: STARTLINE (58)

    /** get.e:464				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 695 op: MINUS (10)
    _2086 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2086 +(uintptr_t) HIGH_BITS) >= 0){
        _2086 = NewDouble((eudouble)_2086);
    }
    // SubProg Get2 pc: 699 op: MINUS (10)
    if (IS_ATOM_INT(_2086)) {
        _2087 = _2086 - _offset_4124;
        if ((object)((uintptr_t)_2087 +(uintptr_t) HIGH_BITS) >= 0){
            _2087 = NewDouble((eudouble)_2087);
        }
    }
    else {
        _2087 = NewDouble(DBL_PTR(_2086)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2086);
    _2086 = NOVALUE;
    // SubProg Get2 pc: 703 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 705 op: NOTEQ (4)
    _2088 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 709 op: MINUS (10)
    if (IS_ATOM_INT(_2087)) {
        _2089 = _2087 - _2088;
        if ((object)((uintptr_t)_2089 +(uintptr_t) HIGH_BITS) >= 0){
            _2089 = NewDouble((eudouble)_2089);
        }
    }
    else {
        _2089 = NewDouble(DBL_PTR(_2087)->dbl - (eudouble)_2088);
    }
    DeRef(_2087);
    _2087 = NOVALUE;
    _2088 = NOVALUE;
    // SubProg Get2 pc: 713 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 715 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2089;
    ((intptr_t *)_2)[2] = _20leading_whitespace_4118;
    _2090 = MAKE_SEQ(_1);
    _2089 = NOVALUE;
    // SubProg Get2 pc: 719 op: CONCAT (15)
    Concat((object_ptr)&_2091, _e_4122, _2090);
    DeRefDS(_2090);
    _2090 = NOVALUE;
    // SubProg Get2 pc: 723 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRefDS(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2077);
    _2077 = NOVALUE;
    DeRef(_2068);
    _2068 = NOVALUE;
    DeRef(_2083);
    _2083 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2062);
    _2062 = NOVALUE;
    return _2091;
    // SubProg Get2 pc: 727 op: ELSE (23)
    goto L4; // [727] 94
    // SubProg Get2 pc: 729 op: NOP1 (159)
L17: // addr: 730 pc: 729 sub: 4119 op: 159
    // SubProg Get2 pc: 730 op: STARTLINE (58)

    /** get.e:465			elsif ch = '`' then*/
    // SubProg Get2 pc: 732 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 734 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 96)
    goto L18; // [734] 785
    // SubProg Get2 pc: 738 op: STARTLINE (58)

    /** get.e:466				e = get_heredoc("`")*/
    // SubProg Get2 pc: 740 op: PROC (27)
    RefDS(_2008);
    _0 = _e_4122;
    _e_4122 = _20get_heredoc(_2008);
    DeRef(_0);
    // SubProg Get2 pc: 744 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 746 op: STARTLINE (58)

    /** get.e:467				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 748 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 750 op: MINUS (10)
    _2094 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2094 +(uintptr_t) HIGH_BITS) >= 0){
        _2094 = NewDouble((eudouble)_2094);
    }
    // SubProg Get2 pc: 754 op: MINUS (10)
    if (IS_ATOM_INT(_2094)) {
        _2095 = _2094 - _offset_4124;
        if ((object)((uintptr_t)_2095 +(uintptr_t) HIGH_BITS) >= 0){
            _2095 = NewDouble((eudouble)_2095);
        }
    }
    else {
        _2095 = NewDouble(DBL_PTR(_2094)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2094);
    _2094 = NOVALUE;
    // SubProg Get2 pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 760 op: NOTEQ (4)
    _2096 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 764 op: MINUS (10)
    if (IS_ATOM_INT(_2095)) {
        _2097 = _2095 - _2096;
        if ((object)((uintptr_t)_2097 +(uintptr_t) HIGH_BITS) >= 0){
            _2097 = NewDouble((eudouble)_2097);
        }
    }
    else {
        _2097 = NewDouble(DBL_PTR(_2095)->dbl - (eudouble)_2096);
    }
    DeRef(_2095);
    _2095 = NOVALUE;
    _2096 = NOVALUE;
    // SubProg Get2 pc: 768 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 770 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2097;
    ((intptr_t *)_2)[2] = _20leading_whitespace_4118;
    _2098 = MAKE_SEQ(_1);
    _2097 = NOVALUE;
    // SubProg Get2 pc: 774 op: CONCAT (15)
    Concat((object_ptr)&_2099, _e_4122, _2098);
    DeRefDS(_2098);
    _2098 = NOVALUE;
    // SubProg Get2 pc: 778 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRefDS(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2077);
    _2077 = NOVALUE;
    DeRef(_2068);
    _2068 = NOVALUE;
    DeRef(_2083);
    _2083 = NOVALUE;
    DeRef(_2091);
    _2091 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2062);
    _2062 = NOVALUE;
    return _2099;
    // SubProg Get2 pc: 782 op: ELSE (23)
    goto L4; // [782] 94
    // SubProg Get2 pc: 784 op: NOP1 (159)
L18: // addr: 785 pc: 784 sub: 4119 op: 159
    // SubProg Get2 pc: 785 op: STARTLINE (58)

    /** get.e:468			elsif ch = '\'' then*/
    // SubProg Get2 pc: 787 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 789 op: EQUALS_IFW_I (121)
    if (_20ch_3818 != 39)
    goto L19; // [789] 839
    // SubProg Get2 pc: 793 op: STARTLINE (58)

    /** get.e:469				e = get_qchar()*/
    // SubProg Get2 pc: 795 op: PROC (27)
    _0 = _e_4122;
    _e_4122 = _20get_qchar();
    DeRef(_0);
    // SubProg Get2 pc: 798 op: SEQUENCE_CHECK (97)
    // SubProg Get2 pc: 800 op: STARTLINE (58)

    /** get.e:470				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 802 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 804 op: MINUS (10)
    _2102 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2102 +(uintptr_t) HIGH_BITS) >= 0){
        _2102 = NewDouble((eudouble)_2102);
    }
    // SubProg Get2 pc: 808 op: MINUS (10)
    if (IS_ATOM_INT(_2102)) {
        _2103 = _2102 - _offset_4124;
        if ((object)((uintptr_t)_2103 +(uintptr_t) HIGH_BITS) >= 0){
            _2103 = NewDouble((eudouble)_2103);
        }
    }
    else {
        _2103 = NewDouble(DBL_PTR(_2102)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2102);
    _2102 = NOVALUE;
    // SubProg Get2 pc: 812 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 814 op: NOTEQ (4)
    _2104 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 818 op: MINUS (10)
    if (IS_ATOM_INT(_2103)) {
        _2105 = _2103 - _2104;
        if ((object)((uintptr_t)_2105 +(uintptr_t) HIGH_BITS) >= 0){
            _2105 = NewDouble((eudouble)_2105);
        }
    }
    else {
        _2105 = NewDouble(DBL_PTR(_2103)->dbl - (eudouble)_2104);
    }
    DeRef(_2103);
    _2103 = NOVALUE;
    _2104 = NOVALUE;
    // SubProg Get2 pc: 822 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 824 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2105;
    ((intptr_t *)_2)[2] = _20leading_whitespace_4118;
    _2106 = MAKE_SEQ(_1);
    _2105 = NOVALUE;
    // SubProg Get2 pc: 828 op: CONCAT (15)
    Concat((object_ptr)&_2107, _e_4122, _2106);
    DeRefDS(_2106);
    _2106 = NOVALUE;
    // SubProg Get2 pc: 832 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRefDS(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2099);
    _2099 = NOVALUE;
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2077);
    _2077 = NOVALUE;
    DeRef(_2068);
    _2068 = NOVALUE;
    DeRef(_2083);
    _2083 = NOVALUE;
    DeRef(_2091);
    _2091 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2062);
    _2062 = NOVALUE;
    return _2107;
    // SubProg Get2 pc: 836 op: ELSE (23)
    goto L4; // [836] 94
    // SubProg Get2 pc: 838 op: NOP1 (159)
L19: // addr: 839 pc: 838 sub: 4119 op: 159
    // SubProg Get2 pc: 839 op: STARTLINE (58)

    /** get.e:472				return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    // SubProg Get2 pc: 841 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 843 op: MINUS (10)
    _2108 = _20string_next_3817 - 1;
    if ((object)((uintptr_t)_2108 +(uintptr_t) HIGH_BITS) >= 0){
        _2108 = NewDouble((eudouble)_2108);
    }
    // SubProg Get2 pc: 847 op: MINUS (10)
    if (IS_ATOM_INT(_2108)) {
        _2109 = _2108 - _offset_4124;
        if ((object)((uintptr_t)_2109 +(uintptr_t) HIGH_BITS) >= 0){
            _2109 = NewDouble((eudouble)_2109);
        }
    }
    else {
        _2109 = NewDouble(DBL_PTR(_2108)->dbl - (eudouble)_offset_4124);
    }
    DeRef(_2108);
    _2108 = NOVALUE;
    // SubProg Get2 pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 853 op: NOTEQ (4)
    _2110 = (_20ch_3818 != -1);
    // SubProg Get2 pc: 857 op: MINUS (10)
    if (IS_ATOM_INT(_2109)) {
        _2111 = _2109 - _2110;
        if ((object)((uintptr_t)_2111 +(uintptr_t) HIGH_BITS) >= 0){
            _2111 = NewDouble((eudouble)_2111);
        }
    }
    else {
        _2111 = NewDouble(DBL_PTR(_2109)->dbl - (eudouble)_2110);
    }
    DeRef(_2109);
    _2109 = NOVALUE;
    _2110 = NOVALUE;
    // SubProg Get2 pc: 861 op: GLOBAL_INIT_CHECK (109)
    // SubProg Get2 pc: 863 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2111;
    ((intptr_t*)_2)[4] = _20leading_whitespace_4118;
    _2112 = MAKE_SEQ(_1);
    _2111 = NOVALUE;
    // SubProg Get2 pc: 870 op: RETURNF (28)

// Exiting block BLOCK: Get2

// block var s_4121
    DeRef(_s_4121);

// block var e_4122
    DeRef(_e_4122);

// block var e1_4123

// block var offset_4124
    DeRef(_2099);
    _2099 = NOVALUE;
    DeRef(_2019);
    _2019 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    DeRef(_2107);
    _2107 = NOVALUE;
    DeRef(_2056);
    _2056 = NOVALUE;
    DeRef(_2031);
    _2031 = NOVALUE;
    DeRef(_2077);
    _2077 = NOVALUE;
    DeRef(_2068);
    _2068 = NOVALUE;
    DeRef(_2083);
    _2083 = NOVALUE;
    DeRef(_2091);
    _2091 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2062);
    _2062 = NOVALUE;
    return _2112;
    // SubProg Get2 pc: 874 op: NOP1 (159)
    // SubProg Get2 pc: 875 op: STARTLINE (58)

    /** get.e:476		end while*/
    // SubProg Get2 pc: 877 op: ENDWHILE (22)
    goto L4; // [877] 94
    // SubProg Get2 pc: 879 op: NOP1 (159)
    // SubProg Get2 pc: 880 op: BADRETURNF (43)
    ;
}


object _20get_value(object _target_4260, object _start_point_4261, object _answer_type_4262)
{
    object _msg_inlined_crash_at_35_4273 = NOVALUE;
    object _data_inlined_crash_at_32_4272 = NOVALUE;
    object _msg_inlined_crash_at_96_4285 = NOVALUE;
    object _2130 = NOVALUE; // 4289 2130
// skipping _2129  name type: 0
    object _2127 = NOVALUE; // 4282 2127
    object _2126 = NOVALUE; // 4281 2126
    object _2125 = NOVALUE; // 4280 2125
    object _2124 = NOVALUE; // 4275 2124
    object _2123 = NOVALUE; // 4270 2123
    object _2119 = NOVALUE; // 4266 2119
    object _2118 = NOVALUE; // 4265 2118
    object _2117 = NOVALUE; // 4264 2117
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_value pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_value pc: 3 op: INTEGER_CHECK (96)
    // SubProg get_value pc: 5 op: STARTLINE (58)

    /** get.e:488		if answer_type != GET_SHORT_ANSWER and answer_type != GET_LONG_ANSWER then*/
    // SubProg get_value pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 9 op: NOTEQ (4)
    _2117 = (_answer_type_4262 != _20GET_SHORT_ANSWER_4252);
    // SubProg get_value pc: 13 op: SC1_AND_IF (146)
    if (_2117 == 0) {
        goto L1; // [13] 55
    }
    // SubProg get_value pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 19 op: NOTEQ (4)
    _2119 = (_answer_type_4262 != _20GET_LONG_ANSWER_4255);
    // SubProg get_value pc: 23 op: NOP1 (159)
    // SubProg get_value pc: 24 op: IF (20)
    if (_2119 == 0)
    {
        DeRef(_2119);
        _2119 = NOVALUE;
        goto L1; // [24] 55
    }
    else{
        DeRef(_2119);
        _2119 = NOVALUE;
    }
    // SubProg get_value pc: 27 op: STARTLINE (58)

    /** get.e:489			error:crash("Invalid type of answer, please only use %s (the default) or %s.", {"GET_SHORT_ANSWER", "GET_LONG_ANSWER"})*/
    // SubProg get_value pc: 29 op: RIGHT_BRACE_2 (85)
    RefDS(_2122);
    RefDS(_2121);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2121;
    ((intptr_t *)_2)[2] = _2122;
    _2123 = MAKE_SEQ(_1);
    // SubProg get_value pc: 33 op: ASSIGN (18)
    DeRef(_data_inlined_crash_at_32_4272);
    _data_inlined_crash_at_32_4272 = _2123;
    _2123 = NOVALUE;
    // SubProg get_value pc: 36 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg get_value pc: 38 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_35_4273);
    _msg_inlined_crash_at_35_4273 = EPrintf(-9999999, _2120, _data_inlined_crash_at_32_4272);
    // SubProg get_value pc: 42 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg get_value pc: 44 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_35_4273);
    // SubProg get_value pc: 47 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg get_value pc: 49 op: ELSE (23)
    goto L2; // [49] 52
    // SubProg get_value pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 4258 op: 159
    // SubProg get_value pc: 52 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from get_value @ 32

// block var data_inlined_crash_at_32_4272
    DeRef(_data_inlined_crash_at_32_4272);
    _data_inlined_crash_at_32_4272 = NOVALUE;

// block var msg_inlined_crash_at_35_4273
    DeRefi(_msg_inlined_crash_at_35_4273);
    _msg_inlined_crash_at_35_4273 = NOVALUE;
    // SubProg get_value pc: 54 op: NOP1 (159)
L1: // addr: 55 pc: 54 sub: 4258 op: 159
    // SubProg get_value pc: 55 op: STARTLINE (58)

    /** get.e:491		if atom(target) then -- get()*/
    // SubProg get_value pc: 57 op: IS_AN_ATOM (67)
    _2124 = IS_ATOM(_target_4260);
    // SubProg get_value pc: 60 op: IF (20)
    if (_2124 == 0)
    {
        _2124 = NOVALUE;
        goto L3; // [60] 128
    }
    else{
        _2124 = NOVALUE;
    }
    // SubProg get_value pc: 63 op: STARTLINE (58)

    /** get.e:492			input_file = target*/
    // SubProg get_value pc: 65 op: ASSIGN (18)
    Ref(_target_4260);
    _20input_file_3815 = _target_4260;
    // SubProg get_value pc: 68 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_20input_file_3815)) {
        _1 = (object)(DBL_PTR(_20input_file_3815)->dbl);
        DeRefDS(_20input_file_3815);
        _20input_file_3815 = _1;
    }
    // SubProg get_value pc: 70 op: STARTLINE (58)

    /** get.e:493			if start_point then*/
    // SubProg get_value pc: 72 op: IF (20)
    if (_start_point_4261 == 0)
    {
        goto L4; // [72] 115
    }
    else{
    }
    // SubProg get_value pc: 75 op: STARTLINE (58)

    /** get.e:494				if io:seek(target, io:where(target)+start_point) then*/
    // SubProg get_value pc: 77 op: PROC (27)
    Ref(_target_4260);
    _2125 = _14where(_target_4260);
    // SubProg get_value pc: 81 op: PLUS (11)
    if (IS_ATOM_INT(_2125)) {
        _2126 = _2125 + _start_point_4261;
        if ((object)((uintptr_t)_2126 + (uintptr_t)HIGH_BITS) >= 0){
            _2126 = NewDouble((eudouble)_2126);
        }
    }
    else {
        _2126 = binary_op(PLUS, _2125, _start_point_4261);
    }
    DeRef(_2125);
    _2125 = NOVALUE;
    // SubProg get_value pc: 85 op: PROC (27)
    Ref(_target_4260);
    _2127 = _14seek(_target_4260, _2126);
    _2126 = NOVALUE;
    // SubProg get_value pc: 90 op: IF (20)
    if (_2127 == 0) {
        DeRef(_2127);
        _2127 = NOVALUE;
        goto L5; // [90] 114
    }
    else {
        if (!IS_ATOM_INT(_2127) && DBL_PTR(_2127)->dbl == 0.0){
            DeRef(_2127);
            _2127 = NOVALUE;
            goto L5; // [90] 114
        }
        DeRef(_2127);
        _2127 = NOVALUE;
    }
    DeRef(_2127);
    _2127 = NOVALUE;
    // SubProg get_value pc: 93 op: STARTLINE (58)

    /** get.e:495					error:crash("Initial seek() for get() failed!")*/
    // SubProg get_value pc: 95 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg get_value pc: 97 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_96_4285);
    _msg_inlined_crash_at_96_4285 = EPrintf(-9999999, _2128, _5);
    // SubProg get_value pc: 101 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg get_value pc: 103 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_96_4285);
    // SubProg get_value pc: 106 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg get_value pc: 108 op: ELSE (23)
    goto L6; // [108] 111
    // SubProg get_value pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 4258 op: 159
    // SubProg get_value pc: 111 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from get_value @ 96

// block var msg_inlined_crash_at_96_4285
    DeRefi(_msg_inlined_crash_at_96_4285);
    _msg_inlined_crash_at_96_4285 = NOVALUE;
    // SubProg get_value pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 4258 op: 159
    // SubProg get_value pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 4258 op: 159
    // SubProg get_value pc: 115 op: STARTLINE (58)

    /** get.e:498			string_next = 1*/
    // SubProg get_value pc: 117 op: ASSIGN_I (113)
    _20string_next_3817 = 1;
    // SubProg get_value pc: 120 op: STARTLINE (58)

    /** get.e:499			input_string = 0*/
    // SubProg get_value pc: 122 op: ASSIGN (18)
    DeRef(_20input_string_3816);
    _20input_string_3816 = 0;
    // SubProg get_value pc: 125 op: ELSE (23)
    goto L7; // [125] 139
    // SubProg get_value pc: 127 op: NOP1 (159)
L3: // addr: 128 pc: 127 sub: 4258 op: 159
    // SubProg get_value pc: 128 op: STARTLINE (58)

    /** get.e:501			input_string = target*/
    // SubProg get_value pc: 130 op: ASSIGN (18)
    Ref(_target_4260);
    DeRef(_20input_string_3816);
    _20input_string_3816 = _target_4260;
    // SubProg get_value pc: 133 op: STARTLINE (58)

    /** get.e:502			string_next = start_point*/
    // SubProg get_value pc: 135 op: ASSIGN_I (113)
    _20string_next_3817 = _start_point_4261;
    // SubProg get_value pc: 138 op: NOP1 (159)
L7: // addr: 139 pc: 138 sub: 4258 op: 159
    // SubProg get_value pc: 139 op: STARTLINE (58)

    /** get.e:504		if answer_type = GET_SHORT_ANSWER then*/
    // SubProg get_value pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_value pc: 143 op: EQUALS_IFW (104)
    if (_answer_type_4262 != _20GET_SHORT_ANSWER_4252)
    goto L8; // [143] 152
    // SubProg get_value pc: 147 op: STARTLINE (58)

    /** get.e:505			get_ch()*/
    // SubProg get_value pc: 149 op: PROC (27)
    _20get_ch();
    // SubProg get_value pc: 151 op: NOP1 (159)
L8: // addr: 152 pc: 151 sub: 4258 op: 159
    // SubProg get_value pc: 152 op: STARTLINE (58)

    /** get.e:507		return call_func(answer_type, {})*/
    // SubProg get_value pc: 154 op: CALL_FUNC (137)
    _0 = (object)_00[_answer_type_4262].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_2130);
    _2130 = _1;
    // SubProg get_value pc: 158 op: RETURNF (28)

// Exiting block BLOCK: get_value

// block var target_4260
    DeRef(_target_4260);

// block var start_point_4261

// block var answer_type_4262
    DeRef(_2117);
    _2117 = NOVALUE;
    return _2130;
    // SubProg get_value pc: 162 op: BADRETURNF (43)
    ;
}


object _20value(object _st_4298, object _start_point_4299, object _answer_4300)
{
    object _2132 = NOVALUE; // 4301 2132
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg value pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg value pc: 3 op: INTEGER_CHECK (96)
    // SubProg value pc: 5 op: INTEGER_CHECK (96)
    // SubProg value pc: 7 op: STARTLINE (58)

    /** get.e:684		return get_value(st, start_point, answer)*/
    // SubProg value pc: 9 op: PROC (27)
    RefDS(_st_4298);
    _2132 = _20get_value(_st_4298, 1, _answer_4300);
    // SubProg value pc: 15 op: RETURNF (28)

// Exiting block BLOCK: value

// block var st_4298
    DeRefDS(_st_4298);

// block var start_point_4299

// block var answer_4300
    return _2132;
    // SubProg value pc: 19 op: BADRETURNF (43)
    ;
}



// 0x1226F326
