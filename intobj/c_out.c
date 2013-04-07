// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _54c_putc(object _c_46174)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_putc pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_46174)) {
        _1 = (object)(DBL_PTR(_c_46174)->dbl);
        DeRefDS(_c_46174);
        _c_46174 = _1;
    }
    // SubProg c_putc pc: 3 op: STARTLINE (58)

    /** c_out.e:62		if emit_c_output then*/
    // SubProg c_putc pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_putc pc: 7 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L1; // [7] 23
    }
    else{
    }
    // SubProg c_putc pc: 10 op: STARTLINE (58)

    /** c_out.e:63			puts(c_code, c)*/
    // SubProg c_putc pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_putc pc: 14 op: PUTS (44)
    EPuts(_54c_code_46164, _c_46174); // DJP 
    // SubProg c_putc pc: 17 op: STARTLINE (58)

    /** c_out.e:64			update_checksum( c )*/
    // SubProg c_putc pc: 19 op: PROC (27)
    _55update_checksum(_c_46174);
    // SubProg c_putc pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 46172 op: 159
    // SubProg c_putc pc: 23 op: STARTLINE (58)

    /** c_out.e:66	end procedure*/
    // SubProg c_putc pc: 25 op: RETURNP (29)

// Exiting block BLOCK: c_putc

// block var c_46174
    return;
    // SubProg c_putc pc: 28 op: BADRETURNF (43)
    ;
}


void _54c_hputs(object _c_source_46179)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_hputs pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_hputs pc: 3 op: STARTLINE (58)

    /** c_out.e:71		if emit_c_output then*/
    // SubProg c_hputs pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hputs pc: 7 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L1; // [7] 18
    }
    else{
    }
    // SubProg c_hputs pc: 10 op: STARTLINE (58)

    /** c_out.e:72			puts(c_h, c_source)    */
    // SubProg c_hputs pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hputs pc: 14 op: PUTS (44)
    EPuts(_54c_h_46165, _c_source_46179); // DJP 
    // SubProg c_hputs pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 46177 op: 159
    // SubProg c_hputs pc: 18 op: STARTLINE (58)

    /** c_out.e:74	end procedure*/
    // SubProg c_hputs pc: 20 op: RETURNP (29)

// Exiting block BLOCK: c_hputs

// block var c_source_46179
    DeRefDS(_c_source_46179);
    return;
    // SubProg c_hputs pc: 23 op: BADRETURNF (43)
    ;
}


void _54c_puts(object _c_source_46183)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_puts pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_puts pc: 3 op: STARTLINE (58)

    /** c_out.e:79		if emit_c_output then*/
    // SubProg c_puts pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_puts pc: 7 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L1; // [7] 23
    }
    else{
    }
    // SubProg c_puts pc: 10 op: STARTLINE (58)

    /** c_out.e:80			puts(c_code, c_source)*/
    // SubProg c_puts pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_puts pc: 14 op: PUTS (44)
    EPuts(_54c_code_46164, _c_source_46183); // DJP 
    // SubProg c_puts pc: 17 op: STARTLINE (58)

    /** c_out.e:81			update_checksum( c_source )*/
    // SubProg c_puts pc: 19 op: PROC (27)
    RefDS(_c_source_46183);
    _55update_checksum(_c_source_46183);
    // SubProg c_puts pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 46181 op: 159
    // SubProg c_puts pc: 23 op: STARTLINE (58)

    /** c_out.e:83	end procedure*/
    // SubProg c_puts pc: 25 op: RETURNP (29)

// Exiting block BLOCK: c_puts

// block var c_source_46183
    DeRefDS(_c_source_46183);
    return;
    // SubProg c_puts pc: 28 op: BADRETURNF (43)
    ;
}


void _54c_hprintf(object _format_46188, object _value_46189)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_hprintf pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_hprintf pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_value_46189)) {
        _1 = (object)(DBL_PTR(_value_46189)->dbl);
        DeRefDS(_value_46189);
        _value_46189 = _1;
    }
    // SubProg c_hprintf pc: 5 op: STARTLINE (58)

    /** c_out.e:88		if emit_c_output then*/
    // SubProg c_hprintf pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hprintf pc: 9 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L1; // [9] 21
    }
    else{
    }
    // SubProg c_hprintf pc: 12 op: STARTLINE (58)

    /** c_out.e:89			printf(c_h, format, value)*/
    // SubProg c_hprintf pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_hprintf pc: 16 op: PRINTF (38)
    EPrintf(_54c_h_46165, _format_46188, _value_46189);
    // SubProg c_hprintf pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 46186 op: 159
    // SubProg c_hprintf pc: 21 op: STARTLINE (58)

    /** c_out.e:91	end procedure*/
    // SubProg c_hprintf pc: 23 op: RETURNP (29)

