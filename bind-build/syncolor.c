// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _70DisplayColorLine(object _pline_65620, object _string_color_65621, object _multiline_65622)
{
    object _line_65623 = NOVALUE;
    object _32694 = NOVALUE;
    object _32693 = NOVALUE;
    object _32692 = NOVALUE;
    object _32691 = NOVALUE;
    object _32690 = NOVALUE;
    object _32689 = NOVALUE;
    object _32687 = NOVALUE;
    object _32686 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_string_color_65621)) {
        _1 = (object)(DBL_PTR(_string_color_65621)->dbl);
        DeRefDS(_string_color_65621);
        _string_color_65621 = _1;
    }
    if (!IS_ATOM_INT(_multiline_65622)) {
        _1 = (object)(DBL_PTR(_multiline_65622)->dbl);
        DeRefDS(_multiline_65622);
        _multiline_65622 = _1;
    }

    /** syncolor.e:69		syncolor:set_colors({{"STRING", string_color}})*/
    RefDS(_32568);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _32568;
    ((intptr_t *)_2)[2] = _string_color_65621;
    _32686 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _32686;
    _32687 = MAKE_SEQ(_1);
    _32686 = NOVALUE;
    _71set_colors(_32687);
    _32687 = NOVALUE;

    /** syncolor.e:70		line = syncolor:SyntaxColor(pline, synstate, multiline)*/
    RefDS(_pline_65620);
    Ref(_70synstate_65606);
    _0 = _line_65623;
    _line_65623 = _71SyntaxColor(_pline_65620, _70synstate_65606, _multiline_65622);
    DeRef(_0);

    /** syncolor.e:71		for i = 1 to length(line) do*/
    if (IS_SEQUENCE(_line_65623)){
            _32689 = SEQ_PTR(_line_65623)->length;
    }
    else {
        _32689 = 1;
    }
    {
        object _i_65628;
        _i_65628 = 1;
L1: 
        if (_i_65628 > _32689){
            goto L2; // [37] 77
        }

        /** syncolor.e:74			machine_proc(201, line[i][1])*/
        _2 = (object)SEQ_PTR(_line_65623);
        _32690 = (object)*(((s1_ptr)_2)->base + _i_65628);
        _2 = (object)SEQ_PTR(_32690);
        _32691 = (object)*(((s1_ptr)_2)->base + 1);
        _32690 = NOVALUE;
        machine(201, _32691);
        _32691 = NOVALUE;

        /** syncolor.e:76			machine_proc(200, line[i][2])*/
        _2 = (object)SEQ_PTR(_line_65623);
        _32692 = (object)*(((s1_ptr)_2)->base + _i_65628);
        _2 = (object)SEQ_PTR(_32692);
        _32693 = (object)*(((s1_ptr)_2)->base + 2);
        _32692 = NOVALUE;
        machine(200, _32693);
        _32693 = NOVALUE;

        /** syncolor.e:77		end for*/
        _i_65628 = _i_65628 + 1;
        goto L1; // [72] 44
L2: 
        ;
    }

    /** syncolor.e:78		return last_multiline_token()*/
    _32694 = _72last_multiline_token();
    DeRefDS(_pline_65620);
    DeRef(_line_65623);
    return _32694;
    ;
}



// 0x25AB6EF0
