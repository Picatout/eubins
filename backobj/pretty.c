// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _25pretty_out(object _text_8737)
{
// skipping _4771  name type: 0
    object _4770 = NOVALUE; // 8747 4770
// skipping _4769  name type: 0
    object _4768 = NOVALUE; // 8744 4768
// skipping _4767  name type: 0
    object _4766 = NOVALUE; // 8741 4766
    object _4765 = NOVALUE; // 8740 4765
// skipping _4764  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pretty_out pc: 1 op: STARTLINE (58)

    /** pretty.e:19		pretty_line &= text*/
    // SubProg pretty_out pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 5 op: CONCAT (15)
    if (IS_SEQUENCE(_25pretty_line_8734) && IS_ATOM(_text_8737)) {
        Ref(_text_8737);
        Append(&_25pretty_line_8734, _25pretty_line_8734, _text_8737);
    }
    else if (IS_ATOM(_25pretty_line_8734) && IS_SEQUENCE(_text_8737)) {
    }
    else {
        Concat((object_ptr)&_25pretty_line_8734, _25pretty_line_8734, _text_8737);
    }
    // SubProg pretty_out pc: 9 op: STARTLINE (58)

    /** pretty.e:20		if equal(text, '\n') and pretty_printing then*/
    // SubProg pretty_out pc: 11 op: EQUAL (153)
    if (_text_8737 == 10)
    _4765 = 1;
    else if (IS_ATOM_INT(_text_8737) && IS_ATOM_INT(10))
    _4765 = 0;
    else
    _4765 = (compare(_text_8737, 10) == 0);
    // SubProg pretty_out pc: 15 op: SC1_AND_IF (146)
    if (_4765 == 0) {
        goto L1; // [15] 50
    }
    // SubProg pretty_out pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 21 op: NOP1 (159)
    // SubProg pretty_out pc: 22 op: IF (20)
    goto L1; // [22] 50
    // SubProg pretty_out pc: 25 op: STARTLINE (58)

    /** pretty.e:21			puts(pretty_file, pretty_line)*/
    // SubProg pretty_out pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 31 op: PUTS (44)
    EPuts(_25pretty_file_8722, _25pretty_line_8734); // DJP 
    // SubProg pretty_out pc: 34 op: STARTLINE (58)

    /** pretty.e:22			pretty_line = ""*/
    // SubProg pretty_out pc: 36 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_25pretty_line_8734);
    _25pretty_line_8734 = _5;
    // SubProg pretty_out pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg pretty_out pc: 41 op: STARTLINE (58)

    /** pretty.e:23			pretty_line_count += 1*/
    // SubProg pretty_out pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 45 op: PLUS1_I (117)
    _25pretty_line_count_8727 = _25pretty_line_count_8727 + 1;
    // SubProg pretty_out pc: 49 op: NOP1 (159)
L1: // addr: 50 pc: 49 sub: 8735 op: 159
    // SubProg pretty_out pc: 50 op: STARTLINE (58)

    /** pretty.e:25		if atom(text) then*/
    // SubProg pretty_out pc: 52 op: IS_AN_ATOM (67)
    _4768 = IS_ATOM(_text_8737);
    // SubProg pretty_out pc: 55 op: IF (20)
    if (_4768 == 0)
    {
        _4768 = NOVALUE;
        goto L2; // [55] 69
    }
    else{
        _4768 = NOVALUE;
    }
    // SubProg pretty_out pc: 58 op: STARTLINE (58)

    /** pretty.e:26			pretty_chars += 1*/
    // SubProg pretty_out pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 62 op: PLUS1_I (117)
    _25pretty_chars_8719 = _25pretty_chars_8719 + 1;
    // SubProg pretty_out pc: 66 op: ELSE (23)
    goto L3; // [66] 81
    // SubProg pretty_out pc: 68 op: NOP1 (159)
L2: // addr: 69 pc: 68 sub: 8735 op: 159
    // SubProg pretty_out pc: 69 op: STARTLINE (58)

    /** pretty.e:28			pretty_chars += length(text)*/
    // SubProg pretty_out pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_text_8737)){
            _4770 = SEQ_PTR(_text_8737)->length;
    }
    else {
        _4770 = 1;
    }
    // SubProg pretty_out pc: 76 op: PLUS_I (115)
    _25pretty_chars_8719 = _25pretty_chars_8719 + _4770;
    _4770 = NOVALUE;
    // SubProg pretty_out pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 8735 op: 159
    // SubProg pretty_out pc: 81 op: STARTLINE (58)

    /** pretty.e:30	end procedure*/
    // SubProg pretty_out pc: 83 op: RETURNP (29)

// Exiting block BLOCK: pretty_out

// block var text_8737
    DeRef(_text_8737);
    return;
    // SubProg pretty_out pc: 86 op: BADRETURNF (43)
    ;
}


void _25cut_line(object _n_8751)
{
// skipping _4774  name type: 0
    object _4773 = NOVALUE; // 8755 4773
// skipping _4772  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cut_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg cut_line pc: 3 op: STARTLINE (58)

    /** pretty.e:34		if not pretty_line_breaks then	*/
    // SubProg cut_line pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 7 op: NOT_IFW (108)
    if (_25pretty_line_breaks_8730 != 0)
    goto L1; // [7] 21
    // SubProg cut_line pc: 10 op: STARTLINE (58)

    /** pretty.e:35			pretty_chars = 0*/
    // SubProg cut_line pc: 12 op: ASSIGN_I (113)
    _25pretty_chars_8719 = 0;
    // SubProg cut_line pc: 15 op: STARTLINE (58)

    /** pretty.e:36			return*/
    // SubProg cut_line pc: 17 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: cut_line

// block var n_8751
    return;
    // SubProg cut_line pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 8749 op: 159
    // SubProg cut_line pc: 21 op: STARTLINE (58)

    /** pretty.e:38		if pretty_chars + n > pretty_end_col then*/
    // SubProg cut_line pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 25 op: PLUS (11)
    _4773 = _25pretty_chars_8719 + _n_8751;
    if ((object)((uintptr_t)_4773 + (uintptr_t)HIGH_BITS) >= 0){
        _4773 = NewDouble((eudouble)_4773);
    }
    // SubProg cut_line pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 31 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _4773, _25pretty_end_col_8718)){
        DeRef(_4773);
        _4773 = NOVALUE;
        goto L2; // [31] 46
    }
    DeRef(_4773);
    _4773 = NOVALUE;
    // SubProg cut_line pc: 35 op: STARTLINE (58)

    /** pretty.e:39			pretty_out('\n')*/
    // SubProg cut_line pc: 37 op: PROC (27)
    _25pretty_out(10);
    // SubProg cut_line pc: 40 op: STARTLINE (58)

    /** pretty.e:40			pretty_chars = 0*/
    // SubProg cut_line pc: 42 op: ASSIGN_I (113)
    _25pretty_chars_8719 = 0;
    // SubProg cut_line pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 8749 op: 159
    // SubProg cut_line pc: 46 op: STARTLINE (58)

    /** pretty.e:42	end procedure*/
    // SubProg cut_line pc: 48 op: RETURNP (29)

