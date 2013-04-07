// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _26pretty_out(object _text_7676)
{
// skipping _4134  name type: 0
    object _4133 = NOVALUE; // 7686 4133
// skipping _4132  name type: 0
    object _4131 = NOVALUE; // 7683 4131
// skipping _4130  name type: 0
    object _4129 = NOVALUE; // 7680 4129
    object _4128 = NOVALUE; // 7679 4128
// skipping _4127  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pretty_out pc: 1 op: STARTLINE (58)

    /** pretty.e:19		pretty_line &= text*/
    // SubProg pretty_out pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 5 op: CONCAT (15)
    if (IS_SEQUENCE(_26pretty_line_7673) && IS_ATOM(_text_7676)) {
        Ref(_text_7676);
        Append(&_26pretty_line_7673, _26pretty_line_7673, _text_7676);
    }
    else if (IS_ATOM(_26pretty_line_7673) && IS_SEQUENCE(_text_7676)) {
    }
    else {
        Concat((object_ptr)&_26pretty_line_7673, _26pretty_line_7673, _text_7676);
    }
    // SubProg pretty_out pc: 9 op: STARTLINE (58)

    /** pretty.e:20		if equal(text, '\n') and pretty_printing then*/
    // SubProg pretty_out pc: 11 op: EQUAL (153)
    if (_text_7676 == 10)
    _4128 = 1;
    else if (IS_ATOM_INT(_text_7676) && IS_ATOM_INT(10))
    _4128 = 0;
    else
    _4128 = (compare(_text_7676, 10) == 0);
    // SubProg pretty_out pc: 15 op: SC1_AND_IF (146)
    if (_4128 == 0) {
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
    EPuts(_26pretty_file_7661, _26pretty_line_7673); // DJP 
    // SubProg pretty_out pc: 34 op: STARTLINE (58)

    /** pretty.e:22			pretty_line = ""*/
    // SubProg pretty_out pc: 36 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_26pretty_line_7673);
    _26pretty_line_7673 = _5;
    // SubProg pretty_out pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg pretty_out pc: 41 op: STARTLINE (58)

    /** pretty.e:23			pretty_line_count += 1*/
    // SubProg pretty_out pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 45 op: PLUS1_I (117)
    _26pretty_line_count_7666 = _26pretty_line_count_7666 + 1;
    // SubProg pretty_out pc: 49 op: NOP1 (159)
L1: // addr: 50 pc: 49 sub: 7674 op: 159
    // SubProg pretty_out pc: 50 op: STARTLINE (58)

    /** pretty.e:25		if atom(text) then*/
    // SubProg pretty_out pc: 52 op: IS_AN_ATOM (67)
    _4131 = IS_ATOM(_text_7676);
    // SubProg pretty_out pc: 55 op: IF (20)
    if (_4131 == 0)
    {
        _4131 = NOVALUE;
        goto L2; // [55] 69
    }
    else{
        _4131 = NOVALUE;
    }
    // SubProg pretty_out pc: 58 op: STARTLINE (58)

    /** pretty.e:26			pretty_chars += 1*/
    // SubProg pretty_out pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 62 op: PLUS1_I (117)
    _26pretty_chars_7658 = _26pretty_chars_7658 + 1;
    // SubProg pretty_out pc: 66 op: ELSE (23)
    goto L3; // [66] 81
    // SubProg pretty_out pc: 68 op: NOP1 (159)
L2: // addr: 69 pc: 68 sub: 7674 op: 159
    // SubProg pretty_out pc: 69 op: STARTLINE (58)

    /** pretty.e:28			pretty_chars += length(text)*/
    // SubProg pretty_out pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty_out pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_text_7676)){
            _4133 = SEQ_PTR(_text_7676)->length;
    }
    else {
        _4133 = 1;
    }
    // SubProg pretty_out pc: 76 op: PLUS_I (115)
    _26pretty_chars_7658 = _26pretty_chars_7658 + _4133;
    _4133 = NOVALUE;
    // SubProg pretty_out pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 7674 op: 159
    // SubProg pretty_out pc: 81 op: STARTLINE (58)

    /** pretty.e:30	end procedure*/
    // SubProg pretty_out pc: 83 op: RETURNP (29)

// Exiting block BLOCK: pretty_out

// block var text_7676
    DeRef(_text_7676);
    return;
    // SubProg pretty_out pc: 86 op: BADRETURNF (43)
    ;
}


void _26cut_line(object _n_7690)
{
// skipping _4137  name type: 0
    object _4136 = NOVALUE; // 7694 4136
// skipping _4135  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cut_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg cut_line pc: 3 op: STARTLINE (58)

    /** pretty.e:34		if not pretty_line_breaks then	*/
    // SubProg cut_line pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 7 op: NOT_IFW (108)
    if (_26pretty_line_breaks_7669 != 0)
    goto L1; // [7] 21
    // SubProg cut_line pc: 10 op: STARTLINE (58)

    /** pretty.e:35			pretty_chars = 0*/
    // SubProg cut_line pc: 12 op: ASSIGN_I (113)
    _26pretty_chars_7658 = 0;
    // SubProg cut_line pc: 15 op: STARTLINE (58)

    /** pretty.e:36			return*/
    // SubProg cut_line pc: 17 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: cut_line

// block var n_7690
    return;
    // SubProg cut_line pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 7688 op: 159
    // SubProg cut_line pc: 21 op: STARTLINE (58)

    /** pretty.e:38		if pretty_chars + n > pretty_end_col then*/
    // SubProg cut_line pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 25 op: PLUS (11)
    _4136 = _26pretty_chars_7658 + _n_7690;
    if ((object)((uintptr_t)_4136 + (uintptr_t)HIGH_BITS) >= 0){
        _4136 = NewDouble((eudouble)_4136);
    }
    // SubProg cut_line pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg cut_line pc: 31 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _4136, _26pretty_end_col_7657)){
        DeRef(_4136);
        _4136 = NOVALUE;
        goto L2; // [31] 46
    }
    DeRef(_4136);
    _4136 = NOVALUE;
    // SubProg cut_line pc: 35 op: STARTLINE (58)

    /** pretty.e:39			pretty_out('\n')*/
    // SubProg cut_line pc: 37 op: PROC (27)
    _26pretty_out(10);
    // SubProg cut_line pc: 40 op: STARTLINE (58)

    /** pretty.e:40			pretty_chars = 0*/
    // SubProg cut_line pc: 42 op: ASSIGN_I (113)
    _26pretty_chars_7658 = 0;
    // SubProg cut_line pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 7688 op: 159
    // SubProg cut_line pc: 46 op: STARTLINE (58)

    /** pretty.e:42	end procedure*/
    // SubProg cut_line pc: 48 op: RETURNP (29)

// Exiting block BLOCK: cut_line

// block var n_7690
    return;
    // SubProg cut_line pc: 51 op: BADRETURNF (43)
    ;
}


