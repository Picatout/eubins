// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _51regex(object _o_21772)
{
    object _12481 = NOVALUE; // 21773 12481
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg regex pc: 1 op: STARTLINE (58)

    /** regex.e:609		return sequence(o)*/
    // SubProg regex pc: 3 op: IS_A_SEQUENCE (68)
    _12481 = IS_SEQUENCE(_o_21772);
    // SubProg regex pc: 6 op: RETURNF (28)

// Exiting block BLOCK: regex

// block var o_21772
    DeRef(_o_21772);
    return _12481;
    // SubProg regex pc: 10 op: BADRETURNF (43)
    ;
}


object _51new(object _pattern_21812, object _options_21813)
{
    object _12501 = NOVALUE; // 21818 12501
    object _12500 = NOVALUE; // 21817 12500
// skipping _12499  name type: 0
    object _12498 = NOVALUE; // 21815 12498
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** regex.e:723		if sequence(options) then */
    // SubProg new pc: 3 op: IS_A_SEQUENCE (68)
    _12498 = 0;
    // SubProg new pc: 6 op: IF (20)
    if (_12498 == 0)
    {
        _12498 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _12498 = NOVALUE;
    }
    // SubProg new pc: 9 op: STARTLINE (58)

    /** regex.e:724			options = math:or_all(options) */
    // SubProg new pc: 11 op: PROC (27)
    _options_21813 = _13or_all(_options_21813);
    // SubProg new pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 21809 op: 159
    // SubProg new pc: 16 op: STARTLINE (58)

    /** regex.e:730		return machine_func(M_PCRE_COMPILE, { pattern, options })*/
    // SubProg new pc: 18 op: RIGHT_BRACE_2 (85)
    Ref(_options_21813);
    Ref(_pattern_21812);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pattern_21812;
    ((intptr_t *)_2)[2] = _options_21813;
    _12500 = MAKE_SEQ(_1);
    // SubProg new pc: 22 op: MACHINE_FUNC (111)
    _12501 = machine(68, _12500);
    DeRefDS(_12500);
    _12500 = NOVALUE;
    // SubProg new pc: 26 op: RETURNF (28)

// Exiting block BLOCK: new

// block var pattern_21812
    DeRef(_pattern_21812);

// block var options_21813
    DeRef(_options_21813);
    return _12501;
    // SubProg new pc: 30 op: BADRETURNF (43)
    ;
}


object _51get_ovector_size(object _ex_21832, object _maxsize_21833)
{
    object _m_21834 = NOVALUE;
    object _12509 = NOVALUE; // 21839 12509
// skipping _12508  name type: 0
// skipping _12507  name type: 0
    object _12506 = NOVALUE; // 21835 12506
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_ovector_size pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_ovector_size pc: 3 op: STARTLINE (58)

    /** regex.e:804		integer m = machine_func(M_PCRE_GET_OVECTOR_SIZE, {ex})*/
    // SubProg get_ovector_size pc: 5 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_ex_21832);
    ((intptr_t*)_2)[1] = _ex_21832;
    _12506 = MAKE_SEQ(_1);
    // SubProg get_ovector_size pc: 9 op: MACHINE_FUNC (111)
    _m_21834 = machine(97, _12506);
    DeRefDS(_12506);
    _12506 = NOVALUE;
    // SubProg get_ovector_size pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_m_21834)) {
        _1 = (object)(DBL_PTR(_m_21834)->dbl);
        DeRefDS(_m_21834);
        _m_21834 = _1;
    }
    // SubProg get_ovector_size pc: 15 op: STARTLINE (58)

    /** regex.e:805		if (m > maxsize) then*/
    // SubProg get_ovector_size pc: 17 op: GREATER_IFW_I (124)
    if (_m_21834 <= 30)
    goto L1; // [17] 28
    // SubProg get_ovector_size pc: 21 op: STARTLINE (58)

    /** regex.e:806			return maxsize*/
    // SubProg get_ovector_size pc: 23 op: RETURNF (28)

// Exiting block BLOCK: get_ovector_size

// block var ex_21832
    DeRef(_ex_21832);

// block var m_21834
    return 30;
    // SubProg get_ovector_size pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 21830 op: 159
    // SubProg get_ovector_size pc: 28 op: STARTLINE (58)

    /** regex.e:809		return m+1*/
    // SubProg get_ovector_size pc: 30 op: PLUS1 (93)
    _12509 = _m_21834 + 1;
    if (_12509 > MAXINT){
        _12509 = NewDouble((eudouble)_12509);
    }
    // SubProg get_ovector_size pc: 34 op: RETURNF (28)

// Exiting block BLOCK: get_ovector_size

// block var ex_21832
    DeRef(_ex_21832);

// block var maxsize_21833

// block var m_21834
    return _12509;
    // SubProg get_ovector_size pc: 38 op: BADRETURNF (43)
    ;
}