// Exiting block BLOCK: cut_line

// block var n_8751
    return;
    // SubProg cut_line pc: 51 op: BADRETURNF (43)
    ;
}


void _25indent()
{
    object _4781 = NOVALUE; // 8769 4781
    object _4780 = NOVALUE; // 8768 4780
    object _4779 = NOVALUE; // 8767 4779
    object _4778 = NOVALUE; // 8766 4778
// skipping _4777  name type: 0
// skipping _4776  name type: 0
// skipping _4775  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg indent pc: 1 op: STARTLINE (58)

    /** pretty.e:46		if pretty_line_breaks = 0 then	*/
    // SubProg indent pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 5 op: EQUALS_IFW_I (121)
    if (_25pretty_line_breaks_8730 != 0)
    goto L1; // [5] 22
    // SubProg indent pc: 9 op: STARTLINE (58)

    /** pretty.e:47			pretty_chars = 0*/
    // SubProg indent pc: 11 op: ASSIGN_I (113)
    _25pretty_chars_8719 = 0;
    // SubProg indent pc: 14 op: STARTLINE (58)

    /** pretty.e:48			return*/
    // SubProg indent pc: 16 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: indent
    return;
    // SubProg indent pc: 19 op: ELSE (23)
    goto L2; // [19] 85
    // SubProg indent pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 8757 op: 159
    // SubProg indent pc: 22 op: STARTLINE (58)

    /** pretty.e:49		elsif pretty_line_breaks = -1 then*/
    // SubProg indent pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 26 op: EQUALS_IFW_I (121)
    if (_25pretty_line_breaks_8730 != -1)
    goto L3; // [26] 38
    // SubProg indent pc: 30 op: STARTLINE (58)

    /** pretty.e:51			cut_line( 0 )*/
    // SubProg indent pc: 32 op: PROC (27)
    _25cut_line(0);
    // SubProg indent pc: 35 op: ELSE (23)
    goto L2; // [35] 85
    // SubProg indent pc: 37 op: NOP1 (159)
L3: // addr: 38 pc: 37 sub: 8757 op: 159
    // SubProg indent pc: 38 op: STARTLINE (58)

    /** pretty.e:54			if pretty_chars > 0 then*/
    // SubProg indent pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 42 op: GREATER_IFW_I (124)
    if (_25pretty_chars_8719 <= 0)
    goto L4; // [42] 57
    // SubProg indent pc: 46 op: STARTLINE (58)

    /** pretty.e:55				pretty_out('\n')*/
    // SubProg indent pc: 48 op: PROC (27)
    _25pretty_out(10);
    // SubProg indent pc: 51 op: STARTLINE (58)

    /** pretty.e:56				pretty_chars = 0*/
    // SubProg indent pc: 53 op: ASSIGN_I (113)
    _25pretty_chars_8719 = 0;
    // SubProg indent pc: 56 op: NOP1 (159)
L4: // addr: 57 pc: 56 sub: 8757 op: 159
    // SubProg indent pc: 57 op: STARTLINE (58)

    /** pretty.e:58			pretty_out(repeat(' ', (pretty_start_col-1) + */
    // SubProg indent pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 61 op: MINUS (10)
    _4778 = _25pretty_start_col_8720 - 1;
    if ((object)((uintptr_t)_4778 +(uintptr_t) HIGH_BITS) >= 0){
        _4778 = NewDouble((eudouble)_4778);
    }
    // SubProg indent pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 69 op: MULTIPLY (13)
    if (_25pretty_level_8721 == (short)_25pretty_level_8721 && _25pretty_indent_8724 <= INT15 && _25pretty_indent_8724 >= -INT15){
        _4779 = _25pretty_level_8721 * _25pretty_indent_8724;
    }
    else{
        _4779 = NewDouble(_25pretty_level_8721 * (eudouble)_25pretty_indent_8724);
    }
    // SubProg indent pc: 73 op: PLUS (11)
    if (IS_ATOM_INT(_4778) && IS_ATOM_INT(_4779)) {
        _4780 = _4778 + _4779;
    }
    else {
        if (IS_ATOM_INT(_4778)) {
            _4780 = NewDouble((eudouble)_4778 + DBL_PTR(_4779)->dbl);
        }
        else {
            if (IS_ATOM_INT(_4779)) {
                _4780 = NewDouble(DBL_PTR(_4778)->dbl + (eudouble)_4779);
            }
            else
            _4780 = NewDouble(DBL_PTR(_4778)->dbl + DBL_PTR(_4779)->dbl);
        }
    }
    DeRef(_4778);
    _4778 = NOVALUE;
    DeRef(_4779);
    _4779 = NOVALUE;
    // SubProg indent pc: 77 op: REPEAT (32)
    _4781 = Repeat(32, _4780);
    DeRef(_4780);
    _4780 = NOVALUE;
    // SubProg indent pc: 81 op: PROC (27)
    _25pretty_out(_4781);
    _4781 = NOVALUE;
    // SubProg indent pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 8757 op: 159
    // SubProg indent pc: 85 op: STARTLINE (58)

    /** pretty.e:62	end procedure*/
    // SubProg indent pc: 87 op: RETURNP (29)

// Exiting block BLOCK: indent
    return;
    // SubProg indent pc: 90 op: BADRETURNF (43)
    ;
}


