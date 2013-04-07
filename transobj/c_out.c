// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _55c_putc(object _c_46112)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_putc pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_46112)) {
        _1 = (object)(DBL_PTR(_c_46112)->dbl);
        DeRefDS(_c_46112);
        _c_46112 = _1;
    }
    // SubProg c_putc pc: 3 op: STARTLINE (58)

    /** c_out.e:62		if emit_c_output then*/
    // SubProg c_putc pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_putc pc: 7 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L1; // [7] 23
    }
    else{
    }
    // SubProg c_putc pc: 10 op: STARTLINE (58)

    /** c_out.e:63			puts(c_code, c)*/
    // SubProg c_putc pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_putc pc: 14 op: PUTS (44)
    EPuts(_55c_code_46102, _c_46112); // DJP 
    // SubProg c_putc pc: 17 op: STARTLINE (58)

    /** c_out.e:64			update_checksum( c )*/
    // SubProg c_putc pc: 19 op: PROC (27)
    _56update_checksum(_c_46112);
    // SubProg c_putc pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 46110 op: 159
    // SubProg c_putc pc: 23 op: STARTLINE (58)

    /** c_out.e:66	end procedure*/
    // SubProg c_putc pc: 25 op: RETURNP (29)

// Exiting block BLOCK: c_putc

// block var c_46112
    return;
    // SubProg c_putc pc: 28 op: BADRETURNF (43)
    ;
}


void _55c_hputs(object _c_source_46117)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_hputs pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_hputs pc: 3 op: STARTLINE (58)

    /** c_out.e:71		if emit_c_output then*/
    // SubProg c_hputs pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hputs pc: 7 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L1; // [7] 18
    }
    else{
    }
    // SubProg c_hputs pc: 10 op: STARTLINE (58)

    /** c_out.e:72			puts(c_h, c_source)    */
    // SubProg c_hputs pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hputs pc: 14 op: PUTS (44)
    EPuts(_55c_h_46103, _c_source_46117); // DJP 
    // SubProg c_hputs pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 46115 op: 159
    // SubProg c_hputs pc: 18 op: STARTLINE (58)

    /** c_out.e:74	end procedure*/
    // SubProg c_hputs pc: 20 op: RETURNP (29)

// Exiting block BLOCK: c_hputs

// block var c_source_46117
    DeRefDS(_c_source_46117);
    return;
    // SubProg c_hputs pc: 23 op: BADRETURNF (43)
    ;
}


void _55c_puts(object _c_source_46121)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_puts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_puts pc: 3 op: STARTLINE (58)

    /** c_out.e:79		if emit_c_output then*/
    // SubProg c_puts pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_puts pc: 7 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L1; // [7] 23
    }
    else{
    }
    // SubProg c_puts pc: 10 op: STARTLINE (58)

    /** c_out.e:80			puts(c_code, c_source)*/
    // SubProg c_puts pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_puts pc: 14 op: PUTS (44)
    EPuts(_55c_code_46102, _c_source_46121); // DJP 
    // SubProg c_puts pc: 17 op: STARTLINE (58)

    /** c_out.e:81			update_checksum( c_source )*/
    // SubProg c_puts pc: 19 op: PROC (27)
    RefDS(_c_source_46121);
    _56update_checksum(_c_source_46121);
    // SubProg c_puts pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 46119 op: 159
    // SubProg c_puts pc: 23 op: STARTLINE (58)

    /** c_out.e:83	end procedure*/
    // SubProg c_puts pc: 25 op: RETURNP (29)

// Exiting block BLOCK: c_puts

// block var c_source_46121
    DeRefDS(_c_source_46121);
    return;
    // SubProg c_puts pc: 28 op: BADRETURNF (43)
    ;
}


void _55c_hprintf(object _format_46126, object _value_46127)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_hprintf pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_hprintf pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_value_46127)) {
        _1 = (object)(DBL_PTR(_value_46127)->dbl);
        DeRefDS(_value_46127);
        _value_46127 = _1;
    }
    // SubProg c_hprintf pc: 5 op: STARTLINE (58)

    /** c_out.e:88		if emit_c_output then*/
    // SubProg c_hprintf pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hprintf pc: 9 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L1; // [9] 21
    }
    else{
    }
    // SubProg c_hprintf pc: 12 op: STARTLINE (58)

    /** c_out.e:89			printf(c_h, format, value)*/
    // SubProg c_hprintf pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hprintf pc: 16 op: PRINTF (38)
    EPrintf(_55c_h_46103, _format_46126, _value_46127);
    // SubProg c_hprintf pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 46124 op: 159
    // SubProg c_hprintf pc: 21 op: STARTLINE (58)

    /** c_out.e:91	end procedure*/
    // SubProg c_hprintf pc: 23 op: RETURNP (29)

// Exiting block BLOCK: c_hprintf

// block var format_46126
    DeRefDSi(_format_46126);

// block var value_46127
    return;
    // SubProg c_hprintf pc: 26 op: BADRETURNF (43)
    ;
}