void _26indent()
{
    object _4144 = NOVALUE; // 7708 4144
    object _4143 = NOVALUE; // 7707 4143
    object _4142 = NOVALUE; // 7706 4142
    object _4141 = NOVALUE; // 7705 4141
// skipping _4140  name type: 0
// skipping _4139  name type: 0
// skipping _4138  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg indent pc: 1 op: STARTLINE (58)

    /** pretty.e:46		if pretty_line_breaks = 0 then	*/
    // SubProg indent pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 5 op: EQUALS_IFW_I (121)
    if (_26pretty_line_breaks_7669 != 0)
    goto L1; // [5] 22
    // SubProg indent pc: 9 op: STARTLINE (58)

    /** pretty.e:47			pretty_chars = 0*/
    // SubProg indent pc: 11 op: ASSIGN_I (113)
    _26pretty_chars_7658 = 0;
    // SubProg indent pc: 14 op: STARTLINE (58)

    /** pretty.e:48			return*/
    // SubProg indent pc: 16 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: indent
    return;
    // SubProg indent pc: 19 op: ELSE (23)
    goto L2; // [19] 85
    // SubProg indent pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 7696 op: 159
    // SubProg indent pc: 22 op: STARTLINE (58)

    /** pretty.e:49		elsif pretty_line_breaks = -1 then*/
    // SubProg indent pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 26 op: EQUALS_IFW_I (121)
    if (_26pretty_line_breaks_7669 != -1)
    goto L3; // [26] 38
    // SubProg indent pc: 30 op: STARTLINE (58)

    /** pretty.e:51			cut_line( 0 )*/
    // SubProg indent pc: 32 op: PROC (27)
    _26cut_line(0);
    // SubProg indent pc: 35 op: ELSE (23)
    goto L2; // [35] 85
    // SubProg indent pc: 37 op: NOP1 (159)
L3: // addr: 38 pc: 37 sub: 7696 op: 159
    // SubProg indent pc: 38 op: STARTLINE (58)

    /** pretty.e:54			if pretty_chars > 0 then*/
    // SubProg indent pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 42 op: GREATER_IFW_I (124)
    if (_26pretty_chars_7658 <= 0)
    goto L4; // [42] 57
    // SubProg indent pc: 46 op: STARTLINE (58)

    /** pretty.e:55				pretty_out('\n')*/
    // SubProg indent pc: 48 op: PROC (27)
    _26pretty_out(10);
    // SubProg indent pc: 51 op: STARTLINE (58)

    /** pretty.e:56				pretty_chars = 0*/
    // SubProg indent pc: 53 op: ASSIGN_I (113)
    _26pretty_chars_7658 = 0;
    // SubProg indent pc: 56 op: NOP1 (159)
L4: // addr: 57 pc: 56 sub: 7696 op: 159
    // SubProg indent pc: 57 op: STARTLINE (58)

    /** pretty.e:58			pretty_out(repeat(' ', (pretty_start_col-1) + */
    // SubProg indent pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 61 op: MINUS (10)
    _4141 = _26pretty_start_col_7659 - 1;
    if ((object)((uintptr_t)_4141 +(uintptr_t) HIGH_BITS) >= 0){
        _4141 = NewDouble((eudouble)_4141);
    }
    // SubProg indent pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg indent pc: 69 op: MULTIPLY (13)
    if (_26pretty_level_7660 == (short)_26pretty_level_7660 && _26pretty_indent_7663 <= INT15 && _26pretty_indent_7663 >= -INT15){
        _4142 = _26pretty_level_7660 * _26pretty_indent_7663;
    }
    else{
        _4142 = NewDouble(_26pretty_level_7660 * (eudouble)_26pretty_indent_7663);
    }
    // SubProg indent pc: 73 op: PLUS (11)
    if (IS_ATOM_INT(_4141) && IS_ATOM_INT(_4142)) {
        _4143 = _4141 + _4142;
    }
    else {
        if (IS_ATOM_INT(_4141)) {
            _4143 = NewDouble((eudouble)_4141 + DBL_PTR(_4142)->dbl);
        }
        else {
            if (IS_ATOM_INT(_4142)) {
                _4143 = NewDouble(DBL_PTR(_4141)->dbl + (eudouble)_4142);
            }
            else
            _4143 = NewDouble(DBL_PTR(_4141)->dbl + DBL_PTR(_4142)->dbl);
        }
    }
    DeRef(_4141);
    _4141 = NOVALUE;
    DeRef(_4142);
    _4142 = NOVALUE;
    // SubProg indent pc: 77 op: REPEAT (32)
    _4144 = Repeat(32, _4143);
    DeRef(_4143);
    _4143 = NOVALUE;
    // SubProg indent pc: 81 op: PROC (27)
    _26pretty_out(_4144);
    _4144 = NOVALUE;
    // SubProg indent pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 7696 op: 159
    // SubProg indent pc: 85 op: STARTLINE (58)

    /** pretty.e:62	end procedure*/
    // SubProg indent pc: 87 op: RETURNP (29)

// Exiting block BLOCK: indent
    return;
    // SubProg indent pc: 90 op: BADRETURNF (43)
    ;
}


object _26esc_char(object _a_7711)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg esc_char pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_a_7711)) {
        _1 = (object)(DBL_PTR(_a_7711)->dbl);
        DeRefDS(_a_7711);
        _a_7711 = _1;
    }
    // SubProg esc_char pc: 3 op: STARTLINE (58)

    /** pretty.e:66		switch a do*/
    // SubProg esc_char pc: 5 op: SWITCH_I (193)
    _0 = _a_7711;
    switch ( _0 ){ 
        // SubProg esc_char pc: 10 op: STARTLINE (58)

        /** pretty.e:67			case'\t' then*/
        // SubProg esc_char pc: 12 op: CASE (186)
        case 9:
        // SubProg esc_char pc: 14 op: STARTLINE (58)

        /** pretty.e:68				return `\t`*/
        // SubProg esc_char pc: 16 op: RETURNF (28)
        RefDS(_4147);

// Exiting block BLOCK: esc_char

// block var a_7711
        return _4147;
        // SubProg esc_char pc: 20 op: ELSE (23)
        goto L1; // [20] 81
        // SubProg esc_char pc: 22 op: STARTLINE (58)

        /** pretty.e:70			case'\n' then*/
        // SubProg esc_char pc: 24 op: CASE (186)
        case 10:
        // SubProg esc_char pc: 26 op: STARTLINE (58)

        /** pretty.e:71				return `\n`*/
        // SubProg esc_char pc: 28 op: RETURNF (28)
        RefDS(_4148);

// Exiting block BLOCK: esc_char

// block var a_7711
        return _4148;
        // SubProg esc_char pc: 32 op: ELSE (23)
        goto L1; // [32] 81
        // SubProg esc_char pc: 34 op: STARTLINE (58)

        /** pretty.e:73			case'\r' then*/
        // SubProg esc_char pc: 36 op: CASE (186)
        case 13:
        // SubProg esc_char pc: 38 op: STARTLINE (58)

        /** pretty.e:74				return `\r`*/
        // SubProg esc_char pc: 40 op: RETURNF (28)
        RefDS(_4149);

// Exiting block BLOCK: esc_char

// block var a_7711
        return _4149;
        // SubProg esc_char pc: 44 op: ELSE (23)
        goto L1; // [44] 81
        // SubProg esc_char pc: 46 op: STARTLINE (58)

        /** pretty.e:76			case'\\' then*/
        // SubProg esc_char pc: 48 op: CASE (186)
        case 92:
        // SubProg esc_char pc: 50 op: STARTLINE (58)

        /** pretty.e:77				return `\\`*/
        // SubProg esc_char pc: 52 op: RETURNF (28)
        RefDS(_1405);

// Exiting block BLOCK: esc_char

// block var a_7711
        return _1405;
        // SubProg esc_char pc: 56 op: ELSE (23)
        goto L1; // [56] 81
        // SubProg esc_char pc: 58 op: STARTLINE (58)

        /** pretty.e:79			case'"' then*/
        // SubProg esc_char pc: 60 op: CASE (186)
        case 34:
        // SubProg esc_char pc: 62 op: STARTLINE (58)

        /** pretty.e:80				return `\"`*/
        // SubProg esc_char pc: 64 op: RETURNF (28)
        RefDS(_4150);

// Exiting block BLOCK: esc_char

// block var a_7711
        return _4150;
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
        return _a_7711;
        // SubProg esc_char pc: 80 op: NOPSWITCH (187)
    ;}L1: // addr: 81 pc: 80 sub: 7709 op: 187
    // SubProg esc_char pc: 81 op: BADRETURNF (43)
    ;
}