object _25esc_char(object _a_8772)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg esc_char pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_a_8772)) {
        _1 = (object)(DBL_PTR(_a_8772)->dbl);
        DeRefDS(_a_8772);
        _a_8772 = _1;
    }
    // SubProg esc_char pc: 3 op: STARTLINE (58)

    /** pretty.e:66		switch a do*/
    // SubProg esc_char pc: 5 op: SWITCH_I (193)
    _0 = _a_8772;
    switch ( _0 ){ 
        // SubProg esc_char pc: 10 op: STARTLINE (58)

        /** pretty.e:67			case'\t' then*/
        // SubProg esc_char pc: 12 op: CASE (186)
        case 9:
        // SubProg esc_char pc: 14 op: STARTLINE (58)

        /** pretty.e:68				return `\t`*/
        // SubProg esc_char pc: 16 op: RETURNF (28)
        RefDS(_4784);

// Exiting block BLOCK: esc_char

// block var a_8772
        return _4784;
        // SubProg esc_char pc: 20 op: ELSE (23)
        goto L1; // [20] 81
        // SubProg esc_char pc: 22 op: STARTLINE (58)

        /** pretty.e:70			case'\n' then*/
        // SubProg esc_char pc: 24 op: CASE (186)
        case 10:
        // SubProg esc_char pc: 26 op: STARTLINE (58)

        /** pretty.e:71				return `\n`*/
        // SubProg esc_char pc: 28 op: RETURNF (28)
        RefDS(_4785);

// Exiting block BLOCK: esc_char

// block var a_8772
        return _4785;
        // SubProg esc_char pc: 32 op: ELSE (23)
        goto L1; // [32] 81
        // SubProg esc_char pc: 34 op: STARTLINE (58)

        /** pretty.e:73			case'\r' then*/
        // SubProg esc_char pc: 36 op: CASE (186)
        case 13:
        // SubProg esc_char pc: 38 op: STARTLINE (58)

        /** pretty.e:74				return `\r`*/
        // SubProg esc_char pc: 40 op: RETURNF (28)
        RefDS(_4786);

// Exiting block BLOCK: esc_char

// block var a_8772
        return _4786;
        // SubProg esc_char pc: 44 op: ELSE (23)
        goto L1; // [44] 81
        // SubProg esc_char pc: 46 op: STARTLINE (58)

        /** pretty.e:76			case'\\' then*/
        // SubProg esc_char pc: 48 op: CASE (186)
        case 92:
        // SubProg esc_char pc: 50 op: STARTLINE (58)

        /** pretty.e:77				return `\\`*/
        // SubProg esc_char pc: 52 op: RETURNF (28)
        RefDS(_1501);

// Exiting block BLOCK: esc_char

// block var a_8772
        return _1501;
        // SubProg esc_char pc: 56 op: ELSE (23)
        goto L1; // [56] 81
        // SubProg esc_char pc: 58 op: STARTLINE (58)

        /** pretty.e:79			case'"' then*/
        // SubProg esc_char pc: 60 op: CASE (186)
        case 34:
        // SubProg esc_char pc: 62 op: STARTLINE (58)

        /** pretty.e:80				return `\"`*/
        // SubProg esc_char pc: 64 op: RETURNF (28)
        RefDS(_4787);

// Exiting block BLOCK: esc_char

// block var a_8772
        return _4787;
        // SubProg esc_char pc: 68 op: ELSE (23)
        goto L1; // [68] 81
        // SubProg esc_char pc: 70 op: STARTLINE (58)

        /** pretty.e:82			case else*/
        // SubProg esc_char pc: 72 op: CASE (186)
        default:
        // SubProg esc_char pc: 74 op: STARTLINE (58)

        /** pretty.e:83				return a*/
        // SubProg esc_char pc: 76 op: RETURNF (28)

// Exiting block BLOCK: esc_char
        return _a_8772;
        // SubProg esc_char pc: 80 op: NOPSWITCH (187)
    ;}L1: // addr: 81 pc: 80 sub: 8770 op: 187
    // SubProg esc_char pc: 81 op: BADRETURNF (43)
    ;
}


void _25rPrint(object _a_8787)
{
    object _sbuff_8788 = NOVALUE;
    object _multi_line_8789 = NOVALUE;
    object _all_ascii_8790 = NOVALUE;
// skipping _4844  name type: 0
    object _4843 = NOVALUE; // 8870 4843
    object _4842 = NOVALUE; // 8869 4842
    object _4841 = NOVALUE; // 8868 4841
    object _4840 = NOVALUE; // 8867 4840
// skipping _4838  name type: 0
// skipping _4837  name type: 0
    object _4836 = NOVALUE; // 8860 4836
    object _4835 = NOVALUE; // 8858 4835
    object _4834 = NOVALUE; // 8857 4834
    object _4833 = NOVALUE; // 8854 4833
// skipping _4832  name type: 0
    object _4831 = NOVALUE; // 8848 4831
    object _4830 = NOVALUE; // 8847 4830
// skipping _4829  name type: 0
    object _4828 = NOVALUE; // 8845 4828
    object _4827 = NOVALUE; // 8844 4827
    object _4825 = NOVALUE; // 8842 4825
    object _4824 = NOVALUE; // 8841 4824
    object _4823 = NOVALUE; // 8840 4823
    object _4822 = NOVALUE; // 8839 4822
    object _4821 = NOVALUE; // 8838 4821
    object _4820 = NOVALUE; // 8837 4820
    object _4819 = NOVALUE; // 8836 4819
    object _4818 = NOVALUE; // 8835 4818
    object _4817 = NOVALUE; // 8834 4817
    object _4816 = NOVALUE; // 8833 4816
    object _4815 = NOVALUE; // 8831 4815
    object _4814 = NOVALUE; // 8830 4814
    object _4813 = NOVALUE; // 8829 4813
    object _4812 = NOVALUE; // 8828 4812
    object _4811 = NOVALUE; // 8827 4811
    object _4810 = NOVALUE; // 8826 4810
    object _4809 = NOVALUE; // 8824 4809
// skipping _4808  name type: 0
// skipping _4807  name type: 0
// skipping _4806  name type: 0
    object _4805 = NOVALUE; // 8816 4805
    object _4804 = NOVALUE; // 8815 4804
    object _4803 = NOVALUE; // 8814 4803
    object _4802 = NOVALUE; // 8813 4802
    object _4801 = NOVALUE; // 8812 4801
    object _4800 = NOVALUE; // 8811 4800
// skipping _4799  name type: 0
    object _4798 = NOVALUE; // 8807 4798
    object _4797 = NOVALUE; // 8806 4797
// skipping _4795  name type: 0
    object _4794 = NOVALUE; // 8802 4794
    object _4793 = NOVALUE; // 8801 4793
    object _4792 = NOVALUE; // 8800 4792
// skipping _4791  name type: 0
// skipping _4790  name type: 0
    object _4789 = NOVALUE; // 8794 4789
    object _4788 = NOVALUE; // 8792 4788
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rPrint pc: 1 op: STARTLINE (58)

    /** pretty.e:92		if atom(a) then*/
    // SubProg rPrint pc: 3 op: IS_AN_ATOM (67)
    _4788 = IS_ATOM(_a_8787);
    // SubProg rPrint pc: 6 op: IF (20)
    if (_4788 == 0)
    {
        _4788 = NOVALUE;
        goto L1; // [6] 176
    }
    else{
        _4788 = NOVALUE;
    }
    // SubProg rPrint pc: 9 op: STARTLINE (58)

    /** pretty.e:93			if integer(a) then*/
    // SubProg rPrint pc: 11 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_a_8787))
    _4789 = 1;
    else if (IS_ATOM_DBL(_a_8787))
    _4789 = IS_ATOM_INT(DoubleToInt(_a_8787));
    else
    _4789 = 0;
    // SubProg rPrint pc: 14 op: IF (20)
    if (_4789 == 0)
    {
        _4789 = NOVALUE;
        goto L2; // [14] 157
    }
    else{
        _4789 = NOVALUE;
    }
    // SubProg rPrint pc: 17 op: STARTLINE (58)

    /** pretty.e:94				sbuff = sprintf(pretty_int_format, a)*/
    // SubProg rPrint pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 21 op: SPRINTF (53)
    DeRef(_sbuff_8788);
    _sbuff_8788 = EPrintf(-9999999, _25pretty_int_format_8733, _a_8787);
    // SubProg rPrint pc: 25 op: STARTLINE (58)

    /** pretty.e:95				if pretty_ascii then */
    // SubProg rPrint pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 29 op: IF (20)
    if (_25pretty_ascii_8723 == 0)
    {
        goto L3; // [29] 166
    }
    else{
    }
    // SubProg rPrint pc: 32 op: STARTLINE (58)

    /** pretty.e:96					if pretty_ascii >= 3 then */
    // SubProg rPrint pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 36 op: GREATEREQ_IFW_I (120)
    if (_25pretty_ascii_8723 < 3)
    goto L4; // [36] 103
    // SubProg rPrint pc: 40 op: STARTLINE (58)

    /** pretty.e:98						if (a >= pretty_ascii_min and a <= pretty_ascii_max) then*/
    // SubProg rPrint pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 44 op: GREATEREQ (2)
    if (IS_ATOM_INT(_a_8787)) {
        _4792 = (_a_8787 >= _25pretty_ascii_min_8725);
    }
    else {
        _4792 = binary_op(GREATEREQ, _a_8787, _25pretty_ascii_min_8725);
    }
    // SubProg rPrint pc: 48 op: SC1_AND (141)
    if (IS_ATOM_INT(_4792)) {
        if (_4792 == 0) {
            _4793 = 0;
            goto L5; // [48] 62
        }
    }
    else {
        if (DBL_PTR(_4792)->dbl == 0.0) {
            _4793 = 0;
            goto L5; // [48] 62
        }
    }
    // SubProg rPrint pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 54 op: LESSEQ (5)
    if (IS_ATOM_INT(_a_8787)) {
        _4794 = (_a_8787 <= _25pretty_ascii_max_8726);
    }
    else {
        _4794 = binary_op(LESSEQ, _a_8787, _25pretty_ascii_max_8726);
    }
    // SubProg rPrint pc: 58 op: SC2_AND (142)
    DeRef(_4793);
    if (IS_ATOM_INT(_4794))
    _4793 = (_4794 != 0);
    else
    _4793 = DBL_PTR(_4794)->dbl != 0.0;
    // SubProg rPrint pc: 61 op: NOP1 (159)
L5: // addr: 62 pc: 61 sub: 8785 op: 159
    // SubProg rPrint pc: 62 op: IF (20)
    if (_4793 == 0)
    {
        _4793 = NOVALUE;
        goto L6; // [62] 76
    }
    else{
        _4793 = NOVALUE;
    }
    // SubProg rPrint pc: 65 op: STARTLINE (58)

    /** pretty.e:99							sbuff = '\'' & a & '\''  -- display char only*/
    // SubProg rPrint pc: 67 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_8787;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_8788, concat_list, 3);
    }
    // SubProg rPrint pc: 73 op: ELSE (23)
    goto L3; // [73] 166
    // SubProg rPrint pc: 75 op: NOP1 (159)
