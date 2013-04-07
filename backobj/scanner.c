// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _61set_qualified_fwd(object _fwd_25217)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_qualified_fwd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fwd_25217)) {
        _1 = (object)(DBL_PTR(_fwd_25217)->dbl);
        DeRefDS(_fwd_25217);
        _fwd_25217 = _1;
    }
    // SubProg set_qualified_fwd pc: 3 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg set_qualified_fwd pc: 5 op: ASSIGN_I (113)
    _61qualified_fwd_25214 = _fwd_25217;
    // SubProg set_qualified_fwd pc: 8 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg set_qualified_fwd pc: 10 op: RETURNP (29)

// Exiting block BLOCK: set_qualified_fwd

// block var fwd_25217
    return;
    // SubProg set_qualified_fwd pc: 13 op: BADRETURNF (43)
    ;
}


object _61get_qualified_fwd()
{
    object _fwd_25220 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_qualified_fwd pc: 1 op: STARTLINE (58)

    /** scanner.e:108		integer fwd = qualified_fwd*/
    // SubProg get_qualified_fwd pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qualified_fwd pc: 5 op: ASSIGN_I (113)
    _fwd_25220 = _61qualified_fwd_25214;
    // SubProg get_qualified_fwd pc: 8 op: STARTLINE (58)

    /** scanner.e:109		set_qualified_fwd( -1 )*/
    // SubProg get_qualified_fwd pc: 10 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg get_qualified_fwd pc: 12 op: ASSIGN_I (113)
    _61qualified_fwd_25214 = -1;
    // SubProg get_qualified_fwd pc: 15 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg get_qualified_fwd pc: 17 op: ELSE (23)
    goto L1; // [17] 20
    // SubProg get_qualified_fwd pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 25218 op: 159
    // SubProg get_qualified_fwd pc: 20 op: STARTLINE (58)

    /** scanner.e:110		return fwd*/
    // SubProg get_qualified_fwd pc: 22 op: RETURNF (28)

// Exiting block BLOCK: get_qualified_fwd
    return _fwd_25220;
    // SubProg get_qualified_fwd pc: 26 op: BADRETURNF (43)
    ;
}


object _61pack_source(object _src_25298)
{
    object _start_25299 = NOVALUE;
    object _14250 = NOVALUE; // 25329 14250
    object _14249 = NOVALUE; // 25328 14249
    object _14248 = NOVALUE; // 25327 14248
    object _14247 = NOVALUE; // 25326 14247
// skipping _14246  name type: 0
    object _14245 = NOVALUE; // 25323 14245
// skipping _14244  name type: 0
    object _14243 = NOVALUE; // 25321 14243
    object _14242 = NOVALUE; // 25320 14242
    object _14241 = NOVALUE; // 25319 14241
// skipping _14240  name type: 0
// skipping _14239  name type: 0
// skipping _14238  name type: 0
    object _14237 = NOVALUE; // 25311 14237
// skipping _14236  name type: 0
    object _14235 = NOVALUE; // 25308 14235
    object _14234 = NOVALUE; // 25307 14234
// skipping _14233  name type: 0
// skipping _14232  name type: 0
    object _14231 = NOVALUE; // 25303 14231
    object _14230 = NOVALUE; // 25301 14230
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pack_source pc: 1 op: STARTLINE (58)

    /** scanner.e:197		if equal(src, 0) then*/
    // SubProg pack_source pc: 3 op: EQUAL (153)
    if (_src_25298 == 0)
    _14230 = 1;
    else if (IS_ATOM_INT(_src_25298) && IS_ATOM_INT(0))
    _14230 = 0;
    else
    _14230 = (compare(_src_25298, 0) == 0);
    // SubProg pack_source pc: 7 op: IF (20)
    if (_14230 == 0)
    {
        _14230 = NOVALUE;
        goto L1; // [7] 17
    }
    else{
        _14230 = NOVALUE;
    }
    // SubProg pack_source pc: 10 op: STARTLINE (58)

    /** scanner.e:198			return 0*/
    // SubProg pack_source pc: 12 op: RETURNF (28)

// Exiting block BLOCK: pack_source

// block var src_25298
    DeRef(_src_25298);

// block var start_25299
    return 0;
    // SubProg pack_source pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 25296 op: 159
    // SubProg pack_source pc: 17 op: STARTLINE (58)

    /** scanner.e:201		if length(src) >= SOURCE_CHUNK then*/
    // SubProg pack_source pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25298)){
            _14231 = SEQ_PTR(_src_25298)->length;
    }
    else {
        _14231 = 1;
    }
    // SubProg pack_source pc: 22 op: GREATEREQ_IFW_I (120)
    if (_14231 < 10000)
    goto L2; // [22] 34
    // SubProg pack_source pc: 26 op: STARTLINE (58)

    /** scanner.e:202			src = src[1..100] -- enough for trace or profile display*/
    // SubProg pack_source pc: 28 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_src_25298;
    RHS_Slice(_src_25298, 1, 100);
    // SubProg pack_source pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 25296 op: 159
    // SubProg pack_source pc: 34 op: STARTLINE (58)

    /** scanner.e:205		if current_source_next + length(src) >= SOURCE_CHUNK then*/
    // SubProg pack_source pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25298)){
            _14234 = SEQ_PTR(_src_25298)->length;
    }
    else {
        _14234 = 1;
    }
    // SubProg pack_source pc: 41 op: PLUS (11)
    _14235 = _61current_source_next_25294 + _14234;
    if ((object)((uintptr_t)_14235 + (uintptr_t)HIGH_BITS) >= 0){
        _14235 = NewDouble((eudouble)_14235);
    }
    _14234 = NOVALUE;
    // SubProg pack_source pc: 45 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _14235, 10000)){
        DeRef(_14235);
        _14235 = NOVALUE;
        goto L3; // [45] 94
    }
    DeRef(_14235);
    _14235 = NOVALUE;
    // SubProg pack_source pc: 49 op: STARTLINE (58)

    /** scanner.e:207			current_source = allocate(SOURCE_CHUNK + LINE_BUFLEN)*/
    // SubProg pack_source pc: 51 op: PLUS (11)
    _14237 = 10400;
    // SubProg pack_source pc: 55 op: PROC (27)
    _0 = _3allocate(10400, 0);
    DeRef(_61current_source_25293);
    _61current_source_25293 = _0;
    _14237 = NOVALUE;
    // SubProg pack_source pc: 60 op: STARTLINE (58)

    /** scanner.e:208			if current_source = 0 then*/
    // SubProg pack_source pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 64 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _61current_source_25293, 0)){
        goto L4; // [64] 76
    }
    // SubProg pack_source pc: 68 op: STARTLINE (58)

    /** scanner.e:209				CompileErr(123)*/
    // SubProg pack_source pc: 70 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(123, _21936, 0);
    // SubProg pack_source pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 25296 op: 159
    // SubProg pack_source pc: 76 op: STARTLINE (58)

    /** scanner.e:211			all_source = append(all_source, current_source)*/
    // SubProg pack_source pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 82 op: APPEND (35)
    Ref(_61current_source_25293);
    Append(&_35all_source_14180, _35all_source_14180, _61current_source_25293);
    // SubProg pack_source pc: 86 op: SEQUENCE_CHECK (97)
    // SubProg pack_source pc: 88 op: STARTLINE (58)

    /** scanner.e:213			current_source_next = 1*/
    // SubProg pack_source pc: 90 op: ASSIGN_I (113)
    _61current_source_next_25294 = 1;
    // SubProg pack_source pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 25296 op: 159
    // SubProg pack_source pc: 94 op: STARTLINE (58)

    /** scanner.e:216		start = current_source_next*/
    // SubProg pack_source pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 98 op: ASSIGN_I (113)
    _start_25299 = _61current_source_next_25294;
    // SubProg pack_source pc: 101 op: STARTLINE (58)

    /** scanner.e:217		poke(current_source+current_source_next, src)*/
    // SubProg pack_source pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 107 op: PLUS (11)
    if (IS_ATOM_INT(_61current_source_25293)) {
        _14241 = _61current_source_25293 + _61current_source_next_25294;
        if ((object)((uintptr_t)_14241 + (uintptr_t)HIGH_BITS) >= 0){
            _14241 = NewDouble((eudouble)_14241);
        }
    }
    else {
        _14241 = NewDouble(DBL_PTR(_61current_source_25293)->dbl + (eudouble)_61current_source_next_25294);
    }
    // SubProg pack_source pc: 111 op: POKE (128)
    if (IS_ATOM_INT(_14241)){
        poke_addr = (uint8_t *)_14241;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14241)->dbl);
    }
    if (IS_ATOM_INT(_src_25298)) {
        *poke_addr = (uint8_t)_src_25298;
    }
    else if (IS_ATOM(_src_25298)) {
        *poke_addr = (uint8_t)DBL_PTR(_src_25298)->dbl;
    }
    else {
        _1 = (object)SEQ_PTR(_src_25298);
        _1 = (object)((s1_ptr)_1)->base;
        while (1) {
            _1 += sizeof(object);
            _2 = *((object *)_1);
            if (IS_ATOM_INT(_2)) {
                *poke_addr++ = (uint8_t)_2;
            }
            else if (_2 == NOVALUE) {
                break;
            }
            else {
                *poke_addr++ = (uint8_t)DBL_PTR(_2)->dbl;
            }
        }
    }
    DeRef(_14241);
    _14241 = NOVALUE;
    // SubProg pack_source pc: 114 op: STARTLINE (58)

    /** scanner.e:218		current_source_next += length(src)-1*/
    // SubProg pack_source pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 118 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25298)){
            _14242 = SEQ_PTR(_src_25298)->length;
    }
    else {
        _14242 = 1;
    }
    // SubProg pack_source pc: 121 op: MINUS (10)
    _14243 = _14242 - 1;
    _14242 = NOVALUE;
    // SubProg pack_source pc: 125 op: PLUS (11)
    _61current_source_next_25294 = _61current_source_next_25294 + _14243;
    _14243 = NOVALUE;
    // SubProg pack_source pc: 131 op: STARTLINE (58)

    /** scanner.e:219		poke(current_source+current_source_next, 0) -- overwrite \n*/
    // SubProg pack_source pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 137 op: PLUS (11)
    if (IS_ATOM_INT(_61current_source_25293)) {
        _14245 = _61current_source_25293 + _61current_source_next_25294;
        if ((object)((uintptr_t)_14245 + (uintptr_t)HIGH_BITS) >= 0){
            _14245 = NewDouble((eudouble)_14245);
        }
    }
    else {
        _14245 = NewDouble(DBL_PTR(_61current_source_25293)->dbl + (eudouble)_61current_source_next_25294);
    }
    // SubProg pack_source pc: 141 op: POKE (128)
    if (IS_ATOM_INT(_14245)){
        poke_addr = (uint8_t *)_14245;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14245)->dbl);
    }
    *poke_addr = (uint8_t)0;
    DeRef(_14245);
    _14245 = NOVALUE;
    // SubProg pack_source pc: 144 op: STARTLINE (58)

    /** scanner.e:220		current_source_next += 1*/
    // SubProg pack_source pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 148 op: PLUS1_I (117)
    _61current_source_next_25294 = _61current_source_next_25294 + 1;
    // SubProg pack_source pc: 152 op: STARTLINE (58)

    /** scanner.e:221		return start + SOURCE_CHUNK * (length(all_source)-1)*/
    // SubProg pack_source pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 156 op: LENGTH (42)
    if (IS_SEQUENCE(_35all_source_14180)){
            _14247 = SEQ_PTR(_35all_source_14180)->length;
    }
    else {
        _14247 = 1;
    }
    // SubProg pack_source pc: 159 op: MINUS (10)
    _14248 = _14247 - 1;
    _14247 = NOVALUE;
    // SubProg pack_source pc: 163 op: MULTIPLY (13)
    if (_14248 <= INT15){
        _14249 = 10000 * _14248;
    }
    else{
        _14249 = NewDouble(10000 * (eudouble)_14248);
    }
    _14248 = NOVALUE;
    // SubProg pack_source pc: 167 op: PLUS (11)
    if (IS_ATOM_INT(_14249)) {
        _14250 = _start_25299 + _14249;
        if ((object)((uintptr_t)_14250 + (uintptr_t)HIGH_BITS) >= 0){
            _14250 = NewDouble((eudouble)_14250);
        }
    }
    else {
        _14250 = NewDouble((eudouble)_start_25299 + DBL_PTR(_14249)->dbl);
    }
    DeRef(_14249);
    _14249 = NOVALUE;
    // SubProg pack_source pc: 171 op: RETURNF (28)

// Exiting block BLOCK: pack_source

// block var src_25298
    DeRef(_src_25298);

// block var start_25299
    return _14250;
    // SubProg pack_source pc: 175 op: BADRETURNF (43)
    ;
}


object _61fetch_line(object _start_25332)
{
    object _line_25333 = NOVALUE;
    object _memdata_25334 = NOVALUE;
    object _c_25335 = NOVALUE;
    object _chunk_25336 = NOVALUE;
    object _p_25337 = NOVALUE;
    object _n_25338 = NOVALUE;
    object _m_25339 = NOVALUE;
// skipping _14276  name type: 0
    object _14275 = NOVALUE; // 25371 14275
    object _14274 = NOVALUE; // 25370 14274
// skipping _14273  name type: 0
    object _14272 = NOVALUE; // 25368 14272
// skipping _14271  name type: 0
    object _14270 = NOVALUE; // 25366 14270
// skipping _14269  name type: 0
// skipping _14268  name type: 0
// skipping _14267  name type: 0
// skipping _14266  name type: 0
// skipping _14265  name type: 0
    object _14264 = NOVALUE; // 25358 14264
// skipping _14263  name type: 0
    object _14262 = NOVALUE; // 25356 14262
// skipping _14261  name type: 0
// skipping _14260  name type: 0
// skipping _14259  name type: 0
    object _14258 = NOVALUE; // 25349 14258
// skipping _14257  name type: 0
    object _14256 = NOVALUE; // 25347 14256
// skipping _14255  name type: 0
// skipping _14254  name type: 0
    object _14253 = NOVALUE; // 25343 14253
// skipping _14252  name type: 0
// skipping _14251  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fetch_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg fetch_line pc: 3 op: STARTLINE (58)

    /** scanner.e:234		if start = 0 then*/
    // SubProg fetch_line pc: 5 op: EQUALS_IFW_I (121)
    if (_start_25332 != 0)
    goto L1; // [5] 16
    // SubProg fetch_line pc: 9 op: STARTLINE (58)

    /** scanner.e:235			return ""*/
    // SubProg fetch_line pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: fetch_line

// block var start_25332

// block var line_25333
    DeRef(_line_25333);

// block var memdata_25334
    DeRefi(_memdata_25334);

// block var c_25335

// block var chunk_25336

// block var p_25337
    DeRef(_p_25337);

// block var n_25338

// block var m_25339
    return _5;
    // SubProg fetch_line pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 25330 op: 159
    // SubProg fetch_line pc: 16 op: STARTLINE (58)

    /** scanner.e:237		line = repeat(0, LINE_BUFLEN)*/
    // SubProg fetch_line pc: 18 op: REPEAT (32)
    DeRef(_line_25333);
    _line_25333 = Repeat(0, 400);
    // SubProg fetch_line pc: 22 op: STARTLINE (58)

    /** scanner.e:238		n = 0*/
    // SubProg fetch_line pc: 24 op: ASSIGN_I (113)
    _n_25338 = 0;
    // SubProg fetch_line pc: 27 op: STARTLINE (58)

    /** scanner.e:239		chunk = 1+floor(start / SOURCE_CHUNK)*/
    // SubProg fetch_line pc: 29 op: FLOOR_DIV (63)
    if (10000 > 0 && _start_25332 >= 0) {
        _14253 = _start_25332 / 10000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_start_25332 / (eudouble)10000);
        _14253 = (object)temp_dbl;
    }
    // SubProg fetch_line pc: 33 op: PLUS1_I (117)
    _chunk_25336 = _14253 + 1;
    _14253 = NOVALUE;
    // SubProg fetch_line pc: 37 op: STARTLINE (58)

    /** scanner.e:240		start = remainder(start, SOURCE_CHUNK)*/
    // SubProg fetch_line pc: 39 op: REMAINDER (71)
    _start_25332 = (_start_25332 % 10000);
    // SubProg fetch_line pc: 43 op: STARTLINE (58)

    /** scanner.e:241		p = all_source[chunk] + start*/
    // SubProg fetch_line pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg fetch_line pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35all_source_14180);
    _14256 = (object)*(((s1_ptr)_2)->base + _chunk_25336);
    // SubProg fetch_line pc: 51 op: PLUS (11)
    DeRef(_p_25337);
    if (IS_ATOM_INT(_14256)) {
        _p_25337 = _14256 + _start_25332;
        if ((object)((uintptr_t)_p_25337 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25337 = NewDouble((eudouble)_p_25337);
        }
    }
    else {
        _p_25337 = NewDouble(DBL_PTR(_14256)->dbl + (eudouble)_start_25332);
    }
    _14256 = NOVALUE;
    // SubProg fetch_line pc: 55 op: STARTLINE (58)

    /** scanner.e:242		memdata = peek({p, LINE_BUFLEN})*/
    // SubProg fetch_line pc: 57 op: RIGHT_BRACE_2 (85)
    Ref(_p_25337);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25337;
    ((intptr_t *)_2)[2] = 400;
    _14258 = MAKE_SEQ(_1);
    // SubProg fetch_line pc: 61 op: PEEK (127)
    DeRefi(_memdata_25334);
    _1 = (object)SEQ_PTR(_14258);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25334 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14258);
    _14258 = NOVALUE;
    // SubProg fetch_line pc: 64 op: SEQUENCE_CHECK (97)
    // SubProg fetch_line pc: 66 op: STARTLINE (58)

    /** scanner.e:243		p += LINE_BUFLEN*/
    // SubProg fetch_line pc: 68 op: PLUS (11)
    _0 = _p_25337;
    if (IS_ATOM_INT(_p_25337)) {
        _p_25337 = _p_25337 + 400;
        if ((object)((uintptr_t)_p_25337 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25337 = NewDouble((eudouble)_p_25337);
        }
    }
    else {
        _p_25337 = NewDouble(DBL_PTR(_p_25337)->dbl + (eudouble)400);
    }
    DeRef(_0);
    // SubProg fetch_line pc: 72 op: STARTLINE (58)

    /** scanner.e:244		m = 0*/
    // SubProg fetch_line pc: 74 op: ASSIGN_I (113)
    _m_25339 = 0;
    // SubProg fetch_line pc: 77 op: STARTLINE (58)

    /** scanner.e:245		while TRUE do*/
    // SubProg fetch_line pc: 79 op: NOP2 (110)
    // SubProg fetch_line pc: 81 op: NOPWHILE (158)
L2: // addr: 82 pc: 81 sub: 25330 op: 158
    // SubProg fetch_line pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg fetch_line pc: 84 op: WHILE (47)
    if (_8TRUE_444 == 0)
    {
        goto L3; // [84] 179
    }
    else{
    }
    // SubProg fetch_line pc: 87 op: STARTLINE (58)

    /** scanner.e:246			m += 1*/
    // SubProg fetch_line pc: 89 op: PLUS1_I (117)
    _m_25339 = _m_25339 + 1;
    // SubProg fetch_line pc: 93 op: STARTLINE (58)

    /** scanner.e:247			if m > length(memdata) then*/
    // SubProg fetch_line pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_memdata_25334)){
            _14262 = SEQ_PTR(_memdata_25334)->length;
    }
    else {
        _14262 = 1;
    }
    // SubProg fetch_line pc: 98 op: GREATER_IFW_I (124)
    if (_m_25339 <= _14262)
    goto L4; // [98] 125
    // SubProg fetch_line pc: 102 op: STARTLINE (58)

    /** scanner.e:248				memdata = peek({p, LINE_BUFLEN})*/
    // SubProg fetch_line pc: 104 op: RIGHT_BRACE_2 (85)
    Ref(_p_25337);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25337;
    ((intptr_t *)_2)[2] = 400;
    _14264 = MAKE_SEQ(_1);
    // SubProg fetch_line pc: 108 op: PEEK (127)
    DeRefDSi(_memdata_25334);
    _1 = (object)SEQ_PTR(_14264);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25334 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14264);
    _14264 = NOVALUE;
    // SubProg fetch_line pc: 111 op: SEQUENCE_CHECK (97)
    // SubProg fetch_line pc: 113 op: STARTLINE (58)

    /** scanner.e:249				p += LINE_BUFLEN*/
    // SubProg fetch_line pc: 115 op: PLUS (11)
    _0 = _p_25337;
    if (IS_ATOM_INT(_p_25337)) {
        _p_25337 = _p_25337 + 400;
        if ((object)((uintptr_t)_p_25337 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25337 = NewDouble((eudouble)_p_25337);
        }
    }
    else {
        _p_25337 = NewDouble(DBL_PTR(_p_25337)->dbl + (eudouble)400);
    }
    DeRef(_0);
    // SubProg fetch_line pc: 119 op: STARTLINE (58)

    /** scanner.e:250				m = 1*/
    // SubProg fetch_line pc: 121 op: ASSIGN_I (113)
    _m_25339 = 1;
    // SubProg fetch_line pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 25330 op: 159
    // SubProg fetch_line pc: 125 op: STARTLINE (58)

    /** scanner.e:252			c = memdata[m]*/
    // SubProg fetch_line pc: 127 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_memdata_25334);
    _c_25335 = (object)*(((s1_ptr)_2)->base + _m_25339);
    // SubProg fetch_line pc: 131 op: STARTLINE (58)

    /** scanner.e:253			if c = 0 then*/
    // SubProg fetch_line pc: 133 op: EQUALS_IFW_I (121)
    if (_c_25335 != 0)
    goto L5; // [133] 142
    // SubProg fetch_line pc: 137 op: STARTLINE (58)

    /** scanner.e:254				exit*/
    // SubProg fetch_line pc: 139 op: EXIT (61)
    goto L3; // [139] 179
    // SubProg fetch_line pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 25330 op: 159
    // SubProg fetch_line pc: 142 op: STARTLINE (58)

    /** scanner.e:256			n += 1*/
    // SubProg fetch_line pc: 144 op: PLUS1_I (117)
    _n_25338 = _n_25338 + 1;
    // SubProg fetch_line pc: 148 op: STARTLINE (58)

    /** scanner.e:257			if n > length(line) then*/
    // SubProg fetch_line pc: 150 op: LENGTH (42)
    if (IS_SEQUENCE(_line_25333)){
            _14270 = SEQ_PTR(_line_25333)->length;
    }
    else {
        _14270 = 1;
    }
    // SubProg fetch_line pc: 153 op: GREATER_IFW_I (124)
    if (_n_25338 <= _14270)
    goto L6; // [153] 168
    // SubProg fetch_line pc: 157 op: STARTLINE (58)

    /** scanner.e:258				line &= repeat(0, LINE_BUFLEN)*/
    // SubProg fetch_line pc: 159 op: REPEAT (32)
    _14272 = Repeat(0, 400);
    // SubProg fetch_line pc: 163 op: CONCAT (15)
    Concat((object_ptr)&_line_25333, _line_25333, _14272);
    DeRefDS(_14272);
    _14272 = NOVALUE;
    // SubProg fetch_line pc: 167 op: NOP1 (159)
L6: // addr: 168 pc: 167 sub: 25330 op: 159
    // SubProg fetch_line pc: 168 op: STARTLINE (58)

    /** scanner.e:260			line[n] = c*/
    // SubProg fetch_line pc: 170 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_line_25333);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _line_25333 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _n_25338);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _c_25335;
    DeRef(_1);
    // SubProg fetch_line pc: 174 op: STARTLINE (58)

    /** scanner.e:261		end while*/
    // SubProg fetch_line pc: 176 op: ENDWHILE (22)
    goto L2; // [176] 82
    // SubProg fetch_line pc: 178 op: NOP1 (159)
L3: // addr: 179 pc: 178 sub: 25330 op: 159
    // SubProg fetch_line pc: 179 op: STARTLINE (58)

    /** scanner.e:262		line = remove( line, n+1, length( line ) )*/
    // SubProg fetch_line pc: 181 op: PLUS1 (93)
    _14274 = _n_25338 + 1;
    if (_14274 > MAXINT){
        _14274 = NewDouble((eudouble)_14274);
    }
    // SubProg fetch_line pc: 185 op: LENGTH (42)
    if (IS_SEQUENCE(_line_25333)){
            _14275 = SEQ_PTR(_line_25333)->length;
    }
    else {
        _14275 = 1;
    }
    // SubProg fetch_line pc: 188 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_line_25333);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14274)) ? _14274 : (object)(DBL_PTR(_14274)->dbl);
        int stop = (IS_ATOM_INT(_14275)) ? _14275 : (object)(DBL_PTR(_14275)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_line_25333), start, &_line_25333 );
            }
            else Tail(SEQ_PTR(_line_25333), stop+1, &_line_25333);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_line_25333), start, &_line_25333);
        }
        else {
            assign_slice_seq = &assign_space;
            _line_25333 = Remove_elements(start, stop, (SEQ_PTR(_line_25333)->ref == 1));
        }
    }
    DeRef(_14274);
    _14274 = NOVALUE;
    _14275 = NOVALUE;
    // SubProg fetch_line pc: 193 op: STARTLINE (58)

    /** scanner.e:263		return line*/
    // SubProg fetch_line pc: 195 op: RETURNF (28)

// Exiting block BLOCK: fetch_line

// block var start_25332

// block var memdata_25334
    DeRefi(_memdata_25334);

// block var c_25335

// block var chunk_25336

// block var p_25337
    DeRef(_p_25337);

// block var n_25338

// block var m_25339
    return _line_25333;
    // SubProg fetch_line pc: 199 op: BADRETURNF (43)
    ;
}


void _61AppendSourceLine()
{
    object _new_25375 = NOVALUE;
    object _old_25376 = NOVALUE;
    object _options_25377 = NOVALUE;
    object _src_25378 = NOVALUE;
// skipping _14317  name type: 0
    object _14316 = NOVALUE; // 25463 14316
// skipping _14315  name type: 0
// skipping _14314  name type: 0
// skipping _14313  name type: 0
    object _14312 = NOVALUE; // 25450 14312
// skipping _14311  name type: 0
    object _14310 = NOVALUE; // 25447 14310
    object _14309 = NOVALUE; // 25446 14309
// skipping _14308  name type: 0
// skipping _14307  name type: 0
    object _14306 = NOVALUE; // 25438 14306
    object _14305 = NOVALUE; // 25437 14305
    object _14304 = NOVALUE; // 25436 14304
    object _14303 = NOVALUE; // 25434 14303
    object _14302 = NOVALUE; // 25433 14302
    object _14301 = NOVALUE; // 25431 14301
    object _14300 = NOVALUE; // 25430 14300
    object _14299 = NOVALUE; // 25429 14299
    object _14298 = NOVALUE; // 25428 14298
    object _14297 = NOVALUE; // 25427 14297
    object _14296 = NOVALUE; // 25425 14296
    object _14295 = NOVALUE; // 25424 14295
    object _14294 = NOVALUE; // 25421 14294
    object _14293 = NOVALUE; // 25420 14293
    object _14292 = NOVALUE; // 25419 14292
    object _14291 = NOVALUE; // 25416 14291
    object _14290 = NOVALUE; // 25415 14290
    object _14289 = NOVALUE; // 25414 14289
// skipping _14288  name type: 0
    object _14287 = NOVALUE; // 25410 14287
    object _14286 = NOVALUE; // 25409 14286
    object _14285 = NOVALUE; // 25407 14285
// skipping _14284  name type: 0
    object _14283 = NOVALUE; // 25403 14283
// skipping _14282  name type: 0
// skipping _14281  name type: 0
// skipping _14280  name type: 0
// skipping _14279  name type: 0
    object _14278 = NOVALUE; // 25383 14278
    object _14277 = NOVALUE; // 25381 14277
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg AppendSourceLine pc: 1 op: STARTLINE (58)

    /** scanner.e:272		src = 0*/
    // SubProg AppendSourceLine pc: 3 op: ASSIGN (18)
    DeRef(_src_25378);
    _src_25378 = 0;
    // SubProg AppendSourceLine pc: 6 op: STARTLINE (58)

    /** scanner.e:273		options = 0*/
    // SubProg AppendSourceLine pc: 8 op: ASSIGN_I (113)
    _options_25377 = 0;
    // SubProg AppendSourceLine pc: 11 op: STARTLINE (58)

    /** scanner.e:275		if TRANSLATE or OpTrace or OpProfileStatement or OpProfileTime then*/
    // SubProg AppendSourceLine pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 15 op: SC1_OR (143)
    if (_34TRANSLATE_14813 != 0) {
        _14277 = 1;
        goto L1; // [15] 25
    }
    // SubProg AppendSourceLine pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 21 op: SC2_OR (144)
    _14277 = (_34OpTrace_15257 != 0);
    // SubProg AppendSourceLine pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 25 op: SC1_OR (143)
    if (_14277 != 0) {
        _14278 = 1;
        goto L2; // [25] 35
    }
    // SubProg AppendSourceLine pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 31 op: SC2_OR (144)
    _14278 = (_34OpProfileStatement_15259 != 0);
    // SubProg AppendSourceLine pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 35 op: SC1_OR_IF (147)
    if (_14278 != 0) {
        goto L3; // [35] 46
    }
    // SubProg AppendSourceLine pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 41 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 42 op: IF (20)
    if (_34OpProfileTime_15260 == 0)
    {
        goto L4; // [42] 136
    }
    else{
    }
    // SubProg AppendSourceLine pc: 45 op: NOP1 (159)
L3: // addr: 46 pc: 45 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 46 op: STARTLINE (58)

    /** scanner.e:277			src = ThisLine*/
    // SubProg AppendSourceLine pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 50 op: ASSIGN (18)
    Ref(_49ThisLine_48709);
    DeRef(_src_25378);
    _src_25378 = _49ThisLine_48709;
    // SubProg AppendSourceLine pc: 53 op: STARTLINE (58)

    /** scanner.e:279			if OpTrace then*/
    // SubProg AppendSourceLine pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 57 op: IF (20)
    if (_34OpTrace_15257 == 0)
    {
        goto L5; // [57] 70
    }
    else{
    }
    // SubProg AppendSourceLine pc: 60 op: STARTLINE (58)

    /** scanner.e:280				options = SOP_TRACE*/
    // SubProg AppendSourceLine pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 64 op: ASSIGN (18)
    _options_25377 = 1;
    // SubProg AppendSourceLine pc: 67 op: INTEGER_CHECK (96)
    // SubProg AppendSourceLine pc: 69 op: NOP1 (159)
L5: // addr: 70 pc: 69 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 70 op: STARTLINE (58)

    /** scanner.e:282			if OpProfileTime then*/
    // SubProg AppendSourceLine pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 74 op: IF (20)
    if (_34OpProfileTime_15260 == 0)
    {
        goto L6; // [74] 88
    }
    else{
    }
    // SubProg AppendSourceLine pc: 77 op: STARTLINE (58)

    /** scanner.e:283				options = or_bits(options, SOP_PROFILE_TIME)*/
    // SubProg AppendSourceLine pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 81 op: OR_BITS (24)
    {uintptr_t tu;
         tu = (uintptr_t)_options_25377 | (uintptr_t)2;
         _options_25377 = MAKE_UINT(tu);
    }
    // SubProg AppendSourceLine pc: 85 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_options_25377)) {
        _1 = (object)(DBL_PTR(_options_25377)->dbl);
        DeRefDS(_options_25377);
        _options_25377 = _1;
    }
    // SubProg AppendSourceLine pc: 87 op: NOP1 (159)
L6: // addr: 88 pc: 87 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 88 op: STARTLINE (58)

    /** scanner.e:285			if OpProfileStatement then*/
    // SubProg AppendSourceLine pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 92 op: IF (20)
    if (_34OpProfileStatement_15259 == 0)
    {
        goto L7; // [92] 106
    }
    else{
    }
    // SubProg AppendSourceLine pc: 95 op: STARTLINE (58)

    /** scanner.e:286				options = or_bits(options, SOP_PROFILE_STATEMENT)*/
    // SubProg AppendSourceLine pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 99 op: OR_BITS (24)
    {uintptr_t tu;
         tu = (uintptr_t)_options_25377 | (uintptr_t)4;
         _options_25377 = MAKE_UINT(tu);
    }
    // SubProg AppendSourceLine pc: 103 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_options_25377)) {
        _1 = (object)(DBL_PTR(_options_25377)->dbl);
        DeRefDS(_options_25377);
        _options_25377 = _1;
    }
    // SubProg AppendSourceLine pc: 105 op: NOP1 (159)
L7: // addr: 106 pc: 105 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 106 op: STARTLINE (58)

    /** scanner.e:288			if OpProfileStatement or OpProfileTime then*/
    // SubProg AppendSourceLine pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 110 op: SC1_OR_IF (147)
    if (_34OpProfileStatement_15259 != 0) {
        goto L8; // [110] 121
    }
    // SubProg AppendSourceLine pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 116 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 117 op: IF (20)
    if (_34OpProfileTime_15260 == 0)
    {
        goto L9; // [117] 135
    }
    else{
    }
    // SubProg AppendSourceLine pc: 120 op: NOP1 (159)
L8: // addr: 121 pc: 120 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 121 op: STARTLINE (58)

    /** scanner.e:289				src = {0,0,0,0} & src*/
    // SubProg AppendSourceLine pc: 123 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    _14283 = MAKE_SEQ(_1);
    // SubProg AppendSourceLine pc: 130 op: CONCAT (15)
    if (IS_SEQUENCE(_14283) && IS_ATOM(_src_25378)) {
        Ref(_src_25378);
        Append(&_src_25378, _14283, _src_25378);
    }
    else if (IS_ATOM(_14283) && IS_SEQUENCE(_src_25378)) {
    }
    else {
        Concat((object_ptr)&_src_25378, _14283, _src_25378);
        DeRefDS(_14283);
        _14283 = NOVALUE;
    }
    DeRef(_14283);
    _14283 = NOVALUE;
    // SubProg AppendSourceLine pc: 134 op: NOP1 (159)
L9: // addr: 135 pc: 134 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 135 op: NOP1 (159)
L4: // addr: 136 pc: 135 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 136 op: STARTLINE (58)

    /** scanner.e:293		if length(slist) then*/
    // SubProg AppendSourceLine pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _14285 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _14285 = 1;
    }
    // SubProg AppendSourceLine pc: 143 op: IF (20)
    if (_14285 == 0)
    {
        _14285 = NOVALUE;
        goto LA; // [143] 345
    }
    else{
        _14285 = NOVALUE;
    }
    // SubProg AppendSourceLine pc: 146 op: STARTLINE (58)

    /** scanner.e:294			old = slist[$-1]*/
    // SubProg AppendSourceLine pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 150 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _14286 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _14286 = 1;
    }
    // SubProg AppendSourceLine pc: 153 op: MINUS (10)
    _14287 = _14286 - 1;
    _14286 = NOVALUE;
    // SubProg AppendSourceLine pc: 157 op: RHS_SUBS_CHECK (92)
    DeRef(_old_25376);
    _2 = (object)SEQ_PTR(_34slist_15278);
    _old_25376 = (object)*(((s1_ptr)_2)->base + _14287);
    Ref(_old_25376);
    // SubProg AppendSourceLine pc: 161 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 163 op: STARTLINE (58)

    /** scanner.e:296			if equal(src, old[SRC]) and*/
    // SubProg AppendSourceLine pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25376);
    _14289 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg AppendSourceLine pc: 171 op: EQUAL (153)
    if (_src_25378 == _14289)
    _14290 = 1;
    else if (IS_ATOM_INT(_src_25378) && IS_ATOM_INT(_14289))
    _14290 = 0;
    else
    _14290 = (compare(_src_25378, _14289) == 0);
    _14289 = NOVALUE;
    // SubProg AppendSourceLine pc: 175 op: SC1_AND (141)
    if (_14290 == 0) {
        _14291 = 0;
        goto LB; // [175] 195
    }
    // SubProg AppendSourceLine pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 183 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25376);
    _14292 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg AppendSourceLine pc: 187 op: EQUALS (3)
    if (IS_ATOM_INT(_14292)) {
        _14293 = (_34current_file_no_15188 == _14292);
    }
    else {
        _14293 = binary_op(EQUALS, _34current_file_no_15188, _14292);
    }
    _14292 = NOVALUE;
    // SubProg AppendSourceLine pc: 191 op: SC2_AND (142)
    if (IS_ATOM_INT(_14293))
    _14291 = (_14293 != 0);
    else
    _14291 = DBL_PTR(_14293)->dbl != 0.0;
    // SubProg AppendSourceLine pc: 194 op: NOP1 (159)
LB: // addr: 195 pc: 194 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 195 op: SC1_AND (141)
    if (_14291 == 0) {
        _14294 = 0;
        goto LC; // [195] 232
    }
    // SubProg AppendSourceLine pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 203 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25376);
    _14295 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg AppendSourceLine pc: 207 op: PLUS1 (93)
    if (IS_ATOM_INT(_14295)) {
        _14296 = _14295 + 1;
        if (_14296 > MAXINT){
            _14296 = NewDouble((eudouble)_14296);
        }
    }
    else
    _14296 = binary_op(PLUS, 1, _14295);
    _14295 = NOVALUE;
    // SubProg AppendSourceLine pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 213 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _14297 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _14297 = 1;
    }
    // SubProg AppendSourceLine pc: 216 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34slist_15278);
    _14298 = (object)*(((s1_ptr)_2)->base + _14297);
    // SubProg AppendSourceLine pc: 220 op: PLUS (11)
    if (IS_ATOM_INT(_14296) && IS_ATOM_INT(_14298)) {
        _14299 = _14296 + _14298;
        if ((object)((uintptr_t)_14299 + (uintptr_t)HIGH_BITS) >= 0){
            _14299 = NewDouble((eudouble)_14299);
        }
    }
    else {
        _14299 = binary_op(PLUS, _14296, _14298);
    }
    DeRef(_14296);
    _14296 = NOVALUE;
    _14298 = NOVALUE;
    // SubProg AppendSourceLine pc: 224 op: EQUALS (3)
    if (IS_ATOM_INT(_14299)) {
        _14300 = (_34line_number_15189 == _14299);
    }
    else {
        _14300 = binary_op(EQUALS, _34line_number_15189, _14299);
    }
    DeRef(_14299);
    _14299 = NOVALUE;
    // SubProg AppendSourceLine pc: 228 op: SC2_AND (142)
    if (IS_ATOM_INT(_14300))
    _14294 = (_14300 != 0);
    else
    _14294 = DBL_PTR(_14300)->dbl != 0.0;
    // SubProg AppendSourceLine pc: 231 op: NOP1 (159)
LC: // addr: 232 pc: 231 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 232 op: SC1_AND_IF (146)
    if (_14294 == 0) {
        goto LD; // [232] 272
    }
    // SubProg AppendSourceLine pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 238 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25376);
    _14302 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg AppendSourceLine pc: 242 op: EQUALS (3)
    if (IS_ATOM_INT(_14302)) {
        _14303 = (_options_25377 == _14302);
    }
    else {
        _14303 = binary_op(EQUALS, _options_25377, _14302);
    }
    _14302 = NOVALUE;
    // SubProg AppendSourceLine pc: 246 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 247 op: IF (20)
    if (_14303 == 0) {
        DeRef(_14303);
        _14303 = NOVALUE;
        goto LD; // [247] 272
    }
    else {
        if (!IS_ATOM_INT(_14303) && DBL_PTR(_14303)->dbl == 0.0){
            DeRef(_14303);
            _14303 = NOVALUE;
            goto LD; // [247] 272
        }
        DeRef(_14303);
        _14303 = NOVALUE;
    }
    DeRef(_14303);
    _14303 = NOVALUE;
    // SubProg AppendSourceLine pc: 250 op: STARTLINE (58)

    /** scanner.e:302				slist[$] += 1*/
    // SubProg AppendSourceLine pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 254 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _14304 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _14304 = 1;
    }
    // SubProg AppendSourceLine pc: 257 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_34slist_15278);
    _14305 = (object)*(((s1_ptr)_2)->base + _14304);
    // SubProg AppendSourceLine pc: 261 op: PLUS1 (93)
    if (IS_ATOM_INT(_14305)) {
        _14306 = _14305 + 1;
        if (_14306 > MAXINT){
            _14306 = NewDouble((eudouble)_14306);
        }
    }
    else
    _14306 = binary_op(PLUS, 1, _14305);
    _14305 = NOVALUE;
    // SubProg AppendSourceLine pc: 265 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_34slist_15278);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34slist_15278 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14304);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14306;
    if( _1 != _14306 ){
        DeRef(_1);
    }
    _14306 = NOVALUE;
    // SubProg AppendSourceLine pc: 269 op: ELSE (23)
    goto LE; // [269] 371
    // SubProg AppendSourceLine pc: 271 op: NOP1 (159)
LD: // addr: 272 pc: 271 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 272 op: STARTLINE (58)

    /** scanner.e:304				src = pack_source(src)*/
    // SubProg AppendSourceLine pc: 274 op: PROC (27)
    Ref(_src_25378);
    _0 = _src_25378;
    _src_25378 = _61pack_source(_src_25378);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 278 op: STARTLINE (58)

    /** scanner.e:305				new = {src, line_number, current_file_no, options}*/
    // SubProg AppendSourceLine pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 284 op: RIGHT_BRACE_N (31)
    _0 = _new_25375;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25378);
    ((intptr_t*)_2)[1] = _src_25378;
    ((intptr_t*)_2)[2] = _34line_number_15189;
    ((intptr_t*)_2)[3] = _34current_file_no_15188;
    ((intptr_t*)_2)[4] = _options_25377;
    _new_25375 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 291 op: STARTLINE (58)

    /** scanner.e:306				if slist[$] = 0 then*/
    // SubProg AppendSourceLine pc: 293 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 295 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _14309 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _14309 = 1;
    }
    // SubProg AppendSourceLine pc: 298 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34slist_15278);
    _14310 = (object)*(((s1_ptr)_2)->base + _14309);
    // SubProg AppendSourceLine pc: 302 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _14310, 0)){
        _14310 = NOVALUE;
        goto LF; // [302] 320
    }
    _14310 = NOVALUE;
    // SubProg AppendSourceLine pc: 306 op: STARTLINE (58)

    /** scanner.e:307					slist[$] = new*/
    // SubProg AppendSourceLine pc: 308 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 310 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _14312 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _14312 = 1;
    }
    // SubProg AppendSourceLine pc: 313 op: ASSIGN_SUBS (16)
    RefDS(_new_25375);
    _2 = (object)SEQ_PTR(_34slist_15278);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34slist_15278 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14312);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_25375;
    DeRef(_1);
    // SubProg AppendSourceLine pc: 317 op: ELSE (23)
    goto L10; // [317] 331
    // SubProg AppendSourceLine pc: 319 op: NOP1 (159)
LF: // addr: 320 pc: 319 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 320 op: STARTLINE (58)

    /** scanner.e:309					slist = append(slist, new)*/
    // SubProg AppendSourceLine pc: 322 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 324 op: APPEND (35)
    RefDS(_new_25375);
    Append(&_34slist_15278, _34slist_15278, _new_25375);
    // SubProg AppendSourceLine pc: 328 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 330 op: NOP1 (159)
L10: // addr: 331 pc: 330 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 331 op: STARTLINE (58)

    /** scanner.e:311				slist = append(slist, 0)*/
    // SubProg AppendSourceLine pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 335 op: APPEND (35)
    Append(&_34slist_15278, _34slist_15278, 0);
    // SubProg AppendSourceLine pc: 339 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 341 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 342 op: ELSE (23)
    goto LE; // [342] 371
    // SubProg AppendSourceLine pc: 344 op: NOP1 (159)
LA: // addr: 345 pc: 344 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 345 op: STARTLINE (58)

    /** scanner.e:314			src = pack_source(src)*/
    // SubProg AppendSourceLine pc: 347 op: PROC (27)
    Ref(_src_25378);
    _0 = _src_25378;
    _src_25378 = _61pack_source(_src_25378);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 351 op: STARTLINE (58)

    /** scanner.e:315			slist = {{src, line_number, current_file_no, options}, 0}*/
    // SubProg AppendSourceLine pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 355 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 357 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25378);
    ((intptr_t*)_2)[1] = _src_25378;
    ((intptr_t*)_2)[2] = _34line_number_15189;
    ((intptr_t*)_2)[3] = _34current_file_no_15188;
    ((intptr_t*)_2)[4] = _options_25377;
    _14316 = MAKE_SEQ(_1);
    // SubProg AppendSourceLine pc: 364 op: RIGHT_BRACE_2 (85)
    DeRef(_34slist_15278);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14316;
    ((intptr_t *)_2)[2] = 0;
    _34slist_15278 = MAKE_SEQ(_1);
    _14316 = NOVALUE;
    // SubProg AppendSourceLine pc: 368 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 370 op: NOP1 (159)
LE: // addr: 371 pc: 370 sub: 25373 op: 159
    // SubProg AppendSourceLine pc: 371 op: STARTLINE (58)

    /** scanner.e:317	end procedure*/
    // SubProg AppendSourceLine pc: 373 op: RETURNP (29)

// Exiting block BLOCK: AppendSourceLine

// block var new_25375
    DeRef(_new_25375);

// block var old_25376
    DeRef(_old_25376);

// block var options_25377

// block var src_25378
    DeRef(_src_25378);
    DeRef(_14300);
    _14300 = NOVALUE;
    DeRef(_14293);
    _14293 = NOVALUE;
    DeRef(_14287);
    _14287 = NOVALUE;
    return;
    // SubProg AppendSourceLine pc: 376 op: BADRETURNF (43)
    ;
}


object _61s_expand(object _slist_25467)
{
    object _new_slist_25468 = NOVALUE;
// skipping _14331  name type: 0
    object _14330 = NOVALUE; // 25488 14330
    object _14329 = NOVALUE; // 25487 14329
    object _14328 = NOVALUE; // 25486 14328
    object _14327 = NOVALUE; // 25485 14327
// skipping _14326  name type: 0
    object _14325 = NOVALUE; // 25482 14325
    object _14324 = NOVALUE; // 25481 14324
    object _14323 = NOVALUE; // 25480 14323
// skipping _14322  name type: 0
    object _14321 = NOVALUE; // 25475 14321
    object _14320 = NOVALUE; // 25474 14320
    object _14319 = NOVALUE; // 25473 14319
    object _14318 = NOVALUE; // 25471 14318
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg s_expand pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg s_expand pc: 3 op: STARTLINE (58)

    /** scanner.e:323		new_slist = {}*/
    // SubProg s_expand pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_new_slist_25468);
    _new_slist_25468 = _5;
    // SubProg s_expand pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg s_expand pc: 10 op: STARTLINE (58)

    /** scanner.e:325		for i = 1 to length(slist) do*/
    // SubProg s_expand pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_slist_25467)){
            _14318 = SEQ_PTR(_slist_25467)->length;
    }
    else {
        _14318 = 1;
    }
    // SubProg s_expand pc: 15 op: FOR_I (125)
    {
        object _i_25470;
        _i_25470 = 1;
L1: // addr: 22 pc: 15 sub: 25465 op: 125
        if (_i_25470 > _14318){
            goto L2; // [15] 114
        }
        // SubProg s_expand pc: 22 op: STARTLINE (58)

        /** scanner.e:326			if sequence(slist[i]) then*/
        // SubProg s_expand pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25467);
        _14319 = (object)*(((s1_ptr)_2)->base + _i_25470);
        // SubProg s_expand pc: 28 op: IS_A_SEQUENCE (68)
        _14320 = IS_SEQUENCE(_14319);
        _14319 = NOVALUE;
        // SubProg s_expand pc: 31 op: IF (20)
        if (_14320 == 0)
        {
            _14320 = NOVALUE;
            goto L3; // [31] 47
        }
        else{
            _14320 = NOVALUE;
        }
        // SubProg s_expand pc: 34 op: STARTLINE (58)

        /** scanner.e:327				new_slist = append(new_slist, slist[i])*/
        // SubProg s_expand pc: 36 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25467);
        _14321 = (object)*(((s1_ptr)_2)->base + _i_25470);
        // SubProg s_expand pc: 40 op: APPEND (35)
        Ref(_14321);
        Append(&_new_slist_25468, _new_slist_25468, _14321);
        _14321 = NOVALUE;
        // SubProg s_expand pc: 44 op: ELSE (23)
        goto L4; // [44] 107
        // SubProg s_expand pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 25465 op: 159
        // SubProg s_expand pc: 47 op: STARTLINE (58)

        /** scanner.e:329				for j = 1 to slist[i] do*/
        // SubProg s_expand pc: 49 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25467);
        _14323 = (object)*(((s1_ptr)_2)->base + _i_25470);
        // SubProg s_expand pc: 53 op: FOR (21)
        {
            object _j_25479;
            _j_25479 = 1;
L5: // addr: 60 pc: 53 sub: 25465 op: 21
            if (binary_op_a(GREATER, _j_25479, _14323)){
                goto L6; // [53] 106
            }
            // SubProg s_expand pc: 60 op: STARTLINE (58)

            /** scanner.e:330					slist[i-1][LINE] += 1*/
            // SubProg s_expand pc: 62 op: MINUS (10)
            _14324 = _i_25470 - 1;
            // SubProg s_expand pc: 66 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_slist_25467);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _slist_25467 = MAKE_SEQ(_2);
            }
            _3 = (object)(_14324 + ((s1_ptr)_2)->base);
            // SubProg s_expand pc: 71 op: GLOBAL_INIT_CHECK (109)
            // SubProg s_expand pc: 73 op: PASSIGN_OP_SUBS (164)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            _14327 = (object)*(((s1_ptr)_2)->base + 2);
            _14325 = NOVALUE;
            // SubProg s_expand pc: 77 op: PLUS1 (93)
            if (IS_ATOM_INT(_14327)) {
                _14328 = _14327 + 1;
                if (_14328 > MAXINT){
                    _14328 = NewDouble((eudouble)_14328);
                }
            }
            else
            _14328 = binary_op(PLUS, 1, _14327);
            _14327 = NOVALUE;
            // SubProg s_expand pc: 81 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 2);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _14328;
            if( _1 != _14328 ){
                DeRef(_1);
            }
            _14328 = NOVALUE;
            _14325 = NOVALUE;
            // SubProg s_expand pc: 85 op: STARTLINE (58)

            /** scanner.e:331					new_slist = append(new_slist, slist[i-1])*/
            // SubProg s_expand pc: 87 op: MINUS (10)
            _14329 = _i_25470 - 1;
            // SubProg s_expand pc: 91 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_slist_25467);
            _14330 = (object)*(((s1_ptr)_2)->base + _14329);
            // SubProg s_expand pc: 95 op: APPEND (35)
            Ref(_14330);
            Append(&_new_slist_25468, _new_slist_25468, _14330);
            _14330 = NOVALUE;
            // SubProg s_expand pc: 99 op: STARTLINE (58)

            /** scanner.e:332				end for*/
            // SubProg s_expand pc: 101 op: ENDFOR_INT_UP1 (54)
            _0 = _j_25479;
            if (IS_ATOM_INT(_j_25479)) {
                _j_25479 = _j_25479 + 1;
                if ((object)((uintptr_t)_j_25479 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_25479 = NewDouble((eudouble)_j_25479);
                }
            }
            else {
                _j_25479 = binary_op_a(PLUS, _j_25479, 1);
            }
            DeRef(_0);
            goto L5; // [101] 60
L6: // addr: 106 pc: 101 sub: 25465 op: 54
            ;
            DeRef(_j_25479);
        }
        // SubProg s_expand pc: 106 op: NOP1 (159)
L4: // addr: 107 pc: 106 sub: 25465 op: 159
        // SubProg s_expand pc: 107 op: STARTLINE (58)

        /** scanner.e:334		end for*/
        // SubProg s_expand pc: 109 op: ENDFOR_INT_UP1 (54)
        _i_25470 = _i_25470 + 1;
        goto L1; // [109] 22
L2: // addr: 114 pc: 109 sub: 25465 op: 54
        ;
    }
    // SubProg s_expand pc: 114 op: STARTLINE (58)

    /** scanner.e:335		return new_slist*/
    // SubProg s_expand pc: 116 op: RETURNF (28)

// Exiting block BLOCK: s_expand

// block var slist_25467
    DeRefDS(_slist_25467);
    DeRef(_14329);
    _14329 = NOVALUE;
    _14323 = NOVALUE;
    DeRef(_14324);
    _14324 = NOVALUE;
    return _new_slist_25468;
    // SubProg s_expand pc: 120 op: BADRETURNF (43)
    ;
}


void _61set_dont_read(object _read_25494)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_dont_read pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_dont_read pc: 3 op: STARTLINE (58)

    /** scanner.e:357		dont_read = read*/
    // SubProg set_dont_read pc: 5 op: ASSIGN_I (113)
    _61dont_read_25491 = _read_25494;
    // SubProg set_dont_read pc: 8 op: STARTLINE (58)

    /** scanner.e:358	end procedure*/
    // SubProg set_dont_read pc: 10 op: RETURNP (29)

// Exiting block BLOCK: set_dont_read

// block var read_25494
    return;
    // SubProg set_dont_read pc: 13 op: BADRETURNF (43)
    ;
}


void _61read_line()
{
    object _n_25500 = NOVALUE;
    object _14361 = NOVALUE; // 25569 14361
    object _14360 = NOVALUE; // 25567 14360
    object _14359 = NOVALUE; // 25566 14359
    object _14358 = NOVALUE; // 25563 14358
    object _14357 = NOVALUE; // 25562 14357
// skipping _14356  name type: 0
    object _14355 = NOVALUE; // 25556 14355
    object _14354 = NOVALUE; // 25553 14354
// skipping _14353  name type: 0
    object _14352 = NOVALUE; // 25550 14352
    object _14351 = NOVALUE; // 25546 14351
    object _14349 = NOVALUE; // 25542 14349
    object _14348 = NOVALUE; // 25541 14348
// skipping _14347  name type: 0
// skipping _14346  name type: 0
// skipping _14345  name type: 0
// skipping _14344  name type: 0
// skipping _14341  name type: 0
    object _14340 = NOVALUE; // 25522 14340
// skipping _14339  name type: 0
    object _14338 = NOVALUE; // 25517 14338
    object _14337 = NOVALUE; // 25514 14337
    object _14336 = NOVALUE; // 25512 14336
    object _14335 = NOVALUE; // 25509 14335
// skipping _14334  name type: 0
// skipping _14333  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_line pc: 1 op: STARTLINE (58)

    /** scanner.e:367		line_number += 1*/
    // SubProg read_line pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 5 op: PLUS (11)
    _34line_number_15189 = _34line_number_15189 + 1;
    // SubProg read_line pc: 11 op: STARTLINE (58)

    /** scanner.e:368		gline_number += 1*/
    // SubProg read_line pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 15 op: PLUS (11)
    _34gline_number_15193 = _34gline_number_15193 + 1;
    // SubProg read_line pc: 21 op: STARTLINE (58)

    /** scanner.e:370		if dont_read then*/
    // SubProg read_line pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 25 op: IF (20)
    if (_61dont_read_25491 == 0)
    {
        goto L1; // [25] 36
    }
    else{
    }
    // SubProg read_line pc: 28 op: STARTLINE (58)

    /** scanner.e:371			ThisLine = -1*/
    // SubProg read_line pc: 30 op: ASSIGN (18)
    DeRef(_49ThisLine_48709);
    _49ThisLine_48709 = -1;
    // SubProg read_line pc: 33 op: ELSE (23)
    goto L2; // [33] 216
    // SubProg read_line pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 25498 op: 159
    // SubProg read_line pc: 36 op: STARTLINE (58)

    /** scanner.e:372		elsif repl and src_file = repl_file then*/
    // SubProg read_line pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 40 op: SC1_AND_IF (146)
    if (0 == 0) {
        goto L3; // [40] 144
    }
    // SubProg read_line pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 48 op: EQUALS (3)
    _14336 = (_34src_file_15309 == 5555);
    // SubProg read_line pc: 52 op: NOP1 (159)
    // SubProg read_line pc: 53 op: IF (20)
    if (_14336 == 0)
    {
        DeRef(_14336);
        _14336 = NOVALUE;
        goto L3; // [53] 144
    }
    else{
        DeRef(_14336);
        _14336 = NOVALUE;
    }
    // SubProg read_line pc: 56 op: STARTLINE (58)

    /** scanner.e:373			if repl_line_was_read and current_block = top_level_block then*/
    // SubProg read_line pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 60 op: SC1_AND_IF (146)
    if (_61repl_line_was_read_25495 == 0) {
        goto L4; // [60] 118
    }
    // SubProg read_line pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 68 op: EQUALS (3)
    _14338 = (_64current_block_24751 == -1);
    // SubProg read_line pc: 72 op: NOP1 (159)
    // SubProg read_line pc: 73 op: IF (20)
    if (_14338 == 0)
    {
        DeRef(_14338);
        _14338 = NOVALUE;
        goto L4; // [73] 118
    }
    else{
        DeRef(_14338);
        _14338 = NOVALUE;
    }
    // SubProg read_line pc: 76 op: STARTLINE (58)

    /** scanner.e:374				if repl_line_was_read > 1 then*/
    // SubProg read_line pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 80 op: GREATER_IFW_I (124)
    if (_61repl_line_was_read_25495 <= 1)
    goto L5; // [80] 110
    // SubProg read_line pc: 84 op: STARTLINE (58)

    /** scanner.e:375					if not match("end", ThisLine) then*/
    // SubProg read_line pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 88 op: MATCH_FROM (177)
    _14340 = e_match_from(_13113, _49ThisLine_48709, 1);
    // SubProg read_line pc: 93 op: NOT_IFW (108)
    if (_14340 != 0)
    goto L6; // [93] 109
    _14340 = NOVALUE;
    // SubProg read_line pc: 96 op: STARTLINE (58)

    /** scanner.e:376						goto "lol"*/
    // SubProg read_line pc: 98 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 100 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 104 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 106 op: GOTO (188)
    goto G7;
    // SubProg read_line pc: 108 op: NOP1 (159)
L6: // addr: 109 pc: 108 sub: 25498 op: 159
    // SubProg read_line pc: 109 op: NOP1 (159)
L5: // addr: 110 pc: 109 sub: 25498 op: 159
    // SubProg read_line pc: 110 op: STARTLINE (58)

    /** scanner.e:379				ThisLine = -1*/
    // SubProg read_line pc: 112 op: ASSIGN (18)
    DeRef(_49ThisLine_48709);
    _49ThisLine_48709 = -1;
    // SubProg read_line pc: 115 op: ELSE (23)
    goto L2; // [115] 216
    // SubProg read_line pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 25498 op: 159
    // SubProg read_line pc: 118 op: STARTLINE (58)

    /** scanner.e:381				label "lol"*/
    // SubProg read_line pc: 120 op: GLABEL (189)
G7:
    // SubProg read_line pc: 122 op: STARTLINE (58)

    /** scanner.e:382				puts(1, "Enter line:\n")*/
    // SubProg read_line pc: 124 op: PUTS (44)
    EPuts(1, _14343); // DJP 
    // SubProg read_line pc: 127 op: STARTLINE (58)

    /** scanner.e:383				repl_line_was_read += 1*/
    // SubProg read_line pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 131 op: PLUS1_I (117)
    _61repl_line_was_read_25495 = _61repl_line_was_read_25495 + 1;
    // SubProg read_line pc: 135 op: STARTLINE (58)

    /** scanner.e:384				ThisLine = gets(0)*/
    // SubProg read_line pc: 137 op: GETS (17)
    DeRef(_49ThisLine_48709);
    _49ThisLine_48709 = EGets(0);
    // SubProg read_line pc: 140 op: NOP1 (159)
    // SubProg read_line pc: 141 op: ELSE (23)
    goto L2; // [141] 216
    // SubProg read_line pc: 143 op: NOP1 (159)
L3: // addr: 144 pc: 143 sub: 25498 op: 159
    // SubProg read_line pc: 144 op: STARTLINE (58)

    /** scanner.e:386		elsif src_file < 0 then*/
    // SubProg read_line pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 148 op: LESS_IFW (102)
    if (_34src_file_15309 >= 0)
    goto L8; // [148] 160
    // SubProg read_line pc: 152 op: STARTLINE (58)

    /** scanner.e:387			ThisLine = -1*/
    // SubProg read_line pc: 154 op: ASSIGN (18)
    DeRef(_49ThisLine_48709);
    _49ThisLine_48709 = -1;
    // SubProg read_line pc: 157 op: ELSE (23)
    goto L2; // [157] 216
    // SubProg read_line pc: 159 op: NOP1 (159)
L8: // addr: 160 pc: 159 sub: 25498 op: 159
    // SubProg read_line pc: 160 op: STARTLINE (58)

    /** scanner.e:389			ThisLine = gets(src_file)*/
    // SubProg read_line pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 164 op: GETS (17)
    DeRef(_49ThisLine_48709);
    _49ThisLine_48709 = EGets(_34src_file_15309);
    // SubProg read_line pc: 167 op: STARTLINE (58)

    /** scanner.e:390			if sequence(ThisLine) and ends( {13,10}, ThisLine ) then*/
    // SubProg read_line pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 171 op: IS_A_SEQUENCE (68)
    _14348 = IS_SEQUENCE(_49ThisLine_48709);
    // SubProg read_line pc: 174 op: SC1_AND_IF (146)
    if (_14348 == 0) {
        goto L9; // [174] 215
    }
    // SubProg read_line pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 180 op: PROC (27)
    RefDS(_14350);
    Ref(_49ThisLine_48709);
    _14351 = _17ends(_14350, _49ThisLine_48709);
    // SubProg read_line pc: 185 op: NOP1 (159)
    // SubProg read_line pc: 186 op: IF (20)
    if (_14351 == 0) {
        DeRef(_14351);
        _14351 = NOVALUE;
        goto L9; // [186] 215
    }
    else {
        if (!IS_ATOM_INT(_14351) && DBL_PTR(_14351)->dbl == 0.0){
            DeRef(_14351);
            _14351 = NOVALUE;
            goto L9; // [186] 215
        }
        DeRef(_14351);
        _14351 = NOVALUE;
    }
    DeRef(_14351);
    _14351 = NOVALUE;
    // SubProg read_line pc: 189 op: STARTLINE (58)

    /** scanner.e:391				ThisLine = remove(ThisLine, length(ThisLine))*/
    // SubProg read_line pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 195 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48709)){
            _14352 = SEQ_PTR(_49ThisLine_48709)->length;
    }
    else {
        _14352 = 1;
    }
    // SubProg read_line pc: 198 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_49ThisLine_48709);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14352)) ? _14352 : (object)(DBL_PTR(_14352)->dbl);
        int stop = (IS_ATOM_INT(_14352)) ? _14352 : (object)(DBL_PTR(_14352)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49ThisLine_48709), start, &_49ThisLine_48709 );
            }
            else Tail(SEQ_PTR(_49ThisLine_48709), stop+1, &_49ThisLine_48709);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49ThisLine_48709), start, &_49ThisLine_48709);
        }
        else {
            assign_slice_seq = &assign_space;
            _49ThisLine_48709 = Remove_elements(start, stop, (SEQ_PTR(_49ThisLine_48709)->ref == 1));
        }
    }
    _14352 = NOVALUE;
    _14352 = NOVALUE;
    // SubProg read_line pc: 203 op: STARTLINE (58)

    /** scanner.e:392				ThisLine[$] = 10*/
    // SubProg read_line pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 207 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48709)){
            _14354 = SEQ_PTR(_49ThisLine_48709)->length;
    }
    else {
        _14354 = 1;
    }
    // SubProg read_line pc: 210 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_49ThisLine_48709);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _49ThisLine_48709 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14354);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
    // SubProg read_line pc: 214 op: NOP1 (159)
L9: // addr: 215 pc: 214 sub: 25498 op: 159
    // SubProg read_line pc: 215 op: NOP1 (159)
L2: // addr: 216 pc: 215 sub: 25498 op: 159
    // SubProg read_line pc: 216 op: STARTLINE (58)

    /** scanner.e:395		if atom(ThisLine) then*/
    // SubProg read_line pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 220 op: IS_AN_ATOM (67)
    _14355 = IS_ATOM(_49ThisLine_48709);
    // SubProg read_line pc: 223 op: IF (20)
    if (_14355 == 0)
    {
        _14355 = NOVALUE;
        goto LA; // [223] 286
    }
    else{
        _14355 = NOVALUE;
    }
    // SubProg read_line pc: 226 op: STARTLINE (58)

    /** scanner.e:396			ThisLine = {END_OF_FILE_CHAR}*/
    // SubProg read_line pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 230 op: RIGHT_BRACE_N (31)
    _0 = _49ThisLine_48709;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 26;
    _49ThisLine_48709 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg read_line pc: 234 op: STARTLINE (58)

    /** scanner.e:397			if src_file >= 0 and (src_file != repl_file or not repl) then*/
    // SubProg read_line pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 238 op: GREATEREQ (2)
    _14357 = (_34src_file_15309 >= 0);
    // SubProg read_line pc: 242 op: SC1_AND_IF (146)
    if (_14357 == 0) {
        goto LB; // [242] 278
    }
    // SubProg read_line pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 250 op: NOTEQ (4)
    _14359 = (_34src_file_15309 != 5555);
    // SubProg read_line pc: 254 op: SC1_OR (143)
    if (_14359 != 0) {
        DeRef(_14360);
        _14360 = 1;
        goto LC; // [254] 267
    }
    // SubProg read_line pc: 258 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 260 op: NOT (7)
    _14361 = (0 == 0);
    // SubProg read_line pc: 263 op: SC2_OR (144)
    _14360 = (_14361 != 0);
    // SubProg read_line pc: 266 op: NOP1 (159)
LC: // addr: 267 pc: 266 sub: 25498 op: 159
    // SubProg read_line pc: 267 op: NOP1 (159)
    // SubProg read_line pc: 268 op: IF (20)
    if (_14360 == 0)
    {
        _14360 = NOVALUE;
        goto LB; // [268] 278
    }
    else{
        _14360 = NOVALUE;
    }
    // SubProg read_line pc: 271 op: STARTLINE (58)

    /** scanner.e:398				close(src_file)*/
    // SubProg read_line pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 275 op: CLOSE (86)
    EClose(_34src_file_15309);
    // SubProg read_line pc: 277 op: NOP1 (159)
LB: // addr: 278 pc: 277 sub: 25498 op: 159
    // SubProg read_line pc: 278 op: STARTLINE (58)

    /** scanner.e:400			src_file = -1*/
    // SubProg read_line pc: 280 op: ASSIGN (18)
    _34src_file_15309 = -1;
    // SubProg read_line pc: 283 op: INTEGER_CHECK (96)
    // SubProg read_line pc: 285 op: NOP1 (159)
LA: // addr: 286 pc: 285 sub: 25498 op: 159
    // SubProg read_line pc: 286 op: STARTLINE (58)

    /** scanner.e:403		bp = 1*/
    // SubProg read_line pc: 288 op: ASSIGN (18)
    _49bp_48713 = 1;
    // SubProg read_line pc: 291 op: INTEGER_CHECK (96)
    // SubProg read_line pc: 293 op: STARTLINE (58)

    /** scanner.e:411		AppendSourceLine()*/
    // SubProg read_line pc: 295 op: PROC (27)
    _61AppendSourceLine();
    // SubProg read_line pc: 297 op: STARTLINE (58)

    /** scanner.e:412	end procedure*/
    // SubProg read_line pc: 299 op: RETURNP (29)

// Exiting block BLOCK: read_line
    DeRef(_14361);
    _14361 = NOVALUE;
    DeRef(_14359);
    _14359 = NOVALUE;
    DeRef(_14357);
    _14357 = NOVALUE;
    return;
    // SubProg read_line pc: 302 op: BADRETURNF (43)
    ;
}


object _61getch()
{
    object _c_25575 = NOVALUE;
// skipping _14363  name type: 0
// skipping _14362  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg getch pc: 1 op: STARTLINE (58)

    /** scanner.e:417		c = ThisLine[bp]*/
    // SubProg getch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48709);
    _c_25575 = (object)*(((s1_ptr)_2)->base + _49bp_48713);
    if (!IS_ATOM_INT(_c_25575)){
        _c_25575 = (object)DBL_PTR(_c_25575)->dbl;
    }
    // SubProg getch pc: 13 op: STARTLINE (58)

    /** scanner.e:418		bp += 1*/
    // SubProg getch pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 17 op: PLUS (11)
    _49bp_48713 = _49bp_48713 + 1;
    // SubProg getch pc: 23 op: STARTLINE (58)

    /** scanner.e:419		return c*/
    // SubProg getch pc: 25 op: RETURNF (28)

// Exiting block BLOCK: getch
    return _c_25575;
    // SubProg getch pc: 29 op: BADRETURNF (43)
    ;
}


void _61ungetch()
{
// skipping _14364  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ungetch pc: 1 op: STARTLINE (58)

    /** scanner.e:424		bp -= 1*/
    // SubProg ungetch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ungetch pc: 5 op: MINUS (10)
    _49bp_48713 = _49bp_48713 - 1;
    // SubProg ungetch pc: 11 op: STARTLINE (58)

    /** scanner.e:425	end procedure*/
    // SubProg ungetch pc: 13 op: RETURNP (29)

// Exiting block BLOCK: ungetch
    return;
    // SubProg ungetch pc: 16 op: BADRETURNF (43)
    ;
}


object _61get_file_path(object _s_25587)
{
    object _14370 = NOVALUE; // 25598 14370
    object _14368 = NOVALUE; // 25595 14368
    object _14367 = NOVALUE; // 25594 14367
    object _14366 = NOVALUE; // 25592 14366
    object _14365 = NOVALUE; // 25590 14365
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_file_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_file_path pc: 3 op: STARTLINE (58)

    /** scanner.e:429			for t=length(s) to 1 by -1 do*/
    // SubProg get_file_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_25587)){
            _14365 = SEQ_PTR(_s_25587)->length;
    }
    else {
        _14365 = 1;
    }
    // SubProg get_file_path pc: 8 op: FOR_I (125)
    {
        object _t_25589;
        _t_25589 = _14365;
L1: // addr: 15 pc: 8 sub: 25585 op: 125
        if (_t_25589 < 1){
            goto L2; // [8] 50
        }
        // SubProg get_file_path pc: 15 op: STARTLINE (58)

        /** scanner.e:430					if find(s[t],SLASH_CHARS) then*/
        // SubProg get_file_path pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_25587);
        _14366 = (object)*(((s1_ptr)_2)->base + _t_25589);
        // SubProg get_file_path pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_file_path pc: 23 op: FIND_FROM (176)
        _14367 = find_from(_14366, _39SLASH_CHARS_19982, 1);
        _14366 = NOVALUE;
        // SubProg get_file_path pc: 28 op: IF (20)
        if (_14367 == 0)
        {
            _14367 = NOVALUE;
            goto L3; // [28] 43
        }
        else{
            _14367 = NOVALUE;
        }
        // SubProg get_file_path pc: 31 op: STARTLINE (58)

        /** scanner.e:431							return s[1..t]*/
        // SubProg get_file_path pc: 33 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_14368;
        RHS_Slice(_s_25587, 1, _t_25589);
        // SubProg get_file_path pc: 38 op: RETURNF (28)

// Exiting block BLOCK: get_file_path

// block var s_25587
        DeRefDS(_s_25587);
        return _14368;
        // SubProg get_file_path pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 25585 op: 159
        // SubProg get_file_path pc: 43 op: STARTLINE (58)

        /** scanner.e:433			end for*/
        // SubProg get_file_path pc: 45 op: ENDFOR_GENERAL (39)
        _t_25589 = _t_25589 + -1;
        goto L1; // [45] 15
L2: // addr: 50 pc: 45 sub: 25585 op: 39
        ;
    }
    // SubProg get_file_path pc: 50 op: STARTLINE (58)

    /** scanner.e:435			return "." & SLASH*/
    // SubProg get_file_path pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_file_path pc: 54 op: CONCAT (15)
    Append(&_14370, _14369, 47);
    // SubProg get_file_path pc: 58 op: RETURNF (28)

// Exiting block BLOCK: get_file_path

// block var s_25587
    DeRefDS(_s_25587);
    DeRef(_14368);
    _14368 = NOVALUE;
    return _14370;
    // SubProg get_file_path pc: 62 op: BADRETURNF (43)
    ;
}


object _61find_file(object _fname_25601)
{
    object _try_25602 = NOVALUE;
    object _full_path_25603 = NOVALUE;
    object _errbuff_25604 = NOVALUE;
    object _currdir_25605 = NOVALUE;
    object _conf_path_25606 = NOVALUE;
    object _scan_result_25607 = NOVALUE;
    object _inc_path_25608 = NOVALUE;
    object _mainpath_25627 = NOVALUE;
    object _31718 = NOVALUE; // 63925 31718
    object _31717 = NOVALUE; // 63924 31717
    object _14467 = NOVALUE; // 25777 14467
// skipping _14466  name type: 0
    object _14465 = NOVALUE; // 25773 14465
    object _14464 = NOVALUE; // 25772 14464
    object _14463 = NOVALUE; // 25771 14463
    object _14461 = NOVALUE; // 25769 14461
// skipping _14460  name type: 0
    object _14459 = NOVALUE; // 25765 14459
// skipping _14458  name type: 0
    object _14457 = NOVALUE; // 25762 14457
    object _14456 = NOVALUE; // 25761 14456
// skipping _14455  name type: 0
    object _14454 = NOVALUE; // 25757 14454
    object _14453 = NOVALUE; // 25756 14453
// skipping _14452  name type: 0
// skipping _14451  name type: 0
    object _14450 = NOVALUE; // 25751 14450
// skipping _14449  name type: 0
// skipping _14448  name type: 0
    object _14447 = NOVALUE; // 25746 14447
    object _14446 = NOVALUE; // 25745 14446
    object _14445 = NOVALUE; // 25744 14445
    object _14444 = NOVALUE; // 25743 14444
    object _14443 = NOVALUE; // 25741 14443
    object _14442 = NOVALUE; // 25740 14442
    object _14441 = NOVALUE; // 25739 14441
    object _14440 = NOVALUE; // 25737 14440
// skipping _14439  name type: 0
// skipping _14438  name type: 0
    object _14437 = NOVALUE; // 25730 14437
    object _14436 = NOVALUE; // 25728 14436
// skipping _14435  name type: 0
// skipping _14434  name type: 0
// skipping _14433  name type: 0
    object _14432 = NOVALUE; // 25723 14432
// skipping _14431  name type: 0
// skipping _14430  name type: 0
    object _14429 = NOVALUE; // 25718 14429
    object _14428 = NOVALUE; // 25717 14428
    object _14427 = NOVALUE; // 25716 14427
    object _14426 = NOVALUE; // 25715 14426
    object _14425 = NOVALUE; // 25713 14425
    object _14424 = NOVALUE; // 25712 14424
    object _14423 = NOVALUE; // 25711 14423
    object _14422 = NOVALUE; // 25709 14422
// skipping _14421  name type: 0
// skipping _14420  name type: 0
    object _14419 = NOVALUE; // 25702 14419
// skipping _14418  name type: 0
// skipping _14417  name type: 0
// skipping _14416  name type: 0
    object _14415 = NOVALUE; // 25696 14415
// skipping _14414  name type: 0
    object _14413 = NOVALUE; // 25691 14413
    object _14412 = NOVALUE; // 25690 14412
    object _14411 = NOVALUE; // 25688 14411
    object _14410 = NOVALUE; // 25686 14410
    object _14409 = NOVALUE; // 25685 14409
// skipping _14408  name type: 0
// skipping _14407  name type: 0
    object _14406 = NOVALUE; // 25679 14406
    object _14405 = NOVALUE; // 25678 14405
    object _14404 = NOVALUE; // 25677 14404
    object _14403 = NOVALUE; // 25676 14403
    object _14402 = NOVALUE; // 25674 14402
    object _14401 = NOVALUE; // 25673 14401
// skipping _14400  name type: 0
    object _14399 = NOVALUE; // 25670 14399
    object _14398 = NOVALUE; // 25668 14398
    object _14397 = NOVALUE; // 25667 14397
    object _14396 = NOVALUE; // 25666 14396
    object _14395 = NOVALUE; // 25664 14395
// skipping _14394  name type: 0
    object _14393 = NOVALUE; // 25658 14393
    object _14392 = NOVALUE; // 25656 14392
// skipping _14391  name type: 0
    object _14389 = NOVALUE; // 25651 14389
// skipping _14388  name type: 0
    object _14386 = NOVALUE; // 25646 14386
// skipping _14385  name type: 0
    object _14384 = NOVALUE; // 25641 14384
// skipping _14383  name type: 0
// skipping _14382  name type: 0
    object _14381 = NOVALUE; // 25635 14381
// skipping _14380  name type: 0
    object _14379 = NOVALUE; // 25632 14379
    object _14378 = NOVALUE; // 25626 14378
// skipping _14377  name type: 0
// skipping _14376  name type: 0
    object _14375 = NOVALUE; // 25621 14375
    object _14374 = NOVALUE; // 25618 14374
// skipping _14373  name type: 0
    object _14372 = NOVALUE; // 25614 14372
    object _14371 = NOVALUE; // 25611 14371
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 3 op: STARTLINE (58)

    /** scanner.e:449		if absolute_path(fname) then*/
    // SubProg find_file pc: 5 op: PROC (27)
    RefDS(_fname_25601);
    _14371 = _18absolute_path(_fname_25601);
    // SubProg find_file pc: 9 op: IF (20)
    if (_14371 == 0) {
        DeRef(_14371);
        _14371 = NOVALUE;
        goto L1; // [9] 42
    }
    else {
        if (!IS_ATOM_INT(_14371) && DBL_PTR(_14371)->dbl == 0.0){
            DeRef(_14371);
            _14371 = NOVALUE;
            goto L1; // [9] 42
        }
        DeRef(_14371);
        _14371 = NOVALUE;
    }
    DeRef(_14371);
    _14371 = NOVALUE;
    // SubProg find_file pc: 12 op: STARTLINE (58)

    /** scanner.e:451			if not file_exists(fname) then*/
    // SubProg find_file pc: 14 op: PROC (27)
    RefDS(_fname_25601);
    _14372 = _18file_exists(_fname_25601);
    // SubProg find_file pc: 18 op: NOT_IFW (108)
    if (IS_ATOM_INT(_14372)) {
        if (_14372 != 0){
            DeRef(_14372);
            _14372 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    else {
        if (DBL_PTR(_14372)->dbl != 0.0){
            DeRef(_14372);
            _14372 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    DeRef(_14372);
    _14372 = NOVALUE;
    // SubProg find_file pc: 21 op: STARTLINE (58)

    /** scanner.e:452				CompileErr(51, {new_include_name})*/
    // SubProg find_file pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 25 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_34new_include_name_15310);
    ((intptr_t*)_2)[1] = _34new_include_name_15310;
    _14374 = MAKE_SEQ(_1);
    // SubProg find_file pc: 29 op: PROC (27)
    _49CompileErr(51, _14374, 0);
    _14374 = NOVALUE;
    // SubProg find_file pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 25599 op: 159
    // SubProg find_file pc: 35 op: STARTLINE (58)

    /** scanner.e:455			return fname*/
    // SubProg find_file pc: 37 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var full_path_25603
    DeRef(_full_path_25603);

// block var errbuff_25604
    DeRef(_errbuff_25604);

// block var currdir_25605
    DeRef(_currdir_25605);

// block var conf_path_25606
    DeRef(_conf_path_25606);

// block var scan_result_25607
    DeRef(_scan_result_25607);

// block var inc_path_25608
    DeRef(_inc_path_25608);

// block var mainpath_25627
    DeRef(_mainpath_25627);
    return _fname_25601;
    // SubProg find_file pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 25599 op: 159
    // SubProg find_file pc: 42 op: STARTLINE (58)

    /** scanner.e:460		currdir = get_file_path( known_files[current_file_no] )*/
    // SubProg find_file pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _14375 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg find_file pc: 52 op: PROC (27)
    Ref(_14375);
    _0 = _currdir_25605;
    _currdir_25605 = _61get_file_path(_14375);
    DeRef(_0);
    _14375 = NOVALUE;
    // SubProg find_file pc: 56 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 58 op: STARTLINE (58)

    /** scanner.e:461		full_path = currdir & fname*/
    // SubProg find_file pc: 60 op: CONCAT (15)
    Concat((object_ptr)&_full_path_25603, _currdir_25605, _fname_25601);
    // SubProg find_file pc: 64 op: STARTLINE (58)

    /** scanner.e:462		if file_exists(full_path) then*/
    // SubProg find_file pc: 66 op: PROC (27)
    RefDS(_full_path_25603);
    _14378 = _18file_exists(_full_path_25603);
    // SubProg find_file pc: 70 op: IF (20)
    if (_14378 == 0) {
        DeRef(_14378);
        _14378 = NOVALUE;
        goto L3; // [70] 80
    }
    else {
        if (!IS_ATOM_INT(_14378) && DBL_PTR(_14378)->dbl == 0.0){
            DeRef(_14378);
            _14378 = NOVALUE;
            goto L3; // [70] 80
        }
        DeRef(_14378);
        _14378 = NOVALUE;
    }
    DeRef(_14378);
    _14378 = NOVALUE;
    // SubProg find_file pc: 73 op: STARTLINE (58)

    /** scanner.e:463			return full_path*/
    // SubProg find_file pc: 75 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25601
    DeRefDS(_fname_25601);

// block var errbuff_25604
    DeRef(_errbuff_25604);

// block var currdir_25605
    DeRefDS(_currdir_25605);

// block var conf_path_25606
    DeRef(_conf_path_25606);

// block var scan_result_25607
    DeRef(_scan_result_25607);

// block var inc_path_25608
    DeRef(_inc_path_25608);

// block var mainpath_25627
    DeRef(_mainpath_25627);
    return _full_path_25603;
    // SubProg find_file pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 25599 op: 159
    // SubProg find_file pc: 80 op: STARTLINE (58)

    /** scanner.e:467		sequence mainpath = main_path[1..rfind(SLASH, main_path)]*/
    // SubProg find_file pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 88 op: ASSIGN (18)
    RefDS(_34main_path_15308);
    DeRef(_31717);
    _31717 = _34main_path_15308;
    // SubProg find_file pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_31717)){
            _31718 = SEQ_PTR(_31717)->length;
    }
    else {
        _31718 = 1;
    }
    _31717 = NOVALUE;
    // SubProg find_file pc: 94 op: PROC (27)
    RefDS(_34main_path_15308);
    _14379 = _17rfind(47, _34main_path_15308, _31718);
    _31718 = NOVALUE;
    // SubProg find_file pc: 100 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mainpath_25627;
    RHS_Slice(_34main_path_15308, 1, _14379);
    // SubProg find_file pc: 105 op: STARTLINE (58)

    /** scanner.e:468		if not equal(mainpath, currdir) then*/
    // SubProg find_file pc: 107 op: EQUAL (153)
    if (_mainpath_25627 == _currdir_25605)
    _14381 = 1;
    else if (IS_ATOM_INT(_mainpath_25627) && IS_ATOM_INT(_currdir_25605))
    _14381 = 0;
    else
    _14381 = (compare(_mainpath_25627, _currdir_25605) == 0);
    // SubProg find_file pc: 111 op: NOT_IFW (108)
    if (_14381 != 0)
    goto L4; // [111] 139
    _14381 = NOVALUE;
    // SubProg find_file pc: 114 op: STARTLINE (58)

    /** scanner.e:469			full_path = mainpath & new_include_name*/
    // SubProg find_file pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 118 op: CONCAT (15)
    Concat((object_ptr)&_full_path_25603, _mainpath_25627, _34new_include_name_15310);
    // SubProg find_file pc: 122 op: STARTLINE (58)

    /** scanner.e:470			if file_exists(full_path) then*/
    // SubProg find_file pc: 124 op: PROC (27)
    RefDS(_full_path_25603);
    _14384 = _18file_exists(_full_path_25603);
    // SubProg find_file pc: 128 op: IF (20)
    if (_14384 == 0) {
        DeRef(_14384);
        _14384 = NOVALUE;
        goto L5; // [128] 138
    }
    else {
        if (!IS_ATOM_INT(_14384) && DBL_PTR(_14384)->dbl == 0.0){
            DeRef(_14384);
            _14384 = NOVALUE;
            goto L5; // [128] 138
        }
        DeRef(_14384);
        _14384 = NOVALUE;
    }
    DeRef(_14384);
    _14384 = NOVALUE;
    // SubProg find_file pc: 131 op: STARTLINE (58)

    /** scanner.e:471				return full_path*/
    // SubProg find_file pc: 133 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25601
    DeRefDS(_fname_25601);

// block var errbuff_25604
    DeRef(_errbuff_25604);

// block var currdir_25605
    DeRefDS(_currdir_25605);

// block var conf_path_25606
    DeRef(_conf_path_25606);

// block var scan_result_25607
    DeRef(_scan_result_25607);

// block var inc_path_25608
    DeRef(_inc_path_25608);

// block var mainpath_25627
    DeRefDS(_mainpath_25627);
    DeRef(_14379);
    _14379 = NOVALUE;
    _31717 = NOVALUE;
    return _full_path_25603;
    // SubProg find_file pc: 137 op: NOP1 (159)
L5: // addr: 138 pc: 137 sub: 25599 op: 159
    // SubProg find_file pc: 138 op: NOP1 (159)
L4: // addr: 139 pc: 138 sub: 25599 op: 159
    // SubProg find_file pc: 139 op: STARTLINE (58)

    /** scanner.e:475		scan_result = ConfPath(new_include_name)*/
    // SubProg find_file pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 143 op: PROC (27)
    RefDS(_34new_include_name_15310);
    _0 = _scan_result_25607;
    _scan_result_25607 = _46ConfPath(_34new_include_name_15310);
    DeRef(_0);
    // SubProg find_file pc: 147 op: STARTLINE (58)

    /** scanner.e:477		if atom(scan_result) then*/
    // SubProg find_file pc: 149 op: IS_AN_ATOM (67)
    _14386 = IS_ATOM(_scan_result_25607);
    // SubProg find_file pc: 152 op: IF (20)
    if (_14386 == 0)
    {
        _14386 = NOVALUE;
        goto L6; // [152] 164
    }
    else{
        _14386 = NOVALUE;
    }
    // SubProg find_file pc: 155 op: STARTLINE (58)

    /** scanner.e:478			scan_result = ScanPath(fname,"EUINC",0)*/
    // SubProg find_file pc: 157 op: PROC (27)
    RefDS(_fname_25601);
    RefDS(_14387);
    _0 = _scan_result_25607;
    _scan_result_25607 = _46ScanPath(_fname_25601, _14387, 0);
    DeRef(_0);
    // SubProg find_file pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 25599 op: 159
    // SubProg find_file pc: 164 op: STARTLINE (58)

    /** scanner.e:481		if atom(scan_result) then*/
    // SubProg find_file pc: 166 op: IS_AN_ATOM (67)
    _14389 = IS_ATOM(_scan_result_25607);
    // SubProg find_file pc: 169 op: IF (20)
    if (_14389 == 0)
    {
        _14389 = NOVALUE;
        goto L7; // [169] 181
    }
    else{
        _14389 = NOVALUE;
    }
    // SubProg find_file pc: 172 op: STARTLINE (58)

    /** scanner.e:482			scan_result = ScanPath(fname, "EUDIR",1)*/
    // SubProg find_file pc: 174 op: PROC (27)
    RefDS(_fname_25601);
    RefDS(_14390);
    _0 = _scan_result_25607;
    _scan_result_25607 = _46ScanPath(_fname_25601, _14390, 1);
    DeRef(_0);
    // SubProg find_file pc: 180 op: NOP1 (159)
L7: // addr: 181 pc: 180 sub: 25599 op: 159
    // SubProg find_file pc: 181 op: STARTLINE (58)

    /** scanner.e:485		if atom(scan_result) then*/
    // SubProg find_file pc: 183 op: IS_AN_ATOM (67)
    _14392 = IS_ATOM(_scan_result_25607);
    // SubProg find_file pc: 186 op: IF (20)
    if (_14392 == 0)
    {
        _14392 = NOVALUE;
        goto L8; // [186] 223
    }
    else{
        _14392 = NOVALUE;
    }
    // SubProg find_file pc: 189 op: STARTLINE (58)

    /** scanner.e:487			full_path = get_eudir() & SLASH & "include" & SLASH & fname*/
    // SubProg find_file pc: 191 op: PROC (27)
    _14393 = _35get_eudir();
    // SubProg find_file pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 198 op: CONCAT_N (157)
    {
        object concat_list[5];

        concat_list[0] = _fname_25601;
        concat_list[1] = 47;
        concat_list[2] = _13151;
        concat_list[3] = 47;
        concat_list[4] = _14393;
        Concat_N((object_ptr)&_full_path_25603, concat_list, 5);
    }
    DeRef(_14393);
    _14393 = NOVALUE;
    // SubProg find_file pc: 206 op: STARTLINE (58)

    /** scanner.e:488			if file_exists(full_path) then*/
    // SubProg find_file pc: 208 op: PROC (27)
    RefDS(_full_path_25603);
    _14395 = _18file_exists(_full_path_25603);
    // SubProg find_file pc: 212 op: IF (20)
    if (_14395 == 0) {
        DeRef(_14395);
        _14395 = NOVALUE;
        goto L9; // [212] 222
    }
    else {
        if (!IS_ATOM_INT(_14395) && DBL_PTR(_14395)->dbl == 0.0){
            DeRef(_14395);
            _14395 = NOVALUE;
            goto L9; // [212] 222
        }
        DeRef(_14395);
        _14395 = NOVALUE;
    }
    DeRef(_14395);
    _14395 = NOVALUE;
    // SubProg find_file pc: 215 op: STARTLINE (58)

    /** scanner.e:489				return full_path*/
    // SubProg find_file pc: 217 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25601
    DeRefDS(_fname_25601);

// block var errbuff_25604
    DeRef(_errbuff_25604);

// block var currdir_25605
    DeRef(_currdir_25605);

// block var conf_path_25606
    DeRef(_conf_path_25606);

// block var scan_result_25607
    DeRef(_scan_result_25607);

// block var inc_path_25608
    DeRef(_inc_path_25608);

// block var mainpath_25627
    DeRef(_mainpath_25627);
    DeRef(_14379);
    _14379 = NOVALUE;
    _31717 = NOVALUE;
    return _full_path_25603;
    // SubProg find_file pc: 221 op: NOP1 (159)
L9: // addr: 222 pc: 221 sub: 25599 op: 159
    // SubProg find_file pc: 222 op: NOP1 (159)
L8: // addr: 223 pc: 222 sub: 25599 op: 159
    // SubProg find_file pc: 223 op: STARTLINE (58)

    /** scanner.e:493		if sequence(scan_result) then*/
    // SubProg find_file pc: 225 op: IS_A_SEQUENCE (68)
    _14396 = IS_SEQUENCE(_scan_result_25607);
    // SubProg find_file pc: 228 op: IF (20)
    if (_14396 == 0)
    {
        _14396 = NOVALUE;
        goto LA; // [228] 250
    }
    else{
        _14396 = NOVALUE;
    }
    // SubProg find_file pc: 231 op: STARTLINE (58)

    /** scanner.e:495			close(scan_result[2])*/
    // SubProg find_file pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_25607);
    _14397 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg find_file pc: 237 op: CLOSE (86)
    if (IS_ATOM_INT(_14397))
    EClose(_14397);
    else
    EClose((object)DBL_PTR(_14397)->dbl);
    _14397 = NOVALUE;
    // SubProg find_file pc: 239 op: STARTLINE (58)

    /** scanner.e:496			return scan_result[1]*/
    // SubProg find_file pc: 241 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_25607);
    _14398 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_file pc: 245 op: RETURNF (28)
    Ref(_14398);

// Exiting block BLOCK: find_file

// block var fname_25601
    DeRefDS(_fname_25601);

// block var full_path_25603
    DeRef(_full_path_25603);

// block var errbuff_25604
    DeRef(_errbuff_25604);

// block var currdir_25605
    DeRef(_currdir_25605);

// block var conf_path_25606
    DeRef(_conf_path_25606);

// block var scan_result_25607
    DeRef(_scan_result_25607);

// block var inc_path_25608
    DeRef(_inc_path_25608);

// block var mainpath_25627
    DeRef(_mainpath_25627);
    DeRef(_14379);
    _14379 = NOVALUE;
    _31717 = NOVALUE;
    return _14398;
    // SubProg find_file pc: 249 op: NOP1 (159)
LA: // addr: 250 pc: 249 sub: 25599 op: 159
    // SubProg find_file pc: 250 op: STARTLINE (58)

    /** scanner.e:500		errbuff = ""*/
    // SubProg find_file pc: 252 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_errbuff_25604);
    _errbuff_25604 = _5;
    // SubProg find_file pc: 255 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 257 op: STARTLINE (58)

    /** scanner.e:501		full_path = {}*/
    // SubProg find_file pc: 259 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_full_path_25603);
    _full_path_25603 = _5;
    // SubProg find_file pc: 262 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 264 op: STARTLINE (58)

    /** scanner.e:502		if length(currdir) > 0 then*/
    // SubProg find_file pc: 266 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25605)){
            _14399 = SEQ_PTR(_currdir_25605)->length;
    }
    else {
        _14399 = 1;
    }
    // SubProg find_file pc: 269 op: GREATER_IFW_I (124)
    if (_14399 <= 0)
    goto LB; // [269] 321
    // SubProg find_file pc: 273 op: STARTLINE (58)

    /** scanner.e:503			if find(currdir[$], SLASH_CHARS) then*/
    // SubProg find_file pc: 275 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25605)){
            _14401 = SEQ_PTR(_currdir_25605)->length;
    }
    else {
        _14401 = 1;
    }
    // SubProg find_file pc: 278 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_currdir_25605);
    _14402 = (object)*(((s1_ptr)_2)->base + _14401);
    // SubProg find_file pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 284 op: FIND_FROM (176)
    _14403 = find_from(_14402, _39SLASH_CHARS_19982, 1);
    _14402 = NOVALUE;
    // SubProg find_file pc: 289 op: IF (20)
    if (_14403 == 0)
    {
        _14403 = NOVALUE;
        goto LC; // [289] 313
    }
    else{
        _14403 = NOVALUE;
    }
    // SubProg find_file pc: 292 op: STARTLINE (58)

    /** scanner.e:504				full_path = append(full_path, currdir[1..$-1])*/
    // SubProg find_file pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25605)){
            _14404 = SEQ_PTR(_currdir_25605)->length;
    }
    else {
        _14404 = 1;
    }
    // SubProg find_file pc: 297 op: MINUS (10)
    _14405 = _14404 - 1;
    _14404 = NOVALUE;
    // SubProg find_file pc: 301 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_14406;
    RHS_Slice(_currdir_25605, 1, _14405);
    // SubProg find_file pc: 306 op: APPEND (35)
    RefDS(_14406);
    Append(&_full_path_25603, _full_path_25603, _14406);
    DeRefDS(_14406);
    _14406 = NOVALUE;
    // SubProg find_file pc: 310 op: ELSE (23)
    goto LD; // [310] 320
    // SubProg find_file pc: 312 op: NOP1 (159)
LC: // addr: 313 pc: 312 sub: 25599 op: 159
    // SubProg find_file pc: 313 op: STARTLINE (58)

    /** scanner.e:506				full_path = append(full_path, currdir)*/
    // SubProg find_file pc: 315 op: APPEND (35)
    RefDS(_currdir_25605);
    Append(&_full_path_25603, _full_path_25603, _currdir_25605);
    // SubProg find_file pc: 319 op: NOP1 (159)
LD: // addr: 320 pc: 319 sub: 25599 op: 159
    // SubProg find_file pc: 320 op: NOP1 (159)
LB: // addr: 321 pc: 320 sub: 25599 op: 159
    // SubProg find_file pc: 321 op: STARTLINE (58)

    /** scanner.e:511		if find(main_path[$], SLASH_CHARS) then*/
    // SubProg find_file pc: 323 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 325 op: LENGTH (42)
    if (IS_SEQUENCE(_34main_path_15308)){
            _14409 = SEQ_PTR(_34main_path_15308)->length;
    }
    else {
        _14409 = 1;
    }
    // SubProg find_file pc: 328 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34main_path_15308);
    _14410 = (object)*(((s1_ptr)_2)->base + _14409);
    // SubProg find_file pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 334 op: FIND_FROM (176)
    _14411 = find_from(_14410, _39SLASH_CHARS_19982, 1);
    _14410 = NOVALUE;
    // SubProg find_file pc: 339 op: IF (20)
    if (_14411 == 0)
    {
        _14411 = NOVALUE;
        goto LE; // [339] 361
    }
    else{
        _14411 = NOVALUE;
    }
    // SubProg find_file pc: 342 op: STARTLINE (58)

    /** scanner.e:512			errbuff = main_path[1..$-1]  -- looks better*/
    // SubProg find_file pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 346 op: LENGTH (42)
    if (IS_SEQUENCE(_34main_path_15308)){
            _14412 = SEQ_PTR(_34main_path_15308)->length;
    }
    else {
        _14412 = 1;
    }
    // SubProg find_file pc: 349 op: MINUS (10)
    _14413 = _14412 - 1;
    _14412 = NOVALUE;
    // SubProg find_file pc: 353 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_errbuff_25604;
    RHS_Slice(_34main_path_15308, 1, _14413);
    // SubProg find_file pc: 358 op: ELSE (23)
    goto LF; // [358] 371
    // SubProg find_file pc: 360 op: NOP1 (159)
LE: // addr: 361 pc: 360 sub: 25599 op: 159
    // SubProg find_file pc: 361 op: STARTLINE (58)

    /** scanner.e:514			errbuff = main_path*/
    // SubProg find_file pc: 363 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 365 op: ASSIGN (18)
    RefDS(_34main_path_15308);
    DeRef(_errbuff_25604);
    _errbuff_25604 = _34main_path_15308;
    // SubProg find_file pc: 368 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 370 op: NOP1 (159)
LF: // addr: 371 pc: 370 sub: 25599 op: 159
    // SubProg find_file pc: 371 op: STARTLINE (58)

    /** scanner.e:516		if not find(errbuff, full_path) then*/
    // SubProg find_file pc: 373 op: FIND_FROM (176)
    _14415 = find_from(_errbuff_25604, _full_path_25603, 1);
    // SubProg find_file pc: 378 op: NOT_IFW (108)
    if (_14415 != 0)
    goto L10; // [378] 388
    _14415 = NOVALUE;
    // SubProg find_file pc: 381 op: STARTLINE (58)

    /** scanner.e:517			full_path = append(full_path, errbuff)*/
    // SubProg find_file pc: 383 op: APPEND (35)
    RefDS(_errbuff_25604);
    Append(&_full_path_25603, _full_path_25603, _errbuff_25604);
    // SubProg find_file pc: 387 op: NOP1 (159)
L10: // addr: 388 pc: 387 sub: 25599 op: 159
    // SubProg find_file pc: 388 op: STARTLINE (58)

    /** scanner.e:520		conf_path = get_conf_dirs()*/
    // SubProg find_file pc: 390 op: PROC (27)
    _0 = _conf_path_25606;
    _conf_path_25606 = _46get_conf_dirs();
    DeRef(_0);
    // SubProg find_file pc: 393 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 395 op: STARTLINE (58)

    /** scanner.e:521		if length(conf_path) > 0 then*/
    // SubProg find_file pc: 397 op: LENGTH (42)
    if (IS_SEQUENCE(_conf_path_25606)){
            _14419 = SEQ_PTR(_conf_path_25606)->length;
    }
    else {
        _14419 = 1;
    }
    // SubProg find_file pc: 400 op: GREATER_IFW_I (124)
    if (_14419 <= 0)
    goto L11; // [400] 507
    // SubProg find_file pc: 404 op: STARTLINE (58)

    /** scanner.e:522			conf_path = split(conf_path, PATHSEP)*/
    // SubProg find_file pc: 406 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 408 op: PROC (27)
    RefDS(_conf_path_25606);
    _0 = _conf_path_25606;
    _conf_path_25606 = _23split(_conf_path_25606, 58, 0, 0);
    DeRefDS(_0);
    // SubProg find_file pc: 415 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 417 op: STARTLINE (58)

    /** scanner.e:523			for i = 1 to length(conf_path) do*/
    // SubProg find_file pc: 419 op: LENGTH (42)
    if (IS_SEQUENCE(_conf_path_25606)){
            _14422 = SEQ_PTR(_conf_path_25606)->length;
    }
    else {
        _14422 = 1;
    }
    // SubProg find_file pc: 422 op: FOR_I (125)
    {
        object _i_25708;
        _i_25708 = 1;
L12: // addr: 429 pc: 422 sub: 25599 op: 125
        if (_i_25708 > _14422){
            goto L13; // [422] 506
        }
        // SubProg find_file pc: 429 op: STARTLINE (58)

        /** scanner.e:524				if find(conf_path[i][$], SLASH_CHARS) then*/
        // SubProg find_file pc: 431 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_conf_path_25606);
        _14423 = (object)*(((s1_ptr)_2)->base + _i_25708);
        // SubProg find_file pc: 435 op: LENGTH (42)
        if (IS_SEQUENCE(_14423)){
                _14424 = SEQ_PTR(_14423)->length;
        }
        else {
            _14424 = 1;
        }
        // SubProg find_file pc: 438 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14423);
        _14425 = (object)*(((s1_ptr)_2)->base + _14424);
        _14423 = NOVALUE;
        // SubProg find_file pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 444 op: FIND_FROM (176)
        _14426 = find_from(_14425, _39SLASH_CHARS_19982, 1);
        _14425 = NOVALUE;
        // SubProg find_file pc: 449 op: IF (20)
        if (_14426 == 0)
        {
            _14426 = NOVALUE;
            goto L14; // [449] 473
        }
        else{
            _14426 = NOVALUE;
        }
        // SubProg find_file pc: 452 op: STARTLINE (58)

        /** scanner.e:525					errbuff = conf_path[i][1..$-1]  -- looks better*/
        // SubProg find_file pc: 454 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_conf_path_25606);
        _14427 = (object)*(((s1_ptr)_2)->base + _i_25708);
        // SubProg find_file pc: 458 op: LENGTH (42)
        if (IS_SEQUENCE(_14427)){
                _14428 = SEQ_PTR(_14427)->length;
        }
        else {
            _14428 = 1;
        }
        // SubProg find_file pc: 461 op: MINUS (10)
        _14429 = _14428 - 1;
        _14428 = NOVALUE;
        // SubProg find_file pc: 465 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_errbuff_25604;
        RHS_Slice(_14427, 1, _14429);
        _14427 = NOVALUE;
        // SubProg find_file pc: 470 op: ELSE (23)
        goto L15; // [470] 482
        // SubProg find_file pc: 472 op: NOP1 (159)
L14: // addr: 473 pc: 472 sub: 25599 op: 159
        // SubProg find_file pc: 473 op: STARTLINE (58)

        /** scanner.e:527					errbuff = conf_path[i]*/
        // SubProg find_file pc: 475 op: RHS_SUBS (25)
        DeRef(_errbuff_25604);
        _2 = (object)SEQ_PTR(_conf_path_25606);
        _errbuff_25604 = (object)*(((s1_ptr)_2)->base + _i_25708);
        Ref(_errbuff_25604);
        // SubProg find_file pc: 479 op: SEQUENCE_CHECK (97)
        // SubProg find_file pc: 481 op: NOP1 (159)
L15: // addr: 482 pc: 481 sub: 25599 op: 159
        // SubProg find_file pc: 482 op: STARTLINE (58)

        /** scanner.e:529				if not find(errbuff, full_path) then*/
        // SubProg find_file pc: 484 op: FIND_FROM (176)
        _14432 = find_from(_errbuff_25604, _full_path_25603, 1);
        // SubProg find_file pc: 489 op: NOT_IFW (108)
        if (_14432 != 0)
        goto L16; // [489] 499
        _14432 = NOVALUE;
        // SubProg find_file pc: 492 op: STARTLINE (58)

        /** scanner.e:530					full_path = append(full_path, errbuff)*/
        // SubProg find_file pc: 494 op: APPEND (35)
        RefDS(_errbuff_25604);
        Append(&_full_path_25603, _full_path_25603, _errbuff_25604);
        // SubProg find_file pc: 498 op: NOP1 (159)
L16: // addr: 499 pc: 498 sub: 25599 op: 159
        // SubProg find_file pc: 499 op: STARTLINE (58)

        /** scanner.e:532			end for*/
        // SubProg find_file pc: 501 op: ENDFOR_INT_UP1 (54)
        _i_25708 = _i_25708 + 1;
        goto L12; // [501] 429
L13: // addr: 506 pc: 501 sub: 25599 op: 54
        ;
    }
    // SubProg find_file pc: 506 op: NOP1 (159)
L11: // addr: 507 pc: 506 sub: 25599 op: 159
    // SubProg find_file pc: 507 op: STARTLINE (58)

    /** scanner.e:535		inc_path = getenv("EUINC")*/
    // SubProg find_file pc: 509 op: GETENV (91)
    DeRef(_inc_path_25608);
    _inc_path_25608 = EGetEnv(_14387);
    // SubProg find_file pc: 512 op: STARTLINE (58)

    /** scanner.e:536		if sequence(inc_path) then*/
    // SubProg find_file pc: 514 op: IS_A_SEQUENCE (68)
    _14436 = IS_SEQUENCE(_inc_path_25608);
    // SubProg find_file pc: 517 op: IF (20)
    if (_14436 == 0)
    {
        _14436 = NOVALUE;
        goto L17; // [517] 631
    }
    else{
        _14436 = NOVALUE;
    }
    // SubProg find_file pc: 520 op: STARTLINE (58)

    /** scanner.e:537			if length(inc_path) > 0 then*/
    // SubProg find_file pc: 522 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_25608)){
            _14437 = SEQ_PTR(_inc_path_25608)->length;
    }
    else {
        _14437 = 1;
    }
    // SubProg find_file pc: 525 op: GREATER_IFW_I (124)
    if (_14437 <= 0)
    goto L18; // [525] 630
    // SubProg find_file pc: 529 op: STARTLINE (58)

    /** scanner.e:538				inc_path = split(inc_path, PATHSEP)*/
    // SubProg find_file pc: 531 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 533 op: PROC (27)
    Ref(_inc_path_25608);
    _0 = _inc_path_25608;
    _inc_path_25608 = _23split(_inc_path_25608, 58, 0, 0);
    DeRefi(_0);
    // SubProg find_file pc: 540 op: STARTLINE (58)

    /** scanner.e:539				for i = 1 to length(inc_path) do*/
    // SubProg find_file pc: 542 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_25608)){
            _14440 = SEQ_PTR(_inc_path_25608)->length;
    }
    else {
        _14440 = 1;
    }
    // SubProg find_file pc: 545 op: FOR_I (125)
    {
        object _i_25736;
        _i_25736 = 1;
L19: // addr: 552 pc: 545 sub: 25599 op: 125
        if (_i_25736 > _14440){
            goto L1A; // [545] 629
        }
        // SubProg find_file pc: 552 op: STARTLINE (58)

        /** scanner.e:540					if find(inc_path[i][$], SLASH_CHARS) then*/
        // SubProg find_file pc: 554 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_25608);
        _14441 = (object)*(((s1_ptr)_2)->base + _i_25736);
        // SubProg find_file pc: 558 op: LENGTH (42)
        if (IS_SEQUENCE(_14441)){
                _14442 = SEQ_PTR(_14441)->length;
        }
        else {
            _14442 = 1;
        }
        // SubProg find_file pc: 561 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14441);
        _14443 = (object)*(((s1_ptr)_2)->base + _14442);
        _14441 = NOVALUE;
        // SubProg find_file pc: 565 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 567 op: FIND_FROM (176)
        _14444 = find_from(_14443, _39SLASH_CHARS_19982, 1);
        _14443 = NOVALUE;
        // SubProg find_file pc: 572 op: IF (20)
        if (_14444 == 0)
        {
            _14444 = NOVALUE;
            goto L1B; // [572] 596
        }
        else{
            _14444 = NOVALUE;
        }
        // SubProg find_file pc: 575 op: STARTLINE (58)

        /** scanner.e:541						errbuff = inc_path[i][1..$-1]  -- looks better*/
        // SubProg find_file pc: 577 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_25608);
        _14445 = (object)*(((s1_ptr)_2)->base + _i_25736);
        // SubProg find_file pc: 581 op: LENGTH (42)
        if (IS_SEQUENCE(_14445)){
                _14446 = SEQ_PTR(_14445)->length;
        }
        else {
            _14446 = 1;
        }
        // SubProg find_file pc: 584 op: MINUS (10)
        _14447 = _14446 - 1;
        _14446 = NOVALUE;
        // SubProg find_file pc: 588 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_errbuff_25604;
        RHS_Slice(_14445, 1, _14447);
        _14445 = NOVALUE;
        // SubProg find_file pc: 593 op: ELSE (23)
        goto L1C; // [593] 605
        // SubProg find_file pc: 595 op: NOP1 (159)
L1B: // addr: 596 pc: 595 sub: 25599 op: 159
        // SubProg find_file pc: 596 op: STARTLINE (58)

        /** scanner.e:543						errbuff = inc_path[i]*/
        // SubProg find_file pc: 598 op: RHS_SUBS_CHECK (92)
        DeRef(_errbuff_25604);
        _2 = (object)SEQ_PTR(_inc_path_25608);
        _errbuff_25604 = (object)*(((s1_ptr)_2)->base + _i_25736);
        Ref(_errbuff_25604);
        // SubProg find_file pc: 602 op: SEQUENCE_CHECK (97)
        // SubProg find_file pc: 604 op: NOP1 (159)
L1C: // addr: 605 pc: 604 sub: 25599 op: 159
        // SubProg find_file pc: 605 op: STARTLINE (58)

        /** scanner.e:545					if not find(errbuff, full_path) then*/
        // SubProg find_file pc: 607 op: FIND_FROM (176)
        _14450 = find_from(_errbuff_25604, _full_path_25603, 1);
        // SubProg find_file pc: 612 op: NOT_IFW (108)
        if (_14450 != 0)
        goto L1D; // [612] 622
        _14450 = NOVALUE;
        // SubProg find_file pc: 615 op: STARTLINE (58)

        /** scanner.e:546						full_path = append(full_path, errbuff)*/
        // SubProg find_file pc: 617 op: APPEND (35)
        RefDS(_errbuff_25604);
        Append(&_full_path_25603, _full_path_25603, _errbuff_25604);
        // SubProg find_file pc: 621 op: NOP1 (159)
L1D: // addr: 622 pc: 621 sub: 25599 op: 159
        // SubProg find_file pc: 622 op: STARTLINE (58)

        /** scanner.e:548				end for*/
        // SubProg find_file pc: 624 op: ENDFOR_INT_UP1 (54)
        _i_25736 = _i_25736 + 1;
        goto L19; // [624] 552
L1A: // addr: 629 pc: 624 sub: 25599 op: 54
        ;
    }
    // SubProg find_file pc: 629 op: NOP1 (159)
L18: // addr: 630 pc: 629 sub: 25599 op: 159
    // SubProg find_file pc: 630 op: NOP1 (159)
L17: // addr: 631 pc: 630 sub: 25599 op: 159
    // SubProg find_file pc: 631 op: STARTLINE (58)

    /** scanner.e:552		if length(get_eudir()) > 0 then*/
    // SubProg find_file pc: 633 op: PROC (27)
    _14453 = _35get_eudir();
    // SubProg find_file pc: 636 op: LENGTH (42)
    if (IS_SEQUENCE(_14453)){
            _14454 = SEQ_PTR(_14453)->length;
    }
    else {
        _14454 = 1;
    }
    DeRef(_14453);
    _14453 = NOVALUE;
    // SubProg find_file pc: 639 op: GREATER_IFW_I (124)
    if (_14454 <= 0)
    goto L1E; // [639] 667
    // SubProg find_file pc: 643 op: STARTLINE (58)

    /** scanner.e:553			if not find(get_eudir(), full_path) then*/
    // SubProg find_file pc: 645 op: PROC (27)
    _14456 = _35get_eudir();
    // SubProg find_file pc: 648 op: FIND_FROM (176)
    _14457 = find_from(_14456, _full_path_25603, 1);
    DeRef(_14456);
    _14456 = NOVALUE;
    // SubProg find_file pc: 653 op: NOT_IFW (108)
    if (_14457 != 0)
    goto L1F; // [653] 666
    _14457 = NOVALUE;
    // SubProg find_file pc: 656 op: STARTLINE (58)

    /** scanner.e:554				full_path = append(full_path, get_eudir())*/
    // SubProg find_file pc: 658 op: PROC (27)
    _14459 = _35get_eudir();
    // SubProg find_file pc: 661 op: APPEND (35)
    Ref(_14459);
    Append(&_full_path_25603, _full_path_25603, _14459);
    DeRef(_14459);
    _14459 = NOVALUE;
    // SubProg find_file pc: 665 op: NOP1 (159)
L1F: // addr: 666 pc: 665 sub: 25599 op: 159
    // SubProg find_file pc: 666 op: NOP1 (159)
L1E: // addr: 667 pc: 666 sub: 25599 op: 159
    // SubProg find_file pc: 667 op: STARTLINE (58)

    /** scanner.e:558		errbuff = ""*/
    // SubProg find_file pc: 669 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_errbuff_25604);
    _errbuff_25604 = _5;
    // SubProg find_file pc: 672 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 674 op: STARTLINE (58)

    /** scanner.e:559		for i = 1 to length(full_path) do*/
    // SubProg find_file pc: 676 op: LENGTH (42)
    if (IS_SEQUENCE(_full_path_25603)){
            _14461 = SEQ_PTR(_full_path_25603)->length;
    }
    else {
        _14461 = 1;
    }
    // SubProg find_file pc: 679 op: FOR_I (125)
    {
        object _i_25768;
        _i_25768 = 1;
L20: // addr: 686 pc: 679 sub: 25599 op: 125
        if (_i_25768 > _14461){
            goto L21; // [679] 711
        }
        // SubProg find_file pc: 686 op: STARTLINE (58)

        /** scanner.e:560			errbuff &= sprintf("\t%s\n", {full_path[i]})*/
        // SubProg find_file pc: 688 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_full_path_25603);
        _14463 = (object)*(((s1_ptr)_2)->base + _i_25768);
        // SubProg find_file pc: 692 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_14463);
        ((intptr_t*)_2)[1] = _14463;
        _14464 = MAKE_SEQ(_1);
        _14463 = NOVALUE;
        // SubProg find_file pc: 696 op: SPRINTF (53)
        _14465 = EPrintf(-9999999, _14462, _14464);
        DeRefDS(_14464);
        _14464 = NOVALUE;
        // SubProg find_file pc: 700 op: CONCAT (15)
        Concat((object_ptr)&_errbuff_25604, _errbuff_25604, _14465);
        DeRefDS(_14465);
        _14465 = NOVALUE;
        // SubProg find_file pc: 704 op: STARTLINE (58)

        /** scanner.e:561		end for*/
        // SubProg find_file pc: 706 op: ENDFOR_INT_UP1 (54)
        _i_25768 = _i_25768 + 1;
        goto L20; // [706] 686
L21: // addr: 711 pc: 706 sub: 25599 op: 54
        ;
    }
    // SubProg find_file pc: 711 op: STARTLINE (58)

    /** scanner.e:563		CompileErr(52, {new_include_name, errbuff})*/
    // SubProg find_file pc: 713 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 715 op: RIGHT_BRACE_2 (85)
    RefDS(_errbuff_25604);
    RefDS(_34new_include_name_15310);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _34new_include_name_15310;
    ((intptr_t *)_2)[2] = _errbuff_25604;
    _14467 = MAKE_SEQ(_1);
    // SubProg find_file pc: 719 op: PROC (27)
    _49CompileErr(52, _14467, 0);
    _14467 = NOVALUE;
    // SubProg find_file pc: 724 op: BADRETURNF (43)
    ;
}


object _61path_open()
{
    object _fh_25780 = NOVALUE;
// skipping _14470  name type: 0
// skipping _14469  name type: 0
// skipping _14468  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg path_open pc: 1 op: STARTLINE (58)

    /** scanner.e:569		new_include_name = find_file(new_include_name)*/
    // SubProg path_open pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 5 op: PROC (27)
    RefDS(_34new_include_name_15310);
    _0 = _61find_file(_34new_include_name_15310);
    DeRefDS(_34new_include_name_15310);
    _34new_include_name_15310 = _0;
    // SubProg path_open pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg path_open pc: 11 op: STARTLINE (58)

    /** scanner.e:570		new_include_name = maybe_preprocess(new_include_name)*/
    // SubProg path_open pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 15 op: PROC (27)
    RefDS(_34new_include_name_15310);
    _0 = _63maybe_preprocess(_34new_include_name_15310);
    DeRefDS(_34new_include_name_15310);
    _34new_include_name_15310 = _0;
    // SubProg path_open pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg path_open pc: 21 op: STARTLINE (58)

    /** scanner.e:572		fh = open_locked(new_include_name)*/
    // SubProg path_open pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 25 op: PROC (27)
    RefDS(_34new_include_name_15310);
    _fh_25780 = _35open_locked(_34new_include_name_15310);
    // SubProg path_open pc: 29 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fh_25780)) {
        _1 = (object)(DBL_PTR(_fh_25780)->dbl);
        DeRefDS(_fh_25780);
        _fh_25780 = _1;
    }
    // SubProg path_open pc: 31 op: STARTLINE (58)

    /** scanner.e:573		return fh*/
    // SubProg path_open pc: 33 op: RETURNF (28)

// Exiting block BLOCK: path_open
    return _fh_25780;
    // SubProg path_open pc: 37 op: BADRETURNF (43)
    ;
}


object _61NameSpace_declaration(object _sym_25804)
{
    object _h_25805 = NOVALUE;
// skipping _14491  name type: 0
// skipping _14490  name type: 0
    object _14489 = NOVALUE; // 25843 14489
// skipping _14488  name type: 0
    object _14487 = NOVALUE; // 25838 14487
// skipping _14486  name type: 0
    object _14485 = NOVALUE; // 25833 14485
// skipping _14484  name type: 0
    object _14483 = NOVALUE; // 25829 14483
    object _14482 = NOVALUE; // 25826 14482
    object _14481 = NOVALUE; // 25824 14481
// skipping _14480  name type: 0
    object _14479 = NOVALUE; // 25819 14479
    object _14478 = NOVALUE; // 25817 14478
    object _14477 = NOVALUE; // 25816 14477
    object _14476 = NOVALUE; // 25811 14476
    object _14475 = NOVALUE; // 25809 14475
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NameSpace_declaration pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25804)) {
        _1 = (object)(DBL_PTR(_sym_25804)->dbl);
        DeRefDS(_sym_25804);
        _sym_25804 = _1;
    }
    // SubProg NameSpace_declaration pc: 3 op: STARTLINE (58)

    /** scanner.e:594		DefinedYet(sym)*/
    // SubProg NameSpace_declaration pc: 5 op: PROC (27)
    _53DefinedYet(_sym_25804);
    // SubProg NameSpace_declaration pc: 8 op: STARTLINE (58)

    /** scanner.e:595		if find(SymTab[sym][S_SCOPE], {SC_GLOBAL, SC_PUBLIC, SC_EXPORT, SC_PREDEF}) then*/
    // SubProg NameSpace_declaration pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _14475 = (object)*(((s1_ptr)_2)->base + _sym_25804);
    // SubProg NameSpace_declaration pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14475);
    _14476 = (object)*(((s1_ptr)_2)->base + 4);
    _14475 = NOVALUE;
    // SubProg NameSpace_declaration pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 30 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 6;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 11;
    ((intptr_t*)_2)[4] = 7;
    _14477 = MAKE_SEQ(_1);
    // SubProg NameSpace_declaration pc: 37 op: FIND_FROM (176)
    _14478 = find_from(_14476, _14477, 1);
    _14476 = NOVALUE;
    DeRefDS(_14477);
    _14477 = NOVALUE;
    // SubProg NameSpace_declaration pc: 42 op: IF (20)
    if (_14478 == 0)
    {
        _14478 = NOVALUE;
        goto L1; // [42] 104
    }
    else{
        _14478 = NOVALUE;
    }
    // SubProg NameSpace_declaration pc: 45 op: STARTLINE (58)

    /** scanner.e:597			h = SymTab[sym][S_HASHVAL]*/
    // SubProg NameSpace_declaration pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _14479 = (object)*(((s1_ptr)_2)->base + _sym_25804);
    // SubProg NameSpace_declaration pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14479);
    _h_25805 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_h_25805)){
        _h_25805 = (object)DBL_PTR(_h_25805)->dbl;
    }
    _14479 = NOVALUE;
    // SubProg NameSpace_declaration pc: 61 op: STARTLINE (58)

    /** scanner.e:599			sym = NewEntry(SymTab[sym][S_NAME], 0, 0, VARIABLE, h, buckets[h], 0)*/
    // SubProg NameSpace_declaration pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _14481 = (object)*(((s1_ptr)_2)->base + _sym_25804);
    // SubProg NameSpace_declaration pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14481);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _14482 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _14482 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _14481 = NOVALUE;
    // SubProg NameSpace_declaration pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _14483 = (object)*(((s1_ptr)_2)->base + _h_25805);
    // SubProg NameSpace_declaration pc: 83 op: PROC (27)
    Ref(_14482);
    Ref(_14483);
    _sym_25804 = _53NewEntry(_14482, 0, 0, -100, _h_25805, _14483, 0);
    _14482 = NOVALUE;
    _14483 = NOVALUE;
    // SubProg NameSpace_declaration pc: 93 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25804)) {
        _1 = (object)(DBL_PTR(_sym_25804)->dbl);
        DeRefDS(_sym_25804);
        _sym_25804 = _1;
    }
    // SubProg NameSpace_declaration pc: 95 op: STARTLINE (58)

    /** scanner.e:600			buckets[h] = sym*/
    // SubProg NameSpace_declaration pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 99 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _2 = (object)(((s1_ptr)_2)->base + _h_25805);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_25804;
    DeRef(_1);
    // SubProg NameSpace_declaration pc: 103 op: NOP1 (159)
L1: // addr: 104 pc: 103 sub: 25801 op: 159
    // SubProg NameSpace_declaration pc: 104 op: STARTLINE (58)

    /** scanner.e:602		SymTab[sym][S_SCOPE] = SC_LOCAL*/
    // SubProg NameSpace_declaration pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 108 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25804 + ((s1_ptr)_2)->base);
    // SubProg NameSpace_declaration pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 117 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    _14485 = NOVALUE;
    // SubProg NameSpace_declaration pc: 121 op: STARTLINE (58)

    /** scanner.e:603		SymTab[sym][S_MODE] = M_CONSTANT*/
    // SubProg NameSpace_declaration pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 125 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25804 + ((s1_ptr)_2)->base);
    // SubProg NameSpace_declaration pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 134 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14487 = NOVALUE;
    // SubProg NameSpace_declaration pc: 138 op: STARTLINE (58)

    /** scanner.e:604		SymTab[sym][S_TOKEN] = NAMESPACE -- [S_OBJ] will get the file number referred-to*/
    // SubProg NameSpace_declaration pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 142 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25804 + ((s1_ptr)_2)->base);
    // SubProg NameSpace_declaration pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 151 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_TOKEN_14848))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 523;
    DeRef(_1);
    _14489 = NOVALUE;
    // SubProg NameSpace_declaration pc: 155 op: STARTLINE (58)

    /** scanner.e:605		if TRANSLATE then*/
    // SubProg NameSpace_declaration pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 159 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L2; // [159] 173
    }
    else{
    }
    // SubProg NameSpace_declaration pc: 162 op: STARTLINE (58)

    /** scanner.e:606			num_routines += 1 -- order of ns declaration relative to routines*/
    // SubProg NameSpace_declaration pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 166 op: PLUS (11)
    _34num_routines_15197 = _34num_routines_15197 + 1;
    // SubProg NameSpace_declaration pc: 172 op: NOP1 (159)
L2: // addr: 173 pc: 172 sub: 25801 op: 159
    // SubProg NameSpace_declaration pc: 173 op: STARTLINE (58)

    /** scanner.e:609		return sym*/
    // SubProg NameSpace_declaration pc: 175 op: RETURNF (28)

// Exiting block BLOCK: NameSpace_declaration

// block var h_25805
    return _sym_25804;
    // SubProg NameSpace_declaration pc: 179 op: BADRETURNF (43)
    ;
}


void _61default_namespace()
{
    object _tok_25855 = NOVALUE;
    object _sym_25857 = NOVALUE;
    object _14513 = NOVALUE; // 25902 14513
    object _14512 = NOVALUE; // 25900 14512
// skipping _14511  name type: 0
    object _14510 = NOVALUE; // 25894 14510
// skipping _14509  name type: 0
    object _14508 = NOVALUE; // 25889 14508
// skipping _14507  name type: 0
// skipping _14506  name type: 0
    object _14505 = NOVALUE; // 25883 14505
// skipping _14504  name type: 0
// skipping _14503  name type: 0
    object _14502 = NOVALUE; // 25876 14502
// skipping _14501  name type: 0
    object _14500 = NOVALUE; // 25872 14500
    object _14498 = NOVALUE; // 25870 14498
    object _14497 = NOVALUE; // 25868 14497
    object _14496 = NOVALUE; // 25867 14496
    object _14495 = NOVALUE; // 25864 14495
    object _14494 = NOVALUE; // 25863 14494
    object _14493 = NOVALUE; // 25861 14493
// skipping _14492  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg default_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:618		tok = call_func( scanner_rid, {} )*/
    // SubProg default_namespace pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 5 op: CALL_FUNC (137)
    _0 = (object)_00[_61scanner_rid_25851].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25855);
    _tok_25855 = _1;
    // SubProg default_namespace pc: 9 op: STARTLINE (58)

    /** scanner.e:619		if tok[T_ID] = VARIABLE and equal( SymTab[tok[T_SYM]][S_NAME], "namespace" ) then*/
    // SubProg default_namespace pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25855);
    _14493 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg default_namespace pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 19 op: EQUALS (3)
    if (IS_ATOM_INT(_14493)) {
        _14494 = (_14493 == -100);
    }
    else {
        _14494 = binary_op(EQUALS, _14493, -100);
    }
    _14493 = NOVALUE;
    // SubProg default_namespace pc: 23 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_14494)) {
        if (_14494 == 0) {
            goto L1; // [23] 177
        }
    }
    else {
        if (DBL_PTR(_14494)->dbl == 0.0) {
            goto L1; // [23] 177
        }
    }
    // SubProg default_namespace pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25855);
    _14496 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg default_namespace pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_14496)){
        _14497 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14496)->dbl));
    }
    else{
        _14497 = (object)*(((s1_ptr)_2)->base + _14496);
    }
    // SubProg default_namespace pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14497);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _14498 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _14498 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _14497 = NOVALUE;
    // SubProg default_namespace pc: 45 op: EQUAL (153)
    if (_14498 == _14499)
    _14500 = 1;
    else if (IS_ATOM_INT(_14498) && IS_ATOM_INT(_14499))
    _14500 = 0;
    else
    _14500 = (compare(_14498, _14499) == 0);
    _14498 = NOVALUE;
    // SubProg default_namespace pc: 49 op: NOP1 (159)
    // SubProg default_namespace pc: 50 op: IF (20)
    if (_14500 == 0)
    {
        _14500 = NOVALUE;
        goto L1; // [50] 177
    }
    else{
        _14500 = NOVALUE;
    }
    // SubProg default_namespace pc: 53 op: STARTLINE (58)

    /** scanner.e:621			tok = call_func( scanner_rid, {} )*/
    // SubProg default_namespace pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 57 op: CALL_FUNC (137)
    _0 = (object)_00[_61scanner_rid_25851].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25855);
    _tok_25855 = _1;
    // SubProg default_namespace pc: 61 op: STARTLINE (58)

    /** scanner.e:622			if tok[T_ID] != VARIABLE then*/
    // SubProg default_namespace pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25855);
    _14502 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg default_namespace pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 71 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _14502, -100)){
        _14502 = NOVALUE;
        goto L2; // [71] 83
    }
    _14502 = NOVALUE;
    // SubProg default_namespace pc: 75 op: STARTLINE (58)

    /** scanner.e:623				CompileErr(114)*/
    // SubProg default_namespace pc: 77 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(114, _21936, 0);
    // SubProg default_namespace pc: 82 op: NOP1 (159)
L2: // addr: 83 pc: 82 sub: 25852 op: 159
    // SubProg default_namespace pc: 83 op: STARTLINE (58)

    /** scanner.e:626			sym = tok[T_SYM]*/
    // SubProg default_namespace pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25855);
    _sym_25857 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_25857)){
        _sym_25857 = (object)DBL_PTR(_sym_25857)->dbl;
    }
    // SubProg default_namespace pc: 93 op: STARTLINE (58)

    /** scanner.e:628			SymTab[sym][S_FILE_NO] = current_file_no*/
    // SubProg default_namespace pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 97 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25857 + ((s1_ptr)_2)->base);
    // SubProg default_namespace pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 106 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_FILE_NO_14839))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34current_file_no_15188;
    DeRef(_1);
    _14505 = NOVALUE;
    // SubProg default_namespace pc: 110 op: STARTLINE (58)

    /** scanner.e:629			sym  = NameSpace_declaration( sym )*/
    // SubProg default_namespace pc: 112 op: PROC (27)
    _sym_25857 = _61NameSpace_declaration(_sym_25857);
    // SubProg default_namespace pc: 116 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25857)) {
        _1 = (object)(DBL_PTR(_sym_25857)->dbl);
        DeRefDS(_sym_25857);
        _sym_25857 = _1;
    }
    // SubProg default_namespace pc: 118 op: STARTLINE (58)

    /** scanner.e:630			SymTab[sym][S_OBJ] = current_file_no*/
    // SubProg default_namespace pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 122 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25857 + ((s1_ptr)_2)->base);
    // SubProg default_namespace pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 131 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34current_file_no_15188;
    DeRef(_1);
    _14508 = NOVALUE;
    // SubProg default_namespace pc: 135 op: STARTLINE (58)

    /** scanner.e:631			SymTab[sym][S_SCOPE] = SC_PUBLIC*/
    // SubProg default_namespace pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 139 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25857 + ((s1_ptr)_2)->base);
    // SubProg default_namespace pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 148 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 13;
    DeRef(_1);
    _14510 = NOVALUE;
    // SubProg default_namespace pc: 152 op: STARTLINE (58)

    /** scanner.e:633			default_namespaces[current_file_no] = SymTab[sym][S_NAME]*/
    // SubProg default_namespace pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 160 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _14512 = (object)*(((s1_ptr)_2)->base + _sym_25857);
    // SubProg default_namespace pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 166 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14512);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _14513 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _14513 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _14512 = NOVALUE;
    // SubProg default_namespace pc: 170 op: ASSIGN_SUBS (16)
    Ref(_14513);
    _2 = (object)SEQ_PTR(_61default_namespaces_25188);
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14513;
    if( _1 != _14513 ){
        DeRef(_1);
    }
    _14513 = NOVALUE;
    // SubProg default_namespace pc: 174 op: ELSE (23)
    goto L3; // [174] 185
    // SubProg default_namespace pc: 176 op: NOP1 (159)
L1: // addr: 177 pc: 176 sub: 25852 op: 159
    // SubProg default_namespace pc: 177 op: STARTLINE (58)

    /** scanner.e:637			bp = 1*/
    // SubProg default_namespace pc: 179 op: ASSIGN (18)
    _49bp_48713 = 1;
    // SubProg default_namespace pc: 182 op: INTEGER_CHECK (96)
    // SubProg default_namespace pc: 184 op: NOP1 (159)
L3: // addr: 185 pc: 184 sub: 25852 op: 159
    // SubProg default_namespace pc: 185 op: STARTLINE (58)

    /** scanner.e:640	end procedure*/
    // SubProg default_namespace pc: 187 op: RETURNP (29)

// Exiting block BLOCK: default_namespace

// block var tok_25855
    DeRef(_tok_25855);

// block var sym_25857
    _14496 = NOVALUE;
    DeRef(_14494);
    _14494 = NOVALUE;
    return;
    // SubProg default_namespace pc: 190 op: BADRETURNF (43)
    ;
}


void _61add_exports(object _from_file_25907, object _to_file_25908)
{
    object _exports_25909 = NOVALUE;
    object _direct_25910 = NOVALUE;
    object _14533 = NOVALUE; // 25939 14533
    object _14532 = NOVALUE; // 25938 14532
    object _14531 = NOVALUE; // 25937 14531
    object _14530 = NOVALUE; // 25936 14530
    object _14529 = NOVALUE; // 25933 14529
// skipping _14528  name type: 0
    object _14527 = NOVALUE; // 25931 14527
// skipping _14526  name type: 0
    object _14525 = NOVALUE; // 25928 14525
    object _14524 = NOVALUE; // 25927 14524
// skipping _14523  name type: 0
    object _14522 = NOVALUE; // 25925 14522
    object _14521 = NOVALUE; // 25924 14521
    object _14520 = NOVALUE; // 25923 14520
// skipping _14519  name type: 0
    object _14518 = NOVALUE; // 25920 14518
    object _14517 = NOVALUE; // 25919 14517
    object _14516 = NOVALUE; // 25917 14516
// skipping _14515  name type: 0
// skipping _14514  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_exports pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_exports pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_exports pc: 5 op: STARTLINE (58)

    /** scanner.e:645		direct = file_include[to_file]*/
    // SubProg add_exports pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 9 op: RHS_SUBS_CHECK (92)
    DeRef(_direct_25910);
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _direct_25910 = (object)*(((s1_ptr)_2)->base + _to_file_25908);
    Ref(_direct_25910);
    // SubProg add_exports pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg add_exports pc: 15 op: STARTLINE (58)

    /** scanner.e:646		exports = file_public[from_file]*/
    // SubProg add_exports pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 19 op: RHS_SUBS_CHECK (92)
    DeRef(_exports_25909);
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _exports_25909 = (object)*(((s1_ptr)_2)->base + _from_file_25907);
    Ref(_exports_25909);
    // SubProg add_exports pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg add_exports pc: 25 op: STARTLINE (58)

    /** scanner.e:647		for i = 1 to length(exports) do*/
    // SubProg add_exports pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_exports_25909)){
            _14516 = SEQ_PTR(_exports_25909)->length;
    }
    else {
        _14516 = 1;
    }
    // SubProg add_exports pc: 30 op: FOR_I (125)
    {
        object _i_25916;
        _i_25916 = 1;
L1: // addr: 37 pc: 30 sub: 25905 op: 125
        if (_i_25916 > _14516){
            goto L2; // [30] 127
        }
        // SubProg add_exports pc: 37 op: STARTLINE (58)

        /** scanner.e:648			if not find( exports[i], direct ) then*/
        // SubProg add_exports pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25909);
        _14517 = (object)*(((s1_ptr)_2)->base + _i_25916);
        // SubProg add_exports pc: 43 op: FIND_FROM (176)
        _14518 = find_from(_14517, _direct_25910, 1);
        _14517 = NOVALUE;
        // SubProg add_exports pc: 48 op: NOT_IFW (108)
        if (_14518 != 0)
        goto L3; // [48] 120
        _14518 = NOVALUE;
        // SubProg add_exports pc: 51 op: STARTLINE (58)

        /** scanner.e:649				if not find( -exports[i], direct ) then*/
        // SubProg add_exports pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25909);
        _14520 = (object)*(((s1_ptr)_2)->base + _i_25916);
        // SubProg add_exports pc: 57 op: UMINUS (12)
        if (IS_ATOM_INT(_14520)) {
            if ((uintptr_t)_14520 == (uintptr_t)HIGH_BITS){
                _14521 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14521 = - _14520;
            }
        }
        else {
            _14521 = unary_op(UMINUS, _14520);
        }
        _14520 = NOVALUE;
        // SubProg add_exports pc: 60 op: FIND_FROM (176)
        _14522 = find_from(_14521, _direct_25910, 1);
        DeRef(_14521);
        _14521 = NOVALUE;
        // SubProg add_exports pc: 65 op: NOT_IFW (108)
        if (_14522 != 0)
        goto L4; // [65] 82
        _14522 = NOVALUE;
        // SubProg add_exports pc: 68 op: STARTLINE (58)

        /** scanner.e:650					direct &= -exports[i]*/
        // SubProg add_exports pc: 70 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25909);
        _14524 = (object)*(((s1_ptr)_2)->base + _i_25916);
        // SubProg add_exports pc: 74 op: UMINUS (12)
        if (IS_ATOM_INT(_14524)) {
            if ((uintptr_t)_14524 == (uintptr_t)HIGH_BITS){
                _14525 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14525 = - _14524;
            }
        }
        else {
            _14525 = unary_op(UMINUS, _14524);
        }
        _14524 = NOVALUE;
        // SubProg add_exports pc: 77 op: CONCAT (15)
        if (IS_SEQUENCE(_direct_25910) && IS_ATOM(_14525)) {
            Ref(_14525);
            Append(&_direct_25910, _direct_25910, _14525);
        }
        else if (IS_ATOM(_direct_25910) && IS_SEQUENCE(_14525)) {
        }
        else {
            Concat((object_ptr)&_direct_25910, _direct_25910, _14525);
        }
        DeRef(_14525);
        _14525 = NOVALUE;
        // SubProg add_exports pc: 81 op: NOP1 (159)
L4: // addr: 82 pc: 81 sub: 25905 op: 159
        // SubProg add_exports pc: 82 op: STARTLINE (58)

        /** scanner.e:654				include_matrix[to_file][exports[i]] = or_bits( PUBLIC_INCLUDE, include_matrix[to_file][exports[i]] )*/
        // SubProg add_exports pc: 84 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 86 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35include_matrix_14163 = MAKE_SEQ(_2);
        }
        _3 = (object)(_to_file_25908 + ((s1_ptr)_2)->base);
        // SubProg add_exports pc: 91 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25909);
        _14529 = (object)*(((s1_ptr)_2)->base + _i_25916);
        // SubProg add_exports pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 99 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _14530 = (object)*(((s1_ptr)_2)->base + _to_file_25908);
        // SubProg add_exports pc: 103 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25909);
        _14531 = (object)*(((s1_ptr)_2)->base + _i_25916);
        // SubProg add_exports pc: 107 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14530);
        if (!IS_ATOM_INT(_14531)){
            _14532 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14531)->dbl));
        }
        else{
            _14532 = (object)*(((s1_ptr)_2)->base + _14531);
        }
        _14530 = NOVALUE;
        // SubProg add_exports pc: 111 op: OR_BITS (24)
        if (IS_ATOM_INT(_14532)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14532;
                 _14533 = MAKE_UINT(tu);
            }
        }
        else {
            _14533 = binary_op(OR_BITS, 4, _14532);
        }
        _14532 = NOVALUE;
        // SubProg add_exports pc: 115 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14529))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14529)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _14529);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14533;
        if( _1 != _14533 ){
            DeRef(_1);
        }
        _14533 = NOVALUE;
        _14527 = NOVALUE;
        // SubProg add_exports pc: 119 op: NOP1 (159)
L3: // addr: 120 pc: 119 sub: 25905 op: 159
        // SubProg add_exports pc: 120 op: STARTLINE (58)

        /** scanner.e:656		end for*/
        // SubProg add_exports pc: 122 op: ENDFOR_INT_UP1 (54)
        _i_25916 = _i_25916 + 1;
        goto L1; // [122] 37
L2: // addr: 127 pc: 122 sub: 25905 op: 54
        ;
    }
    // SubProg add_exports pc: 127 op: STARTLINE (58)

    /** scanner.e:657		file_include[to_file] = direct*/
    // SubProg add_exports pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 131 op: ASSIGN_SUBS (16)
    RefDS(_direct_25910);
    _2 = (object)SEQ_PTR(_35file_include_14161);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35file_include_14161 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _to_file_25908);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _direct_25910;
    DeRef(_1);
    // SubProg add_exports pc: 135 op: STARTLINE (58)

    /** scanner.e:658	end procedure*/
    // SubProg add_exports pc: 137 op: RETURNP (29)

// Exiting block BLOCK: add_exports

// block var from_file_25907

// block var to_file_25908

// block var exports_25909
    DeRef(_exports_25909);

// block var direct_25910
    DeRefDS(_direct_25910);
    _14531 = NOVALUE;
    _14529 = NOVALUE;
    return;
    // SubProg add_exports pc: 140 op: BADRETURNF (43)
    ;
}


void _61patch_exports(object _for_file_25943)
{
    object _export_len_25944 = NOVALUE;
// skipping _14545  name type: 0
    object _14544 = NOVALUE; // 25964 14544
    object _14543 = NOVALUE; // 25963 14543
// skipping _14542  name type: 0
    object _14541 = NOVALUE; // 25959 14541
    object _14540 = NOVALUE; // 25957 14540
    object _14539 = NOVALUE; // 25956 14539
    object _14538 = NOVALUE; // 25954 14538
// skipping _14537  name type: 0
    object _14536 = NOVALUE; // 25952 14536
    object _14535 = NOVALUE; // 25951 14535
    object _14534 = NOVALUE; // 25948 14534
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_exports pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_exports pc: 3 op: STARTLINE (58)

    /** scanner.e:663		for i = 1 to length(file_include) do*/
    // SubProg patch_exports pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_exports pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_include_14161)){
            _14534 = SEQ_PTR(_35file_include_14161)->length;
    }
    else {
        _14534 = 1;
    }
    // SubProg patch_exports pc: 10 op: FOR_I (125)
    {
        object _i_25946;
        _i_25946 = 1;
L1: // addr: 17 pc: 10 sub: 25941 op: 125
        if (_i_25946 > _14534){
            goto L2; // [10] 99
        }
        // SubProg patch_exports pc: 17 op: STARTLINE (58)

        /** scanner.e:664			if find( for_file, file_include[i] ) or find( -for_file, file_include[i] ) then*/
        // SubProg patch_exports pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_14161);
        _14535 = (object)*(((s1_ptr)_2)->base + _i_25946);
        // SubProg patch_exports pc: 25 op: FIND_FROM (176)
        _14536 = find_from(_for_file_25943, _14535, 1);
        _14535 = NOVALUE;
        // SubProg patch_exports pc: 30 op: SC1_OR_IF (147)
        if (_14536 != 0) {
            goto L3; // [30] 53
        }
        // SubProg patch_exports pc: 34 op: UMINUS (12)
        if ((uintptr_t)_for_file_25943 == (uintptr_t)HIGH_BITS){
            _14538 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _14538 = - _for_file_25943;
        }
        // SubProg patch_exports pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_14161);
        _14539 = (object)*(((s1_ptr)_2)->base + _i_25946);
        // SubProg patch_exports pc: 43 op: FIND_FROM (176)
        _14540 = find_from(_14538, _14539, 1);
        DeRef(_14538);
        _14538 = NOVALUE;
        _14539 = NOVALUE;
        // SubProg patch_exports pc: 48 op: NOP1 (159)
        // SubProg patch_exports pc: 49 op: IF (20)
        if (_14540 == 0)
        {
            _14540 = NOVALUE;
            goto L4; // [49] 92
        }
        else{
            _14540 = NOVALUE;
        }
        // SubProg patch_exports pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 25941 op: 159
        // SubProg patch_exports pc: 53 op: STARTLINE (58)

        /** scanner.e:665				export_len = length( file_include[i] )*/
        // SubProg patch_exports pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_14161);
        _14541 = (object)*(((s1_ptr)_2)->base + _i_25946);
        // SubProg patch_exports pc: 61 op: LENGTH (42)
        if (IS_SEQUENCE(_14541)){
                _export_len_25944 = SEQ_PTR(_14541)->length;
        }
        else {
            _export_len_25944 = 1;
        }
        _14541 = NOVALUE;
        // SubProg patch_exports pc: 64 op: STARTLINE (58)

        /** scanner.e:666				add_exports( for_file, i )*/
        // SubProg patch_exports pc: 66 op: PROC (27)
        _61add_exports(_for_file_25943, _i_25946);
        // SubProg patch_exports pc: 70 op: STARTLINE (58)

        /** scanner.e:667				if length( file_include[i] ) != export_len then*/
        // SubProg patch_exports pc: 72 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 74 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_14161);
        _14543 = (object)*(((s1_ptr)_2)->base + _i_25946);
        // SubProg patch_exports pc: 78 op: LENGTH (42)
        if (IS_SEQUENCE(_14543)){
                _14544 = SEQ_PTR(_14543)->length;
        }
        else {
            _14544 = 1;
        }
        _14543 = NOVALUE;
        // SubProg patch_exports pc: 81 op: NOTEQ_IFW_I (122)
        if (_14544 == _export_len_25944)
        goto L5; // [81] 91
        // SubProg patch_exports pc: 85 op: STARTLINE (58)

        /** scanner.e:669					patch_exports( i )*/
        // SubProg patch_exports pc: 87 op: PROC (27)
        _61patch_exports(_i_25946);
        // SubProg patch_exports pc: 90 op: NOP1 (159)
L5: // addr: 91 pc: 90 sub: 25941 op: 159
        // SubProg patch_exports pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 25941 op: 159
        // SubProg patch_exports pc: 92 op: STARTLINE (58)

        /** scanner.e:672		end for*/
        // SubProg patch_exports pc: 94 op: ENDFOR_INT_UP1 (54)
        _i_25946 = _i_25946 + 1;
        goto L1; // [94] 17
L2: // addr: 99 pc: 94 sub: 25941 op: 54
        ;
    }
    // SubProg patch_exports pc: 99 op: STARTLINE (58)

    /** scanner.e:673	end procedure*/
    // SubProg patch_exports pc: 101 op: RETURNP (29)

// Exiting block BLOCK: patch_exports

// block var for_file_25943

// block var export_len_25944
    _14543 = NOVALUE;
    _14541 = NOVALUE;
    return;
    // SubProg patch_exports pc: 104 op: BADRETURNF (43)
    ;
}


void _61update_include_matrix(object _included_file_25968, object _from_file_25969)
{
    object _add_public_25979 = NOVALUE;
    object _px_25997 = NOVALUE;
    object _indirect_26056 = NOVALUE;
    object _mask_26059 = NOVALUE;
    object _ix_26070 = NOVALUE;
    object _indirect_file_26074 = NOVALUE;
// skipping _14622  name type: 0
// skipping _14621  name type: 0
    object _14620 = NOVALUE; // 26097 14620
    object _14619 = NOVALUE; // 26096 14619
// skipping _14618  name type: 0
    object _14617 = NOVALUE; // 26093 14617
    object _14616 = NOVALUE; // 26092 14616
    object _14615 = NOVALUE; // 26091 14615
    object _14614 = NOVALUE; // 26088 14614
    object _14613 = NOVALUE; // 26087 14613
    object _14612 = NOVALUE; // 26083 14612
    object _14611 = NOVALUE; // 26082 14611
    object _14610 = NOVALUE; // 26079 14610
    object _14609 = NOVALUE; // 26078 14609
// skipping _14608  name type: 0
// skipping _14607  name type: 0
    object _14606 = NOVALUE; // 26072 14606
// skipping _14605  name type: 0
    object _14604 = NOVALUE; // 26068 14604
    object _14603 = NOVALUE; // 26066 14603
    object _14602 = NOVALUE; // 26065 14602
// skipping _14601  name type: 0
    object _14600 = NOVALUE; // 26061 14600
// skipping _14599  name type: 0
    object _14598 = NOVALUE; // 26055 14598
    object _14597 = NOVALUE; // 26054 14597
// skipping _14596  name type: 0
    object _14595 = NOVALUE; // 26050 14595
    object _14594 = NOVALUE; // 26049 14594
    object _14593 = NOVALUE; // 26048 14593
    object _14592 = NOVALUE; // 26047 14592
    object _14591 = NOVALUE; // 26046 14591
// skipping _14590  name type: 0
    object _14589 = NOVALUE; // 26041 14589
    object _14588 = NOVALUE; // 26040 14588
    object _14587 = NOVALUE; // 26039 14587
    object _14586 = NOVALUE; // 26036 14586
    object _14585 = NOVALUE; // 26035 14585
    object _14584 = NOVALUE; // 26034 14584
// skipping _14583  name type: 0
    object _14582 = NOVALUE; // 26029 14582
    object _14581 = NOVALUE; // 26028 14581
    object _14580 = NOVALUE; // 26027 14580
// skipping _14579  name type: 0
    object _14578 = NOVALUE; // 26024 14578
    object _14577 = NOVALUE; // 26023 14577
    object _14576 = NOVALUE; // 26022 14576
    object _14575 = NOVALUE; // 26021 14575
    object _14574 = NOVALUE; // 26018 14574
    object _14573 = NOVALUE; // 26017 14573
    object _14572 = NOVALUE; // 26016 14572
    object _14571 = NOVALUE; // 26012 14571
    object _14570 = NOVALUE; // 26011 14570
    object _14569 = NOVALUE; // 26010 14569
    object _14568 = NOVALUE; // 26009 14568
// skipping _14567  name type: 0
    object _14566 = NOVALUE; // 26005 14566
    object _14565 = NOVALUE; // 26004 14565
// skipping _14564  name type: 0
    object _14563 = NOVALUE; // 26001 14563
// skipping _14562  name type: 0
    object _14561 = NOVALUE; // 25998 14561
// skipping _14560  name type: 0
    object _14559 = NOVALUE; // 25994 14559
    object _14558 = NOVALUE; // 25993 14558
    object _14557 = NOVALUE; // 25992 14557
    object _14556 = NOVALUE; // 25991 14556
// skipping _14555  name type: 0
    object _14554 = NOVALUE; // 25987 14554
    object _14553 = NOVALUE; // 25986 14553
    object _14552 = NOVALUE; // 25984 14552
// skipping _14551  name type: 0
    object _14550 = NOVALUE; // 25977 14550
    object _14549 = NOVALUE; // 25976 14549
    object _14548 = NOVALUE; // 25975 14548
// skipping _14547  name type: 0
    object _14546 = NOVALUE; // 25971 14546
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg update_include_matrix pc: 1 op: INTEGER_CHECK (96)
    // SubProg update_include_matrix pc: 3 op: INTEGER_CHECK (96)
    // SubProg update_include_matrix pc: 5 op: STARTLINE (58)

    /** scanner.e:684		include_matrix[from_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[from_file][included_file] )*/
    // SubProg update_include_matrix pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 9 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    _3 = (object)(_from_file_25969 + ((s1_ptr)_2)->base);
    // SubProg update_include_matrix pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14548 = (object)*(((s1_ptr)_2)->base + _from_file_25969);
    // SubProg update_include_matrix pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14548);
    _14549 = (object)*(((s1_ptr)_2)->base + _included_file_25968);
    _14548 = NOVALUE;
    // SubProg update_include_matrix pc: 26 op: OR_BITS (24)
    if (IS_ATOM_INT(_14549)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14549;
             _14550 = MAKE_UINT(tu);
        }
    }
    else {
        _14550 = binary_op(OR_BITS, 2, _14549);
    }
    _14549 = NOVALUE;
    // SubProg update_include_matrix pc: 30 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25968);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14550;
    if( _1 != _14550 ){
        DeRef(_1);
    }
    _14550 = NOVALUE;
    _14546 = NOVALUE;
    // SubProg update_include_matrix pc: 34 op: STARTLINE (58)

    /** scanner.e:686		if public_include then*/
    // SubProg update_include_matrix pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 38 op: IF (20)
    if (_61public_include_25185 == 0)
    {
        goto L1; // [38] 339
    }
    else{
    }
    // SubProg update_include_matrix pc: 41 op: STARTLINE (58)

    /** scanner.e:689			sequence add_public = file_include_by[from_file]*/
    // SubProg update_include_matrix pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_add_public_25979);
    _2 = (object)SEQ_PTR(_35file_include_by_14169);
    _add_public_25979 = (object)*(((s1_ptr)_2)->base + _from_file_25969);
    Ref(_add_public_25979);
    // SubProg update_include_matrix pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 51 op: STARTLINE (58)

    /** scanner.e:690			for i = 1 to length( add_public ) do*/
    // SubProg update_include_matrix pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_25979)){
            _14552 = SEQ_PTR(_add_public_25979)->length;
    }
    else {
        _14552 = 1;
    }
    // SubProg update_include_matrix pc: 56 op: FOR_I (125)
    {
        object _i_25983;
        _i_25983 = 1;
L2: // addr: 63 pc: 56 sub: 25966 op: 125
        if (_i_25983 > _14552){
            goto L3; // [56] 107
        }
        // SubProg update_include_matrix pc: 63 op: STARTLINE (58)

        /** scanner.e:692				include_matrix[add_public[i]][included_file] =*/
        // SubProg update_include_matrix pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 67 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25979);
        _14553 = (object)*(((s1_ptr)_2)->base + _i_25983);
        // SubProg update_include_matrix pc: 71 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35include_matrix_14163 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14553))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14553)->dbl));
        else
        _3 = (object)(_14553 + ((s1_ptr)_2)->base);
        // SubProg update_include_matrix pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 78 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 80 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25979);
        _14556 = (object)*(((s1_ptr)_2)->base + _i_25983);
        // SubProg update_include_matrix pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!IS_ATOM_INT(_14556)){
            _14557 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14556)->dbl));
        }
        else{
            _14557 = (object)*(((s1_ptr)_2)->base + _14556);
        }
        // SubProg update_include_matrix pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14557);
        _14558 = (object)*(((s1_ptr)_2)->base + _included_file_25968);
        _14557 = NOVALUE;
        // SubProg update_include_matrix pc: 92 op: OR_BITS (24)
        if (IS_ATOM_INT(_14558)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14558;
                 _14559 = MAKE_UINT(tu);
            }
        }
        else {
            _14559 = binary_op(OR_BITS, 4, _14558);
        }
        _14558 = NOVALUE;
        // SubProg update_include_matrix pc: 96 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25968);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14559;
        if( _1 != _14559 ){
            DeRef(_1);
        }
        _14559 = NOVALUE;
        _14554 = NOVALUE;
        // SubProg update_include_matrix pc: 100 op: STARTLINE (58)

        /** scanner.e:695			end for*/
        // SubProg update_include_matrix pc: 102 op: ENDFOR_INT_UP1 (54)
        _i_25983 = _i_25983 + 1;
        goto L2; // [102] 63
L3: // addr: 107 pc: 102 sub: 25966 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 107 op: STARTLINE (58)

    /** scanner.e:698			add_public = file_public_by[from_file]*/
    // SubProg update_include_matrix pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 111 op: RHS_SUBS_CHECK (92)
    DeRef(_add_public_25979);
    _2 = (object)SEQ_PTR(_35file_public_by_14171);
    _add_public_25979 = (object)*(((s1_ptr)_2)->base + _from_file_25969);
    Ref(_add_public_25979);
    // SubProg update_include_matrix pc: 115 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 117 op: STARTLINE (58)

    /** scanner.e:699			integer px = length( add_public ) + 1*/
    // SubProg update_include_matrix pc: 119 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_25979)){
            _14561 = SEQ_PTR(_add_public_25979)->length;
    }
    else {
        _14561 = 1;
    }
    // SubProg update_include_matrix pc: 122 op: PLUS1_I (117)
    _px_25997 = _14561 + 1;
    _14561 = NOVALUE;
    // SubProg update_include_matrix pc: 126 op: STARTLINE (58)

    /** scanner.e:700			while px <= length( add_public ) do*/
    // SubProg update_include_matrix pc: 128 op: NOP2 (110)
    // SubProg update_include_matrix pc: 130 op: NOPWHILE (158)
L4: // addr: 131 pc: 130 sub: 25966 op: 158
    // SubProg update_include_matrix pc: 131 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_25979)){
            _14563 = SEQ_PTR(_add_public_25979)->length;
    }
    else {
        _14563 = 1;
    }
    // SubProg update_include_matrix pc: 134 op: LESSEQ_IFW_I (123)
    if (_px_25997 > _14563)
    goto L5; // [134] 338
    // SubProg update_include_matrix pc: 138 op: STARTLINE (58)

    /** scanner.e:701				include_matrix[add_public[px]][included_file] =*/
    // SubProg update_include_matrix pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 142 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25979);
    _14565 = (object)*(((s1_ptr)_2)->base + _px_25997);
    // SubProg update_include_matrix pc: 146 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14565))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14565)->dbl));
    else
    _3 = (object)(_14565 + ((s1_ptr)_2)->base);
    // SubProg update_include_matrix pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 155 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25979);
    _14568 = (object)*(((s1_ptr)_2)->base + _px_25997);
    // SubProg update_include_matrix pc: 159 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!IS_ATOM_INT(_14568)){
        _14569 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14568)->dbl));
    }
    else{
        _14569 = (object)*(((s1_ptr)_2)->base + _14568);
    }
    // SubProg update_include_matrix pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14569);
    _14570 = (object)*(((s1_ptr)_2)->base + _included_file_25968);
    _14569 = NOVALUE;
    // SubProg update_include_matrix pc: 167 op: OR_BITS (24)
    if (IS_ATOM_INT(_14570)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14570;
             _14571 = MAKE_UINT(tu);
        }
    }
    else {
        _14571 = binary_op(OR_BITS, 4, _14570);
    }
    _14570 = NOVALUE;
    // SubProg update_include_matrix pc: 171 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25968);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14571;
    if( _1 != _14571 ){
        DeRef(_1);
    }
    _14571 = NOVALUE;
    _14566 = NOVALUE;
    // SubProg update_include_matrix pc: 175 op: STARTLINE (58)

    /** scanner.e:704				for i = 1 to length( file_public_by[add_public[px]] ) do*/
    // SubProg update_include_matrix pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25979);
    _14572 = (object)*(((s1_ptr)_2)->base + _px_25997);
    // SubProg update_include_matrix pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_public_by_14171);
    if (!IS_ATOM_INT(_14572)){
        _14573 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14572)->dbl));
    }
    else{
        _14573 = (object)*(((s1_ptr)_2)->base + _14572);
    }
    // SubProg update_include_matrix pc: 187 op: LENGTH (42)
    if (IS_SEQUENCE(_14573)){
            _14574 = SEQ_PTR(_14573)->length;
    }
    else {
        _14574 = 1;
    }
    _14573 = NOVALUE;
    // SubProg update_include_matrix pc: 190 op: FOR_I (125)
    {
        object _i_26014;
        _i_26014 = 1;
L6: // addr: 197 pc: 190 sub: 25966 op: 125
        if (_i_26014 > _14574){
            goto L7; // [190] 249
        }
        // SubProg update_include_matrix pc: 197 op: STARTLINE (58)

        /** scanner.e:705					if not find( file_public[add_public[px]][i], add_public ) then*/
        // SubProg update_include_matrix pc: 199 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 201 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25979);
        _14575 = (object)*(((s1_ptr)_2)->base + _px_25997);
        // SubProg update_include_matrix pc: 205 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_public_14167);
        if (!IS_ATOM_INT(_14575)){
            _14576 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14575)->dbl));
        }
        else{
            _14576 = (object)*(((s1_ptr)_2)->base + _14575);
        }
        // SubProg update_include_matrix pc: 209 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14576);
        _14577 = (object)*(((s1_ptr)_2)->base + _i_26014);
        _14576 = NOVALUE;
        // SubProg update_include_matrix pc: 213 op: FIND_FROM (176)
        _14578 = find_from(_14577, _add_public_25979, 1);
        _14577 = NOVALUE;
        // SubProg update_include_matrix pc: 218 op: NOT_IFW (108)
        if (_14578 != 0)
        goto L8; // [218] 242
        _14578 = NOVALUE;
        // SubProg update_include_matrix pc: 221 op: STARTLINE (58)

        /** scanner.e:706						add_public &= file_public[add_public[px]][i]*/
        // SubProg update_include_matrix pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 225 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25979);
        _14580 = (object)*(((s1_ptr)_2)->base + _px_25997);
        // SubProg update_include_matrix pc: 229 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_public_14167);
        if (!IS_ATOM_INT(_14580)){
            _14581 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14580)->dbl));
        }
        else{
            _14581 = (object)*(((s1_ptr)_2)->base + _14580);
        }
        // SubProg update_include_matrix pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14581);
        _14582 = (object)*(((s1_ptr)_2)->base + _i_26014);
        _14581 = NOVALUE;
        // SubProg update_include_matrix pc: 237 op: CONCAT (15)
        if (IS_SEQUENCE(_add_public_25979) && IS_ATOM(_14582)) {
            Ref(_14582);
            Append(&_add_public_25979, _add_public_25979, _14582);
        }
        else if (IS_ATOM(_add_public_25979) && IS_SEQUENCE(_14582)) {
        }
        else {
            Concat((object_ptr)&_add_public_25979, _add_public_25979, _14582);
        }
        _14582 = NOVALUE;
        // SubProg update_include_matrix pc: 241 op: NOP1 (159)
L8: // addr: 242 pc: 241 sub: 25966 op: 159
        // SubProg update_include_matrix pc: 242 op: STARTLINE (58)

        /** scanner.e:708				end for*/
        // SubProg update_include_matrix pc: 244 op: ENDFOR_INT_UP1 (54)
        _i_26014 = _i_26014 + 1;
        goto L6; // [244] 197
L7: // addr: 249 pc: 244 sub: 25966 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 249 op: STARTLINE (58)

    /** scanner.e:710				for i = 1 to length( file_include_by[add_public[px]] ) do*/
    // SubProg update_include_matrix pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 253 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25979);
    _14584 = (object)*(((s1_ptr)_2)->base + _px_25997);
    // SubProg update_include_matrix pc: 257 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_by_14169);
    if (!IS_ATOM_INT(_14584)){
        _14585 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14584)->dbl));
    }
    else{
        _14585 = (object)*(((s1_ptr)_2)->base + _14584);
    }
    // SubProg update_include_matrix pc: 261 op: LENGTH (42)
    if (IS_SEQUENCE(_14585)){
            _14586 = SEQ_PTR(_14585)->length;
    }
    else {
        _14586 = 1;
    }
    _14585 = NOVALUE;
    // SubProg update_include_matrix pc: 264 op: FOR_I (125)
    {
        object _i_26032;
        _i_26032 = 1;
L9: // addr: 271 pc: 264 sub: 25966 op: 125
        if (_i_26032 > _14586){
            goto LA; // [264] 327
        }
        // SubProg update_include_matrix pc: 271 op: STARTLINE (58)

        /** scanner.e:711					include_matrix[file_include_by[add_public[px]]][included_file] =*/
        // SubProg update_include_matrix pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 275 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 277 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25979);
        _14587 = (object)*(((s1_ptr)_2)->base + _px_25997);
        // SubProg update_include_matrix pc: 281 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_by_14169);
        if (!IS_ATOM_INT(_14587)){
            _14588 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14587)->dbl));
        }
        else{
            _14588 = (object)*(((s1_ptr)_2)->base + _14587);
        }
        // SubProg update_include_matrix pc: 285 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35include_matrix_14163 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14588))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14588)->dbl));
        else
        _3 = (object)(_14588 + ((s1_ptr)_2)->base);
        // SubProg update_include_matrix pc: 290 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 294 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 296 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25979);
        _14591 = (object)*(((s1_ptr)_2)->base + _px_25997);
        // SubProg update_include_matrix pc: 300 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_by_14169);
        if (!IS_ATOM_INT(_14591)){
            _14592 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14591)->dbl));
        }
        else{
            _14592 = (object)*(((s1_ptr)_2)->base + _14591);
        }
        // SubProg update_include_matrix pc: 304 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!IS_ATOM_INT(_14592)){
            _14593 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14592)->dbl));
        }
        else{
            _14593 = (object)*(((s1_ptr)_2)->base + _14592);
        }
        // SubProg update_include_matrix pc: 308 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14593);
        _14594 = (object)*(((s1_ptr)_2)->base + _included_file_25968);
        _14593 = NOVALUE;
        // SubProg update_include_matrix pc: 312 op: OR_BITS (24)
        if (IS_ATOM_INT(_14594)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14594;
                 _14595 = MAKE_UINT(tu);
            }
        }
        else {
            _14595 = binary_op(OR_BITS, 4, _14594);
        }
        _14594 = NOVALUE;
        // SubProg update_include_matrix pc: 316 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25968);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14595;
        if( _1 != _14595 ){
            DeRef(_1);
        }
        _14595 = NOVALUE;
        _14589 = NOVALUE;
        // SubProg update_include_matrix pc: 320 op: STARTLINE (58)

        /** scanner.e:713				end for*/
        // SubProg update_include_matrix pc: 322 op: ENDFOR_INT_UP1 (54)
        _i_26032 = _i_26032 + 1;
        goto L9; // [322] 271
LA: // addr: 327 pc: 322 sub: 25966 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 327 op: STARTLINE (58)

    /** scanner.e:715				px += 1*/
    // SubProg update_include_matrix pc: 329 op: PLUS1_I (117)
    _px_25997 = _px_25997 + 1;
    // SubProg update_include_matrix pc: 333 op: STARTLINE (58)

    /** scanner.e:716			end while*/
    // SubProg update_include_matrix pc: 335 op: ENDWHILE (22)
    goto L4; // [335] 131
    // SubProg update_include_matrix pc: 337 op: NOP1 (159)
L5: // addr: 338 pc: 337 sub: 25966 op: 159
    // SubProg update_include_matrix pc: 338 op: NOP1 (159)
L1: // addr: 339 pc: 338 sub: 25966 op: 159
    // SubProg update_include_matrix pc: 339 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var add_public_25979
    DeRef(_add_public_25979);
    _add_public_25979 = NOVALUE;

// block var px_25997
    // SubProg update_include_matrix pc: 341 op: STARTLINE (58)

    /** scanner.e:721		if indirect_include[from_file][included_file] then*/
    // SubProg update_include_matrix pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 345 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35indirect_include_14165);
    _14597 = (object)*(((s1_ptr)_2)->base + _from_file_25969);
    // SubProg update_include_matrix pc: 349 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14597);
    _14598 = (object)*(((s1_ptr)_2)->base + _included_file_25968);
    _14597 = NOVALUE;
    // SubProg update_include_matrix pc: 353 op: IF (20)
    if (_14598 == 0) {
        _14598 = NOVALUE;
        goto LB; // [353] 545
    }
    else {
        if (!IS_ATOM_INT(_14598) && DBL_PTR(_14598)->dbl == 0.0){
            _14598 = NOVALUE;
            goto LB; // [353] 545
        }
        _14598 = NOVALUE;
    }
    _14598 = NOVALUE;
    // SubProg update_include_matrix pc: 356 op: STARTLINE (58)

    /** scanner.e:723			sequence indirect = file_include_by[from_file]*/
    // SubProg update_include_matrix pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 360 op: RHS_SUBS_CHECK (92)
    DeRef(_indirect_26056);
    _2 = (object)SEQ_PTR(_35file_include_by_14169);
    _indirect_26056 = (object)*(((s1_ptr)_2)->base + _from_file_25969);
    Ref(_indirect_26056);
    // SubProg update_include_matrix pc: 364 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 366 op: STARTLINE (58)

    /** scanner.e:725			sequence mask = include_matrix[included_file] != 0*/
    // SubProg update_include_matrix pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 370 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14600 = (object)*(((s1_ptr)_2)->base + _included_file_25968);
    // SubProg update_include_matrix pc: 374 op: NOTEQ (4)
    DeRef(_mask_26059);
    if (IS_ATOM_INT(_14600)) {
        _mask_26059 = (_14600 != 0);
    }
    else {
        _mask_26059 = binary_op(NOTEQ, _14600, 0);
    }
    _14600 = NOVALUE;
    // SubProg update_include_matrix pc: 378 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 380 op: STARTLINE (58)

    /** scanner.e:726			include_matrix[from_file] = or_bits( include_matrix[from_file], mask )*/
    // SubProg update_include_matrix pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 386 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14602 = (object)*(((s1_ptr)_2)->base + _from_file_25969);
    // SubProg update_include_matrix pc: 390 op: OR_BITS (24)
    _14603 = binary_op(OR_BITS, _14602, _mask_26059);
    _14602 = NOVALUE;
    // SubProg update_include_matrix pc: 394 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _from_file_25969);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14603;
    if( _1 != _14603 ){
        DeRef(_1);
    }
    _14603 = NOVALUE;
    // SubProg update_include_matrix pc: 398 op: STARTLINE (58)

    /** scanner.e:727			mask = include_matrix[from_file] != 0*/
    // SubProg update_include_matrix pc: 400 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 402 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14604 = (object)*(((s1_ptr)_2)->base + _from_file_25969);
    // SubProg update_include_matrix pc: 406 op: NOTEQ (4)
    DeRefDS(_mask_26059);
    if (IS_ATOM_INT(_14604)) {
        _mask_26059 = (_14604 != 0);
    }
    else {
        _mask_26059 = binary_op(NOTEQ, _14604, 0);
    }
    _14604 = NOVALUE;
    // SubProg update_include_matrix pc: 410 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 412 op: STARTLINE (58)

    /** scanner.e:728			integer ix = 1*/
    // SubProg update_include_matrix pc: 414 op: ASSIGN_I (113)
    _ix_26070 = 1;
    // SubProg update_include_matrix pc: 417 op: STARTLINE (58)

    /** scanner.e:729			while ix <= length(indirect) do*/
    // SubProg update_include_matrix pc: 419 op: NOP2 (110)
    // SubProg update_include_matrix pc: 421 op: NOPWHILE (158)
LC: // addr: 422 pc: 421 sub: 25966 op: 158
    // SubProg update_include_matrix pc: 422 op: LENGTH (42)
    if (IS_SEQUENCE(_indirect_26056)){
            _14606 = SEQ_PTR(_indirect_26056)->length;
    }
    else {
        _14606 = 1;
    }
    // SubProg update_include_matrix pc: 425 op: LESSEQ_IFW_I (123)
    if (_ix_26070 > _14606)
    goto LD; // [425] 544
    // SubProg update_include_matrix pc: 429 op: STARTLINE (58)

    /** scanner.e:730				integer indirect_file = indirect[ix]*/
    // SubProg update_include_matrix pc: 431 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_indirect_26056);
    _indirect_file_26074 = (object)*(((s1_ptr)_2)->base + _ix_26070);
    if (!IS_ATOM_INT(_indirect_file_26074))
    _indirect_file_26074 = (object)DBL_PTR(_indirect_file_26074)->dbl;
    // SubProg update_include_matrix pc: 435 op: STARTLINE (58)

    /** scanner.e:731				if indirect_include[indirect_file][included_file] then*/
    // SubProg update_include_matrix pc: 437 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 439 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35indirect_include_14165);
    _14609 = (object)*(((s1_ptr)_2)->base + _indirect_file_26074);
    // SubProg update_include_matrix pc: 443 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14609);
    _14610 = (object)*(((s1_ptr)_2)->base + _included_file_25968);
    _14609 = NOVALUE;
    // SubProg update_include_matrix pc: 447 op: IF (20)
    if (_14610 == 0) {
        _14610 = NOVALUE;
        goto LE; // [447] 531
    }
    else {
        if (!IS_ATOM_INT(_14610) && DBL_PTR(_14610)->dbl == 0.0){
            _14610 = NOVALUE;
            goto LE; // [447] 531
        }
        _14610 = NOVALUE;
    }
    _14610 = NOVALUE;
    // SubProg update_include_matrix pc: 450 op: STARTLINE (58)

    /** scanner.e:732					include_matrix[indirect_file] =*/
    // SubProg update_include_matrix pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 456 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14611 = (object)*(((s1_ptr)_2)->base + _indirect_file_26074);
    // SubProg update_include_matrix pc: 460 op: OR_BITS (24)
    _14612 = binary_op(OR_BITS, _mask_26059, _14611);
    _14611 = NOVALUE;
    // SubProg update_include_matrix pc: 464 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _indirect_file_26074);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14612;
    if( _1 != _14612 ){
        DeRef(_1);
    }
    _14612 = NOVALUE;
    // SubProg update_include_matrix pc: 468 op: STARTLINE (58)

    /** scanner.e:734					for i = 1 to length( file_include_by[indirect_file] ) do*/
    // SubProg update_include_matrix pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 472 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_by_14169);
    _14613 = (object)*(((s1_ptr)_2)->base + _indirect_file_26074);
    // SubProg update_include_matrix pc: 476 op: LENGTH (42)
    if (IS_SEQUENCE(_14613)){
            _14614 = SEQ_PTR(_14613)->length;
    }
    else {
        _14614 = 1;
    }
    _14613 = NOVALUE;
    // SubProg update_include_matrix pc: 479 op: FOR_I (125)
    {
        object _i_26085;
        _i_26085 = 1;
LF: // addr: 486 pc: 479 sub: 25966 op: 125
        if (_i_26085 > _14614){
            goto L10; // [479] 530
        }
        // SubProg update_include_matrix pc: 486 op: STARTLINE (58)

        /** scanner.e:736						if not find( file_include_by[indirect_file][i], indirect ) then*/
        // SubProg update_include_matrix pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 490 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_by_14169);
        _14615 = (object)*(((s1_ptr)_2)->base + _indirect_file_26074);
        // SubProg update_include_matrix pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14615);
        _14616 = (object)*(((s1_ptr)_2)->base + _i_26085);
        _14615 = NOVALUE;
        // SubProg update_include_matrix pc: 498 op: FIND_FROM (176)
        _14617 = find_from(_14616, _indirect_26056, 1);
        _14616 = NOVALUE;
        // SubProg update_include_matrix pc: 503 op: NOT_IFW (108)
        if (_14617 != 0)
        goto L11; // [503] 523
        _14617 = NOVALUE;
        // SubProg update_include_matrix pc: 506 op: STARTLINE (58)

        /** scanner.e:737							indirect &= file_include_by[indirect_file][i]*/
        // SubProg update_include_matrix pc: 508 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 510 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_by_14169);
        _14619 = (object)*(((s1_ptr)_2)->base + _indirect_file_26074);
        // SubProg update_include_matrix pc: 514 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14619);
        _14620 = (object)*(((s1_ptr)_2)->base + _i_26085);
        _14619 = NOVALUE;
        // SubProg update_include_matrix pc: 518 op: CONCAT (15)
        if (IS_SEQUENCE(_indirect_26056) && IS_ATOM(_14620)) {
            Ref(_14620);
            Append(&_indirect_26056, _indirect_26056, _14620);
        }
        else if (IS_ATOM(_indirect_26056) && IS_SEQUENCE(_14620)) {
        }
        else {
            Concat((object_ptr)&_indirect_26056, _indirect_26056, _14620);
        }
        _14620 = NOVALUE;
        // SubProg update_include_matrix pc: 522 op: NOP1 (159)
L11: // addr: 523 pc: 522 sub: 25966 op: 159
        // SubProg update_include_matrix pc: 523 op: STARTLINE (58)

        /** scanner.e:740					end for*/
        // SubProg update_include_matrix pc: 525 op: ENDFOR_INT_UP1 (54)
        _i_26085 = _i_26085 + 1;
        goto LF; // [525] 486
L10: // addr: 530 pc: 525 sub: 25966 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 530 op: NOP1 (159)
LE: // addr: 531 pc: 530 sub: 25966 op: 159
    // SubProg update_include_matrix pc: 531 op: STARTLINE (58)

    /** scanner.e:742				ix += 1*/
    // SubProg update_include_matrix pc: 533 op: PLUS1_I (117)
    _ix_26070 = _ix_26070 + 1;
    // SubProg update_include_matrix pc: 537 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var indirect_file_26074
    // SubProg update_include_matrix pc: 539 op: STARTLINE (58)

    /** scanner.e:743			end while*/
    // SubProg update_include_matrix pc: 541 op: ENDWHILE (22)
    goto LC; // [541] 422
    // SubProg update_include_matrix pc: 543 op: NOP1 (159)
LD: // addr: 544 pc: 543 sub: 25966 op: 159
    // SubProg update_include_matrix pc: 544 op: NOP1 (159)
LB: // addr: 545 pc: 544 sub: 25966 op: 159
    // SubProg update_include_matrix pc: 545 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var indirect_26056
    DeRef(_indirect_26056);
    _indirect_26056 = NOVALUE;

// block var mask_26059
    DeRef(_mask_26059);
    _mask_26059 = NOVALUE;

// block var ix_26070
    // SubProg update_include_matrix pc: 547 op: STARTLINE (58)

    /** scanner.e:746		public_include = FALSE*/
    // SubProg update_include_matrix pc: 549 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 551 op: ASSIGN (18)
    _61public_include_25185 = _8FALSE_442;
    // SubProg update_include_matrix pc: 554 op: STARTLINE (58)

    /** scanner.e:747	end procedure*/
    // SubProg update_include_matrix pc: 556 op: RETURNP (29)

// Exiting block BLOCK: update_include_matrix

// block var included_file_25968

// block var from_file_25969
    _14553 = NOVALUE;
    _14587 = NOVALUE;
    _14591 = NOVALUE;
    _14575 = NOVALUE;
    _14585 = NOVALUE;
    _14592 = NOVALUE;
    _14588 = NOVALUE;
    _14613 = NOVALUE;
    _14565 = NOVALUE;
    _14568 = NOVALUE;
    _14580 = NOVALUE;
    _14572 = NOVALUE;
    _14556 = NOVALUE;
    _14573 = NOVALUE;
    _14584 = NOVALUE;
    return;
    // SubProg update_include_matrix pc: 559 op: BADRETURNF (43)
    ;
}


void _61add_include_by(object _by_file_26103, object _included_file_26104, object _is_public_26105)
{
    object _14667 = NOVALUE; // 26183 14667
    object _14666 = NOVALUE; // 26182 14666
    object _14665 = NOVALUE; // 26181 14665
// skipping _14664  name type: 0
    object _14663 = NOVALUE; // 26177 14663
    object _14662 = NOVALUE; // 26174 14662
    object _14661 = NOVALUE; // 26173 14661
    object _14660 = NOVALUE; // 26172 14660
// skipping _14659  name type: 0
    object _14658 = NOVALUE; // 26168 14658
    object _14657 = NOVALUE; // 26166 14657
    object _14656 = NOVALUE; // 26165 14656
    object _14655 = NOVALUE; // 26164 14655
    object _14654 = NOVALUE; // 26160 14654
    object _14653 = NOVALUE; // 26159 14653
    object _14652 = NOVALUE; // 26155 14652
    object _14651 = NOVALUE; // 26154 14651
// skipping _14650  name type: 0
    object _14649 = NOVALUE; // 26151 14649
    object _14648 = NOVALUE; // 26150 14648
    object _14647 = NOVALUE; // 26147 14647
    object _14646 = NOVALUE; // 26146 14646
// skipping _14645  name type: 0
    object _14644 = NOVALUE; // 26143 14644
    object _14643 = NOVALUE; // 26142 14643
    object _14642 = NOVALUE; // 26138 14642
    object _14641 = NOVALUE; // 26137 14641
// skipping _14640  name type: 0
    object _14639 = NOVALUE; // 26134 14639
    object _14638 = NOVALUE; // 26133 14638
    object _14637 = NOVALUE; // 26130 14637
    object _14636 = NOVALUE; // 26129 14636
// skipping _14635  name type: 0
    object _14634 = NOVALUE; // 26126 14634
    object _14633 = NOVALUE; // 26125 14633
    object _14632 = NOVALUE; // 26122 14632
    object _14631 = NOVALUE; // 26121 14631
    object _14630 = NOVALUE; // 26120 14630
// skipping _14629  name type: 0
    object _14628 = NOVALUE; // 26116 14628
    object _14627 = NOVALUE; // 26113 14627
    object _14626 = NOVALUE; // 26112 14626
    object _14625 = NOVALUE; // 26111 14625
// skipping _14624  name type: 0
    object _14623 = NOVALUE; // 26107 14623
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_include_by pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 5 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 7 op: STARTLINE (58)

    /** scanner.e:750		include_matrix[by_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][included_file] )*/
    // SubProg add_include_by pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 11 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26103 + ((s1_ptr)_2)->base);
    // SubProg add_include_by pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14625 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
    // SubProg add_include_by pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14625);
    _14626 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
    _14625 = NOVALUE;
    // SubProg add_include_by pc: 28 op: OR_BITS (24)
    if (IS_ATOM_INT(_14626)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14626;
             _14627 = MAKE_UINT(tu);
        }
    }
    else {
        _14627 = binary_op(OR_BITS, 2, _14626);
    }
    _14626 = NOVALUE;
    // SubProg add_include_by pc: 32 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26104);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14627;
    if( _1 != _14627 ){
        DeRef(_1);
    }
    _14627 = NOVALUE;
    _14623 = NOVALUE;
    // SubProg add_include_by pc: 36 op: STARTLINE (58)

    /** scanner.e:751		if is_public then*/
    // SubProg add_include_by pc: 38 op: IF (20)
    if (_is_public_26105 == 0)
    {
        goto L1; // [38] 71
    }
    else{
    }
    // SubProg add_include_by pc: 41 op: STARTLINE (58)

    /** scanner.e:752			include_matrix[by_file][included_file] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][included_file] )*/
    // SubProg add_include_by pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 45 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26103 + ((s1_ptr)_2)->base);
    // SubProg add_include_by pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14630 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
    // SubProg add_include_by pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14630);
    _14631 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
    _14630 = NOVALUE;
    // SubProg add_include_by pc: 62 op: OR_BITS (24)
    if (IS_ATOM_INT(_14631)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14631;
             _14632 = MAKE_UINT(tu);
        }
    }
    else {
        _14632 = binary_op(OR_BITS, 4, _14631);
    }
    _14631 = NOVALUE;
    // SubProg add_include_by pc: 66 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26104);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14632;
    if( _1 != _14632 ){
        DeRef(_1);
    }
    _14632 = NOVALUE;
    _14628 = NOVALUE;
    // SubProg add_include_by pc: 70 op: NOP1 (159)
L1: // addr: 71 pc: 70 sub: 26101 op: 159
    // SubProg add_include_by pc: 71 op: STARTLINE (58)

    /** scanner.e:754		if not find( by_file, file_include_by[included_file] ) then*/
    // SubProg add_include_by pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 75 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_by_14169);
    _14633 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
    // SubProg add_include_by pc: 79 op: FIND_FROM (176)
    _14634 = find_from(_by_file_26103, _14633, 1);
    _14633 = NOVALUE;
    // SubProg add_include_by pc: 84 op: NOT_IFW (108)
    if (_14634 != 0)
    goto L2; // [84] 104
    _14634 = NOVALUE;
    // SubProg add_include_by pc: 87 op: STARTLINE (58)

    /** scanner.e:755			file_include_by[included_file] &= by_file*/
    // SubProg add_include_by pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 91 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_include_by_14169);
    _14636 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
    // SubProg add_include_by pc: 95 op: CONCAT (15)
    if (IS_SEQUENCE(_14636) && IS_ATOM(_by_file_26103)) {
        Append(&_14637, _14636, _by_file_26103);
    }
    else if (IS_ATOM(_14636) && IS_SEQUENCE(_by_file_26103)) {
    }
    else {
        Concat((object_ptr)&_14637, _14636, _by_file_26103);
        _14636 = NOVALUE;
    }
    _14636 = NOVALUE;
    // SubProg add_include_by pc: 99 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_include_by_14169);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26104);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14637;
    if( _1 != _14637 ){
        DeRef(_1);
    }
    _14637 = NOVALUE;
    // SubProg add_include_by pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 26101 op: 159
    // SubProg add_include_by pc: 104 op: STARTLINE (58)

    /** scanner.e:758		if not find( included_file, file_include[by_file] ) then*/
    // SubProg add_include_by pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 108 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _14638 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
    // SubProg add_include_by pc: 112 op: FIND_FROM (176)
    _14639 = find_from(_included_file_26104, _14638, 1);
    _14638 = NOVALUE;
    // SubProg add_include_by pc: 117 op: NOT_IFW (108)
    if (_14639 != 0)
    goto L3; // [117] 137
    _14639 = NOVALUE;
    // SubProg add_include_by pc: 120 op: STARTLINE (58)

    /** scanner.e:759			file_include[by_file] &= included_file*/
    // SubProg add_include_by pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 124 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _14641 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
    // SubProg add_include_by pc: 128 op: CONCAT (15)
    if (IS_SEQUENCE(_14641) && IS_ATOM(_included_file_26104)) {
        Append(&_14642, _14641, _included_file_26104);
    }
    else if (IS_ATOM(_14641) && IS_SEQUENCE(_included_file_26104)) {
    }
    else {
        Concat((object_ptr)&_14642, _14641, _included_file_26104);
        _14641 = NOVALUE;
    }
    _14641 = NOVALUE;
    // SubProg add_include_by pc: 132 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35file_include_14161 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26103);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14642;
    if( _1 != _14642 ){
        DeRef(_1);
    }
    _14642 = NOVALUE;
    // SubProg add_include_by pc: 136 op: NOP1 (159)
L3: // addr: 137 pc: 136 sub: 26101 op: 159
    // SubProg add_include_by pc: 137 op: STARTLINE (58)

    /** scanner.e:762		if is_public then*/
    // SubProg add_include_by pc: 139 op: IF (20)
    if (_is_public_26105 == 0)
    {
        goto L4; // [139] 209
    }
    else{
    }
    // SubProg add_include_by pc: 142 op: STARTLINE (58)

    /** scanner.e:763			if not find( by_file, file_public_by[included_file] ) then*/
    // SubProg add_include_by pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 146 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_public_by_14171);
    _14643 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
    // SubProg add_include_by pc: 150 op: FIND_FROM (176)
    _14644 = find_from(_by_file_26103, _14643, 1);
    _14643 = NOVALUE;
    // SubProg add_include_by pc: 155 op: NOT_IFW (108)
    if (_14644 != 0)
    goto L5; // [155] 175
    _14644 = NOVALUE;
    // SubProg add_include_by pc: 158 op: STARTLINE (58)

    /** scanner.e:764				file_public_by[included_file] &= by_file*/
    // SubProg add_include_by pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 162 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_public_by_14171);
    _14646 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
    // SubProg add_include_by pc: 166 op: CONCAT (15)
    if (IS_SEQUENCE(_14646) && IS_ATOM(_by_file_26103)) {
        Append(&_14647, _14646, _by_file_26103);
    }
    else if (IS_ATOM(_14646) && IS_SEQUENCE(_by_file_26103)) {
    }
    else {
        Concat((object_ptr)&_14647, _14646, _by_file_26103);
        _14646 = NOVALUE;
    }
    _14646 = NOVALUE;
    // SubProg add_include_by pc: 170 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_public_by_14171);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26104);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14647;
    if( _1 != _14647 ){
        DeRef(_1);
    }
    _14647 = NOVALUE;
    // SubProg add_include_by pc: 174 op: NOP1 (159)
L5: // addr: 175 pc: 174 sub: 26101 op: 159
    // SubProg add_include_by pc: 175 op: STARTLINE (58)

    /** scanner.e:767			if not find( included_file, file_public[by_file] ) then*/
    // SubProg add_include_by pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 179 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _14648 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
    // SubProg add_include_by pc: 183 op: FIND_FROM (176)
    _14649 = find_from(_included_file_26104, _14648, 1);
    _14648 = NOVALUE;
    // SubProg add_include_by pc: 188 op: NOT_IFW (108)
    if (_14649 != 0)
    goto L6; // [188] 208
    _14649 = NOVALUE;
    // SubProg add_include_by pc: 191 op: STARTLINE (58)

    /** scanner.e:768				file_public[by_file] &= included_file*/
    // SubProg add_include_by pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 195 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _14651 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
    // SubProg add_include_by pc: 199 op: CONCAT (15)
    if (IS_SEQUENCE(_14651) && IS_ATOM(_included_file_26104)) {
        Append(&_14652, _14651, _included_file_26104);
    }
    else if (IS_ATOM(_14651) && IS_SEQUENCE(_included_file_26104)) {
    }
    else {
        Concat((object_ptr)&_14652, _14651, _included_file_26104);
        _14651 = NOVALUE;
    }
    _14651 = NOVALUE;
    // SubProg add_include_by pc: 203 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26103);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14652;
    if( _1 != _14652 ){
        DeRef(_1);
    }
    _14652 = NOVALUE;
    // SubProg add_include_by pc: 207 op: NOP1 (159)
L6: // addr: 208 pc: 207 sub: 26101 op: 159
    // SubProg add_include_by pc: 208 op: NOP1 (159)
L4: // addr: 209 pc: 208 sub: 26101 op: 159
    // SubProg add_include_by pc: 209 op: STARTLINE (58)

    /** scanner.e:772		for propagate = 1 to length( include_matrix[included_file] ) do*/
    // SubProg add_include_by pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _14653 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
    // SubProg add_include_by pc: 217 op: LENGTH (42)
    if (IS_SEQUENCE(_14653)){
            _14654 = SEQ_PTR(_14653)->length;
    }
    else {
        _14654 = 1;
    }
    _14653 = NOVALUE;
    // SubProg add_include_by pc: 220 op: FOR_I (125)
    {
        object _propagate_26157;
        _propagate_26157 = 1;
L7: // addr: 227 pc: 220 sub: 26101 op: 125
        if (_propagate_26157 > _14654){
            goto L8; // [220] 320
        }
        // SubProg add_include_by pc: 227 op: STARTLINE (58)

        /** scanner.e:773			if and_bits( PUBLIC_INCLUDE, include_matrix[included_file][propagate] ) then*/
        // SubProg add_include_by pc: 229 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 231 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _14655 = (object)*(((s1_ptr)_2)->base + _included_file_26104);
        // SubProg add_include_by pc: 237 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14655);
        _14656 = (object)*(((s1_ptr)_2)->base + _propagate_26157);
        _14655 = NOVALUE;
        // SubProg add_include_by pc: 241 op: AND_BITS (56)
        if (IS_ATOM_INT(_14656)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 & (uintptr_t)_14656;
                 _14657 = MAKE_UINT(tu);
            }
        }
        else {
            _14657 = binary_op(AND_BITS, 4, _14656);
        }
        _14656 = NOVALUE;
        // SubProg add_include_by pc: 245 op: IF (20)
        if (_14657 == 0) {
            DeRef(_14657);
            _14657 = NOVALUE;
            goto L9; // [245] 313
        }
        else {
            if (!IS_ATOM_INT(_14657) && DBL_PTR(_14657)->dbl == 0.0){
                DeRef(_14657);
                _14657 = NOVALUE;
                goto L9; // [245] 313
            }
            DeRef(_14657);
            _14657 = NOVALUE;
        }
        DeRef(_14657);
        _14657 = NOVALUE;
        // SubProg add_include_by pc: 248 op: STARTLINE (58)

        /** scanner.e:774				include_matrix[by_file][propagate] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][propagate] )*/
        // SubProg add_include_by pc: 250 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 252 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35include_matrix_14163 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26103 + ((s1_ptr)_2)->base);
        // SubProg add_include_by pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 261 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _14660 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
        // SubProg add_include_by pc: 265 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14660);
        _14661 = (object)*(((s1_ptr)_2)->base + _propagate_26157);
        _14660 = NOVALUE;
        // SubProg add_include_by pc: 269 op: OR_BITS (24)
        if (IS_ATOM_INT(_14661)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 | (uintptr_t)_14661;
                 _14662 = MAKE_UINT(tu);
            }
        }
        else {
            _14662 = binary_op(OR_BITS, 2, _14661);
        }
        _14661 = NOVALUE;
        // SubProg add_include_by pc: 273 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26157);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14662;
        if( _1 != _14662 ){
            DeRef(_1);
        }
        _14662 = NOVALUE;
        _14658 = NOVALUE;
        // SubProg add_include_by pc: 277 op: STARTLINE (58)

        /** scanner.e:775				if is_public then*/
        // SubProg add_include_by pc: 279 op: IF (20)
        if (_is_public_26105 == 0)
        {
            goto LA; // [279] 312
        }
        else{
        }
        // SubProg add_include_by pc: 282 op: STARTLINE (58)

        /** scanner.e:776					include_matrix[by_file][propagate] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][propagate] )*/
        // SubProg add_include_by pc: 284 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 286 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35include_matrix_14163 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26103 + ((s1_ptr)_2)->base);
        // SubProg add_include_by pc: 291 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 293 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 295 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _14665 = (object)*(((s1_ptr)_2)->base + _by_file_26103);
        // SubProg add_include_by pc: 299 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14665);
        _14666 = (object)*(((s1_ptr)_2)->base + _propagate_26157);
        _14665 = NOVALUE;
        // SubProg add_include_by pc: 303 op: OR_BITS (24)
        if (IS_ATOM_INT(_14666)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14666;
                 _14667 = MAKE_UINT(tu);
            }
        }
        else {
            _14667 = binary_op(OR_BITS, 4, _14666);
        }
        _14666 = NOVALUE;
        // SubProg add_include_by pc: 307 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26157);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14667;
        if( _1 != _14667 ){
            DeRef(_1);
        }
        _14667 = NOVALUE;
        _14663 = NOVALUE;
        // SubProg add_include_by pc: 311 op: NOP1 (159)
LA: // addr: 312 pc: 311 sub: 26101 op: 159
        // SubProg add_include_by pc: 312 op: NOP1 (159)
L9: // addr: 313 pc: 312 sub: 26101 op: 159
        // SubProg add_include_by pc: 313 op: STARTLINE (58)

        /** scanner.e:779		end for*/
        // SubProg add_include_by pc: 315 op: ENDFOR_INT_UP1 (54)
        _propagate_26157 = _propagate_26157 + 1;
        goto L7; // [315] 227
L8: // addr: 320 pc: 315 sub: 26101 op: 54
        ;
    }
    // SubProg add_include_by pc: 320 op: STARTLINE (58)

    /** scanner.e:780	end procedure*/
    // SubProg add_include_by pc: 322 op: RETURNP (29)

// Exiting block BLOCK: add_include_by

// block var by_file_26103

// block var included_file_26104

// block var is_public_26105
    _14653 = NOVALUE;
    return;
    // SubProg add_include_by pc: 325 op: BADRETURNF (43)
    ;
}


void _61IncludePush()
{
    object _new_file_handle_26186 = NOVALUE;
    object _old_file_no_26187 = NOVALUE;
    object _new_hash_26188 = NOVALUE;
    object _idx_26189 = NOVALUE;
// skipping _14755  name type: 0
    object _14754 = NOVALUE; // 26405 14754
// skipping _14753  name type: 0
// skipping _14752  name type: 0
    object _14751 = NOVALUE; // 26395 14751
// skipping _14750  name type: 0
    object _14749 = NOVALUE; // 26392 14749
    object _14748 = NOVALUE; // 26391 14748
    object _14747 = NOVALUE; // 26389 14747
// skipping _14746  name type: 0
    object _14745 = NOVALUE; // 26384 14745
    object _14744 = NOVALUE; // 26383 14744
// skipping _14743  name type: 0
// skipping _14742  name type: 0
// skipping _14741  name type: 0
// skipping _14740  name type: 0
    object _14738 = NOVALUE; // 26362 14738
    object _14737 = NOVALUE; // 26361 14737
    object _14736 = NOVALUE; // 26360 14736
    object _14735 = NOVALUE; // 26355 14735
    object _14734 = NOVALUE; // 26352 14734
    object _14733 = NOVALUE; // 26351 14733
    object _14732 = NOVALUE; // 26350 14732
// skipping _14731  name type: 0
// skipping _14730  name type: 0
    object _14729 = NOVALUE; // 26338 14729
// skipping _14728  name type: 0
    object _14727 = NOVALUE; // 26336 14727
// skipping _14726  name type: 0
    object _14725 = NOVALUE; // 26332 14725
    object _14724 = NOVALUE; // 26331 14724
    object _14723 = NOVALUE; // 26326 14723
// skipping _14722  name type: 0
    object _14721 = NOVALUE; // 26324 14721
    object _14720 = NOVALUE; // 26320 14720
// skipping _14719  name type: 0
    object _14718 = NOVALUE; // 26318 14718
    object _14717 = NOVALUE; // 26317 14717
// skipping _14716  name type: 0
    object _14715 = NOVALUE; // 26314 14715
    object _14714 = NOVALUE; // 26313 14714
    object _14713 = NOVALUE; // 26309 14713
    object _14712 = NOVALUE; // 26308 14712
    object _14711 = NOVALUE; // 26307 14711
    object _14710 = NOVALUE; // 26306 14710
    object _14709 = NOVALUE; // 26303 14709
// skipping _14708  name type: 0
// skipping _14707  name type: 0
// skipping _14706  name type: 0
    object _14705 = NOVALUE; // 26292 14705
// skipping _14704  name type: 0
    object _14703 = NOVALUE; // 26267 14703
    object _14702 = NOVALUE; // 26265 14702
    object _14701 = NOVALUE; // 26264 14701
    object _14700 = NOVALUE; // 26261 14700
    object _14699 = NOVALUE; // 26260 14699
    object _14698 = NOVALUE; // 26258 14698
    object _14697 = NOVALUE; // 26257 14697
    object _14696 = NOVALUE; // 26256 14696
    object _14695 = NOVALUE; // 26255 14695
// skipping _14694  name type: 0
    object _14693 = NOVALUE; // 26246 14693
    object _14692 = NOVALUE; // 26242 14692
    object _14691 = NOVALUE; // 26241 14691
// skipping _14690  name type: 0
    object _14689 = NOVALUE; // 26237 14689
    object _14688 = NOVALUE; // 26236 14688
    object _14687 = NOVALUE; // 26230 14687
    object _14686 = NOVALUE; // 26229 14686
// skipping _14685  name type: 0
    object _14684 = NOVALUE; // 26225 14684
    object _14683 = NOVALUE; // 26224 14683
    object _14682 = NOVALUE; // 26220 14682
    object _14681 = NOVALUE; // 26219 14681
    object _14680 = NOVALUE; // 26216 14680
// skipping _14679  name type: 0
    object _14678 = NOVALUE; // 26214 14678
    object _14677 = NOVALUE; // 26211 14677
    object _14676 = NOVALUE; // 26210 14676
    object _14675 = NOVALUE; // 26207 14675
// skipping _14674  name type: 0
    object _14673 = NOVALUE; // 26203 14673
// skipping _14672  name type: 0
// skipping _14671  name type: 0
// skipping _14670  name type: 0
    object _14669 = NOVALUE; // 26195 14669
// skipping _14668  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg IncludePush pc: 1 op: STARTLINE (58)

    /** scanner.e:788		start_include = FALSE*/
    // SubProg IncludePush pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 5 op: ASSIGN (18)
    _61start_include_25182 = _8FALSE_442;
    // SubProg IncludePush pc: 8 op: STARTLINE (58)

    /** scanner.e:790		new_file_handle = path_open() -- sets new_include_name to full path*/
    // SubProg IncludePush pc: 10 op: PROC (27)
    _new_file_handle_26186 = _61path_open();
    // SubProg IncludePush pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_file_handle_26186)) {
        _1 = (object)(DBL_PTR(_new_file_handle_26186)->dbl);
        DeRefDS(_new_file_handle_26186);
        _new_file_handle_26186 = _1;
    }
    // SubProg IncludePush pc: 15 op: STARTLINE (58)

    /** scanner.e:792		new_hash = hash(canonical_path(new_include_name,,CORRECT), stdhash:HSIEH32)*/
    // SubProg IncludePush pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 21 op: PROC (27)
    RefDS(_34new_include_name_15310);
    _14669 = _18canonical_path(_34new_include_name_15310, 0, 2);
    // SubProg IncludePush pc: 27 op: HASH (194)
    DeRef(_new_hash_26188);
    _new_hash_26188 = calc_hash(_14669, -5);
    DeRef(_14669);
    _14669 = NOVALUE;
    // SubProg IncludePush pc: 31 op: STARTLINE (58)

    /** scanner.e:794		idx = find(new_hash, known_files_hash)*/
    // SubProg IncludePush pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 35 op: FIND_FROM (176)
    _idx_26189 = find_from(_new_hash_26188, _35known_files_hash_14158, 1);
    // SubProg IncludePush pc: 40 op: STARTLINE (58)

    /** scanner.e:795		if idx then*/
    // SubProg IncludePush pc: 42 op: IF (20)
    if (_idx_26189 == 0)
    {
        goto L1; // [42] 335
    }
    else{
    }
    // SubProg IncludePush pc: 45 op: STARTLINE (58)

    /** scanner.e:797			if new_include_space != 0 then*/
    // SubProg IncludePush pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 49 op: NOTEQ_IFW (105)
    if (_61new_include_space_25180 == 0)
    goto L2; // [49] 71
    // SubProg IncludePush pc: 53 op: STARTLINE (58)

    /** scanner.e:798				SymTab[new_include_space][S_OBJ] = idx -- but note any namespace*/
    // SubProg IncludePush pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 59 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_61new_include_space_25180 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 66 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26189;
    DeRef(_1);
    _14673 = NOVALUE;
    // SubProg IncludePush pc: 70 op: NOP1 (159)
L2: // addr: 71 pc: 70 sub: 26184 op: 159
    // SubProg IncludePush pc: 71 op: STARTLINE (58)

    /** scanner.e:801			close(new_file_handle)*/
    // SubProg IncludePush pc: 73 op: CLOSE (86)
    EClose(_new_file_handle_26186);
    // SubProg IncludePush pc: 75 op: STARTLINE (58)

    /** scanner.e:803			if find( -idx, file_include[current_file_no] ) then*/
    // SubProg IncludePush pc: 77 op: UMINUS (12)
    if ((uintptr_t)_idx_26189 == (uintptr_t)HIGH_BITS){
        _14675 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14675 = - _idx_26189;
    }
    // SubProg IncludePush pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _14676 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 88 op: FIND_FROM (176)
    _14677 = find_from(_14675, _14676, 1);
    DeRef(_14675);
    _14675 = NOVALUE;
    _14676 = NOVALUE;
    // SubProg IncludePush pc: 93 op: IF (20)
    if (_14677 == 0)
    {
        _14677 = NOVALUE;
        goto L3; // [93] 130
    }
    else{
        _14677 = NOVALUE;
    }
    // SubProg IncludePush pc: 96 op: STARTLINE (58)

    /** scanner.e:805				file_include[current_file_no][ find( -idx, file_include[current_file_no] ) ] = idx*/
    // SubProg IncludePush pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 102 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35file_include_14161 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34current_file_no_15188 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 107 op: UMINUS (12)
    if ((uintptr_t)_idx_26189 == (uintptr_t)HIGH_BITS){
        _14680 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14680 = - _idx_26189;
    }
    // SubProg IncludePush pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 114 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _14681 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 118 op: FIND_FROM (176)
    _14682 = find_from(_14680, _14681, 1);
    DeRef(_14680);
    _14680 = NOVALUE;
    _14681 = NOVALUE;
    // SubProg IncludePush pc: 123 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14682);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26189;
    DeRef(_1);
    _14678 = NOVALUE;
    // SubProg IncludePush pc: 127 op: ELSE (23)
    goto L4; // [127] 228
    // SubProg IncludePush pc: 129 op: NOP1 (159)
L3: // addr: 130 pc: 129 sub: 26184 op: 159
    // SubProg IncludePush pc: 130 op: STARTLINE (58)

    /** scanner.e:809			elsif not find( idx, file_include[current_file_no] ) then*/
    // SubProg IncludePush pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 136 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _14683 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 140 op: FIND_FROM (176)
    _14684 = find_from(_idx_26189, _14683, 1);
    _14683 = NOVALUE;
    // SubProg IncludePush pc: 145 op: NOT_IFW (108)
    if (_14684 != 0)
    goto L5; // [145] 227
    _14684 = NOVALUE;
    // SubProg IncludePush pc: 148 op: STARTLINE (58)

    /** scanner.e:811				file_include[current_file_no] &= idx*/
    // SubProg IncludePush pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 154 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _14686 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 158 op: CONCAT (15)
    if (IS_SEQUENCE(_14686) && IS_ATOM(_idx_26189)) {
        Append(&_14687, _14686, _idx_26189);
    }
    else if (IS_ATOM(_14686) && IS_SEQUENCE(_idx_26189)) {
    }
    else {
        Concat((object_ptr)&_14687, _14686, _idx_26189);
        _14686 = NOVALUE;
    }
    _14686 = NOVALUE;
    // SubProg IncludePush pc: 162 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35file_include_14161 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14687;
    if( _1 != _14687 ){
        DeRef(_1);
    }
    _14687 = NOVALUE;
    // SubProg IncludePush pc: 166 op: STARTLINE (58)

    /** scanner.e:814				add_exports( idx, current_file_no )*/
    // SubProg IncludePush pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 170 op: PROC (27)
    _61add_exports(_idx_26189, _34current_file_no_15188);
    // SubProg IncludePush pc: 174 op: STARTLINE (58)

    /** scanner.e:816				if public_include then*/
    // SubProg IncludePush pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 178 op: IF (20)
    if (_61public_include_25185 == 0)
    {
        goto L6; // [178] 226
    }
    else{
    }
    // SubProg IncludePush pc: 181 op: STARTLINE (58)

    /** scanner.e:818					if not find( idx, file_public[current_file_no] ) then*/
    // SubProg IncludePush pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 187 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _14688 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 191 op: FIND_FROM (176)
    _14689 = find_from(_idx_26189, _14688, 1);
    _14688 = NOVALUE;
    // SubProg IncludePush pc: 196 op: NOT_IFW (108)
    if (_14689 != 0)
    goto L7; // [196] 225
    _14689 = NOVALUE;
    // SubProg IncludePush pc: 199 op: STARTLINE (58)

    /** scanner.e:819						file_public[current_file_no] &= idx*/
    // SubProg IncludePush pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 205 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _14691 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 209 op: CONCAT (15)
    if (IS_SEQUENCE(_14691) && IS_ATOM(_idx_26189)) {
        Append(&_14692, _14691, _idx_26189);
    }
    else if (IS_ATOM(_14691) && IS_SEQUENCE(_idx_26189)) {
    }
    else {
        Concat((object_ptr)&_14692, _14691, _idx_26189);
        _14691 = NOVALUE;
    }
    _14691 = NOVALUE;
    // SubProg IncludePush pc: 213 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14692;
    if( _1 != _14692 ){
        DeRef(_1);
    }
    _14692 = NOVALUE;
    // SubProg IncludePush pc: 217 op: STARTLINE (58)

    /** scanner.e:820						patch_exports( current_file_no )*/
    // SubProg IncludePush pc: 219 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 221 op: PROC (27)
    _61patch_exports(_34current_file_no_15188);
    // SubProg IncludePush pc: 224 op: NOP1 (159)
L7: // addr: 225 pc: 224 sub: 26184 op: 159
    // SubProg IncludePush pc: 225 op: NOP1 (159)
L6: // addr: 226 pc: 225 sub: 26184 op: 159
    // SubProg IncludePush pc: 226 op: NOP1 (159)
L5: // addr: 227 pc: 226 sub: 26184 op: 159
    // SubProg IncludePush pc: 227 op: NOP1 (159)
L4: // addr: 228 pc: 227 sub: 26184 op: 159
    // SubProg IncludePush pc: 228 op: STARTLINE (58)

    /** scanner.e:825			indirect_include[current_file_no][idx] = OpIndirectInclude*/
    // SubProg IncludePush pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 234 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35indirect_include_14165);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35indirect_include_14165 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34current_file_no_15188 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 241 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _idx_26189);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34OpIndirectInclude_15263;
    DeRef(_1);
    _14693 = NOVALUE;
    // SubProg IncludePush pc: 245 op: STARTLINE (58)

    /** scanner.e:826			add_include_by( current_file_no, idx, public_include )*/
    // SubProg IncludePush pc: 247 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 251 op: PROC (27)
    _61add_include_by(_34current_file_no_15188, _idx_26189, _61public_include_25185);
    // SubProg IncludePush pc: 256 op: STARTLINE (58)

    /** scanner.e:827			update_include_matrix( idx, current_file_no )*/
    // SubProg IncludePush pc: 258 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 260 op: PROC (27)
    _61update_include_matrix(_idx_26189, _34current_file_no_15188);
    // SubProg IncludePush pc: 264 op: STARTLINE (58)

    /** scanner.e:828			public_include = FALSE*/
    // SubProg IncludePush pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 268 op: ASSIGN (18)
    _61public_include_25185 = _8FALSE_442;
    // SubProg IncludePush pc: 271 op: STARTLINE (58)

    /** scanner.e:829			read_line() -- we can't return without reading a line first*/
    // SubProg IncludePush pc: 273 op: PROC (27)
    _61read_line();
    // SubProg IncludePush pc: 275 op: STARTLINE (58)

    /** scanner.e:830			if not find( idx, file_include_depend[current_file_no] ) and not finished_files[idx] then*/
    // SubProg IncludePush pc: 277 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 281 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35file_include_depend_14160);
    _14695 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 285 op: FIND_FROM (176)
    _14696 = find_from(_idx_26189, _14695, 1);
    _14695 = NOVALUE;
    // SubProg IncludePush pc: 290 op: NOT (7)
    _14697 = (_14696 == 0);
    _14696 = NOVALUE;
    // SubProg IncludePush pc: 293 op: SC1_AND_IF (146)
    if (_14697 == 0) {
        goto L8; // [293] 329
    }
    // SubProg IncludePush pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35finished_files_14159);
    _14699 = (object)*(((s1_ptr)_2)->base + _idx_26189);
    // SubProg IncludePush pc: 303 op: NOT (7)
    _14700 = (_14699 == 0);
    _14699 = NOVALUE;
    // SubProg IncludePush pc: 306 op: NOP1 (159)
    // SubProg IncludePush pc: 307 op: IF (20)
    if (_14700 == 0)
    {
        DeRef(_14700);
        _14700 = NOVALUE;
        goto L8; // [307] 329
    }
    else{
        DeRef(_14700);
        _14700 = NOVALUE;
    }
    // SubProg IncludePush pc: 310 op: STARTLINE (58)

    /** scanner.e:831				file_include_depend[current_file_no] &= idx*/
    // SubProg IncludePush pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 316 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_include_depend_14160);
    _14701 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 320 op: CONCAT (15)
    if (IS_SEQUENCE(_14701) && IS_ATOM(_idx_26189)) {
        Append(&_14702, _14701, _idx_26189);
    }
    else if (IS_ATOM(_14701) && IS_SEQUENCE(_idx_26189)) {
    }
    else {
        Concat((object_ptr)&_14702, _14701, _idx_26189);
        _14701 = NOVALUE;
    }
    _14701 = NOVALUE;
    // SubProg IncludePush pc: 324 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_include_depend_14160);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35file_include_depend_14160 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14702;
    if( _1 != _14702 ){
        DeRef(_1);
    }
    _14702 = NOVALUE;
    // SubProg IncludePush pc: 328 op: NOP1 (159)
L8: // addr: 329 pc: 328 sub: 26184 op: 159
    // SubProg IncludePush pc: 329 op: STARTLINE (58)

    /** scanner.e:833			return -- ignore it*/
    // SubProg IncludePush pc: 331 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IncludePush

// block var new_file_handle_26186

// block var old_file_no_26187

// block var new_hash_26188
    DeRef(_new_hash_26188);

// block var idx_26189
    DeRef(_14697);
    _14697 = NOVALUE;
    return;
    // SubProg IncludePush pc: 334 op: NOP1 (159)
L1: // addr: 335 pc: 334 sub: 26184 op: 159
    // SubProg IncludePush pc: 335 op: STARTLINE (58)

    /** scanner.e:836		if length(IncludeStk) >= INCLUDE_LIMIT then*/
    // SubProg IncludePush pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 339 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25191)){
            _14703 = SEQ_PTR(_61IncludeStk_25191)->length;
    }
    else {
        _14703 = 1;
    }
    // SubProg IncludePush pc: 342 op: GREATEREQ_IFW_I (120)
    if (_14703 < 30)
    goto L9; // [342] 354
    // SubProg IncludePush pc: 346 op: STARTLINE (58)

    /** scanner.e:837			CompileErr(104)*/
    // SubProg IncludePush pc: 348 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(104, _21936, 0);
    // SubProg IncludePush pc: 353 op: NOP1 (159)
L9: // addr: 354 pc: 353 sub: 26184 op: 159
    // SubProg IncludePush pc: 354 op: STARTLINE (58)

    /** scanner.e:840		IncludeStk = append(IncludeStk,*/
    // SubProg IncludePush pc: 356 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 360 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 372 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 374 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 376 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 378 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 380 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 386 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 388 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 392 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 394 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 398 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 400 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 402 op: RIGHT_BRACE_N (31)
    _1 = NewS1(22);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _34current_file_no_15188;
    ((intptr_t*)_2)[2] = _34line_number_15189;
    ((intptr_t*)_2)[3] = _34src_file_15309;
    ((intptr_t*)_2)[4] = _34file_start_sym_15194;
    ((intptr_t*)_2)[5] = _34OpWarning_15255;
    ((intptr_t*)_2)[6] = _34OpTrace_15257;
    ((intptr_t*)_2)[7] = _34OpTypeCheck_15258;
    ((intptr_t*)_2)[8] = _34OpProfileTime_15260;
    ((intptr_t*)_2)[9] = _34OpProfileStatement_15259;
    RefDS(_34OpDefines_15261);
    ((intptr_t*)_2)[10] = _34OpDefines_15261;
    ((intptr_t*)_2)[11] = _34prev_OpWarning_15256;
    ((intptr_t*)_2)[12] = _34OpInline_15262;
    ((intptr_t*)_2)[13] = _34OpIndirectInclude_15263;
    ((intptr_t*)_2)[14] = _34putback_fwd_line_number_15191;
    Ref(_49putback_ForwardLine_48711);
    ((intptr_t*)_2)[15] = _49putback_ForwardLine_48711;
    ((intptr_t*)_2)[16] = _49putback_forward_bp_48715;
    ((intptr_t*)_2)[17] = _34last_fwd_line_number_15192;
    Ref(_49last_ForwardLine_48712);
    ((intptr_t*)_2)[18] = _49last_ForwardLine_48712;
    ((intptr_t*)_2)[19] = _49last_forward_bp_48716;
    Ref(_49ThisLine_48709);
    ((intptr_t*)_2)[20] = _49ThisLine_48709;
    ((intptr_t*)_2)[21] = _34fwd_line_number_15190;
    ((intptr_t*)_2)[22] = _49forward_bp_48714;
    _14705 = MAKE_SEQ(_1);
    // SubProg IncludePush pc: 427 op: APPEND (35)
    RefDS(_14705);
    Append(&_61IncludeStk_25191, _61IncludeStk_25191, _14705);
    DeRefDS(_14705);
    _14705 = NOVALUE;
    // SubProg IncludePush pc: 431 op: STARTLINE (58)

    /** scanner.e:864		file_include = append( file_include, {} )*/
    // SubProg IncludePush pc: 433 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 435 op: APPEND (35)
    RefDS(_5);
    Append(&_35file_include_14161, _35file_include_14161, _5);
    // SubProg IncludePush pc: 439 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 441 op: STARTLINE (58)

    /** scanner.e:865		file_include_by = append( file_include_by, {} )*/
    // SubProg IncludePush pc: 443 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 445 op: APPEND (35)
    RefDS(_5);
    Append(&_35file_include_by_14169, _35file_include_by_14169, _5);
    // SubProg IncludePush pc: 449 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 451 op: STARTLINE (58)

    /** scanner.e:866		for i = 1 to length( include_matrix) do*/
    // SubProg IncludePush pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 455 op: LENGTH (42)
    if (IS_SEQUENCE(_35include_matrix_14163)){
            _14709 = SEQ_PTR(_35include_matrix_14163)->length;
    }
    else {
        _14709 = 1;
    }
    // SubProg IncludePush pc: 458 op: FOR_I (125)
    {
        object _i_26301;
        _i_26301 = 1;
LA: // addr: 465 pc: 458 sub: 26184 op: 125
        if (_i_26301 > _14709){
            goto LB; // [458] 504
        }
        // SubProg IncludePush pc: 465 op: STARTLINE (58)

        /** scanner.e:867			include_matrix[i]   &= 0*/
        // SubProg IncludePush pc: 467 op: GLOBAL_INIT_CHECK (109)
        // SubProg IncludePush pc: 469 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _14710 = (object)*(((s1_ptr)_2)->base + _i_26301);
        // SubProg IncludePush pc: 473 op: CONCAT (15)
        if (IS_SEQUENCE(_14710) && IS_ATOM(0)) {
            Append(&_14711, _14710, 0);
        }
        else if (IS_ATOM(_14710) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14711, _14710, 0);
            _14710 = NOVALUE;
        }
        _14710 = NOVALUE;
        // SubProg IncludePush pc: 477 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35include_matrix_14163 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26301);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14711;
        if( _1 != _14711 ){
            DeRef(_1);
        }
        _14711 = NOVALUE;
        // SubProg IncludePush pc: 481 op: STARTLINE (58)

        /** scanner.e:868			indirect_include[i] &= 0*/
        // SubProg IncludePush pc: 483 op: GLOBAL_INIT_CHECK (109)
        // SubProg IncludePush pc: 485 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_35indirect_include_14165);
        _14712 = (object)*(((s1_ptr)_2)->base + _i_26301);
        // SubProg IncludePush pc: 489 op: CONCAT (15)
        if (IS_SEQUENCE(_14712) && IS_ATOM(0)) {
            Append(&_14713, _14712, 0);
        }
        else if (IS_ATOM(_14712) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14713, _14712, 0);
            _14712 = NOVALUE;
        }
        _14712 = NOVALUE;
        // SubProg IncludePush pc: 493 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_35indirect_include_14165);
        _2 = (object)(((s1_ptr)_2)->base + _i_26301);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14713;
        if( _1 != _14713 ){
            DeRef(_1);
        }
        _14713 = NOVALUE;
        // SubProg IncludePush pc: 497 op: STARTLINE (58)

        /** scanner.e:869		end for*/
        // SubProg IncludePush pc: 499 op: ENDFOR_INT_UP1 (54)
        _i_26301 = _i_26301 + 1;
        goto LA; // [499] 465
LB: // addr: 504 pc: 499 sub: 26184 op: 54
        ;
    }
    // SubProg IncludePush pc: 504 op: STARTLINE (58)

    /** scanner.e:870		include_matrix = append( include_matrix, repeat( 0, length( file_include ) ) )*/
    // SubProg IncludePush pc: 506 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 510 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_include_14161)){
            _14714 = SEQ_PTR(_35file_include_14161)->length;
    }
    else {
        _14714 = 1;
    }
    // SubProg IncludePush pc: 513 op: REPEAT (32)
    _14715 = Repeat(0, _14714);
    _14714 = NOVALUE;
    // SubProg IncludePush pc: 517 op: APPEND (35)
    RefDS(_14715);
    Append(&_35include_matrix_14163, _35include_matrix_14163, _14715);
    DeRefDS(_14715);
    _14715 = NOVALUE;
    // SubProg IncludePush pc: 521 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 523 op: STARTLINE (58)

    /** scanner.e:871		include_matrix[$][$] = DIRECT_INCLUDE*/
    // SubProg IncludePush pc: 525 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 527 op: LENGTH (42)
    if (IS_SEQUENCE(_35include_matrix_14163)){
            _14717 = SEQ_PTR(_35include_matrix_14163)->length;
    }
    else {
        _14717 = 1;
    }
    // SubProg IncludePush pc: 530 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14717 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 535 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14720 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14720 = 1;
    }
    _14718 = NOVALUE;
    // SubProg IncludePush pc: 538 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 540 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14720);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14718 = NOVALUE;
    // SubProg IncludePush pc: 544 op: STARTLINE (58)

    /** scanner.e:872		include_matrix[current_file_no][$] = DIRECT_INCLUDE*/
    // SubProg IncludePush pc: 546 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 550 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35include_matrix_14163 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34current_file_no_15188 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 555 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14723 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14723 = 1;
    }
    _14721 = NOVALUE;
    // SubProg IncludePush pc: 558 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 560 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14723);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14721 = NOVALUE;
    // SubProg IncludePush pc: 564 op: STARTLINE (58)

    /** scanner.e:874		indirect_include = append( indirect_include, repeat( 0, length( file_include ) ) )*/
    // SubProg IncludePush pc: 566 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 568 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 570 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_include_14161)){
            _14724 = SEQ_PTR(_35file_include_14161)->length;
    }
    else {
        _14724 = 1;
    }
    // SubProg IncludePush pc: 573 op: REPEAT (32)
    _14725 = Repeat(0, _14724);
    _14724 = NOVALUE;
    // SubProg IncludePush pc: 577 op: APPEND (35)
    RefDS(_14725);
    Append(&_35indirect_include_14165, _35indirect_include_14165, _14725);
    DeRefDS(_14725);
    _14725 = NOVALUE;
    // SubProg IncludePush pc: 581 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 583 op: STARTLINE (58)

    /** scanner.e:875		indirect_include[current_file_no][$] = OpIndirectInclude*/
    // SubProg IncludePush pc: 585 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 587 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 589 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35indirect_include_14165);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35indirect_include_14165 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34current_file_no_15188 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 594 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14729 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14729 = 1;
    }
    _14727 = NOVALUE;
    // SubProg IncludePush pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 599 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14729);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34OpIndirectInclude_15263;
    DeRef(_1);
    _14727 = NOVALUE;
    // SubProg IncludePush pc: 603 op: STARTLINE (58)

    /** scanner.e:876		OpIndirectInclude = 1*/
    // SubProg IncludePush pc: 605 op: ASSIGN (18)
    _34OpIndirectInclude_15263 = 1;
    // SubProg IncludePush pc: 608 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 610 op: STARTLINE (58)

    /** scanner.e:878		file_public  = append( file_public, {} )*/
    // SubProg IncludePush pc: 612 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 614 op: APPEND (35)
    RefDS(_5);
    Append(&_35file_public_14167, _35file_public_14167, _5);
    // SubProg IncludePush pc: 618 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 620 op: STARTLINE (58)

    /** scanner.e:879		file_public_by = append( file_public_by, {} )*/
    // SubProg IncludePush pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 624 op: APPEND (35)
    RefDS(_5);
    Append(&_35file_public_by_14171, _35file_public_by_14171, _5);
    // SubProg IncludePush pc: 628 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 630 op: STARTLINE (58)

    /** scanner.e:880		file_include[current_file_no] &= length( file_include )*/
    // SubProg IncludePush pc: 632 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 634 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 636 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 638 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_include_14161)){
            _14732 = SEQ_PTR(_35file_include_14161)->length;
    }
    else {
        _14732 = 1;
    }
    // SubProg IncludePush pc: 641 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    _14733 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 645 op: CONCAT (15)
    if (IS_SEQUENCE(_14733) && IS_ATOM(_14732)) {
        Append(&_14734, _14733, _14732);
    }
    else if (IS_ATOM(_14733) && IS_SEQUENCE(_14732)) {
    }
    else {
        Concat((object_ptr)&_14734, _14733, _14732);
        _14733 = NOVALUE;
    }
    _14733 = NOVALUE;
    _14732 = NOVALUE;
    // SubProg IncludePush pc: 649 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_include_14161);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35file_include_14161 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14734;
    if( _1 != _14734 ){
        DeRef(_1);
    }
    _14734 = NOVALUE;
    // SubProg IncludePush pc: 653 op: STARTLINE (58)

    /** scanner.e:881		add_include_by( current_file_no, length(file_include), public_include )*/
    // SubProg IncludePush pc: 655 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 657 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 659 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_include_14161)){
            _14735 = SEQ_PTR(_35file_include_14161)->length;
    }
    else {
        _14735 = 1;
    }
    // SubProg IncludePush pc: 662 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 664 op: PROC (27)
    _61add_include_by(_34current_file_no_15188, _14735, _61public_include_25185);
    _14735 = NOVALUE;
    // SubProg IncludePush pc: 669 op: STARTLINE (58)

    /** scanner.e:882		if public_include then*/
    // SubProg IncludePush pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 673 op: IF (20)
    if (_61public_include_25185 == 0)
    {
        goto LC; // [673] 707
    }
    else{
    }
    // SubProg IncludePush pc: 676 op: STARTLINE (58)

    /** scanner.e:883			file_public[current_file_no] &= length( file_public )*/
    // SubProg IncludePush pc: 678 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 680 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 684 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_public_14167)){
            _14736 = SEQ_PTR(_35file_public_14167)->length;
    }
    else {
        _14736 = 1;
    }
    // SubProg IncludePush pc: 687 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _14737 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 691 op: CONCAT (15)
    if (IS_SEQUENCE(_14737) && IS_ATOM(_14736)) {
        Append(&_14738, _14737, _14736);
    }
    else if (IS_ATOM(_14737) && IS_SEQUENCE(_14736)) {
    }
    else {
        Concat((object_ptr)&_14738, _14737, _14736);
        _14737 = NOVALUE;
    }
    _14737 = NOVALUE;
    _14736 = NOVALUE;
    // SubProg IncludePush pc: 695 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_public_14167);
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14738;
    if( _1 != _14738 ){
        DeRef(_1);
    }
    _14738 = NOVALUE;
    // SubProg IncludePush pc: 699 op: STARTLINE (58)

    /** scanner.e:884			patch_exports( current_file_no )*/
    // SubProg IncludePush pc: 701 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 703 op: PROC (27)
    _61patch_exports(_34current_file_no_15188);
    // SubProg IncludePush pc: 706 op: NOP1 (159)
LC: // addr: 707 pc: 706 sub: 26184 op: 159
    // SubProg IncludePush pc: 707 op: STARTLINE (58)

    /** scanner.e:887	ifdef STDDEBUG then*/
    // SubProg IncludePush pc: 709 op: STARTLINE (58)

    /** scanner.e:893		src_file = new_file_handle*/
    // SubProg IncludePush pc: 711 op: ASSIGN (18)
    _34src_file_15309 = _new_file_handle_26186;
    // SubProg IncludePush pc: 714 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 716 op: STARTLINE (58)

    /** scanner.e:894		file_start_sym = last_sym*/
    // SubProg IncludePush pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 720 op: ASSIGN (18)
    _34file_start_sym_15194 = _53last_sym_46266;
    // SubProg IncludePush pc: 723 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 725 op: STARTLINE (58)

    /** scanner.e:895		if current_file_no >= MAX_FILE then*/
    // SubProg IncludePush pc: 727 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 729 op: GREATEREQ_IFW (103)
    if (_34current_file_no_15188 < 256)
    goto LD; // [729] 741
    // SubProg IncludePush pc: 733 op: STARTLINE (58)

    /** scanner.e:896			CompileErr(126)*/
    // SubProg IncludePush pc: 735 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(126, _21936, 0);
    // SubProg IncludePush pc: 740 op: NOP1 (159)
LD: // addr: 741 pc: 740 sub: 26184 op: 159
    // SubProg IncludePush pc: 741 op: STARTLINE (58)

    /** scanner.e:898		known_files = append(known_files, new_include_name)*/
    // SubProg IncludePush pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 745 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 747 op: APPEND (35)
    RefDS(_34new_include_name_15310);
    Append(&_35known_files_14157, _35known_files_14157, _34new_include_name_15310);
    // SubProg IncludePush pc: 751 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 753 op: STARTLINE (58)

    /** scanner.e:899		known_files_hash &= new_hash*/
    // SubProg IncludePush pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 757 op: CONCAT (15)
    Ref(_new_hash_26188);
    Append(&_35known_files_hash_14158, _35known_files_hash_14158, _new_hash_26188);
    // SubProg IncludePush pc: 761 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 763 op: STARTLINE (58)

    /** scanner.e:900		finished_files &= 0*/
    // SubProg IncludePush pc: 765 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 767 op: CONCAT (15)
    Append(&_35finished_files_14159, _35finished_files_14159, 0);
    // SubProg IncludePush pc: 771 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 773 op: STARTLINE (58)

    /** scanner.e:901		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    // SubProg IncludePush pc: 775 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 777 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 779 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _14744 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _14744 = 1;
    }
    // SubProg IncludePush pc: 782 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _14744;
    _14745 = MAKE_SEQ(_1);
    _14744 = NOVALUE;
    // SubProg IncludePush pc: 786 op: APPEND (35)
    RefDS(_14745);
    Append(&_35file_include_depend_14160, _35file_include_depend_14160, _14745);
    DeRefDS(_14745);
    _14745 = NOVALUE;
    // SubProg IncludePush pc: 790 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 792 op: STARTLINE (58)

    /** scanner.e:902		file_include_depend[current_file_no] &= length( known_files )*/
    // SubProg IncludePush pc: 794 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 798 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 800 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _14747 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _14747 = 1;
    }
    // SubProg IncludePush pc: 803 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_35file_include_depend_14160);
    _14748 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg IncludePush pc: 807 op: CONCAT (15)
    if (IS_SEQUENCE(_14748) && IS_ATOM(_14747)) {
        Append(&_14749, _14748, _14747);
    }
    else if (IS_ATOM(_14748) && IS_SEQUENCE(_14747)) {
    }
    else {
        Concat((object_ptr)&_14749, _14748, _14747);
        _14748 = NOVALUE;
    }
    _14748 = NOVALUE;
    _14747 = NOVALUE;
    // SubProg IncludePush pc: 811 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_35file_include_depend_14160);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35file_include_depend_14160 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14749;
    if( _1 != _14749 ){
        DeRef(_1);
    }
    _14749 = NOVALUE;
    // SubProg IncludePush pc: 815 op: STARTLINE (58)

    /** scanner.e:903		check_coverage()*/
    // SubProg IncludePush pc: 817 op: PROC (27)
    _50check_coverage();
    // SubProg IncludePush pc: 819 op: STARTLINE (58)

    /** scanner.e:904		default_namespaces &= 0*/
    // SubProg IncludePush pc: 821 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 823 op: CONCAT (15)
    Append(&_61default_namespaces_25188, _61default_namespaces_25188, 0);
    // SubProg IncludePush pc: 827 op: STARTLINE (58)

    /** scanner.e:906		update_include_matrix( length( file_include ), current_file_no )*/
    // SubProg IncludePush pc: 829 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 831 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_include_14161)){
            _14751 = SEQ_PTR(_35file_include_14161)->length;
    }
    else {
        _14751 = 1;
    }
    // SubProg IncludePush pc: 834 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 836 op: PROC (27)
    _61update_include_matrix(_14751, _34current_file_no_15188);
    _14751 = NOVALUE;
    // SubProg IncludePush pc: 840 op: STARTLINE (58)

    /** scanner.e:907		old_file_no = current_file_no*/
    // SubProg IncludePush pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 844 op: ASSIGN (18)
    _old_file_no_26187 = _34current_file_no_15188;
    // SubProg IncludePush pc: 847 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 849 op: STARTLINE (58)

    /** scanner.e:908		current_file_no = length(known_files)*/
    // SubProg IncludePush pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 853 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _34current_file_no_15188 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _34current_file_no_15188 = 1;
    }
    // SubProg IncludePush pc: 856 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 858 op: STARTLINE (58)

    /** scanner.e:909		line_number = 0*/
    // SubProg IncludePush pc: 860 op: ASSIGN (18)
    _34line_number_15189 = 0;
    // SubProg IncludePush pc: 863 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 865 op: STARTLINE (58)

    /** scanner.e:910		read_line()*/
    // SubProg IncludePush pc: 867 op: PROC (27)
    _61read_line();
    // SubProg IncludePush pc: 869 op: STARTLINE (58)

    /** scanner.e:912		if new_include_space != 0 then*/
    // SubProg IncludePush pc: 871 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 873 op: NOTEQ_IFW (105)
    if (_61new_include_space_25180 == 0)
    goto LE; // [873] 897
    // SubProg IncludePush pc: 877 op: STARTLINE (58)

    /** scanner.e:913			SymTab[new_include_space][S_OBJ] = current_file_no*/
    // SubProg IncludePush pc: 879 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 881 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 883 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_61new_include_space_25180 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 888 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 892 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34current_file_no_15188;
    DeRef(_1);
    _14754 = NOVALUE;
    // SubProg IncludePush pc: 896 op: NOP1 (159)
LE: // addr: 897 pc: 896 sub: 26184 op: 159
    // SubProg IncludePush pc: 897 op: STARTLINE (58)

    /** scanner.e:915		default_namespace( )*/
    // SubProg IncludePush pc: 899 op: PROC (27)
    _61default_namespace();
    // SubProg IncludePush pc: 901 op: STARTLINE (58)

    /** scanner.e:916	end procedure*/
    // SubProg IncludePush pc: 903 op: RETURNP (29)

// Exiting block BLOCK: IncludePush

// block var new_file_handle_26186

// block var old_file_no_26187

// block var new_hash_26188
    DeRef(_new_hash_26188);

// block var idx_26189
    DeRef(_14697);
    _14697 = NOVALUE;
    return;
    // SubProg IncludePush pc: 906 op: BADRETURNF (43)
    ;
}


void _61update_include_completion(object _file_no_26411)
{
    object _fx_26420 = NOVALUE;
// skipping _14766  name type: 0
// skipping _14765  name type: 0
    object _14764 = NOVALUE; // 26432 14764
    object _14763 = NOVALUE; // 26431 14763
    object _14762 = NOVALUE; // 26428 14762
    object _14761 = NOVALUE; // 26427 14761
// skipping _14760  name type: 0
    object _14759 = NOVALUE; // 26422 14759
    object _14758 = NOVALUE; // 26419 14758
    object _14757 = NOVALUE; // 26418 14757
    object _14756 = NOVALUE; // 26415 14756
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_include_completion pc: 1 op: INTEGER_CHECK (96)
    // SubProg update_include_completion pc: 3 op: STARTLINE (58)

    /** scanner.e:919		for i = 1 to length( file_include_depend ) do*/
    // SubProg update_include_completion pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_completion pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_35file_include_depend_14160)){
            _14756 = SEQ_PTR(_35file_include_depend_14160)->length;
    }
    else {
        _14756 = 1;
    }
    // SubProg update_include_completion pc: 10 op: FOR_I (125)
    {
        object _i_26413;
        _i_26413 = 1;
L1: // addr: 17 pc: 10 sub: 26409 op: 125
        if (_i_26413 > _14756){
            goto L2; // [10] 114
        }
        // SubProg update_include_completion pc: 17 op: STARTLINE (58)

        /** scanner.e:920			if length( file_include_depend[i] ) then*/
        // SubProg update_include_completion pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_depend_14160);
        _14757 = (object)*(((s1_ptr)_2)->base + _i_26413);
        // SubProg update_include_completion pc: 25 op: LENGTH (42)
        if (IS_SEQUENCE(_14757)){
                _14758 = SEQ_PTR(_14757)->length;
        }
        else {
            _14758 = 1;
        }
        _14757 = NOVALUE;
        // SubProg update_include_completion pc: 28 op: IF (20)
        if (_14758 == 0)
        {
            _14758 = NOVALUE;
            goto L3; // [28] 105
        }
        else{
            _14758 = NOVALUE;
        }
        // SubProg update_include_completion pc: 31 op: STARTLINE (58)

        /** scanner.e:921				integer fx = find( file_no, file_include_depend[i] )*/
        // SubProg update_include_completion pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_depend_14160);
        _14759 = (object)*(((s1_ptr)_2)->base + _i_26413);
        // SubProg update_include_completion pc: 39 op: FIND_FROM (176)
        _fx_26420 = find_from(_file_no_26411, _14759, 1);
        _14759 = NOVALUE;
        // SubProg update_include_completion pc: 44 op: STARTLINE (58)

        /** scanner.e:922				if fx then*/
        // SubProg update_include_completion pc: 46 op: IF (20)
        if (_fx_26420 == 0)
        {
            goto L4; // [46] 104
        }
        else{
        }
        // SubProg update_include_completion pc: 49 op: STARTLINE (58)

        /** scanner.e:923					file_include_depend[i] = remove( file_include_depend[i], fx )*/
        // SubProg update_include_completion pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_depend_14160);
        _14761 = (object)*(((s1_ptr)_2)->base + _i_26413);
        // SubProg update_include_completion pc: 59 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_14761);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_26420)) ? _fx_26420 : (object)(DBL_PTR(_fx_26420)->dbl);
            int stop = (IS_ATOM_INT(_fx_26420)) ? _fx_26420 : (object)(DBL_PTR(_fx_26420)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
                RefDS(_14761);
                DeRef(_14762);
                _14762 = _14761;
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_14761), start, &_14762 );
                }
                else Tail(SEQ_PTR(_14761), stop+1, &_14762);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_14761), start, &_14762);
            }
            else {
                assign_slice_seq = &assign_space;
                _1 = Remove_elements(start, stop, 0);
                DeRef(_14762);
                _14762 = _1;
            }
        }
        _14761 = NOVALUE;
        // SubProg update_include_completion pc: 64 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_35file_include_depend_14160);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35file_include_depend_14160 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26413);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14762;
        if( _1 != _14762 ){
            DeRef(_1);
        }
        _14762 = NOVALUE;
        // SubProg update_include_completion pc: 68 op: STARTLINE (58)

        /** scanner.e:924					if not length( file_include_depend[i] ) then*/
        // SubProg update_include_completion pc: 70 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35file_include_depend_14160);
        _14763 = (object)*(((s1_ptr)_2)->base + _i_26413);
        // SubProg update_include_completion pc: 76 op: LENGTH (42)
        if (IS_SEQUENCE(_14763)){
                _14764 = SEQ_PTR(_14763)->length;
        }
        else {
            _14764 = 1;
        }
        _14763 = NOVALUE;
        // SubProg update_include_completion pc: 79 op: NOT_IFW (108)
        if (_14764 != 0)
        goto L5; // [79] 103
        _14764 = NOVALUE;
        // SubProg update_include_completion pc: 82 op: STARTLINE (58)

        /** scanner.e:925						finished_files[i] = 1*/
        // SubProg update_include_completion pc: 84 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 86 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_35finished_files_14159);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35finished_files_14159 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26413);
        *(intptr_t *)_2 = 1;
        // SubProg update_include_completion pc: 90 op: STARTLINE (58)

        /** scanner.e:926						if i != file_no then*/
        // SubProg update_include_completion pc: 92 op: NOTEQ_IFW_I (122)
        if (_i_26413 == _file_no_26411)
        goto L6; // [92] 102
        // SubProg update_include_completion pc: 96 op: STARTLINE (58)

        /** scanner.e:927							update_include_completion( i )*/
        // SubProg update_include_completion pc: 98 op: PROC (27)
        _61update_include_completion(_i_26413);
        // SubProg update_include_completion pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 26409 op: 159
        // SubProg update_include_completion pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 26409 op: 159
        // SubProg update_include_completion pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 26409 op: 159
        // SubProg update_include_completion pc: 104 op: NOP1 (159)
L3: // addr: 105 pc: 104 sub: 26409 op: 159
        // SubProg update_include_completion pc: 105 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fx_26420
        // SubProg update_include_completion pc: 107 op: STARTLINE (58)

        /** scanner.e:932		end for*/
        // SubProg update_include_completion pc: 109 op: ENDFOR_INT_UP1 (54)
        _i_26413 = _i_26413 + 1;
        goto L1; // [109] 17
L2: // addr: 114 pc: 109 sub: 26409 op: 54
        ;
    }
    // SubProg update_include_completion pc: 114 op: STARTLINE (58)

    /** scanner.e:933	end procedure*/
    // SubProg update_include_completion pc: 116 op: RETURNP (29)

// Exiting block BLOCK: update_include_completion

// block var file_no_26411
    _14763 = NOVALUE;
    _14757 = NOVALUE;
    return;
    // SubProg update_include_completion pc: 119 op: BADRETURNF (43)
    ;
}


object _61IncludePop()
{
    object _top_26451 = NOVALUE;
// skipping _14796  name type: 0
    object _14795 = NOVALUE; // 26509 14795
// skipping _14794  name type: 0
    object _14793 = NOVALUE; // 26505 14793
    object _14792 = NOVALUE; // 26504 14792
// skipping _14791  name type: 0
// skipping _14790  name type: 0
// skipping _14789  name type: 0
// skipping _14788  name type: 0
// skipping _14787  name type: 0
// skipping _14786  name type: 0
// skipping _14785  name type: 0
// skipping _14784  name type: 0
// skipping _14783  name type: 0
// skipping _14782  name type: 0
// skipping _14781  name type: 0
// skipping _14780  name type: 0
// skipping _14779  name type: 0
// skipping _14778  name type: 0
// skipping _14777  name type: 0
// skipping _14776  name type: 0
// skipping _14775  name type: 0
// skipping _14774  name type: 0
// skipping _14773  name type: 0
// skipping _14772  name type: 0
// skipping _14771  name type: 0
    object _14770 = NOVALUE; // 26452 14770
// skipping _14769  name type: 0
    object _14768 = NOVALUE; // 26448 14768
// skipping _14767  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg IncludePop pc: 1 op: STARTLINE (58)

    /** scanner.e:940		update_include_completion( current_file_no )*/
    // SubProg IncludePop pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 5 op: PROC (27)
    _61update_include_completion(_34current_file_no_15188);
    // SubProg IncludePop pc: 8 op: STARTLINE (58)

    /** scanner.e:941		Resolve_forward_references()*/
    // SubProg IncludePop pc: 10 op: PROC (27)
    _37Resolve_forward_references(0);
    // SubProg IncludePop pc: 13 op: STARTLINE (58)

    /** scanner.e:942		HideLocals()*/
    // SubProg IncludePop pc: 15 op: PROC (27)
    _53HideLocals();
    // SubProg IncludePop pc: 17 op: STARTLINE (58)

    /** scanner.e:944		if src_file >= 0 then*/
    // SubProg IncludePop pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 21 op: GREATEREQ_IFW (103)
    if (_34src_file_15309 < 0)
    goto L1; // [21] 39
    // SubProg IncludePop pc: 25 op: STARTLINE (58)

    /** scanner.e:945			close(src_file)*/
    // SubProg IncludePop pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 29 op: CLOSE (86)
    EClose(_34src_file_15309);
    // SubProg IncludePop pc: 31 op: STARTLINE (58)

    /** scanner.e:946			src_file = -1*/
    // SubProg IncludePop pc: 33 op: ASSIGN (18)
    _34src_file_15309 = -1;
    // SubProg IncludePop pc: 36 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 26437 op: 159
    // SubProg IncludePop pc: 39 op: STARTLINE (58)

    /** scanner.e:949		if length(IncludeStk) = 0 then*/
    // SubProg IncludePop pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25191)){
            _14768 = SEQ_PTR(_61IncludeStk_25191)->length;
    }
    else {
        _14768 = 1;
    }
    // SubProg IncludePop pc: 46 op: EQUALS_IFW_I (121)
    if (_14768 != 0)
    goto L2; // [46] 59
    // SubProg IncludePop pc: 50 op: STARTLINE (58)

    /** scanner.e:950			return FALSE  -- the end*/
    // SubProg IncludePop pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 54 op: RETURNF (28)

// Exiting block BLOCK: IncludePop

// block var top_26451
    DeRef(_top_26451);
    return _8FALSE_442;
    // SubProg IncludePop pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 26437 op: 159
    // SubProg IncludePop pc: 59 op: STARTLINE (58)

    /** scanner.e:953		sequence top = IncludeStk[$]*/
    // SubProg IncludePop pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25191)){
            _14770 = SEQ_PTR(_61IncludeStk_25191)->length;
    }
    else {
        _14770 = 1;
    }
    // SubProg IncludePop pc: 66 op: RHS_SUBS (25)
    DeRef(_top_26451);
    _2 = (object)SEQ_PTR(_61IncludeStk_25191);
    _top_26451 = (object)*(((s1_ptr)_2)->base + _14770);
    RefDS(_top_26451);
    // SubProg IncludePop pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg IncludePop pc: 72 op: STARTLINE (58)

    /** scanner.e:955		current_file_no    = top[FILE_NO]*/
    // SubProg IncludePop pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34current_file_no_15188 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_34current_file_no_15188)){
        _34current_file_no_15188 = (object)DBL_PTR(_34current_file_no_15188)->dbl;
    }
    // SubProg IncludePop pc: 80 op: STARTLINE (58)

    /** scanner.e:956		line_number        = top[LINE_NO]*/
    // SubProg IncludePop pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34line_number_15189 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_34line_number_15189)){
        _34line_number_15189 = (object)DBL_PTR(_34line_number_15189)->dbl;
    }
    // SubProg IncludePop pc: 88 op: STARTLINE (58)

    /** scanner.e:957		src_file           = top[FILE_PTR]*/
    // SubProg IncludePop pc: 90 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34src_file_15309 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_34src_file_15309)){
        _34src_file_15309 = (object)DBL_PTR(_34src_file_15309)->dbl;
    }
    // SubProg IncludePop pc: 96 op: STARTLINE (58)

    /** scanner.e:958		file_start_sym     = top[FILE_START_SYM]*/
    // SubProg IncludePop pc: 98 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34file_start_sym_15194 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_34file_start_sym_15194)){
        _34file_start_sym_15194 = (object)DBL_PTR(_34file_start_sym_15194)->dbl;
    }
    // SubProg IncludePop pc: 104 op: STARTLINE (58)

    /** scanner.e:959		OpWarning          = top[OP_WARNING]*/
    // SubProg IncludePop pc: 106 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpWarning_15255 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_34OpWarning_15255)){
        _34OpWarning_15255 = (object)DBL_PTR(_34OpWarning_15255)->dbl;
    }
    // SubProg IncludePop pc: 112 op: STARTLINE (58)

    /** scanner.e:960		OpTrace            = top[OP_TRACE]*/
    // SubProg IncludePop pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpTrace_15257 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_34OpTrace_15257)){
        _34OpTrace_15257 = (object)DBL_PTR(_34OpTrace_15257)->dbl;
    }
    // SubProg IncludePop pc: 120 op: STARTLINE (58)

    /** scanner.e:961		OpTypeCheck        = top[OP_TYPE_CHECK]*/
    // SubProg IncludePop pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpTypeCheck_15258 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_34OpTypeCheck_15258)){
        _34OpTypeCheck_15258 = (object)DBL_PTR(_34OpTypeCheck_15258)->dbl;
    }
    // SubProg IncludePop pc: 128 op: STARTLINE (58)

    /** scanner.e:962		OpProfileTime      = top[OP_PROFILE_TIME]*/
    // SubProg IncludePop pc: 130 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpProfileTime_15260 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_34OpProfileTime_15260)){
        _34OpProfileTime_15260 = (object)DBL_PTR(_34OpProfileTime_15260)->dbl;
    }
    // SubProg IncludePop pc: 136 op: STARTLINE (58)

    /** scanner.e:963		OpProfileStatement = top[OP_PROFILE_STATEMENT]*/
    // SubProg IncludePop pc: 138 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpProfileStatement_15259 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_34OpProfileStatement_15259)){
        _34OpProfileStatement_15259 = (object)DBL_PTR(_34OpProfileStatement_15259)->dbl;
    }
    // SubProg IncludePop pc: 144 op: STARTLINE (58)

    /** scanner.e:964		OpDefines          = top[OP_DEFINES]*/
    // SubProg IncludePop pc: 146 op: RHS_SUBS (25)
    DeRef(_34OpDefines_15261);
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpDefines_15261 = (object)*(((s1_ptr)_2)->base + 10);
    Ref(_34OpDefines_15261);
    // SubProg IncludePop pc: 150 op: SEQUENCE_CHECK (97)
    // SubProg IncludePop pc: 152 op: STARTLINE (58)

    /** scanner.e:965		prev_OpWarning     = top[PREV_OP_WARNING]*/
    // SubProg IncludePop pc: 154 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34prev_OpWarning_15256 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_34prev_OpWarning_15256)){
        _34prev_OpWarning_15256 = (object)DBL_PTR(_34prev_OpWarning_15256)->dbl;
    }
    // SubProg IncludePop pc: 160 op: STARTLINE (58)

    /** scanner.e:966		OpInline           = top[OP_INLINE]*/
    // SubProg IncludePop pc: 162 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpInline_15262 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_34OpInline_15262)){
        _34OpInline_15262 = (object)DBL_PTR(_34OpInline_15262)->dbl;
    }
    // SubProg IncludePop pc: 168 op: STARTLINE (58)

    /** scanner.e:967		OpIndirectInclude  = top[OP_INDIRECT_INCLUDE]*/
    // SubProg IncludePop pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34OpIndirectInclude_15263 = (object)*(((s1_ptr)_2)->base + 13);
    if (!IS_ATOM_INT(_34OpIndirectInclude_15263)){
        _34OpIndirectInclude_15263 = (object)DBL_PTR(_34OpIndirectInclude_15263)->dbl;
    }
    // SubProg IncludePop pc: 176 op: STARTLINE (58)

    /** scanner.e:968		putback_fwd_line_number = line_number -- top[PUTBACK_FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 180 op: ASSIGN (18)
    _34putback_fwd_line_number_15191 = _34line_number_15189;
    // SubProg IncludePop pc: 183 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 185 op: STARTLINE (58)

    /** scanner.e:969		putback_ForwardLine = top[PUTBACK_FORWARDLINE]*/
    // SubProg IncludePop pc: 187 op: RHS_SUBS (25)
    DeRef(_49putback_ForwardLine_48711);
    _2 = (object)SEQ_PTR(_top_26451);
    _49putback_ForwardLine_48711 = (object)*(((s1_ptr)_2)->base + 15);
    Ref(_49putback_ForwardLine_48711);
    // SubProg IncludePop pc: 191 op: STARTLINE (58)

    /** scanner.e:970		putback_forward_bp = top[PUTBACK_FORWARD_BP]*/
    // SubProg IncludePop pc: 193 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _49putback_forward_bp_48715 = (object)*(((s1_ptr)_2)->base + 16);
    if (!IS_ATOM_INT(_49putback_forward_bp_48715)){
        _49putback_forward_bp_48715 = (object)DBL_PTR(_49putback_forward_bp_48715)->dbl;
    }
    // SubProg IncludePop pc: 199 op: STARTLINE (58)

    /** scanner.e:971		last_fwd_line_number = top[LAST_FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 201 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _34last_fwd_line_number_15192 = (object)*(((s1_ptr)_2)->base + 17);
    if (!IS_ATOM_INT(_34last_fwd_line_number_15192)){
        _34last_fwd_line_number_15192 = (object)DBL_PTR(_34last_fwd_line_number_15192)->dbl;
    }
    // SubProg IncludePop pc: 207 op: STARTLINE (58)

    /** scanner.e:972		last_ForwardLine = top[LAST_FORWARDLINE]*/
    // SubProg IncludePop pc: 209 op: RHS_SUBS (25)
    DeRef(_49last_ForwardLine_48712);
    _2 = (object)SEQ_PTR(_top_26451);
    _49last_ForwardLine_48712 = (object)*(((s1_ptr)_2)->base + 18);
    Ref(_49last_ForwardLine_48712);
    // SubProg IncludePop pc: 213 op: STARTLINE (58)

    /** scanner.e:973		last_forward_bp = top[LAST_FORWARD_BP]*/
    // SubProg IncludePop pc: 215 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _49last_forward_bp_48716 = (object)*(((s1_ptr)_2)->base + 19);
    if (!IS_ATOM_INT(_49last_forward_bp_48716)){
        _49last_forward_bp_48716 = (object)DBL_PTR(_49last_forward_bp_48716)->dbl;
    }
    // SubProg IncludePop pc: 221 op: STARTLINE (58)

    /** scanner.e:974		ThisLine = top[THISLINE]*/
    // SubProg IncludePop pc: 223 op: RHS_SUBS (25)
    DeRef(_49ThisLine_48709);
    _2 = (object)SEQ_PTR(_top_26451);
    _49ThisLine_48709 = (object)*(((s1_ptr)_2)->base + 20);
    Ref(_49ThisLine_48709);
    // SubProg IncludePop pc: 227 op: STARTLINE (58)

    /** scanner.e:976		fwd_line_number = line_number --top[FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 231 op: ASSIGN (18)
    _34fwd_line_number_15190 = _34line_number_15189;
    // SubProg IncludePop pc: 234 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 236 op: STARTLINE (58)

    /** scanner.e:977		forward_bp = top[FORWARD_BP]*/
    // SubProg IncludePop pc: 238 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26451);
    _49forward_bp_48714 = (object)*(((s1_ptr)_2)->base + 22);
    if (!IS_ATOM_INT(_49forward_bp_48714)){
        _49forward_bp_48714 = (object)DBL_PTR(_49forward_bp_48714)->dbl;
    }
    // SubProg IncludePop pc: 244 op: STARTLINE (58)

    /** scanner.e:978		ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 248 op: ASSIGN (18)
    Ref(_49ThisLine_48709);
    DeRef(_49ForwardLine_48710);
    _49ForwardLine_48710 = _49ThisLine_48709;
    // SubProg IncludePop pc: 251 op: STARTLINE (58)

    /** scanner.e:980		putback_ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 255 op: ASSIGN (18)
    Ref(_49ThisLine_48709);
    DeRef(_49putback_ForwardLine_48711);
    _49putback_ForwardLine_48711 = _49ThisLine_48709;
    // SubProg IncludePop pc: 258 op: STARTLINE (58)

    /** scanner.e:981		last_ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 262 op: ASSIGN (18)
    Ref(_49ThisLine_48709);
    DeRef(_49last_ForwardLine_48712);
    _49last_ForwardLine_48712 = _49ThisLine_48709;
    // SubProg IncludePop pc: 265 op: STARTLINE (58)

    /** scanner.e:983		IncludeStk = IncludeStk[1..$-1]*/
    // SubProg IncludePop pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 269 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25191)){
            _14792 = SEQ_PTR(_61IncludeStk_25191)->length;
    }
    else {
        _14792 = 1;
    }
    // SubProg IncludePop pc: 272 op: MINUS (10)
    _14793 = _14792 - 1;
    _14792 = NOVALUE;
    // SubProg IncludePop pc: 276 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_61IncludeStk_25191;
    RHS_Slice(_61IncludeStk_25191, 1, _14793);
    // SubProg IncludePop pc: 281 op: STARTLINE (58)

    /** scanner.e:984		SymTab[TopLevelSub][S_CODE] = Code*/
    // SubProg IncludePop pc: 283 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 287 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34TopLevelSub_15195 + ((s1_ptr)_2)->base);
    // SubProg IncludePop pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 296 op: PASSIGN_SUBS (162)
    RefDS(_34Code_15276);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_CODE_14855))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_CODE_14855);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34Code_15276;
    DeRef(_1);
    _14795 = NOVALUE;
    // SubProg IncludePop pc: 300 op: STARTLINE (58)

    /** scanner.e:987		return TRUE*/
    // SubProg IncludePop pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 304 op: RETURNF (28)

// Exiting block BLOCK: IncludePop

// block var top_26451
    DeRefDS(_top_26451);
    _14793 = NOVALUE;
    return _8TRUE_444;
    // SubProg IncludePop pc: 308 op: BADRETURNF (43)
    ;
}


object _61MakeInt(object _text_26550, object _nBase_26551)
{
    object _num_26552 = NOVALUE;
    object _fnum_26553 = NOVALUE;
    object _digit_26554 = NOVALUE;
    object _maxchk_26555 = NOVALUE;
// skipping _14845  name type: 0
// skipping _14844  name type: 0
    object _14843 = NOVALUE; // 26587 14843
// skipping _14842  name type: 0
    object _14841 = NOVALUE; // 26584 14841
// skipping _14840  name type: 0
    object _14839 = NOVALUE; // 26581 14839
// skipping _14838  name type: 0
// skipping _14837  name type: 0
    object _14836 = NOVALUE; // 26576 14836
    object _14835 = NOVALUE; // 26575 14835
    object _14834 = NOVALUE; // 26573 14834
// skipping _14833  name type: 0
    object _14832 = NOVALUE; // 26571 14832
// skipping _14831  name type: 0
    object _14830 = NOVALUE; // 26568 14830
    object _14829 = NOVALUE; // 26567 14829
    object _14828 = NOVALUE; // 26563 14828
// skipping _14827  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg MakeInt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg MakeInt pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_nBase_26551)) {
        _1 = (object)(DBL_PTR(_nBase_26551)->dbl);
        DeRefDS(_nBase_26551);
        _nBase_26551 = _1;
    }
    // SubProg MakeInt pc: 5 op: STARTLINE (58)

    /** scanner.e:1018		switch nBase do*/
    // SubProg MakeInt pc: 7 op: SWITCH_I (193)
    _0 = _nBase_26551;
    switch ( _0 ){ 
        // SubProg MakeInt pc: 12 op: STARTLINE (58)

        /** scanner.e:1019			case 2 then*/
        // SubProg MakeInt pc: 14 op: CASE (186)
        case 2:
        // SubProg MakeInt pc: 16 op: STARTLINE (58)

        /** scanner.e:1020				maxchk = MAXCHK2*/
        // SubProg MakeInt pc: 18 op: ASSIGN_I (113)
        _maxchk_26555 = 536870911;
        // SubProg MakeInt pc: 21 op: ELSE (23)
        goto L1; // [21] 82
        // SubProg MakeInt pc: 23 op: STARTLINE (58)

        /** scanner.e:1022			case 8 then*/
        // SubProg MakeInt pc: 25 op: CASE (186)
        case 8:
        // SubProg MakeInt pc: 27 op: STARTLINE (58)

        /** scanner.e:1023				maxchk = MAXCHK8*/
        // SubProg MakeInt pc: 29 op: ASSIGN_I (113)
        _maxchk_26555 = 134217727;
        // SubProg MakeInt pc: 32 op: ELSE (23)
        goto L1; // [32] 82
        // SubProg MakeInt pc: 34 op: STARTLINE (58)

        /** scanner.e:1025			case 10 then*/
        // SubProg MakeInt pc: 36 op: CASE (186)
        case 10:
        // SubProg MakeInt pc: 38 op: STARTLINE (58)

        /** scanner.e:1027				num = find(text, common_int_text)*/
        // SubProg MakeInt pc: 40 op: GLOBAL_INIT_CHECK (109)
        // SubProg MakeInt pc: 42 op: FIND_FROM (176)
        _num_26552 = find_from(_text_26550, _61common_int_text_26527, 1);
        // SubProg MakeInt pc: 47 op: STARTLINE (58)

        /** scanner.e:1028				if num then*/
        // SubProg MakeInt pc: 49 op: IF (20)
        if (_num_26552 == 0)
        {
            goto L2; // [49] 65
        }
        else{
        }
        // SubProg MakeInt pc: 52 op: STARTLINE (58)

        /** scanner.e:1029					return common_ints[num]*/
        // SubProg MakeInt pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg MakeInt pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_61common_ints_26545);
        _14828 = (object)*(((s1_ptr)_2)->base + _num_26552);
        // SubProg MakeInt pc: 60 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26550
        DeRefDS(_text_26550);

// block var nBase_26551

// block var num_26552

// block var fnum_26553
        DeRef(_fnum_26553);

// block var digit_26554

// block var maxchk_26555
        return _14828;
        // SubProg MakeInt pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 26548 op: 159
        // SubProg MakeInt pc: 65 op: STARTLINE (58)

        /** scanner.e:1032				maxchk = MAXCHK10*/
        // SubProg MakeInt pc: 67 op: ASSIGN_I (113)
        _maxchk_26555 = 107374181;
        // SubProg MakeInt pc: 70 op: ELSE (23)
        goto L1; // [70] 82
        // SubProg MakeInt pc: 72 op: STARTLINE (58)

        /** scanner.e:1034			case 16 then*/
        // SubProg MakeInt pc: 74 op: CASE (186)
        case 16:
        // SubProg MakeInt pc: 76 op: STARTLINE (58)

        /** scanner.e:1035				maxchk = MAXCHK16*/
        // SubProg MakeInt pc: 78 op: ASSIGN_I (113)
        _maxchk_26555 = 67108863;
        // SubProg MakeInt pc: 81 op: NOPSWITCH (187)
    ;}L1: // addr: 82 pc: 81 sub: 26548 op: 187
    // SubProg MakeInt pc: 82 op: STARTLINE (58)

    /** scanner.e:1039		num = 0*/
    // SubProg MakeInt pc: 84 op: ASSIGN_I (113)
    _num_26552 = 0;
    // SubProg MakeInt pc: 87 op: STARTLINE (58)

    /** scanner.e:1040		fnum = 0*/
    // SubProg MakeInt pc: 89 op: ASSIGN (18)
    DeRef(_fnum_26553);
    _fnum_26553 = 0;
    // SubProg MakeInt pc: 92 op: STARTLINE (58)

    /** scanner.e:1041		for i = 1 to length(text) do*/
    // SubProg MakeInt pc: 94 op: LENGTH (42)
    if (IS_SEQUENCE(_text_26550)){
            _14829 = SEQ_PTR(_text_26550)->length;
    }
    else {
        _14829 = 1;
    }
    // SubProg MakeInt pc: 97 op: FOR_I (125)
    {
        object _i_26566;
        _i_26566 = 1;
L3: // addr: 104 pc: 97 sub: 26548 op: 125
        if (_i_26566 > _14829){
            goto L4; // [97] 212
        }
        // SubProg MakeInt pc: 104 op: STARTLINE (58)

        /** scanner.e:1042			digit = (text[i] - '0')*/
        // SubProg MakeInt pc: 106 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_26550);
        _14830 = (object)*(((s1_ptr)_2)->base + _i_26566);
        // SubProg MakeInt pc: 110 op: MINUS (10)
        if (IS_ATOM_INT(_14830)) {
            _digit_26554 = _14830 - 48;
        }
        else {
            _digit_26554 = binary_op(MINUS, _14830, 48);
        }
        _14830 = NOVALUE;
        // SubProg MakeInt pc: 114 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_digit_26554)) {
            _1 = (object)(DBL_PTR(_digit_26554)->dbl);
            DeRefDS(_digit_26554);
            _digit_26554 = _1;
        }
        // SubProg MakeInt pc: 116 op: STARTLINE (58)

        /** scanner.e:1043			if digit >= nBase or digit < 0 then*/
        // SubProg MakeInt pc: 118 op: GREATEREQ (2)
        _14832 = (_digit_26554 >= _nBase_26551);
        // SubProg MakeInt pc: 122 op: SC1_OR_IF (147)
        if (_14832 != 0) {
            goto L5; // [122] 135
        }
        // SubProg MakeInt pc: 126 op: LESS (1)
        _14834 = (_digit_26554 < 0);
        // SubProg MakeInt pc: 130 op: NOP1 (159)
        // SubProg MakeInt pc: 131 op: IF (20)
        if (_14834 == 0)
        {
            DeRef(_14834);
            _14834 = NOVALUE;
            goto L6; // [131] 151
        }
        else{
            DeRef(_14834);
            _14834 = NOVALUE;
        }
        // SubProg MakeInt pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 26548 op: 159
        // SubProg MakeInt pc: 135 op: STARTLINE (58)

        /** scanner.e:1044				CompileErr(62, {text[i],i})*/
        // SubProg MakeInt pc: 137 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_26550);
        _14835 = (object)*(((s1_ptr)_2)->base + _i_26566);
        // SubProg MakeInt pc: 141 op: RIGHT_BRACE_2 (85)
        Ref(_14835);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _14835;
        ((intptr_t *)_2)[2] = _i_26566;
        _14836 = MAKE_SEQ(_1);
        _14835 = NOVALUE;
        // SubProg MakeInt pc: 145 op: PROC (27)
        _49CompileErr(62, _14836, 0);
        _14836 = NOVALUE;
        // SubProg MakeInt pc: 150 op: NOP1 (159)
L6: // addr: 151 pc: 150 sub: 26548 op: 159
        // SubProg MakeInt pc: 151 op: STARTLINE (58)

        /** scanner.e:1046			if fnum = 0 then*/
        // SubProg MakeInt pc: 153 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _fnum_26553, 0)){
            goto L7; // [153] 194
        }
        // SubProg MakeInt pc: 157 op: STARTLINE (58)

        /** scanner.e:1047				if num <= maxchk then*/
        // SubProg MakeInt pc: 159 op: PRIVATE_INIT_CHECK (30)
        // SubProg MakeInt pc: 161 op: LESSEQ_IFW_I (123)
        if (_num_26552 > _maxchk_26555)
        goto L8; // [161] 180
        // SubProg MakeInt pc: 165 op: STARTLINE (58)

        /** scanner.e:1048					num = num * nBase + digit*/
        // SubProg MakeInt pc: 167 op: MULTIPLY (13)
        if (_num_26552 == (short)_num_26552 && _nBase_26551 <= INT15 && _nBase_26551 >= -INT15){
            _14839 = _num_26552 * _nBase_26551;
        }
        else{
            _14839 = NewDouble(_num_26552 * (eudouble)_nBase_26551);
        }
        // SubProg MakeInt pc: 171 op: PLUS (11)
        if (IS_ATOM_INT(_14839)) {
            _num_26552 = _14839 + _digit_26554;
        }
        else {
            _num_26552 = NewDouble(DBL_PTR(_14839)->dbl + (eudouble)_digit_26554);
        }
        DeRef(_14839);
        _14839 = NOVALUE;
        // SubProg MakeInt pc: 175 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_num_26552)) {
            _1 = (object)(DBL_PTR(_num_26552)->dbl);
            DeRefDS(_num_26552);
            _num_26552 = _1;
        }
        // SubProg MakeInt pc: 177 op: ELSE (23)
        goto L9; // [177] 205
        // SubProg MakeInt pc: 179 op: NOP1 (159)
L8: // addr: 180 pc: 179 sub: 26548 op: 159
        // SubProg MakeInt pc: 180 op: STARTLINE (58)

        /** scanner.e:1050					fnum = num * nBase + digit*/
        // SubProg MakeInt pc: 182 op: MULTIPLY (13)
        if (_num_26552 == (short)_num_26552 && _nBase_26551 <= INT15 && _nBase_26551 >= -INT15){
            _14841 = _num_26552 * _nBase_26551;
        }
        else{
            _14841 = NewDouble(_num_26552 * (eudouble)_nBase_26551);
        }
        // SubProg MakeInt pc: 186 op: PLUS (11)
        DeRef(_fnum_26553);
        if (IS_ATOM_INT(_14841)) {
            _fnum_26553 = _14841 + _digit_26554;
            if ((object)((uintptr_t)_fnum_26553 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26553 = NewDouble((eudouble)_fnum_26553);
            }
        }
        else {
            _fnum_26553 = NewDouble(DBL_PTR(_14841)->dbl + (eudouble)_digit_26554);
        }
        DeRef(_14841);
        _14841 = NOVALUE;
        // SubProg MakeInt pc: 190 op: NOP1 (159)
        // SubProg MakeInt pc: 191 op: ELSE (23)
        goto L9; // [191] 205
        // SubProg MakeInt pc: 193 op: NOP1 (159)
L7: // addr: 194 pc: 193 sub: 26548 op: 159
        // SubProg MakeInt pc: 194 op: STARTLINE (58)

        /** scanner.e:1053				fnum = fnum * nBase + digit*/
        // SubProg MakeInt pc: 196 op: MULTIPLY (13)
        if (IS_ATOM_INT(_fnum_26553)) {
            if (_fnum_26553 == (short)_fnum_26553 && _nBase_26551 <= INT15 && _nBase_26551 >= -INT15){
                _14843 = _fnum_26553 * _nBase_26551;
            }
            else{
                _14843 = NewDouble(_fnum_26553 * (eudouble)_nBase_26551);
            }
        }
        else {
            _14843 = NewDouble(DBL_PTR(_fnum_26553)->dbl * (eudouble)_nBase_26551);
        }
        // SubProg MakeInt pc: 200 op: PLUS (11)
        DeRef(_fnum_26553);
        if (IS_ATOM_INT(_14843)) {
            _fnum_26553 = _14843 + _digit_26554;
            if ((object)((uintptr_t)_fnum_26553 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26553 = NewDouble((eudouble)_fnum_26553);
            }
        }
        else {
            _fnum_26553 = NewDouble(DBL_PTR(_14843)->dbl + (eudouble)_digit_26554);
        }
        DeRef(_14843);
        _14843 = NOVALUE;
        // SubProg MakeInt pc: 204 op: NOP1 (159)
L9: // addr: 205 pc: 204 sub: 26548 op: 159
        // SubProg MakeInt pc: 205 op: STARTLINE (58)

        /** scanner.e:1055		end for*/
        // SubProg MakeInt pc: 207 op: ENDFOR_INT_UP1 (54)
        _i_26566 = _i_26566 + 1;
        goto L3; // [207] 104
L4: // addr: 212 pc: 207 sub: 26548 op: 54
        ;
    }
    // SubProg MakeInt pc: 212 op: STARTLINE (58)

    /** scanner.e:1057		if fnum = 0 then*/
    // SubProg MakeInt pc: 214 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _fnum_26553, 0)){
        goto LA; // [214] 227
    }
    // SubProg MakeInt pc: 218 op: STARTLINE (58)

    /** scanner.e:1058			return num*/
    // SubProg MakeInt pc: 220 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26550
    DeRefDS(_text_26550);

// block var nBase_26551

// block var fnum_26553
    DeRef(_fnum_26553);

// block var digit_26554

// block var maxchk_26555
    DeRef(_14832);
    _14832 = NOVALUE;
    _14828 = NOVALUE;
    return _num_26552;
    // SubProg MakeInt pc: 224 op: ELSE (23)
    goto LB; // [224] 234
    // SubProg MakeInt pc: 226 op: NOP1 (159)
LA: // addr: 227 pc: 226 sub: 26548 op: 159
    // SubProg MakeInt pc: 227 op: STARTLINE (58)

    /** scanner.e:1060			return fnum*/
    // SubProg MakeInt pc: 229 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26550
    DeRefDS(_text_26550);

// block var nBase_26551

// block var num_26552

// block var digit_26554

// block var maxchk_26555
    DeRef(_14832);
    _14832 = NOVALUE;
    _14828 = NOVALUE;
    return _fnum_26553;
    // SubProg MakeInt pc: 233 op: NOP1 (159)
LB: // addr: 234 pc: 233 sub: 26548 op: 159
    // SubProg MakeInt pc: 234 op: BADRETURNF (43)
    ;
}


object _61GetHexChar(object _cnt_26594, object _errno_26595)
{
    object _val_26596 = NOVALUE;
    object _d_26597 = NOVALUE;
// skipping _14857  name type: 0
// skipping _14856  name type: 0
// skipping _14855  name type: 0
// skipping _14854  name type: 0
    object _14853 = NOVALUE; // 26609 14853
    object _14852 = NOVALUE; // 26608 14852
// skipping _14851  name type: 0
// skipping _14850  name type: 0
// skipping _14849  name type: 0
    object _14847 = NOVALUE; // 26600 14847
// skipping _14846  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetHexChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetHexChar pc: 3 op: INTEGER_CHECK (96)
    // SubProg GetHexChar pc: 5 op: STARTLINE (58)

    /** scanner.e:1067		val = 0*/
    // SubProg GetHexChar pc: 7 op: ASSIGN (18)
    DeRef(_val_26596);
    _val_26596 = 0;
    // SubProg GetHexChar pc: 10 op: STARTLINE (58)

    /** scanner.e:1069		while cnt > 0 do*/
    // SubProg GetHexChar pc: 12 op: NOP2 (110)
    // SubProg GetHexChar pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 26592 op: 158
    // SubProg GetHexChar pc: 15 op: GREATER_IFW_I (124)
    if (_cnt_26594 <= 0)
    goto L2; // [15] 88
    // SubProg GetHexChar pc: 19 op: STARTLINE (58)

    /** scanner.e:1070			d = find(getch(), "0123456789ABCDEFabcdef_")*/
    // SubProg GetHexChar pc: 21 op: PROC (27)
    _14847 = _61getch();
    // SubProg GetHexChar pc: 24 op: FIND_FROM (176)
    _d_26597 = find_from(_14847, _14848, 1);
    DeRef(_14847);
    _14847 = NOVALUE;
    // SubProg GetHexChar pc: 29 op: STARTLINE (58)

    /** scanner.e:1071			if d = 0 then*/
    // SubProg GetHexChar pc: 31 op: EQUALS_IFW_I (121)
    if (_d_26597 != 0)
    goto L3; // [31] 43
    // SubProg GetHexChar pc: 35 op: STARTLINE (58)

    /** scanner.e:1072				CompileErr( errno )*/
    // SubProg GetHexChar pc: 37 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(_errno_26595, _21936, 0);
    // SubProg GetHexChar pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 26592 op: 159
    // SubProg GetHexChar pc: 43 op: STARTLINE (58)

    /** scanner.e:1074			if d != 23 then*/
    // SubProg GetHexChar pc: 45 op: NOTEQ_IFW_I (122)
    if (_d_26597 == 23)
    goto L1; // [45] 15
    // SubProg GetHexChar pc: 49 op: STARTLINE (58)

    /** scanner.e:1075				val = val * 16 + d - 1*/
    // SubProg GetHexChar pc: 51 op: MULTIPLY (13)
    if (IS_ATOM_INT(_val_26596)) {
        if (_val_26596 == (short)_val_26596){
            _14852 = _val_26596 * 16;
        }
        else{
            _14852 = NewDouble(_val_26596 * (eudouble)16);
        }
    }
    else {
        _14852 = NewDouble(DBL_PTR(_val_26596)->dbl * (eudouble)16);
    }
    // SubProg GetHexChar pc: 55 op: PLUS (11)
    if (IS_ATOM_INT(_14852)) {
        _14853 = _14852 + _d_26597;
        if ((object)((uintptr_t)_14853 + (uintptr_t)HIGH_BITS) >= 0){
            _14853 = NewDouble((eudouble)_14853);
        }
    }
    else {
        _14853 = NewDouble(DBL_PTR(_14852)->dbl + (eudouble)_d_26597);
    }
    DeRef(_14852);
    _14852 = NOVALUE;
    // SubProg GetHexChar pc: 59 op: MINUS (10)
    DeRef(_val_26596);
    if (IS_ATOM_INT(_14853)) {
        _val_26596 = _14853 - 1;
        if ((object)((uintptr_t)_val_26596 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26596 = NewDouble((eudouble)_val_26596);
        }
    }
    else {
        _val_26596 = NewDouble(DBL_PTR(_14853)->dbl - (eudouble)1);
    }
    DeRef(_14853);
    _14853 = NOVALUE;
    // SubProg GetHexChar pc: 63 op: STARTLINE (58)

    /** scanner.e:1076				if d > 16 then*/
    // SubProg GetHexChar pc: 65 op: GREATER_IFW_I (124)
    if (_d_26597 <= 16)
    goto L4; // [65] 76
    // SubProg GetHexChar pc: 69 op: STARTLINE (58)

    /** scanner.e:1077					val -= 6*/
    // SubProg GetHexChar pc: 71 op: MINUS (10)
    _0 = _val_26596;
    if (IS_ATOM_INT(_val_26596)) {
        _val_26596 = _val_26596 - 6;
        if ((object)((uintptr_t)_val_26596 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26596 = NewDouble((eudouble)_val_26596);
        }
    }
    else {
        _val_26596 = NewDouble(DBL_PTR(_val_26596)->dbl - (eudouble)6);
    }
    DeRef(_0);
    // SubProg GetHexChar pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 26592 op: 159
    // SubProg GetHexChar pc: 76 op: STARTLINE (58)

    /** scanner.e:1079				cnt -= 1*/
    // SubProg GetHexChar pc: 78 op: MINUS_I (116)
    _cnt_26594 = _cnt_26594 - 1;
    // SubProg GetHexChar pc: 82 op: NOP1 (159)
    // SubProg GetHexChar pc: 83 op: STARTLINE (58)

    /** scanner.e:1081		end while*/
    // SubProg GetHexChar pc: 85 op: ENDWHILE (22)
    goto L1; // [85] 15
    // SubProg GetHexChar pc: 87 op: NOP1 (159)
L2: // addr: 88 pc: 87 sub: 26592 op: 159
    // SubProg GetHexChar pc: 88 op: STARTLINE (58)

    /** scanner.e:1083		return val*/
    // SubProg GetHexChar pc: 90 op: RETURNF (28)

// Exiting block BLOCK: GetHexChar

// block var cnt_26594

// block var errno_26595

// block var d_26597
    return _val_26596;
    // SubProg GetHexChar pc: 94 op: BADRETURNF (43)
    ;
}


object _61GetBinaryChar(object _delim_26617)
{
    object _val_26618 = NOVALUE;
    object _d_26619 = NOVALUE;
    object _vchars_26620 = NOVALUE;
    object _cnt_26623 = NOVALUE;
// skipping _14870  name type: 0
// skipping _14869  name type: 0
// skipping _14868  name type: 0
    object _14867 = NOVALUE; // 26637 14867
    object _14866 = NOVALUE; // 26636 14866
// skipping _14865  name type: 0
// skipping _14864  name type: 0
// skipping _14863  name type: 0
// skipping _14862  name type: 0
// skipping _14861  name type: 0
    object _14860 = NOVALUE; // 26625 14860
// skipping _14859  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetBinaryChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetBinaryChar pc: 3 op: STARTLINE (58)

    /** scanner.e:1089		sequence vchars = "01_ " & delim*/
    // SubProg GetBinaryChar pc: 5 op: CONCAT (15)
    Append(&_vchars_26620, _14858, _delim_26617);
    // SubProg GetBinaryChar pc: 9 op: STARTLINE (58)

    /** scanner.e:1090		integer cnt = 0*/
    // SubProg GetBinaryChar pc: 11 op: ASSIGN_I (113)
    _cnt_26623 = 0;
    // SubProg GetBinaryChar pc: 14 op: STARTLINE (58)

    /** scanner.e:1091		val = 0*/
    // SubProg GetBinaryChar pc: 16 op: ASSIGN (18)
    DeRef(_val_26618);
    _val_26618 = 0;
    // SubProg GetBinaryChar pc: 19 op: STARTLINE (58)

    /** scanner.e:1092		while 1 do*/
    // SubProg GetBinaryChar pc: 21 op: NOP2 (110)
    // SubProg GetBinaryChar pc: 23 op: NOPWHILE (158)
L1: // addr: 24 pc: 23 sub: 26615 op: 158
    // SubProg GetBinaryChar pc: 24 op: STARTLINE (58)

    /** scanner.e:1093			d = find(getch(), vchars)*/
    // SubProg GetBinaryChar pc: 26 op: PROC (27)
    _14860 = _61getch();
    // SubProg GetBinaryChar pc: 29 op: FIND_FROM (176)
    _d_26619 = find_from(_14860, _vchars_26620, 1);
    DeRef(_14860);
    _14860 = NOVALUE;
    // SubProg GetBinaryChar pc: 34 op: STARTLINE (58)

    /** scanner.e:1094			if d = 0 then*/
    // SubProg GetBinaryChar pc: 36 op: EQUALS_IFW_I (121)
    if (_d_26619 != 0)
    goto L2; // [36] 48
    // SubProg GetBinaryChar pc: 40 op: STARTLINE (58)

    /** scanner.e:1095				CompileErr( 343 )*/
    // SubProg GetBinaryChar pc: 42 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(343, _21936, 0);
    // SubProg GetBinaryChar pc: 47 op: NOP1 (159)
L2: // addr: 48 pc: 47 sub: 26615 op: 159
    // SubProg GetBinaryChar pc: 48 op: STARTLINE (58)

    /** scanner.e:1097			if d = 5 then*/
    // SubProg GetBinaryChar pc: 50 op: EQUALS_IFW_I (121)
    if (_d_26619 != 5)
    goto L3; // [50] 63
    // SubProg GetBinaryChar pc: 54 op: STARTLINE (58)

    /** scanner.e:1098				ungetch()*/
    // SubProg GetBinaryChar pc: 56 op: PROC (27)
    _61ungetch();
    // SubProg GetBinaryChar pc: 58 op: STARTLINE (58)

    /** scanner.e:1099				exit*/
    // SubProg GetBinaryChar pc: 60 op: EXIT (61)
    goto L4; // [60] 106
    // SubProg GetBinaryChar pc: 62 op: NOP1 (159)
L3: // addr: 63 pc: 62 sub: 26615 op: 159
    // SubProg GetBinaryChar pc: 63 op: STARTLINE (58)

    /** scanner.e:1101			if d = 4 then*/
    // SubProg GetBinaryChar pc: 65 op: EQUALS_IFW_I (121)
    if (_d_26619 != 4)
    goto L5; // [65] 74
    // SubProg GetBinaryChar pc: 69 op: STARTLINE (58)

    /** scanner.e:1102				exit*/
    // SubProg GetBinaryChar pc: 71 op: EXIT (61)
    goto L4; // [71] 106
    // SubProg GetBinaryChar pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 26615 op: 159
    // SubProg GetBinaryChar pc: 74 op: STARTLINE (58)

    /** scanner.e:1104			if d != 3 then*/
    // SubProg GetBinaryChar pc: 76 op: NOTEQ_IFW_I (122)
    if (_d_26619 == 3)
    goto L1; // [76] 24
    // SubProg GetBinaryChar pc: 80 op: STARTLINE (58)

    /** scanner.e:1105				val = val * 2 + d - 1*/
    // SubProg GetBinaryChar pc: 82 op: PLUS (11)
    if (IS_ATOM_INT(_val_26618) && IS_ATOM_INT(_val_26618)) {
        _14866 = _val_26618 + _val_26618;
        if ((object)((uintptr_t)_14866 + (uintptr_t)HIGH_BITS) >= 0){
            _14866 = NewDouble((eudouble)_14866);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26618)) {
            _14866 = NewDouble((eudouble)_val_26618 + DBL_PTR(_val_26618)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26618)) {
                _14866 = NewDouble(DBL_PTR(_val_26618)->dbl + (eudouble)_val_26618);
            }
            else
            _14866 = NewDouble(DBL_PTR(_val_26618)->dbl + DBL_PTR(_val_26618)->dbl);
        }
    }
    // SubProg GetBinaryChar pc: 86 op: PLUS (11)
    if (IS_ATOM_INT(_14866)) {
        _14867 = _14866 + _d_26619;
        if ((object)((uintptr_t)_14867 + (uintptr_t)HIGH_BITS) >= 0){
            _14867 = NewDouble((eudouble)_14867);
        }
    }
    else {
        _14867 = NewDouble(DBL_PTR(_14866)->dbl + (eudouble)_d_26619);
    }
    DeRef(_14866);
    _14866 = NOVALUE;
    // SubProg GetBinaryChar pc: 90 op: MINUS (10)
    DeRef(_val_26618);
    if (IS_ATOM_INT(_14867)) {
        _val_26618 = _14867 - 1;
        if ((object)((uintptr_t)_val_26618 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26618 = NewDouble((eudouble)_val_26618);
        }
    }
    else {
        _val_26618 = NewDouble(DBL_PTR(_14867)->dbl - (eudouble)1);
    }
    DeRef(_14867);
    _14867 = NOVALUE;
    // SubProg GetBinaryChar pc: 94 op: STARTLINE (58)

    /** scanner.e:1106				cnt += 1*/
    // SubProg GetBinaryChar pc: 96 op: PLUS1_I (117)
    _cnt_26623 = _cnt_26623 + 1;
    // SubProg GetBinaryChar pc: 100 op: NOP1 (159)
    // SubProg GetBinaryChar pc: 101 op: STARTLINE (58)

    /** scanner.e:1108		end while*/
    // SubProg GetBinaryChar pc: 103 op: ENDWHILE (22)
    goto L1; // [103] 24
    // SubProg GetBinaryChar pc: 105 op: NOP1 (159)
L4: // addr: 106 pc: 105 sub: 26615 op: 159
    // SubProg GetBinaryChar pc: 106 op: STARTLINE (58)

    /** scanner.e:1110		if cnt = 0 then*/
    // SubProg GetBinaryChar pc: 108 op: EQUALS_IFW_I (121)
    if (_cnt_26623 != 0)
    goto L6; // [108] 120
    // SubProg GetBinaryChar pc: 112 op: STARTLINE (58)

    /** scanner.e:1111			CompileErr(343)*/
    // SubProg GetBinaryChar pc: 114 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(343, _21936, 0);
    // SubProg GetBinaryChar pc: 119 op: NOP1 (159)
L6: // addr: 120 pc: 119 sub: 26615 op: 159
    // SubProg GetBinaryChar pc: 120 op: STARTLINE (58)

    /** scanner.e:1113		return val*/
    // SubProg GetBinaryChar pc: 122 op: RETURNF (28)

// Exiting block BLOCK: GetBinaryChar

// block var delim_26617

// block var d_26619

// block var vchars_26620
    DeRefi(_vchars_26620);

// block var cnt_26623
    return _val_26618;
    // SubProg GetBinaryChar pc: 126 op: BADRETURNF (43)
    ;
}


object _61EscapeChar(object _delim_26645)
{
    object _c_26646 = NOVALUE;
// skipping _14877  name type: 0
// skipping _14876  name type: 0
// skipping _14875  name type: 0
// skipping _14874  name type: 0
// skipping _14871  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg EscapeChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg EscapeChar pc: 3 op: STARTLINE (58)

    /** scanner.e:1121		c = getch()*/
    // SubProg EscapeChar pc: 5 op: PROC (27)
    _0 = _c_26646;
    _c_26646 = _61getch();
    DeRef(_0);
    // SubProg EscapeChar pc: 8 op: STARTLINE (58)

    /** scanner.e:1122		switch c do*/
    // SubProg EscapeChar pc: 10 op: SWITCH_I (193)
    if (IS_SEQUENCE(_c_26646) ){
        goto L1; // [10] 135
    }
    if(!IS_ATOM_INT(_c_26646)){
        if( (DBL_PTR(_c_26646)->dbl != (eudouble) ((object) DBL_PTR(_c_26646)->dbl) ) ){
            goto L1; // [10] 135
        }
        _0 = (object) DBL_PTR(_c_26646)->dbl;
    }
    else {
        _0 = _c_26646;
    };
    switch ( _0 ){ 
        // SubProg EscapeChar pc: 15 op: STARTLINE (58)

        /** scanner.e:1123			case 'n' then*/
        // SubProg EscapeChar pc: 17 op: CASE (186)
        case 110:
        // SubProg EscapeChar pc: 19 op: STARTLINE (58)

        /** scanner.e:1124				c = 10 -- Newline*/
        // SubProg EscapeChar pc: 21 op: ASSIGN (18)
        DeRef(_c_26646);
        _c_26646 = 10;
        // SubProg EscapeChar pc: 24 op: ELSE (23)
        goto L2; // [24] 145
        // SubProg EscapeChar pc: 26 op: STARTLINE (58)

        /** scanner.e:1126			case 't' then*/
        // SubProg EscapeChar pc: 28 op: CASE (186)
        case 116:
        // SubProg EscapeChar pc: 30 op: STARTLINE (58)

        /** scanner.e:1127				c = 9 -- Tabulator*/
        // SubProg EscapeChar pc: 32 op: ASSIGN (18)
        DeRef(_c_26646);
        _c_26646 = 9;
        // SubProg EscapeChar pc: 35 op: ELSE (23)
        goto L2; // [35] 145
        // SubProg EscapeChar pc: 37 op: STARTLINE (58)

        /** scanner.e:1129			case '"', '\\', '\'' then*/
        // SubProg EscapeChar pc: 39 op: CASE (186)
        case 34:
        // SubProg EscapeChar pc: 41 op: CASE (186)
        case 92:
        // SubProg EscapeChar pc: 43 op: CASE (186)
        case 39:
        // SubProg EscapeChar pc: 45 op: STARTLINE (58)

        /** scanner.e:1134			case 'r' then*/
        // SubProg EscapeChar pc: 47 op: ELSE (23)
        goto L2; // [47] 145
        // SubProg EscapeChar pc: 49 op: CASE (186)
        case 114:
        // SubProg EscapeChar pc: 51 op: STARTLINE (58)

        /** scanner.e:1135				c = 13 -- Carriage Return*/
        // SubProg EscapeChar pc: 53 op: ASSIGN (18)
        DeRef(_c_26646);
        _c_26646 = 13;
        // SubProg EscapeChar pc: 56 op: ELSE (23)
        goto L2; // [56] 145
        // SubProg EscapeChar pc: 58 op: STARTLINE (58)

        /** scanner.e:1137			case '0' then*/
        // SubProg EscapeChar pc: 60 op: CASE (186)
        case 48:
        // SubProg EscapeChar pc: 62 op: STARTLINE (58)

        /** scanner.e:1138				c = 0 -- Null*/
        // SubProg EscapeChar pc: 64 op: ASSIGN (18)
        DeRef(_c_26646);
        _c_26646 = 0;
        // SubProg EscapeChar pc: 67 op: ELSE (23)
        goto L2; // [67] 145
        // SubProg EscapeChar pc: 69 op: STARTLINE (58)

        /** scanner.e:1140			case 'e', 'E' then*/
        // SubProg EscapeChar pc: 71 op: CASE (186)
        case 101:
        // SubProg EscapeChar pc: 73 op: CASE (186)
        case 69:
        // SubProg EscapeChar pc: 75 op: STARTLINE (58)

        /** scanner.e:1141				c = 27 -- escape char.*/
        // SubProg EscapeChar pc: 77 op: ASSIGN (18)
        DeRef(_c_26646);
        _c_26646 = 27;
        // SubProg EscapeChar pc: 80 op: ELSE (23)
        goto L2; // [80] 145
        // SubProg EscapeChar pc: 82 op: STARTLINE (58)

        /** scanner.e:1143			case 'x' then*/
        // SubProg EscapeChar pc: 84 op: CASE (186)
        case 120:
        // SubProg EscapeChar pc: 86 op: STARTLINE (58)

        /** scanner.e:1145				c = GetHexChar(2, 340)*/
        // SubProg EscapeChar pc: 88 op: PROC (27)
        _0 = _c_26646;
        _c_26646 = _61GetHexChar(2, 340);
        DeRef(_0);
        // SubProg EscapeChar pc: 93 op: ELSE (23)
        goto L2; // [93] 145
        // SubProg EscapeChar pc: 95 op: STARTLINE (58)

        /** scanner.e:1147			case 'u' then*/
        // SubProg EscapeChar pc: 97 op: CASE (186)
        case 117:
        // SubProg EscapeChar pc: 99 op: STARTLINE (58)

        /** scanner.e:1149				c = GetHexChar(4, 341)*/
        // SubProg EscapeChar pc: 101 op: PROC (27)
        _0 = _c_26646;
        _c_26646 = _61GetHexChar(4, 341);
        DeRef(_0);
        // SubProg EscapeChar pc: 106 op: ELSE (23)
        goto L2; // [106] 145
        // SubProg EscapeChar pc: 108 op: STARTLINE (58)

        /** scanner.e:1151			case 'U' then*/
        // SubProg EscapeChar pc: 110 op: CASE (186)
        case 85:
        // SubProg EscapeChar pc: 112 op: STARTLINE (58)

        /** scanner.e:1153				c = GetHexChar(8, 342)*/
        // SubProg EscapeChar pc: 114 op: PROC (27)
        _0 = _c_26646;
        _c_26646 = _61GetHexChar(8, 342);
        DeRef(_0);
        // SubProg EscapeChar pc: 119 op: ELSE (23)
        goto L2; // [119] 145
        // SubProg EscapeChar pc: 121 op: STARTLINE (58)

        /** scanner.e:1155			case 'b' then*/
        // SubProg EscapeChar pc: 123 op: CASE (186)
        case 98:
        // SubProg EscapeChar pc: 125 op: STARTLINE (58)

        /** scanner.e:1157				c = GetBinaryChar(delim)*/
        // SubProg EscapeChar pc: 127 op: PROC (27)
        _0 = _c_26646;
        _c_26646 = _61GetBinaryChar(_delim_26645);
        DeRef(_0);
        // SubProg EscapeChar pc: 131 op: ELSE (23)
        goto L2; // [131] 145
        // SubProg EscapeChar pc: 133 op: STARTLINE (58)

        /** scanner.e:1159			case else*/
        // SubProg EscapeChar pc: 135 op: CASE (186)
        default:
L1: // addr: 135 pc: 135 sub: 26643 op: 186
        // SubProg EscapeChar pc: 137 op: STARTLINE (58)

        /** scanner.e:1160				CompileErr(155)*/
        // SubProg EscapeChar pc: 139 op: PROC (27)
        RefDS(_21936);
        _49CompileErr(155, _21936, 0);
        // SubProg EscapeChar pc: 144 op: NOPSWITCH (187)
    ;}L2: // addr: 145 pc: 144 sub: 26643 op: 187
    // SubProg EscapeChar pc: 145 op: STARTLINE (58)

    /** scanner.e:1163		return c*/
    // SubProg EscapeChar pc: 147 op: RETURNF (28)

// Exiting block BLOCK: EscapeChar

// block var delim_26645
    return _c_26646;
    // SubProg EscapeChar pc: 151 op: BADRETURNF (43)
    ;
}


object _61my_sscanf(object _yytext_26669)
{
    object _e_sign_26670 = NOVALUE;
    object _ndigits_26671 = NOVALUE;
    object _e_mag_26672 = NOVALUE;
    object _mantissa_26673 = NOVALUE;
    object _c_26674 = NOVALUE;
    object _i_26675 = NOVALUE;
    object _dec_26676 = NOVALUE;
    object _frac_26708 = NOVALUE;
// skipping _14915  name type: 0
// skipping _14914  name type: 0
    object _14913 = NOVALUE; // 26720 14913
// skipping _14912  name type: 0
// skipping _14911  name type: 0
// skipping _14910  name type: 0
// skipping _14909  name type: 0
    object _14908 = NOVALUE; // 26715 14908
    object _14907 = NOVALUE; // 26714 14907
// skipping _14906  name type: 0
    object _14905 = NOVALUE; // 26712 14905
    object _14904 = NOVALUE; // 26711 14904
    object _14903 = NOVALUE; // 26710 14903
// skipping _14901  name type: 0
// skipping _14900  name type: 0
// skipping _14899  name type: 0
// skipping _14898  name type: 0
// skipping _14897  name type: 0
// skipping _14896  name type: 0
    object _14895 = NOVALUE; // 26699 14895
    object _14894 = NOVALUE; // 26698 14894
// skipping _14892  name type: 0
    object _14891 = NOVALUE; // 26695 14891
    object _14890 = NOVALUE; // 26694 14890
    object _14889 = NOVALUE; // 26693 14889
// skipping _14888  name type: 0
// skipping _14887  name type: 0
    object _14884 = NOVALUE; // 26687 14884
    object _14883 = NOVALUE; // 26684 14883
// skipping _14882  name type: 0
    object _14881 = NOVALUE; // 26682 14881
// skipping _14880  name type: 0
    object _14879 = NOVALUE; // 26678 14879
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg my_sscanf pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg my_sscanf pc: 3 op: STARTLINE (58)

    /** scanner.e:1176		if length(yytext) < 2 then*/
    // SubProg my_sscanf pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_yytext_26669)){
            _14879 = SEQ_PTR(_yytext_26669)->length;
    }
    else {
        _14879 = 1;
    }
    // SubProg my_sscanf pc: 8 op: LESS_IFW_I (119)
    if (_14879 >= 2)
    goto L1; // [8] 20
    // SubProg my_sscanf pc: 12 op: STARTLINE (58)

    /** scanner.e:1177			CompileErr(121)*/
    // SubProg my_sscanf pc: 14 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(121, _21936, 0);
    // SubProg my_sscanf pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 26667 op: 159
    // SubProg my_sscanf pc: 20 op: STARTLINE (58)

    /** scanner.e:1181		if find( 'e', yytext ) or find( 'E', yytext ) then*/
    // SubProg my_sscanf pc: 22 op: FIND_FROM (176)
    _14881 = find_from(101, _yytext_26669, 1);
    // SubProg my_sscanf pc: 27 op: SC1_OR_IF (147)
    if (_14881 != 0) {
        goto L2; // [27] 41
    }
    // SubProg my_sscanf pc: 31 op: FIND_FROM (176)
    _14883 = find_from(69, _yytext_26669, 1);
    // SubProg my_sscanf pc: 36 op: NOP1 (159)
    // SubProg my_sscanf pc: 37 op: IF (20)
    if (_14883 == 0)
    {
        _14883 = NOVALUE;
        goto L3; // [37] 57
    }
    else{
        _14883 = NOVALUE;
    }
    // SubProg my_sscanf pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 26667 op: 159
    // SubProg my_sscanf pc: 41 op: STARTLINE (58)

    /** scanner.e:1182			ifdef E32 then*/
    // SubProg my_sscanf pc: 43 op: STARTLINE (58)

    /** scanner.e:1183				return scientific_to_atom( yytext, DOUBLE )*/
    // SubProg my_sscanf pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg my_sscanf pc: 47 op: PROC (27)
    RefDS(_yytext_26669);
    _14884 = _21scientific_to_atom(_yytext_26669, 2);
    // SubProg my_sscanf pc: 52 op: RETURNF (28)

// Exiting block BLOCK: my_sscanf

// block var yytext_26669
    DeRefDS(_yytext_26669);

// block var ndigits_26671

// block var mantissa_26673
    DeRef(_mantissa_26673);

// block var c_26674

// block var i_26675

// block var dec_26676
    DeRef(_dec_26676);
    return _14884;
    // SubProg my_sscanf pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 26667 op: 159
    // SubProg my_sscanf pc: 57 op: STARTLINE (58)

    /** scanner.e:1190		mantissa = 0.0*/
    // SubProg my_sscanf pc: 59 op: ASSIGN (18)
    RefDS(_14886);
    DeRef(_mantissa_26673);
    _mantissa_26673 = _14886;
    // SubProg my_sscanf pc: 62 op: STARTLINE (58)

    /** scanner.e:1191		ndigits = 0*/
    // SubProg my_sscanf pc: 64 op: ASSIGN_I (113)
    _ndigits_26671 = 0;
    // SubProg my_sscanf pc: 67 op: STARTLINE (58)

    /** scanner.e:1195		yytext &= 0 -- end marker*/
    // SubProg my_sscanf pc: 69 op: CONCAT (15)
    Append(&_yytext_26669, _yytext_26669, 0);
    // SubProg my_sscanf pc: 73 op: STARTLINE (58)

    /** scanner.e:1196		c = yytext[1]*/
    // SubProg my_sscanf pc: 75 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;
    // SubProg my_sscanf pc: 79 op: STARTLINE (58)

    /** scanner.e:1197		i = 2*/
    // SubProg my_sscanf pc: 81 op: ASSIGN_I (113)
    _i_26675 = 2;
    // SubProg my_sscanf pc: 84 op: STARTLINE (58)

    /** scanner.e:1198		while c >= '0' and c <= '9' do*/
    // SubProg my_sscanf pc: 86 op: NOP2 (110)
    // SubProg my_sscanf pc: 88 op: NOPWHILE (158)
L4: // addr: 89 pc: 88 sub: 26667 op: 158
    // SubProg my_sscanf pc: 89 op: GREATEREQ (2)
    _14889 = (_c_26674 >= 48);
    // SubProg my_sscanf pc: 93 op: SC1_AND_IF (146)
    if (_14889 == 0) {
        goto L5; // [93] 142
    }
    // SubProg my_sscanf pc: 97 op: LESSEQ (5)
    _14891 = (_c_26674 <= 57);
    // SubProg my_sscanf pc: 101 op: NOP1 (159)
    // SubProg my_sscanf pc: 102 op: WHILE (47)
    if (_14891 == 0)
    {
        DeRef(_14891);
        _14891 = NOVALUE;
        goto L5; // [102] 142
    }
    else{
        DeRef(_14891);
        _14891 = NOVALUE;
    }
    // SubProg my_sscanf pc: 105 op: STARTLINE (58)

    /** scanner.e:1199			ndigits += 1*/
    // SubProg my_sscanf pc: 107 op: PLUS1_I (117)
    _ndigits_26671 = _ndigits_26671 + 1;
    // SubProg my_sscanf pc: 111 op: STARTLINE (58)

    /** scanner.e:1200			mantissa = mantissa * 10.0 + (c - '0')*/
    // SubProg my_sscanf pc: 113 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_26673)) {
        _14894 = NewDouble((eudouble)_mantissa_26673 * DBL_PTR(_14893)->dbl);
    }
    else {
        _14894 = NewDouble(DBL_PTR(_mantissa_26673)->dbl * DBL_PTR(_14893)->dbl);
    }
    // SubProg my_sscanf pc: 117 op: MINUS (10)
    _14895 = _c_26674 - 48;
    if ((object)((uintptr_t)_14895 +(uintptr_t) HIGH_BITS) >= 0){
        _14895 = NewDouble((eudouble)_14895);
    }
    // SubProg my_sscanf pc: 121 op: PLUS (11)
    DeRef(_mantissa_26673);
    if (IS_ATOM_INT(_14895)) {
        _mantissa_26673 = NewDouble(DBL_PTR(_14894)->dbl + (eudouble)_14895);
    }
    else
    _mantissa_26673 = NewDouble(DBL_PTR(_14894)->dbl + DBL_PTR(_14895)->dbl);
    DeRefDS(_14894);
    _14894 = NOVALUE;
    DeRef(_14895);
    _14895 = NOVALUE;
    // SubProg my_sscanf pc: 125 op: STARTLINE (58)

    /** scanner.e:1201			c = yytext[i]*/
    // SubProg my_sscanf pc: 127 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + _i_26675);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;
    // SubProg my_sscanf pc: 131 op: STARTLINE (58)

    /** scanner.e:1202			i += 1*/
    // SubProg my_sscanf pc: 133 op: PLUS1_I (117)
    _i_26675 = _i_26675 + 1;
    // SubProg my_sscanf pc: 137 op: STARTLINE (58)

    /** scanner.e:1203		end while*/
    // SubProg my_sscanf pc: 139 op: ENDWHILE (22)
    goto L4; // [139] 89
    // SubProg my_sscanf pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 26667 op: 159
    // SubProg my_sscanf pc: 142 op: STARTLINE (58)

    /** scanner.e:1205		if c = '.' then*/
    // SubProg my_sscanf pc: 144 op: EQUALS_IFW_I (121)
    if (_c_26674 != 46)
    goto L6; // [144] 245
    // SubProg my_sscanf pc: 148 op: STARTLINE (58)

    /** scanner.e:1207			c = yytext[i]*/
    // SubProg my_sscanf pc: 150 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + _i_26675);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;
    // SubProg my_sscanf pc: 154 op: STARTLINE (58)

    /** scanner.e:1208			i += 1*/
    // SubProg my_sscanf pc: 156 op: PLUS1_I (117)
    _i_26675 = _i_26675 + 1;
    // SubProg my_sscanf pc: 160 op: STARTLINE (58)

    /** scanner.e:1209			dec = 1.0*/
    // SubProg my_sscanf pc: 162 op: ASSIGN (18)
    RefDS(_14902);
    DeRef(_dec_26676);
    _dec_26676 = _14902;
    // SubProg my_sscanf pc: 165 op: STARTLINE (58)

    /** scanner.e:1210			atom frac = 0*/
    // SubProg my_sscanf pc: 167 op: ASSIGN (18)
    DeRef(_frac_26708);
    _frac_26708 = 0;
    // SubProg my_sscanf pc: 170 op: STARTLINE (58)

    /** scanner.e:1211			while c >= '0' and c <= '9' do*/
    // SubProg my_sscanf pc: 172 op: NOP2 (110)
    // SubProg my_sscanf pc: 174 op: NOPWHILE (158)
L7: // addr: 175 pc: 174 sub: 26667 op: 158
    // SubProg my_sscanf pc: 175 op: GREATEREQ (2)
    _14903 = (_c_26674 >= 48);
    // SubProg my_sscanf pc: 179 op: SC1_AND_IF (146)
    if (_14903 == 0) {
        goto L8; // [179] 234
    }
    // SubProg my_sscanf pc: 183 op: LESSEQ (5)
    _14905 = (_c_26674 <= 57);
    // SubProg my_sscanf pc: 187 op: NOP1 (159)
    // SubProg my_sscanf pc: 188 op: WHILE (47)
    if (_14905 == 0)
    {
        DeRef(_14905);
        _14905 = NOVALUE;
        goto L8; // [188] 234
    }
    else{
        DeRef(_14905);
        _14905 = NOVALUE;
    }
    // SubProg my_sscanf pc: 191 op: STARTLINE (58)

    /** scanner.e:1212				ndigits += 1*/
    // SubProg my_sscanf pc: 193 op: PLUS1_I (117)
    _ndigits_26671 = _ndigits_26671 + 1;
    // SubProg my_sscanf pc: 197 op: STARTLINE (58)

    /** scanner.e:1213				frac = frac * 10 + (c - '0')*/
    // SubProg my_sscanf pc: 199 op: MULTIPLY (13)
    if (IS_ATOM_INT(_frac_26708)) {
        if (_frac_26708 == (short)_frac_26708){
            _14907 = _frac_26708 * 10;
        }
        else{
            _14907 = NewDouble(_frac_26708 * (eudouble)10);
        }
    }
    else {
        _14907 = NewDouble(DBL_PTR(_frac_26708)->dbl * (eudouble)10);
    }
    // SubProg my_sscanf pc: 203 op: MINUS (10)
    _14908 = _c_26674 - 48;
    if ((object)((uintptr_t)_14908 +(uintptr_t) HIGH_BITS) >= 0){
        _14908 = NewDouble((eudouble)_14908);
    }
    // SubProg my_sscanf pc: 207 op: PLUS (11)
    DeRef(_frac_26708);
    if (IS_ATOM_INT(_14907) && IS_ATOM_INT(_14908)) {
        _frac_26708 = _14907 + _14908;
        if ((object)((uintptr_t)_frac_26708 + (uintptr_t)HIGH_BITS) >= 0){
            _frac_26708 = NewDouble((eudouble)_frac_26708);
        }
    }
    else {
        if (IS_ATOM_INT(_14907)) {
            _frac_26708 = NewDouble((eudouble)_14907 + DBL_PTR(_14908)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14908)) {
                _frac_26708 = NewDouble(DBL_PTR(_14907)->dbl + (eudouble)_14908);
            }
            else
            _frac_26708 = NewDouble(DBL_PTR(_14907)->dbl + DBL_PTR(_14908)->dbl);
        }
    }
    DeRef(_14907);
    _14907 = NOVALUE;
    DeRef(_14908);
    _14908 = NOVALUE;
    // SubProg my_sscanf pc: 211 op: STARTLINE (58)

    /** scanner.e:1214				dec *= 10.0*/
    // SubProg my_sscanf pc: 213 op: MULTIPLY (13)
    _0 = _dec_26676;
    if (IS_ATOM_INT(_dec_26676)) {
        _dec_26676 = NewDouble((eudouble)_dec_26676 * DBL_PTR(_14893)->dbl);
    }
    else {
        _dec_26676 = NewDouble(DBL_PTR(_dec_26676)->dbl * DBL_PTR(_14893)->dbl);
    }
    DeRef(_0);
    // SubProg my_sscanf pc: 217 op: STARTLINE (58)

    /** scanner.e:1215				c = yytext[i]*/
    // SubProg my_sscanf pc: 219 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + _i_26675);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;
    // SubProg my_sscanf pc: 223 op: STARTLINE (58)

    /** scanner.e:1216				i += 1*/
    // SubProg my_sscanf pc: 225 op: PLUS1_I (117)
    _i_26675 = _i_26675 + 1;
    // SubProg my_sscanf pc: 229 op: STARTLINE (58)

    /** scanner.e:1217			end while*/
    // SubProg my_sscanf pc: 231 op: ENDWHILE (22)
    goto L7; // [231] 175
    // SubProg my_sscanf pc: 233 op: NOP1 (159)
L8: // addr: 234 pc: 233 sub: 26667 op: 159
    // SubProg my_sscanf pc: 234 op: STARTLINE (58)

    /** scanner.e:1218			mantissa += frac / dec*/
    // SubProg my_sscanf pc: 236 op: DIVIDE (14)
    if (IS_ATOM_INT(_frac_26708) && IS_ATOM_INT(_dec_26676)) {
        _14913 = (_frac_26708 % _dec_26676) ? NewDouble((eudouble)_frac_26708 / _dec_26676) : (_frac_26708 / _dec_26676);
    }
    else {
        if (IS_ATOM_INT(_frac_26708)) {
            _14913 = NewDouble((eudouble)_frac_26708 / DBL_PTR(_dec_26676)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_26676)) {
                _14913 = NewDouble(DBL_PTR(_frac_26708)->dbl / (eudouble)_dec_26676);
            }
            else
            _14913 = NewDouble(DBL_PTR(_frac_26708)->dbl / DBL_PTR(_dec_26676)->dbl);
        }
    }
    // SubProg my_sscanf pc: 240 op: PLUS (11)
    _0 = _mantissa_26673;
    if (IS_ATOM_INT(_mantissa_26673) && IS_ATOM_INT(_14913)) {
        _mantissa_26673 = _mantissa_26673 + _14913;
        if ((object)((uintptr_t)_mantissa_26673 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_26673 = NewDouble((eudouble)_mantissa_26673);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_26673)) {
            _mantissa_26673 = NewDouble((eudouble)_mantissa_26673 + DBL_PTR(_14913)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14913)) {
                _mantissa_26673 = NewDouble(DBL_PTR(_mantissa_26673)->dbl + (eudouble)_14913);
            }
            else
            _mantissa_26673 = NewDouble(DBL_PTR(_mantissa_26673)->dbl + DBL_PTR(_14913)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_14913);
    _14913 = NOVALUE;
    // SubProg my_sscanf pc: 244 op: NOP1 (159)
L6: // addr: 245 pc: 244 sub: 26667 op: 159
    // SubProg my_sscanf pc: 245 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var frac_26708
    DeRef(_frac_26708);
    _frac_26708 = NOVALUE;
    // SubProg my_sscanf pc: 247 op: STARTLINE (58)

    /** scanner.e:1221		if ndigits = 0 then*/
    // SubProg my_sscanf pc: 249 op: EQUALS_IFW_I (121)
    if (_ndigits_26671 != 0)
    goto L9; // [249] 261
    // SubProg my_sscanf pc: 253 op: STARTLINE (58)

    /** scanner.e:1222			CompileErr(121)  -- no digits*/
    // SubProg my_sscanf pc: 255 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(121, _21936, 0);
    // SubProg my_sscanf pc: 260 op: NOP1 (159)
L9: // addr: 261 pc: 260 sub: 26667 op: 159
    // SubProg my_sscanf pc: 261 op: STARTLINE (58)

    /** scanner.e:1268		return mantissa*/
    // SubProg my_sscanf pc: 263 op: RETURNF (28)

// Exiting block BLOCK: my_sscanf

// block var yytext_26669
    DeRefDS(_yytext_26669);

// block var ndigits_26671

// block var c_26674

// block var i_26675

// block var dec_26676
    DeRef(_dec_26676);
    DeRef(_14884);
    _14884 = NOVALUE;
    DeRef(_14903);
    _14903 = NOVALUE;
    DeRef(_14889);
    _14889 = NOVALUE;
    return _mantissa_26673;
    // SubProg my_sscanf pc: 267 op: BADRETURNF (43)
    ;
}


void _61maybe_namespace()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg maybe_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:1273		might_be_namespace = 1*/
    // SubProg maybe_namespace pc: 3 op: ASSIGN_I (113)
    _61might_be_namespace_26725 = 1;
    // SubProg maybe_namespace pc: 6 op: STARTLINE (58)

    /** scanner.e:1274	end procedure*/
    // SubProg maybe_namespace pc: 8 op: RETURNP (29)

// Exiting block BLOCK: maybe_namespace
    return;
    // SubProg maybe_namespace pc: 11 op: BADRETURNF (43)
    ;
}


object _61ExtendedString(object _ech_26735)
{
    object _ch_26736 = NOVALUE;
    object _fch_26737 = NOVALUE;
    object _cline_26738 = NOVALUE;
    object _string_text_26739 = NOVALUE;
    object _trimming_26740 = NOVALUE;
    object _14966 = NOVALUE; // 26823 14966
    object _14965 = NOVALUE; // 26822 14965
// skipping _14964  name type: 0
    object _14963 = NOVALUE; // 26818 14963
    object _14962 = NOVALUE; // 26817 14962
    object _14961 = NOVALUE; // 26816 14961
    object _14960 = NOVALUE; // 26815 14960
    object _14959 = NOVALUE; // 26814 14959
    object _14958 = NOVALUE; // 26813 14958
    object _14957 = NOVALUE; // 26812 14957
    object _14956 = NOVALUE; // 26811 14956
// skipping _14955  name type: 0
    object _14954 = NOVALUE; // 26808 14954
    object _14953 = NOVALUE; // 26807 14953
    object _14952 = NOVALUE; // 26806 14952
    object _14951 = NOVALUE; // 26805 14951
    object _14950 = NOVALUE; // 26804 14950
    object _14949 = NOVALUE; // 26803 14949
// skipping _14948  name type: 0
// skipping _14947  name type: 0
    object _14946 = NOVALUE; // 26798 14946
    object _14945 = NOVALUE; // 26797 14945
    object _14944 = NOVALUE; // 26796 14944
// skipping _14943  name type: 0
    object _14942 = NOVALUE; // 26791 14942
    object _14941 = NOVALUE; // 26790 14941
    object _14940 = NOVALUE; // 26787 14940
    object _14939 = NOVALUE; // 26786 14939
// skipping _14938  name type: 0
// skipping _14937  name type: 0
    object _14936 = NOVALUE; // 26780 14936
// skipping _14935  name type: 0
// skipping _14934  name type: 0
// skipping _14933  name type: 0
// skipping _14932  name type: 0
// skipping _14931  name type: 0
// skipping _14930  name type: 0
// skipping _14929  name type: 0
// skipping _14928  name type: 0
// skipping _14927  name type: 0
// skipping _14926  name type: 0
// skipping _14925  name type: 0
// skipping _14924  name type: 0
// skipping _14923  name type: 0
// skipping _14922  name type: 0
    object _14921 = NOVALUE; // 26751 14921
// skipping _14920  name type: 0
    object _14919 = NOVALUE; // 26746 14919
// skipping _14918  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ExtendedString pc: 1 op: INTEGER_CHECK (96)
    // SubProg ExtendedString pc: 3 op: STARTLINE (58)

    /** scanner.e:1287		cline = line_number*/
    // SubProg ExtendedString pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 7 op: ASSIGN (18)
    _cline_26738 = _34line_number_15189;
    // SubProg ExtendedString pc: 10 op: INTEGER_CHECK (96)
    // SubProg ExtendedString pc: 12 op: STARTLINE (58)

    /** scanner.e:1288		string_text = ""*/
    // SubProg ExtendedString pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_string_text_26739);
    _string_text_26739 = _5;
    // SubProg ExtendedString pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg ExtendedString pc: 19 op: STARTLINE (58)

    /** scanner.e:1289		trimming = 0*/
    // SubProg ExtendedString pc: 21 op: ASSIGN_I (113)
    _trimming_26740 = 0;
    // SubProg ExtendedString pc: 24 op: STARTLINE (58)

    /** scanner.e:1290		ch = getch()*/
    // SubProg ExtendedString pc: 26 op: PROC (27)
    _ch_26736 = _61getch();
    // SubProg ExtendedString pc: 29 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26736)) {
        _1 = (object)(DBL_PTR(_ch_26736)->dbl);
        DeRefDS(_ch_26736);
        _ch_26736 = _1;
    }
    // SubProg ExtendedString pc: 31 op: STARTLINE (58)

    /** scanner.e:1291		if bp > length(ThisLine) then*/
    // SubProg ExtendedString pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48709)){
            _14919 = SEQ_PTR(_49ThisLine_48709)->length;
    }
    else {
        _14919 = 1;
    }
    // SubProg ExtendedString pc: 40 op: GREATER_IFW (107)
    if (_49bp_48713 <= _14919)
    goto L1; // [40] 101
    // SubProg ExtendedString pc: 44 op: STARTLINE (58)

    /** scanner.e:1293			read_line()*/
    // SubProg ExtendedString pc: 46 op: PROC (27)
    _61read_line();
    // SubProg ExtendedString pc: 48 op: STARTLINE (58)

    /** scanner.e:1294			while ThisLine[bp] = '_' do*/
    // SubProg ExtendedString pc: 50 op: NOP2 (110)
    // SubProg ExtendedString pc: 52 op: NOPWHILE (158)
L2: // addr: 53 pc: 52 sub: 26733 op: 158
    // SubProg ExtendedString pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48709);
    _14921 = (object)*(((s1_ptr)_2)->base + _49bp_48713);
    // SubProg ExtendedString pc: 61 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _14921, 95)){
        _14921 = NOVALUE;
        goto L3; // [61] 86
    }
    _14921 = NOVALUE;
    // SubProg ExtendedString pc: 65 op: STARTLINE (58)

    /** scanner.e:1295				trimming += 1*/
    // SubProg ExtendedString pc: 67 op: PLUS1_I (117)
    _trimming_26740 = _trimming_26740 + 1;
    // SubProg ExtendedString pc: 71 op: STARTLINE (58)

    /** scanner.e:1296				bp += 1*/
    // SubProg ExtendedString pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 75 op: PLUS (11)
    _49bp_48713 = _49bp_48713 + 1;
    // SubProg ExtendedString pc: 81 op: STARTLINE (58)

    /** scanner.e:1297			end while*/
    // SubProg ExtendedString pc: 83 op: ENDWHILE (22)
    goto L2; // [83] 53
    // SubProg ExtendedString pc: 85 op: NOP1 (159)
L3: // addr: 86 pc: 85 sub: 26733 op: 159
    // SubProg ExtendedString pc: 86 op: STARTLINE (58)

    /** scanner.e:1298			if trimming > 0 then*/
    // SubProg ExtendedString pc: 88 op: GREATER_IFW_I (124)
    if (_trimming_26740 <= 0)
    goto L4; // [88] 100
    // SubProg ExtendedString pc: 92 op: STARTLINE (58)

    /** scanner.e:1299				ch = getch()*/
    // SubProg ExtendedString pc: 94 op: PROC (27)
    _ch_26736 = _61getch();
    // SubProg ExtendedString pc: 97 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26736)) {
        _1 = (object)(DBL_PTR(_ch_26736)->dbl);
        DeRefDS(_ch_26736);
        _ch_26736 = _1;
    }
    // SubProg ExtendedString pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 26733 op: 159
    // SubProg ExtendedString pc: 100 op: NOP1 (159)
L1: // addr: 101 pc: 100 sub: 26733 op: 159
    // SubProg ExtendedString pc: 101 op: STARTLINE (58)

    /** scanner.e:1303		while 1 do*/
    // SubProg ExtendedString pc: 103 op: NOP2 (110)
    // SubProg ExtendedString pc: 105 op: NOPWHILE (158)
L5: // addr: 106 pc: 105 sub: 26733 op: 158
    // SubProg ExtendedString pc: 106 op: STARTLINE (58)

    /** scanner.e:1304			if ch = END_OF_FILE_CHAR then*/
    // SubProg ExtendedString pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 110 op: EQUALS_IFW (104)
    if (_ch_26736 != 26)
    goto L6; // [110] 122
    // SubProg ExtendedString pc: 114 op: STARTLINE (58)

    /** scanner.e:1305				CompileErr(129, cline)*/
    // SubProg ExtendedString pc: 116 op: PROC (27)
    _49CompileErr(129, _cline_26738, 0);
    // SubProg ExtendedString pc: 121 op: NOP1 (159)
L6: // addr: 122 pc: 121 sub: 26733 op: 159
    // SubProg ExtendedString pc: 122 op: STARTLINE (58)

    /** scanner.e:1308			if ch = ech then*/
    // SubProg ExtendedString pc: 124 op: EQUALS_IFW_I (121)
    if (_ch_26736 != _ech_26735)
    goto L7; // [124] 180
    // SubProg ExtendedString pc: 128 op: STARTLINE (58)

    /** scanner.e:1309				if ech != '"' then*/
    // SubProg ExtendedString pc: 130 op: NOTEQ_IFW_I (122)
    if (_ech_26735 == 34)
    goto L8; // [130] 139
    // SubProg ExtendedString pc: 134 op: STARTLINE (58)

    /** scanner.e:1310					exit*/
    // SubProg ExtendedString pc: 136 op: EXIT (61)
    goto L9; // [136] 310
    // SubProg ExtendedString pc: 138 op: NOP1 (159)
L8: // addr: 139 pc: 138 sub: 26733 op: 159
    // SubProg ExtendedString pc: 139 op: STARTLINE (58)

    /** scanner.e:1312				fch = getch()*/
    // SubProg ExtendedString pc: 141 op: PROC (27)
    _fch_26737 = _61getch();
    // SubProg ExtendedString pc: 144 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_26737)) {
        _1 = (object)(DBL_PTR(_fch_26737)->dbl);
        DeRefDS(_fch_26737);
        _fch_26737 = _1;
    }
    // SubProg ExtendedString pc: 146 op: STARTLINE (58)

    /** scanner.e:1313				if fch = '"' then*/
    // SubProg ExtendedString pc: 148 op: EQUALS_IFW_I (121)
    if (_fch_26737 != 34)
    goto LA; // [148] 175
    // SubProg ExtendedString pc: 152 op: STARTLINE (58)

    /** scanner.e:1314					fch = getch()*/
    // SubProg ExtendedString pc: 154 op: PROC (27)
    _fch_26737 = _61getch();
    // SubProg ExtendedString pc: 157 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_26737)) {
        _1 = (object)(DBL_PTR(_fch_26737)->dbl);
        DeRefDS(_fch_26737);
        _fch_26737 = _1;
    }
    // SubProg ExtendedString pc: 159 op: STARTLINE (58)

    /** scanner.e:1315					if fch = '"' then*/
    // SubProg ExtendedString pc: 161 op: EQUALS_IFW_I (121)
    if (_fch_26737 != 34)
    goto LB; // [161] 170
    // SubProg ExtendedString pc: 165 op: STARTLINE (58)

    /** scanner.e:1316						exit*/
    // SubProg ExtendedString pc: 167 op: EXIT (61)
    goto L9; // [167] 310
    // SubProg ExtendedString pc: 169 op: NOP1 (159)
LB: // addr: 170 pc: 169 sub: 26733 op: 159
    // SubProg ExtendedString pc: 170 op: STARTLINE (58)

    /** scanner.e:1318					ungetch()*/
    // SubProg ExtendedString pc: 172 op: PROC (27)
    _61ungetch();
    // SubProg ExtendedString pc: 174 op: NOP1 (159)
LA: // addr: 175 pc: 174 sub: 26733 op: 159
    // SubProg ExtendedString pc: 175 op: STARTLINE (58)

    /** scanner.e:1320				ungetch()*/
    // SubProg ExtendedString pc: 177 op: PROC (27)
    _61ungetch();
    // SubProg ExtendedString pc: 179 op: NOP1 (159)
L7: // addr: 180 pc: 179 sub: 26733 op: 159
    // SubProg ExtendedString pc: 180 op: STARTLINE (58)

    /** scanner.e:1323			if ch != '\r' then*/
    // SubProg ExtendedString pc: 182 op: NOTEQ_IFW_I (122)
    if (_ch_26736 == 13)
    goto LC; // [182] 193
    // SubProg ExtendedString pc: 186 op: STARTLINE (58)

    /** scanner.e:1326				string_text &= ch*/
    // SubProg ExtendedString pc: 188 op: CONCAT (15)
    Append(&_string_text_26739, _string_text_26739, _ch_26736);
    // SubProg ExtendedString pc: 192 op: NOP1 (159)
LC: // addr: 193 pc: 192 sub: 26733 op: 159
    // SubProg ExtendedString pc: 193 op: STARTLINE (58)

    /** scanner.e:1329			if bp > length(ThisLine) then*/
    // SubProg ExtendedString pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 199 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48709)){
            _14936 = SEQ_PTR(_49ThisLine_48709)->length;
    }
    else {
        _14936 = 1;
    }
    // SubProg ExtendedString pc: 202 op: GREATER_IFW (107)
    if (_49bp_48713 <= _14936)
    goto LD; // [202] 298
    // SubProg ExtendedString pc: 206 op: STARTLINE (58)

    /** scanner.e:1330				read_line() -- sets bp to 1, btw.*/
    // SubProg ExtendedString pc: 208 op: PROC (27)
    _61read_line();
    // SubProg ExtendedString pc: 210 op: STARTLINE (58)

    /** scanner.e:1331				if trimming > 0 then*/
    // SubProg ExtendedString pc: 212 op: GREATER_IFW_I (124)
    if (_trimming_26740 <= 0)
    goto LE; // [212] 297
    // SubProg ExtendedString pc: 216 op: STARTLINE (58)

    /** scanner.e:1332					while bp <= trimming and bp <= length(ThisLine) do*/
    // SubProg ExtendedString pc: 218 op: NOP2 (110)
    // SubProg ExtendedString pc: 220 op: NOPWHILE (158)
LF: // addr: 221 pc: 220 sub: 26733 op: 158
    // SubProg ExtendedString pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 223 op: LESSEQ (5)
    _14939 = (_49bp_48713 <= _trimming_26740);
    // SubProg ExtendedString pc: 227 op: SC1_AND_IF (146)
    if (_14939 == 0) {
        goto L10; // [227] 296
    }
    // SubProg ExtendedString pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 235 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48709)){
            _14941 = SEQ_PTR(_49ThisLine_48709)->length;
    }
    else {
        _14941 = 1;
    }
    // SubProg ExtendedString pc: 238 op: LESSEQ (5)
    _14942 = (_49bp_48713 <= _14941);
    _14941 = NOVALUE;
    // SubProg ExtendedString pc: 242 op: NOP1 (159)
    // SubProg ExtendedString pc: 243 op: WHILE (47)
    if (_14942 == 0)
    {
        DeRef(_14942);
        _14942 = NOVALUE;
        goto L10; // [243] 296
    }
    else{
        DeRef(_14942);
        _14942 = NOVALUE;
    }
    // SubProg ExtendedString pc: 246 op: STARTLINE (58)

    /** scanner.e:1333						ch = ThisLine[bp]*/
    // SubProg ExtendedString pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48709);
    _ch_26736 = (object)*(((s1_ptr)_2)->base + _49bp_48713);
    if (!IS_ATOM_INT(_ch_26736)){
        _ch_26736 = (object)DBL_PTR(_ch_26736)->dbl;
    }
    // SubProg ExtendedString pc: 258 op: STARTLINE (58)

    /** scanner.e:1334						if ch != ' ' and ch != '\t' then*/
    // SubProg ExtendedString pc: 260 op: NOTEQ (4)
    _14944 = (_ch_26736 != 32);
    // SubProg ExtendedString pc: 264 op: SC1_AND_IF (146)
    if (_14944 == 0) {
        goto L11; // [264] 281
    }
    // SubProg ExtendedString pc: 268 op: NOTEQ (4)
    _14946 = (_ch_26736 != 9);
    // SubProg ExtendedString pc: 272 op: NOP1 (159)
    // SubProg ExtendedString pc: 273 op: IF (20)
    if (_14946 == 0)
    {
        DeRef(_14946);
        _14946 = NOVALUE;
        goto L11; // [273] 281
    }
    else{
        DeRef(_14946);
        _14946 = NOVALUE;
    }
    // SubProg ExtendedString pc: 276 op: STARTLINE (58)

    /** scanner.e:1335							exit*/
    // SubProg ExtendedString pc: 278 op: EXIT (61)
    goto L10; // [278] 296
    // SubProg ExtendedString pc: 280 op: NOP1 (159)
L11: // addr: 281 pc: 280 sub: 26733 op: 159
    // SubProg ExtendedString pc: 281 op: STARTLINE (58)

    /** scanner.e:1337						bp += 1*/
    // SubProg ExtendedString pc: 283 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 285 op: PLUS (11)
    _49bp_48713 = _49bp_48713 + 1;
    // SubProg ExtendedString pc: 291 op: STARTLINE (58)

    /** scanner.e:1338					end while*/
    // SubProg ExtendedString pc: 293 op: ENDWHILE (22)
    goto LF; // [293] 221
    // SubProg ExtendedString pc: 295 op: NOP1 (159)
L10: // addr: 296 pc: 295 sub: 26733 op: 159
    // SubProg ExtendedString pc: 296 op: NOP1 (159)
LE: // addr: 297 pc: 296 sub: 26733 op: 159
    // SubProg ExtendedString pc: 297 op: NOP1 (159)
LD: // addr: 298 pc: 297 sub: 26733 op: 159
    // SubProg ExtendedString pc: 298 op: STARTLINE (58)

    /** scanner.e:1341			ch = getch()*/
    // SubProg ExtendedString pc: 300 op: PROC (27)
    _ch_26736 = _61getch();
    // SubProg ExtendedString pc: 303 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26736)) {
        _1 = (object)(DBL_PTR(_ch_26736)->dbl);
        DeRefDS(_ch_26736);
        _ch_26736 = _1;
    }
    // SubProg ExtendedString pc: 305 op: STARTLINE (58)

    /** scanner.e:1342		end while*/
    // SubProg ExtendedString pc: 307 op: ENDWHILE (22)
    goto L5; // [307] 106
    // SubProg ExtendedString pc: 309 op: NOP1 (159)
L9: // addr: 310 pc: 309 sub: 26733 op: 159
    // SubProg ExtendedString pc: 310 op: STARTLINE (58)

    /** scanner.e:1343		if length(string_text) > 0 and string_text[1] = '\n' then*/
    // SubProg ExtendedString pc: 312 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26739)){
            _14949 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14949 = 1;
    }
    // SubProg ExtendedString pc: 315 op: GREATER (6)
    _14950 = (_14949 > 0);
    _14949 = NOVALUE;
    // SubProg ExtendedString pc: 319 op: SC1_AND_IF (146)
    if (_14950 == 0) {
        goto L12; // [319] 389
    }
    // SubProg ExtendedString pc: 323 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_text_26739);
    _14952 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ExtendedString pc: 327 op: EQUALS (3)
    _14953 = (_14952 == 10);
    _14952 = NOVALUE;
    // SubProg ExtendedString pc: 331 op: NOP1 (159)
    // SubProg ExtendedString pc: 332 op: IF (20)
    if (_14953 == 0)
    {
        DeRef(_14953);
        _14953 = NOVALUE;
        goto L12; // [332] 389
    }
    else{
        DeRef(_14953);
        _14953 = NOVALUE;
    }
    // SubProg ExtendedString pc: 335 op: STARTLINE (58)

    /** scanner.e:1344			string_text = string_text[2 .. $]*/
    // SubProg ExtendedString pc: 337 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26739)){
            _14954 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14954 = 1;
    }
    // SubProg ExtendedString pc: 340 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_string_text_26739;
    RHS_Slice(_string_text_26739, 2, _14954);
    // SubProg ExtendedString pc: 345 op: STARTLINE (58)

    /** scanner.e:1345			if length(string_text) > 0 and string_text[$] = '\n' then*/
    // SubProg ExtendedString pc: 347 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26739)){
            _14956 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14956 = 1;
    }
    // SubProg ExtendedString pc: 350 op: GREATER (6)
    _14957 = (_14956 > 0);
    _14956 = NOVALUE;
    // SubProg ExtendedString pc: 354 op: SC1_AND_IF (146)
    if (_14957 == 0) {
        goto L13; // [354] 388
    }
    // SubProg ExtendedString pc: 358 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26739)){
            _14959 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14959 = 1;
    }
    // SubProg ExtendedString pc: 361 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_text_26739);
    _14960 = (object)*(((s1_ptr)_2)->base + _14959);
    // SubProg ExtendedString pc: 365 op: EQUALS (3)
    _14961 = (_14960 == 10);
    _14960 = NOVALUE;
    // SubProg ExtendedString pc: 369 op: NOP1 (159)
    // SubProg ExtendedString pc: 370 op: IF (20)
    if (_14961 == 0)
    {
        DeRef(_14961);
        _14961 = NOVALUE;
        goto L13; // [370] 388
    }
    else{
        DeRef(_14961);
        _14961 = NOVALUE;
    }
    // SubProg ExtendedString pc: 373 op: STARTLINE (58)

    /** scanner.e:1346				string_text = string_text[1 .. $-1]*/
    // SubProg ExtendedString pc: 375 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26739)){
            _14962 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14962 = 1;
    }
    // SubProg ExtendedString pc: 378 op: MINUS (10)
    _14963 = _14962 - 1;
    _14962 = NOVALUE;
    // SubProg ExtendedString pc: 382 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_string_text_26739;
    RHS_Slice(_string_text_26739, 1, _14963);
    // SubProg ExtendedString pc: 387 op: NOP1 (159)
L13: // addr: 388 pc: 387 sub: 26733 op: 159
    // SubProg ExtendedString pc: 388 op: NOP1 (159)
L12: // addr: 389 pc: 388 sub: 26733 op: 159
    // SubProg ExtendedString pc: 389 op: STARTLINE (58)

    /** scanner.e:1349		return {STRING, NewStringSym(string_text)}*/
    // SubProg ExtendedString pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 393 op: PROC (27)
    RefDS(_string_text_26739);
    _14965 = _53NewStringSym(_string_text_26739);
    // SubProg ExtendedString pc: 397 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _14965;
    _14966 = MAKE_SEQ(_1);
    _14965 = NOVALUE;
    // SubProg ExtendedString pc: 401 op: RETURNF (28)

// Exiting block BLOCK: ExtendedString

// block var ech_26735

// block var ch_26736

// block var fch_26737

// block var cline_26738

// block var string_text_26739
    DeRefDSi(_string_text_26739);

// block var trimming_26740
    DeRef(_14939);
    _14939 = NOVALUE;
    DeRef(_14944);
    _14944 = NOVALUE;
    DeRef(_14950);
    _14950 = NOVALUE;
    DeRef(_14963);
    _14963 = NOVALUE;
    DeRef(_14957);
    _14957 = NOVALUE;
    return _14966;
    // SubProg ExtendedString pc: 405 op: BADRETURNF (43)
    ;
}


object _61GetHexString(object _maxnibbles_26826)
{
    object _ch_26827 = NOVALUE;
    object _digit_26828 = NOVALUE;
    object _val_26829 = NOVALUE;
    object _cline_26830 = NOVALUE;
    object _nibble_26831 = NOVALUE;
    object _string_text_26832 = NOVALUE;
// skipping _14990  name type: 0
// skipping _14989  name type: 0
// skipping _14988  name type: 0
// skipping _14987  name type: 0
// skipping _14986  name type: 0
// skipping _14985  name type: 0
// skipping _14984  name type: 0
// skipping _14983  name type: 0
// skipping _14982  name type: 0
// skipping _14981  name type: 0
    object _14980 = NOVALUE; // 26859 14980
    object _14979 = NOVALUE; // 26858 14979
// skipping _14978  name type: 0
// skipping _14977  name type: 0
// skipping _14976  name type: 0
// skipping _14975  name type: 0
// skipping _14974  name type: 0
// skipping _14973  name type: 0
// skipping _14972  name type: 0
// skipping _14971  name type: 0
// skipping _14969  name type: 0
// skipping _14968  name type: 0
// skipping _14967  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetHexString pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetHexString pc: 3 op: STARTLINE (58)

    /** scanner.e:1360		cline = line_number*/
    // SubProg GetHexString pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetHexString pc: 7 op: ASSIGN (18)
    _cline_26830 = _34line_number_15189;
    // SubProg GetHexString pc: 10 op: INTEGER_CHECK (96)
    // SubProg GetHexString pc: 12 op: STARTLINE (58)

    /** scanner.e:1361		string_text = ""*/
    // SubProg GetHexString pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_string_text_26832);
    _string_text_26832 = _5;
    // SubProg GetHexString pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg GetHexString pc: 19 op: STARTLINE (58)

    /** scanner.e:1362		nibble = 1*/
    // SubProg GetHexString pc: 21 op: ASSIGN_I (113)
    _nibble_26831 = 1;
    // SubProg GetHexString pc: 24 op: STARTLINE (58)

    /** scanner.e:1363		val = -1*/
    // SubProg GetHexString pc: 26 op: ASSIGN (18)
    DeRef(_val_26829);
    _val_26829 = -1;
    // SubProg GetHexString pc: 29 op: STARTLINE (58)

    /** scanner.e:1364		ch = getch()*/
    // SubProg GetHexString pc: 31 op: PROC (27)
    _ch_26827 = _61getch();
    // SubProg GetHexString pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26827)) {
        _1 = (object)(DBL_PTR(_ch_26827)->dbl);
        DeRefDS(_ch_26827);
        _ch_26827 = _1;
    }
    // SubProg GetHexString pc: 36 op: STARTLINE (58)

    /** scanner.e:1365		while 1 do*/
    // SubProg GetHexString pc: 38 op: NOP2 (110)
    // SubProg GetHexString pc: 40 op: NOPWHILE (158)
L1: // addr: 41 pc: 40 sub: 26824 op: 158
    // SubProg GetHexString pc: 41 op: STARTLINE (58)

    /** scanner.e:1366			if ch = END_OF_FILE_CHAR then*/
    // SubProg GetHexString pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetHexString pc: 45 op: EQUALS_IFW (104)
    if (_ch_26827 != 26)
    goto L2; // [45] 57
    // SubProg GetHexString pc: 49 op: STARTLINE (58)

    /** scanner.e:1367				CompileErr(129, cline)*/
    // SubProg GetHexString pc: 51 op: PROC (27)
    _49CompileErr(129, _cline_26830, 0);
    // SubProg GetHexString pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 26824 op: 159
    // SubProg GetHexString pc: 57 op: STARTLINE (58)

    /** scanner.e:1370			if ch = '"' then*/
    // SubProg GetHexString pc: 59 op: EQUALS_IFW_I (121)
    if (_ch_26827 != 34)
    goto L3; // [59] 68
    // SubProg GetHexString pc: 63 op: STARTLINE (58)

    /** scanner.e:1371				exit*/
    // SubProg GetHexString pc: 65 op: EXIT (61)
    goto L4; // [65] 224
    // SubProg GetHexString pc: 67 op: NOP1 (159)
L3: // addr: 68 pc: 67 sub: 26824 op: 159
    // SubProg GetHexString pc: 68 op: STARTLINE (58)

    /** scanner.e:1374			digit = find(ch, "0123456789ABCDEFabcdef_ \t\n\r")*/
    // SubProg GetHexString pc: 70 op: FIND_FROM (176)
    _digit_26828 = find_from(_ch_26827, _14970, 1);
    // SubProg GetHexString pc: 75 op: STARTLINE (58)

    /** scanner.e:1375			if digit = 0 then*/
    // SubProg GetHexString pc: 77 op: EQUALS_IFW_I (121)
    if (_digit_26828 != 0)
    goto L5; // [77] 89
    // SubProg GetHexString pc: 81 op: STARTLINE (58)

    /** scanner.e:1376				CompileErr(329)*/
    // SubProg GetHexString pc: 83 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(329, _21936, 0);
    // SubProg GetHexString pc: 88 op: NOP1 (159)
L5: // addr: 89 pc: 88 sub: 26824 op: 159
    // SubProg GetHexString pc: 89 op: STARTLINE (58)

    /** scanner.e:1378			if digit <= 23 then*/
    // SubProg GetHexString pc: 91 op: LESSEQ_IFW_I (123)
    if (_digit_26828 > 23)
    goto L6; // [91] 177
    // SubProg GetHexString pc: 95 op: STARTLINE (58)

    /** scanner.e:1379				if digit != 23 then*/
    // SubProg GetHexString pc: 97 op: NOTEQ_IFW_I (122)
    if (_digit_26828 == 23)
    goto L7; // [97] 212
    // SubProg GetHexString pc: 101 op: STARTLINE (58)

    /** scanner.e:1380					if digit > 16 then*/
    // SubProg GetHexString pc: 103 op: GREATER_IFW_I (124)
    if (_digit_26828 <= 16)
    goto L8; // [103] 114
    // SubProg GetHexString pc: 107 op: STARTLINE (58)

    /** scanner.e:1381						digit -= 6*/
    // SubProg GetHexString pc: 109 op: MINUS_I (116)
    _digit_26828 = _digit_26828 - 6;
    // SubProg GetHexString pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 26824 op: 159
    // SubProg GetHexString pc: 114 op: STARTLINE (58)

    /** scanner.e:1383					if nibble = 1 then*/
    // SubProg GetHexString pc: 116 op: EQUALS_IFW_I (121)
    if (_nibble_26831 != 1)
    goto L9; // [116] 129
    // SubProg GetHexString pc: 120 op: STARTLINE (58)

    /** scanner.e:1384						val = digit - 1*/
    // SubProg GetHexString pc: 122 op: MINUS (10)
    DeRef(_val_26829);
    _val_26829 = _digit_26828 - 1;
    if ((object)((uintptr_t)_val_26829 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26829 = NewDouble((eudouble)_val_26829);
    }
    // SubProg GetHexString pc: 126 op: ELSE (23)
    goto LA; // [126] 167
    // SubProg GetHexString pc: 128 op: NOP1 (159)
L9: // addr: 129 pc: 128 sub: 26824 op: 159
    // SubProg GetHexString pc: 129 op: STARTLINE (58)

    /** scanner.e:1386						val = val * 16 + digit - 1*/
    // SubProg GetHexString pc: 131 op: MULTIPLY (13)
    if (IS_ATOM_INT(_val_26829)) {
        if (_val_26829 == (short)_val_26829){
            _14979 = _val_26829 * 16;
        }
        else{
            _14979 = NewDouble(_val_26829 * (eudouble)16);
        }
    }
    else {
        _14979 = NewDouble(DBL_PTR(_val_26829)->dbl * (eudouble)16);
    }
    // SubProg GetHexString pc: 135 op: PLUS (11)
    if (IS_ATOM_INT(_14979)) {
        _14980 = _14979 + _digit_26828;
        if ((object)((uintptr_t)_14980 + (uintptr_t)HIGH_BITS) >= 0){
            _14980 = NewDouble((eudouble)_14980);
        }
    }
    else {
        _14980 = NewDouble(DBL_PTR(_14979)->dbl + (eudouble)_digit_26828);
    }
    DeRef(_14979);
    _14979 = NOVALUE;
    // SubProg GetHexString pc: 139 op: MINUS (10)
    DeRef(_val_26829);
    if (IS_ATOM_INT(_14980)) {
        _val_26829 = _14980 - 1;
        if ((object)((uintptr_t)_val_26829 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26829 = NewDouble((eudouble)_val_26829);
        }
    }
    else {
        _val_26829 = NewDouble(DBL_PTR(_14980)->dbl - (eudouble)1);
    }
    DeRef(_14980);
    _14980 = NOVALUE;
    // SubProg GetHexString pc: 143 op: STARTLINE (58)

    /** scanner.e:1387						if nibble = maxnibbles then*/
    // SubProg GetHexString pc: 145 op: EQUALS_IFW_I (121)
    if (_nibble_26831 != _maxnibbles_26826)
    goto LB; // [145] 166
    // SubProg GetHexString pc: 149 op: STARTLINE (58)

    /** scanner.e:1388							string_text &= val*/
    // SubProg GetHexString pc: 151 op: CONCAT (15)
    Ref(_val_26829);
    Append(&_string_text_26832, _string_text_26832, _val_26829);
    // SubProg GetHexString pc: 155 op: STARTLINE (58)

    /** scanner.e:1389							val = -1*/
    // SubProg GetHexString pc: 157 op: ASSIGN (18)
    DeRef(_val_26829);
    _val_26829 = -1;
    // SubProg GetHexString pc: 160 op: STARTLINE (58)

    /** scanner.e:1390							nibble = 0*/
    // SubProg GetHexString pc: 162 op: ASSIGN_I (113)
    _nibble_26831 = 0;
    // SubProg GetHexString pc: 165 op: NOP1 (159)
LB: // addr: 166 pc: 165 sub: 26824 op: 159
    // SubProg GetHexString pc: 166 op: NOP1 (159)
LA: // addr: 167 pc: 166 sub: 26824 op: 159
    // SubProg GetHexString pc: 167 op: STARTLINE (58)

    /** scanner.e:1393					nibble += 1*/
    // SubProg GetHexString pc: 169 op: PLUS1_I (117)
    _nibble_26831 = _nibble_26831 + 1;
    // SubProg GetHexString pc: 173 op: NOP1 (159)
    // SubProg GetHexString pc: 174 op: ELSE (23)
    goto L7; // [174] 212
    // SubProg GetHexString pc: 176 op: NOP1 (159)
L6: // addr: 177 pc: 176 sub: 26824 op: 159
    // SubProg GetHexString pc: 177 op: STARTLINE (58)

    /** scanner.e:1396				if val >= 0 then*/
    // SubProg GetHexString pc: 179 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26829, 0)){
        goto LC; // [179] 195
    }
    // SubProg GetHexString pc: 183 op: STARTLINE (58)

    /** scanner.e:1398					string_text &= val*/
    // SubProg GetHexString pc: 185 op: CONCAT (15)
    Ref(_val_26829);
    Append(&_string_text_26832, _string_text_26832, _val_26829);
    // SubProg GetHexString pc: 189 op: STARTLINE (58)

    /** scanner.e:1399					val = -1*/
    // SubProg GetHexString pc: 191 op: ASSIGN (18)
    DeRef(_val_26829);
    _val_26829 = -1;
    // SubProg GetHexString pc: 194 op: NOP1 (159)
LC: // addr: 195 pc: 194 sub: 26824 op: 159
    // SubProg GetHexString pc: 195 op: STARTLINE (58)

    /** scanner.e:1401				nibble = 1*/
    // SubProg GetHexString pc: 197 op: ASSIGN_I (113)
    _nibble_26831 = 1;
    // SubProg GetHexString pc: 200 op: STARTLINE (58)

    /** scanner.e:1402				if ch = '\n' then*/
    // SubProg GetHexString pc: 202 op: EQUALS_IFW_I (121)
    if (_ch_26827 != 10)
    goto LD; // [202] 211
    // SubProg GetHexString pc: 206 op: STARTLINE (58)

    /** scanner.e:1403					read_line()*/
    // SubProg GetHexString pc: 208 op: PROC (27)
    _61read_line();
    // SubProg GetHexString pc: 210 op: NOP1 (159)
LD: // addr: 211 pc: 210 sub: 26824 op: 159
    // SubProg GetHexString pc: 211 op: NOP1 (159)
L7: // addr: 212 pc: 211 sub: 26824 op: 159
    // SubProg GetHexString pc: 212 op: STARTLINE (58)

    /** scanner.e:1406			ch = getch()*/
    // SubProg GetHexString pc: 214 op: PROC (27)
    _ch_26827 = _61getch();
    // SubProg GetHexString pc: 217 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26827)) {
        _1 = (object)(DBL_PTR(_ch_26827)->dbl);
        DeRefDS(_ch_26827);
        _ch_26827 = _1;
    }
    // SubProg GetHexString pc: 219 op: STARTLINE (58)

    /** scanner.e:1407		end while*/
    // SubProg GetHexString pc: 221 op: ENDWHILE (22)
    goto L1; // [221] 41
    // SubProg GetHexString pc: 223 op: NOP1 (159)
L4: // addr: 224 pc: 223 sub: 26824 op: 159
    // SubProg GetHexString pc: 224 op: STARTLINE (58)

    /** scanner.e:1409		if val >= 0 then	*/
    // SubProg GetHexString pc: 226 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26829, 0)){
        goto LE; // [226] 237
    }
    // SubProg GetHexString pc: 230 op: STARTLINE (58)

    /** scanner.e:1411			string_text &= val*/
    // SubProg GetHexString pc: 232 op: CONCAT (15)
    Ref(_val_26829);
    Append(&_string_text_26832, _string_text_26832, _val_26829);
    // SubProg GetHexString pc: 236 op: NOP1 (159)
LE: // addr: 237 pc: 236 sub: 26824 op: 159
    // SubProg GetHexString pc: 237 op: STARTLINE (58)

    /** scanner.e:1414		return string_text*/
    // SubProg GetHexString pc: 239 op: RETURNF (28)

// Exiting block BLOCK: GetHexString

// block var maxnibbles_26826

// block var ch_26827

// block var digit_26828

// block var val_26829
    DeRef(_val_26829);

// block var cline_26830

// block var nibble_26831
    return _string_text_26832;
    // SubProg GetHexString pc: 243 op: BADRETURNF (43)
    ;
}


object _61GetBitString()
{
    object _ch_26877 = NOVALUE;
    object _digit_26878 = NOVALUE;
    object _val_26879 = NOVALUE;
    object _cline_26880 = NOVALUE;
    object _bitcnt_26881 = NOVALUE;
    object _string_text_26882 = NOVALUE;
// skipping _15010  name type: 0
// skipping _15009  name type: 0
// skipping _15008  name type: 0
// skipping _15007  name type: 0
// skipping _15006  name type: 0
// skipping _15005  name type: 0
// skipping _15004  name type: 0
// skipping _15003  name type: 0
    object _15002 = NOVALUE; // 26906 15002
    object _15001 = NOVALUE; // 26905 15001
// skipping _15000  name type: 0
// skipping _14999  name type: 0
// skipping _14998  name type: 0
// skipping _14997  name type: 0
// skipping _14996  name type: 0
// skipping _14995  name type: 0
// skipping _14993  name type: 0
// skipping _14992  name type: 0
// skipping _14991  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetBitString pc: 1 op: STARTLINE (58)

    /** scanner.e:1425		cline = line_number*/
    // SubProg GetBitString pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetBitString pc: 5 op: ASSIGN (18)
    _cline_26880 = _34line_number_15189;
    // SubProg GetBitString pc: 8 op: INTEGER_CHECK (96)
    // SubProg GetBitString pc: 10 op: STARTLINE (58)

    /** scanner.e:1426		string_text = ""*/
    // SubProg GetBitString pc: 12 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_string_text_26882);
    _string_text_26882 = _5;
    // SubProg GetBitString pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg GetBitString pc: 17 op: STARTLINE (58)

    /** scanner.e:1427		bitcnt = 1*/
    // SubProg GetBitString pc: 19 op: ASSIGN_I (113)
    _bitcnt_26881 = 1;
    // SubProg GetBitString pc: 22 op: STARTLINE (58)

    /** scanner.e:1428		val = -1*/
    // SubProg GetBitString pc: 24 op: ASSIGN (18)
    DeRef(_val_26879);
    _val_26879 = -1;
    // SubProg GetBitString pc: 27 op: STARTLINE (58)

    /** scanner.e:1429		ch = getch()*/
    // SubProg GetBitString pc: 29 op: PROC (27)
    _ch_26877 = _61getch();
    // SubProg GetBitString pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26877)) {
        _1 = (object)(DBL_PTR(_ch_26877)->dbl);
        DeRefDS(_ch_26877);
        _ch_26877 = _1;
    }
    // SubProg GetBitString pc: 34 op: STARTLINE (58)

    /** scanner.e:1430		while 1 do*/
    // SubProg GetBitString pc: 36 op: NOP2 (110)
    // SubProg GetBitString pc: 38 op: NOPWHILE (158)
L1: // addr: 39 pc: 38 sub: 26875 op: 158
    // SubProg GetBitString pc: 39 op: STARTLINE (58)

    /** scanner.e:1431			if ch = END_OF_FILE_CHAR then*/
    // SubProg GetBitString pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetBitString pc: 43 op: EQUALS_IFW (104)
    if (_ch_26877 != 26)
    goto L2; // [43] 55
    // SubProg GetBitString pc: 47 op: STARTLINE (58)

    /** scanner.e:1432				CompileErr(129, cline)*/
    // SubProg GetBitString pc: 49 op: PROC (27)
    _49CompileErr(129, _cline_26880, 0);
    // SubProg GetBitString pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 26875 op: 159
    // SubProg GetBitString pc: 55 op: STARTLINE (58)

    /** scanner.e:1435			if ch = '"' then*/
    // SubProg GetBitString pc: 57 op: EQUALS_IFW_I (121)
    if (_ch_26877 != 34)
    goto L3; // [57] 66
    // SubProg GetBitString pc: 61 op: STARTLINE (58)

    /** scanner.e:1436				exit*/
    // SubProg GetBitString pc: 63 op: EXIT (61)
    goto L4; // [63] 186
    // SubProg GetBitString pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 26875 op: 159
    // SubProg GetBitString pc: 66 op: STARTLINE (58)

    /** scanner.e:1439			digit = find(ch, "01_ \t\n\r")*/
    // SubProg GetBitString pc: 68 op: FIND_FROM (176)
    _digit_26878 = find_from(_ch_26877, _14994, 1);
    // SubProg GetBitString pc: 73 op: STARTLINE (58)

    /** scanner.e:1440			if digit = 0 then*/
    // SubProg GetBitString pc: 75 op: EQUALS_IFW_I (121)
    if (_digit_26878 != 0)
    goto L5; // [75] 87
    // SubProg GetBitString pc: 79 op: STARTLINE (58)

    /** scanner.e:1441				CompileErr(329)*/
    // SubProg GetBitString pc: 81 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(329, _21936, 0);
    // SubProg GetBitString pc: 86 op: NOP1 (159)
L5: // addr: 87 pc: 86 sub: 26875 op: 159
    // SubProg GetBitString pc: 87 op: STARTLINE (58)

    /** scanner.e:1443			if digit <= 3 then*/
    // SubProg GetBitString pc: 89 op: LESSEQ_IFW_I (123)
    if (_digit_26878 > 3)
    goto L6; // [89] 139
    // SubProg GetBitString pc: 93 op: STARTLINE (58)

    /** scanner.e:1444				if digit != 3 then*/
    // SubProg GetBitString pc: 95 op: NOTEQ_IFW_I (122)
    if (_digit_26878 == 3)
    goto L7; // [95] 174
    // SubProg GetBitString pc: 99 op: STARTLINE (58)

    /** scanner.e:1445					if bitcnt = 1 then*/
    // SubProg GetBitString pc: 101 op: EQUALS_IFW_I (121)
    if (_bitcnt_26881 != 1)
    goto L8; // [101] 114
    // SubProg GetBitString pc: 105 op: STARTLINE (58)

    /** scanner.e:1446						val = digit - 1*/
    // SubProg GetBitString pc: 107 op: MINUS (10)
    DeRef(_val_26879);
    _val_26879 = _digit_26878 - 1;
    if ((object)((uintptr_t)_val_26879 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26879 = NewDouble((eudouble)_val_26879);
    }
    // SubProg GetBitString pc: 111 op: ELSE (23)
    goto L9; // [111] 129
    // SubProg GetBitString pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 26875 op: 159
    // SubProg GetBitString pc: 114 op: STARTLINE (58)

    /** scanner.e:1448						val = val * 2 + digit - 1*/
    // SubProg GetBitString pc: 116 op: PLUS (11)
    if (IS_ATOM_INT(_val_26879) && IS_ATOM_INT(_val_26879)) {
        _15001 = _val_26879 + _val_26879;
        if ((object)((uintptr_t)_15001 + (uintptr_t)HIGH_BITS) >= 0){
            _15001 = NewDouble((eudouble)_15001);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26879)) {
            _15001 = NewDouble((eudouble)_val_26879 + DBL_PTR(_val_26879)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26879)) {
                _15001 = NewDouble(DBL_PTR(_val_26879)->dbl + (eudouble)_val_26879);
            }
            else
            _15001 = NewDouble(DBL_PTR(_val_26879)->dbl + DBL_PTR(_val_26879)->dbl);
        }
    }
    // SubProg GetBitString pc: 120 op: PLUS (11)
    if (IS_ATOM_INT(_15001)) {
        _15002 = _15001 + _digit_26878;
        if ((object)((uintptr_t)_15002 + (uintptr_t)HIGH_BITS) >= 0){
            _15002 = NewDouble((eudouble)_15002);
        }
    }
    else {
        _15002 = NewDouble(DBL_PTR(_15001)->dbl + (eudouble)_digit_26878);
    }
    DeRef(_15001);
    _15001 = NOVALUE;
    // SubProg GetBitString pc: 124 op: MINUS (10)
    DeRef(_val_26879);
    if (IS_ATOM_INT(_15002)) {
        _val_26879 = _15002 - 1;
        if ((object)((uintptr_t)_val_26879 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26879 = NewDouble((eudouble)_val_26879);
        }
    }
    else {
        _val_26879 = NewDouble(DBL_PTR(_15002)->dbl - (eudouble)1);
    }
    DeRef(_15002);
    _15002 = NOVALUE;
    // SubProg GetBitString pc: 128 op: NOP1 (159)
L9: // addr: 129 pc: 128 sub: 26875 op: 159
    // SubProg GetBitString pc: 129 op: STARTLINE (58)

    /** scanner.e:1450					bitcnt += 1*/
    // SubProg GetBitString pc: 131 op: PLUS1_I (117)
    _bitcnt_26881 = _bitcnt_26881 + 1;
    // SubProg GetBitString pc: 135 op: NOP1 (159)
    // SubProg GetBitString pc: 136 op: ELSE (23)
    goto L7; // [136] 174
    // SubProg GetBitString pc: 138 op: NOP1 (159)
L6: // addr: 139 pc: 138 sub: 26875 op: 159
    // SubProg GetBitString pc: 139 op: STARTLINE (58)

    /** scanner.e:1453				if val >= 0 then*/
    // SubProg GetBitString pc: 141 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26879, 0)){
        goto LA; // [141] 157
    }
    // SubProg GetBitString pc: 145 op: STARTLINE (58)

    /** scanner.e:1455					string_text &= val*/
    // SubProg GetBitString pc: 147 op: CONCAT (15)
    Ref(_val_26879);
    Append(&_string_text_26882, _string_text_26882, _val_26879);
    // SubProg GetBitString pc: 151 op: STARTLINE (58)

    /** scanner.e:1456					val = -1*/
    // SubProg GetBitString pc: 153 op: ASSIGN (18)
    DeRef(_val_26879);
    _val_26879 = -1;
    // SubProg GetBitString pc: 156 op: NOP1 (159)
LA: // addr: 157 pc: 156 sub: 26875 op: 159
    // SubProg GetBitString pc: 157 op: STARTLINE (58)

    /** scanner.e:1458				bitcnt = 1*/
    // SubProg GetBitString pc: 159 op: ASSIGN_I (113)
    _bitcnt_26881 = 1;
    // SubProg GetBitString pc: 162 op: STARTLINE (58)

    /** scanner.e:1459				if ch = '\n' then*/
    // SubProg GetBitString pc: 164 op: EQUALS_IFW_I (121)
    if (_ch_26877 != 10)
    goto LB; // [164] 173
    // SubProg GetBitString pc: 168 op: STARTLINE (58)

    /** scanner.e:1460					read_line()*/
    // SubProg GetBitString pc: 170 op: PROC (27)
    _61read_line();
    // SubProg GetBitString pc: 172 op: NOP1 (159)
LB: // addr: 173 pc: 172 sub: 26875 op: 159
    // SubProg GetBitString pc: 173 op: NOP1 (159)
L7: // addr: 174 pc: 173 sub: 26875 op: 159
    // SubProg GetBitString pc: 174 op: STARTLINE (58)

    /** scanner.e:1463			ch = getch()*/
    // SubProg GetBitString pc: 176 op: PROC (27)
    _ch_26877 = _61getch();
    // SubProg GetBitString pc: 179 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26877)) {
        _1 = (object)(DBL_PTR(_ch_26877)->dbl);
        DeRefDS(_ch_26877);
        _ch_26877 = _1;
    }
    // SubProg GetBitString pc: 181 op: STARTLINE (58)

    /** scanner.e:1464		end while*/
    // SubProg GetBitString pc: 183 op: ENDWHILE (22)
    goto L1; // [183] 39
    // SubProg GetBitString pc: 185 op: NOP1 (159)
L4: // addr: 186 pc: 185 sub: 26875 op: 159
    // SubProg GetBitString pc: 186 op: STARTLINE (58)

    /** scanner.e:1466		if val >= 0 then	*/
    // SubProg GetBitString pc: 188 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26879, 0)){
        goto LC; // [188] 199
    }
    // SubProg GetBitString pc: 192 op: STARTLINE (58)

    /** scanner.e:1468			string_text &= val*/
    // SubProg GetBitString pc: 194 op: CONCAT (15)
    Ref(_val_26879);
    Append(&_string_text_26882, _string_text_26882, _val_26879);
    // SubProg GetBitString pc: 198 op: NOP1 (159)
LC: // addr: 199 pc: 198 sub: 26875 op: 159
    // SubProg GetBitString pc: 199 op: STARTLINE (58)

    /** scanner.e:1471		return string_text*/
    // SubProg GetBitString pc: 201 op: RETURNF (28)

// Exiting block BLOCK: GetBitString

// block var ch_26877

// block var digit_26878

// block var val_26879
    DeRef(_val_26879);

// block var cline_26880

// block var bitcnt_26881
    return _string_text_26882;
    // SubProg GetBitString pc: 205 op: BADRETURNF (43)
    ;
}


object _61Scanner()
{
    object _fwd_inlined_set_qualified_fwd_at_441_27020 = NOVALUE;
    object _ch_26921 = NOVALUE;
    object _i_26922 = NOVALUE;
    object _sp_26923 = NOVALUE;
    object _prev_Nne_26924 = NOVALUE;
    object _pch_26925 = NOVALUE;
    object _cline_26926 = NOVALUE;
    object _yytext_26927 = NOVALUE;
    object _namespaces_26928 = NOVALUE;
    object _d_26929 = NOVALUE;
    object _tok_26931 = NOVALUE;
    object _is_int_26932 = NOVALUE;
    object _class_26933 = NOVALUE;
    object _name_26934 = NOVALUE;
    object _is_namespace_26993 = NOVALUE;
    object _basetype_27227 = NOVALUE;
    object _hdigit_27267 = NOVALUE;
    object _fch_27401 = NOVALUE;
    object _cnest_27581 = NOVALUE;
    object _ach_27610 = NOVALUE;
    object _31716 = NOVALUE; // 63923 31716
    object _31715 = NOVALUE; // 63922 31715
    object _31714 = NOVALUE; // 63921 31714
    object _31713 = NOVALUE; // 63920 31713
    object _31712 = NOVALUE; // 63919 31712
    object _31711 = NOVALUE; // 63918 31711
    object _31710 = NOVALUE; // 63917 31710
    object _15396 = NOVALUE; // 27703 15396
    object _15395 = NOVALUE; // 27700 15395
// skipping _15394  name type: 0
    object _15393 = NOVALUE; // 27696 15393
// skipping _15392  name type: 0
    object _15391 = NOVALUE; // 27692 15391
    object _15390 = NOVALUE; // 27691 15390
    object _15389 = NOVALUE; // 27690 15389
// skipping _15388  name type: 0
    object _15387 = NOVALUE; // 27685 15387
    object _15386 = NOVALUE; // 27684 15386
    object _15385 = NOVALUE; // 27682 15385
    object _15384 = NOVALUE; // 27681 15384
// skipping _15383  name type: 0
    object _15382 = NOVALUE; // 27676 15382
    object _15381 = NOVALUE; // 27673 15381
// skipping _15380  name type: 0
    object _15379 = NOVALUE; // 27670 15379
// skipping _15378  name type: 0
    object _15377 = NOVALUE; // 27665 15377
    object _15376 = NOVALUE; // 27662 15376
// skipping _15375  name type: 0
    object _15374 = NOVALUE; // 27659 15374
// skipping _15373  name type: 0
    object _15372 = NOVALUE; // 27654 15372
    object _15371 = NOVALUE; // 27651 15371
// skipping _15370  name type: 0
    object _15369 = NOVALUE; // 27648 15369
// skipping _15368  name type: 0
    object _15367 = NOVALUE; // 27643 15367
    object _15366 = NOVALUE; // 27642 15366
    object _15365 = NOVALUE; // 27638 15365
    object _15364 = NOVALUE; // 27637 15364
    object _15363 = NOVALUE; // 27634 15363
// skipping _15362  name type: 0
    object _15361 = NOVALUE; // 27629 15361
    object _15360 = NOVALUE; // 27627 15360
// skipping _15357  name type: 0
// skipping _15355  name type: 0
// skipping _15354  name type: 0
// skipping _15353  name type: 0
// skipping _15352  name type: 0
// skipping _15351  name type: 0
// skipping _15350  name type: 0
    object _15349 = NOVALUE; // 27606 15349
// skipping _15348  name type: 0
// skipping _15347  name type: 0
// skipping _15346  name type: 0
// skipping _15345  name type: 0
// skipping _15344  name type: 0
// skipping _15343  name type: 0
// skipping _15342  name type: 0
// skipping _15339  name type: 0
// skipping _15338  name type: 0
// skipping _15337  name type: 0
    object _15336 = NOVALUE; // 27577 15336
// skipping _15335  name type: 0
// skipping _15334  name type: 0
// skipping _15333  name type: 0
    object _15332 = NOVALUE; // 27570 15332
    object _15331 = NOVALUE; // 27568 15331
// skipping _15330  name type: 0
// skipping _15329  name type: 0
// skipping _15328  name type: 0
    object _15327 = NOVALUE; // 27561 15327
    object _15326 = NOVALUE; // 27560 15326
    object _15325 = NOVALUE; // 27556 15325
    object _15324 = NOVALUE; // 27555 15324
// skipping _15323  name type: 0
    object _15322 = NOVALUE; // 27548 15322
    object _15321 = NOVALUE; // 27547 15321
    object _15320 = NOVALUE; // 27544 15320
    object _15319 = NOVALUE; // 27542 15319
// skipping _15318  name type: 0
// skipping _15317  name type: 0
    object _15316 = NOVALUE; // 27536 15316
    object _15315 = NOVALUE; // 27535 15315
    object _15314 = NOVALUE; // 27534 15314
    object _15313 = NOVALUE; // 27533 15313
    object _15312 = NOVALUE; // 27532 15312
    object _15311 = NOVALUE; // 27531 15311
// skipping _15310  name type: 0
    object _15309 = NOVALUE; // 27528 15309
    object _15308 = NOVALUE; // 27527 15308
    object _15307 = NOVALUE; // 27526 15307
    object _15306 = NOVALUE; // 27525 15306
    object _15305 = NOVALUE; // 27524 15305
    object _15304 = NOVALUE; // 27523 15304
// skipping _15303  name type: 0
    object _15302 = NOVALUE; // 27520 15302
    object _15301 = NOVALUE; // 27519 15301
// skipping _15300  name type: 0
// skipping _15299  name type: 0
    object _15298 = NOVALUE; // 27514 15298
// skipping _15297  name type: 0
// skipping _15296  name type: 0
    object _15295 = NOVALUE; // 27507 15295
// skipping _15294  name type: 0
// skipping _15293  name type: 0
// skipping _15292  name type: 0
// skipping _15291  name type: 0
    object _15290 = NOVALUE; // 27488 15290
    object _15289 = NOVALUE; // 27487 15289
    object _15288 = NOVALUE; // 27486 15288
    object _15287 = NOVALUE; // 27485 15287
    object _15286 = NOVALUE; // 27484 15286
    object _15285 = NOVALUE; // 27483 15285
// skipping _15284  name type: 0
    object _15283 = NOVALUE; // 27479 15283
    object _15282 = NOVALUE; // 27478 15282
    object _15281 = NOVALUE; // 27477 15281
    object _15280 = NOVALUE; // 27476 15280
    object _15279 = NOVALUE; // 27475 15279
    object _15278 = NOVALUE; // 27474 15278
// skipping _15277  name type: 0
    object _15276 = NOVALUE; // 27470 15276
    object _15275 = NOVALUE; // 27469 15275
// skipping _15274  name type: 0
// skipping _15273  name type: 0
    object _15272 = NOVALUE; // 27464 15272
// skipping _15271  name type: 0
// skipping _15270  name type: 0
    object _15269 = NOVALUE; // 27460 15269
// skipping _15268  name type: 0
    object _15267 = NOVALUE; // 27454 15267
    object _15266 = NOVALUE; // 27452 15266
// skipping _15265  name type: 0
// skipping _15264  name type: 0
// skipping _15263  name type: 0
    object _15262 = NOVALUE; // 27445 15262
    object _15261 = NOVALUE; // 27442 15261
// skipping _15260  name type: 0
// skipping _15259  name type: 0
// skipping _15258  name type: 0
    object _15257 = NOVALUE; // 27434 15257
    object _15256 = NOVALUE; // 27433 15256
    object _15255 = NOVALUE; // 27429 15255
// skipping _15254  name type: 0
    object _15253 = NOVALUE; // 27427 15253
// skipping _15252  name type: 0
// skipping _15251  name type: 0
// skipping _15250  name type: 0
// skipping _15249  name type: 0
    object _15248 = NOVALUE; // 27418 15248
// skipping _15247  name type: 0
// skipping _15246  name type: 0
    object _15245 = NOVALUE; // 27413 15245
    object _15244 = NOVALUE; // 27412 15244
    object _15243 = NOVALUE; // 27411 15243
    object _15242 = NOVALUE; // 27408 15242
// skipping _15241  name type: 0
// skipping _15240  name type: 0
// skipping _15239  name type: 0
// skipping _15238  name type: 0
// skipping _15237  name type: 0
    object _15236 = NOVALUE; // 27397 15236
// skipping _15235  name type: 0
    object _15234 = NOVALUE; // 27392 15234
// skipping _15233  name type: 0
// skipping _15232  name type: 0
// skipping _15231  name type: 0
// skipping _15230  name type: 0
    object _15229 = NOVALUE; // 27380 15229
    object _15228 = NOVALUE; // 27379 15228
    object _15227 = NOVALUE; // 27375 15227
    object _15226 = NOVALUE; // 27374 15226
    object _15225 = NOVALUE; // 27371 15225
    object _15224 = NOVALUE; // 27369 15224
    object _15223 = NOVALUE; // 27366 15223
// skipping _15222  name type: 0
    object _15221 = NOVALUE; // 27363 15221
// skipping _15220  name type: 0
    object _15219 = NOVALUE; // 27359 15219
    object _15218 = NOVALUE; // 27358 15218
    object _15217 = NOVALUE; // 27354 15217
    object _15216 = NOVALUE; // 27353 15216
    object _15215 = NOVALUE; // 27350 15215
// skipping _15214  name type: 0
    object _15213 = NOVALUE; // 27346 15213
// skipping _15212  name type: 0
// skipping _15211  name type: 0
// skipping _15210  name type: 0
// skipping _15209  name type: 0
    object _15208 = NOVALUE; // 27338 15208
    object _15207 = NOVALUE; // 27337 15207
// skipping _15206  name type: 0
    object _15205 = NOVALUE; // 27333 15205
// skipping _15204  name type: 0
// skipping _15203  name type: 0
// skipping _15202  name type: 0
    object _15201 = NOVALUE; // 27327 15201
// skipping _15200  name type: 0
// skipping _15199  name type: 0
    object _15198 = NOVALUE; // 27321 15198
    object _15197 = NOVALUE; // 27319 15197
// skipping _15196  name type: 0
    object _15195 = NOVALUE; // 27317 15195
    object _15194 = NOVALUE; // 27316 15194
    object _15193 = NOVALUE; // 27315 15193
// skipping _15192  name type: 0
// skipping _15191  name type: 0
    object _15190 = NOVALUE; // 27310 15190
    object _15188 = NOVALUE; // 27308 15188
    object _15187 = NOVALUE; // 27307 15187
// skipping _15186  name type: 0
// skipping _15185  name type: 0
// skipping _15184  name type: 0
    object _15183 = NOVALUE; // 27299 15183
// skipping _15182  name type: 0
// skipping _15181  name type: 0
// skipping _15180  name type: 0
    object _15179 = NOVALUE; // 27293 15179
// skipping _15178  name type: 0
// skipping _15177  name type: 0
    object _15176 = NOVALUE; // 27287 15176
// skipping _15175  name type: 0
// skipping _15174  name type: 0
// skipping _15173  name type: 0
// skipping _15172  name type: 0
// skipping _15171  name type: 0
    object _15170 = NOVALUE; // 27275 15170
// skipping _15169  name type: 0
// skipping _15168  name type: 0
// skipping _15167  name type: 0
// skipping _15166  name type: 0
// skipping _15164  name type: 0
// skipping _15163  name type: 0
    object _15162 = NOVALUE; // 27262 15162
    object _15161 = NOVALUE; // 27261 15161
    object _15160 = NOVALUE; // 27260 15160
// skipping _15159  name type: 0
    object _15158 = NOVALUE; // 27256 15158
// skipping _15157  name type: 0
// skipping _15156  name type: 0
    object _15155 = NOVALUE; // 27251 15155
// skipping _15154  name type: 0
    object _15153 = NOVALUE; // 27249 15153
// skipping _15152  name type: 0
    object _15151 = NOVALUE; // 27246 15151
// skipping _15150  name type: 0
// skipping _15149  name type: 0
    object _15148 = NOVALUE; // 27241 15148
// skipping _15147  name type: 0
// skipping _15146  name type: 0
    object _15145 = NOVALUE; // 27235 15145
// skipping _15144  name type: 0
    object _15143 = NOVALUE; // 27232 15143
// skipping _15142  name type: 0
    object _15141 = NOVALUE; // 27226 15141
// skipping _15140  name type: 0
    object _15139 = NOVALUE; // 27223 15139
    object _15138 = NOVALUE; // 27220 15138
// skipping _15137  name type: 0
// skipping _15136  name type: 0
// skipping _15135  name type: 0
    object _15134 = NOVALUE; // 27207 15134
// skipping _15133  name type: 0
// skipping _15132  name type: 0
    object _15131 = NOVALUE; // 27202 15131
// skipping _15130  name type: 0
    object _15129 = NOVALUE; // 27197 15129
// skipping _15128  name type: 0
// skipping _15127  name type: 0
    object _15126 = NOVALUE; // 27189 15126
// skipping _15125  name type: 0
// skipping _15124  name type: 0
// skipping _15123  name type: 0
// skipping _15122  name type: 0
// skipping _15121  name type: 0
// skipping _15120  name type: 0
    object _15119 = NOVALUE; // 27168 15119
// skipping _15118  name type: 0
    object _15117 = NOVALUE; // 27163 15117
// skipping _15116  name type: 0
// skipping _15115  name type: 0
    object _15114 = NOVALUE; // 27155 15114
// skipping _15113  name type: 0
// skipping _15112  name type: 0
// skipping _15111  name type: 0
// skipping _15110  name type: 0
// skipping _15109  name type: 0
    object _15108 = NOVALUE; // 27135 15108
    object _15107 = NOVALUE; // 27133 15107
    object _15106 = NOVALUE; // 27131 15106
    object _15105 = NOVALUE; // 27130 15105
    object _15104 = NOVALUE; // 27127 15104
    object _15103 = NOVALUE; // 27126 15103
    object _15102 = NOVALUE; // 27125 15102
// skipping _15101  name type: 0
    object _15100 = NOVALUE; // 27118 15100
// skipping _15099  name type: 0
    object _15098 = NOVALUE; // 27111 15098
// skipping _15097  name type: 0
    object _15096 = NOVALUE; // 27104 15096
// skipping _15095  name type: 0
    object _15094 = NOVALUE; // 27097 15094
// skipping _15093  name type: 0
    object _15092 = NOVALUE; // 27093 15092
    object _15091 = NOVALUE; // 27091 15091
    object _15090 = NOVALUE; // 27090 15090
    object _15089 = NOVALUE; // 27085 15089
    object _15088 = NOVALUE; // 27084 15088
// skipping _15087  name type: 0
    object _15086 = NOVALUE; // 27079 15086
// skipping _15085  name type: 0
// skipping _15084  name type: 0
    object _15083 = NOVALUE; // 27071 15083
// skipping _15082  name type: 0
    object _15081 = NOVALUE; // 27067 15081
    object _15080 = NOVALUE; // 27065 15080
    object _15079 = NOVALUE; // 27064 15079
// skipping _15078  name type: 0
    object _15077 = NOVALUE; // 27057 15077
// skipping _15076  name type: 0
// skipping _15075  name type: 0
// skipping _15074  name type: 0
// skipping _15073  name type: 0
    object _15072 = NOVALUE; // 27042 15072
// skipping _15071  name type: 0
// skipping _15070  name type: 0
// skipping _15069  name type: 0
    object _15068 = NOVALUE; // 27036 15068
// skipping _15067  name type: 0
// skipping _15066  name type: 0
    object _15065 = NOVALUE; // 27032 15065
// skipping _15064  name type: 0
    object _15063 = NOVALUE; // 27030 15063
    object _15062 = NOVALUE; // 27028 15062
// skipping _15061  name type: 0
    object _15060 = NOVALUE; // 27025 15060
// skipping _15059  name type: 0
    object _15058 = NOVALUE; // 27023 15058
// skipping _15057  name type: 0
    object _15056 = NOVALUE; // 27018 15056
    object _15055 = NOVALUE; // 27016 15055
    object _15054 = NOVALUE; // 27015 15054
// skipping _15053  name type: 0
    object _15052 = NOVALUE; // 27010 15052
// skipping _15051  name type: 0
// skipping _15050  name type: 0
// skipping _15049  name type: 0
// skipping _15048  name type: 0
    object _15047 = NOVALUE; // 26998 15047
// skipping _15046  name type: 0
// skipping _15045  name type: 0
    object _15044 = NOVALUE; // 26991 15044
// skipping _15043  name type: 0
    object _15042 = NOVALUE; // 26989 15042
// skipping _15041  name type: 0
// skipping _15040  name type: 0
    object _15039 = NOVALUE; // 26985 15039
    object _15038 = NOVALUE; // 26983 15038
// skipping _15037  name type: 0
    object _15036 = NOVALUE; // 26980 15036
    object _15035 = NOVALUE; // 26978 15035
    object _15034 = NOVALUE; // 26977 15034
    object _15033 = NOVALUE; // 26976 15033
    object _15032 = NOVALUE; // 26972 15032
    object _15031 = NOVALUE; // 26971 15031
    object _15030 = NOVALUE; // 26970 15030
    object _15029 = NOVALUE; // 26966 15029
    object _15028 = NOVALUE; // 26965 15028
    object _15027 = NOVALUE; // 26964 15027
    object _15026 = NOVALUE; // 26960 15026
    object _15025 = NOVALUE; // 26959 15025
    object _15024 = NOVALUE; // 26958 15024
// skipping _15021  name type: 0
// skipping _15020  name type: 0
    object _15019 = NOVALUE; // 26948 15019
// skipping _15018  name type: 0
    object _15017 = NOVALUE; // 26946 15017
// skipping _15016  name type: 0
// skipping _15015  name type: 0
    object _15014 = NOVALUE; // 26941 15014
// skipping _15013  name type: 0
    object _15012 = NOVALUE; // 26939 15012
// skipping _15011  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Scanner pc: 1 op: STARTLINE (58)

    /** scanner.e:1482		integer is_int, class*/
    // SubProg Scanner pc: 3 op: STARTLINE (58)

    /** scanner.e:1483		sequence name*/
    // SubProg Scanner pc: 5 op: STARTLINE (58)

    /** scanner.e:1485		while TRUE do*/
    // SubProg Scanner pc: 7 op: NOP2 (110)
    // SubProg Scanner pc: 9 op: NOPWHILE (158)
L1: // addr: 10 pc: 9 sub: 26919 op: 158
    // SubProg Scanner pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 12 op: WHILE (47)
    if (_8TRUE_444 == 0)
    {
        goto L2; // [12] 3793
    }
    else{
    }
    // SubProg Scanner pc: 15 op: STARTLINE (58)

    /** scanner.e:1486			ch = getch()*/
    // SubProg Scanner pc: 17 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 22 op: STARTLINE (58)

    /** scanner.e:1487			while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 24 op: NOP2 (110)
    // SubProg Scanner pc: 26 op: NOPWHILE (158)
L3: // addr: 27 pc: 26 sub: 26919 op: 158
    // SubProg Scanner pc: 27 op: EQUALS (3)
    _15012 = (_ch_26921 == 32);
    // SubProg Scanner pc: 31 op: SC1_OR_IF (147)
    if (_15012 != 0) {
        goto L4; // [31] 44
    }
    // SubProg Scanner pc: 35 op: EQUALS (3)
    _15014 = (_ch_26921 == 9);
    // SubProg Scanner pc: 39 op: NOP1 (159)
    // SubProg Scanner pc: 40 op: WHILE (47)
    if (_15014 == 0)
    {
        DeRef(_15014);
        _15014 = NOVALUE;
        goto L5; // [40] 56
    }
    else{
        DeRef(_15014);
        _15014 = NOVALUE;
    }
    // SubProg Scanner pc: 43 op: NOP1 (159)
L4: // addr: 44 pc: 43 sub: 26919 op: 159
    // SubProg Scanner pc: 44 op: STARTLINE (58)

    /** scanner.e:1488				ch = getch()*/
    // SubProg Scanner pc: 46 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 49 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 51 op: STARTLINE (58)

    /** scanner.e:1489			end while*/
    // SubProg Scanner pc: 53 op: ENDWHILE (22)
    goto L3; // [53] 27
    // SubProg Scanner pc: 55 op: NOP1 (159)
L5: // addr: 56 pc: 55 sub: 26919 op: 159
    // SubProg Scanner pc: 56 op: STARTLINE (58)

    /** scanner.e:1491			class = char_class[ch]*/
    // SubProg Scanner pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 60 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _class_26933 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (!IS_ATOM_INT(_class_26933))
    _class_26933 = (object)DBL_PTR(_class_26933)->dbl;
    // SubProg Scanner pc: 64 op: STARTLINE (58)

    /** scanner.e:1494			if class = LETTER or ch = '_' then*/
    // SubProg Scanner pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 68 op: EQUALS (3)
    _15017 = (_class_26933 == -2);
    // SubProg Scanner pc: 72 op: SC1_OR_IF (147)
    if (_15017 != 0) {
        goto L6; // [72] 85
    }
    // SubProg Scanner pc: 76 op: EQUALS (3)
    _15019 = (_ch_26921 == 95);
    // SubProg Scanner pc: 80 op: NOP1 (159)
    // SubProg Scanner pc: 81 op: IF (20)
    if (_15019 == 0)
    {
        DeRef(_15019);
        _15019 = NOVALUE;
        goto L7; // [81] 1282
    }
    else{
        DeRef(_15019);
        _15019 = NOVALUE;
    }
    // SubProg Scanner pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 26919 op: 159
    // SubProg Scanner pc: 85 op: STARTLINE (58)

    /** scanner.e:1495				sp = bp*/
    // SubProg Scanner pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 89 op: ASSIGN (18)
    _sp_26923 = _49bp_48713;
    // SubProg Scanner pc: 92 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 94 op: STARTLINE (58)

    /** scanner.e:1496				pch = ch*/
    // SubProg Scanner pc: 96 op: ASSIGN_I (113)
    _pch_26925 = _ch_26921;
    // SubProg Scanner pc: 99 op: STARTLINE (58)

    /** scanner.e:1497				ch = getch()*/
    // SubProg Scanner pc: 101 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 104 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 106 op: STARTLINE (58)

    /** scanner.e:1498				if ch = '"' then*/
    // SubProg Scanner pc: 108 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 34)
    goto L8; // [108] 222
    // SubProg Scanner pc: 112 op: STARTLINE (58)

    /** scanner.e:1499					switch pch do*/
    // SubProg Scanner pc: 114 op: SWITCH_I (193)
    _0 = _pch_26925;
    switch ( _0 ){ 
        // SubProg Scanner pc: 119 op: STARTLINE (58)

        /** scanner.e:1500						case 'x' then*/
        // SubProg Scanner pc: 121 op: CASE (186)
        case 120:
        // SubProg Scanner pc: 123 op: STARTLINE (58)

        /** scanner.e:1501							return {STRING, NewStringSym(GetHexString(2))}*/
        // SubProg Scanner pc: 125 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 127 op: PROC (27)
        _15024 = _61GetHexString(2);
        // SubProg Scanner pc: 131 op: PROC (27)
        _15025 = _53NewStringSym(_15024);
        _15024 = NOVALUE;
        // SubProg Scanner pc: 135 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15025;
        _15026 = MAKE_SEQ(_1);
        _15025 = NOVALUE;
        // SubProg Scanner pc: 139 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
        DeRef(_yytext_26927);

// block var namespaces_26928
        DeRef(_namespaces_26928);

// block var d_26929
        DeRef(_d_26929);

// block var tok_26931
        DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
        DeRef(_name_26934);
        DeRef(_15017);
        _15017 = NOVALUE;
        DeRef(_15012);
        _15012 = NOVALUE;
        return _15026;
        // SubProg Scanner pc: 143 op: ELSE (23)
        goto L9; // [143] 221
        // SubProg Scanner pc: 145 op: STARTLINE (58)

        /** scanner.e:1503						case 'u' then*/
        // SubProg Scanner pc: 147 op: CASE (186)
        case 117:
        // SubProg Scanner pc: 149 op: STARTLINE (58)

        /** scanner.e:1504							return {STRING, NewStringSym(GetHexString(4))}*/
        // SubProg Scanner pc: 151 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 153 op: PROC (27)
        _15027 = _61GetHexString(4);
        // SubProg Scanner pc: 157 op: PROC (27)
        _15028 = _53NewStringSym(_15027);
        _15027 = NOVALUE;
        // SubProg Scanner pc: 161 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15028;
        _15029 = MAKE_SEQ(_1);
        _15028 = NOVALUE;
        // SubProg Scanner pc: 165 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
        DeRef(_yytext_26927);

// block var namespaces_26928
        DeRef(_namespaces_26928);

// block var d_26929
        DeRef(_d_26929);

// block var tok_26931
        DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
        DeRef(_name_26934);
        DeRef(_15026);
        _15026 = NOVALUE;
        DeRef(_15017);
        _15017 = NOVALUE;
        DeRef(_15012);
        _15012 = NOVALUE;
        return _15029;
        // SubProg Scanner pc: 169 op: ELSE (23)
        goto L9; // [169] 221
        // SubProg Scanner pc: 171 op: STARTLINE (58)

        /** scanner.e:1506						case 'U' then*/
        // SubProg Scanner pc: 173 op: CASE (186)
        case 85:
        // SubProg Scanner pc: 175 op: STARTLINE (58)

        /** scanner.e:1507							return {STRING, NewStringSym(GetHexString(8))}*/
        // SubProg Scanner pc: 177 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 179 op: PROC (27)
        _15030 = _61GetHexString(8);
        // SubProg Scanner pc: 183 op: PROC (27)
        _15031 = _53NewStringSym(_15030);
        _15030 = NOVALUE;
        // SubProg Scanner pc: 187 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15031;
        _15032 = MAKE_SEQ(_1);
        _15031 = NOVALUE;
        // SubProg Scanner pc: 191 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
        DeRef(_yytext_26927);

// block var namespaces_26928
        DeRef(_namespaces_26928);

// block var d_26929
        DeRef(_d_26929);

// block var tok_26931
        DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
        DeRef(_name_26934);
        DeRef(_15029);
        _15029 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        DeRef(_15017);
        _15017 = NOVALUE;
        DeRef(_15012);
        _15012 = NOVALUE;
        return _15032;
        // SubProg Scanner pc: 195 op: ELSE (23)
        goto L9; // [195] 221
        // SubProg Scanner pc: 197 op: STARTLINE (58)

        /** scanner.e:1509						case 'b' then*/
        // SubProg Scanner pc: 199 op: CASE (186)
        case 98:
        // SubProg Scanner pc: 201 op: STARTLINE (58)

        /** scanner.e:1510							return {STRING, NewStringSym(GetBitString())}*/
        // SubProg Scanner pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 205 op: PROC (27)
        _15033 = _61GetBitString();
        // SubProg Scanner pc: 208 op: PROC (27)
        _15034 = _53NewStringSym(_15033);
        _15033 = NOVALUE;
        // SubProg Scanner pc: 212 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15034;
        _15035 = MAKE_SEQ(_1);
        _15034 = NOVALUE;
        // SubProg Scanner pc: 216 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
        DeRef(_yytext_26927);

// block var namespaces_26928
        DeRef(_namespaces_26928);

// block var d_26929
        DeRef(_d_26929);

// block var tok_26931
        DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
        DeRef(_name_26934);
        DeRef(_15029);
        _15029 = NOVALUE;
        DeRef(_15032);
        _15032 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        DeRef(_15017);
        _15017 = NOVALUE;
        DeRef(_15012);
        _15012 = NOVALUE;
        return _15035;
        // SubProg Scanner pc: 220 op: NOPSWITCH (187)
    ;}L9: // addr: 221 pc: 220 sub: 26919 op: 187
    // SubProg Scanner pc: 221 op: NOP1 (159)
L8: // addr: 222 pc: 221 sub: 26919 op: 159
    // SubProg Scanner pc: 222 op: STARTLINE (58)

    /** scanner.e:1515				while id_char[ch] do*/
    // SubProg Scanner pc: 224 op: NOP2 (110)
    // SubProg Scanner pc: 226 op: NOPWHILE (158)
LA: // addr: 227 pc: 226 sub: 26919 op: 158
    // SubProg Scanner pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 229 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61id_char_25190);
    _15036 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 233 op: WHILE (47)
    if (_15036 <= 0) {
        if (_15036 == 0) {
            _15036 = NOVALUE;
            goto LB; // [233] 248
        }
        else {
            if (!IS_ATOM_INT(_15036) && DBL_PTR(_15036)->dbl == 0.0){
                _15036 = NOVALUE;
                goto LB; // [233] 248
            }
            _15036 = NOVALUE;
        }
    }
    _15036 = NOVALUE;
    // SubProg Scanner pc: 236 op: STARTLINE (58)

    /** scanner.e:1516					ch = getch()*/
    // SubProg Scanner pc: 238 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 241 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 243 op: STARTLINE (58)

    /** scanner.e:1517				end while*/
    // SubProg Scanner pc: 245 op: ENDWHILE (22)
    goto LA; // [245] 227
    // SubProg Scanner pc: 247 op: NOP1 (159)
LB: // addr: 248 pc: 247 sub: 26919 op: 159
    // SubProg Scanner pc: 248 op: STARTLINE (58)

    /** scanner.e:1518				yytext = ThisLine[sp-1..bp-2]*/
    // SubProg Scanner pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 252 op: MINUS (10)
    _15038 = _sp_26923 - 1;
    if ((object)((uintptr_t)_15038 +(uintptr_t) HIGH_BITS) >= 0){
        _15038 = NewDouble((eudouble)_15038);
    }
    // SubProg Scanner pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 258 op: MINUS (10)
    _15039 = _49bp_48713 - 2;
    // SubProg Scanner pc: 262 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_yytext_26927;
    RHS_Slice(_49ThisLine_48709, _15038, _15039);
    // SubProg Scanner pc: 267 op: STARTLINE (58)

    /** scanner.e:1519				ungetch()*/
    // SubProg Scanner pc: 269 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 271 op: STARTLINE (58)

    /** scanner.e:1521				ch = getch()*/
    // SubProg Scanner pc: 273 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 276 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 278 op: STARTLINE (58)

    /** scanner.e:1522				while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 280 op: NOP2 (110)
    // SubProg Scanner pc: 282 op: NOPWHILE (158)
LC: // addr: 283 pc: 282 sub: 26919 op: 158
    // SubProg Scanner pc: 283 op: EQUALS (3)
    _15042 = (_ch_26921 == 32);
    // SubProg Scanner pc: 287 op: SC1_OR_IF (147)
    if (_15042 != 0) {
        goto LD; // [287] 300
    }
    // SubProg Scanner pc: 291 op: EQUALS (3)
    _15044 = (_ch_26921 == 9);
    // SubProg Scanner pc: 295 op: NOP1 (159)
    // SubProg Scanner pc: 296 op: WHILE (47)
    if (_15044 == 0)
    {
        DeRef(_15044);
        _15044 = NOVALUE;
        goto LE; // [296] 312
    }
    else{
        DeRef(_15044);
        _15044 = NOVALUE;
    }
    // SubProg Scanner pc: 299 op: NOP1 (159)
LD: // addr: 300 pc: 299 sub: 26919 op: 159
    // SubProg Scanner pc: 300 op: STARTLINE (58)

    /** scanner.e:1523					ch = getch()*/
    // SubProg Scanner pc: 302 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 305 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 307 op: STARTLINE (58)

    /** scanner.e:1524				end while*/
    // SubProg Scanner pc: 309 op: ENDWHILE (22)
    goto LC; // [309] 283
    // SubProg Scanner pc: 311 op: NOP1 (159)
LE: // addr: 312 pc: 311 sub: 26919 op: 159
    // SubProg Scanner pc: 312 op: STARTLINE (58)

    /** scanner.e:1525				integer is_namespace*/
    // SubProg Scanner pc: 314 op: STARTLINE (58)

    /** scanner.e:1527				if might_be_namespace then*/
    // SubProg Scanner pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 318 op: IF (20)
    if (_61might_be_namespace_26725 == 0)
    {
        goto LF; // [318] 361
    }
    else{
    }
    // SubProg Scanner pc: 321 op: STARTLINE (58)

    /** scanner.e:1528					tok = keyfind(yytext, -1, , -1 )*/
    // SubProg Scanner pc: 323 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 325 op: PROC (27)
    RefDS(_yytext_26927);
    _31716 = _53hashfn(_yytext_26927);
    // SubProg Scanner pc: 329 op: PROC (27)
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _53keyfind(_yytext_26927, -1, _34current_file_no_15188, -1, _31716);
    DeRef(_0);
    _31716 = NOVALUE;
    // SubProg Scanner pc: 337 op: STARTLINE (58)

    /** scanner.e:1529					is_namespace = tok[T_ID] = NAMESPACE*/
    // SubProg Scanner pc: 339 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 341 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15047 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 347 op: EQUALS (3)
    if (IS_ATOM_INT(_15047)) {
        _is_namespace_26993 = (_15047 == 523);
    }
    else {
        _is_namespace_26993 = binary_op(EQUALS, _15047, 523);
    }
    _15047 = NOVALUE;
    // SubProg Scanner pc: 351 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_namespace_26993)) {
        _1 = (object)(DBL_PTR(_is_namespace_26993)->dbl);
        DeRefDS(_is_namespace_26993);
        _is_namespace_26993 = _1;
    }
    // SubProg Scanner pc: 353 op: STARTLINE (58)

    /** scanner.e:1530					might_be_namespace = 0*/
    // SubProg Scanner pc: 355 op: ASSIGN_I (113)
    _61might_be_namespace_26725 = 0;
    // SubProg Scanner pc: 358 op: ELSE (23)
    goto L10; // [358] 384
    // SubProg Scanner pc: 360 op: NOP1 (159)
LF: // addr: 361 pc: 360 sub: 26919 op: 159
    // SubProg Scanner pc: 361 op: STARTLINE (58)

    /** scanner.e:1532					is_namespace = ch = ':'*/
    // SubProg Scanner pc: 363 op: EQUALS (3)
    _is_namespace_26993 = (_ch_26921 == 58);
    // SubProg Scanner pc: 367 op: STARTLINE (58)

    /** scanner.e:1533					tok = keyfind(yytext, -1, , is_namespace )*/
    // SubProg Scanner pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 371 op: PROC (27)
    RefDS(_yytext_26927);
    _31715 = _53hashfn(_yytext_26927);
    // SubProg Scanner pc: 375 op: PROC (27)
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _53keyfind(_yytext_26927, -1, _34current_file_no_15188, _is_namespace_26993, _31715);
    DeRef(_0);
    _31715 = NOVALUE;
    // SubProg Scanner pc: 383 op: NOP1 (159)
L10: // addr: 384 pc: 383 sub: 26919 op: 159
    // SubProg Scanner pc: 384 op: STARTLINE (58)

    /** scanner.e:1537				if not is_namespace then*/
    // SubProg Scanner pc: 386 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 388 op: NOT_IFW (108)
    if (_is_namespace_26993 != 0)
    goto L11; // [388] 396
    // SubProg Scanner pc: 391 op: STARTLINE (58)

    /** scanner.e:1538					ungetch()*/
    // SubProg Scanner pc: 393 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 395 op: NOP1 (159)
L11: // addr: 396 pc: 395 sub: 26919 op: 159
    // SubProg Scanner pc: 396 op: STARTLINE (58)

    /** scanner.e:1541				if is_namespace then*/
    // SubProg Scanner pc: 398 op: IF (20)
    if (_is_namespace_26993 == 0)
    {
        goto L12; // [398] 1119
    }
    else{
    }
    // SubProg Scanner pc: 401 op: STARTLINE (58)

    /** scanner.e:1543					namespaces = yytext*/
    // SubProg Scanner pc: 403 op: ASSIGN (18)
    RefDS(_yytext_26927);
    DeRef(_namespaces_26928);
    _namespaces_26928 = _yytext_26927;
    // SubProg Scanner pc: 406 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 408 op: STARTLINE (58)

    /** scanner.e:1546					if tok[T_ID] = NAMESPACE then -- known namespace*/
    // SubProg Scanner pc: 410 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 412 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 414 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15052 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 420 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15052, 523)){
        _15052 = NOVALUE;
        goto L13; // [420] 974
    }
    _15052 = NOVALUE;
    // SubProg Scanner pc: 424 op: STARTLINE (58)

    /** scanner.e:1547						set_qualified_fwd( SymTab[tok[T_SYM]][S_OBJ] )*/
    // SubProg Scanner pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 430 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15054 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 434 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_15054)){
        _15055 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15054)->dbl));
    }
    else{
        _15055 = (object)*(((s1_ptr)_2)->base + _15054);
    }
    // SubProg Scanner pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 440 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15055);
    _15056 = (object)*(((s1_ptr)_2)->base + 1);
    _15055 = NOVALUE;
    // SubProg Scanner pc: 444 op: ASSIGN (18)
    Ref(_15056);
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27020);
    _fwd_inlined_set_qualified_fwd_at_441_27020 = _15056;
    _15056 = NOVALUE;
    // SubProg Scanner pc: 447 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fwd_inlined_set_qualified_fwd_at_441_27020)) {
        _1 = (object)(DBL_PTR(_fwd_inlined_set_qualified_fwd_at_441_27020)->dbl);
        DeRefDS(_fwd_inlined_set_qualified_fwd_at_441_27020);
        _fwd_inlined_set_qualified_fwd_at_441_27020 = _1;
    }
    // SubProg Scanner pc: 449 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 451 op: ASSIGN_I (113)
    _61qualified_fwd_25214 = _fwd_inlined_set_qualified_fwd_at_441_27020;
    // SubProg Scanner pc: 454 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 456 op: ELSE (23)
    goto L14; // [456] 459
    // SubProg Scanner pc: 458 op: NOP1 (159)
L14: // addr: 459 pc: 458 sub: 26919 op: 159
    // SubProg Scanner pc: 459 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-set_qualified_fwd from Scanner @ 441

// block var fwd_inlined_set_qualified_fwd_at_441_27020
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27020);
    _fwd_inlined_set_qualified_fwd_at_441_27020 = NOVALUE;
    // SubProg Scanner pc: 461 op: STARTLINE (58)

    /** scanner.e:1550						ch = getch()*/
    // SubProg Scanner pc: 463 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 466 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 468 op: STARTLINE (58)

    /** scanner.e:1551						while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 470 op: NOP2 (110)
    // SubProg Scanner pc: 472 op: NOPWHILE (158)
L15: // addr: 473 pc: 472 sub: 26919 op: 158
    // SubProg Scanner pc: 473 op: EQUALS (3)
    _15058 = (_ch_26921 == 32);
    // SubProg Scanner pc: 477 op: SC1_OR_IF (147)
    if (_15058 != 0) {
        goto L16; // [477] 490
    }
    // SubProg Scanner pc: 481 op: EQUALS (3)
    _15060 = (_ch_26921 == 9);
    // SubProg Scanner pc: 485 op: NOP1 (159)
    // SubProg Scanner pc: 486 op: WHILE (47)
    if (_15060 == 0)
    {
        DeRef(_15060);
        _15060 = NOVALUE;
        goto L17; // [486] 502
    }
    else{
        DeRef(_15060);
        _15060 = NOVALUE;
    }
    // SubProg Scanner pc: 489 op: NOP1 (159)
L16: // addr: 490 pc: 489 sub: 26919 op: 159
    // SubProg Scanner pc: 490 op: STARTLINE (58)

    /** scanner.e:1552							ch = getch()*/
    // SubProg Scanner pc: 492 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 495 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 497 op: STARTLINE (58)

    /** scanner.e:1553						end while*/
    // SubProg Scanner pc: 499 op: ENDWHILE (22)
    goto L15; // [499] 473
    // SubProg Scanner pc: 501 op: NOP1 (159)
L17: // addr: 502 pc: 501 sub: 26919 op: 159
    // SubProg Scanner pc: 502 op: STARTLINE (58)

    /** scanner.e:1554						yytext = ""*/
    // SubProg Scanner pc: 504 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_yytext_26927);
    _yytext_26927 = _5;
    // SubProg Scanner pc: 507 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 509 op: STARTLINE (58)

    /** scanner.e:1555						if char_class[ch] = LETTER or ch = '_' then*/
    // SubProg Scanner pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 513 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15062 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 517 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 519 op: EQUALS (3)
    if (IS_ATOM_INT(_15062)) {
        _15063 = (_15062 == -2);
    }
    else {
        _15063 = binary_op(EQUALS, _15062, -2);
    }
    _15062 = NOVALUE;
    // SubProg Scanner pc: 523 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_15063)) {
        if (_15063 != 0) {
            goto L18; // [523] 536
        }
    }
    else {
        if (DBL_PTR(_15063)->dbl != 0.0) {
            goto L18; // [523] 536
        }
    }
    // SubProg Scanner pc: 527 op: EQUALS (3)
    _15065 = (_ch_26921 == 95);
    // SubProg Scanner pc: 531 op: NOP1 (159)
    // SubProg Scanner pc: 532 op: IF (20)
    if (_15065 == 0)
    {
        DeRef(_15065);
        _15065 = NOVALUE;
        goto L19; // [532] 589
    }
    else{
        DeRef(_15065);
        _15065 = NOVALUE;
    }
    // SubProg Scanner pc: 535 op: NOP1 (159)
L18: // addr: 536 pc: 535 sub: 26919 op: 159
    // SubProg Scanner pc: 536 op: STARTLINE (58)

    /** scanner.e:1556							yytext &= ch*/
    // SubProg Scanner pc: 538 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 542 op: STARTLINE (58)

    /** scanner.e:1557							ch = getch()*/
    // SubProg Scanner pc: 544 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 547 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 549 op: STARTLINE (58)

    /** scanner.e:1558							while id_char[ch] = TRUE do*/
    // SubProg Scanner pc: 551 op: NOP2 (110)
    // SubProg Scanner pc: 553 op: NOPWHILE (158)
L1A: // addr: 554 pc: 553 sub: 26919 op: 158
    // SubProg Scanner pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 556 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61id_char_25190);
    _15068 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 560 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 562 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15068, _8TRUE_444)){
        _15068 = NOVALUE;
        goto L1B; // [562] 584
    }
    _15068 = NOVALUE;
    // SubProg Scanner pc: 566 op: STARTLINE (58)

    /** scanner.e:1559								yytext &= ch*/
    // SubProg Scanner pc: 568 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 572 op: STARTLINE (58)

    /** scanner.e:1560								ch = getch()*/
    // SubProg Scanner pc: 574 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 577 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 579 op: STARTLINE (58)

    /** scanner.e:1561							end while*/
    // SubProg Scanner pc: 581 op: ENDWHILE (22)
    goto L1A; // [581] 554
    // SubProg Scanner pc: 583 op: NOP1 (159)
L1B: // addr: 584 pc: 583 sub: 26919 op: 159
    // SubProg Scanner pc: 584 op: STARTLINE (58)

    /** scanner.e:1562							ungetch()*/
    // SubProg Scanner pc: 586 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 588 op: NOP1 (159)
L19: // addr: 589 pc: 588 sub: 26919 op: 159
    // SubProg Scanner pc: 589 op: STARTLINE (58)

    /** scanner.e:1565						if length(yytext) = 0 then*/
    // SubProg Scanner pc: 591 op: LENGTH (42)
    if (IS_SEQUENCE(_yytext_26927)){
            _15072 = SEQ_PTR(_yytext_26927)->length;
    }
    else {
        _15072 = 1;
    }
    // SubProg Scanner pc: 594 op: EQUALS_IFW_I (121)
    if (_15072 != 0)
    goto L1C; // [594] 606
    // SubProg Scanner pc: 598 op: STARTLINE (58)

    /** scanner.e:1566							CompileErr(32)*/
    // SubProg Scanner pc: 600 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(32, _21936, 0);
    // SubProg Scanner pc: 605 op: NOP1 (159)
L1C: // addr: 606 pc: 605 sub: 26919 op: 159
    // SubProg Scanner pc: 606 op: STARTLINE (58)

    /** scanner.e:1572					    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 608 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 610 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 612 op: EQUALS_IFW (104)
    if (_34Parser_mode_15293 != 1)
    goto L1D; // [612] 773
    // SubProg Scanner pc: 616 op: STARTLINE (58)

    /** scanner.e:1573			                Recorded = append(Recorded,yytext)*/
    // SubProg Scanner pc: 618 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 620 op: APPEND (35)
    RefDS(_yytext_26927);
    Append(&_34Recorded_15294, _34Recorded_15294, _yytext_26927);
    // SubProg Scanner pc: 624 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 626 op: STARTLINE (58)

    /** scanner.e:1574			                Ns_recorded = append(Ns_recorded,namespaces)*/
    // SubProg Scanner pc: 628 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 630 op: APPEND (35)
    RefDS(_namespaces_26928);
    Append(&_34Ns_recorded_15295, _34Ns_recorded_15295, _namespaces_26928);
    // SubProg Scanner pc: 634 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 636 op: STARTLINE (58)

    /** scanner.e:1575			                Ns_recorded_sym &= tok[T_SYM]*/
    // SubProg Scanner pc: 638 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 640 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 642 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15077 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 646 op: CONCAT (15)
    if (IS_SEQUENCE(_34Ns_recorded_sym_15297) && IS_ATOM(_15077)) {
        Ref(_15077);
        Append(&_34Ns_recorded_sym_15297, _34Ns_recorded_sym_15297, _15077);
    }
    else if (IS_ATOM(_34Ns_recorded_sym_15297) && IS_SEQUENCE(_15077)) {
    }
    else {
        Concat((object_ptr)&_34Ns_recorded_sym_15297, _34Ns_recorded_sym_15297, _15077);
    }
    _15077 = NOVALUE;
    // SubProg Scanner pc: 650 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 652 op: STARTLINE (58)

    /** scanner.e:1576			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 654 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 656 op: ASSIGN (18)
    _prev_Nne_26924 = _53No_new_entry_47454;
    // SubProg Scanner pc: 659 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 661 op: STARTLINE (58)

    /** scanner.e:1577							No_new_entry = 1*/
    // SubProg Scanner pc: 663 op: ASSIGN (18)
    _53No_new_entry_47454 = 1;
    // SubProg Scanner pc: 666 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 668 op: STARTLINE (58)

    /** scanner.e:1578							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    // SubProg Scanner pc: 670 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 672 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 674 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15079 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 678 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_15079)){
        _15080 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15079)->dbl));
    }
    else{
        _15080 = (object)*(((s1_ptr)_2)->base + _15079);
    }
    // SubProg Scanner pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 684 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15080);
    _15081 = (object)*(((s1_ptr)_2)->base + 1);
    _15080 = NOVALUE;
    // SubProg Scanner pc: 688 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 690 op: PROC (27)
    RefDS(_yytext_26927);
    _31714 = _53hashfn(_yytext_26927);
    // SubProg Scanner pc: 694 op: PROC (27)
    RefDS(_yytext_26927);
    Ref(_15081);
    _0 = _tok_26931;
    _tok_26931 = _53keyfind(_yytext_26927, _15081, _34current_file_no_15188, 0, _31714);
    DeRef(_0);
    _15081 = NOVALUE;
    _31714 = NOVALUE;
    // SubProg Scanner pc: 702 op: STARTLINE (58)

    /** scanner.e:1579							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 704 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 706 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15083 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 710 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 712 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15083, 509)){
        _15083 = NOVALUE;
        goto L1E; // [712] 729
    }
    _15083 = NOVALUE;
    // SubProg Scanner pc: 716 op: STARTLINE (58)

    /** scanner.e:1580								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 720 op: CONCAT (15)
    Append(&_34Recorded_sym_15296, _34Recorded_sym_15296, 0);
    // SubProg Scanner pc: 724 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 726 op: ELSE (23)
    goto L1F; // [726] 746
    // SubProg Scanner pc: 728 op: NOP1 (159)
L1E: // addr: 729 pc: 728 sub: 26919 op: 159
    // SubProg Scanner pc: 729 op: STARTLINE (58)

    /** scanner.e:1582								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 731 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 733 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 735 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15086 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 739 op: CONCAT (15)
    if (IS_SEQUENCE(_34Recorded_sym_15296) && IS_ATOM(_15086)) {
        Ref(_15086);
        Append(&_34Recorded_sym_15296, _34Recorded_sym_15296, _15086);
    }
    else if (IS_ATOM(_34Recorded_sym_15296) && IS_SEQUENCE(_15086)) {
    }
    else {
        Concat((object_ptr)&_34Recorded_sym_15296, _34Recorded_sym_15296, _15086);
    }
    _15086 = NOVALUE;
    // SubProg Scanner pc: 743 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 745 op: NOP1 (159)
L1F: // addr: 746 pc: 745 sub: 26919 op: 159
    // SubProg Scanner pc: 746 op: STARTLINE (58)

    /** scanner.e:1584			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 748 op: ASSIGN (18)
    _53No_new_entry_47454 = _prev_Nne_26924;
    // SubProg Scanner pc: 751 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 753 op: STARTLINE (58)

    /** scanner.e:1585			                return {RECORDED,length(Recorded)}*/
    // SubProg Scanner pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 757 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 759 op: LENGTH (42)
    if (IS_SEQUENCE(_34Recorded_15294)){
            _15088 = SEQ_PTR(_34Recorded_15294)->length;
    }
    else {
        _15088 = 1;
    }
    // SubProg Scanner pc: 762 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15088;
    _15089 = MAKE_SEQ(_1);
    _15088 = NOVALUE;
    // SubProg Scanner pc: 766 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var is_namespace_26993

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    return _15089;
    // SubProg Scanner pc: 770 op: ELSE (23)
    goto L20; // [770] 915
    // SubProg Scanner pc: 772 op: NOP1 (159)
L1D: // addr: 773 pc: 772 sub: 26919 op: 159
    // SubProg Scanner pc: 773 op: STARTLINE (58)

    /** scanner.e:1587							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    // SubProg Scanner pc: 775 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 777 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 779 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15090 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 783 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_15090)){
        _15091 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15090)->dbl));
    }
    else{
        _15091 = (object)*(((s1_ptr)_2)->base + _15090);
    }
    // SubProg Scanner pc: 787 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 789 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15091);
    _15092 = (object)*(((s1_ptr)_2)->base + 1);
    _15091 = NOVALUE;
    // SubProg Scanner pc: 793 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 795 op: PROC (27)
    RefDS(_yytext_26927);
    _31713 = _53hashfn(_yytext_26927);
    // SubProg Scanner pc: 799 op: PROC (27)
    RefDS(_yytext_26927);
    Ref(_15092);
    _0 = _tok_26931;
    _tok_26931 = _53keyfind(_yytext_26927, _15092, _34current_file_no_15188, 0, _31713);
    DeRef(_0);
    _15092 = NOVALUE;
    _31713 = NOVALUE;
    // SubProg Scanner pc: 807 op: STARTLINE (58)

    /** scanner.e:1589							if tok[T_ID] = VARIABLE then*/
    // SubProg Scanner pc: 809 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 811 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15094 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 817 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15094, -100)){
        _15094 = NOVALUE;
        goto L21; // [817] 834
    }
    _15094 = NOVALUE;
    // SubProg Scanner pc: 821 op: STARTLINE (58)

    /** scanner.e:1590								tok[T_ID] = QUALIFIED_VARIABLE*/
    // SubProg Scanner pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 825 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 827 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 512;
    DeRef(_1);
    // SubProg Scanner pc: 831 op: ELSE (23)
    goto L22; // [831] 914
    // SubProg Scanner pc: 833 op: NOP1 (159)
L21: // addr: 834 pc: 833 sub: 26919 op: 159
    // SubProg Scanner pc: 834 op: STARTLINE (58)

    /** scanner.e:1591							elsif tok[T_ID] = FUNC then*/
    // SubProg Scanner pc: 836 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 838 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15096 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 844 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15096, 501)){
        _15096 = NOVALUE;
        goto L23; // [844] 861
    }
    _15096 = NOVALUE;
    // SubProg Scanner pc: 848 op: STARTLINE (58)

    /** scanner.e:1592								tok[T_ID] = QUALIFIED_FUNC*/
    // SubProg Scanner pc: 850 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 852 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 854 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 520;
    DeRef(_1);
    // SubProg Scanner pc: 858 op: ELSE (23)
    goto L22; // [858] 914
    // SubProg Scanner pc: 860 op: NOP1 (159)
L23: // addr: 861 pc: 860 sub: 26919 op: 159
    // SubProg Scanner pc: 861 op: STARTLINE (58)

    /** scanner.e:1593							elsif tok[T_ID] = PROC then*/
    // SubProg Scanner pc: 863 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 865 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15098 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 869 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 871 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15098, 27)){
        _15098 = NOVALUE;
        goto L24; // [871] 888
    }
    _15098 = NOVALUE;
    // SubProg Scanner pc: 875 op: STARTLINE (58)

    /** scanner.e:1594								tok[T_ID] = QUALIFIED_PROC*/
    // SubProg Scanner pc: 877 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 879 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 881 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 521;
    DeRef(_1);
    // SubProg Scanner pc: 885 op: ELSE (23)
    goto L22; // [885] 914
    // SubProg Scanner pc: 887 op: NOP1 (159)
L24: // addr: 888 pc: 887 sub: 26919 op: 159
    // SubProg Scanner pc: 888 op: STARTLINE (58)

    /** scanner.e:1595							elsif tok[T_ID] = TYPE then*/
    // SubProg Scanner pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 892 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15100 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 896 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 898 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15100, 504)){
        _15100 = NOVALUE;
        goto L25; // [898] 913
    }
    _15100 = NOVALUE;
    // SubProg Scanner pc: 902 op: STARTLINE (58)

    /** scanner.e:1596								tok[T_ID] = QUALIFIED_TYPE*/
    // SubProg Scanner pc: 904 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 906 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 908 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 522;
    DeRef(_1);
    // SubProg Scanner pc: 912 op: NOP1 (159)
L25: // addr: 913 pc: 912 sub: 26919 op: 159
    // SubProg Scanner pc: 913 op: NOP1 (159)
L22: // addr: 914 pc: 913 sub: 26919 op: 159
    // SubProg Scanner pc: 914 op: NOP1 (159)
L20: // addr: 915 pc: 914 sub: 26919 op: 159
    // SubProg Scanner pc: 915 op: STARTLINE (58)

    /** scanner.e:1601						if atom( tok[T_SYM] ) and  SymTab[tok[T_SYM]][S_SCOPE] != SC_UNDEFINED then*/
    // SubProg Scanner pc: 917 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 919 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15102 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 923 op: IS_AN_ATOM (67)
    _15103 = IS_ATOM(_15102);
    _15102 = NOVALUE;
    // SubProg Scanner pc: 926 op: SC1_AND_IF (146)
    if (_15103 == 0) {
        goto L26; // [926] 1269
    }
    // SubProg Scanner pc: 930 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 932 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 934 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15105 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 938 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_15105)){
        _15106 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15105)->dbl));
    }
    else{
        _15106 = (object)*(((s1_ptr)_2)->base + _15105);
    }
    // SubProg Scanner pc: 942 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 944 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15106);
    _15107 = (object)*(((s1_ptr)_2)->base + 4);
    _15106 = NOVALUE;
    // SubProg Scanner pc: 948 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 950 op: NOTEQ (4)
    if (IS_ATOM_INT(_15107)) {
        _15108 = (_15107 != 9);
    }
    else {
        _15108 = binary_op(NOTEQ, _15107, 9);
    }
    _15107 = NOVALUE;
    // SubProg Scanner pc: 954 op: NOP1 (159)
    // SubProg Scanner pc: 955 op: IF (20)
    if (_15108 == 0) {
        DeRef(_15108);
        _15108 = NOVALUE;
        goto L26; // [955] 1269
    }
    else {
        if (!IS_ATOM_INT(_15108) && DBL_PTR(_15108)->dbl == 0.0){
            DeRef(_15108);
            _15108 = NOVALUE;
            goto L26; // [955] 1269
        }
        DeRef(_15108);
        _15108 = NOVALUE;
    }
    DeRef(_15108);
    _15108 = NOVALUE;
    // SubProg Scanner pc: 958 op: STARTLINE (58)

    /** scanner.e:1602							set_qualified_fwd( -1 )*/
    // SubProg Scanner pc: 960 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 962 op: ASSIGN_I (113)
    _61qualified_fwd_25214 = -1;
    // SubProg Scanner pc: 965 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 967 op: ELSE (23)
    goto L26; // [967] 1269
    // SubProg Scanner pc: 969 op: NOP1 (159)
    // SubProg Scanner pc: 970 op: NOP1 (159)
    // SubProg Scanner pc: 971 op: ELSE (23)
    goto L26; // [971] 1269
    // SubProg Scanner pc: 973 op: NOP1 (159)
L13: // addr: 974 pc: 973 sub: 26919 op: 159
    // SubProg Scanner pc: 974 op: STARTLINE (58)

    /** scanner.e:1606						ungetch()*/
    // SubProg Scanner pc: 976 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 978 op: STARTLINE (58)

    /** scanner.e:1607					    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 980 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 982 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 984 op: EQUALS_IFW (104)
    if (_34Parser_mode_15293 != 1)
    goto L26; // [984] 1269
    // SubProg Scanner pc: 988 op: STARTLINE (58)

    /** scanner.e:1608			                Ns_recorded &= 0*/
    // SubProg Scanner pc: 990 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 992 op: CONCAT (15)
    Append(&_34Ns_recorded_15295, _34Ns_recorded_15295, 0);
    // SubProg Scanner pc: 996 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 998 op: STARTLINE (58)

    /** scanner.e:1609			                Ns_recorded_sym &= 0*/
    // SubProg Scanner pc: 1000 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1002 op: CONCAT (15)
    Append(&_34Ns_recorded_sym_15297, _34Ns_recorded_sym_15297, 0);
    // SubProg Scanner pc: 1006 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1008 op: STARTLINE (58)

    /** scanner.e:1610			                Recorded = append(Recorded,yytext)*/
    // SubProg Scanner pc: 1010 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1012 op: APPEND (35)
    RefDS(_yytext_26927);
    Append(&_34Recorded_15294, _34Recorded_15294, _yytext_26927);
    // SubProg Scanner pc: 1016 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1018 op: STARTLINE (58)

    /** scanner.e:1611			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 1020 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1022 op: ASSIGN (18)
    _prev_Nne_26924 = _53No_new_entry_47454;
    // SubProg Scanner pc: 1025 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1027 op: STARTLINE (58)

    /** scanner.e:1612							No_new_entry = 1*/
    // SubProg Scanner pc: 1029 op: ASSIGN (18)
    _53No_new_entry_47454 = 1;
    // SubProg Scanner pc: 1032 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1034 op: STARTLINE (58)

    /** scanner.e:1613							tok = keyfind(yytext, -1)*/
    // SubProg Scanner pc: 1036 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1038 op: PROC (27)
    RefDS(_yytext_26927);
    _31712 = _53hashfn(_yytext_26927);
    // SubProg Scanner pc: 1042 op: PROC (27)
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _53keyfind(_yytext_26927, -1, _34current_file_no_15188, 0, _31712);
    DeRef(_0);
    _31712 = NOVALUE;
    // SubProg Scanner pc: 1050 op: STARTLINE (58)

    /** scanner.e:1614							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 1052 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1054 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15114 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1058 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1060 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15114, 509)){
        _15114 = NOVALUE;
        goto L27; // [1060] 1077
    }
    _15114 = NOVALUE;
    // SubProg Scanner pc: 1064 op: STARTLINE (58)

    /** scanner.e:1615								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 1066 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1068 op: CONCAT (15)
    Append(&_34Recorded_sym_15296, _34Recorded_sym_15296, 0);
    // SubProg Scanner pc: 1072 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1074 op: ELSE (23)
    goto L28; // [1074] 1094
    // SubProg Scanner pc: 1076 op: NOP1 (159)
L27: // addr: 1077 pc: 1076 sub: 26919 op: 159
    // SubProg Scanner pc: 1077 op: STARTLINE (58)

    /** scanner.e:1617								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 1079 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1081 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1083 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15117 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 1087 op: CONCAT (15)
    if (IS_SEQUENCE(_34Recorded_sym_15296) && IS_ATOM(_15117)) {
        Ref(_15117);
        Append(&_34Recorded_sym_15296, _34Recorded_sym_15296, _15117);
    }
    else if (IS_ATOM(_34Recorded_sym_15296) && IS_SEQUENCE(_15117)) {
    }
    else {
        Concat((object_ptr)&_34Recorded_sym_15296, _34Recorded_sym_15296, _15117);
    }
    _15117 = NOVALUE;
    // SubProg Scanner pc: 1091 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1093 op: NOP1 (159)
L28: // addr: 1094 pc: 1093 sub: 26919 op: 159
    // SubProg Scanner pc: 1094 op: STARTLINE (58)

    /** scanner.e:1619			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 1096 op: ASSIGN (18)
    _53No_new_entry_47454 = _prev_Nne_26924;
    // SubProg Scanner pc: 1099 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1101 op: STARTLINE (58)

    /** scanner.e:1620			                tok = {RECORDED,length(Recorded)}*/
    // SubProg Scanner pc: 1103 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1105 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1107 op: LENGTH (42)
    if (IS_SEQUENCE(_34Recorded_15294)){
            _15119 = SEQ_PTR(_34Recorded_15294)->length;
    }
    else {
        _15119 = 1;
    }
    // SubProg Scanner pc: 1110 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_26931);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15119;
    _tok_26931 = MAKE_SEQ(_1);
    _15119 = NOVALUE;
    // SubProg Scanner pc: 1114 op: NOP1 (159)
    // SubProg Scanner pc: 1115 op: NOP1 (159)
    // SubProg Scanner pc: 1116 op: ELSE (23)
    goto L26; // [1116] 1269
    // SubProg Scanner pc: 1118 op: NOP1 (159)
L12: // addr: 1119 pc: 1118 sub: 26919 op: 159
    // SubProg Scanner pc: 1119 op: STARTLINE (58)

    /** scanner.e:1624					set_qualified_fwd( -1 )*/
    // SubProg Scanner pc: 1121 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 1123 op: ASSIGN_I (113)
    _61qualified_fwd_25214 = -1;
    // SubProg Scanner pc: 1126 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 1128 op: ELSE (23)
    goto L29; // [1128] 1131
    // SubProg Scanner pc: 1130 op: NOP1 (159)
L29: // addr: 1131 pc: 1130 sub: 26919 op: 159
    // SubProg Scanner pc: 1131 op: STARTLINE (58)

    /** scanner.e:1625				    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 1133 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1135 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1137 op: EQUALS_IFW (104)
    if (_34Parser_mode_15293 != 1)
    goto L2A; // [1137] 1268
    // SubProg Scanner pc: 1141 op: STARTLINE (58)

    /** scanner.e:1626		                Ns_recorded_sym &= 0*/
    // SubProg Scanner pc: 1143 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1145 op: CONCAT (15)
    Append(&_34Ns_recorded_sym_15297, _34Ns_recorded_sym_15297, 0);
    // SubProg Scanner pc: 1149 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1151 op: STARTLINE (58)

    /** scanner.e:1627							Recorded = append(Recorded, yytext)*/
    // SubProg Scanner pc: 1153 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1155 op: APPEND (35)
    RefDS(_yytext_26927);
    Append(&_34Recorded_15294, _34Recorded_15294, _yytext_26927);
    // SubProg Scanner pc: 1159 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1161 op: STARTLINE (58)

    /** scanner.e:1628			                Ns_recorded &= 0*/
    // SubProg Scanner pc: 1163 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1165 op: CONCAT (15)
    Append(&_34Ns_recorded_15295, _34Ns_recorded_15295, 0);
    // SubProg Scanner pc: 1169 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1171 op: STARTLINE (58)

    /** scanner.e:1629			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 1173 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1175 op: ASSIGN (18)
    _prev_Nne_26924 = _53No_new_entry_47454;
    // SubProg Scanner pc: 1178 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1180 op: STARTLINE (58)

    /** scanner.e:1630							No_new_entry = 1*/
    // SubProg Scanner pc: 1182 op: ASSIGN (18)
    _53No_new_entry_47454 = 1;
    // SubProg Scanner pc: 1185 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1187 op: STARTLINE (58)

    /** scanner.e:1631							tok = keyfind(yytext, -1)*/
    // SubProg Scanner pc: 1189 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1191 op: PROC (27)
    RefDS(_yytext_26927);
    _31711 = _53hashfn(_yytext_26927);
    // SubProg Scanner pc: 1195 op: PROC (27)
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _53keyfind(_yytext_26927, -1, _34current_file_no_15188, 0, _31711);
    DeRef(_0);
    _31711 = NOVALUE;
    // SubProg Scanner pc: 1203 op: STARTLINE (58)

    /** scanner.e:1632							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 1205 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1207 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15126 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1211 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1213 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15126, 509)){
        _15126 = NOVALUE;
        goto L2B; // [1213] 1230
    }
    _15126 = NOVALUE;
    // SubProg Scanner pc: 1217 op: STARTLINE (58)

    /** scanner.e:1633								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 1219 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1221 op: CONCAT (15)
    Append(&_34Recorded_sym_15296, _34Recorded_sym_15296, 0);
    // SubProg Scanner pc: 1225 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1227 op: ELSE (23)
    goto L2C; // [1227] 1247
    // SubProg Scanner pc: 1229 op: NOP1 (159)
L2B: // addr: 1230 pc: 1229 sub: 26919 op: 159
    // SubProg Scanner pc: 1230 op: STARTLINE (58)

    /** scanner.e:1635								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 1232 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1234 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1236 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26931);
    _15129 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 1240 op: CONCAT (15)
    if (IS_SEQUENCE(_34Recorded_sym_15296) && IS_ATOM(_15129)) {
        Ref(_15129);
        Append(&_34Recorded_sym_15296, _34Recorded_sym_15296, _15129);
    }
    else if (IS_ATOM(_34Recorded_sym_15296) && IS_SEQUENCE(_15129)) {
    }
    else {
        Concat((object_ptr)&_34Recorded_sym_15296, _34Recorded_sym_15296, _15129);
    }
    _15129 = NOVALUE;
    // SubProg Scanner pc: 1244 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1246 op: NOP1 (159)
L2C: // addr: 1247 pc: 1246 sub: 26919 op: 159
    // SubProg Scanner pc: 1247 op: STARTLINE (58)

    /** scanner.e:1637			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 1249 op: ASSIGN (18)
    _53No_new_entry_47454 = _prev_Nne_26924;
    // SubProg Scanner pc: 1252 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1254 op: STARTLINE (58)

    /** scanner.e:1638		                tok = {RECORDED, length(Recorded)}*/
    // SubProg Scanner pc: 1256 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1258 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1260 op: LENGTH (42)
    if (IS_SEQUENCE(_34Recorded_15294)){
            _15131 = SEQ_PTR(_34Recorded_15294)->length;
    }
    else {
        _15131 = 1;
    }
    // SubProg Scanner pc: 1263 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_26931);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15131;
    _tok_26931 = MAKE_SEQ(_1);
    _15131 = NOVALUE;
    // SubProg Scanner pc: 1267 op: NOP1 (159)
L2A: // addr: 1268 pc: 1267 sub: 26919 op: 159
    // SubProg Scanner pc: 1268 op: NOP1 (159)
L26: // addr: 1269 pc: 1268 sub: 26919 op: 159
    // SubProg Scanner pc: 1269 op: STARTLINE (58)

    /** scanner.e:1642				return tok*/
    // SubProg Scanner pc: 1271 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 1273 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var is_namespace_26993

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    _15090 = NOVALUE;
    return _tok_26931;
    // SubProg Scanner pc: 1277 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var is_namespace_26993
    // SubProg Scanner pc: 1279 op: ELSE (23)
    goto L1; // [1279] 10
    // SubProg Scanner pc: 1281 op: NOP1 (159)
L7: // addr: 1282 pc: 1281 sub: 26919 op: 159
    // SubProg Scanner pc: 1282 op: STARTLINE (58)

    /** scanner.e:1644			elsif class < ILLEGAL_CHAR then*/
    // SubProg Scanner pc: 1284 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1286 op: LESS_IFW (102)
    if (_class_26933 >= -20)
    goto L2D; // [1286] 1303
    // SubProg Scanner pc: 1290 op: STARTLINE (58)

    /** scanner.e:1645				return {class, 0}  -- brackets, punctuation, eof, illegal char etc.*/
    // SubProg Scanner pc: 1292 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26933;
    ((intptr_t *)_2)[2] = 0;
    _15134 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1296 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    _15090 = NOVALUE;
    return _15134;
    // SubProg Scanner pc: 1300 op: ELSE (23)
    goto L1; // [1300] 10
    // SubProg Scanner pc: 1302 op: NOP1 (159)
L2D: // addr: 1303 pc: 1302 sub: 26919 op: 159
    // SubProg Scanner pc: 1303 op: STARTLINE (58)

    /** scanner.e:1647			elsif class = ILLEGAL_CHAR then*/
    // SubProg Scanner pc: 1305 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1307 op: EQUALS_IFW (104)
    if (_class_26933 != -20)
    goto L2E; // [1307] 1321
    // SubProg Scanner pc: 1311 op: STARTLINE (58)

    /** scanner.e:1648				CompileErr(101)*/
    // SubProg Scanner pc: 1313 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(101, _21936, 0);
    // SubProg Scanner pc: 1318 op: ELSE (23)
    goto L1; // [1318] 10
    // SubProg Scanner pc: 1320 op: NOP1 (159)
L2E: // addr: 1321 pc: 1320 sub: 26919 op: 159
    // SubProg Scanner pc: 1321 op: STARTLINE (58)

    /** scanner.e:1650			elsif class = NEWLINE then*/
    // SubProg Scanner pc: 1323 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1325 op: EQUALS_IFW (104)
    if (_class_26933 != -6)
    goto L2F; // [1325] 1351
    // SubProg Scanner pc: 1329 op: STARTLINE (58)

    /** scanner.e:1651				if start_include then*/
    // SubProg Scanner pc: 1331 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1333 op: IF (20)
    if (_61start_include_25182 == 0)
    {
        goto L30; // [1333] 1343
    }
    else{
    }
    // SubProg Scanner pc: 1336 op: STARTLINE (58)

    /** scanner.e:1652					IncludePush()*/
    // SubProg Scanner pc: 1338 op: PROC (27)
    _61IncludePush();
    // SubProg Scanner pc: 1340 op: ELSE (23)
    goto L1; // [1340] 10
    // SubProg Scanner pc: 1342 op: NOP1 (159)
L30: // addr: 1343 pc: 1342 sub: 26919 op: 159
    // SubProg Scanner pc: 1343 op: STARTLINE (58)

    /** scanner.e:1654					read_line()*/
    // SubProg Scanner pc: 1345 op: PROC (27)
    _61read_line();
    // SubProg Scanner pc: 1347 op: NOP1 (159)
    // SubProg Scanner pc: 1348 op: ELSE (23)
    goto L1; // [1348] 10
    // SubProg Scanner pc: 1350 op: NOP1 (159)
L2F: // addr: 1351 pc: 1350 sub: 26919 op: 159
    // SubProg Scanner pc: 1351 op: STARTLINE (58)

    /** scanner.e:1658			elsif class = EQUALS then*/
    // SubProg Scanner pc: 1353 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1355 op: EQUALS_IFW (104)
    if (_class_26933 != 3)
    goto L31; // [1355] 1372
    // SubProg Scanner pc: 1359 op: STARTLINE (58)

    /** scanner.e:1659				return {class, 0}*/
    // SubProg Scanner pc: 1361 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26933;
    ((intptr_t *)_2)[2] = 0;
    _15138 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1365 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    _15090 = NOVALUE;
    return _15138;
    // SubProg Scanner pc: 1369 op: ELSE (23)
    goto L1; // [1369] 10
    // SubProg Scanner pc: 1371 op: NOP1 (159)
L31: // addr: 1372 pc: 1371 sub: 26919 op: 159
    // SubProg Scanner pc: 1372 op: STARTLINE (58)

    /** scanner.e:1661			elsif class = DOT or class = DIGIT then*/
    // SubProg Scanner pc: 1374 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1376 op: EQUALS (3)
    _15139 = (_class_26933 == -3);
    // SubProg Scanner pc: 1380 op: SC1_OR_IF (147)
    if (_15139 != 0) {
        goto L32; // [1380] 1395
    }
    // SubProg Scanner pc: 1384 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1386 op: EQUALS (3)
    _15141 = (_class_26933 == -7);
    // SubProg Scanner pc: 1390 op: NOP1 (159)
    // SubProg Scanner pc: 1391 op: IF (20)
    if (_15141 == 0)
    {
        DeRef(_15141);
        _15141 = NOVALUE;
        goto L33; // [1391] 2177
    }
    else{
        DeRef(_15141);
        _15141 = NOVALUE;
    }
    // SubProg Scanner pc: 1394 op: NOP1 (159)
L32: // addr: 1395 pc: 1394 sub: 26919 op: 159
    // SubProg Scanner pc: 1395 op: STARTLINE (58)

    /** scanner.e:1662				integer basetype*/
    // SubProg Scanner pc: 1397 op: STARTLINE (58)

    /** scanner.e:1663				if class = DOT then*/
    // SubProg Scanner pc: 1399 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1401 op: EQUALS_IFW (104)
    if (_class_26933 != -3)
    goto L34; // [1401] 1435
    // SubProg Scanner pc: 1405 op: STARTLINE (58)

    /** scanner.e:1664					if getch() = '.' then*/
    // SubProg Scanner pc: 1407 op: PROC (27)
    _15143 = _61getch();
    // SubProg Scanner pc: 1410 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15143, 46)){
        DeRef(_15143);
        _15143 = NOVALUE;
        goto L35; // [1410] 1429
    }
    DeRef(_15143);
    _15143 = NOVALUE;
    // SubProg Scanner pc: 1414 op: STARTLINE (58)

    /** scanner.e:1665						return {SLICE, 0}*/
    // SubProg Scanner pc: 1416 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1418 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 513;
    ((intptr_t *)_2)[2] = 0;
    _15145 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1422 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27227

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    _15090 = NOVALUE;
    return _15145;
    // SubProg Scanner pc: 1426 op: ELSE (23)
    goto L36; // [1426] 1434
    // SubProg Scanner pc: 1428 op: NOP1 (159)
L35: // addr: 1429 pc: 1428 sub: 26919 op: 159
    // SubProg Scanner pc: 1429 op: STARTLINE (58)

    /** scanner.e:1667						ungetch()*/
    // SubProg Scanner pc: 1431 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 1433 op: NOP1 (159)
L36: // addr: 1434 pc: 1433 sub: 26919 op: 159
    // SubProg Scanner pc: 1434 op: NOP1 (159)
L34: // addr: 1435 pc: 1434 sub: 26919 op: 159
    // SubProg Scanner pc: 1435 op: STARTLINE (58)

    /** scanner.e:1671				yytext = {ch}*/
    // SubProg Scanner pc: 1437 op: RIGHT_BRACE_N (31)
    _0 = _yytext_26927;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26921;
    _yytext_26927 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg Scanner pc: 1441 op: STARTLINE (58)

    /** scanner.e:1672				is_int = (ch != '.')*/
    // SubProg Scanner pc: 1443 op: NOTEQ (4)
    _is_int_26932 = (_ch_26921 != 46);
    // SubProg Scanner pc: 1447 op: STARTLINE (58)

    /** scanner.e:1673				basetype = -1 -- default is decimal*/
    // SubProg Scanner pc: 1449 op: ASSIGN_I (113)
    _basetype_27227 = -1;
    // SubProg Scanner pc: 1452 op: STARTLINE (58)

    /** scanner.e:1674				while 1 with entry do*/
    // SubProg Scanner pc: 1454 op: ELSE (23)
    goto L37; // [1454] 1645
    // SubProg Scanner pc: 1456 op: NOPWHILE (158)
L38: // addr: 1457 pc: 1456 sub: 26919 op: 158
    // SubProg Scanner pc: 1457 op: STARTLINE (58)

    /** scanner.e:1675					if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1459 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1461 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15148 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 1465 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1467 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15148, -7)){
        _15148 = NOVALUE;
        goto L39; // [1467] 1480
    }
    _15148 = NOVALUE;
    // SubProg Scanner pc: 1471 op: STARTLINE (58)

    /** scanner.e:1676						yytext &= ch*/
    // SubProg Scanner pc: 1473 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 1477 op: ELSE (23)
    goto L3A; // [1477] 1642
    // SubProg Scanner pc: 1479 op: NOP1 (159)
L39: // addr: 1480 pc: 1479 sub: 26919 op: 159
    // SubProg Scanner pc: 1480 op: STARTLINE (58)

    /** scanner.e:1678					elsif equal(yytext, "0") then*/
    // SubProg Scanner pc: 1482 op: EQUAL (153)
    if (_yytext_26927 == _11942)
    _15151 = 1;
    else if (IS_ATOM_INT(_yytext_26927) && IS_ATOM_INT(_11942))
    _15151 = 0;
    else
    _15151 = (compare(_yytext_26927, _11942) == 0);
    // SubProg Scanner pc: 1486 op: IF (20)
    if (_15151 == 0)
    {
        _15151 = NOVALUE;
        goto L3B; // [1486] 1581
    }
    else{
        _15151 = NOVALUE;
    }
    // SubProg Scanner pc: 1489 op: STARTLINE (58)

    /** scanner.e:1679						basetype = find(ch, nbasecode)*/
    // SubProg Scanner pc: 1491 op: FIND_FROM (176)
    _basetype_27227 = find_from(_ch_26921, _61nbasecode_26729, 1);
    // SubProg Scanner pc: 1496 op: STARTLINE (58)

    /** scanner.e:1680						if basetype > length(nbase) then*/
    // SubProg Scanner pc: 1498 op: LENGTH (42)
    if (IS_SEQUENCE(_61nbase_26728)){
            _15153 = SEQ_PTR(_61nbase_26728)->length;
    }
    else {
        _15153 = 1;
    }
    // SubProg Scanner pc: 1501 op: GREATER_IFW_I (124)
    if (_basetype_27227 <= _15153)
    goto L3C; // [1501] 1515
    // SubProg Scanner pc: 1505 op: STARTLINE (58)

    /** scanner.e:1681							basetype -= length(nbase)*/
    // SubProg Scanner pc: 1507 op: LENGTH (42)
    if (IS_SEQUENCE(_61nbase_26728)){
            _15155 = SEQ_PTR(_61nbase_26728)->length;
    }
    else {
        _15155 = 1;
    }
    // SubProg Scanner pc: 1510 op: MINUS_I (116)
    _basetype_27227 = _basetype_27227 - _15155;
    _15155 = NOVALUE;
    // SubProg Scanner pc: 1514 op: NOP1 (159)
L3C: // addr: 1515 pc: 1514 sub: 26919 op: 159
    // SubProg Scanner pc: 1515 op: STARTLINE (58)

    /** scanner.e:1684						if basetype = 0 then*/
    // SubProg Scanner pc: 1517 op: EQUALS_IFW_I (121)
    if (_basetype_27227 != 0)
    goto L3D; // [1517] 1572
    // SubProg Scanner pc: 1521 op: STARTLINE (58)

    /** scanner.e:1685							if char_class[ch] = LETTER then*/
    // SubProg Scanner pc: 1523 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1525 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15158 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 1529 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1531 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15158, -2)){
        _15158 = NOVALUE;
        goto L3E; // [1531] 1562
    }
    _15158 = NOVALUE;
    // SubProg Scanner pc: 1535 op: STARTLINE (58)

    /** scanner.e:1686								if ch != 'e' and ch != 'E' then*/
    // SubProg Scanner pc: 1537 op: NOTEQ (4)
    _15160 = (_ch_26921 != 101);
    // SubProg Scanner pc: 1541 op: SC1_AND_IF (146)
    if (_15160 == 0) {
        goto L3F; // [1541] 1561
    }
    // SubProg Scanner pc: 1545 op: NOTEQ (4)
    _15162 = (_ch_26921 != 69);
    // SubProg Scanner pc: 1549 op: NOP1 (159)
    // SubProg Scanner pc: 1550 op: IF (20)
    if (_15162 == 0)
    {
        DeRef(_15162);
        _15162 = NOVALUE;
        goto L3F; // [1550] 1561
    }
    else{
        DeRef(_15162);
        _15162 = NOVALUE;
    }
    // SubProg Scanner pc: 1553 op: STARTLINE (58)

    /** scanner.e:1687									CompileErr(105, ch)*/
    // SubProg Scanner pc: 1555 op: PROC (27)
    _49CompileErr(105, _ch_26921, 0);
    // SubProg Scanner pc: 1560 op: NOP1 (159)
L3F: // addr: 1561 pc: 1560 sub: 26919 op: 159
    // SubProg Scanner pc: 1561 op: NOP1 (159)
L3E: // addr: 1562 pc: 1561 sub: 26919 op: 159
    // SubProg Scanner pc: 1562 op: STARTLINE (58)

    /** scanner.e:1691							basetype = -1 -- decimal*/
    // SubProg Scanner pc: 1564 op: ASSIGN_I (113)
    _basetype_27227 = -1;
    // SubProg Scanner pc: 1567 op: STARTLINE (58)

    /** scanner.e:1692							exit*/
    // SubProg Scanner pc: 1569 op: EXIT (61)
    goto L40; // [1569] 1657
    // SubProg Scanner pc: 1571 op: NOP1 (159)
L3D: // addr: 1572 pc: 1571 sub: 26919 op: 159
    // SubProg Scanner pc: 1572 op: STARTLINE (58)

    /** scanner.e:1694						yytext &= '0'*/
    // SubProg Scanner pc: 1574 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, 48);
    // SubProg Scanner pc: 1578 op: ELSE (23)
    goto L3A; // [1578] 1642
    // SubProg Scanner pc: 1580 op: NOP1 (159)
L3B: // addr: 1581 pc: 1580 sub: 26919 op: 159
    // SubProg Scanner pc: 1581 op: STARTLINE (58)

    /** scanner.e:1696					elsif basetype = 4 then -- hexadecimal*/
    // SubProg Scanner pc: 1583 op: EQUALS_IFW_I (121)
    if (_basetype_27227 != 4)
    goto L40; // [1583] 1657
    // SubProg Scanner pc: 1587 op: STARTLINE (58)

    /** scanner.e:1697						integer hdigit*/
    // SubProg Scanner pc: 1589 op: STARTLINE (58)

    /** scanner.e:1698						hdigit = find(ch, "ABCDEFabcdef")*/
    // SubProg Scanner pc: 1591 op: FIND_FROM (176)
    _hdigit_27267 = find_from(_ch_26921, _15165, 1);
    // SubProg Scanner pc: 1596 op: STARTLINE (58)

    /** scanner.e:1699						if hdigit = 0 then*/
    // SubProg Scanner pc: 1598 op: EQUALS_IFW_I (121)
    if (_hdigit_27267 != 0)
    goto L41; // [1598] 1609
    // SubProg Scanner pc: 1602 op: STARTLINE (58)

    /** scanner.e:1700							exit*/
    // SubProg Scanner pc: 1604 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hdigit_27267
    // SubProg Scanner pc: 1606 op: EXIT (61)
    goto L40; // [1606] 1657
    // SubProg Scanner pc: 1608 op: NOP1 (159)
L41: // addr: 1609 pc: 1608 sub: 26919 op: 159
    // SubProg Scanner pc: 1609 op: STARTLINE (58)

    /** scanner.e:1702						if hdigit > 6 then*/
    // SubProg Scanner pc: 1611 op: GREATER_IFW_I (124)
    if (_hdigit_27267 <= 6)
    goto L42; // [1611] 1622
    // SubProg Scanner pc: 1615 op: STARTLINE (58)

    /** scanner.e:1703							hdigit -= 6*/
    // SubProg Scanner pc: 1617 op: MINUS_I (116)
    _hdigit_27267 = _hdigit_27267 - 6;
    // SubProg Scanner pc: 1621 op: NOP1 (159)
L42: // addr: 1622 pc: 1621 sub: 26919 op: 159
    // SubProg Scanner pc: 1622 op: STARTLINE (58)

    /** scanner.e:1705						yytext &= hexasc[hdigit]*/
    // SubProg Scanner pc: 1624 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61hexasc_26731);
    _15170 = (object)*(((s1_ptr)_2)->base + _hdigit_27267);
    // SubProg Scanner pc: 1628 op: CONCAT (15)
    if (IS_SEQUENCE(_yytext_26927) && IS_ATOM(_15170)) {
        Ref(_15170);
        Append(&_yytext_26927, _yytext_26927, _15170);
    }
    else if (IS_ATOM(_yytext_26927) && IS_SEQUENCE(_15170)) {
    }
    else {
        Concat((object_ptr)&_yytext_26927, _yytext_26927, _15170);
    }
    _15170 = NOVALUE;
    // SubProg Scanner pc: 1632 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hdigit_27267
    // SubProg Scanner pc: 1634 op: ELSE (23)
    goto L3A; // [1634] 1642
    // SubProg Scanner pc: 1636 op: NOP1 (159)
    // SubProg Scanner pc: 1637 op: STARTLINE (58)

    /** scanner.e:1708						exit*/
    // SubProg Scanner pc: 1639 op: EXIT (61)
    goto L40; // [1639] 1657
    // SubProg Scanner pc: 1641 op: NOP1 (159)
L3A: // addr: 1642 pc: 1641 sub: 26919 op: 159
    // SubProg Scanner pc: 1642 op: STARTLINE (58)

    /** scanner.e:1710				entry*/
    // SubProg Scanner pc: 1644 op: NOP1 (159)
L37: // addr: 1645 pc: 1644 sub: 26919 op: 159
    // SubProg Scanner pc: 1645 op: STARTLINE (58)

    /** scanner.e:1711					ch = getch()*/
    // SubProg Scanner pc: 1647 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 1650 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 1652 op: STARTLINE (58)

    /** scanner.e:1712				end while*/
    // SubProg Scanner pc: 1654 op: ENDWHILE (22)
    goto L38; // [1654] 1457
    // SubProg Scanner pc: 1656 op: NOP1 (159)
L40: // addr: 1657 pc: 1656 sub: 26919 op: 159
    // SubProg Scanner pc: 1657 op: STARTLINE (58)

    /** scanner.e:1714				if ch = '.' then*/
    // SubProg Scanner pc: 1659 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 46)
    goto L43; // [1659] 1794
    // SubProg Scanner pc: 1663 op: STARTLINE (58)

    /** scanner.e:1715					ch = getch()*/
    // SubProg Scanner pc: 1665 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 1668 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 1670 op: STARTLINE (58)

    /** scanner.e:1716					if ch = '.' then*/
    // SubProg Scanner pc: 1672 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 46)
    goto L44; // [1672] 1683
    // SubProg Scanner pc: 1676 op: STARTLINE (58)

    /** scanner.e:1718						ungetch()*/
    // SubProg Scanner pc: 1678 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 1680 op: ELSE (23)
    goto L45; // [1680] 1793
    // SubProg Scanner pc: 1682 op: NOP1 (159)
L44: // addr: 1683 pc: 1682 sub: 26919 op: 159
    // SubProg Scanner pc: 1683 op: STARTLINE (58)

    /** scanner.e:1720						is_int = FALSE*/
    // SubProg Scanner pc: 1685 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1687 op: ASSIGN (18)
    _is_int_26932 = _8FALSE_442;
    // SubProg Scanner pc: 1690 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1692 op: STARTLINE (58)

    /** scanner.e:1721						if yytext[1] = '.' then*/
    // SubProg Scanner pc: 1694 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_yytext_26927);
    _15176 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1698 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15176, 46)){
        _15176 = NOVALUE;
        goto L46; // [1698] 1712
    }
    _15176 = NOVALUE;
    // SubProg Scanner pc: 1702 op: STARTLINE (58)

    /** scanner.e:1722							CompileErr(124)*/
    // SubProg Scanner pc: 1704 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(124, _21936, 0);
    // SubProg Scanner pc: 1709 op: ELSE (23)
    goto L47; // [1709] 1719
    // SubProg Scanner pc: 1711 op: NOP1 (159)
L46: // addr: 1712 pc: 1711 sub: 26919 op: 159
    // SubProg Scanner pc: 1712 op: STARTLINE (58)

    /** scanner.e:1724							yytext &= '.'*/
    // SubProg Scanner pc: 1714 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, 46);
    // SubProg Scanner pc: 1718 op: NOP1 (159)
L47: // addr: 1719 pc: 1718 sub: 26919 op: 159
    // SubProg Scanner pc: 1719 op: STARTLINE (58)

    /** scanner.e:1726						if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1721 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1723 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15179 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 1727 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1729 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15179, -7)){
        _15179 = NOVALUE;
        goto L48; // [1729] 1784
    }
    _15179 = NOVALUE;
    // SubProg Scanner pc: 1733 op: STARTLINE (58)

    /** scanner.e:1727							yytext &= ch*/
    // SubProg Scanner pc: 1735 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 1739 op: STARTLINE (58)

    /** scanner.e:1728							ch = getch()*/
    // SubProg Scanner pc: 1741 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 1744 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 1746 op: STARTLINE (58)

    /** scanner.e:1729							while char_class[ch] = DIGIT do*/
    // SubProg Scanner pc: 1748 op: NOP2 (110)
    // SubProg Scanner pc: 1750 op: NOPWHILE (158)
L49: // addr: 1751 pc: 1750 sub: 26919 op: 158
    // SubProg Scanner pc: 1751 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1753 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15183 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 1757 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1759 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15183, -7)){
        _15183 = NOVALUE;
        goto L4A; // [1759] 1792
    }
    _15183 = NOVALUE;
    // SubProg Scanner pc: 1763 op: STARTLINE (58)

    /** scanner.e:1730								yytext &= ch*/
    // SubProg Scanner pc: 1765 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 1769 op: STARTLINE (58)

    /** scanner.e:1731								ch = getch()*/
    // SubProg Scanner pc: 1771 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 1774 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 1776 op: STARTLINE (58)

    /** scanner.e:1732							end while*/
    // SubProg Scanner pc: 1778 op: ENDWHILE (22)
    goto L49; // [1778] 1751
    // SubProg Scanner pc: 1780 op: NOP1 (159)
    // SubProg Scanner pc: 1781 op: ELSE (23)
    goto L4A; // [1781] 1792
    // SubProg Scanner pc: 1783 op: NOP1 (159)
L48: // addr: 1784 pc: 1783 sub: 26919 op: 159
    // SubProg Scanner pc: 1784 op: STARTLINE (58)

    /** scanner.e:1734							CompileErr(94)*/
    // SubProg Scanner pc: 1786 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(94, _21936, 0);
    // SubProg Scanner pc: 1791 op: NOP1 (159)
L4A: // addr: 1792 pc: 1791 sub: 26919 op: 159
    // SubProg Scanner pc: 1792 op: NOP1 (159)
L45: // addr: 1793 pc: 1792 sub: 26919 op: 159
    // SubProg Scanner pc: 1793 op: NOP1 (159)
L43: // addr: 1794 pc: 1793 sub: 26919 op: 159
    // SubProg Scanner pc: 1794 op: STARTLINE (58)

    /** scanner.e:1739				if basetype = -1 and find(ch, "eE") then*/
    // SubProg Scanner pc: 1796 op: EQUALS (3)
    _15187 = (_basetype_27227 == -1);
    // SubProg Scanner pc: 1800 op: SC1_AND_IF (146)
    if (_15187 == 0) {
        goto L4B; // [1800] 1936
    }
    // SubProg Scanner pc: 1804 op: FIND_FROM (176)
    _15190 = find_from(_ch_26921, _15189, 1);
    // SubProg Scanner pc: 1809 op: NOP1 (159)
    // SubProg Scanner pc: 1810 op: IF (20)
    if (_15190 == 0)
    {
        _15190 = NOVALUE;
        goto L4B; // [1810] 1936
    }
    else{
        _15190 = NOVALUE;
    }
    // SubProg Scanner pc: 1813 op: STARTLINE (58)

    /** scanner.e:1740					is_int = FALSE*/
    // SubProg Scanner pc: 1815 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1817 op: ASSIGN (18)
    _is_int_26932 = _8FALSE_442;
    // SubProg Scanner pc: 1820 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1822 op: STARTLINE (58)

    /** scanner.e:1741					yytext &= ch*/
    // SubProg Scanner pc: 1824 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 1828 op: STARTLINE (58)

    /** scanner.e:1742					ch = getch()*/
    // SubProg Scanner pc: 1830 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 1833 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 1835 op: STARTLINE (58)

    /** scanner.e:1743					if ch = '-' or ch = '+' or char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1837 op: EQUALS (3)
    _15193 = (_ch_26921 == 45);
    // SubProg Scanner pc: 1841 op: SC1_OR (143)
    if (_15193 != 0) {
        _15194 = 1;
        goto L4C; // [1841] 1853
    }
    // SubProg Scanner pc: 1845 op: EQUALS (3)
    _15195 = (_ch_26921 == 43);
    // SubProg Scanner pc: 1849 op: SC2_OR (144)
    _15194 = (_15195 != 0);
    // SubProg Scanner pc: 1852 op: NOP1 (159)
L4C: // addr: 1853 pc: 1852 sub: 26919 op: 159
    // SubProg Scanner pc: 1853 op: SC1_OR_IF (147)
    if (_15194 != 0) {
        goto L4D; // [1853] 1874
    }
    // SubProg Scanner pc: 1857 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1859 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15197 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 1863 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1865 op: EQUALS (3)
    if (IS_ATOM_INT(_15197)) {
        _15198 = (_15197 == -7);
    }
    else {
        _15198 = binary_op(EQUALS, _15197, -7);
    }
    _15197 = NOVALUE;
    // SubProg Scanner pc: 1869 op: NOP1 (159)
    // SubProg Scanner pc: 1870 op: IF (20)
    if (_15198 == 0) {
        DeRef(_15198);
        _15198 = NOVALUE;
        goto L4E; // [1870] 1883
    }
    else {
        if (!IS_ATOM_INT(_15198) && DBL_PTR(_15198)->dbl == 0.0){
            DeRef(_15198);
            _15198 = NOVALUE;
            goto L4E; // [1870] 1883
        }
        DeRef(_15198);
        _15198 = NOVALUE;
    }
    DeRef(_15198);
    _15198 = NOVALUE;
    // SubProg Scanner pc: 1873 op: NOP1 (159)
L4D: // addr: 1874 pc: 1873 sub: 26919 op: 159
    // SubProg Scanner pc: 1874 op: STARTLINE (58)

    /** scanner.e:1744						yytext &= ch*/
    // SubProg Scanner pc: 1876 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 1880 op: ELSE (23)
    goto L4F; // [1880] 1891
    // SubProg Scanner pc: 1882 op: NOP1 (159)
L4E: // addr: 1883 pc: 1882 sub: 26919 op: 159
    // SubProg Scanner pc: 1883 op: STARTLINE (58)

    /** scanner.e:1746						CompileErr(86)*/
    // SubProg Scanner pc: 1885 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(86, _21936, 0);
    // SubProg Scanner pc: 1890 op: NOP1 (159)
L4F: // addr: 1891 pc: 1890 sub: 26919 op: 159
    // SubProg Scanner pc: 1891 op: STARTLINE (58)

    /** scanner.e:1748					ch = getch()*/
    // SubProg Scanner pc: 1893 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 1896 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 1898 op: STARTLINE (58)

    /** scanner.e:1749					while char_class[ch] = DIGIT do*/
    // SubProg Scanner pc: 1900 op: NOP2 (110)
    // SubProg Scanner pc: 1902 op: NOPWHILE (158)
L50: // addr: 1903 pc: 1902 sub: 26919 op: 158
    // SubProg Scanner pc: 1903 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1905 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15201 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 1909 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1911 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15201, -7)){
        _15201 = NOVALUE;
        goto L51; // [1911] 1967
    }
    _15201 = NOVALUE;
    // SubProg Scanner pc: 1915 op: STARTLINE (58)

    /** scanner.e:1750						yytext &= ch*/
    // SubProg Scanner pc: 1917 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 1921 op: STARTLINE (58)

    /** scanner.e:1751						ch = getch()*/
    // SubProg Scanner pc: 1923 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 1926 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 1928 op: STARTLINE (58)

    /** scanner.e:1752					end while*/
    // SubProg Scanner pc: 1930 op: ENDWHILE (22)
    goto L50; // [1930] 1903
    // SubProg Scanner pc: 1932 op: NOP1 (159)
    // SubProg Scanner pc: 1933 op: ELSE (23)
    goto L51; // [1933] 1967
    // SubProg Scanner pc: 1935 op: NOP1 (159)
L4B: // addr: 1936 pc: 1935 sub: 26919 op: 159
    // SubProg Scanner pc: 1936 op: STARTLINE (58)

    /** scanner.e:1753				elsif char_class[ch] = LETTER then*/
    // SubProg Scanner pc: 1938 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1940 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15205 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 1944 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1946 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15205, -2)){
        _15205 = NOVALUE;
        goto L52; // [1946] 1966
    }
    _15205 = NOVALUE;
    // SubProg Scanner pc: 1950 op: STARTLINE (58)

    /** scanner.e:1754					CompileErr(127, {{ch}})*/
    // SubProg Scanner pc: 1952 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26921;
    _15207 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1956 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _15207;
    _15208 = MAKE_SEQ(_1);
    _15207 = NOVALUE;
    // SubProg Scanner pc: 1960 op: PROC (27)
    _49CompileErr(127, _15208, 0);
    _15208 = NOVALUE;
    // SubProg Scanner pc: 1965 op: NOP1 (159)
L52: // addr: 1966 pc: 1965 sub: 26919 op: 159
    // SubProg Scanner pc: 1966 op: NOP1 (159)
L51: // addr: 1967 pc: 1966 sub: 26919 op: 159
    // SubProg Scanner pc: 1967 op: STARTLINE (58)

    /** scanner.e:1757				ungetch()*/
    // SubProg Scanner pc: 1969 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 1971 op: STARTLINE (58)

    /** scanner.e:1759				while i != 0 with entry do*/
    // SubProg Scanner pc: 1973 op: ELSE (23)
    goto L53; // [1973] 1992
    // SubProg Scanner pc: 1975 op: NOPWHILE (158)
L54: // addr: 1976 pc: 1975 sub: 26919 op: 158
    // SubProg Scanner pc: 1976 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 1978 op: NOTEQ_IFW_I (122)
    if (_i_26922 == 0)
    goto L55; // [1978] 2004
    // SubProg Scanner pc: 1982 op: STARTLINE (58)

    /** scanner.e:1760					yytext = remove( yytext, i )*/
    // SubProg Scanner pc: 1984 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_yytext_26927);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_26922)) ? _i_26922 : (object)(DBL_PTR(_i_26922)->dbl);
        int stop = (IS_ATOM_INT(_i_26922)) ? _i_26922 : (object)(DBL_PTR(_i_26922)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_yytext_26927), start, &_yytext_26927 );
            }
            else Tail(SEQ_PTR(_yytext_26927), stop+1, &_yytext_26927);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_yytext_26927), start, &_yytext_26927);
        }
        else {
            assign_slice_seq = &assign_space;
            _yytext_26927 = Remove_elements(start, stop, (SEQ_PTR(_yytext_26927)->ref == 1));
        }
    }
    // SubProg Scanner pc: 1989 op: STARTLINE (58)

    /** scanner.e:1761				  entry*/
    // SubProg Scanner pc: 1991 op: NOP1 (159)
L53: // addr: 1992 pc: 1991 sub: 26919 op: 159
    // SubProg Scanner pc: 1992 op: STARTLINE (58)

    /** scanner.e:1762				    i = find('_', yytext)*/
    // SubProg Scanner pc: 1994 op: FIND_FROM (176)
    _i_26922 = find_from(95, _yytext_26927, 1);
    // SubProg Scanner pc: 1999 op: STARTLINE (58)

    /** scanner.e:1763				end while*/
    // SubProg Scanner pc: 2001 op: ENDWHILE (22)
    goto L54; // [2001] 1976
    // SubProg Scanner pc: 2003 op: NOP1 (159)
L55: // addr: 2004 pc: 2003 sub: 26919 op: 159
    // SubProg Scanner pc: 2004 op: STARTLINE (58)

    /** scanner.e:1765				if is_int then*/
    // SubProg Scanner pc: 2006 op: IF (20)
    if (_is_int_26932 == 0)
    {
        goto L56; // [2006] 2078
    }
    else{
    }
    // SubProg Scanner pc: 2009 op: STARTLINE (58)

    /** scanner.e:1766					if basetype = -1 then*/
    // SubProg Scanner pc: 2011 op: EQUALS_IFW_I (121)
    if (_basetype_27227 != -1)
    goto L57; // [2011] 2021
    // SubProg Scanner pc: 2015 op: STARTLINE (58)

    /** scanner.e:1767						basetype = 3 -- decimal*/
    // SubProg Scanner pc: 2017 op: ASSIGN_I (113)
    _basetype_27227 = 3;
    // SubProg Scanner pc: 2020 op: NOP1 (159)
L57: // addr: 2021 pc: 2020 sub: 26919 op: 159
    // SubProg Scanner pc: 2021 op: STARTLINE (58)

    /** scanner.e:1769					d = MakeInt(yytext, nbase[basetype])*/
    // SubProg Scanner pc: 2023 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61nbase_26728);
    _15213 = (object)*(((s1_ptr)_2)->base + _basetype_27227);
    // SubProg Scanner pc: 2027 op: PROC (27)
    RefDS(_yytext_26927);
    Ref(_15213);
    _0 = _d_26929;
    _d_26929 = _61MakeInt(_yytext_26927, _15213);
    DeRef(_0);
    _15213 = NOVALUE;
    // SubProg Scanner pc: 2032 op: STARTLINE (58)

    /** scanner.e:1770					if is_integer(d) then*/
    // SubProg Scanner pc: 2034 op: PROC (27)
    Ref(_d_26929);
    _15215 = _34is_integer(_d_26929);
    // SubProg Scanner pc: 2038 op: IF (20)
    if (_15215 == 0) {
        DeRef(_15215);
        _15215 = NOVALUE;
        goto L58; // [2038] 2060
    }
    else {
        if (!IS_ATOM_INT(_15215) && DBL_PTR(_15215)->dbl == 0.0){
            DeRef(_15215);
            _15215 = NOVALUE;
            goto L58; // [2038] 2060
        }
        DeRef(_15215);
        _15215 = NOVALUE;
    }
    DeRef(_15215);
    _15215 = NOVALUE;
    // SubProg Scanner pc: 2041 op: STARTLINE (58)

    /** scanner.e:1771						return {ATOM, NewIntSym(d)}*/
    // SubProg Scanner pc: 2043 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2045 op: PROC (27)
    Ref(_d_26929);
    _15216 = _53NewIntSym(_d_26929);
    // SubProg Scanner pc: 2049 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15216;
    _15217 = MAKE_SEQ(_1);
    _15216 = NOVALUE;
    // SubProg Scanner pc: 2053 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27227

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRefDS(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15217;
    // SubProg Scanner pc: 2057 op: ELSE (23)
    goto L59; // [2057] 2077
    // SubProg Scanner pc: 2059 op: NOP1 (159)
L58: // addr: 2060 pc: 2059 sub: 26919 op: 159
    // SubProg Scanner pc: 2060 op: STARTLINE (58)

    /** scanner.e:1773						return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 2062 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2064 op: PROC (27)
    Ref(_d_26929);
    _15218 = _53NewDoubleSym(_d_26929);
    // SubProg Scanner pc: 2068 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15218;
    _15219 = MAKE_SEQ(_1);
    _15218 = NOVALUE;
    // SubProg Scanner pc: 2072 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27227

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15219;
    // SubProg Scanner pc: 2076 op: NOP1 (159)
L59: // addr: 2077 pc: 2076 sub: 26919 op: 159
    // SubProg Scanner pc: 2077 op: NOP1 (159)
L56: // addr: 2078 pc: 2077 sub: 26919 op: 159
    // SubProg Scanner pc: 2078 op: STARTLINE (58)

    /** scanner.e:1778				if basetype != -1 then*/
    // SubProg Scanner pc: 2080 op: NOTEQ_IFW_I (122)
    if (_basetype_27227 == -1)
    goto L5A; // [2080] 2096
    // SubProg Scanner pc: 2084 op: STARTLINE (58)

    /** scanner.e:1779					CompileErr(125, nbasecode[basetype])*/
    // SubProg Scanner pc: 2086 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61nbasecode_26729);
    _15221 = (object)*(((s1_ptr)_2)->base + _basetype_27227);
    // SubProg Scanner pc: 2090 op: PROC (27)
    Ref(_15221);
    _49CompileErr(125, _15221, 0);
    _15221 = NOVALUE;
    // SubProg Scanner pc: 2095 op: NOP1 (159)
L5A: // addr: 2096 pc: 2095 sub: 26919 op: 159
    // SubProg Scanner pc: 2096 op: STARTLINE (58)

    /** scanner.e:1783				d = my_sscanf(yytext)*/
    // SubProg Scanner pc: 2098 op: PROC (27)
    RefDS(_yytext_26927);
    _0 = _d_26929;
    _d_26929 = _61my_sscanf(_yytext_26927);
    DeRef(_0);
    // SubProg Scanner pc: 2102 op: STARTLINE (58)

    /** scanner.e:1784				if sequence(d) then*/
    // SubProg Scanner pc: 2104 op: IS_A_SEQUENCE (68)
    _15223 = IS_SEQUENCE(_d_26929);
    // SubProg Scanner pc: 2107 op: IF (20)
    if (_15223 == 0)
    {
        _15223 = NOVALUE;
        goto L5B; // [2107] 2120
    }
    else{
        _15223 = NOVALUE;
    }
    // SubProg Scanner pc: 2110 op: STARTLINE (58)

    /** scanner.e:1785					CompileErr(121)*/
    // SubProg Scanner pc: 2112 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(121, _21936, 0);
    // SubProg Scanner pc: 2117 op: ELSE (23)
    goto L5C; // [2117] 2172
    // SubProg Scanner pc: 2119 op: NOP1 (159)
L5B: // addr: 2120 pc: 2119 sub: 26919 op: 159
    // SubProg Scanner pc: 2120 op: STARTLINE (58)

    /** scanner.e:1786				elsif is_int and d <= MAXINT_DBL then*/
    // SubProg Scanner pc: 2122 op: SC1_AND_IF (146)
    if (_is_int_26932 == 0) {
        goto L5D; // [2122] 2155
    }
    // SubProg Scanner pc: 2126 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2128 op: LESSEQ (5)
    if (IS_ATOM_INT(_d_26929)) {
        _15225 = (_d_26929 <= 1073741823);
    }
    else {
        _15225 = binary_op(LESSEQ, _d_26929, 1073741823);
    }
    // SubProg Scanner pc: 2132 op: NOP1 (159)
    // SubProg Scanner pc: 2133 op: IF (20)
    if (_15225 == 0) {
        DeRef(_15225);
        _15225 = NOVALUE;
        goto L5D; // [2133] 2155
    }
    else {
        if (!IS_ATOM_INT(_15225) && DBL_PTR(_15225)->dbl == 0.0){
            DeRef(_15225);
            _15225 = NOVALUE;
            goto L5D; // [2133] 2155
        }
        DeRef(_15225);
        _15225 = NOVALUE;
    }
    DeRef(_15225);
    _15225 = NOVALUE;
    // SubProg Scanner pc: 2136 op: STARTLINE (58)

    /** scanner.e:1787					return {ATOM, NewIntSym(d)}  -- 1 to 1.07 billion*/
    // SubProg Scanner pc: 2138 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2140 op: PROC (27)
    Ref(_d_26929);
    _15226 = _53NewIntSym(_d_26929);
    // SubProg Scanner pc: 2144 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15226;
    _15227 = MAKE_SEQ(_1);
    _15226 = NOVALUE;
    // SubProg Scanner pc: 2148 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27227

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15227;
    // SubProg Scanner pc: 2152 op: ELSE (23)
    goto L5C; // [2152] 2172
    // SubProg Scanner pc: 2154 op: NOP1 (159)
L5D: // addr: 2155 pc: 2154 sub: 26919 op: 159
    // SubProg Scanner pc: 2155 op: STARTLINE (58)

    /** scanner.e:1789					return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 2157 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2159 op: PROC (27)
    Ref(_d_26929);
    _15228 = _53NewDoubleSym(_d_26929);
    // SubProg Scanner pc: 2163 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15228;
    _15229 = MAKE_SEQ(_1);
    _15228 = NOVALUE;
    // SubProg Scanner pc: 2167 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27227

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15229;
    // SubProg Scanner pc: 2171 op: NOP1 (159)
L5C: // addr: 2172 pc: 2171 sub: 26919 op: 159
    // SubProg Scanner pc: 2172 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var basetype_27227
    // SubProg Scanner pc: 2174 op: ELSE (23)
    goto L1; // [2174] 10
    // SubProg Scanner pc: 2176 op: NOP1 (159)
L33: // addr: 2177 pc: 2176 sub: 26919 op: 159
    // SubProg Scanner pc: 2177 op: STARTLINE (58)

    /** scanner.e:1793			elsif class = MINUS then*/
    // SubProg Scanner pc: 2179 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2181 op: EQUALS_IFW (104)
    if (_class_26933 != 10)
    goto L5E; // [2181] 2267
    // SubProg Scanner pc: 2185 op: STARTLINE (58)

    /** scanner.e:1794				ch = getch()*/
    // SubProg Scanner pc: 2187 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 2190 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 2192 op: STARTLINE (58)

    /** scanner.e:1795				if ch = '-' then*/
    // SubProg Scanner pc: 2194 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 45)
    goto L5F; // [2194] 2220
    // SubProg Scanner pc: 2198 op: STARTLINE (58)

    /** scanner.e:1797					if start_include then*/
    // SubProg Scanner pc: 2200 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2202 op: IF (20)
    if (_61start_include_25182 == 0)
    {
        goto L60; // [2202] 2212
    }
    else{
    }
    // SubProg Scanner pc: 2205 op: STARTLINE (58)

    /** scanner.e:1798						IncludePush()*/
    // SubProg Scanner pc: 2207 op: PROC (27)
    _61IncludePush();
    // SubProg Scanner pc: 2209 op: ELSE (23)
    goto L1; // [2209] 10
    // SubProg Scanner pc: 2211 op: NOP1 (159)
L60: // addr: 2212 pc: 2211 sub: 26919 op: 159
    // SubProg Scanner pc: 2212 op: STARTLINE (58)

    /** scanner.e:1800						read_line()*/
    // SubProg Scanner pc: 2214 op: PROC (27)
    _61read_line();
    // SubProg Scanner pc: 2216 op: NOP1 (159)
    // SubProg Scanner pc: 2217 op: ELSE (23)
    goto L1; // [2217] 10
    // SubProg Scanner pc: 2219 op: NOP1 (159)
L5F: // addr: 2220 pc: 2219 sub: 26919 op: 159
    // SubProg Scanner pc: 2220 op: STARTLINE (58)

    /** scanner.e:1802				elsif ch = '=' then*/
    // SubProg Scanner pc: 2222 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 61)
    goto L61; // [2222] 2241
    // SubProg Scanner pc: 2226 op: STARTLINE (58)

    /** scanner.e:1803					return {MINUS_EQUALS, 0}*/
    // SubProg Scanner pc: 2228 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2230 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 516;
    ((intptr_t *)_2)[2] = 0;
    _15234 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2234 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15234;
    // SubProg Scanner pc: 2238 op: ELSE (23)
    goto L1; // [2238] 10
    // SubProg Scanner pc: 2240 op: NOP1 (159)
L61: // addr: 2241 pc: 2240 sub: 26919 op: 159
    // SubProg Scanner pc: 2241 op: STARTLINE (58)

    /** scanner.e:1805					bp -= 1*/
    // SubProg Scanner pc: 2243 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2245 op: MINUS (10)
    _49bp_48713 = _49bp_48713 - 1;
    // SubProg Scanner pc: 2251 op: STARTLINE (58)

    /** scanner.e:1806					return {MINUS, 0}*/
    // SubProg Scanner pc: 2253 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2255 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 0;
    _15236 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2259 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15236;
    // SubProg Scanner pc: 2263 op: NOP1 (159)
    // SubProg Scanner pc: 2264 op: ELSE (23)
    goto L1; // [2264] 10
    // SubProg Scanner pc: 2266 op: NOP1 (159)
L5E: // addr: 2267 pc: 2266 sub: 26919 op: 159
    // SubProg Scanner pc: 2267 op: STARTLINE (58)

    /** scanner.e:1808			elsif class = DOUBLE_QUOTE then*/
    // SubProg Scanner pc: 2269 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2271 op: EQUALS_IFW (104)
    if (_class_26933 != -4)
    goto L62; // [2271] 2465
    // SubProg Scanner pc: 2275 op: STARTLINE (58)

    /** scanner.e:1809				integer fch*/
    // SubProg Scanner pc: 2277 op: STARTLINE (58)

    /** scanner.e:1810				ch = getch()*/
    // SubProg Scanner pc: 2279 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 2282 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 2284 op: STARTLINE (58)

    /** scanner.e:1811				if ch = '"' then*/
    // SubProg Scanner pc: 2286 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 34)
    goto L63; // [2286] 2322
    // SubProg Scanner pc: 2290 op: STARTLINE (58)

    /** scanner.e:1812					fch = getch()*/
    // SubProg Scanner pc: 2292 op: PROC (27)
    _fch_27401 = _61getch();
    // SubProg Scanner pc: 2295 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_27401)) {
        _1 = (object)(DBL_PTR(_fch_27401)->dbl);
        DeRefDS(_fch_27401);
        _fch_27401 = _1;
    }
    // SubProg Scanner pc: 2297 op: STARTLINE (58)

    /** scanner.e:1813					if fch = '"' then*/
    // SubProg Scanner pc: 2299 op: EQUALS_IFW_I (121)
    if (_fch_27401 != 34)
    goto L64; // [2299] 2316
    // SubProg Scanner pc: 2303 op: STARTLINE (58)

    /** scanner.e:1815						return ExtendedString( fch )*/
    // SubProg Scanner pc: 2305 op: PROC (27)
    _15242 = _61ExtendedString(_fch_27401);
    // SubProg Scanner pc: 2309 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fch_27401

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15242;
    // SubProg Scanner pc: 2313 op: ELSE (23)
    goto L65; // [2313] 2321
    // SubProg Scanner pc: 2315 op: NOP1 (159)
L64: // addr: 2316 pc: 2315 sub: 26919 op: 159
    // SubProg Scanner pc: 2316 op: STARTLINE (58)

    /** scanner.e:1817						ungetch()*/
    // SubProg Scanner pc: 2318 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 2320 op: NOP1 (159)
L65: // addr: 2321 pc: 2320 sub: 26919 op: 159
    // SubProg Scanner pc: 2321 op: NOP1 (159)
L63: // addr: 2322 pc: 2321 sub: 26919 op: 159
    // SubProg Scanner pc: 2322 op: STARTLINE (58)

    /** scanner.e:1820				yytext = ""*/
    // SubProg Scanner pc: 2324 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_yytext_26927);
    _yytext_26927 = _5;
    // SubProg Scanner pc: 2327 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 2329 op: STARTLINE (58)

    /** scanner.e:1821				while ch != '\n' and ch != '\r' do -- can't be EOF*/
    // SubProg Scanner pc: 2331 op: NOP2 (110)
    // SubProg Scanner pc: 2333 op: NOPWHILE (158)
L66: // addr: 2334 pc: 2333 sub: 26919 op: 158
    // SubProg Scanner pc: 2334 op: NOTEQ (4)
    _15243 = (_ch_26921 != 10);
    // SubProg Scanner pc: 2338 op: SC1_AND_IF (146)
    if (_15243 == 0) {
        goto L67; // [2338] 2417
    }
    // SubProg Scanner pc: 2342 op: NOTEQ (4)
    _15245 = (_ch_26921 != 13);
    // SubProg Scanner pc: 2346 op: NOP1 (159)
    // SubProg Scanner pc: 2347 op: WHILE (47)
    if (_15245 == 0)
    {
        DeRef(_15245);
        _15245 = NOVALUE;
        goto L67; // [2347] 2417
    }
    else{
        DeRef(_15245);
        _15245 = NOVALUE;
    }
    // SubProg Scanner pc: 2350 op: STARTLINE (58)

    /** scanner.e:1822					if ch = '"' then*/
    // SubProg Scanner pc: 2352 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 34)
    goto L68; // [2352] 2363
    // SubProg Scanner pc: 2356 op: STARTLINE (58)

    /** scanner.e:1823						exit*/
    // SubProg Scanner pc: 2358 op: EXIT (61)
    goto L67; // [2358] 2417
    // SubProg Scanner pc: 2360 op: ELSE (23)
    goto L69; // [2360] 2405
    // SubProg Scanner pc: 2362 op: NOP1 (159)
L68: // addr: 2363 pc: 2362 sub: 26919 op: 159
    // SubProg Scanner pc: 2363 op: STARTLINE (58)

    /** scanner.e:1824					elsif ch = '\\' then*/
    // SubProg Scanner pc: 2365 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 92)
    goto L6A; // [2365] 2382
    // SubProg Scanner pc: 2369 op: STARTLINE (58)

    /** scanner.e:1825						yytext &= EscapeChar('"')*/
    // SubProg Scanner pc: 2371 op: PROC (27)
    _15248 = _61EscapeChar(34);
    // SubProg Scanner pc: 2375 op: CONCAT (15)
    if (IS_SEQUENCE(_yytext_26927) && IS_ATOM(_15248)) {
        Ref(_15248);
        Append(&_yytext_26927, _yytext_26927, _15248);
    }
    else if (IS_ATOM(_yytext_26927) && IS_SEQUENCE(_15248)) {
    }
    else {
        Concat((object_ptr)&_yytext_26927, _yytext_26927, _15248);
    }
    DeRef(_15248);
    _15248 = NOVALUE;
    // SubProg Scanner pc: 2379 op: ELSE (23)
    goto L69; // [2379] 2405
    // SubProg Scanner pc: 2381 op: NOP1 (159)
L6A: // addr: 2382 pc: 2381 sub: 26919 op: 159
    // SubProg Scanner pc: 2382 op: STARTLINE (58)

    /** scanner.e:1826					elsif ch = '\t' then*/
    // SubProg Scanner pc: 2384 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 9)
    goto L6B; // [2384] 2398
    // SubProg Scanner pc: 2388 op: STARTLINE (58)

    /** scanner.e:1827						CompileErr(145)*/
    // SubProg Scanner pc: 2390 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(145, _21936, 0);
    // SubProg Scanner pc: 2395 op: ELSE (23)
    goto L69; // [2395] 2405
    // SubProg Scanner pc: 2397 op: NOP1 (159)
L6B: // addr: 2398 pc: 2397 sub: 26919 op: 159
    // SubProg Scanner pc: 2398 op: STARTLINE (58)

    /** scanner.e:1829						yytext &= ch*/
    // SubProg Scanner pc: 2400 op: CONCAT (15)
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    // SubProg Scanner pc: 2404 op: NOP1 (159)
L69: // addr: 2405 pc: 2404 sub: 26919 op: 159
    // SubProg Scanner pc: 2405 op: STARTLINE (58)

    /** scanner.e:1831					ch = getch()*/
    // SubProg Scanner pc: 2407 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 2410 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 2412 op: STARTLINE (58)

    /** scanner.e:1832				end while*/
    // SubProg Scanner pc: 2414 op: ENDWHILE (22)
    goto L66; // [2414] 2334
    // SubProg Scanner pc: 2416 op: NOP1 (159)
L67: // addr: 2417 pc: 2416 sub: 26919 op: 159
    // SubProg Scanner pc: 2417 op: STARTLINE (58)

    /** scanner.e:1833				if ch = '\n' or ch = '\r' then*/
    // SubProg Scanner pc: 2419 op: EQUALS (3)
    _15253 = (_ch_26921 == 10);
    // SubProg Scanner pc: 2423 op: SC1_OR_IF (147)
    if (_15253 != 0) {
        goto L6C; // [2423] 2436
    }
    // SubProg Scanner pc: 2427 op: EQUALS (3)
    _15255 = (_ch_26921 == 13);
    // SubProg Scanner pc: 2431 op: NOP1 (159)
    // SubProg Scanner pc: 2432 op: IF (20)
    if (_15255 == 0)
    {
        DeRef(_15255);
        _15255 = NOVALUE;
        goto L6D; // [2432] 2444
    }
    else{
        DeRef(_15255);
        _15255 = NOVALUE;
    }
    // SubProg Scanner pc: 2435 op: NOP1 (159)
L6C: // addr: 2436 pc: 2435 sub: 26919 op: 159
    // SubProg Scanner pc: 2436 op: STARTLINE (58)

    /** scanner.e:1834					CompileErr(67)*/
    // SubProg Scanner pc: 2438 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(67, _21936, 0);
    // SubProg Scanner pc: 2443 op: NOP1 (159)
L6D: // addr: 2444 pc: 2443 sub: 26919 op: 159
    // SubProg Scanner pc: 2444 op: STARTLINE (58)

    /** scanner.e:1836				return {STRING, NewStringSym(yytext)}*/
    // SubProg Scanner pc: 2446 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2448 op: PROC (27)
    RefDS(_yytext_26927);
    _15256 = _53NewStringSym(_yytext_26927);
    // SubProg Scanner pc: 2452 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _15256;
    _15257 = MAKE_SEQ(_1);
    _15256 = NOVALUE;
    // SubProg Scanner pc: 2456 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fch_27401

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRefDS(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15257;
    // SubProg Scanner pc: 2460 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fch_27401
    // SubProg Scanner pc: 2462 op: ELSE (23)
    goto L1; // [2462] 10
    // SubProg Scanner pc: 2464 op: NOP1 (159)
L62: // addr: 2465 pc: 2464 sub: 26919 op: 159
    // SubProg Scanner pc: 2465 op: STARTLINE (58)

    /** scanner.e:1838			elsif class = PLUS then*/
    // SubProg Scanner pc: 2467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2469 op: EQUALS_IFW (104)
    if (_class_26933 != 11)
    goto L6E; // [2469] 2521
    // SubProg Scanner pc: 2473 op: STARTLINE (58)

    /** scanner.e:1839				ch = getch()*/
    // SubProg Scanner pc: 2475 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 2478 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 2480 op: STARTLINE (58)

    /** scanner.e:1840				if ch = '=' then*/
    // SubProg Scanner pc: 2482 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 61)
    goto L6F; // [2482] 2501
    // SubProg Scanner pc: 2486 op: STARTLINE (58)

    /** scanner.e:1841					return {PLUS_EQUALS, 0}*/
    // SubProg Scanner pc: 2488 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2490 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 515;
    ((intptr_t *)_2)[2] = 0;
    _15261 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2494 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15261;
    // SubProg Scanner pc: 2498 op: ELSE (23)
    goto L1; // [2498] 10
    // SubProg Scanner pc: 2500 op: NOP1 (159)
L6F: // addr: 2501 pc: 2500 sub: 26919 op: 159
    // SubProg Scanner pc: 2501 op: STARTLINE (58)

    /** scanner.e:1843					ungetch()*/
    // SubProg Scanner pc: 2503 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 2505 op: STARTLINE (58)

    /** scanner.e:1844					return {PLUS, 0}*/
    // SubProg Scanner pc: 2507 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2509 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 11;
    ((intptr_t *)_2)[2] = 0;
    _15262 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2513 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15262;
    // SubProg Scanner pc: 2517 op: NOP1 (159)
    // SubProg Scanner pc: 2518 op: ELSE (23)
    goto L1; // [2518] 10
    // SubProg Scanner pc: 2520 op: NOP1 (159)
L6E: // addr: 2521 pc: 2520 sub: 26919 op: 159
    // SubProg Scanner pc: 2521 op: STARTLINE (58)

    /** scanner.e:1847			elsif class = res:CONCAT then*/
    // SubProg Scanner pc: 2523 op: EQUALS_IFW_I (121)
    if (_class_26933 != 15)
    goto L70; // [2523] 2573
    // SubProg Scanner pc: 2527 op: STARTLINE (58)

    /** scanner.e:1848				ch = getch()*/
    // SubProg Scanner pc: 2529 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 2532 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 2534 op: STARTLINE (58)

    /** scanner.e:1849				if ch = '=' then*/
    // SubProg Scanner pc: 2536 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 61)
    goto L71; // [2536] 2555
    // SubProg Scanner pc: 2540 op: STARTLINE (58)

    /** scanner.e:1850					return {CONCAT_EQUALS, 0}*/
    // SubProg Scanner pc: 2542 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2544 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 519;
    ((intptr_t *)_2)[2] = 0;
    _15266 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2548 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15266;
    // SubProg Scanner pc: 2552 op: ELSE (23)
    goto L1; // [2552] 10
    // SubProg Scanner pc: 2554 op: NOP1 (159)
L71: // addr: 2555 pc: 2554 sub: 26919 op: 159
    // SubProg Scanner pc: 2555 op: STARTLINE (58)

    /** scanner.e:1852					ungetch()*/
    // SubProg Scanner pc: 2557 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 2559 op: STARTLINE (58)

    /** scanner.e:1853					return {res:CONCAT, 0}*/
    // SubProg Scanner pc: 2561 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 15;
    ((intptr_t *)_2)[2] = 0;
    _15267 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2565 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15267;
    // SubProg Scanner pc: 2569 op: NOP1 (159)
    // SubProg Scanner pc: 2570 op: ELSE (23)
    goto L1; // [2570] 10
    // SubProg Scanner pc: 2572 op: NOP1 (159)
L70: // addr: 2573 pc: 2572 sub: 26919 op: 159
    // SubProg Scanner pc: 2573 op: STARTLINE (58)

    /** scanner.e:1856			elsif class = NUMBER_SIGN then*/
    // SubProg Scanner pc: 2575 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2577 op: EQUALS_IFW (104)
    if (_class_26933 != -11)
    goto L72; // [2577] 3104
    // SubProg Scanner pc: 2581 op: STARTLINE (58)

    /** scanner.e:1857				i = 0*/
    // SubProg Scanner pc: 2583 op: ASSIGN_I (113)
    _i_26922 = 0;
    // SubProg Scanner pc: 2586 op: STARTLINE (58)

    /** scanner.e:1858				is_int = -1*/
    // SubProg Scanner pc: 2588 op: ASSIGN_I (113)
    _is_int_26932 = -1;
    // SubProg Scanner pc: 2591 op: STARTLINE (58)

    /** scanner.e:1859				while i < MAXINT/32 do*/
    // SubProg Scanner pc: 2593 op: NOP2 (110)
    // SubProg Scanner pc: 2595 op: NOPWHILE (158)
L73: // addr: 2596 pc: 2595 sub: 26919 op: 158
    // SubProg Scanner pc: 2596 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2598 op: DIVIDE (14)
    _15269 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    // SubProg Scanner pc: 2602 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _i_26922, _15269)){
        DeRef(_15269);
        _15269 = NOVALUE;
        goto L74; // [2602] 2772
    }
    DeRef(_15269);
    _15269 = NOVALUE;
    // SubProg Scanner pc: 2606 op: STARTLINE (58)

    /** scanner.e:1860					ch = getch()*/
    // SubProg Scanner pc: 2608 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 2611 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 2613 op: STARTLINE (58)

    /** scanner.e:1861					if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 2615 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2617 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15272 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 2621 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2623 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15272, -7)){
        _15272 = NOVALUE;
        goto L75; // [2623] 2662
    }
    _15272 = NOVALUE;
    // SubProg Scanner pc: 2627 op: STARTLINE (58)

    /** scanner.e:1862						if ch != '_' then*/
    // SubProg Scanner pc: 2629 op: NOTEQ_IFW_I (122)
    if (_ch_26921 == 95)
    goto L73; // [2629] 2596
    // SubProg Scanner pc: 2633 op: STARTLINE (58)

    /** scanner.e:1863							i = i * 16 + ch - '0'*/
    // SubProg Scanner pc: 2635 op: MULTIPLY (13)
    if (_i_26922 == (short)_i_26922){
        _15275 = _i_26922 * 16;
    }
    else{
        _15275 = NewDouble(_i_26922 * (eudouble)16);
    }
    // SubProg Scanner pc: 2639 op: PLUS (11)
    if (IS_ATOM_INT(_15275)) {
        _15276 = _15275 + _ch_26921;
        if ((object)((uintptr_t)_15276 + (uintptr_t)HIGH_BITS) >= 0){
            _15276 = NewDouble((eudouble)_15276);
        }
    }
    else {
        _15276 = NewDouble(DBL_PTR(_15275)->dbl + (eudouble)_ch_26921);
    }
    DeRef(_15275);
    _15275 = NOVALUE;
    // SubProg Scanner pc: 2643 op: MINUS (10)
    if (IS_ATOM_INT(_15276)) {
        _i_26922 = _15276 - 48;
    }
    else {
        _i_26922 = NewDouble(DBL_PTR(_15276)->dbl - (eudouble)48);
    }
    DeRef(_15276);
    _15276 = NOVALUE;
    // SubProg Scanner pc: 2647 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26922)) {
        _1 = (object)(DBL_PTR(_i_26922)->dbl);
        DeRefDS(_i_26922);
        _i_26922 = _1;
    }
    // SubProg Scanner pc: 2649 op: STARTLINE (58)

    /** scanner.e:1864							is_int = TRUE*/
    // SubProg Scanner pc: 2651 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2653 op: ASSIGN (18)
    _is_int_26932 = _8TRUE_444;
    // SubProg Scanner pc: 2656 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2658 op: NOP1 (159)
    // SubProg Scanner pc: 2659 op: ELSE (23)
    goto L73; // [2659] 2596
    // SubProg Scanner pc: 2661 op: NOP1 (159)
L75: // addr: 2662 pc: 2661 sub: 26919 op: 159
    // SubProg Scanner pc: 2662 op: STARTLINE (58)

    /** scanner.e:1866					elsif ch >= 'A' and ch <= 'F' then*/
    // SubProg Scanner pc: 2664 op: GREATEREQ (2)
    _15278 = (_ch_26921 >= 65);
    // SubProg Scanner pc: 2668 op: SC1_AND_IF (146)
    if (_15278 == 0) {
        goto L76; // [2668] 2712
    }
    // SubProg Scanner pc: 2672 op: LESSEQ (5)
    _15280 = (_ch_26921 <= 70);
    // SubProg Scanner pc: 2676 op: NOP1 (159)
    // SubProg Scanner pc: 2677 op: IF (20)
    if (_15280 == 0)
    {
        DeRef(_15280);
        _15280 = NOVALUE;
        goto L76; // [2677] 2712
    }
    else{
        DeRef(_15280);
        _15280 = NOVALUE;
    }
    // SubProg Scanner pc: 2680 op: STARTLINE (58)

    /** scanner.e:1867						i = (i * 16) + ch - ('A'-10)*/
    // SubProg Scanner pc: 2682 op: MULTIPLY (13)
    if (_i_26922 == (short)_i_26922){
        _15281 = _i_26922 * 16;
    }
    else{
        _15281 = NewDouble(_i_26922 * (eudouble)16);
    }
    // SubProg Scanner pc: 2686 op: PLUS (11)
    if (IS_ATOM_INT(_15281)) {
        _15282 = _15281 + _ch_26921;
        if ((object)((uintptr_t)_15282 + (uintptr_t)HIGH_BITS) >= 0){
            _15282 = NewDouble((eudouble)_15282);
        }
    }
    else {
        _15282 = NewDouble(DBL_PTR(_15281)->dbl + (eudouble)_ch_26921);
    }
    DeRef(_15281);
    _15281 = NOVALUE;
    // SubProg Scanner pc: 2690 op: MINUS (10)
    _15283 = 55;
    // SubProg Scanner pc: 2694 op: MINUS (10)
    if (IS_ATOM_INT(_15282)) {
        _i_26922 = _15282 - 55;
    }
    else {
        _i_26922 = NewDouble(DBL_PTR(_15282)->dbl - (eudouble)55);
    }
    DeRef(_15282);
    _15282 = NOVALUE;
    _15283 = NOVALUE;
    // SubProg Scanner pc: 2698 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26922)) {
        _1 = (object)(DBL_PTR(_i_26922)->dbl);
        DeRefDS(_i_26922);
        _i_26922 = _1;
    }
    // SubProg Scanner pc: 2700 op: STARTLINE (58)

    /** scanner.e:1868						is_int = TRUE*/
    // SubProg Scanner pc: 2702 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2704 op: ASSIGN (18)
    _is_int_26932 = _8TRUE_444;
    // SubProg Scanner pc: 2707 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2709 op: ELSE (23)
    goto L73; // [2709] 2596
    // SubProg Scanner pc: 2711 op: NOP1 (159)
L76: // addr: 2712 pc: 2711 sub: 26919 op: 159
    // SubProg Scanner pc: 2712 op: STARTLINE (58)

    /** scanner.e:1869					elsif ch >= 'a' and ch <= 'f' then*/
    // SubProg Scanner pc: 2714 op: GREATEREQ (2)
    _15285 = (_ch_26921 >= 97);
    // SubProg Scanner pc: 2718 op: SC1_AND_IF (146)
    if (_15285 == 0) {
        goto L74; // [2718] 2772
    }
    // SubProg Scanner pc: 2722 op: LESSEQ (5)
    _15287 = (_ch_26921 <= 102);
    // SubProg Scanner pc: 2726 op: NOP1 (159)
    // SubProg Scanner pc: 2727 op: IF (20)
    if (_15287 == 0)
    {
        DeRef(_15287);
        _15287 = NOVALUE;
        goto L74; // [2727] 2772
    }
    else{
        DeRef(_15287);
        _15287 = NOVALUE;
    }
    // SubProg Scanner pc: 2730 op: STARTLINE (58)

    /** scanner.e:1870						i = (i * 16) + ch - ('a'-10)*/
    // SubProg Scanner pc: 2732 op: MULTIPLY (13)
    if (_i_26922 == (short)_i_26922){
        _15288 = _i_26922 * 16;
    }
    else{
        _15288 = NewDouble(_i_26922 * (eudouble)16);
    }
    // SubProg Scanner pc: 2736 op: PLUS (11)
    if (IS_ATOM_INT(_15288)) {
        _15289 = _15288 + _ch_26921;
        if ((object)((uintptr_t)_15289 + (uintptr_t)HIGH_BITS) >= 0){
            _15289 = NewDouble((eudouble)_15289);
        }
    }
    else {
        _15289 = NewDouble(DBL_PTR(_15288)->dbl + (eudouble)_ch_26921);
    }
    DeRef(_15288);
    _15288 = NOVALUE;
    // SubProg Scanner pc: 2740 op: MINUS (10)
    _15290 = 87;
    // SubProg Scanner pc: 2744 op: MINUS (10)
    if (IS_ATOM_INT(_15289)) {
        _i_26922 = _15289 - 87;
    }
    else {
        _i_26922 = NewDouble(DBL_PTR(_15289)->dbl - (eudouble)87);
    }
    DeRef(_15289);
    _15289 = NOVALUE;
    _15290 = NOVALUE;
    // SubProg Scanner pc: 2748 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26922)) {
        _1 = (object)(DBL_PTR(_i_26922)->dbl);
        DeRefDS(_i_26922);
        _i_26922 = _1;
    }
    // SubProg Scanner pc: 2750 op: STARTLINE (58)

    /** scanner.e:1871						is_int = TRUE*/
    // SubProg Scanner pc: 2752 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2754 op: ASSIGN (18)
    _is_int_26932 = _8TRUE_444;
    // SubProg Scanner pc: 2757 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2759 op: ELSE (23)
    goto L73; // [2759] 2596
    // SubProg Scanner pc: 2761 op: NOP1 (159)
    // SubProg Scanner pc: 2762 op: STARTLINE (58)

    /** scanner.e:1873						exit*/
    // SubProg Scanner pc: 2764 op: EXIT (61)
    goto L74; // [2764] 2772
    // SubProg Scanner pc: 2766 op: NOP1 (159)
    // SubProg Scanner pc: 2767 op: STARTLINE (58)

    /** scanner.e:1875				end while*/
    // SubProg Scanner pc: 2769 op: ENDWHILE (22)
    goto L73; // [2769] 2596
    // SubProg Scanner pc: 2771 op: NOP1 (159)
L74: // addr: 2772 pc: 2771 sub: 26919 op: 159
    // SubProg Scanner pc: 2772 op: STARTLINE (58)

    /** scanner.e:1877				if is_int = -1 then*/
    // SubProg Scanner pc: 2774 op: EQUALS_IFW_I (121)
    if (_is_int_26932 != -1)
    goto L77; // [2774] 2837
    // SubProg Scanner pc: 2778 op: STARTLINE (58)

    /** scanner.e:1878					if ch = '!' then*/
    // SubProg Scanner pc: 2780 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 33)
    goto L78; // [2780] 2826
    // SubProg Scanner pc: 2784 op: STARTLINE (58)

    /** scanner.e:1879						if line_number > 1 then*/
    // SubProg Scanner pc: 2786 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2788 op: GREATER_IFW (107)
    if (_34line_number_15189 <= 1)
    goto L79; // [2788] 2800
    // SubProg Scanner pc: 2792 op: STARTLINE (58)

    /** scanner.e:1880							CompileErr(161)*/
    // SubProg Scanner pc: 2794 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(161, _21936, 0);
    // SubProg Scanner pc: 2799 op: NOP1 (159)
L79: // addr: 2800 pc: 2799 sub: 26919 op: 159
    // SubProg Scanner pc: 2800 op: STARTLINE (58)

    /** scanner.e:1883						shebang = ThisLine*/
    // SubProg Scanner pc: 2802 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2804 op: ASSIGN (18)
    Ref(_49ThisLine_48709);
    DeRef(_61shebang_25187);
    _61shebang_25187 = _49ThisLine_48709;
    // SubProg Scanner pc: 2807 op: STARTLINE (58)

    /** scanner.e:1884						if start_include then*/
    // SubProg Scanner pc: 2809 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2811 op: IF (20)
    if (_61start_include_25182 == 0)
    {
        goto L7A; // [2811] 2819
    }
    else{
    }
    // SubProg Scanner pc: 2814 op: STARTLINE (58)

    /** scanner.e:1885							IncludePush()*/
    // SubProg Scanner pc: 2816 op: PROC (27)
    _61IncludePush();
    // SubProg Scanner pc: 2818 op: NOP1 (159)
L7A: // addr: 2819 pc: 2818 sub: 26919 op: 159
    // SubProg Scanner pc: 2819 op: STARTLINE (58)

    /** scanner.e:1887						read_line()*/
    // SubProg Scanner pc: 2821 op: PROC (27)
    _61read_line();
    // SubProg Scanner pc: 2823 op: ELSE (23)
    goto L1; // [2823] 10
    // SubProg Scanner pc: 2825 op: NOP1 (159)
L78: // addr: 2826 pc: 2825 sub: 26919 op: 159
    // SubProg Scanner pc: 2826 op: STARTLINE (58)

    /** scanner.e:1889						CompileErr(97)*/
    // SubProg Scanner pc: 2828 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(97, _21936, 0);
    // SubProg Scanner pc: 2833 op: NOP1 (159)
    // SubProg Scanner pc: 2834 op: ELSE (23)
    goto L1; // [2834] 10
    // SubProg Scanner pc: 2836 op: NOP1 (159)
L77: // addr: 2837 pc: 2836 sub: 26919 op: 159
    // SubProg Scanner pc: 2837 op: STARTLINE (58)

    /** scanner.e:1892					if i >= MAXINT/32 then*/
    // SubProg Scanner pc: 2839 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2841 op: DIVIDE (14)
    _15295 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    // SubProg Scanner pc: 2845 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _i_26922, _15295)){
        DeRef(_15295);
        _15295 = NOVALUE;
        goto L7B; // [2845] 3016
    }
    DeRef(_15295);
    _15295 = NOVALUE;
    // SubProg Scanner pc: 2849 op: STARTLINE (58)

    /** scanner.e:1893						d = i*/
    // SubProg Scanner pc: 2851 op: ASSIGN (18)
    DeRef(_d_26929);
    _d_26929 = _i_26922;
    // SubProg Scanner pc: 2854 op: STARTLINE (58)

    /** scanner.e:1894						is_int = FALSE*/
    // SubProg Scanner pc: 2856 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2858 op: ASSIGN (18)
    _is_int_26932 = _8FALSE_442;
    // SubProg Scanner pc: 2861 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2863 op: STARTLINE (58)

    /** scanner.e:1895						while TRUE do*/
    // SubProg Scanner pc: 2865 op: NOP2 (110)
    // SubProg Scanner pc: 2867 op: NOPWHILE (158)
L7C: // addr: 2868 pc: 2867 sub: 26919 op: 158
    // SubProg Scanner pc: 2868 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2870 op: WHILE (47)
    if (_8TRUE_444 == 0)
    {
        goto L7D; // [2870] 3015
    }
    else{
    }
    // SubProg Scanner pc: 2873 op: STARTLINE (58)

    /** scanner.e:1896							ch = getch()  -- eventually END_OF_FILE_CHAR or new-line*/
    // SubProg Scanner pc: 2875 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 2878 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 2880 op: STARTLINE (58)

    /** scanner.e:1897							if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 2882 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2884 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15298 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    // SubProg Scanner pc: 2888 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2890 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15298, -7)){
        _15298 = NOVALUE;
        goto L7E; // [2890] 2918
    }
    _15298 = NOVALUE;
    // SubProg Scanner pc: 2894 op: STARTLINE (58)

    /** scanner.e:1898								if ch != '_' then*/
    // SubProg Scanner pc: 2896 op: NOTEQ_IFW_I (122)
    if (_ch_26921 == 95)
    goto L7C; // [2896] 2868
    // SubProg Scanner pc: 2900 op: STARTLINE (58)

    /** scanner.e:1899									d = (d * 16) + ch - '0'*/
    // SubProg Scanner pc: 2902 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26929)) {
        if (_d_26929 == (short)_d_26929){
            _15301 = _d_26929 * 16;
        }
        else{
            _15301 = NewDouble(_d_26929 * (eudouble)16);
        }
    }
    else {
        _15301 = binary_op(MULTIPLY, _d_26929, 16);
    }
    // SubProg Scanner pc: 2906 op: PLUS (11)
    if (IS_ATOM_INT(_15301)) {
        _15302 = _15301 + _ch_26921;
        if ((object)((uintptr_t)_15302 + (uintptr_t)HIGH_BITS) >= 0){
            _15302 = NewDouble((eudouble)_15302);
        }
    }
    else {
        _15302 = binary_op(PLUS, _15301, _ch_26921);
    }
    DeRef(_15301);
    _15301 = NOVALUE;
    // SubProg Scanner pc: 2910 op: MINUS (10)
    DeRef(_d_26929);
    if (IS_ATOM_INT(_15302)) {
        _d_26929 = _15302 - 48;
        if ((object)((uintptr_t)_d_26929 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26929 = NewDouble((eudouble)_d_26929);
        }
    }
    else {
        _d_26929 = binary_op(MINUS, _15302, 48);
    }
    DeRef(_15302);
    _15302 = NOVALUE;
    // SubProg Scanner pc: 2914 op: NOP1 (159)
    // SubProg Scanner pc: 2915 op: ELSE (23)
    goto L7C; // [2915] 2868
    // SubProg Scanner pc: 2917 op: NOP1 (159)
L7E: // addr: 2918 pc: 2917 sub: 26919 op: 159
    // SubProg Scanner pc: 2918 op: STARTLINE (58)

    /** scanner.e:1901							elsif ch >= 'A' and ch <= 'F' then*/
    // SubProg Scanner pc: 2920 op: GREATEREQ (2)
    _15304 = (_ch_26921 >= 65);
    // SubProg Scanner pc: 2924 op: SC1_AND_IF (146)
    if (_15304 == 0) {
        goto L7F; // [2924] 2957
    }
    // SubProg Scanner pc: 2928 op: LESSEQ (5)
    _15306 = (_ch_26921 <= 70);
    // SubProg Scanner pc: 2932 op: NOP1 (159)
    // SubProg Scanner pc: 2933 op: IF (20)
    if (_15306 == 0)
    {
        DeRef(_15306);
        _15306 = NOVALUE;
        goto L7F; // [2933] 2957
    }
    else{
        DeRef(_15306);
        _15306 = NOVALUE;
    }
    // SubProg Scanner pc: 2936 op: STARTLINE (58)

    /** scanner.e:1902								d = (d * 16) + ch - ('A'- 10)*/
    // SubProg Scanner pc: 2938 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26929)) {
        if (_d_26929 == (short)_d_26929){
            _15307 = _d_26929 * 16;
        }
        else{
            _15307 = NewDouble(_d_26929 * (eudouble)16);
        }
    }
    else {
        _15307 = binary_op(MULTIPLY, _d_26929, 16);
    }
    // SubProg Scanner pc: 2942 op: PLUS (11)
    if (IS_ATOM_INT(_15307)) {
        _15308 = _15307 + _ch_26921;
        if ((object)((uintptr_t)_15308 + (uintptr_t)HIGH_BITS) >= 0){
            _15308 = NewDouble((eudouble)_15308);
        }
    }
    else {
        _15308 = binary_op(PLUS, _15307, _ch_26921);
    }
    DeRef(_15307);
    _15307 = NOVALUE;
    // SubProg Scanner pc: 2946 op: MINUS (10)
    _15309 = 55;
    // SubProg Scanner pc: 2950 op: MINUS (10)
    DeRef(_d_26929);
    if (IS_ATOM_INT(_15308)) {
        _d_26929 = _15308 - 55;
        if ((object)((uintptr_t)_d_26929 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26929 = NewDouble((eudouble)_d_26929);
        }
    }
    else {
        _d_26929 = binary_op(MINUS, _15308, 55);
    }
    DeRef(_15308);
    _15308 = NOVALUE;
    _15309 = NOVALUE;
    // SubProg Scanner pc: 2954 op: ELSE (23)
    goto L7C; // [2954] 2868
    // SubProg Scanner pc: 2956 op: NOP1 (159)
L7F: // addr: 2957 pc: 2956 sub: 26919 op: 159
    // SubProg Scanner pc: 2957 op: STARTLINE (58)

    /** scanner.e:1903							elsif ch >= 'a' and ch <= 'f' then*/
    // SubProg Scanner pc: 2959 op: GREATEREQ (2)
    _15311 = (_ch_26921 >= 97);
    // SubProg Scanner pc: 2963 op: SC1_AND_IF (146)
    if (_15311 == 0) {
        goto L80; // [2963] 2996
    }
    // SubProg Scanner pc: 2967 op: LESSEQ (5)
    _15313 = (_ch_26921 <= 102);
    // SubProg Scanner pc: 2971 op: NOP1 (159)
    // SubProg Scanner pc: 2972 op: IF (20)
    if (_15313 == 0)
    {
        DeRef(_15313);
        _15313 = NOVALUE;
        goto L80; // [2972] 2996
    }
    else{
        DeRef(_15313);
        _15313 = NOVALUE;
    }
    // SubProg Scanner pc: 2975 op: STARTLINE (58)

    /** scanner.e:1904								d = (d * 16) + ch - ('a'-10)*/
    // SubProg Scanner pc: 2977 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26929)) {
        if (_d_26929 == (short)_d_26929){
            _15314 = _d_26929 * 16;
        }
        else{
            _15314 = NewDouble(_d_26929 * (eudouble)16);
        }
    }
    else {
        _15314 = binary_op(MULTIPLY, _d_26929, 16);
    }
    // SubProg Scanner pc: 2981 op: PLUS (11)
    if (IS_ATOM_INT(_15314)) {
        _15315 = _15314 + _ch_26921;
        if ((object)((uintptr_t)_15315 + (uintptr_t)HIGH_BITS) >= 0){
            _15315 = NewDouble((eudouble)_15315);
        }
    }
    else {
        _15315 = binary_op(PLUS, _15314, _ch_26921);
    }
    DeRef(_15314);
    _15314 = NOVALUE;
    // SubProg Scanner pc: 2985 op: MINUS (10)
    _15316 = 87;
    // SubProg Scanner pc: 2989 op: MINUS (10)
    DeRef(_d_26929);
    if (IS_ATOM_INT(_15315)) {
        _d_26929 = _15315 - 87;
        if ((object)((uintptr_t)_d_26929 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26929 = NewDouble((eudouble)_d_26929);
        }
    }
    else {
        _d_26929 = binary_op(MINUS, _15315, 87);
    }
    DeRef(_15315);
    _15315 = NOVALUE;
    _15316 = NOVALUE;
    // SubProg Scanner pc: 2993 op: ELSE (23)
    goto L7C; // [2993] 2868
    // SubProg Scanner pc: 2995 op: NOP1 (159)
L80: // addr: 2996 pc: 2995 sub: 26919 op: 159
    // SubProg Scanner pc: 2996 op: STARTLINE (58)

    /** scanner.e:1905							elsif ch = '_' then*/
    // SubProg Scanner pc: 2998 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 95)
    goto L7D; // [2998] 3015
    // SubProg Scanner pc: 3002 op: ELSE (23)
    goto L7C; // [3002] 2868
    // SubProg Scanner pc: 3004 op: NOP1 (159)
    // SubProg Scanner pc: 3005 op: STARTLINE (58)

    /** scanner.e:1908								exit*/
    // SubProg Scanner pc: 3007 op: EXIT (61)
    goto L7D; // [3007] 3015
    // SubProg Scanner pc: 3009 op: NOP1 (159)
    // SubProg Scanner pc: 3010 op: STARTLINE (58)

    /** scanner.e:1910						end while*/
    // SubProg Scanner pc: 3012 op: ENDWHILE (22)
    goto L7C; // [3012] 2868
    // SubProg Scanner pc: 3014 op: NOP1 (159)
L7D: // addr: 3015 pc: 3014 sub: 26919 op: 159
    // SubProg Scanner pc: 3015 op: NOP1 (159)
L7B: // addr: 3016 pc: 3015 sub: 26919 op: 159
    // SubProg Scanner pc: 3016 op: STARTLINE (58)

    /** scanner.e:1913					ungetch()*/
    // SubProg Scanner pc: 3018 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3020 op: STARTLINE (58)

    /** scanner.e:1914					if is_int and is_integer(i) then*/
    // SubProg Scanner pc: 3022 op: SC1_AND_IF (146)
    if (_is_int_26932 == 0) {
        goto L81; // [3022] 3053
    }
    // SubProg Scanner pc: 3026 op: PROC (27)
    _15320 = _34is_integer(_i_26922);
    // SubProg Scanner pc: 3030 op: NOP1 (159)
    // SubProg Scanner pc: 3031 op: IF (20)
    if (_15320 == 0) {
        DeRef(_15320);
        _15320 = NOVALUE;
        goto L81; // [3031] 3053
    }
    else {
        if (!IS_ATOM_INT(_15320) && DBL_PTR(_15320)->dbl == 0.0){
            DeRef(_15320);
            _15320 = NOVALUE;
            goto L81; // [3031] 3053
        }
        DeRef(_15320);
        _15320 = NOVALUE;
    }
    DeRef(_15320);
    _15320 = NOVALUE;
    // SubProg Scanner pc: 3034 op: STARTLINE (58)

    /** scanner.e:1915						return {ATOM, NewIntSym(i)}*/
    // SubProg Scanner pc: 3036 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3038 op: PROC (27)
    _15321 = _53NewIntSym(_i_26922);
    // SubProg Scanner pc: 3042 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15321;
    _15322 = MAKE_SEQ(_1);
    _15321 = NOVALUE;
    // SubProg Scanner pc: 3046 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15322;
    // SubProg Scanner pc: 3050 op: ELSE (23)
    goto L1; // [3050] 10
    // SubProg Scanner pc: 3052 op: NOP1 (159)
L81: // addr: 3053 pc: 3052 sub: 26919 op: 159
    // SubProg Scanner pc: 3053 op: STARTLINE (58)

    /** scanner.e:1917						if d <= MAXINT_DBL then            -- d is always >= 0*/
    // SubProg Scanner pc: 3055 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 3057 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3059 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _d_26929, 1073741823)){
        goto L82; // [3059] 3082
    }
    // SubProg Scanner pc: 3063 op: STARTLINE (58)

    /** scanner.e:1918							return {ATOM, NewIntSym(d)}*/
    // SubProg Scanner pc: 3065 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3067 op: PROC (27)
    Ref(_d_26929);
    _15324 = _53NewIntSym(_d_26929);
    // SubProg Scanner pc: 3071 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15324;
    _15325 = MAKE_SEQ(_1);
    _15324 = NOVALUE;
    // SubProg Scanner pc: 3075 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15325;
    // SubProg Scanner pc: 3079 op: ELSE (23)
    goto L1; // [3079] 10
    // SubProg Scanner pc: 3081 op: NOP1 (159)
L82: // addr: 3082 pc: 3081 sub: 26919 op: 159
    // SubProg Scanner pc: 3082 op: STARTLINE (58)

    /** scanner.e:1920							return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 3084 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3086 op: PROC (27)
    Ref(_d_26929);
    _15326 = _53NewDoubleSym(_d_26929);
    // SubProg Scanner pc: 3090 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15326;
    _15327 = MAKE_SEQ(_1);
    _15326 = NOVALUE;
    // SubProg Scanner pc: 3094 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15327;
    // SubProg Scanner pc: 3098 op: NOP1 (159)
    // SubProg Scanner pc: 3099 op: NOP1 (159)
    // SubProg Scanner pc: 3100 op: NOP1 (159)
    // SubProg Scanner pc: 3101 op: ELSE (23)
    goto L1; // [3101] 10
    // SubProg Scanner pc: 3103 op: NOP1 (159)
L72: // addr: 3104 pc: 3103 sub: 26919 op: 159
    // SubProg Scanner pc: 3104 op: STARTLINE (58)

    /** scanner.e:1925			elsif class = res:MULTIPLY then*/
    // SubProg Scanner pc: 3106 op: EQUALS_IFW_I (121)
    if (_class_26933 != 13)
    goto L83; // [3106] 3156
    // SubProg Scanner pc: 3110 op: STARTLINE (58)

    /** scanner.e:1926				ch = getch()*/
    // SubProg Scanner pc: 3112 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 3115 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 3117 op: STARTLINE (58)

    /** scanner.e:1927				if ch = '=' then*/
    // SubProg Scanner pc: 3119 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 61)
    goto L84; // [3119] 3138
    // SubProg Scanner pc: 3123 op: STARTLINE (58)

    /** scanner.e:1928					return {MULTIPLY_EQUALS, 0}*/
    // SubProg Scanner pc: 3125 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3127 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 517;
    ((intptr_t *)_2)[2] = 0;
    _15331 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3131 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15331;
    // SubProg Scanner pc: 3135 op: ELSE (23)
    goto L1; // [3135] 10
    // SubProg Scanner pc: 3137 op: NOP1 (159)
L84: // addr: 3138 pc: 3137 sub: 26919 op: 159
    // SubProg Scanner pc: 3138 op: STARTLINE (58)

    /** scanner.e:1930					ungetch()*/
    // SubProg Scanner pc: 3140 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3142 op: STARTLINE (58)

    /** scanner.e:1931					return {res:MULTIPLY, 0}*/
    // SubProg Scanner pc: 3144 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 13;
    ((intptr_t *)_2)[2] = 0;
    _15332 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3148 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15332;
    // SubProg Scanner pc: 3152 op: NOP1 (159)
    // SubProg Scanner pc: 3153 op: ELSE (23)
    goto L1; // [3153] 10
    // SubProg Scanner pc: 3155 op: NOP1 (159)
L83: // addr: 3156 pc: 3155 sub: 26919 op: 159
    // SubProg Scanner pc: 3156 op: STARTLINE (58)

    /** scanner.e:1934			elsif class = res:DIVIDE then*/
    // SubProg Scanner pc: 3158 op: EQUALS_IFW_I (121)
    if (_class_26933 != 14)
    goto L85; // [3158] 3360
    // SubProg Scanner pc: 3162 op: STARTLINE (58)

    /** scanner.e:1935				ch = getch()*/
    // SubProg Scanner pc: 3164 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 3167 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 3169 op: STARTLINE (58)

    /** scanner.e:1936				if ch = '=' then*/
    // SubProg Scanner pc: 3171 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 61)
    goto L86; // [3171] 3190
    // SubProg Scanner pc: 3175 op: STARTLINE (58)

    /** scanner.e:1937					return {DIVIDE_EQUALS, 0}*/
    // SubProg Scanner pc: 3177 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3179 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 518;
    ((intptr_t *)_2)[2] = 0;
    _15336 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3183 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15336;
    // SubProg Scanner pc: 3187 op: ELSE (23)
    goto L1; // [3187] 10
    // SubProg Scanner pc: 3189 op: NOP1 (159)
L86: // addr: 3190 pc: 3189 sub: 26919 op: 159
    // SubProg Scanner pc: 3190 op: STARTLINE (58)

    /** scanner.e:1938				elsif ch = '*' then*/
    // SubProg Scanner pc: 3192 op: EQUALS_IFW_I (121)
    if (_ch_26921 != 42)
    goto L87; // [3192] 3342
    // SubProg Scanner pc: 3196 op: STARTLINE (58)

    /** scanner.e:1940					cline = line_number*/
    // SubProg Scanner pc: 3198 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3200 op: ASSIGN (18)
    _cline_26926 = _34line_number_15189;
    // SubProg Scanner pc: 3203 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 3205 op: STARTLINE (58)

    /** scanner.e:1941					integer cnest = 1*/
    // SubProg Scanner pc: 3207 op: ASSIGN_I (113)
    _cnest_27581 = 1;
    // SubProg Scanner pc: 3210 op: STARTLINE (58)

    /** scanner.e:1942					while cnest > 0 do*/
    // SubProg Scanner pc: 3212 op: NOP2 (110)
    // SubProg Scanner pc: 3214 op: NOPWHILE (158)
L88: // addr: 3215 pc: 3214 sub: 26919 op: 158
    // SubProg Scanner pc: 3215 op: GREATER_IFW_I (124)
    if (_cnest_27581 <= 0)
    goto L89; // [3215] 3323
    // SubProg Scanner pc: 3219 op: STARTLINE (58)

    /** scanner.e:1943						ch = getch()*/
    // SubProg Scanner pc: 3221 op: PROC (27)
    _ch_26921 = _61getch();
    // SubProg Scanner pc: 3224 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }
    // SubProg Scanner pc: 3226 op: STARTLINE (58)

    /** scanner.e:1944						switch ch do*/
    // SubProg Scanner pc: 3228 op: SWITCH_I (193)
    _0 = _ch_26921;
    switch ( _0 ){ 
        // SubProg Scanner pc: 3233 op: STARTLINE (58)

        /** scanner.e:1945							case  END_OF_FILE_CHAR then*/
        // SubProg Scanner pc: 3235 op: CASE (186)
        case 26:
        // SubProg Scanner pc: 3237 op: STARTLINE (58)

        /** scanner.e:1946								exit*/
        // SubProg Scanner pc: 3239 op: EXIT (61)
        goto L89; // [3239] 3323
        // SubProg Scanner pc: 3241 op: ELSE (23)
        goto L88; // [3241] 3215
        // SubProg Scanner pc: 3243 op: STARTLINE (58)

        /** scanner.e:1948							case '\n' then*/
        // SubProg Scanner pc: 3245 op: CASE (186)
        case 10:
        // SubProg Scanner pc: 3247 op: STARTLINE (58)

        /** scanner.e:1949								read_line()*/
        // SubProg Scanner pc: 3249 op: PROC (27)
        _61read_line();
        // SubProg Scanner pc: 3251 op: ELSE (23)
        goto L88; // [3251] 3215
        // SubProg Scanner pc: 3253 op: STARTLINE (58)

        /** scanner.e:1951							case '*' then*/
        // SubProg Scanner pc: 3255 op: CASE (186)
        case 42:
        // SubProg Scanner pc: 3257 op: STARTLINE (58)

        /** scanner.e:1952								ch = getch()*/
        // SubProg Scanner pc: 3259 op: PROC (27)
        _ch_26921 = _61getch();
        // SubProg Scanner pc: 3262 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ch_26921)) {
            _1 = (object)(DBL_PTR(_ch_26921)->dbl);
            DeRefDS(_ch_26921);
            _ch_26921 = _1;
        }
        // SubProg Scanner pc: 3264 op: STARTLINE (58)

        /** scanner.e:1953								if ch = '/' then*/
        // SubProg Scanner pc: 3266 op: EQUALS_IFW_I (121)
        if (_ch_26921 != 47)
        goto L8A; // [3266] 3279
        // SubProg Scanner pc: 3270 op: STARTLINE (58)

        /** scanner.e:1954									cnest -= 1*/
        // SubProg Scanner pc: 3272 op: MINUS_I (116)
        _cnest_27581 = _cnest_27581 - 1;
        // SubProg Scanner pc: 3276 op: ELSE (23)
        goto L88; // [3276] 3215
        // SubProg Scanner pc: 3278 op: NOP1 (159)
L8A: // addr: 3279 pc: 3278 sub: 26919 op: 159
        // SubProg Scanner pc: 3279 op: STARTLINE (58)

        /** scanner.e:1956									ungetch()*/
        // SubProg Scanner pc: 3281 op: PROC (27)
        _61ungetch();
        // SubProg Scanner pc: 3283 op: NOP1 (159)
        // SubProg Scanner pc: 3284 op: ELSE (23)
        goto L88; // [3284] 3215
        // SubProg Scanner pc: 3286 op: STARTLINE (58)

        /** scanner.e:1959							case '/' then*/
        // SubProg Scanner pc: 3288 op: CASE (186)
        case 47:
        // SubProg Scanner pc: 3290 op: STARTLINE (58)

        /** scanner.e:1960								ch = getch()*/
        // SubProg Scanner pc: 3292 op: PROC (27)
        _ch_26921 = _61getch();
        // SubProg Scanner pc: 3295 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ch_26921)) {
            _1 = (object)(DBL_PTR(_ch_26921)->dbl);
            DeRefDS(_ch_26921);
            _ch_26921 = _1;
        }
        // SubProg Scanner pc: 3297 op: STARTLINE (58)

        /** scanner.e:1961								if ch = '*' then*/
        // SubProg Scanner pc: 3299 op: EQUALS_IFW_I (121)
        if (_ch_26921 != 42)
        goto L8B; // [3299] 3312
        // SubProg Scanner pc: 3303 op: STARTLINE (58)

        /** scanner.e:1962									cnest += 1*/
        // SubProg Scanner pc: 3305 op: PLUS1_I (117)
        _cnest_27581 = _cnest_27581 + 1;
        // SubProg Scanner pc: 3309 op: ELSE (23)
        goto L8C; // [3309] 3317
        // SubProg Scanner pc: 3311 op: NOP1 (159)
L8B: // addr: 3312 pc: 3311 sub: 26919 op: 159
        // SubProg Scanner pc: 3312 op: STARTLINE (58)

        /** scanner.e:1964									ungetch()*/
        // SubProg Scanner pc: 3314 op: PROC (27)
        _61ungetch();
        // SubProg Scanner pc: 3316 op: NOP1 (159)
L8C: // addr: 3317 pc: 3316 sub: 26919 op: 159
        // SubProg Scanner pc: 3317 op: NOPSWITCH (187)
    ;}    // SubProg Scanner pc: 3318 op: STARTLINE (58)

    /** scanner.e:1968					end while*/
    // SubProg Scanner pc: 3320 op: ENDWHILE (22)
    goto L88; // [3320] 3215
    // SubProg Scanner pc: 3322 op: NOP1 (159)
L89: // addr: 3323 pc: 3322 sub: 26919 op: 159
    // SubProg Scanner pc: 3323 op: STARTLINE (58)

    /** scanner.e:1970					if cnest > 0 then*/
    // SubProg Scanner pc: 3325 op: GREATER_IFW_I (124)
    if (_cnest_27581 <= 0)
    goto L8D; // [3325] 3337
    // SubProg Scanner pc: 3329 op: STARTLINE (58)

    /** scanner.e:1971						CompileErr(42, cline)*/
    // SubProg Scanner pc: 3331 op: PROC (27)
    _49CompileErr(42, _cline_26926, 0);
    // SubProg Scanner pc: 3336 op: NOP1 (159)
L8D: // addr: 3337 pc: 3336 sub: 26919 op: 159
    // SubProg Scanner pc: 3337 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cnest_27581
    // SubProg Scanner pc: 3339 op: ELSE (23)
    goto L1; // [3339] 10
    // SubProg Scanner pc: 3341 op: NOP1 (159)
L87: // addr: 3342 pc: 3341 sub: 26919 op: 159
    // SubProg Scanner pc: 3342 op: STARTLINE (58)

    /** scanner.e:1974					ungetch()*/
    // SubProg Scanner pc: 3344 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3346 op: STARTLINE (58)

    /** scanner.e:1975					return {res:DIVIDE, 0}*/
    // SubProg Scanner pc: 3348 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 14;
    ((intptr_t *)_2)[2] = 0;
    _15349 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3352 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15349;
    // SubProg Scanner pc: 3356 op: NOP1 (159)
    // SubProg Scanner pc: 3357 op: ELSE (23)
    goto L1; // [3357] 10
    // SubProg Scanner pc: 3359 op: NOP1 (159)
L85: // addr: 3360 pc: 3359 sub: 26919 op: 159
    // SubProg Scanner pc: 3360 op: STARTLINE (58)

    /** scanner.e:1977			elsif class = SINGLE_QUOTE then*/
    // SubProg Scanner pc: 3362 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3364 op: EQUALS_IFW (104)
    if (_class_26933 != -5)
    goto L8E; // [3364] 3506
    // SubProg Scanner pc: 3368 op: STARTLINE (58)

    /** scanner.e:1978				atom ach = getch()*/
    // SubProg Scanner pc: 3370 op: PROC (27)
    _0 = _ach_27610;
    _ach_27610 = _61getch();
    DeRef(_0);
    // SubProg Scanner pc: 3373 op: STARTLINE (58)

    /** scanner.e:1979				if ach = '\\' then*/
    // SubProg Scanner pc: 3375 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27610, 92)){
        goto L8F; // [3375] 3388
    }
    // SubProg Scanner pc: 3379 op: STARTLINE (58)

    /** scanner.e:1980					ach = EscapeChar('\'')*/
    // SubProg Scanner pc: 3381 op: PROC (27)
    _0 = _ach_27610;
    _ach_27610 = _61EscapeChar(39);
    DeRef(_0);
    // SubProg Scanner pc: 3385 op: ELSE (23)
    goto L90; // [3385] 3439
    // SubProg Scanner pc: 3387 op: NOP1 (159)
L8F: // addr: 3388 pc: 3387 sub: 26919 op: 159
    // SubProg Scanner pc: 3388 op: STARTLINE (58)

    /** scanner.e:1981				elsif ach = '\t' then*/
    // SubProg Scanner pc: 3390 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27610, 9)){
        goto L91; // [3390] 3404
    }
    // SubProg Scanner pc: 3394 op: STARTLINE (58)

    /** scanner.e:1982					CompileErr(145)*/
    // SubProg Scanner pc: 3396 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(145, _21936, 0);
    // SubProg Scanner pc: 3401 op: ELSE (23)
    goto L90; // [3401] 3439
    // SubProg Scanner pc: 3403 op: NOP1 (159)
L91: // addr: 3404 pc: 3403 sub: 26919 op: 159
    // SubProg Scanner pc: 3404 op: STARTLINE (58)

    /** scanner.e:1983				elsif ach = '\'' then*/
    // SubProg Scanner pc: 3406 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27610, 39)){
        goto L92; // [3406] 3420
    }
    // SubProg Scanner pc: 3410 op: STARTLINE (58)

    /** scanner.e:1984					CompileErr(137)*/
    // SubProg Scanner pc: 3412 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(137, _21936, 0);
    // SubProg Scanner pc: 3417 op: ELSE (23)
    goto L90; // [3417] 3439
    // SubProg Scanner pc: 3419 op: NOP1 (159)
L92: // addr: 3420 pc: 3419 sub: 26919 op: 159
    // SubProg Scanner pc: 3420 op: STARTLINE (58)

    /** scanner.e:1985				elsif ach = '\n' then*/
    // SubProg Scanner pc: 3422 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27610, 10)){
        goto L93; // [3422] 3438
    }
    // SubProg Scanner pc: 3426 op: STARTLINE (58)

    /** scanner.e:1986					CompileErr(68, {"character", "end of line"})*/
    // SubProg Scanner pc: 3428 op: RIGHT_BRACE_2 (85)
    RefDS(_15359);
    RefDS(_15358);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15358;
    ((intptr_t *)_2)[2] = _15359;
    _15360 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3432 op: PROC (27)
    _49CompileErr(68, _15360, 0);
    _15360 = NOVALUE;
    // SubProg Scanner pc: 3437 op: NOP1 (159)
L93: // addr: 3438 pc: 3437 sub: 26919 op: 159
    // SubProg Scanner pc: 3438 op: NOP1 (159)
L90: // addr: 3439 pc: 3438 sub: 26919 op: 159
    // SubProg Scanner pc: 3439 op: STARTLINE (58)

    /** scanner.e:1988				if getch() != '\'' then*/
    // SubProg Scanner pc: 3441 op: PROC (27)
    _15361 = _61getch();
    // SubProg Scanner pc: 3444 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _15361, 39)){
        DeRef(_15361);
        _15361 = NOVALUE;
        goto L94; // [3444] 3456
    }
    DeRef(_15361);
    _15361 = NOVALUE;
    // SubProg Scanner pc: 3448 op: STARTLINE (58)

    /** scanner.e:1989					CompileErr(56)*/
    // SubProg Scanner pc: 3450 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(56, _21936, 0);
    // SubProg Scanner pc: 3455 op: NOP1 (159)
L94: // addr: 3456 pc: 3455 sub: 26919 op: 159
    // SubProg Scanner pc: 3456 op: STARTLINE (58)

    /** scanner.e:1991				if is_integer(ach) then*/
    // SubProg Scanner pc: 3458 op: PROC (27)
    Ref(_ach_27610);
    _15363 = _34is_integer(_ach_27610);
    // SubProg Scanner pc: 3462 op: IF (20)
    if (_15363 == 0) {
        DeRef(_15363);
        _15363 = NOVALUE;
        goto L95; // [3462] 3484
    }
    else {
        if (!IS_ATOM_INT(_15363) && DBL_PTR(_15363)->dbl == 0.0){
            DeRef(_15363);
            _15363 = NOVALUE;
            goto L95; // [3462] 3484
        }
        DeRef(_15363);
        _15363 = NOVALUE;
    }
    DeRef(_15363);
    _15363 = NOVALUE;
    // SubProg Scanner pc: 3465 op: STARTLINE (58)

    /** scanner.e:1992					return {ATOM, NewIntSym(ach)}*/
    // SubProg Scanner pc: 3467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3469 op: PROC (27)
    Ref(_ach_27610);
    _15364 = _53NewIntSym(_ach_27610);
    // SubProg Scanner pc: 3473 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15364;
    _15365 = MAKE_SEQ(_1);
    _15364 = NOVALUE;
    // SubProg Scanner pc: 3477 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ach_27610
    DeRef(_ach_27610);

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15365;
    // SubProg Scanner pc: 3481 op: ELSE (23)
    goto L96; // [3481] 3501
    // SubProg Scanner pc: 3483 op: NOP1 (159)
L95: // addr: 3484 pc: 3483 sub: 26919 op: 159
    // SubProg Scanner pc: 3484 op: STARTLINE (58)

    /** scanner.e:1994					return {ATOM, NewDoubleSym(ach)}*/
    // SubProg Scanner pc: 3486 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3488 op: PROC (27)
    Ref(_ach_27610);
    _15366 = _53NewDoubleSym(_ach_27610);
    // SubProg Scanner pc: 3492 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15366;
    _15367 = MAKE_SEQ(_1);
    _15366 = NOVALUE;
    // SubProg Scanner pc: 3496 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ach_27610
    DeRef(_ach_27610);

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15367;
    // SubProg Scanner pc: 3500 op: NOP1 (159)
L96: // addr: 3501 pc: 3500 sub: 26919 op: 159
    // SubProg Scanner pc: 3501 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ach_27610
    DeRef(_ach_27610);
    _ach_27610 = NOVALUE;
    // SubProg Scanner pc: 3503 op: ELSE (23)
    goto L1; // [3503] 10
    // SubProg Scanner pc: 3505 op: NOP1 (159)
L8E: // addr: 3506 pc: 3505 sub: 26919 op: 159
    // SubProg Scanner pc: 3506 op: STARTLINE (58)

    /** scanner.e:1997			elsif class = LESS then*/
    // SubProg Scanner pc: 3508 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3510 op: EQUALS_IFW (104)
    if (_class_26933 != 1)
    goto L97; // [3510] 3558
    // SubProg Scanner pc: 3514 op: STARTLINE (58)

    /** scanner.e:1998				if getch() = '=' then*/
    // SubProg Scanner pc: 3516 op: PROC (27)
    _15369 = _61getch();
    // SubProg Scanner pc: 3519 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15369, 61)){
        DeRef(_15369);
        _15369 = NOVALUE;
        goto L98; // [3519] 3538
    }
    DeRef(_15369);
    _15369 = NOVALUE;
    // SubProg Scanner pc: 3523 op: STARTLINE (58)

    /** scanner.e:1999					return {LESSEQ, 0}*/
    // SubProg Scanner pc: 3525 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3527 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 5;
    ((intptr_t *)_2)[2] = 0;
    _15371 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3531 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15090 = NOVALUE;
    return _15371;
    // SubProg Scanner pc: 3535 op: ELSE (23)
    goto L1; // [3535] 10
    // SubProg Scanner pc: 3537 op: NOP1 (159)
L98: // addr: 3538 pc: 3537 sub: 26919 op: 159
    // SubProg Scanner pc: 3538 op: STARTLINE (58)

    /** scanner.e:2001					ungetch()*/
    // SubProg Scanner pc: 3540 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3542 op: STARTLINE (58)

    /** scanner.e:2002					return {LESS, 0}*/
    // SubProg Scanner pc: 3544 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3546 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _15372 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3550 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15372;
    // SubProg Scanner pc: 3554 op: NOP1 (159)
    // SubProg Scanner pc: 3555 op: ELSE (23)
    goto L1; // [3555] 10
    // SubProg Scanner pc: 3557 op: NOP1 (159)
L97: // addr: 3558 pc: 3557 sub: 26919 op: 159
    // SubProg Scanner pc: 3558 op: STARTLINE (58)

    /** scanner.e:2005			elsif class = GREATER then*/
    // SubProg Scanner pc: 3560 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3562 op: EQUALS_IFW (104)
    if (_class_26933 != 6)
    goto L99; // [3562] 3610
    // SubProg Scanner pc: 3566 op: STARTLINE (58)

    /** scanner.e:2006				if getch() = '=' then*/
    // SubProg Scanner pc: 3568 op: PROC (27)
    _15374 = _61getch();
    // SubProg Scanner pc: 3571 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15374, 61)){
        DeRef(_15374);
        _15374 = NOVALUE;
        goto L9A; // [3571] 3590
    }
    DeRef(_15374);
    _15374 = NOVALUE;
    // SubProg Scanner pc: 3575 op: STARTLINE (58)

    /** scanner.e:2007					return {GREATEREQ, 0}*/
    // SubProg Scanner pc: 3577 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3579 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = 0;
    _15376 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3583 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    DeRef(_15372);
    _15372 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15376;
    // SubProg Scanner pc: 3587 op: ELSE (23)
    goto L1; // [3587] 10
    // SubProg Scanner pc: 3589 op: NOP1 (159)
L9A: // addr: 3590 pc: 3589 sub: 26919 op: 159
    // SubProg Scanner pc: 3590 op: STARTLINE (58)

    /** scanner.e:2009					ungetch()*/
    // SubProg Scanner pc: 3592 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3594 op: STARTLINE (58)

    /** scanner.e:2010					return {GREATER, 0}*/
    // SubProg Scanner pc: 3596 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3598 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 6;
    ((intptr_t *)_2)[2] = 0;
    _15377 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3602 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    DeRef(_15372);
    _15372 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15377;
    // SubProg Scanner pc: 3606 op: NOP1 (159)
    // SubProg Scanner pc: 3607 op: ELSE (23)
    goto L1; // [3607] 10
    // SubProg Scanner pc: 3609 op: NOP1 (159)
L99: // addr: 3610 pc: 3609 sub: 26919 op: 159
    // SubProg Scanner pc: 3610 op: STARTLINE (58)

    /** scanner.e:2013			elsif class = BANG then*/
    // SubProg Scanner pc: 3612 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3614 op: EQUALS_IFW (104)
    if (_class_26933 != -1)
    goto L9B; // [3614] 3662
    // SubProg Scanner pc: 3618 op: STARTLINE (58)

    /** scanner.e:2014				if getch() = '=' then*/
    // SubProg Scanner pc: 3620 op: PROC (27)
    _15379 = _61getch();
    // SubProg Scanner pc: 3623 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15379, 61)){
        DeRef(_15379);
        _15379 = NOVALUE;
        goto L9C; // [3623] 3642
    }
    DeRef(_15379);
    _15379 = NOVALUE;
    // SubProg Scanner pc: 3627 op: STARTLINE (58)

    /** scanner.e:2015					return {NOTEQ, 0}*/
    // SubProg Scanner pc: 3629 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3631 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = 0;
    _15381 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3635 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15377);
    _15377 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    DeRef(_15372);
    _15372 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15381;
    // SubProg Scanner pc: 3639 op: ELSE (23)
    goto L1; // [3639] 10
    // SubProg Scanner pc: 3641 op: NOP1 (159)
L9C: // addr: 3642 pc: 3641 sub: 26919 op: 159
    // SubProg Scanner pc: 3642 op: STARTLINE (58)

    /** scanner.e:2017					ungetch()*/
    // SubProg Scanner pc: 3644 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3646 op: STARTLINE (58)

    /** scanner.e:2018					return {BANG, 0}*/
    // SubProg Scanner pc: 3648 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3650 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _15382 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3654 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15377);
    _15377 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    DeRef(_15372);
    _15372 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15381);
    _15381 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15382;
    // SubProg Scanner pc: 3658 op: NOP1 (159)
    // SubProg Scanner pc: 3659 op: ELSE (23)
    goto L1; // [3659] 10
    // SubProg Scanner pc: 3661 op: NOP1 (159)
L9B: // addr: 3662 pc: 3661 sub: 26919 op: 159
    // SubProg Scanner pc: 3662 op: STARTLINE (58)

    /** scanner.e:2021			elsif class = KEYWORD then*/
    // SubProg Scanner pc: 3664 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3666 op: EQUALS_IFW (104)
    if (_class_26933 != -10)
    goto L9D; // [3666] 3699
    // SubProg Scanner pc: 3670 op: STARTLINE (58)

    /** scanner.e:2022				return {keylist[ch - KEYWORD_BASE][K_TOKEN], 0}*/
    // SubProg Scanner pc: 3672 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3674 op: MINUS (10)
    _15384 = _ch_26921 - 128;
    // SubProg Scanner pc: 3678 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_62keylist_22751);
    _15385 = (object)*(((s1_ptr)_2)->base + _15384);
    // SubProg Scanner pc: 3682 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3684 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15385);
    _15386 = (object)*(((s1_ptr)_2)->base + 3);
    _15385 = NOVALUE;
    // SubProg Scanner pc: 3688 op: RIGHT_BRACE_2 (85)
    Ref(_15386);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15386;
    ((intptr_t *)_2)[2] = 0;
    _15387 = MAKE_SEQ(_1);
    _15386 = NOVALUE;
    // SubProg Scanner pc: 3692 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15377);
    _15377 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    DeRef(_15372);
    _15372 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15381);
    _15381 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    _15384 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15382);
    _15382 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15387;
    // SubProg Scanner pc: 3696 op: ELSE (23)
    goto L1; // [3696] 10
    // SubProg Scanner pc: 3698 op: NOP1 (159)
L9D: // addr: 3699 pc: 3698 sub: 26919 op: 159
    // SubProg Scanner pc: 3699 op: STARTLINE (58)

    /** scanner.e:2024			elsif class = BUILTIN then*/
    // SubProg Scanner pc: 3701 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3703 op: EQUALS_IFW (104)
    if (_class_26933 != -9)
    goto L9E; // [3703] 3756
    // SubProg Scanner pc: 3707 op: STARTLINE (58)

    /** scanner.e:2025				name = keylist[ch - BUILTIN_BASE + NUM_KEYWORDS][K_NAME]*/
    // SubProg Scanner pc: 3709 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3711 op: MINUS (10)
    _15389 = _ch_26921 - 170;
    if ((object)((uintptr_t)_15389 +(uintptr_t) HIGH_BITS) >= 0){
        _15389 = NewDouble((eudouble)_15389);
    }
    // SubProg Scanner pc: 3715 op: PLUS (11)
    if (IS_ATOM_INT(_15389)) {
        _15390 = _15389 + 24;
    }
    else {
        _15390 = NewDouble(DBL_PTR(_15389)->dbl + (eudouble)24);
    }
    DeRef(_15389);
    _15389 = NOVALUE;
    // SubProg Scanner pc: 3719 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_62keylist_22751);
    if (!IS_ATOM_INT(_15390)){
        _15391 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15390)->dbl));
    }
    else{
        _15391 = (object)*(((s1_ptr)_2)->base + _15390);
    }
    // SubProg Scanner pc: 3723 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3725 op: RHS_SUBS_CHECK (92)
    DeRef(_name_26934);
    _2 = (object)SEQ_PTR(_15391);
    _name_26934 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_name_26934);
    _15391 = NOVALUE;
    // SubProg Scanner pc: 3729 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 3731 op: STARTLINE (58)

    /** scanner.e:2026				return keyfind(name, -1)*/
    // SubProg Scanner pc: 3733 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3735 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 3737 op: PROC (27)
    RefDS(_name_26934);
    _31710 = _53hashfn(_name_26934);
    // SubProg Scanner pc: 3741 op: PROC (27)
    RefDS(_name_26934);
    _15393 = _53keyfind(_name_26934, -1, _34current_file_no_15188, 0, _31710);
    _31710 = NOVALUE;
    // SubProg Scanner pc: 3749 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRefDS(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15387);
    _15387 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15377);
    _15377 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    DeRef(_15372);
    _15372 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15381);
    _15381 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15382);
    _15382 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15393;
    // SubProg Scanner pc: 3753 op: ELSE (23)
    goto L1; // [3753] 10
    // SubProg Scanner pc: 3755 op: NOP1 (159)
L9E: // addr: 3756 pc: 3755 sub: 26919 op: 159
    // SubProg Scanner pc: 3756 op: STARTLINE (58)

    /** scanner.e:2028			elsif class = BACK_QUOTE then*/
    // SubProg Scanner pc: 3758 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3760 op: EQUALS_IFW (104)
    if (_class_26933 != -12)
    goto L9F; // [3760] 3777
    // SubProg Scanner pc: 3764 op: STARTLINE (58)

    /** scanner.e:2029				return ExtendedString( '`' )*/
    // SubProg Scanner pc: 3766 op: PROC (27)
    _15395 = _61ExtendedString(96);
    // SubProg Scanner pc: 3770 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26921

// block var i_26922

// block var sp_26923

// block var prev_Nne_26924

// block var pch_26925

// block var cline_26926

// block var yytext_26927
    DeRef(_yytext_26927);

// block var namespaces_26928
    DeRef(_namespaces_26928);

// block var d_26929
    DeRef(_d_26929);

// block var tok_26931
    DeRef(_tok_26931);

// block var is_int_26932

// block var class_26933

// block var name_26934
    DeRef(_name_26934);
    DeRef(_15217);
    _15217 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15079 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15261);
    _15261 = NOVALUE;
    DeRef(_15266);
    _15266 = NOVALUE;
    DeRef(_15387);
    _15387 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15038);
    _15038 = NOVALUE;
    DeRef(_15145);
    _15145 = NOVALUE;
    DeRef(_15285);
    _15285 = NOVALUE;
    DeRef(_15262);
    _15262 = NOVALUE;
    DeRef(_15332);
    _15332 = NOVALUE;
    DeRef(_15377);
    _15377 = NOVALUE;
    DeRef(_15138);
    _15138 = NOVALUE;
    DeRef(_15372);
    _15372 = NOVALUE;
    _15054 = NOVALUE;
    DeRef(_15042);
    _15042 = NOVALUE;
    DeRef(_15227);
    _15227 = NOVALUE;
    DeRef(_15058);
    _15058 = NOVALUE;
    DeRef(_15381);
    _15381 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15236);
    _15236 = NOVALUE;
    DeRef(_15365);
    _15365 = NOVALUE;
    DeRef(_15229);
    _15229 = NOVALUE;
    DeRef(_15193);
    _15193 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15134);
    _15134 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15367);
    _15367 = NOVALUE;
    DeRef(_15278);
    _15278 = NOVALUE;
    DeRef(_15393);
    _15393 = NOVALUE;
    DeRef(_15242);
    _15242 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15160);
    _15160 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    DeRef(_15012);
    _15012 = NOVALUE;
    DeRef(_15195);
    _15195 = NOVALUE;
    DeRef(_15382);
    _15382 = NOVALUE;
    DeRef(_15349);
    _15349 = NOVALUE;
    DeRef(_15304);
    _15304 = NOVALUE;
    DeRef(_15311);
    _15311 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    DeRef(_15331);
    _15331 = NOVALUE;
    _15105 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15089);
    _15089 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15139);
    _15139 = NOVALUE;
    DeRef(_15327);
    _15327 = NOVALUE;
    DeRef(_15063);
    _15063 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    DeRef(_15371);
    _15371 = NOVALUE;
    _15090 = NOVALUE;
    return _15395;
    // SubProg Scanner pc: 3774 op: ELSE (23)
    goto L1; // [3774] 10
    // SubProg Scanner pc: 3776 op: NOP1 (159)
L9F: // addr: 3777 pc: 3776 sub: 26919 op: 159
    // SubProg Scanner pc: 3777 op: STARTLINE (58)

    /** scanner.e:2032				InternalErr(268, {class})*/
    // SubProg Scanner pc: 3779 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _class_26933;
    _15396 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3783 op: PROC (27)
    _49InternalErr(268, _15396);
    _15396 = NOVALUE;
    // SubProg Scanner pc: 3787 op: NOP1 (159)
    // SubProg Scanner pc: 3788 op: STARTLINE (58)

    /** scanner.e:2035	   end while*/
    // SubProg Scanner pc: 3790 op: ENDWHILE (22)
    goto L1; // [3790] 10
    // SubProg Scanner pc: 3792 op: NOP1 (159)
L2: // addr: 3793 pc: 3792 sub: 26919 op: 159
    // SubProg Scanner pc: 3793 op: BADRETURNF (43)
    ;
}


object _61StringToken(object _pDelims_27729)
{
    object _ch_27730 = NOVALUE;
    object _m_27731 = NOVALUE;
    object _gtext_27732 = NOVALUE;
    object _level_27763 = NOVALUE;
// skipping _15447  name type: 0
// skipping _15446  name type: 0
// skipping _15445  name type: 0
    object _15444 = NOVALUE; // 27793 15444
// skipping _15443  name type: 0
    object _15442 = NOVALUE; // 27791 15442
// skipping _15441  name type: 0
    object _15440 = NOVALUE; // 27788 15440
// skipping _15439  name type: 0
// skipping _15438  name type: 0
// skipping _15437  name type: 0
// skipping _15436  name type: 0
// skipping _15435  name type: 0
// skipping _15434  name type: 0
// skipping _15433  name type: 0
// skipping _15432  name type: 0
// skipping _15431  name type: 0
// skipping _15430  name type: 0
// skipping _15429  name type: 0
// skipping _15428  name type: 0
// skipping _15427  name type: 0
// skipping _15426  name type: 0
// skipping _15425  name type: 0
// skipping _15424  name type: 0
// skipping _15423  name type: 0
// skipping _15422  name type: 0
    object _15421 = NOVALUE; // 27754 15421
    object _15420 = NOVALUE; // 27753 15420
// skipping _15419  name type: 0
// skipping _15418  name type: 0
// skipping _15417  name type: 0
// skipping _15415  name type: 0
    object _15414 = NOVALUE; // 27743 15414
// skipping _15413  name type: 0
    object _15412 = NOVALUE; // 27740 15412
// skipping _15411  name type: 0
    object _15410 = NOVALUE; // 27737 15410
// skipping _15409  name type: 0
    object _15408 = NOVALUE; // 27735 15408
// skipping _15407  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg StringToken pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg StringToken pc: 3 op: STARTLINE (58)

    /** scanner.e:2060		ch = getch()*/
    // SubProg StringToken pc: 5 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 10 op: STARTLINE (58)

    /** scanner.e:2061		while ch = ' ' or ch = '\t' do*/
    // SubProg StringToken pc: 12 op: NOP2 (110)
    // SubProg StringToken pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 27727 op: 158
    // SubProg StringToken pc: 15 op: EQUALS (3)
    _15408 = (_ch_27730 == 32);
    // SubProg StringToken pc: 19 op: SC1_OR_IF (147)
    if (_15408 != 0) {
        goto L2; // [19] 32
    }
    // SubProg StringToken pc: 23 op: EQUALS (3)
    _15410 = (_ch_27730 == 9);
    // SubProg StringToken pc: 27 op: NOP1 (159)
    // SubProg StringToken pc: 28 op: WHILE (47)
    if (_15410 == 0)
    {
        DeRef(_15410);
        _15410 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15410);
        _15410 = NOVALUE;
    }
    // SubProg StringToken pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 27727 op: 159
    // SubProg StringToken pc: 32 op: STARTLINE (58)

    /** scanner.e:2062			ch = getch()*/
    // SubProg StringToken pc: 34 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 37 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 39 op: STARTLINE (58)

    /** scanner.e:2063		end while*/
    // SubProg StringToken pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 15
    // SubProg StringToken pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 27727 op: 159
    // SubProg StringToken pc: 44 op: STARTLINE (58)

    /** scanner.e:2065		pDelims &= {' ', '\t', '\n', '\r', END_OF_FILE_CHAR}*/
    // SubProg StringToken pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 48 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 32;
    ((intptr_t*)_2)[2] = 9;
    ((intptr_t*)_2)[3] = 10;
    ((intptr_t*)_2)[4] = 13;
    ((intptr_t*)_2)[5] = 26;
    _15412 = MAKE_SEQ(_1);
    // SubProg StringToken pc: 56 op: CONCAT (15)
    Concat((object_ptr)&_pDelims_27729, _pDelims_27729, _15412);
    DeRefDS(_15412);
    _15412 = NOVALUE;
    // SubProg StringToken pc: 60 op: STARTLINE (58)

    /** scanner.e:2066		gtext = ""*/
    // SubProg StringToken pc: 62 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_gtext_27732);
    _gtext_27732 = _5;
    // SubProg StringToken pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg StringToken pc: 67 op: STARTLINE (58)

    /** scanner.e:2067		while not find(ch,  pDelims) label "top" do*/
    // SubProg StringToken pc: 69 op: NOP2 (110)
    // SubProg StringToken pc: 71 op: NOPWHILE (158)
L4: // addr: 72 pc: 71 sub: 27727 op: 158
    // SubProg StringToken pc: 72 op: FIND_FROM (176)
    _15414 = find_from(_ch_27730, _pDelims_27729, 1);
    // SubProg StringToken pc: 77 op: NOT_IFW (108)
    if (_15414 != 0)
    goto L5; // [77] 391
    _15414 = NOVALUE;
    // SubProg StringToken pc: 80 op: STARTLINE (58)

    /** scanner.e:2068			if ch = '-' then*/
    // SubProg StringToken pc: 82 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 45)
    goto L6; // [82] 145
    // SubProg StringToken pc: 86 op: STARTLINE (58)

    /** scanner.e:2069				ch = getch()*/
    // SubProg StringToken pc: 88 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 91 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 93 op: STARTLINE (58)

    /** scanner.e:2070				if ch = '-' then*/
    // SubProg StringToken pc: 95 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 45)
    goto L7; // [95] 137
    // SubProg StringToken pc: 99 op: STARTLINE (58)

    /** scanner.e:2071					while not find(ch, {'\n', END_OF_FILE_CHAR}) do*/
    // SubProg StringToken pc: 101 op: NOP2 (110)
    // SubProg StringToken pc: 103 op: NOPWHILE (158)
L8: // addr: 104 pc: 103 sub: 27727 op: 158
    // SubProg StringToken pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 106 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 26;
    _15420 = MAKE_SEQ(_1);
    // SubProg StringToken pc: 110 op: FIND_FROM (176)
    _15421 = find_from(_ch_27730, _15420, 1);
    DeRefDS(_15420);
    _15420 = NOVALUE;
    // SubProg StringToken pc: 115 op: NOT_IFW (108)
    if (_15421 != 0)
    goto L5; // [115] 391
    _15421 = NOVALUE;
    // SubProg StringToken pc: 118 op: STARTLINE (58)

    /** scanner.e:2072						ch = getch()*/
    // SubProg StringToken pc: 120 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 123 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 125 op: STARTLINE (58)

    /** scanner.e:2073					end while*/
    // SubProg StringToken pc: 127 op: ENDWHILE (22)
    goto L8; // [127] 104
    // SubProg StringToken pc: 129 op: NOP1 (159)
    // SubProg StringToken pc: 130 op: STARTLINE (58)

    /** scanner.e:2074					exit*/
    // SubProg StringToken pc: 132 op: EXIT (61)
    goto L5; // [132] 391
    // SubProg StringToken pc: 134 op: ELSE (23)
    goto L9; // [134] 373
    // SubProg StringToken pc: 136 op: NOP1 (159)
L7: // addr: 137 pc: 136 sub: 27727 op: 159
    // SubProg StringToken pc: 137 op: STARTLINE (58)

    /** scanner.e:2076					ungetch()*/
    // SubProg StringToken pc: 139 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 141 op: NOP1 (159)
    // SubProg StringToken pc: 142 op: ELSE (23)
    goto L9; // [142] 373
    // SubProg StringToken pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 27727 op: 159
    // SubProg StringToken pc: 145 op: STARTLINE (58)

    /** scanner.e:2078			elsif ch = '/' then*/
    // SubProg StringToken pc: 147 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 47)
    goto LA; // [147] 372
    // SubProg StringToken pc: 151 op: STARTLINE (58)

    /** scanner.e:2079				ch = getch()*/
    // SubProg StringToken pc: 153 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 156 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 158 op: STARTLINE (58)

    /** scanner.e:2080				if ch = '*' then*/
    // SubProg StringToken pc: 160 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 42)
    goto LB; // [160] 361
    // SubProg StringToken pc: 164 op: STARTLINE (58)

    /** scanner.e:2081					integer level = 1*/
    // SubProg StringToken pc: 166 op: ASSIGN_I (113)
    _level_27763 = 1;
    // SubProg StringToken pc: 169 op: STARTLINE (58)

    /** scanner.e:2082					while level > 0 do*/
    // SubProg StringToken pc: 171 op: NOP2 (110)
    // SubProg StringToken pc: 173 op: NOPWHILE (158)
LC: // addr: 174 pc: 173 sub: 27727 op: 158
    // SubProg StringToken pc: 174 op: GREATER_IFW_I (124)
    if (_level_27763 <= 0)
    goto LD; // [174] 293
    // SubProg StringToken pc: 178 op: STARTLINE (58)

    /** scanner.e:2083						ch = getch()*/
    // SubProg StringToken pc: 180 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 183 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 185 op: STARTLINE (58)

    /** scanner.e:2084						if ch = '/' then*/
    // SubProg StringToken pc: 187 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 47)
    goto LE; // [187] 221
    // SubProg StringToken pc: 191 op: STARTLINE (58)

    /** scanner.e:2085							ch = getch()*/
    // SubProg StringToken pc: 193 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 196 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 198 op: STARTLINE (58)

    /** scanner.e:2086							if ch = '*' then*/
    // SubProg StringToken pc: 200 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 42)
    goto LF; // [200] 213
    // SubProg StringToken pc: 204 op: STARTLINE (58)

    /** scanner.e:2087								level += 1*/
    // SubProg StringToken pc: 206 op: PLUS1_I (117)
    _level_27763 = _level_27763 + 1;
    // SubProg StringToken pc: 210 op: ELSE (23)
    goto LC; // [210] 174
    // SubProg StringToken pc: 212 op: NOP1 (159)
LF: // addr: 213 pc: 212 sub: 27727 op: 159
    // SubProg StringToken pc: 213 op: STARTLINE (58)

    /** scanner.e:2089								ungetch()*/
    // SubProg StringToken pc: 215 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 217 op: NOP1 (159)
    // SubProg StringToken pc: 218 op: ELSE (23)
    goto LC; // [218] 174
    // SubProg StringToken pc: 220 op: NOP1 (159)
LE: // addr: 221 pc: 220 sub: 27727 op: 159
    // SubProg StringToken pc: 221 op: STARTLINE (58)

    /** scanner.e:2091						elsif ch = '*' then*/
    // SubProg StringToken pc: 223 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 42)
    goto L10; // [223] 257
    // SubProg StringToken pc: 227 op: STARTLINE (58)

    /** scanner.e:2092							ch = getch()*/
    // SubProg StringToken pc: 229 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 232 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 234 op: STARTLINE (58)

    /** scanner.e:2093							if ch = '/' then*/
    // SubProg StringToken pc: 236 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 47)
    goto L11; // [236] 249
    // SubProg StringToken pc: 240 op: STARTLINE (58)

    /** scanner.e:2094								level -= 1*/
    // SubProg StringToken pc: 242 op: MINUS_I (116)
    _level_27763 = _level_27763 - 1;
    // SubProg StringToken pc: 246 op: ELSE (23)
    goto LC; // [246] 174
    // SubProg StringToken pc: 248 op: NOP1 (159)
L11: // addr: 249 pc: 248 sub: 27727 op: 159
    // SubProg StringToken pc: 249 op: STARTLINE (58)

    /** scanner.e:2096								ungetch()*/
    // SubProg StringToken pc: 251 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 253 op: NOP1 (159)
    // SubProg StringToken pc: 254 op: ELSE (23)
    goto LC; // [254] 174
    // SubProg StringToken pc: 256 op: NOP1 (159)
L10: // addr: 257 pc: 256 sub: 27727 op: 159
    // SubProg StringToken pc: 257 op: STARTLINE (58)

    /** scanner.e:2098						elsif ch = '\n' then*/
    // SubProg StringToken pc: 259 op: EQUALS_IFW_I (121)
    if (_ch_27730 != 10)
    goto L12; // [259] 270
    // SubProg StringToken pc: 263 op: STARTLINE (58)

    /** scanner.e:2099							read_line()*/
    // SubProg StringToken pc: 265 op: PROC (27)
    _61read_line();
    // SubProg StringToken pc: 267 op: ELSE (23)
    goto LC; // [267] 174
    // SubProg StringToken pc: 269 op: NOP1 (159)
L12: // addr: 270 pc: 269 sub: 27727 op: 159
    // SubProg StringToken pc: 270 op: STARTLINE (58)

    /** scanner.e:2100						elsif ch = END_OF_FILE_CHAR then*/
    // SubProg StringToken pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 274 op: EQUALS_IFW (104)
    if (_ch_27730 != 26)
    goto LC; // [274] 174
    // SubProg StringToken pc: 278 op: STARTLINE (58)

    /** scanner.e:2101							ungetch()*/
    // SubProg StringToken pc: 280 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 282 op: STARTLINE (58)

    /** scanner.e:2102							exit*/
    // SubProg StringToken pc: 284 op: EXIT (61)
    goto LD; // [284] 293
    // SubProg StringToken pc: 286 op: NOP1 (159)
    // SubProg StringToken pc: 287 op: NOP1 (159)
    // SubProg StringToken pc: 288 op: STARTLINE (58)

    /** scanner.e:2104					end while*/
    // SubProg StringToken pc: 290 op: ENDWHILE (22)
    goto LC; // [290] 174
    // SubProg StringToken pc: 292 op: NOP1 (159)
LD: // addr: 293 pc: 292 sub: 27727 op: 159
    // SubProg StringToken pc: 293 op: STARTLINE (58)

    /** scanner.e:2105					ch = getch()*/
    // SubProg StringToken pc: 295 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 298 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 300 op: STARTLINE (58)

    /** scanner.e:2106					if length(gtext) = 0 then*/
    // SubProg StringToken pc: 302 op: LENGTH (42)
    if (IS_SEQUENCE(_gtext_27732)){
            _15440 = SEQ_PTR(_gtext_27732)->length;
    }
    else {
        _15440 = 1;
    }
    // SubProg StringToken pc: 305 op: EQUALS_IFW_I (121)
    if (_15440 != 0)
    goto L13; // [305] 350
    // SubProg StringToken pc: 309 op: STARTLINE (58)

    /** scanner.e:2107						while ch = ' ' or ch = '\t' do*/
    // SubProg StringToken pc: 311 op: NOP2 (110)
    // SubProg StringToken pc: 313 op: NOPWHILE (158)
L14: // addr: 314 pc: 313 sub: 27727 op: 158
    // SubProg StringToken pc: 314 op: EQUALS (3)
    _15442 = (_ch_27730 == 32);
    // SubProg StringToken pc: 318 op: SC1_OR_IF (147)
    if (_15442 != 0) {
        goto L15; // [318] 331
    }
    // SubProg StringToken pc: 322 op: EQUALS (3)
    _15444 = (_ch_27730 == 9);
    // SubProg StringToken pc: 326 op: NOP1 (159)
    // SubProg StringToken pc: 327 op: WHILE (47)
    if (_15444 == 0)
    {
        DeRef(_15444);
        _15444 = NOVALUE;
        goto L16; // [327] 343
    }
    else{
        DeRef(_15444);
        _15444 = NOVALUE;
    }
    // SubProg StringToken pc: 330 op: NOP1 (159)
L15: // addr: 331 pc: 330 sub: 27727 op: 159
    // SubProg StringToken pc: 331 op: STARTLINE (58)

    /** scanner.e:2108							ch = getch()*/
    // SubProg StringToken pc: 333 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 336 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 338 op: STARTLINE (58)

    /** scanner.e:2109						end while*/
    // SubProg StringToken pc: 340 op: ENDWHILE (22)
    goto L14; // [340] 314
    // SubProg StringToken pc: 342 op: NOP1 (159)
L16: // addr: 343 pc: 342 sub: 27727 op: 159
    // SubProg StringToken pc: 343 op: STARTLINE (58)

    /** scanner.e:2110						continue "top"*/
    // SubProg StringToken pc: 345 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27763
    // SubProg StringToken pc: 347 op: ELSE (23)
    goto L4; // [347] 72
    // SubProg StringToken pc: 349 op: NOP1 (159)
L13: // addr: 350 pc: 349 sub: 27727 op: 159
    // SubProg StringToken pc: 350 op: STARTLINE (58)

    /** scanner.e:2112					exit*/
    // SubProg StringToken pc: 352 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27763
    // SubProg StringToken pc: 354 op: EXIT (61)
    goto L5; // [354] 391
    // SubProg StringToken pc: 356 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27763
    // SubProg StringToken pc: 358 op: ELSE (23)
    goto L17; // [358] 371
    // SubProg StringToken pc: 360 op: NOP1 (159)
LB: // addr: 361 pc: 360 sub: 27727 op: 159
    // SubProg StringToken pc: 361 op: STARTLINE (58)

    /** scanner.e:2115					ungetch()*/
    // SubProg StringToken pc: 363 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 365 op: STARTLINE (58)

    /** scanner.e:2116					ch = '/'*/
    // SubProg StringToken pc: 367 op: ASSIGN_I (113)
    _ch_27730 = 47;
    // SubProg StringToken pc: 370 op: NOP1 (159)
L17: // addr: 371 pc: 370 sub: 27727 op: 159
    // SubProg StringToken pc: 371 op: NOP1 (159)
LA: // addr: 372 pc: 371 sub: 27727 op: 159
    // SubProg StringToken pc: 372 op: NOP1 (159)
L9: // addr: 373 pc: 372 sub: 27727 op: 159
    // SubProg StringToken pc: 373 op: STARTLINE (58)

    /** scanner.e:2119			gtext &= ch*/
    // SubProg StringToken pc: 375 op: CONCAT (15)
    Append(&_gtext_27732, _gtext_27732, _ch_27730);
    // SubProg StringToken pc: 379 op: STARTLINE (58)

    /** scanner.e:2120			ch = getch()*/
    // SubProg StringToken pc: 381 op: PROC (27)
    _ch_27730 = _61getch();
    // SubProg StringToken pc: 384 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27730)) {
        _1 = (object)(DBL_PTR(_ch_27730)->dbl);
        DeRefDS(_ch_27730);
        _ch_27730 = _1;
    }
    // SubProg StringToken pc: 386 op: STARTLINE (58)

    /** scanner.e:2121		end while*/
    // SubProg StringToken pc: 388 op: ENDWHILE (22)
    goto L4; // [388] 72
    // SubProg StringToken pc: 390 op: NOP1 (159)
L5: // addr: 391 pc: 390 sub: 27727 op: 159
    // SubProg StringToken pc: 391 op: STARTLINE (58)

    /** scanner.e:2123		ungetch() -- put back end-word token.*/
    // SubProg StringToken pc: 393 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 395 op: STARTLINE (58)

    /** scanner.e:2125		return gtext*/
    // SubProg StringToken pc: 397 op: RETURNF (28)

// Exiting block BLOCK: StringToken

// block var pDelims_27729
    DeRefDSi(_pDelims_27729);

// block var ch_27730
    DeRef(_15408);
    _15408 = NOVALUE;
    DeRef(_15442);
    _15442 = NOVALUE;
    return _gtext_27732;
    // SubProg StringToken pc: 401 op: BADRETURNF (43)
    ;
}


void _61IncludeScan(object _is_public_27800)
{
    object _ch_27801 = NOVALUE;
    object _gtext_27802 = NOVALUE;
    object _s_27804 = NOVALUE;
    object _31707 = NOVALUE; // 63914 31707
// skipping _15513  name type: 0
// skipping _15512  name type: 0
// skipping _15511  name type: 0
// skipping _15510  name type: 0
// skipping _15509  name type: 0
// skipping _15508  name type: 0
    object _15507 = NOVALUE; // 27901 15507
    object _15506 = NOVALUE; // 27900 15506
// skipping _15505  name type: 0
    object _15504 = NOVALUE; // 27890 15504
// skipping _15503  name type: 0
    object _15502 = NOVALUE; // 27886 15502
    object _15501 = NOVALUE; // 27884 15501
// skipping _15500  name type: 0
// skipping _15499  name type: 0
// skipping _15498  name type: 0
// skipping _15497  name type: 0
    object _15496 = NOVALUE; // 27875 15496
// skipping _15495  name type: 0
// skipping _15494  name type: 0
    object _15493 = NOVALUE; // 27871 15493
// skipping _15492  name type: 0
    object _15491 = NOVALUE; // 27869 15491
    object _15490 = NOVALUE; // 27867 15490
// skipping _15489  name type: 0
    object _15488 = NOVALUE; // 27864 15488
// skipping _15487  name type: 0
    object _15486 = NOVALUE; // 27862 15486
// skipping _15485  name type: 0
    object _15484 = NOVALUE; // 27859 15484
// skipping _15483  name type: 0
    object _15482 = NOVALUE; // 27857 15482
// skipping _15481  name type: 0
// skipping _15480  name type: 0
// skipping _15479  name type: 0
// skipping _15478  name type: 0
// skipping _15477  name type: 0
    object _15476 = NOVALUE; // 27848 15476
// skipping _15475  name type: 0
    object _15474 = NOVALUE; // 27846 15474
// skipping _15473  name type: 0
// skipping _15470  name type: 0
    object _15469 = NOVALUE; // 27838 15469
// skipping _15468  name type: 0
// skipping _15467  name type: 0
// skipping _15466  name type: 0
    object _15465 = NOVALUE; // 27833 15465
    object _15464 = NOVALUE; // 27832 15464
// skipping _15463  name type: 0
// skipping _15462  name type: 0
// skipping _15461  name type: 0
// skipping _15460  name type: 0
    object _15459 = NOVALUE; // 27821 15459
// skipping _15458  name type: 0
// skipping _15457  name type: 0
    object _15456 = NOVALUE; // 27817 15456
    object _15455 = NOVALUE; // 27816 15455
// skipping _15454  name type: 0
// skipping _15453  name type: 0
// skipping _15452  name type: 0
    object _15451 = NOVALUE; // 27809 15451
// skipping _15450  name type: 0
    object _15449 = NOVALUE; // 27807 15449
// skipping _15448  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg IncludeScan pc: 1 op: INTEGER_CHECK (96)
    // SubProg IncludeScan pc: 3 op: STARTLINE (58)

    /** scanner.e:2145		ch = getch()*/
    // SubProg IncludeScan pc: 5 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 10 op: STARTLINE (58)

    /** scanner.e:2146		while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 12 op: NOP2 (110)
    // SubProg IncludeScan pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 27798 op: 158
    // SubProg IncludeScan pc: 15 op: EQUALS (3)
    _15449 = (_ch_27801 == 32);
    // SubProg IncludeScan pc: 19 op: SC1_OR_IF (147)
    if (_15449 != 0) {
        goto L2; // [19] 32
    }
    // SubProg IncludeScan pc: 23 op: EQUALS (3)
    _15451 = (_ch_27801 == 9);
    // SubProg IncludeScan pc: 27 op: NOP1 (159)
    // SubProg IncludeScan pc: 28 op: WHILE (47)
    if (_15451 == 0)
    {
        DeRef(_15451);
        _15451 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15451);
        _15451 = NOVALUE;
    }
    // SubProg IncludeScan pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 27798 op: 159
    // SubProg IncludeScan pc: 32 op: STARTLINE (58)

    /** scanner.e:2147			ch = getch()*/
    // SubProg IncludeScan pc: 34 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 37 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 39 op: STARTLINE (58)

    /** scanner.e:2148		end while*/
    // SubProg IncludeScan pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 15
    // SubProg IncludeScan pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 27798 op: 159
    // SubProg IncludeScan pc: 44 op: STARTLINE (58)

    /** scanner.e:2151		gtext = ""*/
    // SubProg IncludeScan pc: 46 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_gtext_27802);
    _gtext_27802 = _5;
    // SubProg IncludeScan pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg IncludeScan pc: 51 op: STARTLINE (58)

    /** scanner.e:2153		if ch = '"' then*/
    // SubProg IncludeScan pc: 53 op: EQUALS_IFW_I (121)
    if (_ch_27801 != 34)
    goto L4; // [53] 141
    // SubProg IncludeScan pc: 57 op: STARTLINE (58)

    /** scanner.e:2155			ch = getch()*/
    // SubProg IncludeScan pc: 59 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 62 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 64 op: STARTLINE (58)

    /** scanner.e:2156			while not find(ch, {'\n', '\r', '"', END_OF_FILE_CHAR}) do*/
    // SubProg IncludeScan pc: 66 op: NOP2 (110)
    // SubProg IncludeScan pc: 68 op: NOPWHILE (158)
L5: // addr: 69 pc: 68 sub: 27798 op: 158
    // SubProg IncludeScan pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 34;
    ((intptr_t*)_2)[4] = 26;
    _15455 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 78 op: FIND_FROM (176)
    _15456 = find_from(_ch_27801, _15455, 1);
    DeRefDS(_15455);
    _15455 = NOVALUE;
    // SubProg IncludeScan pc: 83 op: NOT_IFW (108)
    if (_15456 != 0)
    goto L6; // [83] 124
    _15456 = NOVALUE;
    // SubProg IncludeScan pc: 86 op: STARTLINE (58)

    /** scanner.e:2157				if ch = '\\' then*/
    // SubProg IncludeScan pc: 88 op: EQUALS_IFW_I (121)
    if (_ch_27801 != 92)
    goto L7; // [88] 105
    // SubProg IncludeScan pc: 92 op: STARTLINE (58)

    /** scanner.e:2158					gtext &= EscapeChar('"')*/
    // SubProg IncludeScan pc: 94 op: PROC (27)
    _15459 = _61EscapeChar(34);
    // SubProg IncludeScan pc: 98 op: CONCAT (15)
    if (IS_SEQUENCE(_gtext_27802) && IS_ATOM(_15459)) {
        Ref(_15459);
        Append(&_gtext_27802, _gtext_27802, _15459);
    }
    else if (IS_ATOM(_gtext_27802) && IS_SEQUENCE(_15459)) {
    }
    else {
        Concat((object_ptr)&_gtext_27802, _gtext_27802, _15459);
    }
    DeRef(_15459);
    _15459 = NOVALUE;
    // SubProg IncludeScan pc: 102 op: ELSE (23)
    goto L8; // [102] 112
    // SubProg IncludeScan pc: 104 op: NOP1 (159)
L7: // addr: 105 pc: 104 sub: 27798 op: 159
    // SubProg IncludeScan pc: 105 op: STARTLINE (58)

    /** scanner.e:2160					gtext &= ch*/
    // SubProg IncludeScan pc: 107 op: CONCAT (15)
    Append(&_gtext_27802, _gtext_27802, _ch_27801);
    // SubProg IncludeScan pc: 111 op: NOP1 (159)
L8: // addr: 112 pc: 111 sub: 27798 op: 159
    // SubProg IncludeScan pc: 112 op: STARTLINE (58)

    /** scanner.e:2162				ch = getch()*/
    // SubProg IncludeScan pc: 114 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 117 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 119 op: STARTLINE (58)

    /** scanner.e:2163			end while*/
    // SubProg IncludeScan pc: 121 op: ENDWHILE (22)
    goto L5; // [121] 69
    // SubProg IncludeScan pc: 123 op: NOP1 (159)
L6: // addr: 124 pc: 123 sub: 27798 op: 159
    // SubProg IncludeScan pc: 124 op: STARTLINE (58)

    /** scanner.e:2164			if ch != '"' then*/
    // SubProg IncludeScan pc: 126 op: NOTEQ_IFW_I (122)
    if (_ch_27801 == 34)
    goto L9; // [126] 187
    // SubProg IncludeScan pc: 130 op: STARTLINE (58)

    /** scanner.e:2165				CompileErr(115)*/
    // SubProg IncludeScan pc: 132 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(115, _21936, 0);
    // SubProg IncludeScan pc: 137 op: NOP1 (159)
    // SubProg IncludeScan pc: 138 op: ELSE (23)
    goto L9; // [138] 187
    // SubProg IncludeScan pc: 140 op: NOP1 (159)
L4: // addr: 141 pc: 140 sub: 27798 op: 159
    // SubProg IncludeScan pc: 141 op: STARTLINE (58)

    /** scanner.e:2169			while not find(ch, {' ', '\t', '\n', '\r', END_OF_FILE_CHAR}) do*/
    // SubProg IncludeScan pc: 143 op: NOP2 (110)
    // SubProg IncludeScan pc: 145 op: NOPWHILE (158)
LA: // addr: 146 pc: 145 sub: 27798 op: 158
    // SubProg IncludeScan pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 148 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 32;
    ((intptr_t*)_2)[2] = 9;
    ((intptr_t*)_2)[3] = 10;
    ((intptr_t*)_2)[4] = 13;
    ((intptr_t*)_2)[5] = 26;
    _15464 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 156 op: FIND_FROM (176)
    _15465 = find_from(_ch_27801, _15464, 1);
    DeRefDS(_15464);
    _15464 = NOVALUE;
    // SubProg IncludeScan pc: 161 op: NOT_IFW (108)
    if (_15465 != 0)
    goto LB; // [161] 182
    _15465 = NOVALUE;
    // SubProg IncludeScan pc: 164 op: STARTLINE (58)

    /** scanner.e:2170				gtext &= ch*/
    // SubProg IncludeScan pc: 166 op: CONCAT (15)
    Append(&_gtext_27802, _gtext_27802, _ch_27801);
    // SubProg IncludeScan pc: 170 op: STARTLINE (58)

    /** scanner.e:2171				ch = getch()*/
    // SubProg IncludeScan pc: 172 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 175 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 177 op: STARTLINE (58)

    /** scanner.e:2172			end while*/
    // SubProg IncludeScan pc: 179 op: ENDWHILE (22)
    goto LA; // [179] 146
    // SubProg IncludeScan pc: 181 op: NOP1 (159)
LB: // addr: 182 pc: 181 sub: 27798 op: 159
    // SubProg IncludeScan pc: 182 op: STARTLINE (58)

    /** scanner.e:2173			ungetch()*/
    // SubProg IncludeScan pc: 184 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 186 op: NOP1 (159)
L9: // addr: 187 pc: 186 sub: 27798 op: 159
    // SubProg IncludeScan pc: 187 op: STARTLINE (58)

    /** scanner.e:2176		if length(gtext) = 0 then*/
    // SubProg IncludeScan pc: 189 op: LENGTH (42)
    if (IS_SEQUENCE(_gtext_27802)){
            _15469 = SEQ_PTR(_gtext_27802)->length;
    }
    else {
        _15469 = 1;
    }
    // SubProg IncludeScan pc: 192 op: EQUALS_IFW_I (121)
    if (_15469 != 0)
    goto LC; // [192] 204
    // SubProg IncludeScan pc: 196 op: STARTLINE (58)

    /** scanner.e:2177			CompileErr(95)*/
    // SubProg IncludeScan pc: 198 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(95, _21936, 0);
    // SubProg IncludeScan pc: 203 op: NOP1 (159)
LC: // addr: 204 pc: 203 sub: 27798 op: 159
    // SubProg IncludeScan pc: 204 op: STARTLINE (58)

    /** scanner.e:2181		ifdef WINDOWS then*/
    // SubProg IncludeScan pc: 206 op: STARTLINE (58)

    /** scanner.e:2184			new_include_name = gtext*/
    // SubProg IncludeScan pc: 208 op: ASSIGN (18)
    RefDS(_gtext_27802);
    DeRef(_34new_include_name_15310);
    _34new_include_name_15310 = _gtext_27802;
    // SubProg IncludeScan pc: 211 op: SEQUENCE_CHECK (97)
    // SubProg IncludeScan pc: 213 op: STARTLINE (58)

    /** scanner.e:2188		ch = getch()*/
    // SubProg IncludeScan pc: 215 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 218 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 220 op: STARTLINE (58)

    /** scanner.e:2189		while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 222 op: NOP2 (110)
    // SubProg IncludeScan pc: 224 op: NOPWHILE (158)
LD: // addr: 225 pc: 224 sub: 27798 op: 158
    // SubProg IncludeScan pc: 225 op: EQUALS (3)
    _15474 = (_ch_27801 == 32);
    // SubProg IncludeScan pc: 229 op: SC1_OR_IF (147)
    if (_15474 != 0) {
        goto LE; // [229] 242
    }
    // SubProg IncludeScan pc: 233 op: EQUALS (3)
    _15476 = (_ch_27801 == 9);
    // SubProg IncludeScan pc: 237 op: NOP1 (159)
    // SubProg IncludeScan pc: 238 op: WHILE (47)
    if (_15476 == 0)
    {
        DeRef(_15476);
        _15476 = NOVALUE;
        goto LF; // [238] 254
    }
    else{
        DeRef(_15476);
        _15476 = NOVALUE;
    }
    // SubProg IncludeScan pc: 241 op: NOP1 (159)
LE: // addr: 242 pc: 241 sub: 27798 op: 159
    // SubProg IncludeScan pc: 242 op: STARTLINE (58)

    /** scanner.e:2190			ch = getch()*/
    // SubProg IncludeScan pc: 244 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 247 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 249 op: STARTLINE (58)

    /** scanner.e:2191		end while*/
    // SubProg IncludeScan pc: 251 op: ENDWHILE (22)
    goto LD; // [251] 225
    // SubProg IncludeScan pc: 253 op: NOP1 (159)
LF: // addr: 254 pc: 253 sub: 27798 op: 159
    // SubProg IncludeScan pc: 254 op: STARTLINE (58)

    /** scanner.e:2193		new_include_space = 0*/
    // SubProg IncludeScan pc: 256 op: ASSIGN (18)
    _61new_include_space_25180 = 0;
    // SubProg IncludeScan pc: 259 op: INTEGER_CHECK (96)
    // SubProg IncludeScan pc: 261 op: STARTLINE (58)

    /** scanner.e:2195		if ch = 'a' then*/
    // SubProg IncludeScan pc: 263 op: EQUALS_IFW_I (121)
    if (_ch_27801 != 97)
    goto L10; // [263] 520
    // SubProg IncludeScan pc: 267 op: STARTLINE (58)

    /** scanner.e:2197			ch = getch()*/
    // SubProg IncludeScan pc: 269 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 272 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 274 op: STARTLINE (58)

    /** scanner.e:2198			if ch = 's' then*/
    // SubProg IncludeScan pc: 276 op: EQUALS_IFW_I (121)
    if (_ch_27801 != 115)
    goto L11; // [276] 509
    // SubProg IncludeScan pc: 280 op: STARTLINE (58)

    /** scanner.e:2199				ch = getch()*/
    // SubProg IncludeScan pc: 282 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 285 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 287 op: STARTLINE (58)

    /** scanner.e:2200				if ch = ' ' or ch = '\t' then*/
    // SubProg IncludeScan pc: 289 op: EQUALS (3)
    _15482 = (_ch_27801 == 32);
    // SubProg IncludeScan pc: 293 op: SC1_OR_IF (147)
    if (_15482 != 0) {
        goto L12; // [293] 306
    }
    // SubProg IncludeScan pc: 297 op: EQUALS (3)
    _15484 = (_ch_27801 == 9);
    // SubProg IncludeScan pc: 301 op: NOP1 (159)
    // SubProg IncludeScan pc: 302 op: IF (20)
    if (_15484 == 0)
    {
        DeRef(_15484);
        _15484 = NOVALUE;
        goto L13; // [302] 498
    }
    else{
        DeRef(_15484);
        _15484 = NOVALUE;
    }
    // SubProg IncludeScan pc: 305 op: NOP1 (159)
L12: // addr: 306 pc: 305 sub: 27798 op: 159
    // SubProg IncludeScan pc: 306 op: STARTLINE (58)

    /** scanner.e:2203					ch = getch()*/
    // SubProg IncludeScan pc: 308 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 311 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 313 op: STARTLINE (58)

    /** scanner.e:2204					while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 315 op: NOP2 (110)
    // SubProg IncludeScan pc: 317 op: NOPWHILE (158)
L14: // addr: 318 pc: 317 sub: 27798 op: 158
    // SubProg IncludeScan pc: 318 op: EQUALS (3)
    _15486 = (_ch_27801 == 32);
    // SubProg IncludeScan pc: 322 op: SC1_OR_IF (147)
    if (_15486 != 0) {
        goto L15; // [322] 335
    }
    // SubProg IncludeScan pc: 326 op: EQUALS (3)
    _15488 = (_ch_27801 == 9);
    // SubProg IncludeScan pc: 330 op: NOP1 (159)
    // SubProg IncludeScan pc: 331 op: WHILE (47)
    if (_15488 == 0)
    {
        DeRef(_15488);
        _15488 = NOVALUE;
        goto L16; // [331] 347
    }
    else{
        DeRef(_15488);
        _15488 = NOVALUE;
    }
    // SubProg IncludeScan pc: 334 op: NOP1 (159)
L15: // addr: 335 pc: 334 sub: 27798 op: 159
    // SubProg IncludeScan pc: 335 op: STARTLINE (58)

    /** scanner.e:2205						ch = getch()*/
    // SubProg IncludeScan pc: 337 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 340 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 342 op: STARTLINE (58)

    /** scanner.e:2206					end while*/
    // SubProg IncludeScan pc: 344 op: ENDWHILE (22)
    goto L14; // [344] 318
    // SubProg IncludeScan pc: 346 op: NOP1 (159)
L16: // addr: 347 pc: 346 sub: 27798 op: 159
    // SubProg IncludeScan pc: 347 op: STARTLINE (58)

    /** scanner.e:2209					if char_class[ch] = LETTER or ch = '_' then*/
    // SubProg IncludeScan pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 351 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25189);
    _15490 = (object)*(((s1_ptr)_2)->base + _ch_27801);
    // SubProg IncludeScan pc: 355 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 357 op: EQUALS (3)
    if (IS_ATOM_INT(_15490)) {
        _15491 = (_15490 == -2);
    }
    else {
        _15491 = binary_op(EQUALS, _15490, -2);
    }
    _15490 = NOVALUE;
    // SubProg IncludeScan pc: 361 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_15491)) {
        if (_15491 != 0) {
            goto L17; // [361] 374
        }
    }
    else {
        if (DBL_PTR(_15491)->dbl != 0.0) {
            goto L17; // [361] 374
        }
    }
    // SubProg IncludeScan pc: 365 op: EQUALS (3)
    _15493 = (_ch_27801 == 95);
    // SubProg IncludeScan pc: 369 op: NOP1 (159)
    // SubProg IncludeScan pc: 370 op: IF (20)
    if (_15493 == 0)
    {
        DeRef(_15493);
        _15493 = NOVALUE;
        goto L18; // [370] 487
    }
    else{
        DeRef(_15493);
        _15493 = NOVALUE;
    }
    // SubProg IncludeScan pc: 373 op: NOP1 (159)
L17: // addr: 374 pc: 373 sub: 27798 op: 159
    // SubProg IncludeScan pc: 374 op: STARTLINE (58)

    /** scanner.e:2210						gtext = {ch}*/
    // SubProg IncludeScan pc: 376 op: RIGHT_BRACE_N (31)
    _0 = _gtext_27802;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_27801;
    _gtext_27802 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg IncludeScan pc: 380 op: STARTLINE (58)

    /** scanner.e:2211						ch = getch()*/
    // SubProg IncludeScan pc: 382 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 385 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 387 op: STARTLINE (58)

    /** scanner.e:2212						while id_char[ch] = TRUE do*/
    // SubProg IncludeScan pc: 389 op: NOP2 (110)
    // SubProg IncludeScan pc: 391 op: NOPWHILE (158)
L19: // addr: 392 pc: 391 sub: 27798 op: 158
    // SubProg IncludeScan pc: 392 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 394 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61id_char_25190);
    _15496 = (object)*(((s1_ptr)_2)->base + _ch_27801);
    // SubProg IncludeScan pc: 398 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 400 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15496, _8TRUE_444)){
        _15496 = NOVALUE;
        goto L1A; // [400] 422
    }
    _15496 = NOVALUE;
    // SubProg IncludeScan pc: 404 op: STARTLINE (58)

    /** scanner.e:2213							gtext &= ch*/
    // SubProg IncludeScan pc: 406 op: CONCAT (15)
    Append(&_gtext_27802, _gtext_27802, _ch_27801);
    // SubProg IncludeScan pc: 410 op: STARTLINE (58)

    /** scanner.e:2214							ch = getch()*/
    // SubProg IncludeScan pc: 412 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 415 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 417 op: STARTLINE (58)

    /** scanner.e:2215						end while*/
    // SubProg IncludeScan pc: 419 op: ENDWHILE (22)
    goto L19; // [419] 392
    // SubProg IncludeScan pc: 421 op: NOP1 (159)
L1A: // addr: 422 pc: 421 sub: 27798 op: 159
    // SubProg IncludeScan pc: 422 op: STARTLINE (58)

    /** scanner.e:2217						ungetch()*/
    // SubProg IncludeScan pc: 424 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 426 op: STARTLINE (58)

    /** scanner.e:2218						s = keyfind(gtext, -1, , 1)*/
    // SubProg IncludeScan pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 430 op: PRIVATE_INIT_CHECK (30)
    // SubProg IncludeScan pc: 432 op: PROC (27)
    RefDS(_gtext_27802);
    _31707 = _53hashfn(_gtext_27802);
    // SubProg IncludeScan pc: 436 op: PROC (27)
    RefDS(_gtext_27802);
    _0 = _s_27804;
    _s_27804 = _53keyfind(_gtext_27802, -1, _34current_file_no_15188, 1, _31707);
    DeRef(_0);
    _31707 = NOVALUE;
    // SubProg IncludeScan pc: 444 op: STARTLINE (58)

    /** scanner.e:2219						if not find(s[T_ID], ID_TOKS) then*/
    // SubProg IncludeScan pc: 446 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 448 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_s_27804);
    _15501 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg IncludeScan pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 454 op: FIND_FROM (176)
    _15502 = find_from(_15501, _36ID_TOKS_14802, 1);
    _15501 = NOVALUE;
    // SubProg IncludeScan pc: 459 op: NOT_IFW (108)
    if (_15502 != 0)
    goto L1B; // [459] 470
    _15502 = NOVALUE;
    // SubProg IncludeScan pc: 462 op: STARTLINE (58)

    /** scanner.e:2220							CompileErr(36)*/
    // SubProg IncludeScan pc: 464 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(36, _21936, 0);
    // SubProg IncludeScan pc: 469 op: NOP1 (159)
L1B: // addr: 470 pc: 469 sub: 27798 op: 159
    // SubProg IncludeScan pc: 470 op: STARTLINE (58)

    /** scanner.e:2222						new_include_space = NameSpace_declaration(s[T_SYM])*/
    // SubProg IncludeScan pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 474 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_s_27804);
    _15504 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg IncludeScan pc: 478 op: PROC (27)
    Ref(_15504);
    _0 = _61NameSpace_declaration(_15504);
    _61new_include_space_25180 = _0;
    _15504 = NOVALUE;
    // SubProg IncludeScan pc: 482 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_61new_include_space_25180)) {
        _1 = (object)(DBL_PTR(_61new_include_space_25180)->dbl);
        DeRefDS(_61new_include_space_25180);
        _61new_include_space_25180 = _1;
    }
    // SubProg IncludeScan pc: 484 op: ELSE (23)
    goto L1C; // [484] 629
    // SubProg IncludeScan pc: 486 op: NOP1 (159)
L18: // addr: 487 pc: 486 sub: 27798 op: 159
    // SubProg IncludeScan pc: 487 op: STARTLINE (58)

    /** scanner.e:2224						CompileErr(113)*/
    // SubProg IncludeScan pc: 489 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(113, _21936, 0);
    // SubProg IncludeScan pc: 494 op: NOP1 (159)
    // SubProg IncludeScan pc: 495 op: ELSE (23)
    goto L1C; // [495] 629
    // SubProg IncludeScan pc: 497 op: NOP1 (159)
L13: // addr: 498 pc: 497 sub: 27798 op: 159
    // SubProg IncludeScan pc: 498 op: STARTLINE (58)

    /** scanner.e:2227					CompileErr(100)*/
    // SubProg IncludeScan pc: 500 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(100, _21936, 0);
    // SubProg IncludeScan pc: 505 op: NOP1 (159)
    // SubProg IncludeScan pc: 506 op: ELSE (23)
    goto L1C; // [506] 629
    // SubProg IncludeScan pc: 508 op: NOP1 (159)
L11: // addr: 509 pc: 508 sub: 27798 op: 159
    // SubProg IncludeScan pc: 509 op: STARTLINE (58)

    /** scanner.e:2230				CompileErr(100)*/
    // SubProg IncludeScan pc: 511 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(100, _21936, 0);
    // SubProg IncludeScan pc: 516 op: NOP1 (159)
    // SubProg IncludeScan pc: 517 op: ELSE (23)
    goto L1C; // [517] 629
    // SubProg IncludeScan pc: 519 op: NOP1 (159)
L10: // addr: 520 pc: 519 sub: 27798 op: 159
    // SubProg IncludeScan pc: 520 op: STARTLINE (58)

    /** scanner.e:2233		elsif find(ch, {'\n', '\r', END_OF_FILE_CHAR}) then*/
    // SubProg IncludeScan pc: 522 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 524 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 26;
    _15506 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 530 op: FIND_FROM (176)
    _15507 = find_from(_ch_27801, _15506, 1);
    DeRefDS(_15506);
    _15506 = NOVALUE;
    // SubProg IncludeScan pc: 535 op: IF (20)
    if (_15507 == 0)
    {
        _15507 = NOVALUE;
        goto L1D; // [535] 545
    }
    else{
        _15507 = NOVALUE;
    }
    // SubProg IncludeScan pc: 538 op: STARTLINE (58)

    /** scanner.e:2234			ungetch()*/
    // SubProg IncludeScan pc: 540 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 542 op: ELSE (23)
    goto L1C; // [542] 629
    // SubProg IncludeScan pc: 544 op: NOP1 (159)
L1D: // addr: 545 pc: 544 sub: 27798 op: 159
    // SubProg IncludeScan pc: 545 op: STARTLINE (58)

    /** scanner.e:2236		elsif ch = '-' then*/
    // SubProg IncludeScan pc: 547 op: EQUALS_IFW_I (121)
    if (_ch_27801 != 45)
    goto L1E; // [547] 583
    // SubProg IncludeScan pc: 551 op: STARTLINE (58)

    /** scanner.e:2237			ch = getch()*/
    // SubProg IncludeScan pc: 553 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 556 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 558 op: STARTLINE (58)

    /** scanner.e:2238			if ch != '-' then*/
    // SubProg IncludeScan pc: 560 op: NOTEQ_IFW_I (122)
    if (_ch_27801 == 45)
    goto L1F; // [560] 572
    // SubProg IncludeScan pc: 564 op: STARTLINE (58)

    /** scanner.e:2239				CompileErr(100)*/
    // SubProg IncludeScan pc: 566 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(100, _21936, 0);
    // SubProg IncludeScan pc: 571 op: NOP1 (159)
L1F: // addr: 572 pc: 571 sub: 27798 op: 159
    // SubProg IncludeScan pc: 572 op: STARTLINE (58)

    /** scanner.e:2241			ungetch()*/
    // SubProg IncludeScan pc: 574 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 576 op: STARTLINE (58)

    /** scanner.e:2242			ungetch()*/
    // SubProg IncludeScan pc: 578 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 580 op: ELSE (23)
    goto L1C; // [580] 629
    // SubProg IncludeScan pc: 582 op: NOP1 (159)
L1E: // addr: 583 pc: 582 sub: 27798 op: 159
    // SubProg IncludeScan pc: 583 op: STARTLINE (58)

    /** scanner.e:2244		elsif ch = '/' then*/
    // SubProg IncludeScan pc: 585 op: EQUALS_IFW_I (121)
    if (_ch_27801 != 47)
    goto L20; // [585] 621
    // SubProg IncludeScan pc: 589 op: STARTLINE (58)

    /** scanner.e:2245			ch = getch()*/
    // SubProg IncludeScan pc: 591 op: PROC (27)
    _ch_27801 = _61getch();
    // SubProg IncludeScan pc: 594 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27801)) {
        _1 = (object)(DBL_PTR(_ch_27801)->dbl);
        DeRefDS(_ch_27801);
        _ch_27801 = _1;
    }
    // SubProg IncludeScan pc: 596 op: STARTLINE (58)

    /** scanner.e:2246			if ch != '*' then*/
    // SubProg IncludeScan pc: 598 op: NOTEQ_IFW_I (122)
    if (_ch_27801 == 42)
    goto L21; // [598] 610
    // SubProg IncludeScan pc: 602 op: STARTLINE (58)

    /** scanner.e:2247				CompileErr(100)*/
    // SubProg IncludeScan pc: 604 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(100, _21936, 0);
    // SubProg IncludeScan pc: 609 op: NOP1 (159)
L21: // addr: 610 pc: 609 sub: 27798 op: 159
    // SubProg IncludeScan pc: 610 op: STARTLINE (58)

    /** scanner.e:2249			ungetch()*/
    // SubProg IncludeScan pc: 612 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 614 op: STARTLINE (58)

    /** scanner.e:2250			ungetch()*/
    // SubProg IncludeScan pc: 616 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 618 op: ELSE (23)
    goto L1C; // [618] 629
    // SubProg IncludeScan pc: 620 op: NOP1 (159)
L20: // addr: 621 pc: 620 sub: 27798 op: 159
    // SubProg IncludeScan pc: 621 op: STARTLINE (58)

    /** scanner.e:2253			CompileErr(100)*/
    // SubProg IncludeScan pc: 623 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(100, _21936, 0);
    // SubProg IncludeScan pc: 628 op: NOP1 (159)
L1C: // addr: 629 pc: 628 sub: 27798 op: 159
    // SubProg IncludeScan pc: 629 op: STARTLINE (58)

    /** scanner.e:2256		start_include = TRUE -- let scanner know*/
    // SubProg IncludeScan pc: 631 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 633 op: ASSIGN (18)
    _61start_include_25182 = _8TRUE_444;
    // SubProg IncludeScan pc: 636 op: STARTLINE (58)

    /** scanner.e:2257		public_include = is_public*/
    // SubProg IncludeScan pc: 638 op: ASSIGN (18)
    _61public_include_25185 = _is_public_27800;
    // SubProg IncludeScan pc: 641 op: STARTLINE (58)

    /** scanner.e:2258	end procedure*/
    // SubProg IncludeScan pc: 643 op: RETURNP (29)

// Exiting block BLOCK: IncludeScan

// block var is_public_27800

// block var ch_27801

// block var gtext_27802
    DeRef(_gtext_27802);

// block var s_27804
    DeRef(_s_27804);
    DeRef(_15449);
    _15449 = NOVALUE;
    DeRef(_15474);
    _15474 = NOVALUE;
    DeRef(_15486);
    _15486 = NOVALUE;
    DeRef(_15491);
    _15491 = NOVALUE;
    DeRef(_15482);
    _15482 = NOVALUE;
    return;
    // SubProg IncludeScan pc: 646 op: BADRETURNF (43)
    ;
}


void _61cleanup_open_includes()
{
    object _15519 = NOVALUE; // 27933 15519
    object _15518 = NOVALUE; // 27932 15518
    object _15517 = NOVALUE; // 27931 15517
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cleanup_open_includes pc: 1 op: STARTLINE (58)

    /** scanner.e:2285		for i = 1 to length( IncludeStk ) do*/
    // SubProg cleanup_open_includes pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg cleanup_open_includes pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25191)){
            _15517 = SEQ_PTR(_61IncludeStk_25191)->length;
    }
    else {
        _15517 = 1;
    }
    // SubProg cleanup_open_includes pc: 8 op: FOR_I (125)
    {
        object _i_27930;
        _i_27930 = 1;
L1: // addr: 15 pc: 8 sub: 27927 op: 125
        if (_i_27930 > _15517){
            goto L2; // [8] 36
        }
        // SubProg cleanup_open_includes pc: 15 op: STARTLINE (58)

        /** scanner.e:2286			close( IncludeStk[i][FILE_PTR] )*/
        // SubProg cleanup_open_includes pc: 17 op: GLOBAL_INIT_CHECK (109)
        // SubProg cleanup_open_includes pc: 19 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_61IncludeStk_25191);
        _15518 = (object)*(((s1_ptr)_2)->base + _i_27930);
        // SubProg cleanup_open_includes pc: 23 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_15518);
        _15519 = (object)*(((s1_ptr)_2)->base + 3);
        _15518 = NOVALUE;
        // SubProg cleanup_open_includes pc: 27 op: CLOSE (86)
        if (IS_ATOM_INT(_15519))
        EClose(_15519);
        else
        EClose((object)DBL_PTR(_15519)->dbl);
        _15519 = NOVALUE;
        // SubProg cleanup_open_includes pc: 29 op: STARTLINE (58)

        /** scanner.e:2287		end for*/
        // SubProg cleanup_open_includes pc: 31 op: ENDFOR_INT_UP1 (54)
        _i_27930 = _i_27930 + 1;
        goto L1; // [31] 15
L2: // addr: 36 pc: 31 sub: 27927 op: 54
        ;
    }
    // SubProg cleanup_open_includes pc: 36 op: STARTLINE (58)

    /** scanner.e:2288	end procedure*/
    // SubProg cleanup_open_includes pc: 38 op: RETURNP (29)

// Exiting block BLOCK: cleanup_open_includes
    return;
    // SubProg cleanup_open_includes pc: 41 op: BADRETURNF (43)
    ;
}



// 0xCB05AFBF
