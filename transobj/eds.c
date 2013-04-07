// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _46fatal(object _errcode_17360, object _msg_17361, object _routine_name_17362, object _parms_17363)
{
// skipping _9731  name type: 0
// skipping _9730  name type: 0
// skipping _9729  name type: 0
// skipping _9727  name type: 0
// skipping _9726  name type: 0
    object _9725 = NOVALUE; // 17364 9725
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fatal pc: 1 op: INTEGER_CHECK (96)
    // SubProg fatal pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg fatal pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg fatal pc: 7 op: SEQUENCE_CHECK (97)
    // SubProg fatal pc: 9 op: STARTLINE (58)

    /** eds.e:231		vLastErrors = append(vLastErrors, {errcode, msg, routine_name, parms})*/
    // SubProg fatal pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg fatal pc: 13 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _errcode_17360;
    RefDS(_msg_17361);
    ((intptr_t*)_2)[2] = _msg_17361;
    RefDS(_routine_name_17362);
    ((intptr_t*)_2)[3] = _routine_name_17362;
    RefDS(_parms_17363);
    ((intptr_t*)_2)[4] = _parms_17363;
    _9725 = MAKE_SEQ(_1);
    // SubProg fatal pc: 20 op: APPEND (35)
    RefDS(_9725);
    Append(&_46vLastErrors_17357, _46vLastErrors_17357, _9725);
    DeRefDS(_9725);
    _9725 = NOVALUE;
    // SubProg fatal pc: 24 op: STARTLINE (58)

    /** eds.e:232		if db_fatal_id >= 0 then*/
    // SubProg fatal pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg fatal pc: 28 op: GREATEREQ_IFW_I (120)
    // SubProg fatal pc: 54 op: STARTLINE (58)

    /** eds.e:235	end procedure*/
    // SubProg fatal pc: 56 op: RETURNP (29)

// Exiting block BLOCK: fatal

// block var errcode_17360

// block var msg_17361
    DeRefDSi(_msg_17361);

// block var routine_name_17362
    DeRefDSi(_routine_name_17362);

// block var parms_17363
    DeRefDS(_parms_17363);
    return;
    // SubProg fatal pc: 59 op: BADRETURNF (43)
    ;
}


object _46get4()
{
    object _9741 = NOVALUE; // 17389 9741
    object _9740 = NOVALUE; // 17388 9740
    object _9739 = NOVALUE; // 17387 9739
    object _9738 = NOVALUE; // 17386 9738
    object _9737 = NOVALUE; // 17385 9737
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get4 pc: 1 op: STARTLINE (58)

    /** eds.e:250		poke(mem0, getc(current_db))*/
    // SubProg get4 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 7 op: GETC (33)
    if (_46current_db_17333 != last_r_file_no) {
        last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
        last_r_file_no = _46current_db_17333;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9737 = getc((FILE*)xstdin);
        }
        else{
            _9737 = getc(last_r_file_ptr);
        }
    }
    else{
        _9737 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 10 op: POKE (128)
    if (IS_ATOM_INT(_46mem0_17375)){
        poke_addr = (uint8_t *)_46mem0_17375;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_46mem0_17375)->dbl);
    }
    *poke_addr = (uint8_t)_9737;
    _9737 = NOVALUE;
    // SubProg get4 pc: 13 op: STARTLINE (58)

    /** eds.e:251		poke(mem1, getc(current_db))*/
    // SubProg get4 pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 19 op: GETC (33)
    if (_46current_db_17333 != last_r_file_no) {
        last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
        last_r_file_no = _46current_db_17333;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9738 = getc((FILE*)xstdin);
        }
        else{
            _9738 = getc(last_r_file_ptr);
        }
    }
    else{
        _9738 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 22 op: POKE (128)
    if (IS_ATOM_INT(_46mem1_17376)){
        poke_addr = (uint8_t *)_46mem1_17376;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_46mem1_17376)->dbl);
    }
    *poke_addr = (uint8_t)_9738;
    _9738 = NOVALUE;
    // SubProg get4 pc: 25 op: STARTLINE (58)

    /** eds.e:252		poke(mem2, getc(current_db))*/
    // SubProg get4 pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 31 op: GETC (33)
    if (_46current_db_17333 != last_r_file_no) {
        last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
        last_r_file_no = _46current_db_17333;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9739 = getc((FILE*)xstdin);
        }
        else{
            _9739 = getc(last_r_file_ptr);
        }
    }
    else{
        _9739 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 34 op: POKE (128)
    if (IS_ATOM_INT(_46mem2_17377)){
        poke_addr = (uint8_t *)_46mem2_17377;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_46mem2_17377)->dbl);
    }
    *poke_addr = (uint8_t)_9739;
    _9739 = NOVALUE;
    // SubProg get4 pc: 37 op: STARTLINE (58)

    /** eds.e:253		poke(mem3, getc(current_db))*/
    // SubProg get4 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 43 op: GETC (33)
    if (_46current_db_17333 != last_r_file_no) {
        last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
        last_r_file_no = _46current_db_17333;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9740 = getc((FILE*)xstdin);
        }
        else{
            _9740 = getc(last_r_file_ptr);
        }
    }
    else{
        _9740 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 46 op: POKE (128)
    if (IS_ATOM_INT(_46mem3_17378)){
        poke_addr = (uint8_t *)_46mem3_17378;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_46mem3_17378)->dbl);
    }
    *poke_addr = (uint8_t)_9740;
    _9740 = NOVALUE;
    // SubProg get4 pc: 49 op: STARTLINE (58)

    /** eds.e:254		return peek4u(mem0)*/
    // SubProg get4 pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 53 op: PEEK4U (140)
    if (IS_ATOM_INT(_46mem0_17375)) {
        _9741 = (object)*(uint32_t *)_46mem0_17375;
        if ((uintptr_t)_9741 > (uintptr_t)MAXINT){
            _9741 = NewDouble((eudouble)(uintptr_t)_9741);
        }
    }
    else {
        _9741 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_46mem0_17375)->dbl);
        if ((uintptr_t)_9741 > (uintptr_t)MAXINT){
            _9741 = NewDouble((eudouble)(uintptr_t)_9741);
        }
    }
    // SubProg get4 pc: 56 op: RETURNF (28)

// Exiting block BLOCK: get4
    return _9741;
    // SubProg get4 pc: 60 op: BADRETURNF (43)
    ;
}


object _46get_string()
{
    object _where_inlined_where_at_31_17403 = NOVALUE;
    object _s_17392 = NOVALUE;
    object _c_17393 = NOVALUE;
    object _i_17394 = NOVALUE;
    object _9754 = NOVALUE; // 17412 9754
// skipping _9753  name type: 0
// skipping _9752  name type: 0
    object _9751 = NOVALUE; // 17409 9751
// skipping _9750  name type: 0
    object _9749 = NOVALUE; // 17407 9749
// skipping _9748  name type: 0
    object _9747 = NOVALUE; // 17404 9747
// skipping _9744  name type: 0
// skipping _9743  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_string pc: 1 op: STARTLINE (58)

    /** eds.e:263		s = repeat(0, 256)*/
    // SubProg get_string pc: 3 op: REPEAT (32)
    DeRefi(_s_17392);
    _s_17392 = Repeat(0, 256);
    // SubProg get_string pc: 7 op: STARTLINE (58)

    /** eds.e:264		i = 0*/
    // SubProg get_string pc: 9 op: ASSIGN_I (113)
    _i_17394 = 0;
    // SubProg get_string pc: 12 op: STARTLINE (58)

    /** eds.e:265		while c with entry do*/
    // SubProg get_string pc: 14 op: ELSE (23)
    goto L1; // [14] 89
    // SubProg get_string pc: 16 op: NOPWHILE (158)
L2: // addr: 17 pc: 16 sub: 17390 op: 158
    // SubProg get_string pc: 17 op: PRIVATE_INIT_CHECK (30)
    // SubProg get_string pc: 19 op: WHILE (47)
    if (_c_17393 == 0)
    {
        goto L3; // [19] 101
    }
    else{
    }
    // SubProg get_string pc: 22 op: STARTLINE (58)

    /** eds.e:266			if c = -1 then*/
    // SubProg get_string pc: 24 op: EQUALS_IFW_I (121)
    if (_c_17393 != -1)
    goto L4; // [24] 54
    // SubProg get_string pc: 28 op: STARTLINE (58)

    /** eds.e:267				fatal(MISSING_END, "string is missing 0 terminator", "get_string", {io:where(current_db)})*/
    // SubProg get_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 32 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg get_string pc: 34 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_31_17403);
    _where_inlined_where_at_31_17403 = machine(20, _46current_db_17333);
    // SubProg get_string pc: 38 op: NOP1 (159)
    // SubProg get_string pc: 39 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_31_17403);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_31_17403;
    _9747 = MAKE_SEQ(_1);
    // SubProg get_string pc: 43 op: PROC (27)
    RefDS(_9745);
    RefDS(_9746);
    _46fatal(900, _9745, _9746, _9747);
    _9747 = NOVALUE;
    // SubProg get_string pc: 49 op: STARTLINE (58)

    /** eds.e:268				exit*/
    // SubProg get_string pc: 51 op: EXIT (61)
    goto L3; // [51] 101
    // SubProg get_string pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 17390 op: 159
    // SubProg get_string pc: 54 op: STARTLINE (58)

    /** eds.e:270			i += 1*/
    // SubProg get_string pc: 56 op: PLUS1_I (117)
    _i_17394 = _i_17394 + 1;
    // SubProg get_string pc: 60 op: STARTLINE (58)

    /** eds.e:271			if i > length(s) then*/
    // SubProg get_string pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_s_17392)){
            _9749 = SEQ_PTR(_s_17392)->length;
    }
    else {
        _9749 = 1;
    }
    // SubProg get_string pc: 65 op: GREATER_IFW_I (124)
    if (_i_17394 <= _9749)
    goto L5; // [65] 80
    // SubProg get_string pc: 69 op: STARTLINE (58)

    /** eds.e:272				s &= repeat(0, 256)*/
    // SubProg get_string pc: 71 op: REPEAT (32)
    _9751 = Repeat(0, 256);
    // SubProg get_string pc: 75 op: CONCAT (15)
    Concat((object_ptr)&_s_17392, _s_17392, _9751);
    DeRefDS(_9751);
    _9751 = NOVALUE;
    // SubProg get_string pc: 79 op: NOP1 (159)
L5: // addr: 80 pc: 79 sub: 17390 op: 159
    // SubProg get_string pc: 80 op: STARTLINE (58)

    /** eds.e:274			s[i] = c*/
    // SubProg get_string pc: 82 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_s_17392);
    _2 = (object)(((s1_ptr)_2)->base + _i_17394);
    *(intptr_t *)_2 = _c_17393;
    // SubProg get_string pc: 86 op: STARTLINE (58)

    /** eds.e:275		  entry*/
    // SubProg get_string pc: 88 op: NOP1 (159)
L1: // addr: 89 pc: 88 sub: 17390 op: 159
    // SubProg get_string pc: 89 op: STARTLINE (58)

    /** eds.e:276			c = getc(current_db)*/
    // SubProg get_string pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 93 op: GETC (33)
    if (_46current_db_17333 != last_r_file_no) {
        last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
        last_r_file_no = _46current_db_17333;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_17393 = getc((FILE*)xstdin);
        }
        else{
            _c_17393 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_17393 = getc(last_r_file_ptr);
    }
    // SubProg get_string pc: 96 op: STARTLINE (58)

    /** eds.e:277		end while*/
    // SubProg get_string pc: 98 op: ENDWHILE (22)
    goto L2; // [98] 17
    // SubProg get_string pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 17390 op: 159
    // SubProg get_string pc: 101 op: STARTLINE (58)

    /** eds.e:278		return s[1..i]*/
    // SubProg get_string pc: 103 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_9754;
    RHS_Slice(_s_17392, 1, _i_17394);
    // SubProg get_string pc: 108 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var s_17392
    DeRefDSi(_s_17392);

// block var c_17393

// block var i_17394
    return _9754;
    // SubProg get_string pc: 112 op: BADRETURNF (43)
    ;
}


object _46equal_string(object _target_17415)
{
    object _c_17416 = NOVALUE;
    object _i_17417 = NOVALUE;
    object _where_inlined_where_at_27_17423 = NOVALUE;
    object _9765 = NOVALUE; // 17434 9765
    object _9764 = NOVALUE; // 17433 9764
// skipping _9763  name type: 0
// skipping _9762  name type: 0
    object _9761 = NOVALUE; // 17430 9761
// skipping _9760  name type: 0
    object _9759 = NOVALUE; // 17427 9759
// skipping _9758  name type: 0
    object _9757 = NOVALUE; // 17424 9757
// skipping _9755  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg equal_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg equal_string pc: 3 op: STARTLINE (58)

    /** eds.e:286		i = 0*/
    // SubProg equal_string pc: 5 op: ASSIGN_I (113)
    _i_17417 = 0;
    // SubProg equal_string pc: 8 op: STARTLINE (58)

    /** eds.e:287		while c with entry do*/
    // SubProg equal_string pc: 10 op: ELSE (23)
    goto L1; // [10] 94
    // SubProg equal_string pc: 12 op: NOPWHILE (158)
L2: // addr: 13 pc: 12 sub: 17413 op: 158
    // SubProg equal_string pc: 13 op: PRIVATE_INIT_CHECK (30)
    // SubProg equal_string pc: 15 op: WHILE (47)
    if (_c_17416 == 0)
    {
        goto L3; // [15] 106
    }
    else{
    }
    // SubProg equal_string pc: 18 op: STARTLINE (58)

    /** eds.e:288			if c = -1 then*/
    // SubProg equal_string pc: 20 op: EQUALS_IFW_I (121)
    if (_c_17416 != -1)
    goto L4; // [20] 52
    // SubProg equal_string pc: 24 op: STARTLINE (58)

    /** eds.e:289				fatal(MISSING_END, "string is missing 0 terminator", "equal_string", {io:where(current_db)})*/
    // SubProg equal_string pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg equal_string pc: 28 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg equal_string pc: 30 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_27_17423);
    _where_inlined_where_at_27_17423 = machine(20, _46current_db_17333);
    // SubProg equal_string pc: 34 op: NOP1 (159)
    // SubProg equal_string pc: 35 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_27_17423);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_27_17423;
    _9757 = MAKE_SEQ(_1);
    // SubProg equal_string pc: 39 op: PROC (27)
    RefDS(_9745);
    RefDS(_9756);
    _46fatal(900, _9745, _9756, _9757);
    _9757 = NOVALUE;
    // SubProg equal_string pc: 45 op: STARTLINE (58)

    /** eds.e:290				return DB_FATAL_FAIL*/
    // SubProg equal_string pc: 47 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_17415
    DeRefDS(_target_17415);

// block var c_17416

// block var i_17417
    return -404;
    // SubProg equal_string pc: 51 op: NOP1 (159)
L4: // addr: 52 pc: 51 sub: 17413 op: 159
    // SubProg equal_string pc: 52 op: STARTLINE (58)

    /** eds.e:292			i += 1*/
    // SubProg equal_string pc: 54 op: PLUS1_I (117)
    _i_17417 = _i_17417 + 1;
    // SubProg equal_string pc: 58 op: STARTLINE (58)

    /** eds.e:293			if i > length(target) then*/
    // SubProg equal_string pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_target_17415)){
            _9759 = SEQ_PTR(_target_17415)->length;
    }
    else {
        _9759 = 1;
    }
    // SubProg equal_string pc: 63 op: GREATER_IFW_I (124)
    if (_i_17417 <= _9759)
    goto L5; // [63] 74
    // SubProg equal_string pc: 67 op: STARTLINE (58)

    /** eds.e:294				return 0*/
    // SubProg equal_string pc: 69 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_17415
    DeRefDS(_target_17415);

// block var c_17416

// block var i_17417
    return 0;
    // SubProg equal_string pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 17413 op: 159
    // SubProg equal_string pc: 74 op: STARTLINE (58)

    /** eds.e:296			if target[i] != c then*/
    // SubProg equal_string pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_target_17415);
    _9761 = (object)*(((s1_ptr)_2)->base + _i_17417);
    // SubProg equal_string pc: 80 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9761, _c_17416)){
        _9761 = NOVALUE;
        goto L6; // [80] 91
    }
    _9761 = NOVALUE;
    // SubProg equal_string pc: 84 op: STARTLINE (58)

    /** eds.e:297				return 0*/
    // SubProg equal_string pc: 86 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_17415
    DeRefDS(_target_17415);

// block var c_17416

// block var i_17417
    return 0;
    // SubProg equal_string pc: 90 op: NOP1 (159)
L6: // addr: 91 pc: 90 sub: 17413 op: 159
    // SubProg equal_string pc: 91 op: STARTLINE (58)

    /** eds.e:299		  entry*/
    // SubProg equal_string pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 17413 op: 159
    // SubProg equal_string pc: 94 op: STARTLINE (58)

    /** eds.e:300			c = getc(current_db)*/
    // SubProg equal_string pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg equal_string pc: 98 op: GETC (33)
    if (_46current_db_17333 != last_r_file_no) {
        last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
        last_r_file_no = _46current_db_17333;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_17416 = getc((FILE*)xstdin);
        }
        else{
            _c_17416 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_17416 = getc(last_r_file_ptr);
    }
    // SubProg equal_string pc: 101 op: STARTLINE (58)

    /** eds.e:301		end while*/
    // SubProg equal_string pc: 103 op: ENDWHILE (22)
    goto L2; // [103] 13
    // SubProg equal_string pc: 105 op: NOP1 (159)
L3: // addr: 106 pc: 105 sub: 17413 op: 159
    // SubProg equal_string pc: 106 op: STARTLINE (58)

    /** eds.e:302		return (i = length(target))*/
    // SubProg equal_string pc: 108 op: LENGTH (42)
    if (IS_SEQUENCE(_target_17415)){
            _9764 = SEQ_PTR(_target_17415)->length;
    }
    else {
        _9764 = 1;
    }
    // SubProg equal_string pc: 111 op: EQUALS (3)
    _9765 = (_i_17417 == _9764);
    _9764 = NOVALUE;
    // SubProg equal_string pc: 115 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_17415
    DeRefDS(_target_17415);

// block var c_17416

// block var i_17417
    return _9765;
    // SubProg equal_string pc: 119 op: BADRETURNF (43)
    ;
}


