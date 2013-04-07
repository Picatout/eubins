// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _54regex(object _o_22126)
{
    object _12697 = NOVALUE;
    object _0, _1, _2;
    

    /** regex.e:609		return sequence(o)*/
    _12697 = IS_SEQUENCE(_o_22126);
    DeRef(_o_22126);
    return _12697;
    ;
}


object _54new(object _pattern_22166, object _options_22167)
{
    object _12717 = NOVALUE;
    object _12716 = NOVALUE;
    object _12714 = NOVALUE;
    object _0, _1, _2;
    

    /** regex.e:723		if sequence(options) then */
    _12714 = 0;
    if (_12714 == 0)
    {
        _12714 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _12714 = NOVALUE;
    }

    /** regex.e:724			options = math:or_all(options) */
    _options_22167 = _10or_all(_options_22167);
L1: 

    /** regex.e:730		return machine_func(M_PCRE_COMPILE, { pattern, options })*/
    Ref(_options_22167);
    Ref(_pattern_22166);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pattern_22166;
    ((intptr_t *)_2)[2] = _options_22167;
    _12716 = MAKE_SEQ(_1);
    _12717 = machine(68, _12716);
    DeRefDS(_12716);
    _12716 = NOVALUE;
    DeRef(_pattern_22166);
    DeRef(_options_22167);
    return _12717;
    ;
}


object _54get_ovector_size(object _ex_22186, object _maxsize_22187)
{
    object _m_22188 = NOVALUE;
    object _12725 = NOVALUE;
    object _12722 = NOVALUE;
    object _0, _1, _2;
    

    /** regex.e:804		integer m = machine_func(M_PCRE_GET_OVECTOR_SIZE, {ex})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_ex_22186);
    ((intptr_t*)_2)[1] = _ex_22186;
    _12722 = MAKE_SEQ(_1);
    _m_22188 = machine(97, _12722);
    DeRefDS(_12722);
    _12722 = NOVALUE;
    if (!IS_ATOM_INT(_m_22188)) {
        _1 = (object)(DBL_PTR(_m_22188)->dbl);
        DeRefDS(_m_22188);
        _m_22188 = _1;
    }

    /** regex.e:805		if (m > maxsize) then*/
    if (_m_22188 <= 30)
    goto L1; // [17] 28

    /** regex.e:806			return maxsize*/
    DeRef(_ex_22186);
    return 30;
L1: 

    /** regex.e:809		return m+1*/
    _12725 = _m_22188 + 1;
    if (_12725 > MAXINT){
        _12725 = NewDouble((eudouble)_12725);
    }
    DeRef(_ex_22186);
    return _12725;
    ;
}


object _54find(object _re_22196, object _haystack_22198, object _from_22199, object _options_22200, object _size_22201)
{
    object _12732 = NOVALUE;
    object _12731 = NOVALUE;
    object _12730 = NOVALUE;
    object _12727 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_size_22201)) {
        _1 = (object)(DBL_PTR(_size_22201)->dbl);
        DeRefDS(_size_22201);
        _size_22201 = _1;
    }

    /** regex.e:872		if sequence(options) then */
    _12727 = 0;
    if (_12727 == 0)
    {
        _12727 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _12727 = NOVALUE;
    }

    /** regex.e:873			options = math:or_all(options) */
    _options_22200 = _10or_all(0);
L1: 

    /** regex.e:876		if size < 0 then*/
    if (_size_22201 >= 0)
    goto L2; // [22] 32

    /** regex.e:877			size = 0*/
    _size_22201 = 0;
L2: 

    /** regex.e:880		return machine_func(M_PCRE_EXEC, { re, haystack, length(haystack), options, from, size })*/
    if (IS_SEQUENCE(_haystack_22198)){
            _12730 = SEQ_PTR(_haystack_22198)->length;
    }
    else {
        _12730 = 1;
    }
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_re_22196);
    ((intptr_t*)_2)[1] = _re_22196;
    Ref(_haystack_22198);
    ((intptr_t*)_2)[2] = _haystack_22198;
    ((intptr_t*)_2)[3] = _12730;
    Ref(_options_22200);
    ((intptr_t*)_2)[4] = _options_22200;
    ((intptr_t*)_2)[5] = _from_22199;
    ((intptr_t*)_2)[6] = _size_22201;
    _12731 = MAKE_SEQ(_1);
    _12730 = NOVALUE;
    _12732 = machine(70, _12731);
    DeRefDS(_12731);
    _12731 = NOVALUE;
    DeRef(_re_22196);
    DeRef(_haystack_22198);
    DeRef(_options_22200);
    return _12732;
    ;
}


object _54has_match(object _re_22242, object _haystack_22244, object _from_22245, object _options_22246)
{
    object _12749 = NOVALUE;
    object _12748 = NOVALUE;
    object _12747 = NOVALUE;
    object _0, _1, _2;
    

    /** regex.e:961		return sequence(find(re, haystack, from, options))*/
    Ref(_re_22242);
    _12747 = _54get_ovector_size(_re_22242, 30);
    Ref(_re_22242);
    Ref(_haystack_22244);
    _12748 = _54find(_re_22242, _haystack_22244, 1, 0, _12747);
    _12747 = NOVALUE;
    _12749 = IS_SEQUENCE(_12748);
    DeRef(_12748);
    _12748 = NOVALUE;
    DeRef(_re_22242);
    DeRef(_haystack_22244);
    return _12749;
    ;
}



// 0xB08DFFE9