void _55c_printf(object _format_46131, object _value_46132)
{
    object _text_46134 = NOVALUE;
// skipping _24148  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_printf pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_printf pc: 3 op: STARTLINE (58)

    /** c_out.e:96		if emit_c_output then*/
    // SubProg c_printf pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf pc: 7 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L1; // [7] 29
    }
    else{
    }
    // SubProg c_printf pc: 10 op: STARTLINE (58)

    /** c_out.e:97			sequence text = sprintf( format, value )*/
    // SubProg c_printf pc: 12 op: SPRINTF (53)
    DeRefi(_text_46134);
    _text_46134 = EPrintf(-9999999, _format_46131, _value_46132);
    // SubProg c_printf pc: 16 op: STARTLINE (58)

    /** c_out.e:98			puts(c_code, text)*/
    // SubProg c_printf pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf pc: 20 op: PUTS (44)
    EPuts(_55c_code_46102, _text_46134); // DJP 
    // SubProg c_printf pc: 23 op: STARTLINE (58)

    /** c_out.e:99			update_checksum( text )*/
    // SubProg c_printf pc: 25 op: PROC (27)
    RefDS(_text_46134);
    _56update_checksum(_text_46134);
    // SubProg c_printf pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 46129 op: 159
    // SubProg c_printf pc: 29 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var text_46134
    DeRefi(_text_46134);
    _text_46134 = NOVALUE;
    // SubProg c_printf pc: 31 op: STARTLINE (58)

    /** c_out.e:101	end procedure*/
    // SubProg c_printf pc: 33 op: RETURNP (29)

// Exiting block BLOCK: c_printf

// block var format_46131
    DeRefDSi(_format_46131);

// block var value_46132
    DeRef(_value_46132);
    return;
    // SubProg c_printf pc: 36 op: BADRETURNF (43)
    ;
}


void _55c_printf8(object _value_46145)
{
    object _buff_46146 = NOVALUE;
    object _neg_46147 = NOVALUE;
    object _p_46148 = NOVALUE;
// skipping _24172  name type: 0
// skipping _24171  name type: 0
    object _24170 = NOVALUE; // 46174 24170
    object _24169 = NOVALUE; // 46173 24169
// skipping _24168  name type: 0
    object _24167 = NOVALUE; // 46171 24167
    object _24166 = NOVALUE; // 46170 24166
// skipping _24165  name type: 0
    object _24164 = NOVALUE; // 46166 24164
    object _24163 = NOVALUE; // 46165 24163
// skipping _24162  name type: 0
    object _24161 = NOVALUE; // 46163 24161
    object _24160 = NOVALUE; // 46162 24160
// skipping _24159  name type: 0
    object _24158 = NOVALUE; // 46159 24158
// skipping _24157  name type: 0
    object _24156 = NOVALUE; // 46156 24156
// skipping _24155  name type: 0
    object _24154 = NOVALUE; // 46153 24154
// skipping _24153  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_printf8 pc: 1 op: STARTLINE (58)

    /** c_out.e:115		if emit_c_output then*/
    // SubProg c_printf8 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf8 pc: 5 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L1; // [5] 182
    }
    else{
    }
    // SubProg c_printf8 pc: 8 op: STARTLINE (58)

    /** c_out.e:116			neg = 0*/
    // SubProg c_printf8 pc: 10 op: ASSIGN_I (113)
    _neg_46147 = 0;
    // SubProg c_printf8 pc: 13 op: STARTLINE (58)

    /** c_out.e:117			buff = sprintf("%.20eL", value)*/
    // SubProg c_printf8 pc: 15 op: SPRINTF (53)
    DeRef(_buff_46146);
    _buff_46146 = EPrintf(-9999999, _24152, _value_46145);
    // SubProg c_printf8 pc: 19 op: STARTLINE (58)

    /** c_out.e:118			if length(buff) < 10 then*/
    // SubProg c_printf8 pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_buff_46146)){
            _24154 = SEQ_PTR(_buff_46146)->length;
    }
    else {
        _24154 = 1;
    }
    // SubProg c_printf8 pc: 24 op: LESS_IFW_I (119)
    if (_24154 >= 10)
    goto L2; // [24] 174
    // SubProg c_printf8 pc: 28 op: STARTLINE (58)

    /** c_out.e:120				p = 1*/
    // SubProg c_printf8 pc: 30 op: ASSIGN_I (113)
    _p_46148 = 1;
    // SubProg c_printf8 pc: 33 op: STARTLINE (58)

    /** c_out.e:121				while p <= length(buff) do*/
    // SubProg c_printf8 pc: 35 op: NOP2 (110)
    // SubProg c_printf8 pc: 37 op: NOPWHILE (158)
