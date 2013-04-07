// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _18get_ch()
{
    object _1962 = NOVALUE;
    object _1961 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:47		if sequence(input_string) then*/
    _1961 = IS_SEQUENCE(_18input_string_4112);
    if (_1961 == 0)
    {
        _1961 = NOVALUE;
        goto L1; // [8] 56
    }
    else{
        _1961 = NOVALUE;
    }

    /** get.e:48			if string_next <= length(input_string) then*/
    if (IS_SEQUENCE(_18input_string_4112)){
            _1962 = SEQ_PTR(_18input_string_4112)->length;
    }
    else {
        _1962 = 1;
    }
    if (_18string_next_4113 > _1962)
    goto L2; // [20] 47

    /** get.e:49				ch = input_string[string_next]*/
    _2 = (object)SEQ_PTR(_18input_string_4112);
    _18ch_4114 = (object)*(((s1_ptr)_2)->base + _18string_next_4113);
    if (!IS_ATOM_INT(_18ch_4114)){
        _18ch_4114 = (object)DBL_PTR(_18ch_4114)->dbl;
    }

    /** get.e:50				string_next += 1*/
    _18string_next_4113 = _18string_next_4113 + 1;
    goto L3; // [44] 81
L2: 

    /** get.e:52				ch = GET_EOF*/
    _18ch_4114 = -1;
    goto L3; // [53] 81
L1: 

    /** get.e:55			ch = getc(input_file)*/
    if (_18input_file_4111 != last_r_file_no) {
        last_r_file_ptr = which_file(_18input_file_4111, EF_READ);
        last_r_file_no = _18input_file_4111;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _18ch_4114 = getc((FILE*)xstdin);
        }
        else{
            _18ch_4114 = getc(last_r_file_ptr);
        }
    }
    else{
        _18ch_4114 = getc(last_r_file_ptr);
    }

    /** get.e:56			if ch = GET_EOF then*/
    if (_18ch_4114 != -1)
    goto L4; // [67] 80

    /** get.e:57				string_next += 1*/
    _18string_next_4113 = _18string_next_4113 + 1;
L4: 
L3: 

    /** get.e:60	end procedure*/
    return;
    ;
}


object _18escape_char(object _c_4141)
{
    object _i_4142 = NOVALUE;
    object _1974 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:79		i = find(c, ESCAPE_CHARS)*/
    _i_4142 = find_from(_c_4141, _18ESCAPE_CHARS_4135, 1);

    /** get.e:80		if i = 0 then*/
    if (_i_4142 != 0)
    goto L1; // [12] 25

    /** get.e:81			return GET_FAIL*/
    return 1;
    goto L2; // [22] 36
L1: 

    /** get.e:83			return ESCAPED_CHARS[i]*/
    _2 = (object)SEQ_PTR(_18ESCAPED_CHARS_4137);
    _1974 = (object)*(((s1_ptr)_2)->base + _i_4142);
    Ref(_1974);
    return _1974;
L2: 
    ;
}


object _18get_qchar()
{
    object _c_4150 = NOVALUE;
    object _1985 = NOVALUE;
    object _1984 = NOVALUE;
    object _1982 = NOVALUE;
    object _1979 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:92		get_ch()*/
    _18get_ch();

    /** get.e:93		c = ch*/
    _c_4150 = _18ch_4114;

    /** get.e:94		if ch = '\\' then*/
    if (_18ch_4114 != 92)
    goto L1; // [16] 54

    /** get.e:95			get_ch()*/
    _18get_ch();

    /** get.e:96			c = escape_char(ch)*/
    _c_4150 = _18escape_char(_18ch_4114);
    if (!IS_ATOM_INT(_c_4150)) {
        _1 = (object)(DBL_PTR(_c_4150)->dbl);
        DeRefDS(_c_4150);
        _c_4150 = _1;
    }

    /** get.e:97			if c = GET_FAIL then*/
    if (_c_4150 != 1)
    goto L2; // [36] 74

    /** get.e:98				return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1979 = MAKE_SEQ(_1);
    return _1979;
    goto L2; // [51] 74
L1: 

    /** get.e:100		elsif ch = '\'' then*/
    if (_18ch_4114 != 39)
    goto L3; // [58] 73

    /** get.e:101			return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1982 = MAKE_SEQ(_1);
    DeRef(_1979);
    _1979 = NOVALUE;
    return _1982;
L3: 
L2: 

    /** get.e:103		get_ch()*/
    _18get_ch();

    /** get.e:104		if ch != '\'' then*/
    if (_18ch_4114 == 39)
    goto L4; // [82] 99

    /** get.e:105			return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1984 = MAKE_SEQ(_1);
    DeRef(_1979);
    _1979 = NOVALUE;
    DeRef(_1982);
    _1982 = NOVALUE;
    return _1984;
    goto L5; // [96] 114
L4: 

    /** get.e:107			get_ch()*/
    _18get_ch();

    /** get.e:108			return {GET_SUCCESS, c}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _c_4150;
    _1985 = MAKE_SEQ(_1);
    DeRef(_1979);
    _1979 = NOVALUE;
    DeRef(_1984);
    _1984 = NOVALUE;
    DeRef(_1982);
    _1982 = NOVALUE;
    return _1985;
L5: 
    ;
}


object _18get_heredoc(object _terminator_4169)
{
    object _text_4170 = NOVALUE;
    object _ends_at_4171 = NOVALUE;
    object _2000 = NOVALUE;
    object _1999 = NOVALUE;
    object _1998 = NOVALUE;
    object _1997 = NOVALUE;
    object _1996 = NOVALUE;
    object _1993 = NOVALUE;
    object _1991 = NOVALUE;
    object _1990 = NOVALUE;
    object _1989 = NOVALUE;
    object _1988 = NOVALUE;
    object _1986 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:113		sequence text = ""*/
    RefDS(_5);
    DeRefi(_text_4170);
    _text_4170 = _5;

    /** get.e:114		integer ends_at = 1 - length( terminator )*/
    if (IS_SEQUENCE(_terminator_4169)){
            _1986 = SEQ_PTR(_terminator_4169)->length;
    }
    else {
        _1986 = 1;
    }
    _ends_at_4171 = 1 - _1986;
    _1986 = NOVALUE;

    /** get.e:115		while ends_at < 1 or not match( terminator, text, ends_at ) with entry do*/
    goto L1; // [21] 69
L2: 
    _1988 = (_ends_at_4171 < 1);
    if (_1988 != 0) {
        DeRef(_1989);
        _1989 = 1;
        goto L3; // [28] 44
    }
    _1990 = e_match_from(_terminator_4169, _text_4170, _ends_at_4171);
    _1991 = (_1990 == 0);
    _1990 = NOVALUE;
    _1989 = (_1991 != 0);
L3: 
    if (_1989 == 0)
    {
        _1989 = NOVALUE;
        goto L4; // [44] 92
    }
    else{
        _1989 = NOVALUE;
    }

    /** get.e:116			if ch = GET_EOF then*/
    if (_18ch_4114 != -1)
    goto L5; // [51] 66

    /** get.e:117				return { GET_FAIL, 0 }*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _1993 = MAKE_SEQ(_1);
    DeRefDSi(_terminator_4169);
    DeRefi(_text_4170);
    DeRef(_1988);
    _1988 = NOVALUE;
    DeRef(_1991);
    _1991 = NOVALUE;
    return _1993;
L5: 

    /** get.e:119		entry*/
L1: 

    /** get.e:120			get_ch()*/
    _18get_ch();

    /** get.e:121			text &= ch*/
    Append(&_text_4170, _text_4170, _18ch_4114);

    /** get.e:122			ends_at += 1*/
    _ends_at_4171 = _ends_at_4171 + 1;

    /** get.e:123		end while*/
    goto L2; // [89] 24
L4: 

    /** get.e:124		return { GET_SUCCESS, head( text, length( text ) - length( terminator ) ) }*/
    if (IS_SEQUENCE(_text_4170)){
            _1996 = SEQ_PTR(_text_4170)->length;
    }
    else {
        _1996 = 1;
    }
    if (IS_SEQUENCE(_terminator_4169)){
            _1997 = SEQ_PTR(_terminator_4169)->length;
    }
    else {
        _1997 = 1;
    }
    _1998 = _1996 - _1997;
    _1996 = NOVALUE;
    _1997 = NOVALUE;
    {
        int len = SEQ_PTR(_text_4170)->length;
        int size = (IS_ATOM_INT(_1998)) ? _1998 : (object)(DBL_PTR(_1998)->dbl);
        if (size <= 0){
            DeRef( _1999 );
            _1999 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_text_4170);
            DeRef(_1999);
            _1999 = _text_4170;
        }
        else{
            Head(SEQ_PTR(_text_4170),size+1,&_1999);
        }
    }
    _1998 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _1999;
    _2000 = MAKE_SEQ(_1);
    _1999 = NOVALUE;
    DeRefDSi(_terminator_4169);
    DeRefDSi(_text_4170);
    DeRef(_1988);
    _1988 = NOVALUE;
    DeRef(_1993);
    _1993 = NOVALUE;
    DeRef(_1991);
    _1991 = NOVALUE;
    return _2000;
    ;
}


object _18get_string()
{
    object _text_4191 = NOVALUE;
    object _2017 = NOVALUE;
    object _2013 = NOVALUE;
    object _2012 = NOVALUE;
    object _2009 = NOVALUE;
    object _2008 = NOVALUE;
    object _2007 = NOVALUE;
    object _2006 = NOVALUE;
    object _2004 = NOVALUE;
    object _2003 = NOVALUE;
    object _2001 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:132		text = ""*/
    RefDS(_5);
    DeRefi(_text_4191);
    _text_4191 = _5;

    /** get.e:133		while TRUE do*/
L1: 

    /** get.e:134			get_ch()*/
    _18get_ch();

    /** get.e:135			if ch = GET_EOF or ch = '\n' then*/
    _2001 = (_18ch_4114 == -1);
    if (_2001 != 0) {
        goto L2; // [25] 40
    }
    _2003 = (_18ch_4114 == 10);
    if (_2003 == 0)
    {
        DeRef(_2003);
        _2003 = NOVALUE;
        goto L3; // [36] 53
    }
    else{
        DeRef(_2003);
        _2003 = NOVALUE;
    }
L2: 

    /** get.e:136				return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2004 = MAKE_SEQ(_1);
    DeRefi(_text_4191);
    DeRef(_2001);
    _2001 = NOVALUE;
    return _2004;
    goto L4; // [50] 164
L3: 

    /** get.e:137			elsif ch = '"' then*/
    if (_18ch_4114 != 34)
    goto L5; // [57] 121

    /** get.e:138				get_ch()*/
    _18get_ch();