void _26rPrint(object _a_7726)
{
    object _sbuff_7727 = NOVALUE;
    object _multi_line_7728 = NOVALUE;
    object _all_ascii_7729 = NOVALUE;
// skipping _4208  name type: 0
    object _4207 = NOVALUE; // 7810 4207
    object _4206 = NOVALUE; // 7809 4206
    object _4205 = NOVALUE; // 7808 4205
    object _4204 = NOVALUE; // 7807 4204
// skipping _4202  name type: 0
// skipping _4201  name type: 0
    object _4200 = NOVALUE; // 7800 4200
    object _4199 = NOVALUE; // 7798 4199
    object _4198 = NOVALUE; // 7797 4198
    object _4197 = NOVALUE; // 7794 4197
// skipping _4196  name type: 0
    object _4195 = NOVALUE; // 7788 4195
    object _4194 = NOVALUE; // 7787 4194
// skipping _4193  name type: 0
    object _4192 = NOVALUE; // 7785 4192
    object _4191 = NOVALUE; // 7784 4191
    object _4189 = NOVALUE; // 7782 4189
    object _4188 = NOVALUE; // 7781 4188
    object _4187 = NOVALUE; // 7780 4187
    object _4186 = NOVALUE; // 7779 4186
    object _4185 = NOVALUE; // 7778 4185
    object _4184 = NOVALUE; // 7777 4184
    object _4183 = NOVALUE; // 7776 4183
    object _4182 = NOVALUE; // 7775 4182
    object _4181 = NOVALUE; // 7774 4181
    object _4180 = NOVALUE; // 7773 4180
    object _4179 = NOVALUE; // 7771 4179
    object _4178 = NOVALUE; // 7770 4178
    object _4177 = NOVALUE; // 7769 4177
    object _4176 = NOVALUE; // 7768 4176
    object _4175 = NOVALUE; // 7767 4175
    object _4174 = NOVALUE; // 7766 4174
    object _4173 = NOVALUE; // 7764 4173
// skipping _4172  name type: 0
// skipping _4171  name type: 0
// skipping _4170  name type: 0
    object _4169 = NOVALUE; // 7756 4169
    object _4168 = NOVALUE; // 7755 4168
    object _4167 = NOVALUE; // 7754 4167
    object _4166 = NOVALUE; // 7753 4166
    object _4165 = NOVALUE; // 7752 4165
    object _4164 = NOVALUE; // 7751 4164
// skipping _4163  name type: 0
    object _4162 = NOVALUE; // 7747 4162
    object _4161 = NOVALUE; // 7746 4161
// skipping _4159  name type: 0
    object _4157 = NOVALUE; // 7741 4157
    object _4156 = NOVALUE; // 7740 4156
    object _4155 = NOVALUE; // 7739 4155
// skipping _4154  name type: 0
// skipping _4153  name type: 0
    object _4152 = NOVALUE; // 7733 4152
    object _4151 = NOVALUE; // 7731 4151
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rPrint pc: 1 op: STARTLINE (58)

    /** pretty.e:92		if atom(a) then*/
    // SubProg rPrint pc: 3 op: IS_AN_ATOM (67)
    _4151 = IS_ATOM(_a_7726);
    // SubProg rPrint pc: 6 op: IF (20)
    if (_4151 == 0)
    {
        _4151 = NOVALUE;
        goto L1; // [6] 176
    }
    else{
        _4151 = NOVALUE;
    }
    // SubProg rPrint pc: 9 op: STARTLINE (58)

    /** pretty.e:93			if integer(a) then*/
    // SubProg rPrint pc: 11 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_a_7726))
    _4152 = 1;
    else if (IS_ATOM_DBL(_a_7726))
    _4152 = IS_ATOM_INT(DoubleToInt(_a_7726));
    else
    _4152 = 0;
    // SubProg rPrint pc: 14 op: IF (20)
    if (_4152 == 0)
    {
        _4152 = NOVALUE;
        goto L2; // [14] 157
    }
    else{
        _4152 = NOVALUE;
    }
    // SubProg rPrint pc: 17 op: STARTLINE (58)

    /** pretty.e:94				sbuff = sprintf(pretty_int_format, a)*/
    // SubProg rPrint pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 21 op: SPRINTF (53)
    DeRef(_sbuff_7727);
    _sbuff_7727 = EPrintf(-9999999, _26pretty_int_format_7672, _a_7726);
    // SubProg rPrint pc: 25 op: STARTLINE (58)

    /** pretty.e:95				if pretty_ascii then */
    // SubProg rPrint pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 29 op: IF (20)
    if (_26pretty_ascii_7662 == 0)
    {
        goto L3; // [29] 166
    }
    else{
    }
    // SubProg rPrint pc: 32 op: STARTLINE (58)

    /** pretty.e:96					if pretty_ascii >= 3 then */
    // SubProg rPrint pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 36 op: GREATEREQ_IFW_I (120)
    if (_26pretty_ascii_7662 < 3)
    goto L4; // [36] 103
    // SubProg rPrint pc: 40 op: STARTLINE (58)

    /** pretty.e:98						if (a >= pretty_ascii_min and a <= pretty_ascii_max) then*/
    // SubProg rPrint pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 44 op: GREATEREQ (2)
    if (IS_ATOM_INT(_a_7726)) {
        _4155 = (_a_7726 >= _26pretty_ascii_min_7664);
    }
    else {
        _4155 = binary_op(GREATEREQ, _a_7726, _26pretty_ascii_min_7664);
    }
    // SubProg rPrint pc: 48 op: SC1_AND (141)
    if (IS_ATOM_INT(_4155)) {
        if (_4155 == 0) {
            _4156 = 0;
            goto L5; // [48] 62
        }
    }
    else {
        if (DBL_PTR(_4155)->dbl == 0.0) {
            _4156 = 0;
            goto L5; // [48] 62
        }
    }
    // SubProg rPrint pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 54 op: LESSEQ (5)
    if (IS_ATOM_INT(_a_7726)) {
        _4157 = (_a_7726 <= _26pretty_ascii_max_7665);
    }
    else {
        _4157 = binary_op(LESSEQ, _a_7726, _26pretty_ascii_max_7665);
    }
    // SubProg rPrint pc: 58 op: SC2_AND (142)
    DeRef(_4156);
    if (IS_ATOM_INT(_4157))
    _4156 = (_4157 != 0);
    else
    _4156 = DBL_PTR(_4157)->dbl != 0.0;
    // SubProg rPrint pc: 61 op: NOP1 (159)
L5: // addr: 62 pc: 61 sub: 7724 op: 159
    // SubProg rPrint pc: 62 op: IF (20)
    if (_4156 == 0)
    {
        _4156 = NOVALUE;
        goto L6; // [62] 76
    }
    else{
        _4156 = NOVALUE;
    }
    // SubProg rPrint pc: 65 op: STARTLINE (58)

    /** pretty.e:99							sbuff = '\'' & a & '\''  -- display char only*/
    // SubProg rPrint pc: 67 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_7726;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_7727, concat_list, 3);
    }
    // SubProg rPrint pc: 73 op: ELSE (23)
    goto L3; // [73] 166
    // SubProg rPrint pc: 75 op: NOP1 (159)