// Exiting block BLOCK: c_hprintf

// block var format_46188
    DeRefDSi(_format_46188);

// block var value_46189
    return;
    // SubProg c_hprintf pc: 26 op: BADRETURNF (43)
    ;
}


void _54c_printf(object _format_46193, object _value_46194)
{
    object _text_46196 = NOVALUE;
// skipping _24205  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_printf pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_printf pc: 3 op: STARTLINE (58)

    /** c_out.e:96		if emit_c_output then*/
    // SubProg c_printf pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf pc: 7 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L1; // [7] 29
    }
    else{
    }
    // SubProg c_printf pc: 10 op: STARTLINE (58)

    /** c_out.e:97			sequence text = sprintf( format, value )*/
    // SubProg c_printf pc: 12 op: SPRINTF (53)
    DeRefi(_text_46196);
    _text_46196 = EPrintf(-9999999, _format_46193, _value_46194);
    // SubProg c_printf pc: 16 op: STARTLINE (58)

    /** c_out.e:98			puts(c_code, text)*/
    // SubProg c_printf pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf pc: 20 op: PUTS (44)
    EPuts(_54c_code_46164, _text_46196); // DJP 
    // SubProg c_printf pc: 23 op: STARTLINE (58)

    /** c_out.e:99			update_checksum( text )*/
    // SubProg c_printf pc: 25 op: PROC (27)
    RefDS(_text_46196);
    _55update_checksum(_text_46196);
    // SubProg c_printf pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 46191 op: 159
    // SubProg c_printf pc: 29 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var text_46196
    DeRefi(_text_46196);
    _text_46196 = NOVALUE;
    // SubProg c_printf pc: 31 op: STARTLINE (58)

    /** c_out.e:101	end procedure*/
    // SubProg c_printf pc: 33 op: RETURNP (29)

// Exiting block BLOCK: c_printf

// block var format_46193
    DeRefDSi(_format_46193);

// block var value_46194
    DeRef(_value_46194);
    return;
    // SubProg c_printf pc: 36 op: BADRETURNF (43)
    ;
}


void _54c_printf8(object _value_46207)
{
    object _buff_46208 = NOVALUE;
    object _neg_46209 = NOVALUE;
    object _p_46210 = NOVALUE;
// skipping _24234  name type: 0
// skipping _24233  name type: 0
    object _24232 = NOVALUE; // 46241 24232
    object _24230 = NOVALUE; // 46239 24230
// skipping _24229  name type: 0
    object _24228 = NOVALUE; // 46237 24228
    object _24226 = NOVALUE; // 46235 24226
// skipping _24225  name type: 0
    object _24224 = NOVALUE; // 46231 24224
    object _24222 = NOVALUE; // 46229 24222
// skipping _24221  name type: 0
    object _24220 = NOVALUE; // 46227 24220
    object _24218 = NOVALUE; // 46225 24218
// skipping _24217  name type: 0
    object _24215 = NOVALUE; // 46221 24215
// skipping _24214  name type: 0
    object _24213 = NOVALUE; // 46218 24213
// skipping _24212  name type: 0
    object _24211 = NOVALUE; // 46215 24211
// skipping _24210  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_printf8 pc: 1 op: STARTLINE (58)

    /** c_out.e:115		if emit_c_output then*/
    // SubProg c_printf8 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf8 pc: 5 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L1; // [5] 182
    }
    else{
    }
    // SubProg c_printf8 pc: 8 op: STARTLINE (58)

    /** c_out.e:116			neg = 0*/
    // SubProg c_printf8 pc: 10 op: ASSIGN_I (113)
    _neg_46209 = 0;
    // SubProg c_printf8 pc: 13 op: STARTLINE (58)

    /** c_out.e:117			buff = sprintf("%.20eL", value)*/
    // SubProg c_printf8 pc: 15 op: SPRINTF (53)
    DeRef(_buff_46208);
    _buff_46208 = EPrintf(-9999999, _24209, _value_46207);
    // SubProg c_printf8 pc: 19 op: STARTLINE (58)

    /** c_out.e:118			if length(buff) < 10 then*/
    // SubProg c_printf8 pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_buff_46208)){
            _24211 = SEQ_PTR(_buff_46208)->length;
    }
    else {
        _24211 = 1;
    }
    // SubProg c_printf8 pc: 24 op: LESS_IFW_I (119)
    if (_24211 >= 10)
    goto L2; // [24] 174
    // SubProg c_printf8 pc: 28 op: STARTLINE (58)

    /** c_out.e:120				p = 1*/
    // SubProg c_printf8 pc: 30 op: ASSIGN_I (113)
    _p_46210 = 1;
    // SubProg c_printf8 pc: 33 op: STARTLINE (58)

    /** c_out.e:121				while p <= length(buff) do*/
    // SubProg c_printf8 pc: 35 op: NOP2 (110)
    // SubProg c_printf8 pc: 37 op: NOPWHILE (158)