L6: // addr: 76 pc: 75 sub: 8785 op: 159
    // SubProg rPrint pc: 76 op: STARTLINE (58)

    /** pretty.e:101						elsif find(a, "\t\n\r\\") then*/
    // SubProg rPrint pc: 78 op: FIND_FROM (176)
    _4797 = find_from(_a_8787, _4796, 1);
    // SubProg rPrint pc: 83 op: IF (20)
    if (_4797 == 0)
    {
        _4797 = NOVALUE;
        goto L3; // [83] 166
    }
    else{
        _4797 = NOVALUE;
    }
    // SubProg rPrint pc: 86 op: STARTLINE (58)

    /** pretty.e:102							sbuff = '\'' & esc_char(a) & '\''  -- display char only*/
    // SubProg rPrint pc: 88 op: PROC (27)
    Ref(_a_8787);
    _4798 = _25esc_char(_a_8787);
    // SubProg rPrint pc: 92 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _4798;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_8788, concat_list, 3);
    }
    DeRef(_4798);
    _4798 = NOVALUE;
    // SubProg rPrint pc: 98 op: NOP1 (159)
    // SubProg rPrint pc: 99 op: NOP1 (159)
    // SubProg rPrint pc: 100 op: ELSE (23)
    goto L3; // [100] 166
    // SubProg rPrint pc: 102 op: NOP1 (159)
L4: // addr: 103 pc: 102 sub: 8785 op: 159
    // SubProg rPrint pc: 103 op: STARTLINE (58)

    /** pretty.e:107						if (a >= pretty_ascii_min and a <= pretty_ascii_max) and pretty_ascii < 2 then*/
    // SubProg rPrint pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 107 op: GREATEREQ (2)
    if (IS_ATOM_INT(_a_8787)) {
        _4800 = (_a_8787 >= _25pretty_ascii_min_8725);
    }
    else {
        _4800 = binary_op(GREATEREQ, _a_8787, _25pretty_ascii_min_8725);
    }
    // SubProg rPrint pc: 111 op: SC1_AND (141)
    if (IS_ATOM_INT(_4800)) {
        if (_4800 == 0) {
            DeRef(_4801);
            _4801 = 0;
            goto L7; // [111] 125
        }
    }
    else {
        if (DBL_PTR(_4800)->dbl == 0.0) {
            DeRef(_4801);
            _4801 = 0;
            goto L7; // [111] 125
        }
    }
    // SubProg rPrint pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 117 op: LESSEQ (5)
    if (IS_ATOM_INT(_a_8787)) {
        _4802 = (_a_8787 <= _25pretty_ascii_max_8726);
    }
    else {
        _4802 = binary_op(LESSEQ, _a_8787, _25pretty_ascii_max_8726);
    }
    // SubProg rPrint pc: 121 op: SC2_AND (142)
    DeRef(_4801);
    if (IS_ATOM_INT(_4802))
    _4801 = (_4802 != 0);
    else
    _4801 = DBL_PTR(_4802)->dbl != 0.0;
    // SubProg rPrint pc: 124 op: NOP1 (159)
L7: // addr: 125 pc: 124 sub: 8785 op: 159
    // SubProg rPrint pc: 125 op: SC1_AND_IF (146)
    if (_4801 == 0) {
        goto L3; // [125] 166
    }
    // SubProg rPrint pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 131 op: LESS (1)
    _4804 = (_25pretty_ascii_8723 < 2);
    // SubProg rPrint pc: 135 op: NOP1 (159)
    // SubProg rPrint pc: 136 op: IF (20)
    if (_4804 == 0)
    {
        DeRef(_4804);
        _4804 = NOVALUE;
        goto L3; // [136] 166
    }
    else{
        DeRef(_4804);
        _4804 = NOVALUE;
    }
    // SubProg rPrint pc: 139 op: STARTLINE (58)

    /** pretty.e:108							sbuff &= '\'' & a & '\'' -- add to numeric display*/
    // SubProg rPrint pc: 141 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_8787;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_4805, concat_list, 3);
    }
    // SubProg rPrint pc: 147 op: CONCAT (15)
    Concat((object_ptr)&_sbuff_8788, _sbuff_8788, _4805);
    DeRefDS(_4805);
    _4805 = NOVALUE;
    // SubProg rPrint pc: 151 op: NOP1 (159)
    // SubProg rPrint pc: 152 op: NOP1 (159)
    // SubProg rPrint pc: 153 op: NOP1 (159)
    // SubProg rPrint pc: 154 op: ELSE (23)
    goto L3; // [154] 166
    // SubProg rPrint pc: 156 op: NOP1 (159)
L2: // addr: 157 pc: 156 sub: 8785 op: 159
    // SubProg rPrint pc: 157 op: STARTLINE (58)

    /** pretty.e:113				sbuff = sprintf(pretty_fp_format, a)*/
    // SubProg rPrint pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 161 op: SPRINTF (53)
    DeRef(_sbuff_8788);
    _sbuff_8788 = EPrintf(-9999999, _25pretty_fp_format_8732, _a_8787);
    // SubProg rPrint pc: 165 op: NOP1 (159)
