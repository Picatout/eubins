// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _72report_error(object _err_64288)
{
    object _0, _1, _2;
    

    /** tokenize.e:155		Look = io:EOF*/
    _72Look_64257 = -1;

    /** tokenize.e:156		ERR = err*/
    _72ERR_64258 = _err_64288;

    /** tokenize.e:157		ERR_LNUM = Token[TLNUM]*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _72ERR_LNUM_64259 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_72ERR_LNUM_64259))
    _72ERR_LNUM_64259 = (object)DBL_PTR(_72ERR_LNUM_64259)->dbl;

    /** tokenize.e:158		ERR_LPOS = Token[TLPOS]*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _72ERR_LPOS_64260 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_72ERR_LPOS_64260))
    _72ERR_LPOS_64260 = (object)DBL_PTR(_72ERR_LPOS_64260)->dbl;

    /** tokenize.e:159	end procedure*/
    return;
    ;
}


object _72default_state()
{
    object _31906 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:174		return {*/
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 1;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 1;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 1;
    ((intptr_t*)_2)[7] = 0;
    ((intptr_t*)_2)[8] = 0;
    _31906 = MAKE_SEQ(_1);
    return _31906;
    ;
}


object _72new()
{
    object _state_64308 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:197		atom state = eumem:malloc()*/
    _0 = _state_64308;
    _state_64308 = _31malloc(1, 1);
    DeRef(_0);

    /** tokenize.e:199		reset(state)*/
    Ref(_state_64308);
    _72reset(_state_64308);

    /** tokenize.e:201		return state*/
    return _state_64308;
    ;
}


void _72reset(object _state_64313)
{
    object _31910 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    _31910 = _72default_state();
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_64313))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64313)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_64313);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31910;
    if( _1 != _31910 ){
        DeRef(_1);
    }
    _31910 = NOVALUE;

    /** tokenize.e:213	end procedure*/
    DeRef(_state_64313);
    return;
    ;
}


object _72White_Char(object _c_64377)
{
    object _31935 = NOVALUE;
    object _31934 = NOVALUE;
    object _31933 = NOVALUE;
    object _31932 = NOVALUE;
    object _31931 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:320		return integer(c) and (c >= 0) and (c <= ' ')*/
    _31931 = 1;
    _31932 = (_c_64377 >= 0);
    _31933 = (_31931 != 0 && _31932 != 0);
    _31931 = NOVALUE;
    _31932 = NOVALUE;
    _31934 = (_c_64377 <= 32);
    _31935 = (_31933 != 0 && _31934 != 0);
    _31933 = NOVALUE;
    _31934 = NOVALUE;
    return _31935;
    ;
}


object _72Digit_Char(object _c_64385)
{
    object _31945 = NOVALUE;
    object _31944 = NOVALUE;
    object _31943 = NOVALUE;
    object _31941 = NOVALUE;
    object _31940 = NOVALUE;
    object _31938 = NOVALUE;
    object _31936 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:324		return integer(c) and ((('0' <= c) and (c <= '9')) or (c = '_'))*/
    if (IS_ATOM_INT(_c_64385))
    _31936 = 1;
    else if (IS_ATOM_DBL(_c_64385))
    _31936 = IS_ATOM_INT(DoubleToInt(_c_64385));
    else
    _31936 = 0;
    if (IS_ATOM_INT(_c_64385)) {
        _31938 = (48 <= _c_64385);
    }
    else {
        _31938 = binary_op(LESSEQ, 48, _c_64385);
    }
    if (IS_ATOM_INT(_c_64385)) {
        _31940 = (_c_64385 <= 57);
    }
    else {
        _31940 = binary_op(LESSEQ, _c_64385, 57);
    }
    if (IS_ATOM_INT(_31938) && IS_ATOM_INT(_31940)) {
        _31941 = (_31938 != 0 && _31940 != 0);
    }
    else {
        _31941 = binary_op(AND, _31938, _31940);
    }
    DeRef(_31938);
    _31938 = NOVALUE;
    DeRef(_31940);
    _31940 = NOVALUE;
    if (IS_ATOM_INT(_c_64385)) {
        _31943 = (_c_64385 == 95);
    }
    else {
        _31943 = binary_op(EQUALS, _c_64385, 95);
    }
    if (IS_ATOM_INT(_31941) && IS_ATOM_INT(_31943)) {
        _31944 = (_31941 != 0 || _31943 != 0);
    }
    else {
        _31944 = binary_op(OR, _31941, _31943);
    }
    DeRef(_31941);
    _31941 = NOVALUE;
    DeRef(_31943);
    _31943 = NOVALUE;
    if (IS_ATOM_INT(_31944)) {
        _31945 = (_31936 != 0 && _31944 != 0);
    }
    else {
        _31945 = binary_op(AND, _31936, _31944);
    }
    _31936 = NOVALUE;
    DeRef(_31944);
    _31944 = NOVALUE;
    DeRef(_c_64385);
    return _31945;
    ;
}


object _72uHex_Char(object _c_64398)
{
    object _31952 = NOVALUE;
    object _31951 = NOVALUE;
    object _31949 = NOVALUE;
    object _31948 = NOVALUE;
    object _31946 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:328		return integer(c) and ('A' <= c) and (c <= 'F')*/
    if (IS_ATOM_INT(_c_64398))
    _31946 = 1;
    else if (IS_ATOM_DBL(_c_64398))
    _31946 = IS_ATOM_INT(DoubleToInt(_c_64398));
    else
    _31946 = 0;
    if (IS_ATOM_INT(_c_64398)) {
        _31948 = (65 <= _c_64398);
    }
    else {
        _31948 = binary_op(LESSEQ, 65, _c_64398);
    }
    if (IS_ATOM_INT(_31948)) {
        _31949 = (_31946 != 0 && _31948 != 0);
    }
    else {
        _31949 = binary_op(AND, _31946, _31948);
    }
    _31946 = NOVALUE;
    DeRef(_31948);
    _31948 = NOVALUE;
    if (IS_ATOM_INT(_c_64398)) {
        _31951 = (_c_64398 <= 70);
    }
    else {
        _31951 = binary_op(LESSEQ, _c_64398, 70);
    }
    if (IS_ATOM_INT(_31949) && IS_ATOM_INT(_31951)) {
        _31952 = (_31949 != 0 && _31951 != 0);
    }
    else {
        _31952 = binary_op(AND, _31949, _31951);
    }
    DeRef(_31949);
    _31949 = NOVALUE;
    DeRef(_31951);
    _31951 = NOVALUE;
    DeRef(_c_64398);
    return _31952;
    ;
}


object _72lHex_Char(object _c_64408)
{
    object _31958 = NOVALUE;
    object _31957 = NOVALUE;
    object _31956 = NOVALUE;
    object _31955 = NOVALUE;
    object _31953 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:332		return integer(c) and ('a' <= c) and (c <= 'f')*/
    if (IS_ATOM_INT(_c_64408))
    _31953 = 1;
    else if (IS_ATOM_DBL(_c_64408))
    _31953 = IS_ATOM_INT(DoubleToInt(_c_64408));
    else
    _31953 = 0;
    if (IS_ATOM_INT(_c_64408)) {
        _31955 = (97 <= _c_64408);
    }
    else {
        _31955 = binary_op(LESSEQ, 97, _c_64408);
    }
    if (IS_ATOM_INT(_31955)) {
        _31956 = (_31953 != 0 && _31955 != 0);
    }
    else {
        _31956 = binary_op(AND, _31953, _31955);
    }
    _31953 = NOVALUE;
    DeRef(_31955);
    _31955 = NOVALUE;
    if (IS_ATOM_INT(_c_64408)) {
        _31957 = (_c_64408 <= 102);
    }
    else {
        _31957 = binary_op(LESSEQ, _c_64408, 102);
    }
    if (IS_ATOM_INT(_31956) && IS_ATOM_INT(_31957)) {
        _31958 = (_31956 != 0 && _31957 != 0);
    }
    else {
        _31958 = binary_op(AND, _31956, _31957);
    }
    DeRef(_31956);
    _31956 = NOVALUE;
    DeRef(_31957);
    _31957 = NOVALUE;
    DeRef(_c_64408);
    return _31958;
    ;
}


object _72Hex_Char(object _c_64417)
{
    object _31965 = NOVALUE;
    object _31964 = NOVALUE;
    object _31963 = NOVALUE;
    object _31962 = NOVALUE;
    object _31961 = NOVALUE;
    object _31960 = NOVALUE;
    object _31959 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:336		return integer(c) and (Digit_Char(c) or uHex_Char(c) or lHex_Char(c))*/
    if (IS_ATOM_INT(_c_64417))
    _31959 = 1;
    else if (IS_ATOM_DBL(_c_64417))
    _31959 = IS_ATOM_INT(DoubleToInt(_c_64417));
    else
    _31959 = 0;
    Ref(_c_64417);
    _31960 = _72Digit_Char(_c_64417);
    Ref(_c_64417);
    _31961 = _72uHex_Char(_c_64417);
    if (IS_ATOM_INT(_31960) && IS_ATOM_INT(_31961)) {
        _31962 = (_31960 != 0 || _31961 != 0);
    }
    else {
        _31962 = binary_op(OR, _31960, _31961);
    }
    DeRef(_31960);
    _31960 = NOVALUE;
    DeRef(_31961);
    _31961 = NOVALUE;
    Ref(_c_64417);
    _31963 = _72lHex_Char(_c_64417);
    if (IS_ATOM_INT(_31962) && IS_ATOM_INT(_31963)) {
        _31964 = (_31962 != 0 || _31963 != 0);
    }
    else {
        _31964 = binary_op(OR, _31962, _31963);
    }
    DeRef(_31962);
    _31962 = NOVALUE;
    DeRef(_31963);
    _31963 = NOVALUE;
    if (IS_ATOM_INT(_31964)) {
        _31965 = (_31959 != 0 && _31964 != 0);
    }
    else {
        _31965 = binary_op(AND, _31959, _31964);
    }
    _31959 = NOVALUE;
    DeRef(_31964);
    _31964 = NOVALUE;
    DeRef(_c_64417);
    return _31965;
    ;
}


object _72uAlpha_Char(object _c_64427)
{
    object _31970 = NOVALUE;
    object _31969 = NOVALUE;
    object _31968 = NOVALUE;
    object _31967 = NOVALUE;
    object _31966 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:340		return integer(c) and ('A' <= c) and (c <= 'Z')*/
    _31966 = 1;
    _31967 = (65 <= _c_64427);
    _31968 = (_31966 != 0 && _31967 != 0);
    _31966 = NOVALUE;
    _31967 = NOVALUE;
    _31969 = (_c_64427 <= 90);
    _31970 = (_31968 != 0 && _31969 != 0);
    _31968 = NOVALUE;
    _31969 = NOVALUE;
    return _31970;
    ;
}


object _72lAlpha_Char(object _c_64435)
{
    object _31976 = NOVALUE;
    object _31975 = NOVALUE;
    object _31973 = NOVALUE;
    object _31972 = NOVALUE;
    object _31971 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:344		return integer(c) and ('a' <= c) and (c <= 'z')*/
    _31971 = 1;
    _31972 = (97 <= _c_64435);
    _31973 = (_31971 != 0 && _31972 != 0);
    _31971 = NOVALUE;
    _31972 = NOVALUE;
    _31975 = (_c_64435 <= 122);
    _31976 = (_31973 != 0 && _31975 != 0);
    _31973 = NOVALUE;
    _31975 = NOVALUE;
    return _31976;
    ;
}


object _72Alpha_Char(object _c_64444)
{
    object _31981 = NOVALUE;
    object _31980 = NOVALUE;
    object _31979 = NOVALUE;
    object _31978 = NOVALUE;
    object _31977 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:348		return integer(c) and (uAlpha_Char(c) or lAlpha_Char(c))*/
    _31977 = 1;
    _31978 = _72uAlpha_Char(_c_64444);
    _31979 = _72lAlpha_Char(_c_64444);
    if (IS_ATOM_INT(_31978) && IS_ATOM_INT(_31979)) {
        _31980 = (_31978 != 0 || _31979 != 0);
    }
    else {
        _31980 = binary_op(OR, _31978, _31979);
    }
    DeRef(_31978);
    _31978 = NOVALUE;
    DeRef(_31979);
    _31979 = NOVALUE;
    if (IS_ATOM_INT(_31980)) {
        _31981 = (_31977 != 0 && _31980 != 0);
    }
    else {
        _31981 = binary_op(AND, _31977, _31980);
    }
    _31977 = NOVALUE;
    DeRef(_31980);
    _31980 = NOVALUE;
    return _31981;
    ;
}


object _72Alphanum_Char(object _c_64452)
{
    object _31986 = NOVALUE;
    object _31985 = NOVALUE;
    object _31984 = NOVALUE;
    object _31983 = NOVALUE;
    object _31982 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:352		return integer(c) and (Alpha_Char(c) or Digit_Char(c))*/
    _31982 = 1;
    _31983 = _72Alpha_Char(_c_64452);
    _31984 = _72Digit_Char(_c_64452);
    if (IS_ATOM_INT(_31983) && IS_ATOM_INT(_31984)) {
        _31985 = (_31983 != 0 || _31984 != 0);
    }
    else {
        _31985 = binary_op(OR, _31983, _31984);
    }
    DeRef(_31983);
    _31983 = NOVALUE;
    DeRef(_31984);
    _31984 = NOVALUE;
    if (IS_ATOM_INT(_31985)) {
        _31986 = (_31982 != 0 && _31985 != 0);
    }
    else {
        _31986 = binary_op(AND, _31982, _31985);
    }
    _31982 = NOVALUE;
    DeRef(_31985);
    _31985 = NOVALUE;
    return _31986;
    ;
}


object _72Identifier_Char(object _c_64460)
{
    object _31987 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:356		return Alphanum_Char(c)*/
    _31987 = _72Alphanum_Char(_c_64460);
    return _31987;
    ;
}


void _72scan_char(object _state_64464)
{
    object _32002 = NOVALUE;
    object _31998 = NOVALUE;
    object _31997 = NOVALUE;
    object _31994 = NOVALUE;
    object _31993 = NOVALUE;
    object _31992 = NOVALUE;
    object _31991 = NOVALUE;
    object _31990 = NOVALUE;
    object _31989 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:360		state = state -- supress warning*/
    Ref(_state_64464);
    DeRef(_state_64464);
    _state_64464 = _state_64464;

    /** tokenize.e:361		if Look = EOL then*/
    if (_72Look_64257 != 10)
    goto L1; // [10] 118

    /** tokenize.e:362			if sti < length(source_text) and source_text[sti+1] = '\r' then*/
    if (IS_SEQUENCE(_72source_text_64253)){
            _31989 = SEQ_PTR(_72source_text_64253)->length;
    }
    else {
        _31989 = 1;
    }
    _31990 = (_72sti_64254 < _31989);
    _31989 = NOVALUE;
    if (_31990 == 0) {
        goto L2; // [27] 70
    }
    _31992 = _72sti_64254 + 1;
    _2 = (object)SEQ_PTR(_72source_text_64253);
    _31993 = (object)*(((s1_ptr)_2)->base + _31992);
    if (IS_ATOM_INT(_31993)) {
        _31994 = (_31993 == 13);
    }
    else {
        _31994 = binary_op(EQUALS, _31993, 13);
    }
    _31993 = NOVALUE;
    if (_31994 == 0) {
        DeRef(_31994);
        _31994 = NOVALUE;
        goto L2; // [48] 70
    }
    else {
        if (!IS_ATOM_INT(_31994) && DBL_PTR(_31994)->dbl == 0.0){
            DeRef(_31994);
            _31994 = NOVALUE;
            goto L2; // [48] 70
        }
        DeRef(_31994);
        _31994 = NOVALUE;
    }
    DeRef(_31994);
    _31994 = NOVALUE;

    /** tokenize.e:363				sti += 1*/
    _72sti_64254 = _72sti_64254 + 1;

    /** tokenize.e:364				source_text[sti] = EOL*/
    _2 = (object)SEQ_PTR(_72source_text_64253);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72source_text_64253 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _72sti_64254);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
L2: 

    /** tokenize.e:366			LNum += 1*/
    _72LNum_64255 = _72LNum_64255 + 1;

    /** tokenize.e:367			LPos = 0*/
    _72LPos_64256 = 0;

    /** tokenize.e:368			if length(Token[TDATA]) = 0 then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _31997 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_31997)){
            _31998 = SEQ_PTR(_31997)->length;
    }
    else {
        _31998 = 1;
    }
    _31997 = NOVALUE;
    if (_31998 != 0)
    goto L3; // [94] 117

    /** tokenize.e:369				Token[TLNUM] = LNum*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _72LNum_64255;
    DeRef(_1);

    /** tokenize.e:370				Token[TLPOS] = 1*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
L3: 
L1: 

    /** tokenize.e:373		LPos += 1*/
    _72LPos_64256 = _72LPos_64256 + 1;

    /** tokenize.e:374		sti += 1*/
    _72sti_64254 = _72sti_64254 + 1;

    /** tokenize.e:375		if sti > length(source_text) then*/
    if (IS_SEQUENCE(_72source_text_64253)){
            _32002 = SEQ_PTR(_72source_text_64253)->length;
    }
    else {
        _32002 = 1;
    }
    if (_72sti_64254 <= _32002)
    goto L4; // [143] 155

    /** tokenize.e:376			Look = io:EOF*/
    _72Look_64257 = -1;
    goto L5; // [152] 166
L4: 

    /** tokenize.e:378			Look = source_text[sti]*/
    _2 = (object)SEQ_PTR(_72source_text_64253);
    _72Look_64257 = (object)*(((s1_ptr)_2)->base + _72sti_64254);
    if (!IS_ATOM_INT(_72Look_64257))
    _72Look_64257 = (object)DBL_PTR(_72Look_64257)->dbl;
L5: 

    /** tokenize.e:380	end procedure*/
    DeRef(_state_64464);
    DeRef(_31990);
    _31990 = NOVALUE;
    DeRef(_31992);
    _31992 = NOVALUE;
    _31997 = NOVALUE;
    return;
    ;
}


object _72lookahead(object _dist_64489, object _state_64490)
{
    object _32009 = NOVALUE;
    object _32008 = NOVALUE;
    object _32006 = NOVALUE;
    object _32005 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_dist_64489)) {
        _1 = (object)(DBL_PTR(_dist_64489)->dbl);
        DeRefDS(_dist_64489);
        _dist_64489 = _1;
    }

    /** tokenize.e:383		state = state -- supress warning*/
    Ref(_state_64490);
    DeRef(_state_64490);
    _state_64490 = _state_64490;

    /** tokenize.e:384		if sti + dist <= length(source_text) then*/
    _32005 = _72sti_64254 + _dist_64489;
    if ((object)((uintptr_t)_32005 + (uintptr_t)HIGH_BITS) >= 0){
        _32005 = NewDouble((eudouble)_32005);
    }
    if (IS_SEQUENCE(_72source_text_64253)){
            _32006 = SEQ_PTR(_72source_text_64253)->length;
    }
    else {
        _32006 = 1;
    }
    if (binary_op_a(GREATER, _32005, _32006)){
        DeRef(_32005);
        _32005 = NOVALUE;
        _32006 = NOVALUE;
        goto L1; // [21] 46
    }
    DeRef(_32005);
    _32005 = NOVALUE;
    _32006 = NOVALUE;

    /** tokenize.e:385			return source_text[sti + dist]*/
    _32008 = _72sti_64254 + _dist_64489;
    _2 = (object)SEQ_PTR(_72source_text_64253);
    _32009 = (object)*(((s1_ptr)_2)->base + _32008);
    Ref(_32009);
    DeRef(_state_64490);
    _32008 = NOVALUE;
    return _32009;
    goto L2; // [43] 53
L1: 

    /** tokenize.e:387			return io:EOF*/
    DeRef(_state_64490);
    DeRef(_32008);
    _32008 = NOVALUE;
    _32009 = NOVALUE;
    return -1;
L2: 
    ;
}


object _72scan_white(object _state_64500)
{
    object _32010 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:393		Token[TTYPE] = T_NEWLINE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);

    /** tokenize.e:394		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:396		while White_Char(Look) do*/
L1: 
    _32010 = _72White_Char(_72Look_64257);
    if (_32010 <= 0) {
        if (_32010 == 0) {
            DeRef(_32010);
            _32010 = NOVALUE;
            goto L2; // [28] 56
        }
        else {
            if (!IS_ATOM_INT(_32010) && DBL_PTR(_32010)->dbl == 0.0){
                DeRef(_32010);
                _32010 = NOVALUE;
                goto L2; // [28] 56
            }
            DeRef(_32010);
            _32010 = NOVALUE;
        }
    }
    DeRef(_32010);
    _32010 = NOVALUE;

    /** tokenize.e:397			scan_char(state)*/
    Ref(_state_64500);
    _72scan_char(_state_64500);

    /** tokenize.e:398			if Look = EOL then*/
    if (_72Look_64257 != 10)
    goto L1; // [40] 22

    /** tokenize.e:399				return TRUE*/
    DeRef(_state_64500);
    return 1;

    /** tokenize.e:401		end while*/
    goto L1; // [53] 22
L2: 

    /** tokenize.e:403		return FALSE*/
    DeRef(_state_64500);
    return 0;
    ;
}