L3: // addr: 38 pc: 37 sub: 46205 op: 158
    // SubProg c_printf8 pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_buff_46208)){
            _24213 = SEQ_PTR(_buff_46208)->length;
    }
    else {
        _24213 = 1;
    }
    // SubProg c_printf8 pc: 41 op: LESSEQ_IFW_I (123)
    if (_p_46210 > _24213)
    goto L4; // [41] 173
    // SubProg c_printf8 pc: 45 op: STARTLINE (58)

    /** c_out.e:122					if buff[p] = '-' then*/
    // SubProg c_printf8 pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46208);
    _24215 = (object)*(((s1_ptr)_2)->base + _p_46210);
    // SubProg c_printf8 pc: 51 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24215, 45)){
        _24215 = NOVALUE;
        goto L5; // [51] 63
    }
    _24215 = NOVALUE;
    // SubProg c_printf8 pc: 55 op: STARTLINE (58)

    /** c_out.e:123						neg = 1*/
    // SubProg c_printf8 pc: 57 op: ASSIGN_I (113)
    _neg_46209 = 1;
    // SubProg c_printf8 pc: 60 op: ELSE (23)
    goto L6; // [60] 162
    // SubProg c_printf8 pc: 62 op: NOP1 (159)
L5: // addr: 63 pc: 62 sub: 46205 op: 159
    // SubProg c_printf8 pc: 63 op: STARTLINE (58)

    /** c_out.e:125					elsif buff[p] = 'i' or buff[p] = 'I' then*/
    // SubProg c_printf8 pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46208);
    _24218 = (object)*(((s1_ptr)_2)->base + _p_46210);
    // SubProg c_printf8 pc: 69 op: EQUALS (3)
    if (IS_ATOM_INT(_24218)) {
        _24220 = (_24218 == 105);
    }
    else {
        _24220 = binary_op(EQUALS, _24218, 105);
    }
    _24218 = NOVALUE;
    // SubProg c_printf8 pc: 73 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_24220)) {
        if (_24220 != 0) {
            goto L7; // [73] 90
        }
    }
    else {
        if (DBL_PTR(_24220)->dbl != 0.0) {
            goto L7; // [73] 90
        }
    }
    // SubProg c_printf8 pc: 77 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46208);
    _24222 = (object)*(((s1_ptr)_2)->base + _p_46210);
    // SubProg c_printf8 pc: 81 op: EQUALS (3)
    if (IS_ATOM_INT(_24222)) {
        _24224 = (_24222 == 73);
    }
    else {
        _24224 = binary_op(EQUALS, _24222, 73);
    }
    _24222 = NOVALUE;
    // SubProg c_printf8 pc: 85 op: NOP1 (159)
    // SubProg c_printf8 pc: 86 op: IF (20)
    if (_24224 == 0) {
        DeRef(_24224);
        _24224 = NOVALUE;
        goto L8; // [86] 114
    }
    else {
        if (!IS_ATOM_INT(_24224) && DBL_PTR(_24224)->dbl == 0.0){
            DeRef(_24224);
            _24224 = NOVALUE;
            goto L8; // [86] 114
        }
        DeRef(_24224);
        _24224 = NOVALUE;
    }
    DeRef(_24224);
    _24224 = NOVALUE;
    // SubProg c_printf8 pc: 89 op: NOP1 (159)