L3: // addr: 38 pc: 37 sub: 46143 op: 158
    // SubProg c_printf8 pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_buff_46146)){
            _24156 = SEQ_PTR(_buff_46146)->length;
    }
    else {
        _24156 = 1;
    }
    // SubProg c_printf8 pc: 41 op: LESSEQ_IFW_I (123)
    if (_p_46148 > _24156)
    goto L4; // [41] 173
    // SubProg c_printf8 pc: 45 op: STARTLINE (58)

    /** c_out.e:122					if buff[p] = '-' then*/
    // SubProg c_printf8 pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46146);
    _24158 = (object)*(((s1_ptr)_2)->base + _p_46148);
    // SubProg c_printf8 pc: 51 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24158, 45)){
        _24158 = NOVALUE;
        goto L5; // [51] 63
    }
    _24158 = NOVALUE;
    // SubProg c_printf8 pc: 55 op: STARTLINE (58)

    /** c_out.e:123						neg = 1*/
    // SubProg c_printf8 pc: 57 op: ASSIGN_I (113)
    _neg_46147 = 1;
    // SubProg c_printf8 pc: 60 op: ELSE (23)
    goto L6; // [60] 162
    // SubProg c_printf8 pc: 62 op: NOP1 (159)
L5: // addr: 63 pc: 62 sub: 46143 op: 159
    // SubProg c_printf8 pc: 63 op: STARTLINE (58)

    /** c_out.e:125					elsif buff[p] = 'i' or buff[p] = 'I' then*/
    // SubProg c_printf8 pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46146);
    _24160 = (object)*(((s1_ptr)_2)->base + _p_46148);
    // SubProg c_printf8 pc: 69 op: EQUALS (3)
    if (IS_ATOM_INT(_24160)) {
        _24161 = (_24160 == 105);
    }
    else {
        _24161 = binary_op(EQUALS, _24160, 105);
    }
    _24160 = NOVALUE;
    // SubProg c_printf8 pc: 73 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_24161)) {
        if (_24161 != 0) {
            goto L7; // [73] 90
        }
    }
    else {
        if (DBL_PTR(_24161)->dbl != 0.0) {
            goto L7; // [73] 90
        }
    }
    // SubProg c_printf8 pc: 77 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46146);
    _24163 = (object)*(((s1_ptr)_2)->base + _p_46148);
    // SubProg c_printf8 pc: 81 op: EQUALS (3)
    if (IS_ATOM_INT(_24163)) {
        _24164 = (_24163 == 73);
    }
    else {
        _24164 = binary_op(EQUALS, _24163, 73);
    }
    _24163 = NOVALUE;
    // SubProg c_printf8 pc: 85 op: NOP1 (159)
    // SubProg c_printf8 pc: 86 op: IF (20)
    if (_24164 == 0) {
        DeRef(_24164);
        _24164 = NOVALUE;
        goto L8; // [86] 114
    }
    else {
        if (!IS_ATOM_INT(_24164) && DBL_PTR(_24164)->dbl == 0.0){
            DeRef(_24164);
            _24164 = NOVALUE;
            goto L8; // [86] 114
        }
        DeRef(_24164);
        _24164 = NOVALUE;
    }
    DeRef(_24164);
    _24164 = NOVALUE;
    // SubProg c_printf8 pc: 89 op: NOP1 (159)
L7: // addr: 90 pc: 89 sub: 46143 op: 159
    // SubProg c_printf8 pc: 90 op: STARTLINE (58)

    /** c_out.e:127						buff = CREATE_INF*/
    // SubProg c_printf8 pc: 92 op: ASSIGN (18)
    RefDS(_55CREATE_INF_46137);
    DeRef(_buff_46146);
    _buff_46146 = _55CREATE_INF_46137;
    // SubProg c_printf8 pc: 95 op: STARTLINE (58)

    /** c_out.e:128						if neg then*/
    // SubProg c_printf8 pc: 97 op: IF (20)
    if (_neg_46147 == 0)
    {
        goto L4; // [97] 173
    }
    else{
    }
    // SubProg c_printf8 pc: 100 op: STARTLINE (58)

    /** c_out.e:129							buff = prepend(buff, '-')*/
    // SubProg c_printf8 pc: 102 op: PREPEND (57)
    Prepend(&_buff_46146, _buff_46146, 45);
    // SubProg c_printf8 pc: 106 op: NOP1 (159)
    // SubProg c_printf8 pc: 107 op: STARTLINE (58)

    /** c_out.e:131						exit*/
    // SubProg c_printf8 pc: 109 op: EXIT (61)
    goto L4; // [109] 173
    // SubProg c_printf8 pc: 111 op: ELSE (23)
    goto L6; // [111] 162
    // SubProg c_printf8 pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 46143 op: 159
    // SubProg c_printf8 pc: 114 op: STARTLINE (58)

    /** c_out.e:133					elsif buff[p] = 'n' or buff[p] = 'N' then*/
    // SubProg c_printf8 pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46146);
    _24166 = (object)*(((s1_ptr)_2)->base + _p_46148);
    // SubProg c_printf8 pc: 120 op: EQUALS (3)
    if (IS_ATOM_INT(_24166)) {
        _24167 = (_24166 == 110);
    }
    else {
        _24167 = binary_op(EQUALS, _24166, 110);
    }
    _24166 = NOVALUE;
    // SubProg c_printf8 pc: 124 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_24167)) {
        if (_24167 != 0) {
            goto L9; // [124] 141
        }
    }
    else {
        if (DBL_PTR(_24167)->dbl != 0.0) {
            goto L9; // [124] 141
        }
    }
    // SubProg c_printf8 pc: 128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46146);
    _24169 = (object)*(((s1_ptr)_2)->base + _p_46148);
    // SubProg c_printf8 pc: 132 op: EQUALS (3)
    if (IS_ATOM_INT(_24169)) {
        _24170 = (_24169 == 78);
    }
    else {
        _24170 = binary_op(EQUALS, _24169, 78);
    }
    _24169 = NOVALUE;
    // SubProg c_printf8 pc: 136 op: NOP1 (159)
    // SubProg c_printf8 pc: 137 op: IF (20)
    if (_24170 == 0) {
        DeRef(_24170);
        _24170 = NOVALUE;
        goto LA; // [137] 161
    }
    else {
        if (!IS_ATOM_INT(_24170) && DBL_PTR(_24170)->dbl == 0.0){
            DeRef(_24170);
            _24170 = NOVALUE;
            goto LA; // [137] 161
        }
        DeRef(_24170);
        _24170 = NOVALUE;
    }
    DeRef(_24170);
    _24170 = NOVALUE;
    // SubProg c_printf8 pc: 140 op: NOP1 (159)