object _72scankeep_white(object _state_64507)
{
    object _32017 = NOVALUE;
    object _32016 = NOVALUE;
    object _32014 = NOVALUE;
    object _32013 = NOVALUE;
    object _32012 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:408		Token[TTYPE] = T_WHITE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 40;
    DeRef(_1);

    /** tokenize.e:409		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:411		while White_Char(Look) do*/
L1: 
    _32012 = _72White_Char(_72Look_64257);
    if (_32012 <= 0) {
        if (_32012 == 0) {
            DeRef(_32012);
            _32012 = NOVALUE;
            goto L2; // [28] 72
        }
        else {
            if (!IS_ATOM_INT(_32012) && DBL_PTR(_32012)->dbl == 0.0){
                DeRef(_32012);
                _32012 = NOVALUE;
                goto L2; // [28] 72
            }
            DeRef(_32012);
            _32012 = NOVALUE;
        }
    }
    DeRef(_32012);
    _32012 = NOVALUE;

    /** tokenize.e:412			Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32013 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32013) && IS_ATOM(_72Look_64257)) {
        Append(&_32014, _32013, _72Look_64257);
    }
    else if (IS_ATOM(_32013) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32014, _32013, _72Look_64257);
        _32013 = NOVALUE;
    }
    _32013 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32014;
    if( _1 != _32014 ){
        DeRef(_1);
    }
    _32014 = NOVALUE;

    /** tokenize.e:413			scan_char(state)*/
    Ref(_state_64507);
    _72scan_char(_state_64507);

    /** tokenize.e:414			if Look = EOL then*/
    if (_72Look_64257 != 10)
    goto L1; // [58] 22

    /** tokenize.e:415				exit*/
    goto L2; // [64] 72

    /** tokenize.e:417		end while*/
    goto L1; // [69] 22
L2: 

    /** tokenize.e:419		if length(Token[TDATA]) then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32016 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32016)){
            _32017 = SEQ_PTR(_32016)->length;
    }
    else {
        _32017 = 1;
    }
    _32016 = NOVALUE;
    if (_32017 == 0)
    {
        _32017 = NOVALUE;
        goto L3; // [83] 93
    }
    else{
        _32017 = NOVALUE;
    }

    /** tokenize.e:420			return TRUE*/
    DeRef(_state_64507);
    _32016 = NOVALUE;
    return 1;
L3: 

    /** tokenize.e:422		return FALSE*/
    DeRef(_state_64507);
    _32016 = NOVALUE;
    return 0;
    ;
}


object _72scan_multicomment(object _state_64519, object _multi_64521)
{
    object _32028 = NOVALUE;
    object _32027 = NOVALUE;
    object _32026 = NOVALUE;
    object _32025 = NOVALUE;
    object _32023 = NOVALUE;
    object _32022 = NOVALUE;
    object _32021 = NOVALUE;
    object _32020 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:426		Token[TTYPE] = T_COMMENT*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);

    /** tokenize.e:427		if not multi then*/
    if (_multi_64521 != 0)
    goto L1; // [11] 23

    /** tokenize.e:428			Token[TDATA] = "/"*/
    RefDS(_23504);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23504;
    DeRef(_1);
L1: 

    /** tokenize.e:430		Token[TFORM] = TF_COMMENT_MULTIPLE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);

    /** tokenize.e:432		while 1 do*/
L2: 

    /** tokenize.e:433			if (Look = io:EOF) then*/
    if (_72Look_64257 != -1)
    goto L3; // [40] 56

    /** tokenize.e:434				last_multi = TF_COMMENT_MULTIPLE*/
    DeRef(_72last_multi_64612);
    _72last_multi_64612 = 9;

    /** tokenize.e:435				return TRUE */
    DeRef(_state_64519);
    return 1;
L3: 

    /** tokenize.e:438			if (Look = '*') and lookahead(1) = '/' then*/
    _32020 = (_72Look_64257 == 42);
    if (_32020 == 0) {
        goto L4; // [64] 114
    }
    Ref(_72g_state_64303);
    _32022 = _72lookahead(1, _72g_state_64303);
    if (IS_ATOM_INT(_32022)) {
        _32023 = (_32022 == 47);
    }
    else {
        _32023 = binary_op(EQUALS, _32022, 47);
    }
    DeRef(_32022);
    _32022 = NOVALUE;
    if (_32023 == 0) {
        DeRef(_32023);
        _32023 = NOVALUE;
        goto L4; // [80] 114
    }
    else {
        if (!IS_ATOM_INT(_32023) && DBL_PTR(_32023)->dbl == 0.0){
            DeRef(_32023);
            _32023 = NOVALUE;
            goto L4; // [80] 114
        }
        DeRef(_32023);
        _32023 = NOVALUE;
    }
    DeRef(_32023);
    _32023 = NOVALUE;

    //tokenize.e:439				Token[TDATA] &= "*/"
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32025 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32025) && IS_ATOM(_32024)) {
    }
    else if (IS_ATOM(_32025) && IS_SEQUENCE(_32024)) {
        Ref(_32025);
        Prepend(&_32026, _32024, _32025);
    }
    else {
        Concat((object_ptr)&_32026, _32025, _32024);
        _32025 = NOVALUE;
    }
    _32025 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32026;
    if( _1 != _32026 ){
        DeRef(_1);
    }
    _32026 = NOVALUE;

    //tokenize.e:441				scan_char(state) -- skip the */
    Ref(_state_64519);
    _72scan_char(_state_64519);

    /** tokenize.e:442				scan_char(state)*/
    Ref(_state_64519);
    _72scan_char(_state_64519);

    /** tokenize.e:443				exit*/
    goto L5; // [111] 142
L4: 

    /** tokenize.e:446			Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32027 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32027) && IS_ATOM(_72Look_64257)) {
        Append(&_32028, _32027, _72Look_64257);
    }
    else if (IS_ATOM(_32027) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32028, _32027, _72Look_64257);
        _32027 = NOVALUE;
    }
    _32027 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32028;
    if( _1 != _32028 ){
        DeRef(_1);
    }
    _32028 = NOVALUE;

    /** tokenize.e:447			scan_char(state)*/
    Ref(_state_64519);
    _72scan_char(_state_64519);

    /** tokenize.e:448		end while*/
    goto L2; // [139] 36
L5: 

    /** tokenize.e:450		return TRUE*/
    DeRef(_state_64519);
    DeRef(_32020);
    _32020 = NOVALUE;
    return 1;
    ;
}


void _72scan_escaped_char(object _state_64542)
{
    object _f_64543 = NOVALUE;
    object _32034 = NOVALUE;
    object _32033 = NOVALUE;
    object _32031 = NOVALUE;
    object _32030 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:457		Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32030 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32030) && IS_ATOM(_72Look_64257)) {
        Append(&_32031, _32030, _72Look_64257);
    }
    else if (IS_ATOM(_32030) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32031, _32030, _72Look_64257);
        _32030 = NOVALUE;
    }
    _32030 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32031;
    if( _1 != _32031 ){
        DeRef(_1);
    }
    _32031 = NOVALUE;

    /** tokenize.e:458		if (Look = '\\') then*/
    if (_72Look_64257 != 92)
    goto L1; // [23] 71

    /** tokenize.e:459			scan_char(state)*/
    Ref(_state_64542);
    _72scan_char(_state_64542);

    /** tokenize.e:460			Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32033 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32033) && IS_ATOM(_72Look_64257)) {
        Append(&_32034, _32033, _72Look_64257);
    }
    else if (IS_ATOM(_32033) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32034, _32033, _72Look_64257);
        _32033 = NOVALUE;
    }
    _32033 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32034;
    if( _1 != _32034 ){
        DeRef(_1);
    }
    _32034 = NOVALUE;

    /** tokenize.e:461			f = find(Look,QFLAGS)*/
    _f_64543 = find_from(_72Look_64257, _72QFLAGS_64538, 1);

    /** tokenize.e:462			if not f then*/
    if (_f_64543 != 0)
    goto L2; // [61] 70

    /** tokenize.e:463				report_error(ERR_ESCAPE)*/
    _72report_error(2);
L2: 
L1: 

    /** tokenize.e:466		scan_char(state)*/
    Ref(_state_64542);
    _72scan_char(_state_64542);

    /** tokenize.e:467	end procedure*/
    DeRef(_state_64542);
    return;
    ;
}


object _72scan_qchar(object _state_64555)
{
    object _32056 = NOVALUE;
    object _32055 = NOVALUE;
    object _32054 = NOVALUE;
    object _32053 = NOVALUE;
    object _32052 = NOVALUE;
    object _32051 = NOVALUE;
    object _32050 = NOVALUE;
    object _32049 = NOVALUE;
    object _32047 = NOVALUE;
    object _32046 = NOVALUE;
    object _32045 = NOVALUE;
    object _32044 = NOVALUE;
    object _32043 = NOVALUE;
    object _32042 = NOVALUE;
    object _32041 = NOVALUE;
    object _32040 = NOVALUE;
    object _32039 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:470		if (Look != '\'') then return FALSE end if*/
    if (_72Look_64257 == 39)
    goto L1; // [5] 14
    DeRef(_state_64555);
    return 0;
L1: 

    /** tokenize.e:471		scan_char(state)*/
    Ref(_state_64555);
    _72scan_char(_state_64555);

    /** tokenize.e:472		Token[TTYPE] = T_CHAR*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 7;
    DeRef(_1);

    /** tokenize.e:473		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:474		if (Look = EOL) then*/
    if (_72Look_64257 != 10)
    goto L2; // [39] 89

    /** tokenize.e:475			if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64555)){
        _32039 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64555)->dbl));
    }
    else{
        _32039 = (object)*(((s1_ptr)_2)->base + _state_64555);
    }
    _2 = (object)SEQ_PTR(_32039);
    _32040 = (object)*(((s1_ptr)_2)->base + 8);
    _32039 = NOVALUE;
    if (_32040 == 0) {
        _32040 = NOVALUE;
        goto L3; // [55] 77
    }
    else {
        if (!IS_ATOM_INT(_32040) && DBL_PTR(_32040)->dbl == 0.0){
            _32040 = NOVALUE;
            goto L3; // [55] 77
        }
        _32040 = NOVALUE;
    }
    _32040 = NOVALUE;

    /** tokenize.e:476				Token[TDATA] = "'" & Token[TDATA]*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32041 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_26269) && IS_ATOM(_32041)) {
        Ref(_32041);
        Append(&_32042, _26269, _32041);
    }
    else if (IS_ATOM(_26269) && IS_SEQUENCE(_32041)) {
    }
    else {
        Concat((object_ptr)&_32042, _26269, _32041);
    }
    _32041 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32042;
    if( _1 != _32042 ){
        DeRef(_1);
    }
    _32042 = NOVALUE;
L3: 

    /** tokenize.e:478			report_error(ERR_EOL_CHAR)*/
    _72report_error(3);

    /** tokenize.e:479			return TRUE*/
    DeRef(_state_64555);
    return 1;
L2: 

    /** tokenize.e:481		scan_escaped_char(state)*/
    Ref(_state_64555);
    _72scan_escaped_char(_state_64555);

    /** tokenize.e:482		while Look != '\'' and Look != EOL do*/
L4: 
    _32043 = (_72Look_64257 != 39);
    if (_32043 == 0) {
        goto L5; // [105] 147
    }
    _32045 = (_72Look_64257 != 10);
    if (_32045 == 0)
    {
        DeRef(_32045);
        _32045 = NOVALUE;
        goto L5; // [116] 147
    }
    else{
        DeRef(_32045);
        _32045 = NOVALUE;
    }

    /** tokenize.e:483			Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32046 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32046) && IS_ATOM(_72Look_64257)) {
        Append(&_32047, _32046, _72Look_64257);
    }
    else if (IS_ATOM(_32046) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32047, _32046, _72Look_64257);
        _32046 = NOVALUE;
    }
    _32046 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32047;
    if( _1 != _32047 ){
        DeRef(_1);
    }
    _32047 = NOVALUE;

    /** tokenize.e:484			scan_char( state )*/
    Ref(_state_64555);
    _72scan_char(_state_64555);

    /** tokenize.e:485		end while*/
    goto L4; // [144] 99
L5: 

    /** tokenize.e:486		if (Look != '\'') then*/
    if (_72Look_64257 == 39)
    goto L6; // [151] 201

    /** tokenize.e:487			if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64555)){
        _32049 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64555)->dbl));
    }
    else{
        _32049 = (object)*(((s1_ptr)_2)->base + _state_64555);
    }
    _2 = (object)SEQ_PTR(_32049);
    _32050 = (object)*(((s1_ptr)_2)->base + 8);
    _32049 = NOVALUE;
    if (_32050 == 0) {
        _32050 = NOVALUE;
        goto L7; // [167] 189
    }
    else {
        if (!IS_ATOM_INT(_32050) && DBL_PTR(_32050)->dbl == 0.0){
            _32050 = NOVALUE;
            goto L7; // [167] 189
        }
        _32050 = NOVALUE;
    }
    _32050 = NOVALUE;

    /** tokenize.e:488				Token[TDATA] = "'" & Token[TDATA]*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32051 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_26269) && IS_ATOM(_32051)) {
        Ref(_32051);
        Append(&_32052, _26269, _32051);
    }
    else if (IS_ATOM(_26269) && IS_SEQUENCE(_32051)) {
    }
    else {
        Concat((object_ptr)&_32052, _26269, _32051);
    }
    _32051 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32052;
    if( _1 != _32052 ){
        DeRef(_1);
    }
    _32052 = NOVALUE;
L7: 

    /** tokenize.e:490			report_error(ERR_CLOSE_CHAR)*/
    _72report_error(4);

    /** tokenize.e:491			return TRUE*/
    DeRef(_state_64555);
    DeRef(_32043);
    _32043 = NOVALUE;
    return 1;
L6: 

    /** tokenize.e:493		scan_char(state)*/
    Ref(_state_64555);
    _72scan_char(_state_64555);

    /** tokenize.e:494		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64555)){
        _32053 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64555)->dbl));
    }
    else{
        _32053 = (object)*(((s1_ptr)_2)->base + _state_64555);
    }
    _2 = (object)SEQ_PTR(_32053);
    _32054 = (object)*(((s1_ptr)_2)->base + 8);
    _32053 = NOVALUE;
    if (_32054 == 0) {
        _32054 = NOVALUE;
        goto L8; // [218] 242
    }
    else {
        if (!IS_ATOM_INT(_32054) && DBL_PTR(_32054)->dbl == 0.0){
            _32054 = NOVALUE;
            goto L8; // [218] 242
        }
        _32054 = NOVALUE;
    }
    _32054 = NOVALUE;

    /** tokenize.e:495			Token[TDATA] = "'" & Token[TDATA] & "'"*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32055 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[3];

        concat_list[0] = _26269;
        concat_list[1] = _32055;
        concat_list[2] = _26269;
        Concat_N((object_ptr)&_32056, concat_list, 3);
    }
    _32055 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32056;
    if( _1 != _32056 ){
        DeRef(_1);
    }
    _32056 = NOVALUE;
L8: 

    /** tokenize.e:497		return TRUE*/
    DeRef(_state_64555);
    DeRef(_32043);
    _32043 = NOVALUE;
    return 1;
    ;
}


object _72lookahead_for(object _needle_64585, object _look_at_64586)
{
    object _32061 = NOVALUE;
    object _32060 = NOVALUE;
    object _32059 = NOVALUE;
    object _32057 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:501		if atom( needle ) then*/
    _32057 = 0;
    if (_32057 == 0)
    {
        _32057 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _32057 = NOVALUE;
    }

    /** tokenize.e:502			needle = {needle}*/
    _0 = _needle_64585;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_needle_64585);
    ((intptr_t*)_2)[1] = _needle_64585;
    _needle_64585 = MAKE_SEQ(_1);
    DeRefDSi(_0);
L1: 

    /** tokenize.e:504		for i = 1 to length( needle ) do*/
    if (IS_SEQUENCE(_needle_64585)){
            _32059 = SEQ_PTR(_needle_64585)->length;
    }
    else {
        _32059 = 1;
    }
    {
        object _i_64591;
        _i_64591 = 1;
L2: 
        if (_i_64591 > _32059){
            goto L3; // [23] 67
        }

        /** tokenize.e:505			if lookahead( look_at ) != needle[i] then*/
        Ref(_72g_state_64303);
        _32060 = _72lookahead(_look_at_64586, _72g_state_64303);
        _2 = (object)SEQ_PTR(_needle_64585);
        _32061 = (object)*(((s1_ptr)_2)->base + _i_64591);
        if (binary_op_a(EQUALS, _32060, _32061)){
            DeRef(_32060);
            _32060 = NOVALUE;
            _32061 = NOVALUE;
            goto L4; // [43] 54
        }
        DeRef(_32060);
        _32060 = NOVALUE;
        _32061 = NOVALUE;

        /** tokenize.e:506				return FALSE*/
        DeRef(_needle_64585);
        return 0;
L4: 

        /** tokenize.e:508			look_at += 1*/
        _look_at_64586 = _look_at_64586 + 1;

        /** tokenize.e:509		end for*/
        _i_64591 = _i_64591 + 1;
        goto L2; // [62] 30
L3: 
        ;
    }

    /** tokenize.e:510		return TRUE*/
    DeRef(_needle_64585);
    return 1;
    ;
}


object _72last_multiline_token()
{
    object _0, _1, _2;
    

    /** tokenize.e:540		return last_multi*/
    Ref(_72last_multi_64612);
    return _72last_multi_64612;
    ;
}


object _72raw_string(object _delimiter_64617, object _state_64618, object _multi_64619)
{
    object _32095 = NOVALUE;
    object _32094 = NOVALUE;
    object _32093 = NOVALUE;
    object _32092 = NOVALUE;
    object _32090 = NOVALUE;
    object _32089 = NOVALUE;
    object _32086 = NOVALUE;
    object _32085 = NOVALUE;
    object _32083 = NOVALUE;
    object _32081 = NOVALUE;
    object _32080 = NOVALUE;
    object _32079 = NOVALUE;
    object _32078 = NOVALUE;
    object _32077 = NOVALUE;
    object _32076 = NOVALUE;
    object _32075 = NOVALUE;
    object _32074 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:544		Token[TTYPE] = T_STRING*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);

    /** tokenize.e:545		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:547		if equal( delimiter, "`" ) then*/
    if (_delimiter_64617 == _32073)
    _32074 = 1;
    else if (IS_ATOM_INT(_delimiter_64617) && IS_ATOM_INT(_32073))
    _32074 = 0;
    else
    _32074 = (compare(_delimiter_64617, _32073) == 0);
    if (_32074 == 0)
    {
        _32074 = NOVALUE;
        goto L1; // [25] 39
    }
    else{
        _32074 = NOVALUE;
    }

    /** tokenize.e:548			Token[TFORM] = TF_STRING_BACKTICK*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    goto L2; // [36] 48
L1: 

    /** tokenize.e:550			Token[TFORM] = TF_STRING_TRIPLE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
L2: 

    /** tokenize.e:553		while lookahead(1) != io:EOF and not lookahead_for( delimiter ) with entry do*/
L3: 
    Ref(_72g_state_64303);
    _32075 = _72lookahead(1, _72g_state_64303);
    if (IS_ATOM_INT(_32075)) {
        _32076 = (_32075 != -1);
    }
    else {
        _32076 = binary_op(NOTEQ, _32075, -1);
    }
    DeRef(_32075);
    _32075 = NOVALUE;
    if (IS_ATOM_INT(_32076)) {
        if (_32076 == 0) {
            DeRef(_32077);
            _32077 = 0;
            goto L4; // [64] 80
        }
    }
    else {
        if (DBL_PTR(_32076)->dbl == 0.0) {
            DeRef(_32077);
            _32077 = 0;
            goto L4; // [64] 80
        }
    }
    RefDS(_delimiter_64617);
    _32078 = _72lookahead_for(_delimiter_64617, 1);
    if (IS_ATOM_INT(_32078)) {
        _32079 = (_32078 == 0);
    }
    else {
        _32079 = unary_op(NOT, _32078);
    }
    DeRef(_32078);
    _32078 = NOVALUE;
    DeRef(_32077);
    if (IS_ATOM_INT(_32079))
    _32077 = (_32079 != 0);
    else
    _32077 = DBL_PTR(_32079)->dbl != 0.0;
L4: 
    if (_32077 == 0)
    {
        _32077 = NOVALUE;
        goto L5; // [80] 111
    }
    else{
        _32077 = NOVALUE;
    }

    /** tokenize.e:554			scan_char(state)*/
    Ref(_state_64618);
    _72scan_char(_state_64618);

    /** tokenize.e:555			Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32080 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32080) && IS_ATOM(_72Look_64257)) {
        Append(&_32081, _32080, _72Look_64257);
    }
    else if (IS_ATOM(_32080) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32081, _32080, _72Look_64257);
        _32080 = NOVALUE;
    }
    _32080 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32081;
    if( _1 != _32081 ){
        DeRef(_1);
    }
    _32081 = NOVALUE;

    /** tokenize.e:557		end while*/
    goto L3; // [108] 53