L6: // addr: 76 pc: 75 sub: 7724 op: 159
    // SubProg rPrint pc: 76 op: STARTLINE (58)

    /** pretty.e:101						elsif find(a, "\t\n\r\\") then*/
    // SubProg rPrint pc: 78 op: FIND_FROM (176)
    _4161 = find_from(_a_7726, _4160, 1);
    // SubProg rPrint pc: 83 op: IF (20)
    if (_4161 == 0)
    {
        _4161 = NOVALUE;
        goto L3; // [83] 166
    }
    else{
        _4161 = NOVALUE;
    }
    // SubProg rPrint pc: 86 op: STARTLINE (58)

    /** pretty.e:102							sbuff = '\'' & esc_char(a) & '\''  -- display char only*/
    // SubProg rPrint pc: 88 op: PROC (27)
    Ref(_a_7726);
    _4162 = _26esc_char(_a_7726);
    // SubProg rPrint pc: 92 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _4162;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_7727, concat_list, 3);
    }
    DeRef(_4162);
    _4162 = NOVALUE;
    // SubProg rPrint pc: 98 op: NOP1 (159)
    // SubProg rPrint pc: 99 op: NOP1 (159)
    // SubProg rPrint pc: 100 op: ELSE (23)
    goto L3; // [100] 166
    // SubProg rPrint pc: 102 op: NOP1 (159)
L4: // addr: 103 pc: 102 sub: 7724 op: 159
    // SubProg rPrint pc: 103 op: STARTLINE (58)

    /** pretty.e:107						if (a >= pretty_ascii_min and a <= pretty_ascii_max) and pretty_ascii < 2 then*/
    // SubProg rPrint pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 107 op: GREATEREQ (2)
    if (IS_ATOM_INT(_a_7726)) {
        _4164 = (_a_7726 >= _26pretty_ascii_min_7664);
    }
    else {
        _4164 = binary_op(GREATEREQ, _a_7726, _26pretty_ascii_min_7664);
    }
    // SubProg rPrint pc: 111 op: SC1_AND (141)
    if (IS_ATOM_INT(_4164)) {
        if (_4164 == 0) {
            DeRef(_4165);
            _4165 = 0;
            goto L7; // [111] 125
        }
    }
    else {
        if (DBL_PTR(_4164)->dbl == 0.0) {
            DeRef(_4165);
            _4165 = 0;
            goto L7; // [111] 125
        }
    }
    // SubProg rPrint pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 117 op: LESSEQ (5)
    if (IS_ATOM_INT(_a_7726)) {
        _4166 = (_a_7726 <= _26pretty_ascii_max_7665);
    }
    else {
        _4166 = binary_op(LESSEQ, _a_7726, _26pretty_ascii_max_7665);
    }
    // SubProg rPrint pc: 121 op: SC2_AND (142)
    DeRef(_4165);
    if (IS_ATOM_INT(_4166))
    _4165 = (_4166 != 0);
    else
    _4165 = DBL_PTR(_4166)->dbl != 0.0;
    // SubProg rPrint pc: 124 op: NOP1 (159)
L7: // addr: 125 pc: 124 sub: 7724 op: 159
    // SubProg rPrint pc: 125 op: SC1_AND_IF (146)
    if (_4165 == 0) {
        goto L3; // [125] 166
    }
    // SubProg rPrint pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 131 op: LESS (1)
    _4168 = (_26pretty_ascii_7662 < 2);
    // SubProg rPrint pc: 135 op: NOP1 (159)
    // SubProg rPrint pc: 136 op: IF (20)
    if (_4168 == 0)
    {
        DeRef(_4168);
        _4168 = NOVALUE;
        goto L3; // [136] 166
    }
    else{
        DeRef(_4168);
        _4168 = NOVALUE;
    }
    // SubProg rPrint pc: 139 op: STARTLINE (58)

    /** pretty.e:108							sbuff &= '\'' & a & '\'' -- add to numeric display*/
    // SubProg rPrint pc: 141 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_7726;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_4169, concat_list, 3);
    }
    // SubProg rPrint pc: 147 op: CONCAT (15)
    Concat((object_ptr)&_sbuff_7727, _sbuff_7727, _4169);
    DeRefDS(_4169);
    _4169 = NOVALUE;
    // SubProg rPrint pc: 151 op: NOP1 (159)
    // SubProg rPrint pc: 152 op: NOP1 (159)
    // SubProg rPrint pc: 153 op: NOP1 (159)
    // SubProg rPrint pc: 154 op: ELSE (23)
    goto L3; // [154] 166
    // SubProg rPrint pc: 156 op: NOP1 (159)
L2: // addr: 157 pc: 156 sub: 7724 op: 159
    // SubProg rPrint pc: 157 op: STARTLINE (58)

    /** pretty.e:113				sbuff = sprintf(pretty_fp_format, a)*/
    // SubProg rPrint pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 161 op: SPRINTF (53)
    DeRef(_sbuff_7727);
    _sbuff_7727 = EPrintf(-9999999, _26pretty_fp_format_7671, _a_7726);
    // SubProg rPrint pc: 165 op: NOP1 (159)
L3: // addr: 166 pc: 165 sub: 7724 op: 159
    // SubProg rPrint pc: 166 op: STARTLINE (58)

    /** pretty.e:115			pretty_out(sbuff)*/
    // SubProg rPrint pc: 168 op: PRIVATE_INIT_CHECK (30)
    // SubProg rPrint pc: 170 op: PROC (27)
    RefDS(_sbuff_7727);
    _26pretty_out(_sbuff_7727);
    // SubProg rPrint pc: 173 op: ELSE (23)
    goto L8; // [173] 535
    // SubProg rPrint pc: 175 op: NOP1 (159)