L7: // addr: 90 pc: 89 sub: 46205 op: 159
    // SubProg c_printf8 pc: 90 op: STARTLINE (58)

    /** c_out.e:127						buff = CREATE_INF*/
    // SubProg c_printf8 pc: 92 op: ASSIGN (18)
    RefDS(_54CREATE_INF_46199);
    DeRef(_buff_46208);
    _buff_46208 = _54CREATE_INF_46199;
    // SubProg c_printf8 pc: 95 op: STARTLINE (58)

    /** c_out.e:128						if neg then*/
    // SubProg c_printf8 pc: 97 op: IF (20)
    if (_neg_46209 == 0)
    {
        goto L4; // [97] 173
    }
    else{
    }
    // SubProg c_printf8 pc: 100 op: STARTLINE (58)

    /** c_out.e:129							buff = prepend(buff, '-')*/
    // SubProg c_printf8 pc: 102 op: PREPEND (57)
    Prepend(&_buff_46208, _buff_46208, 45);
    // SubProg c_printf8 pc: 106 op: NOP1 (159)
    // SubProg c_printf8 pc: 107 op: STARTLINE (58)

    /** c_out.e:131						exit*/
    // SubProg c_printf8 pc: 109 op: EXIT (61)
    goto L4; // [109] 173
    // SubProg c_printf8 pc: 111 op: ELSE (23)
    goto L6; // [111] 162
    // SubProg c_printf8 pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 46205 op: 159
    // SubProg c_printf8 pc: 114 op: STARTLINE (58)

    /** c_out.e:133					elsif buff[p] = 'n' or buff[p] = 'N' then*/
    // SubProg c_printf8 pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46208);
    _24226 = (object)*(((s1_ptr)_2)->base + _p_46210);
    // SubProg c_printf8 pc: 120 op: EQUALS (3)
    if (IS_ATOM_INT(_24226)) {
        _24228 = (_24226 == 110);
    }
    else {
        _24228 = binary_op(EQUALS, _24226, 110);
    }
    _24226 = NOVALUE;
    // SubProg c_printf8 pc: 124 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_24228)) {
        if (_24228 != 0) {
            goto L9; // [124] 141
        }
    }
    else {
        if (DBL_PTR(_24228)->dbl != 0.0) {
            goto L9; // [124] 141
        }
    }
    // SubProg c_printf8 pc: 128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_buff_46208);
    _24230 = (object)*(((s1_ptr)_2)->base + _p_46210);
    // SubProg c_printf8 pc: 132 op: EQUALS (3)
    if (IS_ATOM_INT(_24230)) {
        _24232 = (_24230 == 78);
    }
    else {
        _24232 = binary_op(EQUALS, _24230, 78);
    }
    _24230 = NOVALUE;
    // SubProg c_printf8 pc: 136 op: NOP1 (159)
    // SubProg c_printf8 pc: 137 op: IF (20)
    if (_24232 == 0) {
        DeRef(_24232);
        _24232 = NOVALUE;
        goto LA; // [137] 161
    }
    else {
        if (!IS_ATOM_INT(_24232) && DBL_PTR(_24232)->dbl == 0.0){
            DeRef(_24232);
            _24232 = NOVALUE;
            goto LA; // [137] 161
        }
        DeRef(_24232);
        _24232 = NOVALUE;
    }
    DeRef(_24232);
    _24232 = NOVALUE;
    // SubProg c_printf8 pc: 140 op: NOP1 (159)
L9: // addr: 141 pc: 140 sub: 46205 op: 159
    // SubProg c_printf8 pc: 141 op: STARTLINE (58)

    /** c_out.e:135						ifdef UNIX then*/
    // SubProg c_printf8 pc: 143 op: STARTLINE (58)

    /** c_out.e:136							buff = CREATE_NAN1*/
    // SubProg c_printf8 pc: 145 op: ASSIGN (18)
    RefDS(_54CREATE_NAN1_46201);
    DeRef(_buff_46208);
    _buff_46208 = _54CREATE_NAN1_46201;
    // SubProg c_printf8 pc: 148 op: STARTLINE (58)

    /** c_out.e:137							if neg then*/
    // SubProg c_printf8 pc: 150 op: IF (20)
    if (_neg_46209 == 0)
    {
        goto LB; // [150] 160
    }
    else{
    }
    // SubProg c_printf8 pc: 153 op: STARTLINE (58)

    /** c_out.e:138								buff = prepend(buff, '-')*/
    // SubProg c_printf8 pc: 155 op: PREPEND (57)
    Prepend(&_buff_46208, _buff_46208, 45);
    // SubProg c_printf8 pc: 159 op: NOP1 (159)
LB: // addr: 160 pc: 159 sub: 46205 op: 159
    // SubProg c_printf8 pc: 160 op: NOP1 (159)
LA: // addr: 161 pc: 160 sub: 46205 op: 159
    // SubProg c_printf8 pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 46205 op: 159
    // SubProg c_printf8 pc: 162 op: STARTLINE (58)

    /** c_out.e:156					p += 1*/
    // SubProg c_printf8 pc: 164 op: PLUS1_I (117)
    _p_46210 = _p_46210 + 1;
    // SubProg c_printf8 pc: 168 op: STARTLINE (58)

    /** c_out.e:157				end while*/
    // SubProg c_printf8 pc: 170 op: ENDWHILE (22)
    goto L3; // [170] 38
    // SubProg c_printf8 pc: 172 op: NOP1 (159)
L4: // addr: 173 pc: 172 sub: 46205 op: 159
    // SubProg c_printf8 pc: 173 op: NOP1 (159)