L5: 

    /** tokenize.e:559		if Look != io:EOF then*/
    if (_72Look_64257 == -1)
    goto L6; // [115] 136

    /** tokenize.e:560			sti += length( delimiter )*/
    if (IS_SEQUENCE(_delimiter_64617)){
            _32083 = SEQ_PTR(_delimiter_64617)->length;
    }
    else {
        _32083 = 1;
    }
    _72sti_64254 = _72sti_64254 + _32083;
    _32083 = NOVALUE;

    /** tokenize.e:561			scan_char(state)*/
    Ref(_state_64618);
    _72scan_char(_state_64618);
L6: 

    /** tokenize.e:564		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64618)){
        _32085 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64618)->dbl));
    }
    else{
        _32085 = (object)*(((s1_ptr)_2)->base + _state_64618);
    }
    _2 = (object)SEQ_PTR(_32085);
    _32086 = (object)*(((s1_ptr)_2)->base + 8);
    _32085 = NOVALUE;
    if (_32086 == 0) {
        _32086 = NOVALUE;
        goto L7; // [148] 243
    }
    else {
        if (!IS_ATOM_INT(_32086) && DBL_PTR(_32086)->dbl == 0.0){
            _32086 = NOVALUE;
            goto L7; // [148] 243
        }
        _32086 = NOVALUE;
    }
    _32086 = NOVALUE;

    /** tokenize.e:565			if Look = io:EOF then*/
    if (_72Look_64257 != -1)
    goto L8; // [155] 194

    /** tokenize.e:566				if not multi then*/
    if (_multi_64619 != 0)
    goto L9; // [161] 183

    /** tokenize.e:567					Token[TDATA] = delimiter & Token[TDATA]*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32089 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_delimiter_64617) && IS_ATOM(_32089)) {
        Ref(_32089);
        Append(&_32090, _delimiter_64617, _32089);
    }
    else if (IS_ATOM(_delimiter_64617) && IS_SEQUENCE(_32089)) {
    }
    else {
        Concat((object_ptr)&_32090, _delimiter_64617, _32089);
    }
    _32089 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32090;
    if( _1 != _32090 ){
        DeRef(_1);
    }
    _32090 = NOVALUE;
L9: 

    /** tokenize.e:569				last_multi = Token[TFORM]*/
    DeRef(_72last_multi_64612);
    _2 = (object)SEQ_PTR(_72Token_64251);
    _72last_multi_64612 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_72last_multi_64612);
    goto LA; // [191] 242
L8: 

    /** tokenize.e:571				if multi then*/
    if (_multi_64619 == 0)
    {
        goto LB; // [196] 220
    }
    else{
    }

    /** tokenize.e:572					Token[TDATA] = Token[TDATA] & delimiter*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32092 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32092) && IS_ATOM(_delimiter_64617)) {
    }
    else if (IS_ATOM(_32092) && IS_SEQUENCE(_delimiter_64617)) {
        Ref(_32092);
        Prepend(&_32093, _delimiter_64617, _32092);
    }
    else {
        Concat((object_ptr)&_32093, _32092, _delimiter_64617);
        _32092 = NOVALUE;
    }
    _32092 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32093;
    if( _1 != _32093 ){
        DeRef(_1);
    }
    _32093 = NOVALUE;
    goto LC; // [217] 241
LB: 

    /** tokenize.e:574					Token[TDATA] = delimiter & Token[TDATA] & delimiter*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32094 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[3];

        concat_list[0] = _delimiter_64617;
        concat_list[1] = _32094;
        concat_list[2] = _delimiter_64617;
        Concat_N((object_ptr)&_32095, concat_list, 3);
    }
    _32094 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32095;
    if( _1 != _32095 ){
        DeRef(_1);
    }
    _32095 = NOVALUE;
LC: 
LA: 
L7: 

    /** tokenize.e:579		return TRUE*/
    DeRefDSi(_delimiter_64617);
    DeRef(_state_64618);
    DeRef(_32076);
    _32076 = NOVALUE;
    DeRef(_32079);
    _32079 = NOVALUE;
    return 1;
    ;
}


object _72scan_string(object _state_64655)
{
    object _32123 = NOVALUE;
    object _32122 = NOVALUE;
    object _32121 = NOVALUE;
    object _32120 = NOVALUE;
    object _32119 = NOVALUE;
    object _32118 = NOVALUE;
    object _32117 = NOVALUE;
    object _32116 = NOVALUE;
    object _32115 = NOVALUE;
    object _32114 = NOVALUE;
    object _32112 = NOVALUE;
    object _32111 = NOVALUE;
    object _32108 = NOVALUE;
    object _32106 = NOVALUE;
    object _32104 = NOVALUE;
    object _32103 = NOVALUE;
    object _32101 = NOVALUE;
    object _32100 = NOVALUE;
    object _32098 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:583		if (Look = '`') then*/
    if (_72Look_64257 != 96)
    goto L1; // [5] 22

    /** tokenize.e:584			return raw_string( "`", state )*/
    RefDS(_32073);
    Ref(_state_64655);
    _32098 = _72raw_string(_32073, _state_64655, 0);
    DeRef(_state_64655);
    return _32098;
L1: 

    /** tokenize.e:586		if (Look != '"') then */
    if (_72Look_64257 == 34)
    goto L2; // [26] 37

    /** tokenize.e:587			return FALSE */
    DeRef(_state_64655);
    DeRef(_32098);
    _32098 = NOVALUE;
    return 0;
L2: 

    /** tokenize.e:590		if sti + 3 < length(source_text) then*/
    _32100 = _72sti_64254 + 3;
    if ((object)((uintptr_t)_32100 + (uintptr_t)HIGH_BITS) >= 0){
        _32100 = NewDouble((eudouble)_32100);
    }
    if (IS_SEQUENCE(_72source_text_64253)){
            _32101 = SEQ_PTR(_72source_text_64253)->length;
    }
    else {
        _32101 = 1;
    }
    if (binary_op_a(GREATEREQ, _32100, _32101)){
        DeRef(_32100);
        _32100 = NOVALUE;
        _32101 = NOVALUE;
        goto L3; // [50] 100
    }
    DeRef(_32100);
    _32100 = NOVALUE;
    _32101 = NOVALUE;

    /** tokenize.e:591			if equal(source_text[sti .. sti + 2], "\"\"\"") then*/
    _32103 = _72sti_64254 + 2;
    rhs_slice_target = (object_ptr)&_32104;
    RHS_Slice(_72source_text_64253, _72sti_64254, _32103);
    if (_32104 == _32105)
    _32106 = 1;
    else if (IS_ATOM_INT(_32104) && IS_ATOM_INT(_32105))
    _32106 = 0;
    else
    _32106 = (compare(_32104, _32105) == 0);
    DeRefDS(_32104);
    _32104 = NOVALUE;
    if (_32106 == 0)
    {
        _32106 = NOVALUE;
        goto L4; // [75] 99
    }
    else{
        _32106 = NOVALUE;
    }

    /** tokenize.e:593				sti += 2*/
    _72sti_64254 = _72sti_64254 + 2;

    /** tokenize.e:594				return raw_string( `"""`, state )*/
    RefDS(_32105);
    Ref(_state_64655);
    _32108 = _72raw_string(_32105, _state_64655, 0);
    DeRef(_state_64655);
    DeRef(_32098);
    _32098 = NOVALUE;
    _32103 = NOVALUE;
    return _32108;
L4: 
L3: 

    /** tokenize.e:598		scan_char(state)*/
    Ref(_state_64655);
    _72scan_char(_state_64655);

    /** tokenize.e:599		Token[TTYPE] = T_STRING*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);

    /** tokenize.e:600		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:601		Token[TFORM] = TF_STRING_SINGLE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);

    /** tokenize.e:603		while (Look != '"') do*/
L5: 
    if (_72Look_64257 == 34)
    goto L6; // [136] 254

    /** tokenize.e:604			if (Look = EOL) then */
    if (_72Look_64257 != 10)
    goto L7; // [144] 194

    /** tokenize.e:605				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64655)){
        _32111 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64655)->dbl));
    }
    else{
        _32111 = (object)*(((s1_ptr)_2)->base + _state_64655);
    }
    _2 = (object)SEQ_PTR(_32111);
    _32112 = (object)*(((s1_ptr)_2)->base + 8);
    _32111 = NOVALUE;
    if (_32112 == 0) {
        _32112 = NOVALUE;
        goto L8; // [160] 182
    }
    else {
        if (!IS_ATOM_INT(_32112) && DBL_PTR(_32112)->dbl == 0.0){
            _32112 = NOVALUE;
            goto L8; // [160] 182
        }
        _32112 = NOVALUE;
    }
    _32112 = NOVALUE;

    /** tokenize.e:606					Token[TDATA] = "\"" & Token[TDATA] -- & "\""*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32114 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32113) && IS_ATOM(_32114)) {
        Ref(_32114);
        Append(&_32115, _32113, _32114);
    }
    else if (IS_ATOM(_32113) && IS_SEQUENCE(_32114)) {
    }
    else {
        Concat((object_ptr)&_32115, _32113, _32114);
    }
    _32114 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32115;
    if( _1 != _32115 ){
        DeRef(_1);
    }
    _32115 = NOVALUE;
L8: 

    /** tokenize.e:608				report_error(ERR_EOL_STRING)*/
    _72report_error(5);

    /** tokenize.e:609				return TRUE*/
    DeRef(_state_64655);
    DeRef(_32098);
    _32098 = NOVALUE;
    DeRef(_32108);
    _32108 = NOVALUE;
    DeRef(_32103);
    _32103 = NOVALUE;
    return 1;
L7: 

    /** tokenize.e:612			scan_escaped_char(state)*/
    Ref(_state_64655);
    _72scan_escaped_char(_state_64655);

    /** tokenize.e:614			if ERR then */
    if (_72ERR_64258 == 0)
    {
        goto L5; // [203] 134
    }
    else{
    }

    /** tokenize.e:615				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64655)){
        _32116 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64655)->dbl));
    }
    else{
        _32116 = (object)*(((s1_ptr)_2)->base + _state_64655);
    }
    _2 = (object)SEQ_PTR(_32116);
    _32117 = (object)*(((s1_ptr)_2)->base + 8);
    _32116 = NOVALUE;
    if (_32117 == 0) {
        _32117 = NOVALUE;
        goto L9; // [218] 242
    }
    else {
        if (!IS_ATOM_INT(_32117) && DBL_PTR(_32117)->dbl == 0.0){
            _32117 = NOVALUE;
            goto L9; // [218] 242
        }
        _32117 = NOVALUE;
    }
    _32117 = NOVALUE;

    /** tokenize.e:616					Token[TDATA] = "\"" & Token[TDATA] & "\""*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32118 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[3];

        concat_list[0] = _32113;
        concat_list[1] = _32118;
        concat_list[2] = _32113;
        Concat_N((object_ptr)&_32119, concat_list, 3);
    }
    _32118 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32119;
    if( _1 != _32119 ){
        DeRef(_1);
    }
    _32119 = NOVALUE;
L9: 

    /** tokenize.e:618				return TRUE*/
    DeRef(_state_64655);
    DeRef(_32098);
    _32098 = NOVALUE;
    DeRef(_32108);
    _32108 = NOVALUE;
    DeRef(_32103);
    _32103 = NOVALUE;
    return 1;

    /** tokenize.e:620		end while*/
    goto L5; // [251] 134
L6: 

    /** tokenize.e:622		scan_char(state)*/
    Ref(_state_64655);
    _72scan_char(_state_64655);

    /** tokenize.e:624		if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64655)){
        _32120 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64655)->dbl));
    }
    else{
        _32120 = (object)*(((s1_ptr)_2)->base + _state_64655);
    }
    _2 = (object)SEQ_PTR(_32120);
    _32121 = (object)*(((s1_ptr)_2)->base + 8);
    _32120 = NOVALUE;
    if (_32121 == 0) {
        _32121 = NOVALUE;
        goto LA; // [271] 295
    }
    else {
        if (!IS_ATOM_INT(_32121) && DBL_PTR(_32121)->dbl == 0.0){
            _32121 = NOVALUE;
            goto LA; // [271] 295
        }
        _32121 = NOVALUE;
    }
    _32121 = NOVALUE;

    /** tokenize.e:625			Token[TDATA] = "\"" & Token[TDATA] & "\""*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32122 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[3];

        concat_list[0] = _32113;
        concat_list[1] = _32122;
        concat_list[2] = _32113;
        Concat_N((object_ptr)&_32123, concat_list, 3);
    }
    _32122 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32123;
    if( _1 != _32123 ){
        DeRef(_1);
    }
    _32123 = NOVALUE;
LA: 

    /** tokenize.e:627		return TRUE*/
    DeRef(_state_64655);
    DeRef(_32098);
    _32098 = NOVALUE;
    DeRef(_32108);
    _32108 = NOVALUE;
    DeRef(_32103);
    _32103 = NOVALUE;
    return 1;
    ;
}


object _72hex_val(object _h_64696)
{
    object _32130 = NOVALUE;
    object _32129 = NOVALUE;
    object _32128 = NOVALUE;
    object _32126 = NOVALUE;
    object _32125 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:631		if h >= 'a' then*/
    if (_h_64696 < 97)
    goto L1; // [5] 26

    /** tokenize.e:632			return h - 'a' + 10*/
    _32125 = _h_64696 - 97;
    if ((object)((uintptr_t)_32125 +(uintptr_t) HIGH_BITS) >= 0){
        _32125 = NewDouble((eudouble)_32125);
    }
    if (IS_ATOM_INT(_32125)) {
        _32126 = _32125 + 10;
        if ((object)((uintptr_t)_32126 + (uintptr_t)HIGH_BITS) >= 0){
            _32126 = NewDouble((eudouble)_32126);
        }
    }
    else {
        _32126 = NewDouble(DBL_PTR(_32125)->dbl + (eudouble)10);
    }
    DeRef(_32125);
    _32125 = NOVALUE;
    return _32126;
    goto L2; // [23] 60
L1: 

    /** tokenize.e:633		elsif h >= 'A' then*/
    if (_h_64696 < 65)
    goto L3; // [28] 49

    /** tokenize.e:634			return h - 'A' + 10*/
    _32128 = _h_64696 - 65;
    if ((object)((uintptr_t)_32128 +(uintptr_t) HIGH_BITS) >= 0){
        _32128 = NewDouble((eudouble)_32128);
    }
    if (IS_ATOM_INT(_32128)) {
        _32129 = _32128 + 10;
        if ((object)((uintptr_t)_32129 + (uintptr_t)HIGH_BITS) >= 0){
            _32129 = NewDouble((eudouble)_32129);
        }
    }
    else {
        _32129 = NewDouble(DBL_PTR(_32128)->dbl + (eudouble)10);
    }
    DeRef(_32128);
    _32128 = NOVALUE;
    DeRef(_32126);
    _32126 = NOVALUE;
    return _32129;
    goto L2; // [46] 60
L3: 

    /** tokenize.e:636			return h - '0'*/
    _32130 = _h_64696 - 48;
    if ((object)((uintptr_t)_32130 +(uintptr_t) HIGH_BITS) >= 0){
        _32130 = NewDouble((eudouble)_32130);
    }
    DeRef(_32129);
    _32129 = NOVALUE;
    DeRef(_32126);
    _32126 = NOVALUE;
    return _32130;
L2: 
    ;
}


object _72start_hex()
{
    object _32141 = NOVALUE;
    object _32140 = NOVALUE;
    object _32139 = NOVALUE;
    object _32138 = NOVALUE;
    object _32137 = NOVALUE;
    object _32136 = NOVALUE;
    object _32135 = NOVALUE;
    object _32134 = NOVALUE;
    object _32133 = NOVALUE;
    object _32132 = NOVALUE;
    object _32131 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:641		if Look = '#' and Hex_Char( lookahead( 1 ) ) then*/
    _32131 = (_72Look_64257 == 35);
    if (_32131 == 0) {
        goto L1; // [9] 37
    }
    Ref(_72g_state_64303);
    _32133 = _72lookahead(1, _72g_state_64303);
    _32134 = _72Hex_Char(_32133);
    _32133 = NOVALUE;
    if (_32134 == 0) {
        DeRef(_32134);
        _32134 = NOVALUE;
        goto L1; // [25] 37
    }
    else {
        if (!IS_ATOM_INT(_32134) && DBL_PTR(_32134)->dbl == 0.0){
            DeRef(_32134);
            _32134 = NOVALUE;
            goto L1; // [25] 37
        }
        DeRef(_32134);
        _32134 = NOVALUE;
    }
    DeRef(_32134);
    _32134 = NOVALUE;

    /** tokenize.e:642			return TRUE*/
    DeRef(_32131);
    _32131 = NOVALUE;
    return 1;
    goto L2; // [34] 107
L1: 

    /** tokenize.e:643		elsif Look = '0' and lookahead( 1 ) = 'x' and Hex_Char( lookahead( 2 ) ) then*/
    _32135 = (_72Look_64257 == 48);
    if (_32135 == 0) {
        _32136 = 0;
        goto L3; // [45] 64
    }
    Ref(_72g_state_64303);
    _32137 = _72lookahead(1, _72g_state_64303);
    if (IS_ATOM_INT(_32137)) {
        _32138 = (_32137 == 120);
    }
    else {
        _32138 = binary_op(EQUALS, _32137, 120);
    }
    DeRef(_32137);
    _32137 = NOVALUE;
    if (IS_ATOM_INT(_32138))
    _32136 = (_32138 != 0);
    else
    _32136 = DBL_PTR(_32138)->dbl != 0.0;
L3: 
    if (_32136 == 0) {
        goto L4; // [64] 100
    }
    Ref(_72g_state_64303);
    _32140 = _72lookahead(2, _72g_state_64303);
    _32141 = _72Hex_Char(_32140);
    _32140 = NOVALUE;
    if (_32141 == 0) {
        DeRef(_32141);
        _32141 = NOVALUE;
        goto L4; // [80] 100
    }
    else {
        if (!IS_ATOM_INT(_32141) && DBL_PTR(_32141)->dbl == 0.0){
            DeRef(_32141);
            _32141 = NOVALUE;
            goto L4; // [80] 100
        }
        DeRef(_32141);
        _32141 = NOVALUE;
    }
    DeRef(_32141);
    _32141 = NOVALUE;

    /** tokenize.e:644			sti += 1*/
    _72sti_64254 = _72sti_64254 + 1;

    /** tokenize.e:645			return TRUE*/
    DeRef(_32131);
    _32131 = NOVALUE;
    DeRef(_32138);
    _32138 = NOVALUE;
    DeRef(_32135);
    _32135 = NOVALUE;
    return 1;
    goto L2; // [97] 107
L4: 

    /** tokenize.e:647			return FALSE*/
    DeRef(_32131);
    _32131 = NOVALUE;
    DeRef(_32138);
    _32138 = NOVALUE;
    DeRef(_32135);
    _32135 = NOVALUE;
    return 0;
L2: 
    ;
}


object _72scan_hex(object _state_64726)
{
    object _startSti_64730 = NOVALUE;
    object _32158 = NOVALUE;
    object _32157 = NOVALUE;
    object _32156 = NOVALUE;
    object _32155 = NOVALUE;
    object _32153 = NOVALUE;
    object _32152 = NOVALUE;
    object _32151 = NOVALUE;
    object _32150 = NOVALUE;
    object _32149 = NOVALUE;
    object _32148 = NOVALUE;
    object _32147 = NOVALUE;
    object _32145 = NOVALUE;
    object _32143 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:652		if not start_hex() then*/
    _32143 = _72start_hex();
    if (IS_ATOM_INT(_32143)) {
        if (_32143 != 0){
            DeRef(_32143);
            _32143 = NOVALUE;
            goto L1; // [6] 16
        }
    }
    else {
        if (DBL_PTR(_32143)->dbl != 0.0){
            DeRef(_32143);
            _32143 = NOVALUE;
            goto L1; // [6] 16
        }
    }
    DeRef(_32143);
    _32143 = NOVALUE;

    /** tokenize.e:653			return FALSE*/
    DeRef(_state_64726);
    return 0;
L1: 

    /** tokenize.e:656		integer startSti = sti*/
    _startSti_64730 = _72sti_64254;

    /** tokenize.e:658		scan_char(state)*/
    Ref(_state_64726);
    _72scan_char(_state_64726);

    /** tokenize.e:660		if not Hex_Char(Look) then*/
    _32145 = _72Hex_Char(_72Look_64257);
    if (IS_ATOM_INT(_32145)) {
        if (_32145 != 0){
            DeRef(_32145);
            _32145 = NOVALUE;
            goto L2; // [36] 49
        }
    }
    else {
        if (DBL_PTR(_32145)->dbl != 0.0){
            DeRef(_32145);
            _32145 = NOVALUE;
            goto L2; // [36] 49
        }
    }
    DeRef(_32145);
    _32145 = NOVALUE;

    /** tokenize.e:661			report_error(ERR_HEX) return FALSE*/
    _72report_error(6);
    DeRef(_state_64726);
    return 0;
L2: 