L9: // addr: 141 pc: 140 sub: 46143 op: 159
    // SubProg c_printf8 pc: 141 op: STARTLINE (58)

    /** c_out.e:135						ifdef UNIX then*/
    // SubProg c_printf8 pc: 143 op: STARTLINE (58)

    /** c_out.e:136							buff = CREATE_NAN1*/
    // SubProg c_printf8 pc: 145 op: ASSIGN (18)
    RefDS(_55CREATE_NAN1_46139);
    DeRef(_buff_46146);
    _buff_46146 = _55CREATE_NAN1_46139;
    // SubProg c_printf8 pc: 148 op: STARTLINE (58)

    /** c_out.e:137							if neg then*/
    // SubProg c_printf8 pc: 150 op: IF (20)
    if (_neg_46147 == 0)
    {
        goto LB; // [150] 160
    }
    else{
    }
    // SubProg c_printf8 pc: 153 op: STARTLINE (58)

    /** c_out.e:138								buff = prepend(buff, '-')*/
    // SubProg c_printf8 pc: 155 op: PREPEND (57)
    Prepend(&_buff_46146, _buff_46146, 45);
    // SubProg c_printf8 pc: 159 op: NOP1 (159)
LB: // addr: 160 pc: 159 sub: 46143 op: 159
    // SubProg c_printf8 pc: 160 op: NOP1 (159)
LA: // addr: 161 pc: 160 sub: 46143 op: 159
    // SubProg c_printf8 pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 46143 op: 159
    // SubProg c_printf8 pc: 162 op: STARTLINE (58)

    /** c_out.e:156					p += 1*/
    // SubProg c_printf8 pc: 164 op: PLUS1_I (117)
    _p_46148 = _p_46148 + 1;
    // SubProg c_printf8 pc: 168 op: STARTLINE (58)

    /** c_out.e:157				end while*/
    // SubProg c_printf8 pc: 170 op: ENDWHILE (22)
    goto L3; // [170] 38
    // SubProg c_printf8 pc: 172 op: NOP1 (159)
L4: // addr: 173 pc: 172 sub: 46143 op: 159
    // SubProg c_printf8 pc: 173 op: NOP1 (159)
L2: // addr: 174 pc: 173 sub: 46143 op: 159
    // SubProg c_printf8 pc: 174 op: STARTLINE (58)

    /** c_out.e:159			puts(c_code, buff)*/
    // SubProg c_printf8 pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf8 pc: 178 op: PUTS (44)
    EPuts(_55c_code_46102, _buff_46146); // DJP 
    // SubProg c_printf8 pc: 181 op: NOP1 (159)
L1: // addr: 182 pc: 181 sub: 46143 op: 159
    // SubProg c_printf8 pc: 182 op: STARTLINE (58)

    /** c_out.e:161	end procedure*/
    // SubProg c_printf8 pc: 184 op: RETURNP (29)

// Exiting block BLOCK: c_printf8

// block var value_46145
    DeRef(_value_46145);

// block var buff_46146
    DeRef(_buff_46146);

// block var neg_46147

// block var p_46148
    DeRef(_24167);
    _24167 = NOVALUE;
    DeRef(_24161);
    _24161 = NOVALUE;
    return;
    // SubProg c_printf8 pc: 187 op: BADRETURNF (43)
    ;
}