L2: // addr: 174 pc: 173 sub: 46205 op: 159
    // SubProg c_printf8 pc: 174 op: STARTLINE (58)

    /** c_out.e:159			puts(c_code, buff)*/
    // SubProg c_printf8 pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_printf8 pc: 178 op: PUTS (44)
    EPuts(_54c_code_46164, _buff_46208); // DJP 
    // SubProg c_printf8 pc: 181 op: NOP1 (159)
L1: // addr: 182 pc: 181 sub: 46205 op: 159
    // SubProg c_printf8 pc: 182 op: STARTLINE (58)

    /** c_out.e:161	end procedure*/
    // SubProg c_printf8 pc: 184 op: RETURNP (29)

// Exiting block BLOCK: c_printf8

// block var value_46207
    DeRef(_value_46207);

// block var buff_46208
    DeRef(_buff_46208);

// block var neg_46209

// block var p_46210
    DeRef(_24228);
    _24228 = NOVALUE;
    DeRef(_24220);
    _24220 = NOVALUE;
    return;
    // SubProg c_printf8 pc: 187 op: BADRETURNF (43)
    ;
}


void _54adjust_indent_before(object _stmt_46251)
{
    object _i_46252 = NOVALUE;
    object _lb_46254 = NOVALUE;
    object _rb_46255 = NOVALUE;
    object _24249 = NOVALUE; // 46283 24249
// skipping _24248  name type: 0
    object _24247 = NOVALUE; // 46281 24247
// skipping _24246  name type: 0
    object _24245 = NOVALUE; // 46279 24245
// skipping _24244  name type: 0
// skipping _24243  name type: 0
// skipping _24242  name type: 0
    object _24237 = NOVALUE; // 46261 24237
    object _24236 = NOVALUE; // 46260 24236
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_indent_before pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_indent_before pc: 3 op: STARTLINE (58)

    /** c_out.e:177		lb = FALSE*/
    // SubProg adjust_indent_before pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 7 op: ASSIGN (18)
    _lb_46254 = _6FALSE_363;
    // SubProg adjust_indent_before pc: 10 op: STARTLINE (58)

    /** c_out.e:178		rb = FALSE*/
    // SubProg adjust_indent_before pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 14 op: ASSIGN (18)
    _rb_46255 = _6FALSE_363;
    // SubProg adjust_indent_before pc: 17 op: STARTLINE (58)

    /** c_out.e:180		for p = 1 to length(stmt) do*/
    // SubProg adjust_indent_before pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46251)){
            _24236 = SEQ_PTR(_stmt_46251)->length;
    }
    else {
        _24236 = 1;
    }
    // SubProg adjust_indent_before pc: 22 op: FOR_I (125)
    {
        object _p_46259;
        _p_46259 = 1;
L1: // addr: 29 pc: 22 sub: 46249 op: 125
        if (_p_46259 > _24236){
            goto L2; // [22] 102
        }
        // SubProg adjust_indent_before pc: 29 op: STARTLINE (58)

        /** c_out.e:181			switch stmt[p] do*/
        // SubProg adjust_indent_before pc: 31 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_stmt_46251);
        _24237 = (object)*(((s1_ptr)_2)->base + _p_46259);
        // SubProg adjust_indent_before pc: 35 op: SWITCH_I (193)
        if (IS_SEQUENCE(_24237) ){
            goto L3; // [35] 95
        }
        if(!IS_ATOM_INT(_24237)){
            if( (DBL_PTR(_24237)->dbl != (eudouble) ((object) DBL_PTR(_24237)->dbl) ) ){
                goto L3; // [35] 95
            }
            _0 = (object) DBL_PTR(_24237)->dbl;
        }
        else {
            _0 = _24237;
        };
        _24237 = NOVALUE;
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
            _rb_46255 = _6TRUE_365;
            // SubProg adjust_indent_before pc: 61 op: STARTLINE (58)

            /** c_out.e:187					if lb then*/
            // SubProg adjust_indent_before pc: 63 op: IF (20)
            if (_lb_46254 == 0)
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
            _lb_46254 = _6TRUE_365;
            // SubProg adjust_indent_before pc: 84 op: STARTLINE (58)

            /** c_out.e:193					if rb then */
            // SubProg adjust_indent_before pc: 86 op: IF (20)
            if (_rb_46255 == 0)
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
L4: // addr: 94 pc: 93 sub: 46249 op: 159
            // SubProg adjust_indent_before pc: 94 op: NOPSWITCH (187)
        ;}L3: // addr: 95 pc: 94 sub: 46249 op: 187
        // SubProg adjust_indent_before pc: 95 op: STARTLINE (58)

        /** c_out.e:198		end for*/
        // SubProg adjust_indent_before pc: 97 op: ENDFOR_INT_UP1 (54)
        _p_46259 = _p_46259 + 1;
        goto L1; // [97] 29
