// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _51regex(object _o_21751)
{
    object _12466 = NOVALUE; // 21752 12466
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg regex pc: 1 op: STARTLINE (58)

    /** regex.e:609		return sequence(o)*/
    // SubProg regex pc: 3 op: IS_A_SEQUENCE (68)
    _12466 = IS_SEQUENCE(_o_21751);
    // SubProg regex pc: 6 op: RETURNF (28)

// Exiting block BLOCK: regex

// block var o_21751
    DeRef(_o_21751);
    return _12466;
    // SubProg regex pc: 10 op: BADRETURNF (43)
    ;
}


object _51new(object _pattern_21791, object _options_21792)
{
    object _12486 = NOVALUE; // 21797 12486
    object _12485 = NOVALUE; // 21796 12485
// skipping _12484  name type: 0
    object _12483 = NOVALUE; // 21794 12483
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** regex.e:723		if sequence(options) then */
    // SubProg new pc: 3 op: IS_A_SEQUENCE (68)
    _12483 = 0;
    // SubProg new pc: 6 op: IF (20)
    if (_12483 == 0)
    {
        _12483 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _12483 = NOVALUE;
    }
    // SubProg new pc: 9 op: STARTLINE (58)

    /** regex.e:724			options = math:or_all(options) */
    // SubProg new pc: 11 op: PROC (27)
    _options_21792 = _9or_all(_options_21792);
    // SubProg new pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 21788 op: 159
    // SubProg new pc: 16 op: STARTLINE (58)

    /** regex.e:730		return machine_func(M_PCRE_COMPILE, { pattern, options })*/
    // SubProg new pc: 18 op: RIGHT_BRACE_2 (85)
    Ref(_options_21792);
    Ref(_pattern_21791);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pattern_21791;
    ((intptr_t *)_2)[2] = _options_21792;
    _12485 = MAKE_SEQ(_1);
    // SubProg new pc: 22 op: MACHINE_FUNC (111)
    _12486 = machine(68, _12485);
    DeRefDS(_12485);
    _12485 = NOVALUE;
    // SubProg new pc: 26 op: RETURNF (28)

// Exiting block BLOCK: new

// block var pattern_21791
    DeRef(_pattern_21791);

// block var options_21792
    DeRef(_options_21792);
    return _12486;
    // SubProg new pc: 30 op: BADRETURNF (43)
    ;
}


object _51get_ovector_size(object _ex_21811, object _maxsize_21812)
{
    object _m_21813 = NOVALUE;
    object _12494 = NOVALUE; // 21818 12494
// skipping _12493  name type: 0
// skipping _12492  name type: 0
    object _12491 = NOVALUE; // 21814 12491
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_ovector_size pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_ovector_size pc: 3 op: STARTLINE (58)

    /** regex.e:804		integer m = machine_func(M_PCRE_GET_OVECTOR_SIZE, {ex})*/
    // SubProg get_ovector_size pc: 5 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_ex_21811);
    ((intptr_t*)_2)[1] = _ex_21811;
    _12491 = MAKE_SEQ(_1);
    // SubProg get_ovector_size pc: 9 op: MACHINE_FUNC (111)
    _m_21813 = machine(97, _12491);
    DeRefDS(_12491);
    _12491 = NOVALUE;
    // SubProg get_ovector_size pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_m_21813)) {
        _1 = (object)(DBL_PTR(_m_21813)->dbl);
        DeRefDS(_m_21813);
        _m_21813 = _1;
    }
    // SubProg get_ovector_size pc: 15 op: STARTLINE (58)

    /** regex.e:805		if (m > maxsize) then*/
    // SubProg get_ovector_size pc: 17 op: GREATER_IFW_I (124)
    if (_m_21813 <= 30)
    goto L1; // [17] 28
    // SubProg get_ovector_size pc: 21 op: STARTLINE (58)

    /** regex.e:806			return maxsize*/
    // SubProg get_ovector_size pc: 23 op: RETURNF (28)

// Exiting block BLOCK: get_ovector_size

// block var ex_21811
    DeRef(_ex_21811);

// block var m_21813
    return 30;
    // SubProg get_ovector_size pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 21809 op: 159
    // SubProg get_ovector_size pc: 28 op: STARTLINE (58)

    /** regex.e:809		return m+1*/
    // SubProg get_ovector_size pc: 30 op: PLUS1 (93)
    _12494 = _m_21813 + 1;
    if (_12494 > MAXINT){
        _12494 = NewDouble((eudouble)_12494);
    }
    // SubProg get_ovector_size pc: 34 op: RETURNF (28)

// Exiting block BLOCK: get_ovector_size

// block var ex_21811
    DeRef(_ex_21811);

// block var maxsize_21812

// block var m_21813
    return _12494;
    // SubProg get_ovector_size pc: 38 op: BADRETURNF (43)
    ;
}