void _55adjust_indent_before(object _stmt_46184)
{
    object _i_46185 = NOVALUE;
    object _lb_46187 = NOVALUE;
    object _rb_46188 = NOVALUE;
    object _24185 = NOVALUE; // 46214 24185
// skipping _24184  name type: 0
    object _24183 = NOVALUE; // 46212 24183
// skipping _24182  name type: 0
    object _24181 = NOVALUE; // 46210 24181
// skipping _24180  name type: 0
// skipping _24179  name type: 0
// skipping _24178  name type: 0
    object _24175 = NOVALUE; // 46194 24175
    object _24174 = NOVALUE; // 46193 24174
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_indent_before pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_indent_before pc: 3 op: STARTLINE (58)

    /** c_out.e:177		lb = FALSE*/
    // SubProg adjust_indent_before pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 7 op: ASSIGN (18)
    _lb_46187 = _13FALSE_450;
    // SubProg adjust_indent_before pc: 10 op: STARTLINE (58)

    /** c_out.e:178		rb = FALSE*/
    // SubProg adjust_indent_before pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 14 op: ASSIGN (18)
    _rb_46188 = _13FALSE_450;
    // SubProg adjust_indent_before pc: 17 op: STARTLINE (58)

    /** c_out.e:180		for p = 1 to length(stmt) do*/
    // SubProg adjust_indent_before pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46184)){
            _24174 = SEQ_PTR(_stmt_46184)->length;
    }
    else {
        _24174 = 1;
    }
    // SubProg adjust_indent_before pc: 22 op: FOR_I (125)
    {
        object _p_46192;
        _p_46192 = 1;
L1: // addr: 29 pc: 22 sub: 46182 op: 125
        if (_p_46192 > _24174){
            goto L2; // [22] 102
        }
        // SubProg adjust_indent_before pc: 29 op: STARTLINE (58)

        /** c_out.e:181			switch stmt[p] do*/
        // SubProg adjust_indent_before pc: 31 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_stmt_46184);
        _24175 = (object)*(((s1_ptr)_2)->base + _p_46192);
        // SubProg adjust_indent_before pc: 35 op: SWITCH_I (193)
        if (IS_SEQUENCE(_24175) ){
            goto L3; // [35] 95
        }
        if(!IS_ATOM_INT(_24175)){
            if( (DBL_PTR(_24175)->dbl != (eudouble) ((object) DBL_PTR(_24175)->dbl) ) ){
                goto L3; // [35] 95
            }
            _0 = (object) DBL_PTR(_24175)->dbl;
        }
        else {
            _0 = _24175;
        };
        _24175 = NOVALUE;
        switch ( _0 ){ 
            // SubProg adjust_indent_before pc: 40 op: STARTLINE (58)

            /** c_out.e:182				case '\n' then*/
            // SubProg adjust_indent_before pc: 42 op: CASE (186)
            case 10:
            // SubProg adjust_indent_before pc: 44 op: STARTLINE (58)

            /** c_out.e:183					exit*/
            // SubProg adjust_indent_before pc: 46 op: EXIT (61)
            goto L2; // [46] 102
            // SubProg adjust_indent_before pc: 48 op: ELSE (23)
            goto L3; // [48] 95
            // SubProg adjust_indent_before pc: 50 op: STARTLINE (58)

            /** c_out.e:185				case  '}' then*/
            // SubProg adjust_indent_before pc: 52 op: CASE (186)
            case 125:
            // SubProg adjust_indent_before pc: 54 op: STARTLINE (58)

            /** c_out.e:186					rb = TRUE*/
            // SubProg adjust_indent_before pc: 56 op: GLOBAL_INIT_CHECK (109)
            // SubProg adjust_indent_before pc: 58 op: ASSIGN (18)
            _rb_46188 = _13TRUE_452;
            // SubProg adjust_indent_before pc: 61 op: STARTLINE (58)

            /** c_out.e:187					if lb then*/
            // SubProg adjust_indent_before pc: 63 op: IF (20)
            if (_lb_46187 == 0)
            {
                goto L3; // [63] 95
            }
            else{
            }
            // SubProg adjust_indent_before pc: 66 op: STARTLINE (58)

            /** c_out.e:188						exit*/
            // SubProg adjust_indent_before pc: 68 op: EXIT (61)
            goto L2; // [68] 102
            // SubProg adjust_indent_before pc: 70 op: NOP1 (159)
            // SubProg adjust_indent_before pc: 71 op: ELSE (23)
            goto L3; // [71] 95
            // SubProg adjust_indent_before pc: 73 op: STARTLINE (58)

            /** c_out.e:191				case '{' then*/
            // SubProg adjust_indent_before pc: 75 op: CASE (186)
            case 123:
            // SubProg adjust_indent_before pc: 77 op: STARTLINE (58)

            /** c_out.e:192					lb = TRUE*/
            // SubProg adjust_indent_before pc: 79 op: GLOBAL_INIT_CHECK (109)
            // SubProg adjust_indent_before pc: 81 op: ASSIGN (18)
            _lb_46187 = _13TRUE_452;
            // SubProg adjust_indent_before pc: 84 op: STARTLINE (58)

            /** c_out.e:193					if rb then */
            // SubProg adjust_indent_before pc: 86 op: IF (20)
            if (_rb_46188 == 0)
            {
                goto L4; // [86] 94
            }
            else{
            }
            // SubProg adjust_indent_before pc: 89 op: STARTLINE (58)

            /** c_out.e:194						exit*/
            // SubProg adjust_indent_before pc: 91 op: EXIT (61)
            goto L2; // [91] 102
            // SubProg adjust_indent_before pc: 93 op: NOP1 (159)
L4: // addr: 94 pc: 93 sub: 46182 op: 159
            // SubProg adjust_indent_before pc: 94 op: NOPSWITCH (187)
        ;}L3: // addr: 95 pc: 94 sub: 46182 op: 187
        // SubProg adjust_indent_before pc: 95 op: STARTLINE (58)

        /** c_out.e:198		end for*/
        // SubProg adjust_indent_before pc: 97 op: ENDFOR_INT_UP1 (54)
        _p_46192 = _p_46192 + 1;
        goto L1; // [97] 29
L2: // addr: 102 pc: 97 sub: 46182 op: 54
        ;
    }
    // SubProg adjust_indent_before pc: 102 op: STARTLINE (58)

    /** c_out.e:200		if rb then*/
    // SubProg adjust_indent_before pc: 104 op: IF (20)
    if (_rb_46188 == 0)
    {
        goto L5; // [104] 122
    }
    else{
    }
    // SubProg adjust_indent_before pc: 107 op: STARTLINE (58)

    /** c_out.e:201			if not lb then*/
    // SubProg adjust_indent_before pc: 109 op: NOT_IFW (108)
    if (_lb_46187 != 0)
    goto L6; // [109] 121
    // SubProg adjust_indent_before pc: 112 op: STARTLINE (58)

    /** c_out.e:202				indent -= 4*/
    // SubProg adjust_indent_before pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 116 op: MINUS_I (116)
    _55indent_46178 = _55indent_46178 - 4;
    // SubProg adjust_indent_before pc: 120 op: NOP1 (159)