L3: // addr: 166 pc: 165 sub: 8785 op: 159
    // SubProg rPrint pc: 166 op: STARTLINE (58)

    /** pretty.e:115			pretty_out(sbuff)*/
    // SubProg rPrint pc: 168 op: PRIVATE_INIT_CHECK (30)
    // SubProg rPrint pc: 170 op: PROC (27)
    RefDS(_sbuff_8788);
    _25pretty_out(_sbuff_8788);
    // SubProg rPrint pc: 173 op: ELSE (23)
    goto L8; // [173] 535
    // SubProg rPrint pc: 175 op: NOP1 (159)
L1: // addr: 176 pc: 175 sub: 8785 op: 159
    // SubProg rPrint pc: 176 op: STARTLINE (58)

    /** pretty.e:119			cut_line(1)*/
    // SubProg rPrint pc: 178 op: PROC (27)
    _25cut_line(1);
    // SubProg rPrint pc: 181 op: STARTLINE (58)

    /** pretty.e:120			multi_line = 0*/
    // SubProg rPrint pc: 183 op: ASSIGN_I (113)
    _multi_line_8789 = 0;
    // SubProg rPrint pc: 186 op: STARTLINE (58)

    /** pretty.e:121			all_ascii = pretty_ascii > 1*/
    // SubProg rPrint pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 190 op: GREATER (6)
    _all_ascii_8790 = (_25pretty_ascii_8723 > 1);
    // SubProg rPrint pc: 194 op: STARTLINE (58)

    /** pretty.e:122			for i = 1 to length(a) do*/
    // SubProg rPrint pc: 196 op: LENGTH (42)
    if (IS_SEQUENCE(_a_8787)){
            _4809 = SEQ_PTR(_a_8787)->length;
    }
    else {
        _4809 = 1;
    }
    // SubProg rPrint pc: 199 op: FOR_I (125)
    {
        object _i_8823;
        _i_8823 = 1;
L9: // addr: 206 pc: 199 sub: 8785 op: 125
        if (_i_8823 > _4809){
            goto LA; // [199] 345
        }
        // SubProg rPrint pc: 206 op: STARTLINE (58)

        /** pretty.e:123				if sequence(a[i]) and length(a[i]) > 0 then*/
        // SubProg rPrint pc: 208 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4810 = (object)*(((s1_ptr)_2)->base + _i_8823);
        // SubProg rPrint pc: 212 op: IS_A_SEQUENCE (68)
        _4811 = IS_SEQUENCE(_4810);
        _4810 = NOVALUE;
        // SubProg rPrint pc: 215 op: SC1_AND_IF (146)
        if (_4811 == 0) {
            goto LB; // [215] 249
        }
        // SubProg rPrint pc: 219 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4813 = (object)*(((s1_ptr)_2)->base + _i_8823);
        // SubProg rPrint pc: 223 op: LENGTH (42)
        if (IS_SEQUENCE(_4813)){
                _4814 = SEQ_PTR(_4813)->length;
        }
        else {
            _4814 = 1;
        }
        _4813 = NOVALUE;
        // SubProg rPrint pc: 226 op: GREATER (6)
        _4815 = (_4814 > 0);
        _4814 = NOVALUE;
        // SubProg rPrint pc: 230 op: NOP1 (159)
        // SubProg rPrint pc: 231 op: IF (20)
        if (_4815 == 0)
        {
            DeRef(_4815);
            _4815 = NOVALUE;
            goto LB; // [231] 249
        }
        else{
            DeRef(_4815);
            _4815 = NOVALUE;
        }
        // SubProg rPrint pc: 234 op: STARTLINE (58)

        /** pretty.e:124					multi_line = 1*/
        // SubProg rPrint pc: 236 op: ASSIGN_I (113)
        _multi_line_8789 = 1;
        // SubProg rPrint pc: 239 op: STARTLINE (58)

        /** pretty.e:125					all_ascii = 0*/
        // SubProg rPrint pc: 241 op: ASSIGN_I (113)
        _all_ascii_8790 = 0;
        // SubProg rPrint pc: 244 op: STARTLINE (58)

        /** pretty.e:126					exit*/
        // SubProg rPrint pc: 246 op: EXIT (61)
        goto LA; // [246] 345
        // SubProg rPrint pc: 248 op: NOP1 (159)
LB: // addr: 249 pc: 248 sub: 8785 op: 159
        // SubProg rPrint pc: 249 op: STARTLINE (58)

        /** pretty.e:128				if not integer(a[i]) or*/
        // SubProg rPrint pc: 251 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4816 = (object)*(((s1_ptr)_2)->base + _i_8823);
        // SubProg rPrint pc: 255 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_4816))
        _4817 = 1;
        else if (IS_ATOM_DBL(_4816))
        _4817 = IS_ATOM_INT(DoubleToInt(_4816));
        else
        _4817 = 0;
        _4816 = NOVALUE;
        // SubProg rPrint pc: 258 op: NOT (7)
        _4818 = (_4817 == 0);
        _4817 = NOVALUE;
        // SubProg rPrint pc: 261 op: SC1_OR (143)
        if (_4818 != 0) {
            _4819 = 1;
            goto LC; // [261] 313
        }
        // SubProg rPrint pc: 265 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4820 = (object)*(((s1_ptr)_2)->base + _i_8823);
        // SubProg rPrint pc: 269 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 271 op: LESS (1)
        if (IS_ATOM_INT(_4820)) {
            _4821 = (_4820 < _25pretty_ascii_min_8725);
        }
        else {
            _4821 = binary_op(LESS, _4820, _25pretty_ascii_min_8725);
        }
        _4820 = NOVALUE;
        // SubProg rPrint pc: 275 op: SC1_AND (141)
        if (IS_ATOM_INT(_4821)) {
            if (_4821 == 0) {
                DeRef(_4822);
                _4822 = 0;
                goto LD; // [275] 309
            }
        }
        else {
            if (DBL_PTR(_4821)->dbl == 0.0) {
                DeRef(_4822);
                _4822 = 0;
                goto LD; // [275] 309
            }
        }
        // SubProg rPrint pc: 279 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 281 op: LESS (1)
        _4823 = (_25pretty_ascii_8723 < 2);
        // SubProg rPrint pc: 285 op: SC1_OR (143)
        if (_4823 != 0) {
            _4824 = 1;
            goto LE; // [285] 305
        }
        // SubProg rPrint pc: 289 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4825 = (object)*(((s1_ptr)_2)->base + _i_8823);
        // SubProg rPrint pc: 293 op: FIND_FROM (176)
        _4827 = find_from(_4825, _4826, 1);
        _4825 = NOVALUE;
        // SubProg rPrint pc: 298 op: NOT (7)
        _4828 = (_4827 == 0);
        _4827 = NOVALUE;
        // SubProg rPrint pc: 301 op: SC2_OR (144)
        _4824 = (_4828 != 0);
        // SubProg rPrint pc: 304 op: NOP1 (159)
LE: // addr: 305 pc: 304 sub: 8785 op: 159
        // SubProg rPrint pc: 305 op: SC2_AND (142)
        DeRef(_4822);
        _4822 = (_4824 != 0);
        // SubProg rPrint pc: 308 op: NOP1 (159)
LD: // addr: 309 pc: 308 sub: 8785 op: 159
        // SubProg rPrint pc: 309 op: SC2_OR (144)
        _4819 = (_4822 != 0);
        // SubProg rPrint pc: 312 op: NOP1 (159)
LC: // addr: 313 pc: 312 sub: 8785 op: 159
        // SubProg rPrint pc: 313 op: SC1_OR_IF (147)
        if (_4819 != 0) {
            goto LF; // [313] 332
        }
        // SubProg rPrint pc: 317 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4830 = (object)*(((s1_ptr)_2)->base + _i_8823);
        // SubProg rPrint pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 323 op: GREATER (6)
        if (IS_ATOM_INT(_4830)) {
            _4831 = (_4830 > _25pretty_ascii_max_8726);
        }
        else {
            _4831 = binary_op(GREATER, _4830, _25pretty_ascii_max_8726);
        }
        _4830 = NOVALUE;
        // SubProg rPrint pc: 327 op: NOP1 (159)
        // SubProg rPrint pc: 328 op: IF (20)
        if (_4831 == 0) {
            DeRef(_4831);
            _4831 = NOVALUE;
            goto L10; // [328] 338
        }
        else {
            if (!IS_ATOM_INT(_4831) && DBL_PTR(_4831)->dbl == 0.0){
                DeRef(_4831);
                _4831 = NOVALUE;
                goto L10; // [328] 338
            }
            DeRef(_4831);
            _4831 = NOVALUE;
        }
        DeRef(_4831);
        _4831 = NOVALUE;
        // SubProg rPrint pc: 331 op: NOP1 (159)
LF: // addr: 332 pc: 331 sub: 8785 op: 159
        // SubProg rPrint pc: 332 op: STARTLINE (58)

        /** pretty.e:132					all_ascii = 0*/
        // SubProg rPrint pc: 334 op: ASSIGN_I (113)
        _all_ascii_8790 = 0;
        // SubProg rPrint pc: 337 op: NOP1 (159)
L10: // addr: 338 pc: 337 sub: 8785 op: 159
        // SubProg rPrint pc: 338 op: STARTLINE (58)

        /** pretty.e:134			end for*/
        // SubProg rPrint pc: 340 op: ENDFOR_INT_UP1 (54)
        _i_8823 = _i_8823 + 1;
        goto L9; // [340] 206
LA: // addr: 345 pc: 340 sub: 8785 op: 54
        ;
    }
    // SubProg rPrint pc: 345 op: STARTLINE (58)

    /** pretty.e:136			if all_ascii then*/
    // SubProg rPrint pc: 347 op: IF (20)
    if (_all_ascii_8790 == 0)
    {
        goto L11; // [347] 358
    }
    else{
    }
    // SubProg rPrint pc: 350 op: STARTLINE (58)

    /** pretty.e:137				pretty_out('\"')*/
    // SubProg rPrint pc: 352 op: PROC (27)
    _25pretty_out(34);
    // SubProg rPrint pc: 355 op: ELSE (23)
    goto L12; // [355] 364
    // SubProg rPrint pc: 357 op: NOP1 (159)