object _46decompress(object _c_17474)
{
    object _s_17475 = NOVALUE;
    object _len_17476 = NOVALUE;
    object _float32_to_atom_inlined_float32_to_atom_at_176_17512 = NOVALUE;
    object _ieee32_inlined_float32_to_atom_at_173_17511 = NOVALUE;
    object _float64_to_atom_inlined_float64_to_atom_at_251_17525 = NOVALUE;
    object _ieee64_inlined_float64_to_atom_at_248_17524 = NOVALUE;
    object _9834 = NOVALUE; // 17542 9834
    object _9833 = NOVALUE; // 17541 9833
    object _9832 = NOVALUE; // 17539 9832
// skipping _9831  name type: 0
// skipping _9830  name type: 0
    object _9829 = NOVALUE; // 17535 9829
// skipping _9828  name type: 0
// skipping _9827  name type: 0
// skipping _9826  name type: 0
// skipping _9825  name type: 0
    object _9824 = NOVALUE; // 17522 9824
    object _9823 = NOVALUE; // 17521 9823
    object _9822 = NOVALUE; // 17520 9822
    object _9821 = NOVALUE; // 17519 9821
    object _9820 = NOVALUE; // 17518 9820
    object _9819 = NOVALUE; // 17517 9819
    object _9818 = NOVALUE; // 17516 9818
    object _9817 = NOVALUE; // 17515 9817
    object _9816 = NOVALUE; // 17514 9816
    object _9815 = NOVALUE; // 17509 9815
    object _9814 = NOVALUE; // 17508 9814
    object _9813 = NOVALUE; // 17507 9813
    object _9812 = NOVALUE; // 17506 9812
    object _9811 = NOVALUE; // 17505 9811
    object _9810 = NOVALUE; // 17503 9810
    object _9809 = NOVALUE; // 17502 9809
    object _9808 = NOVALUE; // 17500 9808
    object _9807 = NOVALUE; // 17499 9807
    object _9806 = NOVALUE; // 17498 9806
    object _9805 = NOVALUE; // 17497 9805
    object _9803 = NOVALUE; // 17495 9803
    object _9802 = NOVALUE; // 17494 9802
    object _9801 = NOVALUE; // 17493 9801
    object _9800 = NOVALUE; // 17492 9800
    object _9799 = NOVALUE; // 17490 9799
    object _9798 = NOVALUE; // 17489 9798
    object _9797 = NOVALUE; // 17488 9797
    object _9796 = NOVALUE; // 17487 9796
    object _9795 = NOVALUE; // 17486 9795
    object _9792 = NOVALUE; // 17482 9792
// skipping _9791  name type: 0
// skipping _9790  name type: 0
// skipping _9789  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg decompress pc: 1 op: INTEGER_CHECK (96)
    // SubProg decompress pc: 3 op: STARTLINE (58)

    /** eds.e:332		if c = 0 then*/
    // SubProg decompress pc: 5 op: EQUALS_IFW_I (121)
    if (_c_17474 != 0)
    goto L1; // [5] 34
    // SubProg decompress pc: 9 op: STARTLINE (58)

    /** eds.e:333			c = getc(current_db)*/
    // SubProg decompress pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg decompress pc: 13 op: GETC (33)
    if (_46current_db_17333 != last_r_file_no) {
        last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
        last_r_file_no = _46current_db_17333;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_17474 = getc((FILE*)xstdin);
        }
        else{
            _c_17474 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_17474 = getc(last_r_file_ptr);
    }
    // SubProg decompress pc: 16 op: STARTLINE (58)

    /** eds.e:334			if c < I2B then*/
    // SubProg decompress pc: 18 op: LESS_IFW_I (119)
    if (_c_17474 >= 249)
    goto L2; // [18] 33
    // SubProg decompress pc: 22 op: STARTLINE (58)

    /** eds.e:335				return c + MIN1B*/
    // SubProg decompress pc: 24 op: PLUS (11)
    _9792 = _c_17474 + -9;
    // SubProg decompress pc: 28 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_17474

// block var s_17475
    DeRef(_s_17475);

// block var len_17476
    return _9792;
    // SubProg decompress pc: 32 op: NOP1 (159)
L2: // addr: 33 pc: 32 sub: 17472 op: 159
    // SubProg decompress pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 17472 op: 159
    // SubProg decompress pc: 34 op: STARTLINE (58)

    /** eds.e:339		switch c with fallthru do*/
    // SubProg decompress pc: 36 op: SWITCH_I (193)
    _0 = _c_17474;
    switch ( _0 ){ 
        // SubProg decompress pc: 41 op: STARTLINE (58)

        /** eds.e:340			case I2B then*/
        // SubProg decompress pc: 43 op: CASE (186)
        case 249:
        // SubProg decompress pc: 45 op: STARTLINE (58)

        /** eds.e:341				return getc(current_db) +*/
        // SubProg decompress pc: 47 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 49 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9795 = getc((FILE*)xstdin);
            }
            else{
                _9795 = getc(last_r_file_ptr);
            }
        }
        else{
            _9795 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 52 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 54 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9796 = getc((FILE*)xstdin);
            }
            else{
                _9796 = getc(last_r_file_ptr);
            }
        }
        else{
            _9796 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 57 op: MULTIPLY (13)
        _9797 = 256 * _9796;
        _9796 = NOVALUE;
        // SubProg decompress pc: 61 op: PLUS (11)
        _9798 = _9795 + _9797;
        _9795 = NOVALUE;
        _9797 = NOVALUE;
        // SubProg decompress pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 67 op: PLUS (11)
        _9799 = _9798 + _46MIN2B_17454;
        if ((object)((uintptr_t)_9799 + (uintptr_t)HIGH_BITS) >= 0){
            _9799 = NewDouble((eudouble)_9799);
        }
        _9798 = NOVALUE;
        // SubProg decompress pc: 71 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_17474

// block var s_17475
        DeRef(_s_17475);

// block var len_17476
        DeRef(_9792);
        _9792 = NOVALUE;
        return _9799;
        // SubProg decompress pc: 75 op: STARTLINE (58)

        /** eds.e:345			case I3B then*/
        // SubProg decompress pc: 77 op: CASE (186)
        case 250:
        // SubProg decompress pc: 79 op: STARTLINE (58)

        /** eds.e:346				return getc(current_db) +*/
        // SubProg decompress pc: 81 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 83 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9800 = getc((FILE*)xstdin);
            }
            else{
                _9800 = getc(last_r_file_ptr);
            }
        }
        else{
            _9800 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 88 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9801 = getc((FILE*)xstdin);
            }
            else{
                _9801 = getc(last_r_file_ptr);
            }
        }
        else{
            _9801 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 91 op: MULTIPLY (13)
        _9802 = 256 * _9801;
        _9801 = NOVALUE;
        // SubProg decompress pc: 95 op: PLUS (11)
        _9803 = _9800 + _9802;
        _9800 = NOVALUE;
        _9802 = NOVALUE;
        // SubProg decompress pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 101 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9805 = getc((FILE*)xstdin);
            }
            else{
                _9805 = getc(last_r_file_ptr);
            }
        }
        else{
            _9805 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 104 op: MULTIPLY (13)
        _9806 = 65536 * _9805;
        _9805 = NOVALUE;
        // SubProg decompress pc: 108 op: PLUS (11)
        _9807 = _9803 + _9806;
        _9803 = NOVALUE;
        _9806 = NOVALUE;
        // SubProg decompress pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 114 op: PLUS (11)
        _9808 = _9807 + _46MIN3B_17461;
        if ((object)((uintptr_t)_9808 + (uintptr_t)HIGH_BITS) >= 0){
            _9808 = NewDouble((eudouble)_9808);
        }
        _9807 = NOVALUE;
        // SubProg decompress pc: 118 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_17474

// block var s_17475
        DeRef(_s_17475);

// block var len_17476
        DeRef(_9799);
        _9799 = NOVALUE;
        DeRef(_9792);
        _9792 = NOVALUE;
        return _9808;
        // SubProg decompress pc: 122 op: STARTLINE (58)

        /** eds.e:351			case I4B then*/
        // SubProg decompress pc: 124 op: CASE (186)
        case 251:
        // SubProg decompress pc: 126 op: STARTLINE (58)

        /** eds.e:352				return get4() + MIN4B*/
        // SubProg decompress pc: 128 op: PROC (27)
        _9809 = _46get4();
        // SubProg decompress pc: 131 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 133 op: PLUS (11)
        if (IS_ATOM_INT(_9809) && IS_ATOM_INT(_46MIN4B_17468)) {
            _9810 = _9809 + _46MIN4B_17468;
            if ((object)((uintptr_t)_9810 + (uintptr_t)HIGH_BITS) >= 0){
                _9810 = NewDouble((eudouble)_9810);
            }
        }
        else {
            _9810 = binary_op(PLUS, _9809, _46MIN4B_17468);
        }
        DeRef(_9809);
        _9809 = NOVALUE;
        // SubProg decompress pc: 137 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_17474

// block var s_17475
        DeRef(_s_17475);

// block var len_17476
        DeRef(_9799);
        _9799 = NOVALUE;
        DeRef(_9808);
        _9808 = NOVALUE;
        DeRef(_9792);
        _9792 = NOVALUE;
        return _9810;
        // SubProg decompress pc: 141 op: STARTLINE (58)

        /** eds.e:354			case F4B then*/
        // SubProg decompress pc: 143 op: CASE (186)
        case 252:
        // SubProg decompress pc: 145 op: STARTLINE (58)

        /** eds.e:355				return convert:float32_to_atom({getc(current_db), getc(current_db),*/
        // SubProg decompress pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 149 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9811 = getc((FILE*)xstdin);
            }
            else{
                _9811 = getc(last_r_file_ptr);
            }
        }
        else{
            _9811 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 154 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9812 = getc((FILE*)xstdin);
            }
            else{
                _9812 = getc(last_r_file_ptr);
            }
        }
        else{
            _9812 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 159 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9813 = getc((FILE*)xstdin);
            }
            else{
                _9813 = getc(last_r_file_ptr);
            }
        }
        else{
            _9813 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 162 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 164 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9814 = getc((FILE*)xstdin);
            }
            else{
                _9814 = getc(last_r_file_ptr);
            }
        }
        else{
            _9814 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 167 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _9811;
        ((intptr_t*)_2)[2] = _9812;
        ((intptr_t*)_2)[3] = _9813;
        ((intptr_t*)_2)[4] = _9814;
        _9815 = MAKE_SEQ(_1);
        _9814 = NOVALUE;
        _9813 = NOVALUE;
        _9812 = NOVALUE;
        _9811 = NOVALUE;
        // SubProg decompress pc: 174 op: ASSIGN (18)
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_17511);
        _ieee32_inlined_float32_to_atom_at_173_17511 = _9815;
        _9815 = NOVALUE;
        // SubProg decompress pc: 177 op: SEQUENCE_CHECK (97)
        // SubProg decompress pc: 179 op: STARTLINE (58)

        /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
        // SubProg decompress pc: 181 op: MACHINE_FUNC (111)
        DeRef(_float32_to_atom_inlined_float32_to_atom_at_176_17512);
        _float32_to_atom_inlined_float32_to_atom_at_176_17512 = machine(49, _ieee32_inlined_float32_to_atom_at_173_17511);
        // SubProg decompress pc: 185 op: NOP1 (159)
        // SubProg decompress pc: 186 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-float32_to_atom from decompress @ 173

// block var ieee32_inlined_float32_to_atom_at_173_17511
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_17511);
        _ieee32_inlined_float32_to_atom_at_173_17511 = NOVALUE;
        // SubProg decompress pc: 188 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_17474

// block var s_17475
        DeRef(_s_17475);

// block var len_17476
        DeRef(_9810);
        _9810 = NOVALUE;
        DeRef(_9799);
        _9799 = NOVALUE;
        DeRef(_9808);
        _9808 = NOVALUE;
        DeRef(_9792);
        _9792 = NOVALUE;
        return _float32_to_atom_inlined_float32_to_atom_at_176_17512;
        // SubProg decompress pc: 192 op: STARTLINE (58)

        /** eds.e:358			case F8B then*/
        // SubProg decompress pc: 194 op: CASE (186)
        case 253:
        // SubProg decompress pc: 196 op: STARTLINE (58)

        /** eds.e:359				return convert:float64_to_atom({getc(current_db), getc(current_db),*/
        // SubProg decompress pc: 198 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 200 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9816 = getc((FILE*)xstdin);
            }
            else{
                _9816 = getc(last_r_file_ptr);
            }
        }
        else{
            _9816 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 205 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9817 = getc((FILE*)xstdin);
            }
            else{
                _9817 = getc(last_r_file_ptr);
            }
        }
        else{
            _9817 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 208 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 210 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9818 = getc((FILE*)xstdin);
            }
            else{
                _9818 = getc(last_r_file_ptr);
            }
        }
        else{
            _9818 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 213 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 215 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9819 = getc((FILE*)xstdin);
            }
            else{
                _9819 = getc(last_r_file_ptr);
            }
        }
        else{
            _9819 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 220 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9820 = getc((FILE*)xstdin);
            }
            else{
                _9820 = getc(last_r_file_ptr);
            }
        }
        else{
            _9820 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 225 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9821 = getc((FILE*)xstdin);
            }
            else{
                _9821 = getc(last_r_file_ptr);
            }
        }
        else{
            _9821 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 228 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 230 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9822 = getc((FILE*)xstdin);
            }
            else{
                _9822 = getc(last_r_file_ptr);
            }
        }
        else{
            _9822 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 235 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9823 = getc((FILE*)xstdin);
            }
            else{
                _9823 = getc(last_r_file_ptr);
            }
        }
        else{
            _9823 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 238 op: RIGHT_BRACE_N (31)
        _1 = NewS1(8);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _9816;
        ((intptr_t*)_2)[2] = _9817;
        ((intptr_t*)_2)[3] = _9818;
        ((intptr_t*)_2)[4] = _9819;
        ((intptr_t*)_2)[5] = _9820;
        ((intptr_t*)_2)[6] = _9821;
        ((intptr_t*)_2)[7] = _9822;
        ((intptr_t*)_2)[8] = _9823;
        _9824 = MAKE_SEQ(_1);
        _9823 = NOVALUE;
        _9822 = NOVALUE;
        _9821 = NOVALUE;
        _9820 = NOVALUE;
        _9819 = NOVALUE;
        _9818 = NOVALUE;
        _9817 = NOVALUE;
        _9816 = NOVALUE;
        // SubProg decompress pc: 249 op: ASSIGN (18)
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_17524);
        _ieee64_inlined_float64_to_atom_at_248_17524 = _9824;
        _9824 = NOVALUE;
        // SubProg decompress pc: 252 op: SEQUENCE_CHECK (97)
        // SubProg decompress pc: 254 op: STARTLINE (58)

        /** convert.e:343		return machine_func(M_F64_TO_A, ieee64)*/
        // SubProg decompress pc: 256 op: MACHINE_FUNC (111)
        DeRef(_float64_to_atom_inlined_float64_to_atom_at_251_17525);
        _float64_to_atom_inlined_float64_to_atom_at_251_17525 = machine(47, _ieee64_inlined_float64_to_atom_at_248_17524);
        // SubProg decompress pc: 260 op: NOP1 (159)
        // SubProg decompress pc: 261 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-float64_to_atom from decompress @ 248

// block var ieee64_inlined_float64_to_atom_at_248_17524
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_17524);
        _ieee64_inlined_float64_to_atom_at_248_17524 = NOVALUE;
        // SubProg decompress pc: 263 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_17474

// block var s_17475
        DeRef(_s_17475);

// block var len_17476
        DeRef(_9810);
        _9810 = NOVALUE;
        DeRef(_9799);
        _9799 = NOVALUE;
        DeRef(_9808);
        _9808 = NOVALUE;
        DeRef(_9792);
        _9792 = NOVALUE;
        return _float64_to_atom_inlined_float64_to_atom_at_251_17525;
        // SubProg decompress pc: 267 op: STARTLINE (58)

        /** eds.e:364			case else*/
        // SubProg decompress pc: 269 op: CASE (186)
        default:
        // SubProg decompress pc: 271 op: STARTLINE (58)

        /** eds.e:366				if c = S1B then*/
        // SubProg decompress pc: 273 op: EQUALS_IFW_I (121)
        if (_c_17474 != 254)
        goto L3; // [273] 287
        // SubProg decompress pc: 277 op: STARTLINE (58)

        /** eds.e:367					len = getc(current_db)*/
        // SubProg decompress pc: 279 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 281 op: GETC (33)
        if (_46current_db_17333 != last_r_file_no) {
            last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
            last_r_file_no = _46current_db_17333;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _len_17476 = getc((FILE*)xstdin);
            }
            else{
                _len_17476 = getc(last_r_file_ptr);
            }
        }
        else{
            _len_17476 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 284 op: ELSE (23)
        goto L4; // [284] 295
        // SubProg decompress pc: 286 op: NOP1 (159)
L3: // addr: 287 pc: 286 sub: 17472 op: 159
        // SubProg decompress pc: 287 op: STARTLINE (58)

        /** eds.e:369					len = get4()*/
        // SubProg decompress pc: 289 op: PROC (27)
        _len_17476 = _46get4();
        // SubProg decompress pc: 292 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_len_17476)) {
            _1 = (object)(DBL_PTR(_len_17476)->dbl);
            DeRefDS(_len_17476);
            _len_17476 = _1;
        }
        // SubProg decompress pc: 294 op: NOP1 (159)
L4: // addr: 295 pc: 294 sub: 17472 op: 159
        // SubProg decompress pc: 295 op: STARTLINE (58)

        /** eds.e:371				s = repeat(0, len)*/
        // SubProg decompress pc: 297 op: PRIVATE_INIT_CHECK (30)
        // SubProg decompress pc: 299 op: REPEAT (32)
        DeRef(_s_17475);
        _s_17475 = Repeat(0, _len_17476);
        // SubProg decompress pc: 303 op: STARTLINE (58)

        /** eds.e:372				for i = 1 to len do*/
        // SubProg decompress pc: 305 op: ASSIGN (18)
        _9829 = _len_17476;
        // SubProg decompress pc: 308 op: FOR_I (125)
        {
            object _i_17534;
            _i_17534 = 1;
L5: // addr: 315 pc: 308 sub: 17472 op: 125
            if (_i_17534 > _9829){
                goto L6; // [308] 362
            }
            // SubProg decompress pc: 315 op: STARTLINE (58)

            /** eds.e:374					c = getc(current_db)*/
            // SubProg decompress pc: 317 op: GLOBAL_INIT_CHECK (109)
            // SubProg decompress pc: 319 op: GETC (33)
            if (_46current_db_17333 != last_r_file_no) {
                last_r_file_ptr = which_file(_46current_db_17333, EF_READ);
                last_r_file_no = _46current_db_17333;
            }
            if (last_r_file_ptr == xstdin) {
                if (in_from_keyb) {
                    _c_17474 = getc((FILE*)xstdin);
                }
                else{
                    _c_17474 = getc(last_r_file_ptr);
                }
            }
            else{
                _c_17474 = getc(last_r_file_ptr);
            }
            // SubProg decompress pc: 322 op: STARTLINE (58)

            /** eds.e:375					if c < I2B then*/
            // SubProg decompress pc: 324 op: LESS_IFW_I (119)
            if (_c_17474 >= 249)
            goto L7; // [324] 341
            // SubProg decompress pc: 328 op: STARTLINE (58)

            /** eds.e:376						s[i] = c + MIN1B*/
            // SubProg decompress pc: 330 op: PLUS (11)
            _9832 = _c_17474 + -9;
            // SubProg decompress pc: 334 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_s_17475);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_17475 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_17534);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9832;
            if( _1 != _9832 ){
                DeRef(_1);
            }
            _9832 = NOVALUE;
            // SubProg decompress pc: 338 op: ELSE (23)
            goto L8; // [338] 355
            // SubProg decompress pc: 340 op: NOP1 (159)
L7: // addr: 341 pc: 340 sub: 17472 op: 159
            // SubProg decompress pc: 341 op: STARTLINE (58)

            /** eds.e:378						s[i] = decompress(c)*/
            // SubProg decompress pc: 343 op: ASSIGN (18)
            DeRef(_9833);
            _9833 = _c_17474;
            // SubProg decompress pc: 346 op: PROC (27)
            _9834 = _46decompress(_9833);
            _9833 = NOVALUE;
            // SubProg decompress pc: 350 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_s_17475);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_17475 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_17534);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9834;
            if( _1 != _9834 ){
                DeRef(_1);
            }
            _9834 = NOVALUE;
            // SubProg decompress pc: 354 op: NOP1 (159)
L8: // addr: 355 pc: 354 sub: 17472 op: 159
            // SubProg decompress pc: 355 op: STARTLINE (58)

            /** eds.e:380				end for*/
            // SubProg decompress pc: 357 op: ENDFOR_INT_UP1 (54)
            _i_17534 = _i_17534 + 1;
            goto L5; // [357] 315
L6: // addr: 362 pc: 357 sub: 17472 op: 54
            ;
        }
        // SubProg decompress pc: 362 op: STARTLINE (58)

        /** eds.e:381				return s*/
        // SubProg decompress pc: 364 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_17474