L6: // addr: 121 pc: 120 sub: 46182 op: 159
    // SubProg adjust_indent_before pc: 121 op: NOP1 (159)
L5: // addr: 122 pc: 121 sub: 46182 op: 159
    // SubProg adjust_indent_before pc: 122 op: STARTLINE (58)

    /** c_out.e:206		i = indent + temp_indent*/
    // SubProg adjust_indent_before pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 128 op: PLUS_I (115)
    _i_46185 = _55indent_46178 + _55temp_indent_46179;
    // SubProg adjust_indent_before pc: 132 op: STARTLINE (58)

    /** c_out.e:207		while i >= length(big_blanks) do*/
    // SubProg adjust_indent_before pc: 134 op: NOP2 (110)
    // SubProg adjust_indent_before pc: 136 op: NOPWHILE (158)
L7: // addr: 137 pc: 136 sub: 46182 op: 158
    // SubProg adjust_indent_before pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_55big_blanks_46180)){
            _24181 = SEQ_PTR(_55big_blanks_46180)->length;
    }
    else {
        _24181 = 1;
    }
    // SubProg adjust_indent_before pc: 140 op: GREATEREQ_IFW_I (120)
    if (_i_46185 < _24181)
    goto L8; // [140] 163
    // SubProg adjust_indent_before pc: 144 op: STARTLINE (58)

    /** c_out.e:208			c_puts(big_blanks)*/
    // SubProg adjust_indent_before pc: 146 op: PROC (27)
    RefDS(_55big_blanks_46180);
    _55c_puts(_55big_blanks_46180);
    // SubProg adjust_indent_before pc: 149 op: STARTLINE (58)

    /** c_out.e:209			i -= length(big_blanks)*/
    // SubProg adjust_indent_before pc: 151 op: LENGTH (42)
    if (IS_SEQUENCE(_55big_blanks_46180)){
            _24183 = SEQ_PTR(_55big_blanks_46180)->length;
    }
    else {
        _24183 = 1;
    }
    // SubProg adjust_indent_before pc: 154 op: MINUS_I (116)
    _i_46185 = _i_46185 - _24183;
    _24183 = NOVALUE;
    // SubProg adjust_indent_before pc: 158 op: STARTLINE (58)

    /** c_out.e:210		end while*/
    // SubProg adjust_indent_before pc: 160 op: ENDWHILE (22)
    goto L7; // [160] 137
    // SubProg adjust_indent_before pc: 162 op: NOP1 (159)
L8: // addr: 163 pc: 162 sub: 46182 op: 159
    // SubProg adjust_indent_before pc: 163 op: STARTLINE (58)

    /** c_out.e:212		c_puts(big_blanks[1..i])*/
    // SubProg adjust_indent_before pc: 165 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_24185;
    RHS_Slice(_55big_blanks_46180, 1, _i_46185);
    // SubProg adjust_indent_before pc: 170 op: PROC (27)
    _55c_puts(_24185);
    _24185 = NOVALUE;
    // SubProg adjust_indent_before pc: 173 op: STARTLINE (58)

    /** c_out.e:214		temp_indent = 0    */
    // SubProg adjust_indent_before pc: 175 op: ASSIGN_I (113)
    _55temp_indent_46179 = 0;
    // SubProg adjust_indent_before pc: 178 op: STARTLINE (58)

    /** c_out.e:215	end procedure*/
    // SubProg adjust_indent_before pc: 180 op: RETURNP (29)

// Exiting block BLOCK: adjust_indent_before

// block var stmt_46184
    DeRefDS(_stmt_46184);

// block var i_46185

// block var lb_46187

