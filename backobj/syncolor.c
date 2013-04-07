// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _69DisplayColorLine(object _pline_65621, object _string_color_65622, object _multiline_65623)
{
    object _line_65624 = NOVALUE;
    object _32702 = NOVALUE; // 65636 32702
    object _32701 = NOVALUE; // 65634 32701
    object _32700 = NOVALUE; // 65633 32700
    object _32699 = NOVALUE; // 65632 32699
    object _32698 = NOVALUE; // 65631 32698
    object _32697 = NOVALUE; // 65630 32697
// skipping _32696  name type: 0
    object _32695 = NOVALUE; // 65626 32695
    object _32694 = NOVALUE; // 65625 32694
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DisplayColorLine pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg DisplayColorLine pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_string_color_65622)) {
        _1 = (object)(DBL_PTR(_string_color_65622)->dbl);
        DeRefDS(_string_color_65622);
        _string_color_65622 = _1;
    }
    // SubProg DisplayColorLine pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_multiline_65623)) {
        _1 = (object)(DBL_PTR(_multiline_65623)->dbl);
        DeRefDS(_multiline_65623);
        _multiline_65623 = _1;
    }
    // SubProg DisplayColorLine pc: 7 op: STARTLINE (58)

    /** syncolor.e:69		syncolor:set_colors({{"STRING", string_color}})*/
    // SubProg DisplayColorLine pc: 9 op: RIGHT_BRACE_2 (85)
    RefDS(_32576);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _32576;
    ((intptr_t *)_2)[2] = _string_color_65622;
    _32694 = MAKE_SEQ(_1);
    // SubProg DisplayColorLine pc: 13 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _32694;
    _32695 = MAKE_SEQ(_1);
    _32694 = NOVALUE;
    // SubProg DisplayColorLine pc: 17 op: PROC (27)
    _70set_colors(_32695);
    _32695 = NOVALUE;
    // SubProg DisplayColorLine pc: 20 op: STARTLINE (58)

    /** syncolor.e:70		line = syncolor:SyntaxColor(pline, synstate, multiline)*/
    // SubProg DisplayColorLine pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg DisplayColorLine pc: 24 op: PROC (27)
    RefDS(_pline_65621);
    Ref(_69synstate_65607);
    _0 = _line_65624;
    _line_65624 = _70SyntaxColor(_pline_65621, _69synstate_65607, _multiline_65623);
    DeRef(_0);
    // SubProg DisplayColorLine pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg DisplayColorLine pc: 32 op: STARTLINE (58)

    /** syncolor.e:71		for i = 1 to length(line) do*/
    // SubProg DisplayColorLine pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_line_65624)){
            _32697 = SEQ_PTR(_line_65624)->length;
    }
    else {
        _32697 = 1;
    }
    // SubProg DisplayColorLine pc: 37 op: FOR_I (125)
    {
        object _i_65629;
        _i_65629 = 1;
L1: // addr: 44 pc: 37 sub: 65619 op: 125
        if (_i_65629 > _32697){
            goto L2; // [37] 77
        }
        // SubProg DisplayColorLine pc: 44 op: STARTLINE (58)

        /** syncolor.e:74			machine_proc(201, line[i][1])*/
        // SubProg DisplayColorLine pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_line_65624);
        _32698 = (object)*(((s1_ptr)_2)->base + _i_65629);
        // SubProg DisplayColorLine pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_32698);
        _32699 = (object)*(((s1_ptr)_2)->base + 1);
        _32698 = NOVALUE;
        // SubProg DisplayColorLine pc: 54 op: MACHINE_PROC (112)
        machine(201, _32699);
        _32699 = NOVALUE;
        // SubProg DisplayColorLine pc: 57 op: STARTLINE (58)

        /** syncolor.e:76			machine_proc(200, line[i][2])*/
        // SubProg DisplayColorLine pc: 59 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_line_65624);
        _32700 = (object)*(((s1_ptr)_2)->base + _i_65629);
        // SubProg DisplayColorLine pc: 63 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_32700);
        _32701 = (object)*(((s1_ptr)_2)->base + 2);
        _32700 = NOVALUE;
        // SubProg DisplayColorLine pc: 67 op: MACHINE_PROC (112)
        machine(200, _32701);
        _32701 = NOVALUE;
        // SubProg DisplayColorLine pc: 70 op: STARTLINE (58)

        /** syncolor.e:77		end for*/
        // SubProg DisplayColorLine pc: 72 op: ENDFOR_INT_UP1 (54)
        _i_65629 = _i_65629 + 1;
        goto L1; // [72] 44
L2: // addr: 77 pc: 72 sub: 65619 op: 54
        ;
    }
    // SubProg DisplayColorLine pc: 77 op: STARTLINE (58)

    /** syncolor.e:78		return last_multiline_token()*/
    // SubProg DisplayColorLine pc: 79 op: PROC (27)
    _32702 = _71last_multiline_token();
    // SubProg DisplayColorLine pc: 82 op: RETURNF (28)

// Exiting block BLOCK: DisplayColorLine

// block var pline_65621
    DeRefDS(_pline_65621);

// block var string_color_65622

// block var multiline_65623

// block var line_65624
    DeRef(_line_65624);
    return _32702;
    // SubProg DisplayColorLine pc: 86 op: BADRETURNF (43)
    ;
}



// 0x2185DAD9