    /** get.e:139				if length( text ) = 0 and ch = '"' then*/
    if (IS_SEQUENCE(_text_4191)){
            _2006 = SEQ_PTR(_text_4191)->length;
    }
    else {
        _2006 = 1;
    }
    _2007 = (_2006 == 0);
    _2006 = NOVALUE;
    if (_2007 == 0) {
        goto L6; // [74] 108
    }
    _2009 = (_18ch_4114 == 34);
    if (_2009 == 0)
    {
        DeRef(_2009);
        _2009 = NOVALUE;
        goto L6; // [85] 108
    }
    else{
        DeRef(_2009);
        _2009 = NOVALUE;
    }

    /** get.e:140					if ch = '"' then*/
    if (_18ch_4114 != 34)
    goto L7; // [92] 107

    /** get.e:141						return get_heredoc( `"""` )*/
    RefDS(_2011);
    _2012 = _18get_heredoc(_2011);
    DeRefi(_text_4191);
    DeRef(_2007);
    _2007 = NOVALUE;
    DeRef(_2004);
    _2004 = NOVALUE;
    DeRef(_2001);
    _2001 = NOVALUE;
    return _2012;
L7: 
L6: 

    /** get.e:144				return {GET_SUCCESS, text}*/
    RefDS(_text_4191);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _text_4191;
    _2013 = MAKE_SEQ(_1);
    DeRefDSi(_text_4191);
    DeRef(_2007);
    _2007 = NOVALUE;
    DeRef(_2004);
    _2004 = NOVALUE;
    DeRef(_2001);
    _2001 = NOVALUE;
    DeRef(_2012);
    _2012 = NOVALUE;
    return _2013;
    goto L4; // [118] 164
L5: 

    /** get.e:145			elsif ch = '\\' then*/
    if (_18ch_4114 != 92)
    goto L8; // [125] 163

    /** get.e:146				get_ch()*/
    _18get_ch();

    /** get.e:147				ch = escape_char(ch)*/
    _0 = _18escape_char(_18ch_4114);
    _18ch_4114 = _0;
    if (!IS_ATOM_INT(_18ch_4114)) {
        _1 = (object)(DBL_PTR(_18ch_4114)->dbl);
        DeRefDS(_18ch_4114);
        _18ch_4114 = _1;
    }

    /** get.e:148				if ch = GET_FAIL then*/
    if (_18ch_4114 != 1)
    goto L9; // [147] 162

    /** get.e:149					return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2017 = MAKE_SEQ(_1);
    DeRefi(_text_4191);
    DeRef(_2007);
    _2007 = NOVALUE;
    DeRef(_2004);
    _2004 = NOVALUE;
    DeRef(_2001);
    _2001 = NOVALUE;
    DeRef(_2013);
    _2013 = NOVALUE;
    DeRef(_2012);
    _2012 = NOVALUE;
    return _2017;
L9: 
L8: 
L4: 

    /** get.e:152			text = text & ch*/
    Append(&_text_4191, _text_4191, _18ch_4114);

    /** get.e:153		end while*/
    goto L1; // [174] 13
    ;
}


object _18read_comment()
{
    object _2038 = NOVALUE;
    object _2037 = NOVALUE;
    object _2035 = NOVALUE;
    object _2033 = NOVALUE;
    object _2031 = NOVALUE;
    object _2030 = NOVALUE;
    object _2029 = NOVALUE;
    object _2027 = NOVALUE;
    object _2026 = NOVALUE;
    object _2025 = NOVALUE;
    object _2024 = NOVALUE;
    object _2023 = NOVALUE;
    object _2022 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:163		if atom(input_string) then*/
    _2022 = IS_ATOM(_18input_string_4112);
    if (_2022 == 0)
    {
        _2022 = NOVALUE;
        goto L1; // [8] 98
    }
    else{
        _2022 = NOVALUE;
    }

    /** get.e:164			while ch!='\n' and ch!='\r' and ch!=-1 do*/
L2: 
    _2023 = (_18ch_4114 != 10);
    if (_2023 == 0) {
        _2024 = 0;
        goto L3; // [22] 36
    }
    _2025 = (_18ch_4114 != 13);
    _2024 = (_2025 != 0);
L3: 
    if (_2024 == 0) {
        goto L4; // [36] 59
    }
    _2027 = (_18ch_4114 != -1);
    if (_2027 == 0)
    {
        DeRef(_2027);
        _2027 = NOVALUE;
        goto L4; // [47] 59
    }
    else{
        DeRef(_2027);
        _2027 = NOVALUE;
    }

    /** get.e:165				get_ch()*/
    _18get_ch();

    /** get.e:166			end while*/
    goto L2; // [56] 16
L4: 

    /** get.e:167			get_ch()*/
    _18get_ch();

    /** get.e:168			if ch=-1 then*/
    if (_18ch_4114 != -1)
    goto L5; // [67] 84

    /** get.e:169				return {GET_EOF, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _2029 = MAKE_SEQ(_1);
    DeRef(_2025);
    _2025 = NOVALUE;
    DeRef(_2023);
    _2023 = NOVALUE;
    return _2029;
    goto L6; // [81] 182
L5: 

    /** get.e:171				return {GET_IGNORE, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _2030 = MAKE_SEQ(_1);
    DeRef(_2029);
    _2029 = NOVALUE;
    DeRef(_2025);
    _2025 = NOVALUE;
    DeRef(_2023);
    _2023 = NOVALUE;
    return _2030;
    goto L6; // [95] 182
L1: 

    /** get.e:174			for i=string_next to length(input_string) do*/
    if (IS_SEQUENCE(_18input_string_4112)){
            _2031 = SEQ_PTR(_18input_string_4112)->length;
    }
    else {
        _2031 = 1;
    }
    {
        object _i_4241;
        _i_4241 = _18string_next_4113;
L7: 
        if (_i_4241 > _2031){
            goto L8; // [107] 171
        }

        /** get.e:175				ch=input_string[i]*/
        _2 = (object)SEQ_PTR(_18input_string_4112);
        _18ch_4114 = (object)*(((s1_ptr)_2)->base + _i_4241);
        if (!IS_ATOM_INT(_18ch_4114)){
            _18ch_4114 = (object)DBL_PTR(_18ch_4114)->dbl;
        }

        /** get.e:176				if ch='\n' or ch='\r' then*/
        _2033 = (_18ch_4114 == 10);
        if (_2033 != 0) {
            goto L9; // [132] 147
        }
        _2035 = (_18ch_4114 == 13);
        if (_2035 == 0)
        {
            DeRef(_2035);
            _2035 = NOVALUE;
            goto LA; // [143] 164
        }
        else{
            DeRef(_2035);
            _2035 = NOVALUE;
        }
L9: 

        /** get.e:177					string_next=i+1*/
        _18string_next_4113 = _i_4241 + 1;

        /** get.e:178					return {GET_IGNORE, 0}*/
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = 0;
        _2037 = MAKE_SEQ(_1);
        DeRef(_2029);
        _2029 = NOVALUE;
        DeRef(_2025);
        _2025 = NOVALUE;
        DeRef(_2033);
        _2033 = NOVALUE;
        DeRef(_2023);
        _2023 = NOVALUE;
        DeRef(_2030);
        _2030 = NOVALUE;
        return _2037;
LA: 

        /** get.e:180			end for*/
        _i_4241 = _i_4241 + 1;
        goto L7; // [166] 114
L8: 
        ;
    }

    /** get.e:181			return {GET_EOF, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _2038 = MAKE_SEQ(_1);
    DeRef(_2029);
    _2029 = NOVALUE;
    DeRef(_2025);
    _2025 = NOVALUE;
    DeRef(_2033);
    _2033 = NOVALUE;
    DeRef(_2023);
    _2023 = NOVALUE;
    DeRef(_2037);
    _2037 = NOVALUE;
    DeRef(_2030);
    _2030 = NOVALUE;
    return _2038;
L6: 
    ;
}


object _18get_number()
{
    object _sign_4253 = NOVALUE;
    object _e_sign_4254 = NOVALUE;
    object _ndigits_4255 = NOVALUE;
    object _hex_digit_4256 = NOVALUE;
    object _mantissa_4257 = NOVALUE;
    object _dec_4258 = NOVALUE;
    object _e_mag_4259 = NOVALUE;
    object _number_string_4260 = NOVALUE;
    object _2098 = NOVALUE;
    object _2096 = NOVALUE;
    object _2094 = NOVALUE;
    object _2093 = NOVALUE;
    object _2092 = NOVALUE;
    object _2091 = NOVALUE;
    object _2090 = NOVALUE;
    object _2089 = NOVALUE;
    object _2083 = NOVALUE;
    object _2081 = NOVALUE;
    object _2079 = NOVALUE;
    object _2074 = NOVALUE;
    object _2073 = NOVALUE;
    object _2071 = NOVALUE;
    object _2070 = NOVALUE;
    object _2069 = NOVALUE;
    object _2064 = NOVALUE;
    object _2063 = NOVALUE;
    object _2061 = NOVALUE;
    object _2060 = NOVALUE;
    object _2059 = NOVALUE;
    object _2058 = NOVALUE;
    object _2057 = NOVALUE;
    object _2056 = NOVALUE;
    object _2052 = NOVALUE;
    object _2048 = NOVALUE;
    object _2043 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:192		sequence number_string = { ch }*/
    _0 = _number_string_4260;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _18ch_4114;
    _number_string_4260 = MAKE_SEQ(_1);
    DeRefi(_0);

    /** get.e:194		sign = +1*/
    _sign_4253 = 1;

    /** get.e:195		mantissa = 0*/
    DeRef(_mantissa_4257);
    _mantissa_4257 = 0;

    /** get.e:196		ndigits = 0*/
    _ndigits_4255 = 0;

    /** get.e:199		if ch = '-' then*/
    if (_18ch_4114 != 45)
    goto L1; // [28] 70

    /** get.e:200			sign = -1*/
    _sign_4253 = -1;

    /** get.e:201			get_ch()*/
    _18get_ch();

    /** get.e:202			number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);

    /** get.e:203			if ch='-' then*/
    if (_18ch_4114 != 45)
    goto L2; // [53] 92

    /** get.e:204				return read_comment()*/
    _2043 = _18read_comment();
    DeRef(_dec_4258);
    DeRefDSi(_number_string_4260);
    return _2043;
    goto L2; // [67] 92
L1: 

    /** get.e:206		elsif ch = '+' then*/
    if (_18ch_4114 != 43)
    goto L3; // [74] 91

    /** get.e:207			get_ch()*/
    _18get_ch();

    /** get.e:208			number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);
L3: 
L2: 

    /** get.e:212		if ch = '#' then*/
    if (_18ch_4114 != 35)
    goto L4; // [96] 210

    /** get.e:214			get_ch()*/
    _18get_ch();

    /** get.e:215			number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);

    /** get.e:216			while TRUE do*/
L5: 