// block var len_17476
        DeRef(_9810);
        _9810 = NOVALUE;
        DeRef(_9799);
        _9799 = NOVALUE;
        DeRef(_9808);
        _9808 = NOVALUE;
        DeRef(_9792);
        _9792 = NOVALUE;
        return _s_17475;
        // SubProg decompress pc: 368 op: NOPSWITCH (187)
    ;}    // SubProg decompress pc: 369 op: BADRETURNF (43)
    ;
}


void _46save_keys()
{
    object _k_18259 = NOVALUE;
// skipping _10162  name type: 0
    object _10161 = NOVALUE; // 18270 10161
// skipping _10160  name type: 0
// skipping _10159  name type: 0
// skipping _10158  name type: 0
    object _10157 = NOVALUE; // 18264 10157
// skipping _10156  name type: 0
// skipping _10155  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg save_keys pc: 1 op: STARTLINE (58)

    /** eds.e:926		if caching_option = 1 then*/
    // SubProg save_keys pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 5 op: EQUALS_IFW_I (121)
    // SubProg save_keys pc: 9 op: STARTLINE (58)

    /** eds.e:927			if current_table_pos > 0 then*/
    // SubProg save_keys pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 13 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _46current_table_pos_17334, 0)){
        goto L1; // [13] 81
    }
    // SubProg save_keys pc: 17 op: STARTLINE (58)

    /** eds.e:928				k = eu:find({current_db, current_table_pos}, cache_index)*/
    // SubProg save_keys pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 23 op: RIGHT_BRACE_2 (85)
    Ref(_46current_table_pos_17334);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _46current_table_pos_17334;
    _10157 = MAKE_SEQ(_1);
    // SubProg save_keys pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 29 op: FIND_FROM (176)
    _k_18259 = find_from(_10157, _46cache_index_17342, 1);
    DeRefDS(_10157);
    _10157 = NOVALUE;
    // SubProg save_keys pc: 34 op: STARTLINE (58)

    /** eds.e:929				if k != 0 then*/
    // SubProg save_keys pc: 36 op: NOTEQ_IFW_I (122)
    if (_k_18259 == 0)
    goto L2; // [36] 53
    // SubProg save_keys pc: 40 op: STARTLINE (58)

    /** eds.e:930					key_cache[k] = key_pointers*/
    // SubProg save_keys pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 46 op: ASSIGN_SUBS (16)
    RefDS(_46key_pointers_17340);
    _2 = (object)SEQ_PTR(_46key_cache_17341);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _46key_cache_17341 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _k_18259);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _46key_pointers_17340;
    DeRef(_1);
    // SubProg save_keys pc: 50 op: ELSE (23)
    goto L3; // [50] 80
    // SubProg save_keys pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 18257 op: 159
    // SubProg save_keys pc: 53 op: STARTLINE (58)

    /** eds.e:932					key_cache = append(key_cache, key_pointers)*/
    // SubProg save_keys pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 59 op: APPEND (35)
    RefDS(_46key_pointers_17340);
    Append(&_46key_cache_17341, _46key_cache_17341, _46key_pointers_17340);
    // SubProg save_keys pc: 63 op: STARTLINE (58)

    /** eds.e:933					cache_index = append(cache_index, {current_db, current_table_pos})*/
    // SubProg save_keys pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 71 op: RIGHT_BRACE_2 (85)
    Ref(_46current_table_pos_17334);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _46current_table_pos_17334;
    _10161 = MAKE_SEQ(_1);
    // SubProg save_keys pc: 75 op: APPEND (35)
    RefDS(_10161);
    Append(&_46cache_index_17342, _46cache_index_17342, _10161);
    DeRefDS(_10161);
    _10161 = NOVALUE;
    // SubProg save_keys pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 18257 op: 159
    // SubProg save_keys pc: 80 op: NOP1 (159)
L1: // addr: 81 pc: 80 sub: 18257 op: 159
    // SubProg save_keys pc: 81 op: NOP1 (159)
    // SubProg save_keys pc: 82 op: STARTLINE (58)

    /** eds.e:937	end procedure*/
    // SubProg save_keys pc: 84 op: RETURNP (29)

// Exiting block BLOCK: save_keys

// block var k_18259
    return;
    // SubProg save_keys pc: 87 op: BADRETURNF (43)
    ;
}


object _46db_open(object _path_18441, object _lock_method_18442)
{
    object _db_18443 = NOVALUE;
    object _magic_18444 = NOVALUE;
    object _lock_file_1__tmp_at129_18469 = NOVALUE;
    object _lock_file_inlined_lock_file_at_129_18468 = NOVALUE;
    object _lock_file_1__tmp_at169_18476 = NOVALUE;
    object _lock_file_inlined_lock_file_at_169_18475 = NOVALUE;
// skipping _10284  name type: 0
// skipping _10283  name type: 0
// skipping _10282  name type: 0
// skipping _10281  name type: 0
// skipping _10280  name type: 0
// skipping _10279  name type: 0
// skipping _10278  name type: 0
// skipping _10277  name type: 0
// skipping _10276  name type: 0
// skipping _10275  name type: 0
// skipping _10274  name type: 0
// skipping _10273  name type: 0
    object _10272 = NOVALUE; // 18458 10272
// skipping _10271  name type: 0
    object _10270 = NOVALUE; // 18456 10270
// skipping _10269  name type: 0
    object _10268 = NOVALUE; // 18453 10268
// skipping _10267  name type: 0
    object _10266 = NOVALUE; // 18450 10266
    object _10265 = NOVALUE; // 18449 10265
// skipping _10264  name type: 0
    object _10263 = NOVALUE; // 18447 10263
// skipping _10262  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_open pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_open pc: 5 op: STARTLINE (58)

    /** eds.e:1273		db = find(path, Known_Aliases)*/
    // SubProg db_open pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 9 op: FIND_FROM (176)
    _db_18443 = find_from(_path_18441, _46Known_Aliases_17354, 1);
    // SubProg db_open pc: 14 op: STARTLINE (58)

    /** eds.e:1274		if db then*/
    // SubProg db_open pc: 16 op: IF (20)
    if (_db_18443 == 0)
    {
        goto L1; // [16] 54
    }
    else{
    }
    // SubProg db_open pc: 19 op: STARTLINE (58)

    /** eds.e:1276			path = Alias_Details[db][1]*/
    // SubProg db_open pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46Alias_Details_17355);
    _10263 = (object)*(((s1_ptr)_2)->base + _db_18443);
    // SubProg db_open pc: 27 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_18441);
    _2 = (object)SEQ_PTR(_10263);
    _path_18441 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_18441);
    _10263 = NOVALUE;
    // SubProg db_open pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 33 op: STARTLINE (58)

    /** eds.e:1277			lock_method = Alias_Details[db][2][CONNECT_LOCK]*/
    // SubProg db_open pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46Alias_Details_17355);
    _10265 = (object)*(((s1_ptr)_2)->base + _db_18443);
    // SubProg db_open pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_10265);
    _10266 = (object)*(((s1_ptr)_2)->base + 2);
    _10265 = NOVALUE;
    // SubProg db_open pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_10266);
    _lock_method_18442 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_18442)){
        _lock_method_18442 = (object)DBL_PTR(_lock_method_18442)->dbl;
    }
    _10266 = NOVALUE;
    // SubProg db_open pc: 51 op: ELSE (23)
    goto L2; // [51] 70
    // SubProg db_open pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 18439 op: 159
    // SubProg db_open pc: 54 op: STARTLINE (58)

    /** eds.e:1279			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    // SubProg db_open pc: 56 op: PROC (27)
    RefDS(_path_18441);
    RefDS(_10215);
    _10268 = _20defaultext(_path_18441, _10215);
    // SubProg db_open pc: 61 op: PROC (27)
    _0 = _path_18441;
    _path_18441 = _20canonical_path(_10268, 0, 0);
    DeRefDS(_0);
    _10268 = NOVALUE;
    // SubProg db_open pc: 67 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 18439 op: 159
    // SubProg db_open pc: 70 op: STARTLINE (58)

    /** eds.e:1282		if lock_method = DB_LOCK_NO or*/
    // SubProg db_open pc: 72 op: EQUALS (3)
    _10270 = (_lock_method_18442 == 0);
    // SubProg db_open pc: 76 op: SC1_OR_IF (147)
    if (_10270 != 0) {
        goto L3; // [76] 89
    }
    // SubProg db_open pc: 80 op: EQUALS (3)
    _10272 = (_lock_method_18442 == 2);
    // SubProg db_open pc: 84 op: NOP1 (159)
    // SubProg db_open pc: 85 op: IF (20)
    if (_10272 == 0)
    {
        DeRef(_10272);
        _10272 = NOVALUE;
        goto L4; // [85] 99
    }
    else{
        DeRef(_10272);
        _10272 = NOVALUE;
    }
    // SubProg db_open pc: 88 op: NOP1 (159)
L3: // addr: 89 pc: 88 sub: 18439 op: 159
    // SubProg db_open pc: 89 op: STARTLINE (58)

    /** eds.e:1285			db = open(path, "ub")*/
    // SubProg db_open pc: 91 op: OPEN (37)
    _db_18443 = EOpen(_path_18441, _10242, 0);
    // SubProg db_open pc: 96 op: ELSE (23)
    goto L5; // [96] 107
    // SubProg db_open pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 18439 op: 159
    // SubProg db_open pc: 99 op: STARTLINE (58)

    /** eds.e:1288			db = open(path, "rb")*/
    // SubProg db_open pc: 101 op: OPEN (37)
    _db_18443 = EOpen(_path_18441, _10236, 0);
    // SubProg db_open pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 18439 op: 159
    // SubProg db_open pc: 107 op: STARTLINE (58)

    /** eds.e:1291	ifdef WINDOWS then*/
    // SubProg db_open pc: 109 op: STARTLINE (58)

    /** eds.e:1298		if db = -1 then*/
    // SubProg db_open pc: 111 op: EQUALS_IFW_I (121)
    if (_db_18443 != -1)
    goto L6; // [111] 122
    // SubProg db_open pc: 115 op: STARTLINE (58)

    /** eds.e:1299			return DB_OPEN_FAIL*/
    // SubProg db_open pc: 117 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_18441
    DeRefDS(_path_18441);

// block var lock_method_18442

// block var db_18443

// block var magic_18444
    DeRef(_10270);
    _10270 = NOVALUE;
    return -1;
    // SubProg db_open pc: 121 op: NOP1 (159)
L6: // addr: 122 pc: 121 sub: 18439 op: 159
    // SubProg db_open pc: 122 op: STARTLINE (58)

    /** eds.e:1301		if lock_method = DB_LOCK_EXCLUSIVE then*/
    // SubProg db_open pc: 124 op: EQUALS_IFW_I (121)
    if (_lock_method_18442 != 2)
    goto L7; // [124] 162
    // SubProg db_open pc: 128 op: STARTLINE (58)

    /** eds.e:1302			if not io:lock_file(db, io:LOCK_EXCLUSIVE, {}) then*/
    // SubProg db_open pc: 130 op: STARTLINE (58)

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    // SubProg db_open pc: 132 op: RIGHT_BRACE_N (31)
    _0 = _lock_file_1__tmp_at129_18469;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_18443;
    ((intptr_t*)_2)[2] = 2;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at129_18469 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg db_open pc: 138 op: MACHINE_FUNC (111)
    _lock_file_inlined_lock_file_at_129_18468 = machine(61, _lock_file_1__tmp_at129_18469);
    // SubProg db_open pc: 142 op: NOP1 (159)
    // SubProg db_open pc: 143 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-lock_file from db_open @ 129

// block var lock_file_1__tmp_at129_18469
    DeRef(_lock_file_1__tmp_at129_18469);
    _lock_file_1__tmp_at129_18469 = NOVALUE;
    // SubProg db_open pc: 145 op: NOT_IFW (108)
    if (_lock_file_inlined_lock_file_at_129_18468 != 0)
    goto L8; // [145] 201
    // SubProg db_open pc: 148 op: STARTLINE (58)

    /** eds.e:1303				close(db)*/
    // SubProg db_open pc: 150 op: CLOSE (86)
    EClose(_db_18443);
    // SubProg db_open pc: 152 op: STARTLINE (58)

    /** eds.e:1304				return DB_LOCK_FAIL*/
    // SubProg db_open pc: 154 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_18441
    DeRefDS(_path_18441);

// block var lock_method_18442

// block var db_18443

// block var magic_18444
    DeRef(_10270);
    _10270 = NOVALUE;
    return -3;
    // SubProg db_open pc: 158 op: NOP1 (159)
    // SubProg db_open pc: 159 op: ELSE (23)
    goto L8; // [159] 201
    // SubProg db_open pc: 161 op: NOP1 (159)
L7: // addr: 162 pc: 161 sub: 18439 op: 159
    // SubProg db_open pc: 162 op: STARTLINE (58)

    /** eds.e:1306		elsif lock_method = DB_LOCK_SHARED then*/
    // SubProg db_open pc: 164 op: EQUALS_IFW_I (121)
    if (_lock_method_18442 != 1)
    goto L9; // [164] 200
    // SubProg db_open pc: 168 op: STARTLINE (58)

    /** eds.e:1307			if not io:lock_file(db, io:LOCK_SHARED, {}) then*/
    // SubProg db_open pc: 170 op: STARTLINE (58)

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    // SubProg db_open pc: 172 op: RIGHT_BRACE_N (31)
    _0 = _lock_file_1__tmp_at169_18476;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_18443;
    ((intptr_t*)_2)[2] = 1;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at169_18476 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg db_open pc: 178 op: MACHINE_FUNC (111)
    _lock_file_inlined_lock_file_at_169_18475 = machine(61, _lock_file_1__tmp_at169_18476);
    // SubProg db_open pc: 182 op: NOP1 (159)
    // SubProg db_open pc: 183 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-lock_file from db_open @ 169

// block var lock_file_1__tmp_at169_18476
    DeRef(_lock_file_1__tmp_at169_18476);
    _lock_file_1__tmp_at169_18476 = NOVALUE;
    // SubProg db_open pc: 185 op: NOT_IFW (108)
    if (_lock_file_inlined_lock_file_at_169_18475 != 0)
    goto LA; // [185] 199
    // SubProg db_open pc: 188 op: STARTLINE (58)

    /** eds.e:1308				close(db)*/
    // SubProg db_open pc: 190 op: CLOSE (86)
    EClose(_db_18443);
    // SubProg db_open pc: 192 op: STARTLINE (58)

    /** eds.e:1309				return DB_LOCK_FAIL*/
    // SubProg db_open pc: 194 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_18441
    DeRefDS(_path_18441);

// block var lock_method_18442

// block var db_18443

// block var magic_18444
    DeRef(_10270);
    _10270 = NOVALUE;
    return -3;
    // SubProg db_open pc: 198 op: NOP1 (159)
LA: // addr: 199 pc: 198 sub: 18439 op: 159
    // SubProg db_open pc: 199 op: NOP1 (159)
L9: // addr: 200 pc: 199 sub: 18439 op: 159
    // SubProg db_open pc: 200 op: NOP1 (159)
L8: // addr: 201 pc: 200 sub: 18439 op: 159
    // SubProg db_open pc: 201 op: STARTLINE (58)

    /** eds.e:1312		magic = getc(db)*/
    // SubProg db_open pc: 203 op: GETC (33)
    if (_db_18443 != last_r_file_no) {
        last_r_file_ptr = which_file(_db_18443, EF_READ);
        last_r_file_no = _db_18443;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _magic_18444 = getc((FILE*)xstdin);
        }
        else{
            _magic_18444 = getc(last_r_file_ptr);
        }
    }
    else{
        _magic_18444 = getc(last_r_file_ptr);
    }
    // SubProg db_open pc: 206 op: STARTLINE (58)

    /** eds.e:1313		if magic != DB_MAGIC then*/
    // SubProg db_open pc: 208 op: NOTEQ_IFW_I (122)
    if (_magic_18444 == 77)
    goto LB; // [208] 223
    // SubProg db_open pc: 212 op: STARTLINE (58)

    /** eds.e:1314			close(db)*/
    // SubProg db_open pc: 214 op: CLOSE (86)
    EClose(_db_18443);
    // SubProg db_open pc: 216 op: STARTLINE (58)

    /** eds.e:1315			return DB_OPEN_FAIL*/
    // SubProg db_open pc: 218 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_18441
    DeRefDS(_path_18441);

// block var lock_method_18442

// block var db_18443

// block var magic_18444
    DeRef(_10270);
    _10270 = NOVALUE;
    return -1;
    // SubProg db_open pc: 222 op: NOP1 (159)
LB: // addr: 223 pc: 222 sub: 18439 op: 159
    // SubProg db_open pc: 223 op: STARTLINE (58)

    /** eds.e:1317		save_keys()*/
    // SubProg db_open pc: 225 op: PROC (27)
    _46save_keys();
    // SubProg db_open pc: 227 op: STARTLINE (58)

    /** eds.e:1318		current_db = db */
    // SubProg db_open pc: 229 op: ASSIGN_I (113)
    _46current_db_17333 = _db_18443;
    // SubProg db_open pc: 232 op: STARTLINE (58)

    /** eds.e:1319		current_table_pos = -1*/
    // SubProg db_open pc: 234 op: ASSIGN (18)
    DeRef(_46current_table_pos_17334);
    _46current_table_pos_17334 = -1;
    // SubProg db_open pc: 237 op: STARTLINE (58)

    /** eds.e:1320		current_table_name = ""*/
    // SubProg db_open pc: 239 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_46current_table_name_17335);
    _46current_table_name_17335 = _5;
    // SubProg db_open pc: 242 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 244 op: STARTLINE (58)

    /** eds.e:1321		current_lock = lock_method*/
    // SubProg db_open pc: 246 op: ASSIGN_I (113)
    _46current_lock_17339 = _lock_method_18442;
    // SubProg db_open pc: 249 op: STARTLINE (58)

    /** eds.e:1322		db_names = append(db_names, path)*/
    // SubProg db_open pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 253 op: APPEND (35)
    RefDS(_path_18441);
    Append(&_46db_names_17336, _46db_names_17336, _path_18441);
    // SubProg db_open pc: 257 op: STARTLINE (58)

    /** eds.e:1323		db_lock_methods = append(db_lock_methods, lock_method)*/
    // SubProg db_open pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 261 op: APPEND (35)
    Append(&_46db_lock_methods_17338, _46db_lock_methods_17338, _lock_method_18442);
    // SubProg db_open pc: 265 op: STARTLINE (58)

    /** eds.e:1324		db_file_nums = append(db_file_nums, db)*/
    // SubProg db_open pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 269 op: APPEND (35)
    Append(&_46db_file_nums_17337, _46db_file_nums_17337, _db_18443);
    // SubProg db_open pc: 273 op: STARTLINE (58)

    /** eds.e:1325		return DB_OK*/
    // SubProg db_open pc: 275 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_18441
    DeRefDS(_path_18441);

// block var lock_method_18442

// block var db_18443

// block var magic_18444
    DeRef(_10270);
    _10270 = NOVALUE;
    return 0;
    // SubProg db_open pc: 279 op: BADRETURNF (43)
    ;
}