object _51find(object _re_21842, object _haystack_21844, object _from_21845, object _options_21846, object _size_21847)
{
    object _12516 = NOVALUE; // 21856 12516
    object _12515 = NOVALUE; // 21855 12515
    object _12514 = NOVALUE; // 21854 12514
// skipping _12513  name type: 0
// skipping _12512  name type: 0
    object _12511 = NOVALUE; // 21850 12511
// skipping _12510  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find pc: 1 op: INTEGER_CHECK (96)
    // SubProg find pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_size_21847)) {
        _1 = (object)(DBL_PTR(_size_21847)->dbl);
        DeRefDS(_size_21847);
        _size_21847 = _1;
    }
    // SubProg find pc: 5 op: STARTLINE (58)

    /** regex.e:872		if sequence(options) then */
    // SubProg find pc: 7 op: IS_A_SEQUENCE (68)
    _12511 = 0;
    // SubProg find pc: 10 op: IF (20)
    if (_12511 == 0)
    {
        _12511 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _12511 = NOVALUE;
    }
    // SubProg find pc: 13 op: STARTLINE (58)

    /** regex.e:873			options = math:or_all(options) */
    // SubProg find pc: 15 op: PROC (27)
    _options_21846 = _13or_all(0);
    // SubProg find pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 21840 op: 159
    // SubProg find pc: 20 op: STARTLINE (58)

    /** regex.e:876		if size < 0 then*/
    // SubProg find pc: 22 op: LESS_IFW_I (119)
    if (_size_21847 >= 0)
    goto L2; // [22] 32
    // SubProg find pc: 26 op: STARTLINE (58)

    /** regex.e:877			size = 0*/
    // SubProg find pc: 28 op: ASSIGN_I (113)
    _size_21847 = 0;
    // SubProg find pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 21840 op: 159
    // SubProg find pc: 32 op: STARTLINE (58)

    /** regex.e:880		return machine_func(M_PCRE_EXEC, { re, haystack, length(haystack), options, from, size })*/
    // SubProg find pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_21844)){
            _12514 = SEQ_PTR(_haystack_21844)->length;
    }
    else {
        _12514 = 1;
    }
    // SubProg find pc: 37 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_re_21842);
    ((intptr_t*)_2)[1] = _re_21842;
    Ref(_haystack_21844);
    ((intptr_t*)_2)[2] = _haystack_21844;
    ((intptr_t*)_2)[3] = _12514;
    Ref(_options_21846);
    ((intptr_t*)_2)[4] = _options_21846;
    ((intptr_t*)_2)[5] = _from_21845;
    ((intptr_t*)_2)[6] = _size_21847;
    _12515 = MAKE_SEQ(_1);
    _12514 = NOVALUE;
    // SubProg find pc: 46 op: MACHINE_FUNC (111)
    _12516 = machine(70, _12515);
    DeRefDS(_12515);
    _12515 = NOVALUE;
    // SubProg find pc: 50 op: RETURNF (28)

// Exiting block BLOCK: find

// block var re_21842
    DeRef(_re_21842);

// block var haystack_21844
    DeRef(_haystack_21844);

// block var from_21845

// block var options_21846
    DeRef(_options_21846);

// block var size_21847
    return _12516;
    // SubProg find pc: 54 op: BADRETURNF (43)
    ;
}


object _51has_match(object _re_21888, object _haystack_21890, object _from_21891, object _options_21892)
{
    object _12533 = NOVALUE; // 21895 12533
    object _12532 = NOVALUE; // 21894 12532
    object _12531 = NOVALUE; // 21893 12531
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_match pc: 1 op: INTEGER_CHECK (96)
    // SubProg has_match pc: 3 op: STARTLINE (58)

    /** regex.e:961		return sequence(find(re, haystack, from, options))*/
    // SubProg has_match pc: 5 op: PROC (27)
    Ref(_re_21888);
    _12531 = _51get_ovector_size(_re_21888, 30);
    // SubProg has_match pc: 10 op: PROC (27)
    Ref(_re_21888);
    Ref(_haystack_21890);
    _12532 = _51find(_re_21888, _haystack_21890, 1, 0, _12531);
    _12531 = NOVALUE;
    // SubProg has_match pc: 18 op: IS_A_SEQUENCE (68)
    _12533 = IS_SEQUENCE(_12532);
    DeRef(_12532);
    _12532 = NOVALUE;
    // SubProg has_match pc: 21 op: RETURNF (28)

// Exiting block BLOCK: has_match

// block var re_21888
    DeRef(_re_21888);

// block var haystack_21890
    DeRef(_haystack_21890);

// block var from_21891

// block var options_21892
    return _12533;
    // SubProg has_match pc: 25 op: BADRETURNF (43)
    ;
}



// 0x0EC894CD