    /** get.e:217				hex_digit = find(ch, HEX_DIGITS)-1*/
    _2048 = find_from(_18ch_4114, _18HEX_DIGITS_4094, 1);
    _hex_digit_4256 = _2048 - 1;
    _2048 = NOVALUE;

    /** get.e:218				if hex_digit >= 0 then*/
    if (_hex_digit_4256 < 0)
    goto L6; // [134] 169

    /** get.e:219					ndigits += 1*/
    _ndigits_4255 = _ndigits_4255 + 1;

    /** get.e:220					mantissa = mantissa * 16 + hex_digit*/
    if (IS_ATOM_INT(_mantissa_4257)) {
        if (_mantissa_4257 == (short)_mantissa_4257){
            _2052 = _mantissa_4257 * 16;
        }
        else{
            _2052 = NewDouble(_mantissa_4257 * (eudouble)16);
        }
    }
    else {
        _2052 = NewDouble(DBL_PTR(_mantissa_4257)->dbl * (eudouble)16);
    }
    DeRef(_mantissa_4257);
    if (IS_ATOM_INT(_2052)) {
        _mantissa_4257 = _2052 + _hex_digit_4256;
        if ((object)((uintptr_t)_mantissa_4257 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_4257 = NewDouble((eudouble)_mantissa_4257);
        }
    }
    else {
        _mantissa_4257 = NewDouble(DBL_PTR(_2052)->dbl + (eudouble)_hex_digit_4256);
    }
    DeRef(_2052);
    _2052 = NOVALUE;

    /** get.e:221					get_ch()*/
    _18get_ch();

    /** get.e:222					number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);
    goto L5; // [166] 117
L6: 

    /** get.e:224					if ndigits > 0 then*/
    if (_ndigits_4255 <= 0)
    goto L7; // [171] 192

    /** get.e:225						return {GET_SUCCESS, sign * mantissa}*/
    if (IS_ATOM_INT(_mantissa_4257)) {
        if (_sign_4253 == (short)_sign_4253 && _mantissa_4257 <= INT15 && _mantissa_4257 >= -INT15){
            _2056 = _sign_4253 * _mantissa_4257;
        }
        else{
            _2056 = NewDouble(_sign_4253 * (eudouble)_mantissa_4257);
        }
    }
    else {
        _2056 = NewDouble((eudouble)_sign_4253 * DBL_PTR(_mantissa_4257)->dbl);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _2056;
    _2057 = MAKE_SEQ(_1);
    _2056 = NOVALUE;
    DeRef(_mantissa_4257);
    DeRef(_dec_4258);
    DeRefi(_number_string_4260);
    DeRef(_2043);
    _2043 = NOVALUE;
    return _2057;
    goto L5; // [189] 117
L7: 

    /** get.e:227						return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2058 = MAKE_SEQ(_1);
    DeRef(_mantissa_4257);
    DeRef(_dec_4258);
    DeRefi(_number_string_4260);
    DeRef(_2043);
    _2043 = NOVALUE;
    DeRef(_2057);
    _2057 = NOVALUE;
    return _2058;

    /** get.e:230			end while*/
    goto L5; // [206] 117
L4: 

    /** get.e:234		while ch >= '0' and ch <= '9' do*/
L8: 
    _2059 = (_18ch_4114 >= 48);
    if (_2059 == 0) {
        goto L9; // [221] 274
    }
    _2061 = (_18ch_4114 <= 57);
    if (_2061 == 0)
    {
        DeRef(_2061);
        _2061 = NOVALUE;
        goto L9; // [232] 274
    }
    else{
        DeRef(_2061);
        _2061 = NOVALUE;
    }

    /** get.e:235			ndigits += 1*/
    _ndigits_4255 = _ndigits_4255 + 1;

    /** get.e:236			mantissa = mantissa * 10 + (ch - '0')*/
    if (IS_ATOM_INT(_mantissa_4257)) {
        if (_mantissa_4257 == (short)_mantissa_4257){
            _2063 = _mantissa_4257 * 10;
        }
        else{
            _2063 = NewDouble(_mantissa_4257 * (eudouble)10);
        }
    }
    else {
        _2063 = NewDouble(DBL_PTR(_mantissa_4257)->dbl * (eudouble)10);
    }
    _2064 = _18ch_4114 - 48;
    if ((object)((uintptr_t)_2064 +(uintptr_t) HIGH_BITS) >= 0){
        _2064 = NewDouble((eudouble)_2064);
    }
    DeRef(_mantissa_4257);
    if (IS_ATOM_INT(_2063) && IS_ATOM_INT(_2064)) {
        _mantissa_4257 = _2063 + _2064;
        if ((object)((uintptr_t)_mantissa_4257 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_4257 = NewDouble((eudouble)_mantissa_4257);
        }
    }
    else {
        if (IS_ATOM_INT(_2063)) {
            _mantissa_4257 = NewDouble((eudouble)_2063 + DBL_PTR(_2064)->dbl);
        }
        else {
            if (IS_ATOM_INT(_2064)) {
                _mantissa_4257 = NewDouble(DBL_PTR(_2063)->dbl + (eudouble)_2064);
            }
            else
            _mantissa_4257 = NewDouble(DBL_PTR(_2063)->dbl + DBL_PTR(_2064)->dbl);
        }
    }
    DeRef(_2063);
    _2063 = NOVALUE;
    DeRef(_2064);
    _2064 = NOVALUE;

    /** get.e:237			get_ch()*/
    _18get_ch();

    /** get.e:238			number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);

    /** get.e:239		end while*/
    goto L8; // [271] 215
L9: 

    /** get.e:241		if ch = '.' then*/
    if (_18ch_4114 != 46)
    goto LA; // [278] 370

    /** get.e:243			get_ch()*/
    _18get_ch();

    /** get.e:244			number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);

    /** get.e:245			dec = 10*/
    DeRef(_dec_4258);
    _dec_4258 = 10;

    /** get.e:246			while ch >= '0' and ch <= '9' do*/
LB: 
    _2069 = (_18ch_4114 >= 48);
    if (_2069 == 0) {
        goto LC; // [310] 369
    }
    _2071 = (_18ch_4114 <= 57);
    if (_2071 == 0)
    {
        DeRef(_2071);
        _2071 = NOVALUE;
        goto LC; // [321] 369
    }
    else{
        DeRef(_2071);
        _2071 = NOVALUE;
    }

    /** get.e:247				ndigits += 1*/
    _ndigits_4255 = _ndigits_4255 + 1;

    /** get.e:248				mantissa += (ch - '0') / dec*/
    _2073 = _18ch_4114 - 48;
    if ((object)((uintptr_t)_2073 +(uintptr_t) HIGH_BITS) >= 0){
        _2073 = NewDouble((eudouble)_2073);
    }
    if (IS_ATOM_INT(_2073) && IS_ATOM_INT(_dec_4258)) {
        _2074 = (_2073 % _dec_4258) ? NewDouble((eudouble)_2073 / _dec_4258) : (_2073 / _dec_4258);
    }
    else {
        if (IS_ATOM_INT(_2073)) {
            _2074 = NewDouble((eudouble)_2073 / DBL_PTR(_dec_4258)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_4258)) {
                _2074 = NewDouble(DBL_PTR(_2073)->dbl / (eudouble)_dec_4258);
            }
            else
            _2074 = NewDouble(DBL_PTR(_2073)->dbl / DBL_PTR(_dec_4258)->dbl);
        }
    }
    DeRef(_2073);
    _2073 = NOVALUE;
    _0 = _mantissa_4257;
    if (IS_ATOM_INT(_mantissa_4257) && IS_ATOM_INT(_2074)) {
        _mantissa_4257 = _mantissa_4257 + _2074;
        if ((object)((uintptr_t)_mantissa_4257 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_4257 = NewDouble((eudouble)_mantissa_4257);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_4257)) {
            _mantissa_4257 = NewDouble((eudouble)_mantissa_4257 + DBL_PTR(_2074)->dbl);
        }
        else {
            if (IS_ATOM_INT(_2074)) {
                _mantissa_4257 = NewDouble(DBL_PTR(_mantissa_4257)->dbl + (eudouble)_2074);
            }
            else
            _mantissa_4257 = NewDouble(DBL_PTR(_mantissa_4257)->dbl + DBL_PTR(_2074)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_2074);
    _2074 = NOVALUE;

    /** get.e:249				dec *= 10*/
    _0 = _dec_4258;
    if (IS_ATOM_INT(_dec_4258)) {
        if (_dec_4258 == (short)_dec_4258){
            _dec_4258 = _dec_4258 * 10;
        }
        else{
            _dec_4258 = NewDouble(_dec_4258 * (eudouble)10);
        }
    }
    else {
        _dec_4258 = NewDouble(DBL_PTR(_dec_4258)->dbl * (eudouble)10);
    }
    DeRef(_0);

    /** get.e:250				get_ch()*/
    _18get_ch();

    /** get.e:251				number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);

    /** get.e:252			end while*/
    goto LB; // [366] 304
LC: 
LA: 

    /** get.e:255		if ndigits = 0 then*/
    if (_ndigits_4255 != 0)
    goto LD; // [372] 387

    /** get.e:256			return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2079 = MAKE_SEQ(_1);
    DeRef(_mantissa_4257);
    DeRef(_dec_4258);
    DeRefi(_number_string_4260);
    DeRef(_2059);
    _2059 = NOVALUE;
    DeRef(_2043);
    _2043 = NOVALUE;
    DeRef(_2057);
    _2057 = NOVALUE;
    DeRef(_2069);
    _2069 = NOVALUE;
    DeRef(_2058);
    _2058 = NOVALUE;
    return _2079;
LD: 

    /** get.e:259		mantissa = sign * mantissa*/
    _0 = _mantissa_4257;
    if (IS_ATOM_INT(_mantissa_4257)) {
        if (_sign_4253 == (short)_sign_4253 && _mantissa_4257 <= INT15 && _mantissa_4257 >= -INT15){
            _mantissa_4257 = _sign_4253 * _mantissa_4257;
        }
        else{
            _mantissa_4257 = NewDouble(_sign_4253 * (eudouble)_mantissa_4257);
        }
    }
    else {
        _mantissa_4257 = NewDouble((eudouble)_sign_4253 * DBL_PTR(_mantissa_4257)->dbl);
    }
    DeRef(_0);

    /** get.e:261		if ch = 'e' or ch = 'E' then*/
    _2081 = (_18ch_4114 == 101);
    if (_2081 != 0) {
        goto LE; // [401] 416
    }
    _2083 = (_18ch_4114 == 69);
    if (_2083 == 0)
    {
        DeRef(_2083);
        _2083 = NOVALUE;
        goto LF; // [412] 565
    }
    else{
        DeRef(_2083);
        _2083 = NOVALUE;
    }
LE: 

    /** get.e:264			get_ch()*/
    _18get_ch();

    /** get.e:265			number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);

    /** get.e:266			if ch = '-' then*/
    if (_18ch_4114 != 45)
    goto L10; // [432] 451

    /** get.e:267				get_ch()*/
    _18get_ch();

    /** get.e:268				number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);
    goto L11; // [448] 473
L10: 

    /** get.e:269			elsif ch = '+' then*/
    if (_18ch_4114 != 43)
    goto L12; // [455] 472

    /** get.e:270				get_ch()*/
    _18get_ch();

    /** get.e:271				number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);
L12: 
L11: 

    /** get.e:275			if ch >= '0' and ch <= '9' then*/
    _2089 = (_18ch_4114 >= 48);
    if (_2089 == 0) {
        goto L13; // [481] 546
    }
    _2091 = (_18ch_4114 <= 57);
    if (_2091 == 0)
    {
        DeRef(_2091);
        _2091 = NOVALUE;
        goto L13; // [492] 546
    }
    else{
        DeRef(_2091);
        _2091 = NOVALUE;
    }

    /** get.e:277				while ch >= '0' and ch <= '9' with entry do*/
    goto L14; // [497] 534
L15: 
    _2092 = (_18ch_4114 >= 48);
    if (_2092 == 0) {
        DeRef(_2093);
        _2093 = 0;
        goto L16; // [506] 520
    }
    _2094 = (_18ch_4114 <= 57);
    _2093 = (_2094 != 0);
L16: 
    if (_2093 == 0)
    {
        _2093 = NOVALUE;
        goto L17; // [520] 557
    }
    else{
        _2093 = NOVALUE;
    }

    /** get.e:278					number_string &= ch*/
    Append(&_number_string_4260, _number_string_4260, _18ch_4114);

    /** get.e:279				entry*/
L14: 

    /** get.e:280					get_ch()*/
    _18get_ch();

    /** get.e:281				end while*/
    goto L15; // [540] 500
    goto L17; // [543] 557
L13: 

    /** get.e:283				return {GET_FAIL, 0} -- no exponent*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2096 = MAKE_SEQ(_1);
    DeRef(_mantissa_4257);
    DeRef(_dec_4258);
    DeRefi(_number_string_4260);
    DeRef(_2081);
    _2081 = NOVALUE;
    DeRef(_2094);
    _2094 = NOVALUE;
    DeRef(_2059);
    _2059 = NOVALUE;
    DeRef(_2092);
    _2092 = NOVALUE;
    DeRef(_2089);
    _2089 = NOVALUE;
    DeRef(_2043);
    _2043 = NOVALUE;
    DeRef(_2057);
    _2057 = NOVALUE;
    DeRef(_2079);
    _2079 = NOVALUE;
    DeRef(_2069);
    _2069 = NOVALUE;
    DeRef(_2058);
    _2058 = NOVALUE;
    return _2096;
L17: 

    /** get.e:286			mantissa = scientific_to_atom( number_string )*/
    RefDS(_number_string_4260);
    _0 = _mantissa_4257;
    _mantissa_4257 = _20scientific_to_atom(_number_string_4260, 1);
    DeRef(_0);
LF: 

    /** get.e:289		return {GET_SUCCESS, mantissa}*/
    Ref(_mantissa_4257);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _mantissa_4257;
    _2098 = MAKE_SEQ(_1);
    DeRef(_mantissa_4257);
    DeRef(_dec_4258);
    DeRefi(_number_string_4260);
    DeRef(_2081);
    _2081 = NOVALUE;
    DeRef(_2094);
    _2094 = NOVALUE;
    DeRef(_2059);
    _2059 = NOVALUE;
    DeRef(_2092);
    _2092 = NOVALUE;
    DeRef(_2089);
    _2089 = NOVALUE;
    DeRef(_2043);
    _2043 = NOVALUE;
    DeRef(_2057);
    _2057 = NOVALUE;
    DeRef(_2079);
    _2079 = NOVALUE;
    DeRef(_2069);
    _2069 = NOVALUE;
    DeRef(_2096);
    _2096 = NOVALUE;
    DeRef(_2058);
    _2058 = NOVALUE;
    return _2098;
    ;
}


object _18Get()
{
    object _skip_blanks_1__tmp_at328_4387 = NOVALUE;
    object _skip_blanks_1__tmp_at177_4368 = NOVALUE;
    object _skip_blanks_1__tmp_at88_4359 = NOVALUE;
    object _s_4343 = NOVALUE;
    object _e_4344 = NOVALUE;
    object _e1_4345 = NOVALUE;
    object _2137 = NOVALUE;
    object _2136 = NOVALUE;
    object _2134 = NOVALUE;
    object _2131 = NOVALUE;
    object _2129 = NOVALUE;
    object _2127 = NOVALUE;
    object _2125 = NOVALUE;
    object _2122 = NOVALUE;
    object _2120 = NOVALUE;
    object _2116 = NOVALUE;
    object _2112 = NOVALUE;
    object _2109 = NOVALUE;
    object _2108 = NOVALUE;
    object _2106 = NOVALUE;
    object _2104 = NOVALUE;
    object _2102 = NOVALUE;
    object _2101 = NOVALUE;
    object _2099 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:300		while find(ch, white_space) do*/
L1: 
    _2099 = find_from(_18ch_4114, _18white_space_4130, 1);
    if (_2099 == 0)
    {
        _2099 = NOVALUE;
        goto L2; // [13] 25
    }
    else{
        _2099 = NOVALUE;
    }

    /** get.e:301			get_ch()*/
    _18get_ch();

    /** get.e:302		end while*/
    goto L1; // [22] 6
L2: 

    /** get.e:304		if ch = -1 then -- string is made of whitespace only*/
    if (_18ch_4114 != -1)
    goto L3; // [29] 44

    /** get.e:305			return {GET_EOF, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _2101 = MAKE_SEQ(_1);
    DeRef(_s_4343);
    DeRef(_e_4344);
    return _2101;
L3: 

    /** get.e:308		while 1 do*/
L4: 

    /** get.e:309			if find(ch, START_NUMERIC) then*/
    _2102 = find_from(_18ch_4114, _18START_NUMERIC_4097, 1);
    if (_2102 == 0)
    {
        _2102 = NOVALUE;
        goto L5; // [60] 157
    }
    else{
        _2102 = NOVALUE;
    }

    /** get.e:310				e = get_number()*/
    _0 = _e_4344;
    _e_4344 = _18get_number();
    DeRef(_0);

    /** get.e:311				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    _2 = (object)SEQ_PTR(_e_4344);
    _2104 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _2104, -2)){
        _2104 = NOVALUE;
        goto L6; // [76] 87
    }
    _2104 = NOVALUE;

    /** get.e:312					return e*/
    DeRef(_s_4343);
    DeRef(_2101);
    _2101 = NOVALUE;
    return _e_4344;
L6: 

    /** get.e:314				skip_blanks()*/

    /** get.e:67		while find(ch, white_space) do*/
L7: 
    _skip_blanks_1__tmp_at88_4359 = find_from(_18ch_4114, _18white_space_4130, 1);
    if (_skip_blanks_1__tmp_at88_4359 == 0)
    {
        goto L8; // [101] 118
    }
    else{
    }

    /** get.e:68			get_ch()*/
    _18get_ch();

    /** get.e:69		end while*/
    goto L7; // [110] 94

    /** get.e:70	end procedure*/
    goto L8; // [115] 118
L8: 

    /** get.e:315				if ch=-1 or ch='}' then -- '}' is expected only in the "{--\n}" case*/
    _2106 = (_18ch_4114 == -1);
    if (_2106 != 0) {
        goto L9; // [128] 143
    }
    _2108 = (_18ch_4114 == 125);
    if (_2108 == 0)
    {
        DeRef(_2108);
        _2108 = NOVALUE;
        goto L4; // [139] 49
    }
    else{
        DeRef(_2108);
        _2108 = NOVALUE;
    }
L9: 

    /** get.e:316					return {GET_NOTHING, 0} -- just a comment*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = 0;
    _2109 = MAKE_SEQ(_1);
    DeRef(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    return _2109;
    goto L4; // [154] 49
L5: 

    /** get.e:318			elsif ch = '{' then*/
    if (_18ch_4114 != 123)
    goto LA; // [161] 465

    /** get.e:320				s = {}*/
    RefDS(_5);
    DeRef(_s_4343);
    _s_4343 = _5;

    /** get.e:321				get_ch()*/
    _18get_ch();

    /** get.e:322				skip_blanks()*/

    /** get.e:67		while find(ch, white_space) do*/
LB: 
    _skip_blanks_1__tmp_at177_4368 = find_from(_18ch_4114, _18white_space_4130, 1);
    if (_skip_blanks_1__tmp_at177_4368 == 0)
    {
        goto LC; // [190] 207
    }
    else{
    }

    /** get.e:68			get_ch()*/
    _18get_ch();

    /** get.e:69		end while*/
    goto LB; // [199] 183

    /** get.e:70	end procedure*/
    goto LC; // [204] 207
LC: 

    /** get.e:323				if ch = '}' then -- empty sequence*/
    if (_18ch_4114 != 125)
    goto LD; // [213] 232

    /** get.e:324					get_ch()*/
    _18get_ch();

    /** get.e:325					return {GET_SUCCESS, s} -- empty sequence*/
    RefDS(_s_4343);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_4343;
    _2112 = MAKE_SEQ(_1);
    DeRefDS(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    return _2112;
LD: 

    /** get.e:328				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
LE: 

    /** get.e:329					while 1 do -- read zero or more comments and an element*/
LF: 

    /** get.e:330						e = Get() -- read next element, using standard function*/
    _0 = _e_4344;
    _e_4344 = _18Get();
    DeRef(_0);

    /** get.e:331						e1 = e[1]*/
    _2 = (object)SEQ_PTR(_e_4344);
    _e1_4345 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_4345))
    _e1_4345 = (object)DBL_PTR(_e1_4345)->dbl;

    /** get.e:332						if e1 = GET_SUCCESS then*/
    if (_e1_4345 != 0)
    goto L10; // [257] 278

    /** get.e:333							s = append(s, e[2])*/
    _2 = (object)SEQ_PTR(_e_4344);
    _2116 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_2116);
    Append(&_s_4343, _s_4343, _2116);
    _2116 = NOVALUE;

    /** get.e:334							exit  -- element read and added to result*/
    goto L11; // [273] 322
    goto LF; // [275] 242
L10: 

    /** get.e:335						elsif e1 != GET_IGNORE then*/
    if (_e1_4345 == -2)
    goto L12; // [280] 293

    /** get.e:336							return e*/
    DeRef(_s_4343);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    return _e_4344;
    goto LF; // [290] 242
L12: 

    /** get.e:338						elsif ch='}' then*/
    if (_18ch_4114 != 125)
    goto LF; // [297] 242

    /** get.e:339							get_ch()*/
    _18get_ch();

    /** get.e:340							return {GET_SUCCESS, s} -- empty sequence*/
    RefDS(_s_4343);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_4343;
    _2120 = MAKE_SEQ(_1);
    DeRefDS(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    return _2120;

    /** get.e:342					end while*/
    goto LF; // [319] 242
L11: 

    /** get.e:344					while 1 do -- now read zero or more post element comments*/
L13: 

    /** get.e:345						skip_blanks()*/

    /** get.e:67		while find(ch, white_space) do*/
L14: 
    _skip_blanks_1__tmp_at328_4387 = find_from(_18ch_4114, _18white_space_4130, 1);
    if (_skip_blanks_1__tmp_at328_4387 == 0)
    {
        goto L15; // [341] 358
    }
    else{
    }

    /** get.e:68			get_ch()*/
    _18get_ch();

    /** get.e:69		end while*/
    goto L14; // [350] 334

    /** get.e:70	end procedure*/
    goto L15; // [355] 358
L15: 

    /** get.e:346						if ch = '}' then*/
    if (_18ch_4114 != 125)
    goto L16; // [364] 385

    /** get.e:347							get_ch()*/
    _18get_ch();

    /** get.e:348						return {GET_SUCCESS, s}*/
    RefDS(_s_4343);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _s_4343;
    _2122 = MAKE_SEQ(_1);
    DeRefDS(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2120);
    _2120 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    return _2122;
    goto L13; // [382] 327
L16: 

    /** get.e:349						elsif ch!='-' then*/
    if (_18ch_4114 == 45)
    goto L17; // [389] 400

    /** get.e:350							exit*/
    goto L18; // [395] 434
    goto L13; // [397] 327
L17: 

    /** get.e:352							e = get_number() -- reads anything starting with '-'*/
    _0 = _e_4344;
    _e_4344 = _18get_number();
    DeRef(_0);

    /** get.e:353							if e[1] != GET_IGNORE then  -- it wasn't a comment, this is illegal*/
    _2 = (object)SEQ_PTR(_e_4344);
    _2125 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _2125, -2)){
        _2125 = NOVALUE;
        goto L13; // [413] 327
    }
    _2125 = NOVALUE;

    /** get.e:354								return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2127 = MAKE_SEQ(_1);
    DeRef(_s_4343);
    DeRefDS(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2120);
    _2120 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    DeRef(_2122);
    _2122 = NOVALUE;
    return _2127;

    /** get.e:358				end while*/
    goto L13; // [431] 327
L18: 

    /** get.e:359					if ch != ',' then*/
    if (_18ch_4114 == 44)
    goto L19; // [438] 453

    /** get.e:360					return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2129 = MAKE_SEQ(_1);
    DeRef(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2120);
    _2120 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    DeRef(_2127);
    _2127 = NOVALUE;
    DeRef(_2122);
    _2122 = NOVALUE;
    return _2129;
L19: 

    /** get.e:362				get_ch() -- skip comma*/
    _18get_ch();

    /** get.e:363				end while*/
    goto LE; // [459] 237
    goto L4; // [462] 49
LA: 

    /** get.e:365			elsif ch = '\"' then*/
    if (_18ch_4114 != 34)
    goto L1A; // [469] 485

    /** get.e:366				return get_string()*/
    _2131 = _18get_string();
    DeRef(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2129);
    _2129 = NOVALUE;
    DeRef(_2120);
    _2120 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    DeRef(_2127);
    _2127 = NOVALUE;
    DeRef(_2122);
    _2122 = NOVALUE;
    return _2131;
    goto L4; // [482] 49
L1A: 

    /** get.e:367			elsif ch = '`' then*/
    if (_18ch_4114 != 96)
    goto L1B; // [489] 506

    /** get.e:368				return get_heredoc("`")*/
    RefDS(_2133);
    _2134 = _18get_heredoc(_2133);
    DeRef(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2131);
    _2131 = NOVALUE;
    DeRef(_2129);
    _2129 = NOVALUE;
    DeRef(_2120);
    _2120 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    DeRef(_2127);
    _2127 = NOVALUE;
    DeRef(_2122);
    _2122 = NOVALUE;
    return _2134;
    goto L4; // [503] 49
L1B: 

    /** get.e:369			elsif ch = '\'' then*/
    if (_18ch_4114 != 39)
    goto L1C; // [510] 526

    /** get.e:370				return get_qchar()*/
    _2136 = _18get_qchar();
    DeRef(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2134);
    _2134 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2131);
    _2131 = NOVALUE;
    DeRef(_2129);
    _2129 = NOVALUE;
    DeRef(_2120);
    _2120 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    DeRef(_2127);
    _2127 = NOVALUE;
    DeRef(_2122);
    _2122 = NOVALUE;
    return _2136;
    goto L4; // [523] 49
L1C: 