L1: // addr: 176 pc: 175 sub: 7724 op: 159
    // SubProg rPrint pc: 176 op: STARTLINE (58)

    /** pretty.e:119			cut_line(1)*/
    // SubProg rPrint pc: 178 op: PROC (27)
    _26cut_line(1);
    // SubProg rPrint pc: 181 op: STARTLINE (58)

    /** pretty.e:120			multi_line = 0*/
    // SubProg rPrint pc: 183 op: ASSIGN_I (113)
    _multi_line_7728 = 0;
    // SubProg rPrint pc: 186 op: STARTLINE (58)

    /** pretty.e:121			all_ascii = pretty_ascii > 1*/
    // SubProg rPrint pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 190 op: GREATER (6)
    _all_ascii_7729 = (_26pretty_ascii_7662 > 1);
    // SubProg rPrint pc: 194 op: STARTLINE (58)

    /** pretty.e:122			for i = 1 to length(a) do*/
    // SubProg rPrint pc: 196 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7726)){
            _4173 = SEQ_PTR(_a_7726)->length;
    }
    else {
        _4173 = 1;
    }
    // SubProg rPrint pc: 199 op: FOR_I (125)
    {
        object _i_7763;
        _i_7763 = 1;
L9: // addr: 206 pc: 199 sub: 7724 op: 125
        if (_i_7763 > _4173){
            goto LA; // [199] 345
        }
        // SubProg rPrint pc: 206 op: STARTLINE (58)

        /** pretty.e:123				if sequence(a[i]) and length(a[i]) > 0 then*/
        // SubProg rPrint pc: 208 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4174 = (object)*(((s1_ptr)_2)->base + _i_7763);
        // SubProg rPrint pc: 212 op: IS_A_SEQUENCE (68)
        _4175 = IS_SEQUENCE(_4174);
        _4174 = NOVALUE;
        // SubProg rPrint pc: 215 op: SC1_AND_IF (146)
        if (_4175 == 0) {
            goto LB; // [215] 249
        }
        // SubProg rPrint pc: 219 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4177 = (object)*(((s1_ptr)_2)->base + _i_7763);
        // SubProg rPrint pc: 223 op: LENGTH (42)
        if (IS_SEQUENCE(_4177)){
                _4178 = SEQ_PTR(_4177)->length;
        }
        else {
            _4178 = 1;
        }
        _4177 = NOVALUE;
        // SubProg rPrint pc: 226 op: GREATER (6)
        _4179 = (_4178 > 0);
        _4178 = NOVALUE;
        // SubProg rPrint pc: 230 op: NOP1 (159)
        // SubProg rPrint pc: 231 op: IF (20)
        if (_4179 == 0)
        {
            DeRef(_4179);
            _4179 = NOVALUE;
            goto LB; // [231] 249
        }
        else{
            DeRef(_4179);
            _4179 = NOVALUE;
        }
        // SubProg rPrint pc: 234 op: STARTLINE (58)

        /** pretty.e:124					multi_line = 1*/
        // SubProg rPrint pc: 236 op: ASSIGN_I (113)
        _multi_line_7728 = 1;
        // SubProg rPrint pc: 239 op: STARTLINE (58)

        /** pretty.e:125					all_ascii = 0*/
        // SubProg rPrint pc: 241 op: ASSIGN_I (113)
        _all_ascii_7729 = 0;
        // SubProg rPrint pc: 244 op: STARTLINE (58)

        /** pretty.e:126					exit*/
        // SubProg rPrint pc: 246 op: EXIT (61)
        goto LA; // [246] 345
        // SubProg rPrint pc: 248 op: NOP1 (159)
LB: // addr: 249 pc: 248 sub: 7724 op: 159
        // SubProg rPrint pc: 249 op: STARTLINE (58)

        /** pretty.e:128				if not integer(a[i]) or*/
        // SubProg rPrint pc: 251 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4180 = (object)*(((s1_ptr)_2)->base + _i_7763);
        // SubProg rPrint pc: 255 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_4180))
        _4181 = 1;
        else if (IS_ATOM_DBL(_4180))
        _4181 = IS_ATOM_INT(DoubleToInt(_4180));
        else
        _4181 = 0;
        _4180 = NOVALUE;
        // SubProg rPrint pc: 258 op: NOT (7)
        _4182 = (_4181 == 0);
        _4181 = NOVALUE;
        // SubProg rPrint pc: 261 op: SC1_OR (143)
        if (_4182 != 0) {
            _4183 = 1;
            goto LC; // [261] 313
        }
        // SubProg rPrint pc: 265 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4184 = (object)*(((s1_ptr)_2)->base + _i_7763);
        // SubProg rPrint pc: 269 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 271 op: LESS (1)
        if (IS_ATOM_INT(_4184)) {
            _4185 = (_4184 < _26pretty_ascii_min_7664);
        }
        else {
            _4185 = binary_op(LESS, _4184, _26pretty_ascii_min_7664);
        }
        _4184 = NOVALUE;
        // SubProg rPrint pc: 275 op: SC1_AND (141)
        if (IS_ATOM_INT(_4185)) {
            if (_4185 == 0) {
                DeRef(_4186);
                _4186 = 0;
                goto LD; // [275] 309
            }
        }
        else {
            if (DBL_PTR(_4185)->dbl == 0.0) {
                DeRef(_4186);
                _4186 = 0;
                goto LD; // [275] 309
            }
        }
        // SubProg rPrint pc: 279 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 281 op: LESS (1)
        _4187 = (_26pretty_ascii_7662 < 2);
        // SubProg rPrint pc: 285 op: SC1_OR (143)
        if (_4187 != 0) {
            _4188 = 1;
            goto LE; // [285] 305
        }
        // SubProg rPrint pc: 289 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4189 = (object)*(((s1_ptr)_2)->base + _i_7763);
        // SubProg rPrint pc: 293 op: FIND_FROM (176)
        _4191 = find_from(_4189, _4190, 1);
        _4189 = NOVALUE;
        // SubProg rPrint pc: 298 op: NOT (7)
        _4192 = (_4191 == 0);
        _4191 = NOVALUE;
        // SubProg rPrint pc: 301 op: SC2_OR (144)
        _4188 = (_4192 != 0);
        // SubProg rPrint pc: 304 op: NOP1 (159)
LE: // addr: 305 pc: 304 sub: 7724 op: 159
        // SubProg rPrint pc: 305 op: SC2_AND (142)
        DeRef(_4186);
        _4186 = (_4188 != 0);
        // SubProg rPrint pc: 308 op: NOP1 (159)
LD: // addr: 309 pc: 308 sub: 7724 op: 159
        // SubProg rPrint pc: 309 op: SC2_OR (144)
        _4183 = (_4186 != 0);
        // SubProg rPrint pc: 312 op: NOP1 (159)
LC: // addr: 313 pc: 312 sub: 7724 op: 159
        // SubProg rPrint pc: 313 op: SC1_OR_IF (147)
        if (_4183 != 0) {
            goto LF; // [313] 332
        }
        // SubProg rPrint pc: 317 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4194 = (object)*(((s1_ptr)_2)->base + _i_7763);
        // SubProg rPrint pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 323 op: GREATER (6)
        if (IS_ATOM_INT(_4194)) {
            _4195 = (_4194 > _26pretty_ascii_max_7665);
        }
        else {
            _4195 = binary_op(GREATER, _4194, _26pretty_ascii_max_7665);
        }
        _4194 = NOVALUE;
        // SubProg rPrint pc: 327 op: NOP1 (159)
        // SubProg rPrint pc: 328 op: IF (20)
        if (_4195 == 0) {
            DeRef(_4195);
            _4195 = NOVALUE;
            goto L10; // [328] 338
        }
        else {
            if (!IS_ATOM_INT(_4195) && DBL_PTR(_4195)->dbl == 0.0){
                DeRef(_4195);
                _4195 = NOVALUE;
                goto L10; // [328] 338
            }
            DeRef(_4195);
            _4195 = NOVALUE;
        }
        DeRef(_4195);
        _4195 = NOVALUE;
        // SubProg rPrint pc: 331 op: NOP1 (159)
LF: // addr: 332 pc: 331 sub: 7724 op: 159
        // SubProg rPrint pc: 332 op: STARTLINE (58)

        /** pretty.e:132					all_ascii = 0*/
        // SubProg rPrint pc: 334 op: ASSIGN_I (113)
        _all_ascii_7729 = 0;
        // SubProg rPrint pc: 337 op: NOP1 (159)
L10: // addr: 338 pc: 337 sub: 7724 op: 159
        // SubProg rPrint pc: 338 op: STARTLINE (58)

        /** pretty.e:134			end for*/
        // SubProg rPrint pc: 340 op: ENDFOR_INT_UP1 (54)
        _i_7763 = _i_7763 + 1;
        goto L9; // [340] 206
LA: // addr: 345 pc: 340 sub: 7724 op: 54
        ;
    }
    // SubProg rPrint pc: 345 op: STARTLINE (58)

    /** pretty.e:136			if all_ascii then*/
    // SubProg rPrint pc: 347 op: IF (20)
    if (_all_ascii_7729 == 0)
    {
        goto L11; // [347] 358
    }
    else{
    }
    // SubProg rPrint pc: 350 op: STARTLINE (58)

    /** pretty.e:137				pretty_out('\"')*/
    // SubProg rPrint pc: 352 op: PROC (27)
    _26pretty_out(34);
    // SubProg rPrint pc: 355 op: ELSE (23)
    goto L12; // [355] 364
    // SubProg rPrint pc: 357 op: NOP1 (159)