    /** tokenize.e:664		Token[TTYPE] = T_NUMBER*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);

    /** tokenize.e:665		Token[TFORM] = TF_HEX*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:667		if eumem:ram_space[state][STRING_NUMBERS] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64726)){
        _32147 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64726)->dbl));
    }
    else{
        _32147 = (object)*(((s1_ptr)_2)->base + _state_64726);
    }
    _2 = (object)SEQ_PTR(_32147);
    _32148 = (object)*(((s1_ptr)_2)->base + 3);
    _32147 = NOVALUE;
    if (_32148 == 0) {
        _32148 = NOVALUE;
        goto L3; // [77] 128
    }
    else {
        if (!IS_ATOM_INT(_32148) && DBL_PTR(_32148)->dbl == 0.0){
            _32148 = NOVALUE;
            goto L3; // [77] 128
        }
        _32148 = NOVALUE;
    }
    _32148 = NOVALUE;

    /** tokenize.e:668			while Hex_Char(Look) do*/
L4: 
    _32149 = _72Hex_Char(_72Look_64257);
    if (_32149 <= 0) {
        if (_32149 == 0) {
            DeRef(_32149);
            _32149 = NOVALUE;
            goto L5; // [91] 104
        }
        else {
            if (!IS_ATOM_INT(_32149) && DBL_PTR(_32149)->dbl == 0.0){
                DeRef(_32149);
                _32149 = NOVALUE;
                goto L5; // [91] 104
            }
            DeRef(_32149);
            _32149 = NOVALUE;
        }
    }
    DeRef(_32149);
    _32149 = NOVALUE;

    /** tokenize.e:669				scan_char(state)*/
    Ref(_state_64726);
    _72scan_char(_state_64726);

    /** tokenize.e:670			end while*/
    goto L4; // [101] 85
L5: 

    /** tokenize.e:672			Token[TDATA] = source_text[startSti .. sti - 1]*/
    _32150 = _72sti_64254 - 1;
    rhs_slice_target = (object_ptr)&_32151;
    RHS_Slice(_72source_text_64253, _startSti_64730, _32150);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32151;
    if( _1 != _32151 ){
        DeRef(_1);
    }
    _32151 = NOVALUE;
    goto L6; // [125] 209
L3: 

    /** tokenize.e:674			Token[TDATA] = hex_val(Look)*/
    _32152 = _72hex_val(_72Look_64257);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32152;
    if( _1 != _32152 ){
        DeRef(_1);
    }
    _32152 = NOVALUE;

    /** tokenize.e:675			scan_char(state)*/
    Ref(_state_64726);
    _72scan_char(_state_64726);

    /** tokenize.e:677			while Hex_Char(Look) do*/
L7: 
    _32153 = _72Hex_Char(_72Look_64257);
    if (_32153 <= 0) {
        if (_32153 == 0) {
            DeRef(_32153);
            _32153 = NOVALUE;
            goto L8; // [158] 208
        }
        else {
            if (!IS_ATOM_INT(_32153) && DBL_PTR(_32153)->dbl == 0.0){
                DeRef(_32153);
                _32153 = NOVALUE;
                goto L8; // [158] 208
            }
            DeRef(_32153);
            _32153 = NOVALUE;
        }
    }
    DeRef(_32153);
    _32153 = NOVALUE;

    /** tokenize.e:678				if Look != '_' then*/
    if (_72Look_64257 == 95)
    goto L9; // [165] 198

    /** tokenize.e:679					Token[TDATA] = Token[TDATA] * 16 + hex_val(Look)*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32155 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_32155)) {
        if (_32155 == (short)_32155){
            _32156 = _32155 * 16;
        }
        else{
            _32156 = NewDouble(_32155 * (eudouble)16);
        }
    }
    else {
        _32156 = binary_op(MULTIPLY, _32155, 16);
    }
    _32155 = NOVALUE;
    _32157 = _72hex_val(_72Look_64257);
    if (IS_ATOM_INT(_32156) && IS_ATOM_INT(_32157)) {
        _32158 = _32156 + _32157;
        if ((object)((uintptr_t)_32158 + (uintptr_t)HIGH_BITS) >= 0){
            _32158 = NewDouble((eudouble)_32158);
        }
    }
    else {
        _32158 = binary_op(PLUS, _32156, _32157);
    }
    DeRef(_32156);
    _32156 = NOVALUE;
    DeRef(_32157);
    _32157 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32158;
    if( _1 != _32158 ){
        DeRef(_1);
    }
    _32158 = NOVALUE;
L9: 

    /** tokenize.e:681				scan_char(state)*/
    Ref(_state_64726);
    _72scan_char(_state_64726);

    /** tokenize.e:682			end while*/
    goto L7; // [205] 152
L8: 
L6: 

    /** tokenize.e:685		return TRUE*/
    DeRef(_state_64726);
    DeRef(_32150);
    _32150 = NOVALUE;
    return 1;
    ;
}


object _72scan_integer(object _state_64754)
{
    object _i_64755 = NOVALUE;
    object _32162 = NOVALUE;
    object _32161 = NOVALUE;
    object _32159 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:690		atom i = 0*/
    DeRef(_i_64755);
    _i_64755 = 0;

    /** tokenize.e:692		while Digit_Char(Look) do*/
L1: 
    _32159 = _72Digit_Char(_72Look_64257);
    if (_32159 <= 0) {
        if (_32159 == 0) {
            DeRef(_32159);
            _32159 = NOVALUE;
            goto L2; // [17] 55
        }
        else {
            if (!IS_ATOM_INT(_32159) && DBL_PTR(_32159)->dbl == 0.0){
                DeRef(_32159);
                _32159 = NOVALUE;
                goto L2; // [17] 55
            }
            DeRef(_32159);
            _32159 = NOVALUE;
        }
    }
    DeRef(_32159);
    _32159 = NOVALUE;

    /** tokenize.e:693			if (Look != '_') then*/
    if (_72Look_64257 == 95)
    goto L3; // [24] 45

    /** tokenize.e:694				i = (i * 10) + (Look - '0')*/
    if (IS_ATOM_INT(_i_64755)) {
        if (_i_64755 == (short)_i_64755){
            _32161 = _i_64755 * 10;
        }
        else{
            _32161 = NewDouble(_i_64755 * (eudouble)10);
        }
    }
    else {
        _32161 = NewDouble(DBL_PTR(_i_64755)->dbl * (eudouble)10);
    }
    _32162 = _72Look_64257 - 48;
    if ((object)((uintptr_t)_32162 +(uintptr_t) HIGH_BITS) >= 0){
        _32162 = NewDouble((eudouble)_32162);
    }
    DeRef(_i_64755);
    if (IS_ATOM_INT(_32161) && IS_ATOM_INT(_32162)) {
        _i_64755 = _32161 + _32162;
        if ((object)((uintptr_t)_i_64755 + (uintptr_t)HIGH_BITS) >= 0){
            _i_64755 = NewDouble((eudouble)_i_64755);
        }
    }
    else {
        if (IS_ATOM_INT(_32161)) {
            _i_64755 = NewDouble((eudouble)_32161 + DBL_PTR(_32162)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32162)) {
                _i_64755 = NewDouble(DBL_PTR(_32161)->dbl + (eudouble)_32162);
            }
            else
            _i_64755 = NewDouble(DBL_PTR(_32161)->dbl + DBL_PTR(_32162)->dbl);
        }
    }
    DeRef(_32161);
    _32161 = NOVALUE;
    DeRef(_32162);
    _32162 = NOVALUE;
L3: 

    /** tokenize.e:697			scan_char(state)*/
    Ref(_state_64754);
    _72scan_char(_state_64754);

    /** tokenize.e:698		end while*/
    goto L1; // [52] 11
L2: 

    /** tokenize.e:700		return i*/
    DeRef(_state_64754);
    return _i_64755;
    ;
}


object _72scan_fraction(object _v_64765, object _state_64766)
{
    object _d_64770 = NOVALUE;
    object _32169 = NOVALUE;
    object _32168 = NOVALUE;
    object _32166 = NOVALUE;
    object _32164 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:704		if not Digit_Char(Look) then report_error(ERR_DECIMAL) return 0 end if*/
    _32164 = _72Digit_Char(_72Look_64257);
    if (IS_ATOM_INT(_32164)) {
        if (_32164 != 0){
            DeRef(_32164);
            _32164 = NOVALUE;
            goto L1; // [9] 20
        }
    }
    else {
        if (DBL_PTR(_32164)->dbl != 0.0){
            DeRef(_32164);
            _32164 = NOVALUE;
            goto L1; // [9] 20
        }
    }
    DeRef(_32164);
    _32164 = NOVALUE;
    _72report_error(7);
    DeRef(_v_64765);
    DeRef(_state_64766);
    DeRef(_d_64770);
    return 0;
L1: 

    /** tokenize.e:706		atom d = 10*/
    DeRef(_d_64770);
    _d_64770 = 10;

    /** tokenize.e:707		while Digit_Char(Look) do*/
L2: 
    _32166 = _72Digit_Char(_72Look_64257);
    if (_32166 <= 0) {
        if (_32166 == 0) {
            DeRef(_32166);
            _32166 = NOVALUE;
            goto L3; // [36] 80
        }
        else {
            if (!IS_ATOM_INT(_32166) && DBL_PTR(_32166)->dbl == 0.0){
                DeRef(_32166);
                _32166 = NOVALUE;
                goto L3; // [36] 80
            }
            DeRef(_32166);
            _32166 = NOVALUE;
        }
    }
    DeRef(_32166);
    _32166 = NOVALUE;

    /** tokenize.e:708			if Look != '_' then*/
    if (_72Look_64257 == 95)
    goto L4; // [43] 70

    /** tokenize.e:709				v += (Look - '0') / d*/
    _32168 = _72Look_64257 - 48;
    if ((object)((uintptr_t)_32168 +(uintptr_t) HIGH_BITS) >= 0){
        _32168 = NewDouble((eudouble)_32168);
    }
    if (IS_ATOM_INT(_32168) && IS_ATOM_INT(_d_64770)) {
        _32169 = (_32168 % _d_64770) ? NewDouble((eudouble)_32168 / _d_64770) : (_32168 / _d_64770);
    }
    else {
        if (IS_ATOM_INT(_32168)) {
            _32169 = NewDouble((eudouble)_32168 / DBL_PTR(_d_64770)->dbl);
        }
        else {
            if (IS_ATOM_INT(_d_64770)) {
                _32169 = NewDouble(DBL_PTR(_32168)->dbl / (eudouble)_d_64770);
            }
            else
            _32169 = NewDouble(DBL_PTR(_32168)->dbl / DBL_PTR(_d_64770)->dbl);
        }
    }
    DeRef(_32168);
    _32168 = NOVALUE;
    _0 = _v_64765;
    if (IS_ATOM_INT(_v_64765) && IS_ATOM_INT(_32169)) {
        _v_64765 = _v_64765 + _32169;
        if ((object)((uintptr_t)_v_64765 + (uintptr_t)HIGH_BITS) >= 0){
            _v_64765 = NewDouble((eudouble)_v_64765);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64765)) {
            _v_64765 = NewDouble((eudouble)_v_64765 + DBL_PTR(_32169)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32169)) {
                _v_64765 = NewDouble(DBL_PTR(_v_64765)->dbl + (eudouble)_32169);
            }
            else
            _v_64765 = NewDouble(DBL_PTR(_v_64765)->dbl + DBL_PTR(_32169)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32169);
    _32169 = NOVALUE;

    /** tokenize.e:710				d *= 10*/
    _0 = _d_64770;
    if (IS_ATOM_INT(_d_64770)) {
        if (_d_64770 == (short)_d_64770){
            _d_64770 = _d_64770 * 10;
        }
        else{
            _d_64770 = NewDouble(_d_64770 * (eudouble)10);
        }
    }
    else {
        _d_64770 = NewDouble(DBL_PTR(_d_64770)->dbl * (eudouble)10);
    }
    DeRef(_0);
L4: 

    /** tokenize.e:712			scan_char(state)*/
    Ref(_state_64766);
    _72scan_char(_state_64766);

    /** tokenize.e:713		end while*/
    goto L2; // [77] 30
L3: 

    /** tokenize.e:714		return v*/
    DeRef(_state_64766);
    DeRef(_d_64770);
    return _v_64765;
    ;
}


object _72scan_exponent(object _v_64781, object _state_64782)
{
    object _e_64783 = NOVALUE;
    object _32190 = NOVALUE;
    object _32188 = NOVALUE;
    object _32185 = NOVALUE;
    object _32179 = NOVALUE;
    object _32176 = NOVALUE;
    object _32174 = NOVALUE;
    object _32173 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:720		if ((Look != 'e') and (Look != 'E')) then return v end if*/
    _32173 = (_72Look_64257 != 101);
    if (_32173 == 0) {
        _32174 = 0;
        goto L1; // [9] 23
    }
    _32176 = (_72Look_64257 != 69);
    _32174 = (_32176 != 0);
L1: 
    if (_32174 == 0)
    {
        _32174 = NOVALUE;
        goto L2; // [23] 31
    }
    else{
        _32174 = NOVALUE;
    }
    DeRef(_state_64782);
    DeRef(_e_64783);
    DeRef(_32176);
    _32176 = NOVALUE;
    DeRef(_32173);
    _32173 = NOVALUE;
    return _v_64781;
L2: 

    /** tokenize.e:721		scan_char(state)*/
    Ref(_state_64782);
    _72scan_char(_state_64782);

    /** tokenize.e:723		if (Look = '-') then*/
    if (_72Look_64257 != 45)
    goto L3; // [40] 61

    /** tokenize.e:724			scan_char(state)*/
    Ref(_state_64782);
    _72scan_char(_state_64782);

    /** tokenize.e:725			e = -scan_integer(state)*/
    Ref(_state_64782);
    _32179 = _72scan_integer(_state_64782);
    DeRef(_e_64783);
    if (IS_ATOM_INT(_32179)) {
        if ((uintptr_t)_32179 == (uintptr_t)HIGH_BITS){
            _e_64783 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _e_64783 = - _32179;
        }
    }
    else {
        _e_64783 = unary_op(UMINUS, _32179);
    }
    DeRef(_32179);
    _32179 = NOVALUE;
    goto L4; // [58] 80
L3: 

    /** tokenize.e:727			if (Look = '+') then scan_char(state) end if*/
    if (_72Look_64257 != 43)
    goto L5; // [65] 73
    Ref(_state_64782);
    _72scan_char(_state_64782);
L5: 

    /** tokenize.e:728			e = scan_integer(state)*/
    Ref(_state_64782);
    _0 = _e_64783;
    _e_64783 = _72scan_integer(_state_64782);
    DeRef(_0);
L4: 

    /** tokenize.e:731		if e > 308 then*/
    if (binary_op_a(LESSEQ, _e_64783, 308)){
        goto L6; // [84] 137
    }

    /** tokenize.e:732			v *= power(10, 308)*/
    _32185 = power(10, 308);
    _0 = _v_64781;
    if (IS_ATOM_INT(_v_64781) && IS_ATOM_INT(_32185)) {
        if (_v_64781 == (short)_v_64781 && _32185 <= INT15 && _32185 >= -INT15){
            _v_64781 = _v_64781 * _32185;
        }
        else{
            _v_64781 = NewDouble(_v_64781 * (eudouble)_32185);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64781)) {
            _v_64781 = NewDouble((eudouble)_v_64781 * DBL_PTR(_32185)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32185)) {
                _v_64781 = NewDouble(DBL_PTR(_v_64781)->dbl * (eudouble)_32185);
            }
            else
            _v_64781 = NewDouble(DBL_PTR(_v_64781)->dbl * DBL_PTR(_32185)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32185);
    _32185 = NOVALUE;

    /** tokenize.e:733			if e > 1000 then e = 1000 end if*/
    if (binary_op_a(LESSEQ, _e_64783, 1000)){
        goto L7; // [100] 108
    }
    DeRef(_e_64783);
    _e_64783 = 1000;
L7: 

    /** tokenize.e:734			for i = 1 to e - 308 do*/
    if (IS_ATOM_INT(_e_64783)) {
        _32188 = _e_64783 - 308;
        if ((object)((uintptr_t)_32188 +(uintptr_t) HIGH_BITS) >= 0){
            _32188 = NewDouble((eudouble)_32188);
        }
    }
    else {
        _32188 = NewDouble(DBL_PTR(_e_64783)->dbl - (eudouble)308);
    }
    {
        object _i_64807;
        _i_64807 = 1;
L8: 
        if (binary_op_a(GREATER, _i_64807, _32188)){
            goto L9; // [114] 134
        }

        /** tokenize.e:735				v *= 10*/
        _0 = _v_64781;
        if (IS_ATOM_INT(_v_64781)) {
            if (_v_64781 == (short)_v_64781){
                _v_64781 = _v_64781 * 10;
            }
            else{
                _v_64781 = NewDouble(_v_64781 * (eudouble)10);
            }
        }
        else {
            _v_64781 = NewDouble(DBL_PTR(_v_64781)->dbl * (eudouble)10);
        }
        DeRef(_0);

        /** tokenize.e:736			end for*/
        _0 = _i_64807;
        if (IS_ATOM_INT(_i_64807)) {
            _i_64807 = _i_64807 + 1;
            if ((object)((uintptr_t)_i_64807 +(uintptr_t) HIGH_BITS) >= 0){
                _i_64807 = NewDouble((eudouble)_i_64807);
            }
        }
        else {
            _i_64807 = binary_op_a(PLUS, _i_64807, 1);
        }
        DeRef(_0);
        goto L8; // [129] 121
L9: 
        ;
        DeRef(_i_64807);
    }
    goto LA; // [134] 148
L6: 