    /** get.e:372				return {GET_FAIL, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _2137 = MAKE_SEQ(_1);
    DeRef(_s_4343);
    DeRef(_e_4344);
    DeRef(_2101);
    _2101 = NOVALUE;
    DeRef(_2134);
    _2134 = NOVALUE;
    DeRef(_2136);
    _2136 = NOVALUE;
    DeRef(_2112);
    _2112 = NOVALUE;
    DeRef(_2131);
    _2131 = NOVALUE;
    DeRef(_2129);
    _2129 = NOVALUE;
    DeRef(_2120);
    _2120 = NOVALUE;
    DeRef(_2106);
    _2106 = NOVALUE;
    DeRef(_2109);
    _2109 = NOVALUE;
    DeRef(_2127);
    _2127 = NOVALUE;
    DeRef(_2122);
    _2122 = NOVALUE;
    return _2137;

    /** get.e:376		end while*/
    goto L4; // [539] 49
    ;
}


object _18Get2()
{
    object _skip_blanks_1__tmp_at464_4488 = NOVALUE;
    object _skip_blanks_1__tmp_at233_4455 = NOVALUE;
    object _s_4417 = NOVALUE;
    object _e_4418 = NOVALUE;
    object _e1_4419 = NOVALUE;
    object _offset_4420 = NOVALUE;
    object _2237 = NOVALUE;
    object _2236 = NOVALUE;
    object _2235 = NOVALUE;
    object _2234 = NOVALUE;
    object _2233 = NOVALUE;
    object _2232 = NOVALUE;
    object _2231 = NOVALUE;
    object _2230 = NOVALUE;
    object _2229 = NOVALUE;
    object _2228 = NOVALUE;
    object _2227 = NOVALUE;
    object _2224 = NOVALUE;
    object _2223 = NOVALUE;
    object _2222 = NOVALUE;
    object _2221 = NOVALUE;
    object _2220 = NOVALUE;
    object _2219 = NOVALUE;
    object _2216 = NOVALUE;
    object _2215 = NOVALUE;
    object _2214 = NOVALUE;
    object _2213 = NOVALUE;
    object _2212 = NOVALUE;
    object _2211 = NOVALUE;
    object _2208 = NOVALUE;
    object _2207 = NOVALUE;
    object _2206 = NOVALUE;
    object _2205 = NOVALUE;
    object _2204 = NOVALUE;
    object _2202 = NOVALUE;
    object _2201 = NOVALUE;
    object _2200 = NOVALUE;
    object _2199 = NOVALUE;
    object _2198 = NOVALUE;
    object _2196 = NOVALUE;
    object _2193 = NOVALUE;
    object _2192 = NOVALUE;
    object _2191 = NOVALUE;
    object _2190 = NOVALUE;
    object _2189 = NOVALUE;
    object _2187 = NOVALUE;
    object _2186 = NOVALUE;
    object _2185 = NOVALUE;
    object _2184 = NOVALUE;
    object _2183 = NOVALUE;
    object _2181 = NOVALUE;
    object _2180 = NOVALUE;
    object _2179 = NOVALUE;
    object _2178 = NOVALUE;
    object _2177 = NOVALUE;
    object _2176 = NOVALUE;
    object _2173 = NOVALUE;
    object _2169 = NOVALUE;
    object _2168 = NOVALUE;
    object _2167 = NOVALUE;
    object _2166 = NOVALUE;
    object _2165 = NOVALUE;
    object _2162 = NOVALUE;
    object _2161 = NOVALUE;
    object _2160 = NOVALUE;
    object _2159 = NOVALUE;
    object _2158 = NOVALUE;
    object _2156 = NOVALUE;
    object _2155 = NOVALUE;
    object _2154 = NOVALUE;
    object _2153 = NOVALUE;
    object _2152 = NOVALUE;
    object _2151 = NOVALUE;
    object _2149 = NOVALUE;
    object _2147 = NOVALUE;
    object _2145 = NOVALUE;
    object _2144 = NOVALUE;
    object _2143 = NOVALUE;
    object _2142 = NOVALUE;
    object _2141 = NOVALUE;
    object _2139 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:392		offset = string_next-1*/
    _offset_4420 = _18string_next_4113 - 1;