object _46db_select(object _path_18486, object _lock_method_18487)
{
    object _index_18488 = NOVALUE;
// skipping _10300  name type: 0
// skipping _10299  name type: 0
// skipping _10298  name type: 0
// skipping _10297  name type: 0
// skipping _10296  name type: 0
// skipping _10295  name type: 0
// skipping _10294  name type: 0
// skipping _10293  name type: 0
// skipping _10292  name type: 0
    object _10291 = NOVALUE; // 18497 10291
// skipping _10290  name type: 0
    object _10289 = NOVALUE; // 18494 10289
    object _10288 = NOVALUE; // 18493 10288
// skipping _10287  name type: 0
    object _10286 = NOVALUE; // 18491 10286
// skipping _10285  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_select pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_select pc: 5 op: STARTLINE (58)

    /** eds.e:1372		index = find(path, Known_Aliases)*/
    // SubProg db_select pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 9 op: FIND_FROM (176)
    _index_18488 = find_from(_path_18486, _46Known_Aliases_17354, 1);
    // SubProg db_select pc: 14 op: STARTLINE (58)

    /** eds.e:1373		if index then*/
    // SubProg db_select pc: 16 op: IF (20)
    if (_index_18488 == 0)
    {
        goto L1; // [16] 54
    }
    else{
    }
    // SubProg db_select pc: 19 op: STARTLINE (58)

    /** eds.e:1375			path = Alias_Details[index][1]*/
    // SubProg db_select pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46Alias_Details_17355);
    _10286 = (object)*(((s1_ptr)_2)->base + _index_18488);
    // SubProg db_select pc: 27 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_18486);
    _2 = (object)SEQ_PTR(_10286);
    _path_18486 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_18486);
    _10286 = NOVALUE;
    // SubProg db_select pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 33 op: STARTLINE (58)

    /** eds.e:1376			lock_method = Alias_Details[index][2][CONNECT_LOCK]*/
    // SubProg db_select pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46Alias_Details_17355);
    _10288 = (object)*(((s1_ptr)_2)->base + _index_18488);
    // SubProg db_select pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_10288);
    _10289 = (object)*(((s1_ptr)_2)->base + 2);
    _10288 = NOVALUE;
    // SubProg db_select pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_10289);
    _lock_method_18487 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_18487)){
        _lock_method_18487 = (object)DBL_PTR(_lock_method_18487)->dbl;
    }
    _10289 = NOVALUE;
    // SubProg db_select pc: 51 op: ELSE (23)
    goto L2; // [51] 70
    // SubProg db_select pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 18484 op: 159
    // SubProg db_select pc: 54 op: STARTLINE (58)

    /** eds.e:1378			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    // SubProg db_select pc: 56 op: PROC (27)
    RefDS(_path_18486);
    RefDS(_10215);
    _10291 = _20defaultext(_path_18486, _10215);
    // SubProg db_select pc: 61 op: PROC (27)
    _0 = _path_18486;
    _path_18486 = _20canonical_path(_10291, 0, 0);
    DeRefDS(_0);
    _10291 = NOVALUE;
    // SubProg db_select pc: 67 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 18484 op: 159
    // SubProg db_select pc: 70 op: STARTLINE (58)

    /** eds.e:1381		index = eu:find(path, db_names)*/
    // SubProg db_select pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 74 op: FIND_FROM (176)
    _index_18488 = find_from(_path_18486, _46db_names_17336, 1);
    // SubProg db_select pc: 79 op: STARTLINE (58)

    /** eds.e:1382		if index = 0 then*/
    // SubProg db_select pc: 81 op: EQUALS_IFW_I (121)
    if (_index_18488 != 0)
    goto L3; // [81] 130
    // SubProg db_select pc: 85 op: STARTLINE (58)

    /** eds.e:1383			if lock_method = -1 then*/
    // SubProg db_select pc: 87 op: EQUALS_IFW_I (121)
    if (_lock_method_18487 != -1)
    goto L4; // [87] 98
    // SubProg db_select pc: 91 op: STARTLINE (58)

    /** eds.e:1384				return DB_OPEN_FAIL*/
    // SubProg db_select pc: 93 op: RETURNF (28)

// Exiting block BLOCK: db_select

// block var path_18486
    DeRefDS(_path_18486);

// block var lock_method_18487

// block var index_18488
    return -1;
    // SubProg db_select pc: 97 op: NOP1 (159)
L4: // addr: 98 pc: 97 sub: 18484 op: 159
    // SubProg db_select pc: 98 op: STARTLINE (58)

    /** eds.e:1386			index = db_open(path, lock_method)*/
    // SubProg db_select pc: 100 op: PROC (27)
    RefDS(_path_18486);
    _index_18488 = _46db_open(_path_18486, _lock_method_18487);
    // SubProg db_select pc: 105 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_18488)) {
        _1 = (object)(DBL_PTR(_index_18488)->dbl);
        DeRefDS(_index_18488);
        _index_18488 = _1;
    }
    // SubProg db_select pc: 107 op: STARTLINE (58)

    /** eds.e:1387			if index != DB_OK then*/
    // SubProg db_select pc: 109 op: NOTEQ_IFW_I (122)
    if (_index_18488 == 0)
    goto L5; // [109] 120
    // SubProg db_select pc: 113 op: STARTLINE (58)

    /** eds.e:1388				return index*/
    // SubProg db_select pc: 115 op: RETURNF (28)

// Exiting block BLOCK: db_select

// block var path_18486
    DeRefDS(_path_18486);

// block var lock_method_18487
    return _index_18488;
    // SubProg db_select pc: 119 op: NOP1 (159)
L5: // addr: 120 pc: 119 sub: 18484 op: 159
    // SubProg db_select pc: 120 op: STARTLINE (58)

    /** eds.e:1390			index = eu:find(path, db_names)*/
    // SubProg db_select pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 124 op: FIND_FROM (176)
    _index_18488 = find_from(_path_18486, _46db_names_17336, 1);
    // SubProg db_select pc: 129 op: NOP1 (159)
L3: // addr: 130 pc: 129 sub: 18484 op: 159
    // SubProg db_select pc: 130 op: STARTLINE (58)

    /** eds.e:1392		save_keys()*/
    // SubProg db_select pc: 132 op: PROC (27)
    _46save_keys();
    // SubProg db_select pc: 134 op: STARTLINE (58)

    /** eds.e:1393		current_db = db_file_nums[index]*/
    // SubProg db_select pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 138 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_46db_file_nums_17337);
    _46current_db_17333 = (object)*(((s1_ptr)_2)->base + _index_18488);
    if (!IS_ATOM_INT(_46current_db_17333))
    _46current_db_17333 = (object)DBL_PTR(_46current_db_17333)->dbl;
    // SubProg db_select pc: 142 op: STARTLINE (58)

    /** eds.e:1394		current_lock = db_lock_methods[index]*/
    // SubProg db_select pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 146 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_46db_lock_methods_17338);
    _46current_lock_17339 = (object)*(((s1_ptr)_2)->base + _index_18488);
    if (!IS_ATOM_INT(_46current_lock_17339))
    _46current_lock_17339 = (object)DBL_PTR(_46current_lock_17339)->dbl;
    // SubProg db_select pc: 150 op: STARTLINE (58)

    /** eds.e:1395		current_table_pos = -1*/
    // SubProg db_select pc: 152 op: ASSIGN (18)
    DeRef(_46current_table_pos_17334);
    _46current_table_pos_17334 = -1;
    // SubProg db_select pc: 155 op: STARTLINE (58)

    /** eds.e:1396		current_table_name = ""*/
    // SubProg db_select pc: 157 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_46current_table_name_17335);
    _46current_table_name_17335 = _5;
    // SubProg db_select pc: 160 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 162 op: STARTLINE (58)

    /** eds.e:1397		key_pointers = {}*/
    // SubProg db_select pc: 164 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_46key_pointers_17340);
    _46key_pointers_17340 = _5;
    // SubProg db_select pc: 167 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 169 op: STARTLINE (58)

    /** eds.e:1398		return DB_OK*/
    // SubProg db_select pc: 171 op: RETURNF (28)

// Exiting block BLOCK: db_select

// block var path_18486
    DeRefDS(_path_18486);

// block var lock_method_18487

// block var index_18488
    return 0;
    // SubProg db_select pc: 175 op: BADRETURNF (43)
    ;
}


void _46db_close()
{
    object _unlock_file_1__tmp_at25_18517 = NOVALUE;
    object _index_18512 = NOVALUE;
// skipping _10311  name type: 0
// skipping _10310  name type: 0
// skipping _10309  name type: 0
    object _10308 = NOVALUE; // 18527 10308
    object _10307 = NOVALUE; // 18526 10307
    object _10306 = NOVALUE; // 18524 10306
// skipping _10305  name type: 0
// skipping _10304  name type: 0
// skipping _10303  name type: 0
// skipping _10302  name type: 0
// skipping _10301  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_close pc: 1 op: STARTLINE (58)

    /** eds.e:1413		if current_db = -1 then*/
    // SubProg db_close pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 5 op: EQUALS_IFW_I (121)
    if (_46current_db_17333 != -1)
    goto L1; // [5] 15
    // SubProg db_close pc: 9 op: STARTLINE (58)

    /** eds.e:1414			return*/
    // SubProg db_close pc: 11 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: db_close

// block var index_18512
    return;
    // SubProg db_close pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 18510 op: 159
    // SubProg db_close pc: 15 op: STARTLINE (58)

    /** eds.e:1417		if current_lock then*/
    // SubProg db_close pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 19 op: IF (20)
    if (_46current_lock_17339 == 0)
    {
        goto L2; // [19] 43
    }
    else{
    }
    // SubProg db_close pc: 22 op: STARTLINE (58)

    /** eds.e:1418			io:unlock_file(current_db, {})*/
    // SubProg db_close pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 26 op: STARTLINE (58)

    /** io.e:1086		machine_proc(M_UNLOCK_FILE, {fn, r})*/
    // SubProg db_close pc: 28 op: RIGHT_BRACE_2 (85)
    RefDS(_5);
    DeRef(_unlock_file_1__tmp_at25_18517);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _5;
    _unlock_file_1__tmp_at25_18517 = MAKE_SEQ(_1);
    // SubProg db_close pc: 32 op: MACHINE_PROC (112)
    machine(62, _unlock_file_1__tmp_at25_18517);
    // SubProg db_close pc: 35 op: STARTLINE (58)

    /** io.e:1087	end procedure*/
    // SubProg db_close pc: 37 op: ELSE (23)
    goto L3; // [37] 40
    // SubProg db_close pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 18510 op: 159
    // SubProg db_close pc: 40 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-unlock_file from db_close @ 25

// block var unlock_file_1__tmp_at25_18517
    DeRef(_unlock_file_1__tmp_at25_18517);
    _unlock_file_1__tmp_at25_18517 = NOVALUE;
    // SubProg db_close pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 18510 op: 159
    // SubProg db_close pc: 43 op: STARTLINE (58)

    /** eds.e:1420		close(current_db)*/
    // SubProg db_close pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 47 op: CLOSE (86)
    EClose(_46current_db_17333);
    // SubProg db_close pc: 49 op: STARTLINE (58)

    /** eds.e:1422		index = eu:find(current_db, db_file_nums)*/
    // SubProg db_close pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 55 op: FIND_FROM (176)
    _index_18512 = find_from(_46current_db_17333, _46db_file_nums_17337, 1);
    // SubProg db_close pc: 60 op: STARTLINE (58)

    /** eds.e:1423		db_names = remove(db_names, index)*/
    // SubProg db_close pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 64 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_46db_names_17336);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_18512)) ? _index_18512 : (object)(DBL_PTR(_index_18512)->dbl);
        int stop = (IS_ATOM_INT(_index_18512)) ? _index_18512 : (object)(DBL_PTR(_index_18512)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_46db_names_17336), start, &_46db_names_17336 );
            }
            else Tail(SEQ_PTR(_46db_names_17336), stop+1, &_46db_names_17336);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_46db_names_17336), start, &_46db_names_17336);
        }
        else {
            assign_slice_seq = &assign_space;
            _46db_names_17336 = Remove_elements(start, stop, (SEQ_PTR(_46db_names_17336)->ref == 1));
        }
    }
    // SubProg db_close pc: 69 op: STARTLINE (58)

    /** eds.e:1424		db_file_nums = remove(db_file_nums, index)*/
    // SubProg db_close pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 73 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_46db_file_nums_17337);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_18512)) ? _index_18512 : (object)(DBL_PTR(_index_18512)->dbl);
        int stop = (IS_ATOM_INT(_index_18512)) ? _index_18512 : (object)(DBL_PTR(_index_18512)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_46db_file_nums_17337), start, &_46db_file_nums_17337 );
            }
            else Tail(SEQ_PTR(_46db_file_nums_17337), stop+1, &_46db_file_nums_17337);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_46db_file_nums_17337), start, &_46db_file_nums_17337);
        }
        else {
            assign_slice_seq = &assign_space;
            _46db_file_nums_17337 = Remove_elements(start, stop, (SEQ_PTR(_46db_file_nums_17337)->ref == 1));
        }
    }
    // SubProg db_close pc: 78 op: STARTLINE (58)

    /** eds.e:1425		db_lock_methods = remove(db_lock_methods, index)*/
    // SubProg db_close pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 82 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_46db_lock_methods_17338);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_18512)) ? _index_18512 : (object)(DBL_PTR(_index_18512)->dbl);
        int stop = (IS_ATOM_INT(_index_18512)) ? _index_18512 : (object)(DBL_PTR(_index_18512)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_46db_lock_methods_17338), start, &_46db_lock_methods_17338 );
            }
            else Tail(SEQ_PTR(_46db_lock_methods_17338), stop+1, &_46db_lock_methods_17338);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_46db_lock_methods_17338), start, &_46db_lock_methods_17338);
        }
        else {
            assign_slice_seq = &assign_space;
            _46db_lock_methods_17338 = Remove_elements(start, stop, (SEQ_PTR(_46db_lock_methods_17338)->ref == 1));
        }
    }
    // SubProg db_close pc: 87 op: STARTLINE (58)

    /** eds.e:1427		for i = length(cache_index) to 1 by -1 do*/
    // SubProg db_close pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_46cache_index_17342)){
            _10306 = SEQ_PTR(_46cache_index_17342)->length;
    }
    else {
        _10306 = 1;
    }
    // SubProg db_close pc: 94 op: FOR_I (125)
    {
        object _i_18523;
        _i_18523 = _10306;
L4: // addr: 101 pc: 94 sub: 18510 op: 125
        if (_i_18523 < 1){
            goto L5; // [94] 145
        }
        // SubProg db_close pc: 101 op: STARTLINE (58)

        /** eds.e:1428			if cache_index[i][1] = current_db then*/
        // SubProg db_close pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_46cache_index_17342);
        _10307 = (object)*(((s1_ptr)_2)->base + _i_18523);
        // SubProg db_close pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_10307);
        _10308 = (object)*(((s1_ptr)_2)->base + 1);
        _10307 = NOVALUE;
        // SubProg db_close pc: 113 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 115 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _10308, _46current_db_17333)){
            _10308 = NOVALUE;
            goto L6; // [115] 138
        }
        _10308 = NOVALUE;
        // SubProg db_close pc: 119 op: STARTLINE (58)

        /** eds.e:1429				cache_index = remove(cache_index, i)*/
        // SubProg db_close pc: 121 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 123 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_46cache_index_17342);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_i_18523)) ? _i_18523 : (object)(DBL_PTR(_i_18523)->dbl);
            int stop = (IS_ATOM_INT(_i_18523)) ? _i_18523 : (object)(DBL_PTR(_i_18523)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_46cache_index_17342), start, &_46cache_index_17342 );
                }
                else Tail(SEQ_PTR(_46cache_index_17342), stop+1, &_46cache_index_17342);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_46cache_index_17342), start, &_46cache_index_17342);
            }
            else {
                assign_slice_seq = &assign_space;
                _46cache_index_17342 = Remove_elements(start, stop, (SEQ_PTR(_46cache_index_17342)->ref == 1));
            }
        }
        // SubProg db_close pc: 128 op: STARTLINE (58)

        /** eds.e:1430				key_cache = remove(key_cache, i)*/
        // SubProg db_close pc: 130 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 132 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_46key_cache_17341);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_i_18523)) ? _i_18523 : (object)(DBL_PTR(_i_18523)->dbl);
            int stop = (IS_ATOM_INT(_i_18523)) ? _i_18523 : (object)(DBL_PTR(_i_18523)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_46key_cache_17341), start, &_46key_cache_17341 );
                }
                else Tail(SEQ_PTR(_46key_cache_17341), stop+1, &_46key_cache_17341);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_46key_cache_17341), start, &_46key_cache_17341);
            }
            else {
                assign_slice_seq = &assign_space;
                _46key_cache_17341 = Remove_elements(start, stop, (SEQ_PTR(_46key_cache_17341)->ref == 1));
            }
        }
        // SubProg db_close pc: 137 op: NOP1 (159)
L6: // addr: 138 pc: 137 sub: 18510 op: 159
        // SubProg db_close pc: 138 op: STARTLINE (58)

        /** eds.e:1432		end for*/
        // SubProg db_close pc: 140 op: ENDFOR_GENERAL (39)
        _i_18523 = _i_18523 + -1;
        goto L4; // [140] 101
L5: // addr: 145 pc: 140 sub: 18510 op: 39
        ;
    }
    // SubProg db_close pc: 145 op: STARTLINE (58)

    /** eds.e:1433		current_table_pos = -1*/
    // SubProg db_close pc: 147 op: ASSIGN (18)
    DeRef(_46current_table_pos_17334);
    _46current_table_pos_17334 = -1;
    // SubProg db_close pc: 150 op: STARTLINE (58)

    /** eds.e:1434		current_table_name = ""	*/
    // SubProg db_close pc: 152 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_46current_table_name_17335);
    _46current_table_name_17335 = _5;
    // SubProg db_close pc: 155 op: SEQUENCE_CHECK (97)
    // SubProg db_close pc: 157 op: STARTLINE (58)

    /** eds.e:1435		current_db = -1*/
    // SubProg db_close pc: 159 op: ASSIGN_I (113)
    _46current_db_17333 = -1;
    // SubProg db_close pc: 162 op: STARTLINE (58)

    /** eds.e:1436		key_pointers = {}*/
    // SubProg db_close pc: 164 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_46key_pointers_17340);
    _46key_pointers_17340 = _5;
    // SubProg db_close pc: 167 op: SEQUENCE_CHECK (97)
    // SubProg db_close pc: 169 op: STARTLINE (58)

    /** eds.e:1437	end procedure*/
    // SubProg db_close pc: 171 op: RETURNP (29)

// Exiting block BLOCK: db_close

// block var index_18512
    return;
    // SubProg db_close pc: 174 op: BADRETURNF (43)
    ;
}


object _46table_find(object _name_18533)
{
    object _tables_18534 = NOVALUE;
    object _nt_18535 = NOVALUE;
    object _t_header_18536 = NOVALUE;
    object _name_ptr_18537 = NOVALUE;
    object _seek_1__tmp_at6_18540 = NOVALUE;
    object _seek_inlined_seek_at_6_18539 = NOVALUE;
    object _seek_1__tmp_at44_18547 = NOVALUE;
    object _seek_inlined_seek_at_44_18546 = NOVALUE;
    object _seek_1__tmp_at84_18555 = NOVALUE;
    object _seek_inlined_seek_at_84_18554 = NOVALUE;
    object _seek_1__tmp_at106_18559 = NOVALUE;
    object _seek_inlined_seek_at_106_18558 = NOVALUE;
// skipping _10321  name type: 0
// skipping _10320  name type: 0
    object _10319 = NOVALUE; // 18561 10319
// skipping _10318  name type: 0
    object _10317 = NOVALUE; // 18552 10317
// skipping _10316  name type: 0
// skipping _10315  name type: 0
// skipping _10314  name type: 0
// skipping _10313  name type: 0
    object _10312 = NOVALUE; // 18542 10312
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg table_find pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg table_find pc: 3 op: STARTLINE (58)