    /** tokenize.e:738			v *= power(10, e)*/
    if (IS_ATOM_INT(_e_64783)) {
        _32190 = power(10, _e_64783);
    }
    else {
        temp_d.dbl = (eudouble)10;
        _32190 = Dpower(&temp_d, DBL_PTR(_e_64783));
    }
    _0 = _v_64781;
    if (IS_ATOM_INT(_v_64781) && IS_ATOM_INT(_32190)) {
        if (_v_64781 == (short)_v_64781 && _32190 <= INT15 && _32190 >= -INT15){
            _v_64781 = _v_64781 * _32190;
        }
        else{
            _v_64781 = NewDouble(_v_64781 * (eudouble)_32190);
        }
    }
    else {
        if (IS_ATOM_INT(_v_64781)) {
            _v_64781 = NewDouble((eudouble)_v_64781 * DBL_PTR(_32190)->dbl);
        }
        else {
            if (IS_ATOM_INT(_32190)) {
                _v_64781 = NewDouble(DBL_PTR(_v_64781)->dbl * (eudouble)_32190);
            }
            else
            _v_64781 = NewDouble(DBL_PTR(_v_64781)->dbl * DBL_PTR(_32190)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_32190);
    _32190 = NOVALUE;
LA: 

    /** tokenize.e:740		return v*/
    DeRef(_state_64782);
    DeRef(_e_64783);
    DeRef(_32176);
    _32176 = NOVALUE;
    DeRef(_32173);
    _32173 = NOVALUE;
    DeRef(_32188);
    _32188 = NOVALUE;
    return _v_64781;
    ;
}


object _72scan_number(object _state_64815)
{
    object _startSti_64822 = NOVALUE;
    object _v_64836 = NOVALUE;
    object _32215 = NOVALUE;
    object _32214 = NOVALUE;
    object _32213 = NOVALUE;
    object _32212 = NOVALUE;
    object _32211 = NOVALUE;
    object _32209 = NOVALUE;
    object _32205 = NOVALUE;
    object _32204 = NOVALUE;
    object _32203 = NOVALUE;
    object _32202 = NOVALUE;
    object _32201 = NOVALUE;
    object _32200 = NOVALUE;
    object _32199 = NOVALUE;
    object _32198 = NOVALUE;
    object _32196 = NOVALUE;
    object _32195 = NOVALUE;
    object _32194 = NOVALUE;
    object _32192 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:744		if not Digit_Char(Look) then*/
    _32192 = _72Digit_Char(_72Look_64257);
    if (IS_ATOM_INT(_32192)) {
        if (_32192 != 0){
            DeRef(_32192);
            _32192 = NOVALUE;
            goto L1; // [9] 19
        }
    }
    else {
        if (DBL_PTR(_32192)->dbl != 0.0){
            DeRef(_32192);
            _32192 = NOVALUE;
            goto L1; // [9] 19
        }
    }
    DeRef(_32192);
    _32192 = NOVALUE;

    /** tokenize.e:745			return FALSE*/
    DeRef(_state_64815);
    return 0;
L1: 

    /** tokenize.e:748		Token[TTYPE] = T_NUMBER*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);

    /** tokenize.e:749		Token[TFORM] = TF_INT*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);

    /** tokenize.e:751		if eumem:ram_space[state][STRING_NUMBERS] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64815)){
        _32194 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64815)->dbl));
    }
    else{
        _32194 = (object)*(((s1_ptr)_2)->base + _state_64815);
    }
    _2 = (object)SEQ_PTR(_32194);
    _32195 = (object)*(((s1_ptr)_2)->base + 3);
    _32194 = NOVALUE;
    if (_32195 == 0) {
        _32195 = NOVALUE;
        goto L2; // [47] 170
    }
    else {
        if (!IS_ATOM_INT(_32195) && DBL_PTR(_32195)->dbl == 0.0){
            _32195 = NOVALUE;
            goto L2; // [47] 170
        }
        _32195 = NOVALUE;
    }
    _32195 = NOVALUE;

    /** tokenize.e:752			integer startSti = sti*/
    _startSti_64822 = _72sti_64254;

    /** tokenize.e:754			while Digit_Char(Look) do*/
L3: 
    _32196 = _72Digit_Char(_72Look_64257);
    if (_32196 <= 0) {
        if (_32196 == 0) {
            DeRef(_32196);
            _32196 = NOVALUE;
            goto L4; // [68] 81
        }
        else {
            if (!IS_ATOM_INT(_32196) && DBL_PTR(_32196)->dbl == 0.0){
                DeRef(_32196);
                _32196 = NOVALUE;
                goto L4; // [68] 81
            }
            DeRef(_32196);
            _32196 = NOVALUE;
        }
    }
    DeRef(_32196);
    _32196 = NOVALUE;

    /** tokenize.e:755				scan_char(state)*/
    Ref(_state_64815);
    _72scan_char(_state_64815);

    /** tokenize.e:756			end while*/
    goto L3; // [78] 62
L4: 

    /** tokenize.e:758			if Look = '.' and lookahead(1, state) != '.' then*/
    _32198 = (_72Look_64257 == 46);
    if (_32198 == 0) {
        goto L5; // [89] 144
    }
    Ref(_state_64815);
    _32200 = _72lookahead(1, _state_64815);
    if (IS_ATOM_INT(_32200)) {
        _32201 = (_32200 != 46);
    }
    else {
        _32201 = binary_op(NOTEQ, _32200, 46);
    }
    DeRef(_32200);
    _32200 = NOVALUE;
    if (_32201 == 0) {
        DeRef(_32201);
        _32201 = NOVALUE;
        goto L5; // [103] 144
    }
    else {
        if (!IS_ATOM_INT(_32201) && DBL_PTR(_32201)->dbl == 0.0){
            DeRef(_32201);
            _32201 = NOVALUE;
            goto L5; // [103] 144
        }
        DeRef(_32201);
        _32201 = NOVALUE;
    }
    DeRef(_32201);
    _32201 = NOVALUE;

    /** tokenize.e:759				Token[TFORM] = TF_ATOM*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);

    /** tokenize.e:760				scan_char(state)*/
    Ref(_state_64815);
    _72scan_char(_state_64815);

    /** tokenize.e:762				while Digit_Char(Look) do*/
L6: 
    _32202 = _72Digit_Char(_72Look_64257);
    if (_32202 <= 0) {
        if (_32202 == 0) {
            DeRef(_32202);
            _32202 = NOVALUE;
            goto L7; // [130] 143
        }
        else {
            if (!IS_ATOM_INT(_32202) && DBL_PTR(_32202)->dbl == 0.0){
                DeRef(_32202);
                _32202 = NOVALUE;
                goto L7; // [130] 143
            }
            DeRef(_32202);
            _32202 = NOVALUE;
        }
    }
    DeRef(_32202);
    _32202 = NOVALUE;

    /** tokenize.e:763					scan_char(state)*/
    Ref(_state_64815);
    _72scan_char(_state_64815);

    /** tokenize.e:764				end while*/
    goto L6; // [140] 124
L7: 
L5: 

    /** tokenize.e:767			Token[TDATA] = source_text[startSti .. sti - 1]*/
    _32203 = _72sti_64254 - 1;
    rhs_slice_target = (object_ptr)&_32204;
    RHS_Slice(_72source_text_64253, _startSti_64822, _32203);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32204;
    if( _1 != _32204 ){
        DeRef(_1);
    }
    _32204 = NOVALUE;
    goto L8; // [167] 310
L2: 

    /** tokenize.e:769			atom v*/

    /** tokenize.e:771			Token[TDATA] = scan_integer(state)*/
    Ref(_state_64815);
    _32205 = _72scan_integer(_state_64815);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32205;
    if( _1 != _32205 ){
        DeRef(_1);
    }
    _32205 = NOVALUE;

    /** tokenize.e:773			if not SUBSCRIPT then*/
    if (_72SUBSCRIPT_64751 != 0)
    goto L9; // [188] 307

    /** tokenize.e:774				v = Token[TDATA]*/
    DeRef(_v_64836);
    _2 = (object)SEQ_PTR(_72Token_64251);
    _v_64836 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_v_64836);

    /** tokenize.e:775				if Look = '.' then*/
    if (_72Look_64257 != 46)
    goto LA; // [203] 266

    /** tokenize.e:776					if lookahead() = '.' then*/
    Ref(_72g_state_64303);
    _32209 = _72lookahead(1, _72g_state_64303);
    if (binary_op_a(NOTEQ, _32209, 46)){
        DeRef(_32209);
        _32209 = NOVALUE;
        goto LB; // [216] 227
    }
    DeRef(_32209);
    _32209 = NOVALUE;

    /** tokenize.e:778						return TRUE*/
    DeRef(_v_64836);
    DeRef(_state_64815);
    DeRef(_32198);
    _32198 = NOVALUE;
    DeRef(_32203);
    _32203 = NOVALUE;
    return 1;
LB: 

    /** tokenize.e:781					scan_char()*/
    Ref(_72g_state_64303);
    _72scan_char(_72g_state_64303);

    /** tokenize.e:782					Token[TDATA] = scan_fraction(Token[TDATA], state)*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32211 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_32211);
    Ref(_state_64815);
    _32212 = _72scan_fraction(_32211, _state_64815);
    _32211 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32212;
    if( _1 != _32212 ){
        DeRef(_1);
    }
    _32212 = NOVALUE;

    /** tokenize.e:784					if ERR then return TRUE end if*/
    if (_72ERR_64258 == 0)
    {
        goto LC; // [257] 265
    }
    else{
    }
    DeRef(_v_64836);
    DeRef(_state_64815);
    DeRef(_32198);
    _32198 = NOVALUE;
    DeRef(_32203);
    _32203 = NOVALUE;
    return 1;
LC: 
LA: 

    /** tokenize.e:787				Token[TDATA] = scan_exponent(Token[TDATA], state)*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32213 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_32213);
    Ref(_state_64815);
    _32214 = _72scan_exponent(_32213, _state_64815);
    _32213 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32214;
    if( _1 != _32214 ){
        DeRef(_1);
    }
    _32214 = NOVALUE;

    /** tokenize.e:788				if v != Token[TDATA] then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32215 = (object)*(((s1_ptr)_2)->base + 2);
    if (binary_op_a(EQUALS, _v_64836, _32215)){
        _32215 = NOVALUE;
        goto LD; // [293] 306
    }
    _32215 = NOVALUE;

    /** tokenize.e:789					Token[TFORM] = TF_ATOM*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
LD: 
L9: 
    DeRef(_v_64836);
    _v_64836 = NOVALUE;
L8: 

    /** tokenize.e:794		return TRUE*/
    DeRef(_state_64815);
    DeRef(_32198);
    _32198 = NOVALUE;
    DeRef(_32203);
    _32203 = NOVALUE;
    return 1;
    ;
}


object _72scan_prefixed_number(object _state_64856)
{
    object _pfxCh_64860 = NOVALUE;
    object _firstCh_64866 = NOVALUE;
    object _startSti_64872 = NOVALUE;
    object _32238 = NOVALUE;
    object _32237 = NOVALUE;
    object _32236 = NOVALUE;
    object _32235 = NOVALUE;
    object _32234 = NOVALUE;
    object _32233 = NOVALUE;
    object _32232 = NOVALUE;
    object _32231 = NOVALUE;
    object _32230 = NOVALUE;
    object _32228 = NOVALUE;
    object _32226 = NOVALUE;
    object _32224 = NOVALUE;
    object _32221 = NOVALUE;
    object _32217 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:798		if not (Look = '0') then*/
    _32217 = (_72Look_64257 == 48);
    if (_32217 != 0)
    goto L1; // [9] 19
    _32217 = NOVALUE;

    /** tokenize.e:799			return FALSE*/
    DeRef(_state_64856);
    return 0;
L1: 

    /** tokenize.e:802		integer pfxCh = lookahead(1, state)*/
    Ref(_state_64856);
    _pfxCh_64860 = _72lookahead(1, _state_64856);
    if (!IS_ATOM_INT(_pfxCh_64860)) {
        _1 = (object)(DBL_PTR(_pfxCh_64860)->dbl);
        DeRefDS(_pfxCh_64860);
        _pfxCh_64860 = _1;
    }

    /** tokenize.e:803		if find(pfxCh, "btdx") = 0 then*/
    _32221 = find_from(_pfxCh_64860, _32220, 1);
    if (_32221 != 0)
    goto L2; // [35] 46

    /** tokenize.e:804			return FALSE*/
    DeRef(_state_64856);
    return 0;
L2: 

    /** tokenize.e:807		integer firstCh = lookahead(2, state)*/
    Ref(_state_64856);
    _firstCh_64866 = _72lookahead(2, _state_64856);
    if (!IS_ATOM_INT(_firstCh_64866)) {
        _1 = (object)(DBL_PTR(_firstCh_64866)->dbl);
        DeRefDS(_firstCh_64866);
        _firstCh_64866 = _1;
    }

    /** tokenize.e:808		if Digit_Char(firstCh) or Hex_Char(firstCh) then*/
    _32224 = _72Digit_Char(_firstCh_64866);
    if (IS_ATOM_INT(_32224)) {
        if (_32224 != 0) {
            goto L3; // [61] 74
        }
    }
    else {
        if (DBL_PTR(_32224)->dbl != 0.0) {
            goto L3; // [61] 74
        }
    }
    _32226 = _72Hex_Char(_firstCh_64866);
    if (_32226 == 0) {
        DeRef(_32226);
        _32226 = NOVALUE;
        goto L4; // [70] 238
    }
    else {
        if (!IS_ATOM_INT(_32226) && DBL_PTR(_32226)->dbl == 0.0){
            DeRef(_32226);
            _32226 = NOVALUE;
            goto L4; // [70] 238
        }
        DeRef(_32226);
        _32226 = NOVALUE;
    }
    DeRef(_32226);
    _32226 = NOVALUE;
L3: 

    /** tokenize.e:809			integer startSti = sti*/
    _startSti_64872 = _72sti_64254;

    /** tokenize.e:811			scan_char(state) -- skip the leading zero*/
    Ref(_state_64856);
    _72scan_char(_state_64856);

    /** tokenize.e:812			scan_char(state) -- skip prefix character*/
    Ref(_state_64856);
    _72scan_char(_state_64856);

    /** tokenize.e:814			Token[TTYPE] = T_NUMBER*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);

    /** tokenize.e:816			if pfxCh = 'x' then*/
    if (_pfxCh_64860 != 120)
    goto L5; // [101] 116

    /** tokenize.e:817				Token[TFORM] = TF_HEX*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    goto L6; // [113] 125
L5: 

    /** tokenize.e:819				Token[TFORM] = TF_INT*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
L6: 

    /** tokenize.e:822			while Hex_Char(Look) or Digit_Char(Look) do*/
L7: 
    _32228 = _72Hex_Char(_72Look_64257);
    if (IS_ATOM_INT(_32228)) {
        if (_32228 != 0) {
            goto L8; // [136] 151
        }
    }
    else {
        if (DBL_PTR(_32228)->dbl != 0.0) {
            goto L8; // [136] 151
        }
    }
    _32230 = _72Digit_Char(_72Look_64257);
    if (_32230 <= 0) {
        if (_32230 == 0) {
            DeRef(_32230);
            _32230 = NOVALUE;
            goto L9; // [147] 161
        }
        else {
            if (!IS_ATOM_INT(_32230) && DBL_PTR(_32230)->dbl == 0.0){
                DeRef(_32230);
                _32230 = NOVALUE;
                goto L9; // [147] 161
            }
            DeRef(_32230);
            _32230 = NOVALUE;
        }
    }
    DeRef(_32230);
    _32230 = NOVALUE;
L8: 

    /** tokenize.e:823				scan_char(state)*/
    Ref(_state_64856);
    _72scan_char(_state_64856);

    /** tokenize.e:824			end while*/
    goto L7; // [158] 130
L9: 

    /** tokenize.e:826			if eumem:ram_space[state][STRING_NUMBERS] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64856)){
        _32231 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64856)->dbl));
    }
    else{
        _32231 = (object)*(((s1_ptr)_2)->base + _state_64856);
    }
    _2 = (object)SEQ_PTR(_32231);
    _32232 = (object)*(((s1_ptr)_2)->base + 3);
    _32231 = NOVALUE;
    if (_32232 == 0) {
        _32232 = NOVALUE;
        goto LA; // [173] 200
    }
    else {
        if (!IS_ATOM_INT(_32232) && DBL_PTR(_32232)->dbl == 0.0){
            _32232 = NOVALUE;
            goto LA; // [173] 200
        }
        _32232 = NOVALUE;
    }
    _32232 = NOVALUE;

    /** tokenize.e:827				Token[TDATA] = source_text[startSti .. sti - 1]*/
    _32233 = _72sti_64254 - 1;
    rhs_slice_target = (object_ptr)&_32234;
    RHS_Slice(_72source_text_64253, _startSti_64872, _32233);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32234;
    if( _1 != _32234 ){
        DeRef(_1);
    }
    _32234 = NOVALUE;
    goto LB; // [197] 231
LA: 

    /** tokenize.e:829				Token[TDATA] = convert:to_number(source_text[startSti + 2 .. sti - 1])*/
    _32235 = _startSti_64872 + 2;
    if ((object)((uintptr_t)_32235 + (uintptr_t)HIGH_BITS) >= 0){
        _32235 = NewDouble((eudouble)_32235);
    }
    _32236 = _72sti_64254 - 1;
    rhs_slice_target = (object_ptr)&_32237;
    RHS_Slice(_72source_text_64253, _32235, _32236);
    _32238 = _14to_number(_32237, 0);
    _32237 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32238;
    if( _1 != _32238 ){
        DeRef(_1);
    }
    _32238 = NOVALUE;
LB: 

    /** tokenize.e:832			return TRUE*/
    DeRef(_state_64856);
    DeRef(_32224);
    _32224 = NOVALUE;
    DeRef(_32235);
    _32235 = NOVALUE;
    DeRef(_32236);
    _32236 = NOVALUE;
    DeRef(_32228);
    _32228 = NOVALUE;
    DeRef(_32233);
    _32233 = NOVALUE;
    return 1;
L4: 

    /** tokenize.e:835		return FALSE*/
    DeRef(_state_64856);
    DeRef(_32224);
    _32224 = NOVALUE;
    DeRef(_32235);
    _32235 = NOVALUE;
    DeRef(_32236);
    _32236 = NOVALUE;
    DeRef(_32228);
    _32228 = NOVALUE;
    DeRef(_32233);
    _32233 = NOVALUE;
    return 0;
    ;
}


object _72hex_string(object _textdata_64892, object _string_type_64893)
{
    object _ch_64894 = NOVALUE;
    object _digit_64895 = NOVALUE;
    object _val_64896 = NOVALUE;
    object _nibble_64897 = NOVALUE;
    object _maxnibbles_64898 = NOVALUE;
    object _string_text_64899 = NOVALUE;
    object _32254 = NOVALUE;
    object _32253 = NOVALUE;
    object _32243 = NOVALUE;
    object _32242 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_string_type_64893)) {
        _1 = (object)(DBL_PTR(_string_type_64893)->dbl);
        DeRefDS(_string_type_64893);
        _string_type_64893 = _1;
    }

    /** tokenize.e:846		switch string_type do*/
    _0 = _string_type_64893;
    switch ( _0 ){ 

        /** tokenize.e:847			case 'x' then*/
        case 120:

        /** tokenize.e:848				maxnibbles = 2*/
        _maxnibbles_64898 = 2;
        goto L1; // [21] 60

        /** tokenize.e:849			case 'u' then*/
        case 117:

        /** tokenize.e:850				maxnibbles = 4*/
        _maxnibbles_64898 = 4;
        goto L1; // [32] 60

        /** tokenize.e:851			case 'U' then*/
        case 85:

        /** tokenize.e:852				maxnibbles = 8*/
        _maxnibbles_64898 = 8;
        goto L1; // [43] 60

        /** tokenize.e:853			case else*/
        default:

        /** tokenize.e:854				printf(2, "tokenize.e: Unknown base code '%s', ignored.\n", {string_type})*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _string_type_64893;
        _32242 = MAKE_SEQ(_1);
        EPrintf(2, _32241, _32242);
        DeRefDS(_32242);
        _32242 = NOVALUE;
    ;}L1: 

    /** tokenize.e:857		string_text = ""*/
    RefDS(_21928);
    DeRef(_string_text_64899);
    _string_text_64899 = _21928;

    /** tokenize.e:858		nibble = 1*/
    _nibble_64897 = 1;

    /** tokenize.e:859		val = -1*/
    DeRef(_val_64896);
    _val_64896 = -1;

    /** tokenize.e:860		for cpos = 1 to length(textdata) do*/
    if (IS_SEQUENCE(_textdata_64892)){
            _32243 = SEQ_PTR(_textdata_64892)->length;
    }
    else {
        _32243 = 1;
    }
    {
        object _cpos_64909;
        _cpos_64909 = 1;
L2: 
        if (_cpos_64909 > _32243){
            goto L3; // [82] 229
        }

        /** tokenize.e:861			ch = textdata[cpos]*/
        _2 = (object)SEQ_PTR(_textdata_64892);
        _ch_64894 = (object)*(((s1_ptr)_2)->base + _cpos_64909);
        if (!IS_ATOM_INT(_ch_64894))
        _ch_64894 = (object)DBL_PTR(_ch_64894)->dbl;

        /** tokenize.e:863			digit = find(ch, "0123456789ABCDEFabcdef _\t\n\r")*/
        _digit_64895 = find_from(_ch_64894, _32245, 1);

        /** tokenize.e:864			if digit = 0 then*/
        if (_digit_64895 != 0)
        goto L4; // [104] 115

        /** tokenize.e:865				return 0*/
        DeRefDS(_textdata_64892);
        DeRef(_val_64896);
        DeRef(_string_text_64899);
        return 0;
L4: 

        /** tokenize.e:868			if digit < 23 then*/
        if (_digit_64895 >= 23)
        goto L5; // [117] 198

        /** tokenize.e:869				if digit > 16 then*/
        if (_digit_64895 <= 16)
        goto L6; // [123] 134

        /** tokenize.e:870					digit -= 6*/
        _digit_64895 = _digit_64895 - 6;
L6: 

        /** tokenize.e:872				if nibble = 1 then*/
        if (_nibble_64897 != 1)
        goto L7; // [136] 149

        /** tokenize.e:873					val = digit - 1*/
        DeRef(_val_64896);
        _val_64896 = _digit_64895 - 1;
        if ((object)((uintptr_t)_val_64896 +(uintptr_t) HIGH_BITS) >= 0){
            _val_64896 = NewDouble((eudouble)_val_64896);
        }
        goto L8; // [146] 189
L7: 

        /** tokenize.e:875					val = val * 16 + digit - 1*/
        if (IS_ATOM_INT(_val_64896)) {
            if (_val_64896 == (short)_val_64896){
                _32253 = _val_64896 * 16;
            }
            else{
                _32253 = NewDouble(_val_64896 * (eudouble)16);
            }
        }
        else {
            _32253 = NewDouble(DBL_PTR(_val_64896)->dbl * (eudouble)16);
        }
        if (IS_ATOM_INT(_32253)) {
            _32254 = _32253 + _digit_64895;
            if ((object)((uintptr_t)_32254 + (uintptr_t)HIGH_BITS) >= 0){
                _32254 = NewDouble((eudouble)_32254);
            }
        }
        else {
            _32254 = NewDouble(DBL_PTR(_32253)->dbl + (eudouble)_digit_64895);
        }
        DeRef(_32253);
        _32253 = NOVALUE;
        DeRef(_val_64896);
        if (IS_ATOM_INT(_32254)) {
            _val_64896 = _32254 - 1;
            if ((object)((uintptr_t)_val_64896 +(uintptr_t) HIGH_BITS) >= 0){
                _val_64896 = NewDouble((eudouble)_val_64896);
            }
        }
        else {
            _val_64896 = NewDouble(DBL_PTR(_32254)->dbl - (eudouble)1);
        }
        DeRef(_32254);
        _32254 = NOVALUE;

        /** tokenize.e:876					if nibble = maxnibbles then*/
        if (_nibble_64897 != _maxnibbles_64898)
        goto L9; // [167] 188

        /** tokenize.e:877						string_text &= val*/
        Ref(_val_64896);
        Append(&_string_text_64899, _string_text_64899, _val_64896);

        /** tokenize.e:878						val = -1*/
        DeRef(_val_64896);
        _val_64896 = -1;

        /** tokenize.e:879						nibble = 0*/
        _nibble_64897 = 0;
L9: 
L8: 

        /** tokenize.e:882				nibble += 1*/
        _nibble_64897 = _nibble_64897 + 1;
        goto LA; // [195] 222
L5: 

        /** tokenize.e:885				if val >= 0 then*/
        if (binary_op_a(LESS, _val_64896, 0)){
            goto LB; // [200] 216
        }

        /** tokenize.e:887					string_text &= val*/
        Ref(_val_64896);
        Append(&_string_text_64899, _string_text_64899, _val_64896);

        /** tokenize.e:888					val = -1*/
        DeRef(_val_64896);
        _val_64896 = -1;
LB: 

        /** tokenize.e:890				nibble = 1*/
        _nibble_64897 = 1;
LA: 

        /** tokenize.e:892		end for*/
        _cpos_64909 = _cpos_64909 + 1;
        goto L2; // [224] 89
L3: 
        ;
    }

    /** tokenize.e:894		if val >= 0 then*/
    if (binary_op_a(LESS, _val_64896, 0)){
        goto LC; // [231] 242
    }

    /** tokenize.e:896			string_text &= val*/
    Ref(_val_64896);
    Append(&_string_text_64899, _string_text_64899, _val_64896);
LC: 

    /** tokenize.e:899		return string_text*/
    DeRefDS(_textdata_64892);
    DeRef(_val_64896);
    return _string_text_64899;
    ;
}