L2: // addr: 102 pc: 97 sub: 46249 op: 54
        ;
    }
    // SubProg adjust_indent_before pc: 102 op: STARTLINE (58)

    /** c_out.e:200		if rb then*/
    // SubProg adjust_indent_before pc: 104 op: IF (20)
    if (_rb_46255 == 0)
    {
        goto L5; // [104] 122
    }
    else{
    }
    // SubProg adjust_indent_before pc: 107 op: STARTLINE (58)

    /** c_out.e:201			if not lb then*/
    // SubProg adjust_indent_before pc: 109 op: NOT_IFW (108)
    if (_lb_46254 != 0)
    goto L6; // [109] 121
    // SubProg adjust_indent_before pc: 112 op: STARTLINE (58)

    /** c_out.e:202				indent -= 4*/
    // SubProg adjust_indent_before pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 116 op: MINUS_I (116)
    _54indent_46245 = _54indent_46245 - 4;
    // SubProg adjust_indent_before pc: 120 op: NOP1 (159)
L6: // addr: 121 pc: 120 sub: 46249 op: 159
    // SubProg adjust_indent_before pc: 121 op: NOP1 (159)
L5: // addr: 122 pc: 121 sub: 46249 op: 159
    // SubProg adjust_indent_before pc: 122 op: STARTLINE (58)

    /** c_out.e:206		i = indent + temp_indent*/
    // SubProg adjust_indent_before pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg adjust_indent_before pc: 128 op: PLUS_I (115)
    _i_46252 = _54indent_46245 + _54temp_indent_46246;
    // SubProg adjust_indent_before pc: 132 op: STARTLINE (58)

    /** c_out.e:207		while i >= length(big_blanks) do*/
    // SubProg adjust_indent_before pc: 134 op: NOP2 (110)
    // SubProg adjust_indent_before pc: 136 op: NOPWHILE (158)
L7: // addr: 137 pc: 136 sub: 46249 op: 158
    // SubProg adjust_indent_before pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_54big_blanks_46247)){
            _24245 = SEQ_PTR(_54big_blanks_46247)->length;
    }
    else {
        _24245 = 1;
    }
    // SubProg adjust_indent_before pc: 140 op: GREATEREQ_IFW_I (120)
    if (_i_46252 < _24245)
    goto L8; // [140] 163
    // SubProg adjust_indent_before pc: 144 op: STARTLINE (58)

    /** c_out.e:208			c_puts(big_blanks)*/
    // SubProg adjust_indent_before pc: 146 op: PROC (27)
    RefDS(_54big_blanks_46247);
    _54c_puts(_54big_blanks_46247);
    // SubProg adjust_indent_before pc: 149 op: STARTLINE (58)

    /** c_out.e:209			i -= length(big_blanks)*/
    // SubProg adjust_indent_before pc: 151 op: LENGTH (42)
    if (IS_SEQUENCE(_54big_blanks_46247)){
            _24247 = SEQ_PTR(_54big_blanks_46247)->length;
    }
    else {
        _24247 = 1;
    }
    // SubProg adjust_indent_before pc: 154 op: MINUS_I (116)
    _i_46252 = _i_46252 - _24247;
    _24247 = NOVALUE;
    // SubProg adjust_indent_before pc: 158 op: STARTLINE (58)

    /** c_out.e:210		end while*/
    // SubProg adjust_indent_before pc: 160 op: ENDWHILE (22)
    goto L7; // [160] 137
    // SubProg adjust_indent_before pc: 162 op: NOP1 (159)
L8: // addr: 163 pc: 162 sub: 46249 op: 159
    // SubProg adjust_indent_before pc: 163 op: STARTLINE (58)

    /** c_out.e:212		c_puts(big_blanks[1..i])*/
    // SubProg adjust_indent_before pc: 165 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_24249;
    RHS_Slice(_54big_blanks_46247, 1, _i_46252);
    // SubProg adjust_indent_before pc: 170 op: PROC (27)
    _54c_puts(_24249);
    _24249 = NOVALUE;
    // SubProg adjust_indent_before pc: 173 op: STARTLINE (58)

    /** c_out.e:214		temp_indent = 0    */
    // SubProg adjust_indent_before pc: 175 op: ASSIGN_I (113)
    _54temp_indent_46246 = 0;
    // SubProg adjust_indent_before pc: 178 op: STARTLINE (58)

    /** c_out.e:215	end procedure*/
    // SubProg adjust_indent_before pc: 180 op: RETURNP (29)

// Exiting block BLOCK: adjust_indent_before

// block var stmt_46251
    DeRefDS(_stmt_46251);