    /** get.e:393		get_ch()*/
    _18get_ch();

    /** get.e:394		while find(ch, white_space) do*/
L1: 
    _2139 = find_from(_18ch_4114, _18white_space_4130, 1);
    if (_2139 == 0)
    {
        _2139 = NOVALUE;
        goto L2; // [25] 37
    }
    else{
        _2139 = NOVALUE;
    }

    /** get.e:395			get_ch()*/
    _18get_ch();

    /** get.e:396		end while*/
    goto L1; // [34] 18
L2: 

    /** get.e:398		if ch = -1 then -- string is made of whitespace only*/
    if (_18ch_4114 != -1)
    goto L3; // [41] 75

    /** get.e:399			return {GET_EOF, 0, string_next-1-offset ,string_next-1}*/
    _2141 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2141 +(uintptr_t) HIGH_BITS) >= 0){
        _2141 = NewDouble((eudouble)_2141);
    }
    if (IS_ATOM_INT(_2141)) {
        _2142 = _2141 - _offset_4420;
        if ((object)((uintptr_t)_2142 +(uintptr_t) HIGH_BITS) >= 0){
            _2142 = NewDouble((eudouble)_2142);
        }
    }
    else {
        _2142 = NewDouble(DBL_PTR(_2141)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2141);
    _2141 = NOVALUE;
    _2143 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2143 +(uintptr_t) HIGH_BITS) >= 0){
        _2143 = NewDouble((eudouble)_2143);
    }
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2142;
    ((intptr_t*)_2)[4] = _2143;
    _2144 = MAKE_SEQ(_1);
    _2143 = NOVALUE;
    _2142 = NOVALUE;
    DeRef(_s_4417);
    DeRef(_e_4418);
    return _2144;