// block var rb_46188
    return;
    // SubProg adjust_indent_before pc: 183 op: BADRETURNF (43)
    ;
}


void _55adjust_indent_after(object _stmt_46217)
{
// skipping _24207  name type: 0
    object _24206 = NOVALUE; // 46247 24206
    object _24205 = NOVALUE; // 46246 24205
    object _24203 = NOVALUE; // 46244 24203
// skipping _24202  name type: 0
    object _24201 = NOVALUE; // 46241 24201
    object _24200 = NOVALUE; // 46240 24200
// skipping _24198  name type: 0
    object _24197 = NOVALUE; // 46236 24197
// skipping _24196  name type: 0
    object _24195 = NOVALUE; // 46233 24195
    object _24194 = NOVALUE; // 46232 24194
// skipping _24192  name type: 0
    object _24191 = NOVALUE; // 46228 24191
// skipping _24190  name type: 0
    object _24187 = NOVALUE; // 46221 24187
    object _24186 = NOVALUE; // 46220 24186
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_indent_after pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_indent_after pc: 3 op: STARTLINE (58)

    /** c_out.e:221		for p = 1 to length(stmt) do*/
    // SubProg adjust_indent_after pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46217)){
            _24186 = SEQ_PTR(_stmt_46217)->length;
    }
    else {
        _24186 = 1;
    }
    // SubProg adjust_indent_after pc: 8 op: FOR_I (125)
    {
        object _p_46219;
        _p_46219 = 1;
L1: // addr: 15 pc: 8 sub: 46215 op: 125
        if (_p_46219 > _24186){
            goto L2; // [8] 61
        }
        // SubProg adjust_indent_after pc: 15 op: STARTLINE (58)

        /** c_out.e:222			switch stmt[p] do*/
        // SubProg adjust_indent_after pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_stmt_46217);
        _24187 = (object)*(((s1_ptr)_2)->base + _p_46219);
        // SubProg adjust_indent_after pc: 21 op: SWITCH_I (193)
        if (IS_SEQUENCE(_24187) ){
            goto L3; // [21] 54
        }
        if(!IS_ATOM_INT(_24187)){
            if( (DBL_PTR(_24187)->dbl != (eudouble) ((object) DBL_PTR(_24187)->dbl) ) ){
                goto L3; // [21] 54
            }
            _0 = (object) DBL_PTR(_24187)->dbl;
        }
        else {
            _0 = _24187;
        };
        _24187 = NOVALUE;
        switch ( _0 ){ 
            // SubProg adjust_indent_after pc: 26 op: STARTLINE (58)

            /** c_out.e:223				case '\n' then*/
            // SubProg adjust_indent_after pc: 28 op: CASE (186)
            case 10:
            // SubProg adjust_indent_after pc: 30 op: STARTLINE (58)

            /** c_out.e:224					exit*/
            // SubProg adjust_indent_after pc: 32 op: EXIT (61)
            goto L2; // [32] 61
            // SubProg adjust_indent_after pc: 34 op: ELSE (23)
            goto L3; // [34] 54
            // SubProg adjust_indent_after pc: 36 op: STARTLINE (58)

            /** c_out.e:226				case '{' then*/
            // SubProg adjust_indent_after pc: 38 op: CASE (186)
            case 123:
            // SubProg adjust_indent_after pc: 40 op: STARTLINE (58)

            /** c_out.e:227					indent += 4*/
            // SubProg adjust_indent_after pc: 42 op: GLOBAL_INIT_CHECK (109)
            // SubProg adjust_indent_after pc: 44 op: PLUS_I (115)
            _55indent_46178 = _55indent_46178 + 4;
            // SubProg adjust_indent_after pc: 48 op: STARTLINE (58)

            /** c_out.e:228					return*/
            // SubProg adjust_indent_after pc: 50 op: RETURNP (29)

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46217
            DeRefDS(_stmt_46217);
            return;
            // SubProg adjust_indent_after pc: 53 op: NOPSWITCH (187)
        ;}L3: // addr: 54 pc: 53 sub: 46215 op: 187
        // SubProg adjust_indent_after pc: 54 op: STARTLINE (58)

        /** c_out.e:230		end for*/
        // SubProg adjust_indent_after pc: 56 op: ENDFOR_INT_UP1 (54)
        _p_46219 = _p_46219 + 1;
        goto L1; // [56] 15
L2: // addr: 61 pc: 56 sub: 46215 op: 54
        ;
    }
    // SubProg adjust_indent_after pc: 61 op: STARTLINE (58)

    /** c_out.e:232		if length(stmt) < 3 then*/
    // SubProg adjust_indent_after pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46217)){
            _24191 = SEQ_PTR(_stmt_46217)->length;
    }
    else {
        _24191 = 1;
    }
    // SubProg adjust_indent_after pc: 66 op: LESS_IFW_I (119)
    if (_24191 >= 3)
    goto L4; // [66] 76
    // SubProg adjust_indent_after pc: 70 op: STARTLINE (58)

    /** c_out.e:233			return*/
    // SubProg adjust_indent_after pc: 72 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46217
    DeRefDS(_stmt_46217);
    return;
    // SubProg adjust_indent_after pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 46215 op: 159
    // SubProg adjust_indent_after pc: 76 op: STARTLINE (58)

    /** c_out.e:236		if not equal("if ", stmt[1..3]) then*/
    // SubProg adjust_indent_after pc: 78 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_24194;
    RHS_Slice(_stmt_46217, 1, 3);
    // SubProg adjust_indent_after pc: 83 op: EQUAL (153)
    if (_24193 == _24194)
    _24195 = 1;
    else if (IS_ATOM_INT(_24193) && IS_ATOM_INT(_24194))
    _24195 = 0;
    else
    _24195 = (compare(_24193, _24194) == 0);
    DeRefDS(_24194);
    _24194 = NOVALUE;
    // SubProg adjust_indent_after pc: 87 op: NOT_IFW (108)
    if (_24195 != 0)
    goto L5; // [87] 96
    _24195 = NOVALUE;
    // SubProg adjust_indent_after pc: 90 op: STARTLINE (58)

    /** c_out.e:237			return*/
    // SubProg adjust_indent_after pc: 92 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46217
    DeRefDS(_stmt_46217);
    return;
    // SubProg adjust_indent_after pc: 95 op: NOP1 (159)