L11: // addr: 358 pc: 357 sub: 8785 op: 159
    // SubProg rPrint pc: 358 op: STARTLINE (58)

    /** pretty.e:139				pretty_out('{')*/
    // SubProg rPrint pc: 360 op: PROC (27)
    _25pretty_out(123);
    // SubProg rPrint pc: 363 op: NOP1 (159)
L12: // addr: 364 pc: 363 sub: 8785 op: 159
    // SubProg rPrint pc: 364 op: STARTLINE (58)

    /** pretty.e:141			pretty_level += 1*/
    // SubProg rPrint pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 368 op: PLUS1_I (117)
    _25pretty_level_8721 = _25pretty_level_8721 + 1;
    // SubProg rPrint pc: 372 op: STARTLINE (58)

    /** pretty.e:142			for i = 1 to length(a) do*/
    // SubProg rPrint pc: 374 op: LENGTH (42)
    if (IS_SEQUENCE(_a_8787)){
            _4833 = SEQ_PTR(_a_8787)->length;
    }
    else {
        _4833 = 1;
    }
    // SubProg rPrint pc: 377 op: FOR_I (125)
    {
        object _i_8853;
        _i_8853 = 1;
L13: // addr: 384 pc: 377 sub: 8785 op: 125
        if (_i_8853 > _4833){
            goto L14; // [377] 497
        }
        // SubProg rPrint pc: 384 op: STARTLINE (58)

        /** pretty.e:143				if multi_line then*/
        // SubProg rPrint pc: 386 op: IF (20)
        if (_multi_line_8789 == 0)
        {
            goto L15; // [386] 394
        }
        else{
        }
        // SubProg rPrint pc: 389 op: STARTLINE (58)

        /** pretty.e:144					indent()*/
        // SubProg rPrint pc: 391 op: PROC (27)
        _25indent();
        // SubProg rPrint pc: 393 op: NOP1 (159)
L15: // addr: 394 pc: 393 sub: 8785 op: 159
        // SubProg rPrint pc: 394 op: STARTLINE (58)

        /** pretty.e:146				if all_ascii then*/
        // SubProg rPrint pc: 396 op: IF (20)
        if (_all_ascii_8790 == 0)
        {
            goto L16; // [396] 415
        }
        else{
        }
        // SubProg rPrint pc: 399 op: STARTLINE (58)

        /** pretty.e:147					pretty_out(esc_char(a[i]))*/
        // SubProg rPrint pc: 401 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4834 = (object)*(((s1_ptr)_2)->base + _i_8853);
        // SubProg rPrint pc: 405 op: PROC (27)
        Ref(_4834);
        _4835 = _25esc_char(_4834);
        _4834 = NOVALUE;
        // SubProg rPrint pc: 409 op: PROC (27)
        _25pretty_out(_4835);
        _4835 = NOVALUE;
        // SubProg rPrint pc: 412 op: ELSE (23)
        goto L17; // [412] 425
        // SubProg rPrint pc: 414 op: NOP1 (159)
L16: // addr: 415 pc: 414 sub: 8785 op: 159
        // SubProg rPrint pc: 415 op: STARTLINE (58)

        /** pretty.e:149					rPrint(a[i])*/
        // SubProg rPrint pc: 417 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_8787);
        _4836 = (object)*(((s1_ptr)_2)->base + _i_8853);
        // SubProg rPrint pc: 421 op: PROC (27)
        Ref(_4836);
        _25rPrint(_4836);
        _4836 = NOVALUE;
        // SubProg rPrint pc: 424 op: NOP1 (159)
L17: // addr: 425 pc: 424 sub: 8785 op: 159
        // SubProg rPrint pc: 425 op: STARTLINE (58)

        /** pretty.e:151				if pretty_line_count >= pretty_line_max then*/
        // SubProg rPrint pc: 427 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 429 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 431 op: GREATEREQ_IFW_I (120)
        if (_25pretty_line_count_8727 < _25pretty_line_max_8728)
        goto L18; // [431] 459
        // SubProg rPrint pc: 435 op: STARTLINE (58)

        /** pretty.e:152					if not pretty_dots then*/
        // SubProg rPrint pc: 437 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 439 op: NOT_IFW (108)
        if (_25pretty_dots_8729 != 0)
        goto L19; // [439] 448
        // SubProg rPrint pc: 442 op: STARTLINE (58)

        /** pretty.e:153						pretty_out(" ...")*/
        // SubProg rPrint pc: 444 op: PROC (27)
        RefDS(_4839);
        _25pretty_out(_4839);
        // SubProg rPrint pc: 447 op: NOP1 (159)
L19: // addr: 448 pc: 447 sub: 8785 op: 159
        // SubProg rPrint pc: 448 op: STARTLINE (58)

        /** pretty.e:155					pretty_dots = 1*/
        // SubProg rPrint pc: 450 op: ASSIGN_I (113)
        _25pretty_dots_8729 = 1;
        // SubProg rPrint pc: 453 op: STARTLINE (58)

        /** pretty.e:156					return*/
        // SubProg rPrint pc: 455 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: rPrint

// block var a_8787
        DeRef(_a_8787);

// block var sbuff_8788
        DeRef(_sbuff_8788);

// block var multi_line_8789

// block var all_ascii_8790
        DeRef(_4823);
        _4823 = NOVALUE;
        DeRef(_4794);
        _4794 = NOVALUE;
        DeRef(_4802);
        _4802 = NOVALUE;
        _4813 = NOVALUE;
        DeRef(_4818);
        _4818 = NOVALUE;
        DeRef(_4828);
        _4828 = NOVALUE;
        DeRef(_4800);
        _4800 = NOVALUE;
        DeRef(_4792);
        _4792 = NOVALUE;
        DeRef(_4821);
        _4821 = NOVALUE;
        return;
        // SubProg rPrint pc: 458 op: NOP1 (159)
L18: // addr: 459 pc: 458 sub: 8785 op: 159
        // SubProg rPrint pc: 459 op: STARTLINE (58)

        /** pretty.e:158				if i != length(a) and not all_ascii then*/
        // SubProg rPrint pc: 461 op: LENGTH (42)
        if (IS_SEQUENCE(_a_8787)){
                _4840 = SEQ_PTR(_a_8787)->length;
        }
        else {
            _4840 = 1;
        }
        // SubProg rPrint pc: 464 op: NOTEQ (4)
        _4841 = (_i_8853 != _4840);
        _4840 = NOVALUE;
        // SubProg rPrint pc: 468 op: SC1_AND_IF (146)
        if (_4841 == 0) {
            goto L1A; // [468] 490
        }
        // SubProg rPrint pc: 472 op: NOT (7)
        _4843 = (_all_ascii_8790 == 0);
        // SubProg rPrint pc: 475 op: NOP1 (159)
        // SubProg rPrint pc: 476 op: IF (20)
        if (_4843 == 0)
        {
            DeRef(_4843);
            _4843 = NOVALUE;
            goto L1A; // [476] 490
        }
        else{
            DeRef(_4843);
            _4843 = NOVALUE;
        }
        // SubProg rPrint pc: 479 op: STARTLINE (58)

        /** pretty.e:159					pretty_out(',')*/
        // SubProg rPrint pc: 481 op: PROC (27)
        _25pretty_out(44);
        // SubProg rPrint pc: 484 op: STARTLINE (58)

        /** pretty.e:160					cut_line(6)*/
        // SubProg rPrint pc: 486 op: PROC (27)
        _25cut_line(6);
        // SubProg rPrint pc: 489 op: NOP1 (159)
L1A: // addr: 490 pc: 489 sub: 8785 op: 159
        // SubProg rPrint pc: 490 op: STARTLINE (58)

        /** pretty.e:162			end for*/
        // SubProg rPrint pc: 492 op: ENDFOR_INT_UP1 (54)
        _i_8853 = _i_8853 + 1;
        goto L13; // [492] 384
L14: // addr: 497 pc: 492 sub: 8785 op: 54
        ;
    }
    // SubProg rPrint pc: 497 op: STARTLINE (58)

    /** pretty.e:163			pretty_level -= 1*/
    // SubProg rPrint pc: 499 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 501 op: MINUS_I (116)
    _25pretty_level_8721 = _25pretty_level_8721 - 1;
    // SubProg rPrint pc: 505 op: STARTLINE (58)

    /** pretty.e:164			if multi_line then*/
    // SubProg rPrint pc: 507 op: IF (20)
    if (_multi_line_8789 == 0)
    {
        goto L1B; // [507] 515
    }
    else{
    }
    // SubProg rPrint pc: 510 op: STARTLINE (58)

    /** pretty.e:165				indent()*/
    // SubProg rPrint pc: 512 op: PROC (27)
    _25indent();
    // SubProg rPrint pc: 514 op: NOP1 (159)