L11: // addr: 358 pc: 357 sub: 7724 op: 159
    // SubProg rPrint pc: 358 op: STARTLINE (58)

    /** pretty.e:139				pretty_out('{')*/
    // SubProg rPrint pc: 360 op: PROC (27)
    _26pretty_out(123);
    // SubProg rPrint pc: 363 op: NOP1 (159)
L12: // addr: 364 pc: 363 sub: 7724 op: 159
    // SubProg rPrint pc: 364 op: STARTLINE (58)

    /** pretty.e:141			pretty_level += 1*/
    // SubProg rPrint pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 368 op: PLUS1_I (117)
    _26pretty_level_7660 = _26pretty_level_7660 + 1;
    // SubProg rPrint pc: 372 op: STARTLINE (58)

    /** pretty.e:142			for i = 1 to length(a) do*/
    // SubProg rPrint pc: 374 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7726)){
            _4197 = SEQ_PTR(_a_7726)->length;
    }
    else {
        _4197 = 1;
    }
    // SubProg rPrint pc: 377 op: FOR_I (125)
    {
        object _i_7793;
        _i_7793 = 1;
L13: // addr: 384 pc: 377 sub: 7724 op: 125
        if (_i_7793 > _4197){
            goto L14; // [377] 497
        }
        // SubProg rPrint pc: 384 op: STARTLINE (58)

        /** pretty.e:143				if multi_line then*/
        // SubProg rPrint pc: 386 op: IF (20)
        if (_multi_line_7728 == 0)
        {
            goto L15; // [386] 394
        }
        else{
        }
        // SubProg rPrint pc: 389 op: STARTLINE (58)

        /** pretty.e:144					indent()*/
        // SubProg rPrint pc: 391 op: PROC (27)
        _26indent();
        // SubProg rPrint pc: 393 op: NOP1 (159)
L15: // addr: 394 pc: 393 sub: 7724 op: 159
        // SubProg rPrint pc: 394 op: STARTLINE (58)

        /** pretty.e:146				if all_ascii then*/
        // SubProg rPrint pc: 396 op: IF (20)
        if (_all_ascii_7729 == 0)
        {
            goto L16; // [396] 415
        }
        else{
        }
        // SubProg rPrint pc: 399 op: STARTLINE (58)

        /** pretty.e:147					pretty_out(esc_char(a[i]))*/
        // SubProg rPrint pc: 401 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4198 = (object)*(((s1_ptr)_2)->base + _i_7793);
        // SubProg rPrint pc: 405 op: PROC (27)
        Ref(_4198);
        _4199 = _26esc_char(_4198);
        _4198 = NOVALUE;
        // SubProg rPrint pc: 409 op: PROC (27)
        _26pretty_out(_4199);
        _4199 = NOVALUE;
        // SubProg rPrint pc: 412 op: ELSE (23)
        goto L17; // [412] 425
        // SubProg rPrint pc: 414 op: NOP1 (159)
L16: // addr: 415 pc: 414 sub: 7724 op: 159
        // SubProg rPrint pc: 415 op: STARTLINE (58)

        /** pretty.e:149					rPrint(a[i])*/
        // SubProg rPrint pc: 417 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_7726);
        _4200 = (object)*(((s1_ptr)_2)->base + _i_7793);
        // SubProg rPrint pc: 421 op: PROC (27)
        Ref(_4200);
        _26rPrint(_4200);
        _4200 = NOVALUE;
        // SubProg rPrint pc: 424 op: NOP1 (159)
L17: // addr: 425 pc: 424 sub: 7724 op: 159
        // SubProg rPrint pc: 425 op: STARTLINE (58)

        /** pretty.e:151				if pretty_line_count >= pretty_line_max then*/
        // SubProg rPrint pc: 427 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 429 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 431 op: GREATEREQ_IFW_I (120)
        if (_26pretty_line_count_7666 < _26pretty_line_max_7667)
        goto L18; // [431] 459
        // SubProg rPrint pc: 435 op: STARTLINE (58)

        /** pretty.e:152					if not pretty_dots then*/
        // SubProg rPrint pc: 437 op: GLOBAL_INIT_CHECK (109)
        // SubProg rPrint pc: 439 op: NOT_IFW (108)
        if (_26pretty_dots_7668 != 0)
        goto L19; // [439] 448
        // SubProg rPrint pc: 442 op: STARTLINE (58)

        /** pretty.e:153						pretty_out(" ...")*/
        // SubProg rPrint pc: 444 op: PROC (27)
        RefDS(_4203);
        _26pretty_out(_4203);
        // SubProg rPrint pc: 447 op: NOP1 (159)
L19: // addr: 448 pc: 447 sub: 7724 op: 159
        // SubProg rPrint pc: 448 op: STARTLINE (58)

        /** pretty.e:155					pretty_dots = 1*/
        // SubProg rPrint pc: 450 op: ASSIGN_I (113)
        _26pretty_dots_7668 = 1;
        // SubProg rPrint pc: 453 op: STARTLINE (58)

        /** pretty.e:156					return*/
        // SubProg rPrint pc: 455 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: rPrint

// block var a_7726
        DeRef(_a_7726);

// block var sbuff_7727
        DeRef(_sbuff_7727);

// block var multi_line_7728

// block var all_ascii_7729
        DeRef(_4155);
        _4155 = NOVALUE;
        DeRef(_4164);
        _4164 = NOVALUE;
        DeRef(_4182);
        _4182 = NOVALUE;
        DeRef(_4187);
        _4187 = NOVALUE;
        DeRef(_4166);
        _4166 = NOVALUE;
        _4177 = NOVALUE;
        DeRef(_4192);
        _4192 = NOVALUE;
        DeRef(_4185);
        _4185 = NOVALUE;
        DeRef(_4157);
        _4157 = NOVALUE;
        return;
        // SubProg rPrint pc: 458 op: NOP1 (159)
L18: // addr: 459 pc: 458 sub: 7724 op: 159
        // SubProg rPrint pc: 459 op: STARTLINE (58)

        /** pretty.e:158				if i != length(a) and not all_ascii then*/
        // SubProg rPrint pc: 461 op: LENGTH (42)
        if (IS_SEQUENCE(_a_7726)){
                _4204 = SEQ_PTR(_a_7726)->length;
        }
        else {
            _4204 = 1;
        }
        // SubProg rPrint pc: 464 op: NOTEQ (4)
        _4205 = (_i_7793 != _4204);
        _4204 = NOVALUE;
        // SubProg rPrint pc: 468 op: SC1_AND_IF (146)
        if (_4205 == 0) {
            goto L1A; // [468] 490
        }
        // SubProg rPrint pc: 472 op: NOT (7)
        _4207 = (_all_ascii_7729 == 0);
        // SubProg rPrint pc: 475 op: NOP1 (159)
        // SubProg rPrint pc: 476 op: IF (20)
        if (_4207 == 0)
        {
            DeRef(_4207);
            _4207 = NOVALUE;
            goto L1A; // [476] 490
        }
        else{
            DeRef(_4207);
            _4207 = NOVALUE;
        }
        // SubProg rPrint pc: 479 op: STARTLINE (58)

        /** pretty.e:159					pretty_out(',')*/
        // SubProg rPrint pc: 481 op: PROC (27)
        _26pretty_out(44);
        // SubProg rPrint pc: 484 op: STARTLINE (58)

        /** pretty.e:160					cut_line(6)*/
        // SubProg rPrint pc: 486 op: PROC (27)
        _26cut_line(6);
        // SubProg rPrint pc: 489 op: NOP1 (159)
L1A: // addr: 490 pc: 489 sub: 7724 op: 159
        // SubProg rPrint pc: 490 op: STARTLINE (58)

        /** pretty.e:162			end for*/
        // SubProg rPrint pc: 492 op: ENDFOR_INT_UP1 (54)
        _i_7793 = _i_7793 + 1;
        goto L13; // [492] 384
L14: // addr: 497 pc: 492 sub: 7724 op: 54
        ;
    }
    // SubProg rPrint pc: 497 op: STARTLINE (58)

    /** pretty.e:163			pretty_level -= 1*/
    // SubProg rPrint pc: 499 op: GLOBAL_INIT_CHECK (109)
    // SubProg rPrint pc: 501 op: MINUS_I (116)
    _26pretty_level_7660 = _26pretty_level_7660 - 1;
    // SubProg rPrint pc: 505 op: STARTLINE (58)

    /** pretty.e:164			if multi_line then*/
    // SubProg rPrint pc: 507 op: IF (20)
    if (_multi_line_7728 == 0)
    {
        goto L1B; // [507] 515
    }
    else{
    }
    // SubProg rPrint pc: 510 op: STARTLINE (58)

    /** pretty.e:165				indent()*/
    // SubProg rPrint pc: 512 op: PROC (27)
    _26indent();
    // SubProg rPrint pc: 514 op: NOP1 (159)