    /** eds.e:1446		io:seek(current_db, TABLE_HEADERS)*/
    // SubProg table_find pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg table_find pc: 7 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg table_find pc: 9 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at6_18540);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at6_18540 = MAKE_SEQ(_1);
    // SubProg table_find pc: 13 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_6_18539 = machine(19, _seek_1__tmp_at6_18540);
    // SubProg table_find pc: 17 op: NOP1 (159)
    // SubProg table_find pc: 18 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 6

// block var seek_1__tmp_at6_18540
    DeRefi(_seek_1__tmp_at6_18540);
    _seek_1__tmp_at6_18540 = NOVALUE;
    // SubProg table_find pc: 20 op: STARTLINE (58)

    /** eds.e:1447		if length(vLastErrors) > 0 then return -1 end if*/
    // SubProg table_find pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg table_find pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_46vLastErrors_17357)){
            _10312 = SEQ_PTR(_46vLastErrors_17357)->length;
    }
    else {
        _10312 = 1;
    }
    // SubProg table_find pc: 27 op: GREATER_IFW_I (124)
    if (_10312 <= 0)
    goto L1; // [27] 36
    // SubProg table_find pc: 31 op: RETURNF (28)

// Exiting block BLOCK: table_find

// block var name_18533
    DeRefDS(_name_18533);

// block var tables_18534
    DeRef(_tables_18534);

// block var nt_18535
    DeRef(_nt_18535);

// block var t_header_18536
    DeRef(_t_header_18536);

// block var name_ptr_18537
    DeRef(_name_ptr_18537);
    return -1;
    // SubProg table_find pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 18531 op: 159
    // SubProg table_find pc: 36 op: STARTLINE (58)

    /** eds.e:1448		tables = get4()*/
    // SubProg table_find pc: 38 op: PROC (27)
    _0 = _tables_18534;
    _tables_18534 = _46get4();
    DeRef(_0);
    // SubProg table_find pc: 41 op: STARTLINE (58)

    /** eds.e:1449		io:seek(current_db, tables)*/
    // SubProg table_find pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg table_find pc: 45 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg table_find pc: 47 op: RIGHT_BRACE_2 (85)
    Ref(_tables_18534);
    DeRef(_seek_1__tmp_at44_18547);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _tables_18534;
    _seek_1__tmp_at44_18547 = MAKE_SEQ(_1);
    // SubProg table_find pc: 51 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_44_18546 = machine(19, _seek_1__tmp_at44_18547);
    // SubProg table_find pc: 55 op: NOP1 (159)
    // SubProg table_find pc: 56 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 44

// block var seek_1__tmp_at44_18547
    DeRef(_seek_1__tmp_at44_18547);
    _seek_1__tmp_at44_18547 = NOVALUE;
    // SubProg table_find pc: 58 op: STARTLINE (58)

    /** eds.e:1450		nt = get4()*/
    // SubProg table_find pc: 60 op: PROC (27)
    _0 = _nt_18535;
    _nt_18535 = _46get4();
    DeRef(_0);
    // SubProg table_find pc: 63 op: STARTLINE (58)

    /** eds.e:1451		t_header = tables+4*/
    // SubProg table_find pc: 65 op: PLUS (11)
    DeRef(_t_header_18536);
    if (IS_ATOM_INT(_tables_18534)) {
        _t_header_18536 = _tables_18534 + 4;
        if ((object)((uintptr_t)_t_header_18536 + (uintptr_t)HIGH_BITS) >= 0){
            _t_header_18536 = NewDouble((eudouble)_t_header_18536);
        }
    }
    else {
        _t_header_18536 = NewDouble(DBL_PTR(_tables_18534)->dbl + (eudouble)4);
    }
    // SubProg table_find pc: 69 op: STARTLINE (58)

    /** eds.e:1452		for i = 1 to nt do*/
    // SubProg table_find pc: 71 op: ASSIGN (18)
    Ref(_nt_18535);
    DeRef(_10317);
    _10317 = _nt_18535;
    // SubProg table_find pc: 74 op: FOR (21)
    {
        object _i_18551;
        _i_18551 = 1;
L2: // addr: 81 pc: 74 sub: 18531 op: 21
        if (binary_op_a(GREATER, _i_18551, _10317)){
            goto L3; // [74] 150
        }
        // SubProg table_find pc: 81 op: STARTLINE (58)

        /** eds.e:1453			io:seek(current_db, t_header)*/
        // SubProg table_find pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg table_find pc: 85 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg table_find pc: 87 op: RIGHT_BRACE_2 (85)
        Ref(_t_header_18536);
        DeRef(_seek_1__tmp_at84_18555);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _46current_db_17333;
        ((intptr_t *)_2)[2] = _t_header_18536;
        _seek_1__tmp_at84_18555 = MAKE_SEQ(_1);
        // SubProg table_find pc: 91 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_84_18554 = machine(19, _seek_1__tmp_at84_18555);
        // SubProg table_find pc: 95 op: NOP1 (159)
        // SubProg table_find pc: 96 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 84

// block var seek_1__tmp_at84_18555
        DeRef(_seek_1__tmp_at84_18555);
        _seek_1__tmp_at84_18555 = NOVALUE;
        // SubProg table_find pc: 98 op: STARTLINE (58)

        /** eds.e:1454			name_ptr = get4()*/
        // SubProg table_find pc: 100 op: PROC (27)
        _0 = _name_ptr_18537;
        _name_ptr_18537 = _46get4();
        DeRef(_0);
        // SubProg table_find pc: 103 op: STARTLINE (58)

        /** eds.e:1455			io:seek(current_db, name_ptr)*/
        // SubProg table_find pc: 105 op: GLOBAL_INIT_CHECK (109)
        // SubProg table_find pc: 107 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg table_find pc: 109 op: RIGHT_BRACE_2 (85)
        Ref(_name_ptr_18537);
        DeRef(_seek_1__tmp_at106_18559);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _46current_db_17333;
        ((intptr_t *)_2)[2] = _name_ptr_18537;
        _seek_1__tmp_at106_18559 = MAKE_SEQ(_1);
        // SubProg table_find pc: 113 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_106_18558 = machine(19, _seek_1__tmp_at106_18559);
        // SubProg table_find pc: 117 op: NOP1 (159)
        // SubProg table_find pc: 118 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 106

// block var seek_1__tmp_at106_18559
        DeRef(_seek_1__tmp_at106_18559);
        _seek_1__tmp_at106_18559 = NOVALUE;
        // SubProg table_find pc: 120 op: STARTLINE (58)

        /** eds.e:1456			if equal_string(name) > 0 then*/
        // SubProg table_find pc: 122 op: PROC (27)
        RefDS(_name_18533);
        _10319 = _46equal_string(_name_18533);
        // SubProg table_find pc: 126 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _10319, 0)){
            DeRef(_10319);
            _10319 = NOVALUE;
            goto L4; // [126] 137
        }
        DeRef(_10319);
        _10319 = NOVALUE;
        // SubProg table_find pc: 130 op: STARTLINE (58)

        /** eds.e:1458				return t_header*/
        // SubProg table_find pc: 132 op: RETURNF (28)
        DeRef(_i_18551);

// Exiting block BLOCK: table_find

// block var name_18533
        DeRefDS(_name_18533);

// block var tables_18534
        DeRef(_tables_18534);

// block var nt_18535
        DeRef(_nt_18535);

// block var name_ptr_18537
        DeRef(_name_ptr_18537);
        return _t_header_18536;
        // SubProg table_find pc: 136 op: NOP1 (159)
L4: // addr: 137 pc: 136 sub: 18531 op: 159
        // SubProg table_find pc: 137 op: STARTLINE (58)

        /** eds.e:1460			t_header += SIZEOF_TABLE_HEADER*/
        // SubProg table_find pc: 139 op: PLUS (11)
        _0 = _t_header_18536;
        if (IS_ATOM_INT(_t_header_18536)) {
            _t_header_18536 = _t_header_18536 + 16;
            if ((object)((uintptr_t)_t_header_18536 + (uintptr_t)HIGH_BITS) >= 0){
                _t_header_18536 = NewDouble((eudouble)_t_header_18536);
            }
        }
        else {
            _t_header_18536 = NewDouble(DBL_PTR(_t_header_18536)->dbl + (eudouble)16);
        }
        DeRef(_0);
        // SubProg table_find pc: 143 op: STARTLINE (58)

        /** eds.e:1461		end for*/
        // SubProg table_find pc: 145 op: ENDFOR_INT_UP1 (54)
        _0 = _i_18551;
        if (IS_ATOM_INT(_i_18551)) {
            _i_18551 = _i_18551 + 1;
            if ((object)((uintptr_t)_i_18551 +(uintptr_t) HIGH_BITS) >= 0){
                _i_18551 = NewDouble((eudouble)_i_18551);
            }
        }
        else {
            _i_18551 = binary_op_a(PLUS, _i_18551, 1);
        }
        DeRef(_0);
        goto L2; // [145] 81
L3: // addr: 150 pc: 145 sub: 18531 op: 54
        ;
        DeRef(_i_18551);
    }
    // SubProg table_find pc: 150 op: STARTLINE (58)

    /** eds.e:1462		return -1*/
    // SubProg table_find pc: 152 op: RETURNF (28)

// Exiting block BLOCK: table_find

// block var name_18533
    DeRefDS(_name_18533);

// block var tables_18534
    DeRef(_tables_18534);

// block var nt_18535
    DeRef(_nt_18535);

// block var t_header_18536
    DeRef(_t_header_18536);

// block var name_ptr_18537
    DeRef(_name_ptr_18537);
    return -1;
    // SubProg table_find pc: 156 op: BADRETURNF (43)
    ;
}


object _46db_select_table(object _name_18566)
{
    object _table_18567 = NOVALUE;
    object _nkeys_18568 = NOVALUE;
    object _index_18569 = NOVALUE;
    object _block_ptr_18570 = NOVALUE;
    object _block_size_18571 = NOVALUE;
    object _blocks_18572 = NOVALUE;
    object _k_18573 = NOVALUE;
    object _seek_1__tmp_at120_18592 = NOVALUE;
    object _seek_inlined_seek_at_120_18591 = NOVALUE;
    object _pos_inlined_seek_at_117_18590 = NOVALUE;
    object _seek_1__tmp_at178_18602 = NOVALUE;
    object _seek_inlined_seek_at_178_18601 = NOVALUE;
    object _seek_1__tmp_at205_18607 = NOVALUE;
    object _seek_inlined_seek_at_205_18606 = NOVALUE;
// skipping _10342  name type: 0
// skipping _10341  name type: 0
    object _10340 = NOVALUE; // 18611 10340
    object _10339 = NOVALUE; // 18610 10339
// skipping _10338  name type: 0
// skipping _10337  name type: 0
    object _10336 = NOVALUE; // 18599 10336
// skipping _10335  name type: 0
// skipping _10334  name type: 0
// skipping _10333  name type: 0
// skipping _10332  name type: 0
    object _10331 = NOVALUE; // 18588 10331
// skipping _10330  name type: 0
// skipping _10329  name type: 0
// skipping _10328  name type: 0
// skipping _10327  name type: 0
    object _10326 = NOVALUE; // 18581 10326
// skipping _10325  name type: 0
// skipping _10324  name type: 0
// skipping _10323  name type: 0
    object _10322 = NOVALUE; // 18575 10322
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_select_table pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_select_table pc: 3 op: STARTLINE (58)

    /** eds.e:1501		if equal(current_table_name, name) then*/
    // SubProg db_select_table pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 7 op: EQUAL (153)
    if (_46current_table_name_17335 == _name_18566)
    _10322 = 1;
    else if (IS_ATOM_INT(_46current_table_name_17335) && IS_ATOM_INT(_name_18566))
    _10322 = 0;
    else
    _10322 = (compare(_46current_table_name_17335, _name_18566) == 0);
    // SubProg db_select_table pc: 11 op: IF (20)
    if (_10322 == 0)
    {
        _10322 = NOVALUE;
        goto L1; // [11] 21
    }
    else{
        _10322 = NOVALUE;
    }
    // SubProg db_select_table pc: 14 op: STARTLINE (58)

    /** eds.e:1502			return DB_OK*/
    // SubProg db_select_table pc: 16 op: RETURNF (28)

// Exiting block BLOCK: db_select_table

// block var name_18566
    DeRefDS(_name_18566);

// block var table_18567
    DeRef(_table_18567);

// block var nkeys_18568
    DeRef(_nkeys_18568);

// block var index_18569
    DeRef(_index_18569);

// block var block_ptr_18570
    DeRef(_block_ptr_18570);

// block var block_size_18571
    DeRef(_block_size_18571);

// block var blocks_18572

// block var k_18573
    return 0;
    // SubProg db_select_table pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 18564 op: 159
    // SubProg db_select_table pc: 21 op: STARTLINE (58)

    /** eds.e:1504		table = table_find(name)*/
    // SubProg db_select_table pc: 23 op: PROC (27)
    RefDS(_name_18566);
    _0 = _table_18567;
    _table_18567 = _46table_find(_name_18566);
    DeRef(_0);
    // SubProg db_select_table pc: 27 op: STARTLINE (58)

    /** eds.e:1505		if table = -1 then*/
    // SubProg db_select_table pc: 29 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _table_18567, -1)){
        goto L2; // [29] 40
    }
    // SubProg db_select_table pc: 33 op: STARTLINE (58)

    /** eds.e:1506			return DB_OPEN_FAIL*/
    // SubProg db_select_table pc: 35 op: RETURNF (28)

// Exiting block BLOCK: db_select_table

// block var name_18566
    DeRefDS(_name_18566);

// block var table_18567
    DeRef(_table_18567);

// block var nkeys_18568
    DeRef(_nkeys_18568);

// block var index_18569
    DeRef(_index_18569);

// block var block_ptr_18570
    DeRef(_block_ptr_18570);

// block var block_size_18571
    DeRef(_block_size_18571);

// block var blocks_18572

// block var k_18573
    return -1;
    // SubProg db_select_table pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 18564 op: 159
    // SubProg db_select_table pc: 40 op: STARTLINE (58)

    /** eds.e:1509		save_keys()*/
    // SubProg db_select_table pc: 42 op: PROC (27)
    _46save_keys();
    // SubProg db_select_table pc: 44 op: STARTLINE (58)

    /** eds.e:1511		current_table_pos = table*/
    // SubProg db_select_table pc: 46 op: ASSIGN (18)
    Ref(_table_18567);
    DeRef(_46current_table_pos_17334);
    _46current_table_pos_17334 = _table_18567;
    // SubProg db_select_table pc: 49 op: STARTLINE (58)

    /** eds.e:1512		current_table_name = name*/
    // SubProg db_select_table pc: 51 op: ASSIGN (18)
    RefDS(_name_18566);
    DeRef(_46current_table_name_17335);
    _46current_table_name_17335 = _name_18566;
    // SubProg db_select_table pc: 54 op: SEQUENCE_CHECK (97)
    // SubProg db_select_table pc: 56 op: STARTLINE (58)

    /** eds.e:1514		k = 0*/
    // SubProg db_select_table pc: 58 op: ASSIGN_I (113)
    _k_18573 = 0;
    // SubProg db_select_table pc: 61 op: STARTLINE (58)

    /** eds.e:1515		if caching_option = 1 then*/
    // SubProg db_select_table pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 65 op: EQUALS_IFW_I (121)
    // SubProg db_select_table pc: 69 op: STARTLINE (58)

    /** eds.e:1516			k = eu:find({current_db, current_table_pos}, cache_index)*/
    // SubProg db_select_table pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 75 op: RIGHT_BRACE_2 (85)
    Ref(_46current_table_pos_17334);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _46current_table_pos_17334;
    _10326 = MAKE_SEQ(_1);
    // SubProg db_select_table pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 81 op: FIND_FROM (176)
    _k_18573 = find_from(_10326, _46cache_index_17342, 1);
    DeRefDS(_10326);
    _10326 = NOVALUE;
    // SubProg db_select_table pc: 86 op: STARTLINE (58)

    /** eds.e:1517			if k != 0 then*/
    // SubProg db_select_table pc: 88 op: NOTEQ_IFW_I (122)
    if (_k_18573 == 0)
    goto L3; // [88] 103
    // SubProg db_select_table pc: 92 op: STARTLINE (58)

    /** eds.e:1518				key_pointers = key_cache[k]*/
    // SubProg db_select_table pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 96 op: RHS_SUBS (25)
    DeRef(_46key_pointers_17340);
    _2 = (object)SEQ_PTR(_46key_cache_17341);
    _46key_pointers_17340 = (object)*(((s1_ptr)_2)->base + _k_18573);
    Ref(_46key_pointers_17340);
    // SubProg db_select_table pc: 100 op: SEQUENCE_CHECK (97)
    // SubProg db_select_table pc: 102 op: NOP1 (159)
L3: // addr: 103 pc: 102 sub: 18564 op: 159
    // SubProg db_select_table pc: 103 op: NOP1 (159)
    // SubProg db_select_table pc: 104 op: STARTLINE (58)

    /** eds.e:1521		if k = 0 then*/
    // SubProg db_select_table pc: 106 op: EQUALS_IFW_I (121)
    if (_k_18573 != 0)
    goto L4; // [106] 269
    // SubProg db_select_table pc: 110 op: STARTLINE (58)

    /** eds.e:1523			io:seek(current_db, table+4)*/
    // SubProg db_select_table pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 114 op: PLUS (11)
    if (IS_ATOM_INT(_table_18567)) {
        _10331 = _table_18567 + 4;
        if ((object)((uintptr_t)_10331 + (uintptr_t)HIGH_BITS) >= 0){
            _10331 = NewDouble((eudouble)_10331);
        }
    }
    else {
        _10331 = NewDouble(DBL_PTR(_table_18567)->dbl + (eudouble)4);
    }
    // SubProg db_select_table pc: 118 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_117_18590);
    _pos_inlined_seek_at_117_18590 = _10331;
    _10331 = NOVALUE;
    // SubProg db_select_table pc: 121 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_select_table pc: 123 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_117_18590);
    DeRef(_seek_1__tmp_at120_18592);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_117_18590;
    _seek_1__tmp_at120_18592 = MAKE_SEQ(_1);
    // SubProg db_select_table pc: 127 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_120_18591 = machine(19, _seek_1__tmp_at120_18592);
    // SubProg db_select_table pc: 131 op: NOP1 (159)
    // SubProg db_select_table pc: 132 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_select_table @ 117

// block var pos_inlined_seek_at_117_18590
    DeRef(_pos_inlined_seek_at_117_18590);
    _pos_inlined_seek_at_117_18590 = NOVALUE;

