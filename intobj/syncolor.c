// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _69DisplayColorLine(object _pline_65680, object _string_color_65681, object _multiline_65682)
{
    object _line_65683 = NOVALUE;
    object _32757 = NOVALUE; // 65695 32757
    object _32756 = NOVALUE; // 65693 32756
    object _32755 = NOVALUE; // 65692 32755
    object _32754 = NOVALUE; // 65691 32754
    object _32753 = NOVALUE; // 65690 32753
    object _32752 = NOVALUE; // 65689 32752
// skipping _32751  name type: 0
    object _32750 = NOVALUE; // 65685 32750
    object _32749 = NOVALUE; // 65684 32749
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DisplayColorLine pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg DisplayColorLine pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_string_color_65681)) {
        _1 = (object)(DBL_PTR(_string_color_65681)->dbl);
        DeRefDS(_string_color_65681);
        _string_color_65681 = _1;
    }
    // SubProg DisplayColorLine pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_multiline_65682)) {
        _1 = (object)(DBL_PTR(_multiline_65682)->dbl);
        DeRefDS(_multiline_65682);
        _multiline_65682 = _1;
    }
    // SubProg DisplayColorLine pc: 7 op: STARTLINE (58)

    /** syncolor.e:69		syncolor:set_colors({{"STRING", string_color}})*/
    // SubProg DisplayColorLine pc: 9 op: RIGHT_BRACE_2 (85)
    RefDS(_32632);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _32632;
    ((intptr_t *)_2)[2] = _string_color_65681;
    _32749 = MAKE_SEQ(_1);
    // SubProg DisplayColorLine pc: 13 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _32749;
    _32750 = MAKE_SEQ(_1);
    _32749 = NOVALUE;
    // SubProg DisplayColorLine pc: 17 op: PROC (27)
    _70set_colors(_32750);
    _32750 = NOVALUE;
    // SubProg DisplayColorLine pc: 20 op: STARTLINE (58)

    /** syncolor.e:70		line = syncolor:SyntaxColor(pline, synstate, multiline)*/
    // SubProg DisplayColorLine pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg DisplayColorLine pc: 24 op: PROC (27)
    RefDS(_pline_65680);
    Ref(_69synstate_65666);
    _0 = _line_65683;
    _line_65683 = _70SyntaxColor(_pline_65680, _69synstate_65666, _multiline_65682);
    DeRef(_0);
    // SubProg DisplayColorLine pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg DisplayColorLine pc: 32 op: STARTLINE (58)

    /** syncolor.e:71		for i = 1 to length(line) do*/
    // SubProg DisplayColorLine pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_line_65683)){
            _32752 = SEQ_PTR(_line_65683)->length;
    }
    else {
        _32752 = 1;
    }
    // SubProg DisplayColorLine pc: 37 op: FOR_I (125)
    {
        object _i_65688;
        _i_65688 = 1;
L1: // addr: 44 pc: 37 sub: 65678 op: 125
        if (_i_65688 > _32752){
            goto L2; // [37] 77
        }
        // SubProg DisplayColorLine pc: 44 op: STARTLINE (58)

        /** syncolor.e:74			machine_proc(201, line[i][1])*/
        // SubProg DisplayColorLine pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_line_65683);
        _32753 = (object)*(((s1_ptr)_2)->base + _i_65688);
        // SubProg DisplayColorLine pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_32753);
        _32754 = (object)*(((s1_ptr)_2)->base + 1);
        _32753 = NOVALUE;
        // SubProg DisplayColorLine pc: 54 op: MACHINE_PROC (112)
        machine(201, _32754);
        _32754 = NOVALUE;
        // SubProg DisplayColorLine pc: 57 op: STARTLINE (58)

        /** syncolor.e:76			machine_proc(200, line[i][2])*/
        // SubProg DisplayColorLine pc: 59 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_line_65683);
        _32755 = (object)*(((s1_ptr)_2)->base + _i_65688);
        // SubProg DisplayColorLine pc: 63 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_32755);
        _32756 = (object)*(((s1_ptr)_2)->base + 2);
        _32755 = NOVALUE;
        // SubProg DisplayColorLine pc: 67 op: MACHINE_PROC (112)
        machine(200, _32756);
        _32756 = NOVALUE;
        // SubProg DisplayColorLine pc: 70 op: STARTLINE (58)

        /** syncolor.e:77		end for*/
        // SubProg DisplayColorLine pc: 72 op: ENDFOR_INT_UP1 (54)
        _i_65688 = _i_65688 + 1;
        goto L1; // [72] 44
L2: // addr: 77 pc: 72 sub: 65678 op: 54
        ;
    }
    // SubProg DisplayColorLine pc: 77 op: STARTLINE (58)

    /** syncolor.e:78		return last_multiline_token()*/
    // SubProg DisplayColorLine pc: 79 op: PROC (27)
    _32757 = _71last_multiline_token();
    // SubProg DisplayColorLine pc: 82 op: RETURNF (28)

// Exiting block BLOCK: DisplayColorLine

// block var pline_65680
    DeRefDS(_pline_65680);

// block var string_color_65681

// block var multiline_65682

// block var line_65683
    DeRef(_line_65683);
    return _32757;
    // SubProg DisplayColorLine pc: 86 op: BADRETURNF (43)
    ;
}



// 0x6B3EB611