L1B: // addr: 515 pc: 514 sub: 8785 op: 159
    // SubProg rPrint pc: 515 op: STARTLINE (58)

    /** pretty.e:167			if all_ascii then*/
    // SubProg rPrint pc: 517 op: IF (20)
    if (_all_ascii_8790 == 0)
    {
        goto L1C; // [517] 528
    }
    else{
    }
    // SubProg rPrint pc: 520 op: STARTLINE (58)

    /** pretty.e:168				pretty_out('\"')*/
    // SubProg rPrint pc: 522 op: PROC (27)
    _25pretty_out(34);
    // SubProg rPrint pc: 525 op: ELSE (23)
    goto L1D; // [525] 534
    // SubProg rPrint pc: 527 op: NOP1 (159)
L1C: // addr: 528 pc: 527 sub: 8785 op: 159
    // SubProg rPrint pc: 528 op: STARTLINE (58)

    /** pretty.e:170				pretty_out('}')*/
    // SubProg rPrint pc: 530 op: PROC (27)
    _25pretty_out(125);
    // SubProg rPrint pc: 533 op: NOP1 (159)
L1D: // addr: 534 pc: 533 sub: 8785 op: 159
    // SubProg rPrint pc: 534 op: NOP1 (159)
L8: // addr: 535 pc: 534 sub: 8785 op: 159
    // SubProg rPrint pc: 535 op: STARTLINE (58)

    /** pretty.e:173	end procedure*/
    // SubProg rPrint pc: 537 op: RETURNP (29)

// Exiting block BLOCK: rPrint

// block var a_8787
    DeRef(_a_8787);

// block var sbuff_8788
    DeRef(_sbuff_8788);

// block var multi_line_8789

// block var all_ascii_8790
    DeRef(_4823);
    _4823 = NOVALUE;
    DeRef(_4794);
    _4794 = NOVALUE;
    DeRef(_4802);
    _4802 = NOVALUE;
    _4813 = NOVALUE;
    DeRef(_4818);
    _4818 = NOVALUE;
    DeRef(_4828);
    _4828 = NOVALUE;
    DeRef(_4800);
    _4800 = NOVALUE;
    DeRef(_4841);
    _4841 = NOVALUE;
    DeRef(_4792);
    _4792 = NOVALUE;
    DeRef(_4821);
    _4821 = NOVALUE;
    return;
    // SubProg rPrint pc: 540 op: BADRETURNF (43)
    ;
}