// block var seek_1__tmp_at120_18592
    DeRef(_seek_1__tmp_at120_18592);
    _seek_1__tmp_at120_18592 = NOVALUE;
    // SubProg db_select_table pc: 134 op: STARTLINE (58)

    /** eds.e:1524			nkeys = get4()*/
    // SubProg db_select_table pc: 136 op: PROC (27)
    _0 = _nkeys_18568;
    _nkeys_18568 = _46get4();
    DeRef(_0);
    // SubProg db_select_table pc: 139 op: STARTLINE (58)

    /** eds.e:1525			blocks = get4()*/
    // SubProg db_select_table pc: 141 op: PROC (27)
    _blocks_18572 = _46get4();
    // SubProg db_select_table pc: 144 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_blocks_18572)) {
        _1 = (object)(DBL_PTR(_blocks_18572)->dbl);
        DeRefDS(_blocks_18572);
        _blocks_18572 = _1;
    }
    // SubProg db_select_table pc: 146 op: STARTLINE (58)

    /** eds.e:1526			index = get4()*/
    // SubProg db_select_table pc: 148 op: PROC (27)
    _0 = _index_18569;
    _index_18569 = _46get4();
    DeRef(_0);
    // SubProg db_select_table pc: 151 op: STARTLINE (58)

    /** eds.e:1527			key_pointers = repeat(0, nkeys)*/
    // SubProg db_select_table pc: 153 op: REPEAT (32)
    DeRef(_46key_pointers_17340);
    _46key_pointers_17340 = Repeat(0, _nkeys_18568);
    // SubProg db_select_table pc: 157 op: STARTLINE (58)

    /** eds.e:1528			k = 1*/
    // SubProg db_select_table pc: 159 op: ASSIGN_I (113)
    _k_18573 = 1;
    // SubProg db_select_table pc: 162 op: STARTLINE (58)

    /** eds.e:1529			for b = 0 to blocks-1 do*/
    // SubProg db_select_table pc: 164 op: MINUS (10)
    _10336 = _blocks_18572 - 1;
    if ((object)((uintptr_t)_10336 +(uintptr_t) HIGH_BITS) >= 0){
        _10336 = NewDouble((eudouble)_10336);
    }
    // SubProg db_select_table pc: 168 op: FOR (21)
    {
        object _b_18598;
        _b_18598 = 0;
L5: // addr: 175 pc: 168 sub: 18564 op: 21
        if (binary_op_a(GREATER, _b_18598, _10336)){
            goto L6; // [168] 268
        }
        // SubProg db_select_table pc: 175 op: STARTLINE (58)

        /** eds.e:1530				io:seek(current_db, index)*/
        // SubProg db_select_table pc: 177 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_select_table pc: 179 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_select_table pc: 181 op: RIGHT_BRACE_2 (85)
        Ref(_index_18569);
        DeRef(_seek_1__tmp_at178_18602);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _46current_db_17333;
        ((intptr_t *)_2)[2] = _index_18569;
        _seek_1__tmp_at178_18602 = MAKE_SEQ(_1);
        // SubProg db_select_table pc: 185 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_178_18601 = machine(19, _seek_1__tmp_at178_18602);
        // SubProg db_select_table pc: 189 op: NOP1 (159)
        // SubProg db_select_table pc: 190 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_select_table @ 178

// block var seek_1__tmp_at178_18602
        DeRef(_seek_1__tmp_at178_18602);
        _seek_1__tmp_at178_18602 = NOVALUE;
        // SubProg db_select_table pc: 192 op: STARTLINE (58)

        /** eds.e:1531				block_size = get4()*/
        // SubProg db_select_table pc: 194 op: PROC (27)
        _0 = _block_size_18571;
        _block_size_18571 = _46get4();
        DeRef(_0);
        // SubProg db_select_table pc: 197 op: STARTLINE (58)

        /** eds.e:1532				block_ptr = get4()*/
        // SubProg db_select_table pc: 199 op: PROC (27)
        _0 = _block_ptr_18570;
        _block_ptr_18570 = _46get4();
        DeRef(_0);
        // SubProg db_select_table pc: 202 op: STARTLINE (58)

        /** eds.e:1533				io:seek(current_db, block_ptr)*/
        // SubProg db_select_table pc: 204 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_select_table pc: 206 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_select_table pc: 208 op: RIGHT_BRACE_2 (85)
        Ref(_block_ptr_18570);
        DeRef(_seek_1__tmp_at205_18607);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _46current_db_17333;
        ((intptr_t *)_2)[2] = _block_ptr_18570;
        _seek_1__tmp_at205_18607 = MAKE_SEQ(_1);
        // SubProg db_select_table pc: 212 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_205_18606 = machine(19, _seek_1__tmp_at205_18607);
        // SubProg db_select_table pc: 216 op: NOP1 (159)
        // SubProg db_select_table pc: 217 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_select_table @ 205

// block var seek_1__tmp_at205_18607
        DeRef(_seek_1__tmp_at205_18607);
        _seek_1__tmp_at205_18607 = NOVALUE;
        // SubProg db_select_table pc: 219 op: STARTLINE (58)

        /** eds.e:1534				for j = 1 to block_size do*/
        // SubProg db_select_table pc: 221 op: ASSIGN (18)
        Ref(_block_size_18571);
        DeRef(_10339);
        _10339 = _block_size_18571;
        // SubProg db_select_table pc: 224 op: FOR (21)
        {
            object _j_18609;
            _j_18609 = 1;
L7: // addr: 231 pc: 224 sub: 18564 op: 21
            if (binary_op_a(GREATER, _j_18609, _10339)){
                goto L8; // [224] 255
            }
            // SubProg db_select_table pc: 231 op: STARTLINE (58)

            /** eds.e:1535					key_pointers[k] = get4()*/
            // SubProg db_select_table pc: 233 op: GLOBAL_INIT_CHECK (109)
            // SubProg db_select_table pc: 235 op: PROC (27)
            _10340 = _46get4();
            // SubProg db_select_table pc: 238 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_46key_pointers_17340);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _46key_pointers_17340 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _k_18573);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _10340;
            if( _1 != _10340 ){
                DeRef(_1);
            }
            _10340 = NOVALUE;
            // SubProg db_select_table pc: 242 op: STARTLINE (58)

            /** eds.e:1536					k += 1*/
            // SubProg db_select_table pc: 244 op: PLUS1_I (117)
            _k_18573 = _k_18573 + 1;
            // SubProg db_select_table pc: 248 op: STARTLINE (58)

            /** eds.e:1537				end for*/
            // SubProg db_select_table pc: 250 op: ENDFOR_INT_UP1 (54)
            _0 = _j_18609;
            if (IS_ATOM_INT(_j_18609)) {
                _j_18609 = _j_18609 + 1;
                if ((object)((uintptr_t)_j_18609 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_18609 = NewDouble((eudouble)_j_18609);
                }
            }
            else {
                _j_18609 = binary_op_a(PLUS, _j_18609, 1);
            }
            DeRef(_0);
            goto L7; // [250] 231
L8: // addr: 255 pc: 250 sub: 18564 op: 54
            ;
            DeRef(_j_18609);
        }
        // SubProg db_select_table pc: 255 op: STARTLINE (58)

        /** eds.e:1538				index += 8*/
        // SubProg db_select_table pc: 257 op: PLUS (11)
        _0 = _index_18569;
        if (IS_ATOM_INT(_index_18569)) {
            _index_18569 = _index_18569 + 8;
            if ((object)((uintptr_t)_index_18569 + (uintptr_t)HIGH_BITS) >= 0){
                _index_18569 = NewDouble((eudouble)_index_18569);
            }
        }
        else {
            _index_18569 = NewDouble(DBL_PTR(_index_18569)->dbl + (eudouble)8);
        }
        DeRef(_0);
        // SubProg db_select_table pc: 261 op: STARTLINE (58)

        /** eds.e:1539			end for*/
        // SubProg db_select_table pc: 263 op: ENDFOR_INT_UP1 (54)
        _0 = _b_18598;
        if (IS_ATOM_INT(_b_18598)) {
            _b_18598 = _b_18598 + 1;
            if ((object)((uintptr_t)_b_18598 +(uintptr_t) HIGH_BITS) >= 0){
                _b_18598 = NewDouble((eudouble)_b_18598);
            }
        }
        else {
            _b_18598 = binary_op_a(PLUS, _b_18598, 1);
        }
        DeRef(_0);
        goto L5; // [263] 175
L6: // addr: 268 pc: 263 sub: 18564 op: 54
        ;
        DeRef(_b_18598);
    }
    // SubProg db_select_table pc: 268 op: NOP1 (159)
L4: // addr: 269 pc: 268 sub: 18564 op: 159
    // SubProg db_select_table pc: 269 op: STARTLINE (58)

    /** eds.e:1541		return DB_OK*/
    // SubProg db_select_table pc: 271 op: RETURNF (28)

// Exiting block BLOCK: db_select_table

// block var name_18566
    DeRefDS(_name_18566);

// block var table_18567
    DeRef(_table_18567);

// block var nkeys_18568
    DeRef(_nkeys_18568);

// block var index_18569
    DeRef(_index_18569);

// block var block_ptr_18570
    DeRef(_block_ptr_18570);

// block var block_size_18571
    DeRef(_block_size_18571);

// block var blocks_18572

// block var k_18573
    DeRef(_10336);
    _10336 = NOVALUE;
    return 0;
    // SubProg db_select_table pc: 275 op: BADRETURNF (43)
    ;
}


object _46db_table_list()
{
    object _seek_1__tmp_at120_18993 = NOVALUE;
    object _seek_inlined_seek_at_120_18992 = NOVALUE;
    object _seek_1__tmp_at98_18989 = NOVALUE;
    object _seek_inlined_seek_at_98_18988 = NOVALUE;
    object _pos_inlined_seek_at_95_18987 = NOVALUE;
    object _seek_1__tmp_at42_18977 = NOVALUE;
    object _seek_inlined_seek_at_42_18976 = NOVALUE;
    object _seek_1__tmp_at4_18970 = NOVALUE;
    object _seek_inlined_seek_at_4_18969 = NOVALUE;
    object _table_names_18964 = NOVALUE;
    object _tables_18965 = NOVALUE;
    object _nt_18966 = NOVALUE;
    object _name_18967 = NOVALUE;
    object _10488 = NOVALUE; // 18995 10488
    object _10487 = NOVALUE; // 18994 10487
// skipping _10486  name type: 0
    object _10485 = NOVALUE; // 18985 10485
    object _10484 = NOVALUE; // 18984 10484
    object _10483 = NOVALUE; // 18983 10483
    object _10482 = NOVALUE; // 18982 10482
// skipping _10481  name type: 0
// skipping _10480  name type: 0
// skipping _10479  name type: 0
// skipping _10478  name type: 0
    object _10477 = NOVALUE; // 18972 10477
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_table_list pc: 1 op: STARTLINE (58)

    /** eds.e:1923		io:seek(current_db, TABLE_HEADERS)*/
    // SubProg db_table_list pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_list pc: 5 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_table_list pc: 7 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at4_18970);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at4_18970 = MAKE_SEQ(_1);
    // SubProg db_table_list pc: 11 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_4_18969 = machine(19, _seek_1__tmp_at4_18970);
    // SubProg db_table_list pc: 15 op: NOP1 (159)
    // SubProg db_table_list pc: 16 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 4

// block var seek_1__tmp_at4_18970
    DeRefi(_seek_1__tmp_at4_18970);
    _seek_1__tmp_at4_18970 = NOVALUE;
    // SubProg db_table_list pc: 18 op: STARTLINE (58)

    /** eds.e:1924		if length(vLastErrors) > 0 then return {} end if*/
    // SubProg db_table_list pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_list pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_46vLastErrors_17357)){
            _10477 = SEQ_PTR(_46vLastErrors_17357)->length;
    }
    else {
        _10477 = 1;
    }
    // SubProg db_table_list pc: 25 op: GREATER_IFW_I (124)
    if (_10477 <= 0)
    goto L1; // [25] 34
    // SubProg db_table_list pc: 29 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: db_table_list

// block var table_names_18964
    DeRef(_table_names_18964);

// block var tables_18965
    DeRef(_tables_18965);

// block var nt_18966
    DeRef(_nt_18966);

// block var name_18967
    DeRef(_name_18967);
    return _5;
    // SubProg db_table_list pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 18962 op: 159
    // SubProg db_table_list pc: 34 op: STARTLINE (58)

    /** eds.e:1925		tables = get4()*/
    // SubProg db_table_list pc: 36 op: PROC (27)
    _0 = _tables_18965;
    _tables_18965 = _46get4();
    DeRef(_0);
    // SubProg db_table_list pc: 39 op: STARTLINE (58)

    /** eds.e:1926		io:seek(current_db, tables)*/
    // SubProg db_table_list pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_list pc: 43 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_table_list pc: 45 op: RIGHT_BRACE_2 (85)
    Ref(_tables_18965);
    DeRef(_seek_1__tmp_at42_18977);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _tables_18965;
    _seek_1__tmp_at42_18977 = MAKE_SEQ(_1);
    // SubProg db_table_list pc: 49 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_42_18976 = machine(19, _seek_1__tmp_at42_18977);
    // SubProg db_table_list pc: 53 op: NOP1 (159)
    // SubProg db_table_list pc: 54 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 42

// block var seek_1__tmp_at42_18977
    DeRef(_seek_1__tmp_at42_18977);
    _seek_1__tmp_at42_18977 = NOVALUE;
    // SubProg db_table_list pc: 56 op: STARTLINE (58)

    /** eds.e:1927		nt = get4()*/
    // SubProg db_table_list pc: 58 op: PROC (27)
    _0 = _nt_18966;
    _nt_18966 = _46get4();
    DeRef(_0);
    // SubProg db_table_list pc: 61 op: STARTLINE (58)

    /** eds.e:1928		table_names = repeat(0, nt)*/
    // SubProg db_table_list pc: 63 op: REPEAT (32)
    DeRef(_table_names_18964);
    _table_names_18964 = Repeat(0, _nt_18966);
    // SubProg db_table_list pc: 67 op: STARTLINE (58)

    /** eds.e:1929		for i = 0 to nt-1 do*/
    // SubProg db_table_list pc: 69 op: MINUS (10)
    if (IS_ATOM_INT(_nt_18966)) {
        _10482 = _nt_18966 - 1;
        if ((object)((uintptr_t)_10482 +(uintptr_t) HIGH_BITS) >= 0){
            _10482 = NewDouble((eudouble)_10482);
        }
    }
    else {
        _10482 = NewDouble(DBL_PTR(_nt_18966)->dbl - (eudouble)1);
    }
    // SubProg db_table_list pc: 73 op: FOR (21)
    {
        object _i_18981;
        _i_18981 = 0;
L2: // addr: 80 pc: 73 sub: 18962 op: 21
        if (binary_op_a(GREATER, _i_18981, _10482)){
            goto L3; // [73] 154
        }
        // SubProg db_table_list pc: 80 op: STARTLINE (58)

        /** eds.e:1930			io:seek(current_db, tables + 4 + i*SIZEOF_TABLE_HEADER)*/
        // SubProg db_table_list pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_table_list pc: 84 op: PLUS (11)
        if (IS_ATOM_INT(_tables_18965)) {
            _10483 = _tables_18965 + 4;
            if ((object)((uintptr_t)_10483 + (uintptr_t)HIGH_BITS) >= 0){
                _10483 = NewDouble((eudouble)_10483);
            }
        }
        else {
            _10483 = NewDouble(DBL_PTR(_tables_18965)->dbl + (eudouble)4);
        }
        // SubProg db_table_list pc: 88 op: MULTIPLY (13)
        if (IS_ATOM_INT(_i_18981)) {
            if (_i_18981 == (short)_i_18981){
                _10484 = _i_18981 * 16;
            }
            else{
                _10484 = NewDouble(_i_18981 * (eudouble)16);
            }
        }
        else {
            _10484 = NewDouble(DBL_PTR(_i_18981)->dbl * (eudouble)16);
        }
        // SubProg db_table_list pc: 92 op: PLUS (11)
        if (IS_ATOM_INT(_10483) && IS_ATOM_INT(_10484)) {
            _10485 = _10483 + _10484;
            if ((object)((uintptr_t)_10485 + (uintptr_t)HIGH_BITS) >= 0){
                _10485 = NewDouble((eudouble)_10485);
            }
        }
        else {
            if (IS_ATOM_INT(_10483)) {
                _10485 = NewDouble((eudouble)_10483 + DBL_PTR(_10484)->dbl);
            }
            else {
                if (IS_ATOM_INT(_10484)) {
                    _10485 = NewDouble(DBL_PTR(_10483)->dbl + (eudouble)_10484);
                }
                else
                _10485 = NewDouble(DBL_PTR(_10483)->dbl + DBL_PTR(_10484)->dbl);
            }
        }
        DeRef(_10483);
        _10483 = NOVALUE;
        DeRef(_10484);
        _10484 = NOVALUE;
        // SubProg db_table_list pc: 96 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_95_18987);
        _pos_inlined_seek_at_95_18987 = _10485;
        _10485 = NOVALUE;
        // SubProg db_table_list pc: 99 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_table_list pc: 101 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_95_18987);
        DeRef(_seek_1__tmp_at98_18989);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _46current_db_17333;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_95_18987;
        _seek_1__tmp_at98_18989 = MAKE_SEQ(_1);
        // SubProg db_table_list pc: 105 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_98_18988 = machine(19, _seek_1__tmp_at98_18989);
        // SubProg db_table_list pc: 109 op: NOP1 (159)
        // SubProg db_table_list pc: 110 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 95

// block var pos_inlined_seek_at_95_18987
        DeRef(_pos_inlined_seek_at_95_18987);
        _pos_inlined_seek_at_95_18987 = NOVALUE;

// block var seek_1__tmp_at98_18989
        DeRef(_seek_1__tmp_at98_18989);
        _seek_1__tmp_at98_18989 = NOVALUE;
        // SubProg db_table_list pc: 112 op: STARTLINE (58)

        /** eds.e:1931			name = get4()*/
        // SubProg db_table_list pc: 114 op: PROC (27)
        _0 = _name_18967;
        _name_18967 = _46get4();
        DeRef(_0);
        // SubProg db_table_list pc: 117 op: STARTLINE (58)

        /** eds.e:1932			io:seek(current_db, name)*/
        // SubProg db_table_list pc: 119 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_table_list pc: 121 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_table_list pc: 123 op: RIGHT_BRACE_2 (85)
        Ref(_name_18967);
        DeRef(_seek_1__tmp_at120_18993);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _46current_db_17333;
        ((intptr_t *)_2)[2] = _name_18967;
        _seek_1__tmp_at120_18993 = MAKE_SEQ(_1);
        // SubProg db_table_list pc: 127 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_120_18992 = machine(19, _seek_1__tmp_at120_18993);
        // SubProg db_table_list pc: 131 op: NOP1 (159)
        // SubProg db_table_list pc: 132 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 120

// block var seek_1__tmp_at120_18993
        DeRef(_seek_1__tmp_at120_18993);
        _seek_1__tmp_at120_18993 = NOVALUE;
        // SubProg db_table_list pc: 134 op: STARTLINE (58)

        /** eds.e:1933			table_names[i+1] = get_string()*/
        // SubProg db_table_list pc: 136 op: PLUS1 (93)
        if (IS_ATOM_INT(_i_18981)) {
            _10487 = _i_18981 + 1;
            if (_10487 > MAXINT){
                _10487 = NewDouble((eudouble)_10487);
            }
        }
        else
        _10487 = binary_op(PLUS, 1, _i_18981);
        // SubProg db_table_list pc: 140 op: PROC (27)
        _10488 = _46get_string();
        // SubProg db_table_list pc: 143 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_table_names_18964);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _table_names_18964 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_10487))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_10487)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _10487);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _10488;
        if( _1 != _10488 ){
            DeRef(_1);
        }
        _10488 = NOVALUE;
        // SubProg db_table_list pc: 147 op: STARTLINE (58)

        /** eds.e:1934		end for*/
        // SubProg db_table_list pc: 149 op: ENDFOR_INT_UP1 (54)
        _0 = _i_18981;
        if (IS_ATOM_INT(_i_18981)) {
            _i_18981 = _i_18981 + 1;
            if ((object)((uintptr_t)_i_18981 +(uintptr_t) HIGH_BITS) >= 0){
                _i_18981 = NewDouble((eudouble)_i_18981);
            }
        }
        else {
            _i_18981 = binary_op_a(PLUS, _i_18981, 1);
        }
        DeRef(_0);
        goto L2; // [149] 80
L3: // addr: 154 pc: 149 sub: 18962 op: 54
        ;
        DeRef(_i_18981);
    }
    // SubProg db_table_list pc: 154 op: STARTLINE (58)

    /** eds.e:1935		return table_names*/
    // SubProg db_table_list pc: 156 op: RETURNF (28)