L3: 

    /** get.e:402		leading_whitespace = string_next-2-offset -- index of the last whitespace: string_next points past the first non whitespace*/
    _2145 = _18string_next_4113 - 2;
    if ((object)((uintptr_t)_2145 +(uintptr_t) HIGH_BITS) >= 0){
        _2145 = NewDouble((eudouble)_2145);
    }
    if (IS_ATOM_INT(_2145)) {
        _18leading_whitespace_4414 = _2145 - _offset_4420;
    }
    else {
        _18leading_whitespace_4414 = NewDouble(DBL_PTR(_2145)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2145);
    _2145 = NOVALUE;
    if (!IS_ATOM_INT(_18leading_whitespace_4414)) {
        _1 = (object)(DBL_PTR(_18leading_whitespace_4414)->dbl);
        DeRefDS(_18leading_whitespace_4414);
        _18leading_whitespace_4414 = _1;
    }

    /** get.e:404		while 1 do*/
L4: 

    /** get.e:405			if find(ch, START_NUMERIC) then*/
    _2147 = find_from(_18ch_4114, _18START_NUMERIC_4097, 1);
    if (_2147 == 0)
    {
        _2147 = NOVALUE;
        goto L5; // [105] 213
    }
    else{
        _2147 = NOVALUE;
    }

    /** get.e:406				e = get_number()*/
    _0 = _e_4418;
    _e_4418 = _18get_number();
    DeRef(_0);

    /** get.e:407				if e[1] != GET_IGNORE then -- either a number or something illegal was read, so exit: the other goto*/
    _2 = (object)SEQ_PTR(_e_4418);
    _2149 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _2149, -2)){
        _2149 = NOVALUE;
        goto L6; // [121] 162
    }
    _2149 = NOVALUE;

    /** get.e:408					return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2151 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2151 +(uintptr_t) HIGH_BITS) >= 0){
        _2151 = NewDouble((eudouble)_2151);
    }
    if (IS_ATOM_INT(_2151)) {
        _2152 = _2151 - _offset_4420;
        if ((object)((uintptr_t)_2152 +(uintptr_t) HIGH_BITS) >= 0){
            _2152 = NewDouble((eudouble)_2152);
        }
    }
    else {
        _2152 = NewDouble(DBL_PTR(_2151)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2151);
    _2151 = NOVALUE;
    _2153 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2152)) {
        _2154 = _2152 - _2153;
        if ((object)((uintptr_t)_2154 +(uintptr_t) HIGH_BITS) >= 0){
            _2154 = NewDouble((eudouble)_2154);
        }
    }
    else {
        _2154 = NewDouble(DBL_PTR(_2152)->dbl - (eudouble)_2153);
    }
    DeRef(_2152);
    _2152 = NOVALUE;
    _2153 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2154;
    ((intptr_t *)_2)[2] = _18leading_whitespace_4414;
    _2155 = MAKE_SEQ(_1);
    _2154 = NOVALUE;
    Concat((object_ptr)&_2156, _e_4418, _2155);
    DeRefDS(_2155);
    _2155 = NOVALUE;
    DeRef(_s_4417);
    DeRefDS(_e_4418);
    DeRef(_2144);
    _2144 = NOVALUE;
    return _2156;
L6: 

    /** get.e:410				get_ch()*/
    _18get_ch();

    /** get.e:411				if ch=-1 then*/
    if (_18ch_4114 != -1)
    goto L4; // [170] 94

    /** get.e:412					return {GET_NOTHING, 0, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    _2158 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2158 +(uintptr_t) HIGH_BITS) >= 0){
        _2158 = NewDouble((eudouble)_2158);
    }
    if (IS_ATOM_INT(_2158)) {
        _2159 = _2158 - _offset_4420;
        if ((object)((uintptr_t)_2159 +(uintptr_t) HIGH_BITS) >= 0){
            _2159 = NewDouble((eudouble)_2159);
        }
    }
    else {
        _2159 = NewDouble(DBL_PTR(_2158)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2158);
    _2158 = NOVALUE;
    _2160 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2159)) {
        _2161 = _2159 - _2160;
        if ((object)((uintptr_t)_2161 +(uintptr_t) HIGH_BITS) >= 0){
            _2161 = NewDouble((eudouble)_2161);
        }
    }
    else {
        _2161 = NewDouble(DBL_PTR(_2159)->dbl - (eudouble)_2160);
    }
    DeRef(_2159);
    _2159 = NOVALUE;
    _2160 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = -2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2161;
    ((intptr_t*)_2)[4] = _18leading_whitespace_4414;
    _2162 = MAKE_SEQ(_1);
    _2161 = NOVALUE;
    DeRef(_s_4417);
    DeRef(_e_4418);
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    return _2162;
    goto L4; // [210] 94
L5: 

    /** get.e:415			elsif ch = '{' then*/
    if (_18ch_4114 != 123)
    goto L7; // [217] 676

    /** get.e:417				s = {}*/
    RefDS(_5);
    DeRef(_s_4417);
    _s_4417 = _5;

    /** get.e:418				get_ch()*/
    _18get_ch();

    /** get.e:419				skip_blanks()*/

    /** get.e:67		while find(ch, white_space) do*/
L8: 
    _skip_blanks_1__tmp_at233_4455 = find_from(_18ch_4114, _18white_space_4130, 1);
    if (_skip_blanks_1__tmp_at233_4455 == 0)
    {
        goto L9; // [246] 263
    }
    else{
    }

    /** get.e:68			get_ch()*/
    _18get_ch();

    /** get.e:69		end while*/
    goto L8; // [255] 239

    /** get.e:70	end procedure*/
    goto L9; // [260] 263
L9: 

    /** get.e:420				if ch = '}' then -- empty sequence*/
    if (_18ch_4114 != 125)
    goto LA; // [269] 313

    /** get.e:421					get_ch()*/
    _18get_ch();

    /** get.e:422					return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace} -- empty sequence*/
    _2165 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2165 +(uintptr_t) HIGH_BITS) >= 0){
        _2165 = NewDouble((eudouble)_2165);
    }
    if (IS_ATOM_INT(_2165)) {
        _2166 = _2165 - _offset_4420;
        if ((object)((uintptr_t)_2166 +(uintptr_t) HIGH_BITS) >= 0){
            _2166 = NewDouble((eudouble)_2166);
        }
    }
    else {
        _2166 = NewDouble(DBL_PTR(_2165)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2165);
    _2165 = NOVALUE;
    _2167 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2166)) {
        _2168 = _2166 - _2167;
        if ((object)((uintptr_t)_2168 +(uintptr_t) HIGH_BITS) >= 0){
            _2168 = NewDouble((eudouble)_2168);
        }
    }
    else {
        _2168 = NewDouble(DBL_PTR(_2166)->dbl - (eudouble)_2167);
    }
    DeRef(_2166);
    _2166 = NOVALUE;
    _2167 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_4417);
    ((intptr_t*)_2)[2] = _s_4417;
    ((intptr_t*)_2)[3] = _2168;
    ((intptr_t*)_2)[4] = _18leading_whitespace_4414;
    _2169 = MAKE_SEQ(_1);
    _2168 = NOVALUE;
    DeRefDS(_s_4417);
    DeRef(_e_4418);
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    return _2169;
LA: 

    /** get.e:425				while TRUE do -- read: comment(s), element, comment(s), comma and so on till it terminates or errors out*/
LB: 

    /** get.e:426					while 1 do -- read zero or more comments and an element*/
LC: 

    /** get.e:427						e = Get() -- read next element, using standard function*/
    _0 = _e_4418;
    _e_4418 = _18Get();
    DeRef(_0);

    /** get.e:428						e1 = e[1]*/
    _2 = (object)SEQ_PTR(_e_4418);
    _e1_4419 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_e1_4419))
    _e1_4419 = (object)DBL_PTR(_e1_4419)->dbl;

    /** get.e:429						if e1 = GET_SUCCESS then*/
    if (_e1_4419 != 0)
    goto LD; // [338] 359

    /** get.e:430							s = append(s, e[2])*/
    _2 = (object)SEQ_PTR(_e_4418);
    _2173 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_2173);
    Append(&_s_4417, _s_4417, _2173);
    _2173 = NOVALUE;

    /** get.e:431							exit  -- element read and added to result*/
    goto LE; // [354] 458
    goto LC; // [356] 323
LD: 

    /** get.e:432						elsif e1 != GET_IGNORE then*/
    if (_e1_4419 == -2)
    goto LF; // [361] 404

    /** get.e:433							return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2176 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2176 +(uintptr_t) HIGH_BITS) >= 0){
        _2176 = NewDouble((eudouble)_2176);
    }
    if (IS_ATOM_INT(_2176)) {
        _2177 = _2176 - _offset_4420;
        if ((object)((uintptr_t)_2177 +(uintptr_t) HIGH_BITS) >= 0){
            _2177 = NewDouble((eudouble)_2177);
        }
    }
    else {
        _2177 = NewDouble(DBL_PTR(_2176)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2176);
    _2176 = NOVALUE;
    _2178 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2177)) {
        _2179 = _2177 - _2178;
        if ((object)((uintptr_t)_2179 +(uintptr_t) HIGH_BITS) >= 0){
            _2179 = NewDouble((eudouble)_2179);
        }
    }
    else {
        _2179 = NewDouble(DBL_PTR(_2177)->dbl - (eudouble)_2178);
    }
    DeRef(_2177);
    _2177 = NOVALUE;
    _2178 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2179;
    ((intptr_t *)_2)[2] = _18leading_whitespace_4414;
    _2180 = MAKE_SEQ(_1);
    _2179 = NOVALUE;
    Concat((object_ptr)&_2181, _e_4418, _2180);
    DeRefDS(_2180);
    _2180 = NOVALUE;
    DeRef(_s_4417);
    DeRefDS(_e_4418);
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    return _2181;
    goto LC; // [401] 323
LF: 

    /** get.e:435						elsif ch='}' then*/
    if (_18ch_4114 != 125)
    goto LC; // [408] 323

    /** get.e:436							get_ch()*/
    _18get_ch();

    /** get.e:437							return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1),leading_whitespace} -- empty sequence*/
    _2183 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2183 +(uintptr_t) HIGH_BITS) >= 0){
        _2183 = NewDouble((eudouble)_2183);
    }
    if (IS_ATOM_INT(_2183)) {
        _2184 = _2183 - _offset_4420;
        if ((object)((uintptr_t)_2184 +(uintptr_t) HIGH_BITS) >= 0){
            _2184 = NewDouble((eudouble)_2184);
        }
    }
    else {
        _2184 = NewDouble(DBL_PTR(_2183)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2183);
    _2183 = NOVALUE;
    _2185 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2184)) {
        _2186 = _2184 - _2185;
        if ((object)((uintptr_t)_2186 +(uintptr_t) HIGH_BITS) >= 0){
            _2186 = NewDouble((eudouble)_2186);
        }
    }
    else {
        _2186 = NewDouble(DBL_PTR(_2184)->dbl - (eudouble)_2185);
    }
    DeRef(_2184);
    _2184 = NOVALUE;
    _2185 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_4417);
    ((intptr_t*)_2)[2] = _s_4417;
    ((intptr_t*)_2)[3] = _2186;
    ((intptr_t*)_2)[4] = _18leading_whitespace_4414;
    _2187 = MAKE_SEQ(_1);
    _2186 = NOVALUE;
    DeRefDS(_s_4417);
    DeRef(_e_4418);
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    return _2187;

    /** get.e:439					end while*/
    goto LC; // [455] 323