object _51find(object _re_21821, object _haystack_21823, object _from_21824, object _options_21825, object _size_21826)
{
    object _12501 = NOVALUE; // 21835 12501
    object _12500 = NOVALUE; // 21834 12500
    object _12499 = NOVALUE; // 21833 12499
// skipping _12498  name type: 0
// skipping _12497  name type: 0
    object _12496 = NOVALUE; // 21829 12496
// skipping _12495  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find pc: 1 op: INTEGER_CHECK (96)
    // SubProg find pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_size_21826)) {
        _1 = (object)(DBL_PTR(_size_21826)->dbl);
        DeRefDS(_size_21826);
        _size_21826 = _1;
    }
    // SubProg find pc: 5 op: STARTLINE (58)

    /** regex.e:872		if sequence(options) then */
    // SubProg find pc: 7 op: IS_A_SEQUENCE (68)
    _12496 = 0;
    // SubProg find pc: 10 op: IF (20)
    if (_12496 == 0)
    {
        _12496 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _12496 = NOVALUE;
    }
    // SubProg find pc: 13 op: STARTLINE (58)

    /** regex.e:873			options = math:or_all(options) */
    // SubProg find pc: 15 op: PROC (27)
    _options_21825 = _9or_all(0);
    // SubProg find pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 21819 op: 159
    // SubProg find pc: 20 op: STARTLINE (58)

    /** regex.e:876		if size < 0 then*/
    // SubProg find pc: 22 op: LESS_IFW_I (119)
    if (_size_21826 >= 0)
    goto L2; // [22] 32
    // SubProg find pc: 26 op: STARTLINE (58)

    /** regex.e:877			size = 0*/
    // SubProg find pc: 28 op: ASSIGN_I (113)
    _size_21826 = 0;
    // SubProg find pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 21819 op: 159
    // SubProg find pc: 32 op: STARTLINE (58)

    /** regex.e:880		return machine_func(M_PCRE_EXEC, { re, haystack, length(haystack), options, from, size })*/
    // SubProg find pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_21823)){
            _12499 = SEQ_PTR(_haystack_21823)->length;
    }
    else {
        _12499 = 1;
    }
    // SubProg find pc: 37 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_re_21821);
    ((intptr_t*)_2)[1] = _re_21821;
    Ref(_haystack_21823);
    ((intptr_t*)_2)[2] = _haystack_21823;
    ((intptr_t*)_2)[3] = _12499;
    Ref(_options_21825);
    ((intptr_t*)_2)[4] = _options_21825;
    ((intptr_t*)_2)[5] = _from_21824;
    ((intptr_t*)_2)[6] = _size_21826;
    _12500 = MAKE_SEQ(_1);
    _12499 = NOVALUE;
    // SubProg find pc: 46 op: MACHINE_FUNC (111)
    _12501 = machine(70, _12500);
    DeRefDS(_12500);
    _12500 = NOVALUE;
    // SubProg find pc: 50 op: RETURNF (28)

// Exiting block BLOCK: find

// block var re_21821
    DeRef(_re_21821);

// block var haystack_21823
    DeRef(_haystack_21823);

// block var from_21824

// block var options_21825
    DeRef(_options_21825);

// block var size_21826
    return _12501;
    // SubProg find pc: 54 op: BADRETURNF (43)
    ;
}


object _51has_match(object _re_21867, object _haystack_21869, object _from_21870, object _options_21871)
{
    object _12518 = NOVALUE; // 21874 12518
    object _12517 = NOVALUE; // 21873 12517
    object _12516 = NOVALUE; // 21872 12516
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_match pc: 1 op: INTEGER_CHECK (96)
    // SubProg has_match pc: 3 op: STARTLINE (58)

    /** regex.e:961		return sequence(find(re, haystack, from, options))*/
    // SubProg has_match pc: 5 op: PROC (27)
    Ref(_re_21867);
    _12516 = _51get_ovector_size(_re_21867, 30);
    // SubProg has_match pc: 10 op: PROC (27)
    Ref(_re_21867);
    Ref(_haystack_21869);
    _12517 = _51find(_re_21867, _haystack_21869, 1, 0, _12516);
    _12516 = NOVALUE;
    // SubProg has_match pc: 18 op: IS_A_SEQUENCE (68)
    _12518 = IS_SEQUENCE(_12517);
    DeRef(_12517);
    _12517 = NOVALUE;
    // SubProg has_match pc: 21 op: RETURNF (28)

// Exiting block BLOCK: has_match

// block var re_21867
    DeRef(_re_21867);

// block var haystack_21869
    DeRef(_haystack_21869);

// block var from_21870

// block var options_21871
    return _12518;
    // SubProg has_match pc: 25 op: BADRETURNF (43)
    ;
}



// 0xE7A0301F