object _72scan_identifier(object _state_64942)
{
    object _nextch_64943 = NOVALUE;
    object _startpos_64944 = NOVALUE;
    object _textdata_64945 = NOVALUE;
    object _whichhex_64956 = NOVALUE;
    object _32308 = NOVALUE;
    object _32307 = NOVALUE;
    object _32306 = NOVALUE;
    object _32305 = NOVALUE;
    object _32304 = NOVALUE;
    object _32303 = NOVALUE;
    object _32302 = NOVALUE;
    object _32301 = NOVALUE;
    object _32300 = NOVALUE;
    object _32299 = NOVALUE;
    object _32298 = NOVALUE;
    object _32297 = NOVALUE;
    object _32296 = NOVALUE;
    object _32295 = NOVALUE;
    object _32294 = NOVALUE;
    object _32293 = NOVALUE;
    object _32292 = NOVALUE;
    object _32291 = NOVALUE;
    object _32290 = NOVALUE;
    object _32289 = NOVALUE;
    object _32288 = NOVALUE;
    object _32287 = NOVALUE;
    object _32286 = NOVALUE;
    object _32284 = NOVALUE;
    object _32283 = NOVALUE;
    object _32282 = NOVALUE;
    object _32281 = NOVALUE;
    object _32279 = NOVALUE;
    object _32278 = NOVALUE;
    object _32277 = NOVALUE;
    object _32276 = NOVALUE;
    object _32275 = NOVALUE;
    object _32274 = NOVALUE;
    object _32271 = NOVALUE;
    object _32270 = NOVALUE;
    object _32267 = NOVALUE;
    object _32266 = NOVALUE;
    object _32265 = NOVALUE;
    object _32264 = NOVALUE;
    object _32263 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:909		if not Alpha_Char(Look) and Look != '_' then*/
    _32263 = _72Alpha_Char(_72Look_64257);
    if (IS_ATOM_INT(_32263)) {
        _32264 = (_32263 == 0);
    }
    else {
        _32264 = unary_op(NOT, _32263);
    }
    DeRef(_32263);
    _32263 = NOVALUE;
    if (IS_ATOM_INT(_32264)) {
        if (_32264 == 0) {
            goto L1; // [12] 33
        }
    }
    else {
        if (DBL_PTR(_32264)->dbl == 0.0) {
            goto L1; // [12] 33
        }
    }
    _32266 = (_72Look_64257 != 95);
    if (_32266 == 0)
    {
        DeRef(_32266);
        _32266 = NOVALUE;
        goto L1; // [23] 33
    }
    else{
        DeRef(_32266);
        _32266 = NOVALUE;
    }

    /** tokenize.e:910			return FALSE*/
    DeRef(_state_64942);
    DeRef(_textdata_64945);
    DeRef(_32264);
    _32264 = NOVALUE;
    return 0;
L1: 

    /** tokenize.e:913		if find(Look, "xuU") then*/
    _32267 = find_from(_72Look_64257, _32239, 1);
    if (_32267 == 0)
    {
        _32267 = NOVALUE;
        goto L2; // [42] 354
    }
    else{
        _32267 = NOVALUE;
    }

    /** tokenize.e:914			nextch = lookahead(state, state)*/
    Ref(_state_64942);
    Ref(_state_64942);
    _nextch_64943 = _72lookahead(_state_64942, _state_64942);
    if (!IS_ATOM_INT(_nextch_64943)) {
        _1 = (object)(DBL_PTR(_nextch_64943)->dbl);
        DeRefDS(_nextch_64943);
        _nextch_64943 = _1;
    }

    /** tokenize.e:915			if nextch = '"' then*/
    if (_nextch_64943 != 34)
    goto L3; // [56] 351

    /** tokenize.e:917				integer whichhex = Look*/
    _whichhex_64956 = _72Look_64257;

    /** tokenize.e:918				textdata = ""*/
    RefDS(_21928);
    DeRef(_textdata_64945);
    _textdata_64945 = _21928;

    /** tokenize.e:919				scan_char(state)	-- Skip over starting quote*/
    Ref(_state_64942);
    _72scan_char(_state_64942);

    /** tokenize.e:920				scan_char(state) -- First char of string*/
    Ref(_state_64942);
    _72scan_char(_state_64942);

    /** tokenize.e:921				startpos = sti*/
    _startpos_64944 = _72sti_64254;

    /** tokenize.e:923				while not find(Look, {'"', io:EOF}) do*/
L4: 
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 34;
    ((intptr_t *)_2)[2] = -1;
    _32270 = MAKE_SEQ(_1);
    _32271 = find_from(_72Look_64257, _32270, 1);
    DeRefDS(_32270);
    _32270 = NOVALUE;
    if (_32271 != 0)
    goto L5; // [105] 118
    _32271 = NOVALUE;

    /** tokenize.e:924					scan_char(state)*/
    Ref(_state_64942);
    _72scan_char(_state_64942);

    /** tokenize.e:925				end while*/
    goto L4; // [115] 94
L5: 

    /** tokenize.e:927				if Look = io:EOF then*/
    if (_72Look_64257 != -1)
    goto L6; // [122] 175

    /** tokenize.e:928					if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64942)){
        _32274 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64942)->dbl));
    }
    else{
        _32274 = (object)*(((s1_ptr)_2)->base + _state_64942);
    }
    _2 = (object)SEQ_PTR(_32274);
    _32275 = (object)*(((s1_ptr)_2)->base + 8);
    _32274 = NOVALUE;
    if (_32275 == 0) {
        _32275 = NOVALUE;
        goto L7; // [138] 163
    }
    else {
        if (!IS_ATOM_INT(_32275) && DBL_PTR(_32275)->dbl == 0.0){
            _32275 = NOVALUE;
            goto L7; // [138] 163
        }
        _32275 = NOVALUE;
    }
    _32275 = NOVALUE;

    /** tokenize.e:929						Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32276 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[4];

        concat_list[0] = _32113;
        concat_list[1] = _32276;
        concat_list[2] = _32113;
        concat_list[3] = _whichhex_64956;
        Concat_N((object_ptr)&_32277, concat_list, 4);
    }
    _32276 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32277;
    if( _1 != _32277 ){
        DeRef(_1);
    }
    _32277 = NOVALUE;
L7: 

    /** tokenize.e:932					report_error(ERR_EOF_STRING)*/
    _72report_error(10);

    /** tokenize.e:933					return TRUE*/
    DeRef(_state_64942);
    DeRef(_textdata_64945);
    DeRef(_32264);
    _32264 = NOVALUE;
    return 1;
L6: 

    /** tokenize.e:936				if not eumem:ram_space[state][LITERAL_STRING] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64942)){
        _32278 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64942)->dbl));
    }
    else{
        _32278 = (object)*(((s1_ptr)_2)->base + _state_64942);
    }
    _2 = (object)SEQ_PTR(_32278);
    _32279 = (object)*(((s1_ptr)_2)->base + 7);
    _32278 = NOVALUE;
    if (IS_ATOM_INT(_32279)) {
        if (_32279 != 0){
            _32279 = NOVALUE;
            goto L8; // [187] 221
        }
    }
    else {
        if (DBL_PTR(_32279)->dbl != 0.0){
            _32279 = NOVALUE;
            goto L8; // [187] 221
        }
    }
    _32279 = NOVALUE;

    /** tokenize.e:937					textdata = hex_string(source_text[startpos .. sti-1], source_text[startpos - 2])*/
    _32281 = _72sti_64254 - 1;
    rhs_slice_target = (object_ptr)&_32282;
    RHS_Slice(_72source_text_64253, _startpos_64944, _32281);
    _32283 = _startpos_64944 - 2;
    _2 = (object)SEQ_PTR(_72source_text_64253);
    _32284 = (object)*(((s1_ptr)_2)->base + _32283);
    Ref(_32284);
    _0 = _textdata_64945;
    _textdata_64945 = _72hex_string(_32282, _32284);
    DeRef(_0);
    _32282 = NOVALUE;
    _32284 = NOVALUE;
L8: 

    /** tokenize.e:939				if atom(textdata) then*/
    _32286 = IS_ATOM(_textdata_64945);
    if (_32286 == 0)
    {
        _32286 = NOVALUE;
        goto L9; // [226] 278
    }
    else{
        _32286 = NOVALUE;
    }

    /** tokenize.e:941					if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64942)){
        _32287 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64942)->dbl));
    }
    else{
        _32287 = (object)*(((s1_ptr)_2)->base + _state_64942);
    }
    _2 = (object)SEQ_PTR(_32287);
    _32288 = (object)*(((s1_ptr)_2)->base + 8);
    _32287 = NOVALUE;
    if (_32288 == 0) {
        _32288 = NOVALUE;
        goto LA; // [241] 266
    }
    else {
        if (!IS_ATOM_INT(_32288) && DBL_PTR(_32288)->dbl == 0.0){
            _32288 = NOVALUE;
            goto LA; // [241] 266
        }
        _32288 = NOVALUE;
    }
    _32288 = NOVALUE;

    /** tokenize.e:942						Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32289 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[4];

        concat_list[0] = _32113;
        concat_list[1] = _32289;
        concat_list[2] = _32113;
        concat_list[3] = _whichhex_64956;
        Concat_N((object_ptr)&_32290, concat_list, 4);
    }
    _32289 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32290;
    if( _1 != _32290 ){
        DeRef(_1);
    }
    _32290 = NOVALUE;
LA: 

    /** tokenize.e:944					report_error(ERR_HEX_STRING)*/
    _72report_error(11);

    /** tokenize.e:945					return TRUE*/
    DeRef(_state_64942);
    DeRef(_textdata_64945);
    DeRef(_32281);
    _32281 = NOVALUE;
    DeRef(_32264);
    _32264 = NOVALUE;
    DeRef(_32283);
    _32283 = NOVALUE;
    return 1;
L9: 

    /** tokenize.e:948				Token[TTYPE] = T_STRING*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);

    /** tokenize.e:949				Token[TDATA] = textdata*/
    Ref(_textdata_64945);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _textdata_64945;
    DeRef(_1);

    /** tokenize.e:950				Token[TFORM] = TF_STRING_HEX*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 7;
    DeRef(_1);

    /** tokenize.e:952				scan_char(state)	-- go to next char after end of string*/
    Ref(_state_64942);
    _72scan_char(_state_64942);

    /** tokenize.e:953				if eumem:ram_space[state][STRING_KEEP_QUOTES] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64942)){
        _32291 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64942)->dbl));
    }
    else{
        _32291 = (object)*(((s1_ptr)_2)->base + _state_64942);
    }
    _2 = (object)SEQ_PTR(_32291);
    _32292 = (object)*(((s1_ptr)_2)->base + 8);
    _32291 = NOVALUE;
    if (_32292 == 0) {
        _32292 = NOVALUE;
        goto LB; // [319] 344
    }
    else {
        if (!IS_ATOM_INT(_32292) && DBL_PTR(_32292)->dbl == 0.0){
            _32292 = NOVALUE;
            goto LB; // [319] 344
        }
        _32292 = NOVALUE;
    }
    _32292 = NOVALUE;

    /** tokenize.e:954					Token[TDATA] = whichhex &"\"" & Token[TDATA] & "\""*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32293 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[4];

        concat_list[0] = _32113;
        concat_list[1] = _32293;
        concat_list[2] = _32113;
        concat_list[3] = _whichhex_64956;
        Concat_N((object_ptr)&_32294, concat_list, 4);
    }
    _32293 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32294;
    if( _1 != _32294 ){
        DeRef(_1);
    }
    _32294 = NOVALUE;
LB: 

    /** tokenize.e:957				return TRUE*/
    DeRef(_state_64942);
    DeRef(_textdata_64945);
    DeRef(_32281);
    _32281 = NOVALUE;
    DeRef(_32264);
    _32264 = NOVALUE;
    DeRef(_32283);
    _32283 = NOVALUE;
    return 1;
L3: 
L2: 

    /** tokenize.e:961		Token[TTYPE] = T_IDENTIFIER*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);

    /** tokenize.e:962		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:964		while Identifier_Char(Look) do*/
LC: 
    _32295 = _72Identifier_Char(_72Look_64257);
    if (_32295 <= 0) {
        if (_32295 == 0) {
            DeRef(_32295);
            _32295 = NOVALUE;
            goto LD; // [381] 412
        }
        else {
            if (!IS_ATOM_INT(_32295) && DBL_PTR(_32295)->dbl == 0.0){
                DeRef(_32295);
                _32295 = NOVALUE;
                goto LD; // [381] 412
            }
            DeRef(_32295);
            _32295 = NOVALUE;
        }
    }
    DeRef(_32295);
    _32295 = NOVALUE;

    /** tokenize.e:965			Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32296 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32296) && IS_ATOM(_72Look_64257)) {
        Append(&_32297, _32296, _72Look_64257);
    }
    else if (IS_ATOM(_32296) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32297, _32296, _72Look_64257);
        _32296 = NOVALUE;
    }
    _32296 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32297;
    if( _1 != _32297 ){
        DeRef(_1);
    }
    _32297 = NOVALUE;

    /** tokenize.e:966			scan_char(state)*/
    Ref(_state_64942);
    _72scan_char(_state_64942);

    /** tokenize.e:967		end while*/
    goto LC; // [409] 375
LD: 

    /** tokenize.e:969		if find(Token[TDATA],keywords) then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32298 = (object)*(((s1_ptr)_2)->base + 2);
    _32299 = find_from(_32298, _73keywords_64057, 1);
    _32298 = NOVALUE;
    if (_32299 == 0)
    {
        _32299 = NOVALUE;
        goto LE; // [427] 476
    }
    else{
        _32299 = NOVALUE;
    }

    /** tokenize.e:970			if eumem:ram_space[state][ID_KEYWORD] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64942)){
        _32300 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64942)->dbl));
    }
    else{
        _32300 = (object)*(((s1_ptr)_2)->base + _state_64942);
    }
    _2 = (object)SEQ_PTR(_32300);
    _32301 = (object)*(((s1_ptr)_2)->base + 6);
    _32300 = NOVALUE;
    if (_32301 == 0) {
        _32301 = NOVALUE;
        goto LF; // [442] 454
    }
    else {
        if (!IS_ATOM_INT(_32301) && DBL_PTR(_32301)->dbl == 0.0){
            _32301 = NOVALUE;
            goto LF; // [442] 454
        }
        _32301 = NOVALUE;
    }
    _32301 = NOVALUE;

    /** tokenize.e:971				Token[TTYPE] = T_KEYWORD*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
LF: 

    /** tokenize.e:973			if equal(Token[TDATA],"include") then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32302 = (object)*(((s1_ptr)_2)->base + 2);
    if (_32302 == _25736)
    _32303 = 1;
    else if (IS_ATOM_INT(_32302) && IS_ATOM_INT(_25736))
    _32303 = 0;
    else
    _32303 = (compare(_32302, _25736) == 0);
    _32302 = NOVALUE;
    if (_32303 == 0)
    {
        _32303 = NOVALUE;
        goto L10; // [466] 475
    }
    else{
        _32303 = NOVALUE;
    }

    /** tokenize.e:974				INCLUDE_NEXT = TRUE*/
    _72INCLUDE_NEXT_64939 = 1;
L10: 
LE: 

    /** tokenize.e:978		if find(Token[TDATA],builtins) and eumem:ram_space[state][ID_BUILTIN] then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32304 = (object)*(((s1_ptr)_2)->base + 2);
    _32305 = find_from(_32304, _73builtins_64067, 1);
    _32304 = NOVALUE;
    if (_32305 == 0) {
        goto L11; // [491] 518
    }
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_64942)){
        _32307 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64942)->dbl));
    }
    else{
        _32307 = (object)*(((s1_ptr)_2)->base + _state_64942);
    }
    _2 = (object)SEQ_PTR(_32307);
    _32308 = (object)*(((s1_ptr)_2)->base + 5);
    _32307 = NOVALUE;
    if (_32308 == 0) {
        _32308 = NOVALUE;
        goto L11; // [506] 518
    }
    else {
        if (!IS_ATOM_INT(_32308) && DBL_PTR(_32308)->dbl == 0.0){
            _32308 = NOVALUE;
            goto L11; // [506] 518
        }
        _32308 = NOVALUE;
    }
    _32308 = NOVALUE;

    /** tokenize.e:979			Token[TTYPE] = T_BUILTIN*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 41;
    DeRef(_1);
L11: 

    /** tokenize.e:982		return TRUE*/
    DeRef(_state_64942);
    DeRef(_textdata_64945);
    DeRef(_32281);
    _32281 = NOVALUE;
    DeRef(_32264);
    _32264 = NOVALUE;
    DeRef(_32283);
    _32283 = NOVALUE;
    return 1;
    ;
}


object _72scan_include(object _state_65012)
{
    object _32317 = NOVALUE;
    object _32316 = NOVALUE;
    object _32315 = NOVALUE;
    object _32314 = NOVALUE;
    object _32313 = NOVALUE;
    object _32312 = NOVALUE;
    object _32310 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:986		if not INCLUDE_NEXT then*/
    if (_72INCLUDE_NEXT_64939 != 0)
    goto L1; // [5] 15

    /** tokenize.e:987			return FALSE*/
    DeRef(_state_65012);
    return 0;
L1: 

    /** tokenize.e:990		INCLUDE_NEXT = FALSE*/
    _72INCLUDE_NEXT_64939 = 0;

    /** tokenize.e:992		Token[TTYPE] = T_IDENTIFIER*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 9;
    DeRef(_1);

    /** tokenize.e:993		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:995		if not scan_string(state) then*/
    Ref(_state_65012);
    _32310 = _72scan_string(_state_65012);
    if (IS_ATOM_INT(_32310)) {
        if (_32310 != 0){
            DeRef(_32310);
            _32310 = NOVALUE;
            goto L2; // [42] 104
        }
    }
    else {
        if (DBL_PTR(_32310)->dbl != 0.0){
            DeRef(_32310);
            _32310 = NOVALUE;
            goto L2; // [42] 104
        }
    }
    DeRef(_32310);
    _32310 = NOVALUE;

    /** tokenize.e:997			while not White_Char(Look) and Look != EOF do*/
L3: 
    _32312 = _72White_Char(_72Look_64257);
    if (IS_ATOM_INT(_32312)) {
        _32313 = (_32312 == 0);
    }
    else {
        _32313 = unary_op(NOT, _32312);
    }
    DeRef(_32312);
    _32312 = NOVALUE;
    if (IS_ATOM_INT(_32313)) {
        if (_32313 == 0) {
            goto L4; // [59] 103
        }
    }
    else {
        if (DBL_PTR(_32313)->dbl == 0.0) {
            goto L4; // [59] 103
        }
    }
    _32315 = (_72Look_64257 != -1);
    if (_32315 == 0)
    {
        DeRef(_32315);
        _32315 = NOVALUE;
        goto L4; // [72] 103
    }
    else{
        DeRef(_32315);
        _32315 = NOVALUE;
    }

    /** tokenize.e:998				Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32316 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32316) && IS_ATOM(_72Look_64257)) {
        Append(&_32317, _32316, _72Look_64257);
    }
    else if (IS_ATOM(_32316) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32317, _32316, _72Look_64257);
        _32316 = NOVALUE;
    }
    _32316 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32317;
    if( _1 != _32317 ){
        DeRef(_1);
    }
    _32317 = NOVALUE;

    /** tokenize.e:999				scan_char(state)*/
    Ref(_state_65012);
    _72scan_char(_state_65012);

    /** tokenize.e:1000			end while*/
    goto L3; // [100] 50
L4: 
L2: 

    /** tokenize.e:1003		return TRUE*/
    DeRef(_state_65012);
    DeRef(_32313);
    _32313 = NOVALUE;
    return 1;
    ;
}