LE: 

    /** get.e:441					while 1 do -- now read zero or more post element comments*/
L10: 

    /** get.e:442						skip_blanks()*/

    /** get.e:67		while find(ch, white_space) do*/
L11: 
    _skip_blanks_1__tmp_at464_4488 = find_from(_18ch_4114, _18white_space_4130, 1);
    if (_skip_blanks_1__tmp_at464_4488 == 0)
    {
        goto L12; // [477] 494
    }
    else{
    }

    /** get.e:68			get_ch()*/
    _18get_ch();

    /** get.e:69		end while*/
    goto L11; // [486] 470

    /** get.e:70	end procedure*/
    goto L12; // [491] 494
L12: 

    /** get.e:443						if ch = '}' then*/
    if (_18ch_4114 != 125)
    goto L13; // [500] 546

    /** get.e:444							get_ch()*/
    _18get_ch();

    /** get.e:445						return {GET_SUCCESS, s, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2189 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2189 +(uintptr_t) HIGH_BITS) >= 0){
        _2189 = NewDouble((eudouble)_2189);
    }
    if (IS_ATOM_INT(_2189)) {
        _2190 = _2189 - _offset_4420;
        if ((object)((uintptr_t)_2190 +(uintptr_t) HIGH_BITS) >= 0){
            _2190 = NewDouble((eudouble)_2190);
        }
    }
    else {
        _2190 = NewDouble(DBL_PTR(_2189)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2189);
    _2189 = NOVALUE;
    _2191 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2190)) {
        _2192 = _2190 - _2191;
        if ((object)((uintptr_t)_2192 +(uintptr_t) HIGH_BITS) >= 0){
            _2192 = NewDouble((eudouble)_2192);
        }
    }
    else {
        _2192 = NewDouble(DBL_PTR(_2190)->dbl - (eudouble)_2191);
    }
    DeRef(_2190);
    _2190 = NOVALUE;
    _2191 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_s_4417);
    ((intptr_t*)_2)[2] = _s_4417;
    ((intptr_t*)_2)[3] = _2192;
    ((intptr_t*)_2)[4] = _18leading_whitespace_4414;
    _2193 = MAKE_SEQ(_1);
    _2192 = NOVALUE;
    DeRefDS(_s_4417);
    DeRef(_e_4418);
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    DeRef(_2187);
    _2187 = NOVALUE;
    return _2193;
    goto L10; // [543] 463
L13: 

    /** get.e:446						elsif ch!='-' then*/
    if (_18ch_4114 == 45)
    goto L14; // [550] 561

    /** get.e:447							exit*/
    goto L15; // [556] 620
    goto L10; // [558] 463
L14: 

    /** get.e:449							e = get_number() -- reads anything starting with '-'*/
    _0 = _e_4418;
    _e_4418 = _18get_number();
    DeRef(_0);

    /** get.e:450							if e[1] != GET_IGNORE then  -- it was not a comment, this is illegal*/
    _2 = (object)SEQ_PTR(_e_4418);
    _2196 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _2196, -2)){
        _2196 = NOVALUE;
        goto L10; // [574] 463
    }
    _2196 = NOVALUE;

    /** get.e:451								return {GET_FAIL, 0, string_next-1-offset-(ch!=-1),leading_whitespace}*/
    _2198 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2198 +(uintptr_t) HIGH_BITS) >= 0){
        _2198 = NewDouble((eudouble)_2198);
    }
    if (IS_ATOM_INT(_2198)) {
        _2199 = _2198 - _offset_4420;
        if ((object)((uintptr_t)_2199 +(uintptr_t) HIGH_BITS) >= 0){
            _2199 = NewDouble((eudouble)_2199);
        }
    }
    else {
        _2199 = NewDouble(DBL_PTR(_2198)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2198);
    _2198 = NOVALUE;
    _2200 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2199)) {
        _2201 = _2199 - _2200;
        if ((object)((uintptr_t)_2201 +(uintptr_t) HIGH_BITS) >= 0){
            _2201 = NewDouble((eudouble)_2201);
        }
    }
    else {
        _2201 = NewDouble(DBL_PTR(_2199)->dbl - (eudouble)_2200);
    }
    DeRef(_2199);
    _2199 = NOVALUE;
    _2200 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2201;
    ((intptr_t*)_2)[4] = _18leading_whitespace_4414;
    _2202 = MAKE_SEQ(_1);
    _2201 = NOVALUE;
    DeRef(_s_4417);
    DeRefDS(_e_4418);
    DeRef(_2193);
    _2193 = NOVALUE;
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    DeRef(_2187);
    _2187 = NOVALUE;
    return _2202;

    /** get.e:455				end while*/
    goto L10; // [617] 463
L15: 

    /** get.e:456					if ch != ',' then*/
    if (_18ch_4114 == 44)
    goto L16; // [624] 664

    /** get.e:457					return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2204 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2204 +(uintptr_t) HIGH_BITS) >= 0){
        _2204 = NewDouble((eudouble)_2204);
    }
    if (IS_ATOM_INT(_2204)) {
        _2205 = _2204 - _offset_4420;
        if ((object)((uintptr_t)_2205 +(uintptr_t) HIGH_BITS) >= 0){
            _2205 = NewDouble((eudouble)_2205);
        }
    }
    else {
        _2205 = NewDouble(DBL_PTR(_2204)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2204);
    _2204 = NOVALUE;
    _2206 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2205)) {
        _2207 = _2205 - _2206;
        if ((object)((uintptr_t)_2207 +(uintptr_t) HIGH_BITS) >= 0){
            _2207 = NewDouble((eudouble)_2207);
        }
    }
    else {
        _2207 = NewDouble(DBL_PTR(_2205)->dbl - (eudouble)_2206);
    }
    DeRef(_2205);
    _2205 = NOVALUE;
    _2206 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2207;
    ((intptr_t*)_2)[4] = _18leading_whitespace_4414;
    _2208 = MAKE_SEQ(_1);
    _2207 = NOVALUE;
    DeRef(_s_4417);
    DeRef(_e_4418);
    DeRef(_2193);
    _2193 = NOVALUE;
    DeRef(_2202);
    _2202 = NOVALUE;
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    DeRef(_2187);
    _2187 = NOVALUE;
    return _2208;
L16: 

    /** get.e:459				get_ch() -- skip comma*/
    _18get_ch();

    /** get.e:460				end while*/
    goto LB; // [670] 318
    goto L4; // [673] 94