// Exiting block BLOCK: db_table_list

// block var tables_18965
    DeRef(_tables_18965);

// block var nt_18966
    DeRef(_nt_18966);

// block var name_18967
    DeRef(_name_18967);
    DeRef(_10482);
    _10482 = NOVALUE;
    DeRef(_10487);
    _10487 = NOVALUE;
    return _table_names_18964;
    // SubProg db_table_list pc: 160 op: BADRETURNF (43)
    ;
}


object _46key_value(object _ptr_18998)
{
    object _seek_1__tmp_at11_19003 = NOVALUE;
    object _seek_inlined_seek_at_11_19002 = NOVALUE;
    object _pos_inlined_seek_at_8_19001 = NOVALUE;
    object _10490 = NOVALUE; // 19004 10490
    object _10489 = NOVALUE; // 18999 10489
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg key_value pc: 1 op: STARTLINE (58)

    /** eds.e:1941		io:seek(current_db, ptr+4) -- skip ptr to data*/
    // SubProg key_value pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg key_value pc: 5 op: PLUS (11)
    if (IS_ATOM_INT(_ptr_18998)) {
        _10489 = _ptr_18998 + 4;
        if ((object)((uintptr_t)_10489 + (uintptr_t)HIGH_BITS) >= 0){
            _10489 = NewDouble((eudouble)_10489);
        }
    }
    else {
        _10489 = NewDouble(DBL_PTR(_ptr_18998)->dbl + (eudouble)4);
    }
    // SubProg key_value pc: 9 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_8_19001);
    _pos_inlined_seek_at_8_19001 = _10489;
    _10489 = NOVALUE;
    // SubProg key_value pc: 12 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg key_value pc: 14 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_8_19001);
    DeRef(_seek_1__tmp_at11_19003);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_8_19001;
    _seek_1__tmp_at11_19003 = MAKE_SEQ(_1);
    // SubProg key_value pc: 18 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_11_19002 = machine(19, _seek_1__tmp_at11_19003);
    // SubProg key_value pc: 22 op: NOP1 (159)
    // SubProg key_value pc: 23 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from key_value @ 8

// block var pos_inlined_seek_at_8_19001
    DeRef(_pos_inlined_seek_at_8_19001);
    _pos_inlined_seek_at_8_19001 = NOVALUE;

// block var seek_1__tmp_at11_19003
    DeRef(_seek_1__tmp_at11_19003);
    _seek_1__tmp_at11_19003 = NOVALUE;
    // SubProg key_value pc: 25 op: STARTLINE (58)

    /** eds.e:1942		return decompress(0)*/
    // SubProg key_value pc: 27 op: PROC (27)
    _10490 = _46decompress(0);
    // SubProg key_value pc: 31 op: RETURNF (28)

// Exiting block BLOCK: key_value

// block var ptr_18998
    DeRef(_ptr_18998);
    return _10490;
    // SubProg key_value pc: 35 op: BADRETURNF (43)
    ;
}


object _46db_find_key(object _key_19007, object _table_name_19008)
{
    object _lo_19009 = NOVALUE;
    object _hi_19010 = NOVALUE;
    object _mid_19011 = NOVALUE;
    object _c_19012 = NOVALUE;
    object _10514 = NOVALUE; // 19044 10514
// skipping _10513  name type: 0
// skipping _10512  name type: 0
// skipping _10511  name type: 0
// skipping _10510  name type: 0
// skipping _10509  name type: 0
// skipping _10508  name type: 0
// skipping _10507  name type: 0
    object _10506 = NOVALUE; // 19032 10506
    object _10505 = NOVALUE; // 19031 10505
// skipping _10504  name type: 0
    object _10503 = NOVALUE; // 19029 10503
// skipping _10502  name type: 0
// skipping _10501  name type: 0
    object _10500 = NOVALUE; // 19025 10500
// skipping _10498  name type: 0
    object _10497 = NOVALUE; // 19021 10497
// skipping _10494  name type: 0
    object _10493 = NOVALUE; // 19017 10493
// skipping _10492  name type: 0
    object _10491 = NOVALUE; // 19014 10491
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_find_key pc: 1 op: STARTLINE (58)

    /** eds.e:2003		if not equal(table_name, current_table_name) then*/
    // SubProg db_find_key pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 5 op: EQUAL (153)
    if (_table_name_19008 == _46current_table_name_17335)
    _10491 = 1;
    else if (IS_ATOM_INT(_table_name_19008) && IS_ATOM_INT(_46current_table_name_17335))
    _10491 = 0;
    else
    _10491 = (compare(_table_name_19008, _46current_table_name_17335) == 0);
    // SubProg db_find_key pc: 9 op: NOT_IFW (108)
    if (_10491 != 0)
    goto L1; // [9] 42
    _10491 = NOVALUE;
    // SubProg db_find_key pc: 12 op: STARTLINE (58)

    /** eds.e:2004			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_find_key pc: 14 op: PROC (27)
    RefDS(_table_name_19008);
    _10493 = _46db_select_table(_table_name_19008);
    // SubProg db_find_key pc: 18 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _10493, 0)){
        DeRef(_10493);
        _10493 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_10493);
    _10493 = NOVALUE;
    // SubProg db_find_key pc: 22 op: STARTLINE (58)

    /** eds.e:2005				fatal(NO_TABLE, "invalid table name given", "db_find_key", {key, table_name})*/
    // SubProg db_find_key pc: 24 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_19008);
    Ref(_key_19007);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_19007;
    ((intptr_t *)_2)[2] = _table_name_19008;
    _10497 = MAKE_SEQ(_1);
    // SubProg db_find_key pc: 28 op: PROC (27)
    RefDS(_10495);
    RefDS(_10496);
    _46fatal(903, _10495, _10496, _10497);
    _10497 = NOVALUE;
    // SubProg db_find_key pc: 34 op: STARTLINE (58)

    /** eds.e:2006				return 0*/
    // SubProg db_find_key pc: 36 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_19007
    DeRef(_key_19007);

// block var table_name_19008
    DeRefDS(_table_name_19008);

// block var lo_19009

// block var hi_19010

// block var mid_19011

// block var c_19012
    return 0;
    // SubProg db_find_key pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 19005 op: 159
    // SubProg db_find_key pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 19005 op: 159
    // SubProg db_find_key pc: 42 op: STARTLINE (58)

    /** eds.e:2010		if current_table_pos = -1 then*/
    // SubProg db_find_key pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 46 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _46current_table_pos_17334, -1)){
        goto L3; // [46] 69
    }
    // SubProg db_find_key pc: 50 op: STARTLINE (58)

    /** eds.e:2011			fatal(NO_TABLE, "no table selected", "db_find_key", {key, table_name})*/
    // SubProg db_find_key pc: 52 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_19008);
    Ref(_key_19007);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_19007;
    ((intptr_t *)_2)[2] = _table_name_19008;
    _10500 = MAKE_SEQ(_1);
    // SubProg db_find_key pc: 56 op: PROC (27)
    RefDS(_10499);
    RefDS(_10496);
    _46fatal(903, _10499, _10496, _10500);
    _10500 = NOVALUE;
    // SubProg db_find_key pc: 62 op: STARTLINE (58)

    /** eds.e:2012			return 0*/
    // SubProg db_find_key pc: 64 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_19007
    DeRef(_key_19007);

// block var table_name_19008
    DeRef(_table_name_19008);

// block var lo_19009

// block var hi_19010

// block var mid_19011

// block var c_19012
    return 0;
    // SubProg db_find_key pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 19005 op: 159
    // SubProg db_find_key pc: 69 op: STARTLINE (58)

    /** eds.e:2015		lo = 1*/
    // SubProg db_find_key pc: 71 op: ASSIGN_I (113)
    _lo_19009 = 1;
    // SubProg db_find_key pc: 74 op: STARTLINE (58)

    /** eds.e:2016		hi = length(key_pointers)*/
    // SubProg db_find_key pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_46key_pointers_17340)){
            _hi_19010 = SEQ_PTR(_46key_pointers_17340)->length;
    }
    else {
        _hi_19010 = 1;
    }
    // SubProg db_find_key pc: 81 op: STARTLINE (58)

    /** eds.e:2017		mid = 1*/
    // SubProg db_find_key pc: 83 op: ASSIGN_I (113)
    _mid_19011 = 1;
    // SubProg db_find_key pc: 86 op: STARTLINE (58)

    /** eds.e:2018		c = 0*/
    // SubProg db_find_key pc: 88 op: ASSIGN_I (113)
    _c_19012 = 0;
    // SubProg db_find_key pc: 91 op: STARTLINE (58)

    /** eds.e:2019		while lo <= hi do*/
    // SubProg db_find_key pc: 93 op: NOP2 (110)
    // SubProg db_find_key pc: 95 op: NOPWHILE (158)
L4: // addr: 96 pc: 95 sub: 19005 op: 158
    // SubProg db_find_key pc: 96 op: LESSEQ_IFW_I (123)
    if (_lo_19009 > _hi_19010)
    goto L5; // [96] 170
    // SubProg db_find_key pc: 100 op: STARTLINE (58)

    /** eds.e:2020			mid = floor((lo + hi) / 2)*/
    // SubProg db_find_key pc: 102 op: PLUS (11)
    _10503 = _lo_19009 + _hi_19010;
    if ((object)((uintptr_t)_10503 + (uintptr_t)HIGH_BITS) >= 0){
        _10503 = NewDouble((eudouble)_10503);
    }
    // SubProg db_find_key pc: 106 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_10503)) {
        _mid_19011 = _10503 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _10503, 2);
        _mid_19011 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_10503);
    _10503 = NOVALUE;
    // SubProg db_find_key pc: 110 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_mid_19011)) {
        _1 = (object)(DBL_PTR(_mid_19011)->dbl);
        DeRefDS(_mid_19011);
        _mid_19011 = _1;
    }
    // SubProg db_find_key pc: 112 op: STARTLINE (58)

    /** eds.e:2021			c = eu:compare(key, key_value(key_pointers[mid]))*/
    // SubProg db_find_key pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46key_pointers_17340);
    _10505 = (object)*(((s1_ptr)_2)->base + _mid_19011);
    // SubProg db_find_key pc: 120 op: PROC (27)
    Ref(_10505);
    _10506 = _46key_value(_10505);
    _10505 = NOVALUE;
    // SubProg db_find_key pc: 124 op: COMPARE (76)
    if (IS_ATOM_INT(_key_19007) && IS_ATOM_INT(_10506)){
        _c_19012 = (_key_19007 < _10506) ? -1 : (_key_19007 > _10506);
    }
    else{
        _c_19012 = compare(_key_19007, _10506);
    }
    DeRef(_10506);
    _10506 = NOVALUE;
    // SubProg db_find_key pc: 128 op: STARTLINE (58)

    /** eds.e:2022			if c < 0 then*/
    // SubProg db_find_key pc: 130 op: LESS_IFW_I (119)
    if (_c_19012 >= 0)
    goto L6; // [130] 143
    // SubProg db_find_key pc: 134 op: STARTLINE (58)

    /** eds.e:2023				hi = mid - 1*/
    // SubProg db_find_key pc: 136 op: MINUS_I (116)
    _hi_19010 = _mid_19011 - 1;
    // SubProg db_find_key pc: 140 op: ELSE (23)
    goto L4; // [140] 96
    // SubProg db_find_key pc: 142 op: NOP1 (159)
L6: // addr: 143 pc: 142 sub: 19005 op: 159
    // SubProg db_find_key pc: 143 op: STARTLINE (58)

    /** eds.e:2024			elsif c > 0 then*/
    // SubProg db_find_key pc: 145 op: GREATER_IFW_I (124)
    if (_c_19012 <= 0)
    goto L7; // [145] 158
    // SubProg db_find_key pc: 149 op: STARTLINE (58)

    /** eds.e:2025				lo = mid + 1*/
    // SubProg db_find_key pc: 151 op: PLUS1_I (117)
    _lo_19009 = _mid_19011 + 1;
    // SubProg db_find_key pc: 155 op: ELSE (23)
    goto L4; // [155] 96
    // SubProg db_find_key pc: 157 op: NOP1 (159)
L7: // addr: 158 pc: 157 sub: 19005 op: 159
    // SubProg db_find_key pc: 158 op: STARTLINE (58)

    /** eds.e:2027				return mid*/
    // SubProg db_find_key pc: 160 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_19007
    DeRef(_key_19007);

// block var table_name_19008
    DeRef(_table_name_19008);

// block var lo_19009

// block var hi_19010

// block var c_19012
    return _mid_19011;
    // SubProg db_find_key pc: 164 op: NOP1 (159)
    // SubProg db_find_key pc: 165 op: STARTLINE (58)

    /** eds.e:2029		end while*/
    // SubProg db_find_key pc: 167 op: ENDWHILE (22)
    goto L4; // [167] 96
    // SubProg db_find_key pc: 169 op: NOP1 (159)
L5: // addr: 170 pc: 169 sub: 19005 op: 159
    // SubProg db_find_key pc: 170 op: STARTLINE (58)

    /** eds.e:2031		if c > 0 then*/
    // SubProg db_find_key pc: 172 op: GREATER_IFW_I (124)
    if (_c_19012 <= 0)
    goto L8; // [172] 183
    // SubProg db_find_key pc: 176 op: STARTLINE (58)

    /** eds.e:2032			mid += 1*/
    // SubProg db_find_key pc: 178 op: PLUS1_I (117)
    _mid_19011 = _mid_19011 + 1;
    // SubProg db_find_key pc: 182 op: NOP1 (159)
L8: // addr: 183 pc: 182 sub: 19005 op: 159
    // SubProg db_find_key pc: 183 op: STARTLINE (58)

    /** eds.e:2034		return -mid*/
    // SubProg db_find_key pc: 185 op: UMINUS (12)
    if ((uintptr_t)_mid_19011 == (uintptr_t)HIGH_BITS){
        _10514 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _10514 = - _mid_19011;
    }
    // SubProg db_find_key pc: 188 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_19007
    DeRef(_key_19007);

// block var table_name_19008
    DeRef(_table_name_19008);

// block var lo_19009

// block var hi_19010

// block var mid_19011

// block var c_19012
    return _10514;
    // SubProg db_find_key pc: 192 op: BADRETURNF (43)
    ;
}


object _46db_table_size(object _table_name_19418)
{
    object _10693 = NOVALUE; // 19430 10693
    object _10692 = NOVALUE; // 19429 10692
// skipping _10691  name type: 0
    object _10690 = NOVALUE; // 19426 10690
// skipping _10688  name type: 0
    object _10687 = NOVALUE; // 19423 10687
// skipping _10686  name type: 0
    object _10685 = NOVALUE; // 19420 10685
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_table_size pc: 1 op: STARTLINE (58)

    /** eds.e:2369		if not equal(table_name, current_table_name) then*/
    // SubProg db_table_size pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_size pc: 5 op: EQUAL (153)
    if (_table_name_19418 == _46current_table_name_17335)
    _10685 = 1;
    else if (IS_ATOM_INT(_table_name_19418) && IS_ATOM_INT(_46current_table_name_17335))
    _10685 = 0;
    else
    _10685 = (compare(_table_name_19418, _46current_table_name_17335) == 0);
    // SubProg db_table_size pc: 9 op: NOT_IFW (108)
    if (_10685 != 0)
    goto L1; // [9] 42
    _10685 = NOVALUE;
    // SubProg db_table_size pc: 12 op: STARTLINE (58)

    /** eds.e:2370			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_table_size pc: 14 op: PROC (27)
    RefDS(_table_name_19418);
    _10687 = _46db_select_table(_table_name_19418);
    // SubProg db_table_size pc: 18 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _10687, 0)){
        DeRef(_10687);
        _10687 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_10687);
    _10687 = NOVALUE;
    // SubProg db_table_size pc: 22 op: STARTLINE (58)

    /** eds.e:2371				fatal(NO_TABLE, "invalid table name given", "db_table_size", {table_name})*/
    // SubProg db_table_size pc: 24 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_19418);
    ((intptr_t*)_2)[1] = _table_name_19418;
    _10690 = MAKE_SEQ(_1);
    // SubProg db_table_size pc: 28 op: PROC (27)
    RefDS(_10495);
    RefDS(_10689);
    _46fatal(903, _10495, _10689, _10690);
    _10690 = NOVALUE;
    // SubProg db_table_size pc: 34 op: STARTLINE (58)

    /** eds.e:2372				return -1*/
    // SubProg db_table_size pc: 36 op: RETURNF (28)

// Exiting block BLOCK: db_table_size

// block var table_name_19418
    DeRefDS(_table_name_19418);
    return -1;
    // SubProg db_table_size pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 19416 op: 159
    // SubProg db_table_size pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 19416 op: 159
    // SubProg db_table_size pc: 42 op: STARTLINE (58)

    /** eds.e:2376		if current_table_pos = -1 then*/
    // SubProg db_table_size pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_size pc: 46 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _46current_table_pos_17334, -1)){
        goto L3; // [46] 69
    }
    // SubProg db_table_size pc: 50 op: STARTLINE (58)

    /** eds.e:2377			fatal(NO_TABLE, "no table selected", "db_table_size", {table_name})*/
    // SubProg db_table_size pc: 52 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_table_name_19418);
    ((intptr_t*)_2)[1] = _table_name_19418;
    _10692 = MAKE_SEQ(_1);
    // SubProg db_table_size pc: 56 op: PROC (27)
    RefDS(_10499);
    RefDS(_10689);
    _46fatal(903, _10499, _10689, _10692);
    _10692 = NOVALUE;
    // SubProg db_table_size pc: 62 op: STARTLINE (58)

    /** eds.e:2378			return -1*/
    // SubProg db_table_size pc: 64 op: RETURNF (28)

// Exiting block BLOCK: db_table_size

// block var table_name_19418
    DeRef(_table_name_19418);
    return -1;
    // SubProg db_table_size pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 19416 op: 159
    // SubProg db_table_size pc: 69 op: STARTLINE (58)

    /** eds.e:2380		return length(key_pointers)*/
    // SubProg db_table_size pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_size pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_46key_pointers_17340)){
            _10693 = SEQ_PTR(_46key_pointers_17340)->length;
    }
    else {
        _10693 = 1;
    }
    // SubProg db_table_size pc: 76 op: RETURNF (28)

// Exiting block BLOCK: db_table_size

// block var table_name_19418
    DeRef(_table_name_19418);
    return _10693;
    // SubProg db_table_size pc: 80 op: BADRETURNF (43)
    ;
}