void _72next_token(object _state_65028)
{
    object _32405 = NOVALUE;
    object _32404 = NOVALUE;
    object _32403 = NOVALUE;
    object _32402 = NOVALUE;
    object _32401 = NOVALUE;
    object _32400 = NOVALUE;
    object _32399 = NOVALUE;
    object _32398 = NOVALUE;
    object _32397 = NOVALUE;
    object _32396 = NOVALUE;
    object _32395 = NOVALUE;
    object _32394 = NOVALUE;
    object _32393 = NOVALUE;
    object _32392 = NOVALUE;
    object _32391 = NOVALUE;
    object _32390 = NOVALUE;
    object _32389 = NOVALUE;
    object _32388 = NOVALUE;
    object _32387 = NOVALUE;
    object _32386 = NOVALUE;
    object _32385 = NOVALUE;
    object _32384 = NOVALUE;
    object _32383 = NOVALUE;
    object _32382 = NOVALUE;
    object _32381 = NOVALUE;
    object _32380 = NOVALUE;
    object _32377 = NOVALUE;
    object _32376 = NOVALUE;
    object _32375 = NOVALUE;
    object _32374 = NOVALUE;
    object _32373 = NOVALUE;
    object _32372 = NOVALUE;
    object _32371 = NOVALUE;
    object _32369 = NOVALUE;
    object _32368 = NOVALUE;
    object _32367 = NOVALUE;
    object _32365 = NOVALUE;
    object _32364 = NOVALUE;
    object _32363 = NOVALUE;
    object _32362 = NOVALUE;
    object _32361 = NOVALUE;
    object _32360 = NOVALUE;
    object _32359 = NOVALUE;
    object _32358 = NOVALUE;
    object _32357 = NOVALUE;
    object _32354 = NOVALUE;
    object _32353 = NOVALUE;
    object _32352 = NOVALUE;
    object _32351 = NOVALUE;
    object _32350 = NOVALUE;
    object _32349 = NOVALUE;
    object _32348 = NOVALUE;
    object _32347 = NOVALUE;
    object _32346 = NOVALUE;
    object _32345 = NOVALUE;
    object _32342 = NOVALUE;
    object _32339 = NOVALUE;
    object _32338 = NOVALUE;
    object _32337 = NOVALUE;
    object _32336 = NOVALUE;
    object _32335 = NOVALUE;
    object _32334 = NOVALUE;
    object _32333 = NOVALUE;
    object _32332 = NOVALUE;
    object _32331 = NOVALUE;
    object _32330 = NOVALUE;
    object _32329 = NOVALUE;
    object _32328 = NOVALUE;
    object _32327 = NOVALUE;
    object _32326 = NOVALUE;
    object _32325 = NOVALUE;
    object _32324 = NOVALUE;
    object _32323 = NOVALUE;
    object _32322 = NOVALUE;
    object _32321 = NOVALUE;
    object _32320 = NOVALUE;
    object _32319 = NOVALUE;
    object _32318 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:1007		Token[TLNUM] = LNum*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _72LNum_64255;
    DeRef(_1);

    /** tokenize.e:1008		Token[TLPOS] = LPos*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _72LPos_64256;
    DeRef(_1);

    /** tokenize.e:1009		Token[TFORM] = -1*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);

    /** tokenize.e:1011		if Look = EOL and not eumem:ram_space[state][IGNORE_NEWLINES] then*/
    _32318 = (_72Look_64257 == 10);
    if (_32318 == 0) {
        goto L1; // [37] 85
    }
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65028)){
        _32320 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65028)->dbl));
    }
    else{
        _32320 = (object)*(((s1_ptr)_2)->base + _state_65028);
    }
    _2 = (object)SEQ_PTR(_32320);
    _32321 = (object)*(((s1_ptr)_2)->base + 1);
    _32320 = NOVALUE;
    if (IS_ATOM_INT(_32321)) {
        _32322 = (_32321 == 0);
    }
    else {
        _32322 = unary_op(NOT, _32321);
    }
    _32321 = NOVALUE;
    if (_32322 == 0) {
        DeRef(_32322);
        _32322 = NOVALUE;
        goto L1; // [55] 85
    }
    else {
        if (!IS_ATOM_INT(_32322) && DBL_PTR(_32322)->dbl == 0.0){
            DeRef(_32322);
            _32322 = NOVALUE;
            goto L1; // [55] 85
        }
        DeRef(_32322);
        _32322 = NOVALUE;
    }
    DeRef(_32322);
    _32322 = NOVALUE;

    /** tokenize.e:1013			Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:1014			Token[TTYPE] = T_NEWLINE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);

    /** tokenize.e:1016			scan_char(state) -- advance past this newline*/
    Ref(_state_65028);
    _72scan_char(_state_65028);

    /** tokenize.e:1018			return*/
    DeRef(_state_65028);
    DeRef(_32318);
    _32318 = NOVALUE;
    return;
L1: 

    /** tokenize.e:1021		if not eumem:ram_space[state][DELETE_WHITE] and scankeep_white(state) then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65028)){
        _32323 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65028)->dbl));
    }
    else{
        _32323 = (object)*(((s1_ptr)_2)->base + _state_65028);
    }
    _2 = (object)SEQ_PTR(_32323);
    _32324 = (object)*(((s1_ptr)_2)->base + 4);
    _32323 = NOVALUE;
    if (IS_ATOM_INT(_32324)) {
        _32325 = (_32324 == 0);
    }
    else {
        _32325 = unary_op(NOT, _32324);
    }
    _32324 = NOVALUE;
    if (IS_ATOM_INT(_32325)) {
        if (_32325 == 0) {
            goto L2; // [100] 118
        }
    }
    else {
        if (DBL_PTR(_32325)->dbl == 0.0) {
            goto L2; // [100] 118
        }
    }
    Ref(_state_65028);
    _32327 = _72scankeep_white(_state_65028);
    if (_32327 == 0) {
        DeRef(_32327);
        _32327 = NOVALUE;
        goto L2; // [109] 118
    }
    else {
        if (!IS_ATOM_INT(_32327) && DBL_PTR(_32327)->dbl == 0.0){
            DeRef(_32327);
            _32327 = NOVALUE;
            goto L2; // [109] 118
        }
        DeRef(_32327);
        _32327 = NOVALUE;
    }
    DeRef(_32327);
    _32327 = NOVALUE;

    /** tokenize.e:1023			return*/
    DeRef(_state_65028);
    DeRef(_32325);
    _32325 = NOVALUE;
    DeRef(_32318);
    _32318 = NOVALUE;
    return;
L2: 

    /** tokenize.e:1027		if scan_white(state) then*/
    Ref(_state_65028);
    _32328 = _72scan_white(_state_65028);
    if (_32328 == 0) {
        DeRef(_32328);
        _32328 = NOVALUE;
        goto L3; // [124] 155
    }
    else {
        if (!IS_ATOM_INT(_32328) && DBL_PTR(_32328)->dbl == 0.0){
            DeRef(_32328);
            _32328 = NOVALUE;
            goto L3; // [124] 155
        }
        DeRef(_32328);
        _32328 = NOVALUE;
    }
    DeRef(_32328);
    _32328 = NOVALUE;

    /** tokenize.e:1028			if eumem:ram_space[state][IGNORE_NEWLINES] then next_token(state) end if*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65028)){
        _32329 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65028)->dbl));
    }
    else{
        _32329 = (object)*(((s1_ptr)_2)->base + _state_65028);
    }
    _2 = (object)SEQ_PTR(_32329);
    _32330 = (object)*(((s1_ptr)_2)->base + 1);
    _32329 = NOVALUE;
    if (_32330 == 0) {
        _32330 = NOVALUE;
        goto L4; // [139] 149
    }
    else {
        if (!IS_ATOM_INT(_32330) && DBL_PTR(_32330)->dbl == 0.0){
            _32330 = NOVALUE;
            goto L4; // [139] 149
        }
        _32330 = NOVALUE;
    }
    _32330 = NOVALUE;
    Ref(_state_65028);
    DeRef(_32331);
    _32331 = _state_65028;
    _72next_token(_32331);
    _32331 = NOVALUE;
L4: 

    /** tokenize.e:1029			return*/
    DeRef(_state_65028);
    DeRef(_32325);
    _32325 = NOVALUE;
    DeRef(_32318);
    _32318 = NOVALUE;
    return;
L3: 

    /** tokenize.e:1032		if scan_include(state) then*/
    Ref(_state_65028);
    _32332 = _72scan_include(_state_65028);
    if (_32332 == 0) {
        DeRef(_32332);
        _32332 = NOVALUE;
        goto L5; // [161] 170
    }
    else {
        if (!IS_ATOM_INT(_32332) && DBL_PTR(_32332)->dbl == 0.0){
            DeRef(_32332);
            _32332 = NOVALUE;
            goto L5; // [161] 170
        }
        DeRef(_32332);
        _32332 = NOVALUE;
    }
    DeRef(_32332);
    _32332 = NOVALUE;

    /** tokenize.e:1033			return*/
    DeRef(_state_65028);
    DeRef(_32325);
    _32325 = NOVALUE;
    DeRef(_32318);
    _32318 = NOVALUE;
    return;
L5: 

    /** tokenize.e:1036		Token[TTYPE] = find(Look, Delimiters)*/
    _32333 = find_from(_72Look_64257, _72Delimiters_64242, 1);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32333;
    if( _1 != _32333 ){
        DeRef(_1);
    }
    _32333 = NOVALUE;

    /** tokenize.e:1038		if Token[TTYPE] then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32334 = (object)*(((s1_ptr)_2)->base + 1);
    if (_32334 == 0) {
        _32334 = NOVALUE;
        goto L6; // [195] 711
    }
    else {
        if (!IS_ATOM_INT(_32334) && DBL_PTR(_32334)->dbl == 0.0){
            _32334 = NOVALUE;
            goto L6; // [195] 711
        }
        _32334 = NOVALUE;
    }
    _32334 = NOVALUE;

    /** tokenize.e:1040			Token[TTYPE] += T_DELIMITER - 1*/
    _32335 = 18;
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32336 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_32336)) {
        _32337 = _32336 + 18;
        if ((object)((uintptr_t)_32337 + (uintptr_t)HIGH_BITS) >= 0){
            _32337 = NewDouble((eudouble)_32337);
        }
    }
    else {
        _32337 = binary_op(PLUS, _32336, 18);
    }
    _32336 = NOVALUE;
    _32335 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32337;
    if( _1 != _32337 ){
        DeRef(_1);
    }
    _32337 = NOVALUE;

    /** tokenize.e:1041			Token[TDATA] = { Look }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _72Look_64257;
    _32338 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32338;
    if( _1 != _32338 ){
        DeRef(_1);
    }
    _32338 = NOVALUE;

    /** tokenize.e:1043			scan_char(state)*/
    Ref(_state_65028);
    _72scan_char(_state_65028);

    /** tokenize.e:1045			if (Token[TTYPE] = T_LBRACKET) then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32339 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _32339, 32)){
        _32339 = NOVALUE;
        goto L7; // [245] 260
    }
    _32339 = NOVALUE;

    /** tokenize.e:1047				SUBSCRIPT += 1 -- push subscript stack counter*/
    _72SUBSCRIPT_64751 = _72SUBSCRIPT_64751 + 1;
    goto L8; // [257] 908
L7: 

    /** tokenize.e:1049			elsif (Token[TTYPE] = T_RBRACKET) then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32342 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _32342, 33)){
        _32342 = NOVALUE;
        goto L9; // [268] 283
    }
    _32342 = NOVALUE;

    /** tokenize.e:1051				SUBSCRIPT -= 1 -- pop subscript stack counter*/
    _72SUBSCRIPT_64751 = _72SUBSCRIPT_64751 - 1;
    goto L8; // [280] 908
L9: 

    /** tokenize.e:1053			elsif (Look = '=') and (Token[TTYPE] <= T_SINGLE_OPS) then*/
    _32345 = (_72Look_64257 == 61);
    if (_32345 == 0) {
        goto LA; // [291] 355
    }
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32347 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_32347)) {
        _32348 = (_32347 <= 27);
    }
    else {
        _32348 = binary_op(LESSEQ, _32347, 27);
    }
    _32347 = NOVALUE;
    if (_32348 == 0) {
        DeRef(_32348);
        _32348 = NOVALUE;
        goto LA; // [306] 355
    }
    else {
        if (!IS_ATOM_INT(_32348) && DBL_PTR(_32348)->dbl == 0.0){
            DeRef(_32348);
            _32348 = NOVALUE;
            goto LA; // [306] 355
        }
        DeRef(_32348);
        _32348 = NOVALUE;
    }
    DeRef(_32348);
    _32348 = NOVALUE;

    /** tokenize.e:1056				Token[TTYPE] -= T_DOUBLE_OPS - 3*/
    _32349 = 8;
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32350 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_32350)) {
        _32351 = _32350 - 8;
        if ((object)((uintptr_t)_32351 +(uintptr_t) HIGH_BITS) >= 0){
            _32351 = NewDouble((eudouble)_32351);
        }
    }
    else {
        _32351 = binary_op(MINUS, _32350, 8);
    }
    _32350 = NOVALUE;
    _32349 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32351;
    if( _1 != _32351 ){
        DeRef(_1);
    }
    _32351 = NOVALUE;

    /** tokenize.e:1057				Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32352 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32352) && IS_ATOM(_72Look_64257)) {
        Append(&_32353, _32352, _72Look_64257);
    }
    else if (IS_ATOM(_32352) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32353, _32352, _72Look_64257);
        _32352 = NOVALUE;
    }
    _32352 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32353;
    if( _1 != _32353 ){
        DeRef(_1);
    }
    _32353 = NOVALUE;

    /** tokenize.e:1059				scan_char(state)*/
    Ref(_state_65028);
    _72scan_char(_state_65028);
    goto L8; // [352] 908
LA: 

    /** tokenize.e:1061			elsif (Token[TTYPE] = T_PERIOD) then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32354 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _32354, 36)){
        _32354 = NOVALUE;
        goto LB; // [363] 552
    }
    _32354 = NOVALUE;

    /** tokenize.e:1063				if (Look = '.') then*/
    if (_72Look_64257 != 46)
    goto LC; // [371] 409

    /** tokenize.e:1065					Token[TTYPE] = T_SLICE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 39;
    DeRef(_1);

    /** tokenize.e:1066					Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32357 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32357) && IS_ATOM(_72Look_64257)) {
        Append(&_32358, _32357, _72Look_64257);
    }
    else if (IS_ATOM(_32357) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32358, _32357, _72Look_64257);
        _32357 = NOVALUE;
    }
    _32357 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32358;
    if( _1 != _32358 ){
        DeRef(_1);
    }
    _32358 = NOVALUE;

    /** tokenize.e:1068					scan_char(state)*/
    Ref(_state_65028);
    _72scan_char(_state_65028);
    goto L8; // [406] 908
LC: 

    /** tokenize.e:1071					Token[TTYPE] = T_NUMBER*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);

    /** tokenize.e:1072					Token[TDATA] = scan_fraction(0, state)*/
    Ref(_state_65028);
    _32359 = _72scan_fraction(0, _state_65028);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32359;
    if( _1 != _32359 ){
        DeRef(_1);
    }
    _32359 = NOVALUE;

    /** tokenize.e:1073					Token[TFORM] = TF_ATOM*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);

    /** tokenize.e:1074					if ERR then*/
    if (_72ERR_64258 == 0)
    {
        goto LD; // [442] 451
    }
    else{
    }

    /** tokenize.e:1075						return*/
    DeRef(_state_65028);
    DeRef(_32325);
    _32325 = NOVALUE;
    DeRef(_32318);
    _32318 = NOVALUE;
    DeRef(_32345);
    _32345 = NOVALUE;
    return;
LD: 

    /** tokenize.e:1078					Token[TDATA] = scan_exponent(Token[TDATA], state)*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32360 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_32360);
    Ref(_state_65028);
    _32361 = _72scan_exponent(_32360, _state_65028);
    _32360 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32361;
    if( _1 != _32361 ){
        DeRef(_1);
    }
    _32361 = NOVALUE;

    /** tokenize.e:1080					if eumem:ram_space[state][STRING_NUMBERS] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65028)){
        _32362 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65028)->dbl));
    }
    else{
        _32362 = (object)*(((s1_ptr)_2)->base + _state_65028);
    }
    _2 = (object)SEQ_PTR(_32362);
    _32363 = (object)*(((s1_ptr)_2)->base + 3);
    _32362 = NOVALUE;
    if (_32363 == 0) {
        _32363 = NOVALUE;
        goto L8; // [482] 908
    }
    else {
        if (!IS_ATOM_INT(_32363) && DBL_PTR(_32363)->dbl == 0.0){
            _32363 = NOVALUE;
            goto L8; // [482] 908
        }
        _32363 = NOVALUE;
    }
    _32363 = NOVALUE;

    /** tokenize.e:1081						if integer(Token[TDATA]) then*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32364 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_32364))
    _32365 = 1;
    else if (IS_ATOM_DBL(_32364))
    _32365 = IS_ATOM_INT(DoubleToInt(_32364));
    else
    _32365 = 0;
    _32364 = NOVALUE;
    if (_32365 == 0)
    {
        _32365 = NOVALUE;
        goto LE; // [496] 524
    }
    else{
        _32365 = NOVALUE;
    }

    /** tokenize.e:1082							Token[TDATA] = sprintf("%d",{Token[TDATA]})*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32367 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32367);
    ((intptr_t*)_2)[1] = _32367;
    _32368 = MAKE_SEQ(_1);
    _32367 = NOVALUE;
    _32369 = EPrintf(-9999999, _32366, _32368);
    DeRefDS(_32368);
    _32368 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32369;
    if( _1 != _32369 ){
        DeRef(_1);
    }
    _32369 = NOVALUE;
    goto L8; // [521] 908
LE: 

    /** tokenize.e:1084							Token[TDATA] = sprintf("%g",{Token[TDATA]})*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32371 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32371);
    ((intptr_t*)_2)[1] = _32371;
    _32372 = MAKE_SEQ(_1);
    _32371 = NOVALUE;
    _32373 = EPrintf(-9999999, _32370, _32372);
    DeRefDS(_32372);
    _32372 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32373;
    if( _1 != _32373 ){
        DeRef(_1);
    }
    _32373 = NOVALUE;
    goto L8; // [549] 908
LB: 

    /** tokenize.e:1089			elsif (Look = '-') and (Token[TTYPE] = T_MINUS) then*/
    _32374 = (_72Look_64257 == 45);
    if (_32374 == 0) {
        goto LF; // [560] 673
    }
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32376 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_32376)) {
        _32377 = (_32376 == 20);
    }
    else {
        _32377 = binary_op(EQUALS, _32376, 20);
    }
    _32376 = NOVALUE;
    if (_32377 == 0) {
        DeRef(_32377);
        _32377 = NOVALUE;
        goto LF; // [575] 673
    }
    else {
        if (!IS_ATOM_INT(_32377) && DBL_PTR(_32377)->dbl == 0.0){
            DeRef(_32377);
            _32377 = NOVALUE;
            goto LF; // [575] 673
        }
        DeRef(_32377);
        _32377 = NOVALUE;
    }
    DeRef(_32377);
    _32377 = NOVALUE;

    /** tokenize.e:1091				Token[TTYPE] = T_COMMENT*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);

    /** tokenize.e:1092				Token[TDATA] = "--"*/
    RefDS(_32378);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32378;
    DeRef(_1);

    /** tokenize.e:1093				Token[TFORM] = TF_COMMENT_SINGLE*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);

    /** tokenize.e:1095				scan_char(state)*/
    Ref(_state_65028);
    _72scan_char(_state_65028);

    /** tokenize.e:1097				while (Look != EOL) do*/
L10: 
    if (_72Look_64257 == 10)
    goto L11; // [614] 646

    /** tokenize.e:1098					Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32380 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32380) && IS_ATOM(_72Look_64257)) {
        Append(&_32381, _32380, _72Look_64257);
    }
    else if (IS_ATOM(_32380) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32381, _32380, _72Look_64257);
        _32380 = NOVALUE;
    }
    _32380 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32381;
    if( _1 != _32381 ){
        DeRef(_1);
    }
    _32381 = NOVALUE;

    /** tokenize.e:1099					scan_char(state)*/
    Ref(_state_65028);
    _72scan_char(_state_65028);

    /** tokenize.e:1100				end while*/
    goto L10; // [643] 612
L11: 

    /** tokenize.e:1102				if eumem:ram_space[state][IGNORE_COMMENTS] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65028)){
        _32382 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65028)->dbl));
    }
    else{
        _32382 = (object)*(((s1_ptr)_2)->base + _state_65028);
    }
    _2 = (object)SEQ_PTR(_32382);
    _32383 = (object)*(((s1_ptr)_2)->base + 2);
    _32382 = NOVALUE;
    if (_32383 == 0) {
        _32383 = NOVALUE;
        goto L8; // [658] 908
    }
    else {
        if (!IS_ATOM_INT(_32383) && DBL_PTR(_32383)->dbl == 0.0){
            _32383 = NOVALUE;
            goto L8; // [658] 908
        }
        _32383 = NOVALUE;
    }
    _32383 = NOVALUE;

    /** tokenize.e:1103					next_token(state)*/
    Ref(_state_65028);
    DeRef(_32384);
    _32384 = _state_65028;
    _72next_token(_32384);
    _32384 = NOVALUE;
    goto L8; // [670] 908
LF: 

    /** tokenize.e:1106			elsif (Look = '*') and (Token[TTYPE] = T_DIVIDE) then*/
    _32385 = (_72Look_64257 == 42);
    if (_32385 == 0) {
        goto L8; // [681] 908
    }
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32387 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_32387)) {
        _32388 = (_32387 == 22);
    }
    else {
        _32388 = binary_op(EQUALS, _32387, 22);
    }
    _32387 = NOVALUE;
    if (_32388 == 0) {
        DeRef(_32388);
        _32388 = NOVALUE;
        goto L8; // [696] 908
    }
    else {
        if (!IS_ATOM_INT(_32388) && DBL_PTR(_32388)->dbl == 0.0){
            DeRef(_32388);
            _32388 = NOVALUE;
            goto L8; // [696] 908
        }
        DeRef(_32388);
        _32388 = NOVALUE;
    }
    DeRef(_32388);
    _32388 = NOVALUE;

    /** tokenize.e:1108				scan_multicomment(state)*/
    Ref(_state_65028);
    _32389 = _72scan_multicomment(_state_65028, 0);
    goto L8; // [708] 908