void _25pretty(object _x_8892, object _options_8893)
{
// skipping _4866  name type: 0
// skipping _4865  name type: 0
// skipping _4864  name type: 0
// skipping _4863  name type: 0
// skipping _4862  name type: 0
// skipping _4861  name type: 0
// skipping _4860  name type: 0
// skipping _4859  name type: 0
// skipping _4858  name type: 0
// skipping _4857  name type: 0
// skipping _4856  name type: 0
// skipping _4855  name type: 0
// skipping _4854  name type: 0
// skipping _4853  name type: 0
// skipping _4852  name type: 0
// skipping _4851  name type: 0
    object _4850 = NOVALUE; // 8896 4850
    object _4849 = NOVALUE; // 8895 4849
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pretty pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 3 op: STARTLINE (58)

    /** pretty.e:197		if length(options) < length( PRETTY_DEFAULT ) then*/
    // SubProg pretty pc: 5 op: LENGTH (42)
    // Known sequence length:
    _4849 = 10;
    // SubProg pretty pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty pc: 10 op: LENGTH (42)
    // Known sequence length:
    _4850 = 10;
    // SubProg pretty pc: 13 op: LESS_IFW_I (119)
    // SubProg pretty pc: 41 op: STARTLINE (58)

    /** pretty.e:202		pretty_ascii = options[DISPLAY_ASCII] */
    // SubProg pretty pc: 43 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_ascii_8723 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_25pretty_ascii_8723))
    _25pretty_ascii_8723 = (object)DBL_PTR(_25pretty_ascii_8723)->dbl;
    // SubProg pretty pc: 47 op: STARTLINE (58)

    /** pretty.e:203		pretty_indent = options[INDENT]*/
    // SubProg pretty pc: 49 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_indent_8724 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_25pretty_indent_8724))
    _25pretty_indent_8724 = (object)DBL_PTR(_25pretty_indent_8724)->dbl;
    // SubProg pretty pc: 53 op: STARTLINE (58)

    /** pretty.e:204		pretty_start_col = options[START_COLUMN]*/
    // SubProg pretty pc: 55 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_start_col_8720 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_25pretty_start_col_8720))
    _25pretty_start_col_8720 = (object)DBL_PTR(_25pretty_start_col_8720)->dbl;
    // SubProg pretty pc: 59 op: STARTLINE (58)

    /** pretty.e:205		pretty_end_col = options[WRAP]*/
    // SubProg pretty pc: 61 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_end_col_8718 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_25pretty_end_col_8718))
    _25pretty_end_col_8718 = (object)DBL_PTR(_25pretty_end_col_8718)->dbl;
    // SubProg pretty pc: 65 op: STARTLINE (58)

    /** pretty.e:206		pretty_int_format = options[INT_FORMAT]*/
    // SubProg pretty pc: 67 op: RHS_SUBS (25)
    DeRef(_25pretty_int_format_8733);
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_int_format_8733 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_25pretty_int_format_8733);
    // SubProg pretty pc: 71 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 73 op: STARTLINE (58)

    /** pretty.e:207		pretty_fp_format = options[FP_FORMAT]*/
    // SubProg pretty pc: 75 op: RHS_SUBS (25)
    DeRef(_25pretty_fp_format_8732);
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_fp_format_8732 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_25pretty_fp_format_8732);
    // SubProg pretty pc: 79 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 81 op: STARTLINE (58)

    /** pretty.e:208		pretty_ascii_min = options[MIN_ASCII]*/
    // SubProg pretty pc: 83 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_ascii_min_8725 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_25pretty_ascii_min_8725))
    _25pretty_ascii_min_8725 = (object)DBL_PTR(_25pretty_ascii_min_8725)->dbl;
    // SubProg pretty pc: 87 op: STARTLINE (58)

    /** pretty.e:209		pretty_ascii_max = options[MAX_ASCII]*/
    // SubProg pretty pc: 89 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_ascii_max_8726 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_25pretty_ascii_max_8726))
    _25pretty_ascii_max_8726 = (object)DBL_PTR(_25pretty_ascii_max_8726)->dbl;
    // SubProg pretty pc: 93 op: STARTLINE (58)

    /** pretty.e:210		pretty_line_max = options[MAX_LINES]*/
    // SubProg pretty pc: 95 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_line_max_8728 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_25pretty_line_max_8728))
    _25pretty_line_max_8728 = (object)DBL_PTR(_25pretty_line_max_8728)->dbl;
    // SubProg pretty pc: 99 op: STARTLINE (58)

    /** pretty.e:211		pretty_line_breaks = options[LINE_BREAKS]*/
    // SubProg pretty pc: 101 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_8893);
    _25pretty_line_breaks_8730 = (object)*(((s1_ptr)_2)->base + 10);
    if (!IS_ATOM_INT(_25pretty_line_breaks_8730))
    _25pretty_line_breaks_8730 = (object)DBL_PTR(_25pretty_line_breaks_8730)->dbl;
    // SubProg pretty pc: 105 op: STARTLINE (58)

    /** pretty.e:213		pretty_chars = pretty_start_col*/
    // SubProg pretty pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty pc: 109 op: ASSIGN_I (113)
    _25pretty_chars_8719 = _25pretty_start_col_8720;
    // SubProg pretty pc: 112 op: STARTLINE (58)

    /** pretty.e:215		pretty_level = 0 */
    // SubProg pretty pc: 114 op: ASSIGN_I (113)
    _25pretty_level_8721 = 0;
    // SubProg pretty pc: 117 op: STARTLINE (58)

    /** pretty.e:216		pretty_line = ""*/
    // SubProg pretty pc: 119 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_25pretty_line_8734);
    _25pretty_line_8734 = _5;
    // SubProg pretty pc: 122 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 124 op: STARTLINE (58)

    /** pretty.e:217		pretty_line_count = 0*/
    // SubProg pretty pc: 126 op: ASSIGN_I (113)
    _25pretty_line_count_8727 = 0;
    // SubProg pretty pc: 129 op: STARTLINE (58)

    /** pretty.e:218		pretty_dots = 0*/
    // SubProg pretty pc: 131 op: ASSIGN_I (113)
    _25pretty_dots_8729 = 0;
    // SubProg pretty pc: 134 op: STARTLINE (58)

    /** pretty.e:219		rPrint(x)*/
    // SubProg pretty pc: 136 op: PROC (27)
    Ref(_x_8892);
    _25rPrint(_x_8892);
    // SubProg pretty pc: 139 op: STARTLINE (58)

    /** pretty.e:220	end procedure*/
    // SubProg pretty pc: 141 op: RETURNP (29)

// Exiting block BLOCK: pretty

// block var x_8892
    DeRef(_x_8892);

// block var options_8893
    DeRefDS(_options_8893);
    return;
    // SubProg pretty pc: 144 op: BADRETURNF (43)
    ;
}



// 0x8F46D1AF