// block var i_46252

// block var lb_46254

// block var rb_46255
    return;
    // SubProg adjust_indent_before pc: 183 op: BADRETURNF (43)
    ;
}


void _54adjust_indent_after(object _stmt_46286)
{
// skipping _24271  name type: 0
    object _24270 = NOVALUE; // 46316 24270
    object _24269 = NOVALUE; // 46315 24269
    object _24267 = NOVALUE; // 46313 24267
// skipping _24266  name type: 0
    object _24265 = NOVALUE; // 46310 24265
    object _24264 = NOVALUE; // 46309 24264
// skipping _24262  name type: 0
    object _24261 = NOVALUE; // 46305 24261
// skipping _24260  name type: 0
    object _24259 = NOVALUE; // 46302 24259
    object _24258 = NOVALUE; // 46301 24258
// skipping _24256  name type: 0
    object _24255 = NOVALUE; // 46297 24255
// skipping _24254  name type: 0
    object _24251 = NOVALUE; // 46290 24251
    object _24250 = NOVALUE; // 46289 24250
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg adjust_indent_after pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg adjust_indent_after pc: 3 op: STARTLINE (58)

    /** c_out.e:221		for p = 1 to length(stmt) do*/
    // SubProg adjust_indent_after pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46286)){
            _24250 = SEQ_PTR(_stmt_46286)->length;
    }
    else {
        _24250 = 1;
    }
    // SubProg adjust_indent_after pc: 8 op: FOR_I (125)
    {
        object _p_46288;
        _p_46288 = 1;
L1: // addr: 15 pc: 8 sub: 46284 op: 125
        if (_p_46288 > _24250){
            goto L2; // [8] 61
        }
        // SubProg adjust_indent_after pc: 15 op: STARTLINE (58)

        /** c_out.e:222			switch stmt[p] do*/
        // SubProg adjust_indent_after pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_stmt_46286);
        _24251 = (object)*(((s1_ptr)_2)->base + _p_46288);
        // SubProg adjust_indent_after pc: 21 op: SWITCH_I (193)
        if (IS_SEQUENCE(_24251) ){
            goto L3; // [21] 54
        }
        if(!IS_ATOM_INT(_24251)){
            if( (DBL_PTR(_24251)->dbl != (eudouble) ((object) DBL_PTR(_24251)->dbl) ) ){
                goto L3; // [21] 54
            }
            _0 = (object) DBL_PTR(_24251)->dbl;
        }
        else {
            _0 = _24251;
        };
        _24251 = NOVALUE;
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
            _54indent_46245 = _54indent_46245 + 4;
            // SubProg adjust_indent_after pc: 48 op: STARTLINE (58)

            /** c_out.e:228					return*/
            // SubProg adjust_indent_after pc: 50 op: RETURNP (29)

// Exiting block BLOCK: CASE-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46286
            DeRefDS(_stmt_46286);
            return;
            // SubProg adjust_indent_after pc: 53 op: NOPSWITCH (187)
        ;}L3: // addr: 54 pc: 53 sub: 46284 op: 187
        // SubProg adjust_indent_after pc: 54 op: STARTLINE (58)

        /** c_out.e:230		end for*/
        // SubProg adjust_indent_after pc: 56 op: ENDFOR_INT_UP1 (54)
        _p_46288 = _p_46288 + 1;
        goto L1; // [56] 15
L2: // addr: 61 pc: 56 sub: 46284 op: 54
        ;
    }
    // SubProg adjust_indent_after pc: 61 op: STARTLINE (58)

    /** c_out.e:232		if length(stmt) < 3 then*/
    // SubProg adjust_indent_after pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46286)){
            _24255 = SEQ_PTR(_stmt_46286)->length;
    }
    else {
        _24255 = 1;
    }
    // SubProg adjust_indent_after pc: 66 op: LESS_IFW_I (119)
    if (_24255 >= 3)
    goto L4; // [66] 76
    // SubProg adjust_indent_after pc: 70 op: STARTLINE (58)

    /** c_out.e:233			return*/
    // SubProg adjust_indent_after pc: 72 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46286
    DeRefDS(_stmt_46286);
    return;
    // SubProg adjust_indent_after pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 46284 op: 159
    // SubProg adjust_indent_after pc: 76 op: STARTLINE (58)

    /** c_out.e:236		if not equal("if ", stmt[1..3]) then*/
    // SubProg adjust_indent_after pc: 78 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_24258;
    RHS_Slice(_stmt_46286, 1, 3);
    // SubProg adjust_indent_after pc: 83 op: EQUAL (153)
    if (_24257 == _24258)
    _24259 = 1;
    else if (IS_ATOM_INT(_24257) && IS_ATOM_INT(_24258))
    _24259 = 0;
    else
    _24259 = (compare(_24257, _24258) == 0);
    DeRefDS(_24258);
    _24258 = NOVALUE;
    // SubProg adjust_indent_after pc: 87 op: NOT_IFW (108)
    if (_24259 != 0)
    goto L5; // [87] 96
    _24259 = NOVALUE;
    // SubProg adjust_indent_after pc: 90 op: STARTLINE (58)

    /** c_out.e:237			return*/
    // SubProg adjust_indent_after pc: 92 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46286
    DeRefDS(_stmt_46286);
    return;
    // SubProg adjust_indent_after pc: 95 op: NOP1 (159)