L1B: // addr: 515 pc: 514 sub: 7724 op: 159
    // SubProg rPrint pc: 515 op: STARTLINE (58)

    /** pretty.e:167			if all_ascii then*/
    // SubProg rPrint pc: 517 op: IF (20)
    if (_all_ascii_7729 == 0)
    {
        goto L1C; // [517] 528
    }
    else{
    }
    // SubProg rPrint pc: 520 op: STARTLINE (58)

    /** pretty.e:168				pretty_out('\"')*/
    // SubProg rPrint pc: 522 op: PROC (27)
    _26pretty_out(34);
    // SubProg rPrint pc: 525 op: ELSE (23)
    goto L1D; // [525] 534
    // SubProg rPrint pc: 527 op: NOP1 (159)
L1C: // addr: 528 pc: 527 sub: 7724 op: 159
    // SubProg rPrint pc: 528 op: STARTLINE (58)

    /** pretty.e:170				pretty_out('}')*/
    // SubProg rPrint pc: 530 op: PROC (27)
    _26pretty_out(125);
    // SubProg rPrint pc: 533 op: NOP1 (159)
L1D: // addr: 534 pc: 533 sub: 7724 op: 159
    // SubProg rPrint pc: 534 op: NOP1 (159)
L8: // addr: 535 pc: 534 sub: 7724 op: 159
    // SubProg rPrint pc: 535 op: STARTLINE (58)

    /** pretty.e:173	end procedure*/
    // SubProg rPrint pc: 537 op: RETURNP (29)

// Exiting block BLOCK: rPrint

// block var a_7726
    DeRef(_a_7726);

// block var sbuff_7727
    DeRef(_sbuff_7727);

// block var multi_line_7728

// block var all_ascii_7729
    DeRef(_4155);
    _4155 = NOVALUE;
    DeRef(_4164);
    _4164 = NOVALUE;
    DeRef(_4182);
    _4182 = NOVALUE;
    DeRef(_4187);
    _4187 = NOVALUE;
    DeRef(_4166);
    _4166 = NOVALUE;
    _4177 = NOVALUE;
    DeRef(_4192);
    _4192 = NOVALUE;
    DeRef(_4205);
    _4205 = NOVALUE;
    DeRef(_4185);
    _4185 = NOVALUE;
    DeRef(_4157);
    _4157 = NOVALUE;
    return;
    // SubProg rPrint pc: 540 op: BADRETURNF (43)
    ;
}