object _46db_record_data(object _key_location_19433, object _table_name_19434)
{
    object _data_ptr_19435 = NOVALUE;
    object _data_value_19436 = NOVALUE;
    object _seek_1__tmp_at126_19458 = NOVALUE;
    object _seek_inlined_seek_at_126_19457 = NOVALUE;
    object _pos_inlined_seek_at_123_19456 = NOVALUE;
    object _seek_1__tmp_at164_19465 = NOVALUE;
    object _seek_inlined_seek_at_164_19464 = NOVALUE;
// skipping _10711  name type: 0
// skipping _10710  name type: 0
// skipping _10709  name type: 0
    object _10708 = NOVALUE; // 19460 10708
    object _10707 = NOVALUE; // 19454 10707
    object _10706 = NOVALUE; // 19453 10706
    object _10705 = NOVALUE; // 19452 10705
    object _10704 = NOVALUE; // 19451 10704
// skipping _10703  name type: 0
    object _10702 = NOVALUE; // 19449 10702
    object _10701 = NOVALUE; // 19447 10701
// skipping _10700  name type: 0
    object _10699 = NOVALUE; // 19444 10699
// skipping _10697  name type: 0
    object _10696 = NOVALUE; // 19441 10696
// skipping _10695  name type: 0
    object _10694 = NOVALUE; // 19438 10694
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_record_data pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_key_location_19433)) {
        _1 = (object)(DBL_PTR(_key_location_19433)->dbl);
        DeRefDS(_key_location_19433);
        _key_location_19433 = _1;
    }
    // SubProg db_record_data pc: 3 op: STARTLINE (58)

    /** eds.e:2417		if not equal(table_name, current_table_name) then*/
    // SubProg db_record_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 7 op: EQUAL (153)
    if (_table_name_19434 == _46current_table_name_17335)
    _10694 = 1;
    else if (IS_ATOM_INT(_table_name_19434) && IS_ATOM_INT(_46current_table_name_17335))
    _10694 = 0;
    else
    _10694 = (compare(_table_name_19434, _46current_table_name_17335) == 0);
    // SubProg db_record_data pc: 11 op: NOT_IFW (108)
    if (_10694 != 0)
    goto L1; // [11] 44
    _10694 = NOVALUE;
    // SubProg db_record_data pc: 14 op: STARTLINE (58)

    /** eds.e:2418			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_record_data pc: 16 op: PROC (27)
    RefDS(_table_name_19434);
    _10696 = _46db_select_table(_table_name_19434);
    // SubProg db_record_data pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _10696, 0)){
        DeRef(_10696);
        _10696 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_10696);
    _10696 = NOVALUE;
    // SubProg db_record_data pc: 24 op: STARTLINE (58)

    /** eds.e:2419				fatal(NO_TABLE, "invalid table name given", "db_record_data", {key_location, table_name})*/
    // SubProg db_record_data pc: 26 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_19434);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19433;
    ((intptr_t *)_2)[2] = _table_name_19434;
    _10699 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 30 op: PROC (27)
    RefDS(_10495);
    RefDS(_10698);
    _46fatal(903, _10495, _10698, _10699);
    _10699 = NOVALUE;
    // SubProg db_record_data pc: 36 op: STARTLINE (58)

    /** eds.e:2420				return -1*/
    // SubProg db_record_data pc: 38 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_19433

// block var table_name_19434
    DeRefDS(_table_name_19434);

// block var data_ptr_19435
    DeRef(_data_ptr_19435);

// block var data_value_19436
    DeRef(_data_value_19436);
    return -1;
    // SubProg db_record_data pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 19431 op: 159
    // SubProg db_record_data pc: 43 op: NOP1 (159)
L1: // addr: 44 pc: 43 sub: 19431 op: 159
    // SubProg db_record_data pc: 44 op: STARTLINE (58)

    /** eds.e:2424		if current_table_pos = -1 then*/
    // SubProg db_record_data pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 48 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _46current_table_pos_17334, -1)){
        goto L3; // [48] 71
    }
    // SubProg db_record_data pc: 52 op: STARTLINE (58)

    /** eds.e:2425			fatal(NO_TABLE, "no table selected", "db_record_data", {key_location, table_name})*/
    // SubProg db_record_data pc: 54 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_19434);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19433;
    ((intptr_t *)_2)[2] = _table_name_19434;
    _10701 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 58 op: PROC (27)
    RefDS(_10499);
    RefDS(_10698);
    _46fatal(903, _10499, _10698, _10701);
    _10701 = NOVALUE;
    // SubProg db_record_data pc: 64 op: STARTLINE (58)

    /** eds.e:2426			return -1*/
    // SubProg db_record_data pc: 66 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_19433

// block var table_name_19434
    DeRef(_table_name_19434);

// block var data_ptr_19435
    DeRef(_data_ptr_19435);

// block var data_value_19436
    DeRef(_data_value_19436);
    return -1;
    // SubProg db_record_data pc: 70 op: NOP1 (159)
L3: // addr: 71 pc: 70 sub: 19431 op: 159
    // SubProg db_record_data pc: 71 op: STARTLINE (58)

    /** eds.e:2428		if key_location < 1 or key_location > length(key_pointers) then*/
    // SubProg db_record_data pc: 73 op: LESS (1)
    _10702 = (_key_location_19433 < 1);
    // SubProg db_record_data pc: 77 op: SC1_OR_IF (147)
    if (_10702 != 0) {
        goto L4; // [77] 95
    }
    // SubProg db_record_data pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 83 op: LENGTH (42)
    if (IS_SEQUENCE(_46key_pointers_17340)){
            _10704 = SEQ_PTR(_46key_pointers_17340)->length;
    }
    else {
        _10704 = 1;
    }
    // SubProg db_record_data pc: 86 op: GREATER (6)
    _10705 = (_key_location_19433 > _10704);
    _10704 = NOVALUE;
    // SubProg db_record_data pc: 90 op: NOP1 (159)
    // SubProg db_record_data pc: 91 op: IF (20)
    if (_10705 == 0)
    {
        DeRef(_10705);
        _10705 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_10705);
        _10705 = NOVALUE;
    }
    // SubProg db_record_data pc: 94 op: NOP1 (159)
L4: // addr: 95 pc: 94 sub: 19431 op: 159
    // SubProg db_record_data pc: 95 op: STARTLINE (58)

    /** eds.e:2429			fatal(BAD_RECNO, "bad record number", "db_record_data", {key_location, table_name})*/
    // SubProg db_record_data pc: 97 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_19434);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19433;
    ((intptr_t *)_2)[2] = _table_name_19434;
    _10706 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 101 op: PROC (27)
    RefDS(_10623);
    RefDS(_10698);
    _46fatal(905, _10623, _10698, _10706);
    _10706 = NOVALUE;
    // SubProg db_record_data pc: 107 op: STARTLINE (58)

    /** eds.e:2430			return -1*/
    // SubProg db_record_data pc: 109 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_19433

// block var table_name_19434
    DeRef(_table_name_19434);

// block var data_ptr_19435
    DeRef(_data_ptr_19435);

// block var data_value_19436
    DeRef(_data_value_19436);
    DeRef(_10702);
    _10702 = NOVALUE;
    return -1;
    // SubProg db_record_data pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 19431 op: 159
    // SubProg db_record_data pc: 114 op: STARTLINE (58)

    /** eds.e:2433		io:seek(current_db, key_pointers[key_location])*/
    // SubProg db_record_data pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46key_pointers_17340);
    _10707 = (object)*(((s1_ptr)_2)->base + _key_location_19433);
    // SubProg db_record_data pc: 124 op: ASSIGN (18)
    Ref(_10707);
    DeRef(_pos_inlined_seek_at_123_19456);
    _pos_inlined_seek_at_123_19456 = _10707;
    _10707 = NOVALUE;
    // SubProg db_record_data pc: 127 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_record_data pc: 129 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_123_19456);
    DeRef(_seek_1__tmp_at126_19458);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_123_19456;
    _seek_1__tmp_at126_19458 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 133 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_126_19457 = machine(19, _seek_1__tmp_at126_19458);
    // SubProg db_record_data pc: 137 op: NOP1 (159)
    // SubProg db_record_data pc: 138 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_record_data @ 123

// block var pos_inlined_seek_at_123_19456
    DeRef(_pos_inlined_seek_at_123_19456);
    _pos_inlined_seek_at_123_19456 = NOVALUE;

// block var seek_1__tmp_at126_19458
    DeRef(_seek_1__tmp_at126_19458);
    _seek_1__tmp_at126_19458 = NOVALUE;
    // SubProg db_record_data pc: 140 op: STARTLINE (58)

    /** eds.e:2434		if length(vLastErrors) > 0 then return -1 end if*/
    // SubProg db_record_data pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 144 op: LENGTH (42)
    if (IS_SEQUENCE(_46vLastErrors_17357)){
            _10708 = SEQ_PTR(_46vLastErrors_17357)->length;
    }
    else {
        _10708 = 1;
    }
    // SubProg db_record_data pc: 147 op: GREATER_IFW_I (124)
    if (_10708 <= 0)
    goto L6; // [147] 156
    // SubProg db_record_data pc: 151 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_19433

// block var table_name_19434
    DeRef(_table_name_19434);

// block var data_ptr_19435
    DeRef(_data_ptr_19435);

// block var data_value_19436
    DeRef(_data_value_19436);
    DeRef(_10702);
    _10702 = NOVALUE;
    return -1;
    // SubProg db_record_data pc: 155 op: NOP1 (159)
L6: // addr: 156 pc: 155 sub: 19431 op: 159
    // SubProg db_record_data pc: 156 op: STARTLINE (58)

    /** eds.e:2435		data_ptr = get4()*/
    // SubProg db_record_data pc: 158 op: PROC (27)
    _0 = _data_ptr_19435;
    _data_ptr_19435 = _46get4();
    DeRef(_0);
    // SubProg db_record_data pc: 161 op: STARTLINE (58)

    /** eds.e:2436		io:seek(current_db, data_ptr)*/
    // SubProg db_record_data pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 165 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_record_data pc: 167 op: RIGHT_BRACE_2 (85)
    Ref(_data_ptr_19435);
    DeRef(_seek_1__tmp_at164_19465);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _46current_db_17333;
    ((intptr_t *)_2)[2] = _data_ptr_19435;
    _seek_1__tmp_at164_19465 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 171 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_164_19464 = machine(19, _seek_1__tmp_at164_19465);
    // SubProg db_record_data pc: 175 op: NOP1 (159)
    // SubProg db_record_data pc: 176 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_record_data @ 164

// block var seek_1__tmp_at164_19465
    DeRef(_seek_1__tmp_at164_19465);
    _seek_1__tmp_at164_19465 = NOVALUE;
    // SubProg db_record_data pc: 178 op: STARTLINE (58)

    /** eds.e:2437		data_value = decompress(0)*/
    // SubProg db_record_data pc: 180 op: PROC (27)
    _0 = _data_value_19436;
    _data_value_19436 = _46decompress(0);
    DeRef(_0);
    // SubProg db_record_data pc: 184 op: STARTLINE (58)

    /** eds.e:2439		return data_value*/
    // SubProg db_record_data pc: 186 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_19433

// block var table_name_19434
    DeRef(_table_name_19434);

// block var data_ptr_19435
    DeRef(_data_ptr_19435);
    DeRef(_10702);
    _10702 = NOVALUE;
    return _data_value_19436;
    // SubProg db_record_data pc: 190 op: BADRETURNF (43)
    ;
}


object _46db_fetch_record(object _key_19469, object _table_name_19470)
{
    object _pos_19471 = NOVALUE;
    object _10714 = NOVALUE; // 19475 10714
// skipping _10713  name type: 0
// skipping _10712  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_fetch_record pc: 1 op: STARTLINE (58)

    /** eds.e:2481		pos = db_find_key(key, table_name)*/
    // SubProg db_fetch_record pc: 3 op: PROC (27)
    Ref(_key_19469);
    RefDS(_table_name_19470);
    _pos_19471 = _46db_find_key(_key_19469, _table_name_19470);
    // SubProg db_fetch_record pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_19471)) {
        _1 = (object)(DBL_PTR(_pos_19471)->dbl);
        DeRefDS(_pos_19471);
        _pos_19471 = _1;
    }
    // SubProg db_fetch_record pc: 10 op: STARTLINE (58)

    /** eds.e:2482		if pos > 0 then*/
    // SubProg db_fetch_record pc: 12 op: GREATER_IFW_I (124)
    if (_pos_19471 <= 0)
    goto L1; // [12] 30
    // SubProg db_fetch_record pc: 16 op: STARTLINE (58)

    /** eds.e:2483			return db_record_data(pos, table_name)*/
    // SubProg db_fetch_record pc: 18 op: PROC (27)
    RefDS(_table_name_19470);
    _10714 = _46db_record_data(_pos_19471, _table_name_19470);
    // SubProg db_fetch_record pc: 23 op: RETURNF (28)

// Exiting block BLOCK: db_fetch_record

// block var key_19469
    DeRef(_key_19469);

// block var table_name_19470
    DeRefDS(_table_name_19470);

// block var pos_19471
    return _10714;
    // SubProg db_fetch_record pc: 27 op: ELSE (23)
    goto L2; // [27] 37
    // SubProg db_fetch_record pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 19467 op: 159
    // SubProg db_fetch_record pc: 30 op: STARTLINE (58)

    /** eds.e:2485			return pos*/
    // SubProg db_fetch_record pc: 32 op: RETURNF (28)

// Exiting block BLOCK: db_fetch_record

// block var key_19469
    DeRef(_key_19469);

// block var table_name_19470
    DeRef(_table_name_19470);
    DeRef(_10714);
    _10714 = NOVALUE;
    return _pos_19471;
    // SubProg db_fetch_record pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 19467 op: 159
    // SubProg db_fetch_record pc: 37 op: BADRETURNF (43)
    ;
}


object _46db_record_key(object _key_location_19479, object _table_name_19480)
{
    object _10729 = NOVALUE; // 19499 10729
    object _10728 = NOVALUE; // 19498 10728
    object _10727 = NOVALUE; // 19497 10727
    object _10726 = NOVALUE; // 19496 10726
    object _10725 = NOVALUE; // 19495 10725
// skipping _10724  name type: 0
    object _10723 = NOVALUE; // 19493 10723
    object _10722 = NOVALUE; // 19491 10722
// skipping _10721  name type: 0
    object _10720 = NOVALUE; // 19488 10720
// skipping _10718  name type: 0
    object _10717 = NOVALUE; // 19485 10717
// skipping _10716  name type: 0
    object _10715 = NOVALUE; // 19482 10715
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_record_key pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_key_location_19479)) {
        _1 = (object)(DBL_PTR(_key_location_19479)->dbl);
        DeRefDS(_key_location_19479);
        _key_location_19479 = _1;
    }
    // SubProg db_record_key pc: 3 op: STARTLINE (58)

    /** eds.e:2519		if not equal(table_name, current_table_name) then*/
    // SubProg db_record_key pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 7 op: EQUAL (153)
    if (_table_name_19480 == _46current_table_name_17335)
    _10715 = 1;
    else if (IS_ATOM_INT(_table_name_19480) && IS_ATOM_INT(_46current_table_name_17335))
    _10715 = 0;
    else
    _10715 = (compare(_table_name_19480, _46current_table_name_17335) == 0);
    // SubProg db_record_key pc: 11 op: NOT_IFW (108)
    if (_10715 != 0)
    goto L1; // [11] 44
    _10715 = NOVALUE;
    // SubProg db_record_key pc: 14 op: STARTLINE (58)

    /** eds.e:2520			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_record_key pc: 16 op: PROC (27)
    RefDS(_table_name_19480);
    _10717 = _46db_select_table(_table_name_19480);
    // SubProg db_record_key pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _10717, 0)){
        DeRef(_10717);
        _10717 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_10717);
    _10717 = NOVALUE;
    // SubProg db_record_key pc: 24 op: STARTLINE (58)

    /** eds.e:2521				fatal(NO_TABLE, "invalid table name given", "db_record_key", {key_location, table_name})*/
    // SubProg db_record_key pc: 26 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_19480);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19479;
    ((intptr_t *)_2)[2] = _table_name_19480;
    _10720 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 30 op: PROC (27)
    RefDS(_10495);
    RefDS(_10719);
    _46fatal(903, _10495, _10719, _10720);
    _10720 = NOVALUE;
    // SubProg db_record_key pc: 36 op: STARTLINE (58)

    /** eds.e:2522				return -1*/
    // SubProg db_record_key pc: 38 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_19479

// block var table_name_19480
    DeRefDS(_table_name_19480);
    return -1;
    // SubProg db_record_key pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 19477 op: 159
    // SubProg db_record_key pc: 43 op: NOP1 (159)
L1: // addr: 44 pc: 43 sub: 19477 op: 159
    // SubProg db_record_key pc: 44 op: STARTLINE (58)

    /** eds.e:2526		if current_table_pos = -1 then*/
    // SubProg db_record_key pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 48 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _46current_table_pos_17334, -1)){
        goto L3; // [48] 71
    }
    // SubProg db_record_key pc: 52 op: STARTLINE (58)

    /** eds.e:2527			fatal(NO_TABLE, "no table selected", "db_record_key", {key_location, table_name})*/
    // SubProg db_record_key pc: 54 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_19480);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19479;
    ((intptr_t *)_2)[2] = _table_name_19480;
    _10722 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 58 op: PROC (27)
    RefDS(_10499);
    RefDS(_10719);
    _46fatal(903, _10499, _10719, _10722);
    _10722 = NOVALUE;
    // SubProg db_record_key pc: 64 op: STARTLINE (58)

    /** eds.e:2528			return -1*/
    // SubProg db_record_key pc: 66 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_19479

// block var table_name_19480
    DeRef(_table_name_19480);
    return -1;
    // SubProg db_record_key pc: 70 op: NOP1 (159)
L3: // addr: 71 pc: 70 sub: 19477 op: 159
    // SubProg db_record_key pc: 71 op: STARTLINE (58)

    /** eds.e:2530		if key_location < 1 or key_location > length(key_pointers) then*/
    // SubProg db_record_key pc: 73 op: LESS (1)
    _10723 = (_key_location_19479 < 1);
    // SubProg db_record_key pc: 77 op: SC1_OR_IF (147)
    if (_10723 != 0) {
        goto L4; // [77] 95
    }
    // SubProg db_record_key pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 83 op: LENGTH (42)
    if (IS_SEQUENCE(_46key_pointers_17340)){
            _10725 = SEQ_PTR(_46key_pointers_17340)->length;
    }
    else {
        _10725 = 1;
    }
    // SubProg db_record_key pc: 86 op: GREATER (6)
    _10726 = (_key_location_19479 > _10725);
    _10725 = NOVALUE;
    // SubProg db_record_key pc: 90 op: NOP1 (159)
    // SubProg db_record_key pc: 91 op: IF (20)
    if (_10726 == 0)
    {
        DeRef(_10726);
        _10726 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_10726);
        _10726 = NOVALUE;
    }
    // SubProg db_record_key pc: 94 op: NOP1 (159)
L4: // addr: 95 pc: 94 sub: 19477 op: 159
    // SubProg db_record_key pc: 95 op: STARTLINE (58)

    /** eds.e:2531			fatal(BAD_RECNO, "bad record number", "db_record_key", {key_location, table_name})*/
    // SubProg db_record_key pc: 97 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_19480);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19479;
    ((intptr_t *)_2)[2] = _table_name_19480;
    _10727 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 101 op: PROC (27)
    RefDS(_10623);
    RefDS(_10719);
    _46fatal(905, _10623, _10719, _10727);
    _10727 = NOVALUE;
    // SubProg db_record_key pc: 107 op: STARTLINE (58)

    /** eds.e:2532			return -1*/
    // SubProg db_record_key pc: 109 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_19479

// block var table_name_19480
    DeRef(_table_name_19480);
    DeRef(_10723);
    _10723 = NOVALUE;
    return -1;
    // SubProg db_record_key pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 19477 op: 159
    // SubProg db_record_key pc: 114 op: STARTLINE (58)

    /** eds.e:2534		return key_value(key_pointers[key_location])*/
    // SubProg db_record_key pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 118 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_46key_pointers_17340);
    _10728 = (object)*(((s1_ptr)_2)->base + _key_location_19479);
    // SubProg db_record_key pc: 122 op: PROC (27)
    Ref(_10728);
    _10729 = _46key_value(_10728);
    _10728 = NOVALUE;
    // SubProg db_record_key pc: 126 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_19479

// block var table_name_19480
    DeRef(_table_name_19480);
    DeRef(_10723);
    _10723 = NOVALUE;
    return _10729;
    // SubProg db_record_key pc: 130 op: BADRETURNF (43)
    ;
}



// 0x380BC881