L5: // addr: 96 pc: 95 sub: 46284 op: 159
    // SubProg adjust_indent_after pc: 96 op: STARTLINE (58)

    /** c_out.e:240		if length(stmt) < 5 then*/
    // SubProg adjust_indent_after pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_46286)){
            _24261 = SEQ_PTR(_stmt_46286)->length;
    }
    else {
        _24261 = 1;
    }
    // SubProg adjust_indent_after pc: 101 op: LESS_IFW_I (119)
    if (_24261 >= 5)
    goto L6; // [101] 111
    // SubProg adjust_indent_after pc: 105 op: STARTLINE (58)

    /** c_out.e:241			return*/
    // SubProg adjust_indent_after pc: 107 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46286
    DeRefDS(_stmt_46286);
    return;
    // SubProg adjust_indent_after pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 46284 op: 159
    // SubProg adjust_indent_after pc: 111 op: STARTLINE (58)

    /** c_out.e:244		if not equal("else", stmt[1..4]) then*/
    // SubProg adjust_indent_after pc: 113 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_24264;
    RHS_Slice(_stmt_46286, 1, 4);
    // SubProg adjust_indent_after pc: 118 op: EQUAL (153)
    if (_24263 == _24264)
    _24265 = 1;
    else if (IS_ATOM_INT(_24263) && IS_ATOM_INT(_24264))
    _24265 = 0;
    else
    _24265 = (compare(_24263, _24264) == 0);
    DeRefDS(_24264);
    _24264 = NOVALUE;
    // SubProg adjust_indent_after pc: 122 op: NOT_IFW (108)
    if (_24265 != 0)
    goto L7; // [122] 131
    _24265 = NOVALUE;
    // SubProg adjust_indent_after pc: 125 op: STARTLINE (58)

    /** c_out.e:245			return*/
    // SubProg adjust_indent_after pc: 127 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46286
    DeRefDS(_stmt_46286);
    return;
    // SubProg adjust_indent_after pc: 130 op: NOP1 (159)
L7: // addr: 131 pc: 130 sub: 46284 op: 159
    // SubProg adjust_indent_after pc: 131 op: STARTLINE (58)

    /** c_out.e:248		if not find(stmt[5], {" \n"}) then*/
    // SubProg adjust_indent_after pc: 133 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_46286);
    _24267 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg adjust_indent_after pc: 137 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24268);
    ((intptr_t*)_2)[1] = _24268;
    _24269 = MAKE_SEQ(_1);
    // SubProg adjust_indent_after pc: 141 op: FIND_FROM (176)
    _24270 = find_from(_24267, _24269, 1);
    _24267 = NOVALUE;
    DeRefDS(_24269);
    _24269 = NOVALUE;
    // SubProg adjust_indent_after pc: 146 op: NOT_IFW (108)
    if (_24270 != 0)
    goto L8; // [146] 155
    _24270 = NOVALUE;
    // SubProg adjust_indent_after pc: 149 op: STARTLINE (58)

    /** c_out.e:249			return*/
    // SubProg adjust_indent_after pc: 151 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46286
    DeRefDS(_stmt_46286);
    return;
    // SubProg adjust_indent_after pc: 154 op: NOP1 (159)
L8: // addr: 155 pc: 154 sub: 46284 op: 159
    // SubProg adjust_indent_after pc: 155 op: STARTLINE (58)

    /** c_out.e:252		temp_indent = 4*/
    // SubProg adjust_indent_after pc: 157 op: ASSIGN_I (113)
    _54temp_indent_46246 = 4;
    // SubProg adjust_indent_after pc: 160 op: STARTLINE (58)

    /** c_out.e:254	end procedure*/
    // SubProg adjust_indent_after pc: 162 op: RETURNP (29)

// Exiting block BLOCK: adjust_indent_after

// block var stmt_46286
    DeRefDS(_stmt_46286);
    return;
    // SubProg adjust_indent_after pc: 165 op: BADRETURNF (43)
    ;
}



// 0x8C4BD6C7