void _26pretty(object _x_7832, object _options_7833)
{
// skipping _4230  name type: 0
// skipping _4229  name type: 0
// skipping _4228  name type: 0
// skipping _4227  name type: 0
// skipping _4226  name type: 0
// skipping _4225  name type: 0
// skipping _4224  name type: 0
// skipping _4223  name type: 0
// skipping _4222  name type: 0
// skipping _4221  name type: 0
// skipping _4220  name type: 0
// skipping _4219  name type: 0
// skipping _4218  name type: 0
// skipping _4217  name type: 0
// skipping _4216  name type: 0
// skipping _4215  name type: 0
    object _4214 = NOVALUE; // 7836 4214
    object _4213 = NOVALUE; // 7835 4213
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pretty pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 3 op: STARTLINE (58)

    /** pretty.e:197		if length(options) < length( PRETTY_DEFAULT ) then*/
    // SubProg pretty pc: 5 op: LENGTH (42)
    // Known sequence length:
    _4213 = 10;
    // SubProg pretty pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty pc: 10 op: LENGTH (42)
    // Known sequence length:
    _4214 = 10;
    // SubProg pretty pc: 13 op: LESS_IFW_I (119)
    // SubProg pretty pc: 41 op: STARTLINE (58)

    /** pretty.e:202		pretty_ascii = options[DISPLAY_ASCII] */
    // SubProg pretty pc: 43 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_ascii_7662 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_26pretty_ascii_7662))
    _26pretty_ascii_7662 = (object)DBL_PTR(_26pretty_ascii_7662)->dbl;
    // SubProg pretty pc: 47 op: STARTLINE (58)

    /** pretty.e:203		pretty_indent = options[INDENT]*/
    // SubProg pretty pc: 49 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_indent_7663 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_26pretty_indent_7663))
    _26pretty_indent_7663 = (object)DBL_PTR(_26pretty_indent_7663)->dbl;
    // SubProg pretty pc: 53 op: STARTLINE (58)

    /** pretty.e:204		pretty_start_col = options[START_COLUMN]*/
    // SubProg pretty pc: 55 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_start_col_7659 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_26pretty_start_col_7659))
    _26pretty_start_col_7659 = (object)DBL_PTR(_26pretty_start_col_7659)->dbl;
    // SubProg pretty pc: 59 op: STARTLINE (58)

    /** pretty.e:205		pretty_end_col = options[WRAP]*/
    // SubProg pretty pc: 61 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_end_col_7657 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_26pretty_end_col_7657))
    _26pretty_end_col_7657 = (object)DBL_PTR(_26pretty_end_col_7657)->dbl;
    // SubProg pretty pc: 65 op: STARTLINE (58)

    /** pretty.e:206		pretty_int_format = options[INT_FORMAT]*/
    // SubProg pretty pc: 67 op: RHS_SUBS (25)
    DeRef(_26pretty_int_format_7672);
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_int_format_7672 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_26pretty_int_format_7672);
    // SubProg pretty pc: 71 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 73 op: STARTLINE (58)

    /** pretty.e:207		pretty_fp_format = options[FP_FORMAT]*/
    // SubProg pretty pc: 75 op: RHS_SUBS (25)
    DeRef(_26pretty_fp_format_7671);
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_fp_format_7671 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_26pretty_fp_format_7671);
    // SubProg pretty pc: 79 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 81 op: STARTLINE (58)

    /** pretty.e:208		pretty_ascii_min = options[MIN_ASCII]*/
    // SubProg pretty pc: 83 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_ascii_min_7664 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_26pretty_ascii_min_7664))
    _26pretty_ascii_min_7664 = (object)DBL_PTR(_26pretty_ascii_min_7664)->dbl;
    // SubProg pretty pc: 87 op: STARTLINE (58)

    /** pretty.e:209		pretty_ascii_max = options[MAX_ASCII]*/
    // SubProg pretty pc: 89 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_ascii_max_7665 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_26pretty_ascii_max_7665))
    _26pretty_ascii_max_7665 = (object)DBL_PTR(_26pretty_ascii_max_7665)->dbl;
    // SubProg pretty pc: 93 op: STARTLINE (58)

    /** pretty.e:210		pretty_line_max = options[MAX_LINES]*/
    // SubProg pretty pc: 95 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_line_max_7667 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_26pretty_line_max_7667))
    _26pretty_line_max_7667 = (object)DBL_PTR(_26pretty_line_max_7667)->dbl;
    // SubProg pretty pc: 99 op: STARTLINE (58)

    /** pretty.e:211		pretty_line_breaks = options[LINE_BREAKS]*/
    // SubProg pretty pc: 101 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_options_7833);
    _26pretty_line_breaks_7669 = (object)*(((s1_ptr)_2)->base + 10);
    if (!IS_ATOM_INT(_26pretty_line_breaks_7669))
    _26pretty_line_breaks_7669 = (object)DBL_PTR(_26pretty_line_breaks_7669)->dbl;
    // SubProg pretty pc: 105 op: STARTLINE (58)

    /** pretty.e:213		pretty_chars = pretty_start_col*/
    // SubProg pretty pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg pretty pc: 109 op: ASSIGN_I (113)
    _26pretty_chars_7658 = _26pretty_start_col_7659;
    // SubProg pretty pc: 112 op: STARTLINE (58)

    /** pretty.e:215		pretty_level = 0 */
    // SubProg pretty pc: 114 op: ASSIGN_I (113)
    _26pretty_level_7660 = 0;
    // SubProg pretty pc: 117 op: STARTLINE (58)

    /** pretty.e:216		pretty_line = ""*/
    // SubProg pretty pc: 119 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_26pretty_line_7673);
    _26pretty_line_7673 = _5;
    // SubProg pretty pc: 122 op: SEQUENCE_CHECK (97)
    // SubProg pretty pc: 124 op: STARTLINE (58)

    /** pretty.e:217		pretty_line_count = 0*/
    // SubProg pretty pc: 126 op: ASSIGN_I (113)
    _26pretty_line_count_7666 = 0;
    // SubProg pretty pc: 129 op: STARTLINE (58)

    /** pretty.e:218		pretty_dots = 0*/
    // SubProg pretty pc: 131 op: ASSIGN_I (113)
    _26pretty_dots_7668 = 0;
    // SubProg pretty pc: 134 op: STARTLINE (58)

    /** pretty.e:219		rPrint(x)*/
    // SubProg pretty pc: 136 op: PROC (27)
    Ref(_x_7832);
    _26rPrint(_x_7832);
    // SubProg pretty pc: 139 op: STARTLINE (58)

    /** pretty.e:220	end procedure*/
    // SubProg pretty pc: 141 op: RETURNP (29)

// Exiting block BLOCK: pretty

// block var x_7832
    DeRef(_x_7832);

// block var options_7833
    DeRefDS(_options_7833);
    return;
    // SubProg pretty pc: 144 op: BADRETURNF (43)
    ;
}



// 0x98BD1630