L6: 

    /** tokenize.e:1111		elsif scan_identifier(state) then*/
    Ref(_state_65028);
    _32390 = _72scan_identifier(_state_65028);
    if (_32390 == 0) {
        DeRef(_32390);
        _32390 = NOVALUE;
        goto L12; // [717] 723
    }
    else {
        if (!IS_ATOM_INT(_32390) && DBL_PTR(_32390)->dbl == 0.0){
            DeRef(_32390);
            _32390 = NOVALUE;
            goto L12; // [717] 723
        }
        DeRef(_32390);
        _32390 = NOVALUE;
    }
    DeRef(_32390);
    _32390 = NOVALUE;
    goto L8; // [720] 908
L12: 

    /** tokenize.e:1113		elsif scan_qchar(state) then*/
    Ref(_state_65028);
    _32391 = _72scan_qchar(_state_65028);
    if (_32391 == 0) {
        DeRef(_32391);
        _32391 = NOVALUE;
        goto L13; // [729] 735
    }
    else {
        if (!IS_ATOM_INT(_32391) && DBL_PTR(_32391)->dbl == 0.0){
            DeRef(_32391);
            _32391 = NOVALUE;
            goto L13; // [729] 735
        }
        DeRef(_32391);
        _32391 = NOVALUE;
    }
    DeRef(_32391);
    _32391 = NOVALUE;
    goto L8; // [732] 908
L13: 

    /** tokenize.e:1115		elsif scan_string(state) then*/
    Ref(_state_65028);
    _32392 = _72scan_string(_state_65028);
    if (_32392 == 0) {
        DeRef(_32392);
        _32392 = NOVALUE;
        goto L14; // [741] 747
    }
    else {
        if (!IS_ATOM_INT(_32392) && DBL_PTR(_32392)->dbl == 0.0){
            DeRef(_32392);
            _32392 = NOVALUE;
            goto L14; // [741] 747
        }
        DeRef(_32392);
        _32392 = NOVALUE;
    }
    DeRef(_32392);
    _32392 = NOVALUE;
    goto L8; // [744] 908
L14: 

    /** tokenize.e:1117		elsif scan_prefixed_number(state) then*/
    Ref(_state_65028);
    _32393 = _72scan_prefixed_number(_state_65028);
    if (_32393 == 0) {
        DeRef(_32393);
        _32393 = NOVALUE;
        goto L15; // [753] 759
    }
    else {
        if (!IS_ATOM_INT(_32393) && DBL_PTR(_32393)->dbl == 0.0){
            DeRef(_32393);
            _32393 = NOVALUE;
            goto L15; // [753] 759
        }
        DeRef(_32393);
        _32393 = NOVALUE;
    }
    DeRef(_32393);
    _32393 = NOVALUE;
    goto L8; // [756] 908
L15: 

    /** tokenize.e:1119		elsif scan_hex(state) then*/
    Ref(_state_65028);
    _32394 = _72scan_hex(_state_65028);
    if (_32394 == 0) {
        DeRef(_32394);
        _32394 = NOVALUE;
        goto L16; // [765] 771
    }
    else {
        if (!IS_ATOM_INT(_32394) && DBL_PTR(_32394)->dbl == 0.0){
            DeRef(_32394);
            _32394 = NOVALUE;
            goto L16; // [765] 771
        }
        DeRef(_32394);
        _32394 = NOVALUE;
    }
    DeRef(_32394);
    _32394 = NOVALUE;
    goto L8; // [768] 908
L16: 

    /** tokenize.e:1121		elsif scan_number(state) then*/
    Ref(_state_65028);
    _32395 = _72scan_number(_state_65028);
    if (_32395 == 0) {
        DeRef(_32395);
        _32395 = NOVALUE;
        goto L17; // [777] 783
    }
    else {
        if (!IS_ATOM_INT(_32395) && DBL_PTR(_32395)->dbl == 0.0){
            DeRef(_32395);
            _32395 = NOVALUE;
            goto L17; // [777] 783
        }
        DeRef(_32395);
        _32395 = NOVALUE;
    }
    DeRef(_32395);
    _32395 = NOVALUE;
    goto L8; // [780] 908
L17: 

    /** tokenize.e:1123		elsif Look != io:EOF and not White_Char( Look ) then*/
    _32396 = (_72Look_64257 != -1);
    if (_32396 == 0) {
        goto L18; // [791] 875
    }
    _32398 = _72White_Char(_72Look_64257);
    if (IS_ATOM_INT(_32398)) {
        _32399 = (_32398 == 0);
    }
    else {
        _32399 = unary_op(NOT, _32398);
    }
    DeRef(_32398);
    _32398 = NOVALUE;
    if (_32399 == 0) {
        DeRef(_32399);
        _32399 = NOVALUE;
        goto L18; // [805] 875
    }
    else {
        if (!IS_ATOM_INT(_32399) && DBL_PTR(_32399)->dbl == 0.0){
            DeRef(_32399);
            _32399 = NOVALUE;
            goto L18; // [805] 875
        }
        DeRef(_32399);
        _32399 = NOVALUE;
    }
    DeRef(_32399);
    _32399 = NOVALUE;

    /** tokenize.e:1124			while Look != io:EOF and not White_Char( Look ) do*/
L19: 
    _32400 = (_72Look_64257 != -1);
    if (_32400 == 0) {
        goto L1A; // [819] 864
    }
    _32402 = _72White_Char(_72Look_64257);
    if (IS_ATOM_INT(_32402)) {
        _32403 = (_32402 == 0);
    }
    else {
        _32403 = unary_op(NOT, _32402);
    }
    DeRef(_32402);
    _32402 = NOVALUE;
    if (_32403 <= 0) {
        if (_32403 == 0) {
            DeRef(_32403);
            _32403 = NOVALUE;
            goto L1A; // [833] 864
        }
        else {
            if (!IS_ATOM_INT(_32403) && DBL_PTR(_32403)->dbl == 0.0){
                DeRef(_32403);
                _32403 = NOVALUE;
                goto L1A; // [833] 864
            }
            DeRef(_32403);
            _32403 = NOVALUE;
        }
    }
    DeRef(_32403);
    _32403 = NOVALUE;

    /** tokenize.e:1125				Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32404 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32404) && IS_ATOM(_72Look_64257)) {
        Append(&_32405, _32404, _72Look_64257);
    }
    else if (IS_ATOM(_32404) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32405, _32404, _72Look_64257);
        _32404 = NOVALUE;
    }
    _32404 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32405;
    if( _1 != _32405 ){
        DeRef(_1);
    }
    _32405 = NOVALUE;

    /** tokenize.e:1126				scan_char(state)*/
    Ref(_state_65028);
    _72scan_char(_state_65028);

    /** tokenize.e:1127			end while*/
    goto L19; // [861] 813
L1A: 

    /** tokenize.e:1128			Token[TTYPE] = T_TEXT*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 42;
    DeRef(_1);
    goto L8; // [872] 908
L18: 

    /** tokenize.e:1132			Token[TTYPE] = T_EOF*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:1133			Token[TDATA] = Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _72Look_64257;
    DeRef(_1);

    /** tokenize.e:1135			if (Look != io:EOF) then*/
    if (_72Look_64257 == -1)
    goto L1B; // [897] 907

    /** tokenize.e:1136				report_error(ERR_UNKNOWN)*/
    _72report_error(8);
L1B: 
L8: 

    /** tokenize.e:1139	end procedure*/
    DeRef(_state_65028);
    DeRef(_32385);
    _32385 = NOVALUE;
    DeRef(_32374);
    _32374 = NOVALUE;
    DeRef(_32396);
    _32396 = NOVALUE;
    DeRef(_32325);
    _32325 = NOVALUE;
    DeRef(_32400);
    _32400 = NOVALUE;
    DeRef(_32389);
    _32389 = NOVALUE;
    DeRef(_32318);
    _32318 = NOVALUE;
    DeRef(_32345);
    _32345 = NOVALUE;
    return;
    ;
}


object _72tokenize_string(object _code_65150, object _state_65151, object _stop_on_error_65152, object _multi_65153)
{
    object _tokens_65154 = NOVALUE;
    object _32445 = NOVALUE;
    object _32444 = NOVALUE;
    object _32442 = NOVALUE;
    object _32440 = NOVALUE;
    object _32439 = NOVALUE;
    object _32437 = NOVALUE;
    object _32435 = NOVALUE;
    object _32434 = NOVALUE;
    object _32433 = NOVALUE;
    object _32430 = NOVALUE;
    object _32429 = NOVALUE;
    object _32428 = NOVALUE;
    object _32426 = NOVALUE;
    object _32425 = NOVALUE;
    object _32424 = NOVALUE;
    object _32423 = NOVALUE;
    object _32421 = NOVALUE;
    object _32420 = NOVALUE;
    object _32419 = NOVALUE;
    object _32418 = NOVALUE;
    object _32412 = NOVALUE;
    object _32411 = NOVALUE;
    object _32410 = NOVALUE;
    object _32408 = NOVALUE;
    object _32407 = NOVALUE;
    object _0, _1, _2;
    

    /** tokenize.e:1160		ERR = FALSE*/
    _72ERR_64258 = 0;

    /** tokenize.e:1161		ERR_LNUM = 0*/
    _72ERR_LNUM_64259 = 0;

    /** tokenize.e:1162		ERR_LPOS = 0*/
    _72ERR_LPOS_64260 = 0;

    /** tokenize.e:1163		last_multi = 0*/
    DeRef(_72last_multi_64612);
    _72last_multi_64612 = 0;

    /** tokenize.e:1165		tokens = {}*/
    RefDS(_21928);
    DeRef(_tokens_65154);
    _tokens_65154 = _21928;

    /** tokenize.e:1167		source_text = code*/
    RefDS(_code_65150);
    DeRef(_72source_text_64253);
    _72source_text_64253 = _code_65150;

    /** tokenize.e:1168		if not length( source_text ) or source_text[$] != EOL then*/
    if (IS_SEQUENCE(_72source_text_64253)){
            _32407 = SEQ_PTR(_72source_text_64253)->length;
    }
    else {
        _32407 = 1;
    }
    _32408 = (_32407 == 0);
    _32407 = NOVALUE;
    if (_32408 != 0) {
        goto L1; // [49] 71
    }
    if (IS_SEQUENCE(_72source_text_64253)){
            _32410 = SEQ_PTR(_72source_text_64253)->length;
    }
    else {
        _32410 = 1;
    }
    _2 = (object)SEQ_PTR(_72source_text_64253);
    _32411 = (object)*(((s1_ptr)_2)->base + _32410);
    if (IS_ATOM_INT(_32411)) {
        _32412 = (_32411 != 10);
    }
    else {
        _32412 = binary_op(NOTEQ, _32411, 10);
    }
    _32411 = NOVALUE;
    if (_32412 == 0) {
        DeRef(_32412);
        _32412 = NOVALUE;
        goto L2; // [67] 80
    }
    else {
        if (!IS_ATOM_INT(_32412) && DBL_PTR(_32412)->dbl == 0.0){
            DeRef(_32412);
            _32412 = NOVALUE;
            goto L2; // [67] 80
        }
        DeRef(_32412);
        _32412 = NOVALUE;
    }
    DeRef(_32412);
    _32412 = NOVALUE;
L1: 

    /** tokenize.e:1169			source_text &= EOL*/
    Append(&_72source_text_64253, _72source_text_64253, 10);
L2: 

    /** tokenize.e:1171		source_text &= io:EOF*/
    Append(&_72source_text_64253, _72source_text_64253, -1);

    /** tokenize.e:1172		LNum = 1*/
    _72LNum_64255 = 1;

    /** tokenize.e:1173		LPos = 1*/
    _72LPos_64256 = 1;

    /** tokenize.e:1174		sti = 1*/
    _72sti_64254 = 1;

    /** tokenize.e:1175		Look = source_text[sti]*/
    _2 = (object)SEQ_PTR(_72source_text_64253);
    _72Look_64257 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_72Look_64257))
    _72Look_64257 = (object)DBL_PTR(_72Look_64257)->dbl;

    /** tokenize.e:1176		Token[TTYPE] = io:EOF*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);

    /** tokenize.e:1177		Token[TDATA] = ""*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** tokenize.e:1178		Token[TLNUM] = 1*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:1179		Token[TLPOS] = 1*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** tokenize.e:1181		if multi then*/
    if (_multi_65153 == 0)
    {
        goto L3; // [147] 228
    }
    else{
    }

    /** tokenize.e:1182			sti = 0*/
    _72sti_64254 = 0;

    /** tokenize.e:1183			switch multi do*/
    _0 = _multi_65153;
    switch ( _0 ){ 

        /** tokenize.e:1184				case TF_STRING_BACKTICK then*/
        case 6:

        /** tokenize.e:1185					raw_string( "`", state, multi )*/
        RefDS(_32073);
        Ref(_state_65151);
        _32418 = _72raw_string(_32073, _state_65151, _multi_65153);
        goto L4; // [174] 213

        /** tokenize.e:1187				case TF_STRING_TRIPLE then*/
        case 5:

        /** tokenize.e:1188					raw_string( `"""`, state, multi )*/
        RefDS(_32105);
        Ref(_state_65151);
        _32419 = _72raw_string(_32105, _state_65151, _multi_65153);
        goto L4; // [188] 213

        /** tokenize.e:1189				case TF_COMMENT_MULTIPLE then*/
        case 9:

        /** tokenize.e:1190					scan_char( state )*/
        Ref(_state_65151);
        _72scan_char(_state_65151);

        /** tokenize.e:1191					scan_multicomment( state, multi )*/
        Ref(_state_65151);
        _32420 = _72scan_multicomment(_state_65151, _multi_65153);
        goto L4; // [206] 213

        /** tokenize.e:1192				case else*/
        default:
    ;}L4: 

    /** tokenize.e:1195			tokens &= { Token }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_72Token_64251);
    ((intptr_t*)_2)[1] = _72Token_64251;
    _32421 = MAKE_SEQ(_1);
    Concat((object_ptr)&_tokens_65154, _tokens_65154, _32421);
    DeRefDS(_32421);
    _32421 = NOVALUE;
    goto L5; // [225] 364
L3: 

    /** tokenize.e:1196		elsif (Look = '#') and (lookahead(1) = '!') then*/
    _32423 = (_72Look_64257 == 35);
    if (_32423 == 0) {
        goto L6; // [236] 363
    }
    Ref(_72g_state_64303);
    _32425 = _72lookahead(1, _72g_state_64303);
    if (IS_ATOM_INT(_32425)) {
        _32426 = (_32425 == 33);
    }
    else {
        _32426 = binary_op(EQUALS, _32425, 33);
    }
    DeRef(_32425);
    _32425 = NOVALUE;
    if (_32426 == 0) {
        DeRef(_32426);
        _32426 = NOVALUE;
        goto L6; // [252] 363
    }
    else {
        if (!IS_ATOM_INT(_32426) && DBL_PTR(_32426)->dbl == 0.0){
            DeRef(_32426);
            _32426 = NOVALUE;
            goto L6; // [252] 363
        }
        DeRef(_32426);
        _32426 = NOVALUE;
    }
    DeRef(_32426);
    _32426 = NOVALUE;

    /** tokenize.e:1197			sti += 1*/
    _72sti_64254 = _72sti_64254 + 1;

    /** tokenize.e:1198			scan_char(state)*/
    Ref(_state_65151);
    _72scan_char(_state_65151);

    /** tokenize.e:1199			if eumem:ram_space[state][DELETE_WHITE] then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_state_65151)){
        _32428 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_65151)->dbl));
    }
    else{
        _32428 = (object)*(((s1_ptr)_2)->base + _state_65151);
    }
    _2 = (object)SEQ_PTR(_32428);
    _32429 = (object)*(((s1_ptr)_2)->base + 4);
    _32428 = NOVALUE;
    if (_32429 == 0) {
        _32429 = NOVALUE;
        goto L7; // [280] 290
    }
    else {
        if (!IS_ATOM_INT(_32429) && DBL_PTR(_32429)->dbl == 0.0){
            _32429 = NOVALUE;
            goto L7; // [280] 290
        }
        _32429 = NOVALUE;
    }
    _32429 = NOVALUE;

    /** tokenize.e:1200				scan_white(state)*/
    Ref(_state_65151);
    _32430 = _72scan_white(_state_65151);
L7: 

    /** tokenize.e:1202			Token[TTYPE] = T_SHBANG*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);

    /** tokenize.e:1203			Token[TDATA] = "#!"*/
    RefDS(_32431);
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32431;
    DeRef(_1);

    /** tokenize.e:1204			while Look != EOL do*/
L8: 
    if (_72Look_64257 == 10)
    goto L9; // [313] 345

    /** tokenize.e:1205				Token[TDATA] &= Look*/
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32433 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_32433) && IS_ATOM(_72Look_64257)) {
        Append(&_32434, _32433, _72Look_64257);
    }
    else if (IS_ATOM(_32433) && IS_SEQUENCE(_72Look_64257)) {
    }
    else {
        Concat((object_ptr)&_32434, _32433, _72Look_64257);
        _32433 = NOVALUE;
    }
    _32433 = NOVALUE;
    _2 = (object)SEQ_PTR(_72Token_64251);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _72Token_64251 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32434;
    if( _1 != _32434 ){
        DeRef(_1);
    }
    _32434 = NOVALUE;

    /** tokenize.e:1206				scan_char(state)*/
    Ref(_state_65151);
    _72scan_char(_state_65151);

    /** tokenize.e:1207			end while*/
    goto L8; // [342] 311
L9: 

    /** tokenize.e:1208			scan_char(state)*/
    Ref(_state_65151);
    _72scan_char(_state_65151);

    /** tokenize.e:1209			tokens &= { Token }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_72Token_64251);
    ((intptr_t*)_2)[1] = _72Token_64251;
    _32435 = MAKE_SEQ(_1);
    Concat((object_ptr)&_tokens_65154, _tokens_65154, _32435);
    DeRefDS(_32435);
    _32435 = NOVALUE;
L6: 
L5: 

    /** tokenize.e:1212		next_token(state)*/
    Ref(_state_65151);
    _72next_token(_state_65151);

    /** tokenize.e:1213		if not stop_on_error or not ERR then*/
    _32437 = (_stop_on_error_65152 == 0);
    if (_32437 != 0) {
        goto LA; // [374] 388
    }
    _32439 = (_72ERR_64258 == 0);
    if (_32439 == 0)
    {
        DeRef(_32439);
        _32439 = NOVALUE;
        goto LB; // [384] 443
    }
    else{
        DeRef(_32439);
        _32439 = NOVALUE;
    }
LA: 

    /** tokenize.e:1214			while Token[TTYPE] != T_EOF do*/
LC: 
    _2 = (object)SEQ_PTR(_72Token_64251);
    _32440 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _32440, 1)){
        _32440 = NOVALUE;
        goto LD; // [399] 442
    }
    _32440 = NOVALUE;

    /** tokenize.e:1215				tokens &= { Token }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_72Token_64251);
    ((intptr_t*)_2)[1] = _72Token_64251;
    _32442 = MAKE_SEQ(_1);
    Concat((object_ptr)&_tokens_65154, _tokens_65154, _32442);
    DeRefDS(_32442);
    _32442 = NOVALUE;

    /** tokenize.e:1216				next_token(state)*/
    Ref(_state_65151);
    _72next_token(_state_65151);

    /** tokenize.e:1217				if stop_on_error and ERR then*/
    if (_stop_on_error_65152 == 0) {
        goto LC; // [422] 393
    }
    if (_72ERR_64258 == 0)
    {
        goto LC; // [429] 393
    }
    else{
    }

    /** tokenize.e:1218					exit*/
    goto LD; // [434] 442

    /** tokenize.e:1220			end while*/
    goto LC; // [439] 393
LD: 
LB: 

    /** tokenize.e:1223		return { tokens, ERR, ERR_LNUM, ERR_LPOS }*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_tokens_65154);
    ((intptr_t*)_2)[1] = _tokens_65154;
    ((intptr_t*)_2)[2] = _72ERR_64258;
    ((intptr_t*)_2)[3] = _72ERR_LNUM_64259;
    ((intptr_t*)_2)[4] = _72ERR_LPOS_64260;
    _32445 = MAKE_SEQ(_1);
    DeRefDS(_code_65150);
    DeRef(_state_65151);
    DeRefDS(_tokens_65154);
    DeRef(_32420);
    _32420 = NOVALUE;
    DeRef(_32423);
    _32423 = NOVALUE;
    DeRef(_32419);
    _32419 = NOVALUE;
    DeRef(_32418);
    _32418 = NOVALUE;
    DeRef(_32430);
    _32430 = NOVALUE;
    DeRef(_32408);
    _32408 = NOVALUE;
    DeRef(_32437);
    _32437 = NOVALUE;
    return _32445;
    ;
}



// 0xBA508692