L5: // addr: 96 pc: 95 sub: 46215 op: 159
    // SubProg adjust_indent_after pc: 96 op: STARTLINE (58)

    /** c_out.e:240		if length(stmt) < 5 then*/
    // SubProg adjust_indent_after pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46217)){
            _24197 = SEQ_PTR(_stmt_46217)->length;
    }
    else {
        _24197 = 1;
    }
    // SubProg adjust_indent_after pc: 101 op: LESS_IFW_I (119)
    if (_24197 >= 5)
    goto L6; // [101] 111
    // SubProg adjust_indent_after pc: 105 op: STARTLINE (58)

    /** c_out.e:241			return*/
    // SubProg adjust_indent_after pc: 107 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46217
    DeRefDS(_stmt_46217);
    return;
    // SubProg adjust_indent_after pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 46215 op: 159
    // SubProg adjust_indent_after pc: 111 op: STARTLINE (58)

    /** c_out.e:244		if not equal("else", stmt[1..4]) then*/
    // SubProg adjust_indent_after pc: 113 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_24200;
    RHS_Slice(_stmt_46217, 1, 4);
    // SubProg adjust_indent_after pc: 118 op: EQUAL (153)
    if (_24199 == _24200)
    _24201 = 1;
    else if (IS_ATOM_INT(_24199) && IS_ATOM_INT(_24200))
    _24201 = 0;
    else
    _24201 = (compare(_24199, _24200) == 0);
    DeRefDS(_24200);
    _24200 = NOVALUE;
    // SubProg adjust_indent_after pc: 122 op: NOT_IFW (108)
    if (_24201 != 0)
    goto L7; // [122] 131
    _24201 = NOVALUE;
    // SubProg adjust_indent_after pc: 125 op: STARTLINE (58)

    /** c_out.e:245			return*/
    // SubProg adjust_indent_after pc: 127 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46217
    DeRefDS(_stmt_46217);
    return;
    // SubProg adjust_indent_after pc: 130 op: NOP1 (159)
L7: // addr: 131 pc: 130 sub: 46215 op: 159
    // SubProg adjust_indent_after pc: 131 op: STARTLINE (58)

    /** c_out.e:248		if not find(stmt[5], {" \n"}) then*/
    // SubProg adjust_indent_after pc: 133 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_46217);
    _24203 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg adjust_indent_after pc: 137 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24204);
    ((intptr_t*)_2)[1] = _24204;
    _24205 = MAKE_SEQ(_1);
    // SubProg adjust_indent_after pc: 141 op: FIND_FROM (176)
    _24206 = find_from(_24203, _24205, 1);
    _24203 = NOVALUE;
    DeRefDS(_24205);
    _24205 = NOVALUE;
    // SubProg adjust_indent_after pc: 146 op: NOT_IFW (108)
    if (_24206 != 0)
    goto L8; // [146] 155
    _24206 = NOVALUE;
    // SubProg adjust_indent_after pc: 149 op: STARTLINE (58)

    /** c_out.e:249			return*/
    // SubProg adjust_indent_after pc: 151 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46217
    DeRefDS(_stmt_46217);
    return;
    // SubProg adjust_indent_after pc: 154 op: NOP1 (159)
L8: // addr: 155 pc: 154 sub: 46215 op: 159
    // SubProg adjust_indent_after pc: 155 op: STARTLINE (58)

    /** c_out.e:252		temp_indent = 4*/
    // SubProg adjust_indent_after pc: 157 op: ASSIGN_I (113)
    _55temp_indent_46179 = 4;
    // SubProg adjust_indent_after pc: 160 op: STARTLINE (58)

    /** c_out.e:254	end procedure*/
    // SubProg adjust_indent_after pc: 162 op: RETURNP (29)

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46217
    DeRefDS(_stmt_46217);
    return;
    // SubProg adjust_indent_after pc: 165 op: BADRETURNF (43)
    ;
}



// 0x30508BF3