L7: 

    /** get.e:462			elsif ch = '\"' then*/
    if (_18ch_4114 != 34)
    goto L17; // [680] 730

    /** get.e:463				e = get_string()*/
    _0 = _e_4418;
    _e_4418 = _18get_string();
    DeRef(_0);

    /** get.e:464				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2211 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2211 +(uintptr_t) HIGH_BITS) >= 0){
        _2211 = NewDouble((eudouble)_2211);
    }
    if (IS_ATOM_INT(_2211)) {
        _2212 = _2211 - _offset_4420;
        if ((object)((uintptr_t)_2212 +(uintptr_t) HIGH_BITS) >= 0){
            _2212 = NewDouble((eudouble)_2212);
        }
    }
    else {
        _2212 = NewDouble(DBL_PTR(_2211)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2211);
    _2211 = NOVALUE;
    _2213 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2212)) {
        _2214 = _2212 - _2213;
        if ((object)((uintptr_t)_2214 +(uintptr_t) HIGH_BITS) >= 0){
            _2214 = NewDouble((eudouble)_2214);
        }
    }
    else {
        _2214 = NewDouble(DBL_PTR(_2212)->dbl - (eudouble)_2213);
    }
    DeRef(_2212);
    _2212 = NOVALUE;
    _2213 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2214;
    ((intptr_t *)_2)[2] = _18leading_whitespace_4414;
    _2215 = MAKE_SEQ(_1);
    _2214 = NOVALUE;
    Concat((object_ptr)&_2216, _e_4418, _2215);
    DeRefDS(_2215);
    _2215 = NOVALUE;
    DeRef(_s_4417);
    DeRefDS(_e_4418);
    DeRef(_2193);
    _2193 = NOVALUE;
    DeRef(_2202);
    _2202 = NOVALUE;
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2208);
    _2208 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    DeRef(_2187);
    _2187 = NOVALUE;
    return _2216;
    goto L4; // [727] 94
L17: 

    /** get.e:465			elsif ch = '`' then*/
    if (_18ch_4114 != 96)
    goto L18; // [734] 785

    /** get.e:466				e = get_heredoc("`")*/
    RefDS(_2133);
    _0 = _e_4418;
    _e_4418 = _18get_heredoc(_2133);
    DeRef(_0);

    /** get.e:467				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2219 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2219 +(uintptr_t) HIGH_BITS) >= 0){
        _2219 = NewDouble((eudouble)_2219);
    }
    if (IS_ATOM_INT(_2219)) {
        _2220 = _2219 - _offset_4420;
        if ((object)((uintptr_t)_2220 +(uintptr_t) HIGH_BITS) >= 0){
            _2220 = NewDouble((eudouble)_2220);
        }
    }
    else {
        _2220 = NewDouble(DBL_PTR(_2219)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2219);
    _2219 = NOVALUE;
    _2221 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2220)) {
        _2222 = _2220 - _2221;
        if ((object)((uintptr_t)_2222 +(uintptr_t) HIGH_BITS) >= 0){
            _2222 = NewDouble((eudouble)_2222);
        }
    }
    else {
        _2222 = NewDouble(DBL_PTR(_2220)->dbl - (eudouble)_2221);
    }
    DeRef(_2220);
    _2220 = NOVALUE;
    _2221 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2222;
    ((intptr_t *)_2)[2] = _18leading_whitespace_4414;
    _2223 = MAKE_SEQ(_1);
    _2222 = NOVALUE;
    Concat((object_ptr)&_2224, _e_4418, _2223);
    DeRefDS(_2223);
    _2223 = NOVALUE;
    DeRef(_s_4417);
    DeRefDS(_e_4418);
    DeRef(_2193);
    _2193 = NOVALUE;
    DeRef(_2216);
    _2216 = NOVALUE;
    DeRef(_2202);
    _2202 = NOVALUE;
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2208);
    _2208 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    DeRef(_2187);
    _2187 = NOVALUE;
    return _2224;
    goto L4; // [782] 94
L18: 

    /** get.e:468			elsif ch = '\'' then*/
    if (_18ch_4114 != 39)
    goto L19; // [789] 839

    /** get.e:469				e = get_qchar()*/
    _0 = _e_4418;
    _e_4418 = _18get_qchar();
    DeRef(_0);

    /** get.e:470				return e & {string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2227 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2227 +(uintptr_t) HIGH_BITS) >= 0){
        _2227 = NewDouble((eudouble)_2227);
    }
    if (IS_ATOM_INT(_2227)) {
        _2228 = _2227 - _offset_4420;
        if ((object)((uintptr_t)_2228 +(uintptr_t) HIGH_BITS) >= 0){
            _2228 = NewDouble((eudouble)_2228);
        }
    }
    else {
        _2228 = NewDouble(DBL_PTR(_2227)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2227);
    _2227 = NOVALUE;
    _2229 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2228)) {
        _2230 = _2228 - _2229;
        if ((object)((uintptr_t)_2230 +(uintptr_t) HIGH_BITS) >= 0){
            _2230 = NewDouble((eudouble)_2230);
        }
    }
    else {
        _2230 = NewDouble(DBL_PTR(_2228)->dbl - (eudouble)_2229);
    }
    DeRef(_2228);
    _2228 = NOVALUE;
    _2229 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2230;
    ((intptr_t *)_2)[2] = _18leading_whitespace_4414;
    _2231 = MAKE_SEQ(_1);
    _2230 = NOVALUE;
    Concat((object_ptr)&_2232, _e_4418, _2231);
    DeRefDS(_2231);
    _2231 = NOVALUE;
    DeRef(_s_4417);
    DeRefDS(_e_4418);
    DeRef(_2193);
    _2193 = NOVALUE;
    DeRef(_2216);
    _2216 = NOVALUE;
    DeRef(_2224);
    _2224 = NOVALUE;
    DeRef(_2202);
    _2202 = NOVALUE;
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2208);
    _2208 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    DeRef(_2187);
    _2187 = NOVALUE;
    return _2232;
    goto L4; // [836] 94
L19: 

    /** get.e:472				return {GET_FAIL, 0, string_next-1-offset-(ch!=-1), leading_whitespace}*/
    _2233 = _18string_next_4113 - 1;
    if ((object)((uintptr_t)_2233 +(uintptr_t) HIGH_BITS) >= 0){
        _2233 = NewDouble((eudouble)_2233);
    }
    if (IS_ATOM_INT(_2233)) {
        _2234 = _2233 - _offset_4420;
        if ((object)((uintptr_t)_2234 +(uintptr_t) HIGH_BITS) >= 0){
            _2234 = NewDouble((eudouble)_2234);
        }
    }
    else {
        _2234 = NewDouble(DBL_PTR(_2233)->dbl - (eudouble)_offset_4420);
    }
    DeRef(_2233);
    _2233 = NOVALUE;
    _2235 = (_18ch_4114 != -1);
    if (IS_ATOM_INT(_2234)) {
        _2236 = _2234 - _2235;
        if ((object)((uintptr_t)_2236 +(uintptr_t) HIGH_BITS) >= 0){
            _2236 = NewDouble((eudouble)_2236);
        }
    }
    else {
        _2236 = NewDouble(DBL_PTR(_2234)->dbl - (eudouble)_2235);
    }
    DeRef(_2234);
    _2234 = NOVALUE;
    _2235 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = _2236;
    ((intptr_t*)_2)[4] = _18leading_whitespace_4414;
    _2237 = MAKE_SEQ(_1);
    _2236 = NOVALUE;
    DeRef(_s_4417);
    DeRef(_e_4418);
    DeRef(_2193);
    _2193 = NOVALUE;
    DeRef(_2216);
    _2216 = NOVALUE;
    DeRef(_2224);
    _2224 = NOVALUE;
    DeRef(_2202);
    _2202 = NOVALUE;
    DeRef(_2181);
    _2181 = NOVALUE;
    DeRef(_2169);
    _2169 = NOVALUE;
    DeRef(_2208);
    _2208 = NOVALUE;
    DeRef(_2232);
    _2232 = NOVALUE;
    DeRef(_2162);
    _2162 = NOVALUE;
    DeRef(_2156);
    _2156 = NOVALUE;
    DeRef(_2144);
    _2144 = NOVALUE;
    DeRef(_2187);
    _2187 = NOVALUE;
    return _2237;

    /** get.e:476		end while*/
    goto L4; // [877] 94
    ;
}


object _18get_value(object _target_4556, object _start_point_4557, object _answer_type_4558)
{
    object _msg_inlined_crash_at_35_4569 = NOVALUE;
    object _data_inlined_crash_at_32_4568 = NOVALUE;
    object _where_inlined_where_at_76_4575 = NOVALUE;
    object _seek_1__tmp_at90_4580 = NOVALUE;
    object _seek_inlined_seek_at_90_4579 = NOVALUE;
    object _pos_inlined_seek_at_87_4578 = NOVALUE;
    object _msg_inlined_crash_at_108_4583 = NOVALUE;
    object _2253 = NOVALUE;
    object _2250 = NOVALUE;
    object _2249 = NOVALUE;
    object _2248 = NOVALUE;
    object _2244 = NOVALUE;
    object _2243 = NOVALUE;
    object _2242 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:488		if answer_type != GET_SHORT_ANSWER and answer_type != GET_LONG_ANSWER then*/
    _2242 = (_answer_type_4558 != _18GET_SHORT_ANSWER_4548);
    if (_2242 == 0) {
        goto L1; // [13] 55
    }
    _2244 = (_answer_type_4558 != _18GET_LONG_ANSWER_4551);
    if (_2244 == 0)
    {
        DeRef(_2244);
        _2244 = NOVALUE;
        goto L1; // [24] 55
    }
    else{
        DeRef(_2244);
        _2244 = NOVALUE;
    }

    /** get.e:489			error:crash("Invalid type of answer, please only use %s (the default) or %s.", {"GET_SHORT_ANSWER", "GET_LONG_ANSWER"})*/
    RefDS(_2247);
    RefDS(_2246);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _2246;
    ((intptr_t *)_2)[2] = _2247;
    _2248 = MAKE_SEQ(_1);
    DeRef(_data_inlined_crash_at_32_4568);
    _data_inlined_crash_at_32_4568 = _2248;
    _2248 = NOVALUE;

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_35_4569);
    _msg_inlined_crash_at_35_4569 = EPrintf(-9999999, _2245, _data_inlined_crash_at_32_4568);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_35_4569);

    /** error.e:53	end procedure*/
    goto L2; // [49] 52
L2: 
    DeRef(_data_inlined_crash_at_32_4568);
    _data_inlined_crash_at_32_4568 = NOVALUE;
    DeRefi(_msg_inlined_crash_at_35_4569);
    _msg_inlined_crash_at_35_4569 = NOVALUE;
L1: 

    /** get.e:491		if atom(target) then -- get()*/
    _2249 = IS_ATOM(_target_4556);
    if (_2249 == 0)
    {
        _2249 = NOVALUE;
        goto L3; // [60] 142
    }
    else{
        _2249 = NOVALUE;
    }

    /** get.e:492			input_file = target*/
    Ref(_target_4556);
    _18input_file_4111 = _target_4556;
    if (!IS_ATOM_INT(_18input_file_4111)) {
        _1 = (object)(DBL_PTR(_18input_file_4111)->dbl);
        DeRefDS(_18input_file_4111);
        _18input_file_4111 = _1;
    }

    /** get.e:493			if start_point then*/
    if (_start_point_4557 == 0)
    {
        goto L4; // [72] 129
    }
    else{
    }

    /** get.e:494				if io:seek(target, io:where(target)+start_point) then*/

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    DeRef(_where_inlined_where_at_76_4575);
    _where_inlined_where_at_76_4575 = machine(20, _target_4556);
    if (IS_ATOM_INT(_where_inlined_where_at_76_4575)) {
        _2250 = _where_inlined_where_at_76_4575 + _start_point_4557;
        if ((object)((uintptr_t)_2250 + (uintptr_t)HIGH_BITS) >= 0){
            _2250 = NewDouble((eudouble)_2250);
        }
    }
    else {
        _2250 = NewDouble(DBL_PTR(_where_inlined_where_at_76_4575)->dbl + (eudouble)_start_point_4557);
    }
    DeRef(_pos_inlined_seek_at_87_4578);
    _pos_inlined_seek_at_87_4578 = _2250;
    _2250 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_87_4578);
    Ref(_target_4556);
    DeRef(_seek_1__tmp_at90_4580);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _target_4556;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_87_4578;
    _seek_1__tmp_at90_4580 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_90_4579 = machine(19, _seek_1__tmp_at90_4580);
    DeRef(_pos_inlined_seek_at_87_4578);
    _pos_inlined_seek_at_87_4578 = NOVALUE;
    DeRef(_seek_1__tmp_at90_4580);
    _seek_1__tmp_at90_4580 = NOVALUE;
    if (_seek_inlined_seek_at_90_4579 == 0)
    {
        goto L5; // [104] 128
    }
    else{
    }

    /** get.e:495					error:crash("Initial seek() for get() failed!")*/

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_108_4583);
    _msg_inlined_crash_at_108_4583 = EPrintf(-9999999, _2251, _5);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_108_4583);

    /** error.e:53	end procedure*/
    goto L6; // [122] 125
L6: 
    DeRefi(_msg_inlined_crash_at_108_4583);
    _msg_inlined_crash_at_108_4583 = NOVALUE;
L5: 
L4: 

    /** get.e:498			string_next = 1*/
    _18string_next_4113 = 1;

    /** get.e:499			input_string = 0*/
    DeRef(_18input_string_4112);
    _18input_string_4112 = 0;
    goto L7; // [139] 153
L3: 

    /** get.e:501			input_string = target*/
    Ref(_target_4556);
    DeRef(_18input_string_4112);
    _18input_string_4112 = _target_4556;

    /** get.e:502			string_next = start_point*/
    _18string_next_4113 = _start_point_4557;
L7: 

    /** get.e:504		if answer_type = GET_SHORT_ANSWER then*/
    if (_answer_type_4558 != _18GET_SHORT_ANSWER_4548)
    goto L8; // [157] 166

    /** get.e:505			get_ch()*/
    _18get_ch();
L8: 

    /** get.e:507		return call_func(answer_type, {})*/
    _0 = (object)_00[_answer_type_4558].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_2253);
    _2253 = _1;
    DeRef(_target_4556);
    DeRef(_2242);
    _2242 = NOVALUE;
    return _2253;
    ;
}


object _18value(object _st_4596, object _start_point_4597, object _answer_4598)
{
    object _2255 = NOVALUE;
    object _0, _1, _2;
    

    /** get.e:684		return get_value(st, start_point, answer)*/
    RefDS(_st_4596);
    _2255 = _18get_value(_st_4596, 1, _answer_4598);
    DeRefDS(_st_4596);
    return _2255;
    ;
}



// 0x41885C3A
